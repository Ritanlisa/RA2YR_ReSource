void __thiscall TeamClass::UpdateMembers(TeamClass *this)
{
  int firstUnit; // esi
  int queuedFocus; // eax
  int v4; // eax
  int v5; // edi
  int v6; // eax
  _DWORD *v7; // eax
  int v8; // edi
  bool v9; // bl
  bool v10; // al
  char v11; // [esp+30h] [ebp-36h]
  char v12; // [esp+31h] [ebp-35h]
  int v13; // [esp+32h] [ebp-34h]
  int v14; // [esp+36h] [ebp-30h]
  int v15; // [esp+3Ah] [ebp-2Ch] BYREF
  int v16; // [esp+42h] [ebp-24h] BYREF
  _DWORD v17[2]; // [esp+4Ah] [ebp-1Ch] BYREF
  _DWORD v18[2]; // [esp+52h] [ebp-14h] BYREF
  _BYTE v19[12]; // [esp+5Ah] [ebp-Ch] BYREF

  v11 = 1;
  firstUnit = this->firstUnit;
  v12 = 0;
  if ( firstUnit )
  {
    if ( this->focus || (queuedFocus = this->queuedFocus, (this->focus = queuedFocus) != 0) )
    {
      if ( !TeamClass::ProcessMemberPositions(this) )
      {
        while ( 1 )
        {
          if ( *(_BYTE *)(firstUnit + 144)
            && *(_DWORD *)(firstUnit + 108)
            && (dword_A8E7AC || !*(_BYTE *)(firstUnit + 129))
            && !*(_BYTE *)(firstUnit + 1673) )
          {
            v4 = *SessionClass::GetEntry((SessionClass *)this->currentScript, &v15);
            if ( v4 == 54 || v4 == 53 )
              v5 = dword_8871E0->C4Delay[1];
            else
              v5 = dword_8871E0->C4Delay[0];
            if ( ObjectClass::DistanceTo((ObjectClass *)firstUnit, this->spawnCell) <= v5 )
            {
              *(_BYTE *)(firstUnit + 1673) = 1;
            }
            else
            {
              if ( !*(_DWORD *)(firstUnit + 1444) )
              {
                (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)firstUnit + 488))(firstUnit, 2, 0);
                (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)firstUnit + 968))(firstUnit, 0);
                (*(void (__thiscall **)(int, int, int))(*(_DWORD *)firstUnit + 1152))(firstUnit, this->spawnCell, 1);
              }
              v11 = 0;
            }
          }
          if ( (*(int (__thiscall **)(int))(*(_DWORD *)firstUnit + 388))(firstUnit) == 16
            || *(_DWORD *)(firstUnit + 180) == 16 )
          {
            v11 = 0;
          }
          if ( !*(_BYTE *)(firstUnit + 144)
            || !*(_DWORD *)(firstUnit + 108)
            || !dword_A8E7AC && *(_BYTE *)(firstUnit + 129)
            || !*(_BYTE *)(firstUnit + 1673) && (*(int (__thiscall **)(int))(*(_DWORD *)firstUnit + 44))(firstUnit) != 2
            || (*(int (__thiscall **)(int))(*(_DWORD *)firstUnit + 388))(firstUnit) == 16
            || *(_DWORD *)(firstUnit + 180) == 16 )
          {
            goto LABEL_80;
          }
          v6 = *SessionClass::GetEntry((SessionClass *)this->currentScript, &v16);
          if ( v6 == 54 || v6 == 53 )
            v13 = dword_8871E0->C4Delay[1];
          else
            v13 = dword_8871E0->C4Delay[0];
          if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)firstUnit + 84))(firstUnit) )
            v13 *= 2;
          v12 = 1;
          v14 = ObjectClass::DistanceTo((ObjectClass *)firstUnit, this->focus);
          if ( v14 <= v13
            && ((*(int (__thiscall **)(int))(*(_DWORD *)firstUnit + 456))(firstUnit) >= 0
             || *ScriptClass::GetNextAction((ScriptClass *)this->currentScript, v17) == 3) )
          {
            if ( (*(int (__thiscall **)(int))(*(_DWORD *)firstUnit + 44))(firstUnit) != 2 )
              break;
            if ( (*(int (__thiscall **)(int))(*(_DWORD *)firstUnit + 464))(firstUnit) <= 0 )
              break;
            v7 = (_DWORD *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)firstUnit + 72))(firstUnit, v19);
            if ( Coord::To_Cell((Coord *)&dword_87F7E8, v7) == (CellClass *)this->focus
              || *ScriptClass::GetNextAction((ScriptClass *)this->currentScript, v18) == 3 )
            {
              break;
            }
          }
          if ( !*(_BYTE *)(this->buildingType + 173) || !*(_DWORD *)(firstUnit + 692) )
            goto LABEL_55;
          if ( *(_BYTE *)(firstUnit + 1678) )
          {
            (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)firstUnit + 968))(firstUnit, 0);
