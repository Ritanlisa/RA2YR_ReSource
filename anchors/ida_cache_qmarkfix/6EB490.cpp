char __thiscall TeamClass::AttackCoordinator(TeamClass *this)
{
  TeamClass *v1; // edi
  _DWORD *firstUnit; // esi
  int v3; // ebp
  _DWORD *v4; // ebx
  int v5; // edi
  int focus; // ecx
  int v7; // edi
  Object *v8; // esi
  int v9; // esi
  int v10; // eax
  _DWORD *Entry; // eax
  int v12; // esi
  char v13; // bl
  int v14; // eax
  int v15; // edi
  int v16; // eax
  int v19; // [esp+14h] [ebp-10h] BYREF
  int v20; // [esp+18h] [ebp-Ch]
  _DWORD v21[2]; // [esp+1Ch] [ebp-8h] BYREF

  v1 = this;
  if ( !this->focus )
    this->focus = this->queuedFocus;
  firstUnit = (_DWORD *)this->firstUnit;
  v3 = -1;
  v4 = firstUnit;
  if ( firstUnit )
  {
    do
    {
      v5 = *(_DWORD *)((*(int (__thiscall **)(_DWORD *))(*firstUnit + 132))(firstUnit) + 1532);
      if ( *((_BYTE *)firstUnit + 144)
        && firstUnit[27]
        && (dword_A8E7AC || !*((_BYTE *)firstUnit + 129))
        && (*((_BYTE *)firstUnit + 1673) || (*(int (__thiscall **)(_DWORD *))(*firstUnit + 44))(firstUnit) == 2)
        && v5 > v3 )
      {
        v4 = firstUnit;
        v3 = v5;
      }
      firstUnit = (_DWORD *)firstUnit[374];
    }
    while ( firstUnit );
    v1 = this;
  }
  focus = v1->focus;
  if ( focus
    && (*(int (__thiscall **)(int))(*(_DWORD *)focus + 44))(focus) == 11
    && v1->firstUnit
    && (*(int (__thiscall **)(_DWORD *))(*v4 + 44))(v4) != 2 )
  {
    v7 = v1->focus;
    if ( v7 )
      v8 = (*(int (__thiscall **)(int))(*(_DWORD *)v7 + 44))(v7) == 11 ? (Object *)v7 : 0;
    else
      v8 = 0;
    v19 = 0;
    v20 = 0;
    if ( Object::FindObjectCell(v8, &v19, 0) )
    {
      v19 = 0;
      v20 = 0;
      this->focus = Object::FindObjectCell(v8, &v19, 0);
    }
    v1 = this;
  }
  if ( *(_DWORD *)&stru_A8E960.random[528] % 8 == 4 )
  {
    v9 = *v4;
    v10 = (*(int (__thiscall **)(_DWORD *, int, int))(*v4 + 740))(v4, v1->focus, 1);
    if ( (*(int (__thiscall **)(_DWORD *, int, int))(v9 + 960))(v4, v1->focus, v10) == 5 )
      v1->unknown81[0] = 1;
  }
  Entry = (_DWORD *)v1->focus;
  if ( !Entry
    || (Entry = SessionClass::GetEntry((SessionClass *)v1->currentScript, v21),
        v12 = v1->firstUnit,
        v13 = 0,
        v19 = *Entry,
        v20 = Entry[1],
        !v12) )
  {
LABEL_72:
    v1->stepCompleted[0] = 1;
    return (char)Entry;
  }
  do
  {
    if ( !*(_BYTE *)(v12 + 144) )
      goto LABEL_67;
    if ( *(_DWORD *)(v12 + 108) && (dword_A8E7AC || !*(_BYTE *)(v12 + 129)) && !*(_BYTE *)(v12 + 1673) )
    {
      v14 = *SessionClass::GetEntry((SessionClass *)v1->currentScript, v21);
      if ( v14 == 54 || v14 == 53 )
        v15 = dword_8871E0->C4Delay[1];
      else
        v15 = dword_8871E0->C4Delay[0];
      if ( ObjectClass::DistanceTo((ObjectClass *)v12, this->spawnCell) <= v15 )
      {
        *(_BYTE *)(v12 + 1673) = 1;
      }
      else if ( !*(_DWORD *)(v12 + 1444) )
      {
        (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v12 + 488))(v12, 2, 0);
        (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v12 + 968))(v12, 0);
        (*(void (__thiscall **)(int, int, int))(*(_DWORD *)v12 + 1152))(v12, this->spawnCell, 1);
      }
      v1 = this;
    }
    if ( *(_BYTE *)(v12 + 144)
      && *(_DWORD *)(v12 + 108)
      && (dword_A8E7AC || !*(_BYTE *)(v12 + 129))
      && (*(_BYTE *)(v12 + 1673) || (*(int (__thiscall **)(int))(*(_DWORD *)v12 + 44))(v12) == 2) )
    {
      if ( v19 == 15
        && (*(int (__thiscall **)(int))(*(_DWORD *)v12 + 44))(v12) == 15
        && *(_BYTE *)(*(_DWORD *)(v12 + 1728) + 3774) )
      {
        (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v12 + 488))(v12, 8, 0);
        (*(void (__thiscall **)(int, int))(*(_DWORD *)v12 + 968))(v12, v1->focus);
      }
      else if ( (*(int (__thiscall **)(int))(*(_DWORD *)v12 + 388))(v12) != 1
             && (*(int (__thiscall **)(int))(*(_DWORD *)v12 + 388))(v12) != 7
             && (*(int (__thiscall **)(int))(*(_DWORD *)v12 + 388))(v12) != 8
             && (*(int (__thiscall **)(int))(*(_DWORD *)v12 + 388))(v12) != 17
             && ((*(int (__thiscall **)(int))(*(_DWORD *)v12 + 388))(v12) != 16
              || !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v12 + 1252))(v12)) )
      {
        (*(void (__thiscall **)(int, int))(*(_DWORD *)v12 + 628))(v12, 3);
        (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v12 + 488))(v12, 1, 0);
        (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v12 + 968))(v12, 0);
        (*(void (__thiscall **)(int, _DWORD, int))(*(_DWORD *)v12 + 1152))(v12, 0, 1);
      }
      v16 = *(_DWORD *)(v12 + 692);
      if ( v16 != v1->focus && !v16 )
        (*(void (__thiscall **)(int, int))(*(_DWORD *)v12 + 968))(v12, v1->focus);
      Entry = (_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)v12 + 44))(v12);
      if ( Entry != (_DWORD *)2
        || (Entry = (_DWORD *)(*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)v12 + 1016))(v12, 0), !*Entry)
        || (Entry = *(_DWORD **)(v12 + 764), (int)Entry > 0) )
      {
LABEL_69:
        v13 = 1;
      }
    }
    else
    {
LABEL_67:
      Entry = (_DWORD *)v1->buildingType;
      if ( *((_BYTE *)Entry + 176) )
      {
        LOBYTE(Entry) = *(_BYTE *)(v12 + 129);
        if ( (_BYTE)Entry )
          goto LABEL_69;
      }
    }
    v12 = *(_DWORD *)(v12 + 1496);
  }
  while ( v12 );
  if ( !v13 )
    goto LABEL_72;
  return (char)Entry;
}
