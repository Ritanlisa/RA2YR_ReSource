char __userpurge BulletTypeClass::LoadFromINI@<al>(BulletTypeClass *this, double a2@<st0>, unsigned __int8 ***a3)
{
  int v3; // ecx
  int v4; // esi
  char Bool_Overwrite; // al
  char v7; // cl
  char v8; // al
  char v9; // al
  char v10; // cl
  char v11; // al
  char v12; // al
  char v13; // cl
  char v14; // al
  char v15; // al
  char v16; // cl
  char v17; // al
  char v18; // dl
  char v19; // al
  char v20; // cl
  char v21; // al
  _DWORD *v22; // eax
  char v23; // al
  _DWORD *v24; // eax
  _DWORD *v25; // eax
  int Int_Overwrite; // eax
  char v27; // cl
  char v28; // al
  char v29; // al
  int v30; // edx
  char v32; // [esp-Ch] [ebp-98h]
  char v33; // [esp-Ch] [ebp-98h]
  char v34; // [esp-Ch] [ebp-98h]
  int v35; // [esp-Ch] [ebp-98h]
  char v36; // [esp-Ch] [ebp-98h]
  int v37; // [esp-Ch] [ebp-98h]
  char v38; // [esp-Ch] [ebp-98h]
  _DWORD *v39; // [esp+8h] [ebp-84h]
  _DWORD *v40; // [esp+8h] [ebp-84h]
  _DWORD *v41; // [esp+8h] [ebp-84h]
  char Destination[128]; // [esp+Ch] [ebp-80h] BYREF

  v4 = v3;
  INIClass::ResetSection((INIClass *)this);
  if ( !ObjectTypeClass::LoadFromINI((ObjectTypeClass *)v4, (unsigned __int8 ***)this) )
    return 0;
  *(_DWORD *)(v4 + 752) = INIClass::ReadInt_Overwrite(
                            (bool *)this,
                            (unsigned __int8 *)(v4 + 36),
                            &unk_81B168,
                            *(_DWORD *)(v4 + 752));
  *(_DWORD *)(v4 + 732) = INIClass::ReadInt_Overwrite(
                            (bool *)this,
                            (unsigned __int8 *)(v4 + 36),
                            &off_81B164,
                            *(_DWORD *)(v4 + 732));
  *(_DWORD *)(v4 + 736) = INIClass::ReadInt_Overwrite(
                            (bool *)this,
                            (unsigned __int8 *)(v4 + 36),
                            aCourselockdura,
                            *(_DWORD *)(v4 + 736));
  INIClass::ReadDouble_Overwrite(
    (double *)&this->vfptr,
    (unsigned __int8 *)(v4 + 36),
    g_INI_Key_Elasticity,
    *(double *)(v4 + 712));
  __asm { fstp    qword ptr [esi+2C8h] }
  *(double *)(v4 + 712) = _RT1;
  *(_DWORD *)(v4 + 720) = INIClass::ReadInt_Overwrite(
                            (bool *)this,
                            (unsigned __int8 *)(v4 + 36),
                            aAcceleration,
                            *(_DWORD *)(v4 + 720));
  *(_DWORD *)(v4 + 724) = BuildingTypeClass::FindAnimByName(
                            (BuildingTypeClass *)this,
                            (unsigned __int8 *)(v4 + 36),
                            (unsigned __int8 *)aColor,
                            *(_DWORD *)(v4 + 724));
  *(_BYTE *)(v4 + 667) = INIClass::ReadBool_Overwrite(
                           &this->vfptr,
                           (unsigned __int8 *)(v4 + 36),
                           aArcing,
                           *(_BYTE *)(v4 + 667));
  *(_BYTE *)(v4 + 661) = INIClass::ReadBool_Overwrite(
                           &this->vfptr,
                           (unsigned __int8 *)(v4 + 36),
                           aFloater,
                           *(_BYTE *)(v4 + 661));
  *(_BYTE *)(v4 + 662) = INIClass::ReadBool_Overwrite(
                           &this->vfptr,
                           (unsigned __int8 *)(v4 + 36),
                           aSubjecttocliff,
                           *(_BYTE *)(v4 + 662));
  *(_BYTE *)(v4 + 663) = INIClass::ReadBool_Overwrite(
                           &this->vfptr,
                           (unsigned __int8 *)(v4 + 36),
                           aSubjecttoeleva,
                           *(_BYTE *)(v4 + 663));
  *(_BYTE *)(v4 + 664) = INIClass::ReadBool_Overwrite(
                           &this->vfptr,
                           (unsigned __int8 *)(v4 + 36),
                           aSubjecttowalls,
                           *(_BYTE *)(v4 + 664));
  Bool_Overwrite = INIClass::ReadBool_Overwrite(
                     &this->vfptr,
                     (unsigned __int8 *)(v4 + 36),
                     aVeryhigh,
                     *(_BYTE *)(v4 + 665));
  v7 = *(_BYTE *)(v4 + 666);
  *(_BYTE *)(v4 + 665) = Bool_Overwrite;
  v8 = INIClass::ReadBool_Overwrite(&this->vfptr, (unsigned __int8 *)(v4 + 36), aShadow, v7);
  v32 = *(_BYTE *)(v4 + 668);
  *(_BYTE *)(v4 + 666) = v8;
  *(_BYTE *)(v4 + 668) = INIClass::ReadBool_Overwrite(&this->vfptr, (unsigned __int8 *)(v4 + 36), aDropping, v32);
  v9 = INIClass::ReadBool_Overwrite(
         &this->vfptr,
         (unsigned __int8 *)(v4 + 36),
         (unsigned __int8 *)aLevel,
         *(_BYTE *)(v4 + 669));
  v10 = *(_BYTE *)(v4 + 670);
  *(_BYTE *)(v4 + 669) = v9;
  v11 = INIClass::ReadBool_Overwrite(&this->vfptr, (unsigned __int8 *)(v4 + 36), aInviso_0, v10);
  v33 = *(_BYTE *)(v4 + 671);
  *(_BYTE *)(v4 + 670) = v11;
  *(_BYTE *)(v4 + 671) = INIClass::ReadBool_Overwrite(&this->vfptr, (unsigned __int8 *)(v4 + 36), aProximity, v33);
  v12 = INIClass::ReadBool_Overwrite(&this->vfptr, (unsigned __int8 *)(v4 + 36), aRanged, *(_BYTE *)(v4 + 672));
  v13 = *(_BYTE *)(v4 + 674);
  *(_BYTE *)(v4 + 672) = v12;
  v14 = INIClass::ReadBool_Overwrite(&this->vfptr, (unsigned __int8 *)(v4 + 36), aInaccurate, v13);
  v34 = *(_BYTE *)(v4 + 675);
  *(_BYTE *)(v4 + 674) = v14;
  *(_BYTE *)(v4 + 675) = INIClass::ReadBool_Overwrite(&this->vfptr, (unsigned __int8 *)(v4 + 36), aFlakscatter, v34);
  v15 = INIClass::ReadBool_Overwrite(&this->vfptr, (unsigned __int8 *)(v4 + 36), aAa, *(_BYTE *)(v4 + 676));
  v16 = *(_BYTE *)(v4 + 677);
  *(_BYTE *)(v4 + 676) = v15;
  v17 = INIClass::ReadBool_Overwrite(&this->vfptr, (unsigned __int8 *)(v4 + 36), aAg, v16);
  v18 = *(_BYTE *)(v4 + 678);
  *(_BYTE *)(v4 + 677) = v17;
  *(_BYTE *)(v4 + 678) = INIClass::ReadBool_Overwrite(&this->vfptr, (unsigned __int8 *)(v4 + 36), aDegenerates, v18);
  v19 = INIClass::ReadBool_Overwrite(&this->vfptr, (unsigned __int8 *)(v4 + 36), aBouncy, *(_BYTE *)(v4 + 679));
  v20 = *(_BYTE *)(v4 + 660);
  *(_BYTE *)(v4 + 679) = v19;
  v21 = INIClass::ReadBool_Overwrite(&this->vfptr, (unsigned __int8 *)(v4 + 36), aAirburst, v20);
  v35 = *(_DWORD *)(v4 + 684);
  *(_BYTE *)(v4 + 660) = v21;
  *(_DWORD *)(v4 + 684) = INIClass::ReadInt_Overwrite((bool *)this, (unsigned __int8 *)(v4 + 36), aCluster, v35);
  *(_BYTE *)(v4 + 748) = INIClass::ReadBool_Overwrite(
                           &this->vfptr,
                           (unsigned __int8 *)(v4 + 36),
                           aScalable,
                           *(_BYTE *)(v4 + 748));
  if ( INIClass::GetString(
         (INIClass *)this,
         (unsigned __int8 *)(v4 + 36),
         (unsigned __int8 *)g_INI_Key_Image,
         &g_INI_DefaultBuffer,
         (char *)(v4 + 504),
         25) > 0 )
  {
    v39 = *(_DWORD **)(v4 + 728);
    if ( INIClass::GetString(
           &dword_887180,
           (unsigned __int8 *)(v4 + 504),
           aTrailer,
           &g_INI_DefaultBuffer,
           Destination,
           128) )
    {
      v22 = AnimTypeClass::FindOrCreate(Destination);
    }
    else
    {
      v22 = v39;
    }
    *(_DWORD *)(v4 + 728) = v22;
    *(_DWORD *)(v4 + 740) = INIClass::ReadInt_Overwrite(
                              (bool *)dword_887180.__pad_0,
                              (unsigned __int8 *)(v4 + 504),
                              aSpawndelay,
                              *(_DWORD *)(v4 + 740));
    v23 = INIClass::ReadBool_Overwrite(
            (int *)dword_887180.__pad_0,
            (unsigned __int8 *)(v4 + 504),
            aRotates,
            *(_BYTE *)(v4 + 673) == 0);
    v36 = *(_BYTE *)(v4 + 759);
    *(_BYTE *)(v4 + 673) = v23 == 0;
    *(_BYTE *)(v4 + 759) = INIClass::ReadBool_Overwrite(
                             (int *)dword_887180.__pad_0,
                             (unsigned __int8 *)(v4 + 504),
                             g_INI_Key_Flat,
                             v36);
  }
  v40 = *(_DWORD **)(v4 + 688);
  if ( INIClass::GetString(
         (INIClass *)this,
         (unsigned __int8 *)(v4 + 36),
         aAirburstweapon,
         &g_INI_DefaultBuffer,
         Destination,
         128) )
  {
    v24 = InfantryTypeClass::Find(Destination);
  }
  else
  {
    v24 = v40;
  }
  *(_DWORD *)(v4 + 688) = v24;
  v41 = *(_DWORD **)(v4 + 692);
  if ( INIClass::GetString(
         (INIClass *)this,
         (unsigned __int8 *)(v4 + 36),
         aShrapnelweapon,
         &g_INI_DefaultBuffer,
         Destination,
         128) )
  {
    v25 = InfantryTypeClass::Find(Destination);
  }
  else
  {
    v25 = v41;
  }
  v37 = *(_DWORD *)(v4 + 696);
  *(_DWORD *)(v4 + 692) = v25;
  *(_DWORD *)(v4 + 696) = INIClass::ReadInt_Overwrite((bool *)this, (unsigned __int8 *)(v4 + 36), aShrapnelcount, v37);
  Int_Overwrite = INIClass::ReadInt_Overwrite(
                    (bool *)this,
                    (unsigned __int8 *)(v4 + 36),
                    aDetonationalti,
                    *(_DWORD *)(v4 + 700));
  v27 = *(_BYTE *)(v4 + 704);
  *(_DWORD *)(v4 + 700) = Int_Overwrite;
  v28 = INIClass::ReadBool_Overwrite(&this->vfptr, (unsigned __int8 *)(v4 + 36), aVertical, v27);
  v38 = *(_BYTE *)(v4 + 681);
  *(_BYTE *)(v4 + 704) = v28;
  *(_BYTE *)(v4 + 681) = INIClass::ReadBool_Overwrite(&this->vfptr, (unsigned __int8 *)(v4 + 36), aFirerspalette, v38);
  *(_BYTE *)(v4 + 756) = INIClass::ReadInt_Overwrite(
                           (bool *)dword_887180.__pad_0,
                           (unsigned __int8 *)(v4 + 504),
                           aAnimlow,
                           *(unsigned __int8 *)(v4 + 756));
  v29 = INIClass::ReadInt_Overwrite(
          (bool *)dword_887180.__pad_0,
          (unsigned __int8 *)(v4 + 504),
          aAnimhigh,
          *(unsigned __int8 *)(v4 + 757));
  v30 = *(unsigned __int8 *)(v4 + 758);
  *(_BYTE *)(v4 + 757) = v29;
  *(_BYTE *)(v4 + 758) = INIClass::ReadInt_Overwrite(
                           (bool *)dword_887180.__pad_0,
                           (unsigned __int8 *)(v4 + 504),
                           aAnimrate,
                           v30);
  *(_BYTE *)(v4 + 680) = INIClass::ReadBool_Overwrite(
                           (int *)dword_887180.__pad_0,
                           (unsigned __int8 *)(v4 + 504),
                           aAnimpalette,
                           *(_BYTE *)(v4 + 680));
  if ( !*(_BYTE *)(v4 + 670) )
    ObjectTypeClass::Load2DArt((char *)v4);
  if ( *(_BYTE *)(v4 + 566) )
    VoxelAnimType::LoadAnim((char *)v4);
  return 1;
}
