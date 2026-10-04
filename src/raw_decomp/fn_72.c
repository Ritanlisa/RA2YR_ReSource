// GENERATED raw decompilation, this-relative refs rewritten to this->Member
// by tools/csp_export/rewrite_member_refs.py (mechanical, CSP member table).
// REFERENCE ONLY - not compiled. Width-matched rewrites; unmatched kept raw.

// ==== 0x00720020  TextButtonClass::getCurrentWeapon  this=TextButtonClass  sig=csp ====
char __thiscall AbstractClass::getCurrentWeapon(TextButtonClass *this, int a2, char a3)
{
  int v4; // edx
  int v5; // eax
  int Instance; // edi

  v4 = *(_DWORD *)this->__pad_0; /*0x720027*/
  this->field_38 = a2; /*0x720029*/
  (*(void (**)(void))(v4 + 72))(); /*0x72002c*/
  LOBYTE(v5) = a3; /*0x72002f*/
  if ( a3 ) /*0x720035*/
  {
    v5 = this->field_38; /*0x720037*/
    if ( v5 ) /*0x72003c*/
    {
      Instance = TextRenderer::GetInstance(); /*0x720047*/
      v5 = Text::MeasureWidth(this->field_38, 0) + 8; /*0x720056*/
      *(_DWORD *)&this->__pad_0[20] = v5; /*0x720059*/
      *(_DWORD *)&this->__pad_0[24] = *(_DWORD *)(Instance + 28) + 2; /*0x720063*/
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
      v3 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)&stru_B054D0.m_1[3] + 4 * BuildingAnim::GetType()) + 780); /*0x720099*/
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
      (*(void (__thiscall **)(AudioStream *, int *, int))(*(_DWORD *)g_DSurface_Hidden_2->__pad_0 + 88))( /*0x7200f7*/
        g_DSurface_Hidden_2,
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
    if ( *(_DWORD *)stru_B054D0.__tail_10 ) /*0x720181*/
    {
      if ( (int)result <= 0 || (int)result >= *(int *)stru_B054D0.__tail_10 ) /*0x720189*/
        result = 0; /*0x72018b*/
      result = *(int **)(*(_DWORD *)&stru_B054D0.m_1[3] + 4 * (_DWORD)result); /*0x720193*/
      if ( result ) /*0x720198*/
      {
        v9[0] = (*(int *)&this->__pad_0[20] >> 1) + *(_DWORD *)&this->__pad_0[12] - 1; /*0x7201a9*/
        v9[1] = *(_DWORD *)&this->__pad_0[16] + 1; /*0x7201b1*/
        v5 = v4 | this->u32_3C; /*0x7201b8*/
        BYTE1(v5) |= 1u; /*0x7201be*/
        v8 = v5; /*0x7201c1*/
        v7 = result; /*0x7201ca*/
        v6 = (_DWORD *)(*(int (__thiscall **)(AudioStream *, _BYTE *))(*(_DWORD *)g_DSurface_Hidden_2->__pad_0 + 120))( /*0x7201d3*/
                         g_DSurface_Hidden_2,
                         v11);
        return globalHelper_0A6010(&v10, a2, (int)g_DSurface_Hidden_2, v6, (int)v9, (int)v7, 0, v8, 1); /*0x7201e5*/
      }
    }
  }
  return result; /*0x7201eb*/
}



// ==== 0x00720200  TextButtonClass::reloadWeapon  this=TextButtonClass  sig=csp ====
int __thiscall AbstractClass::reloadWeapon(TextButtonClass *this, int a2)
{
  this->u32_3C = a2; /*0x720204*/
  return a2; /*0x720207*/
}



// ==== 0x00720210  TextButtonClass::checkAmmunition  this=TextButtonClass  sig=csp ====
_DWORD *__thiscall AbstractClass::checkAmmunition(TextButtonClass *this, char a2)
{
  GadgetClass::Dtor((GadgetClass *)this); /*0x720213*/
  if ( (a2 & 1) != 0 ) /*0x72021d*/
    __3_YAXPAX_Z(this); /*0x720220*/
  return this->__pad_0; /*0x72022a*/
}



// ==== 0x00720230  sub_720230  this=-  sig=ida-proto ====
void sub_720230()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x72023c*/
  *(double *)&unk_B0F1F8[544] = Math::Sqrt(v0 + v0); /*0x72024e*/
}



// ==== 0x00720260  sub_720260  this=-  sig=ida-proto ====
void sub_720260()
{
  *(double *)&unk_B0F1F8[624] = *(double *)&unk_B0F1F8[544] / 60.0; /*0x72026c*/
}



// ==== 0x00720280  sub_720280  this=-  sig=ida-proto ====
void sub_720280()
{
  *(double *)&unk_B0F1F8[600] = 1.0 / *(double *)&unk_B0F1F8[624]; /*0x72028c*/
}



// ==== 0x007202A0  sub_7202A0  this=-  sig=ida-proto ====
void sub_7202A0()
{
  *(double *)&unk_B0F1F8[592] = 0.0174532925199433 * 45.0; /*0x7202ac*/
}



// ==== 0x007202C0  sub_7202C0  this=-  sig=ida-proto ====
void sub_7202C0()
{
  *(double *)&unk_B0F1F8[552] = 0.0174532925199433 * 60.0; /*0x7202cc*/
}



// ==== 0x007202E0  sub_7202E0  this=-  sig=ida-proto ====
void sub_7202E0()
{
  *(double *)&unk_B0F1F8[512] = 0.0174532925199433 * 90.0; /*0x7202ec*/
}



// ==== 0x00720300  sub_720300  this=-  sig=ida-proto ====
__int64 sub_720300()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(*(double *)&unk_B0F1F8[512] - *(double *)&unk_B0F1F8[552]); /*0x720312*/
  result = Math::RoundToInt(v0 * *(double *)&unk_B0F1F8[544] * 0.5); /*0x720326*/
  *(_DWORD *)&unk_B0F1F8[632] = result; /*0x72032b*/
  return result; /*0x720330*/
}



// ==== 0x00720340  sub_720340  this=-  sig=ida-proto ====
void sub_720340()
{
  *(double *)&unk_B0F1F8[560] = Math::ArcTan((double)*(int *)&unk_B0F1F8[632] * 0.00390625); /*0x720357*/
}



// ==== 0x00720370  sub_720370  this=-  sig=ida-proto ====
void sub_720370()
{
  *(double *)&unk_B0F1F8[584] = Math::ArcTan((double)(2 * *(_DWORD *)&unk_B0F1F8[632]) / *(double *)&unk_B0F1F8[544]); /*0x720392*/
}



// ==== 0x007203A0  sub_7203A0  this=-  sig=ida-proto ====
__int64 sub_7203A0()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * *(_DWORD *)&unk_B0F1F8[632]) + 0.5); /*0x7203bb*/
  *(_DWORD *)&unk_B0F1F8[620] = result; /*0x7203c0*/
  return result; /*0x7203c6*/
}



// ==== 0x007203D0  sub_7203D0  this=-  sig=ida-proto ====
int sub_7203D0()
{
  *(_WORD *)&unk_B0F1F8[536] = 0; /*0x7203d2*/
  *(_WORD *)&unk_B0F1F8[538] = 0; /*0x7203d8*/
  return 0; /*0x7203de*/
}



// ==== 0x007203E0  sub_7203E0  this=-  sig=ida-proto ====
int sub_7203E0()
{
  *(_DWORD *)&unk_B0F1F8[568] = 0; /*0x7203e2*/
  *(_DWORD *)&unk_B0F1F8[572] = 0; /*0x7203e7*/
  *(_DWORD *)&unk_B0F1F8[576] = 0; /*0x7203ec*/
  return 0; /*0x7203f1*/
}



// ==== 0x00720400  sub_720400  this=-  sig=ida-proto ====
int sub_720400()
{
  *(_DWORD *)&unk_B0F1F8[616] = 0; /*0x720405*/
  *(_DWORD *)&unk_B0F1F8[608] = 128; /*0x72040f*/
  *(_DWORD *)&unk_B0F1F8[612] = 128; /*0x720414*/
  return 128; /*0x720419*/
}



// ==== 0x00720420  sub_720420  this=-  sig=ida-proto ====
int sub_720420()
{
  *(_DWORD *)&unk_B0F1F8[520] = 0; /*0x720422*/
  *(_DWORD *)&unk_B0F1F8[524] = 0; /*0x720427*/
  *(_DWORD *)&unk_B0F1F8[528] = 0; /*0x72042c*/
  *(_DWORD *)&unk_B0F1F8[532] = 0; /*0x720431*/
  return 0; /*0x720436*/
}



// ==== 0x00720440  ObjectClass::method  this=ObjectClass  sig=csp ====
_DWORD *__thiscall sub_720440(TechnoClass *this)
{
  this->owningHouseIndex0 = 0; /*0x720444*/
  this->chronoLockRemaining = 0; /*0x72044a*/
  LOBYTE(this->chronoDestCoords[0]) = 1; /*0x720450*/
  BYTE1(this->chronoDestCoords[0]) = 0; /*0x720457*/
  BYTE2(this->chronoDestCoords[0]) = 0; /*0x72045d*/
  this->chronoDestCoords[1] = -1; /*0x720463*/
  LOBYTE(this->vtable0) = 0; /*0x72046d*/
  LOBYTE(this->animation[2]) = 0; /*0x72046f*/
  LOWORD(this->reloadTimer[1]) = 0; /*0x720475*/
  return &this->vtable0; /*0x72047c*/
}



// ==== 0x00720480  ThemeClass::ReadThemeEntry  this=ThemeClass  sig=csp ====
char __thiscall ThemeClass::ReadThemeEntry(int this, unsigned __int8 ***a2)
{
  const char *v3; // edi
  int Int_Overwrite; // eax
  char Bool_Overwrite; // al
  int v6; // ecx
  char v8; // [esp-Ch] [ebp-14h]

  INIClass::ResetSection((INIClass *)a2); /*0x72048a*/
  if ( !INIClass::BinarySearchSection((int)a2, (unsigned __int8 *)this) ) /*0x720492*/
    return 0; /*0x720584*/
  v3 = (const char *)(this + 256); /*0x7204a6*/
  INIClass::GetString((INIClass *)a2, (unsigned __int8 *)this, aSound, &g_INI_DefaultBuffer, (char *)(this + 256), 256); /*0x7204bf*/
  while ( *v3 == 36 || *v3 == 35 ) /*0x7204cc*/
    ++v3; /*0x7204ce*/
  strcpy((char *)(this + 256), v3); /*0x7204e9*/
  Int_Overwrite = INIClass::ReadInt_Overwrite((bool *)a2, (unsigned __int8 *)this, aScenario, *(_DWORD *)(this + 640)); /*0x720501*/
  v8 = *(_BYTE *)(this + 648); /*0x72050e*/
  *(_DWORD *)(this + 640) = Int_Overwrite; /*0x720515*/
  *(_BYTE *)(this + 648) = INIClass::ReadBool_Overwrite((int *)a2, (unsigned __int8 *)this, g_INI_Key_Normal, v8); /*0x720520*/
  Bool_Overwrite = INIClass::ReadBool_Overwrite((int *)a2, (unsigned __int8 *)this, aRepeat, *(_BYTE *)(this + 649)); /*0x720535*/
  v6 = *(_DWORD *)(this + 652); /*0x72053a*/
  *(_BYTE *)(this + 649) = Bool_Overwrite; /*0x720540*/
  *(_DWORD *)(this + 652) = HouseTypeClass::loadCountryData( /*0x720554*/
                              (HouseTypeClass *)a2,
                              (unsigned __int8 *)this,
                              (unsigned __int8 *)aSide,
                              v6);
  if ( *(_BYTE *)(this + 648) ) /*0x72055a*/
    INIClass::GetStringEx( /*0x720577*/
      (int)a2,
      (unsigned __int8 *)this,
      (unsigned __int8 *)g_INI_Key_Name,
      (wchar_t *)(this + 512),
      0x40u);
  return 1; /*0x72057c*/
}



// ==== 0x00720590  ThemeClass::InitializeThemes  this=INIClass  sig=csp ====
void *__thiscall sub_720590(int this, char *a2)
{
  char *v2; // edi
  int KeyCount; // ebp
  int v5; // esi
  unsigned __int8 *StringByIndex; // eax
  int v7; // esi
  _DWORD *v8; // eax
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
           (unsigned __int8 *)g_INI_Key_Themes,
           StringByIndex,
           &g_INI_DefaultBuffer,
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
        v8 = __2_YAPAXI_Z(0x290u); /*0x720637*/
        v9 = 0; /*0x720641*/
        if ( v8 ) /*0x720648*/
        {
          v8[160] = 0; /*0x72064a*/
          v8[161] = 0; /*0x720650*/
          *((_WORD *)v8 + 256) = 0; /*0x720656*/
          *((_BYTE *)v8 + 648) = 1; /*0x72065d*/
          *((_BYTE *)v8 + 649) = 0; /*0x720664*/
          *((_BYTE *)v8 + 650) = 0; /*0x72066b*/
          v8[163] = -1; /*0x720672*/
          *(_BYTE *)v8 = 0; /*0x72067c*/
          *((_BYTE *)v8 + 256) = 0; /*0x72067f*/
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
      AudioQueue::IsEmpty(*(_DWORD *)(this + 44), g_MixerChannel_Theme); /*0x72074c*/
      return (void *)AudioQueue::IsNotEmpty(*(_DWORD *)(this + 44), g_MixerChannel_Stream); /*0x72075a*/
    }
  }
  return result; /*0x72075f*/
}



// ==== 0x00720770  ThemeManager::Cleanup  this=ThemeManager  sig=csp ====
void __thiscall ThemeManager::Cleanup(ThemeManager *this)
{
  int v2; // eax
  int v3; // ecx
  int v4; // eax
  ThemeClass *v5; // ecx

  while ( *((int *)this + 9) > 0 ) /*0x720778*/
  {
    __3_YAXPAX_Z(**((void ***)this + 6)); /*0x720780*/
    v2 = this->q024; /*0x720785*/
    if ( v2 > 0 ) /*0x72078d*/
    {
      v3 = v2 - 1; /*0x72078f*/
      v4 = 0; /*0x720792*/
      for ( this->q024 = v3; /*0x720799*/
            v4 < this->q024;
            *(_DWORD *)(this->u32_18 + 4 * v4 - 4) = *(_DWORD *)(this->u32_18 + 4 * v4) )
      {
        ++v4; /*0x72079e*/
      }
    }
  }
  v5 = (ThemeClass *)this->u32_2C; /*0x7207b4*/
  if ( v5 ) /*0x7207b9*/
  {
    ThemeClass::RequestBuffer(v5); /*0x7207bb*/
    ThemeManager::ProcessCallback(*((ThemeManager **)this + 11)); /*0x7207c3*/
    Audio::Release(*((Audio **)this + 11)); /*0x7207cb*/
    AudioSample::Destructor(*((AudioSample **)this + 11)); /*0x7207d3*/
    this->u32_2C = 0; /*0x7207d8*/
  }
}



// ==== 0x007207F0  Audio::LoadWAVFiles  this=Audio  sig=csp ====
char __thiscall Audio::LoadWAVFiles(Audio *this)
{
  int IsSoundEnabled; // eax
  int i; // ebx
  int v4; // ebp
  _DWORD *v5; // ebp
  unsigned __int64 v6; // rax
  size_t v8[2]; // [esp+8h] [ebp-294h] BYREF
  Struct v9[8]; // [esp+10h] [ebp-28Ch] BYREF
  CCFileClass v10; // [esp+30h] [ebp-26Ch] BYREF
  int v11[3]; // [esp+88h] [ebp-214h] BYREF
  int v12; // [esp+94h] [ebp-208h]
  char Buffer[512]; // [esp+9Ch] [ebp-200h] BYREF

  LOBYTE(IsSoundEnabled) = stru_A8EB00.?[144]; /*0x7207f0*/
  if ( stru_A8EB00.?[144] ) /*0x720801*/
  {
    IsSoundEnabled = Audio::IsSoundEnabled(); /*0x720807*/
    if ( IsSoundEnabled ) /*0x72080e*/
    {
      LOBYTE(IsSoundEnabled) = stru_A8EB00.?[384]; /*0x720814*/
      if ( !stru_A8EB00.?[384] ) /*0x72081b*/
      {
        IsSoundEnabled = *(_DWORD *)&this->__pad_18[12]; /*0x720821*/
        for ( i = 0; i < IsSoundEnabled; ++i ) /*0x720828*/
        {
          _makepath(Buffer, 0, 0, (const char *)(*(_DWORD *)(*(_DWORD *)this->__pad_18 + 4 * i) + 256), g_Str_File__WAV); /*0x720855*/
          CCFileClass::Construct(&v10, Buffer); /*0x720869*/
          v4 = 4 * i + *(_DWORD *)this->__pad_18; /*0x720877*/
          *(_BYTE *)(*(_DWORD *)v4 + 650) = CCFileClass::Open(&v10, 0); /*0x720881*/
          if ( *(_BYTE *)(*(_DWORD *)(*(_DWORD *)this->__pad_18 + 4 * i) + 650) ) /*0x72088d*/
          {
            Struct::ZeroInit32(v9); /*0x72089b*/
            FileClass::Load(&v10, (const CHAR *)1); /*0x7208a6*/
            if ( ParseWaveFileHeader((int)&v10, v9, v8) ) /*0x7208b8*/
            {
              v5 = (_DWORD *)(4 * i + *(_DWORD *)this->__pad_18); /*0x7208cc*/
              v6 = sub_408560((int)v9, v8[0]) / 0x3E8; /*0x7208dc*/
              HIDWORD(v6) = *v5; /*0x7208e1*/
              v8[1] = v6; /*0x7208e4*/
              *(float *)(HIDWORD(v6) + 644) = (float)(int)v6; /*0x7208ec*/
            }
          }
          *(_DWORD *)v10.CDFileClass = &CCFileClass::`vftable'; /*0x7208f9*/
          v12 = 0; /*0x720901*/
          Vector::Clear((int)v11); /*0x72090c*/
          *(_DWORD *)v10.CDFileClass = &off_7E1668; /*0x720915*/
          BufferIOFileClass::Dtor((BufferIOFileClass *)&v10); /*0x72091d*/
          IsSoundEnabled = *(_DWORD *)&this->__pad_18[12]; /*0x720922*/
        }
      }
    }
  }
  return IsSoundEnabled; /*0x720930*/
}



// ==== 0x00720940  ScenarioClass::processEndgame  this=ScenarioClass  sig=csp ====
char *__thiscall ScenarioClass::processEndgame(ScenarioClass *this, unsigned int a2)
{
  if ( a2 >= this->nextScenario[9] ) /*0x720949*/
    return aNoTheme; /*0x720954*/
  else
    return *(char **)(this->nextScenario[6] + 4 * a2); /*0x72094e*/
}



// ==== 0x00720960  ObjectClass::method  this=ObjectClass  sig=csp ====
_DWORD *__thiscall sub_720960(ObjectClass *this)
{
  this->AbstractClass = (void *)-1; /*0x720965*/
  this->? = (void *)-1; /*0x720967*/
  this->? = (void *)-1; /*0x72096a*/
  this->? = (void *)255; /*0x72096f*/
  LOBYTE(this->?) = 0; /*0x720976*/
  BYTE1(this->?) = 0; /*0x720979*/
  BYTE2(this->?) = 0; /*0x72097c*/
  this->? = 0; /*0x72097f*/
  this->? = 0; /*0x720982*/
  LOBYTE(this->?) = 1; /*0x720985*/
  BYTE1(this->?) = 0; /*0x720989*/
  this->? = (int)&DynamicVectorClass<ThemeControl *>::`vftable'; /*0x72098c*/
  this->owningHouseIndex = 10; /*0x720993*/
  this->occupant = 0; /*0x72099a*/
  this->fallRate = 0; /*0x72099d*/
  return &this->AbstractClass; /*0x7209a0*/
}



// ==== 0x007209B0  AudioSettings::Check  this=AudioSettings  sig=csp ====
int __thiscall AudioSettings::Check(AudioSettings *this, unsigned int a2)
{
  if ( a2 >= *((_DWORD *)this + 9) ) /*0x7209b9*/
    return 0; /*0x7209c9*/
  else
    return *(_DWORD *)(*((_DWORD *)this + 6) + 4 * a2) + 512; /*0x7209c1*/
}



// ==== 0x007209D0  Movie::Update  this=Movie  sig=csp ====
char __thiscall Movie::Update(Movie *this)
{
  void *IsSoundEnabled; // eax
  AudioSample *v3; // ecx

  IsSoundEnabled = (void *)Audio::IsSoundEnabled(); /*0x7209d3*/
  if ( IsSoundEnabled ) /*0x7209da*/
  {
    LOBYTE(IsSoundEnabled) = stru_A8EB00.?[384]; /*0x7209e0*/
    if ( !stru_A8EB00.?[384] ) /*0x7209e7*/
    {
      LOBYTE(IsSoundEnabled) = stru_A8EB00.?[144]; /*0x7209ed*/
      if ( stru_A8EB00.?[144] ) /*0x7209f4*/
      {
        IsSoundEnabled = this->Movie_field_0xC; /*0x7209fa*/
        if ( (int)IsSoundEnabled > 0 ) /*0x7209ff*/
        {
          v3 = *(AudioSample **)&this->__pad_28[4]; /*0x720a01*/
          if ( !v3 ) /*0x720a06*/
            goto LABEL_10; /*0x720a06*/
          if ( this->__pad_10[1] && !AudioSample::IsBuffering(v3) ) /*0x720a0f*/
            Audio::Release(*(Audio **)&this->__pad_28[4]); /*0x720a1b*/
          LOBYTE(IsSoundEnabled) = Audio::IsSoundPlaying(*(Audio **)&this->__pad_28[4]) != 0; /*0x720a2a*/
          if ( !(_BYTE)IsSoundEnabled ) /*0x720a2f*/
          {
LABEL_10:
            IsSoundEnabled = (void *)this->Movie_field_0x8; /*0x720a31*/
            if ( IsSoundEnabled != (void *)-1 && IsSoundEnabled != (void *)-3 && !dword_A8E7AC ) /*0x720a46*/
            {
              if ( IsSoundEnabled == (void *)-2 ) /*0x720a4b*/
              {
                this->Movie_field_0x8 = Movie::SelectNextBuildableType((int)this, (int)this->Movie_field_0x4); /*0x720a5e*/
                Debug::Log(); /*0x720a61*/
              }
              LOBYTE(IsSoundEnabled) = ThemeClass::Play((ThemeClass *)this, this->Movie_field_0x8); /*0x720a6f*/
              this->Movie_field_0x8 = -2; /*0x720a74*/
            }
          }
        }
      }
    }
  }
  return (char)IsSoundEnabled; /*0x720a7b*/
}



// ==== 0x00720A80  Movie::SelectNextBuildableType  this=Movie  sig=csp ====
unsigned int __thiscall Movie::SelectNextBuildableType(int this, int a2)
{
  unsigned int v2; // ebp
  int v4; // edi
  unsigned int v5; // eax
  unsigned int v6; // ebx
  bool v7; // zf
  int v9; // edi

  v2 = a2; /*0x720a81*/
  if ( (a2 <= -1 || *(_BYTE *)(*(_DWORD *)(*(_DWORD *)(this + 24) + 4 * a2) + 649) || *(_BYTE *)(this + 16)) && a2 >= 0 ) /*0x720aa7*/
    return v2; /*0x720b18*/
  if ( *(_BYTE *)(this + 18) == 1 ) /*0x720aad*/
  {
    v4 = 0; /*0x720ab0*/
    while ( 1 ) /*0x720abe*/
    {
      v5 = Random::Range(&Randomizer_Global, 0, *(_DWORD *)(this + 36) - 1); /*0x720abe*/
      ++v4; /*0x720ac3*/
      v6 = v5; /*0x720ac4*/
      v7 = v4 == 1000; /*0x720ac6*/
      if ( v4 >= 1000 ) /*0x720acc*/
        break; /*0x720acc*/
      if ( v5 != a2 && (unsigned __int8)RulesClass::IsTypeBuildable((RulesClass *)this, v5) ) /*0x720ad5*/
      {
        v7 = v4 == 1000; /*0x720ade*/
        break; /*0x720ade*/
      }
    }
    if ( v7 ) /*0x720ae4*/
      return 0; /*0x720ae6*/
    return v6; /*0x720ae8*/
  }
  else
  {
    v9 = *(_DWORD *)(this + 36) + 1; /*0x720af4*/
    while ( 1 ) /*0x720af8*/
    {
      if ( (signed int)++v2 >= *(_DWORD *)(this + 36) ) /*0x720afb*/
        v2 = 0; /*0x720afd*/
      if ( !--v9 ) /*0x720b00*/
        break; /*0x720b00*/
      if ( (unsigned __int8)RulesClass::IsTypeBuildable((RulesClass *)this, v2) ) /*0x720b05*/
        return v2; /*0x720b0c*/
    }
    return 0; /*0x720b12*/
  }
}



// ==== 0x00720B20  Theme::QueueSong  this=Theme  sig=csp ====
char __thiscall Theme_QueueSong(int this, int a2)
{
  int IsSoundEnabled; // eax

  LOBYTE(IsSoundEnabled) = byte_A8EC74; /*0x720b20*/
  if ( byte_A8EC74 ) /*0x720b2a*/
  {
    IsSoundEnabled = Audio::IsSoundEnabled(); /*0x720b2c*/
    if ( IsSoundEnabled ) /*0x720b33*/
    {
      LOBYTE(IsSoundEnabled) = byte_A8ED64; /*0x720b35*/
      if ( !byte_A8ED64 ) /*0x720b3c*/
      {
        LOBYTE(IsSoundEnabled) = a2; /*0x720b3e*/
        *(_DWORD *)(this + 8) = a2; /*0x720b45*/
        if ( a2 != -1 && a2 != -2 && a2 != *(_DWORD *)(this + 4) ) /*0x720b52*/
        {
          LOBYTE(IsSoundEnabled) = Debug::Log("Theme::QueueSong(%d)\n", a2); /*0x720b5a*/
          if ( *(_DWORD *)(this + 44) ) /*0x720b5f*/
          {
            if ( *(_BYTE *)(this + 17) && !AudioSample::IsBuffering() ) /*0x720b70*/
              Audio::Release(*(_DWORD *)(this + 44)); /*0x720b7c*/
            LOBYTE(IsSoundEnabled) = Audio::IsSoundPlaying(*(_DWORD *)(this + 44)) != 0; /*0x720b8b*/
            if ( (_BYTE)IsSoundEnabled == 1 ) /*0x720b90*/
            {
              if ( *(_DWORD *)(this + 44) ) /*0x720b92*/
                LOBYTE(IsSoundEnabled) = ThemeClass::RequestBuffer(); /*0x720b99*/
              *(_BYTE *)(this + 17) = 1; /*0x720b9e*/
            }
          }
        }
      }
    }
  }
  return IsSoundEnabled; /*0x720ba2*/
}



// ==== 0x00720BB0  ThemeClass::Play  this=ThemeClass  sig=csp ====
int __thiscall ThemeClass::Play(ThemeClass *this, int a2)
{
  AudioSample *ThemeClass_field_2C; // ecx
  Audio *v4; // ecx
  int v5; // eax
  int v6; // ecx

  if ( stru_A8EB00.?[144] && Audio::IsSoundEnabled() && !stru_A8EB00.?[384] )
  {
    ThemeClass_field_2C = (AudioSample *)this->ThemeClass_field_2C; /*0x720bdc*/
    if ( !ThemeClass_field_2C ) /*0x720be5*/
      goto LABEL_13; /*0x720be5*/
    if ( BYTE1(this->m_Name[2]) && !AudioSample::IsBuffering(ThemeClass_field_2C) ) /*0x720bee*/
      Audio::Release((Audio *)this->ThemeClass_field_2C); /*0x720bfa*/
    if ( !Audio::IsSoundPlaying((Audio *)this->ThemeClass_field_2C) || this->ThemeClass_field_04 != a2 )
    {
LABEL_13:
      if ( stru_A8EB00.?[144] && Audio::IsSoundEnabled() && !stru_A8EB00.?[384] && this->ThemeClass_field_00 != -1 ) /*0x720c37*/
      {
        Debug::Log(); /*0x720c42*/
        v4 = (Audio *)this->ThemeClass_field_2C; /*0x720c47*/
        if ( v4 ) /*0x720c4f*/
          Audio::Release(v4); /*0x720c51*/
        this->ThemeClass_field_00 = -1; /*0x720c56*/
        this->ThemeClass_field_04 = -1; /*0x720c5c*/
        this->m_Name[0] = -1; /*0x720c63*/
      }
      BYTE1(this->m_Name[2]) = 0; /*0x720c6d*/
      if ( a2 != -1 && a2 != -3 )
      {
        if ( a2 <= -1 || this->m_Name[1] <= 0 ) /*0x720c8e*/
          goto LABEL_47; /*0x720c8e*/
        this->ThemeClass_field_04 = a2; /*0x720c94*/
        v5 = byte_89E3A0 ? 0 : Game::CheckForGameCD(0);
        v6 = this->ThemeClass_field_2C; /*0x720cab*/
        if ( v6 && v5 > -1 ) /*0x720cba*/
        {
          if ( (unsigned int)a2 >= this->m_Name[7] ) /*0x720cbf*/
          {
            ThreadAudioMixerMain((_DWORD *)this->ThemeClass_field_2C, &g_INI_DefaultBuffer, 1); /*0x720d02*/
          }
          else
          {
            _makepath( /*0x720cdc*/
              (char *)&g_BuildingLoadQueue_Array.?[72],
              0,
              0,
              (const char *)(*(_DWORD *)(this->m_Name[4] + 4 * a2) + 256),
              g_Str_File__WAV);
            ThreadAudioMixerMain((_DWORD *)this->ThemeClass_field_2C, (char *)&g_BuildingLoadQueue_Array.?[72], 1); /*0x720ced*/
          }
          this->ThemeClass_field_00 = a2; /*0x720cf2*/
        }
        else
        {
          this->ThemeClass_field_00 = -1; /*0x720d10*/
          if ( v6 ) /*0x720d16*/
          {
            if ( v5 <= -1 && this->m_Name[0] == -1 ) /*0x720d29*/
            {
              if ( stru_A8EB00.?[144] ) /*0x720d36*/
              {
                if ( Audio::IsSoundEnabled() ) /*0x720d3c*/
                {
                  if ( !stru_A8EB00.?[384] ) /*0x720d4c*/
                  {
                    dword_A83D18 = a2; /*0x720d51*/
                    if ( a2 != dword_A83D14 ) /*0x720d5f*/
                    {
                      Debug::Log(); /*0x720d67*/
                      if ( dword_A83D3C ) /*0x720d77*/
                      {
                        if ( byte_A83D21 && !AudioSample::IsBuffering(dword_A83D3C) ) /*0x720d82*/
                          Audio::Release((Audio *)dword_A83D3C); /*0x720d91*/
                        if ( Audio::IsSoundPlaying((Audio *)dword_A83D3C) != 0 ) /*0x720da3*/
                        {
                          if ( dword_A83D3C ) /*0x720db2*/
                            ThemeClass::RequestBuffer((ThemeClass *)dword_A83D3C); /*0x720db4*/
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
        if ( LOBYTE(this->m_Name[2]) == 1 || *(_BYTE *)(*(_DWORD *)(this->m_Name[4] + 4 * a2) + 649) == 1 ) /*0x720e03*/
LABEL_47:
          this->m_Name[0] = a2; /*0x720e05*/
      }
    }
  }
  return this->ThemeClass_field_00; /*0x720e0a*/
}



// ==== 0x00720E50  AudioSettings::ComputeTransform  this=AudioSettings  sig=csp ====
int __thiscall AudioSettings::ComputeTransform(AudioSettings *this, unsigned int a2)
{
  int result; // eax

  if ( a2 >= *((_DWORD *)this + 9) ) /*0x720e59*/
    return 0; /*0x720e6f*/
  LOWORD(result) = Math::RoundToInt(*(float *)(*(_DWORD *)(*((_DWORD *)this + 6) + 4 * a2) + 644)); /*0x720e67*/
  return result; /*0x720e6c*/
}



// ==== 0x00720EA0  Theme::Stop  this=Theme  sig=csp ====
int __thiscall Theme::Stop(Theme *this, char a2)
{
  int result; // eax
  AudioSample *v4; // ecx
  ThemeClass *v5; // ecx
  Audio *v6; // ecx

  LOBYTE(result) = stru_A8EB00.?[144]; /*0x720ea0*/
  if ( stru_A8EB00.?[144] ) /*0x720eaa*/
  {
    result = Audio::IsSoundEnabled(); /*0x720eb0*/
    if ( result ) /*0x720eb7*/
    {
      LOBYTE(result) = stru_A8EB00.?[384]; /*0x720ebd*/
      if ( !stru_A8EB00.?[384] && *(_DWORD *)this != -1 ) /*0x720ecd*/
      {
        if ( !a2 ) /*0x720ed9*/
          goto LABEL_14; /*0x720ed9*/
        v4 = (AudioSample *)this->audioSample; /*0x720edb*/
        if ( !v4 ) /*0x720ee0*/
          goto LABEL_14; /*0x720ee0*/
        if ( this->u8_11 && !AudioSample::IsBuffering(v4) ) /*0x720ee9*/
          Audio::Release(*((Audio **)this + 11)); /*0x720ef5*/
        if ( Audio::IsSoundPlaying(*((Audio **)this + 11)) != 0 ) /*0x720f04*/
        {
          result = Debug::Log(); /*0x720f14*/
          v5 = (ThemeClass *)this->audioSample; /*0x720f19*/
          if ( v5 ) /*0x720f21*/
            result = ThemeClass::RequestBuffer(v5); /*0x720f23*/
          this->u8_11 = 1; /*0x720f28*/
        }
        else
        {
LABEL_14:
          result = Debug::Log(); /*0x720f37*/
          v6 = (Audio *)this->audioSample; /*0x720f3c*/
          if ( v6 ) /*0x720f44*/
            result = Audio::Release(v6); /*0x720f46*/
        }
        *(_DWORD *)this = -1; /*0x720f4b*/
        this->ptr_4 = -1; /*0x720f51*/
        this->u32_8 = -1; /*0x720f58*/
      }
    }
  }
  return result; /*0x720f5f*/
}



// ==== 0x00720FD0  Theme::IsPlaying  this=Theme  sig=csp ====
bool __thiscall Theme::IsPlaying(Theme *this)
{
  AudioSample *v2; // ecx

  v2 = (AudioSample *)this->audioSample; /*0x720fd3*/
  if ( !v2 ) /*0x720fd8*/
    return 0; /*0x721002*/
  if ( this->u8_11 ) /*0x720fda*/
  {
    if ( !AudioSample::IsBuffering(v2) ) /*0x720fe1*/
      Audio::Release(*((Audio **)this + 11)); /*0x720fed*/
  }
  return Audio::IsSoundPlaying(*((Audio **)this + 11)) != 0; /*0x720ffe*/
}



// ==== 0x00721010  SaveGame::VtableDispatch  this=SaveGame  sig=csp ====
int __thiscall SaveGame::VtableDispatch(SaveGame *this, int a2)
{
  int result; // eax

  result = (*(int (__stdcall **)(int, char *, int, _DWORD))(*(_DWORD *)a2 + 16))(a2, &this->__pad_0[4], 4, 0); /*0x721023*/
  if ( result >= 0 ) /*0x721028*/
    return (*(int (__stdcall **)(int, char *, int, _DWORD))(*(_DWORD *)a2 + 16))(a2, &this->__pad_0[8], 4, 0); /*0x721035*/
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
      if ( byte_A8EBA5 ) /*0x721080*/
      {
        ThemeClass::Play(&unk_A83D10, a1); /*0x721090*/
        v3 = v5; /*0x72109a*/
        if ( byte_A8EC74 ) /*0x7210a0*/
        {
          if ( Audio::IsSoundEnabled() ) /*0x7210a6*/
          {
            if ( !byte_A8ED64 ) /*0x7210ba*/
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



// ==== 0x00721140  RulesClass::IsTypeBuildable  this=RulesClass  sig=csp ====
int __thiscall RulesClass::IsTypeBuildable(RulesClass *this, unsigned int a2)
{
  int result; // eax
  int v3; // ecx

  result = a2; /*0x721140*/
  if ( a2 == -3 || a2 == -2 ) /*0x721150*/
    goto LABEL_16; /*0x721150*/
  if ( a2 >= this->TunnelSpeed[1] ) /*0x721155*/
  {
    LOBYTE(result) = 0; /*0x721157*/
    return result; /*0x721159*/
  }
  result = *(_DWORD *)(this->AttackingAircraftSightRange + 4 * a2); /*0x72115f*/
  if ( !*(_BYTE *)(result + 650) ) /*0x721162*/
  {
    LOBYTE(result) = 0; /*0x72116c*/
    return result; /*0x72116e*/
  }
  if ( !*(_BYTE *)(result + 648) ) /*0x721171*/
  {
    LOBYTE(result) = 0; /*0x72117b*/
    return result; /*0x72117d*/
  }
  if ( dword_A83D4C ) /*0x721188*/
  {
    v3 = *(_DWORD *)(result + 652); /*0x72118a*/
    if ( v3 != -1 && *((_DWORD *)dword_A83D4C->Object_field_0x34 + 47) != v3 ) /*0x7211a2*/
    {
      LOBYTE(result) = 0; /*0x7211a4*/
      return result; /*0x7211a6*/
    }
  }
  if ( *(_DWORD *)&dword_A8B238 || (int)dword_A8B230[130].vtable3 >= *(_DWORD *)(result + 640) ) /*0x7211c7*/
LABEL_16:
    LOBYTE(result) = 1; /*0x7211ce*/
  else
    LOBYTE(result) = 0; /*0x7211c9*/
  return result; /*0x721159*/
}



// ==== 0x00721210  StringList::Find  this=StringList  sig=csp ====
int __thiscall StringList::Find(StringList *this, const char *a2)
{
  int v3; // esi

  if ( !a2 ) /*0x72121b*/
    return -1; /*0x72121b*/
  if ( !strlen(a2) ) /*0x721220*/
    return -1; /*0x721220*/
  v3 = 0; /*0x721230*/
  if ( *((int *)this + 9) <= 0 ) /*0x721234*/
    return -1; /*0x721252*/
  while ( _strcmpi(*(char **)(*((_DWORD *)this + 6) + 4 * v3), (char *)a2) ) /*0x721248*/
  {
    if ( ++v3 >= *((_DWORD *)this + 9) ) /*0x721250*/
      return -1; /*0x721250*/
  }
  return v3; /*0x721252*/
}



// ==== 0x00721270  ScriptAction::GetArgumentString  this=ScriptAction  sig=csp ====
char *__thiscall ScriptAction::GetArgumentString(ScriptAction *this, int a2)
{
  if ( a2 < 0 || a2 >= this->ScriptAction_field_0x24 ) /*0x72127b*/
    return g_Str_none; /*0x721286*/
  else
    return *(char **)(this->ScriptAction_field_0x18[0] + 4 * a2); /*0x721280*/
}



// ==== 0x00721290  TechnoTypeClass::CheckFlag  this=TechnoTypeClass  sig=csp ====
int __thiscall TechnoTypeClass::CheckFlag(TechnoTypeClass *this, int a2)
{
  int result; // eax

  result = a2; /*0x721290*/
  if ( a2 >= 255 ) /*0x721299*/
    result = 255; /*0x72129b*/
  this->ObjectTypeClass[3] = result; /*0x7212a0*/
  return result; /*0x7212a3*/
}



// ==== 0x007212B0  _DynamicVectorClass_PAUThemeControl::Destroy  this=DynamicVector  sig=csp ====
void __thiscall VectorClass_ptr_ThemeControl::Destroy(_DynamicVectorClass_PAUThemeControl *this)
{
  void *v2; // eax

  v2 = *(void **)&this->m_1[3]; /*0x7212b6*/
  this->m_10 = 0; /*0x7212b9*/
  if ( v2 && BYTE1(this->m_C) ) /*0x7212c0*/
  {
    __3_YAXPAX_Z(v2); /*0x7212c6*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x7212ce*/
  }
  BYTE1(this->m_C) = 0; /*0x7212d1*/
  this->m_8 = 0; /*0x7212d4*/
}



// ==== 0x007212E0  _DynamicVectorClass_PAUThemeControl::GetItemIndex  this=DynamicVector  sig=csp ====
unsigned int __thiscall VectorClass_ptr_ThemeControl::GetItemIndex(_DynamicVectorClass_PAUThemeControl *this, int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x7212e0*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 2; /*0x7212f5*/
  else
    return 0; /*0x7212e7*/
}



// ==== 0x00721300  _DynamicVectorClass_PAUThemeControl::SetCapacity  this=DynamicVector  sig=csp ====
char __thiscall VectorClass_ptr_ThemeControl::SetCapacity(
        _DynamicVectorClass_PAUThemeControl *this,
        int a2,
        _DWORD *a3)
{
  _DWORD *v4; // edi
  int m_8; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x72130c*/
  {
    LOBYTE(this->m_C) = 0; /*0x721312*/
    if ( a3 ) /*0x721318*/
      v4 = a3; /*0x72132e*/
    else
      v4 = (_DWORD *)__2_YAPAXI_Z(4 * a2); /*0x72132a*/
    LOBYTE(this->m_C) = 1; /*0x721332*/
    if ( !v4 ) /*0x721336*/
      return 0; /*0x7213aa*/
    if ( *(_DWORD *)&this->m_1[3] ) /*0x721338*/
    {
      m_8 = this->m_8; /*0x72133f*/
      if ( a2 < m_8 ) /*0x721344*/
        m_8 = a2; /*0x721346*/
      for ( i = 0; i < m_8; v4[i - 1] = *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * i - 4) ) /*0x72134c*/
        ++i; /*0x721351*/
      if ( BYTE1(this->m_C) ) /*0x72135e*/
      {
        __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x721369*/
        *(_DWORD *)&this->m_1[3] = 0; /*0x721371*/
      }
    }
    *(_DWORD *)&this->m_1[3] = v4; /*0x72137a*/
    this->m_8 = a2; /*0x721382*/
    BYTE1(this->m_C) = a3 == 0; /*0x721385*/
  }
  else
  {
    (*(void (__thiscall **)(_DynamicVectorClass_PAUThemeControl *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x72138e*/
  }
  v7 = this->m_8; /*0x721391*/
  if ( v7 < this->m_10 ) /*0x721399*/
    this->m_10 = v7; /*0x72139b*/
  return 1; /*0x72139e*/
}



// ==== 0x007213B0  _DynamicVectorClass_PAUThemeControl::FindItemIndex  this=DynamicVector  sig=csp ====
int __thiscall VectorClass_ptr_ThemeControl::FindItemIndex(_DynamicVectorClass_PAUThemeControl *this, _DWORD *a2)
{
  int m_10; // edx
  int result; // eax
  _DWORD *i; // ecx

  m_10 = this->m_10; /*0x7213b0*/
  result = 0; /*0x7213b3*/
  if ( m_10 <= 0 ) /*0x7213b8*/
    return -1; /*0x7213cf*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2; ++i ) /*0x7213be*/
  {
    if ( ++result >= m_10 ) /*0x7213cd*/
      return -1; /*0x7213cd*/
  }
  return result; /*0x7213d2*/
}



// ==== 0x007213E0  _DynamicVectorClass_PAUThemeControl::Constructor_VectorClass_ThemeControl___  this=DynamicVector  sig=csp ====
_DWORD *__thiscall VectorClass_ptr_ThemeControl::Constructor_VectorClass_ThemeControl___(
        _DynamicVectorClass_PAUThemeControl *this,
        char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x7213e3*/
  *(_DWORD *)this->__pad_0 = &VectorClass<ThemeControl *>::`vftable'; /*0x7213e6*/
  if ( v3 && BYTE1(this->m_C) ) /*0x7213f0*/
  {
    __3_YAXPAX_Z(v3); /*0x7213f8*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x721400*/
  }
  BYTE1(this->m_C) = 0; /*0x72140b*/
  this->m_8 = 0; /*0x721411*/
  if ( (a2 & 1) != 0 ) /*0x721418*/
    __3_YAXPAX_Z(this); /*0x72141b*/
  return this->__pad_0; /*0x721425*/
}



// ==== 0x00721430  sub_721430  this=-  sig=ida-proto ====
void sub_721430()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x72143c*/
  *(double *)&unk_B0F1F8[672] = Math::Sqrt(v0 + v0); /*0x72144e*/
}



// ==== 0x00721460  sub_721460  this=-  sig=ida-proto ====
void sub_721460()
{
  dbl_B0F508 = *(double *)&unk_B0F1F8[672] / 60.0; /*0x72146c*/
}



// ==== 0x00721480  sub_721480  this=-  sig=ida-proto ====
void sub_721480()
{
  *(double *)&unk_B0F1F8[728] = 1.0 / dbl_B0F508; /*0x72148c*/
}



// ==== 0x007214A0  sub_7214A0  this=-  sig=ida-proto ====
void sub_7214A0()
{
  *(double *)&unk_B0F1F8[720] = 0.0174532925199433 * 45.0; /*0x7214ac*/
}



// ==== 0x007214C0  sub_7214C0  this=-  sig=ida-proto ====
void sub_7214C0()
{
  *(double *)&unk_B0F1F8[680] = 0.0174532925199433 * 60.0; /*0x7214cc*/
}



// ==== 0x007214E0  sub_7214E0  this=-  sig=ida-proto ====
void sub_7214E0()
{
  *(double *)&unk_B0F1F8[640] = 0.0174532925199433 * 90.0; /*0x7214ec*/
}



// ==== 0x00721500  sub_721500  this=-  sig=ida-proto ====
__int64 sub_721500()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(*(double *)&unk_B0F1F8[640] - *(double *)&unk_B0F1F8[680]); /*0x721512*/
  result = Math::RoundToInt(v0 * *(double *)&unk_B0F1F8[672] * 0.5); /*0x721526*/
  dword_B0F510 = result; /*0x72152b*/
  return result; /*0x721530*/
}



// ==== 0x00721540  sub_721540  this=-  sig=ida-proto ====
void sub_721540()
{
  *(double *)&unk_B0F1F8[688] = Math::ArcTan((double)dword_B0F510 * 0.00390625); /*0x721557*/
}



// ==== 0x00721570  sub_721570  this=-  sig=ida-proto ====
void sub_721570()
{
  *(double *)&unk_B0F1F8[712] = Math::ArcTan((double)(2 * dword_B0F510) / *(double *)&unk_B0F1F8[672]); /*0x721592*/
}



// ==== 0x007215A0  sub_7215A0  this=-  sig=ida-proto ====
__int64 sub_7215A0()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_B0F510) + 0.5); /*0x7215bb*/
  dword_B0F500 = result; /*0x7215c0*/
  return result; /*0x7215c6*/
}



// ==== 0x007215D0  sub_7215D0  this=-  sig=ida-proto ====
int sub_7215D0()
{
  *(_WORD *)&unk_B0F1F8[664] = 0; /*0x7215d2*/
  *(_WORD *)&unk_B0F1F8[666] = 0; /*0x7215d8*/
  return 0; /*0x7215de*/
}



// ==== 0x007215E0  sub_7215E0  this=-  sig=ida-proto ====
int sub_7215E0()
{
  *(_DWORD *)&unk_B0F1F8[696] = 0; /*0x7215e2*/
  *(_DWORD *)&unk_B0F1F8[700] = 0; /*0x7215e7*/
  *(_DWORD *)&unk_B0F1F8[704] = 0; /*0x7215ec*/
  return 0; /*0x7215f1*/
}



// ==== 0x00721600  sub_721600  this=-  sig=ida-proto ====
int sub_721600()
{
  *(_DWORD *)&unk_B0F1F8[744] = 0; /*0x721605*/
  *(_DWORD *)&unk_B0F1F8[736] = 128; /*0x72160f*/
  *(_DWORD *)&unk_B0F1F8[740] = 128; /*0x721614*/
  return 128; /*0x721619*/
}



// ==== 0x00721620  sub_721620  this=-  sig=ida-proto ====
int sub_721620()
{
  *(_DWORD *)&unk_B0F1F8[648] = 0; /*0x721622*/
  *(_DWORD *)&unk_B0F1F8[652] = 0; /*0x721627*/
  *(_DWORD *)&unk_B0F1F8[656] = 0; /*0x72162c*/
  *(_DWORD *)&unk_B0F1F8[660] = 0; /*0x721631*/
  return 0; /*0x721636*/
}



// ==== 0x00721640  sub_721640  this=-  sig=ida-proto ====
int sub_721640()
{
  dword_B0F4EC = 0; /*0x721647*/
  dword_B0F4F0 = 0; /*0x72164c*/
  byte_B0F4F4 = 1; /*0x721651*/
  byte_B0F4F5 = 0; /*0x721658*/
  dword_B0F4E8 = (int)&DynamicVectorClass<TiberiumClass *>::`vftable'; /*0x72165d*/
  dword_B0F4FC = 10; /*0x721667*/
  dword_B0F4F8 = 0; /*0x721671*/
  return atexit(sub_721680); /*0x72167c*/
}



// ==== 0x00721680  sub_721680  this=-  sig=ida-proto ====
void __cdecl sub_721680()
{
  dword_B0F4E8 = (int)&VectorClass<TiberiumClass *>::`vftable'; /*0x721688*/
  if ( dword_B0F4EC && byte_B0F4F5 ) /*0x72169c*/
  {
    __3_YAXPAX_Z(dword_B0F4EC); /*0x72169f*/
    dword_B0F4EC = 0; /*0x7216a7*/
  }
  byte_B0F4F5 = 0; /*0x7216ad*/
  dword_B0F4F0 = 0; /*0x7216b3*/
}



// ==== 0x007216C0  TiberiumClass::TiberiumClass  this=TiberiumClass  sig=csp ====
_DWORD *__thiscall TiberiumClass::TiberiumClass(TiberiumClass *this, char *Source)
{
  int v3; // edx
  int v4; // eax
  int v5; // eax

  AbstractTypeClass::Constructor((int *)this, Source); /*0x7216ca*/
  this->?[1] = -1717986918; /*0x7216dc*/
  this->Spread = -1717986918; /*0x7216e7*/
  *(_DWORD *)&this->? = -1; /*0x7216f1*/
  this->?[0] = 0; /*0x7216fb*/
  this->?[2] = 1069128089; /*0x721701*/
  this->? = 0; /*0x721707*/
  this->SpreadPercentage[0] = 1069128089; /*0x72170d*/
  this->SpreadPercentage[1] = 0; /*0x721713*/
  this->Growth = 0; /*0x721719*/
  this->GrowthPercentage[0] = 0; /*0x72171f*/
  AnimTypeVector::Constructor((AnimTypeVector *)&this->GrowthPercentage[1], 0, 0); /*0x721725*/
  this->Image = (OverlayTypeClass *)10; /*0x72172a*/
  this->Debris[0] = 0; /*0x721731*/
  this->GrowthPercentage[1] = (int)&TypeList<AnimTypeClass const *>::`vftable'; /*0x721734*/
  this->NumImages = 0; /*0x72173a*/
  *(_DWORD *)this->__pad_E4 = 0; /*0x721740*/
  *(_DWORD *)&this->__pad_E4[4] = 0; /*0x721746*/
  this->TiberiumClass_field_EC = 0; /*0x72174c*/
  this->TiberiumClass_field_F0 = 0; /*0x721752*/
  this->TiberiumClass_field_F4 = 0; /*0x721758*/
  this->TiberiumClass_field_F8 = 0; /*0x72175e*/
  this->TiberiumClass_field_FC = 0; /*0x721764*/
  this->SpreadTimer[0] = *(_DWORD *)&stru_A8EB00.?[416]; /*0x721770*/
  this->SpreadTimer[2] = 0; /*0x721776*/
  this->TiberiumClass_field_10C = 0; /*0x72177c*/
  this->TiberiumClass_field_110 = 0; /*0x721782*/
  this->TiberiumClass_field_114 = 0; /*0x721788*/
  this->TiberiumClass_field_118 = 0; /*0x72178e*/
  v3 = *(_DWORD *)&stru_A8EB00.?[416]; /*0x721794*/
  this->GrowthTimer[2] = 0; /*0x72179a*/
  this->GrowthTimer[0] = v3; /*0x7217a0*/
  this->ObjectClass = &TiberiumClass::`vftable'; /*0x7217a6*/
  this->? = &TiberiumClass::`vftable'; /*0x7217ac*/
  this->? = &TiberiumClass::`vftable'; /*0x7217b3*/
  this->? = &TiberiumClass::`vftable'; /*0x7217ba*/
  *(_DWORD *)&this->? = g_BuildingLoadQueue_Array.?[0]; /*0x7217c6*/
  if ( g_BuildingLoadQueue_Array.?[0] < g_BuildingLoadQueue_Array.?[3] /*0x7217fe*/
    || (g_BuildingLoadQueue_Array.?[0] || !g_BuildingLoadQueue_Array.?[3])
    && g_BuildingLoadQueue_Array.?[1] > 0
    && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(g_BuildingLoadQueue_Array.?[1] + 8))(
         &g_BuildingLoadQueue_Array.?[1],
         g_BuildingLoadQueue_Array.?[3] + g_BuildingLoadQueue_Array.?[1],
         0) )
  {
    v4 = g_BuildingLoadQueue_Array.?[0]++; /*0x72180b*/
    *(_DWORD *)(g_BuildingLoadQueue_Array.?[2] + 4 * v4) = this; /*0x72181a*/
  }
  (*(void (__thiscall **)(int *))(this->GrowthPercentage[1] + 12))(&this->GrowthPercentage[1]); /*0x721821*/
  if ( g_BuildingLoadQueue_Array.LightBlueTint < g_BuildingLoadQueue_Array.LightRedTint /*0x721857*/
    || (BYTE1(g_BuildingLoadQueue_Array.LightGreenTint) || !g_BuildingLoadQueue_Array.LightRedTint)
    && g_BuildingLoadQueue_Array.PrimaryFirePixelOffset[0] > 0
    && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(g_BuildingLoadQueue_Array.LightVisibility + 8))(
         &g_BuildingLoadQueue_Array.LightVisibility,
         g_BuildingLoadQueue_Array.LightRedTint + g_BuildingLoadQueue_Array.PrimaryFirePixelOffset[0],
         0) )
  {
    v5 = g_BuildingLoadQueue_Array.LightBlueTint++; /*0x721864*/
    *(_DWORD *)(g_BuildingLoadQueue_Array.LightIntensity + 4 * v5) = this; /*0x721873*/
  }
  return &this->ObjectClass; /*0x721878*/
}



// ==== 0x00721880  TiberiumClass::CleanupMembers  this=TiberiumClass  sig=csp ====
int __thiscall TiberiumClass::CleanupMembers(int this)
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
  *(_DWORD *)(this + 12) = &TiberiumClass::`vftable'; /*0x72189c*/
  AbstractClass::AnnounceExpiredPointer((void **)this, 1); /*0x7218a3*/
  v11 = this; /*0x7218b8*/
  v2 = (*(int (__thiscall **)(int *, int *))(g_BuildingLoadQueue_Array.LightVisibility + 16))( /*0x7218bc*/
         &g_BuildingLoadQueue_Array.LightVisibility,
         &v11);
  if ( v2 != -1 && v2 < g_BuildingLoadQueue_Array.LightBlueTint ) /*0x7218cc*/
  {
    --g_BuildingLoadQueue_Array.LightBlueTint; /*0x7218d1*/
    for ( ; /*0x7218d7*/
          v2 < g_BuildingLoadQueue_Array.LightBlueTint;
          *(_DWORD *)(g_BuildingLoadQueue_Array.LightIntensity + 4 * v2 - 4) = *(_DWORD *)(g_BuildingLoadQueue_Array.LightIntensity
                                                                                         + 4 * v2) )
    {
      ++v2; /*0x7218df*/
    }
  }
  v11 = this; /*0x721901*/
  v3 = (*(int (__thiscall **)(int *, int *))(g_BuildingLoadQueue_Array.?[1] + 16))( /*0x721905*/
         &g_BuildingLoadQueue_Array.?[1],
         &v11);
  if ( v3 != -1 && v3 < g_BuildingLoadQueue_Array.?[0] ) /*0x721915*/
  {
    --g_BuildingLoadQueue_Array.?[0]; /*0x72191a*/
    for ( ; /*0x721920*/
          v3 < g_BuildingLoadQueue_Array.?[0];
          *(_DWORD *)(g_BuildingLoadQueue_Array.?[2] + 4 * v3 - 4) = *(_DWORD *)(g_BuildingLoadQueue_Array.?[2] + 4 * v3) )
    {
      ++v3; /*0x721928*/
    }
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
  *(_DWORD *)(this + 196) = &VectorClass<AnimTypeClass const *>::`vftable'; /*0x721a09*/
  if ( v8 && *(_BYTE *)(this + 209) ) /*0x721a15*/
  {
    __3_YAXPAX_Z(v8); /*0x721a1e*/
    *(_DWORD *)(this + 200) = 0; /*0x721a26*/
  }
  *(_BYTE *)(this + 209) = 0; /*0x721a2e*/
  *(_DWORD *)(this + 204) = 0; /*0x721a34*/
  return AbstractTypeClass::Dtor((AbstractTypeClass *)this); /*0x721a3f*/
}



// ==== 0x00721A50  TiberiumClass::LoadFromINI  this=TiberiumClass  sig=csp ====
char __userpurge TiberiumClass::LoadFromINI@<al>(
        TiberiumClass *this,
        double a2@<st0>,
        double a3@<st1>,
        unsigned __int8 ***a4)
{
  int v4; // ecx
  int v5; // esi
  int Int_Overwrite; // eax
  int v7; // eax
  int v9; // eax
  int v10; // eax
  int v12; // eax
  int v13; // ecx
  int v14; // eax
  char *i; // eax
  int CapacityIncrement; // ecx
  int unknown_18; // edx
  void *Items; // eax
  char result; // al
  double v20; // [esp-Ch] [ebp-D0h]
  double v21; // [esp-Ch] [ebp-D0h]
  int v22; // [esp-8h] [ebp-CCh]
  _DWORD *v23; // [esp+8h] [ebp-BCh] BYREF
  TypeList v24; // [esp+Ch] [ebp-B8h] BYREF
  DynamicVector v25; // [esp+28h] [ebp-9Ch] BYREF

  v5 = v4; /*0x721a5f*/
  INIClass::ResetSection((INIClass *)this); /*0x721a63*/
  if ( !(unsigned __int8)AbstractTypeClass::LoadFromINI((AbstractTypeClass *)v5, (unsigned __int8 ***)this) ) /*0x721a6b*/
    return 0; /*0x721cea*/
  Int_Overwrite = INIClass::ReadInt_Overwrite( /*0x721a8b*/
                    (bool *)this,
                    (unsigned __int8 *)(v5 + 36),
                    aSpread,
                    *(_DWORD *)(v5 + 156));
  v20 = *(double *)(v5 + 160); /*0x721a9d*/
  *(_DWORD *)(v5 + 156) = Int_Overwrite; /*0x721aa6*/
  INIClass::ReadDouble_Overwrite((double *)this, (unsigned __int8 *)(v5 + 36), aSpreadpercenta, v20); /*0x721aac*/
  v7 = *(_DWORD *)(v5 + 168); /*0x721ab1*/
  __asm { fstp qword ptr [esi+0A0h] } /*0x721ab9*/
  *(double *)(v5 + 160) = _RT1; /*0x721ab9*/
  v9 = INIClass::ReadInt_Overwrite((bool *)this, (unsigned __int8 *)(v5 + 36), aGrowth, v7); /*0x721ac6*/
  v21 = *(double *)(v5 + 176); /*0x721ad8*/
  *(_DWORD *)(v5 + 168) = v9; /*0x721ae1*/
  INIClass::ReadDouble_Overwrite((double *)this, (unsigned __int8 *)(v5 + 36), aGrowthpercenta, v21); /*0x721ae7*/
  v10 = *(_DWORD *)(v5 + 184); /*0x721aec*/
  __asm { fstp qword ptr [esi+0B0h] } /*0x721af4*/
  *(double *)(v5 + 176) = _RT1; /*0x721af4*/
  v12 = INIClass::ReadInt_Overwrite((bool *)this, (unsigned __int8 *)(v5 + 36), aValue, v10); /*0x721b01*/
  v13 = *(_DWORD *)(v5 + 188); /*0x721b06*/
  *(_DWORD *)(v5 + 184) = v12; /*0x721b0c*/
  v14 = INIClass::ReadInt_Overwrite((bool *)this, (unsigned __int8 *)(v5 + 36), aPower_0, v13); /*0x721b1b*/
  v22 = *(_DWORD *)(v5 + 192); /*0x721b28*/
  *(_DWORD *)(v5 + 188) = v14; /*0x721b2f*/
  *(_DWORD *)(v5 + 192) = BuildingTypeClass::FindAnimByName( /*0x721b3a*/
                            (BuildingTypeClass *)this,
                            (unsigned __int8 *)(v5 + 36),
                            (unsigned __int8 *)&stru_81AF8C.?[95],
                            v22);
  if ( INIClass::GetString( /*0x721b57*/
         (INIClass *)this,
         (unsigned __int8 *)(v5 + 36),
         aDebris,
         &g_INI_DefaultBuffer,
         (char *)&v25.DynamicVector_field_0x1C,
         128) )
  {
    DynamicVectorClass::AnimTypeConstructor((DynamicVectorClass *)&v25, 0, 0); /*0x721b6c*/
    *(_DWORD *)v25.__pad_0 = &TypeList<AnimTypeClass const *>::`vftable'; /*0x721b7b*/
    for ( i = strtok((char *)&v25.DynamicVector_field_0x1C, Str); i; i = strtok(0, Str) ) /*0x721b8d*/
    {
      if ( !*i ) /*0x721b8f*/
        break; /*0x721b92*/
      v23 = AnimTypeClass::FindOrCreate(i); /*0x721b9d*/
      if ( v23 ) /*0x721ba1*/
        DynamicVector::Add_Alt4(&v25, &v23); /*0x721bac*/
    }
    TypeList::AnimTypeCopy(&v24, &v25); /*0x721bcd*/
    *(_DWORD *)v25.__pad_0 = &VectorClass<AnimTypeClass const *>::`vftable'; /*0x721bd6*/
    DynamicVectorClass::Destroy_Alt((_VectorClass_PBVAnimTypeClass *)&v25); /*0x721bde*/
  }
  else
  {
    TypeList::AnimTypeCopy(&v24, (_DWORD *)(v5 + 196)); /*0x721bf0*/
  }
  VectorClass::CopyDefault((VectorClass *)(v5 + 196), &v24); /*0x721c03*/
  CapacityIncrement = v24.?; /*0x721c0c*/
  unknown_18 = v24.unknown_18; /*0x721c10*/
  *(_DWORD *)(v5 + 212) = v24.?; /*0x721c14*/
  Items = v24.?; /*0x721c17*/
  *(_DWORD *)(v5 + 216) = CapacityIncrement; /*0x721c1b*/
  *(_DWORD *)(v5 + 220) = unknown_18; /*0x721c1e*/
  v24.DynamicVectorClass = &VectorClass<AnimTypeClass const *>::`vftable'; /*0x721c21*/
  if ( Items && v24.? ) /*0x721c34*/
    __3_YAXPAX_Z(Items); /*0x721c37*/
  switch ( INIClass::ReadInt_Overwrite( /*0x721c55*/
             (bool *)this,
             (unsigned __int8 *)(v5 + 36),
             (unsigned __int8 *)g_INI_Key_Image,
             -1) )
  {
    case -1: /*0x721c55*/
      goto LABEL_19;
    case 2: /*0x721c55*/
      *(_DWORD *)(v5 + 224) = *(_DWORD *)(*(_DWORD *)stru_A83D50.__pad_34 + 108); /*0x721c69*/
      *(_DWORD *)(v5 + 228) = 12; /*0x721c6f*/
      *(_DWORD *)(v5 + 232) = 12; /*0x721c75*/
      return 1; /*0x721c85*/
    case 3: /*0x721c55*/
      *(_DWORD *)(v5 + 224) = *(_DWORD *)(*(_DWORD *)stru_A83D50.__pad_34 + 508); /*0x721c94*/
      goto LABEL_18; /*0x721c9a*/
    case 4: /*0x721c55*/
      *(_DWORD *)(v5 + 224) = *(_DWORD *)(*(_DWORD *)stru_A83D50.__pad_34 + 588); /*0x721ca8*/
      goto LABEL_18; /*0x721cae*/
    default:
      *(_DWORD *)(v5 + 224) = *(_DWORD *)(*(_DWORD *)stru_A83D50.__pad_34 + 408); /*0x721cbb*/
LABEL_18:
      *(_DWORD *)(v5 + 236) = 8; /*0x721cc1*/
      *(_DWORD *)(v5 + 228) = 12; /*0x721cd0*/
      *(_DWORD *)(v5 + 232) = 12; /*0x721cd6*/
LABEL_19:
      result = 1; /*0x721cdc*/
      break; /*0x721ce6*/
  }
  return result; /*0x721c7b*/
}



// ==== 0x00721D10  ObjectClass::SmallFunc_721D10  this=INIClass  sig=csp ====
char __thiscall SmallFunc_721D10(INIClass *this)
{
  int KeyCount; // ebp
  int v3; // ebx
  char *StringByIndex; // esi
  int v5; // eax
  _DWORD *v6; // eax
  TiberiumClass *v7; // eax
  char Destination[24]; // [esp+Ch] [ebp-18h] BYREF

  KeyCount = INIClass::GetKeyCount(this->__pad_0, g_INI_Key_Tiberiums); /*0x721d22*/
  v3 = 0; /*0x721d24*/
  if ( KeyCount <= 0 ) /*0x721d28*/
    return 1; /*0x721db3*/
  do /*0x721da5*/
  {
    StringByIndex = (char *)INIClass::GetStringByIndex(this->__pad_0, g_INI_Key_Tiberiums, v3); /*0x721d3c*/
    if ( INIClass::GetString( /*0x721d59*/
           this,
           g_INI_Key_Tiberiums,
           (unsigned __int8 *)StringByIndex,
           &g_INI_DefaultBuffer,
           Destination,
           24) > 0 )
    {
      v5 = atoi(StringByIndex); /*0x721d5c*/
      if ( v5 >= g_BuildingLoadQueue_Array.?[0] ) /*0x721d6c*/
      {
        v7 = (TiberiumClass *)__2_YAPAXI_Z(0x128u); /*0x721d7e*/
        if ( v7 ) /*0x721d88*/
          v6 = TiberiumClass::TiberiumClass(v7, Destination); /*0x721d91*/
        else
          v6 = 0; /*0x721d98*/
      }
      else
      {
        v6 = *(_DWORD **)(g_BuildingLoadQueue_Array.?[2] + 4 * v5); /*0x721d74*/
      }
      (*(void (__thiscall **)(_DWORD *, INIClass *))(*v6 + 100))(v6, this); /*0x721d9f*/
    }
    ++v3; /*0x721da2*/
  }
  while ( v3 < KeyCount ); /*0x721da5*/
  return 1; /*0x721da8*/
}



// ==== 0x00721DC0  TiberiumClass::Harvest  this=TiberiumClass  sig=csp ====
int __thiscall TiberiumClass::Harvest(TiberiumClass *this, int *a2)
{
  AbstractTypeClass::ProcessPower((AbstractTypeClass *)this, a2); /*0x721dc9*/
  Power::TimerProcess(this->?[0]); /*0x721dd7*/
  Power::TimerProcess((int)this->?); /*0x721de5*/
  Power::TimerProcess(this->SpreadPercentage[1]); /*0x721df3*/
  Power::TimerProcess(this->Growth); /*0x721e01*/
  Power::TimerProcess(this->GrowthPercentage[0]); /*0x721e0f*/
  Power::TimerProcess(*(_DWORD *)this->__pad_E4); /*0x721e1d*/
  return Power::TimerProcess(*(_DWORD *)&this->__pad_E4[4]); /*0x721e30*/
}



// ==== 0x00721E40  TiberiumClass::ddtor  this=TiberiumClass  sig=csp ====
int __stdcall TiberiumClass::ddtor(TiberiumClass *this, _DWORD *a2)
{
  if ( !a2 ) /*0x721e46*/
    return -2147467261; /*0x721e48*/
  *a2 = -985803917; /*0x721e56*/
  a2[1] = 298980638; /*0x721e5e*/
  a2[2] = 1610642817; /*0x721e67*/
  a2[3] = unk_7E992C; /*0x721e70*/
  return 0; /*0x721e4d*/
}



// ==== 0x00721E80  TiberiumClass::SaveLoad_Prefix  this=TiberiumClass  sig=csp ====
int __stdcall TiberiumClass::SaveLoad_Prefix(TiberiumClass *this, int a2)
{
  TiberiumClass *v2; // esi
  int v3; // ebp
  _DWORD *TiberiumClass_field_F4; // eax
  int i; // ecx
  Scalar *v6; // ecx
  _DWORD *TiberiumClass_field_110; // eax
  int j; // ecx
  Scalar *v9; // ecx
  int v10; // eax
  int v11; // ebx
  int result; // eax
  int v13; // edi

  v2 = this; /*0x721e83*/
  v3 = 0; /*0x721e87*/
  TiberiumClass_field_F4 = (_DWORD *)this->TiberiumClass_field_F4; /*0x721e8a*/
  if ( TiberiumClass_field_F4 ) /*0x721e92*/
  {
    for ( i = 0; i <= *TiberiumClass_field_F4; *(_DWORD *)(TiberiumClass_field_F4[2] + 4 * i - 4) = 0 ) /*0x721e9a*/
      ++i; /*0x721e9f*/
    *TiberiumClass_field_F4 = 0; /*0x721eaa*/
    v6 = (Scalar *)v2->TiberiumClass_field_F4; /*0x721eac*/
    if ( v6 ) /*0x721eb4*/
      Scalar::Dtor(v6, 1); /*0x721eb8*/
    v2->TiberiumClass_field_F4 = 0; /*0x721ebd*/
  }
  if ( v2->TiberiumClass_field_FC ) /*0x721ec3*/
  {
    __3_YAXPAX_Z((void *)v2->TiberiumClass_field_FC); /*0x721ece*/
    v2->TiberiumClass_field_FC = 0; /*0x721ed6*/
  }
  if ( v2->TiberiumClass_field_F8 ) /*0x721edc*/
  {
    __3_YAXPAX_Z((void *)v2->TiberiumClass_field_F8); /*0x721ee7*/
    v2->TiberiumClass_field_F8 = 0; /*0x721eef*/
  }
  TiberiumClass_field_110 = (_DWORD *)v2->TiberiumClass_field_110; /*0x721ef5*/
  v2->TiberiumClass_field_F0 = 0; /*0x721efb*/
  if ( TiberiumClass_field_110 ) /*0x721f03*/
  {
    for ( j = 0; j <= *TiberiumClass_field_110; *(_DWORD *)(TiberiumClass_field_110[2] + 4 * j - 4) = 0 ) /*0x721f0b*/
      ++j; /*0x721f10*/
    *TiberiumClass_field_110 = 0; /*0x721f1b*/
    v9 = (Scalar *)v2->TiberiumClass_field_110; /*0x721f1d*/
    if ( v9 ) /*0x721f25*/
      Scalar::Dtor(v9, 1); /*0x721f29*/
    v2->TiberiumClass_field_110 = 0; /*0x721f2e*/
  }
  if ( v2->TiberiumClass_field_118 ) /*0x721f34*/
  {
    __3_YAXPAX_Z((void *)v2->TiberiumClass_field_118); /*0x721f3f*/
    v2->TiberiumClass_field_118 = 0; /*0x721f47*/
  }
  if ( v2->TiberiumClass_field_114 ) /*0x721f4d*/
  {
    __3_YAXPAX_Z((void *)v2->TiberiumClass_field_114); /*0x721f58*/
    v2->TiberiumClass_field_114 = 0; /*0x721f60*/
  }
  v10 = v2->GrowthPercentage[1]; /*0x721f66*/
  v2->TiberiumClass_field_10C = 0; /*0x721f74*/
  (*(void (__thiscall **)(int *))(v10 + 12))(&v2->GrowthPercentage[1]); /*0x721f7a*/
  v11 = a2; /*0x721f7d*/
  result = AbstractClass::SaveLoad_Prefix_0(v2, a2); /*0x721f83*/
  if ( result >= 0 ) /*0x721f8a*/
  {
    if ( v2 ) /*0x721f92*/
    {
      AbstractTypeClass::Init((int)v2, (int)&this); /*0x721f9b*/
      DynamicVectorClass::AnimTypeConstructor((DynamicVectorClass *)&v2->GrowthPercentage[1], 0, 0); /*0x721fa4*/
      v2->GrowthPercentage[1] = (int)&TypeList<AnimTypeClass const *>::`vftable'; /*0x721fb0*/
      Timer::Start((Timer *)v2->SpreadTimer, 0); /*0x721fb6*/
      Timer::Start((Timer *)v2->GrowthTimer, 0); /*0x721fc2*/
      v2->ObjectClass = &TiberiumClass::`vftable'; /*0x721fc7*/
      v2->? = &TiberiumClass::`vftable'; /*0x721fcd*/
      v2->? = &TiberiumClass::`vftable'; /*0x721fd4*/
      v2->? = &TiberiumClass::`vftable'; /*0x721fdb*/
    }
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, &v2->NumImages); /*0x721fee*/
    if ( v2 != (TiberiumClass *)-196 ) /*0x721ff5*/
      AnimTypeList::Constructor((AnimTypeList *)&v2->GrowthPercentage[1]); /*0x721ff9*/
    (*(void (__stdcall **)(int, TiberiumClass **, int, _DWORD))(*(_DWORD *)v11 + 12))(v11, &this, 4, 0); /*0x722009*/
    result = 0; /*0x72200c*/
    if ( (int)this > 0 ) /*0x722012*/
    {
      do /*0x722037*/
      {
        (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)v11 + 12))(v11, &a2, 4, 0); /*0x722023*/
        DynamicVector::Add_Alt4((DynamicVector *)&v2->GrowthPercentage[1], &a2); /*0x72202d*/
        ++v3; /*0x722032*/
      }
      while ( v3 < (int)this ); /*0x722037*/
      result = 0; /*0x722039*/
    }
    v13 = 0; /*0x722041*/
    if ( v2->Debris[0] > 0 ) /*0x722045*/
    {
      do /*0x722064*/
        ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)(v2->Value + 4 * v13++)); /*0x722056*/
      while ( v13 < v2->Debris[0] ); /*0x722064*/
      result = 0; /*0x722066*/
    }
    v2->TiberiumClass_field_110 = 0; /*0x722068*/
    v2->TiberiumClass_field_114 = 0; /*0x72206e*/
    v2->TiberiumClass_field_118 = 0; /*0x722074*/
    v2->TiberiumClass_field_F4 = 0; /*0x72207a*/
    v2->TiberiumClass_field_F8 = 0; /*0x722080*/
    v2->TiberiumClass_field_FC = 0; /*0x722086*/
  }
  return result; /*0x72208c*/
}



// ==== 0x007220A0  TiberiumClass::SpreadGrowth  this=TiberiumClass  sig=csp ====
int __thiscall TiberiumClass::SpreadGrowth(TiberiumClass *this, int a2, _DWORD *a3)
{
  int result; // eax

  result = ObjectClass::GetSizeMax((AbstractClass *)this); /*0x7220ac*/
  if ( result >= 0 ) /*0x7220b3*/
  {
    *a3 += 4 * *(_DWORD *)(a2 + 212) + 4; /*0x7220c6*/
    return 0; /*0x7220c8*/
  }
  return result; /*0x7220ca*/
}



// ==== 0x007220D0  TiberiumClass::SaveLoad_Prefix_0  this=TiberiumClass  sig=csp ====
int __stdcall TiberiumClass::SaveLoad_Prefix_0(TiberiumClass *this, int *a2, int a3)
{
  int result; // eax
  int v4; // edx
  int i; // esi

  result = AbstractClass::SaveLoad_Prefix((int *)this, a2, a3); /*0x7220e1*/
  if ( result >= 0 ) /*0x7220e8*/
  {
    v4 = *a2; /*0x7220f0*/
    a3 = this->Debris[0]; /*0x7220fd*/
    (*(void (__stdcall **)(int *, int *, int, _DWORD))(v4 + 16))(a2, &a3, 4, 0); /*0x722101*/
    for ( i = 0; i < a3; ++i ) /*0x72210c*/
      (*(void (__stdcall **)(int *, int, int, _DWORD))(*a2 + 16))(a2, this->Value + 4 * i, 4, 0); /*0x72211f*/
    return 0; /*0x722129*/
  }
  return result; /*0x72212c*/
}



// ==== 0x00722140  TiberiumClass::UpdateField  this=TiberiumClass  sig=csp ====
int __thiscall TiberiumClass::UpdateField(TiberiumClass *this, int a2, int a3)
{
  int i; // edx
  int v4; // eax
  int v5; // esi
  int v6; // eax
  int result; // eax

  for ( i = this->Debris[0] - 1; i >= 0; --i ) /*0x72214c*/
  {
    if ( *(_DWORD *)(this->Value + 4 * i) == a2 ) /*0x722159*/
    {
      v4 = this->Debris[0]; /*0x72215b*/
      if ( i < v4 ) /*0x722163*/
      {
        v5 = v4 - 1; /*0x722165*/
        v6 = i; /*0x722168*/
        for ( this->Debris[0] = v5; /*0x722172*/
              v6 < this->Debris[0];
              *(_DWORD *)(this->Value + 4 * v6 - 4) = *(_DWORD *)(this->Value + 4 * v6) )
        {
          ++v6; /*0x72217a*/
        }
      }
    }
  }
  result = this->NumImages; /*0x722191*/
  if ( result == a2 ) /*0x72219a*/
    this->NumImages = 0; /*0x72219c*/
  return result; /*0x722199*/
}



// ==== 0x007221B0  ObjectClass::ProcessSpeechEvents  this=ObjectClass  sig=csp ====
void *ProcessSpeechEvents(ObjectClass *this)
{
  void *result; // eax
  int i; // esi
  ObjectClass *v3; // ecx
  int v4; // edi
  int v5; // eax
  _DWORD *v6; // ecx
  int v7; // edx
  int v8; // [esp+8h] [ebp-8h]

  result = dword_A8B230; /*0x7221b0*/
  if ( BYTE2(dword_A8B230[374].vtable3) ) /*0x7221b8*/
  {
    result = (void *)g_BuildingLoadQueue_Array.?[0]; /*0x7221c3*/
    for ( i = 0; i < g_BuildingLoadQueue_Array.?[0]; ++i ) /*0x7221cc*/
    {
      v3 = *(ObjectClass **)(g_BuildingLoadQueue_Array.?[2] + 4 * i); /*0x7221da*/
      v4 = v3[1].customSound_controller[1]; /*0x7221dd*/
      v5 = v3[1].customSound_controller[3]; /*0x7221e3*/
      if ( v4 != -1 ) /*0x7221ec*/
      {
        if ( *(_DWORD *)&stru_A8EB00.?[416] - v4 >= v5 ) /*0x7221f8*/
          goto LABEL_7; /*0x7221f8*/
        v5 -= *(_DWORD *)&stru_A8EB00.?[416] - v4; /*0x7221fa*/
      }
      if ( !v5 ) /*0x7221fe*/
      {
LABEL_7:
        PropagateCellOccupancy(v3); /*0x722200*/
        v6 = (_DWORD *)(*(_DWORD *)(g_BuildingLoadQueue_Array.?[2] + 4 * i) + 256); /*0x722216*/
        v7 = *(_DWORD *)(*(_DWORD *)(g_BuildingLoadQueue_Array.?[2] + 4 * i) + 156); /*0x72221c*/
        *v6 = *(_DWORD *)&stru_A8EB00.?[416]; /*0x722222*/
        v6[1] = v8; /*0x722224*/
        v6[2] = v7; /*0x722227*/
      }
      result = (void *)g_BuildingLoadQueue_Array.?[0]; /*0x72222a*/
    }
  }
  return result; /*0x722236*/
}



// ==== 0x00722240  BuildingClass::ClearFactoryData  this=BuildingClass  sig=csp ====
int BuildingClass::ClearFactoryData(BuildingClass *this)
{
  int result; // eax
  int i; // ebp
  int v3; // edi
  _DWORD *v4; // eax
  int j; // ecx
  void **v6; // esi
  int v7; // esi
  int v8; // eax
  size_t v9; // eax
  _DWORD *v10; // esi
  int v11; // eax
  int v12; // eax
  int v13; // ecx
  int v14; // eax

  result = g_BuildingLoadQueue_Array.?[0]; /*0x722241*/
  for ( i = 0; i < g_BuildingLoadQueue_Array.?[0]; ++i ) /*0x72224e*/
  {
    v3 = *(_DWORD *)(g_BuildingLoadQueue_Array.?[2] + 4 * i); /*0x72225b*/
    v4 = *(_DWORD **)(v3 + 244); /*0x72225e*/
    if ( v4 ) /*0x722266*/
    {
      for ( j = 0; j <= *v4; *(_DWORD *)(v4[2] + 4 * j - 4) = 0 ) /*0x72226e*/
        ++j; /*0x722273*/
      *v4 = 0; /*0x72227e*/
      v6 = *(void ***)(v3 + 244); /*0x722280*/
      if ( v6 ) /*0x722288*/
      {
        __3_YAXPAX_Z(v6[2]); /*0x72228e*/
        __3_YAXPAX_Z(v6); /*0x722294*/
      }
      *(_DWORD *)(v3 + 244) = 0; /*0x72229c*/
    }
    if ( *(_DWORD *)(v3 + 252) ) /*0x7222a2*/
    {
      __3_YAXPAX_Z(*(void **)(v3 + 252)); /*0x7222ad*/
      *(_DWORD *)(v3 + 252) = 0; /*0x7222b5*/
    }
    if ( *(_DWORD *)(v3 + 248) ) /*0x7222bb*/
    {
      __3_YAXPAX_Z(*(void **)(v3 + 248)); /*0x7222c6*/
      *(_DWORD *)(v3 + 248) = 0; /*0x7222ce*/
    }
    *(_DWORD *)(v3 + 240) = 0; /*0x7222d4*/
    v7 = Object::ComputeAllocationSize(); /*0x7222df*/
    v8 = __2_YAPAXI_Z(8 * v7); /*0x7222e9*/
    if ( !v8 ) /*0x7222f3*/
      v8 = 0; /*0x7222fc*/
    *(_DWORD *)(v3 + 252) = v8; /*0x7222fe*/
    v9 = Object::ComputeAllocationSize(); /*0x722304*/
    *(_DWORD *)(v3 + 248) = __2_YAPAXI_Z(v9); /*0x722311*/
    v10 = (_DWORD *)__2_YAPAXI_Z(0x14u); /*0x72231c*/
    if ( v10 ) /*0x722323*/
    {
      v11 = Object::ComputeAllocationSize(); /*0x722325*/
      v10[3] = 0; /*0x722331*/
      v10[4] = -1; /*0x722335*/
      *v10 = 0; /*0x72233c*/
      v10[1] = v11; /*0x72233e*/
      v12 = __2_YAPAXI_Z(4 * v11 + 4); /*0x722341*/
      v13 = v10[1]; /*0x722346*/
      v10[2] = v12; /*0x722349*/
      v14 = 0; /*0x72234f*/
      if ( v13 >= 0 ) /*0x722353*/
      {
        do /*0x722362*/
        {
          ++v14; /*0x722358*/
          *(_DWORD *)(v10[2] + 4 * v14 - 4) = 0; /*0x722359*/
        }
        while ( v14 <= v10[1] ); /*0x722362*/
      }
    }
    else
    {
      v10 = 0; /*0x722366*/
    }
    *(_DWORD *)(v3 + 244) = v10; /*0x72236a*/
    AudioClass::ProcessEvent((AudioClass *)v3); /*0x722370*/
    result = g_BuildingLoadQueue_Array.?[0]; /*0x722375*/
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

  result = dword_B0F4F8; /*0x722390*/
  for ( i = 0; i < dword_B0F4F8; ++i ) /*0x72239d*/
  {
    v2 = *((_DWORD *)dword_B0F4EC + i); /*0x7223aa*/
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
    result = dword_B0F4F8; /*0x722429*/
  }
  return result; /*0x722439*/
}



// ==== 0x00722440  ObjectClass::PropagateCellOccupancy  this=ObjectClass  sig=csp ====
void __thiscall PropagateCellOccupancy(ObjectClass *this)
{
  ObjectClass *v1; // ebx
  int *v2; // eax
  int v3; // eax
  int v4; // esi
  int v5; // et2
  int v6; // esi
  int v7; // edi
  Heap *v8; // ecx
  __int16 *v9; // eax
  Heap v10; // eax
  __int16 *v11; // esi
  int v12; // ebp
  char *v13; // esi
  signed int i; // edi
  void *NeighbourContent; // eax
  Cell *v16; // ebp
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
  Cell *v36; // [esp+18h] [ebp-10h]
  unsigned int v37; // [esp+1Ch] [ebp-Ch]
  __int16 *v38; // [esp+1Ch] [ebp-Ch]
  int v39; // [esp+20h] [ebp-8h]

  v1 = this; /*0x722444*/
  v2 = (int *)this->q03D; /*0x722448*/
  if ( v2 && *v2 && *(double *)&this->location[1] > 0.00001 ) /*0x72247a*/
  {
    LOWORD(v3) = Math::RoundToInt((double)*v2 * *(double *)&this->location[1]); /*0x72248a*/
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
    v5 = (int)abs32(Random::State((Random *)&dword_A8B230[14].NeedsSaveOrLink)) % v4; /*0x7224ca*/
    v6 = *(_DWORD *)v1[1].ambientSoundController[3]; /*0x7224cc*/
    v7 = v5 + 1; /*0x7224d0*/
    v39 = v5 + 1; /*0x7224d1*/
    if ( v6 > Object::ComputeAllocationSize() - 20 ) /*0x7224df*/
      AudioClass::ProcessEvent((AudioClass *)v1); /*0x7224e3*/
    v8 = (Heap *)v1[1].ambientSoundController[3]; /*0x7224e8*/
    v34 = 0; /*0x7224ee*/
    if ( *v8 ) /*0x7224f6*/
    {
      v10 = v8[2]; /*0x722500*/
      v11 = *(__int16 **)(*(_DWORD *)&v10 + 4); /*0x722508*/
      *(_DWORD *)(*(_DWORD *)&v10 + 4) = *(_DWORD *)(*(_DWORD *)&v10 + 4 * *(_DWORD *)v8); /*0x72250b*/
      *(_DWORD *)(*(_DWORD *)&v8[2] + 4 * (*(_DWORD *)v8)--) = 0; /*0x722513*/
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
          v13 = (char *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v9); /*0x722543*/
          for ( i = 0; i < 8; ++i ) /*0x722545*/
          {
            NeighbourContent = Cell::GetNeighbourContent((Cell *)v13, i); /*0x72254a*/
            if ( (unsigned __int8)IsCoordValidMap((int)NeighbourContent, 0) ) /*0x722553*/
              ++v12; /*0x72255c*/
          }
          if ( v12 ) /*0x722565*/
          {
            CellClass::SpawnTiberiumTree((CellClass *)v13, 0); /*0x72256f*/
            ++v34; /*0x72257c*/
            if ( v12 > 1 ) /*0x722580*/
            {
              v16 = (Cell *)(v13 + 36); /*0x722595*/
              *(_DWORD *)(v1[1].customSound_controller[0] + 8 * v1[1].ambientSoundController[2]) = *((_DWORD *)v13 + 9); /*0x722598*/
              v36 = (Cell *)(v13 + 36); /*0x7225a7*/
              *(_DWORD *)(v1[1].customSound_controller[0] + 8 * v1[1].ambientSoundController[2] + 4) = 0; /*0x7225ab*/
              v17 = v1[1].ambientSoundController[2]; /*0x7225b3*/
              v18 = (_DWORD *)v1[1].ambientSoundController[3]; /*0x7225bf*/
              v19 = v1[1].customSound_controller[0] + 8 * v17; /*0x7225c5*/
              v1[1].ambientSoundController[2] = v17 + 1; /*0x7225c9*/
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
              *(_BYTE *)(Cell::PosToIndex(v16) + v1[1].ambientSoundController[4]) = 1; /*0x72263f*/
            }
          }
          else
          {
            *(_BYTE *)(Cell::PosToIndex((Cell *)(v13 + 36)) + v1[1].ambientSoundController[4]) = 0; /*0x722653*/
          }
          if ( v34 >= v39 ) /*0x722661*/
            return; /*0x722661*/
          v25 = (int *)v1[1].ambientSoundController[3]; /*0x722667*/
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
int __thiscall BuildingClass::RebuildOccupancyTracking(BuildingClass *this)
{
  _DWORD *v2; // eax
  int i; // ecx
  void **v4; // esi
  int v5; // esi
  int v6; // eax
  size_t v7; // eax
  _DWORD *v8; // esi
  int v9; // eax
  int v10; // eax
  int v11; // ecx
  int v12; // eax

  v2 = (_DWORD *)this->?[1]; /*0x722778*/
  if ( v2 ) /*0x722780*/
  {
    for ( i = 0; i <= *v2; *(_DWORD *)(v2[2] + 4 * i - 4) = 0 ) /*0x722788*/
      ++i; /*0x72278d*/
    *v2 = 0; /*0x722798*/
    v4 = (void **)this->?[1]; /*0x72279a*/
    if ( v4 ) /*0x7227a2*/
    {
      __3_YAXPAX_Z(v4[2]); /*0x7227a8*/
      __3_YAXPAX_Z(v4); /*0x7227ae*/
    }
    this->?[1] = 0; /*0x7227b6*/
  }
  if ( this->?[1] ) /*0x7227bc*/
  {
    __3_YAXPAX_Z((void *)this->?[1]); /*0x7227c7*/
    this->?[1] = 0; /*0x7227cf*/
  }
  if ( this->?[0] ) /*0x7227d5*/
  {
    __3_YAXPAX_Z((void *)this->?[0]); /*0x7227e0*/
    this->?[0] = 0; /*0x7227e8*/
  }
  this->?[0] = 0; /*0x7227ee*/
  v5 = Object::ComputeAllocationSize(); /*0x7227f9*/
  v6 = __2_YAPAXI_Z(8 * v5); /*0x722803*/
  if ( !v6 ) /*0x72280d*/
    v6 = 0; /*0x722816*/
  this->?[1] = v6; /*0x722818*/
  v7 = Object::ComputeAllocationSize(); /*0x72281e*/
  this->?[0] = __2_YAPAXI_Z(v7); /*0x72282b*/
  v8 = (_DWORD *)__2_YAPAXI_Z(0x14u); /*0x722836*/
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
  this->?[1] = (int)v8; /*0x722894*/
  return AudioClass::ProcessEvent((AudioClass *)this); /*0x72288b*/
}



// ==== 0x007228B0  AudioClass::ProcessEvent  this=AbstractClass  sig=csp ====
int __thiscall AudioClass::ProcessEvent(AudioClass *this)
{
  int v2; // ecx
  int *v3; // eax
  int i; // eax
  int result; // eax
  BuildingClass *j; // edi
  Cell *p_occupant; // ecx
  int v8; // eax
  _DWORD *v9; // ebp
  unsigned int v10; // ebx
  unsigned int v11; // edx
  unsigned int v12; // edi
  int v13; // ecx
  int v14; // ebx
  unsigned int v15; // eax
  float v16; // [esp+8h] [ebp-Ch]
  Cell *v17; // [esp+Ch] [ebp-8h]
  unsigned int v18; // [esp+10h] [ebp-4h]

  v2 = 0; /*0x7228b6*/
  v3 = (int *)*((_DWORD *)this + 61); /*0x7228b9*/
  *((_DWORD *)this + 60) = 0; /*0x7228bf*/
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
  for ( i = Object::ComputeAllocationSize() - 1; i >= 0; *(_BYTE *)(*((_DWORD *)this + 62) + i + 1) = 0 ) /*0x7228ec*/
    --i; /*0x7228f4*/
  LayerClass::CellIteratorReset((LayerClass *)&stru_87F5F0.__pad_58[416]); /*0x722901*/
  result = LayerClass::CellIteratorNext((LayerClass *)&stru_87F5F0.__pad_58[416]); /*0x72290b*/
  for ( j = (BuildingClass *)result; result; j = (BuildingClass *)result ) /*0x722914*/
  {
    if ( BuildingClass::FindByCellHash(j) == *((_DWORD *)this + 38) && BuildingClass::IsTiberiumSiloEligible(j) ) /*0x722931*/
    {
      p_occupant = (Cell *)&j->?; /*0x72294a*/
      v17 = (Cell *)&j->?; /*0x72294d*/
      *(_DWORD *)(*((_DWORD *)this + 63) + 8 * *((_DWORD *)this + 60)) = j->?; /*0x722953*/
      *(_DWORD *)(*((_DWORD *)this + 63) + 8 * *((_DWORD *)this + 60) + 4) = 0; /*0x722962*/
      v8 = *((_DWORD *)this + 60); /*0x72296a*/
      v9 = (_DWORD *)*((_DWORD *)this + 61); /*0x722976*/
      v10 = *((_DWORD *)this + 63) + 8 * v8; /*0x72297c*/
      *((_DWORD *)this + 60) = v8 + 1; /*0x722980*/
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
          p_occupant = v17; /*0x7229c5*/
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
      *(_BYTE *)(Cell::PosToIndex(p_occupant) + *((_DWORD *)this + 62)) = 1; /*0x7229f7*/
    }
    result = LayerClass::CellIteratorNext((LayerClass *)&stru_87F5F0.__pad_58[416]); /*0x722a00*/
  }
  return result; /*0x722a11*/
}



// ==== 0x00722A20  ObjectClass::method_722A20  this=ObjectClass  sig=csp ====
void __thiscall sub_722A20(ObjectClass *this)
{
  _DWORD *v2; // eax
  int i; // ecx
  void **v4; // edi

  v2 = (_DWORD *)this->q03D; /*0x722a26*/
  if ( v2 ) /*0x722a2e*/
  {
    for ( i = 0; i <= *v2; *(_DWORD *)(v2[2] + 4 * i - 4) = 0 ) /*0x722a36*/
      ++i; /*0x722a3b*/
    *v2 = 0; /*0x722a47*/
    v4 = (void **)this->q03D; /*0x722a49*/
    if ( v4 ) /*0x722a51*/
    {
      __3_YAXPAX_Z(v4[2]); /*0x722a57*/
      __3_YAXPAX_Z(v4); /*0x722a5d*/
    }
    this->q03D = 0; /*0x722a65*/
  }
  if ( *((_DWORD *)this + 63) ) /*0x722a6c*/
  {
    __3_YAXPAX_Z(*((void **)this + 63)); /*0x722a77*/
    *((_DWORD *)this + 63) = 0; /*0x722a7f*/
  }
  if ( *((_DWORD *)this + 62) ) /*0x722a85*/
  {
    __3_YAXPAX_Z(*((void **)this + 62)); /*0x722a90*/
    *((_DWORD *)this + 62) = 0; /*0x722a98*/
  }
  this->ambientSoundController = 0; /*0x722a9e*/
}



// ==== 0x00722AB0  CellClass::ClearCrateStateForAll  this=CellClass  sig=csp ====
int __thiscall CellClass::ClearCrateStateForAll(CellClass *this)
{
  int result; // eax
  int i; // ecx

  result = Cell::PosToIndex((Cell *)this); /*0x722ab0*/
  for ( i = 0; /*0x722abf*/
        i < g_BuildingLoadQueue_Array.?[0];
        *(_BYTE *)(*(_DWORD *)(*(_DWORD *)(g_BuildingLoadQueue_Array.?[2] + 4 * i - 4) + 248) + result) = 0 )
  {
    ++i; /*0x722ac7*/
  }
  return result; /*0x722ae0*/
}



// ==== 0x00722AF0  BuildingClass::AddOccupancy  this=AbstractClass  sig=csp ====
int __thiscall BuildingClass::AddOccupancy(int *this, __int16 *a2)
{
  __int16 *v2; // ebp
  int v4; // edi
  BuildingClass *v5; // eax
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
  v4 = Cell::PosToIndex((Cell *)a2); /*0x722b09*/
  v5 = (BuildingClass *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], a2); /*0x722b0b*/
  LOBYTE(result) = BuildingClass::IsTiberiumSiloEligible(v5); /*0x722b12*/
  if ( (_BYTE)result ) /*0x722b19*/
  {
    result = *(this + 62); /*0x722b1f*/
    if ( !*(_BYTE *)(result + v4) ) /*0x722b25*/
    {
      if ( *(this + 60) >= Object::ComputeAllocationSize() - 20 ) /*0x722b3f*/
        AudioClass::ProcessEvent((AudioClass *)this); /*0x722b43*/
      *(_DWORD *)(*(this + 63) + 8 * *(this + 60)) = *(_DWORD *)a2; /*0x722b58*/
      *(float *)(*(this + 63) + 8 * *(this + 60) + 4) = (float)(*(_DWORD *)&stru_A8EB00.?[416] /*0x722b95*/
                                                              + (int)abs32(Random::State((Random *)&dword_A8B230[14].NeedsSaveOrLink))
                                                              % 50);
      v7 = *(this + 60); /*0x722b99*/
      v8 = (_DWORD *)*(this + 61); /*0x722ba5*/
      v9 = *(this + 63) + 8 * v7; /*0x722bab*/
      *(this + 60) = v7 + 1; /*0x722baf*/
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
      result = Cell::PosToIndex((Cell *)v2); /*0x722c1a*/
      *(_BYTE *)(result + *(this + 62)) = 1; /*0x722c26*/
    }
  }
  return result; /*0x722c2a*/
}



// ==== 0x00722C40  ObjectClass::UpdateAudioTriggers  this=ObjectClass  sig=csp ====
void *UpdateAudioTriggers(ObjectClass *this)
{
  void *result; // eax
  int i; // esi
  ObjectClass *v3; // ecx
  int estimatedHealth; // edi
  int spawnStatus; // eax
  double v6; // st7
  int v7; // ebx
  int v8; // edi
  int v9; // eax
  _DWORD *v10; // ecx
  int v11; // [esp+8h] [ebp-8h]

  result = dword_A8B230; /*0x722c40*/
  if ( BYTE2(dword_A8B230[374].vtable3) ) /*0x722c48*/
  {
    result = (void *)g_BuildingLoadQueue_Array.?[0]; /*0x722c57*/
    for ( i = 0; i < g_BuildingLoadQueue_Array.?[0]; ++i ) /*0x722c60*/
    {
      v3 = *(ObjectClass **)(g_BuildingLoadQueue_Array.?[2] + 4 * i); /*0x722c73*/
      estimatedHealth = v3[1].estimatedHealth; /*0x722c76*/
      spawnStatus = v3[1].spawnStatus; /*0x722c7c*/
      if ( estimatedHealth != -1 ) /*0x722c85*/
      {
        if ( *(_DWORD *)&stru_A8EB00.?[416] - estimatedHealth >= spawnStatus ) /*0x722c91*/
          goto LABEL_7; /*0x722c91*/
        spawnStatus -= *(_DWORD *)&stru_A8EB00.?[416] - estimatedHealth; /*0x722c93*/
      }
      if ( !spawnStatus ) /*0x722c97*/
      {
LABEL_7:
        RebuildBuildingOccupancy(v3); /*0x722c99*/
        if ( ((int)dword_A8B230->vtable0 & 0x40) != 0 ) /*0x722ca7*/
          v6 = 0.3; /*0x722ca9*/
        else
          v6 = 1.0; /*0x722cb1*/
        v7 = g_BuildingLoadQueue_Array.?[2]; /*0x722cb7*/
        v8 = *(_DWORD *)&stru_A8EB00.?[416]; /*0x722cbd*/
        LOWORD(v9) = Math::RoundToInt(v6); /*0x722cce*/
        v10 = (_DWORD *)(*(_DWORD *)(v7 + 4 * i) + 284); /*0x722cd6*/
        *v10 = v8; /*0x722cde*/
        v10[1] = v11; /*0x722ce0*/
        v10[2] = v9; /*0x722ce3*/
      }
      result = (void *)g_BuildingLoadQueue_Array.?[0]; /*0x722ce6*/
    }
  }
  return result; /*0x722cf7*/
}



// ==== 0x00722D00  BuildingClass::ClearOccupancyData  this=BuildingClass  sig=csp ====
int BuildingClass::ClearOccupancyData(BuildingClass *this)
{
  int result; // eax
  int i; // ebp
  int v3; // edi
  _DWORD *v4; // eax
  int j; // ecx
  void **v6; // esi
  int v7; // esi
  int v8; // eax
  size_t v9; // eax
  _DWORD *v10; // esi
  int v11; // eax
  int v12; // eax
  int v13; // ecx
  int v14; // eax

  result = g_BuildingLoadQueue_Array.?[0]; /*0x722d01*/
  for ( i = 0; i < g_BuildingLoadQueue_Array.?[0]; ++i ) /*0x722d0e*/
  {
    v3 = *(_DWORD *)(g_BuildingLoadQueue_Array.?[2] + 4 * i); /*0x722d1b*/
    v4 = *(_DWORD **)(v3 + 272); /*0x722d1e*/
    if ( v4 ) /*0x722d26*/
    {
      for ( j = 0; j <= *v4; *(_DWORD *)(v4[2] + 4 * j - 4) = 0 ) /*0x722d2e*/
        ++j; /*0x722d33*/
      *v4 = 0; /*0x722d3e*/
      v6 = *(void ***)(v3 + 272); /*0x722d40*/
      if ( v6 ) /*0x722d48*/
      {
        __3_YAXPAX_Z(v6[2]); /*0x722d4e*/
        __3_YAXPAX_Z(v6); /*0x722d54*/
      }
      *(_DWORD *)(v3 + 272) = 0; /*0x722d5c*/
    }
    if ( *(_DWORD *)(v3 + 280) ) /*0x722d62*/
    {
      __3_YAXPAX_Z(*(void **)(v3 + 280)); /*0x722d6d*/
      *(_DWORD *)(v3 + 280) = 0; /*0x722d75*/
    }
    if ( *(_DWORD *)(v3 + 276) ) /*0x722d7b*/
    {
      __3_YAXPAX_Z(*(void **)(v3 + 276)); /*0x722d86*/
      *(_DWORD *)(v3 + 276) = 0; /*0x722d8e*/
    }
    *(_DWORD *)(v3 + 268) = 0; /*0x722d94*/
    v7 = Object::ComputeAllocationSize(); /*0x722d9f*/
    v8 = __2_YAPAXI_Z(8 * v7); /*0x722da9*/
    if ( !v8 ) /*0x722db3*/
      v8 = 0; /*0x722dbc*/
    *(_DWORD *)(v3 + 280) = v8; /*0x722dbe*/
    v9 = Object::ComputeAllocationSize(); /*0x722dc4*/
    *(_DWORD *)(v3 + 276) = __2_YAPAXI_Z(v9); /*0x722dd1*/
    v10 = (_DWORD *)__2_YAPAXI_Z(0x14u); /*0x722ddc*/
    if ( v10 ) /*0x722de3*/
    {
      v11 = Object::ComputeAllocationSize(); /*0x722de5*/
      v10[3] = 0; /*0x722df1*/
      v10[4] = -1; /*0x722df5*/
      *v10 = 0; /*0x722dfc*/
      v10[1] = v11; /*0x722dfe*/
      v12 = __2_YAPAXI_Z(4 * v11 + 4); /*0x722e01*/
      v13 = v10[1]; /*0x722e06*/
      v10[2] = v12; /*0x722e09*/
      v14 = 0; /*0x722e0f*/
      if ( v13 >= 0 ) /*0x722e13*/
      {
        do /*0x722e22*/
        {
          ++v14; /*0x722e18*/
          *(_DWORD *)(v10[2] + 4 * v14 - 4) = 0; /*0x722e19*/
        }
        while ( v14 <= v10[1] ); /*0x722e22*/
      }
    }
    else
    {
      v10 = 0; /*0x722e26*/
    }
    *(_DWORD *)(v3 + 272) = v10; /*0x722e2a*/
    BuildingClass::RebuildOccupancy2((BuildingClass *)v3); /*0x722e30*/
    result = g_BuildingLoadQueue_Array.?[0]; /*0x722e35*/
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

  result = dword_B0F4F8; /*0x722e50*/
  for ( i = 0; i < dword_B0F4F8; ++i ) /*0x722e5d*/
  {
    v2 = *((_DWORD *)dword_B0F4EC + i); /*0x722e6a*/
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
    result = dword_B0F4F8; /*0x722ee9*/
  }
  return result; /*0x722ef9*/
}



// ==== 0x00722F00  ObjectClass::RebuildBuildingOccupancy  this=ObjectClass  sig=csp ====
void __thiscall RebuildBuildingOccupancy(ObjectClass *this)
{
  int *v2; // eax
  int v3; // eax
  int v4; // edi
  int v5; // eax
  int v6; // ebx
  int v7; // edi
  Heap *v8; // ecx
  __int16 *v9; // ebx
  Heap v10; // eax
  ObjectClass *v11; // ebp
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

  v2 = (int *)this->q044; /*0x722f09*/
  if ( v2 && *v2 && *((double *)this + 22) > 0.00001 ) /*0x722f36*/
  {
    LOWORD(v3) = Math::RoundToInt((double)*v2 * *((double *)this + 22)); /*0x722f46*/
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
    v5 = Random::State((Random *)&dword_A8B230[14].NeedsSaveOrLink); /*0x722f75*/
    v6 = **((_DWORD **)this + 68); /*0x722f88*/
    v7 = (int)abs32(v5) % v4 + 1; /*0x722f8c*/
    v31 = v7; /*0x722f8d*/
    if ( v6 > Object::ComputeAllocationSize() - 2 * v7 ) /*0x722f9d*/
      BuildingClass::RebuildOccupancy2((BuildingClass *)this); /*0x722fa1*/
    v8 = (Heap *)this->q044; /*0x722fa6*/
    v30 = 0; /*0x722fac*/
    if ( *v8 ) /*0x722fb4*/
    {
      v10 = v8[2]; /*0x722fc2*/
      v9 = *(__int16 **)(*(_DWORD *)&v10 + 4); /*0x722fca*/
      *(_DWORD *)(*(_DWORD *)&v10 + 4) = *(_DWORD *)(*(_DWORD *)&v10 + 4 * *(_DWORD *)v8); /*0x722fcd*/
      *(_DWORD *)(*(_DWORD *)&v8[2] + 4 * (*(_DWORD *)v8)--) = 0; /*0x722fd5*/
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
          v11 = (ObjectClass *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v9); /*0x723005*/
          if ( BuildingClass::FindByCellHash((BuildingClass *)v11) == *(_DWORD *)&this->isInLogic ) /*0x723014*/
          {
            sub_483710(v11); /*0x72301c*/
            if ( BYTE2(v11[1].estimatedHealth) >= 0xBu ) /*0x723028*/
            {
              *(_BYTE *)(Cell::PosToIndex((Cell *)v9) + this->u8_45) = 0; /*0x72312b*/
            }
            else
            {
              *(_DWORD *)(this->u32_46 + 8 * *((_DWORD *)this + 67)) = *(_DWORD *)v9; /*0x72303c*/
              *(float *)(this->u32_46 + 8 * *((_DWORD *)this + 67) + 4) = (float)(int)(*(_DWORD *)&stru_A8EB00.?[416] /*0x72307c*/
                                                                                               + abs32(
                                                                                                   Random::State((Random *)&dword_A8B230[14].NeedsSaveOrLink)
                                                                                                 % 50));
              *(_BYTE *)(Cell::PosToIndex((Cell *)v9) + this->u8_45) = 1; /*0x72308b*/
              v12 = *((_DWORD *)this + 67); /*0x72308f*/
              v13 = (_DWORD *)this->q044; /*0x72309b*/
              v14 = this->u32_46 + 8 * v12; /*0x7230a1*/
              *((_DWORD *)this + 67) = v12 + 1; /*0x7230a5*/
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
              BuildingClass::AddOccupancy((int *)this, v9); /*0x723113*/
              v7 = v31; /*0x723118*/
            }
          }
          if ( ++v30 >= v7 ) /*0x72313a*/
            return; /*0x72313a*/
          v20 = (int *)this->q044; /*0x723140*/
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
int __thiscall BuildingClass::RebuildOccupancyTracking2(BuildingClass *this)
{
  _DWORD *v2; // eax
  int i; // ecx
  void **v4; // esi
  int v5; // esi
  int v6; // eax
  size_t v7; // eax
  _DWORD *v8; // esi
  int v9; // eax
  int v10; // eax
  int v11; // ecx
  int v12; // eax

  v2 = (_DWORD *)this->?[6]; /*0x723268*/
  if ( v2 ) /*0x723270*/
  {
    for ( i = 0; i <= *v2; *(_DWORD *)(v2[2] + 4 * i - 4) = 0 ) /*0x723278*/
      ++i; /*0x72327d*/
    *v2 = 0; /*0x723288*/
    v4 = (void **)this->?[6]; /*0x72328a*/
    if ( v4 ) /*0x723292*/
    {
      __3_YAXPAX_Z(v4[2]); /*0x723298*/
      __3_YAXPAX_Z(v4); /*0x72329e*/
    }
    this->?[6] = 0; /*0x7232a6*/
  }
  if ( this->?[1] ) /*0x7232ac*/
  {
    __3_YAXPAX_Z((void *)this->?[1]); /*0x7232b7*/
    this->?[1] = 0; /*0x7232bf*/
  }
  if ( this->?[0] ) /*0x7232c5*/
  {
    __3_YAXPAX_Z((void *)this->?[0]); /*0x7232d0*/
    this->?[0] = 0; /*0x7232d8*/
  }
  this->?[5] = 0; /*0x7232de*/
  v5 = Object::ComputeAllocationSize(); /*0x7232e9*/
  v6 = __2_YAPAXI_Z(8 * v5); /*0x7232f3*/
  if ( !v6 ) /*0x7232fd*/
    v6 = 0; /*0x723306*/
  this->?[1] = v6; /*0x723308*/
  v7 = Object::ComputeAllocationSize(); /*0x72330e*/
  this->?[0] = __2_YAPAXI_Z(v7); /*0x72331b*/
  v8 = (_DWORD *)__2_YAPAXI_Z(0x14u); /*0x723326*/
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
  this->?[6] = (int)v8; /*0x723384*/
  return BuildingClass::RebuildOccupancy2(this); /*0x72337b*/
}



// ==== 0x007233A0  BuildingClass::RebuildOccupancy2  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass::RebuildOccupancy2(BuildingClass *this)
{
  int v2; // ecx
  int *v3; // eax
  int i; // eax
  int result; // eax
  BuildingClass *j; // edi
  Cell *p_occupant; // ecx
  int v8; // eax
  _DWORD *v9; // ebp
  unsigned int v10; // ebx
  unsigned int v11; // edx
  unsigned int v12; // edi
  int v13; // ecx
  int v14; // ebx
  unsigned int v15; // eax
  float v16; // [esp+8h] [ebp-Ch]
  Cell *v17; // [esp+Ch] [ebp-8h]
  unsigned int v18; // [esp+10h] [ebp-4h]

  v2 = 0; /*0x7233a6*/
  v3 = (int *)this->?[6]; /*0x7233a9*/
  this->?[5] = 0; /*0x7233af*/
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
  for ( i = Object::ComputeAllocationSize() - 1; i >= 0; *(_BYTE *)(this->?[0] + i + 1) = 0 ) /*0x7233dc*/
    --i; /*0x7233e4*/
  LayerClass::CellIteratorReset((LayerClass *)&stru_87F5F0.__pad_58[416]); /*0x7233f1*/
  result = LayerClass::CellIteratorNext((LayerClass *)&stru_87F5F0.__pad_58[416]); /*0x7233fb*/
  for ( j = (BuildingClass *)result; result; j = (BuildingClass *)result ) /*0x723404*/
  {
    if ( BuildingClass::FindByCellHash(j) == *(_DWORD *)&this->? && BuildingClass::IsTiberiumCollectorEligible(j) ) /*0x723421*/
    {
      p_occupant = (Cell *)&j->?; /*0x72343a*/
      v17 = (Cell *)&j->?; /*0x72343d*/
      *(_DWORD *)(this->?[1] + 8 * this->?[5]) = j->?; /*0x723443*/
      *(_DWORD *)(this->?[1] + 8 * this->?[5] + 4) = 0; /*0x723452*/
      v8 = this->?[5]; /*0x72345a*/
      v9 = (_DWORD *)this->?[6]; /*0x723466*/
      v10 = this->?[1] + 8 * v8; /*0x72346c*/
      this->?[5] = v8 + 1; /*0x723470*/
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
          p_occupant = v17; /*0x7234b5*/
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
      *(_BYTE *)(Cell::PosToIndex(p_occupant) + this->?[0]) = 1; /*0x7234e7*/
    }
    result = LayerClass::CellIteratorNext((LayerClass *)&stru_87F5F0.__pad_58[416]); /*0x7234f0*/
  }
  return result; /*0x723501*/
}



// ==== 0x00723510  ObjectClass::method  this=ObjectClass  sig=csp ====
void __thiscall sub_723510(ObjectClass *this)
{
  _DWORD *v2; // eax
  int i; // ecx
  void **v4; // edi

  v2 = (_DWORD *)this->q044; /*0x723516*/
  if ( v2 ) /*0x72351e*/
  {
    for ( i = 0; i <= *v2; *(_DWORD *)(v2[2] + 4 * i - 4) = 0 ) /*0x723526*/
      ++i; /*0x72352b*/
    *v2 = 0; /*0x723537*/
    v4 = (void **)this->q044; /*0x723539*/
    if ( v4 ) /*0x723541*/
    {
      __3_YAXPAX_Z(v4[2]); /*0x723547*/
      __3_YAXPAX_Z(v4); /*0x72354d*/
    }
    this->q044 = 0; /*0x723555*/
  }
  if ( this->u32_46 ) /*0x72355c*/
  {
    __3_YAXPAX_Z(*((void **)this + 70)); /*0x723567*/
    this->u32_46 = 0; /*0x72356f*/
  }
  if ( this->u8_45 ) /*0x723575*/
  {
    __3_YAXPAX_Z(*((void **)this + 69)); /*0x723580*/
    this->u8_45 = 0; /*0x723588*/
  }
  *((_DWORD *)this + 67) = 0; /*0x72358e*/
}



// ==== 0x007235A0  CellClass::RegisterForRedraw  this=CellClass  sig=csp ====
_BYTE *__thiscall CellClass::RegisterForRedraw(CellClass *this, __int16 *a2)
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

  v13 = Cell::PosToIndex((Cell *)a2); /*0x7235b8*/
  result = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], a2); /*0x7235bc*/
  if ( result[286] < 0xBu ) /*0x7235c8*/
  {
    if ( *(_DWORD *)this->CellClass_field_10C > Object::ComputeAllocationSize() - 10 ) /*0x7235de*/
      BuildingClass::RebuildOccupancy2((BuildingClass *)this); /*0x7235e2*/
    *(_DWORD *)(*(_DWORD *)&this->unknown118 + 8 * *(_DWORD *)this->CellClass_field_10C) = *(_DWORD *)a2; /*0x7235f6*/
    *(float *)(*(_DWORD *)&this->unknown118 + 8 * *(_DWORD *)this->CellClass_field_10C + 4) = (float)(*(_DWORD *)&stru_A8EB00.?[416] + (int)abs32(Random::State((Random *)&dword_A8B230[14].NeedsSaveOrLink)) % 50); /*0x723632*/
    v4 = *(_DWORD *)this->CellClass_field_10C; /*0x723636*/
    v5 = *(_DWORD **)this->unknown110; /*0x723642*/
    v6 = *(_DWORD *)&this->unknown118 + 8 * v4; /*0x723648*/
    *(_DWORD *)this->CellClass_field_10C = v4 + 1; /*0x72364c*/
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
    result = *(_BYTE **)this->unknown114; /*0x7236b3*/
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
int TiberiumClass::StubReturn296(TiberiumClass *this)
{
  return 296; /*0x7236e5*/
}



// ==== 0x007236F0  TiberiumClass::StubReturn46  this=TiberiumClass  sig=csp ====
int TiberiumClass::StubReturn46(TiberiumClass *this)
{
  return 46; /*0x7236f5*/
}



// ==== 0x00723700  TiberiumClass::Stub  this=TiberiumClass  sig=csp ====
int __thiscall TiberiumClass::Stub(TiberiumClass *this)
{
  return *(_DWORD *)&this->?; /*0x723706*/
}



// ==== 0x00723710  TiberiumClass::DrawOre  this=TiberiumClass  sig=csp ====
void *__thiscall TiberiumClass::DrawOre(TiberiumClass *this, char a2)
{
  TiberiumClass::CleanupMembers((int)this); /*0x723713*/
  if ( (a2 & 1) != 0 ) /*0x72371d*/
    __3_YAXPAX_Z(this); /*0x723720*/
  return this; /*0x72372a*/
}



// ==== 0x00723730  _DynamicVectorClass_PAVTiberiumClass::Destroy  this=DynamicVector  sig=csp ====
void __thiscall VectorClass_ptr_TiberiumClass::Destroy(_DynamicVectorClass_PAVTiberiumClass *this)
{
  void *v2; // eax

  v2 = *(void **)&this->m_1[3]; /*0x723736*/
  this->m_10 = 0; /*0x723739*/
  if ( v2 && BYTE1(this->m_C) ) /*0x723740*/
  {
    __3_YAXPAX_Z(v2); /*0x723746*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x72374e*/
  }
  BYTE1(this->m_C) = 0; /*0x723751*/
  this->m_8 = 0; /*0x723754*/
}



// ==== 0x00723760  _DynamicVectorClass_PAVTiberiumClass::GetItemIndex  this=DynamicVector  sig=csp ====
unsigned int __thiscall VectorClass_ptr_TiberiumClass::GetItemIndex(_DynamicVectorClass_PAVTiberiumClass *this, int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x723760*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 2; /*0x723775*/
  else
    return 0; /*0x723767*/
}



// ==== 0x00723780  _VectorClass_PAVTiberiumClass::Get  this=VectorClass  sig=csp ====
int __thiscall VectorClass_ptr_TiberiumClass::Get(_VectorClass_PAVTiberiumClass *this, int a2)
{
  return *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * a2); /*0x72378a*/
}



// ==== 0x00723790  _VectorClass_PAVTiberiumClass::Add  this=VectorClass  sig=csp ====
char __thiscall VectorClass_ptr_TiberiumClass::Add(_VectorClass_PAVTiberiumClass *this, int a2)
{
  int m_8; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  m_8 = this->m_8; /*0x723792*/
  if ( m_8 == *(_DWORD *)(a2 + 8) ) /*0x72379d*/
  {
    v3 = 0; /*0x72379f*/
    if ( m_8 <= 0 ) /*0x7237a3*/
      return 1; /*0x7237c3*/
    v4 = *(_DWORD **)&this->m_1[3]; /*0x7237a5*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x7237ab*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x7237b4*/
    {
      ++v3; /*0x7237b6*/
      ++v4; /*0x7237b7*/
      if ( v3 >= m_8 ) /*0x7237bc*/
        return 1; /*0x7237bc*/
    }
  }
  return 0; /*0x7237be*/
}



// ==== 0x007237D0  _VectorClass_PAVTiberiumClass::Release  this=VectorClass  sig=csp ====
char __thiscall VectorClass_ptr_TiberiumClass::Release(_VectorClass_PAVTiberiumClass *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int m_8; // ecx
  int i; // eax

  if ( a2 ) /*0x7237dc*/
  {
    LOBYTE(this->m_C) = 0; /*0x7237e6*/
    if ( a3 ) /*0x7237ec*/
      v4 = a3; /*0x723802*/
    else
      v4 = (_DWORD *)__2_YAPAXI_Z(4 * a2); /*0x7237fe*/
    LOBYTE(this->m_C) = 1; /*0x723806*/
    if ( v4 ) /*0x72380a*/
    {
      if ( *(_DWORD *)&this->m_1[3] ) /*0x723815*/
      {
        m_8 = this->m_8; /*0x72381c*/
        if ( a2 < m_8 ) /*0x723821*/
          m_8 = a2; /*0x723823*/
        for ( i = 0; i < m_8; v4[i - 1] = *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * i - 4) ) /*0x723829*/
          ++i; /*0x72382e*/
        if ( BYTE1(this->m_C) ) /*0x72383b*/
        {
          __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x723846*/
          *(_DWORD *)&this->m_1[3] = 0; /*0x72384e*/
        }
      }
      *(_DWORD *)&this->m_1[3] = v4; /*0x723857*/
      this->m_8 = a2; /*0x72385f*/
      BYTE1(this->m_C) = a3 == 0; /*0x723862*/
      return 1; /*0x723868*/
    }
    else
    {
      return 0; /*0x72380f*/
    }
  }
  else
  {
    (*(void (__thiscall **)(_VectorClass_PAVTiberiumClass *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x723872*/
    return 1; /*0x723878*/
  }
}



// ==== 0x00723880  _VectorClass_PAVTiberiumClass::Remove  this=VectorClass  sig=csp ====
void __thiscall VectorClass_ptr_TiberiumClass::Remove(_VectorClass_PAVTiberiumClass *this)
{
  if ( *(_DWORD *)&this->m_1[3] && BYTE1(this->m_C) ) /*0x72388d*/
  {
    __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x723893*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x72389b*/
  }
  BYTE1(this->m_C) = 0; /*0x72389e*/
  this->m_8 = 0; /*0x7238a1*/
}



// ==== 0x007238B0  _VectorClass_PAVTiberiumClass::GetSize  this=VectorClass  sig=csp ====
int __thiscall VectorClass_ptr_TiberiumClass::GetSize(_VectorClass_PAVTiberiumClass *this, _DWORD *a2)
{
  int result; // eax
  int m_8; // edx
  _DWORD *i; // ecx

  if ( !LOBYTE(this->m_C) ) /*0x7238b0*/
    return 0; /*0x7238b8*/
  m_8 = this->m_8; /*0x7238be*/
  result = 0; /*0x7238c1*/
  if ( m_8 <= 0 ) /*0x7238c5*/
    return -1; /*0x7238dc*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2; ++i ) /*0x7238cb*/
  {
    if ( ++result >= m_8 ) /*0x7238da*/
      return -1; /*0x7238da*/
  }
  return result; /*0x7238ba*/
}



// ==== 0x007238F0  _VectorClass_PAVTiberiumClass::GetCapacity  this=VectorClass  sig=csp ====
unsigned int __thiscall VectorClass_ptr_TiberiumClass::GetCapacity(_VectorClass_PAVTiberiumClass *this, int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x7238f0*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 2; /*0x723905*/
  else
    return 0; /*0x7238f7*/
}



// ==== 0x00723910  _DynamicVectorClass_PAVTiberiumClass::SetCapacity  this=DynamicVector  sig=csp ====
char __thiscall VectorClass_ptr_TiberiumClass::SetCapacity(
        _DynamicVectorClass_PAVTiberiumClass *this,
        int a2,
        _DWORD *a3)
{
  _DWORD *v4; // edi
  int m_8; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x72391c*/
  {
    LOBYTE(this->m_C) = 0; /*0x723922*/
    if ( a3 ) /*0x723928*/
      v4 = a3; /*0x72393e*/
    else
      v4 = (_DWORD *)__2_YAPAXI_Z(4 * a2); /*0x72393a*/
    LOBYTE(this->m_C) = 1; /*0x723942*/
    if ( !v4 ) /*0x723946*/
      return 0; /*0x7239ba*/
    if ( *(_DWORD *)&this->m_1[3] ) /*0x723948*/
    {
      m_8 = this->m_8; /*0x72394f*/
      if ( a2 < m_8 ) /*0x723954*/
        m_8 = a2; /*0x723956*/
      for ( i = 0; i < m_8; v4[i - 1] = *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * i - 4) ) /*0x72395c*/
        ++i; /*0x723961*/
      if ( BYTE1(this->m_C) ) /*0x72396e*/
      {
        __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x723979*/
        *(_DWORD *)&this->m_1[3] = 0; /*0x723981*/
      }
    }
    *(_DWORD *)&this->m_1[3] = v4; /*0x72398a*/
    this->m_8 = a2; /*0x723992*/
    BYTE1(this->m_C) = a3 == 0; /*0x723995*/
  }
  else
  {
    (*(void (__thiscall **)(_DynamicVectorClass_PAVTiberiumClass *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x72399e*/
  }
  v7 = this->m_8; /*0x7239a1*/
  if ( v7 < this->m_10 ) /*0x7239a9*/
    this->m_10 = v7; /*0x7239ab*/
  return 1; /*0x7239ae*/
}



// ==== 0x007239C0  _DynamicVectorClass_PAVTiberiumClass::FindItemIndex  this=DynamicVector  sig=csp ====
int __thiscall VectorClass_ptr_TiberiumClass::FindItemIndex(_DynamicVectorClass_PAVTiberiumClass *this, _DWORD *a2)
{
  int m_10; // edx
  int result; // eax
  _DWORD *i; // ecx

  m_10 = this->m_10; /*0x7239c0*/
  result = 0; /*0x7239c3*/
  if ( m_10 <= 0 ) /*0x7239c8*/
    return -1; /*0x7239df*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2; ++i ) /*0x7239ce*/
  {
    if ( ++result >= m_10 ) /*0x7239dd*/
      return -1; /*0x7239dd*/
  }
  return result; /*0x7239e2*/
}



// ==== 0x007239F0  _VectorClass_PAVTiberiumClass::QueryInterface  this=VectorClass  sig=csp ====
_DWORD *__thiscall VectorClass_ptr_TiberiumClass::QueryInterface(_VectorClass_PAVTiberiumClass *this, char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x7239f3*/
  *(_DWORD *)this->__pad_0 = &VectorClass<TiberiumClass *>::`vftable'; /*0x7239f6*/
  if ( v3 && BYTE1(this->m_C) ) /*0x723a00*/
  {
    __3_YAXPAX_Z(v3); /*0x723a08*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x723a10*/
  }
  BYTE1(this->m_C) = 0; /*0x723a1b*/
  this->m_8 = 0; /*0x723a21*/
  if ( (a2 & 1) != 0 ) /*0x723a28*/
    __3_YAXPAX_Z(this); /*0x723a2b*/
  return this->__pad_0; /*0x723a35*/
}



// ==== 0x00723A40  _DynamicVectorClass_PAVTiberiumClass::Constructor_VectorClass_TiberiumClass___  this=DynamicVector  sig=csp ====
_DWORD *__thiscall VectorClass_ptr_TiberiumClass::Constructor_VectorClass_TiberiumClass___(
        _DynamicVectorClass_PAVTiberiumClass *this,
        char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x723a43*/
  *(_DWORD *)this->__pad_0 = &VectorClass<TiberiumClass *>::`vftable'; /*0x723a46*/
  if ( v3 && BYTE1(this->m_C) ) /*0x723a50*/
  {
    __3_YAXPAX_Z(v3); /*0x723a58*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x723a60*/
  }
  BYTE1(this->m_C) = 0; /*0x723a6b*/
  this->m_8 = 0; /*0x723a71*/
  if ( (a2 & 1) != 0 ) /*0x723a78*/
    __3_YAXPAX_Z(this); /*0x723a7b*/
  return this->__pad_0; /*0x723a85*/
}



// ==== 0x00723A90  sub_723A90  this=-  sig=ida-proto ====
void sub_723A90()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x723a9c*/
  dbl_B0F538 = Math::Sqrt(v0 + v0); /*0x723aae*/
}



// ==== 0x00723AC0  sub_723AC0  this=-  sig=ida-proto ====
void sub_723AC0()
{
  dbl_B0F588 = dbl_B0F538 / 60.0; /*0x723acc*/
}



// ==== 0x00723AE0  sub_723AE0  this=-  sig=ida-proto ====
void sub_723AE0()
{
  dbl_B0F570 = 1.0 / dbl_B0F588; /*0x723aec*/
}



// ==== 0x00723B00  sub_723B00  this=-  sig=ida-proto ====
void sub_723B00()
{
  dbl_B0F568 = 0.0174532925199433 * 45.0; /*0x723b0c*/
}



// ==== 0x00723B20  sub_723B20  this=-  sig=ida-proto ====
void sub_723B20()
{
  dbl_B0F540 = 0.0174532925199433 * 60.0; /*0x723b2c*/
}



// ==== 0x00723B40  sub_723B40  this=-  sig=ida-proto ====
void sub_723B40()
{
  dbl_B0F518 = 0.0174532925199433 * 90.0; /*0x723b4c*/
}



// ==== 0x00723B60  sub_723B60  this=-  sig=ida-proto ====
__int64 sub_723B60()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_B0F518 - dbl_B0F540); /*0x723b72*/
  result = Math::RoundToInt(v0 * dbl_B0F538 * 0.5); /*0x723b86*/
  dword_B0F590 = result; /*0x723b8b*/
  return result; /*0x723b90*/
}



// ==== 0x00723BA0  sub_723BA0  this=-  sig=ida-proto ====
void sub_723BA0()
{
  dbl_B0F548 = Math::ArcTan((double)dword_B0F590 * 0.00390625); /*0x723bb7*/
}



// ==== 0x00723BD0  sub_723BD0  this=-  sig=ida-proto ====
void sub_723BD0()
{
  dbl_B0F560 = Math::ArcTan((double)(2 * dword_B0F590) / dbl_B0F538); /*0x723bf2*/
}



// ==== 0x00723C00  sub_723C00  this=-  sig=ida-proto ====
__int64 sub_723C00()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_B0F590) + 0.5); /*0x723c1b*/
  dword_B0F584 = result; /*0x723c20*/
  return result; /*0x723c26*/
}



// ==== 0x00723C30  sub_723C30  this=-  sig=ida-proto ====
int sub_723C30()
{
  word_B0F530 = 0; /*0x723c32*/
  word_B0F532 = 0; /*0x723c38*/
  return 0; /*0x723c3e*/
}



// ==== 0x00723C40  sub_723C40  this=-  sig=ida-proto ====
int sub_723C40()
{
  dword_B0F550 = 0; /*0x723c42*/
  dword_B0F554 = 0; /*0x723c47*/
  dword_B0F558 = 0; /*0x723c4c*/
  return 0; /*0x723c51*/
}



// ==== 0x00723C60  sub_723C60  this=-  sig=ida-proto ====
int sub_723C60()
{
  dword_B0F580 = 0; /*0x723c65*/
  dword_B0F578 = 128; /*0x723c6f*/
  dword_B0F57C = 128; /*0x723c74*/
  return 128; /*0x723c79*/
}



// ==== 0x00723C80  sub_723C80  this=-  sig=ida-proto ====
int sub_723C80()
{
  dword_B0F520 = 0; /*0x723c82*/
  dword_B0F524 = 0; /*0x723c87*/
  dword_B0F528 = 0; /*0x723c8c*/
  dword_B0F52C = 0; /*0x723c91*/
  return 0; /*0x723c96*/
}



// ==== 0x00723CA0  ScriptTypeClass::SetField  this=ScriptTypeClass  sig=csp ====
char *__thiscall ScriptTypeClass::SetField(ScriptTypeClass *this, char *Buffer)
{
  char *result; // eax
  void *v4; // ecx
  void *v5; // [esp+4h] [ebp-4h] BYREF

  result = Buffer; /*0x723ca1*/
  if ( Buffer ) /*0x723caa*/
  {
    sscanf(Buffer, "%d,%d", &Buffer, &v5); /*0x723cbc*/
    result = Buffer; /*0x723cc1*/
    v4 = v5; /*0x723cc5*/
    this->AbstractClass = Buffer; /*0x723ccc*/
    this->? = v4; /*0x723cce*/
  }
  return result; /*0x723cd1*/
}



// ==== 0x00723CE0  ScriptTypeClass::FormatToString  this=ScriptTypeClass  sig=csp ====
unsigned int __thiscall ScriptTypeClass::FormatToString(ScriptTypeClass *this, char *Buffer)
{
  if ( !Buffer ) /*0x723ce7*/
    return 0; /*0x723d0e*/
  sprintf(Buffer, "%d,%d", this->AbstractClass, this->?); /*0x723cf6*/
  return strlen(Buffer); /*0x723d08*/
}



// ==== 0x00723E40  sub_723E40  this=-  sig=ida-proto ====
int sub_723E40()
{
  dword_B0F598 = 0; /*0x723e42*/
  dword_B0F59C = 0; /*0x723e47*/
  dword_B0F5A0 = 0; /*0x723e4c*/
  dword_B0F5A4 = 0; /*0x723e51*/
  return 0; /*0x723e56*/
}



// ==== 0x00723E60  ToggleClass::Construct  this=ToggleClass  sig=csp ====
int __thiscall ToggleClass::Construct(int this, int a2, int a3, int a4, int a5, int a6)
{
  ControlClass::Construct((ControlClass *)this, a2, a3, a4, a5, a6, 5, 1); /*0x723e82*/
  *(_DWORD *)this = &ToggleClass::`vftable'; /*0x723e89*/
  *(_BYTE *)(this + 44) = 0; /*0x723e8f*/
  *(_BYTE *)(this + 45) = 0; /*0x723e92*/
  *(_DWORD *)(this + 48) = 0; /*0x723e95*/
  return this; /*0x723e9a*/
}



// ==== 0x00723EA0  GadgetClass::Show  this=GadgetClass  sig=csp ====
int __thiscall GadgetClass::Show(GadgetClass *this)
{
  int v1; // eax

  v1 = *(_DWORD *)this->__pad_0; /*0x723ea0*/
  *((_BYTE *)this + 45) = 1; /*0x723ea2*/
  return (*(int (**)(void))(v1 + 72))();
}



// ==== 0x00723EB0  GadgetClass::Hide  this=GadgetClass  sig=csp ====
int __thiscall GadgetClass::Hide(GadgetClass *this)
{
  int v1; // eax

  v1 = *(_DWORD *)this->__pad_0; /*0x723eb0*/
  *((_BYTE *)this + 45) = 0; /*0x723eb2*/
  return (*(int (**)(void))(v1 + 72))();
}



// ==== 0x00723EC0  ToggleClass::ProcessMouseOver  this=ToggleClass  sig=csp ====
int __thiscall GadgetClass::ProcessMouseOver(ToggleClass *this, unsigned int a2, _DWORD *a3, int a4)
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

  if ( (unsigned int)((*(int (__thiscall **)(void *))(*(_DWORD *)stru_887598.lineTrailer + 44))(stru_887598.lineTrailer) /*0x723ef6*/
                    - *((_DWORD *)this + 3)) >= *((_DWORD *)this + 5)
    || (v14 = 1,
        (unsigned int)((*(int (__thiscall **)(void *))(*(_DWORD *)stru_887598.lineTrailer + 48))(stru_887598.lineTrailer)
                     - this->q004) >= *((_DWORD *)this + 6)) )
  {
    v14 = 0; /*0x723ef8*/
  }
  v5 = a2; /*0x723efd*/
  if ( !a2 ) /*0x723f03*/
  {
    v6 = *((_BYTE *)this + 44); /*0x723f0b*/
    if ( v14 ) /*0x723f0e*/
    {
      if ( !v6 ) /*0x723f12*/
      {
        v7 = *(_DWORD *)this->__pad_0; /*0x723f14*/
        *((_BYTE *)this + 44) = 1; /*0x723f18*/
        (*(void (__thiscall **)(ToggleClass *))(v7 + 72))(this); /*0x723f1c*/
      }
    }
    else if ( v6 ) /*0x723f23*/
    {
      v8 = *(_DWORD *)this->__pad_0; /*0x723f25*/
      *((_BYTE *)this + 44) = 0; /*0x723f29*/
      (*(void (__thiscall **)(ToggleClass *))(v8 + 72))(this); /*0x723f2d*/
    }
  }
  (*(void (__thiscall **)(ToggleClass *, unsigned int))(*(_DWORD *)this->__pad_0 + 120))(this, a2); /*0x723f35*/
  if ( (a2 & 0x11) != 0 ) /*0x723f3b*/
  {
    v9 = *(_DWORD *)this->__pad_0; /*0x723f3d*/
    *((_BYTE *)this + 44) = 1; /*0x723f42*/
    (*(void (__thiscall **)(ToggleClass *))(v9 + 72))(this); /*0x723f46*/
    CellClass::Draw((ControlClass *)this, a2 & 0xFFFFFFEE, a3, 0); /*0x723f56*/
    *a3 = 0; /*0x723f5b*/
    return 1; /*0x723f6a*/
  }
  if ( (a2 & 0x44) != 0 ) /*0x723f70*/
  {
    if ( !*((_BYTE *)this + 44) ) /*0x723f77*/
    {
      v5 = a2 & 0xFFFFFFBB; /*0x723fbe*/
      return CellClass::Draw((ControlClass *)this, v5, a3, 0); /*0x723fbe*/
    }
    if ( v14 ) /*0x723f7f*/
    {
      v11 = *((_DWORD *)this + 12); /*0x723f81*/
      if ( v11 == 1 ) /*0x723f87*/
      {
        v12 = *(_DWORD *)this->__pad_0; /*0x723f8c*/
        *((_BYTE *)this + 45) = *((_BYTE *)this + 45) == 0; /*0x723f95*/
        *((_BYTE *)this + 44) = 0; /*0x723f98*/
        (*(void (__thiscall **)(ToggleClass *))(v12 + 72))(this); /*0x723f9c*/
        return CellClass::Draw((ControlClass *)this, v5, a3, 0); /*0x723f9f*/
      }
      if ( v11 == 2 && !*((_BYTE *)this + 45) ) /*0x723fa6*/
        *((_BYTE *)this + 45) = 1; /*0x723fad*/
    }
    v13 = *(_DWORD *)this->__pad_0; /*0x723fb1*/
    *((_BYTE *)this + 44) = 0; /*0x723fb5*/
    (*(void (__thiscall **)(ToggleClass *))(v13 + 72))(this); /*0x723fb9*/
  }
  return CellClass::Draw((ControlClass *)this, v5, a3, 0); /*0x723f62*/
}



// ==== 0x00723FE0  sub_723FE0  this=-  sig=ida-proto ====
int sub_723FE0()
{
  dword_B0F5A8 = 0; /*0x723fe2*/
  dword_B0F5AC = 0; /*0x723fe7*/
  dword_B0F5B0 = 0; /*0x723fec*/
  dword_B0F5B4 = 0; /*0x723ff1*/
  return 0; /*0x723ff6*/
}



// ==== 0x00724000  ToolTipManager::MainWindowProc_Helper  this=ToolTipManager  sig=csp ====
char *__thiscall sub_724000(char *this, int a2)
{
  char *v3; // ecx
  int v4; // edx

  v3 = this + 564; /*0x72400a*/
  this->Position = 0; /*0x724010*/
  this->u32_8 = a2; /*0x724013*/
  this->ToolTipText = 0; /*0x724016*/
  this->q08A = 1000; /*0x724019*/
  *((_DWORD *)this + 140) = 10000; /*0x724023*/
  *((_DWORD *)v3 + 1) = 0; /*0x72402d*/
  *((_DWORD *)v3 + 2) = 0; /*0x724030*/
  v3[12] = 1; /*0x724033*/
  v3[13] = 0; /*0x724037*/
  *(_DWORD *)v3 = &DynamicVectorClass<ToolTip const *>::`vftable'; /*0x72403a*/
  *((_DWORD *)v3 + 5) = 10; /*0x724040*/
  *((_DWORD *)v3 + 4) = 0; /*0x724047*/
  *((_DWORD *)this + 147) = 0; /*0x72404a*/
  *((_DWORD *)this + 148) = 0; /*0x724050*/
  *((_DWORD *)this + 149) = 0; /*0x724056*/
  *(this + 600) = 0; /*0x72405c*/
  *((_DWORD *)this + 151) = 0; /*0x724062*/
  v4 = *(_DWORD *)v3; /*0x724068*/
  *(_DWORD *)this = &ToolTipManager::`vftable'; /*0x72406a*/
  (*(void (__thiscall **)(char *))(v4 + 12))(v3); /*0x724070*/
  __3_YAXPAX_Z(*((void **)this + 147)); /*0x72407a*/
  *((_DWORD *)this + 147) = 0; /*0x724082*/
  *((_DWORD *)this + 148) = 0; /*0x724088*/
  *((_DWORD *)this + 149) = 0; /*0x72408e*/
  *(this + 600) = 0; /*0x724094*/
  *((_DWORD *)this + 151) = 0; /*0x72409a*/
  return this; /*0x7240a2*/
}



// ==== 0x007240B0  ToolTipClass::updateString  this=ToolTipManager  sig=csp ====
void __thiscall ToolTipClass::updateString(ToolTipClass *this)
{
  HWND ToolTipClass_field_0x08; // eax
  int i; // edi
  int v4; // edx
  void *v5; // eax

  ToolTipClass_field_0x08 = (HWND)this->ToolTipClass_field_0x08; /*0x7240ba*/
  *(_DWORD *)this->__pad_0 = &ToolTipManager::`vftable'; /*0x7240bd*/
  KillTimer(ToolTipClass_field_0x08, 0x54544950u); /*0x7240c4*/
  if ( this->ToolTipClass_field_0x04 ) /*0x7240ca*/
    (*(void (__thiscall **)(ToolTipClass *, int *))(*(_DWORD *)this->__pad_0 + 8))(this, &this->ToolTipClass_field_0x18); /*0x7240db*/
  __3_YAXPAX_Z(*((void **)this + 147)); /*0x7240e5*/
  *((_DWORD *)this + 147) = 0; /*0x7240ea*/
  *((_DWORD *)this + 148) = 0; /*0x7240f0*/
  *((_DWORD *)this + 149) = 0; /*0x7240f6*/
  *((_BYTE *)this + 600) = 0; /*0x7240fc*/
  *((_DWORD *)this + 151) = 0; /*0x724102*/
  for ( i = 0; i < this->q091; ++i ) /*0x724115*/
  {
    v4 = this->q08E; /*0x724117*/
    if ( *(_DWORD *)(v4 + 4 * i) ) /*0x72411d*/
      __3_YAXPAX_Z(*(void **)(v4 + 4 * i)); /*0x724125*/
  }
  (*(void (__thiscall **)(char *))(this->q08D + 12))((char *)this + 564); /*0x724146*/
  __3_YAXPAX_Z(*((void **)this + 147)); /*0x724150*/
  *((_DWORD *)this + 147) = 0; /*0x724155*/
  *((_DWORD *)this + 148) = 0; /*0x72415b*/
  *((_DWORD *)this + 149) = 0; /*0x724161*/
  *((_BYTE *)this + 600) = 0; /*0x724167*/
  *((_DWORD *)this + 151) = 0; /*0x72416d*/
  v5 = (void *)this->q08E; /*0x724173*/
  this->q08D = &VectorClass<ToolTip const *>::`vftable'; /*0x72417b*/
  if ( v5 && *((_BYTE *)this + 577) ) /*0x724183*/
  {
    __3_YAXPAX_Z(v5); /*0x724189*/
    this->q08E = 0; /*0x724191*/
  }
  *((_BYTE *)this + 577) = 0; /*0x724194*/
  *((_DWORD *)this + 143) = 0; /*0x724197*/
}



// ==== 0x007241A0  Tooltip::Enable  this=Tooltip  sig=csp ====
int __thiscall Tooltip::Enable(Tooltip *this, char a2)
{
  int result; // eax

  LOBYTE(result) = a2; /*0x7241a0*/
  if ( *((_BYTE *)this + 12) != a2 ) /*0x7241aa*/
  {
    *((_BYTE *)this + 12) = a2; /*0x7241ae*/
    if ( !a2 ) /*0x7241b1*/
    {
      KillTimer(*((HWND *)this + 2), 0x54544950u); /*0x7241bc*/
      if ( *((_DWORD *)this + 1) ) /*0x7241c2*/
        (*(void (__thiscall **)(Tooltip *, Tooltip *))(*(_DWORD *)this + 8))(this, this + 6); /*0x7241d1*/
    }
    return Debug::Log(); /*0x7241eb*/
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
          if ( (unsigned __int8)ToolTipClass::initString((ToolTipClass *)this) ) /*0x7243cc*/
            goto LABEL_31; /*0x7243d3*/
        }
        break; /*0x7243d3*/
      case 0x200: /*0x72422f*/
        if ( *(_DWORD *)(this + 552) && !LOBYTE(stru_A8EB00.__pad_CD4[1]) ) /*0x724258*/
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
        if ( (unsigned __int8)ToolTipClass::initString((ToolTipClass *)this) ) /*0x724311*/
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
int __thiscall sub_724510(TechnoClass *this)
{
  return this->cloakProgress[1]; /*0x724516*/
}



// ==== 0x00724520  SidebarClass::initializeStrip  this=SidebarClass  sig=csp ====
int __thiscall SidebarClass::initializeStrip(SidebarClass *this, int a2)
{
  this->SidebarClass_field_0x228 = (void *)a2; /*0x724524*/
  return a2; /*0x72452a*/
}



// ==== 0x00724530  SidebarClass::updateStripVisibility  this=SidebarClass  sig=csp ====
int __thiscall SidebarClass::updateStripVisibility(SidebarClass *this)
{
  int result; // eax

  result = (int)this->SidebarClass_field_0x228; /*0x724530*/
  this->SidebarClass_field_0x22C = (void *)result; /*0x724536*/
  return result; /*0x72453c*/
}



// ==== 0x00724540  SidebarClass::updateStripPosition  this=SidebarClass  sig=csp ====
int __thiscall SidebarClass::updateStripPosition(SidebarClass *this)
{
  int result; // eax

  result = (int)this->SidebarClass_field_0x22C; /*0x724540*/
  this->SidebarClass_field_0x228 = (void *)result; /*0x724546*/
  return result; /*0x72454c*/
}



// ==== 0x00724550  ObjectClass::method  this=ObjectClass  sig=csp ====
int __thiscall sub_724550(TechnoClass *this)
{
  return this->cloakProgress[3]; /*0x724556*/
}



// ==== 0x00724560  ObjectClass::method  this=ObjectClass  sig=csp ====
int __thiscall sub_724560(_DWORD *this, int a2)
{
  this->onBridge = a2; /*0x724564*/
  return a2; /*0x72456a*/
}



// ==== 0x00724570  ObjectClass::method  this=ObjectClass  sig=csp ====
int __thiscall sub_724570(TechnoClass *this)
{
  return this->cloakDelayTimer[1]; /*0x724576*/
}



// ==== 0x00724580  CommandClass::AddAction  this=ToolTipManager  sig=csp ====
int __thiscall CommandClass::AddAction(int *this, int a2)
{
  int v2; // edi
  int *v4; // esi
  int result; // eax
  _DWORD *v6; // ebp
  int v7; // eax
  int v8; // ecx
  int v9; // eax
  int v10; // edx
  int v11; // ebx
  int v12; // edi
  int i; // eax
  char *v14; // ecx
  int v15; // ecx

  v2 = a2; /*0x724584*/
  v4 = this + 147; /*0x72458c*/
  a2 = *(_DWORD *)a2; /*0x724592*/
  if ( *(this + 148) ) /*0x724596*/
  {
    if ( CommandClass::executeAction(this + 147, &a2) ) /*0x7245a4*/
      goto LABEL_22; /*0x7245ab*/
    result = CommandClass::BinarySearchAction((char **)v4, (unsigned int *)&a2); /*0x7245b8*/
    if ( result ) /*0x7245bf*/
    {
      v4[4] = result; /*0x7245c1*/
      LOBYTE(result) = 0; /*0x7245c7*/
      return result; /*0x7245ca*/
    }
  }
  result = __2_YAPAXI_Z(0x1Cu); /*0x7245cf*/
  v6 = (_DWORD *)result; /*0x7245d4*/
  if ( result ) /*0x7245db*/
  {
    *(_DWORD *)result = *(_DWORD *)v2; /*0x7245e6*/
    *(_DWORD *)(result + 4) = *(_DWORD *)(v2 + 4); /*0x7245ee*/
    *(_DWORD *)(result + 8) = *(_DWORD *)(v2 + 8); /*0x7245f3*/
    *(_DWORD *)(result + 12) = *(_DWORD *)(v2 + 12); /*0x7245f9*/
    *(_DWORD *)(result + 16) = *(_DWORD *)(v2 + 16); /*0x7245ff*/
    *(_DWORD *)(result + 20) = *(_DWORD *)(v2 + 20); /*0x724605*/
    *(_BYTE *)(result + 24) = *(_BYTE *)(v2 + 24); /*0x724611*/
    v7 = *(this + 143); /*0x724614*/
    if ( this->q091 < v7 /*0x724641*/
      || (*((_BYTE *)this + 577) || !v7)
      && (v8 = *(this + 146), v8 > 0)
      && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(this->q08D + 8))(this + 141, v7 + v8, 0) )
    {
      v9 = this->q091; /*0x72464c*/
      v10 = this->q08E; /*0x72464f*/
      this->q091 = v9 + 1; /*0x724655*/
      *(_DWORD *)(v10 + 4 * v9) = v6; /*0x724658*/
      result = v4[2]; /*0x72465e*/
      if ( v4[1] + 1 <= result ) /*0x724664*/
      {
LABEL_19:
        *(_DWORD *)(*v4 + 8 * v4[1]) = *v6; /*0x7246f4*/
        *(_DWORD *)(*v4 + 8 * v4[1] + 4) = v6; /*0x724704*/
        result = v4[1] + 1; /*0x72470b*/
        *((_BYTE *)v4 + 12) = 0; /*0x72470c*/
        v4[1] = result; /*0x724710*/
        goto LABEL_20; /*0x724710*/
      }
      if ( result ) /*0x72466c*/
      {
        a2 = v4[2]; /*0x72467c*/
        if ( result < 0 ) /*0x724680*/
          goto LABEL_20; /*0x724680*/
      }
      else
      {
        a2 = 10; /*0x72466e*/
      }
      v11 = result + a2; /*0x72468a*/
      result = __2_YAPAXI_Z(8 * (result + a2)); /*0x724695*/
      v12 = result; /*0x72469a*/
      if ( result ) /*0x7246a1*/
      {
        Array::ForEach((int *)result, 8, v11, (int (__thiscall *)(int))__0Iostream_init_QAE_XZ_6); /*0x7246ac*/
        for ( i = 0; i < v4[1]; *(_DWORD *)(v12 + 8 * i - 4) = *(_DWORD *)&v14[8 * i - 4] ) /*0x7246b8*/
        {
          v14 = (char *)*v4; /*0x7246ba*/
          ++i; /*0x7246bc*/
          *(_DWORD *)(v12 + 8 * i - 8) = *(_DWORD *)(*v4 + 8 * i - 8); /*0x7246c1*/
        }
        __3_YAXPAX_Z((void *)*v4); /*0x7246d7*/
        v15 = a2 + v4[2]; /*0x7246e6*/
        *v4 = v12; /*0x7246e8*/
        v4[2] = v15; /*0x7246ea*/
        v4[4] = 0; /*0x7246ed*/
        goto LABEL_19; /*0x7246ed*/
      }
LABEL_20:
      LOBYTE(result) = 1; /*0x724713*/
      return result; /*0x724719*/
    }
    __3_YAXPAX_Z(v6); /*0x72471d*/
  }
LABEL_22:
  LOBYTE(result) = 0; /*0x724725*/
  return result; /*0x7245c4*/
}



// ==== 0x00724730  HashTable::Remove  this=HashTable  sig=csp ====
void __thiscall HashTable::Remove(HashTable *this, int a2)
{
  HashTable *v3; // esi
  _DWORD *v4; // eax
  int v5; // eax
  _DWORD *HashTable_field_0x10; // eax
  int v7; // eax
  void **v8; // eax
  void *v9; // eax
  int HashTable_field_0x04; // ecx
  unsigned int *v11; // edi
  size_t v12; // eax
  int v13; // ecx
  int v14; // eax
  int v15; // eax
  int i; // ecx
  _DWORD *v17; // eax
  CommandClass v18; // edi
  int v19; // eax
  int v20; // eax
  int v21; // ecx
  int v22; // ecx
  void *Block; // [esp+8h] [ebp-Ch] BYREF
  unsigned int v24; // [esp+Ch] [ebp-8h] BYREF

  v3 = this + 7; /*0x72473d*/
  if ( !*((_DWORD *)this + 148) ) /*0x724745*/
    return; /*0x724745*/
  v4 = (_DWORD *)*((_DWORD *)this + 151); /*0x72474b*/
  if ( !v4 || *v4 != a2 ) /*0x72475a*/
  {
    v5 = CommandClass::BinarySearchAction((CommandClass *)v3, (unsigned int *)&a2); /*0x724763*/
    if ( !v5 ) /*0x72476a*/
      return; /*0x72476a*/
    v3->HashTable_field_0x10 = v5; /*0x724770*/
  }
  if ( v3->HashTable_field_0x04 ) /*0x724773*/
  {
    HashTable_field_0x10 = (_DWORD *)v3->HashTable_field_0x10; /*0x72477a*/
    if ( HashTable_field_0x10 && *HashTable_field_0x10 == a2 ) /*0x724789*/
      goto LABEL_11; /*0x724789*/
    v7 = CommandClass::BinarySearchAction((CommandClass *)v3, (unsigned int *)&a2); /*0x724792*/
    if ( v7 ) /*0x724799*/
    {
      v3->HashTable_field_0x10 = v7; /*0x72479b*/
LABEL_11:
      v8 = (void **)(v3->HashTable_field_0x10 + 4); /*0x72479e*/
      goto LABEL_13; /*0x7247a4*/
    }
  }
  v8 = (void **)&unk_B78820; /*0x7247a6*/
LABEL_13:
  v9 = *v8; /*0x7247ab*/
  HashTable_field_0x04 = this->HashTable_field_0x04; /*0x7247ad*/
  Block = v9; /*0x7247b2*/
  if ( (void *)HashTable_field_0x04 == v9 && HashTable_field_0x04 ) /*0x7247ba*/
  {
    (*(void (__thiscall **)(HashTable *, int *))(*(_DWORD *)this->__pad_0 + 8))(this, &this->HashTable_field_0x18); /*0x7247c5*/
    v9 = Block; /*0x7247c8*/
  }
  v11 = (unsigned int *)v9; /*0x7247cd*/
  v12 = v3->HashTable_field_0x04; /*0x7247cf*/
  if ( v12 ) /*0x7247d4*/
  {
    if ( !LOBYTE(v3->HashTable_field_0x0C) ) /*0x7247da*/
    {
      qsort(*(void **)v3->__pad_0, v12, 8u, (_CoreCrtNonSecureSearchSortCompareFunction)CompareFunc2Int); /*0x7247ec*/
      v3->HashTable_field_0x10 = 0; /*0x7247f4*/
      LOBYTE(v3->HashTable_field_0x0C) = 1; /*0x7247fb*/
    }
    v13 = *(_DWORD *)v3->__pad_0; /*0x724801*/
    v24 = *v11; /*0x724807*/
    v14 = UI_Remove(v13, v3->HashTable_field_0x04, &v24); /*0x72480f*/
    if ( v14 ) /*0x724816*/
    {
      v15 = (v14 - *(_DWORD *)v3->__pad_0) >> 3; /*0x72481a*/
      if ( v15 != -1 ) /*0x724820*/
      {
        for ( i = v15 + 1; i < v3->HashTable_field_0x04; *(v17 - 1) = v17[1] ) /*0x72482a*/
        {
          v17 = (_DWORD *)(*(_DWORD *)v3->__pad_0 + 8 * i++); /*0x72482e*/
          *(v17 - 2) = *v17; /*0x724834*/
        }
        v18 = *(CommandClass *)v3->__pad_0; /*0x724847*/
        v19 = v3->HashTable_field_0x04 - 1; /*0x724849*/
        v3->HashTable_field_0x04 = v19; /*0x72484c*/
        *(_DWORD *)(*(_DWORD *)&v18 + 8 * v19) = 0; /*0x724851*/
        *(_DWORD *)(*(_DWORD *)&v18 + 8 * v19 + 4) = 0; /*0x724854*/
        v3->HashTable_field_0x10 = 0; /*0x724858*/
      }
    }
  }
  v20 = (*(int (__thiscall **)(char *, void **))(*((_DWORD *)this + 141) + 16))((char *)this + 564, &Block); /*0x72486e*/
  if ( v20 != -1 ) /*0x724875*/
  {
    v21 = *((_DWORD *)this + 145); /*0x724877*/
    if ( v20 < v21 ) /*0x72487c*/
    {
      v22 = v21 - 1; /*0x72487e*/
      for ( *((_DWORD *)this + 145) = v22; /*0x724884*/
            v20 < *((_DWORD *)this + 145);
            *(_DWORD *)(*((_DWORD *)this + 142) + 4 * v20 - 4) = *(_DWORD *)(*((_DWORD *)this + 142) + 4 * v20) )
      {
        ++v20; /*0x724889*/
      }
    }
  }
  if ( Block ) /*0x72489e*/
    __3_YAXPAX_Z(Block); /*0x7248a1*/
}



// ==== 0x007248C0  TooltipClass::GetText  this=TooltipClass  sig=csp ====
char __thiscall TooltipClass::GetText(TooltipClass *this, unsigned int a2, void *a3)
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

  v4 = *((_DWORD *)this + 148); /*0x7248c6*/
  if ( !v4 ) /*0x7248ce*/
    return 0; /*0x7248ce*/
  v5 = (_DWORD *)*((_DWORD *)this + 151); /*0x7248d0*/
  if ( !v5 || *v5 != a2 ) /*0x7248e0*/
  {
    if ( !*((_BYTE *)this + 600) ) /*0x7248e2*/
    {
      qsort(*((void **)this + 147), v4, 8u, (_CoreCrtNonSecureSearchSortCompareFunction)CompareFunc2Int); /*0x7248fb*/
      *((_DWORD *)this + 151) = 0; /*0x724903*/
      *((_BYTE *)this + 600) = 1; /*0x72490d*/
    }
    v6 = *((_DWORD *)this + 148); /*0x724914*/
    v7 = *((_DWORD *)this + 147); /*0x72491a*/
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
            *((_DWORD *)this + 151) = v9; /*0x724958*/
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
  v11 = *((_DWORD *)this + 148); /*0x72496a*/
  if ( !v11 ) /*0x724972*/
    goto LABEL_27; /*0x724972*/
  v12 = (_DWORD *)*((_DWORD *)this + 151); /*0x724978*/
  if ( v12 && *v12 == a2 ) /*0x724984*/
  {
LABEL_32:
    v17 = (const void **)(*((_DWORD *)this + 151) + 4); /*0x724a1e*/
    goto LABEL_28; /*0x724a27*/
  }
  if ( !*((_BYTE *)this + 600) ) /*0x72498a*/
  {
    qsort(*((void **)this + 147), v11, 8u, (_CoreCrtNonSecureSearchSortCompareFunction)CompareFunc2Int); /*0x7249a3*/
    *((_DWORD *)this + 151) = 0; /*0x7249ab*/
    *((_BYTE *)this + 600) = 1; /*0x7249b5*/
  }
  v13 = *((_DWORD *)this + 148); /*0x7249bc*/
  v14 = *((_DWORD *)this + 147); /*0x7249c2*/
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
    *((_DWORD *)this + 151) = v16; /*0x724a18*/
    goto LABEL_32; /*0x724a18*/
  }
LABEL_27:
  v17 = (const void **)&unk_B78820; /*0x7249f9*/
LABEL_28:
  qmemcpy(a3, *v17, 0x1Cu); /*0x7249fe*/
  return 1; /*0x72494b*/
}



// ==== 0x00724A30  ObjectClass::method_724A30  this=ObjectClass  sig=csp ====
int __thiscall sub_724A30(TechnoClass *this, int *a2)
{
  int v2; // ebp
  int v3; // ebx
  int v4; // esi
  int v5; // edi
  int *v6; // eax
  int v7; // edx
  int v8; // ecx
  int v10; // [esp+10h] [ebp-4h]

  v2 = this->cloakDelayTimer[1]; /*0x724a33*/
  v3 = 0; /*0x724a39*/
  if ( v2 <= 0 ) /*0x724a3f*/
    return 0; /*0x724a86*/
  v10 = this->cloakProgress[5]; /*0x724a4b*/
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
char __stdcall ToolTipManager::addRef(ToolTipManager *this)
{
  return 1; /*0x724aa2*/
}



// ==== 0x00724AB0  ToolTipManager::release  this=ToolTipManager  sig=csp ====
int __thiscall ToolTipManager::release(ToolTipManager *this, int a2)
{
  this->DisplayTimer[1] = 0; /*0x724ab2*/
  this->DisplayTimer[2] = 0; /*0x724ab5*/
  this->TextBuffer[0] = 0; /*0x724ab8*/
  this->TextBuffer[1] = 0; /*0x724abb*/
  this->Position[0] = 0; /*0x724abe*/
  return 0; /*0x724ac1*/
}



// ==== 0x00724AD0  ToolTipClass::initString  this=ToolTipClass  sig=csp ====
int __thiscall ToolTipClass::initString(ToolTipClass *this)
{
  _DWORD *ToolTipClass_field_0x04; // eax
  wchar_t *v3; // ecx
  wchar_t *StringCSF; // eax
  const wchar_t *v5; // edi
  int ToolTipClass_field_0x10; // edx

  ToolTipClass_field_0x04 = (_DWORD *)this->ToolTipClass_field_0x04; /*0x724ad7*/
  if ( ToolTipClass_field_0x04 ) /*0x724adc*/
  {
    v3 = (wchar_t *)ToolTipClass_field_0x04[5]; /*0x724ae2*/
    if ( v3 ) /*0x724ae7*/
      StringCSF = GetStringCSF(v3, 0, aDRa2mdpostTool, 563); /*0x724b01*/
    else
      StringCSF = (wchar_t *)(*(int (__thiscall **)(ToolTipClass *, _DWORD))(*(_DWORD *)this->__pad_0 + 20))( /*0x724af0*/
                               this,
                               *ToolTipClass_field_0x04);
    v5 = StringCSF; /*0x724b06*/
    if ( StringCSF && wcslen(StringCSF) ) /*0x724b0d*/
    {
      wcsncpy((wchar_t *)&this->ToolTipClass_field_0x28, v5, 0x100u); /*0x724b23*/
      ToolTipClass_field_0x10 = this->ToolTipClass_field_0x10; /*0x724b28*/
      this->ToolTipClass_field_0x1C = this->ToolTipClass_field_0x14; /*0x724b36*/
      this->ToolTipClass_field_0x18 = ToolTipClass_field_0x10; /*0x724b39*/
      if ( !(*(unsigned __int8 (__thiscall **)(ToolTipClass *, int *))(*(_DWORD *)this->__pad_0 + 4))( /*0x724b3e*/
              this,
              &this->ToolTipClass_field_0x18) )
      {
        this->ToolTipClass_field_0x18 = 0; /*0x724b47*/
        this->ToolTipClass_field_0x1C = 0; /*0x724b49*/
        this->ToolTipClass_field_0x20 = 0; /*0x724b4c*/
        this->ToolTipClass_field_0x24 = 0; /*0x724b4f*/
        this->ToolTipClass_field_0x04 = 0; /*0x724b54*/
        return 0; /*0x724b5f*/
      }
    }
    else
    {
      this->ToolTipClass_field_0x18 = 0; /*0x724b60*/
      this->ToolTipClass_field_0x1C = 0; /*0x724b63*/
      this->ToolTipClass_field_0x20 = 0; /*0x724b66*/
      this->ToolTipClass_field_0x24 = 0; /*0x724b69*/
      this->ToolTipClass_field_0x04 = 0; /*0x724b6c*/
    }
  }
  return this->ToolTipClass_field_0x04 != 0; /*0x724b59*/
}



// ==== 0x00724B80  ToolTipManager::ddtor  this=ToolTipManager  sig=csp ====
int __thiscall ToolTipManager::ddtor(ToolTipManager *this, char a2)
{
  int result; // eax

  if ( a2 == 1 ) /*0x724b89*/
    ToolTipClass::initString((ToolTipClass *)this); /*0x724b8b*/
  result = this->Position[0]; /*0x724b90*/
  if ( result ) /*0x724b95*/
    return (*(int (__thiscall **)(ToolTipManager *, int *))(*(_DWORD *)&this->IsVisible + 16))( /*0x724b9f*/
             this,
             &this->DisplayTimer[1]);
  return result; /*0x724ba2*/
}



// ==== 0x00724BB0  ToolTipManager::read  this=ToolTipManager  sig=csp ====
void __stdcall ToolTipManager::read(ToolTipManager *this)
{
  Debug::Log(); /*0x724bbd*/
}



// ==== 0x00724BD0  ToolTipManager::stubReturnFalse  this=ToolTipManager  sig=csp ====
int __stdcall ToolTipManager::stubReturnFalse(ToolTipManager *this)
{
  return 0; /*0x724bd2*/
}



// ==== 0x00724C00  Frame::Init  this=Frame  sig=csp ====
BOOL __thiscall Frame::Init(Frame *this)
{
  return this->q004 != 0; /*0x724c0a*/
}



// ==== 0x00724C10  ToolTipManager::Destructor  this=ToolTipManager  sig=csp ====
void *__thiscall ToolTipClass::Destructor(ToolTipManager *this, char a2)
{
  ToolTipClass::updateString((ToolTipClass *)this); /*0x724c13*/
  if ( (a2 & 1) != 0 ) /*0x724c1d*/
    __3_YAXPAX_Z(this); /*0x724c20*/
  return this; /*0x724c2a*/
}



// ==== 0x00724C30  _DynamicVectorClass_PBVToolTip::ddtor  this=DynamicVector  sig=csp ====
void __thiscall ToolTipClass::ddtor(_DynamicVectorClass_PBVToolTip *this)
{
  void *v2; // eax

  v2 = *(void **)&this->m_1[3]; /*0x724c36*/
  this->m_10 = 0; /*0x724c39*/
  if ( v2 && BYTE1(this->m_C) ) /*0x724c40*/
  {
    __3_YAXPAX_Z(v2); /*0x724c46*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x724c4e*/
  }
  BYTE1(this->m_C) = 0; /*0x724c51*/
  this->m_8 = 0; /*0x724c54*/
}



// ==== 0x00724C60  _DynamicVectorClass_PBVToolTip::write  this=DynamicVector  sig=csp ====
unsigned int __thiscall ToolTipClass::write(_DynamicVectorClass_PBVToolTip *this, int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x724c60*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 2; /*0x724c75*/
  else
    return 0; /*0x724c67*/
}



// ==== 0x00724C80  _VectorClass_PBVToolTip::seek  this=VectorClass  sig=csp ====
int __thiscall ToolTipClass::seek(_VectorClass_PBVToolTip *this, int a2)
{
  return *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * a2); /*0x724c8a*/
}



// ==== 0x00724C90  _VectorClass_PBVToolTip::addRef  this=VectorClass  sig=csp ====
char __thiscall ToolTipClass::addRef(_VectorClass_PBVToolTip *this, int a2)
{
  int m_8; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  m_8 = this->m_8; /*0x724c92*/
  if ( m_8 == *(_DWORD *)(a2 + 8) ) /*0x724c9d*/
  {
    v3 = 0; /*0x724c9f*/
    if ( m_8 <= 0 ) /*0x724ca3*/
      return 1; /*0x724cc3*/
    v4 = *(_DWORD **)&this->m_1[3]; /*0x724ca5*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x724cab*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x724cb4*/
    {
      ++v3; /*0x724cb6*/
      ++v4; /*0x724cb7*/
      if ( v3 >= m_8 ) /*0x724cbc*/
        return 1; /*0x724cbc*/
    }
  }
  return 0; /*0x724cbe*/
}



// ==== 0x00724CD0  _VectorClass_PBVToolTip::readString  this=VectorClass  sig=csp ====
char __thiscall ToolTipClass::readString(_VectorClass_PBVToolTip *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int m_8; // ecx
  int i; // eax

  if ( a2 ) /*0x724cdc*/
  {
    LOBYTE(this->m_C) = 0; /*0x724ce6*/
    if ( a3 ) /*0x724cec*/
      v4 = a3; /*0x724d02*/
    else
      v4 = (_DWORD *)__2_YAPAXI_Z(4 * a2); /*0x724cfe*/
    LOBYTE(this->m_C) = 1; /*0x724d06*/
    if ( v4 ) /*0x724d0a*/
    {
      if ( *(_DWORD *)&this->m_1[3] ) /*0x724d15*/
      {
        m_8 = this->m_8; /*0x724d1c*/
        if ( a2 < m_8 ) /*0x724d21*/
          m_8 = a2; /*0x724d23*/
        for ( i = 0; i < m_8; v4[i - 1] = *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * i - 4) ) /*0x724d29*/
          ++i; /*0x724d2e*/
        if ( BYTE1(this->m_C) ) /*0x724d3b*/
        {
          __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x724d46*/
          *(_DWORD *)&this->m_1[3] = 0; /*0x724d4e*/
        }
      }
      *(_DWORD *)&this->m_1[3] = v4; /*0x724d57*/
      this->m_8 = a2; /*0x724d5f*/
      BYTE1(this->m_C) = a3 == 0; /*0x724d62*/
      return 1; /*0x724d68*/
    }
    else
    {
      return 0; /*0x724d0f*/
    }
  }
  else
  {
    (*(void (__thiscall **)(_VectorClass_PBVToolTip *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x724d72*/
    return 1; /*0x724d78*/
  }
}



// ==== 0x00724D80  _VectorClass_PBVToolTip::writeString  this=VectorClass  sig=csp ====
void __thiscall ToolTipClass::writeString(_VectorClass_PBVToolTip *this)
{
  if ( *(_DWORD *)&this->m_1[3] && BYTE1(this->m_C) ) /*0x724d8d*/
  {
    __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x724d93*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x724d9b*/
  }
  BYTE1(this->m_C) = 0; /*0x724d9e*/
  this->m_8 = 0; /*0x724da1*/
}



// ==== 0x00724DB0  _VectorClass_PBVToolTip::seekString  this=VectorClass  sig=csp ====
int __thiscall ToolTipClass::seekString(_VectorClass_PBVToolTip *this, _DWORD *a2)
{
  int result; // eax
  int m_8; // edx
  _DWORD *i; // ecx

  if ( !LOBYTE(this->m_C) ) /*0x724db0*/
    return 0; /*0x724db8*/
  m_8 = this->m_8; /*0x724dbe*/
  result = 0; /*0x724dc1*/
  if ( m_8 <= 0 ) /*0x724dc5*/
    return -1; /*0x724ddc*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2; ++i ) /*0x724dcb*/
  {
    if ( ++result >= m_8 ) /*0x724dda*/
      return -1; /*0x724dda*/
  }
  return result; /*0x724dba*/
}



// ==== 0x00724DF0  _VectorClass_PBVToolTip::setString  this=VectorClass  sig=csp ====
unsigned int __thiscall ToolTipClass::setString(_VectorClass_PBVToolTip *this, int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x724df0*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 2; /*0x724e05*/
  else
    return 0; /*0x724df7*/
}



// ==== 0x00724E10  _DynamicVectorClass_PBVToolTip::release  this=DynamicVector  sig=csp ====
char __thiscall ToolTipClass::release(_DynamicVectorClass_PBVToolTip *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int m_8; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x724e1c*/
  {
    LOBYTE(this->m_C) = 0; /*0x724e22*/
    if ( a3 ) /*0x724e28*/
      v4 = a3; /*0x724e3e*/
    else
      v4 = (_DWORD *)__2_YAPAXI_Z(4 * a2); /*0x724e3a*/
    LOBYTE(this->m_C) = 1; /*0x724e42*/
    if ( !v4 ) /*0x724e46*/
      return 0; /*0x724eba*/
    if ( *(_DWORD *)&this->m_1[3] ) /*0x724e48*/
    {
      m_8 = this->m_8; /*0x724e4f*/
      if ( a2 < m_8 ) /*0x724e54*/
        m_8 = a2; /*0x724e56*/
      for ( i = 0; i < m_8; v4[i - 1] = *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * i - 4) ) /*0x724e5c*/
        ++i; /*0x724e61*/
      if ( BYTE1(this->m_C) ) /*0x724e6e*/
      {
        __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x724e79*/
        *(_DWORD *)&this->m_1[3] = 0; /*0x724e81*/
      }
    }
    *(_DWORD *)&this->m_1[3] = v4; /*0x724e8a*/
    this->m_8 = a2; /*0x724e92*/
    BYTE1(this->m_C) = a3 == 0; /*0x724e95*/
  }
  else
  {
    (*(void (__thiscall **)(_DynamicVectorClass_PBVToolTip *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x724e9e*/
  }
  v7 = this->m_8; /*0x724ea1*/
  if ( v7 < this->m_10 ) /*0x724ea9*/
    this->m_10 = v7; /*0x724eab*/
  return 1; /*0x724eae*/
}



// ==== 0x00724EC0  _DynamicVectorClass_PBVToolTip::read  this=DynamicVector  sig=csp ====
int __thiscall ToolTipClass::read(_DynamicVectorClass_PBVToolTip *this, _DWORD *a2)
{
  int m_10; // edx
  int result; // eax
  _DWORD *i; // ecx

  m_10 = this->m_10; /*0x724ec0*/
  result = 0; /*0x724ec3*/
  if ( m_10 <= 0 ) /*0x724ec8*/
    return -1; /*0x724edf*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2; ++i ) /*0x724ece*/
  {
    if ( ++result >= m_10 ) /*0x724edd*/
      return -1; /*0x724edd*/
  }
  return result; /*0x724ee2*/
}



// ==== 0x00724EF0  _VectorClass_PBVToolTip::compareString  this=VectorClass  sig=csp ====
_DWORD *__thiscall ToolTipClass::compareString(_VectorClass_PBVToolTip *this, char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x724ef3*/
  *(_DWORD *)this->__pad_0 = &VectorClass<ToolTip const *>::`vftable'; /*0x724ef6*/
  if ( v3 && BYTE1(this->m_C) ) /*0x724f00*/
  {
    __3_YAXPAX_Z(v3); /*0x724f08*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x724f10*/
  }
  BYTE1(this->m_C) = 0; /*0x724f1b*/
  this->m_8 = 0; /*0x724f21*/
  if ( (a2 & 1) != 0 ) /*0x724f28*/
    __3_YAXPAX_Z(this); /*0x724f2b*/
  return this->__pad_0; /*0x724f35*/
}



// ==== 0x00724F40  _DynamicVectorClass_PBVToolTip::QueryInterface  this=DynamicVector  sig=csp ====
_DWORD *__thiscall ToolTipManager_7::QueryInterface(_DynamicVectorClass_PBVToolTip *this, char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x724f43*/
  *(_DWORD *)this->__pad_0 = &VectorClass<ToolTip const *>::`vftable'; /*0x724f46*/
  if ( v3 && BYTE1(this->m_C) ) /*0x724f50*/
  {
    __3_YAXPAX_Z(v3); /*0x724f58*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x724f60*/
  }
  BYTE1(this->m_C) = 0; /*0x724f6b*/
  this->m_8 = 0; /*0x724f71*/
  if ( (a2 & 1) != 0 ) /*0x724f78*/
    __3_YAXPAX_Z(this); /*0x724f7b*/
  return this->__pad_0; /*0x724f85*/
}



// ==== 0x00724F90  ObjectClass::??0Iostream_init_QAE_XZ_6  this=ObjectClass  sig=csp ====
Iostream_init *__thiscall __0Iostream_init_QAE_XZ_6(Iostream_init *this)
{
  return this; /*0x724f92*/
}



// ==== 0x00724FA0  CommandClass::executeAction  this=CommandClass  sig=csp ====
bool __thiscall CommandClass::executeAction(CommandClass *this, _DWORD *a2)
{
  _DWORD *v2; // eax

  v2 = (_DWORD *)*((_DWORD *)this + 4); /*0x724fa0*/
  return v2 && *v2 == *a2; /*0x724fb3*/
}



// ==== 0x00724FC0  CommandClass::BinarySearchAction  this=CommandClass  sig=csp ====
int __thiscall CommandClass::BinarySearchAction(CommandClass *this, unsigned int *a2)
{
  int result; // eax
  CommandClass v4; // edi
  unsigned int v5; // ebx
  int v6; // ecx
  unsigned int v7; // esi

  result = *((_DWORD *)this + 1); /*0x724fc3*/
  if ( result ) /*0x724fc8*/
  {
    if ( !*((_BYTE *)this + 12) ) /*0x724fce*/
    {
      qsort(*(void **)this, result, 8u, (_CoreCrtNonSecureSearchSortCompareFunction)CompareFunc2Int); /*0x724fe0*/
      *((_DWORD *)this + 4) = 0; /*0x724fe8*/
      *((_BYTE *)this + 12) = 1; /*0x724fef*/
    }
    v4 = *this; /*0x724ff9*/
    v5 = *a2; /*0x724ffb*/
    v6 = *((_DWORD *)this + 1); /*0x724ffd*/
    if ( v6 <= 0 ) /*0x725002*/
      return 0; /*0x72502e*/
    while ( 1 ) /*0x72500b*/
    {
      v7 = *(_DWORD *)(*(_DWORD *)&v4 + 8 * (v6 / 2)); /*0x72500b*/
      if ( v7 <= v5 ) /*0x725013*/
      {
        if ( v7 == v5 ) /*0x725019*/
          return *(_DWORD *)&v4 + 8 * (v6 / 2); /*0x725033*/
        *(_DWORD *)&v4 += 8 * (v6 / 2) + 8; /*0x72501b*/
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



// ==== 0x00725070  UI_Remove  this=-  sig=csp ====
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
  dbl_B0F638 = Math::Sqrt(v0 + v0); /*0x7250de*/
}



// ==== 0x007250F0  sub_7250F0  this=-  sig=ida-proto ====
void sub_7250F0()
{
  dbl_B0F748 = dbl_B0F638 / 60.0; /*0x7250fc*/
}



// ==== 0x00725110  sub_725110  this=-  sig=ida-proto ====
void sub_725110()
{
  dbl_B0F6E8 = 1.0 / dbl_B0F748; /*0x72511c*/
}



// ==== 0x00725130  sub_725130  this=-  sig=ida-proto ====
void sub_725130()
{
  dbl_B0F6E0 = 0.0174532925199433 * 45.0; /*0x72513c*/
}



// ==== 0x00725150  sub_725150  this=-  sig=ida-proto ====
void sub_725150()
{
  dbl_B0F688 = 0.0174532925199433 * 60.0; /*0x72515c*/
}



// ==== 0x00725170  sub_725170  this=-  sig=ida-proto ====
void sub_725170()
{
  dbl_B0F5D0 = 0.0174532925199433 * 90.0; /*0x72517c*/
}



// ==== 0x00725190  sub_725190  this=-  sig=ida-proto ====
__int64 sub_725190()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_B0F5D0 - dbl_B0F688); /*0x7251a2*/
  result = Math::RoundToInt(v0 * dbl_B0F638 * 0.5); /*0x7251b6*/
  dword_B0F750 = result; /*0x7251bb*/
  return result; /*0x7251c0*/
}



// ==== 0x007251D0  sub_7251D0  this=-  sig=ida-proto ====
void sub_7251D0()
{
  dbl_B0F690 = Math::ArcTan((double)dword_B0F750 * 0.00390625); /*0x7251e7*/
}



// ==== 0x00725200  sub_725200  this=-  sig=ida-proto ====
void sub_725200()
{
  dbl_B0F6C0 = Math::ArcTan((double)(2 * dword_B0F750) / dbl_B0F638); /*0x725222*/
}



// ==== 0x00725230  sub_725230  this=-  sig=ida-proto ====
__int64 sub_725230()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_B0F750) + 0.5); /*0x72524b*/
  dword_B0F744 = result; /*0x725250*/
  return result; /*0x725256*/
}



// ==== 0x00725260  sub_725260  this=-  sig=ida-proto ====
int sub_725260()
{
  word_B0F630 = 0; /*0x725262*/
  word_B0F632 = 0; /*0x725268*/
  return 0; /*0x72526e*/
}



// ==== 0x00725270  sub_725270  this=-  sig=ida-proto ====
int sub_725270()
{
  dword_B0F6B0 = 0; /*0x725272*/
  dword_B0F6B4 = 0; /*0x725277*/
  dword_B0F6B8 = 0; /*0x72527c*/
  return 0; /*0x725281*/
}



// ==== 0x00725290  sub_725290  this=-  sig=ida-proto ====
int sub_725290()
{
  dword_B0F740 = 0; /*0x725295*/
  dword_B0F738 = 128; /*0x72529f*/
  dword_B0F73C = 128; /*0x7252a4*/
  return 128; /*0x7252a9*/
}



// ==== 0x007252B0  sub_7252B0  this=-  sig=ida-proto ====
int sub_7252B0()
{
  dword_B0F608 = 0; /*0x7252b2*/
  dword_B0F60C = 0; /*0x7252b7*/
  dword_B0F610 = 0; /*0x7252bc*/
  dword_B0F614 = 0; /*0x7252c1*/
  return 0; /*0x7252c6*/
}



// ==== 0x007252D0  sub_7252D0  this=-  sig=ida-proto ====
int sub_7252D0()
{
  dword_B0F724 = 0; /*0x7252d7*/
  dword_B0F728 = 0; /*0x7252dc*/
  byte_B0F72C = 1; /*0x7252e1*/
  byte_B0F72D = 0; /*0x7252e8*/
  dword_B0F720 = (int)&DynamicVectorClass<AbstractClass *>::`vftable'; /*0x7252ed*/
  dword_B0F734 = 10; /*0x7252f7*/
  dword_B0F730 = 0; /*0x725301*/
  return atexit(sub_725310); /*0x72530c*/
}



// ==== 0x00725310  sub_725310  this=-  sig=ida-proto ====
void __cdecl sub_725310()
{
  dword_B0F720 = (int)&VectorClass<AbstractClass *>::`vftable'; /*0x725318*/
  if ( dword_B0F724 && byte_B0F72D ) /*0x72532c*/
  {
    __3_YAXPAX_Z(dword_B0F724); /*0x72532f*/
    dword_B0F724 = 0; /*0x725337*/
  }
  byte_B0F72D = 0; /*0x72533d*/
  dword_B0F728 = 0; /*0x725343*/
}



// ==== 0x00725350  sub_725350  this=-  sig=ida-proto ====
int sub_725350()
{
  dword_B0F674 = 0; /*0x725357*/
  dword_B0F678 = 0; /*0x72535c*/
  byte_B0F67C = 1; /*0x725361*/
  byte_B0F67D = 0; /*0x725368*/
  dword_B0F670 = (int)&DynamicVectorClass<AbstractClass *>::`vftable'; /*0x72536d*/
  dword_B0F684 = 10; /*0x725377*/
  dword_B0F680 = 0; /*0x725381*/
  return atexit(sub_725390); /*0x72538c*/
}



// ==== 0x00725390  sub_725390  this=-  sig=ida-proto ====
void __cdecl sub_725390()
{
  dword_B0F670 = (int)&VectorClass<AbstractClass *>::`vftable'; /*0x725398*/
  if ( dword_B0F674 && byte_B0F67D ) /*0x7253ac*/
  {
    __3_YAXPAX_Z(dword_B0F674); /*0x7253af*/
    dword_B0F674 = 0; /*0x7253b7*/
  }
  byte_B0F67D = 0; /*0x7253bd*/
  dword_B0F678 = 0; /*0x7253c3*/
}



// ==== 0x007253D0  sub_7253D0  this=-  sig=ida-proto ====
int sub_7253D0()
{
  dword_B0F61C = 0; /*0x7253d7*/
  dword_B0F620 = 0; /*0x7253dc*/
  byte_B0F624 = 1; /*0x7253e1*/
  byte_B0F625 = 0; /*0x7253e8*/
  dword_B0F618 = (int)&DynamicVectorClass<AbstractClass *>::`vftable'; /*0x7253ed*/
  dword_B0F62C = 10; /*0x7253f7*/
  dword_B0F628 = 0; /*0x725401*/
  return atexit(sub_725410); /*0x72540c*/
}



// ==== 0x00725410  sub_725410  this=-  sig=ida-proto ====
void __cdecl sub_725410()
{
  dword_B0F618 = (int)&VectorClass<AbstractClass *>::`vftable'; /*0x725418*/
  if ( dword_B0F61C && byte_B0F625 ) /*0x72542c*/
  {
    __3_YAXPAX_Z(dword_B0F61C); /*0x72542f*/
    dword_B0F61C = 0; /*0x725437*/
  }
  byte_B0F625 = 0; /*0x72543d*/
  dword_B0F620 = 0; /*0x725443*/
}



// ==== 0x00725450  sub_725450  this=-  sig=ida-proto ====
int sub_725450()
{
  dword_B0F70C = 0; /*0x725457*/
  dword_B0F710 = 0; /*0x72545c*/
  byte_B0F714 = 1; /*0x725461*/
  byte_B0F715 = 0; /*0x725468*/
  dword_B0F708 = (int)&DynamicVectorClass<AbstractClass *>::`vftable'; /*0x72546d*/
  dword_B0F71C = 10; /*0x725477*/
  dword_B0F718 = 0; /*0x725481*/
  return atexit(sub_725490); /*0x72548c*/
}



// ==== 0x00725490  sub_725490  this=-  sig=ida-proto ====
void __cdecl sub_725490()
{
  dword_B0F708 = (int)&VectorClass<AbstractClass *>::`vftable'; /*0x725498*/
  if ( dword_B0F70C && byte_B0F715 ) /*0x7254ac*/
  {
    __3_YAXPAX_Z(dword_B0F70C); /*0x7254af*/
    dword_B0F70C = 0; /*0x7254b7*/
  }
  byte_B0F715 = 0; /*0x7254bd*/
  dword_B0F710 = 0; /*0x7254c3*/
}



// ==== 0x007254D0  sub_7254D0  this=-  sig=ida-proto ====
int sub_7254D0()
{
  MEMORY[0xB0F5BC] = 0; /*0x7254d7*/
  MEMORY[0xB0F5C0] = 0; /*0x7254dc*/
  MEMORY[0xB0F5C4] = 1; /*0x7254e1*/
  MEMORY[0xB0F5C5] = 0; /*0x7254e8*/
  stru_B0F5B8 = (int)&DynamicVectorClass<AbstractClass *>::`vftable'; /*0x7254ed*/
  MEMORY[0xB0F5CC] = 10; /*0x7254f7*/
  MEMORY[0xB0F5C8] = 0; /*0x725501*/
  return atexit(sub_725510); /*0x72550c*/
}



// ==== 0x00725510  sub_725510  this=-  sig=ida-proto ====
void __cdecl sub_725510()
{
  stru_B0F5B8 = (int)&VectorClass<AbstractClass *>::`vftable'; /*0x725518*/
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
  dword_B0F644 = 0; /*0x725557*/
  dword_B0F648 = 0; /*0x72555c*/
  byte_B0F64C = 1; /*0x725561*/
  byte_B0F64D = 0; /*0x725568*/
  dword_B0F640 = (int)&DynamicVectorClass<AbstractClass *>::`vftable'; /*0x72556d*/
  dword_B0F654 = 10; /*0x725577*/
  dword_B0F650 = 0; /*0x725581*/
  return atexit(sub_725590); /*0x72558c*/
}



// ==== 0x00725590  sub_725590  this=-  sig=ida-proto ====
void __cdecl sub_725590()
{
  dword_B0F640 = (int)&VectorClass<AbstractClass *>::`vftable'; /*0x725598*/
  if ( dword_B0F644 && byte_B0F64D ) /*0x7255ac*/
  {
    __3_YAXPAX_Z(dword_B0F644); /*0x7255af*/
    dword_B0F644 = 0; /*0x7255b7*/
  }
  byte_B0F64D = 0; /*0x7255bd*/
  dword_B0F648 = 0; /*0x7255c3*/
}



// ==== 0x007255D0  sub_7255D0  this=-  sig=ida-proto ====
int sub_7255D0()
{
  dword_B0F65C = 0; /*0x7255d7*/
  dword_B0F660 = 0; /*0x7255dc*/
  byte_B0F664 = 1; /*0x7255e1*/
  byte_B0F665 = 0; /*0x7255e8*/
  dword_B0F658 = (int)&DynamicVectorClass<AbstractClass *>::`vftable'; /*0x7255ed*/
  dword_B0F66C = 10; /*0x7255f7*/
  dword_B0F668 = 0; /*0x725601*/
  return atexit(sub_725610); /*0x72560c*/
}



// ==== 0x00725610  sub_725610  this=-  sig=ida-proto ====
void __cdecl sub_725610()
{
  dword_B0F658 = (int)&VectorClass<AbstractClass *>::`vftable'; /*0x725618*/
  if ( dword_B0F65C && byte_B0F665 ) /*0x72562c*/
  {
    __3_YAXPAX_Z(dword_B0F65C); /*0x72562f*/
    dword_B0F65C = 0; /*0x725637*/
  }
  byte_B0F665 = 0; /*0x72563d*/
  dword_B0F660 = 0; /*0x725643*/
}



// ==== 0x00725650  sub_725650  this=-  sig=ida-proto ====
int sub_725650()
{
  dword_B0F5F4 = 0; /*0x725657*/
  dword_B0F5F8 = 0; /*0x72565c*/
  byte_B0F5FC = 1; /*0x725661*/
  byte_B0F5FD = 0; /*0x725668*/
  dword_B0F5F0 = (int)&DynamicVectorClass<AbstractClass *>::`vftable'; /*0x72566d*/
  dword_B0F604 = 10; /*0x725677*/
  dword_B0F600 = 0; /*0x725681*/
  return atexit(sub_725690); /*0x72568c*/
}



// ==== 0x00725690  sub_725690  this=-  sig=ida-proto ====
void __cdecl sub_725690()
{
  dword_B0F5F0 = (int)&VectorClass<AbstractClass *>::`vftable'; /*0x725698*/
  if ( dword_B0F5F4 && byte_B0F5FD ) /*0x7256ac*/
  {
    __3_YAXPAX_Z(dword_B0F5F4); /*0x7256af*/
    dword_B0F5F4 = 0; /*0x7256b7*/
  }
  byte_B0F5FD = 0; /*0x7256bd*/
  dword_B0F5F8 = 0; /*0x7256c3*/
}



// ==== 0x007256D0  sub_7256D0  this=-  sig=ida-proto ====
int sub_7256D0()
{
  dword_B0F5DC = 0; /*0x7256d7*/
  dword_B0F5E0 = 0; /*0x7256dc*/
  byte_B0F5E4 = 1; /*0x7256e1*/
  byte_B0F5E5 = 0; /*0x7256e8*/
  dword_B0F5D8 = (int)&DynamicVectorClass<AbstractClass *>::`vftable'; /*0x7256ed*/
  dword_B0F5EC = 10; /*0x7256f7*/
  dword_B0F5E8 = 0; /*0x725701*/
  return atexit(sub_725710); /*0x72570c*/
}



// ==== 0x00725710  sub_725710  this=-  sig=ida-proto ====
void __cdecl sub_725710()
{
  dword_B0F5D8 = (int)&VectorClass<AbstractClass *>::`vftable'; /*0x725718*/
  if ( dword_B0F5DC && byte_B0F5E5 ) /*0x72572c*/
  {
    __3_YAXPAX_Z(dword_B0F5DC); /*0x72572f*/
    dword_B0F5DC = 0; /*0x725737*/
  }
  byte_B0F5E5 = 0; /*0x72573d*/
  dword_B0F5E0 = 0; /*0x725743*/
}



// ==== 0x00725750  sub_725750  this=-  sig=ida-proto ====
int sub_725750()
{
  dword_B0F6CC = 0; /*0x725757*/
  dword_B0F6D0 = 0; /*0x72575c*/
  byte_B0F6D4 = 1; /*0x725761*/
  byte_B0F6D5 = 0; /*0x725768*/
  dword_B0F6C8 = (int)&DynamicVectorClass<AbstractClass *>::`vftable'; /*0x72576d*/
  dword_B0F6DC = 10; /*0x725777*/
  dword_B0F6D8 = 0; /*0x725781*/
  return atexit(sub_725790); /*0x72578c*/
}



// ==== 0x00725790  sub_725790  this=-  sig=ida-proto ====
void __cdecl sub_725790()
{
  dword_B0F6C8 = (int)&VectorClass<AbstractClass *>::`vftable'; /*0x725798*/
  if ( dword_B0F6CC && byte_B0F6D5 ) /*0x7257ac*/
  {
    __3_YAXPAX_Z(dword_B0F6CC); /*0x7257af*/
    dword_B0F6CC = 0; /*0x7257b7*/
  }
  byte_B0F6D5 = 0; /*0x7257bd*/
  dword_B0F6D0 = 0; /*0x7257c3*/
}



// ==== 0x007257D0  sub_7257D0  this=-  sig=ida-proto ====
int sub_7257D0()
{
  dword_B0F6F4 = 0; /*0x7257d7*/
  dword_B0F6F8 = 0; /*0x7257dc*/
  byte_B0F6FC = 1; /*0x7257e1*/
  byte_B0F6FD = 0; /*0x7257e8*/
  dword_B0F6F0 = (int)&DynamicVectorClass<AbstractClass *>::`vftable'; /*0x7257ed*/
  dword_B0F704 = 10; /*0x7257f7*/
  dword_B0F700 = 0; /*0x725801*/
  return atexit(sub_725810); /*0x72580c*/
}



// ==== 0x00725810  sub_725810  this=-  sig=ida-proto ====
void __cdecl sub_725810()
{
  dword_B0F6F0 = (int)&VectorClass<AbstractClass *>::`vftable'; /*0x725818*/
  if ( dword_B0F6F4 && byte_B0F6FD ) /*0x72582c*/
  {
    __3_YAXPAX_Z(dword_B0F6F4); /*0x72582f*/
    dword_B0F6F4 = 0; /*0x725837*/
  }
  byte_B0F6FD = 0; /*0x72583d*/
  dword_B0F6F8 = 0; /*0x725843*/
}



// ==== 0x00725850  sub_725850  this=-  sig=ida-proto ====
int sub_725850()
{
  MEMORY[0xB0F69C] = 0; /*0x725857*/
  MEMORY[0xB0F6A0] = 0; /*0x72585c*/
  MEMORY[0xB0F6A4] = 1; /*0x725861*/
  MEMORY[0xB0F6A5] = 0; /*0x725868*/
  stru_B0F698 = (int)&DynamicVectorClass<AbstractClass *>::`vftable'; /*0x72586d*/
  MEMORY[0xB0F6AC] = 10; /*0x725877*/
  MEMORY[0xB0F6A8] = 0; /*0x725881*/
  return atexit(sub_725890); /*0x72588c*/
}



// ==== 0x00725890  sub_725890  this=-  sig=ida-proto ====
void __cdecl sub_725890()
{
  stru_B0F698 = (int)&VectorClass<AbstractClass *>::`vftable'; /*0x725898*/
  if ( MEMORY[0xB0F69C] && MEMORY[0xB0F6A5] ) /*0x7258ac*/
  {
    __3_YAXPAX_Z(MEMORY[0xB0F69C]); /*0x7258af*/
    MEMORY[0xB0F69C] = 0; /*0x7258b7*/
  }
  MEMORY[0xB0F6A5] = 0; /*0x7258bd*/
  MEMORY[0xB0F6A0] = 0; /*0x7258c3*/
}



// ==== 0x007258D0  AbstractClass::AnnounceExpiredPointer  this=AbstractClass  sig=csp ====
void __fastcall AbstractClass::AnnounceExpiredPointer(AbstractClass *a1, int a2)
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

  v4 = (*((int (__thiscall **)(AbstractClass *))a1->vtable0 + 11))(a1); /*0x7258de*/
  v5 = 0; /*0x7258e9*/
  if ( *(AbstractClass **)&stru_87F5F0.__pad_E12[1418] == a1 ) /*0x7258e7*/
    *(_DWORD *)&stru_87F5F0.__pad_E12[1418] = 0; /*0x7258eb*/
  if ( *(AbstractClass **)&stru_87F5F0.__pad_E12[1422] == a1 ) /*0x7258fb*/
  {
    *(_DWORD *)&stru_87F5F0.__pad_E12[1422] = 0; /*0x725903*/
    Mouse::SetBounds((int)&stru_87F5F0.__pad_58[416], 0); /*0x725909*/
  }
  switch ( v4 ) /*0x725911*/
  {
    case 24: /*0x725911*/
      if ( a1 == *(AbstractClass **)&stru_A8EB00.?[404] ) /*0x72591d*/
        *(_DWORD *)&stru_A8EB00.?[404] = 0; /*0x72591f*/
      break;
    case 13: /*0x725911*/
      for ( i = 0; i < *(int *)&g_BuildingLoadQueue_Array.__pad_E88[16]; ++i ) /*0x7259e8*/
        (*(void (__thiscall **)(_DWORD, AbstractClass *, int))(**(_DWORD **)(*(_DWORD *)&g_BuildingLoadQueue_Array.__pad_E88[4] /*0x7259f7*/
                                                                           + 4 * i)
                                                             + 40))(
          *(_DWORD *)(*(_DWORD *)&g_BuildingLoadQueue_Array.__pad_E88[4] + 4 * i),
          a1,
          a2);
      goto LABEL_20; /*0x725a02*/
    case 4: /*0x725911*/
      for ( j = 0; j < g_BuildingLoadQueue_Array.?[1]; ++j ) /*0x725a28*/
        (*(void (__thiscall **)(_DWORD, AbstractClass *, int))(**(_DWORD **)(g_BuildingLoadQueue_Array.?[0] + 4 * j) + 40))( /*0x725a3a*/
          *(_DWORD *)(g_BuildingLoadQueue_Array.?[0] + 4 * j),
          a1,
          a2);
      return; /*0x725a45*/
  }
  if ( a1 && (a1->abstractFlags & 2) != 0 ) /*0x725938*/
  {
    if ( g_BuildingLoadQueue_Array.Foundation[0] > 0 ) /*0x725945*/
    {
      do /*0x72595f*/
      {
        (*(void (__thiscall **)(_DWORD, AbstractClass *, int))(**(_DWORD **)(g_BuildingLoadQueue_Array.PowerDrain /*0x725954*/
                                                                           + 4 * v5)
                                                             + 40))(
          *(_DWORD *)(g_BuildingLoadQueue_Array.PowerDrain + 4 * v5),
          a1,
          a2);
        ++v5; /*0x72595c*/
      }
      while ( v5 < g_BuildingLoadQueue_Array.Foundation[0] ); /*0x72595f*/
    }
    AbstractClass::processDetection((AbstractClass *)&stru_87F5D8, (int)a1); /*0x725967*/
    AbstractClass::processStateTransition((AbstractClass *)&g_MissionQueueFrame, (int)a1); /*0x725972*/
    for ( k = dword_8A0218 - 1; k >= 0; --k ) /*0x725981*/
      DiskLaserClass::PointerGotInvalid(*((DiskLaserClass **)dword_8A020C + k), (int)a1); /*0x72598d*/
    if ( v4 == 15 || v4 == 1 || v4 == 2 ) /*0x7259a2*/
      nullsub_3((int)a1); /*0x7259aa*/
    AbstractClass::processRadarEvent(a1); /*0x7259b1*/
    if ( g_TacticalClass_Instance ) /*0x7259be*/
      (*(void (__thiscall **)(LPPERSISTSTREAM, AbstractClass *, int))(*(_DWORD *)g_TacticalClass_Instance + 40))( /*0x7259c5*/
        g_TacticalClass_Instance,
        a1,
        1);
LABEL_20:
    Array::RemoveItemByValue((int)a1, a2); /*0x7259c8*/
    return; /*0x7259d9*/
  }
  if ( __RTDynamicCast( /*0x725a5a*/
         &a1->vtable0,
         0,
         &AbstractClass `RTTI Type Descriptor',
         &AbstractTypeClass `RTTI Type Descriptor',
         0) )
  {
    for ( m = 0; m < g_BuildingLoadQueue_Array.LightBlueTint; ++m ) /*0x725a6f*/
      (*(void (__thiscall **)(_DWORD, AbstractClass *, int))(**(_DWORD **)(g_BuildingLoadQueue_Array.LightIntensity /*0x725a7d*/
                                                                         + 4 * m)
                                                           + 40))(
        *(_DWORD *)(g_BuildingLoadQueue_Array.LightIntensity + 4 * m),
        a1,
        a2);
    InitInterfaceStubsCOM(*(ObjectClass **)&DSurface_ViewBounds.__pad_FC[324]); /*0x725a92*/
  }
  else
  {
    switch ( v4 ) /*0x725ab1*/
    {
      case 12: /*0x725ab1*/
        for ( n = 0; n < g_BuildingLoadQueue_Array.HalfDamageSmokeLocation1[1]; ++n ) /*0x725b34*/
          (*(void (__thiscall **)(_DWORD, AbstractClass *, int))(**(_DWORD **)(*(_DWORD *)&g_BuildingLoadQueue_Array.BuildupLoaded /*0x725b42*/
                                                                             + 4 * n)
                                                               + 40))(
            *(_DWORD *)(*(_DWORD *)&g_BuildingLoadQueue_Array.BuildupLoaded + 4 * n),
            a1,
            a2);
        MapClass::RemoveTriggerRef((MapClass *)&stru_87F5F0.__pad_58[416], (int)a1, 1); /*0x725b57*/
        break; /*0x725b61*/
      case 34: /*0x725ab1*/
        for ( ii = 0; ii < g_BuildingLoadQueue_Array.?[1]; ++ii ) /*0x725bc3*/
          (*(void (__thiscall **)(_DWORD, AbstractClass *, int))(**(_DWORD **)(g_BuildingLoadQueue_Array.?[0] + 4 * ii) /*0x725bd1*/
                                                               + 40))(
            *(_DWORD *)(g_BuildingLoadQueue_Array.?[0] + 4 * ii),
            a1,
            a2);
        break; /*0x725bdc*/
      case 38: /*0x725ab1*/
        for ( jj = 0; jj < g_BuildingLoadQueue_Array.unknown___2; ++jj ) /*0x725b05*/
          (*(void (__thiscall **)(_DWORD, AbstractClass *, int))(**(_DWORD **)(g_BuildingLoadQueue_Array.ExitCoord[1] /*0x725b18*/
                                                                             + 4 * jj)
                                                               + 40))(
            *(_DWORD *)(g_BuildingLoadQueue_Array.ExitCoord[1] + 4 * jj),
            a1,
            a2);
        break; /*0x725b23*/
      case 44: /*0x725ab1*/
        for ( kk = 0; kk < *(int *)&g_BuildingLoadQueue_Array.?[32]; ++kk ) /*0x725ac1*/
          (*(void (__thiscall **)(_DWORD, AbstractClass *, int))(**(_DWORD **)(*(_DWORD *)&g_BuildingLoadQueue_Array.?[20] /*0x725ad0*/
                                                                             + 4 * kk)
                                                               + 40))(
            *(_DWORD *)(*(_DWORD *)&g_BuildingLoadQueue_Array.?[20] + 4 * kk),
            a1,
            a2);
        MapClass::RemoveTriggerRef((MapClass *)&stru_87F5F0.__pad_58[416], (int)a1, 1); /*0x725ae5*/
        Array::RemoveItemByValue((int)a1, a2); /*0x725af1*/
        break; /*0x725afb*/
      case 47: /*0x725ab1*/
      case 48: /*0x725ab1*/
        for ( mm = 0; mm < g_BuildingLoadQueue_Array.GateCloseDelay[0]; ++mm ) /*0x725b6b*/
          (*(void (__thiscall **)(_DWORD, AbstractClass *, int))(**(_DWORD **)(g_BuildingLoadQueue_Array.HalfDamageSmokeLocation2[1] /*0x725b7d*/
                                                                             + 4 * mm)
                                                               + 40))(
            *(_DWORD *)(g_BuildingLoadQueue_Array.HalfDamageSmokeLocation2[1] + 4 * mm),
            a1,
            a2);
        break; /*0x725b88*/
      case 51: /*0x725ab1*/
        for ( nn = 0; nn < g_BuildingLoadQueue_Array.?[7]; ++nn ) /*0x725b99*/
          (*(void (__thiscall **)(_DWORD, AbstractClass *, int))(**(_DWORD **)(g_BuildingLoadQueue_Array.?[4] + 4 * nn) /*0x725ba7*/
                                                               + 40))(
            *(_DWORD *)(g_BuildingLoadQueue_Array.?[4] + 4 * nn),
            a1,
            a2);
        break; /*0x725bb2*/
      case 60: /*0x725ab1*/
        for ( i1 = 0; i1 < g_BuildingLoadQueue_Array.TargetCoordOffset[1]; ++i1 ) /*0x725bed*/
          (*(void (__thiscall **)(_DWORD, AbstractClass *, int))(**(_DWORD **)(g_BuildingLoadQueue_Array.Adjacent /*0x725bfb*/
                                                                             + 4 * i1)
                                                               + 40))(
            *(_DWORD *)(g_BuildingLoadQueue_Array.Adjacent + 4 * i1),
            a1,
            a2);
        break; /*0x725c06*/
      default:
        return;
    }
  }
}



// ==== 0x00725C70  ObjectClass::ProcessExpiredPointers  this=ObjectClass  sig=csp ====
int ProcessExpiredPointers(ObjectClass *this)
{
  int result; // eax
  int v2; // esi
  int v3; // eax
  int v4; // eax
  int v5; // eax
  int v6; // eax
  int v7; // eax
  _DWORD *v8; // [esp+8h] [ebp-4h] BYREF

  result = *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_E5C[12]; /*0x725c71*/
  v2 = 0; /*0x725c77*/
  while ( v2 < *(int *)&g_BuildingLoadQueue_Array.__pad_E5C[12] ) /*0x725c7b*/
  {
    v8 = *(_DWORD **)(*(_DWORD *)g_BuildingLoadQueue_Array.__pad_E5C + 4 * v2); /*0x725c89*/
    result = (*(int (**)(void))(*v8 + 68))(); /*0x725c8f*/
    if ( (_BYTE)result ) /*0x725c94*/
    {
      while ( 1 ) /*0x725caa*/
      {
        v3 = (*(int (__thiscall **)(int *, _DWORD **))(g_BuildingLoadQueue_Array.ToTile + 16))( /*0x725caa*/
               &g_BuildingLoadQueue_Array.ToTile,
               &v8);
        if ( v3 == -1 || v3 >= *(int *)&g_BuildingLoadQueue_Array.__pad_E5C[12] ) /*0x725cba*/
          break; /*0x725cba*/
        --*(_DWORD *)&g_BuildingLoadQueue_Array.__pad_E5C[12]; /*0x725cbf*/
        for ( ; /*0x725cc5*/
              v3 < *(int *)&g_BuildingLoadQueue_Array.__pad_E5C[12];
              *(_DWORD *)(*(_DWORD *)g_BuildingLoadQueue_Array.__pad_E5C + 4 * v3 - 4) = *(_DWORD *)(*(_DWORD *)g_BuildingLoadQueue_Array.__pad_E5C + 4 * v3) )
        {
          ++v3; /*0x725ccd*/
        }
      }
      result = (*(int (__stdcall **)(_DWORD *))(*v8 + 8))(v8); /*0x725ce8*/
      if ( result ) /*0x725ced*/
      {
        v4 = __RTtypeid(v8); /*0x725cf8*/
        if ( __8type_info_QBEHABV0__Z((const char *)&BuildingClass `RTTI Type Descriptor', v4) /*0x725d61*/
          || (v5 = __RTtypeid(v8), __8type_info_QBEHABV0__Z((const char *)&UnitClass `RTTI Type Descriptor', v5))
          || (v6 = __RTtypeid(v8), __8type_info_QBEHABV0__Z((const char *)&InfantryClass `RTTI Type Descriptor', v6))
          || (v7 = __RTtypeid(v8),
              (result = __8type_info_QBEHABV0__Z((const char *)&AircraftClass `RTTI Type Descriptor', v7)) != 0) )
        {
          result = (int)v8; /*0x725d63*/
          *((_BYTE *)v8 + 144) = 1; /*0x725d67*/
        }
        if ( v8 ) /*0x725d74*/
          result = (*(int (__thiscall **)(_DWORD *, int))(*v8 + 32))(v8, 1); /*0x725d7a*/
      }
    }
    else
    {
      ++v2; /*0x725d7f*/
    }
  }
  return result; /*0x725d8c*/
}



// ==== 0x00725D90  sub_725D90  this=-  sig=ida-proto ====
void sub_725D90()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x725d9c*/
  dbl_B0F778 = Math::Sqrt(v0 + v0); /*0x725dae*/
}



// ==== 0x00725DC0  sub_725DC0  this=-  sig=ida-proto ====
void sub_725DC0()
{
  dbl_B0F7C8 = dbl_B0F778 / 60.0; /*0x725dcc*/
}



// ==== 0x00725DE0  sub_725DE0  this=-  sig=ida-proto ====
void sub_725DE0()
{
  dbl_B0F7B0 = 1.0 / dbl_B0F7C8; /*0x725dec*/
}



// ==== 0x00725E00  sub_725E00  this=-  sig=ida-proto ====
void sub_725E00()
{
  dbl_B0F7A8 = 0.0174532925199433 * 45.0; /*0x725e0c*/
}



// ==== 0x00725E20  sub_725E20  this=-  sig=ida-proto ====
void sub_725E20()
{
  dbl_B0F780 = 0.0174532925199433 * 60.0; /*0x725e2c*/
}



// ==== 0x00725E40  sub_725E40  this=-  sig=ida-proto ====
void sub_725E40()
{
  dbl_B0F758 = 0.0174532925199433 * 90.0; /*0x725e4c*/
}



// ==== 0x00725E60  sub_725E60  this=-  sig=ida-proto ====
__int64 sub_725E60()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_B0F758 - dbl_B0F780); /*0x725e72*/
  result = Math::RoundToInt(v0 * dbl_B0F778 * 0.5); /*0x725e86*/
  dword_B0F7D0 = result; /*0x725e8b*/
  return result; /*0x725e90*/
}



// ==== 0x00725EA0  sub_725EA0  this=-  sig=ida-proto ====
void sub_725EA0()
{
  dbl_B0F788 = Math::ArcTan((double)dword_B0F7D0 * 0.00390625); /*0x725eb7*/
}



// ==== 0x00725ED0  sub_725ED0  this=-  sig=ida-proto ====
void sub_725ED0()
{
  dbl_B0F7A0 = Math::ArcTan((double)(2 * dword_B0F7D0) / dbl_B0F778); /*0x725ef2*/
}



// ==== 0x00725F00  sub_725F00  this=-  sig=ida-proto ====
__int64 sub_725F00()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_B0F7D0) + 0.5); /*0x725f1b*/
  dword_B0F7C4 = result; /*0x725f20*/
  return result; /*0x725f26*/
}



// ==== 0x00725F30  sub_725F30  this=-  sig=ida-proto ====
int sub_725F30()
{
  word_B0F770 = 0; /*0x725f32*/
  word_B0F772 = 0; /*0x725f38*/
  return 0; /*0x725f3e*/
}



// ==== 0x00725F40  sub_725F40  this=-  sig=ida-proto ====
int sub_725F40()
{
  dword_B0F790 = 0; /*0x725f42*/
  dword_B0F794 = 0; /*0x725f47*/
  dword_B0F798 = 0; /*0x725f4c*/
  return 0; /*0x725f51*/
}



// ==== 0x00725F60  sub_725F60  this=-  sig=ida-proto ====
int sub_725F60()
{
  dword_B0F7C0 = 0; /*0x725f65*/
  dword_B0F7B8 = 128; /*0x725f6f*/
  dword_B0F7BC = 128; /*0x725f74*/
  return 128; /*0x725f79*/
}



// ==== 0x00725F80  sub_725F80  this=-  sig=ida-proto ====
int sub_725F80()
{
  dword_B0F760 = 0; /*0x725f82*/
  dword_B0F764 = 0; /*0x725f87*/
  dword_B0F768 = 0; /*0x725f8c*/
  dword_B0F76C = 0; /*0x725f91*/
  return 0; /*0x725f96*/
}



// ==== 0x00725FA0  TriggerClass::Construct  this=TriggerClass  sig=csp ====
int __thiscall TriggerClass::Construct(int this, int a2)
{
  int v3; // ecx
  int v4; // eax
  int v5; // eax
  int v6; // eax
  _BYTE *v7; // eax
  void *vtable0; // ecx

  AbstractClass::Constructor((AbstractClass *)this); /*0x725fa4*/
  *(_DWORD *)(this + 36) = a2; /*0x725faf*/
  *(_DWORD *)(this + 40) = 0; /*0x725fb2*/
  *(_DWORD *)(this + 44) = 0; /*0x725fb5*/
  *(_BYTE *)(this + 48) = 0; /*0x725fb8*/
  v3 = *(_DWORD *)&stru_A8EB00.?[416]; /*0x725fbb*/
  *(_DWORD *)(this + 60) = 0; /*0x725fc1*/
  *(_DWORD *)(this + 52) = v3; /*0x725fc4*/
  *(_DWORD *)(this + 64) = 0; /*0x725fc7*/
  *(_BYTE *)(this + 68) = 1; /*0x725fca*/
  *(_DWORD *)this = &TriggerClass::`vftable'; /*0x725fce*/
  *(_DWORD *)(this + 4) = &TriggerClass::`vftable'; /*0x725fd4*/
  *(_DWORD *)(this + 8) = &TriggerClass::`vftable'; /*0x725fdb*/
  *(_DWORD *)(this + 12) = &TriggerClass::`vftable'; /*0x725fe2*/
  if ( g_BuildingLoadQueue_Array.LightBlueTint < g_BuildingLoadQueue_Array.LightRedTint /*0x72601b*/
    || (BYTE1(g_BuildingLoadQueue_Array.LightGreenTint) || !g_BuildingLoadQueue_Array.LightRedTint)
    && g_BuildingLoadQueue_Array.PrimaryFirePixelOffset[0] > 0
    && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(g_BuildingLoadQueue_Array.LightVisibility + 8))(
         &g_BuildingLoadQueue_Array.LightVisibility,
         g_BuildingLoadQueue_Array.LightRedTint + g_BuildingLoadQueue_Array.PrimaryFirePixelOffset[0],
         0) )
  {
    v4 = g_BuildingLoadQueue_Array.LightBlueTint++; /*0x726028*/
    *(_DWORD *)(g_BuildingLoadQueue_Array.LightIntensity + 4 * v4) = this; /*0x726037*/
  }
  if ( g_BuildingLoadQueue_Array.unknown___2 < g_BuildingLoadQueue_Array.ExitCoord[2] /*0x72606e*/
    || (BYTE1(g_BuildingLoadQueue_Array.FoundationOutside[0]) || !g_BuildingLoadQueue_Array.ExitCoord[2])
    && g_BuildingLoadQueue_Array.DeployFacing > 0
    && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(g_BuildingLoadQueue_Array.ExitCoord[0] + 8))(
         g_BuildingLoadQueue_Array.ExitCoord,
         g_BuildingLoadQueue_Array.ExitCoord[2] + g_BuildingLoadQueue_Array.DeployFacing,
         0) )
  {
    v5 = g_BuildingLoadQueue_Array.unknown___2++; /*0x72607b*/
    *(_DWORD *)(g_BuildingLoadQueue_Array.ExitCoord[1] + 4 * v5) = this; /*0x72608a*/
  }
  if ( dword_A8EAF8 < dword_A8EAF0 /*0x7260c1*/
    || (byte_A8EAF5 || !dword_A8EAF0)
    && dword_A8EAFC > 0
    && (*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(dword_A8EAE8 + 8))(
         &dword_A8EAE8,
         dword_A8EAF0 + dword_A8EAFC,
         0) )
  {
    v6 = dword_A8EAF8++; /*0x7260ce*/
    *((_DWORD *)dword_A8EAEC + v6) = this; /*0x7260dd*/
  }
  if ( *(_DWORD *)(this + 36) ) /*0x7260e0*/
  {
    if ( (BuildingClass::ProcessUpgradeEffects((BuildingClass *)this), v7 = *(_BYTE **)(this + 36), !v7[159]) /*0x726121*/
      || (vtable0 = dword_A8B230[43].vtable0) == 0 && !v7[156]
      || vtable0 == (void *)1 && !v7[157]
      || vtable0 == (void *)2 && !v7[158] )
    {
      *(_BYTE *)(this + 68) = 0; /*0x726129*/
    }
  }
  return this; /*0x72612e*/
}



// ==== 0x00726250  TriggerClass::HasCrossesHorizontalLineEvent  this=TriggerClass  sig=csp ====
bool __thiscall TriggerClass::HasCrossesHorizontalLineEvent(TriggerClass *this)
{
  TriggerClass *nextTrigger; // eax
  HouseClass *buildingType; // ecx

  nextTrigger = this->nextTrigger; /*0x726253*/
  buildingType = (HouseClass *)this->buildingType; /*0x726256*/
  if ( !nextTrigger ) /*0x72625b*/
    return HouseClass::HasType25Building(buildingType); /*0x72627d*/
  return (unsigned __int8)HouseClass::HasType25Building(buildingType) /*0x726274*/
      || TriggerClass::HasCrossesHorizontalLineEvent(this->nextTrigger);
}



// ==== 0x00726290  TriggerClass::HasCrossesVerticalLineEvent  this=TriggerClass  sig=csp ====
bool __thiscall TriggerClass::HasCrossesVerticalLineEvent(TriggerClass *this)
{
  TriggerClass *nextTrigger; // eax
  HouseClass *buildingType; // ecx

  nextTrigger = this->nextTrigger; /*0x726293*/
  buildingType = (HouseClass *)this->buildingType; /*0x726296*/
  if ( !nextTrigger ) /*0x72629b*/
    return HouseClass::HasType26Building(buildingType); /*0x7262bd*/
  return (unsigned __int8)HouseClass::HasType26Building(buildingType) /*0x7262b4*/
      || TriggerClass::HasCrossesVerticalLineEvent(this->nextTrigger);
}



// ==== 0x007263A0  TriggerClass::NotifyGlobalChanged  this=TriggerClass  sig=csp ====
void __thiscall TriggerClass::NotifyGlobalChanged(TriggerClass *this, int a2)
{
  TriggerClass *i; // esi

  for ( i = this; i; i = i->nextTrigger ) /*0x7263a5*/
  {
    if ( HouseClass::FindType2728((HouseClass *)i->buildingType, a2) ) /*0x7263b0*/
      BuildingClass::ProcessUpgradeEffects((BuildingClass *)i); /*0x7263bb*/
  }
}



// ==== 0x007263D0  TriggerClass::NotifyLocalChanged  this=TriggerClass  sig=csp ====
void __thiscall TriggerClass::NotifyLocalChanged(TriggerClass *this, int a2)
{
  TriggerClass *i; // esi

  for ( i = this; i; i = i->nextTrigger ) /*0x7263d5*/
  {
    if ( TriggerTypeClass::HasLocalSetOrClearedEvent(i->buildingType, a2) ) /*0x7263e0*/
      BuildingClass::ProcessUpgradeEffects((BuildingClass *)i); /*0x7263eb*/
  }
}



// ==== 0x00726400  BuildingClass::ProcessUpgradeEffects  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass::ProcessUpgradeEffects(BuildingClass *this)
{
  char v2; // bp
  int result; // eax
  _DWORD *i; // edi
  int v5; // eax
  int v6; // eax
  int v7; // kr00_4
  BombClass *v8; // [esp+10h] [ebp-8h]

  v2 = 0; /*0x726408*/
  result = this->?; /*0x72640a*/
  for ( i = *(_DWORD **)(result + 172); i; ++v2 ) /*0x726415*/
  {
    if ( i[11] == 13 ) /*0x726420*/
    {
      v5 = 3 * i[13]; /*0x72642e*/
      this->? = *(TagClass **)&stru_A8EB00.?[416]; /*0x726431*/
      this->? = v8; /*0x72643a*/
      this->?[0] = 5 * v5; /*0x72643f*/
      result = ~(1 << v2) & this->?[1]; /*0x72644e*/
      this->?[1] = result; /*0x726450*/
    }
    if ( i[11] == 51 ) /*0x726457*/
    {
      v6 = Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, i[13]); /*0x72646a*/
      v7 = i[13]; /*0x72647b*/
      this->? = *(TagClass **)&stru_A8EB00.?[416]; /*0x726488*/
      this->? = v8; /*0x72648e*/
      this->?[0] = 15 * (v6 + v7 / 2); /*0x726494*/
      result = ~(1 << v2); /*0x7264a3*/
      this->?[1] &= result; /*0x7264a7*/
    }
    i = (_DWORD *)i[10]; /*0x7264aa*/
  }
  return result; /*0x7264b7*/
}



// ==== 0x007264C0  TriggerClass::RegisterEvent  this=ScriptClass  sig=csp ====
char __thiscall TriggerClass::RegisterEvent(int this, int a2, int a3, char a4, char a5, int a6)
{
  char v7; // bl
  TriggerClass *v8; // edi
  int Owner; // eax
  int v11; // [esp-10h] [ebp-18h]
  char v12; // [esp+7h] [ebp-1h]

  if ( !*(_BYTE *)(this + 68) || *(_BYTE *)(this + 48) ) /*0x7264cf*/
    return 0; /*0x7265b4*/
  v12 = 1; /*0x7264e2*/
  if ( a4 ) /*0x7264e7*/
    goto LABEL_16; /*0x7264e7*/
  v7 = 0; /*0x7264f0*/
  v8 = *(TriggerClass **)(*(_DWORD *)(this + 36) + 172); /*0x7264f2*/
  if ( !v8 ) /*0x7264fa*/
    goto LABEL_16; /*0x7264fa*/
  do /*0x72658b*/
  {
    if ( (*(_DWORD *)(this + 64) & (1 << v7)) != 0 /*0x726540*/
      || (v11 = a6,
          Owner = HouseClass::FindOwner(*(HouseClass **)(*(_DWORD *)(*(_DWORD *)(this + 36) + 164) + 180)),
          TEventClass::Execute((TEventClass *)v8, a2, Owner, a3, (int *)(this + 52), (int)&a5, v11)) )
    {
      if ( TriggerClass::GetValue(v8) ) /*0x726551*/
        *(_DWORD *)(this + 44) = TriggerClass::GetValue(v8); /*0x726561*/
      if ( a5 && TEventClass::GetStateA((TEventClass *)v8) && TEventClass::GetStateB_SpyEvent((TEventClass *)v8) ) /*0x726579*/
        *(_DWORD *)(this + 64) |= 1 << v7; /*0x726582*/
    }
    else
    {
      v12 = 0; /*0x726549*/
    }
    v8 = v8->nextTrigger; /*0x726585*/
    ++v7; /*0x726588*/
  }
  while ( v8 ); /*0x72658b*/
  if ( v12 ) /*0x726598*/
  {
LABEL_16:
    if ( a5 ) /*0x7265a0*/
      BuildingClass::ProcessUpgradeEffects((BuildingClass *)this); /*0x7265a4*/
  }
  return v12; /*0x7265af*/
}



// ==== 0x007265C0  BuildingClass::ExecuteTriggers  this=ScriptClass  sig=csp ====
int __thiscall BuildingClass::ExecuteTriggers(int this, int a2, char a3)
{
  int result; // eax
  char v5; // bl
  int i; // esi
  int Owner; // eax

  if ( !*(_BYTE *)(this + 68) || *(_BYTE *)(this + 48) ) /*0x7265ca*/
  {
    LOBYTE(result) = 0; /*0x726620*/
  }
  else
  {
    result = *(_DWORD *)(this + 36); /*0x7265d1*/
    v5 = 0; /*0x7265d6*/
    for ( i = *(_DWORD *)(result + 176); i; i = *(_DWORD *)(i + 40) ) /*0x7265e0*/
    {
      Owner = HouseClass::FindOwner(*(void **)(*(_DWORD *)(*(_DWORD *)(this + 36) + 164) + 180)); /*0x7265fd*/
      if ( TerrainClass::ProcessUpdate(i, this, Owner, a2, (_DWORD *)this, (int)&a3) ) /*0x726605*/
        v5 = 1; /*0x72660e*/
    }
    LOBYTE(result) = v5; /*0x726618*/
  }
  return result; /*0x72661c*/
}



// ==== 0x00726630  TriggerClass::Create  this=TriggerClass  sig=csp ====
int __thiscall TriggerClass::Create(TriggerClass *this)
{
  int v2; // eax
  char *v3; // ecx
  int v4; // eax

  if ( !this ) /*0x726637*/
    return 0; /*0x72667f*/
  v2 = 0; /*0x72663f*/
  if ( dword_A8EAF8 <= 0 ) /*0x726643*/
  {
LABEL_6:
    v4 = __2_YAPAXI_Z(0x48u); /*0x72665c*/
    if ( v4 ) /*0x726668*/
      return TriggerClass::Construct(v4, (int)this); /*0x726675*/
    return 0; /*0x726668*/
  }
  v3 = (char *)dword_A8EAEC; /*0x72664b*/
  while ( this != *(TriggerClass **)(*(_DWORD *)v3 + 36) ) /*0x726652*/
  {
    ++v2; /*0x726654*/
    v3 += 4; /*0x726655*/
    if ( v2 >= dword_A8EAF8 ) /*0x72665a*/
      goto LABEL_6; /*0x72665a*/
  }
  return *((_DWORD *)dword_A8EAEC + v2); /*0x726672*/
}



// ==== 0x00726690  TriggerClass::FireAction  this=TriggerClass  sig=csp ====
int __thiscall TriggerClass::FireAction(TriggerClass *this, int a2, int a3)
{
  int result; // eax

  if ( this->buildingType == (TriggerTypeClass *)a2 ) /*0x726699*/
    this->buildingType = 0; /*0x72669b*/
  result = (int)this->nextTrigger; /*0x7266a2*/
  if ( result == a2 ) /*0x7266a7*/
  {
    result = *(_DWORD *)(result + 40); /*0x7266a9*/
    this->nextTrigger = (TriggerClass *)result; /*0x7266ac*/
  }
  if ( this->house == (HouseClass *)a2 ) /*0x7266b2*/
    this->house = 0; /*0x7266b4*/
  return result; /*0x7266bb*/
}



// ==== 0x007266C0  ObjectClass::method_7266C0  this=ObjectClass  sig=csp ====
_DWORD *__thiscall sub_7266C0(ObjectClass *this, char a2)
{
  this->ambientSoundController[1] |= 1 << a2; /*0x7266cd*/
  return &this->AbstractClass; /*0x7266d0*/
}



// ==== 0x00726720  TeamClass::AddToBuildQueue  this=TeamClass  sig=csp ====
int __thiscall TeamClass::AddToBuildQueue(TeamClass *this)
{
  int result; // eax

  LOBYTE(this->target) = 1; /*0x726723*/
  result = *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_E5C[4]; /*0x726727*/
  if ( *(int *)&g_BuildingLoadQueue_Array.__pad_E5C[12] < *(int *)&g_BuildingLoadQueue_Array.__pad_E5C[4] /*0x726760*/
    || (g_BuildingLoadQueue_Array.__pad_E5C[9] || !*(_DWORD *)&g_BuildingLoadQueue_Array.__pad_E5C[4])
    && g_BuildingLoadQueue_Array.UnitExitSound > 0
    && (result = (*(int (__thiscall **)(int *, int, _DWORD))(g_BuildingLoadQueue_Array.ToTile + 8))(
                   &g_BuildingLoadQueue_Array.ToTile,
                   *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_E5C[4] + g_BuildingLoadQueue_Array.UnitExitSound,
                   0),
        (_BYTE)result) )
  {
    result = (*(_DWORD *)&g_BuildingLoadQueue_Array.__pad_E5C[12])++; /*0x726768*/
    *(_DWORD *)(*(_DWORD *)g_BuildingLoadQueue_Array.__pad_E5C + 4 * result) = this; /*0x726777*/
  }
  return result; /*0x72677a*/
}



// ==== 0x00726780  ObjectClass::method  this=ObjectClass  sig=csp ====
char __thiscall sub_726780(ObjectClass *this)
{
  return (char)this->nextObject; /*0x726783*/
}



// ==== 0x00726790  TriggerClass::FireTrigger  this=TriggerClass  sig=csp ====
int __thiscall TriggerClass::FireTrigger(TriggerClass *this, int *a2)
{
  int v3; // eax
  TriggerClass *nextTrigger; // eax
  int v5; // eax
  int v6; // ecx
  int v7; // edx
  int v8; // eax

  AbstractClass::ProcessPower((AbstractClass *)this); /*0x726799*/
  v3 = (*((int (__stdcall **)(void **))this->buildingType->? + 4))(&this->buildingType->?); /*0x7267a7*/
  Power::TimerProcess(v3); /*0x7267ad*/
  nextTrigger = this->nextTrigger; /*0x7267b2*/
  if ( nextTrigger ) /*0x7267b7*/
  {
    v5 = (*((int (__stdcall **)(void **))nextTrigger->? + 4))(&nextTrigger->?); /*0x7267c0*/
    nextTrigger = (TriggerClass *)Power::TimerProcess(v5); /*0x7267c6*/
  }
  LOBYTE(nextTrigger) = this->destroyed; /*0x7267cb*/
  Power::FlagProcess((Power *)a2, (int)nextTrigger); /*0x7267d1*/
  LOBYTE(v6) = this->enabled; /*0x7267d6*/
  Power::FlagProcess((Power *)a2, v6); /*0x7267dc*/
  v7 = this->timer[0]; /*0x7267e1*/
  v8 = this->timer[2]; /*0x7267e4*/
  if ( v7 != -1 ) /*0x7267ea*/
  {
    if ( *(_DWORD *)&stru_A8EB00.?[416] - v7 >= v8 ) /*0x7267f6*/
      v8 = 0; /*0x7267fc*/
    else
      v8 -= *(_DWORD *)&stru_A8EB00.?[416] - v7; /*0x7267f8*/
  }
  Power::TimerProcess(v8); /*0x726801*/
  return Power::TimerProcess(this->occuredEvents); /*0x726811*/
}



// ==== 0x00726820  TriggerClass::ddtor  this=TriggerClass  sig=csp ====
int __stdcall TriggerClass::ddtor(TriggerClass *this, _DWORD *a2)
{
  if ( !a2 ) /*0x726826*/
    return -2147467261; /*0x726828*/
  *a2 = -1070787184; /*0x726836*/
  a2[1] = 298977834; /*0x72683e*/
  a2[2] = 1610655660; /*0x726847*/
  a2[3] = unk_7E97EC; /*0x726850*/
  return 0; /*0x72682d*/
}



// ==== 0x00726860  TriggerClass::LoadTrigger  this=TriggerClass  sig=csp ====
int __stdcall TriggerClass::LoadTrigger(TriggerClass *this, int a2)
{
  int result; // eax

  result = AbstractClass::SaveLoad_Prefix_0(this, a2); /*0x72686b*/
  if ( result >= 0 ) /*0x726872*/
  {
    if ( this ) /*0x726876*/
    {
      AbstractClass::InitVtables((AbstractClass *)this, (int)&a2); /*0x72687f*/
      this->AbstractClass = &TriggerClass::`vftable'; /*0x726884*/
      this->? = &TriggerClass::`vftable'; /*0x72688a*/
      this->? = &TriggerClass::`vftable'; /*0x726891*/
      this->? = &TriggerClass::`vftable'; /*0x726898*/
    }
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)&this->buildingType); /*0x7268a8*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)&this->nextTrigger); /*0x7268b6*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)&this->house); /*0x7268c4*/
    return 0; /*0x7268c9*/
  }
  return result; /*0x7268cb*/
}



// ==== 0x007268D0  TriggerClass::SaveTrigger  this=TriggerClass  sig=csp ====
int __stdcall TriggerClass::SaveTrigger(TriggerClass *this, int *a2, int a3)
{
  int result; // eax

  result = AbstractClass::SaveLoad_Prefix((int *)this, a2, a3); /*0x7268df*/
  if ( result >= 0 ) /*0x7268e6*/
    return 0; /*0x7268e8*/
  return result; /*0x7268ea*/
}



// ==== 0x007268F0  TActionClass::executeAirstrikeAction  this=TActionClass  sig=csp ====
int __thiscall TActionClass::executeAirstrikeAction(TActionClass *this)
{
  LOBYTE(this->TActionClass_field_44) = 1; /*0x7268f0*/
  return BuildingClass::ProcessUpgradeEffects((BuildingClass *)this);
}



// ==== 0x00726900  TActionClass::executeDetonateAction  this=TActionClass  sig=csp ====
void __thiscall TActionClass::executeDetonateAction(TActionClass *this)
{
  LOBYTE(this->TActionClass_field_44) = 0; /*0x726900*/
}



// ==== 0x00726910  Property::GetField11  this=Property  sig=csp ====
int __thiscall Property::GetField11(Property *this)
{
  return *((_DWORD *)this + 11); /*0x726913*/
}



// ==== 0x00726920  ObjectClass::method  this=ObjectClass  sig=csp ====
int __thiscall sub_726920(_DWORD *this, int a2)
{
  this->fallRate = a2; /*0x726924*/
  return a2; /*0x726927*/
}



// ==== 0x00726930  TriggerClass::StubReturn72  this=TriggerClass  sig=csp ====
int TriggerClass::StubReturn72(TriggerClass *this)
{
  return 72; /*0x726935*/
}



// ==== 0x00726940  TriggerClass::StubReturn38  this=TriggerClass  sig=csp ====
int TriggerClass::StubReturn38(TriggerClass *this)
{
  return 38; /*0x726945*/
}



// ==== 0x00726950  TriggerClass::CheckCondition  this=TriggerClass  sig=csp ====
void **__thiscall TriggerClass::CheckCondition(TriggerClass *this, char a2)
{
  int v3; // eax
  int v4; // eax
  int v5; // eax
  TriggerClass *v7; // [esp+8h] [ebp-4h] BYREF

  this->AbstractClass = &TriggerClass::`vftable'; /*0x726956*/
  this->? = &TriggerClass::`vftable'; /*0x72695c*/
  this->? = &TriggerClass::`vftable'; /*0x726963*/
  this->? = &TriggerClass::`vftable'; /*0x72696a*/
  AbstractClass::AnnounceExpiredPointer((AbstractClass *)this, 1); /*0x726971*/
  v7 = this; /*0x726986*/
  v3 = (*(int (__thiscall **)(_DWORD *, TriggerClass **))(dword_A8EAE8 + 16))(&dword_A8EAE8, &v7); /*0x72698a*/
  if ( v3 != -1 && v3 < dword_A8EAF8 && v3 < --dword_A8EAF8 ) /*0x7269a5*/
  {
    do /*0x7269bd*/
    {
      ++v3; /*0x7269ad*/
      *((_DWORD *)dword_A8EAEC + v3 - 1) = *((_DWORD *)dword_A8EAEC + v3); /*0x7269b1*/
    }
    while ( v3 < dword_A8EAF8 ); /*0x7269bd*/
  }
  v7 = this; /*0x7269cf*/
  v4 = (*(int (__thiscall **)(int *, TriggerClass **))(g_BuildingLoadQueue_Array.LightVisibility + 16))( /*0x7269d3*/
         &g_BuildingLoadQueue_Array.LightVisibility,
         &v7);
  if ( v4 != -1 && v4 < g_BuildingLoadQueue_Array.LightBlueTint ) /*0x7269e3*/
  {
    --g_BuildingLoadQueue_Array.LightBlueTint; /*0x7269e8*/
    for ( ; /*0x7269ee*/
          v4 < g_BuildingLoadQueue_Array.LightBlueTint;
          *(_DWORD *)(g_BuildingLoadQueue_Array.LightIntensity + 4 * v4 - 4) = *(_DWORD *)(g_BuildingLoadQueue_Array.LightIntensity
                                                                                         + 4 * v4) )
    {
      ++v4; /*0x7269f6*/
    }
  }
  v7 = this; /*0x726a18*/
  v5 = (*(int (__thiscall **)(int *, TriggerClass **))(g_BuildingLoadQueue_Array.ExitCoord[0] + 16))( /*0x726a1c*/
         g_BuildingLoadQueue_Array.ExitCoord,
         &v7);
  if ( v5 != -1 && v5 < g_BuildingLoadQueue_Array.unknown___2 ) /*0x726a2c*/
  {
    --g_BuildingLoadQueue_Array.unknown___2; /*0x726a31*/
    for ( ; /*0x726a37*/
          v5 < g_BuildingLoadQueue_Array.unknown___2;
          *(_DWORD *)(g_BuildingLoadQueue_Array.ExitCoord[1] + 4 * v5 - 4) = *(_DWORD *)(g_BuildingLoadQueue_Array.ExitCoord[1]
                                                                                       + 4 * v5) )
    {
      ++v5; /*0x726a3f*/
    }
  }
  AbstractClass::DTOR((AbstractClass *)this); /*0x726a53*/
  if ( (a2 & 1) != 0 ) /*0x726a5d*/
    __3_YAXPAX_Z(this); /*0x726a60*/
  return &this->AbstractClass; /*0x726a6a*/
}



// ==== 0x00726A70  sub_726A70  this=-  sig=ida-proto ====
void sub_726A70()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x726a7c*/
  dbl_B0F7F8 = Math::Sqrt(v0 + v0); /*0x726a8e*/
}



// ==== 0x00726AA0  sub_726AA0  this=-  sig=ida-proto ====
void sub_726AA0()
{
  dbl_B0F848 = dbl_B0F7F8 / 60.0; /*0x726aac*/
}



// ==== 0x00726AC0  sub_726AC0  this=-  sig=ida-proto ====
void sub_726AC0()
{
  dbl_B0F830 = 1.0 / dbl_B0F848; /*0x726acc*/
}



// ==== 0x00726AE0  sub_726AE0  this=-  sig=ida-proto ====
void sub_726AE0()
{
  dbl_B0F828 = 0.0174532925199433 * 45.0; /*0x726aec*/
}



// ==== 0x00726B00  sub_726B00  this=-  sig=ida-proto ====
void sub_726B00()
{
  dbl_B0F800 = 0.0174532925199433 * 60.0; /*0x726b0c*/
}



// ==== 0x00726B20  sub_726B20  this=-  sig=ida-proto ====
void sub_726B20()
{
  dbl_B0F7D8 = 0.0174532925199433 * 90.0; /*0x726b2c*/
}



// ==== 0x00726B40  sub_726B40  this=-  sig=ida-proto ====
__int64 sub_726B40()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_B0F7D8 - dbl_B0F800); /*0x726b52*/
  result = Math::RoundToInt(v0 * dbl_B0F7F8 * 0.5); /*0x726b66*/
  dword_B0F850 = result; /*0x726b6b*/
  return result; /*0x726b70*/
}



// ==== 0x00726B80  sub_726B80  this=-  sig=ida-proto ====
void sub_726B80()
{
  dbl_B0F808 = Math::ArcTan((double)dword_B0F850 * 0.00390625); /*0x726b97*/
}



// ==== 0x00726BB0  sub_726BB0  this=-  sig=ida-proto ====
void sub_726BB0()
{
  dbl_B0F820 = Math::ArcTan((double)(2 * dword_B0F850) / dbl_B0F7F8); /*0x726bd2*/
}



// ==== 0x00726BE0  sub_726BE0  this=-  sig=ida-proto ====
__int64 sub_726BE0()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_B0F850) + 0.5); /*0x726bfb*/
  dword_B0F844 = result; /*0x726c00*/
  return result; /*0x726c06*/
}



// ==== 0x00726C10  sub_726C10  this=-  sig=ida-proto ====
int sub_726C10()
{
  word_B0F7F0 = 0; /*0x726c12*/
  word_B0F7F2 = 0; /*0x726c18*/
  return 0; /*0x726c1e*/
}



// ==== 0x00726C20  sub_726C20  this=-  sig=ida-proto ====
int sub_726C20()
{
  dword_B0F810 = 0; /*0x726c22*/
  dword_B0F814 = 0; /*0x726c27*/
  dword_B0F818 = 0; /*0x726c2c*/
  return 0; /*0x726c31*/
}



// ==== 0x00726C40  sub_726C40  this=-  sig=ida-proto ====
int sub_726C40()
{
  dword_B0F840 = 0; /*0x726c45*/
  dword_B0F838 = 128; /*0x726c4f*/
  dword_B0F83C = 128; /*0x726c54*/
  return 128; /*0x726c59*/
}



// ==== 0x00726C60  sub_726C60  this=-  sig=ida-proto ====
int sub_726C60()
{
  dword_B0F7E0 = 0; /*0x726c62*/
  dword_B0F7E4 = 0; /*0x726c67*/
  dword_B0F7E8 = 0; /*0x726c6c*/
  dword_B0F7EC = 0; /*0x726c71*/
  return 0; /*0x726c76*/
}



// ==== 0x00726C80  TriggerTypeClass::Construct  this=TriggerTypeClass  sig=csp ====
_DWORD *__thiscall TriggerTypeClass::Construct(TriggerTypeClass *this, char *Source)
{
  int v3; // eax
  int v4; // eax
  int v5; // eax

  AbstractTypeClass::Constructor((int *)this, Source); /*0x726c89*/
  this->ArrayIndex = -1; /*0x726c92*/
  this->Difficulty[0] = 1; /*0x726c9c*/
  this->Difficulty[1] = 1; /*0x726ca2*/
  this->Difficulty[2] = 1; /*0x726ca8*/
  this->Enabled = 1; /*0x726cae*/
  this->MustTransfer = 0; /*0x726cb4*/
  this->House = 0; /*0x726cba*/
  this->NextTrigger = 0; /*0x726cc0*/
  this->FirstEvent = 0; /*0x726cc6*/
  this->FirstAction = 0; /*0x726ccc*/
  this->AbstractClass = &TriggerTypeClass::`vftable'; /*0x726cd2*/
  this->? = &TriggerTypeClass::`vftable'; /*0x726cd8*/
  this->? = &TriggerTypeClass::`vftable'; /*0x726cdf*/
  this->? = &TriggerTypeClass::`vftable'; /*0x726ce6*/
  if ( g_BuildingLoadQueue_Array.GateCloseDelay[0] < g_BuildingLoadQueue_Array.HalfDamageSmokeLocation2[2] /*0x726d21*/
    || (BYTE1(g_BuildingLoadQueue_Array.align_E24[0]) || !g_BuildingLoadQueue_Array.HalfDamageSmokeLocation2[2])
    && g_BuildingLoadQueue_Array.GateCloseDelay[1] > 0
    && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(g_BuildingLoadQueue_Array.HalfDamageSmokeLocation2[0] + 8))(
         g_BuildingLoadQueue_Array.HalfDamageSmokeLocation2,
         g_BuildingLoadQueue_Array.HalfDamageSmokeLocation2[2] + g_BuildingLoadQueue_Array.GateCloseDelay[1],
         0) )
  {
    v3 = g_BuildingLoadQueue_Array.GateCloseDelay[0]++; /*0x726d2e*/
    *(_DWORD *)(g_BuildingLoadQueue_Array.HalfDamageSmokeLocation2[1] + 4 * v3) = this; /*0x726d3d*/
  }
  if ( g_BuildingLoadQueue_Array.LightBlueTint < g_BuildingLoadQueue_Array.LightRedTint /*0x726d74*/
    || (BYTE1(g_BuildingLoadQueue_Array.LightGreenTint) || !g_BuildingLoadQueue_Array.LightRedTint)
    && g_BuildingLoadQueue_Array.PrimaryFirePixelOffset[0] > 0
    && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(g_BuildingLoadQueue_Array.LightVisibility + 8))(
         &g_BuildingLoadQueue_Array.LightVisibility,
         g_BuildingLoadQueue_Array.LightRedTint + g_BuildingLoadQueue_Array.PrimaryFirePixelOffset[0],
         0) )
  {
    v4 = g_BuildingLoadQueue_Array.LightBlueTint++; /*0x726d81*/
    *(_DWORD *)(g_BuildingLoadQueue_Array.LightIntensity + 4 * v4) = this; /*0x726d90*/
  }
  this->ArrayIndex = *(_DWORD *)FootClass_Array.?; /*0x726d99*/
  if ( *(int *)FootClass_Array.? < FootClass_Array.?[1] /*0x726dd0*/
    || (BYTE1(FootClass_Array.?[2]) || !FootClass_Array.?[1])
    && *(int *)&FootClass_Array.? > 0
    && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(FootClass_Array.? + 8))(
         &FootClass_Array.?,
         FootClass_Array.?[1] + *(_DWORD *)&FootClass_Array.?,
         0) )
  {
    v5 = (*(_DWORD *)FootClass_Array.?)++; /*0x726ddd*/
    *(_DWORD *)(FootClass_Array.?[0] + 4 * v5) = this; /*0x726dec*/
  }
  return &this->AbstractClass; /*0x726df1*/
}



// ==== 0x00726E00  TriggerTypeClass::ProcessEvents  this=TriggerTypeClass  sig=csp ====
int __thiscall TriggerClass::ProcessEvents(AbstractClass *this)
{
  int v2; // eax
  _DWORD *v3; // ecx
  _DWORD *v4; // esi
  _DWORD *v5; // ecx
  _DWORD *v6; // esi
  int v7; // eax
  int v8; // eax
  AbstractClass *v10; // [esp+10h] [ebp-4h] BYREF

  this->vtable0 = &TriggerTypeClass::`vftable'; /*0x726e06*/
  this->vtable1 = &TriggerTypeClass::`vftable'; /*0x726e0c*/
  this->vtable2 = &TriggerTypeClass::`vftable'; /*0x726e13*/
  this->vtable3 = &TriggerTypeClass::`vftable'; /*0x726e1a*/
  AbstractClass::AnnounceExpiredPointer(this, 1); /*0x726e21*/
  v10 = this; /*0x726e36*/
  v2 = (*(int (__thiscall **)(int *, AbstractClass **))(FootClass_Array.? + 16))(&FootClass_Array.?, &v10); /*0x726e3a*/
  if ( v2 != -1 && v2 < *(int *)FootClass_Array.? ) /*0x726e4a*/
  {
    --*(_DWORD *)FootClass_Array.?; /*0x726e4f*/
    for ( ; /*0x726e55*/
          v2 < *(int *)FootClass_Array.?;
          *(_DWORD *)(FootClass_Array.?[0] + 4 * v2 - 4) = *(_DWORD *)(FootClass_Array.?[0] + 4 * v2) )
    {
      ++v2; /*0x726e5d*/
    }
  }
  v3 = (_DWORD *)this->mustTransfer; /*0x726e6f*/
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
  v5 = (_DWORD *)this->enabled; /*0x726e8e*/
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
  v7 = (*(int (__thiscall **)(int *, AbstractClass **))(g_BuildingLoadQueue_Array.LightVisibility + 16))( /*0x726ec0*/
         &g_BuildingLoadQueue_Array.LightVisibility,
         &v10);
  if ( v7 != -1 && v7 < g_BuildingLoadQueue_Array.LightBlueTint ) /*0x726ed1*/
  {
    --g_BuildingLoadQueue_Array.LightBlueTint; /*0x726ed6*/
    for ( ; /*0x726edc*/
          v7 < g_BuildingLoadQueue_Array.LightBlueTint;
          *(_DWORD *)(g_BuildingLoadQueue_Array.LightIntensity + 4 * v7 - 4) = *(_DWORD *)(g_BuildingLoadQueue_Array.LightIntensity
                                                                                         + 4 * v7) )
    {
      ++v7; /*0x726ee4*/
    }
  }
  v10 = this; /*0x726f06*/
  v8 = (*(int (__thiscall **)(int *, AbstractClass **))(g_BuildingLoadQueue_Array.HalfDamageSmokeLocation2[0] + 16))( /*0x726f0a*/
         g_BuildingLoadQueue_Array.HalfDamageSmokeLocation2,
         &v10);
  if ( v8 != -1 && v8 < g_BuildingLoadQueue_Array.GateCloseDelay[0] ) /*0x726f1a*/
  {
    --g_BuildingLoadQueue_Array.GateCloseDelay[0]; /*0x726f1f*/
    for ( ; /*0x726f25*/
          v8 < g_BuildingLoadQueue_Array.GateCloseDelay[0];
          *(_DWORD *)(g_BuildingLoadQueue_Array.HalfDamageSmokeLocation2[1] + 4 * v8 - 4) = *(_DWORD *)(g_BuildingLoadQueue_Array.HalfDamageSmokeLocation2[1] + 4 * v8) )
    {
      ++v8; /*0x726f2d*/
    }
  }
  return AbstractTypeClass::Dtor((AbstractTypeClass *)this); /*0x726f46*/
}



// ==== 0x00726F50  HouseClass::HasType26Building  this=HouseClass  sig=csp ====
int __thiscall HouseClass::HasType26Building(HouseClass *this)
{
  int psychicDetectionCapacity; // ecx
  int result; // eax

  psychicDetectionCapacity = this->psychicDetectionCapacity; /*0x726f50*/
  LOBYTE(result) = 0; /*0x726f56*/
  if ( psychicDetectionCapacity ) /*0x726f5a*/
  {
    while ( *(_DWORD *)(psychicDetectionCapacity + 44) != 26 ) /*0x726f64*/
    {
      psychicDetectionCapacity = *(_DWORD *)(psychicDetectionCapacity + 40); /*0x726f66*/
      if ( !psychicDetectionCapacity ) /*0x726f6b*/
        return result; /*0x726f6b*/
    }
    LOBYTE(result) = 1; /*0x726f6e*/
  }
  return result; /*0x726f6d*/
}



// ==== 0x00726F80  HouseClass::HasType25Building  this=HouseClass  sig=csp ====
int __thiscall HouseClass::HasType25Building(HouseClass *this)
{
  int psychicDetectionCapacity; // ecx
  int result; // eax

  psychicDetectionCapacity = this->psychicDetectionCapacity; /*0x726f80*/
  LOBYTE(result) = 0; /*0x726f86*/
  if ( psychicDetectionCapacity ) /*0x726f8a*/
  {
    while ( *(_DWORD *)(psychicDetectionCapacity + 44) != 25 ) /*0x726f94*/
    {
      psychicDetectionCapacity = *(_DWORD *)(psychicDetectionCapacity + 40); /*0x726f96*/
      if ( !psychicDetectionCapacity ) /*0x726f9b*/
        return result; /*0x726f9b*/
    }
    LOBYTE(result) = 1; /*0x726f9e*/
  }
  return result; /*0x726f9d*/
}



// ==== 0x00726FB0  HouseClass::FindType24  this=HouseClass  sig=csp ====
bool __thiscall HouseClass::FindType24(HouseClass *this)
{
  std::codecvt_base *psychicDetectionCapacity; // ecx
  bool result; // al

  psychicDetectionCapacity = (std::codecvt_base *)this->psychicDetectionCapacity; /*0x726fb0*/
  result = 0; /*0x726fb6*/
  if ( !psychicDetectionCapacity ) /*0x726fba*/
    JUMPOUT(0x726FD0); /*0x726fd0*/
  while ( *((_DWORD *)psychicDetectionCapacity + 11) != 24 ) /*0x726fc4*/
  {
    psychicDetectionCapacity = (std::codecvt_base *)*((_DWORD *)psychicDetectionCapacity + 10); /*0x726fc6*/
    if ( !psychicDetectionCapacity ) /*0x726fcb*/
      return result; /*0x726fcb*/
  }
  return _do_always_noconv_codecvt_base_std__MBE_NXZ_20(psychicDetectionCapacity); /*0x726fcd*/
}



// ==== 0x00726FCE  ObjectClass::?do_always_noconv_codecvt_base_std__MBE_NXZ_20  this=ObjectClass  sig=csp ====
char __thiscall _do_always_noconv_codecvt_base_std__MBE_NXZ_20(std::codecvt_base *this)
{
  return 1; /*0x726fd0*/
}



// ==== 0x00726FE0  HouseClass::FindType15  this=HouseClass  sig=csp ====
char __thiscall HouseClass::FindType15(HouseClass *this)
{
  int v1; // ecx
  char result; // al

  v1 = this->productionFactory_plants[0]; /*0x726fe0*/
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



// ==== 0x00727010  HouseClass::FindType2728  this=TOP  sig=csp ====
char __thiscall HouseClass::FindType2728(HouseClass *this, int a2)
{
  _DWORD *psychicDetectionCapacity; // ecx
  char result; // al
  int v4; // edx

  psychicDetectionCapacity = (_DWORD *)this->psychicDetectionCapacity; /*0x727010*/
  result = 0; /*0x727016*/
  if ( psychicDetectionCapacity ) /*0x72701b*/
  {
    while ( 1 ) /*0x727021*/
    {
      v4 = psychicDetectionCapacity[11]; /*0x727021*/
      if ( (v4 == 27 || v4 == 28) && psychicDetectionCapacity[13] == a2 ) /*0x727031*/
        break; /*0x727031*/
      psychicDetectionCapacity = (_DWORD *)psychicDetectionCapacity[10]; /*0x727033*/
      if ( !psychicDetectionCapacity ) /*0x727038*/
        return result; /*0x727038*/
    }
    return 1; /*0x72703e*/
  }
  return result; /*0x72703a*/
}



// ==== 0x00727050  TriggerTypeClass::HasLocalSetOrClearedEvent  this=TriggerTypeClass  sig=csp ====
bool __thiscall TriggerTypeClass::HasLocalSetOrClearedEvent(TriggerTypeClass *this, int a2)
{
  TEventClass *FirstEvent; // ecx
  bool result; // al
  int TEventClass_field_2C; // edx

  FirstEvent = this->FirstEvent; /*0x727050*/
  result = 0; /*0x727056*/
  if ( FirstEvent ) /*0x72705b*/
  {
    while ( 1 ) /*0x727061*/
    {
      TEventClass_field_2C = FirstEvent->TEventClass_field_2C; /*0x727061*/
      if ( (TEventClass_field_2C == 36 || TEventClass_field_2C == 37) && FirstEvent->TEventClass_field_34 == a2 ) /*0x727071*/
        break; /*0x727071*/
      FirstEvent = (TEventClass *)FirstEvent->TEventClass_field_28; /*0x727073*/
      if ( !FirstEvent ) /*0x727078*/
        return result; /*0x727078*/
    }
    return 1; /*0x72707e*/
  }
  return result; /*0x72707a*/
}



// ==== 0x00727090  TriggerTypeClass::GetAction  this=TriggerTypeClass  sig=csp ====
int __thiscall TriggerTypeClass::GetAction(TriggerTypeClass *this, int a2, int a3)
{
  TriggerTypeClass *NextTrigger; // eax
  TActionClass *i; // esi
  TActionClass *FirstAction; // eax
  TEventClass *j; // esi
  int result; // eax

  NextTrigger = this->NextTrigger; /*0x727098*/
  if ( NextTrigger && NextTrigger == (TriggerTypeClass *)a2 ) /*0x7270a4*/
    this->NextTrigger = NextTrigger->NextTrigger; /*0x7270ac*/
  for ( i = this->FirstAction; i; i = (TActionClass *)i->TActionClass_field_28 ) /*0x7270bb*/
    (*((void (__thiscall **)(TActionClass *, int, int))i->AbstractClass + 10))(i, a2, 1); /*0x7270c4*/
  FirstAction = this->FirstAction; /*0x7270ce*/
  if ( FirstAction == (TActionClass *)a2 ) /*0x7270d6*/
    this->FirstAction = (TActionClass *)FirstAction->TActionClass_field_28; /*0x7270db*/
  for ( j = this->FirstEvent; j; j = (TEventClass *)j->TEventClass_field_28 ) /*0x7270e9*/
    (*((void (__thiscall **)(TEventClass *, int, int))j->AbstractClass + 10))(j, a2, 1); /*0x7270f2*/
  result = (int)this->FirstEvent; /*0x7270fc*/
  if ( result == a2 ) /*0x727105*/
  {
    result = *(_DWORD *)(result + 40); /*0x727107*/
    this->FirstEvent = (TEventClass *)result; /*0x72710a*/
  }
  return result; /*0x727110*/
}



// ==== 0x00727190  ObjectClass::method  this=ObjectClass  sig=csp ====
int __thiscall sub_727190(ObjectClass *this)
{
  int v2; // edi
  char **v3; // esi

  v2 = 0; /*0x727195*/
  v3 = off_8449F8; /*0x727197*/
  while ( _strcmpi((char *)this, *v3) ) /*0x7271aa*/
  {
    ++v3; /*0x7271ac*/
    ++v2; /*0x7271af*/
    if ( (int)v3 >= (int)aPersistent ) /*0x7271b6*/
      return 0; /*0x7271bd*/
  }
  return v2; /*0x7271b8*/
}



// ==== 0x007271D0  sub_7271D0  this=-  sig=ida-proto ====
char *__fastcall sub_7271D0(int a1)
{
  return off_8449F8[a1]; /*0x7271d7*/
}



// ==== 0x007271E0  TriggerTypeClass::GetFlags  this=TriggerTypeClass  sig=csp ====
int __thiscall TriggerTypeClass::GetFlags(TriggerTypeClass *this)
{
  TEventClass *FirstEvent; // esi
  int i; // edi
  int ActionCategoryFlags; // eax
  TActionClass *j; // esi
  int v6; // eax
  TriggerTypeClass *NextTrigger; // ecx

  FirstEvent = this->FirstEvent; /*0x7271e5*/
  for ( i = 0; FirstEvent; i |= ActionCategoryFlags ) /*0x7271ef*/
  {
    ActionCategoryFlags = TriggerTypeClass::GetActionCategoryFlags((TriggerTypeClass *)FirstEvent->TEventClass_field_2C); /*0x7271f4*/
    FirstEvent = (TEventClass *)FirstEvent->TEventClass_field_28; /*0x7271f9*/
  }
  for ( j = this->FirstAction; j; i |= v6 ) /*0x72720a*/
  {
    v6 = TriggerTypeClass::Dispatch((TriggerTypeClass *)j->TActionClass_field_2C); /*0x72720f*/
    j = (TActionClass *)j->TActionClass_field_28; /*0x727214*/
  }
  NextTrigger = this->NextTrigger; /*0x72721d*/
  if ( NextTrigger ) /*0x727225*/
    return i | TriggerTypeClass::GetFlags(NextTrigger); /*0x72722c*/
  else
    return i; /*0x727232*/
}



// ==== 0x00727240  TriggerTypeClass::LoadFromINI  this=TriggerTypeClass  sig=csp ====
char __thiscall TriggerTypeClass::LoadFromINI(TriggerTypeClass *this, unsigned __int8 ***a2)
{
  char *v3; // esi
  HouseTypeClass *v4; // edx
  char *v5; // esi
  int v6; // edi
  TriggerTypeClass *v7; // eax
  TriggerTypeClass *v8; // eax
  char *v9; // eax
  char *v10; // eax
  char *v11; // eax
  char *v12; // eax
  char *v13; // eax
  char *v14; // eax
  char *v15; // eax
  int v16; // eax
  int v17; // edi
  TActionClass *v18; // eax
  TriggerTypeClass *v19; // esi
  char *v20; // eax
  int v21; // eax
  ScriptAction *v22; // edi
  int v23; // ebx
  TActionClass *v24; // eax
  ScriptAction *v25; // esi
  char Destination[48]; // [esp+8h] [ebp-234h] BYREF
  char v28; // [esp+38h] [ebp-204h]
  char String[512]; // [esp+3Ch] [ebp-200h] BYREF

  INIClass::ResetSection((INIClass *)a2); /*0x727253*/
  if ( !INIClass::GetString( /*0x72727b*/
          (INIClass *)a2,
          (unsigned __int8 *)aTriggers,
          (unsigned __int8 *)this->__pad_24,
          &g_INI_DefaultBuffer,
          String,
          512) )
    return 0; /*0x7275b5*/
  v3 = strtok(String, Str); /*0x727290*/
  if ( _strcmpi(v3, g_Str__none_) ) /*0x727298*/
    v4 = (HouseTypeClass *)*((_DWORD *)dword_A83C9C + SuperWeaponTypeClass::FindByName((SuperWeaponTypeClass *)v3)); /*0x7272bb*/
  else
    v4 = *(HouseTypeClass **)dword_A83C9C; /*0x7272aa*/
  this->House = v4; /*0x7272cb*/
  v5 = strtok(0, Str); /*0x7272d6*/
  this->NextTrigger = 0; /*0x7272de*/
  if ( _strcmpi(v5, g_Str__none_) ) /*0x7272e4*/
  {
    if ( !_strcmpi(g_Str__none_, v5) || !_strcmpi(g_Str_none, v5) ) /*0x72730c*/
      goto LABEL_14; /*0x72730c*/
    v6 = 0; /*0x72731d*/
    if ( *(int *)FootClass_Array.? > 0 ) /*0x727321*/
    {
      while ( _strcmpi((char *)(*(_DWORD *)(FootClass_Array.?[0] + 4 * v6) + 36), v5) ) /*0x72733a*/
      {
        if ( ++v6 >= *(int *)FootClass_Array.? ) /*0x727344*/
          goto LABEL_11; /*0x727344*/
      }
      v8 = *(TriggerTypeClass **)(FootClass_Array.?[0] + 4 * v6); /*0x727367*/
      goto LABEL_15; /*0x72736a*/
    }
LABEL_11:
    v7 = (TriggerTypeClass *)__2_YAPAXI_Z(0xB4u); /*0x72734b*/
    if ( v7 ) /*0x727355*/
      v8 = (TriggerTypeClass *)TriggerTypeClass::Construct(v7, v5); /*0x72735a*/
    else
LABEL_14:
      v8 = 0; /*0x72736c*/
LABEL_15:
    this->NextTrigger = v8; /*0x72736e*/
  }
  v9 = strtok(0, Str); /*0x727374*/
  if ( v9 ) /*0x727384*/
  {
    strncpy(Destination, v9, 0x30u); /*0x727395*/
    v28 = 0; /*0x72739d*/
  }
  else
  {
    Destination[0] = 0; /*0x727386*/
  }
  if ( Destination != this->Name ) /*0x7273ab*/
  {
    qmemcpy(this->Name, Destination, 0x30u); /*0x7273b6*/
    this->Name[48] = v28; /*0x7273b8*/
  }
  v10 = strtok(0, Str); /*0x7273bf*/
  this->Enabled = v10 && !atoi(v10); /*0x7273e1*/
  v11 = strtok(0, Str); /*0x7273ee*/
  this->Difficulty[0] = v11 && atoi(v11); /*0x727407*/
  v12 = strtok(0, Str); /*0x72741d*/
  this->Difficulty[1] = v12 && atoi(v12); /*0x727436*/
  v13 = strtok(0, Str); /*0x72744c*/
  this->Difficulty[2] = v13 && atoi(v13); /*0x727465*/
  v14 = strtok(0, Str); /*0x72747b*/
  if ( v14 && atoi(v14) ) /*0x727488*/
    this->MustTransfer = 1; /*0x727494*/
  if ( INIClass::GetString( /*0x7274bb*/
         (INIClass *)a2,
         (unsigned __int8 *)aEvents,
         (unsigned __int8 *)this->__pad_24,
         &g_INI_DefaultBuffer,
         String,
         512) )
  {
    v15 = strtok(String, Str); /*0x7274ce*/
    v16 = atoi(v15); /*0x7274d4*/
    if ( v16 ) /*0x7274de*/
    {
      v17 = v16; /*0x7274e0*/
      do /*0x727514*/
      {
        v18 = (TActionClass *)__2_YAPAXI_Z(0x58u); /*0x7274e4*/
        if ( v18 ) /*0x7274ee*/
          v19 = (TriggerTypeClass *)TActionClass::TActionClass(v18); /*0x7274f7*/
        else
          v19 = 0; /*0x7274fb*/
        TriggerTypeClass::ParseActionData(v19); /*0x7274ff*/
        --v17; /*0x72750a*/
        v19->__pad_24[1] = (int)this->FirstEvent; /*0x72750b*/
        this->FirstEvent = (TEventClass *)v19; /*0x72750e*/
      }
      while ( v17 ); /*0x727514*/
    }
  }
  if ( INIClass::GetString( /*0x727537*/
         (INIClass *)a2,
         (unsigned __int8 *)aActions,
         (unsigned __int8 *)this->__pad_24,
         &g_INI_DefaultBuffer,
         String,
         512) )
  {
    v20 = strtok(String, Str); /*0x72754a*/
    v21 = atoi(v20); /*0x727550*/
    v22 = 0; /*0x727558*/
    this->FirstAction = 0; /*0x72755c*/
    if ( v21 ) /*0x727562*/
    {
      v23 = v21; /*0x727564*/
      do /*0x7275a3*/
      {
        v24 = (TActionClass *)__2_YAPAXI_Z(0x94u); /*0x72756b*/
        if ( v24 ) /*0x727575*/
          v25 = (ScriptAction *)TActionClass::ctor(v24); /*0x72757e*/
        else
          v25 = 0; /*0x727582*/
        ScriptAction::ParseScriptActionParams(v25); /*0x727586*/
        if ( this->FirstAction ) /*0x72758b*/
          *(_DWORD *)v22->__pad_28 = v25; /*0x72759d*/
        else
          this->FirstAction = (TActionClass *)v25; /*0x727595*/
        --v23; /*0x7275a0*/
        v22 = v25; /*0x7275a1*/
      }
      while ( v23 ); /*0x7275a3*/
    }
  }
  return 1; /*0x7275a7*/
}



// ==== 0x007275D0  TriggerClass::Process  this=INIClass  sig=csp ====
int __thiscall sub_7275D0(char *this)
{
  int result; // eax
  int v3; // ebx
  void *StringByIndex; // esi
  int v5; // edi
  _DWORD *v6; // eax
  _DWORD *v7; // eax
  int i; // [esp+8h] [ebp-4h]

  result = INIClass::GetKeyCount(this, (unsigned __int8 *)aTriggers); /*0x7275db*/
  v3 = 0; /*0x7275e0*/
  for ( i = result; v3 < i; ++v3 ) /*0x7275e8*/
  {
    StringByIndex = (void *)INIClass::GetStringByIndex(this, (unsigned __int8 *)aTriggers, v3); /*0x7275ff*/
    if ( !_strcmpi(g_Str__none_, StringByIndex) || !_strcmpi(g_Str_none, StringByIndex) ) /*0x727619*/
      goto LABEL_10; /*0x727619*/
    v5 = 0; /*0x72762a*/
    if ( dword_8B4188 > 0 ) /*0x72762e*/
    {
      while ( _strcmpi((const void *)(*((_DWORD *)dword_8B417C + v5) + 36), StringByIndex) ) /*0x727648*/
      {
        if ( ++v5 >= dword_8B4188 ) /*0x727652*/
          goto LABEL_7; /*0x727652*/
      }
      v7 = (_DWORD *)*((_DWORD *)dword_8B417C + v5); /*0x727675*/
      goto LABEL_11; /*0x727678*/
    }
LABEL_7:
    v6 = __2_YAPAXI_Z(0xB4u); /*0x727659*/
    if ( v6 ) /*0x727663*/
      v7 = TriggerTypeClass::Construct(v6, (char *)StringByIndex); /*0x727668*/
    else
LABEL_10:
      v7 = 0; /*0x72767a*/
LABEL_11:
    result = (*(int (__thiscall **)(_DWORD *, char *))(*v7 + 100))(v7, this); /*0x72767c*/
  }
  return result; /*0x727691*/
}



// ==== 0x007276A0  TriggerTypeClass::GetParameter  this=TriggerTypeClass  sig=csp ====
char __thiscall TriggerTypeClass::GetParameter(TriggerTypeClass *this, char *a2)
{
  TriggerTypeClass *NextTrigger; // eax
  const char *pad_24; // esi
  HouseTypeClass *House; // eax
  const char *id; // eax
  int *v7; // esi
  TEventClass *FirstEvent; // eax
  int i; // ecx
  TEventClass *v10; // ebp
  TActionClass *FirstAction; // eax
  int j; // ecx
  TActionClass *v13; // ebx
  int *v15; // [esp+10h] [ebp-204h]
  char Buffer[512]; // [esp+14h] [ebp-200h] BYREF

  NextTrigger = this->NextTrigger; /*0x7276ab*/
  pad_24 = (const char *)NextTrigger->__pad_24; /*0x7276b4*/
  if ( !NextTrigger ) /*0x7276b7*/
    pad_24 = g_Str__none_; /*0x7276b9*/
  House = this->House; /*0x7276be*/
  if ( House ) /*0x7276c6*/
    id = (const char *)House->id; /*0x7276c8*/
  else
    id = g_Str__none_; /*0x7276cd*/
  sprintf( /*0x727728*/
    Buffer,
    "%s,%s,%s,%d,%d,%d,%d,%d",
    id,
    pad_24,
    this->Name,
    this->Enabled == 0,
    this->Difficulty[0] != 0,
    this->Difficulty[1] != 0,
    this->Difficulty[2] != 0,
    this->MustTransfer != 0);
  v7 = this->__pad_24; /*0x72773a*/
  v15 = this->__pad_24; /*0x727747*/
  INIClass::SetString(a2, (unsigned __int8 *)aTriggers, (char *)this->__pad_24, Buffer); /*0x72774b*/
  FirstEvent = this->FirstEvent; /*0x727750*/
  for ( i = 0; FirstEvent; ++i ) /*0x72775a*/
    FirstEvent = (TEventClass *)FirstEvent->TEventClass_field_28; /*0x72775c*/
  sprintf(Buffer, "%d", i); /*0x72776f*/
  v10 = this->FirstEvent; /*0x727774*/
  if ( v10 ) /*0x72777f*/
  {
    do /*0x7277c0*/
    {
      strcat(Buffer, Str); /*0x7277a6*/
      TEventClass::PrepareSaveToINI(v10, Buffer); /*0x7277b6*/
      v10 = (TEventClass *)v10->TEventClass_field_28; /*0x7277bb*/
    }
    while ( v10 ); /*0x7277c0*/
    v7 = this->__pad_24; /*0x7277c2*/
  }
  INIClass::SetString(a2, (unsigned __int8 *)aEvents, (char *)v7, Buffer); /*0x7277da*/
  FirstAction = this->FirstAction; /*0x7277df*/
  for ( j = 0; FirstAction; ++j ) /*0x7277e9*/
    FirstAction = (TActionClass *)FirstAction->TActionClass_field_28; /*0x7277eb*/
  sprintf(Buffer, "%d", j); /*0x7277fe*/
  v13 = this->FirstAction; /*0x727803*/
  if ( v13 ) /*0x72780e*/
  {
    do /*0x72784f*/
    {
      strcat(Buffer, Str); /*0x727835*/
      ScriptAction::Serialize((int)v13, Buffer); /*0x727845*/
      v13 = (TActionClass *)v13->TActionClass_field_28; /*0x72784a*/
    }
    while ( v13 ); /*0x72784f*/
    v7 = v15; /*0x727851*/
  }
  INIClass::SetString(a2, (unsigned __int8 *)aActions, (char *)v7, Buffer); /*0x727869*/
  return 1; /*0x72786e*/
}



// ==== 0x00727880  ObjectClass::ReadAudioEventINI  this=INIClass  sig=csp ====
int __thiscall ReadAudioEventINI(INIClass *this)
{
  int KeyCount; // ebx
  int i; // edi
  unsigned __int8 *StringByIndex; // eax
  int v5; // ebx
  int j; // edi
  unsigned __int8 *v7; // eax
  int v8; // ebx
  int k; // edi
  unsigned __int8 *v10; // eax
  int result; // eax
  int m; // edi
  char Destination[32]; // [esp+Ch] [ebp-20h] BYREF

  KeyCount = INIClass::GetKeyCount(this->__pad_0, (unsigned __int8 *)aTriggers); /*0x727893*/
  for ( i = 0; i < KeyCount; ++i ) /*0x727899*/
  {
    StringByIndex = (unsigned __int8 *)INIClass::GetStringByIndex(this->__pad_0, (unsigned __int8 *)aTriggers, i); /*0x7278a5*/
    INIClass::GetString(this, (unsigned __int8 *)aTriggers, StringByIndex, &g_INI_DefaultBuffer, Destination, 32); /*0x7278bf*/
    INIClass::ClearSection((int *)this->__pad_0, (int)Destination, 0); /*0x7278cd*/
  }
  INIClass::ClearSection((int *)this->__pad_0, (int)aTriggers, 0); /*0x7278e2*/
  v5 = INIClass::GetKeyCount(this->__pad_0, (unsigned __int8 *)aEvents); /*0x7278f4*/
  for ( j = 0; j < v5; ++j ) /*0x7278fa*/
  {
    v7 = (unsigned __int8 *)INIClass::GetStringByIndex(this->__pad_0, (unsigned __int8 *)aEvents, j); /*0x727906*/
    INIClass::GetString(this, (unsigned __int8 *)aTriggers, v7, &g_INI_DefaultBuffer, Destination, 32); /*0x727920*/
    INIClass::ClearSection((int *)this->__pad_0, (int)Destination, 0); /*0x72792e*/
  }
  INIClass::ClearSection((int *)this->__pad_0, (int)aEvents, 0); /*0x727943*/
  v8 = INIClass::GetKeyCount(this->__pad_0, (unsigned __int8 *)aActions); /*0x727955*/
  for ( k = 0; k < v8; ++k ) /*0x72795b*/
  {
    v10 = (unsigned __int8 *)INIClass::GetStringByIndex(this->__pad_0, (unsigned __int8 *)aActions, k); /*0x727967*/
    INIClass::GetString(this, (unsigned __int8 *)aTriggers, v10, &g_INI_DefaultBuffer, Destination, 32); /*0x727981*/
    INIClass::ClearSection((int *)this->__pad_0, (int)Destination, 0); /*0x72798f*/
  }
  INIClass::ClearSection((int *)this->__pad_0, (int)aActions, 0); /*0x7279a4*/
  result = *(_DWORD *)FootClass_Array.?; /*0x7279a9*/
  for ( m = 0; m < *(int *)FootClass_Array.?; ++m ) /*0x7279b2*/
  {
    (*(void (__thiscall **)(_DWORD, INIClass *))(**(_DWORD **)(FootClass_Array.?[0] + 4 * m) + 104))( /*0x7279bf*/
      *(_DWORD *)(FootClass_Array.?[0] + 4 * m),
      this);
    result = *(_DWORD *)FootClass_Array.?; /*0x7279c2*/
  }
  return result; /*0x7279cc*/
}



// ==== 0x00727AA0  TagTypeClass::FindOrCreateTriggerType  this=Coord  sig=csp ====
_DWORD *__thiscall TagTypeClass::FindOrCreateTriggerType(char *Source)
{
  int v2; // esi
  TriggerTypeClass *v3; // eax

  if ( !_strcmpi(g_Str__none_, Source) || !_strcmpi(g_Str_none, Source) ) /*0x727abc*/
    return 0; /*0x727b1f*/
  v2 = 0; /*0x727acd*/
  if ( *(int *)FootClass_Array.? <= 0 ) /*0x727ad1*/
  {
LABEL_6:
    v3 = (TriggerTypeClass *)__2_YAPAXI_Z(0xB4u); /*0x727af6*/
    if ( v3 ) /*0x727b05*/
      return TriggerTypeClass::Construct(v3, Source); /*0x727b11*/
    return 0; /*0x727b05*/
  }
  while ( _strcmpi((char *)(*(_DWORD *)(FootClass_Array.?[0] + 4 * v2) + 36), Source) ) /*0x727aea*/
  {
    if ( ++v2 >= *(int *)FootClass_Array.? ) /*0x727af4*/
      goto LABEL_6; /*0x727af4*/
  }
  return *(_DWORD **)(FootClass_Array.?[0] + 4 * v2); /*0x727b0f*/
}



// ==== 0x00727B30  TriggerTypeClass::PowerDrainUpdate  this=TriggerTypeClass  sig=csp ====
int __thiscall TriggerTypeClass::PowerDrainUpdate(TriggerTypeClass *this, int *a2)
{
  int v3; // eax
  TriggerTypeClass *NextTrigger; // eax
  int v5; // eax
  int result; // eax
  int v7; // eax
  TActionClass *FirstAction; // esi
  int v9; // eax

  AbstractTypeClass::ProcessPower((AbstractTypeClass *)this, a2); /*0x727b39*/
  v3 = (*((int (__stdcall **)(void **))this->House->? + 4))(&this->House->?); /*0x727b4a*/
  Power::TimerProcess(v3); /*0x727b50*/
  NextTrigger = this->NextTrigger; /*0x727b55*/
  if ( NextTrigger ) /*0x727b5d*/
  {
    v5 = (*((int (__stdcall **)(void **))NextTrigger->? + 4))(&NextTrigger->?); /*0x727b66*/
    Power::TimerProcess(v5); /*0x727b6c*/
  }
  result = (int)this->FirstEvent; /*0x727b71*/
  if ( result ) /*0x727b79*/
  {
    v7 = (*(int (__stdcall **)(int))(*(_DWORD *)(result + 4) + 16))(result + 4); /*0x727b82*/
    result = Power::TimerProcess(v7); /*0x727b88*/
  }
  FirstAction = this->FirstAction; /*0x727b8d*/
  if ( FirstAction ) /*0x727b95*/
  {
    v9 = (*((int (__stdcall **)(void **))FirstAction->? + 4))(&FirstAction->?); /*0x727b9e*/
    return Power::TimerProcess(v9); /*0x727ba4*/
  }
  return result; /*0x727ba9*/
}



// ==== 0x00727BB0  TriggerTypeClass::GetClassIdentifier  this=TriggerTypeClass  sig=csp ====
int __stdcall TriggerTypeClass::GetClassIdentifier(TriggerTypeClass *this, _DWORD *a2)
{
  if ( !a2 ) /*0x727bb6*/
    return -2147467261; /*0x727bb8*/
  *a2 = -1070787183; /*0x727bc6*/
  a2[1] = 298977834; /*0x727bce*/
  a2[2] = 1610655660; /*0x727bd7*/
  a2[3] = unk_7E97FC; /*0x727be0*/
  return 0; /*0x727bbd*/
}



// ==== 0x00727BF0  TriggerTypeClass::LoadTypeData  this=TriggerTypeClass  sig=csp ====
int __stdcall TriggerTypeClass::LoadTypeData(TriggerTypeClass *this, int a2)
{
  int result; // eax

  result = AbstractClass::SaveLoad_Prefix_0(this, a2); /*0x727bfb*/
  if ( result >= 0 ) /*0x727c02*/
  {
    if ( this ) /*0x727c06*/
    {
      AbstractTypeClass::Init((int)this, (int)&a2); /*0x727c0f*/
      this->AbstractClass = &TriggerTypeClass::`vftable'; /*0x727c14*/
      this->? = &TriggerTypeClass::`vftable'; /*0x727c1a*/
      this->? = &TriggerTypeClass::`vftable'; /*0x727c21*/
      this->? = &TriggerTypeClass::`vftable'; /*0x727c28*/
    }
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)&this->NextTrigger); /*0x727c3b*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)&this->FirstEvent); /*0x727c4c*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)&this->FirstAction); /*0x727c5d*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)&this->House); /*0x727c6e*/
    return 0; /*0x727c73*/
  }
  return result; /*0x727c75*/
}



// ==== 0x00727C80  TriggerTypeClass::Write  this=TriggerTypeClass  sig=csp ====
int __stdcall TriggerTypeClass::Write(TriggerTypeClass *this, int *a2, int a3)
{
  int result; // eax

  result = AbstractClass::SaveLoad_Prefix((int *)this, a2, a3); /*0x727c8f*/
  if ( result >= 0 ) /*0x727c96*/
    return 0; /*0x727c98*/
  return result; /*0x727c9a*/
}



// ==== 0x00727CA0  TriggerTypeClass::GetTypeIdentifier  this=TriggerTypeClass  sig=csp ====
int TriggerTypeClass::GetTypeIdentifier(TriggerTypeClass *this)
{
  return 39; /*0x727ca5*/
}



// ==== 0x00727CB0  TriggerTypeClass::GetObjectSize  this=TriggerTypeClass  sig=csp ====
int TriggerTypeClass::GetObjectSize(TriggerTypeClass *this)
{
  return 180; /*0x727cb5*/
}



// ==== 0x00727CC0  TriggerTypeClass::GetAuxField  this=TriggerTypeClass  sig=csp ====
int __thiscall TriggerTypeClass::GetAuxField(TriggerTypeClass *this)
{
  return this->ArrayIndex; /*0x727cc6*/
}



// ==== 0x00727CD0  TriggerTypeClass::Destructor  this=TriggerTypeClass  sig=csp ====
void *__thiscall TextRenderer::Destructor(TriggerTypeClass *this, char a2)
{
  TriggerClass::ProcessEvents((AbstractClass *)this); /*0x727cd3*/
  if ( (a2 & 1) != 0 ) /*0x727cdd*/
    __3_YAXPAX_Z(this); /*0x727ce0*/
  return this; /*0x727cea*/
}



// ==== 0x00727CF0  String::Trim  this=AbstractClass  sig=csp ====
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



// ==== 0x00727D60  WideString::Trim  this=ObjectClass  sig=csp ====
wchar_t *__thiscall WideString::Trim(WideString *this)
{
  unsigned __int16 v2; // ax
  WideString *v3; // esi
  int v4; // eax
  WideString *v5; // ecx

  if ( this ) /*0x727d66*/
  {
    v2 = *(_WORD *)this; /*0x727d68*/
    v3 = this; /*0x727d6b*/
    if ( *(_WORD *)this ) /*0x727d68*/
    {
      do /*0x727d82*/
      {
        if ( v2 > 0x20u ) /*0x727d76*/
          break; /*0x727d76*/
        v2 = *(_WORD *)&v3[2]; /*0x727d78*/
        v3 += 2; /*0x727d7c*/
      }
      while ( v2 ); /*0x727d82*/
      if ( v3 != this ) /*0x727d86*/
        wcscpy((wchar_t *)this, (const wchar_t *)v3); /*0x727d8a*/
    }
    v4 = wcslen((const wchar_t *)this) - 1; /*0x727d9b*/
    if ( v4 >= 0 ) /*0x727d9c*/
    {
      v5 = this + 2 * v4; /*0x727d9e*/
      do /*0x727db8*/
      {
        if ( !*(_WORD *)v3 ) /*0x727da1*/
          break; /*0x727da5*/
        if ( *(_WORD *)v5 > 0x20u ) /*0x727dab*/
          break; /*0x727dab*/
        *(_WORD *)v5 = 0; /*0x727dad*/
        --v4; /*0x727db2*/
        v5 -= 2; /*0x727db3*/
      }
      while ( v4 >= 0 ); /*0x727db8*/
    }
  }
  return (wchar_t *)this; /*0x727dbc*/
}



// ==== 0x00727DC0  sub_727DC0  this=-  sig=ida-proto ====
void sub_727DC0()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x727dcc*/
  dbl_B0F878 = Math::Sqrt(v0 + v0); /*0x727dde*/
}



// ==== 0x00727DF0  sub_727DF0  this=-  sig=ida-proto ====
void sub_727DF0()
{
  dbl_B0F8C8 = dbl_B0F878 / 60.0; /*0x727dfc*/
}



// ==== 0x00727E10  sub_727E10  this=-  sig=ida-proto ====
void sub_727E10()
{
  dbl_B0F8B0 = 1.0 / dbl_B0F8C8; /*0x727e1c*/
}



// ==== 0x00727E30  sub_727E30  this=-  sig=ida-proto ====
void sub_727E30()
{
  dbl_B0F8A8 = 0.0174532925199433 * 45.0; /*0x727e3c*/
}



// ==== 0x00727E50  sub_727E50  this=-  sig=ida-proto ====
void sub_727E50()
{
  dbl_B0F880 = 0.0174532925199433 * 60.0; /*0x727e5c*/
}



// ==== 0x00727E70  sub_727E70  this=-  sig=ida-proto ====
void sub_727E70()
{
  dbl_B0F858 = 0.0174532925199433 * 90.0; /*0x727e7c*/
}



// ==== 0x00727E90  sub_727E90  this=-  sig=ida-proto ====
__int64 sub_727E90()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_B0F858 - dbl_B0F880); /*0x727ea2*/
  result = Math::RoundToInt(v0 * dbl_B0F878 * 0.5); /*0x727eb6*/
  dword_B0F8D0 = result; /*0x727ebb*/
  return result; /*0x727ec0*/
}



// ==== 0x00727ED0  sub_727ED0  this=-  sig=ida-proto ====
void sub_727ED0()
{
  dbl_B0F888 = Math::ArcTan((double)dword_B0F8D0 * 0.00390625); /*0x727ee7*/
}



// ==== 0x00727F00  sub_727F00  this=-  sig=ida-proto ====
void sub_727F00()
{
  dbl_B0F8A0 = Math::ArcTan((double)(2 * dword_B0F8D0) / dbl_B0F878); /*0x727f22*/
}



// ==== 0x00727F30  sub_727F30  this=-  sig=ida-proto ====
__int64 sub_727F30()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_B0F8D0) + 0.5); /*0x727f4b*/
  dword_B0F8C4 = result; /*0x727f50*/
  return result; /*0x727f56*/
}



// ==== 0x00727F60  sub_727F60  this=-  sig=ida-proto ====
int sub_727F60()
{
  word_B0F870 = 0; /*0x727f62*/
  word_B0F872 = 0; /*0x727f68*/
  return 0; /*0x727f6e*/
}



// ==== 0x00727F70  sub_727F70  this=-  sig=ida-proto ====
int sub_727F70()
{
  dword_B0F890 = 0; /*0x727f72*/
  dword_B0F894 = 0; /*0x727f77*/
  dword_B0F898 = 0; /*0x727f7c*/
  return 0; /*0x727f81*/
}



// ==== 0x00727F90  sub_727F90  this=-  sig=ida-proto ====
int sub_727F90()
{
  dword_B0F8C0 = 0; /*0x727f95*/
  dword_B0F8B8 = 128; /*0x727f9f*/
  dword_B0F8BC = 128; /*0x727fa4*/
  return 128; /*0x727fa9*/
}



// ==== 0x00727FB0  sub_727FB0  this=-  sig=ida-proto ====
int sub_727FB0()
{
  dword_B0F860 = 0; /*0x727fb2*/
  dword_B0F864 = 0; /*0x727fb7*/
  dword_B0F868 = 0; /*0x727fbc*/
  dword_B0F86C = 0; /*0x727fc1*/
  return 0; /*0x727fc6*/
}



// ==== 0x00727FD0  TubeClass::Construct  this=TubeClass  sig=csp ====
AbstractClass *__thiscall TubeClass::Construct(TubeClass *this, __int16 *a2, int a3)
{
  int v4; // eax
  _WORD *v5; // eax
  int v6; // ecx
  TubeClass **v7; // edi

  AbstractClass::Constructor((AbstractClass *)this); /*0x727fd5*/
  this->? = *(_DWORD *)a2; /*0x727fe4*/
  this->? = *(_DWORD *)a2; /*0x727fec*/
  this->? = a3; /*0x727ff0*/
  this->estimatedHealth = 0; /*0x727ff3*/
  this->ObjectClass = &TubeClass::`vftable'; /*0x727ffd*/
  this->? = &TubeClass::`vftable'; /*0x728003*/
  this->? = &TubeClass::`vftable'; /*0x728009*/
  this->? = &TubeClass::`vftable'; /*0x728010*/
  AbstractClass::GenerateUniqueID((AbstractClass *)&this->?); /*0x728017*/
  memset(&this->?, 0xFFu, 0x190u); /*0x728027*/
  if ( FootClass_Array.?[0] < FootClass_Array.?[4] /*0x72805f*/
    || (BYTE1(FootClass_Array.?[5]) || !FootClass_Array.?[4])
    && FootClass_Array.?[1] > 0
    && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(FootClass_Array.?[2] + 8))(
         &FootClass_Array.?[2],
         FootClass_Array.?[4] + FootClass_Array.?[1],
         0) )
  {
    v4 = FootClass_Array.?[0]++; /*0x72806c*/
    *(_DWORD *)(FootClass_Array.?[3] + 4 * v4) = this; /*0x72807b*/
  }
  if ( *a2 || a2[1] ) /*0x728084*/
  {
    v5 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], a2); /*0x728091*/
    v6 = 0; /*0x72809c*/
    if ( FootClass_Array.?[0] <= 0 ) /*0x7280a0*/
    {
LABEL_13:
      LOWORD(v6) = -1; /*0x7280b4*/
    }
    else
    {
      v7 = (TubeClass **)FootClass_Array.?[3]; /*0x7280a2*/
      while ( *v7 != this ) /*0x7280aa*/
      {
        ++v6; /*0x7280ac*/
        ++v7; /*0x7280ad*/
        if ( v6 >= FootClass_Array.?[0] ) /*0x7280b2*/
          goto LABEL_13; /*0x7280b2*/
      }
    }
    v5[139] = v6; /*0x7280b7*/
  }
  return (AbstractClass *)this; /*0x7280c0*/
}



// ==== 0x007281A0  TubeClass::LoadState  this=TubeClass  sig=csp ====
int __stdcall TubeClass::LoadState(TubeClass *this, int a2)
{
  int result; // eax

  result = AbstractClass::SaveLoad_Prefix_0(this, a2); /*0x7281ab*/
  if ( result >= 0 ) /*0x7281b2*/
  {
    if ( this ) /*0x7281b6*/
    {
      AbstractClass::Constructor((AbstractClass *)this); /*0x7281ba*/
      this->ObjectClass = &TubeClass::`vftable'; /*0x7281bf*/
      this->? = &TubeClass::`vftable'; /*0x7281c5*/
      this->? = &TubeClass::`vftable'; /*0x7281cc*/
      this->? = &TubeClass::`vftable'; /*0x7281d3*/
    }
    return 0; /*0x7281da*/
  }
  return result; /*0x7281dc*/
}



// ==== 0x007281E0  TubeClass::SaveState  this=TubeClass  sig=csp ====
int __stdcall TubeClass::SaveState(TubeClass *this, int *a2, int a3)
{
  int result; // eax

  result = AbstractClass::SaveLoad_Prefix((int *)this, a2, a3); /*0x7281ef*/
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

  v0 = dword_8B4148; /*0x728203*/
  v1 = 0; /*0x728209*/
  for ( i = -1; v1 < v0; ++v1 ) /*0x728215*/
  {
    v2 = (__int16 *)*((_DWORD *)dword_8B413C + v1); /*0x72821e*/
    v3 = CellCoord::To_CellObj(&dword_87F7E8, v2 + 18); /*0x72822f*/
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

  INIClass::ClearSection((int)this, (int)off_844A60, 0); /*0x728296*/
  v1 = dword_8B4148; /*0x72829b*/
  v2 = 0; /*0x7282a1*/
  for ( i = -1; v2 < v1; ++v2 ) /*0x7282ad*/
  {
    v3 = (__int16 *)*((_DWORD *)dword_8B413C + v2); /*0x7282b5*/
    v4 = CellCoord::To_CellObj(&dword_87F7E8, v3 + 18); /*0x7282c6*/
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
  result = dword_8B4148; /*0x728302*/
  for ( j = 0; j < dword_8B4148; ++j ) /*0x72830b*/
  {
    v7 = *((_DWORD *)dword_8B413C + j); /*0x728317*/
    if ( v7 ) /*0x72831c*/
    {
      sprintf(Buffer, "%d", j); /*0x72832d*/
      sprintf( /*0x728354*/
        Source,
        "%d,%d,%d,%d,%d",
        *(__int16 *)(v7 + 36),
        *(__int16 *)(v7 + 38),
        *(_DWORD *)(v7 + 44),
        *(__int16 *)(v7 + 40),
        *(__int16 *)(v7 + 42));
      v8 = (_DWORD *)(v7 + 48); /*0x72835c*/
      v9 = 100; /*0x72835f*/
      do /*0x72838b*/
      {
        sprintf(&Source[strlen(Source)], aD, *v8++); /*0x72837f*/
        --v9; /*0x72838a*/
      }
      while ( v9 ); /*0x72838b*/
      INIClass::SetString(this, (unsigned __int8 *)off_844A60, Buffer, Source); /*0x7283a2*/
    }
    result = dword_8B4148; /*0x7283a7*/
  }
  return result; /*0x7283b5*/
}



// ==== 0x007283C0  ScenarioClass::LoadWaypoints  this=ScenarioClass  sig=csp ====
int __thiscall ScenarioClass::LoadWaypoints(INIClass *this)
{
  INIClass *v1; // esi
  int result; // eax
  int v3; // ebx
  unsigned __int8 *StringByIndex; // eax
  TubeClass *v5; // eax
  AbstractClass *v6; // esi
  char *v7; // eax
  char *v8; // eax
  char *v9; // eax
  char *v10; // eax
  char *v11; // eax
  _DWORD *p_vtable3; // edi
  char *v13; // eax
  int v14; // [esp+8h] [ebp-210h]
  __int16 v15[2]; // [esp+Ch] [ebp-20Ch] BYREF
  INIClass *v16; // [esp+10h] [ebp-208h]
  int v17; // [esp+14h] [ebp-204h]
  char String[512]; // [esp+18h] [ebp-200h] BYREF

  v1 = this; /*0x7283c8*/
  v16 = this; /*0x7283ca*/
  INIClass::ResetSection(this); /*0x7283ce*/
  result = INIClass::GetKeyCount(v1->__pad_0, off_844A60); /*0x7283db*/
  v3 = 0; /*0x7283e0*/
  v17 = result; /*0x7283e4*/
  v14 = 0; /*0x7283e8*/
  if ( result > 0 ) /*0x7283ec*/
  {
    while ( 1 ) /*0x72840a*/
    {
      StringByIndex = (unsigned __int8 *)INIClass::GetStringByIndex(v1->__pad_0, off_844A60, v14); /*0x72840a*/
      INIClass::GetString(v1, off_844A60, StringByIndex, 0, String, 512); /*0x728424*/
      v5 = (TubeClass *)__2_YAPAXI_Z(0x1C4u); /*0x72842e*/
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
      v7 = strtok(String, Str); /*0x728464*/
      LOWORD(v6[1].vtable0) = atoi(v7); /*0x728475*/
      v8 = strtok(0, Str); /*0x728479*/
      HIWORD(v6[1].vtable0) = atoi(v8); /*0x72848a*/
      v9 = strtok(0, Str); /*0x72848e*/
      v6[1].vtable2 = (void *)atoi(v9); /*0x72849f*/
      v10 = strtok(0, Str); /*0x7284a2*/
      LOWORD(v6[1].vtable1) = atoi(v10); /*0x7284b3*/
      v11 = strtok(0, Str); /*0x7284b7*/
      HIWORD(v6[1].vtable1) = atoi(v11); /*0x7284c5*/
      v6[12].uniqueId = -1; /*0x7284c9*/
      p_vtable3 = &v6[1].vtable3; /*0x7284d3*/
      do /*0x728508*/
      {
        v13 = strtok(0, Str); /*0x7284dd*/
        *p_vtable3 = atoi(v13); /*0x7284e8*/
        ++v6[12].uniqueId; /*0x7284f4*/
        if ( *p_vtable3 == -1 ) /*0x7284ff*/
          break; /*0x7284ff*/
        ++v3; /*0x728501*/
        ++p_vtable3; /*0x728502*/
      }
      while ( v3 < 100 ); /*0x728508*/
      *((_WORD *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)&v6[1]) + 139) = v14; /*0x728519*/
      result = v17; /*0x728520*/
      if ( ++v14 >= v17 ) /*0x72852b*/
        break; /*0x72852b*/
      v1 = v16; /*0x7283f6*/
      v3 = 0; /*0x7283fa*/
    }
  }
  return result; /*0x728533*/
}



// ==== 0x00728540  ObjectClass::method  this=ObjectClass  sig=csp ====
char __thiscall sub_728540(ObjectClass *this, int a2)
{
  int occupant; // esi
  ObjectClass **p_nextObject; // edx
  int v4; // eax
  int v5; // eax
  __int16 v6; // cx
  __int16 v8; // [esp+Eh] [ebp-2h]

  occupant = this->occupant; /*0x728547*/
  v8 = HIWORD(occupant); /*0x728551*/
  if ( occupant == *(_DWORD *)a2 ) /*0x728555*/
    return 1; /*0x728555*/
  p_nextObject = &this->nextObject; /*0x728565*/
  if ( this->nextObject == (ObjectClass *)-1 ) /*0x72856b*/
    return 1; /*0x7285bd*/
  while ( 1 ) /*0x72856d*/
  {
    v4 = (int)*p_nextObject++; /*0x72856d*/
    v5 = v4 & 7; /*0x728572*/
    v6 = v8 + HIWORD(g_DDrawSurfaceManager.scenario[v5 + 82]); /*0x728588*/
    LOWORD(occupant) = occupant + LOWORD(g_DDrawSurfaceManager.scenario[v5 + 82]); /*0x72859d*/
    v8 = v6; /*0x7285a1*/
    if ( (_WORD)occupant == *(_WORD *)a2 && v6 == *(_WORD *)(a2 + 2) ) /*0x7285ab*/
      break; /*0x7285ab*/
    if ( *p_nextObject == (ObjectClass *)-1 ) /*0x7285b0*/
      return 1; /*0x7285b0*/
  }
  return 0; /*0x7285b4*/
}



// ==== 0x00728630  TubeClass::PowerDrainUpdate  this=TubeClass  sig=csp ====
int __thiscall TubeClass::PowerDrainUpdate(TubeClass *this, unsigned int *a2)
{
  int *p_nextObject; // ebx
  int v4; // ebp

  AbstractClass::ProcessPower((AbstractClass *)this); /*0x72863b*/
  Checksummer::Add_WORD((Checksummer *)a2, this->?); /*0x728647*/
  Checksummer::Add_WORD((Checksummer *)a2, HIWORD(this->?)); /*0x728653*/
  Checksummer::Add_WORD((Checksummer *)a2, this->?); /*0x72865f*/
  Checksummer::Add_WORD((Checksummer *)a2, HIWORD(this->?)); /*0x72866b*/
  Power::TimerProcess(this->?); /*0x728676*/
  p_nextObject = (int *)&this->?; /*0x72867b*/
  v4 = 100; /*0x72867e*/
  do /*0x728691*/
  {
    Power::TimerProcess(*p_nextObject++); /*0x728688*/
    --v4; /*0x728690*/
  }
  while ( v4 ); /*0x728691*/
  return Power::TimerProcess(this->estimatedHealth); /*0x7286a1*/
}



// ==== 0x007286B0  TubeClass::StubReturn452  this=TubeClass  sig=csp ====
int TubeClass::StubReturn452(TubeClass *this)
{
  return 452; /*0x7286b5*/
}



// ==== 0x007286C0  TubeClass::StubReturn53  this=TubeClass  sig=csp ====
int TubeClass::StubReturn53(TubeClass *this)
{
  return 53; /*0x7286c5*/
}



// ==== 0x007286D0  TubeClass::ddtor  this=TubeClass  sig=csp ====
int __stdcall TubeClass::ddtor(TubeClass *this, _DWORD *a2)
{
  if ( !a2 ) /*0x7286d6*/
    return -2147467261; /*0x7286d8*/
  *a2 = 189572124; /*0x7286e6*/
  a2[1] = 298955687; /*0x7286ee*/
  a2[2] = 1610635188; /*0x7286f7*/
  a2[3] = unk_7E975C; /*0x728700*/
  return 0; /*0x7286dd*/
}



// ==== 0x00728710  TubeClass::ProcessEvent  this=TubeClass  sig=csp ====
_DWORD *__thiscall TubeClass::ProcessEvent(TubeClass *this, char a2)
{
  __int16 *v3; // eax
  int v4; // ecx
  TubeClass **v5; // edx
  int v6; // eax
  TubeClass *v8; // [esp+4h] [ebp-4h] BYREF

  this->ObjectClass = &TubeClass::`vftable'; /*0x728716*/
  this->? = &TubeClass::`vftable'; /*0x72871c*/
  this->? = &TubeClass::`vftable'; /*0x728723*/
  this->? = &TubeClass::`vftable'; /*0x72872a*/
  AbstractClass::AnnounceExpiredPointer((AbstractClass *)this, 1); /*0x728731*/
  v3 = (__int16 *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)&this->?); /*0x72873f*/
  if ( v3 ) /*0x728746*/
  {
    v4 = 0; /*0x72874f*/
    if ( FootClass_Array.?[0] <= 0 ) /*0x728753*/
    {
LABEL_6:
      v4 = -1; /*0x728767*/
    }
    else
    {
      v5 = (TubeClass **)FootClass_Array.?[3]; /*0x728755*/
      while ( *v5 != this ) /*0x72875d*/
      {
        ++v4; /*0x72875f*/
        ++v5; /*0x728760*/
        if ( v4 >= FootClass_Array.?[0] ) /*0x728765*/
          goto LABEL_6; /*0x728765*/
      }
    }
    if ( v3[139] == v4 ) /*0x728774*/
      v3[139] = -1; /*0x728776*/
  }
  v8 = this; /*0x72878f*/
  v6 = (*(int (__thiscall **)(int *, TubeClass **))(FootClass_Array.?[2] + 16))(&FootClass_Array.?[2], &v8); /*0x728793*/
  if ( v6 != -1 && v6 < FootClass_Array.?[0] ) /*0x7287a3*/
  {
    --FootClass_Array.?[0]; /*0x7287a8*/
    for ( ; /*0x7287ae*/
          v6 < FootClass_Array.?[0];
          *(_DWORD *)(FootClass_Array.?[3] + 4 * v6 - 4) = *(_DWORD *)(FootClass_Array.?[3] + 4 * v6) )
    {
      ++v6; /*0x7287b6*/
    }
  }
  AbstractClass::DTOR((AbstractClass *)this); /*0x7287ca*/
  if ( (a2 & 1) != 0 ) /*0x7287d4*/
    __3_YAXPAX_Z(this); /*0x7287d7*/
  return &this->ObjectClass; /*0x7287e1*/
}



// ==== 0x007287F0  sub_7287F0  this=-  sig=ida-proto ====
void sub_7287F0()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x7287fc*/
  dbl_B0F8F8 = Math::Sqrt(v0 + v0); /*0x72880e*/
}



// ==== 0x00728820  sub_728820  this=-  sig=ida-proto ====
void sub_728820()
{
  dbl_B0F948 = dbl_B0F8F8 / 60.0; /*0x72882c*/
}



// ==== 0x00728840  sub_728840  this=-  sig=ida-proto ====
void sub_728840()
{
  dbl_B0F930 = 1.0 / dbl_B0F948; /*0x72884c*/
}



// ==== 0x00728860  sub_728860  this=-  sig=ida-proto ====
void sub_728860()
{
  dbl_B0F928 = 0.0174532925199433 * 45.0; /*0x72886c*/
}



// ==== 0x00728880  sub_728880  this=-  sig=ida-proto ====
void sub_728880()
{
  dbl_B0F900 = 0.0174532925199433 * 60.0; /*0x72888c*/
}



// ==== 0x007288A0  sub_7288A0  this=-  sig=ida-proto ====
void sub_7288A0()
{
  dbl_B0F8D8 = 0.0174532925199433 * 90.0; /*0x7288ac*/
}



// ==== 0x007288C0  sub_7288C0  this=-  sig=ida-proto ====
__int64 sub_7288C0()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_B0F8D8 - dbl_B0F900); /*0x7288d2*/
  result = Math::RoundToInt(v0 * dbl_B0F8F8 * 0.5); /*0x7288e6*/
  dword_B0F950 = result; /*0x7288eb*/
  return result; /*0x7288f0*/
}



// ==== 0x00728900  sub_728900  this=-  sig=ida-proto ====
void sub_728900()
{
  dbl_B0F908 = Math::ArcTan((double)dword_B0F950 * 0.00390625); /*0x728917*/
}



// ==== 0x00728930  sub_728930  this=-  sig=ida-proto ====
void sub_728930()
{
  dbl_B0F920 = Math::ArcTan((double)(2 * dword_B0F950) / dbl_B0F8F8); /*0x728952*/
}



// ==== 0x00728960  sub_728960  this=-  sig=ida-proto ====
__int64 sub_728960()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_B0F950) + 0.5); /*0x72897b*/
  dword_B0F944 = result; /*0x728980*/
  return result; /*0x728986*/
}



// ==== 0x00728990  sub_728990  this=-  sig=ida-proto ====
int sub_728990()
{
  word_B0F8F0 = 0; /*0x728992*/
  return 0; /*0x72899e*/
}



// ==== 0x007289A0  sub_7289A0  this=-  sig=ida-proto ====
int sub_7289A0()
{
  dword_B0F910 = 0; /*0x7289a2*/
  dword_B0F914 = 0; /*0x7289a7*/
  dword_B0F918 = 0; /*0x7289ac*/
  return 0; /*0x7289b1*/
}



// ==== 0x007289C0  sub_7289C0  this=-  sig=ida-proto ====
int sub_7289C0()
{
  dword_B0F940 = 0; /*0x7289c5*/
  dword_B0F938 = 128; /*0x7289cf*/
  dword_B0F93C = 128; /*0x7289d4*/
  return 128; /*0x7289d9*/
}



// ==== 0x007289E0  sub_7289E0  this=-  sig=ida-proto ====
int sub_7289E0()
{
  dword_B0F8E0 = 0; /*0x7289e2*/
  dword_B0F8E4 = 0; /*0x7289e7*/
  dword_B0F8E8 = 0; /*0x7289ec*/
  dword_B0F8EC = 0; /*0x7289f1*/
  return 0; /*0x7289f6*/
}



// ==== 0x00728A00  TunnelLocomotionClass::SmallFunc_728A00  this=TunnelLocomotionClass  sig=csp ====
int __thiscall SmallFunc_728A00(TunnelLocomotionClass *this)
{
  LocomotionClass::Init((LocomotionClass *)this); /*0x728a03*/
  this->CurrentState[0] = 0; /*0x728a0d*/
  this->CurrentState[1] = *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[352]; /*0x728a16*/
  this->CurrentState[2] = *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[356]; /*0x728a1e*/
  this->CurrentState[3] = *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[360]; /*0x728a27*/
  this->CurrentState[4] = *(_DWORD *)&stru_A8EB00.?[416]; /*0x728a30*/
  this->CurrentState[6] = 0; /*0x728a33*/
  this->CurrentState[7] = 0; /*0x728a36*/
  LOBYTE(this->CurrentState[8]) = 0; /*0x728a39*/
  *(_DWORD *)this->LocomotionClass = &TunnelLocomotionClass::`vftable'; /*0x728a3c*/
  *(_DWORD *)&this->LocomotionClass[4] = &TunnelLocomotionClass::`vftable'; /*0x728a42*/
  return (int)this->LocomotionClass; /*0x728a4b*/
}



// ==== 0x00728A50  JumpjetLocomotionClass::ShortFunc_728A50  this=JumpjetLocomotionClass  sig=csp ====
bool __stdcall JumpjetLocomotionClass::ShortFunc_728A50(JumpjetLocomotionClass *this)
{
  return this->? != 0; /*0x728a5c*/
}



// ==== 0x00728A60  TunnelLocomotionClass::StubReturnZero_20  this=TunnelLocomotionClass  sig=csp ====
char __stdcall JumpjetLocomotionClass::StubReturnZero_20(TunnelLocomotionClass *this)
{
  char result; // al

  if ( !(*(unsigned __int8 (__stdcall **)(TunnelLocomotionClass *))(*(_DWORD *)this->LocomotionClass + 16))(this) ) /*0x728a68*/
    return 0; /*0x728a68*/
  result = 1; /*0x728a72*/
  if ( this->? == 1 ) /*0x728a79*/
    return 0; /*0x728a7b*/
  return result; /*0x728a7d*/
}



// ==== 0x00728A90  JumpjetLocomotionClass::GetCoordinateConditional_0  this=JumpjetLocomotionClass  sig=csp ====
_DWORD *__stdcall JumpjetLocomotionClass::GetCoordinateConditional_0(JumpjetLocomotionClass *this, _DWORD *a2)
{
  _DWORD *result; // eax
  int TurnRate; // ecx
  int Speed; // edx
  float Climb; // esi

  if ( (*(unsigned __int8 (__stdcall **)(JumpjetLocomotionClass *))(this->LocomotionClass[0] + 16))(this) ) /*0x728a99*/
  {
    result = a2; /*0x728aa0*/
    TurnRate = this->TurnRate; /*0x728aa4*/
    Speed = this->Speed; /*0x728aa7*/
    Climb = this->Climb; /*0x728aaa*/
  }
  else
  {
    TurnRate = this->?->?[0]; /*0x728ac7*/
    Speed = this->?->?[1]; /*0x728ac9*/
    Climb = *(float *)&this->?->?[2]; /*0x728acc*/
    result = a2; /*0x728acf*/
  }
  *a2 = TurnRate; /*0x728aaf*/
  a2[1] = Speed; /*0x728ab1*/
  *((float *)a2 + 2) = Climb; /*0x728ab4*/
  return result; /*0x728ab7*/
}



// ==== 0x00728AF0  TunnelLocomotionClass::SyncMovementPosition  this=TunnelLocomotionClass  sig=csp ====
int __stdcall JumpjetLocomotionClass::SyncMovementPosition(TunnelLocomotionClass *this, int a2, int a3, int a4)
{
  int result; // eax
  FootClass *Owner; // ecx
  int v6; // ebx
  int v7; // ebp
  int v8; // edi
  int v9; // eax
  int *v10; // eax
  int RefCount; // eax
  _DWORD v12[3]; // [esp+4h] [ebp-Ch] BYREF

  result = (*((int (__thiscall **)(FootClass *))this->?->TechnoClass + 223))(this->?); /*0x728afd*/
  if ( !(_BYTE)result ) /*0x728b05*/
  {
    result = (*((int (__thiscall **)(FootClass *))this->?->TechnoClass + 224))(this->?); /*0x728b10*/
    if ( !(_BYTE)result ) /*0x728b18*/
    {
      result = (*((int (__thiscall **)(FootClass *))this->?->TechnoClass + 117))(this->?); /*0x728b23*/
      if ( !(_BYTE)result ) /*0x728b2b*/
      {
        result = (*((int (__thiscall **)(FootClass *))this->?->TechnoClass + 118))(this->?); /*0x728b36*/
        if ( !(_BYTE)result ) /*0x728b3e*/
        {
          Owner = this->?; /*0x728b44*/
          v6 = a3; /*0x728b48*/
          v7 = a4; /*0x728b4d*/
          v8 = a2; /*0x728b52*/
          v12[1] = a3; /*0x728b56*/
          v12[0] = a2; /*0x728b5a*/
          v12[2] = a4; /*0x728b5e*/
          v9 = (*((int (__thiscall **)(FootClass *))Owner->TechnoClass + 34))(Owner); /*0x728b64*/
          v10 = (int *)(*(int (__thiscall **)(int, int *, _DWORD *))(*(_DWORD *)v9 + 108))(v9, &a2, v12); /*0x728b78*/
          this->CurrentState[0] = *v10; /*0x728b80*/
          this->CurrentState[1] = v10[1]; /*0x728b86*/
          this->CurrentState[2] = v10[2]; /*0x728b8c*/
          if ( (v8 != *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[352] /*0x728bb5*/
             || v6 != *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[356]
             || v7 != *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[360])
            && (*((int (__thiscall **)(FootClass *))this->?->TechnoClass + 114))(this->?) < 0 )
          {
            RefCount = this->?; /*0x728bb7*/
            if ( RefCount != 3 && RefCount != 5 && RefCount != 1 && RefCount != 6 && RefCount != 2 ) /*0x728bd1*/
            {
              (*((void (__thiscall **)(FootClass *, _DWORD))this->?->TechnoClass + 73))(this->?, 0); /*0x728bda*/
              this->? = 4; /*0x728be0*/
            }
          }
          result = this->?; /*0x728be7*/
          if ( !result ) /*0x728bef*/
            this->? = 1; /*0x728bf1*/
        }
      }
    }
  }
  return result; /*0x728bf8*/
}



// ==== 0x00728C00  TunnelLocomotionClass::ProcessFormationPosition  this=TunnelLocomotionClass  sig=csp ====
void __stdcall TunnelLocomotionClass::ProcessFormationPosition(TunnelLocomotionClass *this)
{
  double v1; // st7
  int *CurrentState; // esi
  int v4; // eax
  int v5; // edx
  int TileIndex; // eax
  int v8; // eax
  double v9; // [esp+0h] [ebp-34h]
  __int16 v10[2]; // [esp+14h] [ebp-20h] BYREF
  __int16 v11[2]; // [esp+18h] [ebp-1Ch] BYREF
  __int16 v12[2]; // [esp+1Ch] [ebp-18h] BYREF
  _BYTE v13[4]; // [esp+20h] [ebp-14h] BYREF
  int v14; // [esp+24h] [ebp-10h] BYREF
  int v15; // [esp+28h] [ebp-Ch] BYREF
  int v16; // [esp+2Ch] [ebp-8h]
  int v17; // [esp+30h] [ebp-4h]
  TunnelLocomotionClass *thisa; // [esp+38h] [ebp+4h]
  unsigned __int16 this_2; // [esp+3Ah] [ebp+6h]

  switch ( this->? ) /*0x728c17*/
  {
    case 1: /*0x728c17*/
    case 5: /*0x728c17*/
    case 6: /*0x728c17*/
    case 7: /*0x728c17*/
      goto LABEL_11;
    case 2: /*0x728c17*/
      this->? = 7; /*0x728dd9*/
      goto LABEL_11; /*0x728dd9*/
    case 3: /*0x728c17*/
      this->? = 5; /*0x728dd0*/
LABEL_11:
      this->CurrentState[0] = *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[352]; /*0x728de0*/
      this->CurrentState[1] = *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[356]; /*0x728df0*/
      this->CurrentState[2] = *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[360]; /*0x728df9*/
      break; /*0x728df9*/
    case 4: /*0x728c17*/
      CurrentState = this->CurrentState; /*0x728c29*/
      v4 = this->?->?[0]; /*0x728c31*/
      v5 = this->?->?[2]; /*0x728c38*/
      v16 = this->?->?[1] - this->CurrentState[1]; /*0x728c3b*/
      __asm { fild [esp+34h+var_8] } /*0x728c3f*/
      v17 = v5; /*0x728c43*/
      v15 = v4 - this->CurrentState[0]; /*0x728c4b*/
      __asm /*0x728c4f*/
      {
        fild [esp+34h+var_C]
        fld st
        fmul st, st(1)
        fld st(2)
        fmul st, st(3)
        faddp st(1), st
        fstp [esp+34h+var_34]; double
        fstp st
        fstp st
      }
      Math::Sqrt(v9); /*0x728c64*/
      LOWORD(_EAX) = Math::RoundToInt(v1); /*0x728c6c*/
      thisa = _EAX; /*0x728c71*/
      __asm /*0x728c75*/
      {
        fild [esp+2Ch+this]
        fcomp dbl_B0F8F8
        fnstsw ax
      }
      if ( (BYTE1(_EAX) & 0x41) == 0 ) /*0x728c84*/
      {
        *(_DWORD *)v10 = *(_DWORD *)(*((int (__thiscall **)(FootClass *, _BYTE *))this->?->TechnoClass + 110))( /*0x728c9e*/
                                      this->?,
                                      v13);
        v11[0] = 0; /*0x728cc4*/
        v11[1] = 0; /*0x728cc9*/
        TileIndex = MapClass::GetTileIndex((MapClass *)&stru_87F5F0.__pad_58[416], v10, 0, 0); /*0x728cce*/
        v8 = *LayerClass::Pathfinding_Find( /*0x728cea*/
                (Type *)&stru_87F5F0.__pad_58[416],
                (int)&v14,
                &v14,
                v10,
                1,
                TileIndex,
                0,
                0,
                1,
                1,
                0,
                0,
                1,
                1,
                v11,
                0,
                0);
        this_2 = HIWORD(v8); /*0x728cf3*/
        if ( (_WORD)v8 != *(_WORD *)&g_BuildingLoadQueue_Array.__pad_F70[320] ) /*0x728cf7*/
          goto LABEL_8; /*0x728cf7*/
        if ( HIWORD(v8) == *(_WORD *)&g_BuildingLoadQueue_Array.__pad_F70[322] ) /*0x728d09*/
        {
          v12[0] = 0; /*0x728d33*/
          v12[1] = 0; /*0x728d38*/
          v8 = *LayerClass::Pathfinding_Find( /*0x728d42*/
                  (Type *)&stru_87F5F0.__pad_58[416],
                  (int)v12,
                  &v15,
                  v10,
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
                  v12,
                  0,
                  0);
          this_2 = HIWORD(v8); /*0x728d44*/
        }
        if ( __PAIR32__(this_2, v8) == *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[320] ) /*0x728d4f*/
        {
          (*((void (__stdcall **)(int *, _DWORD, _DWORD, _DWORD, int, int, _DWORD))this->?->TechnoClass + 91))( /*0x728d7c*/
            &this->?->?,
            0,
            *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 4008),
            0,
            1,
            1,
            0);
          *CurrentState = *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[352]; /*0x728d88*/
          this->CurrentState[1] = *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[356]; /*0x728d90*/
          this->CurrentState[2] = *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[360]; /*0x728d99*/
        }
        else
        {
LABEL_8:
          *CurrentState = ((__int16)v8 << 8) + 128; /*0x728dbf*/
          this->CurrentState[1] = ((__int16)this_2 << 8) + 128; /*0x728dc1*/
          this->CurrentState[2] = 0; /*0x728dc4*/
        }
      }
      break; /*0x728da1*/
    default:
      return;
  }
}



// ==== 0x00728E30  TunnelLocomotionClass::IdleStateMachine  this=TunnelLocomotionClass  sig=csp ====
char __userpurge InfantryClass::IdleStateMachine@<al>(TunnelLocomotionClass *this, int a2)
{
  AnimClass *v2; // edi
  int v3; // edi
  int v4; // eax
  int v5; // edi
  int *Owner; // eax
  AnimClass *v7; // eax
  int *location; // edx
  FootClass *v9; // ecx
  void (__stdcall **vtable0)(_DWORD); // edx
  int v11; // eax
  int v12; // edi
  FootClass *v13; // eax
  int v14; // edi
  FootClass *v15; // eax
  int *v16; // edx
  int *v17; // edx
  AnimClass *v19; // [esp+0h] [ebp-18h]
  int v20; // [esp+Ch] [ebp-Ch] BYREF
  int v21; // [esp+10h] [ebp-8h] BYREF
  int v22; // [esp+14h] [ebp-4h]
  int retaddr; // [esp+18h] [ebp+0h]
  int v24; // [esp+20h] [ebp+8h]

  if ( !(*(unsigned __int8 (__stdcall **)(TunnelLocomotionClass *))(*(_DWORD *)this->LocomotionClass + 16))(this) ) /*0x728e3b*/
    return 0; /*0x7291a0*/
  v19 = v2; /*0x728e49*/
  v3 = (*((int (__thiscall **)(FootClass *))this->?->TechnoClass + 114))(this->?); /*0x728e55*/
  v4 = (*((int (__thiscall **)(FootClass *))this->?->TechnoClass + 116))(this->?); /*0x728e59*/
  switch ( this->? ) /*0x728e6c*/
  {
    case 1: /*0x728e6c*/
      if ( v3 >= 0 ) /*0x728e75*/
        InfantryClass::ProcessTunnelMovement((InfantryClass *)((char *)this - 4)); /*0x728e86*/
      else
        this->? = 3; /*0x728e77*/
      break; /*0x728e7e*/
    case 2: /*0x728e6c*/
      if ( v3 >= 0 ) /*0x728e92*/
      {
        if ( !this->CurrentState[6] /*0x728ece*/
          || (v5 = this->CurrentState[6],
              (double)(v5 - Timeout::GetRemaining((Timeout *)&this->CurrentState[3])) / (double)v5 == 1.0) )
        {
          (*((void (__thiscall **)(FootClass *, _DWORD, int, AnimClass *))this->?->TechnoClass + 337))( /*0x728ee0*/
            this->?,
            0,
            1072693248,
            v19);
          Owner = (int *)this->?; /*0x728ee6*/
          this->? = 3; /*0x728ee9*/
          Owner += 39; /*0x728ef0*/
          v21 = *Owner; /*0x728ef9*/
          v22 = Owner[1]; /*0x728f06*/
          retaddr = Owner[2]; /*0x728f11*/
          StartAudioControllerAt(*(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 372), &v21, 0); /*0x728f1b*/
          v7 = (AnimClass *)__2_YAPAXI_Z(0x1C8u); /*0x728f25*/
          if ( v7 ) /*0x728f2f*/
          {
            location = this->?->?; /*0x728f36*/
            v21 = *location; /*0x728f49*/
            v22 = location[1]; /*0x728f50*/
            retaddr = location[2]; /*0x728f5c*/
            AnimClass::ctor( /*0x728f6f*/
              v7,
              *(void **)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 660),
              &v21,
              0,
              1,
              (void *)0x600,
              0,
              0);
          }
          (*((void (__thiscall **)(FootClass *, _DWORD))this->?->TechnoClass + 55))(this->?, 0); /*0x728f7b*/
        }
      }
      else
      {
        this->? = 3; /*0x728e94*/
      }
      break; /*0x728e9b*/
    case 3: /*0x728e6c*/
      v9 = this->?; /*0x728f86*/
      if ( v4 == -256 ) /*0x728f8e*/
      {
        (*((void (__thiscall **)(FootClass *, _DWORD))v9->TechnoClass + 73))(v9, 0); /*0x728f94*/
        this->? = 4; /*0x728f9a*/
      }
      else
      {
        v20 = v9->?[0]; /*0x728fb2*/
        v21 = v9->?[1]; /*0x728fb9*/
        v22 = v9->?[2]; /*0x728fc0*/
        vtable0 = (void (__stdcall **)(_DWORD))v9->TechnoClass; /*0x728fc4*/
        if ( v22 <= -256 ) /*0x728fcb*/
        {
          vtable0[73](0); /*0x729023*/
          this->? = 4; /*0x729029*/
        }
        else
        {
          v24 = ((int (__stdcall *)(AnimClass *))vtable0[334])(v19); /*0x728fd3*/
          LOWORD(v11) = Math::RoundToInt((double)v24 * *(double *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 32)); /*0x728fe3*/
          if ( v11 <= 5 ) /*0x728feb*/
            v11 = 5; /*0x728fed*/
          if ( retaddr - v11 < -256 ) /*0x729002*/
            retaddr = -256; /*0x729004*/
          (*((void (__thiscall **)(FootClass *, int *))this->?->TechnoClass + 109))(this->?, &v21); /*0x729016*/
        }
      }
      break; /*0x728fa1*/
    case 4: /*0x728e6c*/
      FindUnitPlacementTarget((ObjectClass *)((char *)this - 4)); /*0x729038*/
      break; /*0x72903d*/
    case 5: /*0x728e6c*/
      AnimClass::GetAnimation(v19, v3); /*0x729045*/
      break; /*0x72904a*/
    case 6: /*0x728e6c*/
      if ( !this->CurrentState[6] /*0x72907d*/
        || (v12 = this->CurrentState[6],
            (double)(v12 - Timeout::GetRemaining((Timeout *)&this->CurrentState[3])) / (double)v12 == 1.0) )
      {
        (*((void (__thiscall **)(FootClass *, int))this->?->TechnoClass + 99))(this->?, 2); /*0x729086*/
        v13 = this->?; /*0x72908c*/
        if ( v13->? ) /*0x72908f*/
        {
          if ( !v13->? && !v13->? ) /*0x7290a3*/
          {
            (*(void (__stdcall **)(TunnelLocomotionClass *))(*(_DWORD *)this->LocomotionClass + 72))(this); /*0x7290b2*/
            goto LABEL_32; /*0x7290b5*/
          }
        }
      }
      break; /*0x7290b5*/
    case 7: /*0x728e6c*/
      if ( !this->CurrentState[6] /*0x7290e5*/
        || (v14 = this->CurrentState[6],
            (double)(v14 - Timeout::GetRemaining((Timeout *)&this->CurrentState[3])) / (double)v14 == 1.0) )
      {
LABEL_32:
        this->? = 0; /*0x7290e7*/
        FootClass::ClearPathIndex(this->?); /*0x7290f1*/
      }
      break; /*0x7290f1*/
    default:
      break;
  }
  v15 = this->?; /*0x7290f6*/
  if ( v15->? ) /*0x7290fa*/
  {
    if ( !(unsigned __int8)House::IsHumanPlayer((House *)v15->?) ) /*0x72910e*/
    {
      v16 = this->?->?; /*0x72911a*/
      v20 = *v16; /*0x729122*/
      v21 = v16[1]; /*0x72912e*/
      v22 = v16[2]; /*0x72913a*/
      if ( (unsigned __int8)Cell::IsPassable(&v20) /*0x72917b*/
        || ((int)dword_A8B230->vtable0 & 0x1000) != 0
        && (v17 = this->?->?, v20 = *v17, v21 = v17[1], v22 = v17[2], (unsigned __int8)Game::Stub3((int)&v20)) )
      {
        (*((void (__thiscall **)(FootClass *))this->?->TechnoClass + 84))(this->?); /*0x729189*/
      }
    }
  }
  InfantryClass::ReleaseInfiltrators((InfantryClass *)this->?); /*0x729192*/
  return 1; /*0x729199*/
}



// ==== 0x007291D0  TunnelLocomotionClass::StubReturnZero_21  this=TunnelLocomotionClass  sig=csp ====
int __stdcall JumpjetLocomotionClass::StubReturnZero_21(TunnelLocomotionClass *this, char a2)
{
  if ( this->? == 4 ) /*0x7291d8*/
    return (a2 != 0) + 4; /*0x7291e5*/
  else
    return 0; /*0x7291eb*/
}



// ==== 0x007291F0  InfantryClass::ProcessTunnelMovement  this=InfantryClass  sig=csp ====
void **__thiscall InfantryClass::ProcessTunnelMovement(InfantryClass *this)
{
  double v1; // st7
  void **result; // eax
  int v4; // eax
  int v5; // ecx
  int v6; // edx
  void *NeedsSaveOrLink; // eax
  ObjectClass *v10; // eax
  int v11; // ecx
  int *v12; // edx
  int *v13; // ecx
  double v14; // [esp+0h] [ebp-30h]
  double v15; // [esp+8h] [ebp-28h]
  int v16; // [esp+18h] [ebp-18h]
  int v17; // [esp+1Ch] [ebp-14h] BYREF
  int v18; // [esp+20h] [ebp-10h] BYREF
  int v19; // [esp+24h] [ebp-Ch]
  int v20; // [esp+28h] [ebp-8h]

  result = (void **)TimerClass::Active((int)this->? + 904); /*0x7291ff*/
  if ( !(_BYTE)result ) /*0x729206*/
  {
    v4 = *((_DWORD *)this->? + 39); /*0x72921d*/
    v5 = *((_DWORD *)this->? + 40); /*0x72921f*/
    v20 = *((_DWORD *)this->? + 41); /*0x729225*/
    v6 = this->? - v4; /*0x72922c*/
    NeedsSaveOrLink = this->?; /*0x72922e*/
    v18 = v6; /*0x729231*/
    __asm { fild [esp+30h+var_10] } /*0x729237*/
    v16 = v5 - (_DWORD)NeedsSaveOrLink; /*0x72923d*/
    __asm /*0x729241*/
    {
      fstp [esp+30h+var_28]; double
      fild [esp+30h+var_18]
      fstp [esp+30h+var_30]; double
    }
    Math::CalcAngle(v14, v15); /*0x72924c*/
    __asm { fsub ds:dbl_7E2820 } /*0x729251*/
    __asm { fmul ds:dbl_7E2818 }
    LOWORD(v16) = Math::RoundToInt(v1); /*0x729276*/
    if ( (_WORD)v16 == *(_WORD *)ProgressTimer::GetValue((ProgressTimer *)((char *)this->? + 904), &v17) ) /*0x729284*/
    {
      _EAX = (*(int (__thiscall **)(void *))(*(_DWORD *)this->? + 132))(this->?); /*0x72929f*/
      __asm { fild dword ptr [eax+71Ch] } /*0x7292a5*/
      _ECX = *(_DWORD *)&DSurface_ViewBounds.__pad_FC[324]; /*0x7292ab*/
      __asm /*0x7292b1*/
      {
        fdivr ds:dbl_7F5B18
        fdiv qword ptr [ecx+20h]
      }
      LOWORD(v10) = Math::RoundToInt(v1); /*0x7292ba*/
      v11 = *(_DWORD *)&stru_A8EB00.?[416]; /*0x7292bf*/
      this->? = 2; /*0x7292c8*/
      this->? = v11; /*0x7292d1*/
      this->? = v19; /*0x7292d7*/
      this->? = v10; /*0x7292da*/
      this->? = (TagClass *)v10; /*0x7292dd*/
      v12 = (int *)((char *)this->? + 156); /*0x7292e3*/
      v18 = *v12; /*0x7292eb*/
      v19 = v12[1]; /*0x7292f7*/
      v20 = v12[2]; /*0x7292fe*/
      StartAudioControllerAt(*(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 372), &v18, 0); /*0x72930c*/
      result = (void **)__2_YAPAXI_Z(0x1C8u); /*0x729316*/
      if ( result ) /*0x729320*/
      {
        v13 = (int *)((char *)this->? + 156); /*0x729327*/
        v18 = *v13; /*0x72933a*/
        v19 = v13[1]; /*0x729341*/
        v20 = v13[2]; /*0x72934d*/
        result = AnimClass::ctor( /*0x729360*/
                   (AnimClass *)result,
                   *(void **)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 660),
                   &v18,
                   0,
                   1,
                   (void *)0x600,
                   0,
                   0);
      }
      LOBYTE(this->?) = 0; /*0x729365*/
    }
    else
    {
      return (*((void **(__stdcall **)(void **, int))this->? + 19))(&this->?, v16); /*0x729292*/
    }
  }
  return result; /*0x729295*/
}



// ==== 0x00729370  AnimClass::ProcessSequence  this=AnimClass  sig=csp ====
void __thiscall AnimClass::ProcessSequence(AnimClass *this)
{
  int v2; // edi
  int v3; // edx
  int v4; // eax
  int *v5; // ecx
  AnimClass *v6; // eax
  int *v7; // ecx
  int v8; // [esp+10h] [ebp-Ch] BYREF
  int v9; // [esp+14h] [ebp-8h]
  int v10; // [esp+18h] [ebp-4h]

  v2 = *(_DWORD *)this->__pad_34; /*0x729377*/
  if ( !v2 ) /*0x729380*/
    goto LABEL_7; /*0x729380*/
  v3 = *(_DWORD *)this->__pad_28; /*0x729382*/
  v4 = this->AnimClass_field_0x30[0]; /*0x729385*/
  if ( v3 != -1 ) /*0x72938b*/
  {
    if ( *(_DWORD *)&stru_A8EB00.?[416] - v3 >= v4 ) /*0x729397*/
      v4 = 0; /*0x72939d*/
    else
      v4 -= *(_DWORD *)&stru_A8EB00.?[416] - v3; /*0x729399*/
  }
  if ( (double)(v2 - v4) / (double)*(int *)this->__pad_34 == 1.0 ) /*0x7293b8*/
  {
LABEL_7:
    (*(void (__thiscall **)(_DWORD, _DWORD, int))(**(_DWORD **)this->__pad_C + 1348))( /*0x7293ca*/
      *(_DWORD *)this->__pad_C,
      0,
      1072693248);
    v5 = *(int **)this->__pad_C; /*0x7293d0*/
    *(_DWORD *)this->__pad_18 = 3; /*0x7293d3*/
    v5 += 39; /*0x7293da*/
    v8 = *v5; /*0x7293e4*/
    v9 = v5[1]; /*0x7293ef*/
    v10 = v5[2]; /*0x7293fb*/
    StartAudioControllerAt(*(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 372), &v8, 0); /*0x729405*/
    v6 = (AnimClass *)__2_YAPAXI_Z(0x1C8u); /*0x72940f*/
    if ( v6 ) /*0x729419*/
    {
      v7 = (int *)(*(_DWORD *)this->__pad_C + 156); /*0x729420*/
      v8 = *v7; /*0x729433*/
      v9 = v7[1]; /*0x72943a*/
      v10 = v7[2]; /*0x729446*/
      AnimClass::ctor( /*0x729459*/
        v6,
        *(void **)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 660),
        &v8,
        0,
        1,
        (void *)0x600,
        0,
        0);
    }
    (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)this->__pad_C + 220))(*(_DWORD *)this->__pad_C, 0); /*0x729465*/
  }
}



// ==== 0x00729480  FootClass::Cleanup  this=FootClass  sig=csp ====
void __thiscall FootClass::Cleanup(FootClass *this)
{
  TagClass *attachedTag; // edi
  ObjectClass *nextObject; // eax
  int owningHouseIndex; // esi

  attachedTag = this->?; /*0x729484*/
  if ( !attachedTag ) /*0x72948d*/
    goto LABEL_7; /*0x72948d*/
  nextObject = this->?; /*0x72948f*/
  owningHouseIndex = this->?; /*0x729493*/
  if ( owningHouseIndex != -1 ) /*0x729499*/
  {
    if ( *(_DWORD *)&stru_A8EB00.?[416] - owningHouseIndex >= (int)nextObject ) /*0x7294a5*/
      nextObject = 0; /*0x7294ab*/
    else
      nextObject = (ObjectClass *)((char *)nextObject - (*(_DWORD *)&stru_A8EB00.?[416] - owningHouseIndex)); /*0x7294a7*/
  }
  if ( (double)((char *)attachedTag - (char *)nextObject) / (double)(int)this->? == 1.0 ) /*0x7294c7*/
  {
LABEL_7:
    this->? = 0; /*0x7294c9*/
    FootClass::ClearPathIndex((FootClass *)this->?); /*0x7294d3*/
  }
}



// ==== 0x007294E0  ObjectClass::method_7294E0  this=ObjectClass  sig=csp ====
int __thiscall sub_7294E0(ObjectClass *this)
{
  _DWORD *vtable3; // ecx
  int v3; // eax
  int result; // eax
  int v5; // [esp+4h] [ebp-10h]
  _DWORD v6[2]; // [esp+8h] [ebp-Ch] BYREF
  int v7; // [esp+10h] [ebp-4h]

  vtable3 = this->?; /*0x7294e6*/
  v6[0] = vtable3[39]; /*0x7294f5*/
  v6[1] = vtable3[40]; /*0x7294fc*/
  v7 = vtable3[41]; /*0x729508*/
  if ( v7 <= -256 ) /*0x72950c*/
  {
    result = (*(int (__thiscall **)(_DWORD *, _DWORD))(*vtable3 + 292))(vtable3, 0); /*0x729569*/
    this->? = 4; /*0x72956f*/
  }
  else
  {
    v5 = (*(int (__thiscall **)(_DWORD *))(*vtable3 + 1336))(vtable3); /*0x72951c*/
    LOWORD(v3) = Math::RoundToInt((double)v5 * *(double *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 32)); /*0x729527*/
    if ( v3 <= 5 ) /*0x72952f*/
      v3 = 5; /*0x729531*/
    v7 -= v3; /*0x729542*/
    if ( v7 < -256 ) /*0x729546*/
      v7 = -256; /*0x729548*/
    return (*(int (__thiscall **)(void *, _DWORD *))(*(_DWORD *)this->? + 436))(this->?, v6); /*0x72955a*/
  }
  return result; /*0x729560*/
}



// ==== 0x00729580  ObjectClass::FindUnitPlacementTarget  this=ObjectClass  sig=csp ====
int __thiscall FindUnitPlacementTarget(ObjectClass *this)
{
  int *v2; // eax
  int v3; // ecx
  int referenceCount; // eax
  double v5; // st7
  int v6; // eax
  int v7; // edx
  char *vtable3; // eax
  int v9; // edi
  CellClass *v10; // eax
  char *v11; // ecx
  int TileIndex; // eax
  int v13; // eax
  void *v14; // ecx
  __int64 v15; // rax
  char *v17; // eax
  void *v18; // ecx
  __int16 v19; // ax
  int v20; // edi
  unsigned int v21; // ebx
  void *v22; // eax
  int v23; // eax
  __int16 v24[4]; // [esp+1Ch] [ebp-34h] BYREF
  void *v25; // [esp+24h] [ebp-2Ch] BYREF
  double v26; // [esp+28h] [ebp-28h] BYREF
  double v27; // [esp+30h] [ebp-20h] BYREF
  int v28; // [esp+38h] [ebp-18h]
  int v29; // [esp+44h] [ebp-Ch] BYREF
  void *NeedsSaveOrLink; // [esp+48h] [ebp-8h]
  int v31; // [esp+4Ch] [ebp-4h]

  v2 = (int *)((char *)this->? + 156); /*0x729591*/
  v29 = *v2; /*0x729598*/
  NeedsSaveOrLink = (void *)v2[1]; /*0x72959f*/
  v3 = v2[2]; /*0x7295a3*/
  referenceCount = this->?; /*0x7295a6*/
  v31 = v3; /*0x7295a9*/
  HIDWORD(v27) = (char *)this->? - (char *)NeedsSaveOrLink; /*0x7295b4*/
  LODWORD(v27) = referenceCount - v29; /*0x7295bc*/
  v5 = Vector::TwoDMagnitudeMath((int *)&v27); /*0x7295c0*/
  if ( v6 >= 20 ) /*0x7295c8*/
  {
    LODWORD(v27) = this->? - v29; /*0x72981c*/
    Math::CalcAngle((double)((int)NeedsSaveOrLink - (unsigned int)this->?), (double)SLODWORD(v27)); /*0x72983f*/
    v19 = Math::RoundToInt(v5); /*0x729850*/
    v20 = v31; /*0x729866*/
    *(_DWORD *)v24 = v29; /*0x72986e*/
    v27 = (double)(v19 - 0x3FFF) * -0.00009587672516830327; /*0x729878*/
    v21 = HIDWORD(v27); /*0x729880*/
    v26 = (double)(int)NeedsSaveOrLink; /*0x72988a*/
    Math::SinCos(v27); /*0x72988e*/
    LOWORD(v22) = Math::RoundToInt(v5); /*0x72989d*/
    v25 = v22; /*0x7298a8*/
    Math::ArcTan2(COERCE_DOUBLE(__PAIR64__(v21, LODWORD(v27)))); /*0x7298ac*/
    LOWORD(v23) = Math::RoundToInt(v5 * 19.0 + (double)*(int *)v24); /*0x7298be*/
    v29 = v23; /*0x7298c7*/
    NeedsSaveOrLink = v25; /*0x7298cb*/
    v31 = v20; /*0x7298cf*/
  }
  else
  {
    v7 = this->?; /*0x7295d1*/
    NeedsSaveOrLink = this->?; /*0x7295d7*/
    vtable3 = (char *)this->?; /*0x7295db*/
    v29 = v7; /*0x7295de*/
    v31 = -256; /*0x7295e6*/
    v27 = *(double *)(vtable3 + 156); /*0x7295fd*/
    v28 = *((_DWORD *)vtable3 + 41); /*0x729612*/
    v9 = *(_DWORD *)vtable3; /*0x729616*/
    v10 = Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], &v27); /*0x72961d*/
    if ( (*(int (__usercall **)@<eax>(void *@<ecx>, CellClass *, int, int, _DWORD, int, double@<st0>))(v9 + 428))( /*0x72965b*/
           this->?,
           v10,
           -1,
           -1,
           0,
           1,
           v5)
      && (v11 = (char *)this->? + 156,
          v27 = *(double *)v11,
          v28 = *((_DWORD *)v11 + 2),
          (unsigned __int8)IsCoordVisibleMap((ObjectClass *)&stru_87F5F0.__pad_58[416], &v27)) )
    {
      *(_DWORD *)v24 = *(_DWORD *)(*(int (__thiscall **)(void *, void **))(*(_DWORD *)this->? + 440))(this->?, &v25); /*0x72967b*/
      v25 = 0; /*0x7296a0*/
      TileIndex = MapClass::GetTileIndex((MapClass *)&stru_87F5F0.__pad_58[416], v24, 0, 0); /*0x7296aa*/
      v13 = *LayerClass::Pathfinding_Find( /*0x7296c6*/
               (Type *)&stru_87F5F0.__pad_58[416],
               (int)&v26,
               &v26,
               v24,
               1,
               TileIndex,
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
      *(_DWORD *)v24 = v13; /*0x7296cf*/
      if ( (_WORD)v13 == *(_WORD *)&g_BuildingLoadQueue_Array.__pad_F70[320] ) /*0x7296d3*/
      {
        if ( v24[1] == *(_WORD *)&g_BuildingLoadQueue_Array.__pad_F70[322] ) /*0x7296e5*/
        {
          v14 = this->?; /*0x7296f3*/
          v25 = 0; /*0x729704*/
          v15 = ((__int64 (__thiscall *)(void *, double *))*(_DWORD *)(*(_DWORD *)v14 + 440))(v14, &v26); /*0x729715*/
          v13 = *LayerClass::Pathfinding_Find( /*0x72972b*/
                   (Type *)&stru_87F5F0.__pad_58[416],
                   SHIDWORD(v15),
                   &v27,
                   (__int16 *)v15,
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
          *(_DWORD *)v24 = v13; /*0x72972d*/
        }
        if ( (_WORD)v13 == *(_WORD *)&g_BuildingLoadQueue_Array.__pad_F70[320] /*0x729746*/
          && v24[1] == *(_WORD *)&g_BuildingLoadQueue_Array.__pad_F70[322] )
        {
          return (*(int (__thiscall **)(void *, char *, _DWORD, _DWORD, _DWORD, int, int, _DWORD))(*(_DWORD *)this->? /*0x729773*/
                                                                                                 + 364))(
                   this->?,
                   (char *)this->? + 108,
                   0,
                   *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 4008),
                   0,
                   1,
                   1,
                   0);
        }
      }
      v28 = 0; /*0x72977f*/
      (*((void (__stdcall **)(void **, int, int, _DWORD))this->? + 17))( /*0x7297a9*/
        &this->?,
        ((__int16)v13 << 8) + 128,
        (v24[1] << 8) + 128,
        0);
    }
    else
    {
      if ( (*(int (__thiscall **)(void *))(*(_DWORD *)this->? + 456))(this->?) > -50 ) /*0x7297bf*/
      {
        v17 = (char *)this->? + 156; /*0x7297c5*/
        v27 = *(double *)v17; /*0x7297cc*/
        v28 = *((_DWORD *)v17 + 2); /*0x7297e4*/
        StartAudioControllerAt(*(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 372), &v27, 0); /*0x7297ee*/
      }
      v18 = this->?; /*0x7297f3*/
      this->? = 5; /*0x7297f6*/
      (*(void (__thiscall **)(void *, int))(*(_DWORD *)v18 + 292))(v18, 1); /*0x729801*/
      LOBYTE(this->attachedBomb) = 0; /*0x729807*/
    }
  }
  return (*(int (__thiscall **)(void *, int *))(*(_DWORD *)this->? + 436))(this->?, &v29); /*0x72976d*/
}



// ==== 0x007298F0  AnimClass::GetAnimation  this=AnimClass  sig=csp ====
int __usercall AnimClass::GetAnimation@<eax>(AnimClass *this, int a2@<edi>)
{
  int v2; // ecx
  int v3; // esi
  int *v4; // eax
  int GroundHeight; // ebx
  int v6; // edi
  int v7; // eax
  int result; // eax
  int *v9; // eax
  int *v10; // edx
  int v11; // eax
  int v12; // eax
  int v13; // ecx
  int v14; // [esp+Ch] [ebp-1Ch] BYREF
  int v15; // [esp+10h] [ebp-18h] BYREF
  int v16; // [esp+14h] [ebp-14h]
  int v17; // [esp+18h] [ebp-10h] BYREF
  int v18; // [esp+1Ch] [ebp-Ch]
  int v19; // [esp+20h] [ebp-8h]

  v3 = v2; /*0x7298f5*/
  v4 = (int *)(*(_DWORD *)(v2 + 12) + 156); /*0x7298fa*/
  v14 = *v4; /*0x729901*/
  v15 = v4[1]; /*0x72990d*/
  v16 = v4[2]; /*0x729919*/
  GroundHeight = Cell::GetGroundHeight(&v14); /*0x729922*/
  if ( v16 >= GroundHeight ) /*0x72992a*/
  {
    (*(void (__thiscall **)(_DWORD, _DWORD, _DWORD))(**(_DWORD **)(v3 + 12) + 288))(*(_DWORD *)(v3 + 12), 0, 0); /*0x729a43*/
    v11 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(v3 + 12) + 132))(*(_DWORD *)(v3 + 12)); /*0x729a4e*/
    LOWORD(v12) = Math::RoundToInt(64.0 / (double)*(int *)(v11 + 1820)); /*0x729a60*/
    *(_DWORD *)(v3 + 40) = *(_DWORD *)&stru_A8EB00.?[416]; /*0x729a72*/
    *(_DWORD *)(v3 + 44) = v18; /*0x729a78*/
    v13 = *(_DWORD *)(v3 + 12); /*0x729a7b*/
    *(_DWORD *)(v3 + 48) = v12; /*0x729a7e*/
    *(_DWORD *)(v3 + 52) = v12; /*0x729a81*/
    result = (*(int (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)v13 + 1348))(v13, 0, 0); /*0x729a86*/
    *(_DWORD *)(v3 + 24) = 6; /*0x729a8c*/
  }
  else
  {
    v6 = (*(int (__thiscall **)(_DWORD, int))(**(_DWORD **)(v3 + 12) + 456))(*(_DWORD *)(v3 + 12), a2); /*0x72993f*/
    v14 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(v3 + 12) + 1336))(*(_DWORD *)(v3 + 12)); /*0x72994f*/
    LOWORD(v7) = Math::RoundToInt((double)v14 * *(double *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 32)); /*0x72995a*/
    if ( v7 <= 5 ) /*0x729962*/
      v7 = 5; /*0x729964*/
    v17 += v7; /*0x729971*/
    if ( v17 > GroundHeight ) /*0x729975*/
      v17 = GroundHeight; /*0x729977*/
    result = (*(int (__thiscall **)(_DWORD, int *))(**(_DWORD **)(v3 + 12) + 436))(*(_DWORD *)(v3 + 12), &v15); /*0x729985*/
    if ( v6 <= -50 ) /*0x72998f*/
    {
      result = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(v3 + 12) + 456))(*(_DWORD *)(v3 + 12)); /*0x72999a*/
      if ( result > -50 ) /*0x7299a3*/
      {
        v9 = (int *)(*(_DWORD *)(v3 + 12) + 156); /*0x7299ae*/
        v17 = *v9; /*0x7299b5*/
        v18 = v9[1]; /*0x7299c2*/
        v19 = v9[2]; /*0x7299cd*/
        StartAudioControllerAt(*(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 372), &v17, 0); /*0x7299d7*/
        result = __2_YAPAXI_Z(0x1C8u); /*0x7299e1*/
        if ( result ) /*0x7299eb*/
        {
          v10 = (int *)(*(_DWORD *)(v3 + 12) + 156); /*0x7299f6*/
          v17 = *v10; /*0x729a09*/
          v18 = v10[1]; /*0x729a10*/
          v19 = v10[2]; /*0x729a1c*/
          return (int)AnimClass::ctor( /*0x729a2f*/
                        (AnimClass *)result,
                        *(void **)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 660),
                        &v17,
                        0,
                        1,
                        (void *)0x600,
                        0,
                        0);
        }
      }
    }
  }
  return result; /*0x729a34*/
}



// ==== 0x00729AA0  FootClass::Process  this=FootClass  sig=csp ====
void __thiscall FootClass::Process(FootClass *this)
{
  TagClass *attachedTag; // edi
  int owningHouseIndex; // edx
  ObjectClass *nextObject; // eax
  _BYTE *vtable3; // eax
  FootClass *v6; // ecx

  attachedTag = this->?; /*0x729aa7*/
  if ( !attachedTag ) /*0x729ab0*/
    goto LABEL_7; /*0x729ab0*/
  owningHouseIndex = this->?; /*0x729ab2*/
  nextObject = this->?; /*0x729ab5*/
  if ( owningHouseIndex != -1 ) /*0x729abb*/
  {
    if ( *(_DWORD *)&stru_A8EB00.?[416] - owningHouseIndex >= (int)nextObject ) /*0x729ac7*/
      nextObject = 0; /*0x729acd*/
    else
      nextObject = (ObjectClass *)((char *)nextObject - (*(_DWORD *)&stru_A8EB00.?[416] - owningHouseIndex)); /*0x729ac9*/
  }
  if ( (double)((char *)attachedTag - (char *)nextObject) / (double)(int)this->? == 1.0 ) /*0x729ae8*/
  {
LABEL_7:
    (*(void (__thiscall **)(void *, int))(*(_DWORD *)this->? + 396))(this->?, 2); /*0x729af1*/
    vtable3 = this->?; /*0x729af7*/
    if ( vtable3[144] && !vtable3[129] && !vtable3[141] ) /*0x729b0e*/
    {
      (*((void (__stdcall **)(void **))this->? + 18))(&this->?); /*0x729b1f*/
      v6 = (FootClass *)this->?; /*0x729b22*/
      this->? = 0; /*0x729b25*/
      FootClass::ClearPathIndex(v6); /*0x729b2c*/
    }
  }
}



// ==== 0x00729B40  JumpjetLocomotionClass::ComputeTurretTransform  this=JumpjetLocomotionClass  sig=csp ====
void *__stdcall JumpjetLocomotionClass::ComputeTurretTransform(JumpjetLocomotionClass *this, void *a2, int *a3)
{
  int RefCount; // eax
  int *location; // eax
  int slopeIndex; // ebx
  float *v6; // eax
  float *v7; // eax
  float *v8; // esi
  void *result; // eax
  float *v10; // eax
  float Crash; // edx
  float Accel; // eax
  double v13; // st7
  float v14; // edx
  float v15; // eax
  double v16; // st7
  float v17; // edx
  float v18; // eax
  float *Transform; // eax
  int v20; // esi
  float v21; // [esp+0h] [ebp-14Ch]
  double v22; // [esp+14h] [ebp-138h] BYREF
  int v23; // [esp+1Ch] [ebp-130h]
  float Wobbles; // [esp+28h] [ebp-124h]
  Matrix3x4 v25; // [esp+2Ch] [ebp-120h] BYREF
  Transform v26[12]; // [esp+5Ch] [ebp-F0h] BYREF
  Transform v27[12]; // [esp+8Ch] [ebp-C0h] BYREF
  float v28[12]; // [esp+BCh] [ebp-90h] BYREF
  char v29[48]; // [esp+ECh] [ebp-60h] BYREF
  float v30[12]; // [esp+11Ch] [ebp-30h] BYREF

  RefCount = this->?; /*0x729b52*/
  if ( RefCount ) /*0x729b57*/
  {
    switch ( RefCount ) /*0x729c61*/
    {
      case 2: /*0x729c61*/
        if ( a3 ) /*0x729c94*/
          *a3 = -1; /*0x729c96*/
        *(float *)&v22 = this->Wobbles; /*0x729ca1*/
        if ( LODWORD(v22) ) /*0x729ca5*/
        {
          Crash = this->Crash; /*0x729cbc*/
          Accel = this->Accel; /*0x729cbf*/
          if ( Crash != NAN ) /*0x729cc5*/
          {
            if ( *(_DWORD *)&stru_A8EB00.?[416] - LODWORD(Crash) >= SLODWORD(Accel) ) /*0x729cd1*/
              Accel = 0.0; /*0x729cd7*/
            else
              LODWORD(Accel) -= *(_DWORD *)&stru_A8EB00.?[416] - LODWORD(Crash); /*0x729cd3*/
          }
          LODWORD(Wobbles) = LODWORD(v22) - LODWORD(Accel); /*0x729cdb*/
          v22 = (double)(LODWORD(v22) - LODWORD(Accel)) / (double)SLODWORD(v22) * 1.570796326794897; /*0x729ced*/
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
        Wobbles = this->Wobbles; /*0x729d05*/
        if ( Wobbles == 0.0 ) /*0x729d09*/
        {
          v13 = 1.0; /*0x729d0b*/
        }
        else
        {
          v14 = this->Crash; /*0x729d13*/
          v15 = this->Accel; /*0x729d16*/
          if ( v14 != NAN ) /*0x729d1c*/
          {
            if ( *(_DWORD *)&stru_A8EB00.?[416] - LODWORD(v14) >= SLODWORD(v15) ) /*0x729d28*/
              v15 = 0.0; /*0x729d2e*/
            else
              LODWORD(v15) -= *(_DWORD *)&stru_A8EB00.?[416] - LODWORD(v14); /*0x729d2a*/
          }
          v13 = (double)(LODWORD(Wobbles) - LODWORD(v15)) / (double)SLODWORD(Wobbles); /*0x729d3a*/
        }
        v22 = (1.0 - v13) * -1.570796326794897; /*0x729d4c*/
        break; /*0x729d52*/
      case 7: /*0x729c61*/
        if ( a3 ) /*0x729d56*/
          *a3 = -1; /*0x729d58*/
        Wobbles = this->Wobbles; /*0x729d63*/
        if ( Wobbles == 0.0 ) /*0x729d67*/
        {
          v16 = 1.0; /*0x729d69*/
        }
        else
        {
          v17 = this->Crash; /*0x729d71*/
          v18 = this->Accel; /*0x729d74*/
          if ( v17 != NAN ) /*0x729d7a*/
          {
            if ( *(_DWORD *)&stru_A8EB00.?[416] - LODWORD(v17) >= SLODWORD(v18) ) /*0x729d86*/
              v18 = 0.0; /*0x729d8c*/
            else
              LODWORD(v18) -= *(_DWORD *)&stru_A8EB00.?[416] - LODWORD(v17); /*0x729d88*/
          }
          v16 = (double)(LODWORD(Wobbles) - LODWORD(v18)) / (double)SLODWORD(Wobbles); /*0x729d98*/
        }
        v22 = (1.0 - v16) * 1.570796326794897; /*0x729daa*/
        break; /*0x729db0*/
      default:
        v22 = 0.0; /*0x729db2*/
        break; /*0x729db2*/
    }
    Transform = Turret::GetTransform((LocomotionClass *)this, v28, a3); /*0x729dcc*/
    Transform::Copy(v27, Transform); /*0x729dd9*/
    if ( a3 && *a3 != -1 ) /*0x729de7*/
    {
      v20 = *a3; /*0x729de2*/
      *a3 = (v20 << 8) | Math::RoundToInt(v22 * 32.0) & 0x3F; /*0x729e00*/
    }
    v21 = v22; /*0x729e0e*/
    Matrix3D::RotateZ(&v27[0].Transform_field_00, v21); /*0x729e11*/
    qmemcpy(a2, v27, 0x30u); /*0x729e27*/
    return a2; /*0x729e16*/
  }
  else
  {
    location = this->?->?; /*0x729b60*/
    v22 = *(double *)location; /*0x729b67*/
    v23 = location[2]; /*0x729b7f*/
    slopeIndex = (unsigned __int8)Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], &v22)->slopeIndex; /*0x729b8d*/
    if ( a3 && *a3 != -1 ) /*0x729b9c*/
      *a3 = slopeIndex + (*a3 << 6); /*0x729ba3*/
    Matrix3x4::Identity(&v25); /*0x729ba9*/
    if ( slopeIndex ) /*0x729bb1*/
    {
      v6 = Turret::GetTransform((LocomotionClass *)this, v30, a3); /*0x729bbc*/
      Transform::Copy(v26, v6); /*0x729bc6*/
      v7 = (float *)CopyAudioData(v29, slopeIndex); /*0x729bd9*/
      v8 = MultiplyMatrix3x4(v28, v7, (float *)&v26[0].Transform_field_00); /*0x729bf1*/
      result = a2; /*0x729bf3*/
      qmemcpy(&v25, v8, sizeof(v25)); /*0x729bfa*/
    }
    else
    {
      v10 = Turret::GetTransform((LocomotionClass *)this, v28, a3); /*0x729c1b*/
      Transform::Copy(v26, v10); /*0x729c25*/
      result = a2; /*0x729c2a*/
      qmemcpy(&v25, v26, sizeof(v25)); /*0x729c3a*/
    }
    qmemcpy(a2, &v25, 0x30u); /*0x729c07*/
  }
  return result; /*0x729c09*/
}



// ==== 0x00729E50  TunnelLocomotionClass::ComputeBounceHeight  this=TunnelLocomotionClass  sig=csp ====
int __stdcall JumpjetLocomotionClass::ComputeBounceHeight(TunnelLocomotionClass *this)
{
  int *location; // eax
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
  TunnelLocomotionClass *thisa; // [esp+38h] [ebp+4h]

  location = this->?->?; /*0x729e5d*/
  v15[0] = *location; /*0x729e64*/
  v15[1] = location[1]; /*0x729e76*/
  GroundHeight = location[2]; /*0x729e82*/
  Coord::To_Screen((Coord *)g_TacticalClass_Instance, v15, &v11); /*0x729e86*/
  GroundHeight = Cell::GetGroundHeight(v15); /*0x729eaa*/
  Coord::To_Screen((Coord *)g_TacticalClass_Instance, v15, &v13); /*0x729eae*/
  v3 = this->CurrentState[6]; /*0x729eb7*/
  v10 = v3; /*0x729ebe*/
  v4 = v12 - v14; /*0x729ec2*/
  thisa = (TunnelLocomotionClass *)(v12 - v14); /*0x729ec6*/
  if ( v3 ) /*0x729eca*/
  {
    v5 = this->CurrentState[3]; /*0x729eda*/
    v6 = this->CurrentState[5]; /*0x729edd*/
    if ( v5 != -1 ) /*0x729ee3*/
    {
      if ( *(_DWORD *)&stru_A8EB00.?[416] - v5 >= v6 ) /*0x729eef*/
        v6 = 0; /*0x729ef5*/
      else
        v6 -= *(_DWORD *)&stru_A8EB00.?[416] - v5; /*0x729ef1*/
    }
    v9 = (double)(v3 - v6) / (double)v10; /*0x729f05*/
  }
  else
  {
    v9 = 1.0; /*0x729ecc*/
  }
  v7 = (unsigned __int8)((unsigned int)((*ProgressTimer::GetValue((ProgressTimer *)this->?->?, &v10) >> 7) + 1) >> 1); /*0x729f2a*/
  switch ( this->? ) /*0x729f39*/
  {
    case 2: /*0x729f39*/
      if ( v9 > 0.4 && !LOBYTE(this->CurrentState[7]) ) /*0x729f85*/
        LOBYTE(this->CurrentState[7]) = 1; /*0x729f8c*/
      if ( v7 <= 70 || v7 >= 140 ) /*0x729f9b*/
        LOWORD(result) = Math::RoundToInt((double)dword_844A9C * v9 + (double)(int)thisa); /*0x729fbc*/
      else
        result = dword_844A9C + v4; /*0x729fa3*/
      break; /*0x729fab*/
    case 3: /*0x729f39*/
      result = dword_844A9C + v4; /*0x729fd2*/
      break; /*0x729fdb*/
    case 4: /*0x729f39*/
      result = dword_844A9C + v4; /*0x729f46*/
      break; /*0x729f4f*/
    case 5: /*0x729f39*/
      result = v4 + dword_844A98; /*0x729fe3*/
      break; /*0x729feb*/
    case 6: /*0x729f39*/
      LOWORD(result) = Math::RoundToInt((1.0 - v9) * (double)dword_844A98 + (double)(int)thisa); /*0x729f66*/
      break; /*0x729f71*/
    default:
      result = JumpjetLocomotionClass::StubReturnFalse((LocomotionClass *)this); /*0x729fef*/
      break; /*0x729fef*/
  }
  return result; /*0x729f49*/
}



// ==== 0x0072A020  TunnelLocomotionClass::CheckStateWithOverride  this=TunnelLocomotionClass  sig=csp ====
int __stdcall JumpjetLocomotionClass::CheckStateWithOverride(TunnelLocomotionClass *this)
{
  int RefCount; // eax

  RefCount = this->?; /*0x72a024*/
  if ( RefCount == 3 || RefCount == 2 || RefCount == 7 || RefCount == 6 || RefCount == 5 ) /*0x72a03e*/
    return 2; /*0x72a049*/
  else
    return JumpjetLocomotionClass::CheckState((LocomotionClass *)this); /*0x72a041*/
}



// ==== 0x0072A060  JumpjetLocomotionClass::IsStateInRange  this=JumpjetLocomotionClass  sig=csp ====
bool __stdcall JumpjetLocomotionClass::IsStateInRange(JumpjetLocomotionClass *this)
{
  unsigned int RefCount; // eax

  RefCount = this->?; /*0x72a064*/
  return RefCount < 2 || RefCount == 7 || RefCount == 2 || RefCount == 6; /*0x72a081*/
}



// ==== 0x0072A090  JumpjetLocomotionClass::ConvertCoordToCell_3  this=JumpjetLocomotionClass  sig=csp ====
int __thiscall JumpjetLocomotionClass::ConvertCoordToCell_3(JumpjetLocomotionClass *this, int a2, void *a3)
{
  Cell *v3; // eax
  void *v5; // [esp+0h] [ebp-4h] BYREF

  v5 = this; /*0x72a090*/
  if ( stru_A8EB00.?[391] ) /*0x72a098*/
    return 0; /*0x72a098*/
  v5 = a3; /*0x72a0b3*/
  v3 = (Cell *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)&v5); /*0x72a0b8*/
  if ( (unsigned __int8)Cell::IsBuildableAdvanced(v3) ) /*0x72a0bf*/
    return 0; /*0x72a0d1*/
  else
    return 7; /*0x72a0c8*/
}



// ==== 0x0072A0E0  TunnelLocomotionClass::UpdateFacingDirection_4  this=TunnelLocomotionClass  sig=csp ====
char __stdcall JumpjetLocomotionClass::UpdateFacingDirection_4(TunnelLocomotionClass *this, int a2)
{
  return FacingClass::Update((char *)this->?->?, &a2); /*0x72a0ff*/
}



// ==== 0x0072A110  TunnelLocomotionClass::ddtor  this=TunnelLocomotionClass  sig=csp ====
int __stdcall TunnelLocomotionClass::ddtor(TunnelLocomotionClass *this, _DWORD *a2)
{
  if ( !a2 ) /*0x72a116*/
    return -2147467261; /*0x72a118*/
  *a2 = 1247291203; /*0x72a126*/
  a2[1] = 298948665; /*0x72a12e*/
  a2[2] = -1610610249; /*0x72a137*/
  a2[3] = unk_7E9A5C; /*0x72a140*/
  return 0; /*0x72a11d*/
}



// ==== 0x0072A150  TunnelLocomotionClass::BeginMove  this=TunnelLocomotionClass  sig=csp ====
int __stdcall TunnelLocomotionClass::BeginMove(TunnelLocomotionClass *this, int *a2)
{
  int result; // eax
  int v3; // edx

  result = SwizzleManager::SaveLoad((int *)this->LocomotionClass, a2); /*0x72a15b*/
  if ( result >= 0 ) /*0x72a164*/
  {
    if ( this ) /*0x72a168*/
    {
      *(_DWORD *)this->LocomotionClass = &LocomotionClass::`vftable'; /*0x72a16a*/
      *(_DWORD *)&this->LocomotionClass[4] = &LocomotionClass::`vftable'; /*0x72a170*/
      v3 = *(_DWORD *)&stru_A8EB00.?[416]; /*0x72a177*/
      this->CurrentState[6] = 0; /*0x72a17d*/
      this->CurrentState[4] = v3; /*0x72a180*/
      this->CurrentState[7] = 0; /*0x72a183*/
      *(_DWORD *)this->LocomotionClass = &TunnelLocomotionClass::`vftable'; /*0x72a186*/
      *(_DWORD *)&this->LocomotionClass[4] = &TunnelLocomotionClass::`vftable'; /*0x72a18c*/
    }
  }
  return result; /*0x72a193*/
}



// ==== 0x0072A1A0  TunnelLocomotionClass::ShortFunc_72A1A0  this=TunnelLocomotionClass  sig=csp ====
int __stdcall JumpjetLocomotionClass::ShortFunc_72A1A0(TunnelLocomotionClass *this)
{
  return this->? != 4 ? 2 : 0;
}



// ==== 0x0072A1C0  TunnelLocomotionClass::ShortFunc_72A1C0  this=TunnelLocomotionClass  sig=csp ====
int __stdcall JumpjetLocomotionClass::ShortFunc_72A1C0(TunnelLocomotionClass *this)
{
  int result; // eax

  result = JumpjetLocomotionClass::MissionStub11((IUnknown *)this); /*0x72a1c6*/
  if ( !result ) /*0x72a1cd*/
  {
    if ( this->? ) /*0x72a1cf*/
      return 7; /*0x72a1d6*/
  }
  return result; /*0x72a1db*/
}



// ==== 0x0072A1E0  TunnelLocomotionClass::ShortFunc_72A1E0  this=TunnelLocomotionClass  sig=csp ====
BOOL __stdcall JumpjetLocomotionClass::ShortFunc_72A1E0(TunnelLocomotionClass *this)
{
  int RefCount; // eax

  RefCount = this->?; /*0x72a1e4*/
  return RefCount == 5 || RefCount == 6; /*0x72a1f3*/
}



// ==== 0x0072A200  TunnelLocomotionClass::StubReturn60  this=TunnelLocomotionClass  sig=csp ====
int TunnelLocomotionClass::StubReturn60(TunnelLocomotionClass *this)
{
  return 60; /*0x72a205*/
}



// ==== 0x0072A210  TunnelLocomotionClass::ProcessMove  this=TunnelLocomotionClass  sig=csp ====
_DWORD *__thiscall TunnelLocomotionClass::ProcessMove(TunnelLocomotionClass *this, char a2)
{
  LocomotionClass::Construct((LocomotionClass *)this); /*0x72a213*/
  if ( (a2 & 1) != 0 ) /*0x72a21d*/
    __3_YAXPAX_Z(this); /*0x72a220*/
  return this->LocomotionClass; /*0x72a22a*/
}



// ==== 0x0072A230  sub_72A230  this=-  sig=ida-proto ====
int sub_72A230()
{
  dword_B0F960 = 0; /*0x72a232*/
  dword_B0F964 = 0; /*0x72a237*/
  dword_B0F968 = 0; /*0x72a23c*/
  dword_B0F96C = 0; /*0x72a241*/
  return 0; /*0x72a246*/
}



// ==== 0x0072A250  sub_72A250  this=-  sig=ida-proto ====
void sub_72A250()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x72a25c*/
  dbl_B0F978 = Math::Sqrt(v0 + v0); /*0x72a26e*/
}



// ==== 0x0072A280  sub_72A280  this=-  sig=ida-proto ====
void sub_72A280()
{
  dbl_B0F9C8 = dbl_B0F978 / 60.0; /*0x72a28c*/
}



// ==== 0x0072A2A0  sub_72A2A0  this=-  sig=ida-proto ====
void sub_72A2A0()
{
  dbl_B0F9B0 = 1.0 / dbl_B0F9C8; /*0x72a2ac*/
}



// ==== 0x0072A2C0  sub_72A2C0  this=-  sig=ida-proto ====
void sub_72A2C0()
{
  dbl_B0F9A8 = 0.0174532925199433 * 45.0; /*0x72a2cc*/
}



// ==== 0x0072A2E0  sub_72A2E0  this=-  sig=ida-proto ====
void sub_72A2E0()
{
  dbl_B0F980 = 0.0174532925199433 * 60.0; /*0x72a2ec*/
}



// ==== 0x0072A300  sub_72A300  this=-  sig=ida-proto ====
void sub_72A300()
{
  dbl_B0F958 = 0.0174532925199433 * 90.0; /*0x72a30c*/
}



// ==== 0x0072A320  sub_72A320  this=-  sig=ida-proto ====
__int64 sub_72A320()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_B0F958 - dbl_B0F980); /*0x72a332*/
  result = Math::RoundToInt(v0 * dbl_B0F978 * 0.5); /*0x72a346*/
  dword_B0F9D0 = result; /*0x72a34b*/
  return result; /*0x72a350*/
}



// ==== 0x0072A360  sub_72A360  this=-  sig=ida-proto ====
void sub_72A360()
{
  dbl_B0F988 = Math::ArcTan((double)dword_B0F9D0 * 0.00390625); /*0x72a377*/
}



// ==== 0x0072A390  sub_72A390  this=-  sig=ida-proto ====
void sub_72A390()
{
  dbl_B0F9A0 = Math::ArcTan((double)(2 * dword_B0F9D0) / dbl_B0F978); /*0x72a3b2*/
}



// ==== 0x0072A3C0  sub_72A3C0  this=-  sig=ida-proto ====
__int64 sub_72A3C0()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_B0F9D0) + 0.5); /*0x72a3db*/
  dword_B0F9C4 = result; /*0x72a3e0*/
  return result; /*0x72a3e6*/
}



// ==== 0x0072A3F0  sub_72A3F0  this=-  sig=ida-proto ====
int sub_72A3F0()
{
  word_B0F970 = 0; /*0x72a3f2*/
  word_B0F972 = 0; /*0x72a3f8*/
  return 0; /*0x72a3fe*/
}



// ==== 0x0072A400  sub_72A400  this=-  sig=ida-proto ====
int sub_72A400()
{
  dword_B0F990 = 0; /*0x72a402*/
  dword_B0F994 = 0; /*0x72a407*/
  dword_B0F998 = 0; /*0x72a40c*/
  return 0; /*0x72a411*/
}



// ==== 0x0072A420  sub_72A420  this=-  sig=ida-proto ====
int sub_72A420()
{
  dword_B0F9C0 = 0; /*0x72a425*/
  dword_B0F9B8 = 128; /*0x72a42f*/
  dword_B0F9BC = 128; /*0x72a434*/
  return 128; /*0x72a439*/
}



// ==== 0x0072A440  MessageListClass::clearMessages  this=TextLabelClass  sig=csp ====
int __thiscall MessageListClass::clearMessages(int this, int a2, int a3, int a4, int a5, int a6)
{
  GadgetClass::Construct((ShpButtonClass *)this, a3, a4, 1, 1, 0, 0); /*0x72a458*/
  *(_DWORD *)(this + 48) = a2; /*0x72a469*/
  *(_DWORD *)(this + 36) = 0; /*0x72a46c*/
  *(_DWORD *)(this + 40) = 0; /*0x72a46f*/
  *(_DWORD *)(this + 44) = a6; /*0x72a472*/
  *(_DWORD *)(this + 52) = a5; /*0x72a475*/
  *(_DWORD *)(this + 56) = -1; /*0x72a478*/
  *(_DWORD *)(this + 60) = 0; /*0x72a47f*/
  *(_BYTE *)(this + 64) = 0; /*0x72a482*/
  *(_BYTE *)(this + 65) = 0; /*0x72a485*/
  *(_DWORD *)(this + 68) = 0; /*0x72a488*/
  *(_DWORD *)(this + 72) = 0; /*0x72a48b*/
  *(_DWORD *)this = &TextLabelClass::`vftable'; /*0x72a48e*/
  return this; /*0x72a496*/
}



// ==== 0x0072A4A0  TextLabelClass::DrawTypewriterText  this=TextLabelClass  sig=csp ====
int __thiscall ObjectClass::DrawTypewriterText(TextLabelClass *this, int a2)
{
  int v3; // eax
  Color *v4; // edi
  int Instance; // eax
  int v6; // edx
  _DWORD *v7; // ebp
  int v8; // eax
  int v9; // eax
  int v10; // eax
  int v11; // edi
  int v12; // ebx
  DWORD Time; // eax
  int v14; // ecx
  int v15; // edx
  unsigned __int8 v16; // al
  int v18; // [esp-8h] [ebp-30h]
  _DWORD *v19; // [esp+Ch] [ebp-1Ch]
  int v20; // [esp+10h] [ebp-18h]
  int v21[2]; // [esp+18h] [ebp-10h] BYREF
  int v22; // [esp+20h] [ebp-8h]
  int v23; // [esp+24h] [ebp-4h]

  if ( this->__pad_40[0] ) /*0x72a4a8*/
    return 0; /*0x72a4a8*/
  if ( !GadgetClass::ClearState((GadgetClass *)this, a2) ) /*0x72a4b8*/
    return 0; /*0x72a4b8*/
  v3 = *(_DWORD *)&this->__pad_2C[8]; /*0x72a4cb*/
  if ( !*(_DWORD *)stru_B054D0.__tail_10 ) /*0x72a4d0*/
    return 0; /*0x72a4d0*/
  if ( v3 <= 0 || v3 >= *(int *)stru_B054D0.__tail_10 ) /*0x72a4dc*/
    v3 = 0; /*0x72a4de*/
  v4 = *(Color **)(*(_DWORD *)&stru_B054D0.m_1[3] + 4 * v3); /*0x72a4e6*/
  if ( !v4 ) /*0x72a4eb*/
    return 0; /*0x72a4eb*/
  Instance = TextRenderer::GetInstance(); /*0x72a4f4*/
  v6 = *(_DWORD *)&this->__pad_0[12]; /*0x72a4f9*/
  v7 = (_DWORD *)Instance; /*0x72a4fc*/
  v19 = (_DWORD *)Instance; /*0x72a501*/
  v21[1] = *(_DWORD *)&this->__pad_0[16]; /*0x72a505*/
  v8 = *(_DWORD *)&this->__pad_2C[12]; /*0x72a509*/
  v21[0] = v6; /*0x72a50e*/
  if ( v8 < 0 ) /*0x72a512*/
    v8 = (*(int (__thiscall **)(AudioStream *))(*(_DWORD *)g_DSurface_Hidden_2->__pad_0 + 124))(g_DSurface_Hidden_2); /*0x72a51c*/
  v22 = v8; /*0x72a525*/
  v23 = v7[7]; /*0x72a52c*/
  v9 = (*(int (__thiscall **)(AudioStream *))(*(_DWORD *)g_DSurface_Hidden_2->__pad_0 + 124))(g_DSurface_Hidden_2); /*0x72a532*/
  if ( v22 + v21[0] - v9 > 0 ) /*0x72a543*/
  {
    v22 = v9 - v21[0]; /*0x72a549*/
    if ( v9 - v21[0] <= 0 || v23 <= 0 ) /*0x72a559*/
      return 0; /*0x72a64e*/
  }
  v10 = Color::ConvertToRGB(v4 + 194, (int)&a2); /*0x72a56b*/
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
      PlayVocClass(*(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 1732), 0x2000, 1.0, 0); /*0x72a609*/
  }
  v18 = this->field_44; /*0x72a613*/
  v16 = (*(int (__thiscall **)(TextLabelClass *))(*(_DWORD *)this->__pad_0 + 88))(this); /*0x72a61a*/
  DrawTextRendererMultiline( /*0x72a638*/
    g_DSurface_Hidden_2,
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
  GadgetClass::Dtor((GadgetClass *)this); /*0x72a673*/
  if ( (a2 & 1) != 0 ) /*0x72a67d*/
    __3_YAXPAX_Z(this); /*0x72a680*/
  return this->__pad_0; /*0x72a68a*/
}



// ==== 0x0072A690  sub_72A690  this=-  sig=ida-proto ====
int sub_72A690()
{
  dword_B0FA08 = 0; /*0x72a692*/
  dword_B0FA0C = 0; /*0x72a697*/
  dword_B0FA10 = 0; /*0x72a69c*/
  dword_B0FA14 = 0; /*0x72a6a1*/
  return 0; /*0x72a6a6*/
}



// ==== 0x0072A6B0  sub_72A6B0  this=-  sig=ida-proto ====
void sub_72A6B0()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x72a6bc*/
  dbl_B0FA28 = Math::Sqrt(v0 + v0); /*0x72a6ce*/
}



// ==== 0x0072A6E0  sub_72A6E0  this=-  sig=ida-proto ====
void sub_72A6E0()
{
  dbl_B0FB40 = dbl_B0FA28 / 60.0; /*0x72a6ec*/
}



// ==== 0x0072A700  sub_72A700  this=-  sig=ida-proto ====
void sub_72A700()
{
  dbl_B0FAF0 = 1.0 / dbl_B0FB40; /*0x72a70c*/
}



// ==== 0x0072A720  sub_72A720  this=-  sig=ida-proto ====
void sub_72A720()
{
  dbl_B0FAE0 = 0.0174532925199433 * 45.0; /*0x72a72c*/
}



// ==== 0x0072A740  sub_72A740  this=-  sig=ida-proto ====
void sub_72A740()
{
  dbl_B0FA40 = 0.0174532925199433 * 60.0; /*0x72a74c*/
}



// ==== 0x0072A760  sub_72A760  this=-  sig=ida-proto ====
void sub_72A760()
{
  dbl_B0F9F0 = 0.0174532925199433 * 90.0; /*0x72a76c*/
}



// ==== 0x0072A780  sub_72A780  this=-  sig=ida-proto ====
__int64 sub_72A780()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_B0F9F0 - dbl_B0FA40); /*0x72a792*/
  result = Math::RoundToInt(v0 * dbl_B0FA28 * 0.5); /*0x72a7a6*/
  dword_B0FB58 = result; /*0x72a7ab*/
  return result; /*0x72a7b0*/
}



// ==== 0x0072A7C0  sub_72A7C0  this=-  sig=ida-proto ====
void sub_72A7C0()
{
  dbl_B0FA58 = Math::ArcTan((double)dword_B0FB58 * 0.00390625); /*0x72a7d7*/
}



// ==== 0x0072A7F0  sub_72A7F0  this=-  sig=ida-proto ====
void sub_72A7F0()
{
  dbl_B0FAB0 = Math::ArcTan((double)(2 * dword_B0FB58) / dbl_B0FA28); /*0x72a812*/
}



// ==== 0x0072A820  sub_72A820  this=-  sig=ida-proto ====
__int64 sub_72A820()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_B0FB58) + 0.5); /*0x72a83b*/
  dword_B0FB38 = result; /*0x72a840*/
  return result; /*0x72a846*/
}



// ==== 0x0072A850  sub_72A850  this=-  sig=ida-proto ====
int sub_72A850()
{
  word_B0FA24 = 0; /*0x72a852*/
  word_B0FA26 = 0; /*0x72a858*/
  return 0; /*0x72a85e*/
}



// ==== 0x0072A860  sub_72A860  this=-  sig=ida-proto ====
int sub_72A860()
{
  dword_B0FA80 = 0; /*0x72a862*/
  dword_B0FA84 = 0; /*0x72a867*/
  dword_B0FA88 = 0; /*0x72a86c*/
  return 0; /*0x72a871*/
}



// ==== 0x0072A880  sub_72A880  this=-  sig=ida-proto ====
int sub_72A880()
{
  dword_B0FB28 = 0; /*0x72a885*/
  dword_B0FB20 = 128; /*0x72a88f*/
  dword_B0FB24 = 128; /*0x72a894*/
  return 128; /*0x72a899*/
}



// ==== 0x0072A8A0  sub_72A8A0  this=-  sig=ida-proto ====
char sub_72A8A0()
{
  byte_B0FB4E = 0; /*0x72a8a2*/
  byte_B0FB4C = -1; /*0x72a8a9*/
  byte_B0FB4D = -1; /*0x72a8ae*/
  return -1; /*0x72a8b3*/
}



// ==== 0x0072A8C0  sub_72A8C0  this=-  sig=ida-proto ====
char sub_72A8C0()
{
  byte_B0FA94 = 72; /*0x72a8c2*/
  word_B0FA95 = 0; /*0x72a8c9*/
  return 0; /*0x72a8d3*/
}



// ==== 0x0072A8E0  sub_72A8E0  this=-  sig=ida-proto ====
void sub_72A8E0()
{
  byte_B0F9FC = 0; /*0x72a8e0*/
  word_B0F9FD = 30034; /*0x72a8e7*/
}



// ==== 0x0072A900  sub_72A900  this=-  sig=ida-proto ====
char sub_72A900()
{
  byte_B0FB14 = 72; /*0x72a902*/
  word_B0FB15 = 0; /*0x72a909*/
  return 0; /*0x72a913*/
}



// ==== 0x0072A920  sub_72A920  this=-  sig=ida-proto ====
char sub_72A920()
{
  byte_B0FB19 = 72; /*0x72a922*/
  word_B0FB1A = 0; /*0x72a929*/
  return 0; /*0x72a933*/
}



// ==== 0x0072A940  sub_72A940  this=-  sig=ida-proto ====
void sub_72A940()
{
  word_B0F9D8 = -11612; /*0x72a940*/
  byte_B0F9DA = -1; /*0x72a94e*/
}



// ==== 0x0072A960  sub_72A960  this=-  sig=ida-proto ====
char sub_72A960()
{
  byte_B0FB06 = 0; /*0x72a962*/
  word_B0FB04 = -1; /*0x72a969*/
  return -1; /*0x72a973*/
}



// ==== 0x0072A980  sub_72A980  this=-  sig=ida-proto ====
char sub_72A980()
{
  byte_B0FAA2 = 0; /*0x72a982*/
  word_B0FAA0 = -1; /*0x72a989*/
  return -1; /*0x72a993*/
}



// ==== 0x0072A9A0  sub_72A9A0  this=-  sig=ida-proto ====
char sub_72A9A0()
{
  LOWORD(dword_B0FA1C) = 0; /*0x72a9a2*/
  BYTE2(dword_B0FA1C) = 0; /*0x72a9ac*/
  return 0; /*0x72a9b1*/
}



// ==== 0x0072A9C0  Copy8Bytes  this=Dialog  sig=csp ====
_DWORD *__fastcall Copy8Bytes(_DWORD *a1, int *a2)
{
  _DWORD *result; // eax
  int v3; // ecx
  int v4; // edx

  result = a1; /*0x72a9c0*/
  v3 = *a2; /*0x72a9c2*/
  v4 = a2[1]; /*0x72a9c4*/
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



// ==== 0x0072A9E0  Rect::Inflate  this=Rect  sig=csp ====
int __stdcall Rect::Inflate(LPRECT lprc, int dx, int dy)
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

  dword_B0FC80 = LoadFileSHP(off_844C44, (bool *)&byte_B0FC90); /*0x72aa5b*/
  dword_B0FC84 = LoadFileSHP(off_844C48, (bool *)&byte_B0FC91); /*0x72aa70*/
  dword_B0FC88 = LoadFileSHP(off_844C4C, (bool *)&byte_B0FC92); /*0x72aa85*/
  dword_B0FC8C = LoadFileSHP(off_844C50, (bool *)&byte_B0FC93); /*0x72aa9a*/
  dword_B0FACC = LoadFileSHP(off_844C54, (bool *)&byte_B0FC94); /*0x72aab4*/
  LoadPaletteSimple(off_844BA4, &dword_B0FB64, &dword_B0FB68); /*0x72aab9*/
  LoadPaletteSimple(off_844BA0, &dword_B0FB6C, &dword_B0FB70); /*0x72aace*/
  LoadPaletteSimple(off_844B9C, &dword_B0FB5C, &dword_B0FB60); /*0x72aae3*/
  LoadPaletteSimple(off_844BA8, &dword_B0FB74, &dword_B0FB78); /*0x72aaf8*/
  result = byte_B0FBE0; /*0x72aafd*/
  if ( !byte_B0FBE0 ) /*0x72ab04*/
  {
    AssetClass::ReleaseAndReload(); /*0x72ab0a*/
    dword_B0FAC4 = LoadFileSHP(off_844CD4, (bool *)&byte_B0FC95); /*0x72ab2a*/
    dword_B0F9DC = LoadFileSHP(off_844CD8, (bool *)&byte_B0FC96); /*0x72ab3f*/
    dword_B0FAC0 = LoadFileSHP(off_844CDC, (bool *)&byte_B0FC97); /*0x72ab54*/
    dword_B0FB50 = LoadFileSHP(off_844CE0, (bool *)&byte_B0FC98); /*0x72ab69*/
    dword_B0FA04 = LoadFileSHP(off_844CE4, (bool *)&byte_B0FC99); /*0x72ab7e*/
    dword_B0FAF8 = LoadFileSHP(off_844CE8, (bool *)&byte_B0FC9A); /*0x72ab93*/
    dword_B0FA74 = LoadFileSHP(off_844CEC, (bool *)&byte_B0FC9B); /*0x72aba8*/
    dword_B0FA38 = LoadFileSHP(off_844CF0, (bool *)&byte_B0FC9C); /*0x72abbd*/
    dword_B0FAE8 = LoadFileSHP(off_844CF4, (bool *)&byte_B0FC9D); /*0x72abd2*/
    dword_B0FA54 = LoadFileSHP(off_844CF8, (bool *)&byte_B0FC9E); /*0x72abec*/
    LoadPaletteSimple(off_844BE4, &dword_B0FBC8, &dword_B0FBCC); /*0x72abf1*/
    LoadPaletteSimple(off_844BE8, &dword_B0FBD0, &dword_B0FBD4); /*0x72ac06*/
    LoadPaletteSimple(off_844BEC, &dword_B0FBD8, &dword_B0FBDC); /*0x72ac1b*/
    result = (unsigned __int8)SetupMouseClassResources(g_DisplayWidth, MEMORY[0x8A00A8]); /*0x72ac2c*/
    byte_B0FBE0 = 1; /*0x72ac31*/
  }
  return result; /*0x72ac38*/
}



// ==== 0x0072AC40  WinMainSetup_Setup_72AC40  this=-  sig=ida-proto ====
void WinMainSetup_Setup_72AC40()
{
  ObjectClass *v0; // [esp+0h] [ebp-4h]
  LoadingScreen *v1; // [esp+0h] [ebp-4h]
  ObjectClass *v2; // [esp+0h] [ebp-4h]

  WinMainSetup_Setup_72AC40_Setup(); /*0x72ac41*/
  WinMainSetup_Setup_72AC40_Setup_72B230(v0); /*0x72ac46*/
  if ( g_BuildingLoadQueue_Array.__pad_F70[1072] ) /*0x72ac54*/
  {
    g_BuildingLoadQueue_Array.__pad_F70[1072] = 0; /*0x72ac5a*/
    LoadingScreen::DestroyFileTrees(); /*0x72ac60*/
    LoadingScreen::CleanupObjects(v1); /*0x72ac65*/
    __3_YAXPAX_Z(*(void **)&g_BuildingLoadQueue_Array.__pad_F70[1120]); /*0x72ac70*/
    *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[1120] = 0; /*0x72ac7b*/
    __3_YAXPAX_Z(*(void **)&g_BuildingLoadQueue_Array.__pad_F70[1124]); /*0x72ac82*/
    *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[1124] = 0; /*0x72ac8d*/
    __3_YAXPAX_Z(*(void **)&g_BuildingLoadQueue_Array.__pad_F70[1128]); /*0x72ac94*/
    *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[1128] = 0; /*0x72ac9e*/
    __3_YAXPAX_Z(*(void **)&g_BuildingLoadQueue_Array.__pad_F70[1132]); /*0x72aca5*/
    *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[1132] = 0; /*0x72acb0*/
    __3_YAXPAX_Z(*(void **)&g_BuildingLoadQueue_Array.__pad_F70[1136]); /*0x72acb7*/
    *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[1136] = 0; /*0x72acc2*/
    __3_YAXPAX_Z(*(void **)&g_BuildingLoadQueue_Array.__pad_F70[1140]); /*0x72acc9*/
    *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[1140] = 0; /*0x72acd3*/
    __3_YAXPAX_Z(*(void **)&g_BuildingLoadQueue_Array.__pad_F70[1144]); /*0x72acda*/
    *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[1144] = 0; /*0x72ace5*/
    __3_YAXPAX_Z(*(void **)&g_BuildingLoadQueue_Array.__pad_F70[1148]); /*0x72acec*/
    *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[1148] = 0; /*0x72acf4*/
    ReleaseLoadingResources(v2); /*0x72acfa*/
  }
  FileTree::CleanupAll(); /*0x72acff*/
  LoadingScreen::FreeResources(v1); /*0x72ad04*/
  LoadingScreen::FreeResources2(); /*0x72ad09*/
  g_BuildingLoadQueue_Array.__pad_F70[1116] = 0; /*0x72ad0e*/
}



// ==== 0x0072AD20  Display::GetViewport  this=ObjectPlacement  sig=csp ====
int *__thiscall Display::GetViewport(Display *this)
{
  int *result; // eax
  int v2; // ecx
  int v3; // edx
  int v4; // esi

  result = (int *)this; /*0x72ad29*/
  v2 = 0; /*0x72ad44*/
  if ( !byte_A8EB7C && !byte_A8ED6B ) /*0x72ad5e*/
    v2 = 168; /*0x72ad60*/
  v3 = dword_886FB8 - 168; /*0x72ad67*/
  v4 = dword_886FBC - 32; /*0x72ad6d*/
  *result = v2; /*0x72ad70*/
  result[1] = 0; /*0x72ad72*/
  result[2] = v3; /*0x72ad76*/
  result[3] = v4; /*0x72ad79*/
  return result; /*0x72ad75*/
}



// ==== 0x0072AD90  SidebarClass::calcSidebarRect  this=SidebarClass  sig=csp ====
int *__thiscall SidebarClass::calcSidebarRect(SidebarClass *this)
{
  int *result; // eax
  int v2; // ecx
  int v3; // edx
  int v4; // esi

  result = (int *)this; /*0x72ada4*/
  v2 = 0; /*0x72ada7*/
  if ( !LOBYTE(stru_A8EB00.ObjectTypeClass[31]) && !stru_A8EB00.?[391] ) /*0x72adb7*/
    v2 = 168; /*0x72adb9*/
  v3 = stru_A8EB00.ObjectTypeClass[33] - 168; /*0x72adc0*/
  v4 = stru_A8EB00.ObjectTypeClass[34] - 32; /*0x72adc6*/
  *result = v2; /*0x72adc9*/
  result[1] = 0; /*0x72adcb*/
  result[2] = v3; /*0x72adcf*/
  result[3] = v4; /*0x72add2*/
  return result; /*0x72adce*/
}



// ==== 0x0072ADE0  LoadPaletteSimple  this=BitFont  sig=csp ====
int __fastcall LoadPaletteSimple(char *Source, int *a2, _DWORD *a3)
{
  int *v3; // ebx
  char *v4; // ebp
  int v5; // eax
  _BYTE *v6; // ecx
  int v7; // edx
  _BYTE *v8; // eax
  int v9; // esi
  char v10; // dl
  int v11; // ecx
  ConvertClass *v12; // eax
  _DWORD *v13; // eax
  __int16 v15; // [esp+8h] [ebp-78h]
  CCFileClass v17; // [esp+14h] [ebp-6Ch] BYREF
  int v18[3]; // [esp+6Ch] [ebp-14h] BYREF
  int v19; // [esp+78h] [ebp-8h]

  v3 = a2; /*0x72ade5*/
  CCFileClass::Construct(&v17, Source); /*0x72adf0*/
  v4 = (char *)CCFileClass::ReadEntireFile(&v17); /*0x72adfe*/
  if ( v4 ) /*0x72ae06*/
  {
    v5 = __2_YAPAXI_Z(0x300u); /*0x72ae11*/
    if ( v5 ) /*0x72ae1b*/
    {
      v6 = (_BYTE *)(v5 + 2); /*0x72ae1d*/
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
      HIBYTE(v15) = 4 * *v8; /*0x72ae5d*/
      LOBYTE(v15) = 4 * *(v8 - 1); /*0x72ae64*/
      v10 = 4 * v8[1]; /*0x72ae6a*/
      v8 += 3; /*0x72ae80*/
      v11 = *v3 + 3 * (v9 % 256); /*0x72ae83*/
      ++v9; /*0x72ae8a*/
      *(_WORD *)v11 = v15; /*0x72ae91*/
      *(_BYTE *)(v11 + 2) = v10; /*0x72ae94*/
      if ( v9 >= 256 ) /*0x72ae97*/
        break; /*0x72ae97*/
      v3 = a2; /*0x72ae4e*/
    }
    __3_YAXPAX_Z(v4); /*0x72ae9e*/
    v12 = (ConvertClass *)__2_YAPAXI_Z(0x188u); /*0x72aea8*/
    if ( v12 ) /*0x72aeb4*/
      v13 = ConvertClass::Construct(v12, *a2, *a2, (int)DSurface_Alternate, 1, 0); /*0x72aecb*/
    else
      v13 = 0; /*0x72aed2*/
    *a3 = v13; /*0x72aedb*/
  }
  *(_DWORD *)v17.CDFileClass = &CCFileClass::`vftable'; /*0x72aee1*/
  v19 = 0; /*0x72aee9*/
  Vector::Clear((int)v18); /*0x72aef1*/
  *(_DWORD *)v17.CDFileClass = &off_7E1668; /*0x72aefa*/
  return BufferIOFileClass::Dtor((BufferIOFileClass *)&v17); /*0x72af07*/
}



// ==== 0x0072AFE0  sub_72AFE0  this=-  sig=ida-proto ====
void *sub_72AFE0()
{
  return dword_B0FB64; /*0x72afe5*/
}



// ==== 0x0072AFF0  UI_Draw_72AFF0  this=-  sig=ida-proto ====
int sub_72AFF0()
{
  return dword_B0FB68; /*0x72aff5*/
}



// ==== 0x0072B000  sub_72B000  this=-  sig=ida-proto ====
void *sub_72B000()
{
  return dword_B0FB6C; /*0x72b005*/
}



// ==== 0x0072B010  UI_Draw_72B010  this=-  sig=ida-proto ====
int sub_72B010()
{
  return dword_B0FB70; /*0x72b015*/
}



// ==== 0x0072B020  sub_72B020  this=-  sig=ida-proto ====
void *sub_72B020()
{
  return dword_B0FB5C; /*0x72b025*/
}



// ==== 0x0072B030  UI_Draw_72B030  this=-  sig=ida-proto ====
int sub_72B030()
{
  return dword_B0FB60; /*0x72b035*/
}



// ==== 0x0072B040  sub_72B040  this=-  sig=ida-proto ====
void *sub_72B040()
{
  return dword_B0FB74; /*0x72b045*/
}



// ==== 0x0072B050  UI_Helper_72B050  this=-  sig=ida-proto ====
int sub_72B050()
{
  return dword_B0FB78; /*0x72b055*/
}



// ==== 0x0072B130  WinMainSetup_Setup_72AC40_Setup  this=-  sig=csp ====
void sub_72B130()
{
  void *v0; // esi
  void *v1; // esi
  void *v2; // esi
  void *v3; // esi
  void *v4; // esi

  if ( byte_B0FC90 ) /*0x72b13b*/
  {
    v0 = dword_B0FC80; /*0x72b13d*/
    if ( dword_B0FC80 ) /*0x72b145*/
    {
      FileTreeNode::Destroy(dword_B0FC80); /*0x72b149*/
      __3_YAXPAX_Z(v0); /*0x72b14f*/
    }
    byte_B0FC90 = 0; /*0x72b157*/
  }
  dword_B0FC80 = 0; /*0x72b162*/
  if ( byte_B0FC91 ) /*0x72b16a*/
  {
    v1 = dword_B0FC84; /*0x72b16c*/
    if ( dword_B0FC84 ) /*0x72b174*/
    {
      FileTreeNode::Destroy(dword_B0FC84); /*0x72b178*/
      __3_YAXPAX_Z(v1); /*0x72b17e*/
    }
    byte_B0FC91 = 0; /*0x72b186*/
  }
  dword_B0FC84 = 0; /*0x72b191*/
  if ( byte_B0FC92 ) /*0x72b199*/
  {
    v2 = dword_B0FC88; /*0x72b19b*/
    if ( dword_B0FC88 ) /*0x72b1a3*/
    {
      FileTreeNode::Destroy(dword_B0FC88); /*0x72b1a7*/
      __3_YAXPAX_Z(v2); /*0x72b1ad*/
    }
    byte_B0FC92 = 0; /*0x72b1b5*/
  }
  dword_B0FC88 = 0; /*0x72b1c0*/
  if ( byte_B0FC93 ) /*0x72b1c8*/
  {
    v3 = dword_B0FC8C; /*0x72b1ca*/
    if ( dword_B0FC8C ) /*0x72b1d2*/
    {
      FileTreeNode::Destroy(dword_B0FC8C); /*0x72b1d6*/
      __3_YAXPAX_Z(v3); /*0x72b1dc*/
    }
    byte_B0FC93 = 0; /*0x72b1e4*/
  }
  dword_B0FC8C = 0; /*0x72b1ef*/
  if ( byte_B0FC94 ) /*0x72b1f7*/
  {
    v4 = dword_B0FACC; /*0x72b1f9*/
    if ( dword_B0FACC ) /*0x72b201*/
    {
      FileTreeNode::Destroy(dword_B0FACC); /*0x72b205*/
      __3_YAXPAX_Z(v4); /*0x72b20b*/
    }
    byte_B0FC94 = 0; /*0x72b213*/
  }
  dword_B0FACC = 0; /*0x72b219*/
}



// ==== 0x0072B230  ObjectClass::WinMainSetup_Setup_72AC40_Setup_72B230  this=ObjectClass  sig=csp ====
void WinMainSetup_Setup_72AC40_Setup_72B230(ObjectClass *this)
{
  if ( *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[956] ) /*0x72b23a*/
  {
    __3_YAXPAX_Z(*(void **)&g_BuildingLoadQueue_Array.__pad_F70[956]); /*0x72b23d*/
    *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[956] = 0; /*0x72b245*/
  }
  if ( *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[960] ) /*0x72b253*/
  {
    (***(void (__thiscall ****)(_DWORD, int))&g_BuildingLoadQueue_Array.__pad_F70[960])( /*0x72b259*/
      *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[960],
      3);
    *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[960] = 0; /*0x72b25b*/
  }
  if ( *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[948] ) /*0x72b268*/
  {
    __3_YAXPAX_Z(*(void **)&g_BuildingLoadQueue_Array.__pad_F70[948]); /*0x72b26b*/
    *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[948] = 0; /*0x72b273*/
  }
  if ( *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[952] ) /*0x72b281*/
  {
    (***(void (__thiscall ****)(_DWORD, int))&g_BuildingLoadQueue_Array.__pad_F70[952])( /*0x72b287*/
      *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[952],
      3);
    *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[952] = 0; /*0x72b289*/
  }
  if ( *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[940] ) /*0x72b296*/
  {
    __3_YAXPAX_Z(*(void **)&g_BuildingLoadQueue_Array.__pad_F70[940]); /*0x72b299*/
    *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[940] = 0; /*0x72b2a1*/
  }
  if ( *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[944] ) /*0x72b2af*/
  {
    (***(void (__thiscall ****)(_DWORD, int))&g_BuildingLoadQueue_Array.__pad_F70[944])( /*0x72b2b5*/
      *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[944],
      3);
    *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[944] = 0; /*0x72b2b7*/
  }
  if ( *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[964] ) /*0x72b2c4*/
  {
    __3_YAXPAX_Z(*(void **)&g_BuildingLoadQueue_Array.__pad_F70[964]); /*0x72b2c7*/
    *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[964] = 0; /*0x72b2cf*/
  }
  if ( *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[968] ) /*0x72b2dd*/
  {
    (***(void (__thiscall ****)(_DWORD, int))&g_BuildingLoadQueue_Array.__pad_F70[968])( /*0x72b2e3*/
      *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[968],
      3);
    *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[968] = 0; /*0x72b2e5*/
  }
}



// ==== 0x0072B2F0  LoadingScreen::GetBackgroundImage  this=LoadingScreen  sig=csp ====
char *__thiscall LoadingScreen::GetBackgroundImage(LoadingScreen *this, int a2)
{
  char *result; // eax

  result = off_844C34[0]; /*0x72b2f0*/
  if ( this != (LoadingScreen *)640 ) /*0x72b2fb*/
    return off_844C38[0]; /*0x72b2fd*/
  return result; /*0x72b302*/
}



// ==== 0x0072B310  LoadingScreen::GetOverlayImage  this=LoadingScreen  sig=csp ====
char *__thiscall LoadingScreen::GetOverlayImage(LoadingScreen *this, int a2)
{
  char *result; // eax

  result = off_844C3C[0]; /*0x72b310*/
  if ( this != (LoadingScreen *)640 ) /*0x72b31b*/
    return off_844C40[0]; /*0x72b31d*/
  return result; /*0x72b322*/
}



// ==== 0x0072B330  sub_72B330  this=-  sig=ida-proto ====
void *sub_72B330()
{
  return dword_B0FB7C; /*0x72b335*/
}



// ==== 0x0072B340  Render_Render_72B340  this=-  sig=ida-proto ====
int sub_72B340()
{
  return dword_B0FB80; /*0x72b345*/
}



// ==== 0x0072B350  sub_72B350  this=-  sig=ida-proto ====
void *sub_72B350()
{
  return dword_B0FB84; /*0x72b355*/
}



// ==== 0x0072B360  Render_Render_72B360  this=-  sig=ida-proto ====
int sub_72B360()
{
  return dword_B0FB88; /*0x72b365*/
}



// ==== 0x0072B370  sub_72B370  this=-  sig=ida-proto ====
void *sub_72B370()
{
  return dword_B0FB8C; /*0x72b375*/
}



// ==== 0x0072B380  Map_Load_72B380  this=-  sig=ida-proto ====
int sub_72B380()
{
  return dword_B0FB90; /*0x72b385*/
}



// ==== 0x0072B390  LoadingScreen::ReleaseAnimObjects  this=LoadingScreen  sig=csp ====
int __thiscall sub_72B390(char *Source)
{
  if ( dword_B0FB88 ) /*0x72b39b*/
  {
    (**(void (__thiscall ***)(int, int))dword_B0FB88)(dword_B0FB88, 1); /*0x72b3a1*/
    dword_B0FB88 = 0; /*0x72b3a3*/
  }
  if ( dword_B0FB84 ) /*0x72b3b4*/
  {
    __3_YAXPAX_Z(dword_B0FB84); /*0x72b3b7*/
    dword_B0FB84 = 0; /*0x72b3bf*/
  }
  return LoadPaletteSimple(Source, &dword_B0FB84, &dword_B0FB88); /*0x72b3da*/
}



// ==== 0x0072B460  ObjectClass::LoadProgressMgr_Release  this=ObjectClass  sig=csp ====
void LoadProgressMgr_Release(ObjectClass *this)
{
  if ( *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[972] ) /*0x72b46a*/
  {
    __3_YAXPAX_Z(*(void **)&g_BuildingLoadQueue_Array.__pad_F70[972]); /*0x72b46d*/
    *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[972] = 0; /*0x72b475*/
  }
  if ( *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[976] ) /*0x72b483*/
  {
    (***(void (__thiscall ****)(_DWORD, int))&g_BuildingLoadQueue_Array.__pad_F70[976])( /*0x72b489*/
      *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[976],
      1);
    *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[976] = 0; /*0x72b48b*/
  }
  if ( *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[980] ) /*0x72b498*/
  {
    __3_YAXPAX_Z(*(void **)&g_BuildingLoadQueue_Array.__pad_F70[980]); /*0x72b49b*/
    *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[980] = 0; /*0x72b4a3*/
  }
  if ( *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[984] ) /*0x72b4b1*/
  {
    (***(void (__thiscall ****)(_DWORD, int))&g_BuildingLoadQueue_Array.__pad_F70[984])( /*0x72b4b7*/
      *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[984],
      1);
    *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[984] = 0; /*0x72b4b9*/
  }
  if ( *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[988] ) /*0x72b4c6*/
  {
    __3_YAXPAX_Z(*(void **)&g_BuildingLoadQueue_Array.__pad_F70[988]); /*0x72b4c9*/
    *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[988] = 0; /*0x72b4d1*/
  }
  if ( *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[992] ) /*0x72b4df*/
  {
    (***(void (__thiscall ****)(_DWORD, int))&g_BuildingLoadQueue_Array.__pad_F70[992])( /*0x72b4e5*/
      *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[992],
      1);
    *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[992] = 0; /*0x72b4e7*/
  }
}



// ==== 0x0072B4F0  sub_72B4F0  this=-  sig=ida-proto ====
void *sub_72B4F0()
{
  return dword_B0FB94; /*0x72b4f5*/
}



// ==== 0x0072B500  Render_Render_72B500  this=-  sig=ida-proto ====
int sub_72B500()
{
  return dword_B0FB98; /*0x72b505*/
}



// ==== 0x0072B510  sub_72B510  this=-  sig=ida-proto ====
void *sub_72B510()
{
  return dword_B0FB9C; /*0x72b515*/
}



// ==== 0x0072B520  Render_Render_72B520  this=-  sig=ida-proto ====
int sub_72B520()
{
  return dword_B0FBA0; /*0x72b525*/
}



// ==== 0x0072B530  PaletteManager::Load  this=PaletteManager  sig=csp ====
int PaletteManager::Load(PaletteManager *this, int a2)
{
  int v2; // ecx
  int v3; // edx
  int v4; // edi
  void (__thiscall ***v5)(_DWORD, int); // ecx
  int result; // eax

  v3 = *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[1464]; /*0x72b530*/
  v4 = v2; /*0x72b53d*/
  if ( *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[1464] == 1 ) /*0x72b53f*/
  {
    if ( !g_MenuStateFlags ) /*0x72b547*/
    {
      result = *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[1000]; /*0x72b64d*/
      goto LABEL_23; /*0x72b64d*/
    }
    v5 = *(void (__thiscall ****)(_DWORD, int))&g_BuildingLoadQueue_Array.__pad_F70[1008]; /*0x72b54d*/
    if ( *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[1008] ) /*0x72b555*/
    {
      (***(void (__thiscall ****)(_DWORD, _DWORD))&g_BuildingLoadQueue_Array.__pad_F70[1008])( /*0x72b55a*/
        *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[1008],
        *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[1464]);
      v5 = 0; /*0x72b55c*/
      *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[1008] = 0; /*0x72b55e*/
    }
    if ( *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[1004] ) /*0x72b56b*/
    {
      __3_YAXPAX_Z(*(void **)&g_BuildingLoadQueue_Array.__pad_F70[1004]); /*0x72b56e*/
      v5 = *(void (__thiscall ****)(_DWORD, int))&g_BuildingLoadQueue_Array.__pad_F70[1008]; /*0x72b573*/
      *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[1004] = 0; /*0x72b57c*/
    }
    if ( *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[996] ) /*0x72b589*/
    {
      __3_YAXPAX_Z(*(void **)&g_BuildingLoadQueue_Array.__pad_F70[996]); /*0x72b58c*/
      v5 = *(void (__thiscall ****)(_DWORD, int))&g_BuildingLoadQueue_Array.__pad_F70[1008]; /*0x72b591*/
      *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[996] = 0; /*0x72b59a*/
    }
    result = *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[1000]; /*0x72b5a0*/
    if ( *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[1000] ) /*0x72b5a7*/
    {
      (***(void (__thiscall ****)(_DWORD, int))&g_BuildingLoadQueue_Array.__pad_F70[1000])( /*0x72b5af*/
        *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[1000],
        1);
      v5 = *(void (__thiscall ****)(_DWORD, int))&g_BuildingLoadQueue_Array.__pad_F70[1008]; /*0x72b5b1*/
      result = 0; /*0x72b5b7*/
      *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[1000] = 0; /*0x72b5b9*/
    }
  }
  else
  {
    result = *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[1000]; /*0x72b5c0*/
    v5 = *(void (__thiscall ****)(_DWORD, int))&g_BuildingLoadQueue_Array.__pad_F70[1008]; /*0x72b5c5*/
  }
  v3 = *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[1464]; /*0x72b5cb*/
  if ( *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[1464] != 2 || g_MenuStateFlags ) /*0x72b5e0*/
  {
LABEL_23:
    if ( result ) /*0x72b654*/
    {
      if ( v3 ) /*0x72b660*/
        return result; /*0x72b660*/
      goto LABEL_26; /*0x72b660*/
    }
    goto LABEL_24; /*0x72b654*/
  }
  if ( v5 ) /*0x72b5e4*/
  {
    (**v5)(v5, 1); /*0x72b5ea*/
    result = *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[1000]; /*0x72b5ec*/
    *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[1008] = 0; /*0x72b5f1*/
  }
  if ( *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[1004] ) /*0x72b5ff*/
  {
    __3_YAXPAX_Z(*(void **)&g_BuildingLoadQueue_Array.__pad_F70[1004]); /*0x72b602*/
    result = *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[1000]; /*0x72b607*/
    *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[1004] = 0; /*0x72b60f*/
  }
  if ( *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[996] ) /*0x72b61d*/
  {
    __3_YAXPAX_Z(*(void **)&g_BuildingLoadQueue_Array.__pad_F70[996]); /*0x72b620*/
    result = *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[1000]; /*0x72b625*/
    *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[996] = 0; /*0x72b62d*/
  }
  if ( result ) /*0x72b635*/
  {
    result = (**(int (__thiscall ***)(int, int))result)(result, 1); /*0x72b63d*/
    *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[1000] = 0; /*0x72b63f*/
    *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[1464] = 0; /*0x72b645*/
    goto LABEL_26; /*0x72b64b*/
  }
LABEL_24:
  *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[1464] = 0; /*0x72b656*/
LABEL_26:
  if ( g_MenuStateFlags ) /*0x72b66c*/
  {
    result = LoadPaletteSimple( /*0x72b67e*/
               off_844BC4,
               (int *)&g_BuildingLoadQueue_Array.__pad_F70[996],
               &g_BuildingLoadQueue_Array.__pad_F70[1000]);
    *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[1464] = 2; /*0x72b683*/
  }
  else if ( v4 ) /*0x72b692*/
  {
    if ( v4 == 1 ) /*0x72b6b9*/
    {
      result = LoadPaletteSimple( /*0x72b6cb*/
                 off_844C1C,
                 (int *)&g_BuildingLoadQueue_Array.__pad_F70[996],
                 &g_BuildingLoadQueue_Array.__pad_F70[1000]);
      *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[1464] = 1; /*0x72b6d0*/
    }
    else if ( v4 == 2 ) /*0x72b6dc*/
    {
      result = LoadPaletteSimple( /*0x72b6ee*/
                 off_844C10,
                 (int *)&g_BuildingLoadQueue_Array.__pad_F70[996],
                 &g_BuildingLoadQueue_Array.__pad_F70[1000]);
      *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[1464] = 1; /*0x72b6f3*/
    }
    else if ( v4 == 3 ) /*0x72b703*/
    {
      result = LoadPaletteSimple( /*0x72b715*/
                 off_844C14,
                 (int *)&g_BuildingLoadQueue_Array.__pad_F70[996],
                 &g_BuildingLoadQueue_Array.__pad_F70[1000]);
      *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[1464] = 1; /*0x72b71a*/
    }
    else if ( v4 == 4 ) /*0x72b72a*/
    {
      result = LoadPaletteSimple( /*0x72b73c*/
                 off_844C28,
                 (int *)&g_BuildingLoadQueue_Array.__pad_F70[996],
                 &g_BuildingLoadQueue_Array.__pad_F70[1000]);
      *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[1464] = 1; /*0x72b741*/
    }
    else if ( v4 == 5 ) /*0x72b751*/
    {
      result = LoadPaletteSimple( /*0x72b763*/
                 off_844C20,
                 (int *)&g_BuildingLoadQueue_Array.__pad_F70[996],
                 &g_BuildingLoadQueue_Array.__pad_F70[1000]);
      *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[1464] = 1; /*0x72b768*/
    }
    else if ( v4 == 6 ) /*0x72b778*/
    {
      result = LoadPaletteSimple( /*0x72b78a*/
                 off_844C18,
                 (int *)&g_BuildingLoadQueue_Array.__pad_F70[996],
                 &g_BuildingLoadQueue_Array.__pad_F70[1000]);
      *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[1464] = 1; /*0x72b78f*/
    }
    else if ( v4 == 7 ) /*0x72b79f*/
    {
      result = LoadPaletteSimple( /*0x72b7b1*/
                 off_844C2C,
                 (int *)&g_BuildingLoadQueue_Array.__pad_F70[996],
                 &g_BuildingLoadQueue_Array.__pad_F70[1000]);
      *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[1464] = 1; /*0x72b7b6*/
    }
    else if ( v4 == 8 ) /*0x72b7c6*/
    {
      result = LoadPaletteSimple( /*0x72b7d8*/
                 off_844C24,
                 (int *)&g_BuildingLoadQueue_Array.__pad_F70[996],
                 &g_BuildingLoadQueue_Array.__pad_F70[1000]);
      *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[1464] = 1; /*0x72b7dd*/
    }
    else
    {
      if ( v4 == 9 ) /*0x72b7ed*/
        result = LoadPaletteSimple( /*0x72b7ff*/
                   off_844C30,
                   (int *)&g_BuildingLoadQueue_Array.__pad_F70[996],
                   &g_BuildingLoadQueue_Array.__pad_F70[1000]);
      *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[1464] = 1; /*0x72b804*/
    }
  }
  else
  {
    result = LoadPaletteSimple( /*0x72b6a4*/
               off_844C0C,
               (int *)&g_BuildingLoadQueue_Array.__pad_F70[996],
               &g_BuildingLoadQueue_Array.__pad_F70[1000]);
    *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[1464] = 1; /*0x72b6a9*/
  }
  return result; /*0x72b68d*/
}



// ==== 0x0072B820  Palette::LoadFile  this=BitFont  sig=csp ====
int __thiscall Palette_LoadFile(char *Source)
{
  if ( dword_B0FBA0 ) /*0x72b82b*/
  {
    (**(void (__thiscall ***)(int, int))dword_B0FBA0)(dword_B0FBA0, 1); /*0x72b831*/
    dword_B0FBA0 = 0; /*0x72b833*/
  }
  if ( dword_B0FB9C ) /*0x72b844*/
  {
    __3_YAXPAX_Z(dword_B0FB9C); /*0x72b847*/
    dword_B0FB9C = 0; /*0x72b84f*/
  }
  return LoadPaletteSimple(Source, &dword_B0FB9C, &dword_B0FBA0); /*0x72b86a*/
}



// ==== 0x0072B870  ObjectClass::LoadProgressMgr_Release_72B870  this=ObjectClass  sig=csp ====
void LoadProgressMgr_Release_72B870(ObjectClass *this)
{
  if ( *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[1008] ) /*0x72b87b*/
  {
    (***(void (__thiscall ****)(_DWORD, int))&g_BuildingLoadQueue_Array.__pad_F70[1008])( /*0x72b881*/
      *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[1008],
      1);
    *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[1008] = 0; /*0x72b883*/
  }
  if ( *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[1004] ) /*0x72b890*/
  {
    __3_YAXPAX_Z(*(void **)&g_BuildingLoadQueue_Array.__pad_F70[1004]); /*0x72b893*/
    *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[1004] = 0; /*0x72b89b*/
  }
  if ( *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[996] ) /*0x72b8a8*/
  {
    __3_YAXPAX_Z(*(void **)&g_BuildingLoadQueue_Array.__pad_F70[996]); /*0x72b8ab*/
    *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[996] = 0; /*0x72b8b3*/
  }
  if ( *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[1000] ) /*0x72b8c1*/
  {
    (***(void (__thiscall ****)(_DWORD, int))&g_BuildingLoadQueue_Array.__pad_F70[1000])( /*0x72b8c7*/
      *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[1000],
      1);
    *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[1000] = 0; /*0x72b8c9*/
  }
}



// ==== 0x0072B8E0  DlgProcGameSetup_Setup  this=-  sig=ida-proto ====
char sub_72B8E0()
{
  char result; // al

  result = byte_B0FD5D; /*0x72b8e0*/
  if ( !byte_B0FD5D ) /*0x72b8e7*/
  {
    if ( g_DisplayWidth == 800 ) /*0x72b8f3*/
      dword_B0FB54 = LoadFileSHP(off_844DC4, (bool *)&byte_B0FD5C); /*0x72b905*/
    result = LoadPaletteSimple(off_844DC8, &dword_B0FD60, &dword_B0FD64); /*0x72b91a*/
    byte_B0FD5D = 1; /*0x72b91f*/
  }
  return result; /*0x72b926*/
}



// ==== 0x0072B930  ObjectClass::DlgProcGameSetup_Setup_72B930  this=ObjectClass  sig=csp ====
void DlgProcGameSetup_Setup_72B930(ObjectClass *this)
{
  void *v1; // esi

  if ( g_BuildingLoadQueue_Array.__pad_F70[1453] ) /*0x72b93a*/
  {
    if ( g_BuildingLoadQueue_Array.__pad_F70[1452] ) /*0x72b942*/
    {
      v1 = *(void **)&g_BuildingLoadQueue_Array.__pad_F70[932]; /*0x72b945*/
      if ( *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[932] ) /*0x72b94d*/
      {
        FileTreeNode::Destroy(*(FileTreeNode **)&g_BuildingLoadQueue_Array.__pad_F70[932]); /*0x72b951*/
        __3_YAXPAX_Z(v1); /*0x72b957*/
      }
      g_BuildingLoadQueue_Array.__pad_F70[1452] = 0; /*0x72b95f*/
    }
    *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[932] = 0; /*0x72b96b*/
    if ( *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[1456] ) /*0x72b973*/
    {
      __3_YAXPAX_Z(*(void **)&g_BuildingLoadQueue_Array.__pad_F70[1456]); /*0x72b976*/
      *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[1456] = 0; /*0x72b97e*/
    }
    if ( *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[1460] ) /*0x72b98c*/
    {
      (***(void (__thiscall ****)(_DWORD, int))&g_BuildingLoadQueue_Array.__pad_F70[1460])( /*0x72b992*/
        *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[1460],
        1);
      *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[1460] = 0; /*0x72b994*/
    }
  }
  g_BuildingLoadQueue_Array.__pad_F70[1453] = 0; /*0x72b99a*/
}



// ==== 0x0072B9B0  sub_72B9B0  this=-  sig=ida-proto ====
char sub_72B9B0()
{
  return byte_B0FD5D; /*0x72b9b5*/
}



// ==== 0x0072B9C0  sub_72B9C0  this=-  sig=ida-proto ====
void *sub_72B9C0()
{
  return dword_B0FD60; /*0x72b9c5*/
}



// ==== 0x0072B9D0  UI_Create_72B9D0  this=-  sig=ida-proto ====
int sub_72B9D0()
{
  return dword_B0FD64; /*0x72b9d5*/
}



// ==== 0x0072BAC0  WOLobby_Load  this=-  sig=ida-proto ====
char sub_72BAC0()
{
  char result; // al

  result = byte_B0FD51; /*0x72bac0*/
  if ( !byte_B0FD51 ) /*0x72bac7*/
  {
    if ( g_DisplayWidth == 800 ) /*0x72bad3*/
      dword_B0FB2C = LoadFileSHP(off_844DBC, (bool *)&byte_B0FD50); /*0x72bae5*/
    result = LoadPaletteSimple(off_844DC0, &dword_B0FD54, &dword_B0FD58); /*0x72bafa*/
    byte_B0FD51 = 1; /*0x72baff*/
  }
  return result; /*0x72bb06*/
}



// ==== 0x0072BB10  ObjectClass::WOLobby_Destroy  this=ObjectClass  sig=csp ====
void WOLobby_Destroy(ObjectClass *this)
{
  void *v1; // esi

  if ( g_BuildingLoadQueue_Array.__pad_F70[1441] ) /*0x72bb1a*/
  {
    if ( g_BuildingLoadQueue_Array.__pad_F70[1440] ) /*0x72bb22*/
    {
      v1 = *(void **)&g_BuildingLoadQueue_Array.__pad_F70[892]; /*0x72bb25*/
      if ( *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[892] ) /*0x72bb2d*/
      {
        FileTreeNode::Destroy(*(FileTreeNode **)&g_BuildingLoadQueue_Array.__pad_F70[892]); /*0x72bb31*/
        __3_YAXPAX_Z(v1); /*0x72bb37*/
      }
      g_BuildingLoadQueue_Array.__pad_F70[1440] = 0; /*0x72bb3f*/
    }
    *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[892] = 0; /*0x72bb4b*/
    if ( *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[1444] ) /*0x72bb53*/
    {
      __3_YAXPAX_Z(*(void **)&g_BuildingLoadQueue_Array.__pad_F70[1444]); /*0x72bb56*/
      *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[1444] = 0; /*0x72bb5e*/
    }
    if ( *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[1448] ) /*0x72bb6c*/
    {
      (***(void (__thiscall ****)(_DWORD, int))&g_BuildingLoadQueue_Array.__pad_F70[1448])( /*0x72bb72*/
        *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[1448],
        1);
      *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[1448] = 0; /*0x72bb74*/
    }
  }
  g_BuildingLoadQueue_Array.__pad_F70[1441] = 0; /*0x72bb7a*/
}



// ==== 0x0072BB90  sub_72BB90  this=-  sig=ida-proto ====
char sub_72BB90()
{
  return byte_B0FD51; /*0x72bb95*/
}



// ==== 0x0072BBA0  sub_72BBA0  this=-  sig=ida-proto ====
void *sub_72BBA0()
{
  return dword_B0FD54; /*0x72bba5*/
}



// ==== 0x0072BBB0  UI_Create_72BBB0  this=-  sig=ida-proto ====
int sub_72BBB0()
{
  return dword_B0FD58; /*0x72bbb5*/
}



// ==== 0x0072BCA0  LoginFlowWOL_Load  this=-  sig=ida-proto ====
char sub_72BCA0()
{
  char result; // al

  result = byte_B0FD45; /*0x72bca0*/
  if ( !byte_B0FD45 ) /*0x72bca7*/
  {
    if ( g_DisplayWidth == 800 ) /*0x72bcb3*/
      dword_B0FA98 = LoadFileSHP(off_844DB4, (bool *)&byte_B0FD44); /*0x72bcc5*/
    result = LoadPaletteSimple(off_844DB8, &dword_B0FD48, &dword_B0FD4C); /*0x72bcda*/
    byte_B0FD45 = 1; /*0x72bcdf*/
  }
  return result; /*0x72bce6*/
}



// ==== 0x0072BCF0  ObjectClass::LoginFlowWOL_Destroy  this=ObjectClass  sig=csp ====
void LoginFlowWOL_Destroy(ObjectClass *this)
{
  void *v1; // esi

  if ( g_BuildingLoadQueue_Array.__pad_F70[1429] ) /*0x72bcfa*/
  {
    if ( g_BuildingLoadQueue_Array.__pad_F70[1428] ) /*0x72bd02*/
    {
      v1 = *(void **)&g_BuildingLoadQueue_Array.__pad_F70[744]; /*0x72bd05*/
      if ( *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[744] ) /*0x72bd0d*/
      {
        FileTreeNode::Destroy(*(FileTreeNode **)&g_BuildingLoadQueue_Array.__pad_F70[744]); /*0x72bd11*/
        __3_YAXPAX_Z(v1); /*0x72bd17*/
      }
      g_BuildingLoadQueue_Array.__pad_F70[1428] = 0; /*0x72bd1f*/
    }
    *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[744] = 0; /*0x72bd2b*/
    if ( *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[1432] ) /*0x72bd33*/
    {
      __3_YAXPAX_Z(*(void **)&g_BuildingLoadQueue_Array.__pad_F70[1432]); /*0x72bd36*/
      *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[1432] = 0; /*0x72bd3e*/
    }
    if ( *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[1436] ) /*0x72bd4c*/
    {
      (***(void (__thiscall ****)(_DWORD, int))&g_BuildingLoadQueue_Array.__pad_F70[1436])( /*0x72bd52*/
        *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[1436],
        1);
      *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[1436] = 0; /*0x72bd54*/
    }
  }
  g_BuildingLoadQueue_Array.__pad_F70[1429] = 0; /*0x72bd5a*/
}



// ==== 0x0072BD70  sub_72BD70  this=-  sig=ida-proto ====
char sub_72BD70()
{
  return byte_B0FD45; /*0x72bd75*/
}



// ==== 0x0072BD80  sub_72BD80  this=-  sig=ida-proto ====
void *sub_72BD80()
{
  return dword_B0FD48; /*0x72bd85*/
}



// ==== 0x0072BD90  UI_Create_72BD90  this=-  sig=ida-proto ====
int sub_72BD90()
{
  return dword_B0FD4C; /*0x72bd95*/
}



// ==== 0x0072BE80  JoinLobbyWOL_Load  this=-  sig=ida-proto ====
char sub_72BE80()
{
  char result; // al

  result = byte_B0FD39; /*0x72be80*/
  if ( !byte_B0FD39 ) /*0x72be87*/
  {
    if ( g_DisplayWidth == 800 ) /*0x72be93*/
      dword_B0FA9C = LoadFileSHP(off_844DAC, (bool *)&byte_B0FD38); /*0x72bea5*/
    result = LoadPaletteSimple(off_844DB0, &dword_B0FD3C, &dword_B0FD40); /*0x72beba*/
    byte_B0FD39 = 1; /*0x72bebf*/
  }
  return result; /*0x72bec6*/
}



// ==== 0x0072BED0  ObjectClass::JoinLobbyWOL_Destroy  this=ObjectClass  sig=csp ====
void JoinLobbyWOL_Destroy(ObjectClass *this)
{
  void *v1; // esi

  if ( g_BuildingLoadQueue_Array.__pad_F70[1417] ) /*0x72beda*/
  {
    if ( g_BuildingLoadQueue_Array.__pad_F70[1416] ) /*0x72bee2*/
    {
      v1 = *(void **)&g_BuildingLoadQueue_Array.__pad_F70[748]; /*0x72bee5*/
      if ( *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[748] ) /*0x72beed*/
      {
        FileTreeNode::Destroy(*(FileTreeNode **)&g_BuildingLoadQueue_Array.__pad_F70[748]); /*0x72bef1*/
        __3_YAXPAX_Z(v1); /*0x72bef7*/
      }
      g_BuildingLoadQueue_Array.__pad_F70[1416] = 0; /*0x72beff*/
    }
    *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[748] = 0; /*0x72bf0b*/
    if ( *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[1420] ) /*0x72bf13*/
    {
      __3_YAXPAX_Z(*(void **)&g_BuildingLoadQueue_Array.__pad_F70[1420]); /*0x72bf16*/
      *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[1420] = 0; /*0x72bf1e*/
    }
    if ( *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[1424] ) /*0x72bf2c*/
    {
      (***(void (__thiscall ****)(_DWORD, int))&g_BuildingLoadQueue_Array.__pad_F70[1424])( /*0x72bf32*/
        *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[1424],
        1);
      *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[1424] = 0; /*0x72bf34*/
    }
  }
  g_BuildingLoadQueue_Array.__pad_F70[1417] = 0; /*0x72bf3a*/
}



// ==== 0x0072BF50  sub_72BF50  this=-  sig=ida-proto ====
char sub_72BF50()
{
  return byte_B0FD39; /*0x72bf55*/
}



// ==== 0x0072BF60  sub_72BF60  this=-  sig=ida-proto ====
void *sub_72BF60()
{
  return dword_B0FD3C; /*0x72bf65*/
}



// ==== 0x0072BF70  UI_Create_72BF70  this=-  sig=ida-proto ====
int sub_72BF70()
{
  return dword_B0FD40; /*0x72bf75*/
}



// ==== 0x0072C060  GameOptionsScreenWOL_Load  this=-  sig=ida-proto ====
char sub_72C060()
{
  char result; // al

  result = byte_B0FD2D; /*0x72c060*/
  if ( !byte_B0FD2D ) /*0x72c067*/
  {
    if ( g_DisplayWidth == 800 ) /*0x72c073*/
      dword_B0FA4C = LoadFileSHP(off_844DA4, (bool *)&byte_B0FD2C); /*0x72c085*/
    result = LoadPaletteSimple(off_844DA8, &dword_B0FD30, &dword_B0FD34); /*0x72c09a*/
    byte_B0FD2D = 1; /*0x72c09f*/
  }
  return result; /*0x72c0a6*/
}



// ==== 0x0072C0B0  ObjectClass::GameOptionsScreenWOL_Destroy  this=ObjectClass  sig=csp ====
void GameOptionsScreenWOL_Destroy(ObjectClass *this)
{
  void *v1; // esi

  if ( g_BuildingLoadQueue_Array.__pad_F70[1405] ) /*0x72c0ba*/
  {
    if ( g_BuildingLoadQueue_Array.__pad_F70[1404] ) /*0x72c0c2*/
    {
      v1 = *(void **)&g_BuildingLoadQueue_Array.__pad_F70[668]; /*0x72c0c5*/
      if ( *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[668] ) /*0x72c0cd*/
      {
        FileTreeNode::Destroy(*(FileTreeNode **)&g_BuildingLoadQueue_Array.__pad_F70[668]); /*0x72c0d1*/
        __3_YAXPAX_Z(v1); /*0x72c0d7*/
      }
      g_BuildingLoadQueue_Array.__pad_F70[1404] = 0; /*0x72c0df*/
    }
    *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[668] = 0; /*0x72c0eb*/
    if ( *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[1408] ) /*0x72c0f3*/
    {
      __3_YAXPAX_Z(*(void **)&g_BuildingLoadQueue_Array.__pad_F70[1408]); /*0x72c0f6*/
      *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[1408] = 0; /*0x72c0fe*/
    }
    if ( *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[1412] ) /*0x72c10c*/
    {
      (***(void (__thiscall ****)(_DWORD, int))&g_BuildingLoadQueue_Array.__pad_F70[1412])( /*0x72c112*/
        *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[1412],
        1);
      *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[1412] = 0; /*0x72c114*/
    }
  }
  g_BuildingLoadQueue_Array.__pad_F70[1405] = 0; /*0x72c11a*/
}



// ==== 0x0072C130  sub_72C130  this=-  sig=ida-proto ====
char sub_72C130()
{
  return byte_B0FD2D; /*0x72c135*/
}



// ==== 0x0072C140  sub_72C140  this=-  sig=ida-proto ====
void *sub_72C140()
{
  return dword_B0FD30; /*0x72c145*/
}



// ==== 0x0072C150  UI_Create_72C150  this=-  sig=ida-proto ====
int sub_72C150()
{
  return dword_B0FD34; /*0x72c155*/
}



// ==== 0x0072C240  CreateAccountWOL_Create  this=-  sig=ida-proto ====
char sub_72C240()
{
  char result; // al

  result = byte_B0FD21; /*0x72c240*/
  if ( !byte_B0FD21 ) /*0x72c247*/
  {
    if ( g_DisplayWidth == 800 ) /*0x72c253*/
      dword_B0FA30 = LoadFileSHP(off_844D9C, (bool *)&byte_B0FD20); /*0x72c265*/
    result = LoadPaletteSimple(off_844DA0, &dword_B0FD24, &dword_B0FD28); /*0x72c27a*/
    byte_B0FD21 = 1; /*0x72c27f*/
  }
  return result; /*0x72c286*/
}



// ==== 0x0072C290  ObjectClass::CreateAccountWOL_Create_72C290  this=ObjectClass  sig=csp ====
void CreateAccountWOL_Create_72C290(ObjectClass *this)
{
  void *v1; // esi

  if ( g_BuildingLoadQueue_Array.__pad_F70[1393] ) /*0x72c29a*/
  {
    if ( g_BuildingLoadQueue_Array.__pad_F70[1392] ) /*0x72c2a2*/
    {
      v1 = *(void **)&g_BuildingLoadQueue_Array.__pad_F70[640]; /*0x72c2a5*/
      if ( *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[640] ) /*0x72c2ad*/
      {
        FileTreeNode::Destroy(*(FileTreeNode **)&g_BuildingLoadQueue_Array.__pad_F70[640]); /*0x72c2b1*/
        __3_YAXPAX_Z(v1); /*0x72c2b7*/
      }
      g_BuildingLoadQueue_Array.__pad_F70[1392] = 0; /*0x72c2bf*/
    }
    *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[640] = 0; /*0x72c2cb*/
    if ( *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[1396] ) /*0x72c2d3*/
    {
      __3_YAXPAX_Z(*(void **)&g_BuildingLoadQueue_Array.__pad_F70[1396]); /*0x72c2d6*/
      *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[1396] = 0; /*0x72c2de*/
    }
    if ( *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[1400] ) /*0x72c2ec*/
    {
      (***(void (__thiscall ****)(_DWORD, int))&g_BuildingLoadQueue_Array.__pad_F70[1400])( /*0x72c2f2*/
        *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[1400],
        1);
      *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[1400] = 0; /*0x72c2f4*/
    }
  }
  g_BuildingLoadQueue_Array.__pad_F70[1393] = 0; /*0x72c2fa*/
}



// ==== 0x0072C310  sub_72C310  this=-  sig=ida-proto ====
char sub_72C310()
{
  return byte_B0FD21; /*0x72c315*/
}



// ==== 0x0072C320  sub_72C320  this=-  sig=ida-proto ====
void *sub_72C320()
{
  return dword_B0FD24; /*0x72c325*/
}



// ==== 0x0072C330  UI_Create_72C330  this=-  sig=ida-proto ====
int sub_72C330()
{
  return dword_B0FD28; /*0x72c335*/
}



// ==== 0x0072C420  CreateAccountWOL_Create_72C420  this=-  sig=ida-proto ====
char sub_72C420()
{
  char result; // al

  result = byte_B0FD15; /*0x72c420*/
  if ( !byte_B0FD15 ) /*0x72c427*/
  {
    if ( g_DisplayWidth == 800 ) /*0x72c433*/
      dword_B0FA64 = LoadFileSHP(off_844D94, (bool *)&byte_B0FD14); /*0x72c445*/
    result = LoadPaletteSimple(off_844D98, &dword_B0FD18, &dword_B0FD1C); /*0x72c45a*/
    byte_B0FD15 = 1; /*0x72c45f*/
  }
  return result; /*0x72c466*/
}



// ==== 0x0072C470  ObjectClass::CreateAccountWOL_Create_72C470  this=ObjectClass  sig=csp ====
void CreateAccountWOL_Create_72C470(ObjectClass *this)
{
  void *v1; // esi

  if ( g_BuildingLoadQueue_Array.__pad_F70[1381] ) /*0x72c47a*/
  {
    if ( g_BuildingLoadQueue_Array.__pad_F70[1380] ) /*0x72c482*/
    {
      v1 = *(void **)&g_BuildingLoadQueue_Array.__pad_F70[692]; /*0x72c485*/
      if ( *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[692] ) /*0x72c48d*/
      {
        FileTreeNode::Destroy(*(FileTreeNode **)&g_BuildingLoadQueue_Array.__pad_F70[692]); /*0x72c491*/
        __3_YAXPAX_Z(v1); /*0x72c497*/
      }
      g_BuildingLoadQueue_Array.__pad_F70[1380] = 0; /*0x72c49f*/
    }
    *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[692] = 0; /*0x72c4ab*/
    if ( *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[1384] ) /*0x72c4b3*/
    {
      __3_YAXPAX_Z(*(void **)&g_BuildingLoadQueue_Array.__pad_F70[1384]); /*0x72c4b6*/
      *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[1384] = 0; /*0x72c4be*/
    }
    if ( *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[1388] ) /*0x72c4cc*/
    {
      (***(void (__thiscall ****)(_DWORD, int))&g_BuildingLoadQueue_Array.__pad_F70[1388])( /*0x72c4d2*/
        *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[1388],
        1);
      *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[1388] = 0; /*0x72c4d4*/
    }
  }
  g_BuildingLoadQueue_Array.__pad_F70[1381] = 0; /*0x72c4da*/
}



// ==== 0x0072C4F0  sub_72C4F0  this=-  sig=ida-proto ====
char sub_72C4F0()
{
  return byte_B0FD15; /*0x72c4f5*/
}



// ==== 0x0072C500  sub_72C500  this=-  sig=ida-proto ====
void *sub_72C500()
{
  return dword_B0FD18; /*0x72c505*/
}



// ==== 0x0072C510  UI_Create_72C510  this=-  sig=ida-proto ====
int sub_72C510()
{
  return dword_B0FD1C; /*0x72c515*/
}



// ==== 0x0072C600  LoginFlowWOL_Load_72C600  this=-  sig=ida-proto ====
char sub_72C600()
{
  char result; // al

  result = byte_B0FD09; /*0x72c600*/
  if ( !byte_B0FD09 ) /*0x72c607*/
  {
    if ( g_DisplayWidth == 800 ) /*0x72c613*/
      dword_B0FB0C = LoadFileSHP(off_844D8C, (bool *)&byte_B0FD08); /*0x72c625*/
    result = LoadPaletteSimple(off_844D90, &dword_B0FD0C, &dword_B0FD10); /*0x72c63a*/
    byte_B0FD09 = 1; /*0x72c63f*/
  }
  return result; /*0x72c646*/
}



// ==== 0x0072C650  ObjectClass::LoginFlowWOL_Destroy_72C650  this=ObjectClass  sig=csp ====
void LoginFlowWOL_Destroy_72C650(ObjectClass *this)
{
  void *v1; // esi

  if ( g_BuildingLoadQueue_Array.__pad_F70[1369] ) /*0x72c65a*/
  {
    if ( g_BuildingLoadQueue_Array.__pad_F70[1368] ) /*0x72c662*/
    {
      v1 = *(void **)&g_BuildingLoadQueue_Array.__pad_F70[860]; /*0x72c665*/
      if ( *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[860] ) /*0x72c66d*/
      {
        FileTreeNode::Destroy(*(FileTreeNode **)&g_BuildingLoadQueue_Array.__pad_F70[860]); /*0x72c671*/
        __3_YAXPAX_Z(v1); /*0x72c677*/
      }
      g_BuildingLoadQueue_Array.__pad_F70[1368] = 0; /*0x72c67f*/
    }
    *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[860] = 0; /*0x72c68b*/
    if ( *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[1372] ) /*0x72c693*/
    {
      __3_YAXPAX_Z(*(void **)&g_BuildingLoadQueue_Array.__pad_F70[1372]); /*0x72c696*/
      *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[1372] = 0; /*0x72c69e*/
    }
    if ( *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[1376] ) /*0x72c6ac*/
    {
      (***(void (__thiscall ****)(_DWORD, int))&g_BuildingLoadQueue_Array.__pad_F70[1376])( /*0x72c6b2*/
        *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[1376],
        1);
      *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[1376] = 0; /*0x72c6b4*/
    }
  }
  g_BuildingLoadQueue_Array.__pad_F70[1369] = 0; /*0x72c6ba*/
}



// ==== 0x0072C6D0  sub_72C6D0  this=-  sig=ida-proto ====
char sub_72C6D0()
{
  return byte_B0FD09; /*0x72c6d5*/
}



// ==== 0x0072C6E0  sub_72C6E0  this=-  sig=ida-proto ====
void *sub_72C6E0()
{
  return dword_B0FD0C; /*0x72c6e5*/
}



// ==== 0x0072C6F0  UI_Create_72C6F0  this=-  sig=ida-proto ====
int sub_72C6F0()
{
  return dword_B0FD10; /*0x72c6f5*/
}



// ==== 0x0072C7E0  RunWOLMainLoop_Read_Read  this=-  sig=ida-proto ====
char sub_72C7E0()
{
  char result; // al

  result = byte_B0FCFD; /*0x72c7e0*/
  if ( !byte_B0FCFD ) /*0x72c7e7*/
  {
    if ( g_DisplayWidth == 800 ) /*0x72c7f3*/
      dword_B0F9E8 = LoadFileSHP(off_844D84, (bool *)&byte_B0FCFC); /*0x72c805*/
    result = LoadPaletteSimple(off_844D88, &dword_B0FD00, &dword_B0FD04); /*0x72c81a*/
    byte_B0FCFD = 1; /*0x72c81f*/
  }
  return result; /*0x72c826*/
}



// ==== 0x0072C830  ObjectClass::RunWOLMainLoop_Read_Read_72C830  this=ObjectClass  sig=csp ====
void RunWOLMainLoop_Read_Read_72C830(ObjectClass *this)
{
  void *v1; // esi

  if ( g_BuildingLoadQueue_Array.__pad_F70[1357] ) /*0x72c83a*/
  {
    if ( g_BuildingLoadQueue_Array.__pad_F70[1356] ) /*0x72c842*/
    {
      v1 = *(void **)&g_BuildingLoadQueue_Array.__pad_F70[568]; /*0x72c845*/
      if ( *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[568] ) /*0x72c84d*/
      {
        FileTreeNode::Destroy(*(FileTreeNode **)&g_BuildingLoadQueue_Array.__pad_F70[568]); /*0x72c851*/
        __3_YAXPAX_Z(v1); /*0x72c857*/
      }
      g_BuildingLoadQueue_Array.__pad_F70[1356] = 0; /*0x72c85f*/
    }
    *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[568] = 0; /*0x72c86b*/
    if ( *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[1360] ) /*0x72c873*/
    {
      __3_YAXPAX_Z(*(void **)&g_BuildingLoadQueue_Array.__pad_F70[1360]); /*0x72c876*/
      *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[1360] = 0; /*0x72c87e*/
    }
    if ( *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[1364] ) /*0x72c88c*/
    {
      (***(void (__thiscall ****)(_DWORD, int))&g_BuildingLoadQueue_Array.__pad_F70[1364])( /*0x72c892*/
        *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[1364],
        1);
      *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[1364] = 0; /*0x72c894*/
    }
  }
  g_BuildingLoadQueue_Array.__pad_F70[1357] = 0; /*0x72c89a*/
}



// ==== 0x0072C8B0  sub_72C8B0  this=-  sig=ida-proto ====
char sub_72C8B0()
{
  return byte_B0FCFD; /*0x72c8b5*/
}



// ==== 0x0072C8C0  sub_72C8C0  this=-  sig=ida-proto ====
void *sub_72C8C0()
{
  return dword_B0FD00; /*0x72c8c5*/
}



// ==== 0x0072C8D0  UI_Create_72C8D0  this=-  sig=ida-proto ====
int sub_72C8D0()
{
  return dword_B0FD04; /*0x72c8d5*/
}



// ==== 0x0072C9C0  System_Init_72C9C0  this=-  sig=ida-proto ====
char sub_72C9C0()
{
  char result; // al

  result = byte_B0FCF1; /*0x72c9c0*/
  if ( !byte_B0FCF1 ) /*0x72c9c7*/
  {
    if ( g_DisplayWidth == 800 ) /*0x72c9d3*/
      dword_B0FA60 = LoadFileSHP(off_844D7C, (bool *)&byte_B0FCF0); /*0x72c9e5*/
    result = LoadPaletteSimple(off_844D80, &dword_B0FCF4, &dword_B0FCF8); /*0x72c9fa*/
    byte_B0FCF1 = 1; /*0x72c9ff*/
  }
  return result; /*0x72ca06*/
}



// ==== 0x0072CA10  ObjectClass::System_Init_72CA10  this=ObjectClass  sig=csp ====
void System_Init_72CA10(ObjectClass *this)
{
  void *v1; // esi

  if ( g_BuildingLoadQueue_Array.__pad_F70[1345] ) /*0x72ca1a*/
  {
    if ( g_BuildingLoadQueue_Array.__pad_F70[1344] ) /*0x72ca22*/
    {
      v1 = *(void **)&g_BuildingLoadQueue_Array.__pad_F70[688]; /*0x72ca25*/
      if ( *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[688] ) /*0x72ca2d*/
      {
        FileTreeNode::Destroy(*(FileTreeNode **)&g_BuildingLoadQueue_Array.__pad_F70[688]); /*0x72ca31*/
        __3_YAXPAX_Z(v1); /*0x72ca37*/
      }
      g_BuildingLoadQueue_Array.__pad_F70[1344] = 0; /*0x72ca3f*/
    }
    *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[688] = 0; /*0x72ca4b*/
    if ( *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[1348] ) /*0x72ca53*/
    {
      __3_YAXPAX_Z(*(void **)&g_BuildingLoadQueue_Array.__pad_F70[1348]); /*0x72ca56*/
      *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[1348] = 0; /*0x72ca5e*/
    }
    if ( *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[1352] ) /*0x72ca6c*/
    {
      (***(void (__thiscall ****)(_DWORD, int))&g_BuildingLoadQueue_Array.__pad_F70[1352])( /*0x72ca72*/
        *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[1352],
        1);
      *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[1352] = 0; /*0x72ca74*/
    }
  }
  g_BuildingLoadQueue_Array.__pad_F70[1345] = 0; /*0x72ca7a*/
}



// ==== 0x0072CA90  sub_72CA90  this=-  sig=ida-proto ====
char sub_72CA90()
{
  return byte_B0FCF1; /*0x72ca95*/
}



// ==== 0x0072CAA0  sub_72CAA0  this=-  sig=ida-proto ====
void *sub_72CAA0()
{
  return dword_B0FCF4; /*0x72caa5*/
}



// ==== 0x0072CAB0  UI_Create_72CAB0  this=-  sig=ida-proto ====
int sub_72CAB0()
{
  return dword_B0FCF8; /*0x72cab5*/
}



// ==== 0x0072CBA0  ShowUIMessage_Show  this=-  sig=ida-proto ====
char sub_72CBA0()
{
  char result; // al

  result = byte_B0FC7C; /*0x72cba0*/
  if ( !byte_B0FC7C ) /*0x72cba7*/
  {
    dword_B0FAD0 = (int)LoadFileSHP(aWaitcyloShp, (bool *)&byte_B0FC73); /*0x72cbc7*/
    result = LoadPaletteSimple(aWaitcyloPal, &dword_B0FC74, &dword_B0FC78); /*0x72cbcc*/
    byte_B0FC7C = 1; /*0x72cbd1*/
  }
  return result; /*0x72cbd8*/
}



// ==== 0x0072CC60  sub_72CC60  this=-  sig=ida-proto ====
char sub_72CC60()
{
  return byte_B0FC7C; /*0x72cc65*/
}



// ==== 0x0072CC70  sub_72CC70  this=-  sig=ida-proto ====
int sub_72CC70()
{
  return dword_B0FC74; /*0x72cc75*/
}



// ==== 0x0072CC80  UI_Helper_72CC80  this=-  sig=ida-proto ====
int sub_72CC80()
{
  return dword_B0FC78; /*0x72cc85*/
}



// ==== 0x0072CD60  Network_Load_72CD60  this=-  sig=ida-proto ====
char sub_72CD60()
{
  char result; // al

  result = byte_B0FCE5; /*0x72cd60*/
  if ( !byte_B0FCE5 ) /*0x72cd67*/
  {
    if ( g_DisplayWidth == 800 ) /*0x72cd73*/
      dword_B0FAAC = LoadFileSHP(off_844D74, (bool *)&byte_B0FCE4); /*0x72cd85*/
    result = LoadPaletteSimple(off_844D78, &dword_B0FCE8, &dword_B0FCEC); /*0x72cd9a*/
    byte_B0FCE5 = 1; /*0x72cd9f*/
  }
  return result; /*0x72cda6*/
}



// ==== 0x0072CDB0  ObjectClass::Network_Destroy  this=ObjectClass  sig=csp ====
void Network_Destroy(ObjectClass *this)
{
  void *v1; // esi

  if ( g_BuildingLoadQueue_Array.__pad_F70[1333] ) /*0x72cdba*/
  {
    if ( g_BuildingLoadQueue_Array.__pad_F70[1332] ) /*0x72cdc2*/
    {
      v1 = *(void **)&g_BuildingLoadQueue_Array.__pad_F70[764]; /*0x72cdc5*/
      if ( *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[764] ) /*0x72cdcd*/
      {
        FileTreeNode::Destroy(*(FileTreeNode **)&g_BuildingLoadQueue_Array.__pad_F70[764]); /*0x72cdd1*/
        __3_YAXPAX_Z(v1); /*0x72cdd7*/
      }
      g_BuildingLoadQueue_Array.__pad_F70[1332] = 0; /*0x72cddf*/
    }
    *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[764] = 0; /*0x72cdeb*/
    if ( *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[1336] ) /*0x72cdf3*/
    {
      __3_YAXPAX_Z(*(void **)&g_BuildingLoadQueue_Array.__pad_F70[1336]); /*0x72cdf6*/
      *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[1336] = 0; /*0x72cdfe*/
    }
    if ( *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[1340] ) /*0x72ce0c*/
    {
      (***(void (__thiscall ****)(_DWORD, int))&g_BuildingLoadQueue_Array.__pad_F70[1340])( /*0x72ce12*/
        *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[1340],
        1);
      *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[1340] = 0; /*0x72ce14*/
    }
  }
  g_BuildingLoadQueue_Array.__pad_F70[1333] = 0; /*0x72ce1a*/
}



// ==== 0x0072CE30  sub_72CE30  this=-  sig=ida-proto ====
char sub_72CE30()
{
  return byte_B0FCE5; /*0x72ce35*/
}



// ==== 0x0072CE40  sub_72CE40  this=-  sig=ida-proto ====
void *sub_72CE40()
{
  return dword_B0FCE8; /*0x72ce45*/
}



// ==== 0x0072CE50  UI_Create_72CE50  this=-  sig=ida-proto ====
int sub_72CE50()
{
  return dword_B0FCEC; /*0x72ce55*/
}



// ==== 0x0072CF40  LoadingScreen::Init  this=Network  sig=ida-proto ====
char LoadingScreen_Init()
{
  char result; // al

  result = byte_B0FCD9; /*0x72cf40*/
  if ( !byte_B0FCD9 ) /*0x72cf47*/
  {
    if ( g_DisplayWidth == 800 ) /*0x72cf53*/
      dword_B0FA18 = LoadFileSHP(off_844D6C, (bool *)&byte_B0FCD8); /*0x72cf65*/
    result = LoadPaletteSimple(off_844D70, &dword_B0FCDC, &dword_B0FCE0); /*0x72cf7a*/
    byte_B0FCD9 = 1; /*0x72cf7f*/
  }
  return result; /*0x72cf86*/
}



// ==== 0x0072CF90  ObjectClass::CleanupFileTree  this=ObjectClass  sig=csp ====
void CleanupFileTree(ObjectClass *this)
{
  void *v1; // esi

  if ( g_BuildingLoadQueue_Array.__pad_F70[1321] ) /*0x72cf9a*/
  {
    if ( g_BuildingLoadQueue_Array.__pad_F70[1320] ) /*0x72cfa2*/
    {
      v1 = *(void **)&g_BuildingLoadQueue_Array.__pad_F70[616]; /*0x72cfa5*/
      if ( *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[616] ) /*0x72cfad*/
      {
        FileTreeNode::Destroy(*(FileTreeNode **)&g_BuildingLoadQueue_Array.__pad_F70[616]); /*0x72cfb1*/
        __3_YAXPAX_Z(v1); /*0x72cfb7*/
      }
      g_BuildingLoadQueue_Array.__pad_F70[1320] = 0; /*0x72cfbf*/
    }
    *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[616] = 0; /*0x72cfcb*/
    if ( *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[1324] ) /*0x72cfd3*/
    {
      __3_YAXPAX_Z(*(void **)&g_BuildingLoadQueue_Array.__pad_F70[1324]); /*0x72cfd6*/
      *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[1324] = 0; /*0x72cfde*/
    }
    if ( *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[1328] ) /*0x72cfec*/
    {
      (***(void (__thiscall ****)(_DWORD, int))&g_BuildingLoadQueue_Array.__pad_F70[1328])( /*0x72cff2*/
        *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[1328],
        1);
      *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[1328] = 0; /*0x72cff4*/
    }
  }
  g_BuildingLoadQueue_Array.__pad_F70[1321] = 0; /*0x72cffa*/
}



// ==== 0x0072D010  sub_72D010  this=-  sig=ida-proto ====
char sub_72D010()
{
  return byte_B0FCD9; /*0x72d015*/
}



// ==== 0x0072D020  sub_72D020  this=-  sig=ida-proto ====
void *sub_72D020()
{
  return dword_B0FCDC; /*0x72d025*/
}



// ==== 0x0072D030  UI_Create_72D030  this=-  sig=ida-proto ====
int sub_72D030()
{
  return dword_B0FCE0; /*0x72d035*/
}



// ==== 0x0072D120  UI_Show  this=-  sig=ida-proto ====
char sub_72D120()
{
  char result; // al

  result = byte_B0FCCE; /*0x72d120*/
  if ( !byte_B0FCCE ) /*0x72d127*/
  {
    if ( g_DisplayWidth == 800 ) /*0x72d133*/
      dword_B0FAB8 = LoadFileSHP(off_844D64, (bool *)&byte_B0FCCD); /*0x72d145*/
    result = LoadPaletteSimple(off_844D68, &dword_B0FCD0, &dword_B0FCD4); /*0x72d15a*/
    byte_B0FCCE = 1; /*0x72d15f*/
  }
  return result; /*0x72d166*/
}



// ==== 0x0072D170  AudioController::GetVolume  this=AudioController  sig=csp ====
void AudioController::GetVolume(AudioController *this)
{
  void *v1; // esi

  if ( g_BuildingLoadQueue_Array.__pad_F70[1310] ) /*0x72d17a*/
  {
    if ( g_BuildingLoadQueue_Array.__pad_F70[1309] ) /*0x72d182*/
    {
      v1 = *(void **)&g_BuildingLoadQueue_Array.__pad_F70[776]; /*0x72d185*/
      if ( *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[776] ) /*0x72d18d*/
      {
        FileTreeNode::Destroy(*(FileTreeNode **)&g_BuildingLoadQueue_Array.__pad_F70[776]); /*0x72d191*/
        __3_YAXPAX_Z(v1); /*0x72d197*/
      }
      g_BuildingLoadQueue_Array.__pad_F70[1309] = 0; /*0x72d19f*/
    }
    *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[776] = 0; /*0x72d1ab*/
    if ( *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[1312] ) /*0x72d1b3*/
    {
      __3_YAXPAX_Z(*(void **)&g_BuildingLoadQueue_Array.__pad_F70[1312]); /*0x72d1b6*/
      *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[1312] = 0; /*0x72d1be*/
    }
    if ( *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[1316] ) /*0x72d1cc*/
    {
      (***(void (__thiscall ****)(_DWORD, int))&g_BuildingLoadQueue_Array.__pad_F70[1316])( /*0x72d1d2*/
        *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[1316],
        1);
      *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[1316] = 0; /*0x72d1d4*/
    }
  }
  g_BuildingLoadQueue_Array.__pad_F70[1310] = 0; /*0x72d1da*/
}



// ==== 0x0072D1F0  sub_72D1F0  this=-  sig=ida-proto ====
char sub_72D1F0()
{
  return byte_B0FCCE; /*0x72d1f5*/
}



// ==== 0x0072D200  sub_72D200  this=-  sig=ida-proto ====
void *sub_72D200()
{
  return dword_B0FCD0; /*0x72d205*/
}



// ==== 0x0072D210  UI_Create_72D210  this=-  sig=ida-proto ====
int sub_72D210()
{
  return dword_B0FCD4; /*0x72d215*/
}



// ==== 0x0072D300  CampaignScore::LoadCampaignScoreAssetsGame  this=CampaignScore  sig=csp ====
int __thiscall CampaignScore::LoadCampaignScoreAssetsGame(CampaignScore *this)
{
  int result; // eax
  char *v3; // ecx

  LOBYTE(result) = g_BuildingLoadQueue_Array.__pad_F70[1020]; /*0x72d300*/
  if ( !g_BuildingLoadQueue_Array.__pad_F70[1020] ) /*0x72d30a*/
  {
    CampaignScore::LoadScreenAssets(this); /*0x72d30c*/
    if ( this ) /*0x72d313*/
    {
      v3 = off_844BCC[0]; /*0x72d31d*/
      if ( this != (CampaignScore *)1 ) /*0x72d326*/
        v3 = off_844BD0; /*0x72d328*/
    }
    else
    {
      v3 = off_844BC8[0]; /*0x72d315*/
    }
    result = LoadPaletteSimple( /*0x72d338*/
               v3,
               (int *)&g_BuildingLoadQueue_Array.__pad_F70[1012],
               &g_BuildingLoadQueue_Array.__pad_F70[1016]);
    g_BuildingLoadQueue_Array.__pad_F70[1020] = 1; /*0x72d33d*/
  }
  return result; /*0x72d344*/
}



// ==== 0x0072D350  FileSystem::CleanupTrees  this=FileSystem  sig=csp ====
void FileSystem::CleanupTrees(FileSystem *this)
{
  void *v1; // esi
  void *v2; // esi
  void *v3; // esi

  if ( g_BuildingLoadQueue_Array.__pad_F70[1020] ) /*0x72d35a*/
  {
    g_BuildingLoadQueue_Array.__pad_F70[1020] = 0; /*0x72d368*/
    if ( g_BuildingLoadQueue_Array.__pad_F70[1216] ) /*0x72d36e*/
    {
      v1 = *(void **)&g_BuildingLoadQueue_Array.__pad_F70[900]; /*0x72d370*/
      if ( *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[900] ) /*0x72d378*/
      {
        FileTreeNode::Destroy(*(FileTreeNode **)&g_BuildingLoadQueue_Array.__pad_F70[900]); /*0x72d37c*/
        __3_YAXPAX_Z(v1); /*0x72d382*/
      }
      g_BuildingLoadQueue_Array.__pad_F70[1216] = 0; /*0x72d38a*/
    }
    *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[900] = 0; /*0x72d395*/
    if ( g_BuildingLoadQueue_Array.__pad_F70[1217] ) /*0x72d39d*/
    {
      v2 = *(void **)&g_BuildingLoadQueue_Array.__pad_F70[848]; /*0x72d39f*/
      if ( *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[848] ) /*0x72d3a7*/
      {
        FileTreeNode::Destroy(*(FileTreeNode **)&g_BuildingLoadQueue_Array.__pad_F70[848]); /*0x72d3ab*/
        __3_YAXPAX_Z(v2); /*0x72d3b1*/
      }
      g_BuildingLoadQueue_Array.__pad_F70[1217] = 0; /*0x72d3b9*/
    }
    *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[848] = 0; /*0x72d3c4*/
    if ( g_BuildingLoadQueue_Array.__pad_F70[1218] ) /*0x72d3cc*/
    {
      v3 = *(void **)&g_BuildingLoadQueue_Array.__pad_F70[896]; /*0x72d3ce*/
      if ( *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[896] ) /*0x72d3d6*/
      {
        FileTreeNode::Destroy(*(FileTreeNode **)&g_BuildingLoadQueue_Array.__pad_F70[896]); /*0x72d3da*/
        __3_YAXPAX_Z(v3); /*0x72d3e0*/
      }
      g_BuildingLoadQueue_Array.__pad_F70[1218] = 0; /*0x72d3e8*/
    }
    *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[896] = 0; /*0x72d3f3*/
    if ( *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[1012] ) /*0x72d3fc*/
    {
      __3_YAXPAX_Z(*(void **)&g_BuildingLoadQueue_Array.__pad_F70[1012]); /*0x72d3ff*/
      *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[1012] = 0; /*0x72d407*/
    }
    if ( *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[1016] ) /*0x72d415*/
    {
      (***(void (__thiscall ****)(_DWORD, int))&g_BuildingLoadQueue_Array.__pad_F70[1016])( /*0x72d41b*/
        *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[1016],
        1);
      *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[1016] = 0; /*0x72d41d*/
    }
  }
}



// ==== 0x0072D430  sub_72D430  this=-  sig=ida-proto ====
char sub_72D430()
{
  return byte_B0FBAC; /*0x72d435*/
}



// ==== 0x0072D440  sub_72D440  this=-  sig=ida-proto ====
void *sub_72D440()
{
  return dword_B0FBA4; /*0x72d445*/
}



// ==== 0x0072D450  VtableStub_72D450  this=AbstractClass  sig=ida-proto ====
int VtableStub_72D450()
{
  return dword_B0FBA8; /*0x72d455*/
}



// ==== 0x0072D460  CampaignScore::LoadScreenAssets  this=CampaignScore  sig=csp ====
void *__thiscall CampaignScore::LoadScreenAssets(CampaignScore *this)
{
  void *result; // eax

  if ( this ) /*0x72d462*/
  {
    if ( this == (CampaignScore *)1 ) /*0x72d4f7*/
    {
      if ( g_DisplayWidth == (LoadingScreen *)640 ) /*0x72d507*/
      {
        *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[900] = LoadFileSHP( /*0x72d51f*/
                                                                 off_844C70,
                                                                 (bool *)&g_BuildingLoadQueue_Array.__pad_F70[1216]);
        *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[848] = LoadFileSHP( /*0x72d534*/
                                                                 off_844C78,
                                                                 (bool *)&g_BuildingLoadQueue_Array.__pad_F70[1217]);
        result = LoadFileSHP(off_844C80, (bool *)&g_BuildingLoadQueue_Array.__pad_F70[1218]); /*0x72d539*/
      }
      else
      {
        *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[900] = LoadFileSHP( /*0x72d55a*/
                                                                 off_844C74,
                                                                 (bool *)&g_BuildingLoadQueue_Array.__pad_F70[1216]);
        *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[848] = LoadFileSHP( /*0x72d56f*/
                                                                 off_844C7C,
                                                                 (bool *)&g_BuildingLoadQueue_Array.__pad_F70[1217]);
        result = LoadFileSHP(off_844C84, (bool *)&g_BuildingLoadQueue_Array.__pad_F70[1218]); /*0x72d574*/
      }
      *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[896] = result; /*0x72d53e*/
    }
    else
    {
      if ( g_DisplayWidth == (LoadingScreen *)640 ) /*0x72d589*/
      {
        *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[900] = LoadFileSHP( /*0x72d5a1*/
                                                                 off_844C88,
                                                                 (bool *)&g_BuildingLoadQueue_Array.__pad_F70[1216]);
        *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[848] = LoadFileSHP( /*0x72d5b6*/
                                                                 off_844C90,
                                                                 (bool *)&g_BuildingLoadQueue_Array.__pad_F70[1217]);
        result = LoadFileSHP(off_844C98, (bool *)&g_BuildingLoadQueue_Array.__pad_F70[1218]); /*0x72d5bb*/
      }
      else
      {
        *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[900] = LoadFileSHP( /*0x72d5dc*/
                                                                 off_844C8C,
                                                                 (bool *)&g_BuildingLoadQueue_Array.__pad_F70[1216]);
        *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[848] = LoadFileSHP( /*0x72d5f1*/
                                                                 off_844C94,
                                                                 (bool *)&g_BuildingLoadQueue_Array.__pad_F70[1217]);
        result = LoadFileSHP(off_844C9C, (bool *)&g_BuildingLoadQueue_Array.__pad_F70[1218]); /*0x72d5f6*/
      }
      *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[896] = result; /*0x72d5c0*/
    }
  }
  else
  {
    if ( g_DisplayWidth == (LoadingScreen *)640 ) /*0x72d477*/
    {
      *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[900] = LoadFileSHP( /*0x72d48f*/
                                                               off_844C58,
                                                               (bool *)&g_BuildingLoadQueue_Array.__pad_F70[1216]);
      *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[848] = LoadFileSHP( /*0x72d4a4*/
                                                               off_844C60,
                                                               (bool *)&g_BuildingLoadQueue_Array.__pad_F70[1217]);
      result = LoadFileSHP(off_844C68, (bool *)&g_BuildingLoadQueue_Array.__pad_F70[1218]); /*0x72d4a9*/
    }
    else
    {
      *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[900] = LoadFileSHP( /*0x72d4ca*/
                                                               off_844C5C,
                                                               (bool *)&g_BuildingLoadQueue_Array.__pad_F70[1216]);
      *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[848] = LoadFileSHP( /*0x72d4df*/
                                                               off_844C64,
                                                               (bool *)&g_BuildingLoadQueue_Array.__pad_F70[1217]);
      result = LoadFileSHP(off_844C6C, (bool *)&g_BuildingLoadQueue_Array.__pad_F70[1218]); /*0x72d4e4*/
    }
    *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[896] = result; /*0x72d4ae*/
  }
  return result; /*0x72d4b3*/
}



// ==== 0x0072D730  Game::LoadMultiplayerScoreAssets  this=Game  sig=csp ====
char __thiscall Game::LoadMultiplayerScoreAssets(Game *this)
{
  char result; // al
  char *v3; // ecx

  result = g_BuildingLoadQueue_Array.__pad_F70[1032]; /*0x72d730*/
  if ( !g_BuildingLoadQueue_Array.__pad_F70[1032] ) /*0x72d73a*/
  {
    Game::shutdownGame(this); /*0x72d73c*/
    if ( this ) /*0x72d743*/
    {
      v3 = off_844BD8[0]; /*0x72d74d*/
      if ( this != (Game *)1 ) /*0x72d756*/
        v3 = off_844BDC; /*0x72d758*/
    }
    else
    {
      v3 = off_844BD4[0]; /*0x72d745*/
    }
    result = LoadPaletteSimple( /*0x72d768*/
               v3,
               (int *)&g_BuildingLoadQueue_Array.__pad_F70[1024],
               &g_BuildingLoadQueue_Array.__pad_F70[1028]);
    g_BuildingLoadQueue_Array.__pad_F70[1032] = 1; /*0x72d76d*/
  }
  return result; /*0x72d774*/
}



// ==== 0x0072D780  ObjectClass::Map_Init_72D780  this=ObjectClass  sig=csp ====
void Map_Init_72D780(ObjectClass *this)
{
  void *v1; // esi

  if ( g_BuildingLoadQueue_Array.__pad_F70[1032] ) /*0x72d78a*/
  {
    g_BuildingLoadQueue_Array.__pad_F70[1032] = 0; /*0x72d791*/
    if ( g_BuildingLoadQueue_Array.__pad_F70[1229] ) /*0x72d799*/
    {
      v1 = *(void **)&g_BuildingLoadQueue_Array.__pad_F70[876]; /*0x72d79c*/
      if ( *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[876] ) /*0x72d7a4*/
      {
        FileTreeNode::Destroy(*(FileTreeNode **)&g_BuildingLoadQueue_Array.__pad_F70[876]); /*0x72d7a8*/
        __3_YAXPAX_Z(v1); /*0x72d7ae*/
      }
      g_BuildingLoadQueue_Array.__pad_F70[1229] = 0; /*0x72d7b6*/
    }
    *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[876] = 0; /*0x72d7c2*/
    if ( *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[1024] ) /*0x72d7ca*/
    {
      __3_YAXPAX_Z(*(void **)&g_BuildingLoadQueue_Array.__pad_F70[1024]); /*0x72d7cd*/
      *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[1024] = 0; /*0x72d7d5*/
    }
    if ( *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[1028] ) /*0x72d7e3*/
    {
      (***(void (__thiscall ****)(_DWORD, int))&g_BuildingLoadQueue_Array.__pad_F70[1028])( /*0x72d7e9*/
        *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[1028],
        1);
      *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[1028] = 0; /*0x72d7eb*/
    }
  }
}



// ==== 0x0072D800  sub_72D800  this=-  sig=ida-proto ====
char sub_72D800()
{
  return byte_B0FBB8; /*0x72d805*/
}



// ==== 0x0072D810  sub_72D810  this=-  sig=ida-proto ====
void *sub_72D810()
{
  return dword_B0FBB0; /*0x72d815*/
}



// ==== 0x0072D820  UI_Create_72D820  this=-  sig=ida-proto ====
int sub_72D820()
{
  return dword_B0FBB4; /*0x72d825*/
}



// ==== 0x0072D830  Game::shutdownGame  this=Game  sig=csp ====
void *__thiscall Game::shutdownGame(Game *this)
{
  void *result; // eax
  char *v2; // ecx

  if ( this ) /*0x72d832*/
  {
    if ( this == (Game *)1 ) /*0x72d86f*/
    {
      if ( g_DisplayWidth == (LoadingScreen *)640 ) /*0x72d87b*/
        result = LoadFileSHP(off_844CA8, (bool *)&g_BuildingLoadQueue_Array.__pad_F70[1229]); /*0x72d883*/
      else
        result = LoadFileSHP(off_844CAC, (bool *)&g_BuildingLoadQueue_Array.__pad_F70[1229]); /*0x72d894*/
      *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[876] = result; /*0x72d888*/
    }
    else
    {
      v2 = off_844CB0[0]; /*0x72d89f*/
      if ( g_DisplayWidth != (LoadingScreen *)640 ) /*0x72d8af*/
        v2 = off_844CB4; /*0x72d8b1*/
      result = LoadFileSHP(v2, (bool *)&g_BuildingLoadQueue_Array.__pad_F70[1229]); /*0x72d8b7*/
      *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[876] = result; /*0x72d8bc*/
    }
  }
  else
  {
    if ( g_DisplayWidth == (LoadingScreen *)640 ) /*0x72d843*/
      result = LoadFileSHP(off_844CA0, (bool *)&g_BuildingLoadQueue_Array.__pad_F70[1229]); /*0x72d84b*/
    else
      result = LoadFileSHP(off_844CA4, (bool *)&g_BuildingLoadQueue_Array.__pad_F70[1229]); /*0x72d85c*/
    *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[876] = result; /*0x72d850*/
  }
  return result; /*0x72d855*/
}



// ==== 0x0072D9A0  InitializeGameLoading  this=-  sig=ida-proto ====
int sub_72D9A0()
{
  void *FileSHP; // eax
  char *v1; // ecx

  if ( g_DisplayWidth == 640 ) /*0x72d9af*/
  {
    dword_B0FB48 = LoadFileSHP(off_844CB8, (bool *)&byte_B0FCC8); /*0x72d9c7*/
    dword_B0FB10 = LoadFileSHP(off_844CC4, (bool *)&byte_B0FCCA); /*0x72d9dc*/
    FileSHP = LoadFileSHP(off_844CC8, (bool *)&byte_B0FCCB); /*0x72d9e1*/
    v1 = off_844CD0[0]; /*0x72d9e6*/
  }
  else
  {
    dword_B0FB48 = LoadFileSHP(off_844D4C, (bool *)&byte_B0FCC8); /*0x72da0e*/
    dword_B0FB10 = LoadFileSHP(off_844D54, (bool *)&byte_B0FCCA); /*0x72da23*/
    FileSHP = LoadFileSHP(off_844CCC, (bool *)&byte_B0FCCB); /*0x72da28*/
    v1 = off_844D5C; /*0x72da2d*/
  }
  dword_B0F9F8 = FileSHP; /*0x72d9ec*/
  dword_B0FA6C = LoadFileSHP(v1, (bool *)&byte_B0FCCC); /*0x72da52*/
  LoadPaletteSimple(off_844BE0, &dword_B0FBBC, &dword_B0FBC0); /*0x72da57*/
  LoadPaletteSimple(off_844D50, &dword_B0FCB0, &dword_B0FCB4); /*0x72da6c*/
  LoadPaletteSimple(off_844D58, &dword_B0FCB8, &dword_B0FCBC); /*0x72da81*/
  return LoadPaletteSimple(off_844D60, &dword_B0FCC0, &dword_B0FCC4); /*0x72da9b*/
}



// ==== 0x0072DAA0  CleanupEVASystem  this=-  sig=ida-proto ====
// Microsoft VisualC 2-14/net runtime
void EVASystem::Cleanup()
{
  CleanupEVASystem_Cleanup(); /*0x72daa0*/
  if ( dword_B0FCB0 ) /*0x72dcfa*/
  {
    __3_YAXPAX_Z(dword_B0FCB0); /*0x72dcfd*/
    dword_B0FCB0 = 0; /*0x72dd05*/
  }
  if ( dword_B0FCB4 ) /*0x72dd13*/
  {
    (**(void (__thiscall ***)(int, int))dword_B0FCB4)(dword_B0FCB4, 1); /*0x72dd19*/
    dword_B0FCB4 = 0; /*0x72dd1b*/
  }
  if ( dword_B0FCB8 ) /*0x72dd28*/
  {
    __3_YAXPAX_Z(dword_B0FCB8); /*0x72dd2b*/
    dword_B0FCB8 = 0; /*0x72dd33*/
  }
  if ( dword_B0FCBC ) /*0x72dd41*/
  {
    (**(void (__thiscall ***)(int, int))dword_B0FCBC)(dword_B0FCBC, 1); /*0x72dd47*/
    dword_B0FCBC = 0; /*0x72dd49*/
  }
  if ( dword_B0FCC0 ) /*0x72dd56*/
  {
    __3_YAXPAX_Z(dword_B0FCC0); /*0x72dd59*/
    dword_B0FCC0 = 0; /*0x72dd61*/
  }
  if ( dword_B0FCC4 ) /*0x72dd6f*/
  {
    (**(void (__thiscall ***)(int, int))dword_B0FCC4)(dword_B0FCC4, 1); /*0x72dd75*/
    dword_B0FCC4 = 0; /*0x72dd77*/
  }
  if ( dword_B0FBBC ) /*0x72dd84*/
  {
    __3_YAXPAX_Z(dword_B0FBBC); /*0x72dd87*/
    dword_B0FBBC = 0; /*0x72dd8f*/
  }
  if ( dword_B0FBC0 ) /*0x72dd9d*/
  {
    (**(void (__thiscall ***)(int, int))dword_B0FBC0)(dword_B0FBC0, 1); /*0x72dda3*/
    dword_B0FBC0 = 0; /*0x72dda5*/
  }
}



// ==== 0x0072DAB0  sub_72DAB0  this=-  sig=ida-proto ====
void *sub_72DAB0()
{
  return dword_B0FBBC; /*0x72dab5*/
}



// ==== 0x0072DAC0  UI_Helper_72DAC0  this=-  sig=ida-proto ====
int sub_72DAC0()
{
  return dword_B0FCB4; /*0x72dac5*/
}



// ==== 0x0072DAD0  UI_Helper_72DAD0  this=-  sig=ida-proto ====
int sub_72DAD0()
{
  return dword_B0FCBC; /*0x72dad5*/
}



// ==== 0x0072DAE0  CreatureClass::GetManager  this=CreatureClass  sig=ida-proto ====
int CreatureClass_GetManager()
{
  return dword_B0FCC4; /*0x72dae5*/
}



// ==== 0x0072DAF0  sub_72DAF0  this=-  sig=ida-proto ====
int sub_72DAF0()
{
  return dword_B0FBC0; /*0x72daf5*/
}



// ==== 0x0072DC20  CleanupEVASystem_Cleanup  this=-  sig=ida-proto ====
void sub_72DC20()
{
  void *v0; // esi
  void *v1; // esi
  void *v2; // esi
  void *v3; // esi

  if ( byte_B0FCC8 ) /*0x72dc2b*/
  {
    v0 = dword_B0FB48; /*0x72dc2d*/
    if ( dword_B0FB48 ) /*0x72dc35*/
    {
      FileTreeNode::Destroy(dword_B0FB48); /*0x72dc39*/
      __3_YAXPAX_Z(v0); /*0x72dc3f*/
    }
    byte_B0FCC8 = 0; /*0x72dc47*/
  }
  dword_B0FB48 = 0; /*0x72dc52*/
  if ( byte_B0FCCA ) /*0x72dc5a*/
  {
    v1 = dword_B0FB10; /*0x72dc5c*/
    if ( dword_B0FB10 ) /*0x72dc64*/
    {
      FileTreeNode::Destroy(dword_B0FB10); /*0x72dc68*/
      __3_YAXPAX_Z(v1); /*0x72dc6e*/
    }
    byte_B0FCCA = 0; /*0x72dc76*/
  }
  dword_B0FB10 = 0; /*0x72dc81*/
  if ( byte_B0FCCB ) /*0x72dc89*/
  {
    v2 = dword_B0F9F8; /*0x72dc8b*/
    if ( dword_B0F9F8 ) /*0x72dc93*/
    {
      FileTreeNode::Destroy(dword_B0F9F8); /*0x72dc97*/
      __3_YAXPAX_Z(v2); /*0x72dc9d*/
    }
    byte_B0FCCB = 0; /*0x72dca5*/
  }
  dword_B0F9F8 = 0; /*0x72dcb0*/
  if ( byte_B0FCCC ) /*0x72dcb8*/
  {
    v3 = dword_B0FA6C; /*0x72dcba*/
    if ( dword_B0FA6C ) /*0x72dcc2*/
    {
      FileTreeNode::Destroy(dword_B0FA6C); /*0x72dcc6*/
      __3_YAXPAX_Z(v3); /*0x72dccc*/
    }
    byte_B0FCCC = 0; /*0x72dcd4*/
  }
  dword_B0FA6C = 0; /*0x72dcda*/
}



// ==== 0x0072DDB0  MouseClass::LoadCursors  this=MouseClass  sig=ida-proto ====
char MouseClass_LoadCursors()
{
  char result; // al

  result = byte_B0FBE0; /*0x72ddb0*/
  if ( !byte_B0FBE0 ) /*0x72ddb7*/
  {
    AssetClass::ReleaseAndReload(); /*0x72ddbd*/
    dword_B0FAC4 = LoadFileSHP(off_844CD4, (bool *)&byte_B0FC95); /*0x72dddd*/
    dword_B0F9DC = LoadFileSHP(off_844CD8, (bool *)&byte_B0FC96); /*0x72ddf2*/
    dword_B0FAC0 = LoadFileSHP(off_844CDC, (bool *)&byte_B0FC97); /*0x72de07*/
    dword_B0FB50 = LoadFileSHP(off_844CE0, (bool *)&byte_B0FC98); /*0x72de1c*/
    dword_B0FA04 = LoadFileSHP(off_844CE4, (bool *)&byte_B0FC99); /*0x72de31*/
    dword_B0FAF8 = LoadFileSHP(off_844CE8, (bool *)&byte_B0FC9A); /*0x72de46*/
    dword_B0FA74 = LoadFileSHP(off_844CEC, (bool *)&byte_B0FC9B); /*0x72de5b*/
    dword_B0FA38 = LoadFileSHP(off_844CF0, (bool *)&byte_B0FC9C); /*0x72de70*/
    dword_B0FAE8 = LoadFileSHP(off_844CF4, (bool *)&byte_B0FC9D); /*0x72de85*/
    dword_B0FA54 = LoadFileSHP(off_844CF8, (bool *)&byte_B0FC9E); /*0x72de9f*/
    LoadPaletteSimple(off_844BE4, &dword_B0FBC8, &dword_B0FBCC); /*0x72dea4*/
    LoadPaletteSimple(off_844BE8, &dword_B0FBD0, &dword_B0FBD4); /*0x72deb9*/
    LoadPaletteSimple(off_844BEC, &dword_B0FBD8, &dword_B0FBDC); /*0x72dece*/
    result = SetupMouseClassResources(g_DisplayWidth, MEMORY[0x8A00A8]); /*0x72dedf*/
    byte_B0FBE0 = 1; /*0x72dee4*/
  }
  return result; /*0x72deeb*/
}



// ==== 0x0072DEF0  LoadingScreen::FreeResources3  this=LoadingScreen  sig=ida-proto ====
char LoadingScreen::FreeResources3()
{
  char result; // al
  LoadingScreen *v1; // [esp+0h] [ebp-4h]
  ObjectClass *v2; // [esp+0h] [ebp-4h]

  result = g_BuildingLoadQueue_Array.__pad_F70[1072]; /*0x72def0*/
  if ( g_BuildingLoadQueue_Array.__pad_F70[1072] ) /*0x72defa*/
  {
    g_BuildingLoadQueue_Array.__pad_F70[1072] = 0; /*0x72df00*/
    LoadingScreen::DestroyFileTrees(); /*0x72df06*/
    LoadingScreen::CleanupObjects(v1); /*0x72df0b*/
    __3_YAXPAX_Z(*(void **)&g_BuildingLoadQueue_Array.__pad_F70[1120]); /*0x72df16*/
    *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[1120] = 0; /*0x72df21*/
    __3_YAXPAX_Z(*(void **)&g_BuildingLoadQueue_Array.__pad_F70[1124]); /*0x72df28*/
    *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[1124] = 0; /*0x72df33*/
    __3_YAXPAX_Z(*(void **)&g_BuildingLoadQueue_Array.__pad_F70[1128]); /*0x72df3a*/
    *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[1128] = 0; /*0x72df44*/
    __3_YAXPAX_Z(*(void **)&g_BuildingLoadQueue_Array.__pad_F70[1132]); /*0x72df4b*/
    *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[1132] = 0; /*0x72df56*/
    __3_YAXPAX_Z(*(void **)&g_BuildingLoadQueue_Array.__pad_F70[1136]); /*0x72df5d*/
    *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[1136] = 0; /*0x72df68*/
    __3_YAXPAX_Z(*(void **)&g_BuildingLoadQueue_Array.__pad_F70[1140]); /*0x72df6f*/
    *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[1140] = 0; /*0x72df79*/
    __3_YAXPAX_Z(*(void **)&g_BuildingLoadQueue_Array.__pad_F70[1144]); /*0x72df80*/
    *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[1144] = 0; /*0x72df8b*/
    __3_YAXPAX_Z(*(void **)&g_BuildingLoadQueue_Array.__pad_F70[1148]); /*0x72df92*/
    *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[1148] = 0; /*0x72df9a*/
    return ReleaseLoadingResources(v2); /*0x72dfa0*/
  }
  return result; /*0x72dfa5*/
}



// ==== 0x0072DFB0  InitLoadingScreenResources  this=-  sig=ida-proto ====
char InitLoadingScreenResources()
{
  char result; // al
  LoadingScreen *v1; // [esp+0h] [ebp-4h]
  ObjectClass *v2; // [esp+0h] [ebp-4h]

  if ( !g_BuildingLoadQueue_Array.__pad_F70[1072] ) /*0x72dfba*/
    goto LABEL_3; /*0x72dfba*/
  g_BuildingLoadQueue_Array.__pad_F70[1072] = 0; /*0x72dfc0*/
  LoadingScreen::DestroyFileTrees(); /*0x72dfc6*/
  LoadingScreen::CleanupObjects(v1); /*0x72dfcb*/
  __3_YAXPAX_Z(*(void **)&g_BuildingLoadQueue_Array.__pad_F70[1120]); /*0x72dfd6*/
  *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[1120] = 0; /*0x72dfe1*/
  __3_YAXPAX_Z(*(void **)&g_BuildingLoadQueue_Array.__pad_F70[1124]); /*0x72dfe8*/
  *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[1124] = 0; /*0x72dff3*/
  __3_YAXPAX_Z(*(void **)&g_BuildingLoadQueue_Array.__pad_F70[1128]); /*0x72dffa*/
  *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[1128] = 0; /*0x72e004*/
  __3_YAXPAX_Z(*(void **)&g_BuildingLoadQueue_Array.__pad_F70[1132]); /*0x72e00b*/
  *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[1132] = 0; /*0x72e016*/
  __3_YAXPAX_Z(*(void **)&g_BuildingLoadQueue_Array.__pad_F70[1136]); /*0x72e01d*/
  *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[1136] = 0; /*0x72e028*/
  __3_YAXPAX_Z(*(void **)&g_BuildingLoadQueue_Array.__pad_F70[1140]); /*0x72e02f*/
  *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[1140] = 0; /*0x72e039*/
  __3_YAXPAX_Z(*(void **)&g_BuildingLoadQueue_Array.__pad_F70[1144]); /*0x72e040*/
  *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[1144] = 0; /*0x72e04b*/
  __3_YAXPAX_Z(*(void **)&g_BuildingLoadQueue_Array.__pad_F70[1148]); /*0x72e052*/
  *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[1148] = 0; /*0x72e05a*/
  result = ReleaseLoadingResources(v2); /*0x72e060*/
  if ( !g_BuildingLoadQueue_Array.__pad_F70[1072] ) /*0x72e06b*/
  {
LABEL_3:
    AssetClass::ReleaseAndReload((AssetClass *)v1); /*0x72e071*/
    *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[788] = LoadFileSHP( /*0x72e091*/
                                                             off_844CD4,
                                                             (bool *)&g_BuildingLoadQueue_Array.__pad_F70[1253]);
    *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[556] = LoadFileSHP( /*0x72e0a6*/
                                                             off_844CD8,
                                                             (bool *)&g_BuildingLoadQueue_Array.__pad_F70[1254]);
    *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[784] = LoadFileSHP( /*0x72e0bb*/
                                                             off_844CDC,
                                                             (bool *)&g_BuildingLoadQueue_Array.__pad_F70[1255]);
    *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[928] = LoadFileSHP( /*0x72e0d0*/
                                                             off_844CE0,
                                                             (bool *)&g_BuildingLoadQueue_Array.__pad_F70[1256]);
    *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[596] = LoadFileSHP( /*0x72e0e5*/
                                                             off_844CE4,
                                                             (bool *)&g_BuildingLoadQueue_Array.__pad_F70[1257]);
    *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[840] = LoadFileSHP( /*0x72e0fa*/
                                                             off_844CE8,
                                                             (bool *)&g_BuildingLoadQueue_Array.__pad_F70[1258]);
    *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[708] = LoadFileSHP( /*0x72e10f*/
                                                             off_844CEC,
                                                             (bool *)&g_BuildingLoadQueue_Array.__pad_F70[1259]);
    *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[648] = LoadFileSHP( /*0x72e124*/
                                                             off_844CF0,
                                                             (bool *)&g_BuildingLoadQueue_Array.__pad_F70[1260]);
    *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[824] = LoadFileSHP( /*0x72e139*/
                                                             off_844CF4,
                                                             (bool *)&g_BuildingLoadQueue_Array.__pad_F70[1261]);
    *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[676] = LoadFileSHP( /*0x72e153*/
                                                             off_844CF8,
                                                             (bool *)&g_BuildingLoadQueue_Array.__pad_F70[1262]);
    LoadPaletteSimple( /*0x72e158*/
      off_844BE4,
      (int *)&g_BuildingLoadQueue_Array.__pad_F70[1048],
      &g_BuildingLoadQueue_Array.__pad_F70[1052]);
    LoadPaletteSimple( /*0x72e16d*/
      off_844BE8,
      (int *)&g_BuildingLoadQueue_Array.__pad_F70[1056],
      &g_BuildingLoadQueue_Array.__pad_F70[1060]);
    LoadPaletteSimple( /*0x72e182*/
      off_844BEC,
      (int *)&g_BuildingLoadQueue_Array.__pad_F70[1064],
      &g_BuildingLoadQueue_Array.__pad_F70[1068]);
    result = (unsigned __int8)SetupMouseClassResources((int)g_DisplayWidth, (int)*(&g_DisplayWidth + 1)); /*0x72e193*/
    g_BuildingLoadQueue_Array.__pad_F70[1072] = 1; /*0x72e198*/
  }
  return result; /*0x72e19f*/
}



// ==== 0x0072E1B0  ChangeVideoMode_Setup  this=ObjectClass  sig=ida-proto ====
int *__fastcall sub_72E1B0(int a1, int a2)
{
  __3_YAXPAX_Z(dword_B0FC10); /*0x72e1bd*/
  dword_B0FC10 = 0; /*0x72e1cb*/
  __3_YAXPAX_Z(dword_B0FC14); /*0x72e1d1*/
  dword_B0FC14 = 0; /*0x72e1dc*/
  __3_YAXPAX_Z(dword_B0FC18); /*0x72e1e3*/
  dword_B0FC18 = 0; /*0x72e1ed*/
  __3_YAXPAX_Z(dword_B0FC1C); /*0x72e1f4*/
  dword_B0FC1C = 0; /*0x72e1ff*/
  __3_YAXPAX_Z(dword_B0FC20); /*0x72e206*/
  dword_B0FC20 = 0; /*0x72e211*/
  __3_YAXPAX_Z(dword_B0FC24); /*0x72e218*/
  dword_B0FC24 = 0; /*0x72e222*/
  __3_YAXPAX_Z(dword_B0FC28); /*0x72e229*/
  dword_B0FC28 = 0; /*0x72e234*/
  __3_YAXPAX_Z(dword_B0FC2C); /*0x72e23b*/
  dword_B0FC2C = 0; /*0x72e245*/
  return SetupMouseClassResources(a1, a2); /*0x72e24d*/
}



// ==== 0x0072E260  UI_Draw_72E260  this=-  sig=ida-proto ====
char sub_72E260()
{
  return byte_B0FBE0; /*0x72e265*/
}



// ==== 0x0072E270  sub_72E270  this=-  sig=ida-proto ====
void *sub_72E270()
{
  return dword_B0FBC8; /*0x72e275*/
}



// ==== 0x0072E280  VtableStub_72E280  this=-  sig=ida-proto ====
int VtableStub_72E280()
{
  return dword_B0FBCC; /*0x72e285*/
}



// ==== 0x0072E290  sub_72E290  this=-  sig=ida-proto ====
void *sub_72E290()
{
  return dword_B0FBD0; /*0x72e295*/
}



// ==== 0x0072E2A0  UI_Helper_72E2A0  this=-  sig=ida-proto ====
int sub_72E2A0()
{
  return dword_B0FBD4; /*0x72e2a5*/
}



// ==== 0x0072E2B0  sub_72E2B0  this=-  sig=ida-proto ====
void *sub_72E2B0()
{
  return dword_B0FBD8; /*0x72e2b5*/
}



// ==== 0x0072E2C0  UI_Helper_72E2C0  this=-  sig=ida-proto ====
int sub_72E2C0()
{
  return dword_B0FBDC; /*0x72e2c5*/
}



// ==== 0x0072E2D0  DrawScoreScreenStats  this=-  sig=csp ====
int __fastcall ScoreScreen_DrawStats(int *a1, int a2)
{
  int result; // eax
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

  result = g_DisplayWidth; /*0x72e2d0*/
  if ( g_DisplayWidth >= 1024 ) /*0x72e2e3*/
  {
    v5 = *(_DWORD *)dword_B0FC1C; /*0x72e2fc*/
    v6 = *((_DWORD *)dword_B0FC1C + 1); /*0x72e300*/
    v15 = *(_DWORD *)dword_B0FC20 + *((_DWORD *)dword_B0FC20 + 2); /*0x72e309*/
    v7 = *a1; /*0x72e315*/
    v16 = *((_DWORD *)dword_B0FC2C + 1) + *((_DWORD *)dword_B0FC2C + 3); /*0x72e317*/
    v17 = 0; /*0x72e31d*/
    v18 = 0; /*0x72e321*/
    v19 = v5; /*0x72e32e*/
    v20 = v6; /*0x72e332*/
    (*(void (__thiscall **)(int *, int *, int, _DWORD))(v7 + 16))(a1, &v17, a2, 0); /*0x72e336*/
    v8 = *a1; /*0x72e339*/
    v18 = 0; /*0x72e342*/
    v19 = 800; /*0x72e34b*/
    v17 = v5; /*0x72e353*/
    v20 = v6; /*0x72e357*/
    (*(void (__thiscall **)(int *, int *, int, _DWORD))(v8 + 16))(a1, &v17, a2, 0); /*0x72e35b*/
    v9 = *a1; /*0x72e35e*/
    v18 = 0; /*0x72e366*/
    v17 = v15; /*0x72e36f*/
    v19 = v5; /*0x72e377*/
    v20 = v6; /*0x72e37b*/
    (*(void (__thiscall **)(int *, int *, int, _DWORD))(v9 + 16))(a1, &v17, a2, 0); /*0x72e37f*/
    v10 = *a1; /*0x72e382*/
    v20 = 600; /*0x72e38d*/
    v17 = v15; /*0x72e397*/
    v18 = v6; /*0x72e39f*/
    v19 = v5; /*0x72e3a3*/
    (*(void (__thiscall **)(int *, int *, int, _DWORD))(v10 + 16))(a1, &v17, a2, 0); /*0x72e3a7*/
    v19 = v5; /*0x72e3af*/
    v17 = v15; /*0x72e3bb*/
    v20 = 600; /*0x72e3c5*/
    v11 = *a1; /*0x72e3c9*/
    v18 = v16; /*0x72e3cf*/
    (*(void (__thiscall **)(int *, int *, int, _DWORD))(v11 + 16))(a1, &v17, a2, 0); /*0x72e3d3*/
    v19 = 800; /*0x72e3e5*/
    v12 = *a1; /*0x72e3e9*/
    v17 = v5; /*0x72e3ef*/
    v18 = v16; /*0x72e3f3*/
    v20 = v6; /*0x72e3f7*/
    (*(void (__thiscall **)(int *, int *, int, _DWORD))(v12 + 16))(a1, &v17, a2, 0); /*0x72e3fb*/
    v17 = 0; /*0x72e40a*/
    v13 = *a1; /*0x72e40e*/
    v18 = v16; /*0x72e414*/
    v19 = v5; /*0x72e418*/
    v20 = v6; /*0x72e41c*/
    (*(void (__thiscall **)(int *, int *, int, _DWORD))(v13 + 16))(a1, &v17, a2, 0); /*0x72e420*/
    v14 = *a1; /*0x72e423*/
    v17 = 0; /*0x72e42c*/
    v20 = 600; /*0x72e435*/
    v18 = v6; /*0x72e43d*/
    v19 = v5; /*0x72e441*/
    return (*(int (__thiscall **)(int *, int *, int, _DWORD))(v14 + 16))(a1, &v17, a2, 0); /*0x72e445*/
  }
  return result; /*0x72e44a*/
}



// ==== 0x0072E450  RenderScoreScreen  this=Buffer  sig=csp ====
void __fastcall RenderScoreScreen(int *a1, int *a2, char a3)
{
  int v5; // ecx
  int v6; // eax
  int v7; // edi
  int v8; // edi
  int v9; // eax
  int v10; // edi
  AssetClass *v11; // [esp+0h] [ebp-20h]
  int v12; // [esp+8h] [ebp-18h] BYREF
  int i; // [esp+Ch] [ebp-14h]
  int v14[2]; // [esp+10h] [ebp-10h] BYREF
  int v15; // [esp+18h] [ebp-8h]
  int v16; // [esp+1Ch] [ebp-4h]

  if ( !g_BuildingLoadQueue_Array.__pad_F70[1072] ) /*0x72e460*/
  {
    AssetClass::ReleaseAndReload(v11); /*0x72e462*/
    Render_Render_72EB50(); /*0x72e467*/
    LoadPaletteSimple( /*0x72e47c*/
      off_844BE4,
      (int *)&g_BuildingLoadQueue_Array.__pad_F70[1048],
      &g_BuildingLoadQueue_Array.__pad_F70[1052]);
    LoadPaletteSimple( /*0x72e491*/
      off_844BE8,
      (int *)&g_BuildingLoadQueue_Array.__pad_F70[1056],
      &g_BuildingLoadQueue_Array.__pad_F70[1060]);
    LoadPaletteSimple( /*0x72e4a6*/
      off_844BEC,
      (int *)&g_BuildingLoadQueue_Array.__pad_F70[1064],
      &g_BuildingLoadQueue_Array.__pad_F70[1068]);
    SetupMouseClassResources((int)g_DisplayWidth, (int)*(&g_DisplayWidth + 1)); /*0x72e4b7*/
    g_BuildingLoadQueue_Array.__pad_F70[1072] = 1; /*0x72e4bc*/
  }
  DrawScoreScreenStats(a1, (int)a2); /*0x72e4c9*/
  v5 = a2[1]; /*0x72e4d0*/
  v14[0] = *a2; /*0x72e4d3*/
  v6 = a2[2]; /*0x72e4d7*/
  v7 = a2[3]; /*0x72e4da*/
  v12 = 0; /*0x72e4e4*/
  i = 0; /*0x72e4e8*/
  v14[1] = v5; /*0x72e4ec*/
  v15 = v6; /*0x72e4f0*/
  v16 = v7; /*0x72e4f4*/
  if ( v6 > 800 ) /*0x72e4f8*/
    v15 = (v6 - 800) / 2 + 800; /*0x72e509*/
  if ( v7 > 600 ) /*0x72e513*/
    v16 = (v7 - 600) / 2 + 600; /*0x72e525*/
  v12 = **(_DWORD **)&g_BuildingLoadQueue_Array.__pad_F70[1136]; /*0x72e537*/
  i = *(_DWORD *)(*(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[1136] + 4); /*0x72e53e*/
  DrawToSurfaceSHP( /*0x72e56a*/
    (int)a1,
    *(int *)&g_BuildingLoadQueue_Array.__pad_F70[1052],
    *(int *)&g_BuildingLoadQueue_Array.__pad_F70[840],
    0,
    &v12,
    v14,
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
  v8 = 0; /*0x72e574*/
  v12 = **(_DWORD **)&g_BuildingLoadQueue_Array.__pad_F70[1140]; /*0x72e578*/
  v9 = *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[624]; /*0x72e57f*/
  for ( i = *(_DWORD *)(*(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[1140] + 4); /*0x72e58a*/
        v8 < *(int *)&g_BuildingLoadQueue_Array.__pad_F70[624];
        v9 = *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[624] )
  {
    DrawToSurfaceSHP( /*0x72e5c1*/
      (int)a1,
      *(int *)&g_BuildingLoadQueue_Array.__pad_F70[1060],
      *(int *)&g_BuildingLoadQueue_Array.__pad_F70[708],
      0,
      &v12,
      v14,
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
    ++v8; /*0x72e5d4*/
    i += *(_DWORD *)(*(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[1140] + 12); /*0x72e5d5*/
  }
  if ( !a3 ) /*0x72e5e8*/
  {
    v10 = 0; /*0x72e5f0*/
    v12 = **(_DWORD **)&g_BuildingLoadQueue_Array.__pad_F70[1120]; /*0x72e5f6*/
    i = *(_DWORD *)(*(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[1120] + 4); /*0x72e5fd*/
    if ( v9 > 0 ) /*0x72e601*/
    {
      do /*0x72e65a*/
      {
        DrawToSurfaceSHP( /*0x72e63a*/
          (int)a1,
          *(int *)&g_BuildingLoadQueue_Array.__pad_F70[1068],
          *(int *)&g_BuildingLoadQueue_Array.__pad_F70[788],
          0xAu,
          &v12,
          v14,
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
        ++v10; /*0x72e653*/
        i += *(_DWORD *)(*(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[1120] + 12); /*0x72e654*/
      }
      while ( v10 < *(int *)&g_BuildingLoadQueue_Array.__pad_F70[624] ); /*0x72e65a*/
    }
  }
  v12 = **(_DWORD **)&g_BuildingLoadQueue_Array.__pad_F70[1144]; /*0x72e663*/
  i = *(_DWORD *)(*(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[1144] + 4); /*0x72e688*/
  DrawToSurfaceSHP( /*0x72e69f*/
    (int)a1,
    *(int *)&g_BuildingLoadQueue_Array.__pad_F70[1052],
    *(int *)&g_BuildingLoadQueue_Array.__pad_F70[648],
    0,
    &v12,
    v14,
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
  v12 = **(_DWORD **)&g_BuildingLoadQueue_Array.__pad_F70[1148]; /*0x72e6ad*/
  i = *(_DWORD *)(*(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[1148] + 4); /*0x72e6b9*/
  if ( g_DisplayWidth == (LoadingScreen *)640 ) /*0x72e6c2*/
    DrawToSurfaceSHP( /*0x72e6ec*/
      (int)a1,
      *(int *)&g_BuildingLoadQueue_Array.__pad_F70[1052],
      *(int *)&g_BuildingLoadQueue_Array.__pad_F70[824],
      0,
      &v12,
      v14,
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
  else
    DrawToSurfaceSHP( /*0x72e71f*/
      (int)a1,
      *(int *)&g_BuildingLoadQueue_Array.__pad_F70[1052],
      *(int *)&g_BuildingLoadQueue_Array.__pad_F70[676],
      0,
      &v12,
      v14,
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



// ==== 0x0072E730  UI_Draw_72E730  this=Buffer  sig=csp ====
void __fastcall sub_72E730(int a1, int *a2, int a3, int a4, int a5)
{
  int v5; // esi
  int v6; // eax
  int v7; // eax
  int v8; // [esp+0h] [ebp-18h] BYREF
  int v9; // [esp+4h] [ebp-14h]
  int v10[2]; // [esp+8h] [ebp-10h] BYREF
  int v11; // [esp+10h] [ebp-8h]
  int v12; // [esp+14h] [ebp-4h]

  v5 = a2[3]; /*0x72e736*/
  v10[0] = *a2; /*0x72e739*/
  v6 = a2[1]; /*0x72e73d*/
  v8 = 0; /*0x72e740*/
  v10[1] = v6; /*0x72e748*/
  v7 = a2[2]; /*0x72e74c*/
  v9 = 0; /*0x72e754*/
  v11 = v7; /*0x72e75c*/
  v12 = v5; /*0x72e760*/
  if ( v7 > 800 ) /*0x72e764*/
    v11 = (v7 - 800) / 2 + 800; /*0x72e775*/
  if ( v5 > 600 ) /*0x72e77f*/
    v12 = (v5 - 600) / 2 + 600; /*0x72e791*/
  v8 = *(_DWORD *)dword_B0FC1C; /*0x72e79d*/
  v9 = *((_DWORD *)dword_B0FC1C + 1); /*0x72e7a4*/
  if ( g_DisplayWidth == 640 ) /*0x72e7b2*/
    DrawToSurfaceSHP(a1, a3, a4, 0, &v8, v10, 1024, 0, 0, 0, 1000, 0, 0, 0, 0, 0); /*0x72e7df*/
  else
    DrawToSurfaceSHP(a1, a3, a5, 0, &v8, v10, 1024, 0, 0, 0, 1000, 0, 0, 0, 0, 0); /*0x72e815*/
}



// ==== 0x0072E820  Render_Draw  this=-  sig=csp ====
void __fastcall sub_72E820(int a1, int *a2, char a3)
{
  RenderScoreScreen(a1, a2, a3); /*0x72e82b*/
  UI_Draw_72E730(a1, a2, dword_B0FBCC, (int)dword_B0FB50, (int)dword_B0FA04); /*0x72e848*/
}



// ==== 0x0072E860  UI_Draw_72E860  this=Buffer  sig=csp ====
void __fastcall UI_Draw_72E860(int a1, int *a2)
{
  int v2; // [esp+8h] [ebp-8h] BYREF
  int v3; // [esp+Ch] [ebp-4h]

  v2 = 0; /*0x72e86c*/
  v3 = 0; /*0x72e870*/
  v2 = *(_DWORD *)dword_B0FC14; /*0x72e877*/
  v3 = *((_DWORD *)dword_B0FC14 + 1); /*0x72e87e*/
  DrawToSurfaceSHP(a1, dword_B0FBCC, (int)dword_B0F9DC, 0, &v2, a2, 1024, 0, 0, 0, 1000, 0, 0, 0, 0, 0); /*0x72e8a8*/
}



// ==== 0x0072E8C0  UI_Draw_72E8C0  this=Buffer  sig=csp ====
void __fastcall UI_Draw_72E8C0(int a1, int *a2)
{
  int v2; // [esp+8h] [ebp-8h] BYREF
  int v3; // [esp+Ch] [ebp-4h]

  v2 = 0; /*0x72e8cc*/
  v3 = 0; /*0x72e8d0*/
  v2 = *(_DWORD *)dword_B0FC20; /*0x72e8d7*/
  v3 = *((_DWORD *)dword_B0FC20 + 1); /*0x72e8de*/
  DrawToSurfaceSHP(a1, dword_B0FBCC, (int)dword_B0FAF8, 1u, &v2, a2, 1024, 0, 0, 0, 1000, 0, 0, 0, 0, 0); /*0x72e909*/
}



// ==== 0x0072E920  UI_Draw_72E920  this=Buffer  sig=csp ====
void __fastcall UI_Draw_72E920(int a1, int *a2)
{
  int v2; // edi
  int v3; // [esp+8h] [ebp-8h] BYREF
  int v4; // [esp+Ch] [ebp-4h]

  v3 = 0; /*0x72e92c*/
  v4 = 0; /*0x72e930*/
  v2 = *(_DWORD *)dword_B0FC1C; /*0x72e934*/
  v3 = *(_DWORD *)dword_B0FC1C; /*0x72e936*/
  v4 = *((_DWORD *)dword_B0FC1C + 1); /*0x72e93d*/
  if ( g_DisplayWidth >= 800 ) /*0x72e94b*/
    v3 = v2 + 80; /*0x72e952*/
  DrawToSurfaceSHP(a1, dword_B0FBA8, (int)dword_B0FB00, 0, &v3, a2, 1024, 0, 0, 0, 1000, 0, 0, 0, 0, 0); /*0x72e97d*/
}



// ==== 0x0072E990  sub_72E990  this=-  sig=ida-proto ====
void __fastcall sub_72E990(int a1, int *a2)
{
  int v2; // [esp+8h] [ebp-8h] BYREF
  int v3; // [esp+Ch] [ebp-4h]

  v2 = 0; /*0x72e99c*/
  v3 = 0; /*0x72e9a0*/
  v2 = *(_DWORD *)dword_B0FC1C; /*0x72e9a7*/
  v3 = *((_DWORD *)dword_B0FC1C + 1); /*0x72e9ae*/
  DrawToSurfaceSHP(a1, dword_B0FBA8, (int)dword_B0FB34, 0, &v2, a2, 1024, 0, 0, 0, 1000, 0, 0, 0, 0, 0); /*0x72e9d8*/
}



// ==== 0x0072E9F0  Map_Load_72E9F0  this=ObjectClass  sig=csp ====
void __fastcall Map_Load_72E9F0(int *a1, int *a2)
{
  int v4; // [esp+8h] [ebp-8h] BYREF
  int v5; // [esp+Ch] [ebp-4h]

  DrawScoreScreenStats(a1, (int)a2); /*0x72e9f9*/
  RenderScoreScreen(a1, a2, 0); /*0x72ea04*/
  v4 = 0; /*0x72ea0e*/
  v5 = 0; /*0x72ea16*/
  v4 = *(_DWORD *)dword_B0FC1C; /*0x72ea20*/
  v5 = *((_DWORD *)dword_B0FC1C + 1); /*0x72ea4a*/
  DrawToSurfaceSHP((int)a1, dword_B0FBA8, (int)dword_B0FB34, 0, &v4, a2, 1024, 0, 0, 0, 1000, 0, 0, 0, 0, 0); /*0x72ea57*/
}



// ==== 0x0072EA70  sub_72EA70  this=-  sig=ida-proto ====
void __fastcall sub_72EA70(int a1, int *a2)
{
  int v2; // [esp+8h] [ebp-8h] BYREF
  int v3; // [esp+Ch] [ebp-4h]

  v2 = 0; /*0x72ea7c*/
  v3 = 0; /*0x72ea80*/
  v2 = *(_DWORD *)dword_B0FC1C; /*0x72ea87*/
  v3 = *((_DWORD *)dword_B0FC1C + 1); /*0x72ea8e*/
  DrawToSurfaceSHP(a1, dword_B0FBB4, (int)dword_B0FB1C, 0, &v2, a2, 1024, 0, 0, 0, 1000, 0, 0, 0, 0, 0); /*0x72eab8*/
}



// ==== 0x0072EAD0  Map_Load_72EAD0  this=ObjectClass  sig=csp ====
void __fastcall Map_Load_72EAD0(int *a1, int *a2)
{
  int v4; // [esp+8h] [ebp-8h] BYREF
  int v5; // [esp+Ch] [ebp-4h]

  DrawScoreScreenStats(a1, (int)a2); /*0x72ead9*/
  RenderScoreScreen(a1, a2, 0); /*0x72eae4*/
  v4 = 0; /*0x72eaee*/
  v5 = 0; /*0x72eaf6*/
  v4 = *(_DWORD *)dword_B0FC1C; /*0x72eb00*/
  v5 = *((_DWORD *)dword_B0FC1C + 1); /*0x72eb2a*/
  DrawToSurfaceSHP((int)a1, dword_B0FBB4, (int)dword_B0FB1C, 0, &v4, a2, 1024, 0, 0, 0, 1000, 0, 0, 0, 0, 0); /*0x72eb37*/
}



// ==== 0x0072EB50  Render_Render_72EB50  this=-  sig=ida-proto ====
void *sub_72EB50()
{
  void *result; // eax

  dword_B0FAC4 = LoadFileSHP(off_844CD4, (bool *)&byte_B0FC95); /*0x72eb6b*/
  dword_B0F9DC = LoadFileSHP(off_844CD8, (bool *)&byte_B0FC96); /*0x72eb80*/
  dword_B0FAC0 = LoadFileSHP(off_844CDC, (bool *)&byte_B0FC97); /*0x72eb95*/
  dword_B0FB50 = LoadFileSHP(off_844CE0, (bool *)&byte_B0FC98); /*0x72ebaa*/
  dword_B0FA04 = LoadFileSHP(off_844CE4, (bool *)&byte_B0FC99); /*0x72ebbf*/
  dword_B0FAF8 = LoadFileSHP(off_844CE8, (bool *)&byte_B0FC9A); /*0x72ebd4*/
  dword_B0FA74 = LoadFileSHP(off_844CEC, (bool *)&byte_B0FC9B); /*0x72ebe9*/
  dword_B0FA38 = LoadFileSHP(off_844CF0, (bool *)&byte_B0FC9C); /*0x72ebfe*/
  dword_B0FAE8 = LoadFileSHP(off_844CF4, (bool *)&byte_B0FC9D); /*0x72ec13*/
  result = LoadFileSHP(off_844CF8, (bool *)&byte_B0FC9E); /*0x72ec18*/
  dword_B0FA54 = result; /*0x72ec1d*/
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
    v3 = *((__int16 *)dword_B0FB50 + 1); /*0x72ecff*/
  else
    v3 = *((__int16 *)dword_B0FA04 + 1); /*0x72ed05*/
  if ( a2 == 480 ) /*0x72ed0b*/
    v4 = *((__int16 *)dword_B0FB50 + 2); /*0x72ed0d*/
  else
    v4 = *((__int16 *)dword_B0FA04 + 2); /*0x72ed13*/
  v5 = (int *)__2_YAPAXI_Z(0x10u); /*0x72ed19*/
  if ( v5 ) /*0x72ed23*/
  {
    v5[1] = v2; /*0x72ed29*/
    *v5 = v35; /*0x72ed2c*/
    v5[2] = v3; /*0x72ed2e*/
    v5[3] = v4; /*0x72ed31*/
    dword_B0FC1C = v5; /*0x72ed34*/
  }
  else
  {
    dword_B0FC1C = 0; /*0x72ed3b*/
  }
  v6 = *((__int16 *)dword_B0FAF8 + 1); /*0x72ed4c*/
  v7 = *((__int16 *)dword_B0FAF8 + 2); /*0x72ed50*/
  v8 = v34 - v6; /*0x72ed54*/
  v9 = __2_YAPAXI_Z(0x10u); /*0x72ed56*/
  if ( v9 ) /*0x72ed60*/
  {
    *v9 = v8; /*0x72ed62*/
    v9[1] = v2; /*0x72ed64*/
    v9[2] = v6; /*0x72ed67*/
    v9[3] = v7; /*0x72ed6a*/
    dword_B0FC20 = v9; /*0x72ed6d*/
  }
  else
  {
    dword_B0FC20 = 0; /*0x72ed74*/
  }
  v10 = *((__int16 *)dword_B0FAC0 + 2); /*0x72ed86*/
  v11 = __2_YAPAXI_Z(0x10u); /*0x72ed8a*/
  if ( v11 ) /*0x72ed94*/
  {
    *v11 = v8; /*0x72ed96*/
    v11[1] = v2; /*0x72ed98*/
    v11[2] = v6; /*0x72ed9b*/
    v11[3] = v10; /*0x72ed9e*/
    dword_B0FC18 = v11; /*0x72eda1*/
  }
  else
  {
    dword_B0FC18 = 0; /*0x72eda8*/
  }
  v12 = v2 + *((_DWORD *)dword_B0FC20 + 3); /*0x72edc2*/
  v13 = *((__int16 *)dword_B0FA74 + 2); /*0x72edc4*/
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
  dword_B0FC24 = v14; /*0x72ede9*/
  v15 = v14[1]; /*0x72edf1*/
  v16 = *((__int16 *)dword_B0FAC4 + 1); /*0x72edf4*/
  v17 = *((__int16 *)dword_B0FAC4 + 2); /*0x72edf8*/
  v18 = *v14 + v14[2] - v16; /*0x72ee02*/
  v19 = (int *)__2_YAPAXI_Z(0x10u); /*0x72ee04*/
  if ( v19 ) /*0x72ee0e*/
  {
    *v19 = v18; /*0x72ee10*/
    v19[1] = v15; /*0x72ee12*/
    v19[2] = v16; /*0x72ee15*/
    v19[3] = v17; /*0x72ee18*/
    dword_B0FC10 = v19; /*0x72ee1b*/
  }
  else
  {
    dword_B0FC10 = 0; /*0x72ee22*/
  }
  v20 = *((__int16 *)dword_B0F9DC + 1); /*0x72ee33*/
  v21 = *((__int16 *)dword_B0F9DC + 2); /*0x72ee37*/
  v22 = *((_DWORD *)dword_B0FC24 + 1) + *((_DWORD *)dword_B0FC24 + 3) - v21; /*0x72ee48*/
  v23 = __2_YAPAXI_Z(0x10u); /*0x72ee4a*/
  if ( v23 ) /*0x72ee54*/
  {
    v23[1] = v22; /*0x72ee5a*/
    v23[2] = v20; /*0x72ee5f*/
    *v23 = v34 - v20; /*0x72ee62*/
    v23[3] = v21; /*0x72ee64*/
    dword_B0FC14 = v23; /*0x72ee67*/
  }
  else
  {
    dword_B0FC14 = 0; /*0x72ee6e*/
  }
  dword_B0FA20 = (v36 - *((_DWORD *)dword_B0FC20 + 3)) / *((_DWORD *)dword_B0FC24 + 3); /*0x72ee95*/
  v24 = dword_B0FA20 * *((_DWORD *)dword_B0FC24 + 3); /*0x72ee9d*/
  v25 = v24 + *((_DWORD *)dword_B0FC20 + 3); /*0x72eeab*/
  v26 = *((__int16 *)dword_B0FA38 + 1); /*0x72eead*/
  v27 = v24 + *((_DWORD *)dword_B0FC24 + 1); /*0x72eeb1*/
  v28 = __2_YAPAXI_Z(0x10u); /*0x72eeb3*/
  if ( v28 ) /*0x72eebd*/
  {
    v28[1] = v27; /*0x72eec3*/
    *v28 = v34 - v26; /*0x72eeca*/
    v28[2] = v26; /*0x72eecc*/
    v28[3] = v36 - v25; /*0x72eecf*/
    dword_B0FC28 = v28; /*0x72eed2*/
  }
  else
  {
    dword_B0FC28 = 0; /*0x72eed9*/
  }
  if ( v32 ) /*0x72eef4*/
    v29 = *((__int16 *)dword_B0FAE8 + 1); /*0x72eef6*/
  else
    v29 = *((__int16 *)dword_B0FA54 + 1); /*0x72eefc*/
  if ( v33 ) /*0x72ef06*/
    v30 = *((__int16 *)dword_B0FAE8 + 2); /*0x72ef08*/
  else
    v30 = *((__int16 *)dword_B0FA54 + 2); /*0x72ef0e*/
  result = (int *)__2_YAPAXI_Z(0x10u); /*0x72ef14*/
  if ( result ) /*0x72ef1e*/
  {
    result[2] = v29; /*0x72ef24*/
    *result = v35; /*0x72ef27*/
    result[3] = v30; /*0x72ef2f*/
    result[1] = v37 - v30; /*0x72ef34*/
    dword_B0FC2C = result; /*0x72ef38*/
  }
  else
  {
    dword_B0FC2C = 0; /*0x72ef45*/
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

  if ( byte_B0FC95 ) /*0x72ef6b*/
  {
    v0 = dword_B0FAC4; /*0x72ef6d*/
    if ( dword_B0FAC4 ) /*0x72ef75*/
    {
      FileTreeNode::Destroy(dword_B0FAC4); /*0x72ef79*/
      __3_YAXPAX_Z(v0); /*0x72ef7f*/
    }
    byte_B0FC95 = 0; /*0x72ef87*/
  }
  dword_B0FAC4 = 0; /*0x72ef92*/
  if ( byte_B0FC96 ) /*0x72ef9a*/
  {
    v1 = dword_B0F9DC; /*0x72ef9c*/
    if ( dword_B0F9DC ) /*0x72efa4*/
    {
      FileTreeNode::Destroy(dword_B0F9DC); /*0x72efa8*/
      __3_YAXPAX_Z(v1); /*0x72efae*/
    }
    byte_B0FC96 = 0; /*0x72efb6*/
  }
  dword_B0F9DC = 0; /*0x72efc1*/
  if ( byte_B0FC97 ) /*0x72efc9*/
  {
    v2 = dword_B0FAC0; /*0x72efcb*/
    if ( dword_B0FAC0 ) /*0x72efd3*/
    {
      FileTreeNode::Destroy(dword_B0FAC0); /*0x72efd7*/
      __3_YAXPAX_Z(v2); /*0x72efdd*/
    }
    byte_B0FC97 = 0; /*0x72efe5*/
  }
  dword_B0FAC0 = 0; /*0x72eff0*/
  if ( byte_B0FC98 ) /*0x72eff8*/
  {
    v3 = dword_B0FB50; /*0x72effa*/
    if ( dword_B0FB50 ) /*0x72f002*/
    {
      FileTreeNode::Destroy(dword_B0FB50); /*0x72f006*/
      __3_YAXPAX_Z(v3); /*0x72f00c*/
    }
    byte_B0FC98 = 0; /*0x72f014*/
  }
  dword_B0FB50 = 0; /*0x72f01f*/
  if ( byte_B0FC99 ) /*0x72f027*/
  {
    v4 = dword_B0FA04; /*0x72f029*/
    if ( dword_B0FA04 ) /*0x72f031*/
    {
      FileTreeNode::Destroy(dword_B0FA04); /*0x72f035*/
      __3_YAXPAX_Z(v4); /*0x72f03b*/
    }
    byte_B0FC99 = 0; /*0x72f043*/
  }
  dword_B0FA04 = 0; /*0x72f04e*/
  if ( byte_B0FC9A ) /*0x72f056*/
  {
    v5 = dword_B0FAF8; /*0x72f058*/
    if ( dword_B0FAF8 ) /*0x72f060*/
    {
      FileTreeNode::Destroy(dword_B0FAF8); /*0x72f064*/
      __3_YAXPAX_Z(v5); /*0x72f06a*/
    }
    byte_B0FC9A = 0; /*0x72f072*/
  }
  dword_B0FAF8 = 0; /*0x72f07d*/
  if ( byte_B0FC9B ) /*0x72f085*/
  {
    v6 = dword_B0FA74; /*0x72f087*/
    if ( dword_B0FA74 ) /*0x72f08f*/
    {
      FileTreeNode::Destroy(dword_B0FA74); /*0x72f093*/
      __3_YAXPAX_Z(v6); /*0x72f099*/
    }
    byte_B0FC9B = 0; /*0x72f0a1*/
  }
  dword_B0FA74 = 0; /*0x72f0ac*/
  if ( byte_B0FC9C ) /*0x72f0b4*/
  {
    v7 = dword_B0FA38; /*0x72f0b6*/
    if ( dword_B0FA38 ) /*0x72f0be*/
    {
      FileTreeNode::Destroy(dword_B0FA38); /*0x72f0c2*/
      __3_YAXPAX_Z(v7); /*0x72f0c8*/
    }
    byte_B0FC9C = 0; /*0x72f0d0*/
  }
  dword_B0FA38 = 0; /*0x72f0db*/
  if ( byte_B0FC9D ) /*0x72f0e3*/
  {
    v8 = dword_B0FAE8; /*0x72f0e5*/
    if ( dword_B0FAE8 ) /*0x72f0ed*/
    {
      FileTreeNode::Destroy(dword_B0FAE8); /*0x72f0f1*/
      __3_YAXPAX_Z(v8); /*0x72f0f7*/
    }
    byte_B0FC9D = 0; /*0x72f0ff*/
  }
  dword_B0FAE8 = 0; /*0x72f10a*/
  if ( byte_B0FC9E ) /*0x72f112*/
  {
    v9 = dword_B0FA54; /*0x72f114*/
    if ( dword_B0FA54 ) /*0x72f11c*/
    {
      FileTreeNode::Destroy(dword_B0FA54); /*0x72f120*/
      __3_YAXPAX_Z(v9); /*0x72f126*/
    }
    byte_B0FC9E = 0; /*0x72f12e*/
  }
  dword_B0FA54 = 0; /*0x72f134*/
}



// ==== 0x0072F140  LoadingScreen::CleanupObjects  this=LoadingScreen  sig=csp ====
void LoadingScreen::CleanupObjects(LoadingScreen *this)
{
  if ( *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[1048] ) /*0x72f14a*/
  {
    __3_YAXPAX_Z(*(void **)&g_BuildingLoadQueue_Array.__pad_F70[1048]); /*0x72f14d*/
    *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[1048] = 0; /*0x72f155*/
  }
  if ( *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[1052] ) /*0x72f163*/
  {
    (***(void (__thiscall ****)(_DWORD, int))&g_BuildingLoadQueue_Array.__pad_F70[1052])( /*0x72f169*/
      *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[1052],
      1);
    *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[1052] = 0; /*0x72f16b*/
  }
  if ( *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[1056] ) /*0x72f178*/
  {
    __3_YAXPAX_Z(*(void **)&g_BuildingLoadQueue_Array.__pad_F70[1056]); /*0x72f17b*/
    *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[1056] = 0; /*0x72f183*/
  }
  if ( *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[1060] ) /*0x72f191*/
  {
    (***(void (__thiscall ****)(_DWORD, int))&g_BuildingLoadQueue_Array.__pad_F70[1060])( /*0x72f197*/
      *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[1060],
      1);
    *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[1060] = 0; /*0x72f199*/
  }
  if ( *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[1064] ) /*0x72f1a6*/
  {
    __3_YAXPAX_Z(*(void **)&g_BuildingLoadQueue_Array.__pad_F70[1064]); /*0x72f1a9*/
    *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[1064] = 0; /*0x72f1b1*/
  }
  if ( *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[1068] ) /*0x72f1bf*/
  {
    (***(void (__thiscall ****)(_DWORD, int))&g_BuildingLoadQueue_Array.__pad_F70[1068])( /*0x72f1c5*/
      *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[1068],
      1);
    *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[1068] = 0; /*0x72f1c7*/
  }
}



// ==== 0x0072F350  House_Load  this=-  sig=ida-proto ====
_DWORD *sub_72F350()
{
  _DWORD *result; // eax

  FileTree::CleanupAll(); /*0x72f350*/
  LoadingScreen::FreeResources(); /*0x72f355*/
  LoadingScreen::FreeResources2(); /*0x72f35a*/
  byte_B0FC0C = 0; /*0x72f35f*/
  LoadingScreen::LoadSHPs(); /*0x72f366*/
  if ( *((_DWORD *)dword_A8B230 + 3374) == 2 ) /*0x72f377*/
  {
    LoadPaletteSimple(off_844BF8, &dword_B0FBEC, &dword_B0FBF0); /*0x72f389*/
    LoadPaletteSimple(off_844BFC[0], &dword_B0FBF4, &dword_B0FBF8); /*0x72f39e*/
  }
  else
  {
    LoadPaletteSimple(off_844C00, &dword_B0FBF4, &dword_B0FBF8); /*0x72f3b0*/
    LoadPaletteSimple(off_844BF4, &dword_B0FBEC, &dword_B0FBF0); /*0x72f3c5*/
  }
  LoadPaletteSimple(off_844BF0, &dword_B0FBE4, &dword_B0FBE8); /*0x72f3da*/
  LoadPaletteSimple(off_844C04, &dword_B0FBFC, &dword_B0FC00); /*0x72f3ef*/
  LoadPaletteSimple(off_844C08, &dword_B0FC04, &dword_B0FC08); /*0x72f404*/
  result = SetupScreenBuffers(dword_A8EB84, dword_A8EB88); /*0x72f415*/
  byte_B0FC0C = 1; /*0x72f41a*/
  return result; /*0x72f421*/
}



// ==== 0x0072F430  UI_Init_72F430  this=-  sig=ida-proto ====
char sub_72F430()
{
  return byte_B0FC0C; /*0x72f435*/
}



// ==== 0x0072F440  Game::InitializeToolTipColor  this=Game  sig=csp ====
char __thiscall Game::InitializeToolTipColor(Game *this)
{
  char result; // al

  if ( this ) /*0x72f442*/
  {
    if ( this == (Game *)1 ) /*0x72f460*/
    {
      *(_WORD *)&g_BuildingLoadQueue_Array.__pad_F70[620] = *(_WORD *)&g_BuildingLoadQueue_Array.__pad_F70[852]; /*0x72f46e*/
      g_BuildingLoadQueue_Array.__pad_F70[622] = g_BuildingLoadQueue_Array.__pad_F70[854]; /*0x72f475*/
      return g_BuildingLoadQueue_Array.__pad_F70[854]; /*0x72f469*/
    }
    else
    {
      *(_WORD *)&g_BuildingLoadQueue_Array.__pad_F70[620] = *(_WORD *)&g_BuildingLoadQueue_Array.__pad_F70[752]; /*0x72f488*/
      g_BuildingLoadQueue_Array.__pad_F70[622] = g_BuildingLoadQueue_Array.__pad_F70[754]; /*0x72f48f*/
    }
  }
  else
  {
    *(_WORD *)&g_BuildingLoadQueue_Array.__pad_F70[620] = *(_WORD *)&g_BuildingLoadQueue_Array.__pad_F70[552]; /*0x72f450*/
    g_BuildingLoadQueue_Array.__pad_F70[622] = g_BuildingLoadQueue_Array.__pad_F70[554]; /*0x72f456*/
    return g_BuildingLoadQueue_Array.__pad_F70[552]; /*0x72f444*/
  }
  return result; /*0x72f45c*/
}



// ==== 0x0072F4A0  UI_Load_72F4A0  this=-  sig=ida-proto ====
void *sub_72F4A0()
{
  return dword_B0FBE4; /*0x72f4a5*/
}



// ==== 0x0072F4B0  UI_Helper_72F4B0  this=-  sig=ida-proto ====
int sub_72F4B0()
{
  return dword_B0FBE8; /*0x72f4b5*/
}



// ==== 0x0072F4C0  sub_72F4C0  this=-  sig=ida-proto ====
void *sub_72F4C0()
{
  return dword_B0FC04; /*0x72f4c5*/
}



// ==== 0x0072F4D0  UI_Update_72F4D0  this=-  sig=ida-proto ====
int sub_72F4D0()
{
  return dword_B0FC08; /*0x72f4d5*/
}



// ==== 0x0072F4E0  UI_Load_72F4E0  this=-  sig=ida-proto ====
void *sub_72F4E0()
{
  return dword_B0FBFC; /*0x72f4e5*/
}



// ==== 0x0072F4F0  sub_72F4F0  this=-  sig=ida-proto ====
int sub_72F4F0()
{
  return dword_B0FC00; /*0x72f4f5*/
}



// ==== 0x0072F500  sub_72F500  this=-  sig=ida-proto ====
void *sub_72F500()
{
  return dword_B0FBF4; /*0x72f505*/
}



// ==== 0x0072F510  VtableStub::72F510  this=VtableStub  sig=ida-proto ====
int VtableStub::72F510()
{
  return dword_B0FBF8; /*0x72f515*/
}



// ==== 0x0072F520  sub_72F520  this=-  sig=ida-proto ====
void *sub_72F520()
{
  return dword_B0FBEC; /*0x72f525*/
}



// ==== 0x0072F530  sub_72F530  this=-  sig=ida-proto ====
int sub_72F530()
{
  return dword_B0FBF0; /*0x72f535*/
}



// ==== 0x0072F540  RenderCreditsScreen  this=Buffer  sig=csp ====
void __fastcall RenderCreditsScreen(int a1, int *a2, char a3)
{
  int v5; // ebp
  int v6; // edx
  int v7; // ebp
  int v8; // [esp+10h] [ebp-28h] BYREF
  int i; // [esp+14h] [ebp-24h]
  int v10[2]; // [esp+18h] [ebp-20h] BYREF
  int v11; // [esp+20h] [ebp-18h]
  int v12; // [esp+24h] [ebp-14h]
  int v13; // [esp+28h] [ebp-10h]
  int v14; // [esp+2Ch] [ebp-Ch]
  int v15; // [esp+34h] [ebp-4h]

  if ( !byte_B0FC0C ) /*0x72f552*/
  {
    LoadingScreen::LoadSHPs(); /*0x72f554*/
    Sides::MixFileYuriFiles3(); /*0x72f559*/
    SetupScreenBuffers(dword_A8EB84, dword_A8EB88); /*0x72f56a*/
    byte_B0FC0C = 1; /*0x72f56f*/
  }
  (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)a1 + 24))(a1, 0); /*0x72f57d*/
  v8 = 0; /*0x72f585*/
  i = 0; /*0x72f589*/
  v8 = *(_DWORD *)dword_B0FC30; /*0x72f58f*/
  i = *((_DWORD *)dword_B0FC30 + 1); /*0x72f59b*/
  if ( g_DisplayWidth == 640 ) /*0x72f5a4*/
  {
    DrawToSurfaceSHP(a1, dword_B0FBF0, (int)dword_B0FAD4, 0, &v8, a2, 1024, 0, 0, 0, 1000, 0, 0, 0, 0, 0); /*0x72f5ca*/
  }
  else if ( g_DisplayWidth == 800 ) /*0x72f5d1*/
  {
    DrawToSurfaceSHP(a1, dword_B0FBF0, (int)dword_B0FAC8, 0, &v8, a2, 1024, 0, 0, 0, 1000, 0, 0, 0, 0, 0); /*0x72f5f6*/
  }
  else
  {
    DrawToSurfaceSHP(a1, dword_B0FBF0, (int)dword_B0FA50, 0, &v8, a2, 1024, 0, 0, 0, 1000, 0, 0, 0, 0, 0); /*0x72f624*/
  }
  v8 = *(_DWORD *)dword_B0FC34; /*0x72f630*/
  i = *((_DWORD *)dword_B0FC34 + 1); /*0x72f65a*/
  DrawToSurfaceSHP(a1, dword_B0FBE8, (int)dword_B0FB08, 0, &v8, a2, 1024, 0, 0, 0, 1000, 0, 0, 0, 0, 0); /*0x72f667*/
  v8 = *(_DWORD *)dword_B0FC38; /*0x72f67a*/
  i = *((_DWORD *)dword_B0FC38 + 1); /*0x72f681*/
  DrawToSurfaceSHP(a1, dword_B0FBE8, (int)dword_B0F9E0, 0, &v8, a2, 1024, 0, 0, 0, 1000, 0, 0, 0, 0, 0); /*0x72f6aa*/
  v8 = *(_DWORD *)dword_B0FC3C; /*0x72f6b6*/
  i = *((_DWORD *)dword_B0FC3C + 1); /*0x72f6e0*/
  DrawToSurfaceSHP(a1, dword_B0FBF8, (int)dword_B0FA68, 0, &v8, a2, 1024, 0, 0, 0, 1000, 0, 0, 0, 0, 0); /*0x72f6ed*/
  v8 = *(_DWORD *)dword_B0FC44; /*0x72f700*/
  i = *((_DWORD *)dword_B0FC44 + 1); /*0x72f707*/
  DrawToSurfaceSHP(a1, dword_B0FBE8, (int)dword_B0FA70, 0, &v8, a2, 1024, 0, 0, 0, 1000, 0, 0, 0, 0, 0); /*0x72f730*/
  v5 = 0; /*0x72f73a*/
  v8 = *(_DWORD *)dword_B0FC48; /*0x72f73e*/
  for ( i = *((_DWORD *)dword_B0FC48 + 1); v5 < dword_B0FADC; i += *((_DWORD *)dword_B0FC48 + 3) ) /*0x72f750*/
  {
    DrawToSurfaceSHP(a1, dword_B0FBE8, (int)dword_B0FA00, 0, &v8, a2, 1024, 0, 0, 0, 1000, 0, 0, 0, 0, 0); /*0x72f77d*/
    ++v5; /*0x72f796*/
  }
  v8 = *(_DWORD *)dword_B0FC4C; /*0x72f7a6*/
  i = *((_DWORD *)dword_B0FC4C + 1); /*0x72f7d0*/
  DrawToSurfaceSHP(a1, dword_B0FBE8, (int)dword_B0FA8C, 0, &v8, a2, 1024, 0, 0, 0, 1000, 0, 0, 0, 0, 0); /*0x72f7dd*/
  v8 = *(_DWORD *)dword_B0FC50; /*0x72f7ec*/
  i = *((_DWORD *)dword_B0FC50 + 1); /*0x72f7f3*/
  DrawToSurfaceSHP(a1, dword_B0FBE8, (int)dword_B0FA48, 0, &v8, a2, 1024, 0, 0, 0, 1000, 0, 0, 0, 0, 0); /*0x72f820*/
  v10[0] = *a2; /*0x72f829*/
  v10[1] = a2[1]; /*0x72f830*/
  v11 = a2[2]; /*0x72f837*/
  v6 = a2[3]; /*0x72f841*/
  v13 = dword_886FB0; /*0x72f849*/
  v12 = v6; /*0x72f857*/
  v11 = dword_886FB8 - 168; /*0x72f861*/
  v14 = dword_886FB4; /*0x72f86a*/
  v15 = dword_886FBC; /*0x72f86e*/
  v8 = *(_DWORD *)dword_B0FC5C; /*0x72f874*/
  i = *((_DWORD *)dword_B0FC5C + 1); /*0x72f882*/
  DrawToSurfaceSHP(a1, dword_B0FBE8, (int)dword_B0FA3C, 0, &v8, v10, 1024, 0, 0, 0, 1000, 0, 0, 0, 0, 0); /*0x72f8b0*/
  if ( a3 ) /*0x72f8bb*/
  {
    v8 = *(_DWORD *)dword_B0FC60; /*0x72f8c8*/
    i = *((_DWORD *)dword_B0FC60 + 1); /*0x72f8f3*/
    DrawToSurfaceSHP(a1, dword_B0FBE8, (int)dword_B0FA90, 2u, &v8, a2, 1024, 0, 0, 0, 1000, 0, 0, 0, 0, 0); /*0x72f900*/
    v7 = 0; /*0x72f90a*/
    v8 = *(_DWORD *)dword_B0FC68; /*0x72f90e*/
    for ( i = *((_DWORD *)dword_B0FC68 + 1); v7 < dword_B0F9E4; v8 += *((_DWORD *)dword_B0FC68 + 2) ) /*0x72f920*/
    {
      DrawToSurfaceSHP(a1, dword_B0FBE8, (int)dword_B0FAA8, 0, &v8, a2, 1024, 0, 0, 0, 1000, 0, 0, 0, 0, 0); /*0x72f952*/
      ++v7; /*0x72f96a*/
    }
  }
  else
  {
    v8 = *(_DWORD *)dword_B0FC64; /*0x72f97f*/
    i = *((_DWORD *)dword_B0FC64 + 1); /*0x72f986*/
    DrawToSurfaceSHP(a1, dword_B0FBE8, (int)dword_B0FA90, 2u, &v8, a2, 1024, 0, 0, 0, 1000, 0, 0, 0, 0, 0); /*0x72f9b4*/
  }
  v8 = *(_DWORD *)dword_B0FC6C; /*0x72f9c0*/
  i = *((_DWORD *)dword_B0FC6C + 1); /*0x72f9ea*/
  DrawToSurfaceSHP(a1, dword_B0FBE8, (int)dword_B0FABC, 0, &v8, a2, 1024, 0, 0, 0, 1000, 0, 0, 0, 0, 0); /*0x72f9f7*/
}



// ==== 0x0072FA10  LoadingScreen::LoadSHPs  this=LoadingScreen  sig=ida-proto ====
void *LoadingScreen_LoadSHPs()
{
  void *SHP; // eax
  char *v1; // ecx
  void *result; // eax

  if ( *((_DWORD *)dword_A8B230 + 3374) == 2 ) /*0x72fa21*/
  {
    dword_B0FA68 = LoadFileSHP(off_844D48, (bool *)&byte_B0FCA5); /*0x72fa39*/
    dword_B0FAC8 = LoadFileSHP(off_844D3C, (bool *)&byte_B0FCA1); /*0x72fa4e*/
    SHP = LoadFileSHP(off_844D40, (bool *)&byte_B0FCA0); /*0x72fa53*/
    v1 = off_844D44[0]; /*0x72fa58*/
  }
  else
  {
    dword_B0FA68 = LoadFileSHP(off_844D14, (bool *)&byte_B0FCA5); /*0x72fa80*/
    dword_B0FAC8 = LoadFileSHP(off_844D04, (bool *)&byte_B0FCA1); /*0x72fa95*/
    SHP = LoadFileSHP(off_844D00, (bool *)&byte_B0FCA0); /*0x72fa9a*/
    v1 = off_844D08; /*0x72fa9f*/
  }
  dword_B0FAD4 = SHP; /*0x72fa5e*/
  dword_B0FA50 = LoadFileSHP(v1, (bool *)&byte_B0FCA2); /*0x72fabf*/
  dword_B0F9EC = LoadFileSHP(off_844CFC, (bool *)&byte_B0FC9F); /*0x72fad4*/
  dword_B0FB08 = LoadFileSHP(off_844D0C, (bool *)&byte_B0FCA3); /*0x72fae9*/
  dword_B0F9E0 = LoadFileSHP(off_844D10, (bool *)&byte_B0FCA4); /*0x72fafe*/
  dword_B0FA70 = LoadFileSHP(off_844D18, (bool *)&byte_B0FCA6); /*0x72fb13*/
  dword_B0FAFC = LoadFileSHP(off_844D1C, (bool *)&byte_B0FCA7); /*0x72fb28*/
  dword_B0FA00 = LoadFileSHP(off_844D20, (bool *)&byte_B0FCA8); /*0x72fb3d*/
  dword_B0FA8C = LoadFileSHP(off_844D24, (bool *)&byte_B0FCA9); /*0x72fb52*/
  dword_B0FA48 = LoadFileSHP(off_844D28, (bool *)&byte_B0FCAA); /*0x72fb67*/
  dword_B0FA3C = LoadFileSHP(off_844D2C, (bool *)&byte_B0FCAB); /*0x72fb7c*/
  dword_B0FA90 = LoadFileSHP(off_844D30, (bool *)&byte_B0FCAC); /*0x72fb91*/
  dword_B0FAA8 = LoadFileSHP(off_844D34, (bool *)&byte_B0FCAD); /*0x72fba6*/
  result = LoadFileSHP(off_844D38, (bool *)&byte_B0FCAE); /*0x72fbab*/
  dword_B0FABC = result; /*0x72fbb0*/
  return result; /*0x72fbb5*/
}



// ==== 0x0072FBC0  Sides::MixFileYuriFiles3  this=Sides  sig=ida-proto ====
int Sides::MixFileYuriFiles3()
{
  if ( *((_DWORD *)dword_A8B230 + 3374) == 2 ) /*0x72fbcc*/
  {
    LoadPaletteSimple(off_844BF8, &dword_B0FBEC, &dword_B0FBF0); /*0x72fbde*/
    LoadPaletteSimple(off_844BFC[0], &dword_B0FBF4, &dword_B0FBF8); /*0x72fbf3*/
  }
  else
  {
    LoadPaletteSimple(off_844C00, &dword_B0FBF4, &dword_B0FBF8); /*0x72fc05*/
    LoadPaletteSimple(off_844BF4, &dword_B0FBEC, &dword_B0FBF0); /*0x72fc1a*/
  }
  LoadPaletteSimple(off_844BF0, &dword_B0FBE4, &dword_B0FBE8); /*0x72fc2f*/
  LoadPaletteSimple(off_844C04, &dword_B0FBFC, &dword_B0FC00); /*0x72fc44*/
  return LoadPaletteSimple(off_844C08, &dword_B0FC04, &dword_B0FC08); /*0x72fc5e*/
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
    v3 = (__int16 *)dword_B0FAD4; /*0x72fc79*/
  }
  else
  {
    v3 = (__int16 *)dword_B0FAC8; /*0x72fc80*/
    if ( a1 != 800 ) /*0x72fc8b*/
      v3 = (__int16 *)dword_B0FA50; /*0x72fc8d*/
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
    dword_B0FC30 = v6; /*0x72fcb5*/
  }
  else
  {
    dword_B0FC30 = 0; /*0x72fcbc*/
  }
  v7 = *((__int16 *)dword_B0FB08 + 1); /*0x72fcc9*/
  v8 = *((__int16 *)dword_B0FB08 + 2); /*0x72fccd*/
  v9 = a1 - v7; /*0x72fcd1*/
  v10 = __2_YAPAXI_Z(0x10u); /*0x72fcd3*/
  if ( v10 ) /*0x72fcdd*/
  {
    *v10 = v9; /*0x72fcdf*/
    v10[1] = 0; /*0x72fce1*/
    v10[2] = v7; /*0x72fce4*/
    v10[3] = v8; /*0x72fce7*/
    dword_B0FC34 = v10; /*0x72fcea*/
  }
  else
  {
    dword_B0FC34 = 0; /*0x72fcf1*/
  }
  v11 = *((__int16 *)dword_B0F9E0 + 2); /*0x72fcfe*/
  v12 = __2_YAPAXI_Z(0x10u); /*0x72fd02*/
  if ( v12 ) /*0x72fd0c*/
  {
    *v12 = v9; /*0x72fd0e*/
    v12[1] = v8; /*0x72fd10*/
    v12[2] = v7; /*0x72fd13*/
    v12[3] = v11; /*0x72fd16*/
    dword_B0FC38 = v12; /*0x72fd19*/
  }
  else
  {
    dword_B0FC38 = 0; /*0x72fd20*/
  }
  v13 = v11 + v8; /*0x72fd30*/
  v14 = *((__int16 *)dword_B0FA68 + 2); /*0x72fd34*/
  v15 = __2_YAPAXI_Z(0x10u); /*0x72fd38*/
  if ( v15 ) /*0x72fd42*/
  {
    *v15 = v9; /*0x72fd44*/
    v15[1] = v13; /*0x72fd46*/
    v15[2] = v7; /*0x72fd49*/
    v15[3] = v14; /*0x72fd4c*/
    dword_B0FC3C = v15; /*0x72fd4f*/
  }
  else
  {
    dword_B0FC3C = 0; /*0x72fd56*/
  }
  v16 = v14 + v13; /*0x72fd66*/
  v17 = *((__int16 *)dword_B0FA70 + 2); /*0x72fd6a*/
  v18 = __2_YAPAXI_Z(0x10u); /*0x72fd6e*/
  if ( v18 ) /*0x72fd78*/
  {
    *v18 = v9; /*0x72fd7a*/
    v18[1] = v16; /*0x72fd7c*/
    v18[2] = v7; /*0x72fd7f*/
    v18[3] = v17; /*0x72fd82*/
    dword_B0FC44 = v18; /*0x72fd85*/
  }
  else
  {
    dword_B0FC44 = 0; /*0x72fd8c*/
  }
  v19 = v17 + v16; /*0x72fd9b*/
  v20 = *((__int16 *)dword_B0FAFC + 2); /*0x72fd9f*/
  v21 = __2_YAPAXI_Z(0x10u); /*0x72fda3*/
  if ( v21 ) /*0x72fdad*/
  {
    *v21 = v9; /*0x72fdaf*/
    v21[1] = v19; /*0x72fdb1*/
    v21[2] = v7; /*0x72fdb4*/
    v21[3] = v20; /*0x72fdb7*/
    dword_B0FC48 = v21; /*0x72fdba*/
  }
  else
  {
    dword_B0FC48 = 0; /*0x72fdc1*/
  }
  v22 = *((__int16 *)dword_B0FA8C + 2); /*0x72fdd3*/
  v23 = __2_YAPAXI_Z(0x10u); /*0x72fdd7*/
  if ( v23 ) /*0x72fde1*/
  {
    *v23 = v9; /*0x72fde3*/
    v23[1] = v19; /*0x72fde5*/
    v23[2] = v7; /*0x72fde8*/
    v23[3] = v22; /*0x72fdeb*/
    dword_B0FC4C = v23; /*0x72fdee*/
  }
  else
  {
    dword_B0FC4C = 0; /*0x72fdf5*/
  }
  v24 = *((__int16 *)dword_B0FA48 + 2); /*0x72fe07*/
  v25 = __2_YAPAXI_Z(0x10u); /*0x72fe0b*/
  if ( v25 ) /*0x72fe15*/
  {
    *v25 = v9; /*0x72fe17*/
    v25[1] = v19; /*0x72fe19*/
    v25[2] = v7; /*0x72fe1c*/
    v25[3] = v24; /*0x72fe1f*/
    dword_B0FC50 = v25; /*0x72fe22*/
  }
  else
  {
    dword_B0FC50 = 0; /*0x72fe29*/
  }
  dword_B0FADC = (a2 /*0x72fe7a*/
                - *((_DWORD *)dword_B0FC4C + 3)
                - *((_DWORD *)dword_B0FC44 + 3)
                - *((_DWORD *)dword_B0FC3C + 3)
                - *((_DWORD *)dword_B0FC38 + 3)
                - *((_DWORD *)dword_B0FC34 + 3))
               / *((_DWORD *)dword_B0FC48 + 3);
  v26 = *((_DWORD *)dword_B0FC48 + 3) * dword_B0FADC + v19; /*0x72fe83*/
  *((_DWORD *)dword_B0FC4C + 1) = v26; /*0x72fe85*/
  v27 = v26 + *((_DWORD *)dword_B0FC4C + 3); /*0x72fe96*/
  v28 = a2 - 32; /*0x72fe98*/
  *((_DWORD *)dword_B0FC50 + 1) = v27; /*0x72fe9b*/
  v29 = dword_A8EB84 - 168; /*0x72fea4*/
  v30 = __2_YAPAXI_Z(0x10u); /*0x72feaa*/
  if ( v30 ) /*0x72feb6*/
  {
    *v30 = 0; /*0x72feb8*/
    v30[1] = v28; /*0x72feba*/
    v30[2] = v29; /*0x72febd*/
    v30[3] = 32; /*0x72fec0*/
    dword_B0FC58 = v30; /*0x72fec7*/
  }
  else
  {
    dword_B0FC58 = 0; /*0x72fece*/
  }
  v31 = *((__int16 *)dword_B0FA3C + 1); /*0x72fedb*/
  v32 = *((__int16 *)dword_B0FA3C + 2); /*0x72fedf*/
  v33 = __2_YAPAXI_Z(0x10u); /*0x72fee3*/
  if ( v33 ) /*0x72feed*/
  {
    *v33 = 0; /*0x72feef*/
    v33[1] = v28; /*0x72fef1*/
    v33[2] = v31; /*0x72fef4*/
    v33[3] = v32; /*0x72fef7*/
    dword_B0FC5C = v33; /*0x72fefa*/
  }
  else
  {
    dword_B0FC5C = 0; /*0x72ff01*/
  }
  v34 = *((__int16 *)dword_B0FA90 + 1); /*0x72ff0e*/
  v35 = *((__int16 *)dword_B0FA90 + 2); /*0x72ff12*/
  v36 = __2_YAPAXI_Z(0x10u); /*0x72ff16*/
  if ( v36 ) /*0x72ff20*/
  {
    *v36 = 0; /*0x72ff22*/
    v36[1] = v28; /*0x72ff24*/
    v36[2] = v34; /*0x72ff27*/
    v36[3] = v35; /*0x72ff2a*/
    dword_B0FC60 = v36; /*0x72ff2d*/
  }
  else
  {
    dword_B0FC60 = 0; /*0x72ff34*/
  }
  v37 = __2_YAPAXI_Z(0x10u); /*0x72ff3c*/
  if ( v37 ) /*0x72ff46*/
  {
    *v37 = 0; /*0x72ff48*/
    v37[1] = v28; /*0x72ff4a*/
    v37[2] = v34; /*0x72ff4d*/
    v37[3] = v35; /*0x72ff50*/
    dword_B0FC64 = v37; /*0x72ff53*/
  }
  else
  {
    dword_B0FC64 = 0; /*0x72ff5a*/
  }
  v38 = *((__int16 *)dword_B0FAA8 + 1); /*0x72ff67*/
  v39 = *((__int16 *)dword_B0FAA8 + 2); /*0x72ff6b*/
  v40 = __2_YAPAXI_Z(0x10u); /*0x72ff6f*/
  if ( v40 ) /*0x72ff79*/
  {
    *v40 = 0; /*0x72ff7b*/
    v40[1] = v28; /*0x72ff7d*/
    v40[2] = v38; /*0x72ff80*/
    v40[3] = v39; /*0x72ff83*/
    dword_B0FC68 = v40; /*0x72ff86*/
  }
  else
  {
    dword_B0FC68 = 0; /*0x72ff8d*/
  }
  v41 = *((__int16 *)dword_B0FABC + 1); /*0x72ff9a*/
  v42 = *((__int16 *)dword_B0FABC + 2); /*0x72ff9e*/
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
  dword_B0FC6C = v44; /*0x72ffc9*/
  dword_B0F9E4 = (a1 - *((_DWORD *)dword_B0FC60 + 2) - *((_DWORD *)dword_B0FC34 + 2) - v44[2]) /*0x72ffee*/
               / *((_DWORD *)dword_B0FC68 + 2);
  v45 = *(_DWORD *)dword_B0FC34 - v44[2]; /*0x72fff5*/
  *v44 = v45; /*0x72fff8*/
  v46 = v45 - dword_B0F9E4 * *((_DWORD *)dword_B0FC68 + 2); /*0x73000a*/
  *(_DWORD *)dword_B0FC68 = v46; /*0x73000c*/
  v47 = v46 - *((_DWORD *)dword_B0FC60 + 2); /*0x730014*/
  *(_DWORD *)dword_B0FC60 = v47; /*0x730017*/
  dword_B0FAD8 = v47; /*0x73001f*/
  v48 = *(_DWORD *)dword_B0FC6C - *((_DWORD *)dword_B0FC64 + 2); /*0x73002e*/
  *(_DWORD *)dword_B0FC64 = v48; /*0x730030*/
  dword_B0FAA4 = v48; /*0x730038*/
  dword_B0FA78 = *(_DWORD *)dword_B0FC6C - *((_DWORD *)dword_B0FC60 + 2) - *(_DWORD *)dword_B0FC60; /*0x730058*/
  v49 = *(_DWORD *)dword_B0FC38; /*0x730064*/
  v50 = *((_DWORD *)dword_B0FC38 + 1); /*0x730066*/
  v51 = *((_DWORD *)dword_B0FC38 + 2); /*0x730069*/
  v52 = *((_DWORD *)dword_B0FC38 + 3) + *((_DWORD *)dword_B0FC3C + 3); /*0x73006c*/
  v53 = __2_YAPAXI_Z(0x10u); /*0x73006e*/
  if ( v53 ) /*0x730078*/
  {
    *v53 = v49; /*0x73007a*/
    v53[1] = v50; /*0x73007c*/
    v53[2] = v51; /*0x73007f*/
    v53[3] = v52; /*0x730082*/
    dword_B0FC40 = v53; /*0x730085*/
  }
  else
  {
    dword_B0FC40 = 0; /*0x73008c*/
  }
  v54 = *(_DWORD *)dword_B0FC44; /*0x7300b9*/
  v55 = *((_DWORD *)dword_B0FC44 + 1); /*0x7300bb*/
  v56 = *((_DWORD *)dword_B0FC44 + 2); /*0x7300be*/
  v57 = *((_DWORD *)dword_B0FC44 + 3) + *((_DWORD *)dword_B0FC4C + 3) + dword_B0FADC * *((_DWORD *)dword_B0FC48 + 3); /*0x7300c3*/
  result = __2_YAPAXI_Z(0x10u); /*0x7300c5*/
  if ( result ) /*0x7300cf*/
  {
    *result = v54; /*0x7300d1*/
    result[3] = v57; /*0x7300d3*/
    result[2] = v56; /*0x7300d7*/
    result[1] = v55; /*0x7300db*/
    dword_B0FC54 = result; /*0x7300df*/
  }
  else
  {
    dword_B0FC54 = 0; /*0x7300ec*/
  }
  return result; /*0x7300d6*/
}



// ==== 0x00720020  TextButtonClass::getCurrentWeapon  this=TextButtonClass  sig=csp ====
char __thiscall AbstractClass::getCurrentWeapon(TextButtonClass *this, int a2, char a3)
{
  int v4; // edx
  int v5; // eax
  int Instance; // edi

  v4 = *(_DWORD *)this->__pad_0; /*0x720027*/
  this->field_38 = a2; /*0x720029*/
  (*(void (**)(void))(v4 + 72))(); /*0x72002c*/
  LOBYTE(v5) = a3; /*0x72002f*/
  if ( a3 ) /*0x720035*/
  {
    v5 = this->field_38; /*0x720037*/
    if ( v5 ) /*0x72003c*/
    {
      Instance = TextRenderer::GetInstance(); /*0x720047*/
      v5 = Text::MeasureWidth(this->field_38, 0) + 8; /*0x720056*/
      *(_DWORD *)&this->__pad_0[20] = v5; /*0x720059*/
      *(_DWORD *)&this->__pad_0[24] = *(_DWORD *)(Instance + 28) + 2; /*0x720063*/
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
      v3 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)&stru_B054D0.m_1[3] + 4 * BuildingAnim::GetType()) + 780); /*0x720099*/
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
      (*(void (__thiscall **)(AudioStream *, int *, int))(*(_DWORD *)g_DSurface_Hidden_2->__pad_0 + 88))( /*0x7200f7*/
        g_DSurface_Hidden_2,
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
    if ( *(_DWORD *)stru_B054D0.__tail_10 ) /*0x720181*/
    {
      if ( (int)result <= 0 || (int)result >= *(int *)stru_B054D0.__tail_10 ) /*0x720189*/
        result = 0; /*0x72018b*/
      result = *(int **)(*(_DWORD *)&stru_B054D0.m_1[3] + 4 * (_DWORD)result); /*0x720193*/
      if ( result ) /*0x720198*/
      {
        v9[0] = (*(int *)&this->__pad_0[20] >> 1) + *(_DWORD *)&this->__pad_0[12] - 1; /*0x7201a9*/
        v9[1] = *(_DWORD *)&this->__pad_0[16] + 1; /*0x7201b1*/
        v5 = v4 | this->u32_3C; /*0x7201b8*/
        BYTE1(v5) |= 1u; /*0x7201be*/
        v8 = v5; /*0x7201c1*/
        v7 = result; /*0x7201ca*/
        v6 = (_DWORD *)(*(int (__thiscall **)(AudioStream *, _BYTE *))(*(_DWORD *)g_DSurface_Hidden_2->__pad_0 + 120))( /*0x7201d3*/
                         g_DSurface_Hidden_2,
                         v11);
        return globalHelper_0A6010(&v10, a2, (int)g_DSurface_Hidden_2, v6, (int)v9, (int)v7, 0, v8, 1); /*0x7201e5*/
      }
    }
  }
  return result; /*0x7201eb*/
}



// ==== 0x00720200  TextButtonClass::reloadWeapon  this=TextButtonClass  sig=csp ====
int __thiscall AbstractClass::reloadWeapon(TextButtonClass *this, int a2)
{
  this->u32_3C = a2; /*0x720204*/
  return a2; /*0x720207*/
}



// ==== 0x00720210  TextButtonClass::checkAmmunition  this=TextButtonClass  sig=csp ====
_DWORD *__thiscall AbstractClass::checkAmmunition(TextButtonClass *this, char a2)
{
  GadgetClass::Dtor((GadgetClass *)this); /*0x720213*/
  if ( (a2 & 1) != 0 ) /*0x72021d*/
    __3_YAXPAX_Z(this); /*0x720220*/
  return this->__pad_0; /*0x72022a*/
}



// ==== 0x00720230  sub_720230  this=-  sig=ida-proto ====
void sub_720230()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x72023c*/
  *(double *)&unk_B0F1F8[544] = Math::Sqrt(v0 + v0); /*0x72024e*/
}



// ==== 0x00720260  sub_720260  this=-  sig=ida-proto ====
void sub_720260()
{
  *(double *)&unk_B0F1F8[624] = *(double *)&unk_B0F1F8[544] / 60.0; /*0x72026c*/
}



// ==== 0x00720280  sub_720280  this=-  sig=ida-proto ====
void sub_720280()
{
  *(double *)&unk_B0F1F8[600] = 1.0 / *(double *)&unk_B0F1F8[624]; /*0x72028c*/
}



// ==== 0x007202A0  sub_7202A0  this=-  sig=ida-proto ====
void sub_7202A0()
{
  *(double *)&unk_B0F1F8[592] = 0.0174532925199433 * 45.0; /*0x7202ac*/
}



// ==== 0x007202C0  sub_7202C0  this=-  sig=ida-proto ====
void sub_7202C0()
{
  *(double *)&unk_B0F1F8[552] = 0.0174532925199433 * 60.0; /*0x7202cc*/
}



// ==== 0x007202E0  sub_7202E0  this=-  sig=ida-proto ====
void sub_7202E0()
{
  *(double *)&unk_B0F1F8[512] = 0.0174532925199433 * 90.0; /*0x7202ec*/
}



// ==== 0x00720300  sub_720300  this=-  sig=ida-proto ====
__int64 sub_720300()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(*(double *)&unk_B0F1F8[512] - *(double *)&unk_B0F1F8[552]); /*0x720312*/
  result = Math::RoundToInt(v0 * *(double *)&unk_B0F1F8[544] * 0.5); /*0x720326*/
  *(_DWORD *)&unk_B0F1F8[632] = result; /*0x72032b*/
  return result; /*0x720330*/
}



// ==== 0x00720340  sub_720340  this=-  sig=ida-proto ====
void sub_720340()
{
  *(double *)&unk_B0F1F8[560] = Math::ArcTan((double)*(int *)&unk_B0F1F8[632] * 0.00390625); /*0x720357*/
}



// ==== 0x00720370  sub_720370  this=-  sig=ida-proto ====
void sub_720370()
{
  *(double *)&unk_B0F1F8[584] = Math::ArcTan((double)(2 * *(_DWORD *)&unk_B0F1F8[632]) / *(double *)&unk_B0F1F8[544]); /*0x720392*/
}



// ==== 0x007203A0  sub_7203A0  this=-  sig=ida-proto ====
__int64 sub_7203A0()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * *(_DWORD *)&unk_B0F1F8[632]) + 0.5); /*0x7203bb*/
  *(_DWORD *)&unk_B0F1F8[620] = result; /*0x7203c0*/
  return result; /*0x7203c6*/
}



// ==== 0x007203D0  sub_7203D0  this=-  sig=ida-proto ====
int sub_7203D0()
{
  *(_WORD *)&unk_B0F1F8[536] = 0; /*0x7203d2*/
  *(_WORD *)&unk_B0F1F8[538] = 0; /*0x7203d8*/
  return 0; /*0x7203de*/
}



// ==== 0x007203E0  sub_7203E0  this=-  sig=ida-proto ====
int sub_7203E0()
{
  *(_DWORD *)&unk_B0F1F8[568] = 0; /*0x7203e2*/
  *(_DWORD *)&unk_B0F1F8[572] = 0; /*0x7203e7*/
  *(_DWORD *)&unk_B0F1F8[576] = 0; /*0x7203ec*/
  return 0; /*0x7203f1*/
}



// ==== 0x00720400  sub_720400  this=-  sig=ida-proto ====
int sub_720400()
{
  *(_DWORD *)&unk_B0F1F8[616] = 0; /*0x720405*/
  *(_DWORD *)&unk_B0F1F8[608] = 128; /*0x72040f*/
  *(_DWORD *)&unk_B0F1F8[612] = 128; /*0x720414*/
  return 128; /*0x720419*/
}



// ==== 0x00720420  sub_720420  this=-  sig=ida-proto ====
int sub_720420()
{
  *(_DWORD *)&unk_B0F1F8[520] = 0; /*0x720422*/
  *(_DWORD *)&unk_B0F1F8[524] = 0; /*0x720427*/
  *(_DWORD *)&unk_B0F1F8[528] = 0; /*0x72042c*/
  *(_DWORD *)&unk_B0F1F8[532] = 0; /*0x720431*/
  return 0; /*0x720436*/
}



// ==== 0x00720440  ObjectClass::method  this=ObjectClass  sig=csp ====
_DWORD *__thiscall sub_720440(TechnoClass *this)
{
  this->owningHouseIndex0 = 0; /*0x720444*/
  this->chronoLockRemaining = 0; /*0x72044a*/
  LOBYTE(this->chronoDestCoords[0]) = 1; /*0x720450*/
  BYTE1(this->chronoDestCoords[0]) = 0; /*0x720457*/
  BYTE2(this->chronoDestCoords[0]) = 0; /*0x72045d*/
  this->chronoDestCoords[1] = -1; /*0x720463*/
  LOBYTE(this->vtable0) = 0; /*0x72046d*/
  LOBYTE(this->animation[2]) = 0; /*0x72046f*/
  LOWORD(this->reloadTimer[1]) = 0; /*0x720475*/
  return &this->vtable0; /*0x72047c*/
}



// ==== 0x00720480  ThemeClass::ReadThemeEntry  this=ThemeClass  sig=csp ====
char __thiscall ThemeClass::ReadThemeEntry(int this, unsigned __int8 ***a2)
{
  const char *v3; // edi
  int Int_Overwrite; // eax
  char Bool_Overwrite; // al
  int v6; // ecx
  char v8; // [esp-Ch] [ebp-14h]

  INIClass::ResetSection((INIClass *)a2); /*0x72048a*/
  if ( !INIClass::BinarySearchSection((int)a2, (unsigned __int8 *)this) ) /*0x720492*/
    return 0; /*0x720584*/
  v3 = (const char *)(this + 256); /*0x7204a6*/
  INIClass::GetString((INIClass *)a2, (unsigned __int8 *)this, aSound, &g_INI_DefaultBuffer, (char *)(this + 256), 256); /*0x7204bf*/
  while ( *v3 == 36 || *v3 == 35 ) /*0x7204cc*/
    ++v3; /*0x7204ce*/
  strcpy((char *)(this + 256), v3); /*0x7204e9*/
  Int_Overwrite = INIClass::ReadInt_Overwrite((bool *)a2, (unsigned __int8 *)this, aScenario, *(_DWORD *)(this + 640)); /*0x720501*/
  v8 = *(_BYTE *)(this + 648); /*0x72050e*/
  *(_DWORD *)(this + 640) = Int_Overwrite; /*0x720515*/
  *(_BYTE *)(this + 648) = INIClass::ReadBool_Overwrite((int *)a2, (unsigned __int8 *)this, g_INI_Key_Normal, v8); /*0x720520*/
  Bool_Overwrite = INIClass::ReadBool_Overwrite((int *)a2, (unsigned __int8 *)this, aRepeat, *(_BYTE *)(this + 649)); /*0x720535*/
  v6 = *(_DWORD *)(this + 652); /*0x72053a*/
  *(_BYTE *)(this + 649) = Bool_Overwrite; /*0x720540*/
  *(_DWORD *)(this + 652) = HouseTypeClass::loadCountryData( /*0x720554*/
                              (HouseTypeClass *)a2,
                              (unsigned __int8 *)this,
                              (unsigned __int8 *)aSide,
                              v6);
  if ( *(_BYTE *)(this + 648) ) /*0x72055a*/
    INIClass::GetStringEx( /*0x720577*/
      (int)a2,
      (unsigned __int8 *)this,
      (unsigned __int8 *)g_INI_Key_Name,
      (wchar_t *)(this + 512),
      0x40u);
  return 1; /*0x72057c*/
}



// ==== 0x00720590  ThemeClass::InitializeThemes  this=INIClass  sig=csp ====
void *__thiscall sub_720590(int this, char *a2)
{
  char *v2; // edi
  int KeyCount; // ebp
  int v5; // esi
  unsigned __int8 *StringByIndex; // eax
  int v7; // esi
  _DWORD *v8; // eax
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
           (unsigned __int8 *)g_INI_Key_Themes,
           StringByIndex,
           &g_INI_DefaultBuffer,
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
        v8 = __2_YAPAXI_Z(0x290u); /*0x720637*/
        v9 = 0; /*0x720641*/
        if ( v8 ) /*0x720648*/
        {
          v8[160] = 0; /*0x72064a*/
          v8[161] = 0; /*0x720650*/
          *((_WORD *)v8 + 256) = 0; /*0x720656*/
          *((_BYTE *)v8 + 648) = 1; /*0x72065d*/
          *((_BYTE *)v8 + 649) = 0; /*0x720664*/
          *((_BYTE *)v8 + 650) = 0; /*0x72066b*/
          v8[163] = -1; /*0x720672*/
          *(_BYTE *)v8 = 0; /*0x72067c*/
          *((_BYTE *)v8 + 256) = 0; /*0x72067f*/
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
      AudioQueue::IsEmpty(*(_DWORD *)(this + 44), g_MixerChannel_Theme); /*0x72074c*/
      return (void *)AudioQueue::IsNotEmpty(*(_DWORD *)(this + 44), g_MixerChannel_Stream); /*0x72075a*/
    }
  }
  return result; /*0x72075f*/
}



// ==== 0x00720770  ThemeManager::Cleanup  this=ThemeManager  sig=csp ====
void __thiscall ThemeManager::Cleanup(ThemeManager *this)
{
  int v2; // eax
  int v3; // ecx
  int v4; // eax
  ThemeClass *v5; // ecx

  while ( *((int *)this + 9) > 0 ) /*0x720778*/
  {
    __3_YAXPAX_Z(**((void ***)this + 6)); /*0x720780*/
    v2 = this->q024; /*0x720785*/
    if ( v2 > 0 ) /*0x72078d*/
    {
      v3 = v2 - 1; /*0x72078f*/
      v4 = 0; /*0x720792*/
      for ( this->q024 = v3; /*0x720799*/
            v4 < this->q024;
            *(_DWORD *)(this->u32_18 + 4 * v4 - 4) = *(_DWORD *)(this->u32_18 + 4 * v4) )
      {
        ++v4; /*0x72079e*/
      }
    }
  }
  v5 = (ThemeClass *)this->u32_2C; /*0x7207b4*/
  if ( v5 ) /*0x7207b9*/
  {
    ThemeClass::RequestBuffer(v5); /*0x7207bb*/
    ThemeManager::ProcessCallback(*((ThemeManager **)this + 11)); /*0x7207c3*/
    Audio::Release(*((Audio **)this + 11)); /*0x7207cb*/
    AudioSample::Destructor(*((AudioSample **)this + 11)); /*0x7207d3*/
    this->u32_2C = 0; /*0x7207d8*/
  }
}



// ==== 0x007207F0  Audio::LoadWAVFiles  this=Audio  sig=csp ====
char __thiscall Audio::LoadWAVFiles(Audio *this)
{
  int IsSoundEnabled; // eax
  int i; // ebx
  int v4; // ebp
  _DWORD *v5; // ebp
  unsigned __int64 v6; // rax
  size_t v8[2]; // [esp+8h] [ebp-294h] BYREF
  Struct v9[8]; // [esp+10h] [ebp-28Ch] BYREF
  CCFileClass v10; // [esp+30h] [ebp-26Ch] BYREF
  int v11[3]; // [esp+88h] [ebp-214h] BYREF
  int v12; // [esp+94h] [ebp-208h]
  char Buffer[512]; // [esp+9Ch] [ebp-200h] BYREF

  LOBYTE(IsSoundEnabled) = stru_A8EB00.?[144]; /*0x7207f0*/
  if ( stru_A8EB00.?[144] ) /*0x720801*/
  {
    IsSoundEnabled = Audio::IsSoundEnabled(); /*0x720807*/
    if ( IsSoundEnabled ) /*0x72080e*/
    {
      LOBYTE(IsSoundEnabled) = stru_A8EB00.?[384]; /*0x720814*/
      if ( !stru_A8EB00.?[384] ) /*0x72081b*/
      {
        IsSoundEnabled = *(_DWORD *)&this->__pad_18[12]; /*0x720821*/
        for ( i = 0; i < IsSoundEnabled; ++i ) /*0x720828*/
        {
          _makepath(Buffer, 0, 0, (const char *)(*(_DWORD *)(*(_DWORD *)this->__pad_18 + 4 * i) + 256), g_Str_File__WAV); /*0x720855*/
          CCFileClass::Construct(&v10, Buffer); /*0x720869*/
          v4 = 4 * i + *(_DWORD *)this->__pad_18; /*0x720877*/
          *(_BYTE *)(*(_DWORD *)v4 + 650) = CCFileClass::Open(&v10, 0); /*0x720881*/
          if ( *(_BYTE *)(*(_DWORD *)(*(_DWORD *)this->__pad_18 + 4 * i) + 650) ) /*0x72088d*/
          {
            Struct::ZeroInit32(v9); /*0x72089b*/
            FileClass::Load(&v10, (const CHAR *)1); /*0x7208a6*/
            if ( ParseWaveFileHeader((int)&v10, v9, v8) ) /*0x7208b8*/
            {
              v5 = (_DWORD *)(4 * i + *(_DWORD *)this->__pad_18); /*0x7208cc*/
              v6 = sub_408560((int)v9, v8[0]) / 0x3E8; /*0x7208dc*/
              HIDWORD(v6) = *v5; /*0x7208e1*/
              v8[1] = v6; /*0x7208e4*/
              *(float *)(HIDWORD(v6) + 644) = (float)(int)v6; /*0x7208ec*/
            }
          }
          *(_DWORD *)v10.CDFileClass = &CCFileClass::`vftable'; /*0x7208f9*/
          v12 = 0; /*0x720901*/
          Vector::Clear((int)v11); /*0x72090c*/
          *(_DWORD *)v10.CDFileClass = &off_7E1668; /*0x720915*/
          BufferIOFileClass::Dtor((BufferIOFileClass *)&v10); /*0x72091d*/
          IsSoundEnabled = *(_DWORD *)&this->__pad_18[12]; /*0x720922*/
        }
      }
    }
  }
  return IsSoundEnabled; /*0x720930*/
}



// ==== 0x00720940  ScenarioClass::processEndgame  this=ScenarioClass  sig=csp ====
char *__thiscall ScenarioClass::processEndgame(ScenarioClass *this, unsigned int a2)
{
  if ( a2 >= this->nextScenario[9] ) /*0x720949*/
    return aNoTheme; /*0x720954*/
  else
    return *(char **)(this->nextScenario[6] + 4 * a2); /*0x72094e*/
}



// ==== 0x00720960  ObjectClass::method  this=ObjectClass  sig=csp ====
_DWORD *__thiscall sub_720960(ObjectClass *this)
{
  this->AbstractClass = (void *)-1; /*0x720965*/
  this->? = (void *)-1; /*0x720967*/
  this->? = (void *)-1; /*0x72096a*/
  this->? = (void *)255; /*0x72096f*/
  LOBYTE(this->?) = 0; /*0x720976*/
  BYTE1(this->?) = 0; /*0x720979*/
  BYTE2(this->?) = 0; /*0x72097c*/
  this->? = 0; /*0x72097f*/
  this->? = 0; /*0x720982*/
  LOBYTE(this->?) = 1; /*0x720985*/
  BYTE1(this->?) = 0; /*0x720989*/
  this->? = (int)&DynamicVectorClass<ThemeControl *>::`vftable'; /*0x72098c*/
  this->owningHouseIndex = 10; /*0x720993*/
  this->occupant = 0; /*0x72099a*/
  this->fallRate = 0; /*0x72099d*/
  return &this->AbstractClass; /*0x7209a0*/
}



// ==== 0x007209B0  AudioSettings::Check  this=AudioSettings  sig=csp ====
int __thiscall AudioSettings::Check(AudioSettings *this, unsigned int a2)
{
  if ( a2 >= *((_DWORD *)this + 9) ) /*0x7209b9*/
    return 0; /*0x7209c9*/
  else
    return *(_DWORD *)(*((_DWORD *)this + 6) + 4 * a2) + 512; /*0x7209c1*/
}



// ==== 0x007209D0  Movie::Update  this=Movie  sig=csp ====
char __thiscall Movie::Update(Movie *this)
{
  void *IsSoundEnabled; // eax
  AudioSample *v3; // ecx

  IsSoundEnabled = (void *)Audio::IsSoundEnabled(); /*0x7209d3*/
  if ( IsSoundEnabled ) /*0x7209da*/
  {
    LOBYTE(IsSoundEnabled) = stru_A8EB00.?[384]; /*0x7209e0*/
    if ( !stru_A8EB00.?[384] ) /*0x7209e7*/
    {
      LOBYTE(IsSoundEnabled) = stru_A8EB00.?[144]; /*0x7209ed*/
      if ( stru_A8EB00.?[144] ) /*0x7209f4*/
      {
        IsSoundEnabled = this->Movie_field_0xC; /*0x7209fa*/
        if ( (int)IsSoundEnabled > 0 ) /*0x7209ff*/
        {
          v3 = *(AudioSample **)&this->__pad_28[4]; /*0x720a01*/
          if ( !v3 ) /*0x720a06*/
            goto LABEL_10; /*0x720a06*/
          if ( this->__pad_10[1] && !AudioSample::IsBuffering(v3) ) /*0x720a0f*/
            Audio::Release(*(Audio **)&this->__pad_28[4]); /*0x720a1b*/
          LOBYTE(IsSoundEnabled) = Audio::IsSoundPlaying(*(Audio **)&this->__pad_28[4]) != 0; /*0x720a2a*/
          if ( !(_BYTE)IsSoundEnabled ) /*0x720a2f*/
          {
LABEL_10:
            IsSoundEnabled = (void *)this->Movie_field_0x8; /*0x720a31*/
            if ( IsSoundEnabled != (void *)-1 && IsSoundEnabled != (void *)-3 && !dword_A8E7AC ) /*0x720a46*/
            {
              if ( IsSoundEnabled == (void *)-2 ) /*0x720a4b*/
              {
                this->Movie_field_0x8 = Movie::SelectNextBuildableType((int)this, (int)this->Movie_field_0x4); /*0x720a5e*/
                Debug::Log(); /*0x720a61*/
              }
              LOBYTE(IsSoundEnabled) = ThemeClass::Play((ThemeClass *)this, this->Movie_field_0x8); /*0x720a6f*/
              this->Movie_field_0x8 = -2; /*0x720a74*/
            }
          }
        }
      }
    }
  }
  return (char)IsSoundEnabled; /*0x720a7b*/
}



// ==== 0x00720A80  Movie::SelectNextBuildableType  this=Movie  sig=csp ====
unsigned int __thiscall Movie::SelectNextBuildableType(int this, int a2)
{
  unsigned int v2; // ebp
  int v4; // edi
  unsigned int v5; // eax
  unsigned int v6; // ebx
  bool v7; // zf
  int v9; // edi

  v2 = a2; /*0x720a81*/
  if ( (a2 <= -1 || *(_BYTE *)(*(_DWORD *)(*(_DWORD *)(this + 24) + 4 * a2) + 649) || *(_BYTE *)(this + 16)) && a2 >= 0 ) /*0x720aa7*/
    return v2; /*0x720b18*/
  if ( *(_BYTE *)(this + 18) == 1 ) /*0x720aad*/
  {
    v4 = 0; /*0x720ab0*/
    while ( 1 ) /*0x720abe*/
    {
      v5 = Random::Range(&Randomizer_Global, 0, *(_DWORD *)(this + 36) - 1); /*0x720abe*/
      ++v4; /*0x720ac3*/
      v6 = v5; /*0x720ac4*/
      v7 = v4 == 1000; /*0x720ac6*/
      if ( v4 >= 1000 ) /*0x720acc*/
        break; /*0x720acc*/
      if ( v5 != a2 && (unsigned __int8)RulesClass::IsTypeBuildable((RulesClass *)this, v5) ) /*0x720ad5*/
      {
        v7 = v4 == 1000; /*0x720ade*/
        break; /*0x720ade*/
      }
    }
    if ( v7 ) /*0x720ae4*/
      return 0; /*0x720ae6*/
    return v6; /*0x720ae8*/
  }
  else
  {
    v9 = *(_DWORD *)(this + 36) + 1; /*0x720af4*/
    while ( 1 ) /*0x720af8*/
    {
      if ( (signed int)++v2 >= *(_DWORD *)(this + 36) ) /*0x720afb*/
        v2 = 0; /*0x720afd*/
      if ( !--v9 ) /*0x720b00*/
        break; /*0x720b00*/
      if ( (unsigned __int8)RulesClass::IsTypeBuildable((RulesClass *)this, v2) ) /*0x720b05*/
        return v2; /*0x720b0c*/
    }
    return 0; /*0x720b12*/
  }
}



// ==== 0x00720B20  Theme::QueueSong  this=Theme  sig=csp ====
char __thiscall Theme_QueueSong(int this, int a2)
{
  int IsSoundEnabled; // eax

  LOBYTE(IsSoundEnabled) = byte_A8EC74; /*0x720b20*/
  if ( byte_A8EC74 ) /*0x720b2a*/
  {
    IsSoundEnabled = Audio::IsSoundEnabled(); /*0x720b2c*/
    if ( IsSoundEnabled ) /*0x720b33*/
    {
      LOBYTE(IsSoundEnabled) = byte_A8ED64; /*0x720b35*/
      if ( !byte_A8ED64 ) /*0x720b3c*/
      {
        LOBYTE(IsSoundEnabled) = a2; /*0x720b3e*/
        *(_DWORD *)(this + 8) = a2; /*0x720b45*/
        if ( a2 != -1 && a2 != -2 && a2 != *(_DWORD *)(this + 4) ) /*0x720b52*/
        {
          LOBYTE(IsSoundEnabled) = Debug::Log("Theme::QueueSong(%d)\n", a2); /*0x720b5a*/
          if ( *(_DWORD *)(this + 44) ) /*0x720b5f*/
          {
            if ( *(_BYTE *)(this + 17) && !AudioSample::IsBuffering() ) /*0x720b70*/
              Audio::Release(*(_DWORD *)(this + 44)); /*0x720b7c*/
            LOBYTE(IsSoundEnabled) = Audio::IsSoundPlaying(*(_DWORD *)(this + 44)) != 0; /*0x720b8b*/
            if ( (_BYTE)IsSoundEnabled == 1 ) /*0x720b90*/
            {
              if ( *(_DWORD *)(this + 44) ) /*0x720b92*/
                LOBYTE(IsSoundEnabled) = ThemeClass::RequestBuffer(); /*0x720b99*/
              *(_BYTE *)(this + 17) = 1; /*0x720b9e*/
            }
          }
        }
      }
    }
  }
  return IsSoundEnabled; /*0x720ba2*/
}



// ==== 0x00720BB0  ThemeClass::Play  this=ThemeClass  sig=csp ====
int __thiscall ThemeClass::Play(ThemeClass *this, int a2)
{
  AudioSample *ThemeClass_field_2C; // ecx
  Audio *v4; // ecx
  int v5; // eax
  int v6; // ecx

  if ( stru_A8EB00.?[144] && Audio::IsSoundEnabled() && !stru_A8EB00.?[384] )
  {
    ThemeClass_field_2C = (AudioSample *)this->ThemeClass_field_2C; /*0x720bdc*/
    if ( !ThemeClass_field_2C ) /*0x720be5*/
      goto LABEL_13; /*0x720be5*/
    if ( BYTE1(this->m_Name[2]) && !AudioSample::IsBuffering(ThemeClass_field_2C) ) /*0x720bee*/
      Audio::Release((Audio *)this->ThemeClass_field_2C); /*0x720bfa*/
    if ( !Audio::IsSoundPlaying((Audio *)this->ThemeClass_field_2C) || this->ThemeClass_field_04 != a2 )
    {
LABEL_13:
      if ( stru_A8EB00.?[144] && Audio::IsSoundEnabled() && !stru_A8EB00.?[384] && this->ThemeClass_field_00 != -1 ) /*0x720c37*/
      {
        Debug::Log(); /*0x720c42*/
        v4 = (Audio *)this->ThemeClass_field_2C; /*0x720c47*/
        if ( v4 ) /*0x720c4f*/
          Audio::Release(v4); /*0x720c51*/
        this->ThemeClass_field_00 = -1; /*0x720c56*/
        this->ThemeClass_field_04 = -1; /*0x720c5c*/
        this->m_Name[0] = -1; /*0x720c63*/
      }
      BYTE1(this->m_Name[2]) = 0; /*0x720c6d*/
      if ( a2 != -1 && a2 != -3 )
      {
        if ( a2 <= -1 || this->m_Name[1] <= 0 ) /*0x720c8e*/
          goto LABEL_47; /*0x720c8e*/
        this->ThemeClass_field_04 = a2; /*0x720c94*/
        v5 = byte_89E3A0 ? 0 : Game::CheckForGameCD(0);
        v6 = this->ThemeClass_field_2C; /*0x720cab*/
        if ( v6 && v5 > -1 ) /*0x720cba*/
        {
          if ( (unsigned int)a2 >= this->m_Name[7] ) /*0x720cbf*/
          {
            ThreadAudioMixerMain((_DWORD *)this->ThemeClass_field_2C, &g_INI_DefaultBuffer, 1); /*0x720d02*/
          }
          else
          {
            _makepath( /*0x720cdc*/
              (char *)&g_BuildingLoadQueue_Array.?[72],
              0,
              0,
              (const char *)(*(_DWORD *)(this->m_Name[4] + 4 * a2) + 256),
              g_Str_File__WAV);
            ThreadAudioMixerMain((_DWORD *)this->ThemeClass_field_2C, (char *)&g_BuildingLoadQueue_Array.?[72], 1); /*0x720ced*/
          }
          this->ThemeClass_field_00 = a2; /*0x720cf2*/
        }
        else
        {
          this->ThemeClass_field_00 = -1; /*0x720d10*/
          if ( v6 ) /*0x720d16*/
          {
            if ( v5 <= -1 && this->m_Name[0] == -1 ) /*0x720d29*/
            {
              if ( stru_A8EB00.?[144] ) /*0x720d36*/
              {
                if ( Audio::IsSoundEnabled() ) /*0x720d3c*/
                {
                  if ( !stru_A8EB00.?[384] ) /*0x720d4c*/
                  {
                    dword_A83D18 = a2; /*0x720d51*/
                    if ( a2 != dword_A83D14 ) /*0x720d5f*/
                    {
                      Debug::Log(); /*0x720d67*/
                      if ( dword_A83D3C ) /*0x720d77*/
                      {
                        if ( byte_A83D21 && !AudioSample::IsBuffering(dword_A83D3C) ) /*0x720d82*/
                          Audio::Release((Audio *)dword_A83D3C); /*0x720d91*/
                        if ( Audio::IsSoundPlaying((Audio *)dword_A83D3C) != 0 ) /*0x720da3*/
                        {
                          if ( dword_A83D3C ) /*0x720db2*/
                            ThemeClass::RequestBuffer((ThemeClass *)dword_A83D3C); /*0x720db4*/
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
        if ( LOBYTE(this->m_Name[2]) == 1 || *(_BYTE *)(*(_DWORD *)(this->m_Name[4] + 4 * a2) + 649) == 1 ) /*0x720e03*/
LABEL_47:
          this->m_Name[0] = a2; /*0x720e05*/
      }
    }
  }
  return this->ThemeClass_field_00; /*0x720e0a*/
}



// ==== 0x00720E50  AudioSettings::ComputeTransform  this=AudioSettings  sig=csp ====
int __thiscall AudioSettings::ComputeTransform(AudioSettings *this, unsigned int a2)
{
  int result; // eax

  if ( a2 >= *((_DWORD *)this + 9) ) /*0x720e59*/
    return 0; /*0x720e6f*/
  LOWORD(result) = Math::RoundToInt(*(float *)(*(_DWORD *)(*((_DWORD *)this + 6) + 4 * a2) + 644)); /*0x720e67*/
  return result; /*0x720e6c*/
}



// ==== 0x00720EA0  Theme::Stop  this=Theme  sig=csp ====
int __thiscall Theme::Stop(Theme *this, char a2)
{
  int result; // eax
  AudioSample *v4; // ecx
  ThemeClass *v5; // ecx
  Audio *v6; // ecx

  LOBYTE(result) = stru_A8EB00.?[144]; /*0x720ea0*/
  if ( stru_A8EB00.?[144] ) /*0x720eaa*/
  {
    result = Audio::IsSoundEnabled(); /*0x720eb0*/
    if ( result ) /*0x720eb7*/
    {
      LOBYTE(result) = stru_A8EB00.?[384]; /*0x720ebd*/
      if ( !stru_A8EB00.?[384] && *(_DWORD *)this != -1 ) /*0x720ecd*/
      {
        if ( !a2 ) /*0x720ed9*/
          goto LABEL_14; /*0x720ed9*/
        v4 = (AudioSample *)this->audioSample; /*0x720edb*/
        if ( !v4 ) /*0x720ee0*/
          goto LABEL_14; /*0x720ee0*/
        if ( this->u8_11 && !AudioSample::IsBuffering(v4) ) /*0x720ee9*/
          Audio::Release(*((Audio **)this + 11)); /*0x720ef5*/
        if ( Audio::IsSoundPlaying(*((Audio **)this + 11)) != 0 ) /*0x720f04*/
        {
          result = Debug::Log(); /*0x720f14*/
          v5 = (ThemeClass *)this->audioSample; /*0x720f19*/
          if ( v5 ) /*0x720f21*/
            result = ThemeClass::RequestBuffer(v5); /*0x720f23*/
          this->u8_11 = 1; /*0x720f28*/
        }
        else
        {
LABEL_14:
          result = Debug::Log(); /*0x720f37*/
          v6 = (Audio *)this->audioSample; /*0x720f3c*/
          if ( v6 ) /*0x720f44*/
            result = Audio::Release(v6); /*0x720f46*/
        }
        *(_DWORD *)this = -1; /*0x720f4b*/
        this->ptr_4 = -1; /*0x720f51*/
        this->u32_8 = -1; /*0x720f58*/
      }
    }
  }
  return result; /*0x720f5f*/
}



// ==== 0x00720FD0  Theme::IsPlaying  this=Theme  sig=csp ====
bool __thiscall Theme::IsPlaying(Theme *this)
{
  AudioSample *v2; // ecx

  v2 = (AudioSample *)this->audioSample; /*0x720fd3*/
  if ( !v2 ) /*0x720fd8*/
    return 0; /*0x721002*/
  if ( this->u8_11 ) /*0x720fda*/
  {
    if ( !AudioSample::IsBuffering(v2) ) /*0x720fe1*/
      Audio::Release(*((Audio **)this + 11)); /*0x720fed*/
  }
  return Audio::IsSoundPlaying(*((Audio **)this + 11)) != 0; /*0x720ffe*/
}



// ==== 0x00721010  SaveGame::VtableDispatch  this=SaveGame  sig=csp ====
int __thiscall SaveGame::VtableDispatch(SaveGame *this, int a2)
{
  int result; // eax

  result = (*(int (__stdcall **)(int, char *, int, _DWORD))(*(_DWORD *)a2 + 16))(a2, &this->__pad_0[4], 4, 0); /*0x721023*/
  if ( result >= 0 ) /*0x721028*/
    return (*(int (__stdcall **)(int, char *, int, _DWORD))(*(_DWORD *)a2 + 16))(a2, &this->__pad_0[8], 4, 0); /*0x721035*/
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
      if ( byte_A8EBA5 ) /*0x721080*/
      {
        ThemeClass::Play(&unk_A83D10, a1); /*0x721090*/
        v3 = v5; /*0x72109a*/
        if ( byte_A8EC74 ) /*0x7210a0*/
        {
          if ( Audio::IsSoundEnabled() ) /*0x7210a6*/
          {
            if ( !byte_A8ED64 ) /*0x7210ba*/
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



// ==== 0x00721140  RulesClass::IsTypeBuildable  this=RulesClass  sig=csp ====
int __thiscall RulesClass::IsTypeBuildable(RulesClass *this, unsigned int a2)
{
  int result; // eax
  int v3; // ecx

  result = a2; /*0x721140*/
  if ( a2 == -3 || a2 == -2 ) /*0x721150*/
    goto LABEL_16; /*0x721150*/
  if ( a2 >= this->TunnelSpeed[1] ) /*0x721155*/
  {
    LOBYTE(result) = 0; /*0x721157*/
    return result; /*0x721159*/
  }
  result = *(_DWORD *)(this->AttackingAircraftSightRange + 4 * a2); /*0x72115f*/
  if ( !*(_BYTE *)(result + 650) ) /*0x721162*/
  {
    LOBYTE(result) = 0; /*0x72116c*/
    return result; /*0x72116e*/
  }
  if ( !*(_BYTE *)(result + 648) ) /*0x721171*/
  {
    LOBYTE(result) = 0; /*0x72117b*/
    return result; /*0x72117d*/
  }
  if ( dword_A83D4C ) /*0x721188*/
  {
    v3 = *(_DWORD *)(result + 652); /*0x72118a*/
    if ( v3 != -1 && *((_DWORD *)dword_A83D4C->Object_field_0x34 + 47) != v3 ) /*0x7211a2*/
    {
      LOBYTE(result) = 0; /*0x7211a4*/
      return result; /*0x7211a6*/
    }
  }
  if ( *(_DWORD *)&dword_A8B238 || (int)dword_A8B230[130].vtable3 >= *(_DWORD *)(result + 640) ) /*0x7211c7*/
LABEL_16:
    LOBYTE(result) = 1; /*0x7211ce*/
  else
    LOBYTE(result) = 0; /*0x7211c9*/
  return result; /*0x721159*/
}



// ==== 0x00721210  StringList::Find  this=StringList  sig=csp ====
int __thiscall StringList::Find(StringList *this, const char *a2)
{
  int v3; // esi

  if ( !a2 ) /*0x72121b*/
    return -1; /*0x72121b*/
  if ( !strlen(a2) ) /*0x721220*/
    return -1; /*0x721220*/
  v3 = 0; /*0x721230*/
  if ( *((int *)this + 9) <= 0 ) /*0x721234*/
    return -1; /*0x721252*/
  while ( _strcmpi(*(char **)(*((_DWORD *)this + 6) + 4 * v3), (char *)a2) ) /*0x721248*/
  {
    if ( ++v3 >= *((_DWORD *)this + 9) ) /*0x721250*/
      return -1; /*0x721250*/
  }
  return v3; /*0x721252*/
}



// ==== 0x00721270  ScriptAction::GetArgumentString  this=ScriptAction  sig=csp ====
char *__thiscall ScriptAction::GetArgumentString(ScriptAction *this, int a2)
{
  if ( a2 < 0 || a2 >= this->ScriptAction_field_0x24 ) /*0x72127b*/
    return g_Str_none; /*0x721286*/
  else
    return *(char **)(this->ScriptAction_field_0x18[0] + 4 * a2); /*0x721280*/
}



// ==== 0x00721290  TechnoTypeClass::CheckFlag  this=TechnoTypeClass  sig=csp ====
int __thiscall TechnoTypeClass::CheckFlag(TechnoTypeClass *this, int a2)
{
  int result; // eax

  result = a2; /*0x721290*/
  if ( a2 >= 255 ) /*0x721299*/
    result = 255; /*0x72129b*/
  this->ObjectTypeClass[3] = result; /*0x7212a0*/
  return result; /*0x7212a3*/
}



// ==== 0x007212B0  _DynamicVectorClass_PAUThemeControl::Destroy  this=DynamicVector  sig=csp ====
void __thiscall VectorClass_ptr_ThemeControl::Destroy(_DynamicVectorClass_PAUThemeControl *this)
{
  void *v2; // eax

  v2 = *(void **)&this->m_1[3]; /*0x7212b6*/
  this->m_10 = 0; /*0x7212b9*/
  if ( v2 && BYTE1(this->m_C) ) /*0x7212c0*/
  {
    __3_YAXPAX_Z(v2); /*0x7212c6*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x7212ce*/
  }
  BYTE1(this->m_C) = 0; /*0x7212d1*/
  this->m_8 = 0; /*0x7212d4*/
}



// ==== 0x007212E0  _DynamicVectorClass_PAUThemeControl::GetItemIndex  this=DynamicVector  sig=csp ====
unsigned int __thiscall VectorClass_ptr_ThemeControl::GetItemIndex(_DynamicVectorClass_PAUThemeControl *this, int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x7212e0*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 2; /*0x7212f5*/
  else
    return 0; /*0x7212e7*/
}



// ==== 0x00721300  _DynamicVectorClass_PAUThemeControl::SetCapacity  this=DynamicVector  sig=csp ====
char __thiscall VectorClass_ptr_ThemeControl::SetCapacity(
        _DynamicVectorClass_PAUThemeControl *this,
        int a2,
        _DWORD *a3)
{
  _DWORD *v4; // edi
  int m_8; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x72130c*/
  {
    LOBYTE(this->m_C) = 0; /*0x721312*/
    if ( a3 ) /*0x721318*/
      v4 = a3; /*0x72132e*/
    else
      v4 = (_DWORD *)__2_YAPAXI_Z(4 * a2); /*0x72132a*/
    LOBYTE(this->m_C) = 1; /*0x721332*/
    if ( !v4 ) /*0x721336*/
      return 0; /*0x7213aa*/
    if ( *(_DWORD *)&this->m_1[3] ) /*0x721338*/
    {
      m_8 = this->m_8; /*0x72133f*/
      if ( a2 < m_8 ) /*0x721344*/
        m_8 = a2; /*0x721346*/
      for ( i = 0; i < m_8; v4[i - 1] = *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * i - 4) ) /*0x72134c*/
        ++i; /*0x721351*/
      if ( BYTE1(this->m_C) ) /*0x72135e*/
      {
        __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x721369*/
        *(_DWORD *)&this->m_1[3] = 0; /*0x721371*/
      }
    }
    *(_DWORD *)&this->m_1[3] = v4; /*0x72137a*/
    this->m_8 = a2; /*0x721382*/
    BYTE1(this->m_C) = a3 == 0; /*0x721385*/
  }
  else
  {
    (*(void (__thiscall **)(_DynamicVectorClass_PAUThemeControl *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x72138e*/
  }
  v7 = this->m_8; /*0x721391*/
  if ( v7 < this->m_10 ) /*0x721399*/
    this->m_10 = v7; /*0x72139b*/
  return 1; /*0x72139e*/
}



// ==== 0x007213B0  _DynamicVectorClass_PAUThemeControl::FindItemIndex  this=DynamicVector  sig=csp ====
int __thiscall VectorClass_ptr_ThemeControl::FindItemIndex(_DynamicVectorClass_PAUThemeControl *this, _DWORD *a2)
{
  int m_10; // edx
  int result; // eax
  _DWORD *i; // ecx

  m_10 = this->m_10; /*0x7213b0*/
  result = 0; /*0x7213b3*/
  if ( m_10 <= 0 ) /*0x7213b8*/
    return -1; /*0x7213cf*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2; ++i ) /*0x7213be*/
  {
    if ( ++result >= m_10 ) /*0x7213cd*/
      return -1; /*0x7213cd*/
  }
  return result; /*0x7213d2*/
}



// ==== 0x007213E0  _DynamicVectorClass_PAUThemeControl::Constructor_VectorClass_ThemeControl___  this=DynamicVector  sig=csp ====
_DWORD *__thiscall VectorClass_ptr_ThemeControl::Constructor_VectorClass_ThemeControl___(
        _DynamicVectorClass_PAUThemeControl *this,
        char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x7213e3*/
  *(_DWORD *)this->__pad_0 = &VectorClass<ThemeControl *>::`vftable'; /*0x7213e6*/
  if ( v3 && BYTE1(this->m_C) ) /*0x7213f0*/
  {
    __3_YAXPAX_Z(v3); /*0x7213f8*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x721400*/
  }
  BYTE1(this->m_C) = 0; /*0x72140b*/
  this->m_8 = 0; /*0x721411*/
  if ( (a2 & 1) != 0 ) /*0x721418*/
    __3_YAXPAX_Z(this); /*0x72141b*/
  return this->__pad_0; /*0x721425*/
}



// ==== 0x00721430  sub_721430  this=-  sig=ida-proto ====
void sub_721430()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x72143c*/
  *(double *)&unk_B0F1F8[672] = Math::Sqrt(v0 + v0); /*0x72144e*/
}



// ==== 0x00721460  sub_721460  this=-  sig=ida-proto ====
void sub_721460()
{
  dbl_B0F508 = *(double *)&unk_B0F1F8[672] / 60.0; /*0x72146c*/
}



// ==== 0x00721480  sub_721480  this=-  sig=ida-proto ====
void sub_721480()
{
  *(double *)&unk_B0F1F8[728] = 1.0 / dbl_B0F508; /*0x72148c*/
}



// ==== 0x007214A0  sub_7214A0  this=-  sig=ida-proto ====
void sub_7214A0()
{
  *(double *)&unk_B0F1F8[720] = 0.0174532925199433 * 45.0; /*0x7214ac*/
}



// ==== 0x007214C0  sub_7214C0  this=-  sig=ida-proto ====
void sub_7214C0()
{
  *(double *)&unk_B0F1F8[680] = 0.0174532925199433 * 60.0; /*0x7214cc*/
}



// ==== 0x007214E0  sub_7214E0  this=-  sig=ida-proto ====
void sub_7214E0()
{
  *(double *)&unk_B0F1F8[640] = 0.0174532925199433 * 90.0; /*0x7214ec*/
}



// ==== 0x00721500  sub_721500  this=-  sig=ida-proto ====
__int64 sub_721500()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(*(double *)&unk_B0F1F8[640] - *(double *)&unk_B0F1F8[680]); /*0x721512*/
  result = Math::RoundToInt(v0 * *(double *)&unk_B0F1F8[672] * 0.5); /*0x721526*/
  dword_B0F510 = result; /*0x72152b*/
  return result; /*0x721530*/
}



// ==== 0x00721540  sub_721540  this=-  sig=ida-proto ====
void sub_721540()
{
  *(double *)&unk_B0F1F8[688] = Math::ArcTan((double)dword_B0F510 * 0.00390625); /*0x721557*/
}



// ==== 0x00721570  sub_721570  this=-  sig=ida-proto ====
void sub_721570()
{
  *(double *)&unk_B0F1F8[712] = Math::ArcTan((double)(2 * dword_B0F510) / *(double *)&unk_B0F1F8[672]); /*0x721592*/
}



// ==== 0x007215A0  sub_7215A0  this=-  sig=ida-proto ====
__int64 sub_7215A0()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_B0F510) + 0.5); /*0x7215bb*/
  dword_B0F500 = result; /*0x7215c0*/
  return result; /*0x7215c6*/
}



// ==== 0x007215D0  sub_7215D0  this=-  sig=ida-proto ====
int sub_7215D0()
{
  *(_WORD *)&unk_B0F1F8[664] = 0; /*0x7215d2*/
  *(_WORD *)&unk_B0F1F8[666] = 0; /*0x7215d8*/
  return 0; /*0x7215de*/
}



// ==== 0x007215E0  sub_7215E0  this=-  sig=ida-proto ====
int sub_7215E0()
{
  *(_DWORD *)&unk_B0F1F8[696] = 0; /*0x7215e2*/
  *(_DWORD *)&unk_B0F1F8[700] = 0; /*0x7215e7*/
  *(_DWORD *)&unk_B0F1F8[704] = 0; /*0x7215ec*/
  return 0; /*0x7215f1*/
}



// ==== 0x00721600  sub_721600  this=-  sig=ida-proto ====
int sub_721600()
{
  *(_DWORD *)&unk_B0F1F8[744] = 0; /*0x721605*/
  *(_DWORD *)&unk_B0F1F8[736] = 128; /*0x72160f*/
  *(_DWORD *)&unk_B0F1F8[740] = 128; /*0x721614*/
  return 128; /*0x721619*/
}



// ==== 0x00721620  sub_721620  this=-  sig=ida-proto ====
int sub_721620()
{
  *(_DWORD *)&unk_B0F1F8[648] = 0; /*0x721622*/
  *(_DWORD *)&unk_B0F1F8[652] = 0; /*0x721627*/
  *(_DWORD *)&unk_B0F1F8[656] = 0; /*0x72162c*/
  *(_DWORD *)&unk_B0F1F8[660] = 0; /*0x721631*/
  return 0; /*0x721636*/
}



// ==== 0x00721640  sub_721640  this=-  sig=ida-proto ====
int sub_721640()
{
  dword_B0F4EC = 0; /*0x721647*/
  dword_B0F4F0 = 0; /*0x72164c*/
  byte_B0F4F4 = 1; /*0x721651*/
  byte_B0F4F5 = 0; /*0x721658*/
  dword_B0F4E8 = (int)&DynamicVectorClass<TiberiumClass *>::`vftable'; /*0x72165d*/
  dword_B0F4FC = 10; /*0x721667*/
  dword_B0F4F8 = 0; /*0x721671*/
  return atexit(sub_721680); /*0x72167c*/
}



// ==== 0x00721680  sub_721680  this=-  sig=ida-proto ====
void __cdecl sub_721680()
{
  dword_B0F4E8 = (int)&VectorClass<TiberiumClass *>::`vftable'; /*0x721688*/
  if ( dword_B0F4EC && byte_B0F4F5 ) /*0x72169c*/
  {
    __3_YAXPAX_Z(dword_B0F4EC); /*0x72169f*/
    dword_B0F4EC = 0; /*0x7216a7*/
  }
  byte_B0F4F5 = 0; /*0x7216ad*/
  dword_B0F4F0 = 0; /*0x7216b3*/
}



// ==== 0x007216C0  TiberiumClass::TiberiumClass  this=TiberiumClass  sig=csp ====
_DWORD *__thiscall TiberiumClass::TiberiumClass(TiberiumClass *this, char *Source)
{
  int v3; // edx
  int v4; // eax
  int v5; // eax

  AbstractTypeClass::Constructor((int *)this, Source); /*0x7216ca*/
  this->?[1] = -1717986918; /*0x7216dc*/
  this->Spread = -1717986918; /*0x7216e7*/
  *(_DWORD *)&this->? = -1; /*0x7216f1*/
  this->?[0] = 0; /*0x7216fb*/
  this->?[2] = 1069128089; /*0x721701*/
  this->? = 0; /*0x721707*/
  this->SpreadPercentage[0] = 1069128089; /*0x72170d*/
  this->SpreadPercentage[1] = 0; /*0x721713*/
  this->Growth = 0; /*0x721719*/
  this->GrowthPercentage[0] = 0; /*0x72171f*/
  AnimTypeVector::Constructor((AnimTypeVector *)&this->GrowthPercentage[1], 0, 0); /*0x721725*/
  this->Image = (OverlayTypeClass *)10; /*0x72172a*/
  this->Debris[0] = 0; /*0x721731*/
  this->GrowthPercentage[1] = (int)&TypeList<AnimTypeClass const *>::`vftable'; /*0x721734*/
  this->NumImages = 0; /*0x72173a*/
  *(_DWORD *)this->__pad_E4 = 0; /*0x721740*/
  *(_DWORD *)&this->__pad_E4[4] = 0; /*0x721746*/
  this->TiberiumClass_field_EC = 0; /*0x72174c*/
  this->TiberiumClass_field_F0 = 0; /*0x721752*/
  this->TiberiumClass_field_F4 = 0; /*0x721758*/
  this->TiberiumClass_field_F8 = 0; /*0x72175e*/
  this->TiberiumClass_field_FC = 0; /*0x721764*/
  this->SpreadTimer[0] = *(_DWORD *)&stru_A8EB00.?[416]; /*0x721770*/
  this->SpreadTimer[2] = 0; /*0x721776*/
  this->TiberiumClass_field_10C = 0; /*0x72177c*/
  this->TiberiumClass_field_110 = 0; /*0x721782*/
  this->TiberiumClass_field_114 = 0; /*0x721788*/
  this->TiberiumClass_field_118 = 0; /*0x72178e*/
  v3 = *(_DWORD *)&stru_A8EB00.?[416]; /*0x721794*/
  this->GrowthTimer[2] = 0; /*0x72179a*/
  this->GrowthTimer[0] = v3; /*0x7217a0*/
  this->ObjectClass = &TiberiumClass::`vftable'; /*0x7217a6*/
  this->? = &TiberiumClass::`vftable'; /*0x7217ac*/
  this->? = &TiberiumClass::`vftable'; /*0x7217b3*/
  this->? = &TiberiumClass::`vftable'; /*0x7217ba*/
  *(_DWORD *)&this->? = g_BuildingLoadQueue_Array.?[0]; /*0x7217c6*/
  if ( g_BuildingLoadQueue_Array.?[0] < g_BuildingLoadQueue_Array.?[3] /*0x7217fe*/
    || (g_BuildingLoadQueue_Array.?[0] || !g_BuildingLoadQueue_Array.?[3])
    && g_BuildingLoadQueue_Array.?[1] > 0
    && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(g_BuildingLoadQueue_Array.?[1] + 8))(
         &g_BuildingLoadQueue_Array.?[1],
         g_BuildingLoadQueue_Array.?[3] + g_BuildingLoadQueue_Array.?[1],
         0) )
  {
    v4 = g_BuildingLoadQueue_Array.?[0]++; /*0x72180b*/
    *(_DWORD *)(g_BuildingLoadQueue_Array.?[2] + 4 * v4) = this; /*0x72181a*/
  }
  (*(void (__thiscall **)(int *))(this->GrowthPercentage[1] + 12))(&this->GrowthPercentage[1]); /*0x721821*/
  if ( g_BuildingLoadQueue_Array.LightBlueTint < g_BuildingLoadQueue_Array.LightRedTint /*0x721857*/
    || (BYTE1(g_BuildingLoadQueue_Array.LightGreenTint) || !g_BuildingLoadQueue_Array.LightRedTint)
    && g_BuildingLoadQueue_Array.PrimaryFirePixelOffset[0] > 0
    && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(g_BuildingLoadQueue_Array.LightVisibility + 8))(
         &g_BuildingLoadQueue_Array.LightVisibility,
         g_BuildingLoadQueue_Array.LightRedTint + g_BuildingLoadQueue_Array.PrimaryFirePixelOffset[0],
         0) )
  {
    v5 = g_BuildingLoadQueue_Array.LightBlueTint++; /*0x721864*/
    *(_DWORD *)(g_BuildingLoadQueue_Array.LightIntensity + 4 * v5) = this; /*0x721873*/
  }
  return &this->ObjectClass; /*0x721878*/
}



// ==== 0x00721880  TiberiumClass::CleanupMembers  this=TiberiumClass  sig=csp ====
int __thiscall TiberiumClass::CleanupMembers(int this)
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
  *(_DWORD *)(this + 12) = &TiberiumClass::`vftable'; /*0x72189c*/
  AbstractClass::AnnounceExpiredPointer((void **)this, 1); /*0x7218a3*/
  v11 = this; /*0x7218b8*/
  v2 = (*(int (__thiscall **)(int *, int *))(g_BuildingLoadQueue_Array.LightVisibility + 16))( /*0x7218bc*/
         &g_BuildingLoadQueue_Array.LightVisibility,
         &v11);
  if ( v2 != -1 && v2 < g_BuildingLoadQueue_Array.LightBlueTint ) /*0x7218cc*/
  {
    --g_BuildingLoadQueue_Array.LightBlueTint; /*0x7218d1*/
    for ( ; /*0x7218d7*/
          v2 < g_BuildingLoadQueue_Array.LightBlueTint;
          *(_DWORD *)(g_BuildingLoadQueue_Array.LightIntensity + 4 * v2 - 4) = *(_DWORD *)(g_BuildingLoadQueue_Array.LightIntensity
                                                                                         + 4 * v2) )
    {
      ++v2; /*0x7218df*/
    }
  }
  v11 = this; /*0x721901*/
  v3 = (*(int (__thiscall **)(int *, int *))(g_BuildingLoadQueue_Array.?[1] + 16))( /*0x721905*/
         &g_BuildingLoadQueue_Array.?[1],
         &v11);
  if ( v3 != -1 && v3 < g_BuildingLoadQueue_Array.?[0] ) /*0x721915*/
  {
    --g_BuildingLoadQueue_Array.?[0]; /*0x72191a*/
    for ( ; /*0x721920*/
          v3 < g_BuildingLoadQueue_Array.?[0];
          *(_DWORD *)(g_BuildingLoadQueue_Array.?[2] + 4 * v3 - 4) = *(_DWORD *)(g_BuildingLoadQueue_Array.?[2] + 4 * v3) )
    {
      ++v3; /*0x721928*/
    }
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
  *(_DWORD *)(this + 196) = &VectorClass<AnimTypeClass const *>::`vftable'; /*0x721a09*/
  if ( v8 && *(_BYTE *)(this + 209) ) /*0x721a15*/
  {
    __3_YAXPAX_Z(v8); /*0x721a1e*/
    *(_DWORD *)(this + 200) = 0; /*0x721a26*/
  }
  *(_BYTE *)(this + 209) = 0; /*0x721a2e*/
  *(_DWORD *)(this + 204) = 0; /*0x721a34*/
  return AbstractTypeClass::Dtor((AbstractTypeClass *)this); /*0x721a3f*/
}



// ==== 0x00721A50  TiberiumClass::LoadFromINI  this=TiberiumClass  sig=csp ====
char __userpurge TiberiumClass::LoadFromINI@<al>(
        TiberiumClass *this,
        double a2@<st0>,
        double a3@<st1>,
        unsigned __int8 ***a4)
{
  int v4; // ecx
  int v5; // esi
  int Int_Overwrite; // eax
  int v7; // eax
  int v9; // eax
  int v10; // eax
  int v12; // eax
  int v13; // ecx
  int v14; // eax
  char *i; // eax
  int CapacityIncrement; // ecx
  int unknown_18; // edx
  void *Items; // eax
  char result; // al
  double v20; // [esp-Ch] [ebp-D0h]
  double v21; // [esp-Ch] [ebp-D0h]
  int v22; // [esp-8h] [ebp-CCh]
  _DWORD *v23; // [esp+8h] [ebp-BCh] BYREF
  TypeList v24; // [esp+Ch] [ebp-B8h] BYREF
  DynamicVector v25; // [esp+28h] [ebp-9Ch] BYREF

  v5 = v4; /*0x721a5f*/
  INIClass::ResetSection((INIClass *)this); /*0x721a63*/
  if ( !(unsigned __int8)AbstractTypeClass::LoadFromINI((AbstractTypeClass *)v5, (unsigned __int8 ***)this) ) /*0x721a6b*/
    return 0; /*0x721cea*/
  Int_Overwrite = INIClass::ReadInt_Overwrite( /*0x721a8b*/
                    (bool *)this,
                    (unsigned __int8 *)(v5 + 36),
                    aSpread,
                    *(_DWORD *)(v5 + 156));
  v20 = *(double *)(v5 + 160); /*0x721a9d*/
  *(_DWORD *)(v5 + 156) = Int_Overwrite; /*0x721aa6*/
  INIClass::ReadDouble_Overwrite((double *)this, (unsigned __int8 *)(v5 + 36), aSpreadpercenta, v20); /*0x721aac*/
  v7 = *(_DWORD *)(v5 + 168); /*0x721ab1*/
  __asm { fstp qword ptr [esi+0A0h] } /*0x721ab9*/
  *(double *)(v5 + 160) = _RT1; /*0x721ab9*/
  v9 = INIClass::ReadInt_Overwrite((bool *)this, (unsigned __int8 *)(v5 + 36), aGrowth, v7); /*0x721ac6*/
  v21 = *(double *)(v5 + 176); /*0x721ad8*/
  *(_DWORD *)(v5 + 168) = v9; /*0x721ae1*/
  INIClass::ReadDouble_Overwrite((double *)this, (unsigned __int8 *)(v5 + 36), aGrowthpercenta, v21); /*0x721ae7*/
  v10 = *(_DWORD *)(v5 + 184); /*0x721aec*/
  __asm { fstp qword ptr [esi+0B0h] } /*0x721af4*/
  *(double *)(v5 + 176) = _RT1; /*0x721af4*/
  v12 = INIClass::ReadInt_Overwrite((bool *)this, (unsigned __int8 *)(v5 + 36), aValue, v10); /*0x721b01*/
  v13 = *(_DWORD *)(v5 + 188); /*0x721b06*/
  *(_DWORD *)(v5 + 184) = v12; /*0x721b0c*/
  v14 = INIClass::ReadInt_Overwrite((bool *)this, (unsigned __int8 *)(v5 + 36), aPower_0, v13); /*0x721b1b*/
  v22 = *(_DWORD *)(v5 + 192); /*0x721b28*/
  *(_DWORD *)(v5 + 188) = v14; /*0x721b2f*/
  *(_DWORD *)(v5 + 192) = BuildingTypeClass::FindAnimByName( /*0x721b3a*/
                            (BuildingTypeClass *)this,
                            (unsigned __int8 *)(v5 + 36),
                            (unsigned __int8 *)&stru_81AF8C.?[95],
                            v22);
  if ( INIClass::GetString( /*0x721b57*/
         (INIClass *)this,
         (unsigned __int8 *)(v5 + 36),
         aDebris,
         &g_INI_DefaultBuffer,
         (char *)&v25.DynamicVector_field_0x1C,
         128) )
  {
    DynamicVectorClass::AnimTypeConstructor((DynamicVectorClass *)&v25, 0, 0); /*0x721b6c*/
    *(_DWORD *)v25.__pad_0 = &TypeList<AnimTypeClass const *>::`vftable'; /*0x721b7b*/
    for ( i = strtok((char *)&v25.DynamicVector_field_0x1C, Str); i; i = strtok(0, Str) ) /*0x721b8d*/
    {
      if ( !*i ) /*0x721b8f*/
        break; /*0x721b92*/
      v23 = AnimTypeClass::FindOrCreate(i); /*0x721b9d*/
      if ( v23 ) /*0x721ba1*/
        DynamicVector::Add_Alt4(&v25, &v23); /*0x721bac*/
    }
    TypeList::AnimTypeCopy(&v24, &v25); /*0x721bcd*/
    *(_DWORD *)v25.__pad_0 = &VectorClass<AnimTypeClass const *>::`vftable'; /*0x721bd6*/
    DynamicVectorClass::Destroy_Alt((_VectorClass_PBVAnimTypeClass *)&v25); /*0x721bde*/
  }
  else
  {
    TypeList::AnimTypeCopy(&v24, (_DWORD *)(v5 + 196)); /*0x721bf0*/
  }
  VectorClass::CopyDefault((VectorClass *)(v5 + 196), &v24); /*0x721c03*/
  CapacityIncrement = v24.?; /*0x721c0c*/
  unknown_18 = v24.unknown_18; /*0x721c10*/
  *(_DWORD *)(v5 + 212) = v24.?; /*0x721c14*/
  Items = v24.?; /*0x721c17*/
  *(_DWORD *)(v5 + 216) = CapacityIncrement; /*0x721c1b*/
  *(_DWORD *)(v5 + 220) = unknown_18; /*0x721c1e*/
  v24.DynamicVectorClass = &VectorClass<AnimTypeClass const *>::`vftable'; /*0x721c21*/
  if ( Items && v24.? ) /*0x721c34*/
    __3_YAXPAX_Z(Items); /*0x721c37*/
  switch ( INIClass::ReadInt_Overwrite( /*0x721c55*/
             (bool *)this,
             (unsigned __int8 *)(v5 + 36),
             (unsigned __int8 *)g_INI_Key_Image,
             -1) )
  {
    case -1: /*0x721c55*/
      goto LABEL_19;
    case 2: /*0x721c55*/
      *(_DWORD *)(v5 + 224) = *(_DWORD *)(*(_DWORD *)stru_A83D50.__pad_34 + 108); /*0x721c69*/
      *(_DWORD *)(v5 + 228) = 12; /*0x721c6f*/
      *(_DWORD *)(v5 + 232) = 12; /*0x721c75*/
      return 1; /*0x721c85*/
    case 3: /*0x721c55*/
      *(_DWORD *)(v5 + 224) = *(_DWORD *)(*(_DWORD *)stru_A83D50.__pad_34 + 508); /*0x721c94*/
      goto LABEL_18; /*0x721c9a*/
    case 4: /*0x721c55*/
      *(_DWORD *)(v5 + 224) = *(_DWORD *)(*(_DWORD *)stru_A83D50.__pad_34 + 588); /*0x721ca8*/
      goto LABEL_18; /*0x721cae*/
    default:
      *(_DWORD *)(v5 + 224) = *(_DWORD *)(*(_DWORD *)stru_A83D50.__pad_34 + 408); /*0x721cbb*/
LABEL_18:
      *(_DWORD *)(v5 + 236) = 8; /*0x721cc1*/
      *(_DWORD *)(v5 + 228) = 12; /*0x721cd0*/
      *(_DWORD *)(v5 + 232) = 12; /*0x721cd6*/
LABEL_19:
      result = 1; /*0x721cdc*/
      break; /*0x721ce6*/
  }
  return result; /*0x721c7b*/
}



// ==== 0x00721D10  ObjectClass::SmallFunc_721D10  this=INIClass  sig=csp ====
char __thiscall SmallFunc_721D10(INIClass *this)
{
  int KeyCount; // ebp
  int v3; // ebx
  char *StringByIndex; // esi
  int v5; // eax
  _DWORD *v6; // eax
  TiberiumClass *v7; // eax
  char Destination[24]; // [esp+Ch] [ebp-18h] BYREF

  KeyCount = INIClass::GetKeyCount(this->__pad_0, g_INI_Key_Tiberiums); /*0x721d22*/
  v3 = 0; /*0x721d24*/
  if ( KeyCount <= 0 ) /*0x721d28*/
    return 1; /*0x721db3*/
  do /*0x721da5*/
  {
    StringByIndex = (char *)INIClass::GetStringByIndex(this->__pad_0, g_INI_Key_Tiberiums, v3); /*0x721d3c*/
    if ( INIClass::GetString( /*0x721d59*/
           this,
           g_INI_Key_Tiberiums,
           (unsigned __int8 *)StringByIndex,
           &g_INI_DefaultBuffer,
           Destination,
           24) > 0 )
    {
      v5 = atoi(StringByIndex); /*0x721d5c*/
      if ( v5 >= g_BuildingLoadQueue_Array.?[0] ) /*0x721d6c*/
      {
        v7 = (TiberiumClass *)__2_YAPAXI_Z(0x128u); /*0x721d7e*/
        if ( v7 ) /*0x721d88*/
          v6 = TiberiumClass::TiberiumClass(v7, Destination); /*0x721d91*/
        else
          v6 = 0; /*0x721d98*/
      }
      else
      {
        v6 = *(_DWORD **)(g_BuildingLoadQueue_Array.?[2] + 4 * v5); /*0x721d74*/
      }
      (*(void (__thiscall **)(_DWORD *, INIClass *))(*v6 + 100))(v6, this); /*0x721d9f*/
    }
    ++v3; /*0x721da2*/
  }
  while ( v3 < KeyCount ); /*0x721da5*/
  return 1; /*0x721da8*/
}



// ==== 0x00721DC0  TiberiumClass::Harvest  this=TiberiumClass  sig=csp ====
int __thiscall TiberiumClass::Harvest(TiberiumClass *this, int *a2)
{
  AbstractTypeClass::ProcessPower((AbstractTypeClass *)this, a2); /*0x721dc9*/
  Power::TimerProcess(this->?[0]); /*0x721dd7*/
  Power::TimerProcess((int)this->?); /*0x721de5*/
  Power::TimerProcess(this->SpreadPercentage[1]); /*0x721df3*/
  Power::TimerProcess(this->Growth); /*0x721e01*/
  Power::TimerProcess(this->GrowthPercentage[0]); /*0x721e0f*/
  Power::TimerProcess(*(_DWORD *)this->__pad_E4); /*0x721e1d*/
  return Power::TimerProcess(*(_DWORD *)&this->__pad_E4[4]); /*0x721e30*/
}



// ==== 0x00721E40  TiberiumClass::ddtor  this=TiberiumClass  sig=csp ====
int __stdcall TiberiumClass::ddtor(TiberiumClass *this, _DWORD *a2)
{
  if ( !a2 ) /*0x721e46*/
    return -2147467261; /*0x721e48*/
  *a2 = -985803917; /*0x721e56*/
  a2[1] = 298980638; /*0x721e5e*/
  a2[2] = 1610642817; /*0x721e67*/
  a2[3] = unk_7E992C; /*0x721e70*/
  return 0; /*0x721e4d*/
}



// ==== 0x00721E80  TiberiumClass::SaveLoad_Prefix  this=TiberiumClass  sig=csp ====
int __stdcall TiberiumClass::SaveLoad_Prefix(TiberiumClass *this, int a2)
{
  TiberiumClass *v2; // esi
  int v3; // ebp
  _DWORD *TiberiumClass_field_F4; // eax
  int i; // ecx
  Scalar *v6; // ecx
  _DWORD *TiberiumClass_field_110; // eax
  int j; // ecx
  Scalar *v9; // ecx
  int v10; // eax
  int v11; // ebx
  int result; // eax
  int v13; // edi

  v2 = this; /*0x721e83*/
  v3 = 0; /*0x721e87*/
  TiberiumClass_field_F4 = (_DWORD *)this->TiberiumClass_field_F4; /*0x721e8a*/
  if ( TiberiumClass_field_F4 ) /*0x721e92*/
  {
    for ( i = 0; i <= *TiberiumClass_field_F4; *(_DWORD *)(TiberiumClass_field_F4[2] + 4 * i - 4) = 0 ) /*0x721e9a*/
      ++i; /*0x721e9f*/
    *TiberiumClass_field_F4 = 0; /*0x721eaa*/
    v6 = (Scalar *)v2->TiberiumClass_field_F4; /*0x721eac*/
    if ( v6 ) /*0x721eb4*/
      Scalar::Dtor(v6, 1); /*0x721eb8*/
    v2->TiberiumClass_field_F4 = 0; /*0x721ebd*/
  }
  if ( v2->TiberiumClass_field_FC ) /*0x721ec3*/
  {
    __3_YAXPAX_Z((void *)v2->TiberiumClass_field_FC); /*0x721ece*/
    v2->TiberiumClass_field_FC = 0; /*0x721ed6*/
  }
  if ( v2->TiberiumClass_field_F8 ) /*0x721edc*/
  {
    __3_YAXPAX_Z((void *)v2->TiberiumClass_field_F8); /*0x721ee7*/
    v2->TiberiumClass_field_F8 = 0; /*0x721eef*/
  }
  TiberiumClass_field_110 = (_DWORD *)v2->TiberiumClass_field_110; /*0x721ef5*/
  v2->TiberiumClass_field_F0 = 0; /*0x721efb*/
  if ( TiberiumClass_field_110 ) /*0x721f03*/
  {
    for ( j = 0; j <= *TiberiumClass_field_110; *(_DWORD *)(TiberiumClass_field_110[2] + 4 * j - 4) = 0 ) /*0x721f0b*/
      ++j; /*0x721f10*/
    *TiberiumClass_field_110 = 0; /*0x721f1b*/
    v9 = (Scalar *)v2->TiberiumClass_field_110; /*0x721f1d*/
    if ( v9 ) /*0x721f25*/
      Scalar::Dtor(v9, 1); /*0x721f29*/
    v2->TiberiumClass_field_110 = 0; /*0x721f2e*/
  }
  if ( v2->TiberiumClass_field_118 ) /*0x721f34*/
  {
    __3_YAXPAX_Z((void *)v2->TiberiumClass_field_118); /*0x721f3f*/
    v2->TiberiumClass_field_118 = 0; /*0x721f47*/
  }
  if ( v2->TiberiumClass_field_114 ) /*0x721f4d*/
  {
    __3_YAXPAX_Z((void *)v2->TiberiumClass_field_114); /*0x721f58*/
    v2->TiberiumClass_field_114 = 0; /*0x721f60*/
  }
  v10 = v2->GrowthPercentage[1]; /*0x721f66*/
  v2->TiberiumClass_field_10C = 0; /*0x721f74*/
  (*(void (__thiscall **)(int *))(v10 + 12))(&v2->GrowthPercentage[1]); /*0x721f7a*/
  v11 = a2; /*0x721f7d*/
  result = AbstractClass::SaveLoad_Prefix_0(v2, a2); /*0x721f83*/
  if ( result >= 0 ) /*0x721f8a*/
  {
    if ( v2 ) /*0x721f92*/
    {
      AbstractTypeClass::Init((int)v2, (int)&this); /*0x721f9b*/
      DynamicVectorClass::AnimTypeConstructor((DynamicVectorClass *)&v2->GrowthPercentage[1], 0, 0); /*0x721fa4*/
      v2->GrowthPercentage[1] = (int)&TypeList<AnimTypeClass const *>::`vftable'; /*0x721fb0*/
      Timer::Start((Timer *)v2->SpreadTimer, 0); /*0x721fb6*/
      Timer::Start((Timer *)v2->GrowthTimer, 0); /*0x721fc2*/
      v2->ObjectClass = &TiberiumClass::`vftable'; /*0x721fc7*/
      v2->? = &TiberiumClass::`vftable'; /*0x721fcd*/
      v2->? = &TiberiumClass::`vftable'; /*0x721fd4*/
      v2->? = &TiberiumClass::`vftable'; /*0x721fdb*/
    }
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, &v2->NumImages); /*0x721fee*/
    if ( v2 != (TiberiumClass *)-196 ) /*0x721ff5*/
      AnimTypeList::Constructor((AnimTypeList *)&v2->GrowthPercentage[1]); /*0x721ff9*/
    (*(void (__stdcall **)(int, TiberiumClass **, int, _DWORD))(*(_DWORD *)v11 + 12))(v11, &this, 4, 0); /*0x722009*/
    result = 0; /*0x72200c*/
    if ( (int)this > 0 ) /*0x722012*/
    {
      do /*0x722037*/
      {
        (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)v11 + 12))(v11, &a2, 4, 0); /*0x722023*/
        DynamicVector::Add_Alt4((DynamicVector *)&v2->GrowthPercentage[1], &a2); /*0x72202d*/
        ++v3; /*0x722032*/
      }
      while ( v3 < (int)this ); /*0x722037*/
      result = 0; /*0x722039*/
    }
    v13 = 0; /*0x722041*/
    if ( v2->Debris[0] > 0 ) /*0x722045*/
    {
      do /*0x722064*/
        ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)(v2->Value + 4 * v13++)); /*0x722056*/
      while ( v13 < v2->Debris[0] ); /*0x722064*/
      result = 0; /*0x722066*/
    }
    v2->TiberiumClass_field_110 = 0; /*0x722068*/
    v2->TiberiumClass_field_114 = 0; /*0x72206e*/
    v2->TiberiumClass_field_118 = 0; /*0x722074*/
    v2->TiberiumClass_field_F4 = 0; /*0x72207a*/
    v2->TiberiumClass_field_F8 = 0; /*0x722080*/
    v2->TiberiumClass_field_FC = 0; /*0x722086*/
  }
  return result; /*0x72208c*/
}



// ==== 0x007220A0  TiberiumClass::SpreadGrowth  this=TiberiumClass  sig=csp ====
int __thiscall TiberiumClass::SpreadGrowth(TiberiumClass *this, int a2, _DWORD *a3)
{
  int result; // eax

  result = ObjectClass::GetSizeMax((AbstractClass *)this); /*0x7220ac*/
  if ( result >= 0 ) /*0x7220b3*/
  {
    *a3 += 4 * *(_DWORD *)(a2 + 212) + 4; /*0x7220c6*/
    return 0; /*0x7220c8*/
  }
  return result; /*0x7220ca*/
}



// ==== 0x007220D0  TiberiumClass::SaveLoad_Prefix_0  this=TiberiumClass  sig=csp ====
int __stdcall TiberiumClass::SaveLoad_Prefix_0(TiberiumClass *this, int *a2, int a3)
{
  int result; // eax
  int v4; // edx
  int i; // esi

  result = AbstractClass::SaveLoad_Prefix((int *)this, a2, a3); /*0x7220e1*/
  if ( result >= 0 ) /*0x7220e8*/
  {
    v4 = *a2; /*0x7220f0*/
    a3 = this->Debris[0]; /*0x7220fd*/
    (*(void (__stdcall **)(int *, int *, int, _DWORD))(v4 + 16))(a2, &a3, 4, 0); /*0x722101*/
    for ( i = 0; i < a3; ++i ) /*0x72210c*/
      (*(void (__stdcall **)(int *, int, int, _DWORD))(*a2 + 16))(a2, this->Value + 4 * i, 4, 0); /*0x72211f*/
    return 0; /*0x722129*/
  }
  return result; /*0x72212c*/
}



// ==== 0x00722140  TiberiumClass::UpdateField  this=TiberiumClass  sig=csp ====
int __thiscall TiberiumClass::UpdateField(TiberiumClass *this, int a2, int a3)
{
  int i; // edx
  int v4; // eax
  int v5; // esi
  int v6; // eax
  int result; // eax

  for ( i = this->Debris[0] - 1; i >= 0; --i ) /*0x72214c*/
  {
    if ( *(_DWORD *)(this->Value + 4 * i) == a2 ) /*0x722159*/
    {
      v4 = this->Debris[0]; /*0x72215b*/
      if ( i < v4 ) /*0x722163*/
      {
        v5 = v4 - 1; /*0x722165*/
        v6 = i; /*0x722168*/
        for ( this->Debris[0] = v5; /*0x722172*/
              v6 < this->Debris[0];
              *(_DWORD *)(this->Value + 4 * v6 - 4) = *(_DWORD *)(this->Value + 4 * v6) )
        {
          ++v6; /*0x72217a*/
        }
      }
    }
  }
  result = this->NumImages; /*0x722191*/
  if ( result == a2 ) /*0x72219a*/
    this->NumImages = 0; /*0x72219c*/
  return result; /*0x722199*/
}



// ==== 0x007221B0  ObjectClass::ProcessSpeechEvents  this=ObjectClass  sig=csp ====
void *ProcessSpeechEvents(ObjectClass *this)
{
  void *result; // eax
  int i; // esi
  ObjectClass *v3; // ecx
  int v4; // edi
  int v5; // eax
  _DWORD *v6; // ecx
  int v7; // edx
  int v8; // [esp+8h] [ebp-8h]

  result = dword_A8B230; /*0x7221b0*/
  if ( BYTE2(dword_A8B230[374].vtable3) ) /*0x7221b8*/
  {
    result = (void *)g_BuildingLoadQueue_Array.?[0]; /*0x7221c3*/
    for ( i = 0; i < g_BuildingLoadQueue_Array.?[0]; ++i ) /*0x7221cc*/
    {
      v3 = *(ObjectClass **)(g_BuildingLoadQueue_Array.?[2] + 4 * i); /*0x7221da*/
      v4 = v3[1].customSound_controller[1]; /*0x7221dd*/
      v5 = v3[1].customSound_controller[3]; /*0x7221e3*/
      if ( v4 != -1 ) /*0x7221ec*/
      {
        if ( *(_DWORD *)&stru_A8EB00.?[416] - v4 >= v5 ) /*0x7221f8*/
          goto LABEL_7; /*0x7221f8*/
        v5 -= *(_DWORD *)&stru_A8EB00.?[416] - v4; /*0x7221fa*/
      }
      if ( !v5 ) /*0x7221fe*/
      {
LABEL_7:
        PropagateCellOccupancy(v3); /*0x722200*/
        v6 = (_DWORD *)(*(_DWORD *)(g_BuildingLoadQueue_Array.?[2] + 4 * i) + 256); /*0x722216*/
        v7 = *(_DWORD *)(*(_DWORD *)(g_BuildingLoadQueue_Array.?[2] + 4 * i) + 156); /*0x72221c*/
        *v6 = *(_DWORD *)&stru_A8EB00.?[416]; /*0x722222*/
        v6[1] = v8; /*0x722224*/
        v6[2] = v7; /*0x722227*/
      }
      result = (void *)g_BuildingLoadQueue_Array.?[0]; /*0x72222a*/
    }
  }
  return result; /*0x722236*/
}



// ==== 0x00722240  BuildingClass::ClearFactoryData  this=BuildingClass  sig=csp ====
int BuildingClass::ClearFactoryData(BuildingClass *this)
{
  int result; // eax
  int i; // ebp
  int v3; // edi
  _DWORD *v4; // eax
  int j; // ecx
  void **v6; // esi
  int v7; // esi
  int v8; // eax
  size_t v9; // eax
  _DWORD *v10; // esi
  int v11; // eax
  int v12; // eax
  int v13; // ecx
  int v14; // eax

  result = g_BuildingLoadQueue_Array.?[0]; /*0x722241*/
  for ( i = 0; i < g_BuildingLoadQueue_Array.?[0]; ++i ) /*0x72224e*/
  {
    v3 = *(_DWORD *)(g_BuildingLoadQueue_Array.?[2] + 4 * i); /*0x72225b*/
    v4 = *(_DWORD **)(v3 + 244); /*0x72225e*/
    if ( v4 ) /*0x722266*/
    {
      for ( j = 0; j <= *v4; *(_DWORD *)(v4[2] + 4 * j - 4) = 0 ) /*0x72226e*/
        ++j; /*0x722273*/
      *v4 = 0; /*0x72227e*/
      v6 = *(void ***)(v3 + 244); /*0x722280*/
      if ( v6 ) /*0x722288*/
      {
        __3_YAXPAX_Z(v6[2]); /*0x72228e*/
        __3_YAXPAX_Z(v6); /*0x722294*/
      }
      *(_DWORD *)(v3 + 244) = 0; /*0x72229c*/
    }
    if ( *(_DWORD *)(v3 + 252) ) /*0x7222a2*/
    {
      __3_YAXPAX_Z(*(void **)(v3 + 252)); /*0x7222ad*/
      *(_DWORD *)(v3 + 252) = 0; /*0x7222b5*/
    }
    if ( *(_DWORD *)(v3 + 248) ) /*0x7222bb*/
    {
      __3_YAXPAX_Z(*(void **)(v3 + 248)); /*0x7222c6*/
      *(_DWORD *)(v3 + 248) = 0; /*0x7222ce*/
    }
    *(_DWORD *)(v3 + 240) = 0; /*0x7222d4*/
    v7 = Object::ComputeAllocationSize(); /*0x7222df*/
    v8 = __2_YAPAXI_Z(8 * v7); /*0x7222e9*/
    if ( !v8 ) /*0x7222f3*/
      v8 = 0; /*0x7222fc*/
    *(_DWORD *)(v3 + 252) = v8; /*0x7222fe*/
    v9 = Object::ComputeAllocationSize(); /*0x722304*/
    *(_DWORD *)(v3 + 248) = __2_YAPAXI_Z(v9); /*0x722311*/
    v10 = (_DWORD *)__2_YAPAXI_Z(0x14u); /*0x72231c*/
    if ( v10 ) /*0x722323*/
    {
      v11 = Object::ComputeAllocationSize(); /*0x722325*/
      v10[3] = 0; /*0x722331*/
      v10[4] = -1; /*0x722335*/
      *v10 = 0; /*0x72233c*/
      v10[1] = v11; /*0x72233e*/
      v12 = __2_YAPAXI_Z(4 * v11 + 4); /*0x722341*/
      v13 = v10[1]; /*0x722346*/
      v10[2] = v12; /*0x722349*/
      v14 = 0; /*0x72234f*/
      if ( v13 >= 0 ) /*0x722353*/
      {
        do /*0x722362*/
        {
          ++v14; /*0x722358*/
          *(_DWORD *)(v10[2] + 4 * v14 - 4) = 0; /*0x722359*/
        }
        while ( v14 <= v10[1] ); /*0x722362*/
      }
    }
    else
    {
      v10 = 0; /*0x722366*/
    }
    *(_DWORD *)(v3 + 244) = v10; /*0x72236a*/
    AudioClass::ProcessEvent((AudioClass *)v3); /*0x722370*/
    result = g_BuildingLoadQueue_Array.?[0]; /*0x722375*/
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

  result = dword_B0F4F8; /*0x722390*/
  for ( i = 0; i < dword_B0F4F8; ++i ) /*0x72239d*/
  {
    v2 = *((_DWORD *)dword_B0F4EC + i); /*0x7223aa*/
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
    result = dword_B0F4F8; /*0x722429*/
  }
  return result; /*0x722439*/
}



// ==== 0x00722440  ObjectClass::PropagateCellOccupancy  this=ObjectClass  sig=csp ====
void __thiscall PropagateCellOccupancy(ObjectClass *this)
{
  ObjectClass *v1; // ebx
  int *v2; // eax
  int v3; // eax
  int v4; // esi
  int v5; // et2
  int v6; // esi
  int v7; // edi
  Heap *v8; // ecx
  __int16 *v9; // eax
  Heap v10; // eax
  __int16 *v11; // esi
  int v12; // ebp
  char *v13; // esi
  signed int i; // edi
  void *NeighbourContent; // eax
  Cell *v16; // ebp
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
  Cell *v36; // [esp+18h] [ebp-10h]
  unsigned int v37; // [esp+1Ch] [ebp-Ch]
  __int16 *v38; // [esp+1Ch] [ebp-Ch]
  int v39; // [esp+20h] [ebp-8h]

  v1 = this; /*0x722444*/
  v2 = (int *)this->q03D; /*0x722448*/
  if ( v2 && *v2 && *(double *)&this->location[1] > 0.00001 ) /*0x72247a*/
  {
    LOWORD(v3) = Math::RoundToInt((double)*v2 * *(double *)&this->location[1]); /*0x72248a*/
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
    v5 = (int)abs32(Random::State((Random *)&dword_A8B230[14].NeedsSaveOrLink)) % v4; /*0x7224ca*/
    v6 = *(_DWORD *)v1[1].ambientSoundController[3]; /*0x7224cc*/
    v7 = v5 + 1; /*0x7224d0*/
    v39 = v5 + 1; /*0x7224d1*/
    if ( v6 > Object::ComputeAllocationSize() - 20 ) /*0x7224df*/
      AudioClass::ProcessEvent((AudioClass *)v1); /*0x7224e3*/
    v8 = (Heap *)v1[1].ambientSoundController[3]; /*0x7224e8*/
    v34 = 0; /*0x7224ee*/
    if ( *v8 ) /*0x7224f6*/
    {
      v10 = v8[2]; /*0x722500*/
      v11 = *(__int16 **)(*(_DWORD *)&v10 + 4); /*0x722508*/
      *(_DWORD *)(*(_DWORD *)&v10 + 4) = *(_DWORD *)(*(_DWORD *)&v10 + 4 * *(_DWORD *)v8); /*0x72250b*/
      *(_DWORD *)(*(_DWORD *)&v8[2] + 4 * (*(_DWORD *)v8)--) = 0; /*0x722513*/
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
          v13 = (char *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v9); /*0x722543*/
          for ( i = 0; i < 8; ++i ) /*0x722545*/
          {
            NeighbourContent = Cell::GetNeighbourContent((Cell *)v13, i); /*0x72254a*/
            if ( (unsigned __int8)IsCoordValidMap((int)NeighbourContent, 0) ) /*0x722553*/
              ++v12; /*0x72255c*/
          }
          if ( v12 ) /*0x722565*/
          {
            CellClass::SpawnTiberiumTree((CellClass *)v13, 0); /*0x72256f*/
            ++v34; /*0x72257c*/
            if ( v12 > 1 ) /*0x722580*/
            {
              v16 = (Cell *)(v13 + 36); /*0x722595*/
              *(_DWORD *)(v1[1].customSound_controller[0] + 8 * v1[1].ambientSoundController[2]) = *((_DWORD *)v13 + 9); /*0x722598*/
              v36 = (Cell *)(v13 + 36); /*0x7225a7*/
              *(_DWORD *)(v1[1].customSound_controller[0] + 8 * v1[1].ambientSoundController[2] + 4) = 0; /*0x7225ab*/
              v17 = v1[1].ambientSoundController[2]; /*0x7225b3*/
              v18 = (_DWORD *)v1[1].ambientSoundController[3]; /*0x7225bf*/
              v19 = v1[1].customSound_controller[0] + 8 * v17; /*0x7225c5*/
              v1[1].ambientSoundController[2] = v17 + 1; /*0x7225c9*/
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
              *(_BYTE *)(Cell::PosToIndex(v16) + v1[1].ambientSoundController[4]) = 1; /*0x72263f*/
            }
          }
          else
          {
            *(_BYTE *)(Cell::PosToIndex((Cell *)(v13 + 36)) + v1[1].ambientSoundController[4]) = 0; /*0x722653*/
          }
          if ( v34 >= v39 ) /*0x722661*/
            return; /*0x722661*/
          v25 = (int *)v1[1].ambientSoundController[3]; /*0x722667*/
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
int __thiscall BuildingClass::RebuildOccupancyTracking(BuildingClass *this)
{
  _DWORD *v2; // eax
  int i; // ecx
  void **v4; // esi
  int v5; // esi
  int v6; // eax
  size_t v7; // eax
  _DWORD *v8; // esi
  int v9; // eax
  int v10; // eax
  int v11; // ecx
  int v12; // eax

  v2 = (_DWORD *)this->?[1]; /*0x722778*/
  if ( v2 ) /*0x722780*/
  {
    for ( i = 0; i <= *v2; *(_DWORD *)(v2[2] + 4 * i - 4) = 0 ) /*0x722788*/
      ++i; /*0x72278d*/
    *v2 = 0; /*0x722798*/
    v4 = (void **)this->?[1]; /*0x72279a*/
    if ( v4 ) /*0x7227a2*/
    {
      __3_YAXPAX_Z(v4[2]); /*0x7227a8*/
      __3_YAXPAX_Z(v4); /*0x7227ae*/
    }
    this->?[1] = 0; /*0x7227b6*/
  }
  if ( this->?[1] ) /*0x7227bc*/
  {
    __3_YAXPAX_Z((void *)this->?[1]); /*0x7227c7*/
    this->?[1] = 0; /*0x7227cf*/
  }
  if ( this->?[0] ) /*0x7227d5*/
  {
    __3_YAXPAX_Z((void *)this->?[0]); /*0x7227e0*/
    this->?[0] = 0; /*0x7227e8*/
  }
  this->?[0] = 0; /*0x7227ee*/
  v5 = Object::ComputeAllocationSize(); /*0x7227f9*/
  v6 = __2_YAPAXI_Z(8 * v5); /*0x722803*/
  if ( !v6 ) /*0x72280d*/
    v6 = 0; /*0x722816*/
  this->?[1] = v6; /*0x722818*/
  v7 = Object::ComputeAllocationSize(); /*0x72281e*/
  this->?[0] = __2_YAPAXI_Z(v7); /*0x72282b*/
  v8 = (_DWORD *)__2_YAPAXI_Z(0x14u); /*0x722836*/
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
  this->?[1] = (int)v8; /*0x722894*/
  return AudioClass::ProcessEvent((AudioClass *)this); /*0x72288b*/
}



// ==== 0x007228B0  AudioClass::ProcessEvent  this=AbstractClass  sig=csp ====
int __thiscall AudioClass::ProcessEvent(AudioClass *this)
{
  int v2; // ecx
  int *v3; // eax
  int i; // eax
  int result; // eax
  BuildingClass *j; // edi
  Cell *p_occupant; // ecx
  int v8; // eax
  _DWORD *v9; // ebp
  unsigned int v10; // ebx
  unsigned int v11; // edx
  unsigned int v12; // edi
  int v13; // ecx
  int v14; // ebx
  unsigned int v15; // eax
  float v16; // [esp+8h] [ebp-Ch]
  Cell *v17; // [esp+Ch] [ebp-8h]
  unsigned int v18; // [esp+10h] [ebp-4h]

  v2 = 0; /*0x7228b6*/
  v3 = (int *)*((_DWORD *)this + 61); /*0x7228b9*/
  *((_DWORD *)this + 60) = 0; /*0x7228bf*/
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
  for ( i = Object::ComputeAllocationSize() - 1; i >= 0; *(_BYTE *)(*((_DWORD *)this + 62) + i + 1) = 0 ) /*0x7228ec*/
    --i; /*0x7228f4*/
  LayerClass::CellIteratorReset((LayerClass *)&stru_87F5F0.__pad_58[416]); /*0x722901*/
  result = LayerClass::CellIteratorNext((LayerClass *)&stru_87F5F0.__pad_58[416]); /*0x72290b*/
  for ( j = (BuildingClass *)result; result; j = (BuildingClass *)result ) /*0x722914*/
  {
    if ( BuildingClass::FindByCellHash(j) == *((_DWORD *)this + 38) && BuildingClass::IsTiberiumSiloEligible(j) ) /*0x722931*/
    {
      p_occupant = (Cell *)&j->?; /*0x72294a*/
      v17 = (Cell *)&j->?; /*0x72294d*/
      *(_DWORD *)(*((_DWORD *)this + 63) + 8 * *((_DWORD *)this + 60)) = j->?; /*0x722953*/
      *(_DWORD *)(*((_DWORD *)this + 63) + 8 * *((_DWORD *)this + 60) + 4) = 0; /*0x722962*/
      v8 = *((_DWORD *)this + 60); /*0x72296a*/
      v9 = (_DWORD *)*((_DWORD *)this + 61); /*0x722976*/
      v10 = *((_DWORD *)this + 63) + 8 * v8; /*0x72297c*/
      *((_DWORD *)this + 60) = v8 + 1; /*0x722980*/
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
          p_occupant = v17; /*0x7229c5*/
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
      *(_BYTE *)(Cell::PosToIndex(p_occupant) + *((_DWORD *)this + 62)) = 1; /*0x7229f7*/
    }
    result = LayerClass::CellIteratorNext((LayerClass *)&stru_87F5F0.__pad_58[416]); /*0x722a00*/
  }
  return result; /*0x722a11*/
}



// ==== 0x00722A20  ObjectClass::method_722A20  this=ObjectClass  sig=csp ====
void __thiscall sub_722A20(ObjectClass *this)
{
  _DWORD *v2; // eax
  int i; // ecx
  void **v4; // edi

  v2 = (_DWORD *)this->q03D; /*0x722a26*/
  if ( v2 ) /*0x722a2e*/
  {
    for ( i = 0; i <= *v2; *(_DWORD *)(v2[2] + 4 * i - 4) = 0 ) /*0x722a36*/
      ++i; /*0x722a3b*/
    *v2 = 0; /*0x722a47*/
    v4 = (void **)this->q03D; /*0x722a49*/
    if ( v4 ) /*0x722a51*/
    {
      __3_YAXPAX_Z(v4[2]); /*0x722a57*/
      __3_YAXPAX_Z(v4); /*0x722a5d*/
    }
    this->q03D = 0; /*0x722a65*/
  }
  if ( *((_DWORD *)this + 63) ) /*0x722a6c*/
  {
    __3_YAXPAX_Z(*((void **)this + 63)); /*0x722a77*/
    *((_DWORD *)this + 63) = 0; /*0x722a7f*/
  }
  if ( *((_DWORD *)this + 62) ) /*0x722a85*/
  {
    __3_YAXPAX_Z(*((void **)this + 62)); /*0x722a90*/
    *((_DWORD *)this + 62) = 0; /*0x722a98*/
  }
  this->ambientSoundController = 0; /*0x722a9e*/
}



// ==== 0x00722AB0  CellClass::ClearCrateStateForAll  this=CellClass  sig=csp ====
int __thiscall CellClass::ClearCrateStateForAll(CellClass *this)
{
  int result; // eax
  int i; // ecx

  result = Cell::PosToIndex((Cell *)this); /*0x722ab0*/
  for ( i = 0; /*0x722abf*/
        i < g_BuildingLoadQueue_Array.?[0];
        *(_BYTE *)(*(_DWORD *)(*(_DWORD *)(g_BuildingLoadQueue_Array.?[2] + 4 * i - 4) + 248) + result) = 0 )
  {
    ++i; /*0x722ac7*/
  }
  return result; /*0x722ae0*/
}



// ==== 0x00722AF0  BuildingClass::AddOccupancy  this=AbstractClass  sig=csp ====
int __thiscall BuildingClass::AddOccupancy(int *this, __int16 *a2)
{
  __int16 *v2; // ebp
  int v4; // edi
  BuildingClass *v5; // eax
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
  v4 = Cell::PosToIndex((Cell *)a2); /*0x722b09*/
  v5 = (BuildingClass *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], a2); /*0x722b0b*/
  LOBYTE(result) = BuildingClass::IsTiberiumSiloEligible(v5); /*0x722b12*/
  if ( (_BYTE)result ) /*0x722b19*/
  {
    result = *(this + 62); /*0x722b1f*/
    if ( !*(_BYTE *)(result + v4) ) /*0x722b25*/
    {
      if ( *(this + 60) >= Object::ComputeAllocationSize() - 20 ) /*0x722b3f*/
        AudioClass::ProcessEvent((AudioClass *)this); /*0x722b43*/
      *(_DWORD *)(*(this + 63) + 8 * *(this + 60)) = *(_DWORD *)a2; /*0x722b58*/
      *(float *)(*(this + 63) + 8 * *(this + 60) + 4) = (float)(*(_DWORD *)&stru_A8EB00.?[416] /*0x722b95*/
                                                              + (int)abs32(Random::State((Random *)&dword_A8B230[14].NeedsSaveOrLink))
                                                              % 50);
      v7 = *(this + 60); /*0x722b99*/
      v8 = (_DWORD *)*(this + 61); /*0x722ba5*/
      v9 = *(this + 63) + 8 * v7; /*0x722bab*/
      *(this + 60) = v7 + 1; /*0x722baf*/
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
      result = Cell::PosToIndex((Cell *)v2); /*0x722c1a*/
      *(_BYTE *)(result + *(this + 62)) = 1; /*0x722c26*/
    }
  }
  return result; /*0x722c2a*/
}



// ==== 0x00722C40  ObjectClass::UpdateAudioTriggers  this=ObjectClass  sig=csp ====
void *UpdateAudioTriggers(ObjectClass *this)
{
  void *result; // eax
  int i; // esi
  ObjectClass *v3; // ecx
  int estimatedHealth; // edi
  int spawnStatus; // eax
  double v6; // st7
  int v7; // ebx
  int v8; // edi
  int v9; // eax
  _DWORD *v10; // ecx
  int v11; // [esp+8h] [ebp-8h]

  result = dword_A8B230; /*0x722c40*/
  if ( BYTE2(dword_A8B230[374].vtable3) ) /*0x722c48*/
  {
    result = (void *)g_BuildingLoadQueue_Array.?[0]; /*0x722c57*/
    for ( i = 0; i < g_BuildingLoadQueue_Array.?[0]; ++i ) /*0x722c60*/
    {
      v3 = *(ObjectClass **)(g_BuildingLoadQueue_Array.?[2] + 4 * i); /*0x722c73*/
      estimatedHealth = v3[1].estimatedHealth; /*0x722c76*/
      spawnStatus = v3[1].spawnStatus; /*0x722c7c*/
      if ( estimatedHealth != -1 ) /*0x722c85*/
      {
        if ( *(_DWORD *)&stru_A8EB00.?[416] - estimatedHealth >= spawnStatus ) /*0x722c91*/
          goto LABEL_7; /*0x722c91*/
        spawnStatus -= *(_DWORD *)&stru_A8EB00.?[416] - estimatedHealth; /*0x722c93*/
      }
      if ( !spawnStatus ) /*0x722c97*/
      {
LABEL_7:
        RebuildBuildingOccupancy(v3); /*0x722c99*/
        if ( ((int)dword_A8B230->vtable0 & 0x40) != 0 ) /*0x722ca7*/
          v6 = 0.3; /*0x722ca9*/
        else
          v6 = 1.0; /*0x722cb1*/
        v7 = g_BuildingLoadQueue_Array.?[2]; /*0x722cb7*/
        v8 = *(_DWORD *)&stru_A8EB00.?[416]; /*0x722cbd*/
        LOWORD(v9) = Math::RoundToInt(v6); /*0x722cce*/
        v10 = (_DWORD *)(*(_DWORD *)(v7 + 4 * i) + 284); /*0x722cd6*/
        *v10 = v8; /*0x722cde*/
        v10[1] = v11; /*0x722ce0*/
        v10[2] = v9; /*0x722ce3*/
      }
      result = (void *)g_BuildingLoadQueue_Array.?[0]; /*0x722ce6*/
    }
  }
  return result; /*0x722cf7*/
}



// ==== 0x00722D00  BuildingClass::ClearOccupancyData  this=BuildingClass  sig=csp ====
int BuildingClass::ClearOccupancyData(BuildingClass *this)
{
  int result; // eax
  int i; // ebp
  int v3; // edi
  _DWORD *v4; // eax
  int j; // ecx
  void **v6; // esi
  int v7; // esi
  int v8; // eax
  size_t v9; // eax
  _DWORD *v10; // esi
  int v11; // eax
  int v12; // eax
  int v13; // ecx
  int v14; // eax

  result = g_BuildingLoadQueue_Array.?[0]; /*0x722d01*/
  for ( i = 0; i < g_BuildingLoadQueue_Array.?[0]; ++i ) /*0x722d0e*/
  {
    v3 = *(_DWORD *)(g_BuildingLoadQueue_Array.?[2] + 4 * i); /*0x722d1b*/
    v4 = *(_DWORD **)(v3 + 272); /*0x722d1e*/
    if ( v4 ) /*0x722d26*/
    {
      for ( j = 0; j <= *v4; *(_DWORD *)(v4[2] + 4 * j - 4) = 0 ) /*0x722d2e*/
        ++j; /*0x722d33*/
      *v4 = 0; /*0x722d3e*/
      v6 = *(void ***)(v3 + 272); /*0x722d40*/
      if ( v6 ) /*0x722d48*/
      {
        __3_YAXPAX_Z(v6[2]); /*0x722d4e*/
        __3_YAXPAX_Z(v6); /*0x722d54*/
      }
      *(_DWORD *)(v3 + 272) = 0; /*0x722d5c*/
    }
    if ( *(_DWORD *)(v3 + 280) ) /*0x722d62*/
    {
      __3_YAXPAX_Z(*(void **)(v3 + 280)); /*0x722d6d*/
      *(_DWORD *)(v3 + 280) = 0; /*0x722d75*/
    }
    if ( *(_DWORD *)(v3 + 276) ) /*0x722d7b*/
    {
      __3_YAXPAX_Z(*(void **)(v3 + 276)); /*0x722d86*/
      *(_DWORD *)(v3 + 276) = 0; /*0x722d8e*/
    }
    *(_DWORD *)(v3 + 268) = 0; /*0x722d94*/
    v7 = Object::ComputeAllocationSize(); /*0x722d9f*/
    v8 = __2_YAPAXI_Z(8 * v7); /*0x722da9*/
    if ( !v8 ) /*0x722db3*/
      v8 = 0; /*0x722dbc*/
    *(_DWORD *)(v3 + 280) = v8; /*0x722dbe*/
    v9 = Object::ComputeAllocationSize(); /*0x722dc4*/
    *(_DWORD *)(v3 + 276) = __2_YAPAXI_Z(v9); /*0x722dd1*/
    v10 = (_DWORD *)__2_YAPAXI_Z(0x14u); /*0x722ddc*/
    if ( v10 ) /*0x722de3*/
    {
      v11 = Object::ComputeAllocationSize(); /*0x722de5*/
      v10[3] = 0; /*0x722df1*/
      v10[4] = -1; /*0x722df5*/
      *v10 = 0; /*0x722dfc*/
      v10[1] = v11; /*0x722dfe*/
      v12 = __2_YAPAXI_Z(4 * v11 + 4); /*0x722e01*/
      v13 = v10[1]; /*0x722e06*/
      v10[2] = v12; /*0x722e09*/
      v14 = 0; /*0x722e0f*/
      if ( v13 >= 0 ) /*0x722e13*/
      {
        do /*0x722e22*/
        {
          ++v14; /*0x722e18*/
          *(_DWORD *)(v10[2] + 4 * v14 - 4) = 0; /*0x722e19*/
        }
        while ( v14 <= v10[1] ); /*0x722e22*/
      }
    }
    else
    {
      v10 = 0; /*0x722e26*/
    }
    *(_DWORD *)(v3 + 272) = v10; /*0x722e2a*/
    BuildingClass::RebuildOccupancy2((BuildingClass *)v3); /*0x722e30*/
    result = g_BuildingLoadQueue_Array.?[0]; /*0x722e35*/
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

  result = dword_B0F4F8; /*0x722e50*/
  for ( i = 0; i < dword_B0F4F8; ++i ) /*0x722e5d*/
  {
    v2 = *((_DWORD *)dword_B0F4EC + i); /*0x722e6a*/
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
    result = dword_B0F4F8; /*0x722ee9*/
  }
  return result; /*0x722ef9*/
}



// ==== 0x00722F00  ObjectClass::RebuildBuildingOccupancy  this=ObjectClass  sig=csp ====
void __thiscall RebuildBuildingOccupancy(ObjectClass *this)
{
  int *v2; // eax
  int v3; // eax
  int v4; // edi
  int v5; // eax
  int v6; // ebx
  int v7; // edi
  Heap *v8; // ecx
  __int16 *v9; // ebx
  Heap v10; // eax
  ObjectClass *v11; // ebp
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

  v2 = (int *)this->q044; /*0x722f09*/
  if ( v2 && *v2 && *((double *)this + 22) > 0.00001 ) /*0x722f36*/
  {
    LOWORD(v3) = Math::RoundToInt((double)*v2 * *((double *)this + 22)); /*0x722f46*/
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
    v5 = Random::State((Random *)&dword_A8B230[14].NeedsSaveOrLink); /*0x722f75*/
    v6 = **((_DWORD **)this + 68); /*0x722f88*/
    v7 = (int)abs32(v5) % v4 + 1; /*0x722f8c*/
    v31 = v7; /*0x722f8d*/
    if ( v6 > Object::ComputeAllocationSize() - 2 * v7 ) /*0x722f9d*/
      BuildingClass::RebuildOccupancy2((BuildingClass *)this); /*0x722fa1*/
    v8 = (Heap *)this->q044; /*0x722fa6*/
    v30 = 0; /*0x722fac*/
    if ( *v8 ) /*0x722fb4*/
    {
      v10 = v8[2]; /*0x722fc2*/
      v9 = *(__int16 **)(*(_DWORD *)&v10 + 4); /*0x722fca*/
      *(_DWORD *)(*(_DWORD *)&v10 + 4) = *(_DWORD *)(*(_DWORD *)&v10 + 4 * *(_DWORD *)v8); /*0x722fcd*/
      *(_DWORD *)(*(_DWORD *)&v8[2] + 4 * (*(_DWORD *)v8)--) = 0; /*0x722fd5*/
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
          v11 = (ObjectClass *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v9); /*0x723005*/
          if ( BuildingClass::FindByCellHash((BuildingClass *)v11) == *(_DWORD *)&this->isInLogic ) /*0x723014*/
          {
            sub_483710(v11); /*0x72301c*/
            if ( BYTE2(v11[1].estimatedHealth) >= 0xBu ) /*0x723028*/
            {
              *(_BYTE *)(Cell::PosToIndex((Cell *)v9) + this->u8_45) = 0; /*0x72312b*/
            }
            else
            {
              *(_DWORD *)(this->u32_46 + 8 * *((_DWORD *)this + 67)) = *(_DWORD *)v9; /*0x72303c*/
              *(float *)(this->u32_46 + 8 * *((_DWORD *)this + 67) + 4) = (float)(int)(*(_DWORD *)&stru_A8EB00.?[416] /*0x72307c*/
                                                                                               + abs32(
                                                                                                   Random::State((Random *)&dword_A8B230[14].NeedsSaveOrLink)
                                                                                                 % 50));
              *(_BYTE *)(Cell::PosToIndex((Cell *)v9) + this->u8_45) = 1; /*0x72308b*/
              v12 = *((_DWORD *)this + 67); /*0x72308f*/
              v13 = (_DWORD *)this->q044; /*0x72309b*/
              v14 = this->u32_46 + 8 * v12; /*0x7230a1*/
              *((_DWORD *)this + 67) = v12 + 1; /*0x7230a5*/
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
              BuildingClass::AddOccupancy((int *)this, v9); /*0x723113*/
              v7 = v31; /*0x723118*/
            }
          }
          if ( ++v30 >= v7 ) /*0x72313a*/
            return; /*0x72313a*/
          v20 = (int *)this->q044; /*0x723140*/
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
int __thiscall BuildingClass::RebuildOccupancyTracking2(BuildingClass *this)
{
  _DWORD *v2; // eax
  int i; // ecx
  void **v4; // esi
  int v5; // esi
  int v6; // eax
  size_t v7; // eax
  _DWORD *v8; // esi
  int v9; // eax
  int v10; // eax
  int v11; // ecx
  int v12; // eax

  v2 = (_DWORD *)this->?[6]; /*0x723268*/
  if ( v2 ) /*0x723270*/
  {
    for ( i = 0; i <= *v2; *(_DWORD *)(v2[2] + 4 * i - 4) = 0 ) /*0x723278*/
      ++i; /*0x72327d*/
    *v2 = 0; /*0x723288*/
    v4 = (void **)this->?[6]; /*0x72328a*/
    if ( v4 ) /*0x723292*/
    {
      __3_YAXPAX_Z(v4[2]); /*0x723298*/
      __3_YAXPAX_Z(v4); /*0x72329e*/
    }
    this->?[6] = 0; /*0x7232a6*/
  }
  if ( this->?[1] ) /*0x7232ac*/
  {
    __3_YAXPAX_Z((void *)this->?[1]); /*0x7232b7*/
    this->?[1] = 0; /*0x7232bf*/
  }
  if ( this->?[0] ) /*0x7232c5*/
  {
    __3_YAXPAX_Z((void *)this->?[0]); /*0x7232d0*/
    this->?[0] = 0; /*0x7232d8*/
  }
  this->?[5] = 0; /*0x7232de*/
  v5 = Object::ComputeAllocationSize(); /*0x7232e9*/
  v6 = __2_YAPAXI_Z(8 * v5); /*0x7232f3*/
  if ( !v6 ) /*0x7232fd*/
    v6 = 0; /*0x723306*/
  this->?[1] = v6; /*0x723308*/
  v7 = Object::ComputeAllocationSize(); /*0x72330e*/
  this->?[0] = __2_YAPAXI_Z(v7); /*0x72331b*/
  v8 = (_DWORD *)__2_YAPAXI_Z(0x14u); /*0x723326*/
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
  this->?[6] = (int)v8; /*0x723384*/
  return BuildingClass::RebuildOccupancy2(this); /*0x72337b*/
}



// ==== 0x007233A0  BuildingClass::RebuildOccupancy2  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass::RebuildOccupancy2(BuildingClass *this)
{
  int v2; // ecx
  int *v3; // eax
  int i; // eax
  int result; // eax
  BuildingClass *j; // edi
  Cell *p_occupant; // ecx
  int v8; // eax
  _DWORD *v9; // ebp
  unsigned int v10; // ebx
  unsigned int v11; // edx
  unsigned int v12; // edi
  int v13; // ecx
  int v14; // ebx
  unsigned int v15; // eax
  float v16; // [esp+8h] [ebp-Ch]
  Cell *v17; // [esp+Ch] [ebp-8h]
  unsigned int v18; // [esp+10h] [ebp-4h]

  v2 = 0; /*0x7233a6*/
  v3 = (int *)this->?[6]; /*0x7233a9*/
  this->?[5] = 0; /*0x7233af*/
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
  for ( i = Object::ComputeAllocationSize() - 1; i >= 0; *(_BYTE *)(this->?[0] + i + 1) = 0 ) /*0x7233dc*/
    --i; /*0x7233e4*/
  LayerClass::CellIteratorReset((LayerClass *)&stru_87F5F0.__pad_58[416]); /*0x7233f1*/
  result = LayerClass::CellIteratorNext((LayerClass *)&stru_87F5F0.__pad_58[416]); /*0x7233fb*/
  for ( j = (BuildingClass *)result; result; j = (BuildingClass *)result ) /*0x723404*/
  {
    if ( BuildingClass::FindByCellHash(j) == *(_DWORD *)&this->? && BuildingClass::IsTiberiumCollectorEligible(j) ) /*0x723421*/
    {
      p_occupant = (Cell *)&j->?; /*0x72343a*/
      v17 = (Cell *)&j->?; /*0x72343d*/
      *(_DWORD *)(this->?[1] + 8 * this->?[5]) = j->?; /*0x723443*/
      *(_DWORD *)(this->?[1] + 8 * this->?[5] + 4) = 0; /*0x723452*/
      v8 = this->?[5]; /*0x72345a*/
      v9 = (_DWORD *)this->?[6]; /*0x723466*/
      v10 = this->?[1] + 8 * v8; /*0x72346c*/
      this->?[5] = v8 + 1; /*0x723470*/
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
          p_occupant = v17; /*0x7234b5*/
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
      *(_BYTE *)(Cell::PosToIndex(p_occupant) + this->?[0]) = 1; /*0x7234e7*/
    }
    result = LayerClass::CellIteratorNext((LayerClass *)&stru_87F5F0.__pad_58[416]); /*0x7234f0*/
  }
  return result; /*0x723501*/
}



// ==== 0x00723510  ObjectClass::method  this=ObjectClass  sig=csp ====
void __thiscall sub_723510(ObjectClass *this)
{
  _DWORD *v2; // eax
  int i; // ecx
  void **v4; // edi

  v2 = (_DWORD *)this->q044; /*0x723516*/
  if ( v2 ) /*0x72351e*/
  {
    for ( i = 0; i <= *v2; *(_DWORD *)(v2[2] + 4 * i - 4) = 0 ) /*0x723526*/
      ++i; /*0x72352b*/
    *v2 = 0; /*0x723537*/
    v4 = (void **)this->q044; /*0x723539*/
    if ( v4 ) /*0x723541*/
    {
      __3_YAXPAX_Z(v4[2]); /*0x723547*/
      __3_YAXPAX_Z(v4); /*0x72354d*/
    }
    this->q044 = 0; /*0x723555*/
  }
  if ( this->u32_46 ) /*0x72355c*/
  {
    __3_YAXPAX_Z(*((void **)this + 70)); /*0x723567*/
    this->u32_46 = 0; /*0x72356f*/
  }
  if ( this->u8_45 ) /*0x723575*/
  {
    __3_YAXPAX_Z(*((void **)this + 69)); /*0x723580*/
    this->u8_45 = 0; /*0x723588*/
  }
  *((_DWORD *)this + 67) = 0; /*0x72358e*/
}



// ==== 0x007235A0  CellClass::RegisterForRedraw  this=CellClass  sig=csp ====
_BYTE *__thiscall CellClass::RegisterForRedraw(CellClass *this, __int16 *a2)
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

  v13 = Cell::PosToIndex((Cell *)a2); /*0x7235b8*/
  result = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], a2); /*0x7235bc*/
  if ( result[286] < 0xBu ) /*0x7235c8*/
  {
    if ( *(_DWORD *)this->CellClass_field_10C > Object::ComputeAllocationSize() - 10 ) /*0x7235de*/
      BuildingClass::RebuildOccupancy2((BuildingClass *)this); /*0x7235e2*/
    *(_DWORD *)(*(_DWORD *)&this->unknown118 + 8 * *(_DWORD *)this->CellClass_field_10C) = *(_DWORD *)a2; /*0x7235f6*/
    *(float *)(*(_DWORD *)&this->unknown118 + 8 * *(_DWORD *)this->CellClass_field_10C + 4) = (float)(*(_DWORD *)&stru_A8EB00.?[416] + (int)abs32(Random::State((Random *)&dword_A8B230[14].NeedsSaveOrLink)) % 50); /*0x723632*/
    v4 = *(_DWORD *)this->CellClass_field_10C; /*0x723636*/
    v5 = *(_DWORD **)this->unknown110; /*0x723642*/
    v6 = *(_DWORD *)&this->unknown118 + 8 * v4; /*0x723648*/
    *(_DWORD *)this->CellClass_field_10C = v4 + 1; /*0x72364c*/
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
    result = *(_BYTE **)this->unknown114; /*0x7236b3*/
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
int TiberiumClass::StubReturn296(TiberiumClass *this)
{
  return 296; /*0x7236e5*/
}



// ==== 0x007236F0  TiberiumClass::StubReturn46  this=TiberiumClass  sig=csp ====
int TiberiumClass::StubReturn46(TiberiumClass *this)
{
  return 46; /*0x7236f5*/
}



// ==== 0x00723700  TiberiumClass::Stub  this=TiberiumClass  sig=csp ====
int __thiscall TiberiumClass::Stub(TiberiumClass *this)
{
  return *(_DWORD *)&this->?; /*0x723706*/
}



// ==== 0x00723710  TiberiumClass::DrawOre  this=TiberiumClass  sig=csp ====
void *__thiscall TiberiumClass::DrawOre(TiberiumClass *this, char a2)
{
  TiberiumClass::CleanupMembers((int)this); /*0x723713*/
  if ( (a2 & 1) != 0 ) /*0x72371d*/
    __3_YAXPAX_Z(this); /*0x723720*/
  return this; /*0x72372a*/
}



// ==== 0x00723730  _DynamicVectorClass_PAVTiberiumClass::Destroy  this=DynamicVector  sig=csp ====
void __thiscall VectorClass_ptr_TiberiumClass::Destroy(_DynamicVectorClass_PAVTiberiumClass *this)
{
  void *v2; // eax

  v2 = *(void **)&this->m_1[3]; /*0x723736*/
  this->m_10 = 0; /*0x723739*/
  if ( v2 && BYTE1(this->m_C) ) /*0x723740*/
  {
    __3_YAXPAX_Z(v2); /*0x723746*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x72374e*/
  }
  BYTE1(this->m_C) = 0; /*0x723751*/
  this->m_8 = 0; /*0x723754*/
}



// ==== 0x00723760  _DynamicVectorClass_PAVTiberiumClass::GetItemIndex  this=DynamicVector  sig=csp ====
unsigned int __thiscall VectorClass_ptr_TiberiumClass::GetItemIndex(_DynamicVectorClass_PAVTiberiumClass *this, int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x723760*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 2; /*0x723775*/
  else
    return 0; /*0x723767*/
}



// ==== 0x00723780  _VectorClass_PAVTiberiumClass::Get  this=VectorClass  sig=csp ====
int __thiscall VectorClass_ptr_TiberiumClass::Get(_VectorClass_PAVTiberiumClass *this, int a2)
{
  return *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * a2); /*0x72378a*/
}



// ==== 0x00723790  _VectorClass_PAVTiberiumClass::Add  this=VectorClass  sig=csp ====
char __thiscall VectorClass_ptr_TiberiumClass::Add(_VectorClass_PAVTiberiumClass *this, int a2)
{
  int m_8; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  m_8 = this->m_8; /*0x723792*/
  if ( m_8 == *(_DWORD *)(a2 + 8) ) /*0x72379d*/
  {
    v3 = 0; /*0x72379f*/
    if ( m_8 <= 0 ) /*0x7237a3*/
      return 1; /*0x7237c3*/
    v4 = *(_DWORD **)&this->m_1[3]; /*0x7237a5*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x7237ab*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x7237b4*/
    {
      ++v3; /*0x7237b6*/
      ++v4; /*0x7237b7*/
      if ( v3 >= m_8 ) /*0x7237bc*/
        return 1; /*0x7237bc*/
    }
  }
  return 0; /*0x7237be*/
}



// ==== 0x007237D0  _VectorClass_PAVTiberiumClass::Release  this=VectorClass  sig=csp ====
char __thiscall VectorClass_ptr_TiberiumClass::Release(_VectorClass_PAVTiberiumClass *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int m_8; // ecx
  int i; // eax

  if ( a2 ) /*0x7237dc*/
  {
    LOBYTE(this->m_C) = 0; /*0x7237e6*/
    if ( a3 ) /*0x7237ec*/
      v4 = a3; /*0x723802*/
    else
      v4 = (_DWORD *)__2_YAPAXI_Z(4 * a2); /*0x7237fe*/
    LOBYTE(this->m_C) = 1; /*0x723806*/
    if ( v4 ) /*0x72380a*/
    {
      if ( *(_DWORD *)&this->m_1[3] ) /*0x723815*/
      {
        m_8 = this->m_8; /*0x72381c*/
        if ( a2 < m_8 ) /*0x723821*/
          m_8 = a2; /*0x723823*/
        for ( i = 0; i < m_8; v4[i - 1] = *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * i - 4) ) /*0x723829*/
          ++i; /*0x72382e*/
        if ( BYTE1(this->m_C) ) /*0x72383b*/
        {
          __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x723846*/
          *(_DWORD *)&this->m_1[3] = 0; /*0x72384e*/
        }
      }
      *(_DWORD *)&this->m_1[3] = v4; /*0x723857*/
      this->m_8 = a2; /*0x72385f*/
      BYTE1(this->m_C) = a3 == 0; /*0x723862*/
      return 1; /*0x723868*/
    }
    else
    {
      return 0; /*0x72380f*/
    }
  }
  else
  {
    (*(void (__thiscall **)(_VectorClass_PAVTiberiumClass *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x723872*/
    return 1; /*0x723878*/
  }
}



// ==== 0x00723880  _VectorClass_PAVTiberiumClass::Remove  this=VectorClass  sig=csp ====
void __thiscall VectorClass_ptr_TiberiumClass::Remove(_VectorClass_PAVTiberiumClass *this)
{
  if ( *(_DWORD *)&this->m_1[3] && BYTE1(this->m_C) ) /*0x72388d*/
  {
    __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x723893*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x72389b*/
  }
  BYTE1(this->m_C) = 0; /*0x72389e*/
  this->m_8 = 0; /*0x7238a1*/
}



// ==== 0x007238B0  _VectorClass_PAVTiberiumClass::GetSize  this=VectorClass  sig=csp ====
int __thiscall VectorClass_ptr_TiberiumClass::GetSize(_VectorClass_PAVTiberiumClass *this, _DWORD *a2)
{
  int result; // eax
  int m_8; // edx
  _DWORD *i; // ecx

  if ( !LOBYTE(this->m_C) ) /*0x7238b0*/
    return 0; /*0x7238b8*/
  m_8 = this->m_8; /*0x7238be*/
  result = 0; /*0x7238c1*/
  if ( m_8 <= 0 ) /*0x7238c5*/
    return -1; /*0x7238dc*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2; ++i ) /*0x7238cb*/
  {
    if ( ++result >= m_8 ) /*0x7238da*/
      return -1; /*0x7238da*/
  }
  return result; /*0x7238ba*/
}



// ==== 0x007238F0  _VectorClass_PAVTiberiumClass::GetCapacity  this=VectorClass  sig=csp ====
unsigned int __thiscall VectorClass_ptr_TiberiumClass::GetCapacity(_VectorClass_PAVTiberiumClass *this, int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x7238f0*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 2; /*0x723905*/
  else
    return 0; /*0x7238f7*/
}



// ==== 0x00723910  _DynamicVectorClass_PAVTiberiumClass::SetCapacity  this=DynamicVector  sig=csp ====
char __thiscall VectorClass_ptr_TiberiumClass::SetCapacity(
        _DynamicVectorClass_PAVTiberiumClass *this,
        int a2,
        _DWORD *a3)
{
  _DWORD *v4; // edi
  int m_8; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x72391c*/
  {
    LOBYTE(this->m_C) = 0; /*0x723922*/
    if ( a3 ) /*0x723928*/
      v4 = a3; /*0x72393e*/
    else
      v4 = (_DWORD *)__2_YAPAXI_Z(4 * a2); /*0x72393a*/
    LOBYTE(this->m_C) = 1; /*0x723942*/
    if ( !v4 ) /*0x723946*/
      return 0; /*0x7239ba*/
    if ( *(_DWORD *)&this->m_1[3] ) /*0x723948*/
    {
      m_8 = this->m_8; /*0x72394f*/
      if ( a2 < m_8 ) /*0x723954*/
        m_8 = a2; /*0x723956*/
      for ( i = 0; i < m_8; v4[i - 1] = *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * i - 4) ) /*0x72395c*/
        ++i; /*0x723961*/
      if ( BYTE1(this->m_C) ) /*0x72396e*/
      {
        __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x723979*/
        *(_DWORD *)&this->m_1[3] = 0; /*0x723981*/
      }
    }
    *(_DWORD *)&this->m_1[3] = v4; /*0x72398a*/
    this->m_8 = a2; /*0x723992*/
    BYTE1(this->m_C) = a3 == 0; /*0x723995*/
  }
  else
  {
    (*(void (__thiscall **)(_DynamicVectorClass_PAVTiberiumClass *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x72399e*/
  }
  v7 = this->m_8; /*0x7239a1*/
  if ( v7 < this->m_10 ) /*0x7239a9*/
    this->m_10 = v7; /*0x7239ab*/
  return 1; /*0x7239ae*/
}



// ==== 0x007239C0  _DynamicVectorClass_PAVTiberiumClass::FindItemIndex  this=DynamicVector  sig=csp ====
int __thiscall VectorClass_ptr_TiberiumClass::FindItemIndex(_DynamicVectorClass_PAVTiberiumClass *this, _DWORD *a2)
{
  int m_10; // edx
  int result; // eax
  _DWORD *i; // ecx

  m_10 = this->m_10; /*0x7239c0*/
  result = 0; /*0x7239c3*/
  if ( m_10 <= 0 ) /*0x7239c8*/
    return -1; /*0x7239df*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2; ++i ) /*0x7239ce*/
  {
    if ( ++result >= m_10 ) /*0x7239dd*/
      return -1; /*0x7239dd*/
  }
  return result; /*0x7239e2*/
}



// ==== 0x007239F0  _VectorClass_PAVTiberiumClass::QueryInterface  this=VectorClass  sig=csp ====
_DWORD *__thiscall VectorClass_ptr_TiberiumClass::QueryInterface(_VectorClass_PAVTiberiumClass *this, char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x7239f3*/
  *(_DWORD *)this->__pad_0 = &VectorClass<TiberiumClass *>::`vftable'; /*0x7239f6*/
  if ( v3 && BYTE1(this->m_C) ) /*0x723a00*/
  {
    __3_YAXPAX_Z(v3); /*0x723a08*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x723a10*/
  }
  BYTE1(this->m_C) = 0; /*0x723a1b*/
  this->m_8 = 0; /*0x723a21*/
  if ( (a2 & 1) != 0 ) /*0x723a28*/
    __3_YAXPAX_Z(this); /*0x723a2b*/
  return this->__pad_0; /*0x723a35*/
}



// ==== 0x00723A40  _DynamicVectorClass_PAVTiberiumClass::Constructor_VectorClass_TiberiumClass___  this=DynamicVector  sig=csp ====
_DWORD *__thiscall VectorClass_ptr_TiberiumClass::Constructor_VectorClass_TiberiumClass___(
        _DynamicVectorClass_PAVTiberiumClass *this,
        char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x723a43*/
  *(_DWORD *)this->__pad_0 = &VectorClass<TiberiumClass *>::`vftable'; /*0x723a46*/
  if ( v3 && BYTE1(this->m_C) ) /*0x723a50*/
  {
    __3_YAXPAX_Z(v3); /*0x723a58*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x723a60*/
  }
  BYTE1(this->m_C) = 0; /*0x723a6b*/
  this->m_8 = 0; /*0x723a71*/
  if ( (a2 & 1) != 0 ) /*0x723a78*/
    __3_YAXPAX_Z(this); /*0x723a7b*/
  return this->__pad_0; /*0x723a85*/
}



// ==== 0x00723A90  sub_723A90  this=-  sig=ida-proto ====
void sub_723A90()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x723a9c*/
  dbl_B0F538 = Math::Sqrt(v0 + v0); /*0x723aae*/
}



// ==== 0x00723AC0  sub_723AC0  this=-  sig=ida-proto ====
void sub_723AC0()
{
  dbl_B0F588 = dbl_B0F538 / 60.0; /*0x723acc*/
}



// ==== 0x00723AE0  sub_723AE0  this=-  sig=ida-proto ====
void sub_723AE0()
{
  dbl_B0F570 = 1.0 / dbl_B0F588; /*0x723aec*/
}



// ==== 0x00723B00  sub_723B00  this=-  sig=ida-proto ====
void sub_723B00()
{
  dbl_B0F568 = 0.0174532925199433 * 45.0; /*0x723b0c*/
}



// ==== 0x00723B20  sub_723B20  this=-  sig=ida-proto ====
void sub_723B20()
{
  dbl_B0F540 = 0.0174532925199433 * 60.0; /*0x723b2c*/
}



// ==== 0x00723B40  sub_723B40  this=-  sig=ida-proto ====
void sub_723B40()
{
  dbl_B0F518 = 0.0174532925199433 * 90.0; /*0x723b4c*/
}



// ==== 0x00723B60  sub_723B60  this=-  sig=ida-proto ====
__int64 sub_723B60()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_B0F518 - dbl_B0F540); /*0x723b72*/
  result = Math::RoundToInt(v0 * dbl_B0F538 * 0.5); /*0x723b86*/
  dword_B0F590 = result; /*0x723b8b*/
  return result; /*0x723b90*/
}



// ==== 0x00723BA0  sub_723BA0  this=-  sig=ida-proto ====
void sub_723BA0()
{
  dbl_B0F548 = Math::ArcTan((double)dword_B0F590 * 0.00390625); /*0x723bb7*/
}



// ==== 0x00723BD0  sub_723BD0  this=-  sig=ida-proto ====
void sub_723BD0()
{
  dbl_B0F560 = Math::ArcTan((double)(2 * dword_B0F590) / dbl_B0F538); /*0x723bf2*/
}



// ==== 0x00723C00  sub_723C00  this=-  sig=ida-proto ====
__int64 sub_723C00()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_B0F590) + 0.5); /*0x723c1b*/
  dword_B0F584 = result; /*0x723c20*/
  return result; /*0x723c26*/
}



// ==== 0x00723C30  sub_723C30  this=-  sig=ida-proto ====
int sub_723C30()
{
  word_B0F530 = 0; /*0x723c32*/
  word_B0F532 = 0; /*0x723c38*/
  return 0; /*0x723c3e*/
}



// ==== 0x00723C40  sub_723C40  this=-  sig=ida-proto ====
int sub_723C40()
{
  dword_B0F550 = 0; /*0x723c42*/
  dword_B0F554 = 0; /*0x723c47*/
  dword_B0F558 = 0; /*0x723c4c*/
  return 0; /*0x723c51*/
}



// ==== 0x00723C60  sub_723C60  this=-  sig=ida-proto ====
int sub_723C60()
{
  dword_B0F580 = 0; /*0x723c65*/
  dword_B0F578 = 128; /*0x723c6f*/
  dword_B0F57C = 128; /*0x723c74*/
  return 128; /*0x723c79*/
}



// ==== 0x00723C80  sub_723C80  this=-  sig=ida-proto ====
int sub_723C80()
{
  dword_B0F520 = 0; /*0x723c82*/
  dword_B0F524 = 0; /*0x723c87*/
  dword_B0F528 = 0; /*0x723c8c*/
  dword_B0F52C = 0; /*0x723c91*/
  return 0; /*0x723c96*/
}



// ==== 0x00723CA0  ScriptTypeClass::SetField  this=ScriptTypeClass  sig=csp ====
char *__thiscall ScriptTypeClass::SetField(ScriptTypeClass *this, char *Buffer)
{
  char *result; // eax
  void *v4; // ecx
  void *v5; // [esp+4h] [ebp-4h] BYREF

  result = Buffer; /*0x723ca1*/
  if ( Buffer ) /*0x723caa*/
  {
    sscanf(Buffer, "%d,%d", &Buffer, &v5); /*0x723cbc*/
    result = Buffer; /*0x723cc1*/
    v4 = v5; /*0x723cc5*/
    this->AbstractClass = Buffer; /*0x723ccc*/
    this->? = v4; /*0x723cce*/
  }
  return result; /*0x723cd1*/
}



// ==== 0x00723CE0  ScriptTypeClass::FormatToString  this=ScriptTypeClass  sig=csp ====
unsigned int __thiscall ScriptTypeClass::FormatToString(ScriptTypeClass *this, char *Buffer)
{
  if ( !Buffer ) /*0x723ce7*/
    return 0; /*0x723d0e*/
  sprintf(Buffer, "%d,%d", this->AbstractClass, this->?); /*0x723cf6*/
  return strlen(Buffer); /*0x723d08*/
}



// ==== 0x00723E40  sub_723E40  this=-  sig=ida-proto ====
int sub_723E40()
{
  dword_B0F598 = 0; /*0x723e42*/
  dword_B0F59C = 0; /*0x723e47*/
  dword_B0F5A0 = 0; /*0x723e4c*/
  dword_B0F5A4 = 0; /*0x723e51*/
  return 0; /*0x723e56*/
}



// ==== 0x00723E60  ToggleClass::Construct  this=ToggleClass  sig=csp ====
int __thiscall ToggleClass::Construct(int this, int a2, int a3, int a4, int a5, int a6)
{
  ControlClass::Construct((ControlClass *)this, a2, a3, a4, a5, a6, 5, 1); /*0x723e82*/
  *(_DWORD *)this = &ToggleClass::`vftable'; /*0x723e89*/
  *(_BYTE *)(this + 44) = 0; /*0x723e8f*/
  *(_BYTE *)(this + 45) = 0; /*0x723e92*/
  *(_DWORD *)(this + 48) = 0; /*0x723e95*/
  return this; /*0x723e9a*/
}



// ==== 0x00723EA0  GadgetClass::Show  this=GadgetClass  sig=csp ====
int __thiscall GadgetClass::Show(GadgetClass *this)
{
  int v1; // eax

  v1 = *(_DWORD *)this->__pad_0; /*0x723ea0*/
  *((_BYTE *)this + 45) = 1; /*0x723ea2*/
  return (*(int (**)(void))(v1 + 72))();
}



// ==== 0x00723EB0  GadgetClass::Hide  this=GadgetClass  sig=csp ====
int __thiscall GadgetClass::Hide(GadgetClass *this)
{
  int v1; // eax

  v1 = *(_DWORD *)this->__pad_0; /*0x723eb0*/
  *((_BYTE *)this + 45) = 0; /*0x723eb2*/
  return (*(int (**)(void))(v1 + 72))();
}



// ==== 0x00723EC0  ToggleClass::ProcessMouseOver  this=ToggleClass  sig=csp ====
int __thiscall GadgetClass::ProcessMouseOver(ToggleClass *this, unsigned int a2, _DWORD *a3, int a4)
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

  if ( (unsigned int)((*(int (__thiscall **)(void *))(*(_DWORD *)stru_887598.lineTrailer + 44))(stru_887598.lineTrailer) /*0x723ef6*/
                    - *((_DWORD *)this + 3)) >= *((_DWORD *)this + 5)
    || (v14 = 1,
        (unsigned int)((*(int (__thiscall **)(void *))(*(_DWORD *)stru_887598.lineTrailer + 48))(stru_887598.lineTrailer)
                     - this->q004) >= *((_DWORD *)this + 6)) )
  {
    v14 = 0; /*0x723ef8*/
  }
  v5 = a2; /*0x723efd*/
  if ( !a2 ) /*0x723f03*/
  {
    v6 = *((_BYTE *)this + 44); /*0x723f0b*/
    if ( v14 ) /*0x723f0e*/
    {
      if ( !v6 ) /*0x723f12*/
      {
        v7 = *(_DWORD *)this->__pad_0; /*0x723f14*/
        *((_BYTE *)this + 44) = 1; /*0x723f18*/
        (*(void (__thiscall **)(ToggleClass *))(v7 + 72))(this); /*0x723f1c*/
      }
    }
    else if ( v6 ) /*0x723f23*/
    {
      v8 = *(_DWORD *)this->__pad_0; /*0x723f25*/
      *((_BYTE *)this + 44) = 0; /*0x723f29*/
      (*(void (__thiscall **)(ToggleClass *))(v8 + 72))(this); /*0x723f2d*/
    }
  }
  (*(void (__thiscall **)(ToggleClass *, unsigned int))(*(_DWORD *)this->__pad_0 + 120))(this, a2); /*0x723f35*/
  if ( (a2 & 0x11) != 0 ) /*0x723f3b*/
  {
    v9 = *(_DWORD *)this->__pad_0; /*0x723f3d*/
    *((_BYTE *)this + 44) = 1; /*0x723f42*/
    (*(void (__thiscall **)(ToggleClass *))(v9 + 72))(this); /*0x723f46*/
    CellClass::Draw((ControlClass *)this, a2 & 0xFFFFFFEE, a3, 0); /*0x723f56*/
    *a3 = 0; /*0x723f5b*/
    return 1; /*0x723f6a*/
  }
  if ( (a2 & 0x44) != 0 ) /*0x723f70*/
  {
    if ( !*((_BYTE *)this + 44) ) /*0x723f77*/
    {
      v5 = a2 & 0xFFFFFFBB; /*0x723fbe*/
      return CellClass::Draw((ControlClass *)this, v5, a3, 0); /*0x723fbe*/
    }
    if ( v14 ) /*0x723f7f*/
    {
      v11 = *((_DWORD *)this + 12); /*0x723f81*/
      if ( v11 == 1 ) /*0x723f87*/
      {
        v12 = *(_DWORD *)this->__pad_0; /*0x723f8c*/
        *((_BYTE *)this + 45) = *((_BYTE *)this + 45) == 0; /*0x723f95*/
        *((_BYTE *)this + 44) = 0; /*0x723f98*/
        (*(void (__thiscall **)(ToggleClass *))(v12 + 72))(this); /*0x723f9c*/
        return CellClass::Draw((ControlClass *)this, v5, a3, 0); /*0x723f9f*/
      }
      if ( v11 == 2 && !*((_BYTE *)this + 45) ) /*0x723fa6*/
        *((_BYTE *)this + 45) = 1; /*0x723fad*/
    }
    v13 = *(_DWORD *)this->__pad_0; /*0x723fb1*/
    *((_BYTE *)this + 44) = 0; /*0x723fb5*/
    (*(void (__thiscall **)(ToggleClass *))(v13 + 72))(this); /*0x723fb9*/
  }
  return CellClass::Draw((ControlClass *)this, v5, a3, 0); /*0x723f62*/
}



// ==== 0x00723FE0  sub_723FE0  this=-  sig=ida-proto ====
int sub_723FE0()
{
  dword_B0F5A8 = 0; /*0x723fe2*/
  dword_B0F5AC = 0; /*0x723fe7*/
  dword_B0F5B0 = 0; /*0x723fec*/
  dword_B0F5B4 = 0; /*0x723ff1*/
  return 0; /*0x723ff6*/
}



// ==== 0x00724000  ToolTipManager::MainWindowProc_Helper  this=ToolTipManager  sig=csp ====
char *__thiscall sub_724000(char *this, int a2)
{
  char *v3; // ecx
  int v4; // edx

  v3 = this + 564; /*0x72400a*/
  this->Position = 0; /*0x724010*/
  this->u32_8 = a2; /*0x724013*/
  this->ToolTipText = 0; /*0x724016*/
  this->q08A = 1000; /*0x724019*/
  *((_DWORD *)this + 140) = 10000; /*0x724023*/
  *((_DWORD *)v3 + 1) = 0; /*0x72402d*/
  *((_DWORD *)v3 + 2) = 0; /*0x724030*/
  v3[12] = 1; /*0x724033*/
  v3[13] = 0; /*0x724037*/
  *(_DWORD *)v3 = &DynamicVectorClass<ToolTip const *>::`vftable'; /*0x72403a*/
  *((_DWORD *)v3 + 5) = 10; /*0x724040*/
  *((_DWORD *)v3 + 4) = 0; /*0x724047*/
  *((_DWORD *)this + 147) = 0; /*0x72404a*/
  *((_DWORD *)this + 148) = 0; /*0x724050*/
  *((_DWORD *)this + 149) = 0; /*0x724056*/
  *(this + 600) = 0; /*0x72405c*/
  *((_DWORD *)this + 151) = 0; /*0x724062*/
  v4 = *(_DWORD *)v3; /*0x724068*/
  *(_DWORD *)this = &ToolTipManager::`vftable'; /*0x72406a*/
  (*(void (__thiscall **)(char *))(v4 + 12))(v3); /*0x724070*/
  __3_YAXPAX_Z(*((void **)this + 147)); /*0x72407a*/
  *((_DWORD *)this + 147) = 0; /*0x724082*/
  *((_DWORD *)this + 148) = 0; /*0x724088*/
  *((_DWORD *)this + 149) = 0; /*0x72408e*/
  *(this + 600) = 0; /*0x724094*/
  *((_DWORD *)this + 151) = 0; /*0x72409a*/
  return this; /*0x7240a2*/
}



// ==== 0x007240B0  ToolTipClass::updateString  this=ToolTipManager  sig=csp ====
void __thiscall ToolTipClass::updateString(ToolTipClass *this)
{
  HWND ToolTipClass_field_0x08; // eax
  int i; // edi
  int v4; // edx
  void *v5; // eax

  ToolTipClass_field_0x08 = (HWND)this->ToolTipClass_field_0x08; /*0x7240ba*/
  *(_DWORD *)this->__pad_0 = &ToolTipManager::`vftable'; /*0x7240bd*/
  KillTimer(ToolTipClass_field_0x08, 0x54544950u); /*0x7240c4*/
  if ( this->ToolTipClass_field_0x04 ) /*0x7240ca*/
    (*(void (__thiscall **)(ToolTipClass *, int *))(*(_DWORD *)this->__pad_0 + 8))(this, &this->ToolTipClass_field_0x18); /*0x7240db*/
  __3_YAXPAX_Z(*((void **)this + 147)); /*0x7240e5*/
  *((_DWORD *)this + 147) = 0; /*0x7240ea*/
  *((_DWORD *)this + 148) = 0; /*0x7240f0*/
  *((_DWORD *)this + 149) = 0; /*0x7240f6*/
  *((_BYTE *)this + 600) = 0; /*0x7240fc*/
  *((_DWORD *)this + 151) = 0; /*0x724102*/
  for ( i = 0; i < this->q091; ++i ) /*0x724115*/
  {
    v4 = this->q08E; /*0x724117*/
    if ( *(_DWORD *)(v4 + 4 * i) ) /*0x72411d*/
      __3_YAXPAX_Z(*(void **)(v4 + 4 * i)); /*0x724125*/
  }
  (*(void (__thiscall **)(char *))(this->q08D + 12))((char *)this + 564); /*0x724146*/
  __3_YAXPAX_Z(*((void **)this + 147)); /*0x724150*/
  *((_DWORD *)this + 147) = 0; /*0x724155*/
  *((_DWORD *)this + 148) = 0; /*0x72415b*/
  *((_DWORD *)this + 149) = 0; /*0x724161*/
  *((_BYTE *)this + 600) = 0; /*0x724167*/
  *((_DWORD *)this + 151) = 0; /*0x72416d*/
  v5 = (void *)this->q08E; /*0x724173*/
  this->q08D = &VectorClass<ToolTip const *>::`vftable'; /*0x72417b*/
  if ( v5 && *((_BYTE *)this + 577) ) /*0x724183*/
  {
    __3_YAXPAX_Z(v5); /*0x724189*/
    this->q08E = 0; /*0x724191*/
  }
  *((_BYTE *)this + 577) = 0; /*0x724194*/
  *((_DWORD *)this + 143) = 0; /*0x724197*/
}



// ==== 0x007241A0  Tooltip::Enable  this=Tooltip  sig=csp ====
int __thiscall Tooltip::Enable(Tooltip *this, char a2)
{
  int result; // eax

  LOBYTE(result) = a2; /*0x7241a0*/
  if ( *((_BYTE *)this + 12) != a2 ) /*0x7241aa*/
  {
    *((_BYTE *)this + 12) = a2; /*0x7241ae*/
    if ( !a2 ) /*0x7241b1*/
    {
      KillTimer(*((HWND *)this + 2), 0x54544950u); /*0x7241bc*/
      if ( *((_DWORD *)this + 1) ) /*0x7241c2*/
        (*(void (__thiscall **)(Tooltip *, Tooltip *))(*(_DWORD *)this + 8))(this, this + 6); /*0x7241d1*/
    }
    return Debug::Log(); /*0x7241eb*/
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
          if ( (unsigned __int8)ToolTipClass::initString((ToolTipClass *)this) ) /*0x7243cc*/
            goto LABEL_31; /*0x7243d3*/
        }
        break; /*0x7243d3*/
      case 0x200: /*0x72422f*/
        if ( *(_DWORD *)(this + 552) && !LOBYTE(stru_A8EB00.__pad_CD4[1]) ) /*0x724258*/
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
        if ( (unsigned __int8)ToolTipClass::initString((ToolTipClass *)this) ) /*0x724311*/
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
int __thiscall sub_724510(TechnoClass *this)
{
  return this->cloakProgress[1]; /*0x724516*/
}



// ==== 0x00724520  SidebarClass::initializeStrip  this=SidebarClass  sig=csp ====
int __thiscall SidebarClass::initializeStrip(SidebarClass *this, int a2)
{
  this->SidebarClass_field_0x228 = (void *)a2; /*0x724524*/
  return a2; /*0x72452a*/
}



// ==== 0x00724530  SidebarClass::updateStripVisibility  this=SidebarClass  sig=csp ====
int __thiscall SidebarClass::updateStripVisibility(SidebarClass *this)
{
  int result; // eax

  result = (int)this->SidebarClass_field_0x228; /*0x724530*/
  this->SidebarClass_field_0x22C = (void *)result; /*0x724536*/
  return result; /*0x72453c*/
}



// ==== 0x00724540  SidebarClass::updateStripPosition  this=SidebarClass  sig=csp ====
int __thiscall SidebarClass::updateStripPosition(SidebarClass *this)
{
  int result; // eax

  result = (int)this->SidebarClass_field_0x22C; /*0x724540*/
  this->SidebarClass_field_0x228 = (void *)result; /*0x724546*/
  return result; /*0x72454c*/
}



// ==== 0x00724550  ObjectClass::method  this=ObjectClass  sig=csp ====
int __thiscall sub_724550(TechnoClass *this)
{
  return this->cloakProgress[3]; /*0x724556*/
}



// ==== 0x00724560  ObjectClass::method  this=ObjectClass  sig=csp ====
int __thiscall sub_724560(_DWORD *this, int a2)
{
  this->onBridge = a2; /*0x724564*/
  return a2; /*0x72456a*/
}



// ==== 0x00724570  ObjectClass::method  this=ObjectClass  sig=csp ====
int __thiscall sub_724570(TechnoClass *this)
{
  return this->cloakDelayTimer[1]; /*0x724576*/
}



// ==== 0x00724580  CommandClass::AddAction  this=ToolTipManager  sig=csp ====
int __thiscall CommandClass::AddAction(int *this, int a2)
{
  int v2; // edi
  int *v4; // esi
  int result; // eax
  _DWORD *v6; // ebp
  int v7; // eax
  int v8; // ecx
  int v9; // eax
  int v10; // edx
  int v11; // ebx
  int v12; // edi
  int i; // eax
  char *v14; // ecx
  int v15; // ecx

  v2 = a2; /*0x724584*/
  v4 = this + 147; /*0x72458c*/
  a2 = *(_DWORD *)a2; /*0x724592*/
  if ( *(this + 148) ) /*0x724596*/
  {
    if ( CommandClass::executeAction(this + 147, &a2) ) /*0x7245a4*/
      goto LABEL_22; /*0x7245ab*/
    result = CommandClass::BinarySearchAction((char **)v4, (unsigned int *)&a2); /*0x7245b8*/
    if ( result ) /*0x7245bf*/
    {
      v4[4] = result; /*0x7245c1*/
      LOBYTE(result) = 0; /*0x7245c7*/
      return result; /*0x7245ca*/
    }
  }
  result = __2_YAPAXI_Z(0x1Cu); /*0x7245cf*/
  v6 = (_DWORD *)result; /*0x7245d4*/
  if ( result ) /*0x7245db*/
  {
    *(_DWORD *)result = *(_DWORD *)v2; /*0x7245e6*/
    *(_DWORD *)(result + 4) = *(_DWORD *)(v2 + 4); /*0x7245ee*/
    *(_DWORD *)(result + 8) = *(_DWORD *)(v2 + 8); /*0x7245f3*/
    *(_DWORD *)(result + 12) = *(_DWORD *)(v2 + 12); /*0x7245f9*/
    *(_DWORD *)(result + 16) = *(_DWORD *)(v2 + 16); /*0x7245ff*/
    *(_DWORD *)(result + 20) = *(_DWORD *)(v2 + 20); /*0x724605*/
    *(_BYTE *)(result + 24) = *(_BYTE *)(v2 + 24); /*0x724611*/
    v7 = *(this + 143); /*0x724614*/
    if ( this->q091 < v7 /*0x724641*/
      || (*((_BYTE *)this + 577) || !v7)
      && (v8 = *(this + 146), v8 > 0)
      && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(this->q08D + 8))(this + 141, v7 + v8, 0) )
    {
      v9 = this->q091; /*0x72464c*/
      v10 = this->q08E; /*0x72464f*/
      this->q091 = v9 + 1; /*0x724655*/
      *(_DWORD *)(v10 + 4 * v9) = v6; /*0x724658*/
      result = v4[2]; /*0x72465e*/
      if ( v4[1] + 1 <= result ) /*0x724664*/
      {
LABEL_19:
        *(_DWORD *)(*v4 + 8 * v4[1]) = *v6; /*0x7246f4*/
        *(_DWORD *)(*v4 + 8 * v4[1] + 4) = v6; /*0x724704*/
        result = v4[1] + 1; /*0x72470b*/
        *((_BYTE *)v4 + 12) = 0; /*0x72470c*/
        v4[1] = result; /*0x724710*/
        goto LABEL_20; /*0x724710*/
      }
      if ( result ) /*0x72466c*/
      {
        a2 = v4[2]; /*0x72467c*/
        if ( result < 0 ) /*0x724680*/
          goto LABEL_20; /*0x724680*/
      }
      else
      {
        a2 = 10; /*0x72466e*/
      }
      v11 = result + a2; /*0x72468a*/
      result = __2_YAPAXI_Z(8 * (result + a2)); /*0x724695*/
      v12 = result; /*0x72469a*/
      if ( result ) /*0x7246a1*/
      {
        Array::ForEach((int *)result, 8, v11, (int (__thiscall *)(int))__0Iostream_init_QAE_XZ_6); /*0x7246ac*/
        for ( i = 0; i < v4[1]; *(_DWORD *)(v12 + 8 * i - 4) = *(_DWORD *)&v14[8 * i - 4] ) /*0x7246b8*/
        {
          v14 = (char *)*v4; /*0x7246ba*/
          ++i; /*0x7246bc*/
          *(_DWORD *)(v12 + 8 * i - 8) = *(_DWORD *)(*v4 + 8 * i - 8); /*0x7246c1*/
        }
        __3_YAXPAX_Z((void *)*v4); /*0x7246d7*/
        v15 = a2 + v4[2]; /*0x7246e6*/
        *v4 = v12; /*0x7246e8*/
        v4[2] = v15; /*0x7246ea*/
        v4[4] = 0; /*0x7246ed*/
        goto LABEL_19; /*0x7246ed*/
      }
LABEL_20:
      LOBYTE(result) = 1; /*0x724713*/
      return result; /*0x724719*/
    }
    __3_YAXPAX_Z(v6); /*0x72471d*/
  }
LABEL_22:
  LOBYTE(result) = 0; /*0x724725*/
  return result; /*0x7245c4*/
}



// ==== 0x00724730  HashTable::Remove  this=HashTable  sig=csp ====
void __thiscall HashTable::Remove(HashTable *this, int a2)
{
  HashTable *v3; // esi
  _DWORD *v4; // eax
  int v5; // eax
  _DWORD *HashTable_field_0x10; // eax
  int v7; // eax
  void **v8; // eax
  void *v9; // eax
  int HashTable_field_0x04; // ecx
  unsigned int *v11; // edi
  size_t v12; // eax
  int v13; // ecx
  int v14; // eax
  int v15; // eax
  int i; // ecx
  _DWORD *v17; // eax
  CommandClass v18; // edi
  int v19; // eax
  int v20; // eax
  int v21; // ecx
  int v22; // ecx
  void *Block; // [esp+8h] [ebp-Ch] BYREF
  unsigned int v24; // [esp+Ch] [ebp-8h] BYREF

  v3 = this + 7; /*0x72473d*/
  if ( !*((_DWORD *)this + 148) ) /*0x724745*/
    return; /*0x724745*/
  v4 = (_DWORD *)*((_DWORD *)this + 151); /*0x72474b*/
  if ( !v4 || *v4 != a2 ) /*0x72475a*/
  {
    v5 = CommandClass::BinarySearchAction((CommandClass *)v3, (unsigned int *)&a2); /*0x724763*/
    if ( !v5 ) /*0x72476a*/
      return; /*0x72476a*/
    v3->HashTable_field_0x10 = v5; /*0x724770*/
  }
  if ( v3->HashTable_field_0x04 ) /*0x724773*/
  {
    HashTable_field_0x10 = (_DWORD *)v3->HashTable_field_0x10; /*0x72477a*/
    if ( HashTable_field_0x10 && *HashTable_field_0x10 == a2 ) /*0x724789*/
      goto LABEL_11; /*0x724789*/
    v7 = CommandClass::BinarySearchAction((CommandClass *)v3, (unsigned int *)&a2); /*0x724792*/
    if ( v7 ) /*0x724799*/
    {
      v3->HashTable_field_0x10 = v7; /*0x72479b*/
LABEL_11:
      v8 = (void **)(v3->HashTable_field_0x10 + 4); /*0x72479e*/
      goto LABEL_13; /*0x7247a4*/
    }
  }
  v8 = (void **)&unk_B78820; /*0x7247a6*/
LABEL_13:
  v9 = *v8; /*0x7247ab*/
  HashTable_field_0x04 = this->HashTable_field_0x04; /*0x7247ad*/
  Block = v9; /*0x7247b2*/
  if ( (void *)HashTable_field_0x04 == v9 && HashTable_field_0x04 ) /*0x7247ba*/
  {
    (*(void (__thiscall **)(HashTable *, int *))(*(_DWORD *)this->__pad_0 + 8))(this, &this->HashTable_field_0x18); /*0x7247c5*/
    v9 = Block; /*0x7247c8*/
  }
  v11 = (unsigned int *)v9; /*0x7247cd*/
  v12 = v3->HashTable_field_0x04; /*0x7247cf*/
  if ( v12 ) /*0x7247d4*/
  {
    if ( !LOBYTE(v3->HashTable_field_0x0C) ) /*0x7247da*/
    {
      qsort(*(void **)v3->__pad_0, v12, 8u, (_CoreCrtNonSecureSearchSortCompareFunction)CompareFunc2Int); /*0x7247ec*/
      v3->HashTable_field_0x10 = 0; /*0x7247f4*/
      LOBYTE(v3->HashTable_field_0x0C) = 1; /*0x7247fb*/
    }
    v13 = *(_DWORD *)v3->__pad_0; /*0x724801*/
    v24 = *v11; /*0x724807*/
    v14 = UI_Remove(v13, v3->HashTable_field_0x04, &v24); /*0x72480f*/
    if ( v14 ) /*0x724816*/
    {
      v15 = (v14 - *(_DWORD *)v3->__pad_0) >> 3; /*0x72481a*/
      if ( v15 != -1 ) /*0x724820*/
      {
        for ( i = v15 + 1; i < v3->HashTable_field_0x04; *(v17 - 1) = v17[1] ) /*0x72482a*/
        {
          v17 = (_DWORD *)(*(_DWORD *)v3->__pad_0 + 8 * i++); /*0x72482e*/
          *(v17 - 2) = *v17; /*0x724834*/
        }
        v18 = *(CommandClass *)v3->__pad_0; /*0x724847*/
        v19 = v3->HashTable_field_0x04 - 1; /*0x724849*/
        v3->HashTable_field_0x04 = v19; /*0x72484c*/
        *(_DWORD *)(*(_DWORD *)&v18 + 8 * v19) = 0; /*0x724851*/
        *(_DWORD *)(*(_DWORD *)&v18 + 8 * v19 + 4) = 0; /*0x724854*/
        v3->HashTable_field_0x10 = 0; /*0x724858*/
      }
    }
  }
  v20 = (*(int (__thiscall **)(char *, void **))(*((_DWORD *)this + 141) + 16))((char *)this + 564, &Block); /*0x72486e*/
  if ( v20 != -1 ) /*0x724875*/
  {
    v21 = *((_DWORD *)this + 145); /*0x724877*/
    if ( v20 < v21 ) /*0x72487c*/
    {
      v22 = v21 - 1; /*0x72487e*/
      for ( *((_DWORD *)this + 145) = v22; /*0x724884*/
            v20 < *((_DWORD *)this + 145);
            *(_DWORD *)(*((_DWORD *)this + 142) + 4 * v20 - 4) = *(_DWORD *)(*((_DWORD *)this + 142) + 4 * v20) )
      {
        ++v20; /*0x724889*/
      }
    }
  }
  if ( Block ) /*0x72489e*/
    __3_YAXPAX_Z(Block); /*0x7248a1*/
}



// ==== 0x007248C0  TooltipClass::GetText  this=TooltipClass  sig=csp ====
char __thiscall TooltipClass::GetText(TooltipClass *this, unsigned int a2, void *a3)
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

  v4 = *((_DWORD *)this + 148); /*0x7248c6*/
  if ( !v4 ) /*0x7248ce*/
    return 0; /*0x7248ce*/
  v5 = (_DWORD *)*((_DWORD *)this + 151); /*0x7248d0*/
  if ( !v5 || *v5 != a2 ) /*0x7248e0*/
  {
    if ( !*((_BYTE *)this + 600) ) /*0x7248e2*/
    {
      qsort(*((void **)this + 147), v4, 8u, (_CoreCrtNonSecureSearchSortCompareFunction)CompareFunc2Int); /*0x7248fb*/
      *((_DWORD *)this + 151) = 0; /*0x724903*/
      *((_BYTE *)this + 600) = 1; /*0x72490d*/
    }
    v6 = *((_DWORD *)this + 148); /*0x724914*/
    v7 = *((_DWORD *)this + 147); /*0x72491a*/
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
            *((_DWORD *)this + 151) = v9; /*0x724958*/
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
  v11 = *((_DWORD *)this + 148); /*0x72496a*/
  if ( !v11 ) /*0x724972*/
    goto LABEL_27; /*0x724972*/
  v12 = (_DWORD *)*((_DWORD *)this + 151); /*0x724978*/
  if ( v12 && *v12 == a2 ) /*0x724984*/
  {
LABEL_32:
    v17 = (const void **)(*((_DWORD *)this + 151) + 4); /*0x724a1e*/
    goto LABEL_28; /*0x724a27*/
  }
  if ( !*((_BYTE *)this + 600) ) /*0x72498a*/
  {
    qsort(*((void **)this + 147), v11, 8u, (_CoreCrtNonSecureSearchSortCompareFunction)CompareFunc2Int); /*0x7249a3*/
    *((_DWORD *)this + 151) = 0; /*0x7249ab*/
    *((_BYTE *)this + 600) = 1; /*0x7249b5*/
  }
  v13 = *((_DWORD *)this + 148); /*0x7249bc*/
  v14 = *((_DWORD *)this + 147); /*0x7249c2*/
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
    *((_DWORD *)this + 151) = v16; /*0x724a18*/
    goto LABEL_32; /*0x724a18*/
  }
LABEL_27:
  v17 = (const void **)&unk_B78820; /*0x7249f9*/
LABEL_28:
  qmemcpy(a3, *v17, 0x1Cu); /*0x7249fe*/
  return 1; /*0x72494b*/
}



// ==== 0x00724A30  ObjectClass::method_724A30  this=ObjectClass  sig=csp ====
int __thiscall sub_724A30(TechnoClass *this, int *a2)
{
  int v2; // ebp
  int v3; // ebx
  int v4; // esi
  int v5; // edi
  int *v6; // eax
  int v7; // edx
  int v8; // ecx
  int v10; // [esp+10h] [ebp-4h]

  v2 = this->cloakDelayTimer[1]; /*0x724a33*/
  v3 = 0; /*0x724a39*/
  if ( v2 <= 0 ) /*0x724a3f*/
    return 0; /*0x724a86*/
  v10 = this->cloakProgress[5]; /*0x724a4b*/
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
char __stdcall ToolTipManager::addRef(ToolTipManager *this)
{
  return 1; /*0x724aa2*/
}



// ==== 0x00724AB0  ToolTipManager::release  this=ToolTipManager  sig=csp ====
int __thiscall ToolTipManager::release(ToolTipManager *this, int a2)
{
  this->DisplayTimer[1] = 0; /*0x724ab2*/
  this->DisplayTimer[2] = 0; /*0x724ab5*/
  this->TextBuffer[0] = 0; /*0x724ab8*/
  this->TextBuffer[1] = 0; /*0x724abb*/
  this->Position[0] = 0; /*0x724abe*/
  return 0; /*0x724ac1*/
}



// ==== 0x00724AD0  ToolTipClass::initString  this=ToolTipClass  sig=csp ====
int __thiscall ToolTipClass::initString(ToolTipClass *this)
{
  _DWORD *ToolTipClass_field_0x04; // eax
  wchar_t *v3; // ecx
  wchar_t *StringCSF; // eax
  const wchar_t *v5; // edi
  int ToolTipClass_field_0x10; // edx

  ToolTipClass_field_0x04 = (_DWORD *)this->ToolTipClass_field_0x04; /*0x724ad7*/
  if ( ToolTipClass_field_0x04 ) /*0x724adc*/
  {
    v3 = (wchar_t *)ToolTipClass_field_0x04[5]; /*0x724ae2*/
    if ( v3 ) /*0x724ae7*/
      StringCSF = GetStringCSF(v3, 0, aDRa2mdpostTool, 563); /*0x724b01*/
    else
      StringCSF = (wchar_t *)(*(int (__thiscall **)(ToolTipClass *, _DWORD))(*(_DWORD *)this->__pad_0 + 20))( /*0x724af0*/
                               this,
                               *ToolTipClass_field_0x04);
    v5 = StringCSF; /*0x724b06*/
    if ( StringCSF && wcslen(StringCSF) ) /*0x724b0d*/
    {
      wcsncpy((wchar_t *)&this->ToolTipClass_field_0x28, v5, 0x100u); /*0x724b23*/
      ToolTipClass_field_0x10 = this->ToolTipClass_field_0x10; /*0x724b28*/
      this->ToolTipClass_field_0x1C = this->ToolTipClass_field_0x14; /*0x724b36*/
      this->ToolTipClass_field_0x18 = ToolTipClass_field_0x10; /*0x724b39*/
      if ( !(*(unsigned __int8 (__thiscall **)(ToolTipClass *, int *))(*(_DWORD *)this->__pad_0 + 4))( /*0x724b3e*/
              this,
              &this->ToolTipClass_field_0x18) )
      {
        this->ToolTipClass_field_0x18 = 0; /*0x724b47*/
        this->ToolTipClass_field_0x1C = 0; /*0x724b49*/
        this->ToolTipClass_field_0x20 = 0; /*0x724b4c*/
        this->ToolTipClass_field_0x24 = 0; /*0x724b4f*/
        this->ToolTipClass_field_0x04 = 0; /*0x724b54*/
        return 0; /*0x724b5f*/
      }
    }
    else
    {
      this->ToolTipClass_field_0x18 = 0; /*0x724b60*/
      this->ToolTipClass_field_0x1C = 0; /*0x724b63*/
      this->ToolTipClass_field_0x20 = 0; /*0x724b66*/
      this->ToolTipClass_field_0x24 = 0; /*0x724b69*/
      this->ToolTipClass_field_0x04 = 0; /*0x724b6c*/
    }
  }
  return this->ToolTipClass_field_0x04 != 0; /*0x724b59*/
}



// ==== 0x00724B80  ToolTipManager::ddtor  this=ToolTipManager  sig=csp ====
int __thiscall ToolTipManager::ddtor(ToolTipManager *this, char a2)
{
  int result; // eax

  if ( a2 == 1 ) /*0x724b89*/
    ToolTipClass::initString((ToolTipClass *)this); /*0x724b8b*/
  result = this->Position[0]; /*0x724b90*/
  if ( result ) /*0x724b95*/
    return (*(int (__thiscall **)(ToolTipManager *, int *))(*(_DWORD *)&this->IsVisible + 16))( /*0x724b9f*/
             this,
             &this->DisplayTimer[1]);
  return result; /*0x724ba2*/
}



// ==== 0x00724BB0  ToolTipManager::read  this=ToolTipManager  sig=csp ====
void __stdcall ToolTipManager::read(ToolTipManager *this)
{
  Debug::Log(); /*0x724bbd*/
}



// ==== 0x00724BD0  ToolTipManager::stubReturnFalse  this=ToolTipManager  sig=csp ====
int __stdcall ToolTipManager::stubReturnFalse(ToolTipManager *this)
{
  return 0; /*0x724bd2*/
}



// ==== 0x00724C00  Frame::Init  this=Frame  sig=csp ====
BOOL __thiscall Frame::Init(Frame *this)
{
  return this->q004 != 0; /*0x724c0a*/
}



// ==== 0x00724C10  ToolTipManager::Destructor  this=ToolTipManager  sig=csp ====
void *__thiscall ToolTipClass::Destructor(ToolTipManager *this, char a2)
{
  ToolTipClass::updateString((ToolTipClass *)this); /*0x724c13*/
  if ( (a2 & 1) != 0 ) /*0x724c1d*/
    __3_YAXPAX_Z(this); /*0x724c20*/
  return this; /*0x724c2a*/
}



// ==== 0x00724C30  _DynamicVectorClass_PBVToolTip::ddtor  this=DynamicVector  sig=csp ====
void __thiscall ToolTipClass::ddtor(_DynamicVectorClass_PBVToolTip *this)
{
  void *v2; // eax

  v2 = *(void **)&this->m_1[3]; /*0x724c36*/
  this->m_10 = 0; /*0x724c39*/
  if ( v2 && BYTE1(this->m_C) ) /*0x724c40*/
  {
    __3_YAXPAX_Z(v2); /*0x724c46*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x724c4e*/
  }
  BYTE1(this->m_C) = 0; /*0x724c51*/
  this->m_8 = 0; /*0x724c54*/
}



// ==== 0x00724C60  _DynamicVectorClass_PBVToolTip::write  this=DynamicVector  sig=csp ====
unsigned int __thiscall ToolTipClass::write(_DynamicVectorClass_PBVToolTip *this, int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x724c60*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 2; /*0x724c75*/
  else
    return 0; /*0x724c67*/
}



// ==== 0x00724C80  _VectorClass_PBVToolTip::seek  this=VectorClass  sig=csp ====
int __thiscall ToolTipClass::seek(_VectorClass_PBVToolTip *this, int a2)
{
  return *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * a2); /*0x724c8a*/
}



// ==== 0x00724C90  _VectorClass_PBVToolTip::addRef  this=VectorClass  sig=csp ====
char __thiscall ToolTipClass::addRef(_VectorClass_PBVToolTip *this, int a2)
{
  int m_8; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  m_8 = this->m_8; /*0x724c92*/
  if ( m_8 == *(_DWORD *)(a2 + 8) ) /*0x724c9d*/
  {
    v3 = 0; /*0x724c9f*/
    if ( m_8 <= 0 ) /*0x724ca3*/
      return 1; /*0x724cc3*/
    v4 = *(_DWORD **)&this->m_1[3]; /*0x724ca5*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x724cab*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x724cb4*/
    {
      ++v3; /*0x724cb6*/
      ++v4; /*0x724cb7*/
      if ( v3 >= m_8 ) /*0x724cbc*/
        return 1; /*0x724cbc*/
    }
  }
  return 0; /*0x724cbe*/
}



// ==== 0x00724CD0  _VectorClass_PBVToolTip::readString  this=VectorClass  sig=csp ====
char __thiscall ToolTipClass::readString(_VectorClass_PBVToolTip *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int m_8; // ecx
  int i; // eax

  if ( a2 ) /*0x724cdc*/
  {
    LOBYTE(this->m_C) = 0; /*0x724ce6*/
    if ( a3 ) /*0x724cec*/
      v4 = a3; /*0x724d02*/
    else
      v4 = (_DWORD *)__2_YAPAXI_Z(4 * a2); /*0x724cfe*/
    LOBYTE(this->m_C) = 1; /*0x724d06*/
    if ( v4 ) /*0x724d0a*/
    {
      if ( *(_DWORD *)&this->m_1[3] ) /*0x724d15*/
      {
        m_8 = this->m_8; /*0x724d1c*/
        if ( a2 < m_8 ) /*0x724d21*/
          m_8 = a2; /*0x724d23*/
        for ( i = 0; i < m_8; v4[i - 1] = *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * i - 4) ) /*0x724d29*/
          ++i; /*0x724d2e*/
        if ( BYTE1(this->m_C) ) /*0x724d3b*/
        {
          __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x724d46*/
          *(_DWORD *)&this->m_1[3] = 0; /*0x724d4e*/
        }
      }
      *(_DWORD *)&this->m_1[3] = v4; /*0x724d57*/
      this->m_8 = a2; /*0x724d5f*/
      BYTE1(this->m_C) = a3 == 0; /*0x724d62*/
      return 1; /*0x724d68*/
    }
    else
    {
      return 0; /*0x724d0f*/
    }
  }
  else
  {
    (*(void (__thiscall **)(_VectorClass_PBVToolTip *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x724d72*/
    return 1; /*0x724d78*/
  }
}



// ==== 0x00724D80  _VectorClass_PBVToolTip::writeString  this=VectorClass  sig=csp ====
void __thiscall ToolTipClass::writeString(_VectorClass_PBVToolTip *this)
{
  if ( *(_DWORD *)&this->m_1[3] && BYTE1(this->m_C) ) /*0x724d8d*/
  {
    __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x724d93*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x724d9b*/
  }
  BYTE1(this->m_C) = 0; /*0x724d9e*/
  this->m_8 = 0; /*0x724da1*/
}



// ==== 0x00724DB0  _VectorClass_PBVToolTip::seekString  this=VectorClass  sig=csp ====
int __thiscall ToolTipClass::seekString(_VectorClass_PBVToolTip *this, _DWORD *a2)
{
  int result; // eax
  int m_8; // edx
  _DWORD *i; // ecx

  if ( !LOBYTE(this->m_C) ) /*0x724db0*/
    return 0; /*0x724db8*/
  m_8 = this->m_8; /*0x724dbe*/
  result = 0; /*0x724dc1*/
  if ( m_8 <= 0 ) /*0x724dc5*/
    return -1; /*0x724ddc*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2; ++i ) /*0x724dcb*/
  {
    if ( ++result >= m_8 ) /*0x724dda*/
      return -1; /*0x724dda*/
  }
  return result; /*0x724dba*/
}



// ==== 0x00724DF0  _VectorClass_PBVToolTip::setString  this=VectorClass  sig=csp ====
unsigned int __thiscall ToolTipClass::setString(_VectorClass_PBVToolTip *this, int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x724df0*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 2; /*0x724e05*/
  else
    return 0; /*0x724df7*/
}



// ==== 0x00724E10  _DynamicVectorClass_PBVToolTip::release  this=DynamicVector  sig=csp ====
char __thiscall ToolTipClass::release(_DynamicVectorClass_PBVToolTip *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int m_8; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x724e1c*/
  {
    LOBYTE(this->m_C) = 0; /*0x724e22*/
    if ( a3 ) /*0x724e28*/
      v4 = a3; /*0x724e3e*/
    else
      v4 = (_DWORD *)__2_YAPAXI_Z(4 * a2); /*0x724e3a*/
    LOBYTE(this->m_C) = 1; /*0x724e42*/
    if ( !v4 ) /*0x724e46*/
      return 0; /*0x724eba*/
    if ( *(_DWORD *)&this->m_1[3] ) /*0x724e48*/
    {
      m_8 = this->m_8; /*0x724e4f*/
      if ( a2 < m_8 ) /*0x724e54*/
        m_8 = a2; /*0x724e56*/
      for ( i = 0; i < m_8; v4[i - 1] = *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * i - 4) ) /*0x724e5c*/
        ++i; /*0x724e61*/
      if ( BYTE1(this->m_C) ) /*0x724e6e*/
      {
        __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x724e79*/
        *(_DWORD *)&this->m_1[3] = 0; /*0x724e81*/
      }
    }
    *(_DWORD *)&this->m_1[3] = v4; /*0x724e8a*/
    this->m_8 = a2; /*0x724e92*/
    BYTE1(this->m_C) = a3 == 0; /*0x724e95*/
  }
  else
  {
    (*(void (__thiscall **)(_DynamicVectorClass_PBVToolTip *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x724e9e*/
  }
  v7 = this->m_8; /*0x724ea1*/
  if ( v7 < this->m_10 ) /*0x724ea9*/
    this->m_10 = v7; /*0x724eab*/
  return 1; /*0x724eae*/
}



// ==== 0x00724EC0  _DynamicVectorClass_PBVToolTip::read  this=DynamicVector  sig=csp ====
int __thiscall ToolTipClass::read(_DynamicVectorClass_PBVToolTip *this, _DWORD *a2)
{
  int m_10; // edx
  int result; // eax
  _DWORD *i; // ecx

  m_10 = this->m_10; /*0x724ec0*/
  result = 0; /*0x724ec3*/
  if ( m_10 <= 0 ) /*0x724ec8*/
    return -1; /*0x724edf*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2; ++i ) /*0x724ece*/
  {
    if ( ++result >= m_10 ) /*0x724edd*/
      return -1; /*0x724edd*/
  }
  return result; /*0x724ee2*/
}



// ==== 0x00724EF0  _VectorClass_PBVToolTip::compareString  this=VectorClass  sig=csp ====
_DWORD *__thiscall ToolTipClass::compareString(_VectorClass_PBVToolTip *this, char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x724ef3*/
  *(_DWORD *)this->__pad_0 = &VectorClass<ToolTip const *>::`vftable'; /*0x724ef6*/
  if ( v3 && BYTE1(this->m_C) ) /*0x724f00*/
  {
    __3_YAXPAX_Z(v3); /*0x724f08*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x724f10*/
  }
  BYTE1(this->m_C) = 0; /*0x724f1b*/
  this->m_8 = 0; /*0x724f21*/
  if ( (a2 & 1) != 0 ) /*0x724f28*/
    __3_YAXPAX_Z(this); /*0x724f2b*/
  return this->__pad_0; /*0x724f35*/
}



// ==== 0x00724F40  _DynamicVectorClass_PBVToolTip::QueryInterface  this=DynamicVector  sig=csp ====
_DWORD *__thiscall ToolTipManager_7::QueryInterface(_DynamicVectorClass_PBVToolTip *this, char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x724f43*/
  *(_DWORD *)this->__pad_0 = &VectorClass<ToolTip const *>::`vftable'; /*0x724f46*/
  if ( v3 && BYTE1(this->m_C) ) /*0x724f50*/
  {
    __3_YAXPAX_Z(v3); /*0x724f58*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x724f60*/
  }
  BYTE1(this->m_C) = 0; /*0x724f6b*/
  this->m_8 = 0; /*0x724f71*/
  if ( (a2 & 1) != 0 ) /*0x724f78*/
    __3_YAXPAX_Z(this); /*0x724f7b*/
  return this->__pad_0; /*0x724f85*/
}



// ==== 0x00724F90  ObjectClass::??0Iostream_init_QAE_XZ_6  this=ObjectClass  sig=csp ====
Iostream_init *__thiscall __0Iostream_init_QAE_XZ_6(Iostream_init *this)
{
  return this; /*0x724f92*/
}



// ==== 0x00724FA0  CommandClass::executeAction  this=CommandClass  sig=csp ====
bool __thiscall CommandClass::executeAction(CommandClass *this, _DWORD *a2)
{
  _DWORD *v2; // eax

  v2 = (_DWORD *)*((_DWORD *)this + 4); /*0x724fa0*/
  return v2 && *v2 == *a2; /*0x724fb3*/
}



// ==== 0x00724FC0  CommandClass::BinarySearchAction  this=CommandClass  sig=csp ====
int __thiscall CommandClass::BinarySearchAction(CommandClass *this, unsigned int *a2)
{
  int result; // eax
  CommandClass v4; // edi
  unsigned int v5; // ebx
  int v6; // ecx
  unsigned int v7; // esi

  result = *((_DWORD *)this + 1); /*0x724fc3*/
  if ( result ) /*0x724fc8*/
  {
    if ( !*((_BYTE *)this + 12) ) /*0x724fce*/
    {
      qsort(*(void **)this, result, 8u, (_CoreCrtNonSecureSearchSortCompareFunction)CompareFunc2Int); /*0x724fe0*/
      *((_DWORD *)this + 4) = 0; /*0x724fe8*/
      *((_BYTE *)this + 12) = 1; /*0x724fef*/
    }
    v4 = *this; /*0x724ff9*/
    v5 = *a2; /*0x724ffb*/
    v6 = *((_DWORD *)this + 1); /*0x724ffd*/
    if ( v6 <= 0 ) /*0x725002*/
      return 0; /*0x72502e*/
    while ( 1 ) /*0x72500b*/
    {
      v7 = *(_DWORD *)(*(_DWORD *)&v4 + 8 * (v6 / 2)); /*0x72500b*/
      if ( v7 <= v5 ) /*0x725013*/
      {
        if ( v7 == v5 ) /*0x725019*/
          return *(_DWORD *)&v4 + 8 * (v6 / 2); /*0x725033*/
        *(_DWORD *)&v4 += 8 * (v6 / 2) + 8; /*0x72501b*/
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



// ==== 0x00725070  UI_Remove  this=-  sig=csp ====
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
  dbl_B0F638 = Math::Sqrt(v0 + v0); /*0x7250de*/
}



// ==== 0x007250F0  sub_7250F0  this=-  sig=ida-proto ====
void sub_7250F0()
{
  dbl_B0F748 = dbl_B0F638 / 60.0; /*0x7250fc*/
}



// ==== 0x00725110  sub_725110  this=-  sig=ida-proto ====
void sub_725110()
{
  dbl_B0F6E8 = 1.0 / dbl_B0F748; /*0x72511c*/
}



// ==== 0x00725130  sub_725130  this=-  sig=ida-proto ====
void sub_725130()
{
  dbl_B0F6E0 = 0.0174532925199433 * 45.0; /*0x72513c*/
}



// ==== 0x00725150  sub_725150  this=-  sig=ida-proto ====
void sub_725150()
{
  dbl_B0F688 = 0.0174532925199433 * 60.0; /*0x72515c*/
}



// ==== 0x00725170  sub_725170  this=-  sig=ida-proto ====
void sub_725170()
{
  dbl_B0F5D0 = 0.0174532925199433 * 90.0; /*0x72517c*/
}



// ==== 0x00725190  sub_725190  this=-  sig=ida-proto ====
__int64 sub_725190()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_B0F5D0 - dbl_B0F688); /*0x7251a2*/
  result = Math::RoundToInt(v0 * dbl_B0F638 * 0.5); /*0x7251b6*/
  dword_B0F750 = result; /*0x7251bb*/
  return result; /*0x7251c0*/
}



// ==== 0x007251D0  sub_7251D0  this=-  sig=ida-proto ====
void sub_7251D0()
{
  dbl_B0F690 = Math::ArcTan((double)dword_B0F750 * 0.00390625); /*0x7251e7*/
}



// ==== 0x00725200  sub_725200  this=-  sig=ida-proto ====
void sub_725200()
{
  dbl_B0F6C0 = Math::ArcTan((double)(2 * dword_B0F750) / dbl_B0F638); /*0x725222*/
}



// ==== 0x00725230  sub_725230  this=-  sig=ida-proto ====
__int64 sub_725230()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_B0F750) + 0.5); /*0x72524b*/
  dword_B0F744 = result; /*0x725250*/
  return result; /*0x725256*/
}



// ==== 0x00725260  sub_725260  this=-  sig=ida-proto ====
int sub_725260()
{
  word_B0F630 = 0; /*0x725262*/
  word_B0F632 = 0; /*0x725268*/
  return 0; /*0x72526e*/
}



// ==== 0x00725270  sub_725270  this=-  sig=ida-proto ====
int sub_725270()
{
  dword_B0F6B0 = 0; /*0x725272*/
  dword_B0F6B4 = 0; /*0x725277*/
  dword_B0F6B8 = 0; /*0x72527c*/
  return 0; /*0x725281*/
}



// ==== 0x00725290  sub_725290  this=-  sig=ida-proto ====
int sub_725290()
{
  dword_B0F740 = 0; /*0x725295*/
  dword_B0F738 = 128; /*0x72529f*/
  dword_B0F73C = 128; /*0x7252a4*/
  return 128; /*0x7252a9*/
}



// ==== 0x007252B0  sub_7252B0  this=-  sig=ida-proto ====
int sub_7252B0()
{
  dword_B0F608 = 0; /*0x7252b2*/
  dword_B0F60C = 0; /*0x7252b7*/
  dword_B0F610 = 0; /*0x7252bc*/
  dword_B0F614 = 0; /*0x7252c1*/
  return 0; /*0x7252c6*/
}



// ==== 0x007252D0  sub_7252D0  this=-  sig=ida-proto ====
int sub_7252D0()
{
  dword_B0F724 = 0; /*0x7252d7*/
  dword_B0F728 = 0; /*0x7252dc*/
  byte_B0F72C = 1; /*0x7252e1*/
  byte_B0F72D = 0; /*0x7252e8*/
  dword_B0F720 = (int)&DynamicVectorClass<AbstractClass *>::`vftable'; /*0x7252ed*/
  dword_B0F734 = 10; /*0x7252f7*/
  dword_B0F730 = 0; /*0x725301*/
  return atexit(sub_725310); /*0x72530c*/
}



// ==== 0x00725310  sub_725310  this=-  sig=ida-proto ====
void __cdecl sub_725310()
{
  dword_B0F720 = (int)&VectorClass<AbstractClass *>::`vftable'; /*0x725318*/
  if ( dword_B0F724 && byte_B0F72D ) /*0x72532c*/
  {
    __3_YAXPAX_Z(dword_B0F724); /*0x72532f*/
    dword_B0F724 = 0; /*0x725337*/
  }
  byte_B0F72D = 0; /*0x72533d*/
  dword_B0F728 = 0; /*0x725343*/
}



// ==== 0x00725350  sub_725350  this=-  sig=ida-proto ====
int sub_725350()
{
  dword_B0F674 = 0; /*0x725357*/
  dword_B0F678 = 0; /*0x72535c*/
  byte_B0F67C = 1; /*0x725361*/
  byte_B0F67D = 0; /*0x725368*/
  dword_B0F670 = (int)&DynamicVectorClass<AbstractClass *>::`vftable'; /*0x72536d*/
  dword_B0F684 = 10; /*0x725377*/
  dword_B0F680 = 0; /*0x725381*/
  return atexit(sub_725390); /*0x72538c*/
}



// ==== 0x00725390  sub_725390  this=-  sig=ida-proto ====
void __cdecl sub_725390()
{
  dword_B0F670 = (int)&VectorClass<AbstractClass *>::`vftable'; /*0x725398*/
  if ( dword_B0F674 && byte_B0F67D ) /*0x7253ac*/
  {
    __3_YAXPAX_Z(dword_B0F674); /*0x7253af*/
    dword_B0F674 = 0; /*0x7253b7*/
  }
  byte_B0F67D = 0; /*0x7253bd*/
  dword_B0F678 = 0; /*0x7253c3*/
}



// ==== 0x007253D0  sub_7253D0  this=-  sig=ida-proto ====
int sub_7253D0()
{
  dword_B0F61C = 0; /*0x7253d7*/
  dword_B0F620 = 0; /*0x7253dc*/
  byte_B0F624 = 1; /*0x7253e1*/
  byte_B0F625 = 0; /*0x7253e8*/
  dword_B0F618 = (int)&DynamicVectorClass<AbstractClass *>::`vftable'; /*0x7253ed*/
  dword_B0F62C = 10; /*0x7253f7*/
  dword_B0F628 = 0; /*0x725401*/
  return atexit(sub_725410); /*0x72540c*/
}



// ==== 0x00725410  sub_725410  this=-  sig=ida-proto ====
void __cdecl sub_725410()
{
  dword_B0F618 = (int)&VectorClass<AbstractClass *>::`vftable'; /*0x725418*/
  if ( dword_B0F61C && byte_B0F625 ) /*0x72542c*/
  {
    __3_YAXPAX_Z(dword_B0F61C); /*0x72542f*/
    dword_B0F61C = 0; /*0x725437*/
  }
  byte_B0F625 = 0; /*0x72543d*/
  dword_B0F620 = 0; /*0x725443*/
}



// ==== 0x00725450  sub_725450  this=-  sig=ida-proto ====
int sub_725450()
{
  dword_B0F70C = 0; /*0x725457*/
  dword_B0F710 = 0; /*0x72545c*/
  byte_B0F714 = 1; /*0x725461*/
  byte_B0F715 = 0; /*0x725468*/
  dword_B0F708 = (int)&DynamicVectorClass<AbstractClass *>::`vftable'; /*0x72546d*/
  dword_B0F71C = 10; /*0x725477*/
  dword_B0F718 = 0; /*0x725481*/
  return atexit(sub_725490); /*0x72548c*/
}



// ==== 0x00725490  sub_725490  this=-  sig=ida-proto ====
void __cdecl sub_725490()
{
  dword_B0F708 = (int)&VectorClass<AbstractClass *>::`vftable'; /*0x725498*/
  if ( dword_B0F70C && byte_B0F715 ) /*0x7254ac*/
  {
    __3_YAXPAX_Z(dword_B0F70C); /*0x7254af*/
    dword_B0F70C = 0; /*0x7254b7*/
  }
  byte_B0F715 = 0; /*0x7254bd*/
  dword_B0F710 = 0; /*0x7254c3*/
}



// ==== 0x007254D0  sub_7254D0  this=-  sig=ida-proto ====
int sub_7254D0()
{
  MEMORY[0xB0F5BC] = 0; /*0x7254d7*/
  MEMORY[0xB0F5C0] = 0; /*0x7254dc*/
  MEMORY[0xB0F5C4] = 1; /*0x7254e1*/
  MEMORY[0xB0F5C5] = 0; /*0x7254e8*/
  stru_B0F5B8 = (int)&DynamicVectorClass<AbstractClass *>::`vftable'; /*0x7254ed*/
  MEMORY[0xB0F5CC] = 10; /*0x7254f7*/
  MEMORY[0xB0F5C8] = 0; /*0x725501*/
  return atexit(sub_725510); /*0x72550c*/
}



// ==== 0x00725510  sub_725510  this=-  sig=ida-proto ====
void __cdecl sub_725510()
{
  stru_B0F5B8 = (int)&VectorClass<AbstractClass *>::`vftable'; /*0x725518*/
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
  dword_B0F644 = 0; /*0x725557*/
  dword_B0F648 = 0; /*0x72555c*/
  byte_B0F64C = 1; /*0x725561*/
  byte_B0F64D = 0; /*0x725568*/
  dword_B0F640 = (int)&DynamicVectorClass<AbstractClass *>::`vftable'; /*0x72556d*/
  dword_B0F654 = 10; /*0x725577*/
  dword_B0F650 = 0; /*0x725581*/
  return atexit(sub_725590); /*0x72558c*/
}



// ==== 0x00725590  sub_725590  this=-  sig=ida-proto ====
void __cdecl sub_725590()
{
  dword_B0F640 = (int)&VectorClass<AbstractClass *>::`vftable'; /*0x725598*/
  if ( dword_B0F644 && byte_B0F64D ) /*0x7255ac*/
  {
    __3_YAXPAX_Z(dword_B0F644); /*0x7255af*/
    dword_B0F644 = 0; /*0x7255b7*/
  }
  byte_B0F64D = 0; /*0x7255bd*/
  dword_B0F648 = 0; /*0x7255c3*/
}



// ==== 0x007255D0  sub_7255D0  this=-  sig=ida-proto ====
int sub_7255D0()
{
  dword_B0F65C = 0; /*0x7255d7*/
  dword_B0F660 = 0; /*0x7255dc*/
  byte_B0F664 = 1; /*0x7255e1*/
  byte_B0F665 = 0; /*0x7255e8*/
  dword_B0F658 = (int)&DynamicVectorClass<AbstractClass *>::`vftable'; /*0x7255ed*/
  dword_B0F66C = 10; /*0x7255f7*/
  dword_B0F668 = 0; /*0x725601*/
  return atexit(sub_725610); /*0x72560c*/
}



// ==== 0x00725610  sub_725610  this=-  sig=ida-proto ====
void __cdecl sub_725610()
{
  dword_B0F658 = (int)&VectorClass<AbstractClass *>::`vftable'; /*0x725618*/
  if ( dword_B0F65C && byte_B0F665 ) /*0x72562c*/
  {
    __3_YAXPAX_Z(dword_B0F65C); /*0x72562f*/
    dword_B0F65C = 0; /*0x725637*/
  }
  byte_B0F665 = 0; /*0x72563d*/
  dword_B0F660 = 0; /*0x725643*/
}



// ==== 0x00725650  sub_725650  this=-  sig=ida-proto ====
int sub_725650()
{
  dword_B0F5F4 = 0; /*0x725657*/
  dword_B0F5F8 = 0; /*0x72565c*/
  byte_B0F5FC = 1; /*0x725661*/
  byte_B0F5FD = 0; /*0x725668*/
  dword_B0F5F0 = (int)&DynamicVectorClass<AbstractClass *>::`vftable'; /*0x72566d*/
  dword_B0F604 = 10; /*0x725677*/
  dword_B0F600 = 0; /*0x725681*/
  return atexit(sub_725690); /*0x72568c*/
}



// ==== 0x00725690  sub_725690  this=-  sig=ida-proto ====
void __cdecl sub_725690()
{
  dword_B0F5F0 = (int)&VectorClass<AbstractClass *>::`vftable'; /*0x725698*/
  if ( dword_B0F5F4 && byte_B0F5FD ) /*0x7256ac*/
  {
    __3_YAXPAX_Z(dword_B0F5F4); /*0x7256af*/
    dword_B0F5F4 = 0; /*0x7256b7*/
  }
  byte_B0F5FD = 0; /*0x7256bd*/
  dword_B0F5F8 = 0; /*0x7256c3*/
}



// ==== 0x007256D0  sub_7256D0  this=-  sig=ida-proto ====
int sub_7256D0()
{
  dword_B0F5DC = 0; /*0x7256d7*/
  dword_B0F5E0 = 0; /*0x7256dc*/
  byte_B0F5E4 = 1; /*0x7256e1*/
  byte_B0F5E5 = 0; /*0x7256e8*/
  dword_B0F5D8 = (int)&DynamicVectorClass<AbstractClass *>::`vftable'; /*0x7256ed*/
  dword_B0F5EC = 10; /*0x7256f7*/
  dword_B0F5E8 = 0; /*0x725701*/
  return atexit(sub_725710); /*0x72570c*/
}



// ==== 0x00725710  sub_725710  this=-  sig=ida-proto ====
void __cdecl sub_725710()
{
  dword_B0F5D8 = (int)&VectorClass<AbstractClass *>::`vftable'; /*0x725718*/
  if ( dword_B0F5DC && byte_B0F5E5 ) /*0x72572c*/
  {
    __3_YAXPAX_Z(dword_B0F5DC); /*0x72572f*/
    dword_B0F5DC = 0; /*0x725737*/
  }
  byte_B0F5E5 = 0; /*0x72573d*/
  dword_B0F5E0 = 0; /*0x725743*/
}



// ==== 0x00725750  sub_725750  this=-  sig=ida-proto ====
int sub_725750()
{
  dword_B0F6CC = 0; /*0x725757*/
  dword_B0F6D0 = 0; /*0x72575c*/
  byte_B0F6D4 = 1; /*0x725761*/
  byte_B0F6D5 = 0; /*0x725768*/
  dword_B0F6C8 = (int)&DynamicVectorClass<AbstractClass *>::`vftable'; /*0x72576d*/
  dword_B0F6DC = 10; /*0x725777*/
  dword_B0F6D8 = 0; /*0x725781*/
  return atexit(sub_725790); /*0x72578c*/
}



// ==== 0x00725790  sub_725790  this=-  sig=ida-proto ====
void __cdecl sub_725790()
{
  dword_B0F6C8 = (int)&VectorClass<AbstractClass *>::`vftable'; /*0x725798*/
  if ( dword_B0F6CC && byte_B0F6D5 ) /*0x7257ac*/
  {
    __3_YAXPAX_Z(dword_B0F6CC); /*0x7257af*/
    dword_B0F6CC = 0; /*0x7257b7*/
  }
  byte_B0F6D5 = 0; /*0x7257bd*/
  dword_B0F6D0 = 0; /*0x7257c3*/
}



// ==== 0x007257D0  sub_7257D0  this=-  sig=ida-proto ====
int sub_7257D0()
{
  dword_B0F6F4 = 0; /*0x7257d7*/
  dword_B0F6F8 = 0; /*0x7257dc*/
  byte_B0F6FC = 1; /*0x7257e1*/
  byte_B0F6FD = 0; /*0x7257e8*/
  dword_B0F6F0 = (int)&DynamicVectorClass<AbstractClass *>::`vftable'; /*0x7257ed*/
  dword_B0F704 = 10; /*0x7257f7*/
  dword_B0F700 = 0; /*0x725801*/
  return atexit(sub_725810); /*0x72580c*/
}



// ==== 0x00725810  sub_725810  this=-  sig=ida-proto ====
void __cdecl sub_725810()
{
  dword_B0F6F0 = (int)&VectorClass<AbstractClass *>::`vftable'; /*0x725818*/
  if ( dword_B0F6F4 && byte_B0F6FD ) /*0x72582c*/
  {
    __3_YAXPAX_Z(dword_B0F6F4); /*0x72582f*/
    dword_B0F6F4 = 0; /*0x725837*/
  }
  byte_B0F6FD = 0; /*0x72583d*/
  dword_B0F6F8 = 0; /*0x725843*/
}



// ==== 0x00725850  sub_725850  this=-  sig=ida-proto ====
int sub_725850()
{
  MEMORY[0xB0F69C] = 0; /*0x725857*/
  MEMORY[0xB0F6A0] = 0; /*0x72585c*/
  MEMORY[0xB0F6A4] = 1; /*0x725861*/
  MEMORY[0xB0F6A5] = 0; /*0x725868*/
  stru_B0F698 = (int)&DynamicVectorClass<AbstractClass *>::`vftable'; /*0x72586d*/
  MEMORY[0xB0F6AC] = 10; /*0x725877*/
  MEMORY[0xB0F6A8] = 0; /*0x725881*/
  return atexit(sub_725890); /*0x72588c*/
}



// ==== 0x00725890  sub_725890  this=-  sig=ida-proto ====
void __cdecl sub_725890()
{
  stru_B0F698 = (int)&VectorClass<AbstractClass *>::`vftable'; /*0x725898*/
  if ( MEMORY[0xB0F69C] && MEMORY[0xB0F6A5] ) /*0x7258ac*/
  {
    __3_YAXPAX_Z(MEMORY[0xB0F69C]); /*0x7258af*/
    MEMORY[0xB0F69C] = 0; /*0x7258b7*/
  }
  MEMORY[0xB0F6A5] = 0; /*0x7258bd*/
  MEMORY[0xB0F6A0] = 0; /*0x7258c3*/
}



// ==== 0x007258D0  AbstractClass::AnnounceExpiredPointer  this=AbstractClass  sig=csp ====
void __fastcall AbstractClass::AnnounceExpiredPointer(AbstractClass *a1, int a2)
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

  v4 = (*((int (__thiscall **)(AbstractClass *))a1->vtable0 + 11))(a1); /*0x7258de*/
  v5 = 0; /*0x7258e9*/
  if ( *(AbstractClass **)&stru_87F5F0.__pad_E12[1418] == a1 ) /*0x7258e7*/
    *(_DWORD *)&stru_87F5F0.__pad_E12[1418] = 0; /*0x7258eb*/
  if ( *(AbstractClass **)&stru_87F5F0.__pad_E12[1422] == a1 ) /*0x7258fb*/
  {
    *(_DWORD *)&stru_87F5F0.__pad_E12[1422] = 0; /*0x725903*/
    Mouse::SetBounds((int)&stru_87F5F0.__pad_58[416], 0); /*0x725909*/
  }
  switch ( v4 ) /*0x725911*/
  {
    case 24: /*0x725911*/
      if ( a1 == *(AbstractClass **)&stru_A8EB00.?[404] ) /*0x72591d*/
        *(_DWORD *)&stru_A8EB00.?[404] = 0; /*0x72591f*/
      break;
    case 13: /*0x725911*/
      for ( i = 0; i < *(int *)&g_BuildingLoadQueue_Array.__pad_E88[16]; ++i ) /*0x7259e8*/
        (*(void (__thiscall **)(_DWORD, AbstractClass *, int))(**(_DWORD **)(*(_DWORD *)&g_BuildingLoadQueue_Array.__pad_E88[4] /*0x7259f7*/
                                                                           + 4 * i)
                                                             + 40))(
          *(_DWORD *)(*(_DWORD *)&g_BuildingLoadQueue_Array.__pad_E88[4] + 4 * i),
          a1,
          a2);
      goto LABEL_20; /*0x725a02*/
    case 4: /*0x725911*/
      for ( j = 0; j < g_BuildingLoadQueue_Array.?[1]; ++j ) /*0x725a28*/
        (*(void (__thiscall **)(_DWORD, AbstractClass *, int))(**(_DWORD **)(g_BuildingLoadQueue_Array.?[0] + 4 * j) + 40))( /*0x725a3a*/
          *(_DWORD *)(g_BuildingLoadQueue_Array.?[0] + 4 * j),
          a1,
          a2);
      return; /*0x725a45*/
  }
  if ( a1 && (a1->abstractFlags & 2) != 0 ) /*0x725938*/
  {
    if ( g_BuildingLoadQueue_Array.Foundation[0] > 0 ) /*0x725945*/
    {
      do /*0x72595f*/
      {
        (*(void (__thiscall **)(_DWORD, AbstractClass *, int))(**(_DWORD **)(g_BuildingLoadQueue_Array.PowerDrain /*0x725954*/
                                                                           + 4 * v5)
                                                             + 40))(
          *(_DWORD *)(g_BuildingLoadQueue_Array.PowerDrain + 4 * v5),
          a1,
          a2);
        ++v5; /*0x72595c*/
      }
      while ( v5 < g_BuildingLoadQueue_Array.Foundation[0] ); /*0x72595f*/
    }
    AbstractClass::processDetection((AbstractClass *)&stru_87F5D8, (int)a1); /*0x725967*/
    AbstractClass::processStateTransition((AbstractClass *)&g_MissionQueueFrame, (int)a1); /*0x725972*/
    for ( k = dword_8A0218 - 1; k >= 0; --k ) /*0x725981*/
      DiskLaserClass::PointerGotInvalid(*((DiskLaserClass **)dword_8A020C + k), (int)a1); /*0x72598d*/
    if ( v4 == 15 || v4 == 1 || v4 == 2 ) /*0x7259a2*/
      nullsub_3((int)a1); /*0x7259aa*/
    AbstractClass::processRadarEvent(a1); /*0x7259b1*/
    if ( g_TacticalClass_Instance ) /*0x7259be*/
      (*(void (__thiscall **)(LPPERSISTSTREAM, AbstractClass *, int))(*(_DWORD *)g_TacticalClass_Instance + 40))( /*0x7259c5*/
        g_TacticalClass_Instance,
        a1,
        1);
LABEL_20:
    Array::RemoveItemByValue((int)a1, a2); /*0x7259c8*/
    return; /*0x7259d9*/
  }
  if ( __RTDynamicCast( /*0x725a5a*/
         &a1->vtable0,
         0,
         &AbstractClass `RTTI Type Descriptor',
         &AbstractTypeClass `RTTI Type Descriptor',
         0) )
  {
    for ( m = 0; m < g_BuildingLoadQueue_Array.LightBlueTint; ++m ) /*0x725a6f*/
      (*(void (__thiscall **)(_DWORD, AbstractClass *, int))(**(_DWORD **)(g_BuildingLoadQueue_Array.LightIntensity /*0x725a7d*/
                                                                         + 4 * m)
                                                           + 40))(
        *(_DWORD *)(g_BuildingLoadQueue_Array.LightIntensity + 4 * m),
        a1,
        a2);
    InitInterfaceStubsCOM(*(ObjectClass **)&DSurface_ViewBounds.__pad_FC[324]); /*0x725a92*/
  }
  else
  {
    switch ( v4 ) /*0x725ab1*/
    {
      case 12: /*0x725ab1*/
        for ( n = 0; n < g_BuildingLoadQueue_Array.HalfDamageSmokeLocation1[1]; ++n ) /*0x725b34*/
          (*(void (__thiscall **)(_DWORD, AbstractClass *, int))(**(_DWORD **)(*(_DWORD *)&g_BuildingLoadQueue_Array.BuildupLoaded /*0x725b42*/
                                                                             + 4 * n)
                                                               + 40))(
            *(_DWORD *)(*(_DWORD *)&g_BuildingLoadQueue_Array.BuildupLoaded + 4 * n),
            a1,
            a2);
        MapClass::RemoveTriggerRef((MapClass *)&stru_87F5F0.__pad_58[416], (int)a1, 1); /*0x725b57*/
        break; /*0x725b61*/
      case 34: /*0x725ab1*/
        for ( ii = 0; ii < g_BuildingLoadQueue_Array.?[1]; ++ii ) /*0x725bc3*/
          (*(void (__thiscall **)(_DWORD, AbstractClass *, int))(**(_DWORD **)(g_BuildingLoadQueue_Array.?[0] + 4 * ii) /*0x725bd1*/
                                                               + 40))(
            *(_DWORD *)(g_BuildingLoadQueue_Array.?[0] + 4 * ii),
            a1,
            a2);
        break; /*0x725bdc*/
      case 38: /*0x725ab1*/
        for ( jj = 0; jj < g_BuildingLoadQueue_Array.unknown___2; ++jj ) /*0x725b05*/
          (*(void (__thiscall **)(_DWORD, AbstractClass *, int))(**(_DWORD **)(g_BuildingLoadQueue_Array.ExitCoord[1] /*0x725b18*/
                                                                             + 4 * jj)
                                                               + 40))(
            *(_DWORD *)(g_BuildingLoadQueue_Array.ExitCoord[1] + 4 * jj),
            a1,
            a2);
        break; /*0x725b23*/
      case 44: /*0x725ab1*/
        for ( kk = 0; kk < *(int *)&g_BuildingLoadQueue_Array.?[32]; ++kk ) /*0x725ac1*/
          (*(void (__thiscall **)(_DWORD, AbstractClass *, int))(**(_DWORD **)(*(_DWORD *)&g_BuildingLoadQueue_Array.?[20] /*0x725ad0*/
                                                                             + 4 * kk)
                                                               + 40))(
            *(_DWORD *)(*(_DWORD *)&g_BuildingLoadQueue_Array.?[20] + 4 * kk),
            a1,
            a2);
        MapClass::RemoveTriggerRef((MapClass *)&stru_87F5F0.__pad_58[416], (int)a1, 1); /*0x725ae5*/
        Array::RemoveItemByValue((int)a1, a2); /*0x725af1*/
        break; /*0x725afb*/
      case 47: /*0x725ab1*/
      case 48: /*0x725ab1*/
        for ( mm = 0; mm < g_BuildingLoadQueue_Array.GateCloseDelay[0]; ++mm ) /*0x725b6b*/
          (*(void (__thiscall **)(_DWORD, AbstractClass *, int))(**(_DWORD **)(g_BuildingLoadQueue_Array.HalfDamageSmokeLocation2[1] /*0x725b7d*/
                                                                             + 4 * mm)
                                                               + 40))(
            *(_DWORD *)(g_BuildingLoadQueue_Array.HalfDamageSmokeLocation2[1] + 4 * mm),
            a1,
            a2);
        break; /*0x725b88*/
      case 51: /*0x725ab1*/
        for ( nn = 0; nn < g_BuildingLoadQueue_Array.?[7]; ++nn ) /*0x725b99*/
          (*(void (__thiscall **)(_DWORD, AbstractClass *, int))(**(_DWORD **)(g_BuildingLoadQueue_Array.?[4] + 4 * nn) /*0x725ba7*/
                                                               + 40))(
            *(_DWORD *)(g_BuildingLoadQueue_Array.?[4] + 4 * nn),
            a1,
            a2);
        break; /*0x725bb2*/
      case 60: /*0x725ab1*/
        for ( i1 = 0; i1 < g_BuildingLoadQueue_Array.TargetCoordOffset[1]; ++i1 ) /*0x725bed*/
          (*(void (__thiscall **)(_DWORD, AbstractClass *, int))(**(_DWORD **)(g_BuildingLoadQueue_Array.Adjacent /*0x725bfb*/
                                                                             + 4 * i1)
                                                               + 40))(
            *(_DWORD *)(g_BuildingLoadQueue_Array.Adjacent + 4 * i1),
            a1,
            a2);
        break; /*0x725c06*/
      default:
        return;
    }
  }
}



// ==== 0x00725C70  ObjectClass::ProcessExpiredPointers  this=ObjectClass  sig=csp ====
int ProcessExpiredPointers(ObjectClass *this)
{
  int result; // eax
  int v2; // esi
  int v3; // eax
  int v4; // eax
  int v5; // eax
  int v6; // eax
  int v7; // eax
  _DWORD *v8; // [esp+8h] [ebp-4h] BYREF

  result = *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_E5C[12]; /*0x725c71*/
  v2 = 0; /*0x725c77*/
  while ( v2 < *(int *)&g_BuildingLoadQueue_Array.__pad_E5C[12] ) /*0x725c7b*/
  {
    v8 = *(_DWORD **)(*(_DWORD *)g_BuildingLoadQueue_Array.__pad_E5C + 4 * v2); /*0x725c89*/
    result = (*(int (**)(void))(*v8 + 68))(); /*0x725c8f*/
    if ( (_BYTE)result ) /*0x725c94*/
    {
      while ( 1 ) /*0x725caa*/
      {
        v3 = (*(int (__thiscall **)(int *, _DWORD **))(g_BuildingLoadQueue_Array.ToTile + 16))( /*0x725caa*/
               &g_BuildingLoadQueue_Array.ToTile,
               &v8);
        if ( v3 == -1 || v3 >= *(int *)&g_BuildingLoadQueue_Array.__pad_E5C[12] ) /*0x725cba*/
          break; /*0x725cba*/
        --*(_DWORD *)&g_BuildingLoadQueue_Array.__pad_E5C[12]; /*0x725cbf*/
        for ( ; /*0x725cc5*/
              v3 < *(int *)&g_BuildingLoadQueue_Array.__pad_E5C[12];
              *(_DWORD *)(*(_DWORD *)g_BuildingLoadQueue_Array.__pad_E5C + 4 * v3 - 4) = *(_DWORD *)(*(_DWORD *)g_BuildingLoadQueue_Array.__pad_E5C + 4 * v3) )
        {
          ++v3; /*0x725ccd*/
        }
      }
      result = (*(int (__stdcall **)(_DWORD *))(*v8 + 8))(v8); /*0x725ce8*/
      if ( result ) /*0x725ced*/
      {
        v4 = __RTtypeid(v8); /*0x725cf8*/
        if ( __8type_info_QBEHABV0__Z((const char *)&BuildingClass `RTTI Type Descriptor', v4) /*0x725d61*/
          || (v5 = __RTtypeid(v8), __8type_info_QBEHABV0__Z((const char *)&UnitClass `RTTI Type Descriptor', v5))
          || (v6 = __RTtypeid(v8), __8type_info_QBEHABV0__Z((const char *)&InfantryClass `RTTI Type Descriptor', v6))
          || (v7 = __RTtypeid(v8),
              (result = __8type_info_QBEHABV0__Z((const char *)&AircraftClass `RTTI Type Descriptor', v7)) != 0) )
        {
          result = (int)v8; /*0x725d63*/
          *((_BYTE *)v8 + 144) = 1; /*0x725d67*/
        }
        if ( v8 ) /*0x725d74*/
          result = (*(int (__thiscall **)(_DWORD *, int))(*v8 + 32))(v8, 1); /*0x725d7a*/
      }
    }
    else
    {
      ++v2; /*0x725d7f*/
    }
  }
  return result; /*0x725d8c*/
}



// ==== 0x00725D90  sub_725D90  this=-  sig=ida-proto ====
void sub_725D90()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x725d9c*/
  dbl_B0F778 = Math::Sqrt(v0 + v0); /*0x725dae*/
}



// ==== 0x00725DC0  sub_725DC0  this=-  sig=ida-proto ====
void sub_725DC0()
{
  dbl_B0F7C8 = dbl_B0F778 / 60.0; /*0x725dcc*/
}



// ==== 0x00725DE0  sub_725DE0  this=-  sig=ida-proto ====
void sub_725DE0()
{
  dbl_B0F7B0 = 1.0 / dbl_B0F7C8; /*0x725dec*/
}



// ==== 0x00725E00  sub_725E00  this=-  sig=ida-proto ====
void sub_725E00()
{
  dbl_B0F7A8 = 0.0174532925199433 * 45.0; /*0x725e0c*/
}



// ==== 0x00725E20  sub_725E20  this=-  sig=ida-proto ====
void sub_725E20()
{
  dbl_B0F780 = 0.0174532925199433 * 60.0; /*0x725e2c*/
}



// ==== 0x00725E40  sub_725E40  this=-  sig=ida-proto ====
void sub_725E40()
{
  dbl_B0F758 = 0.0174532925199433 * 90.0; /*0x725e4c*/
}



// ==== 0x00725E60  sub_725E60  this=-  sig=ida-proto ====
__int64 sub_725E60()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_B0F758 - dbl_B0F780); /*0x725e72*/
  result = Math::RoundToInt(v0 * dbl_B0F778 * 0.5); /*0x725e86*/
  dword_B0F7D0 = result; /*0x725e8b*/
  return result; /*0x725e90*/
}



// ==== 0x00725EA0  sub_725EA0  this=-  sig=ida-proto ====
void sub_725EA0()
{
  dbl_B0F788 = Math::ArcTan((double)dword_B0F7D0 * 0.00390625); /*0x725eb7*/
}



// ==== 0x00725ED0  sub_725ED0  this=-  sig=ida-proto ====
void sub_725ED0()
{
  dbl_B0F7A0 = Math::ArcTan((double)(2 * dword_B0F7D0) / dbl_B0F778); /*0x725ef2*/
}



// ==== 0x00725F00  sub_725F00  this=-  sig=ida-proto ====
__int64 sub_725F00()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_B0F7D0) + 0.5); /*0x725f1b*/
  dword_B0F7C4 = result; /*0x725f20*/
  return result; /*0x725f26*/
}



// ==== 0x00725F30  sub_725F30  this=-  sig=ida-proto ====
int sub_725F30()
{
  word_B0F770 = 0; /*0x725f32*/
  word_B0F772 = 0; /*0x725f38*/
  return 0; /*0x725f3e*/
}



// ==== 0x00725F40  sub_725F40  this=-  sig=ida-proto ====
int sub_725F40()
{
  dword_B0F790 = 0; /*0x725f42*/
  dword_B0F794 = 0; /*0x725f47*/
  dword_B0F798 = 0; /*0x725f4c*/
  return 0; /*0x725f51*/
}



// ==== 0x00725F60  sub_725F60  this=-  sig=ida-proto ====
int sub_725F60()
{
  dword_B0F7C0 = 0; /*0x725f65*/
  dword_B0F7B8 = 128; /*0x725f6f*/
  dword_B0F7BC = 128; /*0x725f74*/
  return 128; /*0x725f79*/
}



// ==== 0x00725F80  sub_725F80  this=-  sig=ida-proto ====
int sub_725F80()
{
  dword_B0F760 = 0; /*0x725f82*/
  dword_B0F764 = 0; /*0x725f87*/
  dword_B0F768 = 0; /*0x725f8c*/
  dword_B0F76C = 0; /*0x725f91*/
  return 0; /*0x725f96*/
}



// ==== 0x00725FA0  TriggerClass::Construct  this=TriggerClass  sig=csp ====
int __thiscall TriggerClass::Construct(int this, int a2)
{
  int v3; // ecx
  int v4; // eax
  int v5; // eax
  int v6; // eax
  _BYTE *v7; // eax
  void *vtable0; // ecx

  AbstractClass::Constructor((AbstractClass *)this); /*0x725fa4*/
  *(_DWORD *)(this + 36) = a2; /*0x725faf*/
  *(_DWORD *)(this + 40) = 0; /*0x725fb2*/
  *(_DWORD *)(this + 44) = 0; /*0x725fb5*/
  *(_BYTE *)(this + 48) = 0; /*0x725fb8*/
  v3 = *(_DWORD *)&stru_A8EB00.?[416]; /*0x725fbb*/
  *(_DWORD *)(this + 60) = 0; /*0x725fc1*/
  *(_DWORD *)(this + 52) = v3; /*0x725fc4*/
  *(_DWORD *)(this + 64) = 0; /*0x725fc7*/
  *(_BYTE *)(this + 68) = 1; /*0x725fca*/
  *(_DWORD *)this = &TriggerClass::`vftable'; /*0x725fce*/
  *(_DWORD *)(this + 4) = &TriggerClass::`vftable'; /*0x725fd4*/
  *(_DWORD *)(this + 8) = &TriggerClass::`vftable'; /*0x725fdb*/
  *(_DWORD *)(this + 12) = &TriggerClass::`vftable'; /*0x725fe2*/
  if ( g_BuildingLoadQueue_Array.LightBlueTint < g_BuildingLoadQueue_Array.LightRedTint /*0x72601b*/
    || (BYTE1(g_BuildingLoadQueue_Array.LightGreenTint) || !g_BuildingLoadQueue_Array.LightRedTint)
    && g_BuildingLoadQueue_Array.PrimaryFirePixelOffset[0] > 0
    && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(g_BuildingLoadQueue_Array.LightVisibility + 8))(
         &g_BuildingLoadQueue_Array.LightVisibility,
         g_BuildingLoadQueue_Array.LightRedTint + g_BuildingLoadQueue_Array.PrimaryFirePixelOffset[0],
         0) )
  {
    v4 = g_BuildingLoadQueue_Array.LightBlueTint++; /*0x726028*/
    *(_DWORD *)(g_BuildingLoadQueue_Array.LightIntensity + 4 * v4) = this; /*0x726037*/
  }
  if ( g_BuildingLoadQueue_Array.unknown___2 < g_BuildingLoadQueue_Array.ExitCoord[2] /*0x72606e*/
    || (BYTE1(g_BuildingLoadQueue_Array.FoundationOutside[0]) || !g_BuildingLoadQueue_Array.ExitCoord[2])
    && g_BuildingLoadQueue_Array.DeployFacing > 0
    && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(g_BuildingLoadQueue_Array.ExitCoord[0] + 8))(
         g_BuildingLoadQueue_Array.ExitCoord,
         g_BuildingLoadQueue_Array.ExitCoord[2] + g_BuildingLoadQueue_Array.DeployFacing,
         0) )
  {
    v5 = g_BuildingLoadQueue_Array.unknown___2++; /*0x72607b*/
    *(_DWORD *)(g_BuildingLoadQueue_Array.ExitCoord[1] + 4 * v5) = this; /*0x72608a*/
  }
  if ( dword_A8EAF8 < dword_A8EAF0 /*0x7260c1*/
    || (byte_A8EAF5 || !dword_A8EAF0)
    && dword_A8EAFC > 0
    && (*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(dword_A8EAE8 + 8))(
         &dword_A8EAE8,
         dword_A8EAF0 + dword_A8EAFC,
         0) )
  {
    v6 = dword_A8EAF8++; /*0x7260ce*/
    *((_DWORD *)dword_A8EAEC + v6) = this; /*0x7260dd*/
  }
  if ( *(_DWORD *)(this + 36) ) /*0x7260e0*/
  {
    if ( (BuildingClass::ProcessUpgradeEffects((BuildingClass *)this), v7 = *(_BYTE **)(this + 36), !v7[159]) /*0x726121*/
      || (vtable0 = dword_A8B230[43].vtable0) == 0 && !v7[156]
      || vtable0 == (void *)1 && !v7[157]
      || vtable0 == (void *)2 && !v7[158] )
    {
      *(_BYTE *)(this + 68) = 0; /*0x726129*/
    }
  }
  return this; /*0x72612e*/
}



// ==== 0x00726250  TriggerClass::HasCrossesHorizontalLineEvent  this=TriggerClass  sig=csp ====
bool __thiscall TriggerClass::HasCrossesHorizontalLineEvent(TriggerClass *this)
{
  TriggerClass *nextTrigger; // eax
  HouseClass *buildingType; // ecx

  nextTrigger = this->nextTrigger; /*0x726253*/
  buildingType = (HouseClass *)this->buildingType; /*0x726256*/
  if ( !nextTrigger ) /*0x72625b*/
    return HouseClass::HasType25Building(buildingType); /*0x72627d*/
  return (unsigned __int8)HouseClass::HasType25Building(buildingType) /*0x726274*/
      || TriggerClass::HasCrossesHorizontalLineEvent(this->nextTrigger);
}



// ==== 0x00726290  TriggerClass::HasCrossesVerticalLineEvent  this=TriggerClass  sig=csp ====
bool __thiscall TriggerClass::HasCrossesVerticalLineEvent(TriggerClass *this)
{
  TriggerClass *nextTrigger; // eax
  HouseClass *buildingType; // ecx

  nextTrigger = this->nextTrigger; /*0x726293*/
  buildingType = (HouseClass *)this->buildingType; /*0x726296*/
  if ( !nextTrigger ) /*0x72629b*/
    return HouseClass::HasType26Building(buildingType); /*0x7262bd*/
  return (unsigned __int8)HouseClass::HasType26Building(buildingType) /*0x7262b4*/
      || TriggerClass::HasCrossesVerticalLineEvent(this->nextTrigger);
}



// ==== 0x007263A0  TriggerClass::NotifyGlobalChanged  this=TriggerClass  sig=csp ====
void __thiscall TriggerClass::NotifyGlobalChanged(TriggerClass *this, int a2)
{
  TriggerClass *i; // esi

  for ( i = this; i; i = i->nextTrigger ) /*0x7263a5*/
  {
    if ( HouseClass::FindType2728((HouseClass *)i->buildingType, a2) ) /*0x7263b0*/
      BuildingClass::ProcessUpgradeEffects((BuildingClass *)i); /*0x7263bb*/
  }
}



// ==== 0x007263D0  TriggerClass::NotifyLocalChanged  this=TriggerClass  sig=csp ====
void __thiscall TriggerClass::NotifyLocalChanged(TriggerClass *this, int a2)
{
  TriggerClass *i; // esi

  for ( i = this; i; i = i->nextTrigger ) /*0x7263d5*/
  {
    if ( TriggerTypeClass::HasLocalSetOrClearedEvent(i->buildingType, a2) ) /*0x7263e0*/
      BuildingClass::ProcessUpgradeEffects((BuildingClass *)i); /*0x7263eb*/
  }
}



// ==== 0x00726400  BuildingClass::ProcessUpgradeEffects  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass::ProcessUpgradeEffects(BuildingClass *this)
{
  char v2; // bp
  int result; // eax
  _DWORD *i; // edi
  int v5; // eax
  int v6; // eax
  int v7; // kr00_4
  BombClass *v8; // [esp+10h] [ebp-8h]

  v2 = 0; /*0x726408*/
  result = this->?; /*0x72640a*/
  for ( i = *(_DWORD **)(result + 172); i; ++v2 ) /*0x726415*/
  {
    if ( i[11] == 13 ) /*0x726420*/
    {
      v5 = 3 * i[13]; /*0x72642e*/
      this->? = *(TagClass **)&stru_A8EB00.?[416]; /*0x726431*/
      this->? = v8; /*0x72643a*/
      this->?[0] = 5 * v5; /*0x72643f*/
      result = ~(1 << v2) & this->?[1]; /*0x72644e*/
      this->?[1] = result; /*0x726450*/
    }
    if ( i[11] == 51 ) /*0x726457*/
    {
      v6 = Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, i[13]); /*0x72646a*/
      v7 = i[13]; /*0x72647b*/
      this->? = *(TagClass **)&stru_A8EB00.?[416]; /*0x726488*/
      this->? = v8; /*0x72648e*/
      this->?[0] = 15 * (v6 + v7 / 2); /*0x726494*/
      result = ~(1 << v2); /*0x7264a3*/
      this->?[1] &= result; /*0x7264a7*/
    }
    i = (_DWORD *)i[10]; /*0x7264aa*/
  }
  return result; /*0x7264b7*/
}



// ==== 0x007264C0  TriggerClass::RegisterEvent  this=ScriptClass  sig=csp ====
char __thiscall TriggerClass::RegisterEvent(int this, int a2, int a3, char a4, char a5, int a6)
{
  char v7; // bl
  TriggerClass *v8; // edi
  int Owner; // eax
  int v11; // [esp-10h] [ebp-18h]
  char v12; // [esp+7h] [ebp-1h]

  if ( !*(_BYTE *)(this + 68) || *(_BYTE *)(this + 48) ) /*0x7264cf*/
    return 0; /*0x7265b4*/
  v12 = 1; /*0x7264e2*/
  if ( a4 ) /*0x7264e7*/
    goto LABEL_16; /*0x7264e7*/
  v7 = 0; /*0x7264f0*/
  v8 = *(TriggerClass **)(*(_DWORD *)(this + 36) + 172); /*0x7264f2*/
  if ( !v8 ) /*0x7264fa*/
    goto LABEL_16; /*0x7264fa*/
  do /*0x72658b*/
  {
    if ( (*(_DWORD *)(this + 64) & (1 << v7)) != 0 /*0x726540*/
      || (v11 = a6,
          Owner = HouseClass::FindOwner(*(HouseClass **)(*(_DWORD *)(*(_DWORD *)(this + 36) + 164) + 180)),
          TEventClass::Execute((TEventClass *)v8, a2, Owner, a3, (int *)(this + 52), (int)&a5, v11)) )
    {
      if ( TriggerClass::GetValue(v8) ) /*0x726551*/
        *(_DWORD *)(this + 44) = TriggerClass::GetValue(v8); /*0x726561*/
      if ( a5 && TEventClass::GetStateA((TEventClass *)v8) && TEventClass::GetStateB_SpyEvent((TEventClass *)v8) ) /*0x726579*/
        *(_DWORD *)(this + 64) |= 1 << v7; /*0x726582*/
    }
    else
    {
      v12 = 0; /*0x726549*/
    }
    v8 = v8->nextTrigger; /*0x726585*/
    ++v7; /*0x726588*/
  }
  while ( v8 ); /*0x72658b*/
  if ( v12 ) /*0x726598*/
  {
LABEL_16:
    if ( a5 ) /*0x7265a0*/
      BuildingClass::ProcessUpgradeEffects((BuildingClass *)this); /*0x7265a4*/
  }
  return v12; /*0x7265af*/
}



// ==== 0x007265C0  BuildingClass::ExecuteTriggers  this=ScriptClass  sig=csp ====
int __thiscall BuildingClass::ExecuteTriggers(int this, int a2, char a3)
{
  int result; // eax
  char v5; // bl
  int i; // esi
  int Owner; // eax

  if ( !*(_BYTE *)(this + 68) || *(_BYTE *)(this + 48) ) /*0x7265ca*/
  {
    LOBYTE(result) = 0; /*0x726620*/
  }
  else
  {
    result = *(_DWORD *)(this + 36); /*0x7265d1*/
    v5 = 0; /*0x7265d6*/
    for ( i = *(_DWORD *)(result + 176); i; i = *(_DWORD *)(i + 40) ) /*0x7265e0*/
    {
      Owner = HouseClass::FindOwner(*(void **)(*(_DWORD *)(*(_DWORD *)(this + 36) + 164) + 180)); /*0x7265fd*/
      if ( TerrainClass::ProcessUpdate(i, this, Owner, a2, (_DWORD *)this, (int)&a3) ) /*0x726605*/
        v5 = 1; /*0x72660e*/
    }
    LOBYTE(result) = v5; /*0x726618*/
  }
  return result; /*0x72661c*/
}



// ==== 0x00726630  TriggerClass::Create  this=TriggerClass  sig=csp ====
int __thiscall TriggerClass::Create(TriggerClass *this)
{
  int v2; // eax
  char *v3; // ecx
  int v4; // eax

  if ( !this ) /*0x726637*/
    return 0; /*0x72667f*/
  v2 = 0; /*0x72663f*/
  if ( dword_A8EAF8 <= 0 ) /*0x726643*/
  {
LABEL_6:
    v4 = __2_YAPAXI_Z(0x48u); /*0x72665c*/
    if ( v4 ) /*0x726668*/
      return TriggerClass::Construct(v4, (int)this); /*0x726675*/
    return 0; /*0x726668*/
  }
  v3 = (char *)dword_A8EAEC; /*0x72664b*/
  while ( this != *(TriggerClass **)(*(_DWORD *)v3 + 36) ) /*0x726652*/
  {
    ++v2; /*0x726654*/
    v3 += 4; /*0x726655*/
    if ( v2 >= dword_A8EAF8 ) /*0x72665a*/
      goto LABEL_6; /*0x72665a*/
  }
  return *((_DWORD *)dword_A8EAEC + v2); /*0x726672*/
}



// ==== 0x00726690  TriggerClass::FireAction  this=TriggerClass  sig=csp ====
int __thiscall TriggerClass::FireAction(TriggerClass *this, int a2, int a3)
{
  int result; // eax

  if ( this->buildingType == (TriggerTypeClass *)a2 ) /*0x726699*/
    this->buildingType = 0; /*0x72669b*/
  result = (int)this->nextTrigger; /*0x7266a2*/
  if ( result == a2 ) /*0x7266a7*/
  {
    result = *(_DWORD *)(result + 40); /*0x7266a9*/
    this->nextTrigger = (TriggerClass *)result; /*0x7266ac*/
  }
  if ( this->house == (HouseClass *)a2 ) /*0x7266b2*/
    this->house = 0; /*0x7266b4*/
  return result; /*0x7266bb*/
}



// ==== 0x007266C0  ObjectClass::method_7266C0  this=ObjectClass  sig=csp ====
_DWORD *__thiscall sub_7266C0(ObjectClass *this, char a2)
{
  this->ambientSoundController[1] |= 1 << a2; /*0x7266cd*/
  return &this->AbstractClass; /*0x7266d0*/
}



// ==== 0x00726720  TeamClass::AddToBuildQueue  this=TeamClass  sig=csp ====
int __thiscall TeamClass::AddToBuildQueue(TeamClass *this)
{
  int result; // eax

  LOBYTE(this->target) = 1; /*0x726723*/
  result = *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_E5C[4]; /*0x726727*/
  if ( *(int *)&g_BuildingLoadQueue_Array.__pad_E5C[12] < *(int *)&g_BuildingLoadQueue_Array.__pad_E5C[4] /*0x726760*/
    || (g_BuildingLoadQueue_Array.__pad_E5C[9] || !*(_DWORD *)&g_BuildingLoadQueue_Array.__pad_E5C[4])
    && g_BuildingLoadQueue_Array.UnitExitSound > 0
    && (result = (*(int (__thiscall **)(int *, int, _DWORD))(g_BuildingLoadQueue_Array.ToTile + 8))(
                   &g_BuildingLoadQueue_Array.ToTile,
                   *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_E5C[4] + g_BuildingLoadQueue_Array.UnitExitSound,
                   0),
        (_BYTE)result) )
  {
    result = (*(_DWORD *)&g_BuildingLoadQueue_Array.__pad_E5C[12])++; /*0x726768*/
    *(_DWORD *)(*(_DWORD *)g_BuildingLoadQueue_Array.__pad_E5C + 4 * result) = this; /*0x726777*/
  }
  return result; /*0x72677a*/
}



// ==== 0x00726780  ObjectClass::method  this=ObjectClass  sig=csp ====
char __thiscall sub_726780(ObjectClass *this)
{
  return (char)this->nextObject; /*0x726783*/
}



// ==== 0x00726790  TriggerClass::FireTrigger  this=TriggerClass  sig=csp ====
int __thiscall TriggerClass::FireTrigger(TriggerClass *this, int *a2)
{
  int v3; // eax
  TriggerClass *nextTrigger; // eax
  int v5; // eax
  int v6; // ecx
  int v7; // edx
  int v8; // eax

  AbstractClass::ProcessPower((AbstractClass *)this); /*0x726799*/
  v3 = (*((int (__stdcall **)(void **))this->buildingType->? + 4))(&this->buildingType->?); /*0x7267a7*/
  Power::TimerProcess(v3); /*0x7267ad*/
  nextTrigger = this->nextTrigger; /*0x7267b2*/
  if ( nextTrigger ) /*0x7267b7*/
  {
    v5 = (*((int (__stdcall **)(void **))nextTrigger->? + 4))(&nextTrigger->?); /*0x7267c0*/
    nextTrigger = (TriggerClass *)Power::TimerProcess(v5); /*0x7267c6*/
  }
  LOBYTE(nextTrigger) = this->destroyed; /*0x7267cb*/
  Power::FlagProcess((Power *)a2, (int)nextTrigger); /*0x7267d1*/
  LOBYTE(v6) = this->enabled; /*0x7267d6*/
  Power::FlagProcess((Power *)a2, v6); /*0x7267dc*/
  v7 = this->timer[0]; /*0x7267e1*/
  v8 = this->timer[2]; /*0x7267e4*/
  if ( v7 != -1 ) /*0x7267ea*/
  {
    if ( *(_DWORD *)&stru_A8EB00.?[416] - v7 >= v8 ) /*0x7267f6*/
      v8 = 0; /*0x7267fc*/
    else
      v8 -= *(_DWORD *)&stru_A8EB00.?[416] - v7; /*0x7267f8*/
  }
  Power::TimerProcess(v8); /*0x726801*/
  return Power::TimerProcess(this->occuredEvents); /*0x726811*/
}



// ==== 0x00726820  TriggerClass::ddtor  this=TriggerClass  sig=csp ====
int __stdcall TriggerClass::ddtor(TriggerClass *this, _DWORD *a2)
{
  if ( !a2 ) /*0x726826*/
    return -2147467261; /*0x726828*/
  *a2 = -1070787184; /*0x726836*/
  a2[1] = 298977834; /*0x72683e*/
  a2[2] = 1610655660; /*0x726847*/
  a2[3] = unk_7E97EC; /*0x726850*/
  return 0; /*0x72682d*/
}



// ==== 0x00726860  TriggerClass::LoadTrigger  this=TriggerClass  sig=csp ====
int __stdcall TriggerClass::LoadTrigger(TriggerClass *this, int a2)
{
  int result; // eax

  result = AbstractClass::SaveLoad_Prefix_0(this, a2); /*0x72686b*/
  if ( result >= 0 ) /*0x726872*/
  {
    if ( this ) /*0x726876*/
    {
      AbstractClass::InitVtables((AbstractClass *)this, (int)&a2); /*0x72687f*/
      this->AbstractClass = &TriggerClass::`vftable'; /*0x726884*/
      this->? = &TriggerClass::`vftable'; /*0x72688a*/
      this->? = &TriggerClass::`vftable'; /*0x726891*/
      this->? = &TriggerClass::`vftable'; /*0x726898*/
    }
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)&this->buildingType); /*0x7268a8*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)&this->nextTrigger); /*0x7268b6*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)&this->house); /*0x7268c4*/
    return 0; /*0x7268c9*/
  }
  return result; /*0x7268cb*/
}



// ==== 0x007268D0  TriggerClass::SaveTrigger  this=TriggerClass  sig=csp ====
int __stdcall TriggerClass::SaveTrigger(TriggerClass *this, int *a2, int a3)
{
  int result; // eax

  result = AbstractClass::SaveLoad_Prefix((int *)this, a2, a3); /*0x7268df*/
  if ( result >= 0 ) /*0x7268e6*/
    return 0; /*0x7268e8*/
  return result; /*0x7268ea*/
}



// ==== 0x007268F0  TActionClass::executeAirstrikeAction  this=TActionClass  sig=csp ====
int __thiscall TActionClass::executeAirstrikeAction(TActionClass *this)
{
  LOBYTE(this->TActionClass_field_44) = 1; /*0x7268f0*/
  return BuildingClass::ProcessUpgradeEffects((BuildingClass *)this);
}



// ==== 0x00726900  TActionClass::executeDetonateAction  this=TActionClass  sig=csp ====
void __thiscall TActionClass::executeDetonateAction(TActionClass *this)
{
  LOBYTE(this->TActionClass_field_44) = 0; /*0x726900*/
}



// ==== 0x00726910  Property::GetField11  this=Property  sig=csp ====
int __thiscall Property::GetField11(Property *this)
{
  return *((_DWORD *)this + 11); /*0x726913*/
}



// ==== 0x00726920  ObjectClass::method  this=ObjectClass  sig=csp ====
int __thiscall sub_726920(_DWORD *this, int a2)
{
  this->fallRate = a2; /*0x726924*/
  return a2; /*0x726927*/
}



// ==== 0x00726930  TriggerClass::StubReturn72  this=TriggerClass  sig=csp ====
int TriggerClass::StubReturn72(TriggerClass *this)
{
  return 72; /*0x726935*/
}



// ==== 0x00726940  TriggerClass::StubReturn38  this=TriggerClass  sig=csp ====
int TriggerClass::StubReturn38(TriggerClass *this)
{
  return 38; /*0x726945*/
}



// ==== 0x00726950  TriggerClass::CheckCondition  this=TriggerClass  sig=csp ====
void **__thiscall TriggerClass::CheckCondition(TriggerClass *this, char a2)
{
  int v3; // eax
  int v4; // eax
  int v5; // eax
  TriggerClass *v7; // [esp+8h] [ebp-4h] BYREF

  this->AbstractClass = &TriggerClass::`vftable'; /*0x726956*/
  this->? = &TriggerClass::`vftable'; /*0x72695c*/
  this->? = &TriggerClass::`vftable'; /*0x726963*/
  this->? = &TriggerClass::`vftable'; /*0x72696a*/
  AbstractClass::AnnounceExpiredPointer((AbstractClass *)this, 1); /*0x726971*/
  v7 = this; /*0x726986*/
  v3 = (*(int (__thiscall **)(_DWORD *, TriggerClass **))(dword_A8EAE8 + 16))(&dword_A8EAE8, &v7); /*0x72698a*/
  if ( v3 != -1 && v3 < dword_A8EAF8 && v3 < --dword_A8EAF8 ) /*0x7269a5*/
  {
    do /*0x7269bd*/
    {
      ++v3; /*0x7269ad*/
      *((_DWORD *)dword_A8EAEC + v3 - 1) = *((_DWORD *)dword_A8EAEC + v3); /*0x7269b1*/
    }
    while ( v3 < dword_A8EAF8 ); /*0x7269bd*/
  }
  v7 = this; /*0x7269cf*/
  v4 = (*(int (__thiscall **)(int *, TriggerClass **))(g_BuildingLoadQueue_Array.LightVisibility + 16))( /*0x7269d3*/
         &g_BuildingLoadQueue_Array.LightVisibility,
         &v7);
  if ( v4 != -1 && v4 < g_BuildingLoadQueue_Array.LightBlueTint ) /*0x7269e3*/
  {
    --g_BuildingLoadQueue_Array.LightBlueTint; /*0x7269e8*/
    for ( ; /*0x7269ee*/
          v4 < g_BuildingLoadQueue_Array.LightBlueTint;
          *(_DWORD *)(g_BuildingLoadQueue_Array.LightIntensity + 4 * v4 - 4) = *(_DWORD *)(g_BuildingLoadQueue_Array.LightIntensity
                                                                                         + 4 * v4) )
    {
      ++v4; /*0x7269f6*/
    }
  }
  v7 = this; /*0x726a18*/
  v5 = (*(int (__thiscall **)(int *, TriggerClass **))(g_BuildingLoadQueue_Array.ExitCoord[0] + 16))( /*0x726a1c*/
         g_BuildingLoadQueue_Array.ExitCoord,
         &v7);
  if ( v5 != -1 && v5 < g_BuildingLoadQueue_Array.unknown___2 ) /*0x726a2c*/
  {
    --g_BuildingLoadQueue_Array.unknown___2; /*0x726a31*/
    for ( ; /*0x726a37*/
          v5 < g_BuildingLoadQueue_Array.unknown___2;
          *(_DWORD *)(g_BuildingLoadQueue_Array.ExitCoord[1] + 4 * v5 - 4) = *(_DWORD *)(g_BuildingLoadQueue_Array.ExitCoord[1]
                                                                                       + 4 * v5) )
    {
      ++v5; /*0x726a3f*/
    }
  }
  AbstractClass::DTOR((AbstractClass *)this); /*0x726a53*/
  if ( (a2 & 1) != 0 ) /*0x726a5d*/
    __3_YAXPAX_Z(this); /*0x726a60*/
  return &this->AbstractClass; /*0x726a6a*/
}



// ==== 0x00726A70  sub_726A70  this=-  sig=ida-proto ====
void sub_726A70()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x726a7c*/
  dbl_B0F7F8 = Math::Sqrt(v0 + v0); /*0x726a8e*/
}



// ==== 0x00726AA0  sub_726AA0  this=-  sig=ida-proto ====
void sub_726AA0()
{
  dbl_B0F848 = dbl_B0F7F8 / 60.0; /*0x726aac*/
}



// ==== 0x00726AC0  sub_726AC0  this=-  sig=ida-proto ====
void sub_726AC0()
{
  dbl_B0F830 = 1.0 / dbl_B0F848; /*0x726acc*/
}



// ==== 0x00726AE0  sub_726AE0  this=-  sig=ida-proto ====
void sub_726AE0()
{
  dbl_B0F828 = 0.0174532925199433 * 45.0; /*0x726aec*/
}



// ==== 0x00726B00  sub_726B00  this=-  sig=ida-proto ====
void sub_726B00()
{
  dbl_B0F800 = 0.0174532925199433 * 60.0; /*0x726b0c*/
}



// ==== 0x00726B20  sub_726B20  this=-  sig=ida-proto ====
void sub_726B20()
{
  dbl_B0F7D8 = 0.0174532925199433 * 90.0; /*0x726b2c*/
}



// ==== 0x00726B40  sub_726B40  this=-  sig=ida-proto ====
__int64 sub_726B40()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_B0F7D8 - dbl_B0F800); /*0x726b52*/
  result = Math::RoundToInt(v0 * dbl_B0F7F8 * 0.5); /*0x726b66*/
  dword_B0F850 = result; /*0x726b6b*/
  return result; /*0x726b70*/
}



// ==== 0x00726B80  sub_726B80  this=-  sig=ida-proto ====
void sub_726B80()
{
  dbl_B0F808 = Math::ArcTan((double)dword_B0F850 * 0.00390625); /*0x726b97*/
}



// ==== 0x00726BB0  sub_726BB0  this=-  sig=ida-proto ====
void sub_726BB0()
{
  dbl_B0F820 = Math::ArcTan((double)(2 * dword_B0F850) / dbl_B0F7F8); /*0x726bd2*/
}



// ==== 0x00726BE0  sub_726BE0  this=-  sig=ida-proto ====
__int64 sub_726BE0()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_B0F850) + 0.5); /*0x726bfb*/
  dword_B0F844 = result; /*0x726c00*/
  return result; /*0x726c06*/
}



// ==== 0x00726C10  sub_726C10  this=-  sig=ida-proto ====
int sub_726C10()
{
  word_B0F7F0 = 0; /*0x726c12*/
  word_B0F7F2 = 0; /*0x726c18*/
  return 0; /*0x726c1e*/
}



// ==== 0x00726C20  sub_726C20  this=-  sig=ida-proto ====
int sub_726C20()
{
  dword_B0F810 = 0; /*0x726c22*/
  dword_B0F814 = 0; /*0x726c27*/
  dword_B0F818 = 0; /*0x726c2c*/
  return 0; /*0x726c31*/
}



// ==== 0x00726C40  sub_726C40  this=-  sig=ida-proto ====
int sub_726C40()
{
  dword_B0F840 = 0; /*0x726c45*/
  dword_B0F838 = 128; /*0x726c4f*/
  dword_B0F83C = 128; /*0x726c54*/
  return 128; /*0x726c59*/
}



// ==== 0x00726C60  sub_726C60  this=-  sig=ida-proto ====
int sub_726C60()
{
  dword_B0F7E0 = 0; /*0x726c62*/
  dword_B0F7E4 = 0; /*0x726c67*/
  dword_B0F7E8 = 0; /*0x726c6c*/
  dword_B0F7EC = 0; /*0x726c71*/
  return 0; /*0x726c76*/
}



// ==== 0x00726C80  TriggerTypeClass::Construct  this=TriggerTypeClass  sig=csp ====
_DWORD *__thiscall TriggerTypeClass::Construct(TriggerTypeClass *this, char *Source)
{
  int v3; // eax
  int v4; // eax
  int v5; // eax

  AbstractTypeClass::Constructor((int *)this, Source); /*0x726c89*/
  this->ArrayIndex = -1; /*0x726c92*/
  this->Difficulty[0] = 1; /*0x726c9c*/
  this->Difficulty[1] = 1; /*0x726ca2*/
  this->Difficulty[2] = 1; /*0x726ca8*/
  this->Enabled = 1; /*0x726cae*/
  this->MustTransfer = 0; /*0x726cb4*/
  this->House = 0; /*0x726cba*/
  this->NextTrigger = 0; /*0x726cc0*/
  this->FirstEvent = 0; /*0x726cc6*/
  this->FirstAction = 0; /*0x726ccc*/
  this->AbstractClass = &TriggerTypeClass::`vftable'; /*0x726cd2*/
  this->? = &TriggerTypeClass::`vftable'; /*0x726cd8*/
  this->? = &TriggerTypeClass::`vftable'; /*0x726cdf*/
  this->? = &TriggerTypeClass::`vftable'; /*0x726ce6*/
  if ( g_BuildingLoadQueue_Array.GateCloseDelay[0] < g_BuildingLoadQueue_Array.HalfDamageSmokeLocation2[2] /*0x726d21*/
    || (BYTE1(g_BuildingLoadQueue_Array.align_E24[0]) || !g_BuildingLoadQueue_Array.HalfDamageSmokeLocation2[2])
    && g_BuildingLoadQueue_Array.GateCloseDelay[1] > 0
    && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(g_BuildingLoadQueue_Array.HalfDamageSmokeLocation2[0] + 8))(
         g_BuildingLoadQueue_Array.HalfDamageSmokeLocation2,
         g_BuildingLoadQueue_Array.HalfDamageSmokeLocation2[2] + g_BuildingLoadQueue_Array.GateCloseDelay[1],
         0) )
  {
    v3 = g_BuildingLoadQueue_Array.GateCloseDelay[0]++; /*0x726d2e*/
    *(_DWORD *)(g_BuildingLoadQueue_Array.HalfDamageSmokeLocation2[1] + 4 * v3) = this; /*0x726d3d*/
  }
  if ( g_BuildingLoadQueue_Array.LightBlueTint < g_BuildingLoadQueue_Array.LightRedTint /*0x726d74*/
    || (BYTE1(g_BuildingLoadQueue_Array.LightGreenTint) || !g_BuildingLoadQueue_Array.LightRedTint)
    && g_BuildingLoadQueue_Array.PrimaryFirePixelOffset[0] > 0
    && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(g_BuildingLoadQueue_Array.LightVisibility + 8))(
         &g_BuildingLoadQueue_Array.LightVisibility,
         g_BuildingLoadQueue_Array.LightRedTint + g_BuildingLoadQueue_Array.PrimaryFirePixelOffset[0],
         0) )
  {
    v4 = g_BuildingLoadQueue_Array.LightBlueTint++; /*0x726d81*/
    *(_DWORD *)(g_BuildingLoadQueue_Array.LightIntensity + 4 * v4) = this; /*0x726d90*/
  }
  this->ArrayIndex = *(_DWORD *)FootClass_Array.?; /*0x726d99*/
  if ( *(int *)FootClass_Array.? < FootClass_Array.?[1] /*0x726dd0*/
    || (BYTE1(FootClass_Array.?[2]) || !FootClass_Array.?[1])
    && *(int *)&FootClass_Array.? > 0
    && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(FootClass_Array.? + 8))(
         &FootClass_Array.?,
         FootClass_Array.?[1] + *(_DWORD *)&FootClass_Array.?,
         0) )
  {
    v5 = (*(_DWORD *)FootClass_Array.?)++; /*0x726ddd*/
    *(_DWORD *)(FootClass_Array.?[0] + 4 * v5) = this; /*0x726dec*/
  }
  return &this->AbstractClass; /*0x726df1*/
}



// ==== 0x00726E00  TriggerTypeClass::ProcessEvents  this=TriggerTypeClass  sig=csp ====
int __thiscall TriggerClass::ProcessEvents(AbstractClass *this)
{
  int v2; // eax
  _DWORD *v3; // ecx
  _DWORD *v4; // esi
  _DWORD *v5; // ecx
  _DWORD *v6; // esi
  int v7; // eax
  int v8; // eax
  AbstractClass *v10; // [esp+10h] [ebp-4h] BYREF

  this->vtable0 = &TriggerTypeClass::`vftable'; /*0x726e06*/
  this->vtable1 = &TriggerTypeClass::`vftable'; /*0x726e0c*/
  this->vtable2 = &TriggerTypeClass::`vftable'; /*0x726e13*/
  this->vtable3 = &TriggerTypeClass::`vftable'; /*0x726e1a*/
  AbstractClass::AnnounceExpiredPointer(this, 1); /*0x726e21*/
  v10 = this; /*0x726e36*/
  v2 = (*(int (__thiscall **)(int *, AbstractClass **))(FootClass_Array.? + 16))(&FootClass_Array.?, &v10); /*0x726e3a*/
  if ( v2 != -1 && v2 < *(int *)FootClass_Array.? ) /*0x726e4a*/
  {
    --*(_DWORD *)FootClass_Array.?; /*0x726e4f*/
    for ( ; /*0x726e55*/
          v2 < *(int *)FootClass_Array.?;
          *(_DWORD *)(FootClass_Array.?[0] + 4 * v2 - 4) = *(_DWORD *)(FootClass_Array.?[0] + 4 * v2) )
    {
      ++v2; /*0x726e5d*/
    }
  }
  v3 = (_DWORD *)this->mustTransfer; /*0x726e6f*/
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
  v5 = (_DWORD *)this->enabled; /*0x726e8e*/
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
  v7 = (*(int (__thiscall **)(int *, AbstractClass **))(g_BuildingLoadQueue_Array.LightVisibility + 16))( /*0x726ec0*/
         &g_BuildingLoadQueue_Array.LightVisibility,
         &v10);
  if ( v7 != -1 && v7 < g_BuildingLoadQueue_Array.LightBlueTint ) /*0x726ed1*/
  {
    --g_BuildingLoadQueue_Array.LightBlueTint; /*0x726ed6*/
    for ( ; /*0x726edc*/
          v7 < g_BuildingLoadQueue_Array.LightBlueTint;
          *(_DWORD *)(g_BuildingLoadQueue_Array.LightIntensity + 4 * v7 - 4) = *(_DWORD *)(g_BuildingLoadQueue_Array.LightIntensity
                                                                                         + 4 * v7) )
    {
      ++v7; /*0x726ee4*/
    }
  }
  v10 = this; /*0x726f06*/
  v8 = (*(int (__thiscall **)(int *, AbstractClass **))(g_BuildingLoadQueue_Array.HalfDamageSmokeLocation2[0] + 16))( /*0x726f0a*/
         g_BuildingLoadQueue_Array.HalfDamageSmokeLocation2,
         &v10);
  if ( v8 != -1 && v8 < g_BuildingLoadQueue_Array.GateCloseDelay[0] ) /*0x726f1a*/
  {
    --g_BuildingLoadQueue_Array.GateCloseDelay[0]; /*0x726f1f*/
    for ( ; /*0x726f25*/
          v8 < g_BuildingLoadQueue_Array.GateCloseDelay[0];
          *(_DWORD *)(g_BuildingLoadQueue_Array.HalfDamageSmokeLocation2[1] + 4 * v8 - 4) = *(_DWORD *)(g_BuildingLoadQueue_Array.HalfDamageSmokeLocation2[1] + 4 * v8) )
    {
      ++v8; /*0x726f2d*/
    }
  }
  return AbstractTypeClass::Dtor((AbstractTypeClass *)this); /*0x726f46*/
}



// ==== 0x00726F50  HouseClass::HasType26Building  this=HouseClass  sig=csp ====
int __thiscall HouseClass::HasType26Building(HouseClass *this)
{
  int psychicDetectionCapacity; // ecx
  int result; // eax

  psychicDetectionCapacity = this->psychicDetectionCapacity; /*0x726f50*/
  LOBYTE(result) = 0; /*0x726f56*/
  if ( psychicDetectionCapacity ) /*0x726f5a*/
  {
    while ( *(_DWORD *)(psychicDetectionCapacity + 44) != 26 ) /*0x726f64*/
    {
      psychicDetectionCapacity = *(_DWORD *)(psychicDetectionCapacity + 40); /*0x726f66*/
      if ( !psychicDetectionCapacity ) /*0x726f6b*/
        return result; /*0x726f6b*/
    }
    LOBYTE(result) = 1; /*0x726f6e*/
  }
  return result; /*0x726f6d*/
}



// ==== 0x00726F80  HouseClass::HasType25Building  this=HouseClass  sig=csp ====
int __thiscall HouseClass::HasType25Building(HouseClass *this)
{
  int psychicDetectionCapacity; // ecx
  int result; // eax

  psychicDetectionCapacity = this->psychicDetectionCapacity; /*0x726f80*/
  LOBYTE(result) = 0; /*0x726f86*/
  if ( psychicDetectionCapacity ) /*0x726f8a*/
  {
    while ( *(_DWORD *)(psychicDetectionCapacity + 44) != 25 ) /*0x726f94*/
    {
      psychicDetectionCapacity = *(_DWORD *)(psychicDetectionCapacity + 40); /*0x726f96*/
      if ( !psychicDetectionCapacity ) /*0x726f9b*/
        return result; /*0x726f9b*/
    }
    LOBYTE(result) = 1; /*0x726f9e*/
  }
  return result; /*0x726f9d*/
}



// ==== 0x00726FB0  HouseClass::FindType24  this=HouseClass  sig=csp ====
bool __thiscall HouseClass::FindType24(HouseClass *this)
{
  std::codecvt_base *psychicDetectionCapacity; // ecx
  bool result; // al

  psychicDetectionCapacity = (std::codecvt_base *)this->psychicDetectionCapacity; /*0x726fb0*/
  result = 0; /*0x726fb6*/
  if ( !psychicDetectionCapacity ) /*0x726fba*/
    JUMPOUT(0x726FD0); /*0x726fd0*/
  while ( *((_DWORD *)psychicDetectionCapacity + 11) != 24 ) /*0x726fc4*/
  {
    psychicDetectionCapacity = (std::codecvt_base *)*((_DWORD *)psychicDetectionCapacity + 10); /*0x726fc6*/
    if ( !psychicDetectionCapacity ) /*0x726fcb*/
      return result; /*0x726fcb*/
  }
  return _do_always_noconv_codecvt_base_std__MBE_NXZ_20(psychicDetectionCapacity); /*0x726fcd*/
}



// ==== 0x00726FCE  ObjectClass::?do_always_noconv_codecvt_base_std__MBE_NXZ_20  this=ObjectClass  sig=csp ====
char __thiscall _do_always_noconv_codecvt_base_std__MBE_NXZ_20(std::codecvt_base *this)
{
  return 1; /*0x726fd0*/
}



// ==== 0x00726FE0  HouseClass::FindType15  this=HouseClass  sig=csp ====
char __thiscall HouseClass::FindType15(HouseClass *this)
{
  int v1; // ecx
  char result; // al

  v1 = this->productionFactory_plants[0]; /*0x726fe0*/
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



// ==== 0x00727010  HouseClass::FindType2728  this=TOP  sig=csp ====
char __thiscall HouseClass::FindType2728(HouseClass *this, int a2)
{
  _DWORD *psychicDetectionCapacity; // ecx
  char result; // al
  int v4; // edx

  psychicDetectionCapacity = (_DWORD *)this->psychicDetectionCapacity; /*0x727010*/
  result = 0; /*0x727016*/
  if ( psychicDetectionCapacity ) /*0x72701b*/
  {
    while ( 1 ) /*0x727021*/
    {
      v4 = psychicDetectionCapacity[11]; /*0x727021*/
      if ( (v4 == 27 || v4 == 28) && psychicDetectionCapacity[13] == a2 ) /*0x727031*/
        break; /*0x727031*/
      psychicDetectionCapacity = (_DWORD *)psychicDetectionCapacity[10]; /*0x727033*/
      if ( !psychicDetectionCapacity ) /*0x727038*/
        return result; /*0x727038*/
    }
    return 1; /*0x72703e*/
  }
  return result; /*0x72703a*/
}



// ==== 0x00727050  TriggerTypeClass::HasLocalSetOrClearedEvent  this=TriggerTypeClass  sig=csp ====
bool __thiscall TriggerTypeClass::HasLocalSetOrClearedEvent(TriggerTypeClass *this, int a2)
{
  TEventClass *FirstEvent; // ecx
  bool result; // al
  int TEventClass_field_2C; // edx

  FirstEvent = this->FirstEvent; /*0x727050*/
  result = 0; /*0x727056*/
  if ( FirstEvent ) /*0x72705b*/
  {
    while ( 1 ) /*0x727061*/
    {
      TEventClass_field_2C = FirstEvent->TEventClass_field_2C; /*0x727061*/
      if ( (TEventClass_field_2C == 36 || TEventClass_field_2C == 37) && FirstEvent->TEventClass_field_34 == a2 ) /*0x727071*/
        break; /*0x727071*/
      FirstEvent = (TEventClass *)FirstEvent->TEventClass_field_28; /*0x727073*/
      if ( !FirstEvent ) /*0x727078*/
        return result; /*0x727078*/
    }
    return 1; /*0x72707e*/
  }
  return result; /*0x72707a*/
}



// ==== 0x00727090  TriggerTypeClass::GetAction  this=TriggerTypeClass  sig=csp ====
int __thiscall TriggerTypeClass::GetAction(TriggerTypeClass *this, int a2, int a3)
{
  TriggerTypeClass *NextTrigger; // eax
  TActionClass *i; // esi
  TActionClass *FirstAction; // eax
  TEventClass *j; // esi
  int result; // eax

  NextTrigger = this->NextTrigger; /*0x727098*/
  if ( NextTrigger && NextTrigger == (TriggerTypeClass *)a2 ) /*0x7270a4*/
    this->NextTrigger = NextTrigger->NextTrigger; /*0x7270ac*/
  for ( i = this->FirstAction; i; i = (TActionClass *)i->TActionClass_field_28 ) /*0x7270bb*/
    (*((void (__thiscall **)(TActionClass *, int, int))i->AbstractClass + 10))(i, a2, 1); /*0x7270c4*/
  FirstAction = this->FirstAction; /*0x7270ce*/
  if ( FirstAction == (TActionClass *)a2 ) /*0x7270d6*/
    this->FirstAction = (TActionClass *)FirstAction->TActionClass_field_28; /*0x7270db*/
  for ( j = this->FirstEvent; j; j = (TEventClass *)j->TEventClass_field_28 ) /*0x7270e9*/
    (*((void (__thiscall **)(TEventClass *, int, int))j->AbstractClass + 10))(j, a2, 1); /*0x7270f2*/
  result = (int)this->FirstEvent; /*0x7270fc*/
  if ( result == a2 ) /*0x727105*/
  {
    result = *(_DWORD *)(result + 40); /*0x727107*/
    this->FirstEvent = (TEventClass *)result; /*0x72710a*/
  }
  return result; /*0x727110*/
}



// ==== 0x00727190  ObjectClass::method  this=ObjectClass  sig=csp ====
int __thiscall sub_727190(ObjectClass *this)
{
  int v2; // edi
  char **v3; // esi

  v2 = 0; /*0x727195*/
  v3 = off_8449F8; /*0x727197*/
  while ( _strcmpi((char *)this, *v3) ) /*0x7271aa*/
  {
    ++v3; /*0x7271ac*/
    ++v2; /*0x7271af*/
    if ( (int)v3 >= (int)aPersistent ) /*0x7271b6*/
      return 0; /*0x7271bd*/
  }
  return v2; /*0x7271b8*/
}



// ==== 0x007271D0  sub_7271D0  this=-  sig=ida-proto ====
char *__fastcall sub_7271D0(int a1)
{
  return off_8449F8[a1]; /*0x7271d7*/
}



// ==== 0x007271E0  TriggerTypeClass::GetFlags  this=TriggerTypeClass  sig=csp ====
int __thiscall TriggerTypeClass::GetFlags(TriggerTypeClass *this)
{
  TEventClass *FirstEvent; // esi
  int i; // edi
  int ActionCategoryFlags; // eax
  TActionClass *j; // esi
  int v6; // eax
  TriggerTypeClass *NextTrigger; // ecx

  FirstEvent = this->FirstEvent; /*0x7271e5*/
  for ( i = 0; FirstEvent; i |= ActionCategoryFlags ) /*0x7271ef*/
  {
    ActionCategoryFlags = TriggerTypeClass::GetActionCategoryFlags((TriggerTypeClass *)FirstEvent->TEventClass_field_2C); /*0x7271f4*/
    FirstEvent = (TEventClass *)FirstEvent->TEventClass_field_28; /*0x7271f9*/
  }
  for ( j = this->FirstAction; j; i |= v6 ) /*0x72720a*/
  {
    v6 = TriggerTypeClass::Dispatch((TriggerTypeClass *)j->TActionClass_field_2C); /*0x72720f*/
    j = (TActionClass *)j->TActionClass_field_28; /*0x727214*/
  }
  NextTrigger = this->NextTrigger; /*0x72721d*/
  if ( NextTrigger ) /*0x727225*/
    return i | TriggerTypeClass::GetFlags(NextTrigger); /*0x72722c*/
  else
    return i; /*0x727232*/
}



// ==== 0x00727240  TriggerTypeClass::LoadFromINI  this=TriggerTypeClass  sig=csp ====
char __thiscall TriggerTypeClass::LoadFromINI(TriggerTypeClass *this, unsigned __int8 ***a2)
{
  char *v3; // esi
  HouseTypeClass *v4; // edx
  char *v5; // esi
  int v6; // edi
  TriggerTypeClass *v7; // eax
  TriggerTypeClass *v8; // eax
  char *v9; // eax
  char *v10; // eax
  char *v11; // eax
  char *v12; // eax
  char *v13; // eax
  char *v14; // eax
  char *v15; // eax
  int v16; // eax
  int v17; // edi
  TActionClass *v18; // eax
  TriggerTypeClass *v19; // esi
  char *v20; // eax
  int v21; // eax
  ScriptAction *v22; // edi
  int v23; // ebx
  TActionClass *v24; // eax
  ScriptAction *v25; // esi
  char Destination[48]; // [esp+8h] [ebp-234h] BYREF
  char v28; // [esp+38h] [ebp-204h]
  char String[512]; // [esp+3Ch] [ebp-200h] BYREF

  INIClass::ResetSection((INIClass *)a2); /*0x727253*/
  if ( !INIClass::GetString( /*0x72727b*/
          (INIClass *)a2,
          (unsigned __int8 *)aTriggers,
          (unsigned __int8 *)this->__pad_24,
          &g_INI_DefaultBuffer,
          String,
          512) )
    return 0; /*0x7275b5*/
  v3 = strtok(String, Str); /*0x727290*/
  if ( _strcmpi(v3, g_Str__none_) ) /*0x727298*/
    v4 = (HouseTypeClass *)*((_DWORD *)dword_A83C9C + SuperWeaponTypeClass::FindByName((SuperWeaponTypeClass *)v3)); /*0x7272bb*/
  else
    v4 = *(HouseTypeClass **)dword_A83C9C; /*0x7272aa*/
  this->House = v4; /*0x7272cb*/
  v5 = strtok(0, Str); /*0x7272d6*/
  this->NextTrigger = 0; /*0x7272de*/
  if ( _strcmpi(v5, g_Str__none_) ) /*0x7272e4*/
  {
    if ( !_strcmpi(g_Str__none_, v5) || !_strcmpi(g_Str_none, v5) ) /*0x72730c*/
      goto LABEL_14; /*0x72730c*/
    v6 = 0; /*0x72731d*/
    if ( *(int *)FootClass_Array.? > 0 ) /*0x727321*/
    {
      while ( _strcmpi((char *)(*(_DWORD *)(FootClass_Array.?[0] + 4 * v6) + 36), v5) ) /*0x72733a*/
      {
        if ( ++v6 >= *(int *)FootClass_Array.? ) /*0x727344*/
          goto LABEL_11; /*0x727344*/
      }
      v8 = *(TriggerTypeClass **)(FootClass_Array.?[0] + 4 * v6); /*0x727367*/
      goto LABEL_15; /*0x72736a*/
    }
LABEL_11:
    v7 = (TriggerTypeClass *)__2_YAPAXI_Z(0xB4u); /*0x72734b*/
    if ( v7 ) /*0x727355*/
      v8 = (TriggerTypeClass *)TriggerTypeClass::Construct(v7, v5); /*0x72735a*/
    else
LABEL_14:
      v8 = 0; /*0x72736c*/
LABEL_15:
    this->NextTrigger = v8; /*0x72736e*/
  }
  v9 = strtok(0, Str); /*0x727374*/
  if ( v9 ) /*0x727384*/
  {
    strncpy(Destination, v9, 0x30u); /*0x727395*/
    v28 = 0; /*0x72739d*/
  }
  else
  {
    Destination[0] = 0; /*0x727386*/
  }
  if ( Destination != this->Name ) /*0x7273ab*/
  {
    qmemcpy(this->Name, Destination, 0x30u); /*0x7273b6*/
    this->Name[48] = v28; /*0x7273b8*/
  }
  v10 = strtok(0, Str); /*0x7273bf*/
  this->Enabled = v10 && !atoi(v10); /*0x7273e1*/
  v11 = strtok(0, Str); /*0x7273ee*/
  this->Difficulty[0] = v11 && atoi(v11); /*0x727407*/
  v12 = strtok(0, Str); /*0x72741d*/
  this->Difficulty[1] = v12 && atoi(v12); /*0x727436*/
  v13 = strtok(0, Str); /*0x72744c*/
  this->Difficulty[2] = v13 && atoi(v13); /*0x727465*/
  v14 = strtok(0, Str); /*0x72747b*/
  if ( v14 && atoi(v14) ) /*0x727488*/
    this->MustTransfer = 1; /*0x727494*/
  if ( INIClass::GetString( /*0x7274bb*/
         (INIClass *)a2,
         (unsigned __int8 *)aEvents,
         (unsigned __int8 *)this->__pad_24,
         &g_INI_DefaultBuffer,
         String,
         512) )
  {
    v15 = strtok(String, Str); /*0x7274ce*/
    v16 = atoi(v15); /*0x7274d4*/
    if ( v16 ) /*0x7274de*/
    {
      v17 = v16; /*0x7274e0*/
      do /*0x727514*/
      {
        v18 = (TActionClass *)__2_YAPAXI_Z(0x58u); /*0x7274e4*/
        if ( v18 ) /*0x7274ee*/
          v19 = (TriggerTypeClass *)TActionClass::TActionClass(v18); /*0x7274f7*/
        else
          v19 = 0; /*0x7274fb*/
        TriggerTypeClass::ParseActionData(v19); /*0x7274ff*/
        --v17; /*0x72750a*/
        v19->__pad_24[1] = (int)this->FirstEvent; /*0x72750b*/
        this->FirstEvent = (TEventClass *)v19; /*0x72750e*/
      }
      while ( v17 ); /*0x727514*/
    }
  }
  if ( INIClass::GetString( /*0x727537*/
         (INIClass *)a2,
         (unsigned __int8 *)aActions,
         (unsigned __int8 *)this->__pad_24,
         &g_INI_DefaultBuffer,
         String,
         512) )
  {
    v20 = strtok(String, Str); /*0x72754a*/
    v21 = atoi(v20); /*0x727550*/
    v22 = 0; /*0x727558*/
    this->FirstAction = 0; /*0x72755c*/
    if ( v21 ) /*0x727562*/
    {
      v23 = v21; /*0x727564*/
      do /*0x7275a3*/
      {
        v24 = (TActionClass *)__2_YAPAXI_Z(0x94u); /*0x72756b*/
        if ( v24 ) /*0x727575*/
          v25 = (ScriptAction *)TActionClass::ctor(v24); /*0x72757e*/
        else
          v25 = 0; /*0x727582*/
        ScriptAction::ParseScriptActionParams(v25); /*0x727586*/
        if ( this->FirstAction ) /*0x72758b*/
          *(_DWORD *)v22->__pad_28 = v25; /*0x72759d*/
        else
          this->FirstAction = (TActionClass *)v25; /*0x727595*/
        --v23; /*0x7275a0*/
        v22 = v25; /*0x7275a1*/
      }
      while ( v23 ); /*0x7275a3*/
    }
  }
  return 1; /*0x7275a7*/
}



// ==== 0x007275D0  TriggerClass::Process  this=INIClass  sig=csp ====
int __thiscall sub_7275D0(char *this)
{
  int result; // eax
  int v3; // ebx
  void *StringByIndex; // esi
  int v5; // edi
  _DWORD *v6; // eax
  _DWORD *v7; // eax
  int i; // [esp+8h] [ebp-4h]

  result = INIClass::GetKeyCount(this, (unsigned __int8 *)aTriggers); /*0x7275db*/
  v3 = 0; /*0x7275e0*/
  for ( i = result; v3 < i; ++v3 ) /*0x7275e8*/
  {
    StringByIndex = (void *)INIClass::GetStringByIndex(this, (unsigned __int8 *)aTriggers, v3); /*0x7275ff*/
    if ( !_strcmpi(g_Str__none_, StringByIndex) || !_strcmpi(g_Str_none, StringByIndex) ) /*0x727619*/
      goto LABEL_10; /*0x727619*/
    v5 = 0; /*0x72762a*/
    if ( dword_8B4188 > 0 ) /*0x72762e*/
    {
      while ( _strcmpi((const void *)(*((_DWORD *)dword_8B417C + v5) + 36), StringByIndex) ) /*0x727648*/
      {
        if ( ++v5 >= dword_8B4188 ) /*0x727652*/
          goto LABEL_7; /*0x727652*/
      }
      v7 = (_DWORD *)*((_DWORD *)dword_8B417C + v5); /*0x727675*/
      goto LABEL_11; /*0x727678*/
    }
LABEL_7:
    v6 = __2_YAPAXI_Z(0xB4u); /*0x727659*/
    if ( v6 ) /*0x727663*/
      v7 = TriggerTypeClass::Construct(v6, (char *)StringByIndex); /*0x727668*/
    else
LABEL_10:
      v7 = 0; /*0x72767a*/
LABEL_11:
    result = (*(int (__thiscall **)(_DWORD *, char *))(*v7 + 100))(v7, this); /*0x72767c*/
  }
  return result; /*0x727691*/
}



// ==== 0x007276A0  TriggerTypeClass::GetParameter  this=TriggerTypeClass  sig=csp ====
char __thiscall TriggerTypeClass::GetParameter(TriggerTypeClass *this, char *a2)
{
  TriggerTypeClass *NextTrigger; // eax
  const char *pad_24; // esi
  HouseTypeClass *House; // eax
  const char *id; // eax
  int *v7; // esi
  TEventClass *FirstEvent; // eax
  int i; // ecx
  TEventClass *v10; // ebp
  TActionClass *FirstAction; // eax
  int j; // ecx
  TActionClass *v13; // ebx
  int *v15; // [esp+10h] [ebp-204h]
  char Buffer[512]; // [esp+14h] [ebp-200h] BYREF

  NextTrigger = this->NextTrigger; /*0x7276ab*/
  pad_24 = (const char *)NextTrigger->__pad_24; /*0x7276b4*/
  if ( !NextTrigger ) /*0x7276b7*/
    pad_24 = g_Str__none_; /*0x7276b9*/
  House = this->House; /*0x7276be*/
  if ( House ) /*0x7276c6*/
    id = (const char *)House->id; /*0x7276c8*/
  else
    id = g_Str__none_; /*0x7276cd*/
  sprintf( /*0x727728*/
    Buffer,
    "%s,%s,%s,%d,%d,%d,%d,%d",
    id,
    pad_24,
    this->Name,
    this->Enabled == 0,
    this->Difficulty[0] != 0,
    this->Difficulty[1] != 0,
    this->Difficulty[2] != 0,
    this->MustTransfer != 0);
  v7 = this->__pad_24; /*0x72773a*/
  v15 = this->__pad_24; /*0x727747*/
  INIClass::SetString(a2, (unsigned __int8 *)aTriggers, (char *)this->__pad_24, Buffer); /*0x72774b*/
  FirstEvent = this->FirstEvent; /*0x727750*/
  for ( i = 0; FirstEvent; ++i ) /*0x72775a*/
    FirstEvent = (TEventClass *)FirstEvent->TEventClass_field_28; /*0x72775c*/
  sprintf(Buffer, "%d", i); /*0x72776f*/
  v10 = this->FirstEvent; /*0x727774*/
  if ( v10 ) /*0x72777f*/
  {
    do /*0x7277c0*/
    {
      strcat(Buffer, Str); /*0x7277a6*/
      TEventClass::PrepareSaveToINI(v10, Buffer); /*0x7277b6*/
      v10 = (TEventClass *)v10->TEventClass_field_28; /*0x7277bb*/
    }
    while ( v10 ); /*0x7277c0*/
    v7 = this->__pad_24; /*0x7277c2*/
  }
  INIClass::SetString(a2, (unsigned __int8 *)aEvents, (char *)v7, Buffer); /*0x7277da*/
  FirstAction = this->FirstAction; /*0x7277df*/
  for ( j = 0; FirstAction; ++j ) /*0x7277e9*/
    FirstAction = (TActionClass *)FirstAction->TActionClass_field_28; /*0x7277eb*/
  sprintf(Buffer, "%d", j); /*0x7277fe*/
  v13 = this->FirstAction; /*0x727803*/
  if ( v13 ) /*0x72780e*/
  {
    do /*0x72784f*/
    {
      strcat(Buffer, Str); /*0x727835*/
      ScriptAction::Serialize((int)v13, Buffer); /*0x727845*/
      v13 = (TActionClass *)v13->TActionClass_field_28; /*0x72784a*/
    }
    while ( v13 ); /*0x72784f*/
    v7 = v15; /*0x727851*/
  }
  INIClass::SetString(a2, (unsigned __int8 *)aActions, (char *)v7, Buffer); /*0x727869*/
  return 1; /*0x72786e*/
}



// ==== 0x00727880  ObjectClass::ReadAudioEventINI  this=INIClass  sig=csp ====
int __thiscall ReadAudioEventINI(INIClass *this)
{
  int KeyCount; // ebx
  int i; // edi
  unsigned __int8 *StringByIndex; // eax
  int v5; // ebx
  int j; // edi
  unsigned __int8 *v7; // eax
  int v8; // ebx
  int k; // edi
  unsigned __int8 *v10; // eax
  int result; // eax
  int m; // edi
  char Destination[32]; // [esp+Ch] [ebp-20h] BYREF

  KeyCount = INIClass::GetKeyCount(this->__pad_0, (unsigned __int8 *)aTriggers); /*0x727893*/
  for ( i = 0; i < KeyCount; ++i ) /*0x727899*/
  {
    StringByIndex = (unsigned __int8 *)INIClass::GetStringByIndex(this->__pad_0, (unsigned __int8 *)aTriggers, i); /*0x7278a5*/
    INIClass::GetString(this, (unsigned __int8 *)aTriggers, StringByIndex, &g_INI_DefaultBuffer, Destination, 32); /*0x7278bf*/
    INIClass::ClearSection((int *)this->__pad_0, (int)Destination, 0); /*0x7278cd*/
  }
  INIClass::ClearSection((int *)this->__pad_0, (int)aTriggers, 0); /*0x7278e2*/
  v5 = INIClass::GetKeyCount(this->__pad_0, (unsigned __int8 *)aEvents); /*0x7278f4*/
  for ( j = 0; j < v5; ++j ) /*0x7278fa*/
  {
    v7 = (unsigned __int8 *)INIClass::GetStringByIndex(this->__pad_0, (unsigned __int8 *)aEvents, j); /*0x727906*/
    INIClass::GetString(this, (unsigned __int8 *)aTriggers, v7, &g_INI_DefaultBuffer, Destination, 32); /*0x727920*/
    INIClass::ClearSection((int *)this->__pad_0, (int)Destination, 0); /*0x72792e*/
  }
  INIClass::ClearSection((int *)this->__pad_0, (int)aEvents, 0); /*0x727943*/
  v8 = INIClass::GetKeyCount(this->__pad_0, (unsigned __int8 *)aActions); /*0x727955*/
  for ( k = 0; k < v8; ++k ) /*0x72795b*/
  {
    v10 = (unsigned __int8 *)INIClass::GetStringByIndex(this->__pad_0, (unsigned __int8 *)aActions, k); /*0x727967*/
    INIClass::GetString(this, (unsigned __int8 *)aTriggers, v10, &g_INI_DefaultBuffer, Destination, 32); /*0x727981*/
    INIClass::ClearSection((int *)this->__pad_0, (int)Destination, 0); /*0x72798f*/
  }
  INIClass::ClearSection((int *)this->__pad_0, (int)aActions, 0); /*0x7279a4*/
  result = *(_DWORD *)FootClass_Array.?; /*0x7279a9*/
  for ( m = 0; m < *(int *)FootClass_Array.?; ++m ) /*0x7279b2*/
  {
    (*(void (__thiscall **)(_DWORD, INIClass *))(**(_DWORD **)(FootClass_Array.?[0] + 4 * m) + 104))( /*0x7279bf*/
      *(_DWORD *)(FootClass_Array.?[0] + 4 * m),
      this);
    result = *(_DWORD *)FootClass_Array.?; /*0x7279c2*/
  }
  return result; /*0x7279cc*/
}



// ==== 0x00727AA0  TagTypeClass::FindOrCreateTriggerType  this=Coord  sig=csp ====
_DWORD *__thiscall TagTypeClass::FindOrCreateTriggerType(char *Source)
{
  int v2; // esi
  TriggerTypeClass *v3; // eax

  if ( !_strcmpi(g_Str__none_, Source) || !_strcmpi(g_Str_none, Source) ) /*0x727abc*/
    return 0; /*0x727b1f*/
  v2 = 0; /*0x727acd*/
  if ( *(int *)FootClass_Array.? <= 0 ) /*0x727ad1*/
  {
LABEL_6:
    v3 = (TriggerTypeClass *)__2_YAPAXI_Z(0xB4u); /*0x727af6*/
    if ( v3 ) /*0x727b05*/
      return TriggerTypeClass::Construct(v3, Source); /*0x727b11*/
    return 0; /*0x727b05*/
  }
  while ( _strcmpi((char *)(*(_DWORD *)(FootClass_Array.?[0] + 4 * v2) + 36), Source) ) /*0x727aea*/
  {
    if ( ++v2 >= *(int *)FootClass_Array.? ) /*0x727af4*/
      goto LABEL_6; /*0x727af4*/
  }
  return *(_DWORD **)(FootClass_Array.?[0] + 4 * v2); /*0x727b0f*/
}



// ==== 0x00727B30  TriggerTypeClass::PowerDrainUpdate  this=TriggerTypeClass  sig=csp ====
int __thiscall TriggerTypeClass::PowerDrainUpdate(TriggerTypeClass *this, int *a2)
{
  int v3; // eax
  TriggerTypeClass *NextTrigger; // eax
  int v5; // eax
  int result; // eax
  int v7; // eax
  TActionClass *FirstAction; // esi
  int v9; // eax

  AbstractTypeClass::ProcessPower((AbstractTypeClass *)this, a2); /*0x727b39*/
  v3 = (*((int (__stdcall **)(void **))this->House->? + 4))(&this->House->?); /*0x727b4a*/
  Power::TimerProcess(v3); /*0x727b50*/
  NextTrigger = this->NextTrigger; /*0x727b55*/
  if ( NextTrigger ) /*0x727b5d*/
  {
    v5 = (*((int (__stdcall **)(void **))NextTrigger->? + 4))(&NextTrigger->?); /*0x727b66*/
    Power::TimerProcess(v5); /*0x727b6c*/
  }
  result = (int)this->FirstEvent; /*0x727b71*/
  if ( result ) /*0x727b79*/
  {
    v7 = (*(int (__stdcall **)(int))(*(_DWORD *)(result + 4) + 16))(result + 4); /*0x727b82*/
    result = Power::TimerProcess(v7); /*0x727b88*/
  }
  FirstAction = this->FirstAction; /*0x727b8d*/
  if ( FirstAction ) /*0x727b95*/
  {
    v9 = (*((int (__stdcall **)(void **))FirstAction->? + 4))(&FirstAction->?); /*0x727b9e*/
    return Power::TimerProcess(v9); /*0x727ba4*/
  }
  return result; /*0x727ba9*/
}



// ==== 0x00727BB0  TriggerTypeClass::GetClassIdentifier  this=TriggerTypeClass  sig=csp ====
int __stdcall TriggerTypeClass::GetClassIdentifier(TriggerTypeClass *this, _DWORD *a2)
{
  if ( !a2 ) /*0x727bb6*/
    return -2147467261; /*0x727bb8*/
  *a2 = -1070787183; /*0x727bc6*/
  a2[1] = 298977834; /*0x727bce*/
  a2[2] = 1610655660; /*0x727bd7*/
  a2[3] = unk_7E97FC; /*0x727be0*/
  return 0; /*0x727bbd*/
}



// ==== 0x00727BF0  TriggerTypeClass::LoadTypeData  this=TriggerTypeClass  sig=csp ====
int __stdcall TriggerTypeClass::LoadTypeData(TriggerTypeClass *this, int a2)
{
  int result; // eax

  result = AbstractClass::SaveLoad_Prefix_0(this, a2); /*0x727bfb*/
  if ( result >= 0 ) /*0x727c02*/
  {
    if ( this ) /*0x727c06*/
    {
      AbstractTypeClass::Init((int)this, (int)&a2); /*0x727c0f*/
      this->AbstractClass = &TriggerTypeClass::`vftable'; /*0x727c14*/
      this->? = &TriggerTypeClass::`vftable'; /*0x727c1a*/
      this->? = &TriggerTypeClass::`vftable'; /*0x727c21*/
      this->? = &TriggerTypeClass::`vftable'; /*0x727c28*/
    }
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)&this->NextTrigger); /*0x727c3b*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)&this->FirstEvent); /*0x727c4c*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)&this->FirstAction); /*0x727c5d*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)&this->House); /*0x727c6e*/
    return 0; /*0x727c73*/
  }
  return result; /*0x727c75*/
}



// ==== 0x00727C80  TriggerTypeClass::Write  this=TriggerTypeClass  sig=csp ====
int __stdcall TriggerTypeClass::Write(TriggerTypeClass *this, int *a2, int a3)
{
  int result; // eax

  result = AbstractClass::SaveLoad_Prefix((int *)this, a2, a3); /*0x727c8f*/
  if ( result >= 0 ) /*0x727c96*/
    return 0; /*0x727c98*/
  return result; /*0x727c9a*/
}



// ==== 0x00727CA0  TriggerTypeClass::GetTypeIdentifier  this=TriggerTypeClass  sig=csp ====
int TriggerTypeClass::GetTypeIdentifier(TriggerTypeClass *this)
{
  return 39; /*0x727ca5*/
}



// ==== 0x00727CB0  TriggerTypeClass::GetObjectSize  this=TriggerTypeClass  sig=csp ====
int TriggerTypeClass::GetObjectSize(TriggerTypeClass *this)
{
  return 180; /*0x727cb5*/
}



// ==== 0x00727CC0  TriggerTypeClass::GetAuxField  this=TriggerTypeClass  sig=csp ====
int __thiscall TriggerTypeClass::GetAuxField(TriggerTypeClass *this)
{
  return this->ArrayIndex; /*0x727cc6*/
}



// ==== 0x00727CD0  TriggerTypeClass::Destructor  this=TriggerTypeClass  sig=csp ====
void *__thiscall TextRenderer::Destructor(TriggerTypeClass *this, char a2)
{
  TriggerClass::ProcessEvents((AbstractClass *)this); /*0x727cd3*/
  if ( (a2 & 1) != 0 ) /*0x727cdd*/
    __3_YAXPAX_Z(this); /*0x727ce0*/
  return this; /*0x727cea*/
}



// ==== 0x00727CF0  String::Trim  this=AbstractClass  sig=csp ====
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



// ==== 0x00727D60  WideString::Trim  this=ObjectClass  sig=csp ====
wchar_t *__thiscall WideString::Trim(WideString *this)
{
  unsigned __int16 v2; // ax
  WideString *v3; // esi
  int v4; // eax
  WideString *v5; // ecx

  if ( this ) /*0x727d66*/
  {
    v2 = *(_WORD *)this; /*0x727d68*/
    v3 = this; /*0x727d6b*/
    if ( *(_WORD *)this ) /*0x727d68*/
    {
      do /*0x727d82*/
      {
        if ( v2 > 0x20u ) /*0x727d76*/
          break; /*0x727d76*/
        v2 = *(_WORD *)&v3[2]; /*0x727d78*/
        v3 += 2; /*0x727d7c*/
      }
      while ( v2 ); /*0x727d82*/
      if ( v3 != this ) /*0x727d86*/
        wcscpy((wchar_t *)this, (const wchar_t *)v3); /*0x727d8a*/
    }
    v4 = wcslen((const wchar_t *)this) - 1; /*0x727d9b*/
    if ( v4 >= 0 ) /*0x727d9c*/
    {
      v5 = this + 2 * v4; /*0x727d9e*/
      do /*0x727db8*/
      {
        if ( !*(_WORD *)v3 ) /*0x727da1*/
          break; /*0x727da5*/
        if ( *(_WORD *)v5 > 0x20u ) /*0x727dab*/
          break; /*0x727dab*/
        *(_WORD *)v5 = 0; /*0x727dad*/
        --v4; /*0x727db2*/
        v5 -= 2; /*0x727db3*/
      }
      while ( v4 >= 0 ); /*0x727db8*/
    }
  }
  return (wchar_t *)this; /*0x727dbc*/
}



// ==== 0x00727DC0  sub_727DC0  this=-  sig=ida-proto ====
void sub_727DC0()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x727dcc*/
  dbl_B0F878 = Math::Sqrt(v0 + v0); /*0x727dde*/
}



// ==== 0x00727DF0  sub_727DF0  this=-  sig=ida-proto ====
void sub_727DF0()
{
  dbl_B0F8C8 = dbl_B0F878 / 60.0; /*0x727dfc*/
}



// ==== 0x00727E10  sub_727E10  this=-  sig=ida-proto ====
void sub_727E10()
{
  dbl_B0F8B0 = 1.0 / dbl_B0F8C8; /*0x727e1c*/
}



// ==== 0x00727E30  sub_727E30  this=-  sig=ida-proto ====
void sub_727E30()
{
  dbl_B0F8A8 = 0.0174532925199433 * 45.0; /*0x727e3c*/
}



// ==== 0x00727E50  sub_727E50  this=-  sig=ida-proto ====
void sub_727E50()
{
  dbl_B0F880 = 0.0174532925199433 * 60.0; /*0x727e5c*/
}



// ==== 0x00727E70  sub_727E70  this=-  sig=ida-proto ====
void sub_727E70()
{
  dbl_B0F858 = 0.0174532925199433 * 90.0; /*0x727e7c*/
}



// ==== 0x00727E90  sub_727E90  this=-  sig=ida-proto ====
__int64 sub_727E90()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_B0F858 - dbl_B0F880); /*0x727ea2*/
  result = Math::RoundToInt(v0 * dbl_B0F878 * 0.5); /*0x727eb6*/
  dword_B0F8D0 = result; /*0x727ebb*/
  return result; /*0x727ec0*/
}



// ==== 0x00727ED0  sub_727ED0  this=-  sig=ida-proto ====
void sub_727ED0()
{
  dbl_B0F888 = Math::ArcTan((double)dword_B0F8D0 * 0.00390625); /*0x727ee7*/
}



// ==== 0x00727F00  sub_727F00  this=-  sig=ida-proto ====
void sub_727F00()
{
  dbl_B0F8A0 = Math::ArcTan((double)(2 * dword_B0F8D0) / dbl_B0F878); /*0x727f22*/
}



// ==== 0x00727F30  sub_727F30  this=-  sig=ida-proto ====
__int64 sub_727F30()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_B0F8D0) + 0.5); /*0x727f4b*/
  dword_B0F8C4 = result; /*0x727f50*/
  return result; /*0x727f56*/
}



// ==== 0x00727F60  sub_727F60  this=-  sig=ida-proto ====
int sub_727F60()
{
  word_B0F870 = 0; /*0x727f62*/
  word_B0F872 = 0; /*0x727f68*/
  return 0; /*0x727f6e*/
}



// ==== 0x00727F70  sub_727F70  this=-  sig=ida-proto ====
int sub_727F70()
{
  dword_B0F890 = 0; /*0x727f72*/
  dword_B0F894 = 0; /*0x727f77*/
  dword_B0F898 = 0; /*0x727f7c*/
  return 0; /*0x727f81*/
}



// ==== 0x00727F90  sub_727F90  this=-  sig=ida-proto ====
int sub_727F90()
{
  dword_B0F8C0 = 0; /*0x727f95*/
  dword_B0F8B8 = 128; /*0x727f9f*/
  dword_B0F8BC = 128; /*0x727fa4*/
  return 128; /*0x727fa9*/
}



// ==== 0x00727FB0  sub_727FB0  this=-  sig=ida-proto ====
int sub_727FB0()
{
  dword_B0F860 = 0; /*0x727fb2*/
  dword_B0F864 = 0; /*0x727fb7*/
  dword_B0F868 = 0; /*0x727fbc*/
  dword_B0F86C = 0; /*0x727fc1*/
  return 0; /*0x727fc6*/
}



// ==== 0x00727FD0  TubeClass::Construct  this=TubeClass  sig=csp ====
AbstractClass *__thiscall TubeClass::Construct(TubeClass *this, __int16 *a2, int a3)
{
  int v4; // eax
  _WORD *v5; // eax
  int v6; // ecx
  TubeClass **v7; // edi

  AbstractClass::Constructor((AbstractClass *)this); /*0x727fd5*/
  this->? = *(_DWORD *)a2; /*0x727fe4*/
  this->? = *(_DWORD *)a2; /*0x727fec*/
  this->? = a3; /*0x727ff0*/
  this->estimatedHealth = 0; /*0x727ff3*/
  this->ObjectClass = &TubeClass::`vftable'; /*0x727ffd*/
  this->? = &TubeClass::`vftable'; /*0x728003*/
  this->? = &TubeClass::`vftable'; /*0x728009*/
  this->? = &TubeClass::`vftable'; /*0x728010*/
  AbstractClass::GenerateUniqueID((AbstractClass *)&this->?); /*0x728017*/
  memset(&this->?, 0xFFu, 0x190u); /*0x728027*/
  if ( FootClass_Array.?[0] < FootClass_Array.?[4] /*0x72805f*/
    || (BYTE1(FootClass_Array.?[5]) || !FootClass_Array.?[4])
    && FootClass_Array.?[1] > 0
    && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(FootClass_Array.?[2] + 8))(
         &FootClass_Array.?[2],
         FootClass_Array.?[4] + FootClass_Array.?[1],
         0) )
  {
    v4 = FootClass_Array.?[0]++; /*0x72806c*/
    *(_DWORD *)(FootClass_Array.?[3] + 4 * v4) = this; /*0x72807b*/
  }
  if ( *a2 || a2[1] ) /*0x728084*/
  {
    v5 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], a2); /*0x728091*/
    v6 = 0; /*0x72809c*/
    if ( FootClass_Array.?[0] <= 0 ) /*0x7280a0*/
    {
LABEL_13:
      LOWORD(v6) = -1; /*0x7280b4*/
    }
    else
    {
      v7 = (TubeClass **)FootClass_Array.?[3]; /*0x7280a2*/
      while ( *v7 != this ) /*0x7280aa*/
      {
        ++v6; /*0x7280ac*/
        ++v7; /*0x7280ad*/
        if ( v6 >= FootClass_Array.?[0] ) /*0x7280b2*/
          goto LABEL_13; /*0x7280b2*/
      }
    }
    v5[139] = v6; /*0x7280b7*/
  }
  return (AbstractClass *)this; /*0x7280c0*/
}



// ==== 0x007281A0  TubeClass::LoadState  this=TubeClass  sig=csp ====
int __stdcall TubeClass::LoadState(TubeClass *this, int a2)
{
  int result; // eax

  result = AbstractClass::SaveLoad_Prefix_0(this, a2); /*0x7281ab*/
  if ( result >= 0 ) /*0x7281b2*/
  {
    if ( this ) /*0x7281b6*/
    {
      AbstractClass::Constructor((AbstractClass *)this); /*0x7281ba*/
      this->ObjectClass = &TubeClass::`vftable'; /*0x7281bf*/
      this->? = &TubeClass::`vftable'; /*0x7281c5*/
      this->? = &TubeClass::`vftable'; /*0x7281cc*/
      this->? = &TubeClass::`vftable'; /*0x7281d3*/
    }
    return 0; /*0x7281da*/
  }
  return result; /*0x7281dc*/
}



// ==== 0x007281E0  TubeClass::SaveState  this=TubeClass  sig=csp ====
int __stdcall TubeClass::SaveState(TubeClass *this, int *a2, int a3)
{
  int result; // eax

  result = AbstractClass::SaveLoad_Prefix((int *)this, a2, a3); /*0x7281ef*/
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

  v0 = dword_8B4148; /*0x728203*/
  v1 = 0; /*0x728209*/
  for ( i = -1; v1 < v0; ++v1 ) /*0x728215*/
  {
    v2 = (__int16 *)*((_DWORD *)dword_8B413C + v1); /*0x72821e*/
    v3 = CellCoord::To_CellObj(&dword_87F7E8, v2 + 18); /*0x72822f*/
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

  INIClass::ClearSection((int)this, (int)off_844A60, 0); /*0x728296*/
  v1 = dword_8B4148; /*0x72829b*/
  v2 = 0; /*0x7282a1*/
  for ( i = -1; v2 < v1; ++v2 ) /*0x7282ad*/
  {
    v3 = (__int16 *)*((_DWORD *)dword_8B413C + v2); /*0x7282b5*/
    v4 = CellCoord::To_CellObj(&dword_87F7E8, v3 + 18); /*0x7282c6*/
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
  result = dword_8B4148; /*0x728302*/
  for ( j = 0; j < dword_8B4148; ++j ) /*0x72830b*/
  {
    v7 = *((_DWORD *)dword_8B413C + j); /*0x728317*/
    if ( v7 ) /*0x72831c*/
    {
      sprintf(Buffer, "%d", j); /*0x72832d*/
      sprintf( /*0x728354*/
        Source,
        "%d,%d,%d,%d,%d",
        *(__int16 *)(v7 + 36),
        *(__int16 *)(v7 + 38),
        *(_DWORD *)(v7 + 44),
        *(__int16 *)(v7 + 40),
        *(__int16 *)(v7 + 42));
      v8 = (_DWORD *)(v7 + 48); /*0x72835c*/
      v9 = 100; /*0x72835f*/
      do /*0x72838b*/
      {
        sprintf(&Source[strlen(Source)], aD, *v8++); /*0x72837f*/
        --v9; /*0x72838a*/
      }
      while ( v9 ); /*0x72838b*/
      INIClass::SetString(this, (unsigned __int8 *)off_844A60, Buffer, Source); /*0x7283a2*/
    }
    result = dword_8B4148; /*0x7283a7*/
  }
  return result; /*0x7283b5*/
}



// ==== 0x007283C0  ScenarioClass::LoadWaypoints  this=ScenarioClass  sig=csp ====
int __thiscall ScenarioClass::LoadWaypoints(INIClass *this)
{
  INIClass *v1; // esi
  int result; // eax
  int v3; // ebx
  unsigned __int8 *StringByIndex; // eax
  TubeClass *v5; // eax
  AbstractClass *v6; // esi
  char *v7; // eax
  char *v8; // eax
  char *v9; // eax
  char *v10; // eax
  char *v11; // eax
  _DWORD *p_vtable3; // edi
  char *v13; // eax
  int v14; // [esp+8h] [ebp-210h]
  __int16 v15[2]; // [esp+Ch] [ebp-20Ch] BYREF
  INIClass *v16; // [esp+10h] [ebp-208h]
  int v17; // [esp+14h] [ebp-204h]
  char String[512]; // [esp+18h] [ebp-200h] BYREF

  v1 = this; /*0x7283c8*/
  v16 = this; /*0x7283ca*/
  INIClass::ResetSection(this); /*0x7283ce*/
  result = INIClass::GetKeyCount(v1->__pad_0, off_844A60); /*0x7283db*/
  v3 = 0; /*0x7283e0*/
  v17 = result; /*0x7283e4*/
  v14 = 0; /*0x7283e8*/
  if ( result > 0 ) /*0x7283ec*/
  {
    while ( 1 ) /*0x72840a*/
    {
      StringByIndex = (unsigned __int8 *)INIClass::GetStringByIndex(v1->__pad_0, off_844A60, v14); /*0x72840a*/
      INIClass::GetString(v1, off_844A60, StringByIndex, 0, String, 512); /*0x728424*/
      v5 = (TubeClass *)__2_YAPAXI_Z(0x1C4u); /*0x72842e*/
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
      v7 = strtok(String, Str); /*0x728464*/
      LOWORD(v6[1].vtable0) = atoi(v7); /*0x728475*/
      v8 = strtok(0, Str); /*0x728479*/
      HIWORD(v6[1].vtable0) = atoi(v8); /*0x72848a*/
      v9 = strtok(0, Str); /*0x72848e*/
      v6[1].vtable2 = (void *)atoi(v9); /*0x72849f*/
      v10 = strtok(0, Str); /*0x7284a2*/
      LOWORD(v6[1].vtable1) = atoi(v10); /*0x7284b3*/
      v11 = strtok(0, Str); /*0x7284b7*/
      HIWORD(v6[1].vtable1) = atoi(v11); /*0x7284c5*/
      v6[12].uniqueId = -1; /*0x7284c9*/
      p_vtable3 = &v6[1].vtable3; /*0x7284d3*/
      do /*0x728508*/
      {
        v13 = strtok(0, Str); /*0x7284dd*/
        *p_vtable3 = atoi(v13); /*0x7284e8*/
        ++v6[12].uniqueId; /*0x7284f4*/
        if ( *p_vtable3 == -1 ) /*0x7284ff*/
          break; /*0x7284ff*/
        ++v3; /*0x728501*/
        ++p_vtable3; /*0x728502*/
      }
      while ( v3 < 100 ); /*0x728508*/
      *((_WORD *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)&v6[1]) + 139) = v14; /*0x728519*/
      result = v17; /*0x728520*/
      if ( ++v14 >= v17 ) /*0x72852b*/
        break; /*0x72852b*/
      v1 = v16; /*0x7283f6*/
      v3 = 0; /*0x7283fa*/
    }
  }
  return result; /*0x728533*/
}



// ==== 0x00728540  ObjectClass::method  this=ObjectClass  sig=csp ====
char __thiscall sub_728540(ObjectClass *this, int a2)
{
  int occupant; // esi
  ObjectClass **p_nextObject; // edx
  int v4; // eax
  int v5; // eax
  __int16 v6; // cx
  __int16 v8; // [esp+Eh] [ebp-2h]

  occupant = this->occupant; /*0x728547*/
  v8 = HIWORD(occupant); /*0x728551*/
  if ( occupant == *(_DWORD *)a2 ) /*0x728555*/
    return 1; /*0x728555*/
  p_nextObject = &this->nextObject; /*0x728565*/
  if ( this->nextObject == (ObjectClass *)-1 ) /*0x72856b*/
    return 1; /*0x7285bd*/
  while ( 1 ) /*0x72856d*/
  {
    v4 = (int)*p_nextObject++; /*0x72856d*/
    v5 = v4 & 7; /*0x728572*/
    v6 = v8 + HIWORD(g_DDrawSurfaceManager.scenario[v5 + 82]); /*0x728588*/
    LOWORD(occupant) = occupant + LOWORD(g_DDrawSurfaceManager.scenario[v5 + 82]); /*0x72859d*/
    v8 = v6; /*0x7285a1*/
    if ( (_WORD)occupant == *(_WORD *)a2 && v6 == *(_WORD *)(a2 + 2) ) /*0x7285ab*/
      break; /*0x7285ab*/
    if ( *p_nextObject == (ObjectClass *)-1 ) /*0x7285b0*/
      return 1; /*0x7285b0*/
  }
  return 0; /*0x7285b4*/
}



// ==== 0x00728630  TubeClass::PowerDrainUpdate  this=TubeClass  sig=csp ====
int __thiscall TubeClass::PowerDrainUpdate(TubeClass *this, unsigned int *a2)
{
  int *p_nextObject; // ebx
  int v4; // ebp

  AbstractClass::ProcessPower((AbstractClass *)this); /*0x72863b*/
  Checksummer::Add_WORD((Checksummer *)a2, this->?); /*0x728647*/
  Checksummer::Add_WORD((Checksummer *)a2, HIWORD(this->?)); /*0x728653*/
  Checksummer::Add_WORD((Checksummer *)a2, this->?); /*0x72865f*/
  Checksummer::Add_WORD((Checksummer *)a2, HIWORD(this->?)); /*0x72866b*/
  Power::TimerProcess(this->?); /*0x728676*/
  p_nextObject = (int *)&this->?; /*0x72867b*/
  v4 = 100; /*0x72867e*/
  do /*0x728691*/
  {
    Power::TimerProcess(*p_nextObject++); /*0x728688*/
    --v4; /*0x728690*/
  }
  while ( v4 ); /*0x728691*/
  return Power::TimerProcess(this->estimatedHealth); /*0x7286a1*/
}



// ==== 0x007286B0  TubeClass::StubReturn452  this=TubeClass  sig=csp ====
int TubeClass::StubReturn452(TubeClass *this)
{
  return 452; /*0x7286b5*/
}



// ==== 0x007286C0  TubeClass::StubReturn53  this=TubeClass  sig=csp ====
int TubeClass::StubReturn53(TubeClass *this)
{
  return 53; /*0x7286c5*/
}



// ==== 0x007286D0  TubeClass::ddtor  this=TubeClass  sig=csp ====
int __stdcall TubeClass::ddtor(TubeClass *this, _DWORD *a2)
{
  if ( !a2 ) /*0x7286d6*/
    return -2147467261; /*0x7286d8*/
  *a2 = 189572124; /*0x7286e6*/
  a2[1] = 298955687; /*0x7286ee*/
  a2[2] = 1610635188; /*0x7286f7*/
  a2[3] = unk_7E975C; /*0x728700*/
  return 0; /*0x7286dd*/
}



// ==== 0x00728710  TubeClass::ProcessEvent  this=TubeClass  sig=csp ====
_DWORD *__thiscall TubeClass::ProcessEvent(TubeClass *this, char a2)
{
  __int16 *v3; // eax
  int v4; // ecx
  TubeClass **v5; // edx
  int v6; // eax
  TubeClass *v8; // [esp+4h] [ebp-4h] BYREF

  this->ObjectClass = &TubeClass::`vftable'; /*0x728716*/
  this->? = &TubeClass::`vftable'; /*0x72871c*/
  this->? = &TubeClass::`vftable'; /*0x728723*/
  this->? = &TubeClass::`vftable'; /*0x72872a*/
  AbstractClass::AnnounceExpiredPointer((AbstractClass *)this, 1); /*0x728731*/
  v3 = (__int16 *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)&this->?); /*0x72873f*/
  if ( v3 ) /*0x728746*/
  {
    v4 = 0; /*0x72874f*/
    if ( FootClass_Array.?[0] <= 0 ) /*0x728753*/
    {
LABEL_6:
      v4 = -1; /*0x728767*/
    }
    else
    {
      v5 = (TubeClass **)FootClass_Array.?[3]; /*0x728755*/
      while ( *v5 != this ) /*0x72875d*/
      {
        ++v4; /*0x72875f*/
        ++v5; /*0x728760*/
        if ( v4 >= FootClass_Array.?[0] ) /*0x728765*/
          goto LABEL_6; /*0x728765*/
      }
    }
    if ( v3[139] == v4 ) /*0x728774*/
      v3[139] = -1; /*0x728776*/
  }
  v8 = this; /*0x72878f*/
  v6 = (*(int (__thiscall **)(int *, TubeClass **))(FootClass_Array.?[2] + 16))(&FootClass_Array.?[2], &v8); /*0x728793*/
  if ( v6 != -1 && v6 < FootClass_Array.?[0] ) /*0x7287a3*/
  {
    --FootClass_Array.?[0]; /*0x7287a8*/
    for ( ; /*0x7287ae*/
          v6 < FootClass_Array.?[0];
          *(_DWORD *)(FootClass_Array.?[3] + 4 * v6 - 4) = *(_DWORD *)(FootClass_Array.?[3] + 4 * v6) )
    {
      ++v6; /*0x7287b6*/
    }
  }
  AbstractClass::DTOR((AbstractClass *)this); /*0x7287ca*/
  if ( (a2 & 1) != 0 ) /*0x7287d4*/
    __3_YAXPAX_Z(this); /*0x7287d7*/
  return &this->ObjectClass; /*0x7287e1*/
}



// ==== 0x007287F0  sub_7287F0  this=-  sig=ida-proto ====
void sub_7287F0()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x7287fc*/
  dbl_B0F8F8 = Math::Sqrt(v0 + v0); /*0x72880e*/
}



// ==== 0x00728820  sub_728820  this=-  sig=ida-proto ====
void sub_728820()
{
  dbl_B0F948 = dbl_B0F8F8 / 60.0; /*0x72882c*/
}



// ==== 0x00728840  sub_728840  this=-  sig=ida-proto ====
void sub_728840()
{
  dbl_B0F930 = 1.0 / dbl_B0F948; /*0x72884c*/
}



// ==== 0x00728860  sub_728860  this=-  sig=ida-proto ====
void sub_728860()
{
  dbl_B0F928 = 0.0174532925199433 * 45.0; /*0x72886c*/
}



// ==== 0x00728880  sub_728880  this=-  sig=ida-proto ====
void sub_728880()
{
  dbl_B0F900 = 0.0174532925199433 * 60.0; /*0x72888c*/
}



// ==== 0x007288A0  sub_7288A0  this=-  sig=ida-proto ====
void sub_7288A0()
{
  dbl_B0F8D8 = 0.0174532925199433 * 90.0; /*0x7288ac*/
}



// ==== 0x007288C0  sub_7288C0  this=-  sig=ida-proto ====
__int64 sub_7288C0()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_B0F8D8 - dbl_B0F900); /*0x7288d2*/
  result = Math::RoundToInt(v0 * dbl_B0F8F8 * 0.5); /*0x7288e6*/
  dword_B0F950 = result; /*0x7288eb*/
  return result; /*0x7288f0*/
}



// ==== 0x00728900  sub_728900  this=-  sig=ida-proto ====
void sub_728900()
{
  dbl_B0F908 = Math::ArcTan((double)dword_B0F950 * 0.00390625); /*0x728917*/
}



// ==== 0x00728930  sub_728930  this=-  sig=ida-proto ====
void sub_728930()
{
  dbl_B0F920 = Math::ArcTan((double)(2 * dword_B0F950) / dbl_B0F8F8); /*0x728952*/
}



// ==== 0x00728960  sub_728960  this=-  sig=ida-proto ====
__int64 sub_728960()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_B0F950) + 0.5); /*0x72897b*/
  dword_B0F944 = result; /*0x728980*/
  return result; /*0x728986*/
}



// ==== 0x00728990  sub_728990  this=-  sig=ida-proto ====
int sub_728990()
{
  word_B0F8F0 = 0; /*0x728992*/
  return 0; /*0x72899e*/
}



// ==== 0x007289A0  sub_7289A0  this=-  sig=ida-proto ====
int sub_7289A0()
{
  dword_B0F910 = 0; /*0x7289a2*/
  dword_B0F914 = 0; /*0x7289a7*/
  dword_B0F918 = 0; /*0x7289ac*/
  return 0; /*0x7289b1*/
}



// ==== 0x007289C0  sub_7289C0  this=-  sig=ida-proto ====
int sub_7289C0()
{
  dword_B0F940 = 0; /*0x7289c5*/
  dword_B0F938 = 128; /*0x7289cf*/
  dword_B0F93C = 128; /*0x7289d4*/
  return 128; /*0x7289d9*/
}



// ==== 0x007289E0  sub_7289E0  this=-  sig=ida-proto ====
int sub_7289E0()
{
  dword_B0F8E0 = 0; /*0x7289e2*/
  dword_B0F8E4 = 0; /*0x7289e7*/
  dword_B0F8E8 = 0; /*0x7289ec*/
  dword_B0F8EC = 0; /*0x7289f1*/
  return 0; /*0x7289f6*/
}



// ==== 0x00728A00  TunnelLocomotionClass::SmallFunc_728A00  this=TunnelLocomotionClass  sig=csp ====
int __thiscall SmallFunc_728A00(TunnelLocomotionClass *this)
{
  LocomotionClass::Init((LocomotionClass *)this); /*0x728a03*/
  this->CurrentState[0] = 0; /*0x728a0d*/
  this->CurrentState[1] = *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[352]; /*0x728a16*/
  this->CurrentState[2] = *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[356]; /*0x728a1e*/
  this->CurrentState[3] = *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[360]; /*0x728a27*/
  this->CurrentState[4] = *(_DWORD *)&stru_A8EB00.?[416]; /*0x728a30*/
  this->CurrentState[6] = 0; /*0x728a33*/
  this->CurrentState[7] = 0; /*0x728a36*/
  LOBYTE(this->CurrentState[8]) = 0; /*0x728a39*/
  *(_DWORD *)this->LocomotionClass = &TunnelLocomotionClass::`vftable'; /*0x728a3c*/
  *(_DWORD *)&this->LocomotionClass[4] = &TunnelLocomotionClass::`vftable'; /*0x728a42*/
  return (int)this->LocomotionClass; /*0x728a4b*/
}



// ==== 0x00728A50  JumpjetLocomotionClass::ShortFunc_728A50  this=JumpjetLocomotionClass  sig=csp ====
bool __stdcall JumpjetLocomotionClass::ShortFunc_728A50(JumpjetLocomotionClass *this)
{
  return this->? != 0; /*0x728a5c*/
}



// ==== 0x00728A60  TunnelLocomotionClass::StubReturnZero_20  this=TunnelLocomotionClass  sig=csp ====
char __stdcall JumpjetLocomotionClass::StubReturnZero_20(TunnelLocomotionClass *this)
{
  char result; // al

  if ( !(*(unsigned __int8 (__stdcall **)(TunnelLocomotionClass *))(*(_DWORD *)this->LocomotionClass + 16))(this) ) /*0x728a68*/
    return 0; /*0x728a68*/
  result = 1; /*0x728a72*/
  if ( this->? == 1 ) /*0x728a79*/
    return 0; /*0x728a7b*/
  return result; /*0x728a7d*/
}



// ==== 0x00728A90  JumpjetLocomotionClass::GetCoordinateConditional_0  this=JumpjetLocomotionClass  sig=csp ====
_DWORD *__stdcall JumpjetLocomotionClass::GetCoordinateConditional_0(JumpjetLocomotionClass *this, _DWORD *a2)
{
  _DWORD *result; // eax
  int TurnRate; // ecx
  int Speed; // edx
  float Climb; // esi

  if ( (*(unsigned __int8 (__stdcall **)(JumpjetLocomotionClass *))(this->LocomotionClass[0] + 16))(this) ) /*0x728a99*/
  {
    result = a2; /*0x728aa0*/
    TurnRate = this->TurnRate; /*0x728aa4*/
    Speed = this->Speed; /*0x728aa7*/
    Climb = this->Climb; /*0x728aaa*/
  }
  else
  {
    TurnRate = this->?->?[0]; /*0x728ac7*/
    Speed = this->?->?[1]; /*0x728ac9*/
    Climb = *(float *)&this->?->?[2]; /*0x728acc*/
    result = a2; /*0x728acf*/
  }
  *a2 = TurnRate; /*0x728aaf*/
  a2[1] = Speed; /*0x728ab1*/
  *((float *)a2 + 2) = Climb; /*0x728ab4*/
  return result; /*0x728ab7*/
}



// ==== 0x00728AF0  TunnelLocomotionClass::SyncMovementPosition  this=TunnelLocomotionClass  sig=csp ====
int __stdcall JumpjetLocomotionClass::SyncMovementPosition(TunnelLocomotionClass *this, int a2, int a3, int a4)
{
  int result; // eax
  FootClass *Owner; // ecx
  int v6; // ebx
  int v7; // ebp
  int v8; // edi
  int v9; // eax
  int *v10; // eax
  int RefCount; // eax
  _DWORD v12[3]; // [esp+4h] [ebp-Ch] BYREF

  result = (*((int (__thiscall **)(FootClass *))this->?->TechnoClass + 223))(this->?); /*0x728afd*/
  if ( !(_BYTE)result ) /*0x728b05*/
  {
    result = (*((int (__thiscall **)(FootClass *))this->?->TechnoClass + 224))(this->?); /*0x728b10*/
    if ( !(_BYTE)result ) /*0x728b18*/
    {
      result = (*((int (__thiscall **)(FootClass *))this->?->TechnoClass + 117))(this->?); /*0x728b23*/
      if ( !(_BYTE)result ) /*0x728b2b*/
      {
        result = (*((int (__thiscall **)(FootClass *))this->?->TechnoClass + 118))(this->?); /*0x728b36*/
        if ( !(_BYTE)result ) /*0x728b3e*/
        {
          Owner = this->?; /*0x728b44*/
          v6 = a3; /*0x728b48*/
          v7 = a4; /*0x728b4d*/
          v8 = a2; /*0x728b52*/
          v12[1] = a3; /*0x728b56*/
          v12[0] = a2; /*0x728b5a*/
          v12[2] = a4; /*0x728b5e*/
          v9 = (*((int (__thiscall **)(FootClass *))Owner->TechnoClass + 34))(Owner); /*0x728b64*/
          v10 = (int *)(*(int (__thiscall **)(int, int *, _DWORD *))(*(_DWORD *)v9 + 108))(v9, &a2, v12); /*0x728b78*/
          this->CurrentState[0] = *v10; /*0x728b80*/
          this->CurrentState[1] = v10[1]; /*0x728b86*/
          this->CurrentState[2] = v10[2]; /*0x728b8c*/
          if ( (v8 != *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[352] /*0x728bb5*/
             || v6 != *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[356]
             || v7 != *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[360])
            && (*((int (__thiscall **)(FootClass *))this->?->TechnoClass + 114))(this->?) < 0 )
          {
            RefCount = this->?; /*0x728bb7*/
            if ( RefCount != 3 && RefCount != 5 && RefCount != 1 && RefCount != 6 && RefCount != 2 ) /*0x728bd1*/
            {
              (*((void (__thiscall **)(FootClass *, _DWORD))this->?->TechnoClass + 73))(this->?, 0); /*0x728bda*/
              this->? = 4; /*0x728be0*/
            }
          }
          result = this->?; /*0x728be7*/
          if ( !result ) /*0x728bef*/
            this->? = 1; /*0x728bf1*/
        }
      }
    }
  }
  return result; /*0x728bf8*/
}



// ==== 0x00728C00  TunnelLocomotionClass::ProcessFormationPosition  this=TunnelLocomotionClass  sig=csp ====
void __stdcall TunnelLocomotionClass::ProcessFormationPosition(TunnelLocomotionClass *this)
{
  double v1; // st7
  int *CurrentState; // esi
  int v4; // eax
  int v5; // edx
  int TileIndex; // eax
  int v8; // eax
  double v9; // [esp+0h] [ebp-34h]
  __int16 v10[2]; // [esp+14h] [ebp-20h] BYREF
  __int16 v11[2]; // [esp+18h] [ebp-1Ch] BYREF
  __int16 v12[2]; // [esp+1Ch] [ebp-18h] BYREF
  _BYTE v13[4]; // [esp+20h] [ebp-14h] BYREF
  int v14; // [esp+24h] [ebp-10h] BYREF
  int v15; // [esp+28h] [ebp-Ch] BYREF
  int v16; // [esp+2Ch] [ebp-8h]
  int v17; // [esp+30h] [ebp-4h]
  TunnelLocomotionClass *thisa; // [esp+38h] [ebp+4h]
  unsigned __int16 this_2; // [esp+3Ah] [ebp+6h]

  switch ( this->? ) /*0x728c17*/
  {
    case 1: /*0x728c17*/
    case 5: /*0x728c17*/
    case 6: /*0x728c17*/
    case 7: /*0x728c17*/
      goto LABEL_11;
    case 2: /*0x728c17*/
      this->? = 7; /*0x728dd9*/
      goto LABEL_11; /*0x728dd9*/
    case 3: /*0x728c17*/
      this->? = 5; /*0x728dd0*/
LABEL_11:
      this->CurrentState[0] = *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[352]; /*0x728de0*/
      this->CurrentState[1] = *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[356]; /*0x728df0*/
      this->CurrentState[2] = *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[360]; /*0x728df9*/
      break; /*0x728df9*/
    case 4: /*0x728c17*/
      CurrentState = this->CurrentState; /*0x728c29*/
      v4 = this->?->?[0]; /*0x728c31*/
      v5 = this->?->?[2]; /*0x728c38*/
      v16 = this->?->?[1] - this->CurrentState[1]; /*0x728c3b*/
      __asm { fild [esp+34h+var_8] } /*0x728c3f*/
      v17 = v5; /*0x728c43*/
      v15 = v4 - this->CurrentState[0]; /*0x728c4b*/
      __asm /*0x728c4f*/
      {
        fild [esp+34h+var_C]
        fld st
        fmul st, st(1)
        fld st(2)
        fmul st, st(3)
        faddp st(1), st
        fstp [esp+34h+var_34]; double
        fstp st
        fstp st
      }
      Math::Sqrt(v9); /*0x728c64*/
      LOWORD(_EAX) = Math::RoundToInt(v1); /*0x728c6c*/
      thisa = _EAX; /*0x728c71*/
      __asm /*0x728c75*/
      {
        fild [esp+2Ch+this]
        fcomp dbl_B0F8F8
        fnstsw ax
      }
      if ( (BYTE1(_EAX) & 0x41) == 0 ) /*0x728c84*/
      {
        *(_DWORD *)v10 = *(_DWORD *)(*((int (__thiscall **)(FootClass *, _BYTE *))this->?->TechnoClass + 110))( /*0x728c9e*/
                                      this->?,
                                      v13);
        v11[0] = 0; /*0x728cc4*/
        v11[1] = 0; /*0x728cc9*/
        TileIndex = MapClass::GetTileIndex((MapClass *)&stru_87F5F0.__pad_58[416], v10, 0, 0); /*0x728cce*/
        v8 = *LayerClass::Pathfinding_Find( /*0x728cea*/
                (Type *)&stru_87F5F0.__pad_58[416],
                (int)&v14,
                &v14,
                v10,
                1,
                TileIndex,
                0,
                0,
                1,
                1,
                0,
                0,
                1,
                1,
                v11,
                0,
                0);
        this_2 = HIWORD(v8); /*0x728cf3*/
        if ( (_WORD)v8 != *(_WORD *)&g_BuildingLoadQueue_Array.__pad_F70[320] ) /*0x728cf7*/
          goto LABEL_8; /*0x728cf7*/
        if ( HIWORD(v8) == *(_WORD *)&g_BuildingLoadQueue_Array.__pad_F70[322] ) /*0x728d09*/
        {
          v12[0] = 0; /*0x728d33*/
          v12[1] = 0; /*0x728d38*/
          v8 = *LayerClass::Pathfinding_Find( /*0x728d42*/
                  (Type *)&stru_87F5F0.__pad_58[416],
                  (int)v12,
                  &v15,
                  v10,
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
                  v12,
                  0,
                  0);
          this_2 = HIWORD(v8); /*0x728d44*/
        }
        if ( __PAIR32__(this_2, v8) == *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[320] ) /*0x728d4f*/
        {
          (*((void (__stdcall **)(int *, _DWORD, _DWORD, _DWORD, int, int, _DWORD))this->?->TechnoClass + 91))( /*0x728d7c*/
            &this->?->?,
            0,
            *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 4008),
            0,
            1,
            1,
            0);
          *CurrentState = *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[352]; /*0x728d88*/
          this->CurrentState[1] = *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[356]; /*0x728d90*/
          this->CurrentState[2] = *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[360]; /*0x728d99*/
        }
        else
        {
LABEL_8:
          *CurrentState = ((__int16)v8 << 8) + 128; /*0x728dbf*/
          this->CurrentState[1] = ((__int16)this_2 << 8) + 128; /*0x728dc1*/
          this->CurrentState[2] = 0; /*0x728dc4*/
        }
      }
      break; /*0x728da1*/
    default:
      return;
  }
}



// ==== 0x00728E30  TunnelLocomotionClass::IdleStateMachine  this=TunnelLocomotionClass  sig=csp ====
char __userpurge InfantryClass::IdleStateMachine@<al>(TunnelLocomotionClass *this, int a2)
{
  AnimClass *v2; // edi
  int v3; // edi
  int v4; // eax
  int v5; // edi
  int *Owner; // eax
  AnimClass *v7; // eax
  int *location; // edx
  FootClass *v9; // ecx
  void (__stdcall **vtable0)(_DWORD); // edx
  int v11; // eax
  int v12; // edi
  FootClass *v13; // eax
  int v14; // edi
  FootClass *v15; // eax
  int *v16; // edx
  int *v17; // edx
  AnimClass *v19; // [esp+0h] [ebp-18h]
  int v20; // [esp+Ch] [ebp-Ch] BYREF
  int v21; // [esp+10h] [ebp-8h] BYREF
  int v22; // [esp+14h] [ebp-4h]
  int retaddr; // [esp+18h] [ebp+0h]
  int v24; // [esp+20h] [ebp+8h]

  if ( !(*(unsigned __int8 (__stdcall **)(TunnelLocomotionClass *))(*(_DWORD *)this->LocomotionClass + 16))(this) ) /*0x728e3b*/
    return 0; /*0x7291a0*/
  v19 = v2; /*0x728e49*/
  v3 = (*((int (__thiscall **)(FootClass *))this->?->TechnoClass + 114))(this->?); /*0x728e55*/
  v4 = (*((int (__thiscall **)(FootClass *))this->?->TechnoClass + 116))(this->?); /*0x728e59*/
  switch ( this->? ) /*0x728e6c*/
  {
    case 1: /*0x728e6c*/
      if ( v3 >= 0 ) /*0x728e75*/
        InfantryClass::ProcessTunnelMovement((InfantryClass *)((char *)this - 4)); /*0x728e86*/
      else
        this->? = 3; /*0x728e77*/
      break; /*0x728e7e*/
    case 2: /*0x728e6c*/
      if ( v3 >= 0 ) /*0x728e92*/
      {
        if ( !this->CurrentState[6] /*0x728ece*/
          || (v5 = this->CurrentState[6],
              (double)(v5 - Timeout::GetRemaining((Timeout *)&this->CurrentState[3])) / (double)v5 == 1.0) )
        {
          (*((void (__thiscall **)(FootClass *, _DWORD, int, AnimClass *))this->?->TechnoClass + 337))( /*0x728ee0*/
            this->?,
            0,
            1072693248,
            v19);
          Owner = (int *)this->?; /*0x728ee6*/
          this->? = 3; /*0x728ee9*/
          Owner += 39; /*0x728ef0*/
          v21 = *Owner; /*0x728ef9*/
          v22 = Owner[1]; /*0x728f06*/
          retaddr = Owner[2]; /*0x728f11*/
          StartAudioControllerAt(*(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 372), &v21, 0); /*0x728f1b*/
          v7 = (AnimClass *)__2_YAPAXI_Z(0x1C8u); /*0x728f25*/
          if ( v7 ) /*0x728f2f*/
          {
            location = this->?->?; /*0x728f36*/
            v21 = *location; /*0x728f49*/
            v22 = location[1]; /*0x728f50*/
            retaddr = location[2]; /*0x728f5c*/
            AnimClass::ctor( /*0x728f6f*/
              v7,
              *(void **)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 660),
              &v21,
              0,
              1,
              (void *)0x600,
              0,
              0);
          }
          (*((void (__thiscall **)(FootClass *, _DWORD))this->?->TechnoClass + 55))(this->?, 0); /*0x728f7b*/
        }
      }
      else
      {
        this->? = 3; /*0x728e94*/
      }
      break; /*0x728e9b*/
    case 3: /*0x728e6c*/
      v9 = this->?; /*0x728f86*/
      if ( v4 == -256 ) /*0x728f8e*/
      {
        (*((void (__thiscall **)(FootClass *, _DWORD))v9->TechnoClass + 73))(v9, 0); /*0x728f94*/
        this->? = 4; /*0x728f9a*/
      }
      else
      {
        v20 = v9->?[0]; /*0x728fb2*/
        v21 = v9->?[1]; /*0x728fb9*/
        v22 = v9->?[2]; /*0x728fc0*/
        vtable0 = (void (__stdcall **)(_DWORD))v9->TechnoClass; /*0x728fc4*/
        if ( v22 <= -256 ) /*0x728fcb*/
        {
          vtable0[73](0); /*0x729023*/
          this->? = 4; /*0x729029*/
        }
        else
        {
          v24 = ((int (__stdcall *)(AnimClass *))vtable0[334])(v19); /*0x728fd3*/
          LOWORD(v11) = Math::RoundToInt((double)v24 * *(double *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 32)); /*0x728fe3*/
          if ( v11 <= 5 ) /*0x728feb*/
            v11 = 5; /*0x728fed*/
          if ( retaddr - v11 < -256 ) /*0x729002*/
            retaddr = -256; /*0x729004*/
          (*((void (__thiscall **)(FootClass *, int *))this->?->TechnoClass + 109))(this->?, &v21); /*0x729016*/
        }
      }
      break; /*0x728fa1*/
    case 4: /*0x728e6c*/
      FindUnitPlacementTarget((ObjectClass *)((char *)this - 4)); /*0x729038*/
      break; /*0x72903d*/
    case 5: /*0x728e6c*/
      AnimClass::GetAnimation(v19, v3); /*0x729045*/
      break; /*0x72904a*/
    case 6: /*0x728e6c*/
      if ( !this->CurrentState[6] /*0x72907d*/
        || (v12 = this->CurrentState[6],
            (double)(v12 - Timeout::GetRemaining((Timeout *)&this->CurrentState[3])) / (double)v12 == 1.0) )
      {
        (*((void (__thiscall **)(FootClass *, int))this->?->TechnoClass + 99))(this->?, 2); /*0x729086*/
        v13 = this->?; /*0x72908c*/
        if ( v13->? ) /*0x72908f*/
        {
          if ( !v13->? && !v13->? ) /*0x7290a3*/
          {
            (*(void (__stdcall **)(TunnelLocomotionClass *))(*(_DWORD *)this->LocomotionClass + 72))(this); /*0x7290b2*/
            goto LABEL_32; /*0x7290b5*/
          }
        }
      }
      break; /*0x7290b5*/
    case 7: /*0x728e6c*/
      if ( !this->CurrentState[6] /*0x7290e5*/
        || (v14 = this->CurrentState[6],
            (double)(v14 - Timeout::GetRemaining((Timeout *)&this->CurrentState[3])) / (double)v14 == 1.0) )
      {
LABEL_32:
        this->? = 0; /*0x7290e7*/
        FootClass::ClearPathIndex(this->?); /*0x7290f1*/
      }
      break; /*0x7290f1*/
    default:
      break;
  }
  v15 = this->?; /*0x7290f6*/
  if ( v15->? ) /*0x7290fa*/
  {
    if ( !(unsigned __int8)House::IsHumanPlayer((House *)v15->?) ) /*0x72910e*/
    {
      v16 = this->?->?; /*0x72911a*/
      v20 = *v16; /*0x729122*/
      v21 = v16[1]; /*0x72912e*/
      v22 = v16[2]; /*0x72913a*/
      if ( (unsigned __int8)Cell::IsPassable(&v20) /*0x72917b*/
        || ((int)dword_A8B230->vtable0 & 0x1000) != 0
        && (v17 = this->?->?, v20 = *v17, v21 = v17[1], v22 = v17[2], (unsigned __int8)Game::Stub3((int)&v20)) )
      {
        (*((void (__thiscall **)(FootClass *))this->?->TechnoClass + 84))(this->?); /*0x729189*/
      }
    }
  }
  InfantryClass::ReleaseInfiltrators((InfantryClass *)this->?); /*0x729192*/
  return 1; /*0x729199*/
}



// ==== 0x007291D0  TunnelLocomotionClass::StubReturnZero_21  this=TunnelLocomotionClass  sig=csp ====
int __stdcall JumpjetLocomotionClass::StubReturnZero_21(TunnelLocomotionClass *this, char a2)
{
  if ( this->? == 4 ) /*0x7291d8*/
    return (a2 != 0) + 4; /*0x7291e5*/
  else
    return 0; /*0x7291eb*/
}



// ==== 0x007291F0  InfantryClass::ProcessTunnelMovement  this=InfantryClass  sig=csp ====
void **__thiscall InfantryClass::ProcessTunnelMovement(InfantryClass *this)
{
  double v1; // st7
  void **result; // eax
  int v4; // eax
  int v5; // ecx
  int v6; // edx
  void *NeedsSaveOrLink; // eax
  ObjectClass *v10; // eax
  int v11; // ecx
  int *v12; // edx
  int *v13; // ecx
  double v14; // [esp+0h] [ebp-30h]
  double v15; // [esp+8h] [ebp-28h]
  int v16; // [esp+18h] [ebp-18h]
  int v17; // [esp+1Ch] [ebp-14h] BYREF
  int v18; // [esp+20h] [ebp-10h] BYREF
  int v19; // [esp+24h] [ebp-Ch]
  int v20; // [esp+28h] [ebp-8h]

  result = (void **)TimerClass::Active((int)this->? + 904); /*0x7291ff*/
  if ( !(_BYTE)result ) /*0x729206*/
  {
    v4 = *((_DWORD *)this->? + 39); /*0x72921d*/
    v5 = *((_DWORD *)this->? + 40); /*0x72921f*/
    v20 = *((_DWORD *)this->? + 41); /*0x729225*/
    v6 = this->? - v4; /*0x72922c*/
    NeedsSaveOrLink = this->?; /*0x72922e*/
    v18 = v6; /*0x729231*/
    __asm { fild [esp+30h+var_10] } /*0x729237*/
    v16 = v5 - (_DWORD)NeedsSaveOrLink; /*0x72923d*/
    __asm /*0x729241*/
    {
      fstp [esp+30h+var_28]; double
      fild [esp+30h+var_18]
      fstp [esp+30h+var_30]; double
    }
    Math::CalcAngle(v14, v15); /*0x72924c*/
    __asm { fsub ds:dbl_7E2820 } /*0x729251*/
    __asm { fmul ds:dbl_7E2818 }
    LOWORD(v16) = Math::RoundToInt(v1); /*0x729276*/
    if ( (_WORD)v16 == *(_WORD *)ProgressTimer::GetValue((ProgressTimer *)((char *)this->? + 904), &v17) ) /*0x729284*/
    {
      _EAX = (*(int (__thiscall **)(void *))(*(_DWORD *)this->? + 132))(this->?); /*0x72929f*/
      __asm { fild dword ptr [eax+71Ch] } /*0x7292a5*/
      _ECX = *(_DWORD *)&DSurface_ViewBounds.__pad_FC[324]; /*0x7292ab*/
      __asm /*0x7292b1*/
      {
        fdivr ds:dbl_7F5B18
        fdiv qword ptr [ecx+20h]
      }
      LOWORD(v10) = Math::RoundToInt(v1); /*0x7292ba*/
      v11 = *(_DWORD *)&stru_A8EB00.?[416]; /*0x7292bf*/
      this->? = 2; /*0x7292c8*/
      this->? = v11; /*0x7292d1*/
      this->? = v19; /*0x7292d7*/
      this->? = v10; /*0x7292da*/
      this->? = (TagClass *)v10; /*0x7292dd*/
      v12 = (int *)((char *)this->? + 156); /*0x7292e3*/
      v18 = *v12; /*0x7292eb*/
      v19 = v12[1]; /*0x7292f7*/
      v20 = v12[2]; /*0x7292fe*/
      StartAudioControllerAt(*(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 372), &v18, 0); /*0x72930c*/
      result = (void **)__2_YAPAXI_Z(0x1C8u); /*0x729316*/
      if ( result ) /*0x729320*/
      {
        v13 = (int *)((char *)this->? + 156); /*0x729327*/
        v18 = *v13; /*0x72933a*/
        v19 = v13[1]; /*0x729341*/
        v20 = v13[2]; /*0x72934d*/
        result = AnimClass::ctor( /*0x729360*/
                   (AnimClass *)result,
                   *(void **)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 660),
                   &v18,
                   0,
                   1,
                   (void *)0x600,
                   0,
                   0);
      }
      LOBYTE(this->?) = 0; /*0x729365*/
    }
    else
    {
      return (*((void **(__stdcall **)(void **, int))this->? + 19))(&this->?, v16); /*0x729292*/
    }
  }
  return result; /*0x729295*/
}



// ==== 0x00729370  AnimClass::ProcessSequence  this=AnimClass  sig=csp ====
void __thiscall AnimClass::ProcessSequence(AnimClass *this)
{
  int v2; // edi
  int v3; // edx
  int v4; // eax
  int *v5; // ecx
  AnimClass *v6; // eax
  int *v7; // ecx
  int v8; // [esp+10h] [ebp-Ch] BYREF
  int v9; // [esp+14h] [ebp-8h]
  int v10; // [esp+18h] [ebp-4h]

  v2 = *(_DWORD *)this->__pad_34; /*0x729377*/
  if ( !v2 ) /*0x729380*/
    goto LABEL_7; /*0x729380*/
  v3 = *(_DWORD *)this->__pad_28; /*0x729382*/
  v4 = this->AnimClass_field_0x30[0]; /*0x729385*/
  if ( v3 != -1 ) /*0x72938b*/
  {
    if ( *(_DWORD *)&stru_A8EB00.?[416] - v3 >= v4 ) /*0x729397*/
      v4 = 0; /*0x72939d*/
    else
      v4 -= *(_DWORD *)&stru_A8EB00.?[416] - v3; /*0x729399*/
  }
  if ( (double)(v2 - v4) / (double)*(int *)this->__pad_34 == 1.0 ) /*0x7293b8*/
  {
LABEL_7:
    (*(void (__thiscall **)(_DWORD, _DWORD, int))(**(_DWORD **)this->__pad_C + 1348))( /*0x7293ca*/
      *(_DWORD *)this->__pad_C,
      0,
      1072693248);
    v5 = *(int **)this->__pad_C; /*0x7293d0*/
    *(_DWORD *)this->__pad_18 = 3; /*0x7293d3*/
    v5 += 39; /*0x7293da*/
    v8 = *v5; /*0x7293e4*/
    v9 = v5[1]; /*0x7293ef*/
    v10 = v5[2]; /*0x7293fb*/
    StartAudioControllerAt(*(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 372), &v8, 0); /*0x729405*/
    v6 = (AnimClass *)__2_YAPAXI_Z(0x1C8u); /*0x72940f*/
    if ( v6 ) /*0x729419*/
    {
      v7 = (int *)(*(_DWORD *)this->__pad_C + 156); /*0x729420*/
      v8 = *v7; /*0x729433*/
      v9 = v7[1]; /*0x72943a*/
      v10 = v7[2]; /*0x729446*/
      AnimClass::ctor( /*0x729459*/
        v6,
        *(void **)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 660),
        &v8,
        0,
        1,
        (void *)0x600,
        0,
        0);
    }
    (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)this->__pad_C + 220))(*(_DWORD *)this->__pad_C, 0); /*0x729465*/
  }
}



// ==== 0x00729480  FootClass::Cleanup  this=FootClass  sig=csp ====
void __thiscall FootClass::Cleanup(FootClass *this)
{
  TagClass *attachedTag; // edi
  ObjectClass *nextObject; // eax
  int owningHouseIndex; // esi

  attachedTag = this->?; /*0x729484*/
  if ( !attachedTag ) /*0x72948d*/
    goto LABEL_7; /*0x72948d*/
  nextObject = this->?; /*0x72948f*/
  owningHouseIndex = this->?; /*0x729493*/
  if ( owningHouseIndex != -1 ) /*0x729499*/
  {
    if ( *(_DWORD *)&stru_A8EB00.?[416] - owningHouseIndex >= (int)nextObject ) /*0x7294a5*/
      nextObject = 0; /*0x7294ab*/
    else
      nextObject = (ObjectClass *)((char *)nextObject - (*(_DWORD *)&stru_A8EB00.?[416] - owningHouseIndex)); /*0x7294a7*/
  }
  if ( (double)((char *)attachedTag - (char *)nextObject) / (double)(int)this->? == 1.0 ) /*0x7294c7*/
  {
LABEL_7:
    this->? = 0; /*0x7294c9*/
    FootClass::ClearPathIndex((FootClass *)this->?); /*0x7294d3*/
  }
}



// ==== 0x007294E0  ObjectClass::method_7294E0  this=ObjectClass  sig=csp ====
int __thiscall sub_7294E0(ObjectClass *this)
{
  _DWORD *vtable3; // ecx
  int v3; // eax
  int result; // eax
  int v5; // [esp+4h] [ebp-10h]
  _DWORD v6[2]; // [esp+8h] [ebp-Ch] BYREF
  int v7; // [esp+10h] [ebp-4h]

  vtable3 = this->?; /*0x7294e6*/
  v6[0] = vtable3[39]; /*0x7294f5*/
  v6[1] = vtable3[40]; /*0x7294fc*/
  v7 = vtable3[41]; /*0x729508*/
  if ( v7 <= -256 ) /*0x72950c*/
  {
    result = (*(int (__thiscall **)(_DWORD *, _DWORD))(*vtable3 + 292))(vtable3, 0); /*0x729569*/
    this->? = 4; /*0x72956f*/
  }
  else
  {
    v5 = (*(int (__thiscall **)(_DWORD *))(*vtable3 + 1336))(vtable3); /*0x72951c*/
    LOWORD(v3) = Math::RoundToInt((double)v5 * *(double *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 32)); /*0x729527*/
    if ( v3 <= 5 ) /*0x72952f*/
      v3 = 5; /*0x729531*/
    v7 -= v3; /*0x729542*/
    if ( v7 < -256 ) /*0x729546*/
      v7 = -256; /*0x729548*/
    return (*(int (__thiscall **)(void *, _DWORD *))(*(_DWORD *)this->? + 436))(this->?, v6); /*0x72955a*/
  }
  return result; /*0x729560*/
}



// ==== 0x00729580  ObjectClass::FindUnitPlacementTarget  this=ObjectClass  sig=csp ====
int __thiscall FindUnitPlacementTarget(ObjectClass *this)
{
  int *v2; // eax
  int v3; // ecx
  int referenceCount; // eax
  double v5; // st7
  int v6; // eax
  int v7; // edx
  char *vtable3; // eax
  int v9; // edi
  CellClass *v10; // eax
  char *v11; // ecx
  int TileIndex; // eax
  int v13; // eax
  void *v14; // ecx
  __int64 v15; // rax
  char *v17; // eax
  void *v18; // ecx
  __int16 v19; // ax
  int v20; // edi
  unsigned int v21; // ebx
  void *v22; // eax
  int v23; // eax
  __int16 v24[4]; // [esp+1Ch] [ebp-34h] BYREF
  void *v25; // [esp+24h] [ebp-2Ch] BYREF
  double v26; // [esp+28h] [ebp-28h] BYREF
  double v27; // [esp+30h] [ebp-20h] BYREF
  int v28; // [esp+38h] [ebp-18h]
  int v29; // [esp+44h] [ebp-Ch] BYREF
  void *NeedsSaveOrLink; // [esp+48h] [ebp-8h]
  int v31; // [esp+4Ch] [ebp-4h]

  v2 = (int *)((char *)this->? + 156); /*0x729591*/
  v29 = *v2; /*0x729598*/
  NeedsSaveOrLink = (void *)v2[1]; /*0x72959f*/
  v3 = v2[2]; /*0x7295a3*/
  referenceCount = this->?; /*0x7295a6*/
  v31 = v3; /*0x7295a9*/
  HIDWORD(v27) = (char *)this->? - (char *)NeedsSaveOrLink; /*0x7295b4*/
  LODWORD(v27) = referenceCount - v29; /*0x7295bc*/
  v5 = Vector::TwoDMagnitudeMath((int *)&v27); /*0x7295c0*/
  if ( v6 >= 20 ) /*0x7295c8*/
  {
    LODWORD(v27) = this->? - v29; /*0x72981c*/
    Math::CalcAngle((double)((int)NeedsSaveOrLink - (unsigned int)this->?), (double)SLODWORD(v27)); /*0x72983f*/
    v19 = Math::RoundToInt(v5); /*0x729850*/
    v20 = v31; /*0x729866*/
    *(_DWORD *)v24 = v29; /*0x72986e*/
    v27 = (double)(v19 - 0x3FFF) * -0.00009587672516830327; /*0x729878*/
    v21 = HIDWORD(v27); /*0x729880*/
    v26 = (double)(int)NeedsSaveOrLink; /*0x72988a*/
    Math::SinCos(v27); /*0x72988e*/
    LOWORD(v22) = Math::RoundToInt(v5); /*0x72989d*/
    v25 = v22; /*0x7298a8*/
    Math::ArcTan2(COERCE_DOUBLE(__PAIR64__(v21, LODWORD(v27)))); /*0x7298ac*/
    LOWORD(v23) = Math::RoundToInt(v5 * 19.0 + (double)*(int *)v24); /*0x7298be*/
    v29 = v23; /*0x7298c7*/
    NeedsSaveOrLink = v25; /*0x7298cb*/
    v31 = v20; /*0x7298cf*/
  }
  else
  {
    v7 = this->?; /*0x7295d1*/
    NeedsSaveOrLink = this->?; /*0x7295d7*/
    vtable3 = (char *)this->?; /*0x7295db*/
    v29 = v7; /*0x7295de*/
    v31 = -256; /*0x7295e6*/
    v27 = *(double *)(vtable3 + 156); /*0x7295fd*/
    v28 = *((_DWORD *)vtable3 + 41); /*0x729612*/
    v9 = *(_DWORD *)vtable3; /*0x729616*/
    v10 = Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], &v27); /*0x72961d*/
    if ( (*(int (__usercall **)@<eax>(void *@<ecx>, CellClass *, int, int, _DWORD, int, double@<st0>))(v9 + 428))( /*0x72965b*/
           this->?,
           v10,
           -1,
           -1,
           0,
           1,
           v5)
      && (v11 = (char *)this->? + 156,
          v27 = *(double *)v11,
          v28 = *((_DWORD *)v11 + 2),
          (unsigned __int8)IsCoordVisibleMap((ObjectClass *)&stru_87F5F0.__pad_58[416], &v27)) )
    {
      *(_DWORD *)v24 = *(_DWORD *)(*(int (__thiscall **)(void *, void **))(*(_DWORD *)this->? + 440))(this->?, &v25); /*0x72967b*/
      v25 = 0; /*0x7296a0*/
      TileIndex = MapClass::GetTileIndex((MapClass *)&stru_87F5F0.__pad_58[416], v24, 0, 0); /*0x7296aa*/
      v13 = *LayerClass::Pathfinding_Find( /*0x7296c6*/
               (Type *)&stru_87F5F0.__pad_58[416],
               (int)&v26,
               &v26,
               v24,
               1,
               TileIndex,
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
      *(_DWORD *)v24 = v13; /*0x7296cf*/
      if ( (_WORD)v13 == *(_WORD *)&g_BuildingLoadQueue_Array.__pad_F70[320] ) /*0x7296d3*/
      {
        if ( v24[1] == *(_WORD *)&g_BuildingLoadQueue_Array.__pad_F70[322] ) /*0x7296e5*/
        {
          v14 = this->?; /*0x7296f3*/
          v25 = 0; /*0x729704*/
          v15 = ((__int64 (__thiscall *)(void *, double *))*(_DWORD *)(*(_DWORD *)v14 + 440))(v14, &v26); /*0x729715*/
          v13 = *LayerClass::Pathfinding_Find( /*0x72972b*/
                   (Type *)&stru_87F5F0.__pad_58[416],
                   SHIDWORD(v15),
                   &v27,
                   (__int16 *)v15,
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
          *(_DWORD *)v24 = v13; /*0x72972d*/
        }
        if ( (_WORD)v13 == *(_WORD *)&g_BuildingLoadQueue_Array.__pad_F70[320] /*0x729746*/
          && v24[1] == *(_WORD *)&g_BuildingLoadQueue_Array.__pad_F70[322] )
        {
          return (*(int (__thiscall **)(void *, char *, _DWORD, _DWORD, _DWORD, int, int, _DWORD))(*(_DWORD *)this->? /*0x729773*/
                                                                                                 + 364))(
                   this->?,
                   (char *)this->? + 108,
                   0,
                   *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 4008),
                   0,
                   1,
                   1,
                   0);
        }
      }
      v28 = 0; /*0x72977f*/
      (*((void (__stdcall **)(void **, int, int, _DWORD))this->? + 17))( /*0x7297a9*/
        &this->?,
        ((__int16)v13 << 8) + 128,
        (v24[1] << 8) + 128,
        0);
    }
    else
    {
      if ( (*(int (__thiscall **)(void *))(*(_DWORD *)this->? + 456))(this->?) > -50 ) /*0x7297bf*/
      {
        v17 = (char *)this->? + 156; /*0x7297c5*/
        v27 = *(double *)v17; /*0x7297cc*/
        v28 = *((_DWORD *)v17 + 2); /*0x7297e4*/
        StartAudioControllerAt(*(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 372), &v27, 0); /*0x7297ee*/
      }
      v18 = this->?; /*0x7297f3*/
      this->? = 5; /*0x7297f6*/
      (*(void (__thiscall **)(void *, int))(*(_DWORD *)v18 + 292))(v18, 1); /*0x729801*/
      LOBYTE(this->attachedBomb) = 0; /*0x729807*/
    }
  }
  return (*(int (__thiscall **)(void *, int *))(*(_DWORD *)this->? + 436))(this->?, &v29); /*0x72976d*/
}



// ==== 0x007298F0  AnimClass::GetAnimation  this=AnimClass  sig=csp ====
int __usercall AnimClass::GetAnimation@<eax>(AnimClass *this, int a2@<edi>)
{
  int v2; // ecx
  int v3; // esi
  int *v4; // eax
  int GroundHeight; // ebx
  int v6; // edi
  int v7; // eax
  int result; // eax
  int *v9; // eax
  int *v10; // edx
  int v11; // eax
  int v12; // eax
  int v13; // ecx
  int v14; // [esp+Ch] [ebp-1Ch] BYREF
  int v15; // [esp+10h] [ebp-18h] BYREF
  int v16; // [esp+14h] [ebp-14h]
  int v17; // [esp+18h] [ebp-10h] BYREF
  int v18; // [esp+1Ch] [ebp-Ch]
  int v19; // [esp+20h] [ebp-8h]

  v3 = v2; /*0x7298f5*/
  v4 = (int *)(*(_DWORD *)(v2 + 12) + 156); /*0x7298fa*/
  v14 = *v4; /*0x729901*/
  v15 = v4[1]; /*0x72990d*/
  v16 = v4[2]; /*0x729919*/
  GroundHeight = Cell::GetGroundHeight(&v14); /*0x729922*/
  if ( v16 >= GroundHeight ) /*0x72992a*/
  {
    (*(void (__thiscall **)(_DWORD, _DWORD, _DWORD))(**(_DWORD **)(v3 + 12) + 288))(*(_DWORD *)(v3 + 12), 0, 0); /*0x729a43*/
    v11 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(v3 + 12) + 132))(*(_DWORD *)(v3 + 12)); /*0x729a4e*/
    LOWORD(v12) = Math::RoundToInt(64.0 / (double)*(int *)(v11 + 1820)); /*0x729a60*/
    *(_DWORD *)(v3 + 40) = *(_DWORD *)&stru_A8EB00.?[416]; /*0x729a72*/
    *(_DWORD *)(v3 + 44) = v18; /*0x729a78*/
    v13 = *(_DWORD *)(v3 + 12); /*0x729a7b*/
    *(_DWORD *)(v3 + 48) = v12; /*0x729a7e*/
    *(_DWORD *)(v3 + 52) = v12; /*0x729a81*/
    result = (*(int (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)v13 + 1348))(v13, 0, 0); /*0x729a86*/
    *(_DWORD *)(v3 + 24) = 6; /*0x729a8c*/
  }
  else
  {
    v6 = (*(int (__thiscall **)(_DWORD, int))(**(_DWORD **)(v3 + 12) + 456))(*(_DWORD *)(v3 + 12), a2); /*0x72993f*/
    v14 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(v3 + 12) + 1336))(*(_DWORD *)(v3 + 12)); /*0x72994f*/
    LOWORD(v7) = Math::RoundToInt((double)v14 * *(double *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 32)); /*0x72995a*/
    if ( v7 <= 5 ) /*0x729962*/
      v7 = 5; /*0x729964*/
    v17 += v7; /*0x729971*/
    if ( v17 > GroundHeight ) /*0x729975*/
      v17 = GroundHeight; /*0x729977*/
    result = (*(int (__thiscall **)(_DWORD, int *))(**(_DWORD **)(v3 + 12) + 436))(*(_DWORD *)(v3 + 12), &v15); /*0x729985*/
    if ( v6 <= -50 ) /*0x72998f*/
    {
      result = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(v3 + 12) + 456))(*(_DWORD *)(v3 + 12)); /*0x72999a*/
      if ( result > -50 ) /*0x7299a3*/
      {
        v9 = (int *)(*(_DWORD *)(v3 + 12) + 156); /*0x7299ae*/
        v17 = *v9; /*0x7299b5*/
        v18 = v9[1]; /*0x7299c2*/
        v19 = v9[2]; /*0x7299cd*/
        StartAudioControllerAt(*(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 372), &v17, 0); /*0x7299d7*/
        result = __2_YAPAXI_Z(0x1C8u); /*0x7299e1*/
        if ( result ) /*0x7299eb*/
        {
          v10 = (int *)(*(_DWORD *)(v3 + 12) + 156); /*0x7299f6*/
          v17 = *v10; /*0x729a09*/
          v18 = v10[1]; /*0x729a10*/
          v19 = v10[2]; /*0x729a1c*/
          return (int)AnimClass::ctor( /*0x729a2f*/
                        (AnimClass *)result,
                        *(void **)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 660),
                        &v17,
                        0,
                        1,
                        (void *)0x600,
                        0,
                        0);
        }
      }
    }
  }
  return result; /*0x729a34*/
}



// ==== 0x00729AA0  FootClass::Process  this=FootClass  sig=csp ====
void __thiscall FootClass::Process(FootClass *this)
{
  TagClass *attachedTag; // edi
  int owningHouseIndex; // edx
  ObjectClass *nextObject; // eax
  _BYTE *vtable3; // eax
  FootClass *v6; // ecx

  attachedTag = this->?; /*0x729aa7*/
  if ( !attachedTag ) /*0x729ab0*/
    goto LABEL_7; /*0x729ab0*/
  owningHouseIndex = this->?; /*0x729ab2*/
  nextObject = this->?; /*0x729ab5*/
  if ( owningHouseIndex != -1 ) /*0x729abb*/
  {
    if ( *(_DWORD *)&stru_A8EB00.?[416] - owningHouseIndex >= (int)nextObject ) /*0x729ac7*/
      nextObject = 0; /*0x729acd*/
    else
      nextObject = (ObjectClass *)((char *)nextObject - (*(_DWORD *)&stru_A8EB00.?[416] - owningHouseIndex)); /*0x729ac9*/
  }
  if ( (double)((char *)attachedTag - (char *)nextObject) / (double)(int)this->? == 1.0 ) /*0x729ae8*/
  {
LABEL_7:
    (*(void (__thiscall **)(void *, int))(*(_DWORD *)this->? + 396))(this->?, 2); /*0x729af1*/
    vtable3 = this->?; /*0x729af7*/
    if ( vtable3[144] && !vtable3[129] && !vtable3[141] ) /*0x729b0e*/
    {
      (*((void (__stdcall **)(void **))this->? + 18))(&this->?); /*0x729b1f*/
      v6 = (FootClass *)this->?; /*0x729b22*/
      this->? = 0; /*0x729b25*/
      FootClass::ClearPathIndex(v6); /*0x729b2c*/
    }
  }
}



// ==== 0x00729B40  JumpjetLocomotionClass::ComputeTurretTransform  this=JumpjetLocomotionClass  sig=csp ====
void *__stdcall JumpjetLocomotionClass::ComputeTurretTransform(JumpjetLocomotionClass *this, void *a2, int *a3)
{
  int RefCount; // eax
  int *location; // eax
  int slopeIndex; // ebx
  float *v6; // eax
  float *v7; // eax
  float *v8; // esi
  void *result; // eax
  float *v10; // eax
  float Crash; // edx
  float Accel; // eax
  double v13; // st7
  float v14; // edx
  float v15; // eax
  double v16; // st7
  float v17; // edx
  float v18; // eax
  float *Transform; // eax
  int v20; // esi
  float v21; // [esp+0h] [ebp-14Ch]
  double v22; // [esp+14h] [ebp-138h] BYREF
  int v23; // [esp+1Ch] [ebp-130h]
  float Wobbles; // [esp+28h] [ebp-124h]
  Matrix3x4 v25; // [esp+2Ch] [ebp-120h] BYREF
  Transform v26[12]; // [esp+5Ch] [ebp-F0h] BYREF
  Transform v27[12]; // [esp+8Ch] [ebp-C0h] BYREF
  float v28[12]; // [esp+BCh] [ebp-90h] BYREF
  char v29[48]; // [esp+ECh] [ebp-60h] BYREF
  float v30[12]; // [esp+11Ch] [ebp-30h] BYREF

  RefCount = this->?; /*0x729b52*/
  if ( RefCount ) /*0x729b57*/
  {
    switch ( RefCount ) /*0x729c61*/
    {
      case 2: /*0x729c61*/
        if ( a3 ) /*0x729c94*/
          *a3 = -1; /*0x729c96*/
        *(float *)&v22 = this->Wobbles; /*0x729ca1*/
        if ( LODWORD(v22) ) /*0x729ca5*/
        {
          Crash = this->Crash; /*0x729cbc*/
          Accel = this->Accel; /*0x729cbf*/
          if ( Crash != NAN ) /*0x729cc5*/
          {
            if ( *(_DWORD *)&stru_A8EB00.?[416] - LODWORD(Crash) >= SLODWORD(Accel) ) /*0x729cd1*/
              Accel = 0.0; /*0x729cd7*/
            else
              LODWORD(Accel) -= *(_DWORD *)&stru_A8EB00.?[416] - LODWORD(Crash); /*0x729cd3*/
          }
          LODWORD(Wobbles) = LODWORD(v22) - LODWORD(Accel); /*0x729cdb*/
          v22 = (double)(LODWORD(v22) - LODWORD(Accel)) / (double)SLODWORD(v22) * 1.570796326794897; /*0x729ced*/
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
        Wobbles = this->Wobbles; /*0x729d05*/
        if ( Wobbles == 0.0 ) /*0x729d09*/
        {
          v13 = 1.0; /*0x729d0b*/
        }
        else
        {
          v14 = this->Crash; /*0x729d13*/
          v15 = this->Accel; /*0x729d16*/
          if ( v14 != NAN ) /*0x729d1c*/
          {
            if ( *(_DWORD *)&stru_A8EB00.?[416] - LODWORD(v14) >= SLODWORD(v15) ) /*0x729d28*/
              v15 = 0.0; /*0x729d2e*/
            else
              LODWORD(v15) -= *(_DWORD *)&stru_A8EB00.?[416] - LODWORD(v14); /*0x729d2a*/
          }
          v13 = (double)(LODWORD(Wobbles) - LODWORD(v15)) / (double)SLODWORD(Wobbles); /*0x729d3a*/
        }
        v22 = (1.0 - v13) * -1.570796326794897; /*0x729d4c*/
        break; /*0x729d52*/
      case 7: /*0x729c61*/
        if ( a3 ) /*0x729d56*/
          *a3 = -1; /*0x729d58*/
        Wobbles = this->Wobbles; /*0x729d63*/
        if ( Wobbles == 0.0 ) /*0x729d67*/
        {
          v16 = 1.0; /*0x729d69*/
        }
        else
        {
          v17 = this->Crash; /*0x729d71*/
          v18 = this->Accel; /*0x729d74*/
          if ( v17 != NAN ) /*0x729d7a*/
          {
            if ( *(_DWORD *)&stru_A8EB00.?[416] - LODWORD(v17) >= SLODWORD(v18) ) /*0x729d86*/
              v18 = 0.0; /*0x729d8c*/
            else
              LODWORD(v18) -= *(_DWORD *)&stru_A8EB00.?[416] - LODWORD(v17); /*0x729d88*/
          }
          v16 = (double)(LODWORD(Wobbles) - LODWORD(v18)) / (double)SLODWORD(Wobbles); /*0x729d98*/
        }
        v22 = (1.0 - v16) * 1.570796326794897; /*0x729daa*/
        break; /*0x729db0*/
      default:
        v22 = 0.0; /*0x729db2*/
        break; /*0x729db2*/
    }
    Transform = Turret::GetTransform((LocomotionClass *)this, v28, a3); /*0x729dcc*/
    Transform::Copy(v27, Transform); /*0x729dd9*/
    if ( a3 && *a3 != -1 ) /*0x729de7*/
    {
      v20 = *a3; /*0x729de2*/
      *a3 = (v20 << 8) | Math::RoundToInt(v22 * 32.0) & 0x3F; /*0x729e00*/
    }
    v21 = v22; /*0x729e0e*/
    Matrix3D::RotateZ(&v27[0].Transform_field_00, v21); /*0x729e11*/
    qmemcpy(a2, v27, 0x30u); /*0x729e27*/
    return a2; /*0x729e16*/
  }
  else
  {
    location = this->?->?; /*0x729b60*/
    v22 = *(double *)location; /*0x729b67*/
    v23 = location[2]; /*0x729b7f*/
    slopeIndex = (unsigned __int8)Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], &v22)->slopeIndex; /*0x729b8d*/
    if ( a3 && *a3 != -1 ) /*0x729b9c*/
      *a3 = slopeIndex + (*a3 << 6); /*0x729ba3*/
    Matrix3x4::Identity(&v25); /*0x729ba9*/
    if ( slopeIndex ) /*0x729bb1*/
    {
      v6 = Turret::GetTransform((LocomotionClass *)this, v30, a3); /*0x729bbc*/
      Transform::Copy(v26, v6); /*0x729bc6*/
      v7 = (float *)CopyAudioData(v29, slopeIndex); /*0x729bd9*/
      v8 = MultiplyMatrix3x4(v28, v7, (float *)&v26[0].Transform_field_00); /*0x729bf1*/
      result = a2; /*0x729bf3*/
      qmemcpy(&v25, v8, sizeof(v25)); /*0x729bfa*/
    }
    else
    {
      v10 = Turret::GetTransform((LocomotionClass *)this, v28, a3); /*0x729c1b*/
      Transform::Copy(v26, v10); /*0x729c25*/
      result = a2; /*0x729c2a*/
      qmemcpy(&v25, v26, sizeof(v25)); /*0x729c3a*/
    }
    qmemcpy(a2, &v25, 0x30u); /*0x729c07*/
  }
  return result; /*0x729c09*/
}



// ==== 0x00729E50  TunnelLocomotionClass::ComputeBounceHeight  this=TunnelLocomotionClass  sig=csp ====
int __stdcall JumpjetLocomotionClass::ComputeBounceHeight(TunnelLocomotionClass *this)
{
  int *location; // eax
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
  TunnelLocomotionClass *thisa; // [esp+38h] [ebp+4h]

  location = this->?->?; /*0x729e5d*/
  v15[0] = *location; /*0x729e64*/
  v15[1] = location[1]; /*0x729e76*/
  GroundHeight = location[2]; /*0x729e82*/
  Coord::To_Screen((Coord *)g_TacticalClass_Instance, v15, &v11); /*0x729e86*/
  GroundHeight = Cell::GetGroundHeight(v15); /*0x729eaa*/
  Coord::To_Screen((Coord *)g_TacticalClass_Instance, v15, &v13); /*0x729eae*/
  v3 = this->CurrentState[6]; /*0x729eb7*/
  v10 = v3; /*0x729ebe*/
  v4 = v12 - v14; /*0x729ec2*/
  thisa = (TunnelLocomotionClass *)(v12 - v14); /*0x729ec6*/
  if ( v3 ) /*0x729eca*/
  {
    v5 = this->CurrentState[3]; /*0x729eda*/
    v6 = this->CurrentState[5]; /*0x729edd*/
    if ( v5 != -1 ) /*0x729ee3*/
    {
      if ( *(_DWORD *)&stru_A8EB00.?[416] - v5 >= v6 ) /*0x729eef*/
        v6 = 0; /*0x729ef5*/
      else
        v6 -= *(_DWORD *)&stru_A8EB00.?[416] - v5; /*0x729ef1*/
    }
    v9 = (double)(v3 - v6) / (double)v10; /*0x729f05*/
  }
  else
  {
    v9 = 1.0; /*0x729ecc*/
  }
  v7 = (unsigned __int8)((unsigned int)((*ProgressTimer::GetValue((ProgressTimer *)this->?->?, &v10) >> 7) + 1) >> 1); /*0x729f2a*/
  switch ( this->? ) /*0x729f39*/
  {
    case 2: /*0x729f39*/
      if ( v9 > 0.4 && !LOBYTE(this->CurrentState[7]) ) /*0x729f85*/
        LOBYTE(this->CurrentState[7]) = 1; /*0x729f8c*/
      if ( v7 <= 70 || v7 >= 140 ) /*0x729f9b*/
        LOWORD(result) = Math::RoundToInt((double)dword_844A9C * v9 + (double)(int)thisa); /*0x729fbc*/
      else
        result = dword_844A9C + v4; /*0x729fa3*/
      break; /*0x729fab*/
    case 3: /*0x729f39*/
      result = dword_844A9C + v4; /*0x729fd2*/
      break; /*0x729fdb*/
    case 4: /*0x729f39*/
      result = dword_844A9C + v4; /*0x729f46*/
      break; /*0x729f4f*/
    case 5: /*0x729f39*/
      result = v4 + dword_844A98; /*0x729fe3*/
      break; /*0x729feb*/
    case 6: /*0x729f39*/
      LOWORD(result) = Math::RoundToInt((1.0 - v9) * (double)dword_844A98 + (double)(int)thisa); /*0x729f66*/
      break; /*0x729f71*/
    default:
      result = JumpjetLocomotionClass::StubReturnFalse((LocomotionClass *)this); /*0x729fef*/
      break; /*0x729fef*/
  }
  return result; /*0x729f49*/
}



// ==== 0x0072A020  TunnelLocomotionClass::CheckStateWithOverride  this=TunnelLocomotionClass  sig=csp ====
int __stdcall JumpjetLocomotionClass::CheckStateWithOverride(TunnelLocomotionClass *this)
{
  int RefCount; // eax

  RefCount = this->?; /*0x72a024*/
  if ( RefCount == 3 || RefCount == 2 || RefCount == 7 || RefCount == 6 || RefCount == 5 ) /*0x72a03e*/
    return 2; /*0x72a049*/
  else
    return JumpjetLocomotionClass::CheckState((LocomotionClass *)this); /*0x72a041*/
}



// ==== 0x0072A060  JumpjetLocomotionClass::IsStateInRange  this=JumpjetLocomotionClass  sig=csp ====
bool __stdcall JumpjetLocomotionClass::IsStateInRange(JumpjetLocomotionClass *this)
{
  unsigned int RefCount; // eax

  RefCount = this->?; /*0x72a064*/
  return RefCount < 2 || RefCount == 7 || RefCount == 2 || RefCount == 6; /*0x72a081*/
}



// ==== 0x0072A090  JumpjetLocomotionClass::ConvertCoordToCell_3  this=JumpjetLocomotionClass  sig=csp ====
int __thiscall JumpjetLocomotionClass::ConvertCoordToCell_3(JumpjetLocomotionClass *this, int a2, void *a3)
{
  Cell *v3; // eax
  void *v5; // [esp+0h] [ebp-4h] BYREF

  v5 = this; /*0x72a090*/
  if ( stru_A8EB00.?[391] ) /*0x72a098*/
    return 0; /*0x72a098*/
  v5 = a3; /*0x72a0b3*/
  v3 = (Cell *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)&v5); /*0x72a0b8*/
  if ( (unsigned __int8)Cell::IsBuildableAdvanced(v3) ) /*0x72a0bf*/
    return 0; /*0x72a0d1*/
  else
    return 7; /*0x72a0c8*/
}



// ==== 0x0072A0E0  TunnelLocomotionClass::UpdateFacingDirection_4  this=TunnelLocomotionClass  sig=csp ====
char __stdcall JumpjetLocomotionClass::UpdateFacingDirection_4(TunnelLocomotionClass *this, int a2)
{
  return FacingClass::Update((char *)this->?->?, &a2); /*0x72a0ff*/
}



// ==== 0x0072A110  TunnelLocomotionClass::ddtor  this=TunnelLocomotionClass  sig=csp ====
int __stdcall TunnelLocomotionClass::ddtor(TunnelLocomotionClass *this, _DWORD *a2)
{
  if ( !a2 ) /*0x72a116*/
    return -2147467261; /*0x72a118*/
  *a2 = 1247291203; /*0x72a126*/
  a2[1] = 298948665; /*0x72a12e*/
  a2[2] = -1610610249; /*0x72a137*/
  a2[3] = unk_7E9A5C; /*0x72a140*/
  return 0; /*0x72a11d*/
}



// ==== 0x0072A150  TunnelLocomotionClass::BeginMove  this=TunnelLocomotionClass  sig=csp ====
int __stdcall TunnelLocomotionClass::BeginMove(TunnelLocomotionClass *this, int *a2)
{
  int result; // eax
  int v3; // edx

  result = SwizzleManager::SaveLoad((int *)this->LocomotionClass, a2); /*0x72a15b*/
  if ( result >= 0 ) /*0x72a164*/
  {
    if ( this ) /*0x72a168*/
    {
      *(_DWORD *)this->LocomotionClass = &LocomotionClass::`vftable'; /*0x72a16a*/
      *(_DWORD *)&this->LocomotionClass[4] = &LocomotionClass::`vftable'; /*0x72a170*/
      v3 = *(_DWORD *)&stru_A8EB00.?[416]; /*0x72a177*/
      this->CurrentState[6] = 0; /*0x72a17d*/
      this->CurrentState[4] = v3; /*0x72a180*/
      this->CurrentState[7] = 0; /*0x72a183*/
      *(_DWORD *)this->LocomotionClass = &TunnelLocomotionClass::`vftable'; /*0x72a186*/
      *(_DWORD *)&this->LocomotionClass[4] = &TunnelLocomotionClass::`vftable'; /*0x72a18c*/
    }
  }
  return result; /*0x72a193*/
}



// ==== 0x0072A1A0  TunnelLocomotionClass::ShortFunc_72A1A0  this=TunnelLocomotionClass  sig=csp ====
int __stdcall JumpjetLocomotionClass::ShortFunc_72A1A0(TunnelLocomotionClass *this)
{
  return this->? != 4 ? 2 : 0;
}



// ==== 0x0072A1C0  TunnelLocomotionClass::ShortFunc_72A1C0  this=TunnelLocomotionClass  sig=csp ====
int __stdcall JumpjetLocomotionClass::ShortFunc_72A1C0(TunnelLocomotionClass *this)
{
  int result; // eax

  result = JumpjetLocomotionClass::MissionStub11((IUnknown *)this); /*0x72a1c6*/
  if ( !result ) /*0x72a1cd*/
  {
    if ( this->? ) /*0x72a1cf*/
      return 7; /*0x72a1d6*/
  }
  return result; /*0x72a1db*/
}



// ==== 0x0072A1E0  TunnelLocomotionClass::ShortFunc_72A1E0  this=TunnelLocomotionClass  sig=csp ====
BOOL __stdcall JumpjetLocomotionClass::ShortFunc_72A1E0(TunnelLocomotionClass *this)
{
  int RefCount; // eax

  RefCount = this->?; /*0x72a1e4*/
  return RefCount == 5 || RefCount == 6; /*0x72a1f3*/
}



// ==== 0x0072A200  TunnelLocomotionClass::StubReturn60  this=TunnelLocomotionClass  sig=csp ====
int TunnelLocomotionClass::StubReturn60(TunnelLocomotionClass *this)
{
  return 60; /*0x72a205*/
}



// ==== 0x0072A210  TunnelLocomotionClass::ProcessMove  this=TunnelLocomotionClass  sig=csp ====
_DWORD *__thiscall TunnelLocomotionClass::ProcessMove(TunnelLocomotionClass *this, char a2)
{
  LocomotionClass::Construct((LocomotionClass *)this); /*0x72a213*/
  if ( (a2 & 1) != 0 ) /*0x72a21d*/
    __3_YAXPAX_Z(this); /*0x72a220*/
  return this->LocomotionClass; /*0x72a22a*/
}



// ==== 0x0072A230  sub_72A230  this=-  sig=ida-proto ====
int sub_72A230()
{
  dword_B0F960 = 0; /*0x72a232*/
  dword_B0F964 = 0; /*0x72a237*/
  dword_B0F968 = 0; /*0x72a23c*/
  dword_B0F96C = 0; /*0x72a241*/
  return 0; /*0x72a246*/
}



// ==== 0x0072A250  sub_72A250  this=-  sig=ida-proto ====
void sub_72A250()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x72a25c*/
  dbl_B0F978 = Math::Sqrt(v0 + v0); /*0x72a26e*/
}



// ==== 0x0072A280  sub_72A280  this=-  sig=ida-proto ====
void sub_72A280()
{
  dbl_B0F9C8 = dbl_B0F978 / 60.0; /*0x72a28c*/
}



// ==== 0x0072A2A0  sub_72A2A0  this=-  sig=ida-proto ====
void sub_72A2A0()
{
  dbl_B0F9B0 = 1.0 / dbl_B0F9C8; /*0x72a2ac*/
}



// ==== 0x0072A2C0  sub_72A2C0  this=-  sig=ida-proto ====
void sub_72A2C0()
{
  dbl_B0F9A8 = 0.0174532925199433 * 45.0; /*0x72a2cc*/
}



// ==== 0x0072A2E0  sub_72A2E0  this=-  sig=ida-proto ====
void sub_72A2E0()
{
  dbl_B0F980 = 0.0174532925199433 * 60.0; /*0x72a2ec*/
}



// ==== 0x0072A300  sub_72A300  this=-  sig=ida-proto ====
void sub_72A300()
{
  dbl_B0F958 = 0.0174532925199433 * 90.0; /*0x72a30c*/
}



// ==== 0x0072A320  sub_72A320  this=-  sig=ida-proto ====
__int64 sub_72A320()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_B0F958 - dbl_B0F980); /*0x72a332*/
  result = Math::RoundToInt(v0 * dbl_B0F978 * 0.5); /*0x72a346*/
  dword_B0F9D0 = result; /*0x72a34b*/
  return result; /*0x72a350*/
}



// ==== 0x0072A360  sub_72A360  this=-  sig=ida-proto ====
void sub_72A360()
{
  dbl_B0F988 = Math::ArcTan((double)dword_B0F9D0 * 0.00390625); /*0x72a377*/
}



// ==== 0x0072A390  sub_72A390  this=-  sig=ida-proto ====
void sub_72A390()
{
  dbl_B0F9A0 = Math::ArcTan((double)(2 * dword_B0F9D0) / dbl_B0F978); /*0x72a3b2*/
}



// ==== 0x0072A3C0  sub_72A3C0  this=-  sig=ida-proto ====
__int64 sub_72A3C0()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_B0F9D0) + 0.5); /*0x72a3db*/
  dword_B0F9C4 = result; /*0x72a3e0*/
  return result; /*0x72a3e6*/
}



// ==== 0x0072A3F0  sub_72A3F0  this=-  sig=ida-proto ====
int sub_72A3F0()
{
  word_B0F970 = 0; /*0x72a3f2*/
  word_B0F972 = 0; /*0x72a3f8*/
  return 0; /*0x72a3fe*/
}



// ==== 0x0072A400  sub_72A400  this=-  sig=ida-proto ====
int sub_72A400()
{
  dword_B0F990 = 0; /*0x72a402*/
  dword_B0F994 = 0; /*0x72a407*/
  dword_B0F998 = 0; /*0x72a40c*/
  return 0; /*0x72a411*/
}



// ==== 0x0072A420  sub_72A420  this=-  sig=ida-proto ====
int sub_72A420()
{
  dword_B0F9C0 = 0; /*0x72a425*/
  dword_B0F9B8 = 128; /*0x72a42f*/
  dword_B0F9BC = 128; /*0x72a434*/
  return 128; /*0x72a439*/
}



// ==== 0x0072A440  MessageListClass::clearMessages  this=TextLabelClass  sig=csp ====
int __thiscall MessageListClass::clearMessages(int this, int a2, int a3, int a4, int a5, int a6)
{
  GadgetClass::Construct((ShpButtonClass *)this, a3, a4, 1, 1, 0, 0); /*0x72a458*/
  *(_DWORD *)(this + 48) = a2; /*0x72a469*/
  *(_DWORD *)(this + 36) = 0; /*0x72a46c*/
  *(_DWORD *)(this + 40) = 0; /*0x72a46f*/
  *(_DWORD *)(this + 44) = a6; /*0x72a472*/
  *(_DWORD *)(this + 52) = a5; /*0x72a475*/
  *(_DWORD *)(this + 56) = -1; /*0x72a478*/
  *(_DWORD *)(this + 60) = 0; /*0x72a47f*/
  *(_BYTE *)(this + 64) = 0; /*0x72a482*/
  *(_BYTE *)(this + 65) = 0; /*0x72a485*/
  *(_DWORD *)(this + 68) = 0; /*0x72a488*/
  *(_DWORD *)(this + 72) = 0; /*0x72a48b*/
  *(_DWORD *)this = &TextLabelClass::`vftable'; /*0x72a48e*/
  return this; /*0x72a496*/
}



// ==== 0x0072A4A0  TextLabelClass::DrawTypewriterText  this=TextLabelClass  sig=csp ====
int __thiscall ObjectClass::DrawTypewriterText(TextLabelClass *this, int a2)
{
  int v3; // eax
  Color *v4; // edi
  int Instance; // eax
  int v6; // edx
  _DWORD *v7; // ebp
  int v8; // eax
  int v9; // eax
  int v10; // eax
  int v11; // edi
  int v12; // ebx
  DWORD Time; // eax
  int v14; // ecx
  int v15; // edx
  unsigned __int8 v16; // al
  int v18; // [esp-8h] [ebp-30h]
  _DWORD *v19; // [esp+Ch] [ebp-1Ch]
  int v20; // [esp+10h] [ebp-18h]
  int v21[2]; // [esp+18h] [ebp-10h] BYREF
  int v22; // [esp+20h] [ebp-8h]
  int v23; // [esp+24h] [ebp-4h]

  if ( this->__pad_40[0] ) /*0x72a4a8*/
    return 0; /*0x72a4a8*/
  if ( !GadgetClass::ClearState((GadgetClass *)this, a2) ) /*0x72a4b8*/
    return 0; /*0x72a4b8*/
  v3 = *(_DWORD *)&this->__pad_2C[8]; /*0x72a4cb*/
  if ( !*(_DWORD *)stru_B054D0.__tail_10 ) /*0x72a4d0*/
    return 0; /*0x72a4d0*/
  if ( v3 <= 0 || v3 >= *(int *)stru_B054D0.__tail_10 ) /*0x72a4dc*/
    v3 = 0; /*0x72a4de*/
  v4 = *(Color **)(*(_DWORD *)&stru_B054D0.m_1[3] + 4 * v3); /*0x72a4e6*/
  if ( !v4 ) /*0x72a4eb*/
    return 0; /*0x72a4eb*/
  Instance = TextRenderer::GetInstance(); /*0x72a4f4*/
  v6 = *(_DWORD *)&this->__pad_0[12]; /*0x72a4f9*/
  v7 = (_DWORD *)Instance; /*0x72a4fc*/
  v19 = (_DWORD *)Instance; /*0x72a501*/
  v21[1] = *(_DWORD *)&this->__pad_0[16]; /*0x72a505*/
  v8 = *(_DWORD *)&this->__pad_2C[12]; /*0x72a509*/
  v21[0] = v6; /*0x72a50e*/
  if ( v8 < 0 ) /*0x72a512*/
    v8 = (*(int (__thiscall **)(AudioStream *))(*(_DWORD *)g_DSurface_Hidden_2->__pad_0 + 124))(g_DSurface_Hidden_2); /*0x72a51c*/
  v22 = v8; /*0x72a525*/
  v23 = v7[7]; /*0x72a52c*/
  v9 = (*(int (__thiscall **)(AudioStream *))(*(_DWORD *)g_DSurface_Hidden_2->__pad_0 + 124))(g_DSurface_Hidden_2); /*0x72a532*/
  if ( v22 + v21[0] - v9 > 0 ) /*0x72a543*/
  {
    v22 = v9 - v21[0]; /*0x72a549*/
    if ( v9 - v21[0] <= 0 || v23 <= 0 ) /*0x72a559*/
      return 0; /*0x72a64e*/
  }
  v10 = Color::ConvertToRGB(v4 + 194, (int)&a2); /*0x72a56b*/
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
      PlayVocClass(*(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 1732), 0x2000, 1.0, 0); /*0x72a609*/
  }
  v18 = this->field_44; /*0x72a613*/
  v16 = (*(int (__thiscall **)(TextLabelClass *))(*(_DWORD *)this->__pad_0 + 88))(this); /*0x72a61a*/
  DrawTextRendererMultiline( /*0x72a638*/
    g_DSurface_Hidden_2,
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
  GadgetClass::Dtor((GadgetClass *)this); /*0x72a673*/
  if ( (a2 & 1) != 0 ) /*0x72a67d*/
    __3_YAXPAX_Z(this); /*0x72a680*/
  return this->__pad_0; /*0x72a68a*/
}



// ==== 0x0072A690  sub_72A690  this=-  sig=ida-proto ====
int sub_72A690()
{
  dword_B0FA08 = 0; /*0x72a692*/
  dword_B0FA0C = 0; /*0x72a697*/
  dword_B0FA10 = 0; /*0x72a69c*/
  dword_B0FA14 = 0; /*0x72a6a1*/
  return 0; /*0x72a6a6*/
}



// ==== 0x0072A6B0  sub_72A6B0  this=-  sig=ida-proto ====
void sub_72A6B0()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x72a6bc*/
  dbl_B0FA28 = Math::Sqrt(v0 + v0); /*0x72a6ce*/
}



// ==== 0x0072A6E0  sub_72A6E0  this=-  sig=ida-proto ====
void sub_72A6E0()
{
  dbl_B0FB40 = dbl_B0FA28 / 60.0; /*0x72a6ec*/
}



// ==== 0x0072A700  sub_72A700  this=-  sig=ida-proto ====
void sub_72A700()
{
  dbl_B0FAF0 = 1.0 / dbl_B0FB40; /*0x72a70c*/
}



// ==== 0x0072A720  sub_72A720  this=-  sig=ida-proto ====
void sub_72A720()
{
  dbl_B0FAE0 = 0.0174532925199433 * 45.0; /*0x72a72c*/
}



// ==== 0x0072A740  sub_72A740  this=-  sig=ida-proto ====
void sub_72A740()
{
  dbl_B0FA40 = 0.0174532925199433 * 60.0; /*0x72a74c*/
}



// ==== 0x0072A760  sub_72A760  this=-  sig=ida-proto ====
void sub_72A760()
{
  dbl_B0F9F0 = 0.0174532925199433 * 90.0; /*0x72a76c*/
}



// ==== 0x0072A780  sub_72A780  this=-  sig=ida-proto ====
__int64 sub_72A780()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_B0F9F0 - dbl_B0FA40); /*0x72a792*/
  result = Math::RoundToInt(v0 * dbl_B0FA28 * 0.5); /*0x72a7a6*/
  dword_B0FB58 = result; /*0x72a7ab*/
  return result; /*0x72a7b0*/
}



// ==== 0x0072A7C0  sub_72A7C0  this=-  sig=ida-proto ====
void sub_72A7C0()
{
  dbl_B0FA58 = Math::ArcTan((double)dword_B0FB58 * 0.00390625); /*0x72a7d7*/
}



// ==== 0x0072A7F0  sub_72A7F0  this=-  sig=ida-proto ====
void sub_72A7F0()
{
  dbl_B0FAB0 = Math::ArcTan((double)(2 * dword_B0FB58) / dbl_B0FA28); /*0x72a812*/
}



// ==== 0x0072A820  sub_72A820  this=-  sig=ida-proto ====
__int64 sub_72A820()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_B0FB58) + 0.5); /*0x72a83b*/
  dword_B0FB38 = result; /*0x72a840*/
  return result; /*0x72a846*/
}



// ==== 0x0072A850  sub_72A850  this=-  sig=ida-proto ====
int sub_72A850()
{
  word_B0FA24 = 0; /*0x72a852*/
  word_B0FA26 = 0; /*0x72a858*/
  return 0; /*0x72a85e*/
}



// ==== 0x0072A860  sub_72A860  this=-  sig=ida-proto ====
int sub_72A860()
{
  dword_B0FA80 = 0; /*0x72a862*/
  dword_B0FA84 = 0; /*0x72a867*/
  dword_B0FA88 = 0; /*0x72a86c*/
  return 0; /*0x72a871*/
}



// ==== 0x0072A880  sub_72A880  this=-  sig=ida-proto ====
int sub_72A880()
{
  dword_B0FB28 = 0; /*0x72a885*/
  dword_B0FB20 = 128; /*0x72a88f*/
  dword_B0FB24 = 128; /*0x72a894*/
  return 128; /*0x72a899*/
}



// ==== 0x0072A8A0  sub_72A8A0  this=-  sig=ida-proto ====
char sub_72A8A0()
{
  byte_B0FB4E = 0; /*0x72a8a2*/
  byte_B0FB4C = -1; /*0x72a8a9*/
  byte_B0FB4D = -1; /*0x72a8ae*/
  return -1; /*0x72a8b3*/
}



// ==== 0x0072A8C0  sub_72A8C0  this=-  sig=ida-proto ====
char sub_72A8C0()
{
  byte_B0FA94 = 72; /*0x72a8c2*/
  word_B0FA95 = 0; /*0x72a8c9*/
  return 0; /*0x72a8d3*/
}



// ==== 0x0072A8E0  sub_72A8E0  this=-  sig=ida-proto ====
void sub_72A8E0()
{
  byte_B0F9FC = 0; /*0x72a8e0*/
  word_B0F9FD = 30034; /*0x72a8e7*/
}



// ==== 0x0072A900  sub_72A900  this=-  sig=ida-proto ====
char sub_72A900()
{
  byte_B0FB14 = 72; /*0x72a902*/
  word_B0FB15 = 0; /*0x72a909*/
  return 0; /*0x72a913*/
}



// ==== 0x0072A920  sub_72A920  this=-  sig=ida-proto ====
char sub_72A920()
{
  byte_B0FB19 = 72; /*0x72a922*/
  word_B0FB1A = 0; /*0x72a929*/
  return 0; /*0x72a933*/
}



// ==== 0x0072A940  sub_72A940  this=-  sig=ida-proto ====
void sub_72A940()
{
  word_B0F9D8 = -11612; /*0x72a940*/
  byte_B0F9DA = -1; /*0x72a94e*/
}



// ==== 0x0072A960  sub_72A960  this=-  sig=ida-proto ====
char sub_72A960()
{
  byte_B0FB06 = 0; /*0x72a962*/
  word_B0FB04 = -1; /*0x72a969*/
  return -1; /*0x72a973*/
}



// ==== 0x0072A980  sub_72A980  this=-  sig=ida-proto ====
char sub_72A980()
{
  byte_B0FAA2 = 0; /*0x72a982*/
  word_B0FAA0 = -1; /*0x72a989*/
  return -1; /*0x72a993*/
}



// ==== 0x0072A9A0  sub_72A9A0  this=-  sig=ida-proto ====
char sub_72A9A0()
{
  LOWORD(dword_B0FA1C) = 0; /*0x72a9a2*/
  BYTE2(dword_B0FA1C) = 0; /*0x72a9ac*/
  return 0; /*0x72a9b1*/
}



// ==== 0x0072A9C0  Copy8Bytes  this=Dialog  sig=csp ====
_DWORD *__fastcall Copy8Bytes(_DWORD *a1, int *a2)
{
  _DWORD *result; // eax
  int v3; // ecx
  int v4; // edx

  result = a1; /*0x72a9c0*/
  v3 = *a2; /*0x72a9c2*/
  v4 = a2[1]; /*0x72a9c4*/
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



// ==== 0x0072A9E0  Rect::Inflate  this=Rect  sig=csp ====
int __stdcall Rect::Inflate(LPRECT lprc, int dx, int dy)
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

  dword_B0FC80 = LoadFileSHP(off_844C44, (bool *)&byte_B0FC90); /*0x72aa5b*/
  dword_B0FC84 = LoadFileSHP(off_844C48, (bool *)&byte_B0FC91); /*0x72aa70*/
  dword_B0FC88 = LoadFileSHP(off_844C4C, (bool *)&byte_B0FC92); /*0x72aa85*/
  dword_B0FC8C = LoadFileSHP(off_844C50, (bool *)&byte_B0FC93); /*0x72aa9a*/
  dword_B0FACC = LoadFileSHP(off_844C54, (bool *)&byte_B0FC94); /*0x72aab4*/
  LoadPaletteSimple(off_844BA4, &dword_B0FB64, &dword_B0FB68); /*0x72aab9*/
  LoadPaletteSimple(off_844BA0, &dword_B0FB6C, &dword_B0FB70); /*0x72aace*/
  LoadPaletteSimple(off_844B9C, &dword_B0FB5C, &dword_B0FB60); /*0x72aae3*/
  LoadPaletteSimple(off_844BA8, &dword_B0FB74, &dword_B0FB78); /*0x72aaf8*/
  result = byte_B0FBE0; /*0x72aafd*/
  if ( !byte_B0FBE0 ) /*0x72ab04*/
  {
    AssetClass::ReleaseAndReload(); /*0x72ab0a*/
    dword_B0FAC4 = LoadFileSHP(off_844CD4, (bool *)&byte_B0FC95); /*0x72ab2a*/
    dword_B0F9DC = LoadFileSHP(off_844CD8, (bool *)&byte_B0FC96); /*0x72ab3f*/
    dword_B0FAC0 = LoadFileSHP(off_844CDC, (bool *)&byte_B0FC97); /*0x72ab54*/
    dword_B0FB50 = LoadFileSHP(off_844CE0, (bool *)&byte_B0FC98); /*0x72ab69*/
    dword_B0FA04 = LoadFileSHP(off_844CE4, (bool *)&byte_B0FC99); /*0x72ab7e*/
    dword_B0FAF8 = LoadFileSHP(off_844CE8, (bool *)&byte_B0FC9A); /*0x72ab93*/
    dword_B0FA74 = LoadFileSHP(off_844CEC, (bool *)&byte_B0FC9B); /*0x72aba8*/
    dword_B0FA38 = LoadFileSHP(off_844CF0, (bool *)&byte_B0FC9C); /*0x72abbd*/
    dword_B0FAE8 = LoadFileSHP(off_844CF4, (bool *)&byte_B0FC9D); /*0x72abd2*/
    dword_B0FA54 = LoadFileSHP(off_844CF8, (bool *)&byte_B0FC9E); /*0x72abec*/
    LoadPaletteSimple(off_844BE4, &dword_B0FBC8, &dword_B0FBCC); /*0x72abf1*/
    LoadPaletteSimple(off_844BE8, &dword_B0FBD0, &dword_B0FBD4); /*0x72ac06*/
    LoadPaletteSimple(off_844BEC, &dword_B0FBD8, &dword_B0FBDC); /*0x72ac1b*/
    result = (unsigned __int8)SetupMouseClassResources(g_DisplayWidth, MEMORY[0x8A00A8]); /*0x72ac2c*/
    byte_B0FBE0 = 1; /*0x72ac31*/
  }
  return result; /*0x72ac38*/
}



// ==== 0x0072AC40  WinMainSetup_Setup_72AC40  this=-  sig=ida-proto ====
void WinMainSetup_Setup_72AC40()
{
  ObjectClass *v0; // [esp+0h] [ebp-4h]
  LoadingScreen *v1; // [esp+0h] [ebp-4h]
  ObjectClass *v2; // [esp+0h] [ebp-4h]

  WinMainSetup_Setup_72AC40_Setup(); /*0x72ac41*/
  WinMainSetup_Setup_72AC40_Setup_72B230(v0); /*0x72ac46*/
  if ( g_BuildingLoadQueue_Array.__pad_F70[1072] ) /*0x72ac54*/
  {
    g_BuildingLoadQueue_Array.__pad_F70[1072] = 0; /*0x72ac5a*/
    LoadingScreen::DestroyFileTrees(); /*0x72ac60*/
    LoadingScreen::CleanupObjects(v1); /*0x72ac65*/
    __3_YAXPAX_Z(*(void **)&g_BuildingLoadQueue_Array.__pad_F70[1120]); /*0x72ac70*/
    *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[1120] = 0; /*0x72ac7b*/
    __3_YAXPAX_Z(*(void **)&g_BuildingLoadQueue_Array.__pad_F70[1124]); /*0x72ac82*/
    *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[1124] = 0; /*0x72ac8d*/
    __3_YAXPAX_Z(*(void **)&g_BuildingLoadQueue_Array.__pad_F70[1128]); /*0x72ac94*/
    *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[1128] = 0; /*0x72ac9e*/
    __3_YAXPAX_Z(*(void **)&g_BuildingLoadQueue_Array.__pad_F70[1132]); /*0x72aca5*/
    *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[1132] = 0; /*0x72acb0*/
    __3_YAXPAX_Z(*(void **)&g_BuildingLoadQueue_Array.__pad_F70[1136]); /*0x72acb7*/
    *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[1136] = 0; /*0x72acc2*/
    __3_YAXPAX_Z(*(void **)&g_BuildingLoadQueue_Array.__pad_F70[1140]); /*0x72acc9*/
    *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[1140] = 0; /*0x72acd3*/
    __3_YAXPAX_Z(*(void **)&g_BuildingLoadQueue_Array.__pad_F70[1144]); /*0x72acda*/
    *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[1144] = 0; /*0x72ace5*/
    __3_YAXPAX_Z(*(void **)&g_BuildingLoadQueue_Array.__pad_F70[1148]); /*0x72acec*/
    *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[1148] = 0; /*0x72acf4*/
    ReleaseLoadingResources(v2); /*0x72acfa*/
  }
  FileTree::CleanupAll(); /*0x72acff*/
  LoadingScreen::FreeResources(v1); /*0x72ad04*/
  LoadingScreen::FreeResources2(); /*0x72ad09*/
  g_BuildingLoadQueue_Array.__pad_F70[1116] = 0; /*0x72ad0e*/
}



// ==== 0x0072AD20  Display::GetViewport  this=ObjectPlacement  sig=csp ====
int *__thiscall Display::GetViewport(Display *this)
{
  int *result; // eax
  int v2; // ecx
  int v3; // edx
  int v4; // esi

  result = (int *)this; /*0x72ad29*/
  v2 = 0; /*0x72ad44*/
  if ( !byte_A8EB7C && !byte_A8ED6B ) /*0x72ad5e*/
    v2 = 168; /*0x72ad60*/
  v3 = dword_886FB8 - 168; /*0x72ad67*/
  v4 = dword_886FBC - 32; /*0x72ad6d*/
  *result = v2; /*0x72ad70*/
  result[1] = 0; /*0x72ad72*/
  result[2] = v3; /*0x72ad76*/
  result[3] = v4; /*0x72ad79*/
  return result; /*0x72ad75*/
}



// ==== 0x0072AD90  SidebarClass::calcSidebarRect  this=SidebarClass  sig=csp ====
int *__thiscall SidebarClass::calcSidebarRect(SidebarClass *this)
{
  int *result; // eax
  int v2; // ecx
  int v3; // edx
  int v4; // esi

  result = (int *)this; /*0x72ada4*/
  v2 = 0; /*0x72ada7*/
  if ( !LOBYTE(stru_A8EB00.ObjectTypeClass[31]) && !stru_A8EB00.?[391] ) /*0x72adb7*/
    v2 = 168; /*0x72adb9*/
  v3 = stru_A8EB00.ObjectTypeClass[33] - 168; /*0x72adc0*/
  v4 = stru_A8EB00.ObjectTypeClass[34] - 32; /*0x72adc6*/
  *result = v2; /*0x72adc9*/
  result[1] = 0; /*0x72adcb*/
  result[2] = v3; /*0x72adcf*/
  result[3] = v4; /*0x72add2*/
  return result; /*0x72adce*/
}



// ==== 0x0072ADE0  LoadPaletteSimple  this=BitFont  sig=csp ====
int __fastcall LoadPaletteSimple(char *Source, int *a2, _DWORD *a3)
{
  int *v3; // ebx
  char *v4; // ebp
  int v5; // eax
  _BYTE *v6; // ecx
  int v7; // edx
  _BYTE *v8; // eax
  int v9; // esi
  char v10; // dl
  int v11; // ecx
  ConvertClass *v12; // eax
  _DWORD *v13; // eax
  __int16 v15; // [esp+8h] [ebp-78h]
  CCFileClass v17; // [esp+14h] [ebp-6Ch] BYREF
  int v18[3]; // [esp+6Ch] [ebp-14h] BYREF
  int v19; // [esp+78h] [ebp-8h]

  v3 = a2; /*0x72ade5*/
  CCFileClass::Construct(&v17, Source); /*0x72adf0*/
  v4 = (char *)CCFileClass::ReadEntireFile(&v17); /*0x72adfe*/
  if ( v4 ) /*0x72ae06*/
  {
    v5 = __2_YAPAXI_Z(0x300u); /*0x72ae11*/
    if ( v5 ) /*0x72ae1b*/
    {
      v6 = (_BYTE *)(v5 + 2); /*0x72ae1d*/
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
      HIBYTE(v15) = 4 * *v8; /*0x72ae5d*/
      LOBYTE(v15) = 4 * *(v8 - 1); /*0x72ae64*/
      v10 = 4 * v8[1]; /*0x72ae6a*/
      v8 += 3; /*0x72ae80*/
      v11 = *v3 + 3 * (v9 % 256); /*0x72ae83*/
      ++v9; /*0x72ae8a*/
      *(_WORD *)v11 = v15; /*0x72ae91*/
      *(_BYTE *)(v11 + 2) = v10; /*0x72ae94*/
      if ( v9 >= 256 ) /*0x72ae97*/
        break; /*0x72ae97*/
      v3 = a2; /*0x72ae4e*/
    }
    __3_YAXPAX_Z(v4); /*0x72ae9e*/
    v12 = (ConvertClass *)__2_YAPAXI_Z(0x188u); /*0x72aea8*/
    if ( v12 ) /*0x72aeb4*/
      v13 = ConvertClass::Construct(v12, *a2, *a2, (int)DSurface_Alternate, 1, 0); /*0x72aecb*/
    else
      v13 = 0; /*0x72aed2*/
    *a3 = v13; /*0x72aedb*/
  }
  *(_DWORD *)v17.CDFileClass = &CCFileClass::`vftable'; /*0x72aee1*/
  v19 = 0; /*0x72aee9*/
  Vector::Clear((int)v18); /*0x72aef1*/
  *(_DWORD *)v17.CDFileClass = &off_7E1668; /*0x72aefa*/
  return BufferIOFileClass::Dtor((BufferIOFileClass *)&v17); /*0x72af07*/
}



// ==== 0x0072AFE0  sub_72AFE0  this=-  sig=ida-proto ====
void *sub_72AFE0()
{
  return dword_B0FB64; /*0x72afe5*/
}



// ==== 0x0072AFF0  UI_Draw_72AFF0  this=-  sig=ida-proto ====
int sub_72AFF0()
{
  return dword_B0FB68; /*0x72aff5*/
}



// ==== 0x0072B000  sub_72B000  this=-  sig=ida-proto ====
void *sub_72B000()
{
  return dword_B0FB6C; /*0x72b005*/
}



// ==== 0x0072B010  UI_Draw_72B010  this=-  sig=ida-proto ====
int sub_72B010()
{
  return dword_B0FB70; /*0x72b015*/
}



// ==== 0x0072B020  sub_72B020  this=-  sig=ida-proto ====
void *sub_72B020()
{
  return dword_B0FB5C; /*0x72b025*/
}



// ==== 0x0072B030  UI_Draw_72B030  this=-  sig=ida-proto ====
int sub_72B030()
{
  return dword_B0FB60; /*0x72b035*/
}



// ==== 0x0072B040  sub_72B040  this=-  sig=ida-proto ====
void *sub_72B040()
{
  return dword_B0FB74; /*0x72b045*/
}



// ==== 0x0072B050  UI_Helper_72B050  this=-  sig=ida-proto ====
int sub_72B050()
{
  return dword_B0FB78; /*0x72b055*/
}



// ==== 0x0072B130  WinMainSetup_Setup_72AC40_Setup  this=-  sig=csp ====
void sub_72B130()
{
  void *v0; // esi
  void *v1; // esi
  void *v2; // esi
  void *v3; // esi
  void *v4; // esi

  if ( byte_B0FC90 ) /*0x72b13b*/
  {
    v0 = dword_B0FC80; /*0x72b13d*/
    if ( dword_B0FC80 ) /*0x72b145*/
    {
      FileTreeNode::Destroy(dword_B0FC80); /*0x72b149*/
      __3_YAXPAX_Z(v0); /*0x72b14f*/
    }
    byte_B0FC90 = 0; /*0x72b157*/
  }
  dword_B0FC80 = 0; /*0x72b162*/
  if ( byte_B0FC91 ) /*0x72b16a*/
  {
    v1 = dword_B0FC84; /*0x72b16c*/
    if ( dword_B0FC84 ) /*0x72b174*/
    {
      FileTreeNode::Destroy(dword_B0FC84); /*0x72b178*/
      __3_YAXPAX_Z(v1); /*0x72b17e*/
    }
    byte_B0FC91 = 0; /*0x72b186*/
  }
  dword_B0FC84 = 0; /*0x72b191*/
  if ( byte_B0FC92 ) /*0x72b199*/
  {
    v2 = dword_B0FC88; /*0x72b19b*/
    if ( dword_B0FC88 ) /*0x72b1a3*/
    {
      FileTreeNode::Destroy(dword_B0FC88); /*0x72b1a7*/
      __3_YAXPAX_Z(v2); /*0x72b1ad*/
    }
    byte_B0FC92 = 0; /*0x72b1b5*/
  }
  dword_B0FC88 = 0; /*0x72b1c0*/
  if ( byte_B0FC93 ) /*0x72b1c8*/
  {
    v3 = dword_B0FC8C; /*0x72b1ca*/
    if ( dword_B0FC8C ) /*0x72b1d2*/
    {
      FileTreeNode::Destroy(dword_B0FC8C); /*0x72b1d6*/
      __3_YAXPAX_Z(v3); /*0x72b1dc*/
    }
    byte_B0FC93 = 0; /*0x72b1e4*/
  }
  dword_B0FC8C = 0; /*0x72b1ef*/
  if ( byte_B0FC94 ) /*0x72b1f7*/
  {
    v4 = dword_B0FACC; /*0x72b1f9*/
    if ( dword_B0FACC ) /*0x72b201*/
    {
      FileTreeNode::Destroy(dword_B0FACC); /*0x72b205*/
      __3_YAXPAX_Z(v4); /*0x72b20b*/
    }
    byte_B0FC94 = 0; /*0x72b213*/
  }
  dword_B0FACC = 0; /*0x72b219*/
}



// ==== 0x0072B230  ObjectClass::WinMainSetup_Setup_72AC40_Setup_72B230  this=ObjectClass  sig=csp ====
void WinMainSetup_Setup_72AC40_Setup_72B230(ObjectClass *this)
{
  if ( *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[956] ) /*0x72b23a*/
  {
    __3_YAXPAX_Z(*(void **)&g_BuildingLoadQueue_Array.__pad_F70[956]); /*0x72b23d*/
    *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[956] = 0; /*0x72b245*/
  }
  if ( *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[960] ) /*0x72b253*/
  {
    (***(void (__thiscall ****)(_DWORD, int))&g_BuildingLoadQueue_Array.__pad_F70[960])( /*0x72b259*/
      *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[960],
      3);
    *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[960] = 0; /*0x72b25b*/
  }
  if ( *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[948] ) /*0x72b268*/
  {
    __3_YAXPAX_Z(*(void **)&g_BuildingLoadQueue_Array.__pad_F70[948]); /*0x72b26b*/
    *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[948] = 0; /*0x72b273*/
  }
  if ( *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[952] ) /*0x72b281*/
  {
    (***(void (__thiscall ****)(_DWORD, int))&g_BuildingLoadQueue_Array.__pad_F70[952])( /*0x72b287*/
      *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[952],
      3);
    *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[952] = 0; /*0x72b289*/
  }
  if ( *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[940] ) /*0x72b296*/
  {
    __3_YAXPAX_Z(*(void **)&g_BuildingLoadQueue_Array.__pad_F70[940]); /*0x72b299*/
    *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[940] = 0; /*0x72b2a1*/
  }
  if ( *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[944] ) /*0x72b2af*/
  {
    (***(void (__thiscall ****)(_DWORD, int))&g_BuildingLoadQueue_Array.__pad_F70[944])( /*0x72b2b5*/
      *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[944],
      3);
    *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[944] = 0; /*0x72b2b7*/
  }
  if ( *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[964] ) /*0x72b2c4*/
  {
    __3_YAXPAX_Z(*(void **)&g_BuildingLoadQueue_Array.__pad_F70[964]); /*0x72b2c7*/
    *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[964] = 0; /*0x72b2cf*/
  }
  if ( *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[968] ) /*0x72b2dd*/
  {
    (***(void (__thiscall ****)(_DWORD, int))&g_BuildingLoadQueue_Array.__pad_F70[968])( /*0x72b2e3*/
      *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[968],
      3);
    *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[968] = 0; /*0x72b2e5*/
  }
}



// ==== 0x0072B2F0  LoadingScreen::GetBackgroundImage  this=LoadingScreen  sig=csp ====
char *__thiscall LoadingScreen::GetBackgroundImage(LoadingScreen *this, int a2)
{
  char *result; // eax

  result = off_844C34[0]; /*0x72b2f0*/
  if ( this != (LoadingScreen *)640 ) /*0x72b2fb*/
    return off_844C38[0]; /*0x72b2fd*/
  return result; /*0x72b302*/
}



// ==== 0x0072B310  LoadingScreen::GetOverlayImage  this=LoadingScreen  sig=csp ====
char *__thiscall LoadingScreen::GetOverlayImage(LoadingScreen *this, int a2)
{
  char *result; // eax

  result = off_844C3C[0]; /*0x72b310*/
  if ( this != (LoadingScreen *)640 ) /*0x72b31b*/
    return off_844C40[0]; /*0x72b31d*/
  return result; /*0x72b322*/
}



// ==== 0x0072B330  sub_72B330  this=-  sig=ida-proto ====
void *sub_72B330()
{
  return dword_B0FB7C; /*0x72b335*/
}



// ==== 0x0072B340  Render_Render_72B340  this=-  sig=ida-proto ====
int sub_72B340()
{
  return dword_B0FB80; /*0x72b345*/
}



// ==== 0x0072B350  sub_72B350  this=-  sig=ida-proto ====
void *sub_72B350()
{
  return dword_B0FB84; /*0x72b355*/
}



// ==== 0x0072B360  Render_Render_72B360  this=-  sig=ida-proto ====
int sub_72B360()
{
  return dword_B0FB88; /*0x72b365*/
}



// ==== 0x0072B370  sub_72B370  this=-  sig=ida-proto ====
void *sub_72B370()
{
  return dword_B0FB8C; /*0x72b375*/
}



// ==== 0x0072B380  Map_Load_72B380  this=-  sig=ida-proto ====
int sub_72B380()
{
  return dword_B0FB90; /*0x72b385*/
}



// ==== 0x0072B390  LoadingScreen::ReleaseAnimObjects  this=LoadingScreen  sig=csp ====
int __thiscall sub_72B390(char *Source)
{
  if ( dword_B0FB88 ) /*0x72b39b*/
  {
    (**(void (__thiscall ***)(int, int))dword_B0FB88)(dword_B0FB88, 1); /*0x72b3a1*/
    dword_B0FB88 = 0; /*0x72b3a3*/
  }
  if ( dword_B0FB84 ) /*0x72b3b4*/
  {
    __3_YAXPAX_Z(dword_B0FB84); /*0x72b3b7*/
    dword_B0FB84 = 0; /*0x72b3bf*/
  }
  return LoadPaletteSimple(Source, &dword_B0FB84, &dword_B0FB88); /*0x72b3da*/
}



// ==== 0x0072B460  ObjectClass::LoadProgressMgr_Release  this=ObjectClass  sig=csp ====
void LoadProgressMgr_Release(ObjectClass *this)
{
  if ( *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[972] ) /*0x72b46a*/
  {
    __3_YAXPAX_Z(*(void **)&g_BuildingLoadQueue_Array.__pad_F70[972]); /*0x72b46d*/
    *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[972] = 0; /*0x72b475*/
  }
  if ( *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[976] ) /*0x72b483*/
  {
    (***(void (__thiscall ****)(_DWORD, int))&g_BuildingLoadQueue_Array.__pad_F70[976])( /*0x72b489*/
      *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[976],
      1);
    *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[976] = 0; /*0x72b48b*/
  }
  if ( *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[980] ) /*0x72b498*/
  {
    __3_YAXPAX_Z(*(void **)&g_BuildingLoadQueue_Array.__pad_F70[980]); /*0x72b49b*/
    *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[980] = 0; /*0x72b4a3*/
  }
  if ( *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[984] ) /*0x72b4b1*/
  {
    (***(void (__thiscall ****)(_DWORD, int))&g_BuildingLoadQueue_Array.__pad_F70[984])( /*0x72b4b7*/
      *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[984],
      1);
    *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[984] = 0; /*0x72b4b9*/
  }
  if ( *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[988] ) /*0x72b4c6*/
  {
    __3_YAXPAX_Z(*(void **)&g_BuildingLoadQueue_Array.__pad_F70[988]); /*0x72b4c9*/
    *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[988] = 0; /*0x72b4d1*/
  }
  if ( *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[992] ) /*0x72b4df*/
  {
    (***(void (__thiscall ****)(_DWORD, int))&g_BuildingLoadQueue_Array.__pad_F70[992])( /*0x72b4e5*/
      *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[992],
      1);
    *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[992] = 0; /*0x72b4e7*/
  }
}



// ==== 0x0072B4F0  sub_72B4F0  this=-  sig=ida-proto ====
void *sub_72B4F0()
{
  return dword_B0FB94; /*0x72b4f5*/
}



// ==== 0x0072B500  Render_Render_72B500  this=-  sig=ida-proto ====
int sub_72B500()
{
  return dword_B0FB98; /*0x72b505*/
}



// ==== 0x0072B510  sub_72B510  this=-  sig=ida-proto ====
void *sub_72B510()
{
  return dword_B0FB9C; /*0x72b515*/
}



// ==== 0x0072B520  Render_Render_72B520  this=-  sig=ida-proto ====
int sub_72B520()
{
  return dword_B0FBA0; /*0x72b525*/
}



// ==== 0x0072B530  PaletteManager::Load  this=PaletteManager  sig=csp ====
int PaletteManager::Load(PaletteManager *this, int a2)
{
  int v2; // ecx
  int v3; // edx
  int v4; // edi
  void (__thiscall ***v5)(_DWORD, int); // ecx
  int result; // eax

  v3 = *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[1464]; /*0x72b530*/
  v4 = v2; /*0x72b53d*/
  if ( *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[1464] == 1 ) /*0x72b53f*/
  {
    if ( !g_MenuStateFlags ) /*0x72b547*/
    {
      result = *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[1000]; /*0x72b64d*/
      goto LABEL_23; /*0x72b64d*/
    }
    v5 = *(void (__thiscall ****)(_DWORD, int))&g_BuildingLoadQueue_Array.__pad_F70[1008]; /*0x72b54d*/
    if ( *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[1008] ) /*0x72b555*/
    {
      (***(void (__thiscall ****)(_DWORD, _DWORD))&g_BuildingLoadQueue_Array.__pad_F70[1008])( /*0x72b55a*/
        *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[1008],
        *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[1464]);
      v5 = 0; /*0x72b55c*/
      *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[1008] = 0; /*0x72b55e*/
    }
    if ( *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[1004] ) /*0x72b56b*/
    {
      __3_YAXPAX_Z(*(void **)&g_BuildingLoadQueue_Array.__pad_F70[1004]); /*0x72b56e*/
      v5 = *(void (__thiscall ****)(_DWORD, int))&g_BuildingLoadQueue_Array.__pad_F70[1008]; /*0x72b573*/
      *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[1004] = 0; /*0x72b57c*/
    }
    if ( *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[996] ) /*0x72b589*/
    {
      __3_YAXPAX_Z(*(void **)&g_BuildingLoadQueue_Array.__pad_F70[996]); /*0x72b58c*/
      v5 = *(void (__thiscall ****)(_DWORD, int))&g_BuildingLoadQueue_Array.__pad_F70[1008]; /*0x72b591*/
      *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[996] = 0; /*0x72b59a*/
    }
    result = *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[1000]; /*0x72b5a0*/
    if ( *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[1000] ) /*0x72b5a7*/
    {
      (***(void (__thiscall ****)(_DWORD, int))&g_BuildingLoadQueue_Array.__pad_F70[1000])( /*0x72b5af*/
        *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[1000],
        1);
      v5 = *(void (__thiscall ****)(_DWORD, int))&g_BuildingLoadQueue_Array.__pad_F70[1008]; /*0x72b5b1*/
      result = 0; /*0x72b5b7*/
      *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[1000] = 0; /*0x72b5b9*/
    }
  }
  else
  {
    result = *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[1000]; /*0x72b5c0*/
    v5 = *(void (__thiscall ****)(_DWORD, int))&g_BuildingLoadQueue_Array.__pad_F70[1008]; /*0x72b5c5*/
  }
  v3 = *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[1464]; /*0x72b5cb*/
  if ( *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[1464] != 2 || g_MenuStateFlags ) /*0x72b5e0*/
  {
LABEL_23:
    if ( result ) /*0x72b654*/
    {
      if ( v3 ) /*0x72b660*/
        return result; /*0x72b660*/
      goto LABEL_26; /*0x72b660*/
    }
    goto LABEL_24; /*0x72b654*/
  }
  if ( v5 ) /*0x72b5e4*/
  {
    (**v5)(v5, 1); /*0x72b5ea*/
    result = *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[1000]; /*0x72b5ec*/
    *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[1008] = 0; /*0x72b5f1*/
  }
  if ( *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[1004] ) /*0x72b5ff*/
  {
    __3_YAXPAX_Z(*(void **)&g_BuildingLoadQueue_Array.__pad_F70[1004]); /*0x72b602*/
    result = *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[1000]; /*0x72b607*/
    *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[1004] = 0; /*0x72b60f*/
  }
  if ( *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[996] ) /*0x72b61d*/
  {
    __3_YAXPAX_Z(*(void **)&g_BuildingLoadQueue_Array.__pad_F70[996]); /*0x72b620*/
    result = *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[1000]; /*0x72b625*/
    *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[996] = 0; /*0x72b62d*/
  }
  if ( result ) /*0x72b635*/
  {
    result = (**(int (__thiscall ***)(int, int))result)(result, 1); /*0x72b63d*/
    *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[1000] = 0; /*0x72b63f*/
    *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[1464] = 0; /*0x72b645*/
    goto LABEL_26; /*0x72b64b*/
  }
LABEL_24:
  *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[1464] = 0; /*0x72b656*/
LABEL_26:
  if ( g_MenuStateFlags ) /*0x72b66c*/
  {
    result = LoadPaletteSimple( /*0x72b67e*/
               off_844BC4,
               (int *)&g_BuildingLoadQueue_Array.__pad_F70[996],
               &g_BuildingLoadQueue_Array.__pad_F70[1000]);
    *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[1464] = 2; /*0x72b683*/
  }
  else if ( v4 ) /*0x72b692*/
  {
    if ( v4 == 1 ) /*0x72b6b9*/
    {
      result = LoadPaletteSimple( /*0x72b6cb*/
                 off_844C1C,
                 (int *)&g_BuildingLoadQueue_Array.__pad_F70[996],
                 &g_BuildingLoadQueue_Array.__pad_F70[1000]);
      *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[1464] = 1; /*0x72b6d0*/
    }
    else if ( v4 == 2 ) /*0x72b6dc*/
    {
      result = LoadPaletteSimple( /*0x72b6ee*/
                 off_844C10,
                 (int *)&g_BuildingLoadQueue_Array.__pad_F70[996],
                 &g_BuildingLoadQueue_Array.__pad_F70[1000]);
      *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[1464] = 1; /*0x72b6f3*/
    }
    else if ( v4 == 3 ) /*0x72b703*/
    {
      result = LoadPaletteSimple( /*0x72b715*/
                 off_844C14,
                 (int *)&g_BuildingLoadQueue_Array.__pad_F70[996],
                 &g_BuildingLoadQueue_Array.__pad_F70[1000]);
      *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[1464] = 1; /*0x72b71a*/
    }
    else if ( v4 == 4 ) /*0x72b72a*/
    {
      result = LoadPaletteSimple( /*0x72b73c*/
                 off_844C28,
                 (int *)&g_BuildingLoadQueue_Array.__pad_F70[996],
                 &g_BuildingLoadQueue_Array.__pad_F70[1000]);
      *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[1464] = 1; /*0x72b741*/
    }
    else if ( v4 == 5 ) /*0x72b751*/
    {
      result = LoadPaletteSimple( /*0x72b763*/
                 off_844C20,
                 (int *)&g_BuildingLoadQueue_Array.__pad_F70[996],
                 &g_BuildingLoadQueue_Array.__pad_F70[1000]);
      *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[1464] = 1; /*0x72b768*/
    }
    else if ( v4 == 6 ) /*0x72b778*/
    {
      result = LoadPaletteSimple( /*0x72b78a*/
                 off_844C18,
                 (int *)&g_BuildingLoadQueue_Array.__pad_F70[996],
                 &g_BuildingLoadQueue_Array.__pad_F70[1000]);
      *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[1464] = 1; /*0x72b78f*/
    }
    else if ( v4 == 7 ) /*0x72b79f*/
    {
      result = LoadPaletteSimple( /*0x72b7b1*/
                 off_844C2C,
                 (int *)&g_BuildingLoadQueue_Array.__pad_F70[996],
                 &g_BuildingLoadQueue_Array.__pad_F70[1000]);
      *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[1464] = 1; /*0x72b7b6*/
    }
    else if ( v4 == 8 ) /*0x72b7c6*/
    {
      result = LoadPaletteSimple( /*0x72b7d8*/
                 off_844C24,
                 (int *)&g_BuildingLoadQueue_Array.__pad_F70[996],
                 &g_BuildingLoadQueue_Array.__pad_F70[1000]);
      *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[1464] = 1; /*0x72b7dd*/
    }
    else
    {
      if ( v4 == 9 ) /*0x72b7ed*/
        result = LoadPaletteSimple( /*0x72b7ff*/
                   off_844C30,
                   (int *)&g_BuildingLoadQueue_Array.__pad_F70[996],
                   &g_BuildingLoadQueue_Array.__pad_F70[1000]);
      *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[1464] = 1; /*0x72b804*/
    }
  }
  else
  {
    result = LoadPaletteSimple( /*0x72b6a4*/
               off_844C0C,
               (int *)&g_BuildingLoadQueue_Array.__pad_F70[996],
               &g_BuildingLoadQueue_Array.__pad_F70[1000]);
    *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[1464] = 1; /*0x72b6a9*/
  }
  return result; /*0x72b68d*/
}



// ==== 0x0072B820  Palette::LoadFile  this=BitFont  sig=csp ====
int __thiscall Palette_LoadFile(char *Source)
{
  if ( dword_B0FBA0 ) /*0x72b82b*/
  {
    (**(void (__thiscall ***)(int, int))dword_B0FBA0)(dword_B0FBA0, 1); /*0x72b831*/
    dword_B0FBA0 = 0; /*0x72b833*/
  }
  if ( dword_B0FB9C ) /*0x72b844*/
  {
    __3_YAXPAX_Z(dword_B0FB9C); /*0x72b847*/
    dword_B0FB9C = 0; /*0x72b84f*/
  }
  return LoadPaletteSimple(Source, &dword_B0FB9C, &dword_B0FBA0); /*0x72b86a*/
}



// ==== 0x0072B870  ObjectClass::LoadProgressMgr_Release_72B870  this=ObjectClass  sig=csp ====
void LoadProgressMgr_Release_72B870(ObjectClass *this)
{
  if ( *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[1008] ) /*0x72b87b*/
  {
    (***(void (__thiscall ****)(_DWORD, int))&g_BuildingLoadQueue_Array.__pad_F70[1008])( /*0x72b881*/
      *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[1008],
      1);
    *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[1008] = 0; /*0x72b883*/
  }
  if ( *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[1004] ) /*0x72b890*/
  {
    __3_YAXPAX_Z(*(void **)&g_BuildingLoadQueue_Array.__pad_F70[1004]); /*0x72b893*/
    *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[1004] = 0; /*0x72b89b*/
  }
  if ( *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[996] ) /*0x72b8a8*/
  {
    __3_YAXPAX_Z(*(void **)&g_BuildingLoadQueue_Array.__pad_F70[996]); /*0x72b8ab*/
    *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[996] = 0; /*0x72b8b3*/
  }
  if ( *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[1000] ) /*0x72b8c1*/
  {
    (***(void (__thiscall ****)(_DWORD, int))&g_BuildingLoadQueue_Array.__pad_F70[1000])( /*0x72b8c7*/
      *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[1000],
      1);
    *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[1000] = 0; /*0x72b8c9*/
  }
}



// ==== 0x0072B8E0  DlgProcGameSetup_Setup  this=-  sig=ida-proto ====
char sub_72B8E0()
{
  char result; // al

  result = byte_B0FD5D; /*0x72b8e0*/
  if ( !byte_B0FD5D ) /*0x72b8e7*/
  {
    if ( g_DisplayWidth == 800 ) /*0x72b8f3*/
      dword_B0FB54 = LoadFileSHP(off_844DC4, (bool *)&byte_B0FD5C); /*0x72b905*/
    result = LoadPaletteSimple(off_844DC8, &dword_B0FD60, &dword_B0FD64); /*0x72b91a*/
    byte_B0FD5D = 1; /*0x72b91f*/
  }
  return result; /*0x72b926*/
}



// ==== 0x0072B930  ObjectClass::DlgProcGameSetup_Setup_72B930  this=ObjectClass  sig=csp ====
void DlgProcGameSetup_Setup_72B930(ObjectClass *this)
{
  void *v1; // esi

  if ( g_BuildingLoadQueue_Array.__pad_F70[1453] ) /*0x72b93a*/
  {
    if ( g_BuildingLoadQueue_Array.__pad_F70[1452] ) /*0x72b942*/
    {
      v1 = *(void **)&g_BuildingLoadQueue_Array.__pad_F70[932]; /*0x72b945*/
      if ( *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[932] ) /*0x72b94d*/
      {
        FileTreeNode::Destroy(*(FileTreeNode **)&g_BuildingLoadQueue_Array.__pad_F70[932]); /*0x72b951*/
        __3_YAXPAX_Z(v1); /*0x72b957*/
      }
      g_BuildingLoadQueue_Array.__pad_F70[1452] = 0; /*0x72b95f*/
    }
    *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[932] = 0; /*0x72b96b*/
    if ( *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[1456] ) /*0x72b973*/
    {
      __3_YAXPAX_Z(*(void **)&g_BuildingLoadQueue_Array.__pad_F70[1456]); /*0x72b976*/
      *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[1456] = 0; /*0x72b97e*/
    }
    if ( *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[1460] ) /*0x72b98c*/
    {
      (***(void (__thiscall ****)(_DWORD, int))&g_BuildingLoadQueue_Array.__pad_F70[1460])( /*0x72b992*/
        *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[1460],
        1);
      *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[1460] = 0; /*0x72b994*/
    }
  }
  g_BuildingLoadQueue_Array.__pad_F70[1453] = 0; /*0x72b99a*/
}



// ==== 0x0072B9B0  sub_72B9B0  this=-  sig=ida-proto ====
char sub_72B9B0()
{
  return byte_B0FD5D; /*0x72b9b5*/
}



// ==== 0x0072B9C0  sub_72B9C0  this=-  sig=ida-proto ====
void *sub_72B9C0()
{
  return dword_B0FD60; /*0x72b9c5*/
}



// ==== 0x0072B9D0  UI_Create_72B9D0  this=-  sig=ida-proto ====
int sub_72B9D0()
{
  return dword_B0FD64; /*0x72b9d5*/
}



// ==== 0x0072BAC0  WOLobby_Load  this=-  sig=ida-proto ====
char sub_72BAC0()
{
  char result; // al

  result = byte_B0FD51; /*0x72bac0*/
  if ( !byte_B0FD51 ) /*0x72bac7*/
  {
    if ( g_DisplayWidth == 800 ) /*0x72bad3*/
      dword_B0FB2C = LoadFileSHP(off_844DBC, (bool *)&byte_B0FD50); /*0x72bae5*/
    result = LoadPaletteSimple(off_844DC0, &dword_B0FD54, &dword_B0FD58); /*0x72bafa*/
    byte_B0FD51 = 1; /*0x72baff*/
  }
  return result; /*0x72bb06*/
}



// ==== 0x0072BB10  ObjectClass::WOLobby_Destroy  this=ObjectClass  sig=csp ====
void WOLobby_Destroy(ObjectClass *this)
{
  void *v1; // esi

  if ( g_BuildingLoadQueue_Array.__pad_F70[1441] ) /*0x72bb1a*/
  {
    if ( g_BuildingLoadQueue_Array.__pad_F70[1440] ) /*0x72bb22*/
    {
      v1 = *(void **)&g_BuildingLoadQueue_Array.__pad_F70[892]; /*0x72bb25*/
      if ( *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[892] ) /*0x72bb2d*/
      {
        FileTreeNode::Destroy(*(FileTreeNode **)&g_BuildingLoadQueue_Array.__pad_F70[892]); /*0x72bb31*/
        __3_YAXPAX_Z(v1); /*0x72bb37*/
      }
      g_BuildingLoadQueue_Array.__pad_F70[1440] = 0; /*0x72bb3f*/
    }
    *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[892] = 0; /*0x72bb4b*/
    if ( *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[1444] ) /*0x72bb53*/
    {
      __3_YAXPAX_Z(*(void **)&g_BuildingLoadQueue_Array.__pad_F70[1444]); /*0x72bb56*/
      *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[1444] = 0; /*0x72bb5e*/
    }
    if ( *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[1448] ) /*0x72bb6c*/
    {
      (***(void (__thiscall ****)(_DWORD, int))&g_BuildingLoadQueue_Array.__pad_F70[1448])( /*0x72bb72*/
        *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[1448],
        1);
      *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[1448] = 0; /*0x72bb74*/
    }
  }
  g_BuildingLoadQueue_Array.__pad_F70[1441] = 0; /*0x72bb7a*/
}



// ==== 0x0072BB90  sub_72BB90  this=-  sig=ida-proto ====
char sub_72BB90()
{
  return byte_B0FD51; /*0x72bb95*/
}



// ==== 0x0072BBA0  sub_72BBA0  this=-  sig=ida-proto ====
void *sub_72BBA0()
{
  return dword_B0FD54; /*0x72bba5*/
}



// ==== 0x0072BBB0  UI_Create_72BBB0  this=-  sig=ida-proto ====
int sub_72BBB0()
{
  return dword_B0FD58; /*0x72bbb5*/
}



// ==== 0x0072BCA0  LoginFlowWOL_Load  this=-  sig=ida-proto ====
char sub_72BCA0()
{
  char result; // al

  result = byte_B0FD45; /*0x72bca0*/
  if ( !byte_B0FD45 ) /*0x72bca7*/
  {
    if ( g_DisplayWidth == 800 ) /*0x72bcb3*/
      dword_B0FA98 = LoadFileSHP(off_844DB4, (bool *)&byte_B0FD44); /*0x72bcc5*/
    result = LoadPaletteSimple(off_844DB8, &dword_B0FD48, &dword_B0FD4C); /*0x72bcda*/
    byte_B0FD45 = 1; /*0x72bcdf*/
  }
  return result; /*0x72bce6*/
}



// ==== 0x0072BCF0  ObjectClass::LoginFlowWOL_Destroy  this=ObjectClass  sig=csp ====
void LoginFlowWOL_Destroy(ObjectClass *this)
{
  void *v1; // esi

  if ( g_BuildingLoadQueue_Array.__pad_F70[1429] ) /*0x72bcfa*/
  {
    if ( g_BuildingLoadQueue_Array.__pad_F70[1428] ) /*0x72bd02*/
    {
      v1 = *(void **)&g_BuildingLoadQueue_Array.__pad_F70[744]; /*0x72bd05*/
      if ( *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[744] ) /*0x72bd0d*/
      {
        FileTreeNode::Destroy(*(FileTreeNode **)&g_BuildingLoadQueue_Array.__pad_F70[744]); /*0x72bd11*/
        __3_YAXPAX_Z(v1); /*0x72bd17*/
      }
      g_BuildingLoadQueue_Array.__pad_F70[1428] = 0; /*0x72bd1f*/
    }
    *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[744] = 0; /*0x72bd2b*/
    if ( *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[1432] ) /*0x72bd33*/
    {
      __3_YAXPAX_Z(*(void **)&g_BuildingLoadQueue_Array.__pad_F70[1432]); /*0x72bd36*/
      *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[1432] = 0; /*0x72bd3e*/
    }
    if ( *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[1436] ) /*0x72bd4c*/
    {
      (***(void (__thiscall ****)(_DWORD, int))&g_BuildingLoadQueue_Array.__pad_F70[1436])( /*0x72bd52*/
        *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[1436],
        1);
      *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[1436] = 0; /*0x72bd54*/
    }
  }
  g_BuildingLoadQueue_Array.__pad_F70[1429] = 0; /*0x72bd5a*/
}



// ==== 0x0072BD70  sub_72BD70  this=-  sig=ida-proto ====
char sub_72BD70()
{
  return byte_B0FD45; /*0x72bd75*/
}



// ==== 0x0072BD80  sub_72BD80  this=-  sig=ida-proto ====
void *sub_72BD80()
{
  return dword_B0FD48; /*0x72bd85*/
}



// ==== 0x0072BD90  UI_Create_72BD90  this=-  sig=ida-proto ====
int sub_72BD90()
{
  return dword_B0FD4C; /*0x72bd95*/
}



// ==== 0x0072BE80  JoinLobbyWOL_Load  this=-  sig=ida-proto ====
char sub_72BE80()
{
  char result; // al

  result = byte_B0FD39; /*0x72be80*/
  if ( !byte_B0FD39 ) /*0x72be87*/
  {
    if ( g_DisplayWidth == 800 ) /*0x72be93*/
      dword_B0FA9C = LoadFileSHP(off_844DAC, (bool *)&byte_B0FD38); /*0x72bea5*/
    result = LoadPaletteSimple(off_844DB0, &dword_B0FD3C, &dword_B0FD40); /*0x72beba*/
    byte_B0FD39 = 1; /*0x72bebf*/
  }
  return result; /*0x72bec6*/
}



// ==== 0x0072BED0  ObjectClass::JoinLobbyWOL_Destroy  this=ObjectClass  sig=csp ====
void JoinLobbyWOL_Destroy(ObjectClass *this)
{
  void *v1; // esi

  if ( g_BuildingLoadQueue_Array.__pad_F70[1417] ) /*0x72beda*/
  {
    if ( g_BuildingLoadQueue_Array.__pad_F70[1416] ) /*0x72bee2*/
    {
      v1 = *(void **)&g_BuildingLoadQueue_Array.__pad_F70[748]; /*0x72bee5*/
      if ( *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[748] ) /*0x72beed*/
      {
        FileTreeNode::Destroy(*(FileTreeNode **)&g_BuildingLoadQueue_Array.__pad_F70[748]); /*0x72bef1*/
        __3_YAXPAX_Z(v1); /*0x72bef7*/
      }
      g_BuildingLoadQueue_Array.__pad_F70[1416] = 0; /*0x72beff*/
    }
    *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[748] = 0; /*0x72bf0b*/
    if ( *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[1420] ) /*0x72bf13*/
    {
      __3_YAXPAX_Z(*(void **)&g_BuildingLoadQueue_Array.__pad_F70[1420]); /*0x72bf16*/
      *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[1420] = 0; /*0x72bf1e*/
    }
    if ( *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[1424] ) /*0x72bf2c*/
    {
      (***(void (__thiscall ****)(_DWORD, int))&g_BuildingLoadQueue_Array.__pad_F70[1424])( /*0x72bf32*/
        *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[1424],
        1);
      *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[1424] = 0; /*0x72bf34*/
    }
  }
  g_BuildingLoadQueue_Array.__pad_F70[1417] = 0; /*0x72bf3a*/
}



// ==== 0x0072BF50  sub_72BF50  this=-  sig=ida-proto ====
char sub_72BF50()
{
  return byte_B0FD39; /*0x72bf55*/
}



// ==== 0x0072BF60  sub_72BF60  this=-  sig=ida-proto ====
void *sub_72BF60()
{
  return dword_B0FD3C; /*0x72bf65*/
}



// ==== 0x0072BF70  UI_Create_72BF70  this=-  sig=ida-proto ====
int sub_72BF70()
{
  return dword_B0FD40; /*0x72bf75*/
}



// ==== 0x0072C060  GameOptionsScreenWOL_Load  this=-  sig=ida-proto ====
char sub_72C060()
{
  char result; // al

  result = byte_B0FD2D; /*0x72c060*/
  if ( !byte_B0FD2D ) /*0x72c067*/
  {
    if ( g_DisplayWidth == 800 ) /*0x72c073*/
      dword_B0FA4C = LoadFileSHP(off_844DA4, (bool *)&byte_B0FD2C); /*0x72c085*/
    result = LoadPaletteSimple(off_844DA8, &dword_B0FD30, &dword_B0FD34); /*0x72c09a*/
    byte_B0FD2D = 1; /*0x72c09f*/
  }
  return result; /*0x72c0a6*/
}



// ==== 0x0072C0B0  ObjectClass::GameOptionsScreenWOL_Destroy  this=ObjectClass  sig=csp ====
void GameOptionsScreenWOL_Destroy(ObjectClass *this)
{
  void *v1; // esi

  if ( g_BuildingLoadQueue_Array.__pad_F70[1405] ) /*0x72c0ba*/
  {
    if ( g_BuildingLoadQueue_Array.__pad_F70[1404] ) /*0x72c0c2*/
    {
      v1 = *(void **)&g_BuildingLoadQueue_Array.__pad_F70[668]; /*0x72c0c5*/
      if ( *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[668] ) /*0x72c0cd*/
      {
        FileTreeNode::Destroy(*(FileTreeNode **)&g_BuildingLoadQueue_Array.__pad_F70[668]); /*0x72c0d1*/
        __3_YAXPAX_Z(v1); /*0x72c0d7*/
      }
      g_BuildingLoadQueue_Array.__pad_F70[1404] = 0; /*0x72c0df*/
    }
    *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[668] = 0; /*0x72c0eb*/
    if ( *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[1408] ) /*0x72c0f3*/
    {
      __3_YAXPAX_Z(*(void **)&g_BuildingLoadQueue_Array.__pad_F70[1408]); /*0x72c0f6*/
      *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[1408] = 0; /*0x72c0fe*/
    }
    if ( *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[1412] ) /*0x72c10c*/
    {
      (***(void (__thiscall ****)(_DWORD, int))&g_BuildingLoadQueue_Array.__pad_F70[1412])( /*0x72c112*/
        *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[1412],
        1);
      *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[1412] = 0; /*0x72c114*/
    }
  }
  g_BuildingLoadQueue_Array.__pad_F70[1405] = 0; /*0x72c11a*/
}



// ==== 0x0072C130  sub_72C130  this=-  sig=ida-proto ====
char sub_72C130()
{
  return byte_B0FD2D; /*0x72c135*/
}



// ==== 0x0072C140  sub_72C140  this=-  sig=ida-proto ====
void *sub_72C140()
{
  return dword_B0FD30; /*0x72c145*/
}



// ==== 0x0072C150  UI_Create_72C150  this=-  sig=ida-proto ====
int sub_72C150()
{
  return dword_B0FD34; /*0x72c155*/
}



// ==== 0x0072C240  CreateAccountWOL_Create  this=-  sig=ida-proto ====
char sub_72C240()
{
  char result; // al

  result = byte_B0FD21; /*0x72c240*/
  if ( !byte_B0FD21 ) /*0x72c247*/
  {
    if ( g_DisplayWidth == 800 ) /*0x72c253*/
      dword_B0FA30 = LoadFileSHP(off_844D9C, (bool *)&byte_B0FD20); /*0x72c265*/
    result = LoadPaletteSimple(off_844DA0, &dword_B0FD24, &dword_B0FD28); /*0x72c27a*/
    byte_B0FD21 = 1; /*0x72c27f*/
  }
  return result; /*0x72c286*/
}



// ==== 0x0072C290  ObjectClass::CreateAccountWOL_Create_72C290  this=ObjectClass  sig=csp ====
void CreateAccountWOL_Create_72C290(ObjectClass *this)
{
  void *v1; // esi

  if ( g_BuildingLoadQueue_Array.__pad_F70[1393] ) /*0x72c29a*/
  {
    if ( g_BuildingLoadQueue_Array.__pad_F70[1392] ) /*0x72c2a2*/
    {
      v1 = *(void **)&g_BuildingLoadQueue_Array.__pad_F70[640]; /*0x72c2a5*/
      if ( *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[640] ) /*0x72c2ad*/
      {
        FileTreeNode::Destroy(*(FileTreeNode **)&g_BuildingLoadQueue_Array.__pad_F70[640]); /*0x72c2b1*/
        __3_YAXPAX_Z(v1); /*0x72c2b7*/
      }
      g_BuildingLoadQueue_Array.__pad_F70[1392] = 0; /*0x72c2bf*/
    }
    *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[640] = 0; /*0x72c2cb*/
    if ( *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[1396] ) /*0x72c2d3*/
    {
      __3_YAXPAX_Z(*(void **)&g_BuildingLoadQueue_Array.__pad_F70[1396]); /*0x72c2d6*/
      *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[1396] = 0; /*0x72c2de*/
    }
    if ( *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[1400] ) /*0x72c2ec*/
    {
      (***(void (__thiscall ****)(_DWORD, int))&g_BuildingLoadQueue_Array.__pad_F70[1400])( /*0x72c2f2*/
        *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[1400],
        1);
      *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[1400] = 0; /*0x72c2f4*/
    }
  }
  g_BuildingLoadQueue_Array.__pad_F70[1393] = 0; /*0x72c2fa*/
}



// ==== 0x0072C310  sub_72C310  this=-  sig=ida-proto ====
char sub_72C310()
{
  return byte_B0FD21; /*0x72c315*/
}



// ==== 0x0072C320  sub_72C320  this=-  sig=ida-proto ====
void *sub_72C320()
{
  return dword_B0FD24; /*0x72c325*/
}



// ==== 0x0072C330  UI_Create_72C330  this=-  sig=ida-proto ====
int sub_72C330()
{
  return dword_B0FD28; /*0x72c335*/
}



// ==== 0x0072C420  CreateAccountWOL_Create_72C420  this=-  sig=ida-proto ====
char sub_72C420()
{
  char result; // al

  result = byte_B0FD15; /*0x72c420*/
  if ( !byte_B0FD15 ) /*0x72c427*/
  {
    if ( g_DisplayWidth == 800 ) /*0x72c433*/
      dword_B0FA64 = LoadFileSHP(off_844D94, (bool *)&byte_B0FD14); /*0x72c445*/
    result = LoadPaletteSimple(off_844D98, &dword_B0FD18, &dword_B0FD1C); /*0x72c45a*/
    byte_B0FD15 = 1; /*0x72c45f*/
  }
  return result; /*0x72c466*/
}



// ==== 0x0072C470  ObjectClass::CreateAccountWOL_Create_72C470  this=ObjectClass  sig=csp ====
void CreateAccountWOL_Create_72C470(ObjectClass *this)
{
  void *v1; // esi

  if ( g_BuildingLoadQueue_Array.__pad_F70[1381] ) /*0x72c47a*/
  {
    if ( g_BuildingLoadQueue_Array.__pad_F70[1380] ) /*0x72c482*/
    {
      v1 = *(void **)&g_BuildingLoadQueue_Array.__pad_F70[692]; /*0x72c485*/
      if ( *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[692] ) /*0x72c48d*/
      {
        FileTreeNode::Destroy(*(FileTreeNode **)&g_BuildingLoadQueue_Array.__pad_F70[692]); /*0x72c491*/
        __3_YAXPAX_Z(v1); /*0x72c497*/
      }
      g_BuildingLoadQueue_Array.__pad_F70[1380] = 0; /*0x72c49f*/
    }
    *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[692] = 0; /*0x72c4ab*/
    if ( *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[1384] ) /*0x72c4b3*/
    {
      __3_YAXPAX_Z(*(void **)&g_BuildingLoadQueue_Array.__pad_F70[1384]); /*0x72c4b6*/
      *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[1384] = 0; /*0x72c4be*/
    }
    if ( *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[1388] ) /*0x72c4cc*/
    {
      (***(void (__thiscall ****)(_DWORD, int))&g_BuildingLoadQueue_Array.__pad_F70[1388])( /*0x72c4d2*/
        *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[1388],
        1);
      *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[1388] = 0; /*0x72c4d4*/
    }
  }
  g_BuildingLoadQueue_Array.__pad_F70[1381] = 0; /*0x72c4da*/
}



// ==== 0x0072C4F0  sub_72C4F0  this=-  sig=ida-proto ====
char sub_72C4F0()
{
  return byte_B0FD15; /*0x72c4f5*/
}



// ==== 0x0072C500  sub_72C500  this=-  sig=ida-proto ====
void *sub_72C500()
{
  return dword_B0FD18; /*0x72c505*/
}



// ==== 0x0072C510  UI_Create_72C510  this=-  sig=ida-proto ====
int sub_72C510()
{
  return dword_B0FD1C; /*0x72c515*/
}



// ==== 0x0072C600  LoginFlowWOL_Load_72C600  this=-  sig=ida-proto ====
char sub_72C600()
{
  char result; // al

  result = byte_B0FD09; /*0x72c600*/
  if ( !byte_B0FD09 ) /*0x72c607*/
  {
    if ( g_DisplayWidth == 800 ) /*0x72c613*/
      dword_B0FB0C = LoadFileSHP(off_844D8C, (bool *)&byte_B0FD08); /*0x72c625*/
    result = LoadPaletteSimple(off_844D90, &dword_B0FD0C, &dword_B0FD10); /*0x72c63a*/
    byte_B0FD09 = 1; /*0x72c63f*/
  }
  return result; /*0x72c646*/
}



// ==== 0x0072C650  ObjectClass::LoginFlowWOL_Destroy_72C650  this=ObjectClass  sig=csp ====
void LoginFlowWOL_Destroy_72C650(ObjectClass *this)
{
  void *v1; // esi

  if ( g_BuildingLoadQueue_Array.__pad_F70[1369] ) /*0x72c65a*/
  {
    if ( g_BuildingLoadQueue_Array.__pad_F70[1368] ) /*0x72c662*/
    {
      v1 = *(void **)&g_BuildingLoadQueue_Array.__pad_F70[860]; /*0x72c665*/
      if ( *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[860] ) /*0x72c66d*/
      {
        FileTreeNode::Destroy(*(FileTreeNode **)&g_BuildingLoadQueue_Array.__pad_F70[860]); /*0x72c671*/
        __3_YAXPAX_Z(v1); /*0x72c677*/
      }
      g_BuildingLoadQueue_Array.__pad_F70[1368] = 0; /*0x72c67f*/
    }
    *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[860] = 0; /*0x72c68b*/
    if ( *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[1372] ) /*0x72c693*/
    {
      __3_YAXPAX_Z(*(void **)&g_BuildingLoadQueue_Array.__pad_F70[1372]); /*0x72c696*/
      *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[1372] = 0; /*0x72c69e*/
    }
    if ( *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[1376] ) /*0x72c6ac*/
    {
      (***(void (__thiscall ****)(_DWORD, int))&g_BuildingLoadQueue_Array.__pad_F70[1376])( /*0x72c6b2*/
        *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[1376],
        1);
      *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[1376] = 0; /*0x72c6b4*/
    }
  }
  g_BuildingLoadQueue_Array.__pad_F70[1369] = 0; /*0x72c6ba*/
}



// ==== 0x0072C6D0  sub_72C6D0  this=-  sig=ida-proto ====
char sub_72C6D0()
{
  return byte_B0FD09; /*0x72c6d5*/
}



// ==== 0x0072C6E0  sub_72C6E0  this=-  sig=ida-proto ====
void *sub_72C6E0()
{
  return dword_B0FD0C; /*0x72c6e5*/
}



// ==== 0x0072C6F0  UI_Create_72C6F0  this=-  sig=ida-proto ====
int sub_72C6F0()
{
  return dword_B0FD10; /*0x72c6f5*/
}



// ==== 0x0072C7E0  RunWOLMainLoop_Read_Read  this=-  sig=ida-proto ====
char sub_72C7E0()
{
  char result; // al

  result = byte_B0FCFD; /*0x72c7e0*/
  if ( !byte_B0FCFD ) /*0x72c7e7*/
  {
    if ( g_DisplayWidth == 800 ) /*0x72c7f3*/
      dword_B0F9E8 = LoadFileSHP(off_844D84, (bool *)&byte_B0FCFC); /*0x72c805*/
    result = LoadPaletteSimple(off_844D88, &dword_B0FD00, &dword_B0FD04); /*0x72c81a*/
    byte_B0FCFD = 1; /*0x72c81f*/
  }
  return result; /*0x72c826*/
}



// ==== 0x0072C830  ObjectClass::RunWOLMainLoop_Read_Read_72C830  this=ObjectClass  sig=csp ====
void RunWOLMainLoop_Read_Read_72C830(ObjectClass *this)
{
  void *v1; // esi

  if ( g_BuildingLoadQueue_Array.__pad_F70[1357] ) /*0x72c83a*/
  {
    if ( g_BuildingLoadQueue_Array.__pad_F70[1356] ) /*0x72c842*/
    {
      v1 = *(void **)&g_BuildingLoadQueue_Array.__pad_F70[568]; /*0x72c845*/
      if ( *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[568] ) /*0x72c84d*/
      {
        FileTreeNode::Destroy(*(FileTreeNode **)&g_BuildingLoadQueue_Array.__pad_F70[568]); /*0x72c851*/
        __3_YAXPAX_Z(v1); /*0x72c857*/
      }
      g_BuildingLoadQueue_Array.__pad_F70[1356] = 0; /*0x72c85f*/
    }
    *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[568] = 0; /*0x72c86b*/
    if ( *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[1360] ) /*0x72c873*/
    {
      __3_YAXPAX_Z(*(void **)&g_BuildingLoadQueue_Array.__pad_F70[1360]); /*0x72c876*/
      *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[1360] = 0; /*0x72c87e*/
    }
    if ( *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[1364] ) /*0x72c88c*/
    {
      (***(void (__thiscall ****)(_DWORD, int))&g_BuildingLoadQueue_Array.__pad_F70[1364])( /*0x72c892*/
        *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[1364],
        1);
      *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[1364] = 0; /*0x72c894*/
    }
  }
  g_BuildingLoadQueue_Array.__pad_F70[1357] = 0; /*0x72c89a*/
}



// ==== 0x0072C8B0  sub_72C8B0  this=-  sig=ida-proto ====
char sub_72C8B0()
{
  return byte_B0FCFD; /*0x72c8b5*/
}



// ==== 0x0072C8C0  sub_72C8C0  this=-  sig=ida-proto ====
void *sub_72C8C0()
{
  return dword_B0FD00; /*0x72c8c5*/
}



// ==== 0x0072C8D0  UI_Create_72C8D0  this=-  sig=ida-proto ====
int sub_72C8D0()
{
  return dword_B0FD04; /*0x72c8d5*/
}



// ==== 0x0072C9C0  System_Init_72C9C0  this=-  sig=ida-proto ====
char sub_72C9C0()
{
  char result; // al

  result = byte_B0FCF1; /*0x72c9c0*/
  if ( !byte_B0FCF1 ) /*0x72c9c7*/
  {
    if ( g_DisplayWidth == 800 ) /*0x72c9d3*/
      dword_B0FA60 = LoadFileSHP(off_844D7C, (bool *)&byte_B0FCF0); /*0x72c9e5*/
    result = LoadPaletteSimple(off_844D80, &dword_B0FCF4, &dword_B0FCF8); /*0x72c9fa*/
    byte_B0FCF1 = 1; /*0x72c9ff*/
  }
  return result; /*0x72ca06*/
}



// ==== 0x0072CA10  ObjectClass::System_Init_72CA10  this=ObjectClass  sig=csp ====
void System_Init_72CA10(ObjectClass *this)
{
  void *v1; // esi

  if ( g_BuildingLoadQueue_Array.__pad_F70[1345] ) /*0x72ca1a*/
  {
    if ( g_BuildingLoadQueue_Array.__pad_F70[1344] ) /*0x72ca22*/
    {
      v1 = *(void **)&g_BuildingLoadQueue_Array.__pad_F70[688]; /*0x72ca25*/
      if ( *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[688] ) /*0x72ca2d*/
      {
        FileTreeNode::Destroy(*(FileTreeNode **)&g_BuildingLoadQueue_Array.__pad_F70[688]); /*0x72ca31*/
        __3_YAXPAX_Z(v1); /*0x72ca37*/
      }
      g_BuildingLoadQueue_Array.__pad_F70[1344] = 0; /*0x72ca3f*/
    }
    *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[688] = 0; /*0x72ca4b*/
    if ( *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[1348] ) /*0x72ca53*/
    {
      __3_YAXPAX_Z(*(void **)&g_BuildingLoadQueue_Array.__pad_F70[1348]); /*0x72ca56*/
      *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[1348] = 0; /*0x72ca5e*/
    }
    if ( *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[1352] ) /*0x72ca6c*/
    {
      (***(void (__thiscall ****)(_DWORD, int))&g_BuildingLoadQueue_Array.__pad_F70[1352])( /*0x72ca72*/
        *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[1352],
        1);
      *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[1352] = 0; /*0x72ca74*/
    }
  }
  g_BuildingLoadQueue_Array.__pad_F70[1345] = 0; /*0x72ca7a*/
}



// ==== 0x0072CA90  sub_72CA90  this=-  sig=ida-proto ====
char sub_72CA90()
{
  return byte_B0FCF1; /*0x72ca95*/
}



// ==== 0x0072CAA0  sub_72CAA0  this=-  sig=ida-proto ====
void *sub_72CAA0()
{
  return dword_B0FCF4; /*0x72caa5*/
}



// ==== 0x0072CAB0  UI_Create_72CAB0  this=-  sig=ida-proto ====
int sub_72CAB0()
{
  return dword_B0FCF8; /*0x72cab5*/
}



// ==== 0x0072CBA0  ShowUIMessage_Show  this=-  sig=ida-proto ====
char sub_72CBA0()
{
  char result; // al

  result = byte_B0FC7C; /*0x72cba0*/
  if ( !byte_B0FC7C ) /*0x72cba7*/
  {
    dword_B0FAD0 = (int)LoadFileSHP(aWaitcyloShp, (bool *)&byte_B0FC73); /*0x72cbc7*/
    result = LoadPaletteSimple(aWaitcyloPal, &dword_B0FC74, &dword_B0FC78); /*0x72cbcc*/
    byte_B0FC7C = 1; /*0x72cbd1*/
  }
  return result; /*0x72cbd8*/
}



// ==== 0x0072CC60  sub_72CC60  this=-  sig=ida-proto ====
char sub_72CC60()
{
  return byte_B0FC7C; /*0x72cc65*/
}



// ==== 0x0072CC70  sub_72CC70  this=-  sig=ida-proto ====
int sub_72CC70()
{
  return dword_B0FC74; /*0x72cc75*/
}



// ==== 0x0072CC80  UI_Helper_72CC80  this=-  sig=ida-proto ====
int sub_72CC80()
{
  return dword_B0FC78; /*0x72cc85*/
}



// ==== 0x0072CD60  Network_Load_72CD60  this=-  sig=ida-proto ====
char sub_72CD60()
{
  char result; // al

  result = byte_B0FCE5; /*0x72cd60*/
  if ( !byte_B0FCE5 ) /*0x72cd67*/
  {
    if ( g_DisplayWidth == 800 ) /*0x72cd73*/
      dword_B0FAAC = LoadFileSHP(off_844D74, (bool *)&byte_B0FCE4); /*0x72cd85*/
    result = LoadPaletteSimple(off_844D78, &dword_B0FCE8, &dword_B0FCEC); /*0x72cd9a*/
    byte_B0FCE5 = 1; /*0x72cd9f*/
  }
  return result; /*0x72cda6*/
}



// ==== 0x0072CDB0  ObjectClass::Network_Destroy  this=ObjectClass  sig=csp ====
void Network_Destroy(ObjectClass *this)
{
  void *v1; // esi

  if ( g_BuildingLoadQueue_Array.__pad_F70[1333] ) /*0x72cdba*/
  {
    if ( g_BuildingLoadQueue_Array.__pad_F70[1332] ) /*0x72cdc2*/
    {
      v1 = *(void **)&g_BuildingLoadQueue_Array.__pad_F70[764]; /*0x72cdc5*/
      if ( *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[764] ) /*0x72cdcd*/
      {
        FileTreeNode::Destroy(*(FileTreeNode **)&g_BuildingLoadQueue_Array.__pad_F70[764]); /*0x72cdd1*/
        __3_YAXPAX_Z(v1); /*0x72cdd7*/
      }
      g_BuildingLoadQueue_Array.__pad_F70[1332] = 0; /*0x72cddf*/
    }
    *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[764] = 0; /*0x72cdeb*/
    if ( *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[1336] ) /*0x72cdf3*/
    {
      __3_YAXPAX_Z(*(void **)&g_BuildingLoadQueue_Array.__pad_F70[1336]); /*0x72cdf6*/
      *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[1336] = 0; /*0x72cdfe*/
    }
    if ( *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[1340] ) /*0x72ce0c*/
    {
      (***(void (__thiscall ****)(_DWORD, int))&g_BuildingLoadQueue_Array.__pad_F70[1340])( /*0x72ce12*/
        *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[1340],
        1);
      *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[1340] = 0; /*0x72ce14*/
    }
  }
  g_BuildingLoadQueue_Array.__pad_F70[1333] = 0; /*0x72ce1a*/
}



// ==== 0x0072CE30  sub_72CE30  this=-  sig=ida-proto ====
char sub_72CE30()
{
  return byte_B0FCE5; /*0x72ce35*/
}



// ==== 0x0072CE40  sub_72CE40  this=-  sig=ida-proto ====
void *sub_72CE40()
{
  return dword_B0FCE8; /*0x72ce45*/
}



// ==== 0x0072CE50  UI_Create_72CE50  this=-  sig=ida-proto ====
int sub_72CE50()
{
  return dword_B0FCEC; /*0x72ce55*/
}



// ==== 0x0072CF40  LoadingScreen::Init  this=Network  sig=ida-proto ====
char LoadingScreen_Init()
{
  char result; // al

  result = byte_B0FCD9; /*0x72cf40*/
  if ( !byte_B0FCD9 ) /*0x72cf47*/
  {
    if ( g_DisplayWidth == 800 ) /*0x72cf53*/
      dword_B0FA18 = LoadFileSHP(off_844D6C, (bool *)&byte_B0FCD8); /*0x72cf65*/
    result = LoadPaletteSimple(off_844D70, &dword_B0FCDC, &dword_B0FCE0); /*0x72cf7a*/
    byte_B0FCD9 = 1; /*0x72cf7f*/
  }
  return result; /*0x72cf86*/
}



// ==== 0x0072CF90  ObjectClass::CleanupFileTree  this=ObjectClass  sig=csp ====
void CleanupFileTree(ObjectClass *this)
{
  void *v1; // esi

  if ( g_BuildingLoadQueue_Array.__pad_F70[1321] ) /*0x72cf9a*/
  {
    if ( g_BuildingLoadQueue_Array.__pad_F70[1320] ) /*0x72cfa2*/
    {
      v1 = *(void **)&g_BuildingLoadQueue_Array.__pad_F70[616]; /*0x72cfa5*/
      if ( *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[616] ) /*0x72cfad*/
      {
        FileTreeNode::Destroy(*(FileTreeNode **)&g_BuildingLoadQueue_Array.__pad_F70[616]); /*0x72cfb1*/
        __3_YAXPAX_Z(v1); /*0x72cfb7*/
      }
      g_BuildingLoadQueue_Array.__pad_F70[1320] = 0; /*0x72cfbf*/
    }
    *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[616] = 0; /*0x72cfcb*/
    if ( *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[1324] ) /*0x72cfd3*/
    {
      __3_YAXPAX_Z(*(void **)&g_BuildingLoadQueue_Array.__pad_F70[1324]); /*0x72cfd6*/
      *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[1324] = 0; /*0x72cfde*/
    }
    if ( *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[1328] ) /*0x72cfec*/
    {
      (***(void (__thiscall ****)(_DWORD, int))&g_BuildingLoadQueue_Array.__pad_F70[1328])( /*0x72cff2*/
        *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[1328],
        1);
      *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[1328] = 0; /*0x72cff4*/
    }
  }
  g_BuildingLoadQueue_Array.__pad_F70[1321] = 0; /*0x72cffa*/
}



// ==== 0x0072D010  sub_72D010  this=-  sig=ida-proto ====
char sub_72D010()
{
  return byte_B0FCD9; /*0x72d015*/
}



// ==== 0x0072D020  sub_72D020  this=-  sig=ida-proto ====
void *sub_72D020()
{
  return dword_B0FCDC; /*0x72d025*/
}



// ==== 0x0072D030  UI_Create_72D030  this=-  sig=ida-proto ====
int sub_72D030()
{
  return dword_B0FCE0; /*0x72d035*/
}



// ==== 0x0072D120  UI_Show  this=-  sig=ida-proto ====
char sub_72D120()
{
  char result; // al

  result = byte_B0FCCE; /*0x72d120*/
  if ( !byte_B0FCCE ) /*0x72d127*/
  {
    if ( g_DisplayWidth == 800 ) /*0x72d133*/
      dword_B0FAB8 = LoadFileSHP(off_844D64, (bool *)&byte_B0FCCD); /*0x72d145*/
    result = LoadPaletteSimple(off_844D68, &dword_B0FCD0, &dword_B0FCD4); /*0x72d15a*/
    byte_B0FCCE = 1; /*0x72d15f*/
  }
  return result; /*0x72d166*/
}



// ==== 0x0072D170  AudioController::GetVolume  this=AudioController  sig=csp ====
void AudioController::GetVolume(AudioController *this)
{
  void *v1; // esi

  if ( g_BuildingLoadQueue_Array.__pad_F70[1310] ) /*0x72d17a*/
  {
    if ( g_BuildingLoadQueue_Array.__pad_F70[1309] ) /*0x72d182*/
    {
      v1 = *(void **)&g_BuildingLoadQueue_Array.__pad_F70[776]; /*0x72d185*/
      if ( *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[776] ) /*0x72d18d*/
      {
        FileTreeNode::Destroy(*(FileTreeNode **)&g_BuildingLoadQueue_Array.__pad_F70[776]); /*0x72d191*/
        __3_YAXPAX_Z(v1); /*0x72d197*/
      }
      g_BuildingLoadQueue_Array.__pad_F70[1309] = 0; /*0x72d19f*/
    }
    *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[776] = 0; /*0x72d1ab*/
    if ( *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[1312] ) /*0x72d1b3*/
    {
      __3_YAXPAX_Z(*(void **)&g_BuildingLoadQueue_Array.__pad_F70[1312]); /*0x72d1b6*/
      *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[1312] = 0; /*0x72d1be*/
    }
    if ( *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[1316] ) /*0x72d1cc*/
    {
      (***(void (__thiscall ****)(_DWORD, int))&g_BuildingLoadQueue_Array.__pad_F70[1316])( /*0x72d1d2*/
        *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[1316],
        1);
      *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[1316] = 0; /*0x72d1d4*/
    }
  }
  g_BuildingLoadQueue_Array.__pad_F70[1310] = 0; /*0x72d1da*/
}



// ==== 0x0072D1F0  sub_72D1F0  this=-  sig=ida-proto ====
char sub_72D1F0()
{
  return byte_B0FCCE; /*0x72d1f5*/
}



// ==== 0x0072D200  sub_72D200  this=-  sig=ida-proto ====
void *sub_72D200()
{
  return dword_B0FCD0; /*0x72d205*/
}



// ==== 0x0072D210  UI_Create_72D210  this=-  sig=ida-proto ====
int sub_72D210()
{
  return dword_B0FCD4; /*0x72d215*/
}



// ==== 0x0072D300  CampaignScore::LoadCampaignScoreAssetsGame  this=CampaignScore  sig=csp ====
int __thiscall CampaignScore::LoadCampaignScoreAssetsGame(CampaignScore *this)
{
  int result; // eax
  char *v3; // ecx

  LOBYTE(result) = g_BuildingLoadQueue_Array.__pad_F70[1020]; /*0x72d300*/
  if ( !g_BuildingLoadQueue_Array.__pad_F70[1020] ) /*0x72d30a*/
  {
    CampaignScore::LoadScreenAssets(this); /*0x72d30c*/
    if ( this ) /*0x72d313*/
    {
      v3 = off_844BCC[0]; /*0x72d31d*/
      if ( this != (CampaignScore *)1 ) /*0x72d326*/
        v3 = off_844BD0; /*0x72d328*/
    }
    else
    {
      v3 = off_844BC8[0]; /*0x72d315*/
    }
    result = LoadPaletteSimple( /*0x72d338*/
               v3,
               (int *)&g_BuildingLoadQueue_Array.__pad_F70[1012],
               &g_BuildingLoadQueue_Array.__pad_F70[1016]);
    g_BuildingLoadQueue_Array.__pad_F70[1020] = 1; /*0x72d33d*/
  }
  return result; /*0x72d344*/
}



// ==== 0x0072D350  FileSystem::CleanupTrees  this=FileSystem  sig=csp ====
void FileSystem::CleanupTrees(FileSystem *this)
{
  void *v1; // esi
  void *v2; // esi
  void *v3; // esi

  if ( g_BuildingLoadQueue_Array.__pad_F70[1020] ) /*0x72d35a*/
  {
    g_BuildingLoadQueue_Array.__pad_F70[1020] = 0; /*0x72d368*/
    if ( g_BuildingLoadQueue_Array.__pad_F70[1216] ) /*0x72d36e*/
    {
      v1 = *(void **)&g_BuildingLoadQueue_Array.__pad_F70[900]; /*0x72d370*/
      if ( *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[900] ) /*0x72d378*/
      {
        FileTreeNode::Destroy(*(FileTreeNode **)&g_BuildingLoadQueue_Array.__pad_F70[900]); /*0x72d37c*/
        __3_YAXPAX_Z(v1); /*0x72d382*/
      }
      g_BuildingLoadQueue_Array.__pad_F70[1216] = 0; /*0x72d38a*/
    }
    *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[900] = 0; /*0x72d395*/
    if ( g_BuildingLoadQueue_Array.__pad_F70[1217] ) /*0x72d39d*/
    {
      v2 = *(void **)&g_BuildingLoadQueue_Array.__pad_F70[848]; /*0x72d39f*/
      if ( *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[848] ) /*0x72d3a7*/
      {
        FileTreeNode::Destroy(*(FileTreeNode **)&g_BuildingLoadQueue_Array.__pad_F70[848]); /*0x72d3ab*/
        __3_YAXPAX_Z(v2); /*0x72d3b1*/
      }
      g_BuildingLoadQueue_Array.__pad_F70[1217] = 0; /*0x72d3b9*/
    }
    *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[848] = 0; /*0x72d3c4*/
    if ( g_BuildingLoadQueue_Array.__pad_F70[1218] ) /*0x72d3cc*/
    {
      v3 = *(void **)&g_BuildingLoadQueue_Array.__pad_F70[896]; /*0x72d3ce*/
      if ( *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[896] ) /*0x72d3d6*/
      {
        FileTreeNode::Destroy(*(FileTreeNode **)&g_BuildingLoadQueue_Array.__pad_F70[896]); /*0x72d3da*/
        __3_YAXPAX_Z(v3); /*0x72d3e0*/
      }
      g_BuildingLoadQueue_Array.__pad_F70[1218] = 0; /*0x72d3e8*/
    }
    *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[896] = 0; /*0x72d3f3*/
    if ( *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[1012] ) /*0x72d3fc*/
    {
      __3_YAXPAX_Z(*(void **)&g_BuildingLoadQueue_Array.__pad_F70[1012]); /*0x72d3ff*/
      *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[1012] = 0; /*0x72d407*/
    }
    if ( *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[1016] ) /*0x72d415*/
    {
      (***(void (__thiscall ****)(_DWORD, int))&g_BuildingLoadQueue_Array.__pad_F70[1016])( /*0x72d41b*/
        *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[1016],
        1);
      *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[1016] = 0; /*0x72d41d*/
    }
  }
}



// ==== 0x0072D430  sub_72D430  this=-  sig=ida-proto ====
char sub_72D430()
{
  return byte_B0FBAC; /*0x72d435*/
}



// ==== 0x0072D440  sub_72D440  this=-  sig=ida-proto ====
void *sub_72D440()
{
  return dword_B0FBA4; /*0x72d445*/
}



// ==== 0x0072D450  VtableStub_72D450  this=AbstractClass  sig=ida-proto ====
int VtableStub_72D450()
{
  return dword_B0FBA8; /*0x72d455*/
}



// ==== 0x0072D460  CampaignScore::LoadScreenAssets  this=CampaignScore  sig=csp ====
void *__thiscall CampaignScore::LoadScreenAssets(CampaignScore *this)
{
  void *result; // eax

  if ( this ) /*0x72d462*/
  {
    if ( this == (CampaignScore *)1 ) /*0x72d4f7*/
    {
      if ( g_DisplayWidth == (LoadingScreen *)640 ) /*0x72d507*/
      {
        *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[900] = LoadFileSHP( /*0x72d51f*/
                                                                 off_844C70,
                                                                 (bool *)&g_BuildingLoadQueue_Array.__pad_F70[1216]);
        *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[848] = LoadFileSHP( /*0x72d534*/
                                                                 off_844C78,
                                                                 (bool *)&g_BuildingLoadQueue_Array.__pad_F70[1217]);
        result = LoadFileSHP(off_844C80, (bool *)&g_BuildingLoadQueue_Array.__pad_F70[1218]); /*0x72d539*/
      }
      else
      {
        *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[900] = LoadFileSHP( /*0x72d55a*/
                                                                 off_844C74,
                                                                 (bool *)&g_BuildingLoadQueue_Array.__pad_F70[1216]);
        *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[848] = LoadFileSHP( /*0x72d56f*/
                                                                 off_844C7C,
                                                                 (bool *)&g_BuildingLoadQueue_Array.__pad_F70[1217]);
        result = LoadFileSHP(off_844C84, (bool *)&g_BuildingLoadQueue_Array.__pad_F70[1218]); /*0x72d574*/
      }
      *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[896] = result; /*0x72d53e*/
    }
    else
    {
      if ( g_DisplayWidth == (LoadingScreen *)640 ) /*0x72d589*/
      {
        *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[900] = LoadFileSHP( /*0x72d5a1*/
                                                                 off_844C88,
                                                                 (bool *)&g_BuildingLoadQueue_Array.__pad_F70[1216]);
        *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[848] = LoadFileSHP( /*0x72d5b6*/
                                                                 off_844C90,
                                                                 (bool *)&g_BuildingLoadQueue_Array.__pad_F70[1217]);
        result = LoadFileSHP(off_844C98, (bool *)&g_BuildingLoadQueue_Array.__pad_F70[1218]); /*0x72d5bb*/
      }
      else
      {
        *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[900] = LoadFileSHP( /*0x72d5dc*/
                                                                 off_844C8C,
                                                                 (bool *)&g_BuildingLoadQueue_Array.__pad_F70[1216]);
        *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[848] = LoadFileSHP( /*0x72d5f1*/
                                                                 off_844C94,
                                                                 (bool *)&g_BuildingLoadQueue_Array.__pad_F70[1217]);
        result = LoadFileSHP(off_844C9C, (bool *)&g_BuildingLoadQueue_Array.__pad_F70[1218]); /*0x72d5f6*/
      }
      *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[896] = result; /*0x72d5c0*/
    }
  }
  else
  {
    if ( g_DisplayWidth == (LoadingScreen *)640 ) /*0x72d477*/
    {
      *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[900] = LoadFileSHP( /*0x72d48f*/
                                                               off_844C58,
                                                               (bool *)&g_BuildingLoadQueue_Array.__pad_F70[1216]);
      *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[848] = LoadFileSHP( /*0x72d4a4*/
                                                               off_844C60,
                                                               (bool *)&g_BuildingLoadQueue_Array.__pad_F70[1217]);
      result = LoadFileSHP(off_844C68, (bool *)&g_BuildingLoadQueue_Array.__pad_F70[1218]); /*0x72d4a9*/
    }
    else
    {
      *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[900] = LoadFileSHP( /*0x72d4ca*/
                                                               off_844C5C,
                                                               (bool *)&g_BuildingLoadQueue_Array.__pad_F70[1216]);
      *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[848] = LoadFileSHP( /*0x72d4df*/
                                                               off_844C64,
                                                               (bool *)&g_BuildingLoadQueue_Array.__pad_F70[1217]);
      result = LoadFileSHP(off_844C6C, (bool *)&g_BuildingLoadQueue_Array.__pad_F70[1218]); /*0x72d4e4*/
    }
    *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[896] = result; /*0x72d4ae*/
  }
  return result; /*0x72d4b3*/
}



// ==== 0x0072D730  Game::LoadMultiplayerScoreAssets  this=Game  sig=csp ====
char __thiscall Game::LoadMultiplayerScoreAssets(Game *this)
{
  char result; // al
  char *v3; // ecx

  result = g_BuildingLoadQueue_Array.__pad_F70[1032]; /*0x72d730*/
  if ( !g_BuildingLoadQueue_Array.__pad_F70[1032] ) /*0x72d73a*/
  {
    Game::shutdownGame(this); /*0x72d73c*/
    if ( this ) /*0x72d743*/
    {
      v3 = off_844BD8[0]; /*0x72d74d*/
      if ( this != (Game *)1 ) /*0x72d756*/
        v3 = off_844BDC; /*0x72d758*/
    }
    else
    {
      v3 = off_844BD4[0]; /*0x72d745*/
    }
    result = LoadPaletteSimple( /*0x72d768*/
               v3,
               (int *)&g_BuildingLoadQueue_Array.__pad_F70[1024],
               &g_BuildingLoadQueue_Array.__pad_F70[1028]);
    g_BuildingLoadQueue_Array.__pad_F70[1032] = 1; /*0x72d76d*/
  }
  return result; /*0x72d774*/
}



// ==== 0x0072D780  ObjectClass::Map_Init_72D780  this=ObjectClass  sig=csp ====
void Map_Init_72D780(ObjectClass *this)
{
  void *v1; // esi

  if ( g_BuildingLoadQueue_Array.__pad_F70[1032] ) /*0x72d78a*/
  {
    g_BuildingLoadQueue_Array.__pad_F70[1032] = 0; /*0x72d791*/
    if ( g_BuildingLoadQueue_Array.__pad_F70[1229] ) /*0x72d799*/
    {
      v1 = *(void **)&g_BuildingLoadQueue_Array.__pad_F70[876]; /*0x72d79c*/
      if ( *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[876] ) /*0x72d7a4*/
      {
        FileTreeNode::Destroy(*(FileTreeNode **)&g_BuildingLoadQueue_Array.__pad_F70[876]); /*0x72d7a8*/
        __3_YAXPAX_Z(v1); /*0x72d7ae*/
      }
      g_BuildingLoadQueue_Array.__pad_F70[1229] = 0; /*0x72d7b6*/
    }
    *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[876] = 0; /*0x72d7c2*/
    if ( *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[1024] ) /*0x72d7ca*/
    {
      __3_YAXPAX_Z(*(void **)&g_BuildingLoadQueue_Array.__pad_F70[1024]); /*0x72d7cd*/
      *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[1024] = 0; /*0x72d7d5*/
    }
    if ( *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[1028] ) /*0x72d7e3*/
    {
      (***(void (__thiscall ****)(_DWORD, int))&g_BuildingLoadQueue_Array.__pad_F70[1028])( /*0x72d7e9*/
        *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[1028],
        1);
      *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[1028] = 0; /*0x72d7eb*/
    }
  }
}



// ==== 0x0072D800  sub_72D800  this=-  sig=ida-proto ====
char sub_72D800()
{
  return byte_B0FBB8; /*0x72d805*/
}



// ==== 0x0072D810  sub_72D810  this=-  sig=ida-proto ====
void *sub_72D810()
{
  return dword_B0FBB0; /*0x72d815*/
}



// ==== 0x0072D820  UI_Create_72D820  this=-  sig=ida-proto ====
int sub_72D820()
{
  return dword_B0FBB4; /*0x72d825*/
}



// ==== 0x0072D830  Game::shutdownGame  this=Game  sig=csp ====
void *__thiscall Game::shutdownGame(Game *this)
{
  void *result; // eax
  char *v2; // ecx

  if ( this ) /*0x72d832*/
  {
    if ( this == (Game *)1 ) /*0x72d86f*/
    {
      if ( g_DisplayWidth == (LoadingScreen *)640 ) /*0x72d87b*/
        result = LoadFileSHP(off_844CA8, (bool *)&g_BuildingLoadQueue_Array.__pad_F70[1229]); /*0x72d883*/
      else
        result = LoadFileSHP(off_844CAC, (bool *)&g_BuildingLoadQueue_Array.__pad_F70[1229]); /*0x72d894*/
      *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[876] = result; /*0x72d888*/
    }
    else
    {
      v2 = off_844CB0[0]; /*0x72d89f*/
      if ( g_DisplayWidth != (LoadingScreen *)640 ) /*0x72d8af*/
        v2 = off_844CB4; /*0x72d8b1*/
      result = LoadFileSHP(v2, (bool *)&g_BuildingLoadQueue_Array.__pad_F70[1229]); /*0x72d8b7*/
      *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[876] = result; /*0x72d8bc*/
    }
  }
  else
  {
    if ( g_DisplayWidth == (LoadingScreen *)640 ) /*0x72d843*/
      result = LoadFileSHP(off_844CA0, (bool *)&g_BuildingLoadQueue_Array.__pad_F70[1229]); /*0x72d84b*/
    else
      result = LoadFileSHP(off_844CA4, (bool *)&g_BuildingLoadQueue_Array.__pad_F70[1229]); /*0x72d85c*/
    *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[876] = result; /*0x72d850*/
  }
  return result; /*0x72d855*/
}



// ==== 0x0072D9A0  InitializeGameLoading  this=-  sig=ida-proto ====
int sub_72D9A0()
{
  void *FileSHP; // eax
  char *v1; // ecx

  if ( g_DisplayWidth == 640 ) /*0x72d9af*/
  {
    dword_B0FB48 = LoadFileSHP(off_844CB8, (bool *)&byte_B0FCC8); /*0x72d9c7*/
    dword_B0FB10 = LoadFileSHP(off_844CC4, (bool *)&byte_B0FCCA); /*0x72d9dc*/
    FileSHP = LoadFileSHP(off_844CC8, (bool *)&byte_B0FCCB); /*0x72d9e1*/
    v1 = off_844CD0[0]; /*0x72d9e6*/
  }
  else
  {
    dword_B0FB48 = LoadFileSHP(off_844D4C, (bool *)&byte_B0FCC8); /*0x72da0e*/
    dword_B0FB10 = LoadFileSHP(off_844D54, (bool *)&byte_B0FCCA); /*0x72da23*/
    FileSHP = LoadFileSHP(off_844CCC, (bool *)&byte_B0FCCB); /*0x72da28*/
    v1 = off_844D5C; /*0x72da2d*/
  }
  dword_B0F9F8 = FileSHP; /*0x72d9ec*/
  dword_B0FA6C = LoadFileSHP(v1, (bool *)&byte_B0FCCC); /*0x72da52*/
  LoadPaletteSimple(off_844BE0, &dword_B0FBBC, &dword_B0FBC0); /*0x72da57*/
  LoadPaletteSimple(off_844D50, &dword_B0FCB0, &dword_B0FCB4); /*0x72da6c*/
  LoadPaletteSimple(off_844D58, &dword_B0FCB8, &dword_B0FCBC); /*0x72da81*/
  return LoadPaletteSimple(off_844D60, &dword_B0FCC0, &dword_B0FCC4); /*0x72da9b*/
}



// ==== 0x0072DAA0  CleanupEVASystem  this=-  sig=ida-proto ====
// Microsoft VisualC 2-14/net runtime
void EVASystem::Cleanup()
{
  CleanupEVASystem_Cleanup(); /*0x72daa0*/
  if ( dword_B0FCB0 ) /*0x72dcfa*/
  {
    __3_YAXPAX_Z(dword_B0FCB0); /*0x72dcfd*/
    dword_B0FCB0 = 0; /*0x72dd05*/
  }
  if ( dword_B0FCB4 ) /*0x72dd13*/
  {
    (**(void (__thiscall ***)(int, int))dword_B0FCB4)(dword_B0FCB4, 1); /*0x72dd19*/
    dword_B0FCB4 = 0; /*0x72dd1b*/
  }
  if ( dword_B0FCB8 ) /*0x72dd28*/
  {
    __3_YAXPAX_Z(dword_B0FCB8); /*0x72dd2b*/
    dword_B0FCB8 = 0; /*0x72dd33*/
  }
  if ( dword_B0FCBC ) /*0x72dd41*/
  {
    (**(void (__thiscall ***)(int, int))dword_B0FCBC)(dword_B0FCBC, 1); /*0x72dd47*/
    dword_B0FCBC = 0; /*0x72dd49*/
  }
  if ( dword_B0FCC0 ) /*0x72dd56*/
  {
    __3_YAXPAX_Z(dword_B0FCC0); /*0x72dd59*/
    dword_B0FCC0 = 0; /*0x72dd61*/
  }
  if ( dword_B0FCC4 ) /*0x72dd6f*/
  {
    (**(void (__thiscall ***)(int, int))dword_B0FCC4)(dword_B0FCC4, 1); /*0x72dd75*/
    dword_B0FCC4 = 0; /*0x72dd77*/
  }
  if ( dword_B0FBBC ) /*0x72dd84*/
  {
    __3_YAXPAX_Z(dword_B0FBBC); /*0x72dd87*/
    dword_B0FBBC = 0; /*0x72dd8f*/
  }
  if ( dword_B0FBC0 ) /*0x72dd9d*/
  {
    (**(void (__thiscall ***)(int, int))dword_B0FBC0)(dword_B0FBC0, 1); /*0x72dda3*/
    dword_B0FBC0 = 0; /*0x72dda5*/
  }
}



// ==== 0x0072DAB0  sub_72DAB0  this=-  sig=ida-proto ====
void *sub_72DAB0()
{
  return dword_B0FBBC; /*0x72dab5*/
}



// ==== 0x0072DAC0  UI_Helper_72DAC0  this=-  sig=ida-proto ====
int sub_72DAC0()
{
  return dword_B0FCB4; /*0x72dac5*/
}



// ==== 0x0072DAD0  UI_Helper_72DAD0  this=-  sig=ida-proto ====
int sub_72DAD0()
{
  return dword_B0FCBC; /*0x72dad5*/
}



// ==== 0x0072DAE0  CreatureClass::GetManager  this=CreatureClass  sig=ida-proto ====
int CreatureClass_GetManager()
{
  return dword_B0FCC4; /*0x72dae5*/
}



// ==== 0x0072DAF0  sub_72DAF0  this=-  sig=ida-proto ====
int sub_72DAF0()
{
  return dword_B0FBC0; /*0x72daf5*/
}



// ==== 0x0072DC20  CleanupEVASystem_Cleanup  this=-  sig=ida-proto ====
void sub_72DC20()
{
  void *v0; // esi
  void *v1; // esi
  void *v2; // esi
  void *v3; // esi

  if ( byte_B0FCC8 ) /*0x72dc2b*/
  {
    v0 = dword_B0FB48; /*0x72dc2d*/
    if ( dword_B0FB48 ) /*0x72dc35*/
    {
      FileTreeNode::Destroy(dword_B0FB48); /*0x72dc39*/
      __3_YAXPAX_Z(v0); /*0x72dc3f*/
    }
    byte_B0FCC8 = 0; /*0x72dc47*/
  }
  dword_B0FB48 = 0; /*0x72dc52*/
  if ( byte_B0FCCA ) /*0x72dc5a*/
  {
    v1 = dword_B0FB10; /*0x72dc5c*/
    if ( dword_B0FB10 ) /*0x72dc64*/
    {
      FileTreeNode::Destroy(dword_B0FB10); /*0x72dc68*/
      __3_YAXPAX_Z(v1); /*0x72dc6e*/
    }
    byte_B0FCCA = 0; /*0x72dc76*/
  }
  dword_B0FB10 = 0; /*0x72dc81*/
  if ( byte_B0FCCB ) /*0x72dc89*/
  {
    v2 = dword_B0F9F8; /*0x72dc8b*/
    if ( dword_B0F9F8 ) /*0x72dc93*/
    {
      FileTreeNode::Destroy(dword_B0F9F8); /*0x72dc97*/
      __3_YAXPAX_Z(v2); /*0x72dc9d*/
    }
    byte_B0FCCB = 0; /*0x72dca5*/
  }
  dword_B0F9F8 = 0; /*0x72dcb0*/
  if ( byte_B0FCCC ) /*0x72dcb8*/
  {
    v3 = dword_B0FA6C; /*0x72dcba*/
    if ( dword_B0FA6C ) /*0x72dcc2*/
    {
      FileTreeNode::Destroy(dword_B0FA6C); /*0x72dcc6*/
      __3_YAXPAX_Z(v3); /*0x72dccc*/
    }
    byte_B0FCCC = 0; /*0x72dcd4*/
  }
  dword_B0FA6C = 0; /*0x72dcda*/
}



// ==== 0x0072DDB0  MouseClass::LoadCursors  this=MouseClass  sig=ida-proto ====
char MouseClass_LoadCursors()
{
  char result; // al

  result = byte_B0FBE0; /*0x72ddb0*/
  if ( !byte_B0FBE0 ) /*0x72ddb7*/
  {
    AssetClass::ReleaseAndReload(); /*0x72ddbd*/
    dword_B0FAC4 = LoadFileSHP(off_844CD4, (bool *)&byte_B0FC95); /*0x72dddd*/
    dword_B0F9DC = LoadFileSHP(off_844CD8, (bool *)&byte_B0FC96); /*0x72ddf2*/
    dword_B0FAC0 = LoadFileSHP(off_844CDC, (bool *)&byte_B0FC97); /*0x72de07*/
    dword_B0FB50 = LoadFileSHP(off_844CE0, (bool *)&byte_B0FC98); /*0x72de1c*/
    dword_B0FA04 = LoadFileSHP(off_844CE4, (bool *)&byte_B0FC99); /*0x72de31*/
    dword_B0FAF8 = LoadFileSHP(off_844CE8, (bool *)&byte_B0FC9A); /*0x72de46*/
    dword_B0FA74 = LoadFileSHP(off_844CEC, (bool *)&byte_B0FC9B); /*0x72de5b*/
    dword_B0FA38 = LoadFileSHP(off_844CF0, (bool *)&byte_B0FC9C); /*0x72de70*/
    dword_B0FAE8 = LoadFileSHP(off_844CF4, (bool *)&byte_B0FC9D); /*0x72de85*/
    dword_B0FA54 = LoadFileSHP(off_844CF8, (bool *)&byte_B0FC9E); /*0x72de9f*/
    LoadPaletteSimple(off_844BE4, &dword_B0FBC8, &dword_B0FBCC); /*0x72dea4*/
    LoadPaletteSimple(off_844BE8, &dword_B0FBD0, &dword_B0FBD4); /*0x72deb9*/
    LoadPaletteSimple(off_844BEC, &dword_B0FBD8, &dword_B0FBDC); /*0x72dece*/
    result = SetupMouseClassResources(g_DisplayWidth, MEMORY[0x8A00A8]); /*0x72dedf*/
    byte_B0FBE0 = 1; /*0x72dee4*/
  }
  return result; /*0x72deeb*/
}



// ==== 0x0072DEF0  LoadingScreen::FreeResources3  this=LoadingScreen  sig=ida-proto ====
char LoadingScreen::FreeResources3()
{
  char result; // al
  LoadingScreen *v1; // [esp+0h] [ebp-4h]
  ObjectClass *v2; // [esp+0h] [ebp-4h]

  result = g_BuildingLoadQueue_Array.__pad_F70[1072]; /*0x72def0*/
  if ( g_BuildingLoadQueue_Array.__pad_F70[1072] ) /*0x72defa*/
  {
    g_BuildingLoadQueue_Array.__pad_F70[1072] = 0; /*0x72df00*/
    LoadingScreen::DestroyFileTrees(); /*0x72df06*/
    LoadingScreen::CleanupObjects(v1); /*0x72df0b*/
    __3_YAXPAX_Z(*(void **)&g_BuildingLoadQueue_Array.__pad_F70[1120]); /*0x72df16*/
    *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[1120] = 0; /*0x72df21*/
    __3_YAXPAX_Z(*(void **)&g_BuildingLoadQueue_Array.__pad_F70[1124]); /*0x72df28*/
    *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[1124] = 0; /*0x72df33*/
    __3_YAXPAX_Z(*(void **)&g_BuildingLoadQueue_Array.__pad_F70[1128]); /*0x72df3a*/
    *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[1128] = 0; /*0x72df44*/
    __3_YAXPAX_Z(*(void **)&g_BuildingLoadQueue_Array.__pad_F70[1132]); /*0x72df4b*/
    *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[1132] = 0; /*0x72df56*/
    __3_YAXPAX_Z(*(void **)&g_BuildingLoadQueue_Array.__pad_F70[1136]); /*0x72df5d*/
    *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[1136] = 0; /*0x72df68*/
    __3_YAXPAX_Z(*(void **)&g_BuildingLoadQueue_Array.__pad_F70[1140]); /*0x72df6f*/
    *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[1140] = 0; /*0x72df79*/
    __3_YAXPAX_Z(*(void **)&g_BuildingLoadQueue_Array.__pad_F70[1144]); /*0x72df80*/
    *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[1144] = 0; /*0x72df8b*/
    __3_YAXPAX_Z(*(void **)&g_BuildingLoadQueue_Array.__pad_F70[1148]); /*0x72df92*/
    *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[1148] = 0; /*0x72df9a*/
    return ReleaseLoadingResources(v2); /*0x72dfa0*/
  }
  return result; /*0x72dfa5*/
}



// ==== 0x0072DFB0  InitLoadingScreenResources  this=-  sig=ida-proto ====
char InitLoadingScreenResources()
{
  char result; // al
  LoadingScreen *v1; // [esp+0h] [ebp-4h]
  ObjectClass *v2; // [esp+0h] [ebp-4h]

  if ( !g_BuildingLoadQueue_Array.__pad_F70[1072] ) /*0x72dfba*/
    goto LABEL_3; /*0x72dfba*/
  g_BuildingLoadQueue_Array.__pad_F70[1072] = 0; /*0x72dfc0*/
  LoadingScreen::DestroyFileTrees(); /*0x72dfc6*/
  LoadingScreen::CleanupObjects(v1); /*0x72dfcb*/
  __3_YAXPAX_Z(*(void **)&g_BuildingLoadQueue_Array.__pad_F70[1120]); /*0x72dfd6*/
  *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[1120] = 0; /*0x72dfe1*/
  __3_YAXPAX_Z(*(void **)&g_BuildingLoadQueue_Array.__pad_F70[1124]); /*0x72dfe8*/
  *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[1124] = 0; /*0x72dff3*/
  __3_YAXPAX_Z(*(void **)&g_BuildingLoadQueue_Array.__pad_F70[1128]); /*0x72dffa*/
  *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[1128] = 0; /*0x72e004*/
  __3_YAXPAX_Z(*(void **)&g_BuildingLoadQueue_Array.__pad_F70[1132]); /*0x72e00b*/
  *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[1132] = 0; /*0x72e016*/
  __3_YAXPAX_Z(*(void **)&g_BuildingLoadQueue_Array.__pad_F70[1136]); /*0x72e01d*/
  *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[1136] = 0; /*0x72e028*/
  __3_YAXPAX_Z(*(void **)&g_BuildingLoadQueue_Array.__pad_F70[1140]); /*0x72e02f*/
  *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[1140] = 0; /*0x72e039*/
  __3_YAXPAX_Z(*(void **)&g_BuildingLoadQueue_Array.__pad_F70[1144]); /*0x72e040*/
  *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[1144] = 0; /*0x72e04b*/
  __3_YAXPAX_Z(*(void **)&g_BuildingLoadQueue_Array.__pad_F70[1148]); /*0x72e052*/
  *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[1148] = 0; /*0x72e05a*/
  result = ReleaseLoadingResources(v2); /*0x72e060*/
  if ( !g_BuildingLoadQueue_Array.__pad_F70[1072] ) /*0x72e06b*/
  {
LABEL_3:
    AssetClass::ReleaseAndReload((AssetClass *)v1); /*0x72e071*/
    *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[788] = LoadFileSHP( /*0x72e091*/
                                                             off_844CD4,
                                                             (bool *)&g_BuildingLoadQueue_Array.__pad_F70[1253]);
    *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[556] = LoadFileSHP( /*0x72e0a6*/
                                                             off_844CD8,
                                                             (bool *)&g_BuildingLoadQueue_Array.__pad_F70[1254]);
    *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[784] = LoadFileSHP( /*0x72e0bb*/
                                                             off_844CDC,
                                                             (bool *)&g_BuildingLoadQueue_Array.__pad_F70[1255]);
    *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[928] = LoadFileSHP( /*0x72e0d0*/
                                                             off_844CE0,
                                                             (bool *)&g_BuildingLoadQueue_Array.__pad_F70[1256]);
    *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[596] = LoadFileSHP( /*0x72e0e5*/
                                                             off_844CE4,
                                                             (bool *)&g_BuildingLoadQueue_Array.__pad_F70[1257]);
    *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[840] = LoadFileSHP( /*0x72e0fa*/
                                                             off_844CE8,
                                                             (bool *)&g_BuildingLoadQueue_Array.__pad_F70[1258]);
    *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[708] = LoadFileSHP( /*0x72e10f*/
                                                             off_844CEC,
                                                             (bool *)&g_BuildingLoadQueue_Array.__pad_F70[1259]);
    *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[648] = LoadFileSHP( /*0x72e124*/
                                                             off_844CF0,
                                                             (bool *)&g_BuildingLoadQueue_Array.__pad_F70[1260]);
    *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[824] = LoadFileSHP( /*0x72e139*/
                                                             off_844CF4,
                                                             (bool *)&g_BuildingLoadQueue_Array.__pad_F70[1261]);
    *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[676] = LoadFileSHP( /*0x72e153*/
                                                             off_844CF8,
                                                             (bool *)&g_BuildingLoadQueue_Array.__pad_F70[1262]);
    LoadPaletteSimple( /*0x72e158*/
      off_844BE4,
      (int *)&g_BuildingLoadQueue_Array.__pad_F70[1048],
      &g_BuildingLoadQueue_Array.__pad_F70[1052]);
    LoadPaletteSimple( /*0x72e16d*/
      off_844BE8,
      (int *)&g_BuildingLoadQueue_Array.__pad_F70[1056],
      &g_BuildingLoadQueue_Array.__pad_F70[1060]);
    LoadPaletteSimple( /*0x72e182*/
      off_844BEC,
      (int *)&g_BuildingLoadQueue_Array.__pad_F70[1064],
      &g_BuildingLoadQueue_Array.__pad_F70[1068]);
    result = (unsigned __int8)SetupMouseClassResources((int)g_DisplayWidth, (int)*(&g_DisplayWidth + 1)); /*0x72e193*/
    g_BuildingLoadQueue_Array.__pad_F70[1072] = 1; /*0x72e198*/
  }
  return result; /*0x72e19f*/
}



// ==== 0x0072E1B0  ChangeVideoMode_Setup  this=ObjectClass  sig=ida-proto ====
int *__fastcall sub_72E1B0(int a1, int a2)
{
  __3_YAXPAX_Z(dword_B0FC10); /*0x72e1bd*/
  dword_B0FC10 = 0; /*0x72e1cb*/
  __3_YAXPAX_Z(dword_B0FC14); /*0x72e1d1*/
  dword_B0FC14 = 0; /*0x72e1dc*/
  __3_YAXPAX_Z(dword_B0FC18); /*0x72e1e3*/
  dword_B0FC18 = 0; /*0x72e1ed*/
  __3_YAXPAX_Z(dword_B0FC1C); /*0x72e1f4*/
  dword_B0FC1C = 0; /*0x72e1ff*/
  __3_YAXPAX_Z(dword_B0FC20); /*0x72e206*/
  dword_B0FC20 = 0; /*0x72e211*/
  __3_YAXPAX_Z(dword_B0FC24); /*0x72e218*/
  dword_B0FC24 = 0; /*0x72e222*/
  __3_YAXPAX_Z(dword_B0FC28); /*0x72e229*/
  dword_B0FC28 = 0; /*0x72e234*/
  __3_YAXPAX_Z(dword_B0FC2C); /*0x72e23b*/
  dword_B0FC2C = 0; /*0x72e245*/
  return SetupMouseClassResources(a1, a2); /*0x72e24d*/
}



// ==== 0x0072E260  UI_Draw_72E260  this=-  sig=ida-proto ====
char sub_72E260()
{
  return byte_B0FBE0; /*0x72e265*/
}



// ==== 0x0072E270  sub_72E270  this=-  sig=ida-proto ====
void *sub_72E270()
{
  return dword_B0FBC8; /*0x72e275*/
}



// ==== 0x0072E280  VtableStub_72E280  this=-  sig=ida-proto ====
int VtableStub_72E280()
{
  return dword_B0FBCC; /*0x72e285*/
}



// ==== 0x0072E290  sub_72E290  this=-  sig=ida-proto ====
void *sub_72E290()
{
  return dword_B0FBD0; /*0x72e295*/
}



// ==== 0x0072E2A0  UI_Helper_72E2A0  this=-  sig=ida-proto ====
int sub_72E2A0()
{
  return dword_B0FBD4; /*0x72e2a5*/
}



// ==== 0x0072E2B0  sub_72E2B0  this=-  sig=ida-proto ====
void *sub_72E2B0()
{
  return dword_B0FBD8; /*0x72e2b5*/
}



// ==== 0x0072E2C0  UI_Helper_72E2C0  this=-  sig=ida-proto ====
int sub_72E2C0()
{
  return dword_B0FBDC; /*0x72e2c5*/
}



// ==== 0x0072E2D0  DrawScoreScreenStats  this=-  sig=csp ====
int __fastcall ScoreScreen_DrawStats(int *a1, int a2)
{
  int result; // eax
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

  result = g_DisplayWidth; /*0x72e2d0*/
  if ( g_DisplayWidth >= 1024 ) /*0x72e2e3*/
  {
    v5 = *(_DWORD *)dword_B0FC1C; /*0x72e2fc*/
    v6 = *((_DWORD *)dword_B0FC1C + 1); /*0x72e300*/
    v15 = *(_DWORD *)dword_B0FC20 + *((_DWORD *)dword_B0FC20 + 2); /*0x72e309*/
    v7 = *a1; /*0x72e315*/
    v16 = *((_DWORD *)dword_B0FC2C + 1) + *((_DWORD *)dword_B0FC2C + 3); /*0x72e317*/
    v17 = 0; /*0x72e31d*/
    v18 = 0; /*0x72e321*/
    v19 = v5; /*0x72e32e*/
    v20 = v6; /*0x72e332*/
    (*(void (__thiscall **)(int *, int *, int, _DWORD))(v7 + 16))(a1, &v17, a2, 0); /*0x72e336*/
    v8 = *a1; /*0x72e339*/
    v18 = 0; /*0x72e342*/
    v19 = 800; /*0x72e34b*/
    v17 = v5; /*0x72e353*/
    v20 = v6; /*0x72e357*/
    (*(void (__thiscall **)(int *, int *, int, _DWORD))(v8 + 16))(a1, &v17, a2, 0); /*0x72e35b*/
    v9 = *a1; /*0x72e35e*/
    v18 = 0; /*0x72e366*/
    v17 = v15; /*0x72e36f*/
    v19 = v5; /*0x72e377*/
    v20 = v6; /*0x72e37b*/
    (*(void (__thiscall **)(int *, int *, int, _DWORD))(v9 + 16))(a1, &v17, a2, 0); /*0x72e37f*/
    v10 = *a1; /*0x72e382*/
    v20 = 600; /*0x72e38d*/
    v17 = v15; /*0x72e397*/
    v18 = v6; /*0x72e39f*/
    v19 = v5; /*0x72e3a3*/
    (*(void (__thiscall **)(int *, int *, int, _DWORD))(v10 + 16))(a1, &v17, a2, 0); /*0x72e3a7*/
    v19 = v5; /*0x72e3af*/
    v17 = v15; /*0x72e3bb*/
    v20 = 600; /*0x72e3c5*/
    v11 = *a1; /*0x72e3c9*/
    v18 = v16; /*0x72e3cf*/
    (*(void (__thiscall **)(int *, int *, int, _DWORD))(v11 + 16))(a1, &v17, a2, 0); /*0x72e3d3*/
    v19 = 800; /*0x72e3e5*/
    v12 = *a1; /*0x72e3e9*/
    v17 = v5; /*0x72e3ef*/
    v18 = v16; /*0x72e3f3*/
    v20 = v6; /*0x72e3f7*/
    (*(void (__thiscall **)(int *, int *, int, _DWORD))(v12 + 16))(a1, &v17, a2, 0); /*0x72e3fb*/
    v17 = 0; /*0x72e40a*/
    v13 = *a1; /*0x72e40e*/
    v18 = v16; /*0x72e414*/
    v19 = v5; /*0x72e418*/
    v20 = v6; /*0x72e41c*/
    (*(void (__thiscall **)(int *, int *, int, _DWORD))(v13 + 16))(a1, &v17, a2, 0); /*0x72e420*/
    v14 = *a1; /*0x72e423*/
    v17 = 0; /*0x72e42c*/
    v20 = 600; /*0x72e435*/
    v18 = v6; /*0x72e43d*/
    v19 = v5; /*0x72e441*/
    return (*(int (__thiscall **)(int *, int *, int, _DWORD))(v14 + 16))(a1, &v17, a2, 0); /*0x72e445*/
  }
  return result; /*0x72e44a*/
}



// ==== 0x0072E450  RenderScoreScreen  this=Buffer  sig=csp ====
void __fastcall RenderScoreScreen(int *a1, int *a2, char a3)
{
  int v5; // ecx
  int v6; // eax
  int v7; // edi
  int v8; // edi
  int v9; // eax
  int v10; // edi
  AssetClass *v11; // [esp+0h] [ebp-20h]
  int v12; // [esp+8h] [ebp-18h] BYREF
  int i; // [esp+Ch] [ebp-14h]
  int v14[2]; // [esp+10h] [ebp-10h] BYREF
  int v15; // [esp+18h] [ebp-8h]
  int v16; // [esp+1Ch] [ebp-4h]

  if ( !g_BuildingLoadQueue_Array.__pad_F70[1072] ) /*0x72e460*/
  {
    AssetClass::ReleaseAndReload(v11); /*0x72e462*/
    Render_Render_72EB50(); /*0x72e467*/
    LoadPaletteSimple( /*0x72e47c*/
      off_844BE4,
      (int *)&g_BuildingLoadQueue_Array.__pad_F70[1048],
      &g_BuildingLoadQueue_Array.__pad_F70[1052]);
    LoadPaletteSimple( /*0x72e491*/
      off_844BE8,
      (int *)&g_BuildingLoadQueue_Array.__pad_F70[1056],
      &g_BuildingLoadQueue_Array.__pad_F70[1060]);
    LoadPaletteSimple( /*0x72e4a6*/
      off_844BEC,
      (int *)&g_BuildingLoadQueue_Array.__pad_F70[1064],
      &g_BuildingLoadQueue_Array.__pad_F70[1068]);
    SetupMouseClassResources((int)g_DisplayWidth, (int)*(&g_DisplayWidth + 1)); /*0x72e4b7*/
    g_BuildingLoadQueue_Array.__pad_F70[1072] = 1; /*0x72e4bc*/
  }
  DrawScoreScreenStats(a1, (int)a2); /*0x72e4c9*/
  v5 = a2[1]; /*0x72e4d0*/
  v14[0] = *a2; /*0x72e4d3*/
  v6 = a2[2]; /*0x72e4d7*/
  v7 = a2[3]; /*0x72e4da*/
  v12 = 0; /*0x72e4e4*/
  i = 0; /*0x72e4e8*/
  v14[1] = v5; /*0x72e4ec*/
  v15 = v6; /*0x72e4f0*/
  v16 = v7; /*0x72e4f4*/
  if ( v6 > 800 ) /*0x72e4f8*/
    v15 = (v6 - 800) / 2 + 800; /*0x72e509*/
  if ( v7 > 600 ) /*0x72e513*/
    v16 = (v7 - 600) / 2 + 600; /*0x72e525*/
  v12 = **(_DWORD **)&g_BuildingLoadQueue_Array.__pad_F70[1136]; /*0x72e537*/
  i = *(_DWORD *)(*(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[1136] + 4); /*0x72e53e*/
  DrawToSurfaceSHP( /*0x72e56a*/
    (int)a1,
    *(int *)&g_BuildingLoadQueue_Array.__pad_F70[1052],
    *(int *)&g_BuildingLoadQueue_Array.__pad_F70[840],
    0,
    &v12,
    v14,
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
  v8 = 0; /*0x72e574*/
  v12 = **(_DWORD **)&g_BuildingLoadQueue_Array.__pad_F70[1140]; /*0x72e578*/
  v9 = *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[624]; /*0x72e57f*/
  for ( i = *(_DWORD *)(*(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[1140] + 4); /*0x72e58a*/
        v8 < *(int *)&g_BuildingLoadQueue_Array.__pad_F70[624];
        v9 = *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[624] )
  {
    DrawToSurfaceSHP( /*0x72e5c1*/
      (int)a1,
      *(int *)&g_BuildingLoadQueue_Array.__pad_F70[1060],
      *(int *)&g_BuildingLoadQueue_Array.__pad_F70[708],
      0,
      &v12,
      v14,
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
    ++v8; /*0x72e5d4*/
    i += *(_DWORD *)(*(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[1140] + 12); /*0x72e5d5*/
  }
  if ( !a3 ) /*0x72e5e8*/
  {
    v10 = 0; /*0x72e5f0*/
    v12 = **(_DWORD **)&g_BuildingLoadQueue_Array.__pad_F70[1120]; /*0x72e5f6*/
    i = *(_DWORD *)(*(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[1120] + 4); /*0x72e5fd*/
    if ( v9 > 0 ) /*0x72e601*/
    {
      do /*0x72e65a*/
      {
        DrawToSurfaceSHP( /*0x72e63a*/
          (int)a1,
          *(int *)&g_BuildingLoadQueue_Array.__pad_F70[1068],
          *(int *)&g_BuildingLoadQueue_Array.__pad_F70[788],
          0xAu,
          &v12,
          v14,
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
        ++v10; /*0x72e653*/
        i += *(_DWORD *)(*(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[1120] + 12); /*0x72e654*/
      }
      while ( v10 < *(int *)&g_BuildingLoadQueue_Array.__pad_F70[624] ); /*0x72e65a*/
    }
  }
  v12 = **(_DWORD **)&g_BuildingLoadQueue_Array.__pad_F70[1144]; /*0x72e663*/
  i = *(_DWORD *)(*(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[1144] + 4); /*0x72e688*/
  DrawToSurfaceSHP( /*0x72e69f*/
    (int)a1,
    *(int *)&g_BuildingLoadQueue_Array.__pad_F70[1052],
    *(int *)&g_BuildingLoadQueue_Array.__pad_F70[648],
    0,
    &v12,
    v14,
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
  v12 = **(_DWORD **)&g_BuildingLoadQueue_Array.__pad_F70[1148]; /*0x72e6ad*/
  i = *(_DWORD *)(*(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[1148] + 4); /*0x72e6b9*/
  if ( g_DisplayWidth == (LoadingScreen *)640 ) /*0x72e6c2*/
    DrawToSurfaceSHP( /*0x72e6ec*/
      (int)a1,
      *(int *)&g_BuildingLoadQueue_Array.__pad_F70[1052],
      *(int *)&g_BuildingLoadQueue_Array.__pad_F70[824],
      0,
      &v12,
      v14,
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
  else
    DrawToSurfaceSHP( /*0x72e71f*/
      (int)a1,
      *(int *)&g_BuildingLoadQueue_Array.__pad_F70[1052],
      *(int *)&g_BuildingLoadQueue_Array.__pad_F70[676],
      0,
      &v12,
      v14,
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



// ==== 0x0072E730  UI_Draw_72E730  this=Buffer  sig=csp ====
void __fastcall sub_72E730(int a1, int *a2, int a3, int a4, int a5)
{
  int v5; // esi
  int v6; // eax
  int v7; // eax
  int v8; // [esp+0h] [ebp-18h] BYREF
  int v9; // [esp+4h] [ebp-14h]
  int v10[2]; // [esp+8h] [ebp-10h] BYREF
  int v11; // [esp+10h] [ebp-8h]
  int v12; // [esp+14h] [ebp-4h]

  v5 = a2[3]; /*0x72e736*/
  v10[0] = *a2; /*0x72e739*/
  v6 = a2[1]; /*0x72e73d*/
  v8 = 0; /*0x72e740*/
  v10[1] = v6; /*0x72e748*/
  v7 = a2[2]; /*0x72e74c*/
  v9 = 0; /*0x72e754*/
  v11 = v7; /*0x72e75c*/
  v12 = v5; /*0x72e760*/
  if ( v7 > 800 ) /*0x72e764*/
    v11 = (v7 - 800) / 2 + 800; /*0x72e775*/
  if ( v5 > 600 ) /*0x72e77f*/
    v12 = (v5 - 600) / 2 + 600; /*0x72e791*/
  v8 = *(_DWORD *)dword_B0FC1C; /*0x72e79d*/
  v9 = *((_DWORD *)dword_B0FC1C + 1); /*0x72e7a4*/
  if ( g_DisplayWidth == 640 ) /*0x72e7b2*/
    DrawToSurfaceSHP(a1, a3, a4, 0, &v8, v10, 1024, 0, 0, 0, 1000, 0, 0, 0, 0, 0); /*0x72e7df*/
  else
    DrawToSurfaceSHP(a1, a3, a5, 0, &v8, v10, 1024, 0, 0, 0, 1000, 0, 0, 0, 0, 0); /*0x72e815*/
}



// ==== 0x0072E820  Render_Draw  this=-  sig=csp ====
void __fastcall sub_72E820(int a1, int *a2, char a3)
{
  RenderScoreScreen(a1, a2, a3); /*0x72e82b*/
  UI_Draw_72E730(a1, a2, dword_B0FBCC, (int)dword_B0FB50, (int)dword_B0FA04); /*0x72e848*/
}



// ==== 0x0072E860  UI_Draw_72E860  this=Buffer  sig=csp ====
void __fastcall UI_Draw_72E860(int a1, int *a2)
{
  int v2; // [esp+8h] [ebp-8h] BYREF
  int v3; // [esp+Ch] [ebp-4h]

  v2 = 0; /*0x72e86c*/
  v3 = 0; /*0x72e870*/
  v2 = *(_DWORD *)dword_B0FC14; /*0x72e877*/
  v3 = *((_DWORD *)dword_B0FC14 + 1); /*0x72e87e*/
  DrawToSurfaceSHP(a1, dword_B0FBCC, (int)dword_B0F9DC, 0, &v2, a2, 1024, 0, 0, 0, 1000, 0, 0, 0, 0, 0); /*0x72e8a8*/
}



// ==== 0x0072E8C0  UI_Draw_72E8C0  this=Buffer  sig=csp ====
void __fastcall UI_Draw_72E8C0(int a1, int *a2)
{
  int v2; // [esp+8h] [ebp-8h] BYREF
  int v3; // [esp+Ch] [ebp-4h]

  v2 = 0; /*0x72e8cc*/
  v3 = 0; /*0x72e8d0*/
  v2 = *(_DWORD *)dword_B0FC20; /*0x72e8d7*/
  v3 = *((_DWORD *)dword_B0FC20 + 1); /*0x72e8de*/
  DrawToSurfaceSHP(a1, dword_B0FBCC, (int)dword_B0FAF8, 1u, &v2, a2, 1024, 0, 0, 0, 1000, 0, 0, 0, 0, 0); /*0x72e909*/
}



// ==== 0x0072E920  UI_Draw_72E920  this=Buffer  sig=csp ====
void __fastcall UI_Draw_72E920(int a1, int *a2)
{
  int v2; // edi
  int v3; // [esp+8h] [ebp-8h] BYREF
  int v4; // [esp+Ch] [ebp-4h]

  v3 = 0; /*0x72e92c*/
  v4 = 0; /*0x72e930*/
  v2 = *(_DWORD *)dword_B0FC1C; /*0x72e934*/
  v3 = *(_DWORD *)dword_B0FC1C; /*0x72e936*/
  v4 = *((_DWORD *)dword_B0FC1C + 1); /*0x72e93d*/
  if ( g_DisplayWidth >= 800 ) /*0x72e94b*/
    v3 = v2 + 80; /*0x72e952*/
  DrawToSurfaceSHP(a1, dword_B0FBA8, (int)dword_B0FB00, 0, &v3, a2, 1024, 0, 0, 0, 1000, 0, 0, 0, 0, 0); /*0x72e97d*/
}



// ==== 0x0072E990  sub_72E990  this=-  sig=ida-proto ====
void __fastcall sub_72E990(int a1, int *a2)
{
  int v2; // [esp+8h] [ebp-8h] BYREF
  int v3; // [esp+Ch] [ebp-4h]

  v2 = 0; /*0x72e99c*/
  v3 = 0; /*0x72e9a0*/
  v2 = *(_DWORD *)dword_B0FC1C; /*0x72e9a7*/
  v3 = *((_DWORD *)dword_B0FC1C + 1); /*0x72e9ae*/
  DrawToSurfaceSHP(a1, dword_B0FBA8, (int)dword_B0FB34, 0, &v2, a2, 1024, 0, 0, 0, 1000, 0, 0, 0, 0, 0); /*0x72e9d8*/
}



// ==== 0x0072E9F0  Map_Load_72E9F0  this=ObjectClass  sig=csp ====
void __fastcall Map_Load_72E9F0(int *a1, int *a2)
{
  int v4; // [esp+8h] [ebp-8h] BYREF
  int v5; // [esp+Ch] [ebp-4h]

  DrawScoreScreenStats(a1, (int)a2); /*0x72e9f9*/
  RenderScoreScreen(a1, a2, 0); /*0x72ea04*/
  v4 = 0; /*0x72ea0e*/
  v5 = 0; /*0x72ea16*/
  v4 = *(_DWORD *)dword_B0FC1C; /*0x72ea20*/
  v5 = *((_DWORD *)dword_B0FC1C + 1); /*0x72ea4a*/
  DrawToSurfaceSHP((int)a1, dword_B0FBA8, (int)dword_B0FB34, 0, &v4, a2, 1024, 0, 0, 0, 1000, 0, 0, 0, 0, 0); /*0x72ea57*/
}



// ==== 0x0072EA70  sub_72EA70  this=-  sig=ida-proto ====
void __fastcall sub_72EA70(int a1, int *a2)
{
  int v2; // [esp+8h] [ebp-8h] BYREF
  int v3; // [esp+Ch] [ebp-4h]

  v2 = 0; /*0x72ea7c*/
  v3 = 0; /*0x72ea80*/
  v2 = *(_DWORD *)dword_B0FC1C; /*0x72ea87*/
  v3 = *((_DWORD *)dword_B0FC1C + 1); /*0x72ea8e*/
  DrawToSurfaceSHP(a1, dword_B0FBB4, (int)dword_B0FB1C, 0, &v2, a2, 1024, 0, 0, 0, 1000, 0, 0, 0, 0, 0); /*0x72eab8*/
}



// ==== 0x0072EAD0  Map_Load_72EAD0  this=ObjectClass  sig=csp ====
void __fastcall Map_Load_72EAD0(int *a1, int *a2)
{
  int v4; // [esp+8h] [ebp-8h] BYREF
  int v5; // [esp+Ch] [ebp-4h]

  DrawScoreScreenStats(a1, (int)a2); /*0x72ead9*/
  RenderScoreScreen(a1, a2, 0); /*0x72eae4*/
  v4 = 0; /*0x72eaee*/
  v5 = 0; /*0x72eaf6*/
  v4 = *(_DWORD *)dword_B0FC1C; /*0x72eb00*/
  v5 = *((_DWORD *)dword_B0FC1C + 1); /*0x72eb2a*/
  DrawToSurfaceSHP((int)a1, dword_B0FBB4, (int)dword_B0FB1C, 0, &v4, a2, 1024, 0, 0, 0, 1000, 0, 0, 0, 0, 0); /*0x72eb37*/
}



// ==== 0x0072EB50  Render_Render_72EB50  this=-  sig=ida-proto ====
void *sub_72EB50()
{
  void *result; // eax

  dword_B0FAC4 = LoadFileSHP(off_844CD4, (bool *)&byte_B0FC95); /*0x72eb6b*/
  dword_B0F9DC = LoadFileSHP(off_844CD8, (bool *)&byte_B0FC96); /*0x72eb80*/
  dword_B0FAC0 = LoadFileSHP(off_844CDC, (bool *)&byte_B0FC97); /*0x72eb95*/
  dword_B0FB50 = LoadFileSHP(off_844CE0, (bool *)&byte_B0FC98); /*0x72ebaa*/
  dword_B0FA04 = LoadFileSHP(off_844CE4, (bool *)&byte_B0FC99); /*0x72ebbf*/
  dword_B0FAF8 = LoadFileSHP(off_844CE8, (bool *)&byte_B0FC9A); /*0x72ebd4*/
  dword_B0FA74 = LoadFileSHP(off_844CEC, (bool *)&byte_B0FC9B); /*0x72ebe9*/
  dword_B0FA38 = LoadFileSHP(off_844CF0, (bool *)&byte_B0FC9C); /*0x72ebfe*/
  dword_B0FAE8 = LoadFileSHP(off_844CF4, (bool *)&byte_B0FC9D); /*0x72ec13*/
  result = LoadFileSHP(off_844CF8, (bool *)&byte_B0FC9E); /*0x72ec18*/
  dword_B0FA54 = result; /*0x72ec1d*/
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
    v3 = *((__int16 *)dword_B0FB50 + 1); /*0x72ecff*/
  else
    v3 = *((__int16 *)dword_B0FA04 + 1); /*0x72ed05*/
  if ( a2 == 480 ) /*0x72ed0b*/
    v4 = *((__int16 *)dword_B0FB50 + 2); /*0x72ed0d*/
  else
    v4 = *((__int16 *)dword_B0FA04 + 2); /*0x72ed13*/
  v5 = (int *)__2_YAPAXI_Z(0x10u); /*0x72ed19*/
  if ( v5 ) /*0x72ed23*/
  {
    v5[1] = v2; /*0x72ed29*/
    *v5 = v35; /*0x72ed2c*/
    v5[2] = v3; /*0x72ed2e*/
    v5[3] = v4; /*0x72ed31*/
    dword_B0FC1C = v5; /*0x72ed34*/
  }
  else
  {
    dword_B0FC1C = 0; /*0x72ed3b*/
  }
  v6 = *((__int16 *)dword_B0FAF8 + 1); /*0x72ed4c*/
  v7 = *((__int16 *)dword_B0FAF8 + 2); /*0x72ed50*/
  v8 = v34 - v6; /*0x72ed54*/
  v9 = __2_YAPAXI_Z(0x10u); /*0x72ed56*/
  if ( v9 ) /*0x72ed60*/
  {
    *v9 = v8; /*0x72ed62*/
    v9[1] = v2; /*0x72ed64*/
    v9[2] = v6; /*0x72ed67*/
    v9[3] = v7; /*0x72ed6a*/
    dword_B0FC20 = v9; /*0x72ed6d*/
  }
  else
  {
    dword_B0FC20 = 0; /*0x72ed74*/
  }
  v10 = *((__int16 *)dword_B0FAC0 + 2); /*0x72ed86*/
  v11 = __2_YAPAXI_Z(0x10u); /*0x72ed8a*/
  if ( v11 ) /*0x72ed94*/
  {
    *v11 = v8; /*0x72ed96*/
    v11[1] = v2; /*0x72ed98*/
    v11[2] = v6; /*0x72ed9b*/
    v11[3] = v10; /*0x72ed9e*/
    dword_B0FC18 = v11; /*0x72eda1*/
  }
  else
  {
    dword_B0FC18 = 0; /*0x72eda8*/
  }
  v12 = v2 + *((_DWORD *)dword_B0FC20 + 3); /*0x72edc2*/
  v13 = *((__int16 *)dword_B0FA74 + 2); /*0x72edc4*/
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
  dword_B0FC24 = v14; /*0x72ede9*/
  v15 = v14[1]; /*0x72edf1*/
  v16 = *((__int16 *)dword_B0FAC4 + 1); /*0x72edf4*/
  v17 = *((__int16 *)dword_B0FAC4 + 2); /*0x72edf8*/
  v18 = *v14 + v14[2] - v16; /*0x72ee02*/
  v19 = (int *)__2_YAPAXI_Z(0x10u); /*0x72ee04*/
  if ( v19 ) /*0x72ee0e*/
  {
    *v19 = v18; /*0x72ee10*/
    v19[1] = v15; /*0x72ee12*/
    v19[2] = v16; /*0x72ee15*/
    v19[3] = v17; /*0x72ee18*/
    dword_B0FC10 = v19; /*0x72ee1b*/
  }
  else
  {
    dword_B0FC10 = 0; /*0x72ee22*/
  }
  v20 = *((__int16 *)dword_B0F9DC + 1); /*0x72ee33*/
  v21 = *((__int16 *)dword_B0F9DC + 2); /*0x72ee37*/
  v22 = *((_DWORD *)dword_B0FC24 + 1) + *((_DWORD *)dword_B0FC24 + 3) - v21; /*0x72ee48*/
  v23 = __2_YAPAXI_Z(0x10u); /*0x72ee4a*/
  if ( v23 ) /*0x72ee54*/
  {
    v23[1] = v22; /*0x72ee5a*/
    v23[2] = v20; /*0x72ee5f*/
    *v23 = v34 - v20; /*0x72ee62*/
    v23[3] = v21; /*0x72ee64*/
    dword_B0FC14 = v23; /*0x72ee67*/
  }
  else
  {
    dword_B0FC14 = 0; /*0x72ee6e*/
  }
  dword_B0FA20 = (v36 - *((_DWORD *)dword_B0FC20 + 3)) / *((_DWORD *)dword_B0FC24 + 3); /*0x72ee95*/
  v24 = dword_B0FA20 * *((_DWORD *)dword_B0FC24 + 3); /*0x72ee9d*/
  v25 = v24 + *((_DWORD *)dword_B0FC20 + 3); /*0x72eeab*/
  v26 = *((__int16 *)dword_B0FA38 + 1); /*0x72eead*/
  v27 = v24 + *((_DWORD *)dword_B0FC24 + 1); /*0x72eeb1*/
  v28 = __2_YAPAXI_Z(0x10u); /*0x72eeb3*/
  if ( v28 ) /*0x72eebd*/
  {
    v28[1] = v27; /*0x72eec3*/
    *v28 = v34 - v26; /*0x72eeca*/
    v28[2] = v26; /*0x72eecc*/
    v28[3] = v36 - v25; /*0x72eecf*/
    dword_B0FC28 = v28; /*0x72eed2*/
  }
  else
  {
    dword_B0FC28 = 0; /*0x72eed9*/
  }
  if ( v32 ) /*0x72eef4*/
    v29 = *((__int16 *)dword_B0FAE8 + 1); /*0x72eef6*/
  else
    v29 = *((__int16 *)dword_B0FA54 + 1); /*0x72eefc*/
  if ( v33 ) /*0x72ef06*/
    v30 = *((__int16 *)dword_B0FAE8 + 2); /*0x72ef08*/
  else
    v30 = *((__int16 *)dword_B0FA54 + 2); /*0x72ef0e*/
  result = (int *)__2_YAPAXI_Z(0x10u); /*0x72ef14*/
  if ( result ) /*0x72ef1e*/
  {
    result[2] = v29; /*0x72ef24*/
    *result = v35; /*0x72ef27*/
    result[3] = v30; /*0x72ef2f*/
    result[1] = v37 - v30; /*0x72ef34*/
    dword_B0FC2C = result; /*0x72ef38*/
  }
  else
  {
    dword_B0FC2C = 0; /*0x72ef45*/
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

  if ( byte_B0FC95 ) /*0x72ef6b*/
  {
    v0 = dword_B0FAC4; /*0x72ef6d*/
    if ( dword_B0FAC4 ) /*0x72ef75*/
    {
      FileTreeNode::Destroy(dword_B0FAC4); /*0x72ef79*/
      __3_YAXPAX_Z(v0); /*0x72ef7f*/
    }
    byte_B0FC95 = 0; /*0x72ef87*/
  }
  dword_B0FAC4 = 0; /*0x72ef92*/
  if ( byte_B0FC96 ) /*0x72ef9a*/
  {
    v1 = dword_B0F9DC; /*0x72ef9c*/
    if ( dword_B0F9DC ) /*0x72efa4*/
    {
      FileTreeNode::Destroy(dword_B0F9DC); /*0x72efa8*/
      __3_YAXPAX_Z(v1); /*0x72efae*/
    }
    byte_B0FC96 = 0; /*0x72efb6*/
  }
  dword_B0F9DC = 0; /*0x72efc1*/
  if ( byte_B0FC97 ) /*0x72efc9*/
  {
    v2 = dword_B0FAC0; /*0x72efcb*/
    if ( dword_B0FAC0 ) /*0x72efd3*/
    {
      FileTreeNode::Destroy(dword_B0FAC0); /*0x72efd7*/
      __3_YAXPAX_Z(v2); /*0x72efdd*/
    }
    byte_B0FC97 = 0; /*0x72efe5*/
  }
  dword_B0FAC0 = 0; /*0x72eff0*/
  if ( byte_B0FC98 ) /*0x72eff8*/
  {
    v3 = dword_B0FB50; /*0x72effa*/
    if ( dword_B0FB50 ) /*0x72f002*/
    {
      FileTreeNode::Destroy(dword_B0FB50); /*0x72f006*/
      __3_YAXPAX_Z(v3); /*0x72f00c*/
    }
    byte_B0FC98 = 0; /*0x72f014*/
  }
  dword_B0FB50 = 0; /*0x72f01f*/
  if ( byte_B0FC99 ) /*0x72f027*/
  {
    v4 = dword_B0FA04; /*0x72f029*/
    if ( dword_B0FA04 ) /*0x72f031*/
    {
      FileTreeNode::Destroy(dword_B0FA04); /*0x72f035*/
      __3_YAXPAX_Z(v4); /*0x72f03b*/
    }
    byte_B0FC99 = 0; /*0x72f043*/
  }
  dword_B0FA04 = 0; /*0x72f04e*/
  if ( byte_B0FC9A ) /*0x72f056*/
  {
    v5 = dword_B0FAF8; /*0x72f058*/
    if ( dword_B0FAF8 ) /*0x72f060*/
    {
      FileTreeNode::Destroy(dword_B0FAF8); /*0x72f064*/
      __3_YAXPAX_Z(v5); /*0x72f06a*/
    }
    byte_B0FC9A = 0; /*0x72f072*/
  }
  dword_B0FAF8 = 0; /*0x72f07d*/
  if ( byte_B0FC9B ) /*0x72f085*/
  {
    v6 = dword_B0FA74; /*0x72f087*/
    if ( dword_B0FA74 ) /*0x72f08f*/
    {
      FileTreeNode::Destroy(dword_B0FA74); /*0x72f093*/
      __3_YAXPAX_Z(v6); /*0x72f099*/
    }
    byte_B0FC9B = 0; /*0x72f0a1*/
  }
  dword_B0FA74 = 0; /*0x72f0ac*/
  if ( byte_B0FC9C ) /*0x72f0b4*/
  {
    v7 = dword_B0FA38; /*0x72f0b6*/
    if ( dword_B0FA38 ) /*0x72f0be*/
    {
      FileTreeNode::Destroy(dword_B0FA38); /*0x72f0c2*/
      __3_YAXPAX_Z(v7); /*0x72f0c8*/
    }
    byte_B0FC9C = 0; /*0x72f0d0*/
  }
  dword_B0FA38 = 0; /*0x72f0db*/
  if ( byte_B0FC9D ) /*0x72f0e3*/
  {
    v8 = dword_B0FAE8; /*0x72f0e5*/
    if ( dword_B0FAE8 ) /*0x72f0ed*/
    {
      FileTreeNode::Destroy(dword_B0FAE8); /*0x72f0f1*/
      __3_YAXPAX_Z(v8); /*0x72f0f7*/
    }
    byte_B0FC9D = 0; /*0x72f0ff*/
  }
  dword_B0FAE8 = 0; /*0x72f10a*/
  if ( byte_B0FC9E ) /*0x72f112*/
  {
    v9 = dword_B0FA54; /*0x72f114*/
    if ( dword_B0FA54 ) /*0x72f11c*/
    {
      FileTreeNode::Destroy(dword_B0FA54); /*0x72f120*/
      __3_YAXPAX_Z(v9); /*0x72f126*/
    }
    byte_B0FC9E = 0; /*0x72f12e*/
  }
  dword_B0FA54 = 0; /*0x72f134*/
}



// ==== 0x0072F140  LoadingScreen::CleanupObjects  this=LoadingScreen  sig=csp ====
void LoadingScreen::CleanupObjects(LoadingScreen *this)
{
  if ( *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[1048] ) /*0x72f14a*/
  {
    __3_YAXPAX_Z(*(void **)&g_BuildingLoadQueue_Array.__pad_F70[1048]); /*0x72f14d*/
    *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[1048] = 0; /*0x72f155*/
  }
  if ( *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[1052] ) /*0x72f163*/
  {
    (***(void (__thiscall ****)(_DWORD, int))&g_BuildingLoadQueue_Array.__pad_F70[1052])( /*0x72f169*/
      *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[1052],
      1);
    *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[1052] = 0; /*0x72f16b*/
  }
  if ( *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[1056] ) /*0x72f178*/
  {
    __3_YAXPAX_Z(*(void **)&g_BuildingLoadQueue_Array.__pad_F70[1056]); /*0x72f17b*/
    *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[1056] = 0; /*0x72f183*/
  }
  if ( *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[1060] ) /*0x72f191*/
  {
    (***(void (__thiscall ****)(_DWORD, int))&g_BuildingLoadQueue_Array.__pad_F70[1060])( /*0x72f197*/
      *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[1060],
      1);
    *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[1060] = 0; /*0x72f199*/
  }
  if ( *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[1064] ) /*0x72f1a6*/
  {
    __3_YAXPAX_Z(*(void **)&g_BuildingLoadQueue_Array.__pad_F70[1064]); /*0x72f1a9*/
    *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[1064] = 0; /*0x72f1b1*/
  }
  if ( *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[1068] ) /*0x72f1bf*/
  {
    (***(void (__thiscall ****)(_DWORD, int))&g_BuildingLoadQueue_Array.__pad_F70[1068])( /*0x72f1c5*/
      *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[1068],
      1);
    *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[1068] = 0; /*0x72f1c7*/
  }
}



// ==== 0x0072F350  House_Load  this=-  sig=ida-proto ====
_DWORD *sub_72F350()
{
  _DWORD *result; // eax

  FileTree::CleanupAll(); /*0x72f350*/
  LoadingScreen::FreeResources(); /*0x72f355*/
  LoadingScreen::FreeResources2(); /*0x72f35a*/
  byte_B0FC0C = 0; /*0x72f35f*/
  LoadingScreen::LoadSHPs(); /*0x72f366*/
  if ( *((_DWORD *)dword_A8B230 + 3374) == 2 ) /*0x72f377*/
  {
    LoadPaletteSimple(off_844BF8, &dword_B0FBEC, &dword_B0FBF0); /*0x72f389*/
    LoadPaletteSimple(off_844BFC[0], &dword_B0FBF4, &dword_B0FBF8); /*0x72f39e*/
  }
  else
  {
    LoadPaletteSimple(off_844C00, &dword_B0FBF4, &dword_B0FBF8); /*0x72f3b0*/
    LoadPaletteSimple(off_844BF4, &dword_B0FBEC, &dword_B0FBF0); /*0x72f3c5*/
  }
  LoadPaletteSimple(off_844BF0, &dword_B0FBE4, &dword_B0FBE8); /*0x72f3da*/
  LoadPaletteSimple(off_844C04, &dword_B0FBFC, &dword_B0FC00); /*0x72f3ef*/
  LoadPaletteSimple(off_844C08, &dword_B0FC04, &dword_B0FC08); /*0x72f404*/
  result = SetupScreenBuffers(dword_A8EB84, dword_A8EB88); /*0x72f415*/
  byte_B0FC0C = 1; /*0x72f41a*/
  return result; /*0x72f421*/
}



// ==== 0x0072F430  UI_Init_72F430  this=-  sig=ida-proto ====
char sub_72F430()
{
  return byte_B0FC0C; /*0x72f435*/
}



// ==== 0x0072F440  Game::InitializeToolTipColor  this=Game  sig=csp ====
char __thiscall Game::InitializeToolTipColor(Game *this)
{
  char result; // al

  if ( this ) /*0x72f442*/
  {
    if ( this == (Game *)1 ) /*0x72f460*/
    {
      *(_WORD *)&g_BuildingLoadQueue_Array.__pad_F70[620] = *(_WORD *)&g_BuildingLoadQueue_Array.__pad_F70[852]; /*0x72f46e*/
      g_BuildingLoadQueue_Array.__pad_F70[622] = g_BuildingLoadQueue_Array.__pad_F70[854]; /*0x72f475*/
      return g_BuildingLoadQueue_Array.__pad_F70[854]; /*0x72f469*/
    }
    else
    {
      *(_WORD *)&g_BuildingLoadQueue_Array.__pad_F70[620] = *(_WORD *)&g_BuildingLoadQueue_Array.__pad_F70[752]; /*0x72f488*/
      g_BuildingLoadQueue_Array.__pad_F70[622] = g_BuildingLoadQueue_Array.__pad_F70[754]; /*0x72f48f*/
    }
  }
  else
  {
    *(_WORD *)&g_BuildingLoadQueue_Array.__pad_F70[620] = *(_WORD *)&g_BuildingLoadQueue_Array.__pad_F70[552]; /*0x72f450*/
    g_BuildingLoadQueue_Array.__pad_F70[622] = g_BuildingLoadQueue_Array.__pad_F70[554]; /*0x72f456*/
    return g_BuildingLoadQueue_Array.__pad_F70[552]; /*0x72f444*/
  }
  return result; /*0x72f45c*/
}



// ==== 0x0072F4A0  UI_Load_72F4A0  this=-  sig=ida-proto ====
void *sub_72F4A0()
{
  return dword_B0FBE4; /*0x72f4a5*/
}



// ==== 0x0072F4B0  UI_Helper_72F4B0  this=-  sig=ida-proto ====
int sub_72F4B0()
{
  return dword_B0FBE8; /*0x72f4b5*/
}



// ==== 0x0072F4C0  sub_72F4C0  this=-  sig=ida-proto ====
void *sub_72F4C0()
{
  return dword_B0FC04; /*0x72f4c5*/
}



// ==== 0x0072F4D0  UI_Update_72F4D0  this=-  sig=ida-proto ====
int sub_72F4D0()
{
  return dword_B0FC08; /*0x72f4d5*/
}



// ==== 0x0072F4E0  UI_Load_72F4E0  this=-  sig=ida-proto ====
void *sub_72F4E0()
{
  return dword_B0FBFC; /*0x72f4e5*/
}



// ==== 0x0072F4F0  sub_72F4F0  this=-  sig=ida-proto ====
int sub_72F4F0()
{
  return dword_B0FC00; /*0x72f4f5*/
}



// ==== 0x0072F500  sub_72F500  this=-  sig=ida-proto ====
void *sub_72F500()
{
  return dword_B0FBF4; /*0x72f505*/
}



// ==== 0x0072F510  VtableStub::72F510  this=VtableStub  sig=ida-proto ====
int VtableStub::72F510()
{
  return dword_B0FBF8; /*0x72f515*/
}



// ==== 0x0072F520  sub_72F520  this=-  sig=ida-proto ====
void *sub_72F520()
{
  return dword_B0FBEC; /*0x72f525*/
}



// ==== 0x0072F530  sub_72F530  this=-  sig=ida-proto ====
int sub_72F530()
{
  return dword_B0FBF0; /*0x72f535*/
}



// ==== 0x0072F540  RenderCreditsScreen  this=Buffer  sig=csp ====
void __fastcall RenderCreditsScreen(int a1, int *a2, char a3)
{
  int v5; // ebp
  int v6; // edx
  int v7; // ebp
  int v8; // [esp+10h] [ebp-28h] BYREF
  int i; // [esp+14h] [ebp-24h]
  int v10[2]; // [esp+18h] [ebp-20h] BYREF
  int v11; // [esp+20h] [ebp-18h]
  int v12; // [esp+24h] [ebp-14h]
  int v13; // [esp+28h] [ebp-10h]
  int v14; // [esp+2Ch] [ebp-Ch]
  int v15; // [esp+34h] [ebp-4h]

  if ( !byte_B0FC0C ) /*0x72f552*/
  {
    LoadingScreen::LoadSHPs(); /*0x72f554*/
    Sides::MixFileYuriFiles3(); /*0x72f559*/
    SetupScreenBuffers(dword_A8EB84, dword_A8EB88); /*0x72f56a*/
    byte_B0FC0C = 1; /*0x72f56f*/
  }
  (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)a1 + 24))(a1, 0); /*0x72f57d*/
  v8 = 0; /*0x72f585*/
  i = 0; /*0x72f589*/
  v8 = *(_DWORD *)dword_B0FC30; /*0x72f58f*/
  i = *((_DWORD *)dword_B0FC30 + 1); /*0x72f59b*/
  if ( g_DisplayWidth == 640 ) /*0x72f5a4*/
  {
    DrawToSurfaceSHP(a1, dword_B0FBF0, (int)dword_B0FAD4, 0, &v8, a2, 1024, 0, 0, 0, 1000, 0, 0, 0, 0, 0); /*0x72f5ca*/
  }
  else if ( g_DisplayWidth == 800 ) /*0x72f5d1*/
  {
    DrawToSurfaceSHP(a1, dword_B0FBF0, (int)dword_B0FAC8, 0, &v8, a2, 1024, 0, 0, 0, 1000, 0, 0, 0, 0, 0); /*0x72f5f6*/
  }
  else
  {
    DrawToSurfaceSHP(a1, dword_B0FBF0, (int)dword_B0FA50, 0, &v8, a2, 1024, 0, 0, 0, 1000, 0, 0, 0, 0, 0); /*0x72f624*/
  }
  v8 = *(_DWORD *)dword_B0FC34; /*0x72f630*/
  i = *((_DWORD *)dword_B0FC34 + 1); /*0x72f65a*/
  DrawToSurfaceSHP(a1, dword_B0FBE8, (int)dword_B0FB08, 0, &v8, a2, 1024, 0, 0, 0, 1000, 0, 0, 0, 0, 0); /*0x72f667*/
  v8 = *(_DWORD *)dword_B0FC38; /*0x72f67a*/
  i = *((_DWORD *)dword_B0FC38 + 1); /*0x72f681*/
  DrawToSurfaceSHP(a1, dword_B0FBE8, (int)dword_B0F9E0, 0, &v8, a2, 1024, 0, 0, 0, 1000, 0, 0, 0, 0, 0); /*0x72f6aa*/
  v8 = *(_DWORD *)dword_B0FC3C; /*0x72f6b6*/
  i = *((_DWORD *)dword_B0FC3C + 1); /*0x72f6e0*/
  DrawToSurfaceSHP(a1, dword_B0FBF8, (int)dword_B0FA68, 0, &v8, a2, 1024, 0, 0, 0, 1000, 0, 0, 0, 0, 0); /*0x72f6ed*/
  v8 = *(_DWORD *)dword_B0FC44; /*0x72f700*/
  i = *((_DWORD *)dword_B0FC44 + 1); /*0x72f707*/
  DrawToSurfaceSHP(a1, dword_B0FBE8, (int)dword_B0FA70, 0, &v8, a2, 1024, 0, 0, 0, 1000, 0, 0, 0, 0, 0); /*0x72f730*/
  v5 = 0; /*0x72f73a*/
  v8 = *(_DWORD *)dword_B0FC48; /*0x72f73e*/
  for ( i = *((_DWORD *)dword_B0FC48 + 1); v5 < dword_B0FADC; i += *((_DWORD *)dword_B0FC48 + 3) ) /*0x72f750*/
  {
    DrawToSurfaceSHP(a1, dword_B0FBE8, (int)dword_B0FA00, 0, &v8, a2, 1024, 0, 0, 0, 1000, 0, 0, 0, 0, 0); /*0x72f77d*/
    ++v5; /*0x72f796*/
  }
  v8 = *(_DWORD *)dword_B0FC4C; /*0x72f7a6*/
  i = *((_DWORD *)dword_B0FC4C + 1); /*0x72f7d0*/
  DrawToSurfaceSHP(a1, dword_B0FBE8, (int)dword_B0FA8C, 0, &v8, a2, 1024, 0, 0, 0, 1000, 0, 0, 0, 0, 0); /*0x72f7dd*/
  v8 = *(_DWORD *)dword_B0FC50; /*0x72f7ec*/
  i = *((_DWORD *)dword_B0FC50 + 1); /*0x72f7f3*/
  DrawToSurfaceSHP(a1, dword_B0FBE8, (int)dword_B0FA48, 0, &v8, a2, 1024, 0, 0, 0, 1000, 0, 0, 0, 0, 0); /*0x72f820*/
  v10[0] = *a2; /*0x72f829*/
  v10[1] = a2[1]; /*0x72f830*/
  v11 = a2[2]; /*0x72f837*/
  v6 = a2[3]; /*0x72f841*/
  v13 = dword_886FB0; /*0x72f849*/
  v12 = v6; /*0x72f857*/
  v11 = dword_886FB8 - 168; /*0x72f861*/
  v14 = dword_886FB4; /*0x72f86a*/
  v15 = dword_886FBC; /*0x72f86e*/
  v8 = *(_DWORD *)dword_B0FC5C; /*0x72f874*/
  i = *((_DWORD *)dword_B0FC5C + 1); /*0x72f882*/
  DrawToSurfaceSHP(a1, dword_B0FBE8, (int)dword_B0FA3C, 0, &v8, v10, 1024, 0, 0, 0, 1000, 0, 0, 0, 0, 0); /*0x72f8b0*/
  if ( a3 ) /*0x72f8bb*/
  {
    v8 = *(_DWORD *)dword_B0FC60; /*0x72f8c8*/
    i = *((_DWORD *)dword_B0FC60 + 1); /*0x72f8f3*/
    DrawToSurfaceSHP(a1, dword_B0FBE8, (int)dword_B0FA90, 2u, &v8, a2, 1024, 0, 0, 0, 1000, 0, 0, 0, 0, 0); /*0x72f900*/
    v7 = 0; /*0x72f90a*/
    v8 = *(_DWORD *)dword_B0FC68; /*0x72f90e*/
    for ( i = *((_DWORD *)dword_B0FC68 + 1); v7 < dword_B0F9E4; v8 += *((_DWORD *)dword_B0FC68 + 2) ) /*0x72f920*/
    {
      DrawToSurfaceSHP(a1, dword_B0FBE8, (int)dword_B0FAA8, 0, &v8, a2, 1024, 0, 0, 0, 1000, 0, 0, 0, 0, 0); /*0x72f952*/
      ++v7; /*0x72f96a*/
    }
  }
  else
  {
    v8 = *(_DWORD *)dword_B0FC64; /*0x72f97f*/
    i = *((_DWORD *)dword_B0FC64 + 1); /*0x72f986*/
    DrawToSurfaceSHP(a1, dword_B0FBE8, (int)dword_B0FA90, 2u, &v8, a2, 1024, 0, 0, 0, 1000, 0, 0, 0, 0, 0); /*0x72f9b4*/
  }
  v8 = *(_DWORD *)dword_B0FC6C; /*0x72f9c0*/
  i = *((_DWORD *)dword_B0FC6C + 1); /*0x72f9ea*/
  DrawToSurfaceSHP(a1, dword_B0FBE8, (int)dword_B0FABC, 0, &v8, a2, 1024, 0, 0, 0, 1000, 0, 0, 0, 0, 0); /*0x72f9f7*/
}



// ==== 0x0072FA10  LoadingScreen::LoadSHPs  this=LoadingScreen  sig=ida-proto ====
void *LoadingScreen_LoadSHPs()
{
  void *SHP; // eax
  char *v1; // ecx
  void *result; // eax

  if ( *((_DWORD *)dword_A8B230 + 3374) == 2 ) /*0x72fa21*/
  {
    dword_B0FA68 = LoadFileSHP(off_844D48, (bool *)&byte_B0FCA5); /*0x72fa39*/
    dword_B0FAC8 = LoadFileSHP(off_844D3C, (bool *)&byte_B0FCA1); /*0x72fa4e*/
    SHP = LoadFileSHP(off_844D40, (bool *)&byte_B0FCA0); /*0x72fa53*/
    v1 = off_844D44[0]; /*0x72fa58*/
  }
  else
  {
    dword_B0FA68 = LoadFileSHP(off_844D14, (bool *)&byte_B0FCA5); /*0x72fa80*/
    dword_B0FAC8 = LoadFileSHP(off_844D04, (bool *)&byte_B0FCA1); /*0x72fa95*/
    SHP = LoadFileSHP(off_844D00, (bool *)&byte_B0FCA0); /*0x72fa9a*/
    v1 = off_844D08; /*0x72fa9f*/
  }
  dword_B0FAD4 = SHP; /*0x72fa5e*/
  dword_B0FA50 = LoadFileSHP(v1, (bool *)&byte_B0FCA2); /*0x72fabf*/
  dword_B0F9EC = LoadFileSHP(off_844CFC, (bool *)&byte_B0FC9F); /*0x72fad4*/
  dword_B0FB08 = LoadFileSHP(off_844D0C, (bool *)&byte_B0FCA3); /*0x72fae9*/
  dword_B0F9E0 = LoadFileSHP(off_844D10, (bool *)&byte_B0FCA4); /*0x72fafe*/
  dword_B0FA70 = LoadFileSHP(off_844D18, (bool *)&byte_B0FCA6); /*0x72fb13*/
  dword_B0FAFC = LoadFileSHP(off_844D1C, (bool *)&byte_B0FCA7); /*0x72fb28*/
  dword_B0FA00 = LoadFileSHP(off_844D20, (bool *)&byte_B0FCA8); /*0x72fb3d*/
  dword_B0FA8C = LoadFileSHP(off_844D24, (bool *)&byte_B0FCA9); /*0x72fb52*/
  dword_B0FA48 = LoadFileSHP(off_844D28, (bool *)&byte_B0FCAA); /*0x72fb67*/
  dword_B0FA3C = LoadFileSHP(off_844D2C, (bool *)&byte_B0FCAB); /*0x72fb7c*/
  dword_B0FA90 = LoadFileSHP(off_844D30, (bool *)&byte_B0FCAC); /*0x72fb91*/
  dword_B0FAA8 = LoadFileSHP(off_844D34, (bool *)&byte_B0FCAD); /*0x72fba6*/
  result = LoadFileSHP(off_844D38, (bool *)&byte_B0FCAE); /*0x72fbab*/
  dword_B0FABC = result; /*0x72fbb0*/
  return result; /*0x72fbb5*/
}



// ==== 0x0072FBC0  Sides::MixFileYuriFiles3  this=Sides  sig=ida-proto ====
int Sides::MixFileYuriFiles3()
{
  if ( *((_DWORD *)dword_A8B230 + 3374) == 2 ) /*0x72fbcc*/
  {
    LoadPaletteSimple(off_844BF8, &dword_B0FBEC, &dword_B0FBF0); /*0x72fbde*/
    LoadPaletteSimple(off_844BFC[0], &dword_B0FBF4, &dword_B0FBF8); /*0x72fbf3*/
  }
  else
  {
    LoadPaletteSimple(off_844C00, &dword_B0FBF4, &dword_B0FBF8); /*0x72fc05*/
    LoadPaletteSimple(off_844BF4, &dword_B0FBEC, &dword_B0FBF0); /*0x72fc1a*/
  }
  LoadPaletteSimple(off_844BF0, &dword_B0FBE4, &dword_B0FBE8); /*0x72fc2f*/
  LoadPaletteSimple(off_844C04, &dword_B0FBFC, &dword_B0FC00); /*0x72fc44*/
  return LoadPaletteSimple(off_844C08, &dword_B0FC04, &dword_B0FC08); /*0x72fc5e*/
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
    v3 = (__int16 *)dword_B0FAD4; /*0x72fc79*/
  }
  else
  {
    v3 = (__int16 *)dword_B0FAC8; /*0x72fc80*/
    if ( a1 != 800 ) /*0x72fc8b*/
      v3 = (__int16 *)dword_B0FA50; /*0x72fc8d*/
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
    dword_B0FC30 = v6; /*0x72fcb5*/
  }
  else
  {
    dword_B0FC30 = 0; /*0x72fcbc*/
  }
  v7 = *((__int16 *)dword_B0FB08 + 1); /*0x72fcc9*/
  v8 = *((__int16 *)dword_B0FB08 + 2); /*0x72fccd*/
  v9 = a1 - v7; /*0x72fcd1*/
  v10 = __2_YAPAXI_Z(0x10u); /*0x72fcd3*/
  if ( v10 ) /*0x72fcdd*/
  {
    *v10 = v9; /*0x72fcdf*/
    v10[1] = 0; /*0x72fce1*/
    v10[2] = v7; /*0x72fce4*/
    v10[3] = v8; /*0x72fce7*/
    dword_B0FC34 = v10; /*0x72fcea*/
  }
  else
  {
    dword_B0FC34 = 0; /*0x72fcf1*/
  }
  v11 = *((__int16 *)dword_B0F9E0 + 2); /*0x72fcfe*/
  v12 = __2_YAPAXI_Z(0x10u); /*0x72fd02*/
  if ( v12 ) /*0x72fd0c*/
  {
    *v12 = v9; /*0x72fd0e*/
    v12[1] = v8; /*0x72fd10*/
    v12[2] = v7; /*0x72fd13*/
    v12[3] = v11; /*0x72fd16*/
    dword_B0FC38 = v12; /*0x72fd19*/
  }
  else
  {
    dword_B0FC38 = 0; /*0x72fd20*/
  }
  v13 = v11 + v8; /*0x72fd30*/
  v14 = *((__int16 *)dword_B0FA68 + 2); /*0x72fd34*/
  v15 = __2_YAPAXI_Z(0x10u); /*0x72fd38*/
  if ( v15 ) /*0x72fd42*/
  {
    *v15 = v9; /*0x72fd44*/
    v15[1] = v13; /*0x72fd46*/
    v15[2] = v7; /*0x72fd49*/
    v15[3] = v14; /*0x72fd4c*/
    dword_B0FC3C = v15; /*0x72fd4f*/
  }
  else
  {
    dword_B0FC3C = 0; /*0x72fd56*/
  }
  v16 = v14 + v13; /*0x72fd66*/
  v17 = *((__int16 *)dword_B0FA70 + 2); /*0x72fd6a*/
  v18 = __2_YAPAXI_Z(0x10u); /*0x72fd6e*/
  if ( v18 ) /*0x72fd78*/
  {
    *v18 = v9; /*0x72fd7a*/
    v18[1] = v16; /*0x72fd7c*/
    v18[2] = v7; /*0x72fd7f*/
    v18[3] = v17; /*0x72fd82*/
    dword_B0FC44 = v18; /*0x72fd85*/
  }
  else
  {
    dword_B0FC44 = 0; /*0x72fd8c*/
  }
  v19 = v17 + v16; /*0x72fd9b*/
  v20 = *((__int16 *)dword_B0FAFC + 2); /*0x72fd9f*/
  v21 = __2_YAPAXI_Z(0x10u); /*0x72fda3*/
  if ( v21 ) /*0x72fdad*/
  {
    *v21 = v9; /*0x72fdaf*/
    v21[1] = v19; /*0x72fdb1*/
    v21[2] = v7; /*0x72fdb4*/
    v21[3] = v20; /*0x72fdb7*/
    dword_B0FC48 = v21; /*0x72fdba*/
  }
  else
  {
    dword_B0FC48 = 0; /*0x72fdc1*/
  }
  v22 = *((__int16 *)dword_B0FA8C + 2); /*0x72fdd3*/
  v23 = __2_YAPAXI_Z(0x10u); /*0x72fdd7*/
  if ( v23 ) /*0x72fde1*/
  {
    *v23 = v9; /*0x72fde3*/
    v23[1] = v19; /*0x72fde5*/
    v23[2] = v7; /*0x72fde8*/
    v23[3] = v22; /*0x72fdeb*/
    dword_B0FC4C = v23; /*0x72fdee*/
  }
  else
  {
    dword_B0FC4C = 0; /*0x72fdf5*/
  }
  v24 = *((__int16 *)dword_B0FA48 + 2); /*0x72fe07*/
  v25 = __2_YAPAXI_Z(0x10u); /*0x72fe0b*/
  if ( v25 ) /*0x72fe15*/
  {
    *v25 = v9; /*0x72fe17*/
    v25[1] = v19; /*0x72fe19*/
    v25[2] = v7; /*0x72fe1c*/
    v25[3] = v24; /*0x72fe1f*/
    dword_B0FC50 = v25; /*0x72fe22*/
  }
  else
  {
    dword_B0FC50 = 0; /*0x72fe29*/
  }
  dword_B0FADC = (a2 /*0x72fe7a*/
                - *((_DWORD *)dword_B0FC4C + 3)
                - *((_DWORD *)dword_B0FC44 + 3)
                - *((_DWORD *)dword_B0FC3C + 3)
                - *((_DWORD *)dword_B0FC38 + 3)
                - *((_DWORD *)dword_B0FC34 + 3))
               / *((_DWORD *)dword_B0FC48 + 3);
  v26 = *((_DWORD *)dword_B0FC48 + 3) * dword_B0FADC + v19; /*0x72fe83*/
  *((_DWORD *)dword_B0FC4C + 1) = v26; /*0x72fe85*/
  v27 = v26 + *((_DWORD *)dword_B0FC4C + 3); /*0x72fe96*/
  v28 = a2 - 32; /*0x72fe98*/
  *((_DWORD *)dword_B0FC50 + 1) = v27; /*0x72fe9b*/
  v29 = dword_A8EB84 - 168; /*0x72fea4*/
  v30 = __2_YAPAXI_Z(0x10u); /*0x72feaa*/
  if ( v30 ) /*0x72feb6*/
  {
    *v30 = 0; /*0x72feb8*/
    v30[1] = v28; /*0x72feba*/
    v30[2] = v29; /*0x72febd*/
    v30[3] = 32; /*0x72fec0*/
    dword_B0FC58 = v30; /*0x72fec7*/
  }
  else
  {
    dword_B0FC58 = 0; /*0x72fece*/
  }
  v31 = *((__int16 *)dword_B0FA3C + 1); /*0x72fedb*/
  v32 = *((__int16 *)dword_B0FA3C + 2); /*0x72fedf*/
  v33 = __2_YAPAXI_Z(0x10u); /*0x72fee3*/
  if ( v33 ) /*0x72feed*/
  {
    *v33 = 0; /*0x72feef*/
    v33[1] = v28; /*0x72fef1*/
    v33[2] = v31; /*0x72fef4*/
    v33[3] = v32; /*0x72fef7*/
    dword_B0FC5C = v33; /*0x72fefa*/
  }
  else
  {
    dword_B0FC5C = 0; /*0x72ff01*/
  }
  v34 = *((__int16 *)dword_B0FA90 + 1); /*0x72ff0e*/
  v35 = *((__int16 *)dword_B0FA90 + 2); /*0x72ff12*/
  v36 = __2_YAPAXI_Z(0x10u); /*0x72ff16*/
  if ( v36 ) /*0x72ff20*/
  {
    *v36 = 0; /*0x72ff22*/
    v36[1] = v28; /*0x72ff24*/
    v36[2] = v34; /*0x72ff27*/
    v36[3] = v35; /*0x72ff2a*/
    dword_B0FC60 = v36; /*0x72ff2d*/
  }
  else
  {
    dword_B0FC60 = 0; /*0x72ff34*/
  }
  v37 = __2_YAPAXI_Z(0x10u); /*0x72ff3c*/
  if ( v37 ) /*0x72ff46*/
  {
    *v37 = 0; /*0x72ff48*/
    v37[1] = v28; /*0x72ff4a*/
    v37[2] = v34; /*0x72ff4d*/
    v37[3] = v35; /*0x72ff50*/
    dword_B0FC64 = v37; /*0x72ff53*/
  }
  else
  {
    dword_B0FC64 = 0; /*0x72ff5a*/
  }
  v38 = *((__int16 *)dword_B0FAA8 + 1); /*0x72ff67*/
  v39 = *((__int16 *)dword_B0FAA8 + 2); /*0x72ff6b*/
  v40 = __2_YAPAXI_Z(0x10u); /*0x72ff6f*/
  if ( v40 ) /*0x72ff79*/
  {
    *v40 = 0; /*0x72ff7b*/
    v40[1] = v28; /*0x72ff7d*/
    v40[2] = v38; /*0x72ff80*/
    v40[3] = v39; /*0x72ff83*/
    dword_B0FC68 = v40; /*0x72ff86*/
  }
  else
  {
    dword_B0FC68 = 0; /*0x72ff8d*/
  }
  v41 = *((__int16 *)dword_B0FABC + 1); /*0x72ff9a*/
  v42 = *((__int16 *)dword_B0FABC + 2); /*0x72ff9e*/
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
  dword_B0FC6C = v44; /*0x72ffc9*/
  dword_B0F9E4 = (a1 - *((_DWORD *)dword_B0FC60 + 2) - *((_DWORD *)dword_B0FC34 + 2) - v44[2]) /*0x72ffee*/
               / *((_DWORD *)dword_B0FC68 + 2);
  v45 = *(_DWORD *)dword_B0FC34 - v44[2]; /*0x72fff5*/
  *v44 = v45; /*0x72fff8*/
  v46 = v45 - dword_B0F9E4 * *((_DWORD *)dword_B0FC68 + 2); /*0x73000a*/
  *(_DWORD *)dword_B0FC68 = v46; /*0x73000c*/
  v47 = v46 - *((_DWORD *)dword_B0FC60 + 2); /*0x730014*/
  *(_DWORD *)dword_B0FC60 = v47; /*0x730017*/
  dword_B0FAD8 = v47; /*0x73001f*/
  v48 = *(_DWORD *)dword_B0FC6C - *((_DWORD *)dword_B0FC64 + 2); /*0x73002e*/
  *(_DWORD *)dword_B0FC64 = v48; /*0x730030*/
  dword_B0FAA4 = v48; /*0x730038*/
  dword_B0FA78 = *(_DWORD *)dword_B0FC6C - *((_DWORD *)dword_B0FC60 + 2) - *(_DWORD *)dword_B0FC60; /*0x730058*/
  v49 = *(_DWORD *)dword_B0FC38; /*0x730064*/
  v50 = *((_DWORD *)dword_B0FC38 + 1); /*0x730066*/
  v51 = *((_DWORD *)dword_B0FC38 + 2); /*0x730069*/
  v52 = *((_DWORD *)dword_B0FC38 + 3) + *((_DWORD *)dword_B0FC3C + 3); /*0x73006c*/
  v53 = __2_YAPAXI_Z(0x10u); /*0x73006e*/
  if ( v53 ) /*0x730078*/
  {
    *v53 = v49; /*0x73007a*/
    v53[1] = v50; /*0x73007c*/
    v53[2] = v51; /*0x73007f*/
    v53[3] = v52; /*0x730082*/
    dword_B0FC40 = v53; /*0x730085*/
  }
  else
  {
    dword_B0FC40 = 0; /*0x73008c*/
  }
  v54 = *(_DWORD *)dword_B0FC44; /*0x7300b9*/
  v55 = *((_DWORD *)dword_B0FC44 + 1); /*0x7300bb*/
  v56 = *((_DWORD *)dword_B0FC44 + 2); /*0x7300be*/
  v57 = *((_DWORD *)dword_B0FC44 + 3) + *((_DWORD *)dword_B0FC4C + 3) + dword_B0FADC * *((_DWORD *)dword_B0FC48 + 3); /*0x7300c3*/
  result = __2_YAPAXI_Z(0x10u); /*0x7300c5*/
  if ( result ) /*0x7300cf*/
  {
    *result = v54; /*0x7300d1*/
    result[3] = v57; /*0x7300d3*/
    result[2] = v56; /*0x7300d7*/
    result[1] = v55; /*0x7300db*/
    dword_B0FC54 = result; /*0x7300df*/
  }
  else
  {
    dword_B0FC54 = 0; /*0x7300ec*/
  }
  return result; /*0x7300d6*/
}


