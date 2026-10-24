_DWORD *__thiscall AnimTypeClass::Construct(AnimTypeClass *this, char *Source)
{
  int v3; // eax
  int v4; // eax
  int v5; // eax
  AnimTypeClass **v6; // ecx

  ObjectTypeClass::ConstructFull(&this->vfptr, Source);
  this->MiddleFrameIndex = -1;
  this->MiddleFrameWidth = 0;
  this->MiddleFrameHeight = 0;
  *(_DWORD *)this->__pad_2A0 = 0;
  this->AnimTypeClass_field_2A4[0] = 0;
  this->Damage[0] = 0;
  this->Damage[1] = 0;
  this->Rate = 1;
  this->Start = 0;
  this->LoopStart = 0;
  this->LoopEnd = 0;
  this->End = 0;
  this->LoopCount = 0;
  this->Next = 0;
  this->SpawnsParticle = -1;
  this->NumParticles = 0;
  this->DetailLevel = 0;
  this->TranslucencyDetailLevel = 0;
  this->RandomLoopDelay[0] = 0;
  this->RandomLoopDelay[1] = 0;
  this->RandomRate[0] = 0;
  this->RandomRate[1] = 0;
  this->Translucency = 0;
  this->Spawns = 0;
  this->SpawnCount = 0;
  this->Report = -1;
  this->StopSound = -1;
  this->BounceAnim = 0;
  this->ExpireAnim = 0;
  this->TrailerAnim = 0;
  this->TrailerSeperation = 0;
  this->Elasticity[0] = -1610612736;
  this->Elasticity[1] = 1072273817;
  this->MinZVel[0] = 0;
  this->MinZVel[1] = 1074528256;
  this->AnimTypeClass_field_double_320[0] = 0;
  this->AnimTypeClass_field_double_320[1] = 1074528256;
  this->MaxXYVel[0] = 0;
  this->MaxXYVel[1] = 1076756480;
  this->Warhead = 0;
  this->DamageRadius = 0;
  this->TiberiumSpawnType = 0;
  this->TiberiumSpreadRadius = 0;
  this->YSortAdjust = 0;
  this->YDrawOffset = 0;
  this->ZAdjust = 0;
  this->MakeInfantry = -1;
  this->RunningFrames = 0;
  this->IsFlamingGuy[0] = 0;
  this->IsVeins[0] = 0;
  this->IsMeteor[0] = 0;
  this->TiberiumChainReaction[0] = 0;
  this->IsTiberium[0] = 0;
  this->HideIfNoOre[0] = 0;
  this->Bouncer[0] = 0;
  this->Tiled[0] = 0;
  this->ShouldUseCellDrawer[0] = 1;
  this->UseNormalLight[0] = 0;
  this->DemandLoad[0] = 0;
  this->FreeLoad[0] = 0;
  this->IsAnimatedTiberium[0] = 0;
  this->AltPalette[0] = 0;
  this->Normalized[0] = 0;
  this->Layer = 3;
  this->DoubleThick[0] = 0;
  this->Flat_flag[0] = 0;
  this->Translucent[0] = 0;
  this->Scorch[0] = 0;
  this->Flamer[0] = 0;
  this->Crater[0] = 0;
  this->ForceBigCraters[0] = 0;
  this->Sticky[0] = 0;
  this->PingPong[0] = 0;
  this->Reverse[0] = 0;
  this->Shadow[0] = 0;
  this->PsiWarning[0] = 0;
  this->ShouldFogRemove[0] = 1;
  this->vfptr = (int)&AnimTypeClass::`vftable';
  this->vfptr1 = (int)&AnimTypeClass::`vftable';
  this->vfptr2 = (int)&AnimTypeClass::`vftable';
  this->vfptr3 = (int)&AnimTypeClass::`vftable';
  AbstractClass::GenerateUniqueID((AbstractClass *)&this->vfptr1);
  this->IsLogic[0] = 1;
  this->RadarInvisible[0] = 1;
  this->Selectable[0] = 0;
  this->LegalTarget[0] = 0;
  this->Insignificant[0] = 1;
  this->Immune[0] = 1;
  this->AllowCellContent[0] = 0;
  if ( dword_8B4160 < dword_8B4158
    || (byte_8B415D || !dword_8B4158)
    && dword_8B4164 > 0
    && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(dword_8B4150 + 8))(
         &dword_8B4150,
         dword_8B4158 + dword_8B4164,
         0) )
  {
    v3 = dword_8B4160++;
    *((_DWORD *)dword_8B4154 + v3) = this;
  }
  if ( stru_B0F670.DynamicVector_field_0x10 < stru_B0F670.DynamicVector_field_0x8
    || (stru_B0F670.__pad_C[1] || !stru_B0F670.DynamicVector_field_0x8)
    && *(int *)stru_B0F670.__pad_14 > 0
    && (*(unsigned __int8 (__thiscall **)(DynamicVector *, int, _DWORD))(*(_DWORD *)stru_B0F670.__pad_0 + 8))(
         &stru_B0F670,
         stru_B0F670.DynamicVector_field_0x8 + *(_DWORD *)stru_B0F670.__pad_14,
         0) )
  {
    v4 = stru_B0F670.DynamicVector_field_0x10++;
    *(_DWORD *)(*(_DWORD *)&stru_B0F670.DynamicVector_field_0x1[3] + 4 * v4) = this;
  }
  v5 = 0;
  if ( dword_8B4160 <= 0 )
  {
LABEL_17:
    v5 = -1;
  }
  else
  {
    v6 = (AnimTypeClass **)dword_8B4154;
    while ( *v6 != this )
    {
      ++v5;
      ++v6;
      if ( v5 >= dword_8B4160 )
        goto LABEL_17;
    }
  }
  this->MiddleFrameIndex = v5;
  return &this->vfptr;
}
