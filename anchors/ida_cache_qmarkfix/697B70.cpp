int __thiscall SessionClass::CreateConnections(SessionClass *this)
{
  int v3; // esi
  int v4; // eax
  int v5; // ebp
  int i; // eax
  int v7; // eax
  int v8; // eax
  _DWORD *v9; // ebp
  int v10; // esi
  int Ticks; // ecx
  int v12; // [esp+10h] [ebp-18h] BYREF
  int v13; // [esp+14h] [ebp-14h] BYREF
  int v14; // [esp+18h] [ebp-10h] BYREF
  char v15; // [esp+1Ch] [ebp-Ch]
  char v16; // [esp+1Dh] [ebp-Bh]
  int v17[2]; // [esp+20h] [ebp-8h] BYREF

  Debug::Log();
  if ( *(_DWORD *)&dword_A8B238.field_0 != 3 && *(_DWORD *)&dword_A8B238.field_0 != 4 )
    return 0;
  v3 = 0;
  if ( this->StartSpots[4] > 0 )
  {
    do
    {
      Debug::Log();
      if ( _wcsicmp(
             *(const wchar_t **)(this->StartSpots[1] + 4 * v3),
             (const wchar_t *)(*(&dword_A8022C->vfptr + *(_DWORD *)(*(_DWORD *)(this->StartSpots[1] + 4 * v3) + 111))
                             + 90154)) )
      {
        return 0;
      }
      if ( !_wcsicmp(*(const wchar_t **)(this->StartSpots[1] + 4 * v3), (const wchar_t *)&this->unknown_2854[1996]) )
      {
        *(_DWORD *)&this->unknown_2854[2080] = *(_DWORD *)(*(_DWORD *)(this->StartSpots[1] + 4 * v3) + 111);
        Network::CopyAddress(
          (Network *)(*(_DWORD *)(*(_DWORD *)&stru_A8D804.__pad_3D[567] + 4 * v3) + 40),
          &v13,
          (int)v17);
        NetworkID::Assign((NetworkID *)&stru_A8D804.__pad_3D[867], &v13, (int)v17, 0);
        Network::SetPlayerCoords((Network *)&stru_A8E960.nextScenario[96], &stru_A8D804.__pad_3D[867]);
      }
      v4 = *(_DWORD *)(this->StartSpots[1] + 4 * v3);
      *(_DWORD *)(*(&dword_A8022C->vfptr + *(_DWORD *)(v4 + 111)) + 516) = *(_DWORD *)(v4 + 123);
      Network::CopyAddress(
        (Network *)(*(_DWORD *)(*(_DWORD *)&stru_A8D804.__pad_3D[567] + 4 * v3) + 40),
        &v13,
        (int)v17);
      v5 = 0;
      for ( i = 0; i < 4; ++i )
        v5 = *((unsigned __int8 *)v17 + i) | (v5 << 8);
      Debug::Log();
      *(_DWORD *)(*(&dword_A8022C->vfptr + *(_DWORD *)(*(_DWORD *)(this->StartSpots[1] + 4 * v3) + 111)) + 512) = v5;
      *(_BYTE *)(*(&dword_A8022C->vfptr + *(_DWORD *)(*(_DWORD *)(this->StartSpots[1] + 4 * v3) + 111)) + 520) = 0;
      if ( v3 > 0 )
      {
        v7 = *(_DWORD *)(this->StartSpots[1] + 4 * v3);
        SessionClass::initLAN(
          (int)&stru_A8E960.nextScenario[96],
          *(_DWORD *)(v7 + 111),
          (wchar_t *)v7,
          (_DWORD *)(v7 + 40));
        *(_DWORD *)(*(_DWORD *)(this->StartSpots[1] + 4 * v3) + 115) = -1;
      }
    }
    while ( ++v3 < this->StartSpots[4] );
  }
  v8 = *(_DWORD *)stru_887338.__pad_0;
  v9 = dword_A8E284;
  do
  {
    v10 = *(_DWORD *)&stru_887338.__pad_6[2];
    if ( v8 != -1 )
    {
      Ticks = Timer::GetTicks();
      v8 = *(_DWORD *)stru_887338.__pad_0;
      v10 += Ticks - *(_DWORD *)stru_887338.__pad_0;
    }
    *v9++ = v10;
  }
  while ( (int)v9 < (int)&byte_A8E2A4 );
  if ( this->GameMode != 4 )
    goto LABEL_22;
  if ( !this->unknown_2854[2108] )
    goto LABEL_22;
  v12 = 0;
  v14 = 0;
  v15 = 0;
  v16 = 0;
  NetworkID::Assign((NetworkID *)&stru_A8D804.__pad_3D[879], &v12, (int)&v14, 0);
  this->unknown_2854[276] = 1;
  *(_DWORD *)&this->unknown_2854[2104] = 0;
  *(_DWORD *)&this->unknown_2854[2120] = 20;
  *(_DWORD *)&this->unknown_2854[2112] = -1;
  SessionClass::initInternet((SessionClass *)&stru_A8E960.nextScenario[96]);
  SessionClass::BuildLobbyPlayerList((SessionClass *)&dword_B052D0);
  if ( SessionClass::IsValidHouse((int)&dword_A8B238, 0)
    && (!LaunchMultiplayerHost((bool *)dword_B052D0.__pad_0, 0)
     || !Network::SendMasterPlayerList((Network *)&dword_B052D0)) )
  {
LABEL_22:
    stru_A8D804.__pad_3D[863] = 0;
  }
  Debug::Log();
  Debug::Log();
  return 1;
}
