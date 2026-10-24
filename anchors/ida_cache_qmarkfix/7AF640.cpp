int __thiscall sub_7AF640(ObjectClass *this, int a2)
{
  int result; // eax
  int referenceCount; // ecx
  _DWORD *v5; // eax
  _DWORD v6[4]; // [esp+Ch] [ebp-20h] BYREF
  _BYTE v7[16]; // [esp+1Ch] [ebp-10h] BYREF

  result = (int)DSurface_Alternate;
  if ( DSurface_Alternate )
  {
    referenceCount = this->referenceCount;
    if ( referenceCount )
    {
      v5 = (_DWORD *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)referenceCount + 120))(referenceCount, v7);
      v6[0] = *v5;
      v6[1] = v5[1];
      v6[2] = v5[2];
      v6[3] = v5[3];
      (*(void (__thiscall **)(DSurface *, _DWORD *, _DWORD))(DSurface_Alternate->DSurface_field_0x0 + 20))(
        DSurface_Alternate,
        v6,
        0);
      return (*(int (__thiscall **)(DSurface *, _DWORD *, int, _DWORD *, _DWORD, int))(DSurface_Alternate->DSurface_field_0x0
                                                                                     + 8))(
               DSurface_Alternate,
               v6,
               this->referenceCount,
               v6,
               0,
               1);
    }
  }
  return result;
}
