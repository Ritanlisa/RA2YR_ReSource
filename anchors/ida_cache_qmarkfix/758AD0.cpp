int __thiscall sub_758AD0(ObjectClass *this, int *a2)
{
  int v3; // ebx
  int vfptr2; // eax
  int vfptr1; // edx
  int vfptr3; // ecx
  int v7; // edx
  _DWORD v9[4]; // [esp+Ch] [ebp-10h] BYREF

  v3 = 0;
  if ( !(*(int (__thiscall **)(int *, int))(*a2 + 28))(a2, 2) )
    goto LABEL_5;
  vfptr2 = this->vfptr2;
  vfptr1 = this->vfptr1;
  v9[0] = this->vfptr;
  vfptr3 = this->vfptr3;
  v9[2] = vfptr2;
  v9[1] = vfptr1;
  v7 = *a2;
  v9[3] = vfptr3;
  if ( (*(int (__thiscall **)(int *, _DWORD *, int))(v7 + 48))(a2, v9, 16) != 16
    || (*(int (__thiscall **)(int *, int, int))(*a2 + 48))(a2, this->uniqueId, 768) != 768
    || (*(int (__thiscall **)(int *, int, int))(*a2 + 48))(a2, this->abstractFlags, this->vfptr2 << 8) != this->vfptr2 << 8 )
  {
LABEL_5:
    v3 = 1;
  }
  (*(void (__thiscall **)(int *))(*a2 + 52))(a2);
  return v3;
}
