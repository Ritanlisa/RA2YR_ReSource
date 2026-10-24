_DWORD *__thiscall AnimTypeClass::ddtor(AnimTypeClass *this, char a2)
{
  int v3; // eax
  int v4; // eax
  AnimTypeClass *v6; // [esp+4h] [ebp-4h] BYREF

  this->vfptr = (int)&AnimTypeClass::`vftable';
  this->vfptr1 = (int)&AnimTypeClass::`vftable';
  this->vfptr2 = (int)&AnimTypeClass::`vftable';
  this->vfptr3 = (int)&AnimTypeClass::`vftable';
  v6 = this;
  v3 = (*(int (__thiscall **)(DynamicVector *, AnimTypeClass **))(*(_DWORD *)stru_B0F670.__pad_0 + 16))(
         &stru_B0F670,
         &v6);
  if ( v3 != -1 && v3 < stru_B0F670.DynamicVector_field_0x10 )
  {
    --stru_B0F670.DynamicVector_field_0x10;
    for ( ;
          v3 < stru_B0F670.DynamicVector_field_0x10;
          *(_DWORD *)(*(_DWORD *)&stru_B0F670.DynamicVector_field_0x1[3] + 4 * v3 - 4) = *(_DWORD *)(*(_DWORD *)&stru_B0F670.DynamicVector_field_0x1[3] + 4 * v3) )
    {
      ++v3;
    }
  }
  v6 = this;
  v4 = (*(int (__thiscall **)(int *, AnimTypeClass **))(dword_8B4150 + 16))(&dword_8B4150, &v6);
  if ( v4 != -1 && v4 < dword_8B4160 && v4 < --dword_8B4160 )
  {
    do
    {
      ++v4;
      *((_DWORD *)dword_8B4154 + v4 - 1) = *((_DWORD *)dword_8B4154 + v4);
    }
    while ( v4 < dword_8B4160 );
  }
  ObjectTypeClass::Destruct((int)this);
  if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
  return &this->vfptr;
}