LABEL_55:
            if ( (*(int (__thiscall **)(int))(*(_DWORD *)firstUnit + 388))(firstUnit) != 2 )
            {
              (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)firstUnit + 488))(firstUnit, 2, 0);
              if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)firstUnit + 512))(firstUnit) )
                (*(void (__thiscall **)(int))(*(_DWORD *)firstUnit + 492))(firstUnit);
            }
            if ( !*(_DWORD *)(firstUnit + 1444) )
              (*(void (__thiscall **)(int, int, int))(*(_DWORD *)firstUnit + 1152))(firstUnit, this->focus, 1);
            v8 = *(_DWORD *)(firstUnit + 1444);
            if ( v8 != this->focus
              && (*(_BYTE *)((*(int (__thiscall **)(int))(*(_DWORD *)firstUnit + 132))(firstUnit) + 3434)
               || v8 != this->focus
               && (*(int (__thiscall **)(int))(*(_DWORD *)firstUnit + 44))(firstUnit) == 2
               && v8 == (*(int (__thiscall **)(int))(*(_DWORD *)firstUnit + 444))(firstUnit)) )
            {
              (*(void (__thiscall **)(int, int, int))(*(_DWORD *)firstUnit + 1152))(firstUnit, this->focus, 1);
            }
            v11 = 0;
LABEL_67:
            v9 = (*(int (__thiscall **)(int))(*(_DWORD *)firstUnit + 44))(firstUnit) == 2
              && *(_DWORD *)(firstUnit + 1444) == (*(int (__thiscall **)(int))(*(_DWORD *)firstUnit + 444))(firstUnit);
            v10 = (*(_BYTE *)(firstUnit + 20) & 1) != 0
               && *(_BYTE *)((*(int (__thiscall **)(int))(*(_DWORD *)firstUnit + 132))(firstUnit) + 3434)
               && v14 < v13;
            if ( *(_DWORD *)(firstUnit + 1444) && !v9 && !v10 )
              v11 = 0;
          }
LABEL_80:
          firstUnit = *(_DWORD *)(firstUnit + 1496);
          if ( !firstUnit )
          {
            if ( v12 && v11 )
            {
              if ( this->TeamClass_field_7F[0] )
                this->stepCompleted[0] = 1;
            }
            return;
          }
        }
        if ( (*(int (__thiscall **)(int))(*(_DWORD *)firstUnit + 388))(firstUnit) == 2 )
        {
          if ( !*(_DWORD *)(firstUnit + 1444) )
            goto LABEL_87;
          if ( ObjectClass::DistanceTo((ObjectClass *)firstUnit, *(_DWORD *)(firstUnit + 1444)) <= dword_8871E0->BuildSpeed[1] )
          {
            if ( !*(_DWORD *)(firstUnit + 1652) )
              sub_7DC720(-2147467261);
            if ( !(*(unsigned __int8 (__stdcall **)(_DWORD))(**(_DWORD **)(firstUnit + 1652) + 16))(*(_DWORD *)(firstUnit + 1652)) )
            {
LABEL_87:
              if ( !*(_DWORD *)(firstUnit + 692) )
              {
                (*(void (__thiscall **)(int, _DWORD, int))(*(_DWORD *)firstUnit + 1152))(firstUnit, 0, 1);
                (*(void (__thiscall **)(int, _DWORD, int))(*(_DWORD *)firstUnit + 1156))(firstUnit, 0, 1);
              }
            }
          }
        }
        goto LABEL_67;
      }
    }
  }
}
