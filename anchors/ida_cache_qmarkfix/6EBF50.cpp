char __thiscall TeamClass::ProcessMemberPositions(TeamClass *this)
{
  double v1; // st7
  char result; // al
  int firstUnit; // esi
  int v5; // eax
  int v6; // ebp
  _DWORD *v7; // edi
  _DWORD *v8; // eax
  int v9; // ecx
  int v10; // edx
  int v11; // eax
  int v12; // eax
  int v13; // eax
  char v14; // [esp+23h] [ebp-2Dh]
  _DWORD v15[3]; // [esp+24h] [ebp-2Ch] BYREF
  int v16; // [esp+30h] [ebp-20h]
  int v17; // [esp+34h] [ebp-1Ch]
  _BYTE v18[12]; // [esp+38h] [ebp-18h] BYREF
  _BYTE v19[12]; // [esp+44h] [ebp-Ch] BYREF

  result = 0;
  firstUnit = this->firstUnit;
  v14 = 0;
  if ( this->visibilityFlags[0] )
  {
    if ( firstUnit )
    {
      do
      {
        if ( *(_BYTE *)(firstUnit + 144)
          && *(_DWORD *)(firstUnit + 108)
          && (dword_A8E7AC || !*(_BYTE *)(firstUnit + 129))
          && (*(_BYTE *)(firstUnit + 1673) || (*(int (__thiscall **)(int))(*(_DWORD *)firstUnit + 44))(firstUnit) == 2) )
        {
          v5 = *SessionClass::GetEntry((SessionClass *)this->currentScript, v15);
          if ( v5 == 54 || v5 == 53 )
            v6 = dword_8871E0->C4Delay[1];
          else
            v6 = dword_8871E0->C4Delay[0];
          if ( (*(int (__thiscall **)(int))(*(_DWORD *)firstUnit + 44))(firstUnit) == 2 )
            v6 *= 3;
          if ( *(_BYTE *)(this->buildingType + 167)
            && !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)firstUnit + 1248))(firstUnit) )
          {
            v6 /= 3;
          }
          v7 = (_DWORD *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)this->unknown38 + 72))(this->unknown38, v18);
          v8 = (_DWORD *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)firstUnit + 72))(firstUnit, v19);
          v9 = *v8 - *v7;
          v10 = v8[1];
          v11 = v8[2];
          v15[2] = v9;
          v12 = v11 - v7[2];
          v16 = v10 - v7[1];
          v17 = v12;
          Math::Sqrt((double)v9 * (double)v9 + (double)v16 * (double)v16 + (double)v12 * (double)v12);
          LOWORD(v13) = Math::RoundToInt(v1);
          if ( v13 <= v6 )
          {
            if ( (*(int (__thiscall **)(int))(*(_DWORD *)firstUnit + 388))(firstUnit) != 5 )
            {
              (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)firstUnit + 488))(firstUnit, 5, 0);
              (*(void (__thiscall **)(int, _DWORD, int))(*(_DWORD *)firstUnit + 1152))(firstUnit, 0, 1);
            }
          }
          else
          {
            if ( !*(_DWORD *)(firstUnit + 1444) )
            {
              (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)firstUnit + 488))(firstUnit, 2, 0);
              (*(void (__thiscall **)(int, int, int))(*(_DWORD *)firstUnit + 1152))(firstUnit, this->unknown38, 1);
            }
            v14 = 1;
          }
        }
        firstUnit = *(_DWORD *)(firstUnit + 1496);
      }
      while ( firstUnit );
      result = v14;
    }
    this->visibilityFlags[0] = result;
  }
  return result;
}
