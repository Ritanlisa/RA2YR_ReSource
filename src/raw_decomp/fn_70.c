// GENERATED raw decompilation, this-relative refs rewritten to this->Member
// by tools/csp_export/rewrite_member_refs.py (mechanical, CSP member table).
// REFERENCE ONLY - not compiled. Width-matched rewrites; unmatched kept raw.

// ==== 0x00700600  TechnoClass::HandleCursor  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::HandleCursor(TechnoClass *this, __int16 *a2, char a3, char a4)
{
  _DWORD *v6; // ebp
  int v7; // eax
  int v8; // ebx
  int v9; // edi
  int v10; // eax
  int v11; // eax
  char v12; // bl
  _DWORD *v14; // eax
  int (__thiscall **vtable0)(TechnoClass *, void *); // ebx
  void *v16; // eax
  int v17; // ebp
  CellClass *v18; // eax
  char IsActiveOrNext; // bl
  int v20; // edi
  int v21; // eax
  bool v22; // bl
  int v23; // eax
  bool v24; // al
  int v25; // edx
  unsigned __int8 (__thiscall **v26)(TechnoClass *, int *, int); // eax
  int v27; // edx
  unsigned __int8 (__thiscall **v28)(TechnoClass *, int *, int); // eax
  int (__thiscall **v29)(TechnoClass *, void *, int, int, _DWORD, int); // ebx
  void *v30; // eax
  void *v31; // ebx
  void *v32; // eax
  char v33; // [esp+11h] [ebp-1Bh]
  char v34; // [esp+12h] [ebp-1Ah]
  char v35; // [esp+13h] [ebp-19h]
  int v36; // [esp+14h] [ebp-18h]
  int v37; // [esp+18h] [ebp-14h]
  _DWORD *v38; // [esp+1Ch] [ebp-10h]
  int v39; // [esp+20h] [ebp-Ch] BYREF
  int v40; // [esp+24h] [ebp-8h]
  int v41; // [esp+28h] [ebp-4h]
  char v42; // [esp+38h] [ebp+Ch]

  if ( this->isBerserk /*0x700629*/
    || this->rockerLinkedUnit
    && !*(_BYTE *)((*((int (__thiscall **)(TechnoClass *))this->RadioClass + 33))(this) + 1682) )
  {
    return 0; /*0x700631*/
  }
  v6 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], a2); /*0x70064a*/
  v38 = v6; /*0x70064e*/
  v36 = 0; /*0x700652*/
  if ( !a4 /*0x70067d*/
    && ((unsigned __int8)Mouse::IsButtonDown(stru_A8EB00.?[28])
     || (unsigned __int8)Mouse::IsButtonDown(stru_A8EB00.?[32])) )
  {
    v42 = 1; /*0x700686*/
  }
  else
  {
    v42 = 0; /*0x70068f*/
    if ( a4 ) /*0x700694*/
      goto LABEL_12; /*0x700694*/
  }
  if ( !(unsigned __int8)Mouse::IsButtonDown(stru_A8EB00.?[36]) /*0x7006be*/
    && !(unsigned __int8)Mouse::IsButtonDown(stru_A8EB00.?[40]) )
  {
LABEL_12:
    v33 = 0; /*0x7006c7*/
    if ( a4 ) /*0x7006ce*/
      goto LABEL_16; /*0x7006ce*/
    goto LABEL_13; /*0x7006ce*/
  }
  v33 = 1; /*0x7006c0*/
LABEL_13:
  if ( (unsigned __int8)Mouse::IsButtonDown(stru_A8EB00.?[20]) /*0x7006f1*/
    || (unsigned __int8)Mouse::IsButtonDown(stru_A8EB00.?[24]) )
  {
    v34 = 1; /*0x7006fa*/
    goto LABEL_17; /*0x7006ff*/
  }
LABEL_16:
  v34 = 0; /*0x700701*/
LABEL_17:
  if ( v33 && v42 ) /*0x700714*/
  {
    v33 = 0; /*0x700716*/
    v42 = 0; /*0x70071b*/
  }
  v37 = -1; /*0x700724*/
  v35 = 0; /*0x70072c*/
  if ( (*((unsigned __int8 (__thiscall **)(TechnoClass *))this->RadioClass + 117))(this) /*0x700743*/
    || (*((unsigned __int8 (__thiscall **)(TechnoClass *))this->RadioClass + 118))(this) )
  {
    return 0; /*0x700743*/
  }
  if ( ((int)dword_A8B230->vtable0 & 0x1000) == 0 ) /*0x70075c*/
    goto LABEL_38; /*0x70075c*/
  if ( !a3 ) /*0x700768*/
    goto LABEL_38; /*0x700768*/
  v7 = v6[10]; /*0x70076e*/
  if ( !v7 ) /*0x700773*/
    goto LABEL_38; /*0x700773*/
  v8 = 0; /*0x70077c*/
  if ( *(int *)(v7 + 16) <= 0 ) /*0x700780*/
    goto LABEL_38; /*0x700780*/
  do /*0x7007e4*/
  {
    v9 = *(_DWORD *)(*(_DWORD *)(v7 + 4) + 4 * v8); /*0x700785*/
    if ( *(_BYTE *)(v9 + 116) ) /*0x700788*/
    {
      v10 = *(_DWORD *)(v9 + 48); /*0x70078f*/
      if ( v10 == 20 ) /*0x700795*/
      {
        v37 = *(_DWORD *)(v9 + 36); /*0x70079a*/
      }
      else if ( v10 == 6 /*0x7007ce*/
             && (!*(_DWORD *)(v9 + 40)
              || !(unsigned __int8)HouseClass::IsAlliedWith((#375 *)dword_A83D4C, *(#375 **)(v9 + 40)))
             && (!TechnoClass::recalcThreat((TechnoClass *)v9)
              || *(_BYTE *)(TechnoClass::recalcThreat((TechnoClass *)v9) + 561)) )
      {
        v35 = 1; /*0x7007d8*/
      }
    }
    v7 = v6[10]; /*0x7007dd*/
    ++v8; /*0x7007e0*/
  }
  while ( v8 < *(_DWORD *)(v7 + 16) ); /*0x7007e4*/
  if ( v37 != -1 ) /*0x7007ed*/
  {
    v36 = *(_DWORD *)(*(_DWORD *)stru_A83D50.__pad_34 + 4 * v37); /*0x7007fa*/
  }
  else
  {
LABEL_38:
    v11 = v6[17]; /*0x700800*/
    if ( v11 != -1 ) /*0x700806*/
      v36 = *(_DWORD *)(*(_DWORD *)stru_A83D50.__pad_34 + 4 * v11); /*0x700811*/
  }
  v12 = (*((int (__thiscall **)(TechnoClass *))this->RadioClass + 204))(this); /*0x700825*/
  if ( (unsigned __int8)House::IsHumanPlayer((House *)this->owner) /*0x700868*/
    && (v42 && v34 || this->isGrindingInProgress)
    && (*((unsigned __int8 (__thiscall **)(TechnoClass *))this->RadioClass + 40))(this)
    && ((*((unsigned __int8 (__thiscall **)(TechnoClass *))this->RadioClass + 39))(this) || v12) )
  {
    if ( Waypoint::FindByCell(dword_A83D4C->__pad_0, a2) || this->isGrindingInProgress ) /*0x70087e*/
      return 51; /*0x70089a*/
    else
      return 26; /*0x70088b*/
  }
  if ( (unsigned __int8)House::IsHumanPlayer((House *)this->owner) ) /*0x7008ac*/
  {
    v14 = (_DWORD *)(*((int (__thiscall **)(TechnoClass *))this->RadioClass + 253))(this); /*0x7008bd*/
    if ( v14 ) /*0x7008c5*/
    {
      if ( *v14 ) /*0x7008cb*/
      {
        vtable0 = (int (__thiscall **)(TechnoClass *, void *))this->RadioClass; /*0x7008d8*/
        v16 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], a2); /*0x7008e0*/
        v17 = vtable0[185](this, v16); /*0x7008f4*/
        v18 = (CellClass *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], a2); /*0x7008f6*/
        IsActiveOrNext = CellClass::IsActiveOrNext(v18); /*0x700902*/
        if ( IsActiveOrNext /*0x70091a*/
          && *(_BYTE *)(*(_DWORD *)(*(_DWORD *)(*((int (__thiscall **)(TechnoClass *))this->RadioClass + 253))(this)
                                  + 172)
                      + 332) )
        {
          IsActiveOrNext = 0; /*0x700924*/
        }
        if ( v42 || v36 && *(_BYTE *)(v36 + 561) || IsActiveOrNext || v35 ) /*0x70094a*/
        {
          v20 = *(_DWORD *)(*(_DWORD *)(*((int (__thiscall **)(TechnoClass *))this->RadioClass + 253))(this) + 172); /*0x700960*/
          v21 = v38[20]; /*0x700966*/
          v22 = v21 != -1 /*0x700960*/
             && (unsigned __int8)HouseClass::IsAlliedWith(*((#375 **)stru_A80220.? + v21), (#375 *)this->owner) == 0;
          v23 = ObjectClass::processDeath((ObjectClass *)a2); /*0x700990*/
          v24 = v23 && !*(_BYTE *)(v23 + 256) && *(int *)(v23 + 108) > 0; /*0x7009ae*/
          if ( v42 /*0x7009f1*/
            || !v36
            || v24
            || v22
            && *(_BYTE *)(v36 + 680)
            && (*(_BYTE *)(v20 + 324) || *(_BYTE *)(v20 + 327) && *(_DWORD *)(v36 + 156) == 6) )
          {
            if ( (*((unsigned __int8 (__thiscall **)(TechnoClass *))this->RadioClass + 40))(this) ) /*0x7009f7*/
              return 5; /*0x7009f7*/
            v41 = 0; /*0x700a0a*/
            v25 = a2[1]; /*0x700a15*/
            v26 = (unsigned __int8 (__thiscall **)(TechnoClass *, int *, int))this->RadioClass; /*0x700a19*/
            v39 = (*a2 << 8) + 128; /*0x700a24*/
            v40 = (v25 << 8) + 128; /*0x700a38*/
            if ( v26[89](this, &v39, v17) ) /*0x700a3c*/
              return 5; /*0x700a3c*/
          }
        }
        if ( (*((unsigned __int8 (__thiscall **)(TechnoClass *, _DWORD *))this->RadioClass + 230))(this, v38) ) /*0x700a4f*/
        {
          if ( (*((unsigned __int8 (__thiscall **)(TechnoClass *))this->RadioClass + 40))(this) ) /*0x700a5d*/
            return 5; /*0x700a5d*/
          v41 = 0; /*0x700a6c*/
          v27 = a2[1]; /*0x700a77*/
          v28 = (unsigned __int8 (__thiscall **)(TechnoClass *, int *, int))this->RadioClass; /*0x700a7b*/
          v39 = (*a2 << 8) + 128; /*0x700a86*/
          v40 = (v27 << 8) + 128; /*0x700a9a*/
          if ( v28[89](this, &v39, v17) ) /*0x700a9e*/
            return 5; /*0x700ab4*/
        }
      }
    }
  }
  if ( !(unsigned __int8)House::IsHumanPlayer((House *)this->owner) /*0x700adc*/
    || !(*((unsigned __int8 (__thiscall **)(TechnoClass *))this->RadioClass + 40))(this)
    && !(*((unsigned __int8 (__thiscall **)(TechnoClass *))this->RadioClass + 161))(this) )
  {
    return 0; /*0x700c29*/
  }
  if ( !(unsigned __int8)LayerClass::IsWithinUsableArea((LayerClass *)&stru_87F5F0.__pad_58[416], a2, 1) ) /*0x700af6*/
    return 2; /*0x700af6*/
  if ( v33 ) /*0x700b09*/
    return 1; /*0x700b17*/
  if ( (*((unsigned __int8 (__thiscall **)(TechnoClass *))this->RadioClass + 161))(this) && v34 ) /*0x700b2e*/
    return 1; /*0x700b3c*/
  if ( !(*((unsigned __int8 (__thiscall **)(TechnoClass *))this->RadioClass + 40))(this) ) /*0x700b43*/
    return 2; /*0x700b43*/
  if ( a3 ) /*0x700b57*/
    return 1; /*0x700b57*/
  v29 = (int (__thiscall **)(TechnoClass *, void *, int, int, _DWORD, int))this->RadioClass; /*0x700b5d*/
  v30 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], a2); /*0x700b6d*/
  if ( v29[107](this, v30, -1, -1, 0, 1) <= 1 ) /*0x700b7e*/
    return 1; /*0x700b7e*/
  if ( this /*0x700bb8*/
    && (*((int (__thiscall **)(TechnoClass *))this->RadioClass + 11))(this) == 6
    && *(_DWORD *)((*((int (__thiscall **)(TechnoClass *))this->RadioClass + 33))(this) + 1032)
    && *(_BYTE *)(*(_DWORD *)((*((int (__thiscall **)(TechnoClass *))this->RadioClass + 33))(this) + 1032) + 1516) )
  {
    return 1; /*0x700bce*/
  }
  if ( *(_BYTE *)((*((int (__thiscall **)(TechnoClass *))this->RadioClass + 33))(this) + 3372) /*0x700c06*/
    && (v31 = this->RadioClass,
        v32 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], a2),
        (*((int (__thiscall **)(TechnoClass *, void *, int, int, _DWORD, _DWORD))v31 + 107))(this, v32, -1, -1, 0, 0) <= 1) )
  {
    return 1; /*0x700c0b*/
  }
  else
  {
    return 2; /*0x700c1a*/
  }
}



// ==== 0x00700C40  TechnoClass::CanReceivePassengers  this=TechnoClass  sig=csp ====
char __thiscall TechnoClass::CanReceivePassengers(TechnoClass *this)
{
  char result; // al
  TechnoClass *spawnManager; // ecx
  int v4; // edi

  result = House::IsHumanPlayer((House *)this->owner); /*0x700c49*/
  if ( result ) /*0x700c50*/
  {
    if ( (*((unsigned __int8 (__thiscall **)(TechnoClass *))this->RadioClass + 223))(this) ) /*0x700c58*/
    {
      return 0; /*0x700c62*/
    }
    else if ( this->bunkerLinkedUnit ) /*0x700c66*/
    {
      return 0; /*0x700c70*/
    }
    else if ( *(_BYTE *)((*((int (__thiscall **)(TechnoClass *))this->RadioClass + 33))(this) + 3412) ) /*0x700c7e*/
    {
      return 0; /*0x700c88*/
    }
    else if ( (*((unsigned __int8 (__thiscall **)(TechnoClass *))this->RadioClass + 224))(this) ) /*0x700c90*/
    {
      return 0; /*0x700c9a*/
    }
    else
    {
      result = (*((int (__thiscall **)(TechnoClass *))this->RadioClass + 120))(this); /*0x700ca2*/
      if ( result ) /*0x700caa*/
      {
        if ( this->slaveOwner ) /*0x700cae*/
        {
          return 0; /*0x700cb8*/
        }
        else if ( this->__pad_1C4[4] ) /*0x700cbc*/
        {
          return 0; /*0x700cc6*/
        }
        else
        {
          spawnManager = (TechnoClass *)this->spawnManager; /*0x700cca*/
          result = 1; /*0x700d00*/
          if ( spawnManager ) /*0x700cd2*/
          {
            if ( TechnoClass::CountPassengers(spawnManager) > 0 ) /*0x700cdb*/
            {
              v4 = (*((int (__thiscall **)(TechnoClass *))this->RadioClass + 33))(this); /*0x700cee*/
              if ( TechnoClass::CountPassengers((TechnoClass *)this->spawnManager) < *(_DWORD *)(v4 + 3420) ) /*0x700cfe*/
                return 0; /*0x700cd2*/
            }
          }
        }
      }
    }
  }
  return result; /*0x700c52*/
}



// ==== 0x00700D10  TechnoClass::IsDeadOrInactive  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::IsDeadOrInactive(TechnoClass *this)
{
  int result; // eax

  LOBYTE(result) = !this /*0x700d47*/
                || (result = (*((int (__thiscall **)(TechnoClass *))this->RadioClass + 11))(this), result != 1)
                || (*((char *)this + 1668) < 0
                 || (result = (*((int (__thiscall **)(TechnoClass *))this->RadioClass + 313))(this), !(_BYTE)result))
                && (result = (*((int (__thiscall **)(TechnoClass *))this->RadioClass + 223))(this), !(_BYTE)result);
  return result; /*0x700d49*/
}



// ==== 0x00700D50  TechnoClass::CanAttack  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::CanAttack(TechnoClass *this)
{
  InfantryClass *v2; // eax
  int result; // eax
  int v4; // eax
  int v5; // eax
  int v6; // edx
  int v7; // eax
  int v8; // ecx
  int v9; // ebp
  _DWORD *v10; // edi
  _DWORD *v11; // ebx
  Cell *v12; // eax
  Cell *v13; // eax
  __int16 v14[2]; // [esp+10h] [ebp-24h] BYREF
  int v15; // [esp+14h] [ebp-20h]
  __int16 v16[2]; // [esp+18h] [ebp-1Ch] BYREF
  __int16 v17[2]; // [esp+1Ch] [ebp-18h] BYREF
  __int16 v18[2]; // [esp+20h] [ebp-14h] BYREF
  __int16 v19[2]; // [esp+24h] [ebp-10h] BYREF
  __int16 v20[2]; // [esp+28h] [ebp-Ch] BYREF
  _DWORD *v21; // [esp+2Ch] [ebp-8h] BYREF
  char v22[4]; // [esp+30h] [ebp-4h] BYREF

  *(_DWORD *)v16 = *(_DWORD *)(*((int (__thiscall **)(TechnoClass *, _DWORD **))this->RadioClass + 110))(this, &v21); /*0x700d74*/
  v2 = (InfantryClass *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v16); /*0x700d78*/
  if ( v2 && InfantryClass::ValidateAttackPosition(v2) ) /*0x700d83*/
    goto LABEL_8; /*0x700d8a*/
  v4 = (*((int (__thiscall **)(TechnoClass *))this->RadioClass + 11))(this) - 1; /*0x700d93*/
  if ( v4 ) /*0x700d94*/
  {
    v5 = v4 - 5; /*0x700d9a*/
    if ( !v5 ) /*0x700d9d*/
    {
      LOBYTE(result) = ReturnFalse_465D30(); /*0x700e3a*/
      return result; /*0x700e46*/
    }
    if ( v5 != 9 ) /*0x700da6*/
    {
      result = (*((int (__thiscall **)(TechnoClass *))this->RadioClass + 223))(this); /*0x700dac*/
      if ( (_BYTE)result ) /*0x700db4*/
        goto LABEL_8; /*0x700db4*/
      result = (*((int (__thiscall **)(TechnoClass *))this->RadioClass + 33))(this); /*0x700dba*/
      if ( !*(_DWORD *)(result + 1504) ) /*0x700dc0*/
        goto LABEL_8; /*0x700dc8*/
      goto LABEL_46; /*0x700dc8*/
    }
    if ( TechnoClass::updateTurretRotation(this) ) /*0x700dda*/
    {
      result = TechnoClass::IsMission27to30(this); /*0x700de5*/
      if ( (_BYTE)result || *((_DWORD *)this + 433) == 31 ) /*0x700df5*/
        goto LABEL_8; /*0x700df5*/
    }
    if ( TechnoClass::updateTurretRotation(this) ) /*0x700df9*/
    {
      v6 = this->diskLaserTimer[0]; /*0x700e02*/
      result = this->diskLaserTimer[2]; /*0x700e08*/
      if ( v6 == -1 ) /*0x700e11*/
        goto LABEL_16; /*0x700e11*/
      if ( *(_DWORD *)&stru_A8EB00.?[416] - v6 < result ) /*0x700e1d*/
      {
        result -= *(_DWORD *)&stru_A8EB00.?[416] - v6; /*0x700e1f*/
LABEL_16:
        if ( result ) /*0x700e23*/
        {
LABEL_8:
          LOBYTE(result) = 0; /*0x700dce*/
          return result; /*0x700dd7*/
        }
      }
    }
    LOBYTE(result) = TechnoClass::GetTypeFlag(this); /*0x700e25*/
    return result; /*0x700e33*/
  }
  result = (*((int (__thiscall **)(TechnoClass *))this->RadioClass + 223))(this); /*0x700e4b*/
  if ( (_BYTE)result ) /*0x700e53*/
    goto LABEL_8; /*0x700e53*/
  if ( *((char *)this + 1668) >= 0 ) /*0x700e61*/
    goto LABEL_8; /*0x700e61*/
  v7 = *((_DWORD *)this + 433); /*0x700e67*/
  if ( !*(_DWORD *)(v7 + 1028) /*0x700e97*/
    && !*(_DWORD *)(v7 + 1504)
    && !*(_BYTE *)(v7 + 3603)
    && !this->bunkerLinkedUnit
    && !TechnoClass::updateSpawnManager(this) )
  {
    goto LABEL_8; /*0x700e97*/
  }
  v8 = *((_DWORD *)this + 433); /*0x700ea4*/
  result = *(_DWORD *)(v8 + 1028); /*0x700eaa*/
  if ( result ) /*0x700eb2*/
  {
    if ( this->q1A5 ) /*0x700eb4*/
      goto LABEL_8; /*0x700eb4*/
    if ( *(_BYTE *)(result + 5817) ) /*0x700ec6*/
    {
      result = (int)this->mindControlledBy; /*0x700ed0*/
      if ( result ) /*0x700ed8*/
        goto LABEL_8; /*0x700ed8*/
    }
  }
  result = *(_DWORD *)(v8 + 1504); /*0x700ede*/
  if ( result > 0 ) /*0x700ee6*/
  {
    if ( this->? ) /*0x700eec*/
      goto LABEL_8; /*0x700eec*/
    *(_DWORD *)v14 = *(_DWORD *)(*((int (__thiscall **)(TechnoClass *, char *))this->RadioClass + 110))(this, v22); /*0x700f0f*/
    result = (int)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v14); /*0x700f19*/
    v9 = result; /*0x700f1e*/
    if ( result ) /*0x700f22*/
    {
      LOWORD(v15) = v14[0] + LOWORD(g_DDrawSurfaceManager.scenario[86]); /*0x700f40*/
      HIWORD(v15) = HIWORD(g_DDrawSurfaceManager.scenario[86]) + v14[1]; /*0x700f49*/
      *(_DWORD *)v17 = v15; /*0x700f58*/
      v10 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v17); /*0x700f71*/
      HIWORD(v15) = HIWORD(g_DDrawSurfaceManager.scenario[82]) + v14[1]; /*0x700f7a*/
      LOWORD(v15) = v14[0] + LOWORD(g_DDrawSurfaceManager.scenario[82]); /*0x700f7f*/
      *(_DWORD *)v18 = v15; /*0x700f92*/
      v21 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v18); /*0x700fa5*/
      LOWORD(v15) = v14[0] + LOWORD(g_DDrawSurfaceManager.scenario[84]); /*0x700fb7*/
      HIWORD(v15) = HIWORD(g_DDrawSurfaceManager.scenario[84]) + v14[1]; /*0x700fc0*/
      *(_DWORD *)v19 = v15; /*0x700fc9*/
      v11 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v19); /*0x700fea*/
      HIWORD(v15) = HIWORD(g_DDrawSurfaceManager.scenario[88]) + v14[1]; /*0x700ff2*/
      LOWORD(v15) = v14[0] + LOWORD(g_DDrawSurfaceManager.scenario[88]); /*0x700ff7*/
      *(_DWORD *)v20 = v15; /*0x701004*/
      result = (int)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v20); /*0x70100e*/
      if ( (*(_DWORD *)(v9 + 320) & 0x100) != 0 || v10 && (v10[80] & 0x100) != 0 ) /*0x701030*/
        goto LABEL_8; /*0x701030*/
      if ( result && (*(_DWORD *)(result + 320) & 0x100) != 0 ) /*0x701040*/
        goto LABEL_8; /*0x701040*/
      if ( v11 && (v11[80] & 0x100) != 0 ) /*0x701050*/
        goto LABEL_8; /*0x701050*/
      result = (int)v21; /*0x701056*/
      if ( v21 ) /*0x70105c*/
      {
        if ( (v21[80] & 0x100) != 0 ) /*0x701064*/
          goto LABEL_8; /*0x701064*/
      }
    }
    if ( this->owner->currentPlayer && *(_DWORD *)(v9 + 236) == 2 ) /*0x701081*/
      goto LABEL_8; /*0x701081*/
    v12 = (Cell *)(*((int (__thiscall **)(TechnoClass *))this->RadioClass + 111))(this); /*0x70108b*/
    result = (int)Cell::IsBridge(v12); /*0x701093*/
    if ( result ) /*0x70109a*/
    {
      v13 = (Cell *)(*((int (__thiscall **)(TechnoClass *))this->RadioClass + 111))(this); /*0x7010a0*/
      result = Cell::IsBridge(v13)[328]; /*0x7010ad*/
      if ( !*(_BYTE *)(result + 5803) ) /*0x7010b3*/
        goto LABEL_8; /*0x7010bb*/
    }
  }
LABEL_46:
  LOBYTE(result) = 1; /*0x7010c1*/
  return result; /*0x700dce*/
}



// ==== 0x007010D0  TechnoClass::HasValidWeapon  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::HasValidWeapon(TechnoClass *this)
{
  int result; // eax

  LOBYTE(result) = !this->__pad_1C4[4] /*0x70110d*/
                && (result = House::IsHumanPlayer((House *)this->owner), (_BYTE)result)
                && (result = (*((int (__thiscall **)(TechnoClass *))this->RadioClass + 253))(this)) != 0
                && *(_DWORD *)result
                && (result = (*((int (__thiscall **)(TechnoClass *))this->RadioClass + 223))(this), !(_BYTE)result);
  return result; /*0x70110f*/
}



// ==== 0x00701120  TechnoClass::HasActiveParam  this=TechnoClass  sig=csp ====
BOOL __thiscall TechnoClass::HasActiveParam(TechnoClass *this)
{
  _DWORD *v1; // eax

  v1 = (_DWORD *)(*((int (__thiscall **)(TechnoClass *))this->RadioClass + 253))(this); /*0x701122*/
  return v1 && *v1; /*0x701136*/
}



// ==== 0x00701140  TechnoClass::CheckHealthDiff  this=TechnoClass  sig=csp ====
int __thiscall InfantryClass::CheckHealthDiff(TechnoClass *this)
{
  int result; // eax

  result = (*((int (__thiscall **)(TechnoClass *))this->RadioClass + 11))(this); /*0x701145*/
  if ( result == 6 ) /*0x70114b*/
    return *(_BYTE *)((*((int (__thiscall **)(TechnoClass *))this->RadioClass + 33))(this) + 3276) /*0x701183*/
        && this->? != *(_DWORD *)((*((int (__thiscall **)(TechnoClass *))this->RadioClass + 34))(this) + 160);
  LOBYTE(result) = 0; /*0x70114d*/
  return result; /*0x70114f*/
}



// ==== 0x00701190  TechnoClass::StubReturnFalse11  this=TechnoClass  sig=csp ====
char TacticalClass::StubReturnFalse11(TechnoClass *this)
{
  return 0; /*0x701192*/
}



// ==== 0x007011A0  ObjectClass::method_7011A0  this=ObjectClass  sig=csp ====
int __thiscall sub_7011A0(ObjectClass *this)
{
  double v1; // st7
  int result; // eax
  int v4; // edx
  int (__thiscall **vtable0)(ObjectClass *, _BYTE *); // eax
  _DWORD *v6; // eax
  char *v7; // esi
  int v8; // esi
  int v9; // eax
  int v10; // [esp+14h] [ebp-1Ch]
  __int16 v11[2]; // [esp+18h] [ebp-18h] BYREF
  int v12; // [esp+1Ch] [ebp-14h]
  int v13; // [esp+20h] [ebp-10h]
  _BYTE v14[12]; // [esp+24h] [ebp-Ch] BYREF

  if ( (*((unsigned __int8 (__thiscall **)(ObjectClass *))this->AbstractClass + 21))(this) ) /*0x7011a9*/
    return 0; /*0x7011b1*/
  if ( !*(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 6200) ) /*0x7011bd*/
    return 0; /*0x7011c8*/
  v4 = *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 6212); /*0x7011d5*/
  vtable0 = (int (__thiscall **)(ObjectClass *, _BYTE *))this->AbstractClass; /*0x7011db*/
  v12 = *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 6208); /*0x7011dd*/
  v13 = v4; /*0x7011e5*/
  v6 = (_DWORD *)vtable0[18](this, v14); /*0x7011ec*/
  LOWORD(v10) = *v6 / 256; /*0x7011ff*/
  HIWORD(v10) = v6[1] / 256; /*0x701218*/
  *(_DWORD *)v11 = v10; /*0x701225*/
  v7 = (char *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v11); /*0x701234*/
  ScenarioClass::CalcMinShroudLevel((ScenarioClass *)&stru_87F5F0.__pad_58[416]); /*0x701236*/
  v8 = g_BuildingLoadQueue_Array.?[1] * v7[283]; /*0x70127d*/
  LOWORD(v9) = Math::RoundToInt(v1); /*0x70127f*/
  Math::Sqrt((double)(v8 * v8 + (v9 << 8) * (v9 << 8))); /*0x7012a1*/
  LOWORD(result) = Math::RoundToInt(v1); /*0x7012a9*/
  return result; /*0x7011b0*/
}



// ==== 0x007012C0  TechnoClass::FindLowestDamage  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::FindLowestDamage(TechnoClass *this)
{
  int v2; // eax
  int v3; // ebx
  int *passengers; // ebp
  int v5; // edi
  int DB; // esi
  int v7; // eax
  int v8; // eax
  int v10; // edi
  int v11; // esi
  int v12; // eax
  int v13; // eax
  int v14; // [esp+Ch] [ebp+4h]

  v2 = *(_DWORD *)(*((int (__thiscall **)(TechnoClass *, int))this->RadioClass + 254))(this, v14); /*0x7012d3*/
  if ( !v2 ) /*0x7012d7*/
    return 0; /*0x701397*/
  v3 = *(_DWORD *)(v2 + 180); /*0x7012df*/
  if ( !*(_BYTE *)((*((int (__thiscall **)(TechnoClass *))this->RadioClass + 33))(this) + 1508) ) /*0x7012ed*/
    return v3; /*0x70138f*/
  passengers = this->passengers; /*0x7012fc*/
  v5 = 0x7FFFFFFF; /*0x701305*/
  DB = CCINIClass::GetDB((CCINIClass *)this->passengers); /*0x70130f*/
  if ( DB ) /*0x701313*/
  {
    do /*0x70133c*/
    {
      v7 = *(_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)DB + 1012))(DB); /*0x70131f*/
      if ( v7 ) /*0x701323*/
      {
        v8 = *(_DWORD *)(v7 + 180); /*0x701325*/
        if ( v8 < v5 ) /*0x70132d*/
          v5 = v8; /*0x70132f*/
      }
      DB = *(_DWORD *)(DB + 48); /*0x701331*/
    }
    while ( DB && (*(_BYTE *)(DB + 20) & 4) != 0 ); /*0x70133c*/
  }
  if ( v3 < v5 ) /*0x701340*/
    return v3; /*0x701344*/
  v10 = 0x7FFFFFFF; /*0x70134d*/
  v11 = CCINIClass::GetDB((CCINIClass *)passengers); /*0x701357*/
  if ( v11 ) /*0x70135b*/
  {
    do /*0x701384*/
    {
      v12 = *(_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)v11 + 1012))(v11); /*0x701367*/
      if ( v12 ) /*0x70136b*/
      {
        v13 = *(_DWORD *)(v12 + 180); /*0x70136d*/
        if ( v13 < v10 ) /*0x701375*/
          v10 = v13; /*0x701377*/
      }
      v11 = *(_DWORD *)(v11 + 48); /*0x701379*/
    }
    while ( v11 && (*(_BYTE *)(v11 + 20) & 4) != 0 ); /*0x701384*/
  }
  return v10; /*0x701346*/
}



// ==== 0x007013A0  TechnoClass::OverrideMission_SyncLog  this=TechnoClass  sig=csp ====
int __thiscall MissionClass::OverrideMission_SyncLog(TechnoClass *this)
{
  int v3; // [esp+Ch] [ebp+4h]
  int v4; // [esp+10h] [ebp+8h]
  int v5; // [esp+14h] [ebp+Ch]

  this->lastTarget = this->target; /*0x7013bb*/
  AbstractClass::COMStub_125((MissionClass *)this, v3, v4, v5); /*0x7013c1*/
  return (*((int (__thiscall **)(TechnoClass *, int))this->RadioClass + 242))(this, v4); /*0x7013d1*/
}



// ==== 0x007013E0  TechnoClass::CheckOccupantState  this=TechnoClass  sig=csp ====
int __thiscall BuildingClass::CheckOccupantState(TechnoClass *this)
{
  int result; // eax

  if ( AbstractClass::COMStub_126((MissionClass *)this) ) /*0x7013e3*/
  {
    result = (*((int (__thiscall **)(TechnoClass *, AbstractClass *))this->RadioClass + 242))(this, this->lastTarget); /*0x7013f7*/
    LOBYTE(result) = 1; /*0x7013fd*/
  }
  else
  {
    LOBYTE(result) = 0; /*0x701401*/
  }
  return result; /*0x7013ff*/
}



// ==== 0x00701410  TechnoClass::HandleSellOrRepair  this=TechnoClass  sig=csp ====
int __thiscall BuildingClass::HandleSellOrRepair(TechnoClass *this)
{
  double v1; // st7
  int v3; // eax
  int result; // eax
  int v5; // edx
  _DWORD *v6; // eax
  _BYTE v7[12]; // [esp+8h] [ebp-Ch] BYREF

  (*((void (__thiscall **)(TechnoClass *, int))this->RadioClass + 73))(this, 2); /*0x70141a*/
  v3 = *(_DWORD *)((*((int (__thiscall **)(TechnoClass *))this->RadioClass + 33))(this) + 160); /*0x70142a*/
  this->? = v3; /*0x701432*/
  this->? = v3; /*0x701435*/
  result = (*((int (__thiscall **)(TechnoClass *))this->RadioClass + 11))(this); /*0x70143a*/
  if ( result == 6 ) /*0x701440*/
  {
    (*((void (__thiscall **)(TechnoClass *, _DWORD))this->RadioClass + 103))(this, 0); /*0x701448*/
    BuildingClass::GetHealthRatio((BuildingClass *)this); /*0x701450*/
    globalHelper_051EE0((int)this, v5, v1 <= *(double *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 5888)); /*0x701473*/
    v6 = (_DWORD *)(*((int (__thiscall **)(TechnoClass *, _BYTE *))this->RadioClass + 18))(this, v7); /*0x701483*/
    return (int)StartAudioControllerAt(*(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 452), v6, 0); /*0x701494*/
  }
  return result; /*0x701499*/
}



// ==== 0x007014A0  TechnoClass::ProcessCapture  this=TechnoClass  sig=csp ====
char __userpurge TechnoClass::ProcessCapture@<al>(TechnoClass *this, int a2@<edi>, int a3, int a4)
{
  int v4; // ecx
  _DWORD *v5; // esi
  TechnoClass *v6; // eax
  int v7; // eax
  TaskManager *v8; // ecx
  int v9; // eax
  char *v10; // eax
  CellClass *v11; // edi
  CellClass *v12; // eax
  int v13; // eax
  bool v14; // al
  int v15; // eax
  int v16; // edx
  int v17; // eax
  int v18; // ecx
  _DWORD *Member; // edi
  int v21; // [esp+14h] [ebp-1Ch]
  int v22; // [esp+14h] [ebp-1Ch]
  _DWORD v24[3]; // [esp+24h] [ebp-Ch] BYREF

  v5 = (_DWORD *)v4; /*0x7014a9*/
  v6 = *(TechnoClass **)(v4 + 540); /*0x7014ab*/
  if ( this == v6 ) /*0x7014b3*/
    return 0; /*0x70188d*/
  if ( v6 == (TechnoClass *)dword_A83D4C && *(_BYTE *)(v4 + 131) ) /*0x7014c1*/
    (*(void (**)(void))(*(_DWORD *)v4 + 336))(); /*0x7014cf*/
  (*(void (__thiscall **)(_DWORD *, _DWORD))(*v5 + 968))(v5, 0); /*0x7014db*/
  (*(void (__thiscall **)(_DWORD *, _DWORD, int))(*v5 + 1152))(v5, 0, 1); /*0x7014e9*/
  if ( !v5
    || (*(int (__thiscall **)(_DWORD *))(*v5 + 44))(v5) != 1
    || (v7 = (*(int (__thiscall **)(_DWORD *))(*v5 + 44))(v5),
        !(unsigned __int8)TechnoClass::HasDeployFlags(v7 == 1 ? (TechnoClass *)v5 : 0)) )
  {
    v5[134] = 0; /*0x70151a*/
  }
  if ( v5[43] != 19
    && (!v5
     || (*(int (__thiscall **)(_DWORD *))(*v5 + 44))(v5) != 1
     || !*(_BYTE *)(*((*(int (__thiscall **)(_DWORD *))(*v5 + 44))(v5) == 1 ? v5 + 433 : (_DWORD *)1732) + 3603)
     || v5[43] != 16) )
  {
    (*(void (__thiscall **)(_DWORD *, int, int))(*v5 + 488))(v5, 5, 1); /*0x70156e*/
  }
  v8 = (TaskManager *)v5[180]; /*0x701574*/
  if ( v8 ) /*0x70157c*/
    TaskManager::Update(v8); /*0x70157e*/
  TechnoClass::RemoveBuildingFromScripts((TechnoClass *)v5); /*0x701585*/
  if ( !*((_BYTE *)v5 + 129) ) /*0x70158a*/
    HouseClass::RegisterGain(v5[135], (int)v5, 0); /*0x70159d*/
  (*(void (__thiscall **)(_DWORD *, _DWORD))(*v5 + 224))(v5, 0); /*0x7015a8*/
  v9 = (*(int (__thiscall **)(_DWORD *))(*v5 + 132))(v5); /*0x7015b2*/
  *((_DWORD *)this + 5434) += (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)v9 + 132))(v9, v5[135]); /*0x7015d2*/
  HouseClass::DecrementUnitCount((HouseClass *)v5[135], v5); /*0x7015de*/
  BuildingClass::PowerUpdate((BuildingClass *)this, v5); /*0x7015e6*/
  switch ( (*(int (__thiscall **)(_DWORD *))(*v5 + 44))(v5) ) /*0x701600*/
  {
    case 1: /*0x701600*/
    case 2: /*0x701600*/
    case 15: /*0x701600*/
      if ( !*(_BYTE *)((*(int (__thiscall **)(_DWORD *))(*v5 + 132))(v5) + 3231) ) /*0x701635*/
      {
        v10 = (char *)this + 4 * (*(int (__thiscall **)(_DWORD *))(*v5 + 56))(v5) + 21476; /*0x701646*/
        goto LABEL_24; /*0x701646*/
      }
      break; /*0x701646*/
    case 6: /*0x701600*/
      if ( !*(_BYTE *)((*(int (__thiscall **)(_DWORD *))(*v5 + 132))(v5) + 3231) ) /*0x701611*/
      {
        v10 = (char *)this + 4 * (*(int (__thiscall **)(_DWORD *))(*v5 + 56))(v5) + 21560; /*0x701622*/
LABEL_24:
        ++*(_DWORD *)v10; /*0x70164d*/
      }
      break; /*0x70164d*/
    default:
      break;
  }
  *(_DWORD *)(v5[135] + 21644) = this->?[3].?; /*0x70164f*/
  if ( !*((_BYTE *)v5 + 129) ) /*0x701664*/
    (*(void (__thiscall **)(_DWORD *, _DWORD))(*v5 + 292))(v5, 0); /*0x701674*/
  AbstractClass::ClearTargetToMeClearManagerTarget((int)v5); /*0x70167c*/
  if ( !*((_BYTE *)v5 + 129) ) /*0x701681*/
    (*(void (__thiscall **)(_DWORD *, int))(*v5 + 292))(v5, 3); /*0x701691*/
  v11 = 0; /*0x70169e*/
  if ( !*((_BYTE *)v5 + 129) ) /*0x701697*/
  {
    if ( v5 && (v5[5] & 4) != 0 ) /*0x7016b9*/
    {
      v12 = (CellClass *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)v5 + 686); /*0x7016f6*/
    }
    else
    {
      v24[0] = v5[39]; /*0x7016c7*/
      v24[1] = v5[40]; /*0x7016d3*/
      v24[2] = v5[41]; /*0x7016df*/
      v12 = Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], v24); /*0x7016e3*/
    }
    v11 = v12; /*0x7016fb*/
    if ( v12 ) /*0x7016ff*/
    {
      v21 = -v5[322]; /*0x70170b*/
      v13 = (*(int (__thiscall **)(_DWORD *))(*v5 + 56))(v5); /*0x70170e*/
      CellClass::SetThreatBounds(v11, v13, v21); /*0x701714*/
      v5[322] = 0; /*0x701719*/
    }
    (*(void (__thiscall **)(_DWORD *, _DWORD, _DWORD, _DWORD, _DWORD))(*v5 + 1164))(v5, 0, 0, 0, 0); /*0x70172f*/
  }
  v5[135] = this; /*0x701735*/
  v14 = this == (TechnoClass *)dword_A83D4C && dword_A83D4C; /*0x701748*/
  *((_BYTE *)v5 + 1050) = v14; /*0x701751*/
  if ( !*((_BYTE *)v5 + 129) ) /*0x701757*/
  {
    if ( v11 ) /*0x701763*/
    {
      v15 = (*(int (__thiscall **)(_DWORD *))(*v5 + 704))(v5); /*0x701769*/
      v16 = *v5; /*0x70176f*/
      v22 = v15; /*0x701771*/
      v5[322] = v15; /*0x701774*/
      v17 = (*(int (__thiscall **)(_DWORD *))(v16 + 56))(v5); /*0x70177a*/
      CellClass::SetThreatBounds(v11, v17, v22); /*0x701780*/
    }
    HouseClass::RegisterGain_0(v5[135], (BuildingClass *)v5, 1); /*0x70178e*/
  }
  v18 = v5[43]; /*0x701793*/
  v5[184] = 0; /*0x7017a0*/
  if ( v18 == 21 || v5[45] == 21 ) /*0x7017b2*/
    (*(void (__thiscall **)(_DWORD *, int))(*v5 + 496))(v5, 5); /*0x7017ba*/
  if ( !*((_BYTE *)v5 + 129) ) /*0x7017c0*/
  {
    if ( (*(int (__thiscall **)(_DWORD *, int))(*v5 + 44))(v5, a2) != 6 || v5[43] != 16 || !*(_BYTE *)(v5[328] + 5821) ) /*0x7017e9*/
    {
      if ( !Team::GetMember((Team *)v5, 0) /*0x70181d*/
        || (Member = (_DWORD *)Team::GetMember((Team *)v5, 0),
            (*(int (__thiscall **)(_DWORD *))(*Member + 44))(Member) != 6)
        || !*(_BYTE *)(Member[328] + 5821) )
      {
        (*(void (__thiscall **)(_DWORD *, _DWORD, int))(*v5 + 1152))(v5, 0, 1); /*0x70182f*/
        (*(void (__thiscall **)(_DWORD *, _DWORD))(*v5 + 968))(v5, 0); /*0x70183b*/
        (*(void (__thiscall **)(_DWORD *, _DWORD, int))(*v5 + 1156))(v5, 0, 1); /*0x701849*/
      }
    }
    if ( *((_BYTE *)v5 + 1059) ) /*0x70184f*/
    {
      (*(void (__thiscall **)(_DWORD *))(*v5 + 1176))(v5); /*0x70185d*/
      (*(void (__thiscall **)(_DWORD *))(*v5 + 1172))(v5); /*0x701867*/
    }
    (*(void (__thiscall **)(_DWORD *, _DWORD, _DWORD, _DWORD, _DWORD))(*v5 + 1160))(v5, 0, 0, 0, 0); /*0x70187b*/
  }
  return 1; /*0x701882*/
}



// ==== 0x00701900  TechnoClass::ReceiveDamage_Shield  this=TechnoClass  sig=csp ====
double __thiscall TechnoClass::ReceiveDamage_Shield(
        TechnoClass *this,
        double a2,
        double a3,
        int *a4,
        int a5,
        _BYTE *a6,
        void *a7,
        char a8,
        __int64 a9)
{
  double result; // st7
  _DWORD *v11; // eax
  int v12; // eax
  int v13; // ebp
  int v14; // eax
  int v15; // ebp
  int v16; // eax
  Cell *v17; // eax
  int v18; // eax
  int v19; // eax
  int *v20; // ecx
  int DestructionEffect; // edi
  int v22; // edi
  int v23; // eax
  int v24; // edx
  int v25; // kr00_4
  TechnoClass *v26; // edi
  int v27; // eax
  int vtable2; // ebx
  int uniqueId; // ecx
  int v30; // edx
  int *p_vtable2; // edi
  int InfantryNuked; // ecx
  int v33; // eax
  TechnoClass *slaveManager; // ecx
  int drainAnim; // ecx
  int drainTarget; // eax
  int v37; // eax
  int drainingMe; // edi
  int v39; // ecx
  int v40; // eax
  int v41; // eax
  _DWORD *captureManager; // ecx
  int vtable0; // edx
  int v44; // edi
  unsigned int v45; // eax
  int v46; // edx
  int v47; // edi
  unsigned int v48; // eax
  int fireParticles; // ecx
  int v50; // edi
  int v51; // eax
  int v52; // ebx
  int v53; // edi
  int v54; // ebp
  _DWORD *v55; // edi
  int v56; // edx
  VoxelAnimClass *v57; // ebx
  int v58; // eax
  int *v59; // edi
  int *v60; // eax
  int v61; // ebp
  AnimClass *v62; // ebx
  int *v63; // eax
  int v64; // ecx
  int v65; // edx
  int v66; // eax
  int v67; // edx
  int v68; // eax
  int v69; // edi
  int v70; // eax
  AnimClass *v71; // edi
  int *v72; // eax
  int v73; // ecx
  int v74; // edx
  int v75; // eax
  int v76; // eax
  int v77; // ebp
  int v78; // edi
  int DB; // eax
  int *v80; // ecx
  TechnoClass *v81; // eax
  TechnoClass *v82; // edi
  TechnoClass *attachedBomb; // esi
  _DWORD *v84; // eax
  int v85; // edx
  int v86; // eax
  int v87; // edx
  int v88; // eax
  int damageParticles; // ecx
  int v90; // eax
  int i; // ebp
  int v92; // eax
  int *UpgradeOffset; // eax
  int v94; // ebx
  int v95; // ebp
  int *v96; // edi
  int v97; // ecx
  int v98; // edx
  int v99; // eax
  int v100; // eax
  int v101; // eax
  _DWORD *v102; // edi
  _DWORD *v103; // eax
  double v104; // st6
  double v105; // st4
  int v106; // eax
  int v107; // edx
  int v108; // kr04_4
  int v109; // edi
  int v110; // edi
  int v111; // [esp+20h] [ebp-C8h]
  _DWORD *owner; // [esp+24h] [ebp-C4h]
  bool v113; // [esp+37h] [ebp-B1h]
  int v114; // [esp+38h] [ebp-B0h]
  double v115; // [esp+38h] [ebp-B0h]
  double v116; // [esp+38h] [ebp-B0h]
  double v117; // [esp+38h] [ebp-B0h]
  double v118; // [esp+38h] [ebp-B0h]
  int v119; // [esp+38h] [ebp-B0h]
  double v120; // [esp+38h] [ebp-B0h]
  int v121; // [esp+40h] [ebp-A8h]
  int v122; // [esp+44h] [ebp-A4h]
  double ammo; // [esp+48h] [ebp-A0h]
  double v124; // [esp+48h] [ebp-A0h]
  Random *p_NeedsSaveOrLink; // [esp+48h] [ebp-A0h]
  int v126; // [esp+48h] [ebp-A0h]
  int v127; // [esp+50h] [ebp-98h]
  void **v128; // [esp+54h] [ebp-94h] BYREF
  void *Block; // [esp+58h] [ebp-90h]
  int v130; // [esp+5Ch] [ebp-8Ch]
  char v131; // [esp+60h] [ebp-88h]
  char v132; // [esp+61h] [ebp-87h]
  int v133; // [esp+64h] [ebp-84h]
  int v134; // [esp+68h] [ebp-80h]
  int v135; // [esp+6Ch] [ebp-7Ch] BYREF
  int v136; // [esp+70h] [ebp-78h]
  int v137; // [esp+74h] [ebp-74h]
  int v138; // [esp+78h] [ebp-70h]
  _DWORD v139[2]; // [esp+7Ch] [ebp-6Ch] BYREF
  int v140; // [esp+84h] [ebp-64h]
  _DWORD v141[3]; // [esp+88h] [ebp-60h] BYREF
  _DWORD v142[3]; // [esp+94h] [ebp-54h] BYREF
  _DWORD v143[3]; // [esp+A0h] [ebp-48h] BYREF
  int v144[3]; // [esp+ACh] [ebp-3Ch] BYREF
  int v145[3]; // [esp+B8h] [ebp-30h] BYREF
  _DWORD v146[4]; // [esp+C4h] [ebp-24h] BYREF
  char v147[8]; // [esp+D4h] [ebp-14h] BYREF
  int v148[3]; // [esp+DCh] [ebp-Ch] BYREF

  v114 = *(_DWORD *)LODWORD(a2); /*0x70191b*/
  v113 = (int)*(_DWORD *)LODWORD(a2) < 0; /*0x701927*/
  if ( !(_BYTE)a4 && (int)*(_DWORD *)LODWORD(a2) >= 0 ) /*0x701933*/
  {
    v11 = (_DWORD *)(*(int (__thiscall **)(TechnoClass *))(this->vtable0 + 132))(this); /*0x701945*/
    result = (double)v114 /*0x70195d*/
           / (TechnoClass::GetDamageMultiplier((TechnoClass *)this->owner, v11)
            * *(double *)this->armorMultiplier);
    LOWORD(v12) = Math::RoundToInt(result); /*0x701961*/
    *(_DWORD *)LODWORD(a2) = v12; /*0x70196c*/
    if ( (unsigned __int8)Audio::IsMediumVolume(&this->veterancy) || (unsigned __int8)Audio::IsLoud(&this->veterancy) ) /*0x70197b*/
    {
      if ( (v13 = (*(int (__thiscall **)(TechnoClass *))(this->vtable0 + 132))(this), /*0x7019ba*/
            (unsigned __int8)Audio::IsMediumVolume(&this->veterancy))
        && *(_BYTE *)(v13 + 669)
        || (unsigned __int8)Audio::IsLoud(&this->veterancy) && (*(_BYTE *)(v13 + 669) || *(_BYTE *)(v13 + 687)) )
      {
        result = (double)(int)*(_DWORD *)LODWORD(a2) / *(double *)&dword_8871E0->CreditTicks[1]; /*0x7019cb*/
        LOWORD(v14) = Math::RoundToInt(result); /*0x7019d1*/
        *(_DWORD *)LODWORD(a2) = v14; /*0x7019d6*/
      }
    }
    if ( (int)*(_DWORD *)LODWORD(a2) < 1 ) /*0x7019db*/
      *(_DWORD *)LODWORD(a2) = 1; /*0x7019dd*/
    if ( HIDWORD(a3) ) /*0x7019ec*/
    {
      if ( *(_BYTE *)((*(int (__thiscall **)(TechnoClass *))(this->vtable0 + 132))(this) + 3212) ) /*0x7019f8*/
      {
        v15 = (*(int (__thiscall **)(_DWORD))(*(_DWORD *)HIDWORD(a3) + 132))(HIDWORD(a3)); /*0x701a10*/
        if ( (*(int (__thiscall **)(TechnoClass *))(this->vtable0 + 132))(this) == v15 /*0x701a2a*/
          && this->owner == *(_DWORD *)(HIDWORD(a3) + 540) )
        {
          return result; /*0x701a2a*/
        }
      }
    }
  }
  if ( (*(unsigned __int8 (__thiscall **)(TechnoClass *))(this->vtable0 + 352))(this) && !(_BYTE)a4 && !v113 ) /*0x701a5a*/
  {
    if ( *(_DWORD *)this->__pad_1C4 == 1 ) /*0x701a63*/
      CreateSmokeEffectAt( /*0x701a67*/
        2 * *(_DWORD *)LODWORD(a2),
        SLODWORD(a3),
        this->location[0],
        this->location[1],
        this->location[2],
        1,
        6);
    else
      CreateSmokeEffectAt( /*0x701a93*/
        2 * *(_DWORD *)LODWORD(a2),
        SLODWORD(a3),
        this->location[0],
        this->location[1],
        this->location[2],
        1,
        1);
    *(_DWORD *)LODWORD(a2) = 0; /*0x701a98*/
    return result; /*0x701aaa*/
  }
  if ( (*(unsigned __int8 (__thiscall **)(TechnoClass *))(this->vtable0 + 468))(this) && !(_BYTE)a4 ) /*0x701ac4*/
  {
    *(_DWORD *)LODWORD(a2) = 0; /*0x701ac6*/
    return result; /*0x701ad8*/
  }
  if ( *(_BYTE *)((*(int (__thiscall **)(TechnoClass *))(this->vtable0 + 132))(this) + 1713) ) /*0x701ae5*/
  {
    v115 = (double)(int)*(_DWORD *)LODWORD(a2); /*0x701af5*/
    v116 = v115 / (double)*(int *)((*(int (__thiscall **)(TechnoClass *))(this->vtable0 + 132))(this) + 160); /*0x701b0d*/
    v117 = *(float *)((*(int (__thiscall **)(TechnoClass *))(this->vtable0 + 132))(this) + 1716) * v116; /*0x701b25*/
    ammo = (double)this->ammo; /*0x701b2f*/
    result = ammo - (double)*(int *)((*(int (__thiscall **)(TechnoClass *))(this->vtable0 + 132))(this) + 1668) * v117; /*0x701b43*/
    LOWORD(v16) = Math::RoundToInt(result); /*0x701b47*/
    this->ammo = v16; /*0x701b4e*/
    if ( v16 < 0 ) /*0x701b54*/
      this->ammo = 0; /*0x701b56*/
    TechnoClass::CalcAnimDelay(this); /*0x701b62*/
  }
  if ( this->bunkerLinkedUnit && !(_BYTE)a4 ) /*0x701b81*/
  {
    if ( (*(int (__thiscall **)(TechnoClass *))(this->vtable0 + 44))(this) == 6 ) /*0x701b8d*/
    {
      if ( !LODWORD(a3) ) /*0x701b91*/
        goto LABEL_67; /*0x701b91*/
      if ( *(_BYTE *)(LODWORD(a3) + 326) ) /*0x701b97*/
      {
        *(_DWORD *)LODWORD(a2) = 0; /*0x701ba1*/
        return result; /*0x701bb3*/
      }
    }
    else
    {
      if ( !LODWORD(a3) ) /*0x701bb8*/
        goto LABEL_67; /*0x701bb8*/
      if ( !*(_BYTE *)(LODWORD(a3) + 326) ) /*0x701bbe*/
      {
        v17 = (Cell *)(*(int (__thiscall **)(TechnoClass *))(this->vtable0 + 444))(this); /*0x701bcc*/
        if ( Cell::IsBridge(v17) == (_DWORD *)this->bunkerLinkedUnit ) /*0x701bdf*/
        {
          *(_DWORD *)LODWORD(a2) = 0; /*0x701be1*/
          return result; /*0x701bf3*/
        }
      }
    }
  }
  if ( LODWORD(a3) ) /*0x701bf8*/
  {
    if ( *(_BYTE *)(LODWORD(a3) + 375) /*0x701c12*/
      && *(_BYTE *)((*(int (__thiscall **)(TechnoClass *))(this->vtable0 + 132))(this) + 3383) )
    {
      *(_DWORD *)LODWORD(a2) = 0; /*0x701c1c*/
      return result; /*0x701c2e*/
    }
    if ( *(_BYTE *)(LODWORD(a3) + 376) /*0x701c45*/
      && *(_BYTE *)((*(int (__thiscall **)(TechnoClass *))(this->vtable0 + 132))(this) + 3382) )
    {
      *(_DWORD *)LODWORD(a2) = 0; /*0x701c4f*/
      return result; /*0x701c61*/
    }
    if ( *(_BYTE *)(LODWORD(a3) + 342) /*0x701c78*/
      && *(_BYTE *)((*(int (__thiscall **)(TechnoClass *))(this->vtable0 + 132))(this) + 3387) )
    {
      *(_DWORD *)LODWORD(a2) = 0; /*0x701c82*/
      return result; /*0x701c94*/
    }
    if ( !*(_BYTE *)(LODWORD(a3) + 377) /*0x701cb9*/
      && HIDWORD(a3)
      && (unsigned __int8)HouseClass::IsAlliedWith(*(HouseClass **)(HIDWORD(a3) + 540)) )
    {
      *(_DWORD *)LODWORD(a2) = 0; /*0x701cc2*/
      return result; /*0x701cd4*/
    }
    if ( *(_BYTE *)(LODWORD(a3) + 365) ) /*0x701cd7*/
    {
      if ( !(unsigned __int8)HouseClass::IsAlliedWith((HouseClass *)this->owner) /*0x701d3c*/
        && !*(_BYTE *)((*(int (__thiscall **)(TechnoClass *))(this->vtable0 + 132))(this) + 3381)
        && (!this || (*(int (__thiscall **)(TechnoClass *))(this->vtable0 + 44))(this) != 6) )
      {
        v18 = (*(int (__thiscall **)(TechnoClass *))(this->vtable0 + 136))(this); /*0x701d53*/
        v19 = ComputeTechnoClassDamageFalloff(*(_DWORD *)LODWORD(a2), SLODWORD(a3), *(_DWORD *)(v18 + 156), 0); /*0x701d64*/
        *(_DWORD *)LODWORD(a2) = v19; /*0x701d69*/
        this->isBerserk_duration_left = v19; /*0x701d6b*/
        if ( !this->isBerserk[0] ) /*0x701d71*/
        {
          this->isBerserk[0] = 1; /*0x701d7d*/
          if ( this ) /*0x701d84*/
          {
            if ( (this->abstractFlags & 4) != 0 ) /*0x701d8a*/
            {
              v20 = (int *)this->q175; /*0x701d8c*/
              if ( v20 ) /*0x701d94*/
                TeamClass::LiberateMember_Start(v20, (int)this, 0xFFFFFFFF, 0); /*0x701d9b*/
            }
          }
          (*(void (__thiscall **)(TechnoClass *, _DWORD))(this->vtable0 + 968))(this, 0); /*0x701da6*/
          return ((double (__thiscall *)(TechnoClass *, int, _DWORD))*(_DWORD *)(this->vtable0 + 488))(this, 15, 0); /*0x701db4*/
        }
      }
      return result; /*0x701db4*/
    }
  }
LABEL_67:
  DestructionEffect = TechnoClass::CreateDestructionEffect(this); /*0x701dcc*/
  v122 = DestructionEffect; /*0x701e08*/
  if ( HIDWORD(a3) ) /*0x701e0c*/
  {
    v22 = (*(int (__thiscall **)(TechnoClass *))(this->vtable0 + 132))(this); /*0x701e1f*/
    v111 = *(_DWORD *)(HIDWORD(a3) + 540); /*0x701e2b*/
    v118 = (double)(int)*(_DWORD *)LODWORD(a2); /*0x701e2e*/
    v124 = v118 / (double)*(int *)((*(int (__thiscall **)(TechnoClass *))(this->vtable0 + 132))(this) + 160); /*0x701e46*/
    result = (double)(*(int (__thiscall **)(int))(*(_DWORD *)v22 + 172))(v22) * v124; /*0x701e58*/
    v25 = Math::RoundToInt(result); /*0x701e5c*/
    LOWORD(v24) = HIWORD(v25); /*0x701e5c*/
    LOWORD(v23) = v25; /*0x701e5c*/
    UpdateHouseClassAnger(this->owner, v24, v23, v111); /*0x701e68*/
    DestructionEffect = v122; /*0x701e6d*/
  }
  if ( DestructionEffect == 4 )
  {
    if ( (*(int (__thiscall **)(TechnoClass *))(this->vtable0 + 44))(this) == 6
      && LODWORD(a3)
      && *(_BYTE *)(LODWORD(a3) + 304) )
    {
      if ( this )
        v26 = (*(int (__thiscall **)(TechnoClass *))(this->vtable0 + 44))(this) == 6 ? this : 0;
      else
        v26 = 0; /*0x701ea4*/
      if ( *(_BYTE *)(v26[1].vtable0 + 5457) ) /*0x701ec2*/
      {
        result = (double)*(int *)(LODWORD(a3) + 308); /*0x701eda*/
        Math::RoundToInt(result); /*0x701eee*/
        LOWORD(v27) = Math::RoundToInt(result); /*0x701f09*/
        if ( !HIBYTE(v26[1].airstrikeTintTimer[1]) ) /*0x701f0e*/
          goto LABEL_83; /*0x701f0e*/
        vtable2 = v26[1].vtable2; /*0x701f1a*/
        uniqueId = v26[1].uniqueId; /*0x701f20*/
        if ( vtable2 != -1 ) /*0x701f29*/
        {
          if ( (int)dword_A8ED84 - vtable2 >= uniqueId ) /*0x701f35*/
            uniqueId = 0; /*0x701f3b*/
          else
            uniqueId -= (int)dword_A8ED84 - vtable2; /*0x701f37*/
        }
        if ( v27 < uniqueId ) /*0x701f3f*/
        {
LABEL_83:
          v30 = v136; /*0x701f41*/
          HIBYTE(v26[1].airstrikeTintTimer[1]) = 1; /*0x701f45*/
          p_vtable2 = &v26[1].vtable2; /*0x701f52*/
          *p_vtable2 = (int)dword_A8ED84; /*0x701f58*/
          p_vtable2[1] = v30; /*0x701f5a*/
          p_vtable2[2] = v27; /*0x701f5d*/
        }
        this->isAliveFlag[0] = 1; /*0x701f60*/
        this->health = 1; /*0x701f67*/
        return result; /*0x701f7d*/
      }
      DestructionEffect = v122; /*0x701fa2*/
    }
    goto LABEL_89; /*0x701fa2*/
  }
  if ( DestructionEffect == 5 ) /*0x701f83*/
    return result; /*0x701f83*/
  DestructionEffect = v122; /*0x701f94*/
  if ( v122 ) /*0x701f9a*/
  {
LABEL_89:
    InfantryNuked = dword_8871E0->InfantryNuked; /*0x701fa6*/
    this->radarFlashTimer[0] = (int)dword_A8ED84; /*0x701fbd*/
    this->radarFlashTimer[1] = v136; /*0x701fc5*/
    this->radarFlashTimer[2] = InfantryNuked; /*0x701fc8*/
    if ( DestructionEffect /*0x701ff0*/
      && DestructionEffect != 4
      && *(_BYTE *)((*(int (__thiscall **)(TechnoClass *))(this->vtable0 + 132))(this) + 3375)
      && !*(_BYTE *)((*(int (__thiscall **)(TechnoClass *))(this->vtable0 + 132))(this) + 3376) )
    {
      if ( (*(unsigned __int8 (__thiscall **)(TechnoClass *))(this->vtable0 + 196))(this) ) /*0x701ffe*/
        (*(void (__thiscall **)(TechnoClass *))(this->vtable0 + 1136))(this); /*0x70200c*/
      v33 = 2 * *(_DWORD *)LODWORD(a2); /*0x702020*/
      this->infantryBlinkTimer[0] = (int)dword_A8ED84; /*0x702022*/
      this->infantryBlinkTimer[1] = v136; /*0x702028*/
      this->infantryBlinkTimer[2] = v33; /*0x70202b*/
    }
  }
  if ( !this->health ) /*0x70202e*/
  {
    DestructionEffect = 4; /*0x702035*/
    v122 = 4; /*0x70203a*/
  }
  switch ( DestructionEffect ) /*0x702049*/
  {
    case 0: /*0x702049*/
    case 3: /*0x702049*/
      goto LABEL_186;
    case 1: /*0x702049*/
      DestructionEffect = v122; /*0x702713*/
      goto LABEL_176; /*0x702713*/
    case 2: /*0x702049*/
      DestructionEffect = (*(int (__thiscall **)(TechnoClass *))(this->vtable0 + 132))(this); /*0x70269f*/
      if ( *(int *)(DestructionEffect + 1256) > 0 /*0x7026cc*/
        && Random::Range(&Randomizer_Global, 0, 99) < 30
        && (unsigned __int8)House::IsHumanPlayer((House *)this->owner) )
      {
        DestructionEffect = *(_DWORD *)(*(_DWORD *)(DestructionEffect + 1244) /*0x7026f5*/
                                      + 4
                                      * ((unsigned int)Random::State(&Randomizer_Global)
                                       % *(_DWORD *)(DestructionEffect + 1256)));
        v84 = (_DWORD *)(*(int (__thiscall **)(TechnoClass *, _DWORD *))(this->vtable0 + 72))(this, v146); /*0x702702*/
        StartAudioControllerAt(DestructionEffect, v84, 0); /*0x702709*/
      }
      goto LABEL_186; /*0x70270e*/
    case 4: /*0x702049*/
      slaveManager = (TechnoClass *)this->slaveManager; /*0x702050*/
      if ( slaveManager ) /*0x70205a*/
        TechnoClass::MutateAll(slaveManager, SHIDWORD(a3), 0); /*0x702065*/
      if ( this->drainTarget ) /*0x70206a*/
      {
        drainAnim = this->drainAnim; /*0x702072*/
        if ( drainAnim ) /*0x70207a*/
        {
          (*(void (__thiscall **)(int))(*(_DWORD *)drainAnim + 248))(drainAnim); /*0x70207e*/
          this->drainAnim = 0; /*0x702084*/
        }
        drainTarget = this->drainTarget; /*0x70208a*/
        if ( drainTarget ) /*0x702092*/
        {
          *(_DWORD *)(drainTarget + 464) = 0; /*0x702094*/
          v37 = *(_DWORD *)(this->drainTarget + 540); /*0x7020a0*/
          if ( v37 ) /*0x7020a8*/
            *(_BYTE *)(v37 + 22392) = 1; /*0x7020aa*/
          this->drainTarget = 0; /*0x7020b1*/
        }
      }
      drainingMe = this->drainingMe; /*0x7020b7*/
      if ( drainingMe ) /*0x7020c1*/
      {
        v39 = *(_DWORD *)(drainingMe + 468); /*0x7020c3*/
        if ( v39 ) /*0x7020cb*/
        {
          (*(void (__thiscall **)(int))(*(_DWORD *)v39 + 248))(v39); /*0x7020cf*/
          *(_DWORD *)(drainingMe + 468) = 0; /*0x7020d5*/
        }
        v40 = *(_DWORD *)(drainingMe + 460); /*0x7020db*/
        if ( v40 ) /*0x7020e3*/
        {
          *(_DWORD *)(v40 + 464) = 0; /*0x7020e5*/
          v41 = *(_DWORD *)(*(_DWORD *)(drainingMe + 460) + 540); /*0x7020f1*/
          if ( v41 ) /*0x7020f9*/
            *(_BYTE *)(v41 + 22392) = 1; /*0x7020fb*/
          *(_DWORD *)(drainingMe + 460) = 0; /*0x702102*/
        }
      }
      captureManager = (_DWORD *)this->captureManager; /*0x702108*/
      if ( captureManager ) /*0x702110*/
        CaptureManager::FreeAll(captureManager); /*0x702112*/
      if ( *(int *)((*(int (__thiscall **)(TechnoClass *))(this->vtable0 + 132))(this) + 1228) > 0 /*0x702136*/
        && (unsigned __int8)House::IsHumanPlayer((House *)this->owner) )
      {
        v142[0] = this->location[0]; /*0x70214b*/
        v142[1] = this->location[1]; /*0x702154*/
        vtable0 = this->vtable0; /*0x702158*/
        v142[2] = this->location[2]; /*0x70215d*/
        v44 = (*(int (__thiscall **)(TechnoClass *))(vtable0 + 132))(this) + 1212; /*0x70216e*/
        v45 = Random::State(&Randomizer_Global); /*0x702174*/
        StartAudioControllerAt(*(_DWORD *)(*(_DWORD *)(v44 + 4) + 4 * (v45 % *(_DWORD *)(v44 + 16))), v142, 0); /*0x70218b*/
      }
      if ( *(int *)((*(int (__thiscall **)(TechnoClass *))(this->vtable0 + 132))(this) + 1312) > 0 ) /*0x7021a7*/
      {
        v143[0] = this->location[0]; /*0x7021b5*/
        v143[1] = this->location[1]; /*0x7021be*/
        v46 = this->vtable0; /*0x7021c5*/
        v143[2] = this->location[2]; /*0x7021ca*/
        v47 = (*(int (__thiscall **)(TechnoClass *))(v46 + 132))(this) + 1296; /*0x7021de*/
        v48 = Random::State(&Randomizer_Global); /*0x7021e4*/
        StartAudioControllerAt(*(_DWORD *)(*(_DWORD *)(v47 + 4) + 4 * (v48 % *(_DWORD *)(v47 + 16))), v143, 0); /*0x7021fb*/
      }
      (*(void (__thiscall **)(TechnoClass *, int))(this->vtable0 + 640))(this, 3); /*0x702206*/
      (*(void (__thiscall **)(TechnoClass *))(this->vtable0 + 928))(this); /*0x702210*/
      fireParticles = this->fireParticles; /*0x702216*/
      if ( fireParticles ) /*0x70221e*/
      {
        (*(void (__thiscall **)(int))(*(_DWORD *)fireParticles + 248))(fireParticles); /*0x702222*/
        this->fireParticles = 0; /*0x702228*/
      }
      if ( (*(int (__thiscall **)(TechnoClass *))(this->vtable0 + 456))(this) > 10 /*0x70227b*/
        || !this->isBomb[0]
        || (v141[0] = this->location[0],
            v141[1] = this->location[1],
            v141[2] = this->location[2],
            Coord::To_Cell((Coord *)&dword_87F7E8, v141)->landType != 2) )
      {
        if ( *(int *)((*(int (__thiscall **)(TechnoClass *))(this->vtable0 + 132))(this) + 1468) > 0 ) /*0x702293*/
        {
          v50 = *(_DWORD *)((*(int (__thiscall **)(TechnoClass *))(this->vtable0 + 132))(this) + 1468) - 1; /*0x7022ad*/
          v51 = (*(int (__thiscall **)(TechnoClass *))(this->vtable0 + 132))(this); /*0x7022ae*/
          v52 = Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, *(_DWORD *)(v51 + 1472), v50); /*0x7022cf*/
          v119 = v52; /*0x7022d3*/
          if ( *(int *)((*(int (__thiscall **)(TechnoClass *))(this->vtable0 + 132))(this) + 804) > 0 ) /*0x7022ea*/
          {
            v53 = 0; /*0x7022f0*/
            v127 = 0; /*0x7022f4*/
            while ( v52 > 0 ) /*0x7022f8*/
            {
              p_NeedsSaveOrLink = (Random *)&dword_A8B230[14].NeedsSaveOrLink; /*0x70230c*/
              v54 = 4 * v53; /*0x70231f*/
              v55 = (_DWORD *)(4 * v53 /*0x702329*/
                             + *(_DWORD *)((*(int (__thiscall **)(TechnoClass *))(this->vtable0 + 132))(this) + 820));
              v56 = (int)abs32(Random::State(p_NeedsSaveOrLink)) % (*v55 + 1); /*0x702339*/
              v126 = v56; /*0x70233d*/
              if ( v56 >= v52 ) /*0x702341*/
              {
                v56 = v52; /*0x702343*/
                v126 = v52; /*0x702345*/
              }
              if ( v56 > 0 ) /*0x70234b*/
              {
                v138 = v56; /*0x70234d*/
                do /*0x7023a5*/
                {
                  v57 = (VoxelAnimClass *)__2_YAPAXI_Z(0x148u); /*0x70235b*/
                  if ( v57 ) /*0x702362*/
                  {
                    v58 = (*(int (__thiscall **)(TechnoClass *, _DWORD *))(this->vtable0 + 132))(this, owner); /*0x702368*/
                    owner = (_DWORD *)this->owner; /*0x702381*/
                    v59 = (int *)(v54 + *(_DWORD *)(v58 + 792)); /*0x70238c*/
                    v60 = (int *)(*(int (__thiscall **)(TechnoClass *))(this->vtable0 + 72))(this); /*0x70238e*/
                    DamageAnimClass::Constructor(v57, *v59, v60, (int)v147); /*0x702397*/
                  }
                  --v138; /*0x7023a1*/
                }
                while ( v138 ); /*0x7023a5*/
              }
              v52 = v119 - v126; /*0x7023b5*/
              v119 -= v126; /*0x7023ba*/
              v53 = ++v127; /*0x7023b7*/
              if ( v127 >= *(_DWORD *)((*(int (__thiscall **)(TechnoClass *))(this->vtable0 + 132))(this) + 804) ) /*0x7023d5*/
              {
                v53 = 0; /*0x7023d7*/
                v127 = 0; /*0x7023d9*/
              }
            }
          }
          if ( *(int *)((*(int (__thiscall **)(TechnoClass *))(this->vtable0 + 132))(this) + 1492) <= 0 ) /*0x7023fc*/
          {
            if ( !*(_DWORD *)((*(int (__thiscall **)(TechnoClass *))(this->vtable0 + 132))(this) + 804) && v52 > 0 ) /*0x7024da*/
            {
              do /*0x70256c*/
              {
                v71 = (AnimClass *)__2_YAPAXI_Z(0x1C8u); /*0x7024ea*/
                if ( v71 ) /*0x7024f1*/
                {
                  v72 = (int *)(*(int (__thiscall **)(TechnoClass *, void ***))(this->vtable0 + 72))(this, &v128); /*0x7024fc*/
                  v73 = *v72; /*0x7024ff*/
                  v74 = v72[1]; /*0x702501*/
                  v75 = v72[2]; /*0x702504*/
                  v145[1] = v74; /*0x702507*/
                  v145[0] = v73; /*0x702517*/
                  v145[2] = v75 + 20; /*0x70251e*/
                  v76 = Random::Range( /*0x70253a*/
                          (Random *)&dword_A8B230[14].NeedsSaveOrLink,
                          0,
                          dword_8871E0->ExecutePlanSound - 1);
                  AnimClass::ctor( /*0x702566*/
                    v71,
                    *(void **)(dword_8871E0->DefaultChronoSound + 4 * v76),
                    v145,
                    0,
                    1,
                    (void *)0x600,
                    0,
                    0);
                }
                --v52; /*0x70256b*/
              }
              while ( v52 ); /*0x70256c*/
            }
          }
          else if ( v52 > 0 ) /*0x702404*/
          {
            v61 = v52; /*0x70240a*/
            do /*0x7024b0*/
            {
              v62 = (AnimClass *)__2_YAPAXI_Z(0x1C8u); /*0x702416*/
              if ( v62 ) /*0x70241d*/
              {
                v63 = (int *)(*(int (__thiscall **)(TechnoClass *, int *))(this->vtable0 + 72))(this, v148); /*0x70242f*/
                v64 = *v63; /*0x702432*/
                v65 = v63[1]; /*0x702434*/
                v66 = v63[2]; /*0x702437*/
                v144[1] = v65; /*0x70243a*/
                v67 = this->vtable0; /*0x702441*/
                v144[0] = v64; /*0x702446*/
                v144[2] = v66 + 20; /*0x70244f*/
                v68 = (*(int (__thiscall **)(TechnoClass *))(v67 + 132))(this); /*0x702456*/
                v69 = Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, *(_DWORD *)(v68 + 1492) - 1); /*0x70247c*/
                v70 = (*(int (__thiscall **)(TechnoClass *))(this->vtable0 + 132))(this); /*0x70247e*/
                AnimClass::ctor(v62, *(void **)(*(_DWORD *)(v70 + 1480) + 4 * v69), v144, 0, 1, (void *)0x600, 0, 0); /*0x7024aa*/
              }
              --v61; /*0x7024af*/
            }
            while ( v61 ); /*0x7024b0*/
          }
        }
        v77 = *(_DWORD *)(*(int (__thiscall **)(TechnoClass *, int))(this->vtable0 + 1016))( /*0x702585*/
                           this,
                           this->currentWeaponSlot);
        if ( *(_BYTE *)((*(int (__thiscall **)(TechnoClass *))(this->vtable0 + 132))(this) + 3349) /*0x7025f9*/
          || ((unsigned __int8)Audio::IsMediumVolume(&this->veterancy)
           || (unsigned __int8)Audio::IsLoud(&this->veterancy))
          && ((v78 = (*(int (__thiscall **)(TechnoClass *))(this->vtable0 + 132))(this),
               (unsigned __int8)Audio::IsMediumVolume(&this->veterancy))
           && *(_BYTE *)(v78 + 678)
           || (unsigned __int8)Audio::IsLoud(&this->veterancy) && (*(_BYTE *)(v78 + 678) || *(_BYTE *)(v78 + 696)))
          || v77 && *(_BYTE *)(v77 + 324) )
        {
          while ( this->passengers[1] ) /*0x702603*/
          {
            DB = CCINIClass::GetDB((CCINIClass *)this->passengers); /*0x70261c*/
            v80 = *(int **)(DB + 1492); /*0x702621*/
            if ( v80 ) /*0x702629*/
              TeamClass::LiberateMember_Start(v80, DB, 0xFFFFFFFF, 0); /*0x702630*/
            v81 = (TechnoClass *)LinkedList::Pop((LinkedList *)this->passengers); /*0x702637*/
            v82 = v81; /*0x70263c*/
            if ( v81 ) /*0x702640*/
            {
              TechnoClass::CleanupAll(v81, (int)v81); /*0x702645*/
              (*(void (__thiscall **)(TechnoClass *, _DWORD))(v82->vtable0 + 224))(v82, HIDWORD(a3)); /*0x70264f*/
              (*(void (__thiscall **)(TechnoClass *))(v82->vtable0 + 248))(v82); /*0x702659*/
            }
          }
          TechnoClass::ComputeCombatDamage(this, 0); /*0x70266d*/
        }
      }
      attachedBomb = (TechnoClass *)this->attachedBomb; /*0x702672*/
      if ( attachedBomb ) /*0x702677*/
        TechnoClass::ApplyDamageEffects(attachedBomb); /*0x70267f*/
      return result; /*0x702692*/
    default:
LABEL_176:
      if ( *(_DWORD *)((*(int (__thiscall **)(TechnoClass *))(this->vtable0 + 132))(this) + 1336) != -1 ) /*0x70272c*/
      {
        v139[0] = this->location[0]; /*0x70273c*/
        v139[1] = this->location[1]; /*0x702745*/
        v85 = this->vtable0; /*0x702749*/
        v140 = this->location[2]; /*0x70274e*/
        v86 = (*(int (__thiscall **)(TechnoClass *))(v85 + 132))(this); /*0x702752*/
        PlayAudioAt2(*(_DWORD *)(v86 + 1336), v139, 0); /*0x702760*/
      }
      if ( *(_DWORD *)((*(int (__thiscall **)(TechnoClass *))(this->vtable0 + 132))(this) + 1336) != -1 ) /*0x702775*/
      {
        v135 = this->location[0]; /*0x702785*/
        v87 = this->vtable0; /*0x702789*/
        v136 = this->location[1]; /*0x70278e*/
        v137 = this->location[2]; /*0x702795*/
        v88 = (*(int (__thiscall **)(TechnoClass *))(v87 + 132))(this); /*0x70279b*/
        PlayAudioAt2(*(_DWORD *)(v88 + 1336), &v135, 0); /*0x7027a9*/
      }
      if ( (*(_BYTE *)((*(int (__thiscall **)(TechnoClass *))(this->vtable0 + 132))(this) + 3222) /*0x7027e4*/
         || this->isReceivingDamageEffect[0])
        && !(unsigned __int8)House::IsCurrentPlayer((House *)this->owner)
        && HIDWORD(a3) )
      {
        TechnoClass::EvaluateMission(this, SHIDWORD(a3)); /*0x7027e9*/
      }
      if ( DestructionEffect == 4 ) /*0x7027f1*/
        return result; /*0x7027f1*/
LABEL_186:
      if ( HIDWORD(a3) && !(unsigned __int8)Object::IsAlliedWithObjectHouse((Object *)this->owner, SHIDWORD(a3)) ) /*0x702809*/
        this->hasBeenAttacked[0] = 1; /*0x702812*/
      (*(void (__thiscall **)(TechnoClass *))(this->vtable0 + 252))(this); /*0x70281d*/
      BuildingClass::GetHealthRatio((BuildingClass *)this); /*0x702825*/
      if ( result <= *(double *)&dword_8871E0->HomingScatter ) /*0x70283a*/
      {
        if ( v122 == 2 || v122 == 3 ) /*0x702863*/
        {
          Block = 0; /*0x70286d*/
          v130 = 0; /*0x702871*/
          v132 = 0; /*0x702875*/
          v133 = 0; /*0x702879*/
          v90 = this->vtable0; /*0x70287d*/
          v131 = 1; /*0x70287f*/
          v128 = &DynamicVectorClass<ParticleSystemTypeClass const *>::`vftable'; /*0x702884*/
          v134 = 10; /*0x70288c*/
          for ( i = *(_DWORD *)((*(int (__thiscall **)(TechnoClass *))(v90 + 132))(this) + 1928) - 1; i >= 0; --i ) /*0x7028a6*/
          {
            if ( !*(_DWORD *)(*(_DWORD *)(*(_DWORD *)((*(int (__thiscall **)(TechnoClass *))(this->vtable0 + 132))(this) /*0x7028c8*/
                                                    + 1916)
                                        + 4 * i)
                            + 692) )
            {
              DestructionEffect = 4 * i /*0x7028eb*/
                                + *(_DWORD *)((*(int (__thiscall **)(TechnoClass *))(this->vtable0 + 132))(this) + 1916);
              if ( v133 < v130 /*0x702916*/
                || (v132 || !v130)
                && v134 > 0
                && ((unsigned __int8 (__thiscall *)(void ***, int, _DWORD))v128[2])(&v128, v134 + v130, 0) )
              {
                v92 = v133++; /*0x702925*/
                *((_DWORD *)Block + v92) = *(_DWORD *)DestructionEffect; /*0x70292e*/
              }
            }
          }
          if ( !this->damageParticles /*0x70295f*/
            && v133 > 0
            && (*(int (__thiscall **)(TechnoClass *))(this->vtable0 + 456))(this) > -10 )
          {
            result = ((double (__thiscall *)(TechnoClass *))*(_DWORD *)(this->vtable0 + 132))(this); /*0x702971*/
            UpgradeOffset = BuildingTypeClass::GetUpgradeOffset( /*0x702979*/
                              (BuildingTypeClass *)v146,
                              (int *)DestructionEffect,
                              result,
                              owner);
            v94 = *UpgradeOffset; /*0x70297e*/
            v95 = UpgradeOffset[1]; /*0x702985*/
            v140 = UpgradeOffset[2]; /*0x70298b*/
            v96 = (int *)__2_YAPAXI_Z(0x100u); /*0x702994*/
            if ( v96 ) /*0x70299b*/
            {
              v97 = this->location[1]; /*0x7029ad*/
              v135 = v94 + this->location[0]; /*0x7029b0*/
              v98 = this->location[2]; /*0x7029ba*/
              v136 = v95 + v97; /*0x7029bd*/
              v137 = v140 + v98; /*0x7029d3*/
              v99 = Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, v133 - 1); /*0x7029d7*/
              v100 = ParticleSystemClass::Constructor(v96, *((_DWORD *)Block + v99), &v135, 0, this, &dword_B0EA90, 0); /*0x7029f5*/
            }
            else
            {
              v100 = 0; /*0x7029fc*/
            }
            this->damageParticles = v100; /*0x7029fe*/
          }
          v128 = &VectorClass<ParticleSystemTypeClass const *>::`vftable'; /*0x702a08*/
          if ( Block && v132 ) /*0x702a1a*/
            __3_YAXPAX_Z(Block); /*0x702a1d*/
        }
      }
      else
      {
        damageParticles = this->damageParticles; /*0x70283c*/
        if ( damageParticles ) /*0x702844*/
          (*(void (__thiscall **)(int))(*(_DWORD *)damageParticles + 248))(damageParticles); /*0x70284c*/
      }
      if ( v113 ) /*0x702a2b*/
        return result; /*0x702a2b*/
      if ( ValidateAttackTarget((int)this, (int *)HIDWORD(a3), SLODWORD(a3)) ) /*0x702a43*/
      {
        if ( HIDWORD(a3) ) /*0x702a52*/
        {
          v101 = (*(int (__thiscall **)(TechnoClass *, _DWORD))(this->vtable0 + 740))(this, HIDWORD(a3)); /*0x702a5d*/
          if ( (*(unsigned __int8 (__thiscall **)(TechnoClass *, _DWORD, int))(this->vtable0 + 936))( /*0x702a69*/
                 this,
                 HIDWORD(a3),
                 v101) )
          {
            goto LABEL_219; /*0x702a69*/
          }
          if ( !(unsigned __int8)House::IsCurrentPlayer((House *)this->owner) ) /*0x702a7d*/
            goto LABEL_219; /*0x702a7d*/
          v102 = (_DWORD *)(*(int (__thiscall **)(_DWORD, _DWORD *))(*(_DWORD *)HIDWORD(a3) + 72))(HIDWORD(a3), v146); /*0x702a9d*/
          v103 = (_DWORD *)(*(int (__thiscall **)(TechnoClass *, void ***))(this->vtable0 + 72))(this, &v128); /*0x702aa4*/
          v121 = v103[2] - v102[2]; /*0x702ac5*/
          v104 = (double)(v103[1] - v102[1]); /*0x702ac9*/
          v105 = (double)(*v103 - *v102); /*0x702ad1*/
          Math::Sqrt(v105 * v105 + (double)v121 * (double)v121 + v104 * v104); /*0x702af1*/
          v108 = Math::RoundToInt(result); /*0x702af9*/
          LOWORD(v107) = HIWORD(v108); /*0x702af9*/
          LOWORD(v106) = v108; /*0x702af9*/
          v120 = (double)v106; /*0x702b0a*/
          result = ((double)*(int *)((*(int (__fastcall **)(TechnoClass *, int))(this->vtable0 + 132))(this, v107) + 1512) /*0x702b20*/
                  + 0.5)
                 * 256.0;
          if ( result >= v120 ) /*0x702b2f*/
LABEL_219:
            (*(void (__thiscall **)(TechnoClass *, int, _DWORD, _DWORD))(this->vtable0 + 500))(this, 1, HIDWORD(a3), 0); /*0x702b41*/
        }
        if ( this && (this->abstractFlags & 4) != 0 && !this->target && !*((_DWORD *)this + 361) ) /*0x702b67*/
        {
          if ( BYTE1(dword_8871E0->ElevationBonusCap[0]) ) /*0x702b7b*/
            return ((double (__thiscall *)(TechnoClass *, _DWORD *, int, _DWORD))*(_DWORD *)(this->vtable0 + 372))( /*0x702b7b*/
                     this,
                     &dword_B0EA90,
                     1,
                     0);
          if ( (unsigned __int8)Audio::IsMediumVolume(&this->veterancy) /*0x702b9c*/
            || (unsigned __int8)Audio::IsLoud(&this->veterancy) )
          {
            v109 = (*(int (__thiscall **)(TechnoClass *))(this->vtable0 + 132))(this); /*0x702bb5*/
            if ( (unsigned __int8)Audio::IsMediumVolume(&this->veterancy) ) /*0x702bb7*/
            {
              if ( *(_BYTE *)(v109 + 671) ) /*0x702bc0*/
                return ((double (__thiscall *)(TechnoClass *, _DWORD *, int, _DWORD))*(_DWORD *)(this->vtable0 + 372))( /*0x702bc0*/
                         this,
                         &dword_B0EA90,
                         1,
                         0);
            }
            if ( (unsigned __int8)Audio::IsLoud(&this->veterancy) && (*(_BYTE *)(v109 + 671) || *(_BYTE *)(v109 + 689)) ) /*0x702beb*/
              return ((double (__thiscall *)(_DWORD, _DWORD, _DWORD, _DWORD))*(_DWORD *)(this->vtable0 + 372))( /*0x702d0b*/
                       this,
                       &dword_B0EA90,
                       1,
                       0);
          }
        }
      }
      else if ( this && (this->abstractFlags & 4) != 0 && MissionClass::GetMissionControl(this)[9] && !this->isTether[0] ) /*0x702c22*/
      {
        if ( !*((_DWORD *)this + 413) ) /*0x702c30*/
          WinAPI::Wrapper(-2147467261); /*0x702c3f*/
        if ( !(*(unsigned __int8 (__stdcall **)(_DWORD))(**((_DWORD **)this + 413) + 16))(*((_DWORD *)this + 413)) /*0x702c7e*/
          && !this->target
          && !*((_DWORD *)this + 361)
          && (*(int (__thiscall **)(TechnoClass *))(this->vtable0 + 44))(this) != 2 )
        {
          if ( !(unsigned __int8)House::IsCurrentPlayer((House *)this->owner) /*0x702c98*/
            || BYTE1(dword_8871E0->ElevationBonusCap[0]) )
          {
            return ((double (__thiscall *)(_DWORD, _DWORD, _DWORD, _DWORD))*(_DWORD *)(this->vtable0 + 372))( /*0x702c98*/
                     this,
                     &dword_B0EA90,
                     1,
                     0);
          }
          if ( (unsigned __int8)Audio::IsMediumVolume(&this->veterancy) /*0x702cb5*/
            || (unsigned __int8)Audio::IsLoud(&this->veterancy) )
          {
            v110 = (*(int (__thiscall **)(TechnoClass *))(this->vtable0 + 132))(this); /*0x702cca*/
            if ( (unsigned __int8)Audio::IsMediumVolume(&this->veterancy) ) /*0x702ccc*/
            {
              if ( *(_BYTE *)(v110 + 671) ) /*0x702cd5*/
                return ((double (__thiscall *)(_DWORD, _DWORD, _DWORD, _DWORD))*(_DWORD *)(this->vtable0 + 372))( /*0x702cd5*/
                         this,
                         &dword_B0EA90,
                         1,
                         0);
            }
            if ( (unsigned __int8)Audio::IsLoud(&this->veterancy) && (*(_BYTE *)(v110 + 671) || *(_BYTE *)(v110 + 689)) ) /*0x702cf4*/
              return ((double (__thiscall *)(_DWORD, _DWORD, _DWORD, _DWORD))*(_DWORD *)(this->vtable0 + 372))( /*0x702cfc*/
                       this,
                       &dword_B0EA90,
                       1,
                       0);
          }
        }
      }
      break; /*0x702d0b*/
  }
  return result; /*0x701a2e*/
}


// ==== 0x00702D40  TechnoClass::RegisterKill  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::RegisterKill(TechnoClass *this)
{
  int v2; // eax
  int v3; // ebp
  TeamClass *attachedTag; // ecx
  TeamClass *v5; // ecx
  TeamClass *v6; // ecx
  TeamClass *v7; // ecx
  TeamClass *v8; // ecx
  int result; // eax
  int v10; // ecx
  int v11; // eax
  int v12; // eax
  int v13; // ecx
  int v14; // eax
  int v15; // eax
  int v16; // ebx
  _DWORD *v17; // eax
  _DWORD *v18; // eax
  int v19; // [esp-Ch] [ebp-1Ch]
  int v20; // [esp-Ch] [ebp-1Ch]
  int v21; // [esp-Ch] [ebp-1Ch]
  int v22; // [esp-Ch] [ebp-1Ch]
  HouseClass *owner; // [esp-8h] [ebp-18h]
  HouseClass *v24; // [esp-8h] [ebp-18h]
  HouseClass *v25; // [esp-8h] [ebp-18h]
  HouseClass *v26; // [esp-8h] [ebp-18h]
  int v27; // [esp+Ch] [ebp-4h]
  int v28; // [esp+14h] [ebp+4h]

  v27 = 0; /*0x702d46*/
  v2 = (*((int (__thiscall **)(TechnoClass *))this->RadioClass + 33))(this); /*0x702d50*/
  v3 = (*(int (__thiscall **)(int, HouseClass *))(*(_DWORD *)v2 + 132))(v2, this->owner); /*0x702d6b*/
  if ( this->? ) /*0x702d6d*/
  {
    attachedTag = (TeamClass *)this->?; /*0x702d77*/
    if ( attachedTag ) /*0x702d7c*/
    {
      if ( v28 ) /*0x702d80*/
        TeamClass::Update_0(attachedTag, 6, (int)this, *(int *)&g_BuildingLoadQueue_Array.?[24], 0, 0); /*0x702d90*/
    }
  }
  if ( this->? ) /*0x702d95*/
  {
    v5 = (TeamClass *)this->?; /*0x702da3*/
    if ( v5 && v28 ) /*0x702dac*/
      TeamClass::Update_0(v5, 4, (int)this, *(int *)&g_BuildingLoadQueue_Array.?[24], 0, 0); /*0x702dbb*/
    if ( this->? && (*((int (__thiscall **)(TechnoClass *))this->RadioClass + 11))(this) != 1 && this->? ) /*0x702dd6*/
    {
      v6 = (TeamClass *)this->?; /*0x702de0*/
      if ( v6 && v28 ) /*0x702de9*/
        TeamClass::Update_0(v6, 7, (int)this, *(int *)&g_BuildingLoadQueue_Array.?[24], 0, 0); /*0x702df8*/
      if ( this->? ) /*0x702dfd*/
      {
        v7 = (TeamClass *)this->?; /*0x702e07*/
        if ( v7 ) /*0x702e0c*/
          TeamClass::Update_0(v7, 48, (int)this, *(int *)&g_BuildingLoadQueue_Array.?[24], 0, 0); /*0x702e1c*/
        if ( this->? ) /*0x702e21*/
        {
          v8 = (TeamClass *)this->?; /*0x702e2b*/
          if ( v8 ) /*0x702e30*/
            TeamClass::Update_0(v8, 29, (int)this, *(int *)&g_BuildingLoadQueue_Array.?[24], 0, 0); /*0x702e3f*/
        }
      }
    }
  }
  result = (*((int (__thiscall **)(TechnoClass *))this->RadioClass + 33))(this); /*0x702e48*/
  if ( !*(_BYTE *)(result + 3231) )
  {
    if ( v28 )
    {
      if ( (unsigned __int8)Object::IsAlliedWithObjectHouse(*(Object **)(v28 + 540), (int)this) ) /*0x702e6c*/
      {
        v3 = 0; /*0x702e75*/
      }
      else if ( (unsigned __int8)Audio::IsMediumVolume(this->veterancy) ) /*0x702e81*/
      {
        v3 *= 2; /*0x702e8a*/
      }
      else if ( (unsigned __int8)Audio::IsLoud(this->veterancy) ) /*0x702e90*/
      {
        v3 *= 3; /*0x702e99*/
      }
      if ( *(_BYTE *)(v28 + 130)
        && (v10 = *(_DWORD *)(v28 + 284)) != 0
        && *(_BYTE *)((*(int (__thiscall **)(int))(*(_DWORD *)v10 + 132))(v10) + 3214) )
      {
        v11 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(v28 + 284) + 132))(*(_DWORD *)(v28 + 284)); /*0x702ecb*/
        owner = this->owner; /*0x702eda*/
        v19 = (*(int (__thiscall **)(int))(*(_DWORD *)v11 + 132))(v11); /*0x702ee9*/
        HouseClass::AccumulateScore((int *)(*(_DWORD *)(v28 + 284) + 336), v19, (int)owner); /*0x702ef0*/
      }
      else if ( *(_BYTE *)((*(int (__thiscall **)(int))(*(_DWORD *)v28 + 132))(v28) + 3214) )
      {
        v12 = (*(int (__thiscall **)(int))(*(_DWORD *)v28 + 132))(v28); /*0x702f0d*/
        v24 = this->owner; /*0x702f1c*/
        v20 = (*(int (__thiscall **)(int))(*(_DWORD *)v12 + 132))(v12); /*0x702f25*/
        HouseClass::AccumulateScore((int *)(v28 + 336), v20, (int)v24); /*0x702f2c*/
      }
      else if ( *(_BYTE *)((*(int (__thiscall **)(int))(*(_DWORD *)v28 + 132))(v28) + 3432) )
      {
        v13 = *(_DWORD *)(v28 + 724); /*0x702f45*/
        if ( v13 && *(_BYTE *)((*(int (__thiscall **)(int))(*(_DWORD *)v13 + 132))(v13) + 3214) ) /*0x702f5b*/
        {
          v14 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(v28 + 724) + 132))(*(_DWORD *)(v28 + 724)); /*0x702f71*/
          v25 = this->owner; /*0x702f80*/
          v21 = (*(int (__thiscall **)(int))(*(_DWORD *)v14 + 132))(v14); /*0x702f8f*/
          HouseClass::AccumulateScore((int *)(*(_DWORD *)(v28 + 724) + 336), v21, (int)v25); /*0x702f96*/
        }
      }
      else if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v28 + 1024))(v28)
             && (*(int (__thiscall **)(int))(*(_DWORD *)v28 + 44))(v28) == 6 )
      {
        v15 = (*(int (__thiscall **)(int))(*(_DWORD *)v28 + 44))(v28); /*0x702fb6*/
        v16 = *(_DWORD *)(*(_DWORD *)(v15 == 6 ? v28 + 0x688 : 1672) + 4 * *(_DWORD *)(v15 == 6 ? v28 + 0x69C : 1692));
        v26 = this->owner; /*0x702fda*/
        v22 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(v16 + 1728) + 132))(*(_DWORD *)(v16 + 1728)); /*0x702fe9*/
        HouseClass::AccumulateScore((int *)(v16 + 336), v22, (int)v26); /*0x702ff0*/
      }
      this->owner->HouseClass_field_548C = (*(int (__thiscall **)(int))(*(_DWORD *)v28 + 56))(v28); /*0x703003*/
      *(_DWORD *)(*(_DWORD *)(v28 + 540) + 21736) += v3; /*0x70300f*/
    }
    result = (*((int (__thiscall **)(TechnoClass *))this->RadioClass + 11))(this) - 1; /*0x70301c*/
    switch ( result ) /*0x70302e*/
    {
      case 0: /*0x70302e*/
        goto LABEL_59;
      case 1: /*0x70302e*/
        if ( !v28 ) /*0x7030d5*/
          goto LABEL_63; /*0x7030d5*/
        if ( !*(_BYTE *)((*((int (__thiscall **)(TechnoClass *))this->RadioClass + 33))(this) + 3231) ) /*0x7030e5*/
        {
          HouseClass::IncrementStat( /*0x703108*/
            (HouseClass *)(*(_DWORD *)(v28 + 540) + 9032),
            *(_DWORD *)(*((_DWORD *)this + 433) + 3576));
          v27 = 1; /*0x70310d*/
        }
LABEL_55:
        if ( v28 ) /*0x703117*/
        {
          if ( !v27 && !*(_BYTE *)((*((int (__thiscall **)(TechnoClass *))this->RadioClass + 33))(this) + 3231) ) /*0x70312f*/
          {
            HouseClass::IncrementStat( /*0x703152*/
              (HouseClass *)(*(_DWORD *)(v28 + 540) + 11088),
              *(_DWORD *)(this->airstrikeTimer + 3576));
            v27 = 1; /*0x703157*/
          }
LABEL_59:
          if ( v28 && !v27 && !*(_BYTE *)((*((int (__thiscall **)(TechnoClass *))this->RadioClass + 33))(this) + 3231) ) /*0x703175*/
            HouseClass::IncrementStat( /*0x703198*/
              (HouseClass *)(*(_DWORD *)(v28 + 540) + 13144),
              *(_DWORD *)(*((_DWORD *)this + 433) + 3576));
        }
LABEL_63:
        ++this->owner->killedBuildingsOfHouses[0]; /*0x70319d*/
        if ( v28 ) /*0x7031b2*/
        {
          if ( !*(_BYTE *)((*((int (__thiscall **)(TechnoClass *))this->RadioClass + 33))(this) + 3231) ) /*0x7031be*/
          {
            v18 = (_DWORD *)(*(_DWORD *)(v28 + 540) /*0x7031d5*/
                           + 4 * (*((int (__thiscall **)(TechnoClass *))this->RadioClass + 14))(this)
                           + 21476);
            ++*v18; /*0x7031dc*/
          }
        }
        result = RadarClass::IsActiveMode((RadarClass *)&stru_87F5F0.__pad_58[416]); /*0x7031e3*/
        if ( (_BYTE)result ) /*0x7031ea*/
LABEL_67:
          result = RadarClass::SetFlag((RadarClass *)&stru_87F5F0.__pad_58[416], 0); /*0x7031ec*/
        break; /*0x7031f3*/
      case 5: /*0x70302e*/
        result = (*((int (__thiscall **)(TechnoClass *))this->RadioClass + 33))(this); /*0x703039*/
        if ( !*(_BYTE *)(result + 562) ) /*0x70303f*/
        {
          if ( *((_DWORD *)this + 335) != -1 ) /*0x703054*/
            ++*(_DWORD *)this->owner->__pad_5488; /*0x70305c*/
          if ( v28 && !*(_BYTE *)((*((int (__thiscall **)(TechnoClass *))this->RadioClass + 33))(this) + 3231) ) /*0x703070*/
          {
            HouseClass::IncrementStat( /*0x703093*/
              (HouseClass *)(*(_DWORD *)(v28 + 540) + 15200),
              *(_DWORD *)(this->gattlingValue + 3576));
            v17 = (_DWORD *)(*(_DWORD *)(v28 + 540) /*0x7030a5*/
                           + 4 * (*((int (__thiscall **)(TechnoClass *))this->RadioClass + 14))(this)
                           + 21560);
            ++*v17; /*0x7030ac*/
          }
          result = RadarClass::IsActiveMode((RadarClass *)&stru_87F5F0.__pad_58[416]); /*0x7030b3*/
          if ( (_BYTE)result ) /*0x7030ba*/
            goto LABEL_67; /*0x7030ba*/
        }
        return result; /*0x7030ba*/
      case 14: /*0x70302e*/
        goto LABEL_55;
      default:
        return result;
    }
  }
  return result; /*0x7030cc*/
}



// ==== 0x00703230  TechnoClass::RegisterKill  this=TechnoClass  sig=csp ====
int __thiscall InfantryClass::RegisterKill(TechnoClass *this)
{
  int v2; // eax
  int v3; // ebp
  TeamClass *attachedTag; // ecx
  TeamClass *v5; // ecx
  TeamClass *v6; // ecx
  TeamClass *v7; // ecx
  TeamClass *v8; // ecx
  int result; // eax
  int v10; // eax
  int v11; // eax
  int v12; // [esp+Ch] [ebp-4h]
  Object *v13; // [esp+14h] [ebp+4h]

  v12 = 0; /*0x703236*/
  v2 = (*((int (__thiscall **)(TechnoClass *))this->RadioClass + 33))(this); /*0x703240*/
  v3 = (*(int (__thiscall **)(int, HouseClass *))(*(_DWORD *)v2 + 132))(v2, this->owner); /*0x70325b*/
  if ( this->? ) /*0x70325d*/
  {
    attachedTag = (TeamClass *)this->?; /*0x703267*/
    if ( attachedTag ) /*0x70326c*/
    {
      if ( v13 ) /*0x703270*/
        TeamClass::Update_0(attachedTag, 6, (int)this, *(int *)&g_BuildingLoadQueue_Array.?[24], 0, 0); /*0x703280*/
    }
  }
  if ( this->? ) /*0x703285*/
  {
    v5 = (TeamClass *)this->?; /*0x703293*/
    if ( v5 && v13 ) /*0x70329c*/
      TeamClass::Update_0(v5, 4, (int)this, *(int *)&g_BuildingLoadQueue_Array.?[24], 0, 0); /*0x7032ab*/
    if ( this->? && (*((int (__thiscall **)(TechnoClass *))this->RadioClass + 11))(this) != 1 && this->? ) /*0x7032c6*/
    {
      v6 = (TeamClass *)this->?; /*0x7032d0*/
      if ( v6 && v13 ) /*0x7032d9*/
        TeamClass::Update_0(v6, 7, (int)this, *(int *)&g_BuildingLoadQueue_Array.?[24], 0, 0); /*0x7032e8*/
      if ( this->? ) /*0x7032ed*/
      {
        v7 = (TeamClass *)this->?; /*0x7032f7*/
        if ( v7 ) /*0x7032fc*/
          TeamClass::Update_0(v7, 48, (int)this, *(int *)&g_BuildingLoadQueue_Array.?[24], 0, 0); /*0x70330c*/
        if ( this->? ) /*0x703311*/
        {
          v8 = (TeamClass *)this->?; /*0x70331b*/
          if ( v8 ) /*0x703320*/
            TeamClass::Update_0(v8, 29, (int)this, *(int *)&g_BuildingLoadQueue_Array.?[24], 0, 0); /*0x70332f*/
        }
      }
    }
  }
  if ( v13 ) /*0x703336*/
  {
    if ( (unsigned __int8)Object::IsAlliedWithObjectHouse(v13, (int)this) ) /*0x70333c*/
    {
      v3 = 0; /*0x703345*/
    }
    else if ( (unsigned __int8)Audio::IsMediumVolume(this->veterancy) ) /*0x703351*/
    {
      v3 *= 2; /*0x70335a*/
    }
    else if ( (unsigned __int8)Audio::IsLoud(this->veterancy) ) /*0x703360*/
    {
      v3 *= 3; /*0x703369*/
    }
    this->owner->HouseClass_field_548C = (int)v13->Object_field_0x30; /*0x703377*/
    v13[32].Object_field_0xE8 = (char *)v13[32].Object_field_0xE8 + v3; /*0x703385*/
  }
  result = (*((int (__thiscall **)(TechnoClass *))this->RadioClass + 11))(this) - 1; /*0x703392*/
  switch ( result ) /*0x7033a4*/
  {
    case 0: /*0x7033a4*/
      goto LABEL_45;
    case 1: /*0x7033a4*/
      if ( !v13 ) /*0x703447*/
        goto LABEL_49; /*0x703447*/
      if ( !*(_BYTE *)((*((int (__thiscall **)(TechnoClass *))this->RadioClass + 33))(this) + 3231) ) /*0x703457*/
      {
        HouseClass::IncrementStat((HouseClass *)&v13[13].__pad_EC[60], *(_DWORD *)(*((_DWORD *)this + 433) + 3576)); /*0x703474*/
        v12 = 1; /*0x703479*/
      }
LABEL_41:
      if ( v13 ) /*0x703483*/
      {
        if ( !v12 && !*(_BYTE *)((*((int (__thiscall **)(TechnoClass *))this->RadioClass + 33))(this) + 3231) ) /*0x703497*/
        {
          HouseClass::IncrementStat((HouseClass *)&v13[16].__pad_140[16], *(_DWORD *)(this->airstrikeTimer + 3576)); /*0x7034b4*/
          v12 = 1; /*0x7034b9*/
        }
LABEL_45:
        if ( v13 && !v12 && !*(_BYTE *)((*((int (__thiscall **)(TechnoClass *))this->RadioClass + 33))(this) + 3231) ) /*0x7034d7*/
          HouseClass::IncrementStat((HouseClass *)&v13[19].__pad_140[56], *(_DWORD *)(*((_DWORD *)this + 433) + 3576)); /*0x7034f4*/
      }
LABEL_49:
      ++this->owner->killedBuildingsOfHouses[0]; /*0x7034f9*/
      if ( v13 ) /*0x70350e*/
      {
        if ( !*(_BYTE *)((*((int (__thiscall **)(TechnoClass *))this->RadioClass + 33))(this) + 3231) ) /*0x70351a*/
        {
          v11 = (*((int (__thiscall **)(TechnoClass *))this->RadioClass + 14))(this); /*0x703528*/
          ++*(_DWORD *)&v13[31].__pad_140[4 * v11 + 324]; /*0x70353a*/
        }
      }
      result = RadarClass::IsActiveMode((RadarClass *)&stru_87F5F0.__pad_58[416]); /*0x703541*/
      if ( (_BYTE)result ) /*0x703548*/
        return RadarClass::SetFlag((RadarClass *)&stru_87F5F0.__pad_58[416], 0); /*0x70354a*/
      return result;
    case 5: /*0x7033a4*/
      result = (*((int (__thiscall **)(TechnoClass *))this->RadioClass + 33))(this); /*0x7033af*/
      if ( !*(_BYTE *)(result + 562) ) /*0x7033b5*/
      {
        if ( *((_DWORD *)this + 335) != -1 ) /*0x7033ca*/
          ++*(_DWORD *)this->owner->__pad_5488; /*0x7033d2*/
        if ( v13 && !*(_BYTE *)((*((int (__thiscall **)(TechnoClass *))this->RadioClass + 33))(this) + 3231) ) /*0x7033e6*/
        {
          HouseClass::IncrementStat((HouseClass *)&v13[22].__pad_140[96], *(_DWORD *)(this->gattlingValue + 3576)); /*0x703403*/
          v10 = (*((int (__thiscall **)(TechnoClass *))this->RadioClass + 14))(this); /*0x70340c*/
          ++*(_DWORD *)&v13[32].__pad_38[4 * v10]; /*0x70341e*/
        }
        result = RadarClass::IsActiveMode((RadarClass *)&stru_87F5F0.__pad_58[416]); /*0x703425*/
        if ( (_BYTE)result ) /*0x70342c*/
          return RadarClass::SetFlag((RadarClass *)&stru_87F5F0.__pad_58[416], 0); /*0x70342c*/
      }
      return result; /*0x70342c*/
    case 14: /*0x7033a4*/
      goto LABEL_41;
    default:
      return result;
  }
}



// ==== 0x00703590  MapClass::FindPlacementCellsAlt  this=ObjectClass  sig=csp ====
_DWORD *__thiscall MapClass_FindPlacementCells_Alt(char *this, _DWORD *a2, int a3)
{
  int v4; // ebx
  _DWORD *v5; // eax
  int v6; // edx
  int v7; // edi
  int TileIndex; // eax
  int v10; // [esp+10h] [ebp-14h] BYREF
  int v11; // [esp+14h] [ebp-10h] BYREF
  _BYTE v12[12]; // [esp+18h] [ebp-Ch] BYREF

  v4 = *(_DWORD *)((*(int (__thiscall **)(char *))(this->hasParachute)(this) + 1660); /*0x7035a1*/
  if ( v4 == 4 ) /*0x7035aa*/
    v4 = 1; /*0x7035ac*/
  if ( a3 ) /*0x7035b9*/
    v5 = (_DWORD *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)a3 + 72))(a3, v12); /*0x7035c2*/
  else
    v5 = (_DWORD *)(*(int (__thiscall **)(char *, _BYTE *))(this->q048)(this, v12); /*0x7035fd*/
  LOWORD(a3) = *v5 / 256; /*0x7035d5*/
  HIWORD(a3) = v5[1] / 256; /*0x7035e9*/
  v6 = *(_DWORD *)this; /*0x70362d*/
  v10 = a3; /*0x70362f*/
  v7 = *(_DWORD *)((*(int (__thiscall **)(char *))(v6 + 132))(this) + 1460); /*0x70363b*/
  if ( v7 == -1 ) /*0x703644*/
    TileIndex = -1; /*0x70365f*/
  else
    TileIndex = MapClass::GetTileIndex(&dword_87F7E8, (__int16 *)&v10, v7, this->onBridge); /*0x703658*/
  a3 = 0; /*0x703663*/
  *a2 = *LayerClass::Pathfinding_Find( /*0x7036aa*/
           &dword_87F7E8,
           (unsigned __int8)this->onBridge,
           &v11,
           (__int16 *)&v10,
           v4,
           TileIndex,
           v7,
           (unsigned __int8)this->onBridge,
           1,
           1,
           0,
           0,
           0,
           1,
           (__int16 *)&a3,
           0,
           0);
  return a2; /*0x7036a7*/
}



// ==== 0x007036C0  TechnoClass::TransitionEffectState  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::TransitionEffectState(TechnoClass *this)
{
  int result; // eax
  int (__thiscall **vtable0)(TechnoClass *); // edx
  int v4; // eax
  int v5; // ecx
  int *location; // esi
  int v7; // [esp+4h] [ebp-Ch] BYREF
  int v8; // [esp+8h] [ebp-8h]
  int v9; // [esp+Ch] [ebp-4h]
  char v10; // [esp+14h] [ebp+4h]

  result = this->cloakState; /*0x7036c6*/
  if ( result == 2 || result == 1 ) /*0x7036d4*/
  {
    this->cloakState = 3; /*0x7036da*/
    vtable0 = (int (__thiscall **)(TechnoClass *))this->RadioClass; /*0x7036e9*/
    this->cloakProgress[0] = *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 1576) - 1; /*0x7036f2*/
    v4 = vtable0[33](this); /*0x7036fa*/
    v5 = *(_DWORD *)&stru_A8EB00.?[416]; /*0x703700*/
    result = *(_DWORD *)(v4 + 784); /*0x703706*/
    this->cloakProgress[5] = result; /*0x703712*/
    this->cloakProgress[2] = v5; /*0x703718*/
    this->cloakProgress[3] = v8; /*0x70371e*/
    this->cloakProgress[4] = result; /*0x703721*/
    LOBYTE(result) = v10; /*0x703724*/
    this->cloakProgress[6] = -1; /*0x70372a*/
    if ( !v10 ) /*0x703734*/
    {
      location = this->?; /*0x703736*/
      v7 = *location; /*0x703740*/
      v8 = location[1]; /*0x70374b*/
      v9 = location[2]; /*0x703757*/
      return (int)StartAudioControllerAt(*(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 1696), &v7, 0); /*0x703761*/
    }
  }
  return result; /*0x703766*/
}



// ==== 0x00703770  TechnoClass::StartEffectAudio  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::StartEffectAudio(TechnoClass *this)
{
  int result; // eax
  int (__thiscall **vtable0)(TechnoClass *); // edx
  int v4; // eax
  int v5; // ecx
  int v6; // eax
  int v7; // [esp+4h] [ebp-Ch] BYREF
  int v8; // [esp+8h] [ebp-8h]
  int v9; // [esp+Ch] [ebp-4h]
  char v10; // [esp+14h] [ebp+4h]

  result = this->cloakState; /*0x703776*/
  if ( !result || result == 3 ) /*0x703783*/
  {
    (*((void (__thiscall **)(TechnoClass *, _DWORD))this->RadioClass + 55))(this, 0); /*0x70378f*/
    vtable0 = (int (__thiscall **)(TechnoClass *))this->RadioClass; /*0x703795*/
    this->cloakState = 1; /*0x703799*/
    this->cloakProgress[0] = 0; /*0x7037a3*/
    v4 = vtable0[33](this); /*0x7037ad*/
    v5 = *(_DWORD *)&stru_A8EB00.?[416]; /*0x7037b3*/
    v6 = *(_DWORD *)(v4 + 784); /*0x7037b9*/
    this->cloakProgress[5] = v6; /*0x7037c5*/
    this->cloakProgress[2] = v5; /*0x7037cb*/
    this->cloakProgress[3] = v8; /*0x7037d1*/
    this->cloakProgress[4] = v6; /*0x7037d4*/
    this->cloakProgress[6] = 1; /*0x7037dd*/
    if ( !v10 ) /*0x7037e7*/
    {
      v7 = this->?[0]; /*0x7037f3*/
      v8 = this->?[1]; /*0x7037ff*/
      v9 = this->?[2]; /*0x703806*/
      StartAudioControllerAt(*(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 1696), &v7, 0); /*0x703814*/
    }
    result = (int)dword_A83D4C; /*0x70381f*/
    if ( (Object *)this->owner != dword_A83D4C ) /*0x703826*/
    {
      LOBYTE(result) = this->?; /*0x703828*/
      if ( (_BYTE)result ) /*0x703830*/
        return (*((int (__thiscall **)(TechnoClass *))this->RadioClass + 84))(this); /*0x703836*/
    }
  }
  return result; /*0x70383c*/
}



// ==== 0x00703850  TechnoClass::Vt279Thunk0  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::Vt279Thunk0(TechnoClass *this)
{
  return (*((int (__thiscall **)(TechnoClass *, _DWORD))this->RadioClass + 279))(this, 0); /*0x70385a*/
}



// ==== 0x00703860  TechnoClass::UpdatePowerDrain  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass_UpdatePowerDrain(char *this, int a2, int a3)
{
  _DWORD *v5; // esi
  int v6; // ecx
  int v7; // eax
  int v8; // ecx
  _WORD *v9; // eax
  int v10; // ecx
  _WORD *v11; // eax
  int v12; // eax
  int v13; // [esp-4h] [ebp-18h]
  int v14; // [esp-4h] [ebp-18h]

  if ( *(_BYTE *)((*(int (__thiscall **)(char *))(this->hasParachute)(this) + 3226) && this->isOwnedByCurrentPlayer ) /*0x703879*/
    return 0; /*0x703879*/
  if ( *(_BYTE *)((*(int (__thiscall **)(char *))(this->hasParachute)(this) + 3226) /*0x7038ac*/
    && !this->isOwnedByCurrentPlayer
    && !byte_A8ED6B )
  {
    return 5; /*0x7038ac*/
  }
  if ( !this->parachute || byte_A8ED6B || (*(int (__thiscall **)(char *))(this->fallRate)(this) == 6 ) /*0x7038db*/
    return 0; /*0x7038db*/
  if ( this->parachute != 2 ) /*0x7038e8*/
  {
    a3 = this->cloakProgress; /*0x703a6f*/
    if ( a3 > 0 ) /*0x703a73*/
    {
      v12 = Math::RoundToInt((double)a3 / (double)dword_8871E0->VeteranCombat * 256.0); /*0x703a8f*/
      if ( v12 < 64 ) /*0x703a97*/
        return 1; /*0x703a9a*/
      if ( v12 < 128 ) /*0x703aab*/
        return 2; /*0x703aae*/
      if ( v12 < 192 ) /*0x703abf*/
        return 3; /*0x703ac2*/
      if ( (_BYTE)a2 || !this->isOwnedByCurrentPlayer ) /*0x703ad6*/
        return (v12 >= 255) + 4; /*0x703afb*/
      return 3; /*0x703aa3*/
    }
    return 0; /*0x703b05*/
  }
  if ( (_BYTE)a2 ) /*0x7038f4*/
  {
    if ( a3 ) /*0x7038fc*/
    {
      v5 = this + 156; /*0x7038fe*/
      v6 = v5[1]; /*0x703906*/
      LOWORD(a2) = *v5 / 256; /*0x70391c*/
      v7 = v6; /*0x703923*/
      v8 = *(_DWORD *)(a3 + 48); /*0x703924*/
      HIWORD(a2) = v7 / 256; /*0x703936*/
      v13 = v8; /*0x70393f*/
      v9 = CellCoord::To_CellObj(&dword_87F7E8, (__int16 *)&a2); /*0x70394a*/
      if ( Cell::IsPassableOffset(v9, v13) ) /*0x703951*/
        return 3; /*0x703968*/
    }
    return 5; /*0x7038b8*/
  }
  if ( !g_hWnd ) /*0x703972*/
    return 3; /*0x703975*/
  if ( this->isOwnedByCurrentPlayer ) /*0x703981*/
    return 3; /*0x70398c*/
  v10 = this->owningHouseIndex; /*0x7039a2*/
  LOWORD(a2) = this->q027 / 256; /*0x7039b8*/
  HIWORD(a2) = v10 / 256; /*0x7039d1*/
  v14 = *((_DWORD *)dword_A83D4C + 12); /*0x7039e5*/
  v11 = CellCoord::To_CellObj(&dword_87F7E8, (__int16 *)&a2); /*0x7039ec*/
  if ( Cell::IsPassableOffset(v11, v14) ) /*0x7039f3*/
    return 3; /*0x7039fd*/
  if ( !dword_A8B238[0] /*0x703a4d*/
    || !this->owner
    || !dword_A83D4C
    || !(unsigned __int8)HouseClass::IsAlliedWith(dword_A83D4C, *((#375 **)this + 135))
    || !(unsigned __int8)HouseClass::IsAlliedWith(*((#375 **)this + 135), dword_A83D4C) )
  {
    return 5; /*0x703a54*/
  }
  return 3; /*0x7038ae*/
}



// ==== 0x00703B10  TechnoClass::CheckTargetCell  this=TechnoClass  sig=csp ====
char __thiscall TechnoClass::CheckTargetCell(TechnoClass *this)
{
  _DWORD *v2; // esi
  _DWORD *v3; // edi
  _DWORD *v4; // ebp
  _DWORD *v5; // ebx
  _DWORD *v6; // eax
  int v7; // edi
  int v8; // eax
  int v9; // ebx
  int v10; // ebp
  __int16 v12[2]; // [esp+10h] [ebp-14h] BYREF
  __int16 v13[2]; // [esp+14h] [ebp-10h] BYREF
  __int16 v14[2]; // [esp+18h] [ebp-Ch] BYREF
  __int16 v15[2]; // [esp+1Ch] [ebp-8h] BYREF
  __int16 v16[2]; // [esp+20h] [ebp-4h] BYREF

  *(_DWORD *)v12 = *(_DWORD *)(*((int (__thiscall **)(TechnoClass *, __int16 *))this->RadioClass + 110))(this, v16); /*0x703b34*/
  v2 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v12); /*0x703b3d*/
  if ( !v2 || this->? ) /*0x703b47*/
    return 0; /*0x703b47*/
  v13[0] = v12[0] + LOWORD(g_DDrawSurfaceManager.scenario[86]); /*0x703b6c*/
  v13[1] = v12[1] + HIWORD(g_DDrawSurfaceManager.scenario[86]); /*0x703b71*/
  *(_DWORD *)v14 = *(_DWORD *)v13; /*0x703b7e*/
  v3 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v14); /*0x703b9f*/
  v13[1] = v12[1] + HIWORD(g_DDrawSurfaceManager.scenario[82]); /*0x703ba7*/
  v13[0] = v12[0] + LOWORD(g_DDrawSurfaceManager.scenario[82]); /*0x703bac*/
  *(_DWORD *)v15 = *(_DWORD *)v13; /*0x703bb9*/
  v4 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v15); /*0x703bd8*/
  v13[1] = v12[1] + HIWORD(g_DDrawSurfaceManager.scenario[84]); /*0x703be1*/
  v13[0] = v12[0] + LOWORD(g_DDrawSurfaceManager.scenario[84]); /*0x703be6*/
  *(_DWORD *)v16 = *(_DWORD *)v13; /*0x703bf9*/
  v5 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v16); /*0x703c0c*/
  v13[0] = v12[0] + LOWORD(g_DDrawSurfaceManager.scenario[88]); /*0x703c1b*/
  v13[1] = v12[1] + HIWORD(g_DDrawSurfaceManager.scenario[88]); /*0x703c24*/
  v6 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v13); /*0x703c37*/
  if ( (v2[80] & 0x100) != 0 ) /*0x703c45*/
    return 1; /*0x703c45*/
  if ( v3 ) /*0x703c49*/
  {
    v7 = v3[80]; /*0x703c4b*/
    if ( (v7 & 0x100) != 0 && (v7 & 0x800) != 0 ) /*0x703c5f*/
      return 1; /*0x703c5f*/
  }
  if ( v6 ) /*0x703c63*/
  {
    v8 = v6[80]; /*0x703c65*/
    if ( (v8 & 0x100) != 0 && (v8 & 0x800) == 0 ) /*0x703c73*/
      return 1; /*0x703c73*/
  }
  if ( v5 ) /*0x703c77*/
  {
    v9 = v5[80]; /*0x703c79*/
    if ( (v9 & 0x100) != 0 && (v9 & 0x800) == 0 ) /*0x703c87*/
      return 1; /*0x703c87*/
  }
  if ( v4 && (v10 = v4[80], (v10 & 0x100) != 0) && (v10 & 0x800) != 0 ) /*0x703ca1*/
    return 1; /*0x703ca6*/
  else
    return 0; /*0x703cb0*/
}



// ==== 0x00703CC0  TechnoClass::ScanAdjacentCells  this=TechnoClass  sig=csp ====
char __thiscall TechnoClass::ScanAdjacentCells(TechnoClass *this)
{
  _DWORD *v2; // esi
  _DWORD *v3; // edi
  _DWORD *v4; // ebp
  _DWORD *v5; // ebx
  _DWORD *v6; // eax
  int v7; // edi
  int v8; // eax
  int v9; // ebx
  int v10; // ebp
  __int16 v12[2]; // [esp+10h] [ebp-14h] BYREF
  __int16 v13[2]; // [esp+14h] [ebp-10h] BYREF
  __int16 v14[2]; // [esp+18h] [ebp-Ch] BYREF
  __int16 v15[2]; // [esp+1Ch] [ebp-8h] BYREF
  __int16 v16[2]; // [esp+20h] [ebp-4h] BYREF

  *(_DWORD *)v12 = *(_DWORD *)(*((int (__thiscall **)(TechnoClass *, __int16 *))this->RadioClass + 110))(this, v16); /*0x703ce4*/
  v2 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v12); /*0x703ced*/
  if ( !v2 || this->? ) /*0x703cf7*/
    return 0; /*0x703cf7*/
  v13[0] = v12[0] + LOWORD(g_DDrawSurfaceManager.scenario[86]); /*0x703d1c*/
  v13[1] = v12[1] + HIWORD(g_DDrawSurfaceManager.scenario[86]); /*0x703d21*/
  *(_DWORD *)v14 = *(_DWORD *)v13; /*0x703d2e*/
  v3 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v14); /*0x703d4f*/
  v13[1] = v12[1] + HIWORD(g_DDrawSurfaceManager.scenario[82]); /*0x703d57*/
  v13[0] = v12[0] + LOWORD(g_DDrawSurfaceManager.scenario[82]); /*0x703d5c*/
  *(_DWORD *)v15 = *(_DWORD *)v13; /*0x703d69*/
  v4 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v15); /*0x703d88*/
  v13[1] = v12[1] + HIWORD(g_DDrawSurfaceManager.scenario[84]); /*0x703d91*/
  v13[0] = v12[0] + LOWORD(g_DDrawSurfaceManager.scenario[84]); /*0x703d96*/
  *(_DWORD *)v16 = *(_DWORD *)v13; /*0x703da9*/
  v5 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v16); /*0x703dbc*/
  v13[0] = v12[0] + LOWORD(g_DDrawSurfaceManager.scenario[88]); /*0x703dcb*/
  v13[1] = v12[1] + HIWORD(g_DDrawSurfaceManager.scenario[88]); /*0x703dd4*/
  v6 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v13); /*0x703de7*/
  if ( (v2[80] & 0x400) != 0 ) /*0x703df5*/
    return 1; /*0x703df5*/
  if ( v3 ) /*0x703df9*/
  {
    v7 = v3[80]; /*0x703dfb*/
    if ( (v7 & 0x400) != 0 && (v7 & 0x800) != 0 ) /*0x703e0f*/
      return 1; /*0x703e0f*/
  }
  if ( v6 ) /*0x703e13*/
  {
    v8 = v6[80]; /*0x703e15*/
    if ( (v8 & 0x400) != 0 && (v8 & 0x800) == 0 ) /*0x703e23*/
      return 1; /*0x703e23*/
  }
  if ( v5 ) /*0x703e27*/
  {
    v9 = v5[80]; /*0x703e29*/
    if ( (v9 & 0x400) != 0 && (v9 & 0x800) == 0 ) /*0x703e37*/
      return 1; /*0x703e37*/
  }
  if ( v4 && (v10 = v4[80], (v10 & 0x400) != 0) && (v10 & 0x800) != 0 ) /*0x703e51*/
    return 1; /*0x703e56*/
  else
    return 0; /*0x703e60*/
}



// ==== 0x00703E70  TechnoClass::ScanNeighborCells  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::ScanNeighborCells(TechnoClass *this)
{
  int v2; // ebx
  _DWORD *v3; // esi
  _DWORD *v4; // edi
  _DWORD *v5; // eax
  int v6; // ecx
  int v7; // ecx
  int v8; // ecx
  int v9; // ecx
  int v10; // eax
  int v11; // eax
  __int16 v13[2]; // [esp+Ch] [ebp-10h] BYREF
  __int16 v14[2]; // [esp+10h] [ebp-Ch] BYREF
  __int16 v15[2]; // [esp+14h] [ebp-8h] BYREF
  __int16 v16[2]; // [esp+18h] [ebp-4h] BYREF

  *(_DWORD *)v13 = *(_DWORD *)(*((int (__thiscall **)(TechnoClass *, __int16 *))this->RadioClass + 110))(this, v16); /*0x703e93*/
  v2 = 0; /*0x703e97*/
  if ( CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v13) /*0x703eb3*/
    && (TechnoClass::CheckTargetCell(this) || TechnoClass::ScanAdjacentCells(this)) )
  {
    v14[0] = v13[0] + LOWORD(g_DDrawSurfaceManager.scenario[86]); /*0x703ed7*/
    v14[1] = v13[1] + HIWORD(g_DDrawSurfaceManager.scenario[86]); /*0x703edc*/
    *(_DWORD *)v15 = *(_DWORD *)v14; /*0x703ee9*/
    v3 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v15); /*0x703f0a*/
    v14[1] = v13[1] + HIWORD(g_DDrawSurfaceManager.scenario[84]); /*0x703f12*/
    v14[0] = v13[0] + LOWORD(g_DDrawSurfaceManager.scenario[84]); /*0x703f17*/
    *(_DWORD *)v16 = *(_DWORD *)v14; /*0x703f24*/
    v4 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v16); /*0x703f43*/
    v14[1] = v13[1] + HIWORD(g_DDrawSurfaceManager.scenario[85]); /*0x703f4c*/
    v14[0] = v13[0] + LOWORD(g_DDrawSurfaceManager.scenario[85]); /*0x703f51*/
    v5 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v14); /*0x703f68*/
    if ( v3 ) /*0x703f6f*/
    {
      if ( v4 && v5 ) /*0x703f77*/
      {
        v6 = v3[14]; /*0x703f79*/
        if ( v6 != 0xFFFF && v6 != 255 ) /*0x703f90*/
        {
          v7 = v6 - g_Cell_BuildabilityLUT + 1; /*0x703f94*/
          if ( v7 >= 7 && v7 <= 16 ) /*0x703f9d*/
            v2 = 1; /*0x703f9f*/
        }
        v8 = v4[14]; /*0x703fa4*/
        if ( v8 != 0xFFFF && v8 != 255 ) /*0x703fb5*/
        {
          v9 = v8 - g_Cell_BuildabilityLUT + 1; /*0x703fb9*/
          if ( v9 >= 7 && v9 <= 16 ) /*0x703fc2*/
            v2 = 1; /*0x703fc4*/
        }
        v10 = v5[14]; /*0x703fc9*/
        if ( v10 != 0xFFFF && v10 != 255 ) /*0x703fd8*/
        {
          v11 = v10 - g_Cell_BuildabilityLUT + 1; /*0x703fdc*/
          if ( v11 >= 7 && v11 <= 16 ) /*0x703fe5*/
            ++v2; /*0x703fe7*/
        }
      }
    }
  }
  return v2; /*0x703fe8*/
}



// ==== 0x00704000  TechnoClass::IsValidBuildingPlacement  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::IsValidBuildingPlacement(TechnoClass *this)
{
  int (__thiscall **vtable0)(TechnoClass *, _DWORD *); // eax
  int *v3; // eax
  char onBridge; // cl
  int v5; // eax
  InfantryClass *v6; // edi
  InfantryClass *v7; // eax
  int occupant; // esi
  InfantryClass *v9; // ebx
  InfantryClass *v10; // eax
  InfantryClass *v11; // ebp
  __int16 v12; // di
  _DWORD *v13; // ebx
  _DWORD *v14; // eax
  _DWORD *v15; // esi
  int v16; // ebx
  InfantryClass *v17; // edi
  int v18; // eax
  InfantryClass *v19; // eax
  __int16 v21[2]; // [esp+10h] [ebp-14h] BYREF
  int v22; // [esp+14h] [ebp-10h]
  int v23; // [esp+18h] [ebp-Ch]
  __int16 v24[2]; // [esp+1Ch] [ebp-8h] BYREF
  int v25; // [esp+20h] [ebp-4h] BYREF

  vtable0 = (int (__thiscall **)(TechnoClass *, _DWORD *))this->RadioClass; /*0x70400d*/
  v23 = 0; /*0x704012*/
  v3 = (int *)vtable0[110](this, &v25); /*0x70401a*/
  onBridge = this->?; /*0x704020*/
  v5 = *v3; /*0x704026*/
  *(_DWORD *)v21 = v5; /*0x70402a*/
  if ( onBridge ) /*0x70402e*/
    return v23; /*0x70402e*/
  LOWORD(v22) = LOWORD(g_DDrawSurfaceManager.scenario[82]) + v5; /*0x704040*/
  HIWORD(v22) = v21[1] + HIWORD(g_DDrawSurfaceManager.scenario[82]); /*0x704051*/
  *(_DWORD *)v24 = v22; /*0x70405a*/
  v6 = (InfantryClass *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v24); /*0x70407a*/
  LOWORD(v22) = LOWORD(g_DDrawSurfaceManager.scenario[88]) + v21[0]; /*0x704086*/
  HIWORD(v22) = v21[1] + HIWORD(g_DDrawSurfaceManager.scenario[88]); /*0x70408b*/
  v25 = v22; /*0x70409a*/
  v7 = (InfantryClass *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)&v25); /*0x70409e*/
  LOWORD(occupant) = *(_WORD *)&g_BuildingLoadQueue_Array.?[24]; /*0x7040a3*/
  v9 = v7; /*0x7040b3*/
  v22 = *(_DWORD *)&g_BuildingLoadQueue_Array.?[24]; /*0x7040b5*/
  v10 = (InfantryClass *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v21); /*0x7040b9*/
  v11 = v10; /*0x7040c0*/
  if ( !v6 || !v9 ) /*0x7040ca*/
    return v23; /*0x7040ca*/
  if ( (unsigned __int8)InfantryClass::IsInBounds(v10) ) /*0x7040d2*/
  {
    occupant = v11->?; /*0x7040db*/
LABEL_10:
    v22 = occupant; /*0x7040fe*/
    goto LABEL_11; /*0x7040fe*/
  }
  if ( (unsigned __int8)InfantryClass::IsInBounds(v6) ) /*0x7040e2*/
  {
    occupant = v6->?; /*0x7040eb*/
    goto LABEL_10; /*0x7040ee*/
  }
  if ( (unsigned __int8)InfantryClass::IsInBounds(v9) ) /*0x7040f2*/
  {
    occupant = v9->?; /*0x7040fb*/
    goto LABEL_10; /*0x7040fb*/
  }
LABEL_11:
  v12 = HIWORD(v22); /*0x704102*/
  if ( __PAIR32__(HIWORD(v22), occupant) != *(_DWORD *)&g_BuildingLoadQueue_Array.?[24] ) /*0x70410e*/
  {
    LOWORD(v22) = occupant + LOWORD(g_DDrawSurfaceManager.scenario[82]); /*0x70412e*/
    HIWORD(v22) += HIWORD(g_DDrawSurfaceManager.scenario[82]); /*0x704137*/
    v25 = v22; /*0x704146*/
    v13 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)&v25); /*0x70415e*/
    LOWORD(v22) = occupant + LOWORD(g_DDrawSurfaceManager.scenario[88]); /*0x704160*/
    HIWORD(v22) = HIWORD(g_DDrawSurfaceManager.scenario[88]) + v12; /*0x704165*/
    *(_DWORD *)v24 = v22; /*0x704178*/
    v14 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v24); /*0x70417c*/
    v15 = v14; /*0x704183*/
    if ( v13 ) /*0x704185*/
    {
      if ( v14 ) /*0x70418d*/
      {
        v16 = v13[9]; /*0x704193*/
        LOWORD(v22) = LOWORD(g_DDrawSurfaceManager.scenario[82]) + v16; /*0x7041b2*/
        HIWORD(v22) = HIWORD(g_DDrawSurfaceManager.scenario[82]) + HIWORD(v16); /*0x7041b7*/
        v25 = v22; /*0x7041c6*/
        v17 = (InfantryClass *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)&v25); /*0x7041d5*/
        v18 = v15[9]; /*0x7041d7*/
        LOWORD(v22) = LOWORD(g_DDrawSurfaceManager.scenario[88]) + v18; /*0x7041e0*/
        HIWORD(v22) = HIWORD(g_DDrawSurfaceManager.scenario[88]) + HIWORD(v18); /*0x7041f6*/
        v25 = v22; /*0x7041ff*/
        v19 = (InfantryClass *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)&v25); /*0x704208*/
        if ( v17 ) /*0x70420f*/
        {
          if ( v19 /*0x704222*/
            && ((unsigned __int8)InfantryClass::IsInBounds(v19) || (unsigned __int8)InfantryClass::IsInBounds(v17)) )
          {
            return 1; /*0x70422b*/
          }
        }
      }
    }
  }
  return v23; /*0x704237*/
}



// ==== 0x00704240  TechnoClass::CheckAdjacencyFlags  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::CheckAdjacencyFlags(TechnoClass *this)
{
  int v2; // ebx
  char *v3; // edi
  _WORD *v4; // eax
  _DWORD *v5; // eax
  int v6; // eax
  char *v7; // eax
  bool v8; // cc
  int result; // eax
  int v10; // [esp+Ch] [ebp-10h]
  int v11; // [esp+Ch] [ebp-10h]
  __int16 v12[2]; // [esp+10h] [ebp-Ch] BYREF
  int v13; // [esp+14h] [ebp-8h] BYREF
  _BYTE v14[4]; // [esp+18h] [ebp-4h] BYREF

  v2 = 0; /*0x70424c*/
  *(_DWORD *)v12 = *(_DWORD *)(*((int (__thiscall **)(TechnoClass *, int *))this->RadioClass + 110))(this, &v13); /*0x704265*/
  v3 = (char *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v12); /*0x70426e*/
  if ( this->? ) /*0x704270*/
    return v2; /*0x704270*/
  v4 = (_WORD *)(*((int (__thiscall **)(TechnoClass *, _BYTE *))this->RadioClass + 110))(this, v14); /*0x704287*/
  LOWORD(v10) = LOWORD(g_DDrawSurfaceManager.scenario[85]) + *v4; /*0x7042a2*/
  HIWORD(v10) = HIWORD(g_DDrawSurfaceManager.scenario[85]) + v4[1]; /*0x7042ab*/
  v13 = v10; /*0x7042ba*/
  v5 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)&v13); /*0x7042be*/
  if ( !v5 ) /*0x7042c5*/
    return v2; /*0x7042c5*/
  if ( *((char *)v5 + 283) - v3[283] >= 4 ) /*0x7042da*/
    v2 = 2; /*0x7042dc*/
  v6 = v5[9]; /*0x7042e1*/
  LOWORD(v11) = v6 + LOWORD(g_DDrawSurfaceManager.scenario[85]); /*0x7042f6*/
  HIWORD(v11) = HIWORD(v6) + HIWORD(g_DDrawSurfaceManager.scenario[85]); /*0x704305*/
  v13 = v11; /*0x70430e*/
  v7 = (char *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)&v13); /*0x704317*/
  if ( !v7 ) /*0x70431e*/
    return v2; /*0x70431e*/
  v8 = v7[283] - v3[283] < 4; /*0x704330*/
  result = 1; /*0x704333*/
  if ( v8 ) /*0x704338*/
    return v2; /*0x70433a*/
  return result; /*0x70433c*/
}



// ==== 0x00704350  TechnoClass::GetDrawHeight  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::GetDrawHeight(TechnoClass *this)
{
  int v2; // eax
  int v3; // eax
  int (__thiscall **vtable0)(TechnoClass *, __int16 *); // edx
  int v5; // ebp
  _BYTE *v6; // ebx
  int (__thiscall **v7)(TechnoClass *); // eax
  int v8; // edi
  Cell *v10; // eax
  _DWORD *v11; // eax
  _DWORD *v12; // edi
  _DWORD *v13; // ebx
  _DWORD *v14; // eax
  int v15; // edi
  int v16; // ebx
  int v17; // eax
  int *primaryFacing; // esi
  int v19; // eax
  __int16 v20; // dx
  _BYTE *v21; // edi
  int v22; // eax
  __int16 v23; // dx
  unsigned int v24; // eax
  __int16 v25; // dx
  int v26; // eax
  __int16 v27; // dx
  _BYTE *v28; // ebx
  int v29; // eax
  __int16 v30; // dx
  _BYTE *v31; // ebp
  int v32; // eax
  __int16 v33; // dx
  _BYTE *v34; // eax
  int v35; // eax
  _DWORD *v36; // ecx
  int v37; // edi
  _DWORD *i; // esi
  int v39; // eax
  TechnoClass *v40; // eax
  int v41; // ecx
  __int16 v42[2]; // [esp+10h] [ebp-5Ch] BYREF
  int v43; // [esp+14h] [ebp-58h]
  __int16 v44[2]; // [esp+18h] [ebp-54h] BYREF
  __int16 v45[2]; // [esp+1Ch] [ebp-50h] BYREF
  __int16 v46[2]; // [esp+20h] [ebp-4Ch] BYREF
  _BYTE *v47; // [esp+24h] [ebp-48h]
  __int16 v48[2]; // [esp+28h] [ebp-44h] BYREF
  __int16 v49[2]; // [esp+2Ch] [ebp-40h] BYREF
  __int16 v50[2]; // [esp+30h] [ebp-3Ch] BYREF
  __int16 v51[2]; // [esp+34h] [ebp-38h] BYREF
  __int16 v52[2]; // [esp+38h] [ebp-34h] BYREF
  __int16 v53[2]; // [esp+3Ch] [ebp-30h] BYREF
  int v54; // [esp+40h] [ebp-2Ch] BYREF
  int v55; // [esp+44h] [ebp-28h] BYREF
  int v56; // [esp+48h] [ebp-24h] BYREF
  int v57; // [esp+4Ch] [ebp-20h] BYREF
  int v58; // [esp+50h] [ebp-1Ch] BYREF
  int v59; // [esp+54h] [ebp-18h] BYREF
  int v60; // [esp+58h] [ebp-14h] BYREF
  int v61; // [esp+5Ch] [ebp-10h] BYREF
  _BYTE *v62; // [esp+60h] [ebp-Ch] BYREF
  _BYTE *v63; // [esp+64h] [ebp-8h]
  int v64; // [esp+68h] [ebp-4h]

  v2 = (*((int (__thiscall **)(TechnoClass *))this->RadioClass + 116))(this); /*0x70435b*/
  v3 = ZCoordToScreenY(v2); /*0x704363*/
  vtable0 = (int (__thiscall **)(TechnoClass *, __int16 *))this->RadioClass; /*0x704368*/
  v5 = -v3; /*0x704372*/
  v43 = -v3; /*0x704375*/
  *(_DWORD *)v42 = *(_DWORD *)vtable0[110](this, v53); /*0x704385*/
  v6 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v42); /*0x704394*/
  v7 = (int (__thiscall **)(TechnoClass *))this->RadioClass; /*0x704396*/
  v47 = v6; /*0x70439a*/
  if ( v7[11](this) == 1 ) /*0x7043a4*/
  {
    if ( this->isTether ) /*0x7043a6*/
    {
      v8 = Array::Get((Array *)this, 0); /*0x7043b9*/
      if ( (*(int (__thiscall **)(int))(*(_DWORD *)v8 + 44))(v8) == 6 /*0x7043d4*/
        && (*(int (__thiscall **)(int))(*(_DWORD *)v8 + 388))(v8) == 16 )
      {
        return v5 - 3; /*0x7043e0*/
      }
    }
    if ( *(_BYTE *)(*((_DWORD *)this + 433) + 3598) ) /*0x7043e7*/
    {
      v10 = (Cell *)(*((int (__thiscall **)(TechnoClass *))this->RadioClass + 111))(this); /*0x7043f5*/
      v11 = Cell::IsBridge(v10); /*0x7043fd*/
      if ( v11 ) /*0x704404*/
      {
        if ( *(_BYTE *)(v11[328] + 5819) ) /*0x70440c*/
          return v5 - 14; /*0x704420*/
      }
    }
  }
  if ( v6[284] ) /*0x704421*/
  {
    v44[0] = LOWORD(g_DDrawSurfaceManager.scenario[86]) + v42[0]; /*0x70444b*/
    v44[1] = HIWORD(g_DDrawSurfaceManager.scenario[86]) + v42[1]; /*0x704450*/
    *(_DWORD *)v46 = *(_DWORD *)v44; /*0x70445a*/
    v12 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v46); /*0x70447a*/
    v44[0] = LOWORD(g_DDrawSurfaceManager.scenario[84]) + v42[0]; /*0x704486*/
    v44[1] = HIWORD(g_DDrawSurfaceManager.scenario[84]) + v42[1]; /*0x70448b*/
    *(_DWORD *)v45 = *(_DWORD *)v44; /*0x70449a*/
    v13 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v45); /*0x7044b3*/
    v44[1] = HIWORD(g_DDrawSurfaceManager.scenario[85]) + v42[1]; /*0x7044bc*/
    v44[0] = LOWORD(g_DDrawSurfaceManager.scenario[85]) + v42[0]; /*0x7044c1*/
    v14 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v44); /*0x7044d8*/
    if ( v12 ) /*0x7044df*/
    {
      if ( v13 && v14 ) /*0x7044ef*/
      {
        v15 = v12[17]; /*0x7044f5*/
        if ( v15 == -1 ) /*0x7044fb*/
        {
          v16 = v13[17]; /*0x704522*/
          if ( v16 == -1 ) /*0x704528*/
          {
            v17 = v14[17]; /*0x70454e*/
            if ( v17 != -1 && *(_BYTE *)(*(_DWORD *)(*(_DWORD *)stru_A83D50.__pad_34 + 4 * v17) + 693) ) /*0x70455f*/
              return g_INI_Key_TRUCKA.?[3] + v5 - 1; /*0x70457a*/
          }
          else if ( *(_BYTE *)(*(_DWORD *)(*(_DWORD *)stru_A83D50.__pad_34 + 4 * v16) + 693) ) /*0x704532*/
          {
            return g_INI_Key_TRUCKA.?[3] + v5 - 1; /*0x70454d*/
          }
        }
        else if ( *(_BYTE *)(*(_DWORD *)(*(_DWORD *)stru_A83D50.__pad_34 + 4 * v15) + 693) ) /*0x704506*/
        {
          return g_INI_Key_TRUCKA.?[3] + v5 - 1; /*0x704521*/
        }
      }
    }
  }
  primaryFacing = this->primaryFacing; /*0x70457b*/
  v19 = ((unsigned __int8)((unsigned int)((*ProgressTimer::GetValue((ProgressTimer *)primaryFacing, &v55) >> 12) + 1) >> 1) /*0x704596*/
       + 1)
      & 7;
  v20 = v42[1] + HIWORD(g_DDrawSurfaceManager.scenario[v19 + 82]); /*0x7045ae*/
  v44[0] = v42[0] + LOWORD(g_DDrawSurfaceManager.scenario[v19 + 82]); /*0x7045ba*/
  v44[1] = v20; /*0x7045c3*/
  *(_DWORD *)v48 = *(_DWORD *)v44; /*0x7045d2*/
  v21 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v48); /*0x7045e2*/
  v22 = ((unsigned __int8)((unsigned int)((*ProgressTimer::GetValue((ProgressTimer *)primaryFacing, &v56) >> 12) + 1) >> 1) /*0x7045f2*/
       - 1)
      & 7;
  v23 = v42[1] + HIWORD(g_DDrawSurfaceManager.scenario[v22 + 82]); /*0x70460a*/
  v44[0] = v42[0] + LOWORD(g_DDrawSurfaceManager.scenario[v22 + 82]); /*0x704616*/
  v44[1] = v23; /*0x70461f*/
  *(_DWORD *)v49 = *(_DWORD *)v44; /*0x70462e*/
  *(_DWORD *)v45 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v49); /*0x70463e*/
  v24 = ((unsigned int)((*ProgressTimer::GetValue((ProgressTimer *)primaryFacing, &v57) >> 12) + 1) >> 1) & 7; /*0x704654*/
  v25 = v42[1] + HIWORD(g_DDrawSurfaceManager.scenario[v24 + 82]); /*0x704667*/
  v44[0] = LOWORD(g_DDrawSurfaceManager.scenario[v24 + 82]) + v42[0]; /*0x704673*/
  v44[1] = v25; /*0x70467c*/
  *(_DWORD *)v50 = *(_DWORD *)v44; /*0x70468b*/
  *(_DWORD *)v46 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v50); /*0x70469b*/
  v26 = ((unsigned __int8)((unsigned int)((*ProgressTimer::GetValue((ProgressTimer *)primaryFacing, &v58) >> 12) + 1) >> 1) /*0x7046b4*/
       - 4)
      & 7;
  v27 = v42[1] + HIWORD(g_DDrawSurfaceManager.scenario[v26 + 82]); /*0x7046c7*/
  v44[0] = LOWORD(g_DDrawSurfaceManager.scenario[v26 + 82]) + v42[0]; /*0x7046d3*/
  v44[1] = v27; /*0x7046dc*/
  *(_DWORD *)v51 = *(_DWORD *)v44; /*0x7046eb*/
  v28 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v51); /*0x7046fb*/
  v29 = ((unsigned __int8)((unsigned int)((*ProgressTimer::GetValue((ProgressTimer *)primaryFacing, &v59) >> 12) + 1) >> 1) /*0x70470d*/
       + 3)
      & 7;
  v30 = v42[1] + HIWORD(g_DDrawSurfaceManager.scenario[v29 + 82]); /*0x704725*/
  v44[0] = v42[0] + LOWORD(g_DDrawSurfaceManager.scenario[v29 + 82]); /*0x704731*/
  v44[1] = v30; /*0x70473a*/
  *(_DWORD *)v52 = *(_DWORD *)v44; /*0x704749*/
  v31 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v52); /*0x704759*/
  v32 = ((unsigned __int8)((unsigned int)((*ProgressTimer::GetValue((ProgressTimer *)primaryFacing, &v60) >> 12) + 1) >> 1) /*0x70476b*/
       - 3)
      & 7;
  v33 = v42[1] + HIWORD(g_DDrawSurfaceManager.scenario[v32 + 82]); /*0x704783*/
  v44[0] = v42[0] + LOWORD(g_DDrawSurfaceManager.scenario[v32 + 82]); /*0x70478f*/
  v44[1] = v33; /*0x704798*/
  *(_DWORD *)v53 = *(_DWORD *)v44; /*0x7047a7*/
  v34 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v53); /*0x7047ab*/
  *(_DWORD *)v44 = v34; /*0x7047b2*/
  if ( !v21 || !*(_DWORD *)v45 || !*(_DWORD *)v46 ) /*0x7047ce*/
    return v43 - 1; /*0x7047ce*/
  if ( v21[284] || *(_BYTE *)(*(_DWORD *)v45 + 284) || *(_BYTE *)(*(_DWORD *)v46 + 284) ) /*0x7047ee*/
    return g_INI_Key_TRUCKA.?[2] + v43; /*0x7047ee*/
  if ( !v28 || !v31 || !v34 ) /*0x70480e*/
    return v43 - 1; /*0x70480e*/
  if ( v28[284] || v31[284] || v34[284] ) /*0x704830*/
    return g_INI_Key_TRUCKA.?[2] + v43; /*0x7049b6*/
  if ( v47[284] ) /*0x704842*/
    return v43 + g_INI_Key_TRUCKA.?[1]; /*0x70485e*/
  if ( (((unsigned __int8)(*ProgressTimer::GetValue((ProgressTimer *)primaryFacing, &v60) >> 12) + 1) & 0xE) == 0xC /*0x70488d*/
    || (((unsigned __int8)(*ProgressTimer::GetValue((ProgressTimer *)primaryFacing, &v60) >> 12) + 1) & 0xE) == 0 )
  {
    v62 = v28; /*0x7048e0*/
    v63 = v31; /*0x7048e4*/
    v64 = *(_DWORD *)v44; /*0x7048e8*/
  }
  else
  {
    if ( (((unsigned __int8)(*ProgressTimer::GetValue((ProgressTimer *)primaryFacing, &v60) >> 12) + 1) & 0xE) != 8 /*0x7048c0*/
      && (((unsigned __int8)(*ProgressTimer::GetValue((ProgressTimer *)primaryFacing, &v60) >> 12) + 1) & 0xE) != 4 )
    {
      return v43 - 1; /*0x7048c0*/
    }
    v62 = v21; /*0x7048ce*/
    v63 = *(_BYTE **)v45; /*0x7048d2*/
    v64 = *(_DWORD *)v46; /*0x7048d6*/
  }
  if ( (*((_DWORD *)v47 + 80) & 0x10000) != 0 ) /*0x7048fb*/
    return v43 - 1; /*0x704999*/
  v35 = 0; /*0x704901*/
  v36 = &v62; /*0x704903*/
  do /*0x704918*/
  {
    if ( (*(_DWORD *)(*v36 + 320) & 0x10000) != 0 ) /*0x70490f*/
      return v43 - 1; /*0x704959*/
    ++v35; /*0x704911*/
    ++v36; /*0x704912*/
  }
  while ( v35 < 3 ); /*0x704918*/
  v37 = 0; /*0x70491a*/
  for ( i = &v62; ; ++i ) /*0x70491c*/
  {
    v39 = *(_DWORD *)(*i + 56); /*0x704927*/
    if ( v39 == 0xFFFF || v39 == 255 ) /*0x704936*/
    {
      v41 = 0; /*0x704965*/
      v40 = *(TechnoClass **)(*(_DWORD *)&stru_A8EB00.?[328] + 4 * dword_AA10B0); /*0x704967*/
    }
    else
    {
      v40 = *(TechnoClass **)(*(_DWORD *)&stru_A8EB00.?[328] + 4 * v39); /*0x70493e*/
      v41 = *(unsigned __int8 *)(*i + 282); /*0x704943*/
    }
    TechnoClass::GetTileAnimationData(v40, v41, &v61, &v54); /*0x704977*/
    if ( v54 > 36 ) /*0x704980*/
      break; /*0x704980*/
    if ( ++v37 >= 3 ) /*0x704989*/
      return v43 - 1; /*0x704989*/
  }
  return v43 - 2; /*0x7043d6*/
}



// ==== 0x007049C0  DrawTacticalMapLine  this=FootClass  sig=csp ====
char __stdcall TacticalMap_DrawLine(int a1, int a2, int a3, int a4, int a5, int a6, int a7, char a8, char a9)
{
  int v9; // edx
  char v10; // bl
  int v11; // esi
  _DWORD *v12; // eax
  int *v13; // eax
  int *v14; // eax
  int v15; // esi
  _DWORD *v16; // eax
  int *v17; // eax
  int *v18; // eax
  int v19; // eax
  int v20; // esi
  _DWORD *v21; // eax
  int *v22; // eax
  int *v23; // eax
  _DWORD *v24; // eax
  int *v25; // eax
  int *v26; // eax
  int v27; // edi
  char result; // al
  int v29; // [esp+2Ch] [ebp-80h] BYREF
  int v30; // [esp+30h] [ebp-7Ch]
  int v31; // [esp+34h] [ebp-78h] BYREF
  int v32; // [esp+38h] [ebp-74h]
  int v33[2]; // [esp+3Ch] [ebp-70h] BYREF
  int v34[2]; // [esp+44h] [ebp-68h] BYREF
  int v35; // [esp+4Ch] [ebp-60h] BYREF
  int v36; // [esp+50h] [ebp-5Ch]
  _DWORD v37[2]; // [esp+54h] [ebp-58h] BYREF
  int v38[4]; // [esp+5Ch] [ebp-50h] BYREF
  int v39; // [esp+6Ch] [ebp-40h] BYREF
  int v40; // [esp+70h] [ebp-3Ch]
  int v41; // [esp+74h] [ebp-38h]
  int v42; // [esp+78h] [ebp-34h]
  int v43; // [esp+7Ch] [ebp-30h] BYREF
  int v44; // [esp+80h] [ebp-2Ch]
  int v45; // [esp+84h] [ebp-28h]
  int v46; // [esp+88h] [ebp-24h]
  _DWORD v47[4]; // [esp+8Ch] [ebp-20h] BYREF
  _DWORD v48[4]; // [esp+9Ch] [ebp-10h] BYREF

  Coord::To_Screen(g_TacticalClass_Instance, &a1, &v31); /*0x7049dc*/
  Coord::To_Screen(g_TacticalClass_Instance, &a4, &v29); /*0x7049f4*/
  v9 = dword_886FA4; /*0x7049fd*/
  v10 = a9; /*0x704a07*/
  v32 += dword_886FA4; /*0x704a14*/
  v30 += dword_886FA4; /*0x704a1f*/
  v34[1] = v32 + 1; /*0x704a23*/
  v34[0] = v31; /*0x704a30*/
  v33[0] = v29; /*0x704a36*/
  v33[1] = v30 + 1; /*0x704a3a*/
  if ( a9 ) /*0x704a43*/
  {
    if ( *(_DWORD *)(dword_87F6C4 + 4) == 1 ) /*0x704a51*/
      v11 = **(unsigned __int8 **)(dword_87F6C4 + 372); /*0x704a5d*/
    else
      v11 = **(unsigned __int16 **)(dword_87F6C4 + 372); /*0x704a69*/
    v36 = -2; /*0x704a77*/
    v35 = -2; /*0x704a89*/
    v12 = Coord2D::Add(&v35, v37, v34); /*0x704a8d*/
    v13 = Rect::Construct(v47, v12, 3, 3); /*0x704a97*/
    v39 = *v13; /*0x704aa0*/
    v40 = v13[1]; /*0x704aa9*/
    v41 = v13[2]; /*0x704ab0*/
    v42 = v13[3]; /*0x704ac2*/
    v14 = ClipRectIntersection(v48, &DSurface_ViewBounds, &v39, 0, 0); /*0x704acc*/
    v43 = *v14; /*0x704ad4*/
    v44 = v14[1]; /*0x704adb*/
    v45 = v14[2]; /*0x704ae2*/
    v46 = v14[3]; /*0x704aef*/
    (*(void (__thiscall **)(int, int *, int))(*(_DWORD *)DSurface_Composite + 20))(DSurface_Composite, &v43, v11); /*0x704afa*/
    if ( *(_DWORD *)(dword_87F6C4 + 4) == 1 ) /*0x704b05*/
      v15 = **(unsigned __int8 **)(dword_87F6C4 + 372); /*0x704b11*/
    else
      v15 = **(unsigned __int16 **)(dword_87F6C4 + 372); /*0x704b1d*/
    v35 = -2; /*0x704b29*/
    v36 = -2; /*0x704b2d*/
    v16 = Coord2D::Add(&v35, v37, v33); /*0x704b41*/
    v17 = Rect::Construct(v48, v16, 3, 3); /*0x704b4e*/
    v43 = *v17; /*0x704b57*/
    v44 = v17[1]; /*0x704b60*/
    v45 = v17[2]; /*0x704b6c*/
    v46 = v17[3]; /*0x704b7c*/
    v18 = ClipRectIntersection(v47, &DSurface_ViewBounds, &v43, 0, 0); /*0x704b80*/
    v39 = *v18; /*0x704b88*/
    v40 = v18[1]; /*0x704b8f*/
    v41 = v18[2]; /*0x704b9c*/
    v42 = v18[3]; /*0x704ba3*/
    (*(void (__thiscall **)(int, int *, int))(*(_DWORD *)DSurface_Composite + 20))(DSurface_Composite, &v39, v15); /*0x704bae*/
    v9 = dword_886FA4; /*0x704bb1*/
  }
  v38[1] = v9; /*0x704bc2*/
  v38[0] = DSurface_ViewBounds; /*0x704bce*/
  v38[2] = dword_886FA8; /*0x704bd2*/
  v38[3] = dword_886FAC; /*0x704bd6*/
  if ( v10 && ClipLine(v34, v33, v38) ) /*0x704be9*/
  {
    if ( *(_DWORD *)(dword_87F6C4 + 4) == 1 ) /*0x704bfa*/
      v19 = **(unsigned __int8 **)(dword_87F6C4 + 372); /*0x704c04*/
    else
      v19 = **(unsigned __int16 **)(dword_87F6C4 + 372); /*0x704c10*/
    (*(void (__thiscall **)(int, int *, int *, int))(*(_DWORD *)DSurface_Composite + 48))( /*0x704c26*/
      DSurface_Composite,
      v34,
      v33,
      v19);
  }
  v20 = ((unsigned __int8)a7 >> g_BitShift_Green_0 << g_BitShift_Red) /*0x704c89*/
      | (BYTE2(a7) >> g_BitMask_Red << g_BitShift_Blue)
      | (BYTE1(a7) >> g_BitMask_Blue << g_BitMask_Green);
  v35 = -2; /*0x704c92*/
  v36 = -2; /*0x704c96*/
  v21 = Coord2D::Add(&v35, v37, &v31); /*0x704ca4*/
  v22 = Rect::Construct(v48, v21, 3, 3); /*0x704cb1*/
  v43 = *v22; /*0x704cba*/
  v44 = v22[1]; /*0x704cc3*/
  v45 = v22[2]; /*0x704cca*/
  v46 = v22[3]; /*0x704cd9*/
  v23 = ClipRectIntersection(v47, &DSurface_ViewBounds, &v43, 0, 0); /*0x704ce3*/
  v39 = *v23; /*0x704ceb*/
  v40 = v23[1]; /*0x704cf2*/
  v41 = v23[2]; /*0x704cf9*/
  v42 = v23[3]; /*0x704d06*/
  (*(void (__thiscall **)(int, int *, int))(*(_DWORD *)DSurface_Composite + 20))(DSurface_Composite, &v39, v20); /*0x704d11*/
  v35 = -2; /*0x704d1d*/
  v36 = -2; /*0x704d21*/
  v24 = Coord2D::Add(&v35, v37, &v29); /*0x704d35*/
  v25 = Rect::Construct(v48, v24, 3, 3); /*0x704d42*/
  v43 = *v25; /*0x704d49*/
  v44 = v25[1]; /*0x704d52*/
  v45 = v25[2]; /*0x704d5f*/
  v46 = v25[3]; /*0x704d70*/
  v26 = ClipRectIntersection(v47, &DSurface_ViewBounds, &v43, 0, 0); /*0x704d74*/
  v39 = *v26; /*0x704d7c*/
  v40 = v26[1]; /*0x704d83*/
  v41 = v26[2]; /*0x704d90*/
  v42 = v26[3]; /*0x704d97*/
  (*(void (__thiscall **)(int, int *, int))(*(_DWORD *)DSurface_Composite + 20))(DSurface_Composite, &v39, v20); /*0x704da2*/
  if ( a8 ) /*0x704dae*/
  {
    v27 = (0x7FFFFFFF - (int)dword_A8ED84) % 15; /*0x704dc9*/
    result = ClipLine(&v31, &v29, v38); /*0x704dd4*/
    if ( result ) /*0x704ddb*/
      return (*(int (__thiscall **)(int, int *, int *, int, void *, int, _DWORD))(*(_DWORD *)DSurface_Composite + 76))( /*0x704df8*/
               DSurface_Composite,
               &v31,
               &v29,
               v20,
               &unk_843128,
               v27,
               0);
  }
  else
  {
    result = ClipLine(&v31, &v29, v38); /*0x704e14*/
    if ( result ) /*0x704e1b*/
      return (*(int (__thiscall **)(int, int *, int *, int))(*(_DWORD *)DSurface_Composite + 48))( /*0x704e30*/
               DSurface_Composite,
               &v31,
               &v29,
               v20);
  }
  return result; /*0x704dfb*/
}



// ==== 0x00704E40  DrawTacticalLaserLine  this=-  sig=csp ====
// local variable allocation has failed, the output may be wrong!
int __stdcall TacticalMap_DrawLaserLine(int a1, int a2, int a3, int a4, int a5, int a6, int a7)
{
  int v7; // esi
  int *v8; // eax
  int *v9; // eax
  int *v10; // eax
  int *v11; // eax
  DWORD Time; // eax
  int v13; // ecx
  int v14; // esi
  int v15; // edi
  int v16; // ebp
  double v17; // st7
  int result; // eax
  __int16 v19; // [esp+10h] [ebp-90h] BYREF
  unsigned __int8 v20; // [esp+12h] [ebp-8Eh]
  int v21; // [esp+18h] [ebp-88h] BYREF
  int v22; // [esp+1Ch] [ebp-84h]
  int v23; // [esp+20h] [ebp-80h]
  int v24; // [esp+24h] [ebp-7Ch] BYREF
  int v25; // [esp+28h] [ebp-78h]
  __int16 v26; // [esp+2Ch] [ebp-74h] BYREF
  char v27; // [esp+2Eh] [ebp-72h]
  int v28; // [esp+30h] [ebp-70h] BYREF
  int v29; // [esp+34h] [ebp-6Ch]
  int v30; // [esp+38h] [ebp-68h] BYREF
  int v31; // [esp+3Ch] [ebp-64h]
  int v32; // [esp+40h] [ebp-60h]
  int v33; // [esp+44h] [ebp-5Ch]
  int v34; // [esp+48h] [ebp-58h] BYREF
  int v35; // [esp+4Ch] [ebp-54h]
  int v36; // [esp+50h] [ebp-50h]
  int v37; // [esp+54h] [ebp-4Ch]
  int v38; // [esp+58h] [ebp-48h] BYREF
  int v39; // [esp+5Ch] [ebp-44h]
  int v40; // [esp+60h] [ebp-40h]
  int v41; // [esp+64h] [ebp-3Ch] BYREF
  int v42; // [esp+68h] [ebp-38h]
  int v43; // [esp+6Ch] [ebp-34h]
  int v44[4]; // [esp+70h] [ebp-30h] BYREF
  _DWORD v45[4]; // [esp+80h] [ebp-20h] BYREF
  _DWORD v46[4]; // [esp+90h] [ebp-10h] BYREF

  v19 = 0; /*0x704e62*/
  v20 = 0; /*0x704e6c*/
  v26 = -1; /*0x704e71*/
  v27 = -1; /*0x704e79*/
  Coord::To_Screen(g_TacticalClass_Instance, &a1, &v24); /*0x704e7d*/
  Coord::To_Screen(g_TacticalClass_Instance, &a4, &v21); /*0x704e95*/
  v22 += dword_886FA4; /*0x704ec3*/
  v25 += dword_886FA4; /*0x704ece*/
  v29 = v25 - 2; /*0x704eeb*/
  v28 = v24 - 2; /*0x704f13*/
  v7 = ((unsigned __int8)a7 >> g_BitShift_Green_0 << g_BitShift_Red) /*0x704f1e*/
     | (BYTE1(a7) >> g_BitMask_Blue << g_BitMask_Green)
     | (BYTE2(a7) >> g_BitMask_Red << g_BitShift_Blue);
  v8 = Rect::Construct(v45, &v28, 3, 3); /*0x704f25*/
  v34 = *v8; /*0x704f2e*/
  v35 = v8[1]; /*0x704f37*/
  v36 = v8[2]; /*0x704f3e*/
  v37 = v8[3]; /*0x704f50*/
  v9 = ClipRectIntersection(v46, &DSurface_ViewBounds, &v34, 0, 0); /*0x704f5a*/
  v30 = *v9; /*0x704f61*/
  v31 = v9[1]; /*0x704f68*/
  v32 = v9[2]; /*0x704f6f*/
  v33 = v9[3]; /*0x704f7c*/
  (*(void (__thiscall **)(int, int *, int))(*(_DWORD *)DSurface_Composite + 20))(DSurface_Composite, &v30, v7); /*0x704f88*/
  v29 = v22 - 2; /*0x704f9f*/
  v28 = v21 - 2; /*0x704fad*/
  v10 = Rect::Construct(v46, &v28, 3, 3); /*0x704fb1*/
  v30 = *v10; /*0x704fba*/
  v31 = v10[1]; /*0x704fc3*/
  v32 = v10[2]; /*0x704fca*/
  v33 = v10[3]; /*0x704fdc*/
  v11 = ClipRectIntersection(v45, &DSurface_ViewBounds, &v30, 0, 0); /*0x704fe6*/
  v34 = *v11; /*0x704fee*/
  v35 = v11[1]; /*0x704ff5*/
  v36 = v11[2]; /*0x704ffc*/
  v37 = v11[3]; /*0x705009*/
  (*(void (__thiscall **)(int, int *, int))(*(_DWORD *)DSurface_Composite + 20))(DSurface_Composite, &v34, v7); /*0x705014*/
  v44[0] = DSurface_ViewBounds; /*0x705028*/
  v44[1] = dword_886FA4; /*0x705031*/
  v44[2] = dword_886FA8; /*0x705035*/
  v44[3] = dword_886FAC; /*0x705039*/
  Time = timeGetTime(); /*0x70503d*/
  v13 = a1; /*0x70504a*/
  v42 = a2; /*0x705054*/
  v14 = 1; /*0x70505f*/
  v15 = 31; /*0x705064*/
  v23 = 1; /*0x70506c*/
  v41 = a1; /*0x705070*/
  v43 = a3; /*0x705074*/
  v16 = 8; /*0x705078*/
  v28 = 8 * (Time >> 4); /*0x70507d*/
  while ( 1 ) /*0x7050b0*/
  {
    v38 = (v15 * v13 + v14 * a4) / 32; /*0x7050b0*/
    v39 = (v14 * a5 + v15 * a2) / 32; /*0x7050d3*/
    v17 = ((double)v23 - 16.0) * 0.0625; /*0x7050f2*/
    v23 = (v14 * a6 + v15 * a3) / 32; /*0x7050f8*/
    v40 = Math::RoundToInt(v17); /*0x705119*/
    Coord::To_Screen(g_TacticalClass_Instance, &v41, &v24); /*0x70512f*/
    Coord::To_Screen(g_TacticalClass_Instance, &v38, &v21); /*0x705144*/
    v25 += dword_886FA4; /*0x705158*/
    v22 += dword_886FA4; /*0x70516b*/
    if ( ClipLine(&v24, &v21, v44) ) /*0x70516f*/
    {
      v20 = BYTE2(a7); /*0x70518f*/
      v19 = a7; /*0x705195*/
      if ( (((_WORD)v16 - (_WORD)v28) & 0x1F8u) <= 0xF8 && (((_WORD)v16 - (_WORD)v28) & 0x1F8) != 0 ) /*0x7051aa*/
        Color::Lerp((unsigned __int8 *)&v19, (v16 - v28) & 0xF8, (unsigned __int8 *)&v26); /*0x7051b6*/
      (*(void (__thiscall **)(int, int *, int *, int))(*(_DWORD *)DSurface_Composite + 48))( /*0x705226*/
        DSurface_Composite,
        &v24,
        &v21,
        ((unsigned __int8)v19 >> g_BitShift_Green_0 << g_BitShift_Red)
      | (HIBYTE(v19) >> g_BitMask_Blue << g_BitMask_Green)
      | (v20 >> g_BitMask_Red << g_BitShift_Blue));
    }
    result = v38; /*0x705229*/
    ++v14; /*0x705235*/
    v16 += 8; /*0x705236*/
    --v15; /*0x705239*/
    v23 = v14; /*0x705240*/
    v41 = v38; /*0x705244*/
    v42 = v39; /*0x705248*/
    v43 = v40; /*0x70524c*/
    if ( v16 > 256 ) /*0x705250*/
      break; /*0x705250*/
    v13 = a1; /*0x705083*/
  }
  return result; /*0x705256*/
}



// ==== 0x00705270  Render::DrawLine  this=Render  sig=csp ====
int __stdcall Render_DrawLine(int a1, int a2, int a3, int a4, int a5, int a6, int a7, char a8)
{
  int v8; // esi
  int v9; // edi
  char v10; // bl
  _DWORD *v11; // eax
  int *v12; // eax
  int *v13; // eax
  _DWORD *v14; // eax
  int *v15; // eax
  int *v16; // eax
  int v17; // eax
  int *v18; // eax
  int *v19; // eax
  int *v20; // eax
  int *v21; // eax
  int v22; // esi
  int v23; // edi
  int v24; // ebx
  unsigned __int8 v25; // al
  int result; // eax
  int v27; // [esp+24h] [ebp-A0h] BYREF
  int v28; // [esp+28h] [ebp-9Ch]
  int v29; // [esp+2Ch] [ebp-98h] BYREF
  int v30; // [esp+30h] [ebp-94h]
  __int16 v31; // [esp+34h] [ebp-90h] BYREF
  unsigned __int8 v32; // [esp+36h] [ebp-8Eh]
  int v33; // [esp+3Ch] [ebp-88h] BYREF
  int v34; // [esp+40h] [ebp-84h]
  int v35; // [esp+44h] [ebp-80h] BYREF
  int v36; // [esp+48h] [ebp-7Ch]
  int v37; // [esp+4Ch] [ebp-78h]
  int v38; // [esp+50h] [ebp-74h]
  int v39; // [esp+54h] [ebp-70h] BYREF
  int v40; // [esp+58h] [ebp-6Ch]
  int v41; // [esp+5Ch] [ebp-68h]
  int v42; // [esp+60h] [ebp-64h]
  int v43[2]; // [esp+64h] [ebp-60h] BYREF
  int v44[2]; // [esp+6Ch] [ebp-58h] BYREF
  int v45; // [esp+74h] [ebp-50h] BYREF
  int v46; // [esp+78h] [ebp-4Ch]
  int v47; // [esp+7Ch] [ebp-48h]
  int v48; // [esp+80h] [ebp-44h] BYREF
  int v49; // [esp+84h] [ebp-40h]
  int v50; // [esp+88h] [ebp-3Ch]
  int v51[4]; // [esp+8Ch] [ebp-38h] BYREF
  _DWORD v52[2]; // [esp+9Ch] [ebp-28h] BYREF
  _DWORD v53[4]; // [esp+A4h] [ebp-20h] BYREF
  _DWORD v54[4]; // [esp+B4h] [ebp-10h] BYREF

  v31 = 0; /*0x70527a*/
  v32 = 0; /*0x705282*/
  Coord::To_Screen(g_TacticalClass_Instance, &a1, &v29); /*0x70529b*/
  Coord::To_Screen(g_TacticalClass_Instance, &a4, &v33); /*0x7052b3*/
  v30 += dword_886FA4; /*0x7052ce*/
  v34 += dword_886FA4; /*0x70530d*/
  v8 = ((unsigned __int8)a7 >> g_BitShift_Green_0 << g_BitShift_Red) /*0x705348*/
     | (BYTE2(a7) >> g_BitMask_Red << g_BitShift_Blue)
     | (BYTE1(a7) >> g_BitMask_Blue << g_BitMask_Green);
  v27 = (unsigned __int8)word_A83CDA; /*0x705363*/
  v43[0] = v29; /*0x70538d*/
  v9 = (HIBYTE(word_A83CDA) >> g_BitMask_Red << g_BitShift_Blue) /*0x705397*/
     | ((unsigned __int8)word_A83CDA >> g_BitMask_Blue << g_BitMask_Green)
     | ((unsigned __int8)byte_A83CD9 >> g_BitShift_Green_0 << g_BitShift_Red);
  v10 = a8; /*0x705399*/
  v43[1] = v30 + 1; /*0x7053b0*/
  v44[0] = v33; /*0x7053b4*/
  v44[1] = v34 + 1; /*0x7053b8*/
  if ( a8 ) /*0x7053bc*/
  {
    v27 = -2; /*0x7053cb*/
    v28 = -2; /*0x7053dc*/
    v11 = Coord2D::Add(&v27, v52, v43); /*0x7053e6*/
    v12 = Rect::Construct(v53, v11, 3, 3); /*0x7053f3*/
    v39 = *v12; /*0x7053fc*/
    v40 = v12[1]; /*0x705405*/
    v41 = v12[2]; /*0x70540c*/
    v42 = v12[3]; /*0x70541e*/
    v13 = ClipRectIntersection(v54, &DSurface_ViewBounds, &v39, 0, 0); /*0x705428*/
    v35 = *v13; /*0x705430*/
    v36 = v13[1]; /*0x705437*/
    v37 = v13[2]; /*0x70543e*/
    v38 = v13[3]; /*0x70544b*/
    (*(void (__thiscall **)(int, int *, int))(*(_DWORD *)DSurface_Composite + 20))(DSurface_Composite, &v35, v8); /*0x705456*/
    v27 = -2; /*0x705462*/
    v28 = -2; /*0x705466*/
    v14 = Coord2D::Add(&v27, v52, v44); /*0x70547d*/
    v15 = Rect::Construct(v54, v14, 3, 3); /*0x70548a*/
    v35 = *v15; /*0x705493*/
    v36 = v15[1]; /*0x70549c*/
    v37 = v15[2]; /*0x7054a8*/
    v38 = v15[3]; /*0x7054bb*/
    v16 = ClipRectIntersection(v53, &DSurface_ViewBounds, &v35, 0, 0); /*0x7054bf*/
    v39 = *v16; /*0x7054c6*/
    v40 = v16[1]; /*0x7054cd*/
    v41 = v16[2]; /*0x7054d4*/
    v42 = v16[3]; /*0x7054e1*/
    (*(void (__thiscall **)(int, int *, int))(*(_DWORD *)DSurface_Composite + 20))(DSurface_Composite, &v39, v9); /*0x7054ed*/
  }
  v51[0] = DSurface_ViewBounds; /*0x705501*/
  v51[1] = dword_886FA4; /*0x70550b*/
  v51[2] = dword_886FA8; /*0x705511*/
  v51[3] = dword_886FAC; /*0x705518*/
  if ( v10 && ClipLine(v43, v44, v51) ) /*0x70552e*/
  {
    if ( *(_DWORD *)(dword_87F6C4 + 4) == 1 ) /*0x705540*/
      v17 = **(unsigned __int8 **)(dword_87F6C4 + 372); /*0x70554c*/
    else
      v17 = **(unsigned __int16 **)(dword_87F6C4 + 372); /*0x705558*/
    (*(void (__thiscall **)(int, int *, int *, int))(*(_DWORD *)DSurface_Composite + 48))( /*0x70556e*/
      DSurface_Composite,
      v43,
      v44,
      v17);
  }
  v27 = v29 - 2; /*0x705583*/
  v28 = v30 - 2; /*0x70558b*/
  v18 = Rect::Construct(v54, &v27, 3, 3); /*0x705597*/
  v35 = *v18; /*0x7055a0*/
  v36 = v18[1]; /*0x7055a9*/
  v37 = v18[2]; /*0x7055b0*/
  v38 = v18[3]; /*0x7055c2*/
  v19 = ClipRectIntersection(v53, &DSurface_ViewBounds, &v35, 0, 0); /*0x7055cc*/
  v39 = *v19; /*0x7055d4*/
  v40 = v19[1]; /*0x7055db*/
  v41 = v19[2]; /*0x7055e2*/
  v42 = v19[3]; /*0x7055ef*/
  (*(void (__thiscall **)(int, int *, int))(*(_DWORD *)DSurface_Composite + 20))(DSurface_Composite, &v39, v9); /*0x7055fa*/
  v28 = v34 - 2; /*0x705611*/
  v27 = v33 - 2; /*0x70561f*/
  v20 = Rect::Construct(v54, &v27, 3, 3); /*0x705623*/
  v35 = *v20; /*0x70562c*/
  v36 = v20[1]; /*0x705635*/
  v37 = v20[2]; /*0x70563c*/
  v38 = v20[3]; /*0x70564e*/
  v21 = ClipRectIntersection(v53, &DSurface_ViewBounds, &v35, 0, 0); /*0x705658*/
  v39 = *v21; /*0x705660*/
  v40 = v21[1]; /*0x705667*/
  v41 = v21[2]; /*0x70566e*/
  v42 = v21[3]; /*0x70567b*/
  (*(void (__thiscall **)(int, int *, int))(*(_DWORD *)DSurface_Composite + 20))(DSurface_Composite, &v39, v8); /*0x705686*/
  v45 = a1; /*0x70569e*/
  v46 = a2; /*0x7056a2*/
  v47 = a3; /*0x7056a6*/
  v22 = 1; /*0x7056aa*/
  v23 = 63; /*0x7056af*/
  v24 = 252; /*0x7056b4*/
  do /*0x705841*/
  {
    v48 = (v22 * a4 + v23 * a1) / 64; /*0x7056ec*/
    v49 = (v22 * a5 + v23 * a2) / 64; /*0x705705*/
    v50 = (v22 * a6 + v23 * a3) / 64; /*0x705728*/
    Coord::To_Screen(g_TacticalClass_Instance, &v45, &v29); /*0x705732*/
    Coord::To_Screen(g_TacticalClass_Instance, &v48, &v33); /*0x705747*/
    v30 += dword_886FA4; /*0x705761*/
    v34 += dword_886FA4; /*0x70576e*/
    if ( ClipLine(&v29, &v33, v51) ) /*0x705772*/
    {
      v31 = a7; /*0x705794*/
      v32 = BYTE2(a7); /*0x705799*/
      v25 = v24; /*0x70579d*/
      if ( v24 >= 254 ) /*0x70579f*/
        v25 = -2; /*0x7057a1*/
      Color::Lerp((unsigned __int8 *)&v31, v25, (unsigned __int8 *)&byte_A83CD9); /*0x7057b0*/
      (*(void (__thiscall **)(int, int *, int *, int))(*(_DWORD *)DSurface_Composite + 48))( /*0x70581e*/
        DSurface_Composite,
        &v29,
        &v33,
        ((unsigned __int8)v31 >> g_BitShift_Green_0 << g_BitShift_Red)
      | (HIBYTE(v31) >> g_BitMask_Blue << g_BitMask_Green)
      | (v32 >> g_BitMask_Red << g_BitShift_Blue));
    }
    result = v50; /*0x705829*/
    ++v22; /*0x70582d*/
    --v23; /*0x70582e*/
    v24 -= 4; /*0x70582f*/
    v45 = v48; /*0x705835*/
    v46 = v49; /*0x705839*/
    v47 = v50; /*0x70583d*/
  }
  while ( v22 <= 64 ); /*0x705841*/
  return result; /*0x705847*/
}



// ==== 0x00705860  TechnoClass::DrawAirstrikeFlare_SetContext  this=ObjectClass  sig=csp ====
int __stdcall TechnoClass::DrawAirstrikeFlare_SetContext(int a1, int a2, int a3, int a4, int a5, int a6)
{
  int v6; // ebp
  int v7; // ebx
  int v8; // edx
  int result; // eax
  int *v10; // edi
  int v11; // eax
  int v12; // eax
  int v13; // ecx
  int v14; // esi
  int v15; // edx
  int v16; // esi
  int v17; // ebx
  int v18; // esi
  bool v19; // cc
  unsigned __int8 v20; // [esp+30h] [ebp-60h] BYREF
  __int16 v21; // [esp+31h] [ebp-5Fh]
  int v22; // [esp+34h] [ebp-5Ch]
  int v23; // [esp+38h] [ebp-58h]
  int v24; // [esp+3Ch] [ebp-54h]
  int v25; // [esp+40h] [ebp-50h] BYREF
  int v26; // [esp+44h] [ebp-4Ch]
  signed int v27; // [esp+48h] [ebp-48h]
  signed int v28; // [esp+4Ch] [ebp-44h]
  int v29; // [esp+50h] [ebp-40h] BYREF
  int v30; // [esp+54h] [ebp-3Ch]
  int v31; // [esp+58h] [ebp-38h] BYREF
  int v32; // [esp+5Ch] [ebp-34h]
  int v33; // [esp+60h] [ebp-30h] BYREF
  int v34; // [esp+64h] [ebp-2Ch]
  int v35; // [esp+68h] [ebp-28h] BYREF
  int v36; // [esp+6Ch] [ebp-24h]
  int v37; // [esp+70h] [ebp-20h] BYREF
  int v38; // [esp+74h] [ebp-1Ch]
  int v39; // [esp+78h] [ebp-18h] BYREF
  int v40; // [esp+7Ch] [ebp-14h]
  int v41; // [esp+80h] [ebp-10h] BYREF
  int v42; // [esp+84h] [ebp-Ch]
  int v43; // [esp+88h] [ebp-8h]
  int v44; // [esp+8Ch] [ebp-4h]

  Coord::To_Screen(g_TacticalClass_Instance, &a1, &v41); /*0x705875*/
  Coord::To_Screen(g_TacticalClass_Instance, &a4, &v31); /*0x70588a*/
  v6 = -32 - ZCoordToScreenY(a3); /*0x7058a4*/
  v7 = -32 - ZCoordToScreenY(a6); /*0x7058b4*/
  v28 = abs32(v31 - v41); /*0x7058c5*/
  v8 = *(_DWORD *)g_DSurface_Hidden_2; /*0x7058da*/
  v27 = abs32(v32 - v42); /*0x7058dc*/
  result = (*(int (__thiscall **)(int))(v8 + 132))(g_DSurface_Hidden_2); /*0x7058e0*/
  if ( (_BYTE)result ) /*0x7058e8*/
  {
    v10 = (int *)g_DSurface_Hidden_2; /*0x7058f0*/
    v11 = Random::Range(Randomizer_Global, 190, 270); /*0x705905*/
    v21 = 0; /*0x70590c*/
    if ( v11 <= 255 ) /*0x70591c*/
    {
      v20 = v11; /*0x705972*/
    }
    else
    {
      v20 = -1; /*0x705925*/
      LOBYTE(v21) = (char)(110 * v11) / 14; /*0x705950*/
      HIBYTE(v21) = (char)(30 * v11) / 14; /*0x70596c*/
    }
    v12 = v32; /*0x705976*/
    v13 = v42; /*0x70597a*/
    if ( v32 < v42 ) /*0x705980*/
    {
      v14 = 255 >> g_BitShift_Green_0 << g_BitShift_Red; /*0x7059c5*/
      v29 = v31 + 1; /*0x7059cc*/
      v25 = v31 - 2; /*0x7059d0*/
      v26 = v32 + 1; /*0x7059d8*/
      v30 = v32 + 1; /*0x7059dc*/
      (*(void (__thiscall **)(int *, int *, int *, int))(*v10 + 48))(v10, &v25, &v29, v14); /*0x7059eb*/
      v15 = *v10; /*0x7059f2*/
      v25 = v31 - 2; /*0x7059f9*/
      v29 = v31 + 1; /*0x705a01*/
      v26 = v32; /*0x705a05*/
      v30 = v32; /*0x705a09*/
      (*(void (__thiscall **)(int *, int *, int *, int))(v15 + 48))(v10, &v25, &v29, v14); /*0x705a19*/
      v26 = v32 - 1; /*0x705a2e*/
      v30 = v32 + 2; /*0x705a32*/
      v25 = v31 - 1; /*0x705a3a*/
      v29 = v31 - 1; /*0x705a3e*/
      (*(void (__thiscall **)(int *, int *, int *, int))(*v10 + 48))(v10, &v25, &v29, v14); /*0x705a4c*/
      v25 = v31; /*0x705a58*/
      v30 = v32 + 2; /*0x705a62*/
      v26 = v32 - 1; /*0x705a66*/
      v29 = v31; /*0x705a72*/
      (*(void (__thiscall **)(int *, int *, int *, int))(*v10 + 48))(v10, &v25, &v29, v14); /*0x705a7c*/
      v13 = v42; /*0x705a7f*/
      v12 = v32; /*0x705a83*/
    }
    v16 = v41; /*0x705a8b*/
    v44 = v12 - v13; /*0x705a95*/
    v43 = v31 - v41; /*0x705a9b*/
    v29 = v7 - v6; /*0x705a9f*/
    v24 = v7 - v6; /*0x705aa3*/
    v17 = 100; /*0x705aab*/
    v35 = v41; /*0x705ab0*/
    v36 = v13; /*0x705ab4*/
    v23 = v12 - v13; /*0x705ab8*/
    v22 = v31 - v41; /*0x705abc*/
    v25 = 0; /*0x705ac0*/
    while ( 1 ) /*0x705ae1*/
    {
      v33 = v16 + v22 / 4; /*0x705ae1*/
      v34 = v13 + v23 / 4; /*0x705af8*/
      v18 = v6 + v24 / 4; /*0x705b15*/
      AudioStream::DrawWaveform(v10, &DSurface_ViewBounds, &v35, &v33, &v20, v25 / 4 + 255, v6, v18); /*0x705b34*/
      if ( v28 <= v27 ) /*0x705b43*/
      {
        v39 = v35 + 1; /*0x705bc8*/
        v40 = v36; /*0x705bd1*/
        v37 = v33 + 1; /*0x705bd6*/
        v38 = v34; /*0x705bdf*/
        AudioStream::DrawWaveform(v10, &DSurface_ViewBounds, &v39, &v37, &v20, v17, v6, v18); /*0x705bf6*/
        v39 = v35 - 1; /*0x705c08*/
        v40 = v36; /*0x705c11*/
        v37 = v33 - 1; /*0x705c16*/
        v38 = v34; /*0x705c1f*/
      }
      else
      {
        v39 = v35; /*0x705b51*/
        v40 = v36 + 1; /*0x705b5a*/
        v37 = v33; /*0x705b60*/
        v38 = v34 + 1; /*0x705b69*/
        AudioStream::DrawWaveform(v10, &DSurface_ViewBounds, &v39, &v37, &v20, v17, v6, v18); /*0x705b80*/
        v39 = v35; /*0x705b91*/
        v40 = v36 - 1; /*0x705b9a*/
        v37 = v33; /*0x705ba0*/
        v38 = v34 - 1; /*0x705ba9*/
      }
      AudioStream::DrawWaveform(v10, &DSurface_ViewBounds, &v39, &v37, &v20, v17, v6, v18); /*0x705bb9*/
      v35 = v33; /*0x705c47*/
      v36 = v34; /*0x705c4f*/
      v6 = v18; /*0x705c57*/
      v22 += v43; /*0x705c65*/
      v23 += v44; /*0x705c6d*/
      result = v25 - 255; /*0x705c75*/
      v17 -= 25; /*0x705c7a*/
      v19 = v25 - 255 < -765; /*0x705c7f*/
      v24 += v29; /*0x705c84*/
      v25 -= 255; /*0x705c88*/
      if ( v19 ) /*0x705c8c*/
        break; /*0x705c8c*/
      v13 = v42; /*0x705aca*/
      v16 = v41; /*0x705ace*/
    }
  }
  return result; /*0x705c94*/
}



// ==== 0x00705CA0  TechnoClass::GetBridgeAwareCoords  this=TechnoClass  sig=csp ====
int __thiscall BuildingClass::GetBridgeAwareCoords(TechnoClass *this)
{
  AbstractClass *target; // ecx
  int *v3; // ecx
  int *location; // esi
  _BYTE v6[12]; // [esp+4h] [ebp-Ch] BYREF
  int *v7; // [esp+14h] [ebp+4h]

  if ( (*((int (__thiscall **)(TechnoClass *))this->RadioClass + 97))(this) == 1 && (target = this->target) != 0 ) /*0x705cbb*/
  {
    v3 = (int *)(*((int (__thiscall **)(AbstractClass *, _BYTE *))target->vtable0 + 22))(target, v6); /*0x705cc7*/
    *v7 = *v3; /*0x705cd1*/
    v7[1] = v3[1]; /*0x705cd6*/
    v7[2] = v3[2]; /*0x705cdd*/
    return (int)v7; /*0x705cc9*/
  }
  else
  {
    location = this->?; /*0x705cea*/
    *v7 = *location; /*0x705cf4*/
    v7[1] = location[1]; /*0x705cf9*/
    v7[2] = location[2]; /*0x705d00*/
    return (int)v7; /*0x705ce6*/
  }
}



// ==== 0x00705D10  BuildingClass::SetType  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass::SetType(BuildingClass *this, int a2)
{
  this->? = (void *)a2; /*0x705d14*/
  return a2; /*0x705d1a*/
}



// ==== 0x00705D20  BuildingClass::GetType  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass::GetType(BuildingClass *this)
{
  return (int)this->?; /*0x705d26*/
}



// ==== 0x00705D50  TechnoClass::IsNotBusy  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::IsNotBusy(TechnoClass *this)
{
  int result; // eax

  result = (*((int (__thiscall **)(TechnoClass *))this->RadioClass + 118))(this); /*0x705d52*/
  LOBYTE(result) = (_BYTE)result == 0; /*0x705d5a*/
  return result; /*0x705d5d*/
}



// ==== 0x00705D60  BuildingClass::GetType_Thunk  this=BuildingClass  sig=ida-proto ====
// attributes: thunk
char __thiscall BuildingClass::GetType_Thunk(_DWORD *this)
{
  return BuildingClass::GetObjectData(this);
}



// ==== 0x00705D70  TechnoClass::GetBuildAnim  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::GetBuildAnim(TechnoClass *this)
{
  int v2; // eax
  int v3; // edi

  v2 = *(_DWORD *)((*((int (__thiscall **)(TechnoClass *))this->RadioClass + 33))(this) + 3568); /*0x705d82*/
  v3 = this->owner->startingCell[0]; /*0x705d8a*/
  if ( v2 ) /*0x705d90*/
    return *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(v2 + 4) + 4 * v3) + 780); /*0x705d9a*/
  if ( (*((unsigned __int8 (__thiscall **)(TechnoClass *, Object *))this->RadioClass + 272))(this, dword_A83D4C) /*0x705dbb*/
    || !(*((int (__thiscall **)(TechnoClass *, int))this->RadioClass + 52))(this, 1) )
  {
    return *(_DWORD *)(*(_DWORD *)(*(_DWORD *)&stru_B054D0.m_1[3] + 4 * v3) + 780); /*0x705df3*/
  }
  return *(_DWORD *)(*(_DWORD *)(*(_DWORD *)&stru_B054D0.m_1[3] /*0x705d98*/
                               + 4
                               * *(_DWORD *)((*((int (__thiscall **)(TechnoClass *, int))this->RadioClass + 52))(
                                               this,
                                               1)
                                           + 90196))
                   + 780);
}



// ==== 0x00706640  TechnoClass::UpdateState  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::UpdateState(TechnoClass *this)
{
  int v1; // edi
  int v3; // esi
  int result; // eax
  int (__thiscall **vtable0)(TechnoClass *, _DWORD); // eax
  int v6; // edi
  int v7; // eax
  SortedStateVector *v8; // ebx
  _DWORD *v9; // eax
  int v10; // eax
  __int16 **v11; // eax
  __int16 *v12; // eax
  void *v13; // eax
  int (__thiscall **v14)(TechnoClass *); // edx
  int v15; // esi
  int v16; // ecx
  int v17; // eax
  int v18; // edx
  int v19; // esi
  int *v20; // eax
  int v21; // eax
  int v22; // edi
  int v23; // esi
  int v24; // eax
  int v25; // ecx
  int v26; // eax
  _DWORD *v27; // edx
  int v28; // eax
  int *v29; // eax
  int v30; // ebp
  int v31; // edi
  int v32; // ebp
  int v33; // esi
  int v34; // eax
  int v35; // ecx
  int v36; // eax
  _DWORD *v37; // edx
  SortedStateVector v38; // eax
  SortedStateVector v39; // eax
  _BYTE v40[4]; // [esp+10h] [ebp-40h] BYREF
  int v41; // [esp+14h] [ebp-3Ch]
  int v42; // [esp+18h] [ebp-38h]
  int v43; // [esp+1Ch] [ebp-34h]
  int v44[4]; // [esp+28h] [ebp-28h] BYREF
  int v45[6]; // [esp+38h] [ebp-18h] BYREF
  _DWORD *v46; // [esp+54h] [ebp+4h]
  unsigned int v47; // [esp+58h] [ebp+8h]
  int v48; // [esp+5Ch] [ebp+Ch] BYREF
  SortedStateVector *v49; // [esp+60h] [ebp+10h]
  int *v50; // [esp+64h] [ebp+14h]
  _DWORD *appended; // [esp+68h] [ebp+18h]
  const void *v52; // [esp+6Ch] [ebp+1Ch]
  int v53; // [esp+70h] [ebp+20h]
  int v54; // [esp+74h] [ebp+24h]
  int v55; // [esp+78h] [ebp+28h]

  v1 = v55; /*0x706647*/
  v3 = 0x2000; /*0x70664f*/
  if ( !v55 ) /*0x706654*/
  {
    result = (*((int (__thiscall **)(TechnoClass *, _DWORD, _DWORD))this->RadioClass + 26))(this, 0, 0) - 1; /*0x70665e*/
    switch ( result ) /*0x706664*/
    {
      case 0: /*0x706664*/
        v3 = 8194; /*0x706683*/
        goto LABEL_8; /*0x706688*/
      case 1: /*0x706664*/
      case 2: /*0x706664*/
        v3 = 8196; /*0x70668a*/
        goto LABEL_8; /*0x70668a*/
      case 3: /*0x706664*/
        if ( this->cloakProgress[0] ) /*0x70666b*/
          v3 = 8204; /*0x70667c*/
        else
          v3 = 8202; /*0x706675*/
        goto LABEL_8; /*0x70667a*/
      case 4: /*0x706664*/
        return result;
      default:
        goto LABEL_8;
    }
    return result;
  }
LABEL_8:
  if ( ((*((unsigned __int8 (__thiscall **)(TechnoClass *))this->RadioClass + 117))(this)
     || (*((unsigned __int8 (__thiscall **)(TechnoClass *))this->RadioClass + 118))(this))
    && ((*((int (__thiscall **)(TechnoClass *))this->RadioClass + 11))(this) != 1 || !*((_BYTE *)this + 1747)) )
  {
    if ( this
      && (*((int (__thiscall **)(TechnoClass *))this->RadioClass + 11))(this) == 6
      && *((_BYTE *)((*((int (__thiscall **)(TechnoClass *))this->RadioClass + 11))(this) == 6
                   ? this + 1
                   : (TechnoClass *)1312)->RadioClass
         + 5809) )
    {
      v3 |= 0x2006u; /*0x7066f8*/
    }
    else
    {
      v3 |= 0x2004u; /*0x706700*/
    }
  }
  if ( (unsigned __int8)House::IsHumanPlayer((House *)this->owner) /*0x706731*/
    && (*((unsigned __int8 (__thiscall **)(TechnoClass *))this->RadioClass + 49))(this)
    && ((*((int (__thiscall **)(TechnoClass *))this->RadioClass + 11))(this) != 1 || !*((_BYTE *)this + 1747)) )
  {
    v3 = (*((int (__thiscall **)(TechnoClass *, int))this->RadioClass + 271))(this, v3); /*0x706747*/
  }
  v44[0] = *v50; /*0x706759*/
  v55 = ~v1 & (v3 | 0x800); /*0x70675d*/
  v44[1] = v50[1]; /*0x706764*/
  v44[2] = v50[2]; /*0x70676b*/
  vtable0 = (int (__thiscall **)(TechnoClass *, _DWORD))this->RadioClass; /*0x706776*/
  v44[3] = v50[3]; /*0x70677c*/
  v6 = vtable0[281](this, v53); /*0x70678b*/
  if ( (*((unsigned __int8 (__thiscall **)(TechnoClass *))this->RadioClass + 88))(this)
    || this
    && (*((int (__thiscall **)(TechnoClass *))this->RadioClass + 11))(this) == 6
    && this->airstrike
    && this->airstrike->AirstrikeClass_field_50 == ((*((int (__thiscall **)(TechnoClass *))this->RadioClass + 11))(this) == 6
                                                  ? (unsigned int)this
                                                  : 0) )
  {
    v7 = TechnoClass::InvulnerabilityIntensity_SetContext(this, v6); /*0x7067d5*/
    v6 = TechnoClass::CalcFlashAlpha(this, v7); /*0x7067e2*/
  }
  v8 = v49; /*0x7067e8*/
  if ( v48 != -1 ) /*0x7067f1*/
  {
    if ( !v49 || *(_BYTE *)((*((int (__thiscall **)(TechnoClass *))this->RadioClass + 33))(this) + 3518) ) /*0x706806*/
    {
      v48 = -1; /*0x706875*/
      goto LABEL_41; /*0x706875*/
    }
    if ( v8[1] ) /*0x706810*/
    {
      v9 = (_DWORD *)v8[4]; /*0x706817*/
      if ( v9 && *v9 == v48 ) /*0x706826*/
        goto LABEL_36; /*0x706826*/
      v10 = SortedStateVector::BinarySearch(v8, &v48); /*0x70682f*/
      if ( v10 ) /*0x706836*/
      {
        v8[4] = (SortedStateVector)v10; /*0x706838*/
LABEL_36:
        v11 = (__int16 **)(*(_DWORD *)&v8[4] + 4); /*0x70683b*/
        goto LABEL_38; /*0x706841*/
      }
    }
    v11 = (__int16 **)&unk_B78824; /*0x706843*/
LABEL_38:
    v12 = *v11; /*0x706848*/
    if ( v12 ) /*0x70684c*/
    {
      Surface::BlitTechnoTo((Surface *)this, v12, appended, v44, v55, v6, v54); /*0x706866*/
      return result; /*0x706872*/
    }
  }
LABEL_41:
  result = (int)v46; /*0x706879*/
  if ( !*v46 || !v46[1] ) /*0x706886*/
    return result; /*0x706886*/
  v13 = RenderTechnoClassVoxel((int *)this, (int)v40, v40, v46, v52, (int)appended, v44, v47, v55, v6, v54); /*0x7068bb*/
  v14 = (int (__thiscall **)(TechnoClass *))this->RadioClass; /*0x7068c0*/
  qmemcpy(v45, v13, sizeof(v45)); /*0x7068ce*/
  v15 = v45[4]; /*0x7068d0*/
  v55 = v45[4]; /*0x7068da*/
  v54 = v45[5]; /*0x7068de*/
  result = v14[11](this); /*0x7068e2*/
  if ( result == 1 ) /*0x7068e8*/
  {
    v16 = v45[1] + appended[1]; /*0x7068ff*/
    v17 = v45[0] + *appended; /*0x706907*/
    if ( dword_B1CFC8 <= 0 || dword_B1CFCC <= 0 ) /*0x706919*/
    {
      v18 = v45[0] + *appended; /*0x7069d7*/
      result = v15; /*0x7069d9*/
      v19 = v54; /*0x7069db*/
    }
    else if ( v15 <= 0 || v54 <= 0 ) /*0x70692d*/
    {
      v18 = dword_B1CFC0; /*0x7069c1*/
      v16 = dword_B1CFC4; /*0x7069c7*/
      v19 = dword_B1CFCC; /*0x7069cd*/
      result = dword_B1CFC8; /*0x7069d3*/
    }
    else
    {
      v18 = dword_B1CFC0; /*0x706933*/
      v42 = dword_B1CFC8; /*0x70693f*/
      v41 = dword_B1CFC4; /*0x70694b*/
      v43 = dword_B1CFCC; /*0x70694f*/
      if ( dword_B1CFC0 > v17 ) /*0x706953*/
      {
        v18 = v17; /*0x70695d*/
        v42 += dword_B1CFC0 - v17; /*0x70695f*/
      }
      if ( dword_B1CFC4 > v16 ) /*0x706965*/
      {
        v41 = v16; /*0x70696f*/
        v43 += dword_B1CFC4 - v16; /*0x706973*/
      }
      if ( v18 + v42 < v17 + v55 ) /*0x706985*/
        v42 = v17 - v18 + v55 + 1; /*0x706991*/
      v19 = v43; /*0x706995*/
      if ( v43 + v41 < v16 + v54 ) /*0x7069a7*/
        v19 = v16 - v41 + v54 + 1; /*0x7069b3*/
      v16 = v41; /*0x7069b7*/
      result = v42; /*0x7069bb*/
    }
    dword_B1CFC0 = v18; /*0x7069df*/
    dword_B1CFC4 = v16; /*0x7069e5*/
    dword_B1CFC8 = result; /*0x7069eb*/
    dword_B1CFCC = v19; /*0x7069f0*/
  }
  if ( v48 == -1 ) /*0x7069fb*/
    return result; /*0x7069fb*/
  v20 = Miles::DriverGet(); /*0x706a06*/
  appended = (_DWORD *)Buffer::AppendCellData(&stru_887460, v20, (int)v45); /*0x706a18*/
  if ( appended ) /*0x706a1c*/
  {
    v21 = (int)v8[2]; /*0x706a25*/
    if ( *(_DWORD *)&v8[1] + 1 <= v21 ) /*0x706a2b*/
    {
LABEL_70:
      *(_DWORD *)(*(_DWORD *)v8 + 8 * *(_DWORD *)&v8[1]) = v48; /*0x706ab7*/
      *(_DWORD *)(*(_DWORD *)v8 + 8 * *(_DWORD *)&v8[1] + 4) = appended; /*0x706acc*/
LABEL_82:
      v39 = v8[1]; /*0x706ba2*/
      v8[3].__tail_0[0] = 0; /*0x706ba5*/
      result = *(_DWORD *)&v39 + 1; /*0x706ba9*/
      v8[1] = (SortedStateVector)result; /*0x706baa*/
      return result; /*0x706baa*/
    }
    if ( v21 ) /*0x706a33*/
    {
      v54 = (int)v8[2]; /*0x706a41*/
      if ( v21 < 0 ) /*0x706a45*/
        goto LABEL_71; /*0x706a45*/
    }
    else
    {
      v54 = 10; /*0x706a35*/
    }
    v22 = v21 + v54; /*0x706a4f*/
    v23 = __2_YAPAXI_Z(8 * (v21 + v54)); /*0x706a5f*/
    if ( v23 ) /*0x706a66*/
    {
      v24 = (int)v8[1]; /*0x706a68*/
      v25 = 0; /*0x706a6c*/
      v55 = v22 - 1; /*0x706a6e*/
      if ( v24 > 0 ) /*0x706a74*/
      {
        do /*0x706a95*/
        {
          v26 = 8 * v25; /*0x706a78*/
          v27 = (_DWORD *)(*(_DWORD *)v8 + 8 * v25++); /*0x706a81*/
          *(_DWORD *)(v26 + v23) = *v27; /*0x706a86*/
          *(_DWORD *)(v26 + v23 + 4) = v27[1]; /*0x706a8c*/
        }
        while ( v25 < *(_DWORD *)&v8[1] ); /*0x706a95*/
      }
      __3_YAXPAX_Z(*(void **)v8); /*0x706a9a*/
      v28 = v54 + *(_DWORD *)&v8[2]; /*0x706aa9*/
      *v8 = (SortedStateVector)v23; /*0x706aab*/
      v8[2] = (SortedStateVector)v28; /*0x706aad*/
      v8[4] = 0; /*0x706ab0*/
      goto LABEL_70; /*0x706ab0*/
    }
  }
LABEL_71:
  (*((void (__thiscall **)(TechnoClass *))this->RadioClass + 34))(this); /*0x706ad5*/
  TechnoClass::ClearArrays(); /*0x706ae0*/
  result = (int)appended; /*0x706ae5*/
  if ( !appended ) /*0x706aeb*/
  {
    v29 = Miles::DriverGet(); /*0x706af2*/
    result = Buffer::AppendCellData(&stru_887460, v29, (int)v45); /*0x706afd*/
    appended = (_DWORD *)result; /*0x706b02*/
  }
  v30 = (int)v8[2]; /*0x706b09*/
  if ( *(_DWORD *)&v8[1] + 1 <= v30 ) /*0x706b0f*/
    goto LABEL_81; /*0x706b0f*/
  if ( v30 ) /*0x706b13*/
  {
    v31 = (int)v8[2]; /*0x706b1c*/
    if ( v30 < 0 ) /*0x706b20*/
      return result; /*0x706b20*/
  }
  else
  {
    v31 = 10; /*0x706b15*/
  }
  v32 = v31 + v30; /*0x706b26*/
  result = __2_YAPAXI_Z(8 * v32); /*0x706b30*/
  v33 = result; /*0x706b35*/
  if ( result ) /*0x706b3c*/
  {
    v34 = (int)v8[1]; /*0x706b3e*/
    v35 = 0; /*0x706b42*/
    v54 = v32 - 1; /*0x706b44*/
    if ( v34 > 0 ) /*0x706b4a*/
    {
      do /*0x706b6b*/
      {
        v36 = 8 * v35; /*0x706b4e*/
        v37 = (_DWORD *)(*(_DWORD *)v8 + 8 * v35++); /*0x706b57*/
        *(_DWORD *)(v36 + v33) = *v37; /*0x706b5c*/
        *(_DWORD *)(v36 + v33 + 4) = v37[1]; /*0x706b62*/
      }
      while ( v35 < *(_DWORD *)&v8[1] ); /*0x706b6b*/
    }
    __3_YAXPAX_Z(*(void **)v8); /*0x706b70*/
    v38 = v8[2]; /*0x706b75*/
    *v8 = (SortedStateVector)v33; /*0x706b7d*/
    v8[2] = (SortedStateVector)(v31 + *(_DWORD *)&v38); /*0x706b7f*/
    v8[4] = 0; /*0x706b82*/
LABEL_81:
    *(_DWORD *)(*(_DWORD *)v8 + 8 * *(_DWORD *)&v8[1]) = v48; /*0x706b89*/
    *(_DWORD *)(*(_DWORD *)v8 + 8 * *(_DWORD *)&v8[1] + 4) = appended; /*0x706b9e*/
    goto LABEL_82; /*0x706b9e*/
  }
  return result; /*0x70686b*/
}



// ==== 0x00706BD0  ObjectClass::QueueTechnoVoiceLine  this=ObjectClass  sig=csp ====
int __thiscall QueueTechnoVoiceLine(
        TechnoClass *this,
        _BYTE **a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        unsigned __int8 a9,
        int a10,
        int a11,
        int a12)
{
  int result; // eax
  int v14; // ebx
  size_t v15; // ecx
  _DWORD *v16; // eax
  int v17; // edx
  void *v18; // ecx
  int v19; // eax
  __int16 **v20; // eax
  __int16 *v21; // eax
  int *v22; // eax
  int appended; // esi
  int v24; // eax
  int v25; // ebx
  int v26; // esi
  int i; // ecx
  int v28; // eax
  _DWORD *v29; // edx
  int v30; // eax
  TechnoClass *v31; // edi
  int v32; // eax
  int *v33; // eax
  int v34; // eax
  int v35; // eax
  int v37; // [esp+14h] [ebp-38h] BYREF
  int v38[6]; // [esp+1Ch] [ebp-30h] BYREF
  _BYTE v39[24]; // [esp+34h] [ebp-18h] BYREF
  int v40; // [esp+6Ch] [ebp+20h]

  result = this->cloakState; /*0x706bdd*/
  if ( result ) /*0x706be5*/
    return result; /*0x706be5*/
  result = (*(int (__thiscall **)(TechnoClass *))(this->vtable0 + 132))(this); /*0x706bed*/
  if ( *(_BYTE *)(result + 3480) || **a2 ) /*0x706c07*/
    return result; /*0x706c0a*/
  v14 = a4; /*0x706c10*/
  if ( a4 == -1 ) /*0x706c1b*/
  {
LABEL_21:
    result = (int)RenderTechnoOverlaySHP(this, v39, (int)a2, a8, a7, (_DWORD *)a6, a3, 8193, v14 != -1, a10, a11, a12); /*0x706ced*/
    qmemcpy(v38, (const void *)result, sizeof(v38)); /*0x706d3a*/
    if ( v14 == -1 ) /*0x706d3c*/
      return result; /*0x706d3c*/
    v22 = Miles::DriverGet(); /*0x706d47*/
    appended = Buffer::AppendCellData(&stru_887460, v22, (int)v38); /*0x706d57*/
    v40 = appended; /*0x706d5b*/
    if ( !appended ) /*0x706d5f*/
      goto LABEL_34; /*0x706d5f*/
    v24 = *(_DWORD *)(a5 + 8); /*0x706d68*/
    if ( *(_DWORD *)(a5 + 4) + 1 <= v24 ) /*0x706d6e*/
    {
LABEL_31:
      v31 = this; /*0x706df8*/
      *(_DWORD *)(*(_DWORD *)a5 + 8 * *(_DWORD *)(a5 + 4)) = v14; /*0x706e02*/
      *(_DWORD *)(*(_DWORD *)a5 + 8 * *(_DWORD *)(a5 + 4) + 4) = appended; /*0x706e0b*/
      v32 = *(_DWORD *)(a5 + 4) + 1; /*0x706e12*/
      *(_BYTE *)(a5 + 12) = 0; /*0x706e13*/
      *(_DWORD *)(a5 + 4) = v32; /*0x706e17*/
      return QueueTechnoVoiceLine(v31, a2, a3, v14, a5, a6, a7, a8, 0, 0, 0, 0); /*0x706ebf*/
    }
    if ( v24 ) /*0x706d76*/
    {
      v25 = *(_DWORD *)(a5 + 8); /*0x706d7f*/
      if ( v24 < 0 ) /*0x706d83*/
      {
        v14 = a4; /*0x706e26*/
        goto LABEL_34; /*0x706e26*/
      }
    }
    else
    {
      v25 = 10; /*0x706d78*/
    }
    v26 = __2_YAPAXI_Z(8 * (v24 + v25)); /*0x706d99*/
    if ( v26 ) /*0x706da0*/
    {
      for ( i = 0; i < *(_DWORD *)(a5 + 4); *(_DWORD *)(v28 + v26 + 4) = v29[1] ) /*0x706dae*/
      {
        v28 = 8 * i; /*0x706db3*/
        v29 = (_DWORD *)(*(_DWORD *)a5 + 8 * i++); /*0x706dbc*/
        *(_DWORD *)(v28 + v26) = *v29; /*0x706dc1*/
      }
      __3_YAXPAX_Z(*(void **)a5); /*0x706dd6*/
      v30 = v25 + *(_DWORD *)(a5 + 8); /*0x706de1*/
      v14 = a4; /*0x706de3*/
      *(_DWORD *)a5 = v26; /*0x706de7*/
      appended = v40; /*0x706dea*/
      *(_DWORD *)(a5 + 8) = v30; /*0x706dee*/
      *(_DWORD *)(a5 + 16) = 0; /*0x706df1*/
      goto LABEL_31; /*0x706df1*/
    }
    v14 = a4; /*0x706e1c*/
    appended = v40; /*0x706e20*/
LABEL_34:
    v31 = this; /*0x706e2a*/
    (*(void (__thiscall **)(TechnoClass *))(this->vtable0 + 136))(this); /*0x706e32*/
    TechnoClass::ClearArrays(); /*0x706e38*/
    if ( !appended ) /*0x706e3f*/
    {
      v33 = Miles::DriverGet(); /*0x706e46*/
      appended = Buffer::AppendCellData(&stru_887460, v33, (int)v38); /*0x706e5a*/
    }
    v34 = *(_DWORD *)(a5 + 8); /*0x706e5f*/
    if ( *(_DWORD *)(a5 + 4) + 1 <= v34 ) /*0x706e65*/
      goto LABEL_40; /*0x706e65*/
    if ( !v34 ) /*0x706e69*/
      v34 = 10; /*0x706e6b*/
    if ( Object_Helper_710750(a5, v34) ) /*0x706e73*/
    {
LABEL_40:
      *(_DWORD *)(*(_DWORD *)a5 + 8 * *(_DWORD *)(a5 + 4)) = v14; /*0x706e82*/
      *(_DWORD *)(*(_DWORD *)a5 + 8 * *(_DWORD *)(a5 + 4) + 4) = appended; /*0x706e8b*/
      v35 = *(_DWORD *)(a5 + 4) + 1; /*0x706e92*/
      *(_BYTE *)(a5 + 12) = 0; /*0x706e93*/
      *(_DWORD *)(a5 + 4) = v35; /*0x706e97*/
    }
    return QueueTechnoVoiceLine(v31, a2, a3, v14, a5, a6, a7, a8, 0, 0, 0, 0); /*0x706e97*/
  }
  if ( !a5 || *(_BYTE *)((*(int (__thiscall **)(TechnoClass *))(this->vtable0 + 132))(this) + 3519) ) /*0x706c33*/
  {
    a4 = -1; /*0x706ce1*/
    v14 = -1; /*0x706ce9*/
    goto LABEL_21; /*0x706ce9*/
  }
  v15 = *(_DWORD *)(a5 + 4); /*0x706c41*/
  if ( v15 ) /*0x706c46*/
  {
    v16 = *(_DWORD **)(a5 + 16); /*0x706c48*/
    if ( v16 && *v16 == a4 ) /*0x706c51*/
      goto LABEL_14; /*0x706c51*/
    if ( !*(_BYTE *)(a5 + 12) ) /*0x706c53*/
    {
      qsort(*(void **)a5, v15, 8u, (_CoreCrtNonSecureSearchSortCompareFunction)sub_710860); /*0x706c66*/
      *(_DWORD *)(a5 + 16) = 0; /*0x706c6e*/
      *(_BYTE *)(a5 + 12) = 1; /*0x706c75*/
    }
    v17 = *(_DWORD *)(a5 + 4); /*0x706c79*/
    v18 = *(void **)a5; /*0x706c81*/
    v37 = a4; /*0x706c84*/
    v19 = Object_Helper_710890((int)v18, v17, &v37); /*0x706c88*/
    if ( v19 ) /*0x706c8f*/
    {
      *(_DWORD *)(a5 + 16) = v19; /*0x706c91*/
LABEL_14:
      v20 = (__int16 **)(*(_DWORD *)(a5 + 16) + 4); /*0x706c94*/
      goto LABEL_16; /*0x706c9a*/
    }
  }
  v20 = (__int16 **)&unk_B78824; /*0x706c9c*/
LABEL_16:
  v21 = *v20; /*0x706ca1*/
  if ( v21 ) /*0x706ca5*/
  {
    Surface::BlitTechnoTo((Surface *)this, v21, (_DWORD *)a7, (_DWORD *)a6, 8193, 1000, 0); /*0x706cc0*/
    return result; /*0x706ccc*/
  }
  result = a9; /*0x706ccf*/
  if ( a9 ) /*0x706cd5*/
    goto LABEL_21; /*0x706cd5*/
  return result; /*0x706cc5*/
}



// ==== 0x00706ED0  RenderTechnoClassVoxel  this=-  sig=csp ====
void *__fastcall RenderTechnoClassVoxel(
        int *a1,
        int a2,
        void *a3,
        _DWORD *a4,
        const void *a5,
        int a6,
        int *a7,
        unsigned int a8,
        int a9,
        int a10,
        int a11)
{
  int v12; // eax
  _DWORD *v13; // esi
  _DWORD *v14; // edi
  unsigned int v15; // ebx
  float *v16; // eax
  float *v17; // eax
  int v18; // edx
  int v19; // ebx
  _DWORD *v20; // edi
  __int16 v21; // ax
  IPersistStream v22; // esi
  int *v23; // eax
  unsigned int v24; // ebx
  BuildingClass *v25; // esi
  int v26; // edx
  int v27; // edi
  int v28; // eax
  int v29; // eax
  int v30; // ecx
  int v31; // edx
  int *v32; // eax
  int *SHPFrame; // [esp-18h] [ebp-154h]
  int v35; // [esp-14h] [ebp-150h]
  int v36; // [esp-10h] [ebp-14Ch]
  int v37; // [esp-4h] [ebp-140h]
  Viewport *v38; // [esp+0h] [ebp-13Ch]
  int v39; // [esp+10h] [ebp-12Ch] BYREF
  int v40; // [esp+14h] [ebp-128h]
  int v41; // [esp+18h] [ebp-124h]
  int v42; // [esp+1Ch] [ebp-120h]
  int v43; // [esp+20h] [ebp-11Ch] BYREF
  int v44; // [esp+24h] [ebp-118h]
  int v45; // [esp+28h] [ebp-114h]
  int v46; // [esp+2Ch] [ebp-110h]
  _DWORD *v47; // [esp+30h] [ebp-10Ch]
  _DWORD v48[6]; // [esp+34h] [ebp-108h] BYREF
  float v49[12]; // [esp+4Ch] [ebp-F0h] BYREF
  float v50[12]; // [esp+7Ch] [ebp-C0h] BYREF
  int v51[12]; // [esp+ACh] [ebp-90h] BYREF
  float v52[12]; // [esp+DCh] [ebp-60h] BYREF
  float v53[12]; // [esp+10Ch] [ebp-30h] BYREF

  qmemcpy(v50, a5, sizeof(v50)); /*0x706eeb*/
  v12 = *a1; /*0x706ef4*/
  qmemcpy(v51, a5, sizeof(v51)); /*0x706efe*/
  if ( *(_BYTE *)((*(int (__thiscall **)(int *))(v12 + 132))(a1) + 3500) ) /*0x706f08*/
    dword_B43180 = 1; /*0x706f12*/
  v14 = (_DWORD *)a4[1]; /*0x706f36*/
  v47 = (_DWORD *)*a4; /*0x706f45*/
  v13 = v47; /*0x706f34*/
  v39 = (int)v14; /*0x706f49*/
  Audio_Render(v47, 0, 0, (float *)v51, (float *)stru_887430.m_Data, (float *)&stru_887460.Buffer_field_10, 3.0); /*0x706f4d*/
  Viewport::Clear(v38); /*0x706f52*/
  v15 = 0; /*0x706f5a*/
  if ( v47[1] ) /*0x706f57*/
  {
    do /*0x706fe5*/
    {
      if ( v14 ) /*0x706f66*/
      {
        qmemcpy(v49, (const void *)(v14[3] + 48 * (v15 + v14[1] * (a8 % v14[2]))), sizeof(v49)); /*0x706f92*/
        qmemcpy(v50, MultiplyMatrix3x4(v52, (float *)v51, v49), sizeof(v50)); /*0x706fb3*/
        v13 = v47; /*0x706fb5*/
        v14 = (_DWORD *)v39; /*0x706fb9*/
      }
      v16 = MultiplyMatrix3x4(v53, (float *)stru_887430.m_Data, v50); /*0x706fce*/
      TransformVoxelVertex(v13, v15++, 0, v16); /*0x706fda*/
    }
    while ( v15 < v13[1] ); /*0x706fe5*/
  }
  v17 = Voxel::RenderFrame(v49); /*0x706fef*/
  v18 = *a1; /*0x706ff4*/
  qmemcpy(v48, v17, sizeof(v48)); /*0x707002*/
  if ( (*(unsigned __int8 (__thiscall **)(int *))(v18 + 468))(a1)
    || (*(unsigned __int8 (__thiscall **)(int *))(*a1 + 472))(a1) )
  {
    if ( a1
      && (*(int (__thiscall **)(int *))(*a1 + 44))(a1) == 6
      && *(_BYTE *)(*((*(int (__thiscall **)(int *))(*a1 + 44))(a1) == 6 ? a1 + 328 : (int *)1312) + 5809) )
    {
      v19 = a9 | 6; /*0x70705a*/
    }
    else
    {
      v19 = a9 | 4; /*0x707066*/
    }
  }
  else
  {
    v19 = a9; /*0x70706b*/
  }
  if ( (unsigned __int8)House::IsHumanPlayer((House *)a1[135]) /*0x707086*/
    && (*(unsigned __int8 (__thiscall **)(int *))(*a1 + 196))(a1) )
  {
    v19 = (*(int (__thiscall **)(int *, int))(*a1 + 1084))(a1, v19); /*0x70709c*/
  }
  v20 = (_DWORD *)a6; /*0x7070a5*/
  v43 = *a7; /*0x7070ae*/
  v44 = a7[1]; /*0x7070b5*/
  v45 = a7[2]; /*0x7070bc*/
  v46 = a7[3]; /*0x7070c9*/
  if ( g_DSurface_Hidden_2 != (AudioStream *)dword_B1D13C ) /*0x7070d4*/
  {
    v21 = *((_WORD *)a1 + 485); /*0x7070da*/
    if ( v21 <= 0 ) /*0x7070e6*/
    {
      if ( *((_BYTE *)a1 + 973) ) /*0x707140*/
        *((_WORD *)a1 + 485) = LOWORD(v48[5]) /*0x707166*/
                             + LOWORD(v48[1])
                             + *(_WORD *)(a6 + 4)
                             + *(_WORD *)g_TacticalClass_Instance[45].__tail_0;
    }
    else
    {
      v22 = g_TacticalClass_Instance[45]; /*0x7070f2*/
      v39 = 0; /*0x707100*/
      v42 = v21 - *(_DWORD *)&v22; /*0x707104*/
      v40 = 0; /*0x70710c*/
      v41 = *(_DWORD *)DSurface_ViewBounds.__pad_8; /*0x707110*/
      v23 = ClipRectIntersection(v49, &v43, &v39, 0, 0); /*0x70711e*/
      v43 = *v23; /*0x707125*/
      v44 = v23[1]; /*0x70712c*/
      v45 = v23[2]; /*0x707133*/
      v46 = v23[3]; /*0x70713a*/
    }
  }
  v24 = v19 & 0xFFFFFFEF; /*0x707172*/
  if ( (*(int (__thiscall **)(int *))(*a1 + 44))(a1) == 1 && *((_BYTE *)a1 + 1747) ) /*0x70717d*/
    v25 = dword_B1D140; /*0x707187*/
  else
    v25 = (BuildingClass *)(*(int (__thiscall **)(int *))(*a1 + 484))(a1); /*0x70719a*/
  v26 = 0; /*0x70719c*/
  if ( (v24 & 8) != 0 ) /*0x7071a1*/
  {
    v27 = (*(int (__stdcall **)(int *))(a1[1] + 16))(a1 + 1); /*0x7071b3*/
    LOWORD(v28) = Math::RoundToInt(*((float *)a1 + 147)); /*0x7071b5*/
    v29 = v27 + v28; /*0x7071ba*/
    v20 = (_DWORD *)a6; /*0x7071bc*/
    v26 = v29 % 400; /*0x7071c9*/
  }
  v30 = v20[1]; /*0x7071d3*/
  v37 = v26; /*0x7071da*/
  v39 = v48[0] + *v20; /*0x7071e4*/
  v31 = *a1; /*0x7071f0*/
  v40 = v48[1] + v30; /*0x7071f3*/
  v36 = (*(int (__thiscall **)(int *))(v31 + 752))(a1); /*0x707200*/
  v35 = (*(int (__thiscall **)(int *))(*a1 + 748))(a1); /*0x70720c*/
  SHPFrame = (int *)BuildingClass::GetSHPFrame(v25, v24); /*0x707215*/
  v32 = Miles::DriverGet(); /*0x707227*/
  BlitterDrawSHP( /*0x707235*/
    (int *)g_DSurface_Hidden_2->__pad_0,
    (int)v25,
    v32,
    &v48[2],
    &v39,
    &v43,
    0,
    SHPFrame,
    v35,
    v36,
    a10,
    a11,
    v37);
  if ( *(_BYTE *)((*(int (__thiscall **)(int *))(*a1 + 132))(a1) + 3500) ) /*0x707245*/
    dword_B43180 = 0; /*0x70724f*/
  qmemcpy(a3, v48, 0x18u); /*0x70726b*/
  return a3; /*0x70726d*/
}



// ==== 0x00707280  ObjectClass::RenderTechnoOverlaySHP  this=TechnoClass  sig=csp ====
void *__thiscall RenderTechnoOverlaySHP(
        ObjectClass *this,
        void *a2,
        int a3,
        int a4,
        int a5,
        _DWORD *a6,
        int a7,
        int a8,
        char a9,
        int a10,
        int a11,
        int a12)
{
  float *v13; // eax
  int (__thiscall **vtable0)(ObjectClass *); // edx
  float *v15; // eax
  int *v16; // eax
  int (__thiscall **v17)(ObjectClass *); // edx
  int v18; // eax
  int v19; // eax
  int *v20; // eax
  int *SHPFrame; // [esp-18h] [ebp-100h]
  int v23; // [esp-14h] [ebp-FCh]
  Viewport *v24; // [esp+0h] [ebp-E8h]
  int v25; // [esp+Ch] [ebp-DCh]
  _DWORD v26[6]; // [esp+10h] [ebp-D8h] BYREF
  int v27[12]; // [esp+28h] [ebp-C0h] BYREF
  Matrix3x4 v28; // [esp+58h] [ebp-90h] BYREF
  float v29[12]; // [esp+88h] [ebp-60h] BYREF
  float v30[12]; // [esp+B8h] [ebp-30h] BYREF

  qmemcpy( /*0x7072ca*/
    v27,
    (const void *)(*(_DWORD *)(*(_DWORD *)(a3 + 4) + 12)
                 + 48 * (a7 + *(_DWORD *)(*(_DWORD *)(a3 + 4) + 4) * (0u % *(_DWORD *)(*(_DWORD *)(a3 + 4) + 8)))),
    sizeof(v27));
  v13 = MultiplyMatrix3x4(v30, (float *)a4, (float *)v27); /*0x7072d3*/
  vtable0 = (int (__thiscall **)(ObjectClass *))this->AbstractClass; /*0x7072d8*/
  qmemcpy(v29, v13, sizeof(v29)); /*0x7072e8*/
  if ( *(_BYTE *)(vtable0[33](this) + 3500) ) /*0x7072f2*/
    dword_B43180 = 1; /*0x7072fc*/
  Matrix3x4::Identity(&v28); /*0x70730a*/
  if ( *(_BYTE *)((*((int (__thiscall **)(ObjectClass *))this->AbstractClass + 33))(this) + 3478) ) /*0x707319*/
    TacticalMap::MultiplyByScalar((float *)v28.m_Data, 0.5); /*0x70732c*/
  Viewport::Clear(v24); /*0x707331*/
  v15 = MultiplyMatrix3x4(v30, (float *)stru_887430.m_Data, (float *)v28.m_Data); /*0x70736c*/
  globalHelper_053F90(*(_DWORD **)a3, a7, 0, v15, v29, (float *)&dword_887420, a10, a11, a12); /*0x70737e*/
  qmemcpy(v26, Voxel::RenderFrame((float *)v27), sizeof(v26)); /*0x7073a0*/
  if ( !a9 ) /*0x7073a2*/
  {
    v16 = Miles::DriverGet(); /*0x7073a8*/
    (*(void (__thiscall **)(int *))(*v16 + 120))(v16); /*0x7073b6*/
    v17 = (int (__thiscall **)(ObjectClass *))this->AbstractClass; /*0x7073d1*/
    v18 = v25 + *(_DWORD *)a4; /*0x7073d3*/
    v27[0] = v26[0] + *(_DWORD *)(a4 + 4); /*0x7073d5*/
    v26[5] = v18; /*0x7073e2*/
    v19 = v17[188](this); /*0x7073e6*/
    v23 = (*((int (__thiscall **)(ObjectClass *, int))this->AbstractClass + 187))(this, v19); /*0x7073fe*/
    SHPFrame = (int *)BuildingClass::GetSHPFrame(*(BuildingClass **)&stru_87F5F0.__pad_58[124], a8); /*0x707412*/
    v20 = Miles::DriverGet(); /*0x707420*/
    BlitterDrawSHP( /*0x707432*/
      (int *)g_DSurface_Hidden_2->__pad_0,
      *(int *)&stru_87F5F0.__pad_58[124],
      v20,
      &v26[2],
      v27,
      a6,
      0,
      SHPFrame,
      v23,
      1000,
      0,
      0,
      (int)v27);
  }
  if ( *(_BYTE *)((*((int (__thiscall **)(ObjectClass *))this->AbstractClass + 33))(this) + 3500) ) /*0x707441*/
    dword_B43180 = 1; /*0x70744b*/
  qmemcpy(a2, v26, 0x18u); /*0x707467*/
  return a2; /*0x707469*/
}



// ==== 0x00707480  Surface::BlitTechnoTo  this=Surface  sig=csp ====
void __thiscall Surface::BlitTechnoTo(Surface *this, __int16 *a2, _DWORD *a3, _DWORD *a4, int a5, int a6, int a7)
{
  unsigned __int16 v8; // bp
  unsigned __int16 v9; // bx
  int v11; // edx
  unsigned int v12; // ebx
  LightConvertClass *v13; // eax
  int v14; // ebx
  int v15; // eax
  int v16; // eax
  int v17; // edx
  int v18; // ebp
  int v19; // ecx
  int v20; // ebx
  int v21; // ebp
  int v22; // ecx
  int v23; // ebp
  unsigned __int16 v24; // ax
  int v25; // eax
  int v26; // eax
  int v27; // [esp-1Ch] [ebp-7Ch]
  int v28; // [esp+10h] [ebp-50h] BYREF
  int v29; // [esp+14h] [ebp-4Ch]
  int v30; // [esp+18h] [ebp-48h]
  int v31; // [esp+1Ch] [ebp-44h]
  int v32; // [esp+20h] [ebp-40h] BYREF
  int v33; // [esp+24h] [ebp-3Ch]
  int Width; // [esp+28h] [ebp-38h]
  int Height; // [esp+2Ch] [ebp-34h]
  int v36[4]; // [esp+30h] [ebp-30h] BYREF
  Surface v37; // [esp+40h] [ebp-20h] BYREF
  int v38; // [esp+4Ch] [ebp-14h]
  int v39; // [esp+50h] [ebp-10h]
  int v40[3]; // [esp+54h] [ebp-Ch] BYREF
  __int16 *v41; // [esp+64h] [ebp+4h]
  int v42; // [esp+64h] [ebp+4h]
  int *v43; // [esp+70h] [ebp+10h]

  v8 = a2[3]; /*0x70748e*/
  v9 = a2[2]; /*0x707492*/
  v41 = (__int16 *)*((_DWORD *)a2 + 2); /*0x7074a2*/
  Surface::Construct(&v37, v9, v8); /*0x7074a6*/
  v38 = 0; /*0x7074b8*/
  *(_DWORD *)v37.__pad_0 = &XSurface_Vtable; /*0x7074c0*/
  v39 = 1; /*0x7074c8*/
  Buffer::Init((Buffer *)v40, (int)v41, v8 * v9); /*0x7074d0*/
  v11 = *(_DWORD *)this->__pad_0; /*0x7074d9*/
  *(_DWORD *)v37.__pad_0 = &BSurface_Vtable; /*0x7074dd*/
  v12 = a5 & 0xFFFFFFEF; /*0x7074e5*/
  if ( (*(int (__thiscall **)(Surface *))(v11 + 44))(this) == 1 && *((_BYTE *)this + 1747) ) /*0x7074f0*/
    v13 = (LightConvertClass *)dword_B1D140; /*0x7074fa*/
  else
    v13 = (LightConvertClass *)(*(int (__thiscall **)(Surface *))(*(_DWORD *)this->__pad_0 + 484))(this); /*0x707505*/
  v43 = (int *)LightConvertClass::SelectRLEBlitter(v13, v12); /*0x707516*/
  v42 = 0; /*0x70751a*/
  if ( (v12 & 8) != 0 ) /*0x707522*/
  {
    v14 = (*(int (__stdcall **)(int *))(this->Width + 16))(&this->Width); /*0x707534*/
    LOWORD(v15) = Math::RoundToInt(*((float *)this + 147)); /*0x707536*/
    v42 = (v14 + v15) % 400; /*0x707545*/
  }
  if ( (*(int (__thiscall **)(Surface *))(*(_DWORD *)this->__pad_0 + 44))(this) == 1 ) /*0x707557*/
  {
    v16 = *a3 + *a2; /*0x70756b*/
    v17 = a3[1] + a2[1]; /*0x707571*/
    v18 = (unsigned __int16)a2[3]; /*0x707575*/
    v19 = (unsigned __int16)a2[2]; /*0x70757b*/
    v33 = v17; /*0x70757f*/
    Height = (unsigned __int16)v18; /*0x707585*/
    if ( dword_B1CFC8 > 0 && dword_B1CFCC > 0 ) /*0x707597*/
    {
      if ( v19 <= 0 || v18 <= 0 ) /*0x7075a7*/
      {
        v16 = dword_B1CFC0; /*0x70764e*/
        v17 = dword_B1CFC4; /*0x707653*/
        v19 = dword_B1CFC8; /*0x707659*/
        v18 = dword_B1CFCC; /*0x70765f*/
      }
      else
      {
        v20 = dword_B1CFC0; /*0x7075b3*/
        v29 = dword_B1CFC4; /*0x7075b9*/
        v30 = dword_B1CFC8; /*0x7075c3*/
        v28 = dword_B1CFC0; /*0x7075cf*/
        v31 = dword_B1CFCC; /*0x7075d3*/
        if ( dword_B1CFC0 > v16 ) /*0x7075d7*/
        {
          v20 = v16; /*0x7075e1*/
          v30 += dword_B1CFC0 - v16; /*0x7075e3*/
          v28 = v16; /*0x7075e7*/
        }
        if ( v29 > v17 ) /*0x7075f1*/
        {
          v21 = v29 - v17; /*0x7075f7*/
          v29 = v17; /*0x7075fb*/
          v31 += v21; /*0x7075ff*/
          v20 = v28; /*0x707603*/
        }
        if ( v20 + v30 < v19 + v16 ) /*0x707612*/
          v30 = v19 - v20 + v16 + 1; /*0x70761a*/
        v18 = v31; /*0x707626*/
        v17 = v29; /*0x70762d*/
        if ( v29 + v31 < Height + v33 ) /*0x707636*/
          v18 = v33 + Height - v29 + 1; /*0x707642*/
        v19 = v30; /*0x707646*/
        v16 = v20; /*0x70764a*/
      }
    }
    dword_B1CFC0 = v16; /*0x707661*/
    dword_B1CFC4 = v17; /*0x707666*/
    dword_B1CFC8 = v19; /*0x70766c*/
    dword_B1CFCC = v18; /*0x707672*/
  }
  if ( v43 ) /*0x70767e*/
  {
    Width = v37.Width; /*0x70768c*/
    v30 = v37.Width; /*0x707690*/
    Height = v37.Height; /*0x70769a*/
    v31 = v37.Height; /*0x70769e*/
    v22 = *a2; /*0x7076a2*/
    v32 = 0; /*0x7076a5*/
    v33 = 0; /*0x7076a9*/
    v28 = 0; /*0x7076ad*/
    v29 = 0; /*0x7076b1*/
    v23 = a3[1]; /*0x7076bb*/
    v36[0] = *a3 + v22; /*0x7076be*/
    v24 = a2[2]; /*0x7076c8*/
    v36[1] = v23 + a2[1]; /*0x7076ce*/
    v36[2] = v24; /*0x7076d2*/
    v25 = *(_DWORD *)this->__pad_0; /*0x7076e3*/
    v36[3] = (unsigned __int16)a2[3]; /*0x7076e5*/
    v27 = (*(int (__thiscall **)(Surface *))(v25 + 752))(this); /*0x707703*/
    v26 = (*(int (__thiscall **)(Surface *))(*(_DWORD *)this->__pad_0 + 748))(this); /*0x707706*/
    BlitterRLEBlitSHP( /*0x707736*/
      (int)g_DSurface_Hidden_2,
      (CellStruct *)a4,
      v36,
      (int)&v37,
      &v28,
      &v32,
      v43,
      v26,
      v27,
      a6,
      v42,
      0,
      0,
      0,
      a7);
  }
  Vector::Clear((int)v40); /*0x70773f*/
}



// ==== 0x007077C0  ObjectClass::NotifyExpired  this=TechnoClass  sig=csp ====
int __thiscall ObjectClass::NotifyExpired(TechnoClass *this, int *a2, int *a3)
{
  int drainAnim; // ecx
  int drainTarget; // eax
  int v7; // eax
  int transporter; // eax
  int *drainingMe; // edi
  int v10; // ecx
  int v11; // eax
  int v12; // eax
  _DWORD *v13; // eax
  CellClass *v14; // eax
  int v15; // edx
  int v16; // eax
  int v17; // eax
  int v18; // edx
  int *p_fireParticles; // eax
  int v20; // ecx
  ObjectClass *captureManager; // ecx
  UnitClass *spawnManager; // ecx
  ObjectClass *temporalUsing; // ecx
  int airstrike; // ecx
  int *rockerLinkedUnit; // eax
  int locomotorTarget; // eax
  TechnoClass *locomotorSource; // ecx
  int v28; // eax
  int v29; // edx
  int v30; // eax
  int **v31; // ecx
  int v32; // ecx
  int v33; // ecx
  int v34; // eax
  int v35; // eax
  int v36; // ecx
  int v37; // ecx
  int v38; // eax
  int *attackedTargets; // esi
  int result; // eax
  int v41; // ecx
  int v42; // ecx
  _DWORD v43[3]; // [esp+14h] [ebp-Ch] BYREF
  char v44; // [esp+24h] [ebp+4h]

  RadioClass::ExecuteAction(this, (int)a2, (char)a3); /*0x7077d3*/
  if ( (_BYTE)a3 ) /*0x7077e0*/
    FootClass::updateMovementAnimation((FootClass *)this->passengers, (int)a2); /*0x7077e9*/
  v44 = 1; /*0x7077f4*/
  if ( a2 == (int *)this->spawnOwner ) /*0x7077fb*/
    this->spawnOwner = 0; /*0x7077fd*/
  if ( a2 == (int *)this->originalOwnerHouse ) /*0x707809*/
    this->originalOwnerHouse = 0; /*0x70780b*/
  if ( a2 == (int *)this->mindControlledBy_house ) /*0x707817*/
    this->mindControlledBy_house = 0; /*0x707819*/
  if ( a2 == (int *)this->temporalTargetingMe ) /*0x707825*/
    this->temporalTargetingMe = 0; /*0x707827*/
  if ( a2 == (int *)this->airstrike ) /*0x707833*/
    this->airstrike = 0; /*0x707835*/
  if ( a2 == (int *)this->manipulatedByUnit ) /*0x707841*/
    this->manipulatedByUnit = 0; /*0x707843*/
  if ( a2 == (int *)this->bunkerLinkedUnit && dword_A8E7AC ) /*0x707857*/
    this->bunkerLinkedUnit = 0; /*0x707859*/
  if ( a2 == (int *)this->drainTarget ) /*0x707865*/
  {
    drainAnim = this->drainAnim; /*0x707867*/
    if ( drainAnim ) /*0x70786f*/
    {
      (*(void (__thiscall **)(int))(*(_DWORD *)drainAnim + 248))(drainAnim); /*0x707873*/
      this->drainAnim = 0; /*0x707879*/
    }
    drainTarget = this->drainTarget; /*0x70787f*/
    if ( drainTarget ) /*0x707887*/
    {
      *(_DWORD *)(drainTarget + 464) = 0; /*0x707889*/
      v7 = *(_DWORD *)(this->drainTarget + 540); /*0x707895*/
      if ( v7 ) /*0x70789d*/
        *(_BYTE *)(v7 + 22392) = 1; /*0x70789f*/
      this->drainTarget = 0; /*0x7078a6*/
    }
    this->drainTarget = 0; /*0x7078ac*/
  }
  transporter = this->transporter; /*0x7078b2*/
  if ( a2 == (int *)transporter /*0x7078d3*/
    && transporter
    && (!*(_BYTE *)(transporter + 144) || !*(_DWORD *)(transporter + 108) || dword_A8E7AC) )
  {
    this->transporter = 0; /*0x7078d5*/
  }
  drainingMe = (int *)this->drainingMe; /*0x7078db*/
  if ( a2 == drainingMe ) /*0x7078e3*/
  {
    v10 = drainingMe[117]; /*0x7078e5*/
    if ( v10 ) /*0x7078ed*/
    {
      (*(void (__thiscall **)(int))(*(_DWORD *)v10 + 248))(v10); /*0x7078f1*/
      drainingMe[117] = 0; /*0x7078f7*/
    }
    v11 = drainingMe[115]; /*0x7078fd*/
    if ( v11 ) /*0x707905*/
    {
      *(_DWORD *)(v11 + 464) = 0; /*0x707907*/
      v12 = *(_DWORD *)(drainingMe[115] + 540); /*0x707913*/
      if ( v12 ) /*0x70791b*/
        *(_BYTE *)(v12 + 22392) = 1; /*0x70791d*/
      drainingMe[115] = 0; /*0x707924*/
    }
    this->drainingMe = 0; /*0x70792a*/
  }
  if ( a2 == (int *)this->drainAnim ) /*0x707936*/
    this->drainAnim = 0; /*0x707938*/
  if ( a2 == (int *)this->mindControlRingAnim ) /*0x707944*/
    this->mindControlRingAnim = 0; /*0x707946*/
  if ( a2 == (int *)this->deployAnim ) /*0x707952*/
    this->deployAnim = 0; /*0x707954*/
  if ( !(_BYTE)a3 ) /*0x70795e*/
  {
    if ( a2 ) /*0x707962*/
    {
      if ( (a2[5] & 1) != 0 ) /*0x70796e*/
      {
        v13 = (_DWORD *)(*(int (__thiscall **)(int *, _DWORD *))(*a2 + 72))(a2, v43); /*0x70797a*/
        v14 = Coord::To_Cell((Coord *)&dword_87F7E8, v13); /*0x707983*/
        if ( (unsigned __int8)Cell::IsPassableOffset((Cell *)v14, *(_DWORD *)(this->owner + 48)) ) /*0x707994*/
          v44 = 0; /*0x70799d*/
      }
    }
  }
  if ( (int *)this->target == a2 && v44 && ((_BYTE)a3 || (*(int (__thiscall **)(int *))(*a2 + 60))(a2) != this->owner) ) /*0x7079cb*/
  {
    v15 = this->targetingTimer[0]; /*0x7079d1*/
    v16 = this->targetingTimer[2]; /*0x7079d7*/
    if ( v15 != -1 ) /*0x7079e0*/
    {
      if ( (int)dword_A8ED84 - v15 >= v16 ) /*0x7079ec*/
      {
LABEL_61:
        (*(void (__thiscall **)(TechnoClass *, _DWORD))(this->vtable0 + 968))(this, 0); /*0x707a2e*/
        if ( (*(unsigned __int8 (__thiscall **)(TechnoClass *))(this->vtable0 + 508))(this) ) /*0x707a3d*/
        {
          (*(void (__thiscall **)(TechnoClass *))(this->vtable0 + 504))(this); /*0x707a4b*/
          if ( (*(int (__thiscall **)(TechnoClass *))(this->vtable0 + 44))(this) == 2 && this->currentMission == 25 ) /*0x707a64*/
          {
            this->missionStatus = 0; /*0x707a66*/
            *((_BYTE *)this + 1746) = 0; /*0x707a6c*/
          }
        }
        goto LABEL_65; /*0x707a6c*/
      }
      v16 -= (int)dword_A8ED84 - v15; /*0x7079ee*/
    }
    if ( v16 > 10 && !dword_A8E7AC ) /*0x7079fb*/
    {
      v17 = Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 4, 8); /*0x707a0d*/
      v18 = v43[1]; /*0x707a18*/
      this->targetingTimer[0] = (int)dword_A8ED84; /*0x707a1c*/
      this->targetingTimer[1] = v18; /*0x707a22*/
      this->targetingTimer[2] = v17; /*0x707a28*/
    }
    goto LABEL_61; /*0x707a28*/
  }
LABEL_65:
  if ( (int *)this->lastTarget == a2 && v44 ) /*0x707a7e*/
    this->lastTarget = 0; /*0x707a80*/
  if ( (int *)this->owner == a2 ) /*0x707a8c*/
  {
    this->owner = 0; /*0x707a8e*/
    this->isOwnedByCurrentPlayer[0] = 0; /*0x707a94*/
  }
  if ( (*(unsigned __int8 (__thiscall **)(TechnoClass *))(this->vtable0 + 196))(this) /*0x707ab6*/
    && (int *)(*(int (__thiscall **)(TechnoClass *, int))(this->vtable0 + 208))(this, 1) == a2 )
  {
    (*(void (__thiscall **)(TechnoClass *))(this->vtable0 + 1136))(this); /*0x707abc*/
  }
  p_fireParticles = &this->fireParticles; /*0x707ac2*/
  v20 = 8; /*0x707ac8*/
  do /*0x707ad7*/
  {
    if ( (int *)*p_fireParticles == a2 ) /*0x707acf*/
      *p_fireParticles = 0; /*0x707ad1*/
    ++p_fireParticles; /*0x707ad3*/
    --v20; /*0x707ad6*/
  }
  while ( v20 ); /*0x707ad7*/
  if ( (int *)this->damageParticles_2 == a2 ) /*0x707adf*/
    this->damageParticles_2 = 0; /*0x707ae1*/
  if ( (_BYTE)a3 ) /*0x707aeb*/
  {
    if ( (int *)this->queueUpToEnter == a2 ) /*0x707af3*/
      this->queueUpToEnter = 0; /*0x707af5*/
    if ( (int *)this->focus == a2 ) /*0x707b01*/
      this->focus = 0; /*0x707b03*/
    captureManager = (ObjectClass *)this->captureManager; /*0x707b09*/
    if ( captureManager ) /*0x707b11*/
      ObjectClass::RemoveFromPointerList(captureManager, (int)a2); /*0x707b14*/
  }
  spawnManager = (UnitClass *)this->spawnManager; /*0x707b19*/
  if ( spawnManager ) /*0x707b21*/
    UnitClass::ClearTargetRef(spawnManager, (int)a2); /*0x707b24*/
  temporalUsing = (ObjectClass *)this->temporalUsing; /*0x707b29*/
  if ( temporalUsing ) /*0x707b31*/
    ObjectClass::UnlinkFromFactory(temporalUsing, a2); /*0x707b34*/
  airstrike = this->airstrike; /*0x707b39*/
  if ( airstrike && *(TechnoClass **)(airstrike + 76) == this ) /*0x707b46*/
    ObjectClass::CleanupAirstrikeTarget(airstrike, (int)a2); /*0x707b49*/
  rockerLinkedUnit = (int *)this->rockerLinkedUnit; /*0x707b4e*/
  if ( a2 == rockerLinkedUnit ) /*0x707b56*/
  {
    rockerLinkedUnit[170] = 0; /*0x707b58*/
    this->rockerLinkedUnit = 0; /*0x707b5e*/
  }
  if ( a2 == (int *)this->locomotorTarget ) /*0x707b6a*/
  {
    TechnoClass::EjectPassengers(this, 1); /*0x707b70*/
    locomotorTarget = this->locomotorTarget; /*0x707b75*/
    if ( locomotorTarget ) /*0x707b7d*/
    {
      *(_DWORD *)(locomotorTarget + 688) = 0; /*0x707b7f*/
      this->locomotorTarget = 0; /*0x707b85*/
    }
  }
  locomotorSource = (TechnoClass *)this->locomotorSource; /*0x707b8b*/
  if ( a2 == (int *)locomotorSource ) /*0x707b93*/
  {
    TechnoClass::EjectPassengers(locomotorSource, 1); /*0x707b97*/
    v28 = this->locomotorSource; /*0x707b9c*/
    if ( v28 ) /*0x707ba4*/
    {
      *(_DWORD *)(v28 + 684) = 0; /*0x707ba6*/
      this->locomotorSource = 0; /*0x707bac*/
    }
  }
  if ( a2 == (int *)this->previousTeam ) /*0x707bb8*/
    this->previousTeam = 0; /*0x707bba*/
  if ( a2 == (int *)this->behindAnim ) /*0x707bc6*/
    this->behindAnim = 0; /*0x707bc8*/
  v29 = this->currentTargets[4]; /*0x707bce*/
  v30 = 0; /*0x707bd4*/
  if ( v29 > 0 ) /*0x707bd8*/
  {
    v31 = (int **)this->currentTargets[1]; /*0x707bde*/
    while ( a2 != *v31 ) /*0x707be6*/
    {
      ++v30; /*0x707be8*/
      ++v31; /*0x707be9*/
      if ( v30 >= v29 ) /*0x707bee*/
        goto LABEL_118; /*0x707bee*/
    }
    if ( v30 != -1 ) /*0x707bf5*/
    {
      v32 = this->currentTargetThreatValues[4]; /*0x707bf7*/
      if ( v30 < v32 ) /*0x707bff*/
      {
        v33 = v32 - 1; /*0x707c01*/
        for ( this->currentTargetThreatValues[4] = v33; /*0x707c0a*/
              v30 < this->currentTargetThreatValues[4];
              *(_DWORD *)(this->currentTargetThreatValues[1] + 4 * v30 - 4) = *(_DWORD *)(this->currentTargetThreatValues[1]
                                                                                        + 4 * v30) )
        {
          ++v30; /*0x707c12*/
        }
      }
      v34 = this->currentTargets[0]; /*0x707c24*/
      a3 = a2; /*0x707c34*/
      v35 = (*(int (__thiscall **)(int *, int **))(v34 + 16))(this->currentTargets, &a3); /*0x707c3b*/
      if ( v35 != -1 ) /*0x707c41*/
      {
        v36 = this->currentTargets[4]; /*0x707c43*/
        if ( v35 < v36 ) /*0x707c48*/
        {
          v37 = v36 - 1; /*0x707c4a*/
          for ( this->currentTargets[4] = v37; /*0x707c50*/
                v35 < this->currentTargets[4];
                *(_DWORD *)(this->currentTargets[1] + 4 * v35 - 4) = *(_DWORD *)(this->currentTargets[1] + 4 * v35) )
          {
            ++v35; /*0x707c55*/
          }
        }
      }
    }
  }
LABEL_118:
  v38 = this->attackedTargets[0]; /*0x707c64*/
  attackedTargets = this->attackedTargets; /*0x707c6a*/
  a3 = a2; /*0x707c74*/
  result = (*(int (__thiscall **)(int *, int **))(v38 + 16))(attackedTargets, &a3); /*0x707c7b*/
  if ( result != -1 ) /*0x707c81*/
  {
    v41 = attackedTargets[4]; /*0x707c83*/
    if ( result < v41 ) /*0x707c88*/
    {
      v42 = v41 - 1; /*0x707c8a*/
      for ( attackedTargets[4] = v42; /*0x707c90*/
            result < attackedTargets[4];
            *(_DWORD *)(attackedTargets[1] + 4 * result - 4) = *(_DWORD *)(attackedTargets[1] + 4 * result) )
      {
        ++result; /*0x707c95*/
      }
    }
  }
  return result; /*0x707ca4*/
}



// ==== 0x00707CB0  TechnoClass::CleanupAll  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::CleanupAll(TechnoClass *this, int a2)
{
  int result; // eax
  int DB; // eax
  int *v5; // ecx
  TechnoClass *v6; // eax
  TechnoClass *v7; // esi

  for ( result = this->passengers[1]; result; result = this->passengers[1] ) /*0x707cbb*/
  {
    DB = CCINIClass::GetDB((CCINIClass *)this->passengers); /*0x707ccc*/
    v5 = *(int **)(DB + 1492); /*0x707cd1*/
    if ( v5 ) /*0x707cd9*/
      TeamClass::LiberateMember_Start(v5, DB, 0xFFFFFFFF, 0); /*0x707ce0*/
    v6 = (TechnoClass *)LinkedList::Pop((LinkedList *)this->passengers); /*0x707ce7*/
    v7 = v6; /*0x707cec*/
    if ( v6 ) /*0x707cf0*/
    {
      TechnoClass::CleanupAll(v6, (int)v6); /*0x707cf5*/
      (*((void (__thiscall **)(TechnoClass *, int))v7->RadioClass + 56))(v7, a2); /*0x707cff*/
      (*((void (__thiscall **)(TechnoClass *))v7->RadioClass + 62))(v7); /*0x707d09*/
    }
  }
  return result; /*0x707d1c*/
}



// ==== 0x00707D20  TechnoClass::GetCrew  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::GetCrew(TechnoClass *this)
{
  HouseClass *owner; // ecx
  int sideIndex; // eax
  int v5; // eax
  int v6; // esi
  bool v7; // zf

  if ( !*(_BYTE *)((*((int (__thiscall **)(TechnoClass *))this->RadioClass + 33))(this) + 3277) ) /*0x707d2b*/
    return 0; /*0x707d38*/
  owner = this->owner; /*0x707d39*/
  sideIndex = owner->sideIndex; /*0x707d40*/
  if ( sideIndex ) /*0x707d48*/
  {
    if ( sideIndex == 1 ) /*0x707d5a*/
    {
      v5 = *(_DWORD *)&DSurface_ViewBounds.__pad_FC[324]; /*0x707d5c*/
      v6 = *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 3964); /*0x707d61*/
    }
    else
    {
      v7 = sideIndex == 2; /*0x707d69*/
      v5 = *(_DWORD *)&DSurface_ViewBounds.__pad_FC[324]; /*0x707d6c*/
      if ( v7 ) /*0x707d71*/
        v6 = *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 3968); /*0x707d73*/
      else
        v6 = *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 3948); /*0x707d7b*/
    }
  }
  else
  {
    v5 = *(_DWORD *)&DSurface_ViewBounds.__pad_FC[324]; /*0x707d4a*/
    v6 = *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 3960); /*0x707d4f*/
  }
  if ( *(_DWORD *)(owner->relatedTagsCapacity + 188) == -1 ) /*0x707d8b*/
    return *(_DWORD *)(v5 + 3948); /*0x707dc5*/
  if ( (*((unsigned __int8 (__thiscall **)(TechnoClass *))this->RadioClass + 171))(this) /*0x707db2*/
    && Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, 99) < 15 )
  {
    return *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 3948); /*0x707dc4*/
  }
  return v6; /*0x707d37*/
}



// ==== 0x00707DD0  TechnoClass::ComputeTotalPowerDrain  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::ComputeTotalPowerDrain(TechnoClass *this)
{
  int v2; // ebx
  HouseClass *owner; // ecx
  _DWORD *i; // esi
  int v5; // eax
  int v6; // esi

  v2 = 0; /*0x707dd5*/
  owner = this->owner; /*0x707dd7*/
  if ( *(_BYTE *)(80 * *(_DWORD *)&owner->__pad_13C[72] + *(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 5506) /*0x707e05*/
    || owner->iqLevel2 >= *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 5200) )
  {
    if ( this->passengers[1] ) /*0x707e07*/
    {
      for ( i = (_DWORD *)CCINIClass::GetDB((CCINIClass *)this->passengers); i; v2 += v5 ) /*0x707e20*/
      {
        v5 = (*(int (__thiscall **)(_DWORD *))(*i + 384))(i); /*0x707e26*/
        i = (_DWORD *)i[12]; /*0x707e2c*/
      }
    }
  }
  v6 = (*((int (__thiscall **)(TechnoClass *))this->RadioClass + 33))(this); /*0x707e43*/
  return v2 + (*((int (__thiscall **)(TechnoClass *))this->RadioClass + 176))(this) + *(_DWORD *)(v6 + 1652); /*0x707e55*/
}



// ==== 0x00707E60  TechnoClass::ComputeScanDistance  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::ComputeScanDistance(TechnoClass *this)
{
  int result; // eax
  char v3; // bl
  int v4; // eax
  int v5; // ebx
  int v6; // [esp+10h] [ebp+4h]

  if ( v6 == -1 ) /*0x707e6c*/
    return -1; /*0x707e73*/
  if ( !v6 ) /*0x707e78*/
  {
    v3 = (*((int (__thiscall **)(TechnoClass *))this->RadioClass + 204))(this); /*0x707e88*/
    if ( *(_DWORD *)((*((int (__thiscall **)(TechnoClass *))this->RadioClass + 33))(this) + 1464) && !v3 ) /*0x707ea0*/
      return *(_DWORD *)((*((int (__thiscall **)(TechnoClass *))this->RadioClass + 33))(this) + 1464); /*0x707eb9*/
    return 0; /*0x707ea0*/
  }
  v4 = *(_DWORD *)((*((int (__thiscall **)(TechnoClass *))this->RadioClass + 33))(this) + 1464); /*0x707ec6*/
  if ( !v4 ) /*0x707ece*/
  {
    v5 = (*((int (__thiscall **)(TechnoClass *, int))this->RadioClass + 90))(this, 1); /*0x707ee2*/
    if ( (*((int (__thiscall **)(TechnoClass *, _DWORD))this->RadioClass + 90))(this, 0) <= v5 ) /*0x707eec*/
      v4 = (*((int (__thiscall **)(TechnoClass *, int))this->RadioClass + 90))(this, 1); /*0x707f02*/
    else
      v4 = (*((int (__thiscall **)(TechnoClass *, _DWORD))this->RadioClass + 90))(this, 0); /*0x707ef4*/
  }
  result = 2 * v4; /*0x707f08*/
  if ( v6 == 2 ) /*0x707f0d*/
  {
    if ( result >= 1792 ) /*0x707f14*/
    {
      if ( result > 4096 ) /*0x707f26*/
        return 4096; /*0x707f2a*/
    }
    else
    {
      return 1792; /*0x707f18*/
    }
  }
  else
  {
    if ( result < 0 ) /*0x707f35*/
      return 0; /*0x707f3c*/
    if ( result > 4096 ) /*0x707f44*/
      return 4096; /*0x707f46*/
  }
  return result; /*0x707e70*/
}



// ==== 0x00707F60  TechnoClass::CheckPlacementTileMatch  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::CheckPlacementTileMatch(TechnoClass *this)
{
  int result; // eax
  int v3; // edi
  int *v4; // ecx
  int (__thiscall **vtable0)(TechnoClass *); // edx
  _DWORD *v6; // eax
  int (__thiscall **v7)(TechnoClass *); // edx
  int v8; // ecx
  char v9; // al
  int v10; // [esp-Ch] [ebp-2Ch]
  __int16 v11; // [esp+4h] [ebp-1Ch] BYREF
  int v12; // [esp+8h] [ebp-18h]
  __int16 v13[2]; // [esp+Ch] [ebp-14h] BYREF
  __int16 v14; // [esp+10h] [ebp-10h] BYREF
  char v15; // [esp+14h] [ebp-Ch] BYREF
  int v16; // [esp+1Ch] [ebp-4h]
  int *v17; // [esp+24h] [ebp+4h]
  int v18; // [esp+24h] [ebp+4h]

  result = (*((int (__thiscall **)(TechnoClass *))this->RadioClass + 33))(this); /*0x707f6a*/
  v3 = *(_DWORD *)(result + 1460); /*0x707f70*/
  if ( v3 == -1 /*0x707fa7*/
    || (v4 = v17, result = *v17, *v17 == g_BuildingLoadQueue_Array.?[3])
    && v17[1] == g_BuildingLoadQueue_Array.?[4]
    && v17[2] == g_BuildingLoadQueue_Array.?[5] )
  {
    LOBYTE(result) = 1; /*0x70806d*/
  }
  else
  {
    LOWORD(v18) = result / 256; /*0x707fbb*/
    vtable0 = (int (__thiscall **)(TechnoClass *))this->RadioClass; /*0x707fce*/
    HIWORD(v18) = v4[1] / 256; /*0x707fd3*/
    *(_DWORD *)v13 = v18; /*0x707fdc*/
    v6 = (_DWORD *)vtable0[19](this); /*0x707fe5*/
    LOWORD(v16) = *v6 / 256; /*0x707ff8*/
    v7 = (int (__thiscall **)(TechnoClass *))this->RadioClass; /*0x708009*/
    HIWORD(v16) = v6[1] / 256; /*0x70800e*/
    v12 = v16; /*0x708017*/
    v10 = v7[200](this); /*0x708023*/
    v8 = *((_DWORD *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], &v11) + 80) >> 8; /*0x70803b*/
    LOBYTE(v8) = v8 & 1; /*0x70803e*/
    v9 = (*((int (__thiscall **)(TechnoClass *, _DWORD, int, int))this->RadioClass + 47))(this, 0, v8, v10); /*0x708046*/
    LOBYTE(result) = MapSeed::CheckTileMatch((MapSeed *)&stru_87F5F0.__pad_58[416], &v14, v13, v3, v9, (char)&v15, 0); /*0x70805d*/
  }
  return result; /*0x708062*/
}



// ==== 0x00708080  TechnoClass::EvaluateMission  this=TechnoClass  sig=csp ====
char __thiscall TechnoClass::EvaluateMission(TechnoClass *this, int a2)
{
  int v3; // ebp
  int v4; // eax
  int v5; // edi
  int v6; // edx
  TechnoClass *v7; // esi
  int v8; // edi
  int queuedMission; // eax
  bool v10; // cl
  _DWORD *v11; // eax
  _DWORD *v12; // eax
  char v13; // al
  int v14; // eax
  int v15; // ecx
  int v16; // edi
  int v17; // edx
  int v18; // ebp
  TechnoClass *v19; // esi
  int v20; // edi
  int v21; // eax
  bool v22; // cl
  _DWORD *v23; // eax
  _DWORD *v24; // eax
  char v25; // al
  int v26; // eax
  bool v27; // sf
  int v28; // ecx
  int v29; // edi
  int v30; // edx
  int v31; // edi
  int v32; // esi
  int v33; // edx
  int *v34; // eax
  int v35; // ecx
  int v36; // ebx
  int v37; // ebx
  int v38; // ecx
  int v39; // ebp
  _DWORD *v40; // edi
  _DWORD *v41; // esi
  int v42; // eax
  bool v43; // bl
  int v44; // ebx
  TechnoClass *v45; // ecx
  int v46; // esi
  int v47; // ecx
  _DWORD *v48; // ebx
  int v50; // [esp+46h] [ebp-70h]
  int v51; // [esp+4Ah] [ebp-6Ch]
  int v52; // [esp+4Eh] [ebp-68h]
  int i; // [esp+52h] [ebp-64h]
  int v54; // [esp+52h] [ebp-64h]
  TechnoClass *v55; // [esp+56h] [ebp-60h]
  TechnoClass *v56; // [esp+62h] [ebp-54h]
  __int16 v57[2]; // [esp+66h] [ebp-50h] BYREF
  __int16 v58[2]; // [esp+6Ah] [ebp-4Ch] BYREF
  char v59; // [esp+6Eh] [ebp-48h] BYREF
  char v60[8]; // [esp+72h] [ebp-44h] BYREF
  char v61[4]; // [esp+7Ah] [ebp-3Ch] BYREF
  int v62; // [esp+7Eh] [ebp-38h]
  _DWORD v63[6]; // [esp+86h] [ebp-30h] BYREF
  _DWORD v64[6]; // [esp+9Eh] [ebp-18h] BYREF

  v3 = 0; /*0x70809b*/
  memset(v64, 0, sizeof(v64)); /*0x70809d*/
  memset(v63, 0, sizeof(v63)); /*0x7080a8*/
  v56 = this; /*0x7080ae*/
  v50 = 0; /*0x7080b2*/
  v52 = 0; /*0x7080b6*/
  v4 = (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 704))(a2); /*0x7080ba*/
  v55 = 0; /*0x7080c8*/
  v5 = *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 2840) * v4; /*0x7080cc*/
  v51 = v5; /*0x7080d5*/
  if ( a2 ) /*0x7080d9*/
  {
    LOBYTE(v4) = Object::IsAlliedWithObjectHouse((Object *)this->owner, a2); /*0x7080e6*/
    if ( !(_BYTE)v4 ) /*0x7080ed*/
    {
      LOBYTE(v4) = House::IsCurrentPlayer((House *)this->owner); /*0x7080f9*/
      if ( !(_BYTE)v4 ) /*0x708100*/
      {
        LOBYTE(v4) = *(_BYTE *)(a2 + 129); /*0x708106*/
        if ( !(_BYTE)v4 ) /*0x70810e*/
        {
          if ( *(_DWORD *)&dword_A8B238 /*0x708128*/
            || (LOBYTE(v4) = (*((int (__thiscall **)(TechnoClass *))this->RadioClass + 171))(this), !(_BYTE)v4) )
          {
            if ( (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 44))(a2) == 15 /*0x708144*/
              || (v4 = (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 44))(a2), v4 == 1) )
            {
              v4 = (*((int (__thiscall **)(TechnoClass *))this->RadioClass + 33))(this); /*0x70814e*/
              if ( !*(_BYTE *)(v4 + 562) ) /*0x708154*/
              {
                if ( (*(_BYTE *)(a2 + 20) & 4) == 0 ) /*0x70816f*/
                  goto LABEL_15; /*0x70816f*/
                v6 = *(_DWORD *)(a2 + 1616); /*0x708171*/
                v4 = *(_DWORD *)(a2 + 1624); /*0x708177*/
                if ( v6 != -1 ) /*0x708180*/
                {
                  if ( *(_DWORD *)&stru_A8EB00.?[416] - v6 >= v4 ) /*0x70818c*/
                    goto LABEL_15; /*0x70818c*/
                  v4 -= *(_DWORD *)&stru_A8EB00.?[416] - v6; /*0x70818e*/
                }
                if ( v4 ) /*0x708192*/
                  return v4; /*0x708192*/
LABEL_15:
                globalHelper_0EC250(*(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 5344), (int)this->owner); /*0x708198*/
                for ( i = 0; i < *(int *)&stru_A83D50.__pad_80[40]; ++i ) /*0x7081b9*/
                {
                  if ( v5 <= 0 ) /*0x7081c1*/
                    break; /*0x7081c1*/
                  v7 = *(TechnoClass **)(*(_DWORD *)&stru_A83D50.__pad_80[28] + 4 * i); /*0x7081d1*/
                  if ( v7 ) /*0x7081d6*/
                  {
                    if ( v7->? ) /*0x7081dc*/
                    {
                      v8 = (*((int (__thiscall **)(_DWORD))v7->RadioClass + 14))(*(_DWORD *)(*(_DWORD *)&stru_A83D50.__pad_80[28] /*0x7081f5*/
                                                                                           + 4 * i));
                      if ( v8 == (*((int (__thiscall **)(TechnoClass *))this->RadioClass + 14))(this) ) /*0x7081fc*/
                      {
                        queuedMission = v7[1].?; /*0x708202*/
                        v10 = queuedMission && *(_BYTE *)(*(_DWORD *)(queuedMission + 36) + 246); /*0x708219*/
                        if ( (!queuedMission || v10) /*0x70828b*/
                          && v7->isRecruitableByAlly
                          && (*((unsigned __int8 (__thiscall **)(TechnoClass *))v7->RadioClass + 171))(v7)
                          && v7->isRecruitableByEnemy
                          && (MissionClass::GetMissionControl((MissionClass *)v7)[6] || *(_DWORD *)&dword_A8B238)
                          && (*((int (__thiscall **)(TechnoClass *, int, _DWORD))v7->RadioClass + 239))(v7, a2, 0) != 5 )
                        {
                          v11 = (_DWORD *)(*((int (__thiscall **)(TechnoClass *))this->RadioClass + 19))(this); /*0x70829c*/
                          LOWORD(i) = *v11 / 256; /*0x7082b1*/
                          HIWORD(i) = v11[1] / 256; /*0x7082c7*/
                          v12 = (_DWORD *)(*((int (__thiscall **)(TechnoClass *, char *, _DWORD))v7->RadioClass + 19))( /*0x7082db*/
                                            v7,
                                            v60,
                                            0);
                          LOWORD(v55) = *v12 / 256; /*0x7082f4*/
                          HIWORD(v55) = v12[1] / 256; /*0x70830a*/
                          v56 = v55; /*0x708313*/
                          v13 = (*((int (__thiscall **)(TechnoClass *, _DWORD, _DWORD, _DWORD))v7->RadioClass + 47))( /*0x708319*/
                                  v7,
                                  0,
                                  0,
                                  0);
                          if ( MapSeed::CheckTileMatch( /*0x70833c*/
                                 (MapSeed *)&stru_87F5F0.__pad_58[416],
                                 v58,
                                 v57,
                                 *(_DWORD *)(v7[1].ironTintTimer[1] + 1460),
                                 v13,
                                 (char)&v59,
                                 0) )
                          {
                            v14 = TechnoClass::ComputeThreatLevel(v7, a2); /*0x708348*/
                            if ( v14 ) /*0x70834f*/
                            {
                              if ( (TechnoClass *)this->focus == this ) /*0x708357*/
                                v14 *= 100; /*0x70835f*/
                              if ( v14 >= 0 ) /*0x708364*/
                              {
                                if ( v3 >= 6 ) /*0x70836f*/
                                {
                                  if ( v14 > v52 ) /*0x70838b*/
                                  {
                                    v15 = 0; /*0x70838d*/
                                    v16 = v14; /*0x70838f*/
                                    do /*0x7083b6*/
                                    {
                                      v17 = v63[v15]; /*0x708395*/
                                      if ( v17 == v52 ) /*0x70839d*/
                                      {
                                        v63[v15] = v14; /*0x70839f*/
                                        v64[v15] = v7; /*0x7083a3*/
                                      }
                                      else if ( v17 < v16 ) /*0x7083ab*/
                                      {
                                        v16 = v63[v15]; /*0x7083ad*/
                                      }
                                      ++v15; /*0x7083b3*/
                                    }
                                    while ( v15 < v50 ); /*0x7083b6*/
                                    v52 = v16; /*0x7083b8*/
                                  }
                                }
                                else
                                {
                                  v64[v3] = v7; /*0x708375*/
                                  v63[v3] = v14; /*0x70837a*/
                                  ++v50; /*0x70837e*/
                                  ++v3; /*0x708382*/
                                }
                              }
                              else
                              {
                                v51 += v14; /*0x708366*/
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                  v5 = v51; /*0x7083c6*/
                }
                v54 = 0; /*0x7083de*/
                if ( FootClass_Array.?[2] <= 0 ) /*0x7083e4*/
                {
LABEL_89:
                  if ( v5 > 0 ) /*0x708641*/
                  {
                    if ( v50 - 1 > 0 ) /*0x708650*/
                    {
                      v31 = 1; /*0x708652*/
                      v32 = 0; /*0x708657*/
                      do /*0x7086ad*/
                      {
                        v33 = v31; /*0x70865d*/
                        if ( v31 < v50 ) /*0x708661*/
                        {
                          v34 = &v63[v32]; /*0x708663*/
                          do /*0x7086a2*/
                          {
                            v35 = v63[v33]; /*0x708667*/
                            if ( *v34 < v35 ) /*0x70866f*/
                            {
                              v36 = v35 ^ *v34; /*0x708673*/
                              *v34 = v36; /*0x708675*/
                              v37 = v36 ^ v63[v33]; /*0x70867d*/
                              v63[v33] = v37; /*0x70867f*/
                              v38 = v64[v32]; /*0x708689*/
                              *v34 ^= v37; /*0x70868d*/
                              v64[v32] = v64[v33]; /*0x708693*/
                              v64[v33] = v38; /*0x708697*/
                            }
                            ++v33; /*0x70869f*/
                          }
                          while ( v33 < v50 ); /*0x7086a2*/
                        }
                        ++v31; /*0x7086a4*/
                        ++v32; /*0x7086a5*/
                      }
                      while ( v31 - 1 < v50 - 1 ); /*0x7086ad*/
                    }
                    v39 = 0; /*0x7086b3*/
                    if ( v50 > 0 ) /*0x7086b7*/
                    {
                      v40 = v64; /*0x7086bd*/
                      while ( 1 ) /*0x7086c1*/
                      {
                        v41 = (_DWORD *)*v40; /*0x7086c1*/
                        v42 = *(_DWORD *)(*v40 + 1492); /*0x7086c3*/
                        v43 = v42 && *(_BYTE *)(*(_DWORD *)(v42 + 36) + 246); /*0x7086da*/
                        if ( Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, 99) >= 66 || v43 ) /*0x7086fc*/
                          (*(void (__thiscall **)(_DWORD *, int, _DWORD))(*v41 + 488))(v41, 11, 0); /*0x70870e*/
                        else
                          (*(void (__thiscall **)(_DWORD *, int, _DWORD))(*v41 + 488))(v41, 21, 0); /*0x708704*/
                        v44 = a2; /*0x708718*/
                        v41[134] = v56; /*0x70871f*/
                        (*(void (__thiscall **)(_DWORD *, int))(*v41 + 968))(v41, a2); /*0x70872a*/
                        v45 = (TechnoClass *)((char *)v55 + (*(int (__thiscall **)(_DWORD *))(*v41 + 704))(v41)); /*0x70873e*/
                        LOBYTE(v4) = v51; /*0x708740*/
                        v55 = v45; /*0x708746*/
                        if ( (int)v45 > v51 ) /*0x70874a*/
                          break; /*0x70874a*/
                        ++v39; /*0x708750*/
                        ++v40; /*0x708751*/
                        if ( v39 >= v50 ) /*0x708756*/
                          goto LABEL_110; /*0x708756*/
                      }
LABEL_112:
                      if ( (*(_BYTE *)(v44 + 20) & 4) != 0 ) /*0x70877c*/
                      {
                        v46 = *(_DWORD *)&stru_A8EB00.?[416]; /*0x708783*/
                        LOWORD(v4) = Math::RoundToInt(*(double *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 5336) * 900.0); /*0x708795*/
                        v47 = v62; /*0x70879a*/
                        v48 = (_DWORD *)(v44 + 1616); /*0x70879e*/
                        *v48 = v46; /*0x7087a4*/
                        v48[1] = v47; /*0x7087a6*/
                        v48[2] = v4; /*0x7087a9*/
                      }
                      return v4; /*0x7087a9*/
                    }
                  }
                }
                else
                {
                  v18 = v50; /*0x7083ee*/
                  while ( v5 > 0 ) /*0x7083f7*/
                  {
                    v19 = *(TechnoClass **)(FootClass_Array.? + 4 * v54); /*0x708407*/
                    if ( v19 ) /*0x70840c*/
                    {
                      if ( v19->? ) /*0x708412*/
                      {
                        v20 = (*((int (__thiscall **)(_DWORD))v19->RadioClass + 14))(*(_DWORD *)(FootClass_Array.? /*0x708427*/
                                                                                               + 4 * v54));
                        if ( v20 == (*((int (__thiscall **)(TechnoClass *))this->RadioClass + 14))(this) ) /*0x708432*/
                        {
                          v21 = v19[1].?; /*0x708438*/
                          v22 = v21 && *(_BYTE *)(*(_DWORD *)(v21 + 36) + 246); /*0x70844f*/
                          if ( (!v21 || v22) /*0x7084db*/
                            && v19->isRecruitableByAlly
                            && (*((unsigned __int8 (__thiscall **)(TechnoClass *))v19->RadioClass + 171))(v19)
                            && v19->isRecruitableByEnemy
                            && (MissionClass::GetMissionControl((MissionClass *)v19)[6] || *(_DWORD *)&dword_A8B238)
                            && (*((int (__thiscall **)(TechnoClass *, int, _DWORD))v19->RadioClass + 239))(v19, a2, 0) != 5
                            && !*(_BYTE *)(v19[1].ironTintTimer[2] + 1516)
                            && !v19->bunkerLinkedUnit )
                          {
                            v23 = (_DWORD *)(*((int (__thiscall **)(TechnoClass *))this->RadioClass + 19))(this); /*0x7084f4*/
                            LOWORD(v55) = *v23 / 256; /*0x708509*/
                            HIWORD(v55) = v23[1] / 256; /*0x70851f*/
                            v56 = v55; /*0x70852c*/
                            v24 = (_DWORD *)(*((int (__thiscall **)(TechnoClass *, __int16 *, _DWORD))v19->RadioClass /*0x708533*/
                                             + 19))(
                                              v19,
                                              v57,
                                              0);
                            LOWORD(v54) = *v24 / 256; /*0x70854c*/
                            HIWORD(v54) = v24[1] / 256; /*0x708562*/
                            v25 = (*((int (__thiscall **)(TechnoClass *, _DWORD, _DWORD, _DWORD))v19->RadioClass + 47))( /*0x708571*/
                                    v19,
                                    0,
                                    0,
                                    0);
                            if ( MapSeed::CheckTileMatch( /*0x708594*/
                                   (MapSeed *)&stru_87F5F0.__pad_58[416],
                                   v57,
                                   v58,
                                   *(_DWORD *)(v19[1].ironTintTimer[2] + 1460),
                                   v25,
                                   (char)v61,
                                   0) )
                            {
                              v26 = TechnoClass::ComputeThreatLevel(v19, a2); /*0x7085a4*/
                              if ( v26 ) /*0x7085ab*/
                              {
                                if ( !this->slaveOwner ) /*0x7085ad*/
                                {
                                  v27 = v26 < 0; /*0x7085b7*/
                                  if ( v26 > 0 ) /*0x7085b9*/
                                  {
                                    if ( (TechnoClass *)this->focus == this ) /*0x7085c1*/
                                      v26 *= 10; /*0x7085c6*/
                                    v27 = v26 < 0; /*0x7085c8*/
                                  }
                                  if ( v27 ) /*0x7085ca*/
                                  {
                                    v51 += v26; /*0x7085cc*/
                                  }
                                  else if ( v18 >= 6 ) /*0x7085d5*/
                                  {
                                    if ( v26 > v52 ) /*0x7085f1*/
                                    {
                                      v28 = 0; /*0x7085f3*/
                                      v29 = v26; /*0x7085f5*/
                                      do /*0x70861c*/
                                      {
                                        v30 = v63[v28]; /*0x7085fb*/
                                        if ( v30 == v52 ) /*0x708603*/
                                        {
                                          v63[v28] = v26; /*0x708605*/
                                          v64[v28] = v19; /*0x708609*/
                                        }
                                        else if ( v30 < v29 ) /*0x708611*/
                                        {
                                          v29 = v63[v28]; /*0x708613*/
                                        }
                                        ++v28; /*0x708619*/
                                      }
                                      while ( v28 < v50 ); /*0x70861c*/
                                      v52 = v29; /*0x70861e*/
                                    }
                                  }
                                  else
                                  {
                                    v64[v18] = v19; /*0x7085db*/
                                    v63[v18] = v26; /*0x7085e0*/
                                    ++v50; /*0x7085e4*/
                                    ++v18; /*0x7085e8*/
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                    v5 = v51; /*0x70862c*/
                    if ( ++v54 >= FootClass_Array.?[2] ) /*0x708637*/
                      goto LABEL_89; /*0x708637*/
                  }
                }
LABEL_110:
                LOBYTE(v4) = (_BYTE)v55; /*0x70875c*/
                if ( (int)v55 <= v51 ) /*0x708766*/
                  return v4; /*0x708766*/
                v44 = a2; /*0x708768*/
                goto LABEL_112; /*0x708768*/
              }
            }
          }
        }
      }
    }
  }
  return v4; /*0x7087ac*/
}



// ==== 0x007087C0  ObjectClass::ValidateAttackTarget  this=AbstractClass  sig=csp ====
bool __thiscall ValidateAttackTarget(int this, int *a2, int a3)
{
  CaptureManagerClass *v4; // ecx
  int v5; // edi
  int v6; // ebx
  int v7; // eax
  int v8; // edi
  int v9; // eax
  int v10; // eax
  int v11; // eax
  int v12; // eax
  int v13; // esi
  double v15; // [esp+10h] [ebp-8h]

  if ( !a2 /*0x708817*/
    || !*(_BYTE *)((*(int (__thiscall **)(int))(this->alignmentPadding)(this) + 3482)
    || *(_DWORD *)(this + 732)
    || *(_DWORD *)(this + 728)
    || *(_DWORD *)(this + 460) && !*(_BYTE *)(*(_DWORD *)(this + 540) + 492) )
  {
    return 0; /*0x708817*/
  }
  v4 = *(CaptureManagerClass **)(this + 700); /*0x708825*/
  if ( v4 ) /*0x70882d*/
  {
    if ( CaptureManagerClass::CannotControlAnyMore(v4) ) /*0x70882f*/
      return 0; /*0x70882f*/
  }
  if ( *(_DWORD *)(this + 720) /*0x708859*/
    || (unsigned __int8)House::IsCurrentPlayer(*(House **)(this + 540)) && *(_DWORD *)(this + 692) )
  {
    return 0; /*0x708859*/
  }
  if ( !MissionClass::GetMissionControl((MissionClass *)this)[8] ) /*0x70886e*/
    return 0; /*0x70886e*/
  if ( (unsigned __int8)Object::IsAlliedWithObjectHouse(*(Object **)(this + 540), (int)a2) ) /*0x708880*/
    return 0; /*0x708880*/
  if ( (*(unsigned __int8 (__thiscall **)(int *, _DWORD))(*a2 + 200))(a2, *(_DWORD *)(this + 540)) ) /*0x708899*/
    return 0; /*0x708899*/
  if ( TechnoClass::GetValue((TechnoClass *)this, -1) <= 0 ) /*0x7088b2*/
    return 0; /*0x7088b2*/
  if ( !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)this + 684))(this) ) /*0x7088bc*/
    return 0; /*0x7088bc*/
  v5 = (*(int (__thiscall **)(int))(this->alignmentPadding)(this); /*0x7088d9*/
  v6 = (*(int (__thiscall **)(int, int *))(*(_DWORD *)this + 740))(this, a2); /*0x7088e1*/
  v7 = (*(int (__thiscall **)(int, int *, int))(*(_DWORD *)this + 956))(this, a2, v6); /*0x7088ed*/
  if ( v7 == 5 || v7 == 6 ) /*0x7088ff*/
    return 0; /*0x7088ff*/
  if ( (unsigned __int8)House::IsCurrentPlayer(*(House **)(this + 540)) /*0x708923*/
    && (*(int (__thiscall **)(int *))(*a2 + 44))(a2) == 6 )
  {
    if ( (*(int (__thiscall **)(int))(*(_DWORD *)this + 44))(this) == 15 && *(_BYTE *)(v5 + 3778) ) /*0x708935*/
      return 0; /*0x708935*/
    if ( (unsigned __int8)Audio::IsMediumVolume((int *)(this + 336)) /*0x708956*/
      || (unsigned __int8)Audio::IsLoud((int *)(this + 336)) )
    {
      v8 = (*(int (__thiscall **)(int))(this->alignmentPadding)(this); /*0x70896b*/
      if ( (unsigned __int8)Audio::IsMediumVolume((int *)(this + 336)) ) /*0x70896d*/
      {
        if ( *(_BYTE *)(v8 + 682) ) /*0x708976*/
          return 0; /*0x708976*/
      }
      if ( (unsigned __int8)Audio::IsLoud((int *)(this + 336)) && (*(_BYTE *)(v8 + 682) || *(_BYTE *)(v8 + 700)) ) /*0x70899d*/
        return 0; /*0x70899d*/
    }
  }
  if ( (unsigned __int8)House::IsCurrentPlayer(*(House **)(this + 540)) ) /*0x7089b5*/
  {
    if ( (*(int (__thiscall **)(int))(*(_DWORD *)this + 44))(this) == 1 ) /*0x7089c8*/
    {
      v9 = *(_DWORD *)(*(_DWORD *)(this + 1732) + 1028); /*0x7089d0*/
      if ( v9 ) /*0x7089d8*/
      {
        if ( *(_BYTE *)(v9 + 5834) ) /*0x7089da*/
          return 0; /*0x7089da*/
      }
    }
  }
  if ( (unsigned __int8)House::IsCurrentPlayer(*(House **)(this + 540)) ) /*0x7089ee*/
  {
    if ( !*(_BYTE *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 6124) /*0x708a11*/
      && (*(int (__thiscall **)(int))(*(_DWORD *)this + 44))(this) != 6 )
    {
      v10 = *(_DWORD *)(this + 172); /*0x708a13*/
      if ( v10 != 11 && v10 != 5 && v10 != 25 ) /*0x708a26*/
        return 0; /*0x708a26*/
    }
  }
  if ( this ) /*0x708a2e*/
  {
    if ( (*(_BYTE *)(this + 20) & 4) != 0 ) /*0x708a3d*/
    {
      v11 = *(_DWORD *)(this + 1492); /*0x708a3f*/
      if ( v11 ) /*0x708a47*/
      {
        if ( *(_BYTE *)(*(_DWORD *)(v11 + 36) + 175) ) /*0x708a4c*/
          return 0; /*0x708a4c*/
      }
    }
  }
  if ( !(unsigned __int8)House::IsCurrentPlayer(*(House **)(this + 540)) ) /*0x708a60*/
  {
    v12 = *(_DWORD *)(this + 692); /*0x708a69*/
    if ( v12 ) /*0x708a71*/
    {
      if ( (*(_BYTE *)(v12 + 20) & 2) != 0 ) /*0x708a7f*/
      {
        v15 = TechnoClass::ComputeDamage((TechnoClass *)this, (int *)v12, &g_BuildingLoadQueue_Array.?[3]); /*0x708a8e*/
        if ( TechnoClass::ComputeDamage((TechnoClass *)this, a2, &g_BuildingLoadQueue_Array.?[3]) < v15 ) /*0x708aa8*/
          return 0; /*0x708aa8*/
      }
    }
  }
  if ( this && (*(_BYTE *)(this + 20) & 4) != 0 && a2 == *(int **)(this + 1684) ) /*0x708ac3*/
    return 0; /*0x708ac3*/
  v13 = *(_DWORD *)(*(int (__thiscall **)(int, int))(*(_DWORD *)this + 1016))(this, v6); /*0x708ad0*/
  return !v13 /*0x708b1a*/
      || !*(_DWORD *)(v13 + 172)
      || *(double *)(*(_DWORD *)(v13 + 172) + 8 * *(_DWORD *)((*(int (__thiscall **)(int *))(*a2 + 132))(a2) + 156) + 160) > 0.0099999998;
}



// ==== 0x00708B30  ObjectClass::GetTypeVt28  this=TechnoClass  sig=csp ====
int __thiscall ObjectClass::GetTypeVt28(ObjectClass *this)
{
  int v1; // eax

  v1 = (*((int (__thiscall **)(ObjectClass *))this->AbstractClass + 33))(this); /*0x708b32*/
  return (*(int (__thiscall **)(int))(*(_DWORD *)v1 + 112))(v1);
}



// ==== 0x00708B40  TechnoClass::GetCostMultiplier  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::GetCostMultiplier(TechnoClass *this)
{
  int v2; // edi
  int v3; // edi
  TechnoClass *bunkerLinkedUnit; // ecx

  v2 = (*((int (__thiscall **)(TechnoClass *))this->RadioClass + 33))(this); /*0x708b4c*/
  if ( !v2 ) /*0x708b50*/
    return 0; /*0x708bad*/
  if ( (*((int (__thiscall **)(TechnoClass *))this->RadioClass + 11))(this) != 6 ) /*0x708b5c*/
    return *(_DWORD *)(v2 + 1648); /*0x708b5c*/
  if ( (*((int (__thiscall **)(TechnoClass *))this->RadioClass + 258))(this) > 0 ) /*0x708b6a*/
  {
    v3 = *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 3572); /*0x708b74*/
    return v3 * (*((int (__thiscall **)(TechnoClass *))this->RadioClass + 258))(this); /*0x708b87*/
  }
  bunkerLinkedUnit = this->bunkerLinkedUnit; /*0x708b88*/
  if ( bunkerLinkedUnit ) /*0x708b90*/
    return *(_DWORD *)((*((int (__thiscall **)(TechnoClass *))bunkerLinkedUnit->RadioClass + 33))(bunkerLinkedUnit) /*0x708b9a*/
                     + 1648);
  else
    return *(_DWORD *)(v2 + 1648); /*0x708ba3*/
}



// ==== 0x00708BC0  TechnoClass::ComputeAverageValue  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::ComputeAverageValue(TechnoClass *this)
{
  int result; // eax

  result = (*((int (__thiscall **)(TechnoClass *))this->RadioClass + 33))(this); /*0x708bc8*/
  if ( *(_DWORD *)(result + 2048) ) /*0x708bce*/
  {
    Float4::Sum((int *)&this->tiltSidewaysAngle); /*0x708bde*/
    return (*((int (__thiscall **)(TechnoClass *))this->RadioClass + 33))(this); /*0x708beb*/
  }
  return result; /*0x708bfc*/
}



// ==== 0x00708C10  TechnoClass::GetGlobalValue  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::GetGlobalValue(TechnoClass *this)
{
  _DWORD *v2; // [esp+8h] [ebp+8h]

  *v2 = *(_DWORD *)&g_BuildingLoadQueue_Array.?[24]; /*0x708c1a*/
  return 0; /*0x708c1e*/
}



// ==== 0x00708C30  TechnoClass::GetAmmoCount  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::GetAmmoCount(TechnoClass *this)
{
  double v1; // st7
  int v3; // eax
  double v4; // st7
  TechnoClass *captureManager; // ecx
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // eax
  BOOL v10; // ecx
  int result; // eax
  double ammo; // [esp+8h] [ebp-10h]

  switch ( *(_DWORD *)((*((int (__thiscall **)(TechnoClass *))this->RadioClass + 33))(this) + 980) ) /*0x708c4e*/
  {
    case 1: /*0x708c4e*/
      ammo = (double)this->ammo; /*0x708c5f*/
      v3 = (*((int (__usercall **)@<eax>(TechnoClass *@<ecx>))this->RadioClass + 33))(this); /*0x708c63*/
      v4 = (double)(*(int (__thiscall **)(int))(*(_DWORD *)v3 + 116))(v3); /*0x708c74*/
      goto LABEL_7; /*0x708c78*/
    case 2: /*0x708c4e*/
      Float4::Sum((int *)&this->tiltSidewaysAngle); /*0x708cdf*/
      ammo = v1; /*0x708ce8*/
      v4 = (double)*(int *)((*((int (__thiscall **)(TechnoClass *))this->RadioClass + 33))(this) + 2048); /*0x708cf2*/
      goto LABEL_7; /*0x708cf2*/
    case 3: /*0x708c4e*/
      ammo = (double)this->passengers[0]; /*0x708cbe*/
      v7 = (*((int (__usercall **)@<eax>(TechnoClass *@<ecx>))this->RadioClass + 33))(this); /*0x708cc2*/
      v4 = (double)(*(int (__thiscall **)(int))(*(_DWORD *)v7 + 116))(v7); /*0x708cd3*/
      goto LABEL_7; /*0x708cd7*/
    case 5: /*0x708c4e*/
      captureManager = (TechnoClass *)this->captureManager; /*0x708c7a*/
      if ( !captureManager ) /*0x708c82*/
        goto LABEL_10; /*0x708c82*/
      ammo = (double)TechnoClass::processPowerDrain(captureManager); /*0x708c99*/
      v6 = (*((int (__usercall **)@<eax>(TechnoClass *@<ecx>))this->RadioClass + 33))(this); /*0x708c9d*/
      v4 = (double)(*(int (__thiscall **)(int))(*(_DWORD *)v6 + 116))(v6); /*0x708cae*/
LABEL_7:
      v8 = (*((int (__thiscall **)(TechnoClass *))this->RadioClass + 33))(this); /*0x708cf8*/
      (*(void (__thiscall **)(int))(*(_DWORD *)v8 + 116))(v8); /*0x708d0a*/
      LOWORD(v9) = Math::RoundToInt(v4); /*0x708d25*/
      v10 = v9; /*0x708d2a*/
      if ( !v9 ) /*0x708d2e*/
        v10 = ammo > 0.0; /*0x708d41*/
      result = v10; /*0x708d46*/
      break; /*0x708d4c*/
    default:
LABEL_10:
      result = 0; /*0x708d4d*/
      break; /*0x708d4d*/
  }
  return result; /*0x708d48*/
}



// ==== 0x00708D70  TechnoClass::Vt170  this=TechnoClass  sig=csp ====
_DWORD *__thiscall TechnoClass::Vt170(TechnoClass *this, _DWORD *a2)
{
  int v2; // ecx
  TechnoClass *v4; // [esp+0h] [ebp-4h] BYREF

  v4 = this; /*0x708d70*/
  v2 = *(_DWORD *)(*((int (__thiscall **)(TechnoClass *, TechnoClass **))this->RadioClass + 170))(this, &v4); /*0x708d7e*/
  *a2 = v2; /*0x708d84*/
  return a2; /*0x708d87*/
}



// ==== 0x00708D90  TechnoClass::SetMoveDestination  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::SetMoveDestination(TechnoClass *this)
{
  int result; // eax
  int v3; // [esp+Ch] [ebp+4h]

  LOBYTE(result) = g_MoveFeedback; /*0x708d90*/
  if ( g_MoveFeedback && v3 != -1 ) /*0x708da4*/
  {
    result = House::IsHumanPlayer((House *)this->owner); /*0x708dac*/
    if ( (_BYTE)result ) /*0x708db3*/
      this->queuedVoiceIndex = v3; /*0x708db5*/
  }
  return result; /*0x708dbb*/
}



// ==== 0x00708DC0  TechnoClass::GetPrimaryTargetOrFallback  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::GetPrimaryTargetOrFallback(TechnoClass *this)
{
  int (__thiscall **vtable0)(TechnoClass *, _DWORD); // edi
  int v3; // eax

  if ( *(_DWORD *)((*((int (__thiscall **)(TechnoClass *))this->RadioClass + 33))(this) + 1372) == -1 ) /*0x708dd2*/
    return (*((int (__thiscall **)(TechnoClass *))this->RadioClass + 214))(this); /*0x708df5*/
  vtable0 = (int (__thiscall **)(TechnoClass *, _DWORD))this->RadioClass; /*0x708dd5*/
  v3 = (*((int (__thiscall **)(TechnoClass *))this->RadioClass + 33))(this); /*0x708dd9*/
  return vtable0[213](this, *(_DWORD *)(v3 + 1372)); /*0x708def*/
}



// ==== 0x00708E00  TechnoClass::PickAlternateTarget  this=TechnoClass  sig=csp ====
void __fastcall TechnoClass::PickAlternateTarget(TechnoClass *this)
{
  int v2; // eax
  void (__thiscall **vtable0)(TechnoClass *, _DWORD); // edi
  int v4; // eax
  void (__thiscall **v5)(TechnoClass *, _DWORD); // edi
  int v6; // eax

  if ( !this->unknown_bool_4F8 )
  {
    if ( this
      && (*((int (__thiscall **)(TechnoClass *))this->RadioClass + 11))(this) == 15
      && (v2 = (*((int (__thiscall **)(TechnoClass *))this->RadioClass + 11))(this),
          (unsigned __int8)TechnoClass::IsMission27to30(v2 == 15 ? this : 0)) )
    {
      if ( *(_DWORD *)((*((int (__thiscall **)(TechnoClass *))this->RadioClass + 33))(this) + 1428) != -1 ) /*0x708e4f*/
      {
        vtable0 = (void (__thiscall **)(TechnoClass *, _DWORD))this->RadioClass; /*0x708e51*/
        v4 = (*((int (__thiscall **)(TechnoClass *))this->RadioClass + 33))(this); /*0x708e55*/
        vtable0[213](this, *(_DWORD *)(v4 + 1428)); /*0x708e64*/
        this->unknown_bool_4F8 = 0; /*0x708e6a*/
        return; /*0x708e73*/
      }
    }
    else if ( *(_DWORD *)((*((int (__thiscall **)(TechnoClass *))this->RadioClass + 33))(this) + 1424) != -1 ) /*0x708e85*/
    {
      v5 = (void (__thiscall **)(TechnoClass *, _DWORD))this->RadioClass; /*0x708e87*/
      v6 = (*((int (__thiscall **)(TechnoClass *))this->RadioClass + 33))(this); /*0x708e8b*/
      v5[213](this, *(_DWORD *)(v6 + 1424)); /*0x708e9a*/
    }
  }
  this->unknown_bool_4F8 = 0; /*0x708ea0*/
}



// ==== 0x00708EB0  TechnoClass::SelectRandomTarget  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::SelectRandomTarget(TechnoClass *this)
{
  int v2; // eax
  int v3; // ecx
  int result; // eax
  unsigned int v5; // edi
  int v6; // ecx
  int v7; // eax
  int v8; // ecx
  unsigned int v9; // edi
  int v10; // eax
  int v11; // eax
  int v12; // ecx

  if ( this->slaveOwner ) /*0x708eb5*/
  {
    v2 = (*((int (__thiscall **)(TechnoClass *))this->RadioClass + 33))(this); /*0x708ec1*/
    v3 = *(_DWORD *)(v2 + 1088); /*0x708ec7*/
    result = v2 + 1072; /*0x708ecd*/
    if ( !v3 ) /*0x708ed4*/
      return result; /*0x708ed4*/
    v5 = Random::State(&Randomizer_Global); /*0x708ee8*/
    v6 = (*((int (__thiscall **)(TechnoClass *))this->RadioClass + 33))(this) + 1072; /*0x708ef2*/
    return (*((int (__thiscall **)(TechnoClass *, _DWORD))this->RadioClass + 213))( /*0x708fa7*/
             this,
             *(_DWORD *)(*(_DWORD *)(v6 + 4) + 4 * (v5 % *(_DWORD *)(v6 + 16))));
  }
  if ( !this->__pad_1C4[4] ) /*0x708f05*/
  {
    v11 = (*((int (__thiscall **)(TechnoClass *))this->RadioClass + 33))(this); /*0x708f62*/
    v12 = *(_DWORD *)(v11 + 1060); /*0x708f68*/
    result = v11 + 1044; /*0x708f6e*/
    if ( !v12 ) /*0x708f75*/
      return result; /*0x708f75*/
    v5 = Random::State(&Randomizer_Global); /*0x708f85*/
    v6 = (*((int (__thiscall **)(TechnoClass *))this->RadioClass + 33))(this) + 1044; /*0x708f8f*/
    return (*((int (__thiscall **)(TechnoClass *, _DWORD))this->RadioClass + 213))( /*0x708f8f*/
             this,
             *(_DWORD *)(*(_DWORD *)(v6 + 4) + 4 * (v5 % *(_DWORD *)(v6 + 16))));
  }
  v7 = (*((int (__thiscall **)(TechnoClass *))this->RadioClass + 33))(this); /*0x708f0b*/
  v8 = *(_DWORD *)(v7 + 1116); /*0x708f11*/
  result = v7 + 1100; /*0x708f17*/
  if ( v8 ) /*0x708f1e*/
  {
    v9 = Random::State(&Randomizer_Global); /*0x708f2e*/
    v10 = (*((int (__thiscall **)(TechnoClass *))this->RadioClass + 33))(this); /*0x708f34*/
    return (*((int (__thiscall **)(TechnoClass *, _DWORD))this->RadioClass + 213))( /*0x708f54*/
             this,
             *(_DWORD *)(*(_DWORD *)(v10 + 1104) + 4 * (v9 % *(_DWORD *)(v10 + 1116))));
  }
  return result; /*0x708f5a*/
}



// ==== 0x00708FC0  TechnoClass::ResponseMove_Pickup  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::ResponseMove_Pickup(TechnoClass *this)
{
  int v2; // eax
  int v3; // ecx
  int result; // eax
  unsigned int v5; // edi
  int v6; // eax

  v2 = (*((int (__thiscall **)(TechnoClass *))this->RadioClass + 33))(this); /*0x708fc5*/
  v3 = *(_DWORD *)(v2 + 1144); /*0x708fcb*/
  result = v2 + 1128; /*0x708fd1*/
  if ( v3 ) /*0x708fd8*/
  {
    v5 = Random::State(&Randomizer_Global); /*0x708fea*/
    v6 = (*((int (__thiscall **)(TechnoClass *))this->RadioClass + 33))(this); /*0x708fec*/
    return (*((int (__thiscall **)(TechnoClass *, _DWORD))this->RadioClass + 213))( /*0x70900c*/
             this,
             *(_DWORD *)(*(_DWORD *)(v6 + 1132) + 4 * (v5 % *(_DWORD *)(v6 + 1144))));
  }
  return result; /*0x709014*/
}



// ==== 0x00709020  TechnoClass::GetSecondaryTargetOrFallback  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::GetSecondaryTargetOrFallback(TechnoClass *this)
{
  int (__thiscall **vtable0)(TechnoClass *, _DWORD); // edi
  int v3; // eax

  if ( *(_DWORD *)((*((int (__thiscall **)(TechnoClass *))this->RadioClass + 33))(this) + 1368) == -1 ) /*0x709032*/
    return (*((int (__thiscall **)(TechnoClass *))this->RadioClass + 218))(this); /*0x709055*/
  vtable0 = (int (__thiscall **)(TechnoClass *, _DWORD))this->RadioClass; /*0x709035*/
  v3 = (*((int (__thiscall **)(TechnoClass *))this->RadioClass + 33))(this); /*0x709039*/
  return vtable0[213](this, *(_DWORD *)(v3 + 1368)); /*0x70904f*/
}



// ==== 0x00709060  TechnoClass::GetTertiaryTargetOrFallback  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::GetTertiaryTargetOrFallback(TechnoClass *this)
{
  int (__thiscall **vtable0)(TechnoClass *, _DWORD); // edi
  int v3; // eax

  if ( *(_DWORD *)((*((int (__thiscall **)(TechnoClass *))this->RadioClass + 33))(this) + 1404) == -1 ) /*0x709072*/
    return (*((int (__thiscall **)(TechnoClass *))this->RadioClass + 218))(this); /*0x709095*/
  vtable0 = (int (__thiscall **)(TechnoClass *, _DWORD))this->RadioClass; /*0x709075*/
  v3 = (*((int (__thiscall **)(TechnoClass *))this->RadioClass + 33))(this); /*0x709079*/
  return vtable0[213](this, *(_DWORD *)(v3 + 1404)); /*0x70908f*/
}



// ==== 0x007090A0  TechnoClass::VoiceAttack  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::VoiceAttack(TechnoClass *this)
{
  int v2; // edi
  int v3; // eax
  int v4; // edi
  int v5; // eax
  int v6; // ecx
  int result; // eax
  unsigned int v8; // edi
  int v9; // eax
  int v10; // [esp+Ch] [ebp+4h]

  v2 = (*((int (__thiscall **)(TechnoClass *, int))this->RadioClass + 185))(this, v10); /*0x7090b5*/
  v3 = *(_DWORD *)(*((int (__thiscall **)(TechnoClass *, int))this->RadioClass + 254))(this, v2); /*0x7090c0*/
  if ( v3 /*0x7090d7*/
    && *(int *)(v3 + 164) < 0
    && (unsigned __int8)ObjectClass::StepCleanup((ObjectClass *)this, g_INI_Key_TRUCKA.?) )
  {
    v4 = *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 560); /*0x7090e5*/
  }
  else if ( (unsigned __int8)Audio::IsLoud(this->veterancy) ) /*0x7090f3*/
  {
    if ( v2 ) /*0x7090fe*/
      v4 = *(_DWORD *)((*((int (__thiscall **)(TechnoClass *))this->RadioClass + 33))(this) + 1420); /*0x70911c*/
    else
      v4 = *(_DWORD *)((*((int (__thiscall **)(TechnoClass *))this->RadioClass + 33))(this) + 1412); /*0x70910a*/
  }
  else if ( v2 ) /*0x709126*/
  {
    v4 = *(_DWORD *)((*((int (__thiscall **)(TechnoClass *))this->RadioClass + 33))(this) + 1416); /*0x709144*/
  }
  else
  {
    v4 = *(_DWORD *)((*((int (__thiscall **)(TechnoClass *))this->RadioClass + 33))(this) + 1408); /*0x709132*/
  }
  v5 = (*((int (__thiscall **)(TechnoClass *))this->RadioClass + 33))(this); /*0x70914e*/
  v6 = *(_DWORD *)(v5 + 1172); /*0x709154*/
  result = v5 + 1156; /*0x70915a*/
  if ( !v6 ) /*0x709161*/
  {
    if ( v4 == -1 ) /*0x709166*/
      return result; /*0x709166*/
    return (*((int (__thiscall **)(TechnoClass *, int))this->RadioClass + 213))(this, v4); /*0x709166*/
  }
  if ( v4 != -1 ) /*0x70917b*/
    return (*((int (__thiscall **)(TechnoClass *, int))this->RadioClass + 213))(this, v4); /*0x709175*/
  v8 = Random::State(&Randomizer_Global); /*0x70919c*/
  v9 = (*((int (__thiscall **)(TechnoClass *))this->RadioClass + 33))(this); /*0x70919e*/
  return (*((int (__thiscall **)(TechnoClass *, _DWORD))this->RadioClass + 213))( /*0x709173*/
           this,
           *(_DWORD *)(*(_DWORD *)(v9 + 1160) + 4 * (v8 % *(_DWORD *)(v9 + 1172))));
}



// ==== 0x007091D0  FootClass::CanEnterBuilding  this=FootClass  sig=csp ====
bool __thiscall FootClass::CanEnterBuilding(FootClass *this)
{
  CaptureManagerClass *captureManager; // ecx
  bool v3; // bl
  bool result; // al

  result = 0; /*0x70927e*/
  if ( !(*((unsigned __int8 (__thiscall **)(FootClass *))this->TechnoClass + 119))(this) /*0x709226*/
    && !this->?
    && *(_BYTE *)((*((int (__thiscall **)(FootClass *))this->TechnoClass + 33))(this) + 3481)
    && ((*((int (__thiscall **)(FootClass *))this->TechnoClass + 11))(this) != 6
     || !*(_BYTE *)(this->planningPathIdx + 5499)
     || (*((int (__thiscall **)(FootClass *))this->TechnoClass + 258))(this)) )
  {
    captureManager = this->?; /*0x709230*/
    v3 = captureManager && CaptureManagerClass::CannotControlAnyMore(captureManager); /*0x709243*/
    if ( (!(*((unsigned __int8 (__thiscall **)(FootClass *))this->TechnoClass + 204))(this) /*0x70926e*/
       || !(unsigned __int8)House::IsCurrentPlayer((House *)this->?))
      && !v3
      && (*((unsigned __int8 (__thiscall **)(FootClass *))this->TechnoClass + 171))(this) )
    {
      return 1; /*0x70922e*/
    }
  }
  return result; /*0x709278*/
}



// ==== 0x00709290  FootClass::CanEnterCell  this=TechnoClass  sig=csp ====
bool __usercall FootClass::CanEnterCell@<al>(int a1@<ecx>, int a2@<ebx>)
{
  int v3; // eax
  int v4; // eax
  bool result; // al
  FactoryClass *v6; // ecx
  int v7; // edi
  FactoryClass *v8; // ecx
  int v9; // edi
  int *v10; // eax
  int v11; // eax
  bool v12; // bl
  bool v13; // al

  if ( !*(_DWORD *)(a1 + 692) && !(unsigned __int8)House::IsCurrentPlayer(*(House **)(a1 + 540)) ) /*0x7092aa*/
  {
    if ( a1 ) /*0x7092b5*/
    {
      if ( (*(_BYTE *)(a1 + 20) & 4) != 0 ) /*0x7092c3*/
      {
        v3 = *(_DWORD *)(a1 + 1492); /*0x7092c5*/
        if ( v3 ) /*0x7092cd*/
        {
          v4 = *(_DWORD *)(v3 + 36); /*0x7092cf*/
          if ( !*(_BYTE *)(v4 + 175) && *(_BYTE *)(v4 + 173) && *(_DWORD *)(a1 + 172) == 2 ) /*0x7092ec*/
            return 1; /*0x7092ec*/
        }
      }
    }
  }
  result = FootClass::CanEnterBuilding((FootClass *)a1); /*0x7092f4*/
  if ( !result ) /*0x7092fb*/
    return result; /*0x7092fb*/
  if ( *(_DWORD *)(a1 + 172) == 2 )
  {
    if ( *(_BYTE *)((*(int (__thiscall **)(int))(*(_DWORD *)a1 + 132))(a1) + 3434) ) /*0x709317*/
    {
      if ( !a1 || (*(_BYTE *)(a1 + 20) & 4) == 0 ) /*0x709331*/
        return 0; /*0x709338*/
      if ( *(_DWORD *)(a1 + 1444) == (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 444))(a1) ) /*0x709349*/
      {
        v6 = *(FactoryClass **)(a1 + 1300); /*0x70934b*/
        if ( !v6 || FactoryClass::GetState(v6) <= 0 ) /*0x709360*/
          return 1; /*0x709360*/
      }
    }
    if ( *(_DWORD *)(a1 + 172) == 2 )
    {
      if ( a1 )
      {
        if ( (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 44))(a1) == 1 )
        {
          if ( *(_BYTE *)(*(_DWORD *)((*(int (__thiscall **)(int))(*(_DWORD *)a1 + 44))(a1) == 1 ? a1 + 0x6C4 : 1732)
                        + 3603) )
          {
            v7 = (*(_BYTE *)(a1 + 20) & 4) != 0 ? a1 : 0;
            if ( *(_DWORD *)(v7 + 1444) == (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 444))(a1) ) /*0x7093bc*/
            {
              v8 = *(FactoryClass **)(a1 + 1300); /*0x7093be*/
              if ( !v8 || FactoryClass::GetState(v8) <= 0 ) /*0x7093d3*/
                return 1; /*0x7093d3*/
            }
          }
        }
      }
    }
  }
  if ( *(_BYTE *)((*(int (__thiscall **)(int))(*(_DWORD *)a1 + 132))(a1) + 1711) ) /*0x7093df*/
    return 1; /*0x7093df*/
  if ( *(_DWORD *)(a1 + 172) != 5 ) /*0x7093f0*/
    return 0; /*0x7093f7*/
  v9 = (*(int (__thiscall **)(int, int))(*(_DWORD *)a1 + 996))(a1, a2); /*0x709403*/
  v10 = (int *)(*(int (__thiscall **)(int, int))(*(_DWORD *)a1 + 1016))(a1, v9); /*0x70940a*/
  v12 = 0; /*0x709424*/
  if ( v10 ) /*0x709412*/
  {
    v11 = *v10; /*0x709414*/
    if ( v11 ) /*0x709418*/
    {
      if ( *(_BYTE *)(v11 + 336) ) /*0x70941a*/
        v12 = 1; /*0x709412*/
    }
  }
  v13 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)a1 + 740))(a1, *(_DWORD *)(a1 + 692)) == v9; /*0x70943d*/
  return !v12 || !v13; /*0x709450*/
}



// ==== 0x00709480  JumpjetLocomotionClass::StubReturnZero_16  this=JumpjetLocomotionClass  sig=csp ====
char __thiscall JumpjetLocomotionClass::StubReturnZero_16(JumpjetLocomotionClass *this)
{
  int v2; // ebx
  int v3; // edi
  int v4; // eax
  char result; // al
  _BYTE v6[12]; // [esp+8h] [ebp-Ch] BYREF

  if ( !FootClass::CanEnterCell((int)this, 0) ) /*0x709489*/
    return 0; /*0x7094d5*/
  v2 = *((_DWORD *)this + 173); /*0x709497*/
  v3 = this->LocomotionClass[0]; /*0x70949e*/
  *((_DWORD *)this + 319) = *(_DWORD *)&stru_A8EB00.?[416]; /*0x7094a9*/
  v4 = (*(int (__thiscall **)(JumpjetLocomotionClass *, _BYTE *, int))(v3 + 72))(this, v6, 1); /*0x7094af*/
  result = (*(int (__thiscall **)(JumpjetLocomotionClass *, int))(v3 + 924))(this, v4); /*0x7094b5*/
  if ( result ) /*0x7094be*/
  {
    if ( *((_DWORD *)this + 173) != v2 ) /*0x7094c6*/
      *((_BYTE *)this + 1292) = 1; /*0x7094c8*/
  }
  return result; /*0x7094cf*/
}



// ==== 0x00709550  ObjectClass::SelectTargetByWeight  this=ObjectClass  sig=csp ====
void __usercall SelectTargetByWeight(TechnoClass *this, int a2@<esi>)
{
  _DWORD *v2; // ecx
  _DWORD *v3; // edi
  int i; // edx
  int v5; // eax
  int v6; // ecx
  _DWORD *v7; // esi
  int v8; // eax
  int v9; // ecx
  int v10; // eax
  int v11; // ebp
  int v12; // eax
  int v13; // ebx
  int v14; // eax
  int v15; // esi
  _DWORD *v16; // ecx
  int v17; // eax
  _DWORD *v18; // esi
  int v19; // eax
  int v20; // ebp
  int v21; // edx
  int v22; // eax
  int v23; // ebx
  int v24; // edx
  int v25; // esi
  int k; // eax
  int j; // [esp+10h] [ebp-38h]
  int v29; // [esp+14h] [ebp-34h]
  VectorClass v30; // [esp+18h] [ebp-30h] BYREF
  int v31; // [esp+28h] [ebp-20h]
  int v32; // [esp+2Ch] [ebp-1Ch]
  void **v33; // [esp+30h] [ebp-18h] BYREF
  void *v34; // [esp+34h] [ebp-14h]
  int v35; // [esp+38h] [ebp-10h]
  char v36; // [esp+3Dh] [ebp-Bh]
  int v37; // [esp+40h] [ebp-8h]
  int v38; // [esp+44h] [ebp-4h]

  v3 = v2; /*0x709555*/
  if ( v2[282] ) /*0x709559*/
  {
    for ( i = v2[288] - 1; i >= 0; --i ) /*0x70957f*/
    {
      v5 = 0; /*0x709587*/
      v6 = v3[282]; /*0x70958c*/
      if ( v6 <= 0 ) /*0x709594*/
      {
LABEL_8:
        v8 = v3[288]; /*0x7095a8*/
        if ( i < v8 ) /*0x7095b0*/
        {
          v9 = v8 - 1; /*0x7095b2*/
          v10 = i; /*0x7095b5*/
          for ( v3[288] = v9; v10 < v3[288]; *(_DWORD *)(v3[285] + 4 * v10 - 4) = *(_DWORD *)(v3[285] + 4 * v10) ) /*0x7095bf*/
            ++v10; /*0x7095c7*/
        }
      }
      else
      {
        v7 = (_DWORD *)v3[279]; /*0x709596*/
        while ( *(_DWORD *)(v3[285] + 4 * i) != *v7 ) /*0x70959e*/
        {
          ++v5; /*0x7095a0*/
          ++v7; /*0x7095a1*/
          if ( v5 >= v6 ) /*0x7095a6*/
            goto LABEL_8; /*0x7095a6*/
        }
      }
    }
    AbstractClassVector::Construct((AbstractClassVector *)&v33, 0, 0); /*0x7095e2*/
    v33 = &DynamicVectorClass<AbstractClass *>::`vftable'; /*0x7095f2*/
    v38 = 10; /*0x7095fa*/
    v37 = 0; /*0x7095fe*/
    VectorClass::Construct(&v30, 0, 0); /*0x709602*/
    v11 = v3[288]; /*0x709607*/
    v30.vtable0 = (int)&DynamicVectorClass<int>::`vftable'; /*0x70960d*/
    v32 = 10; /*0x709617*/
    v31 = 0; /*0x70961b*/
    if ( v11 > 0 ) /*0x70961f*/
    {
      v12 = 0; /*0x70962b*/
      v29 = v3[282]; /*0x70962f*/
      for ( j = 0; j < v29; ++j ) /*0x709637*/
      {
        v13 = 4 * v12; /*0x709643*/
        v14 = 0; /*0x70964a*/
        v15 = *(_DWORD *)(v3[279] + v13); /*0x70964c*/
        v16 = (_DWORD *)v3[285]; /*0x709653*/
        while ( v15 != *v16 ) /*0x70965b*/
        {
          ++v14; /*0x709661*/
          ++v16; /*0x709662*/
          if ( v14 >= v11 ) /*0x709667*/
          {
            if ( v37 < v35 /*0x709696*/
              || (v36 || !v35)
              && v38 > 0
              && ((unsigned __int8 (__thiscall *)(void ***, int, _DWORD))v33[2])(&v33, v38 + v35, 0) )
            {
              v17 = v37++; /*0x7096a1*/
              *((_DWORD *)v34 + v17) = v15; /*0x7096ac*/
            }
            v18 = (_DWORD *)(v13 + v3[273]); /*0x7096bd*/
            if ( v31 < v30.Capacity /*0x7096e4*/
              || (v30.IsAllocated[0] || !v30.Capacity)
              && v32 > 0
              && (*(unsigned __int8 (__thiscall **)(VectorClass *, int, _DWORD))(v30.vtable0 + 8))(
                   &v30,
                   v32 + v30.Capacity,
                   0) )
            {
              v19 = v31++; /*0x7096f3*/
              *(_DWORD *)(v30.Items + 4 * v19) = *v18; /*0x7096fc*/
            }
            break; /*0x7096fc*/
          }
        }
        v12 = j + 1; /*0x7096ff*/
      }
    }
    if ( v37 ) /*0x70971a*/
    {
      v24 = 0; /*0x709765*/
      v25 = 0; /*0x709767*/
      for ( k = 0; k < v37; ++k ) /*0x70976d*/
      {
        if ( *(_DWORD *)(v30.Items + 4 * k) > v24 ) /*0x70977c*/
        {
          v25 = *((_DWORD *)v34 + k); /*0x70977e*/
          v24 = *(_DWORD *)(v30.Items + 4 * k); /*0x709782*/
        }
      }
      (*(void (__thiscall **)(_DWORD *, int))(*v3 + 968))(v3, v25); /*0x709792*/
    }
    else
    {
      (*(void (__thiscall **)(_DWORD *, int))(v3[284] + 12))(v3 + 284, a2); /*0x709728*/
      v20 = v3[282]; /*0x70972b*/
      v21 = 0; /*0x709731*/
      v22 = 0; /*0x709735*/
      if ( v20 > 0 ) /*0x709739*/
      {
        v23 = v3[273]; /*0x70973b*/
        do /*0x709756*/
        {
          if ( *(_DWORD *)(v23 + 4 * v22) > v21 ) /*0x709746*/
            v21 = *(_DWORD *)(v23 + 4 * v22); /*0x709748*/
          ++v22; /*0x709753*/
        }
        while ( v22 < v20 ); /*0x709756*/
      }
      (*(void (__thiscall **)(_DWORD *))(*v3 + 968))(v3); /*0x70975d*/
    }
    v30.vtable0 = (int)&VectorClass<int>::`vftable'; /*0x7097a0*/
    if ( v30.Items && v30.IsAllocated[0] ) /*0x7097b0*/
    {
      __3_YAXPAX_Z((void *)v30.Items); /*0x7097b3*/
      v30.Items = 0; /*0x7097bb*/
    }
    v30.Capacity = 0; /*0x7097c3*/
    v30.IsAllocated[0] = 0; /*0x7097ca*/
    v33 = &VectorClass<AbstractClass *>::`vftable'; /*0x7097cf*/
    if ( v34 ) /*0x7097d8*/
    {
      if ( v36 ) /*0x7097e0*/
        __3_YAXPAX_Z(v34); /*0x7097e3*/
    }
  }
  else
  {
    (*(void (__thiscall **)(_DWORD *))(v2[284] + 12))(v2 + 284); /*0x70956d*/
  }
}



// ==== 0x00709820  TechnoClass::BeginFiringSequence  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::BeginFiringSequence(TechnoClass *this)
{
  int v2; // ecx
  int v3; // eax
  int v4; // eax
  UnitClass *spawnManager; // ecx
  int v6; // edi
  int v7; // eax
  int v8; // eax
  TechnoClass *v10; // [esp+0h] [ebp-14h]
  int v11; // [esp+Ch] [ebp-8h]
  int v12; // [esp+18h] [ebp+4h]
  char v13; // [esp+1Ch] [ebp+8h]

  this->unknown_4FC = (int)dword_A8ED84; /*0x70982e*/
  if ( this->currentMission == 11 ) /*0x70983f*/
    v2 = Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, 2) + *(_DWORD *)&dword_8871E0->__pad_C3C[456]; /*0x709864*/
  else
    v2 = Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, 2) + *(_DWORD *)&dword_8871E0->__pad_C3C[460]; /*0x70989a*/
  this->targetingTimer[0] = (int)dword_A8ED84; /*0x70986c*/
  this->targetingTimer[1] = v11; /*0x7098b0*/
  this->targetingTimer[2] = v2; /*0x7098b6*/
  if ( this->target && LOBYTE(this->shouldLoseTarget) ) /*0x7098c3*/
  {
    v3 = (*(int (__thiscall **)(TechnoClass *, int))(this->vtable0 + 740))(this, this->target); /*0x7098d2*/
    v4 = (*(int (__thiscall **)(TechnoClass *, int, int, int))(this->vtable0 + 960))(this, this->target, v3, 1); /*0x7098e6*/
    if ( v4 == 6 ) /*0x7098ef*/
    {
      spawnManager = (UnitClass *)this->spawnManager; /*0x7098f1*/
      if ( spawnManager ) /*0x7098f9*/
      {
        UnitClass::ProcessIdleOrders(spawnManager); /*0x7098fb*/
        goto LABEL_12; /*0x709900*/
      }
      goto LABEL_11; /*0x7098f9*/
    }
    if ( v4 == 5 || v4 == 8 ) /*0x70990a*/
LABEL_11:
      (*(void (__thiscall **)(TechnoClass *, _DWORD))(this->vtable0 + 968))(this, 0); /*0x70990c*/
  }
LABEL_12:
  if ( !this->target )
  {
    v6 = (*(int (__thiscall **)(TechnoClass *, int, int, _DWORD))(this->vtable0 + 964))(this, v13 & 3, v12, 0); /*0x70993c*/
    if ( *(_BYTE *)((*(int (__thiscall **)(TechnoClass *))(this->vtable0 + 132))(this) + 1712) )
    {
      SelectTargetByWeight(v10, (int)this); /*0x709950*/
    }
    else
    {
      if ( v6 ) /*0x709959*/
        (*(void (__thiscall **)(TechnoClass *, int))(this->vtable0 + 968))(this, v6); /*0x709960*/
      v7 = (*(int (__thiscall **)(TechnoClass *, int))(this->vtable0 + 740))(this, this->target); /*0x709971*/
      if ( v6 )
        v6 = (*(_BYTE *)(v6 + 20) & 1) != 0 ? v6 : 0;
      v8 = *(_DWORD *)(*(int (__thiscall **)(TechnoClass *, int))(this->vtable0 + 1016))(this, v7); /*0x709992*/
      if ( v6 && v8 && !*(_BYTE *)(*(_DWORD *)(v8 + 160) + 674) ) /*0x7099a2*/
        *(_DWORD *)(v6 + 112) -= TechnoClass::ComputeAudioFalloffDamage(this, v6, v8); /*0x7099b5*/
    }
  }
  return this->target != 0; /*0x7099c2*/
}



// ==== 0x007099D0  TechnoClass::IsDirty  this=TechnoClass  sig=csp ====
int __stdcall IPersistStream::IsDirty(TechnoClass *this, int a2)
{
  return 0; /*0x7099d2*/
}



// ==== 0x007099E0  TechnoClass::IsTimerExpired  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::IsTimerExpired(TechnoClass *this)
{
  int v1; // edx
  int result; // eax

  v1 = this->idleActionTimer[0]; /*0x7099e0*/
  result = this->idleActionTimer[2]; /*0x7099e6*/
  if ( v1 != -1 ) /*0x7099ef*/
  {
    if ( *(_DWORD *)&stru_A8EB00.?[416] - v1 < result ) /*0x7099fb*/
    {
      result -= *(_DWORD *)&stru_A8EB00.?[416] - v1; /*0x7099fd*/
      LOBYTE(result) = result == 0; /*0x709a06*/
      return result; /*0x709a08*/
    }
    result = 0; /*0x709a09*/
  }
  LOBYTE(result) = result == 0; /*0x709a12*/
  return result; /*0x709a08*/
}



// ==== 0x00709A20  TechnoClass::COMStub_Return0_287  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::COMStub_Return0_287(TechnoClass *this)
{
  int result; // eax

  return result; /*0x709a20*/
}



// ==== 0x00709A30  TechnoClass::Stub  this=TechnoClass  sig=csp ====
void __stdcall IPersistStream::Stub(TechnoClass *this, int a2)
{
  ; /*0x709a30*/
}



// ==== 0x00709A40  TechnoClass::CompleteFactoryProduction  this=TechnoClass  sig=csp ====
char __thiscall TechnoClass::CompleteFactoryProduction(TechnoClass *this, int a2, int a3)
{
  FactoryClass *temporalUsing; // ecx

  temporalUsing = (FactoryClass *)this->temporalUsing; /*0x709a43*/
  if ( temporalUsing && temporalUsing->production[1] ) /*0x709a4d*/
    FactoryClass::CompleteItem(temporalUsing); /*0x709a54*/
  if ( !(*((unsigned __int8 (__thiscall **)(TechnoClass *))this->RadioClass + 308))(this) /*0x709a6b*/
    && (*((unsigned __int8 (__thiscall **)(TechnoClass *))this->RadioClass + 268))(this) )
  {
    BuildingClass::GetObjectData((BuildingClass *)this); /*0x709a77*/
  }
  return 0; /*0x709a7e*/
}



// ==== 0x00709A90  TechnoClass::DrawPips  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::DrawPips(TechnoClass *this)
{
  double v1; // st4
  double v2; // st5
  double v3; // st6
  double v4; // st7
  int v6; // esi
  int v7; // ecx
  void (__thiscall **vtable0)(TechnoClass *); // eax
  void (__thiscall **v9)(TechnoClass *); // edx
  void (__thiscall **v10)(TechnoClass *); // edx
  int v11; // ebx
  int (__thiscall **v12)(TechnoClass *); // eax
  int v13; // eax
  int v14; // eax
  int result; // eax
  int v16; // edi
  int v17; // ebx
  int (__thiscall **v18)(TechnoClass *); // edx
  void *v19; // ebx
  int v20; // edi
  int v21; // ebx
  int v22; // eax
  int (__thiscall **v23)(TechnoClass *); // edx
  int v24; // eax
  signed int v25; // ebx
  void (__thiscall **v26)(TechnoClass *); // eax
  void *v27; // edi
  int v28; // edi
  int v29; // eax
  _DWORD *DB; // edi
  _DWORD *v31; // ebx
  int v32; // eax
  _DWORD *v33; // ebx
  int v34; // eax
  int v35; // eax
  _DWORD *v36; // ecx
  int v37; // eax
  int v38; // eax
  _DWORD *v39; // ecx
  int (__thiscall **v40)(TechnoClass *); // edx
  signed int v41; // edi
  unsigned int v42; // edi
  unsigned int v43; // ebx
  unsigned int v44; // ecx
  bool v45; // zf
  int v46; // eax
  void *v47; // ebx
  int (__thiscall **v48)(TechnoClass *); // eax
  int v49; // edi
  int v50; // ebx
  CaptureManagerClass *captureManager; // ecx
  int (__thiscall **v52)(TechnoClass *); // eax
  int v53; // eax
  unsigned int v54; // eax
  int (__thiscall **v55)(TechnoClass *); // edx
  int v56; // eax
  unsigned int v57; // eax
  int v58; // ebx
  int v59; // edi
  unsigned int v60; // edx
  int v61; // ebx
  int v62; // eax
  int v63; // ecx
  unsigned int v64; // edi
  int v65; // edi
  unsigned int v66; // edx
  int v67; // ecx
  int v68; // eax
  int (__thiscall **v69)(TechnoClass *); // edx
  unsigned int v70; // ebx
  int v71; // edi
  int v72; // esi
  int v73; // ecx
  int (__thiscall **v74)(TechnoClass *, int *, _DWORD *, int *); // edx
  unsigned int controlGroup; // edi
  int v76; // edi
  int v77; // esi
  int *TextBoundingRect; // eax
  int v79; // ebx
  int v80; // ecx
  int v81; // edx
  int v82; // ebx
  int v83; // eax
  int v84; // edx
  int v85; // esi
  int v86; // esi
  int v87; // ecx
  char *v88; // edx
  int v89; // esi
  int v90; // [esp-10h] [ebp-84h]
  char v91; // [esp+12h] [ebp-62h]
  bool v92; // [esp+13h] [ebp-61h] BYREF
  void *Block[2]; // [esp+14h] [ebp-60h] BYREF
  int v94; // [esp+1Ch] [ebp-58h]
  float v95; // [esp+20h] [ebp-54h]
  unsigned int v96; // [esp+24h] [ebp-50h]
  unsigned int v97; // [esp+28h] [ebp-4Ch]
  int v98[2]; // [esp+2Ch] [ebp-48h] BYREF
  int v99; // [esp+34h] [ebp-40h]
  int v100; // [esp+38h] [ebp-3Ch]
  int v101; // [esp+3Ch] [ebp-38h]
  int v102[2]; // [esp+40h] [ebp-34h] BYREF
  int v103; // [esp+48h] [ebp-2Ch]
  int v104; // [esp+4Ch] [ebp-28h]
  int v105; // [esp+50h] [ebp-24h] BYREF
  int v106; // [esp+54h] [ebp-20h]
  int v107; // [esp+58h] [ebp-1Ch] BYREF
  int v108; // [esp+5Ch] [ebp-18h]
  wchar_t Buffer[10]; // [esp+60h] [ebp-14h] BYREF
  int *v110; // [esp+78h] [ebp+4h]
  int *v111; // [esp+80h] [ebp+Ch]

  v107 = 4; /*0x709a9d*/
  v6 = 2; /*0x709aa5*/
  v7 = v110[1] - 1; /*0x709ab2*/
  v105 = *v110 + 6; /*0x709ab3*/
  vtable0 = (void (__thiscall **)(TechnoClass *))this->RadioClass; /*0x709ab7*/
  v106 = v7; /*0x709aba*/
  vtable0[34](this); /*0x709ac0*/
  v9 = (void (__thiscall **)(TechnoClass *))this->RadioClass; /*0x709acc*/
  v94 = FileSystem_PIPS_SHP; /*0x709acf*/
  v9[34](this); /*0x709ad5*/
  v10 = (void (__thiscall **)(TechnoClass *))this->RadioClass; /*0x709ae0*/
  v101 = FileSystem_PIPS_SHP; /*0x709ae5*/
  v10[34](this); /*0x709ae9*/
  v11 = FileSystem_PIPS2_SHP; /*0x709aef*/
  v12 = (int (__thiscall **)(TechnoClass *))this->RadioClass; /*0x709af5*/
  v98[0] = FileSystem_PIPS2_SHP; /*0x709afa*/
  v13 = v12[11](this); /*0x709afe*/
  v92 = v13 == 6; /*0x709b09*/
  if ( v13 != 6 ) /*0x709b0d*/
  {
    v14 = *v110; /*0x709b0f*/
    v106 = v110[1]; /*0x709b17*/
    v105 = v14 - 5; /*0x709b1b*/
    v6 = 0; /*0x709b24*/
    v107 = 4; /*0x709b26*/
    v94 = v11; /*0x709b2a*/
  }
  if ( (*((int (__thiscall **)(TechnoClass *))this->RadioClass + 11))(this) == 15 ) /*0x709b39*/
    v105 += 11; /*0x709b4a*/
  if ( !v92
    || (result = (*((int (__thiscall **)(TechnoClass *))this->RadioClass + 33))(this), *(_DWORD *)(result + 980) != 2) )
  {
    v95 = *(float *)((*((int (__thiscall **)(TechnoClass *))this->RadioClass + 33))(this) + 3420); /*0x709b81*/
    if ( SLODWORD(v95) > 0 ) /*0x709b85*/
    {
      v16 = 0; /*0x709b96*/
      *(float *)&v97 = COERCE_FLOAT(SpawnManagerClass::CountDockedSpawns(this->spawnManager)); /*0x709b98*/
      v17 = 0; /*0x709ba4*/
      *(float *)&v96 = 0.0; /*0x709ba6*/
      do /*0x709c25*/
      {
        Block[0] = (void *)(v17 + v105); /*0x709bc0*/
        v102[1] = v96 + v106; /*0x709bce*/
        v102[0] = v17 + v105; /*0x709be8*/
        DrawToSurfaceSHP( /*0x709c09*/
          (int)g_DSurface_Hidden_2,
          *(int *)&stru_87F5F0.__pad_58[124],
          v94,
          v16++ < (int)v97,
          v102,
          v111,
          1536,
          0,
          0,
          0,
          1000,
          0,
          0,
          0,
          0,
          0);
        v17 += v107; /*0x709c1b*/
        v96 += v6; /*0x709c21*/
      }
      while ( v16 < SLODWORD(v95) ); /*0x709c25*/
    }
    if ( v92 ) /*0x709c2d*/
    {
      v18 = (int (__thiscall **)(TechnoClass *))this->RadioClass; /*0x709c39*/
      v19 = *(void **)(this->gattlingValue + 5504); /*0x709c3c*/
      Block[0] = v19; /*0x709c44*/
      v95 = COERCE_FLOAT(v18[258](this)); /*0x709c4e*/
      if ( *(_BYTE *)(this->gattlingValue + 5508) ) /*0x709c58*/
      {
        if ( (int)v19 > 0 ) /*0x709c68*/
        {
          v20 = 0; /*0x709c6e*/
          v21 = 0; /*0x709c78*/
          *(float *)&v96 = 0.0; /*0x709c7a*/
          do /*0x709d17*/
          {
            if ( v20 < SLODWORD(v95) && (v22 = *(_DWORD *)(this->q1A2 + 4 * v20)) != 0 ) /*0x709c8f*/
              v97 = *(unsigned int *)(*(_DWORD *)(v22 + 1728) + 3584); /*0x709c9d*/
            else
              v97 = 6; /*0x709ca3*/
            v102[0] = v21 + v105; /*0x709cba*/
            v102[1] = v106 + v96; /*0x709cd6*/
            DrawToSurfaceSHP( /*0x709cfb*/
              (int)g_DSurface_Hidden_2,
              *(int *)&stru_87F5F0.__pad_58[124],
              v94,
              v97,
              v102,
              v111,
              1536,
              0,
              0,
              0,
              1000,
              0,
              0,
              0,
              0,
              0);
            ++v20; /*0x709d0c*/
            v21 += v107; /*0x709d0d*/
            v96 += v6; /*0x709d13*/
          }
          while ( v20 < (int)Block[0] ); /*0x709d17*/
        }
      }
    }
    if ( *(int *)((*((int (__thiscall **)(TechnoClass *))this->RadioClass + 33))(this) + 1504) <= 0 )
    {
      v95 = COERCE_FLOAT((*((int (__thiscall **)(TechnoClass *))this->RadioClass + 174))(this)); /*0x70a08e*/
      v46 = (*((int (__thiscall **)(TechnoClass *))this->RadioClass + 33))(this); /*0x70a097*/
      v47 = (void *)(*(int (__thiscall **)(int))(*(_DWORD *)v46 + 116))(v46); /*0x70a0a4*/
      v48 = (int (__thiscall **)(TechnoClass *))this->RadioClass; /*0x70a0a6*/
      Block[0] = v47; /*0x70a0ab*/
      if ( *(_DWORD *)(v48[33](this) + 980) == 5 ) /*0x70a0bc*/
      {
        v49 = 0; /*0x70a0c2*/
        if ( (int)v47 > 0 ) /*0x70a0c6*/
        {
          v50 = 0; /*0x70a0cc*/
          *(float *)&v97 = 0.0; /*0x70a0ce*/
          do /*0x70a156*/
          {
            v96 = v49 < SLODWORD(v95); /*0x70a0e2*/
            v102[0] = v50 + v105; /*0x70a0f9*/
            v102[1] = v106 + v97; /*0x70a115*/
            DrawToSurfaceSHP( /*0x70a13a*/
              (int)g_DSurface_Hidden_2,
              *(int *)&stru_87F5F0.__pad_58[124],
              v94,
              v96,
              v102,
              v111,
              1536,
              0,
              0,
              0,
              1000,
              0,
              0,
              0,
              0,
              0);
            ++v49; /*0x70a14b*/
            v50 += v107; /*0x70a14c*/
            v97 += v6; /*0x70a152*/
          }
          while ( v49 < (int)Block[0] ); /*0x70a156*/
        }
        captureManager = this->captureManager; /*0x70a15c*/
        v92 = 0; /*0x70a162*/
        if ( captureManager && CaptureManagerClass::IsOverloading((int)captureManager, &v92) ) /*0x70a170*/
        {
          v102[0] = v105 + v107 * v49; /*0x70a197*/
          v102[1] = v106 + v49 * v6; /*0x70a1ac*/
          DrawToSurfaceSHP( /*0x70a1d9*/
            (int)g_DSurface_Hidden_2,
            *(int *)&stru_87F5F0.__pad_58[124],
            v94,
            4 - v92,
            v102,
            v111,
            1536,
            0,
            0,
            0,
            1000,
            0,
            0,
            0,
            0,
            0);
        }
      }
      if ( *(_DWORD *)((*((int (__thiscall **)(TechnoClass *))this->RadioClass + 33))(this) + 980) == 2 ) /*0x70a1f0*/
      {
        FloatArray::Get((int *)&this->tiltSidewaysAngle, 0); /*0x70a200*/
        *(float *)&v96 = v1; /*0x70a205*/
        FloatArray::Get((int *)&this->tiltSidewaysAngle, 2); /*0x70a20d*/
        *(float *)&v97 = v2; /*0x70a212*/
        FloatArray::Get((int *)&this->tiltSidewaysAngle, 3); /*0x70a21a*/
        *(float *)v98 = v3; /*0x70a21f*/
        FloatArray::Get((int *)&this->tiltSidewaysAngle, 1); /*0x70a227*/
        v95 = v4; /*0x70a22c*/
        v52 = (int (__thiscall **)(TechnoClass *))this->RadioClass; /*0x70a234*/
        *(double *)v102 = (double)(int)Block[0]; /*0x70a239*/
        *(double *)v98 = *(float *)v98 + *(float *)&v97 + *(float *)&v96; /*0x70a249*/
        v53 = v52[33](this); /*0x70a24d*/
        LOWORD(v54) = Math::RoundToInt(*(double *)v98 / (double)*(int *)(v53 + 2048) * *(double *)v102 + 0.5); /*0x70a267*/
        v55 = (int (__thiscall **)(TechnoClass *))this->RadioClass; /*0x70a270*/
        *(double *)v98 = v95; /*0x70a275*/
        v96 = v54; /*0x70a279*/
        v56 = v55[33](this); /*0x70a27d*/
        LOWORD(v57) = Math::RoundToInt(*(double *)v98 / (double)*(int *)(v56 + 2048) * *(double *)v102 + 0.5); /*0x70a297*/
        v97 = v57; /*0x70a29c*/
        if ( (int)Block[0] > 0 ) /*0x70a2a6*/
        {
          v58 = 0; /*0x70a2ac*/
          v59 = 0; /*0x70a2ae*/
          v95 = *(float *)Block; /*0x70a2b0*/
          do /*0x70a33a*/
          {
            v60 = 0; /*0x70a2b8*/
            if ( (int)v97 <= 0 ) /*0x70a2bc*/
            {
              if ( (int)v96 > 0 ) /*0x70a2d0*/
              {
                v60 = 2; /*0x70a2d3*/
                --v96; /*0x70a2d8*/
              }
            }
            else
            {
              v60 = 5; /*0x70a2bf*/
              --v97; /*0x70a2c4*/
            }
            v102[0] = v59 + v105; /*0x70a2e7*/
            v102[1] = v58 + v106; /*0x70a303*/
            DrawToSurfaceSHP( /*0x70a324*/
              (int)g_DSurface_Hidden_2,
              *(int *)&stru_87F5F0.__pad_58[124],
              v94,
              v60,
              v102,
              v111,
              1536,
              0,
              0,
              0,
              1000,
              0,
              0,
              0,
              0,
              0);
            v59 += v107; /*0x70a331*/
            v58 += v6; /*0x70a333*/
            --LODWORD(v95); /*0x70a336*/
          }
          while ( v95 != 0.0 ); /*0x70a33a*/
        }
      }
      else if ( *(_DWORD *)((*((int (__usercall **)@<eax>(TechnoClass *@<ecx>))this->RadioClass + 33))(this) + 980) == 1 ) /*0x70a357*/
      {
        v102[0] = *(_DWORD *)((*((int (__thiscall **)(TechnoClass *))this->RadioClass + 33))(this) + 996); /*0x70a370*/
        v61 = v102[0]; /*0x70a368*/
        if ( v102[0] ) /*0x70a374*/
        {
          v65 = 0; /*0x70a425*/
          if ( v102[0] > 0 ) /*0x70a42c*/
          {
            v66 = 0; /*0x70a433*/
            LODWORD(v95) = (int)Block[0] / v102[0] - 1; /*0x70a435*/
            *(float *)&v96 = 0.0; /*0x70a439*/
            do /*0x70a4e6*/
            {
              v67 = LODWORD(v95); /*0x70a43d*/
              v97 = 14; /*0x70a441*/
              if ( v95 >= 0.0 ) /*0x70a44b*/
              {
                v94 = -v61; /*0x70a451*/
                v68 = v65 + v61 * LODWORD(v95); /*0x70a45a*/
                while ( v68 >= this->ammo ) /*0x70a462*/
                {
                  --v67; /*0x70a468*/
                  v68 += v94; /*0x70a469*/
                  if ( v67 < 0 ) /*0x70a46d*/
                    goto LABEL_87; /*0x70a46d*/
                }
                v97 = v67 + 15; /*0x70a474*/
              }
LABEL_87:
              Block[0] = (void *)(v105 + v66); /*0x70a478*/
              Block[1] = (void *)(v106 + v65 * v6 - 3); /*0x70a495*/
              DrawToSurfaceSHP( /*0x70a4cc*/
                (int)g_DSurface_Hidden_2,
                *(int *)&stru_87F5F0.__pad_58[124],
                v98[0],
                v97,
                (int *)Block,
                v111,
                1536,
                0,
                0,
                0,
                1000,
                0,
                0,
                0,
                0,
                0);
              v61 = v102[0]; /*0x70a4d9*/
              ++v65; /*0x70a4dd*/
              v66 = v107 + v96; /*0x70a4de*/
              v96 += v107; /*0x70a4e2*/
            }
            while ( v65 < v102[0] ); /*0x70a4e6*/
          }
        }
        else
        {
          v62 = LODWORD(v95); /*0x70a37e*/
          v63 = 0; /*0x70a382*/
          *(float *)&v97 = 0.0; /*0x70a386*/
          if ( (int)Block[0] > 0 ) /*0x70a38a*/
          {
            v64 = 0; /*0x70a390*/
            *(float *)&v96 = 0.0; /*0x70a392*/
            do /*0x70a416*/
            {
              if ( v62 > 0 ) /*0x70a398*/
              {
                LODWORD(v95) = v62 - 1; /*0x70a39f*/
                v102[1] = v106 + v63 * v6 - 3; /*0x70a3c1*/
                v102[0] = v105 + v64; /*0x70a3ec*/
                DrawToSurfaceSHP( /*0x70a3f0*/
                  (int)g_DSurface_Hidden_2,
                  *(int *)&stru_87F5F0.__pad_58[124],
                  v98[0],
                  0xDu,
                  v102,
                  v111,
                  1536,
                  0,
                  0,
                  0,
                  1000,
                  0,
                  0,
                  0,
                  0,
                  0);
                v63 = v97; /*0x70a3f5*/
                v62 = LODWORD(v95); /*0x70a3f9*/
                v64 = v96; /*0x70a3fd*/
              }
              ++v63; /*0x70a409*/
              v64 += v107; /*0x70a40a*/
              v97 = v63; /*0x70a40e*/
              v96 = v64; /*0x70a412*/
            }
            while ( v63 < (int)Block[0] ); /*0x70a416*/
          }
        }
      }
    }
    else
    {
      v23 = (int (__thiscall **)(TechnoClass *))this->RadioClass; /*0x709d38*/
      v102[0] = 0; /*0x709d3b*/
      v102[1] = 0; /*0x709d3f*/
      v24 = v23[34](this); /*0x709d45*/
      v25 = (*(int (__thiscall **)(int))(*(_DWORD *)v24 + 116))(v24); /*0x709d52*/
      v26 = (void (__thiscall **)(TechnoClass *))this->RadioClass; /*0x709d54*/
      v97 = v25; /*0x709d59*/
      v26[33](this); /*0x709d5d*/
      v27 = (void *)__2_YAPAXI_Z(4 * v25); /*0x709d73*/
      Block[0] = v27; /*0x709d77*/
      if ( v25 > 0 ) /*0x709d7b*/
        memset(v27, 0, 4 * v25); /*0x709d81*/
      v96 = this->passengers[0]; /*0x709d91*/
      v28 = HouseClass::SumPowerDrain((HouseClass *)this->passengers) - 1; /*0x709d9c*/
      if ( this
        && (*((int (__thiscall **)(TechnoClass *))this->RadioClass + 11))(this) == 6
        && (v29 = (*((int (__thiscall **)(TechnoClass *))this->RadioClass + 11))(this),
            InfantryClass::updateDeployAnimation(v29 == 6 ? (InfantryClass *)this : 0)) )
      {
        DB = (_DWORD *)CCINIClass::GetDB((CCINIClass *)this->passengers); /*0x709ddb*/
        v95 = 0.0; /*0x709de3*/
        if ( (int)v96 > 0 ) /*0x709deb*/
        {
          v31 = Block[0]; /*0x709df1*/
          do /*0x709e41*/
          {
            if ( !DB ) /*0x709df7*/
              break; /*0x709df7*/
            if ( (*(int (__thiscall **)(_DWORD *))(*DB + 44))(DB) == 15 ) /*0x709e07*/
            {
              *v31 = *(_DWORD *)(DB[432] + 3580); /*0x709e15*/
            }
            else
            {
              v32 = -((*(int (__thiscall **)(_DWORD *))(*DB + 44))(DB) != 1); /*0x709e23*/
              LOBYTE(v32) = v32 & 0xFD; /*0x709e25*/
              *v31 = v32 + 4; /*0x709e2a*/
            }
            DB = (_DWORD *)DB[12]; /*0x709e34*/
            ++v31; /*0x709e38*/
            ++LODWORD(v95); /*0x709e3d*/
          }
          while ( SLODWORD(v95) < (int)v96 ); /*0x709e41*/
        }
      }
      else
      {
        if ( v28 >= (int)v97 ) /*0x709e4c*/
        {
          __3_YAXPAX_Z(Block[0]); /*0x709e53*/
          return result; /*0x709e62*/
        }
        v33 = (_DWORD *)CCINIClass::GetDB((CCINIClass *)this->passengers); /*0x709e6c*/
        v95 = 0.0; /*0x709e74*/
        if ( (int)v96 > 0 ) /*0x709e7c*/
        {
          do /*0x709f4a*/
          {
            if ( !v33 ) /*0x709e84*/
              break; /*0x709e84*/
            if ( (*(int (__thiscall **)(_DWORD *))(*v33 + 44))(v33) == 15 ) /*0x709e94*/
            {
              v34 = (*(int (__thiscall **)(_DWORD *))(*v33 + 132))(v33); /*0x709e9a*/
              LOWORD(v35) = Math::RoundToInt(*(double *)(v34 + 896) - 1.0); /*0x709eac*/
              if ( v35 > 0 ) /*0x709eb3*/
              {
                v36 = (char *)Block[0] + 4 * v28; /*0x709eb9*/
                v28 -= v35; /*0x709ebc*/
                do /*0x709ec8*/
                {
                  *v36-- = 3; /*0x709ebe*/
                  --v35; /*0x709ec7*/
                }
                while ( v35 ); /*0x709ec8*/
              }
              *((_DWORD *)Block[0] + v28) = *(_DWORD *)(v33[432] + 3580); /*0x709eda*/
            }
            else if ( (*(int (__thiscall **)(_DWORD *))(*v33 + 44))(v33) == 1 ) /*0x709ee9*/
            {
              v37 = (*(int (__thiscall **)(_DWORD *))(*v33 + 132))(v33); /*0x709eef*/
              LOWORD(v38) = Math::RoundToInt(*(double *)(v37 + 896) - 1.0); /*0x709f01*/
              if ( v38 > 0 ) /*0x709f08*/
              {
                v39 = (char *)Block[0] + 4 * v28; /*0x709f0e*/
                v28 -= v38; /*0x709f11*/
                do /*0x709f1d*/
                {
                  *v39-- = 3; /*0x709f13*/
                  --v38; /*0x709f1c*/
                }
                while ( v38 ); /*0x709f1d*/
              }
              *((_DWORD *)Block[0] + v28) = 5; /*0x709f23*/
            }
            else
            {
              *((_DWORD *)Block[0] + v28) = 1; /*0x709f30*/
            }
            v33 = (_DWORD *)v33[12]; /*0x709f3f*/
            --v28; /*0x709f42*/
            ++LODWORD(v95); /*0x709f46*/
          }
          while ( SLODWORD(v95) < (int)v96 ); /*0x709f4a*/
        }
      }
      v40 = (int (__thiscall **)(TechnoClass *))this->RadioClass; /*0x709f50*/
      v41 = 0; /*0x709f53*/
      *(float *)&v96 = 0.0; /*0x709f57*/
      if ( *(_BYTE *)(v40[33](this) + 2053) ) /*0x709f61*/
      {
        DrawToSurfaceSHP( /*0x709fa6*/
          (int)g_DSurface_Hidden_2,
          *(int *)&stru_87F5F0.__pad_58[124],
          v94,
          *(_DWORD *)Block[0],
          &v105,
          v111,
          1536,
          0,
          0,
          0,
          1000,
          0,
          0,
          0,
          0,
          0);
        v41 = 1; /*0x709faf*/
        v96 = 1; /*0x709fb7*/
        v102[1] = 2 * v6; /*0x709fbe*/
        v102[0] = 2 * v107; /*0x709fc2*/
      }
      if ( v41 < (int)v97 ) /*0x709fca*/
      {
        v42 = v107 * v96; /*0x709fdc*/
        v43 = v96 * v6; /*0x709fe1*/
        v44 = v97 - v96; /*0x709feb*/
        v96 = (unsigned int)Block[0] + 4 * v96; /*0x709fed*/
        v97 = v44; /*0x709ff1*/
        do /*0x70a06f*/
        {
          v98[0] = v42 + v102[0] + v105; /*0x70a009*/
          v98[1] = v43 + v106 + v102[1]; /*0x70a025*/
          DrawToSurfaceSHP( /*0x70a04e*/
            (int)g_DSurface_Hidden_2,
            *(int *)&stru_87F5F0.__pad_58[124],
            v94,
            *(_DWORD *)v96,
            v98,
            v111,
            1536,
            0,
            0,
            0,
            1000,
            0,
            0,
            0,
            0,
            0);
          v42 += v107; /*0x70a05b*/
          v43 += v6; /*0x70a061*/
          v45 = v97 == 1; /*0x70a066*/
          v96 += 4; /*0x70a067*/
          --v97; /*0x70a06b*/
        }
        while ( !v45 ); /*0x70a06f*/
      }
      __3_YAXPAX_Z(Block[0]); /*0x70a076*/
    }
    v69 = (int (__thiscall **)(TechnoClass *))this->RadioClass; /*0x70a4ec*/
    v91 = 0; /*0x70a4f1*/
    v92 = 0; /*0x70a4f6*/
    v70 = 13; /*0x70a4fb*/
    v71 = 0; /*0x70a500*/
    v72 = 0; /*0x70a502*/
    if ( (v69[11](this) == 15 /*0x70a534*/
       || (*((int (__thiscall **)(TechnoClass *))this->RadioClass + 11))(this) == 1
       && *(_BYTE *)((*((int (__thiscall **)(TechnoClass *))this->RadioClass + 33))(this) + 3479))
      && IsTechInfiltrated((TechnoClass *)this->owner) )
    {
      v91 = 1; /*0x70a54c*/
      if ( *(_DWORD *)&stru_A8EB00.?[416] % *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 48) <= 5 /*0x70a56c*/
        && this->? < *(_DWORD *)((*((int (__thiscall **)(TechnoClass *))this->RadioClass + 33))(this) + 160) )
      {
        v92 = 1; /*0x70a56e*/
      }
      v70 = 13; /*0x70a573*/
    }
    if ( (*((int (__thiscall **)(TechnoClass *))this->RadioClass + 11))(this) == 1 /*0x70a5a0*/
      && !*(_BYTE *)((*((int (__thiscall **)(TechnoClass *))this->RadioClass + 33))(this) + 3479)
      && IsProductionInfiltrated((TechnoClass *)this->owner) )
    {
      v91 = 1; /*0x70a5b8*/
      if ( *(_DWORD *)&stru_A8EB00.?[416] % *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 56) <= 5 /*0x70a5d8*/
        && this->? < *(_DWORD *)((*((int (__thiscall **)(TechnoClass *))this->RadioClass + 33))(this) + 160) )
      {
        v92 = 1; /*0x70a5da*/
      }
      v70 = 20; /*0x70a5df*/
    }
    if ( (*((int (__thiscall **)(TechnoClass *))this->RadioClass + 11))(this) == 1 ) /*0x70a5ef*/
    {
      v71 = 38; /*0x70a5f1*/
      v72 = -32; /*0x70a5f6*/
    }
    else if ( (*((int (__thiscall **)(TechnoClass *))this->RadioClass + 11))(this) == 15 ) /*0x70a608*/
    {
      v71 = 19; /*0x70a60a*/
      v72 = -35; /*0x70a60f*/
    }
    if ( v91 ) /*0x70a61a*/
    {
      v107 = v105 + v71; /*0x70a651*/
      v108 = v72 + v106; /*0x70a658*/
      if ( v92 ) /*0x70a626*/
        DrawToSurfaceSHP( /*0x70a667*/
          (int)g_DSurface_Hidden_2,
          *(int *)&stru_87F5F0.__pad_58[124],
          v101,
          v70,
          &v107,
          v111,
          1537,
          0,
          0,
          0,
          1000,
          0,
          0,
          0,
          0,
          0);
      else
        DrawToSurfaceSHP( /*0x70a6bb*/
          (int)g_DSurface_Hidden_2,
          *(int *)&stru_87F5F0.__pad_58[124],
          v101,
          v70,
          &v107,
          v111,
          1536,
          0,
          0,
          0,
          1000,
          0,
          0,
          0,
          0,
          0);
    }
    result = (*((int (__thiscall **)(TechnoClass *))this->RadioClass + 11))(this); /*0x70a6c5*/
    if ( result != 6 ) /*0x70a6cf*/
    {
      v73 = v110[1]; /*0x70a6d3*/
      v74 = (int (__thiscall **)(TechnoClass *, int *, _DWORD *, int *))this->RadioClass; /*0x70a6d6*/
      v107 = *v110 - 10; /*0x70a6df*/
      v108 = v73 + 10; /*0x70a6ea*/
      result = v74[278](this, &v107, v110, v111); /*0x70a6f7*/
    }
    controlGroup = this->controlGroup; /*0x70a6fd*/
    if ( controlGroup <= 9 )
    {
      v76 = controlGroup + 1; /*0x70a714*/
      if ( v76 == 10 ) /*0x70a718*/
        v76 = 0; /*0x70a71a*/
      v77 = (*((int (__thiscall **)(TechnoClass *))this->RadioClass + 11))(this) != 15 ? -33 : -36;
      swprintf(Buffer, (const size_t)g_Str_Fmt_PctD, v76 >= 10 ? 0 : (const wchar_t *const)v76);
      v90 = v110[1] + v77 - 3; /*0x70a764*/
      v107 = *v110 - 4; /*0x70a76e*/
      v108 = v90; /*0x70a772*/
      TextBoundingRect = GetTextBoundingRect(v102, (int)Buffer, v107, v90, 73, 2, -2); /*0x70a776*/
      v98[0] = *TextBoundingRect; /*0x70a784*/
      v79 = *v111; /*0x70a78d*/
      v98[1] = TextBoundingRect[1]; /*0x70a78f*/
      v80 = TextBoundingRect[2]; /*0x70a793*/
      v99 = v80; /*0x70a796*/
      v81 = TextBoundingRect[3]; /*0x70a79a*/
      v102[0] = v79; /*0x70a79d*/
      v82 = v111[1]; /*0x70a7a1*/
      v100 = v81; /*0x70a7a4*/
      v102[1] = v82; /*0x70a7a8*/
      v83 = 0; /*0x70a7ac*/
      v84 = 0; /*0x70a7b1*/
      v85 = v111[3]; /*0x70a7b5*/
      v103 = v111[2]; /*0x70a7b8*/
      v104 = v85; /*0x70a7bc*/
      if ( v80 <= 0 || v100 <= 0 || v111[2] <= 0 || v111[3] <= 0 ) /*0x70a7e9*/
        goto LABEL_134; /*0x70a7e9*/
      if ( v102[0] < v98[0] ) /*0x70a7f9*/
      {
        v103 += v102[0] - v98[0]; /*0x70a807*/
        v102[0] = v98[0]; /*0x70a80b*/
      }
      if ( v103 < 1 ) /*0x70a814*/
        goto LABEL_134; /*0x70a814*/
      if ( v102[1] < v98[1] ) /*0x70a824*/
      {
        v104 += v102[1] - v98[1]; /*0x70a832*/
        v102[1] = v98[1]; /*0x70a836*/
      }
      if ( v104 < 1 ) /*0x70a83f*/
        goto LABEL_134; /*0x70a83f*/
      if ( v102[0] + v103 > v80 + v98[0] ) /*0x70a853*/
        v103 = v98[0] + v80 - v102[0]; /*0x70a861*/
      if ( v103 < 1 || (v104 + v102[1] <= v98[1] + v100 ? (v86 = v104) : (v86 = v100 + v98[1] - v102[1]), v86 < 1) )
      {
LABEL_134:
        v87 = 0; /*0x70a8ab*/
        v86 = 0; /*0x70a8ad*/
      }
      else
      {
        v83 = v102[0]; /*0x70a89d*/
        v87 = v102[1]; /*0x70a8a1*/
        v84 = v103; /*0x70a8a5*/
      }
      v98[0] = v83; /*0x70a8af*/
      v98[1] = v87; /*0x70a8b5*/
      v99 = v84 + 1; /*0x70a8b9*/
      v88 = (char *)&this->owner->base[4] + 1; /*0x70a8c3*/
      v100 = v86; /*0x70a8c9*/
      v98[0] = v83 - 1; /*0x70a8cd*/
      LOWORD(v102[0]) = *(_WORD *)v88; /*0x70a8d6*/
      BYTE2(v102[0]) = v88[2]; /*0x70a8de*/
      v89 = (LOBYTE(v102[0]) >> g_BitShift_Green_0 << g_BitShift_Red) /*0x70a939*/
          | (BYTE1(v102[0]) >> g_BitMask_Blue << g_BitMask_Green)
          | (BYTE2(v102[0]) >> g_BitMask_Red << g_BitShift_Blue);
      (*(void (__thiscall **)(AudioStream *, int *, _DWORD))(*(_DWORD *)g_DSurface_Hidden_2->__pad_0 + 20))( /*0x70a940*/
        g_DSurface_Hidden_2,
        v98,
        0);
      (*(void (__thiscall **)(AudioStream *, int *, int))(*(_DWORD *)g_DSurface_Hidden_2->__pad_0 + 88))( /*0x70a951*/
        g_DSurface_Hidden_2,
        v98,
        v89);
      return (int)globalHelper_0A66D0(v102, (int)Buffer, (int)g_DSurface_Hidden_2, v111, (int)&v107, v89, 0, 73, -1, 1); /*0x70a97b*/
    }
  }
  return result; /*0x709e5b*/
}


// ==== 0x0070A990  TechnoClass::DrawVeterancy  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::DrawVeterancy(TechnoClass *this)
{
  int v2; // ebp
  unsigned int v3; // ebx
  int result; // eax
  int (__thiscall **vtable0)(TechnoClass *); // edx
  int v6; // eax
  int v7; // [esp+10h] [ebp-8h] BYREF
  int v8; // [esp+14h] [ebp-4h]
  _DWORD *v9; // [esp+1Ch] [ebp+4h]
  int *v10; // [esp+20h] [ebp+8h]

  (*((void (__thiscall **)(TechnoClass *))this->RadioClass + 34))(this); /*0x70a99b*/
  v2 = FileSystem_PIPS_SHP; /*0x70a9a1*/
  v3 = -1; /*0x70a9af*/
  if ( (unsigned __int8)Audio::IsMediumVolume(this->veterancy) ) /*0x70a9b2*/
    v3 = 14; /*0x70a9bb*/
  if ( (unsigned __int8)Audio::IsLoud(this->veterancy) ) /*0x70a9c2*/
    v3 = 15; /*0x70a9cb*/
  result = VeinholeClass::GetState((float *)this->veterancy); /*0x70a9d2*/
  if ( (_BYTE)result ) /*0x70a9d9*/
  {
    v3 = 19; /*0x70a9db*/
  }
  else if ( v3 == -1 ) /*0x70a9e5*/
  {
    return result; /*0x70a9e5*/
  }
  vtable0 = (int (__thiscall **)(TechnoClass *))this->RadioClass; /*0x70a9eb*/
  v6 = *v9 + 5; /*0x70a9f5*/
  v8 = v9[1] + 2; /*0x70a9f8*/
  v7 = v6; /*0x70a9fe*/
  if ( vtable0[11](this) != 15 ) /*0x70aa08*/
  {
    v7 += 5; /*0x70aa18*/
    v8 += 4; /*0x70aa1c*/
  }
  return DrawToSurfaceSHP( /*0x70aa54*/
           (int)g_DSurface_Hidden_2,
           *(int *)&stru_87F5F0.__pad_58[124],
           v2,
           v3,
           &v7,
           v10,
           3584,
           0,
           -2,
           0,
           1000,
           0,
           0,
           0,
           0,
           0);
}



// ==== 0x0070AA60  TechnoClass::DrawPowerIndicator  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::DrawPowerIndicator(TechnoClass *this)
{
  int result; // eax
  unsigned __int16 *v3; // esi
  int v4; // eax
  wchar_t *StringCSF; // eax
  int *TextBoundingRect; // eax
  int *v7; // eax
  unsigned __int16 *v8; // edx
  unsigned __int8 *v9; // eax
  int v10; // esi
  unsigned __int16 *v11; // eax
  int (__thiscall **vtable0)(TechnoClass *); // edx
  int *v13; // eax
  int *v14; // eax
  unsigned __int8 *owner; // edi
  int v16; // esi
  const wchar_t *v17; // [esp+Ch] [ebp-144h]
  int v18; // [esp+20h] [ebp-130h] BYREF
  int v19; // [esp+24h] [ebp-12Ch] BYREF
  int v20; // [esp+28h] [ebp-128h]
  int v21; // [esp+2Ch] [ebp-124h]
  unsigned __int16 *p_arrayIndex; // [esp+30h] [ebp-120h] BYREF
  _DWORD v23[3]; // [esp+34h] [ebp-11Ch] BYREF
  _DWORD v24[4]; // [esp+40h] [ebp-110h] BYREF
  unsigned __int16 v25[2]; // [esp+50h] [ebp-100h] BYREF
  wchar_t Buffer[126]; // [esp+54h] [ebp-FCh] BYREF
  int *v27; // [esp+158h] [ebp+8h]
  int *v28; // [esp+15Ch] [ebp+Ch]

  result = (*((int (__thiscall **)(TechnoClass *))this->RadioClass + 11))(this); /*0x70aa6e*/
  if ( result != 6 || (result = *(_DWORD *)(this->gattlingValue + 3808), result <= 0) ) /*0x70aa96*/
  {
LABEL_5:
    LOBYTE(result) = this->isPrimaryFactory; /*0x70abea*/
    if ( !(_BYTE)result ) /*0x70abf2*/
      return result; /*0x70abf2*/
    goto LABEL_6; /*0x70abf2*/
  }
  if ( !this->isPrimaryFactory ) /*0x70aa9c*/
  {
    p_arrayIndex = (unsigned __int16 *)&this->owner->arrayIndex; /*0x70aabd*/
    v3 = p_arrayIndex; /*0x70aab6*/
    v4 = (*(int (__stdcall **)(unsigned __int16 *))(*(_DWORD *)v3 + 36))(v3); /*0x70aac3*/
    v17 = (const wchar_t *)(*(int (__stdcall **)(unsigned __int16 *, int))(*(_DWORD *)v3 + 32))(v3, v4); /*0x70aacd*/
    StringCSF = GetStringCSF((wchar_t *)&g_INI_Key_TRUCKA.?, 0, (const char *)&g_INI_Key_TRUCKA.?[1], 15483); /*0x70aadf*/
    swprintf(Buffer, (const size_t)StringCSF, v17); /*0x70aaea*/
    TextBoundingRect = GetTextBoundingRect(v23, (int)Buffer, *v27, v27[1], 329, 4, 2); /*0x70ab0a*/
    v19 = *TextBoundingRect; /*0x70ab13*/
    v20 = TextBoundingRect[1]; /*0x70ab1d*/
    v21 = TextBoundingRect[2]; /*0x70ab24*/
    p_arrayIndex = (unsigned __int16 *)TextBoundingRect[3]; /*0x70ab2f*/
    v7 = ClipRectIntersection(v23, &v19, v28, 0, 0); /*0x70ab37*/
    v19 = *v7; /*0x70ab3e*/
    v20 = v7[1]; /*0x70ab45*/
    v21 = v7[2]; /*0x70ab4c*/
    v8 = (unsigned __int16 *)v7[3]; /*0x70ab52*/
    v9 = (unsigned __int8 *)&this->owner->base[4] + 1; /*0x70ab5b*/
    p_arrayIndex = v8; /*0x70ab60*/
    v10 = (*v9 >> g_BitShift_Green_0 << g_BitShift_Red) /*0x70abae*/
        | (v9[1] >> g_BitMask_Blue << g_BitMask_Green)
        | (v9[2] >> g_BitMask_Red << g_BitShift_Blue);
    (*(void (__thiscall **)(AudioStream *, int *))(*(_DWORD *)g_DSurface_Hidden_2->__pad_0 + 20))( /*0x70abb7*/
      g_DSurface_Hidden_2,
      &v19);
    (*(void (__thiscall **)(AudioStream *, int *, int))(*(_DWORD *)g_DSurface_Hidden_2->__pad_0 + 88))( /*0x70abc8*/
      g_DSurface_Hidden_2,
      &v18,
      v10);
    result = (int)RenderTextLabel( /*0x70abe5*/
                    (int *)&p_arrayIndex,
                    v25,
                    (int *)g_DSurface_Hidden_2->__pad_0,
                    v28,
                    (int)v27,
                    v10,
                    0,
                    329,
                    1);
    goto LABEL_5; /*0x70abe5*/
  }
LABEL_6:
  v11 = GetStringCSF((wchar_t *)&g_INI_Key_TRUCKA.?[1], 0, (const char *)&g_INI_Key_TRUCKA.?[1], 15502); /*0x70abf8*/
  vtable0 = (int (__thiscall **)(TechnoClass *))this->RadioClass; /*0x70ac0e*/
  p_arrayIndex = v11; /*0x70ac12*/
  if ( vtable0[11](this) == 6 && BuildingTypeClass::GetFoundationWidth(*((BuildingTypeClass **)this + 328)) == 1 ) /*0x70ac2c*/
    p_arrayIndex = GetStringCSF((wchar_t *)&g_INI_Key_TRUCKA.?[1], 0, (const char *)&g_INI_Key_TRUCKA.?[1], 15504); /*0x70ac44*/
  v13 = GetTextBoundingRect(v24, (int)p_arrayIndex, *v27, v27[1], 329, 4, 2); /*0x70ac60*/
  v18 = *v13; /*0x70ac69*/
  v19 = v13[1]; /*0x70ac73*/
  v20 = v13[2]; /*0x70ac7e*/
  v21 = v13[3]; /*0x70ac89*/
  v14 = ClipRectIntersection(v24, &v18, v28, 0, 0); /*0x70ac8d*/
  owner = (unsigned __int8 *)this->owner; /*0x70ac94*/
  v18 = *v14; /*0x70ac9a*/
  v19 = v14[1]; /*0x70aca9*/
  v20 = v14[2]; /*0x70acb0*/
  v21 = v14[3]; /*0x70acbf*/
  v16 = (owner[22265] >> g_BitShift_Green_0 << g_BitShift_Red) /*0x70ad07*/
      | (owner[22266] >> g_BitMask_Blue << g_BitMask_Green)
      | (owner[22267] >> g_BitMask_Red << g_BitShift_Blue);
  (*(void (__stdcall **)(int *, _DWORD))(*(_DWORD *)g_DSurface_Hidden_2->__pad_0 + 20))(&v18, 0); /*0x70ad0e*/
  (*(void (__thiscall **)(AudioStream *, int *, int))(*(_DWORD *)g_DSurface_Hidden_2->__pad_0 + 88))( /*0x70ad1f*/
    g_DSurface_Hidden_2,
    &v18,
    v16);
  return (int)RenderTextLabel( /*0x70ad42*/
                (int *)&p_arrayIndex,
                p_arrayIndex,
                (int *)g_DSurface_Hidden_2->__pad_0,
                v28,
                (int)v27,
                v16,
                0,
                329,
                1);
}



// ==== 0x0070AD50  TechnoClass::GetCellCoordsV2  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::GetCellCoordsV2(TechnoClass *this)
{
  _DWORD *v1; // eax
  _BYTE v3[12]; // [esp+0h] [ebp-Ch] BYREF
  _DWORD *v4; // [esp+10h] [ebp+4h]
  int v5; // [esp+14h] [ebp+8h]
  int v6; // [esp+14h] [ebp+8h]

  v1 = (_DWORD *)(*((int (__thiscall **)(TechnoClass *, _BYTE *, int))this->RadioClass + 42))(this, v3, v5); /*0x70ad5f*/
  LOWORD(v6) = *v1 / 256; /*0x70ad75*/
  HIWORD(v6) = v1[1] / 256; /*0x70ad89*/
  *v4 = v6; /*0x70ad96*/
  return (int)v4; /*0x70ad98*/
}



// ==== 0x0070ADA0  TechnoClass::Vt46Thunk  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::Vt46Thunk(TechnoClass *this)
{
  int v2; // eax

  v2 = (*((int (__thiscall **)(TechnoClass *))this->RadioClass + 33))(this); /*0x70ada5*/
  return (*(int (__thiscall **)(int, HouseClass *, _DWORD))(*(_DWORD *)v2 + 184))(v2, this->owner, 0); /*0x70adbe*/
}



// ==== 0x0070ADC0  TechnoClass::RevealAreaSmall  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::RevealAreaSmall(TechnoClass *this)
{
  int result; // eax
  int v3; // eax
  int v4; // eax
  int v5; // eax
  int v6; // ebp
  int v7; // eax
  int v8; // edx
  int v9; // ecx
  int v10; // [esp+8h] [ebp-10h]
  int v11; // [esp+Ch] [ebp-Ch] BYREF
  int v12; // [esp+10h] [ebp-8h]
  int v13; // [esp+14h] [ebp-4h]
  char v14; // [esp+1Ch] [ebp+4h]
  char v15; // [esp+20h] [ebp+8h]

  LOBYTE(result) = this->isInPlayfield; /*0x70adc7*/
  if ( (_BYTE)result ) /*0x70adcf*/
  {
    if ( !*(_BYTE *)(this->owner->relatedTagsCapacity + 422) || (result = *(_DWORD *)&dword_A8B238) == 0 ) /*0x70adef*/
    {
      v11 = this->?[0]; /*0x70adff*/
      v12 = this->?[1]; /*0x70ae06*/
      v3 = 10 * (this->?[2] / *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 5820)); /*0x70ae24*/
      if ( v3 > this->sightRangeBonus ) /*0x70ae28*/
        v14 = 0; /*0x70ae2a*/
      this->sightRangeBonus = v3; /*0x70ae2f*/
      v4 = (*((int (__thiscall **)(TechnoClass *))this->RadioClass + 33))(this); /*0x70ae3b*/
      LOWORD(v5) = Math::RoundToInt((double)*(int *)(v4 + 1512) * ((double)this->sightRangeBonus * 0.01 + 1.0)); /*0x70ae64*/
      v10 = v5; /*0x70ae6f*/
      if ( (unsigned __int8)Audio::IsMediumVolume(this->veterancy) || (unsigned __int8)Audio::IsLoud(this->veterancy) ) /*0x70ae80*/
      {
        if ( (v6 = (*((int (__thiscall **)(TechnoClass *))this->RadioClass + 33))(this), /*0x70aebf*/
              (unsigned __int8)Audio::IsMediumVolume(this->veterancy))
          && *(_BYTE *)(v6 + 673)
          || (unsigned __int8)Audio::IsLoud(this->veterancy) && (*(_BYTE *)(v6 + 673) || *(_BYTE *)(v6 + 691)) )
        {
          if ( *(double *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 1664) != 0.0 ) /*0x70aee0*/
          {
            LOWORD(v7) = Math::RoundToInt((double)v10 * *(double *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 1664)); /*0x70aeec*/
            v10 = v7; /*0x70aef1*/
          }
        }
      }
      result = v10; /*0x70aef5*/
      if ( v10 ) /*0x70aefd*/
      {
        v8 = this->?[1]; /*0x70af01*/
        v11 = this->?[0]; /*0x70af04*/
        v9 = this->?[2]; /*0x70af08*/
        v12 = v8; /*0x70af0b*/
        v13 = v9; /*0x70af17*/
        return MapClass::RevealArea0((MapClass *)&stru_87F5F0.__pad_58[416], &v11, v10, this->owner, v14, v15, 0, 1, 1); /*0x70af35*/
      }
    }
  }
  return result; /*0x70af3a*/
}



// ==== 0x0070AF50  TechnoClass::ScanForEnemies  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::ScanForEnemies(TechnoClass *this)
{
  int result; // eax
  int *location; // edi
  int v4; // eax
  int v5; // eax
  int v6; // eax
  int v7; // ebx
  int v8; // eax
  int v9; // eax
  int v10; // ecx
  int v11; // edx
  int v12; // edx
  int v13; // ecx
  int v14; // [esp+Ch] [ebp-14h]
  int v15; // [esp+10h] [ebp-10h]
  int v16; // [esp+14h] [ebp-Ch] BYREF
  int v17; // [esp+18h] [ebp-8h]
  int v18; // [esp+1Ch] [ebp-4h]
  char v19; // [esp+24h] [ebp+4h]
  int v20; // [esp+28h] [ebp+8h]
  char v21; // [esp+2Ch] [ebp+Ch]
  void *v22; // [esp+30h] [ebp+10h]
  int v23; // [esp+34h] [ebp+14h]

  LOBYTE(result) = this->isInPlayfield; /*0x70af58*/
  if ( (_BYTE)result ) /*0x70af60*/
  {
    result = (int)this->owner; /*0x70af66*/
    LOBYTE(result) = *(_BYTE *)(*(_DWORD *)(result + 52) + 422); /*0x70af6f*/
    if ( !(_BYTE)result /*0x70af97*/
      && (*(_DWORD *)((*((int (__thiscall **)(TechnoClass *))this->RadioClass + 33))(this) + 1512) || (result = v23) != 0) )
    {
      location = this->?; /*0x70af9d*/
      v16 = this->?[0]; /*0x70afa7*/
      v17 = this->?[1]; /*0x70afb4*/
      v4 = 10 * (this->?[2] / *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 5820)); /*0x70afcc*/
      if ( v4 > this->sightRangeBonus ) /*0x70afd0*/
        v19 = 0; /*0x70afd2*/
      this->sightRangeBonus = v4; /*0x70afd7*/
      v5 = (*((int (__thiscall **)(TechnoClass *))this->RadioClass + 33))(this); /*0x70afe2*/
      LOWORD(v6) = Math::RoundToInt((double)*(int *)(v5 + 1512) * ((double)this->sightRangeBonus * 0.01 + 1.0)); /*0x70b00b*/
      v7 = v6; /*0x70b016*/
      v15 = v6; /*0x70b01a*/
      if ( (unsigned __int8)Audio::IsMediumVolume(this->veterancy) || (unsigned __int8)Audio::IsLoud(this->veterancy) ) /*0x70b029*/
      {
        if ( (v14 = (*((int (__thiscall **)(TechnoClass *))this->RadioClass + 33))(this), /*0x70b072*/
              (unsigned __int8)Audio::IsMediumVolume(this->veterancy))
          && *(_BYTE *)(v14 + 673)
          || (unsigned __int8)Audio::IsLoud(this->veterancy) && (*(_BYTE *)(v14 + 673) || *(_BYTE *)(v14 + 691)) )
        {
          if ( *(double *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 1664) != 0.0 ) /*0x70b093*/
          {
            LOWORD(v8) = Math::RoundToInt((double)v15 * *(double *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 1664)); /*0x70b09f*/
            v7 = v8; /*0x70b0a4*/
          }
        }
      }
      result = v23; /*0x70b0a6*/
      if ( v23 ) /*0x70b0ad*/
        v7 = v23; /*0x70b0af*/
      if ( !this->isChronosphereImmune ) /*0x70b0b1*/
      {
        v9 = *location; /*0x70b0c9*/
        this->isChronosphereImmune = 1; /*0x70b0cb*/
        this->lastSightCoords[0] = v9; /*0x70b0d2*/
        this->lastSightRange = v7; /*0x70b0d4*/
        result = this->?[1]; /*0x70b0da*/
        this->lastSightCoords[1] = result; /*0x70b0dd*/
        this->lastSightCoords[2] = this->?[2]; /*0x70b0e3*/
        if ( !v7 ) /*0x70b0e6*/
          return result; /*0x70b0e6*/
        if ( !v21 || !v22 ) /*0x70b0fa*/
        {
          v10 = this->?[1]; /*0x70b13c*/
          v11 = this->?[2]; /*0x70b13f*/
          v16 = *location; /*0x70b142*/
          v17 = v10; /*0x70b14c*/
          v18 = v11; /*0x70b156*/
          return MapClass::RevealArea1((MapClass *)&stru_87F5F0.__pad_58[416], &v16, v7, this->owner, v19, v20, 0, 1, 0); /*0x70b17b*/
        }
        goto LABEL_26; /*0x70b0fa*/
      }
      LOBYTE(result) = v21; /*0x70b17e*/
      if ( v21 ) /*0x70b184*/
      {
        if ( v7 ) /*0x70b188*/
        {
          result = (int)v22; /*0x70b18a*/
          if ( v22 ) /*0x70b190*/
          {
LABEL_26:
            v12 = this->?[1]; /*0x70b192*/
            v16 = *location; /*0x70b197*/
            v13 = this->?[2]; /*0x70b19b*/
            v17 = v12; /*0x70b19e*/
            v18 = v13; /*0x70b1a8*/
            return MapClass::RevealArea1((MapClass *)&stru_87F5F0.__pad_58[416], &v16, v7, v22, v19, v20, 0, 1, 0); /*0x70b1c2*/
          }
        }
      }
    }
  }
  return result; /*0x70b131*/
}



// ==== 0x0070B1D0  TechnoClass::RevealAreaConditional  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::RevealAreaConditional(TechnoClass *this)
{
  int result; // eax
  HouseClass *owner; // esi
  void *v3; // edx
  char v4; // [esp+8h] [ebp+4h]
  int v5; // [esp+Ch] [ebp+8h]
  char v6; // [esp+10h] [ebp+Ch]
  void *v7; // [esp+14h] [ebp+10h]

  LOBYTE(result) = this->isInPlayfield; /*0x70b1d0*/
  if ( (_BYTE)result ) /*0x70b1d9*/
  {
    owner = this->owner; /*0x70b1df*/
    result = owner->relatedTagsCapacity; /*0x70b1e5*/
    if ( !*(_BYTE *)(result + 422) ) /*0x70b1e8*/
    {
      if ( this->isChronosphereImmune ) /*0x70b1f2*/
      {
        result = this->lastSightRange; /*0x70b1fc*/
        this->isChronosphereImmune = 0; /*0x70b202*/
        if ( !result ) /*0x70b20b*/
          return result; /*0x70b20b*/
        if ( !v6 ) /*0x70b213*/
          return MapClass::RevealArea1( /*0x70b213*/
                   (MapClass *)&stru_87F5F0.__pad_58[416],
                   this->lastSightCoords,
                   result,
                   owner,
                   v4,
                   v5,
                   0,
                   1,
                   1);
        v3 = v7; /*0x70b215*/
        if ( !v7 ) /*0x70b21b*/
          return MapClass::RevealArea1( /*0x70b232*/
                   (MapClass *)&stru_87F5F0.__pad_58[416],
                   this->lastSightCoords,
                   result,
                   owner,
                   v4,
                   v5,
                   0,
                   1,
                   1);
        return MapClass::RevealArea1( /*0x70b21b*/
                 (MapClass *)&stru_87F5F0.__pad_58[416],
                 this->lastSightCoords,
                 result,
                 v3,
                 v4,
                 v5,
                 0,
                 1,
                 1);
      }
      LOBYTE(result) = v6; /*0x70b234*/
      if ( v6 ) /*0x70b23a*/
      {
        result = this->lastSightRange; /*0x70b23c*/
        if ( result ) /*0x70b244*/
        {
          v3 = v7; /*0x70b246*/
          if ( v7 ) /*0x70b24c*/
            return MapClass::RevealArea1( /*0x70b24e*/
                     (MapClass *)&stru_87F5F0.__pad_58[416],
                     this->lastSightCoords,
                     result,
                     v3,
                     v4,
                     v5,
                     0,
                     1,
                     1);
        }
      }
    }
  }
  return result; /*0x70b271*/
}



// ==== 0x0070B280  TechnoClass::ComputeAimVector  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::ComputeAimVector(TechnoClass *this)
{
  int result; // eax
  int v3; // edi
  int v4; // ecx
  int v5; // eax
  int v6; // edi
  unsigned int v7; // edi
  unsigned int v8; // ebx
  float v11; // eax
  double v14; // [esp+0h] [ebp-60h]
  double v15; // [esp+0h] [ebp-60h]
  double v16; // [esp+0h] [ebp-60h]
  float v18; // [esp+18h] [ebp-48h]
  double v20; // [esp+28h] [ebp-38h] BYREF
  float v21; // [esp+30h] [ebp-30h]
  double v22; // [esp+3Ch] [ebp-24h]
  float v23; // [esp+44h] [ebp-1Ch]
  double v24; // [esp+48h] [ebp-18h]
  float v25; // [esp+50h] [ebp-10h]
  _DWORD *v27; // [esp+68h] [ebp+8h]
  char v29; // [esp+70h] [ebp+10h]

  result = (*((int (__thiscall **)(TechnoClass *))this->RadioClass + 33))(this); /*0x70b290*/
  if ( *(_DWORD *)(result + 176) ) /*0x70b296*/
  {
    result = *(_DWORD *)((*((int (__thiscall **)(TechnoClass *))this->RadioClass + 33))(this) + 176); /*0x70b2ae*/
    if ( !*(_BYTE *)result ) /*0x70b2b4*/
    {
      v3 = this->?[1]; /*0x70b2ce*/
      LODWORD(v20) = this->?[0] - *v27; /*0x70b2d1*/
      __asm { fild [esp+58h+var_38] } /*0x70b2d5*/
      v4 = this->?[2]; /*0x70b2dc*/
      v5 = v27[1] - v3; /*0x70b2df*/
      v6 = v27[2]; /*0x70b2e1*/
      __asm { fstp [esp+58h+var_24] } /*0x70b2e4*/
      LODWORD(v20) = v5; /*0x70b2e8*/
      __asm { fild [esp+58h+var_38] } /*0x70b2ee*/
      LODWORD(v20) = v4 - v6; /*0x70b2f2*/
      __asm /*0x70b302*/
      {
        fstp [esp+58h+var_20]
        fild [esp+58h+var_38]
      }
      v24 = v22; /*0x70b315*/
      __asm { fstp [esp+5Ch+var_1C] } /*0x70b319*/
      v25 = v23; /*0x70b321*/
      LODWORD(v20) = *(__int16 *)ProgressTimer::GetValue((ProgressTimer *)this->primaryFacing, &v20) - 0x3FFF; /*0x70b333*/
      __asm /*0x70b337*/
      {
        fild [esp+58h+var_38]
        fmul ds:dbl_7E2810
        fstp qword ptr [esp+58h+var_38]
      }
      v7 = HIDWORD(v20); /*0x70b345*/
      v8 = LODWORD(v20); /*0x70b34d*/
      Math::SinCos(v20); /*0x70b34f*/
      __asm { fstp [esp+60h+var_3C] } /*0x70b354*/
      Math::ArcTan2(COERCE_DOUBLE(__PAIR64__(v7, v8))); /*0x70b35a*/
      __asm /*0x70b35f*/
      {
        fstp [esp+68h+var_C]
        fld [esp+68h+var_1C]
        fld [esp+68h+var_20]
        fld [esp+68h+var_24]
        fld st
        fmul st, st(1)
        fld st(2)
        fmul st, st(3)
      }
      __asm
      {
        faddp st(1), st
        fld st(3)
        fmul st, st(4)
        faddp st(1), st
        fstp [esp+60h+var_60]; double
        fstp st
        fstp st
        fstp st
      }
      Math::Sqrt(v14); /*0x70b38b*/
      __asm /*0x70b390*/
      {
        fst [esp+60h+var_38]
        fmul ds:flt_7F4E58
      }
      __asm
      {
        fsubr ds:flt_7F4E54
        fmul [ebp+arg_4]
        fstp qword ptr [esp+58h+var_48]
      }
      result = (*((int (__thiscall **)(TechnoClass *))this->RadioClass + 33))(this); /*0x70b3ae*/
      __asm /*0x70b3b4*/
      {
        fld qword ptr [esp+58h+var_48]
        fdiv qword ptr [eax+370h]
        fstp [esp+58h+var_48]
        fld [esp+58h+var_38]
        fabs
        fcomp ds:dbl_7EC0B0
        fnstsw ax
      }
      if ( (result & 0x100) == 0 ) /*0x70b3d3*/
      {
        __asm /*0x70b3d9*/
        {
          fld [esp+58h+var_48]
          fcomp ds:flt_7F4E34
          fnstsw ax
        }
        if ( (result & 0x100) == 0 ) /*0x70b3e8*/
        {
          __asm /*0x70b3ee*/
          {
            fld [esp+58h+var_48]
            fcomp ds:flt_7F4E50
            fnstsw ax
          }
          if ( (_AX & 0x4100) == 0 ) /*0x70b3fd*/
            v18 = 0.050000001; /*0x70b3ff*/
          __asm /*0x70b407*/
          {
            fld [esp+58h+var_14]
            fmul [esp+58h+var_14]
            fld [esp+58h+var_18]
            fmul [esp+58h+var_18]
          }
          v25 = 0.0; /*0x70b41a*/
          __asm /*0x70b422*/
          {
            faddp st(1), st
            fstp [esp+60h+var_60]; double
          }
          Math::Sqrt(v15); /*0x70b427*/
          __asm { fcom ds:dbl_7E2800 } /*0x70b42c*/
          __asm { fnstsw ax }
          if ( (_AX & 0x4000) != 0 ) /*0x70b43a*/
          {
            v11 = v25; /*0x70b478*/
            v22 = v24; /*0x70b47c*/
            __asm { fstp st } /*0x70b480*/
          }
          else
          {
            __asm /*0x70b43c*/
            {
              fld [esp+58h+var_18]
              fdiv st, st(1)
              fstp [esp+58h+var_38]
              fld [esp+58h+var_14]
              fdiv st, st(1)
            }
            __asm { fstp [esp+58h+var_38+4] }
            __asm { fdivr ds:dbl_7E2800 }
            v22 = v20; /*0x70b462*/
            __asm { fstp [esp+58h+var_30] } /*0x70b466*/
            v11 = v21; /*0x70b46a*/
          }
          __asm /*0x70b486*/
          {
            fld [esp+58h+var_24]
            fmul [esp+58h+var_C]
            fld [esp+58h+var_20]
            fmul [esp+58h+var_3C]
          }
          v23 = v11; /*0x70b496*/
          __asm /*0x70b49d*/
          {
            faddp st(1), st
            fstp [esp+60h+var_38]
            fld [esp+60h+var_1C]
            fmul [esp+60h+var_3C]
            fchs
            fstp [esp+60h+var_18]
            fld [esp+60h+var_1C]
            fmul [esp+60h+var_C]
            fstp [esp+60h+var_14]
            fld [esp+60h+var_24]
            fmul [esp+60h+var_3C]
            fld [esp+60h+var_20]
            fmul [esp+60h+var_C]
            fsubp st(1), st
            fld [esp+60h+var_14]
            fld [esp+60h+var_18]
            fld st
            fmul st, st(1)
            fld st(2)
            fmul st, st(3)
            faddp st(1), st
            fld st(3)
            fmul st, st(4)
            faddp st(1), st
            fstp [esp+60h+var_60]; double
            fstp st
            fstp st
            fstp st
          }
          result = Math::Sqrt(v16); /*0x70b4f0*/
          __asm /*0x70b4f5*/
          {
            fld [esp+60h+var_C]
            fmul [esp+60h+var_38]
            fld [esp+60h+var_3C]
            fmul st, st(2)
          }
          __asm
          {
            fsubp st(1), st
            fsub [esp+58h+var_24]
            fabs
            fcomp ds:dbl_7EC0A8
            fnstsw ax
          }
          if ( (result & 0x4100) == 0 ) /*0x70b519*/
            goto LABEL_12; /*0x70b519*/
          __asm /*0x70b51b*/
          {
            fld [esp+58h+var_C]
            fmul st, st(1)
            fld [esp+58h+var_3C]
            fmul [esp+58h+var_38]
            faddp st(1), st
            fsub [esp+58h+var_20]
            fabs
            fcomp ds:dbl_7EC0A8
            fnstsw ax
          }
          if ( (result & 0x4100) == 0 ) /*0x70b53c*/
LABEL_12:
            __asm { fchs } /*0x70b53e*/
          LOBYTE(result) = v29; /*0x70b540*/
          __asm /*0x70b543*/
          {
            fld [esp+58h+var_38]
            fmul [esp+58h+var_48]
          }
          if ( !v29 ) /*0x70b54d*/
            __asm { fmul ds:flt_7E5168 } /*0x70b54f*/
          __asm { fstp dword ptr [esi+334h] } /*0x70b555*/
          this->firingParticles = _ET1; /*0x70b555*/
          __asm /*0x70b55b*/
          {
            fmul [esp+58h+var_48]
            fchs
            fstp dword ptr [esi+330h]
          }
          this->auxParticles2 = _ET1; /*0x70b561*/
        }
      }
    }
  }
  return result; /*0x70b567*/
}



// ==== 0x0070B570  TechnoClass::UpdateBodyTilt  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::UpdateBodyTilt(TechnoClass *this)
{
  int result; // eax
  bool v3; // dl
  __int16 v4; // fps
  double v5; // st7
  char v6; // c0
  bool v7; // c0
  char v8; // c2
  bool v9; // c3
  int (__thiscall **vtable0)(TechnoClass *); // edx
  double v11; // st7
  double v12; // st7
  __int16 v13; // fps
  bool v14; // c0
  char v15; // c2
  bool v16; // c3
  bool v17; // cl
  double v18; // st7
  unsigned __int8 v20; // c0
  unsigned __int8 v21; // c3
  double v22; // st7
  double v23; // st7
  bool v24; // dl
  bool v25; // cl
  double v26; // st7
  double v27; // st7
  double v28; // st7
  __int16 v29; // fps
  double v30; // st7
  bool v31; // c0
  char v32; // c2
  bool v33; // c3
  int v34; // eax
  void *v35; // edx
  bool v36; // [esp+Ah] [ebp-Eh]
  bool v37; // [esp+Ah] [ebp-Eh]
  ParticleSystemClass *railgunParticles_2; // [esp+Ch] [ebp-Ch]
  float v39; // [esp+Ch] [ebp-Ch]
  float v40; // [esp+10h] [ebp-8h]
  float v41; // [esp+14h] [ebp-4h] BYREF

  v3 = *(float *)&this->railgunParticles_2 > 0.00002; /*0x70b58a*/
  v36 = *(float *)&this->railgunParticles_2 < -0.00002; /*0x70b5aa*/
  if ( this->isSinking ) /*0x70b5ae*/
  {
    v5 = *(float *)&this->auxParticles1; /*0x70b5c6*/
    if ( v6 ) /*0x70b5d1*/
      v5 = -v5; /*0x70b5d3*/
    v7 = v5 < 0.78539819; /*0x70b5d5*/
    v8 = 0; /*0x70b5d5*/
    v9 = v5 == 0.78539819; /*0x70b5d5*/
    LOWORD(result) = v4; /*0x70b5db*/
    if ( v5 < 0.78539819 ) /*0x70b5e0*/
    {
      result = ((unsigned int)((*ProgressTimer::GetValue((ProgressTimer *)this->primaryFacing, &v41) >> 12) + 1) >> 1) /*0x70b5fe*/
             & 7;
      if ( result && result <= 5 ) /*0x70b606*/
        *(float *)&this->auxParticles1 = *(float *)&this->auxParticles1 + 0.01; /*0x70b619*/
      else
        *(float *)&this->auxParticles1 = *(float *)&this->auxParticles1 - 0.01; /*0x70b631*/
    }
    return result; /*0x70b624*/
  }
  if ( this->isCrashing ) /*0x70b63d*/
  {
    vtable0 = (int (__thiscall **)(TechnoClass *))this->RadioClass; /*0x70b655*/
    *(float *)&this->auxParticles1 = *(float *)&this->firingParticles + *(float *)&this->auxParticles1; /*0x70b659*/
    *(float *)&this->railgunParticles_2 = *(float *)&this->auxParticles2 + *(float *)&this->railgunParticles_2; /*0x70b66b*/
    result = vtable0[33](this); /*0x70b671*/
    if ( *(_BYTE *)(result + 3434) ) /*0x70b677*/
    {
      if ( *(float *)&this->auxParticles1 <= -0.78539819 ) /*0x70b694*/
        v11 = -0.78539819; /*0x70b69e*/
      else
        v11 = *(float *)&this->auxParticles1; /*0x70b696*/
      *(float *)&this->auxParticles1 = v11; /*0x70b6a4*/
      if ( *(float *)&this->railgunParticles_2 <= -0.78539819 ) /*0x70b6bb*/
        v12 = -0.78539819; /*0x70b6c5*/
      else
        v12 = *(float *)&this->railgunParticles_2; /*0x70b6bd*/
      *(float *)&this->railgunParticles_2 = v12; /*0x70b6cb*/
      v14 = v12 < 0.78539819; /*0x70b6d3*/
      v15 = 0; /*0x70b6d3*/
      v16 = v12 == 0.78539819; /*0x70b6d3*/
      LOWORD(result) = v13; /*0x70b6d9*/
      if ( v12 >= 0.78539819 ) /*0x70b6de*/
        *(float *)&this->railgunParticles_2 = 0.78539819; /*0x70b6f4*/
      else
        *(float *)&this->railgunParticles_2 = v12; /*0x70b6e0*/
    }
    return result; /*0x70b6eb*/
  }
  v17 = *(float *)&this->railgunParticles_2 > 1.5707964; /*0x70b715*/
  if ( *(float *)&this->railgunParticles_2 < -1.5707964 ) /*0x70b728*/
    v17 = 1; /*0x70b72a*/
  if ( *(float *)&this->auxParticles2 == 0.0 ) /*0x70b73d*/
  {
    this->railgunParticles_2 = 0; /*0x70b921*/
    goto LABEL_61; /*0x70b921*/
  }
  v18 = *(float *)&this->auxParticles2 + *(float *)&this->railgunParticles_2; /*0x70b749*/
  railgunParticles_2 = this->railgunParticles_2; /*0x70b755*/
  *(float *)&this->railgunParticles_2 = v18; /*0x70b75f*/
  if ( !(v20 | v21) && !this->rockerLinkedUnit && !v17 && *(float *)&railgunParticles_2 < 0.78539819 ) /*0x70b787*/
  {
    this->railgunParticles_2 = (ParticleSystemClass *)1061752795; /*0x70b78b*/
LABEL_33:
    this->auxParticles2 = 0; /*0x70b7cb*/
    goto LABEL_34; /*0x70b7cb*/
  }
  if ( v18 < -0.78539819 && !this->rockerLinkedUnit && !v17 && *(float *)&railgunParticles_2 > -0.78539819 ) /*0x70b7bf*/
  {
    this->railgunParticles_2 = (ParticleSystemClass *)-1085730853; /*0x70b7c1*/
    goto LABEL_33; /*0x70b7c1*/
  }
LABEL_34:
  v22 = *(float *)&this->auxParticles2; /*0x70b7d1*/
  if ( !v3 ) /*0x70b7e1*/
  {
    result = (int)this->rockerLinkedUnit; /*0x70b882*/
    if ( v22 >= 0.0 ) /*0x70b888*/
    {
      if ( result ) /*0x70b8cf*/
      {
        if ( !v17 ) /*0x70b8d3*/
        {
          *(float *)&this->auxParticles2 = *(float *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 6328) /*0x70b8ed*/
                                         * 0.0020000001
                                         + *(float *)&this->auxParticles2;
          goto LABEL_63; /*0x70b8f3*/
        }
      }
      else if ( !v17 ) /*0x70b8f7*/
      {
        *(float *)&this->auxParticles2 = *(float *)&this->auxParticles2 + 0.005000000237487257; /*0x70b919*/
        goto LABEL_63; /*0x70b91f*/
      }
    }
    else if ( result ) /*0x70b88c*/
    {
      if ( !v17 ) /*0x70b890*/
      {
        *(float *)&this->auxParticles2 = *(float *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 6328) * 0.0020000001 /*0x70b8aa*/
                                       + *(float *)&this->auxParticles2;
        goto LABEL_63; /*0x70b8b0*/
      }
    }
    else if ( !v17 ) /*0x70b8b7*/
    {
      *(float *)&this->auxParticles2 = *(float *)&this->auxParticles2 + 0.0020000001; /*0x70b8c5*/
      goto LABEL_63; /*0x70b8cb*/
    }
    *(float *)&this->auxParticles2 = *(float *)&this->auxParticles2 - 0.0020000001; /*0x70b905*/
    goto LABEL_63; /*0x70b90b*/
  }
  result = (int)this->rockerLinkedUnit; /*0x70b7ea*/
  if ( v22 <= 0.0 ) /*0x70b7f0*/
  {
    if ( result ) /*0x70b851*/
    {
      if ( !v17 ) /*0x70b855*/
      {
        HIWORD(result) = *(_WORD *)&DSurface_ViewBounds.__pad_FC[326]; /*0x70b857*/
        v23 = *(float *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 6328); /*0x70b85c*/
        goto LABEL_39; /*0x70b862*/
      }
    }
    else if ( !v17 ) /*0x70b866*/
    {
      *(float *)&this->auxParticles2 = *(float *)&this->auxParticles2 - 0.005000000237487257; /*0x70b874*/
      goto LABEL_61; /*0x70b87a*/
    }
    goto LABEL_41; /*0x70b855*/
  }
  if ( !result ) /*0x70b7f4*/
  {
    if ( !v17 ) /*0x70b81f*/
    {
      *(float *)&this->auxParticles2 = *(float *)&this->auxParticles2 - 0.0020000001; /*0x70b844*/
      goto LABEL_61; /*0x70b84a*/
    }
    goto LABEL_41; /*0x70b81f*/
  }
  if ( v17 ) /*0x70b7f8*/
  {
LABEL_41:
    *(float *)&this->auxParticles2 = *(float *)&this->auxParticles2 + 0.0020000001; /*0x70b821*/
    goto LABEL_61; /*0x70b833*/
  }
  v23 = *(float *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 6328); /*0x70b800*/
LABEL_39:
  *(float *)&this->auxParticles2 = *(float *)&this->auxParticles2 - v23 * 0.0020000001; /*0x70b806*/
LABEL_61:
  if ( v3 && *(float *)&this->railgunParticles_2 < 0.00002 ) /*0x70b93c*/
    goto LABEL_65; /*0x70b93c*/
LABEL_63:
  if ( v36 && *(float *)&this->railgunParticles_2 > -0.00002 ) /*0x70b955*/
  {
LABEL_65:
    this->auxParticles2 = 0; /*0x70b957*/
    this->railgunParticles_2 = 0; /*0x70b95d*/
  }
  v24 = *(float *)&this->auxParticles1 > 0.00002; /*0x70b963*/
  v37 = *(float *)&this->auxParticles1 < -0.00002; /*0x70b994*/
  v25 = *(float *)&this->auxParticles1 > 1.5707964; /*0x70b9ad*/
  if ( *(float *)&this->auxParticles1 < -1.5707964 ) /*0x70b9c0*/
    v25 = 1; /*0x70b9c2*/
  if ( *(float *)&this->firingParticles == 0.0 ) /*0x70b9d5*/
  {
    this->auxParticles1 = 0; /*0x70bbe1*/
    goto LABEL_110; /*0x70bbe1*/
  }
  v26 = *(float *)&this->firingParticles + *(float *)&this->auxParticles1; /*0x70b9e1*/
  v41 = *(float *)&this->auxParticles1; /*0x70b9ef*/
  v40 = v26; /*0x70b9f3*/
  *(float *)&this->auxParticles1 = v26; /*0x70b9f7*/
  v27 = 0.78539819; /*0x70b9fd*/
  if ( this && (this->? & 4) != 0 && *((_BYTE *)this + 1717) ) /*0x70ba13*/
    v27 = 0.31415927; /*0x70ba1d*/
  if ( v40 > v27 && !this->rockerLinkedUnit && !v25 && v41 < v27 ) /*0x70ba47*/
  {
    *(float *)&this->auxParticles1 = v27; /*0x70ba49*/
LABEL_83:
    this->firingParticles = 0; /*0x70ba8b*/
    goto LABEL_84; /*0x70ba8b*/
  }
  v39 = -v27; /*0x70ba53*/
  if ( v40 < (double)v39 && !this->rockerLinkedUnit && !v25 && v41 > (double)v39 ) /*0x70ba7f*/
  {
    *(float *)&this->auxParticles1 = v39; /*0x70ba85*/
    goto LABEL_83; /*0x70ba85*/
  }
LABEL_84:
  v28 = *(float *)&this->firingParticles; /*0x70ba91*/
  if ( !v24 ) /*0x70baa1*/
  {
    result = (int)this->rockerLinkedUnit; /*0x70bb57*/
    if ( v28 >= 0.0 ) /*0x70bb5d*/
    {
      if ( result ) /*0x70bb8f*/
      {
        if ( !v25 ) /*0x70bb93*/
        {
          *(float *)&this->firingParticles = *(float *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 6328) /*0x70bbad*/
                                           * 0.0020000001
                                           + *(float *)&this->firingParticles;
          goto LABEL_112; /*0x70bbb3*/
        }
        goto LABEL_107; /*0x70bb93*/
      }
      if ( v25 ) /*0x70bbb7*/
        goto LABEL_107; /*0x70bbb7*/
    }
    else
    {
      if ( result ) /*0x70bb61*/
      {
        if ( !v25 ) /*0x70bb65*/
        {
          *(float *)&this->firingParticles = *(float *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 6328) /*0x70bb7f*/
                                           * 0.0020000001
                                           + *(float *)&this->firingParticles;
          goto LABEL_112; /*0x70bb85*/
        }
LABEL_107:
        *(float *)&this->firingParticles = *(float *)&this->firingParticles - 0.0020000001; /*0x70bbb9*/
        goto LABEL_112; /*0x70bbcb*/
      }
      if ( v25 ) /*0x70bb89*/
        goto LABEL_107; /*0x70bb89*/
    }
    *(float *)&this->firingParticles = *(float *)&this->firingParticles + 0.005000000237487257; /*0x70bbd9*/
    goto LABEL_112; /*0x70bbdf*/
  }
  result = (int)this->rockerLinkedUnit; /*0x70baaa*/
  if ( v28 <= 0.0 ) /*0x70bab0*/
  {
    if ( result ) /*0x70bafa*/
    {
      if ( !v25 ) /*0x70bafe*/
      {
        HIWORD(result) = *(_WORD *)&DSurface_ViewBounds.__pad_FC[326]; /*0x70bb00*/
        *(float *)&this->firingParticles = *(float *)&this->firingParticles /*0x70bb17*/
                                         - *(float *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 6328)
                                         * 0.0020000001;
        goto LABEL_110; /*0x70bb1d*/
      }
LABEL_95:
      *(float *)&this->firingParticles = *(float *)&this->firingParticles + 0.0020000001; /*0x70bb26*/
      goto LABEL_110; /*0x70bb38*/
    }
    if ( v25 ) /*0x70bb24*/
      goto LABEL_95; /*0x70bb24*/
LABEL_96:
    *(float *)&this->firingParticles = *(float *)&this->firingParticles - 0.005000000237487257; /*0x70bb3d*/
    goto LABEL_110; /*0x70bb4f*/
  }
  if ( !result ) /*0x70bab4*/
  {
    if ( v25 ) /*0x70badf*/
    {
      *(float *)&this->firingParticles = *(float *)&this->firingParticles + 0.0020000001; /*0x70baed*/
      goto LABEL_110; /*0x70baf3*/
    }
    goto LABEL_96; /*0x70badf*/
  }
  if ( v25 ) /*0x70bab8*/
    goto LABEL_95; /*0x70bab8*/
  *(float *)&this->firingParticles = *(float *)&this->firingParticles /*0x70bad2*/
                                   - *(float *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 6328) * 0.0020000001;
LABEL_110:
  if ( v24 && *(float *)&this->auxParticles1 < 0.00002 ) /*0x70bbfc*/
    goto LABEL_114; /*0x70bbfc*/
LABEL_112:
  if ( v37 && *(float *)&this->auxParticles1 > -0.00002 ) /*0x70bc15*/
  {
LABEL_114:
    this->firingParticles = 0; /*0x70bc17*/
    this->auxParticles1 = 0; /*0x70bc1d*/
  }
  if ( *(float *)&this->railgunParticles_2 > 3.1415927 /*0x70bc6d*/
    || *(float *)&this->railgunParticles_2 < -3.1415927
    || *(float *)&this->auxParticles1 > 3.1415927
    || (v30 = *(float *)&this->auxParticles1,
        v31 = v30 < -3.1415927,
        v32 = 0,
        v33 = v30 == -3.1415927,
        LOWORD(result) = v29,
        v30 < -3.1415927) )
  {
    v34 = (*((int (__thiscall **)(TechnoClass *))this->RadioClass + 33))(this); /*0x70bc73*/
    v35 = this->RadioClass; /*0x70bc84*/
    v41 = *(float *)(v34 + 160); /*0x70bc87*/
    return (*((int (__thiscall **)(TechnoClass *, float *, _DWORD, _DWORD, _DWORD, int, _DWORD, _DWORD))v35 + 91))( /*0x70bc9e*/
             this,
             &v41,
             0,
             *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 4008),
             0,
             1,
             0,
             0);
  }
  return result; /*0x70b61f*/
}



// ==== 0x0070BCB0  TechnoClass::GetTargetCoords  this=TechnoClass  sig=csp ====
int *__thiscall TechnoClass::GetTargetCoords(TechnoClass *this, int *a2)
{
  double v2; // st7
  int v3; // ebp
  int v5; // edi
  AbstractClass *target; // ecx
  int *v7; // eax
  AbstractClass *v8; // ecx
  AbstractClass *v9; // ebx
  TechnoClass **v10; // eax
  TechnoClass *v11; // ecx
  int v12; // eax
  int v13; // eax
  int v14; // eax
  void *v16; // [esp+10h] [ebp-30h]
  int WeaponRange; // [esp+10h] [ebp-30h]
  int v18; // [esp+10h] [ebp-30h]
  int v20; // [esp+18h] [ebp-28h]
  int v21; // [esp+18h] [ebp-28h]
  double v22; // [esp+18h] [ebp-28h]
  double v23; // [esp+20h] [ebp-20h] BYREF
  double v24; // [esp+28h] [ebp-18h] BYREF
  int v25; // [esp+34h] [ebp-Ch]
  int v26; // [esp+38h] [ebp-8h]

  v3 = g_BuildingLoadQueue_Array.?[4]; /*0x70bcba*/
  v5 = g_BuildingLoadQueue_Array.?[5]; /*0x70bcc4*/
  target = this->target; /*0x70bcca*/
  v25 = g_BuildingLoadQueue_Array.?[3]; /*0x70bcd0*/
  if ( target ) /*0x70bcd6*/
  {
    v7 = (int *)(*((int (__thiscall **)(AbstractClass *, double *))target->vtable0 + 22))(target, &v24); /*0x70bce3*/
    v25 = *v7; /*0x70bce8*/
    v8 = this->target; /*0x70bcec*/
    v3 = v7[1]; /*0x70bcf2*/
    v5 = v7[2]; /*0x70bcf7*/
    v26 = v3; /*0x70bcfa*/
    if ( v8 ) /*0x70bcfe*/
    {
      if ( (*((int (__thiscall **)(AbstractClass *))v8->vtable0 + 11))(v8) == 1 ) /*0x70bd0c*/
      {
        v9 = this->target; /*0x70bd12*/
        if ( v9 ) /*0x70bd1a*/
        {
          if ( !v9[45].NeedsSaveOrLink ) /*0x70bd20*/
            WinAPI::Wrapper(-2147467261); /*0x70bd2f*/
          if ( (*(unsigned __int8 (__stdcall **)(void *))(*(_DWORD *)v9[45].NeedsSaveOrLink + 16))(v9[45].NeedsSaveOrLink) ) /*0x70bd3d*/
          {
            v20 = (*((int (__thiscall **)(AbstractClass *))v9->vtable0 + 334))(v9); /*0x70bd52*/
            v16 = (void *)ObjectClass::DistanceTo((ObjectClass *)this, (int)this->target); /*0x70bd68*/
            v10 = (TechnoClass **)(*((int (__thiscall **)(TechnoClass *))this->RadioClass + 253))(this); /*0x70bd6c*/
            if ( v10 ) /*0x70bd74*/
            {
              v11 = *v10; /*0x70bd7a*/
              if ( *v10 ) /*0x70bd7a*/
              {
                __asm { fild [esp+40h+var_30] } /*0x70bd84*/
                __asm { fstp qword ptr [esp+44h+var_20] }
                WeaponRange = TechnoClass::GetWeaponRange(v11, v16); /*0x70bd96*/
                __asm /*0x70bd9a*/
                {
                  fild [esp+40h+var_30]
                  fmul ds:dbl_7F4E80
                  fdivr qword ptr [esp+40h+var_20]
                  fimul dword ptr [esp+40h+var_28]
                }
                LOWORD(v12) = Math::RoundToInt(v2); /*0x70bdac*/
                v18 = v12; /*0x70bdb5*/
                v21 = *(__int16 *)ProgressTimer::GetValue((ProgressTimer *)&v9[25].vtable1, &v23) - 0x3FFF; /*0x70bdce*/
                __asm /*0x70bdd2*/
                {
                  fild dword ptr [esp+40h+var_28]
                  fmul ds:dbl_7E2810
                  fstp [esp+40h+var_28]
                  fild [esp+40h+var_30]
                }
                __asm
                {
                  fstp qword ptr [esp+48h+var_30]
                  fild [esp+48h+var_8]
                  fstp [esp+48h+var_18]
                }
                Math::SinCos(v22); /*0x70bdfa*/
                __asm /*0x70bdff*/
                {
                  fmul qword ptr [esp+48h+var_30]
                  fsubr [esp+48h+var_18]
                }
                LOWORD(v13) = Math::RoundToInt(v2); /*0x70be07*/
                v3 = v13; /*0x70be0e*/
                Math::ArcTan2(v22); /*0x70be10*/
                __asm { fmul qword ptr [esp+50h+var_30] } /*0x70be15*/
                __asm { fiadd [esp+40h+var_C] }
                LOWORD(v14) = Math::RoundToInt(v2); /*0x70be20*/
                v25 = v14; /*0x70be25*/
              }
            }
          }
        }
      }
    }
  }
  *a2 = v25; /*0x70be33*/
  a2[1] = v3; /*0x70be35*/
  a2[2] = v5; /*0x70be38*/
  return a2; /*0x70be3b*/
}



// ==== 0x0070BE50  TechnoClass::CalcOffsetFacing  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::CalcOffsetFacing(TechnoClass *this)
{
  int v2; // edi
  int v3; // eax

  v2 = (*((int (__stdcall **)(void **))this->? + 4))(&this->?); /*0x70be64*/
  LOWORD(v3) = Math::RoundToInt(this->warpFactor); /*0x70be66*/
  return (v2 + v3) % 400; /*0x70be75*/
}



// ==== 0x0070BE80  TechnoClass::ShouldSelfHealOneStep  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::ShouldSelfHealOneStep(TechnoClass *this)
{
  int result; // eax
  int v3; // edi
  int v4; // eax
  int v5; // et2
  int health; // edi

  if ( *(_BYTE *)((*((int (__thiscall **)(TechnoClass *))this->RadioClass + 33))(this) + 3348) /*0x70bee9*/
    || ((unsigned __int8)Audio::IsMediumVolume(this->veterancy)
     || (result = Audio::IsLoud(this->veterancy), (_BYTE)result))
    && ((v3 = (*((int (__thiscall **)(TechnoClass *))this->RadioClass + 33))(this),
         (unsigned __int8)Audio::IsMediumVolume(this->veterancy))
     && *(_BYTE *)(v3 + 677)
     || (result = Audio::IsLoud(this->veterancy), (_BYTE)result) && (*(_BYTE *)(v3 + 677) || *(_BYTE *)(v3 + 695))) )
  {
    LOWORD(v4) = Math::RoundToInt(*(double *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 5856) * 900.0); /*0x70bf0a*/
    v5 = *(_DWORD *)&stru_A8EB00.?[416] % v4; /*0x70bf17*/
    result = *(_DWORD *)&stru_A8EB00.?[416] / v4; /*0x70bf17*/
    if ( v5 ) /*0x70bf1b*/
    {
      LOBYTE(result) = 0; /*0x70bf1f*/
    }
    else
    {
      health = this->?; /*0x70bf25*/
      result = (*((int (__thiscall **)(TechnoClass *))this->RadioClass + 33))(this); /*0x70bf2a*/
      LOBYTE(result) = health != *(_DWORD *)(result + 160) && health != 0; /*0x70bf3a*/
    }
  }
  else
  {
    LOBYTE(result) = 0; /*0x70bef5*/
  }
  return result; /*0x70bef3*/
}



// ==== 0x0070BF50  BuildingClass::AllocAndCtor  this=TechnoClass  sig=csp ====
int __stdcall BuildingClass_AllocAndCtor(int a1, int a2)
{
  int result; // eax
  int v3; // edi
  int v4; // ebp

  result = RadioClass::LoadState(a1, a2); /*0x70bf5c*/
  if ( result >= 0 ) /*0x70bf65*/
  {
    *(_DWORD *)(a1 + 1300) = 0; /*0x70bf79*/
    ObjectPtr::RegisterForTracking(&SwizzleManagerClass_Instance, a1 + 540); /*0x70bf7f*/
    v3 = a1 + 772; /*0x70bf84*/
    v4 = 8; /*0x70bf8a*/
    do /*0x70bf9e*/
    {
      ObjectPtr::RegisterForTracking(&SwizzleManagerClass_Instance, v3); /*0x70bf95*/
      v3 += 4; /*0x70bf9a*/
      --v4; /*0x70bf9d*/
    }
    while ( v4 ); /*0x70bf9e*/
    ObjectPtr::RegisterForTracking(&SwizzleManagerClass_Instance, a1 + 332); /*0x70bfac*/
    ObjectPtr::RegisterForTracking(&SwizzleManagerClass_Instance, a1 + 740); /*0x70bfbd*/
    ObjectPtr::RegisterForTracking(&SwizzleManagerClass_Instance, a1 + 536); /*0x70bfce*/
    ObjectPtr::RegisterForTracking(&SwizzleManagerClass_Instance, a1 + 1280); /*0x70bfdf*/
    ObjectPtr::RegisterForTracking(&SwizzleManagerClass_Instance, a1 + 692); /*0x70bff0*/
    ObjectPtr::RegisterForTracking(&SwizzleManagerClass_Instance, a1 + 696); /*0x70c001*/
    ObjectPtr::RegisterForTracking(&SwizzleManagerClass_Instance, a1 + 700); /*0x70c012*/
    ObjectPtr::RegisterForTracking(&SwizzleManagerClass_Instance, a1 + 1076); /*0x70c023*/
    ObjectPtr::RegisterForTracking(&SwizzleManagerClass_Instance, a1 + 720); /*0x70c034*/
    ObjectPtr::RegisterForTracking(&SwizzleManagerClass_Instance, a1 + 728); /*0x70c045*/
    ObjectPtr::RegisterForTracking(&SwizzleManagerClass_Instance, a1 + 732); /*0x70c056*/
    ObjectPtr::RegisterForTracking(&SwizzleManagerClass_Instance, a1 + 704); /*0x70c067*/
    ObjectPtr::RegisterForTracking(&SwizzleManagerClass_Instance, a1 + 716); /*0x70c078*/
    ObjectPtr::RegisterForTracking(&SwizzleManagerClass_Instance, a1 + 736); /*0x70c089*/
    ObjectPtr::RegisterForTracking(&SwizzleManagerClass_Instance, a1 + 724); /*0x70c09a*/
    ObjectPtr::RegisterForTracking(&SwizzleManagerClass_Instance, a1 + 1304); /*0x70c0ab*/
    ObjectPtr::RegisterForTracking(&SwizzleManagerClass_Instance, a1 + 1308); /*0x70c0bc*/
    ObjectPtr::RegisterForTracking(&SwizzleManagerClass_Instance, a1 + 628); /*0x70c0cd*/
    ObjectPtr::RegisterForTracking(&SwizzleManagerClass_Instance, a1 + 632); /*0x70c0de*/
    ObjectPtr::RegisterForTracking(&SwizzleManagerClass_Instance, a1 + 660); /*0x70c0ef*/
    ObjectPtr::RegisterForTracking(&SwizzleManagerClass_Instance, a1 + 460); /*0x70c100*/
    ObjectPtr::RegisterForTracking(&SwizzleManagerClass_Instance, a1 + 464); /*0x70c111*/
    ObjectPtr::RegisterForTracking(&SwizzleManagerClass_Instance, a1 + 284); /*0x70c122*/
    ObjectPtr::RegisterForTracking(&SwizzleManagerClass_Instance, a1 + 680); /*0x70c133*/
    ObjectPtr::RegisterForTracking(&SwizzleManagerClass_Instance, a1 + 684); /*0x70c144*/
    ObjectPtr::RegisterForTracking(&SwizzleManagerClass_Instance, a1 + 688); /*0x70c155*/
    ObjectPtr::RegisterForTracking(&SwizzleManagerClass_Instance, a1 + 1064); /*0x70c166*/
    ObjectPtr::RegisterForTracking(&SwizzleManagerClass_Instance, a1 + 1068); /*0x70c177*/
    ObjectPtr::RegisterForTracking(&SwizzleManagerClass_Instance, a1 + 280); /*0x70c188*/
    ObjectPtr::RegisterForTracking(&SwizzleManagerClass_Instance, a1 + 804); /*0x70c199*/
    ObjectPtr::RegisterForTracking(&SwizzleManagerClass_Instance, a1 + 304); /*0x70c1aa*/
    ObjectPtr::RegisterForTracking(&SwizzleManagerClass_Instance, a1 + 300); /*0x70c1bb*/
    ObjectPtr::RegisterForTracking(&SwizzleManagerClass_Instance, a1 + 712); /*0x70c1cc*/
    ObjectPtr::RegisterForTracking(&SwizzleManagerClass_Instance, a1 + 468); /*0x70c1dd*/
    AudioController::Init((_DWORD *)(a1 + 1160)); /*0x70c1e8*/
    *(_DWORD *)(a1 + 1180) = 1; /*0x70c1f3*/
    *(_DWORD *)(a1 + 1184) = 0; /*0x70c1fd*/
    AudioController::Init((_DWORD *)(a1 + 1188)); /*0x70c203*/
    *(_BYTE *)(a1 + 1208) = 0; /*0x70c20e*/
    *(_DWORD *)(a1 + 1212) = 0; /*0x70c214*/
    AudioController::Init((_DWORD *)(a1 + 1216)); /*0x70c21a*/
    *(_BYTE *)(a1 + 1236) = 0; /*0x70c225*/
    *(_DWORD *)(a1 + 1240) = 0; /*0x70c22b*/
    AudioController::Init((_DWORD *)(a1 + 1244)); /*0x70c231*/
    *(_DWORD *)(a1 + 1264) = -1; /*0x70c23a*/
    *(_DWORD *)(a1 + 1268) = -1; /*0x70c240*/
    return 0; /*0x70c246*/
  }
  return result; /*0x70c249*/
}



// ==== 0x0070C250  TechnoClass::GetSizeMax  this=TechnoClass  sig=csp ====
int __stdcall IPersistStream::GetSizeMax(TechnoClass *this, int a2, int a3)
{
  RadioClass::SaveState((RadioClass *)this, (int *)a2, a3); /*0x70c25f*/
  return 0; /*0x70c266*/
}



// ==== 0x0070C270  TechnoClass::PowerBeginUpdate  this=TechnoClass  sig=csp ====
int __thiscall House::PowerBeginUpdate(TechnoClass *this, int a2)
{
  int v3; // edx
  int v4; // eax
  int v5; // edx
  int v6; // eax
  int v7; // edx
  int v8; // edx
  int v9; // eax
  int v10; // edx
  int v11; // eax
  int v12; // edx
  int v13; // eax
  int v14; // ecx
  int v15; // edx
  int v16; // eax
  int v17; // ecx
  int v18; // edx
  int v19; // eax
  int v20; // ecx
  int v21; // edx
  int v22; // eax
  int v23; // ecx
  int v24; // edx
  int v25; // ecx
  int v26; // ebp
  int i; // ebx
  int v28; // eax
  int v29; // ebp
  int result; // eax
  int j; // ebx
  int v32; // eax
  int v33; // [esp-4h] [ebp-14h]
  int v34; // [esp-4h] [ebp-14h]
  Checksummer *v35; // [esp+14h] [ebp+4h]

  RadioClass::PowerDrainUpdate((RadioClass *)this, a2); /*0x70c27b*/
  Power::TimerProcess(this->controlGroup); /*0x70c289*/
  Checksummer::Add_double((Checksummer *)a2, this->armorMultiplier[0], this->armorMultiplier[1]); /*0x70c29e*/
  Checksummer::Add_double((Checksummer *)a2, this->firepowerMultiplier[0], this->firepowerMultiplier[1]); /*0x70c2b3*/
  v3 = this->idleActionTimer[0]; /*0x70c2b8*/
  v4 = this->idleActionTimer[2]; /*0x70c2be*/
  if ( v3 != -1 ) /*0x70c2c7*/
  {
    if ( *(_DWORD *)&stru_A8EB00.?[416] - v3 >= v4 ) /*0x70c2d3*/
      v4 = 0; /*0x70c2d9*/
    else
      v4 -= *(_DWORD *)&stru_A8EB00.?[416] - v3; /*0x70c2d5*/
  }
  Power::TimerProcess(v4); /*0x70c2de*/
  Power::TimerProcess(this->displayProductionTo[0]); /*0x70c2ec*/
  Power::TimerProcess(this->cloakState); /*0x70c2fa*/
  v5 = this->cloakDelayTimer[0]; /*0x70c2ff*/
  v6 = this->cloakDelayTimer[2]; /*0x70c305*/
  if ( v5 != -1 ) /*0x70c30e*/
  {
    if ( *(_DWORD *)&stru_A8EB00.?[416] - v5 >= v6 ) /*0x70c31a*/
      v6 = 0; /*0x70c320*/
    else
      v6 -= *(_DWORD *)&stru_A8EB00.?[416] - v5; /*0x70c31c*/
  }
  Power::TimerProcess(v6); /*0x70c325*/
  Checksummer::Add_float((Checksummer *)a2, LODWORD(this->warpFactor)); /*0x70c333*/
  LOBYTE(v7) = this->isChronosphereImmune; /*0x70c338*/
  Power::FlagProcess((Power *)a2, v7); /*0x70c341*/
  Power::TimerProcess(this->lastSightRange); /*0x70c34f*/
  Checksummer::Add_float((Checksummer *)a2, LODWORD(this->pitchAngle)); /*0x70c35d*/
  v8 = this->diskLaserTimer[0]; /*0x70c362*/
  v9 = this->diskLaserTimer[2]; /*0x70c368*/
  if ( v8 != -1 ) /*0x70c371*/
  {
    if ( *(_DWORD *)&stru_A8EB00.?[416] - v8 >= v9 ) /*0x70c37d*/
      v9 = 0; /*0x70c383*/
    else
      v9 -= *(_DWORD *)&stru_A8EB00.?[416] - v8; /*0x70c37f*/
  }
  Power::TimerProcess(v9); /*0x70c388*/
  Power::TimerProcess(this->ammo); /*0x70c396*/
  v10 = this->reloadTimer[0]; /*0x70c39b*/
  v11 = this->reloadTimer[2]; /*0x70c3a1*/
  if ( v10 != -1 ) /*0x70c3aa*/
  {
    if ( *(_DWORD *)&stru_A8EB00.?[416] - v10 >= v11 ) /*0x70c3b6*/
      v11 = 0; /*0x70c3bc*/
    else
      v11 -= *(_DWORD *)&stru_A8EB00.?[416] - v10; /*0x70c3b8*/
  }
  Power::TimerProcess(v11); /*0x70c3c1*/
  Power::TimerProcess(this->unitValue); /*0x70c3cf*/
  Checksummer::Add_float((Checksummer *)a2, (int)this->railgunParticles_2); /*0x70c3dd*/
  Checksummer::Add_float((Checksummer *)a2, (int)this->auxParticles1); /*0x70c3eb*/
  Checksummer::Add_float((Checksummer *)a2, (int)this->auxParticles2); /*0x70c3f9*/
  Checksummer::Add_float((Checksummer *)a2, (int)this->firingParticles); /*0x70c407*/
  LOBYTE(v12) = this->isSinking; /*0x70c40c*/
  v13 = Power::FlagProcess((Power *)a2, v12); /*0x70c415*/
  LOBYTE(v13) = this->isReceivingDamageEffect; /*0x70c41a*/
  Power::FlagProcess((Power *)a2, v13); /*0x70c423*/
  LOBYTE(v14) = this->isUseless; /*0x70c428*/
  Power::FlagProcess((Power *)a2, v14); /*0x70c431*/
  LOBYTE(v15) = this->hasBeenAttacked; /*0x70c436*/
  v16 = Power::FlagProcess((Power *)a2, v15); /*0x70c43f*/
  LOBYTE(v16) = this->isCloakableFlag; /*0x70c444*/
  Power::FlagProcess((Power *)a2, v16); /*0x70c44d*/
  LOBYTE(v17) = this->isPrimaryFactory; /*0x70c452*/
  Power::FlagProcess((Power *)a2, v17); /*0x70c45b*/
  LOBYTE(v18) = this->isALoaner; /*0x70c460*/
  v19 = Power::FlagProcess((Power *)a2, v18); /*0x70c469*/
  LOBYTE(v19) = this->isInPlayfield; /*0x70c46e*/
  Power::FlagProcess((Power *)a2, v19); /*0x70c477*/
  LOBYTE(v20) = this->isTether; /*0x70c47c*/
  Power::FlagProcess((Power *)a2, v20); /*0x70c485*/
  LOBYTE(v21) = this->isAlternativeTether; /*0x70c48a*/
  Power::FlagProcess((Power *)a2, v21); /*0x70c493*/
  v22 = *(_DWORD *)&dword_A8B238; /*0x70c498*/
  if ( !*(_DWORD *)&dword_A8B238 || *(_DWORD *)&dword_A8B238 == 5 ) /*0x70c4a4*/
  {
    LOBYTE(v22) = this->isOwnedByCurrentPlayer; /*0x70c4a6*/
    Power::FlagProcess((Power *)a2, v22); /*0x70c4af*/
    LOBYTE(v23) = this->isDiscoveredByCurrentPlayer; /*0x70c4b4*/
    Power::FlagProcess((Power *)a2, v23); /*0x70c4bd*/
    LOBYTE(v24) = this->isDiscoveredByComputer; /*0x70c4c2*/
    v22 = Power::FlagProcess((Power *)a2, v24); /*0x70c4cb*/
  }
  LOBYTE(v22) = this->isSelectedByPlayer; /*0x70c4d0*/
  Power::FlagProcess((Power *)a2, v22); /*0x70c4d9*/
  Power::TimerProcess(this->empLockRemaining); /*0x70c4e7*/
  Power::TimerProcess((unsigned __int8)this->isUnderCursor); /*0x70c4f7*/
  Power::TimerProcess((unsigned __int8)this->isCommandLineTarget); /*0x70c507*/
  LOBYTE(v25) = this->sightRangeBonus; /*0x70c50c*/
  Power::FinalizeDrain((Power *)a2, v25); /*0x70c515*/
  v26 = this->currentTargets[4]; /*0x70c51a*/
  Power::TimerProcess(v26); /*0x70c523*/
  for ( i = 0; i < v26; ++i ) /*0x70c52c*/
  {
    v35 = *(Checksummer **)(this->currentTargetThreatValues[1] + 4 * i); /*0x70c543*/
    v33 = *(_DWORD *)(this->currentTargets[1] + 4 * i) + 4; /*0x70c547*/
    v28 = (*(int (__stdcall **)(int))(*(_DWORD *)v33 + 16))(v33); /*0x70c54a*/
    Power::TimerProcess(v28); /*0x70c550*/
    Power::TimerProcess((int)v35); /*0x70c55c*/
  }
  v29 = this->attackedTargets[4]; /*0x70c566*/
  result = Power::TimerProcess(v29); /*0x70c56f*/
  for ( j = 0; j < v29; ++j ) /*0x70c578*/
  {
    v34 = *(_DWORD *)(this->attackedTargets[1] + 4 * j) + 4; /*0x70c586*/
    v32 = (*(int (__stdcall **)(int))(*(_DWORD *)v34 + 16))(v34); /*0x70c589*/
    result = Power::TimerProcess(v32); /*0x70c58f*/
  }
  return result; /*0x70c599*/
}



// ==== 0x0070C5A0  TechnoClass::CheckCellPassability  this=TechnoClass  sig=csp ====
int __thiscall BuildingClass::CheckCellPassability(TechnoClass *this)
{
  int result; // eax

  LOBYTE(result) = this->isCloakableFlag != 0; /*0x70c5a8*/
  return result; /*0x70c5ab*/
}



// ==== 0x0070C5B0  ObjectClass::GetShroudByte  this=TechnoClass  sig=csp ====
int __thiscall ObjectClass::GetShroudByte(TechnoClass *this)
{
  int result; // eax

  LOBYTE(result) = this->isBeingWarpedOut[0]; /*0x70c5b0*/
  return result; /*0x70c5b6*/
}



// ==== 0x0070C5C0  ObjectClass::GetFogByte  this=TechnoClass  sig=csp ====
int __thiscall ObjectClass::GetFogByte(TechnoClass *this)
{
  int result; // eax

  LOBYTE(result) = this->isWarpingOut[0]; /*0x70c5c0*/
  return result; /*0x70c5c6*/
}



// ==== 0x0070C5D0  ObjectClass::HasSubObject  this=TechnoClass  sig=csp ====
int __thiscall ObjectClass::HasSubObject(TechnoClass *this)
{
  int result; // eax

  result = this->temporalUsing; /*0x70c5d0*/
  LOBYTE(result) = result && *(_DWORD *)(result + 40); /*0x70c5e1*/
  return result; /*0x70c5e3*/
}



// ==== 0x0070C5F0  ObjectClass::IsNotShrouded  this=TechnoClass  sig=csp ====
int __thiscall ObjectClass::IsNotShrouded(TechnoClass *this)
{
  int result; // eax

  LOBYTE(result) = !this->isBeingWarpedOut[0] && !this->isWarpingOut[0]; /*0x70c607*/
  return result; /*0x70c606*/
}



// ==== 0x0070C610  TechnoClass::SetFocus  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::SetFocus(TechnoClass *this, int a2)
{
  this->focus = (AbstractClass *)a2; /*0x70c614*/
  return a2; /*0x70c61a*/
}



// ==== 0x0070C620  TechnoClass::CheckCliffTransition  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::CheckCliffTransition(TechnoClass *this)
{
  int v2; // edi
  int (__thiscall **vtable0)(TechnoClass *, _BYTE *); // eax
  _DWORD *v4; // eax
  int v6; // [esp+8h] [ebp-14h] BYREF
  _BYTE v7[4]; // [esp+Ch] [ebp-10h] BYREF
  _DWORD v8[3]; // [esp+10h] [ebp-Ch] BYREF

  v8[0] = this->?[0]; /*0x70c633*/
  v8[1] = this->?[1]; /*0x70c645*/
  v8[2] = this->?[2]; /*0x70c651*/
  v2 = *Terrain::ClimbCheck(&v6, v8); /*0x70c65a*/
  vtable0 = (int (__thiscall **)(TechnoClass *, _BYTE *))this->RadioClass; /*0x70c65c*/
  v6 = v2; /*0x70c662*/
  v4 = (_DWORD *)vtable0[110](this, v7); /*0x70c669*/
  return __PAIR32__(HIWORD(v6), v2) != *v4; /*0x70c672*/
}



// ==== 0x0070C690  Weapon::DestroyTerrain  this=Weapon  sig=csp ====
int *__thiscall Weapon::DestroyTerrain(Weapon *this, int *a2, int *a3, int *a4, int a5)
{
  int *v5; // eax
  float v7; // edx
  int v8; // eax
  int v9; // eax
  int v10; // edx
  int v11; // eax
  int *v12; // eax
  _DWORD *v13; // eax
  int v14; // esi
  int v15; // edx
  int v16; // eax
  int ObjectVector_field_0x10; // eax
  int v20; // ecx
  _DWORD *ObjectVector_field_0x04; // edx
  int GroundHeight; // eax
  int v23; // eax
  int v24; // ecx
  int **v25; // edx
  CellClass *v26; // eax
  int v27; // esi
  CellClass *v28; // eax
  int v29; // edx
  int v30; // edx
  int v31; // ecx
  int v33; // esi
  int v34; // esi
  int v35; // edx
  int v36; // edx
  int v37; // ecx
  double v38; // [esp+14h] [ebp-C8h]
  float v39; // [esp+18h] [ebp-C4h]
  char v40; // [esp+2Bh] [ebp-B1h]
  int v41; // [esp+2Ch] [ebp-B0h]
  int v42; // [esp+2Ch] [ebp-B0h]
  ObjectVector v43; // [esp+30h] [ebp-ACh] BYREF
  int v44; // [esp+48h] [ebp-94h]
  __int16 v48[2]; // [esp+58h] [ebp-84h] BYREF
  int v49; // [esp+5Ch] [ebp-80h] BYREF
  int v50; // [esp+60h] [ebp-7Ch]
  int v51; // [esp+64h] [ebp-78h]
  int v52; // [esp+68h] [ebp-74h] BYREF
  int v53; // [esp+6Ch] [ebp-70h]
  int v54; // [esp+70h] [ebp-6Ch]
  int v55; // [esp+74h] [ebp-68h] BYREF
  int v56; // [esp+78h] [ebp-64h]
  int v57; // [esp+7Ch] [ebp-60h]
  Weapon *v64; // [esp+98h] [ebp-44h]
  int v65; // [esp+9Ch] [ebp-40h]
  int v66; // [esp+A0h] [ebp-3Ch]
  int v67; // [esp+A4h] [ebp-38h]
  float v68; // [esp+A8h] [ebp-34h] BYREF
  Color v74[3]; // [esp+D0h] [ebp-Ch] BYREF

  v64 = this; /*0x70c6a0*/
  v5 = (int *)(*(int (__thiscall **)(int *, float *))(*a4 + 72))(a4, &v68); /*0x70c6b2*/
  v55 = *v5; /*0x70c6ba*/
  v56 = v5[1]; /*0x70c6c4*/
  _ECX = a3; /*0x70c6c8*/
  v7 = *((float *)v5 + 2); /*0x70c6ca*/
  v8 = *a3; /*0x70c6cd*/
  v57 = LODWORD(v7); /*0x70c6cf*/
  v44 = v8; /*0x70c6d3*/
  __asm { fild [esp+0C4h+var_94] } /*0x70c6d7*/
  v40 = 0; /*0x70c6e5*/
  LOWORD(v41) = v8 / 256; /*0x70c6ed*/
  v9 = a3[1]; /*0x70c6f2*/
  __asm { fstp [esp+0C8h+var_50] } /*0x70c6f5*/
  v54 = v9; /*0x70c6f9*/
  __asm { fild [esp+0C8h+var_6C] } /*0x70c6fd*/
  __asm
  {
    fstp [esp+0C8h+var_4C]
    fild dword ptr [edi+8]
  }
  v10 = *a3; /*0x70c711*/
  __asm /*0x70c713*/
  {
    fstp [esp+0C8h+var_48]
    fild [esp+0C8h+var_68]
    fild [esp+0C8h+var_64]
  }
  HIWORD(v41) = v9 / 256; /*0x70c725*/
  __asm /*0x70c72e*/
  {
    fstp [esp+0C8h+var_58]
    fild [esp+0C8h+var_60]
  }
  *(_DWORD *)v48 = v41; /*0x70c736*/
  v11 = a3[1]; /*0x70c73a*/
  v49 = v10; /*0x70c73d*/
  v50 = v11; /*0x70c741*/
  __asm { fstp [esp+0C8h+var_54] } /*0x70c745*/
  __asm { fsub [esp+0C8h+var_50] }
  v51 = a3[2]; /*0x70c750*/
  __asm /*0x70c758*/
  {
    fstp [esp+0C8h+var_90]
    fld [esp+0C8h+var_58]
    fsub [esp+0C8h+var_4C]
    fstp [esp+0C8h+var_8C]
    fld [esp+0C8h+var_54]
    fsub [esp+0C8h+var_48]
    fstp [esp+0C8h+var_88]
  }
  ObjectVector::Construct(&v43, 0, 0); /*0x70c777*/
  *(_DWORD *)v43.__pad_0 = &DynamicVectorClass<ObjectClass *>::`vftable'; /*0x70c77c*/
  v43.ObjectVector_field_0x14 = 10; /*0x70c784*/
  v43.ObjectVector_field_0x10 = 0; /*0x70c78c*/
  v42 = 0; /*0x70c790*/
  while ( 1 ) /*0x70c794*/
  {
    __asm { fild [esp+0C0h+var_B0] } /*0x70c794*/
    __asm
    {
      fmul ds:flt_7F4E88
      fstp [esp+0C4h+var_C4]; float
    }
    v12 = Color::RGBFromFloat(v74, (int)&v55, v39); /*0x70c7b0*/
    v49 = *v12; /*0x70c7b9*/
    v50 = v12[1]; /*0x70c7c0*/
    v51 = v12[2]; /*0x70c7c7*/
    if ( __PAIR32__(v50 / 256, v49 / 256) != *(_DWORD *)v48 ) /*0x70c7ec*/
    {
      LOWORD(v44) = v49 / 256; /*0x70c7f9*/
      HIWORD(v44) = v50 / 256; /*0x70c802*/
      *(_DWORD *)v48 = v44; /*0x70c811*/
      v13 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v48); /*0x70c815*/
      if ( (v13[80] & 0x100) != 0 && v51 >= g_BuildingLoadQueue_Array.?[1] * (*((char *)v13 + 283) + 4) ) /*0x70c83c*/
        v14 = v13[58]; /*0x70c83e*/
      else
        v14 = v13[57]; /*0x70c846*/
      while ( v14 ) /*0x70c84e*/
      {
        if ( (Weapon *)v14 == v64 ) /*0x70c858*/
          goto LABEL_31; /*0x70c858*/
        if ( (int *)v14 == a4 ) /*0x70c860*/
          v40 = 1; /*0x70c862*/
        HIBYTE(v53) = *(_BYTE *)(v14 + 20) & 1; /*0x70c874*/
        if ( !HIBYTE(v53) ) /*0x70c878*/
          goto LABEL_31; /*0x70c878*/
        v15 = *(_DWORD *)v14; /*0x70c87e*/
        v52 = 0; /*0x70c882*/
        if ( (*(int (__thiscall **)(int))(v15 + 44))(v14) == 6 ) /*0x70c890*/
        {
          __asm { fld [esp+0C0h+var_74] } /*0x70c9d3*/
        }
        else
        {
          v65 = *(_DWORD *)(v14 + 156); /*0x70c8a2*/
          __asm { fild [esp+0C0h+var_40] } /*0x70c8ac*/
          v16 = *(_DWORD *)(v14 + 164); /*0x70c8b3*/
          v66 = *(_DWORD *)(v14 + 160); /*0x70c8b6*/
          __asm { fild [esp+0C0h+var_3C] } /*0x70c8bd*/
          v67 = v16; /*0x70c8c4*/
          __asm /*0x70c8cb*/
          {
            fstp [esp+0C0h+var_30]
            fild [esp+0C0h+var_38]
            fstp dword ptr [esp+0C0h+var_2C]
            fsub [esp+0C0h+var_50]
            fld [esp+0C0h+var_30]
            fsub [esp+0C0h+var_4C]
            fld dword ptr [esp+0C0h+var_2C]
            fsub [esp+0C0h+var_48]
            fld st(1)
            fmul [esp+0C0h+var_88]
            fld st(1)
            fmul [esp+0C0h+var_8C]
            fsubp st(1), st
            fld st(1)
            fmul [esp+0C0h+var_90]
            fld [esp+0C0h+var_88]
            fmul st, st(5)
            fsubp st(1), st
            fld [esp+0C0h+var_8C]
            fmul st, st(5)
            fld st(4)
            fmul [esp+0C0h+var_90]
            fsubp st(1), st
            fld st(1)
            fmul [esp+0C0h+var_88]
            fld st(1)
            fmul [esp+0C0h+var_8C]
            fsubp st(1), st
            fstp [esp+0C0h+var_5C]
            fmul [esp+0C0h+var_90]
            fld [esp+0C0h+var_88]
            fmul st, st(3)
            fsubp st(1), st
            fstp [esp+0C0h+var_58]
            fld [esp+0C0h+var_8C]
            fmulp st(2), st
            fld st
            fmul [esp+0C0h+var_90]
            fsubp st(2), st
            fstp st
            fld [esp+0C0h+var_58]
            fstp [esp+0C0h+var_24+4]
            fst [esp+0C0h+var_2C+4]
            fld [esp+0C0h+var_5C]
            fstp [esp+0C0h+var_1C+4]
            fmul st, st(1)
            fld [esp+0C0h+var_58]
            fmul st, st(3)
            faddp st(1), st
            fld [esp+0C0h+var_5C]
            fmul st, st(4)
            faddp st(1), st
            fstp [esp+0C0h+var_6C]
            fstp st
            fstp st
            fstp st
            fld [esp+0C0h+var_1C+4]
            fmul [esp+0C0h+var_1C+4]
            fld [esp+0C0h+var_2C+4]
            fmul [esp+0C0h+var_2C+4]
            faddp st(1), st
            fld [esp+0C0h+var_24+4]
            fmul [esp+0C0h+var_24+4]
          }
          __asm
          {
            faddp st(1), st
            fstp [esp+0C8h+var_CC+4]; double
          }
          Math::Sqrt(v38); /*0x70c9c3*/
          __asm { fdivr [esp+0C8h+var_6C] } /*0x70c9c8*/
          __asm { fabs }
        }
        _ECX = *(_DWORD *)&DSurface_ViewBounds.__pad_FC[324]; /*0x70c9d7*/
        __asm /*0x70c9dd*/
        {
          fild dword ptr [ecx+494h]
          fxch st(1)
          fcompp
          fnstsw ax
        }
        if ( (_AX & 0x100) == 0 && (int *)v14 != a4 ) /*0x70c9f0*/
          goto LABEL_31; /*0x70c9f0*/
        ObjectVector_field_0x10 = v43.ObjectVector_field_0x10; /*0x70c9f2*/
        if ( v43.ObjectVector_field_0x10 ) /*0x70c9f8*/
        {
          v20 = 0; /*0x70c9fa*/
          if ( v43.ObjectVector_field_0x10 > 0 ) /*0x70c9fe*/
          {
            ObjectVector_field_0x04 = (_DWORD *)v43.ObjectVector_field_0x04; /*0x70ca00*/
            while ( *ObjectVector_field_0x04 != v14 ) /*0x70ca06*/
            {
              ++v20; /*0x70ca08*/
              ++ObjectVector_field_0x04; /*0x70ca09*/
              if ( v20 >= v43.ObjectVector_field_0x10 ) /*0x70ca0e*/
                goto LABEL_24; /*0x70ca0e*/
            }
            if ( v20 != -1 ) /*0x70ca15*/
              goto LABEL_31; /*0x70ca15*/
          }
        }
LABEL_24:
        if ( v43.ObjectVector_field_0x10 >= v43.ObjectVector_field_0x08 ) /*0x70ca1d*/
        {
          if ( !BYTE1(v43.ObjectVector_field_0x0C) && v43.ObjectVector_field_0x08 /*0x70ca40*/
            || v43.ObjectVector_field_0x14 <= 0
            || !(*(unsigned __int8 (__thiscall **)(ObjectVector *, int, _DWORD))(*(_DWORD *)v43.__pad_0 + 8))(
                  &v43,
                  v43.ObjectVector_field_0x14 + v43.ObjectVector_field_0x08,
                  0) )
          {
            goto LABEL_31; /*0x70ca45*/
          }
          ObjectVector_field_0x10 = v43.ObjectVector_field_0x10; /*0x70ca47*/
        }
        v43.ObjectVector_field_0x10 = ObjectVector_field_0x10 + 1; /*0x70ca4e*/
        *(_DWORD *)(v43.ObjectVector_field_0x04 + 4 * ObjectVector_field_0x10) = v14; /*0x70ca56*/
LABEL_31:
        v14 = *(_DWORD *)(v14 + 48); /*0x70ca59*/
      }
      GroundHeight = Cell::GetGroundHeight(&v49); /*0x70ca6e*/
      if ( GroundHeight > v51 ) /*0x70ca77*/
        break; /*0x70ca77*/
    }
    if ( ++v42 >= 50 ) /*0x70ca85*/
    {
      if ( v40 || !a4 || (a4[5] & 2) == 0 ) /*0x70caa3*/
        goto LABEL_55; /*0x70caa3*/
      v23 = v43.ObjectVector_field_0x10; /*0x70caa9*/
      if ( !v43.ObjectVector_field_0x10 ) /*0x70caaf*/
        goto LABEL_48; /*0x70caaf*/
      v24 = 0; /*0x70cab5*/
      if ( v43.ObjectVector_field_0x10 <= 0 ) /*0x70cab9*/
        goto LABEL_48; /*0x70cab9*/
      v25 = (int **)v43.ObjectVector_field_0x04; /*0x70cabf*/
      while ( *v25 != a4 ) /*0x70cac5*/
      {
        ++v24; /*0x70cacb*/
        ++v25; /*0x70cacc*/
        if ( v24 >= v43.ObjectVector_field_0x10 ) /*0x70cad1*/
          goto LABEL_48; /*0x70cad1*/
      }
      if ( v24 == -1 ) /*0x70cb68*/
      {
LABEL_48:
        if ( v43.ObjectVector_field_0x10 < v43.ObjectVector_field_0x08 ) /*0x70cb70*/
          goto LABEL_54; /*0x70cb70*/
        if ( (BYTE1(v43.ObjectVector_field_0x0C) || !v43.ObjectVector_field_0x08) && v43.ObjectVector_field_0x14 > 0 ) /*0x70cb84*/
        {
          if ( (*(unsigned __int8 (__thiscall **)(ObjectVector *, int, _DWORD))(*(_DWORD *)v43.__pad_0 + 8))( /*0x70cb93*/
                 &v43,
                 v43.ObjectVector_field_0x14 + v43.ObjectVector_field_0x08,
                 0) )
          {
            v23 = v43.ObjectVector_field_0x10; /*0x70cb9a*/
LABEL_54:
            v43.ObjectVector_field_0x10 = v23 + 1; /*0x70cb9e*/
            *(_DWORD *)(v43.ObjectVector_field_0x04 + 4 * v23) = a4; /*0x70cba9*/
          }
LABEL_55:
          v23 = v43.ObjectVector_field_0x10; /*0x70cbac*/
        }
      }
      v33 = 0; /*0x70cbb0*/
      if ( v23 > 0 ) /*0x70cbb4*/
      {
        do /*0x70cbf5*/
        {
          v52 = *(_DWORD *)(a5 + 152); /*0x70cbc3*/
          (*(void (__thiscall **)(_DWORD, int *, _DWORD, _DWORD, Weapon *, _DWORD, _DWORD, _DWORD))(**(_DWORD **)(v43.ObjectVector_field_0x04 + 4 * v33) /*0x70cbe8*/
                                                                                                  + 364))(
            *(_DWORD *)(v43.ObjectVector_field_0x04 + 4 * v33),
            &v52,
            0,
            *(_DWORD *)(a5 + 172),
            v64,
            0,
            0,
            0);
          ++v33; /*0x70cbf2*/
        }
        while ( v33 < v43.ObjectVector_field_0x10 ); /*0x70cbf5*/
      }
      if ( (*(int (__thiscall **)(int *))(*a4 + 44))(a4) == 11 ) /*0x70cc01*/
      {
        if ( (unsigned __int8)CellClass::IsActiveOrNext((CellClass *)a4) ) /*0x70cc05*/
        {
          v34 = *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 6092); /*0x70cc1e*/
          if ( Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, 99) < v34 ) /*0x70cc31*/
            LayerClass::DestroyCliff((int *)&stru_87F5F0.__pad_58[416], v35, (int)a4); /*0x70cc39*/
        }
      }
      v36 = v56; /*0x70cc45*/
      *(_DWORD *)v43.__pad_0 = &VectorClass<ObjectClass *>::`vftable'; /*0x70cc4b*/
      *a2 = v55; /*0x70cc53*/
      v37 = v57; /*0x70cc55*/
      a2[1] = v36; /*0x70cc59*/
      a2[2] = v37; /*0x70cc5c*/
      if ( v43.ObjectVector_field_0x04 ) /*0x70cc65*/
      {
        if ( BYTE1(v43.ObjectVector_field_0x0C) ) /*0x70cc6d*/
          __3_YAXPAX_Z((void *)v43.ObjectVector_field_0x04); /*0x70cc70*/
      }
      return a2; /*0x70cc78*/
    }
  }
  v26 = Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], &v49); /*0x70cae2*/
  if ( (unsigned __int8)CellClass::IsActiveOrNext(v26) ) /*0x70cae9*/
  {
    v27 = *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 6092); /*0x70cb01*/
    if ( Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, 99) < v27 ) /*0x70cb14*/
    {
      v28 = Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], &v49); /*0x70cb20*/
      LayerClass::DestroyCliff((int *)&stru_87F5F0.__pad_58[416], v29, (int)v28); /*0x70cb2b*/
    }
  }
  v30 = v50; /*0x70cb37*/
  *(_DWORD *)v43.__pad_0 = &VectorClass<ObjectClass *>::`vftable'; /*0x70cb3d*/
  *a2 = v49; /*0x70cb45*/
  v31 = v51; /*0x70cb47*/
  a2[1] = v30; /*0x70cb4b*/
  a2[2] = v31; /*0x70cb4e*/
  ObjectVector::ddtor((_VectorClass_PAVObjectClass *)&v43); /*0x70cb55*/
  return a2; /*0x70cb5c*/
}



// ==== 0x0070CC90  TechnoClass::RadarUpdateOn  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::RadarUpdateOn(TechnoClass *this)
{
  int result; // eax

  BuildingClass::ProcessFogCellOccupancy( /*0x70cca7*/
    (int)&stru_87F5F0.__pad_58[416],
    (int)this,
    this->currentBurstCount,
    this->currentBarrelIndex);
  this->isRadarTracked = 1; /*0x70ccac*/
  return result; /*0x70ccb3*/
}



// ==== 0x0070CCC0  TechnoClass::RadarUpdateOff  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::RadarUpdateOff(TechnoClass *this)
{
  int result; // eax

  BuildingClass::RemoveGapCellCoverage( /*0x70ccd7*/
    (int)&stru_87F5F0.__pad_58[416],
    (int)this,
    this->currentBurstCount,
    this->currentBarrelIndex);
  this->isRadarTracked = 0; /*0x70ccdc*/
  return result; /*0x70cce3*/
}



// ==== 0x0070CCF0  TechnoClass::RevealOwnCell  this=TechnoClass  sig=csp ====
void __thiscall TechnoClass::RevealOwnCell(TechnoClass *this)
{
  FogOfWar::RevealCell((int)&stru_87F5F0.__pad_58[416], &this->currentBurstCount); /*0x70ccfc*/
}



// ==== 0x0070CD10  TechnoClass::ComputeDamage  this=TechnoClass  sig=csp ====
double __thiscall TechnoClass::ComputeDamage(TechnoClass *this, int *a2, _DWORD *a3)
{
  double v3; // st7
  _DWORD *v5; // ebx
  int v7; // edx
  unsigned int v8; // eax
  unsigned int v9; // ecx
  int v10; // eax
  unsigned int v11; // ecx
  unsigned int v12; // edx
  unsigned int v13; // eax
  int v14; // ecx
  int v15; // edx
  int v16; // ecx
  unsigned int v17; // edx
  unsigned int v18; // eax
  int v19; // eax
  int v20; // eax
  int v21; // eax
  int v22; // eax
  int v23; // eax
  double v24; // st6
  int enemyHouseIndex; // eax
  double v26; // st7
  int v27; // eax
  _DWORD *v28; // eax
  int v29; // edi
  int v30; // esi
  int v31; // ecx
  int v32; // edx
  int v33; // eax
  _DWORD *v34; // esi
  int *v35; // eax
  int v36; // ecx
  int v37; // edx
  int v38; // edi
  int v39; // eax
  int v40; // eax
  int v41; // eax
  int v42; // [esp+2Ch] [ebp-4Ch]
  int v43; // [esp+2Ch] [ebp-4Ch]
  double v44; // [esp+30h] [ebp-48h]
  double v45; // [esp+38h] [ebp-40h]
  double v46; // [esp+40h] [ebp-38h] BYREF
  double v47[2]; // [esp+50h] [ebp-28h] BYREF
  double v48; // [esp+60h] [ebp-18h]
  int v49; // [esp+68h] [ebp-10h]
  double v50; // [esp+70h] [ebp-8h]

  v5 = (_DWORD *)(*((int (__thiscall **)(TechnoClass *))this->RadioClass + 33))(this); /*0x70cd29*/
  if ( !(*(int (__thiscall **)(int *))(*a2 + 136))(a2) ) /*0x70cd2f*/
    return 0.0; /*0x70cd39*/
  if ( this->owner->hasThreatNode ) /*0x70cd4e*/
  {
    v7 = v5[179]; /*0x70cd5e*/
    v8 = v5[180]; /*0x70cd64*/
    LODWORD(v47[0]) = v5[178]; /*0x70cd6a*/
    v9 = v5[181]; /*0x70cd6e*/
    HIDWORD(v47[0]) = v7; /*0x70cd74*/
    v45 = COERCE_DOUBLE(__PAIR64__(v9, v8)); /*0x70cd7e*/
    v10 = v5[183]; /*0x70cd82*/
    v11 = v5[184]; /*0x70cd8c*/
    LODWORD(v46) = v5[182]; /*0x70cd92*/
    v12 = v5[185]; /*0x70cd96*/
    HIDWORD(v46) = v10; /*0x70cd9c*/
    v13 = v5[186]; /*0x70cda0*/
    v48 = COERCE_DOUBLE(__PAIR64__(v12, v11)); /*0x70cda6*/
    v50 = COERCE_DOUBLE(__PAIR64__(v5[187], v13)); /*0x70cdb4*/
  }
  else
  {
    v14 = *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 4204); /*0x70cdc9*/
    LODWORD(v47[0]) = *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 4200); /*0x70cdcf*/
    v15 = *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 4208); /*0x70cdd3*/
    HIDWORD(v47[0]) = v14; /*0x70cdd9*/
    LODWORD(v45) = v15; /*0x70cde3*/
    HIDWORD(v45) = *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 4212); /*0x70cded*/
    v46 = *(double *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 4216); /*0x70cdf7*/
    v16 = *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 4228); /*0x70ce05*/
    LODWORD(v48) = *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 4224); /*0x70ce0b*/
    v17 = *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 4232); /*0x70ce0f*/
    v18 = *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 4236); /*0x70ce15*/
    HIDWORD(v48) = v16; /*0x70ce1b*/
    v50 = COERCE_DOUBLE(__PAIR64__(v18, v17)); /*0x70ce1f*/
  }
  v19 = (*((int (__thiscall **)(TechnoClass *, int *))this->RadioClass + 185))(this, a2); /*0x70ce2c*/
  v42 = *(_DWORD *)(*((int (__thiscall **)(TechnoClass *, int))this->RadioClass + 254))(this, v19); /*0x70ce43*/
  v44 = 0.0; /*0x70ce47*/
  v20 = (*(int (__thiscall **)(int *))(*a2 + 44))(a2); /*0x70ce57*/
  if ( (v20 == 6 || v20 == 15 || v20 == 1 || v20 == 2) && a2 ) /*0x70ce74*/
  {
    v21 = (*(int (__usercall **)@<eax>(int *@<ecx>, TechnoClass *))(*a2 + 740))(a2, this); /*0x70ce7f*/
    v22 = *(_DWORD *)(*(int (__thiscall **)(int *, int))(*a2 + 1016))(a2, v21); /*0x70ce90*/
    if ( v22 ) /*0x70ce94*/
    {
      v23 = *(_DWORD *)(v22 + 172); /*0x70ce96*/
      if ( v23 ) /*0x70ce9e*/
      {
        if ( (TechnoClass *)a2[173] == this ) /*0x70cea6*/
          v3 = -(v45 * *(double *)(v23 + 8 * v5[39] + 160)); /*0x70ceb9*/
        else
          v3 = v45 * *(double *)(v23 + 8 * v5[39] + 160); /*0x70cec7*/
        v44 = v3; /*0x70cece*/
      }
    }
    v24 = v46 * *(double *)((*(int (__thiscall **)(int *))(*a2 + 132))(a2) + 704) + v44; /*0x70ceec*/
    enemyHouseIndex = this->owner->enemyHouseIndex; /*0x70cef0*/
    v44 = v24; /*0x70cef9*/
    if ( enemyHouseIndex != -1 && enemyHouseIndex == *(_DWORD *)(a2[135] + 48) ) /*0x70cf08*/
      v44 = v24 + *(double *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 4240); /*0x70cf19*/
  }
  if ( v42 && *(_DWORD *)(v42 + 172) ) /*0x70cf25*/
    v44 = v47[0] /*0x70cf54*/
        * *(double *)(*(_DWORD *)(v42 + 172)
                    + 8 * *(_DWORD *)((*(int (__thiscall **)(int *))(*a2 + 136))(a2) + 156)
                    + 160)
        + v44;
  BuildingClass::GetHealthRatio((BuildingClass *)a2); /*0x70cf5a*/
  v26 = v3 * v48 + v44; /*0x70cf65*/
  if ( v42 ) /*0x70cf6d*/
    v27 = *(_DWORD *)(v42 + 180); /*0x70cf6f*/
  else
    v27 = *(_DWORD *)((*((int (__thiscall **)(TechnoClass *))this->RadioClass + 33))(this) + 1464); /*0x70cf81*/
  v43 = v27 / 256; /*0x70cf9c*/
  if ( *a3 == g_BuildingLoadQueue_Array.?[3] /*0x70cfbc*/
    && a3[1] == g_BuildingLoadQueue_Array.?[4]
    && a3[2] == g_BuildingLoadQueue_Array.?[5] )
  {
    v34 = (_DWORD *)(*(int (__thiscall **)(int *, double *))(*a2 + 72))(a2, v47); /*0x70d031*/
    v35 = (int *)(*((int (__thiscall **)(TechnoClass *, double *))this->RadioClass + 18))(this, &v46); /*0x70d03a*/
    v36 = *v35; /*0x70d03d*/
    v37 = v35[1]; /*0x70d041*/
    v38 = v34[1]; /*0x70d044*/
    v39 = v35[2]; /*0x70d047*/
    LODWORD(v48) = v36 - *v34; /*0x70d04c*/
    v40 = v39 - v34[2]; /*0x70d055*/
    HIDWORD(v48) = v37 - v38; /*0x70d057*/
    v49 = v40; /*0x70d05b*/
    Math::Sqrt( /*0x70d087*/
      (double)SLODWORD(v48) * (double)SLODWORD(v48)
    + (double)v40 * (double)v40
    + (double)(v37 - v38) * (double)(v37 - v38));
    LOWORD(v41) = Math::RoundToInt(v26); /*0x70d08f*/
    v33 = v41 / 256; /*0x70d09d*/
  }
  else
  {
    v28 = (_DWORD *)(*(int (__thiscall **)(int *, double *))(*a2 + 72))(a2, v47); /*0x70cfc7*/
    v29 = v28[1]; /*0x70cfce*/
    v30 = v28[2]; /*0x70cfd1*/
    v31 = a3[1]; /*0x70cfd6*/
    LODWORD(v48) = *a3 - *v28; /*0x70cfd9*/
    v32 = a3[2] - v30; /*0x70cfe2*/
    HIDWORD(v48) = v31 - v29; /*0x70cfe4*/
    v49 = v32; /*0x70cfe8*/
    Math::Sqrt( /*0x70d014*/
      (double)SLODWORD(v48) * (double)SLODWORD(v48)
    + (double)v32 * (double)v32
    + (double)(v31 - v29) * (double)(v31 - v29));
    LOWORD(v33) = Math::RoundToInt(v26); /*0x70d01c*/
  }
  return (double)((v33 - v43) & ((v33 - v43 < 0) - 1)) * v50 + v26 + 100000.0; /*0x70cd3f*/
}



// ==== 0x0070D0D0  TechnoTypeClass::HasVoiceResponse  this=IUnknown  sig=csp ====
int __thiscall TechnoTypeClass::HasVoiceResponse(int *this, int a2)
{
  int *v3; // edi
  int result; // eax
  int v5; // esi

  v3 = this + 84; /*0x70d0d5*/
  if ( !(unsigned __int8)Audio::IsMediumVolume(this + 84) ) /*0x70d0dd*/
  {
    result = Audio::IsLoud(v3); /*0x70d0e8*/
    if ( !(_BYTE)result ) /*0x70d0ef*/
      goto LABEL_10; /*0x70d0ef*/
  }
  v5 = (*(int (__thiscall **)(int *))(*this + 132))(this); /*0x70d0fd*/
  result = Audio::IsMediumVolume(v3); /*0x70d0ff*/
  if ( (_BYTE)result && *(_BYTE *)(v5 + a2 + 668) ) /*0x70d10c*/
  {
    LOBYTE(result) = 1; /*0x70d119*/
    return result; /*0x70d11c*/
  }
  result = Audio::IsLoud(v3); /*0x70d121*/
  if ( (_BYTE)result && (*(_BYTE *)(v5 + a2 + 668) || *(_BYTE *)(v5 + a2 + 686)) ) /*0x70d135*/
    LOBYTE(result) = 1; /*0x70d142*/
  else
LABEL_10:
    LOBYTE(result) = 0; /*0x70d14a*/
  return result; /*0x70d117*/
}



// ==== 0x0070D150  FrameTimer::Init25  this=FrameTimer  sig=ida-proto ====
int FrameTimer_Init25()
{
  int v1; // [esp+4h] [ebp-8h]

  dword_B0EA80 = (int)dword_A8ED84; /*0x70d15a*/
  dword_B0EA84 = v1; /*0x70d166*/
  dword_B0EA88 = 25; /*0x70d16b*/
  return v1; /*0x70d171*/
}



// ==== 0x0070D180  SetGlobalFlag  this=-  sig=ida-proto ====
void __fastcall GlobalFlag_Set(char a1)
{
  byte_843108 = a1; /*0x70d180*/
}



// ==== 0x0070D190  TechnoClass::GetRangeModifier  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::GetRangeModifier(TechnoClass *this, int a2)
{
  if ( (this->flashing[0] & 2) == 2 )
    return a2 <= 1500 ? 2000 : 500;
  else
    return a2; /*0x70d1ba*/
}



// ==== 0x0070D1D0  TechnoClass::ShouldScanArea  this=TechnoClass  sig=csp ====
bool __thiscall TechnoClass::ShouldScanArea(TechnoClass *this, _DWORD *a2)
{
  _DWORD *v4; // eax
  int v5; // ebp
  int v6; // ebx
  int v7; // ecx
  int v8; // edx
  char v9; // bl
  char v10; // [esp+12h] [ebp-16h]
  char v11; // [esp+13h] [ebp-15h]
  int v12; // [esp+14h] [ebp-14h]
  __int16 v13[2]; // [esp+18h] [ebp-10h] BYREF
  int v14; // [esp+1Ch] [ebp-Ch] BYREF
  int v15; // [esp+20h] [ebp-8h]
  int v16; // [esp+24h] [ebp-4h]

  if ( *(_BYTE *)((*((int (__thiscall **)(TechnoClass *))this->RadioClass + 33))(this) + 3226) /*0x70d20b*/
    || this->isSinking
    || !this->?
    || this->? )
  {
    return 0; /*0x70d20b*/
  }
  if ( (unsigned __int8)House::IsHumanPlayer((House *)this->owner) ) /*0x70d21f*/
    return this->isDiscoveredByCurrentPlayer != 0; /*0x70d23a*/
  v4 = (_DWORD *)(*((int (__thiscall **)(TechnoClass *, int *))this->RadioClass + 18))(this, &v14); /*0x70d246*/
  LOWORD(v12) = *v4 / 256; /*0x70d25b*/
  HIWORD(v12) = v4[1] / 256; /*0x70d273*/
  *(_DWORD *)v13 = v12; /*0x70d27c*/
  if ( !(unsigned __int8)LayerClass::IsWithinUsableArea((LayerClass *)&stru_87F5F0.__pad_58[416], v13, 1) ) /*0x70d286*/
    return 0; /*0x70d40a*/
  v5 = (*((int (__thiscall **)(TechnoClass *))this->RadioClass + 114))(this); /*0x70d2a3*/
  if ( !(unsigned __int8)Audio::IsMediumVolume(this->veterancy) && !(unsigned __int8)Audio::IsLoud(this->veterancy) ) /*0x70d2b9*/
    goto LABEL_17; /*0x70d2b9*/
  v6 = (*((int (__thiscall **)(TechnoClass *))this->RadioClass + 33))(this); /*0x70d2c7*/
  if ( !(unsigned __int8)Audio::IsMediumVolume(this->veterancy) || !*(_BYTE *)(v6 + 679) ) /*0x70d2d2*/
  {
    if ( (unsigned __int8)Audio::IsLoud(this->veterancy) && (*(_BYTE *)(v6 + 679) || *(_BYTE *)(v6 + 697)) ) /*0x70d2f8*/
    {
      v10 = 1; /*0x70d302*/
      goto LABEL_18; /*0x70d307*/
    }
LABEL_17:
    v10 = 0; /*0x70d309*/
    goto LABEL_18; /*0x70d309*/
  }
  v10 = 1; /*0x70d2dc*/
LABEL_18:
  v14 = this->?[0]; /*0x70d30e*/
  v15 = this->?[1]; /*0x70d329*/
  v16 = this->?[2]; /*0x70d330*/
  if ( !(unsigned __int8)Cell::IsPassable(&v14) || (v11 = 1, !g_hWnd) ) /*0x70d349*/
    v11 = 0; /*0x70d34b*/
  if ( ((int)dword_A8B230->vtable0 & 0x1000) != 0 /*0x70d37b*/
    && (v7 = this->?[1], v8 = this->?[2], v14 = this->?[0], v15 = v7, v16 = v8, (unsigned __int8)Game::Stub3((int)&v14)) )
  {
    v9 = 1; /*0x70d384*/
  }
  else
  {
    v9 = 0; /*0x70d3df*/
    if ( this->cloakState != 2 && v5 >= -20 && !v10 && !v11 ) /*0x70d3f9*/
      return 1; /*0x70d404*/
  }
  if ( !(*((unsigned __int8 (__thiscall **)(TechnoClass *))this->RadioClass + 202))(this) ) /*0x70d392*/
    return 0; /*0x70d392*/
  if ( !(unsigned __int8)HouseClass::IsAlliedWith((#375 *)dword_A83D4C, (#375 *)this->owner) && !v10 && !v9 && !v11 ) /*0x70d3bc*/
    *a2 = (v5 < -20) + 1; /*0x70d3cb*/
  return 1; /*0x70d22e*/
}



// ==== 0x0070D420  TechnoClass::IsPlayerCellPassable  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::IsPlayerCellPassable(TechnoClass *this)
{
  int result; // eax
  _DWORD *v2; // eax
  CellClass *v3; // eax
  _BYTE v4[12]; // [esp+0h] [ebp-Ch] BYREF

  result = (int)dword_A83D4C; /*0x70d420*/
  if ( dword_A83D4C ) /*0x70d42a*/
  {
    v2 = (_DWORD *)(*((int (__thiscall **)(TechnoClass *, _BYTE *))this->RadioClass + 18))(this, v4); /*0x70d433*/
    v3 = Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], v2); /*0x70d43c*/
    return Cell::IsPassableOffset((Cell *)v3, (int)dword_A83D4C->Object_field_0x30); /*0x70d44d*/
  }
  else
  {
    LOBYTE(result) = 0; /*0x70d456*/
  }
  return result; /*0x70d452*/
}



// ==== 0x0070D460  TechnoClass::IsCellPassableFor  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::IsCellPassableFor(TechnoClass *this)
{
  _DWORD *v1; // eax
  CellClass *v2; // eax
  int result; // eax
  _BYTE v4[12]; // [esp+4h] [ebp-Ch] BYREF
  int v5; // [esp+14h] [ebp+4h]

  if ( v5 ) /*0x70d46a*/
  {
    v1 = (_DWORD *)(*((int (__thiscall **)(TechnoClass *, _BYTE *))this->RadioClass + 18))(this, v4); /*0x70d473*/
    v2 = Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], v1); /*0x70d47c*/
    return Cell::IsPassableOffset((Cell *)v2, *(_DWORD *)(v5 + 48)); /*0x70d487*/
  }
  else
  {
    LOBYTE(result) = 0; /*0x70d493*/
  }
  return result; /*0x70d48c*/
}



// ==== 0x0070D4A0  AbstractClass::ClearTargetToMeClearManagerTarget  this=TechnoClass  sig=ida-proto ====
void __fastcall AbstractClass::ClearTargetToMeClearManagerTarget(int a1)
{
  int v2; // edi
  int i; // ebx
  bool v4; // cl
  _DWORD *v5; // esi
  int v6; // eax
  int j; // ecx
  int v8; // eax

  if ( a1 )
    v2 = (*(_BYTE *)(a1 + 20) & 1) != 0 ? a1 : 0;
  else
    v2 = 0; /*0x70d4a9*/
  for ( i = dword_A8EC88 - 1; i >= 0; --i ) /*0x70d4c6*/
  {
    v4 = 1; /*0x70d4d2*/
    v5 = (_DWORD *)*((_DWORD *)dword_A8EC7C + i); /*0x70d4d6*/
    if ( v2 ) /*0x70d4d9*/
    {
      v6 = v5[165]; /*0x70d4db*/
      if ( v6 ) /*0x70d4e3*/
      {
        if ( *(_DWORD *)(v6 + 80) == a1 && *(int *)(v2 + 108) > 0 ) /*0x70d4ef*/
          v4 = *(_BYTE *)(v2 + 144) == 0; /*0x70d4fb*/
      }
    }
    if ( v5[173] == a1 && v4 ) /*0x70d507*/
    {
      (*(void (__thiscall **)(_DWORD))(*v5 + 504))(*((_DWORD *)dword_A8EC7C + i)); /*0x70d50d*/
      if ( (*(int (__thiscall **)(_DWORD *))(*v5 + 44))(v5) == 2 && v5[43] == 25 ) /*0x70d526*/
      {
        v5[47] = 0; /*0x70d528*/
        *((_BYTE *)v5 + 1746) = 0; /*0x70d532*/
      }
      if ( v5[173] == a1 ) /*0x70d53f*/
        (*(void (__thiscall **)(_DWORD *, _DWORD))(*v5 + 968))(v5, 0); /*0x70d547*/
    }
  }
  for ( j = dword_8B40F8 - 1; j >= 0; --j ) /*0x70d560*/
  {
    v8 = *((_DWORD *)dword_8B40EC + j); /*0x70d567*/
    if ( *(_DWORD *)(v8 + 60) == a1 ) /*0x70d56d*/
      *(_DWORD *)(v8 + 60) = 0; /*0x70d56f*/
    if ( *(_DWORD *)(v8 + 64) == a1 ) /*0x70d575*/
      *(_DWORD *)(v8 + 64) = 0; /*0x70d577*/
  }
}



// ==== 0x0070D590  TechnoClass::IsCloseEnoughToBuilding  this=TechnoClass  sig=csp ====
bool __thiscall TechnoClass::IsCloseEnoughToBuilding(TechnoClass *this, int a2)
{
  double v2; // st7
  int v4; // eax
  AbstractClass *target; // ecx
  int *location; // esi
  int v8; // ebx
  int v9; // edi
  _DWORD *v10; // eax
  int v11; // ebp
  int v12; // eax
  int v13; // eax
  int v14; // [esp+20h] [ebp-18h] BYREF
  int v15; // [esp+24h] [ebp-14h]
  int v16; // [esp+28h] [ebp-10h]
  _BYTE v17[12]; // [esp+2Ch] [ebp-Ch] BYREF
  char v18; // [esp+3Ch] [ebp+4h]

  v4 = *(_DWORD *)(*((int (__thiscall **)(TechnoClass *, int))this->RadioClass + 254))(this, a2); /*0x70d5a6*/
  if ( !v4 ) /*0x70d5aa*/
    return 1; /*0x70d5ac*/
  v18 = *(_BYTE *)(v4 + 302); /*0x70d5bf*/
  if ( !v18 ) /*0x70d5c3*/
  {
    target = this->target; /*0x70d5c9*/
    if ( target ) /*0x70d5d1*/
    {
      location = this->?; /*0x70d5d7*/
      v14 = this->?[0]; /*0x70d5e2*/
      v15 = this->?[1]; /*0x70d5e9*/
      v8 = this->?[2]; /*0x70d5f1*/
      v9 = *(_DWORD *)((*((int (__thiscall **)(AbstractClass *, int *))target->vtable0 + 18))(target, &v14) + 8) - v8; /*0x70d5fd*/
      if ( v9 > 0 ) /*0x70d602*/
      {
        v10 = (_DWORD *)(*((int (__thiscall **)(AbstractClass *, _BYTE *))this->target->vtable0 + 18))( /*0x70d611*/
                          this->target,
                          v17);
        v11 = v10[1]; /*0x70d614*/
        v12 = *location - *v10; /*0x70d620*/
        v15 = location[1] - v11; /*0x70d622*/
        v14 = v12; /*0x70d626*/
        v16 = location[2]; /*0x70d638*/
        Math::Sqrt((double)v12 * (double)v12 + (double)v15 * (double)v15); /*0x70d64d*/
        LOWORD(v13) = Math::RoundToInt(v2); /*0x70d655*/
        return v13 < v9; /*0x70d65e*/
      }
    }
  }
  return v18; /*0x70d5ae*/
}



// ==== 0x0070D670  TechnoClass::DecCounter  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::DecCounter(TechnoClass *this)
{
  int result; // eax

  result = this->ammo; /*0x70d670*/
  if ( result > 0 ) /*0x70d678*/
    this->ammo = --result; /*0x70d67b*/
  return result; /*0x70d681*/
}



// ==== 0x0070D690  TechnoClass::ComputeCombatDamage  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::ComputeCombatDamage(TechnoClass *this, int a2)
{
  int v3; // eax
  int (__thiscall **vtable0)(TechnoClass *); // edx
  int v5; // edi
  int v6; // eax
  _DWORD *v7; // eax
  int v8; // eax
  int v9; // eax
  int v11; // ebp
  char *UIObjectCOM; // eax
  char *v13; // ebx
  int *v14; // eax
  _BYTE v15[12]; // [esp+Ch] [ebp-Ch] BYREF

  v3 = (*((int (__thiscall **)(TechnoClass *))this->RadioClass + 33))(this); /*0x70d69a*/
  vtable0 = (int (__thiscall **)(TechnoClass *))this->RadioClass; /*0x70d6a6*/
  if ( *(_DWORD *)(v3 + 3352) ) /*0x70d6a0*/
  {
    v5 = *(_DWORD *)(vtable0[33](this) + 3352); /*0x70d6b4*/
    v6 = (*((int (__thiscall **)(TechnoClass *))this->RadioClass + 33))(this); /*0x70d6be*/
LABEL_6:
    LOWORD(v8) = Math::RoundToInt((double)*(int *)(v5 + 164) * *(float *)(v6 + 3356)); /*0x70d6eb*/
    goto LABEL_8; /*0x70d6fc*/
  }
  v7 = (_DWORD *)vtable0[253](this); /*0x70d6c6*/
  if ( v7 && *v7 ) /*0x70d6d0*/
  {
    v5 = *(_DWORD *)(*((int (__thiscall **)(TechnoClass *))this->RadioClass + 253))(this); /*0x70d6e1*/
    v6 = (*((int (__thiscall **)(TechnoClass *))this->RadioClass + 33))(this); /*0x70d6e5*/
    goto LABEL_6; /*0x70d6e5*/
  }
  v5 = *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 4060); /*0x70d707*/
  v9 = (*((int (__thiscall **)(TechnoClass *))this->RadioClass + 33))(this); /*0x70d70d*/
  LOWORD(v8) = Math::RoundToInt((double)*(int *)(v9 + 160) * 0.5); /*0x70d71f*/
LABEL_8:
  if ( !v5 ) /*0x70d728*/
    return 0; /*0x70d72c*/
  v11 = a2 + v8; /*0x70d747*/
  UIObjectCOM = (char *)CreateUIObjectCOM( /*0x70d756*/
                          *(_DWORD *)(v5 + 160),
                          (int)this,
                          (int)this,
                          a2 + v8,
                          *(_DWORD *)(v5 + 172),
                          0,
                          *(_BYTE *)(v5 + 303));
  v13 = UIObjectCOM; /*0x70d75b*/
  if ( UIObjectCOM ) /*0x70d75f*/
  {
    Function::Method_46B260(UIObjectCOM, v5); /*0x70d764*/
    (*(void (__thiscall **)(char *))(*(_DWORD *)v13 + 212))(v13); /*0x70d76d*/
    v14 = (int *)(*((int (__thiscall **)(TechnoClass *, _BYTE *))this->RadioClass + 18))(this, v15); /*0x70d77c*/
    Warhead::ApplyDamage(v13, v14); /*0x70d782*/
    (*(void (__stdcall **)(char *))(*(_DWORD *)v13 + 8))(v13); /*0x70d78a*/
  }
  return v11; /*0x70d72a*/
}



// ==== 0x0070D7A0  InfantryClass::ReleaseInfiltrators  this=InfantryClass  sig=csp ====
int __thiscall InfantryClass::ReleaseInfiltrators(InfantryClass *this)
{
  int result; // eax
  ParticleSystemClass *damageParticles; // ecx

  BuildingClass::GetHealthRatio((BuildingClass *)this); /*0x70d7a3*/
  result = *(_DWORD *)&DSurface_ViewBounds.__pad_FC[324]; /*0x70d7a8*/
  __asm /*0x70d7ad*/
  {
    fcomp qword ptr [eax+1700h]
    fnstsw ax
  }
  if ( (result & 0x4100) == 0 /*0x70d7c7*/
    || (result = (*((int (__thiscall **)(InfantryClass *))this->FootClass + 114))(this), result < -10) )
  {
    damageParticles = this->?; /*0x70d7c9*/
    if ( damageParticles ) /*0x70d7d1*/
      return (*((int (__thiscall **)(ParticleSystemClass *))damageParticles->ObjectClass + 62))(damageParticles); /*0x70d7d5*/
  }
  return result; /*0x70d7db*/
}



// ==== 0x0070D7E0  FootClass::ProcessEnterTransport  this=FootClass  sig=csp ====
char __thiscall FootClass::ProcessEnterTransport(FootClass *this)
{
  TechnoClass *queueUpToEnter; // edi
  bool v3; // zf
  void (__thiscall **v4)(FootClass *, int, int); // eax
  void (__thiscall **v6)(FootClass *, int, TechnoClass *); // eax
  _BYTE *vtable0; // eax

  queueUpToEnter = this->?; /*0x70d7e4*/
  if ( !queueUpToEnter ) /*0x70d7ec*/
    return 0; /*0x70d7ec*/
  if ( !queueUpToEnter->? ) /*0x70d7fa*/
  {
    this->? = 0; /*0x70d8d8*/
    return 0; /*0x70d8d8*/
  }
  if ( (queueUpToEnter->? & 1) == 0 ) /*0x70d80c*/
    return 0; /*0x70d8e3*/
  if ( (*((int (__thiscall **)(FootClass *, int, TechnoClass *))this->TechnoClass + 158))(this, 2, this->?) != 1 ) /*0x70d820*/
  {
    if ( (*((int (__thiscall **)(TechnoClass *))queueUpToEnter->RadioClass + 11))(queueUpToEnter) == 6 /*0x70d8aa*/
      && (*((int (__thiscall **)(FootClass *))this->TechnoClass + 11))(this) == 2 )
    {
      vtable0 = queueUpToEnter[1].RadioClass; /*0x70d8ac*/
      if ( vtable0[5802] ) /*0x70d8b2*/
      {
        if ( !vtable0[5801] ) /*0x70d8bc*/
        {
          (*((void (__thiscall **)(FootClass *, int, TechnoClass *))this->TechnoClass + 158))(this, 14, queueUpToEnter); /*0x70d8cd*/
          return 0; /*0x70d8d7*/
        }
      }
    }
    return 0; /*0x70d8c4*/
  }
  v3 = (*((int (__thiscall **)(FootClass *, int, TechnoClass *))this->TechnoClass + 158))(this, 15, queueUpToEnter) == 1; /*0x70d82f*/
  v4 = (void (__thiscall **)(FootClass *, int, int))this->TechnoClass; /*0x70d832*/
  if ( v3 ) /*0x70d834*/
  {
    v4[122](this, 7, 1); /*0x70d83c*/
    (*((void (__thiscall **)(FootClass *, TechnoClass *, int))this->TechnoClass + 288))(this, queueUpToEnter, 1); /*0x70d849*/
    this->? = 0; /*0x70d84f*/
  }
  else
  {
    v4[122](this, -1, 0); /*0x70d864*/
    (*((void (__thiscall **)(FootClass *, _DWORD, int))this->TechnoClass + 288))(this, 0, 1); /*0x70d872*/
    v6 = (void (__thiscall **)(FootClass *, int, TechnoClass *))this->TechnoClass; /*0x70d878*/
    this->? = 0; /*0x70d87f*/
    v6[158](this, 3, queueUpToEnter); /*0x70d889*/
  }
  return 1; /*0x70d859*/
}



// ==== 0x0070D8F0  TechnoClass::PlaceAtCell  this=TechnoClass  sig=csp ====
char __thiscall TechnoClass::PlaceAtCell(TechnoClass *this)
{
  TechnoClass *queueUpToEnter; // eax
  void (__thiscall **vtable0)(TechnoClass *, void *, int); // edi
  void *v4; // eax
  __int16 v6[2]; // [esp+4h] [ebp-8h] BYREF
  int v7; // [esp+8h] [ebp-4h] BYREF

  queueUpToEnter = this->queueUpToEnter; /*0x70d8f6*/
  if ( queueUpToEnter ) /*0x70d8fe*/
  {
    if ( (queueUpToEnter->? & 1) != 0 && queueUpToEnter->? ) /*0x70d906*/
    {
      *(_DWORD *)v6 = *MapClass::FindPlacementCellsAlt((char *)this, &v7, (int)queueUpToEnter); /*0x70d926*/
      if ( v6[0] != *(_WORD *)&g_BuildingLoadQueue_Array.?[24] || v6[1] != *(_WORD *)&g_BuildingLoadQueue_Array.? ) /*0x70d938*/
      {
        vtable0 = (void (__thiscall **)(TechnoClass *, void *, int))this->RadioClass; /*0x70d93b*/
        v4 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v6); /*0x70d949*/
        vtable0[288](this, v4, 1); /*0x70d951*/
        (*((void (__thiscall **)(TechnoClass *, int, _DWORD))this->RadioClass + 122))(this, 2, 0); /*0x70d95f*/
        return 1; /*0x70d96c*/
      }
    }
    else
    {
      this->queueUpToEnter = 0; /*0x70d96d*/
    }
  }
  return 0; /*0x70d968*/
}



// ==== 0x0070D980  TechnoClass::StubReturnTrue3  this=TechnoClass  sig=csp ====
void TacticalClass::StubReturnTrue3(TechnoClass *this)
{
  ; /*0x70d980*/
}



// ==== 0x0070D990  TechnoClass::OnEnterCell  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::OnEnterCell(TechnoClass *this)
{
  _DWORD *v2; // eax
  int currentBarrelIndex; // edx
  int *v4; // eax
  int (__thiscall **vtable0)(TechnoClass *, _DWORD *); // eax
  char v6; // bl
  int *v7; // eax
  int v8; // edi
  int v9; // ebp
  int v10; // eax
  int v11; // ecx
  int v12; // edi
  int v13; // eax
  int *v14; // eax
  char isRadarTracked; // al
  int result; // eax
  int v17; // edx
  int v18; // ecx
  int v19; // eax
  int v20; // et2
  int v21; // [esp+Ch] [ebp-2Ch] BYREF
  int currentBurstCount; // [esp+10h] [ebp-28h]
  int v23; // [esp+14h] [ebp-24h]
  int v24[2]; // [esp+18h] [ebp-20h] BYREF
  int v25; // [esp+20h] [ebp-18h]
  int v26; // [esp+24h] [ebp-14h]
  int v27; // [esp+28h] [ebp-10h] BYREF
  int v28; // [esp+2Ch] [ebp-Ch]
  int v29; // [esp+30h] [ebp-8h]
  char v30; // [esp+3Ch] [ebp+4h]
  int v31; // [esp+3Ch] [ebp+4h]

  if ( !this->isDiscoveredByCurrentPlayer && !*(_DWORD *)&dword_A8B238 ) /*0x70d9a8*/
  {
    v2 = (_DWORD *)(*((int (__thiscall **)(TechnoClass *, int *))this->RadioClass + 18))(this, &v27); /*0x70d9b3*/
    this->isDiscoveredByCurrentPlayer = (unsigned __int8)Cell::IsPassable(v2) == 0; /*0x70d9c6*/
  }
  if ( (*((int (__thiscall **)(TechnoClass *))this->RadioClass + 11))(this) != 6 || v30 ) /*0x70d9de*/
  {
    v27 = this->?[0]; /*0x70d9fc*/
    v28 = this->?[1]; /*0x70da08*/
    v29 = this->?[2]; /*0x70da19*/
    v4 = Coord::WorldToScreen((Coord *)&stru_87F5F0.__pad_58[416], v24, &v27, 0); /*0x70da1d*/
    currentBurstCount = *v4; /*0x70da24*/
    currentBarrelIndex = v4[1]; /*0x70da28*/
  }
  else
  {
    currentBarrelIndex = this->currentBarrelIndex; /*0x70d9e6*/
    currentBurstCount = this->currentBurstCount; /*0x70d9ec*/
  }
  vtable0 = (int (__thiscall **)(TechnoClass *, _DWORD *))this->RadioClass; /*0x70da2b*/
  v23 = currentBarrelIndex; /*0x70da36*/
  v21 = 0; /*0x70da3a*/
  v6 = vtable0[201](this, &v21); /*0x70da4e*/
  v7 = (int *)(*(int (__thiscall **)(_DWORD, int *))(**(_DWORD **)&stru_87F5F0.__pad_E12[1538] + 120))( /*0x70da57*/
                *(_DWORD *)&stru_87F5F0.__pad_E12[1538],
                &v27);
  v8 = *v7; /*0x70da5a*/
  v9 = v7[1]; /*0x70da5c*/
  v25 = v7[2]; /*0x70da62*/
  v26 = v7[3]; /*0x70da6f*/
  if ( v21 && v6 && (!this || (this->? & 4) == 0 || *((char *)this + 1668) < 0) ) /*0x70da93*/
  {
    v10 = this->?[0]; /*0x70da9d*/
    v11 = this->?[1]; /*0x70da9f*/
    v29 = this->?[2]; /*0x70daa5*/
    LOWORD(v31) = v10 / 256; /*0x70dab5*/
    HIWORD(v31) = v11 / 256; /*0x70dacd*/
    CreateTriggerClassIfFarEnough(5, (unsigned __int8)(v11 >> 31), v31); /*0x70dad7*/
  }
  if ( currentBurstCount < v8 || currentBurstCount >= v8 + v25 ) /*0x70daec*/
  {
    v12 = v23; /*0x70db02*/
  }
  else
  {
    v12 = v23; /*0x70daee*/
    if ( v23 >= v9 && v23 < v26 + v9 ) /*0x70dafe*/
      goto LABEL_23; /*0x70dafe*/
  }
  if ( v6 ) /*0x70db08*/
  {
    v13 = (*((int (__thiscall **)(TechnoClass *))this->RadioClass + 113))(this); /*0x70db10*/
    v6 = Type::CheckAmbiguity((Type *)&stru_87F5F0.__pad_58[416], v13, 1); /*0x70db21*/
    if ( v6 ) /*0x70db25*/
    {
      v27 = this->?[0]; /*0x70db31*/
      v28 = this->?[1]; /*0x70db3d*/
      v29 = this->?[2]; /*0x70db49*/
      v14 = Coord::WorldToScreen((Coord *)&stru_87F5F0.__pad_58[416], v24, &v27, 1); /*0x70db52*/
      currentBurstCount = *v14; /*0x70db59*/
      v23 = v14[1]; /*0x70db60*/
      v12 = v23; /*0x70db64*/
    }
  }
LABEL_23:
  if ( this->? && v6 ) /*0x70db72*/
    v6 = 0; /*0x70db74*/
  if ( this->isRadarTracked && (currentBurstCount != this->currentBurstCount || v12 != this->currentBarrelIndex || !v6) ) /*0x70db98*/
    (*((void (__thiscall **)(TechnoClass *))this->RadioClass + 294))(this); /*0x70db9e*/
  this->currentBurstCount = currentBurstCount; /*0x70dba8*/
  isRadarTracked = this->isRadarTracked; /*0x70dbae*/
  this->currentBarrelIndex = v12; /*0x70dbb6*/
  if ( !isRadarTracked && v6 ) /*0x70dbc0*/
    (*((void (__thiscall **)(TechnoClass *))this->RadioClass + 293))(this); /*0x70dbc6*/
  result = (int)this->owner; /*0x70dbcc*/
  if ( (Object *)result == dword_A83D4C ) /*0x70dbdc*/
  {
    v17 = this->radarFlashTimer[0]; /*0x70dbde*/
    result = this->radarFlashTimer[2]; /*0x70dbe4*/
    if ( v17 != -1 ) /*0x70dbf3*/
    {
      if ( *(_DWORD *)&stru_A8EB00.?[416] - v17 >= result ) /*0x70dbfb*/
        return result; /*0x70dbfb*/
      result -= *(_DWORD *)&stru_A8EB00.?[416] - v17; /*0x70dbfd*/
    }
    if ( result > 0 ) /*0x70dc01*/
    {
      v18 = this->radarFlashTimer[0]; /*0x70dc03*/
      v19 = this->radarFlashTimer[2]; /*0x70dc09*/
      if ( v18 != -1 ) /*0x70dc12*/
      {
        if ( *(_DWORD *)&stru_A8EB00.?[416] - v18 >= v19 ) /*0x70dc1a*/
          v19 = 0; /*0x70dc20*/
        else
          v19 -= *(_DWORD *)&stru_A8EB00.?[416] - v18; /*0x70dc1c*/
      }
      v20 = v19 % *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 136); /*0x70dc29*/
      result = v19 / *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 136); /*0x70dc29*/
      if ( !v20 ) /*0x70dc31*/
        return (*((int (__thiscall **)(TechnoClass *))this->RadioClass + 295))(this); /*0x70dc37*/
    }
  }
  return result; /*0x70dc3d*/
}



// ==== 0x0070DC50  TechnoClass::processEMPulse  this=TechnoClass  sig=csp ====
char __thiscall TechnoClass::processEMPulse(TechnoClass *this)
{
  return *(_BYTE *)((*((int (__thiscall **)(TechnoClass *))this->RadioClass + 33))(this) + 2054); /*0x70dc5e*/
}



// ==== 0x0070DC60  TechnoClass::OwnerHasPower  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::OwnerHasPower(TechnoClass *this)
{
  HouseClass *v1; // eax

  v1 = (HouseClass *)(*((int (__thiscall **)(TechnoClass *))this->RadioClass + 33))(this); /*0x70dc62*/
  return HouseClass::HasPower(v1);
}



// ==== 0x0070DC70  UnitClass::SetTurret  this=UnitClass  sig=csp ====
int __thiscall UnitClass::SetTurret(UnitClass *this, unsigned int a2)
{
  int result; // eax
  UnitClass *v4; // eax

  result = (*((int (__thiscall **)(UnitClass *))this->FootClass + 33))(this); /*0x70dc76*/
  if ( !*(_BYTE *)(result + 2064) ) /*0x70dc7c*/
  {
    v4 = (UnitClass *)(*((int (__thiscall **)(UnitClass *))this->FootClass + 33))(this); /*0x70dc98*/
    if ( a2 > 0x11 ) /*0x70dc8c*/
    {
      result = UnitClass::processEnterTarget(v4, 0); /*0x70dcc4*/
      this->? = result; /*0x70dcc9*/
      this->? = 0; /*0x70dccf*/
    }
    else
    {
      result = UnitClass::processEnterTarget(v4, a2); /*0x70dca0*/
      this->? = a2; /*0x70dca5*/
      this->? = result; /*0x70dcab*/
    }
  }
  return result; /*0x70dcb1*/
}



// ==== 0x0070DCE0  TechnoClass::checkEMPState  this=TechnoClass  sig=csp ====
BOOL __thiscall TechnoClass::checkEMPState(TechnoClass *this)
{
  return this->currentTurretNumber != -1; /*0x70dcee*/
}



// ==== 0x0070DCF0  TechnoClass::applyEMPulseDamage  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::applyEMPulseDamage(TechnoClass *this)
{
  return this->currentTurretNumber; /*0x70dcf6*/
}



// ==== 0x0070DD20  TechnoClass::GetPoweredWeaponIndex  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::GetPoweredWeaponIndex(TechnoClass *this)
{
  HouseClass *v2; // eax

  v2 = (HouseClass *)(*((int (__thiscall **)(TechnoClass *))this->RadioClass + 33))(this); /*0x70dd25*/
  if ( (unsigned __int8)HouseClass::HasPower(v2) ) /*0x70dd2d*/
    return this->currentWeaponSlot; /*0x70dd36*/
  else
    return 0; /*0x70dd3e*/
}



// ==== 0x0070DD50  TechnoClass::GetVt252Byte  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::GetVt252Byte(TechnoClass *this)
{
  int result; // eax

  result = (*((int (__thiscall **)(TechnoClass *))this->RadioClass + 252))(this); /*0x70dd52*/
  if ( result && (result = *(_DWORD *)result) != 0 ) /*0x70dd60*/
    LOBYTE(result) = *(_BYTE *)(result + 336); /*0x70dd62*/
  else
    LOBYTE(result) = 0; /*0x70dd69*/
  return result; /*0x70dd68*/
}



// ==== 0x0070DD70  ObjectClass::CheckTypeFlag1681  this=TechnoClass  sig=csp ====
int __thiscall ObjectClass::CheckTypeFlag1681(ObjectClass *this)
{
  return *(_BYTE *)((*((int (__thiscall **)(ObjectClass *))this->AbstractClass + 33))(this) + 1681) == 0; /*0x70dd87*/
}



// ==== 0x0070DD90  TechnoClass::g_var_e75276  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::g_var_e75276(TechnoClass *this)
{
  return 1; /*0x70dd95*/
}



// ==== 0x0070DDA0  ObjectClass::CheckTypeFlag1681_2  this=TechnoClass  sig=csp ====
int __thiscall ObjectClass::CheckTypeFlag1681_2(ObjectClass *this)
{
  return *(_BYTE *)((*((int (__thiscall **)(ObjectClass *))this->AbstractClass + 33))(this) + 1681) == 0; /*0x70ddb7*/
}



// ==== 0x0070DDC0  BuildingClass::checkPlacement  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass::checkPlacement(BuildingClass *this)
{
  return this->?; /*0x70ddc6*/
}



// ==== 0x0070DDD0  TechnoClass::SetSpread  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::SetSpread(TechnoClass *this, int a2)
{
  int result; // eax

  result = a2; /*0x70ddd0*/
  if ( a2 >= 0 ) /*0x70ddd6*/
    this->gattlingStage = a2; /*0x70ddd8*/
  return result; /*0x70ddde*/
}



// ==== 0x0070DDF0  TechnoClass::GetMember81  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::GetMember81(TechnoClass *this)
{
  return this->gattlingValue; /*0x70ddf6*/
}



// ==== 0x0070DE00  TechnoClass::SetMember81  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::SetMember81(TechnoClass *this, int a2)
{
  int result; // eax

  result = a2; /*0x70de00*/
  if ( a2 >= 0 ) /*0x70de06*/
    this->gattlingValue = a2; /*0x70de08*/
  return result; /*0x70de0e*/
}



// ==== 0x0070DE20  ObjectClass::method_70DE20  this=ObjectClass  sig=csp ====
int __thiscall sub_70DE20(ObjectClass *this, int a2)
{
  *((_DWORD *)this + 81) += a2; /*0x70de2c*/
  return a2; /*0x70de32*/
}



// ==== 0x0070DE40  TechnoClass::GattlingValueRateDown_GattlingRateDownDelay  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::GattlingValueRateDown_GattlingRateDownDelay(TechnoClass *this, int a2)
{
  int result; // eax
  int v3; // edx

  result = a2; /*0x70de40*/
  v3 = this->gattlingValue - a2; /*0x70de4a*/
  this->gattlingValue = v3; /*0x70de4c*/
  if ( v3 < 0 || !a2 ) /*0x70de56*/
    this->gattlingValue = 0; /*0x70de58*/
  return result; /*0x70de62*/
}



// ==== 0x0070DE70  TechnoClass::GattlingRateUp_GattlingRateDownReset  this=ObjectClass  sig=csp ====
char __thiscall TechnoClass::GattlingRateUp_GattlingRateDownReset(float *this, int a2)
{
  int v3; // ebx
  int v4; // eax
  int v5; // edi
  int v6; // ebp
  int v7; // eax
  int v8; // edi
  int v9; // eax
  unsigned int v10; // ebx
  unsigned int v11; // eax
  int v13; // [esp+10h] [ebp-10h]
  _DWORD v14[3]; // [esp+14h] [ebp-Ch] BYREF

  v3 = *(_DWORD *)((*(int (__thiscall **)(float *))(this->hasParachute)(this) + 3288); /*0x70de81*/
  if ( Audio::IsLoud(this + 84) ) /*0x70de8d*/
    v4 = *(_DWORD *)((*(int (__thiscall **)(float *))(this->hasParachute)(this) + 4 * v3 + 3312); /*0x70dea0*/
  else
    v4 = *(_DWORD *)((*(int (__thiscall **)(float *))(this->hasParachute)(this) + 4 * v3 + 3288); /*0x70deb3*/
  v13 = *((_DWORD *)this + 81); /*0x70dec2*/
  if ( v13 < v4 ) /*0x70dec6*/
    *((_DWORD *)this + 81) += a2 * *(_DWORD *)((*(int (__thiscall **)(float *))(this->hasParachute)(this) + 3340); /*0x70dee5*/
  v5 = this->customSound_controller; /*0x70deeb*/
  v6 = *(_DWORD *)(*(int (__thiscall **)(float *, int))(*(_DWORD *)this + 1016))(this, 2 * v5); /*0x70deff*/
  AudioController::Stop((_DWORD *)this + 304); /*0x70df07*/
  *((_BYTE *)this + 1236) = 0; /*0x70df0e*/
  if ( v5 >= 0 && v5 < v3 - 1 )
  {
    v7 = Audio::IsLoud(this + 84)
       ? *(_DWORD *)((*(int (__thiscall **)(float *))(this->hasParachute)(this) + 4 * v5 + 3316)
       : *(_DWORD *)((*(int (__thiscall **)(float *))(this->hasParachute)(this) + 4 * v5 + 3292);
    if ( v13 >= v7 ) /*0x70df53*/
    {
      v8 = v5 + 1; /*0x70df55*/
      if ( v8 >= 0 ) /*0x70df56*/
        this->customSound_controller = v8; /*0x70df58*/
      v6 = *(_DWORD *)(*(int (__thiscall **)(float *, int))(*(_DWORD *)this + 1016))(this, 2 * v8); /*0x70df6c*/
      AudioController::Stop((_DWORD *)this + 297); /*0x70df74*/
      *((_BYTE *)this + 1208) = 0; /*0x70df79*/
    }
  }
  LOBYTE(v9) = *((_BYTE *)this + 1208); /*0x70df80*/
  if ( !(_BYTE)v9 ) /*0x70df88*/
  {
    v9 = *(_DWORD *)(v6 + 204); /*0x70df8a*/
    if ( v9 > 0 ) /*0x70df92*/
    {
      AudioController::Stop((_DWORD *)this + 297); /*0x70df9c*/
      v10 = *(_DWORD *)(v6 + 204); /*0x70dfa7*/
      *(float *)v14 = this->q027; /*0x70dfaf*/
      *(float *)&v14[1] = this->owningHouseIndex; /*0x70dfb6*/
      *(float *)&v14[2] = this->q0A4; /*0x70dfbd*/
      v11 = Random::State(Randomizer_Global); /*0x70dfc6*/
      LOBYTE(v9) = StartAudioControllerAt( /*0x70dfdd*/
                     *(_DWORD *)(*(_DWORD *)(v6 + 192) + 4 * (v11 % v10)),
                     (int)v14,
                     (int)(this + 297));
      *((_BYTE *)this + 1208) = 1; /*0x70dfe2*/
    }
  }
  return v9; /*0x70dfe9*/
}



// ==== 0x0070E000  TechnoClass::DrainAmmo  this=AbstractClass  sig=csp ====
char __thiscall TechnoClass_DrainAmmo(char *this, int a2)
{
  _DWORD *v3; // ebx
  int *v4; // eax
  int v5; // eax
  int v6; // ecx
  int v7; // ebp
  int v8; // edi
  int v9; // eax
  int v10; // edi

  v3 = this + 1188; /*0x70e006*/
  Mixer::ReleaseChannel((int **)this + 297); /*0x70e00e*/
  v4 = *(int **)this; /*0x70e013*/
  *(this + 1208) = 0; /*0x70e017*/
  v5 = a2 * *(_DWORD *)(((int (__thiscall *)(char *))v4[33])(this) + 3344); /*0x70e030*/
  v6 = *((_DWORD *)this + 81) - v5; /*0x70e035*/
  *((_DWORD *)this + 81) = v6; /*0x70e037*/
  if ( v6 < 0 || !v5 ) /*0x70e041*/
    *((_DWORD *)this + 81) = 0; /*0x70e043*/
  v7 = *((_DWORD *)this + 81); /*0x70e04d*/
  v8 = this->abstractFlags; /*0x70e053*/
  if ( v7 || v8 )
  {
    LOBYTE(v9) = (*(int (__thiscall **)(char *, int))(*(_DWORD *)this + 1016))(this, 2 * v8); /*0x70e0a8*/
    if ( v8 > 0 )
    {
      v9 = Audio::IsLoud((float *)this + 84)
         ? *(_DWORD *)((*(int (__thiscall **)(char *))(this->alignmentPadding)(this) + 4 * v8 + 3312)
         : *(_DWORD *)((*(int (__thiscall **)(char *))(this->alignmentPadding)(this) + 4 * v8 + 3288);
      if ( v7 < v9 ) /*0x70e0e7*/
      {
        v10 = v8 - 1; /*0x70e0e9*/
        if ( v10 >= 0 ) /*0x70e0ea*/
          this->abstractFlags = v10; /*0x70e0ec*/
        (*(void (__thiscall **)(char *, int))(*(_DWORD *)this + 1016))(this, 2 * v10); /*0x70e0fa*/
        LOBYTE(v9) = (unsigned __int8)AudioController::Stop((_DWORD *)this + 304); /*0x70e106*/
        *(this + 1236) = 0; /*0x70e10b*/
      }
    }
  }
  else if ( *(this + 1236) || (LOBYTE(v9) = *(this + 1208), (_BYTE)v9) ) /*0x70e073*/
  {
    AudioController::Stop(v3); /*0x70e07b*/
    LOBYTE(v9) = (unsigned __int8)AudioController::Stop((_DWORD *)this + 304); /*0x70e086*/
    *(this + 1236) = 0; /*0x70e08b*/
    *(this + 1208) = 0; /*0x70e092*/
  }
  return v9; /*0x70e099*/
}



// ==== 0x0070E120  TechnoClass::Vt249to254  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::Vt249to254(TechnoClass *this)
{
  int (__thiscall **vtable0)(TechnoClass *, int); // edi
  int v3; // eax

  vtable0 = (int (__thiscall **)(TechnoClass *, int))this->RadioClass; /*0x70e124*/
  v3 = (*((int (__thiscall **)(TechnoClass *))this->RadioClass + 249))(this); /*0x70e126*/
  return vtable0[254](this, v3); /*0x70e135*/
}



// ==== 0x0070E140  TechnoClass::SelectVocOrSfx  this=TechnoClass  sig=csp ====
_DWORD *__thiscall TechnoClass_SelectVocOrSfx(float *this, int a2)
{
  _DWORD *result; // eax

  if ( a2 == -1 ) /*0x70e14b*/
    return 0; /*0x70e14e*/
  if ( !Audio::IsLoud(this + 84) /*0x70e179*/
    || ((*(void (__thiscall **)(float *))(this->hasParachute)(this),
        (result = (_DWORD *)TechnoClass::processSpyAction(a2)) == 0)
    || !*result )
  {
    (*(void (__thiscall **)(float *))(this->hasParachute)(this); /*0x70e183*/
    return (_DWORD *)TechnoClass::GetAudioEntry(a2); /*0x70e18b*/
  }
  return result; /*0x70e14d*/
}



// ==== 0x0070E1A0  TechnoClass::UpdatePowered  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::UpdatePowered(TechnoClass *this)
{
  HouseClass *v2; // eax

  v2 = (HouseClass *)(*((int (__thiscall **)(TechnoClass *))this->RadioClass + 33))(this); /*0x70e1a5*/
  if ( (unsigned __int8)HouseClass::HasPower(v2) ) /*0x70e1ad*/
    return (*((int (__thiscall **)(TechnoClass *, int))this->RadioClass + 254))(this, this->currentWeaponSlot); /*0x70e1c1*/
  else
    return (*((int (__thiscall **)(TechnoClass *, _DWORD))this->RadioClass + 254))(this, 0); /*0x70e1d0*/
}



// ==== 0x0070E1E0  InfantryClass::ProcessIdle  this=InfantryClass  sig=csp ====
int __thiscall InfantryClass::ProcessIdle(InfantryClass *this, int a2)
{
  HouseClass *v3; // eax
  bool v4; // al

  v3 = (HouseClass *)(*((int (__thiscall **)(InfantryClass *))this->FootClass + 33))(this); /*0x70e1f1*/
  v4 = (unsigned __int8)HouseClass::HasPower(v3) /*0x70e214*/
    && a2 < *(_DWORD *)((*((int (__thiscall **)(InfantryClass *))this->FootClass + 33))(this) + 2060);
  return a2 >= -1 && (a2 < 2 || v4); /*0x70e227*/
}



// ==== 0x0070E240  IsNonNullPtr  this=FootClass  sig=csp ====
int __stdcall IsNonNullPtr(_DWORD *a1)
{
  return a1 && *a1; /*0x70e252*/
}



// ==== 0x0070E280  TechnoClass::ActivateEffect  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::ActivateEffect(TechnoClass *this)
{
  int v2; // [esp+4h] [ebp+4h]

  if ( v2 ) /*0x70e286*/
  {
    this->isDisguisedFlag = 1; /*0x70e288*/
    this->disguiseCreationFrame = *(_DWORD *)&stru_A8EB00.?[416]; /*0x70e294*/
  }
  return (*((int (__thiscall **)(TechnoClass *))this->RadioClass + 295))(this); /*0x70e2a2*/
}



// ==== 0x0070E2B0  TechnoClass::IronCurtain  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::IronCurtain(TechnoClass *this, int a2, int a3, char a4)
{
  int result; // eax
  int v5; // [esp+8h] [ebp-8h]

  *(_DWORD *)this->__pad_18C = *(_DWORD *)&stru_A8EB00.?[416]; /*0x70e2c3*/
  this->ironCurtainTimer[0] = v5; /*0x70e2cd*/
  result = 0; /*0x70e2d0*/
  this->ironTintTimer[2] = 0; /*0x70e2d2*/
  this->ironCurtainTimer[1] = a2; /*0x70e2d8*/
  if ( a4 ) /*0x70e2e2*/
    *(_DWORD *)this->__pad_1C4 = 1; /*0x70e2e4*/
  else
    *(_DWORD *)this->__pad_1C4 = 0; /*0x70e2f4*/
  return result; /*0x70e2e1*/
}



// ==== 0x0070E300  TechnoClass::ResetTimer  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::ResetTimer(TechnoClass *this)
{
  int v1; // eax
  int v3; // [esp+8h] [ebp-8h]
  int v4; // [esp+14h] [ebp+4h]

  v1 = *(_DWORD *)&stru_A8EB00.?[416]; /*0x70e300*/
  this->airstrikeTintTimer[2] = 0; /*0x70e30c*/
  this->ironTintStage = v1; /*0x70e31d*/
  this->airstrikeTimer[0] = v3; /*0x70e327*/
  this->airstrikeTimer[1] = v4; /*0x70e32a*/
  return v3; /*0x70e32d*/
}



// ==== 0x0070E340  ObjectClass::ResetTimer2  this=TechnoClass  sig=csp ====
int __thiscall ObjectClass::ResetTimer2(ObjectClass *this)
{
  ObjectClass *v1; // ecx
  int v3; // [esp+4h] [ebp-8h]

  v1 = (ObjectClass *)((char *)this + 424); /*0x70e34a*/
  v1->AbstractClass = *(void **)&stru_A8EB00.?[416]; /*0x70e350*/
  v1->? = (void *)v3; /*0x70e356*/
  v1->? = 0; /*0x70e359*/
  return v3; /*0x70e35c*/
}



// ==== 0x0070E360  Techno::StartInvulnerability  this=TechnoClass  sig=csp ====
int __thiscall Techno::StartInvulnerability(TechnoClass *this, int a2)
{
  int v3; // eax

  v3 = TechnoClass::InvulnerabilityIntensity_SetContext(this, a2); /*0x70e368*/
  return TechnoClass::CalcFlashAlpha(this, v3); /*0x70e375*/
}



// ==== 0x0070E380  TechnoClass::InvulnerabilityIntensity_SetContext  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::InvulnerabilityIntensity_SetContext(TechnoClass *this, int a2)
{
  int v2; // edx
  int v3; // esi
  int v4; // ecx
  int v5; // eax
  int v6; // edx
  int result; // eax

  v2 = this->ironTintTimer[1]; /*0x70e380*/
  v3 = this->ironCurtainTimer[2]; /*0x70e387*/
  if ( v3 != -1 ) /*0x70e390*/
  {
    if ( *(_DWORD *)&stru_A8EB00.?[416] - v3 >= v2 ) /*0x70e39b*/
      v2 = 0; /*0x70e3a1*/
    else
      v2 -= *(_DWORD *)&stru_A8EB00.?[416] - v3; /*0x70e39d*/
  }
  switch ( this->ironTintTimer[2] ) /*0x70e3b6*/
  {
    case 1: /*0x70e3b6*/
      v4 = (12 - v2) << 8; /*0x70e3c4*/
      goto LABEL_13; /*0x70e3c7*/
    case 2: /*0x70e3b6*/
    case 8: /*0x70e3b6*/
      v5 = 512; /*0x70e3c9*/
      goto LABEL_15; /*0x70e3ce*/
    case 3: /*0x70e3b6*/
      v6 = (unsigned __int64)(1717986919LL * (461 * v2 + 1020)) >> 32; /*0x70e3ea*/
      v5 = ((unsigned int)v6 >> 31) + (v6 >> 3); /*0x70e3f6*/
      goto LABEL_15; /*0x70e3f8*/
    case 4: /*0x70e3b6*/
      v5 = (1024 - 77 * v2) / 8; /*0x70e40a*/
      goto LABEL_15; /*0x70e40d*/
    case 5: /*0x70e3b6*/
      v5 = (77 * v2 + 816) / 16; /*0x70e41f*/
      goto LABEL_15; /*0x70e422*/
    case 6: /*0x70e3b6*/
      v5 = 51; /*0x70e424*/
      goto LABEL_15; /*0x70e429*/
    case 7: /*0x70e3b6*/
      v4 = 3072 - 461 * v2; /*0x70e440*/
LABEL_13:
      v5 = v4 / 6; /*0x70e442*/
      goto LABEL_15; /*0x70e452*/
    case 9: /*0x70e3b6*/
      v5 = ((v2 + 20) << 8) / 20; /*0x70e46b*/
LABEL_15:
      result = (a2 * v5) >> 8; /*0x70e46d*/
      if ( result > 2000 ) /*0x70e47a*/
        result = 2000; /*0x70e47c*/
      break; /*0x70e481*/
    default:
      result = a2; /*0x70e484*/
      break; /*0x70e484*/
  }
  return result; /*0x70e3a9*/
}



// ==== 0x0070E4B0  TechnoClass::CalcFlashAlpha  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::CalcFlashAlpha(TechnoClass *this, int a2)
{
  int v2; // edx
  int v3; // esi
  unsigned int v4; // edx
  int v5; // eax
  int result; // eax

  v2 = this->airstrikeTintTimer[1]; /*0x70e4b0*/
  v3 = this->airstrikeTimer[2]; /*0x70e4b7*/
  if ( v3 != -1 ) /*0x70e4c0*/
  {
    if ( *(_DWORD *)&stru_A8EB00.?[416] - v3 >= v2 ) /*0x70e4cb*/
      v2 = 0; /*0x70e4d1*/
    else
      v2 -= *(_DWORD *)&stru_A8EB00.?[416] - v3; /*0x70e4cd*/
  }
  switch ( this->airstrikeTintTimer[2] ) /*0x70e4e6*/
  {
    case 1: /*0x70e4e6*/
    case 7: /*0x70e4e6*/
      v4 = (unsigned __int64)(715827883LL * ((12 - v2) << 8)) >> 32; /*0x70e4fc*/
      v5 = (v4 >> 31) + v4; /*0x70e505*/
      goto LABEL_12; /*0x70e507*/
    case 2: /*0x70e4e6*/
    case 8: /*0x70e4e6*/
      v5 = 512; /*0x70e509*/
      goto LABEL_12; /*0x70e50e*/
    case 3: /*0x70e4e6*/
    case 9: /*0x70e4e6*/
      v5 = ((v2 + 20) << 8) / 20; /*0x70e554*/
      goto LABEL_12; /*0x70e554*/
    case 4: /*0x70e4e6*/
      v5 = ((128 - v2) << 8) / 64; /*0x70e520*/
      goto LABEL_12; /*0x70e523*/
    case 5: /*0x70e4e6*/
      v5 = ((v2 + 64) << 8) / 64; /*0x70e531*/
      goto LABEL_12; /*0x70e534*/
    case 6: /*0x70e4e6*/
      v5 = 256; /*0x70e536*/
LABEL_12:
      result = (a2 * v5) >> 8; /*0x70e556*/
      if ( result > 2000 ) /*0x70e563*/
        result = 2000; /*0x70e565*/
      break; /*0x70e56a*/
    default:
      result = a2; /*0x70e56d*/
      break; /*0x70e56d*/
  }
  return result; /*0x70e4d9*/
}



// ==== 0x0070E5A0  ObjectClass::UpdateTechnoIdleTimer  this=ObjectClass  sig=csp ====
int __thiscall UpdateTechnoIdleTimer(ObjectClass *this)
{
  int result; // eax
  ObjectClass *v3; // esi
  int v4; // edi
  int v5; // ecx
  int v6; // edx
  int v7; // edi
  int v8; // ecx
  int v9; // edi
  int v10; // ecx
  int v11; // edx
  ObjectClass *v12; // esi
  int v13; // edi
  int v14; // ecx
  int v15; // edi
  int v16; // ecx
  int v17; // edx
  int v18; // [esp+Ch] [ebp-8h]

  result = (*((int (__thiscall **)(ObjectClass *))this->AbstractClass + 88))(this); /*0x70e5a9*/
  if ( (_BYTE)result ) /*0x70e5b1*/
  {
    result = this->alignmentPadding69; /*0x70e5b7*/
    switch ( result ) /*0x70e5c6*/
    {
      case 0: /*0x70e5c6*/
        this->alignmentPadding69 = 1; /*0x70e5d1*/
        result = *(_DWORD *)&stru_A8EB00.?[416]; /*0x70e5db*/
        v3 = (ObjectClass *)((char *)this + 408); /*0x70e5e0*/
        v3->AbstractClass = *(void **)&stru_A8EB00.?[416]; /*0x70e5ec*/
        v3->? = (void *)v18; /*0x70e5ee*/
        v3->? = (void *)6; /*0x70e5f1*/
        return result; /*0x70e5f8*/
      case 1: /*0x70e5c6*/
        v4 = *((_DWORD *)this + 102); /*0x70e5f9*/
        v5 = this->bombVisible; /*0x70e5ff*/
        result = (int)this + 408; /*0x70e605*/
        if ( v4 == -1 ) /*0x70e60e*/
          goto LABEL_7; /*0x70e60e*/
        if ( *(_DWORD *)&stru_A8EB00.?[416] - v4 >= v5 ) /*0x70e61a*/
          goto LABEL_8; /*0x70e61a*/
        v5 -= *(_DWORD *)&stru_A8EB00.?[416] - v4; /*0x70e61c*/
LABEL_7:
        if ( !v5 ) /*0x70e620*/
        {
LABEL_8:
          this->alignmentPadding69 = 2; /*0x70e626*/
          *(_DWORD *)result = *(_DWORD *)&stru_A8EB00.?[416]; /*0x70e636*/
          *((_DWORD *)this + 103) = v18; /*0x70e641*/
          this->bombVisible = 4; /*0x70e645*/
        }
        break; /*0x70e64c*/
      case 2: /*0x70e5c6*/
        v6 = *((_DWORD *)this + 102); /*0x70e64d*/
        result = this->bombVisible; /*0x70e653*/
        if ( v6 == -1 ) /*0x70e662*/
          goto LABEL_12; /*0x70e662*/
        if ( *(_DWORD *)&stru_A8EB00.?[416] - v6 >= result ) /*0x70e66e*/
          goto LABEL_13; /*0x70e66e*/
        result -= *(_DWORD *)&stru_A8EB00.?[416] - v6; /*0x70e670*/
LABEL_12:
        if ( !result ) /*0x70e674*/
        {
LABEL_13:
          this->alignmentPadding69 = 3; /*0x70e67a*/
          result = Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, -5, 5) + 20; /*0x70e69f*/
          *((_DWORD *)this + 102) = *(_DWORD *)&stru_A8EB00.?[416]; /*0x70e6a2*/
          *((_DWORD *)this + 103) = v18; /*0x70e6a8*/
          this->bombVisible = result; /*0x70e6ab*/
        }
        break; /*0x70e6b3*/
      case 3: /*0x70e5c6*/
        v7 = *((_DWORD *)this + 102); /*0x70e6b4*/
        v8 = this->bombVisible; /*0x70e6ba*/
        result = (int)this + 408; /*0x70e6c0*/
        if ( v7 == -1 ) /*0x70e6c9*/
          goto LABEL_17; /*0x70e6c9*/
        if ( *(_DWORD *)&stru_A8EB00.?[416] - v7 >= v8 ) /*0x70e6d5*/
          goto LABEL_18; /*0x70e6d5*/
        v8 -= *(_DWORD *)&stru_A8EB00.?[416] - v7; /*0x70e6d7*/
LABEL_17:
        if ( !v8 ) /*0x70e6db*/
        {
LABEL_18:
          this->alignmentPadding69 = 4; /*0x70e6e1*/
          *(_DWORD *)result = *(_DWORD *)&stru_A8EB00.?[416]; /*0x70e6f1*/
          *((_DWORD *)this + 103) = v18; /*0x70e6fc*/
          this->bombVisible = 8; /*0x70e700*/
        }
        break; /*0x70e707*/
      case 4: /*0x70e5c6*/
        v9 = *((_DWORD *)this + 102); /*0x70e708*/
        v10 = this->bombVisible; /*0x70e70e*/
        result = (int)this + 408; /*0x70e714*/
        if ( v9 == -1 ) /*0x70e71d*/
          goto LABEL_22; /*0x70e71d*/
        if ( *(_DWORD *)&stru_A8EB00.?[416] - v9 >= v10 ) /*0x70e729*/
          goto LABEL_23; /*0x70e729*/
        v10 -= *(_DWORD *)&stru_A8EB00.?[416] - v9; /*0x70e72b*/
LABEL_22:
        if ( !v10 ) /*0x70e72f*/
        {
LABEL_23:
          this->alignmentPadding69 = 5; /*0x70e735*/
          *(_DWORD *)result = *(_DWORD *)&stru_A8EB00.?[416]; /*0x70e745*/
          *((_DWORD *)this + 103) = v18; /*0x70e750*/
          this->bombVisible = 16; /*0x70e754*/
        }
        break; /*0x70e75b*/
      case 5: /*0x70e5c6*/
        v11 = *((_DWORD *)this + 102); /*0x70e75c*/
        result = this->bombVisible; /*0x70e762*/
        if ( v11 == -1 ) /*0x70e771*/
          goto LABEL_27; /*0x70e771*/
        if ( *(_DWORD *)&stru_A8EB00.?[416] - v11 >= result ) /*0x70e77d*/
          goto LABEL_28; /*0x70e77d*/
        result -= *(_DWORD *)&stru_A8EB00.?[416] - v11; /*0x70e77f*/
LABEL_27:
        if ( !result ) /*0x70e783*/
        {
LABEL_28:
          result = Timeout::GetRemaining((Timeout *)this + 99); /*0x70e78f*/
          if ( result >= 54 ) /*0x70e797*/
          {
            this->alignmentPadding69 = 4; /*0x70e7ad*/
            result = *(_DWORD *)&stru_A8EB00.?[416]; /*0x70e7b7*/
            *((_DWORD *)this + 102) = *(_DWORD *)&stru_A8EB00.?[416]; /*0x70e7c1*/
            *((_DWORD *)this + 103) = v18; /*0x70e7c3*/
            this->bombVisible = 8; /*0x70e7c6*/
          }
          else
          {
            this->alignmentPadding69 = 6; /*0x70e799*/
          }
        }
        break; /*0x70e7a8*/
      case 6: /*0x70e5c6*/
        result = Timeout::GetRemaining((Timeout *)this + 99); /*0x70e7d5*/
        if ( result <= 30 ) /*0x70e7dd*/
        {
          this->alignmentPadding69 = 7; /*0x70e7e3*/
          v12 = (ObjectClass *)((char *)this + 408); /*0x70e7f2*/
          v12->AbstractClass = *(void **)&stru_A8EB00.?[416]; /*0x70e7fe*/
          v12->? = (void *)v18; /*0x70e804*/
          v12->? = (void *)6; /*0x70e807*/
          return v18; /*0x70e800*/
        }
        return result; /*0x70e80e*/
      case 7: /*0x70e5c6*/
        v13 = *((_DWORD *)this + 102); /*0x70e80f*/
        v14 = this->bombVisible; /*0x70e815*/
        result = (int)this + 408; /*0x70e81b*/
        if ( v13 == -1 ) /*0x70e824*/
          goto LABEL_36; /*0x70e824*/
        if ( *(_DWORD *)&stru_A8EB00.?[416] - v13 >= v14 ) /*0x70e830*/
          goto LABEL_37; /*0x70e830*/
        v14 -= *(_DWORD *)&stru_A8EB00.?[416] - v13; /*0x70e832*/
LABEL_36:
        if ( !v14 ) /*0x70e836*/
        {
LABEL_37:
          this->alignmentPadding69 = 8; /*0x70e83c*/
          *(_DWORD *)result = *(_DWORD *)&stru_A8EB00.?[416]; /*0x70e84c*/
          *((_DWORD *)this + 103) = v18; /*0x70e857*/
          this->bombVisible = 4; /*0x70e85b*/
        }
        break; /*0x70e862*/
      case 8: /*0x70e5c6*/
        v15 = *((_DWORD *)this + 102); /*0x70e863*/
        v16 = this->bombVisible; /*0x70e869*/
        result = (int)this + 408; /*0x70e86f*/
        if ( v15 == -1 ) /*0x70e878*/
          goto LABEL_41; /*0x70e878*/
        if ( *(_DWORD *)&stru_A8EB00.?[416] - v15 >= v16 ) /*0x70e884*/
          goto LABEL_42; /*0x70e884*/
        v16 -= *(_DWORD *)&stru_A8EB00.?[416] - v15; /*0x70e886*/
LABEL_41:
        if ( !v16 ) /*0x70e88a*/
        {
LABEL_42:
          this->alignmentPadding69 = 9; /*0x70e88c*/
          *(_DWORD *)result = *(_DWORD *)&stru_A8EB00.?[416]; /*0x70e89c*/
          *((_DWORD *)this + 103) = v18; /*0x70e8a7*/
          this->bombVisible = 20; /*0x70e8ab*/
        }
        break; /*0x70e8b2*/
      case 9: /*0x70e5c6*/
        v17 = *((_DWORD *)this + 102); /*0x70e8b3*/
        result = this->bombVisible; /*0x70e8b9*/
        if ( v17 != -1 ) /*0x70e8c2*/
        {
          if ( *(_DWORD *)&stru_A8EB00.?[416] - v17 >= result ) /*0x70e8ce*/
            goto LABEL_47; /*0x70e8ce*/
          result -= *(_DWORD *)&stru_A8EB00.?[416] - v17; /*0x70e8d0*/
        }
        if ( !result ) /*0x70e8d4*/
          goto LABEL_47; /*0x70e8d4*/
        return result; /*0x70e8d4*/
      default:
LABEL_47:
        this->alignmentPadding69 = 10; /*0x70e8d6*/
        return result; /*0x70e8e5*/
    }
  }
  else
  {
    this->alignmentPadding69 = 0; /*0x70e8e6*/
  }
  return result; /*0x70e5eb*/
}



// ==== 0x0070E920  UpdateTimedStateMachine  this=TechnoClass  sig=csp ====
void __fastcall UpdateTimedStateMachine(int *a1)
{
  _DWORD *v2; // esi
  int v3; // edi
  int v4; // ecx
  int v5; // edx
  int v6; // eax
  int v7; // eax
  int v8; // edi
  int v9; // ecx
  int v10; // edi
  int v11; // ecx
  int v12; // edx
  int v13; // eax
  _DWORD *v14; // esi
  int v15; // edi
  int v16; // ecx
  int v17; // edi
  int v18; // ecx
  int v19; // edx
  int v20; // eax
  int v21; // [esp+Ch] [ebp-8h]

  if ( a1
    && (*(int (__thiscall **)(int *))(*a1 + 44))(a1) == 6
    && a1[165]
    && *(_DWORD *)(a1[165] + 80) == ((*(int (__thiscall **)(int *))(*a1 + 44))(a1) == 6 ? (unsigned int)a1 : 0) )
  {
    switch ( a1[112] ) /*0x70e97d*/
    {
      case 0: /*0x70e97d*/
        a1[112] = 1; /*0x70e988*/
        v2 = a1 + 109; /*0x70e997*/
        *v2 = dword_A8ED84; /*0x70e9a3*/
        v2[1] = v21; /*0x70e9a5*/
        v2[2] = 6; /*0x70e9a8*/
        return; /*0x70e9af*/
      case 1: /*0x70e97d*/
        v3 = a1[109]; /*0x70e9b0*/
        v4 = a1[111]; /*0x70e9b6*/
        if ( v3 == -1 ) /*0x70e9c5*/
          goto LABEL_10; /*0x70e9c5*/
        if ( (int)dword_A8ED84 - v3 >= v4 ) /*0x70e9d1*/
          goto LABEL_11; /*0x70e9d1*/
        v4 -= (int)dword_A8ED84 - v3; /*0x70e9d3*/
LABEL_10:
        if ( !v4 ) /*0x70e9d7*/
        {
LABEL_11:
          a1[112] = 2; /*0x70e9dd*/
          a1[109] = (int)dword_A8ED84; /*0x70e9ed*/
          a1[110] = v21; /*0x70e9f8*/
          a1[111] = 4; /*0x70e9fc*/
        }
        break; /*0x70ea03*/
      case 2: /*0x70e97d*/
        v5 = a1[109]; /*0x70ea04*/
        v6 = a1[111]; /*0x70ea0a*/
        if ( v5 == -1 ) /*0x70ea19*/
          goto LABEL_15; /*0x70ea19*/
        if ( (int)dword_A8ED84 - v5 >= v6 ) /*0x70ea25*/
          goto LABEL_16; /*0x70ea25*/
        v6 -= (int)dword_A8ED84 - v5; /*0x70ea27*/
LABEL_15:
        if ( !v6 ) /*0x70ea2b*/
        {
LABEL_16:
          a1[112] = 3; /*0x70ea31*/
          v7 = Random::Range((_DWORD *)dword_A8B230 + 134, -5, 5); /*0x70ea4b*/
          a1[109] = (int)dword_A8ED84; /*0x70ea59*/
          a1[110] = v21; /*0x70ea5f*/
          a1[111] = v7 + 20; /*0x70ea62*/
        }
        break; /*0x70ea6a*/
      case 3: /*0x70e97d*/
        v8 = a1[109]; /*0x70ea6b*/
        v9 = a1[111]; /*0x70ea71*/
        if ( v8 == -1 ) /*0x70ea80*/
          goto LABEL_20; /*0x70ea80*/
        if ( (int)dword_A8ED84 - v8 >= v9 ) /*0x70ea8c*/
          goto LABEL_21; /*0x70ea8c*/
        v9 -= (int)dword_A8ED84 - v8; /*0x70ea8e*/
LABEL_20:
        if ( !v9 ) /*0x70ea92*/
        {
LABEL_21:
          a1[112] = 4; /*0x70ea98*/
          a1[109] = (int)dword_A8ED84; /*0x70eaa8*/
          a1[110] = v21; /*0x70eab3*/
          a1[111] = 64; /*0x70eab7*/
        }
        break; /*0x70eabe*/
      case 4: /*0x70e97d*/
        v10 = a1[109]; /*0x70eabf*/
        v11 = a1[111]; /*0x70eac5*/
        if ( v10 == -1 ) /*0x70ead4*/
          goto LABEL_25; /*0x70ead4*/
        if ( (int)dword_A8ED84 - v10 >= v11 ) /*0x70eae0*/
          goto LABEL_26; /*0x70eae0*/
        v11 -= (int)dword_A8ED84 - v10; /*0x70eae2*/
LABEL_25:
        if ( !v11 ) /*0x70eae6*/
        {
LABEL_26:
          a1[112] = 5; /*0x70eaec*/
          a1[109] = (int)dword_A8ED84; /*0x70eafc*/
          a1[110] = v21; /*0x70eb07*/
          a1[111] = 64; /*0x70eb0b*/
        }
        break; /*0x70eb12*/
      case 5: /*0x70e97d*/
        v12 = a1[109]; /*0x70eb13*/
        v13 = a1[111]; /*0x70eb19*/
        if ( v12 == -1 ) /*0x70eb28*/
          goto LABEL_30; /*0x70eb28*/
        if ( (int)dword_A8ED84 - v12 >= v13 ) /*0x70eb34*/
          goto LABEL_31; /*0x70eb34*/
        v13 -= (int)dword_A8ED84 - v12; /*0x70eb36*/
LABEL_30:
        if ( !v13 ) /*0x70eb3a*/
        {
LABEL_31:
          if ( Timeout::GetRemaining(a1 + 106) >= 158 ) /*0x70eb50*/
          {
            a1[112] = 4; /*0x70eb66*/
            a1[109] = (int)dword_A8ED84; /*0x70eb7a*/
            a1[110] = v21; /*0x70eb7c*/
            a1[111] = 64; /*0x70eb7f*/
          }
          else
          {
            a1[112] = 6; /*0x70eb52*/
          }
        }
        break; /*0x70eb61*/
      case 6: /*0x70e97d*/
        if ( Timeout::GetRemaining(a1 + 106) <= 30 ) /*0x70eb96*/
        {
          a1[112] = 7; /*0x70eb9c*/
          v14 = a1 + 109; /*0x70ebab*/
          *v14 = dword_A8ED84; /*0x70ebb7*/
          v14[1] = v21; /*0x70ebbd*/
          v14[2] = 6; /*0x70ebc0*/
        }
        return; /*0x70ebc7*/
      case 7: /*0x70e97d*/
        v15 = a1[109]; /*0x70ebc8*/
        v16 = a1[111]; /*0x70ebce*/
        if ( v15 == -1 ) /*0x70ebdd*/
          goto LABEL_39; /*0x70ebdd*/
        if ( (int)dword_A8ED84 - v15 >= v16 ) /*0x70ebe9*/
          goto LABEL_40; /*0x70ebe9*/
        v16 -= (int)dword_A8ED84 - v15; /*0x70ebeb*/
LABEL_39:
        if ( !v16 ) /*0x70ebef*/
        {
LABEL_40:
          a1[112] = 8; /*0x70ebf5*/
          a1[109] = (int)dword_A8ED84; /*0x70ec05*/
          a1[110] = v21; /*0x70ec10*/
          a1[111] = 4; /*0x70ec14*/
        }
        break; /*0x70ec1b*/
      case 8: /*0x70e97d*/
        v17 = a1[109]; /*0x70ec1c*/
        v18 = a1[111]; /*0x70ec22*/
        if ( v17 == -1 ) /*0x70ec31*/
          goto LABEL_44; /*0x70ec31*/
        if ( (int)dword_A8ED84 - v17 >= v18 ) /*0x70ec3d*/
          goto LABEL_45; /*0x70ec3d*/
        v18 -= (int)dword_A8ED84 - v17; /*0x70ec3f*/
LABEL_44:
        if ( !v18 ) /*0x70ec43*/
        {
LABEL_45:
          a1[112] = 9; /*0x70ec45*/
          a1[109] = (int)dword_A8ED84; /*0x70ec55*/
          a1[110] = v21; /*0x70ec60*/
          a1[111] = 20; /*0x70ec64*/
        }
        break; /*0x70ec6b*/
      case 9: /*0x70e97d*/
        v19 = a1[109]; /*0x70ec6c*/
        v20 = a1[111]; /*0x70ec72*/
        if ( v19 != -1 ) /*0x70ec7b*/
        {
          if ( (int)dword_A8ED84 - v19 >= v20 ) /*0x70ec87*/
            goto LABEL_50; /*0x70ec87*/
          v20 -= (int)dword_A8ED84 - v19; /*0x70ec89*/
        }
        if ( !v20 ) /*0x70ec8d*/
          goto LABEL_50; /*0x70ec8d*/
        return; /*0x70ec8d*/
      default:
LABEL_50:
        a1[112] = 10; /*0x70ec8f*/
        return; /*0x70ec9e*/
    }
  }
  else
  {
    a1[112] = 0; /*0x70ec9f*/
  }
}



// ==== 0x0070ECE0  TechnoClass::Fire  this=TechnoClass  sig=csp ====
BulletClass *__thiscall TechnoClass::Fire(TechnoClass *this)
{
  BulletClass *result; // eax
  void *vtable0; // [esp+0h] [ebp-4h]

  result = (BulletClass *)this->RadioClass; /*0x70ece1*/
  vtable0 = this->RadioClass; /*0x70ece5*/
  if ( this->RadioClass ) /*0x70ece5*/
  {
    result = (BulletClass *)this->?; /*0x70eceb*/
    this->? = 1; /*0x70ecf5*/
    this->? = (int)result; /*0x70ecf8*/
    if ( (int)result < 1 ) /*0x70ecfb*/
      this->? = 1; /*0x70ecfd*/
    *(float *)&this->? = (double)(int)vtable0 / (double)this->?; /*0x70ed07*/
  }
  return result; /*0x70ed0b*/
}



// ==== 0x0070ED10  TechnoClass::Update2  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::Update2(TechnoClass *this)
{
  int result; // eax
  double v2; // st7
  int v3; // esi
  int v4; // eax
  int v5; // eax

  result = this->?; /*0x70ed10*/
  if ( result ) /*0x70ed17*/
  {
    v2 = *(float *)&this->? + *(float *)&this->?; /*0x70ed1c*/
    v3 = this->? - 1; /*0x70ed23*/
    this->? = v3; /*0x70ed24*/
    *(float *)&this->? = v2; /*0x70ed29*/
    if ( v3 <= 0 ) /*0x70ed2d*/
    {
      v4 = result - 1; /*0x70ed2f*/
      if ( v4 ) /*0x70ed30*/
      {
        v5 = v4 - 1; /*0x70ed32*/
        if ( v5 ) /*0x70ed33*/
        {
          result = v5 - 1; /*0x70ed35*/
          if ( !result ) /*0x70ed36*/
          {
            this->? = 0; /*0x70ed38*/
            this->? = 0; /*0x70ed3b*/
          }
          return result; /*0x70ed3e*/
        }
      }
      else
      {
        result = (int)this->?; /*0x70ed3f*/
        this->? = 2; /*0x70ed42*/
        this->? = result; /*0x70ed4c*/
        this->? = 0; /*0x70ed4f*/
        if ( result > 1 ) /*0x70ed52*/
          return result; /*0x70ed52*/
      }
      result = (int)this->?; /*0x70ed54*/
      this->? = 3; /*0x70ed57*/
      this->? = result; /*0x70ed61*/
      if ( result < 1 ) /*0x70ed64*/
        this->? = 1; /*0x70ed66*/
      *(float *)&this->? = -((double)(int)this->RadioClass / (double)this->?); /*0x70ed74*/
    }
  }
  return result; /*0x70ed3e*/
}



// ==== 0x0070ED80  TechnoClass::GetAnimationFlags  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::GetAnimationFlags(TechnoClass *this)
{
  int v1; // esi
  int v2; // eax
  int v4; // ebx
  int v5; // ecx
  int v6; // eax
  int v8; // [esp+10h] [ebp+4h]

  v1 = v8; /*0x70ed82*/
  v2 = *(_DWORD *)&stru_A8EB00.?[416]; /*0x70ed86*/
  v4 = this->disguiseBlinkTimer[0]; /*0x70ed8e*/
  v5 = this->disguiseBlinkTimer[2]; /*0x70ed94*/
  if ( v4 != -1 ) /*0x70ed9d*/
  {
    if ( *(_DWORD *)&stru_A8EB00.?[416] - v4 >= v5 ) /*0x70eda5*/
      goto LABEL_7; /*0x70eda5*/
    v5 -= *(_DWORD *)&stru_A8EB00.?[416] - v4; /*0x70eda7*/
  }
  if ( v5 ) /*0x70edab*/
  {
    if ( !(unsigned __int8)House::IsHumanPlayer((House *)this->owner) ) /*0x70edba*/
      return v1; /*0x70edba*/
    v2 = *(_DWORD *)&stru_A8EB00.?[416]; /*0x70edbc*/
  }
LABEL_7:
  v6 = (v2 - this->disguiseCreationFrame + 64) % 256; /*0x70edc1*/
  if ( v6 >= 64 ) /*0x70eddb*/
  {
    if ( v6 < 68 ) /*0x70ede0*/
      return v8 | 2; /*0x70ede0*/
    if ( v6 < 76 ) /*0x70ede5*/
      return v8 | 4; /*0x70edef*/
    if ( v6 < 80 ) /*0x70edf5*/
      return v8 | 2; /*0x70edf5*/
    if ( v6 >= 112 ) /*0x70edfa*/
    {
      if ( v6 < 116 ) /*0x70edff*/
        return v8 | 2; /*0x70edff*/
      if ( v6 < 124 ) /*0x70ee04*/
        return v8 | 4; /*0x70ee0e*/
      if ( v6 < 128 ) /*0x70ee16*/
        return v8 | 2; /*0x70ee18*/
    }
  }
  return v1; /*0x70edea*/
}



// ==== 0x0070EE30  TechnoClass::CheckFireCooldown  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::CheckFireCooldown(TechnoClass *this)
{
  int v2; // edx
  int v3; // eax
  int result; // eax
  HouseClass *v5; // edi
  int v6; // [esp+Ch] [ebp+4h]

  v2 = this->disguiseBlinkTimer[0]; /*0x70ee34*/
  v3 = this->disguiseBlinkTimer[2]; /*0x70ee3a*/
  if ( v2 != -1 ) /*0x70ee43*/
  {
    if ( *(_DWORD *)&stru_A8EB00.?[416] - v2 >= v3 ) /*0x70ee4f*/
      goto LABEL_6; /*0x70ee4f*/
    v3 -= *(_DWORD *)&stru_A8EB00.?[416] - v2; /*0x70ee51*/
  }
  if ( v3 ) /*0x70ee55*/
  {
    result = House::IsHumanPlayer((House *)this->owner); /*0x70ee5d*/
    if ( !(_BYTE)result ) /*0x70ee64*/
      goto LABEL_14; /*0x70ee64*/
  }
LABEL_6:
  if ( (unsigned __int8)House::IsHumanPlayer((House *)this->owner) /*0x70ee7d*/
    && (*((unsigned __int8 (__thiscall **)(TechnoClass *))this->RadioClass + 49))(this) )
  {
    result = (*(_DWORD *)&stru_A8EB00.?[416] - this->disguiseCreationFrame + 64) % 256; /*0x70eea4*/
    if ( result >= 72 && result <= 119 ) /*0x70eead*/
    {
      LOBYTE(result) = 0; /*0x70eeb0*/
      return result; /*0x70eeb3*/
    }
    goto LABEL_14; /*0x70eead*/
  }
  v5 = (HouseClass *)(*((int (__thiscall **)(TechnoClass *))this->RadioClass + 111))(this); /*0x70eec0*/
  result = (*((int (__thiscall **)(TechnoClass *))this->RadioClass + 49))(this); /*0x70eec6*/
  if ( !(_BYTE)result || !v5 || (result = HouseClass::HasType(v5, *(_DWORD *)(v6 + 48)), (_BYTE)result) ) /*0x70eee5*/
LABEL_14:
    LOBYTE(result) = 1; /*0x70eeec*/
  return result; /*0x70eeaf*/
}



// ==== 0x0070EF00  TechnoClass::CanDamageTarget  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::CanDamageTarget(TechnoClass *this)
{
  int (__thiscall **vtable0)(TechnoClass *, int); // ebx
  int v3; // eax
  int result; // eax
  int v5; // esi
  int v6; // [esp+10h] [ebp+4h]

  vtable0 = (int (__thiscall **)(TechnoClass *, int))this->RadioClass; /*0x70ef09*/
  v3 = (*((int (__thiscall **)(TechnoClass *, int))this->RadioClass + 185))(this, v6); /*0x70ef0c*/
  result = vtable0[254](this, v3); /*0x70ef15*/
  v5 = *(_DWORD *)result; /*0x70ef1b*/
  if ( *(_DWORD *)result ) /*0x70ef1b*/
  {
    result = (*(int (__thiscall **)(int))(*(_DWORD *)v6 + 44))(v6); /*0x70ef29*/
    if ( result == 36 ) /*0x70ef2f*/
    {
      if ( *(_BYTE *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 6121) || *(_BYTE *)(v5 + 312) ) /*0x70ef41*/
      {
        LOBYTE(result) = 1; /*0x70ef4d*/
        return result; /*0x70ef50*/
      }
    }
    else if ( *(_BYTE *)(v5 + 312) ) /*0x70ef53*/
    {
      result = (*(int (__thiscall **)(int))(*(_DWORD *)v6 + 44))(v6); /*0x70ef61*/
      if ( result == 11 ) /*0x70ef67*/
      {
        result = *(_DWORD *)(v6 + 68); /*0x70ef69*/
        if ( result != -1 ) /*0x70ef6f*/
        {
          if ( *(_BYTE *)(*(_DWORD *)(*(_DWORD *)stru_A83D50.__pad_34 + 4 * result) + 693) ) /*0x70ef7a*/
          {
            LOBYTE(result) = 1; /*0x70ef86*/
            return result; /*0x70ef89*/
          }
        }
      }
      if ( v6 ) /*0x70ef8e*/
      {
        if ( (*(_BYTE *)(v6 + 20) & 2) != 0 ) /*0x70ef94*/
        {
          result = (*(int (__thiscall **)(int))(*(_DWORD *)v6 + 196))(v6); /*0x70ef9a*/
          if ( (_BYTE)result ) /*0x70efa2*/
          {
            result = (*(int (__thiscall **)(int, int))(*(_DWORD *)v6 + 208))(v6, 1); /*0x70efaa*/
            if ( !result ) /*0x70efb2*/
              return 1; /*0x70efb9*/
          }
        }
      }
    }
  }
  LOBYTE(result) = 0; /*0x70efbe*/
  return result; /*0x70ef4b*/
}



// ==== 0x0070EFD0  TechnoClass::HasPassengers  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::HasPassengers(TechnoClass *this)
{
  return this->empLockRemaining > 0; /*0x70efdd*/
}



// ==== 0x0070EFE0  TechnoClass::GetMaxSpeed  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::GetMaxSpeed(TechnoClass *this)
{
  int v1; // eax

  v1 = (*((int (__thiscall **)(TechnoClass *))this->RadioClass + 33))(this); /*0x70efe2*/
  if ( v1 ) /*0x70efea*/
    return *(_DWORD *)(v1 + 1656); /*0x70efec*/
  else
    return 0; /*0x70eff3*/
}



// ==== 0x0070F000  TechnoClass::ClearUnknownFlag  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::ClearUnknownFlag(TechnoClass *this)
{
  int v2; // [esp+4h] [ebp+4h]

  return *(char *)(v2 + 12); /*0x70f008*/
}



// ==== 0x0070F010  TechnoClass::COMStub_Return0_298  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::COMStub_Return0_298(TechnoClass *this)
{
  int result; // eax

  return result; /*0x70f010*/
}



// ==== 0x0070F020  TechnoClass::StubReturnFalse5  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::StubReturnFalse5(TechnoClass *this)
{
  int result; // eax

  LOBYTE(result) = 0; /*0x70f020*/
  return result; /*0x70f022*/
}



// ==== 0x0070F030  TechnoClass::StubReturnFalse6  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::StubReturnFalse6(TechnoClass *this)
{
  int result; // eax

  LOBYTE(result) = 0; /*0x70f030*/
  return result; /*0x70f032*/
}



// ==== 0x0070F040  TechnoClass::checkMovementRestrictions  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::checkMovementRestrictions(TechnoClass *this)
{
  return -1; /*0x70f043*/
}



// ==== 0x0070F050  TechnoClass::ProcessCellClearance  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::ProcessCellClearance(TechnoClass *this)
{
  _DWORD *v2; // [esp+Ch] [ebp+4h]

  *v2 = -1; /*0x70f05e*/
  v2[1] = -1; /*0x70f063*/
  v2[2] = -1; /*0x70f066*/
  return (int)v2; /*0x70f069*/
}



// ==== 0x0070F070  TechnoClass::GetTypeVt40  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::GetTypeVt40(TechnoClass *this)
{
  int v1; // eax

  v1 = (*((int (__thiscall **)(TechnoClass *))this->RadioClass + 33))(this); /*0x70f072*/
  return (*(int (__thiscall **)(int))(*(_DWORD *)v1 + 160))(v1);
}



// ==== 0x0070F090  ObjectClass::GetTypeVt41  this=TechnoClass  sig=csp ====
int __thiscall ObjectClass::GetTypeVt41(ObjectClass *this)
{
  int v1; // eax

  v1 = (*((int (__thiscall **)(ObjectClass *))this->AbstractClass + 33))(this); /*0x70f092*/
  return (*(int (__thiscall **)(int))(*(_DWORD *)v1 + 164))(v1);
}



// ==== 0x0070F0B0  TacticalClass::MapSpecialDrawMode  this=TacticalClass  sig=csp ====
int __thiscall TacticalClass::MapSpecialDrawMode(TacticalClass *this, int a2)
{
  char v3; // al
  int result; // eax
  bool v5; // zf

  v3 = Render_Draw_731BF0(); /*0x70f0b3*/
  if ( this == (TacticalClass *)1 ) /*0x70f0bb*/
  {
    if ( v3 ) /*0x70f0bf*/
      return 62; /*0x70f0c7*/
    return (int)this; /*0x70f0bf*/
  }
  if ( this != (TacticalClass *)5 ) /*0x70f0cd*/
    return (int)this; /*0x70f0cd*/
  v5 = v3 == 0; /*0x70f0cf*/
  result = 63; /*0x70f0d1*/
  if ( v5 ) /*0x70f0d6*/
    return (int)this; /*0x70f0d8*/
  return result; /*0x70f0c6*/
}



// ==== 0x0070F0E0  TechnoClass::StubReturnFalse7  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::StubReturnFalse7(TechnoClass *this)
{
  int result; // eax

  LOBYTE(result) = 0; /*0x70f0e0*/
  return result; /*0x70f0e2*/
}



// ==== 0x0070F0F0  TechnoClass::StubReturnFalse8  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::StubReturnFalse8(TechnoClass *this)
{
  int result; // eax

  LOBYTE(result) = 0; /*0x70f0f0*/
  return result; /*0x70f0f2*/
}



// ==== 0x0070F100  TechnoClass::COMStub_Return0_307  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::COMStub_Return0_307(TechnoClass *this)
{
  int result; // eax

  return result; /*0x70f100*/
}



// ==== 0x0070F110  TechnoClass::StubReturnFalse9  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::StubReturnFalse9(TechnoClass *this)
{
  int result; // eax

  LOBYTE(result) = 0; /*0x70f110*/
  return result; /*0x70f112*/
}



// ==== 0x0070F120  RevealTechnoClassRadarEvent  this=-  sig=ida-proto ====
DWORD __fastcall TechnoClass_RevealRadarEvent(int a1, int a2)
{
  int v3; // edi
  DWORD Ticks; // eax
  int v5; // eax
  DWORD result; // eax
  #375 *v7; // [esp-1Ch] [ebp-2Ch]
  _BYTE v8[4]; // [esp+4h] [ebp-Ch] BYREF
  int v9; // [esp+8h] [ebp-8h]

  if ( a1 && a2 ) /*0x70f12c*/
  {
    dword_B0EB3C = a2; /*0x70f134*/
    dword_B0EB38 = a1; /*0x70f13a*/
    v3 = *((_DWORD *)dword_8871E0 + 1536); /*0x70f140*/
    Ticks = Timer::GetTicks(); /*0x70f14a*/
    dword_B0EA74 = v9; /*0x70f161*/
    v7 = dword_A83D4C; /*0x70f169*/
    dword_B0EA70 = Ticks; /*0x70f16e*/
    dword_B0EA78 = v3; /*0x70f173*/
    v5 = (*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)a1 + 72))(a1, v8); /*0x70f180*/
    return MapClass::RevealArea0(v5, 2, v7, 0, 0, 0, 1, 1); /*0x70f189*/
  }
  else
  {
    dword_B0EB3C = 0; /*0x70f198*/
    dword_B0EB38 = 0; /*0x70f1a2*/
    result = Timer::GetTicks(); /*0x70f1ac*/
    dword_B0EA70 = result; /*0x70f1b7*/
    dword_B0EA74 = v9; /*0x70f1bc*/
    dword_B0EA78 = 0; /*0x70f1c2*/
  }
  return result; /*0x70f18f*/
}



// ==== 0x0070F1D0  ObjectClass::DrawBuildingRangeIndicator  this=ObjectClass  sig=csp ====
char __thiscall DrawBuildingRangeIndicator(ObjectClass *this, int *a2, int a3)
{
  void **v4; // eax
  AnimClass *v5; // edi
  int *v6; // eax
  int v7; // ebp
  int v8; // ebx
  int v9; // esi
  int v10; // ecx
  int v11; // edi
  int v12; // eax
  int v14; // [esp+80h] [ebp-D4h]
  int v15; // [esp+84h] [ebp-D0h]
  int v16; // [esp+88h] [ebp-CCh]
  int v17; // [esp+98h] [ebp-BCh]
  int v18; // [esp+9Ch] [ebp-B8h]
  int v19; // [esp+A0h] [ebp-B4h]
  int v20; // [esp+A8h] [ebp-ACh]
  _DWORD v21[2]; // [esp+ACh] [ebp-A8h] BYREF
  _DWORD v22[2]; // [esp+B4h] [ebp-A0h] BYREF
  _DWORD v23[2]; // [esp+BCh] [ebp-98h] BYREF
  _DWORD v24[2]; // [esp+C4h] [ebp-90h] BYREF
  _DWORD v25[2]; // [esp+CCh] [ebp-88h] BYREF
  _DWORD v26[2]; // [esp+D4h] [ebp-80h] BYREF
  _DWORD v27[2]; // [esp+DCh] [ebp-78h] BYREF
  _DWORD v28[2]; // [esp+E4h] [ebp-70h] BYREF
  _DWORD v29[2]; // [esp+ECh] [ebp-68h] BYREF
  _DWORD v30[2]; // [esp+F4h] [ebp-60h] BYREF
  _DWORD v31[2]; // [esp+FCh] [ebp-58h] BYREF
  _DWORD v32[2]; // [esp+104h] [ebp-50h] BYREF
  _DWORD v33[2]; // [esp+10Ch] [ebp-48h] BYREF
  _DWORD v34[2]; // [esp+114h] [ebp-40h] BYREF
  _DWORD v35[2]; // [esp+11Ch] [ebp-38h] BYREF
  _DWORD v36[2]; // [esp+124h] [ebp-30h] BYREF
  _DWORD v37[2]; // [esp+12Ch] [ebp-28h] BYREF
  _DWORD v38[2]; // [esp+134h] [ebp-20h] BYREF
  _DWORD v39[2]; // [esp+13Ch] [ebp-18h] BYREF
  int v40; // [esp+144h] [ebp-10h] BYREF
  _DWORD v41[3]; // [esp+148h] [ebp-Ch] BYREF

  v4 = (void **)(*((int (__thiscall **)(ObjectClass *, _DWORD, _DWORD))this->AbstractClass + 26))(this, 0, 0); /*0x70f1e0*/
  if ( !v4 ) /*0x70f1e5*/
  {
    v4 = (void **)*((_DWORD *)this + 75); /*0x70f1eb*/
    if ( !v4 ) /*0x70f1f3*/
    {
      if ( *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 184) ) /*0x70f1ff*/
      {
        v5 = (AnimClass *)__2_YAPAXI_Z(0x1C8u); /*0x70f217*/
        if ( v5 ) /*0x70f21e*/
        {
          v6 = (int *)(*((int (__thiscall **)(ObjectClass *, _DWORD *))this->AbstractClass + 18))(this, v41); /*0x70f239*/
          v4 = AnimClass::ctor( /*0x70f24c*/
                 v5,
                 *(void **)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 184),
                 v6,
                 0,
                 1,
                 (void *)0x600,
                 0,
                 0);
        }
        else
        {
          v4 = 0; /*0x70f253*/
        }
        *((_DWORD *)this + 75) = v4; /*0x70f257*/
        if ( v4 ) /*0x70f25d*/
        {
          BuildingClass::AimTurret((BuildingClass *)v4, this); /*0x70f266*/
          LOBYTE(v4) = HIBYTE(stru_A8EB00.ObjectTypeClass[31]); /*0x70f26b*/
          if ( !HIBYTE(stru_A8EB00.ObjectTypeClass[31]) ) /*0x70f272*/
          {
            v4 = (void **)*((_DWORD *)this + 75); /*0x70f278*/
            *((_BYTE *)v4 + 413) = 1; /*0x70f280*/
          }
        }
      }
      else
      {
        if ( *(_DWORD *)(*(_DWORD *)&stru_87F5F0.__pad_58[124] + 4) == 1 ) /*0x70f29b*/
          v7 = *(unsigned __int8 *)(*(_DWORD *)(*(_DWORD *)&stru_87F5F0.__pad_58[124] + 372) + 12); /*0x70f2a8*/
        else
          v7 = *(unsigned __int16 *)(*(_DWORD *)(*(_DWORD *)&stru_87F5F0.__pad_58[124] + 372) + 24); /*0x70f2b4*/
        v8 = *a2; /*0x70f2c5*/
        v9 = a2[1]; /*0x70f2c7*/
        if ( (stru_A8EB00.?[416] & 8) != 0 ) /*0x70f2d1*/
        {
          v10 = 12; /*0x70f2d3*/
          v16 = 8; /*0x70f2d8*/
          v15 = 12; /*0x70f2dc*/
        }
        else
        {
          v15 = 10; /*0x70f2e2*/
          v16 = 6; /*0x70f2ea*/
          v10 = 10; /*0x70f2f2*/
        }
        v14 = v8 + v10; /*0x70f2fd*/
        v18 = v16 - v10; /*0x70f309*/
        v17 = 2; /*0x70f314*/
        v19 = 4 - v10; /*0x70f31c*/
        v11 = -v10; /*0x70f325*/
        v12 = -v16; /*0x70f327*/
        v20 = -4 - v10; /*0x70f32f*/
        while ( 1 ) /*0x70f33e*/
        {
          v32[1] = v9 + v11; /*0x70f33e*/
          v32[0] = v8 + v12; /*0x70f348*/
          v24[1] = v9 + v11; /*0x70f34f*/
          v24[0] = v11 + v8; /*0x70f365*/
          (*(void (__thiscall **)(AudioStream *, _DWORD *, _DWORD *, int))(*(_DWORD *)g_DSurface_Hidden_2->__pad_0 + 48))( /*0x70f370*/
            g_DSurface_Hidden_2,
            v24,
            v32,
            v7);
          v34[1] = v9 + v11; /*0x70f37a*/
          v34[0] = v14; /*0x70f385*/
          v26[0] = v18 + v14; /*0x70f395*/
          v26[1] = v9 + v11; /*0x70f399*/
          (*(void (__thiscall **)(AudioStream *, _DWORD *, _DWORD *, int))(*(_DWORD *)g_DSurface_Hidden_2->__pad_0 + 48))( /*0x70f3b3*/
            g_DSurface_Hidden_2,
            v26,
            v34,
            v7);
          v21[0] = v14; /*0x70f3c0*/
          v21[1] = v9 - v16; /*0x70f3c4*/
          v28[0] = v14; /*0x70f3cb*/
          v28[1] = v9 + v11; /*0x70f3cf*/
          (*(void (__thiscall **)(AudioStream *, _DWORD *, _DWORD *, int))(*(_DWORD *)g_DSurface_Hidden_2->__pad_0 + 48))( /*0x70f3e6*/
            g_DSurface_Hidden_2,
            v28,
            v21,
            v7);
          v35[1] = v9 + v15; /*0x70f3f9*/
          v35[0] = v14; /*0x70f403*/
          v30[0] = v14; /*0x70f40a*/
          v30[1] = v9 + v16; /*0x70f41f*/
          (*(void (__thiscall **)(AudioStream *, _DWORD *, _DWORD *, int))(*(_DWORD *)g_DSurface_Hidden_2->__pad_0 + 48))( /*0x70f430*/
            g_DSurface_Hidden_2,
            v30,
            v35,
            v7);
          v36[0] = v18 + v14; /*0x70f43f*/
          v22[0] = v14; /*0x70f44f*/
          v36[1] = v9 + v15; /*0x70f45b*/
          v22[1] = v9 + v15; /*0x70f462*/
          (*(void (__thiscall **)(AudioStream *, _DWORD *, _DWORD *, int))(*(_DWORD *)g_DSurface_Hidden_2->__pad_0 + 48))( /*0x70f46e*/
            g_DSurface_Hidden_2,
            v22,
            v36,
            v7);
          v23[0] = v11 + v8; /*0x70f478*/
          v23[1] = v9 + v15; /*0x70f484*/
          v25[1] = v9 + v15; /*0x70f488*/
          v25[0] = v8 - v16; /*0x70f48c*/
          (*(void (__thiscall **)(AudioStream *, _DWORD *, _DWORD *, int))(*(_DWORD *)g_DSurface_Hidden_2->__pad_0 + 48))( /*0x70f4a3*/
            g_DSurface_Hidden_2,
            v25,
            v23,
            v7);
          v27[0] = v11 + v8; /*0x70f4b2*/
          v27[1] = v9 + v16; /*0x70f4bf*/
          v29[0] = v11 + v8; /*0x70f4c6*/
          v29[1] = v9 + v15; /*0x70f4d4*/
          (*(void (__thiscall **)(AudioStream *, _DWORD *, _DWORD *, int))(*(_DWORD *)g_DSurface_Hidden_2->__pad_0 + 48))( /*0x70f4e6*/
            g_DSurface_Hidden_2,
            v29,
            v27,
            v7);
          v31[1] = v9 + v11; /*0x70f4ef*/
          v31[0] = v11 + v8; /*0x70f4fa*/
          v33[0] = v11 + v8; /*0x70f506*/
          v33[1] = v9 - v16; /*0x70f50d*/
          (*(void (__thiscall **)(AudioStream *, _DWORD *, _DWORD *, int))(*(_DWORD *)g_DSurface_Hidden_2->__pad_0 + 48))( /*0x70f52d*/
            g_DSurface_Hidden_2,
            v33,
            v31,
            v7);
          v37[0] = v14 + v19; /*0x70f540*/
          v37[1] = v9; /*0x70f556*/
          v39[0] = v20 + v14; /*0x70f55d*/
          v39[1] = v9; /*0x70f564*/
          (*(void (__thiscall **)(AudioStream *, _DWORD *, _DWORD *, int))(*(_DWORD *)g_DSurface_Hidden_2->__pad_0 + 48))( /*0x70f575*/
            g_DSurface_Hidden_2,
            v39,
            v37,
            v7);
          v38[1] = v9 + 4; /*0x70f581*/
          v38[0] = v8; /*0x70f58b*/
          v41[0] = v8; /*0x70f592*/
          v41[1] = v9 - 4; /*0x70f599*/
          (*(void (__thiscall **)(AudioStream *, _DWORD *, _DWORD *, int))(*(_DWORD *)g_DSurface_Hidden_2->__pad_0 + 48))( /*0x70f5b3*/
            g_DSurface_Hidden_2,
            v41,
            v38,
            v7);
          ++v8; /*0x70f5ba*/
          ++v14; /*0x70f5c3*/
          ++v9; /*0x70f5d9*/
          v4 = (void **)Color::ConvertToRGB( /*0x70f5e3*/
                          (Color *)(*(_DWORD *)(*(_DWORD *)&stru_B054D0.m_1[3]
                                              + 4 * *(_DWORD *)&dword_A83D4C[134].__pad_90[4])
                                  + 776),
                          (int)&v40);
          v7 = ((unsigned __int8)*(_WORD *)v4 >> g_BitShift_Green_0 << g_BitShift_Red) /*0x70f64a*/
             | ((unsigned __int8)HIBYTE(*(_WORD *)v4) >> g_BitMask_Blue << g_BitMask_Green)
             | (*((unsigned __int8 *)v4 + 2) >> g_BitMask_Red << g_BitShift_Blue);
          LOBYTE(v4) = --v17; /*0x70f64c*/
          if ( !v17 ) /*0x70f651*/
            break; /*0x70f651*/
          v12 = -v16; /*0x70f335*/
        }
      }
    }
  }
  return (char)v4; /*0x70f27e*/
}



// ==== 0x0070F670  FootClass::SetThreatBounds  this=FootClass  sig=csp ====
void __thiscall FootClass::SetThreatBounds(FootClass *this, _DWORD *a2)
{
  int v3; // eax
  int (__thiscall **vtable0)(FootClass *); // edx
  int v5; // eax
  int v6; // [esp-4h] [ebp-Ch]

  if ( a2 ) /*0x70f67a*/
  {
    v3 = (*((int (__thiscall **)(FootClass *))this->TechnoClass + 176))(this); /*0x70f67e*/
    vtable0 = (int (__thiscall **)(FootClass *))this->TechnoClass; /*0x70f684*/
    v6 = v3; /*0x70f686*/
    this->? = v3; /*0x70f689*/
    v5 = vtable0[14](this); /*0x70f68f*/
    CellClass::SetThreatBounds((CellClass *)a2, v5, v6); /*0x70f695*/
  }
}



// ==== 0x0070F6A0  FootClass::ApplyThreatBounds  this=FootClass  sig=csp ====
void __thiscall FootClass::ApplyThreatBounds(FootClass *this, _DWORD *a2)
{
  int v3; // eax
  int v4; // [esp-4h] [ebp-Ch]

  if ( a2 ) /*0x70f6aa*/
  {
    v4 = -this->?; /*0x70f6b6*/
    v3 = (*((int (**)(void))this->TechnoClass + 14))(); /*0x70f6b7*/
    CellClass::SetThreatBounds((CellClass *)a2, v3, v4); /*0x70f6bd*/
    this->? = 0; /*0x70f6c2*/
  }
}



// ==== 0x0070F6E0  BuildingClass::UpdateThreatBounds  this=BuildingClass  sig=csp ====
void __thiscall BuildingClass::UpdateThreatBounds(BuildingClass *this, _DWORD *a2)
{
  int v3; // eax
  int (__thiscall **vtable0)(BuildingClass *); // eax
  int v5; // eax
  int (__thiscall **v6)(BuildingClass *); // edx
  int v7; // eax
  int v8; // [esp-4h] [ebp-Ch]
  int v9; // [esp-4h] [ebp-Ch]

  if ( a2 ) /*0x70f6ea*/
  {
    v8 = -this->?; /*0x70f6f6*/
    v3 = (*((int (**)(void))this->TechnoClass + 14))(); /*0x70f6f7*/
    CellClass::SetThreatBounds((CellClass *)a2, v3, v8); /*0x70f6fd*/
    vtable0 = (int (__thiscall **)(BuildingClass *))this->TechnoClass; /*0x70f702*/
    this->? = 0; /*0x70f706*/
    v5 = vtable0[176](this); /*0x70f710*/
    v6 = (int (__thiscall **)(BuildingClass *))this->TechnoClass; /*0x70f716*/
    v9 = v5; /*0x70f718*/
    this->? = v5; /*0x70f71b*/
    v7 = v6[14](this); /*0x70f721*/
    CellClass::SetThreatBounds((CellClass *)a2, v7, v9); /*0x70f727*/
  }
}



// ==== 0x0070F740  ObjectClass::method_70F740  this=ObjectClass  sig=csp ====
int __thiscall sub_70F740(ObjectClass *this, int a2)
{
  ObjectClass *v2; // ecx
  int v4; // [esp+4h] [ebp-8h]

  v2 = (ObjectClass *)((char *)this + 384); /*0x70f74c*/
  v2->AbstractClass = *(void **)&stru_A8EB00.?[416]; /*0x70f752*/
  v2->? = (void *)v4; /*0x70f758*/
  v2->? = (void *)a2; /*0x70f75b*/
  return v4; /*0x70f75e*/
}



// ==== 0x0070F770  Mission::GetMissionDelay  this=Mission  sig=csp ====
int __thiscall Mission::GetMissionDelay(Mission *this)
{
  int Mission_field_0x180; // edx
  int result; // eax
  int *p_Mission_field_0x180; // esi
  int v4; // [esp+8h] [ebp-8h]

  Mission_field_0x180 = this->Mission_field_0x180; /*0x70f770*/
  result = this->Mission_field_0x188; /*0x70f779*/
  p_Mission_field_0x180 = &this->Mission_field_0x180; /*0x70f783*/
  if ( Mission_field_0x180 != -1 ) /*0x70f789*/
  {
    if ( *(_DWORD *)&stru_A8EB00.?[416] - Mission_field_0x180 >= result ) /*0x70f795*/
      return result; /*0x70f795*/
    result -= *(_DWORD *)&stru_A8EB00.?[416] - Mission_field_0x180; /*0x70f797*/
  }
  if ( result > 10 ) /*0x70f79c*/
  {
    result = dword_A8E7AC; /*0x70f79e*/
    if ( !dword_A8E7AC ) /*0x70f7a5*/
    {
      result = Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 4, 8); /*0x70f7b6*/
      *p_Mission_field_0x180 = *(_DWORD *)&stru_A8EB00.?[416]; /*0x70f7c1*/
      p_Mission_field_0x180[1] = v4; /*0x70f7c7*/
      p_Mission_field_0x180[2] = result; /*0x70f7ca*/
    }
  }
  return result; /*0x70f7cd*/
}



// ==== 0x0070F7E0  FootClass::updateThreat  this=FootClass  sig=csp ====
bool __thiscall FootClass::updateThreat(FootClass *this)
{
  int v1; // edx
  int v2; // eax

  v1 = this->?[0]; /*0x70f7e0*/
  v2 = this->?[2]; /*0x70f7e6*/
  if ( v1 != -1 ) /*0x70f7ef*/
  {
    if ( *(_DWORD *)&stru_A8EB00.?[416] - v1 < v2 ) /*0x70f7fb*/
      return v2 == *(_DWORD *)&stru_A8EB00.?[416] - v1; /*0x70f808*/
    v2 = 0; /*0x70f809*/
  }
  return v2 == 0; /*0x70f808*/
}



// ==== 0x0070F820  ObjectClass::GetPriorityTarget  this=ObjectClass  sig=csp ====
int __thiscall ObjectClass::GetPriorityTarget(TechnoClass *this)
{
  int mindControlledBy; // eax

  mindControlledBy = this->mindControlledBy; /*0x70f820*/
  if ( mindControlledBy ) /*0x70f828*/
    return CaptureManagerClass::GetOriginalOwner(*(CaptureManagerClass **)(mindControlledBy + 700), (int)this); /*0x70f831*/
  if ( this->mindControlledBy_house ) /*0x70f837*/
    return this->originalOwnerHouse; /*0x70f841*/
  return this->owner; /*0x70f836*/
}



// ==== 0x0070F850  TechnoClass::SetIdleState  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::SetIdleState(TechnoClass *this)
{
  int (__thiscall **vtable0)(TechnoClass *, int); // eax

  (*((void (__thiscall **)(TechnoClass *, _DWORD, int))this->RadioClass + 288))(this, 0, 1); /*0x70f859*/
  (*((void (__thiscall **)(TechnoClass *, _DWORD))this->RadioClass + 242))(this, 0); /*0x70f865*/
  vtable0 = (int (__thiscall **)(TechnoClass *, int))this->RadioClass; /*0x70f86b*/
  this->focus = 0; /*0x70f871*/
  return vtable0[124](this, 5); /*0x70f881*/
}



// ==== 0x0070F8F0  TechnoClass::FindBridgeCell  this=TechnoClass  sig=csp ====
int __thiscall BuildingClass::FindBridgeCell(TechnoClass *this)
{
  int (__thiscall **vtable0)(TechnoClass *, char *); // edx
  _DWORD *v2; // eax
  int v4; // ebx
  int v5; // edi
  int v6; // esi
  Cell *v7; // eax
  Building *v8; // eax
  int NthOfType; // eax
  Cell *v10; // eax
  Building *v11; // eax
  int v12; // eax
  Cell *v13; // eax
  Building *v14; // eax
  int v15; // eax
  Cell *v16; // eax
  Building *v17; // eax
  int v18; // eax
  __int16 v19[2]; // [esp+4h] [ebp-34h] BYREF
  int v20; // [esp+8h] [ebp-30h]
  int v21; // [esp+Ch] [ebp-2Ch]
  int v22; // [esp+10h] [ebp-28h]
  int v23; // [esp+14h] [ebp-24h]
  int v24; // [esp+18h] [ebp-20h]
  int v25; // [esp+1Ch] [ebp-1Ch]
  int v26; // [esp+20h] [ebp-18h]
  __int16 v27[3]; // [esp+24h] [ebp-14h] BYREF
  int v28; // [esp+2Ah] [ebp-Eh] BYREF
  int v29; // [esp+2Eh] [ebp-Ah]
  _DWORD *v30; // [esp+3Ch] [ebp+4h]
  int v31; // [esp+40h] [ebp+8h]

  vtable0 = (int (__thiscall **)(TechnoClass *, char *))this->RadioClass; /*0x70f8f8*/
  v20 = *(_DWORD *)&g_BuildingLoadQueue_Array.?[24]; /*0x70f8fa*/
  v2 = (_DWORD *)vtable0[18](this, (char *)&v28 + 2); /*0x70f903*/
  v19[0] = *v2 / 256; /*0x70f916*/
  v19[1] = v2[1] / 256; /*0x70f92e*/
  *(_DWORD *)v27 = *(_DWORD *)v19; /*0x70f937*/
  if ( *((_DWORD *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v27) + 59) == 5 ) /*0x70f94d*/
  {
    *v30 = *(_DWORD *)v27; /*0x70f957*/
    return (int)v30; /*0x70f94f*/
  }
  else
  {
    v4 = 1; /*0x70f967*/
    v5 = -1; /*0x70f96c*/
    if ( v31 > 1 ) /*0x70f971*/
    {
      v6 = -1; /*0x70f977*/
      v25 = -1; /*0x70f97a*/
      do /*0x70f97e*/
      {
        if ( v6 <= v4 ) /*0x70f980*/
        {
          do /*0x70fb15*/
          {
            LOWORD(v29) = -(__int16)v4; /*0x70f992*/
            LOWORD(v21) = v6 + v27[0]; /*0x70f9a0*/
            HIWORD(v21) = v27[1] - v4; /*0x70f9a5*/
            *(_DWORD *)v19 = v21; /*0x70f9b2*/
            v7 = (Cell *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v19); /*0x70f9bc*/
            if ( (unsigned __int8)Cell::IsBridge2(v7) ) /*0x70f9c3*/
            {
              v8 = (Building *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v19); /*0x70f9d6*/
              NthOfType = Building::GetNthOfType(v8); /*0x70f9dd*/
              if ( NthOfType > v5 ) /*0x70f9e4*/
              {
                v5 = NthOfType; /*0x70f9e6*/
                v20 = *(_DWORD *)v19; /*0x70f9ec*/
              }
            }
            LOWORD(v22) = v6 + v27[0]; /*0x70f9fe*/
            HIWORD(v22) = v4 + v27[1]; /*0x70fa03*/
            *(_DWORD *)v19 = v22; /*0x70fa16*/
            v10 = (Cell *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v19); /*0x70fa1a*/
            if ( (unsigned __int8)Cell::IsBridge2(v10) ) /*0x70fa21*/
            {
              v11 = (Building *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v19); /*0x70fa34*/
              v12 = Building::GetNthOfType(v11); /*0x70fa3b*/
              if ( v12 > v5 ) /*0x70fa42*/
              {
                v5 = v12; /*0x70fa48*/
                v20 = *(_DWORD *)v19; /*0x70fa4a*/
              }
            }
            LOWORD(v26) = -(__int16)v4; /*0x70fa56*/
            LOWORD(v23) = v27[0] - v4; /*0x70fa64*/
            HIWORD(v23) = v6 + v27[1]; /*0x70fa69*/
            *(_DWORD *)v19 = v23; /*0x70fa76*/
            v13 = (Cell *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v19); /*0x70fa80*/
            if ( (unsigned __int8)Cell::IsBridge2(v13) ) /*0x70fa87*/
            {
              v14 = (Building *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v19); /*0x70fa9a*/
              v15 = Building::GetNthOfType(v14); /*0x70faa1*/
              if ( v15 > v5 ) /*0x70faa8*/
              {
                v5 = v15; /*0x70faae*/
                v20 = *(_DWORD *)v19; /*0x70fab0*/
              }
            }
            LOWORD(v24) = v4 + v27[0]; /*0x70fac6*/
            HIWORD(v24) = v6 + v27[1]; /*0x70facb*/
            *(_DWORD *)v19 = v24; /*0x70fada*/
            v16 = (Cell *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v19); /*0x70fade*/
            if ( (unsigned __int8)Cell::IsBridge2(v16) ) /*0x70fae5*/
            {
              v17 = (Building *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v19); /*0x70faf8*/
              v18 = Building::GetNthOfType(v17); /*0x70faff*/
              if ( v18 > v5 ) /*0x70fb06*/
              {
                v5 = v18; /*0x70fb08*/
                v20 = *(_DWORD *)v19; /*0x70fb0e*/
              }
            }
            ++v6; /*0x70fb12*/
          }
          while ( v6 <= v4 ); /*0x70fb15*/
          if ( v5 != -1 ) /*0x70fb1e*/
            break; /*0x70fb1e*/
          v6 = v25; /*0x70fb20*/
        }
        ++v4; /*0x70fb28*/
        v25 = --v6; /*0x70fb2c*/
      }
      while ( v4 < v31 ); /*0x70f97e*/
    }
    *v30 = v20; /*0x70fb36*/
    return (int)v30; /*0x70fb36*/
  }
}



// ==== 0x0070FB50  TechnoClass::CanSelfRepair  this=TechnoClass  sig=csp ====
bool __thiscall TechnoClass::CanSelfRepair(TechnoClass *this)
{
  _DWORD *v3; // eax

  if ( !*(_BYTE *)((*((int (__thiscall **)(TechnoClass *))this->RadioClass + 33))(this) + 3374) ) /*0x70fb5b*/
    return 0; /*0x70fb65*/
  if ( !*(_BYTE *)((*((int (__thiscall **)(TechnoClass *))this->RadioClass + 33))(this) + 3233) ) /*0x70fb73*/
    return 0; /*0x70fb7d*/
  v3 = (_DWORD *)(*((int (__thiscall **)(TechnoClass *))this->RadioClass + 253))(this); /*0x70fb85*/
  if ( !v3 || !*v3 ) /*0x70fb8f*/
    return 0; /*0x70fb94*/
  if ( *(_DWORD *)((*((int (__thiscall **)(TechnoClass *))this->RadioClass + 33))(this) + 1660) == 3 ) /*0x70fba9*/
    return 0; /*0x70fbab*/
  return !this || (this->? & 4) == 0 || !this->q1A5; /*0x70fbb9*/
}



// ==== 0x0070FBD0  UnitClass::IsDeactivated  this=UnitClass  sig=csp ====
bool __thiscall UnitClass::IsDeactivated(UnitClass *this)
{
  return this->?[0]; /*0x70fbd6*/
}



// ==== 0x0070FBE0  TechnoClass::Activate  this=TechnoClass  sig=csp ====
char __thiscall TechnoClass::Activate(TechnoClass *this)
{
  int v2; // eax
  int (__thiscall **vtable0)(TechnoClass *); // edx
  int v4; // eax
  _DWORD v6[3]; // [esp+4h] [ebp-Ch] BYREF

  (*((void (__thiscall **)(TechnoClass *))this->RadioClass + 244))(this); /*0x70fbe8*/
  if ( this && (this->? & 4) != 0 ) /*0x70fbf6*/
  {
    if ( !*((_DWORD *)this + 413) ) /*0x70fbf8*/
      WinAPI::Wrapper(-2147467261); /*0x70fc07*/
    (*(void (__stdcall **)(_DWORD))(**((_DWORD **)this + 413) + 88))(*((_DWORD *)this + 413)); /*0x70fc15*/
  }
  LOBYTE(v2) = this->__pad_1C4[4]; /*0x70fc18*/
  if ( !(_BYTE)v2 /*0x70fc33*/
    || (v2 = (*((int (__thiscall **)(TechnoClass *))this->RadioClass + 33))(this), *(_DWORD *)(v2 + 1448) == -1) )
  {
    this->__pad_1C4[4] = 0; /*0x70fc7a*/
  }
  else
  {
    v6[0] = this->?[0]; /*0x70fc44*/
    v6[1] = this->?[1]; /*0x70fc4d*/
    vtable0 = (int (__thiscall **)(TechnoClass *))this->RadioClass; /*0x70fc51*/
    v6[2] = this->?[2]; /*0x70fc56*/
    v4 = vtable0[33](this); /*0x70fc5a*/
    LOBYTE(v2) = (unsigned __int8)StartAudioControllerAt(*(_DWORD *)(v4 + 1448), v6, 0); /*0x70fc68*/
    this->__pad_1C4[4] = 0; /*0x70fc6d*/
  }
  return v2; /*0x70fc75*/
}



// ==== 0x0070FC90  TechnoClass::Deactivate  this=TechnoClass  sig=csp ====
char __thiscall TechnoClass::Deactivate(TechnoClass *this)
{
  Cell *v2; // eax
  _DWORD *v3; // edi
  int Member; // eax
  int (__thiscall **vtable0)(TechnoClass *); // edx
  int v6; // eax
  _DWORD v8[3]; // [esp+8h] [ebp-Ch] BYREF

  if ( !this->isTether /*0x70fcca*/
    || !Team::GetMember((Team *)this, 0)
    || (v2 = (Cell *)(*((int (__thiscall **)(TechnoClass *))this->RadioClass + 111))(this),
        v3 = Cell::IsBridge(v2),
        Member = Team::GetMember((Team *)this, 0),
        v3 != (_DWORD *)Member) )
  {
    (*((void (__thiscall **)(TechnoClass *))this->RadioClass + 244))(this); /*0x70fcd4*/
    (*((void (__thiscall **)(TechnoClass *))this->RadioClass + 84))(this); /*0x70fcde*/
    if ( this && (this->? & 4) != 0 ) /*0x70fcec*/
    {
      if ( !*((_DWORD *)this + 413) ) /*0x70fcee*/
        WinAPI::Wrapper(-2147467261); /*0x70fcfd*/
      (*(void (__stdcall **)(_DWORD))(**((_DWORD **)this + 413) + 92))(*((_DWORD *)this + 413)); /*0x70fd0b*/
    }
    LOBYTE(Member) = this->__pad_1C4[4]; /*0x70fd0e*/
    if ( !(_BYTE)Member ) /*0x70fd16*/
    {
      Member = (*((int (__thiscall **)(TechnoClass *))this->RadioClass + 33))(this); /*0x70fd1c*/
      if ( *(_DWORD *)(Member + 1452) != -1 ) /*0x70fd29*/
      {
        v8[0] = this->?[0]; /*0x70fd39*/
        v8[1] = this->?[1]; /*0x70fd42*/
        vtable0 = (int (__thiscall **)(TechnoClass *))this->RadioClass; /*0x70fd46*/
        v8[2] = this->?[2]; /*0x70fd4b*/
        v6 = vtable0[33](this); /*0x70fd4f*/
        LOBYTE(Member) = (unsigned __int8)StartAudioControllerAt(*(_DWORD *)(v6 + 1452), v8, 0); /*0x70fd5d*/
      }
    }
    this->__pad_1C4[4] = 1; /*0x70fd62*/
  }
  return Member; /*0x70fd69*/
}



// ==== 0x0070FD70  TechnoClass::LinkToBridge  this=TechnoClass  sig=csp ====
void __thiscall TechnoClass::LinkToBridge(TechnoClass *this, _DWORD *a2)
{
  Cell *v3; // eax
  CaptureManager *v4; // ecx
  AnimClass *v5; // edi
  int *v6; // eax
  AnimClass *v7; // eax
  int *v8; // ecx
  _BYTE v9[12]; // [esp+8h] [ebp-Ch] BYREF

  if ( a2 ) /*0x70fd7d*/
  {
    v3 = (Cell *)(*((int (__thiscall **)(TechnoClass *))this->RadioClass + 111))(this); /*0x70fd85*/
    if ( Cell::IsBridge(v3) == a2 ) /*0x70fd94*/
    {
      a2[116] = this; /*0x70fd9a*/
      this->drainTarget = (TechnoClass *)a2; /*0x70fda0*/
      *(_BYTE *)(a2[135] + 22392) = 1; /*0x70fdac*/
      v4 = (CaptureManager *)a2[175]; /*0x70fdb3*/
      if ( v4 ) /*0x70fdbb*/
        CaptureManager::FreeAll(v4); /*0x70fdbd*/
      v5 = (AnimClass *)__2_YAPAXI_Z(0x1C8u); /*0x70fdcc*/
      if ( v5 ) /*0x70fdd3*/
      {
        v6 = (int *)(*((int (__thiscall **)(TechnoClass *, _BYTE *))this->RadioClass + 18))(this, v9); /*0x70fdeb*/
        v7 = (AnimClass *)AnimClass::ctor( /*0x70fdfe*/
                            v5,
                            *(void **)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 796),
                            v6,
                            0,
                            1,
                            (void *)0x600,
                            0,
                            0);
      }
      else
      {
        v7 = 0; /*0x70fe05*/
      }
      this->drainAnim = v7; /*0x70fe09*/
      if ( v7 ) /*0x70fe0f*/
        BuildingClass::AimTurret((BuildingClass *)v7, this); /*0x70fe14*/
      if ( this && (this->? & 4) != 0 ) /*0x70fe21*/
      {
        v8 = (int *)this->q175; /*0x70fe23*/
        if ( v8 ) /*0x70fe2b*/
          TeamClass::LiberateMember_Start(v8, (int)this, 0xFFFFFFFF, 1); /*0x70fe32*/
      }
    }
  }
}



// ==== 0x0070FE40  ObjectClass::method_70FE40  this=ObjectClass  sig=csp ====
int __thiscall sub_70FE40(_DWORD *this, int a2)
{
  this->isOnMap = a2; /*0x70fe44*/
  return a2; /*0x70fe4a*/
}



// ==== 0x0070FE50  ObjectClass::method_70FE50  this=ObjectClass  sig=csp ====
int __thiscall sub_70FE50(TechnoClass *this)
{
  int drainAnim; // ecx
  int result; // eax

  drainAnim = this->drainAnim; /*0x70fe53*/
  if ( drainAnim ) /*0x70fe5b*/
  {
    (*(void (__thiscall **)(int))(*(_DWORD *)drainAnim + 248))(drainAnim); /*0x70fe5f*/
    this->drainAnim = 0; /*0x70fe65*/
  }
  result = this->drainTarget; /*0x70fe6f*/
  if ( result ) /*0x70fe77*/
  {
    *(_DWORD *)(result + 464) = 0; /*0x70fe79*/
    result = *(_DWORD *)(this->drainTarget + 540); /*0x70fe89*/
    if ( result ) /*0x70fe91*/
      *(_BYTE *)(result + 22392) = 1; /*0x70fe93*/
    this->drainTarget = 0; /*0x70fe9a*/
  }
  return result; /*0x70fea4*/
}



// ==== 0x0070FEB0  FootClass::checkPassability  this=FootClass  sig=csp ====
BOOL __thiscall FootClass::checkPassability(FootClass *this)
{
  return this->? != 0; /*0x70febd*/
}



// ==== 0x0070FEC0  ObjectClass::HasLocation  this=ObjectClass  sig=csp ====
int __thiscall ObjectClass::HasLocation(ObjectClass *this)
{
  return this->isOnMap != 0; /*0x70fecd*/
}



// ==== 0x0070FEE0  TechnoClass::EjectPassengers  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::EjectPassengers(TechnoClass *this, char a2)
{
  int result; // eax
  FootClass *locomotorTarget; // ecx
  int v5; // eax
  FootClass *v6; // ecx
  FootClass *v7; // eax

  result = (int)this->locomotorTarget; /*0x70fee3*/
  if ( result )
  {
    *(_DWORD *)(result + 688) = 0; /*0x70fef1*/
    locomotorTarget = this->locomotorTarget; /*0x70fefb*/
    if ( locomotorTarget && (locomotorTarget->? & 4) != 0 )
    {
      v5 = (*((int (__thiscall **)(FootClass *))locomotorTarget->TechnoClass + 114))(locomotorTarget); /*0x70ff15*/
      v6 = this->locomotorTarget; /*0x70ff1b*/
      if ( v5 > 0 ) /*0x70ff23*/
      {
        v6->? = 1; /*0x70ff25*/
        this->locomotorTarget->? = 1; /*0x70ff32*/
        this->locomotorTarget->? = this; /*0x70ff3f*/
        this->locomotorTarget->? = this->owner; /*0x70ff51*/
        (*((void (__thiscall **)(FootClass *))this->locomotorTarget->TechnoClass + 232))(this->locomotorTarget); /*0x70ff5f*/
        result = (*((int (__thiscall **)(FootClass *, _DWORD, int))this->locomotorTarget->TechnoClass + 288))( /*0x70ff71*/
                   this->locomotorTarget,
                   0,
                   1);
        LOBYTE(result) = a2; /*0x70ff77*/
        this->locomotorTarget = 0; /*0x70ff7b*/
        if ( !a2 ) /*0x70ff87*/
          return result; /*0x70ff87*/
        return (*((int (__thiscall **)(TechnoClass *, _DWORD))this->RadioClass + 242))(this, 0); /*0x70ffec*/
      }
      (*((void (__thiscall **)(FootClass *, _DWORD, int))v6->TechnoClass + 288))(v6, 0, 1); /*0x70ff9f*/
      v7 = this->locomotorTarget; /*0x70ffa5*/
      if ( v7 )
        v7 = (v7->? & 4) != 0 ? v7 : 0;
      v7->isLetGoByLocomotor = 1; /*0x70ffbb*/
      result = (*((int (__thiscall **)(FootClass *, _DWORD, int))this->locomotorTarget->TechnoClass + 288))( /*0x70ffce*/
                 this->locomotorTarget,
                 0,
                 1);
    }
    LOBYTE(result) = a2; /*0x70ffd4*/
    this->locomotorTarget = 0; /*0x70ffd8*/
    if ( !a2 ) /*0x70ffe4*/
      return result; /*0x70ffe4*/
    return (*((int (__thiscall **)(TechnoClass *, _DWORD))this->RadioClass + 242))(this, 0); /*0x70ffe4*/
  }
  return result; /*0x70ff95*/
}



// ==== 0x00700600  TechnoClass::HandleCursor  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::HandleCursor(TechnoClass *this, __int16 *a2, char a3, char a4)
{
  _DWORD *v6; // ebp
  int v7; // eax
  int v8; // ebx
  int v9; // edi
  int v10; // eax
  int v11; // eax
  char v12; // bl
  _DWORD *v14; // eax
  int (__thiscall **vtable0)(TechnoClass *, void *); // ebx
  void *v16; // eax
  int v17; // ebp
  CellClass *v18; // eax
  char IsActiveOrNext; // bl
  int v20; // edi
  int v21; // eax
  bool v22; // bl
  int v23; // eax
  bool v24; // al
  int v25; // edx
  unsigned __int8 (__thiscall **v26)(TechnoClass *, int *, int); // eax
  int v27; // edx
  unsigned __int8 (__thiscall **v28)(TechnoClass *, int *, int); // eax
  int (__thiscall **v29)(TechnoClass *, void *, int, int, _DWORD, int); // ebx
  void *v30; // eax
  void *v31; // ebx
  void *v32; // eax
  char v33; // [esp+11h] [ebp-1Bh]
  char v34; // [esp+12h] [ebp-1Ah]
  char v35; // [esp+13h] [ebp-19h]
  int v36; // [esp+14h] [ebp-18h]
  int v37; // [esp+18h] [ebp-14h]
  _DWORD *v38; // [esp+1Ch] [ebp-10h]
  int v39; // [esp+20h] [ebp-Ch] BYREF
  int v40; // [esp+24h] [ebp-8h]
  int v41; // [esp+28h] [ebp-4h]
  char v42; // [esp+38h] [ebp+Ch]

  if ( this->isBerserk /*0x700629*/
    || this->rockerLinkedUnit
    && !*(_BYTE *)((*((int (__thiscall **)(TechnoClass *))this->RadioClass + 33))(this) + 1682) )
  {
    return 0; /*0x700631*/
  }
  v6 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], a2); /*0x70064a*/
  v38 = v6; /*0x70064e*/
  v36 = 0; /*0x700652*/
  if ( !a4 /*0x70067d*/
    && ((unsigned __int8)Mouse::IsButtonDown(stru_A8EB00.?[28])
     || (unsigned __int8)Mouse::IsButtonDown(stru_A8EB00.?[32])) )
  {
    v42 = 1; /*0x700686*/
  }
  else
  {
    v42 = 0; /*0x70068f*/
    if ( a4 ) /*0x700694*/
      goto LABEL_12; /*0x700694*/
  }
  if ( !(unsigned __int8)Mouse::IsButtonDown(stru_A8EB00.?[36]) /*0x7006be*/
    && !(unsigned __int8)Mouse::IsButtonDown(stru_A8EB00.?[40]) )
  {
LABEL_12:
    v33 = 0; /*0x7006c7*/
    if ( a4 ) /*0x7006ce*/
      goto LABEL_16; /*0x7006ce*/
    goto LABEL_13; /*0x7006ce*/
  }
  v33 = 1; /*0x7006c0*/
LABEL_13:
  if ( (unsigned __int8)Mouse::IsButtonDown(stru_A8EB00.?[20]) /*0x7006f1*/
    || (unsigned __int8)Mouse::IsButtonDown(stru_A8EB00.?[24]) )
  {
    v34 = 1; /*0x7006fa*/
    goto LABEL_17; /*0x7006ff*/
  }
LABEL_16:
  v34 = 0; /*0x700701*/
LABEL_17:
  if ( v33 && v42 ) /*0x700714*/
  {
    v33 = 0; /*0x700716*/
    v42 = 0; /*0x70071b*/
  }
  v37 = -1; /*0x700724*/
  v35 = 0; /*0x70072c*/
  if ( (*((unsigned __int8 (__thiscall **)(TechnoClass *))this->RadioClass + 117))(this) /*0x700743*/
    || (*((unsigned __int8 (__thiscall **)(TechnoClass *))this->RadioClass + 118))(this) )
  {
    return 0; /*0x700743*/
  }
  if ( ((int)dword_A8B230->vtable0 & 0x1000) == 0 ) /*0x70075c*/
    goto LABEL_38; /*0x70075c*/
  if ( !a3 ) /*0x700768*/
    goto LABEL_38; /*0x700768*/
  v7 = v6[10]; /*0x70076e*/
  if ( !v7 ) /*0x700773*/
    goto LABEL_38; /*0x700773*/
  v8 = 0; /*0x70077c*/
  if ( *(int *)(v7 + 16) <= 0 ) /*0x700780*/
    goto LABEL_38; /*0x700780*/
  do /*0x7007e4*/
  {
    v9 = *(_DWORD *)(*(_DWORD *)(v7 + 4) + 4 * v8); /*0x700785*/
    if ( *(_BYTE *)(v9 + 116) ) /*0x700788*/
    {
      v10 = *(_DWORD *)(v9 + 48); /*0x70078f*/
      if ( v10 == 20 ) /*0x700795*/
      {
        v37 = *(_DWORD *)(v9 + 36); /*0x70079a*/
      }
      else if ( v10 == 6 /*0x7007ce*/
             && (!*(_DWORD *)(v9 + 40)
              || !(unsigned __int8)HouseClass::IsAlliedWith((#375 *)dword_A83D4C, *(#375 **)(v9 + 40)))
             && (!TechnoClass::recalcThreat((TechnoClass *)v9)
              || *(_BYTE *)(TechnoClass::recalcThreat((TechnoClass *)v9) + 561)) )
      {
        v35 = 1; /*0x7007d8*/
      }
    }
    v7 = v6[10]; /*0x7007dd*/
    ++v8; /*0x7007e0*/
  }
  while ( v8 < *(_DWORD *)(v7 + 16) ); /*0x7007e4*/
  if ( v37 != -1 ) /*0x7007ed*/
  {
    v36 = *(_DWORD *)(*(_DWORD *)stru_A83D50.__pad_34 + 4 * v37); /*0x7007fa*/
  }
  else
  {
LABEL_38:
    v11 = v6[17]; /*0x700800*/
    if ( v11 != -1 ) /*0x700806*/
      v36 = *(_DWORD *)(*(_DWORD *)stru_A83D50.__pad_34 + 4 * v11); /*0x700811*/
  }
  v12 = (*((int (__thiscall **)(TechnoClass *))this->RadioClass + 204))(this); /*0x700825*/
  if ( (unsigned __int8)House::IsHumanPlayer((House *)this->owner) /*0x700868*/
    && (v42 && v34 || this->isGrindingInProgress)
    && (*((unsigned __int8 (__thiscall **)(TechnoClass *))this->RadioClass + 40))(this)
    && ((*((unsigned __int8 (__thiscall **)(TechnoClass *))this->RadioClass + 39))(this) || v12) )
  {
    if ( Waypoint::FindByCell(dword_A83D4C->__pad_0, a2) || this->isGrindingInProgress ) /*0x70087e*/
      return 51; /*0x70089a*/
    else
      return 26; /*0x70088b*/
  }
  if ( (unsigned __int8)House::IsHumanPlayer((House *)this->owner) ) /*0x7008ac*/
  {
    v14 = (_DWORD *)(*((int (__thiscall **)(TechnoClass *))this->RadioClass + 253))(this); /*0x7008bd*/
    if ( v14 ) /*0x7008c5*/
    {
      if ( *v14 ) /*0x7008cb*/
      {
        vtable0 = (int (__thiscall **)(TechnoClass *, void *))this->RadioClass; /*0x7008d8*/
        v16 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], a2); /*0x7008e0*/
        v17 = vtable0[185](this, v16); /*0x7008f4*/
        v18 = (CellClass *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], a2); /*0x7008f6*/
        IsActiveOrNext = CellClass::IsActiveOrNext(v18); /*0x700902*/
        if ( IsActiveOrNext /*0x70091a*/
          && *(_BYTE *)(*(_DWORD *)(*(_DWORD *)(*((int (__thiscall **)(TechnoClass *))this->RadioClass + 253))(this)
                                  + 172)
                      + 332) )
        {
          IsActiveOrNext = 0; /*0x700924*/
        }
        if ( v42 || v36 && *(_BYTE *)(v36 + 561) || IsActiveOrNext || v35 ) /*0x70094a*/
        {
          v20 = *(_DWORD *)(*(_DWORD *)(*((int (__thiscall **)(TechnoClass *))this->RadioClass + 253))(this) + 172); /*0x700960*/
          v21 = v38[20]; /*0x700966*/
          v22 = v21 != -1 /*0x700960*/
             && (unsigned __int8)HouseClass::IsAlliedWith(*((#375 **)stru_A80220.? + v21), (#375 *)this->owner) == 0;
          v23 = ObjectClass::processDeath((ObjectClass *)a2); /*0x700990*/
          v24 = v23 && !*(_BYTE *)(v23 + 256) && *(int *)(v23 + 108) > 0; /*0x7009ae*/
          if ( v42 /*0x7009f1*/
            || !v36
            || v24
            || v22
            && *(_BYTE *)(v36 + 680)
            && (*(_BYTE *)(v20 + 324) || *(_BYTE *)(v20 + 327) && *(_DWORD *)(v36 + 156) == 6) )
          {
            if ( (*((unsigned __int8 (__thiscall **)(TechnoClass *))this->RadioClass + 40))(this) ) /*0x7009f7*/
              return 5; /*0x7009f7*/
            v41 = 0; /*0x700a0a*/
            v25 = a2[1]; /*0x700a15*/
            v26 = (unsigned __int8 (__thiscall **)(TechnoClass *, int *, int))this->RadioClass; /*0x700a19*/
            v39 = (*a2 << 8) + 128; /*0x700a24*/
            v40 = (v25 << 8) + 128; /*0x700a38*/
            if ( v26[89](this, &v39, v17) ) /*0x700a3c*/
              return 5; /*0x700a3c*/
          }
        }
        if ( (*((unsigned __int8 (__thiscall **)(TechnoClass *, _DWORD *))this->RadioClass + 230))(this, v38) ) /*0x700a4f*/
        {
          if ( (*((unsigned __int8 (__thiscall **)(TechnoClass *))this->RadioClass + 40))(this) ) /*0x700a5d*/
            return 5; /*0x700a5d*/
          v41 = 0; /*0x700a6c*/
          v27 = a2[1]; /*0x700a77*/
          v28 = (unsigned __int8 (__thiscall **)(TechnoClass *, int *, int))this->RadioClass; /*0x700a7b*/
          v39 = (*a2 << 8) + 128; /*0x700a86*/
          v40 = (v27 << 8) + 128; /*0x700a9a*/
          if ( v28[89](this, &v39, v17) ) /*0x700a9e*/
            return 5; /*0x700ab4*/
        }
      }
    }
  }
  if ( !(unsigned __int8)House::IsHumanPlayer((House *)this->owner) /*0x700adc*/
    || !(*((unsigned __int8 (__thiscall **)(TechnoClass *))this->RadioClass + 40))(this)
    && !(*((unsigned __int8 (__thiscall **)(TechnoClass *))this->RadioClass + 161))(this) )
  {
    return 0; /*0x700c29*/
  }
  if ( !(unsigned __int8)LayerClass::IsWithinUsableArea((LayerClass *)&stru_87F5F0.__pad_58[416], a2, 1) ) /*0x700af6*/
    return 2; /*0x700af6*/
  if ( v33 ) /*0x700b09*/
    return 1; /*0x700b17*/
  if ( (*((unsigned __int8 (__thiscall **)(TechnoClass *))this->RadioClass + 161))(this) && v34 ) /*0x700b2e*/
    return 1; /*0x700b3c*/
  if ( !(*((unsigned __int8 (__thiscall **)(TechnoClass *))this->RadioClass + 40))(this) ) /*0x700b43*/
    return 2; /*0x700b43*/
  if ( a3 ) /*0x700b57*/
    return 1; /*0x700b57*/
  v29 = (int (__thiscall **)(TechnoClass *, void *, int, int, _DWORD, int))this->RadioClass; /*0x700b5d*/
  v30 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], a2); /*0x700b6d*/
  if ( v29[107](this, v30, -1, -1, 0, 1) <= 1 ) /*0x700b7e*/
    return 1; /*0x700b7e*/
  if ( this /*0x700bb8*/
    && (*((int (__thiscall **)(TechnoClass *))this->RadioClass + 11))(this) == 6
    && *(_DWORD *)((*((int (__thiscall **)(TechnoClass *))this->RadioClass + 33))(this) + 1032)
    && *(_BYTE *)(*(_DWORD *)((*((int (__thiscall **)(TechnoClass *))this->RadioClass + 33))(this) + 1032) + 1516) )
  {
    return 1; /*0x700bce*/
  }
  if ( *(_BYTE *)((*((int (__thiscall **)(TechnoClass *))this->RadioClass + 33))(this) + 3372) /*0x700c06*/
    && (v31 = this->RadioClass,
        v32 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], a2),
        (*((int (__thiscall **)(TechnoClass *, void *, int, int, _DWORD, _DWORD))v31 + 107))(this, v32, -1, -1, 0, 0) <= 1) )
  {
    return 1; /*0x700c0b*/
  }
  else
  {
    return 2; /*0x700c1a*/
  }
}



// ==== 0x00700C40  TechnoClass::CanReceivePassengers  this=TechnoClass  sig=csp ====
char __thiscall TechnoClass::CanReceivePassengers(TechnoClass *this)
{
  char result; // al
  TechnoClass *spawnManager; // ecx
  int v4; // edi

  result = House::IsHumanPlayer((House *)this->owner); /*0x700c49*/
  if ( result ) /*0x700c50*/
  {
    if ( (*((unsigned __int8 (__thiscall **)(TechnoClass *))this->RadioClass + 223))(this) ) /*0x700c58*/
    {
      return 0; /*0x700c62*/
    }
    else if ( this->bunkerLinkedUnit ) /*0x700c66*/
    {
      return 0; /*0x700c70*/
    }
    else if ( *(_BYTE *)((*((int (__thiscall **)(TechnoClass *))this->RadioClass + 33))(this) + 3412) ) /*0x700c7e*/
    {
      return 0; /*0x700c88*/
    }
    else if ( (*((unsigned __int8 (__thiscall **)(TechnoClass *))this->RadioClass + 224))(this) ) /*0x700c90*/
    {
      return 0; /*0x700c9a*/
    }
    else
    {
      result = (*((int (__thiscall **)(TechnoClass *))this->RadioClass + 120))(this); /*0x700ca2*/
      if ( result ) /*0x700caa*/
      {
        if ( this->slaveOwner ) /*0x700cae*/
        {
          return 0; /*0x700cb8*/
        }
        else if ( this->__pad_1C4[4] ) /*0x700cbc*/
        {
          return 0; /*0x700cc6*/
        }
        else
        {
          spawnManager = (TechnoClass *)this->spawnManager; /*0x700cca*/
          result = 1; /*0x700d00*/
          if ( spawnManager ) /*0x700cd2*/
          {
            if ( TechnoClass::CountPassengers(spawnManager) > 0 ) /*0x700cdb*/
            {
              v4 = (*((int (__thiscall **)(TechnoClass *))this->RadioClass + 33))(this); /*0x700cee*/
              if ( TechnoClass::CountPassengers((TechnoClass *)this->spawnManager) < *(_DWORD *)(v4 + 3420) ) /*0x700cfe*/
                return 0; /*0x700cd2*/
            }
          }
        }
      }
    }
  }
  return result; /*0x700c52*/
}



// ==== 0x00700D10  TechnoClass::IsDeadOrInactive  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::IsDeadOrInactive(TechnoClass *this)
{
  int result; // eax

  LOBYTE(result) = !this /*0x700d47*/
                || (result = (*((int (__thiscall **)(TechnoClass *))this->RadioClass + 11))(this), result != 1)
                || (*((char *)this + 1668) < 0
                 || (result = (*((int (__thiscall **)(TechnoClass *))this->RadioClass + 313))(this), !(_BYTE)result))
                && (result = (*((int (__thiscall **)(TechnoClass *))this->RadioClass + 223))(this), !(_BYTE)result);
  return result; /*0x700d49*/
}



// ==== 0x00700D50  TechnoClass::CanAttack  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::CanAttack(TechnoClass *this)
{
  InfantryClass *v2; // eax
  int result; // eax
  int v4; // eax
  int v5; // eax
  int v6; // edx
  int v7; // eax
  int v8; // ecx
  int v9; // ebp
  _DWORD *v10; // edi
  _DWORD *v11; // ebx
  Cell *v12; // eax
  Cell *v13; // eax
  __int16 v14[2]; // [esp+10h] [ebp-24h] BYREF
  int v15; // [esp+14h] [ebp-20h]
  __int16 v16[2]; // [esp+18h] [ebp-1Ch] BYREF
  __int16 v17[2]; // [esp+1Ch] [ebp-18h] BYREF
  __int16 v18[2]; // [esp+20h] [ebp-14h] BYREF
  __int16 v19[2]; // [esp+24h] [ebp-10h] BYREF
  __int16 v20[2]; // [esp+28h] [ebp-Ch] BYREF
  _DWORD *v21; // [esp+2Ch] [ebp-8h] BYREF
  char v22[4]; // [esp+30h] [ebp-4h] BYREF

  *(_DWORD *)v16 = *(_DWORD *)(*((int (__thiscall **)(TechnoClass *, _DWORD **))this->RadioClass + 110))(this, &v21); /*0x700d74*/
  v2 = (InfantryClass *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v16); /*0x700d78*/
  if ( v2 && InfantryClass::ValidateAttackPosition(v2) ) /*0x700d83*/
    goto LABEL_8; /*0x700d8a*/
  v4 = (*((int (__thiscall **)(TechnoClass *))this->RadioClass + 11))(this) - 1; /*0x700d93*/
  if ( v4 ) /*0x700d94*/
  {
    v5 = v4 - 5; /*0x700d9a*/
    if ( !v5 ) /*0x700d9d*/
    {
      LOBYTE(result) = ReturnFalse_465D30(); /*0x700e3a*/
      return result; /*0x700e46*/
    }
    if ( v5 != 9 ) /*0x700da6*/
    {
      result = (*((int (__thiscall **)(TechnoClass *))this->RadioClass + 223))(this); /*0x700dac*/
      if ( (_BYTE)result ) /*0x700db4*/
        goto LABEL_8; /*0x700db4*/
      result = (*((int (__thiscall **)(TechnoClass *))this->RadioClass + 33))(this); /*0x700dba*/
      if ( !*(_DWORD *)(result + 1504) ) /*0x700dc0*/
        goto LABEL_8; /*0x700dc8*/
      goto LABEL_46; /*0x700dc8*/
    }
    if ( TechnoClass::updateTurretRotation(this) ) /*0x700dda*/
    {
      result = TechnoClass::IsMission27to30(this); /*0x700de5*/
      if ( (_BYTE)result || *((_DWORD *)this + 433) == 31 ) /*0x700df5*/
        goto LABEL_8; /*0x700df5*/
    }
    if ( TechnoClass::updateTurretRotation(this) ) /*0x700df9*/
    {
      v6 = this->diskLaserTimer[0]; /*0x700e02*/
      result = this->diskLaserTimer[2]; /*0x700e08*/
      if ( v6 == -1 ) /*0x700e11*/
        goto LABEL_16; /*0x700e11*/
      if ( *(_DWORD *)&stru_A8EB00.?[416] - v6 < result ) /*0x700e1d*/
      {
        result -= *(_DWORD *)&stru_A8EB00.?[416] - v6; /*0x700e1f*/
LABEL_16:
        if ( result ) /*0x700e23*/
        {
LABEL_8:
          LOBYTE(result) = 0; /*0x700dce*/
          return result; /*0x700dd7*/
        }
      }
    }
    LOBYTE(result) = TechnoClass::GetTypeFlag(this); /*0x700e25*/
    return result; /*0x700e33*/
  }
  result = (*((int (__thiscall **)(TechnoClass *))this->RadioClass + 223))(this); /*0x700e4b*/
  if ( (_BYTE)result ) /*0x700e53*/
    goto LABEL_8; /*0x700e53*/
  if ( *((char *)this + 1668) >= 0 ) /*0x700e61*/
    goto LABEL_8; /*0x700e61*/
  v7 = *((_DWORD *)this + 433); /*0x700e67*/
  if ( !*(_DWORD *)(v7 + 1028) /*0x700e97*/
    && !*(_DWORD *)(v7 + 1504)
    && !*(_BYTE *)(v7 + 3603)
    && !this->bunkerLinkedUnit
    && !TechnoClass::updateSpawnManager(this) )
  {
    goto LABEL_8; /*0x700e97*/
  }
  v8 = *((_DWORD *)this + 433); /*0x700ea4*/
  result = *(_DWORD *)(v8 + 1028); /*0x700eaa*/
  if ( result ) /*0x700eb2*/
  {
    if ( this->q1A5 ) /*0x700eb4*/
      goto LABEL_8; /*0x700eb4*/
    if ( *(_BYTE *)(result + 5817) ) /*0x700ec6*/
    {
      result = (int)this->mindControlledBy; /*0x700ed0*/
      if ( result ) /*0x700ed8*/
        goto LABEL_8; /*0x700ed8*/
    }
  }
  result = *(_DWORD *)(v8 + 1504); /*0x700ede*/
  if ( result > 0 ) /*0x700ee6*/
  {
    if ( this->? ) /*0x700eec*/
      goto LABEL_8; /*0x700eec*/
    *(_DWORD *)v14 = *(_DWORD *)(*((int (__thiscall **)(TechnoClass *, char *))this->RadioClass + 110))(this, v22); /*0x700f0f*/
    result = (int)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v14); /*0x700f19*/
    v9 = result; /*0x700f1e*/
    if ( result ) /*0x700f22*/
    {
      LOWORD(v15) = v14[0] + LOWORD(g_DDrawSurfaceManager.scenario[86]); /*0x700f40*/
      HIWORD(v15) = HIWORD(g_DDrawSurfaceManager.scenario[86]) + v14[1]; /*0x700f49*/
      *(_DWORD *)v17 = v15; /*0x700f58*/
      v10 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v17); /*0x700f71*/
      HIWORD(v15) = HIWORD(g_DDrawSurfaceManager.scenario[82]) + v14[1]; /*0x700f7a*/
      LOWORD(v15) = v14[0] + LOWORD(g_DDrawSurfaceManager.scenario[82]); /*0x700f7f*/
      *(_DWORD *)v18 = v15; /*0x700f92*/
      v21 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v18); /*0x700fa5*/
      LOWORD(v15) = v14[0] + LOWORD(g_DDrawSurfaceManager.scenario[84]); /*0x700fb7*/
      HIWORD(v15) = HIWORD(g_DDrawSurfaceManager.scenario[84]) + v14[1]; /*0x700fc0*/
      *(_DWORD *)v19 = v15; /*0x700fc9*/
      v11 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v19); /*0x700fea*/
      HIWORD(v15) = HIWORD(g_DDrawSurfaceManager.scenario[88]) + v14[1]; /*0x700ff2*/
      LOWORD(v15) = v14[0] + LOWORD(g_DDrawSurfaceManager.scenario[88]); /*0x700ff7*/
      *(_DWORD *)v20 = v15; /*0x701004*/
      result = (int)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v20); /*0x70100e*/
      if ( (*(_DWORD *)(v9 + 320) & 0x100) != 0 || v10 && (v10[80] & 0x100) != 0 ) /*0x701030*/
        goto LABEL_8; /*0x701030*/
      if ( result && (*(_DWORD *)(result + 320) & 0x100) != 0 ) /*0x701040*/
        goto LABEL_8; /*0x701040*/
      if ( v11 && (v11[80] & 0x100) != 0 ) /*0x701050*/
        goto LABEL_8; /*0x701050*/
      result = (int)v21; /*0x701056*/
      if ( v21 ) /*0x70105c*/
      {
        if ( (v21[80] & 0x100) != 0 ) /*0x701064*/
          goto LABEL_8; /*0x701064*/
      }
    }
    if ( this->owner->currentPlayer && *(_DWORD *)(v9 + 236) == 2 ) /*0x701081*/
      goto LABEL_8; /*0x701081*/
    v12 = (Cell *)(*((int (__thiscall **)(TechnoClass *))this->RadioClass + 111))(this); /*0x70108b*/
    result = (int)Cell::IsBridge(v12); /*0x701093*/
    if ( result ) /*0x70109a*/
    {
      v13 = (Cell *)(*((int (__thiscall **)(TechnoClass *))this->RadioClass + 111))(this); /*0x7010a0*/
      result = Cell::IsBridge(v13)[328]; /*0x7010ad*/
      if ( !*(_BYTE *)(result + 5803) ) /*0x7010b3*/
        goto LABEL_8; /*0x7010bb*/
    }
  }
LABEL_46:
  LOBYTE(result) = 1; /*0x7010c1*/
  return result; /*0x700dce*/
}



// ==== 0x007010D0  TechnoClass::HasValidWeapon  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::HasValidWeapon(TechnoClass *this)
{
  int result; // eax

  LOBYTE(result) = !this->__pad_1C4[4] /*0x70110d*/
                && (result = House::IsHumanPlayer((House *)this->owner), (_BYTE)result)
                && (result = (*((int (__thiscall **)(TechnoClass *))this->RadioClass + 253))(this)) != 0
                && *(_DWORD *)result
                && (result = (*((int (__thiscall **)(TechnoClass *))this->RadioClass + 223))(this), !(_BYTE)result);
  return result; /*0x70110f*/
}



// ==== 0x00701120  TechnoClass::HasActiveParam  this=TechnoClass  sig=csp ====
BOOL __thiscall TechnoClass::HasActiveParam(TechnoClass *this)
{
  _DWORD *v1; // eax

  v1 = (_DWORD *)(*((int (__thiscall **)(TechnoClass *))this->RadioClass + 253))(this); /*0x701122*/
  return v1 && *v1; /*0x701136*/
}



// ==== 0x00701140  TechnoClass::CheckHealthDiff  this=TechnoClass  sig=csp ====
int __thiscall InfantryClass::CheckHealthDiff(TechnoClass *this)
{
  int result; // eax

  result = (*((int (__thiscall **)(TechnoClass *))this->RadioClass + 11))(this); /*0x701145*/
  if ( result == 6 ) /*0x70114b*/
    return *(_BYTE *)((*((int (__thiscall **)(TechnoClass *))this->RadioClass + 33))(this) + 3276) /*0x701183*/
        && this->? != *(_DWORD *)((*((int (__thiscall **)(TechnoClass *))this->RadioClass + 34))(this) + 160);
  LOBYTE(result) = 0; /*0x70114d*/
  return result; /*0x70114f*/
}



// ==== 0x00701190  TechnoClass::StubReturnFalse11  this=TechnoClass  sig=csp ====
char TacticalClass::StubReturnFalse11(TechnoClass *this)
{
  return 0; /*0x701192*/
}



// ==== 0x007011A0  ObjectClass::method_7011A0  this=ObjectClass  sig=csp ====
int __thiscall sub_7011A0(ObjectClass *this)
{
  double v1; // st7
  int result; // eax
  int v4; // edx
  int (__thiscall **vtable0)(ObjectClass *, _BYTE *); // eax
  _DWORD *v6; // eax
  char *v7; // esi
  int v8; // esi
  int v9; // eax
  int v10; // [esp+14h] [ebp-1Ch]
  __int16 v11[2]; // [esp+18h] [ebp-18h] BYREF
  int v12; // [esp+1Ch] [ebp-14h]
  int v13; // [esp+20h] [ebp-10h]
  _BYTE v14[12]; // [esp+24h] [ebp-Ch] BYREF

  if ( (*((unsigned __int8 (__thiscall **)(ObjectClass *))this->AbstractClass + 21))(this) ) /*0x7011a9*/
    return 0; /*0x7011b1*/
  if ( !*(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 6200) ) /*0x7011bd*/
    return 0; /*0x7011c8*/
  v4 = *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 6212); /*0x7011d5*/
  vtable0 = (int (__thiscall **)(ObjectClass *, _BYTE *))this->AbstractClass; /*0x7011db*/
  v12 = *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 6208); /*0x7011dd*/
  v13 = v4; /*0x7011e5*/
  v6 = (_DWORD *)vtable0[18](this, v14); /*0x7011ec*/
  LOWORD(v10) = *v6 / 256; /*0x7011ff*/
  HIWORD(v10) = v6[1] / 256; /*0x701218*/
  *(_DWORD *)v11 = v10; /*0x701225*/
  v7 = (char *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v11); /*0x701234*/
  ScenarioClass::CalcMinShroudLevel((ScenarioClass *)&stru_87F5F0.__pad_58[416]); /*0x701236*/
  v8 = g_BuildingLoadQueue_Array.?[1] * v7[283]; /*0x70127d*/
  LOWORD(v9) = Math::RoundToInt(v1); /*0x70127f*/
  Math::Sqrt((double)(v8 * v8 + (v9 << 8) * (v9 << 8))); /*0x7012a1*/
  LOWORD(result) = Math::RoundToInt(v1); /*0x7012a9*/
  return result; /*0x7011b0*/
}



// ==== 0x007012C0  TechnoClass::FindLowestDamage  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::FindLowestDamage(TechnoClass *this)
{
  int v2; // eax
  int v3; // ebx
  int *passengers; // ebp
  int v5; // edi
  int DB; // esi
  int v7; // eax
  int v8; // eax
  int v10; // edi
  int v11; // esi
  int v12; // eax
  int v13; // eax
  int v14; // [esp+Ch] [ebp+4h]

  v2 = *(_DWORD *)(*((int (__thiscall **)(TechnoClass *, int))this->RadioClass + 254))(this, v14); /*0x7012d3*/
  if ( !v2 ) /*0x7012d7*/
    return 0; /*0x701397*/
  v3 = *(_DWORD *)(v2 + 180); /*0x7012df*/
  if ( !*(_BYTE *)((*((int (__thiscall **)(TechnoClass *))this->RadioClass + 33))(this) + 1508) ) /*0x7012ed*/
    return v3; /*0x70138f*/
  passengers = this->passengers; /*0x7012fc*/
  v5 = 0x7FFFFFFF; /*0x701305*/
  DB = CCINIClass::GetDB((CCINIClass *)this->passengers); /*0x70130f*/
  if ( DB ) /*0x701313*/
  {
    do /*0x70133c*/
    {
      v7 = *(_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)DB + 1012))(DB); /*0x70131f*/
      if ( v7 ) /*0x701323*/
      {
        v8 = *(_DWORD *)(v7 + 180); /*0x701325*/
        if ( v8 < v5 ) /*0x70132d*/
          v5 = v8; /*0x70132f*/
      }
      DB = *(_DWORD *)(DB + 48); /*0x701331*/
    }
    while ( DB && (*(_BYTE *)(DB + 20) & 4) != 0 ); /*0x70133c*/
  }
  if ( v3 < v5 ) /*0x701340*/
    return v3; /*0x701344*/
  v10 = 0x7FFFFFFF; /*0x70134d*/
  v11 = CCINIClass::GetDB((CCINIClass *)passengers); /*0x701357*/
  if ( v11 ) /*0x70135b*/
  {
    do /*0x701384*/
    {
      v12 = *(_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)v11 + 1012))(v11); /*0x701367*/
      if ( v12 ) /*0x70136b*/
      {
        v13 = *(_DWORD *)(v12 + 180); /*0x70136d*/
        if ( v13 < v10 ) /*0x701375*/
          v10 = v13; /*0x701377*/
      }
      v11 = *(_DWORD *)(v11 + 48); /*0x701379*/
    }
    while ( v11 && (*(_BYTE *)(v11 + 20) & 4) != 0 ); /*0x701384*/
  }
  return v10; /*0x701346*/
}



// ==== 0x007013A0  TechnoClass::OverrideMission_SyncLog  this=TechnoClass  sig=csp ====
int __thiscall MissionClass::OverrideMission_SyncLog(TechnoClass *this)
{
  int v3; // [esp+Ch] [ebp+4h]
  int v4; // [esp+10h] [ebp+8h]
  int v5; // [esp+14h] [ebp+Ch]

  this->lastTarget = this->target; /*0x7013bb*/
  AbstractClass::COMStub_125((MissionClass *)this, v3, v4, v5); /*0x7013c1*/
  return (*((int (__thiscall **)(TechnoClass *, int))this->RadioClass + 242))(this, v4); /*0x7013d1*/
}



// ==== 0x007013E0  TechnoClass::CheckOccupantState  this=TechnoClass  sig=csp ====
int __thiscall BuildingClass::CheckOccupantState(TechnoClass *this)
{
  int result; // eax

  if ( AbstractClass::COMStub_126((MissionClass *)this) ) /*0x7013e3*/
  {
    result = (*((int (__thiscall **)(TechnoClass *, AbstractClass *))this->RadioClass + 242))(this, this->lastTarget); /*0x7013f7*/
    LOBYTE(result) = 1; /*0x7013fd*/
  }
  else
  {
    LOBYTE(result) = 0; /*0x701401*/
  }
  return result; /*0x7013ff*/
}



// ==== 0x00701410  TechnoClass::HandleSellOrRepair  this=TechnoClass  sig=csp ====
int __thiscall BuildingClass::HandleSellOrRepair(TechnoClass *this)
{
  double v1; // st7
  int v3; // eax
  int result; // eax
  int v5; // edx
  _DWORD *v6; // eax
  _BYTE v7[12]; // [esp+8h] [ebp-Ch] BYREF

  (*((void (__thiscall **)(TechnoClass *, int))this->RadioClass + 73))(this, 2); /*0x70141a*/
  v3 = *(_DWORD *)((*((int (__thiscall **)(TechnoClass *))this->RadioClass + 33))(this) + 160); /*0x70142a*/
  this->? = v3; /*0x701432*/
  this->? = v3; /*0x701435*/
  result = (*((int (__thiscall **)(TechnoClass *))this->RadioClass + 11))(this); /*0x70143a*/
  if ( result == 6 ) /*0x701440*/
  {
    (*((void (__thiscall **)(TechnoClass *, _DWORD))this->RadioClass + 103))(this, 0); /*0x701448*/
    BuildingClass::GetHealthRatio((BuildingClass *)this); /*0x701450*/
    globalHelper_051EE0((int)this, v5, v1 <= *(double *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 5888)); /*0x701473*/
    v6 = (_DWORD *)(*((int (__thiscall **)(TechnoClass *, _BYTE *))this->RadioClass + 18))(this, v7); /*0x701483*/
    return (int)StartAudioControllerAt(*(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 452), v6, 0); /*0x701494*/
  }
  return result; /*0x701499*/
}



// ==== 0x007014A0  TechnoClass::ProcessCapture  this=TechnoClass  sig=csp ====
char __userpurge TechnoClass::ProcessCapture@<al>(TechnoClass *this, int a2@<edi>, int a3, int a4)
{
  int v4; // ecx
  _DWORD *v5; // esi
  TechnoClass *v6; // eax
  int v7; // eax
  TaskManager *v8; // ecx
  int v9; // eax
  char *v10; // eax
  CellClass *v11; // edi
  CellClass *v12; // eax
  int v13; // eax
  bool v14; // al
  int v15; // eax
  int v16; // edx
  int v17; // eax
  int v18; // ecx
  _DWORD *Member; // edi
  int v21; // [esp+14h] [ebp-1Ch]
  int v22; // [esp+14h] [ebp-1Ch]
  _DWORD v24[3]; // [esp+24h] [ebp-Ch] BYREF

  v5 = (_DWORD *)v4; /*0x7014a9*/
  v6 = *(TechnoClass **)(v4 + 540); /*0x7014ab*/
  if ( this == v6 ) /*0x7014b3*/
    return 0; /*0x70188d*/
  if ( v6 == (TechnoClass *)dword_A83D4C && *(_BYTE *)(v4 + 131) ) /*0x7014c1*/
    (*(void (**)(void))(*(_DWORD *)v4 + 336))(); /*0x7014cf*/
  (*(void (__thiscall **)(_DWORD *, _DWORD))(*v5 + 968))(v5, 0); /*0x7014db*/
  (*(void (__thiscall **)(_DWORD *, _DWORD, int))(*v5 + 1152))(v5, 0, 1); /*0x7014e9*/
  if ( !v5
    || (*(int (__thiscall **)(_DWORD *))(*v5 + 44))(v5) != 1
    || (v7 = (*(int (__thiscall **)(_DWORD *))(*v5 + 44))(v5),
        !(unsigned __int8)TechnoClass::HasDeployFlags(v7 == 1 ? (TechnoClass *)v5 : 0)) )
  {
    v5[134] = 0; /*0x70151a*/
  }
  if ( v5[43] != 19
    && (!v5
     || (*(int (__thiscall **)(_DWORD *))(*v5 + 44))(v5) != 1
     || !*(_BYTE *)(*((*(int (__thiscall **)(_DWORD *))(*v5 + 44))(v5) == 1 ? v5 + 433 : (_DWORD *)1732) + 3603)
     || v5[43] != 16) )
  {
    (*(void (__thiscall **)(_DWORD *, int, int))(*v5 + 488))(v5, 5, 1); /*0x70156e*/
  }
  v8 = (TaskManager *)v5[180]; /*0x701574*/
  if ( v8 ) /*0x70157c*/
    TaskManager::Update(v8); /*0x70157e*/
  TechnoClass::RemoveBuildingFromScripts((TechnoClass *)v5); /*0x701585*/
  if ( !*((_BYTE *)v5 + 129) ) /*0x70158a*/
    HouseClass::RegisterGain(v5[135], (int)v5, 0); /*0x70159d*/
  (*(void (__thiscall **)(_DWORD *, _DWORD))(*v5 + 224))(v5, 0); /*0x7015a8*/
  v9 = (*(int (__thiscall **)(_DWORD *))(*v5 + 132))(v5); /*0x7015b2*/
  *((_DWORD *)this + 5434) += (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)v9 + 132))(v9, v5[135]); /*0x7015d2*/
  HouseClass::DecrementUnitCount((HouseClass *)v5[135], v5); /*0x7015de*/
  BuildingClass::PowerUpdate((BuildingClass *)this, v5); /*0x7015e6*/
  switch ( (*(int (__thiscall **)(_DWORD *))(*v5 + 44))(v5) ) /*0x701600*/
  {
    case 1: /*0x701600*/
    case 2: /*0x701600*/
    case 15: /*0x701600*/
      if ( !*(_BYTE *)((*(int (__thiscall **)(_DWORD *))(*v5 + 132))(v5) + 3231) ) /*0x701635*/
      {
        v10 = (char *)this + 4 * (*(int (__thiscall **)(_DWORD *))(*v5 + 56))(v5) + 21476; /*0x701646*/
        goto LABEL_24; /*0x701646*/
      }
      break; /*0x701646*/
    case 6: /*0x701600*/
      if ( !*(_BYTE *)((*(int (__thiscall **)(_DWORD *))(*v5 + 132))(v5) + 3231) ) /*0x701611*/
      {
        v10 = (char *)this + 4 * (*(int (__thiscall **)(_DWORD *))(*v5 + 56))(v5) + 21560; /*0x701622*/
LABEL_24:
        ++*(_DWORD *)v10; /*0x70164d*/
      }
      break; /*0x70164d*/
    default:
      break;
  }
  *(_DWORD *)(v5[135] + 21644) = this->?[3].?; /*0x70164f*/
  if ( !*((_BYTE *)v5 + 129) ) /*0x701664*/
    (*(void (__thiscall **)(_DWORD *, _DWORD))(*v5 + 292))(v5, 0); /*0x701674*/
  AbstractClass::ClearTargetToMeClearManagerTarget((int)v5); /*0x70167c*/
  if ( !*((_BYTE *)v5 + 129) ) /*0x701681*/
    (*(void (__thiscall **)(_DWORD *, int))(*v5 + 292))(v5, 3); /*0x701691*/
  v11 = 0; /*0x70169e*/
  if ( !*((_BYTE *)v5 + 129) ) /*0x701697*/
  {
    if ( v5 && (v5[5] & 4) != 0 ) /*0x7016b9*/
    {
      v12 = (CellClass *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)v5 + 686); /*0x7016f6*/
    }
    else
    {
      v24[0] = v5[39]; /*0x7016c7*/
      v24[1] = v5[40]; /*0x7016d3*/
      v24[2] = v5[41]; /*0x7016df*/
      v12 = Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], v24); /*0x7016e3*/
    }
    v11 = v12; /*0x7016fb*/
    if ( v12 ) /*0x7016ff*/
    {
      v21 = -v5[322]; /*0x70170b*/
      v13 = (*(int (__thiscall **)(_DWORD *))(*v5 + 56))(v5); /*0x70170e*/
      CellClass::SetThreatBounds(v11, v13, v21); /*0x701714*/
      v5[322] = 0; /*0x701719*/
    }
    (*(void (__thiscall **)(_DWORD *, _DWORD, _DWORD, _DWORD, _DWORD))(*v5 + 1164))(v5, 0, 0, 0, 0); /*0x70172f*/
  }
  v5[135] = this; /*0x701735*/
  v14 = this == (TechnoClass *)dword_A83D4C && dword_A83D4C; /*0x701748*/
  *((_BYTE *)v5 + 1050) = v14; /*0x701751*/
  if ( !*((_BYTE *)v5 + 129) ) /*0x701757*/
  {
    if ( v11 ) /*0x701763*/
    {
      v15 = (*(int (__thiscall **)(_DWORD *))(*v5 + 704))(v5); /*0x701769*/
      v16 = *v5; /*0x70176f*/
      v22 = v15; /*0x701771*/
      v5[322] = v15; /*0x701774*/
      v17 = (*(int (__thiscall **)(_DWORD *))(v16 + 56))(v5); /*0x70177a*/
      CellClass::SetThreatBounds(v11, v17, v22); /*0x701780*/
    }
    HouseClass::RegisterGain_0(v5[135], (BuildingClass *)v5, 1); /*0x70178e*/
  }
  v18 = v5[43]; /*0x701793*/
  v5[184] = 0; /*0x7017a0*/
  if ( v18 == 21 || v5[45] == 21 ) /*0x7017b2*/
    (*(void (__thiscall **)(_DWORD *, int))(*v5 + 496))(v5, 5); /*0x7017ba*/
  if ( !*((_BYTE *)v5 + 129) ) /*0x7017c0*/
  {
    if ( (*(int (__thiscall **)(_DWORD *, int))(*v5 + 44))(v5, a2) != 6 || v5[43] != 16 || !*(_BYTE *)(v5[328] + 5821) ) /*0x7017e9*/
    {
      if ( !Team::GetMember((Team *)v5, 0) /*0x70181d*/
        || (Member = (_DWORD *)Team::GetMember((Team *)v5, 0),
            (*(int (__thiscall **)(_DWORD *))(*Member + 44))(Member) != 6)
        || !*(_BYTE *)(Member[328] + 5821) )
      {
        (*(void (__thiscall **)(_DWORD *, _DWORD, int))(*v5 + 1152))(v5, 0, 1); /*0x70182f*/
        (*(void (__thiscall **)(_DWORD *, _DWORD))(*v5 + 968))(v5, 0); /*0x70183b*/
        (*(void (__thiscall **)(_DWORD *, _DWORD, int))(*v5 + 1156))(v5, 0, 1); /*0x701849*/
      }
    }
    if ( *((_BYTE *)v5 + 1059) ) /*0x70184f*/
    {
      (*(void (__thiscall **)(_DWORD *))(*v5 + 1176))(v5); /*0x70185d*/
      (*(void (__thiscall **)(_DWORD *))(*v5 + 1172))(v5); /*0x701867*/
    }
    (*(void (__thiscall **)(_DWORD *, _DWORD, _DWORD, _DWORD, _DWORD))(*v5 + 1160))(v5, 0, 0, 0, 0); /*0x70187b*/
  }
  return 1; /*0x701882*/
}



// ==== 0x00701900  TechnoClass::ReceiveDamage_Shield  this=TechnoClass  sig=csp ====
double __thiscall TechnoClass::ReceiveDamage_Shield(
        TechnoClass *this,
        double a2,
        double a3,
        int *a4,
        int a5,
        _BYTE *a6,
        void *a7,
        char a8,
        __int64 a9)
{
  double result; // st7
  _DWORD *v11; // eax
  int v12; // eax
  int v13; // ebp
  int v14; // eax
  int v15; // ebp
  int v16; // eax
  Cell *v17; // eax
  int v18; // eax
  int v19; // eax
  int *v20; // ecx
  int DestructionEffect; // edi
  int v22; // edi
  int v23; // eax
  int v24; // edx
  int v25; // kr00_4
  TechnoClass *v26; // edi
  int v27; // eax
  int vtable2; // ebx
  int uniqueId; // ecx
  int v30; // edx
  int *p_vtable2; // edi
  int InfantryNuked; // ecx
  int v33; // eax
  TechnoClass *slaveManager; // ecx
  int drainAnim; // ecx
  int drainTarget; // eax
  int v37; // eax
  int drainingMe; // edi
  int v39; // ecx
  int v40; // eax
  int v41; // eax
  _DWORD *captureManager; // ecx
  int vtable0; // edx
  int v44; // edi
  unsigned int v45; // eax
  int v46; // edx
  int v47; // edi
  unsigned int v48; // eax
  int fireParticles; // ecx
  int v50; // edi
  int v51; // eax
  int v52; // ebx
  int v53; // edi
  int v54; // ebp
  _DWORD *v55; // edi
  int v56; // edx
  VoxelAnimClass *v57; // ebx
  int v58; // eax
  int *v59; // edi
  int *v60; // eax
  int v61; // ebp
  AnimClass *v62; // ebx
  int *v63; // eax
  int v64; // ecx
  int v65; // edx
  int v66; // eax
  int v67; // edx
  int v68; // eax
  int v69; // edi
  int v70; // eax
  AnimClass *v71; // edi
  int *v72; // eax
  int v73; // ecx
  int v74; // edx
  int v75; // eax
  int v76; // eax
  int v77; // ebp
  int v78; // edi
  int DB; // eax
  int *v80; // ecx
  TechnoClass *v81; // eax
  TechnoClass *v82; // edi
  TechnoClass *attachedBomb; // esi
  _DWORD *v84; // eax
  int v85; // edx
  int v86; // eax
  int v87; // edx
  int v88; // eax
  int damageParticles; // ecx
  int v90; // eax
  int i; // ebp
  int v92; // eax
  int *UpgradeOffset; // eax
  int v94; // ebx
  int v95; // ebp
  int *v96; // edi
  int v97; // ecx
  int v98; // edx
  int v99; // eax
  int v100; // eax
  int v101; // eax
  _DWORD *v102; // edi
  _DWORD *v103; // eax
  double v104; // st6
  double v105; // st4
  int v106; // eax
  int v107; // edx
  int v108; // kr04_4
  int v109; // edi
  int v110; // edi
  int v111; // [esp+20h] [ebp-C8h]
  _DWORD *owner; // [esp+24h] [ebp-C4h]
  bool v113; // [esp+37h] [ebp-B1h]
  int v114; // [esp+38h] [ebp-B0h]
  double v115; // [esp+38h] [ebp-B0h]
  double v116; // [esp+38h] [ebp-B0h]
  double v117; // [esp+38h] [ebp-B0h]
  double v118; // [esp+38h] [ebp-B0h]
  int v119; // [esp+38h] [ebp-B0h]
  double v120; // [esp+38h] [ebp-B0h]
  int v121; // [esp+40h] [ebp-A8h]
  int v122; // [esp+44h] [ebp-A4h]
  double ammo; // [esp+48h] [ebp-A0h]
  double v124; // [esp+48h] [ebp-A0h]
  Random *p_NeedsSaveOrLink; // [esp+48h] [ebp-A0h]
  int v126; // [esp+48h] [ebp-A0h]
  int v127; // [esp+50h] [ebp-98h]
  void **v128; // [esp+54h] [ebp-94h] BYREF
  void *Block; // [esp+58h] [ebp-90h]
  int v130; // [esp+5Ch] [ebp-8Ch]
  char v131; // [esp+60h] [ebp-88h]
  char v132; // [esp+61h] [ebp-87h]
  int v133; // [esp+64h] [ebp-84h]
  int v134; // [esp+68h] [ebp-80h]
  int v135; // [esp+6Ch] [ebp-7Ch] BYREF
  int v136; // [esp+70h] [ebp-78h]
  int v137; // [esp+74h] [ebp-74h]
  int v138; // [esp+78h] [ebp-70h]
  _DWORD v139[2]; // [esp+7Ch] [ebp-6Ch] BYREF
  int v140; // [esp+84h] [ebp-64h]
  _DWORD v141[3]; // [esp+88h] [ebp-60h] BYREF
  _DWORD v142[3]; // [esp+94h] [ebp-54h] BYREF
  _DWORD v143[3]; // [esp+A0h] [ebp-48h] BYREF
  int v144[3]; // [esp+ACh] [ebp-3Ch] BYREF
  int v145[3]; // [esp+B8h] [ebp-30h] BYREF
  _DWORD v146[4]; // [esp+C4h] [ebp-24h] BYREF
  char v147[8]; // [esp+D4h] [ebp-14h] BYREF
  int v148[3]; // [esp+DCh] [ebp-Ch] BYREF

  v114 = *(_DWORD *)LODWORD(a2); /*0x70191b*/
  v113 = (int)*(_DWORD *)LODWORD(a2) < 0; /*0x701927*/
  if ( !(_BYTE)a4 && (int)*(_DWORD *)LODWORD(a2) >= 0 ) /*0x701933*/
  {
    v11 = (_DWORD *)(*(int (__thiscall **)(TechnoClass *))(this->vtable0 + 132))(this); /*0x701945*/
    result = (double)v114 /*0x70195d*/
           / (TechnoClass::GetDamageMultiplier((TechnoClass *)this->owner, v11)
            * *(double *)this->armorMultiplier);
    LOWORD(v12) = Math::RoundToInt(result); /*0x701961*/
    *(_DWORD *)LODWORD(a2) = v12; /*0x70196c*/
    if ( (unsigned __int8)Audio::IsMediumVolume(&this->veterancy) || (unsigned __int8)Audio::IsLoud(&this->veterancy) ) /*0x70197b*/
    {
      if ( (v13 = (*(int (__thiscall **)(TechnoClass *))(this->vtable0 + 132))(this), /*0x7019ba*/
            (unsigned __int8)Audio::IsMediumVolume(&this->veterancy))
        && *(_BYTE *)(v13 + 669)
        || (unsigned __int8)Audio::IsLoud(&this->veterancy) && (*(_BYTE *)(v13 + 669) || *(_BYTE *)(v13 + 687)) )
      {
        result = (double)(int)*(_DWORD *)LODWORD(a2) / *(double *)&dword_8871E0->CreditTicks[1]; /*0x7019cb*/
        LOWORD(v14) = Math::RoundToInt(result); /*0x7019d1*/
        *(_DWORD *)LODWORD(a2) = v14; /*0x7019d6*/
      }
    }
    if ( (int)*(_DWORD *)LODWORD(a2) < 1 ) /*0x7019db*/
      *(_DWORD *)LODWORD(a2) = 1; /*0x7019dd*/
    if ( HIDWORD(a3) ) /*0x7019ec*/
    {
      if ( *(_BYTE *)((*(int (__thiscall **)(TechnoClass *))(this->vtable0 + 132))(this) + 3212) ) /*0x7019f8*/
      {
        v15 = (*(int (__thiscall **)(_DWORD))(*(_DWORD *)HIDWORD(a3) + 132))(HIDWORD(a3)); /*0x701a10*/
        if ( (*(int (__thiscall **)(TechnoClass *))(this->vtable0 + 132))(this) == v15 /*0x701a2a*/
          && this->owner == *(_DWORD *)(HIDWORD(a3) + 540) )
        {
          return result; /*0x701a2a*/
        }
      }
    }
  }
  if ( (*(unsigned __int8 (__thiscall **)(TechnoClass *))(this->vtable0 + 352))(this) && !(_BYTE)a4 && !v113 ) /*0x701a5a*/
  {
    if ( *(_DWORD *)this->__pad_1C4 == 1 ) /*0x701a63*/
      CreateSmokeEffectAt( /*0x701a67*/
        2 * *(_DWORD *)LODWORD(a2),
        SLODWORD(a3),
        this->location[0],
        this->location[1],
        this->location[2],
        1,
        6);
    else
      CreateSmokeEffectAt( /*0x701a93*/
        2 * *(_DWORD *)LODWORD(a2),
        SLODWORD(a3),
        this->location[0],
        this->location[1],
        this->location[2],
        1,
        1);
    *(_DWORD *)LODWORD(a2) = 0; /*0x701a98*/
    return result; /*0x701aaa*/
  }
  if ( (*(unsigned __int8 (__thiscall **)(TechnoClass *))(this->vtable0 + 468))(this) && !(_BYTE)a4 ) /*0x701ac4*/
  {
    *(_DWORD *)LODWORD(a2) = 0; /*0x701ac6*/
    return result; /*0x701ad8*/
  }
  if ( *(_BYTE *)((*(int (__thiscall **)(TechnoClass *))(this->vtable0 + 132))(this) + 1713) ) /*0x701ae5*/
  {
    v115 = (double)(int)*(_DWORD *)LODWORD(a2); /*0x701af5*/
    v116 = v115 / (double)*(int *)((*(int (__thiscall **)(TechnoClass *))(this->vtable0 + 132))(this) + 160); /*0x701b0d*/
    v117 = *(float *)((*(int (__thiscall **)(TechnoClass *))(this->vtable0 + 132))(this) + 1716) * v116; /*0x701b25*/
    ammo = (double)this->ammo; /*0x701b2f*/
    result = ammo - (double)*(int *)((*(int (__thiscall **)(TechnoClass *))(this->vtable0 + 132))(this) + 1668) * v117; /*0x701b43*/
    LOWORD(v16) = Math::RoundToInt(result); /*0x701b47*/
    this->ammo = v16; /*0x701b4e*/
    if ( v16 < 0 ) /*0x701b54*/
      this->ammo = 0; /*0x701b56*/
    TechnoClass::CalcAnimDelay(this); /*0x701b62*/
  }
  if ( this->bunkerLinkedUnit && !(_BYTE)a4 ) /*0x701b81*/
  {
    if ( (*(int (__thiscall **)(TechnoClass *))(this->vtable0 + 44))(this) == 6 ) /*0x701b8d*/
    {
      if ( !LODWORD(a3) ) /*0x701b91*/
        goto LABEL_67; /*0x701b91*/
      if ( *(_BYTE *)(LODWORD(a3) + 326) ) /*0x701b97*/
      {
        *(_DWORD *)LODWORD(a2) = 0; /*0x701ba1*/
        return result; /*0x701bb3*/
      }
    }
    else
    {
      if ( !LODWORD(a3) ) /*0x701bb8*/
        goto LABEL_67; /*0x701bb8*/
      if ( !*(_BYTE *)(LODWORD(a3) + 326) ) /*0x701bbe*/
      {
        v17 = (Cell *)(*(int (__thiscall **)(TechnoClass *))(this->vtable0 + 444))(this); /*0x701bcc*/
        if ( Cell::IsBridge(v17) == (_DWORD *)this->bunkerLinkedUnit ) /*0x701bdf*/
        {
          *(_DWORD *)LODWORD(a2) = 0; /*0x701be1*/
          return result; /*0x701bf3*/
        }
      }
    }
  }
  if ( LODWORD(a3) ) /*0x701bf8*/
  {
    if ( *(_BYTE *)(LODWORD(a3) + 375) /*0x701c12*/
      && *(_BYTE *)((*(int (__thiscall **)(TechnoClass *))(this->vtable0 + 132))(this) + 3383) )
    {
      *(_DWORD *)LODWORD(a2) = 0; /*0x701c1c*/
      return result; /*0x701c2e*/
    }
    if ( *(_BYTE *)(LODWORD(a3) + 376) /*0x701c45*/
      && *(_BYTE *)((*(int (__thiscall **)(TechnoClass *))(this->vtable0 + 132))(this) + 3382) )
    {
      *(_DWORD *)LODWORD(a2) = 0; /*0x701c4f*/
      return result; /*0x701c61*/
    }
    if ( *(_BYTE *)(LODWORD(a3) + 342) /*0x701c78*/
      && *(_BYTE *)((*(int (__thiscall **)(TechnoClass *))(this->vtable0 + 132))(this) + 3387) )
    {
      *(_DWORD *)LODWORD(a2) = 0; /*0x701c82*/
      return result; /*0x701c94*/
    }
    if ( !*(_BYTE *)(LODWORD(a3) + 377) /*0x701cb9*/
      && HIDWORD(a3)
      && (unsigned __int8)HouseClass::IsAlliedWith(*(HouseClass **)(HIDWORD(a3) + 540)) )
    {
      *(_DWORD *)LODWORD(a2) = 0; /*0x701cc2*/
      return result; /*0x701cd4*/
    }
    if ( *(_BYTE *)(LODWORD(a3) + 365) ) /*0x701cd7*/
    {
      if ( !(unsigned __int8)HouseClass::IsAlliedWith((HouseClass *)this->owner) /*0x701d3c*/
        && !*(_BYTE *)((*(int (__thiscall **)(TechnoClass *))(this->vtable0 + 132))(this) + 3381)
        && (!this || (*(int (__thiscall **)(TechnoClass *))(this->vtable0 + 44))(this) != 6) )
      {
        v18 = (*(int (__thiscall **)(TechnoClass *))(this->vtable0 + 136))(this); /*0x701d53*/
        v19 = ComputeTechnoClassDamageFalloff(*(_DWORD *)LODWORD(a2), SLODWORD(a3), *(_DWORD *)(v18 + 156), 0); /*0x701d64*/
        *(_DWORD *)LODWORD(a2) = v19; /*0x701d69*/
        this->isBerserk_duration_left = v19; /*0x701d6b*/
        if ( !this->isBerserk[0] ) /*0x701d71*/
        {
          this->isBerserk[0] = 1; /*0x701d7d*/
          if ( this ) /*0x701d84*/
          {
            if ( (this->abstractFlags & 4) != 0 ) /*0x701d8a*/
            {
              v20 = (int *)this->q175; /*0x701d8c*/
              if ( v20 ) /*0x701d94*/
                TeamClass::LiberateMember_Start(v20, (int)this, 0xFFFFFFFF, 0); /*0x701d9b*/
            }
          }
          (*(void (__thiscall **)(TechnoClass *, _DWORD))(this->vtable0 + 968))(this, 0); /*0x701da6*/
          return ((double (__thiscall *)(TechnoClass *, int, _DWORD))*(_DWORD *)(this->vtable0 + 488))(this, 15, 0); /*0x701db4*/
        }
      }
      return result; /*0x701db4*/
    }
  }
LABEL_67:
  DestructionEffect = TechnoClass::CreateDestructionEffect(this); /*0x701dcc*/
  v122 = DestructionEffect; /*0x701e08*/
  if ( HIDWORD(a3) ) /*0x701e0c*/
  {
    v22 = (*(int (__thiscall **)(TechnoClass *))(this->vtable0 + 132))(this); /*0x701e1f*/
    v111 = *(_DWORD *)(HIDWORD(a3) + 540); /*0x701e2b*/
    v118 = (double)(int)*(_DWORD *)LODWORD(a2); /*0x701e2e*/
    v124 = v118 / (double)*(int *)((*(int (__thiscall **)(TechnoClass *))(this->vtable0 + 132))(this) + 160); /*0x701e46*/
    result = (double)(*(int (__thiscall **)(int))(*(_DWORD *)v22 + 172))(v22) * v124; /*0x701e58*/
    v25 = Math::RoundToInt(result); /*0x701e5c*/
    LOWORD(v24) = HIWORD(v25); /*0x701e5c*/
    LOWORD(v23) = v25; /*0x701e5c*/
    UpdateHouseClassAnger(this->owner, v24, v23, v111); /*0x701e68*/
    DestructionEffect = v122; /*0x701e6d*/
  }
  if ( DestructionEffect == 4 )
  {
    if ( (*(int (__thiscall **)(TechnoClass *))(this->vtable0 + 44))(this) == 6
      && LODWORD(a3)
      && *(_BYTE *)(LODWORD(a3) + 304) )
    {
      if ( this )
        v26 = (*(int (__thiscall **)(TechnoClass *))(this->vtable0 + 44))(this) == 6 ? this : 0;
      else
        v26 = 0; /*0x701ea4*/
      if ( *(_BYTE *)(v26[1].vtable0 + 5457) ) /*0x701ec2*/
      {
        result = (double)*(int *)(LODWORD(a3) + 308); /*0x701eda*/
        Math::RoundToInt(result); /*0x701eee*/
        LOWORD(v27) = Math::RoundToInt(result); /*0x701f09*/
        if ( !HIBYTE(v26[1].airstrikeTintTimer[1]) ) /*0x701f0e*/
          goto LABEL_83; /*0x701f0e*/
        vtable2 = v26[1].vtable2; /*0x701f1a*/
        uniqueId = v26[1].uniqueId; /*0x701f20*/
        if ( vtable2 != -1 ) /*0x701f29*/
        {
          if ( (int)dword_A8ED84 - vtable2 >= uniqueId ) /*0x701f35*/
            uniqueId = 0; /*0x701f3b*/
          else
            uniqueId -= (int)dword_A8ED84 - vtable2; /*0x701f37*/
        }
        if ( v27 < uniqueId ) /*0x701f3f*/
        {
LABEL_83:
          v30 = v136; /*0x701f41*/
          HIBYTE(v26[1].airstrikeTintTimer[1]) = 1; /*0x701f45*/
          p_vtable2 = &v26[1].vtable2; /*0x701f52*/
          *p_vtable2 = (int)dword_A8ED84; /*0x701f58*/
          p_vtable2[1] = v30; /*0x701f5a*/
          p_vtable2[2] = v27; /*0x701f5d*/
        }
        this->isAliveFlag[0] = 1; /*0x701f60*/
        this->health = 1; /*0x701f67*/
        return result; /*0x701f7d*/
      }
      DestructionEffect = v122; /*0x701fa2*/
    }
    goto LABEL_89; /*0x701fa2*/
  }
  if ( DestructionEffect == 5 ) /*0x701f83*/
    return result; /*0x701f83*/
  DestructionEffect = v122; /*0x701f94*/
  if ( v122 ) /*0x701f9a*/
  {
LABEL_89:
    InfantryNuked = dword_8871E0->InfantryNuked; /*0x701fa6*/
    this->radarFlashTimer[0] = (int)dword_A8ED84; /*0x701fbd*/
    this->radarFlashTimer[1] = v136; /*0x701fc5*/
    this->radarFlashTimer[2] = InfantryNuked; /*0x701fc8*/
    if ( DestructionEffect /*0x701ff0*/
      && DestructionEffect != 4
      && *(_BYTE *)((*(int (__thiscall **)(TechnoClass *))(this->vtable0 + 132))(this) + 3375)
      && !*(_BYTE *)((*(int (__thiscall **)(TechnoClass *))(this->vtable0 + 132))(this) + 3376) )
    {
      if ( (*(unsigned __int8 (__thiscall **)(TechnoClass *))(this->vtable0 + 196))(this) ) /*0x701ffe*/
        (*(void (__thiscall **)(TechnoClass *))(this->vtable0 + 1136))(this); /*0x70200c*/
      v33 = 2 * *(_DWORD *)LODWORD(a2); /*0x702020*/
      this->infantryBlinkTimer[0] = (int)dword_A8ED84; /*0x702022*/
      this->infantryBlinkTimer[1] = v136; /*0x702028*/
      this->infantryBlinkTimer[2] = v33; /*0x70202b*/
    }
  }
  if ( !this->health ) /*0x70202e*/
  {
    DestructionEffect = 4; /*0x702035*/
    v122 = 4; /*0x70203a*/
  }
  switch ( DestructionEffect ) /*0x702049*/
  {
    case 0: /*0x702049*/
    case 3: /*0x702049*/
      goto LABEL_186;
    case 1: /*0x702049*/
      DestructionEffect = v122; /*0x702713*/
      goto LABEL_176; /*0x702713*/
    case 2: /*0x702049*/
      DestructionEffect = (*(int (__thiscall **)(TechnoClass *))(this->vtable0 + 132))(this); /*0x70269f*/
      if ( *(int *)(DestructionEffect + 1256) > 0 /*0x7026cc*/
        && Random::Range(&Randomizer_Global, 0, 99) < 30
        && (unsigned __int8)House::IsHumanPlayer((House *)this->owner) )
      {
        DestructionEffect = *(_DWORD *)(*(_DWORD *)(DestructionEffect + 1244) /*0x7026f5*/
                                      + 4
                                      * ((unsigned int)Random::State(&Randomizer_Global)
                                       % *(_DWORD *)(DestructionEffect + 1256)));
        v84 = (_DWORD *)(*(int (__thiscall **)(TechnoClass *, _DWORD *))(this->vtable0 + 72))(this, v146); /*0x702702*/
        StartAudioControllerAt(DestructionEffect, v84, 0); /*0x702709*/
      }
      goto LABEL_186; /*0x70270e*/
    case 4: /*0x702049*/
      slaveManager = (TechnoClass *)this->slaveManager; /*0x702050*/
      if ( slaveManager ) /*0x70205a*/
        TechnoClass::MutateAll(slaveManager, SHIDWORD(a3), 0); /*0x702065*/
      if ( this->drainTarget ) /*0x70206a*/
      {
        drainAnim = this->drainAnim; /*0x702072*/
        if ( drainAnim ) /*0x70207a*/
        {
          (*(void (__thiscall **)(int))(*(_DWORD *)drainAnim + 248))(drainAnim); /*0x70207e*/
          this->drainAnim = 0; /*0x702084*/
        }
        drainTarget = this->drainTarget; /*0x70208a*/
        if ( drainTarget ) /*0x702092*/
        {
          *(_DWORD *)(drainTarget + 464) = 0; /*0x702094*/
          v37 = *(_DWORD *)(this->drainTarget + 540); /*0x7020a0*/
          if ( v37 ) /*0x7020a8*/
            *(_BYTE *)(v37 + 22392) = 1; /*0x7020aa*/
          this->drainTarget = 0; /*0x7020b1*/
        }
      }
      drainingMe = this->drainingMe; /*0x7020b7*/
      if ( drainingMe ) /*0x7020c1*/
      {
        v39 = *(_DWORD *)(drainingMe + 468); /*0x7020c3*/
        if ( v39 ) /*0x7020cb*/
        {
          (*(void (__thiscall **)(int))(*(_DWORD *)v39 + 248))(v39); /*0x7020cf*/
          *(_DWORD *)(drainingMe + 468) = 0; /*0x7020d5*/
        }
        v40 = *(_DWORD *)(drainingMe + 460); /*0x7020db*/
        if ( v40 ) /*0x7020e3*/
        {
          *(_DWORD *)(v40 + 464) = 0; /*0x7020e5*/
          v41 = *(_DWORD *)(*(_DWORD *)(drainingMe + 460) + 540); /*0x7020f1*/
          if ( v41 ) /*0x7020f9*/
            *(_BYTE *)(v41 + 22392) = 1; /*0x7020fb*/
          *(_DWORD *)(drainingMe + 460) = 0; /*0x702102*/
        }
      }
      captureManager = (_DWORD *)this->captureManager; /*0x702108*/
      if ( captureManager ) /*0x702110*/
        CaptureManager::FreeAll(captureManager); /*0x702112*/
      if ( *(int *)((*(int (__thiscall **)(TechnoClass *))(this->vtable0 + 132))(this) + 1228) > 0 /*0x702136*/
        && (unsigned __int8)House::IsHumanPlayer((House *)this->owner) )
      {
        v142[0] = this->location[0]; /*0x70214b*/
        v142[1] = this->location[1]; /*0x702154*/
        vtable0 = this->vtable0; /*0x702158*/
        v142[2] = this->location[2]; /*0x70215d*/
        v44 = (*(int (__thiscall **)(TechnoClass *))(vtable0 + 132))(this) + 1212; /*0x70216e*/
        v45 = Random::State(&Randomizer_Global); /*0x702174*/
        StartAudioControllerAt(*(_DWORD *)(*(_DWORD *)(v44 + 4) + 4 * (v45 % *(_DWORD *)(v44 + 16))), v142, 0); /*0x70218b*/
      }
      if ( *(int *)((*(int (__thiscall **)(TechnoClass *))(this->vtable0 + 132))(this) + 1312) > 0 ) /*0x7021a7*/
      {
        v143[0] = this->location[0]; /*0x7021b5*/
        v143[1] = this->location[1]; /*0x7021be*/
        v46 = this->vtable0; /*0x7021c5*/
        v143[2] = this->location[2]; /*0x7021ca*/
        v47 = (*(int (__thiscall **)(TechnoClass *))(v46 + 132))(this) + 1296; /*0x7021de*/
        v48 = Random::State(&Randomizer_Global); /*0x7021e4*/
        StartAudioControllerAt(*(_DWORD *)(*(_DWORD *)(v47 + 4) + 4 * (v48 % *(_DWORD *)(v47 + 16))), v143, 0); /*0x7021fb*/
      }
      (*(void (__thiscall **)(TechnoClass *, int))(this->vtable0 + 640))(this, 3); /*0x702206*/
      (*(void (__thiscall **)(TechnoClass *))(this->vtable0 + 928))(this); /*0x702210*/
      fireParticles = this->fireParticles; /*0x702216*/
      if ( fireParticles ) /*0x70221e*/
      {
        (*(void (__thiscall **)(int))(*(_DWORD *)fireParticles + 248))(fireParticles); /*0x702222*/
        this->fireParticles = 0; /*0x702228*/
      }
      if ( (*(int (__thiscall **)(TechnoClass *))(this->vtable0 + 456))(this) > 10 /*0x70227b*/
        || !this->isBomb[0]
        || (v141[0] = this->location[0],
            v141[1] = this->location[1],
            v141[2] = this->location[2],
            Coord::To_Cell((Coord *)&dword_87F7E8, v141)->landType != 2) )
      {
        if ( *(int *)((*(int (__thiscall **)(TechnoClass *))(this->vtable0 + 132))(this) + 1468) > 0 ) /*0x702293*/
        {
          v50 = *(_DWORD *)((*(int (__thiscall **)(TechnoClass *))(this->vtable0 + 132))(this) + 1468) - 1; /*0x7022ad*/
          v51 = (*(int (__thiscall **)(TechnoClass *))(this->vtable0 + 132))(this); /*0x7022ae*/
          v52 = Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, *(_DWORD *)(v51 + 1472), v50); /*0x7022cf*/
          v119 = v52; /*0x7022d3*/
          if ( *(int *)((*(int (__thiscall **)(TechnoClass *))(this->vtable0 + 132))(this) + 804) > 0 ) /*0x7022ea*/
          {
            v53 = 0; /*0x7022f0*/
            v127 = 0; /*0x7022f4*/
            while ( v52 > 0 ) /*0x7022f8*/
            {
              p_NeedsSaveOrLink = (Random *)&dword_A8B230[14].NeedsSaveOrLink; /*0x70230c*/
              v54 = 4 * v53; /*0x70231f*/
              v55 = (_DWORD *)(4 * v53 /*0x702329*/
                             + *(_DWORD *)((*(int (__thiscall **)(TechnoClass *))(this->vtable0 + 132))(this) + 820));
              v56 = (int)abs32(Random::State(p_NeedsSaveOrLink)) % (*v55 + 1); /*0x702339*/
              v126 = v56; /*0x70233d*/
              if ( v56 >= v52 ) /*0x702341*/
              {
                v56 = v52; /*0x702343*/
                v126 = v52; /*0x702345*/
              }
              if ( v56 > 0 ) /*0x70234b*/
              {
                v138 = v56; /*0x70234d*/
                do /*0x7023a5*/
                {
                  v57 = (VoxelAnimClass *)__2_YAPAXI_Z(0x148u); /*0x70235b*/
                  if ( v57 ) /*0x702362*/
                  {
                    v58 = (*(int (__thiscall **)(TechnoClass *, _DWORD *))(this->vtable0 + 132))(this, owner); /*0x702368*/
                    owner = (_DWORD *)this->owner; /*0x702381*/
                    v59 = (int *)(v54 + *(_DWORD *)(v58 + 792)); /*0x70238c*/
                    v60 = (int *)(*(int (__thiscall **)(TechnoClass *))(this->vtable0 + 72))(this); /*0x70238e*/
                    DamageAnimClass::Constructor(v57, *v59, v60, (int)v147); /*0x702397*/
                  }
                  --v138; /*0x7023a1*/
                }
                while ( v138 ); /*0x7023a5*/
              }
              v52 = v119 - v126; /*0x7023b5*/
              v119 -= v126; /*0x7023ba*/
              v53 = ++v127; /*0x7023b7*/
              if ( v127 >= *(_DWORD *)((*(int (__thiscall **)(TechnoClass *))(this->vtable0 + 132))(this) + 804) ) /*0x7023d5*/
              {
                v53 = 0; /*0x7023d7*/
                v127 = 0; /*0x7023d9*/
              }
            }
          }
          if ( *(int *)((*(int (__thiscall **)(TechnoClass *))(this->vtable0 + 132))(this) + 1492) <= 0 ) /*0x7023fc*/
          {
            if ( !*(_DWORD *)((*(int (__thiscall **)(TechnoClass *))(this->vtable0 + 132))(this) + 804) && v52 > 0 ) /*0x7024da*/
            {
              do /*0x70256c*/
              {
                v71 = (AnimClass *)__2_YAPAXI_Z(0x1C8u); /*0x7024ea*/
                if ( v71 ) /*0x7024f1*/
                {
                  v72 = (int *)(*(int (__thiscall **)(TechnoClass *, void ***))(this->vtable0 + 72))(this, &v128); /*0x7024fc*/
                  v73 = *v72; /*0x7024ff*/
                  v74 = v72[1]; /*0x702501*/
                  v75 = v72[2]; /*0x702504*/
                  v145[1] = v74; /*0x702507*/
                  v145[0] = v73; /*0x702517*/
                  v145[2] = v75 + 20; /*0x70251e*/
                  v76 = Random::Range( /*0x70253a*/
                          (Random *)&dword_A8B230[14].NeedsSaveOrLink,
                          0,
                          dword_8871E0->ExecutePlanSound - 1);
                  AnimClass::ctor( /*0x702566*/
                    v71,
                    *(void **)(dword_8871E0->DefaultChronoSound + 4 * v76),
                    v145,
                    0,
                    1,
                    (void *)0x600,
                    0,
                    0);
                }
                --v52; /*0x70256b*/
              }
              while ( v52 ); /*0x70256c*/
            }
          }
          else if ( v52 > 0 ) /*0x702404*/
          {
            v61 = v52; /*0x70240a*/
            do /*0x7024b0*/
            {
              v62 = (AnimClass *)__2_YAPAXI_Z(0x1C8u); /*0x702416*/
              if ( v62 ) /*0x70241d*/
              {
                v63 = (int *)(*(int (__thiscall **)(TechnoClass *, int *))(this->vtable0 + 72))(this, v148); /*0x70242f*/
                v64 = *v63; /*0x702432*/
                v65 = v63[1]; /*0x702434*/
                v66 = v63[2]; /*0x702437*/
                v144[1] = v65; /*0x70243a*/
                v67 = this->vtable0; /*0x702441*/
                v144[0] = v64; /*0x702446*/
                v144[2] = v66 + 20; /*0x70244f*/
                v68 = (*(int (__thiscall **)(TechnoClass *))(v67 + 132))(this); /*0x702456*/
                v69 = Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, *(_DWORD *)(v68 + 1492) - 1); /*0x70247c*/
                v70 = (*(int (__thiscall **)(TechnoClass *))(this->vtable0 + 132))(this); /*0x70247e*/
                AnimClass::ctor(v62, *(void **)(*(_DWORD *)(v70 + 1480) + 4 * v69), v144, 0, 1, (void *)0x600, 0, 0); /*0x7024aa*/
              }
              --v61; /*0x7024af*/
            }
            while ( v61 ); /*0x7024b0*/
          }
        }
        v77 = *(_DWORD *)(*(int (__thiscall **)(TechnoClass *, int))(this->vtable0 + 1016))( /*0x702585*/
                           this,
                           this->currentWeaponSlot);
        if ( *(_BYTE *)((*(int (__thiscall **)(TechnoClass *))(this->vtable0 + 132))(this) + 3349) /*0x7025f9*/
          || ((unsigned __int8)Audio::IsMediumVolume(&this->veterancy)
           || (unsigned __int8)Audio::IsLoud(&this->veterancy))
          && ((v78 = (*(int (__thiscall **)(TechnoClass *))(this->vtable0 + 132))(this),
               (unsigned __int8)Audio::IsMediumVolume(&this->veterancy))
           && *(_BYTE *)(v78 + 678)
           || (unsigned __int8)Audio::IsLoud(&this->veterancy) && (*(_BYTE *)(v78 + 678) || *(_BYTE *)(v78 + 696)))
          || v77 && *(_BYTE *)(v77 + 324) )
        {
          while ( this->passengers[1] ) /*0x702603*/
          {
            DB = CCINIClass::GetDB((CCINIClass *)this->passengers); /*0x70261c*/
            v80 = *(int **)(DB + 1492); /*0x702621*/
            if ( v80 ) /*0x702629*/
              TeamClass::LiberateMember_Start(v80, DB, 0xFFFFFFFF, 0); /*0x702630*/
            v81 = (TechnoClass *)LinkedList::Pop((LinkedList *)this->passengers); /*0x702637*/
            v82 = v81; /*0x70263c*/
            if ( v81 ) /*0x702640*/
            {
              TechnoClass::CleanupAll(v81, (int)v81); /*0x702645*/
              (*(void (__thiscall **)(TechnoClass *, _DWORD))(v82->vtable0 + 224))(v82, HIDWORD(a3)); /*0x70264f*/
              (*(void (__thiscall **)(TechnoClass *))(v82->vtable0 + 248))(v82); /*0x702659*/
            }
          }
          TechnoClass::ComputeCombatDamage(this, 0); /*0x70266d*/
        }
      }
      attachedBomb = (TechnoClass *)this->attachedBomb; /*0x702672*/
      if ( attachedBomb ) /*0x702677*/
        TechnoClass::ApplyDamageEffects(attachedBomb); /*0x70267f*/
      return result; /*0x702692*/
    default:
LABEL_176:
      if ( *(_DWORD *)((*(int (__thiscall **)(TechnoClass *))(this->vtable0 + 132))(this) + 1336) != -1 ) /*0x70272c*/
      {
        v139[0] = this->location[0]; /*0x70273c*/
        v139[1] = this->location[1]; /*0x702745*/
        v85 = this->vtable0; /*0x702749*/
        v140 = this->location[2]; /*0x70274e*/
        v86 = (*(int (__thiscall **)(TechnoClass *))(v85 + 132))(this); /*0x702752*/
        PlayAudioAt2(*(_DWORD *)(v86 + 1336), v139, 0); /*0x702760*/
      }
      if ( *(_DWORD *)((*(int (__thiscall **)(TechnoClass *))(this->vtable0 + 132))(this) + 1336) != -1 ) /*0x702775*/
      {
        v135 = this->location[0]; /*0x702785*/
        v87 = this->vtable0; /*0x702789*/
        v136 = this->location[1]; /*0x70278e*/
        v137 = this->location[2]; /*0x702795*/
        v88 = (*(int (__thiscall **)(TechnoClass *))(v87 + 132))(this); /*0x70279b*/
        PlayAudioAt2(*(_DWORD *)(v88 + 1336), &v135, 0); /*0x7027a9*/
      }
      if ( (*(_BYTE *)((*(int (__thiscall **)(TechnoClass *))(this->vtable0 + 132))(this) + 3222) /*0x7027e4*/
         || this->isReceivingDamageEffect[0])
        && !(unsigned __int8)House::IsCurrentPlayer((House *)this->owner)
        && HIDWORD(a3) )
      {
        TechnoClass::EvaluateMission(this, SHIDWORD(a3)); /*0x7027e9*/
      }
      if ( DestructionEffect == 4 ) /*0x7027f1*/
        return result; /*0x7027f1*/
LABEL_186:
      if ( HIDWORD(a3) && !(unsigned __int8)Object::IsAlliedWithObjectHouse((Object *)this->owner, SHIDWORD(a3)) ) /*0x702809*/
        this->hasBeenAttacked[0] = 1; /*0x702812*/
      (*(void (__thiscall **)(TechnoClass *))(this->vtable0 + 252))(this); /*0x70281d*/
      BuildingClass::GetHealthRatio((BuildingClass *)this); /*0x702825*/
      if ( result <= *(double *)&dword_8871E0->HomingScatter ) /*0x70283a*/
      {
        if ( v122 == 2 || v122 == 3 ) /*0x702863*/
        {
          Block = 0; /*0x70286d*/
          v130 = 0; /*0x702871*/
          v132 = 0; /*0x702875*/
          v133 = 0; /*0x702879*/
          v90 = this->vtable0; /*0x70287d*/
          v131 = 1; /*0x70287f*/
          v128 = &DynamicVectorClass<ParticleSystemTypeClass const *>::`vftable'; /*0x702884*/
          v134 = 10; /*0x70288c*/
          for ( i = *(_DWORD *)((*(int (__thiscall **)(TechnoClass *))(v90 + 132))(this) + 1928) - 1; i >= 0; --i ) /*0x7028a6*/
          {
            if ( !*(_DWORD *)(*(_DWORD *)(*(_DWORD *)((*(int (__thiscall **)(TechnoClass *))(this->vtable0 + 132))(this) /*0x7028c8*/
                                                    + 1916)
                                        + 4 * i)
                            + 692) )
            {
              DestructionEffect = 4 * i /*0x7028eb*/
                                + *(_DWORD *)((*(int (__thiscall **)(TechnoClass *))(this->vtable0 + 132))(this) + 1916);
              if ( v133 < v130 /*0x702916*/
                || (v132 || !v130)
                && v134 > 0
                && ((unsigned __int8 (__thiscall *)(void ***, int, _DWORD))v128[2])(&v128, v134 + v130, 0) )
              {
                v92 = v133++; /*0x702925*/
                *((_DWORD *)Block + v92) = *(_DWORD *)DestructionEffect; /*0x70292e*/
              }
            }
          }
          if ( !this->damageParticles /*0x70295f*/
            && v133 > 0
            && (*(int (__thiscall **)(TechnoClass *))(this->vtable0 + 456))(this) > -10 )
          {
            result = ((double (__thiscall *)(TechnoClass *))*(_DWORD *)(this->vtable0 + 132))(this); /*0x702971*/
            UpgradeOffset = BuildingTypeClass::GetUpgradeOffset( /*0x702979*/
                              (BuildingTypeClass *)v146,
                              (int *)DestructionEffect,
                              result,
                              owner);
            v94 = *UpgradeOffset; /*0x70297e*/
            v95 = UpgradeOffset[1]; /*0x702985*/
            v140 = UpgradeOffset[2]; /*0x70298b*/
            v96 = (int *)__2_YAPAXI_Z(0x100u); /*0x702994*/
            if ( v96 ) /*0x70299b*/
            {
              v97 = this->location[1]; /*0x7029ad*/
              v135 = v94 + this->location[0]; /*0x7029b0*/
              v98 = this->location[2]; /*0x7029ba*/
              v136 = v95 + v97; /*0x7029bd*/
              v137 = v140 + v98; /*0x7029d3*/
              v99 = Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, v133 - 1); /*0x7029d7*/
              v100 = ParticleSystemClass::Constructor(v96, *((_DWORD *)Block + v99), &v135, 0, this, &dword_B0EA90, 0); /*0x7029f5*/
            }
            else
            {
              v100 = 0; /*0x7029fc*/
            }
            this->damageParticles = v100; /*0x7029fe*/
          }
          v128 = &VectorClass<ParticleSystemTypeClass const *>::`vftable'; /*0x702a08*/
          if ( Block && v132 ) /*0x702a1a*/
            __3_YAXPAX_Z(Block); /*0x702a1d*/
        }
      }
      else
      {
        damageParticles = this->damageParticles; /*0x70283c*/
        if ( damageParticles ) /*0x702844*/
          (*(void (__thiscall **)(int))(*(_DWORD *)damageParticles + 248))(damageParticles); /*0x70284c*/
      }
      if ( v113 ) /*0x702a2b*/
        return result; /*0x702a2b*/
      if ( ValidateAttackTarget((int)this, (int *)HIDWORD(a3), SLODWORD(a3)) ) /*0x702a43*/
      {
        if ( HIDWORD(a3) ) /*0x702a52*/
        {
          v101 = (*(int (__thiscall **)(TechnoClass *, _DWORD))(this->vtable0 + 740))(this, HIDWORD(a3)); /*0x702a5d*/
          if ( (*(unsigned __int8 (__thiscall **)(TechnoClass *, _DWORD, int))(this->vtable0 + 936))( /*0x702a69*/
                 this,
                 HIDWORD(a3),
                 v101) )
          {
            goto LABEL_219; /*0x702a69*/
          }
          if ( !(unsigned __int8)House::IsCurrentPlayer((House *)this->owner) ) /*0x702a7d*/
            goto LABEL_219; /*0x702a7d*/
          v102 = (_DWORD *)(*(int (__thiscall **)(_DWORD, _DWORD *))(*(_DWORD *)HIDWORD(a3) + 72))(HIDWORD(a3), v146); /*0x702a9d*/
          v103 = (_DWORD *)(*(int (__thiscall **)(TechnoClass *, void ***))(this->vtable0 + 72))(this, &v128); /*0x702aa4*/
          v121 = v103[2] - v102[2]; /*0x702ac5*/
          v104 = (double)(v103[1] - v102[1]); /*0x702ac9*/
          v105 = (double)(*v103 - *v102); /*0x702ad1*/
          Math::Sqrt(v105 * v105 + (double)v121 * (double)v121 + v104 * v104); /*0x702af1*/
          v108 = Math::RoundToInt(result); /*0x702af9*/
          LOWORD(v107) = HIWORD(v108); /*0x702af9*/
          LOWORD(v106) = v108; /*0x702af9*/
          v120 = (double)v106; /*0x702b0a*/
          result = ((double)*(int *)((*(int (__fastcall **)(TechnoClass *, int))(this->vtable0 + 132))(this, v107) + 1512) /*0x702b20*/
                  + 0.5)
                 * 256.0;
          if ( result >= v120 ) /*0x702b2f*/
LABEL_219:
            (*(void (__thiscall **)(TechnoClass *, int, _DWORD, _DWORD))(this->vtable0 + 500))(this, 1, HIDWORD(a3), 0); /*0x702b41*/
        }
        if ( this && (this->abstractFlags & 4) != 0 && !this->target && !*((_DWORD *)this + 361) ) /*0x702b67*/
        {
          if ( BYTE1(dword_8871E0->ElevationBonusCap[0]) ) /*0x702b7b*/
            return ((double (__thiscall *)(TechnoClass *, _DWORD *, int, _DWORD))*(_DWORD *)(this->vtable0 + 372))( /*0x702b7b*/
                     this,
                     &dword_B0EA90,
                     1,
                     0);
          if ( (unsigned __int8)Audio::IsMediumVolume(&this->veterancy) /*0x702b9c*/
            || (unsigned __int8)Audio::IsLoud(&this->veterancy) )
          {
            v109 = (*(int (__thiscall **)(TechnoClass *))(this->vtable0 + 132))(this); /*0x702bb5*/
            if ( (unsigned __int8)Audio::IsMediumVolume(&this->veterancy) ) /*0x702bb7*/
            {
              if ( *(_BYTE *)(v109 + 671) ) /*0x702bc0*/
                return ((double (__thiscall *)(TechnoClass *, _DWORD *, int, _DWORD))*(_DWORD *)(this->vtable0 + 372))( /*0x702bc0*/
                         this,
                         &dword_B0EA90,
                         1,
                         0);
            }
            if ( (unsigned __int8)Audio::IsLoud(&this->veterancy) && (*(_BYTE *)(v109 + 671) || *(_BYTE *)(v109 + 689)) ) /*0x702beb*/
              return ((double (__thiscall *)(_DWORD, _DWORD, _DWORD, _DWORD))*(_DWORD *)(this->vtable0 + 372))( /*0x702d0b*/
                       this,
                       &dword_B0EA90,
                       1,
                       0);
          }
        }
      }
      else if ( this && (this->abstractFlags & 4) != 0 && MissionClass::GetMissionControl(this)[9] && !this->isTether[0] ) /*0x702c22*/
      {
        if ( !*((_DWORD *)this + 413) ) /*0x702c30*/
          WinAPI::Wrapper(-2147467261); /*0x702c3f*/
        if ( !(*(unsigned __int8 (__stdcall **)(_DWORD))(**((_DWORD **)this + 413) + 16))(*((_DWORD *)this + 413)) /*0x702c7e*/
          && !this->target
          && !*((_DWORD *)this + 361)
          && (*(int (__thiscall **)(TechnoClass *))(this->vtable0 + 44))(this) != 2 )
        {
          if ( !(unsigned __int8)House::IsCurrentPlayer((House *)this->owner) /*0x702c98*/
            || BYTE1(dword_8871E0->ElevationBonusCap[0]) )
          {
            return ((double (__thiscall *)(_DWORD, _DWORD, _DWORD, _DWORD))*(_DWORD *)(this->vtable0 + 372))( /*0x702c98*/
                     this,
                     &dword_B0EA90,
                     1,
                     0);
          }
          if ( (unsigned __int8)Audio::IsMediumVolume(&this->veterancy) /*0x702cb5*/
            || (unsigned __int8)Audio::IsLoud(&this->veterancy) )
          {
            v110 = (*(int (__thiscall **)(TechnoClass *))(this->vtable0 + 132))(this); /*0x702cca*/
            if ( (unsigned __int8)Audio::IsMediumVolume(&this->veterancy) ) /*0x702ccc*/
            {
              if ( *(_BYTE *)(v110 + 671) ) /*0x702cd5*/
                return ((double (__thiscall *)(_DWORD, _DWORD, _DWORD, _DWORD))*(_DWORD *)(this->vtable0 + 372))( /*0x702cd5*/
                         this,
                         &dword_B0EA90,
                         1,
                         0);
            }
            if ( (unsigned __int8)Audio::IsLoud(&this->veterancy) && (*(_BYTE *)(v110 + 671) || *(_BYTE *)(v110 + 689)) ) /*0x702cf4*/
              return ((double (__thiscall *)(_DWORD, _DWORD, _DWORD, _DWORD))*(_DWORD *)(this->vtable0 + 372))( /*0x702cfc*/
                       this,
                       &dword_B0EA90,
                       1,
                       0);
          }
        }
      }
      break; /*0x702d0b*/
  }
  return result; /*0x701a2e*/
}


// ==== 0x00702D40  TechnoClass::RegisterKill  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::RegisterKill(TechnoClass *this)
{
  int v2; // eax
  int v3; // ebp
  TeamClass *attachedTag; // ecx
  TeamClass *v5; // ecx
  TeamClass *v6; // ecx
  TeamClass *v7; // ecx
  TeamClass *v8; // ecx
  int result; // eax
  int v10; // ecx
  int v11; // eax
  int v12; // eax
  int v13; // ecx
  int v14; // eax
  int v15; // eax
  int v16; // ebx
  _DWORD *v17; // eax
  _DWORD *v18; // eax
  int v19; // [esp-Ch] [ebp-1Ch]
  int v20; // [esp-Ch] [ebp-1Ch]
  int v21; // [esp-Ch] [ebp-1Ch]
  int v22; // [esp-Ch] [ebp-1Ch]
  HouseClass *owner; // [esp-8h] [ebp-18h]
  HouseClass *v24; // [esp-8h] [ebp-18h]
  HouseClass *v25; // [esp-8h] [ebp-18h]
  HouseClass *v26; // [esp-8h] [ebp-18h]
  int v27; // [esp+Ch] [ebp-4h]
  int v28; // [esp+14h] [ebp+4h]

  v27 = 0; /*0x702d46*/
  v2 = (*((int (__thiscall **)(TechnoClass *))this->RadioClass + 33))(this); /*0x702d50*/
  v3 = (*(int (__thiscall **)(int, HouseClass *))(*(_DWORD *)v2 + 132))(v2, this->owner); /*0x702d6b*/
  if ( this->? ) /*0x702d6d*/
  {
    attachedTag = (TeamClass *)this->?; /*0x702d77*/
    if ( attachedTag ) /*0x702d7c*/
    {
      if ( v28 ) /*0x702d80*/
        TeamClass::Update_0(attachedTag, 6, (int)this, *(int *)&g_BuildingLoadQueue_Array.?[24], 0, 0); /*0x702d90*/
    }
  }
  if ( this->? ) /*0x702d95*/
  {
    v5 = (TeamClass *)this->?; /*0x702da3*/
    if ( v5 && v28 ) /*0x702dac*/
      TeamClass::Update_0(v5, 4, (int)this, *(int *)&g_BuildingLoadQueue_Array.?[24], 0, 0); /*0x702dbb*/
    if ( this->? && (*((int (__thiscall **)(TechnoClass *))this->RadioClass + 11))(this) != 1 && this->? ) /*0x702dd6*/
    {
      v6 = (TeamClass *)this->?; /*0x702de0*/
      if ( v6 && v28 ) /*0x702de9*/
        TeamClass::Update_0(v6, 7, (int)this, *(int *)&g_BuildingLoadQueue_Array.?[24], 0, 0); /*0x702df8*/
      if ( this->? ) /*0x702dfd*/
      {
        v7 = (TeamClass *)this->?; /*0x702e07*/
        if ( v7 ) /*0x702e0c*/
          TeamClass::Update_0(v7, 48, (int)this, *(int *)&g_BuildingLoadQueue_Array.?[24], 0, 0); /*0x702e1c*/
        if ( this->? ) /*0x702e21*/
        {
          v8 = (TeamClass *)this->?; /*0x702e2b*/
          if ( v8 ) /*0x702e30*/
            TeamClass::Update_0(v8, 29, (int)this, *(int *)&g_BuildingLoadQueue_Array.?[24], 0, 0); /*0x702e3f*/
        }
      }
    }
  }
  result = (*((int (__thiscall **)(TechnoClass *))this->RadioClass + 33))(this); /*0x702e48*/
  if ( !*(_BYTE *)(result + 3231) )
  {
    if ( v28 )
    {
      if ( (unsigned __int8)Object::IsAlliedWithObjectHouse(*(Object **)(v28 + 540), (int)this) ) /*0x702e6c*/
      {
        v3 = 0; /*0x702e75*/
      }
      else if ( (unsigned __int8)Audio::IsMediumVolume(this->veterancy) ) /*0x702e81*/
      {
        v3 *= 2; /*0x702e8a*/
      }
      else if ( (unsigned __int8)Audio::IsLoud(this->veterancy) ) /*0x702e90*/
      {
        v3 *= 3; /*0x702e99*/
      }
      if ( *(_BYTE *)(v28 + 130)
        && (v10 = *(_DWORD *)(v28 + 284)) != 0
        && *(_BYTE *)((*(int (__thiscall **)(int))(*(_DWORD *)v10 + 132))(v10) + 3214) )
      {
        v11 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(v28 + 284) + 132))(*(_DWORD *)(v28 + 284)); /*0x702ecb*/
        owner = this->owner; /*0x702eda*/
        v19 = (*(int (__thiscall **)(int))(*(_DWORD *)v11 + 132))(v11); /*0x702ee9*/
        HouseClass::AccumulateScore((int *)(*(_DWORD *)(v28 + 284) + 336), v19, (int)owner); /*0x702ef0*/
      }
      else if ( *(_BYTE *)((*(int (__thiscall **)(int))(*(_DWORD *)v28 + 132))(v28) + 3214) )
      {
        v12 = (*(int (__thiscall **)(int))(*(_DWORD *)v28 + 132))(v28); /*0x702f0d*/
        v24 = this->owner; /*0x702f1c*/
        v20 = (*(int (__thiscall **)(int))(*(_DWORD *)v12 + 132))(v12); /*0x702f25*/
        HouseClass::AccumulateScore((int *)(v28 + 336), v20, (int)v24); /*0x702f2c*/
      }
      else if ( *(_BYTE *)((*(int (__thiscall **)(int))(*(_DWORD *)v28 + 132))(v28) + 3432) )
      {
        v13 = *(_DWORD *)(v28 + 724); /*0x702f45*/
        if ( v13 && *(_BYTE *)((*(int (__thiscall **)(int))(*(_DWORD *)v13 + 132))(v13) + 3214) ) /*0x702f5b*/
        {
          v14 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(v28 + 724) + 132))(*(_DWORD *)(v28 + 724)); /*0x702f71*/
          v25 = this->owner; /*0x702f80*/
          v21 = (*(int (__thiscall **)(int))(*(_DWORD *)v14 + 132))(v14); /*0x702f8f*/
          HouseClass::AccumulateScore((int *)(*(_DWORD *)(v28 + 724) + 336), v21, (int)v25); /*0x702f96*/
        }
      }
      else if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v28 + 1024))(v28)
             && (*(int (__thiscall **)(int))(*(_DWORD *)v28 + 44))(v28) == 6 )
      {
        v15 = (*(int (__thiscall **)(int))(*(_DWORD *)v28 + 44))(v28); /*0x702fb6*/
        v16 = *(_DWORD *)(*(_DWORD *)(v15 == 6 ? v28 + 0x688 : 1672) + 4 * *(_DWORD *)(v15 == 6 ? v28 + 0x69C : 1692));
        v26 = this->owner; /*0x702fda*/
        v22 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(v16 + 1728) + 132))(*(_DWORD *)(v16 + 1728)); /*0x702fe9*/
        HouseClass::AccumulateScore((int *)(v16 + 336), v22, (int)v26); /*0x702ff0*/
      }
      this->owner->HouseClass_field_548C = (*(int (__thiscall **)(int))(*(_DWORD *)v28 + 56))(v28); /*0x703003*/
      *(_DWORD *)(*(_DWORD *)(v28 + 540) + 21736) += v3; /*0x70300f*/
    }
    result = (*((int (__thiscall **)(TechnoClass *))this->RadioClass + 11))(this) - 1; /*0x70301c*/
    switch ( result ) /*0x70302e*/
    {
      case 0: /*0x70302e*/
        goto LABEL_59;
      case 1: /*0x70302e*/
        if ( !v28 ) /*0x7030d5*/
          goto LABEL_63; /*0x7030d5*/
        if ( !*(_BYTE *)((*((int (__thiscall **)(TechnoClass *))this->RadioClass + 33))(this) + 3231) ) /*0x7030e5*/
        {
          HouseClass::IncrementStat( /*0x703108*/
            (HouseClass *)(*(_DWORD *)(v28 + 540) + 9032),
            *(_DWORD *)(*((_DWORD *)this + 433) + 3576));
          v27 = 1; /*0x70310d*/
        }
LABEL_55:
        if ( v28 ) /*0x703117*/
        {
          if ( !v27 && !*(_BYTE *)((*((int (__thiscall **)(TechnoClass *))this->RadioClass + 33))(this) + 3231) ) /*0x70312f*/
          {
            HouseClass::IncrementStat( /*0x703152*/
              (HouseClass *)(*(_DWORD *)(v28 + 540) + 11088),
              *(_DWORD *)(this->airstrikeTimer + 3576));
            v27 = 1; /*0x703157*/
          }
LABEL_59:
          if ( v28 && !v27 && !*(_BYTE *)((*((int (__thiscall **)(TechnoClass *))this->RadioClass + 33))(this) + 3231) ) /*0x703175*/
            HouseClass::IncrementStat( /*0x703198*/
              (HouseClass *)(*(_DWORD *)(v28 + 540) + 13144),
              *(_DWORD *)(*((_DWORD *)this + 433) + 3576));
        }
LABEL_63:
        ++this->owner->killedBuildingsOfHouses[0]; /*0x70319d*/
        if ( v28 ) /*0x7031b2*/
        {
          if ( !*(_BYTE *)((*((int (__thiscall **)(TechnoClass *))this->RadioClass + 33))(this) + 3231) ) /*0x7031be*/
          {
            v18 = (_DWORD *)(*(_DWORD *)(v28 + 540) /*0x7031d5*/
                           + 4 * (*((int (__thiscall **)(TechnoClass *))this->RadioClass + 14))(this)
                           + 21476);
            ++*v18; /*0x7031dc*/
          }
        }
        result = RadarClass::IsActiveMode((RadarClass *)&stru_87F5F0.__pad_58[416]); /*0x7031e3*/
        if ( (_BYTE)result ) /*0x7031ea*/
LABEL_67:
          result = RadarClass::SetFlag((RadarClass *)&stru_87F5F0.__pad_58[416], 0); /*0x7031ec*/
        break; /*0x7031f3*/
      case 5: /*0x70302e*/
        result = (*((int (__thiscall **)(TechnoClass *))this->RadioClass + 33))(this); /*0x703039*/
        if ( !*(_BYTE *)(result + 562) ) /*0x70303f*/
        {
          if ( *((_DWORD *)this + 335) != -1 ) /*0x703054*/
            ++*(_DWORD *)this->owner->__pad_5488; /*0x70305c*/
          if ( v28 && !*(_BYTE *)((*((int (__thiscall **)(TechnoClass *))this->RadioClass + 33))(this) + 3231) ) /*0x703070*/
          {
            HouseClass::IncrementStat( /*0x703093*/
              (HouseClass *)(*(_DWORD *)(v28 + 540) + 15200),
              *(_DWORD *)(this->gattlingValue + 3576));
            v17 = (_DWORD *)(*(_DWORD *)(v28 + 540) /*0x7030a5*/
                           + 4 * (*((int (__thiscall **)(TechnoClass *))this->RadioClass + 14))(this)
                           + 21560);
            ++*v17; /*0x7030ac*/
          }
          result = RadarClass::IsActiveMode((RadarClass *)&stru_87F5F0.__pad_58[416]); /*0x7030b3*/
          if ( (_BYTE)result ) /*0x7030ba*/
            goto LABEL_67; /*0x7030ba*/
        }
        return result; /*0x7030ba*/
      case 14: /*0x70302e*/
        goto LABEL_55;
      default:
        return result;
    }
  }
  return result; /*0x7030cc*/
}



// ==== 0x00703230  TechnoClass::RegisterKill  this=TechnoClass  sig=csp ====
int __thiscall InfantryClass::RegisterKill(TechnoClass *this)
{
  int v2; // eax
  int v3; // ebp
  TeamClass *attachedTag; // ecx
  TeamClass *v5; // ecx
  TeamClass *v6; // ecx
  TeamClass *v7; // ecx
  TeamClass *v8; // ecx
  int result; // eax
  int v10; // eax
  int v11; // eax
  int v12; // [esp+Ch] [ebp-4h]
  Object *v13; // [esp+14h] [ebp+4h]

  v12 = 0; /*0x703236*/
  v2 = (*((int (__thiscall **)(TechnoClass *))this->RadioClass + 33))(this); /*0x703240*/
  v3 = (*(int (__thiscall **)(int, HouseClass *))(*(_DWORD *)v2 + 132))(v2, this->owner); /*0x70325b*/
  if ( this->? ) /*0x70325d*/
  {
    attachedTag = (TeamClass *)this->?; /*0x703267*/
    if ( attachedTag ) /*0x70326c*/
    {
      if ( v13 ) /*0x703270*/
        TeamClass::Update_0(attachedTag, 6, (int)this, *(int *)&g_BuildingLoadQueue_Array.?[24], 0, 0); /*0x703280*/
    }
  }
  if ( this->? ) /*0x703285*/
  {
    v5 = (TeamClass *)this->?; /*0x703293*/
    if ( v5 && v13 ) /*0x70329c*/
      TeamClass::Update_0(v5, 4, (int)this, *(int *)&g_BuildingLoadQueue_Array.?[24], 0, 0); /*0x7032ab*/
    if ( this->? && (*((int (__thiscall **)(TechnoClass *))this->RadioClass + 11))(this) != 1 && this->? ) /*0x7032c6*/
    {
      v6 = (TeamClass *)this->?; /*0x7032d0*/
      if ( v6 && v13 ) /*0x7032d9*/
        TeamClass::Update_0(v6, 7, (int)this, *(int *)&g_BuildingLoadQueue_Array.?[24], 0, 0); /*0x7032e8*/
      if ( this->? ) /*0x7032ed*/
      {
        v7 = (TeamClass *)this->?; /*0x7032f7*/
        if ( v7 ) /*0x7032fc*/
          TeamClass::Update_0(v7, 48, (int)this, *(int *)&g_BuildingLoadQueue_Array.?[24], 0, 0); /*0x70330c*/
        if ( this->? ) /*0x703311*/
        {
          v8 = (TeamClass *)this->?; /*0x70331b*/
          if ( v8 ) /*0x703320*/
            TeamClass::Update_0(v8, 29, (int)this, *(int *)&g_BuildingLoadQueue_Array.?[24], 0, 0); /*0x70332f*/
        }
      }
    }
  }
  if ( v13 ) /*0x703336*/
  {
    if ( (unsigned __int8)Object::IsAlliedWithObjectHouse(v13, (int)this) ) /*0x70333c*/
    {
      v3 = 0; /*0x703345*/
    }
    else if ( (unsigned __int8)Audio::IsMediumVolume(this->veterancy) ) /*0x703351*/
    {
      v3 *= 2; /*0x70335a*/
    }
    else if ( (unsigned __int8)Audio::IsLoud(this->veterancy) ) /*0x703360*/
    {
      v3 *= 3; /*0x703369*/
    }
    this->owner->HouseClass_field_548C = (int)v13->Object_field_0x30; /*0x703377*/
    v13[32].Object_field_0xE8 = (char *)v13[32].Object_field_0xE8 + v3; /*0x703385*/
  }
  result = (*((int (__thiscall **)(TechnoClass *))this->RadioClass + 11))(this) - 1; /*0x703392*/
  switch ( result ) /*0x7033a4*/
  {
    case 0: /*0x7033a4*/
      goto LABEL_45;
    case 1: /*0x7033a4*/
      if ( !v13 ) /*0x703447*/
        goto LABEL_49; /*0x703447*/
      if ( !*(_BYTE *)((*((int (__thiscall **)(TechnoClass *))this->RadioClass + 33))(this) + 3231) ) /*0x703457*/
      {
        HouseClass::IncrementStat((HouseClass *)&v13[13].__pad_EC[60], *(_DWORD *)(*((_DWORD *)this + 433) + 3576)); /*0x703474*/
        v12 = 1; /*0x703479*/
      }
LABEL_41:
      if ( v13 ) /*0x703483*/
      {
        if ( !v12 && !*(_BYTE *)((*((int (__thiscall **)(TechnoClass *))this->RadioClass + 33))(this) + 3231) ) /*0x703497*/
        {
          HouseClass::IncrementStat((HouseClass *)&v13[16].__pad_140[16], *(_DWORD *)(this->airstrikeTimer + 3576)); /*0x7034b4*/
          v12 = 1; /*0x7034b9*/
        }
LABEL_45:
        if ( v13 && !v12 && !*(_BYTE *)((*((int (__thiscall **)(TechnoClass *))this->RadioClass + 33))(this) + 3231) ) /*0x7034d7*/
          HouseClass::IncrementStat((HouseClass *)&v13[19].__pad_140[56], *(_DWORD *)(*((_DWORD *)this + 433) + 3576)); /*0x7034f4*/
      }
LABEL_49:
      ++this->owner->killedBuildingsOfHouses[0]; /*0x7034f9*/
      if ( v13 ) /*0x70350e*/
      {
        if ( !*(_BYTE *)((*((int (__thiscall **)(TechnoClass *))this->RadioClass + 33))(this) + 3231) ) /*0x70351a*/
        {
          v11 = (*((int (__thiscall **)(TechnoClass *))this->RadioClass + 14))(this); /*0x703528*/
          ++*(_DWORD *)&v13[31].__pad_140[4 * v11 + 324]; /*0x70353a*/
        }
      }
      result = RadarClass::IsActiveMode((RadarClass *)&stru_87F5F0.__pad_58[416]); /*0x703541*/
      if ( (_BYTE)result ) /*0x703548*/
        return RadarClass::SetFlag((RadarClass *)&stru_87F5F0.__pad_58[416], 0); /*0x70354a*/
      return result;
    case 5: /*0x7033a4*/
      result = (*((int (__thiscall **)(TechnoClass *))this->RadioClass + 33))(this); /*0x7033af*/
      if ( !*(_BYTE *)(result + 562) ) /*0x7033b5*/
      {
        if ( *((_DWORD *)this + 335) != -1 ) /*0x7033ca*/
          ++*(_DWORD *)this->owner->__pad_5488; /*0x7033d2*/
        if ( v13 && !*(_BYTE *)((*((int (__thiscall **)(TechnoClass *))this->RadioClass + 33))(this) + 3231) ) /*0x7033e6*/
        {
          HouseClass::IncrementStat((HouseClass *)&v13[22].__pad_140[96], *(_DWORD *)(this->gattlingValue + 3576)); /*0x703403*/
          v10 = (*((int (__thiscall **)(TechnoClass *))this->RadioClass + 14))(this); /*0x70340c*/
          ++*(_DWORD *)&v13[32].__pad_38[4 * v10]; /*0x70341e*/
        }
        result = RadarClass::IsActiveMode((RadarClass *)&stru_87F5F0.__pad_58[416]); /*0x703425*/
        if ( (_BYTE)result ) /*0x70342c*/
          return RadarClass::SetFlag((RadarClass *)&stru_87F5F0.__pad_58[416], 0); /*0x70342c*/
      }
      return result; /*0x70342c*/
    case 14: /*0x7033a4*/
      goto LABEL_41;
    default:
      return result;
  }
}



// ==== 0x00703590  MapClass::FindPlacementCellsAlt  this=ObjectClass  sig=csp ====
_DWORD *__thiscall MapClass_FindPlacementCells_Alt(char *this, _DWORD *a2, int a3)
{
  int v4; // ebx
  _DWORD *v5; // eax
  int v6; // edx
  int v7; // edi
  int TileIndex; // eax
  int v10; // [esp+10h] [ebp-14h] BYREF
  int v11; // [esp+14h] [ebp-10h] BYREF
  _BYTE v12[12]; // [esp+18h] [ebp-Ch] BYREF

  v4 = *(_DWORD *)((*(int (__thiscall **)(char *))(this->hasParachute)(this) + 1660); /*0x7035a1*/
  if ( v4 == 4 ) /*0x7035aa*/
    v4 = 1; /*0x7035ac*/
  if ( a3 ) /*0x7035b9*/
    v5 = (_DWORD *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)a3 + 72))(a3, v12); /*0x7035c2*/
  else
    v5 = (_DWORD *)(*(int (__thiscall **)(char *, _BYTE *))(this->q048)(this, v12); /*0x7035fd*/
  LOWORD(a3) = *v5 / 256; /*0x7035d5*/
  HIWORD(a3) = v5[1] / 256; /*0x7035e9*/
  v6 = *(_DWORD *)this; /*0x70362d*/
  v10 = a3; /*0x70362f*/
  v7 = *(_DWORD *)((*(int (__thiscall **)(char *))(v6 + 132))(this) + 1460); /*0x70363b*/
  if ( v7 == -1 ) /*0x703644*/
    TileIndex = -1; /*0x70365f*/
  else
    TileIndex = MapClass::GetTileIndex(&dword_87F7E8, (__int16 *)&v10, v7, this->onBridge); /*0x703658*/
  a3 = 0; /*0x703663*/
  *a2 = *LayerClass::Pathfinding_Find( /*0x7036aa*/
           &dword_87F7E8,
           (unsigned __int8)this->onBridge,
           &v11,
           (__int16 *)&v10,
           v4,
           TileIndex,
           v7,
           (unsigned __int8)this->onBridge,
           1,
           1,
           0,
           0,
           0,
           1,
           (__int16 *)&a3,
           0,
           0);
  return a2; /*0x7036a7*/
}



// ==== 0x007036C0  TechnoClass::TransitionEffectState  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::TransitionEffectState(TechnoClass *this)
{
  int result; // eax
  int (__thiscall **vtable0)(TechnoClass *); // edx
  int v4; // eax
  int v5; // ecx
  int *location; // esi
  int v7; // [esp+4h] [ebp-Ch] BYREF
  int v8; // [esp+8h] [ebp-8h]
  int v9; // [esp+Ch] [ebp-4h]
  char v10; // [esp+14h] [ebp+4h]

  result = this->cloakState; /*0x7036c6*/
  if ( result == 2 || result == 1 ) /*0x7036d4*/
  {
    this->cloakState = 3; /*0x7036da*/
    vtable0 = (int (__thiscall **)(TechnoClass *))this->RadioClass; /*0x7036e9*/
    this->cloakProgress[0] = *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 1576) - 1; /*0x7036f2*/
    v4 = vtable0[33](this); /*0x7036fa*/
    v5 = *(_DWORD *)&stru_A8EB00.?[416]; /*0x703700*/
    result = *(_DWORD *)(v4 + 784); /*0x703706*/
    this->cloakProgress[5] = result; /*0x703712*/
    this->cloakProgress[2] = v5; /*0x703718*/
    this->cloakProgress[3] = v8; /*0x70371e*/
    this->cloakProgress[4] = result; /*0x703721*/
    LOBYTE(result) = v10; /*0x703724*/
    this->cloakProgress[6] = -1; /*0x70372a*/
    if ( !v10 ) /*0x703734*/
    {
      location = this->?; /*0x703736*/
      v7 = *location; /*0x703740*/
      v8 = location[1]; /*0x70374b*/
      v9 = location[2]; /*0x703757*/
      return (int)StartAudioControllerAt(*(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 1696), &v7, 0); /*0x703761*/
    }
  }
  return result; /*0x703766*/
}



// ==== 0x00703770  TechnoClass::StartEffectAudio  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::StartEffectAudio(TechnoClass *this)
{
  int result; // eax
  int (__thiscall **vtable0)(TechnoClass *); // edx
  int v4; // eax
  int v5; // ecx
  int v6; // eax
  int v7; // [esp+4h] [ebp-Ch] BYREF
  int v8; // [esp+8h] [ebp-8h]
  int v9; // [esp+Ch] [ebp-4h]
  char v10; // [esp+14h] [ebp+4h]

  result = this->cloakState; /*0x703776*/
  if ( !result || result == 3 ) /*0x703783*/
  {
    (*((void (__thiscall **)(TechnoClass *, _DWORD))this->RadioClass + 55))(this, 0); /*0x70378f*/
    vtable0 = (int (__thiscall **)(TechnoClass *))this->RadioClass; /*0x703795*/
    this->cloakState = 1; /*0x703799*/
    this->cloakProgress[0] = 0; /*0x7037a3*/
    v4 = vtable0[33](this); /*0x7037ad*/
    v5 = *(_DWORD *)&stru_A8EB00.?[416]; /*0x7037b3*/
    v6 = *(_DWORD *)(v4 + 784); /*0x7037b9*/
    this->cloakProgress[5] = v6; /*0x7037c5*/
    this->cloakProgress[2] = v5; /*0x7037cb*/
    this->cloakProgress[3] = v8; /*0x7037d1*/
    this->cloakProgress[4] = v6; /*0x7037d4*/
    this->cloakProgress[6] = 1; /*0x7037dd*/
    if ( !v10 ) /*0x7037e7*/
    {
      v7 = this->?[0]; /*0x7037f3*/
      v8 = this->?[1]; /*0x7037ff*/
      v9 = this->?[2]; /*0x703806*/
      StartAudioControllerAt(*(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 1696), &v7, 0); /*0x703814*/
    }
    result = (int)dword_A83D4C; /*0x70381f*/
    if ( (Object *)this->owner != dword_A83D4C ) /*0x703826*/
    {
      LOBYTE(result) = this->?; /*0x703828*/
      if ( (_BYTE)result ) /*0x703830*/
        return (*((int (__thiscall **)(TechnoClass *))this->RadioClass + 84))(this); /*0x703836*/
    }
  }
  return result; /*0x70383c*/
}



// ==== 0x00703850  TechnoClass::Vt279Thunk0  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::Vt279Thunk0(TechnoClass *this)
{
  return (*((int (__thiscall **)(TechnoClass *, _DWORD))this->RadioClass + 279))(this, 0); /*0x70385a*/
}



// ==== 0x00703860  TechnoClass::UpdatePowerDrain  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass_UpdatePowerDrain(char *this, int a2, int a3)
{
  _DWORD *v5; // esi
  int v6; // ecx
  int v7; // eax
  int v8; // ecx
  _WORD *v9; // eax
  int v10; // ecx
  _WORD *v11; // eax
  int v12; // eax
  int v13; // [esp-4h] [ebp-18h]
  int v14; // [esp-4h] [ebp-18h]

  if ( *(_BYTE *)((*(int (__thiscall **)(char *))(this->hasParachute)(this) + 3226) && this->isOwnedByCurrentPlayer ) /*0x703879*/
    return 0; /*0x703879*/
  if ( *(_BYTE *)((*(int (__thiscall **)(char *))(this->hasParachute)(this) + 3226) /*0x7038ac*/
    && !this->isOwnedByCurrentPlayer
    && !byte_A8ED6B )
  {
    return 5; /*0x7038ac*/
  }
  if ( !this->parachute || byte_A8ED6B || (*(int (__thiscall **)(char *))(this->fallRate)(this) == 6 ) /*0x7038db*/
    return 0; /*0x7038db*/
  if ( this->parachute != 2 ) /*0x7038e8*/
  {
    a3 = this->cloakProgress; /*0x703a6f*/
    if ( a3 > 0 ) /*0x703a73*/
    {
      v12 = Math::RoundToInt((double)a3 / (double)dword_8871E0->VeteranCombat * 256.0); /*0x703a8f*/
      if ( v12 < 64 ) /*0x703a97*/
        return 1; /*0x703a9a*/
      if ( v12 < 128 ) /*0x703aab*/
        return 2; /*0x703aae*/
      if ( v12 < 192 ) /*0x703abf*/
        return 3; /*0x703ac2*/
      if ( (_BYTE)a2 || !this->isOwnedByCurrentPlayer ) /*0x703ad6*/
        return (v12 >= 255) + 4; /*0x703afb*/
      return 3; /*0x703aa3*/
    }
    return 0; /*0x703b05*/
  }
  if ( (_BYTE)a2 ) /*0x7038f4*/
  {
    if ( a3 ) /*0x7038fc*/
    {
      v5 = this + 156; /*0x7038fe*/
      v6 = v5[1]; /*0x703906*/
      LOWORD(a2) = *v5 / 256; /*0x70391c*/
      v7 = v6; /*0x703923*/
      v8 = *(_DWORD *)(a3 + 48); /*0x703924*/
      HIWORD(a2) = v7 / 256; /*0x703936*/
      v13 = v8; /*0x70393f*/
      v9 = CellCoord::To_CellObj(&dword_87F7E8, (__int16 *)&a2); /*0x70394a*/
      if ( Cell::IsPassableOffset(v9, v13) ) /*0x703951*/
        return 3; /*0x703968*/
    }
    return 5; /*0x7038b8*/
  }
  if ( !g_hWnd ) /*0x703972*/
    return 3; /*0x703975*/
  if ( this->isOwnedByCurrentPlayer ) /*0x703981*/
    return 3; /*0x70398c*/
  v10 = this->owningHouseIndex; /*0x7039a2*/
  LOWORD(a2) = this->q027 / 256; /*0x7039b8*/
  HIWORD(a2) = v10 / 256; /*0x7039d1*/
  v14 = *((_DWORD *)dword_A83D4C + 12); /*0x7039e5*/
  v11 = CellCoord::To_CellObj(&dword_87F7E8, (__int16 *)&a2); /*0x7039ec*/
  if ( Cell::IsPassableOffset(v11, v14) ) /*0x7039f3*/
    return 3; /*0x7039fd*/
  if ( !dword_A8B238[0] /*0x703a4d*/
    || !this->owner
    || !dword_A83D4C
    || !(unsigned __int8)HouseClass::IsAlliedWith(dword_A83D4C, *((#375 **)this + 135))
    || !(unsigned __int8)HouseClass::IsAlliedWith(*((#375 **)this + 135), dword_A83D4C) )
  {
    return 5; /*0x703a54*/
  }
  return 3; /*0x7038ae*/
}



// ==== 0x00703B10  TechnoClass::CheckTargetCell  this=TechnoClass  sig=csp ====
char __thiscall TechnoClass::CheckTargetCell(TechnoClass *this)
{
  _DWORD *v2; // esi
  _DWORD *v3; // edi
  _DWORD *v4; // ebp
  _DWORD *v5; // ebx
  _DWORD *v6; // eax
  int v7; // edi
  int v8; // eax
  int v9; // ebx
  int v10; // ebp
  __int16 v12[2]; // [esp+10h] [ebp-14h] BYREF
  __int16 v13[2]; // [esp+14h] [ebp-10h] BYREF
  __int16 v14[2]; // [esp+18h] [ebp-Ch] BYREF
  __int16 v15[2]; // [esp+1Ch] [ebp-8h] BYREF
  __int16 v16[2]; // [esp+20h] [ebp-4h] BYREF

  *(_DWORD *)v12 = *(_DWORD *)(*((int (__thiscall **)(TechnoClass *, __int16 *))this->RadioClass + 110))(this, v16); /*0x703b34*/
  v2 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v12); /*0x703b3d*/
  if ( !v2 || this->? ) /*0x703b47*/
    return 0; /*0x703b47*/
  v13[0] = v12[0] + LOWORD(g_DDrawSurfaceManager.scenario[86]); /*0x703b6c*/
  v13[1] = v12[1] + HIWORD(g_DDrawSurfaceManager.scenario[86]); /*0x703b71*/
  *(_DWORD *)v14 = *(_DWORD *)v13; /*0x703b7e*/
  v3 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v14); /*0x703b9f*/
  v13[1] = v12[1] + HIWORD(g_DDrawSurfaceManager.scenario[82]); /*0x703ba7*/
  v13[0] = v12[0] + LOWORD(g_DDrawSurfaceManager.scenario[82]); /*0x703bac*/
  *(_DWORD *)v15 = *(_DWORD *)v13; /*0x703bb9*/
  v4 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v15); /*0x703bd8*/
  v13[1] = v12[1] + HIWORD(g_DDrawSurfaceManager.scenario[84]); /*0x703be1*/
  v13[0] = v12[0] + LOWORD(g_DDrawSurfaceManager.scenario[84]); /*0x703be6*/
  *(_DWORD *)v16 = *(_DWORD *)v13; /*0x703bf9*/
  v5 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v16); /*0x703c0c*/
  v13[0] = v12[0] + LOWORD(g_DDrawSurfaceManager.scenario[88]); /*0x703c1b*/
  v13[1] = v12[1] + HIWORD(g_DDrawSurfaceManager.scenario[88]); /*0x703c24*/
  v6 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v13); /*0x703c37*/
  if ( (v2[80] & 0x100) != 0 ) /*0x703c45*/
    return 1; /*0x703c45*/
  if ( v3 ) /*0x703c49*/
  {
    v7 = v3[80]; /*0x703c4b*/
    if ( (v7 & 0x100) != 0 && (v7 & 0x800) != 0 ) /*0x703c5f*/
      return 1; /*0x703c5f*/
  }
  if ( v6 ) /*0x703c63*/
  {
    v8 = v6[80]; /*0x703c65*/
    if ( (v8 & 0x100) != 0 && (v8 & 0x800) == 0 ) /*0x703c73*/
      return 1; /*0x703c73*/
  }
  if ( v5 ) /*0x703c77*/
  {
    v9 = v5[80]; /*0x703c79*/
    if ( (v9 & 0x100) != 0 && (v9 & 0x800) == 0 ) /*0x703c87*/
      return 1; /*0x703c87*/
  }
  if ( v4 && (v10 = v4[80], (v10 & 0x100) != 0) && (v10 & 0x800) != 0 ) /*0x703ca1*/
    return 1; /*0x703ca6*/
  else
    return 0; /*0x703cb0*/
}



// ==== 0x00703CC0  TechnoClass::ScanAdjacentCells  this=TechnoClass  sig=csp ====
char __thiscall TechnoClass::ScanAdjacentCells(TechnoClass *this)
{
  _DWORD *v2; // esi
  _DWORD *v3; // edi
  _DWORD *v4; // ebp
  _DWORD *v5; // ebx
  _DWORD *v6; // eax
  int v7; // edi
  int v8; // eax
  int v9; // ebx
  int v10; // ebp
  __int16 v12[2]; // [esp+10h] [ebp-14h] BYREF
  __int16 v13[2]; // [esp+14h] [ebp-10h] BYREF
  __int16 v14[2]; // [esp+18h] [ebp-Ch] BYREF
  __int16 v15[2]; // [esp+1Ch] [ebp-8h] BYREF
  __int16 v16[2]; // [esp+20h] [ebp-4h] BYREF

  *(_DWORD *)v12 = *(_DWORD *)(*((int (__thiscall **)(TechnoClass *, __int16 *))this->RadioClass + 110))(this, v16); /*0x703ce4*/
  v2 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v12); /*0x703ced*/
  if ( !v2 || this->? ) /*0x703cf7*/
    return 0; /*0x703cf7*/
  v13[0] = v12[0] + LOWORD(g_DDrawSurfaceManager.scenario[86]); /*0x703d1c*/
  v13[1] = v12[1] + HIWORD(g_DDrawSurfaceManager.scenario[86]); /*0x703d21*/
  *(_DWORD *)v14 = *(_DWORD *)v13; /*0x703d2e*/
  v3 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v14); /*0x703d4f*/
  v13[1] = v12[1] + HIWORD(g_DDrawSurfaceManager.scenario[82]); /*0x703d57*/
  v13[0] = v12[0] + LOWORD(g_DDrawSurfaceManager.scenario[82]); /*0x703d5c*/
  *(_DWORD *)v15 = *(_DWORD *)v13; /*0x703d69*/
  v4 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v15); /*0x703d88*/
  v13[1] = v12[1] + HIWORD(g_DDrawSurfaceManager.scenario[84]); /*0x703d91*/
  v13[0] = v12[0] + LOWORD(g_DDrawSurfaceManager.scenario[84]); /*0x703d96*/
  *(_DWORD *)v16 = *(_DWORD *)v13; /*0x703da9*/
  v5 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v16); /*0x703dbc*/
  v13[0] = v12[0] + LOWORD(g_DDrawSurfaceManager.scenario[88]); /*0x703dcb*/
  v13[1] = v12[1] + HIWORD(g_DDrawSurfaceManager.scenario[88]); /*0x703dd4*/
  v6 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v13); /*0x703de7*/
  if ( (v2[80] & 0x400) != 0 ) /*0x703df5*/
    return 1; /*0x703df5*/
  if ( v3 ) /*0x703df9*/
  {
    v7 = v3[80]; /*0x703dfb*/
    if ( (v7 & 0x400) != 0 && (v7 & 0x800) != 0 ) /*0x703e0f*/
      return 1; /*0x703e0f*/
  }
  if ( v6 ) /*0x703e13*/
  {
    v8 = v6[80]; /*0x703e15*/
    if ( (v8 & 0x400) != 0 && (v8 & 0x800) == 0 ) /*0x703e23*/
      return 1; /*0x703e23*/
  }
  if ( v5 ) /*0x703e27*/
  {
    v9 = v5[80]; /*0x703e29*/
    if ( (v9 & 0x400) != 0 && (v9 & 0x800) == 0 ) /*0x703e37*/
      return 1; /*0x703e37*/
  }
  if ( v4 && (v10 = v4[80], (v10 & 0x400) != 0) && (v10 & 0x800) != 0 ) /*0x703e51*/
    return 1; /*0x703e56*/
  else
    return 0; /*0x703e60*/
}



// ==== 0x00703E70  TechnoClass::ScanNeighborCells  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::ScanNeighborCells(TechnoClass *this)
{
  int v2; // ebx
  _DWORD *v3; // esi
  _DWORD *v4; // edi
  _DWORD *v5; // eax
  int v6; // ecx
  int v7; // ecx
  int v8; // ecx
  int v9; // ecx
  int v10; // eax
  int v11; // eax
  __int16 v13[2]; // [esp+Ch] [ebp-10h] BYREF
  __int16 v14[2]; // [esp+10h] [ebp-Ch] BYREF
  __int16 v15[2]; // [esp+14h] [ebp-8h] BYREF
  __int16 v16[2]; // [esp+18h] [ebp-4h] BYREF

  *(_DWORD *)v13 = *(_DWORD *)(*((int (__thiscall **)(TechnoClass *, __int16 *))this->RadioClass + 110))(this, v16); /*0x703e93*/
  v2 = 0; /*0x703e97*/
  if ( CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v13) /*0x703eb3*/
    && (TechnoClass::CheckTargetCell(this) || TechnoClass::ScanAdjacentCells(this)) )
  {
    v14[0] = v13[0] + LOWORD(g_DDrawSurfaceManager.scenario[86]); /*0x703ed7*/
    v14[1] = v13[1] + HIWORD(g_DDrawSurfaceManager.scenario[86]); /*0x703edc*/
    *(_DWORD *)v15 = *(_DWORD *)v14; /*0x703ee9*/
    v3 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v15); /*0x703f0a*/
    v14[1] = v13[1] + HIWORD(g_DDrawSurfaceManager.scenario[84]); /*0x703f12*/
    v14[0] = v13[0] + LOWORD(g_DDrawSurfaceManager.scenario[84]); /*0x703f17*/
    *(_DWORD *)v16 = *(_DWORD *)v14; /*0x703f24*/
    v4 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v16); /*0x703f43*/
    v14[1] = v13[1] + HIWORD(g_DDrawSurfaceManager.scenario[85]); /*0x703f4c*/
    v14[0] = v13[0] + LOWORD(g_DDrawSurfaceManager.scenario[85]); /*0x703f51*/
    v5 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v14); /*0x703f68*/
    if ( v3 ) /*0x703f6f*/
    {
      if ( v4 && v5 ) /*0x703f77*/
      {
        v6 = v3[14]; /*0x703f79*/
        if ( v6 != 0xFFFF && v6 != 255 ) /*0x703f90*/
        {
          v7 = v6 - g_Cell_BuildabilityLUT + 1; /*0x703f94*/
          if ( v7 >= 7 && v7 <= 16 ) /*0x703f9d*/
            v2 = 1; /*0x703f9f*/
        }
        v8 = v4[14]; /*0x703fa4*/
        if ( v8 != 0xFFFF && v8 != 255 ) /*0x703fb5*/
        {
          v9 = v8 - g_Cell_BuildabilityLUT + 1; /*0x703fb9*/
          if ( v9 >= 7 && v9 <= 16 ) /*0x703fc2*/
            v2 = 1; /*0x703fc4*/
        }
        v10 = v5[14]; /*0x703fc9*/
        if ( v10 != 0xFFFF && v10 != 255 ) /*0x703fd8*/
        {
          v11 = v10 - g_Cell_BuildabilityLUT + 1; /*0x703fdc*/
          if ( v11 >= 7 && v11 <= 16 ) /*0x703fe5*/
            ++v2; /*0x703fe7*/
        }
      }
    }
  }
  return v2; /*0x703fe8*/
}



// ==== 0x00704000  TechnoClass::IsValidBuildingPlacement  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::IsValidBuildingPlacement(TechnoClass *this)
{
  int (__thiscall **vtable0)(TechnoClass *, _DWORD *); // eax
  int *v3; // eax
  char onBridge; // cl
  int v5; // eax
  InfantryClass *v6; // edi
  InfantryClass *v7; // eax
  int occupant; // esi
  InfantryClass *v9; // ebx
  InfantryClass *v10; // eax
  InfantryClass *v11; // ebp
  __int16 v12; // di
  _DWORD *v13; // ebx
  _DWORD *v14; // eax
  _DWORD *v15; // esi
  int v16; // ebx
  InfantryClass *v17; // edi
  int v18; // eax
  InfantryClass *v19; // eax
  __int16 v21[2]; // [esp+10h] [ebp-14h] BYREF
  int v22; // [esp+14h] [ebp-10h]
  int v23; // [esp+18h] [ebp-Ch]
  __int16 v24[2]; // [esp+1Ch] [ebp-8h] BYREF
  int v25; // [esp+20h] [ebp-4h] BYREF

  vtable0 = (int (__thiscall **)(TechnoClass *, _DWORD *))this->RadioClass; /*0x70400d*/
  v23 = 0; /*0x704012*/
  v3 = (int *)vtable0[110](this, &v25); /*0x70401a*/
  onBridge = this->?; /*0x704020*/
  v5 = *v3; /*0x704026*/
  *(_DWORD *)v21 = v5; /*0x70402a*/
  if ( onBridge ) /*0x70402e*/
    return v23; /*0x70402e*/
  LOWORD(v22) = LOWORD(g_DDrawSurfaceManager.scenario[82]) + v5; /*0x704040*/
  HIWORD(v22) = v21[1] + HIWORD(g_DDrawSurfaceManager.scenario[82]); /*0x704051*/
  *(_DWORD *)v24 = v22; /*0x70405a*/
  v6 = (InfantryClass *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v24); /*0x70407a*/
  LOWORD(v22) = LOWORD(g_DDrawSurfaceManager.scenario[88]) + v21[0]; /*0x704086*/
  HIWORD(v22) = v21[1] + HIWORD(g_DDrawSurfaceManager.scenario[88]); /*0x70408b*/
  v25 = v22; /*0x70409a*/
  v7 = (InfantryClass *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)&v25); /*0x70409e*/
  LOWORD(occupant) = *(_WORD *)&g_BuildingLoadQueue_Array.?[24]; /*0x7040a3*/
  v9 = v7; /*0x7040b3*/
  v22 = *(_DWORD *)&g_BuildingLoadQueue_Array.?[24]; /*0x7040b5*/
  v10 = (InfantryClass *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v21); /*0x7040b9*/
  v11 = v10; /*0x7040c0*/
  if ( !v6 || !v9 ) /*0x7040ca*/
    return v23; /*0x7040ca*/
  if ( (unsigned __int8)InfantryClass::IsInBounds(v10) ) /*0x7040d2*/
  {
    occupant = v11->?; /*0x7040db*/
LABEL_10:
    v22 = occupant; /*0x7040fe*/
    goto LABEL_11; /*0x7040fe*/
  }
  if ( (unsigned __int8)InfantryClass::IsInBounds(v6) ) /*0x7040e2*/
  {
    occupant = v6->?; /*0x7040eb*/
    goto LABEL_10; /*0x7040ee*/
  }
  if ( (unsigned __int8)InfantryClass::IsInBounds(v9) ) /*0x7040f2*/
  {
    occupant = v9->?; /*0x7040fb*/
    goto LABEL_10; /*0x7040fb*/
  }
LABEL_11:
  v12 = HIWORD(v22); /*0x704102*/
  if ( __PAIR32__(HIWORD(v22), occupant) != *(_DWORD *)&g_BuildingLoadQueue_Array.?[24] ) /*0x70410e*/
  {
    LOWORD(v22) = occupant + LOWORD(g_DDrawSurfaceManager.scenario[82]); /*0x70412e*/
    HIWORD(v22) += HIWORD(g_DDrawSurfaceManager.scenario[82]); /*0x704137*/
    v25 = v22; /*0x704146*/
    v13 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)&v25); /*0x70415e*/
    LOWORD(v22) = occupant + LOWORD(g_DDrawSurfaceManager.scenario[88]); /*0x704160*/
    HIWORD(v22) = HIWORD(g_DDrawSurfaceManager.scenario[88]) + v12; /*0x704165*/
    *(_DWORD *)v24 = v22; /*0x704178*/
    v14 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v24); /*0x70417c*/
    v15 = v14; /*0x704183*/
    if ( v13 ) /*0x704185*/
    {
      if ( v14 ) /*0x70418d*/
      {
        v16 = v13[9]; /*0x704193*/
        LOWORD(v22) = LOWORD(g_DDrawSurfaceManager.scenario[82]) + v16; /*0x7041b2*/
        HIWORD(v22) = HIWORD(g_DDrawSurfaceManager.scenario[82]) + HIWORD(v16); /*0x7041b7*/
        v25 = v22; /*0x7041c6*/
        v17 = (InfantryClass *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)&v25); /*0x7041d5*/
        v18 = v15[9]; /*0x7041d7*/
        LOWORD(v22) = LOWORD(g_DDrawSurfaceManager.scenario[88]) + v18; /*0x7041e0*/
        HIWORD(v22) = HIWORD(g_DDrawSurfaceManager.scenario[88]) + HIWORD(v18); /*0x7041f6*/
        v25 = v22; /*0x7041ff*/
        v19 = (InfantryClass *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)&v25); /*0x704208*/
        if ( v17 ) /*0x70420f*/
        {
          if ( v19 /*0x704222*/
            && ((unsigned __int8)InfantryClass::IsInBounds(v19) || (unsigned __int8)InfantryClass::IsInBounds(v17)) )
          {
            return 1; /*0x70422b*/
          }
        }
      }
    }
  }
  return v23; /*0x704237*/
}



// ==== 0x00704240  TechnoClass::CheckAdjacencyFlags  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::CheckAdjacencyFlags(TechnoClass *this)
{
  int v2; // ebx
  char *v3; // edi
  _WORD *v4; // eax
  _DWORD *v5; // eax
  int v6; // eax
  char *v7; // eax
  bool v8; // cc
  int result; // eax
  int v10; // [esp+Ch] [ebp-10h]
  int v11; // [esp+Ch] [ebp-10h]
  __int16 v12[2]; // [esp+10h] [ebp-Ch] BYREF
  int v13; // [esp+14h] [ebp-8h] BYREF
  _BYTE v14[4]; // [esp+18h] [ebp-4h] BYREF

  v2 = 0; /*0x70424c*/
  *(_DWORD *)v12 = *(_DWORD *)(*((int (__thiscall **)(TechnoClass *, int *))this->RadioClass + 110))(this, &v13); /*0x704265*/
  v3 = (char *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v12); /*0x70426e*/
  if ( this->? ) /*0x704270*/
    return v2; /*0x704270*/
  v4 = (_WORD *)(*((int (__thiscall **)(TechnoClass *, _BYTE *))this->RadioClass + 110))(this, v14); /*0x704287*/
  LOWORD(v10) = LOWORD(g_DDrawSurfaceManager.scenario[85]) + *v4; /*0x7042a2*/
  HIWORD(v10) = HIWORD(g_DDrawSurfaceManager.scenario[85]) + v4[1]; /*0x7042ab*/
  v13 = v10; /*0x7042ba*/
  v5 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)&v13); /*0x7042be*/
  if ( !v5 ) /*0x7042c5*/
    return v2; /*0x7042c5*/
  if ( *((char *)v5 + 283) - v3[283] >= 4 ) /*0x7042da*/
    v2 = 2; /*0x7042dc*/
  v6 = v5[9]; /*0x7042e1*/
  LOWORD(v11) = v6 + LOWORD(g_DDrawSurfaceManager.scenario[85]); /*0x7042f6*/
  HIWORD(v11) = HIWORD(v6) + HIWORD(g_DDrawSurfaceManager.scenario[85]); /*0x704305*/
  v13 = v11; /*0x70430e*/
  v7 = (char *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)&v13); /*0x704317*/
  if ( !v7 ) /*0x70431e*/
    return v2; /*0x70431e*/
  v8 = v7[283] - v3[283] < 4; /*0x704330*/
  result = 1; /*0x704333*/
  if ( v8 ) /*0x704338*/
    return v2; /*0x70433a*/
  return result; /*0x70433c*/
}



// ==== 0x00704350  TechnoClass::GetDrawHeight  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::GetDrawHeight(TechnoClass *this)
{
  int v2; // eax
  int v3; // eax
  int (__thiscall **vtable0)(TechnoClass *, __int16 *); // edx
  int v5; // ebp
  _BYTE *v6; // ebx
  int (__thiscall **v7)(TechnoClass *); // eax
  int v8; // edi
  Cell *v10; // eax
  _DWORD *v11; // eax
  _DWORD *v12; // edi
  _DWORD *v13; // ebx
  _DWORD *v14; // eax
  int v15; // edi
  int v16; // ebx
  int v17; // eax
  int *primaryFacing; // esi
  int v19; // eax
  __int16 v20; // dx
  _BYTE *v21; // edi
  int v22; // eax
  __int16 v23; // dx
  unsigned int v24; // eax
  __int16 v25; // dx
  int v26; // eax
  __int16 v27; // dx
  _BYTE *v28; // ebx
  int v29; // eax
  __int16 v30; // dx
  _BYTE *v31; // ebp
  int v32; // eax
  __int16 v33; // dx
  _BYTE *v34; // eax
  int v35; // eax
  _DWORD *v36; // ecx
  int v37; // edi
  _DWORD *i; // esi
  int v39; // eax
  TechnoClass *v40; // eax
  int v41; // ecx
  __int16 v42[2]; // [esp+10h] [ebp-5Ch] BYREF
  int v43; // [esp+14h] [ebp-58h]
  __int16 v44[2]; // [esp+18h] [ebp-54h] BYREF
  __int16 v45[2]; // [esp+1Ch] [ebp-50h] BYREF
  __int16 v46[2]; // [esp+20h] [ebp-4Ch] BYREF
  _BYTE *v47; // [esp+24h] [ebp-48h]
  __int16 v48[2]; // [esp+28h] [ebp-44h] BYREF
  __int16 v49[2]; // [esp+2Ch] [ebp-40h] BYREF
  __int16 v50[2]; // [esp+30h] [ebp-3Ch] BYREF
  __int16 v51[2]; // [esp+34h] [ebp-38h] BYREF
  __int16 v52[2]; // [esp+38h] [ebp-34h] BYREF
  __int16 v53[2]; // [esp+3Ch] [ebp-30h] BYREF
  int v54; // [esp+40h] [ebp-2Ch] BYREF
  int v55; // [esp+44h] [ebp-28h] BYREF
  int v56; // [esp+48h] [ebp-24h] BYREF
  int v57; // [esp+4Ch] [ebp-20h] BYREF
  int v58; // [esp+50h] [ebp-1Ch] BYREF
  int v59; // [esp+54h] [ebp-18h] BYREF
  int v60; // [esp+58h] [ebp-14h] BYREF
  int v61; // [esp+5Ch] [ebp-10h] BYREF
  _BYTE *v62; // [esp+60h] [ebp-Ch] BYREF
  _BYTE *v63; // [esp+64h] [ebp-8h]
  int v64; // [esp+68h] [ebp-4h]

  v2 = (*((int (__thiscall **)(TechnoClass *))this->RadioClass + 116))(this); /*0x70435b*/
  v3 = ZCoordToScreenY(v2); /*0x704363*/
  vtable0 = (int (__thiscall **)(TechnoClass *, __int16 *))this->RadioClass; /*0x704368*/
  v5 = -v3; /*0x704372*/
  v43 = -v3; /*0x704375*/
  *(_DWORD *)v42 = *(_DWORD *)vtable0[110](this, v53); /*0x704385*/
  v6 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v42); /*0x704394*/
  v7 = (int (__thiscall **)(TechnoClass *))this->RadioClass; /*0x704396*/
  v47 = v6; /*0x70439a*/
  if ( v7[11](this) == 1 ) /*0x7043a4*/
  {
    if ( this->isTether ) /*0x7043a6*/
    {
      v8 = Array::Get((Array *)this, 0); /*0x7043b9*/
      if ( (*(int (__thiscall **)(int))(*(_DWORD *)v8 + 44))(v8) == 6 /*0x7043d4*/
        && (*(int (__thiscall **)(int))(*(_DWORD *)v8 + 388))(v8) == 16 )
      {
        return v5 - 3; /*0x7043e0*/
      }
    }
    if ( *(_BYTE *)(*((_DWORD *)this + 433) + 3598) ) /*0x7043e7*/
    {
      v10 = (Cell *)(*((int (__thiscall **)(TechnoClass *))this->RadioClass + 111))(this); /*0x7043f5*/
      v11 = Cell::IsBridge(v10); /*0x7043fd*/
      if ( v11 ) /*0x704404*/
      {
        if ( *(_BYTE *)(v11[328] + 5819) ) /*0x70440c*/
          return v5 - 14; /*0x704420*/
      }
    }
  }
  if ( v6[284] ) /*0x704421*/
  {
    v44[0] = LOWORD(g_DDrawSurfaceManager.scenario[86]) + v42[0]; /*0x70444b*/
    v44[1] = HIWORD(g_DDrawSurfaceManager.scenario[86]) + v42[1]; /*0x704450*/
    *(_DWORD *)v46 = *(_DWORD *)v44; /*0x70445a*/
    v12 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v46); /*0x70447a*/
    v44[0] = LOWORD(g_DDrawSurfaceManager.scenario[84]) + v42[0]; /*0x704486*/
    v44[1] = HIWORD(g_DDrawSurfaceManager.scenario[84]) + v42[1]; /*0x70448b*/
    *(_DWORD *)v45 = *(_DWORD *)v44; /*0x70449a*/
    v13 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v45); /*0x7044b3*/
    v44[1] = HIWORD(g_DDrawSurfaceManager.scenario[85]) + v42[1]; /*0x7044bc*/
    v44[0] = LOWORD(g_DDrawSurfaceManager.scenario[85]) + v42[0]; /*0x7044c1*/
    v14 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v44); /*0x7044d8*/
    if ( v12 ) /*0x7044df*/
    {
      if ( v13 && v14 ) /*0x7044ef*/
      {
        v15 = v12[17]; /*0x7044f5*/
        if ( v15 == -1 ) /*0x7044fb*/
        {
          v16 = v13[17]; /*0x704522*/
          if ( v16 == -1 ) /*0x704528*/
          {
            v17 = v14[17]; /*0x70454e*/
            if ( v17 != -1 && *(_BYTE *)(*(_DWORD *)(*(_DWORD *)stru_A83D50.__pad_34 + 4 * v17) + 693) ) /*0x70455f*/
              return g_INI_Key_TRUCKA.?[3] + v5 - 1; /*0x70457a*/
          }
          else if ( *(_BYTE *)(*(_DWORD *)(*(_DWORD *)stru_A83D50.__pad_34 + 4 * v16) + 693) ) /*0x704532*/
          {
            return g_INI_Key_TRUCKA.?[3] + v5 - 1; /*0x70454d*/
          }
        }
        else if ( *(_BYTE *)(*(_DWORD *)(*(_DWORD *)stru_A83D50.__pad_34 + 4 * v15) + 693) ) /*0x704506*/
        {
          return g_INI_Key_TRUCKA.?[3] + v5 - 1; /*0x704521*/
        }
      }
    }
  }
  primaryFacing = this->primaryFacing; /*0x70457b*/
  v19 = ((unsigned __int8)((unsigned int)((*ProgressTimer::GetValue((ProgressTimer *)primaryFacing, &v55) >> 12) + 1) >> 1) /*0x704596*/
       + 1)
      & 7;
  v20 = v42[1] + HIWORD(g_DDrawSurfaceManager.scenario[v19 + 82]); /*0x7045ae*/
  v44[0] = v42[0] + LOWORD(g_DDrawSurfaceManager.scenario[v19 + 82]); /*0x7045ba*/
  v44[1] = v20; /*0x7045c3*/
  *(_DWORD *)v48 = *(_DWORD *)v44; /*0x7045d2*/
  v21 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v48); /*0x7045e2*/
  v22 = ((unsigned __int8)((unsigned int)((*ProgressTimer::GetValue((ProgressTimer *)primaryFacing, &v56) >> 12) + 1) >> 1) /*0x7045f2*/
       - 1)
      & 7;
  v23 = v42[1] + HIWORD(g_DDrawSurfaceManager.scenario[v22 + 82]); /*0x70460a*/
  v44[0] = v42[0] + LOWORD(g_DDrawSurfaceManager.scenario[v22 + 82]); /*0x704616*/
  v44[1] = v23; /*0x70461f*/
  *(_DWORD *)v49 = *(_DWORD *)v44; /*0x70462e*/
  *(_DWORD *)v45 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v49); /*0x70463e*/
  v24 = ((unsigned int)((*ProgressTimer::GetValue((ProgressTimer *)primaryFacing, &v57) >> 12) + 1) >> 1) & 7; /*0x704654*/
  v25 = v42[1] + HIWORD(g_DDrawSurfaceManager.scenario[v24 + 82]); /*0x704667*/
  v44[0] = LOWORD(g_DDrawSurfaceManager.scenario[v24 + 82]) + v42[0]; /*0x704673*/
  v44[1] = v25; /*0x70467c*/
  *(_DWORD *)v50 = *(_DWORD *)v44; /*0x70468b*/
  *(_DWORD *)v46 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v50); /*0x70469b*/
  v26 = ((unsigned __int8)((unsigned int)((*ProgressTimer::GetValue((ProgressTimer *)primaryFacing, &v58) >> 12) + 1) >> 1) /*0x7046b4*/
       - 4)
      & 7;
  v27 = v42[1] + HIWORD(g_DDrawSurfaceManager.scenario[v26 + 82]); /*0x7046c7*/
  v44[0] = LOWORD(g_DDrawSurfaceManager.scenario[v26 + 82]) + v42[0]; /*0x7046d3*/
  v44[1] = v27; /*0x7046dc*/
  *(_DWORD *)v51 = *(_DWORD *)v44; /*0x7046eb*/
  v28 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v51); /*0x7046fb*/
  v29 = ((unsigned __int8)((unsigned int)((*ProgressTimer::GetValue((ProgressTimer *)primaryFacing, &v59) >> 12) + 1) >> 1) /*0x70470d*/
       + 3)
      & 7;
  v30 = v42[1] + HIWORD(g_DDrawSurfaceManager.scenario[v29 + 82]); /*0x704725*/
  v44[0] = v42[0] + LOWORD(g_DDrawSurfaceManager.scenario[v29 + 82]); /*0x704731*/
  v44[1] = v30; /*0x70473a*/
  *(_DWORD *)v52 = *(_DWORD *)v44; /*0x704749*/
  v31 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v52); /*0x704759*/
  v32 = ((unsigned __int8)((unsigned int)((*ProgressTimer::GetValue((ProgressTimer *)primaryFacing, &v60) >> 12) + 1) >> 1) /*0x70476b*/
       - 3)
      & 7;
  v33 = v42[1] + HIWORD(g_DDrawSurfaceManager.scenario[v32 + 82]); /*0x704783*/
  v44[0] = v42[0] + LOWORD(g_DDrawSurfaceManager.scenario[v32 + 82]); /*0x70478f*/
  v44[1] = v33; /*0x704798*/
  *(_DWORD *)v53 = *(_DWORD *)v44; /*0x7047a7*/
  v34 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v53); /*0x7047ab*/
  *(_DWORD *)v44 = v34; /*0x7047b2*/
  if ( !v21 || !*(_DWORD *)v45 || !*(_DWORD *)v46 ) /*0x7047ce*/
    return v43 - 1; /*0x7047ce*/
  if ( v21[284] || *(_BYTE *)(*(_DWORD *)v45 + 284) || *(_BYTE *)(*(_DWORD *)v46 + 284) ) /*0x7047ee*/
    return g_INI_Key_TRUCKA.?[2] + v43; /*0x7047ee*/
  if ( !v28 || !v31 || !v34 ) /*0x70480e*/
    return v43 - 1; /*0x70480e*/
  if ( v28[284] || v31[284] || v34[284] ) /*0x704830*/
    return g_INI_Key_TRUCKA.?[2] + v43; /*0x7049b6*/
  if ( v47[284] ) /*0x704842*/
    return v43 + g_INI_Key_TRUCKA.?[1]; /*0x70485e*/
  if ( (((unsigned __int8)(*ProgressTimer::GetValue((ProgressTimer *)primaryFacing, &v60) >> 12) + 1) & 0xE) == 0xC /*0x70488d*/
    || (((unsigned __int8)(*ProgressTimer::GetValue((ProgressTimer *)primaryFacing, &v60) >> 12) + 1) & 0xE) == 0 )
  {
    v62 = v28; /*0x7048e0*/
    v63 = v31; /*0x7048e4*/
    v64 = *(_DWORD *)v44; /*0x7048e8*/
  }
  else
  {
    if ( (((unsigned __int8)(*ProgressTimer::GetValue((ProgressTimer *)primaryFacing, &v60) >> 12) + 1) & 0xE) != 8 /*0x7048c0*/
      && (((unsigned __int8)(*ProgressTimer::GetValue((ProgressTimer *)primaryFacing, &v60) >> 12) + 1) & 0xE) != 4 )
    {
      return v43 - 1; /*0x7048c0*/
    }
    v62 = v21; /*0x7048ce*/
    v63 = *(_BYTE **)v45; /*0x7048d2*/
    v64 = *(_DWORD *)v46; /*0x7048d6*/
  }
  if ( (*((_DWORD *)v47 + 80) & 0x10000) != 0 ) /*0x7048fb*/
    return v43 - 1; /*0x704999*/
  v35 = 0; /*0x704901*/
  v36 = &v62; /*0x704903*/
  do /*0x704918*/
  {
    if ( (*(_DWORD *)(*v36 + 320) & 0x10000) != 0 ) /*0x70490f*/
      return v43 - 1; /*0x704959*/
    ++v35; /*0x704911*/
    ++v36; /*0x704912*/
  }
  while ( v35 < 3 ); /*0x704918*/
  v37 = 0; /*0x70491a*/
  for ( i = &v62; ; ++i ) /*0x70491c*/
  {
    v39 = *(_DWORD *)(*i + 56); /*0x704927*/
    if ( v39 == 0xFFFF || v39 == 255 ) /*0x704936*/
    {
      v41 = 0; /*0x704965*/
      v40 = *(TechnoClass **)(*(_DWORD *)&stru_A8EB00.?[328] + 4 * dword_AA10B0); /*0x704967*/
    }
    else
    {
      v40 = *(TechnoClass **)(*(_DWORD *)&stru_A8EB00.?[328] + 4 * v39); /*0x70493e*/
      v41 = *(unsigned __int8 *)(*i + 282); /*0x704943*/
    }
    TechnoClass::GetTileAnimationData(v40, v41, &v61, &v54); /*0x704977*/
    if ( v54 > 36 ) /*0x704980*/
      break; /*0x704980*/
    if ( ++v37 >= 3 ) /*0x704989*/
      return v43 - 1; /*0x704989*/
  }
  return v43 - 2; /*0x7043d6*/
}



// ==== 0x007049C0  DrawTacticalMapLine  this=FootClass  sig=csp ====
char __stdcall TacticalMap_DrawLine(int a1, int a2, int a3, int a4, int a5, int a6, int a7, char a8, char a9)
{
  int v9; // edx
  char v10; // bl
  int v11; // esi
  _DWORD *v12; // eax
  int *v13; // eax
  int *v14; // eax
  int v15; // esi
  _DWORD *v16; // eax
  int *v17; // eax
  int *v18; // eax
  int v19; // eax
  int v20; // esi
  _DWORD *v21; // eax
  int *v22; // eax
  int *v23; // eax
  _DWORD *v24; // eax
  int *v25; // eax
  int *v26; // eax
  int v27; // edi
  char result; // al
  int v29; // [esp+2Ch] [ebp-80h] BYREF
  int v30; // [esp+30h] [ebp-7Ch]
  int v31; // [esp+34h] [ebp-78h] BYREF
  int v32; // [esp+38h] [ebp-74h]
  int v33[2]; // [esp+3Ch] [ebp-70h] BYREF
  int v34[2]; // [esp+44h] [ebp-68h] BYREF
  int v35; // [esp+4Ch] [ebp-60h] BYREF
  int v36; // [esp+50h] [ebp-5Ch]
  _DWORD v37[2]; // [esp+54h] [ebp-58h] BYREF
  int v38[4]; // [esp+5Ch] [ebp-50h] BYREF
  int v39; // [esp+6Ch] [ebp-40h] BYREF
  int v40; // [esp+70h] [ebp-3Ch]
  int v41; // [esp+74h] [ebp-38h]
  int v42; // [esp+78h] [ebp-34h]
  int v43; // [esp+7Ch] [ebp-30h] BYREF
  int v44; // [esp+80h] [ebp-2Ch]
  int v45; // [esp+84h] [ebp-28h]
  int v46; // [esp+88h] [ebp-24h]
  _DWORD v47[4]; // [esp+8Ch] [ebp-20h] BYREF
  _DWORD v48[4]; // [esp+9Ch] [ebp-10h] BYREF

  Coord::To_Screen(g_TacticalClass_Instance, &a1, &v31); /*0x7049dc*/
  Coord::To_Screen(g_TacticalClass_Instance, &a4, &v29); /*0x7049f4*/
  v9 = dword_886FA4; /*0x7049fd*/
  v10 = a9; /*0x704a07*/
  v32 += dword_886FA4; /*0x704a14*/
  v30 += dword_886FA4; /*0x704a1f*/
  v34[1] = v32 + 1; /*0x704a23*/
  v34[0] = v31; /*0x704a30*/
  v33[0] = v29; /*0x704a36*/
  v33[1] = v30 + 1; /*0x704a3a*/
  if ( a9 ) /*0x704a43*/
  {
    if ( *(_DWORD *)(dword_87F6C4 + 4) == 1 ) /*0x704a51*/
      v11 = **(unsigned __int8 **)(dword_87F6C4 + 372); /*0x704a5d*/
    else
      v11 = **(unsigned __int16 **)(dword_87F6C4 + 372); /*0x704a69*/
    v36 = -2; /*0x704a77*/
    v35 = -2; /*0x704a89*/
    v12 = Coord2D::Add(&v35, v37, v34); /*0x704a8d*/
    v13 = Rect::Construct(v47, v12, 3, 3); /*0x704a97*/
    v39 = *v13; /*0x704aa0*/
    v40 = v13[1]; /*0x704aa9*/
    v41 = v13[2]; /*0x704ab0*/
    v42 = v13[3]; /*0x704ac2*/
    v14 = ClipRectIntersection(v48, &DSurface_ViewBounds, &v39, 0, 0); /*0x704acc*/
    v43 = *v14; /*0x704ad4*/
    v44 = v14[1]; /*0x704adb*/
    v45 = v14[2]; /*0x704ae2*/
    v46 = v14[3]; /*0x704aef*/
    (*(void (__thiscall **)(int, int *, int))(*(_DWORD *)DSurface_Composite + 20))(DSurface_Composite, &v43, v11); /*0x704afa*/
    if ( *(_DWORD *)(dword_87F6C4 + 4) == 1 ) /*0x704b05*/
      v15 = **(unsigned __int8 **)(dword_87F6C4 + 372); /*0x704b11*/
    else
      v15 = **(unsigned __int16 **)(dword_87F6C4 + 372); /*0x704b1d*/
    v35 = -2; /*0x704b29*/
    v36 = -2; /*0x704b2d*/
    v16 = Coord2D::Add(&v35, v37, v33); /*0x704b41*/
    v17 = Rect::Construct(v48, v16, 3, 3); /*0x704b4e*/
    v43 = *v17; /*0x704b57*/
    v44 = v17[1]; /*0x704b60*/
    v45 = v17[2]; /*0x704b6c*/
    v46 = v17[3]; /*0x704b7c*/
    v18 = ClipRectIntersection(v47, &DSurface_ViewBounds, &v43, 0, 0); /*0x704b80*/
    v39 = *v18; /*0x704b88*/
    v40 = v18[1]; /*0x704b8f*/
    v41 = v18[2]; /*0x704b9c*/
    v42 = v18[3]; /*0x704ba3*/
    (*(void (__thiscall **)(int, int *, int))(*(_DWORD *)DSurface_Composite + 20))(DSurface_Composite, &v39, v15); /*0x704bae*/
    v9 = dword_886FA4; /*0x704bb1*/
  }
  v38[1] = v9; /*0x704bc2*/
  v38[0] = DSurface_ViewBounds; /*0x704bce*/
  v38[2] = dword_886FA8; /*0x704bd2*/
  v38[3] = dword_886FAC; /*0x704bd6*/
  if ( v10 && ClipLine(v34, v33, v38) ) /*0x704be9*/
  {
    if ( *(_DWORD *)(dword_87F6C4 + 4) == 1 ) /*0x704bfa*/
      v19 = **(unsigned __int8 **)(dword_87F6C4 + 372); /*0x704c04*/
    else
      v19 = **(unsigned __int16 **)(dword_87F6C4 + 372); /*0x704c10*/
    (*(void (__thiscall **)(int, int *, int *, int))(*(_DWORD *)DSurface_Composite + 48))( /*0x704c26*/
      DSurface_Composite,
      v34,
      v33,
      v19);
  }
  v20 = ((unsigned __int8)a7 >> g_BitShift_Green_0 << g_BitShift_Red) /*0x704c89*/
      | (BYTE2(a7) >> g_BitMask_Red << g_BitShift_Blue)
      | (BYTE1(a7) >> g_BitMask_Blue << g_BitMask_Green);
  v35 = -2; /*0x704c92*/
  v36 = -2; /*0x704c96*/
  v21 = Coord2D::Add(&v35, v37, &v31); /*0x704ca4*/
  v22 = Rect::Construct(v48, v21, 3, 3); /*0x704cb1*/
  v43 = *v22; /*0x704cba*/
  v44 = v22[1]; /*0x704cc3*/
  v45 = v22[2]; /*0x704cca*/
  v46 = v22[3]; /*0x704cd9*/
  v23 = ClipRectIntersection(v47, &DSurface_ViewBounds, &v43, 0, 0); /*0x704ce3*/
  v39 = *v23; /*0x704ceb*/
  v40 = v23[1]; /*0x704cf2*/
  v41 = v23[2]; /*0x704cf9*/
  v42 = v23[3]; /*0x704d06*/
  (*(void (__thiscall **)(int, int *, int))(*(_DWORD *)DSurface_Composite + 20))(DSurface_Composite, &v39, v20); /*0x704d11*/
  v35 = -2; /*0x704d1d*/
  v36 = -2; /*0x704d21*/
  v24 = Coord2D::Add(&v35, v37, &v29); /*0x704d35*/
  v25 = Rect::Construct(v48, v24, 3, 3); /*0x704d42*/
  v43 = *v25; /*0x704d49*/
  v44 = v25[1]; /*0x704d52*/
  v45 = v25[2]; /*0x704d5f*/
  v46 = v25[3]; /*0x704d70*/
  v26 = ClipRectIntersection(v47, &DSurface_ViewBounds, &v43, 0, 0); /*0x704d74*/
  v39 = *v26; /*0x704d7c*/
  v40 = v26[1]; /*0x704d83*/
  v41 = v26[2]; /*0x704d90*/
  v42 = v26[3]; /*0x704d97*/
  (*(void (__thiscall **)(int, int *, int))(*(_DWORD *)DSurface_Composite + 20))(DSurface_Composite, &v39, v20); /*0x704da2*/
  if ( a8 ) /*0x704dae*/
  {
    v27 = (0x7FFFFFFF - (int)dword_A8ED84) % 15; /*0x704dc9*/
    result = ClipLine(&v31, &v29, v38); /*0x704dd4*/
    if ( result ) /*0x704ddb*/
      return (*(int (__thiscall **)(int, int *, int *, int, void *, int, _DWORD))(*(_DWORD *)DSurface_Composite + 76))( /*0x704df8*/
               DSurface_Composite,
               &v31,
               &v29,
               v20,
               &unk_843128,
               v27,
               0);
  }
  else
  {
    result = ClipLine(&v31, &v29, v38); /*0x704e14*/
    if ( result ) /*0x704e1b*/
      return (*(int (__thiscall **)(int, int *, int *, int))(*(_DWORD *)DSurface_Composite + 48))( /*0x704e30*/
               DSurface_Composite,
               &v31,
               &v29,
               v20);
  }
  return result; /*0x704dfb*/
}



// ==== 0x00704E40  DrawTacticalLaserLine  this=-  sig=csp ====
// local variable allocation has failed, the output may be wrong!
int __stdcall TacticalMap_DrawLaserLine(int a1, int a2, int a3, int a4, int a5, int a6, int a7)
{
  int v7; // esi
  int *v8; // eax
  int *v9; // eax
  int *v10; // eax
  int *v11; // eax
  DWORD Time; // eax
  int v13; // ecx
  int v14; // esi
  int v15; // edi
  int v16; // ebp
  double v17; // st7
  int result; // eax
  __int16 v19; // [esp+10h] [ebp-90h] BYREF
  unsigned __int8 v20; // [esp+12h] [ebp-8Eh]
  int v21; // [esp+18h] [ebp-88h] BYREF
  int v22; // [esp+1Ch] [ebp-84h]
  int v23; // [esp+20h] [ebp-80h]
  int v24; // [esp+24h] [ebp-7Ch] BYREF
  int v25; // [esp+28h] [ebp-78h]
  __int16 v26; // [esp+2Ch] [ebp-74h] BYREF
  char v27; // [esp+2Eh] [ebp-72h]
  int v28; // [esp+30h] [ebp-70h] BYREF
  int v29; // [esp+34h] [ebp-6Ch]
  int v30; // [esp+38h] [ebp-68h] BYREF
  int v31; // [esp+3Ch] [ebp-64h]
  int v32; // [esp+40h] [ebp-60h]
  int v33; // [esp+44h] [ebp-5Ch]
  int v34; // [esp+48h] [ebp-58h] BYREF
  int v35; // [esp+4Ch] [ebp-54h]
  int v36; // [esp+50h] [ebp-50h]
  int v37; // [esp+54h] [ebp-4Ch]
  int v38; // [esp+58h] [ebp-48h] BYREF
  int v39; // [esp+5Ch] [ebp-44h]
  int v40; // [esp+60h] [ebp-40h]
  int v41; // [esp+64h] [ebp-3Ch] BYREF
  int v42; // [esp+68h] [ebp-38h]
  int v43; // [esp+6Ch] [ebp-34h]
  int v44[4]; // [esp+70h] [ebp-30h] BYREF
  _DWORD v45[4]; // [esp+80h] [ebp-20h] BYREF
  _DWORD v46[4]; // [esp+90h] [ebp-10h] BYREF

  v19 = 0; /*0x704e62*/
  v20 = 0; /*0x704e6c*/
  v26 = -1; /*0x704e71*/
  v27 = -1; /*0x704e79*/
  Coord::To_Screen(g_TacticalClass_Instance, &a1, &v24); /*0x704e7d*/
  Coord::To_Screen(g_TacticalClass_Instance, &a4, &v21); /*0x704e95*/
  v22 += dword_886FA4; /*0x704ec3*/
  v25 += dword_886FA4; /*0x704ece*/
  v29 = v25 - 2; /*0x704eeb*/
  v28 = v24 - 2; /*0x704f13*/
  v7 = ((unsigned __int8)a7 >> g_BitShift_Green_0 << g_BitShift_Red) /*0x704f1e*/
     | (BYTE1(a7) >> g_BitMask_Blue << g_BitMask_Green)
     | (BYTE2(a7) >> g_BitMask_Red << g_BitShift_Blue);
  v8 = Rect::Construct(v45, &v28, 3, 3); /*0x704f25*/
  v34 = *v8; /*0x704f2e*/
  v35 = v8[1]; /*0x704f37*/
  v36 = v8[2]; /*0x704f3e*/
  v37 = v8[3]; /*0x704f50*/
  v9 = ClipRectIntersection(v46, &DSurface_ViewBounds, &v34, 0, 0); /*0x704f5a*/
  v30 = *v9; /*0x704f61*/
  v31 = v9[1]; /*0x704f68*/
  v32 = v9[2]; /*0x704f6f*/
  v33 = v9[3]; /*0x704f7c*/
  (*(void (__thiscall **)(int, int *, int))(*(_DWORD *)DSurface_Composite + 20))(DSurface_Composite, &v30, v7); /*0x704f88*/
  v29 = v22 - 2; /*0x704f9f*/
  v28 = v21 - 2; /*0x704fad*/
  v10 = Rect::Construct(v46, &v28, 3, 3); /*0x704fb1*/
  v30 = *v10; /*0x704fba*/
  v31 = v10[1]; /*0x704fc3*/
  v32 = v10[2]; /*0x704fca*/
  v33 = v10[3]; /*0x704fdc*/
  v11 = ClipRectIntersection(v45, &DSurface_ViewBounds, &v30, 0, 0); /*0x704fe6*/
  v34 = *v11; /*0x704fee*/
  v35 = v11[1]; /*0x704ff5*/
  v36 = v11[2]; /*0x704ffc*/
  v37 = v11[3]; /*0x705009*/
  (*(void (__thiscall **)(int, int *, int))(*(_DWORD *)DSurface_Composite + 20))(DSurface_Composite, &v34, v7); /*0x705014*/
  v44[0] = DSurface_ViewBounds; /*0x705028*/
  v44[1] = dword_886FA4; /*0x705031*/
  v44[2] = dword_886FA8; /*0x705035*/
  v44[3] = dword_886FAC; /*0x705039*/
  Time = timeGetTime(); /*0x70503d*/
  v13 = a1; /*0x70504a*/
  v42 = a2; /*0x705054*/
  v14 = 1; /*0x70505f*/
  v15 = 31; /*0x705064*/
  v23 = 1; /*0x70506c*/
  v41 = a1; /*0x705070*/
  v43 = a3; /*0x705074*/
  v16 = 8; /*0x705078*/
  v28 = 8 * (Time >> 4); /*0x70507d*/
  while ( 1 ) /*0x7050b0*/
  {
    v38 = (v15 * v13 + v14 * a4) / 32; /*0x7050b0*/
    v39 = (v14 * a5 + v15 * a2) / 32; /*0x7050d3*/
    v17 = ((double)v23 - 16.0) * 0.0625; /*0x7050f2*/
    v23 = (v14 * a6 + v15 * a3) / 32; /*0x7050f8*/
    v40 = Math::RoundToInt(v17); /*0x705119*/
    Coord::To_Screen(g_TacticalClass_Instance, &v41, &v24); /*0x70512f*/
    Coord::To_Screen(g_TacticalClass_Instance, &v38, &v21); /*0x705144*/
    v25 += dword_886FA4; /*0x705158*/
    v22 += dword_886FA4; /*0x70516b*/
    if ( ClipLine(&v24, &v21, v44) ) /*0x70516f*/
    {
      v20 = BYTE2(a7); /*0x70518f*/
      v19 = a7; /*0x705195*/
      if ( (((_WORD)v16 - (_WORD)v28) & 0x1F8u) <= 0xF8 && (((_WORD)v16 - (_WORD)v28) & 0x1F8) != 0 ) /*0x7051aa*/
        Color::Lerp((unsigned __int8 *)&v19, (v16 - v28) & 0xF8, (unsigned __int8 *)&v26); /*0x7051b6*/
      (*(void (__thiscall **)(int, int *, int *, int))(*(_DWORD *)DSurface_Composite + 48))( /*0x705226*/
        DSurface_Composite,
        &v24,
        &v21,
        ((unsigned __int8)v19 >> g_BitShift_Green_0 << g_BitShift_Red)
      | (HIBYTE(v19) >> g_BitMask_Blue << g_BitMask_Green)
      | (v20 >> g_BitMask_Red << g_BitShift_Blue));
    }
    result = v38; /*0x705229*/
    ++v14; /*0x705235*/
    v16 += 8; /*0x705236*/
    --v15; /*0x705239*/
    v23 = v14; /*0x705240*/
    v41 = v38; /*0x705244*/
    v42 = v39; /*0x705248*/
    v43 = v40; /*0x70524c*/
    if ( v16 > 256 ) /*0x705250*/
      break; /*0x705250*/
    v13 = a1; /*0x705083*/
  }
  return result; /*0x705256*/
}



// ==== 0x00705270  Render::DrawLine  this=Render  sig=csp ====
int __stdcall Render_DrawLine(int a1, int a2, int a3, int a4, int a5, int a6, int a7, char a8)
{
  int v8; // esi
  int v9; // edi
  char v10; // bl
  _DWORD *v11; // eax
  int *v12; // eax
  int *v13; // eax
  _DWORD *v14; // eax
  int *v15; // eax
  int *v16; // eax
  int v17; // eax
  int *v18; // eax
  int *v19; // eax
  int *v20; // eax
  int *v21; // eax
  int v22; // esi
  int v23; // edi
  int v24; // ebx
  unsigned __int8 v25; // al
  int result; // eax
  int v27; // [esp+24h] [ebp-A0h] BYREF
  int v28; // [esp+28h] [ebp-9Ch]
  int v29; // [esp+2Ch] [ebp-98h] BYREF
  int v30; // [esp+30h] [ebp-94h]
  __int16 v31; // [esp+34h] [ebp-90h] BYREF
  unsigned __int8 v32; // [esp+36h] [ebp-8Eh]
  int v33; // [esp+3Ch] [ebp-88h] BYREF
  int v34; // [esp+40h] [ebp-84h]
  int v35; // [esp+44h] [ebp-80h] BYREF
  int v36; // [esp+48h] [ebp-7Ch]
  int v37; // [esp+4Ch] [ebp-78h]
  int v38; // [esp+50h] [ebp-74h]
  int v39; // [esp+54h] [ebp-70h] BYREF
  int v40; // [esp+58h] [ebp-6Ch]
  int v41; // [esp+5Ch] [ebp-68h]
  int v42; // [esp+60h] [ebp-64h]
  int v43[2]; // [esp+64h] [ebp-60h] BYREF
  int v44[2]; // [esp+6Ch] [ebp-58h] BYREF
  int v45; // [esp+74h] [ebp-50h] BYREF
  int v46; // [esp+78h] [ebp-4Ch]
  int v47; // [esp+7Ch] [ebp-48h]
  int v48; // [esp+80h] [ebp-44h] BYREF
  int v49; // [esp+84h] [ebp-40h]
  int v50; // [esp+88h] [ebp-3Ch]
  int v51[4]; // [esp+8Ch] [ebp-38h] BYREF
  _DWORD v52[2]; // [esp+9Ch] [ebp-28h] BYREF
  _DWORD v53[4]; // [esp+A4h] [ebp-20h] BYREF
  _DWORD v54[4]; // [esp+B4h] [ebp-10h] BYREF

  v31 = 0; /*0x70527a*/
  v32 = 0; /*0x705282*/
  Coord::To_Screen(g_TacticalClass_Instance, &a1, &v29); /*0x70529b*/
  Coord::To_Screen(g_TacticalClass_Instance, &a4, &v33); /*0x7052b3*/
  v30 += dword_886FA4; /*0x7052ce*/
  v34 += dword_886FA4; /*0x70530d*/
  v8 = ((unsigned __int8)a7 >> g_BitShift_Green_0 << g_BitShift_Red) /*0x705348*/
     | (BYTE2(a7) >> g_BitMask_Red << g_BitShift_Blue)
     | (BYTE1(a7) >> g_BitMask_Blue << g_BitMask_Green);
  v27 = (unsigned __int8)word_A83CDA; /*0x705363*/
  v43[0] = v29; /*0x70538d*/
  v9 = (HIBYTE(word_A83CDA) >> g_BitMask_Red << g_BitShift_Blue) /*0x705397*/
     | ((unsigned __int8)word_A83CDA >> g_BitMask_Blue << g_BitMask_Green)
     | ((unsigned __int8)byte_A83CD9 >> g_BitShift_Green_0 << g_BitShift_Red);
  v10 = a8; /*0x705399*/
  v43[1] = v30 + 1; /*0x7053b0*/
  v44[0] = v33; /*0x7053b4*/
  v44[1] = v34 + 1; /*0x7053b8*/
  if ( a8 ) /*0x7053bc*/
  {
    v27 = -2; /*0x7053cb*/
    v28 = -2; /*0x7053dc*/
    v11 = Coord2D::Add(&v27, v52, v43); /*0x7053e6*/
    v12 = Rect::Construct(v53, v11, 3, 3); /*0x7053f3*/
    v39 = *v12; /*0x7053fc*/
    v40 = v12[1]; /*0x705405*/
    v41 = v12[2]; /*0x70540c*/
    v42 = v12[3]; /*0x70541e*/
    v13 = ClipRectIntersection(v54, &DSurface_ViewBounds, &v39, 0, 0); /*0x705428*/
    v35 = *v13; /*0x705430*/
    v36 = v13[1]; /*0x705437*/
    v37 = v13[2]; /*0x70543e*/
    v38 = v13[3]; /*0x70544b*/
    (*(void (__thiscall **)(int, int *, int))(*(_DWORD *)DSurface_Composite + 20))(DSurface_Composite, &v35, v8); /*0x705456*/
    v27 = -2; /*0x705462*/
    v28 = -2; /*0x705466*/
    v14 = Coord2D::Add(&v27, v52, v44); /*0x70547d*/
    v15 = Rect::Construct(v54, v14, 3, 3); /*0x70548a*/
    v35 = *v15; /*0x705493*/
    v36 = v15[1]; /*0x70549c*/
    v37 = v15[2]; /*0x7054a8*/
    v38 = v15[3]; /*0x7054bb*/
    v16 = ClipRectIntersection(v53, &DSurface_ViewBounds, &v35, 0, 0); /*0x7054bf*/
    v39 = *v16; /*0x7054c6*/
    v40 = v16[1]; /*0x7054cd*/
    v41 = v16[2]; /*0x7054d4*/
    v42 = v16[3]; /*0x7054e1*/
    (*(void (__thiscall **)(int, int *, int))(*(_DWORD *)DSurface_Composite + 20))(DSurface_Composite, &v39, v9); /*0x7054ed*/
  }
  v51[0] = DSurface_ViewBounds; /*0x705501*/
  v51[1] = dword_886FA4; /*0x70550b*/
  v51[2] = dword_886FA8; /*0x705511*/
  v51[3] = dword_886FAC; /*0x705518*/
  if ( v10 && ClipLine(v43, v44, v51) ) /*0x70552e*/
  {
    if ( *(_DWORD *)(dword_87F6C4 + 4) == 1 ) /*0x705540*/
      v17 = **(unsigned __int8 **)(dword_87F6C4 + 372); /*0x70554c*/
    else
      v17 = **(unsigned __int16 **)(dword_87F6C4 + 372); /*0x705558*/
    (*(void (__thiscall **)(int, int *, int *, int))(*(_DWORD *)DSurface_Composite + 48))( /*0x70556e*/
      DSurface_Composite,
      v43,
      v44,
      v17);
  }
  v27 = v29 - 2; /*0x705583*/
  v28 = v30 - 2; /*0x70558b*/
  v18 = Rect::Construct(v54, &v27, 3, 3); /*0x705597*/
  v35 = *v18; /*0x7055a0*/
  v36 = v18[1]; /*0x7055a9*/
  v37 = v18[2]; /*0x7055b0*/
  v38 = v18[3]; /*0x7055c2*/
  v19 = ClipRectIntersection(v53, &DSurface_ViewBounds, &v35, 0, 0); /*0x7055cc*/
  v39 = *v19; /*0x7055d4*/
  v40 = v19[1]; /*0x7055db*/
  v41 = v19[2]; /*0x7055e2*/
  v42 = v19[3]; /*0x7055ef*/
  (*(void (__thiscall **)(int, int *, int))(*(_DWORD *)DSurface_Composite + 20))(DSurface_Composite, &v39, v9); /*0x7055fa*/
  v28 = v34 - 2; /*0x705611*/
  v27 = v33 - 2; /*0x70561f*/
  v20 = Rect::Construct(v54, &v27, 3, 3); /*0x705623*/
  v35 = *v20; /*0x70562c*/
  v36 = v20[1]; /*0x705635*/
  v37 = v20[2]; /*0x70563c*/
  v38 = v20[3]; /*0x70564e*/
  v21 = ClipRectIntersection(v53, &DSurface_ViewBounds, &v35, 0, 0); /*0x705658*/
  v39 = *v21; /*0x705660*/
  v40 = v21[1]; /*0x705667*/
  v41 = v21[2]; /*0x70566e*/
  v42 = v21[3]; /*0x70567b*/
  (*(void (__thiscall **)(int, int *, int))(*(_DWORD *)DSurface_Composite + 20))(DSurface_Composite, &v39, v8); /*0x705686*/
  v45 = a1; /*0x70569e*/
  v46 = a2; /*0x7056a2*/
  v47 = a3; /*0x7056a6*/
  v22 = 1; /*0x7056aa*/
  v23 = 63; /*0x7056af*/
  v24 = 252; /*0x7056b4*/
  do /*0x705841*/
  {
    v48 = (v22 * a4 + v23 * a1) / 64; /*0x7056ec*/
    v49 = (v22 * a5 + v23 * a2) / 64; /*0x705705*/
    v50 = (v22 * a6 + v23 * a3) / 64; /*0x705728*/
    Coord::To_Screen(g_TacticalClass_Instance, &v45, &v29); /*0x705732*/
    Coord::To_Screen(g_TacticalClass_Instance, &v48, &v33); /*0x705747*/
    v30 += dword_886FA4; /*0x705761*/
    v34 += dword_886FA4; /*0x70576e*/
    if ( ClipLine(&v29, &v33, v51) ) /*0x705772*/
    {
      v31 = a7; /*0x705794*/
      v32 = BYTE2(a7); /*0x705799*/
      v25 = v24; /*0x70579d*/
      if ( v24 >= 254 ) /*0x70579f*/
        v25 = -2; /*0x7057a1*/
      Color::Lerp((unsigned __int8 *)&v31, v25, (unsigned __int8 *)&byte_A83CD9); /*0x7057b0*/
      (*(void (__thiscall **)(int, int *, int *, int))(*(_DWORD *)DSurface_Composite + 48))( /*0x70581e*/
        DSurface_Composite,
        &v29,
        &v33,
        ((unsigned __int8)v31 >> g_BitShift_Green_0 << g_BitShift_Red)
      | (HIBYTE(v31) >> g_BitMask_Blue << g_BitMask_Green)
      | (v32 >> g_BitMask_Red << g_BitShift_Blue));
    }
    result = v50; /*0x705829*/
    ++v22; /*0x70582d*/
    --v23; /*0x70582e*/
    v24 -= 4; /*0x70582f*/
    v45 = v48; /*0x705835*/
    v46 = v49; /*0x705839*/
    v47 = v50; /*0x70583d*/
  }
  while ( v22 <= 64 ); /*0x705841*/
  return result; /*0x705847*/
}



// ==== 0x00705860  TechnoClass::DrawAirstrikeFlare_SetContext  this=ObjectClass  sig=csp ====
int __stdcall TechnoClass::DrawAirstrikeFlare_SetContext(int a1, int a2, int a3, int a4, int a5, int a6)
{
  int v6; // ebp
  int v7; // ebx
  int v8; // edx
  int result; // eax
  int *v10; // edi
  int v11; // eax
  int v12; // eax
  int v13; // ecx
  int v14; // esi
  int v15; // edx
  int v16; // esi
  int v17; // ebx
  int v18; // esi
  bool v19; // cc
  unsigned __int8 v20; // [esp+30h] [ebp-60h] BYREF
  __int16 v21; // [esp+31h] [ebp-5Fh]
  int v22; // [esp+34h] [ebp-5Ch]
  int v23; // [esp+38h] [ebp-58h]
  int v24; // [esp+3Ch] [ebp-54h]
  int v25; // [esp+40h] [ebp-50h] BYREF
  int v26; // [esp+44h] [ebp-4Ch]
  signed int v27; // [esp+48h] [ebp-48h]
  signed int v28; // [esp+4Ch] [ebp-44h]
  int v29; // [esp+50h] [ebp-40h] BYREF
  int v30; // [esp+54h] [ebp-3Ch]
  int v31; // [esp+58h] [ebp-38h] BYREF
  int v32; // [esp+5Ch] [ebp-34h]
  int v33; // [esp+60h] [ebp-30h] BYREF
  int v34; // [esp+64h] [ebp-2Ch]
  int v35; // [esp+68h] [ebp-28h] BYREF
  int v36; // [esp+6Ch] [ebp-24h]
  int v37; // [esp+70h] [ebp-20h] BYREF
  int v38; // [esp+74h] [ebp-1Ch]
  int v39; // [esp+78h] [ebp-18h] BYREF
  int v40; // [esp+7Ch] [ebp-14h]
  int v41; // [esp+80h] [ebp-10h] BYREF
  int v42; // [esp+84h] [ebp-Ch]
  int v43; // [esp+88h] [ebp-8h]
  int v44; // [esp+8Ch] [ebp-4h]

  Coord::To_Screen(g_TacticalClass_Instance, &a1, &v41); /*0x705875*/
  Coord::To_Screen(g_TacticalClass_Instance, &a4, &v31); /*0x70588a*/
  v6 = -32 - ZCoordToScreenY(a3); /*0x7058a4*/
  v7 = -32 - ZCoordToScreenY(a6); /*0x7058b4*/
  v28 = abs32(v31 - v41); /*0x7058c5*/
  v8 = *(_DWORD *)g_DSurface_Hidden_2; /*0x7058da*/
  v27 = abs32(v32 - v42); /*0x7058dc*/
  result = (*(int (__thiscall **)(int))(v8 + 132))(g_DSurface_Hidden_2); /*0x7058e0*/
  if ( (_BYTE)result ) /*0x7058e8*/
  {
    v10 = (int *)g_DSurface_Hidden_2; /*0x7058f0*/
    v11 = Random::Range(Randomizer_Global, 190, 270); /*0x705905*/
    v21 = 0; /*0x70590c*/
    if ( v11 <= 255 ) /*0x70591c*/
    {
      v20 = v11; /*0x705972*/
    }
    else
    {
      v20 = -1; /*0x705925*/
      LOBYTE(v21) = (char)(110 * v11) / 14; /*0x705950*/
      HIBYTE(v21) = (char)(30 * v11) / 14; /*0x70596c*/
    }
    v12 = v32; /*0x705976*/
    v13 = v42; /*0x70597a*/
    if ( v32 < v42 ) /*0x705980*/
    {
      v14 = 255 >> g_BitShift_Green_0 << g_BitShift_Red; /*0x7059c5*/
      v29 = v31 + 1; /*0x7059cc*/
      v25 = v31 - 2; /*0x7059d0*/
      v26 = v32 + 1; /*0x7059d8*/
      v30 = v32 + 1; /*0x7059dc*/
      (*(void (__thiscall **)(int *, int *, int *, int))(*v10 + 48))(v10, &v25, &v29, v14); /*0x7059eb*/
      v15 = *v10; /*0x7059f2*/
      v25 = v31 - 2; /*0x7059f9*/
      v29 = v31 + 1; /*0x705a01*/
      v26 = v32; /*0x705a05*/
      v30 = v32; /*0x705a09*/
      (*(void (__thiscall **)(int *, int *, int *, int))(v15 + 48))(v10, &v25, &v29, v14); /*0x705a19*/
      v26 = v32 - 1; /*0x705a2e*/
      v30 = v32 + 2; /*0x705a32*/
      v25 = v31 - 1; /*0x705a3a*/
      v29 = v31 - 1; /*0x705a3e*/
      (*(void (__thiscall **)(int *, int *, int *, int))(*v10 + 48))(v10, &v25, &v29, v14); /*0x705a4c*/
      v25 = v31; /*0x705a58*/
      v30 = v32 + 2; /*0x705a62*/
      v26 = v32 - 1; /*0x705a66*/
      v29 = v31; /*0x705a72*/
      (*(void (__thiscall **)(int *, int *, int *, int))(*v10 + 48))(v10, &v25, &v29, v14); /*0x705a7c*/
      v13 = v42; /*0x705a7f*/
      v12 = v32; /*0x705a83*/
    }
    v16 = v41; /*0x705a8b*/
    v44 = v12 - v13; /*0x705a95*/
    v43 = v31 - v41; /*0x705a9b*/
    v29 = v7 - v6; /*0x705a9f*/
    v24 = v7 - v6; /*0x705aa3*/
    v17 = 100; /*0x705aab*/
    v35 = v41; /*0x705ab0*/
    v36 = v13; /*0x705ab4*/
    v23 = v12 - v13; /*0x705ab8*/
    v22 = v31 - v41; /*0x705abc*/
    v25 = 0; /*0x705ac0*/
    while ( 1 ) /*0x705ae1*/
    {
      v33 = v16 + v22 / 4; /*0x705ae1*/
      v34 = v13 + v23 / 4; /*0x705af8*/
      v18 = v6 + v24 / 4; /*0x705b15*/
      AudioStream::DrawWaveform(v10, &DSurface_ViewBounds, &v35, &v33, &v20, v25 / 4 + 255, v6, v18); /*0x705b34*/
      if ( v28 <= v27 ) /*0x705b43*/
      {
        v39 = v35 + 1; /*0x705bc8*/
        v40 = v36; /*0x705bd1*/
        v37 = v33 + 1; /*0x705bd6*/
        v38 = v34; /*0x705bdf*/
        AudioStream::DrawWaveform(v10, &DSurface_ViewBounds, &v39, &v37, &v20, v17, v6, v18); /*0x705bf6*/
        v39 = v35 - 1; /*0x705c08*/
        v40 = v36; /*0x705c11*/
        v37 = v33 - 1; /*0x705c16*/
        v38 = v34; /*0x705c1f*/
      }
      else
      {
        v39 = v35; /*0x705b51*/
        v40 = v36 + 1; /*0x705b5a*/
        v37 = v33; /*0x705b60*/
        v38 = v34 + 1; /*0x705b69*/
        AudioStream::DrawWaveform(v10, &DSurface_ViewBounds, &v39, &v37, &v20, v17, v6, v18); /*0x705b80*/
        v39 = v35; /*0x705b91*/
        v40 = v36 - 1; /*0x705b9a*/
        v37 = v33; /*0x705ba0*/
        v38 = v34 - 1; /*0x705ba9*/
      }
      AudioStream::DrawWaveform(v10, &DSurface_ViewBounds, &v39, &v37, &v20, v17, v6, v18); /*0x705bb9*/
      v35 = v33; /*0x705c47*/
      v36 = v34; /*0x705c4f*/
      v6 = v18; /*0x705c57*/
      v22 += v43; /*0x705c65*/
      v23 += v44; /*0x705c6d*/
      result = v25 - 255; /*0x705c75*/
      v17 -= 25; /*0x705c7a*/
      v19 = v25 - 255 < -765; /*0x705c7f*/
      v24 += v29; /*0x705c84*/
      v25 -= 255; /*0x705c88*/
      if ( v19 ) /*0x705c8c*/
        break; /*0x705c8c*/
      v13 = v42; /*0x705aca*/
      v16 = v41; /*0x705ace*/
    }
  }
  return result; /*0x705c94*/
}



// ==== 0x00705CA0  TechnoClass::GetBridgeAwareCoords  this=TechnoClass  sig=csp ====
int __thiscall BuildingClass::GetBridgeAwareCoords(TechnoClass *this)
{
  AbstractClass *target; // ecx
  int *v3; // ecx
  int *location; // esi
  _BYTE v6[12]; // [esp+4h] [ebp-Ch] BYREF
  int *v7; // [esp+14h] [ebp+4h]

  if ( (*((int (__thiscall **)(TechnoClass *))this->RadioClass + 97))(this) == 1 && (target = this->target) != 0 ) /*0x705cbb*/
  {
    v3 = (int *)(*((int (__thiscall **)(AbstractClass *, _BYTE *))target->vtable0 + 22))(target, v6); /*0x705cc7*/
    *v7 = *v3; /*0x705cd1*/
    v7[1] = v3[1]; /*0x705cd6*/
    v7[2] = v3[2]; /*0x705cdd*/
    return (int)v7; /*0x705cc9*/
  }
  else
  {
    location = this->?; /*0x705cea*/
    *v7 = *location; /*0x705cf4*/
    v7[1] = location[1]; /*0x705cf9*/
    v7[2] = location[2]; /*0x705d00*/
    return (int)v7; /*0x705ce6*/
  }
}



// ==== 0x00705D10  BuildingClass::SetType  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass::SetType(BuildingClass *this, int a2)
{
  this->? = (void *)a2; /*0x705d14*/
  return a2; /*0x705d1a*/
}



// ==== 0x00705D20  BuildingClass::GetType  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass::GetType(BuildingClass *this)
{
  return (int)this->?; /*0x705d26*/
}



// ==== 0x00705D50  TechnoClass::IsNotBusy  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::IsNotBusy(TechnoClass *this)
{
  int result; // eax

  result = (*((int (__thiscall **)(TechnoClass *))this->RadioClass + 118))(this); /*0x705d52*/
  LOBYTE(result) = (_BYTE)result == 0; /*0x705d5a*/
  return result; /*0x705d5d*/
}



// ==== 0x00705D60  BuildingClass::GetType_Thunk  this=BuildingClass  sig=ida-proto ====
// attributes: thunk
char __thiscall BuildingClass::GetType_Thunk(_DWORD *this)
{
  return BuildingClass::GetObjectData(this);
}



// ==== 0x00705D70  TechnoClass::GetBuildAnim  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::GetBuildAnim(TechnoClass *this)
{
  int v2; // eax
  int v3; // edi

  v2 = *(_DWORD *)((*((int (__thiscall **)(TechnoClass *))this->RadioClass + 33))(this) + 3568); /*0x705d82*/
  v3 = this->owner->startingCell[0]; /*0x705d8a*/
  if ( v2 ) /*0x705d90*/
    return *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(v2 + 4) + 4 * v3) + 780); /*0x705d9a*/
  if ( (*((unsigned __int8 (__thiscall **)(TechnoClass *, Object *))this->RadioClass + 272))(this, dword_A83D4C) /*0x705dbb*/
    || !(*((int (__thiscall **)(TechnoClass *, int))this->RadioClass + 52))(this, 1) )
  {
    return *(_DWORD *)(*(_DWORD *)(*(_DWORD *)&stru_B054D0.m_1[3] + 4 * v3) + 780); /*0x705df3*/
  }
  return *(_DWORD *)(*(_DWORD *)(*(_DWORD *)&stru_B054D0.m_1[3] /*0x705d98*/
                               + 4
                               * *(_DWORD *)((*((int (__thiscall **)(TechnoClass *, int))this->RadioClass + 52))(
                                               this,
                                               1)
                                           + 90196))
                   + 780);
}



// ==== 0x00706640  TechnoClass::UpdateState  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::UpdateState(TechnoClass *this)
{
  int v1; // edi
  int v3; // esi
  int result; // eax
  int (__thiscall **vtable0)(TechnoClass *, _DWORD); // eax
  int v6; // edi
  int v7; // eax
  SortedStateVector *v8; // ebx
  _DWORD *v9; // eax
  int v10; // eax
  __int16 **v11; // eax
  __int16 *v12; // eax
  void *v13; // eax
  int (__thiscall **v14)(TechnoClass *); // edx
  int v15; // esi
  int v16; // ecx
  int v17; // eax
  int v18; // edx
  int v19; // esi
  int *v20; // eax
  int v21; // eax
  int v22; // edi
  int v23; // esi
  int v24; // eax
  int v25; // ecx
  int v26; // eax
  _DWORD *v27; // edx
  int v28; // eax
  int *v29; // eax
  int v30; // ebp
  int v31; // edi
  int v32; // ebp
  int v33; // esi
  int v34; // eax
  int v35; // ecx
  int v36; // eax
  _DWORD *v37; // edx
  SortedStateVector v38; // eax
  SortedStateVector v39; // eax
  _BYTE v40[4]; // [esp+10h] [ebp-40h] BYREF
  int v41; // [esp+14h] [ebp-3Ch]
  int v42; // [esp+18h] [ebp-38h]
  int v43; // [esp+1Ch] [ebp-34h]
  int v44[4]; // [esp+28h] [ebp-28h] BYREF
  int v45[6]; // [esp+38h] [ebp-18h] BYREF
  _DWORD *v46; // [esp+54h] [ebp+4h]
  unsigned int v47; // [esp+58h] [ebp+8h]
  int v48; // [esp+5Ch] [ebp+Ch] BYREF
  SortedStateVector *v49; // [esp+60h] [ebp+10h]
  int *v50; // [esp+64h] [ebp+14h]
  _DWORD *appended; // [esp+68h] [ebp+18h]
  const void *v52; // [esp+6Ch] [ebp+1Ch]
  int v53; // [esp+70h] [ebp+20h]
  int v54; // [esp+74h] [ebp+24h]
  int v55; // [esp+78h] [ebp+28h]

  v1 = v55; /*0x706647*/
  v3 = 0x2000; /*0x70664f*/
  if ( !v55 ) /*0x706654*/
  {
    result = (*((int (__thiscall **)(TechnoClass *, _DWORD, _DWORD))this->RadioClass + 26))(this, 0, 0) - 1; /*0x70665e*/
    switch ( result ) /*0x706664*/
    {
      case 0: /*0x706664*/
        v3 = 8194; /*0x706683*/
        goto LABEL_8; /*0x706688*/
      case 1: /*0x706664*/
      case 2: /*0x706664*/
        v3 = 8196; /*0x70668a*/
        goto LABEL_8; /*0x70668a*/
      case 3: /*0x706664*/
        if ( this->cloakProgress[0] ) /*0x70666b*/
          v3 = 8204; /*0x70667c*/
        else
          v3 = 8202; /*0x706675*/
        goto LABEL_8; /*0x70667a*/
      case 4: /*0x706664*/
        return result;
      default:
        goto LABEL_8;
    }
    return result;
  }
LABEL_8:
  if ( ((*((unsigned __int8 (__thiscall **)(TechnoClass *))this->RadioClass + 117))(this)
     || (*((unsigned __int8 (__thiscall **)(TechnoClass *))this->RadioClass + 118))(this))
    && ((*((int (__thiscall **)(TechnoClass *))this->RadioClass + 11))(this) != 1 || !*((_BYTE *)this + 1747)) )
  {
    if ( this
      && (*((int (__thiscall **)(TechnoClass *))this->RadioClass + 11))(this) == 6
      && *((_BYTE *)((*((int (__thiscall **)(TechnoClass *))this->RadioClass + 11))(this) == 6
                   ? this + 1
                   : (TechnoClass *)1312)->RadioClass
         + 5809) )
    {
      v3 |= 0x2006u; /*0x7066f8*/
    }
    else
    {
      v3 |= 0x2004u; /*0x706700*/
    }
  }
  if ( (unsigned __int8)House::IsHumanPlayer((House *)this->owner) /*0x706731*/
    && (*((unsigned __int8 (__thiscall **)(TechnoClass *))this->RadioClass + 49))(this)
    && ((*((int (__thiscall **)(TechnoClass *))this->RadioClass + 11))(this) != 1 || !*((_BYTE *)this + 1747)) )
  {
    v3 = (*((int (__thiscall **)(TechnoClass *, int))this->RadioClass + 271))(this, v3); /*0x706747*/
  }
  v44[0] = *v50; /*0x706759*/
  v55 = ~v1 & (v3 | 0x800); /*0x70675d*/
  v44[1] = v50[1]; /*0x706764*/
  v44[2] = v50[2]; /*0x70676b*/
  vtable0 = (int (__thiscall **)(TechnoClass *, _DWORD))this->RadioClass; /*0x706776*/
  v44[3] = v50[3]; /*0x70677c*/
  v6 = vtable0[281](this, v53); /*0x70678b*/
  if ( (*((unsigned __int8 (__thiscall **)(TechnoClass *))this->RadioClass + 88))(this)
    || this
    && (*((int (__thiscall **)(TechnoClass *))this->RadioClass + 11))(this) == 6
    && this->airstrike
    && this->airstrike->AirstrikeClass_field_50 == ((*((int (__thiscall **)(TechnoClass *))this->RadioClass + 11))(this) == 6
                                                  ? (unsigned int)this
                                                  : 0) )
  {
    v7 = TechnoClass::InvulnerabilityIntensity_SetContext(this, v6); /*0x7067d5*/
    v6 = TechnoClass::CalcFlashAlpha(this, v7); /*0x7067e2*/
  }
  v8 = v49; /*0x7067e8*/
  if ( v48 != -1 ) /*0x7067f1*/
  {
    if ( !v49 || *(_BYTE *)((*((int (__thiscall **)(TechnoClass *))this->RadioClass + 33))(this) + 3518) ) /*0x706806*/
    {
      v48 = -1; /*0x706875*/
      goto LABEL_41; /*0x706875*/
    }
    if ( v8[1] ) /*0x706810*/
    {
      v9 = (_DWORD *)v8[4]; /*0x706817*/
      if ( v9 && *v9 == v48 ) /*0x706826*/
        goto LABEL_36; /*0x706826*/
      v10 = SortedStateVector::BinarySearch(v8, &v48); /*0x70682f*/
      if ( v10 ) /*0x706836*/
      {
        v8[4] = (SortedStateVector)v10; /*0x706838*/
LABEL_36:
        v11 = (__int16 **)(*(_DWORD *)&v8[4] + 4); /*0x70683b*/
        goto LABEL_38; /*0x706841*/
      }
    }
    v11 = (__int16 **)&unk_B78824; /*0x706843*/
LABEL_38:
    v12 = *v11; /*0x706848*/
    if ( v12 ) /*0x70684c*/
    {
      Surface::BlitTechnoTo((Surface *)this, v12, appended, v44, v55, v6, v54); /*0x706866*/
      return result; /*0x706872*/
    }
  }
LABEL_41:
  result = (int)v46; /*0x706879*/
  if ( !*v46 || !v46[1] ) /*0x706886*/
    return result; /*0x706886*/
  v13 = RenderTechnoClassVoxel((int *)this, (int)v40, v40, v46, v52, (int)appended, v44, v47, v55, v6, v54); /*0x7068bb*/
  v14 = (int (__thiscall **)(TechnoClass *))this->RadioClass; /*0x7068c0*/
  qmemcpy(v45, v13, sizeof(v45)); /*0x7068ce*/
  v15 = v45[4]; /*0x7068d0*/
  v55 = v45[4]; /*0x7068da*/
  v54 = v45[5]; /*0x7068de*/
  result = v14[11](this); /*0x7068e2*/
  if ( result == 1 ) /*0x7068e8*/
  {
    v16 = v45[1] + appended[1]; /*0x7068ff*/
    v17 = v45[0] + *appended; /*0x706907*/
    if ( dword_B1CFC8 <= 0 || dword_B1CFCC <= 0 ) /*0x706919*/
    {
      v18 = v45[0] + *appended; /*0x7069d7*/
      result = v15; /*0x7069d9*/
      v19 = v54; /*0x7069db*/
    }
    else if ( v15 <= 0 || v54 <= 0 ) /*0x70692d*/
    {
      v18 = dword_B1CFC0; /*0x7069c1*/
      v16 = dword_B1CFC4; /*0x7069c7*/
      v19 = dword_B1CFCC; /*0x7069cd*/
      result = dword_B1CFC8; /*0x7069d3*/
    }
    else
    {
      v18 = dword_B1CFC0; /*0x706933*/
      v42 = dword_B1CFC8; /*0x70693f*/
      v41 = dword_B1CFC4; /*0x70694b*/
      v43 = dword_B1CFCC; /*0x70694f*/
      if ( dword_B1CFC0 > v17 ) /*0x706953*/
      {
        v18 = v17; /*0x70695d*/
        v42 += dword_B1CFC0 - v17; /*0x70695f*/
      }
      if ( dword_B1CFC4 > v16 ) /*0x706965*/
      {
        v41 = v16; /*0x70696f*/
        v43 += dword_B1CFC4 - v16; /*0x706973*/
      }
      if ( v18 + v42 < v17 + v55 ) /*0x706985*/
        v42 = v17 - v18 + v55 + 1; /*0x706991*/
      v19 = v43; /*0x706995*/
      if ( v43 + v41 < v16 + v54 ) /*0x7069a7*/
        v19 = v16 - v41 + v54 + 1; /*0x7069b3*/
      v16 = v41; /*0x7069b7*/
      result = v42; /*0x7069bb*/
    }
    dword_B1CFC0 = v18; /*0x7069df*/
    dword_B1CFC4 = v16; /*0x7069e5*/
    dword_B1CFC8 = result; /*0x7069eb*/
    dword_B1CFCC = v19; /*0x7069f0*/
  }
  if ( v48 == -1 ) /*0x7069fb*/
    return result; /*0x7069fb*/
  v20 = Miles::DriverGet(); /*0x706a06*/
  appended = (_DWORD *)Buffer::AppendCellData(&stru_887460, v20, (int)v45); /*0x706a18*/
  if ( appended ) /*0x706a1c*/
  {
    v21 = (int)v8[2]; /*0x706a25*/
    if ( *(_DWORD *)&v8[1] + 1 <= v21 ) /*0x706a2b*/
    {
LABEL_70:
      *(_DWORD *)(*(_DWORD *)v8 + 8 * *(_DWORD *)&v8[1]) = v48; /*0x706ab7*/
      *(_DWORD *)(*(_DWORD *)v8 + 8 * *(_DWORD *)&v8[1] + 4) = appended; /*0x706acc*/
LABEL_82:
      v39 = v8[1]; /*0x706ba2*/
      v8[3].__tail_0[0] = 0; /*0x706ba5*/
      result = *(_DWORD *)&v39 + 1; /*0x706ba9*/
      v8[1] = (SortedStateVector)result; /*0x706baa*/
      return result; /*0x706baa*/
    }
    if ( v21 ) /*0x706a33*/
    {
      v54 = (int)v8[2]; /*0x706a41*/
      if ( v21 < 0 ) /*0x706a45*/
        goto LABEL_71; /*0x706a45*/
    }
    else
    {
      v54 = 10; /*0x706a35*/
    }
    v22 = v21 + v54; /*0x706a4f*/
    v23 = __2_YAPAXI_Z(8 * (v21 + v54)); /*0x706a5f*/
    if ( v23 ) /*0x706a66*/
    {
      v24 = (int)v8[1]; /*0x706a68*/
      v25 = 0; /*0x706a6c*/
      v55 = v22 - 1; /*0x706a6e*/
      if ( v24 > 0 ) /*0x706a74*/
      {
        do /*0x706a95*/
        {
          v26 = 8 * v25; /*0x706a78*/
          v27 = (_DWORD *)(*(_DWORD *)v8 + 8 * v25++); /*0x706a81*/
          *(_DWORD *)(v26 + v23) = *v27; /*0x706a86*/
          *(_DWORD *)(v26 + v23 + 4) = v27[1]; /*0x706a8c*/
        }
        while ( v25 < *(_DWORD *)&v8[1] ); /*0x706a95*/
      }
      __3_YAXPAX_Z(*(void **)v8); /*0x706a9a*/
      v28 = v54 + *(_DWORD *)&v8[2]; /*0x706aa9*/
      *v8 = (SortedStateVector)v23; /*0x706aab*/
      v8[2] = (SortedStateVector)v28; /*0x706aad*/
      v8[4] = 0; /*0x706ab0*/
      goto LABEL_70; /*0x706ab0*/
    }
  }
LABEL_71:
  (*((void (__thiscall **)(TechnoClass *))this->RadioClass + 34))(this); /*0x706ad5*/
  TechnoClass::ClearArrays(); /*0x706ae0*/
  result = (int)appended; /*0x706ae5*/
  if ( !appended ) /*0x706aeb*/
  {
    v29 = Miles::DriverGet(); /*0x706af2*/
    result = Buffer::AppendCellData(&stru_887460, v29, (int)v45); /*0x706afd*/
    appended = (_DWORD *)result; /*0x706b02*/
  }
  v30 = (int)v8[2]; /*0x706b09*/
  if ( *(_DWORD *)&v8[1] + 1 <= v30 ) /*0x706b0f*/
    goto LABEL_81; /*0x706b0f*/
  if ( v30 ) /*0x706b13*/
  {
    v31 = (int)v8[2]; /*0x706b1c*/
    if ( v30 < 0 ) /*0x706b20*/
      return result; /*0x706b20*/
  }
  else
  {
    v31 = 10; /*0x706b15*/
  }
  v32 = v31 + v30; /*0x706b26*/
  result = __2_YAPAXI_Z(8 * v32); /*0x706b30*/
  v33 = result; /*0x706b35*/
  if ( result ) /*0x706b3c*/
  {
    v34 = (int)v8[1]; /*0x706b3e*/
    v35 = 0; /*0x706b42*/
    v54 = v32 - 1; /*0x706b44*/
    if ( v34 > 0 ) /*0x706b4a*/
    {
      do /*0x706b6b*/
      {
        v36 = 8 * v35; /*0x706b4e*/
        v37 = (_DWORD *)(*(_DWORD *)v8 + 8 * v35++); /*0x706b57*/
        *(_DWORD *)(v36 + v33) = *v37; /*0x706b5c*/
        *(_DWORD *)(v36 + v33 + 4) = v37[1]; /*0x706b62*/
      }
      while ( v35 < *(_DWORD *)&v8[1] ); /*0x706b6b*/
    }
    __3_YAXPAX_Z(*(void **)v8); /*0x706b70*/
    v38 = v8[2]; /*0x706b75*/
    *v8 = (SortedStateVector)v33; /*0x706b7d*/
    v8[2] = (SortedStateVector)(v31 + *(_DWORD *)&v38); /*0x706b7f*/
    v8[4] = 0; /*0x706b82*/
LABEL_81:
    *(_DWORD *)(*(_DWORD *)v8 + 8 * *(_DWORD *)&v8[1]) = v48; /*0x706b89*/
    *(_DWORD *)(*(_DWORD *)v8 + 8 * *(_DWORD *)&v8[1] + 4) = appended; /*0x706b9e*/
    goto LABEL_82; /*0x706b9e*/
  }
  return result; /*0x70686b*/
}



// ==== 0x00706BD0  ObjectClass::QueueTechnoVoiceLine  this=ObjectClass  sig=csp ====
int __thiscall QueueTechnoVoiceLine(
        TechnoClass *this,
        _BYTE **a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        unsigned __int8 a9,
        int a10,
        int a11,
        int a12)
{
  int result; // eax
  int v14; // ebx
  size_t v15; // ecx
  _DWORD *v16; // eax
  int v17; // edx
  void *v18; // ecx
  int v19; // eax
  __int16 **v20; // eax
  __int16 *v21; // eax
  int *v22; // eax
  int appended; // esi
  int v24; // eax
  int v25; // ebx
  int v26; // esi
  int i; // ecx
  int v28; // eax
  _DWORD *v29; // edx
  int v30; // eax
  TechnoClass *v31; // edi
  int v32; // eax
  int *v33; // eax
  int v34; // eax
  int v35; // eax
  int v37; // [esp+14h] [ebp-38h] BYREF
  int v38[6]; // [esp+1Ch] [ebp-30h] BYREF
  _BYTE v39[24]; // [esp+34h] [ebp-18h] BYREF
  int v40; // [esp+6Ch] [ebp+20h]

  result = this->cloakState; /*0x706bdd*/
  if ( result ) /*0x706be5*/
    return result; /*0x706be5*/
  result = (*(int (__thiscall **)(TechnoClass *))(this->vtable0 + 132))(this); /*0x706bed*/
  if ( *(_BYTE *)(result + 3480) || **a2 ) /*0x706c07*/
    return result; /*0x706c0a*/
  v14 = a4; /*0x706c10*/
  if ( a4 == -1 ) /*0x706c1b*/
  {
LABEL_21:
    result = (int)RenderTechnoOverlaySHP(this, v39, (int)a2, a8, a7, (_DWORD *)a6, a3, 8193, v14 != -1, a10, a11, a12); /*0x706ced*/
    qmemcpy(v38, (const void *)result, sizeof(v38)); /*0x706d3a*/
    if ( v14 == -1 ) /*0x706d3c*/
      return result; /*0x706d3c*/
    v22 = Miles::DriverGet(); /*0x706d47*/
    appended = Buffer::AppendCellData(&stru_887460, v22, (int)v38); /*0x706d57*/
    v40 = appended; /*0x706d5b*/
    if ( !appended ) /*0x706d5f*/
      goto LABEL_34; /*0x706d5f*/
    v24 = *(_DWORD *)(a5 + 8); /*0x706d68*/
    if ( *(_DWORD *)(a5 + 4) + 1 <= v24 ) /*0x706d6e*/
    {
LABEL_31:
      v31 = this; /*0x706df8*/
      *(_DWORD *)(*(_DWORD *)a5 + 8 * *(_DWORD *)(a5 + 4)) = v14; /*0x706e02*/
      *(_DWORD *)(*(_DWORD *)a5 + 8 * *(_DWORD *)(a5 + 4) + 4) = appended; /*0x706e0b*/
      v32 = *(_DWORD *)(a5 + 4) + 1; /*0x706e12*/
      *(_BYTE *)(a5 + 12) = 0; /*0x706e13*/
      *(_DWORD *)(a5 + 4) = v32; /*0x706e17*/
      return QueueTechnoVoiceLine(v31, a2, a3, v14, a5, a6, a7, a8, 0, 0, 0, 0); /*0x706ebf*/
    }
    if ( v24 ) /*0x706d76*/
    {
      v25 = *(_DWORD *)(a5 + 8); /*0x706d7f*/
      if ( v24 < 0 ) /*0x706d83*/
      {
        v14 = a4; /*0x706e26*/
        goto LABEL_34; /*0x706e26*/
      }
    }
    else
    {
      v25 = 10; /*0x706d78*/
    }
    v26 = __2_YAPAXI_Z(8 * (v24 + v25)); /*0x706d99*/
    if ( v26 ) /*0x706da0*/
    {
      for ( i = 0; i < *(_DWORD *)(a5 + 4); *(_DWORD *)(v28 + v26 + 4) = v29[1] ) /*0x706dae*/
      {
        v28 = 8 * i; /*0x706db3*/
        v29 = (_DWORD *)(*(_DWORD *)a5 + 8 * i++); /*0x706dbc*/
        *(_DWORD *)(v28 + v26) = *v29; /*0x706dc1*/
      }
      __3_YAXPAX_Z(*(void **)a5); /*0x706dd6*/
      v30 = v25 + *(_DWORD *)(a5 + 8); /*0x706de1*/
      v14 = a4; /*0x706de3*/
      *(_DWORD *)a5 = v26; /*0x706de7*/
      appended = v40; /*0x706dea*/
      *(_DWORD *)(a5 + 8) = v30; /*0x706dee*/
      *(_DWORD *)(a5 + 16) = 0; /*0x706df1*/
      goto LABEL_31; /*0x706df1*/
    }
    v14 = a4; /*0x706e1c*/
    appended = v40; /*0x706e20*/
LABEL_34:
    v31 = this; /*0x706e2a*/
    (*(void (__thiscall **)(TechnoClass *))(this->vtable0 + 136))(this); /*0x706e32*/
    TechnoClass::ClearArrays(); /*0x706e38*/
    if ( !appended ) /*0x706e3f*/
    {
      v33 = Miles::DriverGet(); /*0x706e46*/
      appended = Buffer::AppendCellData(&stru_887460, v33, (int)v38); /*0x706e5a*/
    }
    v34 = *(_DWORD *)(a5 + 8); /*0x706e5f*/
    if ( *(_DWORD *)(a5 + 4) + 1 <= v34 ) /*0x706e65*/
      goto LABEL_40; /*0x706e65*/
    if ( !v34 ) /*0x706e69*/
      v34 = 10; /*0x706e6b*/
    if ( Object_Helper_710750(a5, v34) ) /*0x706e73*/
    {
LABEL_40:
      *(_DWORD *)(*(_DWORD *)a5 + 8 * *(_DWORD *)(a5 + 4)) = v14; /*0x706e82*/
      *(_DWORD *)(*(_DWORD *)a5 + 8 * *(_DWORD *)(a5 + 4) + 4) = appended; /*0x706e8b*/
      v35 = *(_DWORD *)(a5 + 4) + 1; /*0x706e92*/
      *(_BYTE *)(a5 + 12) = 0; /*0x706e93*/
      *(_DWORD *)(a5 + 4) = v35; /*0x706e97*/
    }
    return QueueTechnoVoiceLine(v31, a2, a3, v14, a5, a6, a7, a8, 0, 0, 0, 0); /*0x706e97*/
  }
  if ( !a5 || *(_BYTE *)((*(int (__thiscall **)(TechnoClass *))(this->vtable0 + 132))(this) + 3519) ) /*0x706c33*/
  {
    a4 = -1; /*0x706ce1*/
    v14 = -1; /*0x706ce9*/
    goto LABEL_21; /*0x706ce9*/
  }
  v15 = *(_DWORD *)(a5 + 4); /*0x706c41*/
  if ( v15 ) /*0x706c46*/
  {
    v16 = *(_DWORD **)(a5 + 16); /*0x706c48*/
    if ( v16 && *v16 == a4 ) /*0x706c51*/
      goto LABEL_14; /*0x706c51*/
    if ( !*(_BYTE *)(a5 + 12) ) /*0x706c53*/
    {
      qsort(*(void **)a5, v15, 8u, (_CoreCrtNonSecureSearchSortCompareFunction)sub_710860); /*0x706c66*/
      *(_DWORD *)(a5 + 16) = 0; /*0x706c6e*/
      *(_BYTE *)(a5 + 12) = 1; /*0x706c75*/
    }
    v17 = *(_DWORD *)(a5 + 4); /*0x706c79*/
    v18 = *(void **)a5; /*0x706c81*/
    v37 = a4; /*0x706c84*/
    v19 = Object_Helper_710890((int)v18, v17, &v37); /*0x706c88*/
    if ( v19 ) /*0x706c8f*/
    {
      *(_DWORD *)(a5 + 16) = v19; /*0x706c91*/
LABEL_14:
      v20 = (__int16 **)(*(_DWORD *)(a5 + 16) + 4); /*0x706c94*/
      goto LABEL_16; /*0x706c9a*/
    }
  }
  v20 = (__int16 **)&unk_B78824; /*0x706c9c*/
LABEL_16:
  v21 = *v20; /*0x706ca1*/
  if ( v21 ) /*0x706ca5*/
  {
    Surface::BlitTechnoTo((Surface *)this, v21, (_DWORD *)a7, (_DWORD *)a6, 8193, 1000, 0); /*0x706cc0*/
    return result; /*0x706ccc*/
  }
  result = a9; /*0x706ccf*/
  if ( a9 ) /*0x706cd5*/
    goto LABEL_21; /*0x706cd5*/
  return result; /*0x706cc5*/
}



// ==== 0x00706ED0  RenderTechnoClassVoxel  this=-  sig=csp ====
void *__fastcall RenderTechnoClassVoxel(
        int *a1,
        int a2,
        void *a3,
        _DWORD *a4,
        const void *a5,
        int a6,
        int *a7,
        unsigned int a8,
        int a9,
        int a10,
        int a11)
{
  int v12; // eax
  _DWORD *v13; // esi
  _DWORD *v14; // edi
  unsigned int v15; // ebx
  float *v16; // eax
  float *v17; // eax
  int v18; // edx
  int v19; // ebx
  _DWORD *v20; // edi
  __int16 v21; // ax
  IPersistStream v22; // esi
  int *v23; // eax
  unsigned int v24; // ebx
  BuildingClass *v25; // esi
  int v26; // edx
  int v27; // edi
  int v28; // eax
  int v29; // eax
  int v30; // ecx
  int v31; // edx
  int *v32; // eax
  int *SHPFrame; // [esp-18h] [ebp-154h]
  int v35; // [esp-14h] [ebp-150h]
  int v36; // [esp-10h] [ebp-14Ch]
  int v37; // [esp-4h] [ebp-140h]
  Viewport *v38; // [esp+0h] [ebp-13Ch]
  int v39; // [esp+10h] [ebp-12Ch] BYREF
  int v40; // [esp+14h] [ebp-128h]
  int v41; // [esp+18h] [ebp-124h]
  int v42; // [esp+1Ch] [ebp-120h]
  int v43; // [esp+20h] [ebp-11Ch] BYREF
  int v44; // [esp+24h] [ebp-118h]
  int v45; // [esp+28h] [ebp-114h]
  int v46; // [esp+2Ch] [ebp-110h]
  _DWORD *v47; // [esp+30h] [ebp-10Ch]
  _DWORD v48[6]; // [esp+34h] [ebp-108h] BYREF
  float v49[12]; // [esp+4Ch] [ebp-F0h] BYREF
  float v50[12]; // [esp+7Ch] [ebp-C0h] BYREF
  int v51[12]; // [esp+ACh] [ebp-90h] BYREF
  float v52[12]; // [esp+DCh] [ebp-60h] BYREF
  float v53[12]; // [esp+10Ch] [ebp-30h] BYREF

  qmemcpy(v50, a5, sizeof(v50)); /*0x706eeb*/
  v12 = *a1; /*0x706ef4*/
  qmemcpy(v51, a5, sizeof(v51)); /*0x706efe*/
  if ( *(_BYTE *)((*(int (__thiscall **)(int *))(v12 + 132))(a1) + 3500) ) /*0x706f08*/
    dword_B43180 = 1; /*0x706f12*/
  v14 = (_DWORD *)a4[1]; /*0x706f36*/
  v47 = (_DWORD *)*a4; /*0x706f45*/
  v13 = v47; /*0x706f34*/
  v39 = (int)v14; /*0x706f49*/
  Audio_Render(v47, 0, 0, (float *)v51, (float *)stru_887430.m_Data, (float *)&stru_887460.Buffer_field_10, 3.0); /*0x706f4d*/
  Viewport::Clear(v38); /*0x706f52*/
  v15 = 0; /*0x706f5a*/
  if ( v47[1] ) /*0x706f57*/
  {
    do /*0x706fe5*/
    {
      if ( v14 ) /*0x706f66*/
      {
        qmemcpy(v49, (const void *)(v14[3] + 48 * (v15 + v14[1] * (a8 % v14[2]))), sizeof(v49)); /*0x706f92*/
        qmemcpy(v50, MultiplyMatrix3x4(v52, (float *)v51, v49), sizeof(v50)); /*0x706fb3*/
        v13 = v47; /*0x706fb5*/
        v14 = (_DWORD *)v39; /*0x706fb9*/
      }
      v16 = MultiplyMatrix3x4(v53, (float *)stru_887430.m_Data, v50); /*0x706fce*/
      TransformVoxelVertex(v13, v15++, 0, v16); /*0x706fda*/
    }
    while ( v15 < v13[1] ); /*0x706fe5*/
  }
  v17 = Voxel::RenderFrame(v49); /*0x706fef*/
  v18 = *a1; /*0x706ff4*/
  qmemcpy(v48, v17, sizeof(v48)); /*0x707002*/
  if ( (*(unsigned __int8 (__thiscall **)(int *))(v18 + 468))(a1)
    || (*(unsigned __int8 (__thiscall **)(int *))(*a1 + 472))(a1) )
  {
    if ( a1
      && (*(int (__thiscall **)(int *))(*a1 + 44))(a1) == 6
      && *(_BYTE *)(*((*(int (__thiscall **)(int *))(*a1 + 44))(a1) == 6 ? a1 + 328 : (int *)1312) + 5809) )
    {
      v19 = a9 | 6; /*0x70705a*/
    }
    else
    {
      v19 = a9 | 4; /*0x707066*/
    }
  }
  else
  {
    v19 = a9; /*0x70706b*/
  }
  if ( (unsigned __int8)House::IsHumanPlayer((House *)a1[135]) /*0x707086*/
    && (*(unsigned __int8 (__thiscall **)(int *))(*a1 + 196))(a1) )
  {
    v19 = (*(int (__thiscall **)(int *, int))(*a1 + 1084))(a1, v19); /*0x70709c*/
  }
  v20 = (_DWORD *)a6; /*0x7070a5*/
  v43 = *a7; /*0x7070ae*/
  v44 = a7[1]; /*0x7070b5*/
  v45 = a7[2]; /*0x7070bc*/
  v46 = a7[3]; /*0x7070c9*/
  if ( g_DSurface_Hidden_2 != (AudioStream *)dword_B1D13C ) /*0x7070d4*/
  {
    v21 = *((_WORD *)a1 + 485); /*0x7070da*/
    if ( v21 <= 0 ) /*0x7070e6*/
    {
      if ( *((_BYTE *)a1 + 973) ) /*0x707140*/
        *((_WORD *)a1 + 485) = LOWORD(v48[5]) /*0x707166*/
                             + LOWORD(v48[1])
                             + *(_WORD *)(a6 + 4)
                             + *(_WORD *)g_TacticalClass_Instance[45].__tail_0;
    }
    else
    {
      v22 = g_TacticalClass_Instance[45]; /*0x7070f2*/
      v39 = 0; /*0x707100*/
      v42 = v21 - *(_DWORD *)&v22; /*0x707104*/
      v40 = 0; /*0x70710c*/
      v41 = *(_DWORD *)DSurface_ViewBounds.__pad_8; /*0x707110*/
      v23 = ClipRectIntersection(v49, &v43, &v39, 0, 0); /*0x70711e*/
      v43 = *v23; /*0x707125*/
      v44 = v23[1]; /*0x70712c*/
      v45 = v23[2]; /*0x707133*/
      v46 = v23[3]; /*0x70713a*/
    }
  }
  v24 = v19 & 0xFFFFFFEF; /*0x707172*/
  if ( (*(int (__thiscall **)(int *))(*a1 + 44))(a1) == 1 && *((_BYTE *)a1 + 1747) ) /*0x70717d*/
    v25 = dword_B1D140; /*0x707187*/
  else
    v25 = (BuildingClass *)(*(int (__thiscall **)(int *))(*a1 + 484))(a1); /*0x70719a*/
  v26 = 0; /*0x70719c*/
  if ( (v24 & 8) != 0 ) /*0x7071a1*/
  {
    v27 = (*(int (__stdcall **)(int *))(a1[1] + 16))(a1 + 1); /*0x7071b3*/
    LOWORD(v28) = Math::RoundToInt(*((float *)a1 + 147)); /*0x7071b5*/
    v29 = v27 + v28; /*0x7071ba*/
    v20 = (_DWORD *)a6; /*0x7071bc*/
    v26 = v29 % 400; /*0x7071c9*/
  }
  v30 = v20[1]; /*0x7071d3*/
  v37 = v26; /*0x7071da*/
  v39 = v48[0] + *v20; /*0x7071e4*/
  v31 = *a1; /*0x7071f0*/
  v40 = v48[1] + v30; /*0x7071f3*/
  v36 = (*(int (__thiscall **)(int *))(v31 + 752))(a1); /*0x707200*/
  v35 = (*(int (__thiscall **)(int *))(*a1 + 748))(a1); /*0x70720c*/
  SHPFrame = (int *)BuildingClass::GetSHPFrame(v25, v24); /*0x707215*/
  v32 = Miles::DriverGet(); /*0x707227*/
  BlitterDrawSHP( /*0x707235*/
    (int *)g_DSurface_Hidden_2->__pad_0,
    (int)v25,
    v32,
    &v48[2],
    &v39,
    &v43,
    0,
    SHPFrame,
    v35,
    v36,
    a10,
    a11,
    v37);
  if ( *(_BYTE *)((*(int (__thiscall **)(int *))(*a1 + 132))(a1) + 3500) ) /*0x707245*/
    dword_B43180 = 0; /*0x70724f*/
  qmemcpy(a3, v48, 0x18u); /*0x70726b*/
  return a3; /*0x70726d*/
}



// ==== 0x00707280  ObjectClass::RenderTechnoOverlaySHP  this=TechnoClass  sig=csp ====
void *__thiscall RenderTechnoOverlaySHP(
        ObjectClass *this,
        void *a2,
        int a3,
        int a4,
        int a5,
        _DWORD *a6,
        int a7,
        int a8,
        char a9,
        int a10,
        int a11,
        int a12)
{
  float *v13; // eax
  int (__thiscall **vtable0)(ObjectClass *); // edx
  float *v15; // eax
  int *v16; // eax
  int (__thiscall **v17)(ObjectClass *); // edx
  int v18; // eax
  int v19; // eax
  int *v20; // eax
  int *SHPFrame; // [esp-18h] [ebp-100h]
  int v23; // [esp-14h] [ebp-FCh]
  Viewport *v24; // [esp+0h] [ebp-E8h]
  int v25; // [esp+Ch] [ebp-DCh]
  _DWORD v26[6]; // [esp+10h] [ebp-D8h] BYREF
  int v27[12]; // [esp+28h] [ebp-C0h] BYREF
  Matrix3x4 v28; // [esp+58h] [ebp-90h] BYREF
  float v29[12]; // [esp+88h] [ebp-60h] BYREF
  float v30[12]; // [esp+B8h] [ebp-30h] BYREF

  qmemcpy( /*0x7072ca*/
    v27,
    (const void *)(*(_DWORD *)(*(_DWORD *)(a3 + 4) + 12)
                 + 48 * (a7 + *(_DWORD *)(*(_DWORD *)(a3 + 4) + 4) * (0u % *(_DWORD *)(*(_DWORD *)(a3 + 4) + 8)))),
    sizeof(v27));
  v13 = MultiplyMatrix3x4(v30, (float *)a4, (float *)v27); /*0x7072d3*/
  vtable0 = (int (__thiscall **)(ObjectClass *))this->AbstractClass; /*0x7072d8*/
  qmemcpy(v29, v13, sizeof(v29)); /*0x7072e8*/
  if ( *(_BYTE *)(vtable0[33](this) + 3500) ) /*0x7072f2*/
    dword_B43180 = 1; /*0x7072fc*/
  Matrix3x4::Identity(&v28); /*0x70730a*/
  if ( *(_BYTE *)((*((int (__thiscall **)(ObjectClass *))this->AbstractClass + 33))(this) + 3478) ) /*0x707319*/
    TacticalMap::MultiplyByScalar((float *)v28.m_Data, 0.5); /*0x70732c*/
  Viewport::Clear(v24); /*0x707331*/
  v15 = MultiplyMatrix3x4(v30, (float *)stru_887430.m_Data, (float *)v28.m_Data); /*0x70736c*/
  globalHelper_053F90(*(_DWORD **)a3, a7, 0, v15, v29, (float *)&dword_887420, a10, a11, a12); /*0x70737e*/
  qmemcpy(v26, Voxel::RenderFrame((float *)v27), sizeof(v26)); /*0x7073a0*/
  if ( !a9 ) /*0x7073a2*/
  {
    v16 = Miles::DriverGet(); /*0x7073a8*/
    (*(void (__thiscall **)(int *))(*v16 + 120))(v16); /*0x7073b6*/
    v17 = (int (__thiscall **)(ObjectClass *))this->AbstractClass; /*0x7073d1*/
    v18 = v25 + *(_DWORD *)a4; /*0x7073d3*/
    v27[0] = v26[0] + *(_DWORD *)(a4 + 4); /*0x7073d5*/
    v26[5] = v18; /*0x7073e2*/
    v19 = v17[188](this); /*0x7073e6*/
    v23 = (*((int (__thiscall **)(ObjectClass *, int))this->AbstractClass + 187))(this, v19); /*0x7073fe*/
    SHPFrame = (int *)BuildingClass::GetSHPFrame(*(BuildingClass **)&stru_87F5F0.__pad_58[124], a8); /*0x707412*/
    v20 = Miles::DriverGet(); /*0x707420*/
    BlitterDrawSHP( /*0x707432*/
      (int *)g_DSurface_Hidden_2->__pad_0,
      *(int *)&stru_87F5F0.__pad_58[124],
      v20,
      &v26[2],
      v27,
      a6,
      0,
      SHPFrame,
      v23,
      1000,
      0,
      0,
      (int)v27);
  }
  if ( *(_BYTE *)((*((int (__thiscall **)(ObjectClass *))this->AbstractClass + 33))(this) + 3500) ) /*0x707441*/
    dword_B43180 = 1; /*0x70744b*/
  qmemcpy(a2, v26, 0x18u); /*0x707467*/
  return a2; /*0x707469*/
}



// ==== 0x00707480  Surface::BlitTechnoTo  this=Surface  sig=csp ====
void __thiscall Surface::BlitTechnoTo(Surface *this, __int16 *a2, _DWORD *a3, _DWORD *a4, int a5, int a6, int a7)
{
  unsigned __int16 v8; // bp
  unsigned __int16 v9; // bx
  int v11; // edx
  unsigned int v12; // ebx
  LightConvertClass *v13; // eax
  int v14; // ebx
  int v15; // eax
  int v16; // eax
  int v17; // edx
  int v18; // ebp
  int v19; // ecx
  int v20; // ebx
  int v21; // ebp
  int v22; // ecx
  int v23; // ebp
  unsigned __int16 v24; // ax
  int v25; // eax
  int v26; // eax
  int v27; // [esp-1Ch] [ebp-7Ch]
  int v28; // [esp+10h] [ebp-50h] BYREF
  int v29; // [esp+14h] [ebp-4Ch]
  int v30; // [esp+18h] [ebp-48h]
  int v31; // [esp+1Ch] [ebp-44h]
  int v32; // [esp+20h] [ebp-40h] BYREF
  int v33; // [esp+24h] [ebp-3Ch]
  int Width; // [esp+28h] [ebp-38h]
  int Height; // [esp+2Ch] [ebp-34h]
  int v36[4]; // [esp+30h] [ebp-30h] BYREF
  Surface v37; // [esp+40h] [ebp-20h] BYREF
  int v38; // [esp+4Ch] [ebp-14h]
  int v39; // [esp+50h] [ebp-10h]
  int v40[3]; // [esp+54h] [ebp-Ch] BYREF
  __int16 *v41; // [esp+64h] [ebp+4h]
  int v42; // [esp+64h] [ebp+4h]
  int *v43; // [esp+70h] [ebp+10h]

  v8 = a2[3]; /*0x70748e*/
  v9 = a2[2]; /*0x707492*/
  v41 = (__int16 *)*((_DWORD *)a2 + 2); /*0x7074a2*/
  Surface::Construct(&v37, v9, v8); /*0x7074a6*/
  v38 = 0; /*0x7074b8*/
  *(_DWORD *)v37.__pad_0 = &XSurface_Vtable; /*0x7074c0*/
  v39 = 1; /*0x7074c8*/
  Buffer::Init((Buffer *)v40, (int)v41, v8 * v9); /*0x7074d0*/
  v11 = *(_DWORD *)this->__pad_0; /*0x7074d9*/
  *(_DWORD *)v37.__pad_0 = &BSurface_Vtable; /*0x7074dd*/
  v12 = a5 & 0xFFFFFFEF; /*0x7074e5*/
  if ( (*(int (__thiscall **)(Surface *))(v11 + 44))(this) == 1 && *((_BYTE *)this + 1747) ) /*0x7074f0*/
    v13 = (LightConvertClass *)dword_B1D140; /*0x7074fa*/
  else
    v13 = (LightConvertClass *)(*(int (__thiscall **)(Surface *))(*(_DWORD *)this->__pad_0 + 484))(this); /*0x707505*/
  v43 = (int *)LightConvertClass::SelectRLEBlitter(v13, v12); /*0x707516*/
  v42 = 0; /*0x70751a*/
  if ( (v12 & 8) != 0 ) /*0x707522*/
  {
    v14 = (*(int (__stdcall **)(int *))(this->Width + 16))(&this->Width); /*0x707534*/
    LOWORD(v15) = Math::RoundToInt(*((float *)this + 147)); /*0x707536*/
    v42 = (v14 + v15) % 400; /*0x707545*/
  }
  if ( (*(int (__thiscall **)(Surface *))(*(_DWORD *)this->__pad_0 + 44))(this) == 1 ) /*0x707557*/
  {
    v16 = *a3 + *a2; /*0x70756b*/
    v17 = a3[1] + a2[1]; /*0x707571*/
    v18 = (unsigned __int16)a2[3]; /*0x707575*/
    v19 = (unsigned __int16)a2[2]; /*0x70757b*/
    v33 = v17; /*0x70757f*/
    Height = (unsigned __int16)v18; /*0x707585*/
    if ( dword_B1CFC8 > 0 && dword_B1CFCC > 0 ) /*0x707597*/
    {
      if ( v19 <= 0 || v18 <= 0 ) /*0x7075a7*/
      {
        v16 = dword_B1CFC0; /*0x70764e*/
        v17 = dword_B1CFC4; /*0x707653*/
        v19 = dword_B1CFC8; /*0x707659*/
        v18 = dword_B1CFCC; /*0x70765f*/
      }
      else
      {
        v20 = dword_B1CFC0; /*0x7075b3*/
        v29 = dword_B1CFC4; /*0x7075b9*/
        v30 = dword_B1CFC8; /*0x7075c3*/
        v28 = dword_B1CFC0; /*0x7075cf*/
        v31 = dword_B1CFCC; /*0x7075d3*/
        if ( dword_B1CFC0 > v16 ) /*0x7075d7*/
        {
          v20 = v16; /*0x7075e1*/
          v30 += dword_B1CFC0 - v16; /*0x7075e3*/
          v28 = v16; /*0x7075e7*/
        }
        if ( v29 > v17 ) /*0x7075f1*/
        {
          v21 = v29 - v17; /*0x7075f7*/
          v29 = v17; /*0x7075fb*/
          v31 += v21; /*0x7075ff*/
          v20 = v28; /*0x707603*/
        }
        if ( v20 + v30 < v19 + v16 ) /*0x707612*/
          v30 = v19 - v20 + v16 + 1; /*0x70761a*/
        v18 = v31; /*0x707626*/
        v17 = v29; /*0x70762d*/
        if ( v29 + v31 < Height + v33 ) /*0x707636*/
          v18 = v33 + Height - v29 + 1; /*0x707642*/
        v19 = v30; /*0x707646*/
        v16 = v20; /*0x70764a*/
      }
    }
    dword_B1CFC0 = v16; /*0x707661*/
    dword_B1CFC4 = v17; /*0x707666*/
    dword_B1CFC8 = v19; /*0x70766c*/
    dword_B1CFCC = v18; /*0x707672*/
  }
  if ( v43 ) /*0x70767e*/
  {
    Width = v37.Width; /*0x70768c*/
    v30 = v37.Width; /*0x707690*/
    Height = v37.Height; /*0x70769a*/
    v31 = v37.Height; /*0x70769e*/
    v22 = *a2; /*0x7076a2*/
    v32 = 0; /*0x7076a5*/
    v33 = 0; /*0x7076a9*/
    v28 = 0; /*0x7076ad*/
    v29 = 0; /*0x7076b1*/
    v23 = a3[1]; /*0x7076bb*/
    v36[0] = *a3 + v22; /*0x7076be*/
    v24 = a2[2]; /*0x7076c8*/
    v36[1] = v23 + a2[1]; /*0x7076ce*/
    v36[2] = v24; /*0x7076d2*/
    v25 = *(_DWORD *)this->__pad_0; /*0x7076e3*/
    v36[3] = (unsigned __int16)a2[3]; /*0x7076e5*/
    v27 = (*(int (__thiscall **)(Surface *))(v25 + 752))(this); /*0x707703*/
    v26 = (*(int (__thiscall **)(Surface *))(*(_DWORD *)this->__pad_0 + 748))(this); /*0x707706*/
    BlitterRLEBlitSHP( /*0x707736*/
      (int)g_DSurface_Hidden_2,
      (CellStruct *)a4,
      v36,
      (int)&v37,
      &v28,
      &v32,
      v43,
      v26,
      v27,
      a6,
      v42,
      0,
      0,
      0,
      a7);
  }
  Vector::Clear((int)v40); /*0x70773f*/
}



// ==== 0x007077C0  ObjectClass::NotifyExpired  this=TechnoClass  sig=csp ====
int __thiscall ObjectClass::NotifyExpired(TechnoClass *this, int *a2, int *a3)
{
  int drainAnim; // ecx
  int drainTarget; // eax
  int v7; // eax
  int transporter; // eax
  int *drainingMe; // edi
  int v10; // ecx
  int v11; // eax
  int v12; // eax
  _DWORD *v13; // eax
  CellClass *v14; // eax
  int v15; // edx
  int v16; // eax
  int v17; // eax
  int v18; // edx
  int *p_fireParticles; // eax
  int v20; // ecx
  ObjectClass *captureManager; // ecx
  UnitClass *spawnManager; // ecx
  ObjectClass *temporalUsing; // ecx
  int airstrike; // ecx
  int *rockerLinkedUnit; // eax
  int locomotorTarget; // eax
  TechnoClass *locomotorSource; // ecx
  int v28; // eax
  int v29; // edx
  int v30; // eax
  int **v31; // ecx
  int v32; // ecx
  int v33; // ecx
  int v34; // eax
  int v35; // eax
  int v36; // ecx
  int v37; // ecx
  int v38; // eax
  int *attackedTargets; // esi
  int result; // eax
  int v41; // ecx
  int v42; // ecx
  _DWORD v43[3]; // [esp+14h] [ebp-Ch] BYREF
  char v44; // [esp+24h] [ebp+4h]

  RadioClass::ExecuteAction(this, (int)a2, (char)a3); /*0x7077d3*/
  if ( (_BYTE)a3 ) /*0x7077e0*/
    FootClass::updateMovementAnimation((FootClass *)this->passengers, (int)a2); /*0x7077e9*/
  v44 = 1; /*0x7077f4*/
  if ( a2 == (int *)this->spawnOwner ) /*0x7077fb*/
    this->spawnOwner = 0; /*0x7077fd*/
  if ( a2 == (int *)this->originalOwnerHouse ) /*0x707809*/
    this->originalOwnerHouse = 0; /*0x70780b*/
  if ( a2 == (int *)this->mindControlledBy_house ) /*0x707817*/
    this->mindControlledBy_house = 0; /*0x707819*/
  if ( a2 == (int *)this->temporalTargetingMe ) /*0x707825*/
    this->temporalTargetingMe = 0; /*0x707827*/
  if ( a2 == (int *)this->airstrike ) /*0x707833*/
    this->airstrike = 0; /*0x707835*/
  if ( a2 == (int *)this->manipulatedByUnit ) /*0x707841*/
    this->manipulatedByUnit = 0; /*0x707843*/
  if ( a2 == (int *)this->bunkerLinkedUnit && dword_A8E7AC ) /*0x707857*/
    this->bunkerLinkedUnit = 0; /*0x707859*/
  if ( a2 == (int *)this->drainTarget ) /*0x707865*/
  {
    drainAnim = this->drainAnim; /*0x707867*/
    if ( drainAnim ) /*0x70786f*/
    {
      (*(void (__thiscall **)(int))(*(_DWORD *)drainAnim + 248))(drainAnim); /*0x707873*/
      this->drainAnim = 0; /*0x707879*/
    }
    drainTarget = this->drainTarget; /*0x70787f*/
    if ( drainTarget ) /*0x707887*/
    {
      *(_DWORD *)(drainTarget + 464) = 0; /*0x707889*/
      v7 = *(_DWORD *)(this->drainTarget + 540); /*0x707895*/
      if ( v7 ) /*0x70789d*/
        *(_BYTE *)(v7 + 22392) = 1; /*0x70789f*/
      this->drainTarget = 0; /*0x7078a6*/
    }
    this->drainTarget = 0; /*0x7078ac*/
  }
  transporter = this->transporter; /*0x7078b2*/
  if ( a2 == (int *)transporter /*0x7078d3*/
    && transporter
    && (!*(_BYTE *)(transporter + 144) || !*(_DWORD *)(transporter + 108) || dword_A8E7AC) )
  {
    this->transporter = 0; /*0x7078d5*/
  }
  drainingMe = (int *)this->drainingMe; /*0x7078db*/
  if ( a2 == drainingMe ) /*0x7078e3*/
  {
    v10 = drainingMe[117]; /*0x7078e5*/
    if ( v10 ) /*0x7078ed*/
    {
      (*(void (__thiscall **)(int))(*(_DWORD *)v10 + 248))(v10); /*0x7078f1*/
      drainingMe[117] = 0; /*0x7078f7*/
    }
    v11 = drainingMe[115]; /*0x7078fd*/
    if ( v11 ) /*0x707905*/
    {
      *(_DWORD *)(v11 + 464) = 0; /*0x707907*/
      v12 = *(_DWORD *)(drainingMe[115] + 540); /*0x707913*/
      if ( v12 ) /*0x70791b*/
        *(_BYTE *)(v12 + 22392) = 1; /*0x70791d*/
      drainingMe[115] = 0; /*0x707924*/
    }
    this->drainingMe = 0; /*0x70792a*/
  }
  if ( a2 == (int *)this->drainAnim ) /*0x707936*/
    this->drainAnim = 0; /*0x707938*/
  if ( a2 == (int *)this->mindControlRingAnim ) /*0x707944*/
    this->mindControlRingAnim = 0; /*0x707946*/
  if ( a2 == (int *)this->deployAnim ) /*0x707952*/
    this->deployAnim = 0; /*0x707954*/
  if ( !(_BYTE)a3 ) /*0x70795e*/
  {
    if ( a2 ) /*0x707962*/
    {
      if ( (a2[5] & 1) != 0 ) /*0x70796e*/
      {
        v13 = (_DWORD *)(*(int (__thiscall **)(int *, _DWORD *))(*a2 + 72))(a2, v43); /*0x70797a*/
        v14 = Coord::To_Cell((Coord *)&dword_87F7E8, v13); /*0x707983*/
        if ( (unsigned __int8)Cell::IsPassableOffset((Cell *)v14, *(_DWORD *)(this->owner + 48)) ) /*0x707994*/
          v44 = 0; /*0x70799d*/
      }
    }
  }
  if ( (int *)this->target == a2 && v44 && ((_BYTE)a3 || (*(int (__thiscall **)(int *))(*a2 + 60))(a2) != this->owner) ) /*0x7079cb*/
  {
    v15 = this->targetingTimer[0]; /*0x7079d1*/
    v16 = this->targetingTimer[2]; /*0x7079d7*/
    if ( v15 != -1 ) /*0x7079e0*/
    {
      if ( (int)dword_A8ED84 - v15 >= v16 ) /*0x7079ec*/
      {
LABEL_61:
        (*(void (__thiscall **)(TechnoClass *, _DWORD))(this->vtable0 + 968))(this, 0); /*0x707a2e*/
        if ( (*(unsigned __int8 (__thiscall **)(TechnoClass *))(this->vtable0 + 508))(this) ) /*0x707a3d*/
        {
          (*(void (__thiscall **)(TechnoClass *))(this->vtable0 + 504))(this); /*0x707a4b*/
          if ( (*(int (__thiscall **)(TechnoClass *))(this->vtable0 + 44))(this) == 2 && this->currentMission == 25 ) /*0x707a64*/
          {
            this->missionStatus = 0; /*0x707a66*/
            *((_BYTE *)this + 1746) = 0; /*0x707a6c*/
          }
        }
        goto LABEL_65; /*0x707a6c*/
      }
      v16 -= (int)dword_A8ED84 - v15; /*0x7079ee*/
    }
    if ( v16 > 10 && !dword_A8E7AC ) /*0x7079fb*/
    {
      v17 = Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 4, 8); /*0x707a0d*/
      v18 = v43[1]; /*0x707a18*/
      this->targetingTimer[0] = (int)dword_A8ED84; /*0x707a1c*/
      this->targetingTimer[1] = v18; /*0x707a22*/
      this->targetingTimer[2] = v17; /*0x707a28*/
    }
    goto LABEL_61; /*0x707a28*/
  }
LABEL_65:
  if ( (int *)this->lastTarget == a2 && v44 ) /*0x707a7e*/
    this->lastTarget = 0; /*0x707a80*/
  if ( (int *)this->owner == a2 ) /*0x707a8c*/
  {
    this->owner = 0; /*0x707a8e*/
    this->isOwnedByCurrentPlayer[0] = 0; /*0x707a94*/
  }
  if ( (*(unsigned __int8 (__thiscall **)(TechnoClass *))(this->vtable0 + 196))(this) /*0x707ab6*/
    && (int *)(*(int (__thiscall **)(TechnoClass *, int))(this->vtable0 + 208))(this, 1) == a2 )
  {
    (*(void (__thiscall **)(TechnoClass *))(this->vtable0 + 1136))(this); /*0x707abc*/
  }
  p_fireParticles = &this->fireParticles; /*0x707ac2*/
  v20 = 8; /*0x707ac8*/
  do /*0x707ad7*/
  {
    if ( (int *)*p_fireParticles == a2 ) /*0x707acf*/
      *p_fireParticles = 0; /*0x707ad1*/
    ++p_fireParticles; /*0x707ad3*/
    --v20; /*0x707ad6*/
  }
  while ( v20 ); /*0x707ad7*/
  if ( (int *)this->damageParticles_2 == a2 ) /*0x707adf*/
    this->damageParticles_2 = 0; /*0x707ae1*/
  if ( (_BYTE)a3 ) /*0x707aeb*/
  {
    if ( (int *)this->queueUpToEnter == a2 ) /*0x707af3*/
      this->queueUpToEnter = 0; /*0x707af5*/
    if ( (int *)this->focus == a2 ) /*0x707b01*/
      this->focus = 0; /*0x707b03*/
    captureManager = (ObjectClass *)this->captureManager; /*0x707b09*/
    if ( captureManager ) /*0x707b11*/
      ObjectClass::RemoveFromPointerList(captureManager, (int)a2); /*0x707b14*/
  }
  spawnManager = (UnitClass *)this->spawnManager; /*0x707b19*/
  if ( spawnManager ) /*0x707b21*/
    UnitClass::ClearTargetRef(spawnManager, (int)a2); /*0x707b24*/
  temporalUsing = (ObjectClass *)this->temporalUsing; /*0x707b29*/
  if ( temporalUsing ) /*0x707b31*/
    ObjectClass::UnlinkFromFactory(temporalUsing, a2); /*0x707b34*/
  airstrike = this->airstrike; /*0x707b39*/
  if ( airstrike && *(TechnoClass **)(airstrike + 76) == this ) /*0x707b46*/
    ObjectClass::CleanupAirstrikeTarget(airstrike, (int)a2); /*0x707b49*/
  rockerLinkedUnit = (int *)this->rockerLinkedUnit; /*0x707b4e*/
  if ( a2 == rockerLinkedUnit ) /*0x707b56*/
  {
    rockerLinkedUnit[170] = 0; /*0x707b58*/
    this->rockerLinkedUnit = 0; /*0x707b5e*/
  }
  if ( a2 == (int *)this->locomotorTarget ) /*0x707b6a*/
  {
    TechnoClass::EjectPassengers(this, 1); /*0x707b70*/
    locomotorTarget = this->locomotorTarget; /*0x707b75*/
    if ( locomotorTarget ) /*0x707b7d*/
    {
      *(_DWORD *)(locomotorTarget + 688) = 0; /*0x707b7f*/
      this->locomotorTarget = 0; /*0x707b85*/
    }
  }
  locomotorSource = (TechnoClass *)this->locomotorSource; /*0x707b8b*/
  if ( a2 == (int *)locomotorSource ) /*0x707b93*/
  {
    TechnoClass::EjectPassengers(locomotorSource, 1); /*0x707b97*/
    v28 = this->locomotorSource; /*0x707b9c*/
    if ( v28 ) /*0x707ba4*/
    {
      *(_DWORD *)(v28 + 684) = 0; /*0x707ba6*/
      this->locomotorSource = 0; /*0x707bac*/
    }
  }
  if ( a2 == (int *)this->previousTeam ) /*0x707bb8*/
    this->previousTeam = 0; /*0x707bba*/
  if ( a2 == (int *)this->behindAnim ) /*0x707bc6*/
    this->behindAnim = 0; /*0x707bc8*/
  v29 = this->currentTargets[4]; /*0x707bce*/
  v30 = 0; /*0x707bd4*/
  if ( v29 > 0 ) /*0x707bd8*/
  {
    v31 = (int **)this->currentTargets[1]; /*0x707bde*/
    while ( a2 != *v31 ) /*0x707be6*/
    {
      ++v30; /*0x707be8*/
      ++v31; /*0x707be9*/
      if ( v30 >= v29 ) /*0x707bee*/
        goto LABEL_118; /*0x707bee*/
    }
    if ( v30 != -1 ) /*0x707bf5*/
    {
      v32 = this->currentTargetThreatValues[4]; /*0x707bf7*/
      if ( v30 < v32 ) /*0x707bff*/
      {
        v33 = v32 - 1; /*0x707c01*/
        for ( this->currentTargetThreatValues[4] = v33; /*0x707c0a*/
              v30 < this->currentTargetThreatValues[4];
              *(_DWORD *)(this->currentTargetThreatValues[1] + 4 * v30 - 4) = *(_DWORD *)(this->currentTargetThreatValues[1]
                                                                                        + 4 * v30) )
        {
          ++v30; /*0x707c12*/
        }
      }
      v34 = this->currentTargets[0]; /*0x707c24*/
      a3 = a2; /*0x707c34*/
      v35 = (*(int (__thiscall **)(int *, int **))(v34 + 16))(this->currentTargets, &a3); /*0x707c3b*/
      if ( v35 != -1 ) /*0x707c41*/
      {
        v36 = this->currentTargets[4]; /*0x707c43*/
        if ( v35 < v36 ) /*0x707c48*/
        {
          v37 = v36 - 1; /*0x707c4a*/
          for ( this->currentTargets[4] = v37; /*0x707c50*/
                v35 < this->currentTargets[4];
                *(_DWORD *)(this->currentTargets[1] + 4 * v35 - 4) = *(_DWORD *)(this->currentTargets[1] + 4 * v35) )
          {
            ++v35; /*0x707c55*/
          }
        }
      }
    }
  }
LABEL_118:
  v38 = this->attackedTargets[0]; /*0x707c64*/
  attackedTargets = this->attackedTargets; /*0x707c6a*/
  a3 = a2; /*0x707c74*/
  result = (*(int (__thiscall **)(int *, int **))(v38 + 16))(attackedTargets, &a3); /*0x707c7b*/
  if ( result != -1 ) /*0x707c81*/
  {
    v41 = attackedTargets[4]; /*0x707c83*/
    if ( result < v41 ) /*0x707c88*/
    {
      v42 = v41 - 1; /*0x707c8a*/
      for ( attackedTargets[4] = v42; /*0x707c90*/
            result < attackedTargets[4];
            *(_DWORD *)(attackedTargets[1] + 4 * result - 4) = *(_DWORD *)(attackedTargets[1] + 4 * result) )
      {
        ++result; /*0x707c95*/
      }
    }
  }
  return result; /*0x707ca4*/
}



// ==== 0x00707CB0  TechnoClass::CleanupAll  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::CleanupAll(TechnoClass *this, int a2)
{
  int result; // eax
  int DB; // eax
  int *v5; // ecx
  TechnoClass *v6; // eax
  TechnoClass *v7; // esi

  for ( result = this->passengers[1]; result; result = this->passengers[1] ) /*0x707cbb*/
  {
    DB = CCINIClass::GetDB((CCINIClass *)this->passengers); /*0x707ccc*/
    v5 = *(int **)(DB + 1492); /*0x707cd1*/
    if ( v5 ) /*0x707cd9*/
      TeamClass::LiberateMember_Start(v5, DB, 0xFFFFFFFF, 0); /*0x707ce0*/
    v6 = (TechnoClass *)LinkedList::Pop((LinkedList *)this->passengers); /*0x707ce7*/
    v7 = v6; /*0x707cec*/
    if ( v6 ) /*0x707cf0*/
    {
      TechnoClass::CleanupAll(v6, (int)v6); /*0x707cf5*/
      (*((void (__thiscall **)(TechnoClass *, int))v7->RadioClass + 56))(v7, a2); /*0x707cff*/
      (*((void (__thiscall **)(TechnoClass *))v7->RadioClass + 62))(v7); /*0x707d09*/
    }
  }
  return result; /*0x707d1c*/
}



// ==== 0x00707D20  TechnoClass::GetCrew  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::GetCrew(TechnoClass *this)
{
  HouseClass *owner; // ecx
  int sideIndex; // eax
  int v5; // eax
  int v6; // esi
  bool v7; // zf

  if ( !*(_BYTE *)((*((int (__thiscall **)(TechnoClass *))this->RadioClass + 33))(this) + 3277) ) /*0x707d2b*/
    return 0; /*0x707d38*/
  owner = this->owner; /*0x707d39*/
  sideIndex = owner->sideIndex; /*0x707d40*/
  if ( sideIndex ) /*0x707d48*/
  {
    if ( sideIndex == 1 ) /*0x707d5a*/
    {
      v5 = *(_DWORD *)&DSurface_ViewBounds.__pad_FC[324]; /*0x707d5c*/
      v6 = *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 3964); /*0x707d61*/
    }
    else
    {
      v7 = sideIndex == 2; /*0x707d69*/
      v5 = *(_DWORD *)&DSurface_ViewBounds.__pad_FC[324]; /*0x707d6c*/
      if ( v7 ) /*0x707d71*/
        v6 = *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 3968); /*0x707d73*/
      else
        v6 = *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 3948); /*0x707d7b*/
    }
  }
  else
  {
    v5 = *(_DWORD *)&DSurface_ViewBounds.__pad_FC[324]; /*0x707d4a*/
    v6 = *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 3960); /*0x707d4f*/
  }
  if ( *(_DWORD *)(owner->relatedTagsCapacity + 188) == -1 ) /*0x707d8b*/
    return *(_DWORD *)(v5 + 3948); /*0x707dc5*/
  if ( (*((unsigned __int8 (__thiscall **)(TechnoClass *))this->RadioClass + 171))(this) /*0x707db2*/
    && Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, 99) < 15 )
  {
    return *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 3948); /*0x707dc4*/
  }
  return v6; /*0x707d37*/
}



// ==== 0x00707DD0  TechnoClass::ComputeTotalPowerDrain  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::ComputeTotalPowerDrain(TechnoClass *this)
{
  int v2; // ebx
  HouseClass *owner; // ecx
  _DWORD *i; // esi
  int v5; // eax
  int v6; // esi

  v2 = 0; /*0x707dd5*/
  owner = this->owner; /*0x707dd7*/
  if ( *(_BYTE *)(80 * *(_DWORD *)&owner->__pad_13C[72] + *(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 5506) /*0x707e05*/
    || owner->iqLevel2 >= *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 5200) )
  {
    if ( this->passengers[1] ) /*0x707e07*/
    {
      for ( i = (_DWORD *)CCINIClass::GetDB((CCINIClass *)this->passengers); i; v2 += v5 ) /*0x707e20*/
      {
        v5 = (*(int (__thiscall **)(_DWORD *))(*i + 384))(i); /*0x707e26*/
        i = (_DWORD *)i[12]; /*0x707e2c*/
      }
    }
  }
  v6 = (*((int (__thiscall **)(TechnoClass *))this->RadioClass + 33))(this); /*0x707e43*/
  return v2 + (*((int (__thiscall **)(TechnoClass *))this->RadioClass + 176))(this) + *(_DWORD *)(v6 + 1652); /*0x707e55*/
}



// ==== 0x00707E60  TechnoClass::ComputeScanDistance  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::ComputeScanDistance(TechnoClass *this)
{
  int result; // eax
  char v3; // bl
  int v4; // eax
  int v5; // ebx
  int v6; // [esp+10h] [ebp+4h]

  if ( v6 == -1 ) /*0x707e6c*/
    return -1; /*0x707e73*/
  if ( !v6 ) /*0x707e78*/
  {
    v3 = (*((int (__thiscall **)(TechnoClass *))this->RadioClass + 204))(this); /*0x707e88*/
    if ( *(_DWORD *)((*((int (__thiscall **)(TechnoClass *))this->RadioClass + 33))(this) + 1464) && !v3 ) /*0x707ea0*/
      return *(_DWORD *)((*((int (__thiscall **)(TechnoClass *))this->RadioClass + 33))(this) + 1464); /*0x707eb9*/
    return 0; /*0x707ea0*/
  }
  v4 = *(_DWORD *)((*((int (__thiscall **)(TechnoClass *))this->RadioClass + 33))(this) + 1464); /*0x707ec6*/
  if ( !v4 ) /*0x707ece*/
  {
    v5 = (*((int (__thiscall **)(TechnoClass *, int))this->RadioClass + 90))(this, 1); /*0x707ee2*/
    if ( (*((int (__thiscall **)(TechnoClass *, _DWORD))this->RadioClass + 90))(this, 0) <= v5 ) /*0x707eec*/
      v4 = (*((int (__thiscall **)(TechnoClass *, int))this->RadioClass + 90))(this, 1); /*0x707f02*/
    else
      v4 = (*((int (__thiscall **)(TechnoClass *, _DWORD))this->RadioClass + 90))(this, 0); /*0x707ef4*/
  }
  result = 2 * v4; /*0x707f08*/
  if ( v6 == 2 ) /*0x707f0d*/
  {
    if ( result >= 1792 ) /*0x707f14*/
    {
      if ( result > 4096 ) /*0x707f26*/
        return 4096; /*0x707f2a*/
    }
    else
    {
      return 1792; /*0x707f18*/
    }
  }
  else
  {
    if ( result < 0 ) /*0x707f35*/
      return 0; /*0x707f3c*/
    if ( result > 4096 ) /*0x707f44*/
      return 4096; /*0x707f46*/
  }
  return result; /*0x707e70*/
}



// ==== 0x00707F60  TechnoClass::CheckPlacementTileMatch  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::CheckPlacementTileMatch(TechnoClass *this)
{
  int result; // eax
  int v3; // edi
  int *v4; // ecx
  int (__thiscall **vtable0)(TechnoClass *); // edx
  _DWORD *v6; // eax
  int (__thiscall **v7)(TechnoClass *); // edx
  int v8; // ecx
  char v9; // al
  int v10; // [esp-Ch] [ebp-2Ch]
  __int16 v11; // [esp+4h] [ebp-1Ch] BYREF
  int v12; // [esp+8h] [ebp-18h]
  __int16 v13[2]; // [esp+Ch] [ebp-14h] BYREF
  __int16 v14; // [esp+10h] [ebp-10h] BYREF
  char v15; // [esp+14h] [ebp-Ch] BYREF
  int v16; // [esp+1Ch] [ebp-4h]
  int *v17; // [esp+24h] [ebp+4h]
  int v18; // [esp+24h] [ebp+4h]

  result = (*((int (__thiscall **)(TechnoClass *))this->RadioClass + 33))(this); /*0x707f6a*/
  v3 = *(_DWORD *)(result + 1460); /*0x707f70*/
  if ( v3 == -1 /*0x707fa7*/
    || (v4 = v17, result = *v17, *v17 == g_BuildingLoadQueue_Array.?[3])
    && v17[1] == g_BuildingLoadQueue_Array.?[4]
    && v17[2] == g_BuildingLoadQueue_Array.?[5] )
  {
    LOBYTE(result) = 1; /*0x70806d*/
  }
  else
  {
    LOWORD(v18) = result / 256; /*0x707fbb*/
    vtable0 = (int (__thiscall **)(TechnoClass *))this->RadioClass; /*0x707fce*/
    HIWORD(v18) = v4[1] / 256; /*0x707fd3*/
    *(_DWORD *)v13 = v18; /*0x707fdc*/
    v6 = (_DWORD *)vtable0[19](this); /*0x707fe5*/
    LOWORD(v16) = *v6 / 256; /*0x707ff8*/
    v7 = (int (__thiscall **)(TechnoClass *))this->RadioClass; /*0x708009*/
    HIWORD(v16) = v6[1] / 256; /*0x70800e*/
    v12 = v16; /*0x708017*/
    v10 = v7[200](this); /*0x708023*/
    v8 = *((_DWORD *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], &v11) + 80) >> 8; /*0x70803b*/
    LOBYTE(v8) = v8 & 1; /*0x70803e*/
    v9 = (*((int (__thiscall **)(TechnoClass *, _DWORD, int, int))this->RadioClass + 47))(this, 0, v8, v10); /*0x708046*/
    LOBYTE(result) = MapSeed::CheckTileMatch((MapSeed *)&stru_87F5F0.__pad_58[416], &v14, v13, v3, v9, (char)&v15, 0); /*0x70805d*/
  }
  return result; /*0x708062*/
}



// ==== 0x00708080  TechnoClass::EvaluateMission  this=TechnoClass  sig=csp ====
char __thiscall TechnoClass::EvaluateMission(TechnoClass *this, int a2)
{
  int v3; // ebp
  int v4; // eax
  int v5; // edi
  int v6; // edx
  TechnoClass *v7; // esi
  int v8; // edi
  int queuedMission; // eax
  bool v10; // cl
  _DWORD *v11; // eax
  _DWORD *v12; // eax
  char v13; // al
  int v14; // eax
  int v15; // ecx
  int v16; // edi
  int v17; // edx
  int v18; // ebp
  TechnoClass *v19; // esi
  int v20; // edi
  int v21; // eax
  bool v22; // cl
  _DWORD *v23; // eax
  _DWORD *v24; // eax
  char v25; // al
  int v26; // eax
  bool v27; // sf
  int v28; // ecx
  int v29; // edi
  int v30; // edx
  int v31; // edi
  int v32; // esi
  int v33; // edx
  int *v34; // eax
  int v35; // ecx
  int v36; // ebx
  int v37; // ebx
  int v38; // ecx
  int v39; // ebp
  _DWORD *v40; // edi
  _DWORD *v41; // esi
  int v42; // eax
  bool v43; // bl
  int v44; // ebx
  TechnoClass *v45; // ecx
  int v46; // esi
  int v47; // ecx
  _DWORD *v48; // ebx
  int v50; // [esp+46h] [ebp-70h]
  int v51; // [esp+4Ah] [ebp-6Ch]
  int v52; // [esp+4Eh] [ebp-68h]
  int i; // [esp+52h] [ebp-64h]
  int v54; // [esp+52h] [ebp-64h]
  TechnoClass *v55; // [esp+56h] [ebp-60h]
  TechnoClass *v56; // [esp+62h] [ebp-54h]
  __int16 v57[2]; // [esp+66h] [ebp-50h] BYREF
  __int16 v58[2]; // [esp+6Ah] [ebp-4Ch] BYREF
  char v59; // [esp+6Eh] [ebp-48h] BYREF
  char v60[8]; // [esp+72h] [ebp-44h] BYREF
  char v61[4]; // [esp+7Ah] [ebp-3Ch] BYREF
  int v62; // [esp+7Eh] [ebp-38h]
  _DWORD v63[6]; // [esp+86h] [ebp-30h] BYREF
  _DWORD v64[6]; // [esp+9Eh] [ebp-18h] BYREF

  v3 = 0; /*0x70809b*/
  memset(v64, 0, sizeof(v64)); /*0x70809d*/
  memset(v63, 0, sizeof(v63)); /*0x7080a8*/
  v56 = this; /*0x7080ae*/
  v50 = 0; /*0x7080b2*/
  v52 = 0; /*0x7080b6*/
  v4 = (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 704))(a2); /*0x7080ba*/
  v55 = 0; /*0x7080c8*/
  v5 = *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 2840) * v4; /*0x7080cc*/
  v51 = v5; /*0x7080d5*/
  if ( a2 ) /*0x7080d9*/
  {
    LOBYTE(v4) = Object::IsAlliedWithObjectHouse((Object *)this->owner, a2); /*0x7080e6*/
    if ( !(_BYTE)v4 ) /*0x7080ed*/
    {
      LOBYTE(v4) = House::IsCurrentPlayer((House *)this->owner); /*0x7080f9*/
      if ( !(_BYTE)v4 ) /*0x708100*/
      {
        LOBYTE(v4) = *(_BYTE *)(a2 + 129); /*0x708106*/
        if ( !(_BYTE)v4 ) /*0x70810e*/
        {
          if ( *(_DWORD *)&dword_A8B238 /*0x708128*/
            || (LOBYTE(v4) = (*((int (__thiscall **)(TechnoClass *))this->RadioClass + 171))(this), !(_BYTE)v4) )
          {
            if ( (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 44))(a2) == 15 /*0x708144*/
              || (v4 = (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 44))(a2), v4 == 1) )
            {
              v4 = (*((int (__thiscall **)(TechnoClass *))this->RadioClass + 33))(this); /*0x70814e*/
              if ( !*(_BYTE *)(v4 + 562) ) /*0x708154*/
              {
                if ( (*(_BYTE *)(a2 + 20) & 4) == 0 ) /*0x70816f*/
                  goto LABEL_15; /*0x70816f*/
                v6 = *(_DWORD *)(a2 + 1616); /*0x708171*/
                v4 = *(_DWORD *)(a2 + 1624); /*0x708177*/
                if ( v6 != -1 ) /*0x708180*/
                {
                  if ( *(_DWORD *)&stru_A8EB00.?[416] - v6 >= v4 ) /*0x70818c*/
                    goto LABEL_15; /*0x70818c*/
                  v4 -= *(_DWORD *)&stru_A8EB00.?[416] - v6; /*0x70818e*/
                }
                if ( v4 ) /*0x708192*/
                  return v4; /*0x708192*/
LABEL_15:
                globalHelper_0EC250(*(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 5344), (int)this->owner); /*0x708198*/
                for ( i = 0; i < *(int *)&stru_A83D50.__pad_80[40]; ++i ) /*0x7081b9*/
                {
                  if ( v5 <= 0 ) /*0x7081c1*/
                    break; /*0x7081c1*/
                  v7 = *(TechnoClass **)(*(_DWORD *)&stru_A83D50.__pad_80[28] + 4 * i); /*0x7081d1*/
                  if ( v7 ) /*0x7081d6*/
                  {
                    if ( v7->? ) /*0x7081dc*/
                    {
                      v8 = (*((int (__thiscall **)(_DWORD))v7->RadioClass + 14))(*(_DWORD *)(*(_DWORD *)&stru_A83D50.__pad_80[28] /*0x7081f5*/
                                                                                           + 4 * i));
                      if ( v8 == (*((int (__thiscall **)(TechnoClass *))this->RadioClass + 14))(this) ) /*0x7081fc*/
                      {
                        queuedMission = v7[1].?; /*0x708202*/
                        v10 = queuedMission && *(_BYTE *)(*(_DWORD *)(queuedMission + 36) + 246); /*0x708219*/
                        if ( (!queuedMission || v10) /*0x70828b*/
                          && v7->isRecruitableByAlly
                          && (*((unsigned __int8 (__thiscall **)(TechnoClass *))v7->RadioClass + 171))(v7)
                          && v7->isRecruitableByEnemy
                          && (MissionClass::GetMissionControl((MissionClass *)v7)[6] || *(_DWORD *)&dword_A8B238)
                          && (*((int (__thiscall **)(TechnoClass *, int, _DWORD))v7->RadioClass + 239))(v7, a2, 0) != 5 )
                        {
                          v11 = (_DWORD *)(*((int (__thiscall **)(TechnoClass *))this->RadioClass + 19))(this); /*0x70829c*/
                          LOWORD(i) = *v11 / 256; /*0x7082b1*/
                          HIWORD(i) = v11[1] / 256; /*0x7082c7*/
                          v12 = (_DWORD *)(*((int (__thiscall **)(TechnoClass *, char *, _DWORD))v7->RadioClass + 19))( /*0x7082db*/
                                            v7,
                                            v60,
                                            0);
                          LOWORD(v55) = *v12 / 256; /*0x7082f4*/
                          HIWORD(v55) = v12[1] / 256; /*0x70830a*/
                          v56 = v55; /*0x708313*/
                          v13 = (*((int (__thiscall **)(TechnoClass *, _DWORD, _DWORD, _DWORD))v7->RadioClass + 47))( /*0x708319*/
                                  v7,
                                  0,
                                  0,
                                  0);
                          if ( MapSeed::CheckTileMatch( /*0x70833c*/
                                 (MapSeed *)&stru_87F5F0.__pad_58[416],
                                 v58,
                                 v57,
                                 *(_DWORD *)(v7[1].ironTintTimer[1] + 1460),
                                 v13,
                                 (char)&v59,
                                 0) )
                          {
                            v14 = TechnoClass::ComputeThreatLevel(v7, a2); /*0x708348*/
                            if ( v14 ) /*0x70834f*/
                            {
                              if ( (TechnoClass *)this->focus == this ) /*0x708357*/
                                v14 *= 100; /*0x70835f*/
                              if ( v14 >= 0 ) /*0x708364*/
                              {
                                if ( v3 >= 6 ) /*0x70836f*/
                                {
                                  if ( v14 > v52 ) /*0x70838b*/
                                  {
                                    v15 = 0; /*0x70838d*/
                                    v16 = v14; /*0x70838f*/
                                    do /*0x7083b6*/
                                    {
                                      v17 = v63[v15]; /*0x708395*/
                                      if ( v17 == v52 ) /*0x70839d*/
                                      {
                                        v63[v15] = v14; /*0x70839f*/
                                        v64[v15] = v7; /*0x7083a3*/
                                      }
                                      else if ( v17 < v16 ) /*0x7083ab*/
                                      {
                                        v16 = v63[v15]; /*0x7083ad*/
                                      }
                                      ++v15; /*0x7083b3*/
                                    }
                                    while ( v15 < v50 ); /*0x7083b6*/
                                    v52 = v16; /*0x7083b8*/
                                  }
                                }
                                else
                                {
                                  v64[v3] = v7; /*0x708375*/
                                  v63[v3] = v14; /*0x70837a*/
                                  ++v50; /*0x70837e*/
                                  ++v3; /*0x708382*/
                                }
                              }
                              else
                              {
                                v51 += v14; /*0x708366*/
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                  v5 = v51; /*0x7083c6*/
                }
                v54 = 0; /*0x7083de*/
                if ( FootClass_Array.?[2] <= 0 ) /*0x7083e4*/
                {
LABEL_89:
                  if ( v5 > 0 ) /*0x708641*/
                  {
                    if ( v50 - 1 > 0 ) /*0x708650*/
                    {
                      v31 = 1; /*0x708652*/
                      v32 = 0; /*0x708657*/
                      do /*0x7086ad*/
                      {
                        v33 = v31; /*0x70865d*/
                        if ( v31 < v50 ) /*0x708661*/
                        {
                          v34 = &v63[v32]; /*0x708663*/
                          do /*0x7086a2*/
                          {
                            v35 = v63[v33]; /*0x708667*/
                            if ( *v34 < v35 ) /*0x70866f*/
                            {
                              v36 = v35 ^ *v34; /*0x708673*/
                              *v34 = v36; /*0x708675*/
                              v37 = v36 ^ v63[v33]; /*0x70867d*/
                              v63[v33] = v37; /*0x70867f*/
                              v38 = v64[v32]; /*0x708689*/
                              *v34 ^= v37; /*0x70868d*/
                              v64[v32] = v64[v33]; /*0x708693*/
                              v64[v33] = v38; /*0x708697*/
                            }
                            ++v33; /*0x70869f*/
                          }
                          while ( v33 < v50 ); /*0x7086a2*/
                        }
                        ++v31; /*0x7086a4*/
                        ++v32; /*0x7086a5*/
                      }
                      while ( v31 - 1 < v50 - 1 ); /*0x7086ad*/
                    }
                    v39 = 0; /*0x7086b3*/
                    if ( v50 > 0 ) /*0x7086b7*/
                    {
                      v40 = v64; /*0x7086bd*/
                      while ( 1 ) /*0x7086c1*/
                      {
                        v41 = (_DWORD *)*v40; /*0x7086c1*/
                        v42 = *(_DWORD *)(*v40 + 1492); /*0x7086c3*/
                        v43 = v42 && *(_BYTE *)(*(_DWORD *)(v42 + 36) + 246); /*0x7086da*/
                        if ( Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, 99) >= 66 || v43 ) /*0x7086fc*/
                          (*(void (__thiscall **)(_DWORD *, int, _DWORD))(*v41 + 488))(v41, 11, 0); /*0x70870e*/
                        else
                          (*(void (__thiscall **)(_DWORD *, int, _DWORD))(*v41 + 488))(v41, 21, 0); /*0x708704*/
                        v44 = a2; /*0x708718*/
                        v41[134] = v56; /*0x70871f*/
                        (*(void (__thiscall **)(_DWORD *, int))(*v41 + 968))(v41, a2); /*0x70872a*/
                        v45 = (TechnoClass *)((char *)v55 + (*(int (__thiscall **)(_DWORD *))(*v41 + 704))(v41)); /*0x70873e*/
                        LOBYTE(v4) = v51; /*0x708740*/
                        v55 = v45; /*0x708746*/
                        if ( (int)v45 > v51 ) /*0x70874a*/
                          break; /*0x70874a*/
                        ++v39; /*0x708750*/
                        ++v40; /*0x708751*/
                        if ( v39 >= v50 ) /*0x708756*/
                          goto LABEL_110; /*0x708756*/
                      }
LABEL_112:
                      if ( (*(_BYTE *)(v44 + 20) & 4) != 0 ) /*0x70877c*/
                      {
                        v46 = *(_DWORD *)&stru_A8EB00.?[416]; /*0x708783*/
                        LOWORD(v4) = Math::RoundToInt(*(double *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 5336) * 900.0); /*0x708795*/
                        v47 = v62; /*0x70879a*/
                        v48 = (_DWORD *)(v44 + 1616); /*0x70879e*/
                        *v48 = v46; /*0x7087a4*/
                        v48[1] = v47; /*0x7087a6*/
                        v48[2] = v4; /*0x7087a9*/
                      }
                      return v4; /*0x7087a9*/
                    }
                  }
                }
                else
                {
                  v18 = v50; /*0x7083ee*/
                  while ( v5 > 0 ) /*0x7083f7*/
                  {
                    v19 = *(TechnoClass **)(FootClass_Array.? + 4 * v54); /*0x708407*/
                    if ( v19 ) /*0x70840c*/
                    {
                      if ( v19->? ) /*0x708412*/
                      {
                        v20 = (*((int (__thiscall **)(_DWORD))v19->RadioClass + 14))(*(_DWORD *)(FootClass_Array.? /*0x708427*/
                                                                                               + 4 * v54));
                        if ( v20 == (*((int (__thiscall **)(TechnoClass *))this->RadioClass + 14))(this) ) /*0x708432*/
                        {
                          v21 = v19[1].?; /*0x708438*/
                          v22 = v21 && *(_BYTE *)(*(_DWORD *)(v21 + 36) + 246); /*0x70844f*/
                          if ( (!v21 || v22) /*0x7084db*/
                            && v19->isRecruitableByAlly
                            && (*((unsigned __int8 (__thiscall **)(TechnoClass *))v19->RadioClass + 171))(v19)
                            && v19->isRecruitableByEnemy
                            && (MissionClass::GetMissionControl((MissionClass *)v19)[6] || *(_DWORD *)&dword_A8B238)
                            && (*((int (__thiscall **)(TechnoClass *, int, _DWORD))v19->RadioClass + 239))(v19, a2, 0) != 5
                            && !*(_BYTE *)(v19[1].ironTintTimer[2] + 1516)
                            && !v19->bunkerLinkedUnit )
                          {
                            v23 = (_DWORD *)(*((int (__thiscall **)(TechnoClass *))this->RadioClass + 19))(this); /*0x7084f4*/
                            LOWORD(v55) = *v23 / 256; /*0x708509*/
                            HIWORD(v55) = v23[1] / 256; /*0x70851f*/
                            v56 = v55; /*0x70852c*/
                            v24 = (_DWORD *)(*((int (__thiscall **)(TechnoClass *, __int16 *, _DWORD))v19->RadioClass /*0x708533*/
                                             + 19))(
                                              v19,
                                              v57,
                                              0);
                            LOWORD(v54) = *v24 / 256; /*0x70854c*/
                            HIWORD(v54) = v24[1] / 256; /*0x708562*/
                            v25 = (*((int (__thiscall **)(TechnoClass *, _DWORD, _DWORD, _DWORD))v19->RadioClass + 47))( /*0x708571*/
                                    v19,
                                    0,
                                    0,
                                    0);
                            if ( MapSeed::CheckTileMatch( /*0x708594*/
                                   (MapSeed *)&stru_87F5F0.__pad_58[416],
                                   v57,
                                   v58,
                                   *(_DWORD *)(v19[1].ironTintTimer[2] + 1460),
                                   v25,
                                   (char)v61,
                                   0) )
                            {
                              v26 = TechnoClass::ComputeThreatLevel(v19, a2); /*0x7085a4*/
                              if ( v26 ) /*0x7085ab*/
                              {
                                if ( !this->slaveOwner ) /*0x7085ad*/
                                {
                                  v27 = v26 < 0; /*0x7085b7*/
                                  if ( v26 > 0 ) /*0x7085b9*/
                                  {
                                    if ( (TechnoClass *)this->focus == this ) /*0x7085c1*/
                                      v26 *= 10; /*0x7085c6*/
                                    v27 = v26 < 0; /*0x7085c8*/
                                  }
                                  if ( v27 ) /*0x7085ca*/
                                  {
                                    v51 += v26; /*0x7085cc*/
                                  }
                                  else if ( v18 >= 6 ) /*0x7085d5*/
                                  {
                                    if ( v26 > v52 ) /*0x7085f1*/
                                    {
                                      v28 = 0; /*0x7085f3*/
                                      v29 = v26; /*0x7085f5*/
                                      do /*0x70861c*/
                                      {
                                        v30 = v63[v28]; /*0x7085fb*/
                                        if ( v30 == v52 ) /*0x708603*/
                                        {
                                          v63[v28] = v26; /*0x708605*/
                                          v64[v28] = v19; /*0x708609*/
                                        }
                                        else if ( v30 < v29 ) /*0x708611*/
                                        {
                                          v29 = v63[v28]; /*0x708613*/
                                        }
                                        ++v28; /*0x708619*/
                                      }
                                      while ( v28 < v50 ); /*0x70861c*/
                                      v52 = v29; /*0x70861e*/
                                    }
                                  }
                                  else
                                  {
                                    v64[v18] = v19; /*0x7085db*/
                                    v63[v18] = v26; /*0x7085e0*/
                                    ++v50; /*0x7085e4*/
                                    ++v18; /*0x7085e8*/
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                    v5 = v51; /*0x70862c*/
                    if ( ++v54 >= FootClass_Array.?[2] ) /*0x708637*/
                      goto LABEL_89; /*0x708637*/
                  }
                }
LABEL_110:
                LOBYTE(v4) = (_BYTE)v55; /*0x70875c*/
                if ( (int)v55 <= v51 ) /*0x708766*/
                  return v4; /*0x708766*/
                v44 = a2; /*0x708768*/
                goto LABEL_112; /*0x708768*/
              }
            }
          }
        }
      }
    }
  }
  return v4; /*0x7087ac*/
}



// ==== 0x007087C0  ObjectClass::ValidateAttackTarget  this=AbstractClass  sig=csp ====
bool __thiscall ValidateAttackTarget(int this, int *a2, int a3)
{
  CaptureManagerClass *v4; // ecx
  int v5; // edi
  int v6; // ebx
  int v7; // eax
  int v8; // edi
  int v9; // eax
  int v10; // eax
  int v11; // eax
  int v12; // eax
  int v13; // esi
  double v15; // [esp+10h] [ebp-8h]

  if ( !a2 /*0x708817*/
    || !*(_BYTE *)((*(int (__thiscall **)(int))(this->alignmentPadding)(this) + 3482)
    || *(_DWORD *)(this + 732)
    || *(_DWORD *)(this + 728)
    || *(_DWORD *)(this + 460) && !*(_BYTE *)(*(_DWORD *)(this + 540) + 492) )
  {
    return 0; /*0x708817*/
  }
  v4 = *(CaptureManagerClass **)(this + 700); /*0x708825*/
  if ( v4 ) /*0x70882d*/
  {
    if ( CaptureManagerClass::CannotControlAnyMore(v4) ) /*0x70882f*/
      return 0; /*0x70882f*/
  }
  if ( *(_DWORD *)(this + 720) /*0x708859*/
    || (unsigned __int8)House::IsCurrentPlayer(*(House **)(this + 540)) && *(_DWORD *)(this + 692) )
  {
    return 0; /*0x708859*/
  }
  if ( !MissionClass::GetMissionControl((MissionClass *)this)[8] ) /*0x70886e*/
    return 0; /*0x70886e*/
  if ( (unsigned __int8)Object::IsAlliedWithObjectHouse(*(Object **)(this + 540), (int)a2) ) /*0x708880*/
    return 0; /*0x708880*/
  if ( (*(unsigned __int8 (__thiscall **)(int *, _DWORD))(*a2 + 200))(a2, *(_DWORD *)(this + 540)) ) /*0x708899*/
    return 0; /*0x708899*/
  if ( TechnoClass::GetValue((TechnoClass *)this, -1) <= 0 ) /*0x7088b2*/
    return 0; /*0x7088b2*/
  if ( !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)this + 684))(this) ) /*0x7088bc*/
    return 0; /*0x7088bc*/
  v5 = (*(int (__thiscall **)(int))(this->alignmentPadding)(this); /*0x7088d9*/
  v6 = (*(int (__thiscall **)(int, int *))(*(_DWORD *)this + 740))(this, a2); /*0x7088e1*/
  v7 = (*(int (__thiscall **)(int, int *, int))(*(_DWORD *)this + 956))(this, a2, v6); /*0x7088ed*/
  if ( v7 == 5 || v7 == 6 ) /*0x7088ff*/
    return 0; /*0x7088ff*/
  if ( (unsigned __int8)House::IsCurrentPlayer(*(House **)(this + 540)) /*0x708923*/
    && (*(int (__thiscall **)(int *))(*a2 + 44))(a2) == 6 )
  {
    if ( (*(int (__thiscall **)(int))(*(_DWORD *)this + 44))(this) == 15 && *(_BYTE *)(v5 + 3778) ) /*0x708935*/
      return 0; /*0x708935*/
    if ( (unsigned __int8)Audio::IsMediumVolume((int *)(this + 336)) /*0x708956*/
      || (unsigned __int8)Audio::IsLoud((int *)(this + 336)) )
    {
      v8 = (*(int (__thiscall **)(int))(this->alignmentPadding)(this); /*0x70896b*/
      if ( (unsigned __int8)Audio::IsMediumVolume((int *)(this + 336)) ) /*0x70896d*/
      {
        if ( *(_BYTE *)(v8 + 682) ) /*0x708976*/
          return 0; /*0x708976*/
      }
      if ( (unsigned __int8)Audio::IsLoud((int *)(this + 336)) && (*(_BYTE *)(v8 + 682) || *(_BYTE *)(v8 + 700)) ) /*0x70899d*/
        return 0; /*0x70899d*/
    }
  }
  if ( (unsigned __int8)House::IsCurrentPlayer(*(House **)(this + 540)) ) /*0x7089b5*/
  {
    if ( (*(int (__thiscall **)(int))(*(_DWORD *)this + 44))(this) == 1 ) /*0x7089c8*/
    {
      v9 = *(_DWORD *)(*(_DWORD *)(this + 1732) + 1028); /*0x7089d0*/
      if ( v9 ) /*0x7089d8*/
      {
        if ( *(_BYTE *)(v9 + 5834) ) /*0x7089da*/
          return 0; /*0x7089da*/
      }
    }
  }
  if ( (unsigned __int8)House::IsCurrentPlayer(*(House **)(this + 540)) ) /*0x7089ee*/
  {
    if ( !*(_BYTE *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 6124) /*0x708a11*/
      && (*(int (__thiscall **)(int))(*(_DWORD *)this + 44))(this) != 6 )
    {
      v10 = *(_DWORD *)(this + 172); /*0x708a13*/
      if ( v10 != 11 && v10 != 5 && v10 != 25 ) /*0x708a26*/
        return 0; /*0x708a26*/
    }
  }
  if ( this ) /*0x708a2e*/
  {
    if ( (*(_BYTE *)(this + 20) & 4) != 0 ) /*0x708a3d*/
    {
      v11 = *(_DWORD *)(this + 1492); /*0x708a3f*/
      if ( v11 ) /*0x708a47*/
      {
        if ( *(_BYTE *)(*(_DWORD *)(v11 + 36) + 175) ) /*0x708a4c*/
          return 0; /*0x708a4c*/
      }
    }
  }
  if ( !(unsigned __int8)House::IsCurrentPlayer(*(House **)(this + 540)) ) /*0x708a60*/
  {
    v12 = *(_DWORD *)(this + 692); /*0x708a69*/
    if ( v12 ) /*0x708a71*/
    {
      if ( (*(_BYTE *)(v12 + 20) & 2) != 0 ) /*0x708a7f*/
      {
        v15 = TechnoClass::ComputeDamage((TechnoClass *)this, (int *)v12, &g_BuildingLoadQueue_Array.?[3]); /*0x708a8e*/
        if ( TechnoClass::ComputeDamage((TechnoClass *)this, a2, &g_BuildingLoadQueue_Array.?[3]) < v15 ) /*0x708aa8*/
          return 0; /*0x708aa8*/
      }
    }
  }
  if ( this && (*(_BYTE *)(this + 20) & 4) != 0 && a2 == *(int **)(this + 1684) ) /*0x708ac3*/
    return 0; /*0x708ac3*/
  v13 = *(_DWORD *)(*(int (__thiscall **)(int, int))(*(_DWORD *)this + 1016))(this, v6); /*0x708ad0*/
  return !v13 /*0x708b1a*/
      || !*(_DWORD *)(v13 + 172)
      || *(double *)(*(_DWORD *)(v13 + 172) + 8 * *(_DWORD *)((*(int (__thiscall **)(int *))(*a2 + 132))(a2) + 156) + 160) > 0.0099999998;
}



// ==== 0x00708B30  ObjectClass::GetTypeVt28  this=TechnoClass  sig=csp ====
int __thiscall ObjectClass::GetTypeVt28(ObjectClass *this)
{
  int v1; // eax

  v1 = (*((int (__thiscall **)(ObjectClass *))this->AbstractClass + 33))(this); /*0x708b32*/
  return (*(int (__thiscall **)(int))(*(_DWORD *)v1 + 112))(v1);
}



// ==== 0x00708B40  TechnoClass::GetCostMultiplier  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::GetCostMultiplier(TechnoClass *this)
{
  int v2; // edi
  int v3; // edi
  TechnoClass *bunkerLinkedUnit; // ecx

  v2 = (*((int (__thiscall **)(TechnoClass *))this->RadioClass + 33))(this); /*0x708b4c*/
  if ( !v2 ) /*0x708b50*/
    return 0; /*0x708bad*/
  if ( (*((int (__thiscall **)(TechnoClass *))this->RadioClass + 11))(this) != 6 ) /*0x708b5c*/
    return *(_DWORD *)(v2 + 1648); /*0x708b5c*/
  if ( (*((int (__thiscall **)(TechnoClass *))this->RadioClass + 258))(this) > 0 ) /*0x708b6a*/
  {
    v3 = *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 3572); /*0x708b74*/
    return v3 * (*((int (__thiscall **)(TechnoClass *))this->RadioClass + 258))(this); /*0x708b87*/
  }
  bunkerLinkedUnit = this->bunkerLinkedUnit; /*0x708b88*/
  if ( bunkerLinkedUnit ) /*0x708b90*/
    return *(_DWORD *)((*((int (__thiscall **)(TechnoClass *))bunkerLinkedUnit->RadioClass + 33))(bunkerLinkedUnit) /*0x708b9a*/
                     + 1648);
  else
    return *(_DWORD *)(v2 + 1648); /*0x708ba3*/
}



// ==== 0x00708BC0  TechnoClass::ComputeAverageValue  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::ComputeAverageValue(TechnoClass *this)
{
  int result; // eax

  result = (*((int (__thiscall **)(TechnoClass *))this->RadioClass + 33))(this); /*0x708bc8*/
  if ( *(_DWORD *)(result + 2048) ) /*0x708bce*/
  {
    Float4::Sum((int *)&this->tiltSidewaysAngle); /*0x708bde*/
    return (*((int (__thiscall **)(TechnoClass *))this->RadioClass + 33))(this); /*0x708beb*/
  }
  return result; /*0x708bfc*/
}



// ==== 0x00708C10  TechnoClass::GetGlobalValue  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::GetGlobalValue(TechnoClass *this)
{
  _DWORD *v2; // [esp+8h] [ebp+8h]

  *v2 = *(_DWORD *)&g_BuildingLoadQueue_Array.?[24]; /*0x708c1a*/
  return 0; /*0x708c1e*/
}



// ==== 0x00708C30  TechnoClass::GetAmmoCount  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::GetAmmoCount(TechnoClass *this)
{
  double v1; // st7
  int v3; // eax
  double v4; // st7
  TechnoClass *captureManager; // ecx
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // eax
  BOOL v10; // ecx
  int result; // eax
  double ammo; // [esp+8h] [ebp-10h]

  switch ( *(_DWORD *)((*((int (__thiscall **)(TechnoClass *))this->RadioClass + 33))(this) + 980) ) /*0x708c4e*/
  {
    case 1: /*0x708c4e*/
      ammo = (double)this->ammo; /*0x708c5f*/
      v3 = (*((int (__usercall **)@<eax>(TechnoClass *@<ecx>))this->RadioClass + 33))(this); /*0x708c63*/
      v4 = (double)(*(int (__thiscall **)(int))(*(_DWORD *)v3 + 116))(v3); /*0x708c74*/
      goto LABEL_7; /*0x708c78*/
    case 2: /*0x708c4e*/
      Float4::Sum((int *)&this->tiltSidewaysAngle); /*0x708cdf*/
      ammo = v1; /*0x708ce8*/
      v4 = (double)*(int *)((*((int (__thiscall **)(TechnoClass *))this->RadioClass + 33))(this) + 2048); /*0x708cf2*/
      goto LABEL_7; /*0x708cf2*/
    case 3: /*0x708c4e*/
      ammo = (double)this->passengers[0]; /*0x708cbe*/
      v7 = (*((int (__usercall **)@<eax>(TechnoClass *@<ecx>))this->RadioClass + 33))(this); /*0x708cc2*/
      v4 = (double)(*(int (__thiscall **)(int))(*(_DWORD *)v7 + 116))(v7); /*0x708cd3*/
      goto LABEL_7; /*0x708cd7*/
    case 5: /*0x708c4e*/
      captureManager = (TechnoClass *)this->captureManager; /*0x708c7a*/
      if ( !captureManager ) /*0x708c82*/
        goto LABEL_10; /*0x708c82*/
      ammo = (double)TechnoClass::processPowerDrain(captureManager); /*0x708c99*/
      v6 = (*((int (__usercall **)@<eax>(TechnoClass *@<ecx>))this->RadioClass + 33))(this); /*0x708c9d*/
      v4 = (double)(*(int (__thiscall **)(int))(*(_DWORD *)v6 + 116))(v6); /*0x708cae*/
LABEL_7:
      v8 = (*((int (__thiscall **)(TechnoClass *))this->RadioClass + 33))(this); /*0x708cf8*/
      (*(void (__thiscall **)(int))(*(_DWORD *)v8 + 116))(v8); /*0x708d0a*/
      LOWORD(v9) = Math::RoundToInt(v4); /*0x708d25*/
      v10 = v9; /*0x708d2a*/
      if ( !v9 ) /*0x708d2e*/
        v10 = ammo > 0.0; /*0x708d41*/
      result = v10; /*0x708d46*/
      break; /*0x708d4c*/
    default:
LABEL_10:
      result = 0; /*0x708d4d*/
      break; /*0x708d4d*/
  }
  return result; /*0x708d48*/
}



// ==== 0x00708D70  TechnoClass::Vt170  this=TechnoClass  sig=csp ====
_DWORD *__thiscall TechnoClass::Vt170(TechnoClass *this, _DWORD *a2)
{
  int v2; // ecx
  TechnoClass *v4; // [esp+0h] [ebp-4h] BYREF

  v4 = this; /*0x708d70*/
  v2 = *(_DWORD *)(*((int (__thiscall **)(TechnoClass *, TechnoClass **))this->RadioClass + 170))(this, &v4); /*0x708d7e*/
  *a2 = v2; /*0x708d84*/
  return a2; /*0x708d87*/
}



// ==== 0x00708D90  TechnoClass::SetMoveDestination  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::SetMoveDestination(TechnoClass *this)
{
  int result; // eax
  int v3; // [esp+Ch] [ebp+4h]

  LOBYTE(result) = g_MoveFeedback; /*0x708d90*/
  if ( g_MoveFeedback && v3 != -1 ) /*0x708da4*/
  {
    result = House::IsHumanPlayer((House *)this->owner); /*0x708dac*/
    if ( (_BYTE)result ) /*0x708db3*/
      this->queuedVoiceIndex = v3; /*0x708db5*/
  }
  return result; /*0x708dbb*/
}



// ==== 0x00708DC0  TechnoClass::GetPrimaryTargetOrFallback  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::GetPrimaryTargetOrFallback(TechnoClass *this)
{
  int (__thiscall **vtable0)(TechnoClass *, _DWORD); // edi
  int v3; // eax

  if ( *(_DWORD *)((*((int (__thiscall **)(TechnoClass *))this->RadioClass + 33))(this) + 1372) == -1 ) /*0x708dd2*/
    return (*((int (__thiscall **)(TechnoClass *))this->RadioClass + 214))(this); /*0x708df5*/
  vtable0 = (int (__thiscall **)(TechnoClass *, _DWORD))this->RadioClass; /*0x708dd5*/
  v3 = (*((int (__thiscall **)(TechnoClass *))this->RadioClass + 33))(this); /*0x708dd9*/
  return vtable0[213](this, *(_DWORD *)(v3 + 1372)); /*0x708def*/
}



// ==== 0x00708E00  TechnoClass::PickAlternateTarget  this=TechnoClass  sig=csp ====
void __fastcall TechnoClass::PickAlternateTarget(TechnoClass *this)
{
  int v2; // eax
  void (__thiscall **vtable0)(TechnoClass *, _DWORD); // edi
  int v4; // eax
  void (__thiscall **v5)(TechnoClass *, _DWORD); // edi
  int v6; // eax

  if ( !this->unknown_bool_4F8 )
  {
    if ( this
      && (*((int (__thiscall **)(TechnoClass *))this->RadioClass + 11))(this) == 15
      && (v2 = (*((int (__thiscall **)(TechnoClass *))this->RadioClass + 11))(this),
          (unsigned __int8)TechnoClass::IsMission27to30(v2 == 15 ? this : 0)) )
    {
      if ( *(_DWORD *)((*((int (__thiscall **)(TechnoClass *))this->RadioClass + 33))(this) + 1428) != -1 ) /*0x708e4f*/
      {
        vtable0 = (void (__thiscall **)(TechnoClass *, _DWORD))this->RadioClass; /*0x708e51*/
        v4 = (*((int (__thiscall **)(TechnoClass *))this->RadioClass + 33))(this); /*0x708e55*/
        vtable0[213](this, *(_DWORD *)(v4 + 1428)); /*0x708e64*/
        this->unknown_bool_4F8 = 0; /*0x708e6a*/
        return; /*0x708e73*/
      }
    }
    else if ( *(_DWORD *)((*((int (__thiscall **)(TechnoClass *))this->RadioClass + 33))(this) + 1424) != -1 ) /*0x708e85*/
    {
      v5 = (void (__thiscall **)(TechnoClass *, _DWORD))this->RadioClass; /*0x708e87*/
      v6 = (*((int (__thiscall **)(TechnoClass *))this->RadioClass + 33))(this); /*0x708e8b*/
      v5[213](this, *(_DWORD *)(v6 + 1424)); /*0x708e9a*/
    }
  }
  this->unknown_bool_4F8 = 0; /*0x708ea0*/
}



// ==== 0x00708EB0  TechnoClass::SelectRandomTarget  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::SelectRandomTarget(TechnoClass *this)
{
  int v2; // eax
  int v3; // ecx
  int result; // eax
  unsigned int v5; // edi
  int v6; // ecx
  int v7; // eax
  int v8; // ecx
  unsigned int v9; // edi
  int v10; // eax
  int v11; // eax
  int v12; // ecx

  if ( this->slaveOwner ) /*0x708eb5*/
  {
    v2 = (*((int (__thiscall **)(TechnoClass *))this->RadioClass + 33))(this); /*0x708ec1*/
    v3 = *(_DWORD *)(v2 + 1088); /*0x708ec7*/
    result = v2 + 1072; /*0x708ecd*/
    if ( !v3 ) /*0x708ed4*/
      return result; /*0x708ed4*/
    v5 = Random::State(&Randomizer_Global); /*0x708ee8*/
    v6 = (*((int (__thiscall **)(TechnoClass *))this->RadioClass + 33))(this) + 1072; /*0x708ef2*/
    return (*((int (__thiscall **)(TechnoClass *, _DWORD))this->RadioClass + 213))( /*0x708fa7*/
             this,
             *(_DWORD *)(*(_DWORD *)(v6 + 4) + 4 * (v5 % *(_DWORD *)(v6 + 16))));
  }
  if ( !this->__pad_1C4[4] ) /*0x708f05*/
  {
    v11 = (*((int (__thiscall **)(TechnoClass *))this->RadioClass + 33))(this); /*0x708f62*/
    v12 = *(_DWORD *)(v11 + 1060); /*0x708f68*/
    result = v11 + 1044; /*0x708f6e*/
    if ( !v12 ) /*0x708f75*/
      return result; /*0x708f75*/
    v5 = Random::State(&Randomizer_Global); /*0x708f85*/
    v6 = (*((int (__thiscall **)(TechnoClass *))this->RadioClass + 33))(this) + 1044; /*0x708f8f*/
    return (*((int (__thiscall **)(TechnoClass *, _DWORD))this->RadioClass + 213))( /*0x708f8f*/
             this,
             *(_DWORD *)(*(_DWORD *)(v6 + 4) + 4 * (v5 % *(_DWORD *)(v6 + 16))));
  }
  v7 = (*((int (__thiscall **)(TechnoClass *))this->RadioClass + 33))(this); /*0x708f0b*/
  v8 = *(_DWORD *)(v7 + 1116); /*0x708f11*/
  result = v7 + 1100; /*0x708f17*/
  if ( v8 ) /*0x708f1e*/
  {
    v9 = Random::State(&Randomizer_Global); /*0x708f2e*/
    v10 = (*((int (__thiscall **)(TechnoClass *))this->RadioClass + 33))(this); /*0x708f34*/
    return (*((int (__thiscall **)(TechnoClass *, _DWORD))this->RadioClass + 213))( /*0x708f54*/
             this,
             *(_DWORD *)(*(_DWORD *)(v10 + 1104) + 4 * (v9 % *(_DWORD *)(v10 + 1116))));
  }
  return result; /*0x708f5a*/
}



// ==== 0x00708FC0  TechnoClass::ResponseMove_Pickup  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::ResponseMove_Pickup(TechnoClass *this)
{
  int v2; // eax
  int v3; // ecx
  int result; // eax
  unsigned int v5; // edi
  int v6; // eax

  v2 = (*((int (__thiscall **)(TechnoClass *))this->RadioClass + 33))(this); /*0x708fc5*/
  v3 = *(_DWORD *)(v2 + 1144); /*0x708fcb*/
  result = v2 + 1128; /*0x708fd1*/
  if ( v3 ) /*0x708fd8*/
  {
    v5 = Random::State(&Randomizer_Global); /*0x708fea*/
    v6 = (*((int (__thiscall **)(TechnoClass *))this->RadioClass + 33))(this); /*0x708fec*/
    return (*((int (__thiscall **)(TechnoClass *, _DWORD))this->RadioClass + 213))( /*0x70900c*/
             this,
             *(_DWORD *)(*(_DWORD *)(v6 + 1132) + 4 * (v5 % *(_DWORD *)(v6 + 1144))));
  }
  return result; /*0x709014*/
}



// ==== 0x00709020  TechnoClass::GetSecondaryTargetOrFallback  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::GetSecondaryTargetOrFallback(TechnoClass *this)
{
  int (__thiscall **vtable0)(TechnoClass *, _DWORD); // edi
  int v3; // eax

  if ( *(_DWORD *)((*((int (__thiscall **)(TechnoClass *))this->RadioClass + 33))(this) + 1368) == -1 ) /*0x709032*/
    return (*((int (__thiscall **)(TechnoClass *))this->RadioClass + 218))(this); /*0x709055*/
  vtable0 = (int (__thiscall **)(TechnoClass *, _DWORD))this->RadioClass; /*0x709035*/
  v3 = (*((int (__thiscall **)(TechnoClass *))this->RadioClass + 33))(this); /*0x709039*/
  return vtable0[213](this, *(_DWORD *)(v3 + 1368)); /*0x70904f*/
}



// ==== 0x00709060  TechnoClass::GetTertiaryTargetOrFallback  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::GetTertiaryTargetOrFallback(TechnoClass *this)
{
  int (__thiscall **vtable0)(TechnoClass *, _DWORD); // edi
  int v3; // eax

  if ( *(_DWORD *)((*((int (__thiscall **)(TechnoClass *))this->RadioClass + 33))(this) + 1404) == -1 ) /*0x709072*/
    return (*((int (__thiscall **)(TechnoClass *))this->RadioClass + 218))(this); /*0x709095*/
  vtable0 = (int (__thiscall **)(TechnoClass *, _DWORD))this->RadioClass; /*0x709075*/
  v3 = (*((int (__thiscall **)(TechnoClass *))this->RadioClass + 33))(this); /*0x709079*/
  return vtable0[213](this, *(_DWORD *)(v3 + 1404)); /*0x70908f*/
}



// ==== 0x007090A0  TechnoClass::VoiceAttack  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::VoiceAttack(TechnoClass *this)
{
  int v2; // edi
  int v3; // eax
  int v4; // edi
  int v5; // eax
  int v6; // ecx
  int result; // eax
  unsigned int v8; // edi
  int v9; // eax
  int v10; // [esp+Ch] [ebp+4h]

  v2 = (*((int (__thiscall **)(TechnoClass *, int))this->RadioClass + 185))(this, v10); /*0x7090b5*/
  v3 = *(_DWORD *)(*((int (__thiscall **)(TechnoClass *, int))this->RadioClass + 254))(this, v2); /*0x7090c0*/
  if ( v3 /*0x7090d7*/
    && *(int *)(v3 + 164) < 0
    && (unsigned __int8)ObjectClass::StepCleanup((ObjectClass *)this, g_INI_Key_TRUCKA.?) )
  {
    v4 = *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 560); /*0x7090e5*/
  }
  else if ( (unsigned __int8)Audio::IsLoud(this->veterancy) ) /*0x7090f3*/
  {
    if ( v2 ) /*0x7090fe*/
      v4 = *(_DWORD *)((*((int (__thiscall **)(TechnoClass *))this->RadioClass + 33))(this) + 1420); /*0x70911c*/
    else
      v4 = *(_DWORD *)((*((int (__thiscall **)(TechnoClass *))this->RadioClass + 33))(this) + 1412); /*0x70910a*/
  }
  else if ( v2 ) /*0x709126*/
  {
    v4 = *(_DWORD *)((*((int (__thiscall **)(TechnoClass *))this->RadioClass + 33))(this) + 1416); /*0x709144*/
  }
  else
  {
    v4 = *(_DWORD *)((*((int (__thiscall **)(TechnoClass *))this->RadioClass + 33))(this) + 1408); /*0x709132*/
  }
  v5 = (*((int (__thiscall **)(TechnoClass *))this->RadioClass + 33))(this); /*0x70914e*/
  v6 = *(_DWORD *)(v5 + 1172); /*0x709154*/
  result = v5 + 1156; /*0x70915a*/
  if ( !v6 ) /*0x709161*/
  {
    if ( v4 == -1 ) /*0x709166*/
      return result; /*0x709166*/
    return (*((int (__thiscall **)(TechnoClass *, int))this->RadioClass + 213))(this, v4); /*0x709166*/
  }
  if ( v4 != -1 ) /*0x70917b*/
    return (*((int (__thiscall **)(TechnoClass *, int))this->RadioClass + 213))(this, v4); /*0x709175*/
  v8 = Random::State(&Randomizer_Global); /*0x70919c*/
  v9 = (*((int (__thiscall **)(TechnoClass *))this->RadioClass + 33))(this); /*0x70919e*/
  return (*((int (__thiscall **)(TechnoClass *, _DWORD))this->RadioClass + 213))( /*0x709173*/
           this,
           *(_DWORD *)(*(_DWORD *)(v9 + 1160) + 4 * (v8 % *(_DWORD *)(v9 + 1172))));
}



// ==== 0x007091D0  FootClass::CanEnterBuilding  this=FootClass  sig=csp ====
bool __thiscall FootClass::CanEnterBuilding(FootClass *this)
{
  CaptureManagerClass *captureManager; // ecx
  bool v3; // bl
  bool result; // al

  result = 0; /*0x70927e*/
  if ( !(*((unsigned __int8 (__thiscall **)(FootClass *))this->TechnoClass + 119))(this) /*0x709226*/
    && !this->?
    && *(_BYTE *)((*((int (__thiscall **)(FootClass *))this->TechnoClass + 33))(this) + 3481)
    && ((*((int (__thiscall **)(FootClass *))this->TechnoClass + 11))(this) != 6
     || !*(_BYTE *)(this->planningPathIdx + 5499)
     || (*((int (__thiscall **)(FootClass *))this->TechnoClass + 258))(this)) )
  {
    captureManager = this->?; /*0x709230*/
    v3 = captureManager && CaptureManagerClass::CannotControlAnyMore(captureManager); /*0x709243*/
    if ( (!(*((unsigned __int8 (__thiscall **)(FootClass *))this->TechnoClass + 204))(this) /*0x70926e*/
       || !(unsigned __int8)House::IsCurrentPlayer((House *)this->?))
      && !v3
      && (*((unsigned __int8 (__thiscall **)(FootClass *))this->TechnoClass + 171))(this) )
    {
      return 1; /*0x70922e*/
    }
  }
  return result; /*0x709278*/
}



// ==== 0x00709290  FootClass::CanEnterCell  this=TechnoClass  sig=csp ====
bool __usercall FootClass::CanEnterCell@<al>(int a1@<ecx>, int a2@<ebx>)
{
  int v3; // eax
  int v4; // eax
  bool result; // al
  FactoryClass *v6; // ecx
  int v7; // edi
  FactoryClass *v8; // ecx
  int v9; // edi
  int *v10; // eax
  int v11; // eax
  bool v12; // bl
  bool v13; // al

  if ( !*(_DWORD *)(a1 + 692) && !(unsigned __int8)House::IsCurrentPlayer(*(House **)(a1 + 540)) ) /*0x7092aa*/
  {
    if ( a1 ) /*0x7092b5*/
    {
      if ( (*(_BYTE *)(a1 + 20) & 4) != 0 ) /*0x7092c3*/
      {
        v3 = *(_DWORD *)(a1 + 1492); /*0x7092c5*/
        if ( v3 ) /*0x7092cd*/
        {
          v4 = *(_DWORD *)(v3 + 36); /*0x7092cf*/
          if ( !*(_BYTE *)(v4 + 175) && *(_BYTE *)(v4 + 173) && *(_DWORD *)(a1 + 172) == 2 ) /*0x7092ec*/
            return 1; /*0x7092ec*/
        }
      }
    }
  }
  result = FootClass::CanEnterBuilding((FootClass *)a1); /*0x7092f4*/
  if ( !result ) /*0x7092fb*/
    return result; /*0x7092fb*/
  if ( *(_DWORD *)(a1 + 172) == 2 )
  {
    if ( *(_BYTE *)((*(int (__thiscall **)(int))(*(_DWORD *)a1 + 132))(a1) + 3434) ) /*0x709317*/
    {
      if ( !a1 || (*(_BYTE *)(a1 + 20) & 4) == 0 ) /*0x709331*/
        return 0; /*0x709338*/
      if ( *(_DWORD *)(a1 + 1444) == (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 444))(a1) ) /*0x709349*/
      {
        v6 = *(FactoryClass **)(a1 + 1300); /*0x70934b*/
        if ( !v6 || FactoryClass::GetState(v6) <= 0 ) /*0x709360*/
          return 1; /*0x709360*/
      }
    }
    if ( *(_DWORD *)(a1 + 172) == 2 )
    {
      if ( a1 )
      {
        if ( (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 44))(a1) == 1 )
        {
          if ( *(_BYTE *)(*(_DWORD *)((*(int (__thiscall **)(int))(*(_DWORD *)a1 + 44))(a1) == 1 ? a1 + 0x6C4 : 1732)
                        + 3603) )
          {
            v7 = (*(_BYTE *)(a1 + 20) & 4) != 0 ? a1 : 0;
            if ( *(_DWORD *)(v7 + 1444) == (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 444))(a1) ) /*0x7093bc*/
            {
              v8 = *(FactoryClass **)(a1 + 1300); /*0x7093be*/
              if ( !v8 || FactoryClass::GetState(v8) <= 0 ) /*0x7093d3*/
                return 1; /*0x7093d3*/
            }
          }
        }
      }
    }
  }
  if ( *(_BYTE *)((*(int (__thiscall **)(int))(*(_DWORD *)a1 + 132))(a1) + 1711) ) /*0x7093df*/
    return 1; /*0x7093df*/
  if ( *(_DWORD *)(a1 + 172) != 5 ) /*0x7093f0*/
    return 0; /*0x7093f7*/
  v9 = (*(int (__thiscall **)(int, int))(*(_DWORD *)a1 + 996))(a1, a2); /*0x709403*/
  v10 = (int *)(*(int (__thiscall **)(int, int))(*(_DWORD *)a1 + 1016))(a1, v9); /*0x70940a*/
  v12 = 0; /*0x709424*/
  if ( v10 ) /*0x709412*/
  {
    v11 = *v10; /*0x709414*/
    if ( v11 ) /*0x709418*/
    {
      if ( *(_BYTE *)(v11 + 336) ) /*0x70941a*/
        v12 = 1; /*0x709412*/
    }
  }
  v13 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)a1 + 740))(a1, *(_DWORD *)(a1 + 692)) == v9; /*0x70943d*/
  return !v12 || !v13; /*0x709450*/
}



// ==== 0x00709480  JumpjetLocomotionClass::StubReturnZero_16  this=JumpjetLocomotionClass  sig=csp ====
char __thiscall JumpjetLocomotionClass::StubReturnZero_16(JumpjetLocomotionClass *this)
{
  int v2; // ebx
  int v3; // edi
  int v4; // eax
  char result; // al
  _BYTE v6[12]; // [esp+8h] [ebp-Ch] BYREF

  if ( !FootClass::CanEnterCell((int)this, 0) ) /*0x709489*/
    return 0; /*0x7094d5*/
  v2 = *((_DWORD *)this + 173); /*0x709497*/
  v3 = this->LocomotionClass[0]; /*0x70949e*/
  *((_DWORD *)this + 319) = *(_DWORD *)&stru_A8EB00.?[416]; /*0x7094a9*/
  v4 = (*(int (__thiscall **)(JumpjetLocomotionClass *, _BYTE *, int))(v3 + 72))(this, v6, 1); /*0x7094af*/
  result = (*(int (__thiscall **)(JumpjetLocomotionClass *, int))(v3 + 924))(this, v4); /*0x7094b5*/
  if ( result ) /*0x7094be*/
  {
    if ( *((_DWORD *)this + 173) != v2 ) /*0x7094c6*/
      *((_BYTE *)this + 1292) = 1; /*0x7094c8*/
  }
  return result; /*0x7094cf*/
}



// ==== 0x00709550  ObjectClass::SelectTargetByWeight  this=ObjectClass  sig=csp ====
void __usercall SelectTargetByWeight(TechnoClass *this, int a2@<esi>)
{
  _DWORD *v2; // ecx
  _DWORD *v3; // edi
  int i; // edx
  int v5; // eax
  int v6; // ecx
  _DWORD *v7; // esi
  int v8; // eax
  int v9; // ecx
  int v10; // eax
  int v11; // ebp
  int v12; // eax
  int v13; // ebx
  int v14; // eax
  int v15; // esi
  _DWORD *v16; // ecx
  int v17; // eax
  _DWORD *v18; // esi
  int v19; // eax
  int v20; // ebp
  int v21; // edx
  int v22; // eax
  int v23; // ebx
  int v24; // edx
  int v25; // esi
  int k; // eax
  int j; // [esp+10h] [ebp-38h]
  int v29; // [esp+14h] [ebp-34h]
  VectorClass v30; // [esp+18h] [ebp-30h] BYREF
  int v31; // [esp+28h] [ebp-20h]
  int v32; // [esp+2Ch] [ebp-1Ch]
  void **v33; // [esp+30h] [ebp-18h] BYREF
  void *v34; // [esp+34h] [ebp-14h]
  int v35; // [esp+38h] [ebp-10h]
  char v36; // [esp+3Dh] [ebp-Bh]
  int v37; // [esp+40h] [ebp-8h]
  int v38; // [esp+44h] [ebp-4h]

  v3 = v2; /*0x709555*/
  if ( v2[282] ) /*0x709559*/
  {
    for ( i = v2[288] - 1; i >= 0; --i ) /*0x70957f*/
    {
      v5 = 0; /*0x709587*/
      v6 = v3[282]; /*0x70958c*/
      if ( v6 <= 0 ) /*0x709594*/
      {
LABEL_8:
        v8 = v3[288]; /*0x7095a8*/
        if ( i < v8 ) /*0x7095b0*/
        {
          v9 = v8 - 1; /*0x7095b2*/
          v10 = i; /*0x7095b5*/
          for ( v3[288] = v9; v10 < v3[288]; *(_DWORD *)(v3[285] + 4 * v10 - 4) = *(_DWORD *)(v3[285] + 4 * v10) ) /*0x7095bf*/
            ++v10; /*0x7095c7*/
        }
      }
      else
      {
        v7 = (_DWORD *)v3[279]; /*0x709596*/
        while ( *(_DWORD *)(v3[285] + 4 * i) != *v7 ) /*0x70959e*/
        {
          ++v5; /*0x7095a0*/
          ++v7; /*0x7095a1*/
          if ( v5 >= v6 ) /*0x7095a6*/
            goto LABEL_8; /*0x7095a6*/
        }
      }
    }
    AbstractClassVector::Construct((AbstractClassVector *)&v33, 0, 0); /*0x7095e2*/
    v33 = &DynamicVectorClass<AbstractClass *>::`vftable'; /*0x7095f2*/
    v38 = 10; /*0x7095fa*/
    v37 = 0; /*0x7095fe*/
    VectorClass::Construct(&v30, 0, 0); /*0x709602*/
    v11 = v3[288]; /*0x709607*/
    v30.vtable0 = (int)&DynamicVectorClass<int>::`vftable'; /*0x70960d*/
    v32 = 10; /*0x709617*/
    v31 = 0; /*0x70961b*/
    if ( v11 > 0 ) /*0x70961f*/
    {
      v12 = 0; /*0x70962b*/
      v29 = v3[282]; /*0x70962f*/
      for ( j = 0; j < v29; ++j ) /*0x709637*/
      {
        v13 = 4 * v12; /*0x709643*/
        v14 = 0; /*0x70964a*/
        v15 = *(_DWORD *)(v3[279] + v13); /*0x70964c*/
        v16 = (_DWORD *)v3[285]; /*0x709653*/
        while ( v15 != *v16 ) /*0x70965b*/
        {
          ++v14; /*0x709661*/
          ++v16; /*0x709662*/
          if ( v14 >= v11 ) /*0x709667*/
          {
            if ( v37 < v35 /*0x709696*/
              || (v36 || !v35)
              && v38 > 0
              && ((unsigned __int8 (__thiscall *)(void ***, int, _DWORD))v33[2])(&v33, v38 + v35, 0) )
            {
              v17 = v37++; /*0x7096a1*/
              *((_DWORD *)v34 + v17) = v15; /*0x7096ac*/
            }
            v18 = (_DWORD *)(v13 + v3[273]); /*0x7096bd*/
            if ( v31 < v30.Capacity /*0x7096e4*/
              || (v30.IsAllocated[0] || !v30.Capacity)
              && v32 > 0
              && (*(unsigned __int8 (__thiscall **)(VectorClass *, int, _DWORD))(v30.vtable0 + 8))(
                   &v30,
                   v32 + v30.Capacity,
                   0) )
            {
              v19 = v31++; /*0x7096f3*/
              *(_DWORD *)(v30.Items + 4 * v19) = *v18; /*0x7096fc*/
            }
            break; /*0x7096fc*/
          }
        }
        v12 = j + 1; /*0x7096ff*/
      }
    }
    if ( v37 ) /*0x70971a*/
    {
      v24 = 0; /*0x709765*/
      v25 = 0; /*0x709767*/
      for ( k = 0; k < v37; ++k ) /*0x70976d*/
      {
        if ( *(_DWORD *)(v30.Items + 4 * k) > v24 ) /*0x70977c*/
        {
          v25 = *((_DWORD *)v34 + k); /*0x70977e*/
          v24 = *(_DWORD *)(v30.Items + 4 * k); /*0x709782*/
        }
      }
      (*(void (__thiscall **)(_DWORD *, int))(*v3 + 968))(v3, v25); /*0x709792*/
    }
    else
    {
      (*(void (__thiscall **)(_DWORD *, int))(v3[284] + 12))(v3 + 284, a2); /*0x709728*/
      v20 = v3[282]; /*0x70972b*/
      v21 = 0; /*0x709731*/
      v22 = 0; /*0x709735*/
      if ( v20 > 0 ) /*0x709739*/
      {
        v23 = v3[273]; /*0x70973b*/
        do /*0x709756*/
        {
          if ( *(_DWORD *)(v23 + 4 * v22) > v21 ) /*0x709746*/
            v21 = *(_DWORD *)(v23 + 4 * v22); /*0x709748*/
          ++v22; /*0x709753*/
        }
        while ( v22 < v20 ); /*0x709756*/
      }
      (*(void (__thiscall **)(_DWORD *))(*v3 + 968))(v3); /*0x70975d*/
    }
    v30.vtable0 = (int)&VectorClass<int>::`vftable'; /*0x7097a0*/
    if ( v30.Items && v30.IsAllocated[0] ) /*0x7097b0*/
    {
      __3_YAXPAX_Z((void *)v30.Items); /*0x7097b3*/
      v30.Items = 0; /*0x7097bb*/
    }
    v30.Capacity = 0; /*0x7097c3*/
    v30.IsAllocated[0] = 0; /*0x7097ca*/
    v33 = &VectorClass<AbstractClass *>::`vftable'; /*0x7097cf*/
    if ( v34 ) /*0x7097d8*/
    {
      if ( v36 ) /*0x7097e0*/
        __3_YAXPAX_Z(v34); /*0x7097e3*/
    }
  }
  else
  {
    (*(void (__thiscall **)(_DWORD *))(v2[284] + 12))(v2 + 284); /*0x70956d*/
  }
}



// ==== 0x00709820  TechnoClass::BeginFiringSequence  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::BeginFiringSequence(TechnoClass *this)
{
  int v2; // ecx
  int v3; // eax
  int v4; // eax
  UnitClass *spawnManager; // ecx
  int v6; // edi
  int v7; // eax
  int v8; // eax
  TechnoClass *v10; // [esp+0h] [ebp-14h]
  int v11; // [esp+Ch] [ebp-8h]
  int v12; // [esp+18h] [ebp+4h]
  char v13; // [esp+1Ch] [ebp+8h]

  this->unknown_4FC = (int)dword_A8ED84; /*0x70982e*/
  if ( this->currentMission == 11 ) /*0x70983f*/
    v2 = Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, 2) + *(_DWORD *)&dword_8871E0->__pad_C3C[456]; /*0x709864*/
  else
    v2 = Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, 2) + *(_DWORD *)&dword_8871E0->__pad_C3C[460]; /*0x70989a*/
  this->targetingTimer[0] = (int)dword_A8ED84; /*0x70986c*/
  this->targetingTimer[1] = v11; /*0x7098b0*/
  this->targetingTimer[2] = v2; /*0x7098b6*/
  if ( this->target && LOBYTE(this->shouldLoseTarget) ) /*0x7098c3*/
  {
    v3 = (*(int (__thiscall **)(TechnoClass *, int))(this->vtable0 + 740))(this, this->target); /*0x7098d2*/
    v4 = (*(int (__thiscall **)(TechnoClass *, int, int, int))(this->vtable0 + 960))(this, this->target, v3, 1); /*0x7098e6*/
    if ( v4 == 6 ) /*0x7098ef*/
    {
      spawnManager = (UnitClass *)this->spawnManager; /*0x7098f1*/
      if ( spawnManager ) /*0x7098f9*/
      {
        UnitClass::ProcessIdleOrders(spawnManager); /*0x7098fb*/
        goto LABEL_12; /*0x709900*/
      }
      goto LABEL_11; /*0x7098f9*/
    }
    if ( v4 == 5 || v4 == 8 ) /*0x70990a*/
LABEL_11:
      (*(void (__thiscall **)(TechnoClass *, _DWORD))(this->vtable0 + 968))(this, 0); /*0x70990c*/
  }
LABEL_12:
  if ( !this->target )
  {
    v6 = (*(int (__thiscall **)(TechnoClass *, int, int, _DWORD))(this->vtable0 + 964))(this, v13 & 3, v12, 0); /*0x70993c*/
    if ( *(_BYTE *)((*(int (__thiscall **)(TechnoClass *))(this->vtable0 + 132))(this) + 1712) )
    {
      SelectTargetByWeight(v10, (int)this); /*0x709950*/
    }
    else
    {
      if ( v6 ) /*0x709959*/
        (*(void (__thiscall **)(TechnoClass *, int))(this->vtable0 + 968))(this, v6); /*0x709960*/
      v7 = (*(int (__thiscall **)(TechnoClass *, int))(this->vtable0 + 740))(this, this->target); /*0x709971*/
      if ( v6 )
        v6 = (*(_BYTE *)(v6 + 20) & 1) != 0 ? v6 : 0;
      v8 = *(_DWORD *)(*(int (__thiscall **)(TechnoClass *, int))(this->vtable0 + 1016))(this, v7); /*0x709992*/
      if ( v6 && v8 && !*(_BYTE *)(*(_DWORD *)(v8 + 160) + 674) ) /*0x7099a2*/
        *(_DWORD *)(v6 + 112) -= TechnoClass::ComputeAudioFalloffDamage(this, v6, v8); /*0x7099b5*/
    }
  }
  return this->target != 0; /*0x7099c2*/
}



// ==== 0x007099D0  TechnoClass::IsDirty  this=TechnoClass  sig=csp ====
int __stdcall IPersistStream::IsDirty(TechnoClass *this, int a2)
{
  return 0; /*0x7099d2*/
}



// ==== 0x007099E0  TechnoClass::IsTimerExpired  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::IsTimerExpired(TechnoClass *this)
{
  int v1; // edx
  int result; // eax

  v1 = this->idleActionTimer[0]; /*0x7099e0*/
  result = this->idleActionTimer[2]; /*0x7099e6*/
  if ( v1 != -1 ) /*0x7099ef*/
  {
    if ( *(_DWORD *)&stru_A8EB00.?[416] - v1 < result ) /*0x7099fb*/
    {
      result -= *(_DWORD *)&stru_A8EB00.?[416] - v1; /*0x7099fd*/
      LOBYTE(result) = result == 0; /*0x709a06*/
      return result; /*0x709a08*/
    }
    result = 0; /*0x709a09*/
  }
  LOBYTE(result) = result == 0; /*0x709a12*/
  return result; /*0x709a08*/
}



// ==== 0x00709A20  TechnoClass::COMStub_Return0_287  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::COMStub_Return0_287(TechnoClass *this)
{
  int result; // eax

  return result; /*0x709a20*/
}



// ==== 0x00709A30  TechnoClass::Stub  this=TechnoClass  sig=csp ====
void __stdcall IPersistStream::Stub(TechnoClass *this, int a2)
{
  ; /*0x709a30*/
}



// ==== 0x00709A40  TechnoClass::CompleteFactoryProduction  this=TechnoClass  sig=csp ====
char __thiscall TechnoClass::CompleteFactoryProduction(TechnoClass *this, int a2, int a3)
{
  FactoryClass *temporalUsing; // ecx

  temporalUsing = (FactoryClass *)this->temporalUsing; /*0x709a43*/
  if ( temporalUsing && temporalUsing->production[1] ) /*0x709a4d*/
    FactoryClass::CompleteItem(temporalUsing); /*0x709a54*/
  if ( !(*((unsigned __int8 (__thiscall **)(TechnoClass *))this->RadioClass + 308))(this) /*0x709a6b*/
    && (*((unsigned __int8 (__thiscall **)(TechnoClass *))this->RadioClass + 268))(this) )
  {
    BuildingClass::GetObjectData((BuildingClass *)this); /*0x709a77*/
  }
  return 0; /*0x709a7e*/
}



// ==== 0x00709A90  TechnoClass::DrawPips  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::DrawPips(TechnoClass *this)
{
  double v1; // st4
  double v2; // st5
  double v3; // st6
  double v4; // st7
  int v6; // esi
  int v7; // ecx
  void (__thiscall **vtable0)(TechnoClass *); // eax
  void (__thiscall **v9)(TechnoClass *); // edx
  void (__thiscall **v10)(TechnoClass *); // edx
  int v11; // ebx
  int (__thiscall **v12)(TechnoClass *); // eax
  int v13; // eax
  int v14; // eax
  int result; // eax
  int v16; // edi
  int v17; // ebx
  int (__thiscall **v18)(TechnoClass *); // edx
  void *v19; // ebx
  int v20; // edi
  int v21; // ebx
  int v22; // eax
  int (__thiscall **v23)(TechnoClass *); // edx
  int v24; // eax
  signed int v25; // ebx
  void (__thiscall **v26)(TechnoClass *); // eax
  void *v27; // edi
  int v28; // edi
  int v29; // eax
  _DWORD *DB; // edi
  _DWORD *v31; // ebx
  int v32; // eax
  _DWORD *v33; // ebx
  int v34; // eax
  int v35; // eax
  _DWORD *v36; // ecx
  int v37; // eax
  int v38; // eax
  _DWORD *v39; // ecx
  int (__thiscall **v40)(TechnoClass *); // edx
  signed int v41; // edi
  unsigned int v42; // edi
  unsigned int v43; // ebx
  unsigned int v44; // ecx
  bool v45; // zf
  int v46; // eax
  void *v47; // ebx
  int (__thiscall **v48)(TechnoClass *); // eax
  int v49; // edi
  int v50; // ebx
  CaptureManagerClass *captureManager; // ecx
  int (__thiscall **v52)(TechnoClass *); // eax
  int v53; // eax
  unsigned int v54; // eax
  int (__thiscall **v55)(TechnoClass *); // edx
  int v56; // eax
  unsigned int v57; // eax
  int v58; // ebx
  int v59; // edi
  unsigned int v60; // edx
  int v61; // ebx
  int v62; // eax
  int v63; // ecx
  unsigned int v64; // edi
  int v65; // edi
  unsigned int v66; // edx
  int v67; // ecx
  int v68; // eax
  int (__thiscall **v69)(TechnoClass *); // edx
  unsigned int v70; // ebx
  int v71; // edi
  int v72; // esi
  int v73; // ecx
  int (__thiscall **v74)(TechnoClass *, int *, _DWORD *, int *); // edx
  unsigned int controlGroup; // edi
  int v76; // edi
  int v77; // esi
  int *TextBoundingRect; // eax
  int v79; // ebx
  int v80; // ecx
  int v81; // edx
  int v82; // ebx
  int v83; // eax
  int v84; // edx
  int v85; // esi
  int v86; // esi
  int v87; // ecx
  char *v88; // edx
  int v89; // esi
  int v90; // [esp-10h] [ebp-84h]
  char v91; // [esp+12h] [ebp-62h]
  bool v92; // [esp+13h] [ebp-61h] BYREF
  void *Block[2]; // [esp+14h] [ebp-60h] BYREF
  int v94; // [esp+1Ch] [ebp-58h]
  float v95; // [esp+20h] [ebp-54h]
  unsigned int v96; // [esp+24h] [ebp-50h]
  unsigned int v97; // [esp+28h] [ebp-4Ch]
  int v98[2]; // [esp+2Ch] [ebp-48h] BYREF
  int v99; // [esp+34h] [ebp-40h]
  int v100; // [esp+38h] [ebp-3Ch]
  int v101; // [esp+3Ch] [ebp-38h]
  int v102[2]; // [esp+40h] [ebp-34h] BYREF
  int v103; // [esp+48h] [ebp-2Ch]
  int v104; // [esp+4Ch] [ebp-28h]
  int v105; // [esp+50h] [ebp-24h] BYREF
  int v106; // [esp+54h] [ebp-20h]
  int v107; // [esp+58h] [ebp-1Ch] BYREF
  int v108; // [esp+5Ch] [ebp-18h]
  wchar_t Buffer[10]; // [esp+60h] [ebp-14h] BYREF
  int *v110; // [esp+78h] [ebp+4h]
  int *v111; // [esp+80h] [ebp+Ch]

  v107 = 4; /*0x709a9d*/
  v6 = 2; /*0x709aa5*/
  v7 = v110[1] - 1; /*0x709ab2*/
  v105 = *v110 + 6; /*0x709ab3*/
  vtable0 = (void (__thiscall **)(TechnoClass *))this->RadioClass; /*0x709ab7*/
  v106 = v7; /*0x709aba*/
  vtable0[34](this); /*0x709ac0*/
  v9 = (void (__thiscall **)(TechnoClass *))this->RadioClass; /*0x709acc*/
  v94 = FileSystem_PIPS_SHP; /*0x709acf*/
  v9[34](this); /*0x709ad5*/
  v10 = (void (__thiscall **)(TechnoClass *))this->RadioClass; /*0x709ae0*/
  v101 = FileSystem_PIPS_SHP; /*0x709ae5*/
  v10[34](this); /*0x709ae9*/
  v11 = FileSystem_PIPS2_SHP; /*0x709aef*/
  v12 = (int (__thiscall **)(TechnoClass *))this->RadioClass; /*0x709af5*/
  v98[0] = FileSystem_PIPS2_SHP; /*0x709afa*/
  v13 = v12[11](this); /*0x709afe*/
  v92 = v13 == 6; /*0x709b09*/
  if ( v13 != 6 ) /*0x709b0d*/
  {
    v14 = *v110; /*0x709b0f*/
    v106 = v110[1]; /*0x709b17*/
    v105 = v14 - 5; /*0x709b1b*/
    v6 = 0; /*0x709b24*/
    v107 = 4; /*0x709b26*/
    v94 = v11; /*0x709b2a*/
  }
  if ( (*((int (__thiscall **)(TechnoClass *))this->RadioClass + 11))(this) == 15 ) /*0x709b39*/
    v105 += 11; /*0x709b4a*/
  if ( !v92
    || (result = (*((int (__thiscall **)(TechnoClass *))this->RadioClass + 33))(this), *(_DWORD *)(result + 980) != 2) )
  {
    v95 = *(float *)((*((int (__thiscall **)(TechnoClass *))this->RadioClass + 33))(this) + 3420); /*0x709b81*/
    if ( SLODWORD(v95) > 0 ) /*0x709b85*/
    {
      v16 = 0; /*0x709b96*/
      *(float *)&v97 = COERCE_FLOAT(SpawnManagerClass::CountDockedSpawns(this->spawnManager)); /*0x709b98*/
      v17 = 0; /*0x709ba4*/
      *(float *)&v96 = 0.0; /*0x709ba6*/
      do /*0x709c25*/
      {
        Block[0] = (void *)(v17 + v105); /*0x709bc0*/
        v102[1] = v96 + v106; /*0x709bce*/
        v102[0] = v17 + v105; /*0x709be8*/
        DrawToSurfaceSHP( /*0x709c09*/
          (int)g_DSurface_Hidden_2,
          *(int *)&stru_87F5F0.__pad_58[124],
          v94,
          v16++ < (int)v97,
          v102,
          v111,
          1536,
          0,
          0,
          0,
          1000,
          0,
          0,
          0,
          0,
          0);
        v17 += v107; /*0x709c1b*/
        v96 += v6; /*0x709c21*/
      }
      while ( v16 < SLODWORD(v95) ); /*0x709c25*/
    }
    if ( v92 ) /*0x709c2d*/
    {
      v18 = (int (__thiscall **)(TechnoClass *))this->RadioClass; /*0x709c39*/
      v19 = *(void **)(this->gattlingValue + 5504); /*0x709c3c*/
      Block[0] = v19; /*0x709c44*/
      v95 = COERCE_FLOAT(v18[258](this)); /*0x709c4e*/
      if ( *(_BYTE *)(this->gattlingValue + 5508) ) /*0x709c58*/
      {
        if ( (int)v19 > 0 ) /*0x709c68*/
        {
          v20 = 0; /*0x709c6e*/
          v21 = 0; /*0x709c78*/
          *(float *)&v96 = 0.0; /*0x709c7a*/
          do /*0x709d17*/
          {
            if ( v20 < SLODWORD(v95) && (v22 = *(_DWORD *)(this->q1A2 + 4 * v20)) != 0 ) /*0x709c8f*/
              v97 = *(unsigned int *)(*(_DWORD *)(v22 + 1728) + 3584); /*0x709c9d*/
            else
              v97 = 6; /*0x709ca3*/
            v102[0] = v21 + v105; /*0x709cba*/
            v102[1] = v106 + v96; /*0x709cd6*/
            DrawToSurfaceSHP( /*0x709cfb*/
              (int)g_DSurface_Hidden_2,
              *(int *)&stru_87F5F0.__pad_58[124],
              v94,
              v97,
              v102,
              v111,
              1536,
              0,
              0,
              0,
              1000,
              0,
              0,
              0,
              0,
              0);
            ++v20; /*0x709d0c*/
            v21 += v107; /*0x709d0d*/
            v96 += v6; /*0x709d13*/
          }
          while ( v20 < (int)Block[0] ); /*0x709d17*/
        }
      }
    }
    if ( *(int *)((*((int (__thiscall **)(TechnoClass *))this->RadioClass + 33))(this) + 1504) <= 0 )
    {
      v95 = COERCE_FLOAT((*((int (__thiscall **)(TechnoClass *))this->RadioClass + 174))(this)); /*0x70a08e*/
      v46 = (*((int (__thiscall **)(TechnoClass *))this->RadioClass + 33))(this); /*0x70a097*/
      v47 = (void *)(*(int (__thiscall **)(int))(*(_DWORD *)v46 + 116))(v46); /*0x70a0a4*/
      v48 = (int (__thiscall **)(TechnoClass *))this->RadioClass; /*0x70a0a6*/
      Block[0] = v47; /*0x70a0ab*/
      if ( *(_DWORD *)(v48[33](this) + 980) == 5 ) /*0x70a0bc*/
      {
        v49 = 0; /*0x70a0c2*/
        if ( (int)v47 > 0 ) /*0x70a0c6*/
        {
          v50 = 0; /*0x70a0cc*/
          *(float *)&v97 = 0.0; /*0x70a0ce*/
          do /*0x70a156*/
          {
            v96 = v49 < SLODWORD(v95); /*0x70a0e2*/
            v102[0] = v50 + v105; /*0x70a0f9*/
            v102[1] = v106 + v97; /*0x70a115*/
            DrawToSurfaceSHP( /*0x70a13a*/
              (int)g_DSurface_Hidden_2,
              *(int *)&stru_87F5F0.__pad_58[124],
              v94,
              v96,
              v102,
              v111,
              1536,
              0,
              0,
              0,
              1000,
              0,
              0,
              0,
              0,
              0);
            ++v49; /*0x70a14b*/
            v50 += v107; /*0x70a14c*/
            v97 += v6; /*0x70a152*/
          }
          while ( v49 < (int)Block[0] ); /*0x70a156*/
        }
        captureManager = this->captureManager; /*0x70a15c*/
        v92 = 0; /*0x70a162*/
        if ( captureManager && CaptureManagerClass::IsOverloading((int)captureManager, &v92) ) /*0x70a170*/
        {
          v102[0] = v105 + v107 * v49; /*0x70a197*/
          v102[1] = v106 + v49 * v6; /*0x70a1ac*/
          DrawToSurfaceSHP( /*0x70a1d9*/
            (int)g_DSurface_Hidden_2,
            *(int *)&stru_87F5F0.__pad_58[124],
            v94,
            4 - v92,
            v102,
            v111,
            1536,
            0,
            0,
            0,
            1000,
            0,
            0,
            0,
            0,
            0);
        }
      }
      if ( *(_DWORD *)((*((int (__thiscall **)(TechnoClass *))this->RadioClass + 33))(this) + 980) == 2 ) /*0x70a1f0*/
      {
        FloatArray::Get((int *)&this->tiltSidewaysAngle, 0); /*0x70a200*/
        *(float *)&v96 = v1; /*0x70a205*/
        FloatArray::Get((int *)&this->tiltSidewaysAngle, 2); /*0x70a20d*/
        *(float *)&v97 = v2; /*0x70a212*/
        FloatArray::Get((int *)&this->tiltSidewaysAngle, 3); /*0x70a21a*/
        *(float *)v98 = v3; /*0x70a21f*/
        FloatArray::Get((int *)&this->tiltSidewaysAngle, 1); /*0x70a227*/
        v95 = v4; /*0x70a22c*/
        v52 = (int (__thiscall **)(TechnoClass *))this->RadioClass; /*0x70a234*/
        *(double *)v102 = (double)(int)Block[0]; /*0x70a239*/
        *(double *)v98 = *(float *)v98 + *(float *)&v97 + *(float *)&v96; /*0x70a249*/
        v53 = v52[33](this); /*0x70a24d*/
        LOWORD(v54) = Math::RoundToInt(*(double *)v98 / (double)*(int *)(v53 + 2048) * *(double *)v102 + 0.5); /*0x70a267*/
        v55 = (int (__thiscall **)(TechnoClass *))this->RadioClass; /*0x70a270*/
        *(double *)v98 = v95; /*0x70a275*/
        v96 = v54; /*0x70a279*/
        v56 = v55[33](this); /*0x70a27d*/
        LOWORD(v57) = Math::RoundToInt(*(double *)v98 / (double)*(int *)(v56 + 2048) * *(double *)v102 + 0.5); /*0x70a297*/
        v97 = v57; /*0x70a29c*/
        if ( (int)Block[0] > 0 ) /*0x70a2a6*/
        {
          v58 = 0; /*0x70a2ac*/
          v59 = 0; /*0x70a2ae*/
          v95 = *(float *)Block; /*0x70a2b0*/
          do /*0x70a33a*/
          {
            v60 = 0; /*0x70a2b8*/
            if ( (int)v97 <= 0 ) /*0x70a2bc*/
            {
              if ( (int)v96 > 0 ) /*0x70a2d0*/
              {
                v60 = 2; /*0x70a2d3*/
                --v96; /*0x70a2d8*/
              }
            }
            else
            {
              v60 = 5; /*0x70a2bf*/
              --v97; /*0x70a2c4*/
            }
            v102[0] = v59 + v105; /*0x70a2e7*/
            v102[1] = v58 + v106; /*0x70a303*/
            DrawToSurfaceSHP( /*0x70a324*/
              (int)g_DSurface_Hidden_2,
              *(int *)&stru_87F5F0.__pad_58[124],
              v94,
              v60,
              v102,
              v111,
              1536,
              0,
              0,
              0,
              1000,
              0,
              0,
              0,
              0,
              0);
            v59 += v107; /*0x70a331*/
            v58 += v6; /*0x70a333*/
            --LODWORD(v95); /*0x70a336*/
          }
          while ( v95 != 0.0 ); /*0x70a33a*/
        }
      }
      else if ( *(_DWORD *)((*((int (__usercall **)@<eax>(TechnoClass *@<ecx>))this->RadioClass + 33))(this) + 980) == 1 ) /*0x70a357*/
      {
        v102[0] = *(_DWORD *)((*((int (__thiscall **)(TechnoClass *))this->RadioClass + 33))(this) + 996); /*0x70a370*/
        v61 = v102[0]; /*0x70a368*/
        if ( v102[0] ) /*0x70a374*/
        {
          v65 = 0; /*0x70a425*/
          if ( v102[0] > 0 ) /*0x70a42c*/
          {
            v66 = 0; /*0x70a433*/
            LODWORD(v95) = (int)Block[0] / v102[0] - 1; /*0x70a435*/
            *(float *)&v96 = 0.0; /*0x70a439*/
            do /*0x70a4e6*/
            {
              v67 = LODWORD(v95); /*0x70a43d*/
              v97 = 14; /*0x70a441*/
              if ( v95 >= 0.0 ) /*0x70a44b*/
              {
                v94 = -v61; /*0x70a451*/
                v68 = v65 + v61 * LODWORD(v95); /*0x70a45a*/
                while ( v68 >= this->ammo ) /*0x70a462*/
                {
                  --v67; /*0x70a468*/
                  v68 += v94; /*0x70a469*/
                  if ( v67 < 0 ) /*0x70a46d*/
                    goto LABEL_87; /*0x70a46d*/
                }
                v97 = v67 + 15; /*0x70a474*/
              }
LABEL_87:
              Block[0] = (void *)(v105 + v66); /*0x70a478*/
              Block[1] = (void *)(v106 + v65 * v6 - 3); /*0x70a495*/
              DrawToSurfaceSHP( /*0x70a4cc*/
                (int)g_DSurface_Hidden_2,
                *(int *)&stru_87F5F0.__pad_58[124],
                v98[0],
                v97,
                (int *)Block,
                v111,
                1536,
                0,
                0,
                0,
                1000,
                0,
                0,
                0,
                0,
                0);
              v61 = v102[0]; /*0x70a4d9*/
              ++v65; /*0x70a4dd*/
              v66 = v107 + v96; /*0x70a4de*/
              v96 += v107; /*0x70a4e2*/
            }
            while ( v65 < v102[0] ); /*0x70a4e6*/
          }
        }
        else
        {
          v62 = LODWORD(v95); /*0x70a37e*/
          v63 = 0; /*0x70a382*/
          *(float *)&v97 = 0.0; /*0x70a386*/
          if ( (int)Block[0] > 0 ) /*0x70a38a*/
          {
            v64 = 0; /*0x70a390*/
            *(float *)&v96 = 0.0; /*0x70a392*/
            do /*0x70a416*/
            {
              if ( v62 > 0 ) /*0x70a398*/
              {
                LODWORD(v95) = v62 - 1; /*0x70a39f*/
                v102[1] = v106 + v63 * v6 - 3; /*0x70a3c1*/
                v102[0] = v105 + v64; /*0x70a3ec*/
                DrawToSurfaceSHP( /*0x70a3f0*/
                  (int)g_DSurface_Hidden_2,
                  *(int *)&stru_87F5F0.__pad_58[124],
                  v98[0],
                  0xDu,
                  v102,
                  v111,
                  1536,
                  0,
                  0,
                  0,
                  1000,
                  0,
                  0,
                  0,
                  0,
                  0);
                v63 = v97; /*0x70a3f5*/
                v62 = LODWORD(v95); /*0x70a3f9*/
                v64 = v96; /*0x70a3fd*/
              }
              ++v63; /*0x70a409*/
              v64 += v107; /*0x70a40a*/
              v97 = v63; /*0x70a40e*/
              v96 = v64; /*0x70a412*/
            }
            while ( v63 < (int)Block[0] ); /*0x70a416*/
          }
        }
      }
    }
    else
    {
      v23 = (int (__thiscall **)(TechnoClass *))this->RadioClass; /*0x709d38*/
      v102[0] = 0; /*0x709d3b*/
      v102[1] = 0; /*0x709d3f*/
      v24 = v23[34](this); /*0x709d45*/
      v25 = (*(int (__thiscall **)(int))(*(_DWORD *)v24 + 116))(v24); /*0x709d52*/
      v26 = (void (__thiscall **)(TechnoClass *))this->RadioClass; /*0x709d54*/
      v97 = v25; /*0x709d59*/
      v26[33](this); /*0x709d5d*/
      v27 = (void *)__2_YAPAXI_Z(4 * v25); /*0x709d73*/
      Block[0] = v27; /*0x709d77*/
      if ( v25 > 0 ) /*0x709d7b*/
        memset(v27, 0, 4 * v25); /*0x709d81*/
      v96 = this->passengers[0]; /*0x709d91*/
      v28 = HouseClass::SumPowerDrain((HouseClass *)this->passengers) - 1; /*0x709d9c*/
      if ( this
        && (*((int (__thiscall **)(TechnoClass *))this->RadioClass + 11))(this) == 6
        && (v29 = (*((int (__thiscall **)(TechnoClass *))this->RadioClass + 11))(this),
            InfantryClass::updateDeployAnimation(v29 == 6 ? (InfantryClass *)this : 0)) )
      {
        DB = (_DWORD *)CCINIClass::GetDB((CCINIClass *)this->passengers); /*0x709ddb*/
        v95 = 0.0; /*0x709de3*/
        if ( (int)v96 > 0 ) /*0x709deb*/
        {
          v31 = Block[0]; /*0x709df1*/
          do /*0x709e41*/
          {
            if ( !DB ) /*0x709df7*/
              break; /*0x709df7*/
            if ( (*(int (__thiscall **)(_DWORD *))(*DB + 44))(DB) == 15 ) /*0x709e07*/
            {
              *v31 = *(_DWORD *)(DB[432] + 3580); /*0x709e15*/
            }
            else
            {
              v32 = -((*(int (__thiscall **)(_DWORD *))(*DB + 44))(DB) != 1); /*0x709e23*/
              LOBYTE(v32) = v32 & 0xFD; /*0x709e25*/
              *v31 = v32 + 4; /*0x709e2a*/
            }
            DB = (_DWORD *)DB[12]; /*0x709e34*/
            ++v31; /*0x709e38*/
            ++LODWORD(v95); /*0x709e3d*/
          }
          while ( SLODWORD(v95) < (int)v96 ); /*0x709e41*/
        }
      }
      else
      {
        if ( v28 >= (int)v97 ) /*0x709e4c*/
        {
          __3_YAXPAX_Z(Block[0]); /*0x709e53*/
          return result; /*0x709e62*/
        }
        v33 = (_DWORD *)CCINIClass::GetDB((CCINIClass *)this->passengers); /*0x709e6c*/
        v95 = 0.0; /*0x709e74*/
        if ( (int)v96 > 0 ) /*0x709e7c*/
        {
          do /*0x709f4a*/
          {
            if ( !v33 ) /*0x709e84*/
              break; /*0x709e84*/
            if ( (*(int (__thiscall **)(_DWORD *))(*v33 + 44))(v33) == 15 ) /*0x709e94*/
            {
              v34 = (*(int (__thiscall **)(_DWORD *))(*v33 + 132))(v33); /*0x709e9a*/
              LOWORD(v35) = Math::RoundToInt(*(double *)(v34 + 896) - 1.0); /*0x709eac*/
              if ( v35 > 0 ) /*0x709eb3*/
              {
                v36 = (char *)Block[0] + 4 * v28; /*0x709eb9*/
                v28 -= v35; /*0x709ebc*/
                do /*0x709ec8*/
                {
                  *v36-- = 3; /*0x709ebe*/
                  --v35; /*0x709ec7*/
                }
                while ( v35 ); /*0x709ec8*/
              }
              *((_DWORD *)Block[0] + v28) = *(_DWORD *)(v33[432] + 3580); /*0x709eda*/
            }
            else if ( (*(int (__thiscall **)(_DWORD *))(*v33 + 44))(v33) == 1 ) /*0x709ee9*/
            {
              v37 = (*(int (__thiscall **)(_DWORD *))(*v33 + 132))(v33); /*0x709eef*/
              LOWORD(v38) = Math::RoundToInt(*(double *)(v37 + 896) - 1.0); /*0x709f01*/
              if ( v38 > 0 ) /*0x709f08*/
              {
                v39 = (char *)Block[0] + 4 * v28; /*0x709f0e*/
                v28 -= v38; /*0x709f11*/
                do /*0x709f1d*/
                {
                  *v39-- = 3; /*0x709f13*/
                  --v38; /*0x709f1c*/
                }
                while ( v38 ); /*0x709f1d*/
              }
              *((_DWORD *)Block[0] + v28) = 5; /*0x709f23*/
            }
            else
            {
              *((_DWORD *)Block[0] + v28) = 1; /*0x709f30*/
            }
            v33 = (_DWORD *)v33[12]; /*0x709f3f*/
            --v28; /*0x709f42*/
            ++LODWORD(v95); /*0x709f46*/
          }
          while ( SLODWORD(v95) < (int)v96 ); /*0x709f4a*/
        }
      }
      v40 = (int (__thiscall **)(TechnoClass *))this->RadioClass; /*0x709f50*/
      v41 = 0; /*0x709f53*/
      *(float *)&v96 = 0.0; /*0x709f57*/
      if ( *(_BYTE *)(v40[33](this) + 2053) ) /*0x709f61*/
      {
        DrawToSurfaceSHP( /*0x709fa6*/
          (int)g_DSurface_Hidden_2,
          *(int *)&stru_87F5F0.__pad_58[124],
          v94,
          *(_DWORD *)Block[0],
          &v105,
          v111,
          1536,
          0,
          0,
          0,
          1000,
          0,
          0,
          0,
          0,
          0);
        v41 = 1; /*0x709faf*/
        v96 = 1; /*0x709fb7*/
        v102[1] = 2 * v6; /*0x709fbe*/
        v102[0] = 2 * v107; /*0x709fc2*/
      }
      if ( v41 < (int)v97 ) /*0x709fca*/
      {
        v42 = v107 * v96; /*0x709fdc*/
        v43 = v96 * v6; /*0x709fe1*/
        v44 = v97 - v96; /*0x709feb*/
        v96 = (unsigned int)Block[0] + 4 * v96; /*0x709fed*/
        v97 = v44; /*0x709ff1*/
        do /*0x70a06f*/
        {
          v98[0] = v42 + v102[0] + v105; /*0x70a009*/
          v98[1] = v43 + v106 + v102[1]; /*0x70a025*/
          DrawToSurfaceSHP( /*0x70a04e*/
            (int)g_DSurface_Hidden_2,
            *(int *)&stru_87F5F0.__pad_58[124],
            v94,
            *(_DWORD *)v96,
            v98,
            v111,
            1536,
            0,
            0,
            0,
            1000,
            0,
            0,
            0,
            0,
            0);
          v42 += v107; /*0x70a05b*/
          v43 += v6; /*0x70a061*/
          v45 = v97 == 1; /*0x70a066*/
          v96 += 4; /*0x70a067*/
          --v97; /*0x70a06b*/
        }
        while ( !v45 ); /*0x70a06f*/
      }
      __3_YAXPAX_Z(Block[0]); /*0x70a076*/
    }
    v69 = (int (__thiscall **)(TechnoClass *))this->RadioClass; /*0x70a4ec*/
    v91 = 0; /*0x70a4f1*/
    v92 = 0; /*0x70a4f6*/
    v70 = 13; /*0x70a4fb*/
    v71 = 0; /*0x70a500*/
    v72 = 0; /*0x70a502*/
    if ( (v69[11](this) == 15 /*0x70a534*/
       || (*((int (__thiscall **)(TechnoClass *))this->RadioClass + 11))(this) == 1
       && *(_BYTE *)((*((int (__thiscall **)(TechnoClass *))this->RadioClass + 33))(this) + 3479))
      && IsTechInfiltrated((TechnoClass *)this->owner) )
    {
      v91 = 1; /*0x70a54c*/
      if ( *(_DWORD *)&stru_A8EB00.?[416] % *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 48) <= 5 /*0x70a56c*/
        && this->? < *(_DWORD *)((*((int (__thiscall **)(TechnoClass *))this->RadioClass + 33))(this) + 160) )
      {
        v92 = 1; /*0x70a56e*/
      }
      v70 = 13; /*0x70a573*/
    }
    if ( (*((int (__thiscall **)(TechnoClass *))this->RadioClass + 11))(this) == 1 /*0x70a5a0*/
      && !*(_BYTE *)((*((int (__thiscall **)(TechnoClass *))this->RadioClass + 33))(this) + 3479)
      && IsProductionInfiltrated((TechnoClass *)this->owner) )
    {
      v91 = 1; /*0x70a5b8*/
      if ( *(_DWORD *)&stru_A8EB00.?[416] % *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 56) <= 5 /*0x70a5d8*/
        && this->? < *(_DWORD *)((*((int (__thiscall **)(TechnoClass *))this->RadioClass + 33))(this) + 160) )
      {
        v92 = 1; /*0x70a5da*/
      }
      v70 = 20; /*0x70a5df*/
    }
    if ( (*((int (__thiscall **)(TechnoClass *))this->RadioClass + 11))(this) == 1 ) /*0x70a5ef*/
    {
      v71 = 38; /*0x70a5f1*/
      v72 = -32; /*0x70a5f6*/
    }
    else if ( (*((int (__thiscall **)(TechnoClass *))this->RadioClass + 11))(this) == 15 ) /*0x70a608*/
    {
      v71 = 19; /*0x70a60a*/
      v72 = -35; /*0x70a60f*/
    }
    if ( v91 ) /*0x70a61a*/
    {
      v107 = v105 + v71; /*0x70a651*/
      v108 = v72 + v106; /*0x70a658*/
      if ( v92 ) /*0x70a626*/
        DrawToSurfaceSHP( /*0x70a667*/
          (int)g_DSurface_Hidden_2,
          *(int *)&stru_87F5F0.__pad_58[124],
          v101,
          v70,
          &v107,
          v111,
          1537,
          0,
          0,
          0,
          1000,
          0,
          0,
          0,
          0,
          0);
      else
        DrawToSurfaceSHP( /*0x70a6bb*/
          (int)g_DSurface_Hidden_2,
          *(int *)&stru_87F5F0.__pad_58[124],
          v101,
          v70,
          &v107,
          v111,
          1536,
          0,
          0,
          0,
          1000,
          0,
          0,
          0,
          0,
          0);
    }
    result = (*((int (__thiscall **)(TechnoClass *))this->RadioClass + 11))(this); /*0x70a6c5*/
    if ( result != 6 ) /*0x70a6cf*/
    {
      v73 = v110[1]; /*0x70a6d3*/
      v74 = (int (__thiscall **)(TechnoClass *, int *, _DWORD *, int *))this->RadioClass; /*0x70a6d6*/
      v107 = *v110 - 10; /*0x70a6df*/
      v108 = v73 + 10; /*0x70a6ea*/
      result = v74[278](this, &v107, v110, v111); /*0x70a6f7*/
    }
    controlGroup = this->controlGroup; /*0x70a6fd*/
    if ( controlGroup <= 9 )
    {
      v76 = controlGroup + 1; /*0x70a714*/
      if ( v76 == 10 ) /*0x70a718*/
        v76 = 0; /*0x70a71a*/
      v77 = (*((int (__thiscall **)(TechnoClass *))this->RadioClass + 11))(this) != 15 ? -33 : -36;
      swprintf(Buffer, (const size_t)g_Str_Fmt_PctD, v76 >= 10 ? 0 : (const wchar_t *const)v76);
      v90 = v110[1] + v77 - 3; /*0x70a764*/
      v107 = *v110 - 4; /*0x70a76e*/
      v108 = v90; /*0x70a772*/
      TextBoundingRect = GetTextBoundingRect(v102, (int)Buffer, v107, v90, 73, 2, -2); /*0x70a776*/
      v98[0] = *TextBoundingRect; /*0x70a784*/
      v79 = *v111; /*0x70a78d*/
      v98[1] = TextBoundingRect[1]; /*0x70a78f*/
      v80 = TextBoundingRect[2]; /*0x70a793*/
      v99 = v80; /*0x70a796*/
      v81 = TextBoundingRect[3]; /*0x70a79a*/
      v102[0] = v79; /*0x70a79d*/
      v82 = v111[1]; /*0x70a7a1*/
      v100 = v81; /*0x70a7a4*/
      v102[1] = v82; /*0x70a7a8*/
      v83 = 0; /*0x70a7ac*/
      v84 = 0; /*0x70a7b1*/
      v85 = v111[3]; /*0x70a7b5*/
      v103 = v111[2]; /*0x70a7b8*/
      v104 = v85; /*0x70a7bc*/
      if ( v80 <= 0 || v100 <= 0 || v111[2] <= 0 || v111[3] <= 0 ) /*0x70a7e9*/
        goto LABEL_134; /*0x70a7e9*/
      if ( v102[0] < v98[0] ) /*0x70a7f9*/
      {
        v103 += v102[0] - v98[0]; /*0x70a807*/
        v102[0] = v98[0]; /*0x70a80b*/
      }
      if ( v103 < 1 ) /*0x70a814*/
        goto LABEL_134; /*0x70a814*/
      if ( v102[1] < v98[1] ) /*0x70a824*/
      {
        v104 += v102[1] - v98[1]; /*0x70a832*/
        v102[1] = v98[1]; /*0x70a836*/
      }
      if ( v104 < 1 ) /*0x70a83f*/
        goto LABEL_134; /*0x70a83f*/
      if ( v102[0] + v103 > v80 + v98[0] ) /*0x70a853*/
        v103 = v98[0] + v80 - v102[0]; /*0x70a861*/
      if ( v103 < 1 || (v104 + v102[1] <= v98[1] + v100 ? (v86 = v104) : (v86 = v100 + v98[1] - v102[1]), v86 < 1) )
      {
LABEL_134:
        v87 = 0; /*0x70a8ab*/
        v86 = 0; /*0x70a8ad*/
      }
      else
      {
        v83 = v102[0]; /*0x70a89d*/
        v87 = v102[1]; /*0x70a8a1*/
        v84 = v103; /*0x70a8a5*/
      }
      v98[0] = v83; /*0x70a8af*/
      v98[1] = v87; /*0x70a8b5*/
      v99 = v84 + 1; /*0x70a8b9*/
      v88 = (char *)&this->owner->base[4] + 1; /*0x70a8c3*/
      v100 = v86; /*0x70a8c9*/
      v98[0] = v83 - 1; /*0x70a8cd*/
      LOWORD(v102[0]) = *(_WORD *)v88; /*0x70a8d6*/
      BYTE2(v102[0]) = v88[2]; /*0x70a8de*/
      v89 = (LOBYTE(v102[0]) >> g_BitShift_Green_0 << g_BitShift_Red) /*0x70a939*/
          | (BYTE1(v102[0]) >> g_BitMask_Blue << g_BitMask_Green)
          | (BYTE2(v102[0]) >> g_BitMask_Red << g_BitShift_Blue);
      (*(void (__thiscall **)(AudioStream *, int *, _DWORD))(*(_DWORD *)g_DSurface_Hidden_2->__pad_0 + 20))( /*0x70a940*/
        g_DSurface_Hidden_2,
        v98,
        0);
      (*(void (__thiscall **)(AudioStream *, int *, int))(*(_DWORD *)g_DSurface_Hidden_2->__pad_0 + 88))( /*0x70a951*/
        g_DSurface_Hidden_2,
        v98,
        v89);
      return (int)globalHelper_0A66D0(v102, (int)Buffer, (int)g_DSurface_Hidden_2, v111, (int)&v107, v89, 0, 73, -1, 1); /*0x70a97b*/
    }
  }
  return result; /*0x709e5b*/
}


// ==== 0x0070A990  TechnoClass::DrawVeterancy  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::DrawVeterancy(TechnoClass *this)
{
  int v2; // ebp
  unsigned int v3; // ebx
  int result; // eax
  int (__thiscall **vtable0)(TechnoClass *); // edx
  int v6; // eax
  int v7; // [esp+10h] [ebp-8h] BYREF
  int v8; // [esp+14h] [ebp-4h]
  _DWORD *v9; // [esp+1Ch] [ebp+4h]
  int *v10; // [esp+20h] [ebp+8h]

  (*((void (__thiscall **)(TechnoClass *))this->RadioClass + 34))(this); /*0x70a99b*/
  v2 = FileSystem_PIPS_SHP; /*0x70a9a1*/
  v3 = -1; /*0x70a9af*/
  if ( (unsigned __int8)Audio::IsMediumVolume(this->veterancy) ) /*0x70a9b2*/
    v3 = 14; /*0x70a9bb*/
  if ( (unsigned __int8)Audio::IsLoud(this->veterancy) ) /*0x70a9c2*/
    v3 = 15; /*0x70a9cb*/
  result = VeinholeClass::GetState((float *)this->veterancy); /*0x70a9d2*/
  if ( (_BYTE)result ) /*0x70a9d9*/
  {
    v3 = 19; /*0x70a9db*/
  }
  else if ( v3 == -1 ) /*0x70a9e5*/
  {
    return result; /*0x70a9e5*/
  }
  vtable0 = (int (__thiscall **)(TechnoClass *))this->RadioClass; /*0x70a9eb*/
  v6 = *v9 + 5; /*0x70a9f5*/
  v8 = v9[1] + 2; /*0x70a9f8*/
  v7 = v6; /*0x70a9fe*/
  if ( vtable0[11](this) != 15 ) /*0x70aa08*/
  {
    v7 += 5; /*0x70aa18*/
    v8 += 4; /*0x70aa1c*/
  }
  return DrawToSurfaceSHP( /*0x70aa54*/
           (int)g_DSurface_Hidden_2,
           *(int *)&stru_87F5F0.__pad_58[124],
           v2,
           v3,
           &v7,
           v10,
           3584,
           0,
           -2,
           0,
           1000,
           0,
           0,
           0,
           0,
           0);
}



// ==== 0x0070AA60  TechnoClass::DrawPowerIndicator  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::DrawPowerIndicator(TechnoClass *this)
{
  int result; // eax
  unsigned __int16 *v3; // esi
  int v4; // eax
  wchar_t *StringCSF; // eax
  int *TextBoundingRect; // eax
  int *v7; // eax
  unsigned __int16 *v8; // edx
  unsigned __int8 *v9; // eax
  int v10; // esi
  unsigned __int16 *v11; // eax
  int (__thiscall **vtable0)(TechnoClass *); // edx
  int *v13; // eax
  int *v14; // eax
  unsigned __int8 *owner; // edi
  int v16; // esi
  const wchar_t *v17; // [esp+Ch] [ebp-144h]
  int v18; // [esp+20h] [ebp-130h] BYREF
  int v19; // [esp+24h] [ebp-12Ch] BYREF
  int v20; // [esp+28h] [ebp-128h]
  int v21; // [esp+2Ch] [ebp-124h]
  unsigned __int16 *p_arrayIndex; // [esp+30h] [ebp-120h] BYREF
  _DWORD v23[3]; // [esp+34h] [ebp-11Ch] BYREF
  _DWORD v24[4]; // [esp+40h] [ebp-110h] BYREF
  unsigned __int16 v25[2]; // [esp+50h] [ebp-100h] BYREF
  wchar_t Buffer[126]; // [esp+54h] [ebp-FCh] BYREF
  int *v27; // [esp+158h] [ebp+8h]
  int *v28; // [esp+15Ch] [ebp+Ch]

  result = (*((int (__thiscall **)(TechnoClass *))this->RadioClass + 11))(this); /*0x70aa6e*/
  if ( result != 6 || (result = *(_DWORD *)(this->gattlingValue + 3808), result <= 0) ) /*0x70aa96*/
  {
LABEL_5:
    LOBYTE(result) = this->isPrimaryFactory; /*0x70abea*/
    if ( !(_BYTE)result ) /*0x70abf2*/
      return result; /*0x70abf2*/
    goto LABEL_6; /*0x70abf2*/
  }
  if ( !this->isPrimaryFactory ) /*0x70aa9c*/
  {
    p_arrayIndex = (unsigned __int16 *)&this->owner->arrayIndex; /*0x70aabd*/
    v3 = p_arrayIndex; /*0x70aab6*/
    v4 = (*(int (__stdcall **)(unsigned __int16 *))(*(_DWORD *)v3 + 36))(v3); /*0x70aac3*/
    v17 = (const wchar_t *)(*(int (__stdcall **)(unsigned __int16 *, int))(*(_DWORD *)v3 + 32))(v3, v4); /*0x70aacd*/
    StringCSF = GetStringCSF((wchar_t *)&g_INI_Key_TRUCKA.?, 0, (const char *)&g_INI_Key_TRUCKA.?[1], 15483); /*0x70aadf*/
    swprintf(Buffer, (const size_t)StringCSF, v17); /*0x70aaea*/
    TextBoundingRect = GetTextBoundingRect(v23, (int)Buffer, *v27, v27[1], 329, 4, 2); /*0x70ab0a*/
    v19 = *TextBoundingRect; /*0x70ab13*/
    v20 = TextBoundingRect[1]; /*0x70ab1d*/
    v21 = TextBoundingRect[2]; /*0x70ab24*/
    p_arrayIndex = (unsigned __int16 *)TextBoundingRect[3]; /*0x70ab2f*/
    v7 = ClipRectIntersection(v23, &v19, v28, 0, 0); /*0x70ab37*/
    v19 = *v7; /*0x70ab3e*/
    v20 = v7[1]; /*0x70ab45*/
    v21 = v7[2]; /*0x70ab4c*/
    v8 = (unsigned __int16 *)v7[3]; /*0x70ab52*/
    v9 = (unsigned __int8 *)&this->owner->base[4] + 1; /*0x70ab5b*/
    p_arrayIndex = v8; /*0x70ab60*/
    v10 = (*v9 >> g_BitShift_Green_0 << g_BitShift_Red) /*0x70abae*/
        | (v9[1] >> g_BitMask_Blue << g_BitMask_Green)
        | (v9[2] >> g_BitMask_Red << g_BitShift_Blue);
    (*(void (__thiscall **)(AudioStream *, int *))(*(_DWORD *)g_DSurface_Hidden_2->__pad_0 + 20))( /*0x70abb7*/
      g_DSurface_Hidden_2,
      &v19);
    (*(void (__thiscall **)(AudioStream *, int *, int))(*(_DWORD *)g_DSurface_Hidden_2->__pad_0 + 88))( /*0x70abc8*/
      g_DSurface_Hidden_2,
      &v18,
      v10);
    result = (int)RenderTextLabel( /*0x70abe5*/
                    (int *)&p_arrayIndex,
                    v25,
                    (int *)g_DSurface_Hidden_2->__pad_0,
                    v28,
                    (int)v27,
                    v10,
                    0,
                    329,
                    1);
    goto LABEL_5; /*0x70abe5*/
  }
LABEL_6:
  v11 = GetStringCSF((wchar_t *)&g_INI_Key_TRUCKA.?[1], 0, (const char *)&g_INI_Key_TRUCKA.?[1], 15502); /*0x70abf8*/
  vtable0 = (int (__thiscall **)(TechnoClass *))this->RadioClass; /*0x70ac0e*/
  p_arrayIndex = v11; /*0x70ac12*/
  if ( vtable0[11](this) == 6 && BuildingTypeClass::GetFoundationWidth(*((BuildingTypeClass **)this + 328)) == 1 ) /*0x70ac2c*/
    p_arrayIndex = GetStringCSF((wchar_t *)&g_INI_Key_TRUCKA.?[1], 0, (const char *)&g_INI_Key_TRUCKA.?[1], 15504); /*0x70ac44*/
  v13 = GetTextBoundingRect(v24, (int)p_arrayIndex, *v27, v27[1], 329, 4, 2); /*0x70ac60*/
  v18 = *v13; /*0x70ac69*/
  v19 = v13[1]; /*0x70ac73*/
  v20 = v13[2]; /*0x70ac7e*/
  v21 = v13[3]; /*0x70ac89*/
  v14 = ClipRectIntersection(v24, &v18, v28, 0, 0); /*0x70ac8d*/
  owner = (unsigned __int8 *)this->owner; /*0x70ac94*/
  v18 = *v14; /*0x70ac9a*/
  v19 = v14[1]; /*0x70aca9*/
  v20 = v14[2]; /*0x70acb0*/
  v21 = v14[3]; /*0x70acbf*/
  v16 = (owner[22265] >> g_BitShift_Green_0 << g_BitShift_Red) /*0x70ad07*/
      | (owner[22266] >> g_BitMask_Blue << g_BitMask_Green)
      | (owner[22267] >> g_BitMask_Red << g_BitShift_Blue);
  (*(void (__stdcall **)(int *, _DWORD))(*(_DWORD *)g_DSurface_Hidden_2->__pad_0 + 20))(&v18, 0); /*0x70ad0e*/
  (*(void (__thiscall **)(AudioStream *, int *, int))(*(_DWORD *)g_DSurface_Hidden_2->__pad_0 + 88))( /*0x70ad1f*/
    g_DSurface_Hidden_2,
    &v18,
    v16);
  return (int)RenderTextLabel( /*0x70ad42*/
                (int *)&p_arrayIndex,
                p_arrayIndex,
                (int *)g_DSurface_Hidden_2->__pad_0,
                v28,
                (int)v27,
                v16,
                0,
                329,
                1);
}



// ==== 0x0070AD50  TechnoClass::GetCellCoordsV2  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::GetCellCoordsV2(TechnoClass *this)
{
  _DWORD *v1; // eax
  _BYTE v3[12]; // [esp+0h] [ebp-Ch] BYREF
  _DWORD *v4; // [esp+10h] [ebp+4h]
  int v5; // [esp+14h] [ebp+8h]
  int v6; // [esp+14h] [ebp+8h]

  v1 = (_DWORD *)(*((int (__thiscall **)(TechnoClass *, _BYTE *, int))this->RadioClass + 42))(this, v3, v5); /*0x70ad5f*/
  LOWORD(v6) = *v1 / 256; /*0x70ad75*/
  HIWORD(v6) = v1[1] / 256; /*0x70ad89*/
  *v4 = v6; /*0x70ad96*/
  return (int)v4; /*0x70ad98*/
}



// ==== 0x0070ADA0  TechnoClass::Vt46Thunk  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::Vt46Thunk(TechnoClass *this)
{
  int v2; // eax

  v2 = (*((int (__thiscall **)(TechnoClass *))this->RadioClass + 33))(this); /*0x70ada5*/
  return (*(int (__thiscall **)(int, HouseClass *, _DWORD))(*(_DWORD *)v2 + 184))(v2, this->owner, 0); /*0x70adbe*/
}



// ==== 0x0070ADC0  TechnoClass::RevealAreaSmall  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::RevealAreaSmall(TechnoClass *this)
{
  int result; // eax
  int v3; // eax
  int v4; // eax
  int v5; // eax
  int v6; // ebp
  int v7; // eax
  int v8; // edx
  int v9; // ecx
  int v10; // [esp+8h] [ebp-10h]
  int v11; // [esp+Ch] [ebp-Ch] BYREF
  int v12; // [esp+10h] [ebp-8h]
  int v13; // [esp+14h] [ebp-4h]
  char v14; // [esp+1Ch] [ebp+4h]
  char v15; // [esp+20h] [ebp+8h]

  LOBYTE(result) = this->isInPlayfield; /*0x70adc7*/
  if ( (_BYTE)result ) /*0x70adcf*/
  {
    if ( !*(_BYTE *)(this->owner->relatedTagsCapacity + 422) || (result = *(_DWORD *)&dword_A8B238) == 0 ) /*0x70adef*/
    {
      v11 = this->?[0]; /*0x70adff*/
      v12 = this->?[1]; /*0x70ae06*/
      v3 = 10 * (this->?[2] / *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 5820)); /*0x70ae24*/
      if ( v3 > this->sightRangeBonus ) /*0x70ae28*/
        v14 = 0; /*0x70ae2a*/
      this->sightRangeBonus = v3; /*0x70ae2f*/
      v4 = (*((int (__thiscall **)(TechnoClass *))this->RadioClass + 33))(this); /*0x70ae3b*/
      LOWORD(v5) = Math::RoundToInt((double)*(int *)(v4 + 1512) * ((double)this->sightRangeBonus * 0.01 + 1.0)); /*0x70ae64*/
      v10 = v5; /*0x70ae6f*/
      if ( (unsigned __int8)Audio::IsMediumVolume(this->veterancy) || (unsigned __int8)Audio::IsLoud(this->veterancy) ) /*0x70ae80*/
      {
        if ( (v6 = (*((int (__thiscall **)(TechnoClass *))this->RadioClass + 33))(this), /*0x70aebf*/
              (unsigned __int8)Audio::IsMediumVolume(this->veterancy))
          && *(_BYTE *)(v6 + 673)
          || (unsigned __int8)Audio::IsLoud(this->veterancy) && (*(_BYTE *)(v6 + 673) || *(_BYTE *)(v6 + 691)) )
        {
          if ( *(double *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 1664) != 0.0 ) /*0x70aee0*/
          {
            LOWORD(v7) = Math::RoundToInt((double)v10 * *(double *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 1664)); /*0x70aeec*/
            v10 = v7; /*0x70aef1*/
          }
        }
      }
      result = v10; /*0x70aef5*/
      if ( v10 ) /*0x70aefd*/
      {
        v8 = this->?[1]; /*0x70af01*/
        v11 = this->?[0]; /*0x70af04*/
        v9 = this->?[2]; /*0x70af08*/
        v12 = v8; /*0x70af0b*/
        v13 = v9; /*0x70af17*/
        return MapClass::RevealArea0((MapClass *)&stru_87F5F0.__pad_58[416], &v11, v10, this->owner, v14, v15, 0, 1, 1); /*0x70af35*/
      }
    }
  }
  return result; /*0x70af3a*/
}



// ==== 0x0070AF50  TechnoClass::ScanForEnemies  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::ScanForEnemies(TechnoClass *this)
{
  int result; // eax
  int *location; // edi
  int v4; // eax
  int v5; // eax
  int v6; // eax
  int v7; // ebx
  int v8; // eax
  int v9; // eax
  int v10; // ecx
  int v11; // edx
  int v12; // edx
  int v13; // ecx
  int v14; // [esp+Ch] [ebp-14h]
  int v15; // [esp+10h] [ebp-10h]
  int v16; // [esp+14h] [ebp-Ch] BYREF
  int v17; // [esp+18h] [ebp-8h]
  int v18; // [esp+1Ch] [ebp-4h]
  char v19; // [esp+24h] [ebp+4h]
  int v20; // [esp+28h] [ebp+8h]
  char v21; // [esp+2Ch] [ebp+Ch]
  void *v22; // [esp+30h] [ebp+10h]
  int v23; // [esp+34h] [ebp+14h]

  LOBYTE(result) = this->isInPlayfield; /*0x70af58*/
  if ( (_BYTE)result ) /*0x70af60*/
  {
    result = (int)this->owner; /*0x70af66*/
    LOBYTE(result) = *(_BYTE *)(*(_DWORD *)(result + 52) + 422); /*0x70af6f*/
    if ( !(_BYTE)result /*0x70af97*/
      && (*(_DWORD *)((*((int (__thiscall **)(TechnoClass *))this->RadioClass + 33))(this) + 1512) || (result = v23) != 0) )
    {
      location = this->?; /*0x70af9d*/
      v16 = this->?[0]; /*0x70afa7*/
      v17 = this->?[1]; /*0x70afb4*/
      v4 = 10 * (this->?[2] / *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 5820)); /*0x70afcc*/
      if ( v4 > this->sightRangeBonus ) /*0x70afd0*/
        v19 = 0; /*0x70afd2*/
      this->sightRangeBonus = v4; /*0x70afd7*/
      v5 = (*((int (__thiscall **)(TechnoClass *))this->RadioClass + 33))(this); /*0x70afe2*/
      LOWORD(v6) = Math::RoundToInt((double)*(int *)(v5 + 1512) * ((double)this->sightRangeBonus * 0.01 + 1.0)); /*0x70b00b*/
      v7 = v6; /*0x70b016*/
      v15 = v6; /*0x70b01a*/
      if ( (unsigned __int8)Audio::IsMediumVolume(this->veterancy) || (unsigned __int8)Audio::IsLoud(this->veterancy) ) /*0x70b029*/
      {
        if ( (v14 = (*((int (__thiscall **)(TechnoClass *))this->RadioClass + 33))(this), /*0x70b072*/
              (unsigned __int8)Audio::IsMediumVolume(this->veterancy))
          && *(_BYTE *)(v14 + 673)
          || (unsigned __int8)Audio::IsLoud(this->veterancy) && (*(_BYTE *)(v14 + 673) || *(_BYTE *)(v14 + 691)) )
        {
          if ( *(double *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 1664) != 0.0 ) /*0x70b093*/
          {
            LOWORD(v8) = Math::RoundToInt((double)v15 * *(double *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 1664)); /*0x70b09f*/
            v7 = v8; /*0x70b0a4*/
          }
        }
      }
      result = v23; /*0x70b0a6*/
      if ( v23 ) /*0x70b0ad*/
        v7 = v23; /*0x70b0af*/
      if ( !this->isChronosphereImmune ) /*0x70b0b1*/
      {
        v9 = *location; /*0x70b0c9*/
        this->isChronosphereImmune = 1; /*0x70b0cb*/
        this->lastSightCoords[0] = v9; /*0x70b0d2*/
        this->lastSightRange = v7; /*0x70b0d4*/
        result = this->?[1]; /*0x70b0da*/
        this->lastSightCoords[1] = result; /*0x70b0dd*/
        this->lastSightCoords[2] = this->?[2]; /*0x70b0e3*/
        if ( !v7 ) /*0x70b0e6*/
          return result; /*0x70b0e6*/
        if ( !v21 || !v22 ) /*0x70b0fa*/
        {
          v10 = this->?[1]; /*0x70b13c*/
          v11 = this->?[2]; /*0x70b13f*/
          v16 = *location; /*0x70b142*/
          v17 = v10; /*0x70b14c*/
          v18 = v11; /*0x70b156*/
          return MapClass::RevealArea1((MapClass *)&stru_87F5F0.__pad_58[416], &v16, v7, this->owner, v19, v20, 0, 1, 0); /*0x70b17b*/
        }
        goto LABEL_26; /*0x70b0fa*/
      }
      LOBYTE(result) = v21; /*0x70b17e*/
      if ( v21 ) /*0x70b184*/
      {
        if ( v7 ) /*0x70b188*/
        {
          result = (int)v22; /*0x70b18a*/
          if ( v22 ) /*0x70b190*/
          {
LABEL_26:
            v12 = this->?[1]; /*0x70b192*/
            v16 = *location; /*0x70b197*/
            v13 = this->?[2]; /*0x70b19b*/
            v17 = v12; /*0x70b19e*/
            v18 = v13; /*0x70b1a8*/
            return MapClass::RevealArea1((MapClass *)&stru_87F5F0.__pad_58[416], &v16, v7, v22, v19, v20, 0, 1, 0); /*0x70b1c2*/
          }
        }
      }
    }
  }
  return result; /*0x70b131*/
}



// ==== 0x0070B1D0  TechnoClass::RevealAreaConditional  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::RevealAreaConditional(TechnoClass *this)
{
  int result; // eax
  HouseClass *owner; // esi
  void *v3; // edx
  char v4; // [esp+8h] [ebp+4h]
  int v5; // [esp+Ch] [ebp+8h]
  char v6; // [esp+10h] [ebp+Ch]
  void *v7; // [esp+14h] [ebp+10h]

  LOBYTE(result) = this->isInPlayfield; /*0x70b1d0*/
  if ( (_BYTE)result ) /*0x70b1d9*/
  {
    owner = this->owner; /*0x70b1df*/
    result = owner->relatedTagsCapacity; /*0x70b1e5*/
    if ( !*(_BYTE *)(result + 422) ) /*0x70b1e8*/
    {
      if ( this->isChronosphereImmune ) /*0x70b1f2*/
      {
        result = this->lastSightRange; /*0x70b1fc*/
        this->isChronosphereImmune = 0; /*0x70b202*/
        if ( !result ) /*0x70b20b*/
          return result; /*0x70b20b*/
        if ( !v6 ) /*0x70b213*/
          return MapClass::RevealArea1( /*0x70b213*/
                   (MapClass *)&stru_87F5F0.__pad_58[416],
                   this->lastSightCoords,
                   result,
                   owner,
                   v4,
                   v5,
                   0,
                   1,
                   1);
        v3 = v7; /*0x70b215*/
        if ( !v7 ) /*0x70b21b*/
          return MapClass::RevealArea1( /*0x70b232*/
                   (MapClass *)&stru_87F5F0.__pad_58[416],
                   this->lastSightCoords,
                   result,
                   owner,
                   v4,
                   v5,
                   0,
                   1,
                   1);
        return MapClass::RevealArea1( /*0x70b21b*/
                 (MapClass *)&stru_87F5F0.__pad_58[416],
                 this->lastSightCoords,
                 result,
                 v3,
                 v4,
                 v5,
                 0,
                 1,
                 1);
      }
      LOBYTE(result) = v6; /*0x70b234*/
      if ( v6 ) /*0x70b23a*/
      {
        result = this->lastSightRange; /*0x70b23c*/
        if ( result ) /*0x70b244*/
        {
          v3 = v7; /*0x70b246*/
          if ( v7 ) /*0x70b24c*/
            return MapClass::RevealArea1( /*0x70b24e*/
                     (MapClass *)&stru_87F5F0.__pad_58[416],
                     this->lastSightCoords,
                     result,
                     v3,
                     v4,
                     v5,
                     0,
                     1,
                     1);
        }
      }
    }
  }
  return result; /*0x70b271*/
}



// ==== 0x0070B280  TechnoClass::ComputeAimVector  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::ComputeAimVector(TechnoClass *this)
{
  int result; // eax
  int v3; // edi
  int v4; // ecx
  int v5; // eax
  int v6; // edi
  unsigned int v7; // edi
  unsigned int v8; // ebx
  float v11; // eax
  double v14; // [esp+0h] [ebp-60h]
  double v15; // [esp+0h] [ebp-60h]
  double v16; // [esp+0h] [ebp-60h]
  float v18; // [esp+18h] [ebp-48h]
  double v20; // [esp+28h] [ebp-38h] BYREF
  float v21; // [esp+30h] [ebp-30h]
  double v22; // [esp+3Ch] [ebp-24h]
  float v23; // [esp+44h] [ebp-1Ch]
  double v24; // [esp+48h] [ebp-18h]
  float v25; // [esp+50h] [ebp-10h]
  _DWORD *v27; // [esp+68h] [ebp+8h]
  char v29; // [esp+70h] [ebp+10h]

  result = (*((int (__thiscall **)(TechnoClass *))this->RadioClass + 33))(this); /*0x70b290*/
  if ( *(_DWORD *)(result + 176) ) /*0x70b296*/
  {
    result = *(_DWORD *)((*((int (__thiscall **)(TechnoClass *))this->RadioClass + 33))(this) + 176); /*0x70b2ae*/
    if ( !*(_BYTE *)result ) /*0x70b2b4*/
    {
      v3 = this->?[1]; /*0x70b2ce*/
      LODWORD(v20) = this->?[0] - *v27; /*0x70b2d1*/
      __asm { fild [esp+58h+var_38] } /*0x70b2d5*/
      v4 = this->?[2]; /*0x70b2dc*/
      v5 = v27[1] - v3; /*0x70b2df*/
      v6 = v27[2]; /*0x70b2e1*/
      __asm { fstp [esp+58h+var_24] } /*0x70b2e4*/
      LODWORD(v20) = v5; /*0x70b2e8*/
      __asm { fild [esp+58h+var_38] } /*0x70b2ee*/
      LODWORD(v20) = v4 - v6; /*0x70b2f2*/
      __asm /*0x70b302*/
      {
        fstp [esp+58h+var_20]
        fild [esp+58h+var_38]
      }
      v24 = v22; /*0x70b315*/
      __asm { fstp [esp+5Ch+var_1C] } /*0x70b319*/
      v25 = v23; /*0x70b321*/
      LODWORD(v20) = *(__int16 *)ProgressTimer::GetValue((ProgressTimer *)this->primaryFacing, &v20) - 0x3FFF; /*0x70b333*/
      __asm /*0x70b337*/
      {
        fild [esp+58h+var_38]
        fmul ds:dbl_7E2810
        fstp qword ptr [esp+58h+var_38]
      }
      v7 = HIDWORD(v20); /*0x70b345*/
      v8 = LODWORD(v20); /*0x70b34d*/
      Math::SinCos(v20); /*0x70b34f*/
      __asm { fstp [esp+60h+var_3C] } /*0x70b354*/
      Math::ArcTan2(COERCE_DOUBLE(__PAIR64__(v7, v8))); /*0x70b35a*/
      __asm /*0x70b35f*/
      {
        fstp [esp+68h+var_C]
        fld [esp+68h+var_1C]
        fld [esp+68h+var_20]
        fld [esp+68h+var_24]
        fld st
        fmul st, st(1)
        fld st(2)
        fmul st, st(3)
      }
      __asm
      {
        faddp st(1), st
        fld st(3)
        fmul st, st(4)
        faddp st(1), st
        fstp [esp+60h+var_60]; double
        fstp st
        fstp st
        fstp st
      }
      Math::Sqrt(v14); /*0x70b38b*/
      __asm /*0x70b390*/
      {
        fst [esp+60h+var_38]
        fmul ds:flt_7F4E58
      }
      __asm
      {
        fsubr ds:flt_7F4E54
        fmul [ebp+arg_4]
        fstp qword ptr [esp+58h+var_48]
      }
      result = (*((int (__thiscall **)(TechnoClass *))this->RadioClass + 33))(this); /*0x70b3ae*/
      __asm /*0x70b3b4*/
      {
        fld qword ptr [esp+58h+var_48]
        fdiv qword ptr [eax+370h]
        fstp [esp+58h+var_48]
        fld [esp+58h+var_38]
        fabs
        fcomp ds:dbl_7EC0B0
        fnstsw ax
      }
      if ( (result & 0x100) == 0 ) /*0x70b3d3*/
      {
        __asm /*0x70b3d9*/
        {
          fld [esp+58h+var_48]
          fcomp ds:flt_7F4E34
          fnstsw ax
        }
        if ( (result & 0x100) == 0 ) /*0x70b3e8*/
        {
          __asm /*0x70b3ee*/
          {
            fld [esp+58h+var_48]
            fcomp ds:flt_7F4E50
            fnstsw ax
          }
          if ( (_AX & 0x4100) == 0 ) /*0x70b3fd*/
            v18 = 0.050000001; /*0x70b3ff*/
          __asm /*0x70b407*/
          {
            fld [esp+58h+var_14]
            fmul [esp+58h+var_14]
            fld [esp+58h+var_18]
            fmul [esp+58h+var_18]
          }
          v25 = 0.0; /*0x70b41a*/
          __asm /*0x70b422*/
          {
            faddp st(1), st
            fstp [esp+60h+var_60]; double
          }
          Math::Sqrt(v15); /*0x70b427*/
          __asm { fcom ds:dbl_7E2800 } /*0x70b42c*/
          __asm { fnstsw ax }
          if ( (_AX & 0x4000) != 0 ) /*0x70b43a*/
          {
            v11 = v25; /*0x70b478*/
            v22 = v24; /*0x70b47c*/
            __asm { fstp st } /*0x70b480*/
          }
          else
          {
            __asm /*0x70b43c*/
            {
              fld [esp+58h+var_18]
              fdiv st, st(1)
              fstp [esp+58h+var_38]
              fld [esp+58h+var_14]
              fdiv st, st(1)
            }
            __asm { fstp [esp+58h+var_38+4] }
            __asm { fdivr ds:dbl_7E2800 }
            v22 = v20; /*0x70b462*/
            __asm { fstp [esp+58h+var_30] } /*0x70b466*/
            v11 = v21; /*0x70b46a*/
          }
          __asm /*0x70b486*/
          {
            fld [esp+58h+var_24]
            fmul [esp+58h+var_C]
            fld [esp+58h+var_20]
            fmul [esp+58h+var_3C]
          }
          v23 = v11; /*0x70b496*/
          __asm /*0x70b49d*/
          {
            faddp st(1), st
            fstp [esp+60h+var_38]
            fld [esp+60h+var_1C]
            fmul [esp+60h+var_3C]
            fchs
            fstp [esp+60h+var_18]
            fld [esp+60h+var_1C]
            fmul [esp+60h+var_C]
            fstp [esp+60h+var_14]
            fld [esp+60h+var_24]
            fmul [esp+60h+var_3C]
            fld [esp+60h+var_20]
            fmul [esp+60h+var_C]
            fsubp st(1), st
            fld [esp+60h+var_14]
            fld [esp+60h+var_18]
            fld st
            fmul st, st(1)
            fld st(2)
            fmul st, st(3)
            faddp st(1), st
            fld st(3)
            fmul st, st(4)
            faddp st(1), st
            fstp [esp+60h+var_60]; double
            fstp st
            fstp st
            fstp st
          }
          result = Math::Sqrt(v16); /*0x70b4f0*/
          __asm /*0x70b4f5*/
          {
            fld [esp+60h+var_C]
            fmul [esp+60h+var_38]
            fld [esp+60h+var_3C]
            fmul st, st(2)
          }
          __asm
          {
            fsubp st(1), st
            fsub [esp+58h+var_24]
            fabs
            fcomp ds:dbl_7EC0A8
            fnstsw ax
          }
          if ( (result & 0x4100) == 0 ) /*0x70b519*/
            goto LABEL_12; /*0x70b519*/
          __asm /*0x70b51b*/
          {
            fld [esp+58h+var_C]
            fmul st, st(1)
            fld [esp+58h+var_3C]
            fmul [esp+58h+var_38]
            faddp st(1), st
            fsub [esp+58h+var_20]
            fabs
            fcomp ds:dbl_7EC0A8
            fnstsw ax
          }
          if ( (result & 0x4100) == 0 ) /*0x70b53c*/
LABEL_12:
            __asm { fchs } /*0x70b53e*/
          LOBYTE(result) = v29; /*0x70b540*/
          __asm /*0x70b543*/
          {
            fld [esp+58h+var_38]
            fmul [esp+58h+var_48]
          }
          if ( !v29 ) /*0x70b54d*/
            __asm { fmul ds:flt_7E5168 } /*0x70b54f*/
          __asm { fstp dword ptr [esi+334h] } /*0x70b555*/
          this->firingParticles = _ET1; /*0x70b555*/
          __asm /*0x70b55b*/
          {
            fmul [esp+58h+var_48]
            fchs
            fstp dword ptr [esi+330h]
          }
          this->auxParticles2 = _ET1; /*0x70b561*/
        }
      }
    }
  }
  return result; /*0x70b567*/
}



// ==== 0x0070B570  TechnoClass::UpdateBodyTilt  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::UpdateBodyTilt(TechnoClass *this)
{
  int result; // eax
  bool v3; // dl
  __int16 v4; // fps
  double v5; // st7
  char v6; // c0
  bool v7; // c0
  char v8; // c2
  bool v9; // c3
  int (__thiscall **vtable0)(TechnoClass *); // edx
  double v11; // st7
  double v12; // st7
  __int16 v13; // fps
  bool v14; // c0
  char v15; // c2
  bool v16; // c3
  bool v17; // cl
  double v18; // st7
  unsigned __int8 v20; // c0
  unsigned __int8 v21; // c3
  double v22; // st7
  double v23; // st7
  bool v24; // dl
  bool v25; // cl
  double v26; // st7
  double v27; // st7
  double v28; // st7
  __int16 v29; // fps
  double v30; // st7
  bool v31; // c0
  char v32; // c2
  bool v33; // c3
  int v34; // eax
  void *v35; // edx
  bool v36; // [esp+Ah] [ebp-Eh]
  bool v37; // [esp+Ah] [ebp-Eh]
  ParticleSystemClass *railgunParticles_2; // [esp+Ch] [ebp-Ch]
  float v39; // [esp+Ch] [ebp-Ch]
  float v40; // [esp+10h] [ebp-8h]
  float v41; // [esp+14h] [ebp-4h] BYREF

  v3 = *(float *)&this->railgunParticles_2 > 0.00002; /*0x70b58a*/
  v36 = *(float *)&this->railgunParticles_2 < -0.00002; /*0x70b5aa*/
  if ( this->isSinking ) /*0x70b5ae*/
  {
    v5 = *(float *)&this->auxParticles1; /*0x70b5c6*/
    if ( v6 ) /*0x70b5d1*/
      v5 = -v5; /*0x70b5d3*/
    v7 = v5 < 0.78539819; /*0x70b5d5*/
    v8 = 0; /*0x70b5d5*/
    v9 = v5 == 0.78539819; /*0x70b5d5*/
    LOWORD(result) = v4; /*0x70b5db*/
    if ( v5 < 0.78539819 ) /*0x70b5e0*/
    {
      result = ((unsigned int)((*ProgressTimer::GetValue((ProgressTimer *)this->primaryFacing, &v41) >> 12) + 1) >> 1) /*0x70b5fe*/
             & 7;
      if ( result && result <= 5 ) /*0x70b606*/
        *(float *)&this->auxParticles1 = *(float *)&this->auxParticles1 + 0.01; /*0x70b619*/
      else
        *(float *)&this->auxParticles1 = *(float *)&this->auxParticles1 - 0.01; /*0x70b631*/
    }
    return result; /*0x70b624*/
  }
  if ( this->isCrashing ) /*0x70b63d*/
  {
    vtable0 = (int (__thiscall **)(TechnoClass *))this->RadioClass; /*0x70b655*/
    *(float *)&this->auxParticles1 = *(float *)&this->firingParticles + *(float *)&this->auxParticles1; /*0x70b659*/
    *(float *)&this->railgunParticles_2 = *(float *)&this->auxParticles2 + *(float *)&this->railgunParticles_2; /*0x70b66b*/
    result = vtable0[33](this); /*0x70b671*/
    if ( *(_BYTE *)(result + 3434) ) /*0x70b677*/
    {
      if ( *(float *)&this->auxParticles1 <= -0.78539819 ) /*0x70b694*/
        v11 = -0.78539819; /*0x70b69e*/
      else
        v11 = *(float *)&this->auxParticles1; /*0x70b696*/
      *(float *)&this->auxParticles1 = v11; /*0x70b6a4*/
      if ( *(float *)&this->railgunParticles_2 <= -0.78539819 ) /*0x70b6bb*/
        v12 = -0.78539819; /*0x70b6c5*/
      else
        v12 = *(float *)&this->railgunParticles_2; /*0x70b6bd*/
      *(float *)&this->railgunParticles_2 = v12; /*0x70b6cb*/
      v14 = v12 < 0.78539819; /*0x70b6d3*/
      v15 = 0; /*0x70b6d3*/
      v16 = v12 == 0.78539819; /*0x70b6d3*/
      LOWORD(result) = v13; /*0x70b6d9*/
      if ( v12 >= 0.78539819 ) /*0x70b6de*/
        *(float *)&this->railgunParticles_2 = 0.78539819; /*0x70b6f4*/
      else
        *(float *)&this->railgunParticles_2 = v12; /*0x70b6e0*/
    }
    return result; /*0x70b6eb*/
  }
  v17 = *(float *)&this->railgunParticles_2 > 1.5707964; /*0x70b715*/
  if ( *(float *)&this->railgunParticles_2 < -1.5707964 ) /*0x70b728*/
    v17 = 1; /*0x70b72a*/
  if ( *(float *)&this->auxParticles2 == 0.0 ) /*0x70b73d*/
  {
    this->railgunParticles_2 = 0; /*0x70b921*/
    goto LABEL_61; /*0x70b921*/
  }
  v18 = *(float *)&this->auxParticles2 + *(float *)&this->railgunParticles_2; /*0x70b749*/
  railgunParticles_2 = this->railgunParticles_2; /*0x70b755*/
  *(float *)&this->railgunParticles_2 = v18; /*0x70b75f*/
  if ( !(v20 | v21) && !this->rockerLinkedUnit && !v17 && *(float *)&railgunParticles_2 < 0.78539819 ) /*0x70b787*/
  {
    this->railgunParticles_2 = (ParticleSystemClass *)1061752795; /*0x70b78b*/
LABEL_33:
    this->auxParticles2 = 0; /*0x70b7cb*/
    goto LABEL_34; /*0x70b7cb*/
  }
  if ( v18 < -0.78539819 && !this->rockerLinkedUnit && !v17 && *(float *)&railgunParticles_2 > -0.78539819 ) /*0x70b7bf*/
  {
    this->railgunParticles_2 = (ParticleSystemClass *)-1085730853; /*0x70b7c1*/
    goto LABEL_33; /*0x70b7c1*/
  }
LABEL_34:
  v22 = *(float *)&this->auxParticles2; /*0x70b7d1*/
  if ( !v3 ) /*0x70b7e1*/
  {
    result = (int)this->rockerLinkedUnit; /*0x70b882*/
    if ( v22 >= 0.0 ) /*0x70b888*/
    {
      if ( result ) /*0x70b8cf*/
      {
        if ( !v17 ) /*0x70b8d3*/
        {
          *(float *)&this->auxParticles2 = *(float *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 6328) /*0x70b8ed*/
                                         * 0.0020000001
                                         + *(float *)&this->auxParticles2;
          goto LABEL_63; /*0x70b8f3*/
        }
      }
      else if ( !v17 ) /*0x70b8f7*/
      {
        *(float *)&this->auxParticles2 = *(float *)&this->auxParticles2 + 0.005000000237487257; /*0x70b919*/
        goto LABEL_63; /*0x70b91f*/
      }
    }
    else if ( result ) /*0x70b88c*/
    {
      if ( !v17 ) /*0x70b890*/
      {
        *(float *)&this->auxParticles2 = *(float *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 6328) * 0.0020000001 /*0x70b8aa*/
                                       + *(float *)&this->auxParticles2;
        goto LABEL_63; /*0x70b8b0*/
      }
    }
    else if ( !v17 ) /*0x70b8b7*/
    {
      *(float *)&this->auxParticles2 = *(float *)&this->auxParticles2 + 0.0020000001; /*0x70b8c5*/
      goto LABEL_63; /*0x70b8cb*/
    }
    *(float *)&this->auxParticles2 = *(float *)&this->auxParticles2 - 0.0020000001; /*0x70b905*/
    goto LABEL_63; /*0x70b90b*/
  }
  result = (int)this->rockerLinkedUnit; /*0x70b7ea*/
  if ( v22 <= 0.0 ) /*0x70b7f0*/
  {
    if ( result ) /*0x70b851*/
    {
      if ( !v17 ) /*0x70b855*/
      {
        HIWORD(result) = *(_WORD *)&DSurface_ViewBounds.__pad_FC[326]; /*0x70b857*/
        v23 = *(float *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 6328); /*0x70b85c*/
        goto LABEL_39; /*0x70b862*/
      }
    }
    else if ( !v17 ) /*0x70b866*/
    {
      *(float *)&this->auxParticles2 = *(float *)&this->auxParticles2 - 0.005000000237487257; /*0x70b874*/
      goto LABEL_61; /*0x70b87a*/
    }
    goto LABEL_41; /*0x70b855*/
  }
  if ( !result ) /*0x70b7f4*/
  {
    if ( !v17 ) /*0x70b81f*/
    {
      *(float *)&this->auxParticles2 = *(float *)&this->auxParticles2 - 0.0020000001; /*0x70b844*/
      goto LABEL_61; /*0x70b84a*/
    }
    goto LABEL_41; /*0x70b81f*/
  }
  if ( v17 ) /*0x70b7f8*/
  {
LABEL_41:
    *(float *)&this->auxParticles2 = *(float *)&this->auxParticles2 + 0.0020000001; /*0x70b821*/
    goto LABEL_61; /*0x70b833*/
  }
  v23 = *(float *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 6328); /*0x70b800*/
LABEL_39:
  *(float *)&this->auxParticles2 = *(float *)&this->auxParticles2 - v23 * 0.0020000001; /*0x70b806*/
LABEL_61:
  if ( v3 && *(float *)&this->railgunParticles_2 < 0.00002 ) /*0x70b93c*/
    goto LABEL_65; /*0x70b93c*/
LABEL_63:
  if ( v36 && *(float *)&this->railgunParticles_2 > -0.00002 ) /*0x70b955*/
  {
LABEL_65:
    this->auxParticles2 = 0; /*0x70b957*/
    this->railgunParticles_2 = 0; /*0x70b95d*/
  }
  v24 = *(float *)&this->auxParticles1 > 0.00002; /*0x70b963*/
  v37 = *(float *)&this->auxParticles1 < -0.00002; /*0x70b994*/
  v25 = *(float *)&this->auxParticles1 > 1.5707964; /*0x70b9ad*/
  if ( *(float *)&this->auxParticles1 < -1.5707964 ) /*0x70b9c0*/
    v25 = 1; /*0x70b9c2*/
  if ( *(float *)&this->firingParticles == 0.0 ) /*0x70b9d5*/
  {
    this->auxParticles1 = 0; /*0x70bbe1*/
    goto LABEL_110; /*0x70bbe1*/
  }
  v26 = *(float *)&this->firingParticles + *(float *)&this->auxParticles1; /*0x70b9e1*/
  v41 = *(float *)&this->auxParticles1; /*0x70b9ef*/
  v40 = v26; /*0x70b9f3*/
  *(float *)&this->auxParticles1 = v26; /*0x70b9f7*/
  v27 = 0.78539819; /*0x70b9fd*/
  if ( this && (this->? & 4) != 0 && *((_BYTE *)this + 1717) ) /*0x70ba13*/
    v27 = 0.31415927; /*0x70ba1d*/
  if ( v40 > v27 && !this->rockerLinkedUnit && !v25 && v41 < v27 ) /*0x70ba47*/
  {
    *(float *)&this->auxParticles1 = v27; /*0x70ba49*/
LABEL_83:
    this->firingParticles = 0; /*0x70ba8b*/
    goto LABEL_84; /*0x70ba8b*/
  }
  v39 = -v27; /*0x70ba53*/
  if ( v40 < (double)v39 && !this->rockerLinkedUnit && !v25 && v41 > (double)v39 ) /*0x70ba7f*/
  {
    *(float *)&this->auxParticles1 = v39; /*0x70ba85*/
    goto LABEL_83; /*0x70ba85*/
  }
LABEL_84:
  v28 = *(float *)&this->firingParticles; /*0x70ba91*/
  if ( !v24 ) /*0x70baa1*/
  {
    result = (int)this->rockerLinkedUnit; /*0x70bb57*/
    if ( v28 >= 0.0 ) /*0x70bb5d*/
    {
      if ( result ) /*0x70bb8f*/
      {
        if ( !v25 ) /*0x70bb93*/
        {
          *(float *)&this->firingParticles = *(float *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 6328) /*0x70bbad*/
                                           * 0.0020000001
                                           + *(float *)&this->firingParticles;
          goto LABEL_112; /*0x70bbb3*/
        }
        goto LABEL_107; /*0x70bb93*/
      }
      if ( v25 ) /*0x70bbb7*/
        goto LABEL_107; /*0x70bbb7*/
    }
    else
    {
      if ( result ) /*0x70bb61*/
      {
        if ( !v25 ) /*0x70bb65*/
        {
          *(float *)&this->firingParticles = *(float *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 6328) /*0x70bb7f*/
                                           * 0.0020000001
                                           + *(float *)&this->firingParticles;
          goto LABEL_112; /*0x70bb85*/
        }
LABEL_107:
        *(float *)&this->firingParticles = *(float *)&this->firingParticles - 0.0020000001; /*0x70bbb9*/
        goto LABEL_112; /*0x70bbcb*/
      }
      if ( v25 ) /*0x70bb89*/
        goto LABEL_107; /*0x70bb89*/
    }
    *(float *)&this->firingParticles = *(float *)&this->firingParticles + 0.005000000237487257; /*0x70bbd9*/
    goto LABEL_112; /*0x70bbdf*/
  }
  result = (int)this->rockerLinkedUnit; /*0x70baaa*/
  if ( v28 <= 0.0 ) /*0x70bab0*/
  {
    if ( result ) /*0x70bafa*/
    {
      if ( !v25 ) /*0x70bafe*/
      {
        HIWORD(result) = *(_WORD *)&DSurface_ViewBounds.__pad_FC[326]; /*0x70bb00*/
        *(float *)&this->firingParticles = *(float *)&this->firingParticles /*0x70bb17*/
                                         - *(float *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 6328)
                                         * 0.0020000001;
        goto LABEL_110; /*0x70bb1d*/
      }
LABEL_95:
      *(float *)&this->firingParticles = *(float *)&this->firingParticles + 0.0020000001; /*0x70bb26*/
      goto LABEL_110; /*0x70bb38*/
    }
    if ( v25 ) /*0x70bb24*/
      goto LABEL_95; /*0x70bb24*/
LABEL_96:
    *(float *)&this->firingParticles = *(float *)&this->firingParticles - 0.005000000237487257; /*0x70bb3d*/
    goto LABEL_110; /*0x70bb4f*/
  }
  if ( !result ) /*0x70bab4*/
  {
    if ( v25 ) /*0x70badf*/
    {
      *(float *)&this->firingParticles = *(float *)&this->firingParticles + 0.0020000001; /*0x70baed*/
      goto LABEL_110; /*0x70baf3*/
    }
    goto LABEL_96; /*0x70badf*/
  }
  if ( v25 ) /*0x70bab8*/
    goto LABEL_95; /*0x70bab8*/
  *(float *)&this->firingParticles = *(float *)&this->firingParticles /*0x70bad2*/
                                   - *(float *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 6328) * 0.0020000001;
LABEL_110:
  if ( v24 && *(float *)&this->auxParticles1 < 0.00002 ) /*0x70bbfc*/
    goto LABEL_114; /*0x70bbfc*/
LABEL_112:
  if ( v37 && *(float *)&this->auxParticles1 > -0.00002 ) /*0x70bc15*/
  {
LABEL_114:
    this->firingParticles = 0; /*0x70bc17*/
    this->auxParticles1 = 0; /*0x70bc1d*/
  }
  if ( *(float *)&this->railgunParticles_2 > 3.1415927 /*0x70bc6d*/
    || *(float *)&this->railgunParticles_2 < -3.1415927
    || *(float *)&this->auxParticles1 > 3.1415927
    || (v30 = *(float *)&this->auxParticles1,
        v31 = v30 < -3.1415927,
        v32 = 0,
        v33 = v30 == -3.1415927,
        LOWORD(result) = v29,
        v30 < -3.1415927) )
  {
    v34 = (*((int (__thiscall **)(TechnoClass *))this->RadioClass + 33))(this); /*0x70bc73*/
    v35 = this->RadioClass; /*0x70bc84*/
    v41 = *(float *)(v34 + 160); /*0x70bc87*/
    return (*((int (__thiscall **)(TechnoClass *, float *, _DWORD, _DWORD, _DWORD, int, _DWORD, _DWORD))v35 + 91))( /*0x70bc9e*/
             this,
             &v41,
             0,
             *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 4008),
             0,
             1,
             0,
             0);
  }
  return result; /*0x70b61f*/
}



// ==== 0x0070BCB0  TechnoClass::GetTargetCoords  this=TechnoClass  sig=csp ====
int *__thiscall TechnoClass::GetTargetCoords(TechnoClass *this, int *a2)
{
  double v2; // st7
  int v3; // ebp
  int v5; // edi
  AbstractClass *target; // ecx
  int *v7; // eax
  AbstractClass *v8; // ecx
  AbstractClass *v9; // ebx
  TechnoClass **v10; // eax
  TechnoClass *v11; // ecx
  int v12; // eax
  int v13; // eax
  int v14; // eax
  void *v16; // [esp+10h] [ebp-30h]
  int WeaponRange; // [esp+10h] [ebp-30h]
  int v18; // [esp+10h] [ebp-30h]
  int v20; // [esp+18h] [ebp-28h]
  int v21; // [esp+18h] [ebp-28h]
  double v22; // [esp+18h] [ebp-28h]
  double v23; // [esp+20h] [ebp-20h] BYREF
  double v24; // [esp+28h] [ebp-18h] BYREF
  int v25; // [esp+34h] [ebp-Ch]
  int v26; // [esp+38h] [ebp-8h]

  v3 = g_BuildingLoadQueue_Array.?[4]; /*0x70bcba*/
  v5 = g_BuildingLoadQueue_Array.?[5]; /*0x70bcc4*/
  target = this->target; /*0x70bcca*/
  v25 = g_BuildingLoadQueue_Array.?[3]; /*0x70bcd0*/
  if ( target ) /*0x70bcd6*/
  {
    v7 = (int *)(*((int (__thiscall **)(AbstractClass *, double *))target->vtable0 + 22))(target, &v24); /*0x70bce3*/
    v25 = *v7; /*0x70bce8*/
    v8 = this->target; /*0x70bcec*/
    v3 = v7[1]; /*0x70bcf2*/
    v5 = v7[2]; /*0x70bcf7*/
    v26 = v3; /*0x70bcfa*/
    if ( v8 ) /*0x70bcfe*/
    {
      if ( (*((int (__thiscall **)(AbstractClass *))v8->vtable0 + 11))(v8) == 1 ) /*0x70bd0c*/
      {
        v9 = this->target; /*0x70bd12*/
        if ( v9 ) /*0x70bd1a*/
        {
          if ( !v9[45].NeedsSaveOrLink ) /*0x70bd20*/
            WinAPI::Wrapper(-2147467261); /*0x70bd2f*/
          if ( (*(unsigned __int8 (__stdcall **)(void *))(*(_DWORD *)v9[45].NeedsSaveOrLink + 16))(v9[45].NeedsSaveOrLink) ) /*0x70bd3d*/
          {
            v20 = (*((int (__thiscall **)(AbstractClass *))v9->vtable0 + 334))(v9); /*0x70bd52*/
            v16 = (void *)ObjectClass::DistanceTo((ObjectClass *)this, (int)this->target); /*0x70bd68*/
            v10 = (TechnoClass **)(*((int (__thiscall **)(TechnoClass *))this->RadioClass + 253))(this); /*0x70bd6c*/
            if ( v10 ) /*0x70bd74*/
            {
              v11 = *v10; /*0x70bd7a*/
              if ( *v10 ) /*0x70bd7a*/
              {
                __asm { fild [esp+40h+var_30] } /*0x70bd84*/
                __asm { fstp qword ptr [esp+44h+var_20] }
                WeaponRange = TechnoClass::GetWeaponRange(v11, v16); /*0x70bd96*/
                __asm /*0x70bd9a*/
                {
                  fild [esp+40h+var_30]
                  fmul ds:dbl_7F4E80
                  fdivr qword ptr [esp+40h+var_20]
                  fimul dword ptr [esp+40h+var_28]
                }
                LOWORD(v12) = Math::RoundToInt(v2); /*0x70bdac*/
                v18 = v12; /*0x70bdb5*/
                v21 = *(__int16 *)ProgressTimer::GetValue((ProgressTimer *)&v9[25].vtable1, &v23) - 0x3FFF; /*0x70bdce*/
                __asm /*0x70bdd2*/
                {
                  fild dword ptr [esp+40h+var_28]
                  fmul ds:dbl_7E2810
                  fstp [esp+40h+var_28]
                  fild [esp+40h+var_30]
                }
                __asm
                {
                  fstp qword ptr [esp+48h+var_30]
                  fild [esp+48h+var_8]
                  fstp [esp+48h+var_18]
                }
                Math::SinCos(v22); /*0x70bdfa*/
                __asm /*0x70bdff*/
                {
                  fmul qword ptr [esp+48h+var_30]
                  fsubr [esp+48h+var_18]
                }
                LOWORD(v13) = Math::RoundToInt(v2); /*0x70be07*/
                v3 = v13; /*0x70be0e*/
                Math::ArcTan2(v22); /*0x70be10*/
                __asm { fmul qword ptr [esp+50h+var_30] } /*0x70be15*/
                __asm { fiadd [esp+40h+var_C] }
                LOWORD(v14) = Math::RoundToInt(v2); /*0x70be20*/
                v25 = v14; /*0x70be25*/
              }
            }
          }
        }
      }
    }
  }
  *a2 = v25; /*0x70be33*/
  a2[1] = v3; /*0x70be35*/
  a2[2] = v5; /*0x70be38*/
  return a2; /*0x70be3b*/
}



// ==== 0x0070BE50  TechnoClass::CalcOffsetFacing  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::CalcOffsetFacing(TechnoClass *this)
{
  int v2; // edi
  int v3; // eax

  v2 = (*((int (__stdcall **)(void **))this->? + 4))(&this->?); /*0x70be64*/
  LOWORD(v3) = Math::RoundToInt(this->warpFactor); /*0x70be66*/
  return (v2 + v3) % 400; /*0x70be75*/
}



// ==== 0x0070BE80  TechnoClass::ShouldSelfHealOneStep  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::ShouldSelfHealOneStep(TechnoClass *this)
{
  int result; // eax
  int v3; // edi
  int v4; // eax
  int v5; // et2
  int health; // edi

  if ( *(_BYTE *)((*((int (__thiscall **)(TechnoClass *))this->RadioClass + 33))(this) + 3348) /*0x70bee9*/
    || ((unsigned __int8)Audio::IsMediumVolume(this->veterancy)
     || (result = Audio::IsLoud(this->veterancy), (_BYTE)result))
    && ((v3 = (*((int (__thiscall **)(TechnoClass *))this->RadioClass + 33))(this),
         (unsigned __int8)Audio::IsMediumVolume(this->veterancy))
     && *(_BYTE *)(v3 + 677)
     || (result = Audio::IsLoud(this->veterancy), (_BYTE)result) && (*(_BYTE *)(v3 + 677) || *(_BYTE *)(v3 + 695))) )
  {
    LOWORD(v4) = Math::RoundToInt(*(double *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 5856) * 900.0); /*0x70bf0a*/
    v5 = *(_DWORD *)&stru_A8EB00.?[416] % v4; /*0x70bf17*/
    result = *(_DWORD *)&stru_A8EB00.?[416] / v4; /*0x70bf17*/
    if ( v5 ) /*0x70bf1b*/
    {
      LOBYTE(result) = 0; /*0x70bf1f*/
    }
    else
    {
      health = this->?; /*0x70bf25*/
      result = (*((int (__thiscall **)(TechnoClass *))this->RadioClass + 33))(this); /*0x70bf2a*/
      LOBYTE(result) = health != *(_DWORD *)(result + 160) && health != 0; /*0x70bf3a*/
    }
  }
  else
  {
    LOBYTE(result) = 0; /*0x70bef5*/
  }
  return result; /*0x70bef3*/
}



// ==== 0x0070BF50  BuildingClass::AllocAndCtor  this=TechnoClass  sig=csp ====
int __stdcall BuildingClass_AllocAndCtor(int a1, int a2)
{
  int result; // eax
  int v3; // edi
  int v4; // ebp

  result = RadioClass::LoadState(a1, a2); /*0x70bf5c*/
  if ( result >= 0 ) /*0x70bf65*/
  {
    *(_DWORD *)(a1 + 1300) = 0; /*0x70bf79*/
    ObjectPtr::RegisterForTracking(&SwizzleManagerClass_Instance, a1 + 540); /*0x70bf7f*/
    v3 = a1 + 772; /*0x70bf84*/
    v4 = 8; /*0x70bf8a*/
    do /*0x70bf9e*/
    {
      ObjectPtr::RegisterForTracking(&SwizzleManagerClass_Instance, v3); /*0x70bf95*/
      v3 += 4; /*0x70bf9a*/
      --v4; /*0x70bf9d*/
    }
    while ( v4 ); /*0x70bf9e*/
    ObjectPtr::RegisterForTracking(&SwizzleManagerClass_Instance, a1 + 332); /*0x70bfac*/
    ObjectPtr::RegisterForTracking(&SwizzleManagerClass_Instance, a1 + 740); /*0x70bfbd*/
    ObjectPtr::RegisterForTracking(&SwizzleManagerClass_Instance, a1 + 536); /*0x70bfce*/
    ObjectPtr::RegisterForTracking(&SwizzleManagerClass_Instance, a1 + 1280); /*0x70bfdf*/
    ObjectPtr::RegisterForTracking(&SwizzleManagerClass_Instance, a1 + 692); /*0x70bff0*/
    ObjectPtr::RegisterForTracking(&SwizzleManagerClass_Instance, a1 + 696); /*0x70c001*/
    ObjectPtr::RegisterForTracking(&SwizzleManagerClass_Instance, a1 + 700); /*0x70c012*/
    ObjectPtr::RegisterForTracking(&SwizzleManagerClass_Instance, a1 + 1076); /*0x70c023*/
    ObjectPtr::RegisterForTracking(&SwizzleManagerClass_Instance, a1 + 720); /*0x70c034*/
    ObjectPtr::RegisterForTracking(&SwizzleManagerClass_Instance, a1 + 728); /*0x70c045*/
    ObjectPtr::RegisterForTracking(&SwizzleManagerClass_Instance, a1 + 732); /*0x70c056*/
    ObjectPtr::RegisterForTracking(&SwizzleManagerClass_Instance, a1 + 704); /*0x70c067*/
    ObjectPtr::RegisterForTracking(&SwizzleManagerClass_Instance, a1 + 716); /*0x70c078*/
    ObjectPtr::RegisterForTracking(&SwizzleManagerClass_Instance, a1 + 736); /*0x70c089*/
    ObjectPtr::RegisterForTracking(&SwizzleManagerClass_Instance, a1 + 724); /*0x70c09a*/
    ObjectPtr::RegisterForTracking(&SwizzleManagerClass_Instance, a1 + 1304); /*0x70c0ab*/
    ObjectPtr::RegisterForTracking(&SwizzleManagerClass_Instance, a1 + 1308); /*0x70c0bc*/
    ObjectPtr::RegisterForTracking(&SwizzleManagerClass_Instance, a1 + 628); /*0x70c0cd*/
    ObjectPtr::RegisterForTracking(&SwizzleManagerClass_Instance, a1 + 632); /*0x70c0de*/
    ObjectPtr::RegisterForTracking(&SwizzleManagerClass_Instance, a1 + 660); /*0x70c0ef*/
    ObjectPtr::RegisterForTracking(&SwizzleManagerClass_Instance, a1 + 460); /*0x70c100*/
    ObjectPtr::RegisterForTracking(&SwizzleManagerClass_Instance, a1 + 464); /*0x70c111*/
    ObjectPtr::RegisterForTracking(&SwizzleManagerClass_Instance, a1 + 284); /*0x70c122*/
    ObjectPtr::RegisterForTracking(&SwizzleManagerClass_Instance, a1 + 680); /*0x70c133*/
    ObjectPtr::RegisterForTracking(&SwizzleManagerClass_Instance, a1 + 684); /*0x70c144*/
    ObjectPtr::RegisterForTracking(&SwizzleManagerClass_Instance, a1 + 688); /*0x70c155*/
    ObjectPtr::RegisterForTracking(&SwizzleManagerClass_Instance, a1 + 1064); /*0x70c166*/
    ObjectPtr::RegisterForTracking(&SwizzleManagerClass_Instance, a1 + 1068); /*0x70c177*/
    ObjectPtr::RegisterForTracking(&SwizzleManagerClass_Instance, a1 + 280); /*0x70c188*/
    ObjectPtr::RegisterForTracking(&SwizzleManagerClass_Instance, a1 + 804); /*0x70c199*/
    ObjectPtr::RegisterForTracking(&SwizzleManagerClass_Instance, a1 + 304); /*0x70c1aa*/
    ObjectPtr::RegisterForTracking(&SwizzleManagerClass_Instance, a1 + 300); /*0x70c1bb*/
    ObjectPtr::RegisterForTracking(&SwizzleManagerClass_Instance, a1 + 712); /*0x70c1cc*/
    ObjectPtr::RegisterForTracking(&SwizzleManagerClass_Instance, a1 + 468); /*0x70c1dd*/
    AudioController::Init((_DWORD *)(a1 + 1160)); /*0x70c1e8*/
    *(_DWORD *)(a1 + 1180) = 1; /*0x70c1f3*/
    *(_DWORD *)(a1 + 1184) = 0; /*0x70c1fd*/
    AudioController::Init((_DWORD *)(a1 + 1188)); /*0x70c203*/
    *(_BYTE *)(a1 + 1208) = 0; /*0x70c20e*/
    *(_DWORD *)(a1 + 1212) = 0; /*0x70c214*/
    AudioController::Init((_DWORD *)(a1 + 1216)); /*0x70c21a*/
    *(_BYTE *)(a1 + 1236) = 0; /*0x70c225*/
    *(_DWORD *)(a1 + 1240) = 0; /*0x70c22b*/
    AudioController::Init((_DWORD *)(a1 + 1244)); /*0x70c231*/
    *(_DWORD *)(a1 + 1264) = -1; /*0x70c23a*/
    *(_DWORD *)(a1 + 1268) = -1; /*0x70c240*/
    return 0; /*0x70c246*/
  }
  return result; /*0x70c249*/
}



// ==== 0x0070C250  TechnoClass::GetSizeMax  this=TechnoClass  sig=csp ====
int __stdcall IPersistStream::GetSizeMax(TechnoClass *this, int a2, int a3)
{
  RadioClass::SaveState((RadioClass *)this, (int *)a2, a3); /*0x70c25f*/
  return 0; /*0x70c266*/
}



// ==== 0x0070C270  TechnoClass::PowerBeginUpdate  this=TechnoClass  sig=csp ====
int __thiscall House::PowerBeginUpdate(TechnoClass *this, int a2)
{
  int v3; // edx
  int v4; // eax
  int v5; // edx
  int v6; // eax
  int v7; // edx
  int v8; // edx
  int v9; // eax
  int v10; // edx
  int v11; // eax
  int v12; // edx
  int v13; // eax
  int v14; // ecx
  int v15; // edx
  int v16; // eax
  int v17; // ecx
  int v18; // edx
  int v19; // eax
  int v20; // ecx
  int v21; // edx
  int v22; // eax
  int v23; // ecx
  int v24; // edx
  int v25; // ecx
  int v26; // ebp
  int i; // ebx
  int v28; // eax
  int v29; // ebp
  int result; // eax
  int j; // ebx
  int v32; // eax
  int v33; // [esp-4h] [ebp-14h]
  int v34; // [esp-4h] [ebp-14h]
  Checksummer *v35; // [esp+14h] [ebp+4h]

  RadioClass::PowerDrainUpdate((RadioClass *)this, a2); /*0x70c27b*/
  Power::TimerProcess(this->controlGroup); /*0x70c289*/
  Checksummer::Add_double((Checksummer *)a2, this->armorMultiplier[0], this->armorMultiplier[1]); /*0x70c29e*/
  Checksummer::Add_double((Checksummer *)a2, this->firepowerMultiplier[0], this->firepowerMultiplier[1]); /*0x70c2b3*/
  v3 = this->idleActionTimer[0]; /*0x70c2b8*/
  v4 = this->idleActionTimer[2]; /*0x70c2be*/
  if ( v3 != -1 ) /*0x70c2c7*/
  {
    if ( *(_DWORD *)&stru_A8EB00.?[416] - v3 >= v4 ) /*0x70c2d3*/
      v4 = 0; /*0x70c2d9*/
    else
      v4 -= *(_DWORD *)&stru_A8EB00.?[416] - v3; /*0x70c2d5*/
  }
  Power::TimerProcess(v4); /*0x70c2de*/
  Power::TimerProcess(this->displayProductionTo[0]); /*0x70c2ec*/
  Power::TimerProcess(this->cloakState); /*0x70c2fa*/
  v5 = this->cloakDelayTimer[0]; /*0x70c2ff*/
  v6 = this->cloakDelayTimer[2]; /*0x70c305*/
  if ( v5 != -1 ) /*0x70c30e*/
  {
    if ( *(_DWORD *)&stru_A8EB00.?[416] - v5 >= v6 ) /*0x70c31a*/
      v6 = 0; /*0x70c320*/
    else
      v6 -= *(_DWORD *)&stru_A8EB00.?[416] - v5; /*0x70c31c*/
  }
  Power::TimerProcess(v6); /*0x70c325*/
  Checksummer::Add_float((Checksummer *)a2, LODWORD(this->warpFactor)); /*0x70c333*/
  LOBYTE(v7) = this->isChronosphereImmune; /*0x70c338*/
  Power::FlagProcess((Power *)a2, v7); /*0x70c341*/
  Power::TimerProcess(this->lastSightRange); /*0x70c34f*/
  Checksummer::Add_float((Checksummer *)a2, LODWORD(this->pitchAngle)); /*0x70c35d*/
  v8 = this->diskLaserTimer[0]; /*0x70c362*/
  v9 = this->diskLaserTimer[2]; /*0x70c368*/
  if ( v8 != -1 ) /*0x70c371*/
  {
    if ( *(_DWORD *)&stru_A8EB00.?[416] - v8 >= v9 ) /*0x70c37d*/
      v9 = 0; /*0x70c383*/
    else
      v9 -= *(_DWORD *)&stru_A8EB00.?[416] - v8; /*0x70c37f*/
  }
  Power::TimerProcess(v9); /*0x70c388*/
  Power::TimerProcess(this->ammo); /*0x70c396*/
  v10 = this->reloadTimer[0]; /*0x70c39b*/
  v11 = this->reloadTimer[2]; /*0x70c3a1*/
  if ( v10 != -1 ) /*0x70c3aa*/
  {
    if ( *(_DWORD *)&stru_A8EB00.?[416] - v10 >= v11 ) /*0x70c3b6*/
      v11 = 0; /*0x70c3bc*/
    else
      v11 -= *(_DWORD *)&stru_A8EB00.?[416] - v10; /*0x70c3b8*/
  }
  Power::TimerProcess(v11); /*0x70c3c1*/
  Power::TimerProcess(this->unitValue); /*0x70c3cf*/
  Checksummer::Add_float((Checksummer *)a2, (int)this->railgunParticles_2); /*0x70c3dd*/
  Checksummer::Add_float((Checksummer *)a2, (int)this->auxParticles1); /*0x70c3eb*/
  Checksummer::Add_float((Checksummer *)a2, (int)this->auxParticles2); /*0x70c3f9*/
  Checksummer::Add_float((Checksummer *)a2, (int)this->firingParticles); /*0x70c407*/
  LOBYTE(v12) = this->isSinking; /*0x70c40c*/
  v13 = Power::FlagProcess((Power *)a2, v12); /*0x70c415*/
  LOBYTE(v13) = this->isReceivingDamageEffect; /*0x70c41a*/
  Power::FlagProcess((Power *)a2, v13); /*0x70c423*/
  LOBYTE(v14) = this->isUseless; /*0x70c428*/
  Power::FlagProcess((Power *)a2, v14); /*0x70c431*/
  LOBYTE(v15) = this->hasBeenAttacked; /*0x70c436*/
  v16 = Power::FlagProcess((Power *)a2, v15); /*0x70c43f*/
  LOBYTE(v16) = this->isCloakableFlag; /*0x70c444*/
  Power::FlagProcess((Power *)a2, v16); /*0x70c44d*/
  LOBYTE(v17) = this->isPrimaryFactory; /*0x70c452*/
  Power::FlagProcess((Power *)a2, v17); /*0x70c45b*/
  LOBYTE(v18) = this->isALoaner; /*0x70c460*/
  v19 = Power::FlagProcess((Power *)a2, v18); /*0x70c469*/
  LOBYTE(v19) = this->isInPlayfield; /*0x70c46e*/
  Power::FlagProcess((Power *)a2, v19); /*0x70c477*/
  LOBYTE(v20) = this->isTether; /*0x70c47c*/
  Power::FlagProcess((Power *)a2, v20); /*0x70c485*/
  LOBYTE(v21) = this->isAlternativeTether; /*0x70c48a*/
  Power::FlagProcess((Power *)a2, v21); /*0x70c493*/
  v22 = *(_DWORD *)&dword_A8B238; /*0x70c498*/
  if ( !*(_DWORD *)&dword_A8B238 || *(_DWORD *)&dword_A8B238 == 5 ) /*0x70c4a4*/
  {
    LOBYTE(v22) = this->isOwnedByCurrentPlayer; /*0x70c4a6*/
    Power::FlagProcess((Power *)a2, v22); /*0x70c4af*/
    LOBYTE(v23) = this->isDiscoveredByCurrentPlayer; /*0x70c4b4*/
    Power::FlagProcess((Power *)a2, v23); /*0x70c4bd*/
    LOBYTE(v24) = this->isDiscoveredByComputer; /*0x70c4c2*/
    v22 = Power::FlagProcess((Power *)a2, v24); /*0x70c4cb*/
  }
  LOBYTE(v22) = this->isSelectedByPlayer; /*0x70c4d0*/
  Power::FlagProcess((Power *)a2, v22); /*0x70c4d9*/
  Power::TimerProcess(this->empLockRemaining); /*0x70c4e7*/
  Power::TimerProcess((unsigned __int8)this->isUnderCursor); /*0x70c4f7*/
  Power::TimerProcess((unsigned __int8)this->isCommandLineTarget); /*0x70c507*/
  LOBYTE(v25) = this->sightRangeBonus; /*0x70c50c*/
  Power::FinalizeDrain((Power *)a2, v25); /*0x70c515*/
  v26 = this->currentTargets[4]; /*0x70c51a*/
  Power::TimerProcess(v26); /*0x70c523*/
  for ( i = 0; i < v26; ++i ) /*0x70c52c*/
  {
    v35 = *(Checksummer **)(this->currentTargetThreatValues[1] + 4 * i); /*0x70c543*/
    v33 = *(_DWORD *)(this->currentTargets[1] + 4 * i) + 4; /*0x70c547*/
    v28 = (*(int (__stdcall **)(int))(*(_DWORD *)v33 + 16))(v33); /*0x70c54a*/
    Power::TimerProcess(v28); /*0x70c550*/
    Power::TimerProcess((int)v35); /*0x70c55c*/
  }
  v29 = this->attackedTargets[4]; /*0x70c566*/
  result = Power::TimerProcess(v29); /*0x70c56f*/
  for ( j = 0; j < v29; ++j ) /*0x70c578*/
  {
    v34 = *(_DWORD *)(this->attackedTargets[1] + 4 * j) + 4; /*0x70c586*/
    v32 = (*(int (__stdcall **)(int))(*(_DWORD *)v34 + 16))(v34); /*0x70c589*/
    result = Power::TimerProcess(v32); /*0x70c58f*/
  }
  return result; /*0x70c599*/
}



// ==== 0x0070C5A0  TechnoClass::CheckCellPassability  this=TechnoClass  sig=csp ====
int __thiscall BuildingClass::CheckCellPassability(TechnoClass *this)
{
  int result; // eax

  LOBYTE(result) = this->isCloakableFlag != 0; /*0x70c5a8*/
  return result; /*0x70c5ab*/
}



// ==== 0x0070C5B0  ObjectClass::GetShroudByte  this=TechnoClass  sig=csp ====
int __thiscall ObjectClass::GetShroudByte(TechnoClass *this)
{
  int result; // eax

  LOBYTE(result) = this->isBeingWarpedOut[0]; /*0x70c5b0*/
  return result; /*0x70c5b6*/
}



// ==== 0x0070C5C0  ObjectClass::GetFogByte  this=TechnoClass  sig=csp ====
int __thiscall ObjectClass::GetFogByte(TechnoClass *this)
{
  int result; // eax

  LOBYTE(result) = this->isWarpingOut[0]; /*0x70c5c0*/
  return result; /*0x70c5c6*/
}



// ==== 0x0070C5D0  ObjectClass::HasSubObject  this=TechnoClass  sig=csp ====
int __thiscall ObjectClass::HasSubObject(TechnoClass *this)
{
  int result; // eax

  result = this->temporalUsing; /*0x70c5d0*/
  LOBYTE(result) = result && *(_DWORD *)(result + 40); /*0x70c5e1*/
  return result; /*0x70c5e3*/
}



// ==== 0x0070C5F0  ObjectClass::IsNotShrouded  this=TechnoClass  sig=csp ====
int __thiscall ObjectClass::IsNotShrouded(TechnoClass *this)
{
  int result; // eax

  LOBYTE(result) = !this->isBeingWarpedOut[0] && !this->isWarpingOut[0]; /*0x70c607*/
  return result; /*0x70c606*/
}



// ==== 0x0070C610  TechnoClass::SetFocus  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::SetFocus(TechnoClass *this, int a2)
{
  this->focus = (AbstractClass *)a2; /*0x70c614*/
  return a2; /*0x70c61a*/
}



// ==== 0x0070C620  TechnoClass::CheckCliffTransition  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::CheckCliffTransition(TechnoClass *this)
{
  int v2; // edi
  int (__thiscall **vtable0)(TechnoClass *, _BYTE *); // eax
  _DWORD *v4; // eax
  int v6; // [esp+8h] [ebp-14h] BYREF
  _BYTE v7[4]; // [esp+Ch] [ebp-10h] BYREF
  _DWORD v8[3]; // [esp+10h] [ebp-Ch] BYREF

  v8[0] = this->?[0]; /*0x70c633*/
  v8[1] = this->?[1]; /*0x70c645*/
  v8[2] = this->?[2]; /*0x70c651*/
  v2 = *Terrain::ClimbCheck(&v6, v8); /*0x70c65a*/
  vtable0 = (int (__thiscall **)(TechnoClass *, _BYTE *))this->RadioClass; /*0x70c65c*/
  v6 = v2; /*0x70c662*/
  v4 = (_DWORD *)vtable0[110](this, v7); /*0x70c669*/
  return __PAIR32__(HIWORD(v6), v2) != *v4; /*0x70c672*/
}



// ==== 0x0070C690  Weapon::DestroyTerrain  this=Weapon  sig=csp ====
int *__thiscall Weapon::DestroyTerrain(Weapon *this, int *a2, int *a3, int *a4, int a5)
{
  int *v5; // eax
  float v7; // edx
  int v8; // eax
  int v9; // eax
  int v10; // edx
  int v11; // eax
  int *v12; // eax
  _DWORD *v13; // eax
  int v14; // esi
  int v15; // edx
  int v16; // eax
  int ObjectVector_field_0x10; // eax
  int v20; // ecx
  _DWORD *ObjectVector_field_0x04; // edx
  int GroundHeight; // eax
  int v23; // eax
  int v24; // ecx
  int **v25; // edx
  CellClass *v26; // eax
  int v27; // esi
  CellClass *v28; // eax
  int v29; // edx
  int v30; // edx
  int v31; // ecx
  int v33; // esi
  int v34; // esi
  int v35; // edx
  int v36; // edx
  int v37; // ecx
  double v38; // [esp+14h] [ebp-C8h]
  float v39; // [esp+18h] [ebp-C4h]
  char v40; // [esp+2Bh] [ebp-B1h]
  int v41; // [esp+2Ch] [ebp-B0h]
  int v42; // [esp+2Ch] [ebp-B0h]
  ObjectVector v43; // [esp+30h] [ebp-ACh] BYREF
  int v44; // [esp+48h] [ebp-94h]
  __int16 v48[2]; // [esp+58h] [ebp-84h] BYREF
  int v49; // [esp+5Ch] [ebp-80h] BYREF
  int v50; // [esp+60h] [ebp-7Ch]
  int v51; // [esp+64h] [ebp-78h]
  int v52; // [esp+68h] [ebp-74h] BYREF
  int v53; // [esp+6Ch] [ebp-70h]
  int v54; // [esp+70h] [ebp-6Ch]
  int v55; // [esp+74h] [ebp-68h] BYREF
  int v56; // [esp+78h] [ebp-64h]
  int v57; // [esp+7Ch] [ebp-60h]
  Weapon *v64; // [esp+98h] [ebp-44h]
  int v65; // [esp+9Ch] [ebp-40h]
  int v66; // [esp+A0h] [ebp-3Ch]
  int v67; // [esp+A4h] [ebp-38h]
  float v68; // [esp+A8h] [ebp-34h] BYREF
  Color v74[3]; // [esp+D0h] [ebp-Ch] BYREF

  v64 = this; /*0x70c6a0*/
  v5 = (int *)(*(int (__thiscall **)(int *, float *))(*a4 + 72))(a4, &v68); /*0x70c6b2*/
  v55 = *v5; /*0x70c6ba*/
  v56 = v5[1]; /*0x70c6c4*/
  _ECX = a3; /*0x70c6c8*/
  v7 = *((float *)v5 + 2); /*0x70c6ca*/
  v8 = *a3; /*0x70c6cd*/
  v57 = LODWORD(v7); /*0x70c6cf*/
  v44 = v8; /*0x70c6d3*/
  __asm { fild [esp+0C4h+var_94] } /*0x70c6d7*/
  v40 = 0; /*0x70c6e5*/
  LOWORD(v41) = v8 / 256; /*0x70c6ed*/
  v9 = a3[1]; /*0x70c6f2*/
  __asm { fstp [esp+0C8h+var_50] } /*0x70c6f5*/
  v54 = v9; /*0x70c6f9*/
  __asm { fild [esp+0C8h+var_6C] } /*0x70c6fd*/
  __asm
  {
    fstp [esp+0C8h+var_4C]
    fild dword ptr [edi+8]
  }
  v10 = *a3; /*0x70c711*/
  __asm /*0x70c713*/
  {
    fstp [esp+0C8h+var_48]
    fild [esp+0C8h+var_68]
    fild [esp+0C8h+var_64]
  }
  HIWORD(v41) = v9 / 256; /*0x70c725*/
  __asm /*0x70c72e*/
  {
    fstp [esp+0C8h+var_58]
    fild [esp+0C8h+var_60]
  }
  *(_DWORD *)v48 = v41; /*0x70c736*/
  v11 = a3[1]; /*0x70c73a*/
  v49 = v10; /*0x70c73d*/
  v50 = v11; /*0x70c741*/
  __asm { fstp [esp+0C8h+var_54] } /*0x70c745*/
  __asm { fsub [esp+0C8h+var_50] }
  v51 = a3[2]; /*0x70c750*/
  __asm /*0x70c758*/
  {
    fstp [esp+0C8h+var_90]
    fld [esp+0C8h+var_58]
    fsub [esp+0C8h+var_4C]
    fstp [esp+0C8h+var_8C]
    fld [esp+0C8h+var_54]
    fsub [esp+0C8h+var_48]
    fstp [esp+0C8h+var_88]
  }
  ObjectVector::Construct(&v43, 0, 0); /*0x70c777*/
  *(_DWORD *)v43.__pad_0 = &DynamicVectorClass<ObjectClass *>::`vftable'; /*0x70c77c*/
  v43.ObjectVector_field_0x14 = 10; /*0x70c784*/
  v43.ObjectVector_field_0x10 = 0; /*0x70c78c*/
  v42 = 0; /*0x70c790*/
  while ( 1 ) /*0x70c794*/
  {
    __asm { fild [esp+0C0h+var_B0] } /*0x70c794*/
    __asm
    {
      fmul ds:flt_7F4E88
      fstp [esp+0C4h+var_C4]; float
    }
    v12 = Color::RGBFromFloat(v74, (int)&v55, v39); /*0x70c7b0*/
    v49 = *v12; /*0x70c7b9*/
    v50 = v12[1]; /*0x70c7c0*/
    v51 = v12[2]; /*0x70c7c7*/
    if ( __PAIR32__(v50 / 256, v49 / 256) != *(_DWORD *)v48 ) /*0x70c7ec*/
    {
      LOWORD(v44) = v49 / 256; /*0x70c7f9*/
      HIWORD(v44) = v50 / 256; /*0x70c802*/
      *(_DWORD *)v48 = v44; /*0x70c811*/
      v13 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v48); /*0x70c815*/
      if ( (v13[80] & 0x100) != 0 && v51 >= g_BuildingLoadQueue_Array.?[1] * (*((char *)v13 + 283) + 4) ) /*0x70c83c*/
        v14 = v13[58]; /*0x70c83e*/
      else
        v14 = v13[57]; /*0x70c846*/
      while ( v14 ) /*0x70c84e*/
      {
        if ( (Weapon *)v14 == v64 ) /*0x70c858*/
          goto LABEL_31; /*0x70c858*/
        if ( (int *)v14 == a4 ) /*0x70c860*/
          v40 = 1; /*0x70c862*/
        HIBYTE(v53) = *(_BYTE *)(v14 + 20) & 1; /*0x70c874*/
        if ( !HIBYTE(v53) ) /*0x70c878*/
          goto LABEL_31; /*0x70c878*/
        v15 = *(_DWORD *)v14; /*0x70c87e*/
        v52 = 0; /*0x70c882*/
        if ( (*(int (__thiscall **)(int))(v15 + 44))(v14) == 6 ) /*0x70c890*/
        {
          __asm { fld [esp+0C0h+var_74] } /*0x70c9d3*/
        }
        else
        {
          v65 = *(_DWORD *)(v14 + 156); /*0x70c8a2*/
          __asm { fild [esp+0C0h+var_40] } /*0x70c8ac*/
          v16 = *(_DWORD *)(v14 + 164); /*0x70c8b3*/
          v66 = *(_DWORD *)(v14 + 160); /*0x70c8b6*/
          __asm { fild [esp+0C0h+var_3C] } /*0x70c8bd*/
          v67 = v16; /*0x70c8c4*/
          __asm /*0x70c8cb*/
          {
            fstp [esp+0C0h+var_30]
            fild [esp+0C0h+var_38]
            fstp dword ptr [esp+0C0h+var_2C]
            fsub [esp+0C0h+var_50]
            fld [esp+0C0h+var_30]
            fsub [esp+0C0h+var_4C]
            fld dword ptr [esp+0C0h+var_2C]
            fsub [esp+0C0h+var_48]
            fld st(1)
            fmul [esp+0C0h+var_88]
            fld st(1)
            fmul [esp+0C0h+var_8C]
            fsubp st(1), st
            fld st(1)
            fmul [esp+0C0h+var_90]
            fld [esp+0C0h+var_88]
            fmul st, st(5)
            fsubp st(1), st
            fld [esp+0C0h+var_8C]
            fmul st, st(5)
            fld st(4)
            fmul [esp+0C0h+var_90]
            fsubp st(1), st
            fld st(1)
            fmul [esp+0C0h+var_88]
            fld st(1)
            fmul [esp+0C0h+var_8C]
            fsubp st(1), st
            fstp [esp+0C0h+var_5C]
            fmul [esp+0C0h+var_90]
            fld [esp+0C0h+var_88]
            fmul st, st(3)
            fsubp st(1), st
            fstp [esp+0C0h+var_58]
            fld [esp+0C0h+var_8C]
            fmulp st(2), st
            fld st
            fmul [esp+0C0h+var_90]
            fsubp st(2), st
            fstp st
            fld [esp+0C0h+var_58]
            fstp [esp+0C0h+var_24+4]
            fst [esp+0C0h+var_2C+4]
            fld [esp+0C0h+var_5C]
            fstp [esp+0C0h+var_1C+4]
            fmul st, st(1)
            fld [esp+0C0h+var_58]
            fmul st, st(3)
            faddp st(1), st
            fld [esp+0C0h+var_5C]
            fmul st, st(4)
            faddp st(1), st
            fstp [esp+0C0h+var_6C]
            fstp st
            fstp st
            fstp st
            fld [esp+0C0h+var_1C+4]
            fmul [esp+0C0h+var_1C+4]
            fld [esp+0C0h+var_2C+4]
            fmul [esp+0C0h+var_2C+4]
            faddp st(1), st
            fld [esp+0C0h+var_24+4]
            fmul [esp+0C0h+var_24+4]
          }
          __asm
          {
            faddp st(1), st
            fstp [esp+0C8h+var_CC+4]; double
          }
          Math::Sqrt(v38); /*0x70c9c3*/
          __asm { fdivr [esp+0C8h+var_6C] } /*0x70c9c8*/
          __asm { fabs }
        }
        _ECX = *(_DWORD *)&DSurface_ViewBounds.__pad_FC[324]; /*0x70c9d7*/
        __asm /*0x70c9dd*/
        {
          fild dword ptr [ecx+494h]
          fxch st(1)
          fcompp
          fnstsw ax
        }
        if ( (_AX & 0x100) == 0 && (int *)v14 != a4 ) /*0x70c9f0*/
          goto LABEL_31; /*0x70c9f0*/
        ObjectVector_field_0x10 = v43.ObjectVector_field_0x10; /*0x70c9f2*/
        if ( v43.ObjectVector_field_0x10 ) /*0x70c9f8*/
        {
          v20 = 0; /*0x70c9fa*/
          if ( v43.ObjectVector_field_0x10 > 0 ) /*0x70c9fe*/
          {
            ObjectVector_field_0x04 = (_DWORD *)v43.ObjectVector_field_0x04; /*0x70ca00*/
            while ( *ObjectVector_field_0x04 != v14 ) /*0x70ca06*/
            {
              ++v20; /*0x70ca08*/
              ++ObjectVector_field_0x04; /*0x70ca09*/
              if ( v20 >= v43.ObjectVector_field_0x10 ) /*0x70ca0e*/
                goto LABEL_24; /*0x70ca0e*/
            }
            if ( v20 != -1 ) /*0x70ca15*/
              goto LABEL_31; /*0x70ca15*/
          }
        }
LABEL_24:
        if ( v43.ObjectVector_field_0x10 >= v43.ObjectVector_field_0x08 ) /*0x70ca1d*/
        {
          if ( !BYTE1(v43.ObjectVector_field_0x0C) && v43.ObjectVector_field_0x08 /*0x70ca40*/
            || v43.ObjectVector_field_0x14 <= 0
            || !(*(unsigned __int8 (__thiscall **)(ObjectVector *, int, _DWORD))(*(_DWORD *)v43.__pad_0 + 8))(
                  &v43,
                  v43.ObjectVector_field_0x14 + v43.ObjectVector_field_0x08,
                  0) )
          {
            goto LABEL_31; /*0x70ca45*/
          }
          ObjectVector_field_0x10 = v43.ObjectVector_field_0x10; /*0x70ca47*/
        }
        v43.ObjectVector_field_0x10 = ObjectVector_field_0x10 + 1; /*0x70ca4e*/
        *(_DWORD *)(v43.ObjectVector_field_0x04 + 4 * ObjectVector_field_0x10) = v14; /*0x70ca56*/
LABEL_31:
        v14 = *(_DWORD *)(v14 + 48); /*0x70ca59*/
      }
      GroundHeight = Cell::GetGroundHeight(&v49); /*0x70ca6e*/
      if ( GroundHeight > v51 ) /*0x70ca77*/
        break; /*0x70ca77*/
    }
    if ( ++v42 >= 50 ) /*0x70ca85*/
    {
      if ( v40 || !a4 || (a4[5] & 2) == 0 ) /*0x70caa3*/
        goto LABEL_55; /*0x70caa3*/
      v23 = v43.ObjectVector_field_0x10; /*0x70caa9*/
      if ( !v43.ObjectVector_field_0x10 ) /*0x70caaf*/
        goto LABEL_48; /*0x70caaf*/
      v24 = 0; /*0x70cab5*/
      if ( v43.ObjectVector_field_0x10 <= 0 ) /*0x70cab9*/
        goto LABEL_48; /*0x70cab9*/
      v25 = (int **)v43.ObjectVector_field_0x04; /*0x70cabf*/
      while ( *v25 != a4 ) /*0x70cac5*/
      {
        ++v24; /*0x70cacb*/
        ++v25; /*0x70cacc*/
        if ( v24 >= v43.ObjectVector_field_0x10 ) /*0x70cad1*/
          goto LABEL_48; /*0x70cad1*/
      }
      if ( v24 == -1 ) /*0x70cb68*/
      {
LABEL_48:
        if ( v43.ObjectVector_field_0x10 < v43.ObjectVector_field_0x08 ) /*0x70cb70*/
          goto LABEL_54; /*0x70cb70*/
        if ( (BYTE1(v43.ObjectVector_field_0x0C) || !v43.ObjectVector_field_0x08) && v43.ObjectVector_field_0x14 > 0 ) /*0x70cb84*/
        {
          if ( (*(unsigned __int8 (__thiscall **)(ObjectVector *, int, _DWORD))(*(_DWORD *)v43.__pad_0 + 8))( /*0x70cb93*/
                 &v43,
                 v43.ObjectVector_field_0x14 + v43.ObjectVector_field_0x08,
                 0) )
          {
            v23 = v43.ObjectVector_field_0x10; /*0x70cb9a*/
LABEL_54:
            v43.ObjectVector_field_0x10 = v23 + 1; /*0x70cb9e*/
            *(_DWORD *)(v43.ObjectVector_field_0x04 + 4 * v23) = a4; /*0x70cba9*/
          }
LABEL_55:
          v23 = v43.ObjectVector_field_0x10; /*0x70cbac*/
        }
      }
      v33 = 0; /*0x70cbb0*/
      if ( v23 > 0 ) /*0x70cbb4*/
      {
        do /*0x70cbf5*/
        {
          v52 = *(_DWORD *)(a5 + 152); /*0x70cbc3*/
          (*(void (__thiscall **)(_DWORD, int *, _DWORD, _DWORD, Weapon *, _DWORD, _DWORD, _DWORD))(**(_DWORD **)(v43.ObjectVector_field_0x04 + 4 * v33) /*0x70cbe8*/
                                                                                                  + 364))(
            *(_DWORD *)(v43.ObjectVector_field_0x04 + 4 * v33),
            &v52,
            0,
            *(_DWORD *)(a5 + 172),
            v64,
            0,
            0,
            0);
          ++v33; /*0x70cbf2*/
        }
        while ( v33 < v43.ObjectVector_field_0x10 ); /*0x70cbf5*/
      }
      if ( (*(int (__thiscall **)(int *))(*a4 + 44))(a4) == 11 ) /*0x70cc01*/
      {
        if ( (unsigned __int8)CellClass::IsActiveOrNext((CellClass *)a4) ) /*0x70cc05*/
        {
          v34 = *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 6092); /*0x70cc1e*/
          if ( Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, 99) < v34 ) /*0x70cc31*/
            LayerClass::DestroyCliff((int *)&stru_87F5F0.__pad_58[416], v35, (int)a4); /*0x70cc39*/
        }
      }
      v36 = v56; /*0x70cc45*/
      *(_DWORD *)v43.__pad_0 = &VectorClass<ObjectClass *>::`vftable'; /*0x70cc4b*/
      *a2 = v55; /*0x70cc53*/
      v37 = v57; /*0x70cc55*/
      a2[1] = v36; /*0x70cc59*/
      a2[2] = v37; /*0x70cc5c*/
      if ( v43.ObjectVector_field_0x04 ) /*0x70cc65*/
      {
        if ( BYTE1(v43.ObjectVector_field_0x0C) ) /*0x70cc6d*/
          __3_YAXPAX_Z((void *)v43.ObjectVector_field_0x04); /*0x70cc70*/
      }
      return a2; /*0x70cc78*/
    }
  }
  v26 = Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], &v49); /*0x70cae2*/
  if ( (unsigned __int8)CellClass::IsActiveOrNext(v26) ) /*0x70cae9*/
  {
    v27 = *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 6092); /*0x70cb01*/
    if ( Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, 99) < v27 ) /*0x70cb14*/
    {
      v28 = Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], &v49); /*0x70cb20*/
      LayerClass::DestroyCliff((int *)&stru_87F5F0.__pad_58[416], v29, (int)v28); /*0x70cb2b*/
    }
  }
  v30 = v50; /*0x70cb37*/
  *(_DWORD *)v43.__pad_0 = &VectorClass<ObjectClass *>::`vftable'; /*0x70cb3d*/
  *a2 = v49; /*0x70cb45*/
  v31 = v51; /*0x70cb47*/
  a2[1] = v30; /*0x70cb4b*/
  a2[2] = v31; /*0x70cb4e*/
  ObjectVector::ddtor((_VectorClass_PAVObjectClass *)&v43); /*0x70cb55*/
  return a2; /*0x70cb5c*/
}



// ==== 0x0070CC90  TechnoClass::RadarUpdateOn  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::RadarUpdateOn(TechnoClass *this)
{
  int result; // eax

  BuildingClass::ProcessFogCellOccupancy( /*0x70cca7*/
    (int)&stru_87F5F0.__pad_58[416],
    (int)this,
    this->currentBurstCount,
    this->currentBarrelIndex);
  this->isRadarTracked = 1; /*0x70ccac*/
  return result; /*0x70ccb3*/
}



// ==== 0x0070CCC0  TechnoClass::RadarUpdateOff  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::RadarUpdateOff(TechnoClass *this)
{
  int result; // eax

  BuildingClass::RemoveGapCellCoverage( /*0x70ccd7*/
    (int)&stru_87F5F0.__pad_58[416],
    (int)this,
    this->currentBurstCount,
    this->currentBarrelIndex);
  this->isRadarTracked = 0; /*0x70ccdc*/
  return result; /*0x70cce3*/
}



// ==== 0x0070CCF0  TechnoClass::RevealOwnCell  this=TechnoClass  sig=csp ====
void __thiscall TechnoClass::RevealOwnCell(TechnoClass *this)
{
  FogOfWar::RevealCell((int)&stru_87F5F0.__pad_58[416], &this->currentBurstCount); /*0x70ccfc*/
}



// ==== 0x0070CD10  TechnoClass::ComputeDamage  this=TechnoClass  sig=csp ====
double __thiscall TechnoClass::ComputeDamage(TechnoClass *this, int *a2, _DWORD *a3)
{
  double v3; // st7
  _DWORD *v5; // ebx
  int v7; // edx
  unsigned int v8; // eax
  unsigned int v9; // ecx
  int v10; // eax
  unsigned int v11; // ecx
  unsigned int v12; // edx
  unsigned int v13; // eax
  int v14; // ecx
  int v15; // edx
  int v16; // ecx
  unsigned int v17; // edx
  unsigned int v18; // eax
  int v19; // eax
  int v20; // eax
  int v21; // eax
  int v22; // eax
  int v23; // eax
  double v24; // st6
  int enemyHouseIndex; // eax
  double v26; // st7
  int v27; // eax
  _DWORD *v28; // eax
  int v29; // edi
  int v30; // esi
  int v31; // ecx
  int v32; // edx
  int v33; // eax
  _DWORD *v34; // esi
  int *v35; // eax
  int v36; // ecx
  int v37; // edx
  int v38; // edi
  int v39; // eax
  int v40; // eax
  int v41; // eax
  int v42; // [esp+2Ch] [ebp-4Ch]
  int v43; // [esp+2Ch] [ebp-4Ch]
  double v44; // [esp+30h] [ebp-48h]
  double v45; // [esp+38h] [ebp-40h]
  double v46; // [esp+40h] [ebp-38h] BYREF
  double v47[2]; // [esp+50h] [ebp-28h] BYREF
  double v48; // [esp+60h] [ebp-18h]
  int v49; // [esp+68h] [ebp-10h]
  double v50; // [esp+70h] [ebp-8h]

  v5 = (_DWORD *)(*((int (__thiscall **)(TechnoClass *))this->RadioClass + 33))(this); /*0x70cd29*/
  if ( !(*(int (__thiscall **)(int *))(*a2 + 136))(a2) ) /*0x70cd2f*/
    return 0.0; /*0x70cd39*/
  if ( this->owner->hasThreatNode ) /*0x70cd4e*/
  {
    v7 = v5[179]; /*0x70cd5e*/
    v8 = v5[180]; /*0x70cd64*/
    LODWORD(v47[0]) = v5[178]; /*0x70cd6a*/
    v9 = v5[181]; /*0x70cd6e*/
    HIDWORD(v47[0]) = v7; /*0x70cd74*/
    v45 = COERCE_DOUBLE(__PAIR64__(v9, v8)); /*0x70cd7e*/
    v10 = v5[183]; /*0x70cd82*/
    v11 = v5[184]; /*0x70cd8c*/
    LODWORD(v46) = v5[182]; /*0x70cd92*/
    v12 = v5[185]; /*0x70cd96*/
    HIDWORD(v46) = v10; /*0x70cd9c*/
    v13 = v5[186]; /*0x70cda0*/
    v48 = COERCE_DOUBLE(__PAIR64__(v12, v11)); /*0x70cda6*/
    v50 = COERCE_DOUBLE(__PAIR64__(v5[187], v13)); /*0x70cdb4*/
  }
  else
  {
    v14 = *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 4204); /*0x70cdc9*/
    LODWORD(v47[0]) = *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 4200); /*0x70cdcf*/
    v15 = *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 4208); /*0x70cdd3*/
    HIDWORD(v47[0]) = v14; /*0x70cdd9*/
    LODWORD(v45) = v15; /*0x70cde3*/
    HIDWORD(v45) = *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 4212); /*0x70cded*/
    v46 = *(double *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 4216); /*0x70cdf7*/
    v16 = *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 4228); /*0x70ce05*/
    LODWORD(v48) = *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 4224); /*0x70ce0b*/
    v17 = *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 4232); /*0x70ce0f*/
    v18 = *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 4236); /*0x70ce15*/
    HIDWORD(v48) = v16; /*0x70ce1b*/
    v50 = COERCE_DOUBLE(__PAIR64__(v18, v17)); /*0x70ce1f*/
  }
  v19 = (*((int (__thiscall **)(TechnoClass *, int *))this->RadioClass + 185))(this, a2); /*0x70ce2c*/
  v42 = *(_DWORD *)(*((int (__thiscall **)(TechnoClass *, int))this->RadioClass + 254))(this, v19); /*0x70ce43*/
  v44 = 0.0; /*0x70ce47*/
  v20 = (*(int (__thiscall **)(int *))(*a2 + 44))(a2); /*0x70ce57*/
  if ( (v20 == 6 || v20 == 15 || v20 == 1 || v20 == 2) && a2 ) /*0x70ce74*/
  {
    v21 = (*(int (__usercall **)@<eax>(int *@<ecx>, TechnoClass *))(*a2 + 740))(a2, this); /*0x70ce7f*/
    v22 = *(_DWORD *)(*(int (__thiscall **)(int *, int))(*a2 + 1016))(a2, v21); /*0x70ce90*/
    if ( v22 ) /*0x70ce94*/
    {
      v23 = *(_DWORD *)(v22 + 172); /*0x70ce96*/
      if ( v23 ) /*0x70ce9e*/
      {
        if ( (TechnoClass *)a2[173] == this ) /*0x70cea6*/
          v3 = -(v45 * *(double *)(v23 + 8 * v5[39] + 160)); /*0x70ceb9*/
        else
          v3 = v45 * *(double *)(v23 + 8 * v5[39] + 160); /*0x70cec7*/
        v44 = v3; /*0x70cece*/
      }
    }
    v24 = v46 * *(double *)((*(int (__thiscall **)(int *))(*a2 + 132))(a2) + 704) + v44; /*0x70ceec*/
    enemyHouseIndex = this->owner->enemyHouseIndex; /*0x70cef0*/
    v44 = v24; /*0x70cef9*/
    if ( enemyHouseIndex != -1 && enemyHouseIndex == *(_DWORD *)(a2[135] + 48) ) /*0x70cf08*/
      v44 = v24 + *(double *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 4240); /*0x70cf19*/
  }
  if ( v42 && *(_DWORD *)(v42 + 172) ) /*0x70cf25*/
    v44 = v47[0] /*0x70cf54*/
        * *(double *)(*(_DWORD *)(v42 + 172)
                    + 8 * *(_DWORD *)((*(int (__thiscall **)(int *))(*a2 + 136))(a2) + 156)
                    + 160)
        + v44;
  BuildingClass::GetHealthRatio((BuildingClass *)a2); /*0x70cf5a*/
  v26 = v3 * v48 + v44; /*0x70cf65*/
  if ( v42 ) /*0x70cf6d*/
    v27 = *(_DWORD *)(v42 + 180); /*0x70cf6f*/
  else
    v27 = *(_DWORD *)((*((int (__thiscall **)(TechnoClass *))this->RadioClass + 33))(this) + 1464); /*0x70cf81*/
  v43 = v27 / 256; /*0x70cf9c*/
  if ( *a3 == g_BuildingLoadQueue_Array.?[3] /*0x70cfbc*/
    && a3[1] == g_BuildingLoadQueue_Array.?[4]
    && a3[2] == g_BuildingLoadQueue_Array.?[5] )
  {
    v34 = (_DWORD *)(*(int (__thiscall **)(int *, double *))(*a2 + 72))(a2, v47); /*0x70d031*/
    v35 = (int *)(*((int (__thiscall **)(TechnoClass *, double *))this->RadioClass + 18))(this, &v46); /*0x70d03a*/
    v36 = *v35; /*0x70d03d*/
    v37 = v35[1]; /*0x70d041*/
    v38 = v34[1]; /*0x70d044*/
    v39 = v35[2]; /*0x70d047*/
    LODWORD(v48) = v36 - *v34; /*0x70d04c*/
    v40 = v39 - v34[2]; /*0x70d055*/
    HIDWORD(v48) = v37 - v38; /*0x70d057*/
    v49 = v40; /*0x70d05b*/
    Math::Sqrt( /*0x70d087*/
      (double)SLODWORD(v48) * (double)SLODWORD(v48)
    + (double)v40 * (double)v40
    + (double)(v37 - v38) * (double)(v37 - v38));
    LOWORD(v41) = Math::RoundToInt(v26); /*0x70d08f*/
    v33 = v41 / 256; /*0x70d09d*/
  }
  else
  {
    v28 = (_DWORD *)(*(int (__thiscall **)(int *, double *))(*a2 + 72))(a2, v47); /*0x70cfc7*/
    v29 = v28[1]; /*0x70cfce*/
    v30 = v28[2]; /*0x70cfd1*/
    v31 = a3[1]; /*0x70cfd6*/
    LODWORD(v48) = *a3 - *v28; /*0x70cfd9*/
    v32 = a3[2] - v30; /*0x70cfe2*/
    HIDWORD(v48) = v31 - v29; /*0x70cfe4*/
    v49 = v32; /*0x70cfe8*/
    Math::Sqrt( /*0x70d014*/
      (double)SLODWORD(v48) * (double)SLODWORD(v48)
    + (double)v32 * (double)v32
    + (double)(v31 - v29) * (double)(v31 - v29));
    LOWORD(v33) = Math::RoundToInt(v26); /*0x70d01c*/
  }
  return (double)((v33 - v43) & ((v33 - v43 < 0) - 1)) * v50 + v26 + 100000.0; /*0x70cd3f*/
}



// ==== 0x0070D0D0  TechnoTypeClass::HasVoiceResponse  this=IUnknown  sig=csp ====
int __thiscall TechnoTypeClass::HasVoiceResponse(int *this, int a2)
{
  int *v3; // edi
  int result; // eax
  int v5; // esi

  v3 = this + 84; /*0x70d0d5*/
  if ( !(unsigned __int8)Audio::IsMediumVolume(this + 84) ) /*0x70d0dd*/
  {
    result = Audio::IsLoud(v3); /*0x70d0e8*/
    if ( !(_BYTE)result ) /*0x70d0ef*/
      goto LABEL_10; /*0x70d0ef*/
  }
  v5 = (*(int (__thiscall **)(int *))(*this + 132))(this); /*0x70d0fd*/
  result = Audio::IsMediumVolume(v3); /*0x70d0ff*/
  if ( (_BYTE)result && *(_BYTE *)(v5 + a2 + 668) ) /*0x70d10c*/
  {
    LOBYTE(result) = 1; /*0x70d119*/
    return result; /*0x70d11c*/
  }
  result = Audio::IsLoud(v3); /*0x70d121*/
  if ( (_BYTE)result && (*(_BYTE *)(v5 + a2 + 668) || *(_BYTE *)(v5 + a2 + 686)) ) /*0x70d135*/
    LOBYTE(result) = 1; /*0x70d142*/
  else
LABEL_10:
    LOBYTE(result) = 0; /*0x70d14a*/
  return result; /*0x70d117*/
}



// ==== 0x0070D150  FrameTimer::Init25  this=FrameTimer  sig=ida-proto ====
int FrameTimer_Init25()
{
  int v1; // [esp+4h] [ebp-8h]

  dword_B0EA80 = (int)dword_A8ED84; /*0x70d15a*/
  dword_B0EA84 = v1; /*0x70d166*/
  dword_B0EA88 = 25; /*0x70d16b*/
  return v1; /*0x70d171*/
}



// ==== 0x0070D180  SetGlobalFlag  this=-  sig=ida-proto ====
void __fastcall GlobalFlag_Set(char a1)
{
  byte_843108 = a1; /*0x70d180*/
}



// ==== 0x0070D190  TechnoClass::GetRangeModifier  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::GetRangeModifier(TechnoClass *this, int a2)
{
  if ( (this->flashing[0] & 2) == 2 )
    return a2 <= 1500 ? 2000 : 500;
  else
    return a2; /*0x70d1ba*/
}



// ==== 0x0070D1D0  TechnoClass::ShouldScanArea  this=TechnoClass  sig=csp ====
bool __thiscall TechnoClass::ShouldScanArea(TechnoClass *this, _DWORD *a2)
{
  _DWORD *v4; // eax
  int v5; // ebp
  int v6; // ebx
  int v7; // ecx
  int v8; // edx
  char v9; // bl
  char v10; // [esp+12h] [ebp-16h]
  char v11; // [esp+13h] [ebp-15h]
  int v12; // [esp+14h] [ebp-14h]
  __int16 v13[2]; // [esp+18h] [ebp-10h] BYREF
  int v14; // [esp+1Ch] [ebp-Ch] BYREF
  int v15; // [esp+20h] [ebp-8h]
  int v16; // [esp+24h] [ebp-4h]

  if ( *(_BYTE *)((*((int (__thiscall **)(TechnoClass *))this->RadioClass + 33))(this) + 3226) /*0x70d20b*/
    || this->isSinking
    || !this->?
    || this->? )
  {
    return 0; /*0x70d20b*/
  }
  if ( (unsigned __int8)House::IsHumanPlayer((House *)this->owner) ) /*0x70d21f*/
    return this->isDiscoveredByCurrentPlayer != 0; /*0x70d23a*/
  v4 = (_DWORD *)(*((int (__thiscall **)(TechnoClass *, int *))this->RadioClass + 18))(this, &v14); /*0x70d246*/
  LOWORD(v12) = *v4 / 256; /*0x70d25b*/
  HIWORD(v12) = v4[1] / 256; /*0x70d273*/
  *(_DWORD *)v13 = v12; /*0x70d27c*/
  if ( !(unsigned __int8)LayerClass::IsWithinUsableArea((LayerClass *)&stru_87F5F0.__pad_58[416], v13, 1) ) /*0x70d286*/
    return 0; /*0x70d40a*/
  v5 = (*((int (__thiscall **)(TechnoClass *))this->RadioClass + 114))(this); /*0x70d2a3*/
  if ( !(unsigned __int8)Audio::IsMediumVolume(this->veterancy) && !(unsigned __int8)Audio::IsLoud(this->veterancy) ) /*0x70d2b9*/
    goto LABEL_17; /*0x70d2b9*/
  v6 = (*((int (__thiscall **)(TechnoClass *))this->RadioClass + 33))(this); /*0x70d2c7*/
  if ( !(unsigned __int8)Audio::IsMediumVolume(this->veterancy) || !*(_BYTE *)(v6 + 679) ) /*0x70d2d2*/
  {
    if ( (unsigned __int8)Audio::IsLoud(this->veterancy) && (*(_BYTE *)(v6 + 679) || *(_BYTE *)(v6 + 697)) ) /*0x70d2f8*/
    {
      v10 = 1; /*0x70d302*/
      goto LABEL_18; /*0x70d307*/
    }
LABEL_17:
    v10 = 0; /*0x70d309*/
    goto LABEL_18; /*0x70d309*/
  }
  v10 = 1; /*0x70d2dc*/
LABEL_18:
  v14 = this->?[0]; /*0x70d30e*/
  v15 = this->?[1]; /*0x70d329*/
  v16 = this->?[2]; /*0x70d330*/
  if ( !(unsigned __int8)Cell::IsPassable(&v14) || (v11 = 1, !g_hWnd) ) /*0x70d349*/
    v11 = 0; /*0x70d34b*/
  if ( ((int)dword_A8B230->vtable0 & 0x1000) != 0 /*0x70d37b*/
    && (v7 = this->?[1], v8 = this->?[2], v14 = this->?[0], v15 = v7, v16 = v8, (unsigned __int8)Game::Stub3((int)&v14)) )
  {
    v9 = 1; /*0x70d384*/
  }
  else
  {
    v9 = 0; /*0x70d3df*/
    if ( this->cloakState != 2 && v5 >= -20 && !v10 && !v11 ) /*0x70d3f9*/
      return 1; /*0x70d404*/
  }
  if ( !(*((unsigned __int8 (__thiscall **)(TechnoClass *))this->RadioClass + 202))(this) ) /*0x70d392*/
    return 0; /*0x70d392*/
  if ( !(unsigned __int8)HouseClass::IsAlliedWith((#375 *)dword_A83D4C, (#375 *)this->owner) && !v10 && !v9 && !v11 ) /*0x70d3bc*/
    *a2 = (v5 < -20) + 1; /*0x70d3cb*/
  return 1; /*0x70d22e*/
}



// ==== 0x0070D420  TechnoClass::IsPlayerCellPassable  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::IsPlayerCellPassable(TechnoClass *this)
{
  int result; // eax
  _DWORD *v2; // eax
  CellClass *v3; // eax
  _BYTE v4[12]; // [esp+0h] [ebp-Ch] BYREF

  result = (int)dword_A83D4C; /*0x70d420*/
  if ( dword_A83D4C ) /*0x70d42a*/
  {
    v2 = (_DWORD *)(*((int (__thiscall **)(TechnoClass *, _BYTE *))this->RadioClass + 18))(this, v4); /*0x70d433*/
    v3 = Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], v2); /*0x70d43c*/
    return Cell::IsPassableOffset((Cell *)v3, (int)dword_A83D4C->Object_field_0x30); /*0x70d44d*/
  }
  else
  {
    LOBYTE(result) = 0; /*0x70d456*/
  }
  return result; /*0x70d452*/
}



// ==== 0x0070D460  TechnoClass::IsCellPassableFor  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::IsCellPassableFor(TechnoClass *this)
{
  _DWORD *v1; // eax
  CellClass *v2; // eax
  int result; // eax
  _BYTE v4[12]; // [esp+4h] [ebp-Ch] BYREF
  int v5; // [esp+14h] [ebp+4h]

  if ( v5 ) /*0x70d46a*/
  {
    v1 = (_DWORD *)(*((int (__thiscall **)(TechnoClass *, _BYTE *))this->RadioClass + 18))(this, v4); /*0x70d473*/
    v2 = Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], v1); /*0x70d47c*/
    return Cell::IsPassableOffset((Cell *)v2, *(_DWORD *)(v5 + 48)); /*0x70d487*/
  }
  else
  {
    LOBYTE(result) = 0; /*0x70d493*/
  }
  return result; /*0x70d48c*/
}



// ==== 0x0070D4A0  AbstractClass::ClearTargetToMeClearManagerTarget  this=TechnoClass  sig=ida-proto ====
void __fastcall AbstractClass::ClearTargetToMeClearManagerTarget(int a1)
{
  int v2; // edi
  int i; // ebx
  bool v4; // cl
  _DWORD *v5; // esi
  int v6; // eax
  int j; // ecx
  int v8; // eax

  if ( a1 )
    v2 = (*(_BYTE *)(a1 + 20) & 1) != 0 ? a1 : 0;
  else
    v2 = 0; /*0x70d4a9*/
  for ( i = dword_A8EC88 - 1; i >= 0; --i ) /*0x70d4c6*/
  {
    v4 = 1; /*0x70d4d2*/
    v5 = (_DWORD *)*((_DWORD *)dword_A8EC7C + i); /*0x70d4d6*/
    if ( v2 ) /*0x70d4d9*/
    {
      v6 = v5[165]; /*0x70d4db*/
      if ( v6 ) /*0x70d4e3*/
      {
        if ( *(_DWORD *)(v6 + 80) == a1 && *(int *)(v2 + 108) > 0 ) /*0x70d4ef*/
          v4 = *(_BYTE *)(v2 + 144) == 0; /*0x70d4fb*/
      }
    }
    if ( v5[173] == a1 && v4 ) /*0x70d507*/
    {
      (*(void (__thiscall **)(_DWORD))(*v5 + 504))(*((_DWORD *)dword_A8EC7C + i)); /*0x70d50d*/
      if ( (*(int (__thiscall **)(_DWORD *))(*v5 + 44))(v5) == 2 && v5[43] == 25 ) /*0x70d526*/
      {
        v5[47] = 0; /*0x70d528*/
        *((_BYTE *)v5 + 1746) = 0; /*0x70d532*/
      }
      if ( v5[173] == a1 ) /*0x70d53f*/
        (*(void (__thiscall **)(_DWORD *, _DWORD))(*v5 + 968))(v5, 0); /*0x70d547*/
    }
  }
  for ( j = dword_8B40F8 - 1; j >= 0; --j ) /*0x70d560*/
  {
    v8 = *((_DWORD *)dword_8B40EC + j); /*0x70d567*/
    if ( *(_DWORD *)(v8 + 60) == a1 ) /*0x70d56d*/
      *(_DWORD *)(v8 + 60) = 0; /*0x70d56f*/
    if ( *(_DWORD *)(v8 + 64) == a1 ) /*0x70d575*/
      *(_DWORD *)(v8 + 64) = 0; /*0x70d577*/
  }
}



// ==== 0x0070D590  TechnoClass::IsCloseEnoughToBuilding  this=TechnoClass  sig=csp ====
bool __thiscall TechnoClass::IsCloseEnoughToBuilding(TechnoClass *this, int a2)
{
  double v2; // st7
  int v4; // eax
  AbstractClass *target; // ecx
  int *location; // esi
  int v8; // ebx
  int v9; // edi
  _DWORD *v10; // eax
  int v11; // ebp
  int v12; // eax
  int v13; // eax
  int v14; // [esp+20h] [ebp-18h] BYREF
  int v15; // [esp+24h] [ebp-14h]
  int v16; // [esp+28h] [ebp-10h]
  _BYTE v17[12]; // [esp+2Ch] [ebp-Ch] BYREF
  char v18; // [esp+3Ch] [ebp+4h]

  v4 = *(_DWORD *)(*((int (__thiscall **)(TechnoClass *, int))this->RadioClass + 254))(this, a2); /*0x70d5a6*/
  if ( !v4 ) /*0x70d5aa*/
    return 1; /*0x70d5ac*/
  v18 = *(_BYTE *)(v4 + 302); /*0x70d5bf*/
  if ( !v18 ) /*0x70d5c3*/
  {
    target = this->target; /*0x70d5c9*/
    if ( target ) /*0x70d5d1*/
    {
      location = this->?; /*0x70d5d7*/
      v14 = this->?[0]; /*0x70d5e2*/
      v15 = this->?[1]; /*0x70d5e9*/
      v8 = this->?[2]; /*0x70d5f1*/
      v9 = *(_DWORD *)((*((int (__thiscall **)(AbstractClass *, int *))target->vtable0 + 18))(target, &v14) + 8) - v8; /*0x70d5fd*/
      if ( v9 > 0 ) /*0x70d602*/
      {
        v10 = (_DWORD *)(*((int (__thiscall **)(AbstractClass *, _BYTE *))this->target->vtable0 + 18))( /*0x70d611*/
                          this->target,
                          v17);
        v11 = v10[1]; /*0x70d614*/
        v12 = *location - *v10; /*0x70d620*/
        v15 = location[1] - v11; /*0x70d622*/
        v14 = v12; /*0x70d626*/
        v16 = location[2]; /*0x70d638*/
        Math::Sqrt((double)v12 * (double)v12 + (double)v15 * (double)v15); /*0x70d64d*/
        LOWORD(v13) = Math::RoundToInt(v2); /*0x70d655*/
        return v13 < v9; /*0x70d65e*/
      }
    }
  }
  return v18; /*0x70d5ae*/
}



// ==== 0x0070D670  TechnoClass::DecCounter  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::DecCounter(TechnoClass *this)
{
  int result; // eax

  result = this->ammo; /*0x70d670*/
  if ( result > 0 ) /*0x70d678*/
    this->ammo = --result; /*0x70d67b*/
  return result; /*0x70d681*/
}



// ==== 0x0070D690  TechnoClass::ComputeCombatDamage  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::ComputeCombatDamage(TechnoClass *this, int a2)
{
  int v3; // eax
  int (__thiscall **vtable0)(TechnoClass *); // edx
  int v5; // edi
  int v6; // eax
  _DWORD *v7; // eax
  int v8; // eax
  int v9; // eax
  int v11; // ebp
  char *UIObjectCOM; // eax
  char *v13; // ebx
  int *v14; // eax
  _BYTE v15[12]; // [esp+Ch] [ebp-Ch] BYREF

  v3 = (*((int (__thiscall **)(TechnoClass *))this->RadioClass + 33))(this); /*0x70d69a*/
  vtable0 = (int (__thiscall **)(TechnoClass *))this->RadioClass; /*0x70d6a6*/
  if ( *(_DWORD *)(v3 + 3352) ) /*0x70d6a0*/
  {
    v5 = *(_DWORD *)(vtable0[33](this) + 3352); /*0x70d6b4*/
    v6 = (*((int (__thiscall **)(TechnoClass *))this->RadioClass + 33))(this); /*0x70d6be*/
LABEL_6:
    LOWORD(v8) = Math::RoundToInt((double)*(int *)(v5 + 164) * *(float *)(v6 + 3356)); /*0x70d6eb*/
    goto LABEL_8; /*0x70d6fc*/
  }
  v7 = (_DWORD *)vtable0[253](this); /*0x70d6c6*/
  if ( v7 && *v7 ) /*0x70d6d0*/
  {
    v5 = *(_DWORD *)(*((int (__thiscall **)(TechnoClass *))this->RadioClass + 253))(this); /*0x70d6e1*/
    v6 = (*((int (__thiscall **)(TechnoClass *))this->RadioClass + 33))(this); /*0x70d6e5*/
    goto LABEL_6; /*0x70d6e5*/
  }
  v5 = *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 4060); /*0x70d707*/
  v9 = (*((int (__thiscall **)(TechnoClass *))this->RadioClass + 33))(this); /*0x70d70d*/
  LOWORD(v8) = Math::RoundToInt((double)*(int *)(v9 + 160) * 0.5); /*0x70d71f*/
LABEL_8:
  if ( !v5 ) /*0x70d728*/
    return 0; /*0x70d72c*/
  v11 = a2 + v8; /*0x70d747*/
  UIObjectCOM = (char *)CreateUIObjectCOM( /*0x70d756*/
                          *(_DWORD *)(v5 + 160),
                          (int)this,
                          (int)this,
                          a2 + v8,
                          *(_DWORD *)(v5 + 172),
                          0,
                          *(_BYTE *)(v5 + 303));
  v13 = UIObjectCOM; /*0x70d75b*/
  if ( UIObjectCOM ) /*0x70d75f*/
  {
    Function::Method_46B260(UIObjectCOM, v5); /*0x70d764*/
    (*(void (__thiscall **)(char *))(*(_DWORD *)v13 + 212))(v13); /*0x70d76d*/
    v14 = (int *)(*((int (__thiscall **)(TechnoClass *, _BYTE *))this->RadioClass + 18))(this, v15); /*0x70d77c*/
    Warhead::ApplyDamage(v13, v14); /*0x70d782*/
    (*(void (__stdcall **)(char *))(*(_DWORD *)v13 + 8))(v13); /*0x70d78a*/
  }
  return v11; /*0x70d72a*/
}



// ==== 0x0070D7A0  InfantryClass::ReleaseInfiltrators  this=InfantryClass  sig=csp ====
int __thiscall InfantryClass::ReleaseInfiltrators(InfantryClass *this)
{
  int result; // eax
  ParticleSystemClass *damageParticles; // ecx

  BuildingClass::GetHealthRatio((BuildingClass *)this); /*0x70d7a3*/
  result = *(_DWORD *)&DSurface_ViewBounds.__pad_FC[324]; /*0x70d7a8*/
  __asm /*0x70d7ad*/
  {
    fcomp qword ptr [eax+1700h]
    fnstsw ax
  }
  if ( (result & 0x4100) == 0 /*0x70d7c7*/
    || (result = (*((int (__thiscall **)(InfantryClass *))this->FootClass + 114))(this), result < -10) )
  {
    damageParticles = this->?; /*0x70d7c9*/
    if ( damageParticles ) /*0x70d7d1*/
      return (*((int (__thiscall **)(ParticleSystemClass *))damageParticles->ObjectClass + 62))(damageParticles); /*0x70d7d5*/
  }
  return result; /*0x70d7db*/
}



// ==== 0x0070D7E0  FootClass::ProcessEnterTransport  this=FootClass  sig=csp ====
char __thiscall FootClass::ProcessEnterTransport(FootClass *this)
{
  TechnoClass *queueUpToEnter; // edi
  bool v3; // zf
  void (__thiscall **v4)(FootClass *, int, int); // eax
  void (__thiscall **v6)(FootClass *, int, TechnoClass *); // eax
  _BYTE *vtable0; // eax

  queueUpToEnter = this->?; /*0x70d7e4*/
  if ( !queueUpToEnter ) /*0x70d7ec*/
    return 0; /*0x70d7ec*/
  if ( !queueUpToEnter->? ) /*0x70d7fa*/
  {
    this->? = 0; /*0x70d8d8*/
    return 0; /*0x70d8d8*/
  }
  if ( (queueUpToEnter->? & 1) == 0 ) /*0x70d80c*/
    return 0; /*0x70d8e3*/
  if ( (*((int (__thiscall **)(FootClass *, int, TechnoClass *))this->TechnoClass + 158))(this, 2, this->?) != 1 ) /*0x70d820*/
  {
    if ( (*((int (__thiscall **)(TechnoClass *))queueUpToEnter->RadioClass + 11))(queueUpToEnter) == 6 /*0x70d8aa*/
      && (*((int (__thiscall **)(FootClass *))this->TechnoClass + 11))(this) == 2 )
    {
      vtable0 = queueUpToEnter[1].RadioClass; /*0x70d8ac*/
      if ( vtable0[5802] ) /*0x70d8b2*/
      {
        if ( !vtable0[5801] ) /*0x70d8bc*/
        {
          (*((void (__thiscall **)(FootClass *, int, TechnoClass *))this->TechnoClass + 158))(this, 14, queueUpToEnter); /*0x70d8cd*/
          return 0; /*0x70d8d7*/
        }
      }
    }
    return 0; /*0x70d8c4*/
  }
  v3 = (*((int (__thiscall **)(FootClass *, int, TechnoClass *))this->TechnoClass + 158))(this, 15, queueUpToEnter) == 1; /*0x70d82f*/
  v4 = (void (__thiscall **)(FootClass *, int, int))this->TechnoClass; /*0x70d832*/
  if ( v3 ) /*0x70d834*/
  {
    v4[122](this, 7, 1); /*0x70d83c*/
    (*((void (__thiscall **)(FootClass *, TechnoClass *, int))this->TechnoClass + 288))(this, queueUpToEnter, 1); /*0x70d849*/
    this->? = 0; /*0x70d84f*/
  }
  else
  {
    v4[122](this, -1, 0); /*0x70d864*/
    (*((void (__thiscall **)(FootClass *, _DWORD, int))this->TechnoClass + 288))(this, 0, 1); /*0x70d872*/
    v6 = (void (__thiscall **)(FootClass *, int, TechnoClass *))this->TechnoClass; /*0x70d878*/
    this->? = 0; /*0x70d87f*/
    v6[158](this, 3, queueUpToEnter); /*0x70d889*/
  }
  return 1; /*0x70d859*/
}



// ==== 0x0070D8F0  TechnoClass::PlaceAtCell  this=TechnoClass  sig=csp ====
char __thiscall TechnoClass::PlaceAtCell(TechnoClass *this)
{
  TechnoClass *queueUpToEnter; // eax
  void (__thiscall **vtable0)(TechnoClass *, void *, int); // edi
  void *v4; // eax
  __int16 v6[2]; // [esp+4h] [ebp-8h] BYREF
  int v7; // [esp+8h] [ebp-4h] BYREF

  queueUpToEnter = this->queueUpToEnter; /*0x70d8f6*/
  if ( queueUpToEnter ) /*0x70d8fe*/
  {
    if ( (queueUpToEnter->? & 1) != 0 && queueUpToEnter->? ) /*0x70d906*/
    {
      *(_DWORD *)v6 = *MapClass::FindPlacementCellsAlt((char *)this, &v7, (int)queueUpToEnter); /*0x70d926*/
      if ( v6[0] != *(_WORD *)&g_BuildingLoadQueue_Array.?[24] || v6[1] != *(_WORD *)&g_BuildingLoadQueue_Array.? ) /*0x70d938*/
      {
        vtable0 = (void (__thiscall **)(TechnoClass *, void *, int))this->RadioClass; /*0x70d93b*/
        v4 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v6); /*0x70d949*/
        vtable0[288](this, v4, 1); /*0x70d951*/
        (*((void (__thiscall **)(TechnoClass *, int, _DWORD))this->RadioClass + 122))(this, 2, 0); /*0x70d95f*/
        return 1; /*0x70d96c*/
      }
    }
    else
    {
      this->queueUpToEnter = 0; /*0x70d96d*/
    }
  }
  return 0; /*0x70d968*/
}



// ==== 0x0070D980  TechnoClass::StubReturnTrue3  this=TechnoClass  sig=csp ====
void TacticalClass::StubReturnTrue3(TechnoClass *this)
{
  ; /*0x70d980*/
}



// ==== 0x0070D990  TechnoClass::OnEnterCell  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::OnEnterCell(TechnoClass *this)
{
  _DWORD *v2; // eax
  int currentBarrelIndex; // edx
  int *v4; // eax
  int (__thiscall **vtable0)(TechnoClass *, _DWORD *); // eax
  char v6; // bl
  int *v7; // eax
  int v8; // edi
  int v9; // ebp
  int v10; // eax
  int v11; // ecx
  int v12; // edi
  int v13; // eax
  int *v14; // eax
  char isRadarTracked; // al
  int result; // eax
  int v17; // edx
  int v18; // ecx
  int v19; // eax
  int v20; // et2
  int v21; // [esp+Ch] [ebp-2Ch] BYREF
  int currentBurstCount; // [esp+10h] [ebp-28h]
  int v23; // [esp+14h] [ebp-24h]
  int v24[2]; // [esp+18h] [ebp-20h] BYREF
  int v25; // [esp+20h] [ebp-18h]
  int v26; // [esp+24h] [ebp-14h]
  int v27; // [esp+28h] [ebp-10h] BYREF
  int v28; // [esp+2Ch] [ebp-Ch]
  int v29; // [esp+30h] [ebp-8h]
  char v30; // [esp+3Ch] [ebp+4h]
  int v31; // [esp+3Ch] [ebp+4h]

  if ( !this->isDiscoveredByCurrentPlayer && !*(_DWORD *)&dword_A8B238 ) /*0x70d9a8*/
  {
    v2 = (_DWORD *)(*((int (__thiscall **)(TechnoClass *, int *))this->RadioClass + 18))(this, &v27); /*0x70d9b3*/
    this->isDiscoveredByCurrentPlayer = (unsigned __int8)Cell::IsPassable(v2) == 0; /*0x70d9c6*/
  }
  if ( (*((int (__thiscall **)(TechnoClass *))this->RadioClass + 11))(this) != 6 || v30 ) /*0x70d9de*/
  {
    v27 = this->?[0]; /*0x70d9fc*/
    v28 = this->?[1]; /*0x70da08*/
    v29 = this->?[2]; /*0x70da19*/
    v4 = Coord::WorldToScreen((Coord *)&stru_87F5F0.__pad_58[416], v24, &v27, 0); /*0x70da1d*/
    currentBurstCount = *v4; /*0x70da24*/
    currentBarrelIndex = v4[1]; /*0x70da28*/
  }
  else
  {
    currentBarrelIndex = this->currentBarrelIndex; /*0x70d9e6*/
    currentBurstCount = this->currentBurstCount; /*0x70d9ec*/
  }
  vtable0 = (int (__thiscall **)(TechnoClass *, _DWORD *))this->RadioClass; /*0x70da2b*/
  v23 = currentBarrelIndex; /*0x70da36*/
  v21 = 0; /*0x70da3a*/
  v6 = vtable0[201](this, &v21); /*0x70da4e*/
  v7 = (int *)(*(int (__thiscall **)(_DWORD, int *))(**(_DWORD **)&stru_87F5F0.__pad_E12[1538] + 120))( /*0x70da57*/
                *(_DWORD *)&stru_87F5F0.__pad_E12[1538],
                &v27);
  v8 = *v7; /*0x70da5a*/
  v9 = v7[1]; /*0x70da5c*/
  v25 = v7[2]; /*0x70da62*/
  v26 = v7[3]; /*0x70da6f*/
  if ( v21 && v6 && (!this || (this->? & 4) == 0 || *((char *)this + 1668) < 0) ) /*0x70da93*/
  {
    v10 = this->?[0]; /*0x70da9d*/
    v11 = this->?[1]; /*0x70da9f*/
    v29 = this->?[2]; /*0x70daa5*/
    LOWORD(v31) = v10 / 256; /*0x70dab5*/
    HIWORD(v31) = v11 / 256; /*0x70dacd*/
    CreateTriggerClassIfFarEnough(5, (unsigned __int8)(v11 >> 31), v31); /*0x70dad7*/
  }
  if ( currentBurstCount < v8 || currentBurstCount >= v8 + v25 ) /*0x70daec*/
  {
    v12 = v23; /*0x70db02*/
  }
  else
  {
    v12 = v23; /*0x70daee*/
    if ( v23 >= v9 && v23 < v26 + v9 ) /*0x70dafe*/
      goto LABEL_23; /*0x70dafe*/
  }
  if ( v6 ) /*0x70db08*/
  {
    v13 = (*((int (__thiscall **)(TechnoClass *))this->RadioClass + 113))(this); /*0x70db10*/
    v6 = Type::CheckAmbiguity((Type *)&stru_87F5F0.__pad_58[416], v13, 1); /*0x70db21*/
    if ( v6 ) /*0x70db25*/
    {
      v27 = this->?[0]; /*0x70db31*/
      v28 = this->?[1]; /*0x70db3d*/
      v29 = this->?[2]; /*0x70db49*/
      v14 = Coord::WorldToScreen((Coord *)&stru_87F5F0.__pad_58[416], v24, &v27, 1); /*0x70db52*/
      currentBurstCount = *v14; /*0x70db59*/
      v23 = v14[1]; /*0x70db60*/
      v12 = v23; /*0x70db64*/
    }
  }
LABEL_23:
  if ( this->? && v6 ) /*0x70db72*/
    v6 = 0; /*0x70db74*/
  if ( this->isRadarTracked && (currentBurstCount != this->currentBurstCount || v12 != this->currentBarrelIndex || !v6) ) /*0x70db98*/
    (*((void (__thiscall **)(TechnoClass *))this->RadioClass + 294))(this); /*0x70db9e*/
  this->currentBurstCount = currentBurstCount; /*0x70dba8*/
  isRadarTracked = this->isRadarTracked; /*0x70dbae*/
  this->currentBarrelIndex = v12; /*0x70dbb6*/
  if ( !isRadarTracked && v6 ) /*0x70dbc0*/
    (*((void (__thiscall **)(TechnoClass *))this->RadioClass + 293))(this); /*0x70dbc6*/
  result = (int)this->owner; /*0x70dbcc*/
  if ( (Object *)result == dword_A83D4C ) /*0x70dbdc*/
  {
    v17 = this->radarFlashTimer[0]; /*0x70dbde*/
    result = this->radarFlashTimer[2]; /*0x70dbe4*/
    if ( v17 != -1 ) /*0x70dbf3*/
    {
      if ( *(_DWORD *)&stru_A8EB00.?[416] - v17 >= result ) /*0x70dbfb*/
        return result; /*0x70dbfb*/
      result -= *(_DWORD *)&stru_A8EB00.?[416] - v17; /*0x70dbfd*/
    }
    if ( result > 0 ) /*0x70dc01*/
    {
      v18 = this->radarFlashTimer[0]; /*0x70dc03*/
      v19 = this->radarFlashTimer[2]; /*0x70dc09*/
      if ( v18 != -1 ) /*0x70dc12*/
      {
        if ( *(_DWORD *)&stru_A8EB00.?[416] - v18 >= v19 ) /*0x70dc1a*/
          v19 = 0; /*0x70dc20*/
        else
          v19 -= *(_DWORD *)&stru_A8EB00.?[416] - v18; /*0x70dc1c*/
      }
      v20 = v19 % *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 136); /*0x70dc29*/
      result = v19 / *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 136); /*0x70dc29*/
      if ( !v20 ) /*0x70dc31*/
        return (*((int (__thiscall **)(TechnoClass *))this->RadioClass + 295))(this); /*0x70dc37*/
    }
  }
  return result; /*0x70dc3d*/
}



// ==== 0x0070DC50  TechnoClass::processEMPulse  this=TechnoClass  sig=csp ====
char __thiscall TechnoClass::processEMPulse(TechnoClass *this)
{
  return *(_BYTE *)((*((int (__thiscall **)(TechnoClass *))this->RadioClass + 33))(this) + 2054); /*0x70dc5e*/
}



// ==== 0x0070DC60  TechnoClass::OwnerHasPower  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::OwnerHasPower(TechnoClass *this)
{
  HouseClass *v1; // eax

  v1 = (HouseClass *)(*((int (__thiscall **)(TechnoClass *))this->RadioClass + 33))(this); /*0x70dc62*/
  return HouseClass::HasPower(v1);
}



// ==== 0x0070DC70  UnitClass::SetTurret  this=UnitClass  sig=csp ====
int __thiscall UnitClass::SetTurret(UnitClass *this, unsigned int a2)
{
  int result; // eax
  UnitClass *v4; // eax

  result = (*((int (__thiscall **)(UnitClass *))this->FootClass + 33))(this); /*0x70dc76*/
  if ( !*(_BYTE *)(result + 2064) ) /*0x70dc7c*/
  {
    v4 = (UnitClass *)(*((int (__thiscall **)(UnitClass *))this->FootClass + 33))(this); /*0x70dc98*/
    if ( a2 > 0x11 ) /*0x70dc8c*/
    {
      result = UnitClass::processEnterTarget(v4, 0); /*0x70dcc4*/
      this->? = result; /*0x70dcc9*/
      this->? = 0; /*0x70dccf*/
    }
    else
    {
      result = UnitClass::processEnterTarget(v4, a2); /*0x70dca0*/
      this->? = a2; /*0x70dca5*/
      this->? = result; /*0x70dcab*/
    }
  }
  return result; /*0x70dcb1*/
}



// ==== 0x0070DCE0  TechnoClass::checkEMPState  this=TechnoClass  sig=csp ====
BOOL __thiscall TechnoClass::checkEMPState(TechnoClass *this)
{
  return this->currentTurretNumber != -1; /*0x70dcee*/
}



// ==== 0x0070DCF0  TechnoClass::applyEMPulseDamage  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::applyEMPulseDamage(TechnoClass *this)
{
  return this->currentTurretNumber; /*0x70dcf6*/
}



// ==== 0x0070DD20  TechnoClass::GetPoweredWeaponIndex  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::GetPoweredWeaponIndex(TechnoClass *this)
{
  HouseClass *v2; // eax

  v2 = (HouseClass *)(*((int (__thiscall **)(TechnoClass *))this->RadioClass + 33))(this); /*0x70dd25*/
  if ( (unsigned __int8)HouseClass::HasPower(v2) ) /*0x70dd2d*/
    return this->currentWeaponSlot; /*0x70dd36*/
  else
    return 0; /*0x70dd3e*/
}



// ==== 0x0070DD50  TechnoClass::GetVt252Byte  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::GetVt252Byte(TechnoClass *this)
{
  int result; // eax

  result = (*((int (__thiscall **)(TechnoClass *))this->RadioClass + 252))(this); /*0x70dd52*/
  if ( result && (result = *(_DWORD *)result) != 0 ) /*0x70dd60*/
    LOBYTE(result) = *(_BYTE *)(result + 336); /*0x70dd62*/
  else
    LOBYTE(result) = 0; /*0x70dd69*/
  return result; /*0x70dd68*/
}



// ==== 0x0070DD70  ObjectClass::CheckTypeFlag1681  this=TechnoClass  sig=csp ====
int __thiscall ObjectClass::CheckTypeFlag1681(ObjectClass *this)
{
  return *(_BYTE *)((*((int (__thiscall **)(ObjectClass *))this->AbstractClass + 33))(this) + 1681) == 0; /*0x70dd87*/
}



// ==== 0x0070DD90  TechnoClass::g_var_e75276  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::g_var_e75276(TechnoClass *this)
{
  return 1; /*0x70dd95*/
}



// ==== 0x0070DDA0  ObjectClass::CheckTypeFlag1681_2  this=TechnoClass  sig=csp ====
int __thiscall ObjectClass::CheckTypeFlag1681_2(ObjectClass *this)
{
  return *(_BYTE *)((*((int (__thiscall **)(ObjectClass *))this->AbstractClass + 33))(this) + 1681) == 0; /*0x70ddb7*/
}



// ==== 0x0070DDC0  BuildingClass::checkPlacement  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass::checkPlacement(BuildingClass *this)
{
  return this->?; /*0x70ddc6*/
}



// ==== 0x0070DDD0  TechnoClass::SetSpread  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::SetSpread(TechnoClass *this, int a2)
{
  int result; // eax

  result = a2; /*0x70ddd0*/
  if ( a2 >= 0 ) /*0x70ddd6*/
    this->gattlingStage = a2; /*0x70ddd8*/
  return result; /*0x70ddde*/
}



// ==== 0x0070DDF0  TechnoClass::GetMember81  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::GetMember81(TechnoClass *this)
{
  return this->gattlingValue; /*0x70ddf6*/
}



// ==== 0x0070DE00  TechnoClass::SetMember81  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::SetMember81(TechnoClass *this, int a2)
{
  int result; // eax

  result = a2; /*0x70de00*/
  if ( a2 >= 0 ) /*0x70de06*/
    this->gattlingValue = a2; /*0x70de08*/
  return result; /*0x70de0e*/
}



// ==== 0x0070DE20  ObjectClass::method_70DE20  this=ObjectClass  sig=csp ====
int __thiscall sub_70DE20(ObjectClass *this, int a2)
{
  *((_DWORD *)this + 81) += a2; /*0x70de2c*/
  return a2; /*0x70de32*/
}



// ==== 0x0070DE40  TechnoClass::GattlingValueRateDown_GattlingRateDownDelay  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::GattlingValueRateDown_GattlingRateDownDelay(TechnoClass *this, int a2)
{
  int result; // eax
  int v3; // edx

  result = a2; /*0x70de40*/
  v3 = this->gattlingValue - a2; /*0x70de4a*/
  this->gattlingValue = v3; /*0x70de4c*/
  if ( v3 < 0 || !a2 ) /*0x70de56*/
    this->gattlingValue = 0; /*0x70de58*/
  return result; /*0x70de62*/
}



// ==== 0x0070DE70  TechnoClass::GattlingRateUp_GattlingRateDownReset  this=ObjectClass  sig=csp ====
char __thiscall TechnoClass::GattlingRateUp_GattlingRateDownReset(float *this, int a2)
{
  int v3; // ebx
  int v4; // eax
  int v5; // edi
  int v6; // ebp
  int v7; // eax
  int v8; // edi
  int v9; // eax
  unsigned int v10; // ebx
  unsigned int v11; // eax
  int v13; // [esp+10h] [ebp-10h]
  _DWORD v14[3]; // [esp+14h] [ebp-Ch] BYREF

  v3 = *(_DWORD *)((*(int (__thiscall **)(float *))(this->hasParachute)(this) + 3288); /*0x70de81*/
  if ( Audio::IsLoud(this + 84) ) /*0x70de8d*/
    v4 = *(_DWORD *)((*(int (__thiscall **)(float *))(this->hasParachute)(this) + 4 * v3 + 3312); /*0x70dea0*/
  else
    v4 = *(_DWORD *)((*(int (__thiscall **)(float *))(this->hasParachute)(this) + 4 * v3 + 3288); /*0x70deb3*/
  v13 = *((_DWORD *)this + 81); /*0x70dec2*/
  if ( v13 < v4 ) /*0x70dec6*/
    *((_DWORD *)this + 81) += a2 * *(_DWORD *)((*(int (__thiscall **)(float *))(this->hasParachute)(this) + 3340); /*0x70dee5*/
  v5 = this->customSound_controller; /*0x70deeb*/
  v6 = *(_DWORD *)(*(int (__thiscall **)(float *, int))(*(_DWORD *)this + 1016))(this, 2 * v5); /*0x70deff*/
  AudioController::Stop((_DWORD *)this + 304); /*0x70df07*/
  *((_BYTE *)this + 1236) = 0; /*0x70df0e*/
  if ( v5 >= 0 && v5 < v3 - 1 )
  {
    v7 = Audio::IsLoud(this + 84)
       ? *(_DWORD *)((*(int (__thiscall **)(float *))(this->hasParachute)(this) + 4 * v5 + 3316)
       : *(_DWORD *)((*(int (__thiscall **)(float *))(this->hasParachute)(this) + 4 * v5 + 3292);
    if ( v13 >= v7 ) /*0x70df53*/
    {
      v8 = v5 + 1; /*0x70df55*/
      if ( v8 >= 0 ) /*0x70df56*/
        this->customSound_controller = v8; /*0x70df58*/
      v6 = *(_DWORD *)(*(int (__thiscall **)(float *, int))(*(_DWORD *)this + 1016))(this, 2 * v8); /*0x70df6c*/
      AudioController::Stop((_DWORD *)this + 297); /*0x70df74*/
      *((_BYTE *)this + 1208) = 0; /*0x70df79*/
    }
  }
  LOBYTE(v9) = *((_BYTE *)this + 1208); /*0x70df80*/
  if ( !(_BYTE)v9 ) /*0x70df88*/
  {
    v9 = *(_DWORD *)(v6 + 204); /*0x70df8a*/
    if ( v9 > 0 ) /*0x70df92*/
    {
      AudioController::Stop((_DWORD *)this + 297); /*0x70df9c*/
      v10 = *(_DWORD *)(v6 + 204); /*0x70dfa7*/
      *(float *)v14 = this->q027; /*0x70dfaf*/
      *(float *)&v14[1] = this->owningHouseIndex; /*0x70dfb6*/
      *(float *)&v14[2] = this->q0A4; /*0x70dfbd*/
      v11 = Random::State(Randomizer_Global); /*0x70dfc6*/
      LOBYTE(v9) = StartAudioControllerAt( /*0x70dfdd*/
                     *(_DWORD *)(*(_DWORD *)(v6 + 192) + 4 * (v11 % v10)),
                     (int)v14,
                     (int)(this + 297));
      *((_BYTE *)this + 1208) = 1; /*0x70dfe2*/
    }
  }
  return v9; /*0x70dfe9*/
}



// ==== 0x0070E000  TechnoClass::DrainAmmo  this=AbstractClass  sig=csp ====
char __thiscall TechnoClass_DrainAmmo(char *this, int a2)
{
  _DWORD *v3; // ebx
  int *v4; // eax
  int v5; // eax
  int v6; // ecx
  int v7; // ebp
  int v8; // edi
  int v9; // eax
  int v10; // edi

  v3 = this + 1188; /*0x70e006*/
  Mixer::ReleaseChannel((int **)this + 297); /*0x70e00e*/
  v4 = *(int **)this; /*0x70e013*/
  *(this + 1208) = 0; /*0x70e017*/
  v5 = a2 * *(_DWORD *)(((int (__thiscall *)(char *))v4[33])(this) + 3344); /*0x70e030*/
  v6 = *((_DWORD *)this + 81) - v5; /*0x70e035*/
  *((_DWORD *)this + 81) = v6; /*0x70e037*/
  if ( v6 < 0 || !v5 ) /*0x70e041*/
    *((_DWORD *)this + 81) = 0; /*0x70e043*/
  v7 = *((_DWORD *)this + 81); /*0x70e04d*/
  v8 = this->abstractFlags; /*0x70e053*/
  if ( v7 || v8 )
  {
    LOBYTE(v9) = (*(int (__thiscall **)(char *, int))(*(_DWORD *)this + 1016))(this, 2 * v8); /*0x70e0a8*/
    if ( v8 > 0 )
    {
      v9 = Audio::IsLoud((float *)this + 84)
         ? *(_DWORD *)((*(int (__thiscall **)(char *))(this->alignmentPadding)(this) + 4 * v8 + 3312)
         : *(_DWORD *)((*(int (__thiscall **)(char *))(this->alignmentPadding)(this) + 4 * v8 + 3288);
      if ( v7 < v9 ) /*0x70e0e7*/
      {
        v10 = v8 - 1; /*0x70e0e9*/
        if ( v10 >= 0 ) /*0x70e0ea*/
          this->abstractFlags = v10; /*0x70e0ec*/
        (*(void (__thiscall **)(char *, int))(*(_DWORD *)this + 1016))(this, 2 * v10); /*0x70e0fa*/
        LOBYTE(v9) = (unsigned __int8)AudioController::Stop((_DWORD *)this + 304); /*0x70e106*/
        *(this + 1236) = 0; /*0x70e10b*/
      }
    }
  }
  else if ( *(this + 1236) || (LOBYTE(v9) = *(this + 1208), (_BYTE)v9) ) /*0x70e073*/
  {
    AudioController::Stop(v3); /*0x70e07b*/
    LOBYTE(v9) = (unsigned __int8)AudioController::Stop((_DWORD *)this + 304); /*0x70e086*/
    *(this + 1236) = 0; /*0x70e08b*/
    *(this + 1208) = 0; /*0x70e092*/
  }
  return v9; /*0x70e099*/
}



// ==== 0x0070E120  TechnoClass::Vt249to254  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::Vt249to254(TechnoClass *this)
{
  int (__thiscall **vtable0)(TechnoClass *, int); // edi
  int v3; // eax

  vtable0 = (int (__thiscall **)(TechnoClass *, int))this->RadioClass; /*0x70e124*/
  v3 = (*((int (__thiscall **)(TechnoClass *))this->RadioClass + 249))(this); /*0x70e126*/
  return vtable0[254](this, v3); /*0x70e135*/
}



// ==== 0x0070E140  TechnoClass::SelectVocOrSfx  this=TechnoClass  sig=csp ====
_DWORD *__thiscall TechnoClass_SelectVocOrSfx(float *this, int a2)
{
  _DWORD *result; // eax

  if ( a2 == -1 ) /*0x70e14b*/
    return 0; /*0x70e14e*/
  if ( !Audio::IsLoud(this + 84) /*0x70e179*/
    || ((*(void (__thiscall **)(float *))(this->hasParachute)(this),
        (result = (_DWORD *)TechnoClass::processSpyAction(a2)) == 0)
    || !*result )
  {
    (*(void (__thiscall **)(float *))(this->hasParachute)(this); /*0x70e183*/
    return (_DWORD *)TechnoClass::GetAudioEntry(a2); /*0x70e18b*/
  }
  return result; /*0x70e14d*/
}



// ==== 0x0070E1A0  TechnoClass::UpdatePowered  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::UpdatePowered(TechnoClass *this)
{
  HouseClass *v2; // eax

  v2 = (HouseClass *)(*((int (__thiscall **)(TechnoClass *))this->RadioClass + 33))(this); /*0x70e1a5*/
  if ( (unsigned __int8)HouseClass::HasPower(v2) ) /*0x70e1ad*/
    return (*((int (__thiscall **)(TechnoClass *, int))this->RadioClass + 254))(this, this->currentWeaponSlot); /*0x70e1c1*/
  else
    return (*((int (__thiscall **)(TechnoClass *, _DWORD))this->RadioClass + 254))(this, 0); /*0x70e1d0*/
}



// ==== 0x0070E1E0  InfantryClass::ProcessIdle  this=InfantryClass  sig=csp ====
int __thiscall InfantryClass::ProcessIdle(InfantryClass *this, int a2)
{
  HouseClass *v3; // eax
  bool v4; // al

  v3 = (HouseClass *)(*((int (__thiscall **)(InfantryClass *))this->FootClass + 33))(this); /*0x70e1f1*/
  v4 = (unsigned __int8)HouseClass::HasPower(v3) /*0x70e214*/
    && a2 < *(_DWORD *)((*((int (__thiscall **)(InfantryClass *))this->FootClass + 33))(this) + 2060);
  return a2 >= -1 && (a2 < 2 || v4); /*0x70e227*/
}



// ==== 0x0070E240  IsNonNullPtr  this=FootClass  sig=csp ====
int __stdcall IsNonNullPtr(_DWORD *a1)
{
  return a1 && *a1; /*0x70e252*/
}



// ==== 0x0070E280  TechnoClass::ActivateEffect  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::ActivateEffect(TechnoClass *this)
{
  int v2; // [esp+4h] [ebp+4h]

  if ( v2 ) /*0x70e286*/
  {
    this->isDisguisedFlag = 1; /*0x70e288*/
    this->disguiseCreationFrame = *(_DWORD *)&stru_A8EB00.?[416]; /*0x70e294*/
  }
  return (*((int (__thiscall **)(TechnoClass *))this->RadioClass + 295))(this); /*0x70e2a2*/
}



// ==== 0x0070E2B0  TechnoClass::IronCurtain  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::IronCurtain(TechnoClass *this, int a2, int a3, char a4)
{
  int result; // eax
  int v5; // [esp+8h] [ebp-8h]

  *(_DWORD *)this->__pad_18C = *(_DWORD *)&stru_A8EB00.?[416]; /*0x70e2c3*/
  this->ironCurtainTimer[0] = v5; /*0x70e2cd*/
  result = 0; /*0x70e2d0*/
  this->ironTintTimer[2] = 0; /*0x70e2d2*/
  this->ironCurtainTimer[1] = a2; /*0x70e2d8*/
  if ( a4 ) /*0x70e2e2*/
    *(_DWORD *)this->__pad_1C4 = 1; /*0x70e2e4*/
  else
    *(_DWORD *)this->__pad_1C4 = 0; /*0x70e2f4*/
  return result; /*0x70e2e1*/
}



// ==== 0x0070E300  TechnoClass::ResetTimer  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::ResetTimer(TechnoClass *this)
{
  int v1; // eax
  int v3; // [esp+8h] [ebp-8h]
  int v4; // [esp+14h] [ebp+4h]

  v1 = *(_DWORD *)&stru_A8EB00.?[416]; /*0x70e300*/
  this->airstrikeTintTimer[2] = 0; /*0x70e30c*/
  this->ironTintStage = v1; /*0x70e31d*/
  this->airstrikeTimer[0] = v3; /*0x70e327*/
  this->airstrikeTimer[1] = v4; /*0x70e32a*/
  return v3; /*0x70e32d*/
}



// ==== 0x0070E340  ObjectClass::ResetTimer2  this=TechnoClass  sig=csp ====
int __thiscall ObjectClass::ResetTimer2(ObjectClass *this)
{
  ObjectClass *v1; // ecx
  int v3; // [esp+4h] [ebp-8h]

  v1 = (ObjectClass *)((char *)this + 424); /*0x70e34a*/
  v1->AbstractClass = *(void **)&stru_A8EB00.?[416]; /*0x70e350*/
  v1->? = (void *)v3; /*0x70e356*/
  v1->? = 0; /*0x70e359*/
  return v3; /*0x70e35c*/
}



// ==== 0x0070E360  Techno::StartInvulnerability  this=TechnoClass  sig=csp ====
int __thiscall Techno::StartInvulnerability(TechnoClass *this, int a2)
{
  int v3; // eax

  v3 = TechnoClass::InvulnerabilityIntensity_SetContext(this, a2); /*0x70e368*/
  return TechnoClass::CalcFlashAlpha(this, v3); /*0x70e375*/
}



// ==== 0x0070E380  TechnoClass::InvulnerabilityIntensity_SetContext  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::InvulnerabilityIntensity_SetContext(TechnoClass *this, int a2)
{
  int v2; // edx
  int v3; // esi
  int v4; // ecx
  int v5; // eax
  int v6; // edx
  int result; // eax

  v2 = this->ironTintTimer[1]; /*0x70e380*/
  v3 = this->ironCurtainTimer[2]; /*0x70e387*/
  if ( v3 != -1 ) /*0x70e390*/
  {
    if ( *(_DWORD *)&stru_A8EB00.?[416] - v3 >= v2 ) /*0x70e39b*/
      v2 = 0; /*0x70e3a1*/
    else
      v2 -= *(_DWORD *)&stru_A8EB00.?[416] - v3; /*0x70e39d*/
  }
  switch ( this->ironTintTimer[2] ) /*0x70e3b6*/
  {
    case 1: /*0x70e3b6*/
      v4 = (12 - v2) << 8; /*0x70e3c4*/
      goto LABEL_13; /*0x70e3c7*/
    case 2: /*0x70e3b6*/
    case 8: /*0x70e3b6*/
      v5 = 512; /*0x70e3c9*/
      goto LABEL_15; /*0x70e3ce*/
    case 3: /*0x70e3b6*/
      v6 = (unsigned __int64)(1717986919LL * (461 * v2 + 1020)) >> 32; /*0x70e3ea*/
      v5 = ((unsigned int)v6 >> 31) + (v6 >> 3); /*0x70e3f6*/
      goto LABEL_15; /*0x70e3f8*/
    case 4: /*0x70e3b6*/
      v5 = (1024 - 77 * v2) / 8; /*0x70e40a*/
      goto LABEL_15; /*0x70e40d*/
    case 5: /*0x70e3b6*/
      v5 = (77 * v2 + 816) / 16; /*0x70e41f*/
      goto LABEL_15; /*0x70e422*/
    case 6: /*0x70e3b6*/
      v5 = 51; /*0x70e424*/
      goto LABEL_15; /*0x70e429*/
    case 7: /*0x70e3b6*/
      v4 = 3072 - 461 * v2; /*0x70e440*/
LABEL_13:
      v5 = v4 / 6; /*0x70e442*/
      goto LABEL_15; /*0x70e452*/
    case 9: /*0x70e3b6*/
      v5 = ((v2 + 20) << 8) / 20; /*0x70e46b*/
LABEL_15:
      result = (a2 * v5) >> 8; /*0x70e46d*/
      if ( result > 2000 ) /*0x70e47a*/
        result = 2000; /*0x70e47c*/
      break; /*0x70e481*/
    default:
      result = a2; /*0x70e484*/
      break; /*0x70e484*/
  }
  return result; /*0x70e3a9*/
}



// ==== 0x0070E4B0  TechnoClass::CalcFlashAlpha  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::CalcFlashAlpha(TechnoClass *this, int a2)
{
  int v2; // edx
  int v3; // esi
  unsigned int v4; // edx
  int v5; // eax
  int result; // eax

  v2 = this->airstrikeTintTimer[1]; /*0x70e4b0*/
  v3 = this->airstrikeTimer[2]; /*0x70e4b7*/
  if ( v3 != -1 ) /*0x70e4c0*/
  {
    if ( *(_DWORD *)&stru_A8EB00.?[416] - v3 >= v2 ) /*0x70e4cb*/
      v2 = 0; /*0x70e4d1*/
    else
      v2 -= *(_DWORD *)&stru_A8EB00.?[416] - v3; /*0x70e4cd*/
  }
  switch ( this->airstrikeTintTimer[2] ) /*0x70e4e6*/
  {
    case 1: /*0x70e4e6*/
    case 7: /*0x70e4e6*/
      v4 = (unsigned __int64)(715827883LL * ((12 - v2) << 8)) >> 32; /*0x70e4fc*/
      v5 = (v4 >> 31) + v4; /*0x70e505*/
      goto LABEL_12; /*0x70e507*/
    case 2: /*0x70e4e6*/
    case 8: /*0x70e4e6*/
      v5 = 512; /*0x70e509*/
      goto LABEL_12; /*0x70e50e*/
    case 3: /*0x70e4e6*/
    case 9: /*0x70e4e6*/
      v5 = ((v2 + 20) << 8) / 20; /*0x70e554*/
      goto LABEL_12; /*0x70e554*/
    case 4: /*0x70e4e6*/
      v5 = ((128 - v2) << 8) / 64; /*0x70e520*/
      goto LABEL_12; /*0x70e523*/
    case 5: /*0x70e4e6*/
      v5 = ((v2 + 64) << 8) / 64; /*0x70e531*/
      goto LABEL_12; /*0x70e534*/
    case 6: /*0x70e4e6*/
      v5 = 256; /*0x70e536*/
LABEL_12:
      result = (a2 * v5) >> 8; /*0x70e556*/
      if ( result > 2000 ) /*0x70e563*/
        result = 2000; /*0x70e565*/
      break; /*0x70e56a*/
    default:
      result = a2; /*0x70e56d*/
      break; /*0x70e56d*/
  }
  return result; /*0x70e4d9*/
}



// ==== 0x0070E5A0  ObjectClass::UpdateTechnoIdleTimer  this=ObjectClass  sig=csp ====
int __thiscall UpdateTechnoIdleTimer(ObjectClass *this)
{
  int result; // eax
  ObjectClass *v3; // esi
  int v4; // edi
  int v5; // ecx
  int v6; // edx
  int v7; // edi
  int v8; // ecx
  int v9; // edi
  int v10; // ecx
  int v11; // edx
  ObjectClass *v12; // esi
  int v13; // edi
  int v14; // ecx
  int v15; // edi
  int v16; // ecx
  int v17; // edx
  int v18; // [esp+Ch] [ebp-8h]

  result = (*((int (__thiscall **)(ObjectClass *))this->AbstractClass + 88))(this); /*0x70e5a9*/
  if ( (_BYTE)result ) /*0x70e5b1*/
  {
    result = this->alignmentPadding69; /*0x70e5b7*/
    switch ( result ) /*0x70e5c6*/
    {
      case 0: /*0x70e5c6*/
        this->alignmentPadding69 = 1; /*0x70e5d1*/
        result = *(_DWORD *)&stru_A8EB00.?[416]; /*0x70e5db*/
        v3 = (ObjectClass *)((char *)this + 408); /*0x70e5e0*/
        v3->AbstractClass = *(void **)&stru_A8EB00.?[416]; /*0x70e5ec*/
        v3->? = (void *)v18; /*0x70e5ee*/
        v3->? = (void *)6; /*0x70e5f1*/
        return result; /*0x70e5f8*/
      case 1: /*0x70e5c6*/
        v4 = *((_DWORD *)this + 102); /*0x70e5f9*/
        v5 = this->bombVisible; /*0x70e5ff*/
        result = (int)this + 408; /*0x70e605*/
        if ( v4 == -1 ) /*0x70e60e*/
          goto LABEL_7; /*0x70e60e*/
        if ( *(_DWORD *)&stru_A8EB00.?[416] - v4 >= v5 ) /*0x70e61a*/
          goto LABEL_8; /*0x70e61a*/
        v5 -= *(_DWORD *)&stru_A8EB00.?[416] - v4; /*0x70e61c*/
LABEL_7:
        if ( !v5 ) /*0x70e620*/
        {
LABEL_8:
          this->alignmentPadding69 = 2; /*0x70e626*/
          *(_DWORD *)result = *(_DWORD *)&stru_A8EB00.?[416]; /*0x70e636*/
          *((_DWORD *)this + 103) = v18; /*0x70e641*/
          this->bombVisible = 4; /*0x70e645*/
        }
        break; /*0x70e64c*/
      case 2: /*0x70e5c6*/
        v6 = *((_DWORD *)this + 102); /*0x70e64d*/
        result = this->bombVisible; /*0x70e653*/
        if ( v6 == -1 ) /*0x70e662*/
          goto LABEL_12; /*0x70e662*/
        if ( *(_DWORD *)&stru_A8EB00.?[416] - v6 >= result ) /*0x70e66e*/
          goto LABEL_13; /*0x70e66e*/
        result -= *(_DWORD *)&stru_A8EB00.?[416] - v6; /*0x70e670*/
LABEL_12:
        if ( !result ) /*0x70e674*/
        {
LABEL_13:
          this->alignmentPadding69 = 3; /*0x70e67a*/
          result = Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, -5, 5) + 20; /*0x70e69f*/
          *((_DWORD *)this + 102) = *(_DWORD *)&stru_A8EB00.?[416]; /*0x70e6a2*/
          *((_DWORD *)this + 103) = v18; /*0x70e6a8*/
          this->bombVisible = result; /*0x70e6ab*/
        }
        break; /*0x70e6b3*/
      case 3: /*0x70e5c6*/
        v7 = *((_DWORD *)this + 102); /*0x70e6b4*/
        v8 = this->bombVisible; /*0x70e6ba*/
        result = (int)this + 408; /*0x70e6c0*/
        if ( v7 == -1 ) /*0x70e6c9*/
          goto LABEL_17; /*0x70e6c9*/
        if ( *(_DWORD *)&stru_A8EB00.?[416] - v7 >= v8 ) /*0x70e6d5*/
          goto LABEL_18; /*0x70e6d5*/
        v8 -= *(_DWORD *)&stru_A8EB00.?[416] - v7; /*0x70e6d7*/
LABEL_17:
        if ( !v8 ) /*0x70e6db*/
        {
LABEL_18:
          this->alignmentPadding69 = 4; /*0x70e6e1*/
          *(_DWORD *)result = *(_DWORD *)&stru_A8EB00.?[416]; /*0x70e6f1*/
          *((_DWORD *)this + 103) = v18; /*0x70e6fc*/
          this->bombVisible = 8; /*0x70e700*/
        }
        break; /*0x70e707*/
      case 4: /*0x70e5c6*/
        v9 = *((_DWORD *)this + 102); /*0x70e708*/
        v10 = this->bombVisible; /*0x70e70e*/
        result = (int)this + 408; /*0x70e714*/
        if ( v9 == -1 ) /*0x70e71d*/
          goto LABEL_22; /*0x70e71d*/
        if ( *(_DWORD *)&stru_A8EB00.?[416] - v9 >= v10 ) /*0x70e729*/
          goto LABEL_23; /*0x70e729*/
        v10 -= *(_DWORD *)&stru_A8EB00.?[416] - v9; /*0x70e72b*/
LABEL_22:
        if ( !v10 ) /*0x70e72f*/
        {
LABEL_23:
          this->alignmentPadding69 = 5; /*0x70e735*/
          *(_DWORD *)result = *(_DWORD *)&stru_A8EB00.?[416]; /*0x70e745*/
          *((_DWORD *)this + 103) = v18; /*0x70e750*/
          this->bombVisible = 16; /*0x70e754*/
        }
        break; /*0x70e75b*/
      case 5: /*0x70e5c6*/
        v11 = *((_DWORD *)this + 102); /*0x70e75c*/
        result = this->bombVisible; /*0x70e762*/
        if ( v11 == -1 ) /*0x70e771*/
          goto LABEL_27; /*0x70e771*/
        if ( *(_DWORD *)&stru_A8EB00.?[416] - v11 >= result ) /*0x70e77d*/
          goto LABEL_28; /*0x70e77d*/
        result -= *(_DWORD *)&stru_A8EB00.?[416] - v11; /*0x70e77f*/
LABEL_27:
        if ( !result ) /*0x70e783*/
        {
LABEL_28:
          result = Timeout::GetRemaining((Timeout *)this + 99); /*0x70e78f*/
          if ( result >= 54 ) /*0x70e797*/
          {
            this->alignmentPadding69 = 4; /*0x70e7ad*/
            result = *(_DWORD *)&stru_A8EB00.?[416]; /*0x70e7b7*/
            *((_DWORD *)this + 102) = *(_DWORD *)&stru_A8EB00.?[416]; /*0x70e7c1*/
            *((_DWORD *)this + 103) = v18; /*0x70e7c3*/
            this->bombVisible = 8; /*0x70e7c6*/
          }
          else
          {
            this->alignmentPadding69 = 6; /*0x70e799*/
          }
        }
        break; /*0x70e7a8*/
      case 6: /*0x70e5c6*/
        result = Timeout::GetRemaining((Timeout *)this + 99); /*0x70e7d5*/
        if ( result <= 30 ) /*0x70e7dd*/
        {
          this->alignmentPadding69 = 7; /*0x70e7e3*/
          v12 = (ObjectClass *)((char *)this + 408); /*0x70e7f2*/
          v12->AbstractClass = *(void **)&stru_A8EB00.?[416]; /*0x70e7fe*/
          v12->? = (void *)v18; /*0x70e804*/
          v12->? = (void *)6; /*0x70e807*/
          return v18; /*0x70e800*/
        }
        return result; /*0x70e80e*/
      case 7: /*0x70e5c6*/
        v13 = *((_DWORD *)this + 102); /*0x70e80f*/
        v14 = this->bombVisible; /*0x70e815*/
        result = (int)this + 408; /*0x70e81b*/
        if ( v13 == -1 ) /*0x70e824*/
          goto LABEL_36; /*0x70e824*/
        if ( *(_DWORD *)&stru_A8EB00.?[416] - v13 >= v14 ) /*0x70e830*/
          goto LABEL_37; /*0x70e830*/
        v14 -= *(_DWORD *)&stru_A8EB00.?[416] - v13; /*0x70e832*/
LABEL_36:
        if ( !v14 ) /*0x70e836*/
        {
LABEL_37:
          this->alignmentPadding69 = 8; /*0x70e83c*/
          *(_DWORD *)result = *(_DWORD *)&stru_A8EB00.?[416]; /*0x70e84c*/
          *((_DWORD *)this + 103) = v18; /*0x70e857*/
          this->bombVisible = 4; /*0x70e85b*/
        }
        break; /*0x70e862*/
      case 8: /*0x70e5c6*/
        v15 = *((_DWORD *)this + 102); /*0x70e863*/
        v16 = this->bombVisible; /*0x70e869*/
        result = (int)this + 408; /*0x70e86f*/
        if ( v15 == -1 ) /*0x70e878*/
          goto LABEL_41; /*0x70e878*/
        if ( *(_DWORD *)&stru_A8EB00.?[416] - v15 >= v16 ) /*0x70e884*/
          goto LABEL_42; /*0x70e884*/
        v16 -= *(_DWORD *)&stru_A8EB00.?[416] - v15; /*0x70e886*/
LABEL_41:
        if ( !v16 ) /*0x70e88a*/
        {
LABEL_42:
          this->alignmentPadding69 = 9; /*0x70e88c*/
          *(_DWORD *)result = *(_DWORD *)&stru_A8EB00.?[416]; /*0x70e89c*/
          *((_DWORD *)this + 103) = v18; /*0x70e8a7*/
          this->bombVisible = 20; /*0x70e8ab*/
        }
        break; /*0x70e8b2*/
      case 9: /*0x70e5c6*/
        v17 = *((_DWORD *)this + 102); /*0x70e8b3*/
        result = this->bombVisible; /*0x70e8b9*/
        if ( v17 != -1 ) /*0x70e8c2*/
        {
          if ( *(_DWORD *)&stru_A8EB00.?[416] - v17 >= result ) /*0x70e8ce*/
            goto LABEL_47; /*0x70e8ce*/
          result -= *(_DWORD *)&stru_A8EB00.?[416] - v17; /*0x70e8d0*/
        }
        if ( !result ) /*0x70e8d4*/
          goto LABEL_47; /*0x70e8d4*/
        return result; /*0x70e8d4*/
      default:
LABEL_47:
        this->alignmentPadding69 = 10; /*0x70e8d6*/
        return result; /*0x70e8e5*/
    }
  }
  else
  {
    this->alignmentPadding69 = 0; /*0x70e8e6*/
  }
  return result; /*0x70e5eb*/
}



// ==== 0x0070E920  UpdateTimedStateMachine  this=TechnoClass  sig=csp ====
void __fastcall UpdateTimedStateMachine(int *a1)
{
  _DWORD *v2; // esi
  int v3; // edi
  int v4; // ecx
  int v5; // edx
  int v6; // eax
  int v7; // eax
  int v8; // edi
  int v9; // ecx
  int v10; // edi
  int v11; // ecx
  int v12; // edx
  int v13; // eax
  _DWORD *v14; // esi
  int v15; // edi
  int v16; // ecx
  int v17; // edi
  int v18; // ecx
  int v19; // edx
  int v20; // eax
  int v21; // [esp+Ch] [ebp-8h]

  if ( a1
    && (*(int (__thiscall **)(int *))(*a1 + 44))(a1) == 6
    && a1[165]
    && *(_DWORD *)(a1[165] + 80) == ((*(int (__thiscall **)(int *))(*a1 + 44))(a1) == 6 ? (unsigned int)a1 : 0) )
  {
    switch ( a1[112] ) /*0x70e97d*/
    {
      case 0: /*0x70e97d*/
        a1[112] = 1; /*0x70e988*/
        v2 = a1 + 109; /*0x70e997*/
        *v2 = dword_A8ED84; /*0x70e9a3*/
        v2[1] = v21; /*0x70e9a5*/
        v2[2] = 6; /*0x70e9a8*/
        return; /*0x70e9af*/
      case 1: /*0x70e97d*/
        v3 = a1[109]; /*0x70e9b0*/
        v4 = a1[111]; /*0x70e9b6*/
        if ( v3 == -1 ) /*0x70e9c5*/
          goto LABEL_10; /*0x70e9c5*/
        if ( (int)dword_A8ED84 - v3 >= v4 ) /*0x70e9d1*/
          goto LABEL_11; /*0x70e9d1*/
        v4 -= (int)dword_A8ED84 - v3; /*0x70e9d3*/
LABEL_10:
        if ( !v4 ) /*0x70e9d7*/
        {
LABEL_11:
          a1[112] = 2; /*0x70e9dd*/
          a1[109] = (int)dword_A8ED84; /*0x70e9ed*/
          a1[110] = v21; /*0x70e9f8*/
          a1[111] = 4; /*0x70e9fc*/
        }
        break; /*0x70ea03*/
      case 2: /*0x70e97d*/
        v5 = a1[109]; /*0x70ea04*/
        v6 = a1[111]; /*0x70ea0a*/
        if ( v5 == -1 ) /*0x70ea19*/
          goto LABEL_15; /*0x70ea19*/
        if ( (int)dword_A8ED84 - v5 >= v6 ) /*0x70ea25*/
          goto LABEL_16; /*0x70ea25*/
        v6 -= (int)dword_A8ED84 - v5; /*0x70ea27*/
LABEL_15:
        if ( !v6 ) /*0x70ea2b*/
        {
LABEL_16:
          a1[112] = 3; /*0x70ea31*/
          v7 = Random::Range((_DWORD *)dword_A8B230 + 134, -5, 5); /*0x70ea4b*/
          a1[109] = (int)dword_A8ED84; /*0x70ea59*/
          a1[110] = v21; /*0x70ea5f*/
          a1[111] = v7 + 20; /*0x70ea62*/
        }
        break; /*0x70ea6a*/
      case 3: /*0x70e97d*/
        v8 = a1[109]; /*0x70ea6b*/
        v9 = a1[111]; /*0x70ea71*/
        if ( v8 == -1 ) /*0x70ea80*/
          goto LABEL_20; /*0x70ea80*/
        if ( (int)dword_A8ED84 - v8 >= v9 ) /*0x70ea8c*/
          goto LABEL_21; /*0x70ea8c*/
        v9 -= (int)dword_A8ED84 - v8; /*0x70ea8e*/
LABEL_20:
        if ( !v9 ) /*0x70ea92*/
        {
LABEL_21:
          a1[112] = 4; /*0x70ea98*/
          a1[109] = (int)dword_A8ED84; /*0x70eaa8*/
          a1[110] = v21; /*0x70eab3*/
          a1[111] = 64; /*0x70eab7*/
        }
        break; /*0x70eabe*/
      case 4: /*0x70e97d*/
        v10 = a1[109]; /*0x70eabf*/
        v11 = a1[111]; /*0x70eac5*/
        if ( v10 == -1 ) /*0x70ead4*/
          goto LABEL_25; /*0x70ead4*/
        if ( (int)dword_A8ED84 - v10 >= v11 ) /*0x70eae0*/
          goto LABEL_26; /*0x70eae0*/
        v11 -= (int)dword_A8ED84 - v10; /*0x70eae2*/
LABEL_25:
        if ( !v11 ) /*0x70eae6*/
        {
LABEL_26:
          a1[112] = 5; /*0x70eaec*/
          a1[109] = (int)dword_A8ED84; /*0x70eafc*/
          a1[110] = v21; /*0x70eb07*/
          a1[111] = 64; /*0x70eb0b*/
        }
        break; /*0x70eb12*/
      case 5: /*0x70e97d*/
        v12 = a1[109]; /*0x70eb13*/
        v13 = a1[111]; /*0x70eb19*/
        if ( v12 == -1 ) /*0x70eb28*/
          goto LABEL_30; /*0x70eb28*/
        if ( (int)dword_A8ED84 - v12 >= v13 ) /*0x70eb34*/
          goto LABEL_31; /*0x70eb34*/
        v13 -= (int)dword_A8ED84 - v12; /*0x70eb36*/
LABEL_30:
        if ( !v13 ) /*0x70eb3a*/
        {
LABEL_31:
          if ( Timeout::GetRemaining(a1 + 106) >= 158 ) /*0x70eb50*/
          {
            a1[112] = 4; /*0x70eb66*/
            a1[109] = (int)dword_A8ED84; /*0x70eb7a*/
            a1[110] = v21; /*0x70eb7c*/
            a1[111] = 64; /*0x70eb7f*/
          }
          else
          {
            a1[112] = 6; /*0x70eb52*/
          }
        }
        break; /*0x70eb61*/
      case 6: /*0x70e97d*/
        if ( Timeout::GetRemaining(a1 + 106) <= 30 ) /*0x70eb96*/
        {
          a1[112] = 7; /*0x70eb9c*/
          v14 = a1 + 109; /*0x70ebab*/
          *v14 = dword_A8ED84; /*0x70ebb7*/
          v14[1] = v21; /*0x70ebbd*/
          v14[2] = 6; /*0x70ebc0*/
        }
        return; /*0x70ebc7*/
      case 7: /*0x70e97d*/
        v15 = a1[109]; /*0x70ebc8*/
        v16 = a1[111]; /*0x70ebce*/
        if ( v15 == -1 ) /*0x70ebdd*/
          goto LABEL_39; /*0x70ebdd*/
        if ( (int)dword_A8ED84 - v15 >= v16 ) /*0x70ebe9*/
          goto LABEL_40; /*0x70ebe9*/
        v16 -= (int)dword_A8ED84 - v15; /*0x70ebeb*/
LABEL_39:
        if ( !v16 ) /*0x70ebef*/
        {
LABEL_40:
          a1[112] = 8; /*0x70ebf5*/
          a1[109] = (int)dword_A8ED84; /*0x70ec05*/
          a1[110] = v21; /*0x70ec10*/
          a1[111] = 4; /*0x70ec14*/
        }
        break; /*0x70ec1b*/
      case 8: /*0x70e97d*/
        v17 = a1[109]; /*0x70ec1c*/
        v18 = a1[111]; /*0x70ec22*/
        if ( v17 == -1 ) /*0x70ec31*/
          goto LABEL_44; /*0x70ec31*/
        if ( (int)dword_A8ED84 - v17 >= v18 ) /*0x70ec3d*/
          goto LABEL_45; /*0x70ec3d*/
        v18 -= (int)dword_A8ED84 - v17; /*0x70ec3f*/
LABEL_44:
        if ( !v18 ) /*0x70ec43*/
        {
LABEL_45:
          a1[112] = 9; /*0x70ec45*/
          a1[109] = (int)dword_A8ED84; /*0x70ec55*/
          a1[110] = v21; /*0x70ec60*/
          a1[111] = 20; /*0x70ec64*/
        }
        break; /*0x70ec6b*/
      case 9: /*0x70e97d*/
        v19 = a1[109]; /*0x70ec6c*/
        v20 = a1[111]; /*0x70ec72*/
        if ( v19 != -1 ) /*0x70ec7b*/
        {
          if ( (int)dword_A8ED84 - v19 >= v20 ) /*0x70ec87*/
            goto LABEL_50; /*0x70ec87*/
          v20 -= (int)dword_A8ED84 - v19; /*0x70ec89*/
        }
        if ( !v20 ) /*0x70ec8d*/
          goto LABEL_50; /*0x70ec8d*/
        return; /*0x70ec8d*/
      default:
LABEL_50:
        a1[112] = 10; /*0x70ec8f*/
        return; /*0x70ec9e*/
    }
  }
  else
  {
    a1[112] = 0; /*0x70ec9f*/
  }
}



// ==== 0x0070ECE0  TechnoClass::Fire  this=TechnoClass  sig=csp ====
BulletClass *__thiscall TechnoClass::Fire(TechnoClass *this)
{
  BulletClass *result; // eax
  void *vtable0; // [esp+0h] [ebp-4h]

  result = (BulletClass *)this->RadioClass; /*0x70ece1*/
  vtable0 = this->RadioClass; /*0x70ece5*/
  if ( this->RadioClass ) /*0x70ece5*/
  {
    result = (BulletClass *)this->?; /*0x70eceb*/
    this->? = 1; /*0x70ecf5*/
    this->? = (int)result; /*0x70ecf8*/
    if ( (int)result < 1 ) /*0x70ecfb*/
      this->? = 1; /*0x70ecfd*/
    *(float *)&this->? = (double)(int)vtable0 / (double)this->?; /*0x70ed07*/
  }
  return result; /*0x70ed0b*/
}



// ==== 0x0070ED10  TechnoClass::Update2  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::Update2(TechnoClass *this)
{
  int result; // eax
  double v2; // st7
  int v3; // esi
  int v4; // eax
  int v5; // eax

  result = this->?; /*0x70ed10*/
  if ( result ) /*0x70ed17*/
  {
    v2 = *(float *)&this->? + *(float *)&this->?; /*0x70ed1c*/
    v3 = this->? - 1; /*0x70ed23*/
    this->? = v3; /*0x70ed24*/
    *(float *)&this->? = v2; /*0x70ed29*/
    if ( v3 <= 0 ) /*0x70ed2d*/
    {
      v4 = result - 1; /*0x70ed2f*/
      if ( v4 ) /*0x70ed30*/
      {
        v5 = v4 - 1; /*0x70ed32*/
        if ( v5 ) /*0x70ed33*/
        {
          result = v5 - 1; /*0x70ed35*/
          if ( !result ) /*0x70ed36*/
          {
            this->? = 0; /*0x70ed38*/
            this->? = 0; /*0x70ed3b*/
          }
          return result; /*0x70ed3e*/
        }
      }
      else
      {
        result = (int)this->?; /*0x70ed3f*/
        this->? = 2; /*0x70ed42*/
        this->? = result; /*0x70ed4c*/
        this->? = 0; /*0x70ed4f*/
        if ( result > 1 ) /*0x70ed52*/
          return result; /*0x70ed52*/
      }
      result = (int)this->?; /*0x70ed54*/
      this->? = 3; /*0x70ed57*/
      this->? = result; /*0x70ed61*/
      if ( result < 1 ) /*0x70ed64*/
        this->? = 1; /*0x70ed66*/
      *(float *)&this->? = -((double)(int)this->RadioClass / (double)this->?); /*0x70ed74*/
    }
  }
  return result; /*0x70ed3e*/
}



// ==== 0x0070ED80  TechnoClass::GetAnimationFlags  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::GetAnimationFlags(TechnoClass *this)
{
  int v1; // esi
  int v2; // eax
  int v4; // ebx
  int v5; // ecx
  int v6; // eax
  int v8; // [esp+10h] [ebp+4h]

  v1 = v8; /*0x70ed82*/
  v2 = *(_DWORD *)&stru_A8EB00.?[416]; /*0x70ed86*/
  v4 = this->disguiseBlinkTimer[0]; /*0x70ed8e*/
  v5 = this->disguiseBlinkTimer[2]; /*0x70ed94*/
  if ( v4 != -1 ) /*0x70ed9d*/
  {
    if ( *(_DWORD *)&stru_A8EB00.?[416] - v4 >= v5 ) /*0x70eda5*/
      goto LABEL_7; /*0x70eda5*/
    v5 -= *(_DWORD *)&stru_A8EB00.?[416] - v4; /*0x70eda7*/
  }
  if ( v5 ) /*0x70edab*/
  {
    if ( !(unsigned __int8)House::IsHumanPlayer((House *)this->owner) ) /*0x70edba*/
      return v1; /*0x70edba*/
    v2 = *(_DWORD *)&stru_A8EB00.?[416]; /*0x70edbc*/
  }
LABEL_7:
  v6 = (v2 - this->disguiseCreationFrame + 64) % 256; /*0x70edc1*/
  if ( v6 >= 64 ) /*0x70eddb*/
  {
    if ( v6 < 68 ) /*0x70ede0*/
      return v8 | 2; /*0x70ede0*/
    if ( v6 < 76 ) /*0x70ede5*/
      return v8 | 4; /*0x70edef*/
    if ( v6 < 80 ) /*0x70edf5*/
      return v8 | 2; /*0x70edf5*/
    if ( v6 >= 112 ) /*0x70edfa*/
    {
      if ( v6 < 116 ) /*0x70edff*/
        return v8 | 2; /*0x70edff*/
      if ( v6 < 124 ) /*0x70ee04*/
        return v8 | 4; /*0x70ee0e*/
      if ( v6 < 128 ) /*0x70ee16*/
        return v8 | 2; /*0x70ee18*/
    }
  }
  return v1; /*0x70edea*/
}



// ==== 0x0070EE30  TechnoClass::CheckFireCooldown  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::CheckFireCooldown(TechnoClass *this)
{
  int v2; // edx
  int v3; // eax
  int result; // eax
  HouseClass *v5; // edi
  int v6; // [esp+Ch] [ebp+4h]

  v2 = this->disguiseBlinkTimer[0]; /*0x70ee34*/
  v3 = this->disguiseBlinkTimer[2]; /*0x70ee3a*/
  if ( v2 != -1 ) /*0x70ee43*/
  {
    if ( *(_DWORD *)&stru_A8EB00.?[416] - v2 >= v3 ) /*0x70ee4f*/
      goto LABEL_6; /*0x70ee4f*/
    v3 -= *(_DWORD *)&stru_A8EB00.?[416] - v2; /*0x70ee51*/
  }
  if ( v3 ) /*0x70ee55*/
  {
    result = House::IsHumanPlayer((House *)this->owner); /*0x70ee5d*/
    if ( !(_BYTE)result ) /*0x70ee64*/
      goto LABEL_14; /*0x70ee64*/
  }
LABEL_6:
  if ( (unsigned __int8)House::IsHumanPlayer((House *)this->owner) /*0x70ee7d*/
    && (*((unsigned __int8 (__thiscall **)(TechnoClass *))this->RadioClass + 49))(this) )
  {
    result = (*(_DWORD *)&stru_A8EB00.?[416] - this->disguiseCreationFrame + 64) % 256; /*0x70eea4*/
    if ( result >= 72 && result <= 119 ) /*0x70eead*/
    {
      LOBYTE(result) = 0; /*0x70eeb0*/
      return result; /*0x70eeb3*/
    }
    goto LABEL_14; /*0x70eead*/
  }
  v5 = (HouseClass *)(*((int (__thiscall **)(TechnoClass *))this->RadioClass + 111))(this); /*0x70eec0*/
  result = (*((int (__thiscall **)(TechnoClass *))this->RadioClass + 49))(this); /*0x70eec6*/
  if ( !(_BYTE)result || !v5 || (result = HouseClass::HasType(v5, *(_DWORD *)(v6 + 48)), (_BYTE)result) ) /*0x70eee5*/
LABEL_14:
    LOBYTE(result) = 1; /*0x70eeec*/
  return result; /*0x70eeaf*/
}



// ==== 0x0070EF00  TechnoClass::CanDamageTarget  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::CanDamageTarget(TechnoClass *this)
{
  int (__thiscall **vtable0)(TechnoClass *, int); // ebx
  int v3; // eax
  int result; // eax
  int v5; // esi
  int v6; // [esp+10h] [ebp+4h]

  vtable0 = (int (__thiscall **)(TechnoClass *, int))this->RadioClass; /*0x70ef09*/
  v3 = (*((int (__thiscall **)(TechnoClass *, int))this->RadioClass + 185))(this, v6); /*0x70ef0c*/
  result = vtable0[254](this, v3); /*0x70ef15*/
  v5 = *(_DWORD *)result; /*0x70ef1b*/
  if ( *(_DWORD *)result ) /*0x70ef1b*/
  {
    result = (*(int (__thiscall **)(int))(*(_DWORD *)v6 + 44))(v6); /*0x70ef29*/
    if ( result == 36 ) /*0x70ef2f*/
    {
      if ( *(_BYTE *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 6121) || *(_BYTE *)(v5 + 312) ) /*0x70ef41*/
      {
        LOBYTE(result) = 1; /*0x70ef4d*/
        return result; /*0x70ef50*/
      }
    }
    else if ( *(_BYTE *)(v5 + 312) ) /*0x70ef53*/
    {
      result = (*(int (__thiscall **)(int))(*(_DWORD *)v6 + 44))(v6); /*0x70ef61*/
      if ( result == 11 ) /*0x70ef67*/
      {
        result = *(_DWORD *)(v6 + 68); /*0x70ef69*/
        if ( result != -1 ) /*0x70ef6f*/
        {
          if ( *(_BYTE *)(*(_DWORD *)(*(_DWORD *)stru_A83D50.__pad_34 + 4 * result) + 693) ) /*0x70ef7a*/
          {
            LOBYTE(result) = 1; /*0x70ef86*/
            return result; /*0x70ef89*/
          }
        }
      }
      if ( v6 ) /*0x70ef8e*/
      {
        if ( (*(_BYTE *)(v6 + 20) & 2) != 0 ) /*0x70ef94*/
        {
          result = (*(int (__thiscall **)(int))(*(_DWORD *)v6 + 196))(v6); /*0x70ef9a*/
          if ( (_BYTE)result ) /*0x70efa2*/
          {
            result = (*(int (__thiscall **)(int, int))(*(_DWORD *)v6 + 208))(v6, 1); /*0x70efaa*/
            if ( !result ) /*0x70efb2*/
              return 1; /*0x70efb9*/
          }
        }
      }
    }
  }
  LOBYTE(result) = 0; /*0x70efbe*/
  return result; /*0x70ef4b*/
}



// ==== 0x0070EFD0  TechnoClass::HasPassengers  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::HasPassengers(TechnoClass *this)
{
  return this->empLockRemaining > 0; /*0x70efdd*/
}



// ==== 0x0070EFE0  TechnoClass::GetMaxSpeed  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::GetMaxSpeed(TechnoClass *this)
{
  int v1; // eax

  v1 = (*((int (__thiscall **)(TechnoClass *))this->RadioClass + 33))(this); /*0x70efe2*/
  if ( v1 ) /*0x70efea*/
    return *(_DWORD *)(v1 + 1656); /*0x70efec*/
  else
    return 0; /*0x70eff3*/
}



// ==== 0x0070F000  TechnoClass::ClearUnknownFlag  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::ClearUnknownFlag(TechnoClass *this)
{
  int v2; // [esp+4h] [ebp+4h]

  return *(char *)(v2 + 12); /*0x70f008*/
}



// ==== 0x0070F010  TechnoClass::COMStub_Return0_298  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::COMStub_Return0_298(TechnoClass *this)
{
  int result; // eax

  return result; /*0x70f010*/
}



// ==== 0x0070F020  TechnoClass::StubReturnFalse5  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::StubReturnFalse5(TechnoClass *this)
{
  int result; // eax

  LOBYTE(result) = 0; /*0x70f020*/
  return result; /*0x70f022*/
}



// ==== 0x0070F030  TechnoClass::StubReturnFalse6  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::StubReturnFalse6(TechnoClass *this)
{
  int result; // eax

  LOBYTE(result) = 0; /*0x70f030*/
  return result; /*0x70f032*/
}



// ==== 0x0070F040  TechnoClass::checkMovementRestrictions  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::checkMovementRestrictions(TechnoClass *this)
{
  return -1; /*0x70f043*/
}



// ==== 0x0070F050  TechnoClass::ProcessCellClearance  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::ProcessCellClearance(TechnoClass *this)
{
  _DWORD *v2; // [esp+Ch] [ebp+4h]

  *v2 = -1; /*0x70f05e*/
  v2[1] = -1; /*0x70f063*/
  v2[2] = -1; /*0x70f066*/
  return (int)v2; /*0x70f069*/
}



// ==== 0x0070F070  TechnoClass::GetTypeVt40  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::GetTypeVt40(TechnoClass *this)
{
  int v1; // eax

  v1 = (*((int (__thiscall **)(TechnoClass *))this->RadioClass + 33))(this); /*0x70f072*/
  return (*(int (__thiscall **)(int))(*(_DWORD *)v1 + 160))(v1);
}



// ==== 0x0070F090  ObjectClass::GetTypeVt41  this=TechnoClass  sig=csp ====
int __thiscall ObjectClass::GetTypeVt41(ObjectClass *this)
{
  int v1; // eax

  v1 = (*((int (__thiscall **)(ObjectClass *))this->AbstractClass + 33))(this); /*0x70f092*/
  return (*(int (__thiscall **)(int))(*(_DWORD *)v1 + 164))(v1);
}



// ==== 0x0070F0B0  TacticalClass::MapSpecialDrawMode  this=TacticalClass  sig=csp ====
int __thiscall TacticalClass::MapSpecialDrawMode(TacticalClass *this, int a2)
{
  char v3; // al
  int result; // eax
  bool v5; // zf

  v3 = Render_Draw_731BF0(); /*0x70f0b3*/
  if ( this == (TacticalClass *)1 ) /*0x70f0bb*/
  {
    if ( v3 ) /*0x70f0bf*/
      return 62; /*0x70f0c7*/
    return (int)this; /*0x70f0bf*/
  }
  if ( this != (TacticalClass *)5 ) /*0x70f0cd*/
    return (int)this; /*0x70f0cd*/
  v5 = v3 == 0; /*0x70f0cf*/
  result = 63; /*0x70f0d1*/
  if ( v5 ) /*0x70f0d6*/
    return (int)this; /*0x70f0d8*/
  return result; /*0x70f0c6*/
}



// ==== 0x0070F0E0  TechnoClass::StubReturnFalse7  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::StubReturnFalse7(TechnoClass *this)
{
  int result; // eax

  LOBYTE(result) = 0; /*0x70f0e0*/
  return result; /*0x70f0e2*/
}



// ==== 0x0070F0F0  TechnoClass::StubReturnFalse8  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::StubReturnFalse8(TechnoClass *this)
{
  int result; // eax

  LOBYTE(result) = 0; /*0x70f0f0*/
  return result; /*0x70f0f2*/
}



// ==== 0x0070F100  TechnoClass::COMStub_Return0_307  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::COMStub_Return0_307(TechnoClass *this)
{
  int result; // eax

  return result; /*0x70f100*/
}



// ==== 0x0070F110  TechnoClass::StubReturnFalse9  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::StubReturnFalse9(TechnoClass *this)
{
  int result; // eax

  LOBYTE(result) = 0; /*0x70f110*/
  return result; /*0x70f112*/
}



// ==== 0x0070F120  RevealTechnoClassRadarEvent  this=-  sig=ida-proto ====
DWORD __fastcall TechnoClass_RevealRadarEvent(int a1, int a2)
{
  int v3; // edi
  DWORD Ticks; // eax
  int v5; // eax
  DWORD result; // eax
  #375 *v7; // [esp-1Ch] [ebp-2Ch]
  _BYTE v8[4]; // [esp+4h] [ebp-Ch] BYREF
  int v9; // [esp+8h] [ebp-8h]

  if ( a1 && a2 ) /*0x70f12c*/
  {
    dword_B0EB3C = a2; /*0x70f134*/
    dword_B0EB38 = a1; /*0x70f13a*/
    v3 = *((_DWORD *)dword_8871E0 + 1536); /*0x70f140*/
    Ticks = Timer::GetTicks(); /*0x70f14a*/
    dword_B0EA74 = v9; /*0x70f161*/
    v7 = dword_A83D4C; /*0x70f169*/
    dword_B0EA70 = Ticks; /*0x70f16e*/
    dword_B0EA78 = v3; /*0x70f173*/
    v5 = (*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)a1 + 72))(a1, v8); /*0x70f180*/
    return MapClass::RevealArea0(v5, 2, v7, 0, 0, 0, 1, 1); /*0x70f189*/
  }
  else
  {
    dword_B0EB3C = 0; /*0x70f198*/
    dword_B0EB38 = 0; /*0x70f1a2*/
    result = Timer::GetTicks(); /*0x70f1ac*/
    dword_B0EA70 = result; /*0x70f1b7*/
    dword_B0EA74 = v9; /*0x70f1bc*/
    dword_B0EA78 = 0; /*0x70f1c2*/
  }
  return result; /*0x70f18f*/
}



// ==== 0x0070F1D0  ObjectClass::DrawBuildingRangeIndicator  this=ObjectClass  sig=csp ====
char __thiscall DrawBuildingRangeIndicator(ObjectClass *this, int *a2, int a3)
{
  void **v4; // eax
  AnimClass *v5; // edi
  int *v6; // eax
  int v7; // ebp
  int v8; // ebx
  int v9; // esi
  int v10; // ecx
  int v11; // edi
  int v12; // eax
  int v14; // [esp+80h] [ebp-D4h]
  int v15; // [esp+84h] [ebp-D0h]
  int v16; // [esp+88h] [ebp-CCh]
  int v17; // [esp+98h] [ebp-BCh]
  int v18; // [esp+9Ch] [ebp-B8h]
  int v19; // [esp+A0h] [ebp-B4h]
  int v20; // [esp+A8h] [ebp-ACh]
  _DWORD v21[2]; // [esp+ACh] [ebp-A8h] BYREF
  _DWORD v22[2]; // [esp+B4h] [ebp-A0h] BYREF
  _DWORD v23[2]; // [esp+BCh] [ebp-98h] BYREF
  _DWORD v24[2]; // [esp+C4h] [ebp-90h] BYREF
  _DWORD v25[2]; // [esp+CCh] [ebp-88h] BYREF
  _DWORD v26[2]; // [esp+D4h] [ebp-80h] BYREF
  _DWORD v27[2]; // [esp+DCh] [ebp-78h] BYREF
  _DWORD v28[2]; // [esp+E4h] [ebp-70h] BYREF
  _DWORD v29[2]; // [esp+ECh] [ebp-68h] BYREF
  _DWORD v30[2]; // [esp+F4h] [ebp-60h] BYREF
  _DWORD v31[2]; // [esp+FCh] [ebp-58h] BYREF
  _DWORD v32[2]; // [esp+104h] [ebp-50h] BYREF
  _DWORD v33[2]; // [esp+10Ch] [ebp-48h] BYREF
  _DWORD v34[2]; // [esp+114h] [ebp-40h] BYREF
  _DWORD v35[2]; // [esp+11Ch] [ebp-38h] BYREF
  _DWORD v36[2]; // [esp+124h] [ebp-30h] BYREF
  _DWORD v37[2]; // [esp+12Ch] [ebp-28h] BYREF
  _DWORD v38[2]; // [esp+134h] [ebp-20h] BYREF
  _DWORD v39[2]; // [esp+13Ch] [ebp-18h] BYREF
  int v40; // [esp+144h] [ebp-10h] BYREF
  _DWORD v41[3]; // [esp+148h] [ebp-Ch] BYREF

  v4 = (void **)(*((int (__thiscall **)(ObjectClass *, _DWORD, _DWORD))this->AbstractClass + 26))(this, 0, 0); /*0x70f1e0*/
  if ( !v4 ) /*0x70f1e5*/
  {
    v4 = (void **)*((_DWORD *)this + 75); /*0x70f1eb*/
    if ( !v4 ) /*0x70f1f3*/
    {
      if ( *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 184) ) /*0x70f1ff*/
      {
        v5 = (AnimClass *)__2_YAPAXI_Z(0x1C8u); /*0x70f217*/
        if ( v5 ) /*0x70f21e*/
        {
          v6 = (int *)(*((int (__thiscall **)(ObjectClass *, _DWORD *))this->AbstractClass + 18))(this, v41); /*0x70f239*/
          v4 = AnimClass::ctor( /*0x70f24c*/
                 v5,
                 *(void **)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 184),
                 v6,
                 0,
                 1,
                 (void *)0x600,
                 0,
                 0);
        }
        else
        {
          v4 = 0; /*0x70f253*/
        }
        *((_DWORD *)this + 75) = v4; /*0x70f257*/
        if ( v4 ) /*0x70f25d*/
        {
          BuildingClass::AimTurret((BuildingClass *)v4, this); /*0x70f266*/
          LOBYTE(v4) = HIBYTE(stru_A8EB00.ObjectTypeClass[31]); /*0x70f26b*/
          if ( !HIBYTE(stru_A8EB00.ObjectTypeClass[31]) ) /*0x70f272*/
          {
            v4 = (void **)*((_DWORD *)this + 75); /*0x70f278*/
            *((_BYTE *)v4 + 413) = 1; /*0x70f280*/
          }
        }
      }
      else
      {
        if ( *(_DWORD *)(*(_DWORD *)&stru_87F5F0.__pad_58[124] + 4) == 1 ) /*0x70f29b*/
          v7 = *(unsigned __int8 *)(*(_DWORD *)(*(_DWORD *)&stru_87F5F0.__pad_58[124] + 372) + 12); /*0x70f2a8*/
        else
          v7 = *(unsigned __int16 *)(*(_DWORD *)(*(_DWORD *)&stru_87F5F0.__pad_58[124] + 372) + 24); /*0x70f2b4*/
        v8 = *a2; /*0x70f2c5*/
        v9 = a2[1]; /*0x70f2c7*/
        if ( (stru_A8EB00.?[416] & 8) != 0 ) /*0x70f2d1*/
        {
          v10 = 12; /*0x70f2d3*/
          v16 = 8; /*0x70f2d8*/
          v15 = 12; /*0x70f2dc*/
        }
        else
        {
          v15 = 10; /*0x70f2e2*/
          v16 = 6; /*0x70f2ea*/
          v10 = 10; /*0x70f2f2*/
        }
        v14 = v8 + v10; /*0x70f2fd*/
        v18 = v16 - v10; /*0x70f309*/
        v17 = 2; /*0x70f314*/
        v19 = 4 - v10; /*0x70f31c*/
        v11 = -v10; /*0x70f325*/
        v12 = -v16; /*0x70f327*/
        v20 = -4 - v10; /*0x70f32f*/
        while ( 1 ) /*0x70f33e*/
        {
          v32[1] = v9 + v11; /*0x70f33e*/
          v32[0] = v8 + v12; /*0x70f348*/
          v24[1] = v9 + v11; /*0x70f34f*/
          v24[0] = v11 + v8; /*0x70f365*/
          (*(void (__thiscall **)(AudioStream *, _DWORD *, _DWORD *, int))(*(_DWORD *)g_DSurface_Hidden_2->__pad_0 + 48))( /*0x70f370*/
            g_DSurface_Hidden_2,
            v24,
            v32,
            v7);
          v34[1] = v9 + v11; /*0x70f37a*/
          v34[0] = v14; /*0x70f385*/
          v26[0] = v18 + v14; /*0x70f395*/
          v26[1] = v9 + v11; /*0x70f399*/
          (*(void (__thiscall **)(AudioStream *, _DWORD *, _DWORD *, int))(*(_DWORD *)g_DSurface_Hidden_2->__pad_0 + 48))( /*0x70f3b3*/
            g_DSurface_Hidden_2,
            v26,
            v34,
            v7);
          v21[0] = v14; /*0x70f3c0*/
          v21[1] = v9 - v16; /*0x70f3c4*/
          v28[0] = v14; /*0x70f3cb*/
          v28[1] = v9 + v11; /*0x70f3cf*/
          (*(void (__thiscall **)(AudioStream *, _DWORD *, _DWORD *, int))(*(_DWORD *)g_DSurface_Hidden_2->__pad_0 + 48))( /*0x70f3e6*/
            g_DSurface_Hidden_2,
            v28,
            v21,
            v7);
          v35[1] = v9 + v15; /*0x70f3f9*/
          v35[0] = v14; /*0x70f403*/
          v30[0] = v14; /*0x70f40a*/
          v30[1] = v9 + v16; /*0x70f41f*/
          (*(void (__thiscall **)(AudioStream *, _DWORD *, _DWORD *, int))(*(_DWORD *)g_DSurface_Hidden_2->__pad_0 + 48))( /*0x70f430*/
            g_DSurface_Hidden_2,
            v30,
            v35,
            v7);
          v36[0] = v18 + v14; /*0x70f43f*/
          v22[0] = v14; /*0x70f44f*/
          v36[1] = v9 + v15; /*0x70f45b*/
          v22[1] = v9 + v15; /*0x70f462*/
          (*(void (__thiscall **)(AudioStream *, _DWORD *, _DWORD *, int))(*(_DWORD *)g_DSurface_Hidden_2->__pad_0 + 48))( /*0x70f46e*/
            g_DSurface_Hidden_2,
            v22,
            v36,
            v7);
          v23[0] = v11 + v8; /*0x70f478*/
          v23[1] = v9 + v15; /*0x70f484*/
          v25[1] = v9 + v15; /*0x70f488*/
          v25[0] = v8 - v16; /*0x70f48c*/
          (*(void (__thiscall **)(AudioStream *, _DWORD *, _DWORD *, int))(*(_DWORD *)g_DSurface_Hidden_2->__pad_0 + 48))( /*0x70f4a3*/
            g_DSurface_Hidden_2,
            v25,
            v23,
            v7);
          v27[0] = v11 + v8; /*0x70f4b2*/
          v27[1] = v9 + v16; /*0x70f4bf*/
          v29[0] = v11 + v8; /*0x70f4c6*/
          v29[1] = v9 + v15; /*0x70f4d4*/
          (*(void (__thiscall **)(AudioStream *, _DWORD *, _DWORD *, int))(*(_DWORD *)g_DSurface_Hidden_2->__pad_0 + 48))( /*0x70f4e6*/
            g_DSurface_Hidden_2,
            v29,
            v27,
            v7);
          v31[1] = v9 + v11; /*0x70f4ef*/
          v31[0] = v11 + v8; /*0x70f4fa*/
          v33[0] = v11 + v8; /*0x70f506*/
          v33[1] = v9 - v16; /*0x70f50d*/
          (*(void (__thiscall **)(AudioStream *, _DWORD *, _DWORD *, int))(*(_DWORD *)g_DSurface_Hidden_2->__pad_0 + 48))( /*0x70f52d*/
            g_DSurface_Hidden_2,
            v33,
            v31,
            v7);
          v37[0] = v14 + v19; /*0x70f540*/
          v37[1] = v9; /*0x70f556*/
          v39[0] = v20 + v14; /*0x70f55d*/
          v39[1] = v9; /*0x70f564*/
          (*(void (__thiscall **)(AudioStream *, _DWORD *, _DWORD *, int))(*(_DWORD *)g_DSurface_Hidden_2->__pad_0 + 48))( /*0x70f575*/
            g_DSurface_Hidden_2,
            v39,
            v37,
            v7);
          v38[1] = v9 + 4; /*0x70f581*/
          v38[0] = v8; /*0x70f58b*/
          v41[0] = v8; /*0x70f592*/
          v41[1] = v9 - 4; /*0x70f599*/
          (*(void (__thiscall **)(AudioStream *, _DWORD *, _DWORD *, int))(*(_DWORD *)g_DSurface_Hidden_2->__pad_0 + 48))( /*0x70f5b3*/
            g_DSurface_Hidden_2,
            v41,
            v38,
            v7);
          ++v8; /*0x70f5ba*/
          ++v14; /*0x70f5c3*/
          ++v9; /*0x70f5d9*/
          v4 = (void **)Color::ConvertToRGB( /*0x70f5e3*/
                          (Color *)(*(_DWORD *)(*(_DWORD *)&stru_B054D0.m_1[3]
                                              + 4 * *(_DWORD *)&dword_A83D4C[134].__pad_90[4])
                                  + 776),
                          (int)&v40);
          v7 = ((unsigned __int8)*(_WORD *)v4 >> g_BitShift_Green_0 << g_BitShift_Red) /*0x70f64a*/
             | ((unsigned __int8)HIBYTE(*(_WORD *)v4) >> g_BitMask_Blue << g_BitMask_Green)
             | (*((unsigned __int8 *)v4 + 2) >> g_BitMask_Red << g_BitShift_Blue);
          LOBYTE(v4) = --v17; /*0x70f64c*/
          if ( !v17 ) /*0x70f651*/
            break; /*0x70f651*/
          v12 = -v16; /*0x70f335*/
        }
      }
    }
  }
  return (char)v4; /*0x70f27e*/
}



// ==== 0x0070F670  FootClass::SetThreatBounds  this=FootClass  sig=csp ====
void __thiscall FootClass::SetThreatBounds(FootClass *this, _DWORD *a2)
{
  int v3; // eax
  int (__thiscall **vtable0)(FootClass *); // edx
  int v5; // eax
  int v6; // [esp-4h] [ebp-Ch]

  if ( a2 ) /*0x70f67a*/
  {
    v3 = (*((int (__thiscall **)(FootClass *))this->TechnoClass + 176))(this); /*0x70f67e*/
    vtable0 = (int (__thiscall **)(FootClass *))this->TechnoClass; /*0x70f684*/
    v6 = v3; /*0x70f686*/
    this->? = v3; /*0x70f689*/
    v5 = vtable0[14](this); /*0x70f68f*/
    CellClass::SetThreatBounds((CellClass *)a2, v5, v6); /*0x70f695*/
  }
}



// ==== 0x0070F6A0  FootClass::ApplyThreatBounds  this=FootClass  sig=csp ====
void __thiscall FootClass::ApplyThreatBounds(FootClass *this, _DWORD *a2)
{
  int v3; // eax
  int v4; // [esp-4h] [ebp-Ch]

  if ( a2 ) /*0x70f6aa*/
  {
    v4 = -this->?; /*0x70f6b6*/
    v3 = (*((int (**)(void))this->TechnoClass + 14))(); /*0x70f6b7*/
    CellClass::SetThreatBounds((CellClass *)a2, v3, v4); /*0x70f6bd*/
    this->? = 0; /*0x70f6c2*/
  }
}



// ==== 0x0070F6E0  BuildingClass::UpdateThreatBounds  this=BuildingClass  sig=csp ====
void __thiscall BuildingClass::UpdateThreatBounds(BuildingClass *this, _DWORD *a2)
{
  int v3; // eax
  int (__thiscall **vtable0)(BuildingClass *); // eax
  int v5; // eax
  int (__thiscall **v6)(BuildingClass *); // edx
  int v7; // eax
  int v8; // [esp-4h] [ebp-Ch]
  int v9; // [esp-4h] [ebp-Ch]

  if ( a2 ) /*0x70f6ea*/
  {
    v8 = -this->?; /*0x70f6f6*/
    v3 = (*((int (**)(void))this->TechnoClass + 14))(); /*0x70f6f7*/
    CellClass::SetThreatBounds((CellClass *)a2, v3, v8); /*0x70f6fd*/
    vtable0 = (int (__thiscall **)(BuildingClass *))this->TechnoClass; /*0x70f702*/
    this->? = 0; /*0x70f706*/
    v5 = vtable0[176](this); /*0x70f710*/
    v6 = (int (__thiscall **)(BuildingClass *))this->TechnoClass; /*0x70f716*/
    v9 = v5; /*0x70f718*/
    this->? = v5; /*0x70f71b*/
    v7 = v6[14](this); /*0x70f721*/
    CellClass::SetThreatBounds((CellClass *)a2, v7, v9); /*0x70f727*/
  }
}



// ==== 0x0070F740  ObjectClass::method_70F740  this=ObjectClass  sig=csp ====
int __thiscall sub_70F740(ObjectClass *this, int a2)
{
  ObjectClass *v2; // ecx
  int v4; // [esp+4h] [ebp-8h]

  v2 = (ObjectClass *)((char *)this + 384); /*0x70f74c*/
  v2->AbstractClass = *(void **)&stru_A8EB00.?[416]; /*0x70f752*/
  v2->? = (void *)v4; /*0x70f758*/
  v2->? = (void *)a2; /*0x70f75b*/
  return v4; /*0x70f75e*/
}



// ==== 0x0070F770  Mission::GetMissionDelay  this=Mission  sig=csp ====
int __thiscall Mission::GetMissionDelay(Mission *this)
{
  int Mission_field_0x180; // edx
  int result; // eax
  int *p_Mission_field_0x180; // esi
  int v4; // [esp+8h] [ebp-8h]

  Mission_field_0x180 = this->Mission_field_0x180; /*0x70f770*/
  result = this->Mission_field_0x188; /*0x70f779*/
  p_Mission_field_0x180 = &this->Mission_field_0x180; /*0x70f783*/
  if ( Mission_field_0x180 != -1 ) /*0x70f789*/
  {
    if ( *(_DWORD *)&stru_A8EB00.?[416] - Mission_field_0x180 >= result ) /*0x70f795*/
      return result; /*0x70f795*/
    result -= *(_DWORD *)&stru_A8EB00.?[416] - Mission_field_0x180; /*0x70f797*/
  }
  if ( result > 10 ) /*0x70f79c*/
  {
    result = dword_A8E7AC; /*0x70f79e*/
    if ( !dword_A8E7AC ) /*0x70f7a5*/
    {
      result = Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 4, 8); /*0x70f7b6*/
      *p_Mission_field_0x180 = *(_DWORD *)&stru_A8EB00.?[416]; /*0x70f7c1*/
      p_Mission_field_0x180[1] = v4; /*0x70f7c7*/
      p_Mission_field_0x180[2] = result; /*0x70f7ca*/
    }
  }
  return result; /*0x70f7cd*/
}



// ==== 0x0070F7E0  FootClass::updateThreat  this=FootClass  sig=csp ====
bool __thiscall FootClass::updateThreat(FootClass *this)
{
  int v1; // edx
  int v2; // eax

  v1 = this->?[0]; /*0x70f7e0*/
  v2 = this->?[2]; /*0x70f7e6*/
  if ( v1 != -1 ) /*0x70f7ef*/
  {
    if ( *(_DWORD *)&stru_A8EB00.?[416] - v1 < v2 ) /*0x70f7fb*/
      return v2 == *(_DWORD *)&stru_A8EB00.?[416] - v1; /*0x70f808*/
    v2 = 0; /*0x70f809*/
  }
  return v2 == 0; /*0x70f808*/
}



// ==== 0x0070F820  ObjectClass::GetPriorityTarget  this=ObjectClass  sig=csp ====
int __thiscall ObjectClass::GetPriorityTarget(TechnoClass *this)
{
  int mindControlledBy; // eax

  mindControlledBy = this->mindControlledBy; /*0x70f820*/
  if ( mindControlledBy ) /*0x70f828*/
    return CaptureManagerClass::GetOriginalOwner(*(CaptureManagerClass **)(mindControlledBy + 700), (int)this); /*0x70f831*/
  if ( this->mindControlledBy_house ) /*0x70f837*/
    return this->originalOwnerHouse; /*0x70f841*/
  return this->owner; /*0x70f836*/
}



// ==== 0x0070F850  TechnoClass::SetIdleState  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::SetIdleState(TechnoClass *this)
{
  int (__thiscall **vtable0)(TechnoClass *, int); // eax

  (*((void (__thiscall **)(TechnoClass *, _DWORD, int))this->RadioClass + 288))(this, 0, 1); /*0x70f859*/
  (*((void (__thiscall **)(TechnoClass *, _DWORD))this->RadioClass + 242))(this, 0); /*0x70f865*/
  vtable0 = (int (__thiscall **)(TechnoClass *, int))this->RadioClass; /*0x70f86b*/
  this->focus = 0; /*0x70f871*/
  return vtable0[124](this, 5); /*0x70f881*/
}



// ==== 0x0070F8F0  TechnoClass::FindBridgeCell  this=TechnoClass  sig=csp ====
int __thiscall BuildingClass::FindBridgeCell(TechnoClass *this)
{
  int (__thiscall **vtable0)(TechnoClass *, char *); // edx
  _DWORD *v2; // eax
  int v4; // ebx
  int v5; // edi
  int v6; // esi
  Cell *v7; // eax
  Building *v8; // eax
  int NthOfType; // eax
  Cell *v10; // eax
  Building *v11; // eax
  int v12; // eax
  Cell *v13; // eax
  Building *v14; // eax
  int v15; // eax
  Cell *v16; // eax
  Building *v17; // eax
  int v18; // eax
  __int16 v19[2]; // [esp+4h] [ebp-34h] BYREF
  int v20; // [esp+8h] [ebp-30h]
  int v21; // [esp+Ch] [ebp-2Ch]
  int v22; // [esp+10h] [ebp-28h]
  int v23; // [esp+14h] [ebp-24h]
  int v24; // [esp+18h] [ebp-20h]
  int v25; // [esp+1Ch] [ebp-1Ch]
  int v26; // [esp+20h] [ebp-18h]
  __int16 v27[3]; // [esp+24h] [ebp-14h] BYREF
  int v28; // [esp+2Ah] [ebp-Eh] BYREF
  int v29; // [esp+2Eh] [ebp-Ah]
  _DWORD *v30; // [esp+3Ch] [ebp+4h]
  int v31; // [esp+40h] [ebp+8h]

  vtable0 = (int (__thiscall **)(TechnoClass *, char *))this->RadioClass; /*0x70f8f8*/
  v20 = *(_DWORD *)&g_BuildingLoadQueue_Array.?[24]; /*0x70f8fa*/
  v2 = (_DWORD *)vtable0[18](this, (char *)&v28 + 2); /*0x70f903*/
  v19[0] = *v2 / 256; /*0x70f916*/
  v19[1] = v2[1] / 256; /*0x70f92e*/
  *(_DWORD *)v27 = *(_DWORD *)v19; /*0x70f937*/
  if ( *((_DWORD *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v27) + 59) == 5 ) /*0x70f94d*/
  {
    *v30 = *(_DWORD *)v27; /*0x70f957*/
    return (int)v30; /*0x70f94f*/
  }
  else
  {
    v4 = 1; /*0x70f967*/
    v5 = -1; /*0x70f96c*/
    if ( v31 > 1 ) /*0x70f971*/
    {
      v6 = -1; /*0x70f977*/
      v25 = -1; /*0x70f97a*/
      do /*0x70f97e*/
      {
        if ( v6 <= v4 ) /*0x70f980*/
        {
          do /*0x70fb15*/
          {
            LOWORD(v29) = -(__int16)v4; /*0x70f992*/
            LOWORD(v21) = v6 + v27[0]; /*0x70f9a0*/
            HIWORD(v21) = v27[1] - v4; /*0x70f9a5*/
            *(_DWORD *)v19 = v21; /*0x70f9b2*/
            v7 = (Cell *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v19); /*0x70f9bc*/
            if ( (unsigned __int8)Cell::IsBridge2(v7) ) /*0x70f9c3*/
            {
              v8 = (Building *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v19); /*0x70f9d6*/
              NthOfType = Building::GetNthOfType(v8); /*0x70f9dd*/
              if ( NthOfType > v5 ) /*0x70f9e4*/
              {
                v5 = NthOfType; /*0x70f9e6*/
                v20 = *(_DWORD *)v19; /*0x70f9ec*/
              }
            }
            LOWORD(v22) = v6 + v27[0]; /*0x70f9fe*/
            HIWORD(v22) = v4 + v27[1]; /*0x70fa03*/
            *(_DWORD *)v19 = v22; /*0x70fa16*/
            v10 = (Cell *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v19); /*0x70fa1a*/
            if ( (unsigned __int8)Cell::IsBridge2(v10) ) /*0x70fa21*/
            {
              v11 = (Building *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v19); /*0x70fa34*/
              v12 = Building::GetNthOfType(v11); /*0x70fa3b*/
              if ( v12 > v5 ) /*0x70fa42*/
              {
                v5 = v12; /*0x70fa48*/
                v20 = *(_DWORD *)v19; /*0x70fa4a*/
              }
            }
            LOWORD(v26) = -(__int16)v4; /*0x70fa56*/
            LOWORD(v23) = v27[0] - v4; /*0x70fa64*/
            HIWORD(v23) = v6 + v27[1]; /*0x70fa69*/
            *(_DWORD *)v19 = v23; /*0x70fa76*/
            v13 = (Cell *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v19); /*0x70fa80*/
            if ( (unsigned __int8)Cell::IsBridge2(v13) ) /*0x70fa87*/
            {
              v14 = (Building *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v19); /*0x70fa9a*/
              v15 = Building::GetNthOfType(v14); /*0x70faa1*/
              if ( v15 > v5 ) /*0x70faa8*/
              {
                v5 = v15; /*0x70faae*/
                v20 = *(_DWORD *)v19; /*0x70fab0*/
              }
            }
            LOWORD(v24) = v4 + v27[0]; /*0x70fac6*/
            HIWORD(v24) = v6 + v27[1]; /*0x70facb*/
            *(_DWORD *)v19 = v24; /*0x70fada*/
            v16 = (Cell *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v19); /*0x70fade*/
            if ( (unsigned __int8)Cell::IsBridge2(v16) ) /*0x70fae5*/
            {
              v17 = (Building *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v19); /*0x70faf8*/
              v18 = Building::GetNthOfType(v17); /*0x70faff*/
              if ( v18 > v5 ) /*0x70fb06*/
              {
                v5 = v18; /*0x70fb08*/
                v20 = *(_DWORD *)v19; /*0x70fb0e*/
              }
            }
            ++v6; /*0x70fb12*/
          }
          while ( v6 <= v4 ); /*0x70fb15*/
          if ( v5 != -1 ) /*0x70fb1e*/
            break; /*0x70fb1e*/
          v6 = v25; /*0x70fb20*/
        }
        ++v4; /*0x70fb28*/
        v25 = --v6; /*0x70fb2c*/
      }
      while ( v4 < v31 ); /*0x70f97e*/
    }
    *v30 = v20; /*0x70fb36*/
    return (int)v30; /*0x70fb36*/
  }
}



// ==== 0x0070FB50  TechnoClass::CanSelfRepair  this=TechnoClass  sig=csp ====
bool __thiscall TechnoClass::CanSelfRepair(TechnoClass *this)
{
  _DWORD *v3; // eax

  if ( !*(_BYTE *)((*((int (__thiscall **)(TechnoClass *))this->RadioClass + 33))(this) + 3374) ) /*0x70fb5b*/
    return 0; /*0x70fb65*/
  if ( !*(_BYTE *)((*((int (__thiscall **)(TechnoClass *))this->RadioClass + 33))(this) + 3233) ) /*0x70fb73*/
    return 0; /*0x70fb7d*/
  v3 = (_DWORD *)(*((int (__thiscall **)(TechnoClass *))this->RadioClass + 253))(this); /*0x70fb85*/
  if ( !v3 || !*v3 ) /*0x70fb8f*/
    return 0; /*0x70fb94*/
  if ( *(_DWORD *)((*((int (__thiscall **)(TechnoClass *))this->RadioClass + 33))(this) + 1660) == 3 ) /*0x70fba9*/
    return 0; /*0x70fbab*/
  return !this || (this->? & 4) == 0 || !this->q1A5; /*0x70fbb9*/
}



// ==== 0x0070FBD0  UnitClass::IsDeactivated  this=UnitClass  sig=csp ====
bool __thiscall UnitClass::IsDeactivated(UnitClass *this)
{
  return this->?[0]; /*0x70fbd6*/
}



// ==== 0x0070FBE0  TechnoClass::Activate  this=TechnoClass  sig=csp ====
char __thiscall TechnoClass::Activate(TechnoClass *this)
{
  int v2; // eax
  int (__thiscall **vtable0)(TechnoClass *); // edx
  int v4; // eax
  _DWORD v6[3]; // [esp+4h] [ebp-Ch] BYREF

  (*((void (__thiscall **)(TechnoClass *))this->RadioClass + 244))(this); /*0x70fbe8*/
  if ( this && (this->? & 4) != 0 ) /*0x70fbf6*/
  {
    if ( !*((_DWORD *)this + 413) ) /*0x70fbf8*/
      WinAPI::Wrapper(-2147467261); /*0x70fc07*/
    (*(void (__stdcall **)(_DWORD))(**((_DWORD **)this + 413) + 88))(*((_DWORD *)this + 413)); /*0x70fc15*/
  }
  LOBYTE(v2) = this->__pad_1C4[4]; /*0x70fc18*/
  if ( !(_BYTE)v2 /*0x70fc33*/
    || (v2 = (*((int (__thiscall **)(TechnoClass *))this->RadioClass + 33))(this), *(_DWORD *)(v2 + 1448) == -1) )
  {
    this->__pad_1C4[4] = 0; /*0x70fc7a*/
  }
  else
  {
    v6[0] = this->?[0]; /*0x70fc44*/
    v6[1] = this->?[1]; /*0x70fc4d*/
    vtable0 = (int (__thiscall **)(TechnoClass *))this->RadioClass; /*0x70fc51*/
    v6[2] = this->?[2]; /*0x70fc56*/
    v4 = vtable0[33](this); /*0x70fc5a*/
    LOBYTE(v2) = (unsigned __int8)StartAudioControllerAt(*(_DWORD *)(v4 + 1448), v6, 0); /*0x70fc68*/
    this->__pad_1C4[4] = 0; /*0x70fc6d*/
  }
  return v2; /*0x70fc75*/
}



// ==== 0x0070FC90  TechnoClass::Deactivate  this=TechnoClass  sig=csp ====
char __thiscall TechnoClass::Deactivate(TechnoClass *this)
{
  Cell *v2; // eax
  _DWORD *v3; // edi
  int Member; // eax
  int (__thiscall **vtable0)(TechnoClass *); // edx
  int v6; // eax
  _DWORD v8[3]; // [esp+8h] [ebp-Ch] BYREF

  if ( !this->isTether /*0x70fcca*/
    || !Team::GetMember((Team *)this, 0)
    || (v2 = (Cell *)(*((int (__thiscall **)(TechnoClass *))this->RadioClass + 111))(this),
        v3 = Cell::IsBridge(v2),
        Member = Team::GetMember((Team *)this, 0),
        v3 != (_DWORD *)Member) )
  {
    (*((void (__thiscall **)(TechnoClass *))this->RadioClass + 244))(this); /*0x70fcd4*/
    (*((void (__thiscall **)(TechnoClass *))this->RadioClass + 84))(this); /*0x70fcde*/
    if ( this && (this->? & 4) != 0 ) /*0x70fcec*/
    {
      if ( !*((_DWORD *)this + 413) ) /*0x70fcee*/
        WinAPI::Wrapper(-2147467261); /*0x70fcfd*/
      (*(void (__stdcall **)(_DWORD))(**((_DWORD **)this + 413) + 92))(*((_DWORD *)this + 413)); /*0x70fd0b*/
    }
    LOBYTE(Member) = this->__pad_1C4[4]; /*0x70fd0e*/
    if ( !(_BYTE)Member ) /*0x70fd16*/
    {
      Member = (*((int (__thiscall **)(TechnoClass *))this->RadioClass + 33))(this); /*0x70fd1c*/
      if ( *(_DWORD *)(Member + 1452) != -1 ) /*0x70fd29*/
      {
        v8[0] = this->?[0]; /*0x70fd39*/
        v8[1] = this->?[1]; /*0x70fd42*/
        vtable0 = (int (__thiscall **)(TechnoClass *))this->RadioClass; /*0x70fd46*/
        v8[2] = this->?[2]; /*0x70fd4b*/
        v6 = vtable0[33](this); /*0x70fd4f*/
        LOBYTE(Member) = (unsigned __int8)StartAudioControllerAt(*(_DWORD *)(v6 + 1452), v8, 0); /*0x70fd5d*/
      }
    }
    this->__pad_1C4[4] = 1; /*0x70fd62*/
  }
  return Member; /*0x70fd69*/
}



// ==== 0x0070FD70  TechnoClass::LinkToBridge  this=TechnoClass  sig=csp ====
void __thiscall TechnoClass::LinkToBridge(TechnoClass *this, _DWORD *a2)
{
  Cell *v3; // eax
  CaptureManager *v4; // ecx
  AnimClass *v5; // edi
  int *v6; // eax
  AnimClass *v7; // eax
  int *v8; // ecx
  _BYTE v9[12]; // [esp+8h] [ebp-Ch] BYREF

  if ( a2 ) /*0x70fd7d*/
  {
    v3 = (Cell *)(*((int (__thiscall **)(TechnoClass *))this->RadioClass + 111))(this); /*0x70fd85*/
    if ( Cell::IsBridge(v3) == a2 ) /*0x70fd94*/
    {
      a2[116] = this; /*0x70fd9a*/
      this->drainTarget = (TechnoClass *)a2; /*0x70fda0*/
      *(_BYTE *)(a2[135] + 22392) = 1; /*0x70fdac*/
      v4 = (CaptureManager *)a2[175]; /*0x70fdb3*/
      if ( v4 ) /*0x70fdbb*/
        CaptureManager::FreeAll(v4); /*0x70fdbd*/
      v5 = (AnimClass *)__2_YAPAXI_Z(0x1C8u); /*0x70fdcc*/
      if ( v5 ) /*0x70fdd3*/
      {
        v6 = (int *)(*((int (__thiscall **)(TechnoClass *, _BYTE *))this->RadioClass + 18))(this, v9); /*0x70fdeb*/
        v7 = (AnimClass *)AnimClass::ctor( /*0x70fdfe*/
                            v5,
                            *(void **)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 796),
                            v6,
                            0,
                            1,
                            (void *)0x600,
                            0,
                            0);
      }
      else
      {
        v7 = 0; /*0x70fe05*/
      }
      this->drainAnim = v7; /*0x70fe09*/
      if ( v7 ) /*0x70fe0f*/
        BuildingClass::AimTurret((BuildingClass *)v7, this); /*0x70fe14*/
      if ( this && (this->? & 4) != 0 ) /*0x70fe21*/
      {
        v8 = (int *)this->q175; /*0x70fe23*/
        if ( v8 ) /*0x70fe2b*/
          TeamClass::LiberateMember_Start(v8, (int)this, 0xFFFFFFFF, 1); /*0x70fe32*/
      }
    }
  }
}



// ==== 0x0070FE40  ObjectClass::method_70FE40  this=ObjectClass  sig=csp ====
int __thiscall sub_70FE40(_DWORD *this, int a2)
{
  this->isOnMap = a2; /*0x70fe44*/
  return a2; /*0x70fe4a*/
}



// ==== 0x0070FE50  ObjectClass::method_70FE50  this=ObjectClass  sig=csp ====
int __thiscall sub_70FE50(TechnoClass *this)
{
  int drainAnim; // ecx
  int result; // eax

  drainAnim = this->drainAnim; /*0x70fe53*/
  if ( drainAnim ) /*0x70fe5b*/
  {
    (*(void (__thiscall **)(int))(*(_DWORD *)drainAnim + 248))(drainAnim); /*0x70fe5f*/
    this->drainAnim = 0; /*0x70fe65*/
  }
  result = this->drainTarget; /*0x70fe6f*/
  if ( result ) /*0x70fe77*/
  {
    *(_DWORD *)(result + 464) = 0; /*0x70fe79*/
    result = *(_DWORD *)(this->drainTarget + 540); /*0x70fe89*/
    if ( result ) /*0x70fe91*/
      *(_BYTE *)(result + 22392) = 1; /*0x70fe93*/
    this->drainTarget = 0; /*0x70fe9a*/
  }
  return result; /*0x70fea4*/
}



// ==== 0x0070FEB0  FootClass::checkPassability  this=FootClass  sig=csp ====
BOOL __thiscall FootClass::checkPassability(FootClass *this)
{
  return this->? != 0; /*0x70febd*/
}



// ==== 0x0070FEC0  ObjectClass::HasLocation  this=ObjectClass  sig=csp ====
int __thiscall ObjectClass::HasLocation(ObjectClass *this)
{
  return this->isOnMap != 0; /*0x70fecd*/
}



// ==== 0x0070FEE0  TechnoClass::EjectPassengers  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::EjectPassengers(TechnoClass *this, char a2)
{
  int result; // eax
  FootClass *locomotorTarget; // ecx
  int v5; // eax
  FootClass *v6; // ecx
  FootClass *v7; // eax

  result = (int)this->locomotorTarget; /*0x70fee3*/
  if ( result )
  {
    *(_DWORD *)(result + 688) = 0; /*0x70fef1*/
    locomotorTarget = this->locomotorTarget; /*0x70fefb*/
    if ( locomotorTarget && (locomotorTarget->? & 4) != 0 )
    {
      v5 = (*((int (__thiscall **)(FootClass *))locomotorTarget->TechnoClass + 114))(locomotorTarget); /*0x70ff15*/
      v6 = this->locomotorTarget; /*0x70ff1b*/
      if ( v5 > 0 ) /*0x70ff23*/
      {
        v6->? = 1; /*0x70ff25*/
        this->locomotorTarget->? = 1; /*0x70ff32*/
        this->locomotorTarget->? = this; /*0x70ff3f*/
        this->locomotorTarget->? = this->owner; /*0x70ff51*/
        (*((void (__thiscall **)(FootClass *))this->locomotorTarget->TechnoClass + 232))(this->locomotorTarget); /*0x70ff5f*/
        result = (*((int (__thiscall **)(FootClass *, _DWORD, int))this->locomotorTarget->TechnoClass + 288))( /*0x70ff71*/
                   this->locomotorTarget,
                   0,
                   1);
        LOBYTE(result) = a2; /*0x70ff77*/
        this->locomotorTarget = 0; /*0x70ff7b*/
        if ( !a2 ) /*0x70ff87*/
          return result; /*0x70ff87*/
        return (*((int (__thiscall **)(TechnoClass *, _DWORD))this->RadioClass + 242))(this, 0); /*0x70ffec*/
      }
      (*((void (__thiscall **)(FootClass *, _DWORD, int))v6->TechnoClass + 288))(v6, 0, 1); /*0x70ff9f*/
      v7 = this->locomotorTarget; /*0x70ffa5*/
      if ( v7 )
        v7 = (v7->? & 4) != 0 ? v7 : 0;
      v7->isLetGoByLocomotor = 1; /*0x70ffbb*/
      result = (*((int (__thiscall **)(FootClass *, _DWORD, int))this->locomotorTarget->TechnoClass + 288))( /*0x70ffce*/
                 this->locomotorTarget,
                 0,
                 1);
    }
    LOBYTE(result) = a2; /*0x70ffd4*/
    this->locomotorTarget = 0; /*0x70ffd8*/
    if ( !a2 ) /*0x70ffe4*/
      return result; /*0x70ffe4*/
    return (*((int (__thiscall **)(TechnoClass *, _DWORD))this->RadioClass + 242))(this, 0); /*0x70ffe4*/
  }
  return result; /*0x70ff95*/
}


