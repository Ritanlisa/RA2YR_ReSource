char __thiscall ObjectTypeClass::LoadFromINI(ObjectTypeClass *this, unsigned __int8 ***a2)
{
  int CrushSound; // edi
  int Index; // eax
  int AmbientSound; // edi
  int v6; // eax
  char v7; // cl
  char Bool_Overwrite; // al
  char v9; // al
  char v10; // cl
  char v11; // al
  char v12; // al
  char v13; // cl
  char v14; // al
  int Int_Overwrite; // eax
  char v16; // cl
  char v17; // al
  int Coord; // eax
  char v19; // cl
  char v20; // al
  int v21; // eax
  int v22; // eax
  char v23; // cl
  char v24; // al
  char v25; // al
  char v27; // [esp-Ch] [ebp-1B8h]
  char v28; // [esp-Ch] [ebp-1B8h]
  int Armor; // [esp-Ch] [ebp-1B8h]
  char v30; // [esp-Ch] [ebp-1B8h]
  char v31; // [esp-Ch] [ebp-1B8h]
  int LineTrailColorDecrement; // [esp-Ch] [ebp-1B8h]
  char v33; // [esp-Ch] [ebp-1B8h]
  int v34; // [esp+8h] [ebp-1A4h] BYREF
  char Source[28]; // [esp+Ch] [ebp-1A0h] BYREF
  VocClass Destination; // [esp+28h] [ebp-184h] BYREF

  INIClass::ResetSection((INIClass *)a2);
  if ( !(unsigned __int8)AbstractTypeClass::LoadFromINI((AbstractTypeClass *)this, a2) )
    return 0;
  strcpy(Source, this->ImageFile);
  INIClass::GetString(
    (INIClass *)a2,
    (unsigned __int8 *)this->__pad_24,
    (unsigned __int8 *)g_INI_Key_Image,
    Source,
    this->ImageFile,
    25);
  v34 = (int)strcpy(Source, this->AlphaImageFile);
  INIClass::GetString((INIClass *)a2, (unsigned __int8 *)this->__pad_24, aAlphaimage, Source, this->AlphaImageFile, 25);
  CrushSound = this->CrushSound;
  if ( INIClass::GetString(
         (INIClass *)a2,
         (unsigned __int8 *)this->__pad_24,
         aCrushsound,
         &g_INI_DefaultBuffer,
         (char *)&Destination,
         128) )
  {
    Index = VocClass::FindIndex(&Destination);
    if ( Index != -1 )
      CrushSound = Index;
  }
  this->CrushSound = CrushSound;
  AmbientSound = this->AmbientSound;
  if ( !INIClass::GetString(
          (INIClass *)a2,
          (unsigned __int8 *)this->__pad_24,
          aAmbientsound,
          &g_INI_DefaultBuffer,
          (char *)&Destination,
          128)
    || (v6 = VocClass::FindIndex(&Destination), v6 == -1) )
  {
    v6 = AmbientSound;
  }
  v7 = this->Crushable[0];
  this->AmbientSound = v6;
  Bool_Overwrite = INIClass::ReadBool_Overwrite((int *)a2, (unsigned __int8 *)this->__pad_24, aCrushable, v7);
  v27 = this->Bombable[0];
  this->Crushable[0] = Bool_Overwrite;
  this->Bombable[0] = INIClass::ReadBool_Overwrite((int *)a2, (unsigned __int8 *)this->__pad_24, aBombable, v27);
  v9 = INIClass::ReadBool_Overwrite((int *)a2, (unsigned __int8 *)this->__pad_24, aNospawnalt, this->__pad_14D[155]);
  v10 = this->AlternateArcticArt[0];
  this->__pad_14D[155] = v9;
  v11 = INIClass::ReadBool_Overwrite((int *)a2, (unsigned __int8 *)this->__pad_24, aAlternatearcti, v10);
  v28 = this->RadarInvisible[0];
  this->AlternateArcticArt[0] = v11;
  this->RadarInvisible[0] = INIClass::ReadBool_Overwrite(
                              (int *)a2,
                              (unsigned __int8 *)this->__pad_24,
                              aRadarinvisible,
                              v28);
  v12 = INIClass::ReadBool_Overwrite((int *)a2, (unsigned __int8 *)this->__pad_24, aSelectable, this->Selectable[0]);
  v13 = this->LegalTarget[0];
  this->Selectable[0] = v12;
  v14 = INIClass::ReadBool_Overwrite((int *)a2, (unsigned __int8 *)this->__pad_24, aLegaltarget, v13);
  Armor = this->Armor;
  this->LegalTarget[0] = v14;
  this->Armor = ArmorType::FindIndex((ArmorType *)a2, (unsigned __int8 *)this->__pad_24, g_INI_Key_Armor, Armor);
  Int_Overwrite = INIClass::ReadInt_Overwrite((bool *)a2, (unsigned __int8 *)this->__pad_24, aStrength, this->Strength);
  v16 = this->Immune[0];
  this->Strength = Int_Overwrite;
  v17 = INIClass::ReadBool_Overwrite((int *)a2, (unsigned __int8 *)this->__pad_24, aImmune, v16);
  v30 = this->Insignificant[0];
  this->Immune[0] = v17;
  this->Insignificant[0] = INIClass::ReadBool_Overwrite(
                             (int *)a2,
                             (unsigned __int8 *)this->__pad_24,
                             aInsignificant,
                             v30);
  this->HasRadialIndicator[0] = INIClass::ReadBool_Overwrite(
                                  (int *)a2,
                                  (unsigned __int8 *)this->__pad_24,
                                  aHasradialindic,
                                  this->HasRadialIndicator[0]);
  Coord = INIClass::GetCoord(
            (INIClass *)a2,
            (int)&v34,
            (unsigned __int8 *)this->__pad_24,
            aRadialcolor,
            (unsigned __int8 *)this->__pad_98);
  v19 = this->IgnoresFirestorm[0];
  *(_WORD *)this->__pad_98 = *(_WORD *)Coord;
  this->__pad_98[2] = *(_BYTE *)(Coord + 2);
  v20 = INIClass::ReadBool_Overwrite((int *)a2, (unsigned __int8 *)this->__pad_24, aIgnoresfiresto, v19);
  v31 = this->UseLineTrail[0];
  this->IgnoresFirestorm[0] = v20;
  this->UseLineTrail[0] = INIClass::ReadBool_Overwrite(
                            (int *)dword_887180.__pad_0,
                            (unsigned __int8 *)this->ImageFile,
                            aUselinetrail,
                            v31);
  v21 = INIClass::GetCoord(
          &dword_887180,
          (int)&v34,
          (unsigned __int8 *)this->ImageFile,
          aLinetrailcolor,
          (unsigned __int8 *)this->LineTrailColor);
  *(_WORD *)this->LineTrailColor = *(_WORD *)v21;
  LineTrailColorDecrement = this->LineTrailColorDecrement;
  this->LineTrailColor[2] = *(_BYTE *)(v21 + 2);
  v22 = INIClass::ReadInt_Overwrite(
          (bool *)dword_887180.__pad_0,
          (unsigned __int8 *)this->ImageFile,
          aLinetrailcolor_0,
          LineTrailColorDecrement);
  v23 = this->Theater[0];
  this->LineTrailColorDecrement = v22;
  v24 = INIClass::ReadBool_Overwrite(
          (int *)dword_887180.__pad_0,
          (unsigned __int8 *)this->ImageFile,
          (unsigned __int8 *)g_INI_Key_Theater,
          v23);
  v33 = this->NewTheater[0];
  this->Theater[0] = v24;
  this->NewTheater[0] = INIClass::ReadBool_Overwrite(
                          (int *)dword_887180.__pad_0,
                          (unsigned __int8 *)this->ImageFile,
                          aNewtheater,
                          v33);
  v25 = INIClass::ReadBool_Overwrite(
          (int *)dword_887180.__pad_0,
          (unsigned __int8 *)this->ImageFile,
          aVoxel,
          this->Voxel[0]);
  this->Voxel[0] = v25;
  if ( !v25 && (*(int (__thiscall **)(ObjectTypeClass *))(this->vfptr + 44))(this) != 5 )
    ObjectTypeClass::Load2DArt((char *)this);
  if ( this->AlphaImageFile[0] )
  {
    _makepath((char *)&Destination.Name[5], 0, 0, this->AlphaImageFile, Ext);
    this->AlphaImage = (int)SearchMIXFile((char *)&Destination.Name[5], 0);
  }
  return 1;
}
