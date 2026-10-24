int __thiscall TemporalClass::Constructor(TemporalClass *this)
{
  int v2; // eax
  int v3; // eax

  AbstractClass::Constructor((AbstractClass *)this);
  v2 = *(_DWORD *)&stru_A8E960.random[528];
  this->TemporalClass_field_34 = 0;
  *(_DWORD *)&this->__pad_28[4] = v2;
  this->vfptr = (int)&TemporalClass::`vftable';
  this->vfptr1 = (int)&TemporalClass::`vftable';
  this->vfptr2 = (int)&TemporalClass::`vftable';
  this->vfptr3 = (int)&TemporalClass::`vftable';
  if ( dword_B0EC70 < dword_B0EC68
    || (byte_B0EC6D || !dword_B0EC68)
    && dword_B0EC74 > 0
    && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(dword_B0EC60 + 8))(
         &dword_B0EC60,
         dword_B0EC68 + dword_B0EC74,
         0) )
  {
    v3 = dword_B0EC70++;
    *((_DWORD *)dword_B0EC64 + v3) = this;
  }
  return (int)this;
}
