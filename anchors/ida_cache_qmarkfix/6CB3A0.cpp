void **__thiscall SuperClass::CreateChronoAnim(SuperClass *this, int a2, int a3, int a4)
{
  int SuperClass_field_0x68; // eax
  int v6; // eax
  int v7; // eax
  void **result; // eax
  SuperClass *v9; // [esp+4h] [ebp-10h] BYREF
  int v10[3]; // [esp+8h] [ebp-Ch] BYREF

  SuperClass_field_0x68 = this->SuperClass_field_0x68;
  if ( SuperClass_field_0x68 )
  {
    *(_BYTE *)(SuperClass_field_0x68 + 405) = 0;
    this->SuperClass_field_0x68 = 0;
    v9 = this;
    v6 = (*(int (__thiscall **)(DynamicVectorClass *, SuperClass **))(stru_B0F5B8.vfptr + 16))(&stru_B0F5B8, &v9);
    if ( v6 != -1 )
      DynamicVector::RemoveItem((DynamicVector *)&stru_B0F5B8, v6);
  }
  if ( LOBYTE(this->SuperClass_field_0x6C) )
  {
    v9 = this;
    v7 = (*(int (__thiscall **)(DynamicVectorClass *, SuperClass **))(stru_B0F5B8.vfptr + 16))(&stru_B0F5B8, &v9);
    if ( v7 != -1 )
      DynamicVector::RemoveItem((DynamicVector *)&stru_B0F5B8, v7);
    LOBYTE(this->SuperClass_field_0x6C) = 0;
  }
  result = (void **)__2_YAPAXI_Z(0x1C8u);
  if ( result )
  {
    v10[0] = a2;
    v10[1] = a3;
    v10[2] = a4 + 5;
    result = AnimClass::ctor(
               (AnimClass *)result,
               *(void **)&dword_8871E0->__pad_240[240],
               v10,
               0,
               1,
               (void *)0x600,
               0,
               0);
    if ( result )
    {
      this->SuperClass_field_0x68 = (int)result;
      result = (void **)stru_B0F5B8.Capacity;
      if ( stru_B0F5B8.Count < stru_B0F5B8.Capacity
        || (stru_B0F5B8.IsAllocated[0] || !stru_B0F5B8.Capacity)
        && stru_B0F5B8.CapacityIncrement > 0
        && (result = (void **)(*(int (__thiscall **)(DynamicVectorClass *, int, _DWORD))(stru_B0F5B8.vfptr + 8))(
                                &stru_B0F5B8,
                                stru_B0F5B8.Capacity + stru_B0F5B8.CapacityIncrement,
                                0),
            (_BYTE)result) )
      {
        result = (void **)stru_B0F5B8.Count++;
        *(_DWORD *)(stru_B0F5B8.Items + 4 * (_DWORD)result) = this;
      }
    }
  }
  return result;
}
