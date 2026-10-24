_DWORD *__thiscall TemporalClass::TemporalClass(TemporalClass *this, int a2)
{
  int v3; // eax
  int v5; // [esp+Ch] [ebp-8h]

  AbstractClass::Constructor((AbstractClass *)this);
  *(_DWORD *)&this->__pad_28[4] = *(_DWORD *)&stru_A8E960.random[528];
  this->TemporalClass_field_34 = 0;
  this->vfptr = (int)&TemporalClass::`vftable';
  this->vfptr1 = (int)&TemporalClass::`vftable';
  this->vfptr2 = (int)&TemporalClass::`vftable';
  this->vfptr3 = (int)&TemporalClass::`vftable';
  this->creationFrame = a2;
  *(_DWORD *)this->__pad_28 = 0;
  *(_DWORD *)&this->__pad_28[4] = *(_DWORD *)&stru_A8E960.random[528];
  this->TemporalClass_field_30 = v5;
  this->TemporalClass_field_34 = 0;
  this->q040 = 0;
  this->u32_44 = 0;
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
  this->u32_48 = 0;
  this->q04C = 0;
  this->u32_38 = 0;
  this->u32_3C = 0;
  return &this->vfptr;
}
