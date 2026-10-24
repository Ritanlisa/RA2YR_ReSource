char __thiscall ScrollMapEdge(ObjectClass *this, _DWORD *a2)
{
  char result; // al
  int SystemMetrics; // ecx
  __int64 v5; // rax
  int v6; // ecx
  __int64 v7; // rax
  int vfptr; // edx
  int v9; // edi
  LONG v10; // ebp
  int v11; // eax
  int v12; // eax
  int v13; // eax
  int v14; // eax
  int v15; // eax
  int v16; // eax
  int v17; // eax
  double v18; // st7
  unsigned __int16 *v19; // eax
  unsigned __int16 *v20; // eax
  double v21; // st7
  unsigned __int16 *v22; // eax
  unsigned __int16 *v23; // eax
  double v24; // st7
  unsigned __int16 *v25; // eax
  unsigned __int16 *v26; // eax
  int v27; // esi
  struct tagPOINT Point; // [esp+Ch] [ebp-14h] BYREF
  unsigned int v29; // [esp+14h] [ebp-Ch] BYREF
  _DWORD v30[2]; // [esp+18h] [ebp-8h] BYREF
  unsigned int v31; // [esp+24h] [ebp+4h]

  result = stru_A8E960.nextScenario[64];
  if ( stru_A8E960.nextScenario[64] )
  {
    if ( byte_A8E378 || (result = stru_A8E960.random[503]) != 0 )
    {
      if ( !*((_BYTE *)this + 21848) )
      {
        SystemMetrics = GetSystemMetrics(68);
        v5 = *a2 - *((_DWORD *)this + 5460);
        if ( (int)((HIDWORD(v5) ^ v5) - HIDWORD(v5)) > 2 * SystemMetrics
          || (v6 = GetSystemMetrics(69),
              v7 = a2[1] - *((_DWORD *)this + 5461),
              (int)((HIDWORD(v7) ^ v7) - HIDWORD(v7)) > 2 * v6) )
        {
          *((_BYTE *)this + 21848) = 1;
        }
      }
      result = *((_BYTE *)this + 21848);
      if ( result )
      {
        if ( *((_BYTE *)this + 21836) )
          goto LABEL_14;
        if ( *((_BYTE *)this + 4559) )
        {
          vfptr = this->vfptr;
          v30[0] = -1;
          v30[1] = -1;
          (*(void (__thiscall **)(ObjectClass *, _DWORD *))(vfptr + 196))(this, v30);
        }
        else
        {
          *((_BYTE *)this + 21836) = 1;
        }
        result = *((_BYTE *)this + 21836);
        if ( result )
        {
LABEL_14:
          v9 = *a2 - *((_DWORD *)this + 5460);
          v10 = a2[1] - *((_DWORD *)this + 5461);
          Point.x = v10;
          v11 = CalcMathFacing8((_DWORD *)this + 5460, a2);
          if ( v11 != dword_83E76C )
            dword_83E76C = v11;
          if ( !v9 )
          {
            v12 = *((_DWORD *)this + 5460);
            if ( v12 )
              v9 = v12 >= (int)&g_DisplayWidth[-1].u32_80 + 3;
            else
              v9 = -1;
          }
          if ( !v10 )
          {
            v13 = *((_DWORD *)this + 5461);
            if ( !v13 )
            {
              v10 = -1;
LABEL_25:
              Point.x = v10;
              goto LABEL_26;
            }
            if ( v13 >= (int)*(&g_DisplayWidth + 1) )
            {
              v10 = 1;
              goto LABEL_25;
            }
          }
LABEL_26:
          v14 = *((_DWORD *)this + 5460);
          if ( v14 < 10 && v9 < 0 )
          {
            if ( v9 > -5 )
            {
              v9 = -5;
LABEL_33:
              v9 *= 4;
              goto LABEL_34;
            }
          }
          else if ( v14 <= (int)&g_DisplayWidth[-1].LoadingScreen_field_0x38 + 2 || v9 <= 0 )
          {
LABEL_34:
            v15 = *((_DWORD *)this + 5461);
            if ( v15 < 10 && v10 < 0 )
            {
              if ( v10 > -5 )
              {
                v10 = -5;
LABEL_46:
                v10 *= 4;
                Point.x = v10;
                goto LABEL_47;
              }
            }
            else if ( v15 <= (int)&(*(&g_DisplayWidth + 1))[-1].LoadingScreen_field_0x38 + 2 || v10 <= 0 )
            {
LABEL_47:
              v16 = Map_Helper_5FBF70((ObjectClass *)&stru_A8E960.altNextScenario[252]);
              if ( v16 )
              {
                v17 = v16 - 1;
                if ( v17 )
                {
                  if ( v17 == 1 )
                  {
                    v9 = -v9;
                    v10 = -v10;
                    v30[0] = stru_A8E960.uniqueId + 1;
                    v18 = 12.0 / (double)(stru_A8E960.uniqueId + 1);
                    LOWORD(v19) = Math::RoundToInt(v18);
                    v29 = abs32((int)v19);
                    LOWORD(v20) = Math::RoundToInt(v18);
                    v30[0] = abs32((int)v20);
                    if ( (int)(v29 + v30[0]) > 0 )
                      goto LABEL_51;
                  }
                }
                else
                {
                  v30[0] = stru_A8E960.uniqueId + 1;
                  v21 = 12.0 / (double)(stru_A8E960.uniqueId + 1);
                  LOWORD(v22) = Math::RoundToInt(v21);
                  v29 = abs32((int)v22);
                  LOWORD(v23) = Math::RoundToInt(v21);
                  v30[0] = abs32((int)v23);
                  if ( (int)(v29 + v30[0]) > 0 )
                  {
LABEL_51:
                    Point.x = 0;
                    Point.y = 0;
                    ClientToScreen(g_hWnd, &Point);
                    SetCursorPos(
                      *((_DWORD *)this + 5460) + Point.x + *(_DWORD *)&DSurface_ViewBounds.X,
                      (int)DSurface_ViewBounds.field_4 + *((_DWORD *)this + 5461) + Point.y);
                  }
                }
              }
              else
              {
                v30[0] = stru_A8E960.uniqueId + 1;
                v24 = 1.0 / (double)(stru_A8E960.uniqueId + 1);
                LOWORD(v25) = Math::RoundToInt(v24);
                v29 = abs32((int)v25);
                LOWORD(v26) = Math::RoundToInt(v24);
                v30[0] = abs32((int)v26);
              }
              v27 = 0;
              v31 = 0;
              do
              {
                Point.x = 1;
                if ( !(unsigned __int8)DisplayClass::SetCoordVisible((DisplayClass *)v27, &Point, 0) )
                  v31 |= 1 << (v27 / 2);
                v27 += 2;
              }
              while ( v27 < 8 );
              if ( v9 <= 0 )
              {
                if ( v9 < 0 )
                  DisplayClass::SetCoordVisible((DisplayClass *)6, &v29, 1);
              }
              else
              {
                DisplayClass::SetCoordVisible((DisplayClass *)2, &v29, 1);
              }
              if ( v10 <= 0 )
              {
                if ( v10 < 0 )
                  DisplayClass::SetCoordVisible(0, v30, 1);
              }
              else
              {
                DisplayClass::SetCoordVisible((DisplayClass *)4, v30, 1);
              }
              return (*(int (__thiscall **)(ObjectClass *, int, int))(this->vfptr + 72))(this, dword_83E790[v31], 1);
            }
            if ( v10 > 0 && v10 < 5 )
              v10 = 5;
            goto LABEL_46;
          }
          if ( v9 > 0 && v9 < 5 )
            v9 = 5;
          goto LABEL_33;
        }
      }
    }
  }
  return result;
}
