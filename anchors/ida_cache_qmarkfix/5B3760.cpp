char __thiscall MissionClass::LoadFromINI(MissionClass *this, _DWORD *a2)
{
  char *v3; // eax
  char *v4; // eax
  char *v5; // eax
  char *v6; // eax
  char *v7; // eax
  char *v8; // eax
  char *v9; // eax
  char *v10; // eax
  int vfptr; // eax
  char *v13; // eax
  int abstractFlags; // ecx

  INIClass::ResetSection((INIClass *)a2);
  if ( this->vfptr == -1 )
    v3 = g_Str__none_;
  else
    v3 = off_816CAC[this->vfptr];
  if ( !INIClass::BinarySearchSection((int)a2, (unsigned __int8 *)v3) )
    return 0;
  if ( this->vfptr == -1 )
    v4 = g_Str__none_;
  else
    v4 = off_816CAC[this->vfptr];
  LOBYTE(this->vfptr1) = INIClass::ReadBool_Overwrite(a2, (unsigned __int8 *)v4, aNothreat, this->vfptr1);
  if ( this->vfptr == -1 )
    v5 = g_Str__none_;
  else
    v5 = off_816CAC[this->vfptr];
  BYTE1(this->vfptr1) = INIClass::ReadBool_Overwrite(a2, (unsigned __int8 *)v5, aZombie, BYTE1(this->vfptr1));
  if ( this->vfptr == -1 )
    v6 = g_Str__none_;
  else
    v6 = off_816CAC[this->vfptr];
  BYTE2(this->vfptr1) = INIClass::ReadBool_Overwrite(a2, (unsigned __int8 *)v6, aRecruitable, BYTE2(this->vfptr1));
  if ( this->vfptr == -1 )
    v7 = g_Str__none_;
  else
    v7 = off_816CAC[this->vfptr];
  HIBYTE(this->vfptr1) = INIClass::ReadBool_Overwrite(a2, (unsigned __int8 *)v7, aParalyzed, HIBYTE(this->vfptr1));
  if ( this->vfptr == -1 )
    v8 = g_Str__none_;
  else
    v8 = off_816CAC[this->vfptr];
  LOBYTE(this->vfptr2) = INIClass::ReadBool_Overwrite(a2, (unsigned __int8 *)v8, aRetaliate, this->vfptr2);
  if ( this->vfptr == -1 )
    v9 = g_Str__none_;
  else
    v9 = off_816CAC[this->vfptr];
  BYTE1(this->vfptr2) = INIClass::ReadBool_Overwrite(a2, (unsigned __int8 *)v9, aScatter, BYTE1(this->vfptr2));
  if ( this->vfptr == -1 )
    v10 = g_Str__none_;
  else
    v10 = off_816CAC[this->vfptr];
  INIClass::ReadDouble_Overwrite(
    (double *)a2,
    (unsigned __int8 *)v10,
    (unsigned __int8 *)g_INI_Key_Rate,
    *(double *)&this->uniqueId);
  vfptr = this->vfptr;
  __asm { fstp    qword ptr [esi+10h] }
  *(double *)&this->uniqueId = _RT1;
  if ( vfptr == -1 )
    v13 = g_Str__none_;
  else
    v13 = off_816CAC[vfptr];
  INIClass::ReadDouble_Overwrite((double *)a2, (unsigned __int8 *)v13, aAarate, 0.0);
  __asm { fst     qword ptr [esi+18h] }
  *(double *)&this->nextArrayIndex = _RT1;
  __asm
  {
    fcomp   ds:dbl_7E2800
    fnstsw  ax
  }
  if ( (_AX & 0x4000) != 0 )
  {
    abstractFlags = this->abstractFlags;
    this->nextArrayIndex = this->uniqueId;
    this->referenceCount = abstractFlags;
  }
  return 1;
}
