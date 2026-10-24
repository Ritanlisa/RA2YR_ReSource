char *__thiscall GetModuleInternalVersion(ObjectClass *this)
{
  int v2; // eax
  int v3; // eax
  unsigned __int16 vfptr2_high; // bp
  int v5; // eax
  unsigned __int16 v6; // ax
  int *p_vfptr3; // esi
  RawFileClass v9; // [esp+10h] [ebp-24h] BYREF

  if ( (this->ambientSoundController[2] & 8) == 0 )
  {
    RawFileClass::Construct((BufferIOFileClass *)&v9, (int)g_Str_File_VERSION_TXT);
    if ( (unsigned __int8)FileClass::Open(&v9, 0) )
    {
      FileClass::Read(&v9, (char *)&this->owningHouseIndex + 2, 16);
      for ( BYTE1(this->attachedBomb) = 0;
            *((_BYTE *)&this->owningHouseIndex + strlen((const char *)&this->owningHouseIndex + 2) + 1) == 13;
            *((_BYTE *)&this->owningHouseIndex + strlen((const char *)&this->owningHouseIndex + 2) + 1) = 0 )
      {
        ;
      }
    }
    else
    {
      BYTE2(this->owningHouseIndex) = 0;
    }
    RawFileClass::Dtor((BufferIOFileClass *)&v9);
    v2 = this->ambientSoundController[2];
    LOBYTE(v2) = v2 | 8;
    this->ambientSoundController[2] = v2;
  }
  v3 = this->ambientSoundController[2];
  if ( (v3 & 4) != 0 )
  {
    vfptr2_high = HIWORD(this->vfptr2);
  }
  else
  {
    vfptr2_high = 1;
    LOBYTE(v3) = v3 | 4;
    HIWORD(this->vfptr2) = 1;
    this->ambientSoundController[2] = v3;
  }
  if ( (stru_A8E960.random[432] & 8) == 0 )
  {
    RawFileClass::Construct((BufferIOFileClass *)&v9, (int)g_Str_File_VERSION_TXT);
    if ( (unsigned __int8)FileClass::Open(&v9, 0) )
    {
      FileClass::Read(&v9, &stru_A8E960.random[406], 16);
      for ( stru_A8E960.random[421] = 0;
            stru_A8E960.random[strlen(&stru_A8E960.random[406]) + 405] == 13;
            stru_A8E960.random[strlen(&stru_A8E960.random[406]) + 405] = 0 )
      {
        ;
      }
    }
    else
    {
      stru_A8E960.random[406] = 0;
    }
    RawFileClass::Dtor((BufferIOFileClass *)&v9);
    v5 = *(_DWORD *)&stru_A8E960.random[432];
    LOBYTE(v5) = stru_A8E960.random[432] | 8;
    *(_DWORD *)&stru_A8E960.random[432] = v5;
  }
  if ( (stru_A8E960.random[432] & 2) != 0 )
  {
    v6 = *(_WORD *)&stru_A8E960.random[372];
  }
  else
  {
    *(_WORD *)&stru_A8E960.random[372] = 1;
    v6 = 1;
    *(_DWORD *)&stru_A8E960.random[432] |= 2u;
  }
  p_vfptr3 = &this->vfptr3;
  sprintf((char *const)p_vfptr3, "%d.%3.3d", v6, vfptr2_high);
  return (char *)p_vfptr3;
}
