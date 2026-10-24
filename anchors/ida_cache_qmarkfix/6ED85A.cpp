char __thiscall Mission::AssignTeamMemberMissions(int this, int a2, int a3)
{
  int v3; // eax
  int v4; // ebx
  int *i; // esi
  int v7; // eax
  int v8; // ebp
  int v9; // eax
  int v10; // ebp
  _DWORD *v11; // eax
  _DWORD *v12; // eax
  int v13; // ebp
  void *v14; // eax
  int v16; // [esp+1Ch] [ebp-28h] BYREF
  __int16 v17[2]; // [esp+20h] [ebp-24h] BYREF
  int v18; // [esp+24h] [ebp-20h] BYREF
  int v19; // [esp+28h] [ebp-1Ch] BYREF
  int v20; // [esp+30h] [ebp-14h] BYREF
  _BYTE v21[12]; // [esp+38h] [ebp-Ch] BYREF
  int v22; // [esp+48h] [ebp+4h]

  LOBYTE(v3) = a2;
  v4 = *(_DWORD *)(a2 + 4);
  for ( i = *(int **)(this + 84); i; i = (int *)i[374] )
  {
    LOBYTE(v3) = *((_BYTE *)i + 144);
    if ( (_BYTE)v3 )
    {
      if ( i[27] && (dword_A8E7AC || !*((_BYTE *)i + 129)) && !*((_BYTE *)i + 1673) )
      {
        v7 = *SessionClass::GetEntry(*(SessionClass **)(this + 40), &v19);
        if ( v7 == 54 || v7 == 53 )
          v8 = dword_8871E0->C4Delay[1];
        else
          v8 = dword_8871E0->C4Delay[0];
        if ( ObjectClass::DistanceTo((ObjectClass *)i, *(_DWORD *)(this + 52)) <= v8 )
        {
          *((_BYTE *)i + 1673) = 1;
        }
        else if ( !i[361] )
        {
          (*(void (__thiscall **)(int *, int, _DWORD))(*i + 488))(i, 2, 0);
          (*(void (__thiscall **)(int *, _DWORD))(*i + 968))(i, 0);
          (*(void (__thiscall **)(int *, _DWORD, int))(*i + 1152))(i, *(_DWORD *)(this + 52), 1);
        }
      }
      LOBYTE(v3) = *((_BYTE *)i + 144);
      if ( (_BYTE)v3 )
      {
        v3 = i[27];
        if ( v3 )
        {
          if ( dword_A8E7AC || (LOBYTE(v3) = *((_BYTE *)i + 129), !(_BYTE)v3) )
          {
            if ( *((_BYTE *)i + 1673) || (v3 = (*(int (__thiscall **)(int *))(*i + 44))(i), v3 == 2) )
            {
              v3 = i[173];
              if ( !v3 )
              {
                if ( i[361]
                  || ((v9 = *SessionClass::GetEntry(*(SessionClass **)(this + 40), &v20), v9 == 54) || v9 == 53
                    ? (v10 = dword_8871E0->C4Delay[1])
                    : (v10 = dword_8871E0->C4Delay[0]),
                      ObjectClass::DistanceTo((ObjectClass *)i, *(_DWORD *)(this + 52)) <= 2 * v10 || v4 == 11) )
                {
                  v3 = i[173];
                  if ( !v3 )
                  {
                    v3 = i[361];
                    if ( !v3 )
                    {
                      v3 = (*(int (__thiscall **)(int *))(*i + 388))(i);
                      if ( v3 != v4 )
                      {
                        if ( v4 != 5 || (v3 = (*(int (__thiscall **)(int *))(*i + 388))(i), v3 != 16) )
                        {
                          TechnoClass::SetFocus((TechnoClass *)i, 0);
                          (*(void (__thiscall **)(int *, int, _DWORD))(*i + 488))(i, v4, 0);
                          (*(void (__thiscall **)(int *, _DWORD))(*i + 968))(i, 0);
                          LOBYTE(v3) = (*(int (__thiscall **)(int *, _DWORD, int))(*i + 1152))(i, 0, 1);
                        }
                      }
                    }
                  }
                }
                else
                {
                  (*(void (__thiscall **)(int *, int, _DWORD))(*i + 488))(i, 2, 0);
                  (*(void (__thiscall **)(int *, _DWORD, int))(*i + 1152))(i, *(_DWORD *)(this + 52), 1);
                  (*(void (__thiscall **)(int *, int, _DWORD))(*i + 488))(i, 2, 0);
                  v11 = (_DWORD *)(*(int (__thiscall **)(_DWORD, _BYTE *))(**(_DWORD **)(this + 52) + 72))(
                                    *(_DWORD *)(this + 52),
                                    v21);
                  LOWORD(v22) = *v11 / 256;
                  HIWORD(v22) = v11[1] / 256;
                  v16 = v22;
                  v12 = globalHelper_0DA020(&v18, &v16);
                  v13 = *i;
                  *(_DWORD *)v17 = *v12;
                  v14 = CellCoord::To_CellObj((CellCoord *)&dword_87F7E8, v17);
                  LOBYTE(v3) = (*(int (__thiscall **)(int *, void *, int))(v13 + 1152))(i, v14, 1);
                }
              }
            }
          }
        }
      }
    }
  }
  return v3;
}
