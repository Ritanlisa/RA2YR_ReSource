char __userpurge SuperWeaponTypeClass::SD_vt25@<al>(
        SuperWeaponTypeClass *this,
        double a2@<st1>,
        double a3@<st0>,
        unsigned __int8 ***a4)
{
  int v4; // ecx
  _DWORD *v6; // edi
  _DWORD *v7; // eax
  int v8; // ecx
  int SWProperties; // eax
  char Bool_Overwrite; // al
  int v11; // ecx
  int Int_Overwrite; // eax
  char v13; // al
  char v14; // cl
  char v15; // al
  char v16; // al
  int v17; // edi
  int Index; // eax
  int v19; // edi
  int v20; // eax
  int v21; // edx
  char **v23; // edi
  char **v24; // edi
  int v25; // edi
  int v26; // eax
  char v27; // cl
  char v28; // al
  int v30; // eax
  char *v31; // edi
  void *v32; // eax
  double v34; // [esp+0h] [ebp-408h]
  char v35; // [esp+4h] [ebp-404h]
  char v36; // [esp+4h] [ebp-404h]
  char v37; // [esp+4h] [ebp-404h]
  char v38; // [esp+4h] [ebp-404h]
  int v39; // [esp+18h] [ebp-3F0h]
  int v40; // [esp+18h] [ebp-3F0h]
  char Destination[24]; // [esp+1Ch] [ebp-3ECh] BYREF
  char v42; // [esp+34h] [ebp-3D4h]
  char v43[40]; // [esp+38h] [ebp-3D0h] BYREF
  char v44[40]; // [esp+60h] [ebp-3A8h] BYREF
  VocClass v45; // [esp+88h] [ebp-380h] BYREF
  char Buffer[512]; // [esp+208h] [ebp-200h] BYREF

  _EBP = v4;
  INIClass::ResetSection((INIClass *)this);
  if ( !(unsigned __int8)AbstractTypeClass::LoadFromINI((AbstractTypeClass *)_EBP, (unsigned __int8 ***)this) )
    return 0;
  v6 = *(_DWORD **)(_EBP + 156);
  if ( INIClass::GetString(
         (INIClass *)this,
         (unsigned __int8 *)(_EBP + 36),
         aWeapontype,
         &g_INI_DefaultBuffer,
         (char *)&v45,
         128) )
  {
    v7 = InfantryTypeClass::Find((char *)&v45);
  }
  else
  {
    v7 = v6;
  }
  v8 = *(_DWORD *)(_EBP + 188);
  *(_DWORD *)(_EBP + 156) = v7;
  SWProperties = SuperWeaponTypeClass::loadSWProperties(
                   this,
                   (unsigned __int8 *)(_EBP + 36),
                   (unsigned __int8 *)g_INI_Key_Action,
                   v8);
  v35 = *(_BYTE *)(_EBP + 230);
  *(_DWORD *)(_EBP + 188) = SWProperties;
  *(_BYTE *)(_EBP + 230) = INIClass::ReadBool_Overwrite(&this->vfptr, (unsigned __int8 *)(_EBP + 36), aIspowered, v35);
  Bool_Overwrite = INIClass::ReadBool_Overwrite(
                     &this->vfptr,
                     (unsigned __int8 *)(_EBP + 36),
                     aDisableablefro,
                     *(_BYTE *)(_EBP + 231));
  v11 = *(_DWORD *)(_EBP + 232);
  *(_BYTE *)(_EBP + 231) = Bool_Overwrite;
  Int_Overwrite = INIClass::ReadInt_Overwrite((bool *)this, (unsigned __int8 *)(_EBP + 36), aFlashsidebarta, v11);
  v36 = *(_BYTE *)(_EBP + 236);
  *(_DWORD *)(_EBP + 232) = Int_Overwrite;
  *(_BYTE *)(_EBP + 236) = INIClass::ReadBool_Overwrite(
                             &this->vfptr,
                             (unsigned __int8 *)(_EBP + 36),
                             aAidefendagains,
                             v36);
  v13 = INIClass::ReadBool_Overwrite(&this->vfptr, (unsigned __int8 *)(_EBP + 36), aPreclick, *(_BYTE *)(_EBP + 237));
  v14 = *(_BYTE *)(_EBP + 238);
  *(_BYTE *)(_EBP + 237) = v13;
  v15 = INIClass::ReadBool_Overwrite(&this->vfptr, (unsigned __int8 *)(_EBP + 36), aPostclick, v14);
  v37 = *(_BYTE *)(_EBP + 244);
  *(_BYTE *)(_EBP + 238) = v15;
  v16 = INIClass::ReadBool_Overwrite(&this->vfptr, (unsigned __int8 *)(_EBP + 36), aShowtimer, v37);
  v17 = *(_DWORD *)(_EBP + 192);
  *(_BYTE *)(_EBP + 244) = v16;
  if ( !INIClass::GetString(
          (INIClass *)this,
          (unsigned __int8 *)(_EBP + 36),
          aSpecialsound,
          &g_INI_DefaultBuffer,
          (char *)&v45,
          128)
    || (Index = VocClass::FindIndex(&v45), Index == -1) )
  {
    Index = v17;
  }
  v19 = *(_DWORD *)(_EBP + 196);
  *(_DWORD *)(_EBP + 192) = Index;
  if ( !INIClass::GetString(
          (INIClass *)this,
          (unsigned __int8 *)(_EBP + 36),
          g_INI_Key_StartSound,
          &g_INI_DefaultBuffer,
          (char *)&v45,
          128)
    || (v20 = VocClass::FindIndex(&v45), v20 == -1) )
  {
    v20 = v19;
  }
  __asm { fld     dword ptr [ebp+0F8h] }
  *(_DWORD *)(_EBP + 196) = v20;
  __asm { fstp    [esp+408h+var_408]; double }
  INIClass::ReadDouble_Overwrite((double *)&this->vfptr, (unsigned __int8 *)(_EBP + 36), g_INI_Key_Range, v34);
  v21 = *(_DWORD *)(_EBP + 252);
  __asm { fstp    dword ptr [ebp+0F8h] }
  *(float *)(_EBP + 248) = _ET1;
  *(_DWORD *)(_EBP + 252) = INIClass::ReadInt_Overwrite(
                              (bool *)this,
                              (unsigned __int8 *)(_EBP + 36),
                              aLinemultiplier,
                              v21);
  INIClass::GetString(
    (INIClass *)this,
    (unsigned __int8 *)(_EBP + 36),
    (unsigned __int8 *)g_INI_Key_Type,
    &g_INI_DefaultBuffer,
    v44,
    40);
  if ( strlen(v44) )
  {
    v39 = 0;
    v23 = off_8425C0;
    while ( _strcmpi(*v23, v44) )
    {
      ++v23;
      ++v39;
      if ( (int)v23 >= (int)aMultimissile )
        goto LABEL_18;
    }
    if ( v39 != -1 )
      *(_DWORD *)(_EBP + 180) = v39;
  }
LABEL_18:
  INIClass::GetString((INIClass *)this, (unsigned __int8 *)(_EBP + 36), aPredependent, &g_INI_DefaultBuffer, v43, 40);
  if ( strlen(v43) )
  {
    v40 = 0;
    v24 = off_8425C0;
    while ( _strcmpi(*v24, v43) )
    {
      ++v24;
      ++v40;
      if ( (int)v24 >= (int)aMultimissile )
        goto LABEL_25;
    }
    if ( v40 != -1 )
      *(_DWORD *)(_EBP + 240) = v40;
  }
LABEL_25:
  v25 = *(_DWORD *)(_EBP + 200);
  if ( INIClass::GetString(
         (INIClass *)this,
         (unsigned __int8 *)(_EBP + 36),
         aAuxbuilding,
         &g_INI_DefaultBuffer,
         (char *)&v45,
         128) )
  {
    v26 = BuildingTypeClass::FindOrCreate((char *)&v45);
  }
  else
  {
    v26 = v25;
  }
  v27 = *(_BYTE *)(_EBP + 229);
  *(_DWORD *)(_EBP + 200) = v26;
  v28 = INIClass::ReadBool_Overwrite(&this->vfptr, (unsigned __int8 *)(_EBP + 36), aUsechargedrain, v27);
  v38 = *(_BYTE *)(_EBP + 245);
  *(_BYTE *)(_EBP + 229) = v28;
  *(_BYTE *)(_EBP + 245) = INIClass::ReadBool_Overwrite(
                             &this->vfptr,
                             (unsigned __int8 *)(_EBP + 36),
                             aManualcontrol,
                             v38);
  INIClass::ReadDouble_Overwrite((double *)&this->vfptr, (unsigned __int8 *)(_EBP + 36), aRechargetime, 0.0);
  __asm
  {
    fcom    ds:dbl_7E2800
    fnstsw  ax
  }
  if ( (_AX & 0x4000) != 0 )
  {
    __asm { fstp    st }
  }
  else
  {
    __asm { fmul    ds:flt_7F4100 }
    LOWORD(v30) = Math::RoundToInt(a3);
    *(_DWORD *)(_EBP + 176) = v30;
  }
  v31 = (char *)(_EBP + 204);
  INIClass::GetString(
    (INIClass *)this,
    (unsigned __int8 *)(_EBP + 36),
    aSidebarimage,
    (char *)(_EBP + 204),
    (char *)&v45.Name[5],
    256);
  if ( &v45 == (VocClass *)-128 )
  {
    Destination[0] = (unsigned __int8)&v45.Name[5];
  }
  else
  {
    strncpy(Destination, (const char *)&v45.Name[5], 0x18u);
    v42 = 0;
  }
  if ( Destination != v31 )
  {
    qmemcpy(v31, Destination, 0x18u);
    *(_BYTE *)(_EBP + 228) = v42;
  }
  _makepath(Buffer, 0, 0, (const char *)(_EBP + 204), Ext);
  v32 = SearchMIXFile(Buffer, 0);
  *(_DWORD *)(_EBP + 184) = v32;
  if ( !v32 )
    *(_DWORD *)(_EBP + 184) = SearchMIXFile(aXxiconShp, 0);
  return 1;
}
