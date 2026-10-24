_DWORD *__thiscall TemporalClass::ProcessEvent(TemporalClass *this, char a2)
{
  int v3; // eax
  TemporalClass *v5; // [esp+4h] [ebp-4h] BYREF

  this->vfptr = (int)&TemporalClass::`vftable';
  this->vfptr1 = (int)&TemporalClass::`vftable';
  this->vfptr2 = (int)&TemporalClass::`vftable';
  this->vfptr3 = (int)&TemporalClass::`vftable';
  v5 = this;
  v3 = (*(int (__thiscall **)(int *, TemporalClass **))(dword_B0EC60 + 16))(&dword_B0EC60, &v5);
  if ( v3 != -1 && v3 < dword_B0EC70 && v3 < --dword_B0EC70 )
  {
    do
    {
      ++v3;
      *((_DWORD *)dword_B0EC64 + v3 - 1) = *((_DWORD *)dword_B0EC64 + v3);
    }
    while ( v3 < dword_B0EC70 );
  }
  AbstractClass::DTOR((AbstractClass *)this);
  if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
  return &this->vfptr;
}
