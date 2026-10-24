int __thiscall NeuronClass::NeuronClass(NeuronClass *this)
{
  int v2; // eax
  int v3; // eax

  AbstractClass::Constructor((AbstractClass *)this);
  this->field_30 = 0;
  *((_DWORD *)this + 10) = 0;
  *((_DWORD *)this + 11) = 0;
  *((_DWORD *)this + 12) = *(_DWORD *)&stru_A8E960.random[528];
  *(_DWORD *)this->__pad_0 = &NeuronClass::`vftable';
  this->NeuronClass_field_0x04 = (int)&NeuronClass::`vftable';
  this->NeuronClass_field_0x08 = (int)&NeuronClass::`vftable';
  this->NeuronClass_field_0x0C = (int)&NeuronClass::`vftable';
  if ( stru_B0F5D8.DynamicVector_field_0x10 < stru_B0F5D8.DynamicVector_field_0x8
    || (stru_B0F5D8.__pad_C[1] || !stru_B0F5D8.DynamicVector_field_0x8)
    && *(int *)stru_B0F5D8.__pad_14 > 0
    && (*(unsigned __int8 (__thiscall **)(DynamicVector *, int, _DWORD))(*(_DWORD *)stru_B0F5D8.__pad_0 + 8))(
         &stru_B0F5D8,
         stru_B0F5D8.DynamicVector_field_0x8 + *(_DWORD *)stru_B0F5D8.__pad_14,
         0) )
  {
    v2 = stru_B0F5D8.DynamicVector_field_0x10++;
    *(_DWORD *)(*(_DWORD *)&stru_B0F5D8.DynamicVector_field_0x1[3] + 4 * v2) = this;
  }
  if ( stru_B0F670.DynamicVector_field_0x10 < stru_B0F670.DynamicVector_field_0x8
    || (stru_B0F670.__pad_C[1] || !stru_B0F670.DynamicVector_field_0x8)
    && *(int *)stru_B0F670.__pad_14 > 0
    && (*(unsigned __int8 (__thiscall **)(DynamicVector *, int, _DWORD))(*(_DWORD *)stru_B0F670.__pad_0 + 8))(
         &stru_B0F670,
         stru_B0F670.DynamicVector_field_0x8 + *(_DWORD *)stru_B0F670.__pad_14,
         0) )
  {
    v3 = stru_B0F670.DynamicVector_field_0x10++;
    *(_DWORD *)(*(_DWORD *)&stru_B0F670.DynamicVector_field_0x1[3] + 4 * v3) = this;
  }
  return (int)this->__pad_0;
}
