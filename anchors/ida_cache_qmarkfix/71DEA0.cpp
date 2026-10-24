int __thiscall TerrainTypeClass::LoadFromINI(TerrainTypeClass *this, unsigned __int8 ***a2)
{
  double v2; // st7
  int result; // eax
  char Bool_Overwrite; // al
  char v6; // al
  char v7; // cl
  char v8; // al
  int v9; // eax
  int v10; // ecx
  MixFileClass *v11; // eax
  int PixelData; // eax
  int Coord; // eax
  char v14; // cl
  char v15; // al
  int Int_Overwrite; // eax
  double v17; // st6
  int TemperateOccupationBits; // eax
  int v19; // eax
  int SnowOccupationBits; // ecx
  char v21; // [esp+4h] [ebp-218h]
  int AnimationRate; // [esp+4h] [ebp-218h]
  int v23; // [esp+18h] [ebp-204h] BYREF
  char Buffer[512]; // [esp+1Ch] [ebp-200h] BYREF

  INIClass::ResetSection((INIClass *)a2);
  if ( ObjectTypeClass::LoadFromINI((ObjectTypeClass *)this, a2) )
  {
    if ( this->Strength == -1 )
      this->Strength = *(_DWORD *)&dword_8871E0->__pad_FFC[328];
    Bool_Overwrite = INIClass::ReadBool_Overwrite(
                       (int *)a2,
                       (unsigned __int8 *)this->__pad_24,
                       aIsveinhole,
                       this->IsVeinhole[0]);
    this->IsVeinhole[0] = Bool_Overwrite;
    if ( Bool_Overwrite )
    {
      this->IsLogic[0] = 0;
      this->LegalTarget[0] = 1;
    }
    v6 = INIClass::ReadBool_Overwrite((int *)a2, (unsigned __int8 *)this->__pad_24, aWaterbound, this->WaterBound[0]);
    v7 = this->SpawnsTiberium[0];
    this->WaterBound[0] = v6;
    v8 = INIClass::ReadBool_Overwrite((int *)a2, (unsigned __int8 *)this->__pad_24, aSpawnstiberium, v7);
    v21 = this->IsFlammable[0];
    this->SpawnsTiberium[0] = v8;
    this->IsFlammable[0] = INIClass::ReadBool_Overwrite((int *)a2, (unsigned __int8 *)this->__pad_24, aIsflammable, v21);
    v9 = INIClass::LookupEnum(&dword_887180, (unsigned __int8 *)this->ImageFile, g_INI_Key_Foundation, this->Foundation);
    v10 = 5 * v9;
    this->Foundation = v9;
    LOBYTE(v9) = this->Theater[0];
    this->FoundationData = 8 * v10 + 11595200;
    if ( !(_BYTE)v9 )
    {
      _makepath(Buffer, 0, 0, this->ImageFile, Ext);
      this->Image = (int)SearchMIXFile(Buffer, 0);
    }
    v11 = (MixFileClass *)(*(int (__thiscall **)(TerrainTypeClass *))(this->vfptr + 156))(this);
    if ( v11 )
    {
      PixelData = MixFileClass::GetPixelData(v11, (int)&v23, 0);
      *(_WORD *)this->RadarColor = *(_WORD *)PixelData;
      this->RadarColor[2] = *(_BYTE *)(PixelData + 2);
    }
    Coord = INIClass::GetCoord(
              (INIClass *)a2,
              (int)&v23,
              (unsigned __int8 *)this->__pad_24,
              aRadarcolor,
              (unsigned __int8 *)this->RadarColor);
    v14 = this->IsAnimated[0];
    *(_WORD *)this->RadarColor = *(_WORD *)Coord;
    this->RadarColor[2] = *(_BYTE *)(Coord + 2);
    v15 = INIClass::ReadBool_Overwrite((int *)a2, (unsigned __int8 *)this->__pad_24, aIsanimated, v14);
    AnimationRate = this->AnimationRate;
    this->IsAnimated[0] = v15;
    Int_Overwrite = INIClass::ReadInt_Overwrite(
                      (bool *)a2,
                      (unsigned __int8 *)this->__pad_24,
                      aAnimationrate,
                      AnimationRate);
    v17 = *(float *)&this->AnimationProbability;
    this->AnimationRate = Int_Overwrite;
    INIClass::ReadDouble_Overwrite((double *)a2, (unsigned __int8 *)this->__pad_24, aAnimationproba, v17);
    TemperateOccupationBits = this->TemperateOccupationBits;
    *(float *)&this->AnimationProbability = v2;
    v19 = INIClass::ReadInt_Overwrite(
            (bool *)a2,
            (unsigned __int8 *)this->__pad_24,
            aTemperateoccup,
            TemperateOccupationBits);
    SnowOccupationBits = this->SnowOccupationBits;
    this->TemperateOccupationBits = v19;
    result = INIClass::ReadInt_Overwrite(
               (bool *)a2,
               (unsigned __int8 *)this->__pad_24,
               aSnowoccupation,
               SnowOccupationBits);
    this->SnowOccupationBits = result;
    LOBYTE(result) = 1;
  }
  else
  {
    LOBYTE(result) = 0;
  }
  return result;
}
