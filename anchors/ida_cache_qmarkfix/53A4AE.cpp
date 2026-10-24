char __stdcall LightningStorm::Strike2(int a1, int a2, int a3)
{
  CellClass *v3; // esi
  int *Coords; // eax
  int v5; // ecx
  int v6; // edx
  void *v7; // edi
  AnimClass *v8; // eax
  void **v9; // edi
  int v10; // eax
  int v11; // eax
  RulesClass *v12; // eax
  unsigned int v13; // eax
  int v14; // ebp
  void *WarheadVersusMultiplier; // ebx
  AnimClass *v16; // edi
  void *v17; // eax
  _DWORD *v18; // ebx
  int ClosestObjectCell; // eax
  int v20; // edi
  int v21; // edi
  AnimClass *v22; // esi
  int v23; // eax
  char v25; // [esp+12h] [ebp-2Eh]
  char v26; // [esp+13h] [ebp-2Dh]
  int smudgeTypeIndex; // [esp+14h] [ebp-2Ch]
  int v28; // [esp+18h] [ebp-28h]
  int v29; // [esp+1Ch] [ebp-24h] BYREF
  int v30; // [esp+20h] [ebp-20h]
  int v31; // [esp+28h] [ebp-18h] BYREF
  int v32; // [esp+2Ch] [ebp-14h]
  int v33; // [esp+30h] [ebp-10h]
  int v34[3]; // [esp+34h] [ebp-Ch] BYREF

  v3 = Coord::To_Cell((Coord *)&dword_87F7E8, &a1);
  Coords = CellClass::GetCoords(v3, &v29);
  v5 = Coords[1];
  v6 = Coords[2];
  v34[0] = *Coords;
  v34[1] = v5;
  v34[2] = v6;
  v7 = *(void **)(*(_DWORD *)&dword_8871E0->__pad_240[156]
                + 4
                * ((unsigned int)Random::State((Random *)&dword_A8B230[14].NeedsSaveOrLink)
                 % *(_DWORD *)&dword_8871E0->__pad_240[168]));
  v8 = (AnimClass *)__2_YAPAXI_Z(0x1C8u);
  if ( v8 )
    v9 = AnimClass::ctor(v8, v7, v34, 0, 1, (void *)0x600, 0, 0);
  else
    v9 = 0;
  if ( dword_A9FA28 < dword_A9FA20
    || (byte_A9FA25 || !dword_A9FA20)
    && dword_A9FA2C > 0
    && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(LightningStorm_BoltsPresent + 8))(
         &LightningStorm_BoltsPresent,
         dword_A9FA2C + dword_A9FA20,
         0) )
  {
    v10 = dword_A9FA28++;
    *((_DWORD *)dword_A9FA1C + v10) = v9;
  }
  smudgeTypeIndex = v3->smudgeTypeIndex;
  v28 = v3->level[0];
  v11 = v28 * dword_A9FA90 + ((v3->flags & 0x100) != 0 ? dword_A9FA84 : 0);
  v31 = ((__int16)smudgeTypeIndex << 8) + 128;
  v32 = (SHIWORD(smudgeTypeIndex) << 8) + 128;
  v33 = v11;
  if ( v31 != dword_A9FA30 || __PAIR64__(v11, (SHIWORD(smudgeTypeIndex) << 8) + 128) != qword_A9FA34 )
  {
    v12 = dword_8871E0;
    if ( *(int *)&dword_8871E0->__pad_704[64] > 0 )
    {
      v13 = Random::State((Random *)&dword_A8B230[14].NeedsSaveOrLink);
      StartAudioControllerAt(
        *(_DWORD *)(*(_DWORD *)&dword_8871E0->__pad_704[52] + 4 * (v13 % *(_DWORD *)&dword_8871E0->__pad_704[64])),
        &v31,
        0);
      v12 = dword_8871E0;
    }
    v14 = *(_DWORD *)v12->SeparateAircraft;
    WarheadVersusMultiplier = (void *)GetWarheadVersusMultiplier(v14, v12->RadLevelMax, v3->landType, &v31);
    v16 = (AnimClass *)__2_YAPAXI_Z(0x1C8u);
    if ( v16 )
    {
      v17 = (void *)Return::HRESULT_Fail(v31, v32, v33);
      AnimClass::ctor(v16, WarheadVersusMultiplier, &v31, 0, 1, (void *)0x2600, v17, 0);
    }
    v25 = 0;
    v18 = Cell::IsBridge((Cell *)v3);
    v29 = 0;
    v30 = 0;
    ClosestObjectCell = Object::FindClosestObjectCell((Object *)v3, &v29, 0, 0);
    v20 = ClosestObjectCell;
    if ( !ClosestObjectCell
      || (v26 = 1, (*(int (__thiscall **)(int))(*(_DWORD *)ClosestObjectCell + 44))(ClosestObjectCell) != 15) )
    {
      v26 = 0;
    }
    if ( !v18 && !v20 )
    {
      switch ( v3->landType )
      {
        case 1:
        case 3:
        case 4:
        case 0xB:
          v25 = 1;
          break;
        default:
          break;
      }
    }
    CreateSmokeEffectAt(v14, dword_8871E0->RadLevelMax, v31, v32, v33, 0, 0);
    PlaySoundEffectAt(&v31, v14, 0, dword_8871E0->RadLevelMax, 1, (int)LightningStorm_Owner);
    if ( v18 == Cell::IsBridge((Cell *)v3)
      && (v29 = 0, v30 = 0, v20 == Object::FindClosestObjectCell((Object *)v3, &v29, 0, 0))
      && v3->level[0] == v28 )
    {
      LOBYTE(v11) = v25;
    }
    else
    {
      LOBYTE(v11) = 1;
    }
    if ( !v26 )
    {
      if ( (_BYTE)v11 )
      {
        v11 = Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 2, 4);
        if ( v11 > 0 )
        {
          v21 = v11;
          do
          {
            v11 = __2_YAPAXI_Z(0x1C8u);
            v22 = (AnimClass *)v11;
            if ( v11 )
            {
              v23 = Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, dword_8871E0->ExecutePlanSound - 1);
              LOBYTE(v11) = (unsigned __int8)AnimClass::ctor(
                                               v22,
                                               *(void **)(dword_8871E0->DefaultChronoSound + 4 * v23),
                                               &v31,
                                               0,
                                               1,
                                               (void *)0x600,
                                               0,
                                               0);
            }
            --v21;
          }
          while ( v21 );
        }
      }
    }
  }
  return v11;
}
