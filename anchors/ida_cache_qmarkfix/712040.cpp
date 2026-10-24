int __thiscall ObjectTypeClass::SelectArtOrAlt(TechnoTypeClass *this)
{
  int v1; // eax
  int result; // eax

  v1 = *(int *)((char *)&stru_A83CD9.estimatedHealth + 3);
  if ( !*(int *)((char *)&stru_A83CD9.estimatedHealth + 3) )
    return this->Cameo;
  if ( *(_BYTE *)(*(int *)((char *)&stru_A83CD9.estimatedHealth + 3) + 703) )
  {
    if ( (*(int (__thiscall **)(TechnoTypeClass *))(this->vfptr + 44))(this) == 16 )
    {
      result = this->AltCameo;
      if ( result )
      {
        if ( this->Trainable[0] )
          return result;
      }
    }
    v1 = *(int *)((char *)&stru_A83CD9.estimatedHealth + 3);
  }
  if ( !v1
    || !*(_BYTE *)(v1 + 704)
    || (*(int (__thiscall **)(TechnoTypeClass *))(this->vfptr + 44))(this) != 40
    && ((*(int (__thiscall **)(TechnoTypeClass *))(this->vfptr + 44))(this) != 7 || !this->UndeploysInto) )
  {
    return this->Cameo;
  }
  result = this->AltCameo;
  if ( !result || !this->Trainable[0] )
    return this->Cameo;
  return result;
}
