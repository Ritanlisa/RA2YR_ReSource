int __fastcall RadSiteClass::Deactivate(__int16 *a1)
{
  int v1; // eax
  int v2; // edx
  int v3; // esi
  int v4; // edx
  int result; // eax
  int v6; // esi
  double v7; // st7
  void *v8; // esi
  void *v9; // ebp
  int *v10; // eax
  int v11; // esi
  int v12; // edi
  int v13; // ebx
  _DWORD *v14; // eax
  int v15; // ecx
  int v16; // edx
  int v17; // eax
  double v18; // st7
  void *v19; // eax
  __int16 v20[2]; // [esp+24h] [ebp-5Ch] BYREF
  int v21; // [esp+28h] [ebp-58h]
  __int16 *v22; // [esp+2Ch] [ebp-54h]
  int v23; // [esp+30h] [ebp-50h]
  int v24; // [esp+34h] [ebp-4Ch]
  int v25; // [esp+38h] [ebp-48h]
  int v26; // [esp+3Ch] [ebp-44h]
  double v27; // [esp+40h] [ebp-40h]
  unsigned __int64 v28; // [esp+48h] [ebp-38h]
  double v29; // [esp+50h] [ebp-30h]
  int v30; // [esp+5Ch] [ebp-24h]
  int v31; // [esp+60h] [ebp-20h]
  int v32; // [esp+64h] [ebp-1Ch]
  char v33[12]; // [esp+68h] [ebp-18h] BYREF
  char v34[12]; // [esp+74h] [ebp-Ch] BYREF

  v1 = *((_DWORD *)a1 + 28) / dword_8871E0->OreTwinkle;
  v2 = a1[32];
  v3 = *((_DWORD *)a1 + 17);
  v22 = a1;
  v4 = v2 - v3;
  v24 = v4 + 2 * v3 + 1;
  v25 = v1 + 1;
  result = a1[33] - v3;
  v23 = result;
  v6 = result + 2 * v3 + 1;
  v28 = __PAIR64__(v4, v6);
  if ( result < v6 )
  {
    do
    {
      v21 = v4;
      if ( v4 < v24 )
      {
        v7 = (double)v25;
        v29 = v7;
        while ( 1 )
        {
          v20[0] = v21;
          v20[1] = v23;
          v8 = CellCoord::To_CellObj((CellCoord *)&dword_87F7E8, a1 + 32);
          v9 = CellCoord::To_CellObj((CellCoord *)&dword_87F7E8, v20);
          v10 = (int *)(*(int (__thiscall **)(void *, char *))(*(_DWORD *)v8 + 72))(v8, v33);
          v11 = *v10;
          v12 = v10[1];
          v13 = v10[2];
          v14 = (_DWORD *)(*(int (__thiscall **)(void *, char *))(*(_DWORD *)v9 + 72))(v9, v34);
          v15 = v14[1];
          v30 = v11 - *v14;
          v16 = v14[2];
          v31 = v12 - v15;
          v32 = v13 - v16;
          Math::Sqrt(
            (double)v30 * (double)v30
          + (double)(v13 - v16) * (double)(v13 - v16)
          + (double)(v12 - v15) * (double)(v12 - v15));
          LOWORD(v17) = Math::RoundToInt(v7);
          v18 = 0.0;
          LODWORD(v27) = *((_DWORD *)v22 + 18);
          if ( v17 <= SLODWORD(v27) )
          {
            v26 = LODWORD(v27) - v17;
            v18 = (double)(LODWORD(v27) - v17) / (double)SLODWORD(v27) * (double)*((int *)v22 + 19);
          }
          v7 = v18 / (double)*((int *)v22 + 20) * v29;
          v27 = v7;
          v19 = CellCoord::To_CellObj((CellCoord *)&dword_87F7E8, v20);
          CellClass::RadLevel_Decrease((int)v19, v27);
          if ( ++v21 >= v24 )
            break;
          a1 = v22;
        }
        v4 = HIDWORD(v28);
        v6 = v28;
        a1 = v22;
      }
      result = ++v23;
    }
    while ( v23 < v6 );
  }
  return result;
}
