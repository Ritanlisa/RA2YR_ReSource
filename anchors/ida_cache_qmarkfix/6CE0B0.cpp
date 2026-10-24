int *__thiscall SuperClass::Reset(SuperClass *this)
{
  int SuperClass_field_0x68; // eax
  int v3; // eax
  int v4; // eax
  int SuperClass_field_0x24; // ecx
  int *result; // eax
  int SuperClass_field_0x30; // ebx
  bool v8; // bl
  int v9; // esi
  int v10; // ecx
  int v11; // edx
  _DWORD v12[4]; // [esp+4h] [ebp-10h] BYREF

  SuperClass_field_0x68 = this->SuperClass_field_0x68;
  if ( SuperClass_field_0x68 )
  {
    *(_BYTE *)(SuperClass_field_0x68 + 405) = 0;
    this->SuperClass_field_0x68 = 0;
    v12[0] = this;
    v3 = (*(int (__thiscall **)(DynamicVectorClass *, _DWORD *))(stru_B0F5B8.vfptr + 16))(&stru_B0F5B8, v12);
    if ( v3 != -1 )
      DynamicVector::RemoveItem((DynamicVector *)&stru_B0F5B8, v3);
  }
  if ( LOBYTE(this->SuperClass_field_0x6C) )
  {
    v12[0] = this;
    v4 = (*(int (__thiscall **)(DynamicVectorClass *, _DWORD *))(stru_B0F5B8.vfptr + 16))(&stru_B0F5B8, v12);
    if ( v4 != -1 )
      DynamicVector::RemoveItem((DynamicVector *)&stru_B0F5B8, v4);
    LOBYTE(this->SuperClass_field_0x6C) = 0;
  }
  SuperClass_field_0x24 = this->SuperClass_field_0x24;
  result = &this->SuperClass_field_0x30;
  HIBYTE(this->SuperClass_field_0x6C) = 0;
  SuperClass_field_0x30 = this->SuperClass_field_0x30;
  this->SuperClass_field_0x78 = -1;
  v8 = SuperClass_field_0x30 != -1;
  if ( SuperClass_field_0x24 == -1 )
    SuperClass_field_0x24 = *(_DWORD *)(this->SuperClass_field_0x28 + 176);
  *result = *(_DWORD *)&stru_A8E960.random[528];
  *(_DWORD *)this->__pad_34 = v12[2];
  this->SuperClass_field_0x38 = SuperClass_field_0x24;
  if ( !v8 )
  {
    v9 = *result;
    if ( *result != -1 )
    {
      v10 = result[2];
      v11 = *(_DWORD *)&stru_A8E960.random[528] - v9;
      if ( *(_DWORD *)&stru_A8E960.random[528] - v9 >= v10 )
      {
        result[2] = 0;
        *result = -1;
      }
      else
      {
        *result = -1;
        result[2] = v10 - v11;
      }
    }
  }
  return result;
}
