char __stdcall SideClass::LoadAllFromINI(_DWORD *a1)
{
  int i; // edi
  int j; // edi
  int k; // edi
  int m; // edi
  int n; // edi
  int ii; // edi
  int jj; // edi
  int kk; // edi
  int mm; // edi
  int nn; // edi
  int i1; // edi
  int i2; // edi
  int i3; // edi
  int i4; // edi
  int i5; // edi
  int i6; // edi
  int i7; // edi
  int i8; // edi
  int v19; // ebx
  MissionClass *v20; // edi
  ObjectClass *v22; // [esp+0h] [ebp-Ch]

  for ( i = 0; i < dword_A83CA8; ++i )
    (*(void (__thiscall **)(_DWORD, _DWORD *))(**((_DWORD **)dword_A83C9C + i) + 100))(
      *((_DWORD *)dword_A83C9C + i),
      a1);
  for ( j = 0; j < dword_A8E340; ++j )
    (*(void (__thiscall **)(_DWORD, _DWORD *))(**((_DWORD **)dword_A8E334 + j) + 100))(
      *((_DWORD *)dword_A8E334 + j),
      a1);
  for ( k = 0; k < dword_8B4160; ++k )
    (*(void (__thiscall **)(_DWORD, INIClass *))(**((_DWORD **)dword_8B4154 + k) + 100))(
      *((_DWORD *)dword_8B4154 + k),
      &dword_887180);
  for ( m = 0; m < dword_A83C78; ++m )
    (*(void (__thiscall **)(_DWORD, _DWORD *))(**((_DWORD **)dword_A83C6C + m) + 100))(
      *((_DWORD *)dword_A83C6C + m),
      a1);
  for ( n = 0; n < dword_A8B228; ++n )
    (*(void (__thiscall **)(_DWORD, _DWORD *))(**((_DWORD **)dword_A8B21C + n) + 100))(
      *((_DWORD *)dword_A8B21C + n),
      a1);
  for ( ii = 0; ii < *(int *)((char *)&stru_A83CD9.abstractFlags + 3); ++ii )
    (*(void (__thiscall **)(_DWORD, _DWORD *))(**(_DWORD **)(*(int *)((char *)&stru_A83CD9.vfptr2 + 3) + 4 * ii) + 100))(
      *(_DWORD *)(*(int *)((char *)&stru_A83CD9.vfptr2 + 3) + 4 * ii),
      a1);
  for ( jj = 0; jj < dword_A8E358; ++jj )
    (*(void (__thiscall **)(_DWORD, _DWORD *))(**((_DWORD **)dword_A8E34C + jj) + 100))(
      *((_DWORD *)dword_A8E34C + jj),
      a1);
  for ( kk = 0; kk < g_WeaponTypePool; ++kk )
    (*(void (__thiscall **)(_DWORD, _DWORD *))(**((_DWORD **)g_WeaponTypeConfig + kk) + 100))(
      *((_DWORD *)g_WeaponTypeConfig + kk),
      a1);
  for ( mm = 0; mm < dword_A83C90; ++mm )
    (*(void (__thiscall **)(_DWORD, _DWORD *))(**((_DWORD **)dword_A83C84 + mm) + 100))(
      *((_DWORD *)dword_A83C84 + mm),
      a1);
  for ( nn = 0; nn < g_WarheadTypePool; ++nn )
    (*(void (__thiscall **)(_DWORD, _DWORD *))(**((_DWORD **)dword_8874C4 + nn) + 100))(
      *((_DWORD *)dword_8874C4 + nn),
      a1);
  for ( i1 = 0; i1 < g_WeaponTypePool; ++i1 )
    WeaponTypeClass::CalculateSpeed(*((WeaponTypeClass **)g_WeaponTypeConfig + i1));
  for ( i2 = 0; i2 < dword_A83C78; ++i2 )
    nullsub_7(v22);
  for ( i3 = 0; i3 < dword_A8E328; ++i3 )
    (*(void (__thiscall **)(_DWORD, _DWORD *))(**((_DWORD **)dword_A8E31C + i3) + 100))(
      *((_DWORD *)dword_A8E31C + i3),
      a1);
  for ( i4 = 0; i4 < *(int *)&stru_A8E960.random[180]; ++i4 )
    (*(void (__thiscall **)(_DWORD, _DWORD *))(**(_DWORD **)(*(_DWORD *)&stru_A8E960.random[168] + 4 * i4) + 100))(
      *(_DWORD *)(*(_DWORD *)&stru_A8E960.random[168] + 4 * i4),
      a1);
  for ( i5 = 0; i5 < dword_A83D90; ++i5 )
    (*(void (__thiscall **)(_DWORD, _DWORD *))(**(_DWORD **)(*(int *)((char *)&stru_A83CD9.lineTrailer + 3) + 4 * i5)
                                             + 100))(
      *(_DWORD *)(*(int *)((char *)&stru_A83CD9.lineTrailer + 3) + 4 * i5),
      a1);
  for ( i6 = 0; i6 < dword_A83DA8; ++i6 )
    (*(void (__thiscall **)(_DWORD, _DWORD *))(**((_DWORD **)dword_A83D9C + i6) + 100))(
      *((_DWORD *)dword_A83D9C + i6),
      a1);
  for ( i7 = 0; i7 < *(int *)((char *)stru_A83CD9.location + 3); ++i7 )
    (*(void (__thiscall **)(_DWORD, _DWORD *))(**(_DWORD **)(*(_DWORD *)&stru_A83CD9.alignmentPadding91[2] + 4 * i7)
                                             + 100))(
      *(_DWORD *)(*(_DWORD *)&stru_A83CD9.alignmentPadding91[2] + 4 * i7),
      a1);
  for ( i8 = 0; i8 < *(int *)&stru_A8E960.altNextScenario[212]; ++i8 )
    (*(void (__thiscall **)(_DWORD, _DWORD *))(**(_DWORD **)(*(_DWORD *)&stru_A8E960.altNextScenario[200] + 4 * i8) + 100))(
      *(_DWORD *)(*(_DWORD *)&stru_A8E960.altNextScenario[200] + 4 * i8),
      a1);
  v19 = 0;
  v20 = &stru_A8E3A8;
  do
  {
    v20->vfptr = v19;
    MissionClass::LoadFromINI(v20, a1);
    v20 = (MissionClass *)((char *)v20 + 32);
    ++v19;
  }
  while ( (int)v20 < (int)&dword_A8E7A8 );
  return 1;
}
