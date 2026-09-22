// GENERATED raw decompilation, this-relative refs rewritten to this->Member
// by tools/csp_export/rewrite_member_refs.py (mechanical, CSP member table).
// REFERENCE ONLY - not compiled. Width-matched rewrites; unmatched kept raw.

// ==== 0x00770020  Territory_WorldDominationTour::QueryInterface  this=Territory@WorldDominationTour  sig=csp ====
void **__thiscall Territory_WorldDominationTour::QueryInterface(Territory_WorldDominationTour *this, char a2)
{
  this->vfptr = &vt_WorldDominationTour_Territory; /*0x770026*/
  DeleteAndZero((void **)this + 8); /*0x77002c*/
  DeleteAndZero::Alt((void **)this + 3); /*0x770034*/
  ReferenceCounted::Constructor(this); /*0x77003b*/
  if ( (a2 & 1) != 0 ) /*0x770045*/
    __3_YAXPAX_Z(this); /*0x770048*/
  return &this->vfptr; /*0x770052*/
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


// ==== 0x00770270  WinsockInterface::ProcessPacket  this=DynamicVector  sig=csp ====
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
    String::Assign_Alt(v4, &MEMORY[0x889F64]); /*0x7702a4*/
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
    *v6 = &vt_DynamicVectorClass_unsigned_int; /*0x7702ce*/
    v6[5] = 10; /*0x7702d4*/
    v6[4] = 0; /*0x7702db*/
    v6 += 6; /*0x7702de*/
    --v7; /*0x7702e1*/
  }
  while ( v7 ); /*0x7702e2*/
  *((_DWORD *)this + 235) = Timer::GetTicks(); /*0x7702f6*/
  *((_DWORD *)this + 237) = 0; /*0x7702fc*/
  this->q3B8 = 1; /*0x770305*/
  this->q3BC = 0; /*0x77030c*/
  VectorClass::WstringConstructor((_DWORD *)this + 240, 0, 0); /*0x770312*/
  this->q3C0 = &vt_DynamicVectorClass_Wstring; /*0x770317*/
  *((_DWORD *)this + 245) = 10; /*0x77031d*/
  this->q03D = 0; /*0x770324*/
  *((_DWORD *)this + 246) = 0; /*0x770327*/
  Audio::GetEnabled(); /*0x77032d*/
  String::Assign((char **)&a2, MEMORY[0x8491C4]); /*0x77033b*/
  String::Reassign((char **)this + 1, (const char **)&a2); /*0x770348*/
  DeleteAndZero((void **)&a2); /*0x770351*/
  String::Assign((char **)&a2, MEMORY[0x8491BC]); /*0x77035f*/
  String::Reassign((char **)this + 38, (const char **)&a2); /*0x77036f*/
  DeleteAndZero((void **)&a2); /*0x770378*/
  String::Assign((char **)&a2, MEMORY[0x8491B4]); /*0x770386*/
  String::Reassign((char **)this + 75, (const char **)&a2); /*0x770396*/
  DeleteAndZero((void **)&a2); /*0x77039f*/
  String::Assign((char **)&a2, stru_8489C0); /*0x7703ad*/
  String::Reassign((char **)this + 112, (const char **)&a2); /*0x7703bd*/
  DeleteAndZero((void **)&a2); /*0x7703c6*/
  String::Assign((char **)&a2, MEMORY[0x8491AC]); /*0x7703d4*/
  String::Reassign((char **)this + 149, (const char **)&a2); /*0x7703e4*/
  DeleteAndZero((void **)&a2); /*0x7703ed*/
  String::Assign((char **)&a2, MEMORY[0x8491A0]); /*0x7703fb*/
  String::Reassign((char **)this + 186, (const char **)&a2); /*0x77040b*/
  DeleteAndZero((void **)&a2); /*0x770414*/
  return this; /*0x77041b*/
}


// ==== 0x00770430  ObjectClass::System_Init  this=ObjectClass  sig=csp ====
void __thiscall sub_770430(int this)
{
  void *v2; // ecx
  int v3; // eax
  void *v4; // esi
  int v5; // esi
  int v6; // ebp
  void *v7; // eax
  void **v8; // esi
  int v9; // ebx
  int v10; // edi
  int v11; // [esp+10h] [ebp-8h]

  if ( *(int *)(this + 976) > 0 ) /*0x770440*/
  {
    StopThemeClass(1); /*0x770444*/
    (*(void (__thiscall **)(int))(*(_DWORD *)(this + 960) + 12))(this + 960); /*0x770455*/
  }
  *(_DWORD *)(this + 940) = Timer::GetTicks(); /*0x770469*/
  *(_DWORD *)(this + 944) = v11; /*0x77046f*/
  *(_DWORD *)(this + 948) = 0; /*0x770472*/
  v2 = *(void **)(this + 984); /*0x770475*/
  if ( v2 ) /*0x77047d*/
    AudioSample::Destructor(v2); /*0x77047f*/
  v3 = *(_DWORD *)(this + 964); /*0x770484*/
  *(_DWORD *)(this + 960) = &vt_VectorClass_Wstring; /*0x77048a*/
  if ( v3 && *(_BYTE *)(this + 973) ) /*0x770498*/
  {
    v4 = (void *)(v3 - 4); /*0x7704a7*/
    Array::ForEachReverse(v3, 4, *(_DWORD *)(v3 - 4), (int (__thiscall *)(int))DeleteAndZero); /*0x7704b3*/
    __3_YAXPAX_Z(v4); /*0x7704b9*/
    *(_DWORD *)(this + 964) = 0; /*0x7704c1*/
  }
  *(_BYTE *)(this + 973) = 0; /*0x7704c8*/
  *(_DWORD *)(this + 968) = 0; /*0x7704ce*/
  v5 = this + 940; /*0x7704d4*/
  v6 = 2; /*0x7704da*/
  do /*0x770507*/
  {
    v7 = *(void **)(v5 - 20); /*0x7704df*/
    v5 -= 24; /*0x7704e2*/
    *(_DWORD *)v5 = &vt_VectorClass_unsigned_int; /*0x7704e7*/
    if ( v7 && *(_BYTE *)(v5 + 13) ) /*0x7704ef*/
    {
      __3_YAXPAX_Z(v7); /*0x7704f5*/
      *(_DWORD *)(v5 + 4) = 0; /*0x7704fd*/
    }
    --v6; /*0x770500*/
    *(_BYTE *)(v5 + 13) = 0; /*0x770501*/
    *(_DWORD *)(v5 + 8) = 0; /*0x770504*/
  }
  while ( v6 ); /*0x770507*/
  v8 = (void **)(this + 892); /*0x770509*/
  v9 = 6; /*0x77050f*/
  v10 = this + 896; /*0x770515*/
  do /*0x77053b*/
  {
    v10 -= 148; /*0x77051d*/
    v8 -= 37; /*0x770528*/
    Array::ForEachReverse(v10, 24, 6, (int (__thiscall *)(int))sub_771A00); /*0x77052e*/
    DeleteAndZero(v8); /*0x770535*/
    --v9; /*0x77053a*/
  }
  while ( v9 ); /*0x77053b*/
}


// ==== 0x00770550  Animation::LoadSidebarAnimations  this=ObjectClass  sig=csp ====
void __thiscall Animation::LoadSidebarAnimations(ObjectClass *this, _DWORD *a1, ObjectClass *aP2)
{
  ObjectClass *v3; // ebx
  ObjectClass *v4; // ebp
  ObjectClass *v5; // edi
  ObjectClass *v6; // esi
  Selection_WorldDominationTour *v7; // eax
  ObjectClass *i; // edi
  int owningHouseIndex; // ecx
  int v10; // eax
  int attachedTag; // eax
  void *nextObject; // eax
  int objectTypeFlags; // edx
  Selection_WorldDominationTour *v14; // eax
  ObjectClass *j; // edi
  int v16; // ecx
  ObjectClass *v17; // eax
  ObjectClass *v18; // ebx
  int v19; // eax
  int v20; // eax
  int v21; // edx
  ObjectClass *v22; // [esp+10h] [ebp-10h]
  void *v23; // [esp+14h] [ebp-Ch] BYREF
  ObjectClass *v24; // [esp+18h] [ebp-8h] BYREF
  int v25; // [esp+1Ch] [ebp-4h]

  v3 = aP2; /*0x770554*/
  v4 = (ObjectClass *)a1; /*0x770559*/
  v22 = this; /*0x77055f*/
  v5 = (ObjectClass *)&this->__pad_0[4]; /*0x770563*/
  v24 = (ObjectClass *)6; /*0x770566*/
  while ( 1 ) /*0x770574*/
  {
    v6 = *(ObjectClass **)this->__pad_0; /*0x770574*/
    String::Assign((char **)&aP2, &stru_830620.__pad_579C[33740]); /*0x77057f*/
    INIClass::ReadTokenizedPair((char **)v5, v4, v3, v6, 0, (ObjectClass *)&aP2); /*0x770590*/
    DeleteAndZero((void **)&aP2); /*0x770599*/
    String::Assign((char **)&a1, &stru_830620.__pad_579C[33732]); /*0x7705a7*/
    INIClass::ReadTokenizedPair((char **)v5, v4, v3, v6, 1, (ObjectClass *)&a1); /*0x7705b8*/
    DeleteAndZero((void **)&a1); /*0x7705c1*/
    String::Assign((char **)&v23, aDraw); /*0x7705cf*/
    INIClass::ReadTokenizedPair((char **)v5, v4, v3, v6, 2, (ObjectClass *)&v23); /*0x7705e0*/
    DeleteAndZero(&v23); /*0x7705e9*/
    v5 = (ObjectClass *)((char *)v5 + 148); /*0x7705f2*/
    v24 = (ObjectClass *)((char *)v24 - 1); /*0x7705f9*/
    if ( !v24 ) /*0x7705fd*/
      break; /*0x7705fd*/
    this = v22; /*0x770570*/
  }
  String::Assign((char **)&v23, aStartup); /*0x77060c*/
  v7 = StaticString::Factory(*(void **)v22->__pad_0); /*0x77061c*/
  ConcatStringAlloc((char **)&v24, (const char **)v7, (char **)&v23); /*0x770627*/
  unknown_libname_73(&a1); /*0x770630*/
  String::Assign((char **)&aP2, &MEMORY[0x87F8E4].__pad_5568[20760]); /*0x77063e*/
  INIClass::ReadString(v4, v3, (ObjectClass *)&v24, (ReferenceCounted *)&aP2, (int)&a1); /*0x770655*/
  DeleteAndZero((void **)&aP2); /*0x77065e*/
  (*((void (__thiscall **)(void **))v22[5].NeedsSaveOrLink + 3))(&v22[5].NeedsSaveOrLink); /*0x770671*/
  unknown_libname_73(&aP2); /*0x770678*/
  for ( i = (ObjectClass *)String::Tokenize((const char **)&a1, 0, &MEMORY[0x817F70], (ObjectClass *)&aP2); /*0x770697*/
        i != (ObjectClass *)-1;
        i = (ObjectClass *)String::Tokenize((const char **)&a1, (int)i, &MEMORY[0x817F70], (ObjectClass *)&aP2) )
  {
    __1_Timevec_std__QAE_XZ((std::_Timevec *)&aP2); /*0x77069d*/
    owningHouseIndex = v22[5].owningHouseIndex; /*0x7706a2*/
    v25 = v10; /*0x7706a5*/
    if ( (int)v22[5].nextObject >= owningHouseIndex ) /*0x7706ac*/
    {
      if ( !BYTE1(v22[5].fallRate) && owningHouseIndex ) /*0x7706b7*/
        continue; /*0x7706b7*/
      attachedTag = (int)v22[5].attachedTag; /*0x7706b9*/
      if ( attachedTag <= 0 /*0x7706c9*/
        || !(*((unsigned __int8 (__thiscall **)(void **, int, _DWORD))v22[5].NeedsSaveOrLink + 2))(
              &v22[5].NeedsSaveOrLink,
              owningHouseIndex + attachedTag,
              0) )
      {
        continue; /*0x7706c9*/
      }
    }
    nextObject = v22[5].nextObject; /*0x7706d0*/
    objectTypeFlags = v22[5].objectTypeFlags; /*0x7706d3*/
    v22[5].nextObject = (char *)nextObject + 1; /*0x7706d9*/
    *(_DWORD *)(objectTypeFlags + 4 * (_DWORD)nextObject) = v25; /*0x7706e0*/
  }
  DeleteAndZero((void **)&aP2); /*0x770702*/
  DeleteAndZero((void **)&a1); /*0x77070b*/
  DeleteAndZero((void **)&v24); /*0x770714*/
  DeleteAndZero(&v23); /*0x77071d*/
  String::Assign((char **)&v23, aTerritoryselec); /*0x77072b*/
  v14 = StaticString::Factory(*(void **)v22->__pad_0); /*0x77073b*/
  ConcatStringAlloc((char **)&v24, (const char **)v14, (char **)&v23); /*0x770746*/
  unknown_libname_73(&a1); /*0x77074f*/
  String::Assign((char **)&aP2, &MEMORY[0x87F8E4].__pad_5568[20760]); /*0x77075d*/
  INIClass::ReadString(v4, v3, (ObjectClass *)&v24, (ReferenceCounted *)&aP2, (int)&a1); /*0x770774*/
  DeleteAndZero((void **)&aP2); /*0x77077d*/
  (*((void (__thiscall **)(void **))v22[5].attachedBomb + 3))(&v22[5].attachedBomb); /*0x770790*/
  unknown_libname_73(&aP2); /*0x770797*/
  for ( j = (ObjectClass *)String::Tokenize((const char **)&a1, 0, &MEMORY[0x817F70], (ObjectClass *)&aP2); /*0x7707b6*/
        j != (ObjectClass *)-1;
        j = (ObjectClass *)String::Tokenize((const char **)&a1, (int)j, &MEMORY[0x817F70], (ObjectClass *)&aP2) )
  {
    __1_Timevec_std__QAE_XZ((std::_Timevec *)&aP2); /*0x7707bc*/
    v16 = v22[5].ambientSoundController[1]; /*0x7707c1*/
    v18 = v17; /*0x7707c4*/
    if ( v22[5].ambientSoundController[3] >= v16 ) /*0x7707c9*/
    {
      if ( !BYTE1(v22[5].ambientSoundController[2]) && v16 ) /*0x7707d4*/
        continue; /*0x7707d4*/
      v19 = v22[5].ambientSoundController[4]; /*0x7707d6*/
      if ( v19 <= 0 /*0x7707e6*/
        || !(*((unsigned __int8 (__thiscall **)(void **, int, _DWORD))v22[5].attachedBomb + 2))(
              &v22[5].attachedBomb,
              v16 + v19,
              0) )
      {
        continue; /*0x7707e6*/
      }
    }
    v20 = v22[5].ambientSoundController[3]; /*0x7707ed*/
    v21 = v22[5].ambientSoundController[0]; /*0x7707f0*/
    v22[5].ambientSoundController[3] = v20 + 1; /*0x7707f6*/
    *(_DWORD *)(v21 + 4 * v20) = v18; /*0x7707f9*/
  }
  DeleteAndZero((void **)&aP2); /*0x77081b*/
  DeleteAndZero((void **)&a1); /*0x770824*/
  DeleteAndZero((void **)&v24); /*0x77082d*/
  DeleteAndZero(&v23); /*0x770836*/
}


// ==== 0x00770850  ObjectClass::method  this=ObjectClass  sig=csp ====
void __thiscall sub_770850(void **this, _DWORD *a1, char **a2, int a4, ObjectClass *aP4)
{
  Selection_WorldDominationTour *v6; // eax
  int v7; // eax
  void **v8; // esi
  int i; // edi
  void *v10; // ecx
  int v11; // eax
  int v12; // ebx
  int v13; // eax
  void *v14; // eax
  ObjectClass *v15; // edx
  char **v16; // [esp-4h] [ebp-14h]
  char *v17; // [esp+8h] [ebp-8h] BYREF
  char *a2a; // [esp+Ch] [ebp-4h] BYREF

  v16 = (char **)aP4; /*0x77085b*/
  v6 = StaticString::Factory(*this); /*0x77085e*/
  ConcatStringAlloc(&a2a, (const char **)v6, v16); /*0x770869*/
  unknown_libname_73(&v17); /*0x770872*/
  String::Assign((char **)&aP4, &MEMORY[0x87F8E4].__pad_5568[20760]); /*0x770880*/
  INIClass::ReadString((ObjectClass *)a1, (ObjectClass *)a2, (ObjectClass *)&a2a, (ReferenceCounted *)&aP4, (int)&v17); /*0x77089d*/
  DeleteAndZero((void **)&aP4); /*0x7708a6*/
  v7 = (int)*(this + 6 * a4 + 223); /*0x7708b2*/
  v8 = this + 6 * a4 + 223; /*0x7708b9*/
  (*(void (__thiscall **)(void **))(v7 + 12))(v8); /*0x7708c2*/
  unknown_libname_73(&aP4); /*0x7708c9*/
  for ( i = String::Tokenize((const char **)&v17, 0, &MEMORY[0x817F70], (ObjectClass *)&aP4); /*0x7708e8*/
        i != -1;
        i = String::Tokenize((const char **)&v17, i, &MEMORY[0x817F70], (ObjectClass *)&aP4) )
  {
    __1_Timevec_std__QAE_XZ((std::_Timevec *)&aP4); /*0x7708ef*/
    v10 = v8[2]; /*0x7708f4*/
    v12 = v11; /*0x7708f7*/
    if ( (int)v8[4] >= (int)v10 ) /*0x7708fc*/
    {
      if ( !*((_BYTE *)v8 + 13) && v10 ) /*0x770907*/
        continue; /*0x770907*/
      v13 = (int)v8[5]; /*0x770909*/
      if ( v13 <= 0 || !(*((unsigned __int8 (__thiscall **)(void **, int, _DWORD))*v8 + 2))(v8, (int)v10 + v13, 0) ) /*0x770919*/
        continue; /*0x770919*/
    }
    v14 = v8[4]; /*0x770920*/
    v15 = (ObjectClass *)v8[1]; /*0x770923*/
    v8[4] = (char *)v14 + 1; /*0x770929*/
    *(_DWORD *)&v15->__pad_0[4 * (_DWORD)v14] = v12; /*0x77092c*/
  }
  DeleteAndZero((void **)&aP4); /*0x77094f*/
  DeleteAndZero((void **)&v17); /*0x770958*/
  DeleteAndZero((void **)&a2a); /*0x770961*/
}


// ==== 0x00770970  ObjectClass::method  this=ObjectClass  sig=csp ====
char __thiscall sub_770970(int *this, int a2, int a3, void **a4)
{
  char **v4; // ebx
  int v5; // edi
  int v6; // esi
  int v7; // eax
  int v9; // eax
  int v10; // edx
  char **v11; // eax
  char **v12; // eax
  char **v13; // eax
  char **v14; // eax
  void *v15; // [esp+Ch] [ebp-4h] BYREF

  v4 = (char **)a4; /*0x770976*/
  v5 = *this; /*0x77097f*/
  v6 = (int)(this + 37 * a2 + 12 * a3 + 2); /*0x770990*/
  DeleteAndZero::Alt2(a4); /*0x770996*/
  v7 = *(_DWORD *)(v6 + 16); /*0x77099b*/
  if ( v7 <= 0 ) /*0x7709a0*/
    return 0; /*0x7709a4*/
  if ( v7 == 1 ) /*0x7709ae*/
    v9 = 0; /*0x7709b0*/
  else
    v9 = Random::Range(MEMORY[0x886B88], 0, v7 - 1); /*0x7709bd*/
  v10 = *(_DWORD *)(*(_DWORD *)(v6 + 4) + 4 * v9); /*0x7709ca*/
  if ( v5 == 3 ) /*0x7709cd*/
  {
    v11 = FormatStringInt((char **)&a3, v10, 2); /*0x7709d3*/
    v12 = ProcessStringAndCopy((char **)&a2, MEMORY[0x8491FC], v11); /*0x7709e2*/
    String::Reassign(v4, (const char **)v12); /*0x7709ea*/
    DeleteAndZero((void **)&a2); /*0x7709f3*/
    DeleteAndZero((void **)&a3); /*0x7709fc*/
  }
  else
  {
    v13 = FormatStringInt((char **)&v15, v10, 2); /*0x770a0e*/
    v14 = ProcessStringAndCopy((char **)&a4, g_Str_WWD_Allied, v13); /*0x770a1d*/
    String::Reassign(v4, (const char **)v14); /*0x770a25*/
    DeleteAndZero((void **)&a4); /*0x770a2e*/
    DeleteAndZero(&v15); /*0x770a37*/
  }
  return 1; /*0x7709a2*/
}


// ==== 0x00770A50  ObjectClass::method_770A50  this=ObjectClass  sig=csp ====
char __thiscall sub_770A50(int *this, int a2, int a3, void **a4)
{
  char **v4; // ebx
  int v5; // edi
  int v6; // esi
  int v7; // eax
  int v9; // eax
  int v10; // edx
  char **v11; // eax
  char **v12; // eax
  char **v13; // eax
  char **v14; // eax
  void *v15; // [esp+Ch] [ebp-4h] BYREF

  v4 = (char **)a4; /*0x770a56*/
  v5 = *this; /*0x770a5f*/
  v6 = (int)(this + 37 * a2 + 12 * a3 + 8); /*0x770a70*/
  DeleteAndZero::Alt2(a4); /*0x770a76*/
  v7 = *(_DWORD *)(v6 + 16); /*0x770a7b*/
  if ( v7 <= 0 ) /*0x770a80*/
    return 0; /*0x770a84*/
  if ( v7 == 1 ) /*0x770a8e*/
    v9 = 0; /*0x770a90*/
  else
    v9 = Random::Range(MEMORY[0x886B88], 0, v7 - 1); /*0x770a9d*/
  v10 = *(_DWORD *)(*(_DWORD *)(v6 + 4) + 4 * v9); /*0x770aaa*/
  if ( v5 == 3 ) /*0x770aad*/
  {
    v11 = FormatStringInt((char **)&a3, v10, 2); /*0x770ab3*/
    v12 = ProcessStringAndCopy((char **)&a2, MEMORY[0x8491FC], v11); /*0x770ac2*/
    String::Reassign(v4, (const char **)v12); /*0x770aca*/
    DeleteAndZero((void **)&a2); /*0x770ad3*/
    DeleteAndZero((void **)&a3); /*0x770adc*/
  }
  else
  {
    v13 = FormatStringInt((char **)&v15, v10, 2); /*0x770aee*/
    v14 = ProcessStringAndCopy((char **)&a4, g_Str_WWD_Allied, v13); /*0x770afd*/
    String::Reassign(v4, (const char **)v14); /*0x770b05*/
    DeleteAndZero((void **)&a4); /*0x770b0e*/
    DeleteAndZero(&v15); /*0x770b17*/
  }
  return 1; /*0x770a82*/
}


// ==== 0x00770B30  ObjectClass::method_770B30  this=ObjectClass  sig=csp ====
char __thiscall sub_770B30(int *this, int a2, void **a3)
{
  char **v3; // ebx
  int v4; // edi
  int v5; // esi
  int v6; // eax
  int v8; // eax
  int v9; // edx
  char **v10; // eax
  char **v11; // eax
  char **v12; // eax
  char **v13; // eax
  void *v14; // [esp+Ch] [ebp-8h] BYREF
  void *v15; // [esp+10h] [ebp-4h] BYREF

  v3 = (char **)a3; /*0x770b38*/
  v4 = *this; /*0x770b41*/
  v5 = (int)(this + 6 * a2 + 223); /*0x770b43*/
  DeleteAndZero::Alt2(a3); /*0x770b4c*/
  v6 = *(_DWORD *)(v5 + 16); /*0x770b51*/
  if ( v6 <= 0 ) /*0x770b56*/
    return 0; /*0x770b5a*/
  if ( v6 == 1 ) /*0x770b66*/
    v8 = 0; /*0x770b68*/
  else
    v8 = Random::Range(MEMORY[0x886B88], 0, v6 - 1); /*0x770b75*/
  v9 = *(_DWORD *)(*(_DWORD *)(v5 + 4) + 4 * v8); /*0x770b82*/
  if ( v4 == 3 ) /*0x770b85*/
  {
    v10 = FormatStringInt((char **)&a3, v9, 2); /*0x770b8b*/
    v11 = ProcessStringAndCopy((char **)&a2, MEMORY[0x8491FC], v10); /*0x770b9a*/
    String::Reassign(v3, (const char **)v11); /*0x770ba2*/
    DeleteAndZero((void **)&a2); /*0x770bab*/
    DeleteAndZero((void **)&a3); /*0x770bb4*/
  }
  else
  {
    v12 = FormatStringInt((char **)&v15, v9, 2); /*0x770bc8*/
    v13 = ProcessStringAndCopy((char **)&v14, g_Str_WWD_Allied, v12); /*0x770bd7*/
    String::Reassign(v3, (const char **)v13); /*0x770bdf*/
    DeleteAndZero(&v14); /*0x770be8*/
    DeleteAndZero(&v15); /*0x770bf1*/
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
    v8 = Random::Range(MEMORY[0x886B88], 0, v6 - 1); /*0x770c49*/
  v9 = *(_DWORD *)(*(_DWORD *)(a2 + 4) + 4 * v8); /*0x770c56*/
  if ( a1 == 3 ) /*0x770c59*/
  {
    v10 = FormatStringInt((char **)&v14, v9, 2); /*0x770c5f*/
    v11 = ProcessStringAndCopy((char **)&a3, MEMORY[0x8491FC], v10); /*0x770c6e*/
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


// ==== 0x00770CE0  Map_Remove_770CE0  this=-  sig=csp ====
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
    v4 = ProcessStringAndCopy((char **)&v8, MEMORY[0x8491FC], v3); /*0x770cfd*/
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
void __fastcall sub_770D70(const char **a1, _DWORD *a2)
{
  int i; // edi
  int v5; // ecx
  int v6; // eax
  int v7; // ebp
  int v8; // eax
  int v9; // eax
  int v10; // edx
  int v11; // [esp+Ch] [ebp-4h] BYREF

  (*(void (__thiscall **)(_DWORD *))(*a2 + 12))(a2); /*0x770d7c*/
  unknown_libname_73(&v11); /*0x770d83*/
  for ( i = String::Tokenize(a1, 0, &MEMORY[0x817F70], (ObjectClass *)&v11); /*0x770da0*/
        i != -1;
        i = String::Tokenize(a1, i, &MEMORY[0x817F70], (ObjectClass *)&v11) )
  {
    __1_Timevec_std__QAE_XZ((std::_Timevec *)&v11); /*0x770da7*/
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
  DeleteAndZero((void **)&v11); /*0x770e05*/
}


// ==== 0x00770E70  ObjectClass::method_770E70  this=ObjectClass  sig=csp ====
void __userpurge sub_770E70(char **this@<ecx>, ObjectClass *aP1, ObjectClass *aP2, ObjectClass aP3)
{
  ObjectClass *v5; // edi
  ObjectClass *v6; // [esp+10h] [ebp-4h] BYREF

  String::Assign((char **)&v6, &stru_830620.__pad_579C[33740]); /*0x770e80*/
  v5 = *(ObjectClass **)aP3.__pad_0; /*0x770e85*/
  INIClass::ReadTokenizedPair(this, aP1, aP2, *(ObjectClass **)aP3.__pad_0, 0, (ObjectClass *)&v6); /*0x770e9d*/
  DeleteAndZero((void **)&v6); /*0x770ea6*/
  String::Assign((char **)&aP3, &stru_830620.__pad_579C[33732]); /*0x770eb4*/
  INIClass::ReadTokenizedPair(this, aP1, aP2, v5, 1, &aP3); /*0x770ec5*/
  DeleteAndZero((void **)&aP3); /*0x770ece*/
  String::Assign((char **)&aP3, aDraw); /*0x770edc*/
  INIClass::ReadTokenizedPair(this, aP1, aP2, v5, 2, &aP3); /*0x770eed*/
  DeleteAndZero((void **)&aP3); /*0x770ef6*/
}


// ==== 0x00770F10  ObjectClass::method_770F10  this=ObjectClass  sig=csp ====
char __thiscall sub_770F10(void *this, int a2, int a3, void **a4)
{
  char **v4; // edi
  int v5; // esi
  int v6; // eax
  int v8; // eax
  int v9; // edx
  char **v10; // eax
  char **v11; // eax
  char **v12; // eax
  char **v13; // eax
  void *v14; // [esp+8h] [ebp-4h] BYREF

  v4 = (char **)a4; /*0x770f17*/
  v5 = (int)this + 48 * a3 + 4; /*0x770f21*/
  DeleteAndZero::Alt2(a4); /*0x770f27*/
  v6 = *(_DWORD *)(v5 + 16); /*0x770f2c*/
  if ( v6 <= 0 ) /*0x770f31*/
    return 0; /*0x770f34*/
  if ( v6 == 1 ) /*0x770f3e*/
    v8 = 0; /*0x770f40*/
  else
    v8 = Random::Range(MEMORY[0x886B88], 0, v6 - 1); /*0x770f4d*/
  v9 = *(_DWORD *)(*(_DWORD *)(v5 + 4) + 4 * v8); /*0x770f57*/
  if ( a2 == 3 ) /*0x770f61*/
  {
    v10 = FormatStringInt((char **)&a4, v9, 2); /*0x770f67*/
    v11 = ProcessStringAndCopy((char **)&a3, MEMORY[0x8491FC], v10); /*0x770f76*/
    String::Reassign(v4, (const char **)v11); /*0x770f7e*/
    DeleteAndZero((void **)&a3); /*0x770f87*/
    DeleteAndZero((void **)&a4); /*0x770f90*/
  }
  else
  {
    v12 = FormatStringInt((char **)&v14, v9, 2); /*0x770fa1*/
    v13 = ProcessStringAndCopy((char **)&a2, g_Str_WWD_Allied, v12); /*0x770fb0*/
    String::Reassign(v4, (const char **)v13); /*0x770fb8*/
    DeleteAndZero((void **)&a2); /*0x770fc1*/
    DeleteAndZero(&v14); /*0x770fca*/
  }
  return 1; /*0x770f33*/
}


// ==== 0x00770FE0  ObjectClass::method_770FE0  this=ObjectClass  sig=csp ====
char __thiscall sub_770FE0(void *this, int a2, int a3, void **a4)
{
  char **v4; // edi
  int v5; // esi
  int v6; // eax
  int v8; // eax
  int v9; // edx
  char **v10; // eax
  char **v11; // eax
  char **v12; // eax
  char **v13; // eax
  void *v14; // [esp+8h] [ebp-4h] BYREF

  v4 = (char **)a4; /*0x770fe7*/
  v5 = (int)this + 48 * a3 + 28; /*0x770ff1*/
  DeleteAndZero::Alt2(a4); /*0x770ff7*/
  v6 = *(_DWORD *)(v5 + 16); /*0x770ffc*/
  if ( v6 <= 0 ) /*0x771001*/
    return 0; /*0x771004*/
  if ( v6 == 1 ) /*0x77100e*/
    v8 = 0; /*0x771010*/
  else
    v8 = Random::Range(MEMORY[0x886B88], 0, v6 - 1); /*0x77101d*/
  v9 = *(_DWORD *)(*(_DWORD *)(v5 + 4) + 4 * v8); /*0x771027*/
  if ( a2 == 3 ) /*0x771031*/
  {
    v10 = FormatStringInt((char **)&a4, v9, 2); /*0x771037*/
    v11 = ProcessStringAndCopy((char **)&a3, MEMORY[0x8491FC], v10); /*0x771046*/
    String::Reassign(v4, (const char **)v11); /*0x77104e*/
    DeleteAndZero((void **)&a3); /*0x771057*/
    DeleteAndZero((void **)&a4); /*0x771060*/
  }
  else
  {
    v12 = FormatStringInt((char **)&v14, v9, 2); /*0x771071*/
    v13 = ProcessStringAndCopy((char **)&a2, g_Str_WWD_Allied, v12); /*0x771080*/
    String::Reassign(v4, (const char **)v13); /*0x771088*/
    DeleteAndZero((void **)&a2); /*0x771091*/
    DeleteAndZero(&v14); /*0x77109a*/
  }
  return 1; /*0x771003*/
}


// ==== 0x007710B0  INIClass::ReadTokenizedPair  this=ObjectClass  sig=csp ====
void __thiscall INIClass::ReadTokenizedPair(
        char **this,
        ObjectClass *aP1,
        ObjectClass *aP2,
        ObjectClass *aP3,
        int a5,
        ObjectClass *aP5)
{
  Selection_WorldDominationTour *v7; // eax
  char **v8; // eax
  char **v9; // ebx
  ObjectClass *i; // edi
  char *v11; // ecx
  int v12; // eax
  int v13; // ebp
  int v14; // eax
  char *v15; // eax
  ObjectClass *v16; // edx
  char **v17; // esi
  ObjectClass *j; // edi
  char *v19; // ecx
  ObjectClass *v20; // eax
  ObjectClass *v21; // ebx
  int v22; // eax
  char *v23; // eax
  ObjectClass *v24; // edx
  ObjectClass *v26; // [esp+0h] [ebp-14h]
  char *a2; // [esp+10h] [ebp-4h] BYREF

  v26 = aP5; /*0x7710be*/
  v7 = StaticString::Factory(aP3); /*0x7710c5*/
  v8 = ConcatStringAlloc((ObjectClass *)&aP3, (const char **)v7, this); /*0x7710d0*/
  String::Concat((const char **)v8, &a2, (IUnknown *)v26); /*0x7710d7*/
  DeleteAndZero((int)&aP3); /*0x7710e0*/
  unknown_libname_73(&aP5); /*0x7710e9*/
  String::Assign((char **)&aP3, &stru_87C374.__pad_579C[33876]); /*0x7710f7*/
  INIClass::ReadString(aP1, aP2, (ObjectClass *)&a2, (ReferenceCounted *)&aP3, (int)&aP5); /*0x771114*/
  DeleteAndZero((int)&aP3); /*0x77111d*/
  v9 = this + 12 * a5; /*0x77112c*/
  (*((void (__thiscall **)(char **))v9[1] + 3))(v9 + 1); /*0x771137*/
  unknown_libname_73(&aP3); /*0x77113e*/
  for ( i = (ObjectClass *)String::Tokenize( /*0x77115d*/
                             (const char **)&aP5,
                             0,
                             (ObjectClass *)&stru_817F40.nextObject,
                             (ObjectClass *)&aP3);
        i != (ObjectClass *)-1;
        i = (ObjectClass *)String::Tokenize(
                             (const char **)&aP5,
                             (int)i,
                             (ObjectClass *)&stru_817F40.nextObject,
                             (ObjectClass *)&aP3) )
  {
    __1_Timevec_std__QAE_XZ((const char **)&aP3); /*0x771164*/
    v11 = v9[3]; /*0x771169*/
    v13 = v12; /*0x77116c*/
    if ( (int)v9[5] >= (int)v11 ) /*0x771171*/
    {
      if ( !*((_BYTE *)v9 + 17) && v11 ) /*0x77117c*/
        continue; /*0x77117c*/
      v14 = (int)v9[6]; /*0x77117e*/
      if ( v14 <= 0 || !(*((unsigned __int8 (__thiscall **)(char **, char *, _DWORD))v9[1] + 2))(v9 + 1, &v11[v14], 0) ) /*0x77118e*/
        continue; /*0x77118e*/
    }
    v15 = v9[5]; /*0x771195*/
    v16 = (ObjectClass *)v9[2]; /*0x771198*/
    v9[5] = v15 + 1; /*0x77119e*/
    *(_DWORD *)&v16->__pad_0[4 * (_DWORD)v15] = v13; /*0x7711a1*/
  }
  DeleteAndZero((int)&aP3); /*0x7711c4*/
  String::Append((const char **)&a2, (CCINIClass *)&g_Str_WWD_Allied.sectionHead[2]); /*0x7711d2*/
  String::Assign((char **)&aP3, &stru_87C374.__pad_579C[33876]); /*0x7711e0*/
  INIClass::ReadString(aP1, aP2, (ObjectClass *)&a2, (ReferenceCounted *)&aP3, (int)&aP5); /*0x7711fd*/
  DeleteAndZero((int)&aP3); /*0x771206*/
  v17 = v9 + 7; /*0x77120e*/
  (*((void (__thiscall **)(char **))v9[7] + 3))(v9 + 7); /*0x771213*/
  unknown_libname_73(&aP2); /*0x77121a*/
  for ( j = (ObjectClass *)String::Tokenize( /*0x771239*/
                             (const char **)&aP5,
                             0,
                             (ObjectClass *)&stru_817F40.nextObject,
                             (ObjectClass *)&aP2);
        j != (ObjectClass *)-1;
        j = (ObjectClass *)String::Tokenize(
                             (const char **)&aP5,
                             (int)j,
                             (ObjectClass *)&stru_817F40.nextObject,
                             (ObjectClass *)&aP2) )
  {
    __1_Timevec_std__QAE_XZ((const char **)&aP2); /*0x77123f*/
    v19 = v17[2]; /*0x771244*/
    v21 = v20; /*0x771247*/
    if ( (int)v17[4] >= (int)v19 ) /*0x77124c*/
    {
      if ( !*((_BYTE *)v17 + 13) && v19 ) /*0x771257*/
        continue; /*0x771257*/
      v22 = (int)v17[5]; /*0x771259*/
      if ( v22 <= 0 || !(*((unsigned __int8 (__thiscall **)(char **, char *, _DWORD))*v17 + 2))(v17, &v19[v22], 0) ) /*0x771269*/
        continue; /*0x771269*/
    }
    v23 = v17[4]; /*0x771270*/
    v24 = (ObjectClass *)v17[1]; /*0x771273*/
    v17[4] = v23 + 1; /*0x771279*/
    *(_DWORD *)&v24->__pad_0[4 * (_DWORD)v23] = v21; /*0x77127c*/
  }
  DeleteAndZero((int)&aP2); /*0x77129e*/
  DeleteAndZero((int)&aP5); /*0x7712a7*/
  DeleteAndZero((int)&a2); /*0x7712b0*/
}


// ==== 0x007712C0  ScoreScreen::RemoveItem  this=ScoreScreen  sig=csp ====
void __thiscall ScoreScreen::RemoveItem(int this, int a2, int a3, ObjectClass *aP3, char a5, int a6)
{
  int v7; // eax
  int v8; // ebx
  int v9; // eax
  int v10; // eax
  int v11; // esi
  int v12; // edx
  int v13; // ebx
  int v14; // ecx
  int v15; // esi
  int v16; // eax
  int v17; // eax
  int v18; // ebp
  int v19; // eax
  int v20; // eax
  int v21; // ecx
  int v22; // eax
  int v23; // eax
  void *v24[4]; // [esp+10h] [ebp-10h] BYREF

  v7 = *(_DWORD *)(this + 976); /*0x7712d5*/
  v8 = v7 - 1; /*0x7712d7*/
  if ( v7 > *(_DWORD *)(this + 956) ) /*0x7712da*/
  {
    do /*0x77131c*/
    {
      v9 = *(_DWORD *)(this + 976); /*0x7712dc*/
      if ( v8 < v9 ) /*0x7712e4*/
      {
        v10 = v9 - 1; /*0x7712e6*/
        v11 = v8; /*0x7712e7*/
        for ( *(_DWORD *)(this + 976) = v10; v11 < *(_DWORD *)(this + 976); ++v11 ) /*0x7712f1*/
          String::Reassign( /*0x771301*/
            (char **)(*(_DWORD *)(this + 964) + 4 * v11),
            (AbstractClass *)(*(_DWORD *)(this + 964) + 4 * v11 + 4));
      }
      v12 = v8--; /*0x771317*/
    }
    while ( v12 > *(_DWORD *)(this + 956) ); /*0x77131c*/
  }
  if ( !*(_DWORD *)(this + 956) ) /*0x77131e*/
    *(_BYTE *)(this + 952) = 1; /*0x771328*/
  unknown_libname_73(v24); /*0x771333*/
  v13 = 48 * a3 + this + 148 * a2; /*0x771352*/
  if ( Map_Remove(*(_DWORD *)this, v13 + 8, v24) )
  {
    if ( !(unsigned __int8)Audio::IsPlaying() ) /*0x77136a*/
    {
      *(_DWORD *)(this + 940) = Timer::GetTicks(); /*0x771386*/
      *(void **)(this + 944) = v24[2]; /*0x771390*/
      *(_DWORD *)(this + 948) = a6; /*0x771393*/
    }
    v14 = *(_DWORD *)(this + 968); /*0x771396*/
    v15 = this + 960; /*0x7713a2*/
    if ( *(_DWORD *)(this + 976) < v14 /*0x7713c7*/
      || (*(_BYTE *)(this + 973) || !v14)
      && (v16 = *(_DWORD *)(this + 980), v16 > 0)
      && (*(unsigned __int8 (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v15 + 8))(this + 960, v14 + v16, 0) )
    {
      v17 = *(_DWORD *)(this + 976); /*0x7713ce*/
      *(_DWORD *)(this + 976) = v17 + 1; /*0x7713d9*/
      String::Reassign((char **)(*(_DWORD *)(this + 964) + 4 * v17), (AbstractClass *)v24); /*0x7713e2*/
    }
    if ( a5 ) /*0x7713ed*/
      ++*(_DWORD *)(this + 956); /*0x7713ef*/
    if ( (_BYTE)aP3 )
    {
      v18 = *(_DWORD *)this; /*0x771401*/
      DeleteAndZero::Alt2(v24); /*0x771407*/
      v19 = *(_DWORD *)(v13 + 48); /*0x77140c*/
      if ( v19 > 0 )
      {
        v20 = v19 == 1 ? 0 : Random::Range(&MEMORY[0x87F8E4].__pad_5568[7484], 0, (IUnknown *)(v19 - 1));
        if ( Map_Remove_770CE0(v18, *(_DWORD *)(*(_DWORD *)(v13 + 36) + 4 * v20), (char **)v24) ) /*0x77143b*/
        {
          v21 = *(_DWORD *)(this + 968); /*0x771444*/
          if ( *(_DWORD *)(this + 976) < v21 /*0x771469*/
            || (*(_BYTE *)(this + 973) || !v21)
            && (v22 = *(_DWORD *)(this + 980), v22 > 0)
            && (*(unsigned __int8 (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v15 + 8))(this + 960, v21 + v22, 0) )
          {
            v23 = *(_DWORD *)(this + 976); /*0x771470*/
            *(_DWORD *)(this + 976) = v23 + 1; /*0x77147b*/
            String::Reassign((char **)(*(_DWORD *)(this + 964) + 4 * v23), (AbstractClass *)v24); /*0x771484*/
          }
          if ( a5 ) /*0x77148f*/
            ++*(_DWORD *)(this + 956); /*0x771491*/
        }
      }
    }
  }
  DeleteAndZero(v24); /*0x77149b*/
}


// ==== 0x007714B0  ObjectClass::TerritorySelectWDT_Delete  this=ObjectClass  sig=csp ====
void __thiscall sub_7714B0(_DWORD *this, int a2, char a3, int a4)
{
  int v5; // eax
  int v6; // ebx
  int v7; // eax
  int v8; // eax
  int v9; // edi
  int v10; // edx
  int v11; // ebx
  int v12; // eax
  int v13; // eax
  int v14; // ecx
  int v15; // eax
  int v16; // eax
  void *v17[4]; // [esp+Ch] [ebp-10h] BYREF

  v5 = this->q0F4; /*0x7714c4*/
  v6 = v5 - 1; /*0x7714c6*/
  if ( v5 > this->q3BC ) /*0x7714c9*/
  {
    do /*0x77150b*/
    {
      v7 = this->q0F4; /*0x7714cb*/
      if ( v6 < v7 ) /*0x7714d3*/
      {
        v8 = v7 - 1; /*0x7714d5*/
        v9 = v6; /*0x7714d6*/
        for ( this->q0F4 = v8; v9 < this->q0F4; ++v9 ) /*0x7714e0*/
          String::Reassign((char **)(this->q3C4 + 4 * v9), (const char **)(this->q3C4 + 4 * v9 + 4)); /*0x7714f0*/
      }
      v10 = v6--; /*0x771506*/
    }
    while ( v10 > this->q3BC ); /*0x77150b*/
  }
  if ( !this->q3BC ) /*0x77150d*/
    this->q3B8 = 1; /*0x771517*/
  unknown_libname_73(v17); /*0x771522*/
  v11 = *this; /*0x77152b*/
  DeleteAndZero::Alt2(v17); /*0x77153b*/
  v12 = *(this + 6 * a2 + 227); /*0x771540*/
  if ( v12 > 0 )
  {
    v13 = v12 == 1 ? 0 : Random::Range(MEMORY[0x886B88], 0, v12 - 1);
    if ( Map_Remove_770CE0(v11, *(_DWORD *)(*(this + 6 * a2 + 224) + 4 * v13), (char **)v17) ) /*0x77156f*/
    {
      if ( !(unsigned __int8)Audio::IsPlaying() ) /*0x77157c*/
      {
        this->q0EB = Timer::GetTicks(); /*0x771598*/
        this->q0EC = v17[2]; /*0x7715a2*/
        this->q0ED = a4; /*0x7715a5*/
      }
      v14 = this->q0F2; /*0x7715a8*/
      if ( this->q0F4 < v14 /*0x7715d9*/
        || (*((_BYTE *)this + 973) || !v14)
        && (v15 = this->q3D4, v15 > 0)
        && (*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(this->q3C0 + 8))(this + 240, v14 + v15, 0) )
      {
        v16 = this->q0F4; /*0x7715e0*/
        this->q0F4 = v16 + 1; /*0x7715eb*/
        String::Reassign((char **)(this->q3C4 + 4 * v16), (const char **)v17); /*0x7715f4*/
      }
      if ( a3 ) /*0x7715ff*/
        ++this->q3BC; /*0x771601*/
    }
  }
  DeleteAndZero(v17); /*0x77160b*/
}


// ==== 0x00771620  AudioQueue::Update  this=AudioQueue  sig=csp ====
void __thiscall AudioQueue_Update(int this)
{
  signed int v2; // edi
  signed int v3; // eax
  int v4; // eax
  int v5; // eax
  int v6; // edi
  int v7; // eax
  char *v8; // eax
  int v9; // eax

  v2 = *(_DWORD *)(this + 948); /*0x77162a*/
  if ( *(_DWORD *)(this + 940) == -1 ) /*0x771633*/
  {
LABEL_4:
    if ( v2 ) /*0x77164e*/
      return; /*0x77164e*/
    goto LABEL_5; /*0x77164e*/
  }
  v3 = Timer::GetTicks() - *(_DWORD *)(this + 940); /*0x771640*/
  if ( v3 < v2 ) /*0x771648*/
  {
    v2 -= v3; /*0x77164a*/
    goto LABEL_4; /*0x77164a*/
  }
LABEL_5:
  if ( *(int *)(this + 976) > 0 && !(unsigned __int8)Audio::IsPlaying() ) /*0x771662*/
  {
    if ( !*(_BYTE *)(this + 952) ) /*0x77166f*/
    {
      v4 = *(_DWORD *)(this + 976); /*0x771679*/
      if ( v4 > 0 ) /*0x771681*/
      {
        v5 = v4 - 1; /*0x771683*/
        v6 = 0; /*0x771684*/
        for ( *(_DWORD *)(this + 976) = v5; v6 < *(_DWORD *)(this + 976); ++v6 ) /*0x77168e*/
          String::Reassign( /*0x77169e*/
            (char **)(*(_DWORD *)(this + 964) + 4 * v6),
            (const char **)(*(_DWORD *)(this + 964) + 4 * v6 + 4));
      }
      v7 = *(_DWORD *)(this + 956); /*0x7716ae*/
      if ( v7 > 0 ) /*0x7716b6*/
        *(_DWORD *)(this + 956) = v7 - 1; /*0x7716b9*/
    }
    if ( *(int *)(this + 976) <= 0 ) /*0x7716c7*/
    {
      *(_DWORD *)(this + 956) = 0; /*0x7716f1*/
      *(_BYTE *)(this + 952) = 1; /*0x7716fb*/
    }
    else
    {
      v8 = String::GetOrEmpty(*(char ***)(this + 964)); /*0x7716d1*/
      v9 = VocClass::FindByName(v8); /*0x7716d8*/
      UpdateThemeManager(v9, -1, -1); /*0x7716e2*/
      *(_BYTE *)(this + 952) = 0; /*0x7716e7*/
    }
  }
}


// ==== 0x00771710  ObjectClass::method  this=ObjectClass  sig=csp ====
int __thiscall sub_771710(int this)
{
  int v2; // eax
  int v3; // ebx
  int v4; // eax
  int v5; // eax
  int v6; // esi
  int v7; // edx
  int result; // eax

  v2 = *(_DWORD *)(this + 976); /*0x771720*/
  v3 = v2 - 1; /*0x771722*/
  if ( v2 > *(_DWORD *)(this + 956) ) /*0x771725*/
  {
    do /*0x771768*/
    {
      v4 = *(_DWORD *)(this + 976); /*0x771728*/
      if ( v3 < v4 ) /*0x771730*/
      {
        v5 = v4 - 1; /*0x771732*/
        v6 = v3; /*0x771733*/
        for ( *(_DWORD *)(this + 976) = v5; v6 < *(_DWORD *)(this + 976); ++v6 ) /*0x77173d*/
          String::Reassign( /*0x77174d*/
            (char **)(*(_DWORD *)(this + 964) + 4 * v6),
            (const char **)(*(_DWORD *)(this + 964) + 4 * v6 + 4));
      }
      v7 = v3--; /*0x771763*/
    }
    while ( v7 > *(_DWORD *)(this + 956) ); /*0x771768*/
  }
  result = *(_DWORD *)(this + 956); /*0x77176b*/
  if ( !result ) /*0x771773*/
    *(_BYTE *)(this + 952) = 1; /*0x771775*/
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
DWORD __thiscall sub_7717A0(DWORD *this)
{
  DWORD result; // eax
  DWORD *v3; // esi
  DWORD v4; // [esp+8h] [ebp-8h]

  if ( (int)this->q0F4 > 0 ) /*0x7717ae*/
  {
    StopThemeClass(1); /*0x7717b2*/
    (*(void (__thiscall **)(DWORD *))(this->q0F0 + 12))(this + 240); /*0x7717c3*/
  }
  result = Timer::GetTicks(); /*0x7717ca*/
  v3 = this + 235; /*0x7717d5*/
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
_DWORD *__thiscall sub_771800(void *this)
{
  _DWORD *v2; // eax
  _DWORD *v3; // esi

  v2 = __2_YAPAXI_Z(0x20u); /*0x771807*/
  v3 = v2; /*0x77180c*/
  if ( !v2 ) /*0x771815*/
    return 0; /*0x77183f*/
  v2[1] = 0; /*0x77181a*/
  v2[2] = 0; /*0x77181d*/
  *((_BYTE *)v2 + 12) = 0; /*0x771820*/
  v2[4] = Timer::GetTicks(); /*0x771828*/
  v3[6] = 0; /*0x77182b*/
  v3[7] = this; /*0x77182e*/
  *v3 = &vt_WorldDominationTour_Voices_Anim; /*0x771831*/
  return v3; /*0x771839*/
}


// ==== 0x00771850  Anim@Voices@WorldDominationTour::method  this=Anim@Voices@WorldDominationTour  sig=csp ====
_DWORD *__thiscall sub_771850(_DWORD *this, int a2)
{
  this->q004 = 0; /*0x771859*/
  this->q008 = 0; /*0x77185c*/
  *((_BYTE *)this + 12) = 0; /*0x77185f*/
  this->q004 = Timer::GetTicks(); /*0x771867*/
  this->q018 = 0; /*0x77186e*/
  this->q01C = a2; /*0x771871*/
  *this = &vt_WorldDominationTour_Voices_Anim; /*0x771874*/
  return this; /*0x77187c*/
}


// ==== 0x00771890  Anim@Voices@WorldDominationTour::method  this=Anim@Voices@WorldDominationTour  sig=csp ====
void __thiscall sub_771890(_DWORD *this)
{
  *this = &vt_WorldDominationTour_Voices_Anim; /*0x771890*/
  VtableStub::5CB6C0(this); /*0x771896*/
}


// ==== 0x007718A0  Anim_Voices_WorldDominationTour::AddRef  this=Anim@Voices@WorldDominationTour  sig=csp ====
char __thiscall Territory_WorldDominationTour_8_::_vt01(int this, char a2)
{
  DWORD Ticks; // eax
  _DWORD *v3; // esi
  DWORD *v4; // esi
  DWORD v6; // [esp+4h] [ebp-8h]

  LOBYTE(Ticks) = a2; /*0x7718a0*/
  *(_BYTE *)(this + 12) = a2; /*0x7718a9*/
  if ( !a2 ) /*0x7718ac*/
  {
    v3 = *(_DWORD **)(this + 28); /*0x7718af*/
    if ( (int)v3[244] > 0 ) /*0x7718ba*/
    {
      StopThemeClass(1); /*0x7718be*/
      (*(void (__thiscall **)(_DWORD *))(v3[240] + 12))(v3 + 240); /*0x7718cf*/
    }
    Ticks = Timer::GetTicks(); /*0x7718d6*/
    v4 = v3 + 235; /*0x7718e1*/
    *v4 = Ticks; /*0x7718e7*/
    v4[1] = v6; /*0x7718e9*/
    v4[2] = 0; /*0x7718ec*/
  }
  return Ticks; /*0x7718f0*/
}


// ==== 0x00771900  Anim_Voices_WorldDominationTour::Release  this=Anim@Voices@WorldDominationTour  sig=csp ====
signed int __thiscall Territory_WorldDominationTour_8_::_vt02(signed int *this)
{
  signed int result; // eax
  signed int v3; // edi

  result = this->q004; /*0x771903*/
  if ( result != -1 ) /*0x771909*/
  {
    v3 = this->q006; /*0x77190c*/
    result = Timer::GetTicks() - this->q004; /*0x77191c*/
    if ( result >= v3 ) /*0x771921*/
    {
      this->q006 = 0; /*0x771934*/
      this->q004 = -1; /*0x771937*/
    }
    else
    {
      this->q004 = -1; /*0x771925*/
      this->q006 = v3 - result; /*0x77192c*/
    }
  }
  return result; /*0x771930*/
}


// ==== 0x00771950  Anim_Voices_WorldDominationTour::ddtor  this=Anim@Voices@WorldDominationTour  sig=csp ====
void __thiscall Territory_WorldDominationTour_8_::_vt03(_DWORD *this)
{
  if ( this->q004 == -1 ) /*0x771957*/
    this->q004 = Timer::GetTicks(); /*0x771961*/
}


// ==== 0x00771970  Anim_Voices_WorldDominationTour::Read  this=Anim@Voices@WorldDominationTour  sig=csp ====
char __thiscall Territory_WorldDominationTour_8_::_vt04(int *this, int a2, int a3)
{
  AudioQueue::Update(this->q01C); /*0x771973*/
  return 0; /*0x77197a*/
}


// ==== 0x00771980  Anim_Voices_WorldDominationTour::Write  this=Anim@Voices@WorldDominationTour  sig=csp ====
void __thiscall Territory_WorldDominationTour_8_::_vt05(int *this, int a2, int a3)
{
  AudioQueue::Update(this->q01C); /*0x771983*/
}


// ==== 0x00771990  Anim_Voices_WorldDominationTour::Seek  this=Anim@Voices@WorldDominationTour  sig=csp ====
_DWORD *__stdcall Territory_WorldDominationTour_8_::_vt06(_DWORD *a1)
{
  int v2; // [esp+0h] [ebp-10h]
  int v3; // [esp+4h] [ebp-Ch]
  int v4; // [esp+8h] [ebp-8h]
  int v5; // [esp+Ch] [ebp-4h]

  *a1 = v2; /*0x77199d*/
  a1[1] = v3; /*0x7719a3*/
  a1[2] = v4; /*0x7719aa*/
  a1[3] = v5; /*0x7719b1*/
  return a1; /*0x7719b4*/
}


// ==== 0x007719C0  Anim_Voices_WorldDominationTour::Open  this=Anim@Voices@WorldDominationTour  sig=csp ====
BOOL Territory_WorldDominationTour_8_::_vt07()
{
  return (unsigned __int8)Audio::IsPlaying() == 0; /*0x7719ca*/
}


// ==== 0x007719D0  Anim_Voices_WorldDominationTour::Close  this=Anim@Voices@WorldDominationTour  sig=csp ====
void __thiscall Territory_WorldDominationTour_8_::_vt08(int *this, int a2)
{
  AudioQueue::Update(this->q01C); /*0x7719d3*/
}


// ==== 0x007719E0  DynamicVectorClass_uint::sub_7719E0  this=DynamicVectorClass_uint  sig=csp ====
int __thiscall sub_7719E0(_BYTE *this)
{
  this->IsInitialized = 1; /*0x7719e2*/
  this->Items = 0; /*0x7719e6*/
  this->Capacity = 0; /*0x7719e9*/
  this->IsAllocated = 0; /*0x7719ec*/
  *(_DWORD *)this = &vt_DynamicVectorClass_unsigned_int; /*0x7719ef*/
  this->q005 = 10; /*0x7719f5*/
  this->Items = 0; /*0x7719fc*/
  return 0; /*0x7719ff*/
}


// ==== 0x00771A00  VectorClass::sub_771A00  this=VectorClass  sig=csp ====
void __thiscall sub_771A00(void *this)
{
  CCINIClass *v2; // eax

  v2 = (CCINIClass *)this->Items; /*0x771a06*/
  *(_DWORD *)this = &vt_VectorClass_unsigned_int; /*0x771a09*/
  if ( v2 && this->IsAllocated ) /*0x771a13*/
  {
    __3_YAXPAX_Z(v2); /*0x771a19*/
    this->Items = 0; /*0x771a21*/
  }
  this->IsAllocated = 0; /*0x771a24*/
  this->Capacity = 0; /*0x771a27*/
}


// ==== 0x00771A30  Anim_Voices_WorldDominationTour::QueryInterface  this=Anim@Voices@WorldDominationTour  sig=csp ====
_DWORD *__thiscall Territory_WorldDominationTour_8_::QueryInterface(_DWORD *Block, char a2)
{
  *Block = &vt_WorldDominationTour_Voices_Anim; /*0x771a33*/
  VtableStub::5CB6C0(Block); /*0x771a39*/
  if ( (a2 & 1) != 0 ) /*0x771a43*/
    __3_YAXPAX_Z(Block); /*0x771a46*/
  return Block; /*0x771a50*/
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
_DWORD *__thiscall WeaponTypeClass::Constructor(_DWORD *this, ObjectClass *aP1)
{
  WeaponTypeClass *v3; // eax

  AbstractTypeClass::Constructor((int)this, (AbstractClass *)aP1); /*0x771c7a*/
  this->AmbientDamage = 0; /*0x771c87*/
  this->Burst = 1; /*0x771c8d*/
  this->Projectile = 0; /*0x771c97*/
  this->Damage = 0; /*0x771c9d*/
  this->Speed = 0; /*0x771ca3*/
  this->Warhead = 0; /*0x771ca9*/
  this->ROF = 0; /*0x771caf*/
  this->Range = 0; /*0x771cb6*/
  this->MinimumRange = 0; /*0x771cbf*/
  VectorClass::Construct(this + 47, 0, 0); /*0x771cc5*/
  this->AttachedParticleSystem = 10; /*0x771cca*/
  this->OpenToppedAnim = 0; /*0x771cd1*/
  this->Report = &vt_TypeList_int; /*0x771cd4*/
  VectorClass::Construct(this + 54, 0, 0); /*0x771ce4*/
  this->TerrainFire = 10; /*0x771ce9*/
  this->CellRangefinding = 0; /*0x771cf0*/
  this->q0D8 = &vt_TypeList_int; /*0x771cf3*/
  AnimTypeVector::Constructor(this + 61, 0, 0); /*0x771d03*/
  this->IsRadBeam = 10; /*0x771d08*/
  this->AreaFire = 0; /*0x771d0f*/
  this->q0F4 = &vt_TypeList_AnimTypeClass_const; /*0x771d12*/
  this->q110 = 0; /*0x771d18*/
  this->q114 = 0; /*0x771d1e*/
  this->q118 = 0; /*0x771d24*/
  this->q11C = 0; /*0x771d2a*/
  this->q120 = 0; /*0x771d30*/
  this->ptr_121 = 0; /*0x771d36*/
  this->q488 = 0; /*0x771d3c*/
  this->q48C = 0; /*0x771d42*/
  this->q124 = 0; /*0x771d48*/
  this->q128 = 0; /*0x771d60*/
  this->q12C = 0; /*0x771d78*/
  this->q130 = 0x1000000; /*0x771d90*/
  this->q134 = 0; /*0x771da9*/
  this->q135 = 0; /*0x771daf*/
  this->q136 = 0; /*0x771db5*/
  this->q137 = 1; /*0x771dbb*/
  this->q138 = 0; /*0x771dc2*/
  this->q139 = 0; /*0x771dc8*/
  this->q13A = 0; /*0x771dce*/
  this->q13B = 0; /*0x771dd4*/
  this->q13C = 0; /*0x771dda*/
  this->q140 = 0; /*0x771de0*/
  this->q504 = 1; /*0x771de6*/
  this->q508 = 0; /*0x771ded*/
  this->q143 = 1; /*0x771df3*/
  this->q144 = 0; /*0x771dfa*/
  this->q514 = 0; /*0x771e00*/
  this->q518 = 0; /*0x771e06*/
  this->q147 = 0; /*0x771e0f*/
  this->q148 = 0; /*0x771e16*/
  this->q149 = 0; /*0x771e1c*/
  this->q14A = 0; /*0x771e22*/
  this->q52C = 0; /*0x771e28*/
  this->q14C = 0; /*0x771e2e*/
  this->q14D = 0; /*0x771e34*/
  this->q14E = 10; /*0x771e3a*/
  this->q14F = 0; /*0x771e41*/
  this->q150 = 0; /*0x771e47*/
  this->q151 = 0; /*0x771e4d*/
  this->q152 = 0; /*0x771e53*/
  this->q153 = 0; /*0x771e59*/
  this->q550 = 0; /*0x771e5f*/
  this->q554 = 0; /*0x771e65*/
  this->q158 = 0; /*0x771e6b*/
  this->q15C = 0; /*0x771e71*/
  *this = &WeaponTypeClass::`vftable'; /*0x771e77*/
  this->vtable2 = &WeaponTypeClass::`vftable'; /*0x771e7d*/
  this->vtable3 = &WeaponTypeClass::`vftable'; /*0x771e83*/
  this->vtable4 = &vt_WeaponTypeClass; /*0x771e8a*/
  AbstractClass::GenerateUniqueID((int)(this + 1)); /*0x771e91*/
  if ( *(int *)&stru_87C374.__pad_579C[23144] < *(int *)&stru_87C374.__pad_579C[23136] /*0x771eca*/
    || (stru_87C374.__pad_579C[23141] || !*(_DWORD *)&stru_87C374.__pad_579C[23136])
    && *(int *)&stru_87C374.__pad_579C[23148] > 0
    && (*(unsigned __int8 (__thiscall **)(char *, int, _DWORD))(*(_DWORD *)&stru_87C374.__pad_579C[23128] + 8))(
         &stru_87C374.__pad_579C[23128],
         *(_DWORD *)&stru_87C374.__pad_579C[23136] + *(_DWORD *)&stru_87C374.__pad_579C[23148],
         0) )
  {
    v3 = (WeaponTypeClass *)(*(_DWORD *)&stru_87C374.__pad_579C[23144])++; /*0x771ed7*/
    *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[23132] + 4 * (_DWORD)v3) = this; /*0x771ee6*/
  }
  return this; /*0x771eeb*/
}


// ==== 0x00771F00  WeaponTypeClass::loadWeaponProperties  this=WeaponTypeClass  sig=csp ====
_DWORD *__thiscall WeaponTypeClass::loadWeaponProperties(_DWORD *this, AbstractTypeClass *aP1)
{
  AbstractTypeClass::Init((int)this, aP1); /*0x771f08*/
  this->Report = &vt_TypeList_int; /*0x771f12*/
  this->q0D8 = &vt_TypeList_int; /*0x771f18*/
  this->q0F4 = &vt_TypeList_AnimTypeClass_const; /*0x771f1e*/
  *this = &WeaponTypeClass::`vftable'; /*0x771f28*/
  this->vtable2 = &WeaponTypeClass::`vftable'; /*0x771f2e*/
  this->vtable3 = &WeaponTypeClass::`vftable'; /*0x771f35*/
  this->vtable4 = &vt_WeaponTypeClass; /*0x771f3c*/
  return this; /*0x771f45*/
}


// ==== 0x00771F50  WeaponTypeClass::Destructor  this=WeaponTypeClass  sig=csp ====
int __thiscall sub_771F50(int this)
{
  int v2; // eax
  void *v3; // eax
  void *v4; // eax
  void *v5; // eax
  int v7; // [esp+8h] [ebp-4h] BYREF

  *(_DWORD *)this = &WeaponTypeClass::`vftable'; /*0x771f57*/
  *(_DWORD *)(this + 4) = &WeaponTypeClass::`vftable'; /*0x771f5d*/
  *(_DWORD *)(this + 8) = &WeaponTypeClass::`vftable'; /*0x771f64*/
  *(_DWORD *)(this + 12) = &vt_WeaponTypeClass; /*0x771f6b*/
  AbstractClass::AnnounceExpiredPointer((void **)this, 1); /*0x771f72*/
  *(_DWORD *)(this + 160) = 0; /*0x771f7d*/
  *(_DWORD *)(this + 172) = 0; /*0x771f83*/
  v7 = this; /*0x771f95*/
  v2 = (*(int (__thiscall **)(WeaponTypeClass **, int *))&MEMORY[0x887568]->__pad_0[16])(&MEMORY[0x887568], &v7); /*0x771f99*/
  if ( v2 != -1 && v2 < MEMORY[0x887578] && v2 < --MEMORY[0x887578] ) /*0x771fb4*/
  {
    do /*0x771fcc*/
    {
      ++v2; /*0x771fbc*/
      *((_DWORD *)MEMORY[0x88756C] + v2 - 1) = *((_DWORD *)MEMORY[0x88756C] + v2); /*0x771fc0*/
    }
    while ( v2 < MEMORY[0x887578] ); /*0x771fcc*/
  }
  v3 = *(void **)(this + 248); /*0x771fce*/
  *(_DWORD *)(this + 244) = &vt_VectorClass_AnimTypeClass_const; /*0x771fd4*/
  if ( v3 && *(_BYTE *)(this + 257) ) /*0x771fe2*/
  {
    __3_YAXPAX_Z(v3); /*0x771feb*/
    *(_DWORD *)(this + 248) = 0; /*0x771ff3*/
  }
  *(_BYTE *)(this + 257) = 0; /*0x771ff9*/
  *(_DWORD *)(this + 252) = 0; /*0x771fff*/
  v4 = *(void **)(this + 220); /*0x772005*/
  *(_DWORD *)(this + 216) = &vt_VectorClass_int; /*0x77200b*/
  if ( v4 && *(_BYTE *)(this + 229) ) /*0x772019*/
  {
    __3_YAXPAX_Z(v4); /*0x772022*/
    *(_DWORD *)(this + 220) = 0; /*0x77202a*/
  }
  *(_BYTE *)(this + 229) = 0; /*0x772030*/
  *(_DWORD *)(this + 224) = 0; /*0x772036*/
  v5 = *(void **)(this + 192); /*0x77203c*/
  *(_DWORD *)(this + 188) = &vt_VectorClass_int; /*0x772042*/
  if ( v5 && *(_BYTE *)(this + 201) ) /*0x772050*/
  {
    __3_YAXPAX_Z(v5); /*0x772059*/
    *(_DWORD *)(this + 192) = 0; /*0x772061*/
  }
  *(_BYTE *)(this + 201) = 0; /*0x772069*/
  *(_DWORD *)(this + 196) = 0; /*0x77206f*/
  return AbstractTypeClass::Dtor((_DWORD *)this); /*0x77207a*/
}


// ==== 0x00772080  WeaponTypeClass::ReadINI  this=WeaponTypeClass  sig=csp ====
// local variable allocation has failed, the output may be wrong!
char __fastcall WarheadTypeClass::ReadINI(int a1, int a2, unsigned __int8 ***a3)
{
  VectorClass *v4; // eax
  INIClass *v5; // eax
  VectorClass *v6; // eax
  CCINIClass *v7; // edx
  CCINIClass *v8; // eax
  VectorClass *v9; // eax
  INIClass *v10; // eax
  VectorClass *v11; // eax
  AbstractClass *i; // eax
  CCINIClass *v13; // ecx
  DynamicVector *v14; // edx
  void *v15; // eax
  AnimTypeClass *v16; // ebp
  AnimTypeClass *v17; // eax
  AnimTypeClass *v18; // ebp
  AnimTypeClass *v19; // eax
  AnimTypeClass *v20; // ebp
  AnimTypeClass *v21; // eax
  char v22; // cl
  char Bool_Overwrite; // al
  char v24; // al
  char v25; // cl
  char v26; // al
  char v27; // al
  char v28; // cl
  char v29; // al
  char v30; // al
  char v31; // cl
  char v32; // al
  char v33; // al
  char v34; // cl
  char v35; // al
  int Coord; // eax
  int v37; // eax
  int v38; // eax
  char v39; // dl
  char Int_Overwrite; // al
  char v41; // cl
  char v42; // al
  char v43; // al
  char v44; // cl
  char v45; // al
  char v46; // al
  char v47; // cl
  char v48; // al
  char v49; // al
  CCINIClass *v50; // ecx
  int v51; // eax
  int v52; // eax
  int v53; // ebp
  int v54; // eax
  int v55; // ebp
  void **v57; // [esp-1Ch] [ebp-FCh] BYREF
  void *v58; // [esp-18h] [ebp-F8h]
  CCINIClass *v59; // [esp-14h] [ebp-F4h]
  VectorClass *p_IntList; // [esp-10h] [ebp-F0h]
  CCINIClass *v61; // [esp-Ch] [ebp-ECh] OVERLAPPED
  CCINIClass *p_unknown50; // [esp-8h] [ebp-E8h]
  int v63; // [esp-4h] [ebp-E4h]
  INIClass *v64; // [esp+0h] [ebp-E0h]
  int v65; // [esp+4h] [ebp-DCh]
  CCINIClass aP1; // [esp+10h] [ebp-D0h] BYREF

  INIClass::ResetSection(a3);
  if ( !INIClass::BinarySearchSection((int)a3, (INIClass *)(a1 + 36)) )
    return 0;
  *(_DWORD *)(a1 + 152) = INIClass::ReadInt_Overwrite(
                            (int)a3,
                            (unsigned __int8 *)(a1 + 36),
                            &unk_849548,
                            *(INIClass **)(a1 + 152));
  *(_BYTE *)(a1 + 304) = INIClass::ReadBool_Overwrite(
                           (int)a3,
                           (unsigned __int8 *)(a1 + 36),
                           &unk_849540,
                           *(_BYTE *)(a1 + 304));
  *(_BYTE *)(a1 + 305) = INIClass::ReadBool_Overwrite(
                           (int)a3,
                           (unsigned __int8 *)(a1 + 36),
                           &unk_849538,
                           *(_BYTE *)(a1 + 305));
  *(_BYTE *)(a1 + 306) = INIClass::ReadBool_Overwrite(
                           (int)a3,
                           (unsigned __int8 *)(a1 + 36),
                           &unk_84952C,
                           *(_BYTE *)(a1 + 306));
  *(_BYTE *)(a1 + 307) = INIClass::ReadBool_Overwrite(
                           (int)a3,
                           (unsigned __int8 *)(a1 + 36),
                           &unk_84951C,
                           *(_BYTE *)(a1 + 307));
  *(_BYTE *)(a1 + 308) = INIClass::ReadBool_Overwrite(
                           (int)a3,
                           (unsigned __int8 *)(a1 + 36),
                           &unk_849508,
                           *(_BYTE *)(a1 + 308));
  *(_BYTE *)(a1 + 309) = INIClass::ReadBool_Overwrite(
                           (int)a3,
                           (unsigned __int8 *)(a1 + 36),
                           &unk_8494FC,
                           *(_BYTE *)(a1 + 309));
  *(_BYTE *)(a1 + 310) = INIClass::ReadBool_Overwrite(
                           (int)a3,
                           (unsigned __int8 *)(a1 + 36),
                           &unk_8494F0,
                           *(_BYTE *)(a1 + 310));
  *(_BYTE *)(a1 + 311) = INIClass::ReadBool_Overwrite(
                           (int)a3,
                           (unsigned __int8 *)(a1 + 36),
                           &unk_8494E0,
                           *(_BYTE *)(a1 + 311));
  *(_BYTE *)(a1 + 312) = INIClass::ReadBool_Overwrite(
                           (int)a3,
                           (unsigned __int8 *)(a1 + 36),
                           &unk_8494D4,
                           *(_BYTE *)(a1 + 312));
  *(_BYTE *)(a1 + 313) = INIClass::ReadBool_Overwrite(
                           (int)a3,
                           (unsigned __int8 *)(a1 + 36),
                           &unk_8494C4,
                           *(_BYTE *)(a1 + 313));
  *(_BYTE *)(a1 + 314) = INIClass::ReadBool_Overwrite(
                           (int)a3,
                           (unsigned __int8 *)(a1 + 36),
                           &unk_8494B4,
                           *(_BYTE *)(a1 + 314));
  *(_BYTE *)(a1 + 315) = INIClass::ReadBool_Overwrite(
                           (int)a3,
                           (unsigned __int8 *)(a1 + 36),
                           &unk_8494A0,
                           *(_BYTE *)(a1 + 315));
  *(_BYTE *)(a1 + 320) = INIClass::ReadBool_Overwrite(
                           (int)a3,
                           (unsigned __int8 *)(a1 + 36),
                           &unk_84948C,
                           *(_BYTE *)(a1 + 320));
  *(_BYTE *)(a1 + 321) = INIClass::ReadBool_Overwrite(
                           (int)a3,
                           (unsigned __int8 *)(a1 + 36),
                           &unk_84947C,
                           *(_BYTE *)(a1 + 321));
  *(_BYTE *)(a1 + 322) = INIClass::ReadBool_Overwrite(
                           (int)a3,
                           (unsigned __int8 *)(a1 + 36),
                           &unk_849470,
                           *(_BYTE *)(a1 + 322));
  *(_BYTE *)(a1 + 323) = INIClass::ReadBool_Overwrite(
                           (int)a3,
                           (unsigned __int8 *)(a1 + 36),
                           &unk_849460,
                           *(_BYTE *)(a1 + 323));
  *(_DWORD *)(a1 + 316) = INIClass::ReadInt_Overwrite(
                            (int)a3,
                            (unsigned __int8 *)(a1 + 36),
                            &unk_849448,
                            *(INIClass **)(a1 + 316));
  *(_BYTE *)(a1 + 324) = INIClass::ReadBool_Overwrite(
                           (int)a3,
                           (unsigned __int8 *)(a1 + 36),
                           (CCINIClass *)&stru_830620.__pad_579C[53908],
                           *(_BYTE *)(a1 + 324));
  *(_BYTE *)(a1 + 326) = INIClass::ReadBool_Overwrite(
                           (int)a3,
                           (unsigned __int8 *)(a1 + 36),
                           &unk_849440,
                           *(_BYTE *)(a1 + 326));
  *(_DWORD *)(a1 + 156) = INIClass::ReadInt_Overwrite(
                            (int)a3,
                            (unsigned __int8 *)(a1 + 36),
                            &unk_849438,
                            *(INIClass **)(a1 + 156));
  *(_DWORD *)(a1 + 164) = INIClass::ReadInt_Overwrite(
                            (int)a3,
                            (unsigned __int8 *)(a1 + 36),
                            &stru_81859C,
                            *(INIClass **)(a1 + 164));
  *(_DWORD *)(a1 + 168) = WarheadTypeClass::loadWarheadINI(
                            a3,
                            (CCINIClass *)(a1 + 36),
                            (unsigned __int8 *)&g_INI_Key_Speed,
                            *(CCINIClass **)(a1 + 168));
  *(_DWORD *)(a1 + 176) = INIClass::ReadInt_Overwrite(
                            (int)a3,
                            (unsigned __int8 *)(a1 + 36),
                            (CCINIClass *)stru_825430.__pad_48,
                            *(INIClass **)(a1 + 176));
  v63 = *(_DWORD *)(a1 + 180);
  p_unknown50 = (CCINIClass *)&stru_830620.__pad_579C[51412];
  v61 = (CCINIClass *)(a1 + 36);
  *(_DWORD *)(a1 + 180) = INIClass::ReadCoord(*(double *)&v61, v63, v64, v65);
  v63 = *(_DWORD *)(a1 + 184);
  p_unknown50 = (CCINIClass *)&unk_849428;
  v61 = (CCINIClass *)(a1 + 36);
  *(_DWORD *)(a1 + 184) = INIClass::ReadCoord(*(double *)&v61, v63, v64, v65);
  *(_DWORD *)aP1.__pad_0 = &v57;
  IntVector::Copy(&v57, (VectorClass *)(a1 + 188));
  v4 = *(VectorClass **)aP1.__pad_0;
  *(_DWORD *)(*(_DWORD *)aP1.__pad_0 + 16) = *(_DWORD *)(a1 + 204);
  v4[1].Items = *(void **)(a1 + 208);
  v4->vtable0 = &vt_TypeList_int;
  v5 = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(a1 + 36));
  *(_DWORD *)aP1.__pad_0 = GetINIClassIntList(
                             (int)aP1.headNode,
                             a3,
                             v5,
                             &unk_818410,
                             v57,
                             v58,
                             (int)v59,
                             (__int16)p_IntList,
                             (int)v61,
                             (int)p_unknown50,
                             v63);
  TypeList::Copy((_DWORD *)(a1 + 188), *(_DWORD **)aP1.__pad_0);
  v6 = *(VectorClass **)aP1.__pad_0;
  *(_DWORD *)(a1 + 204) = *(_DWORD *)(*(_DWORD *)aP1.__pad_0 + 16);
  *(_DWORD *)(a1 + 208) = v6[1].Items;
  v7 = (CCINIClass *)v6[1].Capacity;
  v8 = (CCINIClass *)aP1.headNode[1];
  *(_DWORD *)(a1 + 212) = v7;
  aP1.headNode[0] = (int)&vt_VectorClass_int;
  if ( v8 && BYTE1(aP1.sectionHead[0]) )
    __3_YAXPAX_Z(v8);
  *(_DWORD *)aP1.__pad_0 = &v57;
  IntVector::Copy(&v57, (VectorClass *)(a1 + 216));
  v9 = *(VectorClass **)aP1.__pad_0;
  *(_DWORD *)(*(_DWORD *)aP1.__pad_0 + 16) = *(_DWORD *)(a1 + 232);
  v9[1].Items = *(void **)(a1 + 236);
  v9->vtable0 = &vt_TypeList_int;
  v10 = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(a1 + 36));
  *(_DWORD *)aP1.__pad_0 = GetINIClassIntList(
                             (int)aP1.headNode,
                             a3,
                             v10,
                             byte_84941C,
                             v57,
                             v58,
                             (int)v59,
                             (__int16)p_IntList,
                             (int)v61,
                             (int)p_unknown50,
                             v63);
  TypeList::Copy((_DWORD *)(a1 + 216), *(_DWORD **)aP1.__pad_0);
  v11 = *(VectorClass **)aP1.__pad_0;
  *(_DWORD *)(a1 + 232) = *(_DWORD *)(*(_DWORD *)aP1.__pad_0 + 16);
  *(_DWORD *)(a1 + 236) = v11[1].Items;
  *(_DWORD *)(a1 + 240) = v11[1].Capacity;
  aP1.headNode[0] = (int)&vt_VectorClass_int;
  if ( aP1.headNode[1] && BYTE1(aP1.sectionHead[0]) )
    __3_YAXPAX_Z((void *)aP1.headNode[1]);
  if ( INIClass::GetString(
         a3,
         (INIClass *)(a1 + 36),
         aAnim_0,
         (INIClass *)&stru_87C374.__pad_579C[33876],
         (INIClass *)&aP1.unknown50,
         128) )
  {
    DynamicVectorClass::AnimTypeConstructor(aP1.headNode, 0, 0);
    aP1.headNode[0] = (int)&vt_TypeList_AnimTypeClass_const;
    for ( i = (AbstractClass *)strtok((char *)&aP1.unknown50, (ObjectClass *)&stru_817F40.nextObject);
          i;
          i = (AbstractClass *)strtok(0, (ObjectClass *)&stru_817F40.nextObject) )
    {
      if ( !i->__pad_0[0] )
        break;
      *(_DWORD *)aP1.__pad_0 = AnimTypeClass::FindOrCreate(i);
      if ( *(_DWORD *)aP1.__pad_0 )
        DynamicVector::Add_Alt4(aP1.headNode, (VectorClass *)&aP1);
    }
    TypeList::AnimTypeCopy(aP1.__pad_20, (VectorClass *)aP1.headNode);
    aP1.headNode[0] = (int)&vt_VectorClass_AnimTypeClass_const;
    DynamicVectorClass::Destroy_Alt((int)aP1.headNode);
  }
  else
  {
    TypeList::AnimTypeCopy(aP1.__pad_20, (VectorClass *)(a1 + 244));
  }
  VectorClass::CopyDefault((_DWORD *)(a1 + 244), (VectorClass *)aP1.__pad_20);
  v13 = (CCINIClass *)aP1.unknown30;
  v14 = *(DynamicVector **)&aP1.needsSave_flag;
  *(_DWORD *)(a1 + 268) = aP1.unknown38;
  v15 = *(void **)&aP1.__pad_20[4];
  *(_DWORD *)(a1 + 260) = v13;
  *(_DWORD *)(a1 + 264) = v14;
  *(_DWORD *)aP1.__pad_20 = &vt_VectorClass_AnimTypeClass_const;
  if ( v15 && BYTE1(aP1.INIClass_field_2C) )
    __3_YAXPAX_Z(v15);
  v16 = *(AnimTypeClass **)(a1 + 276);
  if ( INIClass::GetString(
         a3,
         (INIClass *)(a1 + 36),
         &unk_849410,
         (INIClass *)&stru_87C374.__pad_579C[33876],
         (INIClass *)&aP1.unknown50,
         128) )
  {
    v17 = AnimTypeClass::FindOrCreate((AbstractClass *)&aP1.unknown50);
  }
  else
  {
    v17 = v16;
  }
  v63 = 128;
  p_unknown50 = (CCINIClass *)&aP1.unknown50;
  v61 = (CCINIClass *)&stru_87C374.__pad_579C[33876];
  p_IntList = (VectorClass *)&unk_849400;
  *(_DWORD *)(a1 + 276) = v17;
  v18 = *(AnimTypeClass **)(a1 + 272);
  if ( INIClass::GetString(
         a3,
         (INIClass *)(a1 + 36),
         (unsigned __int8 *)p_IntList,
         (INIClass *)v61,
         (INIClass *)p_unknown50,
         v63) )
  {
    v19 = AnimTypeClass::FindOrCreate((AbstractClass *)&aP1.unknown50);
  }
  else
  {
    v19 = v18;
  }
  *(_DWORD *)(a1 + 272) = v19;
  v20 = *(AnimTypeClass **)(a1 + 280);
  if ( INIClass::GetString(
         a3,
         (INIClass *)(a1 + 36),
         &unk_8493F0,
         (INIClass *)&stru_87C374.__pad_579C[33876],
         (INIClass *)&aP1.unknown50,
         128) )
  {
    v21 = AnimTypeClass::FindOrCreate((AbstractClass *)&aP1.unknown50);
  }
  else
  {
    v21 = v20;
  }
  v22 = *(_BYTE *)(a1 + 327);
  *(_DWORD *)(a1 + 280) = v21;
  Bool_Overwrite = INIClass::ReadBool_Overwrite((int)a3, (unsigned __int8 *)(a1 + 36), &unk_8493E8, v22);
  LOBYTE(v63) = *(_BYTE *)(a1 + 329);
  p_unknown50 = &unk_8493E0;
  v61 = (CCINIClass *)(a1 + 36);
  *(_BYTE *)(a1 + 327) = Bool_Overwrite;
  *(_BYTE *)(a1 + 329) = INIClass::ReadBool_Overwrite((int)a3, (unsigned __int8 *)v61, p_unknown50, v63);
  v24 = INIClass::ReadBool_Overwrite((int)a3, (unsigned __int8 *)(a1 + 36), &stru_817138, *(_BYTE *)(a1 + 330));
  v25 = *(_BYTE *)(a1 + 331);
  *(_BYTE *)(a1 + 330) = v24;
  v26 = INIClass::ReadBool_Overwrite((int)a3, (unsigned __int8 *)(a1 + 36), &unk_8493D8, v25);
  LOBYTE(v63) = *(_BYTE *)(a1 + 333);
  p_unknown50 = &unk_8493C8;
  v61 = (CCINIClass *)(a1 + 36);
  *(_BYTE *)(a1 + 331) = v26;
  *(_BYTE *)(a1 + 333) = INIClass::ReadBool_Overwrite((int)a3, (unsigned __int8 *)v61, p_unknown50, v63);
  v27 = INIClass::ReadBool_Overwrite((int)a3, (unsigned __int8 *)(a1 + 36), &unk_8493C0, *(_BYTE *)(a1 + 328));
  v28 = *(_BYTE *)(a1 + 325);
  *(_BYTE *)(a1 + 328) = v27;
  v29 = INIClass::ReadBool_Overwrite(
          (int)a3,
          (unsigned __int8 *)(a1 + 36),
          (CCINIClass *)&stru_830620.__pad_579C[20484],
          v28);
  LOBYTE(v63) = *(_BYTE *)(a1 + 297);
  p_unknown50 = &unk_8493AC;
  v61 = (CCINIClass *)(a1 + 36);
  *(_BYTE *)(a1 + 325) = v29;
  *(_BYTE *)(a1 + 297) = INIClass::ReadBool_Overwrite((int)a3, (unsigned __int8 *)v61, p_unknown50, v63);
  v30 = INIClass::ReadBool_Overwrite((int)a3, (unsigned __int8 *)(a1 + 36), &unk_849398, *(_BYTE *)(a1 + 298));
  v31 = *(_BYTE *)(a1 + 299);
  *(_BYTE *)(a1 + 298) = v30;
  v32 = INIClass::ReadBool_Overwrite((int)a3, (unsigned __int8 *)(a1 + 36), &unk_84938C, v31);
  LOBYTE(v63) = *(_BYTE *)(a1 + 300);
  p_unknown50 = &unk_849374;
  v61 = (CCINIClass *)(a1 + 36);
  *(_BYTE *)(a1 + 299) = v32;
  *(_BYTE *)(a1 + 300) = INIClass::ReadBool_Overwrite((int)a3, (unsigned __int8 *)v61, p_unknown50, v63);
  v33 = INIClass::ReadBool_Overwrite((int)a3, (unsigned __int8 *)(a1 + 36), &unk_849368, *(_BYTE *)(a1 + 301));
  v34 = *(_BYTE *)(a1 + 302);
  *(_BYTE *)(a1 + 301) = v33;
  v35 = INIClass::ReadBool_Overwrite((int)a3, (unsigned __int8 *)(a1 + 36), &unk_849360, v34);
  v63 = a1 + 288;
  p_unknown50 = (CCINIClass *)&unk_849350;
  v61 = (CCINIClass *)(a1 + 36);
  p_IntList = (VectorClass *)&aP1;
  *(_BYTE *)(a1 + 302) = v35;
  Coord = INIClass::GetCoord(a3, (CCINIClass *)p_IntList, (INIClass *)v61, (Color *)p_unknown50, (Color *)v63);
  *(_WORD *)(a1 + 288) = *(_WORD *)Coord;
  *(_BYTE *)(a1 + 290) = *(_BYTE *)(Coord + 2);
  v37 = INIClass::GetCoord(a3, &aP1, (INIClass *)(a1 + 36), &unk_849340, (Color *)(a1 + 291));
  *(_WORD *)(a1 + 291) = *(_WORD *)v37;
  *(_BYTE *)(a1 + 293) = *(_BYTE *)(v37 + 2);
  v38 = INIClass::GetCoord(a3, &aP1, (INIClass *)(a1 + 36), &unk_84932C, (Color *)(a1 + 294));
  *(_WORD *)(a1 + 294) = *(_WORD *)v38;
  v39 = *(_BYTE *)(v38 + 2);
  v63 = *(char *)(a1 + 334);
  p_unknown50 = &unk_84931C;
  v61 = (CCINIClass *)(a1 + 36);
  *(_BYTE *)(a1 + 296) = v39;
  Int_Overwrite = INIClass::ReadInt_Overwrite((int)a3, (unsigned __int8 *)v61, p_unknown50, (INIClass *)v63);
  v41 = *(_BYTE *)(a1 + 332);
  *(_BYTE *)(a1 + 334) = Int_Overwrite;
  v42 = INIClass::ReadBool_Overwrite((int)a3, (unsigned __int8 *)(a1 + 36), &unk_849310, v41);
  LOBYTE(v63) = *(_BYTE *)(a1 + 303);
  p_unknown50 = &unk_847DD0;
  v61 = (CCINIClass *)(a1 + 36);
  *(_BYTE *)(a1 + 332) = v42;
  *(_BYTE *)(a1 + 303) = INIClass::ReadBool_Overwrite((int)a3, (unsigned __int8 *)v61, p_unknown50, v63);
  v43 = INIClass::ReadBool_Overwrite((int)a3, (unsigned __int8 *)(a1 + 36), &unk_849300, *(_BYTE *)(a1 + 335));
  v44 = *(_BYTE *)(a1 + 336);
  *(_BYTE *)(a1 + 335) = v43;
  v45 = INIClass::ReadBool_Overwrite((int)a3, (unsigned __int8 *)(a1 + 36), &unk_8492F4, v44);
  LOBYTE(v63) = *(_BYTE *)(a1 + 337);
  p_unknown50 = &unk_8492E4;
  v61 = (CCINIClass *)(a1 + 36);
  *(_BYTE *)(a1 + 336) = v45;
  *(_BYTE *)(a1 + 337) = INIClass::ReadBool_Overwrite((int)a3, (unsigned __int8 *)v61, p_unknown50, v63);
  v46 = INIClass::ReadBool_Overwrite(
          (int)a3,
          (unsigned __int8 *)(a1 + 36),
          (CCINIClass *)stru_84928C.__pad_48,
          *(_BYTE *)(a1 + 338));
  v47 = *(_BYTE *)(a1 + 339);
  *(_BYTE *)(a1 + 338) = v46;
  v48 = INIClass::ReadBool_Overwrite(
          (int)a3,
          (unsigned __int8 *)(a1 + 36),
          (CCINIClass *)&stru_84928C.needsSave_flag,
          v47);
  LOBYTE(v63) = *(_BYTE *)(a1 + 340);
  p_unknown50 = (CCINIClass *)&stru_84928C.__pad_20[8];
  v61 = (CCINIClass *)(a1 + 36);
  *(_BYTE *)(a1 + 339) = v48;
  *(_BYTE *)(a1 + 340) = INIClass::ReadBool_Overwrite((int)a3, (unsigned __int8 *)v61, p_unknown50, v63);
  v49 = INIClass::ReadBool_Overwrite(
          (int)a3,
          (unsigned __int8 *)(a1 + 36),
          (CCINIClass *)&stru_84928C.sectionHead[2],
          *(_BYTE *)(a1 + 341));
  v50 = *(CCINIClass **)(a1 + 344);
  *(_BYTE *)(a1 + 341) = v49;
  v51 = INIClass::ReadInt_Overwrite(
          (int)a3,
          (unsigned __int8 *)(a1 + 36),
          (CCINIClass *)&stru_84928C.headNode[2],
          (INIClass *)v50);
  LOBYTE(v63) = *(_BYTE *)(a1 + 348);
  p_unknown50 = &stru_84928C;
  v61 = (CCINIClass *)(a1 + 36);
  *(_DWORD *)(a1 + 344) = v51;
  *(_BYTE *)(a1 + 348) = INIClass::ReadBool_Overwrite((int)a3, (unsigned __int8 *)v61, p_unknown50, v63);
  LOBYTE(aP1.INIClass_field_3C) = 0;
  INIClass::GetString(
    a3,
    (INIClass *)(a1 + 36),
    aAttachedpartic,
    (INIClass *)&aP1.INIClass_field_3C,
    (INIClass *)&aP1.INIClass_field_3C,
    20);
  v52 = WarheadTypeClass::applyDamage((ObjectClass *)&aP1.INIClass_field_3C);
  if ( v52 != -1 )
    *(_DWORD *)(a1 + 284) = *(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_18[8] + 4 * v52);
  v53 = *(_DWORD *)(a1 + 172);
  if ( INIClass::GetString(
         a3,
         (INIClass *)(a1 + 36),
         &unk_8183B4,
         (INIClass *)&stru_87C374.__pad_579C[33876],
         (INIClass *)&aP1.unknown50,
         128) )
  {
    v54 = WarheadTypeClass::FindOrCreate((ObjectClass *)&aP1.unknown50);
  }
  else
  {
    v54 = v53;
  }
  v55 = *(_DWORD *)(a1 + 160);
  v63 = 128;
  p_unknown50 = (CCINIClass *)&aP1.unknown50;
  v61 = (CCINIClass *)&stru_87C374.__pad_579C[33876];
  p_IntList = (VectorClass *)aProjectile;
  v59 = (CCINIClass *)(a1 + 36);
  *(_DWORD *)(a1 + 172) = v54;
  if ( INIClass::GetString(
         a3,
         (INIClass *)v59,
         (unsigned __int8 *)p_IntList,
         (INIClass *)v61,
         (INIClass *)p_unknown50,
         v63) )
  {
    *(_DWORD *)(a1 + 160) = ObjectTypeClass::FindOrCreate((ObjectClass *)&aP1.unknown50);
  }
  else
  {
    *(_DWORD *)(a1 + 160) = v55;
  }
  return 1;
}


// ==== 0x007729F0  WeaponTypeClass::CalculateSpeed  this=WeaponTypeClass  sig=csp ====
int __thiscall WeaponTypeClass::CalculateSpeed(_DWORD *this)
{
  int result; // eax
  double WeatherConBoltExplosion; // [esp+4h] [ebp-8h]

  result = this->Projectile; /*0x7729f6*/
  if ( result && !*(_DWORD *)(result + 732) ) /*0x772a00*/
  {
    WeatherConBoltExplosion = (double)MEMORY[0x8871E0][1].?; /*0x772a1e*/
    if ( *(_BYTE *)(result + 661) ) /*0x772a16*/
      WeatherConBoltExplosion = RulesClass::GetFiringDistance(); /*0x772a29*/
    result = TechnoClass::ComputeScanRange((void *)this->Range, WeatherConBoltExplosion); /*0x772a3d*/
    this->Speed = result; /*0x772a42*/
  }
  return result; /*0x772a48*/
}


// ==== 0x00772A50  ArmorType::LookupByName  this=ObjectClass  sig=csp ====
int __thiscall ArmorType::LookupByName(void *this)
{
  int v2; // edi
  const void **v3; // esi

  if ( !this ) /*0x772a57*/
    return 0; /*0x772a7c*/
  v2 = 0; /*0x772a59*/
  v3 = (const void **)&off_7E5210; /*0x772a5b*/
  while ( _strcmpi(*v3, this) ) /*0x772a6e*/
  {
    ++v3; /*0x772a70*/
    ++v2; /*0x772a73*/
    if ( (int)v3 >= (int)&off_7E523C ) /*0x772a7a*/
      return 0; /*0x772a7a*/
  }
  return v2; /*0x772a7c*/
}


// ==== 0x00772A90  Building::GetRenderType  this=BuildingTypeClass  sig=csp ====
char __thiscall Building_GetRenderType(_DWORD *this)
{
  int v1; // ecx
  char result; // al

  v1 = this->Strength; /*0x772a90*/
  result = 0; /*0x772a96*/
  if ( *(_BYTE *)(v1 + 676) ) /*0x772a98*/
    result = 4; /*0x772aa2*/
  if ( *(_BYTE *)(v1 + 677) ) /*0x772aa7*/
    return result | 0xB8; /*0x772ab1*/
  return result; /*0x772ab3*/
}


// ==== 0x00772AC0  InfantryClass::startPanic  this=InfantryClass  sig=csp ====
bool __thiscall sub_772AC0(_DWORD *this)
{
  int v1; // eax

  v1 = this->currentMission; /*0x772ac0*/
  return v1 && *(_BYTE *)(v1 + 324); /*0x772ad6*/
}


// ==== 0x00772AE0  WeaponTypeClass::ProcessPower  this=WeaponTypeClass  sig=csp ====
int __thiscall WeaponTypeClass::ProcessPower(int this, int *a2)
{
  int v3; // ecx
  int v4; // edx
  int v5; // eax
  int v6; // ecx
  int v7; // edx
  int v8; // eax
  int v9; // eax
  int v10; // eax
  int v11; // eax
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

  AbstractTypeClass::ProcessPower((char *)this, a2); /*0x772ae9*/
  Power::TimerProcess(*(_DWORD *)(this + 152)); /*0x772af7*/
  LOBYTE(v3) = *(_BYTE *)(this + 304); /*0x772afc*/
  Power::FlagProcess(a2, v3); /*0x772b05*/
  LOBYTE(v4) = *(_BYTE *)(this + 325); /*0x772b0a*/
  v5 = Power::FlagProcess(a2, v4); /*0x772b13*/
  LOBYTE(v5) = *(_BYTE *)(this + 326); /*0x772b18*/
  Power::FlagProcess(a2, v5); /*0x772b21*/
  LOBYTE(v6) = *(_BYTE *)(this + 327); /*0x772b26*/
  Power::FlagProcess(a2, v6); /*0x772b2f*/
  LOBYTE(v7) = *(_BYTE *)(this + 329); /*0x772b34*/
  v8 = Power::FlagProcess(a2, v7); /*0x772b3d*/
  LOBYTE(v8) = *(_BYTE *)(this + 333); /*0x772b42*/
  Power::FlagProcess(a2, v8); /*0x772b4b*/
  Power::TimerProcess(*(_DWORD *)(this + 156)); /*0x772b59*/
  v9 = *(_DWORD *)(this + 160); /*0x772b5e*/
  if ( v9 ) /*0x772b66*/
  {
    v10 = (*(int (__stdcall **)(int))(*(_DWORD *)(v9 + 4) + 16))(v9 + 4); /*0x772b6f*/
    Power::TimerProcess(v10); /*0x772b75*/
  }
  Power::TimerProcess(*(_DWORD *)(this + 164)); /*0x772b83*/
  Power::TimerProcess(*(_DWORD *)(this + 168)); /*0x772b91*/
  v11 = *(_DWORD *)(this + 172); /*0x772b96*/
  if ( v11 ) /*0x772b9e*/
  {
    v12 = (*(int (__stdcall **)(int))(*(_DWORD *)(v11 + 4) + 16))(v11 + 4); /*0x772ba7*/
    Power::TimerProcess(v12); /*0x772bad*/
  }
  Power::TimerProcess(*(_DWORD *)(this + 176)); /*0x772bbb*/
  Power::TimerProcess(*(_DWORD *)(this + 180)); /*0x772bc9*/
  Power::TimerProcess(*(_DWORD *)(this + 204)); /*0x772bd7*/
  Power::TimerProcess(*(_DWORD *)(this + 232)); /*0x772be5*/
  Power::TimerProcess(*(_DWORD *)(this + 260)); /*0x772bf3*/
  LOBYTE(v13) = *(_BYTE *)(this + 297); /*0x772bf8*/
  v14 = Power::FlagProcess(a2, v13); /*0x772c01*/
  LOBYTE(v14) = *(_BYTE *)(this + 302); /*0x772c06*/
  Power::FlagProcess(a2, v14); /*0x772c0f*/
  LOBYTE(v15) = *(_BYTE *)(this + 334); /*0x772c14*/
  Power::FinalizeDrain(a2, v15); /*0x772c1d*/
  LOBYTE(v16) = *(_BYTE *)(this + 332); /*0x772c22*/
  v17 = Power::FlagProcess(a2, v16); /*0x772c2b*/
  LOBYTE(v17) = *(_BYTE *)(this + 301); /*0x772c30*/
  Power::FlagProcess(a2, v17); /*0x772c39*/
  LOBYTE(v18) = *(_BYTE *)(this + 328); /*0x772c3e*/
  Power::FlagProcess(a2, v18); /*0x772c47*/
  LOBYTE(v19) = *(_BYTE *)(this + 303); /*0x772c4c*/
  v20 = Power::FlagProcess(a2, v19); /*0x772c55*/
  LOBYTE(v20) = *(_BYTE *)(this + 298); /*0x772c5a*/
  Power::FlagProcess(a2, v20); /*0x772c63*/
  LOBYTE(v21) = *(_BYTE *)(this + 299); /*0x772c68*/
  Power::FlagProcess(a2, v21); /*0x772c71*/
  LOBYTE(v22) = *(_BYTE *)(this + 300); /*0x772c76*/
  return Power::FlagProcess(a2, v22); /*0x772c84*/
}


// ==== 0x00772C90  WeaponTypeClass::GetClassIdentifier  this=WeaponTypeClass  sig=csp ====
int __stdcall WeaponTypeClass::_vt03(int a1, _DWORD *a2)
{
  if ( !a2 ) /*0x772c96*/
    return -2147467261; /*0x772c98*/
  *a2 = -1613620790; /*0x772ca6*/
  a2[1] = 298979195; /*0x772cae*/
  a2[2] = 1610642049; /*0x772cb7*/
  a2[3] = -1252326136; /*0x772cc0*/
  return 0; /*0x772c9d*/
}


// ==== 0x00772CD0  WeaponTypeClass::SaveLoad_Prefix  this=WeaponTypeClass  sig=csp ====
int __userpurge WeaponTypeClass::SaveLoad_Prefix@<eax>(int a1@<ebx>, int *a2, int a3, int a4)
{
  int *v4; // edi
  _DWORD *v5; // ebp
  int v6; // esi
  int result; // eax
  int i; // ebx
  int j; // ebx
  int k; // ebx
  int m; // esi

  v4 = a2; /*0x772cd3*/
  v5 = a2 + 47; /*0x772cdd*/
  (*(void (__thiscall **)(int *))(a2[47] + 12))(a2 + 47); /*0x772ce5*/
  (*(void (__thiscall **)(int *))(v4[54] + 12))(v4 + 54); /*0x772cf4*/
  v6 = a3; /*0x772cf7*/
  result = AbstractClass::SaveLoad_Prefix_0(v4, a3); /*0x772cfd*/
  if ( result >= 0 ) /*0x772d04*/
  {
    if ( v4 ) /*0x772d0c*/
      WeaponTypeClass::loadWeaponProperties(v4, (int)&a2); /*0x772d15*/
    if ( v4 != (int *)-244 ) /*0x772d23*/
    {
      DynamicVectorClass::AnimTypeConstructor(v4 + 61, 0, 0); /*0x772d2b*/
      v4[61] = (int)&vt_TypeList_AnimTypeClass_const; /*0x772d30*/
    }
    (*(void (__stdcall **)(int, int **, int, _DWORD, int))(*(_DWORD *)v6 + 12))(v6, &a2, 4, 0, a1); /*0x772d42*/
    for ( i = 0; i < a3; ++i ) /*0x772d4d*/
    {
      (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)v6 + 12))(v6, &a4, 4, 0); /*0x772d5b*/
      DynamicVector::Add_Alt4(v4 + 61, &a4); /*0x772d69*/
    }
    if ( v5 ) /*0x772d77*/
    {
      DynamicVectorClass::Construct(v5, 0, 0); /*0x772d7f*/
      *v5 = &vt_TypeList_int; /*0x772d84*/
    }
    (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)v6 + 12))(v6, &a3, 4, 0); /*0x772d97*/
    for ( j = 0; j < a3; ++j ) /*0x772da2*/
    {
      (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)v6 + 12))(v6, &a4, 4, 0); /*0x772db0*/
      DynamicVector::Add_Alt(v5, &a4); /*0x772dba*/
    }
    if ( v4 != (int *)-216 ) /*0x772dce*/
      TypeList::Construct(v4 + 54); /*0x772dd2*/
    (*(void (__stdcall **)(int, int *, int))(*(_DWORD *)v6 + 12))(v6, &a3, 4); /*0x772de3*/
    for ( k = 0; k < (int)a2; ++k ) /*0x772dee*/
    {
      (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)v6 + 12))(v6, &a3, 4, 0); /*0x772dfc*/
      DynamicVector::Add_Alt(v4 + 54, &a3); /*0x772e06*/
    }
    ObjectPtr::RegisterForTracking((int)&MEMORY[0xB0C110], v4 + 43); /*0x772e1e*/
    ObjectPtr::RegisterForTracking((int)&MEMORY[0xB0C110], v4 + 40); /*0x772e2f*/
    ObjectPtr::RegisterForTracking((int)&MEMORY[0xB0C110], v4 + 71); /*0x772e40*/
    ObjectPtr::RegisterForTracking((int)&MEMORY[0xB0C110], v4 + 69); /*0x772e51*/
    ObjectPtr::RegisterForTracking((int)&MEMORY[0xB0C110], v4 + 68); /*0x772e62*/
    ObjectPtr::RegisterForTracking((int)&MEMORY[0xB0C110], v4 + 70); /*0x772e73*/
    for ( m = 0; m < v4[65]; ++m ) /*0x772e83*/
      ObjectPtr::RegisterForTracking((int)&MEMORY[0xB0C110], (int *)(v4[62] + 4 * m)); /*0x772e94*/
    return 0; /*0x772ea4*/
  }
  return result; /*0x772ea6*/
}


// ==== 0x00772EB0  WeaponTypeClass::SaveLoad_Prefix_0  this=WeaponTypeClass  sig=csp ====
int __userpurge WeaponTypeClass::SaveLoad_Prefix_0@<eax>(int a1@<ebx>, int *a2, int *a3, int a4, int a5)
{
  int result; // eax
  int v6; // edx
  int i; // ebx
  int v8; // edx
  int j; // ebx
  int v10; // edx
  int k; // ebx

  result = AbstractClass::SaveLoad_Prefix(a2, a3, a4); /*0x772ec1*/
  if ( result >= 0 ) /*0x772ec8*/
  {
    v6 = *a3; /*0x772ed4*/
    a4 = a2[65]; /*0x772ee1*/
    (*(void (__stdcall **)(int *, int *, int, _DWORD, int))(v6 + 16))(a3, &a4, 4, 0, a1); /*0x772ee5*/
    for ( i = 0; i < a5; ++i ) /*0x772ef0*/
      (*(void (__stdcall **)(int *, int, int, _DWORD))(*a3 + 16))(a3, a2[62] + 4 * i, 4, 0); /*0x772f03*/
    v8 = *a3; /*0x772f13*/
    a5 = a2[51]; /*0x772f1f*/
    (*(void (__stdcall **)(int *, int *, int, _DWORD))(v8 + 16))(a3, &a5, 4, 0); /*0x772f23*/
    for ( j = 0; j < a5; ++j ) /*0x772f2e*/
      (*(void (__stdcall **)(int *, int, int, _DWORD))(*a3 + 16))(a3, a2[48] + 4 * j, 4, 0); /*0x772f41*/
    v10 = *a3; /*0x772f51*/
    a5 = a2[58]; /*0x772f5d*/
    (*(void (__stdcall **)(int *, int *, int))(v10 + 16))(a3, &a5, 4); /*0x772f61*/
    for ( k = 0; k < a4; ++k ) /*0x772f6c*/
      (*(void (__stdcall **)(int *, int, int, _DWORD))(*a3 + 16))(a3, a2[55] + 4 * k, 4, 0); /*0x772f7f*/
    return 0; /*0x772f89*/
  }
  return result; /*0x772f8c*/
}


// ==== 0x00772FA0  InfantryTypeClass::Find  this=ObjectClass  sig=csp ====
WeaponTypeClass *__thiscall InfantryTypeClass::Find(ObjectClass *Source)
{
  int v2; // esi
  _DWORD *v3; // eax

  if ( !_strcmpi(&stru_817460.sectionHead[1], Source) || !_strcmpi(g_Str_none, Source) ) /*0x772fbc*/
    return 0; /*0x77301f*/
  v2 = 0; /*0x772fcd*/
  if ( *(int *)&stru_87C374.__pad_579C[23144] <= 0 ) /*0x772fd1*/
  {
LABEL_6:
    v3 = (_DWORD *)__2_YAPAXI_Z(0x160u); /*0x772ff6*/
    if ( v3 ) /*0x773005*/
      return (WeaponTypeClass *)WeaponTypeClass::Constructor(v3, Source); /*0x773011*/
    return 0; /*0x773005*/
  }
  while ( _strcmpi((const void *)(*(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[23132] + 4 * v2) + 36), Source) ) /*0x772fea*/
  {
    if ( ++v2 >= *(int *)&stru_87C374.__pad_579C[23144] ) /*0x772ff4*/
      goto LABEL_6; /*0x772ff4*/
  }
  return *(WeaponTypeClass **)(*(_DWORD *)&stru_87C374.__pad_579C[23132] + 4 * v2); /*0x77300f*/
}


// ==== 0x00773030  SuperWeaponClass::FindByName  this=char*  sig=csp ====
int __thiscall SuperWeaponClass::FindByName(void *this)
{
  int v1; // esi

  v1 = 0; /*0x773036*/
  if ( *(int *)&stru_87C374.__pad_579C[23144] <= 0 ) /*0x77303d*/
    return -1; /*0x773062*/
  while ( _strcmpi((const void *)(*(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[23132] + 4 * v1) + 36), this) ) /*0x773056*/
  {
    if ( ++v1 >= *(int *)&stru_87C374.__pad_579C[23144] ) /*0x773060*/
      return -1; /*0x773060*/
  }
  return v1; /*0x773062*/
}


// ==== 0x00773070  TechnoClass::GetWeaponRange  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::GetWeaponRange(_DWORD *this, void *a2)
{
  int v2; // eax
  double FiringDistance; // st7

  v2 = this->locationY; /*0x773070*/
  if ( !v2 || *(_DWORD *)(v2 + 732) ) /*0x77307d*/
    return this->lineTrailer; /*0x7730c0*/
  if ( *(_BYTE *)(v2 + 661) ) /*0x773087*/
    FiringDistance = RulesClass::GetFiringDistance(); /*0x773091*/
  else
    FiringDistance = (double)MEMORY[0x8871E0][1].?; /*0x77309d*/
  return TechnoClass::ComputeScanRange(a2, FiringDistance); /*0x7730ba*/
}


// ==== 0x007730D0  WeaponTypeClass::GetObjectSize  this=WeaponTypeClass  sig=csp ====
int WeaponTypeClass::_vt12()
{
  return 352; /*0x7730d5*/
}


// ==== 0x007730E0  WeaponTypeClass::GetTypeIdentifier  this=WeaponTypeClass  sig=csp ====
int WeaponTypeClass::_vt11()
{
  return 49; /*0x7730e5*/
}


// ==== 0x007730F0  WeaponTypeClass::ddtor  this=WeaponTypeClass  sig=csp ====
WeaponTypeClass *__thiscall WeaponTypeClass::ddtor(void **Block, char a2)
{
  int v3; // eax
  void *v4; // eax
  void *v5; // eax
  DynamicVector *v6; // eax
  WeaponTypeClass *v8; // [esp+8h] [ebp-4h] BYREF

  *Block = &WeaponTypeClass::`vftable'; /*0x7730f7*/
  *(Block + 1) = &WeaponTypeClass::`vftable'; /*0x7730fd*/
  *(Block + 2) = &WeaponTypeClass::`vftable'; /*0x773104*/
  *(Block + 3) = &vt_WeaponTypeClass; /*0x77310b*/
  AbstractClass::AnnounceExpiredPointer(Block, 1); /*0x773112*/
  *(Block + 40) = 0; /*0x77311d*/
  *(Block + 43) = 0; /*0x773123*/
  v8 = (WeaponTypeClass *)Block; /*0x773135*/
  v3 = ((int (__thiscall *)(WeaponTypeClass **, WeaponTypeClass **))MEMORY[0x887568]->uniqueId)(&MEMORY[0x887568], &v8); /*0x773139*/
  if ( v3 != -1 && v3 < MEMORY[0x887578] && v3 < --MEMORY[0x887578] ) /*0x773154*/
  {
    do /*0x77316c*/
    {
      ++v3; /*0x77315c*/
      *((_DWORD *)MEMORY[0x88756C] + v3 - 1) = *((_DWORD *)MEMORY[0x88756C] + v3); /*0x773160*/
    }
    while ( v3 < MEMORY[0x887578] ); /*0x77316c*/
  }
  v4 = *(Block + 62); /*0x77316e*/
  *(Block + 61) = &vt_VectorClass_AnimTypeClass_const; /*0x773174*/
  if ( v4 && *((_BYTE *)Block + 257) ) /*0x773182*/
  {
    __3_YAXPAX_Z(v4); /*0x77318b*/
    *(Block + 62) = 0; /*0x773193*/
  }
  *((_BYTE *)Block + 257) = 0; /*0x773199*/
  *(Block + 63) = 0; /*0x77319f*/
  v5 = *(Block + 55); /*0x7731a5*/
  *(Block + 54) = &vt_VectorClass_int; /*0x7731ab*/
  if ( v5 && *((_BYTE *)Block + 229) ) /*0x7731b9*/
  {
    __3_YAXPAX_Z(v5); /*0x7731c2*/
    *(Block + 55) = 0; /*0x7731ca*/
  }
  *((_BYTE *)Block + 229) = 0; /*0x7731d0*/
  *(Block + 56) = 0; /*0x7731d6*/
  v6 = (DynamicVector *)*(Block + 48); /*0x7731dc*/
  *(Block + 47) = &vt_VectorClass_int; /*0x7731e2*/
  if ( v6 && *((_BYTE *)Block + 201) ) /*0x7731f0*/
  {
    __3_YAXPAX_Z(v6); /*0x7731f9*/
    *(Block + 48) = 0; /*0x773201*/
  }
  *((_BYTE *)Block + 201) = 0; /*0x773209*/
  *(Block + 49) = 0; /*0x77320f*/
  AbstractTypeClass::Dtor(Block); /*0x773215*/
  if ( (a2 & 1) != 0 ) /*0x77321f*/
    __3_YAXPAX_Z(Block); /*0x773222*/
  return (WeaponTypeClass *)Block; /*0x77322c*/
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
    *v4 = &vt_WebBrowser; /*0x77348e*/
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


// ==== 0x00773590  ObjectClass::method  this=AbstractClass  sig=csp ====
char __thiscall sub_773590(AnimClass *this, int a2, int a3)
{
  void **v4; // esi

  *(_DWORD *)&this->__pad_40C[4] = a2; /*0x77359e*/
  Debug::Log(); /*0x7735a4*/
  v4 = &this->field_8; /*0x7735ac*/
  if ( CoCreateInstance(&stru_7F7C60, 0, 1u, &stru_7F7C30, &this->field_8) >= 0 ) /*0x7735c6*/
  {
    Debug::Log(); /*0x7735cd*/
    (*(void (__stdcall **)(void *, AnimClass *))(*(_DWORD *)*v4 + 20))(*v4, this); /*0x7735db*/
    (*(void (__stdcall **)(void *, int, int))(*(_DWORD *)*v4 + 12))(*v4, a2, a3); /*0x7735e9*/
    (*(void (__stdcall **)(void *, int))(*(_DWORD *)*v4 + 60))(*v4, 1); /*0x7735f3*/
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

  if ( RegOpenKeyExA(HKEY_LOCAL_MACHINE, MEMORY[0x849690], 0, 0x20019u, &phkResult) ) /*0x773628*/
    return 0; /*0x773628*/
  strcpy(ValueName, a2); /*0x77364f*/
  if ( !*(_DWORD *)(this + 8) ) /*0x773653*/
    strcat(ValueName, stru_84968C); /*0x773684*/
  cbData = 512; /*0x7736b1*/
  v3 = RegQueryValueExA(phkResult, ValueName, 0, &Type, Data, &cbData); /*0x7736bf*/
  RegCloseKey(phkResult); /*0x7736c2*/
  if ( v3 ) /*0x7736ca*/
    return 0; /*0x7736ca*/
  Debug::Log(); /*0x7736e5*/
  if ( !*(_DWORD *)(this + 8) ) /*0x7736f2*/
    return WebBrowser::OpenURL(Data); /*0x773843*/
  mbstowcs((wchar_t *)(this + 12), (const char *)Data, 0x200u); /*0x773709*/
  if ( RegOpenKeyExA(HKEY_LOCAL_MACHINE, MEMORY[0x84964C], 0, 0x20019u, &phkResult) ) /*0x773726*/
    return 0; /*0x773726*/
  cbData = 260; /*0x77374a*/
  v4 = RegQueryValueExA(phkResult, MEMORY[0x849640], 0, &Type, v12, &cbData); /*0x773754*/
  RegCloseKey(phkResult); /*0x77375b*/
  if ( v4 ) /*0x773763*/
    return 0; /*0x773763*/
  v5 = strrchr((const char *)v12, 92); /*0x773775*/
  if ( !v5 || strlen((const char *)v12) > v5 - (char *)v12 + 1 ) /*0x773795*/
    strcat((char *)v12, asc_815E74); /*0x7737bc*/
  mbstowcs(Destination, (const char *)v12, 0x104u); /*0x7737d7*/
  wcscat(Destination, stru_84962C); /*0x7737e9*/
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
BOOL __thiscall sub_7738A0(_DWORD *this, const char *cbData, LPBYTE lpData, const char *Type)
{
  LSTATUS Value; // esi
  HKEY phkResult; // [esp+8h] [ebp-44h] BYREF
  CHAR ValueName[64]; // [esp+Ch] [ebp-40h] BYREF

  Value = RegOpenKeyExA(HKEY_LOCAL_MACHINE, MEMORY[0x849690], 0, 0x20019u, &phkResult); /*0x7738c3*/
  if ( !Value ) /*0x7738c7*/
  {
    strcpy(ValueName, cbData); /*0x7738e8*/
    if ( !this->vtable3 ) /*0x7738ec*/
      strcat(ValueName, stru_84968C); /*0x77391d*/
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

  v2 = RegOpenKeyExA(HKEY_LOCAL_MACHINE, MEMORY[0x84964C], 0, 0x20019u, &phkResult); /*0x773990*/
  if ( !v2 ) /*0x773994*/
  {
    v3 = (char *)Type; /*0x77399a*/
    v2 = RegQueryValueExA(phkResult, MEMORY[0x849640], 0, (LPDWORD)&Type, Type, &cbData); /*0x7739c6*/
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
int __thiscall WebBrowser::_vt00(WebBrowser *this)
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
int __thiscall WebBrowser::_vt01(WebBrowser *this)
{
  int v1; // ecx
  int v3; // [esp+4h] [ebp+4h]

  v1 = *(_DWORD *)(v3 + 4) + 1; /*0x773aa7*/
  *(_DWORD *)(v3 + 4) = v1; /*0x773aa8*/
  return v1; /*0x773aad*/
}


// ==== 0x00773AB0  WebBrowser::Release  this=WebBrowser  sig=csp ====
int __thiscall WebBrowser::_vt02(WebBrowser *this)
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
int __thiscall WebBrowser::_vt04(WebBrowser *this)
{
  return 0; /*0x773b02*/
}


// ==== 0x00773B10  WebBrowser::Write  this=WebBrowser  sig=csp ====
int __thiscall WebBrowser::_vt05(WebBrowser *this)
{
  int v2; // [esp+4h] [ebp+4h]
  int v3; // [esp+Ch] [ebp+Ch]

  if ( v3 ) /*0x773b16*/
    (*(void (__stdcall **)(_DWORD, int, _DWORD, wchar_t *))(**(_DWORD **)(v2 + 8) + 64))( /*0x773b2d*/
      *(_DWORD *)(v2 + 8),
      v2 + 12,
      0,
      MEMORY[0x8496B8]);
  return 0; /*0x773b32*/
}


// ==== 0x00773B40  WebBrowser::StubReturnFalse  this=WebBrowser  sig=csp ====
int __thiscall WebBrowser::_vt06(WebBrowser *this)
{
  return 0; /*0x773b42*/
}


// ==== 0x00773B50  WebBrowser::SetSize  this=WebBrowser  sig=csp ====
int __thiscall WebBrowser::_vt07(WebBrowser *this)
{
  return 0; /*0x773b52*/
}


// ==== 0x00773B60  WebBrowser::CopyTo  this=WebBrowser  sig=csp ====
int __thiscall WebBrowser::_vt08(WebBrowser *this)
{
  return 0; /*0x773b62*/
}


// ==== 0x00773B70  WebBrowser::Commit  this=WebBrowser  sig=csp ====
int __thiscall WebBrowser::_vt09(WebBrowser *this)
{
  return 0; /*0x773b72*/
}


// ==== 0x00773B80  WebBrowser::Revert  this=WebBrowser  sig=csp ====
int __thiscall WebBrowser::_vt10(WebBrowser *this)
{
  return 0; /*0x773b82*/
}


// ==== 0x00773B90  WebBrowser::LockRegion  this=WebBrowser  sig=csp ====
int __thiscall WebBrowser::_vt11(WebBrowser *this)
{
  return 0; /*0x773b92*/
}


// ==== 0x00773BA0  WebBrowser::UnlockRegion  this=WebBrowser  sig=csp ====
int __thiscall WebBrowser::_vt12(WebBrowser *this)
{
  return -2147467259; /*0x773ba5*/
}


// ==== 0x00773BB0  WebBrowser::Stat  this=WebBrowser  sig=csp ====
int __thiscall WebBrowser::_vt13(WebBrowser *this)
{
  return 0; /*0x773bb2*/
}


// ==== 0x00773BC0  WebBrowser::Clone  this=WebBrowser  sig=csp ====
int __thiscall WebBrowser::_vt14(WebBrowser *this)
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
  if ( RegOpenKeyExA(HKEY_LOCAL_MACHINE, MEMORY[0x84964C], 0, 0x20019u, &phkResult) ) /*0x773bea*/
    return 0; /*0x773bea*/
  cbData = 260; /*0x773c13*/
  v1 = RegQueryValueExA(phkResult, MEMORY[0x849640], 0, &Type, Data, &cbData); /*0x773c21*/
  RegCloseKey(phkResult); /*0x773c28*/
  if ( v1 ) /*0x773c30*/
    return 0; /*0x773d06*/
  v2 = strrchr((const char *)Data, 92); /*0x773c43*/
  if ( !v2 || strlen((const char *)Data) > v2 - (char *)Data + 1 ) /*0x773c63*/
    strcat((char *)Data, asc_815E74); /*0x773c8b*/
  mbstowcs((wchar_t *)(v9 + 12), (const char *)Data, 0x104u); /*0x773caa*/
  wcscat((wchar_t *)(v9 + 12), MEMORY[0x8496C4]); /*0x773cb5*/
  mbstowcs(Dest, (const char *)Data, 0x104u); /*0x773ccc*/
  wcscat(Dest, stru_84962C); /*0x773cde*/
  return (*(int (__stdcall **)(_DWORD, wchar_t *, _DWORD, _DWORD))(**(_DWORD **)(v9 + 8) + 64))( /*0x773cfc*/
           *(_DWORD *)(v9 + 8),
           Dest,
           0,
           0);
}


// ==== 0x00773D20  WebBrowser::Navigate  this=WebBrowser  sig=csp ====
int __thiscall WebBrowser::_vt15(WebBrowser *this)
{
  Debug::Log(); /*0x773d2a*/
  return 0; /*0x773d34*/
}


// ==== 0x00773D40  WebBrowser::GoBack  this=WebBrowser  sig=csp ====
int __thiscall WebBrowser::_vt16(WebBrowser *this)
{
  void *v2; // [esp+0h] [ebp-94h] BYREF
  _DWORD v3[2]; // [esp+4h] [ebp-90h] BYREF
  int v4; // [esp+Ch] [ebp-88h] BYREF
  char v5; // [esp+10h] [ebp-84h]
  char Dest[64]; // [esp+14h] [ebp-80h] BYREF
  char v7[64]; // [esp+54h] [ebp-40h] BYREF
  wchar_t *Source; // [esp+9Ch] [ebp+8h]
  wchar_t *v9; // [esp+A0h] [ebp+Ch]

  wcstombs(Dest, Source, 0x40u); /*0x773d55*/
  wcstombs(v7, v9, 0x40u); /*0x773d69*/
  String::Assign((char **)&v2, Dest); /*0x773d7a*/
  Debug::Log(); /*0x773d8e*/
  LoadPlayerProfile(v3, (const char **)&v2); /*0x773d9e*/
  v4 = 0; /*0x773da9*/
  v5 = 0; /*0x773dad*/
  ReadRegistryOptionsWOL(&v4); /*0x773db1*/
  if ( Flag::IsNot2(&v4) ) /*0x773dba*/
  {
    FindChannelWOL(Dest, (int)v7, 1u, *(_DWORD *)(v3[1] + 16)); /*0x773dd5*/
    SaveConfigWOL((int)MEMORY[0xA8B238]); /*0x773ddf*/
  }
  String::Assign_Alt((void **)&g_WebBrowser, Dest); /*0x773dee*/
  String::Assign_Alt((void **)&g_WebBrowserConfig, v7); /*0x773dfd*/
  v3[0] = &vt_rc_ptr_PlayerProfile; /*0x773e06*/
  ComPtr::Release(v3); /*0x773e0e*/
  DeleteAndZero(&v2); /*0x773e17*/
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
      *v5 = &vt_WebBrowser; /*0x773f95*/
      Debug::Log(g_Str_Instantiating_embedded_WebBrow); /*0x773f9b*/
      *(_DWORD *)(v6 + 1040) = v3; /*0x773fa3*/
      Debug::Log(g_Str_Creating_WOLBrowser_component_); /*0x773fae*/
      if ( CoCreateInstance(&stru_7F7C60, 0, 1u, &stru_7F7C30, (LPVOID *)(v6 + 8)) >= 0 ) /*0x773fcd*/
      {
        Debug::Log(unk_849594); /*0x773fd4*/
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
  void *v2; // eax
  char v4; // [esp+10h] [ebp+4h]

  *(_DWORD *)this->__pad_0 = &vt_WebBrowser; /*0x7740a8*/
  Debug::Log(); /*0x7740ae*/
  if ( this->field_8 ) /*0x7740b3*/
  {
    Debug::Log(); /*0x7740c2*/
    (*(void (__stdcall **)(void *, WebBrowser *))(*(_DWORD *)this->field_8 + 24))(this->field_8, this); /*0x7740d1*/
    (*(void (__stdcall **)(void *))(*(_DWORD *)this->field_8 + 16))(this->field_8); /*0x7740da*/
  }
  v2 = this->field_8; /*0x7740dd*/
  if ( v2 ) /*0x7740e2*/
    (*(void (__stdcall **)(void *))(*(_DWORD *)v2 + 8))(this->field_8); /*0x7740e7*/
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
_DWORD *__thiscall WinModemClass::Construct(_DWORD *this)
{
  *this = &WinModemClass::`vftable'; /*0x774128*/
  this->q024 = __2_YAPAXI_Z(0x2000); /*0x774133*/
  this->q015 = 0; /*0x77413b*/
  this->q016 = 0; /*0x77413e*/
  this->q014 = 0; /*0x774141*/
  this->u8_51 = 0; /*0x774144*/
  this->q068 = 0; /*0x774147*/
  this->Member100 = 0; /*0x77414a*/
  this->q004 = 0; /*0x77414d*/
  this->q008 = 0; /*0x774150*/
  this->q00C = 0; /*0x774153*/
  this->u32_10 = 0; /*0x774156*/
  this->q014 = 0; /*0x774159*/
  this->u32_18 = 0; /*0x77415c*/
  this->q05C = -1; /*0x77415f*/
  return this; /*0x774168*/
}


// ==== 0x007741C0  FindRegistrySubKey  this=rc_ptr_base  sig=csp ====
HKEY __thiscall FindRegistrySubKey(rc_ptr_base *this)
{
  void *v1; // edx
  int *p_uniqueId; // ebx
  CCINIClass *v5; // esi
  DWORD ebp2; // ebp
  LPSTR lpClass; // [esp+10h] [ebp-434h]
  ObjectClass *cbMaxSubKeyLen; // [esp+14h] [ebp-430h] BYREF
  DWORD cbMaxClassLen; // [esp+18h] [ebp-42Ch] BYREF
  DWORD cSubKeys; // [esp+1Ch] [ebp-428h] BYREF
  HKEY phkResult; // [esp+20h] [ebp-424h] BYREF
  void *v12; // [esp+24h] [ebp-420h]
  DWORD cchClass; // [esp+28h] [ebp-41Ch] BYREF
  DWORD cbMaxValueLen; // [esp+2Ch] [ebp-418h] BYREF
  DWORD cValues; // [esp+30h] [ebp-414h] BYREF
  DWORD cbSecurityDescriptor; // [esp+34h] [ebp-410h] BYREF
  struct _FILETIME ftLastWriteTime; // [esp+38h] [ebp-40Ch] BYREF
  DWORD cbMaxValueNameLen; // [esp+40h] [ebp-404h] BYREF
  CHAR Class[1024]; // [esp+44h] [ebp-400h] BYREF
  char v20; // [esp+448h] [ebp+4h]

  v12 = v1; /*0x7741cc*/
  cchClass = 1024; /*0x774205*/
  if ( RegQueryInfoKeyA( /*0x77420d*/
         (HKEY)this,
         Class,
         &cchClass,
         0,
         &cSubKeys,
         (LPDWORD)&cbMaxSubKeyLen,
         &cbMaxClassLen,
         &cValues,
         &cbMaxValueNameLen,
         &cbMaxValueLen,
         &cbSecurityDescriptor,
         &ftLastWriteTime) )
  {
    return 0; /*0x7742cf*/
  }
  p_uniqueId = &cbMaxSubKeyLen->uniqueId; /*0x77421f*/
  v5 = (CCINIClass *)__2_YAPAXI_Z((size_t)&cbMaxSubKeyLen->uniqueId); /*0x77422c*/
  lpClass = (LPSTR)__2_YAPAXI_Z(cbMaxClassLen + 1); /*0x774235*/
  ebp2 = 0; /*0x774240*/
  if ( !cSubKeys ) /*0x774244*/
  {
LABEL_6:
    if ( v20 ) /*0x7742a7*/
      RegCloseKey((HKEY)this); /*0x7742aa*/
    __3_YAXPAX_Z(v5); /*0x7742b1*/
    __3_YAXPAX_Z(lpClass); /*0x7742bb*/
    return 0; /*0x7742bb*/
  }
  while ( 1 ) /*0x77425e*/
  {
    v5->__pad_0[0] = 0; /*0x77425e*/
    cbMaxSubKeyLen = (ObjectClass *)p_uniqueId; /*0x774262*/
    RegEnumKeyExA((HKEY)this, ebp2, v5->__pad_0, (LPDWORD)&cbMaxSubKeyLen, 0, lpClass, &cbMaxClassLen, &ftLastWriteTime); /*0x774266*/
    if ( !_strcmpi((char *)v12, v5->__pad_0) && !RegOpenKeyExA((HKEY)this, v5->__pad_0, 0, 0x20019u, &phkResult) ) /*0x77428b*/
      break; /*0x77428b*/
    if ( ++ebp2 >= cSubKeys ) /*0x77429c*/
      goto LABEL_6; /*0x77429c*/
  }
  if ( v20 ) /*0x7742db*/
    RegCloseKey((HKEY)this); /*0x7742de*/
  __3_YAXPAX_Z(v5); /*0x7742e5*/
  __3_YAXPAX_Z(lpClass); /*0x7742ef*/
  return phkResult; /*0x7742c3*/
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
int __thiscall WinModemClass::AddRef(int this, const char *a2, DWORD a3, BYTE a4, BYTE a5, char a6)
{
  HANDLE FileA; // ebp
  NullModemClass *v9; // edx
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
  if ( *(_DWORD *)(this + 92) != -1 ) /*0x774473*/
  {
    Debug::Log(); /*0x77447a*/
    CloseHandle(*(HANDLE *)(this + 92)); /*0x774486*/
    *(_DWORD *)(this + 92) = -1; /*0x77448c*/
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
    *(_DWORD *)(this + 92) = FileA; /*0x7744ee*/
    SetupComm(FileA, 0x2000u, 0x2000u); /*0x7744fc*/
    PurgeComm(*(HANDLE *)(this + 92), 0xFu); /*0x774508*/
    *(_DWORD *)(this + 40) = 0; /*0x77451a*/
    *(_DWORD *)(this + 44) = 0; /*0x77451d*/
    *(_DWORD *)(this + 48) = 0; /*0x774520*/
    *(_DWORD *)(this + 52) = 0; /*0x774523*/
    *(_DWORD *)(this + 56) = CreateEventA(0, 1, 1, 0); /*0x77452e*/
    *(_DWORD *)(this + 60) = 0; /*0x774531*/
    *(_DWORD *)(this + 64) = 0; /*0x774534*/
    *(_DWORD *)(this + 68) = 0; /*0x774537*/
    *(_DWORD *)(this + 72) = 0; /*0x77453a*/
    *(_DWORD *)(this + 76) = CreateEventA(0, 1, 1, 0); /*0x774543*/
    if ( GetCommState(FileA, &DCB) /*0x774598*/
      && (DCB.Parity = a4,
          DCB.BaudRate = a3,
          DCB.ByteSize = a5,
          DCB.StopBits = a6 - 1,
          *((_DWORD *)&DCB + 2) = *((_DWORD *)&DCB + 2) & 0xFFFF88C0 | 0x2015,
          SetCommState(FileA, &DCB)) )
    {
      qmemcpy((void *)(this + 8300), &DCB, 0x1Cu); /*0x7745b9*/
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
    (*(void (__thiscall **)(int, int))(this->u32_10)(this, 1); /*0x774612*/
    if ( ClearCommError(*(HANDLE *)(this + 92), &Errors, &Stat) ) /*0x774623*/
    {
      v9 = (NullModemClass *)Errors; /*0x77462d*/
      cbInQue = Stat.cbInQue; /*0x774631*/
      cbOutQue = Stat.cbOutQue; /*0x774635*/
      v12 = Errors == 0; /*0x774639*/
      *(_DWORD *)(this + 28) = Stat.cbInQue; /*0x77463b*/
      *(_DWORD *)(this + 32) = cbOutQue; /*0x77463e*/
      if ( !v12 ) /*0x774641*/
        WinModemClass::LogCommErrors((_DWORD *)this, v9, *(_BYTE *)&Stat, cbInQue, cbOutQue); /*0x774657*/
    }
    return (int)FileA; /*0x77465d*/
  }
}


// ==== 0x00774670  NullModemClass::sendData  this=NullModemClass  sig=csp ====
char __thiscall NullModemClass::sendData(int this)
{
  void *v2; // ecx
  NullModemClass *v4; // edx
  DWORD cbInQue; // eax
  DWORD cbOutQue; // ecx
  bool v7; // zf
  void *v8; // [esp-8h] [ebp-44h]
  DWORD Errors; // [esp+Ch] [ebp-30h] BYREF
  DWORD EvtMask; // [esp+10h] [ebp-2Ch] BYREF
  struct _COMSTAT Stat; // [esp+14h] [ebp-28h] BYREF
  struct _DCB DCB; // [esp+20h] [ebp-1Ch] BYREF

  Debug::Log(); /*0x77467d*/
  PurgeComm(*(HANDLE *)(this + 92), 0xFu); /*0x77468b*/
  ResetEvent(*(HANDLE *)(this + 56)); /*0x77469b*/
  ResetEvent(*(HANDLE *)(this + 76)); /*0x7746a1*/
  v8 = *(void **)(this + 92); /*0x7746ad*/
  *(_BYTE *)(this + 80) = 0; /*0x7746ae*/
  *(_BYTE *)(this + 81) = 0; /*0x7746b1*/
  if ( GetCommState(v8, &DCB) ) /*0x7746b4*/
  {
    v2 = *(void **)(this + 92); /*0x7746c2*/
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
  GetCommMask(*(HANDLE *)(this + 92), &EvtMask); /*0x774728*/
  (*(void (__thiscall **)(int, int))(this->PacketsSent)(this, 1); /*0x774734*/
  (*(void (__thiscall **)(int))(this->LastPacketTime)(this); /*0x77473b*/
  if ( !EscapeCommFunction(*(HANDLE *)(this + 92), 3u) ) /*0x774744*/
  {
    GetLastError(); /*0x77474f*/
    Debug::Log(); /*0x77475b*/
  }
  if ( ClearCommError(*(HANDLE *)(this + 92), &Errors, &Stat) ) /*0x774771*/
  {
    v4 = (NullModemClass *)Errors; /*0x77477b*/
    cbInQue = Stat.cbInQue; /*0x77477f*/
    cbOutQue = Stat.cbOutQue; /*0x774783*/
    v7 = Errors == 0; /*0x774787*/
    *(_DWORD *)(this + 28) = Stat.cbInQue; /*0x774789*/
    *(_DWORD *)(this + 32) = cbOutQue; /*0x77478c*/
    if ( !v7 ) /*0x77478f*/
      WinModemClass::LogCommErrors((_DWORD *)this, v4, *(_BYTE *)&Stat, cbInQue, cbOutQue); /*0x7747a5*/
  }
  return 1; /*0x77470a*/
}


// ==== 0x007747C0  NullModemClass::receiveData  this=NullModemClass  sig=csp ====
int __thiscall NullModemClass::receiveData(int this)
{
  NullModemClass *v2; // edx
  DWORD cbInQue; // eax
  DWORD cbOutQue; // ecx
  bool v5; // zf
  void *v7; // [esp-8h] [ebp-24h]
  DWORD Errors; // [esp+Ch] [ebp-10h] BYREF
  struct _COMSTAT Stat; // [esp+10h] [ebp-Ch] BYREF

  Debug::Log(); /*0x7747cd*/
  PurgeComm(*(HANDLE *)(this + 92), 0xFu); /*0x7747db*/
  ResetEvent(*(HANDLE *)(this + 56)); /*0x7747eb*/
  ResetEvent(*(HANDLE *)(this + 76)); /*0x7747f1*/
  v7 = *(void **)(this + 92); /*0x7747ff*/
  *(_BYTE *)(this + 80) = 0; /*0x774800*/
  *(_BYTE *)(this + 81) = 0; /*0x774803*/
  if ( !SetCommState(v7, (LPDCB)(this + 8300)) ) /*0x774806*/
    Debug::Log(); /*0x774816*/
  if ( !EscapeCommFunction(*(HANDLE *)(this + 92), 3u) ) /*0x774824*/
  {
    GetLastError(); /*0x77482f*/
    Debug::Log(); /*0x77483b*/
  }
  if ( ClearCommError(*(HANDLE *)(this + 92), &Errors, &Stat) ) /*0x774851*/
  {
    v2 = (NullModemClass *)Errors; /*0x77485b*/
    cbInQue = Stat.cbInQue; /*0x77485f*/
    cbOutQue = Stat.cbOutQue; /*0x774863*/
    v5 = Errors == 0; /*0x774867*/
    *(_DWORD *)(this + 28) = Stat.cbInQue; /*0x774869*/
    *(_DWORD *)(this + 32) = cbOutQue; /*0x77486c*/
    if ( !v5 ) /*0x77486f*/
      WinModemClass::LogCommErrors((_DWORD *)this, v2, *(_BYTE *)&Stat, cbInQue, cbOutQue); /*0x774885*/
  }
  return (*(int (__thiscall **)(int, int))(this->PacketsSent)(this, 1); /*0x774893*/
}


// ==== 0x007748A0  WinModemClass::Release  this=WinModemClass  sig=csp ====
int __thiscall WinModemClass::_vt02(_DWORD *this, int a2)
{
  this->q060 = a2; /*0x7748a4*/
  return a2; /*0x7748a7*/
}


// ==== 0x007748B0  WinModemClass::GetClassIdentifier  this=WinModemClass  sig=csp ====
int __fastcall WinModemClass::_vt03(DWORD a1)
{
  int v1; // esi
  void *v3; // [esp-Ch] [ebp-10h]
  DWORD ModemStat; // [esp+0h] [ebp-4h] BYREF

  ModemStat = a1; /*0x7748b0*/
  v1 = 0; /*0x7748b9*/
  v3 = *(void **)(a1 + 92); /*0x7748bc*/
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
void __thiscall WinModemClass::_vt04(HANDLE *this, char a2)
{
  if ( a2 ) /*0x774906*/
  {
    if ( EscapeCommFunction(this->q05C, 5u) ) /*0x77490e*/
      return; /*0x774916*/
  }
  else if ( EscapeCommFunction(this->q05C, 6u) ) /*0x774920*/
  {
    return; /*0x774928*/
  }
  GetLastError(); /*0x77492c*/
  Debug::Log(); /*0x774938*/
}


// ==== 0x00774950  SerialPort::Close  this=WinModemClass  sig=csp ====
BOOL __thiscall SerialPort_Close(HANDLE *this)
{
  BOOL result; // eax

  if ( this->q05C != (HANDLE)-1 ) /*0x774957*/
  {
    Debug::Log(); /*0x77495e*/
    result = CloseHandle(this->q05C); /*0x77496a*/
    this->q05C = (HANDLE)-1; /*0x774970*/
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
  NullModemClass *v8; // ecx
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
    v8 = (NullModemClass *)Errors; /*0x774a38*/
    cbInQue = Stat.cbInQue; /*0x774a3c*/
    cbOutQue = Stat.cbOutQue; /*0x774a40*/
    v10 = Errors == 0; /*0x774a44*/
    *(_DWORD *)(this + 28) = Stat.cbInQue; /*0x774a46*/
    *(_DWORD *)(this + 32) = cbOutQue; /*0x774a49*/
    if ( !v10 ) /*0x774a4c*/
    {
      WinModemClass::LogCommErrors((_DWORD *)this, v8, *(_BYTE *)&Stat, cbInQue, cbOutQue); /*0x774a62*/
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
int __thiscall WinModemClass::ReadBytes(void (**this)(), WinModemClass *aP1, WinModemClass *aP2)
{
  int v4; // ebx
  WinModemClass *v5; // ebx
  WinModemClass *v7; // ebp
  void (*v8)(void); // eax

  if ( !WinModemClass::ReadSerial((int)this) ) /*0x774b37*/
    return 0; /*0x774ba9*/
  v4 = (char *)this->q016 - (char *)this->q015; /*0x774b46*/
  v5 = (WinModemClass *)(v4 + (v4 < 0 ? 0x2000 : 0));
  if ( (int)v5 > (int)aP2 ) /*0x774b56*/
    v5 = aP2; /*0x774b58*/
  if ( (int)v5 <= 0 ) /*0x774b5c*/
    return (int)v5->__pad_0; /*0x774ba2*/
  v7 = v5; /*0x774b63*/
  do /*0x774b96*/
  {
    v8 = this->Member100; /*0x774b65*/
    if ( v8 ) /*0x774b6a*/
    {
      if ( *((_BYTE *)this->q024 + (_DWORD)this->q015) != 13 ) /*0x774b78*/
        v8(); /*0x774b7a*/
    }
    aP1 = (WinModemClass *)((char *)aP1 + 1); /*0x774b82*/
    HIBYTE(aP1[-1].WinModemClass_field_0x38) = *((_BYTE *)this->q024 + (_DWORD)this->q015); /*0x774b86*/
    v7 = (WinModemClass *)((char *)v7 - 1); /*0x774b92*/
    this->q015 = (void (*)())(((unsigned __int16)this->q015 + 1) & 0x1FFF); /*0x774b93*/
  }
  while ( v7 ); /*0x774b96*/
  return (int)v5->__pad_0; /*0x774b99*/
}


// ==== 0x00774BC0  AsyncIO::WaitCompletion  this=WinModemClass  sig=csp ====
BOOL __thiscall AsyncIO_WaitCompletion(int this)
{
  char v2; // al
  int v3; // esi
  signed int v4; // eax
  DWORD NumberOfBytesTransferred; // [esp+4h] [ebp-1Ch] BYREF
  DWORD Ticks; // [esp+8h] [ebp-18h]
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
int __thiscall WinModemClass::WriteSerial(int this, LPCVOID lpBuffer, WinModemClass *aP2)
{
  int result; // eax
  DWORD NumberOfBytesWritten; // [esp+4h] [ebp-4h] BYREF

  AsyncIO::WaitCompletion(this); /*0x774c74*/
  result = WriteFile(*(HANDLE *)(this + 92), lpBuffer, (DWORD)aP2, &NumberOfBytesWritten, (LPOVERLAPPED)(this + 60)); /*0x774c90*/
  if ( !result ) /*0x774c98*/
  {
    result = GetLastError(); /*0x774c9a*/
    if ( result == 997 ) /*0x774ca5*/
      *(_BYTE *)(this + 81) = 1; /*0x774ca7*/
    else
      Debug::Log(); /*0x774cb7*/
  }
  return result; /*0x774cab*/
}


// ==== 0x00774CD0  WinModemClass::LoadTypeData  this=WinModemClass  sig=csp ====
int __thiscall WinModemClass::LoadTypeData(WinModemClass *this, int a2, char *Str, int a4, WinModemClass *aP4)
{
  WinModemClass *v5; // esi
  int v6; // ebx
  WinModemClass *v7; // edi
  int (*WinModemClass_field_0x2C)(void); // eax
  int result; // eax
  int Bytes; // eax
  int v11; // esi
  int v12; // eax
  WinModemClass *v13; // esi
  int v14; // eax
  AbstractClass *v15; // esi
  char *v16; // eax
  int v17; // eax
  DWORD v19; // [esp+14h] [ebp-30h]
  DWORD Ticks; // [esp+20h] [ebp-24h]
  WinModemClass *v21; // [esp+28h] [ebp-1Ch]

  v5 = this; /*0x774cd6*/
  v6 = 0; /*0x774ce6*/
  Timer::GetTicks(); /*0x774ce1*/
  Timer::GetTicks(); /*0x774cf4*/
  memset(Str, 0, a4); /*0x774d0e*/
  v7 = aP4; /*0x774d24*/
  Ticks = Timer::GetTicks(); /*0x774d28*/
  v21 = aP4; /*0x774d30*/
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
    if ( !HouseClass_Player.__pad_5568[23244] ) /*0x774d7b*/
      return 0; /*0x774d7b*/
    Bytes = WinModemClass::ReadBytes(
              (void (**)())v5,
              (WinModemClass *)&Str[v6],
              a4 - v6 < 0 ? 0 : (WinModemClass *)(a4 - v6));
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
      if ( v7 == (WinModemClass *)-1 ) /*0x774e07*/
        goto LABEL_20; /*0x774e07*/
      v13 = v21; /*0x774e0d*/
      if ( Ticks != -1 ) /*0x774e14*/
      {
        v14 = Timer::GetTicks() - Ticks; /*0x774e1f*/
        if ( v14 >= (int)v21 ) /*0x774e25*/
          goto LABEL_20; /*0x774e25*/
        v13 = (WinModemClass *)((char *)v21 - v14); /*0x774e27*/
      }
      if ( !v13 ) /*0x774e2b*/
      {
LABEL_20:
        Str[a4 - 1] = 0; /*0x774e31*/
        v15 = (AbstractClass *)strstr((ObjectClass *)Str, &stru_830620.__pad_14B0[2984]); /*0x774e45*/
        if ( v15 ) /*0x774e4c*/
        {
          if ( *Str == 65 && Str[1] == 84 && strchr(Str, 13) ) /*0x774e5d*/
            v15 = (AbstractClass *)strchr(Str, 13); /*0x774e74*/
          if ( v15 ) /*0x774e78*/
            goto LABEL_38; /*0x774e78*/
        }
        if ( *Str == 13 || *Str == 10 ) /*0x774e83*/
        {
          v15 = (AbstractClass *)strchr(Str, 13); /*0x774e90*/
          v16 = strchr(Str, 10); /*0x774e92*/
          if ( !v15 || v16 && v16 < (char *)v15 ) /*0x774ea4*/
            v15 = (AbstractClass *)strchr(Str, 10); /*0x774eb1*/
          if ( v15 ) /*0x774eb5*/
          {
LABEL_38:
            while ( v15->__pad_0[0] == 13 || v15->__pad_0[0] == 10 ) /*0x774ebf*/
              v15 = (AbstractClass *)((char *)v15 + 1); /*0x774ec1*/
            if ( v15 != (AbstractClass *)Str ) /*0x774ec6*/
            {
              memcpy(Str, v15, a4 - ((char *)v15 - Str)); /*0x774ed5*/
              v6 -= (char *)v15 - Str; /*0x774edd*/
              v7 = aP4; /*0x774edf*/
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
BOOL __thiscall WinModemClass::_vt06(int this, const char *NumberOfBytesWritten)
{
  unsigned int v3; // kr18_4
  char Buffer[80]; // [esp+10h] [ebp-50h] BYREF

  Debug::Log(); /*0x774f5e*/
  strcpy(Buffer, aAtd); /*0x774f83*/
  if ( *(_DWORD *)(this + 96) ) /*0x774f87*/
  {
    Debug::Log(); /*0x774fd5*/
    strcat(Buffer, MEMORY[0x83ED58]); /*0x775002*/
  }
  else
  {
    strcat(Buffer, MEMORY[0x83ED5C]); /*0x774fbd*/
    Debug::Log(); /*0x774fc6*/
  }
  Debug::Log(); /*0x775010*/
  strcat(Buffer, NumberOfBytesWritten); /*0x77503e*/
  Debug::Log(); /*0x775047*/
  strcat(Buffer, (const char *)&MEMORY[0x8327A0]); /*0x775071*/
  Debug::Log(); /*0x775084*/
  v3 = strlen(Buffer) + 1; /*0x775095*/
  AsyncIO::WaitCompletion(this); /*0x77509e*/
  if ( !WriteFile(*(HANDLE *)(this + 92), Buffer, v3 - 1, (LPDWORD)&NumberOfBytesWritten, (LPOVERLAPPED)(this + 60)) ) /*0x7750b6*/
  {
    if ( GetLastError() == 997 ) /*0x7750cb*/
    {
      *(_BYTE *)(this + 81) = 1; /*0x7750cf*/
      return AsyncIO::WaitCompletion(this); /*0x7750df*/
    }
    Debug::Log(); /*0x7750e9*/
  }
  return AsyncIO::WaitCompletion(this); /*0x7750d8*/
}


// ==== 0x00775110  WinModemClass::Dial  this=WinModemClass  sig=csp ====
int __thiscall WinModemClass::Dial(
        int this,
        const char *a2,
        unsigned __int8 a3,
        char *Destination,
        signed int Count,
        int a6,
        int a7,
        int a8)
{
  unsigned int v9; // kr0C_4
  ObjectClass *v10; // ecx
  int v11; // edx
  int v12; // esi
  DWORD v13; // eax
  signed int v14; // eax
  int v15; // esi
  int v16; // esi
  DWORD v17; // eax
  signed int v18; // eax
  int v19; // esi
  signed int v20; // esi
  signed int v21; // eax
  size_t v22; // eax
  size_t v24; // eax
  int i; // [esp+10h] [ebp-108h] BYREF
  ObjectClass *Ticks; // [esp+14h] [ebp-104h]
  int v27; // [esp+1Ch] [ebp-FCh]
  DWORD v28; // [esp+20h] [ebp-F8h] BYREF
  DWORD NumberOfBytesWritten; // [esp+24h] [ebp-F4h] BYREF
  char Str[80]; // [esp+28h] [ebp-F0h] BYREF
  char Buffer[80]; // [esp+78h] [ebp-A0h] BYREF
  WinModemClass aP1; // [esp+C8h] [ebp-50h] BYREF

  LOWORD(i) = a3; /*0x77512a*/
  strcpy(Buffer, a2); /*0x77514b*/
  strcat(Buffer, (const char *)&i); /*0x77517a*/
  WinModemClass::ReadBytes((void (**)())this, &aP1, (WinModemClass *)0x50); /*0x77518d*/
  Sleep(0x64u); /*0x775194*/
  WinModemClass::ReadBytes((void (**)())this, &aP1, (WinModemClass *)0x50); /*0x7751a6*/
  for ( i = 0; i < a7; ++i ) /*0x7751bc*/
  {
    Ticks = (ObjectClass *)Timer::GetTicks(); /*0x7751d1*/
    v9 = strlen(Buffer) + 1; /*0x7751de*/
    v27 = a6; /*0x7751ea*/
    AsyncIO::WaitCompletion(this); /*0x7751f2*/
    if ( !WriteFile(*(HANDLE *)(this + 92), Buffer, v9 - 1, &NumberOfBytesWritten, (LPOVERLAPPED)(this + 60)) ) /*0x77520d*/
    {
      if ( GetLastError() == 997 ) /*0x77521e*/
        *(_BYTE *)(this + 81) = 1; /*0x775220*/
      else
        Debug::Log(); /*0x77522d*/
    }
    AsyncIO::WaitCompletion(this); /*0x775237*/
    v10 = Ticks; /*0x77523c*/
    v11 = v27; /*0x775240*/
    v12 = v27; /*0x775247*/
    if ( Ticks == (ObjectClass *)-1 ) /*0x775249*/
    {
      v15 = v27; /*0x77526a*/
    }
    else
    {
      v13 = Timer::GetTicks(); /*0x77524f*/
      v10 = Ticks; /*0x775254*/
      v14 = v13 - (_DWORD)Ticks; /*0x775258*/
      if ( v14 >= v12 ) /*0x77525c*/
        return 0; /*0x77525c*/
      v11 = v27; /*0x775262*/
      v15 = v12 - v14; /*0x775266*/
    }
    if ( v15 <= 0 ) /*0x77526e*/
      return 0; /*0x77526e*/
    v16 = v11; /*0x775277*/
    if ( v10 == (ObjectClass *)-1 ) /*0x775279*/
    {
      v19 = v11; /*0x775296*/
    }
    else
    {
      v17 = Timer::GetTicks(); /*0x77527f*/
      v10 = Ticks; /*0x775284*/
      v18 = v17 - (_DWORD)Ticks; /*0x775288*/
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
    if ( v10 != (ObjectClass *)-1 ) /*0x7752a9*/
    {
      v21 = Timer::GetTicks() - (_DWORD)Ticks; /*0x7752b4*/
      if ( v21 >= v20 ) /*0x7752ba*/
        v11 = 0; /*0x7752c2*/
      else
        v11 = v20 - v21; /*0x7752be*/
    }
LABEL_21:
    memset(Str, 0, sizeof(Str)); /*0x7752cf*/
    (*(void (__thiscall **)(int, int, char *, int, int))(this->q014)(this, v11, Str, 80, a8); /*0x7752e6*/
    if ( !strcmp(Str, &g_INI_Key_Lighting.__pad_20[4]) ) /*0x77531d*/
      return 3; /*0x775437*/
    if ( strstr(Str, MEMORY[0x81FD14]) ) /*0x77532d*/
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
    AsyncIO::WaitCompletion(this); /*0x7753c3*/
    if ( !WriteFile(*(HANDLE *)(this + 92), &stru_830620.__pad_14B0[3280], 1u, &v28, (LPOVERLAPPED)(this + 60)) ) /*0x7753dc*/
    {
      if ( GetLastError() == 997 ) /*0x7753ed*/
        *(_BYTE *)(this + 81) = 1; /*0x7753ef*/
      else
        Debug::Log(); /*0x7753fc*/
    }
    AsyncIO::WaitCompletion(this); /*0x775406*/
    Sleep(0x64u); /*0x77540d*/
  }
  return 0; /*0x775428*/
}


// ==== 0x007754A0  WinModemClass::ddtor  this=WinModemClass  sig=csp ====
int __thiscall WinModemClass::_vt08(_DWORD *this, int a2)
{
  this->Member100 = a2; /*0x7754a4*/
  return a2; /*0x7754a7*/
}


// ==== 0x007754B0  WinModemClass::HangUp  this=WinModemClass  sig=csp ====
int __thiscall WinModemClass::_vt09(_DWORD *this, int a2)
{
  this->q068 = a2; /*0x7754b4*/
  return a2; /*0x7754b7*/
}


// ==== 0x007754C0  NullModemClass::GetMember23  this=WinModemClass  sig=csp ====
int __thiscall NullModemClass_GetMember23(_DWORD *this)
{
  return this->q05C; /*0x7754c3*/
}


// ==== 0x007754D0  WinModemClass::LogCommErrors  this=NullModemClass  sig=csp ====
int __thiscall WinModemClass::LogCommErrors(_DWORD *this, NullModemClass *aP1, char a3, int a4, int a5)
{
  int result; // eax

  if ( aP1 ) /*0x7754da*/
  {
    if ( ((unsigned __int8)aP1 & 8) != 0 ) /*0x7754e3*/
    {
      Debug::Log(); /*0x7754ea*/
      result = this->PlayerIndex + 1; /*0x7754f5*/
      this->PlayerIndex = result; /*0x7754f6*/
    }
    if ( ((unsigned __int8)aP1 & 0x10) != 0 ) /*0x7754fc*/
      Debug::Log(); /*0x775503*/
    if ( (BYTE1(aP1) & 4) != 0 ) /*0x77550e*/
    {
      Debug::Log(); /*0x775515*/
      result = this->Active + 1; /*0x775520*/
      this->Active = result; /*0x775521*/
    }
    if ( ((unsigned __int8)aP1 & 2) != 0 ) /*0x775527*/
    {
      Debug::Log(); /*0x77552e*/
      result = this->LastPacketTime + 1; /*0x775539*/
      this->LastPacketTime = result; /*0x77553a*/
    }
    if ( ((unsigned __int8)aP1 & 1) != 0 ) /*0x775540*/
    {
      Debug::Log(); /*0x775547*/
      result = this->PacketsSent + 1; /*0x775552*/
      this->PacketsSent = result; /*0x775553*/
    }
    if ( ((unsigned __int8)aP1 & 4) != 0 ) /*0x775559*/
    {
      Debug::Log(); /*0x775560*/
      result = this->PacketsReceived + 1; /*0x77556b*/
      this->PacketsReceived = result; /*0x77556c*/
    }
    if ( (BYTE1(aP1) & 1) != 0 ) /*0x775572*/
    {
      Debug::Log(); /*0x775579*/
      result = this->q018 + 1; /*0x775584*/
      this->q018 = result; /*0x775585*/
    }
  }
  if ( (a3 & 1) != 0 ) /*0x77558f*/
    Debug::Log(); /*0x775596*/
  if ( (a3 & 2) != 0 ) /*0x7755a1*/
    Debug::Log(); /*0x7755a8*/
  if ( (a3 & 4) != 0 ) /*0x7755b3*/
    Debug::Log(); /*0x7755ba*/
  if ( (a3 & 8) != 0 ) /*0x7755c5*/
    Debug::Log(); /*0x7755cc*/
  if ( (a3 & 0x10) != 0 ) /*0x7755d7*/
    Debug::Log(); /*0x7755de*/
  if ( (a3 & 0x20) != 0 ) /*0x7755e9*/
    Debug::Log(); /*0x7755f0*/
  if ( (a3 & 0x40) != 0 ) /*0x7755fd*/
    Debug::Log(); /*0x775604*/
  return result; /*0x7755f8*/
}


// ==== 0x00775610  WinModemClass::QueryInterface  this=WinModemClass  sig=csp ====
WinModemClass *__thiscall WinModemClass::QueryInterface(void *Block, char a2)
{
  int v3; // eax

  v3 = *((_DWORD *)Block + 23); /*0x775613*/
  *(_DWORD *)Block = &vt_WinModemClass; /*0x775616*/
  if ( v3 != -1 ) /*0x77561f*/
  {
    Debug::Log(); /*0x775626*/
    CloseHandle(*((HANDLE *)Block + 23)); /*0x775632*/
    *((_DWORD *)Block + 23) = -1; /*0x775638*/
  }
  if ( *((_DWORD *)Block + 9) ) /*0x77563f*/
    __3_YAXPAX_Z(*((void **)Block + 9)); /*0x775647*/
  if ( (a2 & 1) != 0 ) /*0x775654*/
    __3_YAXPAX_Z(Block); /*0x775657*/
  return (WinModemClass *)Block; /*0x775661*/
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


// ==== 0x00775690  ScreenDialogToClient  this=-  sig=csp ====
BOOL __fastcall ScreenDialogToClient(HWND hWnd, LPRECT lpRect)
{
  BOOL result; // eax
  BOOL v4; // edi
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
        ObjectClass *aP0,
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
  a0[2 * g_DialogTrackingList] = 0; /*0x775718*/
  dword_B72D2C[2 * v5] = 0; /*0x775720*/
  result = (const DLGTEMPLATE *)FindResource((unsigned __int16)a2, (const CHAR *)5); /*0x77572b*/
  if ( result ) /*0x775732*/
  {
    ++g_DialogTrackingList; /*0x775747*/
    DialogIndirectParamA = CreateDialogIndirectParamA((HINSTANCE)aP0, result, hWndParent, lpDialogFunc, 0); /*0x775755*/
    v11 = DialogIndirectParamA; /*0x77575b*/
    if ( DialogIndirectParamA ) /*0x77575f*/
    {
      ++*(_DWORD *)&HouseClass_Player.__pad_5568[23256]; /*0x77577c*/
      DialogQueue::PushEntry(DialogIndirectParamA); /*0x775781*/
      EnumChildWindows(v11, (WNDENUMPROC)DialogClass::Reposition, 1); /*0x77578e*/
      DialogClass::Reposition((SkirmishDialog *)v11, 0); /*0x775797*/
      *v6 = v11; /*0x77579c*/
      v6[1] = a2; /*0x77579e*/
      if ( a5 ) /*0x7757a7*/
        ShowWindow(v11, 1); /*0x7757ac*/
      SetForegroundWindow(v11); /*0x7757b3*/
      SetFocus(v11); /*0x7757ba*/
      dword_B72F44 = v11; /*0x7757c0*/
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


// ==== 0x007757E0  CloseDialog  this=-  sig=csp ====
char __fastcall Dialog_Close(HWND a1, int a2)
{
  int v3; // eax
  int *i; // esi
  int v5; // edi
  HWND *v6; // esi
  int v7; // ebx
  HWND v8; // esi
  int v9; // edi

  if ( !a1 ) /*0x7757ef*/
  {
    if ( !g_DialogTrackingList ) /*0x7757f3*/
      return 0; /*0x7757f3*/
    a1 = *(&g_ClipboardBuffer + 2 * g_DialogTrackingList); /*0x7757f5*/
    if ( !a1 ) /*0x7757fe*/
      return 0; /*0x775801*/
  }
  v3 = 0; /*0x775806*/
  if ( g_DialogTrackingList <= 0 ) /*0x77580a*/
    return 0; /*0x77580a*/
  for ( i = a0; (HWND)*i != a1; i += 2 ) /*0x77580c*/
  {
    if ( ++v3 >= g_DialogTrackingList ) /*0x77581b*/
      return 0; /*0x775822*/
  }
  v5 = v3; /*0x775826*/
  if ( v3 == -1 ) /*0x775828*/
    return 0; /*0x77582b*/
  Dialog::IdleProcess(a1); /*0x775831*/
  if ( g_DialogTrackingList - 1 >= v5 ) /*0x77583e*/
  {
    v6 = (HWND *)(8 * (g_DialogTrackingList - 1) + 12004648); /*0x775840*/
    v7 = g_DialogTrackingList - v5; /*0x775851*/
    do /*0x775870*/
    {
      DialogQueue::RemoveEntry(*v6); /*0x775855*/
      DestroyWindow(*v6); /*0x77585d*/
      v6 -= 2; /*0x775865*/
      --v7; /*0x775869*/
      --MEMORY[0xA8ED8C]; /*0x77586a*/
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
    dword_B72F44 = v8; /*0x7758a4*/
    dword_B72F48 = v9; /*0x7758aa*/
    SetFocus(v8); /*0x7758b1*/
    SendMessageA(dword_B72F44, 0x4B0u, 0, 0); /*0x7758c5*/
  }
  else
  {
    dword_B72F44 = 0; /*0x7758e1*/
    dword_B72F48 = 0; /*0x7758e8*/
    SetFocus(g_hWnd); /*0x7758ee*/
  }
  dword_B72F4C = a2; /*0x7758d3*/
  return 1; /*0x775800*/
}


// ==== 0x00775940  Dialog::FindByHandle  this=Dialog  sig=csp ====
int __thiscall Dialog_FindByHandle(void *this)
{
  int v1; // eax
  void **i; // edx

  v1 = MEMORY[0xB72F50] - 1; /*0x775945*/
  if ( MEMORY[0xB72F50] - 1 < 0 ) /*0x775948*/
    return 0; /*0x77595d*/
  for ( i = (void **)(8 * v1 + 12004652); this != *i; i -= 2 ) /*0x77594a*/
  {
    if ( --v1 < 0 ) /*0x77595b*/
      return 0; /*0x77595b*/
  }
  return MEMORY[0xB72D28][2 * v1]; /*0x77595f*/
}


// ==== 0x007759B0  Dialog::FindByPtr  this=Game  sig=csp ====
int __thiscall Dialog_FindByPtr(void *this)
{
  int v1; // eax
  void **i; // edx

  v1 = dword_A8ED54[233599] - 1; /*0x7759b5*/
  if ( dword_A8ED54[233599] - 1 < 0 ) /*0x7759b8*/
    return 0; /*0x7759d1*/
  for ( i = (void **)(8 * v1 + 12004648); this != *i || v1 <= 0; i -= 2 ) /*0x7759ba*/
  {
    if ( --v1 < 0 ) /*0x7759cf*/
      return 0; /*0x7759cf*/
  }
  return dword_A8ED54[2 * v1 + 233459]; /*0x7759d3*/
}


// ==== 0x007759E0  MessageDialogLoopAlt  this=SkirmishDialog  sig=csp ====
int __fastcall MessageDialogLoopAlt(HWND hWnd, unsigned __int8 (*a2)(void), int a3, char a4, char a5)
{
  int v7; // eax
  HWND *v8; // ecx
  int v9; // eax
  HWND *v10; // ecx
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
    v8 = (HWND *)a0; /*0x775a37*/
    while ( *v8 != hWnd ) /*0x775a3e*/
    {
      ++v7; /*0x775a40*/
      v8 += 2; /*0x775a41*/
      if ( v7 >= g_DialogTrackingList ) /*0x775a46*/
        goto LABEL_23; /*0x775a46*/
    }
    if ( a2 && a2() == 1 ) /*0x775a56*/
      CloseDialog(hWnd, 2); /*0x775a5f*/
    if ( !g_NetworkLobby_Init ) /*0x775a6b*/
    {
      LOBYTE(v8) = 0; /*0x775a6d*/
      ScreenSaver::Process(v8); /*0x775a6f*/
    }
    ++unk_AA0430; /*0x775a7f*/
    while ( GameLoopMessagePump(&Msg, 0, 0, 0, 1u) ) /*0x775a8d*/
    {
      TranslateMessage(&Msg); /*0x775a9b*/
      DispatchMessageA(&Msg); /*0x775aa2*/
      v9 = 0; /*0x775aaa*/
      if ( g_DialogTrackingList <= 0 ) /*0x775aae*/
        break; /*0x775aae*/
      v10 = (HWND *)a0; /*0x775ab0*/
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
HWND Dialog_GetCurrent()
{
  return dword_B72F44; /*0x775b15*/
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
  ObjectClass *DialogParamA; // esi
  LONG bottom; // ecx
  struct tagRECT Rect; // [esp+4h] [ebp-10h] BYREF

  DialogParamA = (ObjectClass *)CreateDialogParamA(g_hInstance, (LPCSTR)a1, 0, a2, 0); /*0x775b70*/
  GetClientRect((HWND)DialogParamA, &Rect); /*0x775b74*/
  DestroyWindow((HWND)DialogParamA); /*0x775b7b*/
  bottom = Rect.bottom; /*0x775b89*/
  *a4 = Rect.right; /*0x775b8e*/
  a4[1] = bottom; /*0x775b90*/
  return 1; /*0x775b8d*/
}


// ==== 0x00775BA0  Dialog::GetField  this=SkirmishDialog  sig=csp ====
BOOL __thiscall Dialog::GetField(HWND this)
{
  EnumChildWindows(this, (WNDENUMPROC)DialogClass::Reposition, 1); /*0x775bab*/
  return DialogClass::Reposition((SkirmishDialog *)this, 0); /*0x775bb9*/
}


// ==== 0x00775BC0  DialogClass::Reposition  this=DialogClass  sig=csp ====
int __stdcall DialogClass::Reposition(int hWnd, int a2)
{
  int v2; // eax
  int v3; // edi
  int v4; // esi
  int v5; // ebx
  int v7; // [esp-Ch] [ebp-BCh]
  int v8; // [esp-8h] [ebp-B8h]
  int Rect; // [esp+10h] [ebp-A0h] BYREF
  int Rect_4; // [esp+14h] [ebp-9Ch]
  int Rect_8; // [esp+18h] [ebp-98h]
  int Rect_12; // [esp+1Ch] [ebp-94h]
  int v13; // [esp+20h] [ebp-90h] BYREF
  int v14; // [esp+24h] [ebp-8Ch]
  __int64 v15; // [esp+28h] [ebp-88h]
  char ClassName[128]; // [esp+30h] [ebp-80h] BYREF

  ((void (__stdcall *)(int, int *))GetWindowRect)(hWnd, &Rect); /*0x775bdd*/
  ((void (__stdcall *)(int, char *, int))GetClassNameA)(hWnd, ClassName, 128); /*0x775bea*/
  if ( !strcmp(ClassName, g_INI_Key_ComboBox) ) /*0x775c01*/
    ((void (__stdcall *)(int, int, _DWORD, int *))SendMessageA)(hWnd, 338, 0, &Rect); /*0x775c37*/
  if ( a2 ) /*0x775c46*/
  {
    v2 = ((int (__stdcall *)(int, int))GetWindowLongA)(hWnd, -8); /*0x775c4b*/
    ((void (__stdcall *)(int, int *))GetWindowRect)(v2, &v13); /*0x775c57*/
    Rect -= v13; /*0x775c79*/
    Rect_8 -= v13; /*0x775c7d*/
    Rect_4 -= v14; /*0x775c81*/
    Rect_12 -= v14; /*0x775c85*/
  }
  v3 = dword_A8ED54[233600]; /*0x775c89*/
  if ( dword_A8ED54[233600] ) /*0x775c91*/
  {
    v5 = dword_A8ED54[233601]; /*0x775cd7*/
  }
  else
  {
    v4 = ((int (__stdcall *)(int, int, _DWORD, int (__stdcall *)(int, int, int, int), _DWORD))CreateDialogParamA)( /*0x775cac*/
           dword_A8ED54[233831],
           198,
           0,
           sub_775B40,
           0);
    ((void (__stdcall *)(int, int *))GetClientRect)(v4, &v13); /*0x775cb4*/
    ((void (__stdcall *)(int))DestroyWindow)(v4); /*0x775cbb*/
    v5 = HIDWORD(v15); /*0x775cc5*/
    v3 = v15; /*0x775cc5*/
    *(_QWORD *)&dword_A8ED54[233600] = v15; /*0x775cc9*/
  }
  v8 = dword_849DE4 * (Rect_12 - Rect_4 + 1) / v5; /*0x775d19*/
  v7 = dword_849DE0 * (Rect_8 - Rect + 1) / v3; /*0x775d1a*/
  Rect = Rect * dword_849DE0 / v3; /*0x775d2e*/
  Rect_8 = v7 + Rect - 1; /*0x775d32*/
  Rect_4 = Rect_4 * dword_849DE4 / v5; /*0x775d36*/
  Rect_12 = v8 + Rect_4 - 1; /*0x775d48*/
  ((void (__stdcall *)(int, int, int, int, int, int))MoveWindow)(hWnd, Rect, Rect_4, v7, v8, 1); /*0x775d4c*/
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
HFONT __fastcall Render_Render_7760B0(HDC hdc, const char *a2, LONG a3, LONG a4, char a5)
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
char __thiscall sub_776320(LPARAM lParam)
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
  qmemcpy(v7, HitDialogTest(lParam, v2, v7), sizeof(v7)); /*0x776359*/
  qmemcpy(wParam, v7, sizeof(wParam)); /*0x77636c*/
  if ( SendMessageA((HWND)v7[0].y, 0x4C8u, (WPARAM)wParam, lParam) ) /*0x776379*/
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
  qmemcpy(v7, HitDialogTest(lParam, (int)v7, v7), sizeof(v7)); /*0x776426*/
  qmemcpy(v10, v7, sizeof(v10)); /*0x776435*/
  if ( v4 ) /*0x77643c*/
    SendMessageA((HWND)v7[0].y, 0x4CAu, (WPARAM)v10, lParam); /*0x77644e*/
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
void __thiscall sub_776570(void *this)
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

  if ( this == (void *)1 && byte_B7309C )
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
char __thiscall sub_776670(LPARAM lParam)
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
  qmemcpy(v9, HitDialogTest(lParam, v2, v9), sizeof(v9)); /*0x7766a8*/
  qmemcpy(wParam, v9, sizeof(wParam)); /*0x7766bb*/
  if ( SendMessageA((HWND)v9[0].y, 0x4C8u, (WPARAM)wParam, lParam) ) /*0x7766c8*/
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
unsigned int __thiscall sub_7767F0(char **this)
{
  char *v2; // edi
  LPARAM lParam[10]; // [esp+8h] [ebp-28h] BYREF

  v2 = this->referenceCount; /*0x7767f7*/
  if ( !v2 ) /*0x7767fc*/
    return 0; /*0x776873*/
  String::Trim(v2); /*0x776801*/
  strcpy((char *)dword_B73080, v2); /*0x77681e*/
  lParam[1] = (LPARAM)this->vtable2; /*0x776835*/
  lParam[0] = 1; /*0x776847*/
  lParam[4] = dword_B73080; /*0x77684f*/
  SendMessageA(qword_B730A0, 0x110Du, 0, (LPARAM)lParam); /*0x776853*/
  return strlen((const char *)dword_B73080); /*0x77686a*/
}


// ==== 0x00776880  ObjectClass::System_Read  this=IUnknown  sig=csp ====
BOOL __thiscall sub_776880(HWND *this)
{
  HWND v1; // esi
  ULONG_PTR WindowContextHelpId; // eax

  v1 = this->q003; /*0x776881*/
  WindowContextHelpId = GetWindowContextHelpId(v1); /*0x776885*/
  return WinHelpA(v1, szHelp, 8u, WindowContextHelpId); /*0x77689a*/
}


// ==== 0x007768A0  ObjectClass::System_Read_7768A0  this=ObjectClass  sig=csp ====
BOOL __thiscall System_Read_7768A0(HWND hWndMain)
{
  ULONG_PTR dwData[4]; // [esp+4h] [ebp-10h] BYREF

  dwData[2] = 0; /*0x7768b3*/
  dwData[3] = 0; /*0x7768b7*/
  dwData[0] = GetWindowLongA(hWndMain, -12); /*0x7768c2*/
  dwData[1] = GetWindowContextHelpId(hWndMain); /*0x7768cc*/
  return WinHelpA(hWndMain, szHelp, 0xAu, (ULONG_PTR)dwData); /*0x7768e3*/
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
void __fastcall SaveWOLLobbySettings(unsigned __int8 *a1, HWND a2, LPARAM lParam)
{
  int Int_Overwrite; // esi
  int v6; // edi
  int SystemMetrics; // eax
  int v8; // eax
  struct tagRECT Rect; // [esp+8h] [ebp-10h] BYREF

  if ( a2 ) /*0x776a7b*/
  {
    GetWindowRect(a2, &Rect); /*0x776a89*/
    Int_Overwrite = INIClass::ReadInt_Overwrite(lParam, a1, &stru_84968C, (INIClass *)Rect.left); /*0x776aa7*/
    v6 = INIClass::ReadInt_Overwrite(lParam, a1, &stru_849E64, (INIClass *)Rect.top); /*0x776ab9*/
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
    EnumChildWindows(a2, LoadWOLSettings, lParam); /*0x776b29*/
  }
}


// ==== 0x00776B40  SaveWOLUISettings  this=-  sig=csp ====
BOOL __stdcall SaveWOLUISettings(HWND hWnd, char *a2)
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
BOOL __fastcall sub_776CD0(INIClass *Block, HWND hWndParent, char *lParam)
{
  BOOL result; // eax
  struct tagRECT Rect; // [esp+8h] [ebp-10h] BYREF

  if ( hWndParent ) /*0x776cdb*/
  {
    GetWindowRect(hWndParent, &Rect); /*0x776ce4*/
    INIClass::SetInt(lParam, Block, &stru_84968C, (INIClass *)Rect.left, 0); /*0x776cfd*/
    INIClass::SetInt(lParam, Block, &stru_849E64, (INIClass *)Rect.top, 0); /*0x776d11*/
    dword_B73098 = Block; /*0x776d16*/
    return EnumChildWindows(hWndParent, (WNDENUMPROC)SaveWOLUISettings, (LPARAM)lParam); /*0x776d23*/
  }
  return result; /*0x776d2a*/
}


// ==== 0x00776D80  Window::ClampToScreen  this=Window  sig=csp ====
char __stdcall Window_ClampToScreen(int *a1)
{
  char v1; // bl
  int v2; // eax
  int v3; // ecx
  int v4; // eax
  int v5; // ecx

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
  if ( a1[3] <= GetSystemMetrics(17) ) /*0x776de5*/
    return v1; /*0x776e08*/
  a1[1] += GetSystemMetrics(17) - a1[3]; /*0x776df7*/
  a1[3] = GetSystemMetrics(17); /*0x776dfc*/
  return 1; /*0x776e01*/
}


// ==== 0x00776E10  FindListBoxItem  this=AbstractClass  sig=csp ====
LRESULT __fastcall FindListBoxItem(HWND hWnd, LRESULT wParam, int a3)
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
void *__thiscall sub_776EB0(void *this)
{
  DWORD dwBuildNumber; // eax
  DWORD dwMinorVersion; // edx
  DWORD dwPlatformId; // eax
  struct _OSVERSIONINFOA VersionInformation; // [esp+8h] [ebp-94h] BYREF

  *(_DWORD *)this = 0; /*0x776ec1*/
  this->vtable2 = 0; /*0x776ec3*/
  this->vtable3 = 0; /*0x776ec6*/
  this->onBridge = 0; /*0x776ec9*/
  this->isFallingDown = 0; /*0x776ecf*/
  VersionInformation.dwOSVersionInfoSize = 148; /*0x776ed5*/
  GetVersionExA(&VersionInformation); /*0x776edd*/
  dwBuildNumber = VersionInformation.dwBuildNumber; /*0x776ee7*/
  dwMinorVersion = VersionInformation.dwMinorVersion; /*0x776eeb*/
  *(_DWORD *)this = VersionInformation.dwMajorVersion; /*0x776eef*/
  this->vtable3 = dwBuildNumber; /*0x776ef1*/
  dwPlatformId = VersionInformation.dwPlatformId; /*0x776ef4*/
  this->vtable2 = dwMinorVersion; /*0x776efd*/
  if ( dwPlatformId == 1 ) /*0x776f02*/
  {
    this->onBridge = 1; /*0x776f04*/
  }
  else if ( dwPlatformId == 2 ) /*0x776f0f*/
  {
    this->isFallingDown = 1; /*0x776f11*/
  }
  strncpy((char *)this + 12, VersionInformation.szCSDVersion, 0x7Fu); /*0x776f22*/
  this->q08B = 0; /*0x776f2a*/
  return this; /*0x776f32*/
}


// ==== 0x00777060  Dialog::RestoreParent  this=SkirmishDialog  sig=csp ====
int __thiscall Dialog::RestoreParent(void *this)
{
  int result; // eax

  result = ((int (__stdcall *)(void *, int))GetWindowLongA)(this, -8); /*0x777066*/
  if ( result ) /*0x77706e*/
    return SetDialogParent(this); /*0x777074*/
  return result; /*0x777079*/
}


// ==== 0x00777080  SetDialogParent  this=-  sig=csp ====
BOOL __fastcall SetDialogParent(HWND hWnd, HWND a2)
{
  int v4; // eax
  int v5; // ecx
  int v6; // eax
  struct tagRECT Rect; // [esp+10h] [ebp-20h] BYREF
  struct tagRECT v9; // [esp+20h] [ebp-10h] BYREF

  GetClientRect(a2, &Rect); /*0x777097*/
  if ( a2 == g_hWnd ) /*0x77709f*/
    *(_QWORD *)&Rect.right = *(_QWORD *)&MEMORY[0x8A00A4]; /*0x7770ad*/
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
HWND sub_777420()
{
  int v0; // ecx
  void *v1; // ecx
  HWND result; // eax
  HWND Current; // eax
  HWND v4; // eax

  Debug::Log(); /*0x777425*/
  sub_407040(v0); /*0x77742d*/
  Debug::Log(); /*0x77744b*/
  if ( MEMORY[0x887640] && byte_B73560 == 1 && !MEMORY[0xA8ED6B] ) /*0x77746d*/
    (*(void (**)(void))(*(_DWORD *)MEMORY[0x887640] + 24))(); /*0x777471*/
  if ( !MEMORY[0x89F978] ) /*0x77747c*/
  {
    if ( MEMORY[0x887310] ) /*0x77748a*/
      DSurface::RestoreIfLost((int *)MEMORY[0x887310]); /*0x77748c*/
    if ( MEMORY[0x88730C] ) /*0x777499*/
      DSurface::RestoreIfLost((int *)MEMORY[0x88730C]); /*0x77749b*/
    if ( MEMORY[0x88731C] /*0x7774c7*/
      && DSurface::RestoreIfLost((int *)MEMORY[0x88731C])
      && (!MEMORY[0xA8ED5C] || (int)MEMORY[0xA8ED84] > 16) )
    {
      (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)MEMORY[0x88731C] + 24))(MEMORY[0x88731C], 0); /*0x7774d3*/
    }
    if ( MEMORY[0x8872FC] /*0x7774f8*/
      && DSurface::RestoreIfLost((int *)MEMORY[0x8872FC])
      && (!MEMORY[0xA8ED5C] || (int)MEMORY[0xA8ED84] > 16) )
    {
      (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)MEMORY[0x8872FC] + 24))(MEMORY[0x8872FC], 0); /*0x777504*/
    }
    if ( MEMORY[0x887300] ) /*0x77750f*/
    {
      if ( DSurface::RestoreIfLost((int *)MEMORY[0x887300]) ) /*0x777511*/
      {
        MEMORY[0x884B8F] = 1; /*0x77751f*/
        if ( !MEMORY[0xA8ED5C] || (int)MEMORY[0xA8ED84] > 16 ) /*0x777530*/
          (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)MEMORY[0x887300] + 24))(MEMORY[0x887300], 0); /*0x77753c*/
      }
    }
    if ( MEMORY[0x887308] /*0x777561*/
      && DSurface::RestoreIfLost((int *)MEMORY[0x887308])
      && (!MEMORY[0xA8ED5C] || (int)MEMORY[0xA8ED84] > 16) )
    {
      (*(void (__thiscall **)(int, int *, _DWORD))(*(_DWORD *)MEMORY[0x887308] + 20))( /*0x777572*/
        MEMORY[0x887308],
        &MEMORY[0x886FB0],
        0);
    }
  }
  MapClass::MarkForRedraw(&MEMORY[0x87F7E8], 2); /*0x77757c*/
  InvalidateRect(g_hWnd, 0, 0); /*0x77758c*/
  LOBYTE(v1) = 0; /*0x777592*/
  AsyncIO::Read(v1); /*0x777594*/
  result = Dialog::GetCurrent(); /*0x777599*/
  if ( result ) /*0x7775a1*/
  {
    Current = Dialog::GetCurrent(); /*0x7775a3*/
    SetActiveWindow(Current); /*0x7775a9*/
    v4 = Dialog::GetCurrent(); /*0x7775af*/
    return SetFocus(v4); /*0x7775b5*/
  }
  return result; /*0x7775bb*/
}


// ==== 0x007775C0  MainWindowProc  this=-  sig=ida-proto ====
int __userpurge MainWindowProc@<eax>(
        int a1@<ecx>,
        int *a2@<ebx>,
        int a3@<ebp>,
        int a4@<edi>,
        int a5@<esi>,
        int hWnd,
        unsigned int Msg,
        int wParam,
        int *lParam)
{
  int v9; // eax
  int v10; // esi
  int v12; // edi
  unsigned int v13; // eax
  int v14; // esi
  int v15; // esi
  char *v16; // eax
  char *v17; // esi
  void *v18; // ecx
  const char *v19; // ecx
  int v20; // esi
  int v21; // eax
  int WideCharStr; // [esp+8h] [ebp-4h] BYREF

  WideCharStr = a1; /*0x7775c0*/
  if ( MEMORY[0x87F7E8][8080] ) /*0x7775ce*/
  {
    v9 = (*(int (__thiscall **)(_DWORD, int))(*(_DWORD *)MEMORY[0x87F7E8][8080] + 56))(MEMORY[0x87F7E8][8080], -1); /*0x7775d4*/
    if ( Msg == v9 || Msg == 1141 ) /*0x7775e5*/
    {
      v10 = hWnd; /*0x7775f9*/
      if ( (*(int (__thiscall **)(_DWORD, int, unsigned int, int, int *))(*(_DWORD *)MEMORY[0x87F7E8][8080] + 64))( /*0x7775ff*/
             MEMORY[0x87F7E8][8080],
             hWnd,
             Msg,
             wParam,
             lParam) )
      {
        return ((int (__stdcall *)(int, unsigned int, int, int *))DefWindowProcA)(v10, Msg, wParam, lParam); /*0x777624*/
      }
      return 0; /*0x777604*/
    }
  }
  v12 = hWnd; /*0x777627*/
  Tactical::HandleTacticalMouseInput(MEMORY[0x87F7E8], hWnd, &Msg, (int)&wParam, &lParam); /*0x777640*/
  if ( dword_A8ED54[233983] ) /*0x77764c*/
    ((void (__stdcall *)(int))GetMenu)(dword_A8ED54[233983]); /*0x77764f*/
  if ( Render_Draw_778030(v12, Msg, wParam, lParam) ) /*0x777665*/
  {
    Debug::Log(); /*0x777673*/
    return dword_A8ED54[233991]; /*0x777684*/
  }
  v13 = Msg; /*0x777687*/
  if ( Msg <= 0x18 ) /*0x77768e*/
  {
    if ( Msg == 24 ) /*0x777694*/
      return 0; /*0x777a61*/
    switch ( Msg ) /*0x7776ae*/
    {
      case 1u: /*0x7776ae*/
        v16 = (char *)__2_YAPAXI_Z(616); /*0x777792*/
        v17 = v16; /*0x777797*/
        if ( v16 ) /*0x77779e*/
        {
          MainWindowProc_Helper_724000(v16, v12); /*0x7777a3*/
          *((_DWORD *)v17 + 153) = 7; /*0x7777a8*/
          *(_DWORD *)v17 = &CCToolTip::`vftable'; /*0x7777b2*/
          MEMORY[0x87F7E8][7904] = v17; /*0x7777b8*/
        }
        else
        {
          MEMORY[0x87F7E8][7904] = 0; /*0x7777c3*/
        }
        goto LABEL_69; /*0x7777be*/
      case 2u: /*0x7776ae*/
        if ( MEMORY[0x87F7E8][7904] ) /*0x7777fb*/
        {
          (**(void (__thiscall ***)(_DWORD, int))MEMORY[0x87F7E8][7904])(MEMORY[0x87F7E8][7904], 1); /*0x777801*/
          MEMORY[0x87F7E8][7904] = 0; /*0x777803*/
        }
        dword_A8ED54[233983] = 0; /*0x77780e*/
        if ( dword_A8ED54[33] ) /*0x777816*/
          dword_A8ED54[33] = 2; /*0x777818*/
        return 0; /*0x777828*/
      case 3u: /*0x7776ae*/
        if ( LOBYTE(MEMORY[0x87F7E8][32868]) != 1 || !MEMORY[0x87F7E8][8086] ) /*0x7777e3*/
          goto LABEL_70; /*0x7777e3*/
        MouseClass::CalcConfiningRect((#44 *)MEMORY[0x87F7E8][8086]); /*0x7777e9*/
        goto LABEL_69; /*0x7777ee*/
      case 0xFu: /*0x7776ae*/
        if ( dword_A8ED54[19] /*0x777700*/
          || LOBYTE(dword_A8ED54[11]) != 1 && LOBYTE(MEMORY[0x87F7E8][32868]) != 1
          || !MEMORY[0x87F7E8][8086]
          || !MEMORY[0x87F7E8][7880]
          || !MEMORY[0x87F7E8][7881]
          || !MEMORY[0x87F7E8][7885] )
        {
          goto LABEL_26; /*0x777700*/
        }
        if ( LOBYTE(dword_A8ED54[2]) == 1 ) /*0x777709*/
        {
          v14 = MEMORY[0x87F7E8][7885]; /*0x77770b*/
          (*(void (**)(void))(*(_DWORD *)MEMORY[0x87F7E8][8086] + 28))(); /*0x777710*/
          Frame::Present(v14, 0, a3, v12, 0, a4, a5, a2); /*0x777717*/
          Sidebar::FlushSidebarTooltip(MEMORY[0x87F7E8], 1); /*0x777723*/
          ((void (__stdcall *)(int, _DWORD))ValidateRect)(v12, 0); /*0x77772a*/
        }
        else if ( MainWindowProc_Helper() ) /*0x777735*/
        {
          MainWindowProc_Helper_5C09A0(); /*0x77773e*/
          ((void (__stdcall *)(int, _DWORD))ValidateRect)(v12, 0); /*0x777745*/
        }
        else
        {
          if ( !Render_Draw_774070() ) /*0x777750*/
          {
            v15 = MEMORY[0x87F7E8][7881]; /*0x77775f*/
            (*(void (__thiscall **)(_DWORD))(*(_DWORD *)MEMORY[0x87F7E8][8086] + 28))(MEMORY[0x87F7E8][8086]); /*0x777768*/
            Frame::Present(v15, 0, a3, v12, 0, a4, a5, a2); /*0x77776f*/
          }
LABEL_26:
          ((void (__stdcall *)(int, _DWORD))ValidateRect)(v12, 0); /*0x777774*/
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
    if ( !BYTE1(dword_A8ED54[233987]) ) /*0x77798b*/
    {
      BYTE1(dword_A8ED54[233987]) = 1; /*0x777991*/
      v19 = aSidebardown; /*0x77799e*/
      if ( wParam >= 0 ) /*0x7779a3*/
        v19 = aSidebarup; /*0x7779a5*/
      Sidebar::ScrollSidebarSkipGame(v19); /*0x7779aa*/
      BYTE1(dword_A8ED54[233987]) = 0; /*0x7779af*/
LABEL_69:
      v13 = Msg; /*0x7779b5*/
    }
  }
  else
  {
    switch ( Msg ) /*0x777836*/
    {
      case 0x205u: /*0x777836*/
        LOBYTE(MEMORY[0x87F7E8][5459]) = 0; /*0x777952*/
        break;
      case 0x1Cu: /*0x777836*/
        if ( v12 == dword_A8ED54[233983] && LOBYTE(dword_A8ED54[11]) != (wParam != 0) ) /*0x7778c1*/
        {
          LOBYTE(dword_A8ED54[11]) = wParam != 0; /*0x7778ce*/
          if ( wParam ) /*0x7778d3*/
          {
            MainWindowProc_Read(); /*0x777930*/
          }
          else
          {
            Debug::Log(); /*0x7778da*/
            LOBYTE(v18) = 1; /*0x7778e2*/
            AsyncIO::Read(v18); /*0x7778e4*/
            sub_407020(); /*0x7778e9*/
            if ( MEMORY[0x87F7E8][8086] ) /*0x7778f6*/
            {
              LOBYTE(dword_A8ED54[233987]) = (*(int (__thiscall **)(_DWORD))(*(_DWORD *)MEMORY[0x87F7E8][8086] + 28))(MEMORY[0x87F7E8][8086]); /*0x7778fd*/
              Debug::Log(); /*0x777916*/
              (*(void (__thiscall **)(_DWORD))(*(_DWORD *)MEMORY[0x87F7E8][8086] + 20))(MEMORY[0x87F7E8][8086]); /*0x777926*/
            }
          }
          Debug::Log(); /*0x77793a*/
          LOBYTE(MEMORY[0x87F7E8][33326]) = 1; /*0x777942*/
        }
        return 0; /*0x77794f*/
      case 0x112u: /*0x777836*/
        if ( (unsigned int)wParam > 0xF120 ) /*0x777856*/
        {
          if ( wParam == 61760 ) /*0x777891*/
            return 0; /*0x77789d*/
        }
        else
        {
          switch ( wParam ) /*0x777858*/
          {
            case 61728: /*0x777858*/
              BYTE1(dword_A8ED54[11]) = 0; /*0x777880*/
              break;
            case 61472: /*0x777858*/
              BYTE1(dword_A8ED54[11]) = 1; /*0x777874*/
              break;
            case 61536: /*0x777858*/
              return 0; /*0x777871*/
          }
        }
        break;
    }
  }
LABEL_70:
  if ( InputManager::WndProc((_DWORD *)MEMORY[0x87F6C0][44], v12, v13, wParam, (unsigned int)lParam) ) /*0x7779cb*/
    return 0; /*0x7779da*/
  if ( Msg == 646 )
  {
    v20 = wcslen((const #72 *)&dword_A8ED54[233702]); /*0x7779f2*/
    if ( BYTE1(wParam) ) /*0x7779fe*/
    {
      *(_WORD *)((char *)&hWnd + 1) = (unsigned __int8)wParam; /*0x777a02*/
      LOBYTE(hWnd) = BYTE1(wParam); /*0x777a09*/
    }
    else
    {
      LOWORD(hWnd) = (unsigned __int8)wParam; /*0x777a13*/
    }
    v21 = ((int (__stdcall *)(_DWORD, _DWORD, int *, unsigned int, int *, int))MultiByteToWideChar)( /*0x777a38*/
            0,
            0,
            &hWnd,
            strlen((const char *)&hWnd),
            &WideCharStr,
            1);
    *((_WORD *)&dword_A8ED54[233702] + v20) = v21 == 1 ? WideCharStr : 0;
    *((_WORD *)&dword_A8ED54[233702] + v20 + 1) = 0; /*0x777a53*/
    return 0; /*0x777a53*/
  }
  return ((int (__stdcall *)(int, unsigned int, int, int *))DefWindowProcA)(v12, Msg, wParam, lParam); /*0x777624*/
}


// ==== 0x00777AB0  nullsub_262  this=-  sig=ida-proto ====
void nullsub_262()
{
  ; /*0x777ab0*/
}


// ==== 0x00777AC0  Time::FormatDate  this=Time  sig=csp ====
int __thiscall Time::FormatDate(char *Buffer)
{
  int result; // eax
  struct _SYSTEMTIME SystemTime; // [esp+4h] [ebp-10h] BYREF

  result = FileTimeToSystemTime(&FileTime, &SystemTime); /*0x777ad0*/
  if ( result ) /*0x777ad8*/
    return sprintf(Buffer, &stru_849F20, (INIClass *)SystemTime.wMonth); /*0x777b20*/
  return result; /*0x777b28*/
}


// ==== 0x00777B30  String::FormatDword  this=AbstractClass  sig=csp ====
ObjectClass *__thiscall String::FormatDword(char *Buffer)
{
  sprintf(Buffer, (ObjectClass *)&stru_817F40.fallRate, dword_822D1C); /*0x777b3f*/
  return (ObjectClass *)Buffer; /*0x777b49*/
}


// ==== 0x00777B50  GameOptions::GetEntry  this=GameOptions  sig=csp ====
INIClass *GameOptions::GetEntry()
{
  return dword_822D1C; /*0x777b55*/
}


// ==== 0x00777B60  String::CopyConstant  this=ObjectClass  sig=csp ====
ObjectClass *__thiscall String::CopyConstant(char *Destination)
{
  strncpy(Destination, g_Str_gsmallwoo, (IUnknown *)0x20); /*0x777b6b*/
  return (ObjectClass *)Destination; /*0x777b75*/
}


// ==== 0x00777BB0  ObjectClass::method_777BB0  this=ObjectClass  sig=csp ====
ObjectClass *__thiscall sub_777BB0(char *Buffer)
{
  char *v2; // eax
  INIClass aP2; // [esp+4h] [ebp-100h] BYREF
  char Buffera[128]; // [esp+84h] [ebp-80h] BYREF

  sprintf(Buffera, (ObjectClass *)&stru_817F40.fallRate, dword_822D1C); /*0x777bcc*/
  aP2.__pad_0[0] = g_Str_gsmallwoo[0]; /*0x777bde*/
  aP2.__pad_0[1] = 0; /*0x777be2*/
  aP2.__pad_0[2] = 0; /*0x777be7*/
  v2 = strchr(g_Str_gsmallwoo, 95); /*0x777bec*/
  if ( v2 ) /*0x777bf6*/
    aP2.__pad_0[1] = v2[1]; /*0x777bfb*/
  sprintf(Buffer, (ObjectClass *)&stru_849F20.NeedsSaveOrLink, &aP2); /*0x777c12*/
  return (ObjectClass *)Buffer; /*0x777c1c*/
}


// ==== 0x00777C30  InitWindowCreation  this=-  sig=csp ====
int __fastcall InitWindowCreation(int a1, int a2, int xRight, int yBottom)
{
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int SystemMetrics; // [esp-14h] [ebp-5Ch]
  BOOL v11; // [esp-8h] [ebp-50h]
  int v12; // [esp-4h] [ebp-4Ch]
  _DWORD rc[4]; // [esp+10h] [ebp-38h] BYREF
  _DWORD WndClass[10]; // [esp+20h] [ebp-28h] BYREF

  InitCommonControls(); /*0x777c3b*/
  dword_A8ED54[233982] = ((int (__stdcall *)(int, int))LoadIconA)(a1, 93); /*0x777c50*/
  dword_A8ED54[233981] = ((int (__stdcall *)(int, int))LoadCursorA)(dword_A8ED54[233831], 104); /*0x777c6c*/
  WndClass[0] = 3; /*0x777c71*/
  WndClass[1] = MainWindowProc; /*0x777c79*/
  WndClass[2] = 0; /*0x777c81*/
  WndClass[3] = 0; /*0x777c85*/
  WndClass[4] = a1; /*0x777c89*/
  WndClass[5] = dword_A8ED54[233982]; /*0x777c8d*/
  WndClass[6] = dword_A8ED54[233981]; /*0x777c91*/
  WndClass[7] = 0; /*0x777c95*/
  WndClass[8] = 0; /*0x777c99*/
  WndClass[9] = WindowName; /*0x777c9d*/
  ((void (__stdcall *)(_DWORD *))RegisterClassA)(WndClass); /*0x777ca5*/
  if ( LOBYTE(MEMORY[0x87F7E8][32868]) ) /*0x777cb6*/
  {
    dword_A8ED54[233983] = ((int (__stdcall *)(_DWORD, char *, char *, int, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, int, _DWORD))CreateWindowExA)( /*0x777cd6*/
                             0,
                             WindowName,
                             WindowName,
                             46792704,
                             0,
                             0,
                             0,
                             0,
                             0,
                             0,
                             a1,
                             0);
    ((void (__stdcall *)(_DWORD *, _DWORD, _DWORD, int, int))SetRect)(rc, 0, 0, xRight, yBottom); /*0x777cec*/
    v12 = ((int (__stdcall *)(int, int))GetWindowLongA)(dword_A8ED54[233983], -20); /*0x777d08*/
    v11 = ((int (__stdcall *)(int))GetMenu)(dword_A8ED54[233983]) != 0; /*0x777d1c*/
    v6 = ((int (__stdcall *)(int, int))GetWindowLongA)(dword_A8ED54[233983], -16); /*0x777d20*/
    ((void (__stdcall *)(_DWORD *, int, BOOL, int))AdjustWindowRectEx)(rc, v6, v11, v12); /*0x777d28*/
    ((void (__stdcall *)(int, _DWORD, _DWORD, int, int, int))MoveWindow)( /*0x777d4e*/
      dword_A8ED54[233983],
      0,
      0,
      rc[2] - rc[0],
      rc[3] - rc[1],
      1);
  }
  else
  {
    SystemMetrics = GetSystemMetrics(1); /*0x777d60*/
    v7 = GetSystemMetrics(0); /*0x777d62*/
    dword_A8ED54[233983] = ((int (__stdcall *)(int, char *, char *, int, _DWORD, _DWORD, int, int, _DWORD, _DWORD, int, _DWORD))CreateWindowExA)( /*0x777d7e*/
                             8,
                             WindowName,
                             WindowName,
                             -2113929216,
                             0,
                             0,
                             v7,
                             SystemMetrics,
                             0,
                             0,
                             a1,
                             0);
  }
  dword_A8ED54[233986] = ImmGetContext(dword_A8ED54[233983]); /*0x777d95*/
  ImmAssociateContext(dword_A8ED54[233983], 0); /*0x777d9c*/
  ((void (__stdcall *)(int, int))ShowWindow)(dword_A8ED54[233983], 1); /*0x777da9*/
  dword_A8ED54[233980] = a2; /*0x777db5*/
  ((void (__stdcall *)(int))UpdateWindow)(dword_A8ED54[233983]); /*0x777dbc*/
  ((void (__stdcall *)(int))SetFocus)(dword_A8ED54[233983]); /*0x777dc9*/
  ((void (__stdcall *)(int, int, int, int))RegisterHotKey)(dword_A8ED54[233983], 1, 7, 77); /*0x777ddb*/
  v8 = ((int (__stdcall *)(int, int))LoadCursorA)(dword_A8ED54[233831], 104); /*0x777dea*/
  return ((int (__stdcall *)(int))SetCursor)(v8); /*0x777df3*/
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
LONG __thiscall sub_777F90(HWND hWnd)
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
          result = SendMessageA(hWnd, 0x4D9u, *v3, *v3); /*0x77801b*/
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
int __fastcall Render_Draw_778030(HWND hWnd, UINT Msg, WPARAM wParam, LPARAM lParam)
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
HIMC IME_Disable()
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
        ConvertClass *a2@<edx>,
        int a3@<ebx>,
        int a4@<ebp>,
        int a5,
        int a6,
        ConvertClass *aP1)
{
  _DWORD *v8; // esi
  int v9; // ebp
  int v10; // ebx
  int v11; // ebx
  int v12; // ebp
  int *Viewport; // eax
  _DWORD *v14; // eax
  int v15; // eax
  int v16; // eax
  int v17; // eax
  int v18; // edx
  int v19; // eax
  int v20; // edx
  int v21; // ebx
  int v22; // eax
  int v23; // eax
  int v24; // eax
  void (__thiscall ***v26)(_DWORD, int); // [esp+1Ch] [ebp-C4h]
  int v27; // [esp+20h] [ebp-C0h]
  int v28; // [esp+20h] [ebp-C0h]
  _DWORD v29[2]; // [esp+24h] [ebp-BCh] BYREF
  _DWORD v30[2]; // [esp+2Ch] [ebp-B4h] BYREF
  _DWORD v31[2]; // [esp+34h] [ebp-ACh] BYREF
  int v32; // [esp+3Ch] [ebp-A4h] BYREF
  int v33; // [esp+40h] [ebp-A0h]
  int v34; // [esp+44h] [ebp-9Ch]
  int v35; // [esp+48h] [ebp-98h]
  int v36[2]; // [esp+4Ch] [ebp-94h] BYREF
  _DWORD v37[22]; // [esp+54h] [ebp-8Ch] BYREF
  _BYTE v38[12]; // [esp+ACh] [ebp-34h] BYREF
  int v39; // [esp+B8h] [ebp-28h]
  _BYTE v40[20]; // [esp+CCh] [ebp-14h] BYREF
  _UNKNOWN *retaddr; // [esp+E0h] [ebp+0h] BYREF

  CCFileClass::Construct(v37, Source); /*0x77821f*/
  v8 = DecodeFrameSHP((int)v37, a5, 0, 0); /*0x778238*/
  if ( v8 ) /*0x77823c*/
  {
    v27 = (*(int (__thiscall **)(ConvertClass *, int, int))(*(_DWORD *)a2->__pad_0 + 124))(a2, a4, a3); /*0x778251*/
    v9 = (*(int (__thiscall **)(ConvertClass *))(*(_DWORD *)a2->__pad_0 + 128))(a2); /*0x77825b*/
    v32 = 0; /*0x778261*/
    v33 = 0; /*0x778265*/
    v34 = v27; /*0x778269*/
    v35 = v9; /*0x77826d*/
    v10 = __2_YAPAXI_Z(0x20u); /*0x778276*/
    if ( v10 ) /*0x77827d*/
    {
      *(_DWORD *)(v10 + 8) = v9; /*0x778283*/
      *(_DWORD *)(v10 + 4) = v27; /*0x778291*/
      *(_DWORD *)(v10 + 12) = 0; /*0x778294*/
      *(_DWORD *)v10 = &XSurface_Vtable; /*0x77829b*/
      *(_DWORD *)(v10 + 16) = 2; /*0x7782a1*/
      Buffer::Init((_DWORD *)(v10 + 20), 0, (AbstractClass *)(2 * v27 * v9)); /*0x7782a8*/
      *(_DWORD *)v10 = &BSurface_Vtable; /*0x7782ad*/
    }
    else
    {
      v10 = 0; /*0x7782b5*/
    }
    Render_Draw((ConvertClass *)v10, &v32, 0); /*0x7782bf*/
    (*(void (__thiscall **)(ConvertClass *, int, _DWORD, int))(*(_DWORD *)a2->__pad_0 + 4))(a2, v10, 0, 1); /*0x7782cd*/
    if ( v10 ) /*0x7782d2*/
      (**(void (__thiscall ***)(int, int))v10)(v10, 1); /*0x7782da*/
    v11 = 0; /*0x7782e0*/
    v12 = 0; /*0x7782e2*/
    v28 = (*(int (__thiscall **)(_DWORD *))(*v8 + 124))(v8); /*0x7782eb*/
    v29[0] = (*(int (__thiscall **)(_DWORD *))(*v8 + 128))(v8); /*0x7782f5*/
    if ( (*(int (__thiscall **)(ConvertClass *))(*(_DWORD *)a2->__pad_0 + 124))(a2) > 1024 ) /*0x778306*/
    {
      Viewport = Display::GetViewport(v36); /*0x77830c*/
      v30[0] = *Viewport; /*0x778319*/
      v30[1] = Viewport[1]; /*0x778320*/
      v11 = (Viewport[2] - v28) / 2; /*0x77833e*/
      v12 = (Viewport[3] - v29[0]) / 2; /*0x778340*/
    }
    if ( aP1 && (*(int (__thiscall **)(_DWORD *))(*v8 + 112))(v8) == 1 ) /*0x77835b*/
    {
      v14 = (_DWORD *)__2_YAPAXI_Z(0x188u); /*0x778366*/
      if ( v14 ) /*0x778370*/
        ConvertClass::Construct(v14, aP1, (int)aP1, a2, (ObjectClass *)1, 0); /*0x778382*/
      v15 = *(_DWORD *)a2->__pad_0; /*0x778395*/
      v29[0] = v11; /*0x7783af*/
      v29[1] = v12; /*0x7783b3*/
      v16 = (*(int (__thiscall **)(ConvertClass *, int *))(v15 + 120))(a2, v36); /*0x7783b7*/
      (*(void (__thiscall **)(_DWORD *, _DWORD *, _DWORD *, int))(*v8 + 120))(v8, v30, v29, v16); /*0x7783c9*/
      BlitterDrawSHP((IUnknown *)a2); /*0x7783d6*/
      if ( v26 ) /*0x7783dd*/
        (**v26)(v26, 1); /*0x7783e5*/
    }
    else
    {
      v17 = (*(int (__thiscall **)(_DWORD *))(*v8 + 124))(v8); /*0x7783ed*/
      v18 = *v8; /*0x7783f0*/
      v30[0] = v17; /*0x7783f4*/
      v19 = (*(int (__thiscall **)(_DWORD *))(v18 + 128))(v8); /*0x7783f8*/
      v20 = *v8; /*0x778402*/
      v33 = v19; /*0x778404*/
      v32 = v30[0]; /*0x77840e*/
      v31[0] = v11; /*0x778414*/
      v21 = *(_DWORD *)a2->__pad_0; /*0x778418*/
      v31[1] = v12; /*0x77841d*/
      v22 = (*(int (__thiscall **)(_DWORD *, _DWORD *, _DWORD, int))(v20 + 120))(v8, v37, 0, 1); /*0x778421*/
      v23 = (*(int (__thiscall **)(_DWORD *, _BYTE *, int))(*v8 + 120))(v8, v40, v22); /*0x778431*/
      v24 = (*(int (__thiscall **)(ConvertClass *, _UNKNOWN **, _DWORD *, _DWORD *, int))(*(_DWORD *)a2->__pad_0 + 120))( /*0x778447*/
              a2,
              &retaddr,
              v31,
              v8,
              v23);
      (*(void (__thiscall **)(ConvertClass *, int))(v21 + 12))(a2, v24); /*0x77844d*/
    }
    (*(void (__thiscall **)(_DWORD *, int))*v8)(v8, 1); /*0x778456*/
  }
  v37[0] = &vt_CCFileClass; /*0x778461*/
  v39 = 0; /*0x778469*/
  Vector::Clear((int)v38); /*0x778474*/
  v37[0] = &off_7E1668; /*0x77847d*/
  return BufferIOFileClass::Dtor(v37); /*0x77848a*/
}


// ==== 0x007784A0  CCToolTip::QueryInterface  this=CCToolTip  sig=csp ====
CCToolTip *__thiscall CCToolTip::QueryInterface(_DWORD *Block, char a2)
{
  *Block = &vt_CCToolTip; /*0x7784a3*/
  ToolTipClass::updateString(Block); /*0x7784a9*/
  if ( (a2 & 1) != 0 ) /*0x7784b3*/
    __3_YAXPAX_Z(Block); /*0x7784b6*/
  return (CCToolTip *)Block; /*0x7784c0*/
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
  MEMORY[0xB73598] = Math::Sqrt(v0 + v0); /*0x77850e*/
}


// ==== 0x00778520  sub_778520  this=-  sig=ida-proto ====
void sub_778520()
{
  MEMORY[0xB735E8] = MEMORY[0xB73598] / 60.0; /*0x77852c*/
}


// ==== 0x00778540  sub_778540  this=-  sig=ida-proto ====
void sub_778540()
{
  MEMORY[0xB735D0] = 1.0 / MEMORY[0xB735E8]; /*0x77854c*/
}


// ==== 0x00778560  sub_778560  this=-  sig=ida-proto ====
void sub_778560()
{
  MEMORY[0xB735C8] = 0.0174532925199433 * 45.0; /*0x77856c*/
}


// ==== 0x00778580  sub_778580  this=-  sig=ida-proto ====
void sub_778580()
{
  MEMORY[0xB735A0] = 0.0174532925199433 * 60.0; /*0x77858c*/
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

  v0 = Math::Sin(dbl_B73578 - MEMORY[0xB735A0]); /*0x7785d2*/
  result = Math::RoundToInt(v0 * MEMORY[0xB73598] * 0.5); /*0x7785e6*/
  MEMORY[0xB735F0] = result; /*0x7785eb*/
  return result; /*0x7785f0*/
}


// ==== 0x00778600  sub_778600  this=-  sig=ida-proto ====
void sub_778600()
{
  MEMORY[0xB735A8] = Math::ArcTan((double)MEMORY[0xB735F0] * 0.00390625); /*0x778617*/
}


// ==== 0x00778630  sub_778630  this=-  sig=ida-proto ====
void sub_778630()
{
  MEMORY[0xB735C0] = Math::ArcTan((double)(2 * MEMORY[0xB735F0]) / MEMORY[0xB73598]); /*0x778652*/
}


// ==== 0x00778660  sub_778660  this=-  sig=ida-proto ====
__int64 sub_778660()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * MEMORY[0xB735F0]) + 0.5); /*0x77867b*/
  MEMORY[0xB735E4] = result; /*0x778680*/
  return result; /*0x778686*/
}


// ==== 0x00778690  sub_778690  this=-  sig=ida-proto ====
int sub_778690()
{
  MEMORY[0xB73594] = 0; /*0x778692*/
  MEMORY[0xB73596] = 0; /*0x778698*/
  return 0; /*0x77869e*/
}


// ==== 0x007786A0  sub_7786A0  this=-  sig=ida-proto ====
int sub_7786A0()
{
  MEMORY[0xB735B0] = 0; /*0x7786a2*/
  MEMORY[0xB735B4] = 0; /*0x7786a7*/
  MEMORY[0xB735B8] = 0; /*0x7786ac*/
  return 0; /*0x7786b1*/
}


// ==== 0x007786C0  sub_7786C0  this=-  sig=ida-proto ====
int sub_7786C0()
{
  MEMORY[0xB735E0] = 0; /*0x7786c5*/
  MEMORY[0xB735D8] = 128; /*0x7786cf*/
  MEMORY[0xB735DC] = 128; /*0x7786d4*/
  return 128; /*0x7786d9*/
}


// ==== 0x007786E0  sub_7786E0  this=-  sig=ida-proto ====
int sub_7786E0()
{
  String::Assign((char **)&stru_B73590, MEMORY[0x849F58]); /*0x7786ea*/
  return atexit(unknown_libname_38); /*0x7786fa*/
}


// ==== 0x00778700  unknown_libname_38  this=-  sig=ida-proto ====
// Microsoft VisualC 2-14/net runtime
void __cdecl unknown_libname_38()
{
  DeleteAndZero((void **)&stru_B73590); /*0x778705*/
}


// ==== 0x00778710  ObjectClass::LoadAccountInfoWOL  this=ObjectClass  sig=csp ====
_DWORD *__thiscall WOL_LoadAccountInfo(_DWORD *this)
{
  int v1; // edi
  int Int; // esi
  int v3; // ebp
  unsigned __int8 *v4; // eax
  char *v5; // eax
  char *v6; // eax
  int v7; // esi
  _DWORD *v8; // edi
  void *v10; // [esp+10h] [ebp-B0h] BYREF
  void *v11; // [esp+14h] [ebp-ACh] BYREF
  void *v12; // [esp+18h] [ebp-A8h] BYREF
  void *v13; // [esp+1Ch] [ebp-A4h] BYREF
  void *v14; // [esp+20h] [ebp-A0h] BYREF
  _DWORD *v15; // [esp+24h] [ebp-9Ch]
  void *v16[3]; // [esp+28h] [ebp-98h] BYREF
  void **v17; // [esp+34h] [ebp-8Ch]
  _DWORD v18[3]; // [esp+38h] [ebp-88h] BYREF
  _DWORD v19[6]; // [esp+44h] [ebp-7Ch] BYREF
  char v20; // [esp+5Ch] [ebp-64h]
  int v21; // [esp+60h] [ebp-60h]
  int v22; // [esp+64h] [ebp-5Ch]
  _DWORD v23[22]; // [esp+68h] [ebp-58h] BYREF

  v15 = this; /*0x778718*/
  unknown_libname_73(&v12); /*0x778722*/
  v1 = -2; /*0x778727*/
  Int = 0; /*0x778732*/
  v3 = -2; /*0x778734*/
  unknown_libname_73(&v11); /*0x778736*/
  unknown_libname_74(&v13); /*0x77873f*/
  unknown_libname_74(&v14); /*0x778748*/
  BufferIOFile::Constructor(v23, MEMORY[0x849F8C]); /*0x778756*/
  if ( !File::IsReady(v23, 0) ) /*0x778760*/
  {
    FileClass::Close(v23); /*0x77876d*/
    CCFileClass::Close(v23); /*0x778776*/
    CCFileClass::Reopen(v23, MEMORY[0x849F8C], 1); /*0x778786*/
  }
  if ( File::IsReady(v23, 0) ) /*0x778790*/
  {
    v16[1] = 0; /*0x7787a1*/
    v16[2] = 0; /*0x7787a5*/
    GenericNode::Constructor(v18); /*0x7787a9*/
    GenericNode::Constructor(v19); /*0x7787b2*/
    v17 = &vt_GenericList; /*0x7787c0*/
    LinkedList::Prepend(v18, (int)v19); /*0x7787c8*/
    v17 = &vt_List_INIClass_INISection; /*0x7787d1*/
    memset(&v19[3], 0, 12); /*0x7787df*/
    v20 = 0; /*0x7787eb*/
    v21 = 0; /*0x7787ef*/
    v22 = 0; /*0x7787f3*/
    v16[0] = &vt_INIClass; /*0x7787f7*/
    FileStraw::Open(v16, (int)v23, 0); /*0x7787ff*/
    CCFileClass::Close(v23); /*0x778808*/
    v4 = (unsigned __int8 *)String::GetOrEmpty_Alt((char **)&stru_B73590); /*0x778812*/
    if ( INIClass::BinarySearchSection((int)v16, v4) ) /*0x77881c*/
    {
      String::Assign((char **)&v10, MEMORY[0x849F84]); /*0x778832*/
      INIClass::ReadString(v16, (char **)&stru_B73590, (char **)&v10, (char **)&v12, (int)&v12); /*0x77884f*/
      DeleteAndZero(&v10); /*0x778858*/
      String::Assign((char **)&v10, MEMORY[0x849F7C]); /*0x778866*/
      Int = INIClass::ReadInt((char **)&stru_B73590, (char **)&v10, 0); /*0x778883*/
      DeleteAndZero(&v10); /*0x778885*/
      String::Assign((char **)&v10, g_INI_Key_Country); /*0x778893*/
      v1 = INIClass::ReadInt((char **)&stru_B73590, (char **)&v10, -2); /*0x7788b1*/
      DeleteAndZero(&v10); /*0x7788b3*/
      String::Assign((char **)&v10, stru_81B138); /*0x7788c1*/
      v3 = INIClass::ReadInt((char **)&stru_B73590, (char **)&v10, -2); /*0x7788df*/
      DeleteAndZero(&v10); /*0x7788e1*/
      String::Assign((char **)&v10, MEMORY[0x849F70]); /*0x7788ef*/
      INIClass::ReadString(v16, (char **)&stru_B73590, (char **)&v10, (char **)&v11, (int)&v11); /*0x77890c*/
      DeleteAndZero(&v10); /*0x778915*/
      LocalizeWOLDateString(&v11, &v13); /*0x778922*/
      DeleteAndZero::Alt2(&v11); /*0x77892b*/
      String::Assign((char **)&v10, MEMORY[0x849F64]); /*0x778939*/
      INIClass::ReadString(v16, (char **)&stru_B73590, (char **)&v10, (char **)&v11, (int)&v11); /*0x778956*/
      DeleteAndZero(&v10); /*0x77895f*/
      v5 = String::GetOrEmpty_Alt((char **)&v11); /*0x778968*/
      v6 = CharToWideString(v5); /*0x77896f*/
      WideString::Reassign(&v14, (wchar_t *)v6); /*0x778979*/
    }
    HashTable::DestroyHashTableINIClass(v16); /*0x778982*/
  }
  if ( __2_YAPAXI_Z(0x44u) ) /*0x778989*/
    v7 = LoadAccountInfoWOL_Load(&v12, Int, 0, 0, v1, v3, -1, -1, -1, -1, -1, 1, &v14, &v13); /*0x7789bc*/
  else
    v7 = 0; /*0x7789c0*/
  v8 = v15; /*0x7789c2*/
  ComPtr::Constructor(v15); /*0x7789c8*/
  *v8 = &vt_rc_ptr_PlayerProfile; /*0x7789cf*/
  ComPtr::Set(v8, v7); /*0x7789d6*/
  v23[0] = &off_7E1668; /*0x7789df*/
  BufferIOFileClass::Dtor(v23); /*0x7789e7*/
  DeleteAndZero::Alt(&v14); /*0x7789f0*/
  DeleteAndZero::Alt(&v13); /*0x7789f9*/
  DeleteAndZero(&v11); /*0x778a02*/
  DeleteAndZero(&v12); /*0x778a0b*/
  return v8; /*0x778a12*/
}


// ==== 0x00778A20  LoadPlayerProfile  this=-  sig=csp ====
_DWORD *__fastcall PlayerProfile_Load(_DWORD *a1, const char **a2)
{
  unsigned __int8 *v5; // eax
  int Int; // esi
  char *v7; // eax
  char Bool_Overwrite; // bl
  int v9; // edi
  int v10; // ebp
  char *v11; // eax
  char *v12; // eax
  char *v13; // eax
  int v14; // esi
  _DWORD *v15; // edi
  void *v16; // [esp+Ch] [ebp-D0h] BYREF
  void *v17; // [esp+10h] [ebp-CCh] BYREF
  void *v18; // [esp+14h] [ebp-C8h] BYREF
  void *v19; // [esp+18h] [ebp-C4h] BYREF
  void *v20; // [esp+1Ch] [ebp-C0h] BYREF
  void *v21; // [esp+20h] [ebp-BCh] BYREF
  void *v22[4]; // [esp+24h] [ebp-B8h] BYREF
  _DWORD v23[3]; // [esp+34h] [ebp-A8h] BYREF
  _DWORD v24[6]; // [esp+40h] [ebp-9Ch] BYREF
  char v25; // [esp+58h] [ebp-84h]
  int v26; // [esp+5Ch] [ebp-80h]
  int v27; // [esp+60h] [ebp-7Ch]
  int v28; // [esp+64h] [ebp-78h]
  int v29; // [esp+68h] [ebp-74h]
  int v30; // [esp+6Ch] [ebp-70h]
  int v31; // [esp+70h] [ebp-6Ch]
  _DWORD *v32; // [esp+74h] [ebp-68h]
  int v33; // [esp+78h] [ebp-64h]
  int v34; // [esp+7Ch] [ebp-60h]
  int v35; // [esp+80h] [ebp-5Ch]
  _DWORD v36[22]; // [esp+84h] [ebp-58h] BYREF

  v32 = a1; /*0x778a39*/
  BufferIOFile::Constructor(MEMORY[0x849F8C]); /*0x778a3d*/
  if ( !File::IsReady(v36, 0) ) /*0x778a4c*/
  {
    FileClass::Close(v36); /*0x778a5c*/
    CCFileClass::Close(v36); /*0x778a68*/
    CCFileClass::Reopen(v36, MEMORY[0x849F8C], 1); /*0x778a7b*/
  }
  if ( File::IsReady(v36, 0) )
  {
    v22[1] = 0; /*0x778abf*/
    v22[2] = 0; /*0x778ac3*/
    v23[1] = 0; /*0x778ac7*/
    v23[2] = 0; /*0x778acb*/
    v23[0] = &vt_GenericNode; /*0x778acf*/
    GenericNode::Constructor(v24); /*0x778ad7*/
    LinkedList::Prepend(v23, (int)v24); /*0x778aed*/
    v22[3] = &vt_List_INIClass_INISection; /*0x778af9*/
    memset(&v24[3], 0, 12); /*0x778b07*/
    v25 = 0; /*0x778b13*/
    v26 = 0; /*0x778b18*/
    v27 = 0; /*0x778b1c*/
    v22[0] = &vt_INIClass; /*0x778b20*/
    FileStraw::Open(v22, (int)v36, 0); /*0x778b28*/
    CCFileClass::Close(v36); /*0x778b34*/
    String::AssignFromPtr((char **)&v17, a2); /*0x778b3e*/
    String::ToLower((const char **)&v17); /*0x778b47*/
    v5 = (unsigned __int8 *)String::GetOrEmpty_Alt((char **)&v17); /*0x778b50*/
    if ( INIClass::BinarySearchSection((int)v22, v5) )
    {
      unknown_libname_73(&v19); /*0x778ba4*/
      String::Assign((char **)&v16, MEMORY[0x849F84]); /*0x778bb2*/
      INIClass::ReadString(v22, (char **)&v17, (char **)&v16, (char **)&v19, (int)&v19); /*0x778bcf*/
      DeleteAndZero(&v16); /*0x778bd8*/
      String::Assign((char **)&v16, MEMORY[0x849F7C]); /*0x778be6*/
      Int = INIClass::ReadInt((char **)&v17, (char **)&v16, 0); /*0x778c03*/
      DeleteAndZero(&v16); /*0x778c05*/
      v7 = String::GetOrEmpty((char **)&v17); /*0x778c14*/
      Bool_Overwrite = INIClass::ReadBool_Overwrite(v7, unk_849FCC, 0); /*0x778c23*/
      LOBYTE(v30) = Bool_Overwrite; /*0x778c2e*/
      String::Assign((char **)&v16, g_INI_Key_Country); /*0x778c32*/
      v9 = INIClass::ReadInt((char **)&v17, (char **)&v16, -2); /*0x778c50*/
      DeleteAndZero(&v16); /*0x778c52*/
      String::Assign((char **)&v16, stru_81B138); /*0x778c60*/
      v10 = INIClass::ReadInt((char **)&v17, (char **)&v16, -2); /*0x778c7e*/
      DeleteAndZero(&v16); /*0x778c80*/
      String::Assign((char **)&v16, MEMORY[0x849FC4]); /*0x778c8e*/
      v29 = INIClass::ReadInt((char **)&v17, (char **)&v16, -1); /*0x778cac*/
      DeleteAndZero(&v16); /*0x778cb0*/
      String::Assign((char **)&v16, MEMORY[0x8439A8]); /*0x778cbe*/
      v35 = INIClass::ReadInt((char **)&v17, (char **)&v16, -1); /*0x778cdc*/
      DeleteAndZero(&v16); /*0x778ce3*/
      String::Assign((char **)&v16, MEMORY[0x849FBC]); /*0x778cf1*/
      v31 = INIClass::ReadInt((char **)&v17, (char **)&v16, -1); /*0x778d0f*/
      DeleteAndZero(&v16); /*0x778d13*/
      String::Assign((char **)&v16, MEMORY[0x849FB4]); /*0x778d21*/
      v33 = INIClass::ReadInt((char **)&v17, (char **)&v16, -1); /*0x778d3f*/
      DeleteAndZero(&v16); /*0x778d43*/
      String::Assign((char **)&v16, MEMORY[0x849FA8]); /*0x778d51*/
      v28 = INIClass::ReadInt((char **)&v17, (char **)&v16, -1); /*0x778d6f*/
      DeleteAndZero(&v16); /*0x778d73*/
      v11 = String::GetOrEmpty((char **)&v17); /*0x778d83*/
      LOBYTE(v34) = INIClass::ReadBool_Overwrite(v11, MEMORY[0x849F9C], 1); /*0x778d96*/
      unknown_libname_73(&v18); /*0x778d9d*/
      unknown_libname_74(&v21); /*0x778da6*/
      String::Assign((char **)&v16, MEMORY[0x849F70]); /*0x778db4*/
      INIClass::ReadString(v22, (char **)&v17, (char **)&v16, (char **)&v18, (int)&v18); /*0x778dd1*/
      DeleteAndZero(&v16); /*0x778dda*/
      LocalizeWOLDateString(&v18, &v21); /*0x778de7*/
      DeleteAndZero::Alt2(&v18); /*0x778df0*/
      unknown_libname_74(&v20); /*0x778df9*/
      String::Assign((char **)&v16, MEMORY[0x849F64]); /*0x778e07*/
      INIClass::ReadString(v22, (char **)&v17, (char **)&v16, (char **)&v18, (int)&v18); /*0x778e24*/
      DeleteAndZero(&v16); /*0x778e2d*/
      v12 = String::GetOrEmpty_Alt((char **)&v18); /*0x778e36*/
      v13 = CharToWideString(v12); /*0x778e3d*/
      WideString::Reassign(&v20, (wchar_t *)v13); /*0x778e47*/
      if ( __2_YAPAXI_Z(0x44u) )
        v14 = LoadAccountInfoWOL_Load(
                &v19,
                Int,
                v30,
                Bool_Overwrite != 0 ? 1 : 3,
                v9,
                v10,
                v29,
                v35,
                v31,
                v33,
                v28,
                v34,
                &v20,
                &v21);
      else
        v14 = 0; /*0x778eb7*/
      v15 = v32; /*0x778eb9*/
      ComPtr::Constructor(v32); /*0x778ebf*/
      *v15 = &vt_rc_ptr_PlayerProfile; /*0x778ec6*/
      ComPtr::Set(v15, v14); /*0x778ecd*/
      DeleteAndZero::Alt(&v20); /*0x778ed6*/
      DeleteAndZero::Alt(&v21); /*0x778edf*/
      DeleteAndZero(&v18); /*0x778ee8*/
      DeleteAndZero(&v19); /*0x778ef1*/
      DeleteAndZero(&v17); /*0x778efa*/
      HashTable::DestroyHashTableINIClass(v22); /*0x778f03*/
      v36[0] = &off_7E1668; /*0x778f0f*/
      BufferIOFileClass::Dtor(v36); /*0x778f1a*/
      return v15; /*0x778f1f*/
    }
    else
    {
      LoadAccountInfoWOL(a1); /*0x778b65*/
      DeleteAndZero(&v17); /*0x778b6e*/
      HashTable::DestroyHashTableINIClass(v22); /*0x778b77*/
      v36[0] = &off_7E1668; /*0x778b83*/
      BufferIOFileClass::Dtor(v36); /*0x778b8e*/
      return a1; /*0x778b93*/
    }
  }
  else
  {
    LoadAccountInfoWOL(a1); /*0x778a93*/
    v36[0] = &off_7E1668; /*0x778a9f*/
    BufferIOFileClass::Dtor(v36); /*0x778aaa*/
    return a1; /*0x778aaf*/
  }
}


// ==== 0x00778F30  LocalizeWOLDateString  this=-  sig=csp ====
char __fastcall LocalizeWOLDateString(char **a1, void **a2)
{
  char *v3; // eax
  char *v4; // eax
  CampaignScore *v5; // eax
  wchar_t *StringCSF; // eax
  wchar_t *v7; // eax
  CampaignScore *v8; // eax
  wchar_t *v9; // eax
  CampaignScore *v10; // eax
  wchar_t *v11; // eax
  CampaignScore *v12; // eax
  wchar_t *v13; // eax
  CampaignScore *v14; // eax
  wchar_t *v15; // eax
  CampaignScore *v16; // eax
  wchar_t *v17; // eax
  CampaignScore *v18; // eax
  wchar_t *v19; // eax
  CampaignScore *v20; // eax
  wchar_t *v21; // eax
  CampaignScore *v22; // eax
  wchar_t *v23; // eax
  CampaignScore *v24; // eax
  wchar_t *v25; // eax
  CampaignScore *v26; // eax
  wchar_t *v27; // eax
  CampaignScore *v28; // eax
  wchar_t *v29; // eax

  v3 = String::GetOrEmpty_Alt(a1); /*0x778f33*/
  v4 = CharToWideString(v3); /*0x778f3a*/
  WideString::Reassign(a2, (wchar_t *)v4); /*0x778f42*/
  v5 = WideString::GetOrEmpty((wchar_t **)a2); /*0x778f4e*/
  if ( wcsstr(v5, (const wchar_t *)&g_INI_Key_Jan) ) /*0x778f54*/
  {
    StringCSF = GetStringCSF(&unk_84A0C4, 0, (CampaignScore *)"D:\\ra2mdpost\\WOLPersonaInformation.cpp", 127); /*0x778f6e*/
    LOBYTE(v7) = WideString::Replace(a2, &g_INI_Key_Jan, StringCSF); /*0x778f7b*/
  }
  else
  {
    v8 = WideString::GetOrEmpty((wchar_t **)a2); /*0x778f89*/
    if ( wcsstr(v8, L"Feb") ) /*0x778f8f*/
    {
      v9 = GetStringCSF(&unk_84A0AC, 0, (CampaignScore *)"D:\\ra2mdpost\\WOLPersonaInformation.cpp", 132); /*0x778fac*/
      LOBYTE(v7) = WideString::Replace(a2, (CampaignScore *)L"Feb", v9); /*0x778fb9*/
    }
    else
    {
      v10 = WideString::GetOrEmpty((wchar_t **)a2); /*0x778fc7*/
      if ( wcsstr(v10, L"Mar") ) /*0x778fcd*/
      {
        v11 = GetStringCSF(&unk_84A098, 0, (CampaignScore *)"D:\\ra2mdpost\\WOLPersonaInformation.cpp", 137); /*0x778fea*/
        LOBYTE(v7) = WideString::Replace(a2, (CampaignScore *)L"Mar", v11); /*0x778ff7*/
      }
      else
      {
        v12 = WideString::GetOrEmpty((wchar_t **)a2); /*0x779005*/
        if ( wcsstr(v12, L"Apr") ) /*0x77900b*/
        {
          v13 = GetStringCSF(&unk_84A084, 0, (CampaignScore *)"D:\\ra2mdpost\\WOLPersonaInformation.cpp", 142); /*0x779028*/
          LOBYTE(v7) = WideString::Replace(a2, (CampaignScore *)L"Apr", v13); /*0x779035*/
        }
        else
        {
          v14 = WideString::GetOrEmpty((wchar_t **)a2); /*0x779043*/
          if ( wcsstr(v14, L"May") ) /*0x779049*/
          {
            v15 = GetStringCSF(&unk_84A074, 0, (CampaignScore *)"D:\\ra2mdpost\\WOLPersonaInformation.cpp", 147); /*0x779066*/
            LOBYTE(v7) = WideString::Replace(a2, (CampaignScore *)L"May", v15); /*0x779073*/
          }
          else
          {
            v16 = WideString::GetOrEmpty((wchar_t **)a2); /*0x779081*/
            if ( wcsstr(v16, L"Jun") ) /*0x779087*/
            {
              v17 = GetStringCSF(&unk_84A060, 0, (CampaignScore *)"D:\\ra2mdpost\\WOLPersonaInformation.cpp", 152); /*0x7790a4*/
              LOBYTE(v7) = WideString::Replace(a2, (CampaignScore *)L"Jun", v17); /*0x7790b1*/
            }
            else
            {
              v18 = WideString::GetOrEmpty((wchar_t **)a2); /*0x7790bf*/
              if ( wcsstr(v18, L"Jul") ) /*0x7790c5*/
              {
                v19 = GetStringCSF(&unk_84A04C, 0, (CampaignScore *)"D:\\ra2mdpost\\WOLPersonaInformation.cpp", 157); /*0x7790e2*/
                LOBYTE(v7) = WideString::Replace(a2, (CampaignScore *)L"Jul", v19); /*0x7790ef*/
              }
              else
              {
                v20 = WideString::GetOrEmpty((wchar_t **)a2); /*0x7790fd*/
                if ( wcsstr(v20, L"Aug") ) /*0x779103*/
                {
                  v21 = GetStringCSF(&unk_84A038, 0, (CampaignScore *)"D:\\ra2mdpost\\WOLPersonaInformation.cpp", 162); /*0x779120*/
                  LOBYTE(v7) = WideString::Replace(a2, (CampaignScore *)L"Aug", v21); /*0x77912d*/
                }
                else
                {
                  v22 = WideString::GetOrEmpty((wchar_t **)a2); /*0x77913b*/
                  if ( wcsstr(v22, L"Sep") ) /*0x779141*/
                  {
                    v23 = GetStringCSF( /*0x77915e*/
                            (wchar_t *)&stru_84A004.CampaignScore_field_0x1C,
                            0,
                            (CampaignScore *)"D:\\ra2mdpost\\WOLPersonaInformation.cpp",
                            167);
                    LOBYTE(v7) = WideString::Replace(a2, (CampaignScore *)L"Sep", v23); /*0x77916b*/
                  }
                  else
                  {
                    v24 = WideString::GetOrEmpty((wchar_t **)a2); /*0x779179*/
                    if ( wcsstr(v24, (const wchar_t *)&stru_84A004.CampaignScore_field_0x14) ) /*0x77917f*/
                    {
                      v25 = GetStringCSF( /*0x77919c*/
                              (wchar_t *)&stru_84A004.CampaignScore_field_0x08,
                              0,
                              (CampaignScore *)"D:\\ra2mdpost\\WOLPersonaInformation.cpp",
                              172);
                      LOBYTE(v7) = WideString::Replace(a2, (CampaignScore *)&stru_84A004.CampaignScore_field_0x14, v25); /*0x7791a9*/
                    }
                    else
                    {
                      v26 = WideString::GetOrEmpty((wchar_t **)a2); /*0x7791b7*/
                      if ( wcsstr(v26, (const wchar_t *)&stru_84A004) ) /*0x7791bd*/
                      {
                        v27 = GetStringCSF( /*0x7791da*/
                                &unk_849FF4,
                                0,
                                (CampaignScore *)"D:\\ra2mdpost\\WOLPersonaInformation.cpp",
                                177);
                        LOBYTE(v7) = WideString::Replace(a2, &stru_84A004, v27); /*0x7791e7*/
                      }
                      else
                      {
                        v28 = WideString::GetOrEmpty((wchar_t **)a2); /*0x7791f5*/
                        v7 = wcsstr(v28, L"Dec"); /*0x7791fb*/
                        if ( v7 ) /*0x779205*/
                        {
                          v29 = GetStringCSF( /*0x779218*/
                                  &unk_849FDC,
                                  0,
                                  (CampaignScore *)"D:\\ra2mdpost\\WOLPersonaInformation.cpp",
                                  182);
                          LOBYTE(v7) = WideString::Replace(a2, (CampaignScore *)L"Dec", v29); /*0x779225*/
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
void __fastcall ConvertDateMonthNames(wchar_t **a1, void **a2)
{
  CampaignScore *v4; // eax
  CampaignScore *v5; // eax
  wchar_t *v6; // eax
  CampaignScore *v7; // eax
  wchar_t *v8; // eax
  CampaignScore *v9; // eax
  wchar_t *v10; // eax
  CampaignScore *v11; // eax
  wchar_t *v12; // eax
  CampaignScore *v13; // eax
  wchar_t *v14; // eax
  CampaignScore *v15; // eax
  wchar_t *v16; // eax
  CampaignScore *v17; // eax
  wchar_t *v18; // eax
  CampaignScore *v19; // eax
  wchar_t *v20; // eax
  CampaignScore *v21; // eax
  wchar_t *v22; // eax
  CampaignScore *v23; // eax
  wchar_t *v24; // eax
  CampaignScore *v25; // eax
  wchar_t *v26; // eax
  CampaignScore *v27; // eax
  wchar_t *v28; // eax
  CampaignScore *v29; // eax
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
  wchar_t *v43; // [esp+8h] [ebp-4h] BYREF

  unknown_libname_74(&v43); /*0x77923b*/
  v4 = WideString::GetOrEmpty_Alt(a1); /*0x779242*/
  WideString::Reassign((void **)&v43, (wchar_t *)v4); /*0x77924c*/
  StringCSF = GetStringCSF(&unk_84A0C4, 0, (CampaignScore *)"D:\\ra2mdpost\\WOLPersonaInformation.cpp", 191); /*0x77926b*/
  v5 = WideString::GetOrEmpty(&v43); /*0x77926c*/
  if ( wcsstr(v5, StringCSF) ) /*0x779272*/
  {
    v6 = GetStringCSF(&unk_84A0C4, 0, (CampaignScore *)"D:\\ra2mdpost\\WOLPersonaInformation.cpp", 192); /*0x779294*/
    WideString::Replace((void **)&v43, (CampaignScore *)v6, (wchar_t *)&g_INI_Key_Jan); /*0x77929e*/
  }
  v32 = GetStringCSF(&unk_84A0AC, 0, (CampaignScore *)"D:\\ra2mdpost\\WOLPersonaInformation.cpp", 194); /*0x7792bd*/
  v7 = WideString::GetOrEmpty(&v43); /*0x7792be*/
  if ( wcsstr(v7, v32) ) /*0x7792c4*/
  {
    v8 = GetStringCSF(&unk_84A0AC, 0, (CampaignScore *)"D:\\ra2mdpost\\WOLPersonaInformation.cpp", 195); /*0x7792e6*/
    WideString::Replace((void **)&v43, (CampaignScore *)v8, (wchar_t *)L"Feb"); /*0x7792f0*/
  }
  v33 = GetStringCSF(&unk_84A098, 0, (CampaignScore *)"D:\\ra2mdpost\\WOLPersonaInformation.cpp", 197); /*0x77930f*/
  v9 = WideString::GetOrEmpty(&v43); /*0x779310*/
  if ( wcsstr(v9, v33) ) /*0x779316*/
  {
    v10 = GetStringCSF(&unk_84A098, 0, (CampaignScore *)"D:\\ra2mdpost\\WOLPersonaInformation.cpp", 198); /*0x779338*/
    WideString::Replace((void **)&v43, (CampaignScore *)v10, (wchar_t *)L"Mar"); /*0x779342*/
  }
  v34 = GetStringCSF(&unk_84A084, 0, (CampaignScore *)"D:\\ra2mdpost\\WOLPersonaInformation.cpp", 200); /*0x779361*/
  v11 = WideString::GetOrEmpty(&v43); /*0x779362*/
  if ( wcsstr(v11, v34) ) /*0x779368*/
  {
    v12 = GetStringCSF(&unk_84A084, 0, (CampaignScore *)"D:\\ra2mdpost\\WOLPersonaInformation.cpp", 201); /*0x77938a*/
    WideString::Replace((void **)&v43, (CampaignScore *)v12, (wchar_t *)L"Apr"); /*0x779394*/
  }
  v35 = GetStringCSF(&unk_84A074, 0, (CampaignScore *)"D:\\ra2mdpost\\WOLPersonaInformation.cpp", 203); /*0x7793b3*/
  v13 = WideString::GetOrEmpty(&v43); /*0x7793b4*/
  if ( wcsstr(v13, v35) ) /*0x7793ba*/
  {
    v14 = GetStringCSF(&unk_84A074, 0, (CampaignScore *)"D:\\ra2mdpost\\WOLPersonaInformation.cpp", 204); /*0x7793dc*/
    WideString::Replace((void **)&v43, (CampaignScore *)v14, (wchar_t *)L"May"); /*0x7793e6*/
  }
  v36 = GetStringCSF(&unk_84A060, 0, (CampaignScore *)"D:\\ra2mdpost\\WOLPersonaInformation.cpp", 206); /*0x779405*/
  v15 = WideString::GetOrEmpty(&v43); /*0x779406*/
  if ( wcsstr(v15, v36) ) /*0x77940c*/
  {
    v16 = GetStringCSF(&unk_84A060, 0, (CampaignScore *)"D:\\ra2mdpost\\WOLPersonaInformation.cpp", 207); /*0x77942e*/
    WideString::Replace((void **)&v43, (CampaignScore *)v16, (wchar_t *)L"Jun"); /*0x779438*/
  }
  v37 = GetStringCSF(&unk_84A04C, 0, (CampaignScore *)"D:\\ra2mdpost\\WOLPersonaInformation.cpp", 209); /*0x779457*/
  v17 = WideString::GetOrEmpty(&v43); /*0x779458*/
  if ( wcsstr(v17, v37) ) /*0x77945e*/
  {
    v18 = GetStringCSF(&unk_84A04C, 0, (CampaignScore *)"D:\\ra2mdpost\\WOLPersonaInformation.cpp", 210); /*0x779480*/
    WideString::Replace((void **)&v43, (CampaignScore *)v18, (wchar_t *)L"Jul"); /*0x77948a*/
  }
  v38 = GetStringCSF(&unk_84A038, 0, (CampaignScore *)"D:\\ra2mdpost\\WOLPersonaInformation.cpp", 212); /*0x7794a9*/
  v19 = WideString::GetOrEmpty(&v43); /*0x7794aa*/
  if ( wcsstr(v19, v38) ) /*0x7794b0*/
  {
    v20 = GetStringCSF(&unk_84A038, 0, (CampaignScore *)"D:\\ra2mdpost\\WOLPersonaInformation.cpp", 213); /*0x7794d2*/
    WideString::Replace((void **)&v43, (CampaignScore *)v20, (wchar_t *)L"Aug"); /*0x7794dc*/
  }
  v39 = GetStringCSF( /*0x7794fb*/
          (wchar_t *)&stru_84A004.CampaignScore_field_0x1C,
          0,
          (CampaignScore *)"D:\\ra2mdpost\\WOLPersonaInformation.cpp",
          215);
  v21 = WideString::GetOrEmpty(&v43); /*0x7794fc*/
  if ( wcsstr(v21, v39) ) /*0x779502*/
  {
    v22 = GetStringCSF( /*0x779524*/
            (wchar_t *)&stru_84A004.CampaignScore_field_0x1C,
            0,
            (CampaignScore *)"D:\\ra2mdpost\\WOLPersonaInformation.cpp",
            216);
    WideString::Replace((void **)&v43, (CampaignScore *)v22, (wchar_t *)L"Sep"); /*0x77952e*/
  }
  v40 = GetStringCSF( /*0x77954d*/
          (wchar_t *)&stru_84A004.CampaignScore_field_0x08,
          0,
          (CampaignScore *)"D:\\ra2mdpost\\WOLPersonaInformation.cpp",
          218);
  v23 = WideString::GetOrEmpty(&v43); /*0x77954e*/
  if ( wcsstr(v23, v40) ) /*0x779554*/
  {
    v24 = GetStringCSF( /*0x779576*/
            (wchar_t *)&stru_84A004.CampaignScore_field_0x08,
            0,
            (CampaignScore *)"D:\\ra2mdpost\\WOLPersonaInformation.cpp",
            219);
    WideString::Replace((void **)&v43, (CampaignScore *)v24, (wchar_t *)&stru_84A004.CampaignScore_field_0x14); /*0x779580*/
  }
  v41 = GetStringCSF(&unk_849FF4, 0, (CampaignScore *)"D:\\ra2mdpost\\WOLPersonaInformation.cpp", 221); /*0x77959f*/
  v25 = WideString::GetOrEmpty(&v43); /*0x7795a0*/
  if ( wcsstr(v25, v41) ) /*0x7795a6*/
  {
    v26 = GetStringCSF(&unk_849FF4, 0, (CampaignScore *)"D:\\ra2mdpost\\WOLPersonaInformation.cpp", 222); /*0x7795c8*/
    WideString::Replace((void **)&v43, (CampaignScore *)v26, (wchar_t *)&stru_84A004); /*0x7795d2*/
  }
  v42 = GetStringCSF(&unk_849FDC, 0, (CampaignScore *)"D:\\ra2mdpost\\WOLPersonaInformation.cpp", 224); /*0x7795f1*/
  v27 = WideString::GetOrEmpty(&v43); /*0x7795f2*/
  if ( wcsstr(v27, v42) ) /*0x7795f8*/
  {
    v28 = GetStringCSF(&unk_849FDC, 0, (CampaignScore *)"D:\\ra2mdpost\\WOLPersonaInformation.cpp", 225); /*0x77961a*/
    WideString::Replace((void **)&v43, (CampaignScore *)v28, (wchar_t *)L"Dec"); /*0x779624*/
  }
  v29 = WideString::GetOrEmpty(&v43); /*0x77962d*/
  v30 = ToWideStringChar((IUnknown *)v29); /*0x779634*/
  String::Assign_Bool(a2, v30); /*0x77963c*/
  DeleteAndZero::Alt((void **)&v43); /*0x779645*/
}


// ==== 0x00779690  ReferenceCounted::LoadAccountInfoWOL_Load  this=ReferenceCounted  sig=csp ====
void *__thiscall LoadAccountInfoWOL_Load(
        void *this,
        ReferenceCounted *aP1,
        ObjectClass *aP2,
        ReferenceCounted *aP3,
        ReferenceCounted *aP4,
        int a6,
        ObjectClass *aP6,
        ReferenceCounted *aP7,
        ReferenceCounted *aP8,
        ReferenceCounted *aP9,
        ReferenceCounted *aP10,
        ReferenceCounted *aP11,
        ReferenceCounted *aP12,
        ReferenceCounted *aP13,
        ReferenceCounted *aP14)
{
  this->q004 = 0; /*0x779695*/
  this->q008 = 0; /*0x779698*/
  *(_DWORD *)this = &vt_ReferenceCounted; /*0x7796a3*/
  String::AssignFromPtr((char **)this + 3, (const char **)aP1); /*0x7796a9*/
  this->q004 = aP2; /*0x7796ba*/
  this->q018 = aP4; /*0x7796c1*/
  this->q014 = (_BYTE)aP3; /*0x7796c8*/
  this->q01C = a6; /*0x7796cf*/
  this->q024 = aP7; /*0x7796d6*/
  this->q008 = aP6; /*0x7796dd*/
  this->q028 = aP8; /*0x7796e4*/
  this->q00C = aP10; /*0x7796eb*/
  this->q02C = aP9; /*0x7796f2*/
  this->q034 = aP11; /*0x7796f9*/
  this->q038 = (_BYTE)aP12; /*0x779700*/
  WideString::AssignFromPtr((wchar_t **)this + 15, (const wchar_t **)aP14); /*0x779703*/
  WideString::AssignFromPtr((wchar_t **)this + 16, (const wchar_t **)aP13); /*0x779710*/
  *(_DWORD *)this = &PlayerProfile::`vftable'; /*0x779715*/
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

  BufferIOFile::Constructor(v8, MEMORY[0x849F8C]); /*0x779740*/
  if ( File::IsReady(v8, 0) ) /*0x77974c*/
  {
    v3[0] = &vt_GenericNode; /*0x779779*/
    v4[0] = &vt_GenericNode; /*0x77977d*/
    v2[1] = 0; /*0x779785*/
    v2[2] = 0; /*0x77978a*/
    v3[1] = 0; /*0x77978e*/
    v3[2] = 0; /*0x779792*/
    v4[1] = 0; /*0x779796*/
    v4[2] = 0; /*0x77979a*/
    LinkedList::Prepend(v3, (int)v4); /*0x7797a6*/
    v2[3] = &vt_List_INIClass_INISection; /*0x7797af*/
    memset(&v4[3], 0, 12); /*0x7797bd*/
    v5 = 0; /*0x7797c9*/
    v6 = 0; /*0x7797cd*/
    v7 = 0; /*0x7797d1*/
    v2[0] = &vt_INIClass; /*0x7797d5*/
    FileStraw::Open(v2, (int)v8, 0); /*0x7797dd*/
    CCFileClass::Close(v8); /*0x7797e6*/
    Bool_Overwrite = INIClass::ReadBool_Overwrite( /*0x779804*/
                       (int)v2,
                       (unsigned __int8 *)&stru_84A11C,
                       (unsigned __int8 *)MEMORY[0x84A120],
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
int __fastcall ReadWOLGameOption(INIClass *a1)
{
  char v3[4]; // [esp+8h] [ebp-98h] BYREF
  int v4; // [esp+Ch] [ebp-94h]
  int v5; // [esp+10h] [ebp-90h]
  void **v6; // [esp+14h] [ebp-8Ch]
  _DWORD v7[3]; // [esp+18h] [ebp-88h] BYREF
  _DWORD v8[6]; // [esp+24h] [ebp-7Ch] BYREF
  char v9; // [esp+3Ch] [ebp-64h]
  int v10; // [esp+40h] [ebp-60h]
  int v11; // [esp+44h] [ebp-5Ch]
  _DWORD v12[22]; // [esp+48h] [ebp-58h] BYREF

  BufferIOFile::Constructor(v12, MEMORY[0x849F8C]); /*0x779843*/
  if ( !File::IsReady(v12, 0) ) /*0x77984f*/
  {
    FileClass::Close(v12); /*0x77985c*/
    CCFileClass::Close(v12); /*0x779865*/
    CCFileClass::Reopen(v12, MEMORY[0x849F8C], (CDFileClass *)1); /*0x779875*/
  }
  v7[0] = &vt_GenericNode; /*0x779883*/
  v8[0] = &vt_GenericNode; /*0x779887*/
  v4 = 0; /*0x77988f*/
  v5 = 0; /*0x779894*/
  v7[1] = 0; /*0x779898*/
  v7[2] = 0; /*0x77989c*/
  v8[1] = 0; /*0x7798a0*/
  v8[2] = 0; /*0x7798a4*/
  LinkedList::Prepend(v7, (int)v8); /*0x7798b0*/
  v6 = &vt_List_INIClass_INISection; /*0x7798b9*/
  memset(&v8[3], 0, 12); /*0x7798c2*/
  v9 = 0; /*0x7798ce*/
  v10 = 0; /*0x7798d2*/
  v11 = 0; /*0x7798d6*/
  *(_DWORD *)v3 = &vt_INIClass; /*0x7798da*/
  if ( File::IsReady(v12, 0) ) /*0x7798e2*/
  {
    FileStraw::Open(v3, (int)v12, 0); /*0x7798f5*/
    INIClass::SetBool(v3, &stru_84A11C, (char *)stru_84A11C.headNode, a1); /*0x779909*/
    INIClass::SaveToPipe(v3, (int)v12); /*0x779917*/
  }
  HashTable::DestroyHashTableINIClass((void **)v3); /*0x779920*/
  v12[0] = &off_7E1668; /*0x779929*/
  return BufferIOFileClass::Dtor(v12); /*0x779936*/
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

  BufferIOFile::Constructor(v8, MEMORY[0x849F8C]); /*0x779950*/
  if ( File::IsReady(v8, 0) ) /*0x77995c*/
  {
    v3[0] = &vt_GenericNode; /*0x779989*/
    v4[0] = &vt_GenericNode; /*0x77998d*/
    v2[1] = 0; /*0x779995*/
    v2[2] = 0; /*0x77999a*/
    v3[1] = 0; /*0x77999e*/
    v3[2] = 0; /*0x7799a2*/
    v4[1] = 0; /*0x7799a6*/
    v4[2] = 0; /*0x7799aa*/
    LinkedList::Prepend(v3, (int)v4); /*0x7799b6*/
    v2[3] = &vt_List_INIClass_INISection; /*0x7799bf*/
    memset(&v4[3], 0, 12); /*0x7799cd*/
    v5 = 0; /*0x7799d9*/
    v6 = 0; /*0x7799dd*/
    v7 = 0; /*0x7799e1*/
    v2[0] = &vt_INIClass; /*0x7799e5*/
    FileStraw::Open(v2, (int)v8, 0); /*0x7799ed*/
    CCFileClass::Close(v8); /*0x7799f6*/
    Bool_Overwrite = INIClass::ReadBool_Overwrite( /*0x779a14*/
                       (int)v2,
                       (unsigned __int8 *)&stru_84A11C,
                       (unsigned __int8 *)MEMORY[0x84A12C],
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
int __fastcall ReadWOLLobbyOption(INIClass *a1)
{
  char v3[4]; // [esp+8h] [ebp-98h] BYREF
  int v4; // [esp+Ch] [ebp-94h]
  int v5; // [esp+10h] [ebp-90h]
  void **v6; // [esp+14h] [ebp-8Ch]
  _DWORD v7[3]; // [esp+18h] [ebp-88h] BYREF
  _DWORD v8[6]; // [esp+24h] [ebp-7Ch] BYREF
  char v9; // [esp+3Ch] [ebp-64h]
  int v10; // [esp+40h] [ebp-60h]
  int v11; // [esp+44h] [ebp-5Ch]
  _DWORD v12[22]; // [esp+48h] [ebp-58h] BYREF

  BufferIOFile::Constructor(v12, MEMORY[0x849F8C]); /*0x779a53*/
  if ( !File::IsReady(v12, 0) ) /*0x779a5f*/
  {
    FileClass::Close(v12); /*0x779a6c*/
    CCFileClass::Close(v12); /*0x779a75*/
    CCFileClass::Reopen(v12, MEMORY[0x849F8C], (CDFileClass *)1); /*0x779a85*/
  }
  v7[0] = &vt_GenericNode; /*0x779a93*/
  v8[0] = &vt_GenericNode; /*0x779a97*/
  v4 = 0; /*0x779a9f*/
  v5 = 0; /*0x779aa4*/
  v7[1] = 0; /*0x779aa8*/
  v7[2] = 0; /*0x779aac*/
  v8[1] = 0; /*0x779ab0*/
  v8[2] = 0; /*0x779ab4*/
  LinkedList::Prepend(v7, (int)v8); /*0x779ac0*/
  v6 = &vt_List_INIClass_INISection; /*0x779ac9*/
  memset(&v8[3], 0, 12); /*0x779ad2*/
  v9 = 0; /*0x779ade*/
  v10 = 0; /*0x779ae2*/
  v11 = 0; /*0x779ae6*/
  *(_DWORD *)v3 = &vt_INIClass; /*0x779aea*/
  if ( File::IsReady(v12, 0) ) /*0x779af2*/
  {
    FileStraw::Open(v3, (int)v12, 0); /*0x779b05*/
    INIClass::SetBool(v3, &stru_84A11C, (char *)stru_84A11C.sectionHead, a1); /*0x779b19*/
    INIClass::SaveToPipe(v3, (int)v12); /*0x779b27*/
  }
  HashTable::DestroyHashTableINIClass((void **)v3); /*0x779b30*/
  v12[0] = &off_7E1668; /*0x779b39*/
  return BufferIOFileClass::Dtor(v12); /*0x779b46*/
}


// ==== 0x00779B50  ObjectClass::ReadAutoLoginWOL  this=ObjectClass  sig=csp ====
char **__thiscall WOL_ReadAutoLogin(char **this)
{
  void *v3; // [esp+8h] [ebp-A4h] BYREF
  void *v4; // [esp+Ch] [ebp-A0h] BYREF
  void *v5; // [esp+10h] [ebp-9Ch] BYREF
  void *v6[4]; // [esp+14h] [ebp-98h] BYREF
  _DWORD v7[3]; // [esp+24h] [ebp-88h] BYREF
  _DWORD v8[6]; // [esp+30h] [ebp-7Ch] BYREF
  char v9; // [esp+48h] [ebp-64h]
  int v10; // [esp+4Ch] [ebp-60h]
  int v11; // [esp+50h] [ebp-5Ch]
  _DWORD v12[22]; // [esp+54h] [ebp-58h] BYREF

  BufferIOFile::Constructor(v12, MEMORY[0x849F8C]); /*0x779b63*/
  if ( File::IsReady(v12, 0) ) /*0x779b6f*/
  {
    v7[0] = &vt_GenericNode; /*0x779b8e*/
    v8[0] = &vt_GenericNode; /*0x779b92*/
    v6[1] = 0; /*0x779b9a*/
    v6[2] = 0; /*0x779b9f*/
    v7[1] = 0; /*0x779ba3*/
    v7[2] = 0; /*0x779ba7*/
    v8[1] = 0; /*0x779bab*/
    v8[2] = 0; /*0x779baf*/
    LinkedList::Prepend(v7, (int)v8); /*0x779bbb*/
    v6[3] = &vt_List_INIClass_INISection; /*0x779bc4*/
    memset(&v8[3], 0, 12); /*0x779bd2*/
    v9 = 0; /*0x779bde*/
    v10 = 0; /*0x779be2*/
    v11 = 0; /*0x779be6*/
    v6[0] = &vt_INIClass; /*0x779bea*/
    FileStraw::Open(v6, (int)v12, 0); /*0x779bf2*/
    CCFileClass::Close(v12); /*0x779bfb*/
    unknown_libname_73(&v3); /*0x779c04*/
    String::Assign((char **)&v4, MEMORY[0x84A120]); /*0x779c12*/
    String::Assign((char **)&v5, MEMORY[0x84A13C]); /*0x779c20*/
    INIClass::ReadString(v6, (char **)&v5, (char **)&v4, (char **)&v3, (int)&v3); /*0x779c3d*/
    DeleteAndZero(&v5); /*0x779c46*/
    DeleteAndZero(&v4); /*0x779c4f*/
    String::AssignFromPtr(this, (const char **)&v3); /*0x779c5b*/
    DeleteAndZero(&v3); /*0x779c64*/
    HashTable::DestroyHashTableINIClass(v6); /*0x779c6d*/
  }
  else
  {
    String::Assign(this, 0); /*0x779b7b*/
  }
  v12[0] = &off_7E1668; /*0x779c76*/
  BufferIOFileClass::Dtor(v12); /*0x779c7e*/
  return this; /*0x779c85*/
}


// ==== 0x00779C90  ObjectClass::ReadSettingsWOL  this=ObjectClass  sig=csp ====
int __thiscall ReadSettingsWOL(ObjectClass *this)
{
  char *a2; // [esp+8h] [ebp-A0h] BYREF
  char *a1; // [esp+Ch] [ebp-9Ch] BYREF
  char v5[4]; // [esp+10h] [ebp-98h] BYREF
  int v6; // [esp+14h] [ebp-94h]
  int v7; // [esp+18h] [ebp-90h]
  void **v8; // [esp+1Ch] [ebp-8Ch]
  _DWORD v9[3]; // [esp+20h] [ebp-88h] BYREF
  _DWORD v10[6]; // [esp+2Ch] [ebp-7Ch] BYREF
  char v11; // [esp+44h] [ebp-64h]
  int v12; // [esp+48h] [ebp-60h]
  int v13; // [esp+4Ch] [ebp-5Ch]
  _DWORD v14[22]; // [esp+50h] [ebp-58h] BYREF

  BufferIOFile::Constructor(v14, (char *)&stru_849F20.health); /*0x779ca3*/
  if ( !File::IsReady(v14, 0) ) /*0x779caf*/
  {
    FileClass::Close(v14); /*0x779cbc*/
    CCFileClass::Close(v14); /*0x779cc5*/
    CCFileClass::Reopen(v14, (char *)&stru_849F20.health, (CDFileClass *)1); /*0x779cd5*/
  }
  v9[0] = &vt_GenericNode; /*0x779ce3*/
  v10[0] = &vt_GenericNode; /*0x779ce7*/
  v6 = 0; /*0x779cef*/
  v7 = 0; /*0x779cf4*/
  v9[1] = 0; /*0x779cf8*/
  v9[2] = 0; /*0x779cfc*/
  v10[1] = 0; /*0x779d00*/
  v10[2] = 0; /*0x779d04*/
  LinkedList::Prepend(v9, (int)v10); /*0x779d10*/
  v8 = &vt_List_INIClass_INISection; /*0x779d19*/
  memset(&v10[3], 0, 12); /*0x779d22*/
  v11 = 0; /*0x779d2e*/
  v12 = 0; /*0x779d32*/
  v13 = 0; /*0x779d36*/
  *(_DWORD *)v5 = &vt_INIClass; /*0x779d3a*/
  if ( File::IsReady(v14, 0) ) /*0x779d42*/
  {
    FileStraw::Open(v5, (int)v14, 0); /*0x779d55*/
    String::Assign(&a2, (const char *)stru_84A11C.headNode); /*0x779d63*/
    String::Assign(&a1, stru_84A11C.__pad_20); /*0x779d71*/
    INIClass::SetStringOrEmpty(v5, &a1, &a2, this); /*0x779d85*/
    DeleteAndZero((int)&a1); /*0x779d8e*/
    DeleteAndZero((int)&a2); /*0x779d97*/
    INIClass::SaveToPipe(v5, (int)v14); /*0x779da5*/
  }
  HashTable::DestroyHashTableINIClass((void **)v5); /*0x779dae*/
  v14[0] = &off_7E1668; /*0x779db7*/
  return BufferIOFileClass::Dtor(v14); /*0x779dc4*/
}


// ==== 0x00779DD0  ObjectClass::LoadConfigWOL  this=ObjectClass  sig=csp ====
char **__thiscall WOL_LoadConfig(char **this)
{
  void *v3; // [esp+8h] [ebp-A4h] BYREF
  void *v4; // [esp+Ch] [ebp-A0h] BYREF
  void *v5; // [esp+10h] [ebp-9Ch] BYREF
  void *v6[4]; // [esp+14h] [ebp-98h] BYREF
  _DWORD v7[3]; // [esp+24h] [ebp-88h] BYREF
  _DWORD v8[6]; // [esp+30h] [ebp-7Ch] BYREF
  char v9; // [esp+48h] [ebp-64h]
  int v10; // [esp+4Ch] [ebp-60h]
  int v11; // [esp+50h] [ebp-5Ch]
  _DWORD v12[22]; // [esp+54h] [ebp-58h] BYREF

  BufferIOFile::Constructor(v12, MEMORY[0x849F8C]); /*0x779de3*/
  if ( File::IsReady(v12, 0) ) /*0x779def*/
  {
    v7[0] = &vt_GenericNode; /*0x779e0e*/
    v8[0] = &vt_GenericNode; /*0x779e12*/
    v6[1] = 0; /*0x779e1a*/
    v6[2] = 0; /*0x779e1f*/
    v7[1] = 0; /*0x779e23*/
    v7[2] = 0; /*0x779e27*/
    v8[1] = 0; /*0x779e2b*/
    v8[2] = 0; /*0x779e2f*/
    LinkedList::Prepend(v7, (int)v8); /*0x779e3b*/
    v6[3] = &vt_List_INIClass_INISection; /*0x779e44*/
    memset(&v8[3], 0, 12); /*0x779e52*/
    v9 = 0; /*0x779e5e*/
    v10 = 0; /*0x779e62*/
    v11 = 0; /*0x779e66*/
    v6[0] = &vt_INIClass; /*0x779e6a*/
    FileStraw::Open(v6, (int)v12, 0); /*0x779e72*/
    CCFileClass::Close(v12); /*0x779e7b*/
    unknown_libname_73(&v3); /*0x779e84*/
    String::Assign((char **)&v4, MEMORY[0x84A14C]); /*0x779e92*/
    String::Assign((char **)&v5, MEMORY[0x84A13C]); /*0x779ea0*/
    INIClass::ReadString(v6, (char **)&v5, (char **)&v4, (char **)&v3, (int)&v3); /*0x779ebd*/
    DeleteAndZero(&v5); /*0x779ec6*/
    DeleteAndZero(&v4); /*0x779ecf*/
    String::AssignFromPtr(this, (const char **)&v3); /*0x779edb*/
    DeleteAndZero(&v3); /*0x779ee4*/
    HashTable::DestroyHashTableINIClass(v6); /*0x779eed*/
  }
  else
  {
    String::Assign(this, 0); /*0x779dfb*/
  }
  v12[0] = &off_7E1668; /*0x779ef6*/
  BufferIOFileClass::Dtor(v12); /*0x779efe*/
  return this; /*0x779f05*/
}


// ==== 0x00779F10  ObjectClass::SavePersonaConfigWOL  this=ObjectClass  sig=csp ====
int __thiscall SavePersonaConfigWOL(ObjectClass *this)
{
  char *a2; // [esp+8h] [ebp-A0h] BYREF
  char *a1; // [esp+Ch] [ebp-9Ch] BYREF
  char v5[4]; // [esp+10h] [ebp-98h] BYREF
  int v6; // [esp+14h] [ebp-94h]
  int v7; // [esp+18h] [ebp-90h]
  void **v8; // [esp+1Ch] [ebp-8Ch]
  _DWORD v9[3]; // [esp+20h] [ebp-88h] BYREF
  _DWORD v10[6]; // [esp+2Ch] [ebp-7Ch] BYREF
  char v11; // [esp+44h] [ebp-64h]
  int v12; // [esp+48h] [ebp-60h]
  int v13; // [esp+4Ch] [ebp-5Ch]
  _DWORD v14[22]; // [esp+50h] [ebp-58h] BYREF

  BufferIOFile::Constructor(v14, (char *)&stru_849F20.health); /*0x779f23*/
  if ( !File::IsReady(v14, 0) ) /*0x779f2f*/
  {
    FileClass::Close(v14); /*0x779f3c*/
    CCFileClass::Close(v14); /*0x779f45*/
    CCFileClass::Reopen(v14, (char *)&stru_849F20.health, (CDFileClass *)1); /*0x779f55*/
  }
  v9[0] = &vt_GenericNode; /*0x779f63*/
  v10[0] = &vt_GenericNode; /*0x779f67*/
  v6 = 0; /*0x779f6f*/
  v7 = 0; /*0x779f74*/
  v9[1] = 0; /*0x779f78*/
  v9[2] = 0; /*0x779f7c*/
  v10[1] = 0; /*0x779f80*/
  v10[2] = 0; /*0x779f84*/
  LinkedList::Prepend(v9, (int)v10); /*0x779f90*/
  v8 = &vt_List_INIClass_INISection; /*0x779f99*/
  memset(&v10[3], 0, 12); /*0x779fa2*/
  v11 = 0; /*0x779fae*/
  v12 = 0; /*0x779fb2*/
  v13 = 0; /*0x779fb6*/
  *(_DWORD *)v5 = &vt_INIClass; /*0x779fba*/
  if ( File::IsReady(v14, 0) ) /*0x779fc2*/
  {
    FileStraw::Open(v5, (int)v14, 0); /*0x779fd5*/
    String::Assign(&a2, (const char *)&stru_84A11C.unknown30); /*0x779fe3*/
    String::Assign(&a1, stru_84A11C.__pad_20); /*0x779ff1*/
    INIClass::SetStringOrEmpty(v5, &a1, &a2, this); /*0x77a005*/
    DeleteAndZero((int)&a1); /*0x77a00e*/
    DeleteAndZero((int)&a2); /*0x77a017*/
    INIClass::SaveToPipe(v5, (int)v14); /*0x77a025*/
  }
  HashTable::DestroyHashTableINIClass((void **)v5); /*0x77a02e*/
  v14[0] = &off_7E1668; /*0x77a037*/
  return BufferIOFileClass::Dtor(v14); /*0x77a044*/
}


// ==== 0x0077A080  ObjectClass::SaveProfileWOL  this=rc_ptr  sig=csp ====
void __thiscall SaveProfileWOL(int this, ObjectClass *aP1)
{
  CampaignScore *v3; // eax
  char *v4; // eax
  ObjectClass aP2; // [esp+8h] [ebp-ACh] BYREF

  aP2.ambientSoundController[4] = 0; /*0x77a090*/
  LOBYTE(aP2.customSound_controller[0]) = 0; /*0x77a094*/
  ReadRegistryOptionsWOL(&aP2.ambientSoundController[4]); /*0x77a098*/
  if ( *(_BYTE *)(this + 8) ) /*0x77a09d*/
  {
    String::AssignFromPtr((char **)&aP2.__pad_0[4], (const char **)aP1); /*0x77a0b3*/
    if ( String::Length((const char **)aP1) ) /*0x77a0ba*/
    {
      String::ToLower((const char **)&aP2.__pad_0[4]); /*0x77a0d8*/
      if ( !Flag::IsNot2(&aP2.ambientSoundController[4]) ) /*0x77a0e8*/
      {
LABEL_10:
        DeleteAndZero((void **)&aP2.__pad_0[4]); /*0x77a484*/
        return; /*0x77a488*/
      }
    }
    else
    {
      String::Reassign((char **)&aP2.__pad_0[4], (AbstractClass *)&stru_B73590); /*0x77a0cd*/
    }
    BufferIOFile::Constructor(&aP2.customSound_controller[1], MEMORY[0x849F8C]); /*0x77a0f7*/
    if ( !File::IsReady(&aP2.customSound_controller[1], 0) ) /*0x77a101*/
    {
      FileClass::Close(&aP2.customSound_controller[1]); /*0x77a10e*/
      CCFileClass::Close(&aP2.customSound_controller[1]); /*0x77a117*/
      CCFileClass::Reopen(&aP2.customSound_controller[1], MEMORY[0x849F8C], (CDFileClass *)1); /*0x77a127*/
    }
    if ( File::IsReady(&aP2.customSound_controller[1], 0) ) /*0x77a131*/
    {
      aP2.referenceCount = (int)&vt_GenericNode; /*0x77a147*/
      aP2.owningHouseIndex = (int)&vt_GenericNode; /*0x77a14b*/
      aP2.uniqueId = 0; /*0x77a153*/
      aP2.abstractFlags = 0; /*0x77a158*/
      aP2.NeedsSaveOrLink = 0; /*0x77a15c*/
      aP2.objectTypeFlags = 0; /*0x77a160*/
      aP2.fallRate = 0; /*0x77a164*/
      aP2.nextObject = 0; /*0x77a168*/
      aP2.nextArrayIndex = (int)&vt_GenericList; /*0x77a16c*/
      LinkedList::Prepend(&aP2.referenceCount, (int)&aP2.owningHouseIndex); /*0x77a174*/
      aP2.nextArrayIndex = (int)&vt_List_INIClass_INISection; /*0x77a183*/
      memset(&aP2.attachedTag, 0, 13); /*0x77a18b*/
      aP2.ambientSoundController[2] = 0; /*0x77a19b*/
      aP2.ambientSoundController[3] = 0; /*0x77a19f*/
      *(_DWORD *)&aP2.__pad_0[12] = &vt_INIClass; /*0x77a1a3*/
      FileStraw::Open(&aP2.__pad_0[12], (int)&aP2.customSound_controller[1], 0); /*0x77a1ab*/
      String::Assign((char **)&aP2, MEMORY[0x849F84]); /*0x77a1b9*/
      INIClass::SetStringOrEmpty(&aP2.__pad_0[12], (char **)&aP2.__pad_0[4], (char **)&aP2, (char **)(this + 12)); /*0x77a1d0*/
      DeleteAndZero((void **)&aP2); /*0x77a1d9*/
      String::Assign((char **)&aP2, MEMORY[0x849F7C]); /*0x77a1e7*/
      INIClass::SetIntFormat(&aP2.__pad_0[12], (char **)&aP2.__pad_0[4], &aP2, *(_DWORD *)(this + 16), 0); /*0x77a1ff*/
      DeleteAndZero((void **)&aP2); /*0x77a208*/
      String::Assign((char **)&aP2, (const char *)&MEMORY[0x849F9C].unknown30); /*0x77a216*/
      INIClass::ReadBool3(&aP2.__pad_0[12], (char **)&aP2.__pad_0[4], (char **)&aP2, *(_BYTE *)(this + 20)); /*0x77a22d*/
      DeleteAndZero((void **)&aP2); /*0x77a236*/
      String::Assign((char **)&aP2, g_INI_Key_Country.__pad_0); /*0x77a244*/
      INIClass::SetIntFormat(&aP2.__pad_0[12], (char **)&aP2.__pad_0[4], &aP2, *(_DWORD *)(this + 28), 0); /*0x77a25c*/
      DeleteAndZero((void **)&aP2); /*0x77a265*/
      String::Assign((char **)&aP2, stru_81B138.__pad_0); /*0x77a273*/
      INIClass::SetIntFormat(&aP2.__pad_0[12], (char **)&aP2.__pad_0[4], &aP2, *(_DWORD *)(this + 32), 0); /*0x77a28b*/
      DeleteAndZero((void **)&aP2); /*0x77a294*/
      String::Assign((char **)&aP2, &MEMORY[0x849F9C].__pad_20[8]); /*0x77a2a2*/
      INIClass::SetIntFormat(&aP2.__pad_0[12], (char **)&aP2.__pad_0[4], &aP2, *(_DWORD *)(this + 36), 0); /*0x77a2ba*/
      DeleteAndZero((void **)&aP2); /*0x77a2c3*/
      String::Assign((char **)&aP2, &stru_830620.__pad_579C[56300]); /*0x77a2d1*/
      INIClass::SetIntFormat(&aP2.__pad_0[12], (char **)&aP2.__pad_0[4], &aP2, *(_DWORD *)(this + 40), 0); /*0x77a2e9*/
      DeleteAndZero((void **)&aP2); /*0x77a2f2*/
      String::Assign((char **)&aP2, MEMORY[0x849F9C].__pad_20); /*0x77a300*/
      INIClass::SetIntFormat(&aP2.__pad_0[12], (char **)&aP2.__pad_0[4], &aP2, *(_DWORD *)(this + 44), 0); /*0x77a318*/
      DeleteAndZero((void **)&aP2); /*0x77a321*/
      String::Assign((char **)&aP2, (const char *)&MEMORY[0x849F9C].sectionHead[2]); /*0x77a32f*/
      INIClass::SetIntFormat(&aP2.__pad_0[12], (char **)&aP2.__pad_0[4], &aP2, *(_DWORD *)(this + 48), 0); /*0x77a347*/
      DeleteAndZero((void **)&aP2); /*0x77a350*/
      String::Assign((char **)&aP2, (const char *)&MEMORY[0x849F9C].headNode[2]); /*0x77a35e*/
      INIClass::SetIntFormat(&aP2.__pad_0[12], (char **)&aP2.__pad_0[4], &aP2, *(_DWORD *)(this + 52), 0); /*0x77a376*/
      DeleteAndZero((void **)&aP2); /*0x77a37f*/
      String::Assign((char **)&aP2, MEMORY[0x849F9C].__pad_0); /*0x77a38d*/
      INIClass::ReadBool3(&aP2.__pad_0[12], (char **)&aP2.__pad_0[4], (char **)&aP2, *(_BYTE *)(this + 56)); /*0x77a3a4*/
      DeleteAndZero((void **)&aP2); /*0x77a3ad*/
      unknown_libname_73(&aP2.__pad_0[8]); /*0x77a3b6*/
      ConvertDateMonthNames((wchar_t **)(this + 60), (void **)&aP2.__pad_0[8]); /*0x77a3c2*/
      String::Assign((char **)&aP2, MEMORY[0x849F70]); /*0x77a3d0*/
      INIClass::SetStringOrEmpty(&aP2.__pad_0[12], (char **)&aP2.__pad_0[4], (char **)&aP2, (char **)&aP2.__pad_0[8]); /*0x77a3e8*/
      DeleteAndZero((void **)&aP2); /*0x77a3f1*/
      DeleteAndZero::Alt2((void **)&aP2.__pad_0[8]); /*0x77a3fa*/
      v3 = WideString::GetOrEmpty_Alt((wchar_t **)(this + 64)); /*0x77a402*/
      v4 = ToWideStringChar(v3->__pad_0); /*0x77a409*/
      String::Assign_Bool((void **)&aP2.__pad_0[8], v4); /*0x77a413*/
      String::Assign((char **)&aP2, MEMORY[0x849F64]); /*0x77a421*/
      INIClass::SetStringOrEmpty(&aP2.__pad_0[12], (char **)&aP2.__pad_0[4], (char **)&aP2, (char **)&aP2.__pad_0[8]); /*0x77a439*/
      DeleteAndZero((void **)&aP2); /*0x77a442*/
      INIClass::SaveToPipe(&aP2.__pad_0[12], (int)&aP2.customSound_controller[1]); /*0x77a450*/
      CCFileClass::Close(&aP2.customSound_controller[1]); /*0x77a459*/
      *(_BYTE *)(this + 8) = 0; /*0x77a462*/
      DeleteAndZero((void **)&aP2.__pad_0[8]); /*0x77a465*/
      HashTable::DestroyHashTableINIClass((void **)&aP2.__pad_0[12]); /*0x77a46e*/
    }
    aP2.customSound_controller[1] = (int)&off_7E1668; /*0x77a477*/
    BufferIOFileClass::Dtor(&aP2.customSound_controller[1]); /*0x77a47f*/
    goto LABEL_10; /*0x77a47f*/
  }
}


// ==== 0x0077A4A0  WOLOption::SetValue  this=rc_ptr  sig=csp ====
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
__int16 __thiscall WOLPersona::FormatDateTime(int this)
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
  SafeDelete::Ptr((void **)(this + 64)); /*0x77a4f8*/
  String::Wrapper5to4((int)String, 16, (int)unk_84A168, (int)v2); /*0x77a50a*/
  v3 = atoi(String); /*0x77a519*/
  String::Wrapper5to4((int)String, 16, (int)MEMORY[0x817F6C], (int)v2); /*0x77a528*/
  switch ( v3 ) /*0x77a533*/
  {
    case 1: /*0x77a533*/
      v9 = 609; /*0x77a535*/
LABEL_26:
      StringCSF = GetStringCSF(unk_84A0C4, 0, aDRa2mdpostWolp, v9); /*0x77a65e*/
      break; /*0x77a66a*/
    case 2: /*0x77a533*/
      StringCSF = GetStringCSF(unk_84A0AC, 0, aDRa2mdpostWolp, 611); /*0x77a555*/
      break;
    case 3: /*0x77a533*/
      StringCSF = GetStringCSF(unk_84A098, 0, aDRa2mdpostWolp, 613); /*0x77a570*/
      break;
    case 4: /*0x77a533*/
      StringCSF = GetStringCSF(unk_84A084, 0, aDRa2mdpostWolp, 615); /*0x77a58b*/
      break;
    case 5: /*0x77a533*/
      StringCSF = GetStringCSF(unk_84A074, 0, aDRa2mdpostWolp, 617); /*0x77a5a6*/
      break;
    case 6: /*0x77a533*/
      StringCSF = GetStringCSF(unk_84A060, 0, aDRa2mdpostWolp, 619); /*0x77a5c1*/
      break;
    case 7: /*0x77a533*/
      StringCSF = GetStringCSF(unk_84A04C, 0, aDRa2mdpostWolp, 621); /*0x77a5dc*/
      break;
    case 8: /*0x77a533*/
      StringCSF = GetStringCSF(unk_84A038, 0, aDRa2mdpostWolp, 623); /*0x77a5f7*/
      break;
    case 9: /*0x77a533*/
      StringCSF = GetStringCSF(MEMORY[0x84A020], 0, aDRa2mdpostWolp, 625); /*0x77a60f*/
      break;
    case 10: /*0x77a533*/
      StringCSF = GetStringCSF(MEMORY[0x84A00C], 0, aDRa2mdpostWolp, 627); /*0x77a627*/
      break;
    case 11: /*0x77a533*/
      StringCSF = GetStringCSF(unk_849FF4, 0, aDRa2mdpostWolp, 629); /*0x77a63f*/
      break;
    case 12: /*0x77a533*/
      StringCSF = GetStringCSF(unk_849FDC, 0, aDRa2mdpostWolp, 631); /*0x77a657*/
      break;
    default:
      v9 = 633; /*0x77a659*/
      goto LABEL_26; /*0x77a659*/
  }
  WideString::Reassign((void **)(this + 64), StringCSF); /*0x77a66f*/
  WString::Append((wchar_t **)(this + 64), (wchar_t *)stru_82083C); /*0x77a67e*/
  v5 = CharToWideString(String); /*0x77a687*/
  WString::Append((wchar_t **)(this + 64), (wchar_t *)v5); /*0x77a68f*/
  WString::Append((wchar_t **)(this + 64), (wchar_t *)stru_82083C); /*0x77a69b*/
  String::Wrapper5to4((int)String, 16, (int)unk_84A164, (int)v2); /*0x77a6ad*/
  v6 = CharToWideString(String); /*0x77a6b9*/
  WString::Append((wchar_t **)(this + 64), (wchar_t *)v6); /*0x77a6c1*/
  v12[0] = 0; /*0x77a6d3*/
  String::Wrapper5to4((int)v12, 64, (int)MEMORY[0x84A158], (int)v2); /*0x77a6d8*/
  v7 = CharToWideString(v12); /*0x77a6e4*/
  result = WideString::Reassign((void **)(this + 60), (wchar_t *)v7); /*0x77a6ed*/
  *(_BYTE *)(this + 8) = 1; /*0x77a6f3*/
  return result; /*0x77a6f2*/
}


// ==== 0x0077A700  GadgetClass::TrackState  this=rc_ptr  sig=csp ====
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
char __thiscall sub_77A760(_BYTE *this, char a2)
{
  char result; // al

  result = a2; /*0x77a760*/
  if ( a2 != this->attachedBomb ) /*0x77a769*/
  {
    this->attachedBomb = a2; /*0x77a76b*/
    this->vtable3 = 1; /*0x77a76e*/
  }
  return result; /*0x77a772*/
}


// ==== 0x0077A780  ObjectClass::MainLobbyDlgProcWOL_Helper_77A780  this=rc_ptr  sig=csp ====
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


// ==== 0x0077A7A0  ObjectClass::MainLobbyDlgProcWOL_Helper_77A7A0  this=rc_ptr  sig=csp ====
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
bool __thiscall sub_77A840(_DWORD *this, int a2)
{
  return *(_DWORD *)(a2 + 28) != this->q024 || *(_DWORD *)(a2 + 16) != this->q028; /*0x77a84d*/
}


// ==== 0x0077A870  ObjectClass::Event_Process_77A870  this=ObjectClass  sig=csp ====
int __thiscall sub_77A870(int this, int a2)
{
  int result; // eax

  result = *(_DWORD *)(this + 44); /*0x77a870*/
  if ( result != -1 ) /*0x77a876*/
  {
    *(_BYTE *)(this + 8) = 1; /*0x77a87c*/
    result += a2; /*0x77a880*/
    *(_DWORD *)(this + 44) = result; /*0x77a882*/
  }
  return result; /*0x77a885*/
}


// ==== 0x0077A890  ObjectClass::Event_Process_77A890  this=ObjectClass  sig=csp ====
int __thiscall sub_77A890(int this, int a2)
{
  int result; // eax

  result = *(_DWORD *)(this + 48); /*0x77a890*/
  if ( result != -1 ) /*0x77a896*/
  {
    *(_BYTE *)(this + 8) = 1; /*0x77a89c*/
    result += a2; /*0x77a8a0*/
    *(_DWORD *)(this + 48) = result; /*0x77a8a2*/
  }
  return result; /*0x77a8a5*/
}


// ==== 0x0077A8B0  ObjectClass::Event_Process_77A8B0  this=ObjectClass  sig=csp ====
int __thiscall sub_77A8B0(int this, int a2)
{
  int result; // eax

  result = *(_DWORD *)(this + 52); /*0x77a8b0*/
  if ( result != -1 ) /*0x77a8b6*/
  {
    *(_BYTE *)(this + 8) = 1; /*0x77a8bc*/
    result += a2; /*0x77a8c0*/
    *(_DWORD *)(this + 52) = result; /*0x77a8c2*/
  }
  return result; /*0x77a8c5*/
}


// ==== 0x0077A8D0  MainLobbyDlgProcWOL_Get  this=-  sig=csp ====
void __fastcall MainLobbyDlgProcWOL_Get(HWND hDlg, char a2)
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
    SendMessageA(DlgItem, 0x4B4u, 0, (LPARAM)&MEMORY[0x889F64]); /*0x77a8fe*/
    InvalidateRect(DlgItem, 0, 0); /*0x77a905*/
  }
  v4 = GetDlgItem(hDlg, 1775); /*0x77a911*/
  SendMessageA(v4, 0x4B2u, 0, (LPARAM)&MEMORY[0x887734]); /*0x77a920*/
  StringCSF = GetStringCSF(unk_84A16C, 0, aDRa2mdpostWolp, 892); /*0x77a933*/
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
void __thiscall FillPersonaInfoWOL(int this, HWND hDlg, ObjectClass *aP2, wchar_t **a3)
{
  HWND v4; // ebx
  ObjectClass *DlgItem; // edi
  LRESULT v6; // eax
  const char **v7; // ebp
  char *v8; // eax
  LRESULT v9; // ebp
  char *v10; // eax
  CampaignScore *v11; // eax
  LRESULT v12; // ebp
  wchar_t *StringCSF; // eax
  CampaignScore *v14; // eax
  CampaignScore *v15; // eax
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
  CampaignScore *v34; // eax
  CampaignScore *v35; // eax
  const wchar_t *v36; // edx
  CampaignScore *v37; // eax
  HWND v38; // ebp
  CampaignScore *v39; // eax
  CampaignScore *v40; // eax
  const wchar_t *v41; // edx
  CampaignScore *v42; // eax
  HWND v43; // ebp
  CampaignScore *v44; // eax
  CampaignScore *v45; // eax
  const wchar_t *v46; // edx
  wchar_t **v47; // eax
  CampaignScore *v48; // eax
  HWND v49; // ebp
  CampaignScore *v50; // eax
  CampaignScore *v51; // eax
  const wchar_t *v52; // edx
  CampaignScore *v53; // eax
  HWND v54; // ebp
  CampaignScore *v55; // eax
  const char **v56; // ebp
  wchar_t *v57; // eax
  GameSetup *v58; // edi
  unsigned int v59; // eax
  wchar_t *v60; // edi
  CampaignScore *v61; // eax
  HWND v62; // eax
  HWND v63; // eax
  ObjectClass **v64; // ebp
  wchar_t *v65; // eax
  size_t v66; // eax
  char *v67; // edi
  const wchar_t *v68; // eax
  wchar_t *v69; // edi
  wchar_t *v70; // eax
  HWND v71; // eax
  wchar_t *v72; // ebp
  HWND v73; // eax
  ObjectClass *v74; // [esp-8h] [ebp-24h]
  char *v75; // [esp-4h] [ebp-20h]
  wchar_t *v76; // [esp-4h] [ebp-20h]
  CampaignScore *v77; // [esp+0h] [ebp-1Ch]
  void *v79; // [esp+14h] [ebp-8h] BYREF
  CampaignScore *v80; // [esp+18h] [ebp-4h]

  v4 = hDlg; /*0x77a9f8*/
  v80 = 0; /*0x77aa0b*/
  if ( (_BYTE)a3 ) /*0x77aa13*/
  {
    DlgItem = (ObjectClass *)GetDlgItem(hDlg, 1576); /*0x77aa27*/
    v6 = SendMessageA((HWND)DlgItem, 0x4CEu, 0, 0); /*0x77aa31*/
    v7 = (const char **)aP2; /*0x77aa33*/
    LOBYTE(a3) = v6 != 0; /*0x77aa3b*/
    if ( !String::Length((const char **)aP2) || (_BYTE)a3 ) /*0x77aa4f*/
    {
      CharStringToWide((ObjectClass *)&a3, v7); /*0x77aa98*/
      if ( !String::Length(v7) /*0x77aac1*/
        || (v11 = WideString::GetOrEmpty_Alt((wchar_t **)&a3),
            v12 = SendMessageA((HWND)DlgItem, 0x4BFu, 0xFFFFFFFF, (LPARAM)v11),
            v12 == -1) )
      {
        StringCSF = GetStringCSF(aGuiDefault, 0, (CampaignScore *)"D:\\ra2mdpost\\WOLPersonaInformation.cpp", 921); /*0x77aad4*/
        WideString::Assign_Alt((void **)&a3, StringCSF); /*0x77aade*/
        v14 = WideString::GetOrEmpty_Alt((wchar_t **)&a3); /*0x77aae7*/
        v12 = SendMessageA((HWND)DlgItem, 0x4BFu, 0xFFFFFFFF, (LPARAM)v14); /*0x77aaf7*/
      }
      SendMessageA((HWND)DlgItem, 0x14Eu, v12, 0); /*0x77ab02*/
      if ( v12 == -1 ) /*0x77ab07*/
      {
        v15 = WideString::GetOrEmpty_Alt((wchar_t **)&a3); /*0x77ab0d*/
        SendMessageA((HWND)DlgItem, 0x4B2u, 0, (LPARAM)v15); /*0x77ab1b*/
      }
      DeleteAndZero::Alt((void **)&a3); /*0x77ab21*/
    }
    else
    {
      v8 = String::GetOrEmpty_Alt((char **)v7); /*0x77aa53*/
      v9 = SendMessageA((HWND)DlgItem, 0x4B9u, 0xFFFFFFFF, (LPARAM)v8); /*0x77aa63*/
      SendMessageA((HWND)DlgItem, 0x14Eu, v9, 0); /*0x77aa6e*/
      if ( v9 == -1 ) /*0x77aa73*/
      {
        v10 = String::GetOrEmpty_Alt((char **)aP2); /*0x77aa7d*/
        SendMessageA((HWND)DlgItem, 0x4B4u, 0, (LPARAM)v10); /*0x77aa8b*/
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
    a3 = (wchar_t **)SendMessageA(v19, 0x146u, 0, 0); /*0x77ab74*/
    if ( (int)a3 > 0 ) /*0x77ab7a*/
    {
      while ( SendMessageA(v20, 0x150u, v21, 0) != *(_DWORD *)(this + 16) ) /*0x77ab8e*/
      {
        if ( (int)++v21 >= (int)a3 ) /*0x77ab97*/
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
    a3 = (wchar_t **)SendMessageA(v22, 0x146u, 0, 0); /*0x77abc6*/
    if ( (int)a3 > 0 ) /*0x77abcc*/
    {
      while ( SendMessageA(v23, 0x150u, v24, 0) != *(_DWORD *)(this + 28) ) /*0x77abe0*/
      {
        if ( (int)++v24 >= (int)a3 ) /*0x77abe9*/
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
    a3 = (wchar_t **)SendMessageA(v26, 0x146u, 0, 0); /*0x77ac1a*/
    if ( (int)a3 > 0 ) /*0x77ac20*/
    {
      while ( SendMessageA(v27, 0x150u, v28, 0) != *(_DWORD *)(this + 32) ) /*0x77ac34*/
      {
        if ( (int)++v28 >= (int)a3 ) /*0x77ac3d*/
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
  v30 = GetStringCSF(&unk_84A16C, 0, (CampaignScore *)"D:\\ra2mdpost\\WOLPersonaInformation.cpp", 987); /*0x77ac83*/
  WideString::Assign((wchar_t **)&hDlg, (CampaignScore *)v30); /*0x77ac8d*/
  v31 = *(const wchar_t **)(this + 36); /*0x77ac96*/
  if ( v31 == (const wchar_t *)-1 ) /*0x77ac9c*/
  {
    p_hDlg = (wchar_t **)&hDlg; /*0x77ac9e*/
  }
  else
  {
    v80 = (CampaignScore *)1; /*0x77aca8*/
    p_hDlg = FormatWideString((wchar_t **)&v79, v31); /*0x77acb0*/
  }
  a3 = p_hDlg; /*0x77acbb*/
  v33 = v25(v4, 1780); /*0x77acc5*/
  v34 = WideString::GetOrEmpty_Alt(a3); /*0x77acc7*/
  SendMessageA(v33, 0x4B2u, 0, (LPARAM)v34); /*0x77acd5*/
  if ( ((unsigned __int8)v80 & 1) != 0 ) /*0x77acdc*/
  {
    v35 = v80; /*0x77acde*/
    LOBYTE(v35) = (unsigned __int8)v80 & 0xFE; /*0x77ace6*/
    v80 = v35; /*0x77ace8*/
    DeleteAndZero::Alt(&v79); /*0x77acec*/
  }
  v36 = *(const wchar_t **)(this + 40); /*0x77acf5*/
  if ( v36 == (const wchar_t *)-1 ) /*0x77acfb*/
  {
    a3 = (wchar_t **)&hDlg; /*0x77ad01*/
  }
  else
  {
    v37 = v80; /*0x77ad07*/
    LOBYTE(v37) = (unsigned __int8)v80 | 2; /*0x77ad0f*/
    v80 = v37; /*0x77ad11*/
    a3 = FormatWideString((wchar_t **)&v79, v36); /*0x77ad1a*/
  }
  v38 = v25(v4, 1781); /*0x77ad2a*/
  v39 = WideString::GetOrEmpty_Alt(a3); /*0x77ad2c*/
  SendMessageA(v38, 0x4B2u, 0, (LPARAM)v39); /*0x77ad3a*/
  if ( ((unsigned __int8)v80 & 2) != 0 ) /*0x77ad41*/
  {
    v40 = v80; /*0x77ad43*/
    LOBYTE(v40) = (unsigned __int8)v80 & 0xFD; /*0x77ad4b*/
    v80 = v40; /*0x77ad4d*/
    DeleteAndZero::Alt(&v79); /*0x77ad51*/
  }
  v41 = *(const wchar_t **)(this + 44); /*0x77ad5a*/
  if ( v41 == (const wchar_t *)-1 ) /*0x77ad60*/
  {
    a3 = (wchar_t **)&hDlg; /*0x77ad66*/
  }
  else
  {
    v42 = v80; /*0x77ad6c*/
    LOBYTE(v42) = (unsigned __int8)v80 | 4; /*0x77ad74*/
    v80 = v42; /*0x77ad76*/
    a3 = FormatWideString((wchar_t **)&v79, v41); /*0x77ad7f*/
  }
  v43 = v25(v4, 1776); /*0x77ad8f*/
  v44 = WideString::GetOrEmpty_Alt(a3); /*0x77ad91*/
  SendMessageA(v43, 0x4B2u, 0, (LPARAM)v44); /*0x77ad9f*/
  if ( ((unsigned __int8)v80 & 4) != 0 ) /*0x77ada6*/
  {
    v45 = v80; /*0x77ada8*/
    LOBYTE(v45) = (unsigned __int8)v80 & 0xFB; /*0x77adb0*/
    v80 = v45; /*0x77adb2*/
    DeleteAndZero::Alt(&v79); /*0x77adb6*/
  }
  v46 = *(const wchar_t **)(this + 48); /*0x77adbf*/
  if ( v46 == (const wchar_t *)-1 ) /*0x77adc5*/
  {
    v47 = (wchar_t **)&hDlg; /*0x77adc7*/
  }
  else
  {
    v48 = v80; /*0x77adcd*/
    LOBYTE(v48) = (unsigned __int8)v80 | 8; /*0x77add5*/
    v80 = v48; /*0x77add7*/
    v47 = FormatWideString((wchar_t **)&v79, v46); /*0x77addb*/
  }
  a3 = v47; /*0x77ade6*/
  v49 = v25(v4, 1777); /*0x77adf0*/
  v50 = WideString::GetOrEmpty_Alt(a3); /*0x77adf2*/
  SendMessageA(v49, 0x4B2u, 0, (LPARAM)v50); /*0x77ae00*/
  if ( ((unsigned __int8)v80 & 8) != 0 ) /*0x77ae07*/
  {
    v51 = v80; /*0x77ae09*/
    LOBYTE(v51) = (unsigned __int8)v80 & 0xF7; /*0x77ae11*/
    v80 = v51; /*0x77ae13*/
    DeleteAndZero::Alt(&v79); /*0x77ae17*/
  }
  v52 = *(const wchar_t **)(this + 52); /*0x77ae20*/
  if ( v52 == (const wchar_t *)-1 ) /*0x77ae26*/
  {
    a3 = (wchar_t **)&hDlg; /*0x77ae2c*/
  }
  else
  {
    v53 = v80; /*0x77ae32*/
    LOBYTE(v53) = (unsigned __int8)v80 | 0x10; /*0x77ae3a*/
    v80 = v53; /*0x77ae3c*/
    a3 = FormatWideString((wchar_t **)&v79, v52); /*0x77ae45*/
  }
  v54 = v25(v4, 1793); /*0x77ae55*/
  v55 = WideString::GetOrEmpty_Alt(a3); /*0x77ae57*/
  SendMessageA(v54, 0x4B2u, 0, (LPARAM)v55); /*0x77ae65*/
  if ( ((unsigned __int8)v80 & 0x10) != 0 ) /*0x77ae6c*/
    DeleteAndZero::Alt(&v79); /*0x77ae72*/
  v56 = (const char **)aP2; /*0x77ae77*/
  if ( String::Length((const char **)aP2) ) /*0x77ae7d*/
  {
    v57 = GetStringCSF(aGuiUserprofile, 0, (CampaignScore *)"D:\\ra2mdpost\\WOLPersonaInformation.cpp", 995); /*0x77ae9b*/
    WideString::Assign((wchar_t **)&a3, (CampaignScore *)v57); /*0x77aea5*/
    v58 = (GameSetup *)WideString::Length((const wchar_t **)&a3); /*0x77aeb5*/
    v59 = String::Length(v56); /*0x77aeb7*/
    v60 = (wchar_t *)__2_YAPAXI_Z(2 * ((_DWORD)v58 + v59) + 2); /*0x77aecd*/
    v75 = String::GetOrEmpty_Alt((char **)v56); /*0x77aed4*/
    v61 = WideString::GetOrEmpty((wchar_t **)&a3); /*0x77aed9*/
    swprintf(v60, (const size_t)v61, (const wchar_t *const)v75, v77); /*0x77aee0*/
    v62 = GetDlgItem(v4, 1775); /*0x77aeee*/
    SendMessageA(v62, 0x4B2u, 0, (LPARAM)v60); /*0x77aefd*/
    __3_YAXPAX_Z(v60); /*0x77af00*/
    DeleteAndZero::Alt((void **)&a3); /*0x77af0c*/
  }
  else
  {
    v63 = v25(v4, 1775); /*0x77af19*/
    SendMessageA(v63, 0x4B2u, 0, (LPARAM)&stru_87C374.__pad_579C[23588]); /*0x77af28*/
  }
  v64 = (ObjectClass **)(this + 64); /*0x77af3a*/
  a3 = (wchar_t **)(this + 60); /*0x77af47*/
  v65 = GetStringCSF(aGuiWelcomeupda, 0, (CampaignScore *)"D:\\ra2mdpost\\WOLPersonaInformation.cpp", 1005); /*0x77af4b*/
  v66 = wcslen(v65); /*0x77af51*/
  v67 = (char *)WideString::Length((const wchar_t **)(this + 60)) + v66; /*0x77af66*/
  v68 = WideString::Length((const wchar_t **)(this + 64)); /*0x77af68*/
  v69 = (wchar_t *)__2_YAPAXI_Z(2 * (int)&v67[(_DWORD)v68]); /*0x77af77*/
  if ( v69 && WideString::Length((const wchar_t **)v64) && WideString::Length((const wchar_t **)a3) ) /*0x77af8f*/
  {
    v76 = *a3; /*0x77afa1*/
    v74 = *v64; /*0x77afa2*/
    v70 = GetStringCSF(aGuiWelcomeupda, 0, (CampaignScore *)"D:\\ra2mdpost\\WOLPersonaInformation.cpp", 1007); /*0x77afb4*/
    swprintf(v69, (const size_t)v70, (const wchar_t *const)v74, (CampaignScore *)v76); /*0x77afbb*/
    v71 = GetDlgItem(v4, 1943); /*0x77afc9*/
    SendMessageA(v71, 0x4B2u, 0, (LPARAM)v69); /*0x77afd0*/
  }
  else
  {
    v72 = GetStringCSF(aGuiBlank, 0, (CampaignScore *)"D:\\ra2mdpost\\WOLPersonaInformation.cpp", 1010); /*0x77afee*/
    v73 = GetDlgItem(v4, 1943); /*0x77aff0*/
    SendMessageA(v73, 0x4B2u, 0, (LPARAM)v72); /*0x77afff*/
  }
  if ( v69 ) /*0x77b003*/
    __3_YAXPAX_Z(v69); /*0x77b006*/
  DeleteAndZero::Alt((void **)&hDlg); /*0x77b012*/
}


// ==== 0x0077B030  PlayerProfile::QueryInterface  this=PlayerProfile  sig=csp ====
PlayerProfile *__thiscall PlayerProfile::QueryInterface(void **Block, char a2)
{
  *Block = &PlayerProfile::`vftable'; /*0x77b036*/
  DeleteAndZero::Alt(Block + 16); /*0x77b03c*/
  DeleteAndZero::Alt(Block + 15); /*0x77b044*/
  DeleteAndZero(Block + 3); /*0x77b04c*/
  ReferenceCounted::Constructor(Block); /*0x77b053*/
  if ( (a2 & 1) != 0 ) /*0x77b05d*/
    __3_YAXPAX_Z(Block); /*0x77b060*/
  return (PlayerProfile *)Block; /*0x77b06a*/
}


// ==== 0x0077B070  sub_77B070  this=-  sig=ida-proto ====
int sub_77B070()
{
  MEMORY[0xB73600] = 0; /*0x77b072*/
  MEMORY[0xB73604] = 0; /*0x77b077*/
  MEMORY[0xB73608] = 0; /*0x77b07c*/
  MEMORY[0xB7360C] = 0; /*0x77b081*/
  return 0; /*0x77b086*/
}


// ==== 0x0077B090  sub_77B090  this=-  sig=ida-proto ====
void sub_77B090()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x77b09c*/
  MEMORY[0xB73618] = Math::Sqrt(v0 + v0); /*0x77b0ae*/
}


// ==== 0x0077B0C0  sub_77B0C0  this=-  sig=ida-proto ====
void sub_77B0C0()
{
  dbl_B73668 = MEMORY[0xB73618] / 60.0; /*0x77b0cc*/
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
  MEMORY[0xB73620] = 0.0174532925199433 * 60.0; /*0x77b12c*/
}


// ==== 0x0077B140  sub_77B140  this=-  sig=ida-proto ====
void sub_77B140()
{
  MEMORY[0xB735F8] = 0.0174532925199433 * 90.0; /*0x77b14c*/
}


// ==== 0x0077B160  sub_77B160  this=-  sig=ida-proto ====
__int64 sub_77B160()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(MEMORY[0xB735F8] - MEMORY[0xB73620]); /*0x77b172*/
  result = Math::RoundToInt(v0 * MEMORY[0xB73618] * 0.5); /*0x77b186*/
  dword_B73670 = result; /*0x77b18b*/
  return result; /*0x77b190*/
}


// ==== 0x0077B1A0  sub_77B1A0  this=-  sig=ida-proto ====
void sub_77B1A0()
{
  MEMORY[0xB73628] = Math::ArcTan((double)dword_B73670 * 0.00390625); /*0x77b1b7*/
}


// ==== 0x0077B1D0  sub_77B1D0  this=-  sig=ida-proto ====
void sub_77B1D0()
{
  dbl_B73640 = Math::ArcTan((double)(2 * dword_B73670) / MEMORY[0xB73618]); /*0x77b1f2*/
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
  MEMORY[0xB73610] = 0; /*0x77b232*/
  MEMORY[0xB73612] = 0; /*0x77b238*/
  return 0; /*0x77b23e*/
}


// ==== 0x0077B240  sub_77B240  this=-  sig=ida-proto ====
int sub_77B240()
{
  MEMORY[0xB73630] = 0; /*0x77b242*/
  MEMORY[0xB73634] = 0; /*0x77b247*/
  MEMORY[0xB73638] = 0; /*0x77b24c*/
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
  char **AutoLogin; // eax
  char **Config; // eax
  int v6; // edx
  int v7; // esi
  int v8; // edi
  int v9; // eax
  int v10; // ecx
  int started; // eax
  int v12; // eax
  int v13; // eax
  bool v15; // [esp+12h] [ebp-Eh]
  char v16; // [esp+13h] [ebp-Dh]
  void *v17; // [esp+14h] [ebp-Ch] BYREF
  int v18; // [esp+18h] [ebp-8h] BYREF
  char v19; // [esp+1Ch] [ebp-4h]

  while ( (*(int (__thiscall **)(int))(*(_DWORD *)MEMORY[0x887640] + 40))(MEMORY[0x887640]) < 0 ) /*0x77b2b6*/
    (*(void (__thiscall **)(int))(*(_DWORD *)MEMORY[0x887640] + 16))(MEMORY[0x887640]); /*0x77b2c0*/
  RunWOLMainLoop_Helper(); /*0x77b2d2*/
  v2 = dword_A83D14; /*0x77b2d7*/
  if ( dword_A83D14 == -1 ) /*0x77b2e0*/
    v2 = dword_A83D18; /*0x77b2e2*/
  if ( v2 == StringList::Find(&g_BuildingTypeClass_Count, g_INI_Key_INTRO) ) /*0x77b2f9*/
    Theme::QueueSong((int)&g_BuildingTypeClass_Count, -3); /*0x77b302*/
  ReadWOLAccountINI(); /*0x77b307*/
  v3 = byte_A83D22; /*0x77b30c*/
  byte_A83D22 = 1; /*0x77b312*/
  v16 = v3; /*0x77b319*/
  RunWOLMainLoop_Find(); /*0x77b31d*/
  if ( !String::Length((const char **)&g_WebBrowser) ) /*0x77b327*/
  {
    AutoLogin = ReadAutoLoginWOL((char **)&v17); /*0x77b334*/
    String::Reassign((char **)&g_WebBrowser, (const char **)AutoLogin); /*0x77b33f*/
    DeleteAndZero(&v17); /*0x77b348*/
    if ( !String::Length((const char **)&g_WebBrowser) ) /*0x77b352*/
    {
      v18 = 0; /*0x77b361*/
      v19 = 0; /*0x77b365*/
      ReadRegistryOptionsWOL(&v18); /*0x77b36a*/
      if ( Flag::IsNot2(&v18) ) /*0x77b373*/
      {
        Config = LoadConfigWOL((char **)&v17); /*0x77b380*/
        String::Reassign((char **)&g_WebBrowser, (const char **)Config); /*0x77b38b*/
        DeleteAndZero(&v17); /*0x77b394*/
      }
    }
  }
  v6 = dword_B73678; /*0x77b39d*/
  v7 = 0; /*0x77b3a3*/
  v15 = 0; /*0x77b3a5*/
  do /*0x77b527*/
  {
    if ( !MEMORY[0xA8B244] || MEMORY[0xA8B244] == 6 ) /*0x77b3b7*/
      v8 = 0; /*0x77b3c6*/
    else
      v8 = (MEMORY[0xA8B244] == 3) + 1; /*0x77b3c2*/
    if ( !v6 && v8 ) /*0x77b3ce*/
    {
      v9 = LoginFlowWOL(); /*0x77b3d0*/
      v7 = v9; /*0x77b3d5*/
      if ( v9 ) /*0x77b3d9*/
      {
        if ( v9 != 1 ) /*0x77b3dc*/
        {
LABEL_54:
          MEMORY[0xA8B238][0] = 0; /*0x77b532*/
          MEMORY[0xA8B244] = 0; /*0x77b538*/
          MEMORY[0xA8B248] = 0; /*0x77b53e*/
          HandleLogoutWOL(); /*0x77b544*/
          byte_A83D22 = v16; /*0x77b54d*/
          Dialog::CloseAll(); /*0x77b553*/
          return v7; /*0x77b561*/
        }
        dword_B73678 = v8; /*0x77b3e2*/
      }
      else
      {
        if ( !MEMORY[0xA8B244] ) /*0x77b3f0*/
        {
          MEMORY[0xA8B238][0] = 0; /*0x77b562*/
          HandleLogoutWOL(); /*0x77b568*/
          byte_A83D22 = v16; /*0x77b571*/
          Dialog::CloseAll(); /*0x77b576*/
          return 0; /*0x77b584*/
        }
        MEMORY[0xA8B244] = 0; /*0x77b3f6*/
        MEMORY[0xA8B248] = 0; /*0x77b3fc*/
      }
    }
    RunWOLMainLoop_Find(); /*0x77b402*/
    switch ( MEMORY[0xA8B244] ) /*0x77b415*/
    {
      case 0: /*0x77b415*/
        a1 = 0; /*0x77b41c*/
        v7 = RunWOLMainLoop_Read(); /*0x77b423*/
        v15 = v7 != 1; /*0x77b428*/
        break; /*0x77b42d*/
      case 1: /*0x77b415*/
      case 2: /*0x77b415*/
        if ( !a1 ) /*0x77b43b*/
        {
          started = JoinLobbyWOL(); /*0x77b432*/
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
        if ( MEMORY[0xA8B244] == 4 ) /*0x77b45f*/
          goto LABEL_42; /*0x77b45f*/
        break; /*0x77b45f*/
      case 5: /*0x77b415*/
        v7 = GameOptionsScreenWOL(); /*0x77b489*/
        a1 = 0; /*0x77b48b*/
        if ( v7 ) /*0x77b48f*/
        {
LABEL_35:
          v15 = 1; /*0x77b47b*/
        }
        else if ( MEMORY[0xA8B244] == 5 ) /*0x77b498*/
        {
          v10 = MEMORY[0xA8B248]; /*0x77b49a*/
          MEMORY[0xA8B248] = 0; /*0x77b4a0*/
          MEMORY[0xA8B244] = v10; /*0x77b4a6*/
        }
        break; /*0x77b4ac*/
      case 6: /*0x77b415*/
        v12 = RunWOLMainLoop_Init(); /*0x77b4ae*/
        v7 = v12; /*0x77b4b3*/
        a1 = 0; /*0x77b4b5*/
        if ( v12 == -2 || v12 == -1 ) /*0x77b4c3*/
          goto LABEL_54; /*0x77b4c3*/
        if ( !v12 ) /*0x77b4cb*/
LABEL_42:
          MEMORY[0xA8B244] = 0; /*0x77b4cd*/
        break; /*0x77b4cd*/
      default:
        break;
    }
    v6 = dword_B73678; /*0x77b4d3*/
    if ( v7 != 1 && dword_B73678 ) /*0x77b4e0*/
    {
      if ( !MEMORY[0xA8B244] || MEMORY[0xA8B244] == 6 ) /*0x77b4fb*/
        v13 = 0; /*0x77b508*/
      else
        v13 = (MEMORY[0xA8B244] == 3) + 1; /*0x77b505*/
      if ( dword_B73678 != v13 || v15 ) /*0x77b510*/
      {
        LOBYTE(v10) = v15; /*0x77b4ec*/
        RunWOLMainLoop_Delete(v10, dword_B73678); /*0x77b512*/
        v6 = 0; /*0x77b517*/
        dword_B73678 = 0; /*0x77b519*/
      }
    }
  }
  while ( !v15 ); /*0x77b527*/
  if ( v7 == 1 ) /*0x77b5b8*/
  {
    Dialog::CloseAll(); /*0x77b5ba*/
    return 1; /*0x77b5bf*/
  }
  else
  {
    HandleLogoutWOL(); /*0x77b5c9*/
    MEMORY[0xA8B238][0] = 0; /*0x77b5d2*/
    byte_A83D22 = v16; /*0x77b5d8*/
    MEMORY[0xA8B244] = 0; /*0x77b5de*/
    MEMORY[0xA8B248] = 0; /*0x77b5e4*/
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
  unknown_libname_73(&MEMORY[0xB73AE0]); /*0x77b8d5*/
  return atexit(unknown_libname_39); /*0x77b8e5*/
}


// ==== 0x0077B8F0  unknown_libname_39  this=-  sig=ida-proto ====
// Microsoft VisualC 2-14/net runtime
void __cdecl unknown_libname_39()
{
  DeleteAndZero(&MEMORY[0xB73AE0]); /*0x77b8f5*/
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
  g_WOL_AuthPool = 0; /*0x77b947*/
  dword_B73E14 = 0; /*0x77b94c*/
  dword_B73E18 = 0; /*0x77b951*/
  return atexit(sub_77B960); /*0x77b95c*/
}


// ==== 0x0077B960  sub_77B960  this=-  sig=ida-proto ====
void __cdecl sub_77B960()
{
  g_WOL_AuthPool = 0; /*0x77b965*/
  __3_YAXPAX_Z(dword_B73E18); /*0x77b970*/
}


// ==== 0x0077B980  sub_77B980  this=-  sig=ida-proto ====
int sub_77B980()
{
  g_WOL_ChatState = 0; /*0x77b987*/
  dword_B76AE4 = 0; /*0x77b98c*/
  g_WOL_ConnectionHandler = 0; /*0x77b991*/
  return atexit(sub_77B9A0); /*0x77b99c*/
}


// ==== 0x0077B9A0  sub_77B9A0  this=-  sig=ida-proto ====
void __cdecl sub_77B9A0()
{
  g_WOL_ChatState = 0; /*0x77b9a5*/
  __3_YAXPAX_Z(g_WOL_ConnectionHandler); /*0x77b9b0*/
}


// ==== 0x0077B9C0  sub_77B9C0  this=-  sig=ida-proto ====
int sub_77B9C0()
{
  g_WOL_State = 0; /*0x77b9c7*/
  g_WOL_StateFlags = 0; /*0x77b9cc*/
  g_WOL_ConnectionFlags = 0; /*0x77b9d1*/
  return atexit(sub_77B9E0); /*0x77b9dc*/
}


// ==== 0x0077B9E0  sub_77B9E0  this=-  sig=ida-proto ====
void __cdecl sub_77B9E0()
{
  g_WOL_State = 0; /*0x77b9e5*/
  __3_YAXPAX_Z(g_WOL_ConnectionFlags); /*0x77b9f0*/
}


// ==== 0x0077BA00  sub_77BA00  this=-  sig=ida-proto ====
int sub_77BA00()
{
  g_WOL_RequestState = 0; /*0x77ba07*/
  g_WOL_RequestToken = 0; /*0x77ba0c*/
  g_WOL_RequestFlags = 0; /*0x77ba11*/
  return atexit(sub_77BA20); /*0x77ba1c*/
}


// ==== 0x0077BA20  sub_77BA20  this=-  sig=ida-proto ====
void __cdecl sub_77BA20()
{
  g_WOL_RequestState = 0; /*0x77ba25*/
  __3_YAXPAX_Z(g_WOL_RequestFlags); /*0x77ba30*/
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
  MEMORY[0xB73B18] = -1717986918; /*0x77bc17*/
  MEMORY[0xB73B1C] = 1070176665; /*0x77bc21*/
  MEMORY[0xB73B20] = 0.8; /*0x77bc2b*/
  MEMORY[0xB73B28] = 128; /*0x77bc3f*/
  v1 = 0; /*0x77bc44*/
  do /*0x77bc49*/
  {
    ++v1; /*0x77bc46*/
    v0 >>= 1; /*0x77bc47*/
  }
  while ( v0 ); /*0x77bc49*/
  MEMORY[0xB73B08] = 0; /*0x77bc4b*/
  MEMORY[0xB73B04] = v1 - 1; /*0x77bc59*/
  MEMORY[0xB73AFC] = 0; /*0x77bc5f*/
  MEMORY[0xB73B0C] = 0; /*0x77bc65*/
  MEMORY[0xB73B00] = 1 << (v1 - 1); /*0x77bc6b*/
  MEMORY[0xB73AF8] = __2_YAPAXI_Z(4 * (1 << (v1 - 1))); /*0x77bc83*/
  memset(MEMORY[0xB73AF8], 0, 4 * MEMORY[0xB73B00]); /*0x77bc89*/
  MEMORY[0xB73B10] = (int (__thiscall *)(_DWORD))String::ComputeHash; /*0x77bc90*/
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

  v0 = MEMORY[0xB73B00]; /*0x77bcb0*/
  for ( i = 0; i < MEMORY[0xB73B00]; v0 = MEMORY[0xB73B00] ) /*0x77bcbd*/
  {
    v2 = *((_DWORD *)MEMORY[0xB73AF8] + i); /*0x77bcc4*/
    while ( v2 ) /*0x77bcc9*/
    {
      v3 = (void **)v2; /*0x77bccb*/
      v2 = *(_DWORD *)(v2 + 112); /*0x77bccd*/
      DeleteAndZero(v3); /*0x77bcd6*/
      __3_YAXPAX_Z(v3); /*0x77bcdc*/
    }
    *((_DWORD *)MEMORY[0xB73AF8] + i++) = 0; /*0x77bcef*/
  }
  v4 = MEMORY[0xB73B28]; /*0x77bd00*/
  MEMORY[0xB73AFC] = 0; /*0x77bd06*/
  if ( v0 > MEMORY[0xB73B28] ) /*0x77bd12*/
  {
    do /*0x77bdc5*/
    {
      if ( MEMORY[0xB73B0C] || v0 <= v4 ) /*0x77bd28*/
        break; /*0x77bd28*/
      v5 = (int *)MEMORY[0xB73AF8]; /*0x77bd34*/
      v6 = v0; /*0x77bd3a*/
      MEMORY[0xB73B00] = v0 >> 1; /*0x77bd3f*/
      --MEMORY[0xB73B04]; /*0x77bd4b*/
      MEMORY[0xB73AF8] = __2_YAPAXI_Z(4 * (v0 >> 1)); /*0x77bd64*/
      memset(MEMORY[0xB73AF8], 0, 4 * MEMORY[0xB73B00]); /*0x77bd6c*/
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
              v10 = MEMORY[0xB73B10](v9) & ((1 << MEMORY[0xB73B04]) - 1); /*0x77bd90*/
              v11 = *((_DWORD *)MEMORY[0xB73AF8] + v10); /*0x77bd97*/
              *((_DWORD *)MEMORY[0xB73AF8] + v10) = v9; /*0x77bd9a*/
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
      v4 = MEMORY[0xB73B28]; /*0x77bdb5*/
      v0 = MEMORY[0xB73B00]; /*0x77bdbb*/
    }
    while ( MEMORY[0xB73B00] > (unsigned int)MEMORY[0xB73B28] ); /*0x77bdc5*/
  }
  __3_YAXPAX_Z(MEMORY[0xB73AF8]); /*0x77bdd1*/
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
  dword_B77D80 = __2_YAPAXI_Z(4 * (1 << (v1 - 1))); /*0x77be53*/
  memset(dword_B77D80, 0, 4 * dword_B77D88); /*0x77be59*/
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
    v2 = *((_DWORD *)dword_B77D80 + i); /*0x77be94*/
    while ( v2 ) /*0x77be99*/
    {
      v3 = (void **)v2; /*0x77be9b*/
      v2 = *(_DWORD *)(v2 + 112); /*0x77be9d*/
      DeleteAndZero(v3); /*0x77bea6*/
      __3_YAXPAX_Z(v3); /*0x77beac*/
    }
    *((_DWORD *)dword_B77D80 + i++) = 0; /*0x77bebf*/
  }
  v4 = dword_B77DB0; /*0x77bed0*/
  dword_B77D84 = 0; /*0x77bed6*/
  if ( v0 > dword_B77DB0 ) /*0x77bee2*/
  {
    do /*0x77bf95*/
    {
      if ( byte_B77D94 || v0 <= v4 ) /*0x77bef8*/
        break; /*0x77bef8*/
      v5 = (int *)dword_B77D80; /*0x77bf04*/
      v6 = v0; /*0x77bf0a*/
      dword_B77D88 = v0 >> 1; /*0x77bf0f*/
      --dword_B77D8C; /*0x77bf1b*/
      dword_B77D80 = __2_YAPAXI_Z(4 * (v0 >> 1)); /*0x77bf34*/
      memset(dword_B77D80, 0, 4 * dword_B77D88); /*0x77bf3c*/
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
              v11 = *((_DWORD *)dword_B77D80 + v10); /*0x77bf67*/
              *((_DWORD *)dword_B77D80 + v10) = v9; /*0x77bf6a*/
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
  __3_YAXPAX_Z(dword_B77D80); /*0x77bfa1*/
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
  g_WOL_MessageConfig = 0; /*0x77c1cf*/
  byte_B76694 = 0; /*0x77c1d5*/
  g_WOL_MsgPool = 1 << (v1 - 1); /*0x77c1db*/
  g_WOL_MessageQueue = __2_YAPAXI_Z(4 * (1 << (v1 - 1))); /*0x77c1f3*/
  memset(g_WOL_MessageQueue, 0, 4 * g_WOL_MsgPool); /*0x77c1f9*/
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

  v0 = g_WOL_MsgPool; /*0x77c220*/
  for ( i = 0; i < g_WOL_MsgPool; v0 = g_WOL_MsgPool ) /*0x77c22d*/
  {
    v2 = *((_DWORD *)g_WOL_MessageQueue + i); /*0x77c234*/
    while ( v2 ) /*0x77c239*/
    {
      v3 = (void **)v2; /*0x77c23b*/
      v2 = *(_DWORD *)(v2 + 8); /*0x77c23d*/
      DeleteAndZero(v3); /*0x77c246*/
      __3_YAXPAX_Z(v3); /*0x77c24c*/
    }
    *((_DWORD *)g_WOL_MessageQueue + i++) = 0; /*0x77c25f*/
  }
  v4 = dword_B766B0; /*0x77c270*/
  g_WOL_MessageConfig = 0; /*0x77c276*/
  if ( v0 > dword_B766B0 ) /*0x77c282*/
  {
    do /*0x77c335*/
    {
      if ( byte_B76694 || v0 <= v4 ) /*0x77c298*/
        break; /*0x77c298*/
      v5 = (int *)g_WOL_MessageQueue; /*0x77c2a4*/
      v6 = v0; /*0x77c2aa*/
      g_WOL_MsgPool = v0 >> 1; /*0x77c2af*/
      --dword_B7668C; /*0x77c2bb*/
      g_WOL_MessageQueue = __2_YAPAXI_Z(4 * (v0 >> 1)); /*0x77c2d4*/
      memset(g_WOL_MessageQueue, 0, 4 * g_WOL_MsgPool); /*0x77c2dc*/
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
              v11 = *((_DWORD *)g_WOL_MessageQueue + v10); /*0x77c307*/
              *((_DWORD *)g_WOL_MessageQueue + v10) = v9; /*0x77c30a*/
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
      v0 = g_WOL_MsgPool; /*0x77c32b*/
    }
    while ( g_WOL_MsgPool > (unsigned int)dword_B766B0 ); /*0x77c335*/
  }
  __3_YAXPAX_Z(g_WOL_MessageQueue); /*0x77c341*/
}


// ==== 0x0077C350  sub_77C350  this=-  sig=ida-proto ====
int sub_77C350()
{
  g_WOL_ChatPool = 0; /*0x77c357*/
  dword_B777A4 = 0; /*0x77c35c*/
  dword_B777A8 = 0; /*0x77c361*/
  return atexit(sub_77C370); /*0x77c36c*/
}


// ==== 0x0077C370  sub_77C370  this=-  sig=ida-proto ====
void __cdecl sub_77C370()
{
  int i; // esi

  for ( i = 0; i < g_WOL_ChatPool; ++i ) /*0x77c37a*/
    DeleteAndZero((void **)dword_B777A8 + i); /*0x77c384*/
  g_WOL_ChatPool = 0; /*0x77c399*/
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
  g_WOL_LoginToken = 0; /*0x77c587*/
  dword_B765FC = 0; /*0x77c58c*/
  dword_B76600 = 0; /*0x77c591*/
  return atexit(sub_77C5A0); /*0x77c59c*/
}


// ==== 0x0077C5A0  sub_77C5A0  this=-  sig=ida-proto ====
void __cdecl sub_77C5A0()
{
  int i; // esi

  for ( i = 0; i < g_WOL_LoginToken; ++i ) /*0x77c5aa*/
    DeleteAndZero((void **)dword_B76600 + i); /*0x77c5b4*/
  g_WOL_LoginToken = 0; /*0x77c5c9*/
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
  dword_B736F8 = 0; /*0x77c647*/
  dword_B736FC = 0; /*0x77c64c*/
  dword_B73700 = 0; /*0x77c651*/
  return atexit(sub_77C660); /*0x77c65c*/
}


// ==== 0x0077C660  sub_77C660  this=-  sig=ida-proto ====
void __cdecl sub_77C660()
{
  int i; // esi

  for ( i = 0; i < dword_B736F8; ++i ) /*0x77c66a*/
    DeleteAndZero((void **)dword_B73700 + i); /*0x77c674*/
  dword_B736F8 = 0; /*0x77c689*/
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
  dword_B76510 = 0; /*0x77c707*/
  dword_B76514 = 0; /*0x77c70c*/
  dword_B76518 = 0; /*0x77c711*/
  return atexit(sub_77C720); /*0x77c71c*/
}


// ==== 0x0077C720  sub_77C720  this=-  sig=ida-proto ====
void __cdecl sub_77C720()
{
  int i; // esi

  for ( i = 0; i < dword_B76510; ++i ) /*0x77c72a*/
    DeleteAndZero((void **)dword_B76518 + i); /*0x77c734*/
  dword_B76510 = 0; /*0x77c749*/
  __3_YAXPAX_Z(dword_B76518); /*0x77c754*/
}


// ==== 0x0077C760  sub_77C760  this=-  sig=ida-proto ====
int sub_77C760()
{
  MEMORY[0xB73AE8] = 0; /*0x77c767*/
  MEMORY[0xB73AEC] = 0; /*0x77c76c*/
  MEMORY[0xB73AF0] = 0; /*0x77c771*/
  return atexit(sub_77C780); /*0x77c77c*/
}


// ==== 0x0077C780  sub_77C780  this=-  sig=ida-proto ====
void __cdecl sub_77C780()
{
  int i; // esi

  for ( i = 0; i < MEMORY[0xB73AE8]; ++i ) /*0x77c78a*/
    DeleteAndZero((void **)MEMORY[0xB73AF0] + i); /*0x77c794*/
  MEMORY[0xB73AE8] = 0; /*0x77c7a9*/
  __3_YAXPAX_Z(MEMORY[0xB73AF0]); /*0x77c7b4*/
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
  dword_B73708 = 0; /*0x77c827*/
  dword_B7370C = 0; /*0x77c82c*/
  dword_B73710 = 0; /*0x77c831*/
  return atexit(sub_77C840); /*0x77c83c*/
}


// ==== 0x0077C840  sub_77C840  this=-  sig=ida-proto ====
void __cdecl sub_77C840()
{
  int i; // esi

  for ( i = 0; i < dword_B73708; ++i ) /*0x77c84a*/
    DeleteAndZero((void **)dword_B73710 + i); /*0x77c854*/
  dword_B73708 = 0; /*0x77c869*/
  __3_YAXPAX_Z(dword_B73710); /*0x77c874*/
}


// ==== 0x0077C880  sub_77C880  this=-  sig=ida-proto ====
int sub_77C880()
{
  dword_B76188 = 0; /*0x77c887*/
  dword_B7618C = 0; /*0x77c88c*/
  dword_B76190 = 0; /*0x77c891*/
  return atexit(sub_77C8A0); /*0x77c89c*/
}


// ==== 0x0077C8A0  sub_77C8A0  this=-  sig=ida-proto ====
void __cdecl sub_77C8A0()
{
  int i; // esi

  for ( i = 0; i < dword_B76188; ++i ) /*0x77c8aa*/
    DeleteAndZero((void **)dword_B76190 + i); /*0x77c8b4*/
  dword_B76188 = 0; /*0x77c8c9*/
  __3_YAXPAX_Z(dword_B76190); /*0x77c8d4*/
}


// ==== 0x0077C8E0  sub_77C8E0  this=-  sig=ida-proto ====
int sub_77C8E0()
{
  g_WindowManager = 0; /*0x77c8e7*/
  dword_B73AAC = 0; /*0x77c8ec*/
  g_WOL_LoginQueue = 0; /*0x77c8f1*/
  return atexit(sub_77C900); /*0x77c8fc*/
}


// ==== 0x0077C900  sub_77C900  this=-  sig=ida-proto ====
void __cdecl sub_77C900()
{
  int i; // esi

  for ( i = 0; i < g_WindowManager; ++i ) /*0x77c90a*/
    DeleteAndZero((void **)g_WOL_LoginQueue + i); /*0x77c914*/
  g_WindowManager = 0; /*0x77c929*/
  __3_YAXPAX_Z(g_WOL_LoginQueue); /*0x77c934*/
}


// ==== 0x0077C940  sub_77C940  this=-  sig=ida-proto ====
int sub_77C940()
{
  g_WOL_RequestManager = 0; /*0x77c947*/
  dword_B76984 = 0; /*0x77c94c*/
  g_WOL_SessionID = 0; /*0x77c951*/
  return atexit(sub_77C960); /*0x77c95c*/
}


// ==== 0x0077C960  sub_77C960  this=-  sig=ida-proto ====
void __cdecl sub_77C960()
{
  int i; // esi

  for ( i = 0; i < g_WOL_RequestManager; ++i ) /*0x77c96a*/
    DeleteAndZero((void **)g_WOL_SessionID + i); /*0x77c974*/
  g_WOL_RequestManager = 0; /*0x77c989*/
  __3_YAXPAX_Z(g_WOL_SessionID); /*0x77c994*/
}


// ==== 0x0077C9A0  sub_77C9A0  this=-  sig=ida-proto ====
int sub_77C9A0()
{
  g_WOL_BuddyList = 0; /*0x77c9a7*/
  dword_B779B4 = 0; /*0x77c9ac*/
  g_WOL_ChannelMgr = 0; /*0x77c9b1*/
  return atexit(sub_77C9C0); /*0x77c9bc*/
}


// ==== 0x0077C9C0  sub_77C9C0  this=-  sig=ida-proto ====
void __cdecl sub_77C9C0()
{
  int i; // esi

  for ( i = 0; i < g_WOL_BuddyList; ++i ) /*0x77c9ca*/
    DeleteAndZero((void **)g_WOL_ChannelMgr + i); /*0x77c9d4*/
  g_WOL_BuddyList = 0; /*0x77c9e9*/
  __3_YAXPAX_Z(g_WOL_ChannelMgr); /*0x77c9f4*/
}


// ==== 0x0077CA00  sub_77CA00  this=-  sig=ida-proto ====
int sub_77CA00()
{
  unknown_libname_73(&g_WOL_AuthObject); /*0x77ca05*/
  return atexit(unknown_libname_40); /*0x77ca15*/
}


// ==== 0x0077CA20  unknown_libname_40  this=-  sig=ida-proto ====
// Microsoft VisualC 2-14/net runtime
void __cdecl unknown_libname_40()
{
  DeleteAndZero((void **)&g_WOL_AuthObject); /*0x77ca25*/
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
  g_WOL_AccountInfo = __2_YAPAXI_Z(4 * (1 << (v1 - 1))); /*0x77cad3*/
  memset(g_WOL_AccountInfo, 0, 4 * dword_B76998); /*0x77cad9*/
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
    v2 = *((_DWORD *)g_WOL_AccountInfo + i); /*0x77cb14*/
    while ( v2 ) /*0x77cb19*/
    {
      v3 = (void **)v2; /*0x77cb1b*/
      v2 = *(_DWORD *)(v2 + 8); /*0x77cb1d*/
      DeleteAndZero(v3); /*0x77cb26*/
      __3_YAXPAX_Z(v3); /*0x77cb2c*/
    }
    *((_DWORD *)g_WOL_AccountInfo + i++) = 0; /*0x77cb3f*/
  }
  v4 = dword_B769C0; /*0x77cb50*/
  dword_B76994 = 0; /*0x77cb56*/
  if ( v0 > dword_B769C0 ) /*0x77cb62*/
  {
    do /*0x77cc15*/
    {
      if ( byte_B769A4 || v0 <= v4 ) /*0x77cb78*/
        break; /*0x77cb78*/
      v5 = (int *)g_WOL_AccountInfo; /*0x77cb84*/
      v6 = v0; /*0x77cb8a*/
      dword_B76998 = v0 >> 1; /*0x77cb8f*/
      --dword_B7699C; /*0x77cb9b*/
      g_WOL_AccountInfo = __2_YAPAXI_Z(4 * (v0 >> 1)); /*0x77cbb4*/
      memset(g_WOL_AccountInfo, 0, 4 * dword_B76998); /*0x77cbbc*/
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
              v11 = *((_DWORD *)g_WOL_AccountInfo + v10); /*0x77cbe7*/
              *((_DWORD *)g_WOL_AccountInfo + v10) = v9; /*0x77cbea*/
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
  __3_YAXPAX_Z(g_WOL_AccountInfo); /*0x77cc21*/
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
  g_WOL_PacketQueue = 1 << (v1 - 1); /*0x77cc8b*/
  g_WOL_EventQueue = __2_YAPAXI_Z(4 * (1 << (v1 - 1))); /*0x77cca3*/
  memset(g_WOL_EventQueue, 0, 4 * g_WOL_PacketQueue); /*0x77cca9*/
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

  v0 = g_WOL_PacketQueue; /*0x77ccd0*/
  for ( i = 0; i < g_WOL_PacketQueue; v0 = g_WOL_PacketQueue ) /*0x77ccdd*/
  {
    v2 = *((_DWORD *)g_WOL_EventQueue + i); /*0x77cce4*/
    while ( v2 ) /*0x77cce9*/
    {
      v3 = (void **)v2; /*0x77cceb*/
      v2 = *(_DWORD *)(v2 + 272); /*0x77cced*/
      DeleteAndZero(v3); /*0x77ccf9*/
      __3_YAXPAX_Z(v3); /*0x77ccff*/
    }
    *((_DWORD *)g_WOL_EventQueue + i++) = 0; /*0x77cd12*/
  }
  v4 = dword_B76638; /*0x77cd23*/
  dword_B7660C = 0; /*0x77cd29*/
  if ( v0 > dword_B76638 ) /*0x77cd35*/
  {
    do /*0x77cdee*/
    {
      if ( byte_B7661C || v0 <= v4 ) /*0x77cd4b*/
        break; /*0x77cd4b*/
      v5 = (int *)g_WOL_EventQueue; /*0x77cd57*/
      v6 = v0; /*0x77cd5d*/
      g_WOL_PacketQueue = v0 >> 1; /*0x77cd62*/
      --dword_B76614; /*0x77cd6e*/
      g_WOL_EventQueue = __2_YAPAXI_Z(4 * (v0 >> 1)); /*0x77cd87*/
      memset(g_WOL_EventQueue, 0, 4 * g_WOL_PacketQueue); /*0x77cd8f*/
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
              v11 = *((_DWORD *)g_WOL_EventQueue + v10); /*0x77cdba*/
              *((_DWORD *)g_WOL_EventQueue + v10) = v9; /*0x77cdbd*/
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
      v0 = g_WOL_PacketQueue; /*0x77cde4*/
    }
    while ( g_WOL_PacketQueue > (unsigned int)dword_B76638 ); /*0x77cdee*/
  }
  __3_YAXPAX_Z(g_WOL_EventQueue); /*0x77cdfa*/
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
  g_WOL_ConnectionToken = 0; /*0x77ce57*/
  dword_B76AD4 = 0; /*0x77ce5c*/
  g_WOL_ObjectState = 0; /*0x77ce61*/
  return atexit(sub_77CE70); /*0x77ce6c*/
}


// ==== 0x0077CE70  sub_77CE70  this=-  sig=ida-proto ====
void __cdecl sub_77CE70()
{
  int i; // esi

  for ( i = 0; i < g_WOL_ConnectionToken; ++i ) /*0x77ce7a*/
    DeleteAndZero((void **)g_WOL_ObjectState + i); /*0x77ce84*/
  g_WOL_ConnectionToken = 0; /*0x77ce99*/
  __3_YAXPAX_Z(g_WOL_ObjectState); /*0x77cea4*/
}


// ==== 0x0077CEB0  sub_77CEB0  this=-  sig=ida-proto ====
int sub_77CEB0()
{
  g_WOL_LoginPool = 0; /*0x77ceb7*/
  dword_B76974 = 0; /*0x77cebc*/
  dword_B76978 = 0; /*0x77cec1*/
  return atexit(sub_77CED0); /*0x77cecc*/
}


// ==== 0x0077CED0  sub_77CED0  this=-  sig=ida-proto ====
void __cdecl sub_77CED0()
{
  int i; // esi

  for ( i = 0; i < g_WOL_LoginPool; ++i ) /*0x77ceda*/
    DeleteAndZero((void **)dword_B76978 + i); /*0x77cee4*/
  g_WOL_LoginPool = 0; /*0x77cef9*/
  __3_YAXPAX_Z(dword_B76978); /*0x77cf04*/
}


// ==== 0x0077CF10  sub_77CF10  this=-  sig=ida-proto ====
int sub_77CF10()
{
  unknown_libname_73(&dword_B76AC4); /*0x77cf15*/
  return atexit(unknown_libname_42); /*0x77cf25*/
}


// ==== 0x0077CF30  unknown_libname_42  this=-  sig=ida-proto ====
// Microsoft VisualC 2-14/net runtime
void __cdecl unknown_libname_42()
{
  DeleteAndZero((void **)&dword_B76AC4); /*0x77cf35*/
}


// ==== 0x0077CF40  UI_Setup_77CF40  this=-  sig=ida-proto ====
BOOL sub_77CF40()
{
  return MEMORY[0xA8B244] == 3 || MEMORY[0xA8B244] == 1 || MEMORY[0xA8B244] == 2; /*0x77cf56*/
}


// ==== 0x0077CF70  sub_77CF70  this=-  sig=ida-proto ====
int sub_77CF70()
{
  unknown_libname_73(&MEMORY[0xB76E34]); /*0x77cf75*/
  return atexit(unknown_libname_43); /*0x77cf85*/
}


// ==== 0x0077CF90  unknown_libname_43  this=-  sig=ida-proto ====
// Microsoft VisualC 2-14/net runtime
void __cdecl unknown_libname_43()
{
  DeleteAndZero((void **)&MEMORY[0xB76E34]); /*0x77cf95*/
}


// ==== 0x0077CFA0  sub_77CFA0  this=-  sig=ida-proto ====
int sub_77CFA0()
{
  unknown_libname_73(&MEMORY[0xB73B30]); /*0x77cfa5*/
  return atexit(unknown_libname_44); /*0x77cfb5*/
}


// ==== 0x0077CFC0  unknown_libname_44  this=-  sig=ida-proto ====
// Microsoft VisualC 2-14/net runtime
void __cdecl unknown_libname_44()
{
  DeleteAndZero((void **)&MEMORY[0xB73B30]); /*0x77cfc5*/
}


// ==== 0x0077CFD0  sub_77CFD0  this=-  sig=ida-proto ====
int sub_77CFD0()
{
  unknown_libname_73(&dword_B7622C); /*0x77cfd5*/
  return atexit(unknown_libname_45); /*0x77cfe5*/
}


// ==== 0x0077CFF0  unknown_libname_45  this=-  sig=ida-proto ====
// Microsoft VisualC 2-14/net runtime
void __cdecl unknown_libname_45()
{
  DeleteAndZero((void **)&dword_B7622C); /*0x77cff5*/
}


// ==== 0x0077D000  sub_77D000  this=-  sig=ida-proto ====
int sub_77D000()
{
  unknown_libname_73(&dword_B76908); /*0x77d005*/
  return atexit(unknown_libname_46); /*0x77d015*/
}


// ==== 0x0077D020  unknown_libname_46  this=-  sig=ida-proto ====
// Microsoft VisualC 2-14/net runtime
void __cdecl unknown_libname_46()
{
  DeleteAndZero((void **)&dword_B76908); /*0x77d025*/
}


// ==== 0x0077D030  sub_77D030  this=-  sig=ida-proto ====
int sub_77D030()
{
  unknown_libname_73(&dword_B77794); /*0x77d035*/
  return atexit(unknown_libname_47); /*0x77d045*/
}


// ==== 0x0077D050  unknown_libname_47  this=-  sig=ida-proto ====
// Microsoft VisualC 2-14/net runtime
void __cdecl unknown_libname_47()
{
  DeleteAndZero((void **)&dword_B77794); /*0x77d055*/
}


// ==== 0x0077D060  sub_77D060  this=-  sig=ida-proto ====
int sub_77D060()
{
  unknown_libname_73(&dword_B778F4); /*0x77d065*/
  return atexit(unknown_libname_48); /*0x77d075*/
}


// ==== 0x0077D080  unknown_libname_48  this=-  sig=ida-proto ====
// Microsoft VisualC 2-14/net runtime
void __cdecl unknown_libname_48()
{
  DeleteAndZero((void **)&dword_B778F4); /*0x77d085*/
}


// ==== 0x0077D090  sub_77D090  this=-  sig=ida-proto ====
int sub_77D090()
{
  unknown_libname_73(&dword_B778FC); /*0x77d095*/
  return atexit(unknown_libname_49); /*0x77d0a5*/
}


// ==== 0x0077D0B0  unknown_libname_49  this=-  sig=ida-proto ====
// Microsoft VisualC 2-14/net runtime
void __cdecl unknown_libname_49()
{
  DeleteAndZero((void **)&dword_B778FC); /*0x77d0b5*/
}


// ==== 0x0077D0C0  sub_77D0C0  this=-  sig=ida-proto ====
int sub_77D0C0()
{
  unknown_libname_73(&dword_B765EC); /*0x77d0c5*/
  return atexit(unknown_libname_50); /*0x77d0d5*/
}


// ==== 0x0077D0E0  unknown_libname_50  this=-  sig=ida-proto ====
// Microsoft VisualC 2-14/net runtime
void __cdecl unknown_libname_50()
{
  DeleteAndZero((void **)&dword_B765EC); /*0x77d0e5*/
}


// ==== 0x0077D0F0  sub_77D0F0  this=-  sig=ida-proto ====
int sub_77D0F0()
{
  unknown_libname_73(&dword_B76900); /*0x77d0f5*/
  return atexit(unknown_libname_51); /*0x77d105*/
}


// ==== 0x0077D110  unknown_libname_51  this=-  sig=ida-proto ====
// Microsoft VisualC 2-14/net runtime
void __cdecl unknown_libname_51()
{
  DeleteAndZero(&dword_B76900); /*0x77d115*/
}


// ==== 0x0077D120  sub_77D120  this=-  sig=ida-proto ====
int sub_77D120()
{
  ComPtr::Constructor(&stru_B75E48); /*0x77d125*/
  stru_B75E48 = (int)&vt_rc_ptr_PlayerProfile; /*0x77d12f*/
  return atexit(sub_77D140); /*0x77d13f*/
}


// ==== 0x0077D140  sub_77D140  this=-  sig=ida-proto ====
void __cdecl sub_77D140()
{
  stru_B75E48 = (int)&vt_rc_ptr_PlayerProfile; /*0x77d140*/
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
  unknown_libname_74(&dword_B76230); /*0x77d1a5*/
  return atexit(unknown_libname_53); /*0x77d1b5*/
}


// ==== 0x0077D1C0  unknown_libname_53  this=-  sig=ida-proto ====
// Microsoft VisualC 2-14/net runtime
void __cdecl unknown_libname_53()
{
  DeleteAndZero::Alt(&dword_B76230); /*0x77d1c5*/
}


// ==== 0x0077D1F0  SimpleWonlineDialogControl::ConnectAndLoginWOL_Connect  this=SimpleWonlineDialogControl  sig=csp ====
void __thiscall ConnectAndLoginWOL_Connect(SimpleWonlineDialogControl *this)
{
  this->vfptr = &off_7F7624; /*0x77d1f0*/
  OwnerDrawControl::InitVtable((DialogControl_OwnerDraw *)this); /*0x77d1f6*/
}


// ==== 0x0077D200  j_Game_ProcessIdle  this=SimpleWonlineDialogControl  sig=ida-proto ====
// attributes: thunk
char __thiscall ObjectClass::j_Game_ProcessIdle(SimpleWonlineDialogControl *this)
{
  return Game::ProcessIdle((CreateGameDialogControl *)this);
}


// ==== 0x0077D240  ObjectClass::method_77D240  this=ObjectClass  sig=csp ====
int __thiscall sub_77D240(char **this)
{
  signed int v1; // eax
  char *v2; // ebx
  signed int v3; // esi
  int i; // edi
  char *v6; // eax

  v1 = g_WOL_State; /*0x77d240*/
  v2 = 0; /*0x77d248*/
  v3 = 0; /*0x77d24a*/
  if ( (int)g_WOL_State <= 0 ) /*0x77d251*/
    return -1; /*0x77d28a*/
  for ( i = 0; ; i += 108 ) /*0x77d253*/
  {
    if ( i >= 0 && v3 < v1 ) /*0x77d25b*/
      v2 = (char *)g_WOL_ConnectionFlags + i; /*0x77d262*/
    v6 = String::GetOrEmpty_Alt(this); /*0x77d26b*/
    if ( !_strcmpi(v6, v2 + 36) ) /*0x77d271*/
      break; /*0x77d271*/
    v1 = g_WOL_State; /*0x77d27d*/
    if ( ++v3 >= (int)g_WOL_State ) /*0x77d288*/
      return -1; /*0x77d288*/
  }
  return v3; /*0x77d28a*/
}


// ==== 0x0077D350  ObjectClass::method_77D350  this=ObjectClass  sig=csp ====
BOOL __thiscall sub_77D350(ObjectClass *String1)
{
  wchar_t *StringCSF; // eax
  size_t v3; // eax
  const wchar_t *v5; // [esp+0h] [ebp-204h]
  wchar_t Buffer[256]; // [esp+4h] [ebp-200h] BYREF

  StringCSF = GetStringCSF(aTxtBuddyFilter, 0, (CampaignScore *)g_Str_File_wonline_cpp, 873); /*0x77d36a*/
  swprintf(Buffer, (const size_t)StringCSF, v5, *(CampaignScore **)Buffer); /*0x77d375*/
  v3 = wcslen(Buffer); /*0x77d37f*/
  return _wcsnicmp(String1, Buffer, v3) == 0; /*0x77d397*/
}


// ==== 0x0077D3A0  ObjectClass::method_77D3A0  this=ObjectClass  sig=csp ====
BOOL __thiscall sub_77D3A0(ObjectClass *String1)
{
  wchar_t *StringCSF; // eax
  size_t v3; // eax
  const wchar_t *v5; // [esp+0h] [ebp-204h]
  wchar_t Buffer[256]; // [esp+4h] [ebp-200h] BYREF

  StringCSF = GetStringCSF(aTxtClanFilter, 0, (CampaignScore *)g_Str_File_wonline_cpp, 879); /*0x77d3ba*/
  swprintf(Buffer, (const size_t)StringCSF, v5, *(CampaignScore **)Buffer); /*0x77d3c5*/
  v3 = wcslen(Buffer); /*0x77d3cf*/
  return _wcsnicmp(String1, Buffer, v3) == 0; /*0x77d3e7*/
}


// ==== 0x0077D3F0  ObjectClass::method_77D3F0  this=ObjectClass  sig=csp ====
char __thiscall sub_77D3F0(const char *this)
{
  int v2; // ebx
  int v3; // edi
  const char *v4; // ebp
  void *v6; // [esp+10h] [ebp-4h] BYREF

  if ( !this ) /*0x77d3f9*/
    return 0; /*0x77d3f9*/
  v2 = g_WindowManager; /*0x77d3fb*/
  unknown_libname_73(&v6); /*0x77d405*/
  v3 = 0; /*0x77d40a*/
  if ( v2 <= 0 ) /*0x77d40e*/
  {
LABEL_9:
    DeleteAndZero(&v6); /*0x77d46e*/
    return 0; /*0x77d47e*/
  }
  v4 = this + 36; /*0x77d410*/
  while ( 1 ) /*0x77d413*/
  {
    if ( v3 >= 0 && v3 < g_WindowManager ) /*0x77d41d*/
      String::Reassign((char **)&v6, (const char **)g_WOL_LoginQueue + v3); /*0x77d42c*/
    if ( !strcmp(String::GetOrEmpty((char **)&v6), v4) ) /*0x77d442*/
      break; /*0x77d442*/
    if ( ++v3 >= v2 ) /*0x77d46c*/
      goto LABEL_9; /*0x77d46c*/
  }
  DeleteAndZero(&v6); /*0x77d483*/
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

  if ( !byte_B76AF0 && !MEMORY[0xB73AD0] || !Dialog::FindByHandle((void *)0x113) ) /*0x77d4e2*/
    return 1; /*0x77d4e2*/
  v2 = g_WOL_State; /*0x77d4ef*/
  v3 = 0; /*0x77d4f4*/
  v4 = 0; /*0x77d4f6*/
  if ( (int)g_WOL_State <= 0 ) /*0x77d4fa*/
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
        v3 = (char *)g_WOL_ConnectionFlags + v5; /*0x77d50b*/
      v6 = String::GetOrEmpty_Alt((char **)&g_WebBrowser); /*0x77d517*/
      if ( !_strcmpi(v6, v3 + 36) ) /*0x77d51d*/
        break; /*0x77d51d*/
      v2 = g_WOL_State; /*0x77d52d*/
      ++v4; /*0x77d532*/
      v5 += 108; /*0x77d533*/
      if ( v4 >= (int)g_WOL_State ) /*0x77d538*/
        goto LABEL_11; /*0x77d538*/
    }
    v2 = g_WOL_State; /*0x77d604*/
  }
  v7 = 0; /*0x77d53d*/
  if ( v4 < 0 ) /*0x77d541*/
    return 1; /*0x77d541*/
  if ( v4 < v2 ) /*0x77d549*/
    v7 = (char *)g_WOL_ConnectionFlags + 108 * v4; /*0x77d556*/
  if ( byte_B76AF0 ) /*0x77d565*/
  {
    if ( MEMORY[0xB73AD0] ) /*0x77d56d*/
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
                String::Reassign((char **)&v15, (const char **)g_WOL_LoginQueue + v9); /*0x77d5d0*/
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
            String::Reassign((char **)&v15, (const char **)g_WOL_LoginQueue + v13); /*0x77d673*/
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
  return MEMORY[0xB73AD0] && v7 && this && !_strcmpi(v7 + 46, this + 46); /*0x77d625*/
}


// ==== 0x0077D710  GameLoop::Thunk  this=GameLoop  sig=ida-proto ====
// attributes: thunk
char __thiscall GameLoop::Thunk(CreateGameDialogControl *this)
{
  return Game::ProcessIdle(this);
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
char Dialog::UpdateGameUI()
{
  int GameUI; // eax

  Dialog::PumpMessages(); /*0x77d820*/
  GameUI = Dialog::FindGameUI(); /*0x77d825*/
  if ( GameUI ) /*0x77d82c*/
    ((void (__stdcall *)(int, _DWORD, int))InvalidateRect)(GameUI, 0, 1); /*0x77d833*/
  return 0; /*0x77d83b*/
}


// ==== 0x0077D840  ShowWOLLobbyDialog  this=-  sig=ida-proto ====
int sub_77D840()
{
  HWND Dialog; // esi
  int GameUI; // eax
  char (*v2)(); // edx

  Dialog = (HWND)CreateDialog(0xCFu, (INT_PTR (__stdcall *)(HWND, UINT, WPARAM, LPARAM))OnlineLobbyDlgProcWOL, 0); /*0x77d858*/
  MEMORY[0xA8ED9C] = 1; /*0x77d85a*/
  Timer::PumpMessages((HWND *)MEMORY[0x87F770]); /*0x77d861*/
  ShowWindow(Dialog, 1); /*0x77d869*/
  GameUI = Dialog::FindGameUI(); /*0x77d86f*/
  v2 = Dialog::UpdateGameUI; /*0x77d87c*/
  if ( !GameUI ) /*0x77d881*/
    v2 = Dialog::PumpMessages; /*0x77d883*/
  MessageDialogLoopAlt(Dialog, (unsigned __int8 (*)(void))v2, 0, 1, 1); /*0x77d88a*/
  Timer::PumpMessages((HWND *)MEMORY[0x87F770]); /*0x77d895*/
  MEMORY[0xA8ED9C] = *((_BYTE *)MEMORY[0xA8B230] + 13730); /*0x77d8a7*/
  return MapClass::MarkForRedraw(&MEMORY[0x87F7E8], 2); /*0x77d8b7*/
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
  if ( MEMORY[0xA8B238] != 4 ) /*0x77d948*/
    return 0; /*0x77d94a*/
  return dword_B76B24 || (dword_B76B30 & 0x100) != 0; /*0x77d94d*/
}


// ==== 0x0077D970  Network::IsLobbyFeature  this=Network  sig=ida-proto ====
char Network_IsLobbyFeature()
{
  if ( MEMORY[0xA8B238] == 4 ) /*0x77d977*/
    return BYTE1(dword_B76B30) & 1; /*0x77d984*/
  else
    return 0; /*0x77d979*/
}


// ==== 0x0077D9F0  sub_77D9F0  this=-  sig=ida-proto ====
int sub_77D9F0()
{
  unknown_libname_73(&g_WebBrowser); /*0x77d9f5*/
  return atexit(unknown_libname_59); /*0x77da05*/
}


// ==== 0x0077DA10  unknown_libname_59  this=-  sig=ida-proto ====
// Microsoft VisualC 2-14/net runtime
void __cdecl unknown_libname_59()
{
  DeleteAndZero((void **)&g_WebBrowser); /*0x77da15*/
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


// ==== 0x0077DA50  SidebarClass::FindProductionData  this=WinModemClass  sig=csp ====
void *__thiscall sub_77DA50(void *this)
{
  char *v1; // eax
  void *v2; // ebx
  int v4; // esi
  const void *v5; // esi
  int v6; // esi
  void *v7; // [esp+0h] [ebp-4h] BYREF

  v7 = this; /*0x77da50*/
  v1 = ToWideStringChar((char *)this); /*0x77da52*/
  String::Assign((char **)&v7, v1); /*0x77da5c*/
  String::ToLower((const char **)&v7); /*0x77da65*/
  v2 = __2_YAPAXI_Z(0x6Cu); /*0x77da71*/
  if ( !v2 ) /*0x77da78*/
  {
    DeleteAndZero(&v7); /*0x77da7e*/
    return 0; /*0x77da87*/
  }
  memset(v2, 0, 0x6Cu); /*0x77da93*/
  if ( *(_DWORD *)dword_B779C4 == 2 ) /*0x77da9c*/
  {
    if ( !dword_B768C4 ) /*0x77db10*/
      goto LABEL_18; /*0x77db10*/
    v6 = *((_DWORD *)g_WOL_ListParser + (dword_B768D8(&v7) & ((1 << dword_B768CC) - 1))); /*0x77db31*/
    if ( !v6 ) /*0x77db36*/
      goto LABEL_18; /*0x77db36*/
    while ( !String::Compare((const char **)v6, (const char **)&v7) ) /*0x77db46*/
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
    if ( !dword_B77D84 ) /*0x77daa5*/
      goto LABEL_18; /*0x77daa5*/
    v4 = *((_DWORD *)dword_B77D80 + (dword_B77D98(&v7) & ((1 << dword_B77D8C) - 1))); /*0x77daca*/
    if ( !v4 ) /*0x77dacf*/
      goto LABEL_18; /*0x77dacf*/
    while ( !String::Compare((const char **)v4, (const char **)&v7) ) /*0x77dae3*/
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
  DeleteAndZero(&v7); /*0x77db73*/
  return v2; /*0x77da87*/
}


// ==== 0x0077DB90  Lobby::BuildPlayerList  this=Lobby  sig=csp ====
int Lobby_BuildPlayerList()
{
  wchar_t **v0; // esi
  wchar_t *v1; // edi
  char **v2; // eax
  const char **v3; // eax
  char *v4; // eax
  void *v6; // [esp+8h] [ebp-110h] BYREF
  void *v7; // [esp+Ch] [ebp-10Ch] BYREF
  void *v8; // [esp+10h] [ebp-108h] BYREF
  void *v9; // [esp+14h] [ebp-104h] BYREF
  char Destination[256]; // [esp+18h] [ebp-100h] BYREF

  strcpy(Destination, asc_84A480); /*0x77dbb5*/
  v0 = (wchar_t **)&MEMORY[0xA8DA90]; /*0x77dbbe*/
  do /*0x77dc6e*/
  {
    v1 = *v0; /*0x77dbc3*/
    unknown_libname_73(&v6); /*0x77dbc9*/
    if ( IsKnownPointer(v1) ) /*0x77dbd0*/
    {
      WideString::Assign((wchar_t **)&v7, v1); /*0x77dbde*/
      v2 = ToWideStringCharAlt((char **)&v8, (const wchar_t **)&v7); /*0x77dbeb*/
      String::Reassign((char **)&v6, (const char **)v2); /*0x77dbf5*/
      DeleteAndZero(&v8); /*0x77dbfe*/
      DeleteAndZero::Alt(&v7); /*0x77dc07*/
    }
    else
    {
      v3 = (const char **)GetPlayerTypeString(&v9, v1); /*0x77dc14*/
      String::Reassign((char **)&v6, v3); /*0x77dc1e*/
      DeleteAndZero(&v9); /*0x77dc27*/
    }
    v4 = String::GetOrEmpty((char **)&v6); /*0x77dc35*/
    strncat(Destination, v4, 0x100u); /*0x77dc40*/
    strncat(Destination, MEMORY[0x817F70], 0x100u); /*0x77dc54*/
    DeleteAndZero(&v6); /*0x77dc60*/
    ++v0; /*0x77dc65*/
  }
  while ( (int)v0 < (int)&MEMORY[0xA8DAB0] ); /*0x77dc6e*/
  return (*(int (__stdcall **)(LPVOID, char *))(*(_DWORD *)MEMORY[0xAC116C] + 60))(MEMORY[0xAC116C], Destination); /*0x77dc84*/
}


// ==== 0x0077DC90  OpenURLWOL  this=char*  sig=csp ====
char __fastcall OpenURLWOL(INIClass *a1, int a2)
{
  FILE *v4; // esi
  HINSTANCE ExecutableA; // esi
  wchar_t *v6; // eax
  int v7; // eax
  CreateGameDialogControl *v8; // ecx
  HANDLE hProcess; // ebx
  int v10; // esi
  CreateGameDialogControl *v11; // ecx
  CreateGameDialogControl *v12; // ecx
  CreateGameDialogControl *v13; // ecx
  CreateGameDialogControl *v14; // ecx
  int v15; // esi
  CreateGameDialogControl *v16; // ecx
  wchar_t *StringCSF; // eax
  CellStruct *v19; // [esp-Ch] [ebp-32Ch]
  DWORD ExitCode; // [esp+10h] [ebp-310h] BYREF
  struct _PROCESS_INFORMATION ProcessInformation; // [esp+14h] [ebp-30Ch] BYREF
  struct _STARTUPINFOA StartupInfo; // [esp+24h] [ebp-2FCh] BYREF
  CHAR File[160]; // [esp+68h] [ebp-2B8h] BYREF
  CHAR Result[264]; // [esp+108h] [ebp-218h] BYREF
  CHAR CommandLine[272]; // [esp+210h] [ebp-110h] BYREF

  tmpnam(File); /*0x77dca3*/
  strcat(File, (const char *)&stru_829748.objectTypeFlags); /*0x77dcd2*/
  v4 = fopen(File, aW); /*0x77dce5*/
  fprintf((MouseClass *)v4, aTitleHiThereTi, v19); /*0x77dced*/
  fclose((MouseClass *)v4); /*0x77dcf3*/
  ExecutableA = FindExecutableA(File, 0, Result); /*0x77dd10*/
  _unlink(File); /*0x77dd17*/
  if ( (int)ExecutableA <= 32 ) /*0x77dd22*/
  {
    StringCSF = GetStringCSF(aTxtNobrowser, 0, (CampaignScore *)g_Str_File_wonline_cpp, 1466); /*0x77deb0*/
    LOBYTE(v7) = ShowDialogConfirm((CampaignScore *)StringCSF, 0, (unsigned __int8 (*)())GameLoop::Thunk, 0); /*0x77deb9*/
  }
  else if ( a2 /*0x77dd57*/
         || (v6 = GetStringCSF(aTxtLaunchbrows, 0, (CampaignScore *)g_Str_File_wonline_cpp, 1398),
             v7 = ShowDialogConfirm((CampaignScore *)v6, 4, (unsigned __int8 (*)())GameLoop::Thunk, 0),
             v7 == 6) )
  {
    sprintf(CommandLine, &stru_829748, a1); /*0x77dd6b*/
    memset(&StartupInfo, 0, sizeof(StartupInfo)); /*0x77dd7e*/
    StartupInfo.cb = 68; /*0x77dda6*/
    v7 = CreateProcessA(Result, CommandLine, 0, 0, 0, 0, 0, 0, &StartupInfo, &ProcessInformation); /*0x77ddae*/
    if ( v7 ) /*0x77ddb6*/
    {
      LOBYTE(v7) = ProcessInformation.hProcess; /*0x77ddbc*/
      hProcess = ProcessInformation.hProcess; /*0x77ddc2*/
      if ( ProcessInformation.hProcess ) /*0x77ddc4*/
      {
        v10 = 0; /*0x77ddca*/
        Game::ProcessIdle(v8); /*0x77ddcc*/
        WaitForInputIdle(hProcess, 0x1388u); /*0x77ddd7*/
        do /*0x77de3f*/
        {
          Game::ProcessIdle(v11); /*0x77dde9*/
          Sleep(0x1F4u); /*0x77ddf3*/
          GetExitCodeProcess(hProcess, &ExitCode); /*0x77ddfb*/
          if ( ExitCode != 259 ) /*0x77de05*/
            v10 = 1; /*0x77de07*/
          if ( HouseClass_Player.__pad_5568[23244] || GetTopWindow(0) == g_hWnd || GetForegroundWindow() == g_hWnd ) /*0x77de31*/
            v10 = 1; /*0x77de33*/
          Game::ProcessIdle(v12); /*0x77de38*/
        }
        while ( !v10 ); /*0x77de3f*/
        Game::ProcessIdle(v11); /*0x77de41*/
        if ( GetTopWindow(0) != g_hWnd ) /*0x77de54*/
        {
          Game::ProcessIdle(v13); /*0x77de56*/
          SetForegroundWindow(g_hWnd); /*0x77de62*/
          ShowWindow(g_hWnd, 9); /*0x77de71*/
          Game::ProcessIdle(v14); /*0x77de77*/
        }
        v15 = 10; /*0x77de7c*/
        do /*0x77de8b*/
        {
          Sleep(0x64u); /*0x77de83*/
          LOBYTE(v7) = Game::ProcessIdle(v16); /*0x77de85*/
          --v15; /*0x77de8a*/
        }
        while ( v15 ); /*0x77de8b*/
      }
    }
  }
  return v7; /*0x77de8d*/
}


// ==== 0x0077DED0  ReadWOLAccountINI  this=-  sig=ida-proto ====
int sub_77DED0()
{
  int result; // eax

  dword_B76234 = INIClass::ReadInt_Overwrite( /*0x77deeb*/
                   (int)&MEMORY[0x8870C0],
                   (unsigned __int8 *)stru_84A52C,
                   (unsigned __int8 *)MEMORY[0x84A534],
                   1);
  dword_B779F0 = INIClass::ReadInt_Overwrite( /*0x77df06*/
                   (int)&MEMORY[0x8870C0],
                   (unsigned __int8 *)stru_84A52C,
                   (unsigned __int8 *)unk_84A520,
                   1);
  dword_B779BC = INIClass::ReadInt_Overwrite( /*0x77df21*/
                   (int)&MEMORY[0x8870C0],
                   (unsigned __int8 *)stru_84A52C,
                   (unsigned __int8 *)MEMORY[0x84A514],
                   1);
  dword_B7690C = INIClass::ReadInt_Overwrite( /*0x77df3c*/
                   (int)&MEMORY[0x8870C0],
                   (unsigned __int8 *)stru_84A52C,
                   (unsigned __int8 *)MEMORY[0x84A508],
                   1);
  dword_B77784 = INIClass::ReadInt_Overwrite( /*0x77df57*/
                   (int)&MEMORY[0x8870C0],
                   (unsigned __int8 *)stru_84A52C,
                   (unsigned __int8 *)MEMORY[0x84A500],
                   1);
  dword_B779DC = INIClass::ReadInt_Overwrite( /*0x77df72*/
                   (int)&MEMORY[0x8870C0],
                   (unsigned __int8 *)stru_84A52C,
                   (unsigned __int8 *)MEMORY[0x84A4F0],
                   1);
  dword_B779C0 = INIClass::ReadInt_Overwrite( /*0x77df8d*/
                   (int)&MEMORY[0x8870C0],
                   (unsigned __int8 *)stru_84A52C,
                   (unsigned __int8 *)MEMORY[0x84A4E0],
                   1);
  byte_B76AF0 = INIClass::ReadBool_Overwrite( /*0x77dfa8*/
                  (int)&MEMORY[0x8870C0],
                  (unsigned __int8 *)stru_84A52C,
                  (unsigned __int8 *)MEMORY[0x84A4D0],
                  0);
  MEMORY[0xB73AD0] = INIClass::ReadBool_Overwrite( /*0x77dfbe*/
                       (int)&MEMORY[0x8870C0],
                       (unsigned __int8 *)stru_84A52C,
                       (unsigned __int8 *)stru_84A4C4,
                       0);
  result = INIClass::ReadInt_Overwrite( /*0x5ee1a1*/
             (int)&MEMORY[0x8870C0],
             (unsigned __int8 *)MEMORY[0x82642C],
             (unsigned __int8 *)MEMORY[0x831DA4],
             0);
  MEMORY[0xAC10C8] = result; /*0x5ee1a6*/
  return result; /*0x5ee1ab*/
}


// ==== 0x0077DFD0  SaveCCINI  this=-  sig=ida-proto ====
void sub_77DFD0()
{
  int v0[9]; // [esp+0h] [ebp-24h] BYREF

  RawFileClass::Construct(v0, (int)MEMORY[0x826444]); /*0x77dfdc*/
  INIClass::SetInt((char *)&MEMORY[0x8870C0], (unsigned __int8 *)stru_84A52C, MEMORY[0x84A534], dword_B76234, 0); /*0x77dff8*/
  INIClass::SetInt((char *)&MEMORY[0x8870C0], (unsigned __int8 *)stru_84A52C, unk_84A520, dword_B779F0, 0); /*0x77e015*/
  INIClass::SetInt((char *)&MEMORY[0x8870C0], (unsigned __int8 *)stru_84A52C, MEMORY[0x84A514], dword_B779BC, 0); /*0x77e032*/
  INIClass::SetInt((char *)&MEMORY[0x8870C0], (unsigned __int8 *)stru_84A52C, MEMORY[0x84A508], dword_B7690C, 0); /*0x77e04e*/
  INIClass::SetInt((char *)&MEMORY[0x8870C0], (unsigned __int8 *)stru_84A52C, MEMORY[0x84A500], dword_B77784, 0); /*0x77e06b*/
  INIClass::SetInt((char *)&MEMORY[0x8870C0], (unsigned __int8 *)stru_84A52C, MEMORY[0x84A4F0], dword_B779DC, 0); /*0x77e088*/
  INIClass::SetInt((char *)&MEMORY[0x8870C0], (unsigned __int8 *)stru_84A52C, MEMORY[0x84A4E0], dword_B779C0, 0); /*0x77e0a4*/
  INIClass::SetBool((char *)&MEMORY[0x8870C0], (unsigned __int8 *)stru_84A52C, MEMORY[0x84A4D0], byte_B76AF0); /*0x77e0bf*/
  INIClass::SetBool((char *)&MEMORY[0x8870C0], (unsigned __int8 *)stru_84A52C, stru_84A4C4, MEMORY[0xB73AD0]); /*0x77e0da*/
  INIClass::WriteDigest(&MEMORY[0x8870C0], (int)v0, 0); /*0x77e0eb*/
  Config::SaveObserverMode(); /*0x77e0f0*/
  RawFileClass::Dtor(v0); /*0x77e0f9*/
}


// ==== 0x0077E110  ObjectClass::RunWOLMainLoop_Find  this=ObjectClass  sig=csp ====
char sub_77E110()
{
  int v0; // eax
  int v1; // esi

  if ( MEMORY[0xAC116C] ) /*0x77e117*/
  {
    (*(void (__stdcall **)(LPVOID, int))(*(_DWORD *)MEMORY[0xAC116C] + 124))(MEMORY[0xAC116C], dword_B779BC); /*0x77e123*/
    (*(void (__stdcall **)(LPVOID, int, int))(*(_DWORD *)MEMORY[0xAC116C] + 104))( /*0x77e13c*/
      MEMORY[0xAC116C],
      dword_B779F0,
      dword_B76234);
  }
  Dialog::RefreshDialogsGame(0); /*0x77e141*/
  if ( dword_B7690C ) /*0x77e153*/
  {
    if ( !Theme::IsPlaying((int)&g_BuildingTypeClass_Count) ) /*0x77e15a*/
      goto LABEL_5; /*0x77e15a*/
    v1 = dword_A83D14; /*0x77e17d*/
    if ( dword_A83D14 == -1 ) /*0x77e186*/
      v1 = dword_A83D18; /*0x77e188*/
    v0 = StringList::Find(&g_BuildingTypeClass_Count, g_INI_Key_INTRO); /*0x77e198*/
    if ( v1 == v0 ) /*0x77e1a0*/
    {
LABEL_5:
      Theme::Stop(&g_BuildingTypeClass_Count, 0); /*0x77e16a*/
      LOBYTE(v0) = Theme::QueueSong((int)&g_BuildingTypeClass_Count, -2); /*0x77e176*/
    }
  }
  else
  {
    LOBYTE(v0) = Theme::QueueSong((int)&g_BuildingTypeClass_Count, -3); /*0x77e1c2*/
  }
  return v0; /*0x77e17b*/
}


// ==== 0x0077E1D0  ObjectClass::FillPlayerListWOL  this=ObjectClass  sig=csp ====
int __thiscall FillPlayerListWOL(wchar_t **this)
{
  HWND Current; // eax
  HWND DlgItem; // eax
  LRESULT v4; // edx
  LRESULT v5; // ebx
  int v6; // edi
  CampaignScore *v7; // eax
  ObjectClass *v9; // ebp
  int v10; // eax
  ObjectClass *v11; // eax
  int X; // esi
  CampaignScore *v13; // eax
  ObjectClass *v14; // eax
  ObjectClass *v15; // [esp+Ch] [ebp-78h]
  LRESULT v16; // [esp+10h] [ebp-74h]
  _BYTE v18[108]; // [esp+18h] [ebp-6Ch] BYREF

  Current = Dialog::GetCurrent(); /*0x77e1e1*/
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
        if ( v10 >= 0 && v10 < (int)g_WOL_State ) /*0x77e25e*/
          qmemcpy(v18, &g_WOL_ConnectionFlags[3 * v10], sizeof(v18)); /*0x77e277*/
        v11 = (ObjectClass *)__2_YAPAXI_Z(0x6Cu); /*0x77e27b*/
        qmemcpy(v11, v18, 0x6Cu); /*0x77e28e*/
        v11->NeedsSaveOrLink = 0; /*0x77e292*/
        if ( !v5 ) /*0x77e299*/
          v9 = v11; /*0x77e29b*/
        if ( v15 ) /*0x77e2a3*/
          v15->NeedsSaveOrLink = v11; /*0x77e2a5*/
        v15 = v11; /*0x77e2a8*/
        ++v5; /*0x77e2b0*/
      }
      while ( v5 < v16 ); /*0x77e2b3*/
      if ( v9 ) /*0x77e2b7*/
      {
        X = (*(&g_MatrixTransformState + 2263))->X; /*0x77e2bf*/
        v13 = WideString::GetOrEmpty_Alt(this); /*0x77e2c5*/
        (*(void (__stdcall **)(_DWORD, ObjectClass *, CampaignScore *))(X + 236))( /*0x77e2d3*/
          *(&g_MatrixTransformState + 2263),
          v9,
          v13);
        do /*0x77e2e9*/
        {
          v14 = v9; /*0x77e2d9*/
          v9 = (ObjectClass *)v9->NeedsSaveOrLink; /*0x77e2db*/
          __3_YAXPAX_Z(v14); /*0x77e2df*/
        }
        while ( v9 ); /*0x77e2e9*/
      }
    }
    return 1; /*0x77e2ee*/
  }
  else
  {
    v6 = (*(&g_MatrixTransformState + 2263))->X; /*0x77e213*/
    v7 = WideString::GetOrEmpty_Alt(this); /*0x77e215*/
    (*(void (__stdcall **)(_DWORD, CampaignScore *))(v6 + 232))(*(&g_MatrixTransformState + 2263), v7); /*0x77e222*/
    return 0; /*0x77e228*/
  }
}


// ==== 0x0077E300  ObjectClass::FillBuddyListExWOL  this=ObjectClass  sig=csp ====
int __thiscall FillBuddyListExWOL(wchar_t **this)
{
  HWND Current; // eax
  HWND DlgItem; // eax
  LRESULT v4; // edx
  LRESULT v5; // ebx
  int v6; // edi
  CampaignScore *v7; // eax
  ObjectClass *v9; // ebp
  int v10; // eax
  ObjectClass *v11; // eax
  int X; // esi
  CampaignScore *v13; // eax
  ObjectClass *v14; // eax
  ObjectClass *v15; // [esp+Ch] [ebp-78h]
  LRESULT v16; // [esp+10h] [ebp-74h]
  _BYTE v18[108]; // [esp+18h] [ebp-6Ch] BYREF

  Current = Dialog::GetCurrent(); /*0x77e311*/
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
        if ( v10 >= 0 && v10 < (int)g_WOL_State ) /*0x77e38e*/
          qmemcpy(v18, &g_WOL_ConnectionFlags[3 * v10], sizeof(v18)); /*0x77e3a7*/
        v11 = (ObjectClass *)__2_YAPAXI_Z(0x6Cu); /*0x77e3ab*/
        qmemcpy(v11, v18, 0x6Cu); /*0x77e3be*/
        v11->NeedsSaveOrLink = 0; /*0x77e3c2*/
        if ( !v5 ) /*0x77e3c9*/
          v9 = v11; /*0x77e3cb*/
        if ( v15 ) /*0x77e3d3*/
          v15->NeedsSaveOrLink = v11; /*0x77e3d5*/
        v15 = v11; /*0x77e3d8*/
        ++v5; /*0x77e3e0*/
      }
      while ( v5 < v16 ); /*0x77e3e3*/
      if ( v9 ) /*0x77e3e7*/
      {
        X = (*(&g_MatrixTransformState + 2263))->X; /*0x77e3ef*/
        v13 = WideString::GetOrEmpty_Alt(this); /*0x77e3f5*/
        (*(void (__stdcall **)(_DWORD, ObjectClass *, CampaignScore *))(X + 244))( /*0x77e403*/
          *(&g_MatrixTransformState + 2263),
          v9,
          v13);
        do /*0x77e419*/
        {
          v14 = v9; /*0x77e409*/
          v9 = (ObjectClass *)v9->NeedsSaveOrLink; /*0x77e40b*/
          __3_YAXPAX_Z(v14); /*0x77e40f*/
        }
        while ( v9 ); /*0x77e419*/
      }
    }
    return 1; /*0x77e41e*/
  }
  else
  {
    v6 = (*(&g_MatrixTransformState + 2263))->X; /*0x77e343*/
    v7 = WideString::GetOrEmpty_Alt(this); /*0x77e345*/
    (*(void (__stdcall **)(_DWORD, CampaignScore *))(v6 + 240))(*(&g_MatrixTransformState + 2263), v7); /*0x77e352*/
    return 0; /*0x77e358*/
  }
}


// ==== 0x0077E430  Game::EncodeGameSetupState  this=Game  sig=csp ====
void __thiscall Game::EncodeGameSetupState(char *Buffer)
{
  char *v1; // ebp
  char v2; // bl
  char **v3; // eax
  int v4; // ebx
  SessionClass *v6; // esi
  int edi11; // edi
  SessionClass *v9; // esi
  char *v8; // eax
  SessionClass *v13; // esi
  ObjectClass *v14; // [esp-20h] [ebp-78h]
  wchar_t *v11; // [esp+10h] [ebp-48h] BYREF
  wchar_t *v12; // [esp+14h] [ebp-44h] BYREF
  int var40; // [esp+18h] [ebp-40h] BYREF
  int var3C; // [esp+1Ch] [ebp-3Ch] BYREF
  IUnknown *aP0; // [esp+20h] [ebp-38h]
  void *v16; // [esp+24h] [ebp-34h]
  int v17; // [esp+28h] [ebp-30h]
  int v18; // [esp+2Ch] [ebp-2Ch]
  int Option2; // [esp+30h] [ebp-28h]
  int Option; // [esp+34h] [ebp-24h]
  int PlayerColor; // [esp+38h] [ebp-20h]
  int PlayerSide; // [esp+3Ch] [ebp-1Ch]
  int v23; // [esp+40h] [ebp-18h]
  char *v24; // [esp+44h] [ebp-14h]
  int a1; // [esp+48h] [ebp-10h] BYREF
  _DWORD v26[3]; // [esp+4Ch] [ebp-Ch] BYREF

  v1 = Buffer; /*0x77e43a*/
  v24 = Buffer; /*0x77e440*/
  v26[2] = 0; /*0x77e444*/
  if ( &HouseClass_Player == (MouseClass *)-30166 ) /*0x77e44c*/
  {
    v2 = 4; /*0x77e475*/
    v3 = String::Assign((char **)&var40, &stru_87C374.__pad_579C[33876]); /*0x77e47a*/
  }
  else
  {
    WideString::Assign(&v11, (CampaignScore *)&HouseClass_Player.__pad_5568[8302]); /*0x77e453*/
    v2 = 3; /*0x77e460*/
    v3 = Game_Set((char **)&v12, (const wchar_t **)&v11); /*0x77e465*/
  }
  String::AssignFromPtr((char **)&var3C, (const char **)v3); /*0x77e484*/
  if ( (v2 & 4) != 0 ) /*0x77e48c*/
  {
    v2 &= ~4u; /*0x77e492*/
    DeleteAndZero((int)&var40); /*0x77e495*/
  }
  if ( (v2 & 2) != 0 ) /*0x77e49d*/
  {
    v2 &= ~2u; /*0x77e4a3*/
    DeleteAndZero((int)&v12); /*0x77e4a6*/
  }
  if ( (v2 & 1) != 0 ) /*0x77e4ae*/
    DeleteAndZero::Alt((void **)&v11); /*0x77e4b4*/
  String::GetOrEmpty((char **)&var3C); /*0x77e4e1*/
  sprintf(v1, (ObjectClass *)&stru_830620.__pad_BC0[384], *(INIClass **)&HouseClass_Player.__pad_5568[23264]); /*0x77e54e*/
  memset(byte_B76C24, 0, sizeof(byte_B76C24)); /*0x77e562*/
  v4 = 0; /*0x77e569*/
  v23 = *(_DWORD *)&HouseClass_Player.__pad_5568[18384]; /*0x77e56d*/
  if ( *(int *)&HouseClass_Player.__pad_5568[18384] > 0 ) /*0x77e571*/
  {
    do /*0x77e6b2*/
    {
      v6 = *(SessionClass **)(*(_DWORD *)&HouseClass_Player.__pad_5568[18372] + 4 * v4); /*0x77e57c*/
      PlayerSide = SessionClass::GetPlayerSide((int)v6); /*0x77e588*/
      PlayerColor = SessionClass::GetPlayerColor((int)v6); /*0x77e593*/
      Option = SessionClass::GetOption((int)v6); /*0x77e59e*/
      edi11 = 0; /*0x77e5a9*/
      Option2 = SessionClass::GetOption2((int)v6); /*0x77e5ab*/
      v17 = 0; /*0x77e5af*/
      v18 = 0; /*0x77e5b3*/
      v9 = (SessionClass *)&HouseClass_Player.__pad_5568[18396]; /*0x77e5b7*/
      while ( 1 ) /*0x77e5c4*/
      {
        aP0 = (IUnknown *)v9->GameMode[0]; /*0x77e5c4*/
        v16 = ToWideStringChar(*(IUnknown **)(*(_DWORD *)&HouseClass_Player.__pad_5568[18372] + 4 * v4)); /*0x77e5d4*/
        v8 = ToWideStringChar(aP0); /*0x77e5d8*/
        if ( !_strcmpi(v16, v8) ) /*0x77e5e3*/
          break; /*0x77e5e3*/
        v9 = (SessionClass *)((char *)v9 + 4); /*0x77e5ef*/
        ++edi11; /*0x77e5f2*/
        if ( (int)v9 >= (int)&HouseClass_Player.__pad_5568[18428] ) /*0x77e5f9*/
          goto LABEL_16; /*0x77e5f9*/
      }
      Network::GetAddress((_DWORD *)(12 * edi11 + 11066316), &a1, (ObjectClass *)v26, &v11); /*0x77e61e*/
LABEL_16:
      WideString::Assign(&v12, *(CampaignScore **)(*(_DWORD *)&HouseClass_Player.__pad_5568[18372] + 4 * v4)); /*0x77e635*/
      ToWideStringCharAlt((char **)&var40, (const wchar_t **)&v12); /*0x77e650*/
      DeleteAndZero::Alt((void **)&v12); /*0x77e659*/
      v14 = (ObjectClass *)String::GetOrEmpty((char **)&var40); /*0x77e686*/
      sprintf(&byte_B76C24[strlen(byte_B76C24)], (ObjectClass *)&stru_830620.__pad_BC0[356], (INIClass *)v14); /*0x77e69a*/
      DeleteAndZero((int)&var40); /*0x77e6a6*/
      ++v4; /*0x77e6af*/
    }
    while ( v4 < v23 ); /*0x77e6b2*/
    v1 = v24; /*0x77e6b8*/
  }
  byte_B76C22[strlen(byte_B76C24) + 1] = 58; /*0x77e6cf*/
  strcat(byte_B76C24, &stru_830620.__pad_BC0[352]); /*0x77e6f3*/
  v13 = (SessionClass *)&HouseClass_Player.__pad_5568[8232]; /*0x77e6fc*/
  do /*0x77e740*/
  {
    sprintf( /*0x77e72f*/
      &byte_B76C24[strlen(byte_B76C24)],
      (ObjectClass *)&stru_830620.__pad_BC0[336],
      (INIClass *)v13[-1].unknown_2854[522]);
    v13 = (SessionClass *)((char *)v13 + 4); /*0x77e734*/
  }
  while ( (int)v13 < (int)&HouseClass_Player.__pad_5568[8264] ); /*0x77e740*/
  strcat(v1, byte_B76C24); /*0x77e763*/
  DeleteAndZero((int)&var3C); /*0x77e770*/
}


// ==== 0x0077E780  sub_77E780  this=-  sig=ida-proto ====
int sub_77E780()
{
  return CCINIClass_RulesHash ^ CCINIClass_AIHash ^ CCINIClass_ArtHash; /*0x77e795*/
}


// ==== 0x0077E7A0  GameConfig::BuildChecksum  this=GameConfig  sig=csp ====
INIClass *__thiscall GameConfig::BuildChecksum(char *Buffer)
{
  int v2; // ecx
  void **p_attachedTag; // eax
  INIClass *Entry; // eax

  v2 = dword_B76B1C; /*0x77e7a5*/
  if ( dword_B76B1C > 0 ) /*0x77e7ad*/
  {
    p_attachedTag = &g_WOL_LoginObject.attachedTag; /*0x77e7af*/
    do /*0x77e7c0*/
    {
      p_attachedTag += 37; /*0x77e7b6*/
      --v2; /*0x77e7bb*/
    }
    while ( v2 ); /*0x77e7c0*/
  }
  GameOption::CheckDuplicate(); /*0x77e7dd*/
  Hash_Check_5E9580(); /*0x77e7e8*/
  Hash_Check_5E94D0(); /*0x77e7f3*/
  Entry = GameOptions::GetEntry(); /*0x77e7fa*/
  return (INIClass *)sprintf(Buffer, (ObjectClass *)&stru_84A52C.sectionHead[1], Entry); /*0x77e80e*/
}


// ==== 0x0077E820  ParseStringCommaInts  this=-  sig=csp ====
void **__fastcall ParseStringCommaInts(char *String, int *a2, int *a3, int *a4, int *a5, int *a6, void **a7)
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
  CCINIClass *v18; // eax

  v8 = strtok(String, (ObjectClass *)&stru_817F40.nextObject); /*0x77e829*/
  if ( v8 ) /*0x77e833*/
    v9 = atol(v8); /*0x77e836*/
  else
    v9 = 0; /*0x77e840*/
  *a2 = v9; /*0x77e849*/
  v10 = strtok(0, (ObjectClass *)&stru_817F40.nextObject); /*0x77e84b*/
  if ( v10 ) /*0x77e856*/
    v11 = atol(v10); /*0x77e859*/
  else
    v11 = 0; /*0x77e863*/
  *a3 = v11; /*0x77e870*/
  v12 = strtok(0, (ObjectClass *)&stru_817F40.nextObject); /*0x77e872*/
  if ( v12 ) /*0x77e87c*/
    v13 = atol(v12); /*0x77e87f*/
  else
    v13 = 0; /*0x77e889*/
  *a4 = v13; /*0x77e896*/
  v14 = strtok(0, (ObjectClass *)&stru_817F40.nextObject); /*0x77e898*/
  if ( v14 ) /*0x77e8a2*/
    v15 = atol(v14); /*0x77e8a5*/
  else
    v15 = 0; /*0x77e8af*/
  *a5 = v15; /*0x77e8bc*/
  v16 = strtok(0, (ObjectClass *)&stru_817F40.nextObject); /*0x77e8be*/
  if ( v16 ) /*0x77e8c8*/
    v17 = atol(v16); /*0x77e8cb*/
  else
    v17 = 0; /*0x77e8d5*/
  *a6 = v17; /*0x77e8e2*/
  v18 = (CCINIClass *)strtok(0, (ObjectClass *)&stru_817F40.nextObject); /*0x77e8e4*/
  return String::Assign_Alt(a7, v18); /*0x77e8f6*/
}


// ==== 0x0077E900  AssignWOLPlayerSide  this=-  sig=csp ====
void __fastcall AssignWOLPlayerSide(const char **a1, int a2)
{
  bool v4; // zf
  const char **v5; // eax
  HWND v6; // eax
  signed int v7; // eax
  char *v8; // ebx
  signed int v9; // esi
  int v10; // edi
  char *v11; // eax
  int v12; // esi
  char **v13; // eax
  bool v14; // bl
  signed int v15; // edx
  int v16; // eax
  signed int v17; // ebx
  _DWORD *v18; // ebp
  void *v19; // eax
  char *v20; // ecx
  _DWORD *v21; // esi
  bool v22; // [esp+13h] [ebp-81h]
  char *i; // [esp+14h] [ebp-80h] BYREF
  void *v24; // [esp+18h] [ebp-7Ch] BYREF
  void *v25; // [esp+1Ch] [ebp-78h] BYREF
  void *v26; // [esp+20h] [ebp-74h] BYREF
  void *v27; // [esp+24h] [ebp-70h] BYREF
  _BYTE v28[108]; // [esp+28h] [ebp-6Ch] BYREF

  v4 = String::Length(a1) == 0; /*0x77e913*/
  v5 = a1; /*0x77e915*/
  if ( v4 ) /*0x77e917*/
    v5 = (const char **)&g_WebBrowser; /*0x77e919*/
  String::AssignFromPtr((char **)&v24, v5); /*0x77e923*/
  if ( String::Compare((const char **)&v24, (const char **)&g_WebBrowser) && !a2 ) /*0x77e93c*/
  {
    v6 = (HWND)Dialog::FindByHandle((void *)0xC9); /*0x77e943*/
    EnablePlayerSlotControls(v6, 1u); /*0x77e94c*/
  }
  v7 = g_WOL_State; /*0x77e951*/
  v8 = 0; /*0x77e956*/
  v9 = 0; /*0x77e958*/
  if ( (int)g_WOL_State > 0 ) /*0x77e95c*/
  {
    v10 = 0; /*0x77e95e*/
    while ( 1 ) /*0x77e960*/
    {
      if ( v10 >= 0 && v9 < v7 ) /*0x77e966*/
        v8 = (char *)g_WOL_ConnectionFlags + v10; /*0x77e96d*/
      v11 = String::GetOrEmpty_Alt((char **)&v24); /*0x77e978*/
      if ( !_strcmpi(v11, v8 + 36) ) /*0x77e97e*/
        break; /*0x77e97e*/
      v7 = g_WOL_State; /*0x77e98a*/
      ++v9; /*0x77e98f*/
      v10 += 108; /*0x77e990*/
      if ( v9 >= (int)g_WOL_State ) /*0x77e995*/
        goto LABEL_16; /*0x77e995*/
    }
    if ( v9 != -1 ) /*0x77e99c*/
    {
      MEMORY[0xB76E60][37 * v9] = a2; /*0x77e9a8*/
      DisplayRankingsWOL(0); /*0x77e9af*/
    }
  }
LABEL_16:
  v22 = dword_B77E4C == 1; /*0x77e9b4*/
  String::ToLowerCopy((const char **)&v24, (char **)&v26); /*0x77e9cb*/
  v12 = 0; /*0x77e9d5*/
  if ( MEMORY[0xA8DA84] > 0 ) /*0x77e9d9*/
  {
    while ( 1 ) /*0x77e9e9*/
    {
      WideString::Assign((wchar_t **)&v25, *(wchar_t **)(MEMORY[0xA8DA78] + 4 * v12)); /*0x77e9e9*/
      ToWideStringCharAlt(&i, (const wchar_t **)&v25); /*0x77e9f6*/
      DeleteAndZero::Alt(&v25); /*0x77e9ff*/
      v13 = String::ToLowerCopy((const char **)&i, (char **)&v27); /*0x77ea12*/
      v14 = String::Compare((const char **)v13, (const char **)&v26); /*0x77ea22*/
      DeleteAndZero(&v27); /*0x77ea24*/
      if ( v14 ) /*0x77ea2f*/
        break; /*0x77ea2f*/
      DeleteAndZero((void **)&i); /*0x77ea31*/
      if ( ++v12 >= MEMORY[0xA8DA84] ) /*0x77ea3e*/
        goto LABEL_21; /*0x77ea3e*/
    }
    DeleteAndZero((void **)&i); /*0x77ea42*/
  }
LABEL_21:
  if ( v12 < MEMORY[0xA8DA84] ) /*0x77ea4d*/
  {
    *(_DWORD *)(*(_DWORD *)(MEMORY[0xA8DA78] + 4 * v12) + 119) = a2; /*0x77ea61*/
    if ( v22 && (MEMORY[0xA8B244] == 3 || MEMORY[0xA8B244] == 1 || MEMORY[0xA8B244] == 2) && !byte_B77DEC && v12 == 1 ) /*0x77ea92*/
    {
      v15 = g_WOL_State; /*0x77ea98*/
      if ( g_WOL_State == 2 ) /*0x77eaa1*/
      {
        v16 = 0; /*0x77eaac*/
        v25 = 0; /*0x77eab2*/
        memset(v28, 0, sizeof(v28)); /*0x77eaba*/
        v17 = 0; /*0x77eabc*/
        for ( i = 0; ; v16 = (int)i ) /*0x77eabe*/
        {
          if ( v16 >= 0 && v17 < v15 ) /*0x77eace*/
            qmemcpy(v28, (char *)g_WOL_ConnectionFlags + v16, sizeof(v28)); /*0x77eae2*/
          v18 = __2_YAPAXI_Z(0x6Cu); /*0x77eaeb*/
          v19 = v25; /*0x77eaed*/
          qmemcpy(v18, v28, 0x6Cu); /*0x77eaff*/
          v20 = i; /*0x77eb01*/
          v18[8] = v19; /*0x77eb05*/
          v15 = g_WOL_State; /*0x77eb08*/
          ++v17; /*0x77eb0e*/
          v25 = v18; /*0x77eb14*/
          i = v20 + 108; /*0x77eb18*/
          if ( v17 >= (int)g_WOL_State ) /*0x77eb1c*/
            break; /*0x77eb1c*/
        }
        g_WOL_GameListState = 0; /*0x77eb20*/
        g_WOL_IdleHandler = 9; /*0x77eb2a*/
        g_WOL_GameProcessState = 90; /*0x77eb34*/
        g_WOL_GameListPool = time(0); /*0x77eb43*/
        (*(void (__stdcall **)(LPVOID, _DWORD *))(*(_DWORD *)MEMORY[0xAC116C] + 72))(MEMORY[0xAC116C], v18); /*0x77eb54*/
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
  DeleteAndZero(&v26); /*0x77eb81*/
  DeleteAndZero(&v24); /*0x77eb8a*/
}


// ==== 0x0077EBA0  ObjectClass::SendMultiplayerStartSignal_Start_77EBA0  this=ObjectClass  sig=csp ====
int __thiscall sub_77EBA0(const char **this)
{
  bool v2; // zf
  const char **v3; // eax
  wchar_t **v4; // eax
  wchar_t **v5; // eax
  bool v6; // bl
  int v8; // edi
  int v9; // esi
  char **v10; // eax
  bool v11; // bl
  int v12; // esi
  wchar_t **v13; // [esp-4h] [ebp-24h]
  void *v14; // [esp+Ch] [ebp-14h] BYREF
  void *v15; // [esp+10h] [ebp-10h] BYREF
  void *v16; // [esp+14h] [ebp-Ch] BYREF
  void *v17; // [esp+18h] [ebp-8h] BYREF
  void *v18; // [esp+1Ch] [ebp-4h] BYREF

  v2 = String::Length(this) == 0; /*0x77ebad*/
  v3 = this; /*0x77ebaf*/
  if ( v2 ) /*0x77ebb1*/
    v3 = (const char **)&g_WebBrowser; /*0x77ebb3*/
  String::AssignFromPtr((char **)&v15, v3); /*0x77ebbd*/
  String::ToLowerCopy((const char **)&v15, (char **)&v14); /*0x77ebcb*/
  v4 = WideString::Assign((wchar_t **)&v18, MEMORY[0xA8D610]); /*0x77ebde*/
  v13 = SendMultiplayerStartSignal_Start_77EBA0_Start_7B7740((const wchar_t **)v4, (wchar_t **)&v16); /*0x77ebf2*/
  v5 = CharStringToWide((wchar_t **)&v17, (const char **)&v14); /*0x77ebf3*/
  v6 = SendMultiplayerStartSignal_Start_77EBA0_Start((const wchar_t **)v5, (const wchar_t **)v13); /*0x77ec03*/
  DeleteAndZero::Alt(&v17); /*0x77ec05*/
  DeleteAndZero::Alt(&v16); /*0x77ec0e*/
  DeleteAndZero::Alt(&v18); /*0x77ec17*/
  if ( v6 ) /*0x77ec1e*/
  {
    DeleteAndZero(&v14); /*0x77ec24*/
    DeleteAndZero(&v15); /*0x77ec2d*/
    return 1; /*0x77ec32*/
  }
  else
  {
    v8 = -1; /*0x77ec43*/
    v9 = 0; /*0x77ec46*/
    if ( MEMORY[0xA8DA84] <= 0 ) /*0x77ec4a*/
      goto LABEL_11; /*0x77ec4a*/
    do /*0x77ecb5*/
    {
      WideString::Assign((wchar_t **)&v16, *(wchar_t **)(MEMORY[0xA8DA78] + 4 * v9)); /*0x77ec5e*/
      ToWideStringCharAlt((char **)&v17, (const wchar_t **)&v16); /*0x77ec6b*/
      DeleteAndZero::Alt(&v16); /*0x77ec74*/
      v10 = String::ToLowerCopy((const char **)&v17, (char **)&v18); /*0x77ec87*/
      v11 = String::Compare((const char **)v10, (const char **)&v14); /*0x77ec97*/
      DeleteAndZero(&v18); /*0x77ec99*/
      if ( v11 ) /*0x77eca0*/
        v8 = v9; /*0x77eca2*/
      DeleteAndZero(&v17); /*0x77eca8*/
      ++v9; /*0x77ecb2*/
    }
    while ( v9 < MEMORY[0xA8DA84] ); /*0x77ecb5*/
    if ( v8 == -1 ) /*0x77ecba*/
    {
LABEL_11:
      DeleteAndZero(&v14); /*0x77ece6*/
      DeleteAndZero(&v15); /*0x77ecef*/
      return -1; /*0x77ecf4*/
    }
    else
    {
      v12 = *(_DWORD *)(*(_DWORD *)(MEMORY[0xA8DA78] + 4 * v8) + 119); /*0x77ecc4*/
      DeleteAndZero(&v14); /*0x77eccb*/
      DeleteAndZero(&v15); /*0x77ecd4*/
      return v12; /*0x77ecd9*/
    }
  }
}


// ==== 0x0077ED00  SetupLobbyPlayerSlot  this=-  sig=csp ====
int __fastcall SetupLobbyPlayerSlot(CCINIClass *aP0, CCINIClass *aP1, CCINIClass *aP2, int a4, int aP1a)
{
  int v5; // edi
  int v6; // ebp
  SessionClass *v7; // esi
  ObjectClass *v8; // eax
  bool v9; // bl
  ReferenceCounted *v11; // esi
  int v12; // ebp
  SkirmishDialog *PlayerSide; // eax
  int ResourceID2CSF; // ebx
  LRESULT ComboBoxSelected; // eax
  int ResourceID3CSF; // eax
  int ResourceID4CSF; // eax
  int v18; // eax
  HWND DlgItem; // eax
  int ResourceIDCSF; // ebx
  int v21; // eax
  int v22; // eax
  int v23; // eax
  HWND v24; // eax
  int v25; // ebx
  char *v26; // [esp+10h] [ebp-14h] BYREF
  ObjectClass *v27; // [esp+14h] [ebp-10h] BYREF
  wchar_t *v28; // [esp+18h] [ebp-Ch] BYREF
  SkirmishDialog *v29; // [esp+1Ch] [ebp-8h]
  int v30; // [esp+20h] [ebp-4h] BYREF

  v29 = (SkirmishDialog *)aP1; /*0x77ed0b*/
  v5 = -1; /*0x77ed10*/
  String::ToLowerCopy((const char **)aP0, (ObjectClass *)&v27); /*0x77ed13*/
  v6 = 0; /*0x77ed18*/
  v7 = (SessionClass *)&HouseClass_Player.__pad_5568[18396]; /*0x77ed1a*/
  while ( 1 ) /*0x77ed26*/
  {
    WideString::Assign(&v28, (CampaignScore *)v7->GameMode[0]); /*0x77ed26*/
    ToWideStringCharAlt(&v26, (const wchar_t **)&v28); /*0x77ed33*/
    DeleteAndZero::Alt((void **)&v28); /*0x77ed3c*/
    v8 = (ObjectClass *)String::ToLowerCopy((const char **)&v26, (ObjectClass *)&v30); /*0x77ed4a*/
    v9 = String::Compare((const char **)&v27, (const char **)v8); /*0x77ed5d*/
    DeleteAndZero((int)&v30); /*0x77ed5f*/
    if ( v9 ) /*0x77ed66*/
      break; /*0x77ed66*/
    DeleteAndZero((int)&v26); /*0x77ed6c*/
    v7 = (SessionClass *)((char *)v7 + 4); /*0x77ed71*/
    ++v6; /*0x77ed74*/
    if ( (int)v7 >= (int)&HouseClass_Player.__pad_5568[18428] ) /*0x77ed7b*/
      goto LABEL_6; /*0x77ed7b*/
  }
  v5 = v6; /*0x77ed83*/
  DeleteAndZero((int)&v26); /*0x77ed85*/
LABEL_6:
  v26 = 0; /*0x77ed8a*/
  if ( v5 == -1 ) /*0x77ed95*/
  {
    DeleteAndZero((int)&v27); /*0x77ed9b*/
    return 0; /*0x77eda0*/
  }
  else
  {
    v11 = (ReferenceCounted *)Dialog::FindByHandle((void *)0xC2); /*0x77edb6*/
    if ( !v11 ) /*0x77edba*/
      v11 = (ReferenceCounted *)Dialog::FindByHandle((void *)0xC9); /*0x77edc6*/
    v12 = *(_DWORD *)&HouseClass_Player.__pad_5568[4 * v5 + 18396]; /*0x77edc8*/
    if ( SessionClass::GetOption(v12) != a4 ) /*0x77ede1*/
    {
      v26 = (char *)1; /*0x77ede6*/
      SessionClass::SetOption(v12, (SessionClass *)a4); /*0x77edea*/
    }
    if ( SessionClass::GetOption2(*(_DWORD *)&HouseClass_Player.__pad_5568[4 * v5 + 18396]) != aP1a ) /*0x77ee01*/
    {
      v26 = (char *)1; /*0x77ee06*/
      SessionClass::SetOption2(v12, (SessionClass *)aP1a); /*0x77ee0a*/
    }
    PlayerSide = (SkirmishDialog *)SessionClass::GetPlayerSide(*(_DWORD *)&HouseClass_Player.__pad_5568[4 * v5 + 18396]); /*0x77ee16*/
    if ( PlayerSide != v29 ) /*0x77ee21*/
    {
      v26 = (char *)1; /*0x77ee2a*/
      SessionClass::SetPlayerOption(v12, v29); /*0x77ee2e*/
      ResourceID2CSF = GetResourceID2CSF((void *)v5); /*0x77ee3a*/
      ComboBoxSelected = GetComboBoxSelected(v11, ResourceID2CSF, 0xFFFFFFFF); /*0x77ee42*/
      if ( v29 == (SkirmishDialog *)-3 ) /*0x77ee4c*/
      {
        if ( ComboBoxSelected != -3 ) /*0x77ee51*/
        {
          SetupComboBoxObserver((HWND)v11, ResourceID2CSF); /*0x77ee5b*/
          ResourceID3CSF = GetResourceID3CSF((void *)v5); /*0x77ee62*/
          SetupComboBoxRandomAlliance((HWND)v11, ResourceID3CSF); /*0x77ee6b*/
          ResourceID4CSF = GetResourceID4CSF((void *)v5); /*0x77ee72*/
          InitComboBoxNone((HWND)v11, ResourceID4CSF); /*0x77ee7b*/
          v18 = PlayerSlot::IndexToDlgID((void *)v5); /*0x77ee82*/
          DlgItem = GetDlgItem((HWND)v11, v18); /*0x77ee92*/
          SendMessageA(DlgItem, 0x4F1u, 0, 1); /*0x77ee99*/
          ResourceIDCSF = GetResourceIDCSF((void *)v5); /*0x77eea6*/
          FillListBox((HWND)v11, ResourceIDCSF); /*0x77eeac*/
          SetupSkirmishSpawnLocations((HWND)v11, ResourceIDCSF, 8); /*0x77eeb3*/
        }
      }
      else if ( ComboBoxSelected == -3 ) /*0x77eeb8*/
      {
        FillComboBoxRandomOnly((HWND)v11, ResourceID2CSF); /*0x77eebe*/
        v21 = GetResourceID3CSF((void *)v5); /*0x77eec5*/
        FillComboBoxAllianceSlots((HWND)v11, v21); /*0x77eece*/
        v22 = GetResourceID4CSF((void *)v5); /*0x77eed5*/
        FillLobbyPlayerSlot((HWND)v11, v22); /*0x77eede*/
        v23 = PlayerSlot::IndexToDlgID((void *)v5); /*0x77eee5*/
        v24 = GetDlgItem((HWND)v11, v23); /*0x77eef5*/
        SendMessageA(v24, 0x4F1u, 0, 0); /*0x77eefc*/
        v25 = GetResourceIDCSF((void *)v5); /*0x77ef09*/
        FillComboBoxFactions((HWND)v11, v25); /*0x77ef0f*/
        SetupSkirmishSpawnLocations((HWND)v11, v25, -2); /*0x77ef1a*/
      }
      if ( SessionClass::GetPlayerSide(v12) == -3 ) /*0x77ef29*/
        *(_DWORD *)(v12 + 107) = -1; /*0x77ef2b*/
    }
    if ( (CCINIClass *)SessionClass::GetPlayerColor(*(_DWORD *)&HouseClass_Player.__pad_5568[4 * v5 + 18396]) != aP2 ) /*0x77ef44*/
      SessionClass::SetPlayerColor(v12, (int)aP2); /*0x77ef49*/
    if ( *(_DWORD *)&HouseClass_Player.__pad_5568[4 * v5 + 18396] == **(_DWORD **)&HouseClass_Player.__pad_5568[18372] ) /*0x77ef5d*/
      *(_DWORD *)&HouseClass_Player.__pad_5568[8416] = aP2; /*0x77ef5f*/
    DisplayRankingsWOL(0, 0); /*0x77ef69*/
    DeleteAndZero((int)&v27); /*0x77ef72*/
    return (int)v26; /*0x77ef77*/
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
  if ( (*(int (__stdcall **)(LPVOID, int, int))(*(_DWORD *)MEMORY[0xAC116C] + 24))(MEMORY[0xAC116C], a1, v3) ) /*0x77efbc*/
    return 0; /*0x77efc4*/
  v5 = g_WOL_RequestState; /*0x77efcb*/
  v6 = g_WOL_RequestState; /*0x77efd0*/
  v13 = g_WOL_RequestState; /*0x77efd4*/
  v7 = g_WOL_RequestToken; /*0x77efe0*/
  if ( g_WOL_RequestState < g_WOL_RequestToken ) /*0x77efe8*/
  {
    v8 = (char *)g_WOL_RequestFlags; /*0x77f05b*/
  }
  else
  {
    v7 = 2 * g_WOL_RequestState; /*0x77efee*/
    if ( 2 * g_WOL_RequestState < 10 ) /*0x77eff4*/
      v7 = 10; /*0x77eff6*/
    v8 = (char *)__2_YAPAXI_Z(4 * v7); /*0x77f00a*/
    memset(v8, 0, 4 * ((unsigned int)(4 * v7) >> 2)); /*0x77f018*/
    v9 = g_WOL_RequestFlags; /*0x77f021*/
    if ( g_WOL_RequestFlags ) /*0x77f028*/
    {
      qmemcpy(v8, g_WOL_RequestFlags, 4 * g_WOL_RequestState); /*0x77f034*/
      v9 = g_WOL_RequestFlags; /*0x77f036*/
      v6 = v13; /*0x77f03b*/
    }
    __3_YAXPAX_Z(v9); /*0x77f040*/
    v5 = g_WOL_RequestState; /*0x77f045*/
    g_WOL_RequestFlags = v8; /*0x77f04d*/
    g_WOL_RequestToken = v7; /*0x77f053*/
  }
  if ( v5 >= v7 ) /*0x77f063*/
  {
    v10 = 2 * v5; /*0x77f065*/
    if ( 2 * v5 < 10 ) /*0x77f06b*/
      v10 = 10; /*0x77f06d*/
    v8 = (char *)__2_YAPAXI_Z(4 * v10); /*0x77f081*/
    memset(v8, 0, 4 * ((unsigned int)(4 * v10) >> 2)); /*0x77f08f*/
    v11 = g_WOL_RequestFlags; /*0x77f098*/
    if ( g_WOL_RequestFlags ) /*0x77f09f*/
    {
      qmemcpy(v8, g_WOL_RequestFlags, 4 * g_WOL_RequestState); /*0x77f0ab*/
      v11 = g_WOL_RequestFlags; /*0x77f0ad*/
      v6 = v13; /*0x77f0b2*/
    }
    __3_YAXPAX_Z(v11); /*0x77f0b7*/
    v5 = g_WOL_RequestState; /*0x77f0bc*/
    g_WOL_RequestFlags = v8; /*0x77f0c4*/
    g_WOL_RequestToken = v10; /*0x77f0ca*/
  }
  if ( v6 < v5 ) /*0x77f0d2*/
  {
    memcpy(&v8[4 * v6 + 4], &v8[4 * v6], 4 * (v5 + 0x3FFFFFFF * v6)); /*0x77f0ea*/
    v8 = (char *)g_WOL_RequestFlags; /*0x77f0ef*/
    v5 = g_WOL_RequestState; /*0x77f0f5*/
  }
  v12 = &v8[4 * v6]; /*0x77f0fd*/
  if ( v12 ) /*0x77f104*/
  {
    *(_DWORD *)v12 = a1; /*0x77f10a*/
    v5 = g_WOL_RequestState; /*0x77f10c*/
  }
  g_WOL_RequestState = v5 + 1; /*0x77f113*/
  return 1; /*0x77efc3*/
}


// ==== 0x0077F120  RequestChannelListWOL  this=-  sig=ida-proto ====
char RequestChannelListWOL()
{
  wchar_t *StringCSF; // eax
  int v1; // edi
  CreateGameDialogControl *ecx2; // ecx
  CampaignScore *v2; // ebx
  wchar_t *v4; // eax
  HWND v6; // eax
  HWND Current; // eax
  HWND DlgItem; // eax
  HWND v9; // eax
  HWND v10; // eax
  HWND v11; // eax
  HWND v12; // eax
  HWND v13; // eax
  HWND v14; // eax
  const wchar_t *v15; // [esp+0h] [ebp-14h]
  CampaignScore *v16; // [esp+4h] [ebp-10h]
  wchar_t *v17; // [esp+10h] [ebp-4h] BYREF

  StringCSF = GetStringCSF(aTxtReqChanlist, 0, (CampaignScore *)g_Str_File_wonline_cpp, 2298); /*0x77f136*/
  WideString::Assign(&v17, (CampaignScore *)StringCSF); /*0x77f140*/
  ShowUIMessage((MPCooperative *)1, &v17, 0); /*0x77f150*/
  DeleteAndZero::Alt((void **)&v17); /*0x77f159*/
  v1 = 0; /*0x77f16a*/
  while ( 1 ) /*0x77f179*/
  {
    v2 = (CampaignScore *)WaitForMultipleObjects(0x12u, (const HANDLE *)&Handles, 0, 0x64u); /*0x77f179*/
    if ( v2 == (CampaignScore *)258 ) /*0x77f181*/
      break; /*0x77f181*/
LABEL_5:
    if ( v2 == (CampaignScore *)-1 ) /*0x77f1ad*/
    {
      v6 = (HWND)Dialog::FindByHandle((void *)0xC4); /*0x77f227*/
      if ( v6 ) /*0x77f22e*/
      {
        g_WOL_ChannelList = (MPCooperative *)((unsigned int)g_WOL_ChannelList & 0xFFFFFFFE); /*0x77f239*/
        if ( !g_WOL_ChannelList ) /*0x77f23f*/
          CloseDialog(v6, 0); /*0x77f245*/
      }
      Current = Dialog::GetCurrent(); /*0x77f24a*/
      DlgItem = GetDlgItem(Current, 1344); /*0x77f255*/
      if ( DlgItem ) /*0x77f25d*/
        SetFocus(DlgItem); /*0x77f260*/
      Debug::Log(); /*0x77f26b*/
      return 0; /*0x77f27a*/
    }
    if ( (char)v2 < 0 ) /*0x77f1b2*/
      v2 = (CampaignScore *)((char *)v2 - 128); /*0x77f1b4*/
    if ( (unsigned int)v2 >= 0x12 ) /*0x77f1bd*/
      return 0; /*0x77f1bd*/
    ResetEvent(*(&Handles + (_DWORD)v2)); /*0x77f1cb*/
    if ( v2 == (CampaignScore *)5 || !v2 ) /*0x77f1d8*/
    {
      v9 = (HWND)Dialog::FindByHandle((void *)0xC4); /*0x77f280*/
      if ( v9 ) /*0x77f287*/
      {
        g_WOL_ChannelList = (MPCooperative *)((unsigned int)g_WOL_ChannelList & 0xFFFFFFFE); /*0x77f292*/
        if ( !g_WOL_ChannelList ) /*0x77f298*/
          CloseDialog(v9, 0); /*0x77f29e*/
      }
      v10 = Dialog::GetCurrent(); /*0x77f2a3*/
      v11 = GetDlgItem(v10, 1344); /*0x77f2ae*/
      if ( v11 ) /*0x77f2b6*/
        SetFocus(v11); /*0x77f2b9*/
      return 0; /*0x77f2c6*/
    }
    if ( v2 == (CampaignScore *)3 ) /*0x77f1e1*/
    {
      v12 = (HWND)Dialog::FindByHandle((void *)0xC4); /*0x77f2cc*/
      if ( v12 ) /*0x77f2d3*/
      {
        g_WOL_ChannelList = (MPCooperative *)((unsigned int)g_WOL_ChannelList & 0xFFFFFFFE); /*0x77f2de*/
        if ( !g_WOL_ChannelList ) /*0x77f2e4*/
          CloseDialog(v12, 0); /*0x77f2ea*/
      }
      v13 = Dialog::GetCurrent(); /*0x77f2ef*/
      v14 = GetDlgItem(v13, 1344); /*0x77f2fa*/
      if ( v14 ) /*0x77f302*/
        SetFocus(v14); /*0x77f305*/
      return 1; /*0x77f30e*/
    }
  }
  while ( 1 ) /*0x77f183*/
  {
    v1 += 100; /*0x77f183*/
    if ( v1 > 30000 ) /*0x77f18c*/
      break; /*0x77f18c*/
    Game::ProcessIdle(ecx2); /*0x77f18e*/
    v2 = (CampaignScore *)WaitForMultipleObjects(0x12u, (const HANDLE *)&Handles, 0, 0x64u); /*0x77f1a0*/
    if ( v2 != (CampaignScore *)258 ) /*0x77f1a8*/
      goto LABEL_5; /*0x77f1a8*/
  }
  v4 = GetStringCSF(g_Str_TXT_CANT_CONNECT, 0, (CampaignScore *)g_Str_File_wonline_cpp, 2307); /*0x77f1fa*/
  swprintf(&word_B77AD0, (const size_t)v4, v15, v16); /*0x77f205*/
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
  if ( !g_WOL_RequestState || (result = RequestChannelListWOL()) != 0 ) /*0x77f33f*/
  {
    v6 = &Handles; /*0x77f351*/
    do /*0x77f364*/
      ResetEvent(*v6++); /*0x77f359*/
    while ( (int)v6 < (int)g_WOL_RequestObject ); /*0x77f364*/
    Debug::Log(); /*0x77f375*/
    if ( (*(int (__stdcall **)(LPVOID, int, _DWORD))(*(_DWORD *)MEMORY[0xAC116C] + 24))(MEMORY[0xAC116C], v3, a2) ) /*0x77f387*/
    {
      SetEvent(Handles); /*0x77f4fd*/
      return 0; /*0x77f503*/
    }
    else
    {
      v7 = g_WOL_RequestState; /*0x77f392*/
      v8 = g_WOL_RequestState; /*0x77f397*/
      v16 = g_WOL_RequestState; /*0x77f39b*/
      v9 = g_WOL_RequestToken; /*0x77f3a5*/
      if ( g_WOL_RequestState >= g_WOL_RequestToken ) /*0x77f3ad*/
      {
        v9 = 2 * g_WOL_RequestState; /*0x77f3b7*/
        if ( 2 * g_WOL_RequestState < 10 ) /*0x77f3bd*/
          v9 = 10; /*0x77f3bf*/
        v10 = __2_YAPAXI_Z(4 * v9); /*0x77f3d3*/
        memset(v10, 0, 4 * ((unsigned int)(4 * v9) >> 2)); /*0x77f3e1*/
        v11 = g_WOL_RequestFlags; /*0x77f3ea*/
        if ( g_WOL_RequestFlags ) /*0x77f3f1*/
        {
          qmemcpy(v10, g_WOL_RequestFlags, 4 * g_WOL_RequestState); /*0x77f3fd*/
          v11 = g_WOL_RequestFlags; /*0x77f3ff*/
          v8 = v16; /*0x77f404*/
        }
        __3_YAXPAX_Z(v11); /*0x77f409*/
        v7 = g_WOL_RequestState; /*0x77f40e*/
        g_WOL_RequestFlags = v10; /*0x77f413*/
        v3 = a1; /*0x77f419*/
        g_WOL_RequestToken = v9; /*0x77f420*/
      }
      if ( v7 >= v9 ) /*0x77f428*/
      {
        v12 = 2 * v7; /*0x77f42a*/
        if ( 2 * v7 < 10 ) /*0x77f430*/
          v12 = 10; /*0x77f432*/
        v13 = __2_YAPAXI_Z(4 * v12); /*0x77f446*/
        memset(v13, 0, 4 * ((unsigned int)(4 * v12) >> 2)); /*0x77f454*/
        v14 = g_WOL_RequestFlags; /*0x77f45d*/
        if ( g_WOL_RequestFlags ) /*0x77f464*/
        {
          qmemcpy(v13, g_WOL_RequestFlags, 4 * g_WOL_RequestState); /*0x77f470*/
          v14 = g_WOL_RequestFlags; /*0x77f472*/
          v8 = v16; /*0x77f477*/
        }
        __3_YAXPAX_Z(v14); /*0x77f47c*/
        v7 = g_WOL_RequestState; /*0x77f481*/
        g_WOL_RequestFlags = v13; /*0x77f486*/
        v3 = a1; /*0x77f48c*/
        g_WOL_RequestToken = v12; /*0x77f493*/
      }
      if ( v8 < v7 ) /*0x77f49b*/
      {
        memcpy((char *)g_WOL_RequestFlags + 4 * v8 + 4, (char *)g_WOL_RequestFlags + 4 * v8, 4 * (v7 + 0x3FFFFFFF * v8)); /*0x77f4b8*/
        v7 = g_WOL_RequestState; /*0x77f4bd*/
      }
      v15 = (char *)g_WOL_RequestFlags + 4 * v8; /*0x77f4cb*/
      if ( v15 ) /*0x77f4d0*/
      {
        *v15 = v3; /*0x77f4d2*/
        v7 = g_WOL_RequestState; /*0x77f4d4*/
      }
      g_WOL_RequestState = v7 + 1; /*0x77f4da*/
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

  if ( !g_WOL_RequestState || (result = RequestChannelListWOL()) != 0 ) /*0x77f539*/
  {
    v2 = &Handles; /*0x77f547*/
    do /*0x77f55a*/
      ResetEvent(*v2++); /*0x77f54f*/
    while ( (int)v2 < (int)g_WOL_RequestObject ); /*0x77f55a*/
    Debug::Log(); /*0x77f565*/
    if ( (*(int (__stdcall **)(LPVOID, _DWORD, _DWORD))(*(_DWORD *)MEMORY[0xAC116C] + 24))(MEMORY[0xAC116C], 0, 0) ) /*0x77f579*/
    {
      SetEvent(Handles); /*0x77f6eb*/
      return 0; /*0x77f6f1*/
    }
    else
    {
      v3 = g_WOL_RequestState; /*0x77f584*/
      v4 = g_WOL_RequestState; /*0x77f589*/
      v13 = g_WOL_RequestState; /*0x77f58d*/
      v5 = g_WOL_RequestToken; /*0x77f598*/
      if ( g_WOL_RequestState >= g_WOL_RequestToken ) /*0x77f5a1*/
      {
        v5 = 2 * g_WOL_RequestState; /*0x77f5ab*/
        if ( 2 * g_WOL_RequestState < 10 ) /*0x77f5b1*/
          v5 = 10; /*0x77f5b3*/
        v6 = __2_YAPAXI_Z(4 * v5); /*0x77f5c7*/
        memset(v6, 0, 4 * ((unsigned int)(4 * v5) >> 2)); /*0x77f5d5*/
        v7 = g_WOL_RequestFlags; /*0x77f5de*/
        if ( g_WOL_RequestFlags ) /*0x77f5e5*/
        {
          qmemcpy(v6, g_WOL_RequestFlags, 4 * g_WOL_RequestState); /*0x77f5f1*/
          v7 = g_WOL_RequestFlags; /*0x77f5f3*/
          v4 = v13; /*0x77f5f8*/
        }
        __3_YAXPAX_Z(v7); /*0x77f5fd*/
        v3 = g_WOL_RequestState; /*0x77f602*/
        g_WOL_RequestFlags = v6; /*0x77f60a*/
        g_WOL_RequestToken = v5; /*0x77f610*/
      }
      if ( v3 >= v5 ) /*0x77f618*/
      {
        v8 = 2 * v3; /*0x77f61a*/
        if ( 2 * v3 < 10 ) /*0x77f620*/
          v8 = 10; /*0x77f622*/
        v9 = __2_YAPAXI_Z(4 * v8); /*0x77f636*/
        memset(v9, 0, 4 * ((unsigned int)(4 * v8) >> 2)); /*0x77f644*/
        v10 = g_WOL_RequestFlags; /*0x77f64d*/
        if ( g_WOL_RequestFlags ) /*0x77f654*/
        {
          qmemcpy(v9, g_WOL_RequestFlags, 4 * g_WOL_RequestState); /*0x77f660*/
          v10 = g_WOL_RequestFlags; /*0x77f662*/
          v4 = v13; /*0x77f667*/
        }
        __3_YAXPAX_Z(v10); /*0x77f66c*/
        v3 = g_WOL_RequestState; /*0x77f671*/
        g_WOL_RequestFlags = v9; /*0x77f679*/
        g_WOL_RequestToken = v8; /*0x77f67f*/
      }
      if ( v4 < v3 ) /*0x77f689*/
      {
        memcpy((char *)g_WOL_RequestFlags + 4 * v4 + 4, (char *)g_WOL_RequestFlags + 4 * v4, 4 * (v3 + 0x3FFFFFFF * v4)); /*0x77f6a6*/
        v3 = g_WOL_RequestState; /*0x77f6ab*/
      }
      v11 = (char *)g_WOL_RequestFlags + 4 * v4; /*0x77f6b9*/
      if ( v11 ) /*0x77f6be*/
      {
        *v11 = 0; /*0x77f6c0*/
        v3 = g_WOL_RequestState; /*0x77f6c6*/
      }
      g_WOL_RequestState = v3 + 1; /*0x77f6cc*/
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

  if ( !g_WOL_RequestState || (result = RequestChannelListWOL()) != 0 ) /*0x77f72c*/
  {
    v4 = &Handles; /*0x77f73b*/
    do /*0x77f74e*/
      ResetEvent(*v4++); /*0x77f743*/
    while ( (int)v4 < (int)g_WOL_RequestObject ); /*0x77f74e*/
    Debug::Log(); /*0x77f760*/
    if ( (*(int (__stdcall **)(LPVOID, int, _DWORD))(*(_DWORD *)MEMORY[0xAC116C] + 24))(MEMORY[0xAC116C], 41, a1) ) /*0x77f773*/
    {
      SetEvent(Handles); /*0x77f8e4*/
      return 0; /*0x77f8ea*/
    }
    else
    {
      v5 = g_WOL_RequestState; /*0x77f77e*/
      v6 = g_WOL_RequestState; /*0x77f783*/
      v15 = g_WOL_RequestState; /*0x77f787*/
      v7 = g_WOL_RequestToken; /*0x77f791*/
      if ( g_WOL_RequestState >= g_WOL_RequestToken ) /*0x77f79a*/
      {
        v7 = 2 * g_WOL_RequestState; /*0x77f7a4*/
        if ( 2 * g_WOL_RequestState < 10 ) /*0x77f7aa*/
          v7 = 10; /*0x77f7ac*/
        v8 = __2_YAPAXI_Z(4 * v7); /*0x77f7c0*/
        memset(v8, 0, 4 * ((unsigned int)(4 * v7) >> 2)); /*0x77f7ce*/
        v9 = g_WOL_RequestFlags; /*0x77f7d7*/
        if ( g_WOL_RequestFlags ) /*0x77f7de*/
        {
          qmemcpy(v8, g_WOL_RequestFlags, 4 * g_WOL_RequestState); /*0x77f7ea*/
          v9 = g_WOL_RequestFlags; /*0x77f7ec*/
          v6 = v15; /*0x77f7f1*/
        }
        __3_YAXPAX_Z(v9); /*0x77f7f6*/
        v5 = g_WOL_RequestState; /*0x77f7fb*/
        g_WOL_RequestFlags = v8; /*0x77f803*/
        g_WOL_RequestToken = v7; /*0x77f809*/
      }
      if ( v5 >= v7 ) /*0x77f811*/
      {
        v10 = 2 * v5; /*0x77f813*/
        if ( 2 * v5 < 10 ) /*0x77f819*/
          v10 = 10; /*0x77f81b*/
        v11 = __2_YAPAXI_Z(4 * v10); /*0x77f82f*/
        memset(v11, 0, 4 * ((unsigned int)(4 * v10) >> 2)); /*0x77f83d*/
        v12 = g_WOL_RequestFlags; /*0x77f846*/
        if ( g_WOL_RequestFlags ) /*0x77f84d*/
        {
          qmemcpy(v11, g_WOL_RequestFlags, 4 * g_WOL_RequestState); /*0x77f859*/
          v12 = g_WOL_RequestFlags; /*0x77f85b*/
          v6 = v15; /*0x77f860*/
        }
        __3_YAXPAX_Z(v12); /*0x77f865*/
        v5 = g_WOL_RequestState; /*0x77f86a*/
        g_WOL_RequestFlags = v11; /*0x77f872*/
        g_WOL_RequestToken = v10; /*0x77f878*/
      }
      if ( v6 < v5 ) /*0x77f881*/
      {
        memcpy((char *)g_WOL_RequestFlags + 4 * v6 + 4, (char *)g_WOL_RequestFlags + 4 * v6, 4 * (v5 + 0x3FFFFFFF * v6)); /*0x77f89e*/
        v5 = g_WOL_RequestState; /*0x77f8a3*/
      }
      v13 = (char *)g_WOL_RequestFlags + 4 * v6; /*0x77f8b1*/
      if ( v13 ) /*0x77f8b6*/
      {
        *v13 = 41; /*0x77f8b8*/
        v5 = g_WOL_RequestState; /*0x77f8be*/
      }
      g_WOL_RequestState = v5 + 1; /*0x77f8c4*/
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
  int v1; // ebx
  int v2; // ebp
  signed int v3; // ebx
  int v4; // esi
  IUnknown *v5; // eax
  wchar_t *StringCSF; // eax
  int i; // esi
  int ebp30; // ebp
  int esi30; // esi
  char *v10; // edx
  CCINIClass *v8; // eax
  ObjectClass *v9; // esi
  int k; // esi
  int v14; // ebx
  int esi56; // esi
  int ebp62; // ebp
  AbstractClass *eax65; // eax
  AbstractClass *v15; // esi
  AbstractClass *v16; // ebx
  AbstractClass *v17; // edx
  CCINIClass *v18; // eax
  ObjectClass *v19; // esi
  signed int v23; // eax
  int ebp107; // ebp
  ObjectClass *v24; // eax
  int X; // esi
  char *v27; // eax
  void *j; // [esp+24h] [ebp-A0h] BYREF
  ObjectClass *Block; // [esp+28h] [ebp-9Ch] BYREF
  const char *m; // [esp+2Ch] [ebp-98h] BYREF
  bool v32; // [esp+33h] [ebp-91h]
  char *v33; // [esp+34h] [ebp-90h] BYREF
  int v34; // [esp+38h] [ebp-8Ch] BYREF
  MSG Msg; // [esp+3Ch] [ebp-88h] BYREF
  struct in_addr Buffer[27]; // [esp+58h] [ebp-6Ch] BYREF

  ScreenSaver::Process(0, v1, v2); /*0x77f90c*/
  v3 = 0; /*0x77f916*/
  v4 = 0; /*0x77f918*/
  ++*(_DWORD *)&MEMORY[0xA8D63C].__pad_579C[54872]; /*0x77f925*/
  if ( GameLoopMessagePump(&Msg, 0, 0, 0, 1u) ) /*0x77f92a*/
  {
    do /*0x77f95d*/
    {
      TranslateMessage(&Msg); /*0x77f944*/
      DispatchMessageA(&Msg); /*0x77f94b*/
      ++v4; /*0x77f94d*/
    }
    while ( v4 != 100 && GameLoopMessagePump(&Msg, 0, 0, 0, 1u) ); /*0x77f95d*/
  }
  if ( (MEMORY[0xA8B244] == 3 || MEMORY[0xA8B244] == 1 || MEMORY[0xA8B244] == 2) /*0x77f9c5*/
    && g_WOL_GameProcessState != -1
    && (unsigned int)g_WOL_IdleHandler >= 2
    && g_WOL_IdleHandler != 11
    && time(0) - (int)g_WOL_GameListPool > (unsigned int)g_WOL_GameProcessState )
  {
    if ( g_WOL_IdleHandler == 5 ) /*0x77f9d3*/
    {
      g_WOL_GameListState = 0; /*0x77fa55*/
      g_WOL_IdleHandler = 5; /*0x77fa5b*/
      g_WOL_GameProcessState = 180; /*0x77fa65*/
      g_WOL_GameListPool = (IUnknown *)time(0); /*0x77fa77*/
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
        v5 = (IUnknown *)time(0); /*0x77fa38*/
      }
      else
      {
        g_WOL_GameListState = 2; /*0x77f9e4*/
        g_WOL_IdleHandler = 0; /*0x77f9ea*/
        g_WOL_GameProcessState = -1; /*0x77f9f0*/
        v5 = (IUnknown *)time(0); /*0x77f9f6*/
      }
      g_WOL_GameListPool = v5; /*0x77fa46*/
      SetEvent(hEvent); /*0x77fa4c*/
    }
  }
  Dialog::GetCurrentType(); /*0x77fa7c*/
  if ( g_WOL_ChatPool > 200 ) /*0x77fa8b*/
  {
    for ( i = 0; i < g_WOL_ChatPool; ++i ) /*0x77fa91*/
      DeleteAndZero((void **)dword_B777A8 + i); /*0x77fa9b*/
    g_WOL_ChatPool = 0; /*0x77faaa*/
  }
  if ( (unsigned int)dword_B76180 < time(0) - 2 && g_WOL_ChatPool > 65 /*0x77fb0e*/
    || (unsigned int)dword_B76180 < time(0) - 3 && g_WOL_ChatPool > 10
    || (unsigned int)dword_B76180 < time(0) - 15 && g_WOL_ChatPool > 0 )
  {
    Block = 0; /*0x77fb14*/
    for ( j = 0; (int)j < 10; j = (char *)j + 1 ) /*0x77fb18*/
    {
      if ( g_WOL_ChatPool <= 0 ) /*0x77fb23*/
        break; /*0x77fb23*/
      ebp30 = __2_YAPAXI_Z(0x6Cu); /*0x77fb30*/
      memset((void *)ebp30, 0, 0x6Cu); /*0x77fb3b*/
      unknown_libname_73(&v33); /*0x77fb44*/
      esi30 = g_WOL_ChatPool - 1; /*0x77fb4e*/
      if ( g_WOL_ChatPool - 1 >= 0 && esi30 < g_WOL_ChatPool ) /*0x77fb57*/
      {
        String::Reassign(&v33, (AbstractClass *)((char *)dword_B777A8 + 4 * esi30)); /*0x77fb67*/
        DynamicArray::Remove(&g_WOL_ChatPool, esi30); /*0x77fb72*/
      }
      v10 = String::GetOrEmpty(&v33); /*0x77fb80*/
      if ( strlen(v10) > 9 ) /*0x77fb91*/
        v10[9] = 0; /*0x77fb93*/
      strcpy((char *)(ebp30 + 36), v10); /*0x77fbb1*/
      if ( v3 ) /*0x77fbbc*/
        *(_DWORD *)(v3 + 32) = ebp30; /*0x77fbc4*/
      else
        Block = (ObjectClass *)ebp30; /*0x77fbbe*/
      v3 = ebp30; /*0x77fbcb*/
      DeleteAndZero((void **)&v33); /*0x77fbcd*/
    }
    if ( *(&g_MatrixTransformState + 2263) ) /*0x77fbeb*/
      (*(void (__stdcall **)(_DWORD, ObjectClass *))((*(&g_MatrixTransformState + 2263))->X + 192))( /*0x77fbf5*/
        *(&g_MatrixTransformState + 2263),
        Block);
    v8 = (CCINIClass *)Block; /*0x77fc03*/
    if ( Block ) /*0x77fc05*/
    {
      do /*0x77fc17*/
      {
        v9 = *(ObjectClass **)v8->__pad_20; /*0x77fc07*/
        __3_YAXPAX_Z(v8); /*0x77fc0b*/
        v8 = (CCINIClass *)v9; /*0x77fc13*/
      }
      while ( v9 ); /*0x77fc17*/
    }
    dword_B76180 = (ObjectClass *)time(0); /*0x77fc23*/
    v3 = 0; /*0x77fc28*/
  }
  if ( g_WOL_LoginToken > 200 ) /*0x77fc34*/
  {
    for ( k = 0; k < g_WOL_LoginToken; ++k ) /*0x77fc3a*/
      DeleteAndZero((void **)dword_B76600 + k); /*0x77fc45*/
    g_WOL_LoginToken = 0; /*0x77fc54*/
  }
  if ( (unsigned int)dword_B7617C < time(0) - 2 && g_WOL_LoginToken > 65 /*0x77fcb8*/
    || (unsigned int)dword_B7617C < time(0) - 3 && g_WOL_LoginToken > 10
    || (unsigned int)dword_B7617C < time(0) - 15 && g_WOL_LoginToken > 0 )
  {
    j = 0; /*0x77fcbe*/
    Block = 0; /*0x77fcc2*/
    for ( m = 0; (int)m < 10; ++m ) /*0x77fcc6*/
    {
      if ( g_WOL_LoginToken <= 0 ) /*0x77fcd1*/
        break; /*0x77fcd1*/
      v14 = __2_YAPAXI_Z(0x6Cu); /*0x77fcde*/
      memset((void *)v14, 0, 0x6Cu); /*0x77fce9*/
      v34 = v14; /*0x77fcf2*/
      unknown_libname_73(&v33); /*0x77fcf6*/
      esi56 = g_WOL_LoginToken - 1; /*0x77fd00*/
      if ( g_WOL_LoginToken - 1 >= 0 && esi56 < g_WOL_LoginToken ) /*0x77fd0d*/
      {
        String::Reassign(&v33, (AbstractClass *)((char *)dword_B76600 + 4 * esi56)); /*0x77fd20*/
        if ( g_WOL_LoginToken ) /*0x77fd2c*/
        {
          if ( esi56 >= g_WOL_LoginToken ) /*0x77fd34*/
            esi56 = g_WOL_LoginToken - 1; /*0x77fd36*/
          DeleteAndZero((void **)dword_B76600 + esi56); /*0x77fd42*/
          memcpy( /*0x77fd6b*/
            (char *)dword_B76600 + 4 * esi56,
            &dword_B76600->__pad_0[4 * esi56 + 4],
            4 * (g_WOL_LoginToken + 0x3FFFFFFF * (esi56 + 1)));
          --g_WOL_LoginToken; /*0x77fd7f*/
          if ( 3 * g_WOL_LoginToken <= dword_B765FC ) /*0x77fd89*/
          {
            ebp62 = dword_B765FC / 2; /*0x77fd92*/
            if ( dword_B765FC / 2 < 10 ) /*0x77fd97*/
              ebp62 = 10; /*0x77fd99*/
            if ( ebp62 < dword_B765FC ) /*0x77fda0*/
            {
              eax65 = (AbstractClass *)__2_YAPAXI_Z(4 * ebp62); /*0x77fdaa*/
              v15 = dword_B76600; /*0x77fdaf*/
              v16 = eax65; /*0x77fdba*/
              if ( dword_B76600 ) /*0x77fdbc*/
              {
                qmemcpy(eax65, dword_B76600, 4 * g_WOL_LoginToken); /*0x77fdc6*/
                v15 = dword_B76600; /*0x77fdc8*/
              }
              __3_YAXPAX_Z(v15); /*0x77fdcf*/
              dword_B76600 = v16; /*0x77fdd4*/
              v14 = v34; /*0x77fdda*/
              dword_B765FC = ebp62; /*0x77fde1*/
            }
          }
        }
      }
      v17 = (AbstractClass *)String::GetOrEmpty(&v33); /*0x77fdf0*/
      if ( strlen(v17->__pad_0) > 9 ) /*0x77fe01*/
        v17->__pad_0[9] = 0; /*0x77fe03*/
      strcpy((char *)(v14 + 36), v17->__pad_0); /*0x77fe23*/
      if ( Block ) /*0x77fe2e*/
        Block->NeedsSaveOrLink = (void *)v14; /*0x77fe36*/
      else
        j = (void *)v14; /*0x77fe30*/
      Block = (ObjectClass *)v14; /*0x77fe3d*/
      DeleteAndZero((void **)&v33); /*0x77fe41*/
    }
    if ( *(&g_MatrixTransformState + 2263) ) /*0x77fe5f*/
      (*(void (__stdcall **)(_DWORD, void *))((*(&g_MatrixTransformState + 2263))->X + 188))( /*0x77fe69*/
        *(&g_MatrixTransformState + 2263),
        j);
    v18 = (CCINIClass *)j; /*0x77fe77*/
    if ( j ) /*0x77fe79*/
    {
      do /*0x77fe8b*/
      {
        v19 = *(ObjectClass **)v18->__pad_20; /*0x77fe7b*/
        __3_YAXPAX_Z(v18); /*0x77fe7f*/
        v18 = (CCINIClass *)v19; /*0x77fe87*/
      }
      while ( v19 ); /*0x77fe8b*/
    }
    dword_B7617C = (ObjectClass *)time(0); /*0x77fe97*/
    v3 = 0; /*0x77fe9c*/
  }
  if ( MEMORY[0xA8B238] == (CellStruct *)4 && MEMORY[0xA8B244] == 3 && time(0) > dword_B7646C ) /*0x77fec1*/
  {
    dword_B7646C = time(0) + 30; /*0x77fecf*/
    Event_Process_786270(); /*0x77fed4*/
  }
  if ( *(&g_MatrixTransformState + 2263) && !dword_B77DCC ) /*0x77fee8*/
    (*(void (__stdcall **)(_DWORD))((*(&g_MatrixTransformState + 2263))->X + 12))(*(&g_MatrixTransformState + 2263)); /*0x77feed*/
  if ( *(&g_MatrixTransformState + 2264) ) /*0x77fef7*/
    (*(void (__stdcall **)(_DWORD))((*(&g_MatrixTransformState + 2264))->X + 28))(*(&g_MatrixTransformState + 2264)); /*0x77fefc*/
  if ( *(&g_MatrixTransformState + 2265) ) /*0x77ff06*/
    (*(void (__stdcall **)(_DWORD))((*(&g_MatrixTransformState + 2265))->X + 20))(*(&g_MatrixTransformState + 2265)); /*0x77ff0b*/
  Event::Dispatch(); /*0x77ff0e*/
  if ( g_WOL_IdleFlag[0] && g_WOL_ProcessIdle == (WinModemClass *)41 && dword_B77E4C ) /*0x77ff2b*/
    CheckGameSettingsChanged(0, 0); /*0x77ff31*/
  if ( *(&g_MatrixTransformState + 2263) && g_WOL_ProcessIdle && dword_B77E4C && time(0) - dword_B77E6C > 10 ) /*0x77ff62*/
  {
    memset(Buffer, 0, 0x50u); /*0x77ff6f*/
    GameConfig::BuildChecksum((char *)Buffer); /*0x77ff75*/
    Buffer[10].S_un.S_un_b.s_b1 = 0; /*0x77ff83*/
    (*(void (__stdcall **)(_DWORD, struct in_addr *))((*(&g_MatrixTransformState + 2263))->X + 168))( /*0x77ff8c*/
      *(&g_MatrixTransformState + 2263),
      Buffer);
    dword_B77E6C = time(0); /*0x77ff9b*/
  }
  if ( g_NetworkLobbyState == (CellStruct *)2 ) /*0x77ffa7*/
    goto LABEL_118; /*0x77ffa7*/
  if ( *(&g_MatrixTransformState + 2263) && g_WOL_ProcessIdle && time(0) - dword_B77E70 > 10 ) /*0x77ffd9*/
  {
    String::ToLowerCopy((const char **)&g_WebBrowser, (char **)&m); /*0x77ffe9*/
    if ( MEMORY[0xA8B244] != 3 && MEMORY[0xA8B244] != 1 && MEMORY[0xA8B244] != 2 ) /*0x780008*/
    {
      v23 = g_WOL_State; /*0x78000e*/
      if ( (int)g_WOL_State > 0 ) /*0x780015*/
      {
        ebp107 = 0; /*0x78001b*/
        do /*0x7800b2*/
        {
          if ( ebp107 >= 0 && v3 < v23 ) /*0x780023*/
            qmemcpy(Buffer, &g_WOL_ConnectionFlags[ebp107], sizeof(Buffer)); /*0x780037*/
          String::Assign((char **)&j, (const char *)&Buffer[9]); /*0x780042*/
          v24 = (ObjectClass *)String::ToLowerCopy((const char **)&j, (char **)&v34); /*0x780050*/
          v32 = String::Compare(&m, (const char **)v24); /*0x780063*/
          DeleteAndZero((void **)&v34); /*0x780067*/
          if ( !v32 && Buffer[6].S_un.S_addr ) /*0x78007a*/
          {
            X = (*(&g_MatrixTransformState + 2264))->X; /*0x78008c*/
            v27 = ntoainet(Buffer[6]); /*0x78008f*/
            (*(void (__stdcall **)(_DWORD, char *, int, ObjectClass **))(X + 24))( /*0x78009b*/
              *(&g_MatrixTransformState + 2264),
              v27,
              1000,
              &Block);
          }
          DeleteAndZero(&j); /*0x7800a2*/
          v23 = g_WOL_State; /*0x7800a7*/
          ++v3; /*0x7800ac*/
          ebp107 += 3; /*0x7800ad*/
        }
        while ( v3 < (int)g_WOL_State ); /*0x7800b2*/
      }
    }
    dword_B77E70 = time(0); /*0x7800c7*/
    DeleteAndZero((void **)&m); /*0x7800cc*/
  }
  if ( g_NetworkLobbyState == (CellStruct *)2 ) /*0x7800d8*/
  {
LABEL_118:
    if ( byte_B77E27 && !byte_B77E26 ) /*0x7800ea*/
      StartGameWOL(); /*0x7800ec*/
  }
  HandleWOLRematch(); /*0x7800f1*/
  return 0; /*0x7800f8*/
}

