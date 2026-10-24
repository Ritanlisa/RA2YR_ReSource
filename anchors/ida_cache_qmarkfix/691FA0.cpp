void **__thiscall ScriptTypeClass::ddtor(ScriptTypeClass *this, char a2)
{
  int v3; // eax
  ScriptTypeClass *v5; // [esp+4h] [ebp-4h] BYREF

  this->vfptr = (int)&ScriptTypeClass::`vftable';
  this->vfptr1 = (int)&ScriptTypeClass::`vftable';
  this->vfptr2 = (int)&ScriptTypeClass::`vftable';
  this->vfptr3 = (int)&ScriptTypeClass::`vftable';
  AbstractClass::AnnounceExpiredPointer((AbstractClass *)this, 1);
  v5 = this;
  v3 = (*(int (__thiscall **)(int *, ScriptTypeClass **))(dword_8B41C8 + 16))(&dword_8B41C8, &v5);
  if ( v3 != -1 && v3 < dword_8B41D8 && v3 < --dword_8B41D8 )
  {
    do
    {
      ++v3;
      *((_DWORD *)dword_8B41CC + v3 - 1) = *((_DWORD *)dword_8B41CC + v3);
    }
    while ( v3 < dword_8B41D8 );
  }
  AbstractTypeClass::Dtor((AbstractTypeClass *)this);
  if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
  return (void **)this;
}
