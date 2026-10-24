_DWORD *__thiscall SideClass::Construct(SideClass *this, char *Source)
{
  int v3; // eax

  AbstractTypeClass::Constructor(&this->vfptr, Source);
  this->houseTypesCount = 0;
  this->q0A0 = 0;
  this->q0A4 = 1;
  this->field_A5 = 0;
  this->u32_AC = 10;
  this->field_A8 = 0;
  this->houseTypes = (int)&TypeList<int>::`vftable';
  this->vfptr = (int)&SideClass::`vftable';
  this->vfptr1 = (int)&SideClass::`vftable';
  this->vfptr2 = (int)&SideClass::`vftable';
  this->vfptr3 = (int)&SideClass::`vftable';
  AbstractClass::GenerateUniqueID((AbstractClass *)&this->vfptr1);
  if ( dword_8B4130 < dword_8B4128
    || (byte_8B412D || !dword_8B4128)
    && dword_8B4134 > 0
    && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(dword_8B4120 + 8))(
         &dword_8B4120,
         dword_8B4128 + dword_8B4134,
         0) )
  {
    v3 = dword_8B4130++;
    *((_DWORD *)dword_8B4124 + v3) = this;
  }
  return &this->vfptr;
}
