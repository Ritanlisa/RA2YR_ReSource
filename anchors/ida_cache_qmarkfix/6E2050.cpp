char __stdcall globalHelper_0E2050(int a1, int a2, int a3, __int16 *a4)
{
  int v4; // ebp
  char v5; // bl
  int v6; // edi
  int *v7; // esi
  LinkedList *v8; // ecx
  int v9; // edx
  __int16 *v10; // esi
  int v11; // edi
  int v12; // eax
  int v13; // eax
  char v15; // [esp+1Dh] [ebp-15h]
  int v16[2]; // [esp+1Eh] [ebp-14h] BYREF
  _DWORD v17[3]; // [esp+26h] [ebp-Ch] BYREF

  v4 = a3;
  v15 = 0;
  do
  {
    v5 = 0;
    v6 = 0;
    if ( *(int *)&stru_A8E960.random[276] <= 0 )
      break;
    do
    {
      v7 = *(int **)(*(_DWORD *)&stru_A8E960.random[264] + 4 * v6);
      if ( v7[27] > 0 )
      {
        if ( *((_BYTE *)v7 + 144) )
        {
          if ( *((_BYTE *)v7 + 116) )
          {
            if ( !*((_BYTE *)v7 + 129) )
            {
              v8 = (LinkedList *)v7[13];
              if ( v8 )
              {
                if ( (unsigned __int8)LinkedList::Contains(v8, v4) )
                {
                  v9 = *v7;
                  a3 = v7[27];
                  (*(void (__thiscall **)(int *, int *, _DWORD, _DWORD, _DWORD, int, _DWORD, _DWORD))(v9 + 364))(
                    v7,
                    &a3,
                    0,
                    *(_DWORD *)&dword_8871E0->__pad_C3C[876],
                    0,
                    1,
                    0,
                    0);
                  v15 = 1;
                  v5 = 1;
                  --v6;
                }
              }
            }
          }
        }
      }
      ++v6;
    }
    while ( v6 < *(int *)&stru_A8E960.random[276] );
  }
  while ( v5 );
  v10 = a4;
  if ( *a4 != *(_WORD *)dword_B0E680 || a4[1] != *(_WORD *)&dword_B0E680[2] )
  {
    v11 = 3;
    if ( !(unsigned __int8)CellClass::SetTerrainType((CellClass *)&dword_87F7E8, a4) )
    {
      do
        v12 = v11--;
      while ( v12 > 0 && !(unsigned __int8)CellClass::SetTerrainType((CellClass *)&dword_87F7E8, v10) );
    }
    v13 = *v10 << 8;
    v17[1] = (v10[1] << 8) + 128;
    v17[0] = v13 + 128;
    v17[2] = dword_B0E6D4;
    Coord::To_Screen((Coord *)g_TacticalClass_Instance, v17, v16);
    Cell::CreateCrater(v16[0] - 128, v16[1] - 128, 256, 256, 0);
  }
  return v15;
}
