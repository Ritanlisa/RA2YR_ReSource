int __userpurge TechnoTypeClass::SaveLoad_Prefix_0@<eax>(TechnoTypeClass *this, _DWORD *a2, int *a3, int a4, int a5)
{
  int v5; // ebx
  int result; // eax
  int v7; // edx
  int i; // ebx
  int v9; // edx
  int j; // ebx
  int v11; // edx
  int k; // ebx
  int v13; // edx
  int m; // ebx
  int v15; // edx
  int n; // ebx
  int v17; // edx
  int ii; // ebx
  int v19; // edx
  int jj; // ebx
  int v21; // edx
  int kk; // ebx
  int v23; // edx
  int mm; // ebx

  result = AbstractClass::SaveLoad_PrefixWrapper((AbstractClass *)this, (int)a2, (int)a3);
  if ( result >= 0 )
  {
    v7 = *a2;
    a3 = (int *)this->Dock[4];
    (*(void (__stdcall **)(_DWORD *, int **, int, _DWORD, int))(v7 + 16))(a2, &a3, 4, 0, v5);
    for ( i = 0; i < a4; ++i )
      (*(void (__stdcall **)(_DWORD *, int, int, _DWORD))(*a2 + 16))(a2, this->Dock[1] + 4 * i, 4, 0);
    v9 = *a2;
    a4 = this->DebrisTypes[4];
    (*(void (__stdcall **)(_DWORD *, int *, int, _DWORD))(v9 + 16))(a2, &a4, 4, 0);
    for ( j = 0; j < a4; ++j )
      (*(void (__stdcall **)(_DWORD *, int, int, _DWORD))(*a2 + 16))(a2, this->DebrisTypes[1] + 4 * j, 4, 0);
    v11 = *a2;
    a4 = this->DebrisAnims[4];
    (*(void (__stdcall **)(_DWORD *, int *, int, _DWORD))(v11 + 16))(a2, &a4, 4, 0);
    for ( k = 0; k < a4; ++k )
      (*(void (__stdcall **)(_DWORD *, int, int, _DWORD))(*a2 + 16))(a2, this->DebrisAnims[1] + 4 * k, 4, 0);
    v13 = *a2;
    a4 = this->VoiceSelect[4];
    (*(void (__stdcall **)(_DWORD *, int *, int, _DWORD))(v13 + 16))(a2, &a4, 4, 0);
    for ( m = 0; m < a4; ++m )
      (*(void (__stdcall **)(_DWORD *, int, int, _DWORD))(*a2 + 16))(a2, this->VoiceSelect[1] + 4 * m, 4, 0);
    v15 = *a2;
    a4 = this->VoiceSelectEnslaved[4];
    (*(void (__stdcall **)(_DWORD *, int *, int, _DWORD))(v15 + 16))(a2, &a4, 4, 0);
    for ( n = 0; n < a4; ++n )
      (*(void (__stdcall **)(_DWORD *, int, int, _DWORD))(*a2 + 16))(a2, this->VoiceSelectEnslaved[1] + 4 * n, 4, 0);
    v17 = *a2;
    a4 = this->VoiceSelectDeactivated[4];
    (*(void (__stdcall **)(_DWORD *, int *, int, _DWORD))(v17 + 16))(a2, &a4, 4, 0);
    for ( ii = 0; ii < a4; ++ii )
      (*(void (__stdcall **)(_DWORD *, int, int, _DWORD))(*a2 + 16))(a2, this->VoiceSelectDeactivated[1] + 4 * ii, 4, 0);
    v19 = *a2;
    a4 = this->VoiceMove[4];
    (*(void (__stdcall **)(_DWORD *, int *, int, _DWORD))(v19 + 16))(a2, &a4, 4, 0);
    for ( jj = 0; jj < a4; ++jj )
      (*(void (__stdcall **)(_DWORD *, int, int, _DWORD))(*a2 + 16))(a2, this->VoiceMove[1] + 4 * jj, 4, 0);
    v21 = *a2;
    a4 = this->VoiceAttack[4];
    (*(void (__stdcall **)(_DWORD *, int *, int, _DWORD))(v21 + 16))(a2, &a4, 4, 0);
    for ( kk = 0; kk < a4; ++kk )
      (*(void (__stdcall **)(_DWORD *, int, int, _DWORD))(*a2 + 16))(a2, this->VoiceAttack[1] + 4 * kk, 4, 0);
    v23 = *a2;
    a4 = this->VoiceSpecialAttack[4];
    (*(void (__stdcall **)(_DWORD *, int *, int))(v23 + 16))(a2, &a4, 4);
    for ( mm = 0; mm < (int)a3; ++mm )
      (*(void (__stdcall **)(_DWORD *, int, int, _DWORD))(*a2 + 16))(a2, this->VoiceSpecialAttack[1] + 4 * mm, 4, 0);
    DynamicVector::Read((DynamicVector *)this->VoiceDie, a2);
    DynamicVector::Read((DynamicVector *)this->VoiceFeedback, a2);
    DynamicVector::Read((DynamicVector *)this->MoveSound, a2);
    DynamicVector::Read((DynamicVector *)this->DieSound, a2);
    Stream::WriteIntArray((Stream *)this->Explosion, a2);
    Stream::WriteIntArray((Stream *)this->DestroyAnim, a2);
    DynamicVector::Read((DynamicVector *)this->DebrisMaximums, a2);
    DynamicVector::Read((DynamicVector *)this->Prerequisite, a2);
    DynamicVector::Read((DynamicVector *)this->PrerequisiteOverride, a2);
    TechnoTypeClass::SaveLoadDataArray((TechnoTypeClass *)this->DamageParticleSystems, a2);
    TechnoTypeClass::SaveLoadDataArray((TechnoTypeClass *)this->DestroyParticleSystems, a2);
    return 0;
  }
  return result;
}
