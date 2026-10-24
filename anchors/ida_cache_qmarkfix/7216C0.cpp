_DWORD *__thiscall TiberiumClass::TiberiumClass(TiberiumClass *this, char *Source)
{
  int v3; // edx
  int v4; // eax
  int v5; // eax

  AbstractTypeClass::Constructor(&this->vfptr, Source);
  this->location[1] = -1717986918;
  this->Spread = -1717986918;
  *(_DWORD *)this->isInLogic = -1;
  this->location[0] = 0;
  this->location[2] = 1069128089;
  this->lineTrailer = 0;
  this->SpreadPercentage[0] = 1069128089;
  this->SpreadPercentage[1] = 0;
  this->Growth = 0;
  this->GrowthPercentage[0] = 0;
  AnimTypeVector::Constructor((AnimTypeVector *)&this->GrowthPercentage[1], 0, 0);
  this->Image = 10;
  this->Debris = 0;
  this->GrowthPercentage[1] = (int)&TypeList<AnimTypeClass const *>::`vftable';
  this->NumImages = 0;
  *(_DWORD *)this->__pad_E4 = 0;
  *(_DWORD *)&this->__pad_E4[4] = 0;
  this->TiberiumClass_field_EC = 0;
  this->TiberiumClass_field_F0 = 0;
  this->TiberiumClass_field_F4 = 0;
  this->TiberiumClass_field_F8 = 0;
  this->TiberiumClass_field_FC = 0;
  this->SpreadTimer[0] = *(_DWORD *)&stru_A8E960.random[528];
  this->SpreadTimer[2] = 0;
  this->TiberiumClass_field_10C = 0;
  this->TiberiumClass_field_110 = 0;
  this->TiberiumClass_field_114 = 0;
  this->TiberiumClass_field_118 = 0;
  v3 = *(_DWORD *)&stru_A8E960.random[528];
  this->GrowthTimer[2] = 0;
  this->GrowthTimer[0] = v3;
  this->vfptr = (int)&TiberiumClass::`vftable';
  this->vfptr1 = (int)&TiberiumClass::`vftable';
  this->vfptr2 = (int)&TiberiumClass::`vftable';
  this->vfptr3 = (int)&TiberiumClass::`vftable';
  *(_DWORD *)this->isInLogic = dword_B0F4F8;
  if ( dword_B0F4F8 < dword_B0F4F0
    || (byte_B0F4F5 || !dword_B0F4F0)
    && dword_B0F4FC > 0
    && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(dword_B0F4E8 + 8))(
         &dword_B0F4E8,
         dword_B0F4F0 + dword_B0F4FC,
         0) )
  {
    v4 = dword_B0F4F8++;
    *(&dword_B0F4EC->vfptr + v4) = (int)this;
  }
  (*(void (__thiscall **)(int *))(this->GrowthPercentage[1] + 12))(&this->GrowthPercentage[1]);
  if ( stru_B0F670.DynamicVector_field_0x10 < stru_B0F670.DynamicVector_field_0x8
    || (stru_B0F670.__pad_C[1] || !stru_B0F670.DynamicVector_field_0x8)
    && *(int *)stru_B0F670.__pad_14 > 0
    && (*(unsigned __int8 (__thiscall **)(DynamicVector *, int, _DWORD))(*(_DWORD *)stru_B0F670.__pad_0 + 8))(
         &stru_B0F670,
         stru_B0F670.DynamicVector_field_0x8 + *(_DWORD *)stru_B0F670.__pad_14,
         0) )
  {
    v5 = stru_B0F670.DynamicVector_field_0x10++;
    *(_DWORD *)(*(_DWORD *)&stru_B0F670.DynamicVector_field_0x1[3] + 4 * v5) = this;
  }
  return &this->vfptr;
}
