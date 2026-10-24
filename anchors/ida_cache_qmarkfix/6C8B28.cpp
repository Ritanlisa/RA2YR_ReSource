int __thiscall sub_6C8B10(ObjectClass *this, int a2, int a3, __int16 a4, __int16 a5)
{
  int vfptr2; // edi
  _DWORD *v8; // eax
  int v9; // esi
  unsigned int v10; // eax
  void *v11; // edi
  int v12; // [esp+10h] [ebp-10h]
  int v13; // [esp+18h] [ebp-8h] BYREF
  _BYTE *v14; // [esp+2Ch] [ebp+Ch]
  int v15; // [esp+30h] [ebp+10h]

  vfptr2 = this->vfptr2;
  if ( vfptr2 + 12 > (unsigned int)(this->vfptr1 + this->vfptr) )
    return 0;
  v12 = this->vfptr2;
  this->vfptr2 = vfptr2 + 12;
  if ( !vfptr2 )
    return 0;
  *(_WORD *)vfptr2 = a4;
  *(_WORD *)(vfptr2 + 2) = a5;
  *(_WORD *)(vfptr2 + 4) = *(_WORD *)(a3 + 8);
  *(_WORD *)(vfptr2 + 6) = *(_WORD *)(a3 + 12);
  *(_DWORD *)(vfptr2 + 8) = this->vfptr2;
  v8 = CellStruct::Copy((CellStruct *)a3, &v13);
  v9 = a2;
  v14 = (_BYTE *)(*(int (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)a2 + 92))(a2, *v8, v8[1]);
  v15 = 0;
  if ( *(int *)(a3 + 12) > 0 )
  {
    while ( 1 )
    {
      v10 = Map_Append(v14, (int)&unk_B0BDD0, *(_DWORD *)(a3 + 8));
      v11 = (void *)this->vfptr2;
      if ( (unsigned int)v11 + v10 > this->vfptr1 + this->vfptr || (this->vfptr2 = (int)v11 + v10, !v11) )
      {
        (*(void (__thiscall **)(int))(*(_DWORD *)v9 + 96))(v9);
        return 0;
      }
      qmemcpy(v11, &unk_B0BDD0, v10);
      ++v15;
      v14 += (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 116))(a2);
      if ( v15 >= *(_DWORD *)(a3 + 12) )
        break;
      v9 = a2;
    }
    vfptr2 = v12;
    v9 = a2;
  }
  (*(void (__thiscall **)(int))(*(_DWORD *)v9 + 96))(v9);
  return vfptr2;
}
