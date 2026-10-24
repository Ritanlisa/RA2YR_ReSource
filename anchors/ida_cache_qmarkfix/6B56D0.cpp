int __thiscall SmudgeTypeClass::GetSize(SmudgeTypeClass *this, unsigned __int8 ***a2)
{
  int result; // eax
  char Bool_Overwrite; // al
  char v5; // cl
  char v6; // al
  int Width; // [esp-8h] [ebp-210h]
  char Buffer[512]; // [esp+8h] [ebp-200h] BYREF

  INIClass::ResetSection((INIClass *)a2);
  if ( ObjectTypeClass::LoadFromINI((ObjectTypeClass *)this, a2) )
  {
    Bool_Overwrite = INIClass::ReadBool_Overwrite(
                       (int *)a2,
                       (unsigned __int8 *)this->__pad_24,
                       aCrater,
                       this->Crater[0]);
    v5 = this->Burn[0];
    this->Crater[0] = Bool_Overwrite;
    v6 = INIClass::ReadBool_Overwrite((int *)a2, (unsigned __int8 *)this->__pad_24, aBurn, v5);
    Width = this->Width;
    this->Burn[0] = v6;
    this->Width = INIClass::ReadInt_Overwrite(
                    (bool *)a2,
                    (unsigned __int8 *)this->__pad_24,
                    (unsigned __int8 *)aWidth,
                    Width);
    this->Height = INIClass::ReadInt_Overwrite(
                     (bool *)a2,
                     (unsigned __int8 *)this->__pad_24,
                     (unsigned __int8 *)g_INI_Key_Height,
                     this->Height);
    if ( this->Theater[0] )
      _makepath(Buffer, 0, 0, this->ImageFile, (const char *)&off_7E1BC6 + 112 * dword_A8B230[117].uniqueId);
    else
      _makepath(Buffer, 0, 0, this->ImageFile, Ext);
    result = (int)SearchMIXFile(Buffer, 0);
    this->Image = result;
    LOBYTE(result) = 1;
  }
  else
  {
    LOBYTE(result) = 0;
  }
  return result;
}
