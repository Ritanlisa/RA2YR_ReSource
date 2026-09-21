// GENERATED raw decompilation, this-relative refs rewritten to this->Member
// by tools/csp_export/rewrite_member_refs.py (mechanical, CSP member table).
// REFERENCE ONLY - not compiled. Width-matched rewrites; unmatched kept raw.

// ==== 0x00720020  TextButtonClass::getCurrentWeapon  this=TextButtonClass  sig=csp ====
char __thiscall AbstractClass::getCurrentWeapon(TextButtonClass *this, int a2, char a3)
{
  int v4; // edx
  int v5; // eax
  CampaignScore *Instance; // edi

  v4 = *(_DWORD *)this->__pad_0; /*0x720027*/
  this->field_38 = a2; /*0x720029*/
  (*(void (**)(void))(v4 + 72))(); /*0x72002c*/
  LOBYTE(v5) = a3; /*0x72002f*/
  if ( a3 ) /*0x720035*/
  {
    v5 = this->field_38; /*0x720037*/
    if ( v5 ) /*0x72003c*/
    {
      Instance = (CampaignScore *)TextRenderer::GetInstance(); /*0x720047*/
      v5 = Text::MeasureWidth(this->field_38, 0) + 8; /*0x720056*/
      *(_DWORD *)&this->__pad_0[20] = v5; /*0x720059*/
      *(_DWORD *)&this->__pad_0[24] = Instance->CampaignScore_field_0x1C + 2; /*0x720063*/
    }
  }
  return v5; /*0x720066*/
}


// ==== 0x00720070  TextButtonClass::selectWeapon  this=TextButtonClass  sig=csp ====
char __thiscall AbstractClass::selectWeapon(TextButtonClass *this)
{
  char result; // al
  int v3; // eax
  int v4; // edx
  int v5; // eax
  int v6; // ecx
  int v7; // edx
  int v8; // eax
  int v9; // ecx
  int v10; // eax
  int v11; // [esp+8h] [ebp-10h] BYREF
  int v12; // [esp+Ch] [ebp-Ch]
  int v13; // [esp+10h] [ebp-8h]
  int v14; // [esp+14h] [ebp-4h]

  result = this->__pad_0[53]; /*0x720076*/
  if ( !result ) /*0x72007b*/
  {
    if ( this->__pad_0[52] ) /*0x720081*/
    {
      v3 = *(_DWORD *)(*((_DWORD *)MEMORY[0xB054D4] + BuildingAnim::GetType()) + 780); /*0x720099*/
      if ( *(_DWORD *)(v3 + 4) == 1 ) /*0x7200a3*/
        v4 = *(unsigned __int8 *)(*(_DWORD *)(v3 + 372) + 12); /*0x7200ad*/
      else
        v4 = *(unsigned __int16 *)(*(_DWORD *)(v3 + 372) + 24); /*0x7200ba*/
      v5 = *(_DWORD *)&this->__pad_0[12]; /*0x7200be*/
      v11 = v5 - 1; /*0x7200cb*/
      v6 = *(_DWORD *)&this->__pad_0[16]; /*0x7200cf*/
      v12 = v6 - 1; /*0x7200d5*/
      v13 = *(_DWORD *)&this->__pad_0[20] + v5 + 2; /*0x7200e0*/
      v14 = *(_DWORD *)&this->__pad_0[24] + v6 + 2; /*0x7200eb*/
      (*(void (__thiscall **)(_DWORD, int *, int))(**(_DWORD **)&MEMORY[0x87F8E4].__pad_5568[9416] + 88))( /*0x7200f7*/
        *(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9416],
        &v11,
        v4);
    }
    if ( this->__pad_0[30] ) /*0x7200fb*/
      v7 = 3; /*0x720102*/
    else
      v7 = this->__pad_0[44] == 0; /*0x720110*/
    v8 = *(_DWORD *)&this->__pad_0[12]; /*0x720116*/
    v12 = *(_DWORD *)&this->__pad_0[16]; /*0x720119*/
    v9 = *(_DWORD *)&this->__pad_0[24]; /*0x72011d*/
    v11 = v8; /*0x720120*/
    v10 = *(_DWORD *)&this->__pad_0[20]; /*0x720124*/
    v14 = v9; /*0x720127*/
    v13 = v10; /*0x720131*/
    return DrawBuildingTilesSHP(&v11, v7, 1); /*0x720135*/
  }
  return result; /*0x72013a*/
}


// ==== 0x00720140  TextButtonClass::fireWeapon  this=TextButtonClass  sig=csp ====
int *__thiscall AbstractClass::fireWeapon(TextButtonClass *this, int a2)
{
  int *result; // eax
  int v4; // edx
  int v5; // ecx
  _DWORD *v6; // eax
  int *v7; // [esp-14h] [ebp-38h]
  int v8; // [esp-Ch] [ebp-30h]
  _DWORD v9[2]; // [esp+4h] [ebp-20h] BYREF
  int v10; // [esp+Ch] [ebp-18h] BYREF
  _BYTE v11[16]; // [esp+14h] [ebp-10h] BYREF

  result = (int *)BuildingAnim::GetType(); /*0x720146*/
  if ( this->field_38 ) /*0x72014b*/
  {
    if ( this->__pad_0[30] ) /*0x720156*/
    {
      v4 = 0; /*0x72015d*/
    }
    else if ( this->__pad_0[44] || (v4 = 20480, this->__pad_0[45]) ) /*0x720168*/
    {
      v4 = 24576; /*0x720174*/
    }
    if ( MEMORY[0xB054E0] ) /*0x720181*/
    {
      if ( (int)result <= 0 || (int)result >= MEMORY[0xB054E0] ) /*0x720189*/
        result = 0; /*0x72018b*/
      result = (int *)*((_DWORD *)MEMORY[0xB054D4] + (_DWORD)result); /*0x720193*/
      if ( result ) /*0x720198*/
      {
        v9[0] = (*(int *)&this->__pad_0[20] >> 1) + *(_DWORD *)&this->__pad_0[12] - 1; /*0x7201a9*/
        v9[1] = *(_DWORD *)&this->__pad_0[16] + 1; /*0x7201b1*/
        v5 = v4 | *((_DWORD *)this + 15); /*0x7201b8*/
        BYTE1(v5) |= 1u; /*0x7201be*/
        v8 = v5; /*0x7201c1*/
        v7 = result; /*0x7201ca*/
        v6 = (_DWORD *)(*(int (__thiscall **)(_DWORD, _BYTE *))(**(_DWORD **)&MEMORY[0x87F8E4].__pad_5568[9416] + 120))( /*0x7201d3*/
                         *(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9416],
                         v11);
        return globalHelper_0A6010(&v10, a2, *(int *)&MEMORY[0x87F8E4].__pad_5568[9416], v6, (int)v9, (int)v7, 0, v8, 1); /*0x7201e5*/
      }
    }
  }
  return result; /*0x7201eb*/
}


// ==== 0x00720200  TextButtonClass::reloadWeapon  this=TextButtonClass  sig=csp ====
int __thiscall AbstractClass::reloadWeapon(TextButtonClass *this, int a2)
{
  *((_DWORD *)this + 15) = a2; /*0x720204*/
  return a2; /*0x720207*/
}


// ==== 0x00720210  TextButtonClass::checkAmmunition  this=TextButtonClass  sig=csp ====
_DWORD *__thiscall AbstractClass::checkAmmunition(TextButtonClass *this, char a2)
{
  GadgetClass::Dtor(this); /*0x720213*/
  if ( (a2 & 1) != 0 ) /*0x72021d*/
    __3_YAXPAX_Z(this); /*0x720220*/
  return this->__pad_0; /*0x72022a*/
}


// ==== 0x00720230  sub_720230  this=-  sig=ida-proto ====
void sub_720230()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x72023c*/
  *(double *)&MEMORY[0xB0F1F8][544] = Math::Sqrt(v0 + v0); /*0x72024e*/
}


// ==== 0x00720260  sub_720260  this=-  sig=ida-proto ====
void sub_720260()
{
  *(double *)&MEMORY[0xB0F1F8][624] = *(double *)&MEMORY[0xB0F1F8][544] / 60.0; /*0x72026c*/
}


// ==== 0x00720280  sub_720280  this=-  sig=ida-proto ====
void sub_720280()
{
  *(double *)&MEMORY[0xB0F1F8][600] = 1.0 / *(double *)&MEMORY[0xB0F1F8][624]; /*0x72028c*/
}


// ==== 0x007202A0  sub_7202A0  this=-  sig=ida-proto ====
void sub_7202A0()
{
  *(double *)&MEMORY[0xB0F1F8][592] = 0.0174532925199433 * 45.0; /*0x7202ac*/
}


// ==== 0x007202C0  sub_7202C0  this=-  sig=ida-proto ====
void sub_7202C0()
{
  *(double *)&MEMORY[0xB0F1F8][552] = 0.0174532925199433 * 60.0; /*0x7202cc*/
}


// ==== 0x007202E0  sub_7202E0  this=-  sig=ida-proto ====
void sub_7202E0()
{
  *(double *)&MEMORY[0xB0F1F8][512] = 0.0174532925199433 * 90.0; /*0x7202ec*/
}


// ==== 0x00720300  sub_720300  this=-  sig=ida-proto ====
__int64 sub_720300()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(*(double *)&MEMORY[0xB0F1F8][512] - *(double *)&MEMORY[0xB0F1F8][552]); /*0x720312*/
  result = Math::RoundToInt(v0 * *(double *)&MEMORY[0xB0F1F8][544] * 0.5); /*0x720326*/
  *(_DWORD *)&MEMORY[0xB0F1F8][632] = result; /*0x72032b*/
  return result; /*0x720330*/
}


// ==== 0x00720340  sub_720340  this=-  sig=ida-proto ====
void sub_720340()
{
  *(double *)&MEMORY[0xB0F1F8][560] = Math::ArcTan((double)*(int *)&MEMORY[0xB0F1F8][632] * 0.00390625); /*0x720357*/
}


// ==== 0x00720370  sub_720370  this=-  sig=ida-proto ====
void sub_720370()
{
  *(double *)&MEMORY[0xB0F1F8][584] = Math::ArcTan( /*0x720392*/
                                        (double)(2 * *(_DWORD *)&MEMORY[0xB0F1F8][632])
                                      / *(double *)&MEMORY[0xB0F1F8][544]);
}


// ==== 0x007203A0  sub_7203A0  this=-  sig=ida-proto ====
__int64 sub_7203A0()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * *(_DWORD *)&MEMORY[0xB0F1F8][632]) + 0.5); /*0x7203bb*/
  *(_DWORD *)&MEMORY[0xB0F1F8][620] = result; /*0x7203c0*/
  return result; /*0x7203c6*/
}


// ==== 0x007203D0  sub_7203D0  this=-  sig=ida-proto ====
int sub_7203D0()
{
  *(_WORD *)&MEMORY[0xB0F1F8][536] = 0; /*0x7203d2*/
  *(_WORD *)&MEMORY[0xB0F1F8][538] = 0; /*0x7203d8*/
  return 0; /*0x7203de*/
}


// ==== 0x007203E0  sub_7203E0  this=-  sig=ida-proto ====
int sub_7203E0()
{
  *(_DWORD *)&MEMORY[0xB0F1F8][568] = 0; /*0x7203e2*/
  *(_DWORD *)&MEMORY[0xB0F1F8][572] = 0; /*0x7203e7*/
  *(_DWORD *)&MEMORY[0xB0F1F8][576] = 0; /*0x7203ec*/
  return 0; /*0x7203f1*/
}


// ==== 0x00720400  sub_720400  this=-  sig=ida-proto ====
int sub_720400()
{
  *(_DWORD *)&MEMORY[0xB0F1F8][616] = 0; /*0x720405*/
  *(_DWORD *)&MEMORY[0xB0F1F8][608] = 128; /*0x72040f*/
  *(_DWORD *)&MEMORY[0xB0F1F8][612] = 128; /*0x720414*/
  return 128; /*0x720419*/
}


// ==== 0x00720420  sub_720420  this=-  sig=ida-proto ====
int sub_720420()
{
  *(_DWORD *)&MEMORY[0xB0F1F8][520] = 0; /*0x720422*/
  *(_DWORD *)&MEMORY[0xB0F1F8][524] = 0; /*0x720427*/
  *(_DWORD *)&MEMORY[0xB0F1F8][528] = 0; /*0x72042c*/
  *(_DWORD *)&MEMORY[0xB0F1F8][532] = 0; /*0x720431*/
  return 0; /*0x720436*/
}


// ==== 0x00720440  ObjectClass::method  this=ObjectClass  sig=csp ====
_DWORD *__thiscall sub_720440(_DWORD *this)
{
  this->q0A0 = 0; /*0x720444*/
  *(this + 161) = 0; /*0x72044a*/
  *((_BYTE *)this + 648) = 1; /*0x720450*/
  this->__pad_2890 = 0; /*0x720457*/
  this->__pad_28A0 = 0; /*0x72045d*/
  *(this + 163) = -1; /*0x720463*/
  *(_BYTE *)this = 0; /*0x72046d*/
  this->q100 = 0; /*0x72046f*/
  this->q100 = 0; /*0x720475*/
  return this; /*0x72047c*/
}


// ==== 0x00720480  ThemeClass::ReadThemeEntry  this=AbstractTypeClass  sig=csp ====
char __thiscall ThemeClass::ReadThemeEntry(int this, unsigned __int8 ***a2)
{
  CCINIClass *v3; // edi
  int Int_Overwrite; // eax
  char Bool_Overwrite; // al
  int v6; // ecx
  char v8; // [esp-Ch] [ebp-14h]

  INIClass::ResetSection(a2); /*0x72048a*/
  if ( !INIClass::BinarySearchSection((int)a2, (INIClass *)this) ) /*0x720492*/
    return 0; /*0x720584*/
  v3 = (CCINIClass *)(this + 256); /*0x7204a6*/
  INIClass::GetString( /*0x7204bf*/
    a2,
    (INIClass *)this,
    (unsigned __int8 *)&stru_830620.__pad_579C[59788],
    (INIClass *)&MEMORY[0x87F8E4].__pad_5568[20760],
    (INIClass *)(this + 256),
    256);
  while ( v3->__pad_0[0] == 36 || v3->__pad_0[0] == 35 ) /*0x7204cc*/
    v3 = (CCINIClass *)((char *)v3 + 1); /*0x7204ce*/
  strcpy((char *)(this + 256), v3->__pad_0); /*0x7204e9*/
  Int_Overwrite = INIClass::ReadInt_Overwrite( /*0x720501*/
                    (int)a2,
                    (unsigned __int8 *)this,
                    (CCINIClass *)&stru_81B1A4.sectionHead[2],
                    *(INIClass **)(this + 640));
  v8 = *(_BYTE *)(this + 648); /*0x72050e*/
  *(_DWORD *)(this + 640) = Int_Overwrite; /*0x720515*/
  *(_BYTE *)(this + 648) = INIClass::ReadBool_Overwrite( /*0x720520*/
                             (int)a2,
                             (unsigned __int8 *)this,
                             (CCINIClass *)&stru_81BB58.headNode[1],
                             v8);
  Bool_Overwrite = INIClass::ReadBool_Overwrite( /*0x720535*/
                     (int)a2,
                     (unsigned __int8 *)this,
                     (CCINIClass *)&stru_830620.__pad_579C[59780],
                     *(_BYTE *)(this + 649));
  v6 = *(_DWORD *)(this + 652); /*0x72053a*/
  *(_BYTE *)(this + 649) = Bool_Overwrite; /*0x720540*/
  *(_DWORD *)(this + 652) = HouseTypeClass::loadCountryData( /*0x720554*/
                              a2,
                              (unsigned __int8 *)this,
                              (unsigned __int8 *)&stru_8172FC.unknown38,
                              v6);
  if ( *(_BYTE *)(this + 648) ) /*0x72055a*/
    INIClass::GetStringEx( /*0x720577*/
      (int)a2,
      (INIClass *)this,
      (CCINIClass *)&MEMORY[0x81784C].headNode[1],
      (CCINIClass *)(this + 512),
      0x40u);
  return 1; /*0x72057c*/
}


// ==== 0x00720590  ThemeClass::InitializeThemes  this=ObjectTypeClass  sig=csp ====
void *__thiscall ThemeClass::InitializeThemes(int this, char *a2)
{
  char *v2; // edi
  int KeyCount; // ebp
  int v5; // esi
  unsigned __int8 *StringByIndex; // eax
  int v7; // esi
  int v8; // eax
  char *v9; // ebp
  int v10; // eax
  int v11; // ecx
  int v12; // eax
  int v13; // edx
  void *result; // eax
  void *Enabled; // eax
  int v16; // [esp+0h] [ebp-38h] BYREF
  int i; // [esp+10h] [ebp-28h]
  int v18; // [esp+14h] [ebp-24h]
  char Destination[32]; // [esp+18h] [ebp-20h] BYREF

  v2 = a2; /*0x720597*/
  KeyCount = INIClass::GetKeyCount(a2, (unsigned __int8 *)g_INI_Key_Themes); /*0x7205a9*/
  v5 = 0; /*0x7205ab*/
  v18 = KeyCount; /*0x7205af*/
  for ( i = 0; v5 < KeyCount; i = v5 ) /*0x7205b7*/
  {
    StringByIndex = (unsigned __int8 *)INIClass::GetStringByIndex(v2, (unsigned __int8 *)g_INI_Key_Themes, v5); /*0x7205d1*/
    if ( INIClass::GetString( /*0x7205de*/
           (unsigned __int8 ***)v2,
           (unsigned __int8 **)g_INI_Key_Themes,
           StringByIndex,
           (char *)&MEMORY[0x87F7E8][10719],
           Destination,
           32) )
    {
      if ( &v16 == (int *)-24 ) /*0x7205f1*/
        goto LABEL_10; /*0x7205f1*/
      if ( !strlen(Destination) ) /*0x7205f7*/
        goto LABEL_10; /*0x7205f7*/
      v7 = 0; /*0x720606*/
      if ( *(int *)(this + 36) <= 0 ) /*0x72060a*/
        goto LABEL_10; /*0x72060a*/
      while ( _strcmpi(*(const void **)(*(_DWORD *)(this + 24) + 4 * v7), Destination) ) /*0x720622*/
      {
        if ( ++v7 >= *(_DWORD *)(this + 36) ) /*0x72062a*/
          goto LABEL_10; /*0x72062a*/
      }
      if ( v7 == -1 ) /*0x720631*/
      {
LABEL_10:
        v8 = __2_YAPAXI_Z(656); /*0x720637*/
        v9 = 0; /*0x720641*/
        if ( v8 ) /*0x720648*/
        {
          *(_DWORD *)(v8 + 640) = 0; /*0x72064a*/
          *(_DWORD *)(v8 + 644) = 0; /*0x720650*/
          *(_WORD *)(v8 + 512) = 0; /*0x720656*/
          *(_BYTE *)(v8 + 648) = 1; /*0x72065d*/
          *(_BYTE *)(v8 + 649) = 0; /*0x720664*/
          *(_BYTE *)(v8 + 650) = 0; /*0x72066b*/
          *(_DWORD *)(v8 + 652) = -1; /*0x720672*/
          *(_BYTE *)v8 = 0; /*0x72067c*/
          *(_BYTE *)(v8 + 256) = 0; /*0x72067f*/
          v9 = (char *)v8; /*0x720686*/
        }
        strcpy(v9, Destination); /*0x7206a0*/
        v10 = *(_DWORD *)(this + 28); /*0x7206a9*/
        if ( *(_DWORD *)(this + 36) < v10 /*0x7206d1*/
          || (*(_BYTE *)(this + 33) || !v10)
          && (v11 = *(_DWORD *)(this + 40), v11 > 0)
          && (*(unsigned __int8 (__thiscall **)(int, int, _DWORD))(*(_DWORD *)(this + 20) + 8))(this + 20, v10 + v11, 0) )
        {
          v12 = *(_DWORD *)(this + 36); /*0x7206d8*/
          v13 = *(_DWORD *)(this + 24); /*0x7206db*/
          *(_DWORD *)(this + 36) = v12 + 1; /*0x7206e1*/
          *(_DWORD *)(v13 + 4 * v12) = v9; /*0x7206e4*/
        }
      }
      else
      {
        v9 = *(char **)(*(_DWORD *)(this + 24) + 4 * v7); /*0x7206ec*/
      }
      ThemeClass::ReadThemeEntry((int)v9, (unsigned __int8 ***)a2); /*0x7206f6*/
      v5 = i; /*0x7206fb*/
      KeyCount = v18; /*0x7206ff*/
      v2 = a2; /*0x720703*/
    }
    ++v5; /*0x720707*/
  }
  result = Audio::GetEnabled(); /*0x720714*/
  if ( result ) /*0x72071b*/
  {
    Enabled = Audio::GetEnabled(); /*0x720724*/
    result = AudioStream::Constructor(Enabled, 0x4E20u); /*0x72072b*/
    *(_DWORD *)(this + 44) = result; /*0x720732*/
    if ( result ) /*0x720735*/
    {
      SetAudioFileName((int)result, aMusicStream); /*0x72073e*/
      AudioQueue::IsEmpty(*(_DWORD *)(this + 44), MEMORY[0x87E744]); /*0x72074c*/
      return (void *)AudioQueue::IsNotEmpty(*(_DWORD *)(this + 44), MEMORY[0x87E754]); /*0x72075a*/
    }
  }
  return result; /*0x72075f*/
}


// ==== 0x00720770  ThemeManager::Cleanup  this=ThemeManager  sig=csp ====
void __thiscall ThemeManager::Cleanup(int this)
{
  int v2; // eax
  int v3; // ecx
  int v4; // eax
  _DWORD *v5; // ecx

  while ( *(int *)(this + 36) > 0 ) /*0x720778*/
  {
    __3_YAXPAX_Z(**(void ***)(this + 24)); /*0x720780*/
    v2 = *(_DWORD *)(this + 36); /*0x720785*/
    if ( v2 > 0 ) /*0x72078d*/
    {
      v3 = v2 - 1; /*0x72078f*/
      v4 = 0; /*0x720792*/
      for ( *(_DWORD *)(this + 36) = v3; /*0x720799*/
            v4 < *(_DWORD *)(this + 36);
            *(_DWORD *)(*(_DWORD *)(this + 24) + 4 * v4 - 4) = *(_DWORD *)(*(_DWORD *)(this + 24) + 4 * v4) )
      {
        ++v4; /*0x72079e*/
      }
    }
  }
  v5 = *(_DWORD **)(this + 44); /*0x7207b4*/
  if ( v5 ) /*0x7207b9*/
  {
    ThemeClass::RequestBuffer(v5); /*0x7207bb*/
    ThemeManager::ProcessCallback(*(_DWORD *)(this + 44)); /*0x7207c3*/
    Audio::Release(*(_DWORD **)(this + 44)); /*0x7207cb*/
    AudioSample::Destructor(*(void **)(this + 44)); /*0x7207d3*/
    *(_DWORD *)(this + 44) = 0; /*0x7207d8*/
  }
}


// ==== 0x007207F0  Audio::LoadWAVFiles  this=Audio  sig=csp ====
char __thiscall Audio::LoadWAVFiles(_DWORD *this)
{
  int IsSoundEnabled; // eax
  int i; // ebx
  int v4; // ebp
  _DWORD *v5; // ebp
  unsigned __int64 v6; // rax
  int v8[2]; // [esp+8h] [ebp-294h] BYREF
  _DWORD v9[8]; // [esp+10h] [ebp-28Ch] BYREF
  int v10[22]; // [esp+30h] [ebp-26Ch] BYREF
  _BYTE v11[12]; // [esp+88h] [ebp-214h] BYREF
  int v12; // [esp+94h] [ebp-208h]
  char Buffer[512]; // [esp+9Ch] [ebp-200h] BYREF

  LOBYTE(IsSoundEnabled) = MEMORY[0x87F7E8][539939]; /*0x7207f0*/
  if ( LOBYTE(MEMORY[0x87F7E8][539939]) ) /*0x720801*/
  {
    IsSoundEnabled = Audio::IsSoundEnabled(); /*0x720807*/
    if ( IsSoundEnabled ) /*0x72080e*/
    {
      LOBYTE(IsSoundEnabled) = dword_A8ED54[4]; /*0x720814*/
      if ( !LOBYTE(dword_A8ED54[4]) ) /*0x72081b*/
      {
        IsSoundEnabled = *(this + 9); /*0x720821*/
        for ( i = 0; i < IsSoundEnabled; ++i ) /*0x720828*/
        {
          _makepath(Buffer, 0, 0, (const char *)(*(_DWORD *)(this->__pad_018 + 4 * i) + 256), g_Str_File__WAV); /*0x720855*/
          CCFileClass::Construct(v10, Buffer); /*0x720869*/
          v4 = 4 * i + this->__pad_018; /*0x720877*/
          *(_BYTE *)(*(_DWORD *)v4 + 650) = CCFileClass::Open(v10, 0); /*0x720881*/
          if ( *(_BYTE *)(*(_DWORD *)(this->__pad_018 + 4 * i) + 650) ) /*0x72088d*/
          {
            Struct::ZeroInit32(v9); /*0x72089b*/
            FileClass::Load(v10, 1); /*0x7208a6*/
            if ( ParseWaveFileHeader((int)v10, v9, (#247 *)v8) ) /*0x7208b8*/
            {
              v5 = (_DWORD *)(4 * i + this->__pad_018); /*0x7208cc*/
              v6 = sub_408560((int)v9, v8[0]) / 0x3E8; /*0x7208dc*/
              HIDWORD(v6) = *v5; /*0x7208e1*/
              v8[1] = v6; /*0x7208e4*/
              *(float *)(HIDWORD(v6) + 644) = (float)(int)v6; /*0x7208ec*/
            }
          }
          v10[0] = (int)&CCFileClass::`vftable'; /*0x7208f9*/
          v12 = 0; /*0x720901*/
          Vector::Clear((int)v11); /*0x72090c*/
          v10[0] = (int)&off_7E1668; /*0x720915*/
          BufferIOFileClass::Dtor(v10); /*0x72091d*/
          IsSoundEnabled = *(this + 9); /*0x720922*/
        }
      }
    }
  }
  return IsSoundEnabled; /*0x720930*/
}


// ==== 0x00720940  ScenarioClass::processEndgame  this=ScenarioClass  sig=csp ====
char *__thiscall ScenarioClass::processEndgame(_DWORD *this, INIClass *aP1)
{
  if ( (unsigned int)aP1 >= this->q024 ) /*0x720949*/
    return &stru_830620.__pad_579C[59828]; /*0x720954*/
  else
    return *(char **)(this->q018 + 4 * (_DWORD)aP1); /*0x72094e*/
}


// ==== 0x00720960  ObjectClass::method  this=ObjectClass  sig=csp ====
_DWORD *__thiscall sub_720960(_DWORD *this)
{
  *this = -1; /*0x720965*/
  this->vtable2 = -1; /*0x720967*/
  this->vtable3 = -1; /*0x72096a*/
  this->vtable4 = 255; /*0x72096f*/
  this->q040 = 0; /*0x720976*/
  this->q044 = 0; /*0x720979*/
  this->q048 = 0; /*0x72097c*/
  this->nextArrayIndex = 0; /*0x72097f*/
  this->referenceCount = 0; /*0x720982*/
  this->needsRedraw = 1; /*0x720985*/
  this->hasParachute = 0; /*0x720989*/
  this->abstractFlags = &vt_DynamicVectorClass_ThemeControl; /*0x72098c*/
  this->owningHouseIndex = 10; /*0x720993*/
  this->objectTypeFlags = 0; /*0x72099a*/
  this->fallRate = 0; /*0x72099d*/
  return this; /*0x7209a0*/
}


// ==== 0x007209B0  AudioSettings::Check  this=AudioSettings  sig=csp ====
int __thiscall sub_7209B0(_DWORD *this, unsigned int a2)
{
  if ( a2 >= this->q024 ) /*0x7209b9*/
    return 0; /*0x7209c9*/
  else
    return *(_DWORD *)(this->q018 + 4 * a2) + 512; /*0x7209c1*/
}


// ==== 0x007209D0  Movie::Update  this=Movie  sig=csp ====
char __thiscall Movie::Update(int this)
{
  int IsSoundEnabled; // eax
  int v3; // ecx

  IsSoundEnabled = Audio::IsSoundEnabled(); /*0x7209d3*/
  if ( IsSoundEnabled ) /*0x7209da*/
  {
    LOBYTE(IsSoundEnabled) = MEMORY[0xA8D63C].__pad_14B0[632]; /*0x7209e0*/
    if ( !MEMORY[0xA8D63C].__pad_14B0[632] ) /*0x7209e7*/
    {
      LOBYTE(IsSoundEnabled) = MEMORY[0xA8D63C].__pad_14B0[392]; /*0x7209ed*/
      if ( MEMORY[0xA8D63C].__pad_14B0[392] ) /*0x7209f4*/
      {
        IsSoundEnabled = *(_DWORD *)(this + 12); /*0x7209fa*/
        if ( IsSoundEnabled > 0 ) /*0x7209ff*/
        {
          v3 = *(_DWORD *)(this + 44); /*0x720a01*/
          if ( !v3 ) /*0x720a06*/
            goto LABEL_10; /*0x720a06*/
          if ( *(_BYTE *)(this + 17) && !AudioSample::IsBuffering(v3) ) /*0x720a0f*/
            Audio::Release(*(_DWORD **)(this + 44)); /*0x720a1b*/
          LOBYTE(IsSoundEnabled) = Audio::IsSoundPlaying(*(_DWORD **)(this + 44)) != 0; /*0x720a2a*/
          if ( !(_BYTE)IsSoundEnabled ) /*0x720a2f*/
          {
LABEL_10:
            IsSoundEnabled = *(_DWORD *)(this + 8); /*0x720a31*/
            if ( IsSoundEnabled != -1 && IsSoundEnabled != -3 && !*(_DWORD *)&MEMORY[0xA8D63C].__pad_1140[48] ) /*0x720a46*/
            {
              if ( IsSoundEnabled == -2 ) /*0x720a4b*/
              {
                *(_DWORD *)(this + 8) = Movie::SelectNextBuildableType(this, *(AnimClass **)(this + 4)); /*0x720a5e*/
                Debug::Log(); /*0x720a61*/
              }
              LOBYTE(IsSoundEnabled) = ThemeClass::Play((int *)this, *(Movie **)(this + 8)); /*0x720a6f*/
              *(_DWORD *)(this + 8) = -2; /*0x720a74*/
            }
          }
        }
      }
    }
  }
  return IsSoundEnabled; /*0x720a7b*/
}


// ==== 0x00720A80  Movie::SelectNextBuildableType  this=Movie  sig=csp ====
unsigned int __thiscall Movie::SelectNextBuildableType(int this, AnimClass *aP1)
{
  TechnoTypeClass *v2; // ebp
  int v4; // edi
  TechnoTypeClass *v5; // eax
  TechnoTypeClass *v6; // ebx
  bool v7; // zf
  int v9; // edi

  v2 = (TechnoTypeClass *)aP1; /*0x720a81*/
  if ( ((int)aP1 <= -1 /*0x720aa7*/
     || *(_BYTE *)(*(_DWORD *)(*(_DWORD *)(this + 24) + 4 * (_DWORD)aP1) + 649)
     || *(_BYTE *)(this + 16))
    && (int)aP1 >= 0 )
  {
    return (unsigned int)v2; /*0x720b18*/
  }
  if ( *(_BYTE *)(this + 18) == 1 ) /*0x720aad*/
  {
    v4 = 0; /*0x720ab0*/
    while ( 1 ) /*0x720abe*/
    {
      v5 = (TechnoTypeClass *)Random::Range( /*0x720abe*/
                                &MEMORY[0x87F8E4].__pad_5568[7484],
                                0,
                                (IUnknown *)(*(_DWORD *)(this + 36) - 1));
      ++v4; /*0x720ac3*/
      v6 = v5; /*0x720ac4*/
      v7 = v4 == 1000; /*0x720ac6*/
      if ( v4 >= 1000 ) /*0x720acc*/
        break; /*0x720acc*/
      if ( v5 != (TechnoTypeClass *)aP1 && RulesClass::IsTypeBuildable((_DWORD *)this, v5) ) /*0x720ad5*/
      {
        v7 = v4 == 1000; /*0x720ade*/
        break; /*0x720ade*/
      }
    }
    if ( v7 ) /*0x720ae4*/
      return 0; /*0x720ae6*/
    return (unsigned int)v6; /*0x720ae8*/
  }
  else
  {
    v9 = *(_DWORD *)(this + 36) + 1; /*0x720af4*/
    while ( 1 ) /*0x720af8*/
    {
      v2 = (TechnoTypeClass *)((char *)v2 + 1); /*0x720af8*/
      if ( (int)v2 >= *(_DWORD *)(this + 36) ) /*0x720afb*/
        v2 = 0; /*0x720afd*/
      if ( !--v9 ) /*0x720b00*/
        break; /*0x720b00*/
      if ( RulesClass::IsTypeBuildable((_DWORD *)this, v2) ) /*0x720b05*/
        return (unsigned int)v2; /*0x720b0c*/
    }
    return 0; /*0x720b12*/
  }
}


// ==== 0x00720B20  Theme::QueueSong  this=Theme  sig=csp ====
char __thiscall Theme::QueueSong(int this, IUnknown *aP1)
{
  int IsSoundEnabled; // eax
  int v4; // ecx
  _DWORD *v5; // ecx

  LOBYTE(IsSoundEnabled) = MEMORY[0xA8D63C].__pad_14B0[392]; /*0x720b20*/
  if ( MEMORY[0xA8D63C].__pad_14B0[392] ) /*0x720b2a*/
  {
    IsSoundEnabled = Audio::IsSoundEnabled(); /*0x720b2c*/
    if ( IsSoundEnabled ) /*0x720b33*/
    {
      LOBYTE(IsSoundEnabled) = MEMORY[0xA8D63C].__pad_14B0[632]; /*0x720b35*/
      if ( !MEMORY[0xA8D63C].__pad_14B0[632] ) /*0x720b3c*/
      {
        LOBYTE(IsSoundEnabled) = (_BYTE)aP1; /*0x720b3e*/
        *(_DWORD *)(this + 8) = aP1; /*0x720b45*/
        if ( aP1 != (IUnknown *)-1 && aP1 != (IUnknown *)-2 && aP1 != *(IUnknown **)(this + 4) ) /*0x720b52*/
        {
          Debug::Log(); /*0x720b5a*/
          v4 = *(_DWORD *)(this + 44); /*0x720b5f*/
          if ( v4 ) /*0x720b67*/
          {
            if ( *(_BYTE *)(this + 17) && !AudioSample::IsBuffering(v4) ) /*0x720b70*/
              Audio::Release(*(_DWORD **)(this + 44)); /*0x720b7c*/
            LOBYTE(IsSoundEnabled) = Audio::IsSoundPlaying(*(_DWORD **)(this + 44)) != 0; /*0x720b8b*/
            if ( (_BYTE)IsSoundEnabled == 1 ) /*0x720b90*/
            {
              v5 = *(_DWORD **)(this + 44); /*0x720b92*/
              if ( v5 ) /*0x720b97*/
                LOBYTE(IsSoundEnabled) = ThemeClass::RequestBuffer(v5); /*0x720b99*/
              *(_BYTE *)(this + 17) = 1; /*0x720b9e*/
            }
          }
        }
      }
    }
  }
  return IsSoundEnabled; /*0x720ba2*/
}


// ==== 0x00720BB0  ThemeClass::Play  this=Movie  sig=csp ====
int __thiscall ThemeClass::Play(int *this, Movie *aP1)
{
  int v3; // ecx
  _DWORD *v4; // ecx
  int v5; // eax
  int v6; // ecx

  if ( MEMORY[0xA8D63C].__pad_14B0[392] && Audio::IsSoundEnabled() && !MEMORY[0xA8D63C].__pad_14B0[632] )
  {
    v3 = *(this + 11); /*0x720bdc*/
    if ( !v3 ) /*0x720be5*/
      goto LABEL_13; /*0x720be5*/
    if ( this->Movie_field_0x44 && !AudioSample::IsBuffering(v3) ) /*0x720bee*/
      Audio::Release((_DWORD *)*(this + 11)); /*0x720bfa*/
    if ( !Audio::IsSoundPlaying((_DWORD *)*(this + 11)) || (Movie *)this->Movie_field_0x4 != aP1 )
    {
LABEL_13:
      if ( MEMORY[0xA8D63C].__pad_14B0[392] /*0x720c37*/
        && Audio::IsSoundEnabled()
        && !MEMORY[0xA8D63C].__pad_14B0[632]
        && *this != -1 )
      {
        Debug::Log(); /*0x720c42*/
        v4 = (_DWORD *)*(this + 11); /*0x720c47*/
        if ( v4 ) /*0x720c4f*/
          Audio::Release(v4); /*0x720c51*/
        *this = -1; /*0x720c56*/
        this->Movie_field_0x4 = -1; /*0x720c5c*/
        this->Movie_field_0x8 = -1; /*0x720c63*/
      }
      this->Movie_field_0x44 = 0; /*0x720c6d*/
      if ( aP1 != (Movie *)-1 && aP1 != (Movie *)-3 )
      {
        if ( (int)aP1 <= -1 || this->Movie_field_0xC <= 0 ) /*0x720c8e*/
          goto LABEL_47; /*0x720c8e*/
        this->Movie_field_0x4 = (int)aP1; /*0x720c94*/
        v5 = MEMORY[0x89E3A0] ? 0 : Game::CheckForGameCD(0);
        v6 = *(this + 11); /*0x720cab*/
        if ( v6 && v5 > -1 ) /*0x720cba*/
        {
          if ( (unsigned int)aP1 >= this->Movie_field_0x24 ) /*0x720cbf*/
          {
            ThreadAudioMixerMain((_DWORD *)*(this + 11), (RawFileClass *)&MEMORY[0x87F8E4].__pad_5568[20760], 1); /*0x720d02*/
          }
          else
          {
            _makepath( /*0x720cdc*/
              &MEMORY[0xB077F8].__pad_579C[8804],
              0,
              0,
              (const char *)(*(_DWORD *)(*(this + 6) + 4 * (_DWORD)aP1) + 256),
              &stru_830620.__pad_579C[59820]);
            ThreadAudioMixerMain((_DWORD *)*(this + 11), (RawFileClass *)&MEMORY[0xB077F8].__pad_579C[8804], 1); /*0x720ced*/
          }
          *this = (int)aP1; /*0x720cf2*/
        }
        else
        {
          *this = -1; /*0x720d10*/
          if ( v6 ) /*0x720d16*/
          {
            if ( v5 <= -1 && this->Movie_field_0x8 == -1 ) /*0x720d29*/
            {
              if ( MEMORY[0xA8D63C].__pad_14B0[392] ) /*0x720d36*/
              {
                if ( Audio::IsSoundEnabled() ) /*0x720d3c*/
                {
                  if ( !MEMORY[0xA8D63C].__pad_14B0[632] ) /*0x720d4c*/
                  {
                    dword_A83D18 = (IUnknown *)aP1; /*0x720d51*/
                    if ( aP1 != (Movie *)dword_A83D14 ) /*0x720d5f*/
                    {
                      Debug::Log(); /*0x720d67*/
                      if ( dword_A83D3C ) /*0x720d77*/
                      {
                        if ( byte_A83D21 && !AudioSample::IsBuffering(dword_A83D3C) ) /*0x720d82*/
                          Audio::Release((_DWORD *)dword_A83D3C); /*0x720d91*/
                        if ( Audio::IsSoundPlaying((_DWORD *)dword_A83D3C) != 0 ) /*0x720da3*/
                        {
                          if ( dword_A83D3C ) /*0x720db2*/
                            ThemeClass::RequestBuffer((_DWORD *)dword_A83D3C); /*0x720db4*/
                          byte_A83D21 = 1; /*0x720db9*/
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
        Debug::Log(); /*0x720de8*/
        if ( this->__pad_010 == 1 || *(_BYTE *)(*(_DWORD *)(*(this + 6) + 4 * (_DWORD)aP1) + 649) == 1 ) /*0x720e03*/
LABEL_47:
          this->Movie_field_0x8 = (int)aP1; /*0x720e05*/
      }
    }
  }
  return *this; /*0x720e0a*/
}


// ==== 0x00720E50  AudioSettings::ComputeTransform  this=AudioSettings  sig=csp ====
int __thiscall sub_720E50(_DWORD *this, unsigned int a2)
{
  if ( a2 >= this->q024 ) /*0x720e59*/
    return 0; /*0x720e6f*/
  else
    return Math::RoundToInt(*(float *)(*(_DWORD *)(this->q018 + 4 * a2) + 644)); /*0x720e67*/
}


// ==== 0x00720EA0  Theme::Stop  this=Theme  sig=csp ====
char __thiscall Theme::Stop(_DWORD *this, ObjectClass *aP1)
{
  int IsSoundEnabled; // eax
  int v4; // ecx
  _DWORD *v5; // ecx
  _DWORD *v6; // ecx

  LOBYTE(IsSoundEnabled) = MEMORY[0xA8D63C].__pad_14B0[392]; /*0x720ea0*/
  if ( MEMORY[0xA8D63C].__pad_14B0[392] ) /*0x720eaa*/
  {
    IsSoundEnabled = Audio::IsSoundEnabled(); /*0x720eb0*/
    if ( IsSoundEnabled ) /*0x720eb7*/
    {
      LOBYTE(IsSoundEnabled) = MEMORY[0xA8D63C].__pad_14B0[632]; /*0x720ebd*/
      if ( !MEMORY[0xA8D63C].__pad_14B0[632] && *this != -1 ) /*0x720ecd*/
      {
        if ( !(_BYTE)aP1 ) /*0x720ed9*/
          goto LABEL_14; /*0x720ed9*/
        v4 = this->audioSample; /*0x720edb*/
        if ( !v4 ) /*0x720ee0*/
          goto LABEL_14; /*0x720ee0*/
        if ( *((_BYTE *)this + 17) && !AudioSample::IsBuffering(v4) ) /*0x720ee9*/
          Audio::Release((_DWORD *)this->audioSample); /*0x720ef5*/
        if ( Audio::IsSoundPlaying((_DWORD *)this->audioSample) != 0 ) /*0x720f04*/
        {
          Debug::Log(); /*0x720f14*/
          v5 = (_DWORD *)this->audioSample; /*0x720f19*/
          if ( v5 ) /*0x720f21*/
            LOBYTE(IsSoundEnabled) = ThemeClass::RequestBuffer(v5); /*0x720f23*/
          *((_BYTE *)this + 17) = 1; /*0x720f28*/
        }
        else
        {
LABEL_14:
          Debug::Log(); /*0x720f37*/
          v6 = (_DWORD *)this->audioSample; /*0x720f3c*/
          if ( v6 ) /*0x720f44*/
            Audio::Release(v6); /*0x720f46*/
        }
        *this = -1; /*0x720f4b*/
        *(this + 1) = -1; /*0x720f51*/
        *(this + 2) = -1; /*0x720f58*/
      }
    }
  }
  return IsSoundEnabled; /*0x720f5f*/
}


// ==== 0x00720FD0  Theme::IsPlaying  this=Theme  sig=csp ====
bool __thiscall Theme_IsPlaying(int this)
{
  if ( !*(_DWORD *)(this + 44) ) /*0x720fd3*/
    return 0; /*0x721002*/
  if ( *(_BYTE *)(this + 17) ) /*0x720fda*/
  {
    if ( !AudioSample::IsBuffering() ) /*0x720fe1*/
      Audio::Release(*(_DWORD **)(this + 44)); /*0x720fed*/
  }
  return Audio::IsSoundPlaying(*(_DWORD **)(this + 44)) != 0; /*0x720ffe*/
}


// ==== 0x00721010  SaveGame::VtableDispatch  this=SaveGame  sig=csp ====
int __thiscall sub_721010(void *this, int a2)
{
  int result; // eax

  result = (*(int (__stdcall **)(int, int, int, _DWORD))(*(_DWORD *)a2 + 16))(a2, (int)this + 4, 4, 0); /*0x721023*/
  if ( result >= 0 ) /*0x721028*/
    return (*(int (__stdcall **)(int, int, int, _DWORD))(*(_DWORD *)a2 + 16))(a2, (int)this + 8, 4, 0); /*0x721035*/
  return result; /*0x721038*/
}


// ==== 0x00721040  LoadGame_Start  this=-  sig=csp ====
int __stdcall sub_721040(int a1)
{
  int v1; // esi
  int v2; // edi
  int v3; // esi
  int v5; // [esp+20h] [ebp-4h] BYREF

  v1 = a1; /*0x721042*/
  v2 = (*(int (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)a1 + 12))(a1, &a1, 4, 0); /*0x721056*/
  if ( v2 >= 0 ) /*0x72105a*/
  {
    v2 = (*(int (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)v1 + 12))(v1, &v5, 4, 0); /*0x72106f*/
    if ( v2 >= 0 ) /*0x721073*/
    {
      if ( MEMORY[0xA8EBA5] ) /*0x721080*/
      {
        ThemeClass::Play(&g_BuildingTypeClass_Count, a1); /*0x721090*/
        v3 = v5; /*0x72109a*/
        if ( MEMORY[0xA8EC74] ) /*0x7210a0*/
        {
          if ( Audio::IsSoundEnabled() ) /*0x7210a6*/
          {
            if ( !MEMORY[0xA8ED64] ) /*0x7210ba*/
            {
              dword_A83D18 = v3; /*0x7210bf*/
              if ( v3 != -1 && v3 != -2 && v3 != dword_A83D14 ) /*0x7210d2*/
              {
                Debug::Log(); /*0x7210da*/
                if ( dword_A83D3C ) /*0x7210ea*/
                {
                  if ( byte_A83D21 && !AudioSample::IsBuffering(dword_A83D3C) ) /*0x7210f5*/
                    Audio::Release((_DWORD *)dword_A83D3C); /*0x721104*/
                  if ( Audio::IsSoundPlaying((_DWORD *)dword_A83D3C) != 0 ) /*0x721116*/
                  {
                    if ( dword_A83D3C ) /*0x721125*/
                      ThemeClass::RequestBuffer((_DWORD *)dword_A83D3C); /*0x721127*/
                    byte_A83D21 = 1; /*0x72112c*/
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return v2; /*0x721135*/
}


// ==== 0x00721140  RulesClass::IsTypeBuildable  this=Movie  sig=csp ====
bool __thiscall RulesClass::IsTypeBuildable(_DWORD *this, TechnoTypeClass *aP1)
{
  int v3; // eax
  int v4; // ecx

  if ( aP1 == (TechnoTypeClass *)-3 || aP1 == (TechnoTypeClass *)-2 ) /*0x721150*/
    return 1; /*0x721150*/
  if ( (unsigned int)aP1 >= this->Movie_field_0x24 ) /*0x721155*/
    return 0; /*0x721159*/
  v3 = *(_DWORD *)(*(this + 6) + 4 * (_DWORD)aP1); /*0x72115f*/
  if ( !*(_BYTE *)(v3 + 650) ) /*0x721162*/
    return 0; /*0x72116e*/
  if ( !*(_BYTE *)(v3 + 648) ) /*0x721171*/
    return 0; /*0x72117d*/
  if ( HouseClass_Player ) /*0x721188*/
  {
    v4 = *(_DWORD *)(v3 + 652); /*0x72118a*/
    if ( v4 != -1 && *(_DWORD *)(HouseClass_Player->field_34 + 188) != v4 ) /*0x7211a2*/
      return 0; /*0x7211a6*/
  }
  return MEMORY[0xA8B238] || MEMORY[0xA8B230]->techLevel >= *(_DWORD *)(v3 + 640); /*0x7211ce*/
}


// ==== 0x00721210  StringList::Find  this=StringList  sig=csp ====
int __thiscall StringList_Find(_DWORD *this, const char *a2)
{
  int v3; // esi

  if ( !a2 ) /*0x72121b*/
    return -1; /*0x72121b*/
  if ( !strlen(a2) ) /*0x721220*/
    return -1; /*0x721220*/
  v3 = 0; /*0x721230*/
  if ( (int)*(this + 9) <= 0 ) /*0x721234*/
    return -1; /*0x721252*/
  while ( _strcmpi(*(const void **)(*(this + 6) + 4 * v3), a2) ) /*0x721248*/
  {
    if ( ++v3 >= *(this + 9) ) /*0x721250*/
      return -1; /*0x721250*/
  }
  return v3; /*0x721252*/
}


// ==== 0x00721270  ScriptAction::GetArgumentString  this=ScriptAction  sig=csp ====
ObjectClass *__thiscall ScriptAction::GetArgumentString(_DWORD *this, int a2)
{
  if ( a2 < 0 || a2 >= this->ScriptAction_field_0x24 ) /*0x72127b*/
    return (ObjectClass *)g_Str_none; /*0x721286*/
  else
    return *(ObjectClass **)(this->ScriptAction_field_0x18 + 4 * a2); /*0x721280*/
}


// ==== 0x00721290  TechnoTypeClass::CheckFlag  this=TechnoTypeClass  sig=csp ====
void __thiscall GameSettings::SetScoreVolume(GameSettings *this, int volume)
{
  MouseClass *result; // eax

  result = (MouseClass *)volume; /*0x721290*/
  if ( volume >= 255 ) /*0x721299*/
    result = (MouseClass *)255; /*0x72129b*/
  this->vtable4 = result; /*0x7212a0*/
}


// ==== 0x007212B0  _DynamicVectorClass_PAUThemeControl::Destroy  this=DynamicVector  sig=csp ====
void __thiscall VectorClass_ptr_ThemeControl::sub_7212B0(int this)
{
  void *v2; // eax

  v2 = *(void **)(this + 4); /*0x7212b6*/
  *(_DWORD *)(this + 16) = 0; /*0x7212b9*/
  if ( v2 && *(_BYTE *)(this + 13) ) /*0x7212c0*/
  {
    __3_YAXPAX_Z(v2); /*0x7212c6*/
    *(_DWORD *)(this + 4) = 0; /*0x7212ce*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x7212d1*/
  *(_DWORD *)(this + 8) = 0; /*0x7212d4*/
}


// ==== 0x007212E0  _DynamicVectorClass_PAUThemeControl::GetItemIndex  this=DynamicVector  sig=csp ====
unsigned int __thiscall VectorClass_ptr_ThemeControl::sub_7212E0(int this, int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x7212e0*/
    return (unsigned int)(a2 - *(_DWORD *)(this + 4)) >> 2; /*0x7212f5*/
  else
    return 0; /*0x7212e7*/
}


// ==== 0x00721300  _DynamicVectorClass_PAUThemeControl::SetCapacity  this=DynamicVector  sig=csp ====
char __thiscall VectorClass_ptr_ThemeControl::sub_721300(void *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int v5; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x72130c*/
  {
    this->IsInitialized = 0; /*0x721312*/
    if ( a3 ) /*0x721318*/
      v4 = a3; /*0x72132e*/
    else
      v4 = __2_YAPAXI_Z(4 * a2); /*0x72132a*/
    this->IsInitialized = 1; /*0x721332*/
    if ( !v4 ) /*0x721336*/
      return 0; /*0x7213aa*/
    if ( this->Items ) /*0x721338*/
    {
      v5 = this->DynamicVector_field_0x8; /*0x72133f*/
      if ( a2 < v5 ) /*0x721344*/
        v5 = a2; /*0x721346*/
      for ( i = 0; i < v5; v4[i - 1] = *(_DWORD *)(this->Items + 4 * i - 4) ) /*0x72134c*/
        ++i; /*0x721351*/
      if ( this->IsAllocated ) /*0x72135e*/
      {
        __3_YAXPAX_Z(*((void **)this + 1)); /*0x721369*/
        this->Items = 0; /*0x721371*/
      }
    }
    this->Items = v4; /*0x72137a*/
    this->DynamicVector_field_0x8 = a2; /*0x721382*/
    this->IsAllocated = a3 == 0; /*0x721385*/
  }
  else
  {
    (*(void (__thiscall **)(void *))(this->IsInitialized)(this); /*0x72138e*/
  }
  v7 = this->DynamicVector_field_0x8; /*0x721391*/
  if ( v7 < this->Items ) /*0x721399*/
    this->Items = v7; /*0x72139b*/
  return 1; /*0x72139e*/
}


// ==== 0x007213B0  _DynamicVectorClass_PAUThemeControl::FindItemIndex  this=DynamicVector  sig=csp ====
int __thiscall VectorClass_ptr_ThemeControl::sub_7213B0(int *this, _DWORD *a2)
{
  int v2; // edx
  int result; // eax
  _DWORD *i; // ecx

  v2 = this->Items; /*0x7213b0*/
  result = 0; /*0x7213b3*/
  if ( v2 <= 0 ) /*0x7213b8*/
    return -1; /*0x7213cf*/
  for ( i = (_DWORD *)this->Items; *i != *a2; ++i ) /*0x7213be*/
  {
    if ( ++result >= v2 ) /*0x7213cd*/
      return -1; /*0x7213cd*/
  }
  return result; /*0x7213d2*/
}


// ==== 0x007213E0  _DynamicVectorClass_PAUThemeControl::Constructor_VectorClass_ThemeControl___  this=DynamicVector  sig=csp ====
DynamicVector *__thiscall VectorClass_ptr_ThemeControl::Constructor_VectorClass_ThemeControl___(_DWORD *Block, char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x7213e3*/
  *Block = &vt_VectorClass_ThemeControl; /*0x7213e6*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x7213f0*/
  {
    __3_YAXPAX_Z(v3); /*0x7213f8*/
    *(Block + 1) = 0; /*0x721400*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x72140b*/
  *(Block + 2) = 0; /*0x721411*/
  if ( (a2 & 1) != 0 ) /*0x721418*/
    __3_YAXPAX_Z(Block); /*0x72141b*/
  return (DynamicVector *)Block; /*0x721425*/
}


// ==== 0x00721430  sub_721430  this=-  sig=ida-proto ====
void sub_721430()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x72143c*/
  *(double *)&MEMORY[0xB0F1F8][672] = Math::Sqrt(v0 + v0); /*0x72144e*/
}


// ==== 0x00721460  sub_721460  this=-  sig=ida-proto ====
void sub_721460()
{
  MEMORY[0xB0F508] = *(double *)&MEMORY[0xB0F1F8][672] / 60.0; /*0x72146c*/
}


// ==== 0x00721480  sub_721480  this=-  sig=ida-proto ====
void sub_721480()
{
  *(double *)&MEMORY[0xB0F1F8][728] = 1.0 / MEMORY[0xB0F508]; /*0x72148c*/
}


// ==== 0x007214A0  sub_7214A0  this=-  sig=ida-proto ====
void sub_7214A0()
{
  *(double *)&MEMORY[0xB0F1F8][720] = 0.0174532925199433 * 45.0; /*0x7214ac*/
}


// ==== 0x007214C0  sub_7214C0  this=-  sig=ida-proto ====
void sub_7214C0()
{
  *(double *)&MEMORY[0xB0F1F8][680] = 0.0174532925199433 * 60.0; /*0x7214cc*/
}


// ==== 0x007214E0  sub_7214E0  this=-  sig=ida-proto ====
void sub_7214E0()
{
  *(double *)&MEMORY[0xB0F1F8][640] = 0.0174532925199433 * 90.0; /*0x7214ec*/
}


// ==== 0x00721500  sub_721500  this=-  sig=ida-proto ====
__int64 sub_721500()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(*(double *)&MEMORY[0xB0F1F8][640] - *(double *)&MEMORY[0xB0F1F8][680]); /*0x721512*/
  result = Math::RoundToInt(v0 * *(double *)&MEMORY[0xB0F1F8][672] * 0.5); /*0x721526*/
  MEMORY[0xB0F510] = result; /*0x72152b*/
  return result; /*0x721530*/
}


// ==== 0x00721540  sub_721540  this=-  sig=ida-proto ====
void sub_721540()
{
  *(double *)&MEMORY[0xB0F1F8][688] = Math::ArcTan((double)MEMORY[0xB0F510] * 0.00390625); /*0x721557*/
}


// ==== 0x00721570  sub_721570  this=-  sig=ida-proto ====
void sub_721570()
{
  *(double *)&MEMORY[0xB0F1F8][712] = Math::ArcTan((double)(2 * MEMORY[0xB0F510]) / *(double *)&MEMORY[0xB0F1F8][672]); /*0x721592*/
}


// ==== 0x007215A0  sub_7215A0  this=-  sig=ida-proto ====
__int64 sub_7215A0()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * MEMORY[0xB0F510]) + 0.5); /*0x7215bb*/
  MEMORY[0xB0F500] = result; /*0x7215c0*/
  return result; /*0x7215c6*/
}


// ==== 0x007215D0  sub_7215D0  this=-  sig=ida-proto ====
int sub_7215D0()
{
  *(_WORD *)&MEMORY[0xB0F1F8][664] = 0; /*0x7215d2*/
  *(_WORD *)&MEMORY[0xB0F1F8][666] = 0; /*0x7215d8*/
  return 0; /*0x7215de*/
}


// ==== 0x007215E0  sub_7215E0  this=-  sig=ida-proto ====
int sub_7215E0()
{
  *(_DWORD *)&MEMORY[0xB0F1F8][696] = 0; /*0x7215e2*/
  *(_DWORD *)&MEMORY[0xB0F1F8][700] = 0; /*0x7215e7*/
  *(_DWORD *)&MEMORY[0xB0F1F8][704] = 0; /*0x7215ec*/
  return 0; /*0x7215f1*/
}


// ==== 0x00721600  sub_721600  this=-  sig=ida-proto ====
int sub_721600()
{
  *(_DWORD *)&MEMORY[0xB0F1F8][744] = 0; /*0x721605*/
  *(_DWORD *)&MEMORY[0xB0F1F8][736] = 128; /*0x72160f*/
  *(_DWORD *)&MEMORY[0xB0F1F8][740] = 128; /*0x721614*/
  return 128; /*0x721619*/
}


// ==== 0x00721620  sub_721620  this=-  sig=ida-proto ====
int sub_721620()
{
  *(_DWORD *)&MEMORY[0xB0F1F8][648] = 0; /*0x721622*/
  *(_DWORD *)&MEMORY[0xB0F1F8][652] = 0; /*0x721627*/
  *(_DWORD *)&MEMORY[0xB0F1F8][656] = 0; /*0x72162c*/
  *(_DWORD *)&MEMORY[0xB0F1F8][660] = 0; /*0x721631*/
  return 0; /*0x721636*/
}


// ==== 0x00721640  sub_721640  this=-  sig=ida-proto ====
int sub_721640()
{
  MEMORY[0xB0F4EC] = 0; /*0x721647*/
  MEMORY[0xB0F4F0] = 0; /*0x72164c*/
  MEMORY[0xB0F4F4] = 1; /*0x721651*/
  MEMORY[0xB0F4F5] = 0; /*0x721658*/
  MEMORY[0xB0F4E8] = (int)&vt_DynamicVectorClass_TiberiumClass; /*0x72165d*/
  MEMORY[0xB0F4FC] = 10; /*0x721667*/
  MEMORY[0xB0F4F8] = 0; /*0x721671*/
  return atexit(sub_721680); /*0x72167c*/
}


// ==== 0x00721680  sub_721680  this=-  sig=ida-proto ====
void __cdecl sub_721680()
{
  MEMORY[0xB0F4E8] = (int)&vt_VectorClass_TiberiumClass; /*0x721688*/
  if ( MEMORY[0xB0F4EC] && MEMORY[0xB0F4F5] ) /*0x72169c*/
  {
    __3_YAXPAX_Z(MEMORY[0xB0F4EC]); /*0x72169f*/
    MEMORY[0xB0F4EC] = 0; /*0x7216a7*/
  }
  MEMORY[0xB0F4F5] = 0; /*0x7216ad*/
  MEMORY[0xB0F4F0] = 0; /*0x7216b3*/
}


// ==== 0x007216C0  TiberiumClass::TiberiumClass  this=TiberiumClass  sig=csp ====
_DWORD *__thiscall TiberiumClass::TiberiumClass(_DWORD *this, ObjectClass *aP1)
{
  IUnknown *v3; // edx
  int v4; // eax
  int v5; // eax

  AbstractTypeClass::Constructor((int)this, (AbstractClass *)aP1); /*0x7216ca*/
  this->owningHouseIndex = -1717986918; /*0x7216dc*/
  this->Spread = -1717986918; /*0x7216e7*/
  this->isInLogic = -1; /*0x7216f1*/
  this->location = 0; /*0x7216fb*/
  this->q0A4 = 1069128089; /*0x721701*/
  this->lineTrailer = 0; /*0x721707*/
  this->SpreadPercentage = 1069128089; /*0x72170d*/
  this->q0B8 = 0; /*0x721713*/
  this->Growth = 0; /*0x721719*/
  this->GrowthPercentage = 0; /*0x72171f*/
  AnimTypeVector::Constructor(this + 49, 0, 0); /*0x721725*/
  this->Image = 10; /*0x72172a*/
  this->Debris = 0; /*0x721731*/
  this->q0C4 = &vt_TypeList_AnimTypeClass_const; /*0x721734*/
  this->NumImages = 0; /*0x72173a*/
  this->q0E4 = 0; /*0x721740*/
  this->q0E8 = 0; /*0x721746*/
  this->TiberiumClass_field_EC = 0; /*0x72174c*/
  this->TiberiumClass_field_F0 = 0; /*0x721752*/
  this->TiberiumClass_field_F4_e = 0; /*0x721758*/
  this->TiberiumClass_field_F8_e = 0; /*0x72175e*/
  this->TiberiumClass_field_FC_e = 0; /*0x721764*/
  this->SpreadTimer_e = *(_DWORD *)&HouseClass_Player.__pad_5568[23248]; /*0x721770*/
  this->q108 = 0; /*0x721776*/
  this->TiberiumClass_field_10C_e = 0; /*0x72177c*/
  this->TiberiumClass_field_110_e = 0; /*0x721782*/
  this->TiberiumClass_field_114_e = 0; /*0x721788*/
  this->TiberiumClass_field_118 = 0; /*0x72178e*/
  v3 = *(IUnknown **)&HouseClass_Player.__pad_5568[23248]; /*0x721794*/
  this->q124 = 0; /*0x72179a*/
  this->GrowthTimer = v3; /*0x7217a0*/
  *this = &TiberiumClass::`vftable'; /*0x7217a6*/
  this->vtable2 = &TiberiumClass::`vftable'; /*0x7217ac*/
  this->vtable3 = &TiberiumClass::`vftable'; /*0x7217b3*/
  this->vtable4 = &vt_TiberiumClass; /*0x7217ba*/
  this->isInLogic = *(_DWORD *)&stru_B05488.__pad_579C[18644]; /*0x7217c6*/
  if ( *(int *)&stru_B05488.__pad_579C[18644] < *(int *)&stru_B05488.__pad_579C[18636] /*0x7217fe*/
    || (stru_B05488.__pad_579C[18641] || !*(_DWORD *)&stru_B05488.__pad_579C[18636])
    && *(int *)&stru_B05488.__pad_579C[18648] > 0
    && (*(unsigned __int8 (__thiscall **)(char *, int, _DWORD))(*(_DWORD *)&stru_B05488.__pad_579C[18628] + 8))(
         &stru_B05488.__pad_579C[18628],
         *(_DWORD *)&stru_B05488.__pad_579C[18636] + *(_DWORD *)&stru_B05488.__pad_579C[18648],
         0) )
  {
    v4 = (*(_DWORD *)&stru_B05488.__pad_579C[18644])++; /*0x72180b*/
    *(_DWORD *)(*(_DWORD *)&stru_B05488.__pad_579C[18632] + 4 * v4) = this; /*0x72181a*/
  }
  (*(void (__thiscall **)(_DWORD *))(this->q0C4 + 12))(this + 49); /*0x721821*/
  if ( *(int *)&stru_B05488.__pad_579C[19036] < *(int *)&stru_B05488.__pad_579C[19028] /*0x721857*/
    || (stru_B05488.__pad_579C[19033] || !*(_DWORD *)&stru_B05488.__pad_579C[19028])
    && *(int *)&stru_B05488.__pad_579C[19040] > 0
    && (*(unsigned __int8 (__thiscall **)(char *, int, _DWORD))(*(_DWORD *)&stru_B05488.__pad_579C[19020] + 8))(
         &stru_B05488.__pad_579C[19020],
         *(_DWORD *)&stru_B05488.__pad_579C[19028] + *(_DWORD *)&stru_B05488.__pad_579C[19040],
         0) )
  {
    v5 = (*(_DWORD *)&stru_B05488.__pad_579C[19036])++; /*0x721864*/
    *(_DWORD *)(*(_DWORD *)&stru_B05488.__pad_579C[19024] + 4 * v5) = this; /*0x721873*/
  }
  return this; /*0x721878*/
}


// ==== 0x00721880  TiberiumClass::CleanupMembers  this=TiberiumClass  sig=csp ====
int __thiscall sub_721880(int this)
{
  int v2; // eax
  int v3; // eax
  void **v4; // edi
  _DWORD *v5; // eax
  int i; // ecx
  void **v7; // edi
  void *v8; // eax
  void *v10; // [esp-8h] [ebp-18h]
  int v11; // [esp+Ch] [ebp-4h] BYREF

  *(_DWORD *)this = &TiberiumClass::`vftable'; /*0x721888*/
  *(_DWORD *)(this + 4) = &TiberiumClass::`vftable'; /*0x72188e*/
  *(_DWORD *)(this + 8) = &TiberiumClass::`vftable'; /*0x721895*/
  *(_DWORD *)(this + 12) = &vt_TiberiumClass; /*0x72189c*/
  AbstractClass::AnnounceExpiredPointer((void **)this, 1); /*0x7218a3*/
  v11 = this; /*0x7218b8*/
  v2 = (*(int (__thiscall **)(int *, int *))(MEMORY[0xB0F670] + 16))(&MEMORY[0xB0F670], &v11); /*0x7218bc*/
  if ( v2 != -1 && v2 < MEMORY[0xB0F680] && v2 < --MEMORY[0xB0F680] ) /*0x7218d7*/
  {
    do /*0x7218ef*/
    {
      ++v2; /*0x7218df*/
      *((_DWORD *)MEMORY[0xB0F674] + v2 - 1) = *((_DWORD *)MEMORY[0xB0F674] + v2); /*0x7218e3*/
    }
    while ( v2 < MEMORY[0xB0F680] ); /*0x7218ef*/
  }
  v11 = this; /*0x721901*/
  v3 = (*(int (__thiscall **)(int *, int *))(MEMORY[0xB0F4E8] + 16))(&MEMORY[0xB0F4E8], &v11); /*0x721905*/
  if ( v3 != -1 && v3 < MEMORY[0xB0F4F8] && v3 < --MEMORY[0xB0F4F8] ) /*0x721920*/
  {
    do /*0x721938*/
    {
      ++v3; /*0x721928*/
      *(_DWORD *)&MEMORY[0xB0F4EC]->__pad_0[4 * v3 - 4] = *(_DWORD *)&MEMORY[0xB0F4EC]->__pad_0[4 * v3]; /*0x72192c*/
    }
    while ( v3 < MEMORY[0xB0F4F8] ); /*0x721938*/
  }
  __3_YAXPAX_Z(*(void **)(this + 252)); /*0x721941*/
  v10 = *(void **)(this + 248); /*0x72194e*/
  *(_DWORD *)(this + 252) = 0; /*0x72194f*/
  __3_YAXPAX_Z(v10); /*0x721955*/
  v4 = *(void ***)(this + 244); /*0x72195a*/
  *(_DWORD *)(this + 248) = 0; /*0x721965*/
  if ( v4 ) /*0x72196b*/
  {
    __3_YAXPAX_Z(v4[2]); /*0x721971*/
    __3_YAXPAX_Z(v4); /*0x721977*/
  }
  v5 = *(_DWORD **)(this + 272); /*0x72197f*/
  *(_DWORD *)(this + 244) = 0; /*0x721985*/
  if ( v5 ) /*0x72198d*/
  {
    for ( i = 0; i <= *v5; *(_DWORD *)(v5[2] + 4 * i - 4) = 0 ) /*0x721995*/
      ++i; /*0x72199a*/
    *v5 = 0; /*0x7219a5*/
    v7 = *(void ***)(this + 272); /*0x7219a7*/
    if ( v7 ) /*0x7219af*/
    {
      __3_YAXPAX_Z(v7[2]); /*0x7219b5*/
      __3_YAXPAX_Z(v7); /*0x7219bb*/
    }
    *(_DWORD *)(this + 272) = 0; /*0x7219c3*/
  }
  if ( *(_DWORD *)(this + 280) ) /*0x7219c9*/
  {
    __3_YAXPAX_Z(*(void **)(this + 280)); /*0x7219d4*/
    *(_DWORD *)(this + 280) = 0; /*0x7219dc*/
  }
  if ( *(_DWORD *)(this + 276) ) /*0x7219e2*/
  {
    __3_YAXPAX_Z(*(void **)(this + 276)); /*0x7219ed*/
    *(_DWORD *)(this + 276) = 0; /*0x7219f5*/
  }
  *(_DWORD *)(this + 268) = 0; /*0x7219fb*/
  v8 = *(void **)(this + 200); /*0x721a01*/
  *(_DWORD *)(this + 196) = &vt_VectorClass_AnimTypeClass_const; /*0x721a09*/
  if ( v8 && *(_BYTE *)(this + 209) ) /*0x721a15*/
  {
    __3_YAXPAX_Z(v8); /*0x721a1e*/
    *(_DWORD *)(this + 200) = 0; /*0x721a26*/
  }
  *(_BYTE *)(this + 209) = 0; /*0x721a2e*/
  *(_DWORD *)(this + 204) = 0; /*0x721a34*/
  return AbstractTypeClass::Dtor((_DWORD *)this); /*0x721a3f*/
}


// ==== 0x00721A50  TiberiumClass::LoadFromINI  this=TiberiumClass  sig=csp ====
char __thiscall TiberiumClass::LoadFromINI(int this, unsigned __int8 ***aP1)
{
  int Int_Overwrite; // eax
  double Double_Overwrite; // st7
  CCINIClass *v5; // eax
  int eax2a; // eax
  double v8; // st7
  CCINIClass *v7; // eax
  int v10; // eax
  INIClass *v11; // ecx
  int v12; // eax
  AbstractClass *i; // eax
  int ecx10; // ecx
  VectorClass *v13; // edx
  VectorClass *v14; // eax
  char result; // al
  INIClass *_FFFFFFF4; // [esp-Ch] [ebp-D0h]
  INIClass *v19; // [esp-Ch] [ebp-D0h]
  DynamicVector *v18; // [esp-8h] [ebp-CCh]
  AnimTypeClass *v21; // [esp+8h] [ebp-BCh] BYREF
  _DWORD v22[3]; // [esp+Ch] [ebp-B8h] BYREF
  char v23; // [esp+19h] [ebp-ABh]
  int v24; // [esp+1Ch] [ebp-A8h]
  int v25; // [esp+20h] [ebp-A4h]
  VectorClass *v26; // [esp+24h] [ebp-A0h]
  _DWORD v27[7]; // [esp+28h] [ebp-9Ch] BYREF
  INIClass String[2]; // [esp+44h] [ebp-80h] BYREF

  INIClass::ResetSection(aP1); /*0x721a63*/
  if ( !AbstractTypeClass::LoadFromINI(this, (AbstractTypeClass *)aP1) ) /*0x721a6b*/
    return 0; /*0x721cea*/
  Int_Overwrite = INIClass::ReadInt_Overwrite( /*0x721a8b*/
                    (int)aP1,
                    (unsigned __int8 *)(this + 36),
                    (CCINIClass *)&stru_830620.__pad_579C[60264],
                    *(INIClass **)(this + 156));
  _FFFFFFF4 = *(INIClass **)(this + 160); /*0x721a9d*/
  *(_DWORD *)(this + 156) = Int_Overwrite; /*0x721aa6*/
  Double_Overwrite = INIClass::ReadDouble_Overwrite( /*0x721aac*/
                       (int)aP1,
                       (INIClass *)(this + 36),
                       (unsigned __int8 *)&stru_830620.__pad_579C[60244],
                       _FFFFFFF4);
  v5 = *(CCINIClass **)(this + 168); /*0x721ab1*/
  *(double *)(this + 160) = Double_Overwrite; /*0x721ab9*/
  eax2a = INIClass::ReadInt_Overwrite( /*0x721ac6*/
            (int)aP1,
            (unsigned __int8 *)(this + 36),
            (CCINIClass *)&stru_830620.__pad_579C[60236],
            (INIClass *)v5);
  v19 = *(INIClass **)(this + 176); /*0x721ad8*/
  *(_DWORD *)(this + 168) = eax2a; /*0x721ae1*/
  v8 = INIClass::ReadDouble_Overwrite( /*0x721ae7*/
         (int)aP1,
         (INIClass *)(this + 36),
         (unsigned __int8 *)&stru_830620.__pad_579C[60216],
         v19);
  v7 = *(CCINIClass **)(this + 184); /*0x721aec*/
  *(double *)(this + 176) = v8; /*0x721af4*/
  v10 = INIClass::ReadInt_Overwrite( /*0x721b01*/
          (int)aP1,
          (unsigned __int8 *)(this + 36),
          (CCINIClass *)&stru_830620.__pad_579C[60208],
          (INIClass *)v7);
  v11 = *(INIClass **)(this + 188); /*0x721b06*/
  *(_DWORD *)(this + 184) = v10; /*0x721b0c*/
  v12 = INIClass::ReadInt_Overwrite((int)aP1, (unsigned __int8 *)(this + 36), &stru_81938C, v11); /*0x721b1b*/
  v18 = *(DynamicVector **)(this + 192); /*0x721b28*/
  *(_DWORD *)(this + 188) = v12; /*0x721b2f*/
  *(_DWORD *)(this + 192) = BuildingTypeClass::FindAnimByName( /*0x721b3a*/
                              aP1,
                              (unsigned __int8 *)(this + 36),
                              (unsigned __int8 *)&stru_81B138,
                              (int)v18);
  if ( INIClass::GetString( /*0x721b57*/
         aP1,
         (INIClass *)(this + 36),
         (unsigned __int8 *)&stru_830620.__pad_579C[60200],
         (INIClass *)&MEMORY[0x87F8E4].__pad_5568[20760],
         String,
         128) )
  {
    DynamicVectorClass::AnimTypeConstructor(v27, 0, 0); /*0x721b6c*/
    v27[0] = &vt_TypeList_AnimTypeClass_const; /*0x721b7b*/
    for ( i = (AbstractClass *)strtok(String[0].__pad_0, MEMORY[0x817F70].__pad_0); /*0x721b8d*/
          i;
          i = (AbstractClass *)strtok(0, MEMORY[0x817F70].__pad_0) )
    {
      if ( !i->__pad_0[0] ) /*0x721b8f*/
        break; /*0x721b92*/
      v21 = AnimTypeClass::FindOrCreate(i); /*0x721b9d*/
      if ( v21 ) /*0x721ba1*/
        DynamicVector::Add_Alt4(v27, (VectorClass *)&v21); /*0x721bac*/
    }
    TypeList::AnimTypeCopy(v22, (VectorClass *)v27); /*0x721bcd*/
    v27[0] = &vt_VectorClass_AnimTypeClass_const; /*0x721bd6*/
    DynamicVectorClass::Destroy_Alt((int)v27); /*0x721bde*/
  }
  else
  {
    TypeList::AnimTypeCopy(v22, (VectorClass *)(this + 196)); /*0x721bf0*/
  }
  VectorClass::CopyDefault((_DWORD *)(this + 196), (VectorClass *)v22); /*0x721c03*/
  ecx10 = v25; /*0x721c0c*/
  v13 = v26; /*0x721c10*/
  *(_DWORD *)(this + 212) = v24; /*0x721c14*/
  v14 = (VectorClass *)v22[1]; /*0x721c17*/
  *(_DWORD *)(this + 216) = ecx10; /*0x721c1b*/
  *(_DWORD *)(this + 220) = v13; /*0x721c1e*/
  v22[0] = &vt_VectorClass_AnimTypeClass_const; /*0x721c21*/
  if ( v14 && v23 ) /*0x721c34*/
    __3_YAXPAX_Z(v14); /*0x721c37*/
  switch ( INIClass::ReadInt_Overwrite( /*0x721c55*/
             (int)aP1,
             (unsigned __int8 *)(this + 36),
             &g_INI_Key_Image,
             (INIClass *)0xFFFFFFFF) )
  {
    case -1: /*0x721c55*/
      goto LABEL_19;
    case 2: /*0x721c55*/
      *(_DWORD *)(this + 224) = MEMORY[0xA83D84][1].sectionHead[1]; /*0x721c69*/
      *(_DWORD *)(this + 228) = 12; /*0x721c6f*/
      *(_DWORD *)(this + 232) = 12; /*0x721c75*/
      return 1; /*0x721c85*/
    case 3: /*0x721c55*/
      *(_DWORD *)(this + 224) = *(_DWORD *)&MEMORY[0xA83D84][5].__pad_41[3]; /*0x721c94*/
      goto LABEL_18; /*0x721c9a*/
    case 4: /*0x721c55*/
      *(_DWORD *)(this + 224) = MEMORY[0xA83D84][6].INIClass_field_3C; /*0x721ca8*/
      goto LABEL_18; /*0x721cae*/
    default:
      *(_DWORD *)(this + 224) = MEMORY[0xA83D84][4].unknown38; /*0x721cbb*/
LABEL_18:
      *(_DWORD *)(this + 236) = 8; /*0x721cc1*/
      *(_DWORD *)(this + 228) = 12; /*0x721cd0*/
      *(_DWORD *)(this + 232) = 12; /*0x721cd6*/
LABEL_19:
      result = 1; /*0x721cdc*/
      break; /*0x721ce6*/
  }
  return result; /*0x721c7b*/
}


// ==== 0x00721D10  ObjectClass::SmallFunc_721D10  this=ObjectTypeClass  sig=csp ====
char __thiscall SmallFunc_721D10(char *this)
{
  int KeyCount; // ebp
  CCINIClass *v3; // ebx
  CCINIClass *StringByIndex; // esi
  int v5; // eax
  TiberiumClass *v6; // eax
  _DWORD *v7; // eax
  char Destination[24]; // [esp+Ch] [ebp-18h] BYREF

  KeyCount = INIClass::GetKeyCount(this, (INIClass *)&stru_830620.__pad_579C[60272]); /*0x721d22*/
  v3 = 0; /*0x721d24*/
  if ( KeyCount <= 0 ) /*0x721d28*/
    return 1; /*0x721db3*/
  do /*0x721da5*/
  {
    StringByIndex = (CCINIClass *)INIClass::GetStringByIndex(this, (CCINIClass *)&stru_830620.__pad_579C[60272], v3); /*0x721d3c*/
    if ( (int)INIClass::GetString( /*0x721d59*/
                (unsigned __int8 ***)this,
                (INIClass *)&stru_830620.__pad_579C[60272],
                (unsigned __int8 *)StringByIndex,
                (INIClass *)&MEMORY[0x87F8E4].__pad_5568[20760],
                (INIClass *)Destination,
                24) > 0 )
    {
      v5 = atoi(StringByIndex->__pad_0); /*0x721d5c*/
      if ( v5 >= *(int *)&MEMORY[0xB077F8].__pad_579C[9572] ) /*0x721d6c*/
      {
        v7 = (_DWORD *)__2_YAPAXI_Z(0x128u); /*0x721d7e*/
        if ( v7 ) /*0x721d88*/
          v6 = (TiberiumClass *)TiberiumClass::TiberiumClass(v7, Destination); /*0x721d91*/
        else
          v6 = 0; /*0x721d98*/
      }
      else
      {
        v6 = *(TiberiumClass **)(*(_DWORD *)&MEMORY[0xB077F8].__pad_579C[9560] + 4 * v5); /*0x721d74*/
      }
      (*(void (__thiscall **)(TiberiumClass *, char *))(*(_DWORD *)v6->__pad_0 + 100))(v6, this); /*0x721d9f*/
    }
    v3 = (CCINIClass *)((char *)v3 + 1); /*0x721da2*/
  }
  while ( (int)v3 < KeyCount ); /*0x721da5*/
  return 1; /*0x721da8*/
}


// ==== 0x00721DC0  TiberiumClass::Harvest  this=TiberiumClass  sig=csp ====
int __thiscall TiberiumClass::_vt13(int this, int *a2)
{
  AbstractTypeClass::ProcessPower((char *)this, a2); /*0x721dc9*/
  Power::TimerProcess(*(_DWORD *)(this + 156)); /*0x721dd7*/
  Power::TimerProcess(*(_DWORD *)(this + 168)); /*0x721de5*/
  Power::TimerProcess(*(_DWORD *)(this + 184)); /*0x721df3*/
  Power::TimerProcess(*(_DWORD *)(this + 188)); /*0x721e01*/
  Power::TimerProcess(*(_DWORD *)(this + 192)); /*0x721e0f*/
  Power::TimerProcess(*(_DWORD *)(this + 228)); /*0x721e1d*/
  return Power::TimerProcess(*(_DWORD *)(this + 232)); /*0x721e30*/
}


// ==== 0x00721E40  TiberiumClass::ddtor  this=TiberiumClass  sig=csp ====
int __stdcall TiberiumClass::_vt03(int a1, _DWORD *a2)
{
  if ( !a2 ) /*0x721e46*/
    return -2147467261; /*0x721e48*/
  *a2 = -985803917; /*0x721e56*/
  a2[1] = 298980638; /*0x721e5e*/
  a2[2] = 1610642817; /*0x721e67*/
  a2[3] = -1252326136; /*0x721e70*/
  return 0; /*0x721e4d*/
}


// ==== 0x00721E80  TiberiumClass::SaveLoad_Prefix  this=TiberiumClass  sig=csp ====
int __stdcall TiberiumClass::SaveLoad_Prefix(int a1, int a2)
{
  int v2; // esi
  int v3; // ebp
  _DWORD *v4; // eax
  int i; // ecx
  void **v6; // ecx
  _DWORD *v7; // eax
  int j; // ecx
  void **v9; // ecx
  int v10; // eax
  int v11; // ebx
  int result; // eax
  int v13; // edi

  v2 = a1; /*0x721e83*/
  v3 = 0; /*0x721e87*/
  v4 = *(_DWORD **)(a1 + 244); /*0x721e8a*/
  if ( v4 ) /*0x721e92*/
  {
    for ( i = 0; i <= *v4; *(_DWORD *)(v4[2] + 4 * i - 4) = 0 ) /*0x721e9a*/
      ++i; /*0x721e9f*/
    *v4 = 0; /*0x721eaa*/
    v6 = *(void ***)(v2 + 244); /*0x721eac*/
    if ( v6 ) /*0x721eb4*/
      Scalar::Dtor(v6, 1); /*0x721eb8*/
    *(_DWORD *)(v2 + 244) = 0; /*0x721ebd*/
  }
  if ( *(_DWORD *)(v2 + 252) ) /*0x721ec3*/
  {
    __3_YAXPAX_Z(*(void **)(v2 + 252)); /*0x721ece*/
    *(_DWORD *)(v2 + 252) = 0; /*0x721ed6*/
  }
  if ( *(_DWORD *)(v2 + 248) ) /*0x721edc*/
  {
    __3_YAXPAX_Z(*(void **)(v2 + 248)); /*0x721ee7*/
    *(_DWORD *)(v2 + 248) = 0; /*0x721eef*/
  }
  v7 = *(_DWORD **)(v2 + 272); /*0x721ef5*/
  *(_DWORD *)(v2 + 240) = 0; /*0x721efb*/
  if ( v7 ) /*0x721f03*/
  {
    for ( j = 0; j <= *v7; *(_DWORD *)(v7[2] + 4 * j - 4) = 0 ) /*0x721f0b*/
      ++j; /*0x721f10*/
    *v7 = 0; /*0x721f1b*/
    v9 = *(void ***)(v2 + 272); /*0x721f1d*/
    if ( v9 ) /*0x721f25*/
      Scalar::Dtor(v9, 1); /*0x721f29*/
    *(_DWORD *)(v2 + 272) = 0; /*0x721f2e*/
  }
  if ( *(_DWORD *)(v2 + 280) ) /*0x721f34*/
  {
    __3_YAXPAX_Z(*(void **)(v2 + 280)); /*0x721f3f*/
    *(_DWORD *)(v2 + 280) = 0; /*0x721f47*/
  }
  if ( *(_DWORD *)(v2 + 276) ) /*0x721f4d*/
  {
    __3_YAXPAX_Z(*(void **)(v2 + 276)); /*0x721f58*/
    *(_DWORD *)(v2 + 276) = 0; /*0x721f60*/
  }
  v10 = *(_DWORD *)(v2 + 196); /*0x721f66*/
  *(_DWORD *)(v2 + 268) = 0; /*0x721f74*/
  (*(void (__thiscall **)(int))(v10 + 12))(v2 + 196); /*0x721f7a*/
  v11 = a2; /*0x721f7d*/
  result = AbstractClass::SaveLoad_Prefix_0((_DWORD *)v2, a2); /*0x721f83*/
  if ( result >= 0 ) /*0x721f8a*/
  {
    if ( v2 ) /*0x721f92*/
    {
      AbstractTypeClass::Init(v2, (int)&a1); /*0x721f9b*/
      DynamicVectorClass::AnimTypeConstructor((_DWORD *)(v2 + 196), 0, 0); /*0x721fa4*/
      *(_DWORD *)(v2 + 196) = &vt_TypeList_AnimTypeClass_const; /*0x721fb0*/
      Timer::Start((_DWORD *)(v2 + 256), 0); /*0x721fb6*/
      Timer::Start((_DWORD *)(v2 + 284), 0); /*0x721fc2*/
      *(_DWORD *)v2 = &TiberiumClass::`vftable'; /*0x721fc7*/
      *(_DWORD *)(v2 + 4) = &TiberiumClass::`vftable'; /*0x721fcd*/
      *(_DWORD *)(v2 + 8) = &TiberiumClass::`vftable'; /*0x721fd4*/
      *(_DWORD *)(v2 + 12) = &vt_TiberiumClass; /*0x721fdb*/
    }
    ObjectPtr::RegisterForTracking((int)&MEMORY[0xB0C110], (int *)(v2 + 224)); /*0x721fee*/
    if ( v2 != -196 ) /*0x721ff5*/
      AnimTypeList::Constructor((_DWORD *)(v2 + 196)); /*0x721ff9*/
    (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)v11 + 12))(v11, &a1, 4, 0); /*0x722009*/
    result = 0; /*0x72200c*/
    if ( a1 > 0 ) /*0x722012*/
    {
      do /*0x722037*/
      {
        (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)v11 + 12))(v11, &a2, 4, 0); /*0x722023*/
        DynamicVector::Add_Alt4((_DWORD *)(v2 + 196), &a2); /*0x72202d*/
        ++v3; /*0x722032*/
      }
      while ( v3 < a1 ); /*0x722037*/
      result = 0; /*0x722039*/
    }
    v13 = 0; /*0x722041*/
    if ( *(int *)(v2 + 212) > 0 ) /*0x722045*/
    {
      do /*0x722064*/
        ObjectPtr::RegisterForTracking((int)&MEMORY[0xB0C110], (int *)(*(_DWORD *)(v2 + 200) + 4 * v13++)); /*0x722056*/
      while ( v13 < *(_DWORD *)(v2 + 212) ); /*0x722064*/
      result = 0; /*0x722066*/
    }
    *(_DWORD *)(v2 + 272) = 0; /*0x722068*/
    *(_DWORD *)(v2 + 276) = 0; /*0x72206e*/
    *(_DWORD *)(v2 + 280) = 0; /*0x722074*/
    *(_DWORD *)(v2 + 244) = 0; /*0x72207a*/
    *(_DWORD *)(v2 + 248) = 0; /*0x722080*/
    *(_DWORD *)(v2 + 252) = 0; /*0x722086*/
  }
  return result; /*0x72208c*/
}


// ==== 0x007220A0  TiberiumClass::SpreadGrowth  this=TiberiumClass  sig=csp ====
int __thiscall TiberiumClass::_vt07(#374 *this, int a2, _DWORD *a3)
{
  int result; // eax

  result = ObjectClass::GetSizeMax(this); /*0x7220ac*/
  if ( result >= 0 ) /*0x7220b3*/
  {
    *a3 += 4 * *(_DWORD *)(a2 + 212) + 4; /*0x7220c6*/
    return 0; /*0x7220c8*/
  }
  return result; /*0x7220ca*/
}


// ==== 0x007220D0  TiberiumClass::SaveLoad_Prefix_0  this=TiberiumClass  sig=csp ====
int __stdcall TiberiumClass::SaveLoad_Prefix_0(TechnoTypeClass *aP0, int *a1, int aP2)
{
  int result; // eax
  int v4; // edx
  int i; // esi

  result = AbstractClass::SaveLoad_Prefix((ObjectTypeClass *)aP0, (ObjectTypeClass *)a1, (ObjectTypeClass *)aP2); /*0x7220e1*/
  if ( result >= 0 ) /*0x7220e8*/
  {
    v4 = *a1; /*0x7220f0*/
    aP2 = aP0->ChargerTurrets[6]; /*0x7220fd*/
    (*(void (__stdcall **)(int *, int *, int, _DWORD))(v4 + 16))(a1, &aP2, 4, 0); /*0x722101*/
    for ( i = 0; i < aP2; ++i ) /*0x72210c*/
      (*(void (__stdcall **)(int *, int, int, _DWORD))(*a1 + 16))(a1, aP0->ChargerTurrets[3] + 4 * i, 4, 0); /*0x72211f*/
    return 0; /*0x722129*/
  }
  return result; /*0x72212c*/
}


// ==== 0x00722140  TiberiumClass::UpdateField  this=TiberiumClass  sig=csp ====
int __thiscall TiberiumClass::_vt10(int *this, int a2, int a3)
{
  int i; // edx
  int v4; // eax
  int v5; // esi
  int v6; // eax
  int result; // eax

  for ( i = this->Debris - 1; i >= 0; --i ) /*0x72214c*/
  {
    if ( *(_DWORD *)(this->Value + 4 * i) == a2 ) /*0x722159*/
    {
      v4 = this->Debris; /*0x72215b*/
      if ( i < v4 ) /*0x722163*/
      {
        v5 = v4 - 1; /*0x722165*/
        v6 = i; /*0x722168*/
        for ( this->Debris = v5; /*0x722172*/
              v6 < this->Debris;
              *(_DWORD *)(this->Value + 4 * v6 - 4) = *(_DWORD *)(this->Value + 4 * v6) )
        {
          ++v6; /*0x72217a*/
        }
      }
    }
  }
  result = this->attachedBomb; /*0x722191*/
  if ( result == a2 ) /*0x72219a*/
    this->attachedBomb = 0; /*0x72219c*/
  return result; /*0x722199*/
}


// ==== 0x007221B0  ObjectClass::ProcessSpeechEvents  this=ObjectClass  sig=csp ====
void *sub_7221B0()
{
  void *result; // eax
  int i; // esi
  int v2; // ecx
  int v3; // edi
  int v4; // eax
  _DWORD *v5; // ecx
  int v6; // edx
  int v7; // [esp+8h] [ebp-8h]

  result = MEMORY[0xA8B230]; /*0x7221b0*/
  if ( *((_BYTE *)MEMORY[0xA8B230] + 13478) ) /*0x7221b8*/
  {
    result = (void *)MEMORY[0xB0F4F8]; /*0x7221c3*/
    for ( i = 0; i < MEMORY[0xB0F4F8]; ++i ) /*0x7221cc*/
    {
      v2 = *(_DWORD *)&MEMORY[0xB0F4EC]->__pad_0[4 * i]; /*0x7221da*/
      v3 = *(_DWORD *)(v2 + 256); /*0x7221dd*/
      v4 = *(_DWORD *)(v2 + 264); /*0x7221e3*/
      if ( v3 != -1 ) /*0x7221ec*/
      {
        if ( (int)MEMORY[0xA8ED84] - v3 >= v4 ) /*0x7221f8*/
          goto LABEL_7; /*0x7221f8*/
        v4 -= (int)MEMORY[0xA8ED84] - v3; /*0x7221fa*/
      }
      if ( !v4 ) /*0x7221fe*/
      {
LABEL_7:
        PropagateCellOccupancy(v2); /*0x722200*/
        v5 = (_DWORD *)(*(_DWORD *)&MEMORY[0xB0F4EC]->__pad_0[4 * i] + 256); /*0x722216*/
        v6 = *(_DWORD *)(*(_DWORD *)&MEMORY[0xB0F4EC]->__pad_0[4 * i] + 156); /*0x72221c*/
        *v5 = MEMORY[0xA8ED84]; /*0x722222*/
        v5[1] = v7; /*0x722224*/
        v5[2] = v6; /*0x722227*/
      }
      result = (void *)MEMORY[0xB0F4F8]; /*0x72222a*/
    }
  }
  return result; /*0x722236*/
}


// ==== 0x00722240  BuildingClass::ClearFactoryData  this=BuildingClass  sig=csp ====
int BuildingClass_ClearFactoryData()
{
  int result; // eax
  int i; // ebp
  int v2; // edi
  _DWORD *v3; // eax
  int j; // ecx
  void **v5; // esi
  int v6; // esi
  void *v7; // eax
  size_t v8; // eax
  _DWORD *v9; // esi
  int v10; // eax
  void *v11; // eax
  int v12; // ecx
  int v13; // eax

  result = MEMORY[0xB0F4F8]; /*0x722241*/
  for ( i = 0; i < MEMORY[0xB0F4F8]; ++i ) /*0x72224e*/
  {
    v2 = *((_DWORD *)MEMORY[0xB0F4EC] + i); /*0x72225b*/
    v3 = *(_DWORD **)(v2 + 244); /*0x72225e*/
    if ( v3 ) /*0x722266*/
    {
      for ( j = 0; j <= *v3; *(_DWORD *)(v3[2] + 4 * j - 4) = 0 ) /*0x72226e*/
        ++j; /*0x722273*/
      *v3 = 0; /*0x72227e*/
      v5 = *(void ***)(v2 + 244); /*0x722280*/
      if ( v5 ) /*0x722288*/
      {
        __3_YAXPAX_Z(v5[2]); /*0x72228e*/
        __3_YAXPAX_Z(v5); /*0x722294*/
      }
      *(_DWORD *)(v2 + 244) = 0; /*0x72229c*/
    }
    if ( *(_DWORD *)(v2 + 252) ) /*0x7222a2*/
    {
      __3_YAXPAX_Z(*(void **)(v2 + 252)); /*0x7222ad*/
      *(_DWORD *)(v2 + 252) = 0; /*0x7222b5*/
    }
    if ( *(_DWORD *)(v2 + 248) ) /*0x7222bb*/
    {
      __3_YAXPAX_Z(*(void **)(v2 + 248)); /*0x7222c6*/
      *(_DWORD *)(v2 + 248) = 0; /*0x7222ce*/
    }
    *(_DWORD *)(v2 + 240) = 0; /*0x7222d4*/
    v6 = Object::ComputeAllocationSize(); /*0x7222df*/
    v7 = __2_YAPAXI_Z(8 * v6); /*0x7222e9*/
    if ( !v7 ) /*0x7222f3*/
      v7 = 0; /*0x7222fc*/
    *(_DWORD *)(v2 + 252) = v7; /*0x7222fe*/
    v8 = Object::ComputeAllocationSize(); /*0x722304*/
    *(_DWORD *)(v2 + 248) = __2_YAPAXI_Z(v8); /*0x722311*/
    v9 = __2_YAPAXI_Z(0x14u); /*0x72231c*/
    if ( v9 ) /*0x722323*/
    {
      v10 = Object::ComputeAllocationSize(); /*0x722325*/
      v9[3] = 0; /*0x722331*/
      v9[4] = -1; /*0x722335*/
      *v9 = 0; /*0x72233c*/
      v9[1] = v10; /*0x72233e*/
      v11 = __2_YAPAXI_Z(4 * v10 + 4); /*0x722341*/
      v12 = v9[1]; /*0x722346*/
      v9[2] = v11; /*0x722349*/
      v13 = 0; /*0x72234f*/
      if ( v12 >= 0 ) /*0x722353*/
      {
        do /*0x722362*/
        {
          ++v13; /*0x722358*/
          *(_DWORD *)(v9[2] + 4 * v13 - 4) = 0; /*0x722359*/
        }
        while ( v13 <= v9[1] ); /*0x722362*/
      }
    }
    else
    {
      v9 = 0; /*0x722366*/
    }
    *(_DWORD *)(v2 + 244) = v9; /*0x72236a*/
    AudioClass::ProcessEvent((int **)v2); /*0x722370*/
    result = MEMORY[0xB0F4F8]; /*0x722375*/
  }
  return result; /*0x722385*/
}


// ==== 0x00722390  BuildingClass::FreeUpgradeQueue  this=BuildingClass  sig=ida-proto ====
int BuildingClass_FreeUpgradeQueue()
{
  int result; // eax
  int i; // ebp
  int v2; // esi
  _DWORD *v3; // eax
  int j; // ecx
  void **v5; // edi

  result = MEMORY[0xB0F4F8]; /*0x722390*/
  for ( i = 0; i < MEMORY[0xB0F4F8]; ++i ) /*0x72239d*/
  {
    v2 = *((_DWORD *)MEMORY[0xB0F4EC] + i); /*0x7223aa*/
    v3 = *(_DWORD **)(v2 + 244); /*0x7223ad*/
    if ( v3 ) /*0x7223b5*/
    {
      for ( j = 0; j <= *v3; *(_DWORD *)(v3[2] + 4 * j - 4) = 0 ) /*0x7223bd*/
        ++j; /*0x7223c2*/
      *v3 = 0; /*0x7223cd*/
      v5 = *(void ***)(v2 + 244); /*0x7223cf*/
      if ( v5 ) /*0x7223d7*/
      {
        __3_YAXPAX_Z(v5[2]); /*0x7223dd*/
        __3_YAXPAX_Z(v5); /*0x7223e3*/
      }
      *(_DWORD *)(v2 + 244) = 0; /*0x7223eb*/
    }
    if ( *(_DWORD *)(v2 + 252) ) /*0x7223f1*/
    {
      __3_YAXPAX_Z(*(void **)(v2 + 252)); /*0x7223fc*/
      *(_DWORD *)(v2 + 252) = 0; /*0x722404*/
    }
    if ( *(_DWORD *)(v2 + 248) ) /*0x72240a*/
    {
      __3_YAXPAX_Z(*(void **)(v2 + 248)); /*0x722415*/
      *(_DWORD *)(v2 + 248) = 0; /*0x72241d*/
    }
    *(_DWORD *)(v2 + 240) = 0; /*0x722423*/
    result = MEMORY[0xB0F4F8]; /*0x722429*/
  }
  return result; /*0x722439*/
}


// ==== 0x00722440  ObjectClass::PropagateCellOccupancy  this=ObjectClass  sig=csp ====
void __thiscall PropagateCellOccupancy(int this)
{
  int v1; // ebx
  int *v2; // eax
  int v3; // eax
  int v4; // esi
  int v5; // et2
  int v6; // esi
  int v7; // edi
  int *v8; // ecx
  __int16 *v9; // eax
  int v10; // eax
  __int16 *v11; // esi
  int v12; // ebp
  char *v13; // esi
  signed int i; // edi
  void *NeighbourContentCell; // eax
  __int16 *v16; // ebp
  int v17; // eax
  _DWORD *v18; // edi
  unsigned int v19; // ecx
  unsigned int v20; // edx
  unsigned int v21; // esi
  int v22; // ecx
  int v23; // ebp
  unsigned int v24; // eax
  int *v25; // ecx
  int v26; // eax
  int v27; // edi
  __int16 *v28; // esi
  int v29; // esi
  int v30; // edx
  int v31; // eax
  int v32; // esi
  int v33; // ebx
  int v34; // [esp+10h] [ebp-18h]
  float v35; // [esp+14h] [ebp-14h]
  __int16 *v36; // [esp+18h] [ebp-10h]
  unsigned int v37; // [esp+1Ch] [ebp-Ch]
  __int16 *v38; // [esp+1Ch] [ebp-Ch]
  int v39; // [esp+20h] [ebp-8h]

  v1 = this; /*0x722444*/
  v2 = *(int **)(this + 244); /*0x722448*/
  if ( v2 && *v2 && *(double *)(this + 160) > 0.00001 ) /*0x72247a*/
  {
    v3 = Math::RoundToInt((double)*v2 * *(double *)(this + 160)); /*0x72248a*/
    if ( v3 < 5 ) /*0x722492*/
    {
      v4 = 5; /*0x7224a5*/
    }
    else if ( v3 <= 25 ) /*0x722497*/
    {
      v4 = v3; /*0x7224ac*/
    }
    else
    {
      v4 = 25; /*0x722499*/
    }
    v5 = (int)abs32(Random::State((_DWORD *)MEMORY[0xA8B230] + 134)) % v4; /*0x7224ca*/
    v6 = **(_DWORD **)(v1 + 244); /*0x7224cc*/
    v7 = v5 + 1; /*0x7224d0*/
    v39 = v5 + 1; /*0x7224d1*/
    if ( v6 > Object::ComputeAllocationSize() - 20 ) /*0x7224df*/
      AudioClass::ProcessEvent((int **)v1); /*0x7224e3*/
    v8 = *(int **)(v1 + 244); /*0x7224e8*/
    v34 = 0; /*0x7224ee*/
    if ( *v8 ) /*0x7224f6*/
    {
      v10 = v8[2]; /*0x722500*/
      v11 = *(__int16 **)(v10 + 4); /*0x722508*/
      *(_DWORD *)(v10 + 4) = *(_DWORD *)(v10 + 4 * *v8); /*0x72250b*/
      *(_DWORD *)(v8[2] + 4 * (*v8)--) = 0; /*0x722513*/
      Heap::SiftDown(v8, 1); /*0x72251f*/
      v9 = v11; /*0x722524*/
    }
    else
    {
      v9 = 0; /*0x7224fc*/
    }
    if ( v7 > 0 ) /*0x722528*/
    {
      while ( 1 ) /*0x722671*/
      {
        while ( 1 ) /*0x72252e*/
        {
          if ( !v9 ) /*0x722530*/
            return; /*0x722530*/
          v12 = 0; /*0x722541*/
          v13 = (char *)CellCoord::To_CellObj(&MEMORY[0x87F7E8], v9); /*0x722543*/
          for ( i = 0; i < 8; ++i ) /*0x722545*/
          {
            NeighbourContentCell = Cell::GetNeighbourContent(v13, i); /*0x72254a*/
            if ( IsCoordValidMap((int)NeighbourContentCell, 0) ) /*0x722553*/
              ++v12; /*0x72255c*/
          }
          if ( v12 ) /*0x722565*/
          {
            CellClass::SpawnTiberiumTree(0); /*0x72256f*/
            ++v34; /*0x72257c*/
            if ( v12 > 1 ) /*0x722580*/
            {
              v16 = (__int16 *)(v13 + 36); /*0x722595*/
              *(_DWORD *)(*(_DWORD *)(v1 + 252) + 8 * *(_DWORD *)(v1 + 240)) = *((_DWORD *)v13 + 9); /*0x722598*/
              v36 = (__int16 *)(v13 + 36); /*0x7225a7*/
              *(_DWORD *)(*(_DWORD *)(v1 + 252) + 8 * *(_DWORD *)(v1 + 240) + 4) = 0; /*0x7225ab*/
              v17 = *(_DWORD *)(v1 + 240); /*0x7225b3*/
              v18 = *(_DWORD **)(v1 + 244); /*0x7225bf*/
              v19 = *(_DWORD *)(v1 + 252) + 8 * v17; /*0x7225c5*/
              *(_DWORD *)(v1 + 240) = v17 + 1; /*0x7225c9*/
              v20 = *v18 + 1; /*0x7225d4*/
              v35 = *(float *)(v19 + 4); /*0x7225d7*/
              v37 = v19; /*0x7225de*/
              v21 = v20 >> 1; /*0x7225e2*/
              if ( v20 < v18[1] ) /*0x7225e6*/
              {
                if ( v20 > 1 ) /*0x7225eb*/
                {
                  do /*0x72260b*/
                  {
                    v22 = v18[2]; /*0x7225ed*/
                    v23 = *(_DWORD *)(v22 + 4 * v21); /*0x7225f0*/
                    if ( *(float *)(v23 + 4) <= (double)v35 ) /*0x7225ff*/
                      break; /*0x7225ff*/
                    *(_DWORD *)(v22 + 4 * v20) = v23; /*0x722601*/
                    v20 = v21; /*0x722604*/
                    v21 >>= 1; /*0x722606*/
                  }
                  while ( v20 > 1 ); /*0x72260b*/
                  v16 = v36; /*0x72260d*/
                  v19 = v37; /*0x722611*/
                }
                *(_DWORD *)(v18[2] + 4 * v20) = v19; /*0x722618*/
                v24 = v18[3]; /*0x72261d*/
                ++*v18; /*0x722623*/
                if ( v19 > v24 ) /*0x722625*/
                  v18[3] = v19; /*0x722627*/
                if ( v19 < v18[4] ) /*0x72262d*/
                  v18[4] = v19; /*0x72262f*/
              }
              *(_BYTE *)(Cell::PosToIndex(v16) + *(_DWORD *)(v1 + 248)) = 1; /*0x72263f*/
            }
          }
          else
          {
            *(_BYTE *)(Cell::PosToIndex((__int16 *)v13 + 18) + *(_DWORD *)(v1 + 248)) = 0; /*0x722653*/
          }
          if ( v34 >= v39 ) /*0x722661*/
            return; /*0x722661*/
          v25 = *(int **)(v1 + 244); /*0x722667*/
          if ( *v25 ) /*0x72266d*/
            break; /*0x72266d*/
          v9 = 0; /*0x722673*/
        }
        v26 = v25[2]; /*0x72267a*/
        v27 = 1; /*0x72267d*/
        v28 = *(__int16 **)(v26 + 4); /*0x722685*/
        *(_DWORD *)(v26 + 4) = *(_DWORD *)(v26 + 4 * *v25); /*0x722688*/
        v38 = v28; /*0x722690*/
        *(_DWORD *)(v25[2] + 4 * *v25) = 0; /*0x722694*/
        v29 = *v25 - 1; /*0x72269e*/
        *v25 = v29; /*0x7226a0*/
        if ( v29 < 2 /*0x7226c2*/
          || (v30 = 2, *(float *)(*(_DWORD *)(v25[2] + 4) + 4) <= (double)*(float *)(*(_DWORD *)(v25[2] + 8) + 4)) )
        {
          v30 = 1; /*0x7226c4*/
        }
        if ( v29 < 3 /*0x7226e4*/
          || *(float *)(*(_DWORD *)(v25[2] + 4 * v30) + 4) <= (double)*(float *)(*(_DWORD *)(v25[2] + 12) + 4) )
        {
          if ( v30 == 1 ) /*0x7226f0*/
            goto LABEL_52; /*0x7226f0*/
        }
        else
        {
          v30 = 3; /*0x7226e6*/
        }
        do /*0x722750*/
        {
          v31 = v25[2]; /*0x7226f2*/
          v32 = *(_DWORD *)(v31 + 4 * v27); /*0x7226f8*/
          *(_DWORD *)(v31 + 4 * v27) = *(_DWORD *)(v31 + 4 * v30); /*0x7226fb*/
          v27 = v30; /*0x722701*/
          v33 = 2 * v30 + 1; /*0x722703*/
          *(_DWORD *)(v25[2] + 4 * v30) = v32; /*0x722707*/
          if ( 2 * v30 <= *v25 /*0x72272c*/
            && *(float *)(*(_DWORD *)(v25[2] + 4 * v30) + 4) > (double)*(float *)(*(_DWORD *)(v25[2] + 8 * v30) + 4) )
          {
            v30 *= 2; /*0x72272e*/
          }
          if ( v33 <= *v25 /*0x72274a*/
            && *(float *)(*(_DWORD *)(v25[2] + 4 * v30) + 4) > (double)*(float *)(*(_DWORD *)(v25[2] + 4 * v33) + 4) )
          {
            v30 = v33; /*0x72274c*/
          }
        }
        while ( v30 != v27 ); /*0x722750*/
        v1 = this; /*0x722752*/
LABEL_52:
        v9 = v38; /*0x722756*/
      }
    }
  }
}


// ==== 0x00722770  BuildingClass::RebuildOccupancyTracking  this=BuildingClass  sig=csp ====
int __thiscall sub_722770(int this)
{
  _DWORD *v2; // eax
  int i; // ecx
  void **v4; // esi
  int v5; // esi
  void *v6; // eax
  size_t v7; // eax
  _DWORD *v8; // esi
  int v9; // eax
  void *v10; // eax
  int v11; // ecx
  int v12; // eax

  v2 = *(_DWORD **)(this + 244); /*0x722778*/
  if ( v2 ) /*0x722780*/
  {
    for ( i = 0; i <= *v2; *(_DWORD *)(v2[2] + 4 * i - 4) = 0 ) /*0x722788*/
      ++i; /*0x72278d*/
    *v2 = 0; /*0x722798*/
    v4 = *(void ***)(this + 244); /*0x72279a*/
    if ( v4 ) /*0x7227a2*/
    {
      __3_YAXPAX_Z(v4[2]); /*0x7227a8*/
      __3_YAXPAX_Z(v4); /*0x7227ae*/
    }
    *(_DWORD *)(this + 244) = 0; /*0x7227b6*/
  }
  if ( *(_DWORD *)(this + 252) ) /*0x7227bc*/
  {
    __3_YAXPAX_Z(*(void **)(this + 252)); /*0x7227c7*/
    *(_DWORD *)(this + 252) = 0; /*0x7227cf*/
  }
  if ( *(_DWORD *)(this + 248) ) /*0x7227d5*/
  {
    __3_YAXPAX_Z(*(void **)(this + 248)); /*0x7227e0*/
    *(_DWORD *)(this + 248) = 0; /*0x7227e8*/
  }
  *(_DWORD *)(this + 240) = 0; /*0x7227ee*/
  v5 = Object::ComputeAllocationSize(); /*0x7227f9*/
  v6 = __2_YAPAXI_Z(8 * v5); /*0x722803*/
  if ( !v6 ) /*0x72280d*/
    v6 = 0; /*0x722816*/
  *(_DWORD *)(this + 252) = v6; /*0x722818*/
  v7 = Object::ComputeAllocationSize(); /*0x72281e*/
  *(_DWORD *)(this + 248) = __2_YAPAXI_Z(v7); /*0x72282b*/
  v8 = __2_YAPAXI_Z(0x14u); /*0x722836*/
  if ( v8 ) /*0x72283d*/
  {
    v9 = Object::ComputeAllocationSize(); /*0x72283f*/
    v8[3] = 0; /*0x72284b*/
    v8[4] = -1; /*0x72284f*/
    *v8 = 0; /*0x722856*/
    v8[1] = v9; /*0x722858*/
    v10 = __2_YAPAXI_Z(4 * v9 + 4); /*0x72285b*/
    v11 = v8[1]; /*0x722860*/
    v8[2] = v10; /*0x722863*/
    v12 = 0; /*0x722869*/
    if ( v11 >= 0 ) /*0x72286d*/
    {
      do /*0x72287c*/
      {
        ++v12; /*0x722872*/
        *(_DWORD *)(v8[2] + 4 * v12 - 4) = 0; /*0x722873*/
      }
      while ( v12 <= v8[1] ); /*0x72287c*/
    }
  }
  else
  {
    v8 = 0; /*0x722890*/
  }
  *(_DWORD *)(this + 244) = v8; /*0x722894*/
  return AudioClass::ProcessEvent((int **)this); /*0x72288b*/
}


// ==== 0x007228B0  AudioClass::ProcessEvent  this=ObjectClass  sig=csp ====
int __thiscall BuildingClass_RebuildOccupancy(int **this)
{
  int v2; // ecx
  int *v3; // eax
  int i; // eax
  int result; // eax
  _DWORD *j; // edi
  __int16 *v7; // ecx
  int v8; // eax
  _DWORD *v9; // ebp
  unsigned int v10; // ebx
  unsigned int v11; // edx
  unsigned int v12; // edi
  int v13; // ecx
  int v14; // ebx
  unsigned int v15; // eax
  float v16; // [esp+8h] [ebp-Ch]
  __int16 *v17; // [esp+Ch] [ebp-8h]
  unsigned int v18; // [esp+10h] [ebp-4h]

  v2 = 0; /*0x7228b6*/
  v3 = this->q03D; /*0x7228b9*/
  this->ambientSoundController = 0; /*0x7228bf*/
  if ( *v3 >= 0 ) /*0x7228cc*/
  {
    do /*0x7228de*/
    {
      ++v2; /*0x7228d1*/
      *(_DWORD *)(v3[2] + 4 * v2 - 4) = 0; /*0x7228d2*/
    }
    while ( v2 <= *v3 ); /*0x7228de*/
  }
  *v3 = 0; /*0x7228e0*/
  for ( i = Object::ComputeAllocationSize() - 1; i >= 0; *((_BYTE *)this->q0F8 + i + 1) = 0 ) /*0x7228ec*/
    --i; /*0x7228f4*/
  LayerClass::CellIteratorReset(&MEMORY[0x87F7E8]); /*0x722901*/
  result = LayerClass::CellIteratorNext(&MEMORY[0x87F7E8]); /*0x72290b*/
  for ( j = (_DWORD *)result; result; j = (_DWORD *)result ) /*0x722914*/
  {
    if ( (int *)BuildingClass::FindByCellHash(j) == this->q026 /*0x722931*/
      && (unsigned __int8)BuildingClass::IsTiberiumSiloEligible(j) )
    {
      v7 = (__int16 *)(j + 9); /*0x72294a*/
      v17 = (__int16 *)(j + 9); /*0x72294d*/
      (this->q0FC)[2 * (_DWORD)this->ambientSoundController] = j[9]; /*0x722953*/
      (this->q0FC)[2 * (_DWORD)this->ambientSoundController + 1] = 0; /*0x722962*/
      v8 = (int)this->ambientSoundController; /*0x72296a*/
      v9 = this->q03D; /*0x722976*/
      v10 = (unsigned int)&(this->q0FC)[2 * v8]; /*0x72297c*/
      this->ambientSoundController = (int *)(v8 + 1); /*0x722980*/
      v11 = *v9 + 1; /*0x72298c*/
      v16 = *(float *)(v10 + 4); /*0x72298f*/
      v18 = v10; /*0x722996*/
      v12 = v11 >> 1; /*0x72299a*/
      if ( v11 < v9[1] ) /*0x72299e*/
      {
        if ( v11 > 1 ) /*0x7229a3*/
        {
          do /*0x7229c3*/
          {
            v13 = v9[2]; /*0x7229a5*/
            v14 = *(_DWORD *)(v13 + 4 * v12); /*0x7229a8*/
            if ( *(float *)(v14 + 4) <= (double)v16 ) /*0x7229b7*/
              break; /*0x7229b7*/
            *(_DWORD *)(v13 + 4 * v11) = v14; /*0x7229b9*/
            v11 = v12; /*0x7229bc*/
            v12 >>= 1; /*0x7229be*/
          }
          while ( v11 > 1 ); /*0x7229c3*/
          v7 = v17; /*0x7229c5*/
          v10 = v18; /*0x7229c9*/
        }
        *(_DWORD *)(v9[2] + 4 * v11) = v10; /*0x7229d0*/
        v15 = v9[3]; /*0x7229d6*/
        ++*v9; /*0x7229dc*/
        if ( v10 > v15 ) /*0x7229df*/
          v9[3] = v10; /*0x7229e1*/
        if ( v10 < v9[4] ) /*0x7229e7*/
          v9[4] = v10; /*0x7229e9*/
      }
      *((_BYTE *)this->q0F8 + Cell::PosToIndex(v7)) = 1; /*0x7229f7*/
    }
    result = LayerClass::CellIteratorNext(&MEMORY[0x87F7E8]); /*0x722a00*/
  }
  return result; /*0x722a11*/
}


// ==== 0x00722A20  ObjectClass::method_722A20  this=ObjectClass  sig=csp ====
void __thiscall sub_722A20(int this)
{
  _DWORD *v2; // eax
  int i; // ecx
  void **v4; // edi

  v2 = *(_DWORD **)(this + 244); /*0x722a26*/
  if ( v2 ) /*0x722a2e*/
  {
    for ( i = 0; i <= *v2; *(_DWORD *)(v2[2] + 4 * i - 4) = 0 ) /*0x722a36*/
      ++i; /*0x722a3b*/
    *v2 = 0; /*0x722a47*/
    v4 = *(void ***)(this + 244); /*0x722a49*/
    if ( v4 ) /*0x722a51*/
    {
      __3_YAXPAX_Z(v4[2]); /*0x722a57*/
      __3_YAXPAX_Z(v4); /*0x722a5d*/
    }
    *(_DWORD *)(this + 244) = 0; /*0x722a65*/
  }
  if ( *(_DWORD *)(this + 252) ) /*0x722a6c*/
  {
    __3_YAXPAX_Z(*(void **)(this + 252)); /*0x722a77*/
    *(_DWORD *)(this + 252) = 0; /*0x722a7f*/
  }
  if ( *(_DWORD *)(this + 248) ) /*0x722a85*/
  {
    __3_YAXPAX_Z(*(void **)(this + 248)); /*0x722a90*/
    *(_DWORD *)(this + 248) = 0; /*0x722a98*/
  }
  *(_DWORD *)(this + 240) = 0; /*0x722a9e*/
}


// ==== 0x00722AB0  CellClass::ClearCrateStateForAll  this=CellClass  sig=csp ====
int __thiscall sub_722AB0(__int16 *this)
{
  int result; // eax
  int i; // ecx

  result = Cell::PosToIndex(this); /*0x722ab0*/
  for ( i = 0; /*0x722abf*/
        i < MEMORY[0xB0F4F8];
        *(_BYTE *)(*(_DWORD *)(*(_DWORD *)&MEMORY[0xB0F4EC]->__pad_0[4 * i - 4] + 248) + result) = 0 )
  {
    ++i; /*0x722ac7*/
  }
  return result; /*0x722ae0*/
}


// ==== 0x00722AF0  BuildingClass::AddOccupancy  this=ObjectClass  sig=csp ====
int __thiscall BuildingClass_AddOccupancy(int this, __int16 *a2)
{
  __int16 *v2; // ebp
  int v4; // edi
  void *v5; // eax
  int result; // eax
  int v7; // eax
  _DWORD *v8; // edi
  unsigned int v9; // ebx
  unsigned int v10; // ecx
  unsigned int v11; // edx
  int v12; // ebx
  int v13; // ebp
  unsigned int v14; // eax
  float v15; // [esp+Ch] [ebp-8h]
  unsigned int v16; // [esp+10h] [ebp-4h]

  v2 = a2; /*0x722af4*/
  v4 = Cell::PosToIndex(a2); /*0x722b09*/
  v5 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], a2); /*0x722b0b*/
  result = BuildingClass::IsTiberiumSiloEligible(v5); /*0x722b12*/
  if ( (_BYTE)result ) /*0x722b19*/
  {
    result = *(_DWORD *)(this + 248); /*0x722b1f*/
    if ( !*(_BYTE *)(result + v4) ) /*0x722b25*/
    {
      if ( *(_DWORD *)(this + 240) >= Object::ComputeAllocationSize() - 20 ) /*0x722b3f*/
        AudioClass::ProcessEvent((int **)this); /*0x722b43*/
      *(_DWORD *)(*(_DWORD *)(this + 252) + 8 * *(_DWORD *)(this + 240)) = *(_DWORD *)a2; /*0x722b58*/
      *(float *)(*(_DWORD *)(this + 252) + 8 * *(_DWORD *)(this + 240) + 4) = (float)((int)MEMORY[0xA8ED84] /*0x722b95*/
                                                                                    + (int)abs32(
                                                                                             Random::State(
                                                                                               (_DWORD *)MEMORY[0xA8B230]
                                                                                             + 134))
                                                                                    % 50);
      v7 = *(_DWORD *)(this + 240); /*0x722b99*/
      v8 = *(_DWORD **)(this + 244); /*0x722ba5*/
      v9 = *(_DWORD *)(this + 252) + 8 * v7; /*0x722bab*/
      *(_DWORD *)(this + 240) = v7 + 1; /*0x722baf*/
      v10 = *v8 + 1; /*0x722bba*/
      v15 = *(float *)(v9 + 4); /*0x722bbd*/
      v16 = v9; /*0x722bc4*/
      v11 = v10 >> 1; /*0x722bc8*/
      if ( v10 < v8[1] ) /*0x722bcc*/
      {
        if ( v10 > 1 ) /*0x722bd1*/
        {
          do /*0x722bf1*/
          {
            v12 = v8[2]; /*0x722bd3*/
            v13 = *(_DWORD *)(v12 + 4 * v11); /*0x722bd6*/
            if ( *(float *)(v13 + 4) <= (double)v15 ) /*0x722be5*/
              break; /*0x722be5*/
            *(_DWORD *)(v12 + 4 * v10) = v13; /*0x722be7*/
            v10 = v11; /*0x722bea*/
            v11 >>= 1; /*0x722bec*/
          }
          while ( v10 > 1 ); /*0x722bf1*/
          v2 = a2; /*0x722bf3*/
          v9 = v16; /*0x722bf7*/
        }
        *(_DWORD *)(v8[2] + 4 * v10) = v9; /*0x722bfe*/
        v14 = v8[3]; /*0x722c03*/
        ++*v8; /*0x722c09*/
        if ( v9 > v14 ) /*0x722c0b*/
          v8[3] = v9; /*0x722c0d*/
        if ( v9 < v8[4] ) /*0x722c13*/
          v8[4] = v9; /*0x722c15*/
      }
      result = Cell::PosToIndex(v2); /*0x722c1a*/
      *(_BYTE *)(result + *(_DWORD *)(this + 248)) = 1; /*0x722c26*/
    }
  }
  return result; /*0x722c2a*/
}


// ==== 0x00722C40  ObjectClass::UpdateAudioTriggers  this=ObjectClass  sig=csp ====
void *sub_722C40()
{
  void *result; // eax
  int i; // esi
  int v2; // ecx
  int v3; // edi
  int v4; // eax
  double v5; // st7
  BuildingClass *v6; // ebx
  wchar_t *v7; // edi
  wchar_t *v8; // eax
  wchar_t **v9; // ecx
  wchar_t *v10; // [esp+8h] [ebp-8h]

  result = MEMORY[0xA8B230]; /*0x722c40*/
  if ( *((_BYTE *)MEMORY[0xA8B230] + 13478) ) /*0x722c48*/
  {
    result = (void *)MEMORY[0xB0F4F8]; /*0x722c57*/
    for ( i = 0; i < MEMORY[0xB0F4F8]; ++i ) /*0x722c60*/
    {
      v2 = *(_DWORD *)&MEMORY[0xB0F4EC]->__pad_0[4 * i]; /*0x722c73*/
      v3 = *(_DWORD *)(v2 + 284); /*0x722c76*/
      v4 = *(_DWORD *)(v2 + 292); /*0x722c7c*/
      if ( v3 != -1 ) /*0x722c85*/
      {
        if ( (int)MEMORY[0xA8ED84] - v3 >= v4 ) /*0x722c91*/
          goto LABEL_7; /*0x722c91*/
        v4 -= (int)MEMORY[0xA8ED84] - v3; /*0x722c93*/
      }
      if ( !v4 ) /*0x722c97*/
      {
LABEL_7:
        RebuildBuildingOccupancy(v2); /*0x722c99*/
        if ( (*(_BYTE *)MEMORY[0xA8B230] & 0x40) != 0 ) /*0x722ca7*/
          v5 = 0.3; /*0x722ca9*/
        else
          v5 = 1.0; /*0x722cb1*/
        v6 = MEMORY[0xB0F4EC]; /*0x722cb7*/
        v7 = MEMORY[0xA8ED84]; /*0x722cbd*/
        v8 = (wchar_t *)Math::RoundToInt(v5); /*0x722cce*/
        v9 = (wchar_t **)(*(_DWORD *)&v6->__pad_0[4 * i] + 284); /*0x722cd6*/
        *v9 = v7; /*0x722cde*/
        v9[1] = v10; /*0x722ce0*/
        v9[2] = v8; /*0x722ce3*/
      }
      result = (void *)MEMORY[0xB0F4F8]; /*0x722ce6*/
    }
  }
  return result; /*0x722cf7*/
}


// ==== 0x00722D00  BuildingClass::ClearOccupancyData  this=BuildingClass  sig=csp ====
int BuildingClass_ClearOccupancyData()
{
  int result; // eax
  int i; // ebp
  int v2; // edi
  _DWORD *v3; // eax
  int j; // ecx
  void **v5; // esi
  int v6; // esi
  void *v7; // eax
  size_t v8; // eax
  _DWORD *v9; // esi
  int v10; // eax
  void *v11; // eax
  int v12; // ecx
  int v13; // eax

  result = MEMORY[0xB0F4F8]; /*0x722d01*/
  for ( i = 0; i < MEMORY[0xB0F4F8]; ++i ) /*0x722d0e*/
  {
    v2 = *((_DWORD *)MEMORY[0xB0F4EC] + i); /*0x722d1b*/
    v3 = *(_DWORD **)(v2 + 272); /*0x722d1e*/
    if ( v3 ) /*0x722d26*/
    {
      for ( j = 0; j <= *v3; *(_DWORD *)(v3[2] + 4 * j - 4) = 0 ) /*0x722d2e*/
        ++j; /*0x722d33*/
      *v3 = 0; /*0x722d3e*/
      v5 = *(void ***)(v2 + 272); /*0x722d40*/
      if ( v5 ) /*0x722d48*/
      {
        __3_YAXPAX_Z(v5[2]); /*0x722d4e*/
        __3_YAXPAX_Z(v5); /*0x722d54*/
      }
      *(_DWORD *)(v2 + 272) = 0; /*0x722d5c*/
    }
    if ( *(_DWORD *)(v2 + 280) ) /*0x722d62*/
    {
      __3_YAXPAX_Z(*(void **)(v2 + 280)); /*0x722d6d*/
      *(_DWORD *)(v2 + 280) = 0; /*0x722d75*/
    }
    if ( *(_DWORD *)(v2 + 276) ) /*0x722d7b*/
    {
      __3_YAXPAX_Z(*(void **)(v2 + 276)); /*0x722d86*/
      *(_DWORD *)(v2 + 276) = 0; /*0x722d8e*/
    }
    *(_DWORD *)(v2 + 268) = 0; /*0x722d94*/
    v6 = Object::ComputeAllocationSize(); /*0x722d9f*/
    v7 = __2_YAPAXI_Z(8 * v6); /*0x722da9*/
    if ( !v7 ) /*0x722db3*/
      v7 = 0; /*0x722dbc*/
    *(_DWORD *)(v2 + 280) = v7; /*0x722dbe*/
    v8 = Object::ComputeAllocationSize(); /*0x722dc4*/
    *(_DWORD *)(v2 + 276) = __2_YAPAXI_Z(v8); /*0x722dd1*/
    v9 = __2_YAPAXI_Z(0x14u); /*0x722ddc*/
    if ( v9 ) /*0x722de3*/
    {
      v10 = Object::ComputeAllocationSize(); /*0x722de5*/
      v9[3] = 0; /*0x722df1*/
      v9[4] = -1; /*0x722df5*/
      *v9 = 0; /*0x722dfc*/
      v9[1] = v10; /*0x722dfe*/
      v11 = __2_YAPAXI_Z(4 * v10 + 4); /*0x722e01*/
      v12 = v9[1]; /*0x722e06*/
      v9[2] = v11; /*0x722e09*/
      v13 = 0; /*0x722e0f*/
      if ( v12 >= 0 ) /*0x722e13*/
      {
        do /*0x722e22*/
        {
          ++v13; /*0x722e18*/
          *(_DWORD *)(v9[2] + 4 * v13 - 4) = 0; /*0x722e19*/
        }
        while ( v13 <= v9[1] ); /*0x722e22*/
      }
    }
    else
    {
      v9 = 0; /*0x722e26*/
    }
    *(_DWORD *)(v2 + 272) = v9; /*0x722e2a*/
    BuildingClass::RebuildOccupancy2((int **)v2); /*0x722e30*/
    result = MEMORY[0xB0F4F8]; /*0x722e35*/
  }
  return result; /*0x722e45*/
}


// ==== 0x00722E50  BuildingClass::FreeUpgradeQueue2  this=BuildingClass  sig=ida-proto ====
int BuildingClass_FreeUpgradeQueue2()
{
  int result; // eax
  int i; // ebp
  int v2; // esi
  _DWORD *v3; // eax
  int j; // ecx
  void **v5; // edi

  result = MEMORY[0xB0F4F8]; /*0x722e50*/
  for ( i = 0; i < MEMORY[0xB0F4F8]; ++i ) /*0x722e5d*/
  {
    v2 = *((_DWORD *)MEMORY[0xB0F4EC] + i); /*0x722e6a*/
    v3 = *(_DWORD **)(v2 + 272); /*0x722e6d*/
    if ( v3 ) /*0x722e75*/
    {
      for ( j = 0; j <= *v3; *(_DWORD *)(v3[2] + 4 * j - 4) = 0 ) /*0x722e7d*/
        ++j; /*0x722e82*/
      *v3 = 0; /*0x722e8d*/
      v5 = *(void ***)(v2 + 272); /*0x722e8f*/
      if ( v5 ) /*0x722e97*/
      {
        __3_YAXPAX_Z(v5[2]); /*0x722e9d*/
        __3_YAXPAX_Z(v5); /*0x722ea3*/
      }
      *(_DWORD *)(v2 + 272) = 0; /*0x722eab*/
    }
    if ( *(_DWORD *)(v2 + 280) ) /*0x722eb1*/
    {
      __3_YAXPAX_Z(*(void **)(v2 + 280)); /*0x722ebc*/
      *(_DWORD *)(v2 + 280) = 0; /*0x722ec4*/
    }
    if ( *(_DWORD *)(v2 + 276) ) /*0x722eca*/
    {
      __3_YAXPAX_Z(*(void **)(v2 + 276)); /*0x722ed5*/
      *(_DWORD *)(v2 + 276) = 0; /*0x722edd*/
    }
    *(_DWORD *)(v2 + 268) = 0; /*0x722ee3*/
    result = MEMORY[0xB0F4F8]; /*0x722ee9*/
  }
  return result; /*0x722ef9*/
}


// ==== 0x00722F00  ObjectClass::RebuildBuildingOccupancy  this=ObjectClass  sig=csp ====
void __thiscall RebuildBuildingOccupancy(int this)
{
  int *v2; // eax
  int v3; // eax
  int v4; // edi
  int v5; // eax
  int v6; // ebx
  int v7; // edi
  int *v8; // ecx
  __int16 *v9; // ebx
  int v10; // eax
  _BYTE *v11; // ebp
  int v12; // eax
  _DWORD *v13; // edi
  unsigned int v14; // ebp
  unsigned int v15; // ecx
  unsigned int v16; // edx
  int v17; // ebp
  int v18; // ebx
  unsigned int v19; // eax
  int *v20; // ecx
  int v21; // eax
  int v22; // ebp
  __int16 *v23; // ebx
  int v24; // ebx
  int v25; // edx
  int v26; // eax
  int v27; // edi
  __int16 *v28; // [esp+10h] [ebp-14h]
  int v29; // [esp+10h] [ebp-14h]
  int v30; // [esp+14h] [ebp-10h]
  int v31; // [esp+18h] [ebp-Ch]
  unsigned int v32; // [esp+1Ch] [ebp-8h]
  __int16 *v33; // [esp+1Ch] [ebp-8h]
  float v34; // [esp+20h] [ebp-4h]

  v2 = *(int **)(this + 272); /*0x722f09*/
  if ( v2 && *v2 && *(double *)(this + 176) > 0.00001 ) /*0x722f36*/
  {
    v3 = Math::RoundToInt((double)*v2 * *(double *)(this + 176)); /*0x722f46*/
    if ( v3 < 5 ) /*0x722f4e*/
    {
      v4 = 5; /*0x722f61*/
    }
    else if ( v3 <= 50 ) /*0x722f53*/
    {
      v4 = v3; /*0x722f68*/
    }
    else
    {
      v4 = 50; /*0x722f55*/
    }
    v5 = Random::State((_DWORD *)MEMORY[0xA8B230] + 134); /*0x722f75*/
    v6 = **(_DWORD **)(this + 272); /*0x722f88*/
    v7 = (int)abs32(v5) % v4 + 1; /*0x722f8c*/
    v31 = v7; /*0x722f8d*/
    if ( v6 > Object::ComputeAllocationSize() - 2 * v7 ) /*0x722f9d*/
      BuildingClass::RebuildOccupancy2((int **)this); /*0x722fa1*/
    v8 = *(int **)(this + 272); /*0x722fa6*/
    v30 = 0; /*0x722fac*/
    if ( *v8 ) /*0x722fb4*/
    {
      v10 = v8[2]; /*0x722fc2*/
      v9 = *(__int16 **)(v10 + 4); /*0x722fca*/
      *(_DWORD *)(v10 + 4) = *(_DWORD *)(v10 + 4 * *v8); /*0x722fcd*/
      *(_DWORD *)(v8[2] + 4 * (*v8)--) = 0; /*0x722fd5*/
      Heap::SiftDown(v8, 1); /*0x722fe1*/
      v28 = v9; /*0x722fe6*/
    }
    else
    {
      v9 = 0; /*0x722fba*/
      v28 = 0; /*0x722fbc*/
    }
    if ( v7 > 0 ) /*0x722fec*/
    {
      while ( 1 ) /*0x72314a*/
      {
        while ( 1 ) /*0x722ff2*/
        {
          if ( !v9 ) /*0x722ff4*/
            return; /*0x722ff4*/
          v11 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], v9); /*0x723005*/
          if ( BuildingClass::FindByCellHash(v11) == *(_DWORD *)(this + 152) ) /*0x723014*/
          {
            sub_483710(v11); /*0x72301c*/
            if ( v11[286] >= 0xBu ) /*0x723028*/
            {
              *(_BYTE *)(Cell::PosToIndex(v9) + *(_DWORD *)(this + 276)) = 0; /*0x72312b*/
            }
            else
            {
              *(_DWORD *)(*(_DWORD *)(this + 280) + 8 * *(_DWORD *)(this + 268)) = *(_DWORD *)v9; /*0x72303c*/
              *(float *)(*(_DWORD *)(this + 280) + 8 * *(_DWORD *)(this + 268) + 4) = (float)(int)((int)MEMORY[0xA8ED84] /*0x72307c*/
                                                                                                 + abs32(Random::State((_DWORD *)MEMORY[0xA8B230] + 134) % 50));
              *(_BYTE *)(Cell::PosToIndex(v9) + *(_DWORD *)(this + 276)) = 1; /*0x72308b*/
              v12 = *(_DWORD *)(this + 268); /*0x72308f*/
              v13 = *(_DWORD **)(this + 272); /*0x72309b*/
              v14 = *(_DWORD *)(this + 280) + 8 * v12; /*0x7230a1*/
              *(_DWORD *)(this + 268) = v12 + 1; /*0x7230a5*/
              v15 = *v13 + 1; /*0x7230b0*/
              v34 = *(float *)(v14 + 4); /*0x7230b3*/
              v32 = v14; /*0x7230ba*/
              v16 = v15 >> 1; /*0x7230be*/
              if ( v15 < v13[1] ) /*0x7230c2*/
              {
                if ( v15 > 1 ) /*0x7230c7*/
                {
                  do /*0x7230e9*/
                  {
                    v17 = v13[2]; /*0x7230c9*/
                    v18 = *(_DWORD *)(v17 + 4 * v16); /*0x7230cc*/
                    if ( *(float *)(v18 + 4) <= (double)v34 ) /*0x7230dc*/
                      break; /*0x7230dc*/
                    *(_DWORD *)(v17 + 4 * v15) = v18; /*0x7230de*/
                    v15 = v16; /*0x7230e2*/
                    v16 >>= 1; /*0x7230e4*/
                  }
                  while ( v15 > 1 ); /*0x7230e9*/
                  v14 = v32; /*0x7230eb*/
                  v9 = v28; /*0x7230ef*/
                }
                *(_DWORD *)(v13[2] + 4 * v15) = v14; /*0x7230f6*/
                v19 = v13[3]; /*0x7230fb*/
                ++*v13; /*0x723101*/
                if ( v14 > v19 ) /*0x723103*/
                  v13[3] = v14; /*0x723105*/
                if ( v14 < v13[4] ) /*0x72310b*/
                  v13[4] = v14; /*0x72310d*/
              }
              BuildingClass::AddOccupancy(this, v9); /*0x723113*/
              v7 = v31; /*0x723118*/
            }
          }
          if ( ++v30 >= v7 ) /*0x72313a*/
            return; /*0x72313a*/
          v20 = *(int **)(this + 272); /*0x723140*/
          if ( *v20 ) /*0x723146*/
            break; /*0x723146*/
          v28 = 0; /*0x72314c*/
          v9 = 0; /*0x723150*/
        }
        v21 = v20[2]; /*0x723157*/
        v22 = 1; /*0x72315a*/
        v23 = *(__int16 **)(v21 + 4); /*0x723162*/
        *(_DWORD *)(v21 + 4) = *(_DWORD *)(v21 + 4 * *v20); /*0x723165*/
        v33 = v23; /*0x72316d*/
        *(_DWORD *)(v20[2] + 4 * *v20) = 0; /*0x723171*/
        v24 = *v20 - 1; /*0x72317b*/
        *v20 = v24; /*0x72317d*/
        if ( v24 < 2 /*0x72319f*/
          || (v25 = 2, *(float *)(*(_DWORD *)(v20[2] + 4) + 4) <= (double)*(float *)(*(_DWORD *)(v20[2] + 8) + 4)) )
        {
          v25 = 1; /*0x7231a1*/
        }
        if ( v24 < 3 /*0x7231c1*/
          || *(float *)(*(_DWORD *)(v20[2] + 4 * v25) + 4) <= (double)*(float *)(*(_DWORD *)(v20[2] + 12) + 4) )
        {
          if ( v25 == 1 ) /*0x7231cd*/
            goto LABEL_48; /*0x7231cd*/
        }
        else
        {
          v25 = 3; /*0x7231c3*/
        }
        do /*0x723239*/
        {
          v26 = v20[2]; /*0x7231cf*/
          v27 = *(_DWORD *)(v26 + 4 * v22); /*0x7231d5*/
          *(_DWORD *)(v26 + 4 * v22) = *(_DWORD *)(v26 + 4 * v25); /*0x7231d8*/
          v22 = v25; /*0x7231de*/
          *(_DWORD *)(v20[2] + 4 * v25) = v27; /*0x7231e0*/
          v29 = 2 * v25 + 1; /*0x7231ee*/
          if ( 2 * v25 <= *v20 /*0x72320d*/
            && *(float *)(*(_DWORD *)(v20[2] + 4 * v25) + 4) > (double)*(float *)(*(_DWORD *)(v20[2] + 8 * v25) + 4) )
          {
            v25 *= 2; /*0x72320f*/
          }
          if ( v29 <= *v20 /*0x723231*/
            && *(float *)(*(_DWORD *)(v20[2] + 4 * v25) + 4) > (double)*(float *)(*(_DWORD *)(v20[2] + 4 * v29) + 4) )
          {
            v25 = v29; /*0x723233*/
          }
        }
        while ( v25 != v22 ); /*0x723239*/
        v7 = v31; /*0x72323b*/
LABEL_48:
        v28 = v33; /*0x72323f*/
        v9 = v33; /*0x723247*/
      }
    }
  }
}


// ==== 0x00723260  BuildingClass::RebuildOccupancyTracking2  this=BuildingClass  sig=csp ====
int __thiscall sub_723260(int this)
{
  _DWORD *v2; // eax
  int i; // ecx
  void **v4; // esi
  int v5; // esi
  void *v6; // eax
  size_t v7; // eax
  _DWORD *v8; // esi
  int v9; // eax
  void *v10; // eax
  int v11; // ecx
  int v12; // eax

  v2 = *(_DWORD **)(this + 272); /*0x723268*/
  if ( v2 ) /*0x723270*/
  {
    for ( i = 0; i <= *v2; *(_DWORD *)(v2[2] + 4 * i - 4) = 0 ) /*0x723278*/
      ++i; /*0x72327d*/
    *v2 = 0; /*0x723288*/
    v4 = *(void ***)(this + 272); /*0x72328a*/
    if ( v4 ) /*0x723292*/
    {
      __3_YAXPAX_Z(v4[2]); /*0x723298*/
      __3_YAXPAX_Z(v4); /*0x72329e*/
    }
    *(_DWORD *)(this + 272) = 0; /*0x7232a6*/
  }
  if ( *(_DWORD *)(this + 280) ) /*0x7232ac*/
  {
    __3_YAXPAX_Z(*(void **)(this + 280)); /*0x7232b7*/
    *(_DWORD *)(this + 280) = 0; /*0x7232bf*/
  }
  if ( *(_DWORD *)(this + 276) ) /*0x7232c5*/
  {
    __3_YAXPAX_Z(*(void **)(this + 276)); /*0x7232d0*/
    *(_DWORD *)(this + 276) = 0; /*0x7232d8*/
  }
  *(_DWORD *)(this + 268) = 0; /*0x7232de*/
  v5 = Object::ComputeAllocationSize(); /*0x7232e9*/
  v6 = __2_YAPAXI_Z(8 * v5); /*0x7232f3*/
  if ( !v6 ) /*0x7232fd*/
    v6 = 0; /*0x723306*/
  *(_DWORD *)(this + 280) = v6; /*0x723308*/
  v7 = Object::ComputeAllocationSize(); /*0x72330e*/
  *(_DWORD *)(this + 276) = __2_YAPAXI_Z(v7); /*0x72331b*/
  v8 = __2_YAPAXI_Z(0x14u); /*0x723326*/
  if ( v8 ) /*0x72332d*/
  {
    v9 = Object::ComputeAllocationSize(); /*0x72332f*/
    v8[3] = 0; /*0x72333b*/
    v8[4] = -1; /*0x72333f*/
    *v8 = 0; /*0x723346*/
    v8[1] = v9; /*0x723348*/
    v10 = __2_YAPAXI_Z(4 * v9 + 4); /*0x72334b*/
    v11 = v8[1]; /*0x723350*/
    v8[2] = v10; /*0x723353*/
    v12 = 0; /*0x723359*/
    if ( v11 >= 0 ) /*0x72335d*/
    {
      do /*0x72336c*/
      {
        ++v12; /*0x723362*/
        *(_DWORD *)(v8[2] + 4 * v12 - 4) = 0; /*0x723363*/
      }
      while ( v12 <= v8[1] ); /*0x72336c*/
    }
  }
  else
  {
    v8 = 0; /*0x723380*/
  }
  *(_DWORD *)(this + 272) = v8; /*0x723384*/
  return BuildingClass::RebuildOccupancy2((int **)this); /*0x72337b*/
}


// ==== 0x007233A0  BuildingClass::RebuildOccupancy2  this=ObjectClass  sig=csp ====
int __thiscall BuildingClass_RebuildOccupancy2(int **this)
{
  int v2; // ecx
  int *v3; // eax
  int i; // eax
  int result; // eax
  _DWORD *j; // edi
  __int16 *v7; // ecx
  int v8; // eax
  _DWORD *v9; // ebp
  unsigned int v10; // ebx
  unsigned int v11; // edx
  unsigned int v12; // edi
  int v13; // ecx
  int v14; // ebx
  unsigned int v15; // eax
  float v16; // [esp+8h] [ebp-Ch]
  __int16 *v17; // [esp+Ch] [ebp-8h]
  unsigned int v18; // [esp+10h] [ebp-4h]

  v2 = 0; /*0x7233a6*/
  v3 = this->q044; /*0x7233a9*/
  this->q10C = 0; /*0x7233af*/
  if ( *v3 >= 0 ) /*0x7233bc*/
  {
    do /*0x7233ce*/
    {
      ++v2; /*0x7233c1*/
      *(_DWORD *)(v3[2] + 4 * v2 - 4) = 0; /*0x7233c2*/
    }
    while ( v2 <= *v3 ); /*0x7233ce*/
  }
  *v3 = 0; /*0x7233d0*/
  for ( i = Object::ComputeAllocationSize() - 1; i >= 0; *((_BYTE *)this->q114 + i + 1) = 0 ) /*0x7233dc*/
    --i; /*0x7233e4*/
  LayerClass::CellIteratorReset(&MEMORY[0x87F7E8]); /*0x7233f1*/
  result = LayerClass::CellIteratorNext(&MEMORY[0x87F7E8]); /*0x7233fb*/
  for ( j = (_DWORD *)result; result; j = (_DWORD *)result ) /*0x723404*/
  {
    if ( (int *)BuildingClass::FindByCellHash(j) == this->q026 /*0x723421*/
      && (unsigned __int8)BuildingClass::IsTiberiumCollectorEligible(j) )
    {
      v7 = (__int16 *)(j + 9); /*0x72343a*/
      v17 = (__int16 *)(j + 9); /*0x72343d*/
      (this->q118)[2 * (_DWORD)this->q10C] = j[9]; /*0x723443*/
      (this->q118)[2 * (_DWORD)this->q10C + 1] = 0; /*0x723452*/
      v8 = (int)this->q10C; /*0x72345a*/
      v9 = this->q044; /*0x723466*/
      v10 = (unsigned int)&(this->q118)[2 * v8]; /*0x72346c*/
      this->q10C = (int *)(v8 + 1); /*0x723470*/
      v11 = *v9 + 1; /*0x72347c*/
      v16 = *(float *)(v10 + 4); /*0x72347f*/
      v18 = v10; /*0x723486*/
      v12 = v11 >> 1; /*0x72348a*/
      if ( v11 < v9[1] ) /*0x72348e*/
      {
        if ( v11 > 1 ) /*0x723493*/
        {
          do /*0x7234b3*/
          {
            v13 = v9[2]; /*0x723495*/
            v14 = *(_DWORD *)(v13 + 4 * v12); /*0x723498*/
            if ( *(float *)(v14 + 4) <= (double)v16 ) /*0x7234a7*/
              break; /*0x7234a7*/
            *(_DWORD *)(v13 + 4 * v11) = v14; /*0x7234a9*/
            v11 = v12; /*0x7234ac*/
            v12 >>= 1; /*0x7234ae*/
          }
          while ( v11 > 1 ); /*0x7234b3*/
          v7 = v17; /*0x7234b5*/
          v10 = v18; /*0x7234b9*/
        }
        *(_DWORD *)(v9[2] + 4 * v11) = v10; /*0x7234c0*/
        v15 = v9[3]; /*0x7234c6*/
        ++*v9; /*0x7234cc*/
        if ( v10 > v15 ) /*0x7234cf*/
          v9[3] = v10; /*0x7234d1*/
        if ( v10 < v9[4] ) /*0x7234d7*/
          v9[4] = v10; /*0x7234d9*/
      }
      *((_BYTE *)this->q114 + Cell::PosToIndex(v7)) = 1; /*0x7234e7*/
    }
    result = LayerClass::CellIteratorNext(&MEMORY[0x87F7E8]); /*0x7234f0*/
  }
  return result; /*0x723501*/
}


// ==== 0x00723510  ObjectClass::method  this=ObjectClass  sig=csp ====
void __thiscall sub_723510(int this)
{
  _DWORD *v2; // eax
  int i; // ecx
  void **v4; // edi

  v2 = *(_DWORD **)(this + 272); /*0x723516*/
  if ( v2 ) /*0x72351e*/
  {
    for ( i = 0; i <= *v2; *(_DWORD *)(v2[2] + 4 * i - 4) = 0 ) /*0x723526*/
      ++i; /*0x72352b*/
    *v2 = 0; /*0x723537*/
    v4 = *(void ***)(this + 272); /*0x723539*/
    if ( v4 ) /*0x723541*/
    {
      __3_YAXPAX_Z(v4[2]); /*0x723547*/
      __3_YAXPAX_Z(v4); /*0x72354d*/
    }
    *(_DWORD *)(this + 272) = 0; /*0x723555*/
  }
  if ( *(_DWORD *)(this + 280) ) /*0x72355c*/
  {
    __3_YAXPAX_Z(*(void **)(this + 280)); /*0x723567*/
    *(_DWORD *)(this + 280) = 0; /*0x72356f*/
  }
  if ( *(_DWORD *)(this + 276) ) /*0x723575*/
  {
    __3_YAXPAX_Z(*(void **)(this + 276)); /*0x723580*/
    *(_DWORD *)(this + 276) = 0; /*0x723588*/
  }
  *(_DWORD *)(this + 268) = 0; /*0x72358e*/
}


// ==== 0x007235A0  CellClass::RegisterForRedraw  this=ObjectClass  sig=csp ====
_BYTE *__thiscall CellClass_RegisterForRedraw(int this, __int16 *a2)
{
  _BYTE *result; // eax
  int v4; // eax
  _DWORD *v5; // edi
  unsigned int v6; // ebx
  unsigned int v7; // ecx
  unsigned int v8; // edx
  int v9; // ebx
  int v10; // ebp
  unsigned int v11; // eax
  unsigned int v12; // [esp+8h] [ebp-8h]
  int v13; // [esp+Ch] [ebp-4h]
  float v14; // [esp+14h] [ebp+4h]

  v13 = Cell::PosToIndex(a2); /*0x7235b8*/
  result = CellCoord::To_CellObj(&MEMORY[0x87F7E8], a2); /*0x7235bc*/
  if ( result[286] < 0xBu ) /*0x7235c8*/
  {
    if ( *(_DWORD *)(this + 268) > Object::ComputeAllocationSize() - 10 ) /*0x7235de*/
      BuildingClass::RebuildOccupancy2((int **)this); /*0x7235e2*/
    *(_DWORD *)(*(_DWORD *)(this + 280) + 8 * *(_DWORD *)(this + 268)) = *(_DWORD *)a2; /*0x7235f6*/
    *(float *)(*(_DWORD *)(this + 280) + 8 * *(_DWORD *)(this + 268) + 4) = (float)((int)MEMORY[0xA8ED84] /*0x723632*/
                                                                                  + (int)abs32(
                                                                                           Random::State(
                                                                                             (_DWORD *)MEMORY[0xA8B230]
                                                                                           + 134))
                                                                                  % 50);
    v4 = *(_DWORD *)(this + 268); /*0x723636*/
    v5 = *(_DWORD **)(this + 272); /*0x723642*/
    v6 = *(_DWORD *)(this + 280) + 8 * v4; /*0x723648*/
    *(_DWORD *)(this + 268) = v4 + 1; /*0x72364c*/
    v7 = *v5 + 1; /*0x723657*/
    v14 = *(float *)(v6 + 4); /*0x72365a*/
    v12 = v6; /*0x723661*/
    v8 = v7 >> 1; /*0x723665*/
    if ( v7 < v5[1] ) /*0x723669*/
    {
      if ( v7 > 1 ) /*0x72366e*/
      {
        do /*0x72368f*/
        {
          v9 = v5[2]; /*0x723671*/
          v10 = *(_DWORD *)(v9 + 4 * v8); /*0x723674*/
          if ( *(float *)(v10 + 4) <= (double)v14 ) /*0x723683*/
            break; /*0x723683*/
          *(_DWORD *)(v9 + 4 * v7) = v10; /*0x723685*/
          v7 = v8; /*0x723688*/
          v8 >>= 1; /*0x72368a*/
        }
        while ( v7 > 1 ); /*0x72368f*/
        v6 = v12; /*0x723691*/
      }
      *(_DWORD *)(v5[2] + 4 * v7) = v6; /*0x723699*/
      v11 = v5[3]; /*0x72369e*/
      ++*v5; /*0x7236a4*/
      if ( v6 > v11 ) /*0x7236a6*/
        v5[3] = v6; /*0x7236a8*/
      if ( v6 < v5[4] ) /*0x7236ae*/
        v5[4] = v6; /*0x7236b0*/
    }
    result = *(_BYTE **)(this + 276); /*0x7236b3*/
    result[v13] = 1; /*0x7236be*/
  }
  return result; /*0x7236c2*/
}


// ==== 0x007236D0  nullsub_158  this=-  sig=ida-proto ====
void nullsub_158()
{
  ; /*0x7236d0*/
}


// ==== 0x007236E0  TiberiumClass::StubReturn296  this=TiberiumClass  sig=csp ====
int TiberiumClass::_vt12()
{
  return 296; /*0x7236e5*/
}


// ==== 0x007236F0  TiberiumClass::StubReturn46  this=TiberiumClass  sig=csp ====
int TiberiumClass::_vt11()
{
  return 46; /*0x7236f5*/
}


// ==== 0x00723700  TiberiumClass::Stub  this=TiberiumClass  sig=csp ====
int __thiscall TiberiumClass::_vt16(_DWORD *this)
{
  return this->isInLogic; /*0x723706*/
}


// ==== 0x00723710  TiberiumClass::DrawOre  this=TiberiumClass  sig=csp ====
TiberiumClass *__thiscall TiberiumClass::DrawOre(void *Block, char a2)
{
  TiberiumClass::CleanupMembers((int)Block); /*0x723713*/
  if ( (a2 & 1) != 0 ) /*0x72371d*/
    __3_YAXPAX_Z(Block); /*0x723720*/
  return (TiberiumClass *)Block; /*0x72372a*/
}


// ==== 0x00723730  _DynamicVectorClass_PAVTiberiumClass::Destroy  this=DynamicVector  sig=csp ====
void __thiscall VectorClass_ptr_TiberiumClass::sub_723730(int this)
{
  void *v2; // eax

  v2 = *(void **)(this + 4); /*0x723736*/
  *(_DWORD *)(this + 16) = 0; /*0x723739*/
  if ( v2 && *(_BYTE *)(this + 13) ) /*0x723740*/
  {
    __3_YAXPAX_Z(v2); /*0x723746*/
    *(_DWORD *)(this + 4) = 0; /*0x72374e*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x723751*/
  *(_DWORD *)(this + 8) = 0; /*0x723754*/
}


// ==== 0x00723760  _DynamicVectorClass_PAVTiberiumClass::GetItemIndex  this=DynamicVector  sig=csp ====
unsigned int __thiscall VectorClass_ptr_TiberiumClass::sub_723760(int this, int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x723760*/
    return (unsigned int)(a2 - *(_DWORD *)(this + 4)) >> 2; /*0x723775*/
  else
    return 0; /*0x723767*/
}


// ==== 0x00723780  _VectorClass_PAVTiberiumClass::Get  this=VectorClass  sig=csp ====
int __thiscall VectorClass_ptr_TiberiumClass::Get(_DWORD *this, int a2)
{
  return *(_DWORD *)(this->Items + 4 * a2); /*0x72378a*/
}


// ==== 0x00723790  _VectorClass_PAVTiberiumClass::Add  this=VectorClass  sig=csp ====
char __thiscall VectorClass_ptr_TiberiumClass::Add(int *this, int a2)
{
  int v2; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  v2 = this->Capacity; /*0x723792*/
  if ( v2 == *(_DWORD *)(a2 + 8) ) /*0x72379d*/
  {
    v3 = 0; /*0x72379f*/
    if ( v2 <= 0 ) /*0x7237a3*/
      return 1; /*0x7237c3*/
    v4 = (_DWORD *)this->Items; /*0x7237a5*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x7237ab*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x7237b4*/
    {
      ++v3; /*0x7237b6*/
      ++v4; /*0x7237b7*/
      if ( v3 >= v2 ) /*0x7237bc*/
        return 1; /*0x7237bc*/
    }
  }
  return 0; /*0x7237be*/
}


// ==== 0x007237D0  _VectorClass_PAVTiberiumClass::Release  this=VectorClass  sig=csp ====
char __thiscall VectorClass_ptr_TiberiumClass::_vt02(void *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int v6; // ecx
  int i; // eax

  if ( a2 ) /*0x7237dc*/
  {
    this->IsInitialized = 0; /*0x7237e6*/
    if ( a3 ) /*0x7237ec*/
      v4 = a3; /*0x723802*/
    else
      v4 = __2_YAPAXI_Z(4 * a2); /*0x7237fe*/
    this->IsInitialized = 1; /*0x723806*/
    if ( v4 ) /*0x72380a*/
    {
      if ( this->Items ) /*0x723815*/
      {
        v6 = this->Capacity; /*0x72381c*/
        if ( a2 < v6 ) /*0x723821*/
          v6 = a2; /*0x723823*/
        for ( i = 0; i < v6; v4[i - 1] = *(_DWORD *)(this->Items + 4 * i - 4) ) /*0x723829*/
          ++i; /*0x72382e*/
        if ( this->IsAllocated ) /*0x72383b*/
        {
          __3_YAXPAX_Z(*((void **)this + 1)); /*0x723846*/
          this->Items = 0; /*0x72384e*/
        }
      }
      this->Items = v4; /*0x723857*/
      this->Capacity = a2; /*0x72385f*/
      this->IsAllocated = a3 == 0; /*0x723862*/
      return 1; /*0x723868*/
    }
    else
    {
      return 0; /*0x72380f*/
    }
  }
  else
  {
    (*(void (__thiscall **)(void *))(this->IsInitialized)(this); /*0x723872*/
    return 1; /*0x723878*/
  }
}


// ==== 0x00723880  _VectorClass_PAVTiberiumClass::Remove  this=VectorClass  sig=csp ====
void __thiscall VectorClass_ptr_TiberiumClass::Remove(int this)
{
  if ( *(_DWORD *)(this + 4) && *(_BYTE *)(this + 13) ) /*0x72388d*/
  {
    __3_YAXPAX_Z(*(void **)(this + 4)); /*0x723893*/
    *(_DWORD *)(this + 4) = 0; /*0x72389b*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x72389e*/
  *(_DWORD *)(this + 8) = 0; /*0x7238a1*/
}


// ==== 0x007238B0  _VectorClass_PAVTiberiumClass::GetSize  this=VectorClass  sig=csp ====
int __thiscall VectorClass_ptr_TiberiumClass::_vt04(int this, _DWORD *a2)
{
  int result; // eax
  int v3; // edx
  _DWORD *i; // ecx

  if ( !*(_BYTE *)(this + 12) ) /*0x7238b0*/
    return 0; /*0x7238b8*/
  v3 = *(_DWORD *)(this + 8); /*0x7238be*/
  result = 0; /*0x7238c1*/
  if ( v3 <= 0 ) /*0x7238c5*/
    return -1; /*0x7238dc*/
  for ( i = *(_DWORD **)(this + 4); *i != *a2; ++i ) /*0x7238cb*/
  {
    if ( ++result >= v3 ) /*0x7238da*/
      return -1; /*0x7238da*/
  }
  return result; /*0x7238ba*/
}


// ==== 0x007238F0  _VectorClass_PAVTiberiumClass::GetCapacity  this=VectorClass  sig=csp ====
unsigned int __thiscall VectorClass_ptr_TiberiumClass::_vt05(int this, int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x7238f0*/
    return (unsigned int)(a2 - *(_DWORD *)(this + 4)) >> 2; /*0x723905*/
  else
    return 0; /*0x7238f7*/
}


// ==== 0x00723910  _DynamicVectorClass_PAVTiberiumClass::SetCapacity  this=DynamicVector  sig=csp ====
char __thiscall VectorClass_ptr_TiberiumClass::sub_723910(void *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int v5; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x72391c*/
  {
    this->IsInitialized = 0; /*0x723922*/
    if ( a3 ) /*0x723928*/
      v4 = a3; /*0x72393e*/
    else
      v4 = __2_YAPAXI_Z(4 * a2); /*0x72393a*/
    this->IsInitialized = 1; /*0x723942*/
    if ( !v4 ) /*0x723946*/
      return 0; /*0x7239ba*/
    if ( this->Items ) /*0x723948*/
    {
      v5 = this->DynamicVector_field_0x8; /*0x72394f*/
      if ( a2 < v5 ) /*0x723954*/
        v5 = a2; /*0x723956*/
      for ( i = 0; i < v5; v4[i - 1] = *(_DWORD *)(this->Items + 4 * i - 4) ) /*0x72395c*/
        ++i; /*0x723961*/
      if ( this->IsAllocated ) /*0x72396e*/
      {
        __3_YAXPAX_Z(*((void **)this + 1)); /*0x723979*/
        this->Items = 0; /*0x723981*/
      }
    }
    this->Items = v4; /*0x72398a*/
    this->DynamicVector_field_0x8 = a2; /*0x723992*/
    this->IsAllocated = a3 == 0; /*0x723995*/
  }
  else
  {
    (*(void (__thiscall **)(void *))(this->IsInitialized)(this); /*0x72399e*/
  }
  v7 = this->DynamicVector_field_0x8; /*0x7239a1*/
  if ( v7 < this->Items ) /*0x7239a9*/
    this->Items = v7; /*0x7239ab*/
  return 1; /*0x7239ae*/
}


// ==== 0x007239C0  _DynamicVectorClass_PAVTiberiumClass::FindItemIndex  this=DynamicVector  sig=csp ====
int __thiscall VectorClass_ptr_TiberiumClass::sub_7239C0(int *this, _DWORD *a2)
{
  int v2; // edx
  int result; // eax
  _DWORD *i; // ecx

  v2 = this->Items; /*0x7239c0*/
  result = 0; /*0x7239c3*/
  if ( v2 <= 0 ) /*0x7239c8*/
    return -1; /*0x7239df*/
  for ( i = (_DWORD *)this->Items; *i != *a2; ++i ) /*0x7239ce*/
  {
    if ( ++result >= v2 ) /*0x7239dd*/
      return -1; /*0x7239dd*/
  }
  return result; /*0x7239e2*/
}


// ==== 0x007239F0  _VectorClass_PAVTiberiumClass::QueryInterface  this=VectorClass  sig=csp ====
VectorClass *__thiscall VectorClass_ptr_TiberiumClass::QueryInterface(_DWORD *Block, char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x7239f3*/
  *Block = &vt_VectorClass_TiberiumClass; /*0x7239f6*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x723a00*/
  {
    __3_YAXPAX_Z(v3); /*0x723a08*/
    *(Block + 1) = 0; /*0x723a10*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x723a1b*/
  *(Block + 2) = 0; /*0x723a21*/
  if ( (a2 & 1) != 0 ) /*0x723a28*/
    __3_YAXPAX_Z(Block); /*0x723a2b*/
  return (VectorClass *)Block; /*0x723a35*/
}


// ==== 0x00723A40  _DynamicVectorClass_PAVTiberiumClass::Constructor_VectorClass_TiberiumClass___  this=DynamicVector  sig=csp ====
DynamicVector *__thiscall VectorClass_ptr_TiberiumClass::Constructor_VectorClass_TiberiumClass___(
        _DWORD *Block,
        char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x723a43*/
  *Block = &vt_VectorClass_TiberiumClass; /*0x723a46*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x723a50*/
  {
    __3_YAXPAX_Z(v3); /*0x723a58*/
    *(Block + 1) = 0; /*0x723a60*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x723a6b*/
  *(Block + 2) = 0; /*0x723a71*/
  if ( (a2 & 1) != 0 ) /*0x723a78*/
    __3_YAXPAX_Z(Block); /*0x723a7b*/
  return (DynamicVector *)Block; /*0x723a85*/
}


// ==== 0x00723A90  sub_723A90  this=-  sig=ida-proto ====
void sub_723A90()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x723a9c*/
  MEMORY[0xB0F538] = Math::Sqrt(v0 + v0); /*0x723aae*/
}


// ==== 0x00723AC0  sub_723AC0  this=-  sig=ida-proto ====
void sub_723AC0()
{
  MEMORY[0xB0F588] = MEMORY[0xB0F538] / 60.0; /*0x723acc*/
}


// ==== 0x00723AE0  sub_723AE0  this=-  sig=ida-proto ====
void sub_723AE0()
{
  MEMORY[0xB0F570] = 1.0 / MEMORY[0xB0F588]; /*0x723aec*/
}


// ==== 0x00723B00  sub_723B00  this=-  sig=ida-proto ====
void sub_723B00()
{
  MEMORY[0xB0F568] = 0.0174532925199433 * 45.0; /*0x723b0c*/
}


// ==== 0x00723B20  sub_723B20  this=-  sig=ida-proto ====
void sub_723B20()
{
  MEMORY[0xB0F540] = 0.0174532925199433 * 60.0; /*0x723b2c*/
}


// ==== 0x00723B40  sub_723B40  this=-  sig=ida-proto ====
void sub_723B40()
{
  MEMORY[0xB0F518] = 0.0174532925199433 * 90.0; /*0x723b4c*/
}


// ==== 0x00723B60  sub_723B60  this=-  sig=ida-proto ====
__int64 sub_723B60()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(MEMORY[0xB0F518] - MEMORY[0xB0F540]); /*0x723b72*/
  result = Math::RoundToInt(v0 * MEMORY[0xB0F538] * 0.5); /*0x723b86*/
  MEMORY[0xB0F590] = result; /*0x723b8b*/
  return result; /*0x723b90*/
}


// ==== 0x00723BA0  sub_723BA0  this=-  sig=ida-proto ====
void sub_723BA0()
{
  MEMORY[0xB0F548] = Math::ArcTan((double)MEMORY[0xB0F590] * 0.00390625); /*0x723bb7*/
}


// ==== 0x00723BD0  sub_723BD0  this=-  sig=ida-proto ====
void sub_723BD0()
{
  MEMORY[0xB0F560] = Math::ArcTan((double)(2 * MEMORY[0xB0F590]) / MEMORY[0xB0F538]); /*0x723bf2*/
}


// ==== 0x00723C00  sub_723C00  this=-  sig=ida-proto ====
__int64 sub_723C00()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * MEMORY[0xB0F590]) + 0.5); /*0x723c1b*/
  MEMORY[0xB0F584] = result; /*0x723c20*/
  return result; /*0x723c26*/
}


// ==== 0x00723C30  sub_723C30  this=-  sig=ida-proto ====
int sub_723C30()
{
  MEMORY[0xB0F530] = 0; /*0x723c32*/
  MEMORY[0xB0F532] = 0; /*0x723c38*/
  return 0; /*0x723c3e*/
}


// ==== 0x00723C40  sub_723C40  this=-  sig=ida-proto ====
int sub_723C40()
{
  MEMORY[0xB0F550] = 0; /*0x723c42*/
  MEMORY[0xB0F554] = 0; /*0x723c47*/
  MEMORY[0xB0F558] = 0; /*0x723c4c*/
  return 0; /*0x723c51*/
}


// ==== 0x00723C60  sub_723C60  this=-  sig=ida-proto ====
int sub_723C60()
{
  MEMORY[0xB0F580] = 0; /*0x723c65*/
  MEMORY[0xB0F578] = 128; /*0x723c6f*/
  MEMORY[0xB0F57C] = 128; /*0x723c74*/
  return 128; /*0x723c79*/
}


// ==== 0x00723C80  sub_723C80  this=-  sig=ida-proto ====
int sub_723C80()
{
  MEMORY[0xB0F520] = 0; /*0x723c82*/
  MEMORY[0xB0F524] = 0; /*0x723c87*/
  MEMORY[0xB0F528] = 0; /*0x723c8c*/
  MEMORY[0xB0F52C] = 0; /*0x723c91*/
  return 0; /*0x723c96*/
}


// ==== 0x00723CA0  ScriptTypeClass::SetField  this=ScriptTypeClass  sig=csp ====
char *__thiscall ScriptTypeClass::SetField(_DWORD *this, Color *aP1)
{
  Color *result; // eax
  int v4; // ecx
  int v5; // [esp+4h] [ebp-4h] BYREF

  result = aP1; /*0x723ca1*/
  if ( aP1 ) /*0x723caa*/
  {
    sscanf((const char *const)aP1, g_INI_Key_Digest.__pad_20, &aP1, &v5); /*0x723cbc*/
    result = aP1; /*0x723cc1*/
    v4 = v5; /*0x723cc5*/
    *this = aP1; /*0x723ccc*/
    this->vtable2 = v4; /*0x723cce*/
  }
  return (char *)result; /*0x723cd1*/
}


// ==== 0x00723CE0  ScriptTypeClass::FormatToString  this=ObjectTypeClass  sig=csp ====
unsigned int __thiscall ScriptTypeClass::FormatToString(_DWORD *this, AbstractClass *aP1)
{
  if ( !aP1 ) /*0x723ce7*/
    return 0; /*0x723d0e*/
  sprintf(aP1->__pad_0, (ObjectClass *)g_INI_Key_Digest.__pad_20, (INIClass *)*this); /*0x723cf6*/
  return strlen(aP1->__pad_0); /*0x723d08*/
}


// ==== 0x00723E40  sub_723E40  this=-  sig=ida-proto ====
int sub_723E40()
{
  MEMORY[0xB0F598] = 0; /*0x723e42*/
  MEMORY[0xB0F59C] = 0; /*0x723e47*/
  MEMORY[0xB0F5A0] = 0; /*0x723e4c*/
  MEMORY[0xB0F5A4] = 0; /*0x723e51*/
  return 0; /*0x723e56*/
}


// ==== 0x00723E60  ToggleClass::Construct  this=ToggleClass  sig=csp ====
int __thiscall ToggleClass::Construct(
        int this,
        ControlClass *aP1,
        ControlClass *aP2,
        ControlClass *aP3,
        ControlClass *aP4,
        ControlClass *aP5)
{
  ControlClass::Construct((_DWORD *)this, aP1, aP2, aP3, aP4, aP5, 5, (ControlClass *)1); /*0x723e82*/
  *(_DWORD *)this = &vt_ToggleClass; /*0x723e89*/
  *(_BYTE *)(this + 44) = 0; /*0x723e8f*/
  *(_BYTE *)(this + 45) = 0; /*0x723e92*/
  *(_DWORD *)(this + 48) = 0; /*0x723e95*/
  return this; /*0x723e9a*/
}


// ==== 0x00723EA0  GadgetClass::Show  this=GadgetClass  sig=csp ====
int __thiscall GadgetClass_Show(_BYTE *this)
{
  int v1; // eax

  v1 = *(_DWORD *)this; /*0x723ea0*/
  this->q02D = 1; /*0x723ea2*/
  return (*(int (**)(void))(v1 + 72))();
}


// ==== 0x00723EB0  GadgetClass::Hide  this=GadgetClass  sig=csp ====
int __thiscall GadgetClass_Hide(_BYTE *this)
{
  int v1; // eax

  v1 = *(_DWORD *)this; /*0x723eb0*/
  this->q02D = 0; /*0x723eb2*/
  return (*(int (**)(void))(v1 + 72))();
}


// ==== 0x00723EC0  ToggleClass::ProcessMouseOver  this=ToggleClass  sig=csp ====
int __thiscall GadgetClass::ProcessMouseOver(_DWORD *this, int a2, ControlClass *aP2, int a4)
{
  unsigned int v5; // ebx
  char v6; // al
  int v7; // eax
  int v8; // edx
  int v9; // edx
  int v11; // eax
  int v12; // edx
  int v13; // edx
  char v14; // [esp+Bh] [ebp-1h]

  if ( (unsigned int)((*(int (__thiscall **)(_DWORD))(**(_DWORD **)&MEMORY[0x87F8E4].__pad_5568[10228] + 44))(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[10228]) /*0x723ef6*/
                    - this->Width) >= this->Visible
    || (v14 = 1,
        (unsigned int)((*(int (__thiscall **)(_DWORD))(**(_DWORD **)&MEMORY[0x87F8E4].__pad_5568[10228] + 48))(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[10228])
                     - this->Height) >= this->ID) )
  {
    v14 = 0; /*0x723ef8*/
  }
  v5 = a2; /*0x723efd*/
  if ( !a2 ) /*0x723f03*/
  {
    v6 = this->q02C; /*0x723f0b*/
    if ( v14 ) /*0x723f0e*/
    {
      if ( !v6 ) /*0x723f12*/
      {
        v7 = *this; /*0x723f14*/
        this->q02C = 1; /*0x723f18*/
        (*(void (__thiscall **)(_DWORD *))(v7 + 72))(this); /*0x723f1c*/
      }
    }
    else if ( v6 ) /*0x723f23*/
    {
      v8 = *this; /*0x723f25*/
      this->q02C = 0; /*0x723f29*/
      (*(void (__thiscall **)(_DWORD *))(v8 + 72))(this); /*0x723f2d*/
    }
  }
  (*(void (__thiscall **)(_DWORD *, int))(*this + 120))(this, a2); /*0x723f35*/
  if ( (a2 & 0x11) != 0 ) /*0x723f3b*/
  {
    v9 = *this; /*0x723f3d*/
    this->q02C = 1; /*0x723f42*/
    (*(void (__thiscall **)(_DWORD *))(v9 + 72))(this); /*0x723f46*/
    CellClass::Draw((int)this, a2 & 0xFFFFFFEE, aP2, 0); /*0x723f56*/
    *(_DWORD *)aP2->__pad_0 = 0; /*0x723f5b*/
    return 1; /*0x723f6a*/
  }
  if ( (a2 & 0x44) != 0 ) /*0x723f70*/
  {
    if ( !this->q02C ) /*0x723f77*/
    {
      v5 = a2 & 0xFFFFFFBB; /*0x723fbe*/
      return CellClass::Draw((int)this, v5, aP2, 0); /*0x723fbe*/
    }
    if ( v14 ) /*0x723f7f*/
    {
      v11 = this->q030; /*0x723f81*/
      if ( v11 == 1 ) /*0x723f87*/
      {
        v12 = *this; /*0x723f8c*/
        this->q02D = this->q02D == 0; /*0x723f95*/
        this->q02C = 0; /*0x723f98*/
        (*(void (__thiscall **)(_DWORD *))(v12 + 72))(this); /*0x723f9c*/
        return CellClass::Draw((int)this, v5, aP2, 0); /*0x723f9f*/
      }
      if ( v11 == 2 && !this->q02D ) /*0x723fa6*/
        this->q02D = 1; /*0x723fad*/
    }
    v13 = *this; /*0x723fb1*/
    this->q02C = 0; /*0x723fb5*/
    (*(void (__thiscall **)(_DWORD *))(v13 + 72))(this); /*0x723fb9*/
  }
  return CellClass::Draw((int)this, v5, aP2, 0); /*0x723f62*/
}


// ==== 0x00723FE0  sub_723FE0  this=-  sig=ida-proto ====
int sub_723FE0()
{
  MEMORY[0xB0F5A8] = 0; /*0x723fe2*/
  MEMORY[0xB0F5AC] = 0; /*0x723fe7*/
  MEMORY[0xB0F5B0] = 0; /*0x723fec*/
  MEMORY[0xB0F5B4] = 0; /*0x723ff1*/
  return 0; /*0x723ff6*/
}


// ==== 0x00724000  ToolTipManager::MainWindowProc_Helper  this=ToolTipManager  sig=csp ====
char *__thiscall sub_724000(char *this, int a2)
{
  char *v3; // ecx
  int v4; // edx

  v3 = this + 564; /*0x72400a*/
  this->__pad_001 = 0; /*0x724010*/
  this->q008 = a2; /*0x724013*/
  this->ToolTipText = 0; /*0x724016*/
  *((_DWORD *)this + 138) = 1000; /*0x724019*/
  *((_DWORD *)this + 140) = 10000; /*0x724023*/
  *((_DWORD *)v3 + 1) = 0; /*0x72402d*/
  *((_DWORD *)v3 + 2) = 0; /*0x724030*/
  v3[12] = 1; /*0x724033*/
  v3[13] = 0; /*0x724037*/
  *(_DWORD *)v3 = &vt_DynamicVectorClass_ToolTip_const; /*0x72403a*/
  *((_DWORD *)v3 + 5) = 10; /*0x724040*/
  *((_DWORD *)v3 + 4) = 0; /*0x724047*/
  this->q24C = 0; /*0x72404a*/
  this->q250 = 0; /*0x724050*/
  this->q254 = 0; /*0x724056*/
  this->__pad_258 = 0; /*0x72405c*/
  this->q25C = 0; /*0x724062*/
  v4 = *(_DWORD *)v3; /*0x724068*/
  *(_DWORD *)this = &vt_ToolTipManager; /*0x72406a*/
  (*(void (__thiscall **)(char *))(v4 + 12))(v3); /*0x724070*/
  __3_YAXPAX_Z(*((void **)this + 147)); /*0x72407a*/
  this->q24C = 0; /*0x724082*/
  this->q250 = 0; /*0x724088*/
  this->q254 = 0; /*0x72408e*/
  this->__pad_258 = 0; /*0x724094*/
  this->q25C = 0; /*0x72409a*/
  return this; /*0x7240a2*/
}


// ==== 0x007240B0  ToolTipClass::updateString  this=ToolTipManager  sig=csp ====
void __thiscall ToolTipClass::updateString(char *this)
{
  int v2; // eax
  int i; // edi
  int v4; // edx
  void *v5; // eax

  v2 = this->q008; /*0x7240ba*/
  *(_DWORD *)this = &ToolTipManager::`vftable'; /*0x7240bd*/
  ((void (__stdcall *)(int, int))KillTimer)(v2, 1414809936); /*0x7240c4*/
  if ( this->__pad_001 ) /*0x7240ca*/
    (*(void (__thiscall **)(char *, char *))(this->q008)(this, this + 24); /*0x7240db*/
  __3_YAXPAX_Z(*((void **)this + 147)); /*0x7240e5*/
  this->q24C = 0; /*0x7240ea*/
  this->q250 = 0; /*0x7240f0*/
  this->q254 = 0; /*0x7240f6*/
  this->__pad_258 = 0; /*0x7240fc*/
  this->q25C = 0; /*0x724102*/
  for ( i = 0; i < *((_DWORD *)this + 145); ++i ) /*0x724115*/
  {
    v4 = *((_DWORD *)this + 142); /*0x724117*/
    if ( *(_DWORD *)(v4 + 4 * i) ) /*0x72411d*/
      __3_YAXPAX_Z(*(void **)(v4 + 4 * i)); /*0x724125*/
  }
  (*(void (__thiscall **)(char *))(*((_DWORD *)this + 141) + 12))(this + 564); /*0x724146*/
  __3_YAXPAX_Z(*((void **)this + 147)); /*0x724150*/
  this->q24C = 0; /*0x724155*/
  this->q250 = 0; /*0x72415b*/
  this->q254 = 0; /*0x724161*/
  this->__pad_258 = 0; /*0x724167*/
  this->q25C = 0; /*0x72416d*/
  v5 = (void *)*((_DWORD *)this + 142); /*0x724173*/
  *((_DWORD *)this + 141) = &VectorClass<ToolTip const *>::`vftable'; /*0x72417b*/
  if ( v5 && *(this + 577) ) /*0x724183*/
  {
    __3_YAXPAX_Z(v5); /*0x724189*/
    *((_DWORD *)this + 142) = 0; /*0x724191*/
  }
  *(this + 577) = 0; /*0x724194*/
  *((_DWORD *)this + 143) = 0; /*0x724197*/
}


// ==== 0x007241A0  Tooltip::Enable  this=ToolTipManager  sig=csp ====
char __thiscall Tooltip_Enable(void *this, char a2)
{
  char result; // al
  const char *v4; // eax

  result = a2; /*0x7241a0*/
  if ( this->ToolTipText != a2 ) /*0x7241aa*/
  {
    this->ToolTipText = a2; /*0x7241ae*/
    if ( !a2 ) /*0x7241b1*/
    {
      KillTimer(*((HWND *)this + 2), 0x54544950u); /*0x7241bc*/
      if ( this->__pad_001 ) /*0x7241c2*/
        (*(void (__thiscall **)(void *, int))(this->q008)(this, (int)this + 24); /*0x7241d1*/
    }
    v4 = (const char *)&MEMORY[0x8394E8]; /*0x7241d9*/
    if ( this->ToolTipText != 1 ) /*0x7241de*/
      v4 = (const char *)&MEMORY[0x8394E4]; /*0x7241e0*/
    return Debug::Log(MEMORY[0x8449B8], v4); /*0x7241eb*/
  }
  return result; /*0x7241f3*/
}


// ==== 0x00724200  ObjectClass::HandleToolTipMessage  this=ObjectClass  sig=csp ====
void __thiscall HandleToolTipMessage(int this, int a2)
{
  int v3; // edi
  int v4; // ebp
  int *v5; // eax
  int v6; // ecx
  int v7; // edx
  int v8; // eax
  int v9; // edi
  int v10; // ebp
  int *v11; // eax
  int v12; // ecx
  int v13; // edx
  int v14; // eax
  int v15; // [esp+14h] [ebp+4h]
  int v16; // [esp+14h] [ebp+4h]

  if ( *(_BYTE *)(this + 12) == 1 ) /*0x72420a*/
  {
    switch ( *(_DWORD *)(a2 + 4) ) /*0x72422f*/
    {
      case 0x113: /*0x72422f*/
        if ( *(_DWORD *)(a2 + 8) == 1414809936 ) /*0x724339*/
        {
          KillTimer(*(HWND *)(this + 8), 0x54544950u); /*0x724348*/
          if ( *(_DWORD *)(this + 4) ) /*0x72434e*/
            goto LABEL_8; /*0x724353*/
          GetCursorPos((LPPOINT)(this + 16)); /*0x72435d*/
          ScreenToClient(*(HWND *)(this + 8), (LPPOINT)(this + 16)); /*0x724368*/
          v16 = 0; /*0x724374*/
          if ( *(int *)(this + 580) <= 0 ) /*0x72437e*/
          {
LABEL_29:
            v14 = 0; /*0x7243c5*/
          }
          else
          {
            v9 = *(_DWORD *)(this + 568); /*0x724380*/
            v10 = *(_DWORD *)(this + 16); /*0x724386*/
            while ( 1 ) /*0x72438a*/
            {
              v11 = (int *)(*(_DWORD *)v9 + 4); /*0x72438a*/
              if ( v10 >= *v11 && v10 <= *v11 + *(_DWORD *)(*(_DWORD *)v9 + 12) ) /*0x72439a*/
              {
                v12 = *(_DWORD *)(this + 20); /*0x72439c*/
                v13 = *(_DWORD *)(*(_DWORD *)v9 + 8); /*0x72439f*/
                if ( v12 >= v13 && v12 <= v13 + *(_DWORD *)(*(_DWORD *)v9 + 16) ) /*0x7243ad*/
                  break; /*0x7243ad*/
              }
              v9 += 4; /*0x7243ba*/
              if ( ++v16 >= *(_DWORD *)(this + 580) ) /*0x7243c3*/
                goto LABEL_29; /*0x7243c3*/
            }
            v14 = *(_DWORD *)(*(_DWORD *)(this + 568) + 4 * v16); /*0x7243fe*/
          }
          *(_DWORD *)(this + 4) = v14; /*0x7243c9*/
          if ( ToolTipClass::initString((wchar_t *)this) ) /*0x7243cc*/
            goto LABEL_31; /*0x7243d3*/
        }
        break; /*0x7243d3*/
      case 0x200: /*0x72422f*/
        if ( *(_DWORD *)(this + 552) && !MEMORY[0xA8F7D8] ) /*0x724258*/
        {
          KillTimer(*(HWND *)(this + 8), 0x54544950u); /*0x724263*/
          SetTimer(*(HWND *)(this + 8), 0x54544950u, *(_DWORD *)(this + 552), 0); /*0x72427b*/
          goto LABEL_7; /*0x72427b*/
        }
        GetCursorPos((LPPOINT)(this + 16)); /*0x7242a2*/
        ScreenToClient(*(HWND *)(this + 8), (LPPOINT)(this + 16)); /*0x7242ad*/
        v15 = 0; /*0x7242b9*/
        if ( *(int *)(this + 580) <= 0 ) /*0x7242c3*/
        {
LABEL_16:
          v8 = 0; /*0x72430a*/
        }
        else
        {
          v3 = *(_DWORD *)(this + 568); /*0x7242c5*/
          v4 = *(_DWORD *)(this + 16); /*0x7242cb*/
          while ( 1 ) /*0x7242cf*/
          {
            v5 = (int *)(*(_DWORD *)v3 + 4); /*0x7242cf*/
            if ( v4 >= *v5 && v4 <= *v5 + *(_DWORD *)(*(_DWORD *)v3 + 12) ) /*0x7242df*/
            {
              v6 = *(_DWORD *)(this + 20); /*0x7242e1*/
              v7 = *(_DWORD *)(*(_DWORD *)v3 + 8); /*0x7242e4*/
              if ( v6 >= v7 && v6 <= v7 + *(_DWORD *)(*(_DWORD *)v3 + 16) ) /*0x7242f2*/
                break; /*0x7242f2*/
            }
            v3 += 4; /*0x7242ff*/
            if ( ++v15 >= *(_DWORD *)(this + 580) ) /*0x724308*/
              goto LABEL_16; /*0x724308*/
          }
          v8 = *(_DWORD *)(*(_DWORD *)(this + 568) + 4 * v15); /*0x72432d*/
        }
        *(_DWORD *)(this + 4) = v8; /*0x72430e*/
        if ( ToolTipClass::initString((wchar_t *)this) ) /*0x724311*/
LABEL_31:
          SetTimer(*(HWND *)(this + 8), 0x54544950u, *(_DWORD *)(this + 560), 0); /*0x7243d5*/
        break; /*0x7243e7*/
      case 0x201: /*0x72422f*/
      case 0x202: /*0x72422f*/
      case 0x204: /*0x72422f*/
      case 0x205: /*0x72422f*/
      case 0x207: /*0x72422f*/
      case 0x208: /*0x72422f*/
        KillTimer(*(HWND *)(this + 8), 0x54544950u); /*0x72423f*/
LABEL_7:
        if ( *(_DWORD *)(this + 4) ) /*0x724281*/
LABEL_8:
          (*(void (__thiscall **)(int, int))(this->vtable3)(this, this + 24); /*0x72428c*/
        break; /*0x72429b*/
      default:
        return;
    }
  }
}


// ==== 0x00724510  ObjectClass::method  this=ObjectClass  sig=csp ====
int __thiscall sub_724510(_DWORD *this)
{
  return *(this + 138); /*0x724516*/
}


// ==== 0x00724520  SidebarClass::initializeStrip  this=ToolTipManager  sig=csp ====
int __thiscall sub_724520(_DWORD *this, int a2)
{
  *(this + 138) = a2; /*0x724524*/
  return a2; /*0x72452a*/
}


// ==== 0x00724530  SidebarClass::updateStripVisibility  this=ToolTipManager  sig=csp ====
int __thiscall sub_724530(_DWORD *this)
{
  int result; // eax

  result = *(this + 138); /*0x724530*/
  *(this + 139) = result; /*0x724536*/
  return result; /*0x72453c*/
}


// ==== 0x00724540  SidebarClass::updateStripPosition  this=ToolTipManager  sig=csp ====
int __thiscall sub_724540(_DWORD *this)
{
  int result; // eax

  result = *(this + 139); /*0x724540*/
  *(this + 138) = result; /*0x724546*/
  return result; /*0x72454c*/
}


// ==== 0x00724550  ObjectClass::method  this=ObjectClass  sig=csp ====
int __thiscall sub_724550(_DWORD *this)
{
  return this->onBridge; /*0x724556*/
}


// ==== 0x00724560  ObjectClass::method  this=ObjectClass  sig=csp ====
int __thiscall sub_724560(_DWORD *this, int a2)
{
  this->onBridge = a2; /*0x724564*/
  return a2; /*0x72456a*/
}


// ==== 0x00724570  ObjectClass::method  this=ObjectClass  sig=csp ====
int __thiscall sub_724570(_DWORD *this)
{
  return this->alignmentPadding91; /*0x724576*/
}


// ==== 0x00724580  CommandClass::AddAction  this=ToolTipManager  sig=csp ====
char __thiscall CommandClass::AddAction(int this, ToolTipManager *aP1)
{
  ToolTipManager *v2; // edi
  ObjectClass *v4; // esi
  size_t v5; // eax
  int v7; // eax
  _DWORD *v8; // ebp
  int v9; // eax
  int v10; // ecx
  int v11; // eax
  int v12; // edx
  int v13; // eax
  char *v14; // ebx
  AbstractClass *v15; // eax
  AbstractClass *v16; // edi
  int i; // eax
  int v18; // ecx
  char *v19; // ecx
  int v20; // eax

  v2 = aP1; /*0x724584*/
  v4 = (ObjectClass *)(this + 588); /*0x72458c*/
  aP1 = *(ToolTipManager **)&aP1->IsVisible; /*0x724592*/
  if ( *(_DWORD *)(this + 592) ) /*0x724596*/
  {
    if ( CommandClass::executeAction((_DWORD *)(this + 588), (ObjectClass *)&aP1) ) /*0x7245a4*/
      return 0; /*0x7245ab*/
    v5 = CommandClass::BinarySearchAction((char **)v4, (ObjectClass *)&aP1); /*0x7245b8*/
    if ( v5 ) /*0x7245bf*/
    {
      v4->uniqueId = v5; /*0x7245c1*/
      return 0; /*0x7245ca*/
    }
  }
  v7 = __2_YAPAXI_Z(0x1Cu); /*0x7245cf*/
  v8 = (_DWORD *)v7; /*0x7245d4*/
  if ( v7 ) /*0x7245db*/
  {
    *(_DWORD *)v7 = *(_DWORD *)&v2->IsVisible; /*0x7245e6*/
    *(_DWORD *)(v7 + 4) = v2->Position[0]; /*0x7245ee*/
    *(_DWORD *)(v7 + 8) = v2->Position[1]; /*0x7245f3*/
    *(_DWORD *)(v7 + 12) = v2->ToolTipText; /*0x7245f9*/
    *(_DWORD *)(v7 + 16) = v2->Duration; /*0x7245ff*/
    *(_DWORD *)(v7 + 20) = v2->DisplayTimer[0]; /*0x724605*/
    *(_BYTE *)(v7 + 24) = v2->DisplayTimer[1]; /*0x724611*/
    v9 = *(_DWORD *)(this + 572); /*0x724614*/
    if ( *(_DWORD *)(this + 580) < v9 /*0x724641*/
      || (*(_BYTE *)(this + 577) || !v9)
      && (v10 = *(_DWORD *)(this + 584), v10 > 0)
      && (*(unsigned __int8 (__thiscall **)(int, int, _DWORD))(*(_DWORD *)(this + 564) + 8))(this + 564, v9 + v10, 0) )
    {
      v11 = *(_DWORD *)(this + 580); /*0x72464c*/
      v12 = *(_DWORD *)(this + 568); /*0x72464f*/
      *(_DWORD *)(this + 580) = v11 + 1; /*0x724655*/
      *(_DWORD *)(v12 + 4 * v11) = v8; /*0x724658*/
      v13 = *(_DWORD *)&v4->__pad_0[8]; /*0x72465e*/
      if ( *(_DWORD *)&v4->__pad_0[4] + 1 <= v13 ) /*0x724664*/
      {
LABEL_19:
        *(_DWORD *)(*(_DWORD *)v4->__pad_0 + 8 * *(_DWORD *)&v4->__pad_0[4]) = *v8; /*0x7246f4*/
        *(_DWORD *)(*(_DWORD *)v4->__pad_0 + 8 * *(_DWORD *)&v4->__pad_0[4] + 4) = v8; /*0x724704*/
        v20 = *(_DWORD *)&v4->__pad_0[4] + 1; /*0x72470b*/
        v4->__pad_0[12] = 0; /*0x72470c*/
        *(_DWORD *)&v4->__pad_0[4] = v20; /*0x724710*/
        return 1; /*0x724710*/
      }
      if ( v13 ) /*0x72466c*/
      {
        aP1 = *(ToolTipManager **)&v4->__pad_0[8]; /*0x72467c*/
        if ( v13 < 0 ) /*0x724680*/
          return 1; /*0x724680*/
      }
      else
      {
        aP1 = (ToolTipManager *)10; /*0x72466e*/
      }
      v14 = &aP1->IsVisible + v13; /*0x72468a*/
      v15 = (AbstractClass *)__2_YAPAXI_Z(8 * ((_DWORD)aP1 + v13)); /*0x724695*/
      v16 = v15; /*0x72469a*/
      if ( v15 ) /*0x7246a1*/
      {
        Array::ForEach((int)v15, 8, (int)v14, (int (__thiscall *)(int))__0Iostream_init_QAE_XZ_6); /*0x7246ac*/
        for ( i = 0; i < *(_DWORD *)&v4->__pad_0[4]; *(_DWORD *)&v16->__pad_0[8 * i - 4] = *(_DWORD *)(v18 + 8 * i - 4) ) /*0x7246b8*/
        {
          v18 = *(_DWORD *)v4->__pad_0; /*0x7246ba*/
          ++i; /*0x7246bc*/
          *(_DWORD *)&v16->__pad_0[8 * i - 8] = *(_DWORD *)(*(_DWORD *)v4->__pad_0 + 8 * i - 8); /*0x7246c1*/
        }
        __3_YAXPAX_Z(*(void **)v4->__pad_0); /*0x7246d7*/
        v19 = &aP1->IsVisible + *(_DWORD *)&v4->__pad_0[8]; /*0x7246e6*/
        *(_DWORD *)v4->__pad_0 = v16; /*0x7246e8*/
        *(_DWORD *)&v4->__pad_0[8] = v19; /*0x7246ea*/
        v4->uniqueId = 0; /*0x7246ed*/
        goto LABEL_19; /*0x7246ed*/
      }
      return 1; /*0x724719*/
    }
    __3_YAXPAX_Z(v8); /*0x72471d*/
  }
  return 0; /*0x7245c4*/
}


// ==== 0x00724730  HashTable::Remove  this=ToolTipManager  sig=csp ====
void __thiscall HashTable_Remove(int *this, int a2)
{
  _DWORD *v3; // esi
  _DWORD *v4; // eax
  int v5; // eax
  _DWORD *v6; // eax
  int v7; // eax
  void **v8; // eax
  void *v9; // eax
  void *v10; // ecx
  int *v11; // edi
  size_t v12; // eax
  int v13; // eax
  int v14; // eax
  int i; // ecx
  _DWORD *v16; // eax
  _DWORD *v17; // edi
  int v18; // eax
  int v19; // eax
  int v20; // ecx
  int v21; // ecx
  void *Block; // [esp+8h] [ebp-Ch] BYREF
  int v23; // [esp+Ch] [ebp-8h] BYREF

  v3 = this + 147; /*0x72473d*/
  if ( !this->q250 ) /*0x724745*/
    return; /*0x724745*/
  v4 = (_DWORD *)this->q25C; /*0x72474b*/
  if ( !v4 || *v4 != a2 ) /*0x72475a*/
  {
    v5 = CommandClass::BinarySearchAction(&a2); /*0x724763*/
    if ( !v5 ) /*0x72476a*/
      return; /*0x72476a*/
    v3[4] = v5; /*0x724770*/
  }
  if ( v3[1] ) /*0x724773*/
  {
    v6 = (_DWORD *)v3[4]; /*0x72477a*/
    if ( v6 && *v6 == a2 ) /*0x724789*/
      goto LABEL_11; /*0x724789*/
    v7 = CommandClass::BinarySearchAction(&a2); /*0x724792*/
    if ( v7 ) /*0x724799*/
    {
      v3[4] = v7; /*0x72479b*/
LABEL_11:
      v8 = (void **)(v3[4] + 4); /*0x72479e*/
      goto LABEL_13; /*0x7247a4*/
    }
  }
  v8 = (void **)&unk_B78820; /*0x7247a6*/
LABEL_13:
  v9 = *v8; /*0x7247ab*/
  v10 = (void *)this->__pad_001; /*0x7247ad*/
  Block = v9; /*0x7247b2*/
  if ( v10 == v9 && v10 ) /*0x7247ba*/
  {
    (*(void (__thiscall **)(int *, int *))(*this + 8))(this, this + 6); /*0x7247c5*/
    v9 = Block; /*0x7247c8*/
  }
  v11 = (int *)v9; /*0x7247cd*/
  v12 = v3[1]; /*0x7247cf*/
  if ( v12 ) /*0x7247d4*/
  {
    if ( !*((_BYTE *)v3 + 12) ) /*0x7247da*/
    {
      qsort((void *)*v3, v12, 8u, CompareFunc2Int); /*0x7247ec*/
      v3[4] = 0; /*0x7247f4*/
      *((_BYTE *)v3 + 12) = 1; /*0x7247fb*/
    }
    v23 = *v11; /*0x724807*/
    v13 = UI_Remove(&v23); /*0x72480f*/
    if ( v13 ) /*0x724816*/
    {
      v14 = (v13 - *v3) >> 3; /*0x72481a*/
      if ( v14 != -1 ) /*0x724820*/
      {
        for ( i = v14 + 1; i < v3[1]; *(v16 - 1) = v16[1] ) /*0x72482a*/
        {
          v16 = (_DWORD *)(*v3 + 8 * i++); /*0x72482e*/
          *(v16 - 2) = *v16; /*0x724834*/
        }
        v17 = (_DWORD *)*v3; /*0x724847*/
        v18 = v3[1] - 1; /*0x724849*/
        v3[1] = v18; /*0x72484c*/
        v17[2 * v18] = 0; /*0x724851*/
        v17[2 * v18 + 1] = 0; /*0x724854*/
        v3[4] = 0; /*0x724858*/
      }
    }
  }
  v19 = (*(int (__thiscall **)(int *, void **))(*(this + 141) + 16))(this + 141, &Block); /*0x72486e*/
  if ( v19 != -1 ) /*0x724875*/
  {
    v20 = *(this + 145); /*0x724877*/
    if ( v19 < v20 ) /*0x72487c*/
    {
      v21 = v20 - 1; /*0x72487e*/
      for ( *(this + 145) = v21; /*0x724884*/
            v19 < *(this + 145);
            *(_DWORD *)(*(this + 142) + 4 * v19 - 4) = *(_DWORD *)(*(this + 142) + 4 * v19) )
      {
        ++v19; /*0x724889*/
      }
    }
  }
  if ( Block ) /*0x72489e*/
    __3_YAXPAX_Z(Block); /*0x7248a1*/
}


// ==== 0x007248C0  TooltipClass::GetText  this=TooltipClass  sig=csp ====
char __thiscall sub_7248C0(int this, unsigned int a2, void *a3)
{
  size_t v4; // ecx
  _DWORD *v5; // eax
  int v6; // ecx
  int v7; // ebp
  unsigned int v8; // edi
  int v9; // edx
  size_t v11; // eax
  _DWORD *v12; // ecx
  int v13; // ecx
  int v14; // edi
  unsigned int v15; // ebp
  int v16; // edx
  const void **v17; // esi

  v4 = *(_DWORD *)(this + 592); /*0x7248c6*/
  if ( !v4 ) /*0x7248ce*/
    return 0; /*0x7248ce*/
  v5 = *(_DWORD **)(this + 604); /*0x7248d0*/
  if ( !v5 || *v5 != a2 ) /*0x7248e0*/
  {
    if ( !*(_BYTE *)(this + 600) ) /*0x7248e2*/
    {
      qsort(*(void **)(this + 588), v4, 8u, (_CoreCrtNonSecureSearchSortCompareFunction)CompareFunc2Int); /*0x7248fb*/
      *(_DWORD *)(this + 604) = 0; /*0x724903*/
      *(_BYTE *)(this + 600) = 1; /*0x72490d*/
    }
    v6 = *(_DWORD *)(this + 592); /*0x724914*/
    v7 = *(_DWORD *)(this + 588); /*0x72491a*/
    if ( v6 <= 0 ) /*0x724922*/
      return 0; /*0x724922*/
    while ( 1 ) /*0x72492b*/
    {
      v8 = *(_DWORD *)(v7 + 8 * (v6 / 2)); /*0x72492b*/
      v9 = v7 + 8 * (v6 / 2); /*0x72492f*/
      if ( v8 <= a2 ) /*0x724935*/
      {
        if ( v8 == a2 ) /*0x72493b*/
        {
          if ( v9 ) /*0x724956*/
          {
            *(_DWORD *)(this + 604) = v9; /*0x724958*/
            break; /*0x724958*/
          }
          return 0; /*0x724951*/
        }
        v7 = v9 + 8; /*0x72493d*/
        v6 += -1 - v6 / 2; /*0x724945*/
      }
      else
      {
        v6 /= 2; /*0x724937*/
      }
      if ( v6 <= 0 ) /*0x724949*/
        return 0; /*0x724949*/
    }
  }
  if ( !a3 ) /*0x724964*/
    return 1; /*0x724964*/
  v11 = *(_DWORD *)(this + 592); /*0x72496a*/
  if ( !v11 ) /*0x724972*/
    goto LABEL_27; /*0x724972*/
  v12 = *(_DWORD **)(this + 604); /*0x724978*/
  if ( v12 && *v12 == a2 ) /*0x724984*/
  {
LABEL_32:
    v17 = (const void **)(*(_DWORD *)(this + 604) + 4); /*0x724a1e*/
    goto LABEL_28; /*0x724a27*/
  }
  if ( !*(_BYTE *)(this + 600) ) /*0x72498a*/
  {
    qsort(*(void **)(this + 588), v11, 8u, (_CoreCrtNonSecureSearchSortCompareFunction)CompareFunc2Int); /*0x7249a3*/
    *(_DWORD *)(this + 604) = 0; /*0x7249ab*/
    *(_BYTE *)(this + 600) = 1; /*0x7249b5*/
  }
  v13 = *(_DWORD *)(this + 592); /*0x7249bc*/
  v14 = *(_DWORD *)(this + 588); /*0x7249c2*/
  if ( v13 <= 0 ) /*0x7249ca*/
    goto LABEL_27; /*0x7249ca*/
  while ( 1 ) /*0x7249d7*/
  {
    v15 = *(_DWORD *)(v14 + 8 * (v13 / 2)); /*0x7249d7*/
    v16 = v14 + 8 * (v13 / 2); /*0x7249da*/
    if ( a2 >= v15 ) /*0x7249df*/
      break; /*0x7249df*/
    v13 /= 2; /*0x7249e1*/
LABEL_26:
    if ( v13 <= 0 ) /*0x7249f7*/
      goto LABEL_27; /*0x7249f7*/
  }
  if ( v15 != a2 ) /*0x7249e9*/
  {
    v14 = v16 + 8; /*0x7249eb*/
    v13 += -1 - v13 / 2; /*0x7249f3*/
    goto LABEL_26; /*0x7249f3*/
  }
  if ( v16 ) /*0x724a16*/
  {
    *(_DWORD *)(this + 604) = v16; /*0x724a18*/
    goto LABEL_32; /*0x724a18*/
  }
LABEL_27:
  v17 = (const void **)&unk_B78820; /*0x7249f9*/
LABEL_28:
  qmemcpy(a3, *v17, 0x1Cu); /*0x7249fe*/
  return 1; /*0x72494b*/
}


// ==== 0x00724A30  ObjectClass::method_724A30  this=ObjectClass  sig=csp ====
int __thiscall sub_724A30(int *this, int *a2)
{
  int v2; // ebp
  int v3; // ebx
  int v4; // esi
  int v5; // edi
  int *v6; // eax
  int v7; // edx
  int v8; // ecx
  int v10; // [esp+10h] [ebp-4h]

  v2 = this->alignmentPadding91; /*0x724a33*/
  v3 = 0; /*0x724a39*/
  if ( v2 <= 0 ) /*0x724a3f*/
    return 0; /*0x724a86*/
  v10 = this->wasFallingDown; /*0x724a4b*/
  v4 = v10; /*0x724a4f*/
  v5 = *a2; /*0x724a51*/
  while ( 1 ) /*0x724a55*/
  {
    v6 = (int *)(*(_DWORD *)v4 + 4); /*0x724a55*/
    if ( v5 >= *v6 && v5 <= *v6 + *(_DWORD *)(*(_DWORD *)v4 + 12) ) /*0x724a65*/
    {
      v7 = *(_DWORD *)(*(_DWORD *)v4 + 8); /*0x724a6b*/
      v8 = a2[1]; /*0x724a6e*/
      if ( v8 >= v7 && v8 <= v7 + *(_DWORD *)(*(_DWORD *)v4 + 16) ) /*0x724a7c*/
        break; /*0x724a7c*/
    }
    ++v3; /*0x724a7e*/
    v4 += 4; /*0x724a7f*/
    if ( v3 >= v2 ) /*0x724a84*/
      return 0; /*0x724a84*/
  }
  return *(_DWORD *)(v10 + 4 * v3); /*0x724a86*/
}


// ==== 0x00724AA0  ToolTipManager::addRef  this=ToolTipManager  sig=csp ====
char __stdcall ToolTipManager::_vt01(int a1)
{
  return 1; /*0x724aa2*/
}


// ==== 0x00724AB0  ToolTipManager::release  this=ToolTipManager  sig=csp ====
int __thiscall ToolTipManager::_vt02(_DWORD *this, int a2)
{
  this->q018 = 0; /*0x724ab2*/
  this->q01C = 0; /*0x724ab5*/
  this->TextBuffer = 0; /*0x724ab8*/
  this->q024 = 0; /*0x724abb*/
  this->Position = 0; /*0x724abe*/
  return 0; /*0x724ac1*/
}


// ==== 0x00724AD0  ToolTipClass::initString  this=ToolTipClass  sig=csp ====
BOOL __thiscall ToolTipClass_InitString(wchar_t *this)
{
  _DWORD *v2; // eax
  wchar_t *v3; // ecx
  wchar_t *String; // eax
  const wchar_t *v5; // edi
  int v6; // edx

  v2 = (_DWORD *)this->ToolTipClass_field_0x04; /*0x724ad7*/
  if ( v2 ) /*0x724adc*/
  {
    v3 = (wchar_t *)v2[5]; /*0x724ae2*/
    if ( v3 ) /*0x724ae7*/
      String = GetStringCSF(v3, 0, MEMORY[0x8449CC], 563); /*0x724b01*/
    else
      String = (wchar_t *)(*(int (__thiscall **)(wchar_t *, _DWORD))(this->ToolTipClass_field_0x14)(this, *v2); /*0x724af0*/
    v5 = String; /*0x724b06*/
    if ( String && wcslen(String) ) /*0x724b0d*/
    {
      wcsncpy(this + 20, v5, 0x100u); /*0x724b23*/
      v6 = this->ToolTipClass_field_0x04; /*0x724b28*/
      this->ToolTipClass_field_0x1C = this->ToolTipClass_field_0x14; /*0x724b36*/
      this->ToolTipClass_field_0x18 = v6; /*0x724b39*/
      if ( !(*(unsigned __int8 (__thiscall **)(wchar_t *, _DWORD *))(this->ToolTipClass_field_0x04)(this, (_DWORD *)this + 6) ) /*0x724b3e*/
      {
        this->ToolTipClass_field_0x18 = 0; /*0x724b47*/
        this->ToolTipClass_field_0x1C = 0; /*0x724b49*/
        this->ToolTipClass_field_0x08 = 0; /*0x724b4c*/
        this->ToolTipClass_field_0x24 = 0; /*0x724b4f*/
        this->ToolTipClass_field_0x04 = 0; /*0x724b54*/
        return 0; /*0x724b5f*/
      }
    }
    else
    {
      this->ToolTipClass_field_0x18 = 0; /*0x724b60*/
      this->ToolTipClass_field_0x1C = 0; /*0x724b63*/
      this->ToolTipClass_field_0x08 = 0; /*0x724b66*/
      this->ToolTipClass_field_0x24 = 0; /*0x724b69*/
      this->ToolTipClass_field_0x04 = 0; /*0x724b6c*/
    }
  }
  return this->ToolTipClass_field_0x04 != 0; /*0x724b59*/
}


// ==== 0x00724B80  ToolTipManager::ddtor  this=ToolTipManager  sig=csp ====
int __thiscall ToolTipManager::_vt03(int this, char a2)
{
  int result; // eax

  if ( a2 == 1 ) /*0x724b89*/
    ToolTipClass::initString((wchar_t *)this); /*0x724b8b*/
  result = *(_DWORD *)(this + 4); /*0x724b90*/
  if ( result ) /*0x724b95*/
    return (*(int (__thiscall **)(int, int))(this->Duration)(this, this + 24); /*0x724b9f*/
  return result; /*0x724ba2*/
}


// ==== 0x00724BB0  ToolTipManager::read  this=ToolTipManager  sig=csp ====
void __stdcall ToolTipManager::_vt04(int a1)
{
  Debug::Log(); /*0x724bbd*/
}


// ==== 0x00724BD0  ToolTipManager::stubReturnFalse  this=ToolTipManager  sig=csp ====
int __stdcall ToolTipManager::_vt05(int a1)
{
  return 0; /*0x724bd2*/
}


// ==== 0x00724C00  Frame::Init  this=Frame  sig=csp ====
BOOL __thiscall sub_724C00(_DWORD *this)
{
  return this->q004 != 0; /*0x724c0a*/
}


// ==== 0x00724C10  ToolTipManager::Destructor  this=ToolTipManager  sig=csp ====
ToolTipManager *__thiscall ToolTipClass::Destructor(void *Block, char a2)
{
  ToolTipClass::updateString(Block); /*0x724c13*/
  if ( (a2 & 1) != 0 ) /*0x724c1d*/
    __3_YAXPAX_Z(Block); /*0x724c20*/
  return (ToolTipManager *)Block; /*0x724c2a*/
}


// ==== 0x00724C30  _DynamicVectorClass_PBVToolTip::ddtor  this=DynamicVector  sig=csp ====
void __thiscall ToolTipManager_7_::_vt03(int this)
{
  void *v2; // eax

  v2 = *(void **)(this + 4); /*0x724c36*/
  *(_DWORD *)(this + 16) = 0; /*0x724c39*/
  if ( v2 && *(_BYTE *)(this + 13) ) /*0x724c40*/
  {
    __3_YAXPAX_Z(v2); /*0x724c46*/
    *(_DWORD *)(this + 4) = 0; /*0x724c4e*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x724c51*/
  *(_DWORD *)(this + 8) = 0; /*0x724c54*/
}


// ==== 0x00724C60  _DynamicVectorClass_PBVToolTip::write  this=DynamicVector  sig=csp ====
unsigned int __thiscall ToolTipManager_7_::_vt05(int this, int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x724c60*/
    return (unsigned int)(a2 - *(_DWORD *)(this + 4)) >> 2; /*0x724c75*/
  else
    return 0; /*0x724c67*/
}


// ==== 0x00724C80  _VectorClass_PBVToolTip::seek  this=VectorClass  sig=csp ====
int __thiscall ToolTipManager_7_::_vt06(_DWORD *this, int a2)
{
  return *(_DWORD *)(this->Items + 4 * a2); /*0x724c8a*/
}


// ==== 0x00724C90  _VectorClass_PBVToolTip::addRef  this=VectorClass  sig=csp ====
char __thiscall ToolTipManager_7_::_vt01(int *this, int a2)
{
  int v2; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  v2 = this->Capacity; /*0x724c92*/
  if ( v2 == *(_DWORD *)(a2 + 8) ) /*0x724c9d*/
  {
    v3 = 0; /*0x724c9f*/
    if ( v2 <= 0 ) /*0x724ca3*/
      return 1; /*0x724cc3*/
    v4 = (_DWORD *)this->Items; /*0x724ca5*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x724cab*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x724cb4*/
    {
      ++v3; /*0x724cb6*/
      ++v4; /*0x724cb7*/
      if ( v3 >= v2 ) /*0x724cbc*/
        return 1; /*0x724cbc*/
    }
  }
  return 0; /*0x724cbe*/
}


// ==== 0x00724CD0  _VectorClass_PBVToolTip::readString  this=VectorClass  sig=csp ====
char __thiscall ToolTipManager_7_::sub_724CD0(void *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int v6; // ecx
  int i; // eax

  if ( a2 ) /*0x724cdc*/
  {
    this->IsInitialized = 0; /*0x724ce6*/
    if ( a3 ) /*0x724cec*/
      v4 = a3; /*0x724d02*/
    else
      v4 = __2_YAPAXI_Z(4 * a2); /*0x724cfe*/
    this->IsInitialized = 1; /*0x724d06*/
    if ( v4 ) /*0x724d0a*/
    {
      if ( this->Items ) /*0x724d15*/
      {
        v6 = this->Capacity; /*0x724d1c*/
        if ( a2 < v6 ) /*0x724d21*/
          v6 = a2; /*0x724d23*/
        for ( i = 0; i < v6; v4[i - 1] = *(_DWORD *)(this->Items + 4 * i - 4) ) /*0x724d29*/
          ++i; /*0x724d2e*/
        if ( this->IsAllocated ) /*0x724d3b*/
        {
          __3_YAXPAX_Z(*((void **)this + 1)); /*0x724d46*/
          this->Items = 0; /*0x724d4e*/
        }
      }
      this->Items = v4; /*0x724d57*/
      this->Capacity = a2; /*0x724d5f*/
      this->IsAllocated = a3 == 0; /*0x724d62*/
      return 1; /*0x724d68*/
    }
    else
    {
      return 0; /*0x724d0f*/
    }
  }
  else
  {
    (*(void (__thiscall **)(void *))(this->IsInitialized)(this); /*0x724d72*/
    return 1; /*0x724d78*/
  }
}


// ==== 0x00724D80  _VectorClass_PBVToolTip::writeString  this=VectorClass  sig=csp ====
void __thiscall ToolTipManager_7_::sub_724D80(int this)
{
  if ( *(_DWORD *)(this + 4) && *(_BYTE *)(this + 13) ) /*0x724d8d*/
  {
    __3_YAXPAX_Z(*(void **)(this + 4)); /*0x724d93*/
    *(_DWORD *)(this + 4) = 0; /*0x724d9b*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x724d9e*/
  *(_DWORD *)(this + 8) = 0; /*0x724da1*/
}


// ==== 0x00724DB0  _VectorClass_PBVToolTip::seekString  this=VectorClass  sig=csp ====
int __thiscall ToolTipManager_7_::sub_724DB0(int this, _DWORD *a2)
{
  int result; // eax
  int v3; // edx
  _DWORD *i; // ecx

  if ( !*(_BYTE *)(this + 12) ) /*0x724db0*/
    return 0; /*0x724db8*/
  v3 = *(_DWORD *)(this + 8); /*0x724dbe*/
  result = 0; /*0x724dc1*/
  if ( v3 <= 0 ) /*0x724dc5*/
    return -1; /*0x724ddc*/
  for ( i = *(_DWORD **)(this + 4); *i != *a2; ++i ) /*0x724dcb*/
  {
    if ( ++result >= v3 ) /*0x724dda*/
      return -1; /*0x724dda*/
  }
  return result; /*0x724dba*/
}


// ==== 0x00724DF0  _VectorClass_PBVToolTip::setString  this=VectorClass  sig=csp ====
unsigned int __thiscall ToolTipManager_7_::sub_724DF0(int this, int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x724df0*/
    return (unsigned int)(a2 - *(_DWORD *)(this + 4)) >> 2; /*0x724e05*/
  else
    return 0; /*0x724df7*/
}


// ==== 0x00724E10  _DynamicVectorClass_PBVToolTip::release  this=DynamicVector  sig=csp ====
char __thiscall ToolTipManager_7_::_vt02(void *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int v5; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x724e1c*/
  {
    this->IsInitialized = 0; /*0x724e22*/
    if ( a3 ) /*0x724e28*/
      v4 = a3; /*0x724e3e*/
    else
      v4 = __2_YAPAXI_Z(4 * a2); /*0x724e3a*/
    this->IsInitialized = 1; /*0x724e42*/
    if ( !v4 ) /*0x724e46*/
      return 0; /*0x724eba*/
    if ( this->Items ) /*0x724e48*/
    {
      v5 = this->DynamicVector_field_0x8; /*0x724e4f*/
      if ( a2 < v5 ) /*0x724e54*/
        v5 = a2; /*0x724e56*/
      for ( i = 0; i < v5; v4[i - 1] = *(_DWORD *)(this->Items + 4 * i - 4) ) /*0x724e5c*/
        ++i; /*0x724e61*/
      if ( this->IsAllocated ) /*0x724e6e*/
      {
        __3_YAXPAX_Z(*((void **)this + 1)); /*0x724e79*/
        this->Items = 0; /*0x724e81*/
      }
    }
    this->Items = v4; /*0x724e8a*/
    this->DynamicVector_field_0x8 = a2; /*0x724e92*/
    this->IsAllocated = a3 == 0; /*0x724e95*/
  }
  else
  {
    (*(void (__thiscall **)(void *))(this->IsInitialized)(this); /*0x724e9e*/
  }
  v7 = this->DynamicVector_field_0x8; /*0x724ea1*/
  if ( v7 < this->Items ) /*0x724ea9*/
    this->Items = v7; /*0x724eab*/
  return 1; /*0x724eae*/
}


// ==== 0x00724EC0  _DynamicVectorClass_PBVToolTip::read  this=DynamicVector  sig=csp ====
int __thiscall ToolTipManager_7_::_vt04(int *this, _DWORD *a2)
{
  int v2; // edx
  int result; // eax
  _DWORD *i; // ecx

  v2 = this->Items; /*0x724ec0*/
  result = 0; /*0x724ec3*/
  if ( v2 <= 0 ) /*0x724ec8*/
    return -1; /*0x724edf*/
  for ( i = (_DWORD *)this->Items; *i != *a2; ++i ) /*0x724ece*/
  {
    if ( ++result >= v2 ) /*0x724edd*/
      return -1; /*0x724edd*/
  }
  return result; /*0x724ee2*/
}


// ==== 0x00724EF0  _VectorClass_PBVToolTip::compareString  this=VectorClass  sig=csp ====
VectorClass *__thiscall ToolTipClass::compareString(_DWORD *Block, char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x724ef3*/
  *Block = &vt_VectorClass_ToolTip_const; /*0x724ef6*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x724f00*/
  {
    __3_YAXPAX_Z(v3); /*0x724f08*/
    *(Block + 1) = 0; /*0x724f10*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x724f1b*/
  *(Block + 2) = 0; /*0x724f21*/
  if ( (a2 & 1) != 0 ) /*0x724f28*/
    __3_YAXPAX_Z(Block); /*0x724f2b*/
  return (VectorClass *)Block; /*0x724f35*/
}


// ==== 0x00724F40  _DynamicVectorClass_PBVToolTip::QueryInterface  this=DynamicVector  sig=csp ====
DynamicVector *__thiscall ToolTipManager_7_::QueryInterface(_DWORD *Block, char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x724f43*/
  *Block = &vt_VectorClass_ToolTip_const; /*0x724f46*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x724f50*/
  {
    __3_YAXPAX_Z(v3); /*0x724f58*/
    *(Block + 1) = 0; /*0x724f60*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x724f6b*/
  *(Block + 2) = 0; /*0x724f71*/
  if ( (a2 & 1) != 0 ) /*0x724f78*/
    __3_YAXPAX_Z(Block); /*0x724f7b*/
  return (DynamicVector *)Block; /*0x724f85*/
}


// ==== 0x00724F90  ObjectClass::??0Iostream_init_QAE_XZ_6  this=ObjectClass  sig=csp ====
Iostream_init *__thiscall __0Iostream_init_QAE_XZ_6(Iostream_init *this)
{
  return this; /*0x724f92*/
}


// ==== 0x00724FA0  CommandClass::executeAction  this=ObjectClass  sig=csp ====
bool __thiscall CommandClass::executeAction(_DWORD *this, ObjectClass *aP1)
{
  _DWORD *v2; // eax

  v2 = (_DWORD *)this->uniqueId; /*0x724fa0*/
  return v2 && *v2 == *(_DWORD *)aP1->__pad_0; /*0x724fb3*/
}


// ==== 0x00724FC0  CommandClass::BinarySearchAction  this=ObjectClass  sig=csp ====
size_t __thiscall CommandClass::BinarySearchAction(char **this, ObjectClass *aP1)
{
  size_t result; // eax
  ObjectClass *v4; // edi
  ObjectClass *v5; // ebx
  int v6; // ecx
  ObjectClass *v7; // esi

  result = (size_t)this->vtable2; /*0x724fc3*/
  if ( result ) /*0x724fc8*/
  {
    if ( !this->vtable4 ) /*0x724fce*/
    {
      qsort(*this, result, 8u, CompareFunc2Int); /*0x724fe0*/
      this->vtable2 = 0; /*0x724fe8*/
      this->vtable4 = 1; /*0x724fef*/
    }
    v4 = (ObjectClass *)*this; /*0x724ff9*/
    v5 = *(ObjectClass **)aP1->__pad_0; /*0x724ffb*/
    v6 = (int)this->vtable2; /*0x724ffd*/
    if ( v6 <= 0 ) /*0x725002*/
      return 0; /*0x72502e*/
    while ( 1 ) /*0x72500b*/
    {
      v7 = *(ObjectClass **)&v4->__pad_0[8 * (v6 / 2)]; /*0x72500b*/
      if ( v7 <= v5 ) /*0x725013*/
      {
        if ( v7 == v5 ) /*0x725019*/
          return (size_t)v4 + 8 * (v6 / 2); /*0x725033*/
        v4 = (ObjectClass *)((char *)v4 + 8 * (v6 / 2) + 8); /*0x72501b*/
        v6 += -1 - v6 / 2; /*0x725023*/
      }
      else
      {
        v6 /= 2; /*0x725015*/
      }
      if ( v6 <= 0 ) /*0x725027*/
        return 0; /*0x725027*/
    }
  }
  return result; /*0x724fca*/
}


// ==== 0x00725040  CompareFunc2Int  this=-  sig=ida-proto ====
int __cdecl CompareFunc2Int(_DWORD *a1, _DWORD *a2)
{
  if ( *a1 == *a2 )
    return 0; /*0x725050*/
  else
    return *a1 >= *a2 ? 1 : -1;
}


// ==== 0x00725070  UI_Remove  this=ObjectClass  sig=csp ====
int __fastcall sub_725070(int a1, int a2, unsigned int *a3)
{
  int v3; // esi
  unsigned int v4; // ebx
  unsigned int v5; // edi

  v3 = a2; /*0x725075*/
  if ( a2 <= 0 ) /*0x725077*/
    return 0; /*0x7250a9*/
  v4 = *a3; /*0x72507d*/
  while ( 1 ) /*0x725086*/
  {
    v5 = *(_DWORD *)(a1 + 8 * (v3 / 2)); /*0x725086*/
    if ( v5 <= v4 ) /*0x72508e*/
      break; /*0x72508e*/
    v3 /= 2; /*0x725090*/
LABEL_7:
    if ( v3 <= 0 ) /*0x7250a2*/
      return 0; /*0x7250a2*/
  }
  if ( v5 != v4 ) /*0x725094*/
  {
    a1 += 8 * (v3 / 2) + 8; /*0x725096*/
    v3 += -1 - v3 / 2; /*0x72509e*/
    goto LABEL_7; /*0x72509e*/
  }
  return a1 + 8 * (v3 / 2); /*0x7250a4*/
}


// ==== 0x007250C0  sub_7250C0  this=-  sig=ida-proto ====
void sub_7250C0()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x7250cc*/
  MEMORY[0xB0F638] = Math::Sqrt(v0 + v0); /*0x7250de*/
}


// ==== 0x007250F0  sub_7250F0  this=-  sig=ida-proto ====
void sub_7250F0()
{
  MEMORY[0xB0F748] = MEMORY[0xB0F638] / 60.0; /*0x7250fc*/
}


// ==== 0x00725110  sub_725110  this=-  sig=ida-proto ====
void sub_725110()
{
  MEMORY[0xB0F6E8] = 1.0 / MEMORY[0xB0F748]; /*0x72511c*/
}


// ==== 0x00725130  sub_725130  this=-  sig=ida-proto ====
void sub_725130()
{
  MEMORY[0xB0F6E0] = 0.0174532925199433 * 45.0; /*0x72513c*/
}


// ==== 0x00725150  sub_725150  this=-  sig=ida-proto ====
void sub_725150()
{
  MEMORY[0xB0F688] = 0.0174532925199433 * 60.0; /*0x72515c*/
}


// ==== 0x00725170  sub_725170  this=-  sig=ida-proto ====
void sub_725170()
{
  MEMORY[0xB0F5D0] = 0.0174532925199433 * 90.0; /*0x72517c*/
}


// ==== 0x00725190  sub_725190  this=-  sig=ida-proto ====
__int64 sub_725190()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(MEMORY[0xB0F5D0] - MEMORY[0xB0F688]); /*0x7251a2*/
  result = Math::RoundToInt(v0 * MEMORY[0xB0F638] * 0.5); /*0x7251b6*/
  MEMORY[0xB0F750] = result; /*0x7251bb*/
  return result; /*0x7251c0*/
}


// ==== 0x007251D0  sub_7251D0  this=-  sig=ida-proto ====
void sub_7251D0()
{
  MEMORY[0xB0F690] = Math::ArcTan((double)MEMORY[0xB0F750] * 0.00390625); /*0x7251e7*/
}


// ==== 0x00725200  sub_725200  this=-  sig=ida-proto ====
void sub_725200()
{
  MEMORY[0xB0F6C0] = Math::ArcTan((double)(2 * MEMORY[0xB0F750]) / MEMORY[0xB0F638]); /*0x725222*/
}


// ==== 0x00725230  sub_725230  this=-  sig=ida-proto ====
__int64 sub_725230()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * MEMORY[0xB0F750]) + 0.5); /*0x72524b*/
  MEMORY[0xB0F744] = result; /*0x725250*/
  return result; /*0x725256*/
}


// ==== 0x00725260  sub_725260  this=-  sig=ida-proto ====
int sub_725260()
{
  MEMORY[0xB0F630] = 0; /*0x725262*/
  MEMORY[0xB0F632] = 0; /*0x725268*/
  return 0; /*0x72526e*/
}


// ==== 0x00725270  sub_725270  this=-  sig=ida-proto ====
int sub_725270()
{
  MEMORY[0xB0F6B0] = 0; /*0x725272*/
  MEMORY[0xB0F6B4] = 0; /*0x725277*/
  MEMORY[0xB0F6B8] = 0; /*0x72527c*/
  return 0; /*0x725281*/
}


// ==== 0x00725290  sub_725290  this=-  sig=ida-proto ====
int sub_725290()
{
  MEMORY[0xB0F740] = 0; /*0x725295*/
  MEMORY[0xB0F738] = 128; /*0x72529f*/
  MEMORY[0xB0F73C] = 128; /*0x7252a4*/
  return 128; /*0x7252a9*/
}


// ==== 0x007252B0  sub_7252B0  this=-  sig=ida-proto ====
int sub_7252B0()
{
  MEMORY[0xB0F608] = 0; /*0x7252b2*/
  MEMORY[0xB0F60C] = 0; /*0x7252b7*/
  MEMORY[0xB0F610] = 0; /*0x7252bc*/
  MEMORY[0xB0F614] = 0; /*0x7252c1*/
  return 0; /*0x7252c6*/
}


// ==== 0x007252D0  sub_7252D0  this=-  sig=ida-proto ====
int sub_7252D0()
{
  MEMORY[0xB0F724] = 0; /*0x7252d7*/
  MEMORY[0xB0F728] = 0; /*0x7252dc*/
  MEMORY[0xB0F72C] = 1; /*0x7252e1*/
  MEMORY[0xB0F72D] = 0; /*0x7252e8*/
  MEMORY[0xB0F720] = (int)&vt_DynamicVectorClass_AbstractClass; /*0x7252ed*/
  MEMORY[0xB0F734] = 10; /*0x7252f7*/
  MEMORY[0xB0F730] = 0; /*0x725301*/
  return atexit(sub_725310); /*0x72530c*/
}


// ==== 0x00725310  sub_725310  this=-  sig=ida-proto ====
void __cdecl sub_725310()
{
  MEMORY[0xB0F720] = (int)&vt_VectorClass_AbstractClass; /*0x725318*/
  if ( MEMORY[0xB0F724] && MEMORY[0xB0F72D] ) /*0x72532c*/
  {
    __3_YAXPAX_Z(MEMORY[0xB0F724]); /*0x72532f*/
    MEMORY[0xB0F724] = 0; /*0x725337*/
  }
  MEMORY[0xB0F72D] = 0; /*0x72533d*/
  MEMORY[0xB0F728] = 0; /*0x725343*/
}


// ==== 0x00725350  sub_725350  this=-  sig=ida-proto ====
int sub_725350()
{
  MEMORY[0xB0F674] = 0; /*0x725357*/
  MEMORY[0xB0F678] = 0; /*0x72535c*/
  MEMORY[0xB0F67C] = 1; /*0x725361*/
  MEMORY[0xB0F67D] = 0; /*0x725368*/
  MEMORY[0xB0F670] = (int)&vt_DynamicVectorClass_AbstractClass; /*0x72536d*/
  MEMORY[0xB0F684] = 10; /*0x725377*/
  MEMORY[0xB0F680] = 0; /*0x725381*/
  return atexit(sub_725390); /*0x72538c*/
}


// ==== 0x00725390  sub_725390  this=-  sig=ida-proto ====
void __cdecl sub_725390()
{
  MEMORY[0xB0F670] = (int)&vt_VectorClass_AbstractClass; /*0x725398*/
  if ( MEMORY[0xB0F674] && MEMORY[0xB0F67D] ) /*0x7253ac*/
  {
    __3_YAXPAX_Z(MEMORY[0xB0F674]); /*0x7253af*/
    MEMORY[0xB0F674] = 0; /*0x7253b7*/
  }
  MEMORY[0xB0F67D] = 0; /*0x7253bd*/
  MEMORY[0xB0F678] = 0; /*0x7253c3*/
}


// ==== 0x007253D0  sub_7253D0  this=-  sig=ida-proto ====
int sub_7253D0()
{
  MEMORY[0xB0F61C] = 0; /*0x7253d7*/
  MEMORY[0xB0F620] = 0; /*0x7253dc*/
  MEMORY[0xB0F624] = 1; /*0x7253e1*/
  MEMORY[0xB0F625] = 0; /*0x7253e8*/
  MEMORY[0xB0F618] = (int)&vt_DynamicVectorClass_AbstractClass; /*0x7253ed*/
  MEMORY[0xB0F62C] = 10; /*0x7253f7*/
  MEMORY[0xB0F628] = 0; /*0x725401*/
  return atexit(sub_725410); /*0x72540c*/
}


// ==== 0x00725410  sub_725410  this=-  sig=ida-proto ====
void __cdecl sub_725410()
{
  MEMORY[0xB0F618] = (int)&vt_VectorClass_AbstractClass; /*0x725418*/
  if ( MEMORY[0xB0F61C] && MEMORY[0xB0F625] ) /*0x72542c*/
  {
    __3_YAXPAX_Z(MEMORY[0xB0F61C]); /*0x72542f*/
    MEMORY[0xB0F61C] = 0; /*0x725437*/
  }
  MEMORY[0xB0F625] = 0; /*0x72543d*/
  MEMORY[0xB0F620] = 0; /*0x725443*/
}


// ==== 0x00725450  sub_725450  this=-  sig=ida-proto ====
int sub_725450()
{
  MEMORY[0xB0F70C] = 0; /*0x725457*/
  MEMORY[0xB0F710] = 0; /*0x72545c*/
  MEMORY[0xB0F714] = 1; /*0x725461*/
  MEMORY[0xB0F715] = 0; /*0x725468*/
  MEMORY[0xB0F708] = (int)&vt_DynamicVectorClass_AbstractClass; /*0x72546d*/
  MEMORY[0xB0F71C] = 10; /*0x725477*/
  MEMORY[0xB0F718] = 0; /*0x725481*/
  return atexit(sub_725490); /*0x72548c*/
}


// ==== 0x00725490  sub_725490  this=-  sig=ida-proto ====
void __cdecl sub_725490()
{
  MEMORY[0xB0F708] = (int)&vt_VectorClass_AbstractClass; /*0x725498*/
  if ( MEMORY[0xB0F70C] && MEMORY[0xB0F715] ) /*0x7254ac*/
  {
    __3_YAXPAX_Z(MEMORY[0xB0F70C]); /*0x7254af*/
    MEMORY[0xB0F70C] = 0; /*0x7254b7*/
  }
  MEMORY[0xB0F715] = 0; /*0x7254bd*/
  MEMORY[0xB0F710] = 0; /*0x7254c3*/
}


// ==== 0x007254D0  sub_7254D0  this=-  sig=ida-proto ====
int sub_7254D0()
{
  MEMORY[0xB0F5BC] = 0; /*0x7254d7*/
  MEMORY[0xB0F5C0] = 0; /*0x7254dc*/
  MEMORY[0xB0F5C4] = 1; /*0x7254e1*/
  MEMORY[0xB0F5C5] = 0; /*0x7254e8*/
  MEMORY[0xB0F5B8] = (int)&vt_DynamicVectorClass_AbstractClass; /*0x7254ed*/
  MEMORY[0xB0F5CC] = 10; /*0x7254f7*/
  MEMORY[0xB0F5C8] = 0; /*0x725501*/
  return atexit(sub_725510); /*0x72550c*/
}


// ==== 0x00725510  sub_725510  this=-  sig=ida-proto ====
void __cdecl sub_725510()
{
  MEMORY[0xB0F5B8] = (int)&vt_VectorClass_AbstractClass; /*0x725518*/
  if ( MEMORY[0xB0F5BC] && MEMORY[0xB0F5C5] ) /*0x72552c*/
  {
    __3_YAXPAX_Z(MEMORY[0xB0F5BC]); /*0x72552f*/
    MEMORY[0xB0F5BC] = 0; /*0x725537*/
  }
  MEMORY[0xB0F5C5] = 0; /*0x72553d*/
  MEMORY[0xB0F5C0] = 0; /*0x725543*/
}


// ==== 0x00725550  sub_725550  this=-  sig=ida-proto ====
int sub_725550()
{
  MEMORY[0xB0F644] = 0; /*0x725557*/
  MEMORY[0xB0F648] = 0; /*0x72555c*/
  MEMORY[0xB0F64C] = 1; /*0x725561*/
  MEMORY[0xB0F64D] = 0; /*0x725568*/
  MEMORY[0xB0F640] = (int)&vt_DynamicVectorClass_AbstractClass; /*0x72556d*/
  MEMORY[0xB0F654] = 10; /*0x725577*/
  MEMORY[0xB0F650] = 0; /*0x725581*/
  return atexit(sub_725590); /*0x72558c*/
}


// ==== 0x00725590  sub_725590  this=-  sig=ida-proto ====
void __cdecl sub_725590()
{
  MEMORY[0xB0F640] = (int)&vt_VectorClass_AbstractClass; /*0x725598*/
  if ( MEMORY[0xB0F644] && MEMORY[0xB0F64D] ) /*0x7255ac*/
  {
    __3_YAXPAX_Z(MEMORY[0xB0F644]); /*0x7255af*/
    MEMORY[0xB0F644] = 0; /*0x7255b7*/
  }
  MEMORY[0xB0F64D] = 0; /*0x7255bd*/
  MEMORY[0xB0F648] = 0; /*0x7255c3*/
}


// ==== 0x007255D0  sub_7255D0  this=-  sig=ida-proto ====
int sub_7255D0()
{
  MEMORY[0xB0F65C] = 0; /*0x7255d7*/
  MEMORY[0xB0F660] = 0; /*0x7255dc*/
  MEMORY[0xB0F664] = 1; /*0x7255e1*/
  MEMORY[0xB0F665] = 0; /*0x7255e8*/
  MEMORY[0xB0F658] = (int)&vt_DynamicVectorClass_AbstractClass; /*0x7255ed*/
  MEMORY[0xB0F66C] = 10; /*0x7255f7*/
  MEMORY[0xB0F668] = 0; /*0x725601*/
  return atexit(sub_725610); /*0x72560c*/
}


// ==== 0x00725610  sub_725610  this=-  sig=ida-proto ====
void __cdecl sub_725610()
{
  MEMORY[0xB0F658] = (int)&vt_VectorClass_AbstractClass; /*0x725618*/
  if ( MEMORY[0xB0F65C] && MEMORY[0xB0F665] ) /*0x72562c*/
  {
    __3_YAXPAX_Z(MEMORY[0xB0F65C]); /*0x72562f*/
    MEMORY[0xB0F65C] = 0; /*0x725637*/
  }
  MEMORY[0xB0F665] = 0; /*0x72563d*/
  MEMORY[0xB0F660] = 0; /*0x725643*/
}


// ==== 0x00725650  sub_725650  this=-  sig=ida-proto ====
int sub_725650()
{
  MEMORY[0xB0F5F4] = 0; /*0x725657*/
  MEMORY[0xB0F5F8] = 0; /*0x72565c*/
  MEMORY[0xB0F5FC] = 1; /*0x725661*/
  MEMORY[0xB0F5FD] = 0; /*0x725668*/
  MEMORY[0xB0F5F0] = (int)&vt_DynamicVectorClass_AbstractClass; /*0x72566d*/
  MEMORY[0xB0F604] = 10; /*0x725677*/
  MEMORY[0xB0F600] = 0; /*0x725681*/
  return atexit(sub_725690); /*0x72568c*/
}


// ==== 0x00725690  sub_725690  this=-  sig=ida-proto ====
void __cdecl sub_725690()
{
  MEMORY[0xB0F5F0] = (int)&vt_VectorClass_AbstractClass; /*0x725698*/
  if ( MEMORY[0xB0F5F4] && MEMORY[0xB0F5FD] ) /*0x7256ac*/
  {
    __3_YAXPAX_Z(MEMORY[0xB0F5F4]); /*0x7256af*/
    MEMORY[0xB0F5F4] = 0; /*0x7256b7*/
  }
  MEMORY[0xB0F5FD] = 0; /*0x7256bd*/
  MEMORY[0xB0F5F8] = 0; /*0x7256c3*/
}


// ==== 0x007256D0  sub_7256D0  this=-  sig=ida-proto ====
int sub_7256D0()
{
  MEMORY[0xB0F5DC] = 0; /*0x7256d7*/
  MEMORY[0xB0F5E0] = 0; /*0x7256dc*/
  MEMORY[0xB0F5E4] = 1; /*0x7256e1*/
  MEMORY[0xB0F5E5] = 0; /*0x7256e8*/
  MEMORY[0xB0F5D8] = (int)&vt_DynamicVectorClass_AbstractClass; /*0x7256ed*/
  MEMORY[0xB0F5EC] = 10; /*0x7256f7*/
  MEMORY[0xB0F5E8] = 0; /*0x725701*/
  return atexit(sub_725710); /*0x72570c*/
}


// ==== 0x00725710  sub_725710  this=-  sig=ida-proto ====
void __cdecl sub_725710()
{
  MEMORY[0xB0F5D8] = (int)&vt_VectorClass_AbstractClass; /*0x725718*/
  if ( MEMORY[0xB0F5DC] && MEMORY[0xB0F5E5] ) /*0x72572c*/
  {
    __3_YAXPAX_Z(MEMORY[0xB0F5DC]); /*0x72572f*/
    MEMORY[0xB0F5DC] = 0; /*0x725737*/
  }
  MEMORY[0xB0F5E5] = 0; /*0x72573d*/
  MEMORY[0xB0F5E0] = 0; /*0x725743*/
}


// ==== 0x00725750  sub_725750  this=-  sig=ida-proto ====
int sub_725750()
{
  MEMORY[0xB0F6CC] = 0; /*0x725757*/
  MEMORY[0xB0F6D0] = 0; /*0x72575c*/
  MEMORY[0xB0F6D4] = 1; /*0x725761*/
  MEMORY[0xB0F6D5] = 0; /*0x725768*/
  MEMORY[0xB0F6C8] = (int)&vt_DynamicVectorClass_AbstractClass; /*0x72576d*/
  MEMORY[0xB0F6DC] = 10; /*0x725777*/
  MEMORY[0xB0F6D8] = 0; /*0x725781*/
  return atexit(sub_725790); /*0x72578c*/
}


// ==== 0x00725790  sub_725790  this=-  sig=ida-proto ====
void __cdecl sub_725790()
{
  MEMORY[0xB0F6C8] = (int)&vt_VectorClass_AbstractClass; /*0x725798*/
  if ( MEMORY[0xB0F6CC] && MEMORY[0xB0F6D5] ) /*0x7257ac*/
  {
    __3_YAXPAX_Z(MEMORY[0xB0F6CC]); /*0x7257af*/
    MEMORY[0xB0F6CC] = 0; /*0x7257b7*/
  }
  MEMORY[0xB0F6D5] = 0; /*0x7257bd*/
  MEMORY[0xB0F6D0] = 0; /*0x7257c3*/
}


// ==== 0x007257D0  sub_7257D0  this=-  sig=ida-proto ====
int sub_7257D0()
{
  MEMORY[0xB0F6F4] = 0; /*0x7257d7*/
  MEMORY[0xB0F6F8] = 0; /*0x7257dc*/
  MEMORY[0xB0F6FC] = 1; /*0x7257e1*/
  MEMORY[0xB0F6FD] = 0; /*0x7257e8*/
  MEMORY[0xB0F6F0] = (int)&vt_DynamicVectorClass_AbstractClass; /*0x7257ed*/
  MEMORY[0xB0F704] = 10; /*0x7257f7*/
  MEMORY[0xB0F700] = 0; /*0x725801*/
  return atexit(sub_725810); /*0x72580c*/
}


// ==== 0x00725810  sub_725810  this=-  sig=ida-proto ====
void __cdecl sub_725810()
{
  MEMORY[0xB0F6F0] = (int)&vt_VectorClass_AbstractClass; /*0x725818*/
  if ( MEMORY[0xB0F6F4] && MEMORY[0xB0F6FD] ) /*0x72582c*/
  {
    __3_YAXPAX_Z(MEMORY[0xB0F6F4]); /*0x72582f*/
    MEMORY[0xB0F6F4] = 0; /*0x725837*/
  }
  MEMORY[0xB0F6FD] = 0; /*0x72583d*/
  MEMORY[0xB0F6F8] = 0; /*0x725843*/
}


// ==== 0x00725850  sub_725850  this=-  sig=ida-proto ====
int sub_725850()
{
  MEMORY[0xB0F69C] = 0; /*0x725857*/
  MEMORY[0xB0F6A0] = 0; /*0x72585c*/
  MEMORY[0xB0F6A4] = 1; /*0x725861*/
  MEMORY[0xB0F6A5] = 0; /*0x725868*/
  MEMORY[0xB0F698] = (int)&vt_DynamicVectorClass_AbstractClass; /*0x72586d*/
  MEMORY[0xB0F6AC] = 10; /*0x725877*/
  MEMORY[0xB0F6A8] = 0; /*0x725881*/
  return atexit(sub_725890); /*0x72588c*/
}


// ==== 0x00725890  sub_725890  this=-  sig=ida-proto ====
void __cdecl sub_725890()
{
  MEMORY[0xB0F698] = (int)&vt_VectorClass_AbstractClass; /*0x725898*/
  if ( MEMORY[0xB0F69C] && MEMORY[0xB0F6A5] ) /*0x7258ac*/
  {
    __3_YAXPAX_Z(MEMORY[0xB0F69C]); /*0x7258af*/
    MEMORY[0xB0F69C] = 0; /*0x7258b7*/
  }
  MEMORY[0xB0F6A5] = 0; /*0x7258bd*/
  MEMORY[0xB0F6A0] = 0; /*0x7258c3*/
}


// ==== 0x007258D0  AbstractClass::AnnounceExpiredPointer  this=AbstractClass  sig=csp ====
void __fastcall AbstractClass::AnnounceExpiredPointer(AbstractClass *aP0, AbstractClass *aP1)
{
  int v4; // ebx
  int v5; // ebp
  int k; // ebp
  int i; // ebx
  int j; // ebx
  int m; // ebx
  int kk; // ebx
  int jj; // ebx
  int n; // ebx
  int mm; // ebx
  int nn; // ebx
  int ii; // ebx
  int i1; // ebx

  v4 = (*(int (__thiscall **)(AbstractClass *))(*(_DWORD *)aP0->__pad_0 + 44))(aP0); /*0x7258de*/
  v5 = 0; /*0x7258e9*/
  if ( *(AbstractClass **)&stru_87C374.__pad_14B0[12648] == aP0 ) /*0x7258e7*/
    *(_DWORD *)&stru_87C374.__pad_14B0[12648] = 0; /*0x7258eb*/
  if ( *(AbstractClass **)&stru_87C374.__pad_14B0[12652] == aP0 ) /*0x7258fb*/
  {
    *(_DWORD *)&stru_87C374.__pad_14B0[12652] = 0; /*0x725903*/
    Mouse::SetBounds((int)&stru_87C374.__pad_14B0[8132], 0); /*0x725909*/
  }
  switch ( v4 ) /*0x725911*/
  {
    case 24: /*0x725911*/
      if ( aP0 == *(AbstractClass **)&HouseClass_Player.__pad_5568[23236] ) /*0x72591d*/
        *(_DWORD *)&HouseClass_Player.__pad_5568[23236] = 0; /*0x72591f*/
      break;
    case 13: /*0x725911*/
      for ( i = 0; i < *(int *)&stru_B05488.__pad_579C[19124]; ++i ) /*0x7259e8*/
        (*(void (__thiscall **)(_DWORD, AbstractClass *, AbstractClass *))(**(_DWORD **)(*(_DWORD *)&stru_B05488.__pad_579C[19112] /*0x7259f7*/
                                                                                       + 4 * i)
                                                                         + 40))(
          *(_DWORD *)(*(_DWORD *)&stru_B05488.__pad_579C[19112] + 4 * i),
          aP0,
          aP1);
      goto LABEL_20; /*0x725a02*/
    case 4: /*0x725911*/
      for ( j = 0; j < *(int *)&stru_B05488.__pad_579C[18852]; ++j ) /*0x725a28*/
        (*(void (__thiscall **)(_DWORD, AbstractClass *, AbstractClass *))(**(_DWORD **)(*(_DWORD *)&stru_B05488.__pad_579C[18840] /*0x725a3a*/
                                                                                       + 4 * j)
                                                                         + 40))(
          *(_DWORD *)(*(_DWORD *)&stru_B05488.__pad_579C[18840] + 4 * j),
          aP0,
          aP1);
      return; /*0x725a45*/
  }
  if ( aP0 && (aP0->abstractFlags & 2) != 0 ) /*0x725938*/
  {
    if ( *(int *)&stru_B05488.__pad_579C[19212] > 0 ) /*0x725945*/
    {
      do /*0x72595f*/
      {
        (*(void (__thiscall **)(_DWORD, AbstractClass *, AbstractClass *))(**(_DWORD **)(*(_DWORD *)&stru_B05488.__pad_579C[19200] /*0x725954*/
                                                                                       + 4 * v5)
                                                                         + 40))(
          *(_DWORD *)(*(_DWORD *)&stru_B05488.__pad_579C[19200] + 4 * v5),
          aP0,
          aP1);
        ++v5; /*0x72595c*/
      }
      while ( v5 < *(int *)&stru_B05488.__pad_579C[19212] ); /*0x72595f*/
    }
    AbstractClass::processDetection((int *)&stru_87C374.__pad_14B0[7604], aP0); /*0x725967*/
    AbstractClass::processStateTransition((int *)&g_MissionQueueFrame, aP0); /*0x725972*/
    for ( k = *(_DWORD *)&stru_89E138.__pad_14B0[3120] - 1; k >= 0; --k ) /*0x725981*/
      DiskLaserClass::PointerGotInvalid(*(_DWORD **)(*(_DWORD *)&stru_89E138.__pad_14B0[3108] + 4 * k), aP0); /*0x72598d*/
    if ( v4 == 15 || v4 == 1 || v4 == 2 ) /*0x7259a2*/
      nullsub_3(aP0); /*0x7259aa*/
    AbstractClass::processRadarEvent(aP0); /*0x7259b1*/
    if ( *(_DWORD *)&stru_87C374.__pad_579C[22548] ) /*0x7259be*/
      (*(void (__thiscall **)(_DWORD, AbstractClass *, int))(**(_DWORD **)&stru_87C374.__pad_579C[22548] + 40))( /*0x7259c5*/
        *(_DWORD *)&stru_87C374.__pad_579C[22548],
        aP0,
        1);
LABEL_20:
    Array::RemoveItemByValue(aP0, (int)aP1); /*0x7259c8*/
    return; /*0x7259d9*/
  }
  if ( __RTDynamicCast( /*0x725a5a*/
         (IUnknown *)aP0,
         0,
         &AbstractClass `RTTI Type Descriptor',
         &AbstractTypeClass `RTTI Type Descriptor',
         0) )
  {
    for ( m = 0; m < *(int *)&stru_B05488.__pad_579C[19036]; ++m ) /*0x725a6f*/
      (*(void (__thiscall **)(_DWORD, AbstractClass *, AbstractClass *))(**(_DWORD **)(*(_DWORD *)&stru_B05488.__pad_579C[19024] /*0x725a7d*/
                                                                                     + 4 * m)
                                                                       + 40))(
        *(_DWORD *)(*(_DWORD *)&stru_B05488.__pad_579C[19024] + 4 * m),
        aP0,
        aP1);
    InitInterfaceStubsCOM(*(RulesClass **)&stru_87C374.__pad_579C[22224]); /*0x725a92*/
  }
  else
  {
    switch ( v4 ) /*0x725ab1*/
    {
      case 12: /*0x725ab1*/
        for ( n = 0; n < *(int *)&stru_B05488.__pad_579C[18988]; ++n ) /*0x725b34*/
          (*(void (__thiscall **)(_DWORD, AbstractClass *, AbstractClass *))(**(_DWORD **)(*(_DWORD *)&stru_B05488.__pad_579C[18976] /*0x725b42*/
                                                                                         + 4 * n)
                                                                           + 40))(
            *(_DWORD *)(*(_DWORD *)&stru_B05488.__pad_579C[18976] + 4 * n),
            aP0,
            aP1);
        MapClass::RemoveTriggerRef((int *)&stru_87C374.__pad_14B0[8132], aP0, 1); /*0x725b57*/
        break; /*0x725b61*/
      case 34: /*0x725ab1*/
        for ( ii = 0; ii < *(int *)&stru_B05488.__pad_579C[18884]; ++ii ) /*0x725bc3*/
          (*(void (__thiscall **)(_DWORD, AbstractClass *, AbstractClass *))(**(_DWORD **)(*(_DWORD *)&stru_B05488.__pad_579C[18872] /*0x725bd1*/
                                                                                         + 4 * ii)
                                                                           + 40))(
            *(_DWORD *)(*(_DWORD *)&stru_B05488.__pad_579C[18872] + 4 * ii),
            aP0,
            aP1);
        break; /*0x725bdc*/
      case 38: /*0x725ab1*/
        for ( jj = 0; jj < *(int *)&stru_B05488.__pad_579C[19188]; ++jj ) /*0x725b05*/
          (*(void (__thiscall **)(_DWORD, AbstractClass *, AbstractClass *))(**(_DWORD **)(*(_DWORD *)&stru_B05488.__pad_579C[19176] /*0x725b18*/
                                                                                         + 4 * jj)
                                                                           + 40))(
            *(_DWORD *)(*(_DWORD *)&stru_B05488.__pad_579C[19176] + 4 * jj),
            aP0,
            aP1);
        break; /*0x725b23*/
      case 44: /*0x725ab1*/
        for ( kk = 0; kk < *(int *)&stru_B05488.__pad_579C[18948]; ++kk ) /*0x725ac1*/
          (*(void (__thiscall **)(_DWORD, AbstractClass *, AbstractClass *))(**(_DWORD **)(*(_DWORD *)&stru_B05488.__pad_579C[18936] /*0x725ad0*/
                                                                                         + 4 * kk)
                                                                           + 40))(
            *(_DWORD *)(*(_DWORD *)&stru_B05488.__pad_579C[18936] + 4 * kk),
            aP0,
            aP1);
        MapClass::RemoveTriggerRef((int *)&stru_87C374.__pad_14B0[8132], aP0, 1); /*0x725ae5*/
        Array::RemoveItemByValue(aP0, (int)aP1); /*0x725af1*/
        break; /*0x725afb*/
      case 47: /*0x725ab1*/
      case 48: /*0x725ab1*/
        for ( mm = 0; mm < *(int *)&stru_B05488.__pad_579C[19012]; ++mm ) /*0x725b6b*/
          (*(void (__thiscall **)(_DWORD, AbstractClass *, AbstractClass *))(**(_DWORD **)(*(_DWORD *)&stru_B05488.__pad_579C[19000] /*0x725b7d*/
                                                                                         + 4 * mm)
                                                                           + 40))(
            *(_DWORD *)(*(_DWORD *)&stru_B05488.__pad_579C[19000] + 4 * mm),
            aP0,
            aP1);
        break; /*0x725b88*/
      case 51: /*0x725ab1*/
        for ( nn = 0; nn < *(int *)&stru_B05488.__pad_579C[18908]; ++nn ) /*0x725b99*/
          (*(void (__thiscall **)(_DWORD, AbstractClass *, AbstractClass *))(**(_DWORD **)(*(_DWORD *)&stru_B05488.__pad_579C[18896] /*0x725ba7*/
                                                                                         + 4 * nn)
                                                                           + 40))(
            *(_DWORD *)(*(_DWORD *)&stru_B05488.__pad_579C[18896] + 4 * nn),
            aP0,
            aP1);
        break; /*0x725bb2*/
      case 60: /*0x725ab1*/
        for ( i1 = 0; i1 < *(int *)&stru_B05488.__pad_579C[19164]; ++i1 ) /*0x725bed*/
          (*(void (__thiscall **)(_DWORD, AbstractClass *, AbstractClass *))(**(_DWORD **)(*(_DWORD *)&stru_B05488.__pad_579C[19152] /*0x725bfb*/
                                                                                         + 4 * i1)
                                                                           + 40))(
            *(_DWORD *)(*(_DWORD *)&stru_B05488.__pad_579C[19152] + 4 * i1),
            aP0,
            aP1);
        break; /*0x725c06*/
      default:
        return;
    }
  }
}


// ==== 0x00725C70  ObjectClass::ProcessExpiredPointers  this=ObjectClass  sig=csp ====
int sub_725C70()
{
  int result; // eax
  int v1; // esi
  int v2; // eax
  int v3; // eax
  int v4; // eax
  int v5; // eax
  int v6; // eax
  _BYTE *v7; // [esp+8h] [ebp-4h] BYREF

  result = MEMORY[0xB0F6A8]; /*0x725c71*/
  v1 = 0; /*0x725c77*/
  while ( v1 < MEMORY[0xB0F6A8] ) /*0x725c7b*/
  {
    v7 = (_BYTE *)*((_DWORD *)MEMORY[0xB0F69C] + v1); /*0x725c89*/
    result = (*(int (**)(void))(*(_DWORD *)v7 + 68))(); /*0x725c8f*/
    if ( (_BYTE)result ) /*0x725c94*/
    {
      while ( 1 ) /*0x725caa*/
      {
        v2 = (*(int (__thiscall **)(int *, _BYTE **))(MEMORY[0xB0F698] + 16))(&MEMORY[0xB0F698], &v7); /*0x725caa*/
        if ( v2 == -1 || v2 >= MEMORY[0xB0F6A8] ) /*0x725cba*/
          break; /*0x725cba*/
        if ( v2 < --MEMORY[0xB0F6A8] ) /*0x725cc5*/
        {
          do /*0x725cdd*/
          {
            ++v2; /*0x725ccd*/
            *((_DWORD *)MEMORY[0xB0F69C] + v2 - 1) = *((_DWORD *)MEMORY[0xB0F69C] + v2); /*0x725cd1*/
          }
          while ( v2 < MEMORY[0xB0F6A8] ); /*0x725cdd*/
        }
      }
      result = (*(int (__stdcall **)(_BYTE *))(*(_DWORD *)v7 + 8))(v7); /*0x725ce8*/
      if ( result ) /*0x725ced*/
      {
        v3 = __RTtypeid(v7); /*0x725cf8*/
        if ( __8type_info_QBEHABV0__Z(v3) /*0x725d61*/
          || (v4 = __RTtypeid(v7), __8type_info_QBEHABV0__Z(v4))
          || (v5 = __RTtypeid(v7), __8type_info_QBEHABV0__Z(v5))
          || (v6 = __RTtypeid(v7), (result = __8type_info_QBEHABV0__Z(v6)) != 0) )
        {
          result = (int)v7; /*0x725d63*/
          v7[144] = 1; /*0x725d67*/
        }
        if ( v7 ) /*0x725d74*/
          result = (*(int (__thiscall **)(_BYTE *, int))(*(_DWORD *)v7 + 32))(v7, 1); /*0x725d7a*/
      }
    }
    else
    {
      ++v1; /*0x725d7f*/
    }
  }
  return result; /*0x725d8c*/
}


// ==== 0x00725D90  sub_725D90  this=-  sig=ida-proto ====
void sub_725D90()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x725d9c*/
  MEMORY[0xB0F778] = Math::Sqrt(v0 + v0); /*0x725dae*/
}


// ==== 0x00725DC0  sub_725DC0  this=-  sig=ida-proto ====
void sub_725DC0()
{
  MEMORY[0xB0F7C8] = MEMORY[0xB0F778] / 60.0; /*0x725dcc*/
}


// ==== 0x00725DE0  sub_725DE0  this=-  sig=ida-proto ====
void sub_725DE0()
{
  MEMORY[0xB0F7B0] = 1.0 / MEMORY[0xB0F7C8]; /*0x725dec*/
}


// ==== 0x00725E00  sub_725E00  this=-  sig=ida-proto ====
void sub_725E00()
{
  MEMORY[0xB0F7A8] = 0.0174532925199433 * 45.0; /*0x725e0c*/
}


// ==== 0x00725E20  sub_725E20  this=-  sig=ida-proto ====
void sub_725E20()
{
  MEMORY[0xB0F780] = 0.0174532925199433 * 60.0; /*0x725e2c*/
}


// ==== 0x00725E40  sub_725E40  this=-  sig=ida-proto ====
void sub_725E40()
{
  MEMORY[0xB0F758] = 0.0174532925199433 * 90.0; /*0x725e4c*/
}


// ==== 0x00725E60  sub_725E60  this=-  sig=ida-proto ====
__int64 sub_725E60()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(MEMORY[0xB0F758] - MEMORY[0xB0F780]); /*0x725e72*/
  result = Math::RoundToInt(v0 * MEMORY[0xB0F778] * 0.5); /*0x725e86*/
  MEMORY[0xB0F7D0] = result; /*0x725e8b*/
  return result; /*0x725e90*/
}


// ==== 0x00725EA0  sub_725EA0  this=-  sig=ida-proto ====
void sub_725EA0()
{
  MEMORY[0xB0F788] = Math::ArcTan((double)MEMORY[0xB0F7D0] * 0.00390625); /*0x725eb7*/
}


// ==== 0x00725ED0  sub_725ED0  this=-  sig=ida-proto ====
void sub_725ED0()
{
  MEMORY[0xB0F7A0] = Math::ArcTan((double)(2 * MEMORY[0xB0F7D0]) / MEMORY[0xB0F778]); /*0x725ef2*/
}


// ==== 0x00725F00  sub_725F00  this=-  sig=ida-proto ====
__int64 sub_725F00()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * MEMORY[0xB0F7D0]) + 0.5); /*0x725f1b*/
  MEMORY[0xB0F7C4] = result; /*0x725f20*/
  return result; /*0x725f26*/
}


// ==== 0x00725F30  sub_725F30  this=-  sig=ida-proto ====
int sub_725F30()
{
  MEMORY[0xB0F770] = 0; /*0x725f32*/
  MEMORY[0xB0F772] = 0; /*0x725f38*/
  return 0; /*0x725f3e*/
}


// ==== 0x00725F40  sub_725F40  this=-  sig=ida-proto ====
int sub_725F40()
{
  MEMORY[0xB0F790] = 0; /*0x725f42*/
  MEMORY[0xB0F794] = 0; /*0x725f47*/
  MEMORY[0xB0F798] = 0; /*0x725f4c*/
  return 0; /*0x725f51*/
}


// ==== 0x00725F60  sub_725F60  this=-  sig=ida-proto ====
int sub_725F60()
{
  MEMORY[0xB0F7C0] = 0; /*0x725f65*/
  MEMORY[0xB0F7B8] = 128; /*0x725f6f*/
  MEMORY[0xB0F7BC] = 128; /*0x725f74*/
  return 128; /*0x725f79*/
}


// ==== 0x00725F80  sub_725F80  this=-  sig=ida-proto ====
int sub_725F80()
{
  MEMORY[0xB0F760] = 0; /*0x725f82*/
  MEMORY[0xB0F764] = 0; /*0x725f87*/
  MEMORY[0xB0F768] = 0; /*0x725f8c*/
  MEMORY[0xB0F76C] = 0; /*0x725f91*/
  return 0; /*0x725f96*/
}


// ==== 0x00725FA0  TriggerClass::Construct  this=TriggerClass  sig=csp ====
int __thiscall TriggerClass::Construct(int this, TriggerClass *aP1)
{
  TimerStruct *v3; // ecx
  int v4; // eax
  TriggerClass *v5; // eax
  int v6; // eax
  AbstractClass *v7; // eax
  int v8; // ecx

  AbstractClass::Constructor((AbstractClass *)this); /*0x725fa4*/
  *(_DWORD *)(this + 36) = aP1; /*0x725faf*/
  *(_DWORD *)(this + 40) = 0; /*0x725fb2*/
  *(_DWORD *)(this + 44) = 0; /*0x725fb5*/
  *(_BYTE *)(this + 48) = 0; /*0x725fb8*/
  v3 = *(TimerStruct **)&HouseClass_Player.__pad_5568[23248]; /*0x725fbb*/
  *(_DWORD *)(this + 60) = 0; /*0x725fc1*/
  *(_DWORD *)(this + 52) = v3; /*0x725fc4*/
  *(_DWORD *)(this + 64) = 0; /*0x725fc7*/
  *(_BYTE *)(this + 68) = 1; /*0x725fca*/
  *(_DWORD *)this = &TriggerClass::`vftable'; /*0x725fce*/
  *(_DWORD *)(this + 4) = &TriggerClass::`vftable'; /*0x725fd4*/
  *(_DWORD *)(this + 8) = &TriggerClass::`vftable'; /*0x725fdb*/
  *(_DWORD *)(this + 12) = &vt_TriggerClass; /*0x725fe2*/
  if ( *(int *)&stru_B05488.__pad_579C[19036] < *(int *)&stru_B05488.__pad_579C[19028] /*0x72601b*/
    || (stru_B05488.__pad_579C[19033] || !*(_DWORD *)&stru_B05488.__pad_579C[19028])
    && *(int *)&stru_B05488.__pad_579C[19040] > 0
    && (*(unsigned __int8 (__thiscall **)(char *, int, _DWORD))(*(_DWORD *)&stru_B05488.__pad_579C[19020] + 8))(
         &stru_B05488.__pad_579C[19020],
         *(_DWORD *)&stru_B05488.__pad_579C[19028] + *(_DWORD *)&stru_B05488.__pad_579C[19040],
         0) )
  {
    v4 = (*(_DWORD *)&stru_B05488.__pad_579C[19036])++; /*0x726028*/
    *(_DWORD *)(*(_DWORD *)&stru_B05488.__pad_579C[19024] + 4 * v4) = this; /*0x726037*/
  }
  if ( *(int *)&stru_B05488.__pad_579C[19188] < *(int *)&stru_B05488.__pad_579C[19180] /*0x72606e*/
    || (stru_B05488.__pad_579C[19185] || !*(_DWORD *)&stru_B05488.__pad_579C[19180])
    && *(int *)&stru_B05488.__pad_579C[19192] > 0
    && (*(unsigned __int8 (__thiscall **)(char *, int, _DWORD))(*(_DWORD *)&stru_B05488.__pad_579C[19172] + 8))(
         &stru_B05488.__pad_579C[19172],
         *(_DWORD *)&stru_B05488.__pad_579C[19180] + *(_DWORD *)&stru_B05488.__pad_579C[19192],
         0) )
  {
    v5 = (TriggerClass *)(*(_DWORD *)&stru_B05488.__pad_579C[19188])++; /*0x72607b*/
    *(_DWORD *)(*(_DWORD *)&stru_B05488.__pad_579C[19176] + 4 * (_DWORD)v5) = this; /*0x72608a*/
  }
  if ( *(int *)&HouseClass_Player.__pad_5568[22596] < *(int *)&HouseClass_Player.__pad_5568[22588] /*0x7260c1*/
    || (HouseClass_Player.__pad_5568[22593] || !*(_DWORD *)&HouseClass_Player.__pad_5568[22588])
    && *(int *)&HouseClass_Player.__pad_5568[22600] > 0
    && (*(unsigned __int8 (__thiscall **)(char *, int, _DWORD))(*(_DWORD *)&HouseClass_Player.__pad_5568[22580] + 8))(
         &HouseClass_Player.__pad_5568[22580],
         *(_DWORD *)&HouseClass_Player.__pad_5568[22588] + *(_DWORD *)&HouseClass_Player.__pad_5568[22600],
         0) )
  {
    v6 = (*(_DWORD *)&HouseClass_Player.__pad_5568[22596])++; /*0x7260ce*/
    *(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[22584] + 4 * v6) = this; /*0x7260dd*/
  }
  if ( *(_DWORD *)(this + 36) ) /*0x7260e0*/
  {
    if ( (BuildingClass::ProcessUpgradeEffects((int *)this), v7 = *(AbstractClass **)(this + 36), !v7[4].__pad_0[15]) /*0x726121*/
      || (v8 = *(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[8060] + 1548)) == 0 && !v7[4].__pad_0[12]
      || v8 == 1 && !v7[4].__pad_0[13]
      || v8 == 2 && !v7[4].__pad_0[14] )
    {
      *(_BYTE *)(this + 68) = 0; /*0x726129*/
    }
  }
  return this; /*0x72612e*/
}


// ==== 0x00726250  TriggerClass::HasCrossesHorizontalLineEvent  this=TriggerClass  sig=csp ====
char __thiscall TriggerClass::HasCrossesHorizontalLineEvent(_DWORD *this)
{
  int v2; // eax
  _DWORD *v3; // ecx

  v2 = this->nextTrigger; /*0x726253*/
  v3 = (_DWORD *)this->buildingType; /*0x726256*/
  if ( !v2 ) /*0x72625b*/
    return HouseClass::HasType25Building(v3); /*0x72627d*/
  return HouseClass::HasType25Building(v3) || (unsigned __int8)TriggerClass::HasCrossesHorizontalLineEvent(this->nextTrigger); /*0x726274*/
}


// ==== 0x00726290  TriggerClass::HasCrossesVerticalLineEvent  this=TriggerClass  sig=csp ====
char __thiscall TriggerClass::HasCrossesVerticalLineEvent(_DWORD *this)
{
  int v2; // eax
  _DWORD *v3; // ecx

  v2 = this->nextTrigger; /*0x726293*/
  v3 = (_DWORD *)this->buildingType; /*0x726296*/
  if ( !v2 ) /*0x72629b*/
    return HouseClass::HasType26Building(v3); /*0x7262bd*/
  return HouseClass::HasType26Building(v3) || (unsigned __int8)TriggerClass::HasCrossesVerticalLineEvent(this->nextTrigger); /*0x7262b4*/
}


// ==== 0x007263A0  TriggerClass::NotifyGlobalChanged  this=TriggerClass  sig=csp ====
void __thiscall TriggerClass::NotifyGlobalChanged(int *this, int a2)
{
  int *i; // esi

  for ( i = this; i; i = (int *)i[10] ) /*0x7263a5*/
  {
    if ( HouseClass::FindType2728((_DWORD *)i[9], a2) ) /*0x7263b0*/
      BuildingClass::ProcessUpgradeEffects(i); /*0x7263bb*/
  }
}


// ==== 0x007263D0  TriggerClass::NotifyLocalChanged  this=TriggerClass  sig=csp ====
void __thiscall TriggerClass::NotifyLocalChanged(int *this, int a2)
{
  int *i; // esi

  for ( i = this; i; i = (int *)i[10] ) /*0x7263d5*/
  {
    if ( TriggerTypeClass::HasLocalSetOrClearedEvent((_DWORD *)i[9], a2) ) /*0x7263e0*/
      BuildingClass::ProcessUpgradeEffects(i); /*0x7263eb*/
  }
}


// ==== 0x00726400  BuildingClass::ProcessUpgradeEffects  this=TriggerClass  sig=csp ====
int __thiscall BuildingClass_ProcessUpgradeEffects(int *this)
{
  char v2; // bp
  int result; // eax
  _DWORD *i; // edi
  int v5; // eax
  int v6; // eax
  int v7; // kr00_4
  int v8; // [esp+10h] [ebp-8h]

  v2 = 0; /*0x726408*/
  result = this->buildingType; /*0x72640a*/
  for ( i = *(_DWORD **)(result + 172); i; ++v2 ) /*0x726415*/
  {
    if ( i[11] == 13 ) /*0x726420*/
    {
      v5 = 3 * i[13]; /*0x72642e*/
      this->timer = (int)MEMORY[0xA8ED84]; /*0x726431*/
      this->q038 = v8; /*0x72643a*/
      this->q03C = 5 * v5; /*0x72643f*/
      result = ~(1 << v2) & this->uniqueId; /*0x72644e*/
      this->uniqueId = result; /*0x726450*/
    }
    if ( i[11] == 51 ) /*0x726457*/
    {
      v6 = Random::Range((_DWORD *)MEMORY[0xA8B230] + 134, 0, i[13]); /*0x72646a*/
      v7 = i[13]; /*0x72647b*/
      this->timer = (int)MEMORY[0xA8ED84]; /*0x726488*/
      this->q038 = v8; /*0x72648e*/
      this->q03C = 15 * (v6 + v7 / 2); /*0x726494*/
      result = ~(1 << v2); /*0x7264a3*/
      this->uniqueId &= result; /*0x7264a7*/
    }
    i = (_DWORD *)i[10]; /*0x7264aa*/
  }
  return result; /*0x7264b7*/
}


// ==== 0x007264C0  TriggerClass::RegisterEvent  this=TriggerClass  sig=csp ====
char __thiscall TriggerClass::RegisterEvent(int this, TriggerClass *aP1, TechnoClass *aP2, char a4, char a5, int a6)
{
  char v7; // bl
  _DWORD *v8; // edi
  int Owner; // eax
  int v11; // [esp-10h] [ebp-18h]
  char v12; // [esp+7h] [ebp-1h]

  if ( !*(_BYTE *)(this + 68) || *(_BYTE *)(this + 48) ) /*0x7264cf*/
    return 0; /*0x7265b4*/
  v12 = 1; /*0x7264e2*/
  if ( a4 ) /*0x7264e7*/
    goto LABEL_16; /*0x7264e7*/
  v7 = 0; /*0x7264f0*/
  v8 = *(_DWORD **)(*(_DWORD *)(this + 36) + 172); /*0x7264f2*/
  if ( !v8 ) /*0x7264fa*/
    goto LABEL_16; /*0x7264fa*/
  do /*0x72658b*/
  {
    if ( (*(_DWORD *)(this + 64) & (1 << v7)) != 0 /*0x726540*/
      || (v11 = a6,
          Owner = HouseClass::FindOwner(*(void **)(*(_DWORD *)(*(_DWORD *)(this + 36) + 164) + 180)),
          TEventClass::Execute(v8, (int)aP1, Owner, (int)aP2, (int *)(this + 52), (int)&a5, v11)) )
    {
      if ( TriggerClass::GetValue(v8) ) /*0x726551*/
        *(_DWORD *)(this + 44) = TriggerClass::GetValue(v8); /*0x726561*/
      if ( a5 && TEventClass::GetStateA(v8) && TEventClass::GetStateB_SpyEvent(v8) ) /*0x726579*/
        *(_DWORD *)(this + 64) |= 1 << v7; /*0x726582*/
    }
    else
    {
      v12 = 0; /*0x726549*/
    }
    v8 = (_DWORD *)v8[10]; /*0x726585*/
    ++v7; /*0x726588*/
  }
  while ( v8 ); /*0x72658b*/
  if ( v12 ) /*0x726598*/
  {
LABEL_16:
    if ( a5 ) /*0x7265a0*/
      BuildingClass::ProcessUpgradeEffects((int *)this); /*0x7265a4*/
  }
  return v12; /*0x7265af*/
}


// ==== 0x007265C0  BuildingClass::ExecuteTriggers  this=TriggerClass  sig=csp ====
char __thiscall BuildingClass_ExecuteTriggers(int this, int a2, char a3)
{
  char v4; // bl
  int i; // esi
  int Owner; // eax

  if ( !*(_BYTE *)(this + 68) || *(_BYTE *)(this + 48) ) /*0x7265ca*/
    return 0; /*0x726620*/
  v4 = 0; /*0x7265d6*/
  for ( i = *(_DWORD *)(*(_DWORD *)(this + 36) + 176); i; i = *(_DWORD *)(i + 40) ) /*0x7265e0*/
  {
    Owner = HouseClass::FindOwner(*(void **)(*(_DWORD *)(*(_DWORD *)(this + 36) + 164) + 180)); /*0x7265fd*/
    if ( TerrainClass::ProcessUpdate(i, this, Owner, a2, (_DWORD *)this, (int)&a3) ) /*0x726605*/
      v4 = 1; /*0x72660e*/
  }
  return v4; /*0x72661c*/
}


// ==== 0x00726630  TriggerClass::Create  this=TriggerClass  sig=csp ====
TriggerClass *__thiscall TriggerClass::Create(TriggerClass *this)
{
  int v2; // eax
  CCINIClass *v3; // ecx
  int v4; // eax

  if ( !this ) /*0x726637*/
    return 0; /*0x72667f*/
  v2 = 0; /*0x72663f*/
  if ( *(int *)&HouseClass_Player.__pad_5568[22596] <= 0 ) /*0x726643*/
  {
LABEL_6:
    v4 = __2_YAPAXI_Z(0x48u); /*0x72665c*/
    if ( v4 ) /*0x726668*/
      return (TriggerClass *)TriggerClass::Construct(v4, this); /*0x726675*/
    return 0; /*0x726668*/
  }
  v3 = *(CCINIClass **)&HouseClass_Player.__pad_5568[22584]; /*0x72664b*/
  while ( this != *(TriggerClass **)(*(_DWORD *)v3->__pad_0 + 36) ) /*0x726652*/
  {
    ++v2; /*0x726654*/
    v3 = (CCINIClass *)((char *)v3 + 4); /*0x726655*/
    if ( v2 >= *(int *)&HouseClass_Player.__pad_5568[22596] ) /*0x72665a*/
      goto LABEL_6; /*0x72665a*/
  }
  return *(TriggerClass **)(*(_DWORD *)&HouseClass_Player.__pad_5568[22584] + 4 * v2); /*0x726672*/
}


// ==== 0x00726690  TriggerClass::FireAction  this=TriggerClass  sig=csp ====
int __thiscall TriggerClass::FireAction(_DWORD *this, HouseClass *aP1, int a3)
{
  TriggerClass *result; // eax

  if ( (HouseClass *)this->buildingType == aP1 ) /*0x726699*/
    this->buildingType = 0; /*0x72669b*/
  result = (TriggerClass *)this->nextTrigger; /*0x7266a2*/
  if ( result == (TriggerClass *)aP1 ) /*0x7266a7*/
  {
    result = (TriggerClass *)result->nextTrigger; /*0x7266a9*/
    this->nextTrigger = result; /*0x7266ac*/
  }
  if ( (HouseClass *)this->house == aP1 ) /*0x7266b2*/
    this->house = 0; /*0x7266b4*/
  return (int)result->__pad_0; /*0x7266bb*/
}


// ==== 0x007266C0  ObjectClass::method_7266C0  this=ObjectClass  sig=csp ====
_DWORD *__thiscall sub_7266C0(_DWORD *this, char a2)
{
  this->q040 |= 1 << a2; /*0x7266cd*/
  return this; /*0x7266d0*/
}


// ==== 0x00726720  TeamClass::AddToBuildQueue  this=TriggerClass  sig=csp ====
int __thiscall TeamClass_AddToBuildQueue(_BYTE *this)
{
  int result; // eax

  this->destroyed = 1; /*0x726723*/
  result = MEMORY[0xB0F6A0]; /*0x726727*/
  if ( MEMORY[0xB0F6A8] < MEMORY[0xB0F6A0] /*0x726760*/
    || (MEMORY[0xB0F6A5] || !MEMORY[0xB0F6A0])
    && MEMORY[0xB0F6AC] > 0
    && (result = (*(int (__thiscall **)(int *, int, _DWORD))(MEMORY[0xB0F698] + 8))(
                   &MEMORY[0xB0F698],
                   MEMORY[0xB0F6A0] + MEMORY[0xB0F6AC],
                   0),
        (_BYTE)result) )
  {
    result = MEMORY[0xB0F6A8]++; /*0x726768*/
    *((_DWORD *)MEMORY[0xB0F69C] + result) = this; /*0x726777*/
  }
  return result; /*0x72677a*/
}


// ==== 0x00726780  ObjectClass::method  this=ObjectClass  sig=csp ====
char __thiscall sub_726780(_BYTE *this)
{
  return this->nextObject; /*0x726783*/
}


// ==== 0x00726790  TriggerClass::FireTrigger  this=TriggerClass  sig=csp ====
int __thiscall TriggerClass::_vt13(int this, int *a2)
{
  int v3; // eax
  int v4; // eax
  int v5; // eax
  int v6; // ecx
  int v7; // edx
  int v8; // eax

  AbstractClass::ProcessPower((#378 *)this); /*0x726799*/
  v3 = (*(int (__stdcall **)(int))(*(_DWORD *)(*(_DWORD *)(this + 36) + 4) + 16))(*(_DWORD *)(this + 36) + 4); /*0x7267a7*/
  Power::TimerProcess(v3); /*0x7267ad*/
  v4 = *(_DWORD *)(this + 40); /*0x7267b2*/
  if ( v4 ) /*0x7267b7*/
  {
    v5 = (*(int (__stdcall **)(int))(*(_DWORD *)(v4 + 4) + 16))(v4 + 4); /*0x7267c0*/
    v4 = Power::TimerProcess(v5); /*0x7267c6*/
  }
  LOBYTE(v4) = *(_BYTE *)(this + 48); /*0x7267cb*/
  Power::FlagProcess(a2, v4); /*0x7267d1*/
  LOBYTE(v6) = *(_BYTE *)(this + 68); /*0x7267d6*/
  Power::FlagProcess(a2, v6); /*0x7267dc*/
  v7 = *(_DWORD *)(this + 52); /*0x7267e1*/
  v8 = *(_DWORD *)(this + 60); /*0x7267e4*/
  if ( v7 != -1 ) /*0x7267ea*/
  {
    if ( (int)MEMORY[0xA8ED84] - v7 >= v8 ) /*0x7267f6*/
      v8 = 0; /*0x7267fc*/
    else
      v8 -= (int)MEMORY[0xA8ED84] - v7; /*0x7267f8*/
  }
  Power::TimerProcess(v8); /*0x726801*/
  return Power::TimerProcess(*(_DWORD *)(this + 64)); /*0x726811*/
}


// ==== 0x00726820  TriggerClass::ddtor  this=TriggerClass  sig=csp ====
int __stdcall TriggerClass::_vt03(int a1, _DWORD *a2)
{
  if ( !a2 ) /*0x726826*/
    return -2147467261; /*0x726828*/
  *a2 = -1070787184; /*0x726836*/
  a2[1] = 298977834; /*0x72683e*/
  a2[2] = 1610655660; /*0x726847*/
  a2[3] = -1252326136; /*0x726850*/
  return 0; /*0x72682d*/
}


// ==== 0x00726860  TriggerClass::LoadTrigger  this=TriggerClass  sig=csp ====
int __stdcall TriggerClass::LoadTrigger(AbstractClass *aP0, int aP1)
{
  int result; // eax

  result = AbstractClass::SaveLoad_Prefix_0(aP0, (AbstractClass *)aP1); /*0x72686b*/
  if ( result >= 0 ) /*0x726872*/
  {
    if ( aP0 ) /*0x726876*/
    {
      AbstractClass::InitVtables(aP0, (IUnknown *)&aP1); /*0x72687f*/
      *(_DWORD *)aP0->__pad_0 = &TriggerClass::`vftable'; /*0x726884*/
      *(_DWORD *)&aP0->__pad_0[4] = &TriggerClass::`vftable'; /*0x72688a*/
      *(_DWORD *)&aP0->__pad_0[8] = &TriggerClass::`vftable'; /*0x726891*/
      *(_DWORD *)&aP0->__pad_0[12] = &vt_TriggerClass; /*0x726898*/
    }
    ObjectPtr::RegisterForTracking((SwizzleManagerClass *)&stru_B05488.__pad_579C[5356], (MouseClass *)&aP0[1]); /*0x7268a8*/
    ObjectPtr::RegisterForTracking( /*0x7268b6*/
      (SwizzleManagerClass *)&stru_B05488.__pad_579C[5356],
      (MouseClass *)&aP0[1].__pad_0[4]);
    ObjectPtr::RegisterForTracking( /*0x7268c4*/
      (SwizzleManagerClass *)&stru_B05488.__pad_579C[5356],
      (MouseClass *)&aP0[1].__pad_0[8]);
    return 0; /*0x7268c9*/
  }
  return result; /*0x7268cb*/
}


// ==== 0x007268D0  TriggerClass::SaveTrigger  this=TriggerClass  sig=csp ====
int __stdcall TriggerClass::SaveTrigger(TechnoTypeClass *aP0, int *a1, int aP2)
{
  int result; // eax

  result = AbstractClass::SaveLoad_Prefix((ObjectTypeClass *)aP0, (ObjectTypeClass *)a1, (ObjectTypeClass *)aP2); /*0x7268df*/
  if ( result >= 0 ) /*0x7268e6*/
    return 0; /*0x7268e8*/
  return result; /*0x7268ea*/
}


// ==== 0x007268F0  TActionClass::executeAirstrikeAction  this=TActionClass  sig=csp ====
int __thiscall sub_7268F0(int *this)
{
  this->TActionClass_field_44 = 1; /*0x7268f0*/
  return BuildingClass::ProcessUpgradeEffects(this);
}


// ==== 0x00726900  TActionClass::executeDetonateAction  this=TActionClass  sig=csp ====
void __thiscall sub_726900(_BYTE *this)
{
  this->TActionClass_field_44 = 0; /*0x726900*/
}


// ==== 0x00726910  Property::GetField11  this=Property  sig=csp ====
int __thiscall Property_GetField11(_DWORD *this)
{
  return this->q02C; /*0x726913*/
}


// ==== 0x00726920  ObjectClass::method  this=ObjectClass  sig=csp ====
int __thiscall sub_726920(_DWORD *this, int a2)
{
  this->fallRate = a2; /*0x726924*/
  return a2; /*0x726927*/
}


// ==== 0x00726930  TriggerClass::StubReturn72  this=TriggerClass  sig=csp ====
int TriggerClass::_vt12()
{
  return 72; /*0x726935*/
}


// ==== 0x00726940  TriggerClass::StubReturn38  this=TriggerClass  sig=csp ====
int TriggerClass::_vt11()
{
  return 38; /*0x726945*/
}


// ==== 0x00726950  TriggerClass::CheckCondition  this=TriggerClass  sig=csp ====
TriggerClass *__thiscall TriggerClass::CheckCondition(void **Block, char a2)
{
  int v3; // eax
  int v4; // eax
  int v5; // eax
  void **v7; // [esp+8h] [ebp-4h] BYREF

  *Block = &TriggerClass::`vftable'; /*0x726956*/
  *(Block + 1) = &TriggerClass::`vftable'; /*0x72695c*/
  *(Block + 2) = &TriggerClass::`vftable'; /*0x726963*/
  *(Block + 3) = &vt_TriggerClass; /*0x72696a*/
  AbstractClass::AnnounceExpiredPointer(Block, 1); /*0x726971*/
  v7 = Block; /*0x726986*/
  v3 = (*(int (__thiscall **)(int *, void ***))(MEMORY[0xA8EAE8] + 16))(&MEMORY[0xA8EAE8], &v7); /*0x72698a*/
  if ( v3 != -1 && v3 < MEMORY[0xA8EAF8] && v3 < --MEMORY[0xA8EAF8] ) /*0x7269a5*/
  {
    do /*0x7269bd*/
    {
      ++v3; /*0x7269ad*/
      *((_DWORD *)MEMORY[0xA8EAEC] + v3 - 1) = *((_DWORD *)MEMORY[0xA8EAEC] + v3); /*0x7269b1*/
    }
    while ( v3 < MEMORY[0xA8EAF8] ); /*0x7269bd*/
  }
  v7 = Block; /*0x7269cf*/
  v4 = (*(int (__thiscall **)(int *, void ***))(MEMORY[0xB0F670] + 16))(&MEMORY[0xB0F670], &v7); /*0x7269d3*/
  if ( v4 != -1 && v4 < MEMORY[0xB0F680] && v4 < --MEMORY[0xB0F680] ) /*0x7269ee*/
  {
    do /*0x726a06*/
    {
      ++v4; /*0x7269f6*/
      *((_DWORD *)MEMORY[0xB0F674] + v4 - 1) = *((_DWORD *)MEMORY[0xB0F674] + v4); /*0x7269fa*/
    }
    while ( v4 < MEMORY[0xB0F680] ); /*0x726a06*/
  }
  v7 = Block; /*0x726a18*/
  v5 = (*(int (__thiscall **)(int *, void ***))(MEMORY[0xB0F708] + 16))(&MEMORY[0xB0F708], &v7); /*0x726a1c*/
  if ( v5 != -1 && v5 < MEMORY[0xB0F718] && v5 < --MEMORY[0xB0F718] ) /*0x726a37*/
  {
    do /*0x726a4f*/
    {
      ++v5; /*0x726a3f*/
      *((_DWORD *)MEMORY[0xB0F70C] + v5 - 1) = *((_DWORD *)MEMORY[0xB0F70C] + v5); /*0x726a43*/
    }
    while ( v5 < MEMORY[0xB0F718] ); /*0x726a4f*/
  }
  AbstractClass::DTOR(Block); /*0x726a53*/
  if ( (a2 & 1) != 0 ) /*0x726a5d*/
    __3_YAXPAX_Z(Block); /*0x726a60*/
  return (TriggerClass *)Block; /*0x726a6a*/
}


// ==== 0x00726A70  sub_726A70  this=-  sig=ida-proto ====
void sub_726A70()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x726a7c*/
  MEMORY[0xB0F7F8] = Math::Sqrt(v0 + v0); /*0x726a8e*/
}


// ==== 0x00726AA0  sub_726AA0  this=-  sig=ida-proto ====
void sub_726AA0()
{
  MEMORY[0xB0F848] = MEMORY[0xB0F7F8] / 60.0; /*0x726aac*/
}


// ==== 0x00726AC0  sub_726AC0  this=-  sig=ida-proto ====
void sub_726AC0()
{
  MEMORY[0xB0F830] = 1.0 / MEMORY[0xB0F848]; /*0x726acc*/
}


// ==== 0x00726AE0  sub_726AE0  this=-  sig=ida-proto ====
void sub_726AE0()
{
  MEMORY[0xB0F828] = 0.0174532925199433 * 45.0; /*0x726aec*/
}


// ==== 0x00726B00  sub_726B00  this=-  sig=ida-proto ====
void sub_726B00()
{
  MEMORY[0xB0F800] = 0.0174532925199433 * 60.0; /*0x726b0c*/
}


// ==== 0x00726B20  sub_726B20  this=-  sig=ida-proto ====
void sub_726B20()
{
  MEMORY[0xB0F7D8] = 0.0174532925199433 * 90.0; /*0x726b2c*/
}


// ==== 0x00726B40  sub_726B40  this=-  sig=ida-proto ====
__int64 sub_726B40()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(MEMORY[0xB0F7D8] - MEMORY[0xB0F800]); /*0x726b52*/
  result = Math::RoundToInt(v0 * MEMORY[0xB0F7F8] * 0.5); /*0x726b66*/
  MEMORY[0xB0F850] = result; /*0x726b6b*/
  return result; /*0x726b70*/
}


// ==== 0x00726B80  sub_726B80  this=-  sig=ida-proto ====
void sub_726B80()
{
  MEMORY[0xB0F808] = Math::ArcTan((double)MEMORY[0xB0F850] * 0.00390625); /*0x726b97*/
}


// ==== 0x00726BB0  sub_726BB0  this=-  sig=ida-proto ====
void sub_726BB0()
{
  MEMORY[0xB0F820] = Math::ArcTan((double)(2 * MEMORY[0xB0F850]) / MEMORY[0xB0F7F8]); /*0x726bd2*/
}


// ==== 0x00726BE0  sub_726BE0  this=-  sig=ida-proto ====
__int64 sub_726BE0()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * MEMORY[0xB0F850]) + 0.5); /*0x726bfb*/
  MEMORY[0xB0F844] = result; /*0x726c00*/
  return result; /*0x726c06*/
}


// ==== 0x00726C10  sub_726C10  this=-  sig=ida-proto ====
int sub_726C10()
{
  MEMORY[0xB0F7F0] = 0; /*0x726c12*/
  MEMORY[0xB0F7F2] = 0; /*0x726c18*/
  return 0; /*0x726c1e*/
}


// ==== 0x00726C20  sub_726C20  this=-  sig=ida-proto ====
int sub_726C20()
{
  MEMORY[0xB0F810] = 0; /*0x726c22*/
  MEMORY[0xB0F814] = 0; /*0x726c27*/
  MEMORY[0xB0F818] = 0; /*0x726c2c*/
  return 0; /*0x726c31*/
}


// ==== 0x00726C40  sub_726C40  this=-  sig=ida-proto ====
int sub_726C40()
{
  MEMORY[0xB0F840] = 0; /*0x726c45*/
  MEMORY[0xB0F838] = 128; /*0x726c4f*/
  MEMORY[0xB0F83C] = 128; /*0x726c54*/
  return 128; /*0x726c59*/
}


// ==== 0x00726C60  sub_726C60  this=-  sig=ida-proto ====
int sub_726C60()
{
  MEMORY[0xB0F7E0] = 0; /*0x726c62*/
  MEMORY[0xB0F7E4] = 0; /*0x726c67*/
  MEMORY[0xB0F7E8] = 0; /*0x726c6c*/
  MEMORY[0xB0F7EC] = 0; /*0x726c71*/
  return 0; /*0x726c76*/
}


// ==== 0x00726C80  TriggerTypeClass::Construct  this=TriggerTypeClass  sig=csp ====
_DWORD *__thiscall TriggerTypeClass::Construct(_DWORD *this, ObjectClass *aP1)
{
  int v3; // eax
  int v4; // eax
  TriggerTypeClass *v5; // eax

  AbstractTypeClass::Constructor((int)this, (AbstractClass *)aP1); /*0x726c89*/
  this->ArrayIndex = -1; /*0x726c92*/
  this->Difficulty = 1; /*0x726c9c*/
  this->q09D = 1; /*0x726ca2*/
  this->q09E = 1; /*0x726ca8*/
  this->Enabled = 1; /*0x726cae*/
  this->MustTransfer = 0; /*0x726cb4*/
  this->house = 0; /*0x726cba*/
  this->nextTrigger = 0; /*0x726cc0*/
  this->firstEvent = 0; /*0x726cc6*/
  this->firstAction = 0; /*0x726ccc*/
  *this = &TriggerTypeClass::`vftable'; /*0x726cd2*/
  this->vtable2 = &TriggerTypeClass::`vftable'; /*0x726cd8*/
  this->vtable3 = &TriggerTypeClass::`vftable'; /*0x726cdf*/
  this->vtable4 = &vt_TriggerTypeClass; /*0x726ce6*/
  if ( *(int *)&stru_B05488.__pad_579C[19012] < *(int *)&stru_B05488.__pad_579C[19004] /*0x726d21*/
    || (stru_B05488.__pad_579C[19009] || !*(_DWORD *)&stru_B05488.__pad_579C[19004])
    && *(int *)&stru_B05488.__pad_579C[19016] > 0
    && (*(unsigned __int8 (__thiscall **)(char *, int, _DWORD))(*(_DWORD *)&stru_B05488.__pad_579C[18996] + 8))(
         &stru_B05488.__pad_579C[18996],
         *(_DWORD *)&stru_B05488.__pad_579C[19004] + *(_DWORD *)&stru_B05488.__pad_579C[19016],
         0) )
  {
    v3 = (*(_DWORD *)&stru_B05488.__pad_579C[19012])++; /*0x726d2e*/
    *(_DWORD *)(*(_DWORD *)&stru_B05488.__pad_579C[19000] + 4 * v3) = this; /*0x726d3d*/
  }
  if ( *(int *)&stru_B05488.__pad_579C[19036] < *(int *)&stru_B05488.__pad_579C[19028] /*0x726d74*/
    || (stru_B05488.__pad_579C[19033] || !*(_DWORD *)&stru_B05488.__pad_579C[19028])
    && *(int *)&stru_B05488.__pad_579C[19040] > 0
    && (*(unsigned __int8 (__thiscall **)(char *, int, _DWORD))(*(_DWORD *)&stru_B05488.__pad_579C[19020] + 8))(
         &stru_B05488.__pad_579C[19020],
         *(_DWORD *)&stru_B05488.__pad_579C[19028] + *(_DWORD *)&stru_B05488.__pad_579C[19040],
         0) )
  {
    v4 = (*(_DWORD *)&stru_B05488.__pad_579C[19036])++; /*0x726d81*/
    *(_DWORD *)(*(_DWORD *)&stru_B05488.__pad_579C[19024] + 4 * v4) = this; /*0x726d90*/
  }
  this->ArrayIndex = dword_8B4188; /*0x726d99*/
  if ( dword_8B4188 < dword_8B4180 /*0x726dd0*/
    || (unk_8B4185 || !dword_8B4180)
    && dword_8B418C > 0
    && (*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(dword_8B4178 + 8))(
         &dword_8B4178,
         dword_8B4180 + dword_8B418C,
         0) )
  {
    v5 = (TriggerTypeClass *)dword_8B4188++; /*0x726ddd*/
    *((_DWORD *)unk_8B417C + (_DWORD)v5) = this; /*0x726dec*/
  }
  return this; /*0x726df1*/
}


// ==== 0x00726E00  TriggerTypeClass::ProcessEvents  this=TriggerTypeClass  sig=csp ====
int __thiscall sub_726E00(int this)
{
  int v2; // eax
  _DWORD *v3; // ecx
  _DWORD *v4; // esi
  _DWORD *v5; // ecx
  _DWORD *v6; // esi
  int v7; // eax
  int v8; // eax
  int v10; // [esp+10h] [ebp-4h] BYREF

  *(_DWORD *)this = &TriggerTypeClass::`vftable'; /*0x726e06*/
  *(_DWORD *)(this + 4) = &TriggerTypeClass::`vftable'; /*0x726e0c*/
  *(_DWORD *)(this + 8) = &TriggerTypeClass::`vftable'; /*0x726e13*/
  *(_DWORD *)(this + 12) = &vt_TriggerTypeClass; /*0x726e1a*/
  AbstractClass::AnnounceExpiredPointer((void **)this, 1); /*0x726e21*/
  v10 = this; /*0x726e36*/
  v2 = (*(int (__thiscall **)(int *, int *))(dword_8B4178 + 16))(&dword_8B4178, &v10); /*0x726e3a*/
  if ( v2 != -1 && v2 < dword_8B4188 && v2 < --dword_8B4188 ) /*0x726e55*/
  {
    do /*0x726e6d*/
    {
      ++v2; /*0x726e5d*/
      *((_DWORD *)unk_8B417C + v2 - 1) = *((_DWORD *)unk_8B417C + v2); /*0x726e61*/
    }
    while ( v2 < dword_8B4188 ); /*0x726e6d*/
  }
  v3 = *(_DWORD **)(this + 176); /*0x726e6f*/
  if ( v3 ) /*0x726e78*/
  {
    do /*0x726e8c*/
    {
      v4 = (_DWORD *)v3[10]; /*0x726e7a*/
      if ( v3 ) /*0x726e7f*/
        (*(void (__thiscall **)(_DWORD *, int))(*v3 + 32))(v3, 1); /*0x726e85*/
      v3 = v4; /*0x726e8a*/
    }
    while ( v4 ); /*0x726e8c*/
  }
  v5 = *(_DWORD **)(this + 172); /*0x726e8e*/
  if ( v5 ) /*0x726e96*/
  {
    do /*0x726eaa*/
    {
      v6 = (_DWORD *)v5[10]; /*0x726e98*/
      if ( v5 ) /*0x726e9d*/
        (*(void (__thiscall **)(_DWORD *, int))(*v5 + 32))(v5, 1); /*0x726ea3*/
      v5 = v6; /*0x726ea8*/
    }
    while ( v6 ); /*0x726eaa*/
  }
  v10 = this; /*0x726ebc*/
  v7 = (*(int (__thiscall **)(int *, int *))(MEMORY[0xB0F670] + 16))(&MEMORY[0xB0F670], &v10); /*0x726ec0*/
  if ( v7 != -1 && v7 < MEMORY[0xB0F680] && v7 < --MEMORY[0xB0F680] ) /*0x726edc*/
  {
    do /*0x726ef4*/
    {
      ++v7; /*0x726ee4*/
      *((_DWORD *)MEMORY[0xB0F674] + v7 - 1) = *((_DWORD *)MEMORY[0xB0F674] + v7); /*0x726ee8*/
    }
    while ( v7 < MEMORY[0xB0F680] ); /*0x726ef4*/
  }
  v10 = this; /*0x726f06*/
  v8 = (*(int (__thiscall **)(int *, int *))(MEMORY[0xB0F658] + 16))(&MEMORY[0xB0F658], &v10); /*0x726f0a*/
  if ( v8 != -1 && v8 < MEMORY[0xB0F668] && v8 < --MEMORY[0xB0F668] ) /*0x726f25*/
  {
    do /*0x726f3d*/
    {
      ++v8; /*0x726f2d*/
      *((_DWORD *)MEMORY[0xB0F65C] + v8 - 1) = *((_DWORD *)MEMORY[0xB0F65C] + v8); /*0x726f31*/
    }
    while ( v8 < MEMORY[0xB0F668] ); /*0x726f3d*/
  }
  return AbstractTypeClass::Dtor((_DWORD *)this); /*0x726f46*/
}


// ==== 0x00726F50  HouseClass::HasType26Building  this=HouseClass  sig=csp ====
char __thiscall HouseClass::HasType26Building(_DWORD *this)
{
  int v1; // ecx
  char result; // al

  v1 = this->psychicDetectionCapacity; /*0x726f50*/
  result = 0; /*0x726f56*/
  if ( v1 ) /*0x726f5a*/
  {
    while ( *(_DWORD *)(v1 + 44) != 26 ) /*0x726f64*/
    {
      v1 = *(_DWORD *)(v1 + 40); /*0x726f66*/
      if ( !v1 ) /*0x726f6b*/
        return result; /*0x726f6b*/
    }
    return 1; /*0x726f6e*/
  }
  return result; /*0x726f6d*/
}


// ==== 0x00726F80  HouseClass::HasType25Building  this=HouseClass  sig=csp ====
char __thiscall HouseClass::HasType25Building(_DWORD *this)
{
  int v1; // ecx
  char result; // al

  v1 = this->psychicDetectionCapacity; /*0x726f80*/
  result = 0; /*0x726f86*/
  if ( v1 ) /*0x726f8a*/
  {
    while ( *(_DWORD *)(v1 + 44) != 25 ) /*0x726f94*/
    {
      v1 = *(_DWORD *)(v1 + 40); /*0x726f96*/
      if ( !v1 ) /*0x726f9b*/
        return result; /*0x726f9b*/
    }
    return 1; /*0x726f9e*/
  }
  return result; /*0x726f9d*/
}


// ==== 0x00726FB0  HouseClass::FindType24  this=HouseClass  sig=csp ====
bool __thiscall HouseClass_FindType24(std::codecvt_base **this)
{
  std::codecvt_base *v1; // ecx
  bool result; // al

  v1 = this->psychicDetectionCapacity; /*0x726fb0*/
  result = 0; /*0x726fb6*/
  if ( !v1 ) /*0x726fba*/
    JUMPOUT(0x726FD0); /*0x726fd0*/
  while ( *((_DWORD *)v1 + 11) != 24 ) /*0x726fc4*/
  {
    v1 = (std::codecvt_base *)*((_DWORD *)v1 + 10); /*0x726fc6*/
    if ( !v1 ) /*0x726fcb*/
      return result; /*0x726fcb*/
  }
  return _do_always_noconv_codecvt_base_std__MBE_NXZ_20(v1); /*0x726fcd*/
}


// ==== 0x00726FCE  ObjectClass::?do_always_noconv_codecvt_base_std__MBE_NXZ_20  this=ObjectClass  sig=csp ====
char __thiscall _do_always_noconv_codecvt_base_std__MBE_NXZ_20(std::codecvt_base *this)
{
  return 1; /*0x726fd0*/
}


// ==== 0x00726FE0  HouseClass::FindType15  this=HouseClass  sig=csp ====
char __thiscall HouseClass_FindType15(_DWORD *this)
{
  int v1; // ecx
  char result; // al

  v1 = this->productionFactory_plants; /*0x726fe0*/
  result = 0; /*0x726fe6*/
  if ( v1 ) /*0x726fea*/
  {
    while ( *(_DWORD *)(v1 + 44) != 15 ) /*0x726ff4*/
    {
      v1 = *(_DWORD *)(v1 + 40); /*0x726ff6*/
      if ( !v1 ) /*0x726ffb*/
        return result; /*0x726ffb*/
    }
    return 1; /*0x726ffe*/
  }
  return result; /*0x726ffd*/
}


// ==== 0x00727010  HouseClass::FindType2728  this=TriggerTypeClass  sig=csp ====
char __thiscall HouseClass_FindType27_28(_DWORD *this, int a2)
{
  _DWORD *v2; // ecx
  char result; // al
  int v4; // edx

  v2 = (_DWORD *)this->firstEvent; /*0x727010*/
  result = 0; /*0x727016*/
  if ( v2 ) /*0x72701b*/
  {
    while ( 1 ) /*0x727021*/
    {
      v4 = v2[11]; /*0x727021*/
      if ( (v4 == 27 || v4 == 28) && v2[13] == a2 ) /*0x727031*/
        break; /*0x727031*/
      v2 = (_DWORD *)v2[10]; /*0x727033*/
      if ( !v2 ) /*0x727038*/
        return result; /*0x727038*/
    }
    return 1; /*0x72703e*/
  }
  return result; /*0x72703a*/
}


// ==== 0x00727050  TriggerTypeClass::HasLocalSetOrClearedEvent  this=TriggerTypeClass  sig=csp ====
char __thiscall TriggerTypeClass::HasLocalSetOrClearedEvent(_DWORD *this, int a2)
{
  _DWORD *v2; // ecx
  char result; // al
  int v4; // edx

  v2 = (_DWORD *)this->firstEvent; /*0x727050*/
  result = 0; /*0x727056*/
  if ( v2 ) /*0x72705b*/
  {
    while ( 1 ) /*0x727061*/
    {
      v4 = v2[11]; /*0x727061*/
      if ( (v4 == 36 || v4 == 37) && v2[13] == a2 ) /*0x727071*/
        break; /*0x727071*/
      v2 = (_DWORD *)v2[10]; /*0x727073*/
      if ( !v2 ) /*0x727078*/
        return result; /*0x727078*/
    }
    return 1; /*0x72707e*/
  }
  return result; /*0x72707a*/
}


// ==== 0x00727090  TriggerTypeClass::GetAction  this=TriggerTypeClass  sig=csp ====
int __thiscall TriggerTypeClass::_vt10(_DWORD *this, int a2, int a3)
{
  int v4; // eax
  _DWORD *i; // esi
  int v6; // eax
  _DWORD *j; // esi
  int result; // eax

  v4 = this->nextTrigger; /*0x727098*/
  if ( v4 && v4 == a2 ) /*0x7270a4*/
    this->nextTrigger = *(_DWORD *)(v4 + 168); /*0x7270ac*/
  for ( i = (_DWORD *)this->firstAction; i; i = (_DWORD *)i[10] ) /*0x7270bb*/
    (*(void (__thiscall **)(_DWORD *, int, int))(*i + 40))(i, a2, 1); /*0x7270c4*/
  v6 = this->firstAction; /*0x7270ce*/
  if ( v6 == a2 ) /*0x7270d6*/
    this->firstAction = *(_DWORD *)(v6 + 40); /*0x7270db*/
  for ( j = (_DWORD *)this->firstEvent; j; j = (_DWORD *)j[10] ) /*0x7270e9*/
    (*(void (__thiscall **)(_DWORD *, int, int))(*j + 40))(j, a2, 1); /*0x7270f2*/
  result = this->firstEvent; /*0x7270fc*/
  if ( result == a2 ) /*0x727105*/
  {
    result = *(_DWORD *)(result + 40); /*0x727107*/
    this->firstEvent = result; /*0x72710a*/
  }
  return result; /*0x727110*/
}


// ==== 0x00727190  ObjectClass::method  this=ObjectClass  sig=csp ====
ObjectClass *__thiscall sub_727190(void *this)
{
  ObjectClass *v2; // edi
  const void **v3; // esi

  v2 = 0; /*0x727195*/
  v3 = (const void **)&stru_830620.__pad_579C[60476]; /*0x727197*/
  while ( _strcmpi(this, *v3) ) /*0x7271aa*/
  {
    ++v3; /*0x7271ac*/
    v2 = (ObjectClass *)((char *)v2 + 1); /*0x7271af*/
    if ( (int)v3 >= (int)&stru_830620.__pad_579C[60488] ) /*0x7271b6*/
      return 0; /*0x7271bd*/
  }
  return v2; /*0x7271b8*/
}


// ==== 0x007271D0  sub_7271D0  this=-  sig=ida-proto ====
char *__fastcall sub_7271D0(int a1)
{
  return MEMORY[0x8449F8][a1]; /*0x7271d7*/
}


// ==== 0x007271E0  TriggerTypeClass::GetFlags  this=TriggerTypeClass  sig=csp ====
int __thiscall TriggerTypeClass::GetFlags(_DWORD *this)
{
  int v2; // esi
  int i; // edi
  int v4; // eax
  int j; // esi
  int v6; // eax
  int v7; // ecx

  v2 = this->firstEvent; /*0x7271e5*/
  for ( i = 0; v2; i |= v4 ) /*0x7271ef*/
  {
    v4 = TriggerTypeClass::GetActionCategoryFlags(*(void **)(v2 + 44)); /*0x7271f4*/
    v2 = *(_DWORD *)(v2 + 40); /*0x7271f9*/
  }
  for ( j = this->firstAction; j; i |= v6 ) /*0x72720a*/
  {
    v6 = TriggerTypeClass::Dispatch(*(void **)(j + 44)); /*0x72720f*/
    j = *(_DWORD *)(j + 40); /*0x727214*/
  }
  v7 = this->nextTrigger; /*0x72721d*/
  if ( v7 ) /*0x727225*/
    return i | TriggerTypeClass::GetFlags(v7); /*0x72722c*/
  else
    return i; /*0x727232*/
}


// ==== 0x00727240  TriggerTypeClass::LoadFromINI  this=TriggerTypeClass  sig=csp ====
char __thiscall TriggerTypeClass::_vt25(int this, unsigned __int8 ***a2)
{
  char *v3; // esi
  int v4; // edx
  char *v5; // esi
  int v6; // edi
  _DWORD *v7; // eax
  _DWORD *v8; // eax
  char *v9; // eax
  char *v10; // eax
  char *v11; // eax
  char *v12; // eax
  char *v13; // eax
  char *v14; // eax
  char *v15; // eax
  int v16; // eax
  int v17; // edi
  void *v18; // eax
  int v19; // esi
  char *v20; // eax
  int v21; // eax
  int v22; // edi
  int v23; // ebx
  void *v24; // eax
  int v25; // esi
  char Destination[48]; // [esp+8h] [ebp-234h] BYREF
  char v28; // [esp+38h] [ebp-204h]
  char String[512]; // [esp+3Ch] [ebp-200h] BYREF

  INIClass::ResetSection(a2); /*0x727253*/
  if ( !INIClass::GetString( /*0x72727b*/
          a2,
          (unsigned __int8 *)MEMORY[0x844A3C],
          (unsigned __int8 *)(this + 36),
          &MEMORY[0x889F64],
          String,
          512) )
    return 0; /*0x7275b5*/
  v3 = strtok(String, MEMORY[0x817F70]); /*0x727290*/
  if ( _strcmpi(v3, MEMORY[0x817474]) ) /*0x727298*/
    v4 = *((_DWORD *)g_SuperWeaponTypeCount + SuperWeaponTypeClass::FindByName(v3)); /*0x7272bb*/
  else
    v4 = *(_DWORD *)g_SuperWeaponTypeCount; /*0x7272aa*/
  *(_DWORD *)(this + 164) = v4; /*0x7272cb*/
  v5 = strtok(0, MEMORY[0x817F70]); /*0x7272d6*/
  *(_DWORD *)(this + 168) = 0; /*0x7272de*/
  if ( _strcmpi(v5, MEMORY[0x817474]) ) /*0x7272e4*/
  {
    if ( !_strcmpi(MEMORY[0x817474], v5) || !_strcmpi(g_Str_none, v5) ) /*0x72730c*/
      goto LABEL_14; /*0x72730c*/
    v6 = 0; /*0x72731d*/
    if ( dword_8B4188 > 0 ) /*0x727321*/
    {
      while ( _strcmpi((const void *)(*((_DWORD *)unk_8B417C + v6) + 36), v5) ) /*0x72733a*/
      {
        if ( ++v6 >= dword_8B4188 ) /*0x727344*/
          goto LABEL_11; /*0x727344*/
      }
      v8 = (_DWORD *)*((_DWORD *)unk_8B417C + v6); /*0x727367*/
      goto LABEL_15; /*0x72736a*/
    }
LABEL_11:
    v7 = __2_YAPAXI_Z(0xB4u); /*0x72734b*/
    if ( v7 ) /*0x727355*/
      v8 = TriggerTypeClass::Construct(v7, v5); /*0x72735a*/
    else
LABEL_14:
      v8 = 0; /*0x72736c*/
LABEL_15:
    *(_DWORD *)(this + 168) = v8; /*0x72736e*/
  }
  v9 = strtok(0, MEMORY[0x817F70]); /*0x727374*/
  if ( v9 ) /*0x727384*/
  {
    strncpy(Destination, v9, 0x30u); /*0x727395*/
    v28 = 0; /*0x72739d*/
  }
  else
  {
    Destination[0] = 0; /*0x727386*/
  }
  if ( Destination != (char *)(this + 100) ) /*0x7273ab*/
  {
    qmemcpy((void *)(this + 100), Destination, 0x30u); /*0x7273b6*/
    *(_BYTE *)(this + 148) = v28; /*0x7273b8*/
  }
  v10 = strtok(0, MEMORY[0x817F70]); /*0x7273bf*/
  *(_BYTE *)(this + 159) = v10 && !atoi(v10); /*0x7273e1*/
  v11 = strtok(0, MEMORY[0x817F70]); /*0x7273ee*/
  *(_BYTE *)(this + 156) = v11 && atoi(v11); /*0x727407*/
  v12 = strtok(0, MEMORY[0x817F70]); /*0x72741d*/
  *(_BYTE *)(this + 157) = v12 && atoi(v12); /*0x727436*/
  v13 = strtok(0, MEMORY[0x817F70]); /*0x72744c*/
  *(_BYTE *)(this + 158) = v13 && atoi(v13); /*0x727465*/
  v14 = strtok(0, MEMORY[0x817F70]); /*0x72747b*/
  if ( v14 && atoi(v14) ) /*0x727488*/
    *(_BYTE *)(this + 160) = 1; /*0x727494*/
  if ( INIClass::GetString( /*0x7274bb*/
         a2,
         (unsigned __int8 *)MEMORY[0x844A2C],
         (unsigned __int8 *)(this + 36),
         &MEMORY[0x889F64],
         String,
         512) )
  {
    v15 = strtok(String, MEMORY[0x817F70]); /*0x7274ce*/
    v16 = atoi(v15); /*0x7274d4*/
    if ( v16 ) /*0x7274de*/
    {
      v17 = v16; /*0x7274e0*/
      do /*0x727514*/
      {
        v18 = __2_YAPAXI_Z(0x58u); /*0x7274e4*/
        if ( v18 ) /*0x7274ee*/
          v19 = TActionClass::TActionClass(v18); /*0x7274f7*/
        else
          v19 = 0; /*0x7274fb*/
        TriggerTypeClass::ParseActionData(v19); /*0x7274ff*/
        --v17; /*0x72750a*/
        *(_DWORD *)(v19 + 40) = *(_DWORD *)(this + 172); /*0x72750b*/
        *(_DWORD *)(this + 172) = v19; /*0x72750e*/
      }
      while ( v17 ); /*0x727514*/
    }
  }
  if ( INIClass::GetString( /*0x727537*/
         a2,
         (unsigned __int8 *)MEMORY[0x844A34],
         (unsigned __int8 *)(this + 36),
         &MEMORY[0x889F64],
         String,
         512) )
  {
    v20 = strtok(String, MEMORY[0x817F70]); /*0x72754a*/
    v21 = atoi(v20); /*0x727550*/
    v22 = 0; /*0x727558*/
    *(_DWORD *)(this + 176) = 0; /*0x72755c*/
    if ( v21 ) /*0x727562*/
    {
      v23 = v21; /*0x727564*/
      do /*0x7275a3*/
      {
        v24 = __2_YAPAXI_Z(0x94u); /*0x72756b*/
        if ( v24 ) /*0x727575*/
          v25 = TActionClass::ctor(v24); /*0x72757e*/
        else
          v25 = 0; /*0x727582*/
        ScriptAction::ParseScriptActionParams(v25); /*0x727586*/
        if ( *(_DWORD *)(this + 176) ) /*0x72758b*/
          *(_DWORD *)(v22 + 40) = v25; /*0x72759d*/
        else
          *(_DWORD *)(this + 176) = v25; /*0x727595*/
        --v23; /*0x7275a0*/
        v22 = v25; /*0x7275a1*/
      }
      while ( v23 ); /*0x7275a3*/
    }
  }
  return 1; /*0x7275a7*/
}


// ==== 0x007275D0  TriggerClass::Process  this=IUnknown  sig=csp ====
int __thiscall TriggerClass::Process(char *this)
{
  int result; // eax
  CCINIClass *v3; // ebx
  CCINIClass *StringByIndex; // esi
  int v5; // edi
  _DWORD *v6; // eax
  TriggerTypeClass *v7; // eax
  int i; // [esp+8h] [ebp-4h]

  result = INIClass::GetKeyCount(this, (INIClass *)&stru_830620.__pad_579C[60544]); /*0x7275db*/
  v3 = 0; /*0x7275e0*/
  for ( i = result; (int)v3 < i; v3 = (CCINIClass *)((char *)v3 + 1) ) /*0x7275e8*/
  {
    StringByIndex = (CCINIClass *)INIClass::GetStringByIndex(this, (CCINIClass *)&stru_830620.__pad_579C[60544], v3); /*0x7275ff*/
    if ( !_strcmpi((char *)&stru_817460.sectionHead[1], StringByIndex->__pad_0) /*0x727619*/
      || !_strcmpi(g_Str_none, StringByIndex->__pad_0) )
    {
      goto LABEL_10; /*0x727619*/
    }
    v5 = 0; /*0x72762a*/
    if ( *(int *)&MEMORY[0x89F690].__pad_579C[62300] > 0 ) /*0x72762e*/
    {
      while ( _strcmpi( /*0x727648*/
                (char *)(*(_DWORD *)(*(_DWORD *)&MEMORY[0x89F690].__pad_579C[62288] + 4 * v5) + 36),
                StringByIndex->__pad_0) )
      {
        if ( ++v5 >= *(int *)&MEMORY[0x89F690].__pad_579C[62300] ) /*0x727652*/
          goto LABEL_7; /*0x727652*/
      }
      v7 = *(TriggerTypeClass **)(*(_DWORD *)&MEMORY[0x89F690].__pad_579C[62288] + 4 * v5); /*0x727675*/
      goto LABEL_11; /*0x727678*/
    }
LABEL_7:
    v6 = (_DWORD *)__2_YAPAXI_Z(0xB4u); /*0x727659*/
    if ( v6 ) /*0x727663*/
      v7 = (TriggerTypeClass *)TriggerTypeClass::Construct(v6, StringByIndex->__pad_0); /*0x727668*/
    else
LABEL_10:
      v7 = 0; /*0x72767a*/
LABEL_11:
    result = (*(int (__thiscall **)(TriggerTypeClass *, char *))(*(_DWORD *)v7->__pad_0 + 100))(v7, this); /*0x72767c*/
  }
  return result; /*0x727691*/
}


// ==== 0x007276A0  TriggerTypeClass::GetParameter  this=TriggerTypeClass  sig=csp ====
char __thiscall TriggerTypeClass::_vt26(int this, char *a2)
{
  int v3; // eax
  const char *v4; // esi
  int v5; // eax
  const char *v6; // eax
  char *v7; // esi
  int v8; // eax
  int i; // ecx
  int *v10; // ebp
  int v11; // eax
  int j; // ecx
  int v13; // ebx
  char *v15; // [esp+10h] [ebp-204h]
  char Buffer[512]; // [esp+14h] [ebp-200h] BYREF

  v3 = *(_DWORD *)(this + 168); /*0x7276ab*/
  v4 = (const char *)(v3 + 36); /*0x7276b4*/
  if ( !v3 ) /*0x7276b7*/
    v4 = MEMORY[0x817474]; /*0x7276b9*/
  v5 = *(_DWORD *)(this + 164); /*0x7276be*/
  if ( v5 ) /*0x7276c6*/
    v6 = (const char *)(v5 + 36); /*0x7276c8*/
  else
    v6 = MEMORY[0x817474]; /*0x7276cd*/
  sprintf( /*0x727728*/
    Buffer,
    MEMORY[0x844A48],
    v6,
    v4,
    (const char *)(this + 100),
    *(_BYTE *)(this + 159) == 0,
    *(_BYTE *)(this + 156) != 0,
    *(_BYTE *)(this + 157) != 0,
    *(_BYTE *)(this + 158) != 0,
    *(_BYTE *)(this + 160) != 0);
  v7 = (char *)(this + 36); /*0x72773a*/
  v15 = (char *)(this + 36); /*0x727747*/
  INIClass::SetString(a2, (unsigned __int8 *)MEMORY[0x844A3C], (char *)(this + 36), Buffer); /*0x72774b*/
  v8 = *(_DWORD *)(this + 172); /*0x727750*/
  for ( i = 0; v8; ++i ) /*0x72775a*/
    v8 = *(_DWORD *)(v8 + 40); /*0x72775c*/
  sprintf(Buffer, MEMORY[0x817F6C], i); /*0x72776f*/
  v10 = *(int **)(this + 172); /*0x727774*/
  if ( v10 ) /*0x72777f*/
  {
    do /*0x7277c0*/
    {
      strcat(Buffer, MEMORY[0x817F70]); /*0x7277a6*/
      TEventClass::PrepareSaveToINI(v10, Buffer); /*0x7277b6*/
      v10 = (int *)v10[10]; /*0x7277bb*/
    }
    while ( v10 ); /*0x7277c0*/
    v7 = (char *)(this + 36); /*0x7277c2*/
  }
  INIClass::SetString(a2, (unsigned __int8 *)MEMORY[0x844A2C], v7, Buffer); /*0x7277da*/
  v11 = *(_DWORD *)(this + 176); /*0x7277df*/
  for ( j = 0; v11; ++j ) /*0x7277e9*/
    v11 = *(_DWORD *)(v11 + 40); /*0x7277eb*/
  sprintf(Buffer, MEMORY[0x817F6C], j); /*0x7277fe*/
  v13 = *(_DWORD *)(this + 176); /*0x727803*/
  if ( v13 ) /*0x72780e*/
  {
    do /*0x72784f*/
    {
      strcat(Buffer, MEMORY[0x817F70]); /*0x727835*/
      ScriptAction::Serialize(v13, Buffer); /*0x727845*/
      v13 = *(_DWORD *)(v13 + 40); /*0x72784a*/
    }
    while ( v13 ); /*0x72784f*/
    v7 = v15; /*0x727851*/
  }
  INIClass::SetString(a2, (unsigned __int8 *)MEMORY[0x844A34], v7, Buffer); /*0x727869*/
  return 1; /*0x72786e*/
}


// ==== 0x00727880  ObjectClass::ReadAudioEventINI  this=ObjectTypeClass  sig=csp ====
TriggerTypeClass *__thiscall ReadAudioEventINI(char *this)
{
  CCINIClass *KeyCount; // ebx
  CCINIClass *i; // edi
  unsigned __int8 *StringByIndex; // eax
  int v5; // ebx
  CCINIClass *j; // edi
  unsigned __int8 *v7; // eax
  int v8; // ebx
  CCINIClass *k; // edi
  unsigned __int8 *v10; // eax
  TriggerTypeClass *result; // eax
  int m; // edi
  char Destination[32]; // [esp+Ch] [ebp-20h] BYREF

  KeyCount = (CCINIClass *)INIClass::GetKeyCount(this, (INIClass *)&stru_830620.__pad_579C[60544]); /*0x727893*/
  for ( i = 0; (int)i < (int)KeyCount; i = (CCINIClass *)((char *)i + 1) ) /*0x727899*/
  {
    StringByIndex = (unsigned __int8 *)INIClass::GetStringByIndex(this, (CCINIClass *)&stru_830620.__pad_579C[60544], i); /*0x7278a5*/
    INIClass::GetString( /*0x7278bf*/
      (unsigned __int8 ***)this,
      (INIClass *)&stru_830620.__pad_579C[60544],
      StringByIndex,
      (INIClass *)&MEMORY[0x87F8E4].__pad_5568[20760],
      (INIClass *)Destination,
      32);
    INIClass::ClearSection((int)this, (INIClass *)Destination, 0); /*0x7278cd*/
  }
  INIClass::ClearSection((int)this, (INIClass *)&stru_830620.__pad_579C[60544], 0); /*0x7278e2*/
  v5 = INIClass::GetKeyCount(this, (INIClass *)&stru_830620.__pad_579C[60528]); /*0x7278f4*/
  for ( j = 0; (int)j < v5; j = (CCINIClass *)((char *)j + 1) ) /*0x7278fa*/
  {
    v7 = (unsigned __int8 *)INIClass::GetStringByIndex(this, (CCINIClass *)&stru_830620.__pad_579C[60528], j); /*0x727906*/
    INIClass::GetString( /*0x727920*/
      (unsigned __int8 ***)this,
      (INIClass *)&stru_830620.__pad_579C[60544],
      v7,
      (INIClass *)&MEMORY[0x87F8E4].__pad_5568[20760],
      (INIClass *)Destination,
      32);
    INIClass::ClearSection((int)this, (INIClass *)Destination, 0); /*0x72792e*/
  }
  INIClass::ClearSection((int)this, (INIClass *)&stru_830620.__pad_579C[60528], 0); /*0x727943*/
  v8 = INIClass::GetKeyCount(this, (INIClass *)&stru_830620.__pad_579C[60536]); /*0x727955*/
  for ( k = 0; (int)k < v8; k = (CCINIClass *)((char *)k + 1) ) /*0x72795b*/
  {
    v10 = (unsigned __int8 *)INIClass::GetStringByIndex(this, (CCINIClass *)&stru_830620.__pad_579C[60536], k); /*0x727967*/
    INIClass::GetString( /*0x727981*/
      (unsigned __int8 ***)this,
      (INIClass *)&stru_830620.__pad_579C[60544],
      v10,
      (INIClass *)&MEMORY[0x87F8E4].__pad_5568[20760],
      (INIClass *)Destination,
      32);
    INIClass::ClearSection((int)this, (INIClass *)Destination, 0); /*0x72798f*/
  }
  INIClass::ClearSection((int)this, (INIClass *)&stru_830620.__pad_579C[60536], 0); /*0x7279a4*/
  result = *(TriggerTypeClass **)&MEMORY[0x89F690].__pad_579C[62300]; /*0x7279a9*/
  for ( m = 0; m < *(int *)&MEMORY[0x89F690].__pad_579C[62300]; ++m ) /*0x7279b2*/
  {
    (*(void (__thiscall **)(_DWORD, char *))(**(_DWORD **)(*(_DWORD *)&MEMORY[0x89F690].__pad_579C[62288] + 4 * m) + 104))( /*0x7279bf*/
      *(_DWORD *)(*(_DWORD *)&MEMORY[0x89F690].__pad_579C[62288] + 4 * m),
      this);
    result = *(TriggerTypeClass **)&MEMORY[0x89F690].__pad_579C[62300]; /*0x7279c2*/
  }
  return result; /*0x7279cc*/
}


// ==== 0x00727AA0  TagTypeClass::FindOrCreateTriggerType  this=ObjectClass  sig=csp ====
TriggerTypeClass *__thiscall TagTypeClass::FindOrCreateTriggerType(ObjectClass *Source)
{
  int v2; // esi
  _DWORD *v3; // eax

  if ( !_strcmpi(&stru_817460.sectionHead[1], Source) || !_strcmpi(g_Str_none, Source) ) /*0x727abc*/
    return 0; /*0x727b1f*/
  v2 = 0; /*0x727acd*/
  if ( dword_8B4188 <= 0 ) /*0x727ad1*/
  {
LABEL_6:
    v3 = (_DWORD *)__2_YAPAXI_Z(0xB4u); /*0x727af6*/
    if ( v3 ) /*0x727b05*/
      return (TriggerTypeClass *)TriggerTypeClass::Construct(v3, Source); /*0x727b11*/
    return 0; /*0x727b05*/
  }
  while ( _strcmpi((const void *)(*((_DWORD *)unk_8B417C + v2) + 36), Source) ) /*0x727aea*/
  {
    if ( ++v2 >= dword_8B4188 ) /*0x727af4*/
      goto LABEL_6; /*0x727af4*/
  }
  return (TriggerTypeClass *)*((_DWORD *)unk_8B417C + v2); /*0x727b0f*/
}


// ==== 0x00727B30  TriggerTypeClass::PowerDrainUpdate  this=TriggerTypeClass  sig=csp ====
int __thiscall TriggerTypeClass::_vt13(int this, int *a2)
{
  int v3; // eax
  int v4; // eax
  int v5; // eax
  int result; // eax
  int v7; // eax
  int v8; // esi
  int v9; // eax

  AbstractTypeClass::ProcessPower((char *)this, a2); /*0x727b39*/
  v3 = (*(int (__stdcall **)(int))(*(_DWORD *)(*(_DWORD *)(this + 164) + 4) + 16))(*(_DWORD *)(this + 164) + 4); /*0x727b4a*/
  Power::TimerProcess(v3); /*0x727b50*/
  v4 = *(_DWORD *)(this + 168); /*0x727b55*/
  if ( v4 ) /*0x727b5d*/
  {
    v5 = (*(int (__stdcall **)(int))(*(_DWORD *)(v4 + 4) + 16))(v4 + 4); /*0x727b66*/
    Power::TimerProcess(v5); /*0x727b6c*/
  }
  result = *(_DWORD *)(this + 172); /*0x727b71*/
  if ( result ) /*0x727b79*/
  {
    v7 = (*(int (__stdcall **)(int))(*(_DWORD *)(result + 4) + 16))(result + 4); /*0x727b82*/
    result = Power::TimerProcess(v7); /*0x727b88*/
  }
  v8 = *(_DWORD *)(this + 176); /*0x727b8d*/
  if ( v8 ) /*0x727b95*/
  {
    v9 = (*(int (__stdcall **)(int))(*(_DWORD *)(v8 + 4) + 16))(v8 + 4); /*0x727b9e*/
    return Power::TimerProcess(v9); /*0x727ba4*/
  }
  return result; /*0x727ba9*/
}


// ==== 0x00727BB0  TriggerTypeClass::GetClassIdentifier  this=TriggerTypeClass  sig=csp ====
int __stdcall TriggerTypeClass::_vt03(int a1, _DWORD *a2)
{
  if ( !a2 ) /*0x727bb6*/
    return -2147467261; /*0x727bb8*/
  *a2 = -1070787183; /*0x727bc6*/
  a2[1] = 298977834; /*0x727bce*/
  a2[2] = 1610655660; /*0x727bd7*/
  a2[3] = -1252326136; /*0x727be0*/
  return 0; /*0x727bbd*/
}


// ==== 0x00727BF0  TriggerTypeClass::LoadTypeData  this=TriggerTypeClass  sig=csp ====
int __stdcall TriggerTypeClass::LoadTypeData(AbstractTypeClass *aP0, int aP1)
{
  int result; // eax

  result = AbstractClass::SaveLoad_Prefix_0((AbstractClass *)aP0, (AbstractClass *)aP1); /*0x727bfb*/
  if ( result >= 0 ) /*0x727c02*/
  {
    if ( aP0 ) /*0x727c06*/
    {
      AbstractTypeClass::Init((int)aP0, (AbstractTypeClass *)&aP1); /*0x727c0f*/
      *(_DWORD *)aP0->__pad_0 = &TriggerTypeClass::`vftable'; /*0x727c14*/
      *(_DWORD *)&aP0->__pad_0[4] = &TriggerTypeClass::`vftable'; /*0x727c1a*/
      *(_DWORD *)&aP0->__pad_0[8] = &TriggerTypeClass::`vftable'; /*0x727c21*/
      *(_DWORD *)&aP0->__pad_0[12] = &vt_TriggerTypeClass; /*0x727c28*/
    }
    ObjectPtr::RegisterForTracking((SwizzleManagerClass *)&stru_B05488.__pad_579C[5356], (MouseClass *)&aP0[1].uniqueId); /*0x727c3b*/
    ObjectPtr::RegisterForTracking( /*0x727c4c*/
      (SwizzleManagerClass *)&stru_B05488.__pad_579C[5356],
      (MouseClass *)&aP0[1].abstractFlags);
    ObjectPtr::RegisterForTracking( /*0x727c5d*/
      (SwizzleManagerClass *)&stru_B05488.__pad_579C[5356],
      (MouseClass *)&aP0[1].nextArrayIndex);
    ObjectPtr::RegisterForTracking( /*0x727c6e*/
      (SwizzleManagerClass *)&stru_B05488.__pad_579C[5356],
      (MouseClass *)&aP0[1].__pad_0[12]);
    return 0; /*0x727c73*/
  }
  return result; /*0x727c75*/
}


// ==== 0x00727C80  TriggerTypeClass::Write  this=TriggerTypeClass  sig=csp ====
int __stdcall TriggerTypeClass::Write(TechnoTypeClass *aP0, int *a1, int aP2)
{
  int result; // eax

  result = AbstractClass::SaveLoad_Prefix((ObjectTypeClass *)aP0, (ObjectTypeClass *)a1, (ObjectTypeClass *)aP2); /*0x727c8f*/
  if ( result >= 0 ) /*0x727c96*/
    return 0; /*0x727c98*/
  return result; /*0x727c9a*/
}


// ==== 0x00727CA0  TriggerTypeClass::GetTypeIdentifier  this=TriggerTypeClass  sig=csp ====
int TriggerTypeClass::_vt11()
{
  return 39; /*0x727ca5*/
}


// ==== 0x00727CB0  TriggerTypeClass::GetObjectSize  this=TriggerTypeClass  sig=csp ====
int TriggerTypeClass::_vt12()
{
  return 180; /*0x727cb5*/
}


// ==== 0x00727CC0  TriggerTypeClass::GetAuxField  this=TriggerTypeClass  sig=csp ====
int __thiscall TriggerTypeClass::_vt16(_DWORD *this)
{
  return this->ArrayIndex; /*0x727cc6*/
}


// ==== 0x00727CD0  TriggerTypeClass::Destructor  this=TriggerTypeClass  sig=csp ====
TriggerTypeClass *__thiscall TextRenderer::Destructor(void *Block, char a2)
{
  TriggerClass::ProcessEvents((int)Block); /*0x727cd3*/
  if ( (a2 & 1) != 0 ) /*0x727cdd*/
    __3_YAXPAX_Z(Block); /*0x727ce0*/
  return (TriggerTypeClass *)Block; /*0x727cea*/
}


// ==== 0x00727CF0  String::Trim  this=ObjectClass  sig=csp ====
char *__thiscall String_Trim(char *this)
{
  char v2; // al
  const char *v3; // ebx
  signed int i; // ecx

  if ( this ) /*0x727cf5*/
  {
    v2 = *this; /*0x727cf7*/
    v3 = this; /*0x727cfc*/
    if ( *this ) /*0x727cf7*/
    {
      do /*0x727d0a*/
      {
        if ( (unsigned __int8)v2 > 0x20u ) /*0x727d02*/
          break; /*0x727d02*/
        v2 = *++v3; /*0x727d04*/
      }
      while ( v2 ); /*0x727d0a*/
      if ( v3 != this ) /*0x727d0e*/
        strcpy(this, v3); /*0x727d27*/
    }
    for ( i = strlen(this) - 1; i >= 0; --i ) /*0x727d3f*/
    {
      if ( !*v3 ) /*0x727d41*/
        break; /*0x727d44*/
      if ( (unsigned __int8)*(this + i) > 0x20u ) /*0x727d4a*/
        break; /*0x727d4a*/
      *(this + i) = 0; /*0x727d4c*/
    }
  }
  return this; /*0x727d55*/
}


// ==== 0x00727D60  WideString::Trim  this=CampaignScore  sig=csp ====
wchar_t *__thiscall WideString::Trim(wchar_t *Source)
{
  wchar_t v2; // ax
  wchar_t *v3; // esi
  signed int v4; // eax
  wchar_t *v5; // ecx

  if ( Source ) /*0x727d66*/
  {
    v2 = *Source; /*0x727d68*/
    v3 = Source; /*0x727d6b*/
    if ( *Source ) /*0x727d68*/
    {
      do /*0x727d82*/
      {
        if ( v2 > 0x20u ) /*0x727d76*/
          break; /*0x727d76*/
        v2 = v3[1]; /*0x727d78*/
        ++v3; /*0x727d7c*/
      }
      while ( v2 ); /*0x727d82*/
      if ( v3 != Source ) /*0x727d86*/
        wcscpy(Source, v3); /*0x727d8a*/
    }
    v4 = wcslen(Source) - 1; /*0x727d9b*/
    if ( v4 >= 0 ) /*0x727d9c*/
    {
      v5 = Source + v4; /*0x727d9e*/
      do /*0x727db8*/
      {
        if ( !*v3 ) /*0x727da1*/
          break; /*0x727da5*/
        if ( *v5 > 0x20u ) /*0x727dab*/
          break; /*0x727dab*/
        *v5 = 0; /*0x727dad*/
        --v4; /*0x727db2*/
        --v5; /*0x727db3*/
      }
      while ( v4 >= 0 ); /*0x727db8*/
    }
  }
  return Source; /*0x727dbc*/
}


// ==== 0x00727DC0  sub_727DC0  this=-  sig=ida-proto ====
void sub_727DC0()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x727dcc*/
  MEMORY[0xB0F878] = Math::Sqrt(v0 + v0); /*0x727dde*/
}


// ==== 0x00727DF0  sub_727DF0  this=-  sig=ida-proto ====
void sub_727DF0()
{
  MEMORY[0xB0F8C8] = MEMORY[0xB0F878] / 60.0; /*0x727dfc*/
}


// ==== 0x00727E10  sub_727E10  this=-  sig=ida-proto ====
void sub_727E10()
{
  MEMORY[0xB0F8B0] = 1.0 / MEMORY[0xB0F8C8]; /*0x727e1c*/
}


// ==== 0x00727E30  sub_727E30  this=-  sig=ida-proto ====
void sub_727E30()
{
  MEMORY[0xB0F8A8] = 0.0174532925199433 * 45.0; /*0x727e3c*/
}


// ==== 0x00727E50  sub_727E50  this=-  sig=ida-proto ====
void sub_727E50()
{
  MEMORY[0xB0F880] = 0.0174532925199433 * 60.0; /*0x727e5c*/
}


// ==== 0x00727E70  sub_727E70  this=-  sig=ida-proto ====
void sub_727E70()
{
  MEMORY[0xB0F858] = 0.0174532925199433 * 90.0; /*0x727e7c*/
}


// ==== 0x00727E90  sub_727E90  this=-  sig=ida-proto ====
__int64 sub_727E90()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(MEMORY[0xB0F858] - MEMORY[0xB0F880]); /*0x727ea2*/
  result = Math::RoundToInt(v0 * MEMORY[0xB0F878] * 0.5); /*0x727eb6*/
  MEMORY[0xB0F8D0] = result; /*0x727ebb*/
  return result; /*0x727ec0*/
}


// ==== 0x00727ED0  sub_727ED0  this=-  sig=ida-proto ====
void sub_727ED0()
{
  MEMORY[0xB0F888] = Math::ArcTan((double)MEMORY[0xB0F8D0] * 0.00390625); /*0x727ee7*/
}


// ==== 0x00727F00  sub_727F00  this=-  sig=ida-proto ====
void sub_727F00()
{
  MEMORY[0xB0F8A0] = Math::ArcTan((double)(2 * MEMORY[0xB0F8D0]) / MEMORY[0xB0F878]); /*0x727f22*/
}


// ==== 0x00727F30  sub_727F30  this=-  sig=ida-proto ====
__int64 sub_727F30()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * MEMORY[0xB0F8D0]) + 0.5); /*0x727f4b*/
  MEMORY[0xB0F8C4] = result; /*0x727f50*/
  return result; /*0x727f56*/
}


// ==== 0x00727F60  sub_727F60  this=-  sig=ida-proto ====
int sub_727F60()
{
  MEMORY[0xB0F870] = 0; /*0x727f62*/
  MEMORY[0xB0F872] = 0; /*0x727f68*/
  return 0; /*0x727f6e*/
}


// ==== 0x00727F70  sub_727F70  this=-  sig=ida-proto ====
int sub_727F70()
{
  MEMORY[0xB0F890] = 0; /*0x727f72*/
  MEMORY[0xB0F894] = 0; /*0x727f77*/
  MEMORY[0xB0F898] = 0; /*0x727f7c*/
  return 0; /*0x727f81*/
}


// ==== 0x00727F90  sub_727F90  this=-  sig=ida-proto ====
int sub_727F90()
{
  MEMORY[0xB0F8C0] = 0; /*0x727f95*/
  MEMORY[0xB0F8B8] = 128; /*0x727f9f*/
  MEMORY[0xB0F8BC] = 128; /*0x727fa4*/
  return 128; /*0x727fa9*/
}


// ==== 0x00727FB0  sub_727FB0  this=-  sig=ida-proto ====
int sub_727FB0()
{
  MEMORY[0xB0F860] = 0; /*0x727fb2*/
  MEMORY[0xB0F864] = 0; /*0x727fb7*/
  MEMORY[0xB0F868] = 0; /*0x727fbc*/
  MEMORY[0xB0F86C] = 0; /*0x727fc1*/
  return 0; /*0x727fc6*/
}


// ==== 0x00727FD0  TubeClass::Construct  this=TubeClass  sig=csp ====
#373 *__thiscall TubeClass_Constructor(#373 *this, __int16 *a2, int a3)
{
  int v4; // eax
  _WORD *v5; // eax
  int v6; // ecx
  #373 **v7; // edi

  AbstractClass::Constructor(this); /*0x727fd5*/
  this->objectTypeFlags = *(_DWORD *)a2; /*0x727fe4*/
  this->owningHouseIndex = *(_DWORD *)a2; /*0x727fec*/
  this->fallRate = a3; /*0x727ff0*/
  this->estimatedHealth = 0; /*0x727ff3*/
  *(_DWORD *)this = &TubeClass::`vftable'; /*0x727ffd*/
  this->vtable2 = &TubeClass::`vftable'; /*0x728003*/
  this->vtable3 = &TubeClass::`vftable'; /*0x728009*/
  this->vtable4 = &TubeClass::`vftable'; /*0x728010*/
  AbstractClass::GenerateUniqueID((int)this + 4); /*0x728017*/
  memset((char *)this + 48, 0xFFu, 0x190u); /*0x728027*/
  if ( MEMORY[0x87F7E8][53848] < MEMORY[0x87F7E8][53846] /*0x72805f*/
    || (BYTE1(MEMORY[0x87F7E8][53847]) || !MEMORY[0x87F7E8][53846])
    && MEMORY[0x87F7E8][53849] > 0
    && (*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(MEMORY[0x87F7E8][53844] + 8))(
         &MEMORY[0x87F7E8][53844],
         MEMORY[0x87F7E8][53846] + MEMORY[0x87F7E8][53849],
         0) )
  {
    v4 = MEMORY[0x87F7E8][53848]++; /*0x72806c*/
    *(_DWORD *)(MEMORY[0x87F7E8][53845] + 4 * v4) = this; /*0x72807b*/
  }
  if ( *a2 || a2[1] ) /*0x728084*/
  {
    v5 = CellCoord::To_CellObj(MEMORY[0x87F7E8], a2); /*0x728091*/
    v6 = 0; /*0x72809c*/
    if ( MEMORY[0x87F7E8][53848] <= 0 ) /*0x7280a0*/
    {
LABEL_13:
      LOWORD(v6) = -1; /*0x7280b4*/
    }
    else
    {
      v7 = (#373 **)MEMORY[0x87F7E8][53845]; /*0x7280a2*/
      while ( *v7 != this ) /*0x7280aa*/
      {
        ++v6; /*0x7280ac*/
        ++v7; /*0x7280ad*/
        if ( v6 >= MEMORY[0x87F7E8][53848] ) /*0x7280b2*/
          goto LABEL_13; /*0x7280b2*/
      }
    }
    v5[139] = v6; /*0x7280b7*/
  }
  return this; /*0x7280c0*/
}


// ==== 0x007281A0  TubeClass::LoadState  this=TubeClass  sig=csp ====
int __stdcall TubeClass::LoadState(AbstractClass *aP0, int aP1)
{
  int result; // eax

  result = AbstractClass::SaveLoad_Prefix_0(aP0, (AbstractClass *)aP1); /*0x7281ab*/
  if ( result >= 0 ) /*0x7281b2*/
  {
    if ( aP0 ) /*0x7281b6*/
    {
      AbstractClass::Constructor(aP0); /*0x7281ba*/
      *(_DWORD *)aP0->__pad_0 = &TubeClass::`vftable'; /*0x7281bf*/
      *(_DWORD *)&aP0->__pad_0[4] = &TubeClass::`vftable'; /*0x7281c5*/
      *(_DWORD *)&aP0->__pad_0[8] = &TubeClass::`vftable'; /*0x7281cc*/
      *(_DWORD *)&aP0->__pad_0[12] = &vt_TubeClass; /*0x7281d3*/
    }
    return 0; /*0x7281da*/
  }
  return result; /*0x7281dc*/
}


// ==== 0x007281E0  TubeClass::SaveState  this=TubeClass  sig=csp ====
int __stdcall TubeClass::SaveState(TechnoTypeClass *aP0, int *a1, int aP2)
{
  int result; // eax

  result = AbstractClass::SaveLoad_Prefix((ObjectTypeClass *)aP0, (ObjectTypeClass *)a1, (ObjectTypeClass *)aP2); /*0x7281ef*/
  if ( result >= 0 ) /*0x7281f6*/
    return 0; /*0x7281f8*/
  return result; /*0x7281fa*/
}


// ==== 0x00728200  ProcessInfantryClass  this=-  sig=ida-proto ====
void sub_728200()
{
  int v0; // ebp
  int v1; // ebx
  __int16 *v2; // esi
  _WORD *v3; // edi
  int i; // [esp+8h] [ebp-4h]

  v0 = MEMORY[0x8B4148]; /*0x728203*/
  v1 = 0; /*0x728209*/
  for ( i = -1; v1 < v0; ++v1 ) /*0x728215*/
  {
    v2 = (__int16 *)*((_DWORD *)MEMORY[0x8B413C] + v1); /*0x72821e*/
    v3 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], v2 + 18); /*0x72822f*/
    if ( InfantryClass::IsInBounds((int)v3) ) /*0x728233*/
    {
      v3[139] = ++i; /*0x72825f*/
    }
    else
    {
      if ( v2 ) /*0x72823e*/
        (*(void (__thiscall **)(__int16 *, int))(*(_DWORD *)v2 + 32))(v2, 1); /*0x728246*/
      --v0; /*0x728249*/
      v3[139] = -1; /*0x72824a*/
      --v1; /*0x728253*/
    }
  }
}


// ==== 0x00728280  InfantryClass::SetMission  this=InfantryClass  sig=csp ====
int __thiscall sub_728280(char *this)
{
  int v1; // ebp
  int v2; // edi
  __int16 *v3; // esi
  _WORD *v4; // ebx
  int result; // eax
  int j; // ebp
  int v7; // esi
  _DWORD *v8; // esi
  int v9; // ebx
  int i; // [esp+10h] [ebp-23Ch]
  char Buffer[12]; // [esp+18h] [ebp-234h] BYREF
  char Source[552]; // [esp+24h] [ebp-228h] BYREF

  INIClass::ClearSection((int)this, (int)MEMORY[0x844A60], 0); /*0x728296*/
  v1 = MEMORY[0x8B4148]; /*0x72829b*/
  v2 = 0; /*0x7282a1*/
  for ( i = -1; v2 < v1; ++v2 ) /*0x7282ad*/
  {
    v3 = (__int16 *)*((_DWORD *)MEMORY[0x8B413C] + v2); /*0x7282b5*/
    v4 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], v3 + 18); /*0x7282c6*/
    if ( InfantryClass::IsInBounds((int)v4) ) /*0x7282ca*/
    {
      v4[139] = ++i; /*0x7282f6*/
    }
    else
    {
      if ( v3 ) /*0x7282d5*/
        (*(void (__thiscall **)(__int16 *, int))(*(_DWORD *)v3 + 32))(v3, 1); /*0x7282dd*/
      --v1; /*0x7282e0*/
      v4[139] = -1; /*0x7282e1*/
      --v2; /*0x7282ea*/
    }
  }
  result = MEMORY[0x8B4148]; /*0x728302*/
  for ( j = 0; j < MEMORY[0x8B4148]; ++j ) /*0x72830b*/
  {
    v7 = *((_DWORD *)MEMORY[0x8B413C] + j); /*0x728317*/
    if ( v7 ) /*0x72831c*/
    {
      sprintf(Buffer, MEMORY[0x817F6C], j); /*0x72832d*/
      sprintf( /*0x728354*/
        Source,
        MEMORY[0x844A88],
        *(__int16 *)(v7 + 36),
        *(__int16 *)(v7 + 38),
        *(_DWORD *)(v7 + 44),
        *(__int16 *)(v7 + 40),
        *(__int16 *)(v7 + 42));
      v8 = (_DWORD *)(v7 + 48); /*0x72835c*/
      v9 = 100; /*0x72835f*/
      do /*0x72838b*/
      {
        sprintf(&Source[strlen(Source)], g_Str_Trace_, *v8++); /*0x72837f*/
        --v9; /*0x72838a*/
      }
      while ( v9 ); /*0x72838b*/
      INIClass::SetString(this, (unsigned __int8 *)MEMORY[0x844A60], Buffer, Source); /*0x7283a2*/
    }
    result = MEMORY[0x8B4148]; /*0x7283a7*/
  }
  return result; /*0x7283b5*/
}


// ==== 0x007283C0  ScenarioClass::LoadWaypoints  this=IUnknown  sig=csp ====
int __thiscall ScenarioClass::LoadWaypoints(CCINIClass *this)
{
  CCINIClass *v1; // esi
  int result; // eax
  int v3; // ebx
  unsigned __int8 *StringByIndex; // eax
  AbstractClass *v5; // eax
  AbstractClass *v6; // esi
  char *v7; // eax
  char *v8; // eax
  char *v9; // eax
  char *v10; // eax
  char *v11; // eax
  int *v12; // edi
  char *v13; // eax
  CCINIClass *aP2; // [esp+8h] [ebp-210h]
  __int16 v15[2]; // [esp+Ch] [ebp-20Ch] BYREF
  CCINIClass *v16; // [esp+10h] [ebp-208h]
  int v17; // [esp+14h] [ebp-204h]
  INIClass String[8]; // [esp+18h] [ebp-200h] BYREF

  v1 = this; /*0x7283c8*/
  v16 = this; /*0x7283ca*/
  INIClass::ResetSection(this); /*0x7283ce*/
  result = INIClass::GetKeyCount(v1->__pad_0, *(INIClass **)&stru_830620.__pad_579C[60580]); /*0x7283db*/
  v3 = 0; /*0x7283e0*/
  v17 = result; /*0x7283e4*/
  aP2 = 0; /*0x7283e8*/
  if ( result > 0 ) /*0x7283ec*/
  {
    while ( 1 ) /*0x72840a*/
    {
      StringByIndex = (unsigned __int8 *)INIClass::GetStringByIndex( /*0x72840a*/
                                           v1->__pad_0,
                                           *(CCINIClass **)&stru_830620.__pad_579C[60580],
                                           aP2);
      INIClass::GetString( /*0x728424*/
        (unsigned __int8 ***)v1,
        *(INIClass **)&stru_830620.__pad_579C[60580],
        StringByIndex,
        0,
        String,
        512);
      v5 = (AbstractClass *)__2_YAPAXI_Z(0x1C4u); /*0x72842e*/
      if ( v5 ) /*0x728438*/
      {
        v15[0] = 0; /*0x728442*/
        v15[1] = 0; /*0x728447*/
        v6 = TubeClass::Construct(v5, v15, 0); /*0x728451*/
      }
      else
      {
        v6 = 0; /*0x728455*/
      }
      v7 = strtok(String[0].__pad_0, MEMORY[0x817F70].__pad_0); /*0x728464*/
      *(_WORD *)v6[1].__pad_0 = atoi(v7); /*0x728475*/
      v8 = strtok(0, MEMORY[0x817F70].__pad_0); /*0x728479*/
      *(_WORD *)&v6[1].__pad_0[2] = atoi(v8); /*0x72848a*/
      v9 = strtok(0, MEMORY[0x817F70].__pad_0); /*0x72848e*/
      *(_DWORD *)&v6[1].__pad_0[8] = atoi(v9); /*0x72849f*/
      v10 = strtok(0, MEMORY[0x817F70].__pad_0); /*0x7284a2*/
      *(_WORD *)&v6[1].__pad_0[4] = atoi(v10); /*0x7284b3*/
      v11 = strtok(0, MEMORY[0x817F70].__pad_0); /*0x7284b7*/
      *(_WORD *)&v6[1].__pad_0[6] = atoi(v11); /*0x7284c5*/
      v6[12].uniqueId = -1; /*0x7284c9*/
      v12 = (int *)&v6[1].__pad_0[12]; /*0x7284d3*/
      do /*0x728508*/
      {
        v13 = strtok(0, MEMORY[0x817F70].__pad_0); /*0x7284dd*/
        *v12 = atoi(v13); /*0x7284e8*/
        ++v6[12].uniqueId; /*0x7284f4*/
        if ( *v12 == -1 ) /*0x7284ff*/
          break; /*0x7284ff*/
        ++v3; /*0x728501*/
        ++v12; /*0x728502*/
      }
      while ( v3 < 100 ); /*0x728508*/
      *((_WORD *)CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)v6[1].__pad_0) + 139) = (_WORD)aP2; /*0x728519*/
      result = v17; /*0x728520*/
      aP2 = (CCINIClass *)((char *)aP2 + 1); /*0x728527*/
      if ( (int)aP2 >= v17 ) /*0x72852b*/
        break; /*0x72852b*/
      v1 = v16; /*0x7283f6*/
      v3 = 0; /*0x7283fa*/
    }
  }
  return result; /*0x728533*/
}


// ==== 0x00728540  ObjectClass::method  this=ObjectClass  sig=csp ====
char __thiscall sub_728540(int *this, int a2)
{
  int v2; // esi
  int *v3; // edx
  int v4; // eax
  int v5; // eax
  __int16 v6; // cx
  __int16 v8; // [esp+Eh] [ebp-2h]

  v2 = this->objectTypeFlags; /*0x728547*/
  v8 = HIWORD(v2); /*0x728551*/
  if ( v2 == *(_DWORD *)a2 ) /*0x728555*/
    return 1; /*0x728555*/
  v3 = this + 12; /*0x728565*/
  if ( this->vtable4 == -1 ) /*0x72856b*/
    return 1; /*0x7285bd*/
  while ( 1 ) /*0x72856d*/
  {
    v4 = *v3++; /*0x72856d*/
    v5 = v4 & 7; /*0x728572*/
    v6 = v8 + HIWORD(MEMORY[0x89F688][v5]); /*0x728588*/
    LOWORD(v2) = v2 + LOWORD(MEMORY[0x89F688][v5]); /*0x72859d*/
    v8 = v6; /*0x7285a1*/
    if ( (_WORD)v2 == *(_WORD *)a2 && v6 == *(_WORD *)(a2 + 2) ) /*0x7285ab*/
      break; /*0x7285ab*/
    if ( *v3 == -1 ) /*0x7285b0*/
      return 1; /*0x7285b0*/
  }
  return 0; /*0x7285b4*/
}


// ==== 0x00728630  TubeClass::PowerDrainUpdate  this=TubeClass  sig=csp ====
int __thiscall TubeClass::_vt13(int this, unsigned int *a2)
{
  int *v3; // ebx
  int v4; // ebp

  AbstractClass::ProcessPower((#378 *)this); /*0x72863b*/
  Checksummer::Add_WORD(a2, *(_WORD *)(this + 36)); /*0x728647*/
  Checksummer::Add_WORD(a2, *(_WORD *)(this + 38)); /*0x728653*/
  Checksummer::Add_WORD(a2, *(_WORD *)(this + 40)); /*0x72865f*/
  Checksummer::Add_WORD(a2, *(_WORD *)(this + 42)); /*0x72866b*/
  Power::TimerProcess(*(_DWORD *)(this + 44)); /*0x728676*/
  v3 = (int *)(this + 48); /*0x72867b*/
  v4 = 100; /*0x72867e*/
  do /*0x728691*/
  {
    Power::TimerProcess(*v3++); /*0x728688*/
    --v4; /*0x728690*/
  }
  while ( v4 ); /*0x728691*/
  return Power::TimerProcess(*(_DWORD *)(this + 448)); /*0x7286a1*/
}


// ==== 0x007286B0  TubeClass::StubReturn452  this=TubeClass  sig=csp ====
int TubeClass::_vt12()
{
  return 452; /*0x7286b5*/
}


// ==== 0x007286C0  TubeClass::StubReturn53  this=TubeClass  sig=csp ====
int TubeClass::_vt11()
{
  return 53; /*0x7286c5*/
}


// ==== 0x007286D0  TubeClass::ddtor  this=TubeClass  sig=csp ====
int __stdcall TubeClass::_vt03(int a1, _DWORD *a2)
{
  if ( !a2 ) /*0x7286d6*/
    return -2147467261; /*0x7286d8*/
  *a2 = 189572124; /*0x7286e6*/
  a2[1] = 298955687; /*0x7286ee*/
  a2[2] = 1610635188; /*0x7286f7*/
  a2[3] = 2041169559; /*0x728700*/
  return 0; /*0x7286dd*/
}


// ==== 0x00728710  TubeClass::ProcessEvent  this=TubeClass  sig=csp ====
TubeClass *__thiscall TubeClass::ProcessEvent(_DWORD *Block, char a2)
{
  __int16 *v3; // eax
  int v4; // ecx
  _DWORD **v5; // edx
  int v6; // eax
  _DWORD *v8; // [esp+4h] [ebp-4h] BYREF

  *Block = &TubeClass::`vftable'; /*0x728716*/
  *(Block + 1) = &TubeClass::`vftable'; /*0x72871c*/
  *(Block + 2) = &TubeClass::`vftable'; /*0x728723*/
  *(Block + 3) = &vt_TubeClass; /*0x72872a*/
  AbstractClass::AnnounceExpiredPointer((void **)Block, 1); /*0x728731*/
  v3 = (__int16 *)CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)Block + 18); /*0x72873f*/
  if ( v3 ) /*0x728746*/
  {
    v4 = 0; /*0x72874f*/
    if ( MEMORY[0x8B4148] <= 0 ) /*0x728753*/
    {
LABEL_6:
      v4 = -1; /*0x728767*/
    }
    else
    {
      v5 = (_DWORD **)MEMORY[0x8B413C]; /*0x728755*/
      while ( *v5 != Block ) /*0x72875d*/
      {
        ++v4; /*0x72875f*/
        ++v5; /*0x728760*/
        if ( v4 >= MEMORY[0x8B4148] ) /*0x728765*/
          goto LABEL_6; /*0x728765*/
      }
    }
    if ( v3[139] == v4 ) /*0x728774*/
      v3[139] = -1; /*0x728776*/
  }
  v8 = Block; /*0x72878f*/
  v6 = (*(int (__thiscall **)(int *, _DWORD **))(MEMORY[0x8B4138] + 16))(&MEMORY[0x8B4138], &v8); /*0x728793*/
  if ( v6 != -1 && v6 < MEMORY[0x8B4148] && v6 < --MEMORY[0x8B4148] ) /*0x7287ae*/
  {
    do /*0x7287c6*/
    {
      ++v6; /*0x7287b6*/
      *((_DWORD *)MEMORY[0x8B413C] + v6 - 1) = *((_DWORD *)MEMORY[0x8B413C] + v6); /*0x7287ba*/
    }
    while ( v6 < MEMORY[0x8B4148] ); /*0x7287c6*/
  }
  AbstractClass::DTOR(Block); /*0x7287ca*/
  if ( (a2 & 1) != 0 ) /*0x7287d4*/
    __3_YAXPAX_Z(Block); /*0x7287d7*/
  return (TubeClass *)Block; /*0x7287e1*/
}


// ==== 0x007287F0  sub_7287F0  this=-  sig=ida-proto ====
void sub_7287F0()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x7287fc*/
  MEMORY[0xB0F8F8] = Math::Sqrt(v0 + v0); /*0x72880e*/
}


// ==== 0x00728820  sub_728820  this=-  sig=ida-proto ====
void sub_728820()
{
  MEMORY[0xB0F948] = MEMORY[0xB0F8F8] / 60.0; /*0x72882c*/
}


// ==== 0x00728840  sub_728840  this=-  sig=ida-proto ====
void sub_728840()
{
  MEMORY[0xB0F930] = 1.0 / MEMORY[0xB0F948]; /*0x72884c*/
}


// ==== 0x00728860  sub_728860  this=-  sig=ida-proto ====
void sub_728860()
{
  MEMORY[0xB0F928] = 0.0174532925199433 * 45.0; /*0x72886c*/
}


// ==== 0x00728880  sub_728880  this=-  sig=ida-proto ====
void sub_728880()
{
  MEMORY[0xB0F900] = 0.0174532925199433 * 60.0; /*0x72888c*/
}


// ==== 0x007288A0  sub_7288A0  this=-  sig=ida-proto ====
void sub_7288A0()
{
  MEMORY[0xB0F8D8] = 0.0174532925199433 * 90.0; /*0x7288ac*/
}


// ==== 0x007288C0  sub_7288C0  this=-  sig=ida-proto ====
__int64 sub_7288C0()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(MEMORY[0xB0F8D8] - MEMORY[0xB0F900]); /*0x7288d2*/
  result = Math::RoundToInt(v0 * MEMORY[0xB0F8F8] * 0.5); /*0x7288e6*/
  MEMORY[0xB0F950] = result; /*0x7288eb*/
  return result; /*0x7288f0*/
}


// ==== 0x00728900  sub_728900  this=-  sig=ida-proto ====
void sub_728900()
{
  MEMORY[0xB0F908] = Math::ArcTan((double)MEMORY[0xB0F950] * 0.00390625); /*0x728917*/
}


// ==== 0x00728930  sub_728930  this=-  sig=ida-proto ====
void sub_728930()
{
  MEMORY[0xB0F920] = Math::ArcTan((double)(2 * MEMORY[0xB0F950]) / MEMORY[0xB0F8F8]); /*0x728952*/
}


// ==== 0x00728960  sub_728960  this=-  sig=ida-proto ====
__int64 sub_728960()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * MEMORY[0xB0F950]) + 0.5); /*0x72897b*/
  MEMORY[0xB0F944] = result; /*0x728980*/
  return result; /*0x728986*/
}


// ==== 0x00728990  sub_728990  this=-  sig=ida-proto ====
int sub_728990()
{
  MEMORY[0xB0F8F0] = 0; /*0x728992*/
  return 0; /*0x72899e*/
}


// ==== 0x007289A0  sub_7289A0  this=-  sig=ida-proto ====
int sub_7289A0()
{
  MEMORY[0xB0F910] = 0; /*0x7289a2*/
  MEMORY[0xB0F914] = 0; /*0x7289a7*/
  MEMORY[0xB0F918] = 0; /*0x7289ac*/
  return 0; /*0x7289b1*/
}


// ==== 0x007289C0  sub_7289C0  this=-  sig=ida-proto ====
int sub_7289C0()
{
  MEMORY[0xB0F940] = 0; /*0x7289c5*/
  MEMORY[0xB0F938] = 128; /*0x7289cf*/
  MEMORY[0xB0F93C] = 128; /*0x7289d4*/
  return 128; /*0x7289d9*/
}


// ==== 0x007289E0  sub_7289E0  this=-  sig=ida-proto ====
int sub_7289E0()
{
  MEMORY[0xB0F8E0] = 0; /*0x7289e2*/
  MEMORY[0xB0F8E4] = 0; /*0x7289e7*/
  MEMORY[0xB0F8E8] = 0; /*0x7289ec*/
  MEMORY[0xB0F8EC] = 0; /*0x7289f1*/
  return 0; /*0x7289f6*/
}


// ==== 0x00728A00  TunnelLocomotionClass::SmallFunc_728A00  this=TunnelLocomotionClass  sig=csp ====
int __thiscall sub_728A00(int this)
{
  LocomotionClass::Init((_DWORD *)this); /*0x728a03*/
  *(_DWORD *)(this + 24) = 0; /*0x728a0d*/
  *(_DWORD *)(this + 28) = MEMORY[0xB0F910]; /*0x728a16*/
  *(_DWORD *)(this + 32) = MEMORY[0xB0F914]; /*0x728a1e*/
  *(_DWORD *)(this + 36) = MEMORY[0xB0F918]; /*0x728a27*/
  *(_DWORD *)(this + 40) = MEMORY[0xA8ED84]; /*0x728a30*/
  *(_DWORD *)(this + 48) = 0; /*0x728a33*/
  *(_DWORD *)(this + 52) = 0; /*0x728a36*/
  *(_BYTE *)(this + 56) = 0; /*0x728a39*/
  *(_DWORD *)this = &TunnelLocomotionClass::`vftable'; /*0x728a3c*/
  *(_DWORD *)(this + 4) = &vt_TunnelLocomotionClass; /*0x728a42*/
  return this; /*0x728a4b*/
}


// ==== 0x00728A50  JumpjetLocomotionClass::ShortFunc_728A50  this=JumpjetLocomotionClass  sig=csp ====
bool __stdcall JumpjetLocomotionClass::sub_728A50(int a1)
{
  return *(_DWORD *)(a1 + 20) != 0; /*0x728a5c*/
}


// ==== 0x00728A60  TunnelLocomotionClass::StubReturnZero_20  this=TunnelLocomotionClass  sig=csp ====
char __stdcall JumpjetLocomotionClass::sub_728A60(_DWORD *a1)
{
  char result; // al

  if ( !(*(unsigned __int8 (__stdcall **)(_DWORD *))(*a1 + 16))(a1) ) /*0x728a68*/
    return 0; /*0x728a68*/
  result = 1; /*0x728a72*/
  if ( a1[5] == 1 ) /*0x728a79*/
    return 0; /*0x728a7b*/
  return result; /*0x728a7d*/
}


// ==== 0x00728A90  JumpjetLocomotionClass::GetCoordinateConditional_0  this=JumpjetLocomotionClass  sig=csp ====
_DWORD *__stdcall JumpjetLocomotionClass::sub_728A90(_DWORD *a1, _DWORD *a2)
{
  _DWORD *result; // eax
  int v3; // ecx
  int v4; // edx
  int v5; // esi

  if ( (*(unsigned __int8 (__stdcall **)(_DWORD *))(*a1 + 16))(a1) ) /*0x728a99*/
  {
    result = a2; /*0x728aa0*/
    v3 = a1[6]; /*0x728aa4*/
    v4 = a1[7]; /*0x728aa7*/
    v5 = a1[8]; /*0x728aaa*/
  }
  else
  {
    v3 = *(_DWORD *)(a1[2] + 156); /*0x728ac7*/
    v4 = *(_DWORD *)(a1[2] + 160); /*0x728ac9*/
    v5 = *(_DWORD *)(a1[2] + 164); /*0x728acc*/
    result = a2; /*0x728acf*/
  }
  *a2 = v3; /*0x728aaf*/
  a2[1] = v4; /*0x728ab1*/
  a2[2] = v5; /*0x728ab4*/
  return result; /*0x728ab7*/
}


// ==== 0x00728AF0  TunnelLocomotionClass::SyncMovementPosition  this=TunnelLocomotionClass  sig=csp ====
int __stdcall JumpjetLocomotionClass::sub_728AF0(int a1, int a2, int a3, int a4)
{
  int result; // eax
  int v5; // ecx
  int v6; // ebx
  int v7; // ebp
  int v8; // edi
  int v9; // eax
  _DWORD *v10; // eax
  int v11; // eax
  _DWORD v12[3]; // [esp+4h] [ebp-Ch] BYREF

  result = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(a1 + 8) + 892))(*(_DWORD *)(a1 + 8)); /*0x728afd*/
  if ( !(_BYTE)result ) /*0x728b05*/
  {
    result = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(a1 + 8) + 896))(*(_DWORD *)(a1 + 8)); /*0x728b10*/
    if ( !(_BYTE)result ) /*0x728b18*/
    {
      result = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(a1 + 8) + 468))(*(_DWORD *)(a1 + 8)); /*0x728b23*/
      if ( !(_BYTE)result ) /*0x728b2b*/
      {
        result = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(a1 + 8) + 472))(*(_DWORD *)(a1 + 8)); /*0x728b36*/
        if ( !(_BYTE)result ) /*0x728b3e*/
        {
          v5 = *(_DWORD *)(a1 + 8); /*0x728b44*/
          v6 = a3; /*0x728b48*/
          v7 = a4; /*0x728b4d*/
          v8 = a2; /*0x728b52*/
          v12[1] = a3; /*0x728b56*/
          v12[0] = a2; /*0x728b5a*/
          v12[2] = a4; /*0x728b5e*/
          v9 = (*(int (__thiscall **)(int))(*(_DWORD *)v5 + 136))(v5); /*0x728b64*/
          v10 = (_DWORD *)(*(int (__thiscall **)(int, int *, _DWORD *))(*(_DWORD *)v9 + 108))(v9, &a2, v12); /*0x728b78*/
          *(_DWORD *)(a1 + 24) = *v10; /*0x728b80*/
          *(_DWORD *)(a1 + 28) = v10[1]; /*0x728b86*/
          *(_DWORD *)(a1 + 32) = v10[2]; /*0x728b8c*/
          if ( (v8 != MEMORY[0xB0F910] || v6 != MEMORY[0xB0F914] || v7 != MEMORY[0xB0F918]) /*0x728bb5*/
            && (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(a1 + 8) + 456))(*(_DWORD *)(a1 + 8)) < 0 )
          {
            v11 = *(_DWORD *)(a1 + 20); /*0x728bb7*/
            if ( v11 != 3 && v11 != 5 && v11 != 1 && v11 != 6 && v11 != 2 ) /*0x728bd1*/
            {
              (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(a1 + 8) + 292))(*(_DWORD *)(a1 + 8), 0); /*0x728bda*/
              *(_DWORD *)(a1 + 20) = 4; /*0x728be0*/
            }
          }
          result = *(_DWORD *)(a1 + 20); /*0x728be7*/
          if ( !result ) /*0x728bef*/
            *(_DWORD *)(a1 + 20) = 1; /*0x728bf1*/
        }
      }
    }
  }
  return result; /*0x728bf8*/
}


// ==== 0x00728C00  TunnelLocomotionClass::ProcessFormationPosition  this=TunnelLocomotionClass  sig=csp ====
void __stdcall TunnelLocomotionClass::ProcessFormationPosition(_DWORD *a1)
{
  _DWORD *v2; // esi
  int v3; // eax
  int v4; // edx
  double v5; // st7
  int TileIndexMapClass; // eax
  int v7; // eax
  int v8; // [esp+14h] [ebp-20h] BYREF
  __int16 v9[2]; // [esp+18h] [ebp-1Ch] BYREF
  __int16 v10[2]; // [esp+1Ch] [ebp-18h] BYREF
  _BYTE v11[4]; // [esp+20h] [ebp-14h] BYREF
  int v12; // [esp+24h] [ebp-10h] BYREF
  int v13; // [esp+28h] [ebp-Ch] BYREF
  int v14; // [esp+2Ch] [ebp-8h]
  int v15; // [esp+30h] [ebp-4h]
  unsigned __int16 v16; // [esp+3Ah] [ebp+6h]

  switch ( a1[5] ) /*0x728c17*/
  {
    case 1: /*0x728c17*/
    case 5: /*0x728c17*/
    case 6: /*0x728c17*/
    case 7: /*0x728c17*/
      goto LABEL_11;
    case 2: /*0x728c17*/
      a1[5] = 7; /*0x728dd9*/
      goto LABEL_11; /*0x728dd9*/
    case 3: /*0x728c17*/
      a1[5] = 5; /*0x728dd0*/
LABEL_11:
      a1[6] = MEMORY[0xB0F910]; /*0x728de0*/
      a1[7] = MEMORY[0xB0F914]; /*0x728df0*/
      a1[8] = MEMORY[0xB0F918]; /*0x728df9*/
      break; /*0x728df9*/
    case 4: /*0x728c17*/
      v2 = a1 + 6; /*0x728c29*/
      v3 = *(_DWORD *)(a1[2] + 156); /*0x728c31*/
      v4 = *(_DWORD *)(a1[2] + 164); /*0x728c38*/
      v14 = *(_DWORD *)(a1[2] + 160) - a1[7]; /*0x728c3b*/
      v15 = v4; /*0x728c43*/
      v13 = v3 - a1[6]; /*0x728c4b*/
      v5 = Math::Sqrt((double)v13 * (double)v13 + (double)v14 * (double)v14); /*0x728c64*/
      if ( (double)(int)Math::RoundToInt(v5) > MEMORY[0xB0F8F8] ) /*0x728c84*/
      {
        v8 = *(_DWORD *)(*(int (__thiscall **)(_DWORD, _BYTE *))(*(_DWORD *)a1[2] + 440))(a1[2], v11); /*0x728c9e*/
        v9[0] = 0; /*0x728cc4*/
        v9[1] = 0; /*0x728cc9*/
        TileIndexMapClass = MapClass::GetTileIndex(&MEMORY[0x87F7E8], (__int16 *)&v8, 0, 0); /*0x728cce*/
        v7 = *LayerClass::Pathfinding_Find( /*0x728cea*/
                &MEMORY[0x87F7E8],
                (int)&v12,
                &v12,
                (__int16 *)&v8,
                1,
                TileIndexMapClass,
                0,
                0,
                1,
                1,
                0,
                0,
                1,
                1,
                v9,
                0,
                0);
        v16 = HIWORD(v7); /*0x728cf3*/
        if ( (_WORD)v7 != (_WORD)MEMORY[0xB0F8F0] ) /*0x728cf7*/
          goto LABEL_8; /*0x728cf7*/
        if ( HIWORD(v7) == HIWORD(MEMORY[0xB0F8F0]) ) /*0x728d09*/
        {
          v10[0] = 0; /*0x728d33*/
          v10[1] = 0; /*0x728d38*/
          v7 = *LayerClass::Pathfinding_Find( /*0x728d42*/
                  &MEMORY[0x87F7E8],
                  (int)v10,
                  &v13,
                  (__int16 *)&v8,
                  1,
                  -1,
                  0,
                  0,
                  1,
                  1,
                  0,
                  0,
                  1,
                  1,
                  v10,
                  0,
                  0);
          v16 = HIWORD(v7); /*0x728d44*/
        }
        if ( __PAIR32__(v16, v7) == MEMORY[0xB0F8F0] ) /*0x728d4f*/
        {
          (*(void (__stdcall **)(int, _DWORD, int, _DWORD, int, int, _DWORD))(*(_DWORD *)a1[2] + 364))( /*0x728d7c*/
            a1[2] + 108,
            0,
            MEMORY[0x8871E0]->?[5],
            0,
            1,
            1,
            0);
          *v2 = MEMORY[0xB0F910]; /*0x728d88*/
          a1[7] = MEMORY[0xB0F914]; /*0x728d90*/
          a1[8] = MEMORY[0xB0F918]; /*0x728d99*/
        }
        else
        {
LABEL_8:
          *v2 = ((__int16)v7 << 8) + 128; /*0x728dbf*/
          a1[7] = ((__int16)v16 << 8) + 128; /*0x728dc1*/
          a1[8] = 0; /*0x728dc4*/
        }
      }
      break; /*0x728da1*/
    default:
      return;
  }
}


// ==== 0x00728E30  TunnelLocomotionClass::IdleStateMachine  this=TunnelLocomotionClass  sig=csp ====
char __userpurge InfantryClass::IdleStateMachine@<al>(int a1@<edi>, int a2)
{
  int v2; // edi
  int v3; // eax
  int v4; // edi
  int *v5; // eax
  void **v6; // eax
  int *v7; // edx
  _DWORD *v8; // ecx
  int v9; // edx
  int v10; // eax
  int v11; // edi
  _BYTE *v12; // eax
  int v13; // edi
  int v14; // eax
  int *v15; // edx
  int *v16; // edx
  int v19; // [esp+Ch] [ebp-Ch] BYREF
  int v20; // [esp+10h] [ebp-8h] BYREF
  int v21; // [esp+14h] [ebp-4h]
  int retaddr; // [esp+18h] [ebp+0h]
  int v23; // [esp+20h] [ebp+8h]

  if ( !(*(unsigned __int8 (__stdcall **)(int))(*(_DWORD *)a2 + 16))(a2) ) /*0x728e3b*/
    return 0; /*0x7291a0*/
  v2 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(a2 + 8) + 456))(*(_DWORD *)(a2 + 8)); /*0x728e55*/
  v3 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(a2 + 8) + 464))(*(_DWORD *)(a2 + 8)); /*0x728e59*/
  switch ( *(_DWORD *)(a2 + 20) ) /*0x728e6c*/
  {
    case 1: /*0x728e6c*/
      if ( v2 >= 0 ) /*0x728e75*/
        InfantryClass::ProcessTunnelMovement(a2 - 4); /*0x728e86*/
      else
        *(_DWORD *)(a2 + 20) = 3; /*0x728e77*/
      break; /*0x728e7e*/
    case 2: /*0x728e6c*/
      if ( v2 >= 0 ) /*0x728e92*/
      {
        if ( !*(_DWORD *)(a2 + 48) /*0x728ece*/
          || (v4 = *(_DWORD *)(a2 + 48), (double)(v4 - Timeout::GetRemaining((int *)(a2 + 36))) / (double)v4 == 1.0) )
        {
          (*(void (__thiscall **)(_DWORD, _DWORD, int, int))(**(_DWORD **)(a2 + 8) + 1348))( /*0x728ee0*/
            *(_DWORD *)(a2 + 8),
            0,
            1072693248,
            a1);
          v5 = *(int **)(a2 + 8); /*0x728ee6*/
          *(_DWORD *)(a2 + 20) = 3; /*0x728ee9*/
          v5 += 39; /*0x728ef0*/
          v20 = *v5; /*0x728ef9*/
          v21 = v5[1]; /*0x728f06*/
          retaddr = v5[2]; /*0x728f11*/
          StartAudioControllerAt(MEMORY[0x8871E0]->ImpactLandSound, (int)&v20, 0); /*0x728f1b*/
          v6 = (void **)__2_YAPAXI_Z(0x1C8u); /*0x728f25*/
          if ( v6 ) /*0x728f2f*/
          {
            v7 = (int *)(*(_DWORD *)(a2 + 8) + 156); /*0x728f36*/
            v20 = *v7; /*0x728f49*/
            v21 = v7[1]; /*0x728f50*/
            retaddr = v7[2]; /*0x728f5c*/
            AnimClass::ctor(v6, (void *)MEMORY[0x8871E0]->?[3], &v20, 0, 1, (void *)0x600, 0, 0); /*0x728f6f*/
          }
          (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(a2 + 8) + 220))(*(_DWORD *)(a2 + 8), 0); /*0x728f7b*/
        }
      }
      else
      {
        *(_DWORD *)(a2 + 20) = 3; /*0x728e94*/
      }
      break; /*0x728e9b*/
    case 3: /*0x728e6c*/
      v8 = *(_DWORD **)(a2 + 8); /*0x728f86*/
      if ( v3 == -256 ) /*0x728f8e*/
      {
        (*(void (__thiscall **)(_DWORD *, _DWORD))(*v8 + 292))(v8, 0); /*0x728f94*/
        *(_DWORD *)(a2 + 20) = 4; /*0x728f9a*/
      }
      else
      {
        v19 = v8[39]; /*0x728fb2*/
        v20 = v8[40]; /*0x728fb9*/
        v21 = v8[41]; /*0x728fc0*/
        v9 = *v8; /*0x728fc4*/
        if ( v21 <= -256 ) /*0x728fcb*/
        {
          (*(void (__stdcall **)(_DWORD))(v9 + 292))(0); /*0x729023*/
          *(_DWORD *)(a2 + 20) = 4; /*0x729029*/
        }
        else
        {
          v23 = (*(int (__stdcall **)(int))(v9 + 1336))(a1); /*0x728fd3*/
          v10 = Math::RoundToInt((double)v23 * *(double *)&MEMORY[0x8871E0]->TunnelSpeed); /*0x728fe3*/
          if ( v10 <= 5 ) /*0x728feb*/
            v10 = 5; /*0x728fed*/
          if ( retaddr - v10 < -256 ) /*0x729002*/
            retaddr = -256; /*0x729004*/
          (*(void (__thiscall **)(_DWORD, int *))(**(_DWORD **)(a2 + 8) + 436))(*(_DWORD *)(a2 + 8), &v20); /*0x729016*/
        }
      }
      break; /*0x728fa1*/
    case 4: /*0x728e6c*/
      FindUnitPlacementTarget(a2 - 4); /*0x729038*/
      break; /*0x72903d*/
    case 5: /*0x728e6c*/
      AnimClass::GetAnimation(a2 - 4); /*0x729045*/
      break; /*0x72904a*/
    case 6: /*0x728e6c*/
      if ( !*(_DWORD *)(a2 + 48) /*0x72907d*/
        || (v11 = *(_DWORD *)(a2 + 48), (double)(v11 - Timeout::GetRemaining((int *)(a2 + 36))) / (double)v11 == 1.0) )
      {
        (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(a2 + 8) + 396))(*(_DWORD *)(a2 + 8), 2); /*0x729086*/
        v12 = *(_BYTE **)(a2 + 8); /*0x72908c*/
        if ( v12[144] ) /*0x72908f*/
        {
          if ( !v12[129] && !v12[141] ) /*0x7290a3*/
          {
            (*(void (__stdcall **)(int))(*(_DWORD *)a2 + 72))(a2); /*0x7290b2*/
            goto LABEL_32; /*0x7290b5*/
          }
        }
      }
      break; /*0x7290b5*/
    case 7: /*0x728e6c*/
      if ( !*(_DWORD *)(a2 + 48) /*0x7290e5*/
        || (v13 = *(_DWORD *)(a2 + 48), (double)(v13 - Timeout::GetRemaining((int *)(a2 + 36))) / (double)v13 == 1.0) )
      {
LABEL_32:
        *(_DWORD *)(a2 + 20) = 0; /*0x7290e7*/
        FootClass::ClearPathIndex(*(_DWORD **)(a2 + 8)); /*0x7290f1*/
      }
      break; /*0x7290f1*/
    default:
      break;
  }
  v14 = *(_DWORD *)(a2 + 8); /*0x7290f6*/
  if ( *(_BYTE *)(v14 + 131) ) /*0x7290fa*/
  {
    if ( !(unsigned __int8)House::IsHumanPlayer(*(#375 **)(v14 + 540)) ) /*0x72910e*/
    {
      v15 = (int *)(*(_DWORD *)(a2 + 8) + 156); /*0x72911a*/
      v19 = *v15; /*0x729122*/
      v20 = v15[1]; /*0x72912e*/
      v21 = v15[2]; /*0x72913a*/
      if ( Cell::IsPassable(&v19) /*0x72917b*/
        || (*(_DWORD *)MEMORY[0xA8B230] & 0x1000) != 0
        && (v16 = (int *)(*(_DWORD *)(a2 + 8) + 156), v19 = *v16, v20 = v16[1], v21 = v16[2], Game::Stub3((int)&v19)) )
      {
        (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(a2 + 8) + 336))(*(_DWORD *)(a2 + 8)); /*0x729189*/
      }
    }
  }
  InfantryClass::ReleaseInfiltrators(*(_DWORD *)(a2 + 8)); /*0x729192*/
  return 1; /*0x729199*/
}


// ==== 0x007291D0  TunnelLocomotionClass::StubReturnZero_21  this=TunnelLocomotionClass  sig=csp ====
int __stdcall JumpjetLocomotionClass::sub_7291D0(int a1, char a2)
{
  if ( *(_DWORD *)(a1 + 20) == 4 ) /*0x7291d8*/
    return (a2 != 0) + 4; /*0x7291e5*/
  else
    return 0; /*0x7291eb*/
}


// ==== 0x007291F0  InfantryClass::ProcessTunnelMovement  this=InfantryClass  sig=csp ====
void **__thiscall sub_7291F0(int this)
{
  void **result; // eax
  int v3; // eax
  int v4; // ecx
  int v5; // edx
  int v6; // eax
  double v7; // st7
  int v8; // eax
  int v9; // eax
  wchar_t *v10; // ecx
  int *v11; // edx
  int *v12; // ecx
  int v13; // [esp+18h] [ebp-18h]
  int v14; // [esp+1Ch] [ebp-14h] BYREF
  int v15; // [esp+20h] [ebp-10h] BYREF
  int v16; // [esp+24h] [ebp-Ch]
  int v17; // [esp+28h] [ebp-8h]

  result = (void **)TimerClass::Active(*(_DWORD *)(this + 12) + 904); /*0x7291ff*/
  if ( !(_BYTE)result ) /*0x729206*/
  {
    v3 = *(_DWORD *)(*(_DWORD *)(this + 12) + 156); /*0x72921d*/
    v4 = *(_DWORD *)(*(_DWORD *)(this + 12) + 160); /*0x72921f*/
    v17 = *(_DWORD *)(*(_DWORD *)(this + 12) + 164); /*0x729225*/
    v5 = *(_DWORD *)(this + 28) - v3; /*0x72922c*/
    v6 = *(_DWORD *)(this + 32); /*0x72922e*/
    v15 = v5; /*0x729231*/
    v13 = v4 - v6; /*0x72923d*/
    v7 = Math::CalcAngle((double)(v4 - v6), (double)v5); /*0x72924c*/
    LOWORD(v13) = Math::RoundToInt((v7 - 1.570796326794897) * -10430.06004058427); /*0x729276*/
    if ( (_WORD)v13 == *(_WORD *)ProgressTimer::GetValue((_WORD *)(*(_DWORD *)(this + 12) + 904), &v14) ) /*0x729284*/
    {
      v8 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 12) + 132))(*(_DWORD *)(this + 12)); /*0x72929f*/
      v9 = Math::RoundToInt(64.0 / (double)*(int *)(v8 + 1820) / *(double *)&MEMORY[0x8871E0]->TunnelSpeed); /*0x7292ba*/
      v10 = MEMORY[0xA8ED84]; /*0x7292bf*/
      *(_DWORD *)(this + 24) = 2; /*0x7292c8*/
      *(_DWORD *)(this + 40) = v10; /*0x7292d1*/
      *(_DWORD *)(this + 44) = v16; /*0x7292d7*/
      *(_DWORD *)(this + 48) = v9; /*0x7292da*/
      *(_DWORD *)(this + 52) = v9; /*0x7292dd*/
      v11 = (int *)(*(_DWORD *)(this + 12) + 156); /*0x7292e3*/
      v15 = *v11; /*0x7292eb*/
      v16 = v11[1]; /*0x7292f7*/
      v17 = v11[2]; /*0x7292fe*/
      StartAudioControllerAt(MEMORY[0x8871E0]->ImpactLandSound, (int)&v15, 0); /*0x72930c*/
      result = (void **)__2_YAPAXI_Z(0x1C8u); /*0x729316*/
      if ( result ) /*0x729320*/
      {
        v12 = (int *)(*(_DWORD *)(this + 12) + 156); /*0x729327*/
        v15 = *v12; /*0x72933a*/
        v16 = v12[1]; /*0x729341*/
        v17 = v12[2]; /*0x72934d*/
        result = AnimClass::ctor(result, (void *)MEMORY[0x8871E0]->?[3], &v15, 0, 1, (void *)0x600, 0, 0); /*0x729360*/
      }
      *(_BYTE *)(this + 56) = 0; /*0x729365*/
    }
    else
    {
      return (void **)(*(int (__stdcall **)(int, int))(*(_DWORD *)(this + 4) + 76))(this + 4, v13); /*0x729292*/
    }
  }
  return result; /*0x729295*/
}


// ==== 0x00729370  AnimClass::ProcessSequence  this=AnimClass  sig=csp ====
void __thiscall sub_729370(int this)
{
  int v2; // edi
  int v3; // edx
  int v4; // eax
  int *v5; // ecx
  void **v6; // eax
  int *v7; // ecx
  int v8; // [esp+10h] [ebp-Ch] BYREF
  int v9; // [esp+14h] [ebp-8h]
  int v10; // [esp+18h] [ebp-4h]

  v2 = *(_DWORD *)(this + 52); /*0x729377*/
  if ( !v2 ) /*0x729380*/
    goto LABEL_7; /*0x729380*/
  v3 = *(_DWORD *)(this + 40); /*0x729382*/
  v4 = *(_DWORD *)(this + 48); /*0x729385*/
  if ( v3 != -1 ) /*0x72938b*/
  {
    if ( (int)MEMORY[0xA8ED84] - v3 >= v4 ) /*0x729397*/
      v4 = 0; /*0x72939d*/
    else
      v4 -= (int)MEMORY[0xA8ED84] - v3; /*0x729399*/
  }
  if ( (double)(v2 - v4) / (double)*(int *)(this + 52) == 1.0 ) /*0x7293b8*/
  {
LABEL_7:
    (*(void (__thiscall **)(_DWORD, _DWORD, int))(**(_DWORD **)(this + 12) + 1348))( /*0x7293ca*/
      *(_DWORD *)(this + 12),
      0,
      1072693248);
    v5 = *(int **)(this + 12); /*0x7293d0*/
    *(_DWORD *)(this + 24) = 3; /*0x7293d3*/
    v5 += 39; /*0x7293da*/
    v8 = *v5; /*0x7293e4*/
    v9 = v5[1]; /*0x7293ef*/
    v10 = v5[2]; /*0x7293fb*/
    StartAudioControllerAt(MEMORY[0x8871E0]->ImpactLandSound, (int)&v8, 0); /*0x729405*/
    v6 = (void **)__2_YAPAXI_Z(0x1C8u); /*0x72940f*/
    if ( v6 ) /*0x729419*/
    {
      v7 = (int *)(*(_DWORD *)(this + 12) + 156); /*0x729420*/
      v8 = *v7; /*0x729433*/
      v9 = v7[1]; /*0x72943a*/
      v10 = v7[2]; /*0x729446*/
      AnimClass::ctor(v6, (void *)MEMORY[0x8871E0]->?[3], &v8, 0, 1, (void *)0x600, 0, 0); /*0x729459*/
    }
    (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(this + 12) + 220))(*(_DWORD *)(this + 12), 0); /*0x729465*/
  }
}


// ==== 0x00729480  FootClass::Cleanup  this=FootClass  sig=csp ====
void __thiscall sub_729480(int this)
{
  int v1; // edi
  int v2; // eax
  int v3; // esi

  v1 = *(_DWORD *)(this + 52); /*0x729484*/
  if ( !v1 ) /*0x72948d*/
    goto LABEL_7; /*0x72948d*/
  v2 = *(_DWORD *)(this + 48); /*0x72948f*/
  v3 = *(_DWORD *)(this + 40); /*0x729493*/
  if ( v3 != -1 ) /*0x729499*/
  {
    if ( (int)MEMORY[0xA8ED84] - v3 >= v2 ) /*0x7294a5*/
      v2 = 0; /*0x7294ab*/
    else
      v2 -= (int)MEMORY[0xA8ED84] - v3; /*0x7294a7*/
  }
  if ( (double)(v1 - v2) / (double)*(int *)(this + 52) == 1.0 ) /*0x7294c7*/
  {
LABEL_7:
    *(_DWORD *)(this + 24) = 0; /*0x7294c9*/
    FootClass::ClearPathIndex(*(_DWORD **)(this + 12)); /*0x7294d3*/
  }
}


// ==== 0x007294E0  ObjectClass::method_7294E0  this=ObjectClass  sig=csp ====
int __thiscall sub_7294E0(_DWORD *this)
{
  _DWORD *v2; // ecx
  int v3; // eax
  int result; // eax
  int v5; // [esp+4h] [ebp-10h]
  _DWORD v6[2]; // [esp+8h] [ebp-Ch] BYREF
  int v7; // [esp+10h] [ebp-4h]

  v2 = (_DWORD *)this->vtable4; /*0x7294e6*/
  v6[0] = v2[39]; /*0x7294f5*/
  v6[1] = v2[40]; /*0x7294fc*/
  v7 = v2[41]; /*0x729508*/
  if ( v7 <= -256 ) /*0x72950c*/
  {
    result = (*(int (__thiscall **)(_DWORD *, _DWORD))(*v2 + 292))(v2, 0); /*0x729569*/
    this->nextArrayIndex = 4; /*0x72956f*/
  }
  else
  {
    v5 = (*(int (__thiscall **)(_DWORD *))(*v2 + 1336))(v2); /*0x72951c*/
    v3 = Math::RoundToInt((double)v5 * *(double *)&MEMORY[0x8871E0]->TunnelSpeed); /*0x729527*/
    if ( v3 <= 5 ) /*0x72952f*/
      v3 = 5; /*0x729531*/
    v7 -= v3; /*0x729542*/
    if ( v7 < -256 ) /*0x729546*/
      v7 = -256; /*0x729548*/
    return (*(int (__thiscall **)(_DWORD, _DWORD *))(*(_DWORD *)this->vtable4 + 436))(this->vtable4, v6); /*0x72955a*/
  }
  return result; /*0x729560*/
}


// ==== 0x00729580  ObjectClass::FindUnitPlacementTarget  this=ObjectClass  sig=csp ====
int __thiscall FindUnitPlacementTarget(int this)
{
  int *v2; // eax
  int v3; // ecx
  int v4; // eax
  int v5; // eax
  int v6; // edx
  int *v7; // eax
  int v8; // edi
  void *v9; // eax
  int v10; // ecx
  int TileIndexMapClass; // eax
  int v12; // eax
  int v13; // ecx
  __int64 v14; // rax
  int v16; // eax
  int v17; // ecx
  double v18; // st7
  __int16 v19; // ax
  int v20; // edi
  unsigned int v21; // ebx
  double v22; // st7
  double v23; // st7
  __int16 v24[4]; // [esp+1Ch] [ebp-34h] BYREF
  int v25; // [esp+24h] [ebp-2Ch] BYREF
  double v26; // [esp+28h] [ebp-28h] BYREF
  double v27; // [esp+30h] [ebp-20h] BYREF
  int v28; // [esp+38h] [ebp-18h]
  int v29; // [esp+44h] [ebp-Ch] BYREF
  int v30; // [esp+48h] [ebp-8h]
  int v31; // [esp+4Ch] [ebp-4h]

  v2 = (int *)(*(_DWORD *)(this + 12) + 156); /*0x729591*/
  v29 = *v2; /*0x729598*/
  v30 = v2[1]; /*0x72959f*/
  v3 = v2[2]; /*0x7295a3*/
  v4 = *(_DWORD *)(this + 28); /*0x7295a6*/
  v31 = v3; /*0x7295a9*/
  HIDWORD(v27) = *(_DWORD *)(this + 32) - v30; /*0x7295b4*/
  LODWORD(v27) = v4 - v29; /*0x7295bc*/
  Vector::2DMagnitudeMath((int *)&v27); /*0x7295c0*/
  if ( v5 >= 20 ) /*0x7295c8*/
  {
    LODWORD(v27) = *(_DWORD *)(this + 28) - v29; /*0x72981c*/
    v18 = Math::CalcAngle((double)(v30 - *(_DWORD *)(this + 32)), (double)SLODWORD(v27)); /*0x72983f*/
    v19 = Math::RoundToInt((v18 - 1.570796326794897) * -10430.06004058427); /*0x729850*/
    v20 = v31; /*0x729866*/
    *(_DWORD *)v24 = v29; /*0x72986e*/
    v27 = (double)(v19 - 0x3FFF) * -0.00009587672516830327; /*0x729878*/
    v21 = HIDWORD(v27); /*0x729880*/
    v26 = (double)v30; /*0x72988a*/
    v22 = Math::SinCos(v27); /*0x72988e*/
    v25 = Math::RoundToInt(v26 - v22 * 19.0); /*0x7298a8*/
    v23 = Math::ArcTan2(COERCE_DOUBLE(__PAIR64__(v21, LODWORD(v27)))); /*0x7298ac*/
    v29 = Math::RoundToInt(v23 * 19.0 + (double)*(int *)v24); /*0x7298c7*/
    v30 = v25; /*0x7298cb*/
    v31 = v20; /*0x7298cf*/
  }
  else
  {
    v6 = *(_DWORD *)(this + 28); /*0x7295d1*/
    v30 = *(_DWORD *)(this + 32); /*0x7295d7*/
    v7 = *(int **)(this + 12); /*0x7295db*/
    v29 = v6; /*0x7295de*/
    v31 = -256; /*0x7295e6*/
    v27 = *(double *)(v7 + 39); /*0x7295fd*/
    v28 = v7[41]; /*0x729612*/
    v8 = *v7; /*0x729616*/
    v9 = Coord::To_Cell(&MEMORY[0x87F7E8], &v27); /*0x72961d*/
    if ( (*(int (__thiscall **)(_DWORD, void *, int, int, _DWORD, int))(v8 + 428))( /*0x72965b*/
           *(_DWORD *)(this + 12),
           v9,
           -1,
           -1,
           0,
           1)
      && (v10 = *(_DWORD *)(this + 12) + 156,
          v27 = *(double *)v10,
          v28 = *(_DWORD *)(v10 + 8),
          IsCoordVisibleMap(&MEMORY[0x87F7E8], &v27)) )
    {
      *(_DWORD *)v24 = *(_DWORD *)(*(int (__thiscall **)(_DWORD, int *))(**(_DWORD **)(this + 12) + 440))( /*0x72967b*/
                                    *(_DWORD *)(this + 12),
                                    &v25);
      v25 = 0; /*0x7296a0*/
      TileIndexMapClass = MapClass::GetTileIndex(&MEMORY[0x87F7E8], v24, 0, 0); /*0x7296aa*/
      v12 = *LayerClass::Pathfinding_Find( /*0x7296c6*/
               &MEMORY[0x87F7E8],
               (int)&v26,
               &v26,
               v24,
               1,
               TileIndexMapClass,
               0,
               0,
               1,
               1,
               0,
               0,
               1,
               1,
               (__int16 *)&v25,
               0,
               0);
      *(_DWORD *)v24 = v12; /*0x7296cf*/
      if ( (_WORD)v12 == (_WORD)MEMORY[0xB0F8F0] ) /*0x7296d3*/
      {
        if ( v24[1] == HIWORD(MEMORY[0xB0F8F0]) ) /*0x7296e5*/
        {
          v13 = *(_DWORD *)(this + 12); /*0x7296f3*/
          v25 = 0; /*0x729704*/
          v14 = ((__int64 (__thiscall *)(int, double *))*(_DWORD *)(*(_DWORD *)v13 + 440))(v13, &v26); /*0x729715*/
          v12 = *LayerClass::Pathfinding_Find( /*0x72972b*/
                   &MEMORY[0x87F7E8],
                   SHIDWORD(v14),
                   &v27,
                   (__int16 *)v14,
                   1,
                   -1,
                   6,
                   0,
                   1,
                   1,
                   0,
                   0,
                   1,
                   1,
                   (__int16 *)&v25,
                   0,
                   0);
          *(_DWORD *)v24 = v12; /*0x72972d*/
        }
        if ( __PAIR32__(v24[1], v12) == MEMORY[0xB0F8F0] ) /*0x729738*/
          return (*(int (__thiscall **)(_DWORD, int, _DWORD, int, _DWORD, int, int, _DWORD))(**(_DWORD **)(this + 12) /*0x729773*/
                                                                                           + 364))(
                   *(_DWORD *)(this + 12),
                   *(_DWORD *)(this + 12) + 108,
                   0,
                   MEMORY[0x8871E0]->?[5],
                   0,
                   1,
                   1,
                   0);
      }
      v28 = 0; /*0x72977f*/
      (*(void (__stdcall **)(int, int, int, _DWORD))(*(_DWORD *)(this + 4) + 68))( /*0x7297a9*/
        this + 4,
        ((__int16)v12 << 8) + 128,
        (v24[1] << 8) + 128,
        0);
    }
    else
    {
      if ( (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 12) + 456))(*(_DWORD *)(this + 12)) > -50 ) /*0x7297bf*/
      {
        v16 = *(_DWORD *)(this + 12) + 156; /*0x7297c5*/
        v27 = *(double *)v16; /*0x7297cc*/
        v28 = *(_DWORD *)(v16 + 8); /*0x7297e4*/
        StartAudioControllerAt(MEMORY[0x8871E0]->ImpactLandSound, (int)&v27, 0); /*0x7297ee*/
      }
      v17 = *(_DWORD *)(this + 12); /*0x7297f3*/
      *(_DWORD *)(this + 24) = 5; /*0x7297f6*/
      (*(void (__thiscall **)(int, int))(*(_DWORD *)v17 + 292))(v17, 1); /*0x729801*/
      *(_BYTE *)(this + 56) = 0; /*0x729807*/
    }
  }
  return (*(int (__thiscall **)(_DWORD, int *))(**(_DWORD **)(this + 12) + 436))(*(_DWORD *)(this + 12), &v29); /*0x72976d*/
}


// ==== 0x007298F0  AnimClass::GetAnimation  this=IUnknown  sig=csp ====
int __usercall sub_7298F0@<eax>(_DWORD *a1@<ecx>, int a2@<edi>)
{
  int *v3; // eax
  int GroundHeight; // ebx
  int v5; // edi
  int v6; // eax
  int result; // eax
  int *v8; // eax
  int *v9; // edx
  int v10; // eax
  int v11; // eax
  int v12; // ecx
  int v13; // [esp+Ch] [ebp-1Ch] BYREF
  int v14; // [esp+10h] [ebp-18h] BYREF
  int v15; // [esp+14h] [ebp-14h]
  int v16; // [esp+18h] [ebp-10h] BYREF
  int v17; // [esp+1Ch] [ebp-Ch]
  int v18; // [esp+20h] [ebp-8h]

  v3 = (int *)(a1[3] + 156); /*0x7298fa*/
  v13 = *v3; /*0x729901*/
  v14 = v3[1]; /*0x72990d*/
  v15 = v3[2]; /*0x729919*/
  GroundHeight = Cell::GetGroundHeight(&v13); /*0x729922*/
  if ( v15 >= GroundHeight ) /*0x72992a*/
  {
    (*(void (__thiscall **)(_DWORD, _DWORD, _DWORD))(*(_DWORD *)a1[3] + 288))(a1[3], 0, 0); /*0x729a43*/
    v10 = (*(int (__thiscall **)(_DWORD))(*(_DWORD *)a1[3] + 132))(a1[3]); /*0x729a4e*/
    v11 = Math::RoundToInt(64.0 / (double)*(int *)(v10 + 1820)); /*0x729a60*/
    a1[10] = MEMORY[0xA8ED84]; /*0x729a72*/
    a1[11] = v17; /*0x729a78*/
    v12 = a1[3]; /*0x729a7b*/
    a1[12] = v11; /*0x729a7e*/
    a1[13] = v11; /*0x729a81*/
    result = (*(int (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)v12 + 1348))(v12, 0, 0); /*0x729a86*/
    a1[6] = 6; /*0x729a8c*/
  }
  else
  {
    v5 = (*(int (__thiscall **)(_DWORD, int))(*(_DWORD *)a1[3] + 456))(a1[3], a2); /*0x72993f*/
    v13 = (*(int (__thiscall **)(_DWORD))(*(_DWORD *)a1[3] + 1336))(a1[3]); /*0x72994f*/
    v6 = Math::RoundToInt((double)v13 * *(double *)&MEMORY[0x8871E0]->TunnelSpeed); /*0x72995a*/
    if ( v6 <= 5 ) /*0x729962*/
      v6 = 5; /*0x729964*/
    v16 += v6; /*0x729971*/
    if ( v16 > GroundHeight ) /*0x729975*/
      v16 = GroundHeight; /*0x729977*/
    result = (*(int (__thiscall **)(_DWORD, int *))(*(_DWORD *)a1[3] + 436))(a1[3], &v14); /*0x729985*/
    if ( v5 <= -50 ) /*0x72998f*/
    {
      result = (*(int (__thiscall **)(_DWORD))(*(_DWORD *)a1[3] + 456))(a1[3]); /*0x72999a*/
      if ( result > -50 ) /*0x7299a3*/
      {
        v8 = (int *)(a1[3] + 156); /*0x7299ae*/
        v16 = *v8; /*0x7299b5*/
        v17 = v8[1]; /*0x7299c2*/
        v18 = v8[2]; /*0x7299cd*/
        StartAudioControllerAt(MEMORY[0x8871E0]->ImpactLandSound, (int)&v16, 0); /*0x7299d7*/
        result = (int)__2_YAPAXI_Z(0x1C8u); /*0x7299e1*/
        if ( result ) /*0x7299eb*/
        {
          v9 = (int *)(a1[3] + 156); /*0x7299f6*/
          v16 = *v9; /*0x729a09*/
          v17 = v9[1]; /*0x729a10*/
          v18 = v9[2]; /*0x729a1c*/
          return (int)AnimClass::ctor((void **)result, (void *)MEMORY[0x8871E0]->?[3], &v16, 0, 1, (void *)0x600, 0, 0); /*0x729a2f*/
        }
      }
    }
  }
  return result; /*0x729a34*/
}


// ==== 0x00729AA0  FootClass::Process  this=FootClass  sig=csp ====
void __thiscall sub_729AA0(int this)
{
  int v2; // edi
  int v3; // edx
  int v4; // eax
  _BYTE *v5; // eax
  _DWORD *v6; // ecx

  v2 = *(_DWORD *)(this + 52); /*0x729aa7*/
  if ( !v2 ) /*0x729ab0*/
    goto LABEL_7; /*0x729ab0*/
  v3 = *(_DWORD *)(this + 40); /*0x729ab2*/
  v4 = *(_DWORD *)(this + 48); /*0x729ab5*/
  if ( v3 != -1 ) /*0x729abb*/
  {
    if ( (int)MEMORY[0xA8ED84] - v3 >= v4 ) /*0x729ac7*/
      v4 = 0; /*0x729acd*/
    else
      v4 -= (int)MEMORY[0xA8ED84] - v3; /*0x729ac9*/
  }
  if ( (double)(v2 - v4) / (double)*(int *)(this + 52) == 1.0 ) /*0x729ae8*/
  {
LABEL_7:
    (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 12) + 396))(*(_DWORD *)(this + 12), 2); /*0x729af1*/
    v5 = *(_BYTE **)(this + 12); /*0x729af7*/
    if ( v5[144] && !v5[129] && !v5[141] ) /*0x729b0e*/
    {
      (*(void (__stdcall **)(int))(*(_DWORD *)(this + 4) + 72))(this + 4); /*0x729b1f*/
      v6 = *(_DWORD **)(this + 12); /*0x729b22*/
      *(_DWORD *)(this + 24) = 0; /*0x729b25*/
      FootClass::ClearPathIndex(v6); /*0x729b2c*/
    }
  }
}


// ==== 0x00729B40  JumpjetLocomotionClass::ComputeTurretTransform  this=JumpjetLocomotionClass  sig=csp ====
void *__stdcall ComputeTurretTransform(_DWORD *a1, void *a2, int *a3)
{
  int v3; // eax
  int v4; // eax
  int v5; // ebx
  float *v6; // eax
  float *v7; // eax
  float *v8; // esi
  void *result; // eax
  float *v10; // eax
  int v11; // edx
  int v12; // eax
  double v13; // st7
  int v14; // edx
  int v15; // eax
  double v16; // st7
  int v17; // edx
  int v18; // eax
  float *Transform; // eax
  int v20; // esi
  float v21; // [esp+0h] [ebp-14Ch]
  double v22; // [esp+14h] [ebp-138h] BYREF
  int v23; // [esp+1Ch] [ebp-130h]
  int v24; // [esp+28h] [ebp-124h]
  _DWORD v25[12]; // [esp+2Ch] [ebp-120h] BYREF
  float v26[12]; // [esp+5Ch] [ebp-F0h] BYREF
  float v27[12]; // [esp+8Ch] [ebp-C0h] BYREF
  float v28[12]; // [esp+BCh] [ebp-90h] BYREF
  char v29[48]; // [esp+ECh] [ebp-60h] BYREF
  float v30[12]; // [esp+11Ch] [ebp-30h] BYREF

  v3 = a1[5]; /*0x729b52*/
  if ( v3 ) /*0x729b57*/
  {
    switch ( v3 ) /*0x729c61*/
    {
      case 2: /*0x729c61*/
        if ( a3 ) /*0x729c94*/
          *a3 = -1; /*0x729c96*/
        LODWORD(v22) = a1[12]; /*0x729ca1*/
        if ( LODWORD(v22) ) /*0x729ca5*/
        {
          v11 = a1[9]; /*0x729cbc*/
          v12 = a1[11]; /*0x729cbf*/
          if ( v11 != -1 ) /*0x729cc5*/
          {
            if ( (int)MEMORY[0xA8ED84] - v11 >= v12 ) /*0x729cd1*/
              v12 = 0; /*0x729cd7*/
            else
              v12 -= (int)MEMORY[0xA8ED84] - v11; /*0x729cd3*/
          }
          v24 = LODWORD(v22) - v12; /*0x729cdb*/
          v22 = (double)(LODWORD(v22) - v12) / (double)SLODWORD(v22) * 1.570796326794897; /*0x729ced*/
        }
        else
        {
          v22 = 1.0 * 1.570796326794897; /*0x729cb3*/
        }
        break; /*0x729cb7*/
      case 3: /*0x729c61*/
        v22 = 1.570796326794897; /*0x729c68*/
        break; /*0x729c78*/
      case 5: /*0x729c61*/
        v22 = -1.570796326794897; /*0x729c7d*/
        break; /*0x729c8d*/
      case 6: /*0x729c61*/
        if ( a3 ) /*0x729cf8*/
          *a3 = -1; /*0x729cfa*/
        v24 = a1[12]; /*0x729d05*/
        if ( v24 ) /*0x729d09*/
        {
          v14 = a1[9]; /*0x729d13*/
          v15 = a1[11]; /*0x729d16*/
          if ( v14 != -1 ) /*0x729d1c*/
          {
            if ( (int)MEMORY[0xA8ED84] - v14 >= v15 ) /*0x729d28*/
              v15 = 0; /*0x729d2e*/
            else
              v15 -= (int)MEMORY[0xA8ED84] - v14; /*0x729d2a*/
          }
          v13 = (double)(v24 - v15) / (double)v24; /*0x729d3a*/
        }
        else
        {
          v13 = 1.0; /*0x729d0b*/
        }
        v22 = (1.0 - v13) * -1.570796326794897; /*0x729d4c*/
        break; /*0x729d52*/
      case 7: /*0x729c61*/
        if ( a3 ) /*0x729d56*/
          *a3 = -1; /*0x729d58*/
        v24 = a1[12]; /*0x729d63*/
        if ( v24 ) /*0x729d67*/
        {
          v17 = a1[9]; /*0x729d71*/
          v18 = a1[11]; /*0x729d74*/
          if ( v17 != -1 ) /*0x729d7a*/
          {
            if ( (int)MEMORY[0xA8ED84] - v17 >= v18 ) /*0x729d86*/
              v18 = 0; /*0x729d8c*/
            else
              v18 -= (int)MEMORY[0xA8ED84] - v17; /*0x729d88*/
          }
          v16 = (double)(v24 - v18) / (double)v24; /*0x729d98*/
        }
        else
        {
          v16 = 1.0; /*0x729d69*/
        }
        v22 = (1.0 - v16) * 1.570796326794897; /*0x729daa*/
        break; /*0x729db0*/
      default:
        v22 = 0.0; /*0x729db2*/
        break; /*0x729db2*/
    }
    Transform = Turret::GetTransform((signed int)a1, v28, a3); /*0x729dcc*/
    Transform::Copy(v27, Transform); /*0x729dd9*/
    if ( a3 && *a3 != -1 ) /*0x729de7*/
    {
      v20 = *a3; /*0x729de2*/
      *a3 = (v20 << 8) | Math::RoundToInt(v22 * 32.0) & 0x3F; /*0x729e00*/
    }
    v21 = v22; /*0x729e0e*/
    Matrix3D::RotateZ(v27, v21); /*0x729e11*/
    qmemcpy(a2, v27, 0x30u); /*0x729e27*/
    return a2; /*0x729e16*/
  }
  else
  {
    v4 = a1[2] + 156; /*0x729b60*/
    v22 = *(double *)v4; /*0x729b67*/
    v23 = *(_DWORD *)(v4 + 8); /*0x729b7f*/
    v5 = *((unsigned __int8 *)Coord::To_Cell(&MEMORY[0x87F7E8], &v22) + 284); /*0x729b8d*/
    if ( a3 && *a3 != -1 ) /*0x729b9c*/
      *a3 = v5 + (*a3 << 6); /*0x729ba3*/
    Matrix3x4::Identity(v25); /*0x729ba9*/
    if ( v5 ) /*0x729bb1*/
    {
      v6 = Turret::GetTransform((signed int)a1, v30, a3); /*0x729bbc*/
      Transform::Copy(v26, v6); /*0x729bc6*/
      v7 = (float *)CopyAudioData(v29, v5); /*0x729bd9*/
      v8 = MultiplyMatrix3x4(v28, v7, v26); /*0x729bf1*/
      result = a2; /*0x729bf3*/
      qmemcpy(v25, v8, sizeof(v25)); /*0x729bfa*/
    }
    else
    {
      v10 = Turret::GetTransform((signed int)a1, v28, a3); /*0x729c1b*/
      Transform::Copy(v26, v10); /*0x729c25*/
      result = a2; /*0x729c2a*/
      qmemcpy(v25, v26, sizeof(v25)); /*0x729c3a*/
    }
    qmemcpy(a2, v25, 0x30u); /*0x729c07*/
  }
  return result; /*0x729c09*/
}


// ==== 0x00729E50  TunnelLocomotionClass::ComputeBounceHeight  this=TunnelLocomotionClass  sig=csp ====
int __stdcall JumpjetLocomotionClass::sub_729E50(int a1)
{
  _DWORD *v2; // eax
  int v3; // ebx
  int v4; // edi
  int v5; // edx
  int v6; // eax
  int v7; // ecx
  int result; // eax
  double v9; // [esp+Ch] [ebp-28h]
  int v10; // [esp+14h] [ebp-20h] BYREF
  int v11; // [esp+18h] [ebp-1Ch] BYREF
  int v12; // [esp+1Ch] [ebp-18h]
  int v13; // [esp+20h] [ebp-14h] BYREF
  int v14; // [esp+24h] [ebp-10h]
  _DWORD v15[2]; // [esp+28h] [ebp-Ch] BYREF
  int GroundHeight; // [esp+30h] [ebp-4h]
  int v17; // [esp+38h] [ebp+4h]

  v2 = (_DWORD *)(*(_DWORD *)(a1 + 8) + 156); /*0x729e5d*/
  v15[0] = *v2; /*0x729e64*/
  v15[1] = v2[1]; /*0x729e76*/
  GroundHeight = v2[2]; /*0x729e82*/
  Coord::To_Screen(MEMORY[0x887324], v15, &v11); /*0x729e86*/
  GroundHeight = Cell::GetGroundHeight(v15); /*0x729eaa*/
  Coord::To_Screen(MEMORY[0x887324], v15, &v13); /*0x729eae*/
  v3 = *(_DWORD *)(a1 + 48); /*0x729eb7*/
  v10 = v3; /*0x729ebe*/
  v4 = v12 - v14; /*0x729ec2*/
  v17 = v12 - v14; /*0x729ec6*/
  if ( v3 ) /*0x729eca*/
  {
    v5 = *(_DWORD *)(a1 + 36); /*0x729eda*/
    v6 = *(_DWORD *)(a1 + 44); /*0x729edd*/
    if ( v5 != -1 ) /*0x729ee3*/
    {
      if ( (int)MEMORY[0xA8ED84] - v5 >= v6 ) /*0x729eef*/
        v6 = 0; /*0x729ef5*/
      else
        v6 -= (int)MEMORY[0xA8ED84] - v5; /*0x729ef1*/
    }
    v9 = (double)(v3 - v6) / (double)v10; /*0x729f05*/
  }
  else
  {
    v9 = 1.0; /*0x729ecc*/
  }
  v7 = (unsigned __int8)((unsigned int)((*ProgressTimer::GetValue((_WORD *)(*(_DWORD *)(a1 + 8) + 904), &v10) >> 7) + 1) >> 1); /*0x729f2a*/
  switch ( *(_DWORD *)(a1 + 20) ) /*0x729f39*/
  {
    case 2: /*0x729f39*/
      if ( v9 > 0.4 && !*(_BYTE *)(a1 + 52) ) /*0x729f85*/
        *(_BYTE *)(a1 + 52) = 1; /*0x729f8c*/
      if ( v7 <= 70 || v7 >= 140 ) /*0x729f9b*/
        result = Math::RoundToInt((double)MEMORY[0x844A9C] * v9 + (double)v17); /*0x729fbc*/
      else
        result = MEMORY[0x844A9C] + v4; /*0x729fa3*/
      break; /*0x729fab*/
    case 3: /*0x729f39*/
      result = MEMORY[0x844A9C] + v4; /*0x729fd2*/
      break; /*0x729fdb*/
    case 4: /*0x729f39*/
      result = MEMORY[0x844A9C] + v4; /*0x729f46*/
      break; /*0x729f4f*/
    case 5: /*0x729f39*/
      result = v4 + MEMORY[0x844A98]; /*0x729fe3*/
      break; /*0x729feb*/
    case 6: /*0x729f39*/
      result = Math::RoundToInt((1.0 - v9) * (double)MEMORY[0x844A98] + (double)v17); /*0x729f66*/
      break; /*0x729f71*/
    default:
      result = JumpjetLocomotionClass::StubReturnFalse(a1); /*0x729fef*/
      break; /*0x729fef*/
  }
  return result; /*0x729f49*/
}


// ==== 0x0072A020  TunnelLocomotionClass::CheckStateWithOverride  this=TunnelLocomotionClass  sig=csp ====
int __stdcall JumpjetLocomotionClass::CheckStateWithOverride(TunnelLocomotionClass *aP0)
{
  int RefCount; // eax

  RefCount = aP0->RefCount; /*0x72a024*/
  if ( RefCount == 3 || RefCount == 2 || RefCount == 7 || RefCount == 6 || RefCount == 5 ) /*0x72a03e*/
    return 2; /*0x72a049*/
  else
    return JumpjetLocomotionClass::CheckState(aP0); /*0x72a041*/
}


// ==== 0x0072A060  JumpjetLocomotionClass::IsStateInRange  this=JumpjetLocomotionClass  sig=csp ====
bool __stdcall JumpjetLocomotionClass::sub_72A060(int a1)
{
  unsigned int v1; // eax

  v1 = *(_DWORD *)(a1 + 20); /*0x72a064*/
  return v1 < 2 || v1 == 7 || v1 == 2 || v1 == 6; /*0x72a081*/
}


// ==== 0x0072A090  JumpjetLocomotionClass::ConvertCoordToCell_3  this=JumpjetLocomotionClass  sig=csp ====
int __thiscall JumpjetLocomotionClass::sub_72A090(void *this, int a2, void *a3)
{
  void *v3; // eax
  void *v5; // [esp+0h] [ebp-4h] BYREF

  v5 = this; /*0x72a090*/
  if ( MEMORY[0xA8ED6B] ) /*0x72a098*/
    return 0; /*0x72a098*/
  v5 = a3; /*0x72a0b3*/
  v3 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v5); /*0x72a0b8*/
  if ( Cell::IsBuildableAdvanced((int)v3) ) /*0x72a0bf*/
    return 0; /*0x72a0d1*/
  else
    return 7; /*0x72a0c8*/
}


// ==== 0x0072A0E0  TunnelLocomotionClass::UpdateFacingDirection_4  this=TunnelLocomotionClass  sig=csp ====
char __stdcall JumpjetLocomotionClass::sub_72A0E0(int a1, int a2)
{
  return FacingClass::Update((char *)(*(_DWORD *)(a1 + 8) + 904), &a2); /*0x72a0ff*/
}


// ==== 0x0072A110  TunnelLocomotionClass::ddtor  this=TunnelLocomotionClass  sig=csp ====
int __stdcall TunnelLocomotionClass::_vt03(int a1, _DWORD *a2)
{
  if ( !a2 ) /*0x72a116*/
    return -2147467261; /*0x72a118*/
  *a2 = 1247291203; /*0x72a126*/
  a2[1] = 298948665; /*0x72a12e*/
  a2[2] = -1610610249; /*0x72a137*/
  a2[3] = -777003740; /*0x72a140*/
  return 0; /*0x72a11d*/
}


// ==== 0x0072A150  TunnelLocomotionClass::BeginMove  this=TunnelLocomotionClass  sig=csp ====
int __stdcall TunnelLocomotionClass::_vt05(int *a1, int *a2)
{
  int result; // eax
  wchar_t *v3; // edx

  result = SwizzleManager::SaveLoad(a1, a2); /*0x72a15b*/
  if ( result >= 0 ) /*0x72a164*/
  {
    if ( a1 ) /*0x72a168*/
    {
      *a1 = (int)&LocomotionClass::`vftable'; /*0x72a16a*/
      a1[1] = (int)&vt_LocomotionClass; /*0x72a170*/
      v3 = MEMORY[0xA8ED84]; /*0x72a177*/
      a1[12] = 0; /*0x72a17d*/
      a1[10] = (int)v3; /*0x72a180*/
      a1[13] = 0; /*0x72a183*/
      *a1 = (int)&TunnelLocomotionClass::`vftable'; /*0x72a186*/
      a1[1] = (int)&vt_TunnelLocomotionClass; /*0x72a18c*/
    }
  }
  return result; /*0x72a193*/
}


// ==== 0x0072A1A0  TunnelLocomotionClass::ShortFunc_72A1A0  this=TunnelLocomotionClass  sig=csp ====
int __stdcall JumpjetLocomotionClass::sub_72A1A0(int a1)
{
  return *(_DWORD *)(a1 + 20) != 4 ? 2 : 0;
}


// ==== 0x0072A1C0  TunnelLocomotionClass::ShortFunc_72A1C0  this=TunnelLocomotionClass  sig=csp ====
int __stdcall JumpjetLocomotionClass::sub_72A1C0(int a1)
{
  int result; // eax

  result = JumpjetLocomotionClass::MissionStub11(a1); /*0x72a1c6*/
  if ( !result ) /*0x72a1cd*/
  {
    if ( *(_DWORD *)(a1 + 20) ) /*0x72a1cf*/
      return 7; /*0x72a1d6*/
  }
  return result; /*0x72a1db*/
}


// ==== 0x0072A1E0  TunnelLocomotionClass::ShortFunc_72A1E0  this=TunnelLocomotionClass  sig=csp ====
BOOL __stdcall JumpjetLocomotionClass::sub_72A1E0(int a1)
{
  int v1; // eax

  v1 = *(_DWORD *)(a1 + 20); /*0x72a1e4*/
  return v1 == 5 || v1 == 6; /*0x72a1f3*/
}


// ==== 0x0072A200  TunnelLocomotionClass::StubReturn60  this=TunnelLocomotionClass  sig=csp ====
int TunnelLocomotionClass::_vt09()
{
  return 60; /*0x72a205*/
}


// ==== 0x0072A210  TunnelLocomotionClass::ProcessMove  this=TunnelLocomotionClass  sig=csp ====
TunnelLocomotionClass *__thiscall TunnelLocomotionClass::ProcessMove(_DWORD *Block, char a2)
{
  LocomotionClass::Construct(Block); /*0x72a213*/
  if ( (a2 & 1) != 0 ) /*0x72a21d*/
    __3_YAXPAX_Z(Block); /*0x72a220*/
  return (TunnelLocomotionClass *)Block; /*0x72a22a*/
}


// ==== 0x0072A230  sub_72A230  this=-  sig=ida-proto ====
int sub_72A230()
{
  MEMORY[0xB0F960] = 0; /*0x72a232*/
  MEMORY[0xB0F964] = 0; /*0x72a237*/
  MEMORY[0xB0F968] = 0; /*0x72a23c*/
  MEMORY[0xB0F96C] = 0; /*0x72a241*/
  return 0; /*0x72a246*/
}


// ==== 0x0072A250  sub_72A250  this=-  sig=ida-proto ====
void sub_72A250()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x72a25c*/
  MEMORY[0xB0F978] = Math::Sqrt(v0 + v0); /*0x72a26e*/
}


// ==== 0x0072A280  sub_72A280  this=-  sig=ida-proto ====
void sub_72A280()
{
  MEMORY[0xB0F9C8] = MEMORY[0xB0F978] / 60.0; /*0x72a28c*/
}


// ==== 0x0072A2A0  sub_72A2A0  this=-  sig=ida-proto ====
void sub_72A2A0()
{
  MEMORY[0xB0F9B0] = 1.0 / MEMORY[0xB0F9C8]; /*0x72a2ac*/
}


// ==== 0x0072A2C0  sub_72A2C0  this=-  sig=ida-proto ====
void sub_72A2C0()
{
  MEMORY[0xB0F9A8] = 0.0174532925199433 * 45.0; /*0x72a2cc*/
}


// ==== 0x0072A2E0  sub_72A2E0  this=-  sig=ida-proto ====
void sub_72A2E0()
{
  MEMORY[0xB0F980] = 0.0174532925199433 * 60.0; /*0x72a2ec*/
}


// ==== 0x0072A300  sub_72A300  this=-  sig=ida-proto ====
void sub_72A300()
{
  MEMORY[0xB0F958] = 0.0174532925199433 * 90.0; /*0x72a30c*/
}


// ==== 0x0072A320  sub_72A320  this=-  sig=ida-proto ====
__int64 sub_72A320()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(MEMORY[0xB0F958] - MEMORY[0xB0F980]); /*0x72a332*/
  result = Math::RoundToInt(v0 * MEMORY[0xB0F978] * 0.5); /*0x72a346*/
  MEMORY[0xB0F9D0] = result; /*0x72a34b*/
  return result; /*0x72a350*/
}


// ==== 0x0072A360  sub_72A360  this=-  sig=ida-proto ====
void sub_72A360()
{
  MEMORY[0xB0F988] = Math::ArcTan((double)MEMORY[0xB0F9D0] * 0.00390625); /*0x72a377*/
}


// ==== 0x0072A390  sub_72A390  this=-  sig=ida-proto ====
void sub_72A390()
{
  MEMORY[0xB0F9A0] = Math::ArcTan((double)(2 * MEMORY[0xB0F9D0]) / MEMORY[0xB0F978]); /*0x72a3b2*/
}


// ==== 0x0072A3C0  sub_72A3C0  this=-  sig=ida-proto ====
__int64 sub_72A3C0()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * MEMORY[0xB0F9D0]) + 0.5); /*0x72a3db*/
  MEMORY[0xB0F9C4] = result; /*0x72a3e0*/
  return result; /*0x72a3e6*/
}


// ==== 0x0072A3F0  sub_72A3F0  this=-  sig=ida-proto ====
int sub_72A3F0()
{
  MEMORY[0xB0F970] = 0; /*0x72a3f2*/
  MEMORY[0xB0F972] = 0; /*0x72a3f8*/
  return 0; /*0x72a3fe*/
}


// ==== 0x0072A400  sub_72A400  this=-  sig=ida-proto ====
int sub_72A400()
{
  MEMORY[0xB0F990] = 0; /*0x72a402*/
  MEMORY[0xB0F994] = 0; /*0x72a407*/
  MEMORY[0xB0F998] = 0; /*0x72a40c*/
  return 0; /*0x72a411*/
}


// ==== 0x0072A420  sub_72A420  this=-  sig=ida-proto ====
int sub_72A420()
{
  MEMORY[0xB0F9C0] = 0; /*0x72a425*/
  MEMORY[0xB0F9B8] = 128; /*0x72a42f*/
  MEMORY[0xB0F9BC] = 128; /*0x72a434*/
  return 128; /*0x72a439*/
}


// ==== 0x0072A440  MessageListClass::clearMessages  this=TextLabelClass  sig=csp ====
int __thiscall MessageListClass::clearMessages(
        TextLabelClass *this,
        int a2,
        int aP1,
        TextLabelClass *aP3,
        int a5,
        TextLabelClass *aP5)
{
  GadgetClass::Construct(this, (GadgetClass *)aP1, (GadgetClass *)aP3, (GadgetClass *)1, (ControlClass *)1, 0, 0); /*0x72a458*/
  *(_DWORD *)&this->__pad_2C[4] = a2; /*0x72a469*/
  this->field_24 = 0; /*0x72a46c*/
  this->field_28 = 0; /*0x72a46f*/
  *(_DWORD *)this->__pad_2C = aP5; /*0x72a472*/
  *(_DWORD *)&this->__pad_2C[8] = a5; /*0x72a475*/
  *(_DWORD *)&this->__pad_2C[12] = -1; /*0x72a478*/
  this->field_3C = 0; /*0x72a47f*/
  this->__pad_40[0] = 0; /*0x72a482*/
  this->__pad_40[1] = 0; /*0x72a485*/
  this->field_44 = 0; /*0x72a488*/
  this->field_48 = 0; /*0x72a48b*/
  *(_DWORD *)this->__pad_0 = &TextLabelClass::`vftable'; /*0x72a48e*/
  return (int)this->__pad_0; /*0x72a496*/
}


// ==== 0x0072A4A0  TextLabelClass::DrawTypewriterText  this=TextLabelClass  sig=csp ====
int __thiscall ObjectClass::DrawTypewriterText(TextLabelClass *this, int aP1)
{
  int v3; // eax
  int v4; // edi
  AbstractClass *Instance; // eax
  int v6; // edx
  AbstractClass *v7; // ebp
  int v8; // eax
  int v9; // eax
  int v10; // eax
  int v11; // edi
  signed int v12; // ebx
  DWORD Time; // eax
  int v14; // ecx
  int v15; // edx
  unsigned __int8 v16; // al
  int v18; // [esp-8h] [ebp-30h]
  AbstractClass *v19; // [esp+Ch] [ebp-1Ch]
  int v20; // [esp+10h] [ebp-18h]
  int v21[2]; // [esp+18h] [ebp-10h] BYREF
  int v22; // [esp+20h] [ebp-8h]
  int referenceCount; // [esp+24h] [ebp-4h]

  if ( this->__pad_40[0] ) /*0x72a4a8*/
    return 0; /*0x72a4a8*/
  if ( !GadgetClass::ClearState(this, (ControlClass *)aP1) ) /*0x72a4b8*/
    return 0; /*0x72a4b8*/
  v3 = *(_DWORD *)&this->__pad_2C[8]; /*0x72a4cb*/
  if ( !MEMORY[0xB054E0] ) /*0x72a4d0*/
    return 0; /*0x72a4d0*/
  if ( v3 <= 0 || v3 >= MEMORY[0xB054E0] ) /*0x72a4dc*/
    v3 = 0; /*0x72a4de*/
  v4 = *((_DWORD *)MEMORY[0xB054D4] + v3); /*0x72a4e6*/
  if ( !v4 ) /*0x72a4eb*/
    return 0; /*0x72a4eb*/
  Instance = TextRenderer::GetInstance(); /*0x72a4f4*/
  v6 = *(_DWORD *)&this->__pad_0[12]; /*0x72a4f9*/
  v7 = Instance; /*0x72a4fc*/
  v19 = Instance; /*0x72a501*/
  v21[1] = *(_DWORD *)&this->__pad_0[16]; /*0x72a505*/
  v8 = *(_DWORD *)&this->__pad_2C[12]; /*0x72a509*/
  v21[0] = v6; /*0x72a50e*/
  if ( v8 < 0 ) /*0x72a512*/
    v8 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)&MEMORY[0x87F8E4].__pad_5568[9416] + 124))(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9416]); /*0x72a51c*/
  v22 = v8; /*0x72a525*/
  referenceCount = v7->referenceCount; /*0x72a52c*/
  v9 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)&MEMORY[0x87F8E4].__pad_5568[9416] + 124))(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9416]); /*0x72a532*/
  if ( v22 + v21[0] - v9 > 0 ) /*0x72a543*/
  {
    v22 = v9 - v21[0]; /*0x72a549*/
    if ( v9 - v21[0] <= 0 || referenceCount <= 0 ) /*0x72a559*/
      return 0; /*0x72a64e*/
  }
  v10 = Color::ConvertToRGB((unsigned __int8 *)(v4 + 776), (int)&aP1); /*0x72a56b*/
  LOWORD(v20) = *(_WORD *)v10; /*0x72a573*/
  BYTE2(v20) = *(_BYTE *)(v10 + 2); /*0x72a57b*/
  v11 = (unsigned __int8)*(_WORD *)v10 | (*(unsigned __int16 *)((char *)&v20 + 1) << 8); /*0x72a5a8*/
  v12 = wcslen(*(const wchar_t **)&this->__pad_2C[4]); /*0x72a5af*/
  if ( this->__pad_40[1] ) /*0x72a5b1*/
  {
    Time = timeGetTime(); /*0x72a5bb*/
    v14 = this->field_44; /*0x72a5c1*/
    if ( v14 ) /*0x72a5c6*/
    {
      v7 = v19; /*0x72a5d8*/
      this->field_44 = v14 + ((Time - this->field_48) >> 4); /*0x72a5e1*/
    }
    else
    {
      this->field_44 = 1; /*0x72a5c8*/
    }
    v15 = this->field_44; /*0x72a5e4*/
    if ( v14 != v15 ) /*0x72a5e9*/
      this->field_48 = Time; /*0x72a5eb*/
    if ( v15 <= v12 ) /*0x72a5f0*/
      PlayVocClass(*(_DWORD *)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9108] + 1732), 0x2000, 1.0, 0); /*0x72a609*/
  }
  v18 = this->field_44; /*0x72a613*/
  v16 = (*(int (__thiscall **)(TextLabelClass *))(*(_DWORD *)this->__pad_0 + 88))(this); /*0x72a61a*/
  DrawTextRendererMultiline( /*0x72a638*/
    *(_DWORD **)&MEMORY[0x87F8E4].__pad_5568[9416],
    v21,
    *(wchar_t **)&this->__pad_2C[4],
    v12,
    v7,
    v11,
    &this->field_3C,
    v16,
    0,
    1,
    v18);
  return 1; /*0x72a63e*/
}


// ==== 0x0072A660  TextLabelClass::setTarget  this=TextLabelClass  sig=csp ====
int __thiscall ObjectClass::setTarget(TextLabelClass *this, int a2)
{
  *(_DWORD *)&this->__pad_2C[4] = a2; /*0x72a664*/
  return a2; /*0x72a667*/
}


// ==== 0x0072A670  TextLabelClass::clearTarget  this=TextLabelClass  sig=csp ====
_DWORD *__thiscall ObjectClass::clearTarget(TextLabelClass *this, char a2)
{
  GadgetClass::Dtor(this); /*0x72a673*/
  if ( (a2 & 1) != 0 ) /*0x72a67d*/
    __3_YAXPAX_Z(this); /*0x72a680*/
  return this->__pad_0; /*0x72a68a*/
}


// ==== 0x0072A690  sub_72A690  this=-  sig=ida-proto ====
int sub_72A690()
{
  MEMORY[0xB0FA08] = 0; /*0x72a692*/
  MEMORY[0xB0FA0C] = 0; /*0x72a697*/
  MEMORY[0xB0FA10] = 0; /*0x72a69c*/
  MEMORY[0xB0FA14] = 0; /*0x72a6a1*/
  return 0; /*0x72a6a6*/
}


// ==== 0x0072A6B0  sub_72A6B0  this=-  sig=ida-proto ====
void sub_72A6B0()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x72a6bc*/
  MEMORY[0xB0FA28] = Math::Sqrt(v0 + v0); /*0x72a6ce*/
}


// ==== 0x0072A6E0  sub_72A6E0  this=-  sig=ida-proto ====
void sub_72A6E0()
{
  MEMORY[0xB0FB40] = MEMORY[0xB0FA28] / 60.0; /*0x72a6ec*/
}


// ==== 0x0072A700  sub_72A700  this=-  sig=ida-proto ====
void sub_72A700()
{
  MEMORY[0xB0FAF0] = 1.0 / MEMORY[0xB0FB40]; /*0x72a70c*/
}


// ==== 0x0072A720  sub_72A720  this=-  sig=ida-proto ====
void sub_72A720()
{
  MEMORY[0xB0FAE0] = 0.0174532925199433 * 45.0; /*0x72a72c*/
}


// ==== 0x0072A740  sub_72A740  this=-  sig=ida-proto ====
void sub_72A740()
{
  MEMORY[0xB0FA40] = 0.0174532925199433 * 60.0; /*0x72a74c*/
}


// ==== 0x0072A760  sub_72A760  this=-  sig=ida-proto ====
void sub_72A760()
{
  MEMORY[0xB0F9F0] = 0.0174532925199433 * 90.0; /*0x72a76c*/
}


// ==== 0x0072A780  sub_72A780  this=-  sig=ida-proto ====
__int64 sub_72A780()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(MEMORY[0xB0F9F0] - MEMORY[0xB0FA40]); /*0x72a792*/
  result = Math::RoundToInt(v0 * MEMORY[0xB0FA28] * 0.5); /*0x72a7a6*/
  MEMORY[0xB0FB58] = result; /*0x72a7ab*/
  return result; /*0x72a7b0*/
}


// ==== 0x0072A7C0  sub_72A7C0  this=-  sig=ida-proto ====
void sub_72A7C0()
{
  MEMORY[0xB0FA58] = Math::ArcTan((double)MEMORY[0xB0FB58] * 0.00390625); /*0x72a7d7*/
}


// ==== 0x0072A7F0  sub_72A7F0  this=-  sig=ida-proto ====
void sub_72A7F0()
{
  MEMORY[0xB0FAB0] = Math::ArcTan((double)(2 * MEMORY[0xB0FB58]) / MEMORY[0xB0FA28]); /*0x72a812*/
}


// ==== 0x0072A820  sub_72A820  this=-  sig=ida-proto ====
__int64 sub_72A820()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * MEMORY[0xB0FB58]) + 0.5); /*0x72a83b*/
  MEMORY[0xB0FB38] = result; /*0x72a840*/
  return result; /*0x72a846*/
}


// ==== 0x0072A850  sub_72A850  this=-  sig=ida-proto ====
int sub_72A850()
{
  MEMORY[0xB0FA24] = 0; /*0x72a852*/
  MEMORY[0xB0FA26] = 0; /*0x72a858*/
  return 0; /*0x72a85e*/
}


// ==== 0x0072A860  sub_72A860  this=-  sig=ida-proto ====
int sub_72A860()
{
  MEMORY[0xB0FA80] = 0; /*0x72a862*/
  MEMORY[0xB0FA84] = 0; /*0x72a867*/
  MEMORY[0xB0FA88] = 0; /*0x72a86c*/
  return 0; /*0x72a871*/
}


// ==== 0x0072A880  sub_72A880  this=-  sig=ida-proto ====
int sub_72A880()
{
  MEMORY[0xB0FB28] = 0; /*0x72a885*/
  MEMORY[0xB0FB20] = 128; /*0x72a88f*/
  MEMORY[0xB0FB24] = 128; /*0x72a894*/
  return 128; /*0x72a899*/
}


// ==== 0x0072A8A0  sub_72A8A0  this=-  sig=ida-proto ====
char sub_72A8A0()
{
  MEMORY[0xB0FB4E] = 0; /*0x72a8a2*/
  MEMORY[0xB0FB4C] = -1; /*0x72a8a9*/
  MEMORY[0xB0FB4D] = -1; /*0x72a8ae*/
  return -1; /*0x72a8b3*/
}


// ==== 0x0072A8C0  sub_72A8C0  this=-  sig=ida-proto ====
char sub_72A8C0()
{
  MEMORY[0xB0FA94] = 72; /*0x72a8c2*/
  MEMORY[0xB0FA95] = 0; /*0x72a8c9*/
  return 0; /*0x72a8d3*/
}


// ==== 0x0072A8E0  sub_72A8E0  this=-  sig=ida-proto ====
void sub_72A8E0()
{
  MEMORY[0xB0F9FC] = 0; /*0x72a8e0*/
  MEMORY[0xB0F9FD] = 30034; /*0x72a8e7*/
}


// ==== 0x0072A900  sub_72A900  this=-  sig=ida-proto ====
char sub_72A900()
{
  MEMORY[0xB0FB14] = 72; /*0x72a902*/
  MEMORY[0xB0FB15] = 0; /*0x72a909*/
  return 0; /*0x72a913*/
}


// ==== 0x0072A920  sub_72A920  this=-  sig=ida-proto ====
char sub_72A920()
{
  MEMORY[0xB0FB19] = 72; /*0x72a922*/
  MEMORY[0xB0FB1A] = 0; /*0x72a929*/
  return 0; /*0x72a933*/
}


// ==== 0x0072A940  sub_72A940  this=-  sig=ida-proto ====
void sub_72A940()
{
  MEMORY[0xB0F9D8] = -11612; /*0x72a940*/
  MEMORY[0xB0F9DA] = -1; /*0x72a94e*/
}


// ==== 0x0072A960  sub_72A960  this=-  sig=ida-proto ====
char sub_72A960()
{
  MEMORY[0xB0FB06] = 0; /*0x72a962*/
  MEMORY[0xB0FB04] = -1; /*0x72a969*/
  return -1; /*0x72a973*/
}


// ==== 0x0072A980  sub_72A980  this=-  sig=ida-proto ====
char sub_72A980()
{
  MEMORY[0xB0FAA2] = 0; /*0x72a982*/
  MEMORY[0xB0FAA0] = -1; /*0x72a989*/
  return -1; /*0x72a993*/
}


// ==== 0x0072A9A0  sub_72A9A0  this=-  sig=ida-proto ====
char sub_72A9A0()
{
  LOWORD(MEMORY[0xB0FA1C]) = 0; /*0x72a9a2*/
  BYTE2(MEMORY[0xB0FA1C]) = 0; /*0x72a9ac*/
  return 0; /*0x72a9b1*/
}


// ==== 0x0072A9C0  Copy8Bytes  this=-  sig=csp ====
_DWORD *__thiscall Copy8Bytes(AbstractClass *this)
{
  int *v1; // edx
  _DWORD *result; // eax
  int v3; // ecx
  int v4; // edx

  result = this->__pad_0; /*0x72a9c0*/
  v3 = *v1; /*0x72a9c2*/
  v4 = v1[1]; /*0x72a9c4*/
  *result = v3; /*0x72a9c7*/
  result[1] = v4; /*0x72a9c9*/
  return result; /*0x72a9cc*/
}


// ==== 0x0072A9D0  sub_72A9D0  this=-  sig=ida-proto ====
int __fastcall sub_72A9D0(int *a1, int *a2)
{
  int result; // eax

  result = *a2; /*0x72a9d0*/
  *a1 = *a2; /*0x72a9d2*/
  a1[1] = a2[1]; /*0x72a9d7*/
  return result; /*0x72a9da*/
}


// ==== 0x0072A9E0  Rect::Inflate  this=AbstractClass  sig=csp ====
BOOL __stdcall Rect::Inflate(LPRECT lprc, int dx, int dy)
{
  int v3; // edx
  _DWORD *v4; // ecx

  *v4 += v3; /*0x72a9e4*/
  v4[1] += v3; /*0x72a9eb*/
  v4[2] -= 2 * v3; /*0x72a9f6*/
  v4[3] -= 2 * v3; /*0x72a9fe*/
  return 2 * v3; /*0x72aa01*/
}


// ==== 0x0072AA10  CubicBezierAdvance  this=-  sig=csp ====
int __fastcall CubicBezierAdvance(_DWORD *a1, int a2, int a3)
{
  int v3; // esi
  int v4; // esi
  int v6; // edx

  v3 = a1[1]; /*0x72aa13*/
  *a1 += a2; /*0x72aa18*/
  a1[1] = a3 + v3; /*0x72aa22*/
  v4 = -2 * a2 + a1[2]; /*0x72aa2c*/
  v6 = -2 * a3 + a1[3]; /*0x72aa33*/
  a1[2] = v4; /*0x72aa35*/
  a1[3] = v6; /*0x72aa38*/
  return -2 * a3; /*0x72aa3b*/
}


// ==== 0x0072AA40  LoadMouseClassResources  this=-  sig=ida-proto ====
unsigned __int8 LoadMouseClassResources()
{
  unsigned __int8 result; // al

  MEMORY[0xB0FC80] = LoadFileSHP(off_844C44, (bool *)&MEMORY[0xB0FC90]); /*0x72aa5b*/
  MEMORY[0xB0FC84] = LoadFileSHP(off_844C48, (bool *)&MEMORY[0xB0FC91]); /*0x72aa70*/
  MEMORY[0xB0FC88] = LoadFileSHP(off_844C4C, (bool *)&MEMORY[0xB0FC92]); /*0x72aa85*/
  MEMORY[0xB0FC8C] = LoadFileSHP(off_844C50, (bool *)&MEMORY[0xB0FC93]); /*0x72aa9a*/
  MEMORY[0xB0FACC] = LoadFileSHP(off_844C54, (bool *)&MEMORY[0xB0FC94]); /*0x72aab4*/
  LoadPaletteSimple(off_844BA4, &MEMORY[0xB0FB64], &MEMORY[0xB0FB68]); /*0x72aab9*/
  LoadPaletteSimple(off_844BA0, &MEMORY[0xB0FB6C], &MEMORY[0xB0FB70]); /*0x72aace*/
  LoadPaletteSimple(off_844B9C, &MEMORY[0xB0FB5C], &MEMORY[0xB0FB60]); /*0x72aae3*/
  LoadPaletteSimple(off_844BA8, &MEMORY[0xB0FB74], &MEMORY[0xB0FB78]); /*0x72aaf8*/
  result = MEMORY[0xB0FBE0]; /*0x72aafd*/
  if ( !MEMORY[0xB0FBE0] ) /*0x72ab04*/
  {
    AssetClass::ReleaseAndReload(); /*0x72ab0a*/
    MEMORY[0xB0FAC4] = LoadFileSHP(off_844CD4, (bool *)&MEMORY[0xB0FC95]); /*0x72ab2a*/
    MEMORY[0xB0F9DC] = LoadFileSHP(off_844CD8, (bool *)&MEMORY[0xB0FC96]); /*0x72ab3f*/
    MEMORY[0xB0FAC0] = LoadFileSHP(off_844CDC, (bool *)&MEMORY[0xB0FC97]); /*0x72ab54*/
    MEMORY[0xB0FB50] = LoadFileSHP(off_844CE0, (bool *)&MEMORY[0xB0FC98]); /*0x72ab69*/
    MEMORY[0xB0FA04] = LoadFileSHP(off_844CE4, (bool *)&MEMORY[0xB0FC99]); /*0x72ab7e*/
    MEMORY[0xB0FAF8] = LoadFileSHP(off_844CE8, (bool *)&MEMORY[0xB0FC9A]); /*0x72ab93*/
    MEMORY[0xB0FA74] = LoadFileSHP(off_844CEC, (bool *)&MEMORY[0xB0FC9B]); /*0x72aba8*/
    MEMORY[0xB0FA38] = LoadFileSHP(off_844CF0, (bool *)&MEMORY[0xB0FC9C]); /*0x72abbd*/
    MEMORY[0xB0FAE8] = LoadFileSHP(off_844CF4, (bool *)&MEMORY[0xB0FC9D]); /*0x72abd2*/
    MEMORY[0xB0FA54] = LoadFileSHP(off_844CF8, (bool *)&MEMORY[0xB0FC9E]); /*0x72abec*/
    LoadPaletteSimple(off_844BE4, &MEMORY[0xB0FBC8], &MEMORY[0xB0FBCC]); /*0x72abf1*/
    LoadPaletteSimple(off_844BE8, &MEMORY[0xB0FBD0], &MEMORY[0xB0FBD4]); /*0x72ac06*/
    LoadPaletteSimple(off_844BEC, &MEMORY[0xB0FBD8], &MEMORY[0xB0FBDC]); /*0x72ac1b*/
    result = (unsigned __int8)SetupMouseClassResources(MEMORY[0x8A00A4], MEMORY[0x8A00A8]); /*0x72ac2c*/
    MEMORY[0xB0FBE0] = 1; /*0x72ac31*/
  }
  return result; /*0x72ac38*/
}


// ==== 0x0072AC40  WinMainSetup_Setup_72AC40  this=-  sig=ida-proto ====
void sub_72AC40()
{
  WinMainSetup_Setup_72AC40_Setup(); /*0x72ac41*/
  WinMainSetup_Setup_72AC40_Setup_72B230(); /*0x72ac46*/
  if ( MEMORY[0xB0FBE0] ) /*0x72ac54*/
  {
    MEMORY[0xB0FBE0] = 0; /*0x72ac5a*/
    LoadingScreen::DestroyFileTrees(); /*0x72ac60*/
    LoadingScreen::CleanupObjects(); /*0x72ac65*/
    __3_YAXPAX_Z(MEMORY[0xB0FC10]); /*0x72ac70*/
    MEMORY[0xB0FC10] = 0; /*0x72ac7b*/
    __3_YAXPAX_Z(MEMORY[0xB0FC14]); /*0x72ac82*/
    MEMORY[0xB0FC14] = 0; /*0x72ac8d*/
    __3_YAXPAX_Z(MEMORY[0xB0FC18]); /*0x72ac94*/
    MEMORY[0xB0FC18] = 0; /*0x72ac9e*/
    __3_YAXPAX_Z(MEMORY[0xB0FC1C]); /*0x72aca5*/
    MEMORY[0xB0FC1C] = 0; /*0x72acb0*/
    __3_YAXPAX_Z(MEMORY[0xB0FC20]); /*0x72acb7*/
    MEMORY[0xB0FC20] = 0; /*0x72acc2*/
    __3_YAXPAX_Z(MEMORY[0xB0FC24]); /*0x72acc9*/
    MEMORY[0xB0FC24] = 0; /*0x72acd3*/
    __3_YAXPAX_Z(MEMORY[0xB0FC28]); /*0x72acda*/
    MEMORY[0xB0FC28] = 0; /*0x72ace5*/
    __3_YAXPAX_Z(MEMORY[0xB0FC2C]); /*0x72acec*/
    MEMORY[0xB0FC2C] = 0; /*0x72acf4*/
    ReleaseLoadingResources(); /*0x72acfa*/
  }
  FileTree::CleanupAll(); /*0x72acff*/
  LoadingScreen::FreeResources(); /*0x72ad04*/
  LoadingScreen::FreeResources2(); /*0x72ad09*/
  MEMORY[0xB0FC0C] = 0; /*0x72ad0e*/
}


// ==== 0x0072AD20  Display::GetViewport  this=IUnknown  sig=csp ====
int *__thiscall Display_GetViewport(int *this)
{
  int *result; // eax
  int v2; // ecx
  int v3; // edx
  int v4; // esi

  result = this; /*0x72ad29*/
  v2 = 0; /*0x72ad44*/
  if ( !MEMORY[0xA8EB7C] && !MEMORY[0xA8ED6B] ) /*0x72ad5e*/
    v2 = 168; /*0x72ad60*/
  v3 = MEMORY[0x886FB8] - 168; /*0x72ad67*/
  v4 = MEMORY[0x886FBC] - 32; /*0x72ad6d*/
  *result = v2; /*0x72ad70*/
  result[1] = 0; /*0x72ad72*/
  result[2] = v3; /*0x72ad76*/
  result[3] = v4; /*0x72ad79*/
  return result; /*0x72ad75*/
}


// ==== 0x0072AD90  SidebarClass::calcSidebarRect  this=SidebarClass  sig=csp ====
int *__thiscall sub_72AD90(int *this)
{
  int *result; // eax
  int v2; // ecx
  int v3; // edx
  int v4; // esi

  result = this; /*0x72ada4*/
  v2 = 0; /*0x72ada7*/
  if ( !MEMORY[0xA8EB7C] && !MEMORY[0xA8ED6B] ) /*0x72adb7*/
    v2 = 168; /*0x72adb9*/
  v3 = MEMORY[0xA8EB84] - 168; /*0x72adc0*/
  v4 = MEMORY[0xA8EB88] - 32; /*0x72adc6*/
  *result = v2; /*0x72adc9*/
  result[1] = 0; /*0x72adcb*/
  result[2] = v3; /*0x72adcf*/
  result[3] = v4; /*0x72add2*/
  return result; /*0x72adce*/
}


// ==== 0x0072ADE0  LoadPaletteSimple  this=AbstractClass  sig=csp ====
int __fastcall Palette_LoadSimple(char *Source, _DWORD *a2, _DWORD *a3)
{
  _DWORD *v3; // ebx
  char *v4; // ebp
  char *v5; // eax
  _BYTE *v6; // ecx
  int v7; // edx
  _BYTE *v8; // eax
  int v9; // esi
  char v10; // dl
  int v11; // ecx
  int v12; // eax
  __int16 v14; // [esp+8h] [ebp-78h]
  _DWORD v16[22]; // [esp+14h] [ebp-6Ch] BYREF
  _BYTE v17[12]; // [esp+6Ch] [ebp-14h] BYREF
  int v18; // [esp+78h] [ebp-8h]

  v3 = a2; /*0x72ade5*/
  CCFileClass::Construct(v16, Source); /*0x72adf0*/
  v4 = (char *)CCFileClass::ReadEntireFile(v16); /*0x72adfe*/
  if ( v4 ) /*0x72ae06*/
  {
    v5 = (char *)__2_YAPAXI_Z(0x300u); /*0x72ae11*/
    if ( v5 ) /*0x72ae1b*/
    {
      v6 = v5 + 2; /*0x72ae1d*/
      v7 = 256; /*0x72ae20*/
      do /*0x72ae34*/
      {
        *(v6 - 2) = 0; /*0x72ae25*/
        *(v6 - 1) = 0; /*0x72ae29*/
        *v6 = 0; /*0x72ae2d*/
        v6 += 3; /*0x72ae30*/
        --v7; /*0x72ae33*/
      }
      while ( v7 ); /*0x72ae34*/
    }
    else
    {
      v5 = 0; /*0x72ae38*/
    }
    *v3 = v5; /*0x72ae3b*/
    v8 = v4 + 1; /*0x72ae3e*/
    v9 = 0; /*0x72ae45*/
    while ( 1 ) /*0x72ae5d*/
    {
      HIBYTE(v14) = 4 * *v8; /*0x72ae5d*/
      LOBYTE(v14) = 4 * *(v8 - 1); /*0x72ae64*/
      v10 = 4 * v8[1]; /*0x72ae6a*/
      v8 += 3; /*0x72ae80*/
      v11 = *v3 + 3 * (v9 % 256); /*0x72ae83*/
      ++v9; /*0x72ae8a*/
      *(_WORD *)v11 = v14; /*0x72ae91*/
      *(_BYTE *)(v11 + 2) = v10; /*0x72ae94*/
      if ( v9 >= 256 ) /*0x72ae97*/
        break; /*0x72ae97*/
      v3 = a2; /*0x72ae4e*/
    }
    __3_YAXPAX_Z(v4); /*0x72ae9e*/
    if ( __2_YAPAXI_Z(0x188u) ) /*0x72aea8*/
      v12 = ConvertClass::Construct(*a2, *a2, MEMORY[0x887310], 1, 0); /*0x72aecb*/
    else
      v12 = 0; /*0x72aed2*/
    *a3 = v12; /*0x72aedb*/
  }
  v16[0] = &vt_CCFileClass; /*0x72aee1*/
  v18 = 0; /*0x72aee9*/
  Vector::Clear((int)v17); /*0x72aef1*/
  v16[0] = &off_7E1668; /*0x72aefa*/
  return BufferIOFileClass::Dtor(v16); /*0x72af07*/
}


// ==== 0x0072AFE0  sub_72AFE0  this=-  sig=ida-proto ====
CCINIClass *sub_72AFE0()
{
  return *(CCINIClass **)&stru_B05488.__pad_579C[20288]; /*0x72afe5*/
}


// ==== 0x0072AFF0  UI_Draw_72AFF0  this=-  sig=ida-proto ====
int sub_72AFF0()
{
  return MEMORY[0xB0FB68]; /*0x72aff5*/
}


// ==== 0x0072B000  sub_72B000  this=-  sig=ida-proto ====
CCINIClass *sub_72B000()
{
  return *(CCINIClass **)&stru_B05488.__pad_579C[20296]; /*0x72b005*/
}


// ==== 0x0072B010  UI_Draw_72B010  this=-  sig=ida-proto ====
int sub_72B010()
{
  return MEMORY[0xB0FB70]; /*0x72b015*/
}


// ==== 0x0072B020  sub_72B020  this=-  sig=ida-proto ====
CCINIClass *sub_72B020()
{
  return *(CCINIClass **)&stru_B05488.__pad_579C[20280]; /*0x72b025*/
}


// ==== 0x0072B030  UI_Draw_72B030  this=-  sig=ida-proto ====
int sub_72B030()
{
  return MEMORY[0xB0FB60]; /*0x72b035*/
}


// ==== 0x0072B040  sub_72B040  this=-  sig=ida-proto ====
CCINIClass *sub_72B040()
{
  return *(CCINIClass **)&stru_B05488.__pad_579C[20304]; /*0x72b045*/
}


// ==== 0x0072B050  UI_Helper_72B050  this=-  sig=ida-proto ====
int sub_72B050()
{
  return MEMORY[0xB0FB78]; /*0x72b055*/
}


// ==== 0x0072B130  WinMainSetup_Setup_72AC40_Setup  this=-  sig=csp ====
void sub_72B130()
{
  void *v0; // esi
  void *v1; // esi
  void *v2; // esi
  void *v3; // esi
  void *v4; // esi

  if ( MEMORY[0xB0FC90] ) /*0x72b13b*/
  {
    v0 = MEMORY[0xB0FC80]; /*0x72b13d*/
    if ( MEMORY[0xB0FC80] ) /*0x72b145*/
    {
      FileTreeNode::Destroy(MEMORY[0xB0FC80]); /*0x72b149*/
      __3_YAXPAX_Z(v0); /*0x72b14f*/
    }
    MEMORY[0xB0FC90] = 0; /*0x72b157*/
  }
  MEMORY[0xB0FC80] = 0; /*0x72b162*/
  if ( MEMORY[0xB0FC91] ) /*0x72b16a*/
  {
    v1 = MEMORY[0xB0FC84]; /*0x72b16c*/
    if ( MEMORY[0xB0FC84] ) /*0x72b174*/
    {
      FileTreeNode::Destroy(MEMORY[0xB0FC84]); /*0x72b178*/
      __3_YAXPAX_Z(v1); /*0x72b17e*/
    }
    MEMORY[0xB0FC91] = 0; /*0x72b186*/
  }
  MEMORY[0xB0FC84] = 0; /*0x72b191*/
  if ( MEMORY[0xB0FC92] ) /*0x72b199*/
  {
    v2 = MEMORY[0xB0FC88]; /*0x72b19b*/
    if ( MEMORY[0xB0FC88] ) /*0x72b1a3*/
    {
      FileTreeNode::Destroy(MEMORY[0xB0FC88]); /*0x72b1a7*/
      __3_YAXPAX_Z(v2); /*0x72b1ad*/
    }
    MEMORY[0xB0FC92] = 0; /*0x72b1b5*/
  }
  MEMORY[0xB0FC88] = 0; /*0x72b1c0*/
  if ( MEMORY[0xB0FC93] ) /*0x72b1c8*/
  {
    v3 = MEMORY[0xB0FC8C]; /*0x72b1ca*/
    if ( MEMORY[0xB0FC8C] ) /*0x72b1d2*/
    {
      FileTreeNode::Destroy(MEMORY[0xB0FC8C]); /*0x72b1d6*/
      __3_YAXPAX_Z(v3); /*0x72b1dc*/
    }
    MEMORY[0xB0FC93] = 0; /*0x72b1e4*/
  }
  MEMORY[0xB0FC8C] = 0; /*0x72b1ef*/
  if ( MEMORY[0xB0FC94] ) /*0x72b1f7*/
  {
    v4 = MEMORY[0xB0FACC]; /*0x72b1f9*/
    if ( MEMORY[0xB0FACC] ) /*0x72b201*/
    {
      FileTreeNode::Destroy(MEMORY[0xB0FACC]); /*0x72b205*/
      __3_YAXPAX_Z(v4); /*0x72b20b*/
    }
    MEMORY[0xB0FC94] = 0; /*0x72b213*/
  }
  MEMORY[0xB0FACC] = 0; /*0x72b219*/
}


// ==== 0x0072B230  ObjectClass::WinMainSetup_Setup_72AC40_Setup_72B230  this=ObjectClass  sig=csp ====
void sub_72B230()
{
  if ( MEMORY[0xB0FB6C] ) /*0x72b23a*/
  {
    __3_YAXPAX_Z(MEMORY[0xB0FB6C]); /*0x72b23d*/
    MEMORY[0xB0FB6C] = 0; /*0x72b245*/
  }
  if ( MEMORY[0xB0FB70] ) /*0x72b253*/
  {
    (**(void (__thiscall ***)(int, int))MEMORY[0xB0FB70])(MEMORY[0xB0FB70], 3); /*0x72b259*/
    MEMORY[0xB0FB70] = 0; /*0x72b25b*/
  }
  if ( MEMORY[0xB0FB64] ) /*0x72b268*/
  {
    __3_YAXPAX_Z(MEMORY[0xB0FB64]); /*0x72b26b*/
    MEMORY[0xB0FB64] = 0; /*0x72b273*/
  }
  if ( MEMORY[0xB0FB68] ) /*0x72b281*/
  {
    (**(void (__thiscall ***)(int, int))MEMORY[0xB0FB68])(MEMORY[0xB0FB68], 3); /*0x72b287*/
    MEMORY[0xB0FB68] = 0; /*0x72b289*/
  }
  if ( MEMORY[0xB0FB5C] ) /*0x72b296*/
  {
    __3_YAXPAX_Z(MEMORY[0xB0FB5C]); /*0x72b299*/
    MEMORY[0xB0FB5C] = 0; /*0x72b2a1*/
  }
  if ( MEMORY[0xB0FB60] ) /*0x72b2af*/
  {
    (**(void (__thiscall ***)(int, int))MEMORY[0xB0FB60])(MEMORY[0xB0FB60], 3); /*0x72b2b5*/
    MEMORY[0xB0FB60] = 0; /*0x72b2b7*/
  }
  if ( MEMORY[0xB0FB74] ) /*0x72b2c4*/
  {
    __3_YAXPAX_Z(MEMORY[0xB0FB74]); /*0x72b2c7*/
    MEMORY[0xB0FB74] = 0; /*0x72b2cf*/
  }
  if ( MEMORY[0xB0FB78] ) /*0x72b2dd*/
  {
    (**(void (__thiscall ***)(int, int))MEMORY[0xB0FB78])(MEMORY[0xB0FB78], 3); /*0x72b2e3*/
    MEMORY[0xB0FB78] = 0; /*0x72b2e5*/
  }
}


// ==== 0x0072B2F0  LoadingScreen::GetBackgroundImage  this=ObjectClass  sig=csp ====
char *__thiscall LoadingScreen::GetBackgroundImage(void *this, ScenarioClass *aP1)
{
  char *result; // eax

  result = *(char **)&stru_830620.__pad_579C[61048]; /*0x72b2f0*/
  if ( this != (void *)640 ) /*0x72b2fb*/
    return *(char **)&stru_830620.__pad_579C[61052]; /*0x72b2fd*/
  return result; /*0x72b302*/
}


// ==== 0x0072B310  LoadingScreen::GetOverlayImage  this=ObjectClass  sig=csp ====
char *__thiscall LoadingScreen::GetOverlayImage(void *this, ScenarioClass *aP1)
{
  char *result; // eax

  result = *(char **)&stru_830620.__pad_579C[61056]; /*0x72b310*/
  if ( this != (void *)640 ) /*0x72b31b*/
    return *(char **)&stru_830620.__pad_579C[61060]; /*0x72b31d*/
  return result; /*0x72b322*/
}


// ==== 0x0072B330  sub_72B330  this=-  sig=ida-proto ====
CCINIClass *sub_72B330()
{
  return *(CCINIClass **)&stru_B05488.__pad_579C[20312]; /*0x72b335*/
}


// ==== 0x0072B340  Render_Render_72B340  this=-  sig=ida-proto ====
int sub_72B340()
{
  return MEMORY[0xB0FB80]; /*0x72b345*/
}


// ==== 0x0072B350  sub_72B350  this=-  sig=ida-proto ====
CCINIClass *sub_72B350()
{
  return *(CCINIClass **)&stru_B05488.__pad_579C[20320]; /*0x72b355*/
}


// ==== 0x0072B360  Render_Render_72B360  this=-  sig=ida-proto ====
int sub_72B360()
{
  return MEMORY[0xB0FB88]; /*0x72b365*/
}


// ==== 0x0072B370  sub_72B370  this=-  sig=ida-proto ====
CCINIClass *sub_72B370()
{
  return *(CCINIClass **)&stru_B05488.__pad_579C[20328]; /*0x72b375*/
}


// ==== 0x0072B380  Map_Load_72B380  this=-  sig=ida-proto ====
int sub_72B380()
{
  return MEMORY[0xB0FB90]; /*0x72b385*/
}


// ==== 0x0072B390  LoadingScreen::ReleaseAnimObjects  this=LoadingScreen  sig=csp ====
int __thiscall sub_72B390(char *Source)
{
  if ( MEMORY[0xB0FB88] ) /*0x72b39b*/
  {
    (**(void (__thiscall ***)(int, int))MEMORY[0xB0FB88])(MEMORY[0xB0FB88], 1); /*0x72b3a1*/
    MEMORY[0xB0FB88] = 0; /*0x72b3a3*/
  }
  if ( MEMORY[0xB0FB84] ) /*0x72b3b4*/
  {
    __3_YAXPAX_Z(MEMORY[0xB0FB84]); /*0x72b3b7*/
    MEMORY[0xB0FB84] = 0; /*0x72b3bf*/
  }
  return LoadPaletteSimple(Source, &MEMORY[0xB0FB84], &MEMORY[0xB0FB88]); /*0x72b3da*/
}


// ==== 0x0072B460  ObjectClass::LoadProgressMgr_Release  this=ObjectClass  sig=csp ====
void sub_72B460()
{
  if ( MEMORY[0xB0FB7C] ) /*0x72b46a*/
  {
    __3_YAXPAX_Z(MEMORY[0xB0FB7C]); /*0x72b46d*/
    MEMORY[0xB0FB7C] = 0; /*0x72b475*/
  }
  if ( MEMORY[0xB0FB80] ) /*0x72b483*/
  {
    (**(void (__thiscall ***)(int, int))MEMORY[0xB0FB80])(MEMORY[0xB0FB80], 1); /*0x72b489*/
    MEMORY[0xB0FB80] = 0; /*0x72b48b*/
  }
  if ( MEMORY[0xB0FB84] ) /*0x72b498*/
  {
    __3_YAXPAX_Z(MEMORY[0xB0FB84]); /*0x72b49b*/
    MEMORY[0xB0FB84] = 0; /*0x72b4a3*/
  }
  if ( MEMORY[0xB0FB88] ) /*0x72b4b1*/
  {
    (**(void (__thiscall ***)(int, int))MEMORY[0xB0FB88])(MEMORY[0xB0FB88], 1); /*0x72b4b7*/
    MEMORY[0xB0FB88] = 0; /*0x72b4b9*/
  }
  if ( MEMORY[0xB0FB8C] ) /*0x72b4c6*/
  {
    __3_YAXPAX_Z(MEMORY[0xB0FB8C]); /*0x72b4c9*/
    MEMORY[0xB0FB8C] = 0; /*0x72b4d1*/
  }
  if ( MEMORY[0xB0FB90] ) /*0x72b4df*/
  {
    (**(void (__thiscall ***)(int, int))MEMORY[0xB0FB90])(MEMORY[0xB0FB90], 1); /*0x72b4e5*/
    MEMORY[0xB0FB90] = 0; /*0x72b4e7*/
  }
}


// ==== 0x0072B4F0  sub_72B4F0  this=-  sig=ida-proto ====
CCINIClass *sub_72B4F0()
{
  return *(CCINIClass **)&stru_B05488.__pad_579C[20336]; /*0x72b4f5*/
}


// ==== 0x0072B500  Render_Render_72B500  this=-  sig=ida-proto ====
int sub_72B500()
{
  return MEMORY[0xB0FB98]; /*0x72b505*/
}


// ==== 0x0072B510  sub_72B510  this=-  sig=ida-proto ====
CCINIClass *sub_72B510()
{
  return *(CCINIClass **)&stru_B05488.__pad_579C[20344]; /*0x72b515*/
}


// ==== 0x0072B520  Render_Render_72B520  this=-  sig=ida-proto ====
ObjectClass *Render_Render_72B520()
{
  return *(ObjectClass **)&stru_B05488.__pad_579C[20348]; /*0x72b525*/
}


// ==== 0x0072B530  PaletteManager::Load  this=ScenarioClass  sig=csp ====
int (__thiscall ***__thiscall PaletteManager_Load(void *this))(_DWORD, int)
{
  int v1; // edx
  void (__thiscall ***v3)(_DWORD, int); // ecx
  int (__thiscall ***result)(_DWORD, int); // eax

  v1 = MEMORY[0xB0FD68]; /*0x72b530*/
  if ( MEMORY[0xB0FD68] == 1 ) /*0x72b53f*/
  {
    if ( !MEMORY[0xAC10C8] ) /*0x72b547*/
    {
      result = (int (__thiscall ***)(_DWORD, int))MEMORY[0xB0FB98]; /*0x72b64d*/
      goto LABEL_23; /*0x72b64d*/
    }
    v3 = (void (__thiscall ***)(_DWORD, int))MEMORY[0xB0FBA0]; /*0x72b54d*/
    if ( MEMORY[0xB0FBA0] ) /*0x72b555*/
    {
      (**(void (__thiscall ***)(int, int))MEMORY[0xB0FBA0])(MEMORY[0xB0FBA0], MEMORY[0xB0FD68]); /*0x72b55a*/
      v3 = 0; /*0x72b55c*/
      MEMORY[0xB0FBA0] = 0; /*0x72b55e*/
    }
    if ( MEMORY[0xB0FB9C] ) /*0x72b56b*/
    {
      __3_YAXPAX_Z(MEMORY[0xB0FB9C]); /*0x72b56e*/
      v3 = (void (__thiscall ***)(_DWORD, int))MEMORY[0xB0FBA0]; /*0x72b573*/
      MEMORY[0xB0FB9C] = 0; /*0x72b57c*/
    }
    if ( MEMORY[0xB0FB94] ) /*0x72b589*/
    {
      __3_YAXPAX_Z(MEMORY[0xB0FB94]); /*0x72b58c*/
      v3 = (void (__thiscall ***)(_DWORD, int))MEMORY[0xB0FBA0]; /*0x72b591*/
      MEMORY[0xB0FB94] = 0; /*0x72b59a*/
    }
    result = (int (__thiscall ***)(_DWORD, int))MEMORY[0xB0FB98]; /*0x72b5a0*/
    if ( MEMORY[0xB0FB98] ) /*0x72b5a7*/
    {
      (**(void (__thiscall ***)(int, int))MEMORY[0xB0FB98])(MEMORY[0xB0FB98], 1); /*0x72b5af*/
      v3 = (void (__thiscall ***)(_DWORD, int))MEMORY[0xB0FBA0]; /*0x72b5b1*/
      result = 0; /*0x72b5b7*/
      MEMORY[0xB0FB98] = 0; /*0x72b5b9*/
    }
  }
  else
  {
    result = (int (__thiscall ***)(_DWORD, int))MEMORY[0xB0FB98]; /*0x72b5c0*/
    v3 = (void (__thiscall ***)(_DWORD, int))MEMORY[0xB0FBA0]; /*0x72b5c5*/
  }
  v1 = MEMORY[0xB0FD68]; /*0x72b5cb*/
  if ( MEMORY[0xB0FD68] != 2 || MEMORY[0xAC10C8] ) /*0x72b5e0*/
  {
LABEL_23:
    if ( result ) /*0x72b654*/
    {
      if ( v1 ) /*0x72b660*/
        return result; /*0x72b660*/
      goto LABEL_26; /*0x72b660*/
    }
    goto LABEL_24; /*0x72b654*/
  }
  if ( v3 ) /*0x72b5e4*/
  {
    (**v3)(v3, 1); /*0x72b5ea*/
    result = (int (__thiscall ***)(_DWORD, int))MEMORY[0xB0FB98]; /*0x72b5ec*/
    MEMORY[0xB0FBA0] = 0; /*0x72b5f1*/
  }
  if ( MEMORY[0xB0FB9C] ) /*0x72b5ff*/
  {
    __3_YAXPAX_Z(MEMORY[0xB0FB9C]); /*0x72b602*/
    result = (int (__thiscall ***)(_DWORD, int))MEMORY[0xB0FB98]; /*0x72b607*/
    MEMORY[0xB0FB9C] = 0; /*0x72b60f*/
  }
  if ( MEMORY[0xB0FB94] ) /*0x72b61d*/
  {
    __3_YAXPAX_Z(MEMORY[0xB0FB94]); /*0x72b620*/
    result = (int (__thiscall ***)(_DWORD, int))MEMORY[0xB0FB98]; /*0x72b625*/
    MEMORY[0xB0FB94] = 0; /*0x72b62d*/
  }
  if ( result ) /*0x72b635*/
  {
    result = (int (__thiscall ***)(_DWORD, int))(**result)(result, 1); /*0x72b63d*/
    MEMORY[0xB0FB98] = 0; /*0x72b63f*/
    MEMORY[0xB0FD68] = 0; /*0x72b645*/
    goto LABEL_26; /*0x72b64b*/
  }
LABEL_24:
  MEMORY[0xB0FD68] = 0; /*0x72b656*/
LABEL_26:
  if ( MEMORY[0xAC10C8] ) /*0x72b66c*/
  {
    result = (int (__thiscall ***)(_DWORD, int))LoadPaletteSimple( /*0x72b67e*/
                                                  MEMORY[0x844BC4],
                                                  &MEMORY[0xB0FB94],
                                                  &MEMORY[0xB0FB98]);
    MEMORY[0xB0FD68] = 2; /*0x72b683*/
  }
  else if ( this ) /*0x72b692*/
  {
    if ( this == (void *)1 ) /*0x72b6b9*/
    {
      result = (int (__thiscall ***)(_DWORD, int))LoadPaletteSimple( /*0x72b6cb*/
                                                    MEMORY[0x844C1C],
                                                    &MEMORY[0xB0FB94],
                                                    &MEMORY[0xB0FB98]);
      MEMORY[0xB0FD68] = 1; /*0x72b6d0*/
    }
    else if ( this == (void *)2 ) /*0x72b6dc*/
    {
      result = (int (__thiscall ***)(_DWORD, int))LoadPaletteSimple( /*0x72b6ee*/
                                                    MEMORY[0x844C10],
                                                    &MEMORY[0xB0FB94],
                                                    &MEMORY[0xB0FB98]);
      MEMORY[0xB0FD68] = 1; /*0x72b6f3*/
    }
    else if ( this == (void *)3 ) /*0x72b703*/
    {
      result = (int (__thiscall ***)(_DWORD, int))LoadPaletteSimple( /*0x72b715*/
                                                    MEMORY[0x844C14],
                                                    &MEMORY[0xB0FB94],
                                                    &MEMORY[0xB0FB98]);
      MEMORY[0xB0FD68] = 1; /*0x72b71a*/
    }
    else if ( this == (void *)4 ) /*0x72b72a*/
    {
      result = (int (__thiscall ***)(_DWORD, int))LoadPaletteSimple( /*0x72b73c*/
                                                    MEMORY[0x844C28],
                                                    &MEMORY[0xB0FB94],
                                                    &MEMORY[0xB0FB98]);
      MEMORY[0xB0FD68] = 1; /*0x72b741*/
    }
    else if ( this == (void *)5 ) /*0x72b751*/
    {
      result = (int (__thiscall ***)(_DWORD, int))LoadPaletteSimple( /*0x72b763*/
                                                    MEMORY[0x844C20],
                                                    &MEMORY[0xB0FB94],
                                                    &MEMORY[0xB0FB98]);
      MEMORY[0xB0FD68] = 1; /*0x72b768*/
    }
    else if ( this == (void *)6 ) /*0x72b778*/
    {
      result = (int (__thiscall ***)(_DWORD, int))LoadPaletteSimple( /*0x72b78a*/
                                                    MEMORY[0x844C18],
                                                    &MEMORY[0xB0FB94],
                                                    &MEMORY[0xB0FB98]);
      MEMORY[0xB0FD68] = 1; /*0x72b78f*/
    }
    else if ( this == (void *)7 ) /*0x72b79f*/
    {
      result = (int (__thiscall ***)(_DWORD, int))LoadPaletteSimple( /*0x72b7b1*/
                                                    MEMORY[0x844C2C],
                                                    &MEMORY[0xB0FB94],
                                                    &MEMORY[0xB0FB98]);
      MEMORY[0xB0FD68] = 1; /*0x72b7b6*/
    }
    else if ( this == (void *)8 ) /*0x72b7c6*/
    {
      result = (int (__thiscall ***)(_DWORD, int))LoadPaletteSimple( /*0x72b7d8*/
                                                    MEMORY[0x844C24],
                                                    &MEMORY[0xB0FB94],
                                                    &MEMORY[0xB0FB98]);
      MEMORY[0xB0FD68] = 1; /*0x72b7dd*/
    }
    else
    {
      if ( this == (void *)9 ) /*0x72b7ed*/
        result = (int (__thiscall ***)(_DWORD, int))LoadPaletteSimple( /*0x72b7ff*/
                                                      MEMORY[0x844C30],
                                                      &MEMORY[0xB0FB94],
                                                      &MEMORY[0xB0FB98]);
      MEMORY[0xB0FD68] = 1; /*0x72b804*/
    }
  }
  else
  {
    result = (int (__thiscall ***)(_DWORD, int))LoadPaletteSimple( /*0x72b6a4*/
                                                  MEMORY[0x844C0C],
                                                  &MEMORY[0xB0FB94],
                                                  &MEMORY[0xB0FB98]);
    MEMORY[0xB0FD68] = 1; /*0x72b6a9*/
  }
  return result; /*0x72b68d*/
}


// ==== 0x0072B820  Palette::LoadFile  this=AbstractClass  sig=csp ====
int __thiscall Palette_LoadFile(char *Source)
{
  if ( MEMORY[0xB0FBA0] ) /*0x72b82b*/
  {
    (**(void (__thiscall ***)(int, int))MEMORY[0xB0FBA0])(MEMORY[0xB0FBA0], 1); /*0x72b831*/
    MEMORY[0xB0FBA0] = 0; /*0x72b833*/
  }
  if ( MEMORY[0xB0FB9C] ) /*0x72b844*/
  {
    __3_YAXPAX_Z(MEMORY[0xB0FB9C]); /*0x72b847*/
    MEMORY[0xB0FB9C] = 0; /*0x72b84f*/
  }
  return LoadPaletteSimple(Source, &MEMORY[0xB0FB9C], &MEMORY[0xB0FBA0]); /*0x72b86a*/
}


// ==== 0x0072B870  ObjectClass::LoadProgressMgr_Release_72B870  this=ObjectClass  sig=csp ====
void sub_72B870()
{
  if ( MEMORY[0xB0FBA0] ) /*0x72b87b*/
  {
    (**(void (__thiscall ***)(int, int))MEMORY[0xB0FBA0])(MEMORY[0xB0FBA0], 1); /*0x72b881*/
    MEMORY[0xB0FBA0] = 0; /*0x72b883*/
  }
  if ( MEMORY[0xB0FB9C] ) /*0x72b890*/
  {
    __3_YAXPAX_Z(MEMORY[0xB0FB9C]); /*0x72b893*/
    MEMORY[0xB0FB9C] = 0; /*0x72b89b*/
  }
  if ( MEMORY[0xB0FB94] ) /*0x72b8a8*/
  {
    __3_YAXPAX_Z(MEMORY[0xB0FB94]); /*0x72b8ab*/
    MEMORY[0xB0FB94] = 0; /*0x72b8b3*/
  }
  if ( MEMORY[0xB0FB98] ) /*0x72b8c1*/
  {
    (**(void (__thiscall ***)(int, int))MEMORY[0xB0FB98])(MEMORY[0xB0FB98], 1); /*0x72b8c7*/
    MEMORY[0xB0FB98] = 0; /*0x72b8c9*/
  }
}


// ==== 0x0072B8E0  DlgProcGameSetup_Setup  this=-  sig=ida-proto ====
char sub_72B8E0()
{
  char result; // al

  result = MEMORY[0xB0FD5D]; /*0x72b8e0*/
  if ( !MEMORY[0xB0FD5D] ) /*0x72b8e7*/
  {
    if ( MEMORY[0x8A00A4] == 800 ) /*0x72b8f3*/
      MEMORY[0xB0FB54] = LoadFileSHP(MEMORY[0x844DC4], (bool *)&MEMORY[0xB0FD5C]); /*0x72b905*/
    result = LoadPaletteSimple(MEMORY[0x844DC8], &MEMORY[0xB0FD60], &MEMORY[0xB0FD64]); /*0x72b91a*/
    MEMORY[0xB0FD5D] = 1; /*0x72b91f*/
  }
  return result; /*0x72b926*/
}


// ==== 0x0072B930  ObjectClass::DlgProcGameSetup_Setup_72B930  this=ObjectClass  sig=csp ====
void sub_72B930()
{
  void *v0; // esi

  if ( MEMORY[0xB0FD5D] ) /*0x72b93a*/
  {
    if ( MEMORY[0xB0FD5C] ) /*0x72b942*/
    {
      v0 = MEMORY[0xB0FB54]; /*0x72b945*/
      if ( MEMORY[0xB0FB54] ) /*0x72b94d*/
      {
        FileTreeNode::Destroy(MEMORY[0xB0FB54]); /*0x72b951*/
        __3_YAXPAX_Z(v0); /*0x72b957*/
      }
      MEMORY[0xB0FD5C] = 0; /*0x72b95f*/
    }
    MEMORY[0xB0FB54] = 0; /*0x72b96b*/
    if ( MEMORY[0xB0FD60] ) /*0x72b973*/
    {
      __3_YAXPAX_Z(MEMORY[0xB0FD60]); /*0x72b976*/
      MEMORY[0xB0FD60] = 0; /*0x72b97e*/
    }
    if ( MEMORY[0xB0FD64] ) /*0x72b98c*/
    {
      (**(void (__thiscall ***)(int, int))MEMORY[0xB0FD64])(MEMORY[0xB0FD64], 1); /*0x72b992*/
      MEMORY[0xB0FD64] = 0; /*0x72b994*/
    }
  }
  MEMORY[0xB0FD5D] = 0; /*0x72b99a*/
}


// ==== 0x0072B9B0  sub_72B9B0  this=-  sig=ida-proto ====
char sub_72B9B0()
{
  return MEMORY[0xB0FD5D]; /*0x72b9b5*/
}


// ==== 0x0072B9C0  sub_72B9C0  this=-  sig=ida-proto ====
CCINIClass *sub_72B9C0()
{
  return *(CCINIClass **)&stru_B05488.__pad_579C[20796]; /*0x72b9c5*/
}


// ==== 0x0072B9D0  UI_Create_72B9D0  this=-  sig=ida-proto ====
int sub_72B9D0()
{
  return MEMORY[0xB0FD64]; /*0x72b9d5*/
}


// ==== 0x0072BAC0  WOLobby_Load  this=-  sig=ida-proto ====
char sub_72BAC0()
{
  char result; // al

  result = MEMORY[0xB0FD51]; /*0x72bac0*/
  if ( !MEMORY[0xB0FD51] ) /*0x72bac7*/
  {
    if ( MEMORY[0x8A00A4] == 800 ) /*0x72bad3*/
      MEMORY[0xB0FB2C] = LoadFileSHP(MEMORY[0x844DBC], (bool *)&MEMORY[0xB0FD50]); /*0x72bae5*/
    result = LoadPaletteSimple(MEMORY[0x844DC0], &MEMORY[0xB0FD54], &MEMORY[0xB0FD58]); /*0x72bafa*/
    MEMORY[0xB0FD51] = 1; /*0x72baff*/
  }
  return result; /*0x72bb06*/
}


// ==== 0x0072BB10  ObjectClass::WOLobby_Destroy  this=ObjectClass  sig=csp ====
void sub_72BB10()
{
  void *v0; // esi

  if ( MEMORY[0xB0FD51] ) /*0x72bb1a*/
  {
    if ( MEMORY[0xB0FD50] ) /*0x72bb22*/
    {
      v0 = MEMORY[0xB0FB2C]; /*0x72bb25*/
      if ( MEMORY[0xB0FB2C] ) /*0x72bb2d*/
      {
        FileTreeNode::Destroy(MEMORY[0xB0FB2C]); /*0x72bb31*/
        __3_YAXPAX_Z(v0); /*0x72bb37*/
      }
      MEMORY[0xB0FD50] = 0; /*0x72bb3f*/
    }
    MEMORY[0xB0FB2C] = 0; /*0x72bb4b*/
    if ( MEMORY[0xB0FD54] ) /*0x72bb53*/
    {
      __3_YAXPAX_Z(MEMORY[0xB0FD54]); /*0x72bb56*/
      MEMORY[0xB0FD54] = 0; /*0x72bb5e*/
    }
    if ( MEMORY[0xB0FD58] ) /*0x72bb6c*/
    {
      (**(void (__thiscall ***)(int, int))MEMORY[0xB0FD58])(MEMORY[0xB0FD58], 1); /*0x72bb72*/
      MEMORY[0xB0FD58] = 0; /*0x72bb74*/
    }
  }
  MEMORY[0xB0FD51] = 0; /*0x72bb7a*/
}


// ==== 0x0072BB90  sub_72BB90  this=-  sig=ida-proto ====
char sub_72BB90()
{
  return MEMORY[0xB0FD51]; /*0x72bb95*/
}


// ==== 0x0072BBA0  sub_72BBA0  this=-  sig=ida-proto ====
CCINIClass *sub_72BBA0()
{
  return *(CCINIClass **)&stru_B05488.__pad_579C[20784]; /*0x72bba5*/
}


// ==== 0x0072BBB0  UI_Create_72BBB0  this=-  sig=ida-proto ====
int sub_72BBB0()
{
  return MEMORY[0xB0FD58]; /*0x72bbb5*/
}


// ==== 0x0072BCA0  LoginFlowWOL_Load  this=-  sig=ida-proto ====
char sub_72BCA0()
{
  char result; // al

  result = MEMORY[0xB0FD45]; /*0x72bca0*/
  if ( !MEMORY[0xB0FD45] ) /*0x72bca7*/
  {
    if ( MEMORY[0x8A00A4] == 800 ) /*0x72bcb3*/
      MEMORY[0xB0FA98] = LoadFileSHP(MEMORY[0x844DB4], (bool *)&MEMORY[0xB0FD44]); /*0x72bcc5*/
    result = LoadPaletteSimple(MEMORY[0x844DB8], &MEMORY[0xB0FD48], &MEMORY[0xB0FD4C]); /*0x72bcda*/
    MEMORY[0xB0FD45] = 1; /*0x72bcdf*/
  }
  return result; /*0x72bce6*/
}


// ==== 0x0072BCF0  ObjectClass::LoginFlowWOL_Destroy  this=ObjectClass  sig=csp ====
void sub_72BCF0()
{
  void *v0; // esi

  if ( MEMORY[0xB0FD45] ) /*0x72bcfa*/
  {
    if ( MEMORY[0xB0FD44] ) /*0x72bd02*/
    {
      v0 = MEMORY[0xB0FA98]; /*0x72bd05*/
      if ( MEMORY[0xB0FA98] ) /*0x72bd0d*/
      {
        FileTreeNode::Destroy(MEMORY[0xB0FA98]); /*0x72bd11*/
        __3_YAXPAX_Z(v0); /*0x72bd17*/
      }
      MEMORY[0xB0FD44] = 0; /*0x72bd1f*/
    }
    MEMORY[0xB0FA98] = 0; /*0x72bd2b*/
    if ( MEMORY[0xB0FD48] ) /*0x72bd33*/
    {
      __3_YAXPAX_Z(MEMORY[0xB0FD48]); /*0x72bd36*/
      MEMORY[0xB0FD48] = 0; /*0x72bd3e*/
    }
    if ( MEMORY[0xB0FD4C] ) /*0x72bd4c*/
    {
      (**(void (__thiscall ***)(int, int))MEMORY[0xB0FD4C])(MEMORY[0xB0FD4C], 1); /*0x72bd52*/
      MEMORY[0xB0FD4C] = 0; /*0x72bd54*/
    }
  }
  MEMORY[0xB0FD45] = 0; /*0x72bd5a*/
}


// ==== 0x0072BD70  sub_72BD70  this=-  sig=ida-proto ====
char sub_72BD70()
{
  return MEMORY[0xB0FD45]; /*0x72bd75*/
}


// ==== 0x0072BD80  sub_72BD80  this=-  sig=ida-proto ====
CCINIClass *sub_72BD80()
{
  return *(CCINIClass **)&stru_B05488.__pad_579C[20772]; /*0x72bd85*/
}


// ==== 0x0072BD90  UI_Create_72BD90  this=-  sig=ida-proto ====
int sub_72BD90()
{
  return MEMORY[0xB0FD4C]; /*0x72bd95*/
}


// ==== 0x0072BE80  JoinLobbyWOL_Load  this=-  sig=ida-proto ====
char sub_72BE80()
{
  char result; // al

  result = MEMORY[0xB0FD39]; /*0x72be80*/
  if ( !MEMORY[0xB0FD39] ) /*0x72be87*/
  {
    if ( MEMORY[0x8A00A4] == 800 ) /*0x72be93*/
      MEMORY[0xB0FA9C] = LoadFileSHP(MEMORY[0x844DAC], (bool *)&MEMORY[0xB0FD38]); /*0x72bea5*/
    result = LoadPaletteSimple(MEMORY[0x844DB0], &MEMORY[0xB0FD3C], &MEMORY[0xB0FD40]); /*0x72beba*/
    MEMORY[0xB0FD39] = 1; /*0x72bebf*/
  }
  return result; /*0x72bec6*/
}


// ==== 0x0072BED0  ObjectClass::JoinLobbyWOL_Destroy  this=ObjectClass  sig=csp ====
void sub_72BED0()
{
  void *v0; // esi

  if ( MEMORY[0xB0FD39] ) /*0x72beda*/
  {
    if ( MEMORY[0xB0FD38] ) /*0x72bee2*/
    {
      v0 = MEMORY[0xB0FA9C]; /*0x72bee5*/
      if ( MEMORY[0xB0FA9C] ) /*0x72beed*/
      {
        FileTreeNode::Destroy(MEMORY[0xB0FA9C]); /*0x72bef1*/
        __3_YAXPAX_Z(v0); /*0x72bef7*/
      }
      MEMORY[0xB0FD38] = 0; /*0x72beff*/
    }
    MEMORY[0xB0FA9C] = 0; /*0x72bf0b*/
    if ( MEMORY[0xB0FD3C] ) /*0x72bf13*/
    {
      __3_YAXPAX_Z(MEMORY[0xB0FD3C]); /*0x72bf16*/
      MEMORY[0xB0FD3C] = 0; /*0x72bf1e*/
    }
    if ( MEMORY[0xB0FD40] ) /*0x72bf2c*/
    {
      (**(void (__thiscall ***)(int, int))MEMORY[0xB0FD40])(MEMORY[0xB0FD40], 1); /*0x72bf32*/
      MEMORY[0xB0FD40] = 0; /*0x72bf34*/
    }
  }
  MEMORY[0xB0FD39] = 0; /*0x72bf3a*/
}


// ==== 0x0072BF50  sub_72BF50  this=-  sig=ida-proto ====
char sub_72BF50()
{
  return MEMORY[0xB0FD39]; /*0x72bf55*/
}


// ==== 0x0072BF60  sub_72BF60  this=-  sig=ida-proto ====
CCINIClass *sub_72BF60()
{
  return *(CCINIClass **)&stru_B05488.__pad_579C[20760]; /*0x72bf65*/
}


// ==== 0x0072BF70  UI_Create_72BF70  this=-  sig=ida-proto ====
int sub_72BF70()
{
  return MEMORY[0xB0FD40]; /*0x72bf75*/
}


// ==== 0x0072C060  GameOptionsScreenWOL_Load  this=-  sig=ida-proto ====
char sub_72C060()
{
  char result; // al

  result = MEMORY[0xB0FD2D]; /*0x72c060*/
  if ( !MEMORY[0xB0FD2D] ) /*0x72c067*/
  {
    if ( MEMORY[0x8A00A4] == 800 ) /*0x72c073*/
      MEMORY[0xB0FA4C] = LoadFileSHP(MEMORY[0x844DA4], (bool *)&MEMORY[0xB0FD2C]); /*0x72c085*/
    result = LoadPaletteSimple(MEMORY[0x844DA8], &MEMORY[0xB0FD30], &MEMORY[0xB0FD34]); /*0x72c09a*/
    MEMORY[0xB0FD2D] = 1; /*0x72c09f*/
  }
  return result; /*0x72c0a6*/
}


// ==== 0x0072C0B0  ObjectClass::GameOptionsScreenWOL_Destroy  this=ObjectClass  sig=csp ====
void sub_72C0B0()
{
  void *v0; // esi

  if ( MEMORY[0xB0FD2D] ) /*0x72c0ba*/
  {
    if ( MEMORY[0xB0FD2C] ) /*0x72c0c2*/
    {
      v0 = MEMORY[0xB0FA4C]; /*0x72c0c5*/
      if ( MEMORY[0xB0FA4C] ) /*0x72c0cd*/
      {
        FileTreeNode::Destroy(MEMORY[0xB0FA4C]); /*0x72c0d1*/
        __3_YAXPAX_Z(v0); /*0x72c0d7*/
      }
      MEMORY[0xB0FD2C] = 0; /*0x72c0df*/
    }
    MEMORY[0xB0FA4C] = 0; /*0x72c0eb*/
    if ( MEMORY[0xB0FD30] ) /*0x72c0f3*/
    {
      __3_YAXPAX_Z(MEMORY[0xB0FD30]); /*0x72c0f6*/
      MEMORY[0xB0FD30] = 0; /*0x72c0fe*/
    }
    if ( MEMORY[0xB0FD34] ) /*0x72c10c*/
    {
      (**(void (__thiscall ***)(int, int))MEMORY[0xB0FD34])(MEMORY[0xB0FD34], 1); /*0x72c112*/
      MEMORY[0xB0FD34] = 0; /*0x72c114*/
    }
  }
  MEMORY[0xB0FD2D] = 0; /*0x72c11a*/
}


// ==== 0x0072C130  sub_72C130  this=-  sig=ida-proto ====
char sub_72C130()
{
  return MEMORY[0xB0FD2D]; /*0x72c135*/
}


// ==== 0x0072C140  sub_72C140  this=-  sig=ida-proto ====
CCINIClass *sub_72C140()
{
  return *(CCINIClass **)&stru_B05488.__pad_579C[20748]; /*0x72c145*/
}


// ==== 0x0072C150  UI_Create_72C150  this=-  sig=ida-proto ====
int sub_72C150()
{
  return MEMORY[0xB0FD34]; /*0x72c155*/
}


// ==== 0x0072C240  CreateAccountWOL_Create  this=-  sig=ida-proto ====
char sub_72C240()
{
  char result; // al

  result = MEMORY[0xB0FD21]; /*0x72c240*/
  if ( !MEMORY[0xB0FD21] ) /*0x72c247*/
  {
    if ( MEMORY[0x8A00A4] == 800 ) /*0x72c253*/
      MEMORY[0xB0FA30] = LoadFileSHP(MEMORY[0x844D9C], (bool *)&MEMORY[0xB0FD20]); /*0x72c265*/
    result = LoadPaletteSimple(MEMORY[0x844DA0], &MEMORY[0xB0FD24], &MEMORY[0xB0FD28]); /*0x72c27a*/
    MEMORY[0xB0FD21] = 1; /*0x72c27f*/
  }
  return result; /*0x72c286*/
}


// ==== 0x0072C290  ObjectClass::CreateAccountWOL_Create_72C290  this=ObjectClass  sig=csp ====
void sub_72C290()
{
  void *v0; // esi

  if ( MEMORY[0xB0FD21] ) /*0x72c29a*/
  {
    if ( MEMORY[0xB0FD20] ) /*0x72c2a2*/
    {
      v0 = MEMORY[0xB0FA30]; /*0x72c2a5*/
      if ( MEMORY[0xB0FA30] ) /*0x72c2ad*/
      {
        FileTreeNode::Destroy(MEMORY[0xB0FA30]); /*0x72c2b1*/
        __3_YAXPAX_Z(v0); /*0x72c2b7*/
      }
      MEMORY[0xB0FD20] = 0; /*0x72c2bf*/
    }
    MEMORY[0xB0FA30] = 0; /*0x72c2cb*/
    if ( MEMORY[0xB0FD24] ) /*0x72c2d3*/
    {
      __3_YAXPAX_Z(MEMORY[0xB0FD24]); /*0x72c2d6*/
      MEMORY[0xB0FD24] = 0; /*0x72c2de*/
    }
    if ( MEMORY[0xB0FD28] ) /*0x72c2ec*/
    {
      (**(void (__thiscall ***)(int, int))MEMORY[0xB0FD28])(MEMORY[0xB0FD28], 1); /*0x72c2f2*/
      MEMORY[0xB0FD28] = 0; /*0x72c2f4*/
    }
  }
  MEMORY[0xB0FD21] = 0; /*0x72c2fa*/
}


// ==== 0x0072C310  sub_72C310  this=-  sig=ida-proto ====
char sub_72C310()
{
  return MEMORY[0xB0FD21]; /*0x72c315*/
}


// ==== 0x0072C320  sub_72C320  this=-  sig=ida-proto ====
CCINIClass *sub_72C320()
{
  return *(CCINIClass **)&stru_B05488.__pad_579C[20736]; /*0x72c325*/
}


// ==== 0x0072C330  UI_Create_72C330  this=-  sig=ida-proto ====
int sub_72C330()
{
  return MEMORY[0xB0FD28]; /*0x72c335*/
}


// ==== 0x0072C420  CreateAccountWOL_Create_72C420  this=-  sig=ida-proto ====
char sub_72C420()
{
  char result; // al

  result = MEMORY[0xB0FD15]; /*0x72c420*/
  if ( !MEMORY[0xB0FD15] ) /*0x72c427*/
  {
    if ( MEMORY[0x8A00A4] == 800 ) /*0x72c433*/
      MEMORY[0xB0FA64] = LoadFileSHP(MEMORY[0x844D94], (bool *)&MEMORY[0xB0FD14]); /*0x72c445*/
    result = LoadPaletteSimple(MEMORY[0x844D98], &MEMORY[0xB0FD18], &MEMORY[0xB0FD1C]); /*0x72c45a*/
    MEMORY[0xB0FD15] = 1; /*0x72c45f*/
  }
  return result; /*0x72c466*/
}


// ==== 0x0072C470  ObjectClass::CreateAccountWOL_Create_72C470  this=ObjectClass  sig=csp ====
void sub_72C470()
{
  void *v0; // esi

  if ( MEMORY[0xB0FD15] ) /*0x72c47a*/
  {
    if ( MEMORY[0xB0FD14] ) /*0x72c482*/
    {
      v0 = MEMORY[0xB0FA64]; /*0x72c485*/
      if ( MEMORY[0xB0FA64] ) /*0x72c48d*/
      {
        FileTreeNode::Destroy(MEMORY[0xB0FA64]); /*0x72c491*/
        __3_YAXPAX_Z(v0); /*0x72c497*/
      }
      MEMORY[0xB0FD14] = 0; /*0x72c49f*/
    }
    MEMORY[0xB0FA64] = 0; /*0x72c4ab*/
    if ( MEMORY[0xB0FD18] ) /*0x72c4b3*/
    {
      __3_YAXPAX_Z(MEMORY[0xB0FD18]); /*0x72c4b6*/
      MEMORY[0xB0FD18] = 0; /*0x72c4be*/
    }
    if ( MEMORY[0xB0FD1C] ) /*0x72c4cc*/
    {
      (**(void (__thiscall ***)(int, int))MEMORY[0xB0FD1C])(MEMORY[0xB0FD1C], 1); /*0x72c4d2*/
      MEMORY[0xB0FD1C] = 0; /*0x72c4d4*/
    }
  }
  MEMORY[0xB0FD15] = 0; /*0x72c4da*/
}


// ==== 0x0072C4F0  sub_72C4F0  this=-  sig=ida-proto ====
char sub_72C4F0()
{
  return MEMORY[0xB0FD15]; /*0x72c4f5*/
}


// ==== 0x0072C500  sub_72C500  this=-  sig=ida-proto ====
CCINIClass *sub_72C500()
{
  return *(CCINIClass **)&stru_B05488.__pad_579C[20724]; /*0x72c505*/
}


// ==== 0x0072C510  UI_Create_72C510  this=-  sig=ida-proto ====
int sub_72C510()
{
  return MEMORY[0xB0FD1C]; /*0x72c515*/
}


// ==== 0x0072C600  LoginFlowWOL_Load_72C600  this=-  sig=ida-proto ====
char sub_72C600()
{
  char result; // al

  result = MEMORY[0xB0FD09]; /*0x72c600*/
  if ( !MEMORY[0xB0FD09] ) /*0x72c607*/
  {
    if ( MEMORY[0x8A00A4] == 800 ) /*0x72c613*/
      MEMORY[0xB0FB0C] = LoadFileSHP(MEMORY[0x844D8C], (bool *)&MEMORY[0xB0FD08]); /*0x72c625*/
    result = LoadPaletteSimple(MEMORY[0x844D90], &MEMORY[0xB0FD0C], &MEMORY[0xB0FD10]); /*0x72c63a*/
    MEMORY[0xB0FD09] = 1; /*0x72c63f*/
  }
  return result; /*0x72c646*/
}


// ==== 0x0072C650  ObjectClass::LoginFlowWOL_Destroy_72C650  this=ObjectClass  sig=csp ====
void sub_72C650()
{
  void *v0; // esi

  if ( MEMORY[0xB0FD09] ) /*0x72c65a*/
  {
    if ( MEMORY[0xB0FD08] ) /*0x72c662*/
    {
      v0 = MEMORY[0xB0FB0C]; /*0x72c665*/
      if ( MEMORY[0xB0FB0C] ) /*0x72c66d*/
      {
        FileTreeNode::Destroy(MEMORY[0xB0FB0C]); /*0x72c671*/
        __3_YAXPAX_Z(v0); /*0x72c677*/
      }
      MEMORY[0xB0FD08] = 0; /*0x72c67f*/
    }
    MEMORY[0xB0FB0C] = 0; /*0x72c68b*/
    if ( MEMORY[0xB0FD0C] ) /*0x72c693*/
    {
      __3_YAXPAX_Z(MEMORY[0xB0FD0C]); /*0x72c696*/
      MEMORY[0xB0FD0C] = 0; /*0x72c69e*/
    }
    if ( MEMORY[0xB0FD10] ) /*0x72c6ac*/
    {
      (**(void (__thiscall ***)(int, int))MEMORY[0xB0FD10])(MEMORY[0xB0FD10], 1); /*0x72c6b2*/
      MEMORY[0xB0FD10] = 0; /*0x72c6b4*/
    }
  }
  MEMORY[0xB0FD09] = 0; /*0x72c6ba*/
}


// ==== 0x0072C6D0  sub_72C6D0  this=-  sig=ida-proto ====
char sub_72C6D0()
{
  return MEMORY[0xB0FD09]; /*0x72c6d5*/
}


// ==== 0x0072C6E0  sub_72C6E0  this=-  sig=ida-proto ====
CCINIClass *sub_72C6E0()
{
  return *(CCINIClass **)&stru_B05488.__pad_579C[20712]; /*0x72c6e5*/
}


// ==== 0x0072C6F0  UI_Create_72C6F0  this=-  sig=ida-proto ====
int sub_72C6F0()
{
  return MEMORY[0xB0FD10]; /*0x72c6f5*/
}


// ==== 0x0072C7E0  RunWOLMainLoop_Read_Read  this=-  sig=ida-proto ====
char sub_72C7E0()
{
  char result; // al

  result = MEMORY[0xB0FCFD]; /*0x72c7e0*/
  if ( !MEMORY[0xB0FCFD] ) /*0x72c7e7*/
  {
    if ( MEMORY[0x8A00A4] == 800 ) /*0x72c7f3*/
      MEMORY[0xB0F9E8] = LoadFileSHP(MEMORY[0x844D84], (bool *)&MEMORY[0xB0FCFC]); /*0x72c805*/
    result = LoadPaletteSimple(MEMORY[0x844D88], &MEMORY[0xB0FD00], &MEMORY[0xB0FD04]); /*0x72c81a*/
    MEMORY[0xB0FCFD] = 1; /*0x72c81f*/
  }
  return result; /*0x72c826*/
}


// ==== 0x0072C830  ObjectClass::RunWOLMainLoop_Read_Read_72C830  this=ObjectClass  sig=csp ====
void sub_72C830()
{
  void *v0; // esi

  if ( MEMORY[0xB0FCFD] ) /*0x72c83a*/
  {
    if ( MEMORY[0xB0FCFC] ) /*0x72c842*/
    {
      v0 = MEMORY[0xB0F9E8]; /*0x72c845*/
      if ( MEMORY[0xB0F9E8] ) /*0x72c84d*/
      {
        FileTreeNode::Destroy(MEMORY[0xB0F9E8]); /*0x72c851*/
        __3_YAXPAX_Z(v0); /*0x72c857*/
      }
      MEMORY[0xB0FCFC] = 0; /*0x72c85f*/
    }
    MEMORY[0xB0F9E8] = 0; /*0x72c86b*/
    if ( MEMORY[0xB0FD00] ) /*0x72c873*/
    {
      __3_YAXPAX_Z(MEMORY[0xB0FD00]); /*0x72c876*/
      MEMORY[0xB0FD00] = 0; /*0x72c87e*/
    }
    if ( MEMORY[0xB0FD04] ) /*0x72c88c*/
    {
      (**(void (__thiscall ***)(int, int))MEMORY[0xB0FD04])(MEMORY[0xB0FD04], 1); /*0x72c892*/
      MEMORY[0xB0FD04] = 0; /*0x72c894*/
    }
  }
  MEMORY[0xB0FCFD] = 0; /*0x72c89a*/
}


// ==== 0x0072C8B0  sub_72C8B0  this=-  sig=ida-proto ====
char sub_72C8B0()
{
  return MEMORY[0xB0FCFD]; /*0x72c8b5*/
}


// ==== 0x0072C8C0  sub_72C8C0  this=-  sig=ida-proto ====
CCINIClass *sub_72C8C0()
{
  return *(CCINIClass **)&stru_B05488.__pad_579C[20700]; /*0x72c8c5*/
}


// ==== 0x0072C8D0  UI_Create_72C8D0  this=-  sig=ida-proto ====
int sub_72C8D0()
{
  return MEMORY[0xB0FD04]; /*0x72c8d5*/
}


// ==== 0x0072C9C0  System_Init_72C9C0  this=-  sig=ida-proto ====
char sub_72C9C0()
{
  char result; // al

  result = MEMORY[0xB0FCF1]; /*0x72c9c0*/
  if ( !MEMORY[0xB0FCF1] ) /*0x72c9c7*/
  {
    if ( MEMORY[0x8A00A4] == 800 ) /*0x72c9d3*/
      MEMORY[0xB0FA60] = LoadFileSHP(MEMORY[0x844D7C], (bool *)&MEMORY[0xB0FCF0]); /*0x72c9e5*/
    result = LoadPaletteSimple(MEMORY[0x844D80], &MEMORY[0xB0FCF4], &MEMORY[0xB0FCF8]); /*0x72c9fa*/
    MEMORY[0xB0FCF1] = 1; /*0x72c9ff*/
  }
  return result; /*0x72ca06*/
}


// ==== 0x0072CA10  ObjectClass::System_Init_72CA10  this=ObjectClass  sig=csp ====
void sub_72CA10()
{
  void *v0; // esi

  if ( MEMORY[0xB0FCF1] ) /*0x72ca1a*/
  {
    if ( MEMORY[0xB0FCF0] ) /*0x72ca22*/
    {
      v0 = MEMORY[0xB0FA60]; /*0x72ca25*/
      if ( MEMORY[0xB0FA60] ) /*0x72ca2d*/
      {
        FileTreeNode::Destroy(MEMORY[0xB0FA60]); /*0x72ca31*/
        __3_YAXPAX_Z(v0); /*0x72ca37*/
      }
      MEMORY[0xB0FCF0] = 0; /*0x72ca3f*/
    }
    MEMORY[0xB0FA60] = 0; /*0x72ca4b*/
    if ( MEMORY[0xB0FCF4] ) /*0x72ca53*/
    {
      __3_YAXPAX_Z(MEMORY[0xB0FCF4]); /*0x72ca56*/
      MEMORY[0xB0FCF4] = 0; /*0x72ca5e*/
    }
    if ( MEMORY[0xB0FCF8] ) /*0x72ca6c*/
    {
      (**(void (__thiscall ***)(int, int))MEMORY[0xB0FCF8])(MEMORY[0xB0FCF8], 1); /*0x72ca72*/
      MEMORY[0xB0FCF8] = 0; /*0x72ca74*/
    }
  }
  MEMORY[0xB0FCF1] = 0; /*0x72ca7a*/
}


// ==== 0x0072CA90  sub_72CA90  this=-  sig=ida-proto ====
char sub_72CA90()
{
  return MEMORY[0xB0FCF1]; /*0x72ca95*/
}


// ==== 0x0072CAA0  sub_72CAA0  this=-  sig=ida-proto ====
CCINIClass *sub_72CAA0()
{
  return *(CCINIClass **)&stru_B05488.__pad_579C[20688]; /*0x72caa5*/
}


// ==== 0x0072CAB0  UI_Create_72CAB0  this=-  sig=ida-proto ====
int sub_72CAB0()
{
  return MEMORY[0xB0FCF8]; /*0x72cab5*/
}


// ==== 0x0072CBA0  ShowUIMessage_Show  this=-  sig=ida-proto ====
char sub_72CBA0()
{
  char result; // al

  result = MEMORY[0xB0FC7C]; /*0x72cba0*/
  if ( !MEMORY[0xB0FC7C] ) /*0x72cba7*/
  {
    MEMORY[0xB0FAD0] = (int)LoadFileSHP(MEMORY[0x845540], (bool *)&MEMORY[0xB0FC73]); /*0x72cbc7*/
    result = LoadPaletteSimple(MEMORY[0x845530], &MEMORY[0xB0FC74], &MEMORY[0xB0FC78]); /*0x72cbcc*/
    MEMORY[0xB0FC7C] = 1; /*0x72cbd1*/
  }
  return result; /*0x72cbd8*/
}


// ==== 0x0072CC60  sub_72CC60  this=-  sig=ida-proto ====
char sub_72CC60()
{
  return MEMORY[0xB0FC7C]; /*0x72cc65*/
}


// ==== 0x0072CC70  sub_72CC70  this=-  sig=ida-proto ====
int sub_72CC70()
{
  return MEMORY[0xB0FC74]; /*0x72cc75*/
}


// ==== 0x0072CC80  UI_Helper_72CC80  this=-  sig=ida-proto ====
int sub_72CC80()
{
  return MEMORY[0xB0FC78]; /*0x72cc85*/
}


// ==== 0x0072CD60  Network_Load_72CD60  this=-  sig=ida-proto ====
char sub_72CD60()
{
  char result; // al

  result = MEMORY[0xB0FCE5]; /*0x72cd60*/
  if ( !MEMORY[0xB0FCE5] ) /*0x72cd67*/
  {
    if ( MEMORY[0x8A00A4] == 800 ) /*0x72cd73*/
      MEMORY[0xB0FAAC] = LoadFileSHP(MEMORY[0x844D74], (bool *)&MEMORY[0xB0FCE4]); /*0x72cd85*/
    result = LoadPaletteSimple(MEMORY[0x844D78], &MEMORY[0xB0FCE8], &MEMORY[0xB0FCEC]); /*0x72cd9a*/
    MEMORY[0xB0FCE5] = 1; /*0x72cd9f*/
  }
  return result; /*0x72cda6*/
}


// ==== 0x0072CDB0  ObjectClass::Network_Destroy  this=ObjectClass  sig=csp ====
void sub_72CDB0()
{
  void *v0; // esi

  if ( MEMORY[0xB0FCE5] ) /*0x72cdba*/
  {
    if ( MEMORY[0xB0FCE4] ) /*0x72cdc2*/
    {
      v0 = MEMORY[0xB0FAAC]; /*0x72cdc5*/
      if ( MEMORY[0xB0FAAC] ) /*0x72cdcd*/
      {
        FileTreeNode::Destroy(MEMORY[0xB0FAAC]); /*0x72cdd1*/
        __3_YAXPAX_Z(v0); /*0x72cdd7*/
      }
      MEMORY[0xB0FCE4] = 0; /*0x72cddf*/
    }
    MEMORY[0xB0FAAC] = 0; /*0x72cdeb*/
    if ( MEMORY[0xB0FCE8] ) /*0x72cdf3*/
    {
      __3_YAXPAX_Z(MEMORY[0xB0FCE8]); /*0x72cdf6*/
      MEMORY[0xB0FCE8] = 0; /*0x72cdfe*/
    }
    if ( MEMORY[0xB0FCEC] ) /*0x72ce0c*/
    {
      (**(void (__thiscall ***)(int, int))MEMORY[0xB0FCEC])(MEMORY[0xB0FCEC], 1); /*0x72ce12*/
      MEMORY[0xB0FCEC] = 0; /*0x72ce14*/
    }
  }
  MEMORY[0xB0FCE5] = 0; /*0x72ce1a*/
}


// ==== 0x0072CE30  sub_72CE30  this=-  sig=ida-proto ====
char sub_72CE30()
{
  return MEMORY[0xB0FCE5]; /*0x72ce35*/
}


// ==== 0x0072CE40  sub_72CE40  this=-  sig=ida-proto ====
CCINIClass *sub_72CE40()
{
  return *(CCINIClass **)&stru_B05488.__pad_579C[20676]; /*0x72ce45*/
}


// ==== 0x0072CE50  UI_Create_72CE50  this=-  sig=ida-proto ====
int sub_72CE50()
{
  return MEMORY[0xB0FCEC]; /*0x72ce55*/
}


// ==== 0x0072CF40  LoadingScreen::Init  this=LoadingScreen  sig=ida-proto ====
char LoadingScreen_Init()
{
  char result; // al

  result = MEMORY[0xB0FCD9]; /*0x72cf40*/
  if ( !MEMORY[0xB0FCD9] ) /*0x72cf47*/
  {
    if ( MEMORY[0x8A00A4] == 800 ) /*0x72cf53*/
      MEMORY[0xB0FA18] = LoadFileSHP(MEMORY[0x844D6C], (bool *)&MEMORY[0xB0FCD8]); /*0x72cf65*/
    result = LoadPaletteSimple(MEMORY[0x844D70], &MEMORY[0xB0FCDC], &MEMORY[0xB0FCE0]); /*0x72cf7a*/
    MEMORY[0xB0FCD9] = 1; /*0x72cf7f*/
  }
  return result; /*0x72cf86*/
}


// ==== 0x0072CF90  ObjectClass::CleanupFileTree  this=ObjectClass  sig=csp ====
void FileTree_Cleanup()
{
  void *v0; // esi

  if ( MEMORY[0xB0FCD9] ) /*0x72cf9a*/
  {
    if ( MEMORY[0xB0FCD8] ) /*0x72cfa2*/
    {
      v0 = MEMORY[0xB0FA18]; /*0x72cfa5*/
      if ( MEMORY[0xB0FA18] ) /*0x72cfad*/
      {
        FileTreeNode::Destroy(MEMORY[0xB0FA18]); /*0x72cfb1*/
        __3_YAXPAX_Z(v0); /*0x72cfb7*/
      }
      MEMORY[0xB0FCD8] = 0; /*0x72cfbf*/
    }
    MEMORY[0xB0FA18] = 0; /*0x72cfcb*/
    if ( MEMORY[0xB0FCDC] ) /*0x72cfd3*/
    {
      __3_YAXPAX_Z(MEMORY[0xB0FCDC]); /*0x72cfd6*/
      MEMORY[0xB0FCDC] = 0; /*0x72cfde*/
    }
    if ( MEMORY[0xB0FCE0] ) /*0x72cfec*/
    {
      (**(void (__thiscall ***)(int, int))MEMORY[0xB0FCE0])(MEMORY[0xB0FCE0], 1); /*0x72cff2*/
      MEMORY[0xB0FCE0] = 0; /*0x72cff4*/
    }
  }
  MEMORY[0xB0FCD9] = 0; /*0x72cffa*/
}


// ==== 0x0072D010  sub_72D010  this=-  sig=ida-proto ====
char sub_72D010()
{
  return MEMORY[0xB0FCD9]; /*0x72d015*/
}


// ==== 0x0072D020  sub_72D020  this=-  sig=ida-proto ====
CCINIClass *sub_72D020()
{
  return *(CCINIClass **)&stru_B05488.__pad_579C[20664]; /*0x72d025*/
}


// ==== 0x0072D030  UI_Create_72D030  this=-  sig=ida-proto ====
int sub_72D030()
{
  return MEMORY[0xB0FCE0]; /*0x72d035*/
}


// ==== 0x0072D120  UI_Show  this=-  sig=ida-proto ====
char sub_72D120()
{
  char result; // al

  result = MEMORY[0xB0FCCE]; /*0x72d120*/
  if ( !MEMORY[0xB0FCCE] ) /*0x72d127*/
  {
    if ( MEMORY[0x8A00A4] == 800 ) /*0x72d133*/
      MEMORY[0xB0FAB8] = LoadFileSHP(MEMORY[0x844D64], (bool *)&MEMORY[0xB0FCCD]); /*0x72d145*/
    result = LoadPaletteSimple(MEMORY[0x844D68], &MEMORY[0xB0FCD0], &MEMORY[0xB0FCD4]); /*0x72d15a*/
    MEMORY[0xB0FCCE] = 1; /*0x72d15f*/
  }
  return result; /*0x72d166*/
}


// ==== 0x0072D170  AudioController::GetVolume  this=AudioController  sig=csp ====
void sub_72D170()
{
  void *v0; // esi

  if ( MEMORY[0xB0FCCE] ) /*0x72d17a*/
  {
    if ( MEMORY[0xB0FCCD] ) /*0x72d182*/
    {
      v0 = MEMORY[0xB0FAB8]; /*0x72d185*/
      if ( MEMORY[0xB0FAB8] ) /*0x72d18d*/
      {
        FileTreeNode::Destroy(MEMORY[0xB0FAB8]); /*0x72d191*/
        __3_YAXPAX_Z(v0); /*0x72d197*/
      }
      MEMORY[0xB0FCCD] = 0; /*0x72d19f*/
    }
    MEMORY[0xB0FAB8] = 0; /*0x72d1ab*/
    if ( MEMORY[0xB0FCD0] ) /*0x72d1b3*/
    {
      __3_YAXPAX_Z(MEMORY[0xB0FCD0]); /*0x72d1b6*/
      MEMORY[0xB0FCD0] = 0; /*0x72d1be*/
    }
    if ( MEMORY[0xB0FCD4] ) /*0x72d1cc*/
    {
      (**(void (__thiscall ***)(int, int))MEMORY[0xB0FCD4])(MEMORY[0xB0FCD4], 1); /*0x72d1d2*/
      MEMORY[0xB0FCD4] = 0; /*0x72d1d4*/
    }
  }
  MEMORY[0xB0FCCE] = 0; /*0x72d1da*/
}


// ==== 0x0072D1F0  sub_72D1F0  this=-  sig=ida-proto ====
char sub_72D1F0()
{
  return MEMORY[0xB0FCCE]; /*0x72d1f5*/
}


// ==== 0x0072D200  sub_72D200  this=-  sig=ida-proto ====
CCINIClass *sub_72D200()
{
  return *(CCINIClass **)&stru_B05488.__pad_579C[20652]; /*0x72d205*/
}


// ==== 0x0072D210  UI_Create_72D210  this=-  sig=ida-proto ====
int sub_72D210()
{
  return MEMORY[0xB0FCD4]; /*0x72d215*/
}


// ==== 0x0072D300  CampaignScore::LoadCampaignScoreAssetsGame  this=CampaignScore  sig=csp ====
char __thiscall CampaignScore::LoadCampaignScoreAssetsGame(void *this)
{
  char result; // al
  char *v3; // ecx

  result = MEMORY[0xB0FBAC]; /*0x72d300*/
  if ( !MEMORY[0xB0FBAC] ) /*0x72d30a*/
  {
    CampaignScore::LoadScreenAssets(this); /*0x72d30c*/
    if ( this ) /*0x72d313*/
    {
      v3 = MEMORY[0x844BCC][0]; /*0x72d31d*/
      if ( this != (void *)1 ) /*0x72d326*/
        v3 = MEMORY[0x844BD0]; /*0x72d328*/
    }
    else
    {
      v3 = MEMORY[0x844BC8][0]; /*0x72d315*/
    }
    result = LoadPaletteSimple(v3, &MEMORY[0xB0FBA4], &MEMORY[0xB0FBA8]); /*0x72d338*/
    MEMORY[0xB0FBAC] = 1; /*0x72d33d*/
  }
  return result; /*0x72d344*/
}


// ==== 0x0072D350  FileSystem::CleanupTrees  this=FileSystem  sig=csp ====
void FileSystem_CleanupTrees()
{
  void *v0; // esi
  void *v1; // esi
  void *v2; // esi

  if ( MEMORY[0xB0FBAC] ) /*0x72d35a*/
  {
    MEMORY[0xB0FBAC] = 0; /*0x72d368*/
    if ( MEMORY[0xB0FC70] ) /*0x72d36e*/
    {
      v0 = MEMORY[0xB0FB34]; /*0x72d370*/
      if ( MEMORY[0xB0FB34] ) /*0x72d378*/
      {
        FileTreeNode::Destroy(MEMORY[0xB0FB34]); /*0x72d37c*/
        __3_YAXPAX_Z(v0); /*0x72d382*/
      }
      MEMORY[0xB0FC70] = 0; /*0x72d38a*/
    }
    MEMORY[0xB0FB34] = 0; /*0x72d395*/
    if ( MEMORY[0xB0FC71] ) /*0x72d39d*/
    {
      v1 = MEMORY[0xB0FB00]; /*0x72d39f*/
      if ( MEMORY[0xB0FB00] ) /*0x72d3a7*/
      {
        FileTreeNode::Destroy(MEMORY[0xB0FB00]); /*0x72d3ab*/
        __3_YAXPAX_Z(v1); /*0x72d3b1*/
      }
      MEMORY[0xB0FC71] = 0; /*0x72d3b9*/
    }
    MEMORY[0xB0FB00] = 0; /*0x72d3c4*/
    if ( MEMORY[0xB0FC72] ) /*0x72d3cc*/
    {
      v2 = MEMORY[0xB0FB30]; /*0x72d3ce*/
      if ( MEMORY[0xB0FB30] ) /*0x72d3d6*/
      {
        FileTreeNode::Destroy(MEMORY[0xB0FB30]); /*0x72d3da*/
        __3_YAXPAX_Z(v2); /*0x72d3e0*/
      }
      MEMORY[0xB0FC72] = 0; /*0x72d3e8*/
    }
    MEMORY[0xB0FB30] = 0; /*0x72d3f3*/
    if ( MEMORY[0xB0FBA4] ) /*0x72d3fc*/
    {
      __3_YAXPAX_Z(MEMORY[0xB0FBA4]); /*0x72d3ff*/
      MEMORY[0xB0FBA4] = 0; /*0x72d407*/
    }
    if ( MEMORY[0xB0FBA8] ) /*0x72d415*/
    {
      (**(void (__thiscall ***)(int, int))MEMORY[0xB0FBA8])(MEMORY[0xB0FBA8], 1); /*0x72d41b*/
      MEMORY[0xB0FBA8] = 0; /*0x72d41d*/
    }
  }
}


// ==== 0x0072D430  sub_72D430  this=-  sig=ida-proto ====
char sub_72D430()
{
  return MEMORY[0xB0FBAC]; /*0x72d435*/
}


// ==== 0x0072D440  sub_72D440  this=-  sig=ida-proto ====
void *sub_72D440()
{
  return MEMORY[0xB0FBA4]; /*0x72d445*/
}


// ==== 0x0072D450  VtableStub_72D450  this=AbstractClass  sig=ida-proto ====
int VtableStub_72D450()
{
  return MEMORY[0xB0FBA8]; /*0x72d455*/
}


// ==== 0x0072D460  CampaignScore::LoadScreenAssets  this=CampaignScore  sig=csp ====
void *__thiscall sub_72D460(void *this)
{
  void *result; // eax

  if ( this ) /*0x72d462*/
  {
    if ( this == (void *)1 ) /*0x72d4f7*/
    {
      if ( MEMORY[0x8A00A4] == 640 ) /*0x72d507*/
      {
        MEMORY[0xB0FB34] = LoadFileSHP(MEMORY[0x844C70], (bool *)&MEMORY[0xB0FC70]); /*0x72d51f*/
        MEMORY[0xB0FB00] = LoadFileSHP(MEMORY[0x844C78], (bool *)&MEMORY[0xB0FC71]); /*0x72d534*/
        result = LoadFileSHP(MEMORY[0x844C80], (bool *)&MEMORY[0xB0FC72]); /*0x72d539*/
      }
      else
      {
        MEMORY[0xB0FB34] = LoadFileSHP(MEMORY[0x844C74], (bool *)&MEMORY[0xB0FC70]); /*0x72d55a*/
        MEMORY[0xB0FB00] = LoadFileSHP(MEMORY[0x844C7C], (bool *)&MEMORY[0xB0FC71]); /*0x72d56f*/
        result = LoadFileSHP(MEMORY[0x844C84], (bool *)&MEMORY[0xB0FC72]); /*0x72d574*/
      }
      MEMORY[0xB0FB30] = result; /*0x72d53e*/
    }
    else
    {
      if ( MEMORY[0x8A00A4] == 640 ) /*0x72d589*/
      {
        MEMORY[0xB0FB34] = LoadFileSHP(MEMORY[0x844C88], (bool *)&MEMORY[0xB0FC70]); /*0x72d5a1*/
        MEMORY[0xB0FB00] = LoadFileSHP(MEMORY[0x844C90], (bool *)&MEMORY[0xB0FC71]); /*0x72d5b6*/
        result = LoadFileSHP(MEMORY[0x844C98], (bool *)&MEMORY[0xB0FC72]); /*0x72d5bb*/
      }
      else
      {
        MEMORY[0xB0FB34] = LoadFileSHP(MEMORY[0x844C8C], (bool *)&MEMORY[0xB0FC70]); /*0x72d5dc*/
        MEMORY[0xB0FB00] = LoadFileSHP(MEMORY[0x844C94], (bool *)&MEMORY[0xB0FC71]); /*0x72d5f1*/
        result = LoadFileSHP(MEMORY[0x844C9C], (bool *)&MEMORY[0xB0FC72]); /*0x72d5f6*/
      }
      MEMORY[0xB0FB30] = result; /*0x72d5c0*/
    }
  }
  else
  {
    if ( MEMORY[0x8A00A4] == 640 ) /*0x72d477*/
    {
      MEMORY[0xB0FB34] = LoadFileSHP(MEMORY[0x844C58], (bool *)&MEMORY[0xB0FC70]); /*0x72d48f*/
      MEMORY[0xB0FB00] = LoadFileSHP(MEMORY[0x844C60], (bool *)&MEMORY[0xB0FC71]); /*0x72d4a4*/
      result = LoadFileSHP(MEMORY[0x844C68], (bool *)&MEMORY[0xB0FC72]); /*0x72d4a9*/
    }
    else
    {
      MEMORY[0xB0FB34] = LoadFileSHP(MEMORY[0x844C5C], (bool *)&MEMORY[0xB0FC70]); /*0x72d4ca*/
      MEMORY[0xB0FB00] = LoadFileSHP(MEMORY[0x844C64], (bool *)&MEMORY[0xB0FC71]); /*0x72d4df*/
      result = LoadFileSHP(MEMORY[0x844C6C], (bool *)&MEMORY[0xB0FC72]); /*0x72d4e4*/
    }
    MEMORY[0xB0FB30] = result; /*0x72d4ae*/
  }
  return result; /*0x72d4b3*/
}


// ==== 0x0072D730  Game::LoadMultiplayerScoreAssets  this=Game  sig=csp ====
char __thiscall Game::LoadMultiplayerScoreAssets(void *this)
{
  char result; // al
  char *v3; // ecx

  result = MEMORY[0xB0FBB8]; /*0x72d730*/
  if ( !MEMORY[0xB0FBB8] ) /*0x72d73a*/
  {
    Game::shutdownGame(this); /*0x72d73c*/
    if ( this ) /*0x72d743*/
    {
      v3 = MEMORY[0x844BD8][0]; /*0x72d74d*/
      if ( this != (void *)1 ) /*0x72d756*/
        v3 = MEMORY[0x844BDC]; /*0x72d758*/
    }
    else
    {
      v3 = MEMORY[0x844BD4][0]; /*0x72d745*/
    }
    result = LoadPaletteSimple(v3, &MEMORY[0xB0FBB0], &MEMORY[0xB0FBB4]); /*0x72d768*/
    MEMORY[0xB0FBB8] = 1; /*0x72d76d*/
  }
  return result; /*0x72d774*/
}


// ==== 0x0072D780  ObjectClass::Map_Init_72D780  this=ObjectClass  sig=csp ====
void sub_72D780()
{
  void *v0; // esi

  if ( MEMORY[0xB0FBB8] ) /*0x72d78a*/
  {
    MEMORY[0xB0FBB8] = 0; /*0x72d791*/
    if ( MEMORY[0xB0FC7D] ) /*0x72d799*/
    {
      v0 = MEMORY[0xB0FB1C]; /*0x72d79c*/
      if ( MEMORY[0xB0FB1C] ) /*0x72d7a4*/
      {
        FileTreeNode::Destroy(MEMORY[0xB0FB1C]); /*0x72d7a8*/
        __3_YAXPAX_Z(v0); /*0x72d7ae*/
      }
      MEMORY[0xB0FC7D] = 0; /*0x72d7b6*/
    }
    MEMORY[0xB0FB1C] = 0; /*0x72d7c2*/
    if ( MEMORY[0xB0FBB0] ) /*0x72d7ca*/
    {
      __3_YAXPAX_Z(MEMORY[0xB0FBB0]); /*0x72d7cd*/
      MEMORY[0xB0FBB0] = 0; /*0x72d7d5*/
    }
    if ( MEMORY[0xB0FBB4] ) /*0x72d7e3*/
    {
      (**(void (__thiscall ***)(int, int))MEMORY[0xB0FBB4])(MEMORY[0xB0FBB4], 1); /*0x72d7e9*/
      MEMORY[0xB0FBB4] = 0; /*0x72d7eb*/
    }
  }
}


// ==== 0x0072D800  sub_72D800  this=-  sig=ida-proto ====
char sub_72D800()
{
  return MEMORY[0xB0FBB8]; /*0x72d805*/
}


// ==== 0x0072D810  sub_72D810  this=-  sig=ida-proto ====
void *sub_72D810()
{
  return MEMORY[0xB0FBB0]; /*0x72d815*/
}


// ==== 0x0072D820  UI_Create_72D820  this=-  sig=ida-proto ====
int sub_72D820()
{
  return MEMORY[0xB0FBB4]; /*0x72d825*/
}


// ==== 0x0072D830  Game::shutdownGame  this=Game  sig=csp ====
void *__thiscall sub_72D830(void *this)
{
  void *result; // eax
  char *v2; // ecx

  if ( this ) /*0x72d832*/
  {
    if ( this == (void *)1 ) /*0x72d86f*/
    {
      if ( MEMORY[0x8A00A4] == 640 ) /*0x72d87b*/
        result = LoadFileSHP(MEMORY[0x844CA8], (bool *)&MEMORY[0xB0FC7D]); /*0x72d883*/
      else
        result = LoadFileSHP(MEMORY[0x844CAC], (bool *)&MEMORY[0xB0FC7D]); /*0x72d894*/
      MEMORY[0xB0FB1C] = result; /*0x72d888*/
    }
    else
    {
      v2 = MEMORY[0x844CB0][0]; /*0x72d89f*/
      if ( MEMORY[0x8A00A4] != 640 ) /*0x72d8af*/
        v2 = MEMORY[0x844CB4]; /*0x72d8b1*/
      result = LoadFileSHP(v2, (bool *)&MEMORY[0xB0FC7D]); /*0x72d8b7*/
      MEMORY[0xB0FB1C] = result; /*0x72d8bc*/
    }
  }
  else
  {
    if ( MEMORY[0x8A00A4] == 640 ) /*0x72d843*/
      result = LoadFileSHP(MEMORY[0x844CA0], (bool *)&MEMORY[0xB0FC7D]); /*0x72d84b*/
    else
      result = LoadFileSHP(MEMORY[0x844CA4], (bool *)&MEMORY[0xB0FC7D]); /*0x72d85c*/
    MEMORY[0xB0FB1C] = result; /*0x72d850*/
  }
  return result; /*0x72d855*/
}


// ==== 0x0072D9A0  InitializeGameLoading  this=-  sig=ida-proto ====
int sub_72D9A0()
{
  void *FileSHP; // eax
  char *v1; // ecx

  if ( MEMORY[0x8A00A4] == 640 ) /*0x72d9af*/
  {
    MEMORY[0xB0FB48] = LoadFileSHP(MEMORY[0x844CB8], (bool *)&MEMORY[0xB0FCC8]); /*0x72d9c7*/
    MEMORY[0xB0FB10] = LoadFileSHP(MEMORY[0x844CC4], (bool *)&MEMORY[0xB0FCCA]); /*0x72d9dc*/
    FileSHP = LoadFileSHP(MEMORY[0x844CC8], (bool *)&MEMORY[0xB0FCCB]); /*0x72d9e1*/
    v1 = MEMORY[0x844CD0][0]; /*0x72d9e6*/
  }
  else
  {
    MEMORY[0xB0FB48] = LoadFileSHP(MEMORY[0x844D4C], (bool *)&MEMORY[0xB0FCC8]); /*0x72da0e*/
    MEMORY[0xB0FB10] = LoadFileSHP(MEMORY[0x844D54], (bool *)&MEMORY[0xB0FCCA]); /*0x72da23*/
    FileSHP = LoadFileSHP(MEMORY[0x844CCC], (bool *)&MEMORY[0xB0FCCB]); /*0x72da28*/
    v1 = MEMORY[0x844D5C]; /*0x72da2d*/
  }
  MEMORY[0xB0F9F8] = FileSHP; /*0x72d9ec*/
  MEMORY[0xB0FA6C] = LoadFileSHP(v1, (bool *)&MEMORY[0xB0FCCC]); /*0x72da52*/
  LoadPaletteSimple(MEMORY[0x844BE0], &MEMORY[0xB0FBBC], &MEMORY[0xB0FBC0]); /*0x72da57*/
  LoadPaletteSimple(MEMORY[0x844D50], &MEMORY[0xB0FCB0], &MEMORY[0xB0FCB4]); /*0x72da6c*/
  LoadPaletteSimple(MEMORY[0x844D58], &MEMORY[0xB0FCB8], &MEMORY[0xB0FCBC]); /*0x72da81*/
  return LoadPaletteSimple(MEMORY[0x844D60], &MEMORY[0xB0FCC0], &MEMORY[0xB0FCC4]); /*0x72da9b*/
}


// ==== 0x0072DAA0  CleanupEVASystem  this=-  sig=ida-proto ====
// Microsoft VisualC 2-14/net runtime
void EVASystem::Cleanup()
{
  CleanupEVASystem_Cleanup(); /*0x72daa0*/
  if ( MEMORY[0xB0FCB0] ) /*0x72dcfa*/
  {
    __3_YAXPAX_Z(MEMORY[0xB0FCB0]); /*0x72dcfd*/
    MEMORY[0xB0FCB0] = 0; /*0x72dd05*/
  }
  if ( MEMORY[0xB0FCB4] ) /*0x72dd13*/
  {
    (**(void (__thiscall ***)(int, int))MEMORY[0xB0FCB4])(MEMORY[0xB0FCB4], 1); /*0x72dd19*/
    MEMORY[0xB0FCB4] = 0; /*0x72dd1b*/
  }
  if ( MEMORY[0xB0FCB8] ) /*0x72dd28*/
  {
    __3_YAXPAX_Z(MEMORY[0xB0FCB8]); /*0x72dd2b*/
    MEMORY[0xB0FCB8] = 0; /*0x72dd33*/
  }
  if ( MEMORY[0xB0FCBC] ) /*0x72dd41*/
  {
    (**(void (__thiscall ***)(int, int))MEMORY[0xB0FCBC])(MEMORY[0xB0FCBC], 1); /*0x72dd47*/
    MEMORY[0xB0FCBC] = 0; /*0x72dd49*/
  }
  if ( MEMORY[0xB0FCC0] ) /*0x72dd56*/
  {
    __3_YAXPAX_Z(MEMORY[0xB0FCC0]); /*0x72dd59*/
    MEMORY[0xB0FCC0] = 0; /*0x72dd61*/
  }
  if ( MEMORY[0xB0FCC4] ) /*0x72dd6f*/
  {
    (**(void (__thiscall ***)(int, int))MEMORY[0xB0FCC4])(MEMORY[0xB0FCC4], 1); /*0x72dd75*/
    MEMORY[0xB0FCC4] = 0; /*0x72dd77*/
  }
  if ( MEMORY[0xB0FBBC] ) /*0x72dd84*/
  {
    __3_YAXPAX_Z(MEMORY[0xB0FBBC]); /*0x72dd87*/
    MEMORY[0xB0FBBC] = 0; /*0x72dd8f*/
  }
  if ( MEMORY[0xB0FBC0] ) /*0x72dd9d*/
  {
    (**(void (__thiscall ***)(int, int))MEMORY[0xB0FBC0])(MEMORY[0xB0FBC0], 1); /*0x72dda3*/
    MEMORY[0xB0FBC0] = 0; /*0x72dda5*/
  }
}


// ==== 0x0072DAB0  sub_72DAB0  this=-  sig=ida-proto ====
void *sub_72DAB0()
{
  return MEMORY[0xB0FBBC]; /*0x72dab5*/
}


// ==== 0x0072DAC0  UI_Helper_72DAC0  this=-  sig=ida-proto ====
int sub_72DAC0()
{
  return MEMORY[0xB0FCB4]; /*0x72dac5*/
}


// ==== 0x0072DAD0  UI_Helper_72DAD0  this=-  sig=ida-proto ====
int sub_72DAD0()
{
  return MEMORY[0xB0FCBC]; /*0x72dad5*/
}


// ==== 0x0072DAE0  CreatureClass::GetManager  this=CreatureClass  sig=ida-proto ====
int CreatureClass_GetManager()
{
  return MEMORY[0xB0FCC4]; /*0x72dae5*/
}


// ==== 0x0072DAF0  sub_72DAF0  this=-  sig=ida-proto ====
int sub_72DAF0()
{
  return MEMORY[0xB0FBC0]; /*0x72daf5*/
}


// ==== 0x0072DC20  CleanupEVASystem_Cleanup  this=-  sig=ida-proto ====
void sub_72DC20()
{
  void *v0; // esi
  void *v1; // esi
  void *v2; // esi
  void *v3; // esi

  if ( MEMORY[0xB0FCC8] ) /*0x72dc2b*/
  {
    v0 = MEMORY[0xB0FB48]; /*0x72dc2d*/
    if ( MEMORY[0xB0FB48] ) /*0x72dc35*/
    {
      FileTreeNode::Destroy(MEMORY[0xB0FB48]); /*0x72dc39*/
      __3_YAXPAX_Z(v0); /*0x72dc3f*/
    }
    MEMORY[0xB0FCC8] = 0; /*0x72dc47*/
  }
  MEMORY[0xB0FB48] = 0; /*0x72dc52*/
  if ( MEMORY[0xB0FCCA] ) /*0x72dc5a*/
  {
    v1 = MEMORY[0xB0FB10]; /*0x72dc5c*/
    if ( MEMORY[0xB0FB10] ) /*0x72dc64*/
    {
      FileTreeNode::Destroy(MEMORY[0xB0FB10]); /*0x72dc68*/
      __3_YAXPAX_Z(v1); /*0x72dc6e*/
    }
    MEMORY[0xB0FCCA] = 0; /*0x72dc76*/
  }
  MEMORY[0xB0FB10] = 0; /*0x72dc81*/
  if ( MEMORY[0xB0FCCB] ) /*0x72dc89*/
  {
    v2 = MEMORY[0xB0F9F8]; /*0x72dc8b*/
    if ( MEMORY[0xB0F9F8] ) /*0x72dc93*/
    {
      FileTreeNode::Destroy(MEMORY[0xB0F9F8]); /*0x72dc97*/
      __3_YAXPAX_Z(v2); /*0x72dc9d*/
    }
    MEMORY[0xB0FCCB] = 0; /*0x72dca5*/
  }
  MEMORY[0xB0F9F8] = 0; /*0x72dcb0*/
  if ( MEMORY[0xB0FCCC] ) /*0x72dcb8*/
  {
    v3 = MEMORY[0xB0FA6C]; /*0x72dcba*/
    if ( MEMORY[0xB0FA6C] ) /*0x72dcc2*/
    {
      FileTreeNode::Destroy(MEMORY[0xB0FA6C]); /*0x72dcc6*/
      __3_YAXPAX_Z(v3); /*0x72dccc*/
    }
    MEMORY[0xB0FCCC] = 0; /*0x72dcd4*/
  }
  MEMORY[0xB0FA6C] = 0; /*0x72dcda*/
}


// ==== 0x0072DDB0  MouseClass::LoadCursors  this=MouseClass  sig=ida-proto ====
char MouseClass_LoadCursors()
{
  char result; // al

  result = MEMORY[0xB0FBE0]; /*0x72ddb0*/
  if ( !MEMORY[0xB0FBE0] ) /*0x72ddb7*/
  {
    AssetClass::ReleaseAndReload(); /*0x72ddbd*/
    MEMORY[0xB0FAC4] = LoadFileSHP(MEMORY[0x844CD4], (bool *)&MEMORY[0xB0FC95]); /*0x72dddd*/
    MEMORY[0xB0F9DC] = LoadFileSHP(MEMORY[0x844CD8], (bool *)&MEMORY[0xB0FC96]); /*0x72ddf2*/
    MEMORY[0xB0FAC0] = LoadFileSHP(MEMORY[0x844CDC], (bool *)&MEMORY[0xB0FC97]); /*0x72de07*/
    MEMORY[0xB0FB50] = LoadFileSHP(MEMORY[0x844CE0], (bool *)&MEMORY[0xB0FC98]); /*0x72de1c*/
    MEMORY[0xB0FA04] = LoadFileSHP(MEMORY[0x844CE4], (bool *)&MEMORY[0xB0FC99]); /*0x72de31*/
    MEMORY[0xB0FAF8] = LoadFileSHP(MEMORY[0x844CE8], (bool *)&MEMORY[0xB0FC9A]); /*0x72de46*/
    MEMORY[0xB0FA74] = LoadFileSHP(MEMORY[0x844CEC], (bool *)&MEMORY[0xB0FC9B]); /*0x72de5b*/
    MEMORY[0xB0FA38] = LoadFileSHP(MEMORY[0x844CF0], (bool *)&MEMORY[0xB0FC9C]); /*0x72de70*/
    MEMORY[0xB0FAE8] = LoadFileSHP(MEMORY[0x844CF4], (bool *)&MEMORY[0xB0FC9D]); /*0x72de85*/
    MEMORY[0xB0FA54] = LoadFileSHP(MEMORY[0x844CF8], (bool *)&MEMORY[0xB0FC9E]); /*0x72de9f*/
    LoadPaletteSimple(MEMORY[0x844BE4], &MEMORY[0xB0FBC8], &MEMORY[0xB0FBCC]); /*0x72dea4*/
    LoadPaletteSimple(MEMORY[0x844BE8], &MEMORY[0xB0FBD0], &MEMORY[0xB0FBD4]); /*0x72deb9*/
    LoadPaletteSimple(MEMORY[0x844BEC], &MEMORY[0xB0FBD8], &MEMORY[0xB0FBDC]); /*0x72dece*/
    result = SetupMouseClassResources(MEMORY[0x8A00A4], MEMORY[0x8A00A8]); /*0x72dedf*/
    MEMORY[0xB0FBE0] = 1; /*0x72dee4*/
  }
  return result; /*0x72deeb*/
}


// ==== 0x0072DEF0  LoadingScreen::FreeResources3  this=LoadingScreen  sig=ida-proto ====
char LoadingScreen_FreeResources3()
{
  char result; // al

  result = MEMORY[0xB0FBE0]; /*0x72def0*/
  if ( MEMORY[0xB0FBE0] ) /*0x72defa*/
  {
    MEMORY[0xB0FBE0] = 0; /*0x72df00*/
    LoadingScreen::DestroyFileTrees(); /*0x72df06*/
    LoadingScreen::CleanupObjects(); /*0x72df0b*/
    __3_YAXPAX_Z(MEMORY[0xB0FC10]); /*0x72df16*/
    MEMORY[0xB0FC10] = 0; /*0x72df21*/
    __3_YAXPAX_Z(MEMORY[0xB0FC14]); /*0x72df28*/
    MEMORY[0xB0FC14] = 0; /*0x72df33*/
    __3_YAXPAX_Z(MEMORY[0xB0FC18]); /*0x72df3a*/
    MEMORY[0xB0FC18] = 0; /*0x72df44*/
    __3_YAXPAX_Z(MEMORY[0xB0FC1C]); /*0x72df4b*/
    MEMORY[0xB0FC1C] = 0; /*0x72df56*/
    __3_YAXPAX_Z(MEMORY[0xB0FC20]); /*0x72df5d*/
    MEMORY[0xB0FC20] = 0; /*0x72df68*/
    __3_YAXPAX_Z(MEMORY[0xB0FC24]); /*0x72df6f*/
    MEMORY[0xB0FC24] = 0; /*0x72df79*/
    __3_YAXPAX_Z(MEMORY[0xB0FC28]); /*0x72df80*/
    MEMORY[0xB0FC28] = 0; /*0x72df8b*/
    __3_YAXPAX_Z(MEMORY[0xB0FC2C]); /*0x72df92*/
    MEMORY[0xB0FC2C] = 0; /*0x72df9a*/
    return ReleaseLoadingResources(); /*0x72dfa0*/
  }
  return result; /*0x72dfa5*/
}


// ==== 0x0072DFB0  InitLoadingScreenResources  this=-  sig=ida-proto ====
int *LoadingScreen_InitResources()
{
  int *result; // eax

  if ( !MEMORY[0xB0FBE0] ) /*0x72dfba*/
    goto LABEL_3; /*0x72dfba*/
  MEMORY[0xB0FBE0] = 0; /*0x72dfc0*/
  LoadingScreen::DestroyFileTrees(); /*0x72dfc6*/
  LoadingScreen::CleanupObjects(); /*0x72dfcb*/
  __3_YAXPAX_Z(MEMORY[0xB0FC10]); /*0x72dfd6*/
  MEMORY[0xB0FC10] = 0; /*0x72dfe1*/
  __3_YAXPAX_Z(MEMORY[0xB0FC14]); /*0x72dfe8*/
  MEMORY[0xB0FC14] = 0; /*0x72dff3*/
  __3_YAXPAX_Z(MEMORY[0xB0FC18]); /*0x72dffa*/
  MEMORY[0xB0FC18] = 0; /*0x72e004*/
  __3_YAXPAX_Z(MEMORY[0xB0FC1C]); /*0x72e00b*/
  MEMORY[0xB0FC1C] = 0; /*0x72e016*/
  __3_YAXPAX_Z(MEMORY[0xB0FC20]); /*0x72e01d*/
  MEMORY[0xB0FC20] = 0; /*0x72e028*/
  __3_YAXPAX_Z(MEMORY[0xB0FC24]); /*0x72e02f*/
  MEMORY[0xB0FC24] = 0; /*0x72e039*/
  __3_YAXPAX_Z(MEMORY[0xB0FC28]); /*0x72e040*/
  MEMORY[0xB0FC28] = 0; /*0x72e04b*/
  __3_YAXPAX_Z(MEMORY[0xB0FC2C]); /*0x72e052*/
  MEMORY[0xB0FC2C] = 0; /*0x72e05a*/
  result = (int *)ReleaseLoadingResources(); /*0x72e060*/
  if ( !MEMORY[0xB0FBE0] ) /*0x72e06b*/
  {
LABEL_3:
    AssetClass::ReleaseAndReload(); /*0x72e071*/
    MEMORY[0xB0FAC4] = LoadFileSHP(MEMORY[0x844CD4], (bool *)&MEMORY[0xB0FC95]); /*0x72e091*/
    MEMORY[0xB0F9DC] = LoadFileSHP(MEMORY[0x844CD8], (bool *)&MEMORY[0xB0FC96]); /*0x72e0a6*/
    MEMORY[0xB0FAC0] = LoadFileSHP(MEMORY[0x844CDC], (bool *)&MEMORY[0xB0FC97]); /*0x72e0bb*/
    MEMORY[0xB0FB50] = LoadFileSHP(MEMORY[0x844CE0], (bool *)&MEMORY[0xB0FC98]); /*0x72e0d0*/
    MEMORY[0xB0FA04] = LoadFileSHP(MEMORY[0x844CE4], (bool *)&MEMORY[0xB0FC99]); /*0x72e0e5*/
    MEMORY[0xB0FAF8] = LoadFileSHP(MEMORY[0x844CE8], (bool *)&MEMORY[0xB0FC9A]); /*0x72e0fa*/
    MEMORY[0xB0FA74] = LoadFileSHP(MEMORY[0x844CEC], (bool *)&MEMORY[0xB0FC9B]); /*0x72e10f*/
    MEMORY[0xB0FA38] = LoadFileSHP(MEMORY[0x844CF0], (bool *)&MEMORY[0xB0FC9C]); /*0x72e124*/
    MEMORY[0xB0FAE8] = LoadFileSHP(MEMORY[0x844CF4], (bool *)&MEMORY[0xB0FC9D]); /*0x72e139*/
    MEMORY[0xB0FA54] = LoadFileSHP(MEMORY[0x844CF8], (bool *)&MEMORY[0xB0FC9E]); /*0x72e153*/
    LoadPaletteSimple(MEMORY[0x844BE4], &MEMORY[0xB0FBC8], &MEMORY[0xB0FBCC]); /*0x72e158*/
    LoadPaletteSimple(MEMORY[0x844BE8], &MEMORY[0xB0FBD0], &MEMORY[0xB0FBD4]); /*0x72e16d*/
    LoadPaletteSimple(MEMORY[0x844BEC], &MEMORY[0xB0FBD8], &MEMORY[0xB0FBDC]); /*0x72e182*/
    result = SetupMouseClassResources(MEMORY[0x8A00A4], MEMORY[0x8A00A8]); /*0x72e193*/
    MEMORY[0xB0FBE0] = 1; /*0x72e198*/
  }
  return result; /*0x72e19f*/
}


// ==== 0x0072E1B0  ChangeVideoMode_Setup  this=ObjectClass  sig=ida-proto ====
int *__fastcall sub_72E1B0(int a1, int a2)
{
  __3_YAXPAX_Z(MEMORY[0xB0FC10]); /*0x72e1bd*/
  MEMORY[0xB0FC10] = 0; /*0x72e1cb*/
  __3_YAXPAX_Z(MEMORY[0xB0FC14]); /*0x72e1d1*/
  MEMORY[0xB0FC14] = 0; /*0x72e1dc*/
  __3_YAXPAX_Z(MEMORY[0xB0FC18]); /*0x72e1e3*/
  MEMORY[0xB0FC18] = 0; /*0x72e1ed*/
  __3_YAXPAX_Z(MEMORY[0xB0FC1C]); /*0x72e1f4*/
  MEMORY[0xB0FC1C] = 0; /*0x72e1ff*/
  __3_YAXPAX_Z(MEMORY[0xB0FC20]); /*0x72e206*/
  MEMORY[0xB0FC20] = 0; /*0x72e211*/
  __3_YAXPAX_Z(MEMORY[0xB0FC24]); /*0x72e218*/
  MEMORY[0xB0FC24] = 0; /*0x72e222*/
  __3_YAXPAX_Z(MEMORY[0xB0FC28]); /*0x72e229*/
  MEMORY[0xB0FC28] = 0; /*0x72e234*/
  __3_YAXPAX_Z(MEMORY[0xB0FC2C]); /*0x72e23b*/
  MEMORY[0xB0FC2C] = 0; /*0x72e245*/
  return SetupMouseClassResources(a1, a2); /*0x72e24d*/
}


// ==== 0x0072E260  UI_Draw_72E260  this=-  sig=ida-proto ====
char sub_72E260()
{
  return MEMORY[0xB0FBE0]; /*0x72e265*/
}


// ==== 0x0072E270  sub_72E270  this=-  sig=ida-proto ====
CCINIClass *sub_72E270()
{
  return *(CCINIClass **)&stru_B05488.__pad_579C[20388]; /*0x72e275*/
}


// ==== 0x0072E280  VtableStub_72E280  this=-  sig=ida-proto ====
ConvertClass *VtableStub_72E280()
{
  return *(ConvertClass **)&stru_B05488.__pad_579C[20392]; /*0x72e285*/
}


// ==== 0x0072E290  sub_72E290  this=-  sig=ida-proto ====
CCINIClass *sub_72E290()
{
  return *(CCINIClass **)&stru_B05488.__pad_579C[20396]; /*0x72e295*/
}


// ==== 0x0072E2A0  UI_Helper_72E2A0  this=-  sig=ida-proto ====
int sub_72E2A0()
{
  return MEMORY[0xB0FBD4]; /*0x72e2a5*/
}


// ==== 0x0072E2B0  sub_72E2B0  this=-  sig=ida-proto ====
CCINIClass *sub_72E2B0()
{
  return *(CCINIClass **)&stru_B05488.__pad_579C[20404]; /*0x72e2b5*/
}


// ==== 0x0072E2C0  UI_Helper_72E2C0  this=-  sig=ida-proto ====
int sub_72E2C0()
{
  return MEMORY[0xB0FBDC]; /*0x72e2c5*/
}


// ==== 0x0072E2D0  DrawScoreScreenStats  this=-  sig=csp ====
int __fastcall DrawScoreScreenStats(ConvertClass *aP0, int a2)
{
  ObjectClass *result; // eax
  int v5; // edi
  int v6; // ebp
  int v7; // edx
  int v8; // edx
  int v9; // edx
  int v10; // edx
  int v11; // eax
  int v12; // eax
  int v13; // eax
  int v14; // edx
  int v15; // [esp+4Ch] [ebp-18h]
  int v16; // [esp+50h] [ebp-14h]
  int v17; // [esp+54h] [ebp-10h] BYREF
  int v18; // [esp+58h] [ebp-Ch]
  int v19; // [esp+5Ch] [ebp-8h]
  int v20; // [esp+60h] [ebp-4h]

  result = *(ObjectClass **)&stru_89E138.__pad_14B0[2748]; /*0x72e2d0*/
  if ( *(int *)&stru_89E138.__pad_14B0[2748] >= 1024 ) /*0x72e2e3*/
  {
    v5 = **(_DWORD **)&stru_B05488.__pad_579C[20472]; /*0x72e2fc*/
    v6 = *(_DWORD *)(*(_DWORD *)&stru_B05488.__pad_579C[20472] + 4); /*0x72e300*/
    v15 = **(_DWORD **)&stru_B05488.__pad_579C[20476] + *(_DWORD *)(*(_DWORD *)&stru_B05488.__pad_579C[20476] + 8); /*0x72e309*/
    v7 = *(_DWORD *)aP0->__pad_0; /*0x72e315*/
    v16 = *(_DWORD *)(*(_DWORD *)&stru_B05488.__pad_579C[20488] + 4) /*0x72e317*/
        + *(_DWORD *)(*(_DWORD *)&stru_B05488.__pad_579C[20488] + 12);
    v17 = 0; /*0x72e31d*/
    v18 = 0; /*0x72e321*/
    v19 = v5; /*0x72e32e*/
    v20 = v6; /*0x72e332*/
    (*(void (__thiscall **)(ConvertClass *, int *, int, _DWORD))(v7 + 16))(aP0, &v17, a2, 0); /*0x72e336*/
    v8 = *(_DWORD *)aP0->__pad_0; /*0x72e339*/
    v18 = 0; /*0x72e342*/
    v19 = 800; /*0x72e34b*/
    v17 = v5; /*0x72e353*/
    v20 = v6; /*0x72e357*/
    (*(void (__thiscall **)(ConvertClass *, int *, int, _DWORD))(v8 + 16))(aP0, &v17, a2, 0); /*0x72e35b*/
    v9 = *(_DWORD *)aP0->__pad_0; /*0x72e35e*/
    v18 = 0; /*0x72e366*/
    v17 = v15; /*0x72e36f*/
    v19 = v5; /*0x72e377*/
    v20 = v6; /*0x72e37b*/
    (*(void (__thiscall **)(ConvertClass *, int *, int, _DWORD))(v9 + 16))(aP0, &v17, a2, 0); /*0x72e37f*/
    v10 = *(_DWORD *)aP0->__pad_0; /*0x72e382*/
    v20 = 600; /*0x72e38d*/
    v17 = v15; /*0x72e397*/
    v18 = v6; /*0x72e39f*/
    v19 = v5; /*0x72e3a3*/
    (*(void (__thiscall **)(ConvertClass *, int *, int, _DWORD))(v10 + 16))(aP0, &v17, a2, 0); /*0x72e3a7*/
    v19 = v5; /*0x72e3af*/
    v17 = v15; /*0x72e3bb*/
    v20 = 600; /*0x72e3c5*/
    v11 = *(_DWORD *)aP0->__pad_0; /*0x72e3c9*/
    v18 = v16; /*0x72e3cf*/
    (*(void (__thiscall **)(ConvertClass *, int *, int, _DWORD))(v11 + 16))(aP0, &v17, a2, 0); /*0x72e3d3*/
    v19 = 800; /*0x72e3e5*/
    v12 = *(_DWORD *)aP0->__pad_0; /*0x72e3e9*/
    v17 = v5; /*0x72e3ef*/
    v18 = v16; /*0x72e3f3*/
    v20 = v6; /*0x72e3f7*/
    (*(void (__thiscall **)(ConvertClass *, int *, int, _DWORD))(v12 + 16))(aP0, &v17, a2, 0); /*0x72e3fb*/
    v17 = 0; /*0x72e40a*/
    v13 = *(_DWORD *)aP0->__pad_0; /*0x72e40e*/
    v18 = v16; /*0x72e414*/
    v19 = v5; /*0x72e418*/
    v20 = v6; /*0x72e41c*/
    (*(void (__thiscall **)(ConvertClass *, int *, int, _DWORD))(v13 + 16))(aP0, &v17, a2, 0); /*0x72e420*/
    v14 = *(_DWORD *)aP0->__pad_0; /*0x72e423*/
    v17 = 0; /*0x72e42c*/
    v20 = 600; /*0x72e435*/
    v18 = v6; /*0x72e43d*/
    v19 = v5; /*0x72e441*/
    return (*(int (__thiscall **)(ConvertClass *, int *, int, _DWORD))(v14 + 16))(aP0, &v17, a2, 0); /*0x72e445*/
  }
  return (int)result->__pad_0; /*0x72e44a*/
}


// ==== 0x0072E450  RenderScoreScreen  this=-  sig=csp ====
void __fastcall RenderScoreScreen(ConvertClass *a1, int *a2, char a3)
{
  int v5; // ecx
  int v6; // eax
  int v7; // edi
  int v8; // edi
  int v9; // eax
  int v10; // edi
  int v11; // [esp+8h] [ebp-18h] BYREF
  int i; // [esp+Ch] [ebp-14h]
  _DWORD v13[2]; // [esp+10h] [ebp-10h] BYREF
  int v14; // [esp+18h] [ebp-8h]
  int v15; // [esp+1Ch] [ebp-4h]

  if ( !stru_B05488.__pad_579C[20412] ) /*0x72e460*/
  {
    AssetClass::ReleaseAndReload(); /*0x72e462*/
    Render_Render_72EB50(); /*0x72e467*/
    LoadPaletteSimple( /*0x72e47c*/
      *(char **)&stru_830620.__pad_579C[60968],
      &stru_B05488.__pad_579C[20388],
      &stru_B05488.__pad_579C[20392]);
    LoadPaletteSimple( /*0x72e491*/
      *(char **)&stru_830620.__pad_579C[60972],
      &stru_B05488.__pad_579C[20396],
      &stru_B05488.__pad_579C[20400]);
    LoadPaletteSimple( /*0x72e4a6*/
      *(char **)&stru_830620.__pad_579C[60976],
      &stru_B05488.__pad_579C[20404],
      &stru_B05488.__pad_579C[20408]);
    SetupMouseClassResources(*(int *)&stru_89E138.__pad_14B0[2748], *(int *)&stru_89E138.__pad_14B0[2752]); /*0x72e4b7*/
    stru_B05488.__pad_579C[20412] = 1; /*0x72e4bc*/
  }
  DrawScoreScreenStats(a1, (int)a2); /*0x72e4c9*/
  v5 = a2[1]; /*0x72e4d0*/
  v13[0] = *a2; /*0x72e4d3*/
  v6 = a2[2]; /*0x72e4d7*/
  v7 = a2[3]; /*0x72e4da*/
  v11 = 0; /*0x72e4e4*/
  i = 0; /*0x72e4e8*/
  v13[1] = v5; /*0x72e4ec*/
  v14 = v6; /*0x72e4f0*/
  v15 = v7; /*0x72e4f4*/
  if ( v6 > 800 ) /*0x72e4f8*/
    v14 = (v6 - 800) / 2 + 800; /*0x72e509*/
  if ( v7 > 600 ) /*0x72e513*/
    v15 = (v7 - 600) / 2 + 600; /*0x72e525*/
  v11 = **(_DWORD **)&stru_B05488.__pad_579C[20476]; /*0x72e537*/
  i = *(_DWORD *)(*(_DWORD *)&stru_B05488.__pad_579C[20476] + 4); /*0x72e53e*/
  DrawToSurfaceSHP( /*0x72e56a*/
    (int)a1,
    *(int *)&stru_B05488.__pad_579C[20392],
    *(ConvertClass **)&stru_B05488.__pad_579C[20180],
    0,
    (ConvertClass *)&v11,
    (ConvertClass *)v13,
    (ConvertClass *)0x400,
    0,
    0,
    0,
    (ConvertClass *)0x3E8,
    0,
    0,
    0,
    0,
    0);
  v8 = 0; /*0x72e574*/
  v11 = **(_DWORD **)&stru_B05488.__pad_579C[20480]; /*0x72e578*/
  v9 = *(_DWORD *)&stru_B05488.__pad_579C[19964]; /*0x72e57f*/
  for ( i = *(_DWORD *)(*(_DWORD *)&stru_B05488.__pad_579C[20480] + 4); /*0x72e58a*/
        v8 < *(int *)&stru_B05488.__pad_579C[19964];
        v9 = *(_DWORD *)&stru_B05488.__pad_579C[19964] )
  {
    DrawToSurfaceSHP( /*0x72e5c1*/
      (int)a1,
      *(int *)&stru_B05488.__pad_579C[20400],
      *(ConvertClass **)&stru_B05488.__pad_579C[20048],
      0,
      (ConvertClass *)&v11,
      (ConvertClass *)v13,
      (ConvertClass *)0x400,
      0,
      0,
      0,
      (ConvertClass *)0x3E8,
      0,
      0,
      0,
      0,
      0);
    ++v8; /*0x72e5d4*/
    i += *(_DWORD *)(*(_DWORD *)&stru_B05488.__pad_579C[20480] + 12); /*0x72e5d5*/
  }
  if ( !a3 ) /*0x72e5e8*/
  {
    v10 = 0; /*0x72e5f0*/
    v11 = **(_DWORD **)&stru_B05488.__pad_579C[20460]; /*0x72e5f6*/
    i = *(_DWORD *)(*(_DWORD *)&stru_B05488.__pad_579C[20460] + 4); /*0x72e5fd*/
    if ( v9 > 0 ) /*0x72e601*/
    {
      do /*0x72e65a*/
      {
        DrawToSurfaceSHP( /*0x72e63a*/
          (int)a1,
          *(int *)&stru_B05488.__pad_579C[20408],
          *(ConvertClass **)&stru_B05488.__pad_579C[20128],
          0xAu,
          (ConvertClass *)&v11,
          (ConvertClass *)v13,
          (ConvertClass *)0x400,
          0,
          0,
          0,
          (ConvertClass *)0x3E8,
          0,
          0,
          0,
          0,
          0);
        ++v10; /*0x72e653*/
        i += *(_DWORD *)(*(_DWORD *)&stru_B05488.__pad_579C[20460] + 12); /*0x72e654*/
      }
      while ( v10 < *(int *)&stru_B05488.__pad_579C[19964] ); /*0x72e65a*/
    }
  }
  v11 = **(_DWORD **)&stru_B05488.__pad_579C[20484]; /*0x72e663*/
  i = *(_DWORD *)(*(_DWORD *)&stru_B05488.__pad_579C[20484] + 4); /*0x72e688*/
  DrawToSurfaceSHP( /*0x72e69f*/
    (int)a1,
    *(int *)&stru_B05488.__pad_579C[20392],
    *(ConvertClass **)&stru_B05488.__pad_579C[19988],
    0,
    (ConvertClass *)&v11,
    (ConvertClass *)v13,
    (ConvertClass *)0x400,
    0,
    0,
    0,
    (ConvertClass *)0x3E8,
    0,
    0,
    0,
    0,
    0);
  v11 = **(_DWORD **)&stru_B05488.__pad_579C[20488]; /*0x72e6ad*/
  i = *(_DWORD *)(*(_DWORD *)&stru_B05488.__pad_579C[20488] + 4); /*0x72e6b9*/
  if ( *(_DWORD *)&stru_89E138.__pad_14B0[2748] == 640 ) /*0x72e6c2*/
    DrawToSurfaceSHP( /*0x72e6ec*/
      (int)a1,
      *(int *)&stru_B05488.__pad_579C[20392],
      *(ConvertClass **)&stru_B05488.__pad_579C[20164],
      0,
      (ConvertClass *)&v11,
      (ConvertClass *)v13,
      (ConvertClass *)0x400,
      0,
      0,
      0,
      (ConvertClass *)0x3E8,
      0,
      0,
      0,
      0,
      0);
  else
    DrawToSurfaceSHP( /*0x72e71f*/
      (int)a1,
      *(int *)&stru_B05488.__pad_579C[20392],
      *(ConvertClass **)&stru_B05488.__pad_579C[20016],
      0,
      (ConvertClass *)&v11,
      (ConvertClass *)v13,
      (ConvertClass *)0x400,
      0,
      0,
      0,
      (ConvertClass *)0x3E8,
      0,
      0,
      0,
      0,
      0);
}


// ==== 0x0072E730  UI_Draw_72E730  this=-  sig=csp ====
void __fastcall UI_Draw_72E730(ConvertClass *aP0, int *a1, int a3, int aP2, int a5)
{
  int v5; // esi
  int v6; // eax
  int v7; // eax
  int v8; // [esp+0h] [ebp-18h] BYREF
  int v9; // [esp+4h] [ebp-14h]
  _DWORD v10[2]; // [esp+8h] [ebp-10h] BYREF
  ConvertClass *v11; // [esp+10h] [ebp-8h]
  int v12; // [esp+14h] [ebp-4h]

  v5 = a1[3]; /*0x72e736*/
  v10[0] = *a1; /*0x72e739*/
  v6 = a1[1]; /*0x72e73d*/
  v8 = 0; /*0x72e740*/
  v10[1] = v6; /*0x72e748*/
  v7 = a1[2]; /*0x72e74c*/
  v9 = 0; /*0x72e754*/
  v11 = (ConvertClass *)v7; /*0x72e75c*/
  v12 = v5; /*0x72e760*/
  if ( v7 > 800 ) /*0x72e764*/
    v11 = (ConvertClass *)((v7 - 800) / 2 + 800); /*0x72e775*/
  if ( v5 > 600 ) /*0x72e77f*/
    v12 = (v5 - 600) / 2 + 600; /*0x72e791*/
  v8 = **(_DWORD **)&stru_B05488.__pad_579C[20472]; /*0x72e79d*/
  v9 = *(_DWORD *)(*(_DWORD *)&stru_B05488.__pad_579C[20472] + 4); /*0x72e7a4*/
  if ( *(_DWORD *)&stru_89E138.__pad_14B0[2748] == 640 ) /*0x72e7b2*/
    DrawToSurfaceSHP( /*0x72e7df*/
      (int)aP0,
      a3,
      (ConvertClass *)aP2,
      0,
      (ConvertClass *)&v8,
      (ConvertClass *)v10,
      (ConvertClass *)0x400,
      0,
      0,
      0,
      (ConvertClass *)0x3E8,
      0,
      0,
      0,
      0,
      0);
  else
    DrawToSurfaceSHP( /*0x72e815*/
      (int)aP0,
      a3,
      (ConvertClass *)a5,
      0,
      (ConvertClass *)&v8,
      (ConvertClass *)v10,
      (ConvertClass *)0x400,
      0,
      0,
      0,
      (ConvertClass *)0x3E8,
      0,
      0,
      0,
      0,
      0);
}


// ==== 0x0072E820  Render_Draw  this=-  sig=csp ====
void __fastcall Render_Draw(ConvertClass *a1, int *a2, char a3)
{
  RenderScoreScreen(a1, a2, a3); /*0x72e82b*/
  UI_Draw_72E730( /*0x72e848*/
    a1,
    a2,
    *(int *)&stru_B05488.__pad_579C[20392],
    *(int *)&stru_B05488.__pad_579C[20268],
    *(int *)&stru_B05488.__pad_579C[19936]);
}


// ==== 0x0072E860  UI_Draw_72E860  this=-  sig=csp ====
void __fastcall UI_Draw_72E860(int a1, ConvertClass *a2)
{
  int v2; // [esp+8h] [ebp-8h] BYREF
  int v3; // [esp+Ch] [ebp-4h]

  v2 = 0; /*0x72e86c*/
  v3 = 0; /*0x72e870*/
  v2 = **(_DWORD **)&stru_B05488.__pad_579C[20464]; /*0x72e877*/
  v3 = *(_DWORD *)(*(_DWORD *)&stru_B05488.__pad_579C[20464] + 4); /*0x72e87e*/
  DrawToSurfaceSHP( /*0x72e8a8*/
    a1,
    *(int *)&stru_B05488.__pad_579C[20392],
    *(ConvertClass **)&stru_B05488.__pad_579C[19896],
    0,
    (ConvertClass *)&v2,
    a2,
    (ConvertClass *)0x400,
    0,
    0,
    0,
    (ConvertClass *)0x3E8,
    0,
    0,
    0,
    0,
    0);
}


// ==== 0x0072E8C0  UI_Draw_72E8C0  this=-  sig=csp ====
void __fastcall UI_Draw_72E8C0(int a1, ConvertClass *a2)
{
  int v2; // [esp+8h] [ebp-8h] BYREF
  int v3; // [esp+Ch] [ebp-4h]

  v2 = 0; /*0x72e8cc*/
  v3 = 0; /*0x72e8d0*/
  v2 = **(_DWORD **)&stru_B05488.__pad_579C[20476]; /*0x72e8d7*/
  v3 = *(_DWORD *)(*(_DWORD *)&stru_B05488.__pad_579C[20476] + 4); /*0x72e8de*/
  DrawToSurfaceSHP( /*0x72e909*/
    a1,
    *(int *)&stru_B05488.__pad_579C[20392],
    *(ConvertClass **)&stru_B05488.__pad_579C[20180],
    1u,
    (ConvertClass *)&v2,
    a2,
    (ConvertClass *)0x400,
    0,
    0,
    0,
    (ConvertClass *)0x3E8,
    0,
    0,
    0,
    0,
    0);
}


// ==== 0x0072E920  UI_Draw_72E920  this=-  sig=csp ====
void __fastcall UI_Draw_72E920(int a1, ConvertClass *a2)
{
  int v2; // edi
  int v3; // [esp+8h] [ebp-8h] BYREF
  int v4; // [esp+Ch] [ebp-4h]

  v3 = 0; /*0x72e92c*/
  v4 = 0; /*0x72e930*/
  v2 = **(_DWORD **)&stru_B05488.__pad_579C[20472]; /*0x72e934*/
  v3 = **(_DWORD **)&stru_B05488.__pad_579C[20472]; /*0x72e936*/
  v4 = *(_DWORD *)(*(_DWORD *)&stru_B05488.__pad_579C[20472] + 4); /*0x72e93d*/
  if ( *(int *)&stru_89E138.__pad_14B0[2748] >= 800 ) /*0x72e94b*/
    v3 = v2 + 80; /*0x72e952*/
  DrawToSurfaceSHP( /*0x72e97d*/
    a1,
    *(int *)&stru_B05488.__pad_579C[20356],
    *(ConvertClass **)&stru_B05488.__pad_579C[20188],
    0,
    (ConvertClass *)&v3,
    a2,
    (ConvertClass *)0x400,
    0,
    0,
    0,
    (ConvertClass *)0x3E8,
    0,
    0,
    0,
    0,
    0);
}


// ==== 0x0072E990  sub_72E990  this=-  sig=ida-proto ====
void __fastcall sub_72E990(int a1, ConvertClass *a2)
{
  int v2; // [esp+8h] [ebp-8h] BYREF
  int v3; // [esp+Ch] [ebp-4h]

  v2 = 0; /*0x72e99c*/
  v3 = 0; /*0x72e9a0*/
  v2 = **(_DWORD **)&stru_B05488.__pad_579C[20472]; /*0x72e9a7*/
  v3 = *(_DWORD *)(*(_DWORD *)&stru_B05488.__pad_579C[20472] + 4); /*0x72e9ae*/
  DrawToSurfaceSHP( /*0x72e9d8*/
    a1,
    *(int *)&stru_B05488.__pad_579C[20356],
    *(ConvertClass **)&stru_B05488.__pad_579C[20240],
    0,
    (ConvertClass *)&v2,
    a2,
    (ConvertClass *)0x400,
    0,
    0,
    0,
    (ConvertClass *)0x3E8,
    0,
    0,
    0,
    0,
    0);
}


// ==== 0x0072E9F0  Map_Load_72E9F0  this=ObjectClass  sig=csp ====
void __fastcall Map_Load_72E9F0(ConvertClass *a1, int *a2)
{
  int v4; // [esp+8h] [ebp-8h] BYREF
  int v5; // [esp+Ch] [ebp-4h]

  DrawScoreScreenStats(a1, (int)a2); /*0x72e9f9*/
  RenderScoreScreen(a1, a2, 0); /*0x72ea04*/
  v4 = 0; /*0x72ea0e*/
  v5 = 0; /*0x72ea16*/
  v4 = **(_DWORD **)&stru_B05488.__pad_579C[20472]; /*0x72ea20*/
  v5 = *(_DWORD *)(*(_DWORD *)&stru_B05488.__pad_579C[20472] + 4); /*0x72ea4a*/
  DrawToSurfaceSHP( /*0x72ea57*/
    (int)a1,
    *(int *)&stru_B05488.__pad_579C[20356],
    *(ConvertClass **)&stru_B05488.__pad_579C[20240],
    0,
    (ConvertClass *)&v4,
    (ConvertClass *)a2,
    (ConvertClass *)0x400,
    0,
    0,
    0,
    (ConvertClass *)0x3E8,
    0,
    0,
    0,
    0,
    0);
}


// ==== 0x0072EA70  sub_72EA70  this=-  sig=ida-proto ====
void __fastcall sub_72EA70(int a1, ConvertClass *a2)
{
  int v2; // [esp+8h] [ebp-8h] BYREF
  int v3; // [esp+Ch] [ebp-4h]

  v2 = 0; /*0x72ea7c*/
  v3 = 0; /*0x72ea80*/
  v2 = **(_DWORD **)&stru_B05488.__pad_579C[20472]; /*0x72ea87*/
  v3 = *(_DWORD *)(*(_DWORD *)&stru_B05488.__pad_579C[20472] + 4); /*0x72ea8e*/
  DrawToSurfaceSHP( /*0x72eab8*/
    a1,
    *(int *)&stru_B05488.__pad_579C[20368],
    *(ConvertClass **)&stru_B05488.__pad_579C[20216],
    0,
    (ConvertClass *)&v2,
    a2,
    (ConvertClass *)0x400,
    0,
    0,
    0,
    (ConvertClass *)0x3E8,
    0,
    0,
    0,
    0,
    0);
}


// ==== 0x0072EAD0  Map_Load_72EAD0  this=ObjectClass  sig=csp ====
void __fastcall Map_Load_72EAD0(ConvertClass *a1, int *a2)
{
  int v4; // [esp+8h] [ebp-8h] BYREF
  int v5; // [esp+Ch] [ebp-4h]

  DrawScoreScreenStats(a1, (int)a2); /*0x72ead9*/
  RenderScoreScreen(a1, a2, 0); /*0x72eae4*/
  v4 = 0; /*0x72eaee*/
  v5 = 0; /*0x72eaf6*/
  v4 = **(_DWORD **)&stru_B05488.__pad_579C[20472]; /*0x72eb00*/
  v5 = *(_DWORD *)(*(_DWORD *)&stru_B05488.__pad_579C[20472] + 4); /*0x72eb2a*/
  DrawToSurfaceSHP( /*0x72eb37*/
    (int)a1,
    *(int *)&stru_B05488.__pad_579C[20368],
    *(ConvertClass **)&stru_B05488.__pad_579C[20216],
    0,
    (ConvertClass *)&v4,
    (ConvertClass *)a2,
    (ConvertClass *)0x400,
    0,
    0,
    0,
    (ConvertClass *)0x3E8,
    0,
    0,
    0,
    0,
    0);
}


// ==== 0x0072EB50  Render_Render_72EB50  this=-  sig=ida-proto ====
void *sub_72EB50()
{
  void *result; // eax

  MEMORY[0xB0FAC4] = LoadFileSHP(MEMORY[0x844CD4], (bool *)&MEMORY[0xB0FC95]); /*0x72eb6b*/
  MEMORY[0xB0F9DC] = LoadFileSHP(MEMORY[0x844CD8], (bool *)&MEMORY[0xB0FC96]); /*0x72eb80*/
  MEMORY[0xB0FAC0] = LoadFileSHP(MEMORY[0x844CDC], (bool *)&MEMORY[0xB0FC97]); /*0x72eb95*/
  MEMORY[0xB0FB50] = LoadFileSHP(MEMORY[0x844CE0], (bool *)&MEMORY[0xB0FC98]); /*0x72ebaa*/
  MEMORY[0xB0FA04] = LoadFileSHP(MEMORY[0x844CE4], (bool *)&MEMORY[0xB0FC99]); /*0x72ebbf*/
  MEMORY[0xB0FAF8] = LoadFileSHP(MEMORY[0x844CE8], (bool *)&MEMORY[0xB0FC9A]); /*0x72ebd4*/
  MEMORY[0xB0FA74] = LoadFileSHP(MEMORY[0x844CEC], (bool *)&MEMORY[0xB0FC9B]); /*0x72ebe9*/
  MEMORY[0xB0FA38] = LoadFileSHP(MEMORY[0x844CF0], (bool *)&MEMORY[0xB0FC9C]); /*0x72ebfe*/
  MEMORY[0xB0FAE8] = LoadFileSHP(MEMORY[0x844CF4], (bool *)&MEMORY[0xB0FC9D]); /*0x72ec13*/
  result = LoadFileSHP(MEMORY[0x844CF8], (bool *)&MEMORY[0xB0FC9E]); /*0x72ec18*/
  MEMORY[0xB0FA54] = result; /*0x72ec1d*/
  return result; /*0x72ec22*/
}


// ==== 0x0072EC70  SetupMouseClassResources  this=ObjectClass  sig=ida-proto ====
int *__fastcall MouseClass_SetupResources(int a1, int a2)
{
  int v2; // edi
  int v3; // ebx
  int v4; // esi
  int *v5; // eax
  int v6; // ebp
  int v7; // ebx
  int v8; // esi
  _DWORD *v9; // eax
  int v10; // ebx
  _DWORD *v11; // eax
  int v12; // ebx
  int v13; // edi
  _DWORD *v14; // eax
  int v15; // edi
  int v16; // ebx
  int v17; // ebp
  int v18; // esi
  int *v19; // eax
  int v20; // ebp
  int v21; // ebx
  int v22; // esi
  _DWORD *v23; // eax
  int v24; // ecx
  int v25; // esi
  int v26; // ebp
  int v27; // edi
  _DWORD *v28; // eax
  int v29; // edi
  int v30; // esi
  int *result; // eax
  bool v32; // [esp+12h] [ebp-12h]
  bool v33; // [esp+13h] [ebp-11h]
  int v34; // [esp+14h] [ebp-10h]
  int v35; // [esp+18h] [ebp-Ch]
  int v36; // [esp+1Ch] [ebp-8h]
  int v37; // [esp+20h] [ebp-4h]

  v35 = 0; /*0x72ec81*/
  v34 = a1; /*0x72ec85*/
  if ( a1 >= 1024 ) /*0x72ec89*/
  {
    v35 = (a1 - 800) / 2; /*0x72ec9a*/
    v34 = a1 - v35; /*0x72ec9e*/
  }
  v2 = 0; /*0x72eca2*/
  v37 = a2; /*0x72ecaa*/
  v36 = a2; /*0x72ecae*/
  if ( a2 >= 768 ) /*0x72ecb2*/
  {
    v2 = (a2 - 600) / 2; /*0x72ecc1*/
    v37 = a2 - v2; /*0x72ecc5*/
    v36 = a2 - 2 * v2; /*0x72ecd2*/
  }
  v32 = a1 == 640; /*0x72eceb*/
  v33 = a2 == 480; /*0x72ecf9*/
  if ( a1 == 640 ) /*0x72ecfd*/
    v3 = *((__int16 *)MEMORY[0xB0FB50] + 1); /*0x72ecff*/
  else
    v3 = *((__int16 *)MEMORY[0xB0FA04] + 1); /*0x72ed05*/
  if ( a2 == 480 ) /*0x72ed0b*/
    v4 = *((__int16 *)MEMORY[0xB0FB50] + 2); /*0x72ed0d*/
  else
    v4 = *((__int16 *)MEMORY[0xB0FA04] + 2); /*0x72ed13*/
  v5 = (int *)__2_YAPAXI_Z(0x10u); /*0x72ed19*/
  if ( v5 ) /*0x72ed23*/
  {
    v5[1] = v2; /*0x72ed29*/
    *v5 = v35; /*0x72ed2c*/
    v5[2] = v3; /*0x72ed2e*/
    v5[3] = v4; /*0x72ed31*/
    MEMORY[0xB0FC1C] = v5; /*0x72ed34*/
  }
  else
  {
    MEMORY[0xB0FC1C] = 0; /*0x72ed3b*/
  }
  v6 = *((__int16 *)MEMORY[0xB0FAF8] + 1); /*0x72ed4c*/
  v7 = *((__int16 *)MEMORY[0xB0FAF8] + 2); /*0x72ed50*/
  v8 = v34 - v6; /*0x72ed54*/
  v9 = __2_YAPAXI_Z(0x10u); /*0x72ed56*/
  if ( v9 ) /*0x72ed60*/
  {
    *v9 = v8; /*0x72ed62*/
    v9[1] = v2; /*0x72ed64*/
    v9[2] = v6; /*0x72ed67*/
    v9[3] = v7; /*0x72ed6a*/
    MEMORY[0xB0FC20] = v9; /*0x72ed6d*/
  }
  else
  {
    MEMORY[0xB0FC20] = 0; /*0x72ed74*/
  }
  v10 = *((__int16 *)MEMORY[0xB0FAC0] + 2); /*0x72ed86*/
  v11 = __2_YAPAXI_Z(0x10u); /*0x72ed8a*/
  if ( v11 ) /*0x72ed94*/
  {
    *v11 = v8; /*0x72ed96*/
    v11[1] = v2; /*0x72ed98*/
    v11[2] = v6; /*0x72ed9b*/
    v11[3] = v10; /*0x72ed9e*/
    MEMORY[0xB0FC18] = v11; /*0x72eda1*/
  }
  else
  {
    MEMORY[0xB0FC18] = 0; /*0x72eda8*/
  }
  v12 = v2 + *((_DWORD *)MEMORY[0xB0FC20] + 3); /*0x72edc2*/
  v13 = *((__int16 *)MEMORY[0xB0FA74] + 2); /*0x72edc4*/
  v14 = __2_YAPAXI_Z(0x10u); /*0x72edc8*/
  if ( v14 ) /*0x72edd2*/
  {
    *v14 = v8; /*0x72edd4*/
    v14[1] = v12; /*0x72edd6*/
    v14[2] = v6; /*0x72edd9*/
    v14[3] = v13; /*0x72eddc*/
  }
  else
  {
    v14 = 0; /*0x72ede1*/
  }
  MEMORY[0xB0FC24] = v14; /*0x72ede9*/
  v15 = v14[1]; /*0x72edf1*/
  v16 = *((__int16 *)MEMORY[0xB0FAC4] + 1); /*0x72edf4*/
  v17 = *((__int16 *)MEMORY[0xB0FAC4] + 2); /*0x72edf8*/
  v18 = *v14 + v14[2] - v16; /*0x72ee02*/
  v19 = (int *)__2_YAPAXI_Z(0x10u); /*0x72ee04*/
  if ( v19 ) /*0x72ee0e*/
  {
    *v19 = v18; /*0x72ee10*/
    v19[1] = v15; /*0x72ee12*/
    v19[2] = v16; /*0x72ee15*/
    v19[3] = v17; /*0x72ee18*/
    MEMORY[0xB0FC10] = v19; /*0x72ee1b*/
  }
  else
  {
    MEMORY[0xB0FC10] = 0; /*0x72ee22*/
  }
  v20 = *((__int16 *)MEMORY[0xB0F9DC] + 1); /*0x72ee33*/
  v21 = *((__int16 *)MEMORY[0xB0F9DC] + 2); /*0x72ee37*/
  v22 = *((_DWORD *)MEMORY[0xB0FC24] + 1) + *((_DWORD *)MEMORY[0xB0FC24] + 3) - v21; /*0x72ee48*/
  v23 = __2_YAPAXI_Z(0x10u); /*0x72ee4a*/
  if ( v23 ) /*0x72ee54*/
  {
    v23[1] = v22; /*0x72ee5a*/
    v23[2] = v20; /*0x72ee5f*/
    *v23 = v34 - v20; /*0x72ee62*/
    v23[3] = v21; /*0x72ee64*/
    MEMORY[0xB0FC14] = v23; /*0x72ee67*/
  }
  else
  {
    MEMORY[0xB0FC14] = 0; /*0x72ee6e*/
  }
  MEMORY[0xB0FA20] = (v36 - *((_DWORD *)MEMORY[0xB0FC20] + 3)) / *((_DWORD *)MEMORY[0xB0FC24] + 3); /*0x72ee95*/
  v24 = MEMORY[0xB0FA20] * *((_DWORD *)MEMORY[0xB0FC24] + 3); /*0x72ee9d*/
  v25 = v24 + *((_DWORD *)MEMORY[0xB0FC20] + 3); /*0x72eeab*/
  v26 = *((__int16 *)MEMORY[0xB0FA38] + 1); /*0x72eead*/
  v27 = v24 + *((_DWORD *)MEMORY[0xB0FC24] + 1); /*0x72eeb1*/
  v28 = __2_YAPAXI_Z(0x10u); /*0x72eeb3*/
  if ( v28 ) /*0x72eebd*/
  {
    v28[1] = v27; /*0x72eec3*/
    *v28 = v34 - v26; /*0x72eeca*/
    v28[2] = v26; /*0x72eecc*/
    v28[3] = v36 - v25; /*0x72eecf*/
    MEMORY[0xB0FC28] = v28; /*0x72eed2*/
  }
  else
  {
    MEMORY[0xB0FC28] = 0; /*0x72eed9*/
  }
  if ( v32 ) /*0x72eef4*/
    v29 = *((__int16 *)MEMORY[0xB0FAE8] + 1); /*0x72eef6*/
  else
    v29 = *((__int16 *)MEMORY[0xB0FA54] + 1); /*0x72eefc*/
  if ( v33 ) /*0x72ef06*/
    v30 = *((__int16 *)MEMORY[0xB0FAE8] + 2); /*0x72ef08*/
  else
    v30 = *((__int16 *)MEMORY[0xB0FA54] + 2); /*0x72ef0e*/
  result = (int *)__2_YAPAXI_Z(0x10u); /*0x72ef14*/
  if ( result ) /*0x72ef1e*/
  {
    result[2] = v29; /*0x72ef24*/
    *result = v35; /*0x72ef27*/
    result[3] = v30; /*0x72ef2f*/
    result[1] = v37 - v30; /*0x72ef34*/
    MEMORY[0xB0FC2C] = result; /*0x72ef38*/
  }
  else
  {
    MEMORY[0xB0FC2C] = 0; /*0x72ef45*/
  }
  return result; /*0x72ef32*/
}


// ==== 0x0072EF60  LoadingScreen::DestroyFileTrees  this=LoadingScreen  sig=ida-proto ====
void LoadingScreen_DestroyFileTrees()
{
  void *v0; // esi
  void *v1; // esi
  void *v2; // esi
  void *v3; // esi
  void *v4; // esi
  void *v5; // esi
  void *v6; // esi
  void *v7; // esi
  void *v8; // esi
  void *v9; // esi

  if ( MEMORY[0xB0FC95] ) /*0x72ef6b*/
  {
    v0 = MEMORY[0xB0FAC4]; /*0x72ef6d*/
    if ( MEMORY[0xB0FAC4] ) /*0x72ef75*/
    {
      FileTreeNode::Destroy(MEMORY[0xB0FAC4]); /*0x72ef79*/
      __3_YAXPAX_Z(v0); /*0x72ef7f*/
    }
    MEMORY[0xB0FC95] = 0; /*0x72ef87*/
  }
  MEMORY[0xB0FAC4] = 0; /*0x72ef92*/
  if ( MEMORY[0xB0FC96] ) /*0x72ef9a*/
  {
    v1 = MEMORY[0xB0F9DC]; /*0x72ef9c*/
    if ( MEMORY[0xB0F9DC] ) /*0x72efa4*/
    {
      FileTreeNode::Destroy(MEMORY[0xB0F9DC]); /*0x72efa8*/
      __3_YAXPAX_Z(v1); /*0x72efae*/
    }
    MEMORY[0xB0FC96] = 0; /*0x72efb6*/
  }
  MEMORY[0xB0F9DC] = 0; /*0x72efc1*/
  if ( MEMORY[0xB0FC97] ) /*0x72efc9*/
  {
    v2 = MEMORY[0xB0FAC0]; /*0x72efcb*/
    if ( MEMORY[0xB0FAC0] ) /*0x72efd3*/
    {
      FileTreeNode::Destroy(MEMORY[0xB0FAC0]); /*0x72efd7*/
      __3_YAXPAX_Z(v2); /*0x72efdd*/
    }
    MEMORY[0xB0FC97] = 0; /*0x72efe5*/
  }
  MEMORY[0xB0FAC0] = 0; /*0x72eff0*/
  if ( MEMORY[0xB0FC98] ) /*0x72eff8*/
  {
    v3 = MEMORY[0xB0FB50]; /*0x72effa*/
    if ( MEMORY[0xB0FB50] ) /*0x72f002*/
    {
      FileTreeNode::Destroy(MEMORY[0xB0FB50]); /*0x72f006*/
      __3_YAXPAX_Z(v3); /*0x72f00c*/
    }
    MEMORY[0xB0FC98] = 0; /*0x72f014*/
  }
  MEMORY[0xB0FB50] = 0; /*0x72f01f*/
  if ( MEMORY[0xB0FC99] ) /*0x72f027*/
  {
    v4 = MEMORY[0xB0FA04]; /*0x72f029*/
    if ( MEMORY[0xB0FA04] ) /*0x72f031*/
    {
      FileTreeNode::Destroy(MEMORY[0xB0FA04]); /*0x72f035*/
      __3_YAXPAX_Z(v4); /*0x72f03b*/
    }
    MEMORY[0xB0FC99] = 0; /*0x72f043*/
  }
  MEMORY[0xB0FA04] = 0; /*0x72f04e*/
  if ( MEMORY[0xB0FC9A] ) /*0x72f056*/
  {
    v5 = MEMORY[0xB0FAF8]; /*0x72f058*/
    if ( MEMORY[0xB0FAF8] ) /*0x72f060*/
    {
      FileTreeNode::Destroy(MEMORY[0xB0FAF8]); /*0x72f064*/
      __3_YAXPAX_Z(v5); /*0x72f06a*/
    }
    MEMORY[0xB0FC9A] = 0; /*0x72f072*/
  }
  MEMORY[0xB0FAF8] = 0; /*0x72f07d*/
  if ( MEMORY[0xB0FC9B] ) /*0x72f085*/
  {
    v6 = MEMORY[0xB0FA74]; /*0x72f087*/
    if ( MEMORY[0xB0FA74] ) /*0x72f08f*/
    {
      FileTreeNode::Destroy(MEMORY[0xB0FA74]); /*0x72f093*/
      __3_YAXPAX_Z(v6); /*0x72f099*/
    }
    MEMORY[0xB0FC9B] = 0; /*0x72f0a1*/
  }
  MEMORY[0xB0FA74] = 0; /*0x72f0ac*/
  if ( MEMORY[0xB0FC9C] ) /*0x72f0b4*/
  {
    v7 = MEMORY[0xB0FA38]; /*0x72f0b6*/
    if ( MEMORY[0xB0FA38] ) /*0x72f0be*/
    {
      FileTreeNode::Destroy(MEMORY[0xB0FA38]); /*0x72f0c2*/
      __3_YAXPAX_Z(v7); /*0x72f0c8*/
    }
    MEMORY[0xB0FC9C] = 0; /*0x72f0d0*/
  }
  MEMORY[0xB0FA38] = 0; /*0x72f0db*/
  if ( MEMORY[0xB0FC9D] ) /*0x72f0e3*/
  {
    v8 = MEMORY[0xB0FAE8]; /*0x72f0e5*/
    if ( MEMORY[0xB0FAE8] ) /*0x72f0ed*/
    {
      FileTreeNode::Destroy(MEMORY[0xB0FAE8]); /*0x72f0f1*/
      __3_YAXPAX_Z(v8); /*0x72f0f7*/
    }
    MEMORY[0xB0FC9D] = 0; /*0x72f0ff*/
  }
  MEMORY[0xB0FAE8] = 0; /*0x72f10a*/
  if ( MEMORY[0xB0FC9E] ) /*0x72f112*/
  {
    v9 = MEMORY[0xB0FA54]; /*0x72f114*/
    if ( MEMORY[0xB0FA54] ) /*0x72f11c*/
    {
      FileTreeNode::Destroy(MEMORY[0xB0FA54]); /*0x72f120*/
      __3_YAXPAX_Z(v9); /*0x72f126*/
    }
    MEMORY[0xB0FC9E] = 0; /*0x72f12e*/
  }
  MEMORY[0xB0FA54] = 0; /*0x72f134*/
}


// ==== 0x0072F140  LoadingScreen::CleanupObjects  this=LoadingScreen  sig=csp ====
void LoadingScreen_CleanupObjects()
{
  if ( MEMORY[0xB0FBC8] ) /*0x72f14a*/
  {
    __3_YAXPAX_Z(MEMORY[0xB0FBC8]); /*0x72f14d*/
    MEMORY[0xB0FBC8] = 0; /*0x72f155*/
  }
  if ( MEMORY[0xB0FBCC] ) /*0x72f163*/
  {
    (**(void (__thiscall ***)(int, int))MEMORY[0xB0FBCC])(MEMORY[0xB0FBCC], 1); /*0x72f169*/
    MEMORY[0xB0FBCC] = 0; /*0x72f16b*/
  }
  if ( MEMORY[0xB0FBD0] ) /*0x72f178*/
  {
    __3_YAXPAX_Z(MEMORY[0xB0FBD0]); /*0x72f17b*/
    MEMORY[0xB0FBD0] = 0; /*0x72f183*/
  }
  if ( MEMORY[0xB0FBD4] ) /*0x72f191*/
  {
    (**(void (__thiscall ***)(int, int))MEMORY[0xB0FBD4])(MEMORY[0xB0FBD4], 1); /*0x72f197*/
    MEMORY[0xB0FBD4] = 0; /*0x72f199*/
  }
  if ( MEMORY[0xB0FBD8] ) /*0x72f1a6*/
  {
    __3_YAXPAX_Z(MEMORY[0xB0FBD8]); /*0x72f1a9*/
    MEMORY[0xB0FBD8] = 0; /*0x72f1b1*/
  }
  if ( MEMORY[0xB0FBDC] ) /*0x72f1bf*/
  {
    (**(void (__thiscall ***)(int, int))MEMORY[0xB0FBDC])(MEMORY[0xB0FBDC], 1); /*0x72f1c5*/
    MEMORY[0xB0FBDC] = 0; /*0x72f1c7*/
  }
}


// ==== 0x0072F350  House_Load  this=-  sig=ida-proto ====
_DWORD *sub_72F350()
{
  _DWORD *result; // eax

  FileTree::CleanupAll(); /*0x72f350*/
  LoadingScreen::FreeResources(); /*0x72f355*/
  LoadingScreen::FreeResources2(); /*0x72f35a*/
  MEMORY[0xB0FC0C] = 0; /*0x72f35f*/
  LoadingScreen::LoadSHPs(); /*0x72f366*/
  if ( *((_DWORD *)MEMORY[0xA8B230] + 3374) == 2 ) /*0x72f377*/
  {
    LoadPaletteSimple(MEMORY[0x844BF8], &MEMORY[0xB0FBEC], &MEMORY[0xB0FBF0]); /*0x72f389*/
    LoadPaletteSimple(MEMORY[0x844BFC][0], &MEMORY[0xB0FBF4], &MEMORY[0xB0FBF8]); /*0x72f39e*/
  }
  else
  {
    LoadPaletteSimple(MEMORY[0x844C00], &MEMORY[0xB0FBF4], &MEMORY[0xB0FBF8]); /*0x72f3b0*/
    LoadPaletteSimple(MEMORY[0x844BF4], &MEMORY[0xB0FBEC], &MEMORY[0xB0FBF0]); /*0x72f3c5*/
  }
  LoadPaletteSimple(MEMORY[0x844BF0], &MEMORY[0xB0FBE4], &MEMORY[0xB0FBE8]); /*0x72f3da*/
  LoadPaletteSimple(MEMORY[0x844C04], &MEMORY[0xB0FBFC], &MEMORY[0xB0FC00]); /*0x72f3ef*/
  LoadPaletteSimple(MEMORY[0x844C08], &MEMORY[0xB0FC04], &MEMORY[0xB0FC08]); /*0x72f404*/
  result = SetupScreenBuffers(MEMORY[0xA8EB84], MEMORY[0xA8EB88]); /*0x72f415*/
  MEMORY[0xB0FC0C] = 1; /*0x72f41a*/
  return result; /*0x72f421*/
}


// ==== 0x0072F430  UI_Init_72F430  this=-  sig=ida-proto ====
char sub_72F430()
{
  return MEMORY[0xB0FC0C]; /*0x72f435*/
}


// ==== 0x0072F440  Game::InitializeToolTipColor  this=Game  sig=csp ====
char __thiscall Game::InitializeToolTipColor(void *this)
{
  char result; // al

  if ( this ) /*0x72f442*/
  {
    if ( this == (void *)1 ) /*0x72f460*/
    {
      LOWORD(MEMORY[0xB0FA1C]) = MEMORY[0xB0FB04]; /*0x72f46e*/
      BYTE2(MEMORY[0xB0FA1C]) = MEMORY[0xB0FB06]; /*0x72f475*/
      return MEMORY[0xB0FB06]; /*0x72f469*/
    }
    else
    {
      LOWORD(MEMORY[0xB0FA1C]) = MEMORY[0xB0FAA0]; /*0x72f488*/
      BYTE2(MEMORY[0xB0FA1C]) = MEMORY[0xB0FAA2]; /*0x72f48f*/
    }
  }
  else
  {
    LOWORD(MEMORY[0xB0FA1C]) = MEMORY[0xB0F9D8]; /*0x72f450*/
    BYTE2(MEMORY[0xB0FA1C]) = MEMORY[0xB0F9DA]; /*0x72f456*/
    return MEMORY[0xB0F9D8]; /*0x72f444*/
  }
  return result; /*0x72f45c*/
}


// ==== 0x0072F4A0  UI_Load_72F4A0  this=-  sig=ida-proto ====
CCINIClass *UI_Load_72F4A0()
{
  return *(CCINIClass **)&stru_B05488.__pad_579C[20416]; /*0x72f4a5*/
}


// ==== 0x0072F4B0  UI_Helper_72F4B0  this=-  sig=ida-proto ====
int sub_72F4B0()
{
  return MEMORY[0xB0FBE8]; /*0x72f4b5*/
}


// ==== 0x0072F4C0  sub_72F4C0  this=-  sig=ida-proto ====
CCINIClass *sub_72F4C0()
{
  return *(CCINIClass **)&stru_B05488.__pad_579C[20448]; /*0x72f4c5*/
}


// ==== 0x0072F4D0  UI_Update_72F4D0  this=-  sig=ida-proto ====
int sub_72F4D0()
{
  return MEMORY[0xB0FC08]; /*0x72f4d5*/
}


// ==== 0x0072F4E0  UI_Load_72F4E0  this=-  sig=ida-proto ====
CCINIClass *UI_Load_72F4E0()
{
  return *(CCINIClass **)&stru_B05488.__pad_579C[20440]; /*0x72f4e5*/
}


// ==== 0x0072F4F0  sub_72F4F0  this=-  sig=ida-proto ====
int sub_72F4F0()
{
  return MEMORY[0xB0FC00]; /*0x72f4f5*/
}


// ==== 0x0072F500  sub_72F500  this=-  sig=ida-proto ====
CCINIClass *sub_72F500()
{
  return *(CCINIClass **)&stru_B05488.__pad_579C[20432]; /*0x72f505*/
}


// ==== 0x0072F510  VtableStub::72F510  this=VtableStub  sig=ida-proto ====
int VtableStub::72F510()
{
  return MEMORY[0xB0FBF8]; /*0x72f515*/
}


// ==== 0x0072F520  sub_72F520  this=-  sig=ida-proto ====
CCINIClass *sub_72F520()
{
  return *(CCINIClass **)&stru_B05488.__pad_579C[20424]; /*0x72f525*/
}


// ==== 0x0072F530  sub_72F530  this=-  sig=ida-proto ====
int sub_72F530()
{
  return MEMORY[0xB0FBF0]; /*0x72f535*/
}


// ==== 0x0072F540  RenderCreditsScreen  this=-  sig=csp ====
void __fastcall RenderCreditsScreen(int a1, ConvertClass *a2, char a3)
{
  int v5; // ebp
  int v6; // edx
  int v7; // ebp
  int v8; // [esp+10h] [ebp-28h] BYREF
  int i; // [esp+14h] [ebp-24h]
  _DWORD v10[2]; // [esp+18h] [ebp-20h] BYREF
  int v11; // [esp+20h] [ebp-18h]
  int v12; // [esp+24h] [ebp-14h]
  int v13; // [esp+28h] [ebp-10h]
  int v14; // [esp+2Ch] [ebp-Ch]
  int v15; // [esp+34h] [ebp-4h]

  if ( !stru_B05488.__pad_579C[20456] ) /*0x72f552*/
  {
    LoadingScreen::LoadSHPs(); /*0x72f554*/
    Sides::MixFileYuriFiles3(); /*0x72f559*/
    SetupScreenBuffers(*(int *)&HouseClass_Player.__pad_5568[22736], *(int *)&HouseClass_Player.__pad_5568[22740]); /*0x72f56a*/
    stru_B05488.__pad_579C[20456] = 1; /*0x72f56f*/
  }
  (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)a1 + 24))(a1, 0); /*0x72f57d*/
  v8 = 0; /*0x72f585*/
  i = 0; /*0x72f589*/
  v8 = **(_DWORD **)&stru_B05488.__pad_579C[20492]; /*0x72f58f*/
  i = *(_DWORD *)(*(_DWORD *)&stru_B05488.__pad_579C[20492] + 4); /*0x72f59b*/
  if ( *(_DWORD *)&stru_89E138.__pad_14B0[2748] == 640 ) /*0x72f5a4*/
  {
    DrawToSurfaceSHP( /*0x72f5ca*/
      a1,
      *(int *)&stru_B05488.__pad_579C[20428],
      *(ConvertClass **)&stru_B05488.__pad_579C[20144],
      0,
      (ConvertClass *)&v8,
      a2,
      (ConvertClass *)0x400,
      0,
      0,
      0,
      (ConvertClass *)0x3E8,
      0,
      0,
      0,
      0,
      0);
  }
  else if ( *(_DWORD *)&stru_89E138.__pad_14B0[2748] == 800 ) /*0x72f5d1*/
  {
    DrawToSurfaceSHP( /*0x72f5f6*/
      a1,
      *(int *)&stru_B05488.__pad_579C[20428],
      *(ConvertClass **)&stru_B05488.__pad_579C[20132],
      0,
      (ConvertClass *)&v8,
      a2,
      (ConvertClass *)0x400,
      0,
      0,
      0,
      (ConvertClass *)0x3E8,
      0,
      0,
      0,
      0,
      0);
  }
  else
  {
    DrawToSurfaceSHP( /*0x72f624*/
      a1,
      *(int *)&stru_B05488.__pad_579C[20428],
      *(ConvertClass **)&stru_B05488.__pad_579C[20012],
      0,
      (ConvertClass *)&v8,
      a2,
      (ConvertClass *)0x400,
      0,
      0,
      0,
      (ConvertClass *)0x3E8,
      0,
      0,
      0,
      0,
      0);
  }
  v8 = **(_DWORD **)&stru_B05488.__pad_579C[20496]; /*0x72f630*/
  i = *(_DWORD *)(*(_DWORD *)&stru_B05488.__pad_579C[20496] + 4); /*0x72f65a*/
  DrawToSurfaceSHP( /*0x72f667*/
    a1,
    *(int *)&stru_B05488.__pad_579C[20420],
    *(ConvertClass **)&stru_B05488.__pad_579C[20196],
    0,
    (ConvertClass *)&v8,
    a2,
    (ConvertClass *)0x400,
    0,
    0,
    0,
    (ConvertClass *)0x3E8,
    0,
    0,
    0,
    0,
    0);
  v8 = **(_DWORD **)&stru_B05488.__pad_579C[20500]; /*0x72f67a*/
  i = *(_DWORD *)(*(_DWORD *)&stru_B05488.__pad_579C[20500] + 4); /*0x72f681*/
  DrawToSurfaceSHP( /*0x72f6aa*/
    a1,
    *(int *)&stru_B05488.__pad_579C[20420],
    *(ConvertClass **)&stru_B05488.__pad_579C[19900],
    0,
    (ConvertClass *)&v8,
    a2,
    (ConvertClass *)0x400,
    0,
    0,
    0,
    (ConvertClass *)0x3E8,
    0,
    0,
    0,
    0,
    0);
  v8 = **(_DWORD **)&stru_B05488.__pad_579C[20504]; /*0x72f6b6*/
  i = *(_DWORD *)(*(_DWORD *)&stru_B05488.__pad_579C[20504] + 4); /*0x72f6e0*/
  DrawToSurfaceSHP( /*0x72f6ed*/
    a1,
    *(int *)&stru_B05488.__pad_579C[20436],
    *(ConvertClass **)&stru_B05488.__pad_579C[20036],
    0,
    (ConvertClass *)&v8,
    a2,
    (ConvertClass *)0x400,
    0,
    0,
    0,
    (ConvertClass *)0x3E8,
    0,
    0,
    0,
    0,
    0);
  v8 = **(_DWORD **)&stru_B05488.__pad_579C[20512]; /*0x72f700*/
  i = *(_DWORD *)(*(_DWORD *)&stru_B05488.__pad_579C[20512] + 4); /*0x72f707*/
  DrawToSurfaceSHP( /*0x72f730*/
    a1,
    *(int *)&stru_B05488.__pad_579C[20420],
    *(ConvertClass **)&stru_B05488.__pad_579C[20044],
    0,
    (ConvertClass *)&v8,
    a2,
    (ConvertClass *)0x400,
    0,
    0,
    0,
    (ConvertClass *)0x3E8,
    0,
    0,
    0,
    0,
    0);
  v5 = 0; /*0x72f73a*/
  v8 = **(_DWORD **)&stru_B05488.__pad_579C[20516]; /*0x72f73e*/
  for ( i = *(_DWORD *)(*(_DWORD *)&stru_B05488.__pad_579C[20516] + 4); /*0x72f750*/
        v5 < *(int *)&stru_B05488.__pad_579C[20152];
        i += *(_DWORD *)(*(_DWORD *)&stru_B05488.__pad_579C[20516] + 12) )
  {
    DrawToSurfaceSHP( /*0x72f77d*/
      a1,
      *(int *)&stru_B05488.__pad_579C[20420],
      *(ConvertClass **)&stru_B05488.__pad_579C[19932],
      0,
      (ConvertClass *)&v8,
      a2,
      (ConvertClass *)0x400,
      0,
      0,
      0,
      (ConvertClass *)0x3E8,
      0,
      0,
      0,
      0,
      0);
    ++v5; /*0x72f796*/
  }
  v8 = **(_DWORD **)&stru_B05488.__pad_579C[20520]; /*0x72f7a6*/
  i = *(_DWORD *)(*(_DWORD *)&stru_B05488.__pad_579C[20520] + 4); /*0x72f7d0*/
  DrawToSurfaceSHP( /*0x72f7dd*/
    a1,
    *(int *)&stru_B05488.__pad_579C[20420],
    *(ConvertClass **)&stru_B05488.__pad_579C[20072],
    0,
    (ConvertClass *)&v8,
    a2,
    (ConvertClass *)0x400,
    0,
    0,
    0,
    (ConvertClass *)0x3E8,
    0,
    0,
    0,
    0,
    0);
  v8 = **(_DWORD **)&stru_B05488.__pad_579C[20524]; /*0x72f7ec*/
  i = *(_DWORD *)(*(_DWORD *)&stru_B05488.__pad_579C[20524] + 4); /*0x72f7f3*/
  DrawToSurfaceSHP( /*0x72f820*/
    a1,
    *(int *)&stru_B05488.__pad_579C[20420],
    *(ConvertClass **)&stru_B05488.__pad_579C[20004],
    0,
    (ConvertClass *)&v8,
    a2,
    (ConvertClass *)0x400,
    0,
    0,
    0,
    (ConvertClass *)0x3E8,
    0,
    0,
    0,
    0,
    0);
  v10[0] = *(_DWORD *)a2->__pad_0; /*0x72f829*/
  v10[1] = *(_DWORD *)&a2->field_2[2]; /*0x72f830*/
  v11 = *(_DWORD *)&a2->__pad_6[2]; /*0x72f837*/
  v6 = *(_DWORD *)&a2->__pad_6[6]; /*0x72f841*/
  v13 = *(_DWORD *)&stru_87C374.__pad_579C[21664]; /*0x72f849*/
  v12 = v6; /*0x72f857*/
  v11 = *(_DWORD *)&stru_87C374.__pad_579C[21672] - 168; /*0x72f861*/
  v14 = *(_DWORD *)&stru_87C374.__pad_579C[21668]; /*0x72f86a*/
  v15 = *(_DWORD *)&stru_87C374.__pad_579C[21676]; /*0x72f86e*/
  v8 = **(_DWORD **)&stru_B05488.__pad_579C[20536]; /*0x72f874*/
  i = *(_DWORD *)(*(_DWORD *)&stru_B05488.__pad_579C[20536] + 4); /*0x72f882*/
  DrawToSurfaceSHP( /*0x72f8b0*/
    a1,
    *(int *)&stru_B05488.__pad_579C[20420],
    *(ConvertClass **)&stru_B05488.__pad_579C[19992],
    0,
    (ConvertClass *)&v8,
    (ConvertClass *)v10,
    (ConvertClass *)0x400,
    0,
    0,
    0,
    (ConvertClass *)0x3E8,
    0,
    0,
    0,
    0,
    0);
  if ( a3 ) /*0x72f8bb*/
  {
    v8 = **(_DWORD **)&stru_B05488.__pad_579C[20540]; /*0x72f8c8*/
    i = *(_DWORD *)(*(_DWORD *)&stru_B05488.__pad_579C[20540] + 4); /*0x72f8f3*/
    DrawToSurfaceSHP( /*0x72f900*/
      a1,
      *(int *)&stru_B05488.__pad_579C[20420],
      *(ConvertClass **)&stru_B05488.__pad_579C[20076],
      2u,
      (ConvertClass *)&v8,
      a2,
      (ConvertClass *)0x400,
      0,
      0,
      0,
      (ConvertClass *)0x3E8,
      0,
      0,
      0,
      0,
      0);
    v7 = 0; /*0x72f90a*/
    v8 = **(_DWORD **)&stru_B05488.__pad_579C[20548]; /*0x72f90e*/
    for ( i = *(_DWORD *)(*(_DWORD *)&stru_B05488.__pad_579C[20548] + 4); /*0x72f920*/
          v7 < *(int *)&stru_B05488.__pad_579C[19904];
          v8 += *(_DWORD *)(*(_DWORD *)&stru_B05488.__pad_579C[20548] + 8) )
    {
      DrawToSurfaceSHP( /*0x72f952*/
        a1,
        *(int *)&stru_B05488.__pad_579C[20420],
        *(ConvertClass **)&stru_B05488.__pad_579C[20100],
        0,
        (ConvertClass *)&v8,
        a2,
        (ConvertClass *)0x400,
        0,
        0,
        0,
        (ConvertClass *)0x3E8,
        0,
        0,
        0,
        0,
        0);
      ++v7; /*0x72f96a*/
    }
  }
  else
  {
    v8 = **(_DWORD **)&stru_B05488.__pad_579C[20544]; /*0x72f97f*/
    i = *(_DWORD *)(*(_DWORD *)&stru_B05488.__pad_579C[20544] + 4); /*0x72f986*/
    DrawToSurfaceSHP( /*0x72f9b4*/
      a1,
      *(int *)&stru_B05488.__pad_579C[20420],
      *(ConvertClass **)&stru_B05488.__pad_579C[20076],
      2u,
      (ConvertClass *)&v8,
      a2,
      (ConvertClass *)0x400,
      0,
      0,
      0,
      (ConvertClass *)0x3E8,
      0,
      0,
      0,
      0,
      0);
  }
  v8 = **(_DWORD **)&stru_B05488.__pad_579C[20552]; /*0x72f9c0*/
  i = *(_DWORD *)(*(_DWORD *)&stru_B05488.__pad_579C[20552] + 4); /*0x72f9ea*/
  DrawToSurfaceSHP( /*0x72f9f7*/
    a1,
    *(int *)&stru_B05488.__pad_579C[20420],
    *(ConvertClass **)&stru_B05488.__pad_579C[20120],
    0,
    (ConvertClass *)&v8,
    a2,
    (ConvertClass *)0x400,
    0,
    0,
    0,
    (ConvertClass *)0x3E8,
    0,
    0,
    0,
    0,
    0);
}


// ==== 0x0072FA10  LoadingScreen::LoadSHPs  this=LoadingScreen  sig=ida-proto ====
void *LoadingScreen_LoadSHPs()
{
  void *SHP; // eax
  char *v1; // ecx
  void *result; // eax

  if ( *((_DWORD *)MEMORY[0xA8B230] + 3374) == 2 ) /*0x72fa21*/
  {
    MEMORY[0xB0FA68] = LoadFileSHP(MEMORY[0x844D48], (bool *)&MEMORY[0xB0FCA5]); /*0x72fa39*/
    MEMORY[0xB0FAC8] = LoadFileSHP(MEMORY[0x844D3C], (bool *)&MEMORY[0xB0FCA1]); /*0x72fa4e*/
    SHP = LoadFileSHP(MEMORY[0x844D40], (bool *)&MEMORY[0xB0FCA0]); /*0x72fa53*/
    v1 = MEMORY[0x844D44][0]; /*0x72fa58*/
  }
  else
  {
    MEMORY[0xB0FA68] = LoadFileSHP(MEMORY[0x844D14], (bool *)&MEMORY[0xB0FCA5]); /*0x72fa80*/
    MEMORY[0xB0FAC8] = LoadFileSHP(MEMORY[0x844D04], (bool *)&MEMORY[0xB0FCA1]); /*0x72fa95*/
    SHP = LoadFileSHP(MEMORY[0x844D00], (bool *)&MEMORY[0xB0FCA0]); /*0x72fa9a*/
    v1 = MEMORY[0x844D08]; /*0x72fa9f*/
  }
  MEMORY[0xB0FAD4] = SHP; /*0x72fa5e*/
  MEMORY[0xB0FA50] = LoadFileSHP(v1, (bool *)&MEMORY[0xB0FCA2]); /*0x72fabf*/
  MEMORY[0xB0F9EC] = LoadFileSHP(MEMORY[0x844CFC], (bool *)&MEMORY[0xB0FC9F]); /*0x72fad4*/
  MEMORY[0xB0FB08] = LoadFileSHP(MEMORY[0x844D0C], (bool *)&MEMORY[0xB0FCA3]); /*0x72fae9*/
  MEMORY[0xB0F9E0] = LoadFileSHP(MEMORY[0x844D10], (bool *)&MEMORY[0xB0FCA4]); /*0x72fafe*/
  MEMORY[0xB0FA70] = LoadFileSHP(MEMORY[0x844D18], (bool *)&MEMORY[0xB0FCA6]); /*0x72fb13*/
  MEMORY[0xB0FAFC] = LoadFileSHP(MEMORY[0x844D1C], (bool *)&MEMORY[0xB0FCA7]); /*0x72fb28*/
  MEMORY[0xB0FA00] = LoadFileSHP(MEMORY[0x844D20], (bool *)&MEMORY[0xB0FCA8]); /*0x72fb3d*/
  MEMORY[0xB0FA8C] = LoadFileSHP(MEMORY[0x844D24], (bool *)&MEMORY[0xB0FCA9]); /*0x72fb52*/
  MEMORY[0xB0FA48] = LoadFileSHP(MEMORY[0x844D28], (bool *)&MEMORY[0xB0FCAA]); /*0x72fb67*/
  MEMORY[0xB0FA3C] = LoadFileSHP(MEMORY[0x844D2C], (bool *)&MEMORY[0xB0FCAB]); /*0x72fb7c*/
  MEMORY[0xB0FA90] = LoadFileSHP(MEMORY[0x844D30], (bool *)&MEMORY[0xB0FCAC]); /*0x72fb91*/
  MEMORY[0xB0FAA8] = LoadFileSHP(MEMORY[0x844D34], (bool *)&MEMORY[0xB0FCAD]); /*0x72fba6*/
  result = LoadFileSHP(MEMORY[0x844D38], (bool *)&MEMORY[0xB0FCAE]); /*0x72fbab*/
  MEMORY[0xB0FABC] = result; /*0x72fbb0*/
  return result; /*0x72fbb5*/
}


// ==== 0x0072FBC0  Sides::MixFileYuriFiles3  this=Sides  sig=ida-proto ====
int Sides::MixFileYuriFiles3()
{
  if ( *((_DWORD *)MEMORY[0xA8B230] + 3374) == 2 ) /*0x72fbcc*/
  {
    LoadPaletteSimple(MEMORY[0x844BF8], &MEMORY[0xB0FBEC], &MEMORY[0xB0FBF0]); /*0x72fbde*/
    LoadPaletteSimple(MEMORY[0x844BFC][0], &MEMORY[0xB0FBF4], &MEMORY[0xB0FBF8]); /*0x72fbf3*/
  }
  else
  {
    LoadPaletteSimple(MEMORY[0x844C00], &MEMORY[0xB0FBF4], &MEMORY[0xB0FBF8]); /*0x72fc05*/
    LoadPaletteSimple(MEMORY[0x844BF4], &MEMORY[0xB0FBEC], &MEMORY[0xB0FBF0]); /*0x72fc1a*/
  }
  LoadPaletteSimple(MEMORY[0x844BF0], &MEMORY[0xB0FBE4], &MEMORY[0xB0FBE8]); /*0x72fc2f*/
  LoadPaletteSimple(MEMORY[0x844C04], &MEMORY[0xB0FBFC], &MEMORY[0xB0FC00]); /*0x72fc44*/
  return LoadPaletteSimple(MEMORY[0x844C08], &MEMORY[0xB0FC04], &MEMORY[0xB0FC08]); /*0x72fc5e*/
}


// ==== 0x0072FC60  SetupScreenBuffers  this=-  sig=ida-proto ====
_DWORD *__fastcall Screen_SetupBuffers(int a1, int a2)
{
  __int16 *v3; // eax
  int v4; // esi
  int v5; // ebx
  _DWORD *v6; // eax
  int v7; // ebx
  int v8; // esi
  int v9; // edi
  _DWORD *v10; // eax
  int v11; // ebp
  _DWORD *v12; // eax
  int v13; // esi
  int v14; // ebp
  _DWORD *v15; // eax
  int v16; // esi
  int v17; // ebp
  _DWORD *v18; // eax
  int v19; // esi
  int v20; // ebp
  _DWORD *v21; // eax
  int v22; // ebp
  _DWORD *v23; // eax
  int v24; // ebp
  _DWORD *v25; // eax
  int v26; // esi
  int v27; // ecx
  int v28; // esi
  int v29; // edi
  _DWORD *v30; // eax
  int v31; // edi
  int v32; // ebx
  _DWORD *v33; // eax
  int v34; // edi
  int v35; // ebx
  _DWORD *v36; // eax
  _DWORD *v37; // eax
  int v38; // edi
  int v39; // ebx
  _DWORD *v40; // eax
  int v41; // edi
  int v42; // ebx
  int *v43; // eax
  int *v44; // ecx
  int v45; // eax
  int v46; // eax
  int v47; // eax
  int v48; // eax
  int v49; // edi
  int v50; // ebx
  int v51; // ebp
  int v52; // esi
  _DWORD *v53; // eax
  int v54; // edi
  int v55; // ebx
  int v56; // ebp
  int v57; // esi
  _DWORD *result; // eax

  if ( a1 == 640 ) /*0x72fc77*/
  {
    v3 = (__int16 *)MEMORY[0xB0FAD4]; /*0x72fc79*/
  }
  else
  {
    v3 = (__int16 *)MEMORY[0xB0FAC8]; /*0x72fc80*/
    if ( a1 != 800 ) /*0x72fc8b*/
      v3 = (__int16 *)MEMORY[0xB0FA50]; /*0x72fc8d*/
  }
  v4 = v3[1]; /*0x72fc92*/
  v5 = v3[2]; /*0x72fc96*/
  v6 = __2_YAPAXI_Z(0x10u); /*0x72fc9c*/
  if ( v6 ) /*0x72fca8*/
  {
    *v6 = 0; /*0x72fcaa*/
    v6[1] = 0; /*0x72fcac*/
    v6[2] = v4; /*0x72fcaf*/
    v6[3] = v5; /*0x72fcb2*/
    MEMORY[0xB0FC30] = v6; /*0x72fcb5*/
  }
  else
  {
    MEMORY[0xB0FC30] = 0; /*0x72fcbc*/
  }
  v7 = *((__int16 *)MEMORY[0xB0FB08] + 1); /*0x72fcc9*/
  v8 = *((__int16 *)MEMORY[0xB0FB08] + 2); /*0x72fccd*/
  v9 = a1 - v7; /*0x72fcd1*/
  v10 = __2_YAPAXI_Z(0x10u); /*0x72fcd3*/
  if ( v10 ) /*0x72fcdd*/
  {
    *v10 = v9; /*0x72fcdf*/
    v10[1] = 0; /*0x72fce1*/
    v10[2] = v7; /*0x72fce4*/
    v10[3] = v8; /*0x72fce7*/
    MEMORY[0xB0FC34] = v10; /*0x72fcea*/
  }
  else
  {
    MEMORY[0xB0FC34] = 0; /*0x72fcf1*/
  }
  v11 = *((__int16 *)MEMORY[0xB0F9E0] + 2); /*0x72fcfe*/
  v12 = __2_YAPAXI_Z(0x10u); /*0x72fd02*/
  if ( v12 ) /*0x72fd0c*/
  {
    *v12 = v9; /*0x72fd0e*/
    v12[1] = v8; /*0x72fd10*/
    v12[2] = v7; /*0x72fd13*/
    v12[3] = v11; /*0x72fd16*/
    MEMORY[0xB0FC38] = v12; /*0x72fd19*/
  }
  else
  {
    MEMORY[0xB0FC38] = 0; /*0x72fd20*/
  }
  v13 = v11 + v8; /*0x72fd30*/
  v14 = *((__int16 *)MEMORY[0xB0FA68] + 2); /*0x72fd34*/
  v15 = __2_YAPAXI_Z(0x10u); /*0x72fd38*/
  if ( v15 ) /*0x72fd42*/
  {
    *v15 = v9; /*0x72fd44*/
    v15[1] = v13; /*0x72fd46*/
    v15[2] = v7; /*0x72fd49*/
    v15[3] = v14; /*0x72fd4c*/
    MEMORY[0xB0FC3C] = v15; /*0x72fd4f*/
  }
  else
  {
    MEMORY[0xB0FC3C] = 0; /*0x72fd56*/
  }
  v16 = v14 + v13; /*0x72fd66*/
  v17 = *((__int16 *)MEMORY[0xB0FA70] + 2); /*0x72fd6a*/
  v18 = __2_YAPAXI_Z(0x10u); /*0x72fd6e*/
  if ( v18 ) /*0x72fd78*/
  {
    *v18 = v9; /*0x72fd7a*/
    v18[1] = v16; /*0x72fd7c*/
    v18[2] = v7; /*0x72fd7f*/
    v18[3] = v17; /*0x72fd82*/
    MEMORY[0xB0FC44] = v18; /*0x72fd85*/
  }
  else
  {
    MEMORY[0xB0FC44] = 0; /*0x72fd8c*/
  }
  v19 = v17 + v16; /*0x72fd9b*/
  v20 = *((__int16 *)MEMORY[0xB0FAFC] + 2); /*0x72fd9f*/
  v21 = __2_YAPAXI_Z(0x10u); /*0x72fda3*/
  if ( v21 ) /*0x72fdad*/
  {
    *v21 = v9; /*0x72fdaf*/
    v21[1] = v19; /*0x72fdb1*/
    v21[2] = v7; /*0x72fdb4*/
    v21[3] = v20; /*0x72fdb7*/
    MEMORY[0xB0FC48] = v21; /*0x72fdba*/
  }
  else
  {
    MEMORY[0xB0FC48] = 0; /*0x72fdc1*/
  }
  v22 = *((__int16 *)MEMORY[0xB0FA8C] + 2); /*0x72fdd3*/
  v23 = __2_YAPAXI_Z(0x10u); /*0x72fdd7*/
  if ( v23 ) /*0x72fde1*/
  {
    *v23 = v9; /*0x72fde3*/
    v23[1] = v19; /*0x72fde5*/
    v23[2] = v7; /*0x72fde8*/
    v23[3] = v22; /*0x72fdeb*/
    MEMORY[0xB0FC4C] = v23; /*0x72fdee*/
  }
  else
  {
    MEMORY[0xB0FC4C] = 0; /*0x72fdf5*/
  }
  v24 = *((__int16 *)MEMORY[0xB0FA48] + 2); /*0x72fe07*/
  v25 = __2_YAPAXI_Z(0x10u); /*0x72fe0b*/
  if ( v25 ) /*0x72fe15*/
  {
    *v25 = v9; /*0x72fe17*/
    v25[1] = v19; /*0x72fe19*/
    v25[2] = v7; /*0x72fe1c*/
    v25[3] = v24; /*0x72fe1f*/
    MEMORY[0xB0FC50] = v25; /*0x72fe22*/
  }
  else
  {
    MEMORY[0xB0FC50] = 0; /*0x72fe29*/
  }
  MEMORY[0xB0FADC] = (a2 /*0x72fe7a*/
                    - *((_DWORD *)MEMORY[0xB0FC4C] + 3)
                    - *((_DWORD *)MEMORY[0xB0FC44] + 3)
                    - *((_DWORD *)MEMORY[0xB0FC3C] + 3)
                    - *((_DWORD *)MEMORY[0xB0FC38] + 3)
                    - *((_DWORD *)MEMORY[0xB0FC34] + 3))
                   / *((_DWORD *)MEMORY[0xB0FC48] + 3);
  v26 = *((_DWORD *)MEMORY[0xB0FC48] + 3) * MEMORY[0xB0FADC] + v19; /*0x72fe83*/
  *((_DWORD *)MEMORY[0xB0FC4C] + 1) = v26; /*0x72fe85*/
  v27 = v26 + *((_DWORD *)MEMORY[0xB0FC4C] + 3); /*0x72fe96*/
  v28 = a2 - 32; /*0x72fe98*/
  *((_DWORD *)MEMORY[0xB0FC50] + 1) = v27; /*0x72fe9b*/
  v29 = MEMORY[0xA8EB84] - 168; /*0x72fea4*/
  v30 = __2_YAPAXI_Z(0x10u); /*0x72feaa*/
  if ( v30 ) /*0x72feb6*/
  {
    *v30 = 0; /*0x72feb8*/
    v30[1] = v28; /*0x72feba*/
    v30[2] = v29; /*0x72febd*/
    v30[3] = 32; /*0x72fec0*/
    MEMORY[0xB0FC58] = v30; /*0x72fec7*/
  }
  else
  {
    MEMORY[0xB0FC58] = 0; /*0x72fece*/
  }
  v31 = *((__int16 *)MEMORY[0xB0FA3C] + 1); /*0x72fedb*/
  v32 = *((__int16 *)MEMORY[0xB0FA3C] + 2); /*0x72fedf*/
  v33 = __2_YAPAXI_Z(0x10u); /*0x72fee3*/
  if ( v33 ) /*0x72feed*/
  {
    *v33 = 0; /*0x72feef*/
    v33[1] = v28; /*0x72fef1*/
    v33[2] = v31; /*0x72fef4*/
    v33[3] = v32; /*0x72fef7*/
    MEMORY[0xB0FC5C] = v33; /*0x72fefa*/
  }
  else
  {
    MEMORY[0xB0FC5C] = 0; /*0x72ff01*/
  }
  v34 = *((__int16 *)MEMORY[0xB0FA90] + 1); /*0x72ff0e*/
  v35 = *((__int16 *)MEMORY[0xB0FA90] + 2); /*0x72ff12*/
  v36 = __2_YAPAXI_Z(0x10u); /*0x72ff16*/
  if ( v36 ) /*0x72ff20*/
  {
    *v36 = 0; /*0x72ff22*/
    v36[1] = v28; /*0x72ff24*/
    v36[2] = v34; /*0x72ff27*/
    v36[3] = v35; /*0x72ff2a*/
    MEMORY[0xB0FC60] = v36; /*0x72ff2d*/
  }
  else
  {
    MEMORY[0xB0FC60] = 0; /*0x72ff34*/
  }
  v37 = __2_YAPAXI_Z(0x10u); /*0x72ff3c*/
  if ( v37 ) /*0x72ff46*/
  {
    *v37 = 0; /*0x72ff48*/
    v37[1] = v28; /*0x72ff4a*/
    v37[2] = v34; /*0x72ff4d*/
    v37[3] = v35; /*0x72ff50*/
    MEMORY[0xB0FC64] = v37; /*0x72ff53*/
  }
  else
  {
    MEMORY[0xB0FC64] = 0; /*0x72ff5a*/
  }
  v38 = *((__int16 *)MEMORY[0xB0FAA8] + 1); /*0x72ff67*/
  v39 = *((__int16 *)MEMORY[0xB0FAA8] + 2); /*0x72ff6b*/
  v40 = __2_YAPAXI_Z(0x10u); /*0x72ff6f*/
  if ( v40 ) /*0x72ff79*/
  {
    *v40 = 0; /*0x72ff7b*/
    v40[1] = v28; /*0x72ff7d*/
    v40[2] = v38; /*0x72ff80*/
    v40[3] = v39; /*0x72ff83*/
    MEMORY[0xB0FC68] = v40; /*0x72ff86*/
  }
  else
  {
    MEMORY[0xB0FC68] = 0; /*0x72ff8d*/
  }
  v41 = *((__int16 *)MEMORY[0xB0FABC] + 1); /*0x72ff9a*/
  v42 = *((__int16 *)MEMORY[0xB0FABC] + 2); /*0x72ff9e*/
  v43 = (int *)__2_YAPAXI_Z(0x10u); /*0x72ffa2*/
  if ( v43 ) /*0x72ffac*/
  {
    *v43 = 0; /*0x72ffae*/
    v43[1] = v28; /*0x72ffb0*/
    v43[2] = v41; /*0x72ffb3*/
    v43[3] = v42; /*0x72ffb6*/
    v44 = v43; /*0x72ffb9*/
  }
  else
  {
    v44 = 0; /*0x72ffbd*/
  }
  MEMORY[0xB0FC6C] = v44; /*0x72ffc9*/
  MEMORY[0xB0F9E4] = (a1 - *((_DWORD *)MEMORY[0xB0FC60] + 2) - *((_DWORD *)MEMORY[0xB0FC34] + 2) - v44[2]) /*0x72ffee*/
                   / *((_DWORD *)MEMORY[0xB0FC68] + 2);
  v45 = *(_DWORD *)MEMORY[0xB0FC34] - v44[2]; /*0x72fff5*/
  *v44 = v45; /*0x72fff8*/
  v46 = v45 - MEMORY[0xB0F9E4] * *((_DWORD *)MEMORY[0xB0FC68] + 2); /*0x73000a*/
  *(_DWORD *)MEMORY[0xB0FC68] = v46; /*0x73000c*/
  v47 = v46 - *((_DWORD *)MEMORY[0xB0FC60] + 2); /*0x730014*/
  *(_DWORD *)MEMORY[0xB0FC60] = v47; /*0x730017*/
  MEMORY[0xB0FAD8] = v47; /*0x73001f*/
  v48 = *(_DWORD *)MEMORY[0xB0FC6C] - *((_DWORD *)MEMORY[0xB0FC64] + 2); /*0x73002e*/
  *(_DWORD *)MEMORY[0xB0FC64] = v48; /*0x730030*/
  MEMORY[0xB0FAA4] = v48; /*0x730038*/
  MEMORY[0xB0FA78] = *(_DWORD *)MEMORY[0xB0FC6C] - *((_DWORD *)MEMORY[0xB0FC60] + 2) - *(_DWORD *)MEMORY[0xB0FC60]; /*0x730058*/
  v49 = *(_DWORD *)MEMORY[0xB0FC38]; /*0x730064*/
  v50 = *((_DWORD *)MEMORY[0xB0FC38] + 1); /*0x730066*/
  v51 = *((_DWORD *)MEMORY[0xB0FC38] + 2); /*0x730069*/
  v52 = *((_DWORD *)MEMORY[0xB0FC38] + 3) + *((_DWORD *)MEMORY[0xB0FC3C] + 3); /*0x73006c*/
  v53 = __2_YAPAXI_Z(0x10u); /*0x73006e*/
  if ( v53 ) /*0x730078*/
  {
    *v53 = v49; /*0x73007a*/
    v53[1] = v50; /*0x73007c*/
    v53[2] = v51; /*0x73007f*/
    v53[3] = v52; /*0x730082*/
    MEMORY[0xB0FC40] = v53; /*0x730085*/
  }
  else
  {
    MEMORY[0xB0FC40] = 0; /*0x73008c*/
  }
  v54 = *(_DWORD *)MEMORY[0xB0FC44]; /*0x7300b9*/
  v55 = *((_DWORD *)MEMORY[0xB0FC44] + 1); /*0x7300bb*/
  v56 = *((_DWORD *)MEMORY[0xB0FC44] + 2); /*0x7300be*/
  v57 = *((_DWORD *)MEMORY[0xB0FC44] + 3) /*0x7300c3*/
      + *((_DWORD *)MEMORY[0xB0FC4C] + 3)
      + MEMORY[0xB0FADC] * *((_DWORD *)MEMORY[0xB0FC48] + 3);
  result = __2_YAPAXI_Z(0x10u); /*0x7300c5*/
  if ( result ) /*0x7300cf*/
  {
    *result = v54; /*0x7300d1*/
    result[3] = v57; /*0x7300d3*/
    result[2] = v56; /*0x7300d7*/
    result[1] = v55; /*0x7300db*/
    MEMORY[0xB0FC54] = result; /*0x7300df*/
  }
  else
  {
    MEMORY[0xB0FC54] = 0; /*0x7300ec*/
  }
  return result; /*0x7300d6*/
}

