// GENERATED raw decompilation, this-relative refs rewritten to this->Member
// by tools/csp_export/rewrite_member_refs.py (mechanical, CSP member table).
// REFERENCE ONLY - not compiled. Width-matched rewrites; unmatched kept raw.

// ==== 0x00700600  TechnoClass::HandleCursor  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::HandleCursor(int *this, IUnknown *aP1, FootClass *aP2, MouseClass *aP3)
{
  char v5; // bl
  _DWORD *v6; // ebp
  int v7; // eax
  int v8; // ebx
  TechnoClass *v9; // edi
  void *nextObject; // eax
  int v11; // eax
  char v12; // bl
  _DWORD *v14; // eax
  int v15; // ebx
  void *v16; // eax
  int v17; // ebp
  _DWORD *v18; // eax
  bool IsActiveOrNext; // bl
  int v20; // edi
  int v21; // eax
  bool v22; // bl
  int v23; // eax
  bool v24; // al
  int v25; // edx
  int v26; // eax
  int v27; // edx
  int v28; // eax
  int v29; // ebx
  void *v30; // eax
  int v31; // ebx
  void *v32; // eax
  char v33; // [esp+11h] [ebp-1Bh]
  char v34; // [esp+12h] [ebp-1Ah]
  char v35; // [esp+13h] [ebp-19h]
  int v36; // [esp+14h] [ebp-18h]
  int objectTypeFlags; // [esp+18h] [ebp-14h]
  _DWORD *v38; // [esp+1Ch] [ebp-10h]
  int v39; // [esp+20h] [ebp-Ch] BYREF
  int v40; // [esp+24h] [ebp-8h]
  int v41; // [esp+28h] [ebp-4h]
  char aP3a; // [esp+38h] [ebp+Ch]

  if ( this->chronoLockRemaining || this->q0AA && !*(_BYTE *)((*(int (__thiscall **)(int *))(*this + 132))(this) + 1682) ) /*0x700629*/
    return 0; /*0x700631*/
  v5 = (char)aP3; /*0x700646*/
  v6 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)aP1); /*0x70064a*/
  v38 = v6; /*0x70064e*/
  v36 = 0; /*0x700652*/
  if ( !(_BYTE)aP3 /*0x70067d*/
    && (Mouse::IsButtonDown(MEMORY[0xA8D63C].__pad_14B0[276]) || Mouse::IsButtonDown(MEMORY[0xA8D63C].__pad_14B0[280])) )
  {
    aP3a = 1; /*0x700686*/
  }
  else
  {
    aP3a = 0; /*0x70068f*/
    if ( v5 ) /*0x700694*/
      goto LABEL_12; /*0x700694*/
  }
  if ( !Mouse::IsButtonDown(MEMORY[0xA8D63C].__pad_14B0[284]) && !Mouse::IsButtonDown(MEMORY[0xA8D63C].__pad_14B0[288]) ) /*0x7006be*/
  {
LABEL_12:
    v33 = 0; /*0x7006c7*/
    if ( v5 ) /*0x7006ce*/
      goto LABEL_16; /*0x7006ce*/
    goto LABEL_13; /*0x7006ce*/
  }
  v33 = 1; /*0x7006c0*/
LABEL_13:
  if ( Mouse::IsButtonDown(MEMORY[0xA8D63C].__pad_14B0[268]) || Mouse::IsButtonDown(MEMORY[0xA8D63C].__pad_14B0[272]) ) /*0x7006f1*/
  {
    v34 = 1; /*0x7006fa*/
    goto LABEL_17; /*0x7006ff*/
  }
LABEL_16:
  v34 = 0; /*0x700701*/
LABEL_17:
  if ( v33 && aP3a ) /*0x700714*/
  {
    v33 = 0; /*0x700716*/
    aP3a = 0; /*0x70071b*/
  }
  objectTypeFlags = -1; /*0x700724*/
  v35 = 0; /*0x70072c*/
  if ( (*(unsigned __int8 (__thiscall **)(int *))(*this + 468))(this) /*0x700743*/
    || (*(unsigned __int8 (__thiscall **)(int *))(*this + 472))(this) )
  {
    return 0; /*0x700743*/
  }
  if ( (MEMORY[0xA8B230]->nextScenario[0] & 0x1000) == 0 ) /*0x70075c*/
    goto LABEL_38; /*0x70075c*/
  if ( !(_BYTE)aP2 ) /*0x700768*/
    goto LABEL_38; /*0x700768*/
  v7 = v6[10]; /*0x70076e*/
  if ( !v7 ) /*0x700773*/
    goto LABEL_38; /*0x700773*/
  v8 = 0; /*0x70077c*/
  if ( *(int *)(v7 + 16) <= 0 ) /*0x700780*/
    goto LABEL_38; /*0x700780*/
  do /*0x7007e4*/
  {
    v9 = *(TechnoClass **)(*(_DWORD *)(v7 + 4) + 4 * v8); /*0x700785*/
    if ( v9->isOnMap ) /*0x700788*/
    {
      nextObject = v9->nextObject; /*0x70078f*/
      if ( nextObject == (void *)20 ) /*0x700795*/
      {
        objectTypeFlags = v9->objectTypeFlags; /*0x70079a*/
      }
      else if ( nextObject == (void *)6 /*0x7007ce*/
             && (!v9->owningHouseIndex
              || !(unsigned __int8)HouseClass::IsAlliedWith(HouseClass_Player, (IUnknown *)v9->owningHouseIndex))
             && (!TechnoClass::recalcThreat((int)v9) || *(_BYTE *)(TechnoClass::recalcThreat((int)v9) + 561)) )
      {
        v35 = 1; /*0x7007d8*/
      }
    }
    v7 = v6[10]; /*0x7007dd*/
    ++v8; /*0x7007e0*/
  }
  while ( v8 < *(_DWORD *)(v7 + 16) ); /*0x7007e4*/
  if ( objectTypeFlags != -1 ) /*0x7007ed*/
  {
    v36 = *(_DWORD *)&MEMORY[0xA83D84]->__pad_0[4 * objectTypeFlags]; /*0x7007fa*/
  }
  else
  {
LABEL_38:
    v11 = v6[17]; /*0x700800*/
    if ( v11 != -1 ) /*0x700806*/
      v36 = *(_DWORD *)&MEMORY[0xA83D84]->__pad_0[4 * v11]; /*0x700811*/
  }
  v12 = (*(int (__thiscall **)(int *))(*this + 816))(this); /*0x700825*/
  if ( (unsigned __int8)House::IsHumanPlayer((#375 *)this->Owner) /*0x700868*/
    && (aP3a && v34 || this->isGrindingInProgress)
    && (*(unsigned __int8 (__thiscall **)(int *))(*this + 160))(this)
    && ((*(unsigned __int8 (__thiscall **)(int *))(*this + 156))(this) || v12) )
  {
    if ( Waypoint::FindByCell((char *)HouseClass_Player, aP1) || this->isGrindingInProgress ) /*0x70087e*/
      return 51; /*0x70089a*/
    else
      return 26; /*0x70088b*/
  }
  if ( (unsigned __int8)House::IsHumanPlayer((#375 *)this->Owner) ) /*0x7008ac*/
  {
    v14 = (_DWORD *)(*(int (__thiscall **)(int *))(*this + 1012))(this); /*0x7008bd*/
    if ( v14 ) /*0x7008c5*/
    {
      if ( *v14 ) /*0x7008cb*/
      {
        v15 = *this; /*0x7008d8*/
        v16 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)aP1); /*0x7008e0*/
        v17 = (*(int (__thiscall **)(int *, void *))(v15 + 740))(this, v16); /*0x7008f4*/
        v18 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)aP1); /*0x7008f6*/
        IsActiveOrNext = CellClass::IsActiveOrNext(v18); /*0x700902*/
        if ( IsActiveOrNext /*0x70091a*/
          && *(_BYTE *)(*(_DWORD *)(*(_DWORD *)(*(int (__thiscall **)(int *))(*this + 1012))(this) + 172) + 332) )
        {
          IsActiveOrNext = 0; /*0x700924*/
        }
        if ( aP3a || v36 && *(_BYTE *)(v36 + 561) || IsActiveOrNext || v35 ) /*0x70094a*/
        {
          v20 = *(_DWORD *)(*(_DWORD *)(*(int (__thiscall **)(int *))(*this + 1012))(this) + 172); /*0x700960*/
          v21 = v38[20]; /*0x700966*/
          v22 = v21 != -1 /*0x700960*/
             && (unsigned __int8)HouseClass::IsAlliedWith(
                                   *(void **)&HouseClass_Array->__pad_0[4 * v21],
                                   (IUnknown *)this->Owner) == 0;
          v23 = ObjectClass::processDeath(aP1); /*0x700990*/
          v24 = v23 && !*(_BYTE *)(v23 + 256) && *(int *)(v23 + 108) > 0; /*0x7009ae*/
          if ( aP3a /*0x7009f1*/
            || !v36
            || v24
            || v22
            && *(_BYTE *)(v36 + 680)
            && (*(_BYTE *)(v20 + 324) || *(_BYTE *)(v20 + 327) && *(_DWORD *)(v36 + 156) == 6) )
          {
            if ( (*(unsigned __int8 (__thiscall **)(int *))(*this + 160))(this) ) /*0x7009f7*/
              return 5; /*0x7009f7*/
            v41 = 0; /*0x700a0a*/
            v25 = SHIWORD(aP1->field_0); /*0x700a15*/
            v26 = *this; /*0x700a19*/
            v39 = (SLOWORD(aP1->field_0) << 8) + 128; /*0x700a24*/
            v40 = (v25 << 8) + 128; /*0x700a38*/
            if ( (*(unsigned __int8 (__thiscall **)(int *, int *, int))(v26 + 356))(this, &v39, v17) ) /*0x700a3c*/
              return 5; /*0x700a3c*/
          }
        }
        if ( (*(unsigned __int8 (__thiscall **)(int *, _DWORD *))(*this + 920))(this, v38) ) /*0x700a4f*/
        {
          if ( (*(unsigned __int8 (__thiscall **)(int *))(*this + 160))(this) ) /*0x700a5d*/
            return 5; /*0x700a5d*/
          v41 = 0; /*0x700a6c*/
          v27 = SHIWORD(aP1->field_0); /*0x700a77*/
          v28 = *this; /*0x700a7b*/
          v39 = (SLOWORD(aP1->field_0) << 8) + 128; /*0x700a86*/
          v40 = (v27 << 8) + 128; /*0x700a9a*/
          if ( (*(unsigned __int8 (__thiscall **)(int *, int *, int))(v28 + 356))(this, &v39, v17) ) /*0x700a9e*/
            return 5; /*0x700ab4*/
        }
      }
    }
  }
  if ( !(unsigned __int8)House::IsHumanPlayer((#375 *)this->Owner) /*0x700adc*/
    || !(*(unsigned __int8 (__thiscall **)(int *))(*this + 160))(this)
    && !(*(unsigned __int8 (__thiscall **)(int *))(*this + 644))(this) )
  {
    return 0; /*0x700c29*/
  }
  if ( !LayerClass::IsWithinUsableArea(&MEMORY[0x87F7E8], aP1, (TechnoClass *)1) ) /*0x700af6*/
    return 2; /*0x700af6*/
  if ( v33 ) /*0x700b09*/
    return 1; /*0x700b17*/
  if ( (*(unsigned __int8 (__thiscall **)(int *))(*this + 644))(this) && v34 ) /*0x700b2e*/
    return 1; /*0x700b3c*/
  if ( !(*(unsigned __int8 (__thiscall **)(int *))(*this + 160))(this) ) /*0x700b43*/
    return 2; /*0x700b43*/
  if ( (_BYTE)aP2 ) /*0x700b57*/
    return 1; /*0x700b57*/
  v29 = *this; /*0x700b5d*/
  v30 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)aP1); /*0x700b6d*/
  if ( (*(int (__thiscall **)(int *, void *, int, int, _DWORD, int))(v29 + 428))(this, v30, -1, -1, 0, 1) <= 1 ) /*0x700b7e*/
    return 1; /*0x700b7e*/
  if ( this /*0x700bb8*/
    && (*(int (__thiscall **)(int *))(*this + 44))(this) == 6
    && *(_DWORD *)((*(int (__thiscall **)(int *))(*this + 132))(this) + 1032)
    && *(_BYTE *)(*(_DWORD *)((*(int (__thiscall **)(int *))(*this + 132))(this) + 1032) + 1516) )
  {
    return 1; /*0x700bce*/
  }
  if ( *(_BYTE *)((*(int (__thiscall **)(int *))(*this + 132))(this) + 3372) /*0x700c06*/
    && (v31 = *this,
        v32 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)aP1),
        (*(int (__thiscall **)(int *, void *, int, int, _DWORD, _DWORD))(v31 + 428))(this, v32, -1, -1, 0, 0) <= 1) )
  {
    return 1; /*0x700c0b*/
  }
  else
  {
    return 2; /*0x700c1a*/
  }
}


// ==== 0x00700C40  TechnoClass::CanReceivePassengers  this=TechnoClass  sig=csp ====
char __thiscall TechnoClass_CanReceivePassengers(#375 **this)
{
  char result; // al
  _DWORD *v3; // ecx
  int v4; // edi

  result = House::IsHumanPlayer(this->Owner); /*0x700c49*/
  if ( result ) /*0x700c50*/
  {
    if ( (*((unsigned __int8 (__thiscall **)(#375 **))*this + 223))(this) ) /*0x700c58*/
    {
      return 0; /*0x700c62*/
    }
    else if ( this->alignmentPaddingB9 ) /*0x700c66*/
    {
      return 0; /*0x700c70*/
    }
    else if ( *(_BYTE *)((*((int (__thiscall **)(#375 **))*this + 33))(this) + 3412) ) /*0x700c7e*/
    {
      return 0; /*0x700c88*/
    }
    else if ( (*((unsigned __int8 (__thiscall **)(#375 **))*this + 224))(this) ) /*0x700c90*/
    {
      return 0; /*0x700c9a*/
    }
    else
    {
      result = (*((int (__thiscall **)(#375 **))*this + 120))(this); /*0x700ca2*/
      if ( result ) /*0x700caa*/
      {
        if ( this->mindControlRingAnim ) /*0x700cae*/
        {
          return 0; /*0x700cb8*/
        }
        else if ( this->airstrikeTintStage_e ) /*0x700cbc*/
        {
          return 0; /*0x700cc6*/
        }
        else
        {
          v3 = this->queuedMission; /*0x700cca*/
          result = 1; /*0x700d00*/
          if ( v3 ) /*0x700cd2*/
          {
            if ( TechnoClass::CountPassengers(v3) > 0 ) /*0x700cdb*/
            {
              v4 = (*((int (__thiscall **)(#375 **))*this + 33))(this); /*0x700cee*/
              if ( TechnoClass::CountPassengers(this->queuedMission) < *(_DWORD *)(v4 + 3420) ) /*0x700cfe*/
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
int __thiscall TechnoClass::IsDeadOrInactive(#377 *this)
{
  int result; // eax

  LOBYTE(result) = !this /*0x700d47*/
                || (result = (*(int (__thiscall **)(#377 *))(this->fallRate)(this), result != 1)
                || (*((char *)this + 1668) < 0
                 || (result = (*(int (__thiscall **)(#377 *))(this->alignmentPadding139_e)(this), !(_BYTE)result))
                && (result = (*(int (__thiscall **)(#377 *))(this->currentBurstIndex)(this), !(_BYTE)result);
  return result; /*0x700d49*/
}


// ==== 0x00700D50  TechnoClass::CanAttack  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::CanAttack(#377 *this)
{
  void *v2; // eax
  int result; // eax
  int v4; // eax
  int v5; // eax
  int v6; // edx
  int v7; // eax
  int v8; // ecx
  int v9; // ebp
  _DWORD *v10; // edi
  _DWORD *v11; // ebx
  _DWORD *v12; // eax
  _DWORD *v13; // eax
  int v14; // [esp+10h] [ebp-24h] BYREF
  int v15; // [esp+14h] [ebp-20h]
  int v16; // [esp+18h] [ebp-1Ch] BYREF
  int v17; // [esp+1Ch] [ebp-18h] BYREF
  int v18; // [esp+20h] [ebp-14h] BYREF
  int v19; // [esp+24h] [ebp-10h] BYREF
  int v20; // [esp+28h] [ebp-Ch] BYREF
  _DWORD *v21; // [esp+2Ch] [ebp-8h] BYREF
  char v22[4]; // [esp+30h] [ebp-4h] BYREF

  v16 = *(_DWORD *)(*(int (__thiscall **)(#377 *, _DWORD **))(this->airstrikeTintTimer)(this, &v21); /*0x700d74*/
  v2 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v16); /*0x700d78*/
  if ( v2 && InfantryClass::ValidateAttackPosition((int)v2) ) /*0x700d83*/
    goto LABEL_8; /*0x700d8a*/
  v4 = (*(int (__thiscall **)(#377 *))(this->fallRate)(this) - 1; /*0x700d93*/
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
      result = (*(int (__thiscall **)(#377 *))(this->currentBurstIndex)(this); /*0x700dac*/
      if ( (_BYTE)result ) /*0x700db4*/
        goto LABEL_8; /*0x700db4*/
      result = (*(int (__thiscall **)(#377 *))(this->hasParachute)(this); /*0x700dba*/
      if ( !*(_DWORD *)(result + 1504) ) /*0x700dc0*/
        goto LABEL_8; /*0x700dc8*/
      goto LABEL_46; /*0x700dc8*/
    }
    if ( TechnoClass::updateTurretRotation(this) ) /*0x700dda*/
    {
      result = TechnoClass::IsMission27to30(this); /*0x700de5*/
      if ( (_BYTE)result || this->q1B1 == 31 ) /*0x700df5*/
        goto LABEL_8; /*0x700df5*/
    }
    if ( TechnoClass::updateTurretRotation(this) ) /*0x700df9*/
    {
      v6 = this->slaveManager; /*0x700e02*/
      result = this->originalOwnerHouse; /*0x700e08*/
      if ( v6 == -1 ) /*0x700e11*/
        goto LABEL_16; /*0x700e11*/
      if ( (int)MEMORY[0xA8ED84] - v6 < result ) /*0x700e1d*/
      {
        result -= (int)MEMORY[0xA8ED84] - v6; /*0x700e1f*/
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
  result = (*(int (__thiscall **)(#377 *))(this->currentBurstIndex)(this); /*0x700e4b*/
  if ( (_BYTE)result ) /*0x700e53*/
    goto LABEL_8; /*0x700e53*/
  if ( *((char *)this + 1668) >= 0 ) /*0x700e61*/
    goto LABEL_8; /*0x700e61*/
  v7 = this->q1B1; /*0x700e67*/
  if ( !*(_DWORD *)(v7 + 1028) /*0x700e97*/
    && !*(_DWORD *)(v7 + 1504)
    && !*(_BYTE *)(v7 + 3603)
    && !this->alignmentPaddingB9
    && !TechnoClass::updateSpawnManager(this) )
  {
    goto LABEL_8; /*0x700e97*/
  }
  v8 = this->q1B1; /*0x700ea4*/
  result = *(_DWORD *)(v8 + 1028); /*0x700eaa*/
  if ( result ) /*0x700eb2*/
  {
    if ( this->q1A5 ) /*0x700eb4*/
      goto LABEL_8; /*0x700eb4*/
    if ( *(_BYTE *)(result + 5817) ) /*0x700ec6*/
    {
      result = this->suspendedMission; /*0x700ed0*/
      if ( result ) /*0x700ed8*/
        goto LABEL_8; /*0x700ed8*/
    }
  }
  result = *(_DWORD *)(v8 + 1504); /*0x700ede*/
  if ( result > 0 ) /*0x700ee6*/
  {
    if ( this->onBridge ) /*0x700eec*/
      goto LABEL_8; /*0x700eec*/
    v14 = *(_DWORD *)(*(int (__thiscall **)(#377 *, char *))(this->airstrikeTintTimer)(this, v22); /*0x700f0f*/
    result = (int)CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v14); /*0x700f19*/
    v9 = result; /*0x700f1e*/
    if ( result ) /*0x700f22*/
    {
      LOWORD(v15) = v14 + MEMORY[0x89F698]; /*0x700f40*/
      HIWORD(v15) = HIWORD(MEMORY[0x89F698]) + HIWORD(v14); /*0x700f49*/
      v17 = v15; /*0x700f58*/
      v10 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v17); /*0x700f71*/
      HIWORD(v15) = HIWORD(MEMORY[0x89F688][0]) + HIWORD(v14); /*0x700f7a*/
      LOWORD(v15) = v14 + LOWORD(MEMORY[0x89F688][0]); /*0x700f7f*/
      v18 = v15; /*0x700f92*/
      v21 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v18); /*0x700fa5*/
      LOWORD(v15) = v14 + MEMORY[0x89F690]; /*0x700fb7*/
      HIWORD(v15) = HIWORD(MEMORY[0x89F690]) + HIWORD(v14); /*0x700fc0*/
      v19 = v15; /*0x700fc9*/
      v11 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v19); /*0x700fea*/
      HIWORD(v15) = HIWORD(MEMORY[0x89F6A0]) + HIWORD(v14); /*0x700ff2*/
      LOWORD(v15) = v14 + MEMORY[0x89F6A0]; /*0x700ff7*/
      v20 = v15; /*0x701004*/
      result = (int)CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v20); /*0x70100e*/
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
    if ( *(_BYTE *)(this->Owner + 492) && *(_DWORD *)(v9 + 236) == 2 ) /*0x701081*/
      goto LABEL_8; /*0x701081*/
    v12 = (_DWORD *)(*(int (__thiscall **)(#377 *))(this->q1BC)(this); /*0x70108b*/
    result = (int)Cell::IsBridge(v12); /*0x701093*/
    if ( result ) /*0x70109a*/
    {
      v13 = (_DWORD *)(*(int (__thiscall **)(#377 *))(this->q1BC)(this); /*0x7010a0*/
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
int __thiscall TechnoClass::HasValidWeapon(#377 *this)
{
  int result; // eax

  LOBYTE(result) = !this->airstrikeTintStage_e /*0x70110d*/
                && (result = House::IsHumanPlayer(*((#375 **)this + 135)), (_BYTE)result)
                && (result = (*(int (__thiscall **)(#377 *))(this->isChronoImmuneFlag)(this)) != 0
                && *(_DWORD *)result
                && (result = (*(int (__thiscall **)(#377 *))(this->currentBurstIndex)(this), !(_BYTE)result);
  return result; /*0x70110f*/
}


// ==== 0x00701120  TechnoClass::HasActiveParam  this=TechnoClass  sig=csp ====
BOOL __thiscall TechnoClass_HasActiveParam(void *this)
{
  _DWORD *v1; // eax

  v1 = (_DWORD *)(*(int (__thiscall **)(void *))(this->isChronoImmuneFlag)(this); /*0x701122*/
  return v1 && *v1; /*0x701136*/
}


// ==== 0x00701140  TechnoClass::CheckHealthDiff  this=TechnoClass  sig=csp ====
bool __thiscall InfantryClass_CheckHealthDiff(_DWORD *this)
{
  if ( (*(int (__thiscall **)(_DWORD *))(*this + 44))(this) != 6 ) /*0x70114b*/
    return 0; /*0x70114d*/
  return *(_BYTE *)((*(int (__thiscall **)(_DWORD *))(*this + 132))(this) + 3276) /*0x70117a*/
      && this->health != *(_DWORD *)((*(int (__thiscall **)(_DWORD *))(*this + 136))(this) + 160);
}


// ==== 0x00701190  TechnoClass::StubReturnFalse11  this=TechnoClass  sig=csp ====
char VtableStub_RetZero_eax_36()
{
  return 0; /*0x701192*/
}


// ==== 0x007011A0  ObjectClass::method_7011A0  this=ObjectClass  sig=csp ====
int __thiscall sub_7011A0(int *this)
{
  int v3; // edi
  int v4; // edx
  int v5; // eax
  _DWORD *v6; // eax
  char *v7; // esi
  int v8; // eax
  double v9; // st7
  int v10; // esi
  int v11; // eax
  int v12; // [esp+14h] [ebp-1Ch]
  int v13; // [esp+18h] [ebp-18h] BYREF
  double v14; // [esp+1Ch] [ebp-14h]
  _BYTE v15[12]; // [esp+24h] [ebp-Ch] BYREF

  if ( (*(unsigned __int8 (__thiscall **)(int *))(*this + 84))(this) ) /*0x7011a9*/
    return 0; /*0x7011b1*/
  v3 = MEMORY[0x8871E0][1].?[11]; /*0x7011bd*/
  if ( !v3 ) /*0x7011c5*/
    return 0; /*0x7011c8*/
  v4 = MEMORY[0x8871E0][1].?[0]; /*0x7011d5*/
  v5 = *this; /*0x7011db*/
  LODWORD(v14) = MEMORY[0x8871E0][1].?[13]; /*0x7011dd*/
  HIDWORD(v14) = v4; /*0x7011e5*/
  v6 = (_DWORD *)(*(int (__thiscall **)(int *, _BYTE *))(v5 + 72))(this, v15); /*0x7011ec*/
  LOWORD(v12) = *v6 / 256; /*0x7011ff*/
  HIWORD(v12) = v6[1] / 256; /*0x701218*/
  v13 = v12; /*0x701225*/
  v7 = (char *)CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v13); /*0x701234*/
  v8 = ScenarioClass::CalcMinShroudLevel(&MEMORY[0x87F7E8]); /*0x701236*/
  v9 = (double)((v7[283] - v8) / v3) * v14; /*0x701259*/
  if ( v9 >= *(double *)&MEMORY[0x8871E0][1].?[1] ) /*0x70126c*/
    v9 = *(double *)&MEMORY[0x8871E0][1].?[1]; /*0x701270*/
  v10 = MEMORY[0xB0EB34] * v7[283]; /*0x70127d*/
  v11 = Math::RoundToInt(v9); /*0x70127f*/
  Math::Sqrt((double)(v10 * v10 + (v11 << 8) * (v11 << 8))); /*0x7012a1*/
  return Math::RoundToInt(v9); /*0x7011b0*/
}


// ==== 0x007012C0  TechnoClass::FindLowestDamage  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::FindLowestDamage(#377 *this)
{
  int v2; // eax
  int v3; // ebx
  _DWORD *v4; // ebp
  int v5; // edi
  int DB; // esi
  int v7; // eax
  int v8; // eax
  int v10; // edi
  int v11; // esi
  int v12; // eax
  int v13; // eax
  int v14; // [esp+Ch] [ebp+4h]

  v2 = *(_DWORD *)(*(int (__thiscall **)(#377 *, int))(this->q3F8)(this, v14); /*0x7012d3*/
  if ( !v2 ) /*0x7012d7*/
    return 0; /*0x701397*/
  v3 = *(_DWORD *)(v2 + 180); /*0x7012df*/
  if ( !*(_BYTE *)((*(int (__thiscall **)(#377 *))(this->hasParachute)(this) + 1508) ) /*0x7012ed*/
    return v3; /*0x70138f*/
  v4 = (_DWORD *)((char *)this + 276); /*0x7012fc*/
  v5 = 0x7FFFFFFF; /*0x701305*/
  DB = CCINIClass::GetDB((_DWORD *)this + 69); /*0x70130f*/
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
  v11 = CCINIClass::GetDB(v4); /*0x701357*/
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
int __thiscall MissionClass::OverrideMission_SyncLog(#377 *this)
{
  int v3; // [esp+Ch] [ebp+4h]
  int v4; // [esp+10h] [ebp+8h]
  TechnoClass *aP3; // [esp+14h] [ebp+Ch]

  this->isUncrushable_e = this->sprayOffsetIndex_e; /*0x7013bb*/
  AbstractClass::COMStub_125((int)this, v3, v4, aP3); /*0x7013c1*/
  return (*(int (__thiscall **)(#377 *, int))(this->unknown_short_3C8)(this, v4); /*0x7013d1*/
}


// ==== 0x007013E0  TechnoClass::CheckOccupantState  this=TechnoClass  sig=csp ====
int __thiscall BuildingClass::_vt126(#377 *this)
{
  int result; // eax

  if ( AbstractClass::COMStub_126((int)this) ) /*0x7013e3*/
  {
    result = (*(int (__thiscall **)(#377 *, _DWORD))(this->unknown_short_3C8)(this, this->isUncrushable_e); /*0x7013f7*/
    LOBYTE(result) = 1; /*0x7013fd*/
  }
  else
  {
    LOBYTE(result) = 0; /*0x701401*/
  }
  return result; /*0x7013ff*/
}


// ==== 0x00701410  TechnoClass::HandleSellOrRepair  this=TechnoClass  sig=csp ====
int __thiscall BuildingClass::HandleSellOrRepair(#377 *this)
{
  int v2; // eax
  int result; // eax
  BOOL v4; // eax
  int v5; // edx
  int v6; // eax
  _BYTE v7[12]; // [esp+8h] [ebp-Ch] BYREF

  (*(void (__thiscall **)(#377 *, int))(this->q124)(this, 2); /*0x70141a*/
  v2 = *(_DWORD *)((*(int (__thiscall **)(#377 *))(this->hasParachute)(this) + 160); /*0x70142a*/
  this->health = v2; /*0x701432*/
  this->referenceCount = v2; /*0x701435*/
  result = (*(int (__thiscall **)(#377 *))(this->fallRate)(this); /*0x70143a*/
  if ( result == 6 ) /*0x701440*/
  {
    (*(void (__thiscall **)(#377 *, _DWORD))(this->ironTintTimer)(this, 0); /*0x701448*/
    v4 = BuildingClass::GetHealthRatio((int *)this) <= *(double *)(MEMORY[0x87F7E8][7806] + 5888); /*0x701465*/
    globalHelper_051EE0((int)this, v5, v4); /*0x701473*/
    v6 = (*(int (__thiscall **)(#377 *, _BYTE *))(this->q048)(this, v7); /*0x701483*/
    return StartAudioControllerAt(*(_DWORD *)(MEMORY[0x87F7E8][7806] + 452), v6, 0); /*0x701494*/
  }
  return result; /*0x701499*/
}


// ==== 0x007014A0  TechnoClass::ProcessCapture  this=TechnoClass  sig=csp ====
char __userpurge TechnoClass::ProcessCapture@<al>(int *a1@<ecx>, int a2@<edi>, HouseClass *a3, int a4)
{
  HouseClass *v5; // eax
  int v6; // eax
  CaptureManagerClass *v7; // ecx
  int v8; // eax
  int *v9; // eax
  _DWORD *v10; // edi
  _DWORD *v11; // eax
  BuildingTypeClass *v12; // eax
  bool v13; // al
  int v14; // eax
  BuildingTypeClass *v15; // edx
  BuildingTypeClass *v16; // eax
  int v17; // ecx
  _DWORD *Member; // edi
  int v20; // [esp+14h] [ebp-1Ch]
  int v21; // [esp+14h] [ebp-1Ch]
  _DWORD v23[3]; // [esp+24h] [ebp-Ch] BYREF

  v5 = (HouseClass *)a1[135]; /*0x7014ab*/
  if ( a3 == v5 ) /*0x7014b3*/
    return 0; /*0x70188d*/
  if ( v5 == (HouseClass *)HouseClass_Player.field_0 && *((_BYTE *)a1 + 131) ) /*0x7014c1*/
    (*(void (__thiscall **)(int *))(*a1 + 336))(a1); /*0x7014cf*/
  (*(void (__thiscall **)(int *, _DWORD))(*a1 + 968))(a1, 0); /*0x7014db*/
  (*(void (__thiscall **)(int *, _DWORD, int))(*a1 + 1152))(a1, 0, 1); /*0x7014e9*/
  if ( !a1
    || (*(int (__thiscall **)(int *))(*a1 + 44))(a1) != 1
    || (v6 = (*(int (__thiscall **)(int *))(*a1 + 44))(a1), !TechnoClass::HasDeployFlags(v6 == 1 ? a1 : 0)) )
  {
    a1[134] = 0; /*0x70151a*/
  }
  if ( a1[43] != 19
    && (!a1
     || (*(int (__thiscall **)(int *))(*a1 + 44))(a1) != 1
     || !*(_BYTE *)(*((*(int (__thiscall **)(int *))(*a1 + 44))(a1) == 1 ? a1 + 433 : (int *)1732) + 3603)
     || a1[43] != 16) )
  {
    (*(void (__thiscall **)(int *, int, int))(*a1 + 488))(a1, 5, 1); /*0x70156e*/
  }
  v7 = (CaptureManagerClass *)a1[180]; /*0x701574*/
  if ( v7 ) /*0x70157c*/
    TaskManager::Update(v7); /*0x70157e*/
  TechnoClass::RemoveBuildingFromScripts(a1); /*0x701585*/
  if ( !*((_BYTE *)a1 + 129) ) /*0x70158a*/
    HouseClass::RegisterGain(a1[135], (TechnoClass *)a1, 0); /*0x70159d*/
  (*(void (__thiscall **)(int *, _DWORD))(*a1 + 224))(a1, 0); /*0x7015a8*/
  v8 = (*(int (__thiscall **)(int *))(*a1 + 132))(a1); /*0x7015b2*/
  a3->siloMoney += (*(int (__thiscall **)(int, int))(*(_DWORD *)v8 + 132))(v8, a1[135]); /*0x7015d2*/
  HouseClass::DecrementUnitCount((_DWORD *)a1[135], (TechnoClass *)a1); /*0x7015de*/
  BuildingClass::PowerUpdate(a3, (TechnoClass *)a1); /*0x7015e6*/
  switch ( (*(int (__thiscall **)(int *))(*a1 + 44))(a1) ) /*0x701600*/
  {
    case 1: /*0x701600*/
    case 2: /*0x701600*/
    case 15: /*0x701600*/
      if ( !*(_BYTE *)((*(int (__thiscall **)(int *))(*a1 + 132))(a1) + 3231) ) /*0x701635*/
      {
        v9 = &a3->killedUnitsOfHouses[(*(int (__thiscall **)(int *))(*a1 + 56))(a1) + 1]; /*0x701646*/
        goto LABEL_24; /*0x701646*/
      }
      break; /*0x701646*/
    case 6: /*0x701600*/
      if ( !*(_BYTE *)((*(int (__thiscall **)(int *))(*a1 + 132))(a1) + 3231) ) /*0x701611*/
      {
        v9 = &a3->killedBuildingsOfHouses[(*(int (__thiscall **)(int *))(*a1 + 56))(a1) + 1]; /*0x701622*/
LABEL_24:
        ++*v9; /*0x70164d*/
      }
      break; /*0x70164d*/
    default:
      break;
  }
  *(_DWORD *)(a1[135] + 21644) = *(_DWORD *)(a3->relatedTagsCapacity + 184); /*0x70164f*/
  if ( !*((_BYTE *)a1 + 129) ) /*0x701664*/
    (*(void (__thiscall **)(int *, _DWORD))(*a1 + 292))(a1, 0); /*0x701674*/
  AbstractClass::ClearTargetToMeClearManagerTarget((int)a1); /*0x70167c*/
  if ( !*((_BYTE *)a1 + 129) ) /*0x701681*/
    (*(void (__thiscall **)(int *, int))(*a1 + 292))(a1, 3); /*0x701691*/
  v10 = 0; /*0x70169e*/
  if ( !*((_BYTE *)a1 + 129) ) /*0x701697*/
  {
    if ( a1 && (a1[5] & 4) != 0 ) /*0x7016b9*/
    {
      v11 = CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], (__int16 *)a1 + 686); /*0x7016f6*/
    }
    else
    {
      v23[0] = a1[39]; /*0x7016c7*/
      v23[1] = a1[40]; /*0x7016d3*/
      v23[2] = a1[41]; /*0x7016df*/
      v11 = Coord::To_Cell(&stru_87C374.__pad_14B0[8132], (IUnknown *)v23); /*0x7016e3*/
    }
    v10 = v11; /*0x7016fb*/
    if ( v11 ) /*0x7016ff*/
    {
      v20 = -a1[322]; /*0x70170b*/
      v12 = (BuildingTypeClass *)(*(int (__thiscall **)(int *))(*a1 + 56))(a1); /*0x70170e*/
      CellClass::SetThreatBounds(v10, v12, v20); /*0x701714*/
      a1[322] = 0; /*0x701719*/
    }
    (*(void (__thiscall **)(int *, _DWORD, _DWORD, _DWORD, _DWORD))(*a1 + 1164))(a1, 0, 0, 0, 0); /*0x70172f*/
  }
  a1[135] = (int)a3; /*0x701735*/
  v13 = a3 == (HouseClass *)HouseClass_Player.field_0 && HouseClass_Player.field_0; /*0x701748*/
  *((_BYTE *)a1 + 1050) = v13; /*0x701751*/
  if ( !*((_BYTE *)a1 + 129) ) /*0x701757*/
  {
    if ( v10 ) /*0x701763*/
    {
      v14 = (*(int (__thiscall **)(int *))(*a1 + 704))(a1); /*0x701769*/
      v15 = (BuildingTypeClass *)*a1; /*0x70176f*/
      v21 = v14; /*0x701771*/
      a1[322] = v14; /*0x701774*/
      v16 = (BuildingTypeClass *)(*(int (__thiscall **)(int *))&v15->BarrelVoxel[20])(a1); /*0x70177a*/
      CellClass::SetThreatBounds(v10, v16, v21); /*0x701780*/
    }
    HouseClass::RegisterGain_0(a1[135], (TechnoClass *)a1, 1); /*0x70178e*/
  }
  v17 = a1[43]; /*0x701793*/
  a1[184] = 0; /*0x7017a0*/
  if ( v17 == 21 || a1[45] == 21 ) /*0x7017b2*/
    (*(void (__thiscall **)(int *, int))(*a1 + 496))(a1, 5); /*0x7017ba*/
  if ( !*((_BYTE *)a1 + 129) ) /*0x7017c0*/
  {
    if ( (*(int (__thiscall **)(int *, int))(*a1 + 44))(a1, a2) != 6 || a1[43] != 16 || !*(_BYTE *)(a1[328] + 5821) ) /*0x7017e9*/
    {
      if ( !Team::GetMember(a1, 0) /*0x70181d*/
        || (Member = (_DWORD *)Team::GetMember(a1, 0), (*(int (__thiscall **)(_DWORD *))(*Member + 44))(Member) != 6)
        || !*(_BYTE *)(Member[328] + 5821) )
      {
        (*(void (__thiscall **)(int *, _DWORD, int))(*a1 + 1152))(a1, 0, 1); /*0x70182f*/
        (*(void (__thiscall **)(int *, _DWORD))(*a1 + 968))(a1, 0); /*0x70183b*/
        (*(void (__thiscall **)(int *, _DWORD, int))(*a1 + 1156))(a1, 0, 1); /*0x701849*/
      }
    }
    if ( *((_BYTE *)a1 + 1059) ) /*0x70184f*/
    {
      (*(void (__thiscall **)(int *))(*a1 + 1176))(a1); /*0x70185d*/
      (*(void (__thiscall **)(int *))(*a1 + 1172))(a1); /*0x701867*/
    }
    (*(void (__thiscall **)(int *, _DWORD, _DWORD, _DWORD, _DWORD))(*a1 + 1160))(a1, 0, 0, 0, 0); /*0x70187b*/
  }
  return 1; /*0x701882*/
}


// ==== 0x00702D40  TechnoClass::RegisterKill  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::RegisterKill(#377 *this)
{
  int v2; // eax
  int v3; // ebp
  void **v4; // ecx
  void **v5; // ecx
  void **v6; // ecx
  void **v7; // ecx
  void **v8; // ecx
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
  int v23; // [esp-8h] [ebp-18h]
  int v24; // [esp-8h] [ebp-18h]
  int v25; // [esp-8h] [ebp-18h]
  int v26; // [esp-8h] [ebp-18h]
  int v27; // [esp+Ch] [ebp-4h]
  int v28; // [esp+14h] [ebp+4h]

  v27 = 0; /*0x702d46*/
  v2 = (*(int (__thiscall **)(#377 *))(this->hasParachute)(this); /*0x702d50*/
  v3 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)v2 + 132))(v2, this->Owner); /*0x702d6b*/
  if ( this->isAliveFlag ) /*0x702d6d*/
  {
    v4 = (void **)this->attachedTag; /*0x702d77*/
    if ( v4 ) /*0x702d7c*/
    {
      if ( v28 ) /*0x702d80*/
        TeamClass::Update_0(v4, 6, (AbstractClass *)this, *(IUnknown **)&MEMORY[0xB077F8].__pad_579C[6844], 0, 0); /*0x702d90*/
    }
  }
  if ( this->isAliveFlag ) /*0x702d95*/
  {
    v5 = (void **)this->attachedTag; /*0x702da3*/
    if ( v5 && v28 ) /*0x702dac*/
      TeamClass::Update_0(v5, 4, (AbstractClass *)this, *(IUnknown **)&MEMORY[0xB077F8].__pad_579C[6844], 0, 0); /*0x702dbb*/
    if ( this->isAliveFlag /*0x702dd6*/
      && (*(int (__thiscall **)(#377 *))(this->fallRate)(this) != 1
      && this->isAliveFlag )
    {
      v6 = (void **)this->attachedTag; /*0x702de0*/
      if ( v6 && v28 ) /*0x702de9*/
        TeamClass::Update_0(v6, 7, (AbstractClass *)this, *(IUnknown **)&MEMORY[0xB077F8].__pad_579C[6844], 0, 0); /*0x702df8*/
      if ( this->isAliveFlag ) /*0x702dfd*/
      {
        v7 = (void **)this->attachedTag; /*0x702e07*/
        if ( v7 ) /*0x702e0c*/
          TeamClass::Update_0(v7, 48, (AbstractClass *)this, *(IUnknown **)&MEMORY[0xB077F8].__pad_579C[6844], 0, 0); /*0x702e1c*/
        if ( this->isAliveFlag ) /*0x702e21*/
        {
          v8 = (void **)this->attachedTag; /*0x702e2b*/
          if ( v8 ) /*0x702e30*/
            TeamClass::Update_0(v8, 29, (AbstractClass *)this, *(IUnknown **)&MEMORY[0xB077F8].__pad_579C[6844], 0, 0); /*0x702e3f*/
        }
      }
    }
  }
  result = (*(int (__thiscall **)(#377 *))(this->hasParachute)(this); /*0x702e48*/
  if ( !*(_BYTE *)(result + 3231) )
  {
    if ( v28 )
    {
      if ( Object::IsAlliedWithObjectHouse(*(_DWORD **)(v28 + 540), (IUnknown *)this) ) /*0x702e6c*/
      {
        v3 = 0; /*0x702e75*/
      }
      else if ( VeterancyStruct::IsVeteran((float *)this + 84) ) /*0x702e81*/
      {
        v3 *= 2; /*0x702e8a*/
      }
      else if ( VeterancyStruct::IsElite((float *)this + 84) ) /*0x702e90*/
      {
        v3 *= 3; /*0x702e99*/
      }
      if ( *(_BYTE *)(v28 + 130)
        && (v10 = *(_DWORD *)(v28 + 284)) != 0
        && *(_BYTE *)((*(int (__thiscall **)(int))(*(_DWORD *)v10 + 132))(v10) + 3214) )
      {
        v11 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(v28 + 284) + 132))(*(_DWORD *)(v28 + 284)); /*0x702ecb*/
        v23 = this->Owner; /*0x702eda*/
        v19 = (*(int (__thiscall **)(int))(*(_DWORD *)v11 + 132))(v11); /*0x702ee9*/
        VeterancyStruct::Accumulate((float *)(*(_DWORD *)(v28 + 284) + 336), v19, v23); /*0x702ef0*/
      }
      else if ( *(_BYTE *)((*(int (__thiscall **)(int))(*(_DWORD *)v28 + 132))(v28) + 3214) )
      {
        v12 = (*(int (__thiscall **)(int))(*(_DWORD *)v28 + 132))(v28); /*0x702f0d*/
        v24 = this->Owner; /*0x702f1c*/
        v20 = (*(int (__thiscall **)(int))(*(_DWORD *)v12 + 132))(v12); /*0x702f25*/
        VeterancyStruct::Accumulate((float *)(v28 + 336), v20, v24); /*0x702f2c*/
      }
      else if ( *(_BYTE *)((*(int (__thiscall **)(int))(*(_DWORD *)v28 + 132))(v28) + 3432) )
      {
        v13 = *(_DWORD *)(v28 + 724); /*0x702f45*/
        if ( v13 && *(_BYTE *)((*(int (__thiscall **)(int))(*(_DWORD *)v13 + 132))(v13) + 3214) ) /*0x702f5b*/
        {
          v14 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(v28 + 724) + 132))(*(_DWORD *)(v28 + 724)); /*0x702f71*/
          v25 = this->Owner; /*0x702f80*/
          v21 = (*(int (__thiscall **)(int))(*(_DWORD *)v14 + 132))(v14); /*0x702f8f*/
          VeterancyStruct::Accumulate((float *)(*(_DWORD *)(v28 + 724) + 336), v21, v25); /*0x702f96*/
        }
      }
      else if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v28 + 1024))(v28)
             && (*(int (__thiscall **)(int))(*(_DWORD *)v28 + 44))(v28) == 6 )
      {
        v15 = (*(int (__thiscall **)(int))(*(_DWORD *)v28 + 44))(v28); /*0x702fb6*/
        v16 = *(_DWORD *)(*(_DWORD *)(v15 == 6 ? v28 + 0x688 : 1672) + 4 * *(_DWORD *)(v15 == 6 ? v28 + 0x69C : 1692));
        v26 = this->Owner; /*0x702fda*/
        v22 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(v16 + 1728) + 132))(*(_DWORD *)(v16 + 1728)); /*0x702fe9*/
        VeterancyStruct::Accumulate((float *)(v16 + 336), v22, v26); /*0x702ff0*/
      }
      *(_DWORD *)(this->Owner + 21644) = (*(int (__thiscall **)(int))(*(_DWORD *)v28 + 56))(v28); /*0x703003*/
      *(_DWORD *)(*(_DWORD *)(v28 + 540) + 21736) += v3; /*0x70300f*/
    }
    result = (*(int (__thiscall **)(#377 *))(this->fallRate)(this) - 1; /*0x70301c*/
    switch ( result ) /*0x70302e*/
    {
      case 0: /*0x70302e*/
        goto LABEL_59;
      case 1: /*0x70302e*/
        if ( !v28 ) /*0x7030d5*/
          goto LABEL_63; /*0x7030d5*/
        if ( !*(_BYTE *)((*(int (__thiscall **)(#377 *))(this->hasParachute)(this) + 3231) ) /*0x7030e5*/
        {
          HouseClass::IncrementStat( /*0x703108*/
            (_DWORD *)(*(_DWORD *)(v28 + 540) + 9032),
            *(_DWORD *)(this->q1B1 + 3576));
          v27 = 1; /*0x70310d*/
        }
LABEL_55:
        if ( v28 ) /*0x703117*/
        {
          if ( !v27 && !*(_BYTE *)((*(int (__thiscall **)(#377 *))(this->hasParachute)(this) + 3231) ) /*0x70312f*/
          {
            HouseClass::IncrementStat( /*0x703152*/
              (_DWORD *)(*(_DWORD *)(v28 + 540) + 11088),
              *(_DWORD *)(this->airstrikeTimer + 3576));
            v27 = 1; /*0x703157*/
          }
LABEL_59:
          if ( v28 && !v27 && !*(_BYTE *)((*(int (__thiscall **)(#377 *))(this->hasParachute)(this) + 3231) ) /*0x703175*/
            HouseClass::IncrementStat( /*0x703198*/
              (_DWORD *)(*(_DWORD *)(v28 + 540) + 13144),
              *(_DWORD *)(this->q1B1 + 3576));
        }
LABEL_63:
        ++*(_DWORD *)(this->Owner + 21556); /*0x70319d*/
        if ( v28 ) /*0x7031b2*/
        {
          if ( !*(_BYTE *)((*(int (__thiscall **)(#377 *))(this->hasParachute)(this) + 3231) ) /*0x7031be*/
          {
            v18 = (_DWORD *)(*(_DWORD *)(v28 + 540) /*0x7031d5*/
                           + 4 * (*(int (__thiscall **)(#377 *))(this->attachedBomb)(this)
                           + 21476);
            ++*v18; /*0x7031dc*/
          }
        }
        result = RadarClass::IsActiveMode(&MEMORY[0x87F7E8]); /*0x7031e3*/
        if ( (_BYTE)result ) /*0x7031ea*/
LABEL_67:
          result = RadarClass::SetFlag(&MEMORY[0x87F7E8], 0); /*0x7031ec*/
        break; /*0x7031f3*/
      case 5: /*0x70302e*/
        result = (*(int (__thiscall **)(#377 *))(this->hasParachute)(this); /*0x703039*/
        if ( !*(_BYTE *)(result + 562) ) /*0x70303f*/
        {
          if ( *((_DWORD *)this + 335) != -1 ) /*0x703054*/
            ++*(_DWORD *)(this->Owner + 21640); /*0x70305c*/
          if ( v28 && !*(_BYTE *)((*(int (__thiscall **)(#377 *))(this->hasParachute)(this) + 3231) ) /*0x703070*/
          {
            HouseClass::IncrementStat( /*0x703093*/
              (_DWORD *)(*(_DWORD *)(v28 + 540) + 15200),
              *(_DWORD *)(this->gattlingValue + 3576));
            v17 = (_DWORD *)(*(_DWORD *)(v28 + 540) /*0x7030a5*/
                           + 4 * (*(int (__thiscall **)(#377 *))(this->attachedBomb)(this)
                           + 21560);
            ++*v17; /*0x7030ac*/
          }
          result = RadarClass::IsActiveMode(&MEMORY[0x87F7E8]); /*0x7030b3*/
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
int __thiscall InfantryClass::RegisterKill(#377 *this)
{
  int v2; // eax
  int v3; // ebp
  void **v4; // ecx
  void **v5; // ecx
  void **v6; // ecx
  void **v7; // ecx
  void **v8; // ecx
  int result; // eax
  int v10; // eax
  int v11; // eax
  int v12; // [esp+Ch] [ebp-4h]
  _DWORD *v13; // [esp+14h] [ebp+4h]

  v12 = 0; /*0x703236*/
  v2 = (*(int (__thiscall **)(#377 *))(this->hasParachute)(this); /*0x703240*/
  v3 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)v2 + 132))(v2, this->Owner); /*0x70325b*/
  if ( this->isAliveFlag ) /*0x70325d*/
  {
    v4 = (void **)this->attachedTag; /*0x703267*/
    if ( v4 ) /*0x70326c*/
    {
      if ( v13 ) /*0x703270*/
        TeamClass::Update_0(v4, 6, (AbstractClass *)this, *(IUnknown **)&MEMORY[0xB077F8].__pad_579C[6844], 0, 0); /*0x703280*/
    }
  }
  if ( this->isAliveFlag ) /*0x703285*/
  {
    v5 = (void **)this->attachedTag; /*0x703293*/
    if ( v5 && v13 ) /*0x70329c*/
      TeamClass::Update_0(v5, 4, (AbstractClass *)this, *(IUnknown **)&MEMORY[0xB077F8].__pad_579C[6844], 0, 0); /*0x7032ab*/
    if ( this->isAliveFlag /*0x7032c6*/
      && (*(int (__thiscall **)(#377 *))(this->fallRate)(this) != 1
      && this->isAliveFlag )
    {
      v6 = (void **)this->attachedTag; /*0x7032d0*/
      if ( v6 && v13 ) /*0x7032d9*/
        TeamClass::Update_0(v6, 7, (AbstractClass *)this, *(IUnknown **)&MEMORY[0xB077F8].__pad_579C[6844], 0, 0); /*0x7032e8*/
      if ( this->isAliveFlag ) /*0x7032ed*/
      {
        v7 = (void **)this->attachedTag; /*0x7032f7*/
        if ( v7 ) /*0x7032fc*/
          TeamClass::Update_0(v7, 48, (AbstractClass *)this, *(IUnknown **)&MEMORY[0xB077F8].__pad_579C[6844], 0, 0); /*0x70330c*/
        if ( this->isAliveFlag ) /*0x703311*/
        {
          v8 = (void **)this->attachedTag; /*0x70331b*/
          if ( v8 ) /*0x703320*/
            TeamClass::Update_0(v8, 29, (AbstractClass *)this, *(IUnknown **)&MEMORY[0xB077F8].__pad_579C[6844], 0, 0); /*0x70332f*/
        }
      }
    }
  }
  if ( v13 ) /*0x703336*/
  {
    if ( Object::IsAlliedWithObjectHouse(v13, (IUnknown *)this) ) /*0x70333c*/
    {
      v3 = 0; /*0x703345*/
    }
    else if ( VeterancyStruct::IsVeteran((float *)this + 84) ) /*0x703351*/
    {
      v3 *= 2; /*0x70335a*/
    }
    else if ( VeterancyStruct::IsElite((float *)this + 84) ) /*0x703360*/
    {
      v3 *= 3; /*0x703369*/
    }
    *(_DWORD *)(this->Owner + 21644) = v13[12]; /*0x703377*/
    v13[5434] += v3; /*0x703385*/
  }
  result = (*(int (__thiscall **)(#377 *))(this->fallRate)(this) - 1; /*0x703392*/
  switch ( result ) /*0x7033a4*/
  {
    case 0: /*0x7033a4*/
      goto LABEL_45;
    case 1: /*0x7033a4*/
      if ( !v13 ) /*0x703447*/
        goto LABEL_49; /*0x703447*/
      if ( !*(_BYTE *)((*(int (__thiscall **)(#377 *))(this->hasParachute)(this) + 3231) ) /*0x703457*/
      {
        HouseClass::IncrementStat(v13 + 2258, *(_DWORD *)(this->q1B1 + 3576)); /*0x703474*/
        v12 = 1; /*0x703479*/
      }
LABEL_41:
      if ( v13 ) /*0x703483*/
      {
        if ( !v12 && !*(_BYTE *)((*(int (__thiscall **)(#377 *))(this->hasParachute)(this) + 3231) ) /*0x703497*/
        {
          HouseClass::IncrementStat(v13 + 2772, *(_DWORD *)(this->airstrikeTimer + 3576)); /*0x7034b4*/
          v12 = 1; /*0x7034b9*/
        }
LABEL_45:
        if ( v13 && !v12 && !*(_BYTE *)((*(int (__thiscall **)(#377 *))(this->hasParachute)(this) + 3231) ) /*0x7034d7*/
          HouseClass::IncrementStat(v13 + 3286, *(_DWORD *)(this->q1B1 + 3576)); /*0x7034f4*/
      }
LABEL_49:
      ++*(_DWORD *)(this->Owner + 21556); /*0x7034f9*/
      if ( v13 ) /*0x70350e*/
      {
        if ( !*(_BYTE *)((*(int (__thiscall **)(#377 *))(this->hasParachute)(this) + 3231) ) /*0x70351a*/
        {
          v11 = (*(int (__thiscall **)(#377 *))(this->attachedBomb)(this); /*0x703528*/
          ++v13[v11 + 5369]; /*0x70353a*/
        }
      }
      result = RadarClass::IsActiveMode(&MEMORY[0x87F7E8]); /*0x703541*/
      if ( (_BYTE)result ) /*0x703548*/
        return RadarClass::SetFlag(&MEMORY[0x87F7E8], 0); /*0x70354a*/
      return result;
    case 5: /*0x7033a4*/
      result = (*(int (__thiscall **)(#377 *))(this->hasParachute)(this); /*0x7033af*/
      if ( !*(_BYTE *)(result + 562) ) /*0x7033b5*/
      {
        if ( *((_DWORD *)this + 335) != -1 ) /*0x7033ca*/
          ++*(_DWORD *)(this->Owner + 21640); /*0x7033d2*/
        if ( v13 && !*(_BYTE *)((*(int (__thiscall **)(#377 *))(this->hasParachute)(this) + 3231) ) /*0x7033e6*/
        {
          HouseClass::IncrementStat(v13 + 3800, *(_DWORD *)(this->gattlingValue + 3576)); /*0x703403*/
          v10 = (*(int (__thiscall **)(#377 *))(this->attachedBomb)(this); /*0x70340c*/
          ++v13[v10 + 5390]; /*0x70341e*/
        }
        result = RadarClass::IsActiveMode(&MEMORY[0x87F7E8]); /*0x703425*/
        if ( (_BYTE)result ) /*0x70342c*/
          return RadarClass::SetFlag(&MEMORY[0x87F7E8], 0); /*0x70342c*/
      }
      return result; /*0x70342c*/
    case 14: /*0x7033a4*/
      goto LABEL_41;
    default:
      return result;
  }
}


// ==== 0x00703590  MapClass::FindPlacementCellsAlt  this=IUnknown  sig=csp ====
_DWORD *__thiscall MapClass::FindPlacementCellsAlt(char *this, IUnknown *aP1, IUnknown *aP2)
{
  int v4; // ebx
  _DWORD *v5; // eax
  int v6; // edx
  int eax6; // eax
  MouseClass *v7; // edi
  int TileIndex; // eax
  IUnknown *v11; // [esp+10h] [ebp-14h] BYREF
  int v12; // [esp+14h] [ebp-10h] BYREF
  _BYTE v13[12]; // [esp+18h] [ebp-Ch] BYREF

  v4 = *(_DWORD *)((*(int (__thiscall **)(char *))(*(_DWORD *)this + 132))(this) + 1660); /*0x7035a1*/
  if ( v4 == 4 ) /*0x7035aa*/
    v4 = 1; /*0x7035ac*/
  if ( aP2 ) /*0x7035b9*/
    v5 = (_DWORD *)(*(int (__thiscall **)(IUnknown *, _BYTE *))(aP2->field_0 + 72))(aP2, v13); /*0x7035c2*/
  else
    v5 = (_DWORD *)(*(int (__thiscall **)(char *, _BYTE *))(this->q012)(this, v13); /*0x7035fd*/
  LOWORD(aP2) = *v5 / 256; /*0x7035d5*/
  HIWORD(aP2) = v5[1] / 256; /*0x7035e9*/
  v6 = *(_DWORD *)this; /*0x70362d*/
  v11 = aP2; /*0x70362f*/
  eax6 = (*(int (__thiscall **)(char *))(v6 + 132))(this); /*0x703635*/
  v7 = *(MouseClass **)(eax6 + 1460); /*0x70363b*/
  if ( v7 == (MouseClass *)-1 ) /*0x703644*/
  {
    TileIndex = -1; /*0x70365f*/
  }
  else
  {
    LOBYTE(eax6) = this->q08C; /*0x703646*/
    TileIndex = MapClass::GetTileIndex(&MEMORY[0x87F7E8], (IUnknown *)&v11, (IUnknown *)v7, (IUnknown *)eax6); /*0x703658*/
  }
  aP2 = 0; /*0x703663*/
  aP1->field_0 = *LayerClass::Pathfinding_Find( /*0x7036aa*/
                    &MEMORY[0x87F7E8],
                    (unsigned __int8)this->q08C,
                    &v12,
                    (__int16 *)&v11,
                    v4,
                    TileIndex,
                    (int)v7,
                    (unsigned __int8)this->q08C,
                    1,
                    1,
                    0,
                    0,
                    0,
                    1,
                    (__int16 *)&aP2,
                    0,
                    0);
  return &aP1->field_0; /*0x7036a7*/
}


// ==== 0x007036C0  TechnoClass::TransitionEffectState  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::TransitionEffectState(#377 *this)
{
  int result; // eax
  int v3; // edx
  int v4; // eax
  wchar_t *v5; // ecx
  int *v6; // esi
  int v7; // [esp+4h] [ebp-Ch] BYREF
  int v8; // [esp+8h] [ebp-8h]
  int v9; // [esp+Ch] [ebp-4h]
  char v10; // [esp+14h] [ebp+4h]

  result = this->parachute; /*0x7036c6*/
  if ( result == 2 || result == 1 ) /*0x7036d4*/
  {
    this->parachute = 3; /*0x7036da*/
    v3 = *(_DWORD *)this; /*0x7036e9*/
    this->owner = MEMORY[0x8871E0]->VeteranCombat - 1; /*0x7036f2*/
    v4 = (*(int (__thiscall **)(#377 *))(v3 + 132))(this); /*0x7036fa*/
    v5 = MEMORY[0xA8ED84]; /*0x703700*/
    result = *(_DWORD *)(v4 + 784); /*0x703706*/
    this->wasFallingDown = result; /*0x703712*/
    this->q08B = v5; /*0x703718*/
    this->onBridge = v8; /*0x70371e*/
    this->isFallingDown = result; /*0x703721*/
    LOBYTE(result) = v10; /*0x703724*/
    this->isBomb = -1; /*0x70372a*/
    if ( !v10 ) /*0x703734*/
    {
      v6 = (int *)((char *)this + 156); /*0x703736*/
      v7 = *v6; /*0x703740*/
      v8 = v6[1]; /*0x70374b*/
      v9 = v6[2]; /*0x703757*/
      return StartAudioControllerAt(MEMORY[0x8871E0]->BuildingSlam, (int)&v7, 0); /*0x703761*/
    }
  }
  return result; /*0x703766*/
}


// ==== 0x00703770  TechnoClass::StartEffectAudio  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::StartEffectAudio(#377 *this)
{
  int result; // eax
  int v3; // edx
  int v4; // eax
  wchar_t *v5; // ecx
  int v6; // eax
  int v7; // [esp+4h] [ebp-Ch] BYREF
  int v8; // [esp+8h] [ebp-8h]
  int v9; // [esp+Ch] [ebp-4h]
  char v10; // [esp+14h] [ebp+4h]

  result = this->parachute; /*0x703776*/
  if ( !result || result == 3 ) /*0x703783*/
  {
    (*(void (__thiscall **)(#377 *, _DWORD))(this->q0DC)(this, 0); /*0x70378f*/
    v3 = *(_DWORD *)this; /*0x703795*/
    this->parachute = 1; /*0x703799*/
    this->owner = 0; /*0x7037a3*/
    v4 = (*(int (__thiscall **)(#377 *))(v3 + 132))(this); /*0x7037ad*/
    v5 = MEMORY[0xA8ED84]; /*0x7037b3*/
    v6 = *(_DWORD *)(v4 + 784); /*0x7037b9*/
    this->wasFallingDown = v6; /*0x7037c5*/
    this->q08B = v5; /*0x7037cb*/
    this->onBridge = v8; /*0x7037d1*/
    this->isFallingDown = v6; /*0x7037d4*/
    this->isBomb = 1; /*0x7037dd*/
    if ( !v10 ) /*0x7037e7*/
    {
      v7 = this->q027; /*0x7037f3*/
      v8 = this->owningHouseIndex; /*0x7037ff*/
      v9 = this->q029; /*0x703806*/
      StartAudioControllerAt(MEMORY[0x8871E0]->BuildingSlam, (int)&v7, 0); /*0x703814*/
    }
    result = (int)HouseClass_Player; /*0x70381f*/
    if ( *((#375 **)this + 135) != HouseClass_Player ) /*0x703826*/
    {
      LOBYTE(result) = this->isSelected; /*0x703828*/
      if ( (_BYTE)result ) /*0x703830*/
        return (*(int (__thiscall **)(#377 *))(this->initialOwner)(this); /*0x703836*/
    }
  }
  return result; /*0x70383c*/
}


// ==== 0x00703850  TechnoClass::Vt279Thunk0  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::Vt279Thunk0(#377 *this)
{
  return (*(int (__thiscall **)(#377 *, _DWORD))(this->attackedTargets)(this, 0); /*0x70385a*/
}


// ==== 0x00703860  TechnoClass::UpdatePowerDrain  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::UpdatePowerDrain(char *this, TechnoClass *aP1, int a3)
{
  char *v5; // esi
  int v6; // ecx
  int v7; // eax
  TechnoClass *v8; // ecx
  _WORD *v9; // eax
  int v10; // ecx
  _WORD *v11; // eax
  int v12; // eax
  TechnoClass *v13; // [esp-4h] [ebp-18h]
  TechnoClass *v14; // [esp-4h] [ebp-18h]

  if ( *(_BYTE *)((*(int (__thiscall **)(char *))(this->hasParachute)(this) + 3226) && this->isOwnedByCurrentPlayer ) /*0x703879*/
    return 0; /*0x703879*/
  if ( *(_BYTE *)((*(int (__thiscall **)(char *))(this->hasParachute)(this) + 3226) /*0x7038ac*/
    && !this->isOwnedByCurrentPlayer
    && !MEMORY[0xA8D63C].__pad_14B0[639] )
  {
    return 5; /*0x7038ac*/
  }
  if ( !this->parachute /*0x7038db*/
    || MEMORY[0xA8D63C].__pad_14B0[639]
    || (*(int (__thiscall **)(char *))(this->fallRate)(this) == 6 )
  {
    return 0; /*0x7038db*/
  }
  if ( this->parachute != 2 ) /*0x7038e8*/
  {
    a3 = this->owner; /*0x703a6f*/
    if ( a3 > 0 ) /*0x703a73*/
    {
      v12 = Math::RoundToInt((double)a3 / (double)*(int *)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9108] + 1576) * 256.0); /*0x703a8f*/
      if ( v12 < 64 ) /*0x703a97*/
        return 1; /*0x703a9a*/
      if ( v12 < 128 ) /*0x703aab*/
        return 2; /*0x703aae*/
      if ( v12 < 192 ) /*0x703abf*/
        return 3; /*0x703ac2*/
      if ( (_BYTE)aP1 || !this->isOwnedByCurrentPlayer ) /*0x703ad6*/
        return (v12 >= 255) + 4; /*0x703afb*/
      return 3; /*0x703aa3*/
    }
    return 0; /*0x703b05*/
  }
  if ( (_BYTE)aP1 ) /*0x7038f4*/
  {
    if ( a3 ) /*0x7038fc*/
    {
      v5 = this + 156; /*0x7038fe*/
      v6 = *((_DWORD *)v5 + 1); /*0x703906*/
      LOWORD(aP1) = *(_DWORD *)v5 / 256; /*0x70391c*/
      v7 = v6; /*0x703923*/
      v8 = *(TechnoClass **)(a3 + 48); /*0x703924*/
      HIWORD(aP1) = v7 / 256; /*0x703936*/
      v13 = v8; /*0x70393f*/
      v9 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&aP1); /*0x70394a*/
      if ( Cell::IsPassableOffset(v9, (IUnknown *)v13) ) /*0x703951*/
        return 3; /*0x703968*/
    }
    return 5; /*0x7038b8*/
  }
  if ( !g_hWnd ) /*0x703972*/
    return 3; /*0x703975*/
  if ( this->isOwnedByCurrentPlayer ) /*0x703981*/
    return 3; /*0x70398c*/
  v10 = this->owningHouseIndex; /*0x7039a2*/
  LOWORD(aP1) = this->q027 / 256; /*0x7039b8*/
  HIWORD(aP1) = v10 / 256; /*0x7039d1*/
  v14 = *(TechnoClass **)&HouseClass_Player->__pad_28[8]; /*0x7039e5*/
  v11 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&aP1); /*0x7039ec*/
  if ( Cell::IsPassableOffset(v11, (IUnknown *)v14) ) /*0x7039f3*/
    return 3; /*0x7039fd*/
  if ( !MEMORY[0xA8B238] /*0x703a4d*/
    || !this->Owner
    || !HouseClass_Player
    || !(unsigned __int8)HouseClass::IsAlliedWith(HouseClass_Player, *((IUnknown **)this + 135))
    || !(unsigned __int8)HouseClass::IsAlliedWith(*((void **)this + 135), HouseClass_Player) )
  {
    return 5; /*0x703a54*/
  }
  return 3; /*0x7038ae*/
}


// ==== 0x00703B10  TechnoClass::CheckTargetCell  this=AbstractClass  sig=csp ====
char __thiscall TechnoClass_CheckTargetCell(_BYTE *this)
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
  int v12; // [esp+10h] [ebp-14h] BYREF
  int v13; // [esp+14h] [ebp-10h] BYREF
  int v14; // [esp+18h] [ebp-Ch] BYREF
  int v15; // [esp+1Ch] [ebp-8h] BYREF
  int v16; // [esp+20h] [ebp-4h] BYREF

  v12 = *(_DWORD *)(*(int (__thiscall **)(_BYTE *, int *))(this->q6E0)(this, &v16); /*0x703b34*/
  v2 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v12); /*0x703b3d*/
  if ( !v2 || this->q08C ) /*0x703b47*/
    return 0; /*0x703b47*/
  LOWORD(v13) = v12 + MEMORY[0x89F698]; /*0x703b6c*/
  HIWORD(v13) = HIWORD(v12) + HIWORD(MEMORY[0x89F698]); /*0x703b71*/
  v14 = v13; /*0x703b7e*/
  v3 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v14); /*0x703b9f*/
  HIWORD(v13) = HIWORD(v12) + HIWORD(MEMORY[0x89F688][0]); /*0x703ba7*/
  LOWORD(v13) = v12 + LOWORD(MEMORY[0x89F688][0]); /*0x703bac*/
  v15 = v13; /*0x703bb9*/
  v4 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v15); /*0x703bd8*/
  HIWORD(v13) = HIWORD(v12) + HIWORD(MEMORY[0x89F690]); /*0x703be1*/
  LOWORD(v13) = v12 + MEMORY[0x89F690]; /*0x703be6*/
  v16 = v13; /*0x703bf9*/
  v5 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v16); /*0x703c0c*/
  LOWORD(v13) = v12 + MEMORY[0x89F6A0]; /*0x703c1b*/
  HIWORD(v13) = HIWORD(v12) + HIWORD(MEMORY[0x89F6A0]); /*0x703c24*/
  v6 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v13); /*0x703c37*/
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
char __thiscall sub_703CC0(_BYTE *this)
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
  int v12; // [esp+10h] [ebp-14h] BYREF
  int v13; // [esp+14h] [ebp-10h] BYREF
  int v14; // [esp+18h] [ebp-Ch] BYREF
  int v15; // [esp+1Ch] [ebp-8h] BYREF
  int v16; // [esp+20h] [ebp-4h] BYREF

  v12 = *(_DWORD *)(*(int (__thiscall **)(_BYTE *, int *))(this->airstrikeTintTimer)(this, &v16); /*0x703ce4*/
  v2 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v12); /*0x703ced*/
  if ( !v2 || this->onBridge ) /*0x703cf7*/
    return 0; /*0x703cf7*/
  LOWORD(v13) = v12 + MEMORY[0x89F698]; /*0x703d1c*/
  HIWORD(v13) = HIWORD(v12) + HIWORD(MEMORY[0x89F698]); /*0x703d21*/
  v14 = v13; /*0x703d2e*/
  v3 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v14); /*0x703d4f*/
  HIWORD(v13) = HIWORD(v12) + HIWORD(MEMORY[0x89F688][0]); /*0x703d57*/
  LOWORD(v13) = v12 + LOWORD(MEMORY[0x89F688][0]); /*0x703d5c*/
  v15 = v13; /*0x703d69*/
  v4 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v15); /*0x703d88*/
  HIWORD(v13) = HIWORD(v12) + HIWORD(MEMORY[0x89F690]); /*0x703d91*/
  LOWORD(v13) = v12 + MEMORY[0x89F690]; /*0x703d96*/
  v16 = v13; /*0x703da9*/
  v5 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v16); /*0x703dbc*/
  LOWORD(v13) = v12 + MEMORY[0x89F6A0]; /*0x703dcb*/
  HIWORD(v13) = HIWORD(v12) + HIWORD(MEMORY[0x89F6A0]); /*0x703dd4*/
  v6 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v13); /*0x703de7*/
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
int __thiscall TechnoClass_ScanNeighborCells(_BYTE *this)
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
  int v13; // [esp+Ch] [ebp-10h] BYREF
  int v14; // [esp+10h] [ebp-Ch] BYREF
  int v15; // [esp+14h] [ebp-8h] BYREF
  int v16; // [esp+18h] [ebp-4h] BYREF

  v13 = *(_DWORD *)(*(int (__thiscall **)(_BYTE *, int *))(this->airstrikeTintTimer)(this, &v16); /*0x703e93*/
  v2 = 0; /*0x703e97*/
  if ( CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v13) /*0x703eb3*/
    && (TechnoClass::CheckTargetCell(this) || (unsigned __int8)TechnoClass::ScanAdjacentCells(this)) )
  {
    LOWORD(v14) = v13 + MEMORY[0x89F698]; /*0x703ed7*/
    HIWORD(v14) = HIWORD(v13) + HIWORD(MEMORY[0x89F698]); /*0x703edc*/
    v15 = v14; /*0x703ee9*/
    v3 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v15); /*0x703f0a*/
    HIWORD(v14) = HIWORD(v13) + HIWORD(MEMORY[0x89F690]); /*0x703f12*/
    LOWORD(v14) = v13 + MEMORY[0x89F690]; /*0x703f17*/
    v16 = v14; /*0x703f24*/
    v4 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v16); /*0x703f43*/
    HIWORD(v14) = HIWORD(v13) + HIWORD(MEMORY[0x89F694]); /*0x703f4c*/
    LOWORD(v14) = v13 + MEMORY[0x89F694]; /*0x703f51*/
    v5 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v14); /*0x703f68*/
    if ( v3 ) /*0x703f6f*/
    {
      if ( v4 && v5 ) /*0x703f77*/
      {
        v6 = v3[14]; /*0x703f79*/
        if ( v6 != 0xFFFF && v6 != 255 ) /*0x703f90*/
        {
          v7 = v6 - unk_AA0E28 + 1; /*0x703f94*/
          if ( v7 >= 7 && v7 <= 16 ) /*0x703f9d*/
            v2 = 1; /*0x703f9f*/
        }
        v8 = v4[14]; /*0x703fa4*/
        if ( v8 != 0xFFFF && v8 != 255 ) /*0x703fb5*/
        {
          v9 = v8 - unk_AA0E28 + 1; /*0x703fb9*/
          if ( v9 >= 7 && v9 <= 16 ) /*0x703fc2*/
            v2 = 1; /*0x703fc4*/
        }
        v10 = v5[14]; /*0x703fc9*/
        if ( v10 != 0xFFFF && v10 != 255 ) /*0x703fd8*/
        {
          v11 = v10 - unk_AA0E28 + 1; /*0x703fdc*/
          if ( v11 >= 7 && v11 <= 16 ) /*0x703fe5*/
            ++v2; /*0x703fe7*/
        }
      }
    }
  }
  return v2; /*0x703fe8*/
}


// ==== 0x00704000  TechnoClass::IsValidBuildingPlacement  this=FootClass  sig=csp ====
int __thiscall TechnoClass::IsValidBuildingPlacement(_BYTE *this)
{
  int v2; // eax
  int *v3; // eax
  char v4; // cl
  int v5; // eax
  _DWORD *v6; // edi
  void *v7; // eax
  int v8; // esi
  int v9; // ebx
  _DWORD *v10; // eax
  _DWORD *v11; // ebp
  __int16 v12; // di
  _DWORD *v13; // ebx
  _DWORD *v14; // eax
  _DWORD *v15; // esi
  int v16; // ebx
  void *v17; // edi
  int v18; // eax
  void *v19; // eax
  int v21; // [esp+10h] [ebp-14h] BYREF
  int v22; // [esp+14h] [ebp-10h]
  int v23; // [esp+18h] [ebp-Ch]
  int v24; // [esp+1Ch] [ebp-8h] BYREF
  int v25; // [esp+20h] [ebp-4h] BYREF

  v2 = *(_DWORD *)this; /*0x70400d*/
  v23 = 0; /*0x704012*/
  v3 = (int *)(*(int (__thiscall **)(_BYTE *, int *))(v2 + 440))(this, &v25); /*0x70401a*/
  v4 = this->onBridge; /*0x704020*/
  v5 = *v3; /*0x704026*/
  v21 = v5; /*0x70402a*/
  if ( v4 ) /*0x70402e*/
    return v23; /*0x70402e*/
  LOWORD(v22) = LOWORD(MEMORY[0x89F688][0]) + v5; /*0x704040*/
  HIWORD(v22) = HIWORD(v21) + HIWORD(MEMORY[0x89F688][0]); /*0x704051*/
  v24 = v22; /*0x70405a*/
  v6 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v24); /*0x70407a*/
  LOWORD(v22) = MEMORY[0x89F6A0] + v21; /*0x704086*/
  HIWORD(v22) = HIWORD(v21) + HIWORD(MEMORY[0x89F6A0]); /*0x70408b*/
  v25 = v22; /*0x70409a*/
  v7 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v25); /*0x70409e*/
  LOWORD(v8) = MEMORY[0xB0EA50]; /*0x7040a3*/
  v9 = (int)v7; /*0x7040b3*/
  v22 = MEMORY[0xB0EA50]; /*0x7040b5*/
  v10 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v21); /*0x7040b9*/
  v11 = v10; /*0x7040c0*/
  if ( !v6 || !v9 ) /*0x7040ca*/
    return v23; /*0x7040ca*/
  if ( InfantryClass::IsInBounds((int)v10) ) /*0x7040d2*/
  {
    v8 = v11[9]; /*0x7040db*/
LABEL_10:
    v22 = v8; /*0x7040fe*/
    goto LABEL_11; /*0x7040fe*/
  }
  if ( InfantryClass::IsInBounds((int)v6) ) /*0x7040e2*/
  {
    v8 = v6[9]; /*0x7040eb*/
    goto LABEL_10; /*0x7040ee*/
  }
  if ( InfantryClass::IsInBounds(v9) ) /*0x7040f2*/
  {
    v8 = *(_DWORD *)(v9 + 36); /*0x7040fb*/
    goto LABEL_10; /*0x7040fb*/
  }
LABEL_11:
  v12 = HIWORD(v22); /*0x704102*/
  if ( __PAIR32__(HIWORD(v22), v8) != MEMORY[0xB0EA50] ) /*0x70410e*/
  {
    LOWORD(v22) = v8 + LOWORD(MEMORY[0x89F688][0]); /*0x70412e*/
    HIWORD(v22) += HIWORD(MEMORY[0x89F688][0]); /*0x704137*/
    v25 = v22; /*0x704146*/
    v13 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v25); /*0x70415e*/
    LOWORD(v22) = v8 + MEMORY[0x89F6A0]; /*0x704160*/
    HIWORD(v22) = HIWORD(MEMORY[0x89F6A0]) + v12; /*0x704165*/
    v24 = v22; /*0x704178*/
    v14 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v24); /*0x70417c*/
    v15 = v14; /*0x704183*/
    if ( v13 ) /*0x704185*/
    {
      if ( v14 ) /*0x70418d*/
      {
        v16 = v13[9]; /*0x704193*/
        LOWORD(v22) = LOWORD(MEMORY[0x89F688][0]) + v16; /*0x7041b2*/
        HIWORD(v22) = HIWORD(MEMORY[0x89F688][0]) + HIWORD(v16); /*0x7041b7*/
        v25 = v22; /*0x7041c6*/
        v17 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v25); /*0x7041d5*/
        v18 = v15[9]; /*0x7041d7*/
        LOWORD(v22) = MEMORY[0x89F6A0] + v18; /*0x7041e0*/
        HIWORD(v22) = HIWORD(MEMORY[0x89F6A0]) + HIWORD(v18); /*0x7041f6*/
        v25 = v22; /*0x7041ff*/
        v19 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v25); /*0x704208*/
        if ( v17 ) /*0x70420f*/
        {
          if ( v19 && (InfantryClass::IsInBounds((int)v19) || InfantryClass::IsInBounds((int)v17)) ) /*0x704222*/
            return 1; /*0x70422b*/
        }
      }
    }
  }
  return v23; /*0x704237*/
}


// ==== 0x00704240  TechnoClass::CheckAdjacencyFlags  this=FootClass  sig=csp ====
int __thiscall sub_704240(_BYTE *this)
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
  int v12; // [esp+10h] [ebp-Ch] BYREF
  int v13; // [esp+14h] [ebp-8h] BYREF
  _BYTE v14[4]; // [esp+18h] [ebp-4h] BYREF

  v2 = 0; /*0x70424c*/
  v12 = *(_DWORD *)(*(int (__thiscall **)(_BYTE *, int *))(this->airstrikeTintTimer)(this, &v13); /*0x704265*/
  v3 = (char *)CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v12); /*0x70426e*/
  if ( this->onBridge ) /*0x704270*/
    return v2; /*0x704270*/
  v4 = (_WORD *)(*(int (__thiscall **)(_BYTE *, _BYTE *))(this->airstrikeTintTimer)(this, v14); /*0x704287*/
  LOWORD(v10) = MEMORY[0x89F694] + *v4; /*0x7042a2*/
  HIWORD(v10) = HIWORD(MEMORY[0x89F694]) + v4[1]; /*0x7042ab*/
  v13 = v10; /*0x7042ba*/
  v5 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v13); /*0x7042be*/
  if ( !v5 ) /*0x7042c5*/
    return v2; /*0x7042c5*/
  if ( *((char *)v5 + 283) - v3[283] >= 4 ) /*0x7042da*/
    v2 = 2; /*0x7042dc*/
  v6 = v5[9]; /*0x7042e1*/
  LOWORD(v11) = v6 + MEMORY[0x89F694]; /*0x7042f6*/
  HIWORD(v11) = HIWORD(v6) + HIWORD(MEMORY[0x89F694]); /*0x704305*/
  v13 = v11; /*0x70430e*/
  v7 = (char *)CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v13); /*0x704317*/
  if ( !v7 ) /*0x70431e*/
    return v2; /*0x70431e*/
  v8 = v7[283] - v3[283] < 4; /*0x704330*/
  result = 1; /*0x704333*/
  if ( v8 ) /*0x704338*/
    return v2; /*0x70433a*/
  return result; /*0x70433c*/
}


// ==== 0x00704350  TechnoClass::GetDrawHeight  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::GetDrawHeight(int *this)
{
  int v2; // eax
  int v3; // eax
  int v4; // edx
  int v5; // ebp
  _BYTE *v6; // ebx
  int v7; // eax
  int v8; // edi
  _DWORD *v10; // eax
  _DWORD *v11; // eax
  _DWORD *v12; // edi
  _DWORD *v13; // ebx
  _DWORD *v14; // eax
  int v15; // edi
  int v16; // ebx
  int v17; // eax
  _WORD *v18; // esi
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
  int v40; // ecx
  int v41; // [esp+10h] [ebp-5Ch] BYREF
  int v42; // [esp+14h] [ebp-58h]
  _BYTE *v43; // [esp+18h] [ebp-54h] BYREF
  _BYTE *v44; // [esp+1Ch] [ebp-50h] BYREF
  _BYTE *v45; // [esp+20h] [ebp-4Ch] BYREF
  _BYTE *v46; // [esp+24h] [ebp-48h]
  _BYTE *v47; // [esp+28h] [ebp-44h] BYREF
  _BYTE *v48; // [esp+2Ch] [ebp-40h] BYREF
  _BYTE *v49; // [esp+30h] [ebp-3Ch] BYREF
  _BYTE *v50; // [esp+34h] [ebp-38h] BYREF
  _BYTE *v51; // [esp+38h] [ebp-34h] BYREF
  _BYTE *v52; // [esp+3Ch] [ebp-30h] BYREF
  int v53; // [esp+40h] [ebp-2Ch] BYREF
  int v54; // [esp+44h] [ebp-28h] BYREF
  int v55; // [esp+48h] [ebp-24h] BYREF
  int v56; // [esp+4Ch] [ebp-20h] BYREF
  int v57; // [esp+50h] [ebp-1Ch] BYREF
  int v58; // [esp+54h] [ebp-18h] BYREF
  int v59; // [esp+58h] [ebp-14h] BYREF
  int v60; // [esp+5Ch] [ebp-10h] BYREF
  _BYTE *v61; // [esp+60h] [ebp-Ch] BYREF
  _BYTE *v62; // [esp+64h] [ebp-8h]
  _BYTE *v63; // [esp+68h] [ebp-4h]

  v2 = (*(int (__thiscall **)(int *))(*this + 464))(this); /*0x70435b*/
  v3 = ZCoordToScreenY(v2); /*0x704363*/
  v4 = *this; /*0x704368*/
  v5 = -v3; /*0x704372*/
  v42 = -v3; /*0x704375*/
  v41 = *(_DWORD *)(*(int (__thiscall **)(int *, _BYTE **))(v4 + 440))(this, &v52); /*0x704385*/
  v6 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v41); /*0x704394*/
  v7 = *this; /*0x704396*/
  v46 = v6; /*0x70439a*/
  if ( (*(int (__thiscall **)(int *))(v7 + 44))(this) == 1 ) /*0x7043a4*/
  {
    if ( this->isTether ) /*0x7043a6*/
    {
      v8 = Array::Get(this, 0); /*0x7043b9*/
      if ( (*(int (__thiscall **)(int))(*(_DWORD *)v8 + 44))(v8) == 6 /*0x7043d4*/
        && (*(int (__thiscall **)(int))(*(_DWORD *)v8 + 388))(v8) == 16 )
      {
        return v5 - 3; /*0x7043e0*/
      }
    }
    if ( *(_BYTE *)(this->q1B1 + 3598) ) /*0x7043e7*/
    {
      v10 = (_DWORD *)(*(int (__thiscall **)(int *))(*this + 444))(this); /*0x7043f5*/
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
    LOWORD(v43) = MEMORY[0x89F698] + v41; /*0x70444b*/
    HIWORD(v43) = HIWORD(MEMORY[0x89F698]) + HIWORD(v41); /*0x704450*/
    v45 = v43; /*0x70445a*/
    v12 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v45); /*0x70447a*/
    LOWORD(v43) = MEMORY[0x89F690] + v41; /*0x704486*/
    HIWORD(v43) = HIWORD(MEMORY[0x89F690]) + HIWORD(v41); /*0x70448b*/
    v44 = v43; /*0x70449a*/
    v13 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v44); /*0x7044b3*/
    HIWORD(v43) = HIWORD(MEMORY[0x89F694]) + HIWORD(v41); /*0x7044bc*/
    LOWORD(v43) = MEMORY[0x89F694] + v41; /*0x7044c1*/
    v14 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v43); /*0x7044d8*/
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
            if ( v17 != -1 && *(_BYTE *)(*(_DWORD *)&MEMORY[0xA83D84]->vtable0[4 * v17] + 693) ) /*0x70455f*/
              return MEMORY[0x843124] + v5 - 1; /*0x70457a*/
          }
          else if ( *(_BYTE *)(*(_DWORD *)&MEMORY[0xA83D84]->vtable0[4 * v16] + 693) ) /*0x704532*/
          {
            return MEMORY[0x843124] + v5 - 1; /*0x70454d*/
          }
        }
        else if ( *(_BYTE *)(*(_DWORD *)&MEMORY[0xA83D84]->vtable0[4 * v15] + 693) ) /*0x704506*/
        {
          return MEMORY[0x843124] + v5 - 1; /*0x704521*/
        }
      }
    }
  }
  v18 = this + 226; /*0x70457b*/
  v19 = ((unsigned __int8)((unsigned int)((*ProgressTimer::GetValue(v18, &v54) >> 12) + 1) >> 1) + 1) & 7; /*0x704596*/
  v20 = HIWORD(v41) + HIWORD(MEMORY[0x89F688][v19]); /*0x7045ae*/
  LOWORD(v43) = v41 + LOWORD(MEMORY[0x89F688][v19]); /*0x7045ba*/
  HIWORD(v43) = v20; /*0x7045c3*/
  v47 = v43; /*0x7045d2*/
  v21 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v47); /*0x7045e2*/
  v22 = ((unsigned __int8)((unsigned int)((*ProgressTimer::GetValue(v18, &v55) >> 12) + 1) >> 1) - 1) & 7; /*0x7045f2*/
  v23 = HIWORD(v41) + HIWORD(MEMORY[0x89F688][v22]); /*0x70460a*/
  LOWORD(v43) = v41 + LOWORD(MEMORY[0x89F688][v22]); /*0x704616*/
  HIWORD(v43) = v23; /*0x70461f*/
  v48 = v43; /*0x70462e*/
  v44 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v48); /*0x70463e*/
  v24 = ((unsigned int)((*ProgressTimer::GetValue(v18, &v56) >> 12) + 1) >> 1) & 7; /*0x704654*/
  v25 = HIWORD(v41) + HIWORD(MEMORY[0x89F688][v24]); /*0x704667*/
  LOWORD(v43) = LOWORD(MEMORY[0x89F688][v24]) + v41; /*0x704673*/
  HIWORD(v43) = v25; /*0x70467c*/
  v49 = v43; /*0x70468b*/
  v45 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v49); /*0x70469b*/
  v26 = ((unsigned __int8)((unsigned int)((*ProgressTimer::GetValue(v18, &v57) >> 12) + 1) >> 1) - 4) & 7; /*0x7046b4*/
  v27 = HIWORD(v41) + HIWORD(MEMORY[0x89F688][v26]); /*0x7046c7*/
  LOWORD(v43) = LOWORD(MEMORY[0x89F688][v26]) + v41; /*0x7046d3*/
  HIWORD(v43) = v27; /*0x7046dc*/
  v50 = v43; /*0x7046eb*/
  v28 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v50); /*0x7046fb*/
  v29 = ((unsigned __int8)((unsigned int)((*ProgressTimer::GetValue(v18, &v58) >> 12) + 1) >> 1) + 3) & 7; /*0x70470d*/
  v30 = HIWORD(v41) + HIWORD(MEMORY[0x89F688][v29]); /*0x704725*/
  LOWORD(v43) = v41 + LOWORD(MEMORY[0x89F688][v29]); /*0x704731*/
  HIWORD(v43) = v30; /*0x70473a*/
  v51 = v43; /*0x704749*/
  v31 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v51); /*0x704759*/
  v32 = ((unsigned __int8)((unsigned int)((*ProgressTimer::GetValue(v18, &v59) >> 12) + 1) >> 1) - 3) & 7; /*0x70476b*/
  v33 = HIWORD(v41) + HIWORD(MEMORY[0x89F688][v32]); /*0x704783*/
  LOWORD(v43) = v41 + LOWORD(MEMORY[0x89F688][v32]); /*0x70478f*/
  HIWORD(v43) = v33; /*0x704798*/
  v52 = v43; /*0x7047a7*/
  v34 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v52); /*0x7047ab*/
  v43 = v34; /*0x7047b2*/
  if ( !v21 || !v44 || !v45 ) /*0x7047ce*/
    return v42 - 1; /*0x7047ce*/
  if ( v21[284] || v44[284] || v45[284] ) /*0x7047ee*/
    return MEMORY[0x843120] + v42; /*0x7047ee*/
  if ( !v28 || !v31 || !v34 ) /*0x70480e*/
    return v42 - 1; /*0x70480e*/
  if ( v28[284] || v31[284] || v34[284] ) /*0x704830*/
    return MEMORY[0x843120] + v42; /*0x7049b6*/
  if ( v46[284] ) /*0x704842*/
    return v42 + MEMORY[0x84311C]; /*0x70485e*/
  if ( (((unsigned __int8)(*ProgressTimer::GetValue(v18, &v59) >> 12) + 1) & 0xE) == 0xC /*0x70488d*/
    || (((unsigned __int8)(*ProgressTimer::GetValue(v18, &v59) >> 12) + 1) & 0xE) == 0 )
  {
    v61 = v28; /*0x7048e0*/
    v62 = v31; /*0x7048e4*/
    v63 = v43; /*0x7048e8*/
  }
  else
  {
    if ( (((unsigned __int8)(*ProgressTimer::GetValue(v18, &v59) >> 12) + 1) & 0xE) != 8 /*0x7048c0*/
      && (((unsigned __int8)(*ProgressTimer::GetValue(v18, &v59) >> 12) + 1) & 0xE) != 4 )
    {
      return v42 - 1; /*0x7048c0*/
    }
    v61 = v21; /*0x7048ce*/
    v62 = v44; /*0x7048d2*/
    v63 = v45; /*0x7048d6*/
  }
  if ( (*((_DWORD *)v46 + 80) & 0x10000) != 0 ) /*0x7048fb*/
    return v42 - 1; /*0x704999*/
  v35 = 0; /*0x704901*/
  v36 = &v61; /*0x704903*/
  do /*0x704918*/
  {
    if ( (*(_DWORD *)(*v36 + 320) & 0x10000) != 0 ) /*0x70490f*/
      return v42 - 1; /*0x704959*/
    ++v35; /*0x704911*/
    ++v36; /*0x704912*/
  }
  while ( v35 < 3 ); /*0x704918*/
  v37 = 0; /*0x70491a*/
  for ( i = &v61; ; ++i ) /*0x70491c*/
  {
    v39 = *(_DWORD *)(*i + 56); /*0x704927*/
    if ( v39 == 0xFFFF || v39 == 255 ) /*0x704936*/
      v40 = 0; /*0x704965*/
    else
      v40 = *(unsigned __int8 *)(*i + 282); /*0x704943*/
    TechnoClass::GetTileAnimationData(v40, &v60, &v53); /*0x704977*/
    if ( v53 > 36 ) /*0x704980*/
      break; /*0x704980*/
    if ( ++v37 >= 3 ) /*0x704989*/
      return v42 - 1; /*0x704989*/
  }
  return v42 - 2; /*0x7043d6*/
}


// ==== 0x007049C0  DrawTacticalMapLine  this=FootClass  sig=csp ====
char __stdcall DrawTacticalMapLine(
        FootClass *aP0,
        FootClass *aP1,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        char a8,
        char a9)
{
  int v9; // edx
  char v10; // bl
  int v11; // esi
  IUnknown *v12; // eax
  AbstractClass *v13; // eax
  int *v14; // eax
  int v15; // esi
  IUnknown *v16; // eax
  AbstractClass *v17; // eax
  int *v18; // eax
  int v19; // eax
  int v20; // esi
  IUnknown *v21; // eax
  AbstractClass *v22; // eax
  int *v23; // eax
  IUnknown *v24; // eax
  AbstractClass *v25; // eax
  int *v26; // eax
  int v27; // edi
  char result; // al
  AbstractClass aP2; // [esp+2Ch] [ebp-80h] BYREF
  int v30; // [esp+50h] [ebp-5Ch]
  int a2[9]; // [esp+54h] [ebp-58h] BYREF
  IUnknown *v42; // [esp+78h] [ebp-34h]
  int v33; // [esp+7Ch] [ebp-30h] BYREF
  int v34; // [esp+80h] [ebp-2Ch]
  int v35; // [esp+84h] [ebp-28h]
  int v36; // [esp+88h] [ebp-24h]
  _DWORD v37[4]; // [esp+8Ch] [ebp-20h] BYREF
  _DWORD v38[4]; // [esp+9Ch] [ebp-10h] BYREF

  Coord::To_Screen(*(_DWORD **)&stru_87C374.__pad_579C[22548], &aP0, (IUnknown *)&aP2.__pad_0[8]); /*0x7049dc*/
  Coord::To_Screen(*(_DWORD **)&stru_87C374.__pad_579C[22548], &a4, (IUnknown *)&aP2); /*0x7049f4*/
  v9 = *(_DWORD *)&stru_87C374.__pad_579C[21652]; /*0x7049fd*/
  v10 = a9; /*0x704a07*/
  *(_DWORD *)&aP2.__pad_0[12] += *(_DWORD *)&stru_87C374.__pad_579C[21652]; /*0x704a14*/
  *(_DWORD *)&aP2.__pad_0[4] += *(_DWORD *)&stru_87C374.__pad_579C[21652]; /*0x704a1f*/
  aP2.referenceCount = *(_DWORD *)&aP2.__pad_0[12] + 1; /*0x704a23*/
  aP2.nextArrayIndex = *(_DWORD *)&aP2.__pad_0[8]; /*0x704a30*/
  aP2.uniqueId = *(_DWORD *)aP2.__pad_0; /*0x704a36*/
  aP2.abstractFlags = *(_DWORD *)&aP2.__pad_0[4] + 1; /*0x704a3a*/
  if ( a9 ) /*0x704a43*/
  {
    if ( *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_14B0[7840] + 4) == 1 ) /*0x704a51*/
      v11 = **(unsigned __int8 **)(*(_DWORD *)&stru_87C374.__pad_14B0[7840] + 372); /*0x704a5d*/
    else
      v11 = **(unsigned __int16 **)(*(_DWORD *)&stru_87C374.__pad_14B0[7840] + 372); /*0x704a69*/
    v30 = -2; /*0x704a77*/
    aP2.NeedsSaveOrLink = (void *)-2; /*0x704a89*/
    v12 = (IUnknown *)Coord2D::Add(&aP2.NeedsSaveOrLink, (AbstractClass *)a2, (AbstractClass *)&aP2.nextArrayIndex); /*0x704a8d*/
    v13 = Rect::Construct(v37, v12, (AbstractClass *)3, (AbstractClass *)3); /*0x704a97*/
    a2[6] = *(_DWORD *)v13->__pad_0; /*0x704aa0*/
    a2[7] = *(_DWORD *)&v13->__pad_0[4]; /*0x704aa9*/
    a2[8] = *(_DWORD *)&v13->__pad_0[8]; /*0x704ab0*/
    v42 = *(IUnknown **)&v13->__pad_0[12]; /*0x704ac2*/
    v14 = ClipRectIntersection((IUnknown *)v38, (IUnknown *)&stru_87C374.__pad_579C[21648], (IUnknown *)&a2[6], 0, 0); /*0x704acc*/
    v33 = *v14; /*0x704ad4*/
    v34 = v14[1]; /*0x704adb*/
    v35 = v14[2]; /*0x704ae2*/
    v36 = v14[3]; /*0x704aef*/
    (*(void (__thiscall **)(_DWORD, int *, int))(**(_DWORD **)&stru_87C374.__pad_579C[22540] + 20))( /*0x704afa*/
      *(_DWORD *)&stru_87C374.__pad_579C[22540],
      &v33,
      v11);
    if ( *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_14B0[7840] + 4) == 1 ) /*0x704b05*/
      v15 = **(unsigned __int8 **)(*(_DWORD *)&stru_87C374.__pad_14B0[7840] + 372); /*0x704b11*/
    else
      v15 = **(unsigned __int16 **)(*(_DWORD *)&stru_87C374.__pad_14B0[7840] + 372); /*0x704b1d*/
    aP2.NeedsSaveOrLink = (void *)-2; /*0x704b29*/
    v30 = -2; /*0x704b2d*/
    v16 = (IUnknown *)Coord2D::Add(&aP2.NeedsSaveOrLink, (AbstractClass *)a2, (AbstractClass *)&aP2.uniqueId); /*0x704b41*/
    v17 = Rect::Construct(v38, v16, (AbstractClass *)3, (AbstractClass *)3); /*0x704b4e*/
    v33 = *(_DWORD *)v17->__pad_0; /*0x704b57*/
    v34 = *(_DWORD *)&v17->__pad_0[4]; /*0x704b60*/
    v35 = *(_DWORD *)&v17->__pad_0[8]; /*0x704b6c*/
    v36 = *(_DWORD *)&v17->__pad_0[12]; /*0x704b7c*/
    v18 = ClipRectIntersection((IUnknown *)v37, (IUnknown *)&stru_87C374.__pad_579C[21648], (IUnknown *)&v33, 0, 0); /*0x704b80*/
    a2[6] = *v18; /*0x704b88*/
    a2[7] = v18[1]; /*0x704b8f*/
    a2[8] = v18[2]; /*0x704b9c*/
    v42 = (IUnknown *)v18[3]; /*0x704ba3*/
    (*(void (__thiscall **)(_DWORD, int *, int))(**(_DWORD **)&stru_87C374.__pad_579C[22540] + 20))( /*0x704bae*/
      *(_DWORD *)&stru_87C374.__pad_579C[22540],
      &a2[6],
      v15);
    v9 = *(_DWORD *)&stru_87C374.__pad_579C[21652]; /*0x704bb1*/
  }
  a2[3] = v9; /*0x704bc2*/
  a2[2] = *(_DWORD *)&stru_87C374.__pad_579C[21648]; /*0x704bce*/
  a2[4] = *(_DWORD *)&stru_87C374.__pad_579C[21656]; /*0x704bd2*/
  a2[5] = *(_DWORD *)&stru_87C374.__pad_579C[21660]; /*0x704bd6*/
  if ( v10 && ClipLine((IUnknown *)&aP2.nextArrayIndex, &aP2.uniqueId, &a2[2]) ) /*0x704be9*/
  {
    if ( *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_14B0[7840] + 4) == 1 ) /*0x704bfa*/
      v19 = **(unsigned __int8 **)(*(_DWORD *)&stru_87C374.__pad_14B0[7840] + 372); /*0x704c04*/
    else
      v19 = **(unsigned __int16 **)(*(_DWORD *)&stru_87C374.__pad_14B0[7840] + 372); /*0x704c10*/
    (*(void (__thiscall **)(_DWORD, int *, int *, int))(**(_DWORD **)&stru_87C374.__pad_579C[22540] + 48))( /*0x704c26*/
      *(_DWORD *)&stru_87C374.__pad_579C[22540],
      &aP2.nextArrayIndex,
      &aP2.uniqueId,
      v19);
  }
  v20 = ((unsigned __int8)a7 >> stru_89E138.__pad_14B0[6124] << stru_89E138.__pad_14B0[6120]) /*0x704c89*/
      | (BYTE2(a7) >> stru_89E138.__pad_14B0[6132] << stru_89E138.__pad_14B0[6128])
      | (BYTE1(a7) >> stru_89E138.__pad_14B0[6140] << stru_89E138.__pad_14B0[6136]);
  aP2.NeedsSaveOrLink = (void *)-2; /*0x704c92*/
  v30 = -2; /*0x704c96*/
  v21 = (IUnknown *)Coord2D::Add(&aP2.NeedsSaveOrLink, (AbstractClass *)a2, (AbstractClass *)&aP2.__pad_0[8]); /*0x704ca4*/
  v22 = Rect::Construct(v38, v21, (AbstractClass *)3, (AbstractClass *)3); /*0x704cb1*/
  v33 = *(_DWORD *)v22->__pad_0; /*0x704cba*/
  v34 = *(_DWORD *)&v22->__pad_0[4]; /*0x704cc3*/
  v35 = *(_DWORD *)&v22->__pad_0[8]; /*0x704cca*/
  v36 = *(_DWORD *)&v22->__pad_0[12]; /*0x704cd9*/
  v23 = ClipRectIntersection((IUnknown *)v37, (IUnknown *)&stru_87C374.__pad_579C[21648], (IUnknown *)&v33, 0, 0); /*0x704ce3*/
  a2[6] = *v23; /*0x704ceb*/
  a2[7] = v23[1]; /*0x704cf2*/
  a2[8] = v23[2]; /*0x704cf9*/
  v42 = (IUnknown *)v23[3]; /*0x704d06*/
  (*(void (__thiscall **)(_DWORD, int *, int))(**(_DWORD **)&stru_87C374.__pad_579C[22540] + 20))( /*0x704d11*/
    *(_DWORD *)&stru_87C374.__pad_579C[22540],
    &a2[6],
    v20);
  aP2.NeedsSaveOrLink = (void *)-2; /*0x704d1d*/
  v30 = -2; /*0x704d21*/
  v24 = (IUnknown *)Coord2D::Add(&aP2.NeedsSaveOrLink, (AbstractClass *)a2, &aP2); /*0x704d35*/
  v25 = Rect::Construct(v38, v24, (AbstractClass *)3, (AbstractClass *)3); /*0x704d42*/
  v33 = *(_DWORD *)v25->__pad_0; /*0x704d49*/
  v34 = *(_DWORD *)&v25->__pad_0[4]; /*0x704d52*/
  v35 = *(_DWORD *)&v25->__pad_0[8]; /*0x704d5f*/
  v36 = *(_DWORD *)&v25->__pad_0[12]; /*0x704d70*/
  v26 = ClipRectIntersection((IUnknown *)v37, (IUnknown *)&stru_87C374.__pad_579C[21648], (IUnknown *)&v33, 0, 0); /*0x704d74*/
  a2[6] = *v26; /*0x704d7c*/
  a2[7] = v26[1]; /*0x704d83*/
  a2[8] = v26[2]; /*0x704d90*/
  v42 = (IUnknown *)v26[3]; /*0x704d97*/
  (*(void (__thiscall **)(_DWORD, int *, int))(**(_DWORD **)&stru_87C374.__pad_579C[22540] + 20))( /*0x704da2*/
    *(_DWORD *)&stru_87C374.__pad_579C[22540],
    &a2[6],
    v20);
  if ( a8 ) /*0x704dae*/
  {
    v27 = (0x7FFFFFFF - *(_DWORD *)&HouseClass_Player.__pad_5568[23248]) % 15; /*0x704dc9*/
    result = ClipLine((IUnknown *)&aP2.__pad_0[8], (int *)aP2.__pad_0, &a2[2]); /*0x704dd4*/
    if ( result ) /*0x704ddb*/
      return (*(char (__thiscall **)(_DWORD, char *, AbstractClass *, int, char *, int, _DWORD))(**(_DWORD **)&stru_87C374.__pad_579C[22540] /*0x704df8*/
                                                                                               + 76))(
               *(_DWORD *)&stru_87C374.__pad_579C[22540],
               &aP2.__pad_0[8],
               &aP2,
               v20,
               &stru_830620.__pad_579C[54124],
               v27,
               0);
  }
  else
  {
    result = ClipLine((IUnknown *)&aP2.__pad_0[8], (int *)aP2.__pad_0, &a2[2]); /*0x704e14*/
    if ( result ) /*0x704e1b*/
      return (*(char (__thiscall **)(_DWORD, char *, AbstractClass *, int))(**(_DWORD **)&stru_87C374.__pad_579C[22540] /*0x704e30*/
                                                                          + 48))(
               *(_DWORD *)&stru_87C374.__pad_579C[22540],
               &aP2.__pad_0[8],
               &aP2,
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
  Coord::To_Screen(MEMORY[0x887324], &a1, &v24); /*0x704e7d*/
  Coord::To_Screen(MEMORY[0x887324], &a4, &v21); /*0x704e95*/
  v22 += MEMORY[0x886FA4]; /*0x704ec3*/
  v25 += MEMORY[0x886FA4]; /*0x704ece*/
  v29 = v25 - 2; /*0x704eeb*/
  v28 = v24 - 2; /*0x704f13*/
  v7 = ((unsigned __int8)a7 >> MEMORY[0x8A0DD4] << MEMORY[0x8A0DD0]) /*0x704f1e*/
     | (BYTE1(a7) >> MEMORY[0x8A0DE4] << MEMORY[0x8A0DE0])
     | (BYTE2(a7) >> MEMORY[0x8A0DDC] << MEMORY[0x8A0DD8]);
  v8 = Rect::Construct(v45, &v28, 3, 3); /*0x704f25*/
  v34 = *v8; /*0x704f2e*/
  v35 = v8[1]; /*0x704f37*/
  v36 = v8[2]; /*0x704f3e*/
  v37 = v8[3]; /*0x704f50*/
  v9 = ClipRectIntersection(v46, &MEMORY[0x886FA0], &v34, 0, 0); /*0x704f5a*/
  v30 = *v9; /*0x704f61*/
  v31 = v9[1]; /*0x704f68*/
  v32 = v9[2]; /*0x704f6f*/
  v33 = v9[3]; /*0x704f7c*/
  (*(void (__thiscall **)(int, int *, int))(*(_DWORD *)MEMORY[0x88731C] + 20))(MEMORY[0x88731C], &v30, v7); /*0x704f88*/
  v29 = v22 - 2; /*0x704f9f*/
  v28 = v21 - 2; /*0x704fad*/
  v10 = Rect::Construct(v46, &v28, 3, 3); /*0x704fb1*/
  v30 = *v10; /*0x704fba*/
  v31 = v10[1]; /*0x704fc3*/
  v32 = v10[2]; /*0x704fca*/
  v33 = v10[3]; /*0x704fdc*/
  v11 = ClipRectIntersection(v45, &MEMORY[0x886FA0], &v30, 0, 0); /*0x704fe6*/
  v34 = *v11; /*0x704fee*/
  v35 = v11[1]; /*0x704ff5*/
  v36 = v11[2]; /*0x704ffc*/
  v37 = v11[3]; /*0x705009*/
  (*(void (__thiscall **)(int, int *, int))(*(_DWORD *)MEMORY[0x88731C] + 20))(MEMORY[0x88731C], &v34, v7); /*0x705014*/
  v44[0] = MEMORY[0x886FA0]; /*0x705028*/
  v44[1] = MEMORY[0x886FA4]; /*0x705031*/
  v44[2] = MEMORY[0x886FA8]; /*0x705035*/
  v44[3] = MEMORY[0x886FAC]; /*0x705039*/
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
    Coord::To_Screen(MEMORY[0x887324], &v41, &v24); /*0x70512f*/
    Coord::To_Screen(MEMORY[0x887324], &v38, &v21); /*0x705144*/
    v25 += MEMORY[0x886FA4]; /*0x705158*/
    v22 += MEMORY[0x886FA4]; /*0x70516b*/
    if ( ClipLine(&v24, &v21, v44) ) /*0x70516f*/
    {
      v20 = BYTE2(a7); /*0x70518f*/
      v19 = a7; /*0x705195*/
      if ( (((_WORD)v16 - (_WORD)v28) & 0x1F8u) <= 0xF8 && (((_WORD)v16 - (_WORD)v28) & 0x1F8) != 0 ) /*0x7051aa*/
        Color::Lerp((unsigned __int8 *)&v19, (v16 - v28) & 0xF8, (unsigned __int8 *)&v26); /*0x7051b6*/
      (*(void (__thiscall **)(int, int *, int *, int))(*(_DWORD *)MEMORY[0x88731C] + 48))( /*0x705226*/
        MEMORY[0x88731C],
        &v24,
        &v21,
        ((unsigned __int8)v19 >> MEMORY[0x8A0DD4] << MEMORY[0x8A0DD0])
      | (HIBYTE(v19) >> MEMORY[0x8A0DE4] << MEMORY[0x8A0DE0])
      | (v20 >> MEMORY[0x8A0DDC] << MEMORY[0x8A0DD8]));
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
  Coord::To_Screen(MEMORY[0x887324], &a1, &v29); /*0x70529b*/
  Coord::To_Screen(MEMORY[0x887324], &a4, &v33); /*0x7052b3*/
  v30 += MEMORY[0x886FA4]; /*0x7052ce*/
  v34 += MEMORY[0x886FA4]; /*0x70530d*/
  v8 = ((unsigned __int8)a7 >> MEMORY[0x8A0DD4] << MEMORY[0x8A0DD0]) /*0x705348*/
     | (BYTE2(a7) >> MEMORY[0x8A0DDC] << MEMORY[0x8A0DD8])
     | (BYTE1(a7) >> MEMORY[0x8A0DE4] << MEMORY[0x8A0DE0]);
  v27 = (unsigned __int8)word_A83CDA; /*0x705363*/
  v43[0] = v29; /*0x70538d*/
  v9 = (HIBYTE(word_A83CDA) >> MEMORY[0x8A0DDC] << MEMORY[0x8A0DD8]) /*0x705397*/
     | ((unsigned __int8)word_A83CDA >> MEMORY[0x8A0DE4] << MEMORY[0x8A0DE0])
     | ((unsigned __int8)byte_A83CD9 >> MEMORY[0x8A0DD4] << MEMORY[0x8A0DD0]);
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
    v13 = ClipRectIntersection(v54, &MEMORY[0x886FA0], &v39, 0, 0); /*0x705428*/
    v35 = *v13; /*0x705430*/
    v36 = v13[1]; /*0x705437*/
    v37 = v13[2]; /*0x70543e*/
    v38 = v13[3]; /*0x70544b*/
    (*(void (__thiscall **)(int, int *, int))(*(_DWORD *)MEMORY[0x88731C] + 20))(MEMORY[0x88731C], &v35, v8); /*0x705456*/
    v27 = -2; /*0x705462*/
    v28 = -2; /*0x705466*/
    v14 = Coord2D::Add(&v27, v52, v44); /*0x70547d*/
    v15 = Rect::Construct(v54, v14, 3, 3); /*0x70548a*/
    v35 = *v15; /*0x705493*/
    v36 = v15[1]; /*0x70549c*/
    v37 = v15[2]; /*0x7054a8*/
    v38 = v15[3]; /*0x7054bb*/
    v16 = ClipRectIntersection(v53, &MEMORY[0x886FA0], &v35, 0, 0); /*0x7054bf*/
    v39 = *v16; /*0x7054c6*/
    v40 = v16[1]; /*0x7054cd*/
    v41 = v16[2]; /*0x7054d4*/
    v42 = v16[3]; /*0x7054e1*/
    (*(void (__thiscall **)(int, int *, int))(*(_DWORD *)MEMORY[0x88731C] + 20))(MEMORY[0x88731C], &v39, v9); /*0x7054ed*/
  }
  v51[0] = MEMORY[0x886FA0]; /*0x705501*/
  v51[1] = MEMORY[0x886FA4]; /*0x70550b*/
  v51[2] = MEMORY[0x886FA8]; /*0x705511*/
  v51[3] = MEMORY[0x886FAC]; /*0x705518*/
  if ( v10 && ClipLine(v43, v44, v51) ) /*0x70552e*/
  {
    if ( *(_DWORD *)(MEMORY[0x87F6C4] + 4) == 1 ) /*0x705540*/
      v17 = **(unsigned __int8 **)(MEMORY[0x87F6C4] + 372); /*0x70554c*/
    else
      v17 = **(unsigned __int16 **)(MEMORY[0x87F6C4] + 372); /*0x705558*/
    (*(void (__thiscall **)(int, int *, int *, int))(*(_DWORD *)MEMORY[0x88731C] + 48))(MEMORY[0x88731C], v43, v44, v17); /*0x70556e*/
  }
  v27 = v29 - 2; /*0x705583*/
  v28 = v30 - 2; /*0x70558b*/
  v18 = Rect::Construct(v54, &v27, 3, 3); /*0x705597*/
  v35 = *v18; /*0x7055a0*/
  v36 = v18[1]; /*0x7055a9*/
  v37 = v18[2]; /*0x7055b0*/
  v38 = v18[3]; /*0x7055c2*/
  v19 = ClipRectIntersection(v53, &MEMORY[0x886FA0], &v35, 0, 0); /*0x7055cc*/
  v39 = *v19; /*0x7055d4*/
  v40 = v19[1]; /*0x7055db*/
  v41 = v19[2]; /*0x7055e2*/
  v42 = v19[3]; /*0x7055ef*/
  (*(void (__thiscall **)(int, int *, int))(*(_DWORD *)MEMORY[0x88731C] + 20))(MEMORY[0x88731C], &v39, v9); /*0x7055fa*/
  v28 = v34 - 2; /*0x705611*/
  v27 = v33 - 2; /*0x70561f*/
  v20 = Rect::Construct(v54, &v27, 3, 3); /*0x705623*/
  v35 = *v20; /*0x70562c*/
  v36 = v20[1]; /*0x705635*/
  v37 = v20[2]; /*0x70563c*/
  v38 = v20[3]; /*0x70564e*/
  v21 = ClipRectIntersection(v53, &MEMORY[0x886FA0], &v35, 0, 0); /*0x705658*/
  v39 = *v21; /*0x705660*/
  v40 = v21[1]; /*0x705667*/
  v41 = v21[2]; /*0x70566e*/
  v42 = v21[3]; /*0x70567b*/
  (*(void (__thiscall **)(int, int *, int))(*(_DWORD *)MEMORY[0x88731C] + 20))(MEMORY[0x88731C], &v39, v8); /*0x705686*/
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
    Coord::To_Screen(MEMORY[0x887324], &v45, &v29); /*0x705732*/
    Coord::To_Screen(MEMORY[0x887324], &v48, &v33); /*0x705747*/
    v30 += MEMORY[0x886FA4]; /*0x705761*/
    v34 += MEMORY[0x886FA4]; /*0x70576e*/
    if ( ClipLine(&v29, &v33, v51) ) /*0x705772*/
    {
      v31 = a7; /*0x705794*/
      v32 = BYTE2(a7); /*0x705799*/
      v25 = v24; /*0x70579d*/
      if ( v24 >= 254 ) /*0x70579f*/
        v25 = -2; /*0x7057a1*/
      Color::Lerp((unsigned __int8 *)&v31, v25, (unsigned __int8 *)&byte_A83CD9); /*0x7057b0*/
      (*(void (__thiscall **)(int, int *, int *, int))(*(_DWORD *)MEMORY[0x88731C] + 48))( /*0x70581e*/
        MEMORY[0x88731C],
        &v29,
        &v33,
        ((unsigned __int8)v31 >> MEMORY[0x8A0DD4] << MEMORY[0x8A0DD0])
      | (HIBYTE(v31) >> MEMORY[0x8A0DE4] << MEMORY[0x8A0DE0])
      | (v32 >> MEMORY[0x8A0DDC] << MEMORY[0x8A0DD8]));
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


// ==== 0x00705860  TechnoClass::DrawAirstrikeFlare_SetContext  this=TechnoClass  sig=csp ====
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

  Coord::To_Screen(MEMORY[0x887324], &a1, &v41); /*0x705875*/
  Coord::To_Screen(MEMORY[0x887324], &a4, &v31); /*0x70588a*/
  v6 = -32 - ZCoordToScreenY(a3); /*0x7058a4*/
  v7 = -32 - ZCoordToScreenY(a6); /*0x7058b4*/
  v28 = abs32(v31 - v41); /*0x7058c5*/
  v8 = *(_DWORD *)MEMORY[0x887314]; /*0x7058da*/
  v27 = abs32(v32 - v42); /*0x7058dc*/
  result = (*(int (__thiscall **)(int))(v8 + 132))(MEMORY[0x887314]); /*0x7058e0*/
  if ( (_BYTE)result ) /*0x7058e8*/
  {
    v10 = (int *)MEMORY[0x887314]; /*0x7058f0*/
    v11 = Random::Range(MEMORY[0x886B88], 190, 270); /*0x705905*/
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
      v14 = 255 >> MEMORY[0x8A0DD4] << MEMORY[0x8A0DD0]; /*0x7059c5*/
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
      AudioStream::DrawWaveform(v10, &MEMORY[0x886FA0], &v35, &v33, &v20, v25 / 4 + 255, v6, v18); /*0x705b34*/
      if ( v28 <= v27 ) /*0x705b43*/
      {
        v39 = v35 + 1; /*0x705bc8*/
        v40 = v36; /*0x705bd1*/
        v37 = v33 + 1; /*0x705bd6*/
        v38 = v34; /*0x705bdf*/
        AudioStream::DrawWaveform(v10, &MEMORY[0x886FA0], &v39, &v37, &v20, v17, v6, v18); /*0x705bf6*/
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
        AudioStream::DrawWaveform(v10, &MEMORY[0x886FA0], &v39, &v37, &v20, v17, v6, v18); /*0x705b80*/
        v39 = v35; /*0x705b91*/
        v40 = v36 - 1; /*0x705b9a*/
        v37 = v33; /*0x705ba0*/
        v38 = v34 - 1; /*0x705ba9*/
      }
      AudioStream::DrawWaveform(v10, &MEMORY[0x886FA0], &v39, &v37, &v20, v17, v6, v18); /*0x705bb9*/
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
int __thiscall BuildingClass::_vt267(#377 *this)
{
  int v2; // ecx
  _DWORD *v3; // ecx
  _DWORD *v5; // esi
  _BYTE v6[12]; // [esp+4h] [ebp-Ch] BYREF
  _DWORD *v7; // [esp+14h] [ebp+4h]

  if ( (*(int (__thiscall **)(#377 *))(this->targetingTimer_e)(this) == 1 && (v2 = this->sprayOffsetIndex_e) != 0 ) /*0x705cbb*/
  {
    v3 = (_DWORD *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)v2 + 88))(v2, v6); /*0x705cc7*/
    *v7 = *v3; /*0x705cd1*/
    v7[1] = v3[1]; /*0x705cd6*/
    v7[2] = v3[2]; /*0x705cdd*/
    return (int)v7; /*0x705cc9*/
  }
  else
  {
    v5 = (_DWORD *)((char *)this + 156); /*0x705cea*/
    *v7 = *v5; /*0x705cf4*/
    v7[1] = v5[1]; /*0x705cf9*/
    v7[2] = v5[2]; /*0x705d00*/
    return (int)v7; /*0x705ce6*/
  }
}


// ==== 0x00705D10  BuildingClass::SetType  this=AbstractClass  sig=csp ====
int __thiscall BuildingClass_SetType(_DWORD *this, int a2)
{
  this->q514 = a2; /*0x705d14*/
  return a2; /*0x705d1a*/
}


// ==== 0x00705D20  BuildingClass::GetType  this=AbstractClass  sig=csp ====
int __thiscall BuildingClass_GetType(_DWORD *this)
{
  return this->q514; /*0x705d26*/
}


// ==== 0x00705D50  TechnoClass::IsNotBusy  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::IsNotBusy(#377 *this)
{
  int result; // eax

  result = (*(int (__thiscall **)(#377 *))(this->drainingMe)(this); /*0x705d52*/
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
int __thiscall TechnoClass::GetBuildAnim(#377 *this)
{
  int v2; // eax
  int v3; // edi

  v2 = *(_DWORD *)((*(int (__thiscall **)(#377 *))(this->hasParachute)(this) + 3568); /*0x705d82*/
  v3 = *(_DWORD *)(this->Owner + 90196); /*0x705d8a*/
  if ( v2 ) /*0x705d90*/
    return *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(v2 + 4) + 4 * v3) + 780); /*0x705d9a*/
  if ( (*(unsigned __int8 (__thiscall **)(#377 *, #375 *))(this->currentTargetThreatValues)(this, HouseClass_Player) /*0x705dbb*/
    || !(*(int (__thiscall **)(#377 *, int))(this->q0D0)(this, 1) )
  {
    return *(_DWORD *)(*((_DWORD *)MEMORY[0xB054D4] + v3) + 780); /*0x705df3*/
  }
  return *(_DWORD *)(*((_DWORD *)MEMORY[0xB054D4] /*0x705d98*/
                     + *(_DWORD *)((*(int (__thiscall **)(#377 *, int))(this->q0D0)(this, 1) + 90196))
                   + 780);
}


// ==== 0x00706640  TechnoClass::UpdateState  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::UpdateState(#377 *this)
{
  AbstractClass *v1; // edi
  int v3; // esi
  int result; // eax
  int v5; // eax
  BuildingTypeClass *v6; // edi
  BuildingTypeClass *v7; // eax
  int v8; // ebx
  _DWORD *v9; // eax
  size_t v10; // eax
  __int16 **v11; // eax
  __int16 *v12; // eax
  void *v13; // eax
  int v14; // edx
  int v15; // esi
  FootClass *v16; // ecx
  TechnoClass *v17; // eax
  TechnoClass *v18; // edx
  AbstractClass *v19; // esi
  BSurface *Miles; // eax
  int v21; // eax
  int v22; // edi
  int v23; // esi
  int v24; // eax
  int v25; // ecx
  int v26; // eax
  _DWORD *v27; // edx
  int v28; // eax
  BSurface *v29; // eax
  int v30; // ebp
  int v31; // edi
  int v32; // ebp
  TechnoClass *v33; // esi
  int v34; // eax
  int v35; // ecx
  int v36; // eax
  _DWORD *v37; // edx
  int v38; // eax
  int v39; // eax
  _BYTE v40[4]; // [esp+10h] [ebp-40h] BYREF
  TechnoClass *v41; // [esp+14h] [ebp-3Ch]
  int Height; // [esp+18h] [ebp-38h]
  int LockCount; // [esp+1Ch] [ebp-34h]
  int v44[4]; // [esp+28h] [ebp-28h] BYREF
  int v45[6]; // [esp+38h] [ebp-18h] BYREF
  _DWORD *v46; // [esp+54h] [ebp+4h]
  unsigned int v47; // [esp+58h] [ebp+8h]
  IUnknown aP1; // [esp+5Ch] [ebp+Ch] BYREF

  v1 = (AbstractClass *)aP1.field_1C; /*0x706647*/
  v3 = 0x2000; /*0x70664f*/
  if ( !aP1.field_1C ) /*0x706654*/
  {
    result = (*(int (__thiscall **)(#377 *, _DWORD, _DWORD))(this->bombVisible)(this, 0, 0) - 1; /*0x70665e*/
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
        if ( this->owner ) /*0x70666b*/
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
  if ( ((*(unsigned __int8 (__thiscall **)(#377 *))(this->drainTarget)(this)
     || (*(unsigned __int8 (__thiscall **)(#377 *))(this->drainingMe)(this))
    && ((*(int (__thiscall **)(#377 *))(this->fallRate)(this) != 1 || !this->q6D3) )
  {
    if ( this
      && (*(int (__thiscall **)(#377 *))(this->fallRate)(this) == 6
      && *(_BYTE *)(*((*(int (__thiscall **)(#377 *))(this->fallRate)(this) == 6
                    ? (_DWORD *)((char *)this + 1312)
                    : (_DWORD *)1312)
                  + 5809) )
    {
      v3 |= 0x2006u; /*0x7066f8*/
    }
    else
    {
      v3 |= 0x2004u; /*0x706700*/
    }
  }
  if ( (unsigned __int8)House::IsHumanPlayer(*((#375 **)this + 135)) /*0x706731*/
    && (*(unsigned __int8 (__thiscall **)(#377 *))(this->missionData)(this)
    && ((*(int (__thiscall **)(#377 *))(this->fallRate)(this) != 1 || !this->q6D3) )
  {
    v3 = (*(int (__thiscall **)(#377 *, int))(this->grindingAnimHandle)(this, v3); /*0x706747*/
  }
  v44[0] = *(_DWORD *)aP1.field_8; /*0x706759*/
  aP1.field_1C = ~(unsigned int)v1 & (v3 | 0x800); /*0x70675d*/
  v44[1] = *(_DWORD *)(aP1.field_8 + 4); /*0x706764*/
  v44[2] = *(_DWORD *)(aP1.field_8 + 8); /*0x70676b*/
  v5 = *(_DWORD *)this; /*0x706776*/
  v44[3] = *(_DWORD *)(aP1.field_8 + 12); /*0x70677c*/
  v6 = (BuildingTypeClass *)(*(int (__thiscall **)(#377 *, _DWORD))(v5 + 1124))(this, *(_DWORD *)&aP1.__pad_10[4]); /*0x70678b*/
  if ( (*(unsigned __int8 (__thiscall **)(#377 *))(this->q160)(this)
    || this
    && (*(int (__thiscall **)(#377 *))(this->fallRate)(this) == 6
    && this->owningHouseIndex0
    && *(_DWORD *)(this->owningHouseIndex0 + 80) == ((*(int (__thiscall **)(#377 *))(this->fallRate)(this) == 6
                                                   ? (unsigned int)this
                                                   : 0) )
  {
    v7 = TechnoClass::InvulnerabilityIntensity_SetContext(this, v6); /*0x7067d5*/
    v6 = TechnoClass::CalcFlashAlpha(this, v7); /*0x7067e2*/
  }
  v8 = aP1.field_4; /*0x7067e8*/
  if ( aP1.field_0 != -1 ) /*0x7067f1*/
  {
    if ( !aP1.field_4 || *(_BYTE *)((*(int (__thiscall **)(#377 *))(this->hasParachute)(this) + 3518) ) /*0x706806*/
    {
      aP1.field_0 = -1; /*0x706875*/
      goto LABEL_41; /*0x706875*/
    }
    if ( *(_DWORD *)(v8 + 4) ) /*0x706810*/
    {
      v9 = *(_DWORD **)(v8 + 16); /*0x706817*/
      if ( v9 && *v9 == aP1.field_0 ) /*0x706826*/
        goto LABEL_36; /*0x706826*/
      v10 = SortedStateVector::BinarySearch((char **)v8, &aP1); /*0x70682f*/
      if ( v10 ) /*0x706836*/
      {
        *(_DWORD *)(v8 + 16) = v10; /*0x706838*/
LABEL_36:
        v11 = (__int16 **)(*(_DWORD *)(v8 + 16) + 4); /*0x70683b*/
        goto LABEL_38; /*0x706841*/
      }
    }
    v11 = (__int16 **)&unk_B78824; /*0x706843*/
LABEL_38:
    v12 = *v11; /*0x706848*/
    if ( v12 ) /*0x70684c*/
    {
      Surface::BlitTechnoTo( /*0x706866*/
        this,
        v12,
        (TechnoClass *)aP1.field_C,
        (TechnoClass *)v44,
        (TechnoClass *)aP1.field_1C,
        (AbstractClass *)v6,
        *(TechnoClass **)&aP1.__pad_10[8]);
      return result; /*0x706872*/
    }
  }
LABEL_41:
  result = (int)v46; /*0x706879*/
  if ( !*v46 || !v46[1] ) /*0x706886*/
    return result; /*0x706886*/
  v13 = RenderTechnoClassVoxel( /*0x7068bb*/
          (int *)this,
          (int)v40,
          v40,
          v46,
          *(const void **)aP1.__pad_10,
          aP1.field_C,
          v44,
          v47,
          aP1.field_1C,
          (int)v6,
          *(int *)&aP1.__pad_10[8]);
  v14 = *(_DWORD *)this; /*0x7068c0*/
  qmemcpy(v45, v13, sizeof(v45)); /*0x7068ce*/
  v15 = v45[4]; /*0x7068d0*/
  aP1.field_1C = v45[4]; /*0x7068da*/
  *(_DWORD *)&aP1.__pad_10[8] = v45[5]; /*0x7068de*/
  result = (*(int (__thiscall **)(#377 *))(v14 + 44))(this); /*0x7068e2*/
  if ( result == 1 ) /*0x7068e8*/
  {
    v16 = (FootClass *)(v45[1] + *(_DWORD *)(aP1.field_C + 4)); /*0x7068ff*/
    v17 = (TechnoClass *)(v45[0] + *(_DWORD *)aP1.field_C); /*0x706907*/
    if ( aP6.Height <= 0 || aP6.LockCount <= 0 ) /*0x706919*/
    {
      v18 = (TechnoClass *)(v45[0] + *(_DWORD *)aP1.field_C); /*0x7069d7*/
      result = v15; /*0x7069d9*/
      v19 = *(AbstractClass **)&aP1.__pad_10[8]; /*0x7069db*/
    }
    else if ( v15 <= 0 || *(int *)&aP1.__pad_10[8] <= 0 ) /*0x70692d*/
    {
      v18 = *(TechnoClass **)aP6.__pad_0; /*0x7069c1*/
      v16 = (FootClass *)aP6.Width; /*0x7069c7*/
      v19 = (AbstractClass *)aP6.LockCount; /*0x7069cd*/
      result = aP6.Height; /*0x7069d3*/
    }
    else
    {
      v18 = *(TechnoClass **)aP6.__pad_0; /*0x706933*/
      Height = aP6.Height; /*0x70693f*/
      v41 = (TechnoClass *)aP6.Width; /*0x70694b*/
      LockCount = aP6.LockCount; /*0x70694f*/
      if ( *(int *)aP6.__pad_0 > (int)v17 ) /*0x706953*/
      {
        v18 = v17; /*0x70695d*/
        Height += *(_DWORD *)aP6.__pad_0 - (_DWORD)v17; /*0x70695f*/
      }
      if ( aP6.Width > (int)v16 ) /*0x706965*/
      {
        v41 = (TechnoClass *)v16; /*0x70696f*/
        LockCount += aP6.Width - (_DWORD)v16; /*0x706973*/
      }
      if ( (int)&v18->__pad_0[Height] < (int)&v17->__pad_0[aP1.field_1C] ) /*0x706985*/
        Height = (char *)v17 - (char *)v18 + aP1.field_1C + 1; /*0x706991*/
      v19 = (AbstractClass *)LockCount; /*0x706995*/
      if ( (int)&v41->__pad_0[LockCount] < (int)&v16->__pad_0[*(_DWORD *)&aP1.__pad_10[8]] ) /*0x7069a7*/
        v19 = (AbstractClass *)((char *)v16 - (char *)v41 + *(_DWORD *)&aP1.__pad_10[8] + 1); /*0x7069b3*/
      v16 = (FootClass *)v41; /*0x7069b7*/
      result = Height; /*0x7069bb*/
    }
    *(_DWORD *)aP6.__pad_0 = v18; /*0x7069df*/
    aP6.Width = (int)v16; /*0x7069e5*/
    aP6.Height = result; /*0x7069eb*/
    aP6.LockCount = (int)v19; /*0x7069f0*/
  }
  if ( aP1.field_0 == -1 ) /*0x7069fb*/
    return result; /*0x7069fb*/
  Miles = Miles::DriverGet(); /*0x706a06*/
  aP1.field_C = Buffer::AppendCellData(&stru_87C374.__pad_579C[22864], (AbstractClass *)Miles, (int)v45); /*0x706a18*/
  if ( aP1.field_C ) /*0x706a1c*/
  {
    v21 = *(_DWORD *)(v8 + 8); /*0x706a25*/
    if ( *(_DWORD *)(v8 + 4) + 1 <= v21 ) /*0x706a2b*/
    {
LABEL_70:
      *(_DWORD *)(*(_DWORD *)v8 + 8 * *(_DWORD *)(v8 + 4)) = aP1.field_0; /*0x706ab7*/
      *(_DWORD *)(*(_DWORD *)v8 + 8 * *(_DWORD *)(v8 + 4) + 4) = aP1.field_C; /*0x706acc*/
LABEL_82:
      v39 = *(_DWORD *)(v8 + 4); /*0x706ba2*/
      *(_BYTE *)(v8 + 12) = 0; /*0x706ba5*/
      result = v39 + 1; /*0x706ba9*/
      *(_DWORD *)(v8 + 4) = result; /*0x706baa*/
      return result; /*0x706baa*/
    }
    if ( v21 ) /*0x706a33*/
    {
      *(_DWORD *)&aP1.__pad_10[8] = *(_DWORD *)(v8 + 8); /*0x706a41*/
      if ( v21 < 0 ) /*0x706a45*/
        goto LABEL_71; /*0x706a45*/
    }
    else
    {
      *(_DWORD *)&aP1.__pad_10[8] = 10; /*0x706a35*/
    }
    v22 = v21 + *(_DWORD *)&aP1.__pad_10[8]; /*0x706a4f*/
    v23 = __2_YAPAXI_Z(8 * (v21 + *(_DWORD *)&aP1.__pad_10[8])); /*0x706a5f*/
    if ( v23 ) /*0x706a66*/
    {
      v24 = *(_DWORD *)(v8 + 4); /*0x706a68*/
      v25 = 0; /*0x706a6c*/
      aP1.field_1C = v22 - 1; /*0x706a6e*/
      if ( v24 > 0 ) /*0x706a74*/
      {
        do /*0x706a95*/
        {
          v26 = 8 * v25; /*0x706a78*/
          v27 = (_DWORD *)(*(_DWORD *)v8 + 8 * v25++); /*0x706a81*/
          *(_DWORD *)(v26 + v23) = *v27; /*0x706a86*/
          *(_DWORD *)(v26 + v23 + 4) = v27[1]; /*0x706a8c*/
        }
        while ( v25 < *(_DWORD *)(v8 + 4) ); /*0x706a95*/
      }
      __3_YAXPAX_Z(*(void **)v8); /*0x706a9a*/
      v28 = *(_DWORD *)&aP1.__pad_10[8] + *(_DWORD *)(v8 + 8); /*0x706aa9*/
      *(_DWORD *)v8 = v23; /*0x706aab*/
      *(_DWORD *)(v8 + 8) = v28; /*0x706aad*/
      *(_DWORD *)(v8 + 16) = 0; /*0x706ab0*/
      goto LABEL_70; /*0x706ab0*/
    }
  }
LABEL_71:
  (*(void (__thiscall **)(#377 *))(this->parachute)(this); /*0x706ad5*/
  TechnoClass::ClearArrays(); /*0x706ae0*/
  result = aP1.field_C; /*0x706ae5*/
  if ( !aP1.field_C ) /*0x706aeb*/
  {
    v29 = Miles::DriverGet(); /*0x706af2*/
    result = Buffer::AppendCellData(&stru_87C374.__pad_579C[22864], (AbstractClass *)v29, (int)v45); /*0x706afd*/
    aP1.field_C = result; /*0x706b02*/
  }
  v30 = *(_DWORD *)(v8 + 8); /*0x706b09*/
  if ( *(_DWORD *)(v8 + 4) + 1 <= v30 ) /*0x706b0f*/
    goto LABEL_81; /*0x706b0f*/
  if ( v30 ) /*0x706b13*/
  {
    v31 = *(_DWORD *)(v8 + 8); /*0x706b1c*/
    if ( v30 < 0 ) /*0x706b20*/
      return result; /*0x706b20*/
  }
  else
  {
    v31 = 10; /*0x706b15*/
  }
  v32 = v31 + v30; /*0x706b26*/
  result = __2_YAPAXI_Z(8 * v32); /*0x706b30*/
  v33 = (TechnoClass *)result; /*0x706b35*/
  if ( result ) /*0x706b3c*/
  {
    v34 = *(_DWORD *)(v8 + 4); /*0x706b3e*/
    v35 = 0; /*0x706b42*/
    *(_DWORD *)&aP1.__pad_10[8] = v32 - 1; /*0x706b44*/
    if ( v34 > 0 ) /*0x706b4a*/
    {
      do /*0x706b6b*/
      {
        v36 = 8 * v35; /*0x706b4e*/
        v37 = (_DWORD *)(*(_DWORD *)v8 + 8 * v35++); /*0x706b57*/
        *(_DWORD *)&v33->__pad_0[v36] = *v37; /*0x706b5c*/
        *(_DWORD *)&v33->__pad_0[v36 + 4] = v37[1]; /*0x706b62*/
      }
      while ( v35 < *(_DWORD *)(v8 + 4) ); /*0x706b6b*/
    }
    __3_YAXPAX_Z(*(void **)v8); /*0x706b70*/
    v38 = *(_DWORD *)(v8 + 8); /*0x706b75*/
    *(_DWORD *)v8 = v33; /*0x706b7d*/
    *(_DWORD *)(v8 + 8) = v31 + v38; /*0x706b7f*/
    *(_DWORD *)(v8 + 16) = 0; /*0x706b82*/
LABEL_81:
    *(_DWORD *)(*(_DWORD *)v8 + 8 * *(_DWORD *)(v8 + 4)) = aP1.field_0; /*0x706b89*/
    *(_DWORD *)(*(_DWORD *)v8 + 8 * *(_DWORD *)(v8 + 4) + 4) = aP1.field_C; /*0x706b9e*/
    goto LABEL_82; /*0x706b9e*/
  }
  return result; /*0x70686b*/
}


// ==== 0x00706BD0  ObjectClass::QueueTechnoVoiceLine  this=TechnoClass  sig=csp ====
int __thiscall QueueTechnoVoiceLine(
        int *this,
        TechnoClass *aP1,
        TechnoClass *aP2,
        TechnoClass *aP3,
        TechnoClass *aP4,
        TechnoClass *aP5,
        TechnoClass *aP6,
        TechnoClass *aP7,
        TechnoClass *aP8,
        TechnoClass *aP9,
        TechnoClass *aP10,
        TechnoClass *aP11)
{
  AbstractClass *result; // eax
  TechnoClass *v14; // ebx
  TechnoClass *v15; // ecx
  ObjectClass *v16; // eax
  int v17; // edx
  int v18; // ecx
  int v19; // eax
  __int16 **v20; // eax
  __int16 *v21; // eax
  BSurface *Miles; // eax
  TechnoClass *appended; // esi
  TechnoClass *v22; // eax
  int v25; // ebx
  TechnoClass *v24; // esi
  int i; // ecx
  int v28; // eax
  _DWORD *v29; // edx
  int eax30; // eax
  int *edi31; // edi
  int v32; // eax
  BSurface *v30; // eax
  TechnoClass *v31; // eax
  int v35; // eax
  TechnoClass *v37; // [esp+14h] [ebp-38h] BYREF
  int v38[6]; // [esp+1Ch] [ebp-30h] BYREF
  _BYTE v39[24]; // [esp+34h] [ebp-18h] BYREF
  TechnoClass *aP8a; // [esp+6Ch] [ebp+20h]

  result = (AbstractClass *)this->parachute; /*0x706bdd*/
  if ( result ) /*0x706be5*/
    return (int)result->__pad_0; /*0x706be5*/
  result = (AbstractClass *)(*(int (__thiscall **)(int *))(*this + 132))(this); /*0x706bed*/
  if ( LOBYTE(result[96].nextArrayIndex) || **(_BYTE **)aP1->__pad_0 ) /*0x706c07*/
    return (int)result->__pad_0; /*0x706c0a*/
  v14 = aP3; /*0x706c10*/
  if ( aP3 == (TechnoClass *)-1 ) /*0x706c1b*/
  {
LABEL_21:
    result = (AbstractClass *)RenderTechnoOverlaySHP( /*0x706ced*/
                                this,
                                (TechnoClass *)v39,
                                (int)aP1,
                                aP7,
                                (int)aP6,
                                aP5,
                                aP2,
                                8193,
                                &v14->__pad_0[1] != 0,
                                aP9,
                                aP10,
                                (int)aP11);
    qmemcpy(v38, result, sizeof(v38)); /*0x706d3a*/
    if ( v14 == (TechnoClass *)-1 ) /*0x706d3c*/
      return (int)result->__pad_0; /*0x706d3c*/
    Miles = Miles::DriverGet(); /*0x706d47*/
    appended = (TechnoClass *)Buffer::AppendCellData( /*0x706d57*/
                                &MEMORY[0x87F8E4].__pad_5568[9748],
                                (AbstractClass *)Miles,
                                (int)v38);
    aP8a = appended; /*0x706d5b*/
    if ( !appended ) /*0x706d5f*/
      goto LABEL_34; /*0x706d5f*/
    v22 = *(TechnoClass **)&aP4->__pad_0[8]; /*0x706d68*/
    if ( *(_DWORD *)&aP4->__pad_0[4] + 1 <= (int)v22 ) /*0x706d6e*/
    {
LABEL_31:
      edi31 = this; /*0x706df8*/
      *(_DWORD *)(*(_DWORD *)aP4->__pad_0 + 8 * *(_DWORD *)&aP4->__pad_0[4]) = v14; /*0x706e02*/
      *(_DWORD *)(*(_DWORD *)aP4->__pad_0 + 8 * *(_DWORD *)&aP4->__pad_0[4] + 4) = appended; /*0x706e0b*/
      v32 = *(_DWORD *)&aP4->__pad_0[4] + 1; /*0x706e12*/
      aP4->__pad_0[12] = 0; /*0x706e13*/
      *(_DWORD *)&aP4->__pad_0[4] = v32; /*0x706e17*/
      return QueueTechnoVoiceLine(edi31, aP1, aP2, v14, aP4, aP5, aP6, aP7, 0, 0, 0, 0); /*0x706ebf*/
    }
    if ( v22 ) /*0x706d76*/
    {
      v25 = *(_DWORD *)&aP4->__pad_0[8]; /*0x706d7f*/
      if ( (int)v22 < 0 ) /*0x706d83*/
      {
        v14 = aP3; /*0x706e26*/
        goto LABEL_34; /*0x706e26*/
      }
    }
    else
    {
      v25 = 10; /*0x706d78*/
    }
    v24 = (TechnoClass *)__2_YAPAXI_Z(8 * ((_DWORD)v22 + v25)); /*0x706d99*/
    if ( v24 ) /*0x706da0*/
    {
      for ( i = 0; i < *(_DWORD *)&aP4->__pad_0[4]; *(_DWORD *)&v24->__pad_0[v28 + 4] = v29[1] ) /*0x706dae*/
      {
        v28 = 8 * i; /*0x706db3*/
        v29 = (_DWORD *)(*(_DWORD *)aP4->__pad_0 + 8 * i++); /*0x706dbc*/
        *(_DWORD *)&v24->__pad_0[v28] = *v29; /*0x706dc1*/
      }
      __3_YAXPAX_Z(*(void **)aP4->__pad_0); /*0x706dd6*/
      eax30 = v25 + *(_DWORD *)&aP4->__pad_0[8]; /*0x706de1*/
      v14 = aP3; /*0x706de3*/
      *(_DWORD *)aP4->__pad_0 = v24; /*0x706de7*/
      appended = aP8a; /*0x706dea*/
      *(_DWORD *)&aP4->__pad_0[8] = eax30; /*0x706dee*/
      aP4->uniqueId = 0; /*0x706df1*/
      goto LABEL_31; /*0x706df1*/
    }
    v14 = aP3; /*0x706e1c*/
    appended = aP8a; /*0x706e20*/
LABEL_34:
    edi31 = this; /*0x706e2a*/
    (*(void (__thiscall **)(int *))(*this + 136))(this); /*0x706e32*/
    TechnoClass::ClearArrays(); /*0x706e38*/
    if ( !appended ) /*0x706e3f*/
    {
      v30 = Miles::DriverGet(); /*0x706e46*/
      appended = (TechnoClass *)Buffer::AppendCellData( /*0x706e5a*/
                                  &MEMORY[0x87F8E4].__pad_5568[9748],
                                  (AbstractClass *)v30,
                                  (int)v38);
    }
    v31 = *(TechnoClass **)&aP4->__pad_0[8]; /*0x706e5f*/
    if ( *(_DWORD *)&aP4->__pad_0[4] + 1 <= (int)v31 ) /*0x706e65*/
      goto LABEL_40; /*0x706e65*/
    if ( !v31 ) /*0x706e69*/
      v31 = (TechnoClass *)10; /*0x706e6b*/
    if ( Object_Helper_710750((int)aP4, (int)v31) ) /*0x706e73*/
    {
LABEL_40:
      *(_DWORD *)(*(_DWORD *)aP4->__pad_0 + 8 * *(_DWORD *)&aP4->__pad_0[4]) = v14; /*0x706e82*/
      *(_DWORD *)(*(_DWORD *)aP4->__pad_0 + 8 * *(_DWORD *)&aP4->__pad_0[4] + 4) = appended; /*0x706e8b*/
      v35 = *(_DWORD *)&aP4->__pad_0[4] + 1; /*0x706e92*/
      aP4->__pad_0[12] = 0; /*0x706e93*/
      *(_DWORD *)&aP4->__pad_0[4] = v35; /*0x706e97*/
    }
    return QueueTechnoVoiceLine(edi31, aP1, aP2, v14, aP4, aP5, aP6, aP7, 0, 0, 0, 0); /*0x706e97*/
  }
  if ( !aP4 || *(_BYTE *)((*(int (__thiscall **)(int *))(*this + 132))(this) + 3519) ) /*0x706c33*/
  {
    aP3 = (TechnoClass *)-1; /*0x706ce1*/
    v14 = (TechnoClass *)-1; /*0x706ce9*/
    goto LABEL_21; /*0x706ce9*/
  }
  v15 = *(TechnoClass **)&aP4->__pad_0[4]; /*0x706c41*/
  if ( v15 ) /*0x706c46*/
  {
    v16 = (ObjectClass *)aP4->uniqueId; /*0x706c48*/
    if ( v16 && *(TechnoClass **)v16->__pad_0 == aP3 ) /*0x706c51*/
      goto LABEL_14; /*0x706c51*/
    if ( !aP4->__pad_0[12] ) /*0x706c53*/
    {
      qsort(*(void **)aP4->__pad_0, (size_t)v15, 8u, sub_710860); /*0x706c66*/
      aP4->uniqueId = 0; /*0x706c6e*/
      aP4->__pad_0[12] = 1; /*0x706c75*/
    }
    v17 = *(_DWORD *)&aP4->__pad_0[4]; /*0x706c79*/
    v18 = *(_DWORD *)aP4->__pad_0; /*0x706c81*/
    v37 = aP3; /*0x706c84*/
    v19 = Object_Helper_710890(v18, v17, (int *)&v37); /*0x706c88*/
    if ( v19 ) /*0x706c8f*/
    {
      aP4->uniqueId = v19; /*0x706c91*/
LABEL_14:
      v20 = (__int16 **)(aP4->uniqueId + 4); /*0x706c94*/
      goto LABEL_16; /*0x706c9a*/
    }
  }
  v20 = (__int16 **)&unk_B78824; /*0x706c9c*/
LABEL_16:
  v21 = *v20; /*0x706ca1*/
  if ( v21 ) /*0x706ca5*/
  {
    Surface::BlitTechnoTo(this, v21, aP6, aP5, (TechnoClass *)0x2001, (AbstractClass *)0x3E8, 0); /*0x706cc0*/
    return (int)result->__pad_0; /*0x706ccc*/
  }
  result = (AbstractClass *)(unsigned __int8)aP8; /*0x706ccf*/
  if ( (_BYTE)aP8 ) /*0x706cd5*/
    goto LABEL_21; /*0x706cd5*/
  return (int)result->__pad_0; /*0x706cc5*/
}


// ==== 0x00706ED0  RenderTechnoClassVoxel  this=-  sig=csp ====
void *__fastcall TechnoClass_RenderVoxel(
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
  struct IPersistStreamVtbl *lpVtbl; // esi
  int *v23; // eax
  unsigned int v24; // ebx
  _DWORD *v25; // esi
  int v26; // edx
  int v27; // edi
  int v28; // eax
  int v29; // ecx
  int v30; // edx
  int *v31; // eax
  int *SHPFrame; // [esp-18h] [ebp-154h]
  int v34; // [esp-14h] [ebp-150h]
  int v35; // [esp-10h] [ebp-14Ch]
  int v36; // [esp-4h] [ebp-140h]
  _DWORD *v37; // [esp+10h] [ebp-12Ch] BYREF
  int v38; // [esp+14h] [ebp-128h]
  int v39; // [esp+18h] [ebp-124h]
  int v40; // [esp+1Ch] [ebp-120h]
  int v41; // [esp+20h] [ebp-11Ch] BYREF
  int v42; // [esp+24h] [ebp-118h]
  int v43; // [esp+28h] [ebp-114h]
  int v44; // [esp+2Ch] [ebp-110h]
  _DWORD *v45; // [esp+30h] [ebp-10Ch]
  _DWORD v46[6]; // [esp+34h] [ebp-108h] BYREF
  float v47[12]; // [esp+4Ch] [ebp-F0h] BYREF
  float v48[12]; // [esp+7Ch] [ebp-C0h] BYREF
  int v49[12]; // [esp+ACh] [ebp-90h] BYREF
  float v50[12]; // [esp+DCh] [ebp-60h] BYREF
  float v51[12]; // [esp+10Ch] [ebp-30h] BYREF

  qmemcpy(v48, a5, sizeof(v48)); /*0x706eeb*/
  v12 = *a1; /*0x706ef4*/
  qmemcpy(v49, a5, sizeof(v49)); /*0x706efe*/
  if ( *(_BYTE *)((*(int (__thiscall **)(int *))(v12 + 132))(a1) + 3500) ) /*0x706f08*/
    dword_B43180 = 1; /*0x706f12*/
  v14 = (_DWORD *)a4[1]; /*0x706f36*/
  v45 = (_DWORD *)*a4; /*0x706f45*/
  v13 = v45; /*0x706f34*/
  v37 = v14; /*0x706f49*/
  Audio_Render(0, (int)v49, (int)MEMORY[0x887430], (int)&MEMORY[0x887470], 3.0); /*0x706f4d*/
  Viewport::Clear(); /*0x706f52*/
  v15 = 0; /*0x706f5a*/
  if ( v45[1] ) /*0x706f57*/
  {
    do /*0x706fe5*/
    {
      if ( v14 ) /*0x706f66*/
      {
        qmemcpy(v47, (const void *)(v14[3] + 48 * (v15 + v14[1] * (a8 % v14[2]))), sizeof(v47)); /*0x706f92*/
        qmemcpy(v48, MultiplyMatrix3x4(v50, (float *)v49, v47), sizeof(v48)); /*0x706fb3*/
        v13 = v45; /*0x706fb5*/
        v14 = v37; /*0x706fb9*/
      }
      v16 = MultiplyMatrix3x4(v51, MEMORY[0x887430], v48); /*0x706fce*/
      TransformVoxelVertex(v13, v15++, 0, v16); /*0x706fda*/
    }
    while ( v15 < v13[1] ); /*0x706fe5*/
  }
  v17 = Voxel::RenderFrame(v47); /*0x706fef*/
  v18 = *a1; /*0x706ff4*/
  qmemcpy(v46, v17, sizeof(v46)); /*0x707002*/
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
  if ( (unsigned __int8)House::IsHumanPlayer((#375 *)a1[135]) /*0x707086*/
    && (*(unsigned __int8 (__thiscall **)(int *))(*a1 + 196))(a1) )
  {
    v19 = (*(int (__thiscall **)(int *, int))(*a1 + 1084))(a1, v19); /*0x70709c*/
  }
  v20 = (_DWORD *)a6; /*0x7070a5*/
  v41 = *a7; /*0x7070ae*/
  v42 = a7[1]; /*0x7070b5*/
  v43 = a7[2]; /*0x7070bc*/
  v44 = a7[3]; /*0x7070c9*/
  if ( MEMORY[0x887314] != dword_B1D13C ) /*0x7070d4*/
  {
    v21 = *((_WORD *)a1 + 485); /*0x7070da*/
    if ( v21 <= 0 ) /*0x7070e6*/
    {
      if ( *((_BYTE *)a1 + 973) ) /*0x707140*/
        *((_WORD *)a1 + 485) = LOWORD(v46[5]) /*0x707166*/
                             + LOWORD(v46[1])
                             + *(_WORD *)(a6 + 4)
                             + LOWORD(MEMORY[0x887324][45].__tail_0);
    }
    else
    {
      lpVtbl = MEMORY[0x887324][45].__tail_0; /*0x7070f2*/
      v37 = 0; /*0x707100*/
      v40 = v21 - (_DWORD)lpVtbl; /*0x707104*/
      v38 = 0; /*0x70710c*/
      v39 = MEMORY[0x886FA8]; /*0x707110*/
      v23 = ClipRectIntersection(v47, &v41, (int *)&v37, 0, 0); /*0x70711e*/
      v41 = *v23; /*0x707125*/
      v42 = v23[1]; /*0x70712c*/
      v43 = v23[2]; /*0x707133*/
      v44 = v23[3]; /*0x70713a*/
    }
  }
  v24 = v19 & 0xFFFFFFEF; /*0x707172*/
  if ( (*(int (__thiscall **)(int *))(*a1 + 44))(a1) == 1 && *((_BYTE *)a1 + 1747) ) /*0x70717d*/
    v25 = (_DWORD *)unk_B1D140; /*0x707187*/
  else
    v25 = (_DWORD *)(*(int (__thiscall **)(int *))(*a1 + 484))(a1); /*0x70719a*/
  v26 = 0; /*0x70719c*/
  if ( (v24 & 8) != 0 ) /*0x7071a1*/
  {
    v27 = (*(int (__stdcall **)(int *))(a1[1] + 16))(a1 + 1); /*0x7071b3*/
    v28 = v27 + Math::RoundToInt(*((float *)a1 + 147)); /*0x7071ba*/
    v20 = (_DWORD *)a6; /*0x7071bc*/
    v26 = v28 % 400; /*0x7071c9*/
  }
  v29 = v20[1]; /*0x7071d3*/
  v36 = v26; /*0x7071da*/
  v37 = (_DWORD *)(v46[0] + *v20); /*0x7071e4*/
  v30 = *a1; /*0x7071f0*/
  v38 = v46[1] + v29; /*0x7071f3*/
  v35 = (*(int (__thiscall **)(int *))(v30 + 752))(a1); /*0x707200*/
  v34 = (*(int (__thiscall **)(int *))(*a1 + 748))(a1); /*0x70720c*/
  SHPFrame = (int *)BuildingClass::GetSHPFrame(v25, v24); /*0x707215*/
  v31 = Miles::DriverGet(); /*0x707227*/
  BlitterDrawSHP( /*0x707235*/
    (int *)MEMORY[0x887314],
    (int)v25,
    v31,
    &v46[2],
    (int *)&v37,
    &v41,
    0,
    SHPFrame,
    v34,
    v35,
    a10,
    a11,
    v36);
  if ( *(_BYTE *)((*(int (__thiscall **)(int *))(*a1 + 132))(a1) + 3500) ) /*0x707245*/
    dword_B43180 = 0; /*0x70724f*/
  qmemcpy(a3, v46, 0x18u); /*0x70726b*/
  return a3; /*0x70726d*/
}


// ==== 0x00707280  ObjectClass::RenderTechnoOverlaySHP  this=TechnoClass  sig=csp ====
void *__thiscall RenderTechnoOverlaySHP(
        int *this,
        TechnoClass *aP1,
        int a3,
        TechnoClass *aP3,
        int a5,
        TechnoClass *aP5,
        TechnoClass *aP6,
        int a8,
        char a9,
        TechnoClass *aP9,
        TechnoClass *aP10,
        int a12)
{
  float *v13; // eax
  int v14; // edx
  float *v15; // eax
  BSurface *v16; // eax
  int v17; // edx
  int v18; // eax
  int v19; // eax
  int v21; // [esp+Ch] [ebp-DCh]
  _DWORD v22[6]; // [esp+10h] [ebp-D8h] BYREF
  float a2[12]; // [esp+28h] [ebp-C0h] BYREF
  float v24[12]; // [esp+58h] [ebp-90h] BYREF
  float a4[12]; // [esp+88h] [ebp-60h] BYREF
  float v26[12]; // [esp+B8h] [ebp-30h] BYREF

  qmemcpy( /*0x7072ca*/
    a2,
    (const void *)(*(_DWORD *)(*(_DWORD *)(a3 + 4) + 12)
                 + 48
                 * ((_DWORD)aP6 + *(_DWORD *)(*(_DWORD *)(a3 + 4) + 4) * (0u % *(_DWORD *)(*(_DWORD *)(a3 + 4) + 8)))),
    sizeof(a2));
  v13 = MultiplyMatrix3x4((ObjectClass *)v26, (float *)aP3->__pad_0, a2); /*0x7072d3*/
  v14 = *this; /*0x7072d8*/
  qmemcpy(a4, v13, sizeof(a4)); /*0x7072e8*/
  if ( *(_BYTE *)((*(int (__thiscall **)(int *))(v14 + 132))(this) + 3500) ) /*0x7072f2*/
    dword_B43180 = 1; /*0x7072fc*/
  Matrix3x4::Identity(v24); /*0x70730a*/
  if ( *(_BYTE *)((*(int (__thiscall **)(int *))(*this + 132))(this) + 3478) ) /*0x707319*/
    TacticalMap::MultiplyByScalar(v24, (ObjectClass *)0x3F000000); /*0x70732c*/
  Viewport::Clear(); /*0x707331*/
  v15 = MultiplyMatrix3x4((ObjectClass *)v26, (float *)&stru_87C374.__pad_579C[22816], v24); /*0x70736c*/
  globalHelper_053F90( /*0x70737e*/
    *(_DWORD **)a3,
    (ObjectClass *)aP6,
    0,
    v15,
    a4,
    (float *)&stru_87C374.__pad_579C[22800],
    (int)aP9,
    (int)aP10,
    a12);
  qmemcpy(v22, Voxel::RenderFrame(a2), sizeof(v22)); /*0x7073a0*/
  if ( !a9 ) /*0x7073a2*/
  {
    v16 = Miles::DriverGet(); /*0x7073a8*/
    (*(void (__thiscall **)(BSurface *, float *))(*(_DWORD *)v16->__pad_0 + 120))(v16, a2); /*0x7073b6*/
    v17 = *this; /*0x7073d1*/
    v18 = v21 + *(_DWORD *)aP3->__pad_0; /*0x7073d3*/
    LODWORD(a2[0]) = v22[0] + *(_DWORD *)&aP3->__pad_0[4]; /*0x7073d5*/
    v22[5] = v18; /*0x7073e2*/
    v19 = (*(int (__thiscall **)(int *, int, _DWORD, _DWORD))(v17 + 752))(this, 1000, 0, 0); /*0x7073e6*/
    (*(void (__thiscall **)(int *, int))(*this + 748))(this, v19); /*0x7073f1*/
    BuildingClass::GetSHPFrame(*(_DWORD **)&stru_87C374.__pad_14B0[7840], (ConvertClass *)a8); /*0x707406*/
    Miles::DriverGet(); /*0x707420*/
    BlitterDrawSHP(*(IUnknown **)&stru_87C374.__pad_579C[22532]); /*0x707432*/
  }
  if ( *(_BYTE *)((*(int (__thiscall **)(int *))(*this + 132))(this) + 3500) ) /*0x707441*/
    dword_B43180 = 1; /*0x70744b*/
  qmemcpy(aP1, v22, 0x18u); /*0x707467*/
  return aP1; /*0x707469*/
}


// ==== 0x00707480  Surface::BlitTechnoTo  this=TechnoClass  sig=csp ====
void __thiscall Surface::BlitTechnoTo(
        _BYTE *this,
        __int16 *a1,
        TechnoClass *aP2,
        TechnoClass *aP3,
        TechnoClass *aP4,
        AbstractClass *aP5,
        TechnoClass *aP6)
{
  unsigned __int16 v8; // bp
  unsigned __int16 v9; // bx
  int v11; // edx
  unsigned int v12; // ebx
  _DWORD *v13; // eax
  int v14; // ebx
  TechnoClass *eax8; // eax
  TechnoClass *v15; // edx
  int v17; // ebp
  int ecx8; // ecx
  TechnoClass *v18; // ebx
  int v20; // ebp
  int v21; // ecx
  int v22; // ebp
  unsigned __int16 v23; // ax
  int v24; // eax
  int eax24a; // eax
  AbstractClass *v25; // [esp-1Ch] [ebp-7Ch]
  TechnoClass *v26; // [esp+10h] [ebp-50h] BYREF
  TechnoClass *v27; // [esp+14h] [ebp-4Ch]
  int v29; // [esp+18h] [ebp-48h]
  int v30; // [esp+1Ch] [ebp-44h]
  int v31; // [esp+20h] [ebp-40h] BYREF
  TechnoClass *v32; // [esp+24h] [ebp-3Ch]
  int v33; // [esp+28h] [ebp-38h]
  int v34; // [esp+2Ch] [ebp-34h]
  int v35[4]; // [esp+30h] [ebp-30h] BYREF
  int (__thiscall **v36)(void *, char); // [esp+40h] [ebp-20h] BYREF
  int v37; // [esp+44h] [ebp-1Ch]
  int v38; // [esp+48h] [ebp-18h]
  int v39; // [esp+4Ch] [ebp-14h]
  int v40; // [esp+50h] [ebp-10h]
  _DWORD v41[3]; // [esp+54h] [ebp-Ch] BYREF
  __int16 *a1b; // [esp+64h] [ebp+4h]
  int a1a; // [esp+64h] [ebp+4h]
  int *aP4a; // [esp+70h] [ebp+10h]

  v8 = a1[3]; /*0x70748e*/
  v9 = a1[2]; /*0x707492*/
  a1b = (__int16 *)*((_DWORD *)a1 + 2); /*0x7074a2*/
  Surface::Construct(&v36, (ObjectClass *)v9, (IUnknown *)v8); /*0x7074a6*/
  v39 = 0; /*0x7074b8*/
  v36 = &XSurface_Vtable; /*0x7074c0*/
  v40 = 1; /*0x7074c8*/
  Buffer::Init(v41, (int)a1b, (AbstractClass *)(v8 * v9)); /*0x7074d0*/
  v11 = *(_DWORD *)this; /*0x7074d9*/
  v36 = &BSurface_Vtable; /*0x7074dd*/
  v12 = (unsigned int)aP4 & 0xFFFFFFEF; /*0x7074e5*/
  if ( (*(int (__thiscall **)(_BYTE *))(v11 + 44))(this) == 1 && this->q6D3 ) /*0x7074f0*/
    v13 = *(_DWORD **)&MEMORY[0xB077F8].__pad_579C[65964]; /*0x7074fa*/
  else
    v13 = (_DWORD *)(*(int (__thiscall **)(_BYTE *))(this->disguiseCreationFrame)(this); /*0x707505*/
  aP4a = (int *)LightConvertClass::SelectRLEBlitter(v13, (IUnknown *)v12); /*0x707516*/
  a1a = 0; /*0x70751a*/
  if ( (v12 & 8) != 0 ) /*0x707522*/
  {
    v14 = (*(int (__stdcall **)(_BYTE *))(this->vtable2 + 16))(this + 4); /*0x707534*/
    a1a = (int)(v14 + Math::RoundToInt(*((float *)this + 147))) % 400; /*0x707545*/
  }
  if ( (*(int (__thiscall **)(_BYTE *))(this->fallRate)(this) == 1 ) /*0x707557*/
  {
    eax8 = (TechnoClass *)(*(_DWORD *)aP2->__pad_0 + *a1); /*0x70756b*/
    v15 = (TechnoClass *)(*(_DWORD *)&aP2->__pad_0[4] + a1[1]); /*0x707571*/
    v17 = (unsigned __int16)a1[3]; /*0x707575*/
    ecx8 = (unsigned __int16)a1[2]; /*0x70757b*/
    v32 = v15; /*0x70757f*/
    v34 = (unsigned __int16)v17; /*0x707585*/
    if ( *(int *)&MEMORY[0xB077F8].__pad_579C[65588] > 0 && *(int *)&MEMORY[0xB077F8].__pad_579C[65592] > 0 ) /*0x707597*/
    {
      if ( ecx8 <= 0 || v17 <= 0 ) /*0x7075a7*/
      {
        eax8 = *(TechnoClass **)&MEMORY[0xB077F8].__pad_579C[65580]; /*0x70764e*/
        v15 = *(TechnoClass **)&MEMORY[0xB077F8].__pad_579C[65584]; /*0x707653*/
        ecx8 = *(_DWORD *)&MEMORY[0xB077F8].__pad_579C[65588]; /*0x707659*/
        v17 = *(_DWORD *)&MEMORY[0xB077F8].__pad_579C[65592]; /*0x70765f*/
      }
      else
      {
        v18 = *(TechnoClass **)&MEMORY[0xB077F8].__pad_579C[65580]; /*0x7075b3*/
        v27 = *(TechnoClass **)&MEMORY[0xB077F8].__pad_579C[65584]; /*0x7075b9*/
        v29 = *(_DWORD *)&MEMORY[0xB077F8].__pad_579C[65588]; /*0x7075c3*/
        v26 = *(TechnoClass **)&MEMORY[0xB077F8].__pad_579C[65580]; /*0x7075cf*/
        v30 = *(_DWORD *)&MEMORY[0xB077F8].__pad_579C[65592]; /*0x7075d3*/
        if ( *(int *)&MEMORY[0xB077F8].__pad_579C[65580] > (int)eax8 ) /*0x7075d7*/
        {
          v18 = eax8; /*0x7075e1*/
          v29 += *(_DWORD *)&MEMORY[0xB077F8].__pad_579C[65580] - (_DWORD)eax8; /*0x7075e3*/
          v26 = eax8; /*0x7075e7*/
        }
        if ( (int)v27 > (int)v15 ) /*0x7075f1*/
        {
          v20 = (char *)v27 - (char *)v15; /*0x7075f7*/
          v27 = v15; /*0x7075fb*/
          v30 += v20; /*0x7075ff*/
          v18 = v26; /*0x707603*/
        }
        if ( (int)&v18->__pad_0[v29] < (int)&eax8->__pad_0[ecx8] ) /*0x707612*/
          v29 = (int)&eax8->__pad_0[ecx8 - (_DWORD)v18 + 1]; /*0x70761a*/
        v17 = v30; /*0x707626*/
        v15 = v27; /*0x70762d*/
        if ( (int)&v27->__pad_0[v30] < (int)&v32->__pad_0[v34] ) /*0x707636*/
          v17 = (int)&v32->__pad_0[v34 - (_DWORD)v27 + 1]; /*0x707642*/
        ecx8 = v29; /*0x707646*/
        eax8 = v18; /*0x70764a*/
      }
    }
    *(_DWORD *)&MEMORY[0xB077F8].__pad_579C[65580] = eax8; /*0x707661*/
    *(_DWORD *)&MEMORY[0xB077F8].__pad_579C[65584] = v15; /*0x707666*/
    *(_DWORD *)&MEMORY[0xB077F8].__pad_579C[65588] = ecx8; /*0x70766c*/
    *(_DWORD *)&MEMORY[0xB077F8].__pad_579C[65592] = v17; /*0x707672*/
  }
  if ( aP4a ) /*0x70767e*/
  {
    v33 = v37; /*0x70768c*/
    v29 = v37; /*0x707690*/
    v34 = v38; /*0x70769a*/
    v30 = v38; /*0x70769e*/
    v21 = *a1; /*0x7076a2*/
    v31 = 0; /*0x7076a5*/
    v32 = 0; /*0x7076a9*/
    v26 = 0; /*0x7076ad*/
    v27 = 0; /*0x7076b1*/
    v22 = *(_DWORD *)&aP2->__pad_0[4]; /*0x7076bb*/
    v35[0] = *(_DWORD *)aP2->__pad_0 + v21; /*0x7076be*/
    v23 = a1[2]; /*0x7076c8*/
    v35[1] = v22 + a1[1]; /*0x7076ce*/
    v35[2] = v23; /*0x7076d2*/
    v24 = *(_DWORD *)this; /*0x7076e3*/
    v35[3] = (unsigned __int16)a1[3]; /*0x7076e5*/
    v25 = (AbstractClass *)(*(int (__thiscall **)(_BYTE *))(v24 + 752))(this); /*0x707703*/
    eax24a = (*(int (__thiscall **)(_BYTE *))(this->slaveManager)(this); /*0x707706*/
    BlitterRLEBlitSHP( /*0x707736*/
      *(int *)&MEMORY[0x87F8E4].__pad_5568[9416],
      (int *)aP3->__pad_0,
      v35,
      (int)&v36,
      &v26,
      &v31,
      aP4a,
      eax24a,
      (int)v25,
      (int)aP5,
      a1a,
      0,
      0,
      0,
      (int)aP6);
  }
  Vector::Clear((int)v41); /*0x70773f*/
}


// ==== 0x007077C0  ObjectClass::NotifyExpired  this=TechnoClass  sig=csp ====
int __thiscall ObjectClass::NotifyExpired(int *this, IUnknown *aP1, IUnknown *aP2)
{
  int v5; // ecx
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // edi
  int v10; // ecx
  int v11; // eax
  int v12; // eax
  IUnknown *v13; // eax
  _WORD *eax49a; // eax
  IUnknown *v14; // edx
  int v16; // eax
  int eax60; // eax
  TimerStruct *v17; // edx
  int *v19; // eax
  int v20; // ecx
  int *v21; // ecx
  _DWORD *v22; // ecx
  _DWORD *v23; // ecx
  int v24; // ecx
  int v25; // eax
  int eax96; // eax
  IUnknown *v27; // ecx
  int v28; // eax
  int edx105; // edx
  int v30; // eax
  DynamicVector *v26; // ecx
  int v32; // ecx
  int v33; // ecx
  DynamicVector *v29; // eax
  int v35; // eax
  int v36; // ecx
  int v37; // ecx
  int v38; // eax
  int *v39; // esi
  int result; // eax
  int v41; // ecx
  int v42; // ecx
  _DWORD v43[3]; // [esp+14h] [ebp-Ch] BYREF
  char aP1a; // [esp+24h] [ebp+4h]

  RadioClass::ExecuteAction((int)this, (TimerStruct *)aP1, aP2); /*0x7077d3*/
  if ( (_BYTE)aP2 ) /*0x7077e0*/
    FootClass::updateMovementAnimation(this + 69, (TimerStruct *)aP1); /*0x7077e9*/
  aP1a = 1; /*0x7077f4*/
  if ( aP1 == (IUnknown *)this->mindControlledBy ) /*0x7077fb*/
    this->mindControlledBy = 0; /*0x7077fd*/
  if ( aP1 == (IUnknown *)this->missionQueued ) /*0x707809*/
    this->missionQueued = 0; /*0x70780b*/
  if ( aP1 == (IUnknown *)this->lastTarget ) /*0x707817*/
    this->lastTarget = 0; /*0x707819*/
  if ( aP1 == (IUnknown *)this->temporalTargetingMe ) /*0x707825*/
    this->temporalTargetingMe = 0; /*0x707827*/
  if ( aP1 == (IUnknown *)this->owningHouseIndex0 ) /*0x707833*/
    this->owningHouseIndex0 = 0; /*0x707835*/
  if ( aP1 == (IUnknown *)this->q428 ) /*0x707841*/
    this->q428 = 0; /*0x707843*/
  if ( aP1 == (IUnknown *)this->alignmentPaddingB9 && *(_DWORD *)&MEMORY[0xA8D63C].__pad_1140[48] ) /*0x707857*/
    this->alignmentPaddingB9 = 0; /*0x707859*/
  if ( aP1 == (IUnknown *)this->forceShielded ) /*0x707865*/
  {
    v5 = this->alignmentPadding75; /*0x707867*/
    if ( v5 ) /*0x70786f*/
    {
      (*(void (__thiscall **)(int))(*(_DWORD *)v5 + 248))(v5); /*0x707873*/
      this->alignmentPadding75 = 0; /*0x707879*/
    }
    v6 = this->forceShielded; /*0x70787f*/
    if ( v6 ) /*0x707887*/
    {
      *(_DWORD *)(v6 + 464) = 0; /*0x707889*/
      v7 = *(_DWORD *)(this->forceShielded + 540); /*0x707895*/
      if ( v7 ) /*0x70789d*/
        *(_BYTE *)(v7 + 22392) = 1; /*0x70789f*/
      this->forceShielded = 0; /*0x7078a6*/
    }
    this->forceShielded = 0; /*0x7078ac*/
  }
  v8 = this->q11C; /*0x7078b2*/
  if ( aP1 == (IUnknown *)v8 /*0x7078d3*/
    && v8
    && (!*(_BYTE *)(v8 + 144) || !*(_DWORD *)(v8 + 108) || *(_DWORD *)&MEMORY[0xA8D63C].__pad_1140[48]) )
  {
    this->q11C = 0; /*0x7078d5*/
  }
  v9 = this->isOnMap; /*0x7078db*/
  if ( aP1 == (IUnknown *)v9 ) /*0x7078e3*/
  {
    v10 = *(_DWORD *)(v9 + 468); /*0x7078e5*/
    if ( v10 ) /*0x7078ed*/
    {
      (*(void (__thiscall **)(int))(*(_DWORD *)v10 + 248))(v10); /*0x7078f1*/
      *(_DWORD *)(v9 + 468) = 0; /*0x7078f7*/
    }
    v11 = *(_DWORD *)(v9 + 460); /*0x7078fd*/
    if ( v11 ) /*0x707905*/
    {
      *(_DWORD *)(v11 + 464) = 0; /*0x707907*/
      v12 = *(_DWORD *)(*(_DWORD *)(v9 + 460) + 540); /*0x707913*/
      if ( v12 ) /*0x70791b*/
        *(_BYTE *)(v12 + 22392) = 1; /*0x70791d*/
      *(_DWORD *)(v9 + 460) = 0; /*0x707924*/
    }
    this->isOnMap = 0; /*0x70792a*/
  }
  if ( aP1 == (IUnknown *)this->alignmentPadding75 ) /*0x707936*/
    this->alignmentPadding75 = 0; /*0x707938*/
  if ( aP1 == (IUnknown *)this->q0B2 ) /*0x707944*/
    this->q0B2 = 0; /*0x707946*/
  if ( aP1 == (IUnknown *)this->q04C ) /*0x707952*/
    this->q04C = 0; /*0x707954*/
  if ( !(_BYTE)aP2 ) /*0x70795e*/
  {
    if ( aP1 ) /*0x707962*/
    {
      if ( (aP1->__pad_10[4] & 1) != 0 ) /*0x70796e*/
      {
        v13 = (IUnknown *)(*(int (__thiscall **)(IUnknown *, _DWORD *))(aP1->field_0 + 72))(aP1, v43); /*0x70797a*/
        eax49a = Coord::To_Cell(&MEMORY[0x87F7E8], v13); /*0x707983*/
        if ( Cell::IsPassableOffset(eax49a, *(IUnknown **)(this->Owner + 48)) ) /*0x707994*/
          aP1a = 0; /*0x70799d*/
      }
    }
  }
  if ( (IUnknown *)this->sprayOffsetIndex_e == aP1 /*0x7079cb*/
    && aP1a
    && ((_BYTE)aP2 || (*(int (__thiscall **)(IUnknown *))(aP1->field_0 + 60))(aP1) != this->Owner) )
  {
    v14 = (IUnknown *)this->q060; /*0x7079d1*/
    v16 = this->q188; /*0x7079d7*/
    if ( v14 != (IUnknown *)-1 ) /*0x7079e0*/
    {
      if ( *(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[664] - (int)v14 >= v16 ) /*0x7079ec*/
      {
LABEL_61:
        (*(void (__thiscall **)(int *, _DWORD))(*this + 968))(this, 0); /*0x707a2e*/
        if ( (*(unsigned __int8 (__thiscall **)(int *))(*this + 508))(this) ) /*0x707a3d*/
        {
          (*(void (__thiscall **)(int *))(*this + 504))(this); /*0x707a4b*/
          if ( (*(int (__thiscall **)(int *))(*this + 44))(this) == 2 && this->q02B == 25 ) /*0x707a64*/
          {
            this->missionStatus = 0; /*0x707a66*/
            this->q6D2 = 0; /*0x707a6c*/
          }
        }
        goto LABEL_65; /*0x707a6c*/
      }
      v16 -= *(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[664] - (_DWORD)v14; /*0x7079ee*/
    }
    if ( v16 > 10 && !*(_DWORD *)&MEMORY[0xA8D63C].__pad_1140[48] ) /*0x7079fb*/
    {
      eax60 = Random::Range(&MEMORY[0xA8B230]->random[1], (IUnknown *)4, (IUnknown *)8); /*0x707a0d*/
      v17 = (TimerStruct *)v43[1]; /*0x707a18*/
      this->q060 = *(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[664]; /*0x707a1c*/
      this->targetingTimer_e = (int)v17; /*0x707a22*/
      this->q188 = eax60; /*0x707a28*/
    }
    goto LABEL_61; /*0x707a28*/
  }
LABEL_65:
  if ( (IUnknown *)this->isUncrushable_e == aP1 && aP1a ) /*0x707a7e*/
    this->isUncrushable_e = 0; /*0x707a80*/
  if ( (IUnknown *)this->Owner == aP1 ) /*0x707a8c*/
  {
    this->Owner = 0; /*0x707a8e*/
    this->isOwnedByCurrentPlayer = 0; /*0x707a94*/
  }
  if ( (*(unsigned __int8 (__thiscall **)(int *))(*this + 196))(this) /*0x707ab6*/
    && (IUnknown *)(*(int (__thiscall **)(int *, int))(*this + 208))(this, 1) == aP1 )
  {
    (*(void (__thiscall **)(int *))(*this + 1136))(this); /*0x707abc*/
  }
  v19 = this + 193; /*0x707ac2*/
  v20 = 8; /*0x707ac8*/
  do /*0x707ad7*/
  {
    if ( (IUnknown *)*v19 == aP1 ) /*0x707acf*/
      *v19 = 0; /*0x707ad1*/
    ++v19; /*0x707ad3*/
    --v20; /*0x707ad6*/
  }
  while ( v20 ); /*0x707ad7*/
  if ( (IUnknown *)this->damageParticles == aP1 ) /*0x707adf*/
    this->damageParticles = 0; /*0x707ae1*/
  if ( (_BYTE)aP2 ) /*0x707aeb*/
  {
    if ( (IUnknown *)this->currentRank == aP1 ) /*0x707af3*/
      this->currentRank = 0; /*0x707af5*/
    if ( (IUnknown *)this->q086 == aP1 ) /*0x707b01*/
      this->q086 = 0; /*0x707b03*/
    v21 = (int *)this->rockerLinkedUnit; /*0x707b09*/
    if ( v21 ) /*0x707b11*/
      ObjectClass::RemoveFromPointerList(v21, (int)aP1); /*0x707b14*/
  }
  v22 = (_DWORD *)this->queuedMission; /*0x707b19*/
  if ( v22 ) /*0x707b21*/
    UnitClass::ClearTargetRef(v22, (int)aP1); /*0x707b24*/
  v23 = (_DWORD *)this->temporalUsing; /*0x707b29*/
  if ( v23 ) /*0x707b31*/
    ObjectClass::UnlinkFromFactory(v23, aP1); /*0x707b34*/
  v24 = this->owningHouseIndex0; /*0x707b39*/
  if ( v24 && *(int **)(v24 + 76) == this ) /*0x707b46*/
    ObjectClass::CleanupAirstrikeTarget(v24, (AudioController *)aP1); /*0x707b49*/
  v25 = this->q0AA; /*0x707b4e*/
  if ( aP1 == (IUnknown *)v25 ) /*0x707b56*/
  {
    *(_DWORD *)(v25 + 680) = 0; /*0x707b58*/
    this->q0AA = 0; /*0x707b5e*/
  }
  if ( aP1 == (IUnknown *)this->q0AB ) /*0x707b6a*/
  {
    TechnoClass::EjectPassengers(this, 1); /*0x707b70*/
    eax96 = this->q0AB; /*0x707b75*/
    if ( eax96 ) /*0x707b7d*/
    {
      *(_DWORD *)(eax96 + 688) = 0; /*0x707b7f*/
      this->q0AB = 0; /*0x707b85*/
    }
  }
  v27 = (IUnknown *)this->currentMission; /*0x707b8b*/
  if ( aP1 == v27 ) /*0x707b93*/
  {
    TechnoClass::EjectPassengers(&v27->field_0, 1); /*0x707b97*/
    v28 = this->currentMission; /*0x707b9c*/
    if ( v28 ) /*0x707ba4*/
    {
      *(_DWORD *)(v28 + 684) = 0; /*0x707ba6*/
      this->currentMission = 0; /*0x707bac*/
    }
  }
  if ( aP1 == (IUnknown *)this->q10D ) /*0x707bb8*/
    this->q10D = 0; /*0x707bba*/
  if ( aP1 == (IUnknown *)this->behindAnim ) /*0x707bc6*/
    this->behindAnim = 0; /*0x707bc8*/
  edx105 = this->q11A; /*0x707bce*/
  v30 = 0; /*0x707bd4*/
  if ( edx105 > 0 ) /*0x707bd8*/
  {
    v26 = (DynamicVector *)this->attackedTargets; /*0x707bde*/
    while ( aP1 != *(IUnknown **)v26->__pad_0 ) /*0x707be6*/
    {
      ++v30; /*0x707be8*/
      v26 = (DynamicVector *)((char *)v26 + 4); /*0x707be9*/
      if ( v30 >= edx105 ) /*0x707bee*/
        goto LABEL_118; /*0x707bee*/
    }
    if ( v30 != -1 ) /*0x707bf5*/
    {
      v32 = this->secondaryTurretIndex; /*0x707bf7*/
      if ( v30 < v32 ) /*0x707bff*/
      {
        v33 = v32 - 1; /*0x707c01*/
        for ( this->secondaryTurretIndex = v33; /*0x707c0a*/
              v30 < this->secondaryTurretIndex;
              *(_DWORD *)(this->q111 + 4 * v30 - 4) = *(_DWORD *)(this->q111 + 4 * v30) )
        {
          ++v30; /*0x707c12*/
        }
      }
      v29 = (DynamicVector *)this->currentTargets; /*0x707c24*/
      aP2 = aP1; /*0x707c34*/
      v35 = ((int (__thiscall *)(int *, IUnknown **))v29->field_10)(this + 278, &aP2); /*0x707c3b*/
      if ( v35 != -1 ) /*0x707c41*/
      {
        v36 = this->q11A; /*0x707c43*/
        if ( v35 < v36 ) /*0x707c48*/
        {
          v37 = v36 - 1; /*0x707c4a*/
          for ( this->q11A = v37; /*0x707c50*/
                v35 < this->q11A;
                *(_DWORD *)(this->attackedTargets + 4 * v35 - 4) = *(_DWORD *)(this->attackedTargets + 4 * v35) )
          {
            ++v35; /*0x707c55*/
          }
        }
      }
    }
  }
LABEL_118:
  v38 = this->q11C; /*0x707c64*/
  v39 = this + 284; /*0x707c6a*/
  aP2 = aP1; /*0x707c74*/
  result = (*(int (__thiscall **)(int *, IUnknown **))(v38 + 16))(v39, &aP2); /*0x707c7b*/
  if ( result != -1 ) /*0x707c81*/
  {
    v41 = v39[4]; /*0x707c83*/
    if ( result < v41 ) /*0x707c88*/
    {
      v42 = v41 - 1; /*0x707c8a*/
      for ( v39[4] = v42; result < v39[4]; *(_DWORD *)(v39[1] + 4 * result - 4) = *(_DWORD *)(v39[1] + 4 * result) ) /*0x707c90*/
        ++result; /*0x707c95*/
    }
  }
  return result; /*0x707ca4*/
}


// ==== 0x00707CB0  TechnoClass::CleanupAll  this=AbstractClass  sig=csp ====
int __thiscall TechnoClass::CleanupAll(_DWORD *this, AbstractClass *aP1)
{
  TechnoClass *result; // eax
  int DB; // eax
  int ecx2; // ecx
  ObjectClass *v5; // eax
  ObjectClass *v6; // esi

  for ( result = (TechnoClass *)this->q118; result; result = (TechnoClass *)this->q118 ) /*0x707cbb*/
  {
    DB = CCINIClass::GetDB(this + 69); /*0x707ccc*/
    ecx2 = *(_DWORD *)(DB + 1492); /*0x707cd1*/
    if ( ecx2 ) /*0x707cd9*/
      TeamClass::LiberateMember_Start(ecx2, (IUnknown *)DB, 0xFFFFFFFF, 0); /*0x707ce0*/
    v5 = (ObjectClass *)LinkedList::Pop(this + 69); /*0x707ce7*/
    v6 = v5; /*0x707cec*/
    if ( v5 ) /*0x707cf0*/
    {
      TechnoClass::CleanupAll(v5, (AbstractClass *)v5); /*0x707cf5*/
      (*(void (__thiscall **)(ObjectClass *, AbstractClass *))(*(_DWORD *)v6->__pad_0 + 224))(v6, aP1); /*0x707cff*/
      (*(void (__thiscall **)(ObjectClass *))(*(_DWORD *)v6->__pad_0 + 248))(v6); /*0x707d09*/
    }
  }
  return (int)result->__pad_0; /*0x707d1c*/
}


// ==== 0x00707D20  TechnoClass::GetCrew  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::GetCrew(_DWORD *this)
{
  int v3; // ecx
  int v4; // eax
  RulesClass *v5; // eax
  int Scatter; // esi
  bool v7; // zf

  if ( !*(_BYTE *)((*(int (__thiscall **)(_DWORD *))(*this + 132))(this) + 3277) ) /*0x707d2b*/
    return 0; /*0x707d38*/
  v3 = this->Owner; /*0x707d39*/
  v4 = *(_DWORD *)(v3 + 488); /*0x707d40*/
  if ( v4 ) /*0x707d48*/
  {
    if ( v4 == 1 ) /*0x707d5a*/
    {
      v5 = MEMORY[0x8871E0]; /*0x707d5c*/
      Scatter = MEMORY[0x8871E0]->?; /*0x707d61*/
    }
    else
    {
      v7 = v4 == 2; /*0x707d69*/
      v5 = MEMORY[0x8871E0]; /*0x707d6c*/
      if ( v7 ) /*0x707d71*/
        Scatter = MEMORY[0x8871E0]->?; /*0x707d73*/
      else
        Scatter = MEMORY[0x8871E0]->?; /*0x707d7b*/
    }
  }
  else
  {
    v5 = MEMORY[0x8871E0]; /*0x707d4a*/
    Scatter = MEMORY[0x8871E0]->?; /*0x707d4f*/
  }
  if ( *(_DWORD *)(*(_DWORD *)(v3 + 52) + 188) == -1 ) /*0x707d8b*/
    return v5->?; /*0x707dc5*/
  if ( (*(unsigned __int8 (__thiscall **)(_DWORD *))(*this + 684))(this) /*0x707db2*/
    && Random::Range((_DWORD *)MEMORY[0xA8B230] + 134, 0, 99) < 15 )
  {
    return MEMORY[0x8871E0]->?; /*0x707dc4*/
  }
  return Scatter; /*0x707d37*/
}


// ==== 0x00707DD0  TechnoClass::ComputeTotalPowerDrain  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::ComputeTotalPowerDrain(#377 *this)
{
  int v2; // ebx
  int v3; // ecx
  _DWORD *i; // esi
  int v5; // eax
  int v6; // esi

  v2 = 0; /*0x707dd5*/
  v3 = this->Owner; /*0x707dd7*/
  if ( *((_BYTE *)&MEMORY[0x8871E0][1].CrateArmourSound + 80 * *(_DWORD *)(v3 + 388) + 2) /*0x707e05*/
    || *(_DWORD *)(v3 + 588) >= MEMORY[0x8871E0][1].SelfHealInfantryFrames )
  {
    if ( this->q118 ) /*0x707e07*/
    {
      for ( i = (_DWORD *)CCINIClass::GetDB((_DWORD *)this + 69); i; v2 += v5 ) /*0x707e20*/
      {
        v5 = (*(int (__thiscall **)(_DWORD *))(*i + 384))(i); /*0x707e26*/
        i = (_DWORD *)i[12]; /*0x707e2c*/
      }
    }
  }
  v6 = (*(int (__thiscall **)(#377 *))(this->hasParachute)(this); /*0x707e43*/
  return v2 + (*(int (__thiscall **)(#377 *))(this->locomotorTarget)(this) + *(_DWORD *)(v6 + 1652); /*0x707e55*/
}


// ==== 0x00707E60  TechnoClass::ComputeScanDistance  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::ComputeScanDistance(#377 *this)
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
    v3 = (*(int (__thiscall **)(#377 *))(this->auxParticles2)(this); /*0x707e88*/
    if ( *(_DWORD *)((*(int (__thiscall **)(#377 *))(this->hasParachute)(this) + 1464) && !v3 ) /*0x707ea0*/
      return *(_DWORD *)((*(int (__thiscall **)(#377 *))(this->hasParachute)(this) + 1464); /*0x707eb9*/
    return 0; /*0x707ea0*/
  }
  v4 = *(_DWORD *)((*(int (__thiscall **)(#377 *))(this->hasParachute)(this) + 1464); /*0x707ec6*/
  if ( !v4 ) /*0x707ece*/
  {
    v5 = (*(int (__thiscall **)(#377 *, int))(this->q168)(this, 1); /*0x707ee2*/
    if ( (*(int (__thiscall **)(#377 *, _DWORD))(this->q168)(this, 0) <= v5 ) /*0x707eec*/
      v4 = (*(int (__thiscall **)(#377 *, int))(this->q168)(this, 1); /*0x707f02*/
    else
      v4 = (*(int (__thiscall **)(#377 *, _DWORD))(this->q168)(this, 0); /*0x707ef4*/
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
int __thiscall BuildingClass::_vt179(#377 *this)
{
  int result; // eax
  int v3; // edi
  int *v4; // ecx
  int v5; // edx
  _DWORD *v6; // eax
  int v7; // edx
  int v8; // ecx
  char v9; // al
  int v10; // [esp-Ch] [ebp-2Ch]
  __int16 v11; // [esp+4h] [ebp-1Ch] BYREF
  int v12; // [esp+8h] [ebp-18h]
  int v13; // [esp+Ch] [ebp-14h] BYREF
  __int16 v14; // [esp+10h] [ebp-10h] BYREF
  char v15; // [esp+14h] [ebp-Ch] BYREF
  int v16; // [esp+1Ch] [ebp-4h]
  int *v17; // [esp+24h] [ebp+4h]
  int v18; // [esp+24h] [ebp+4h]

  result = (*(int (__thiscall **)(#377 *))(this->hasParachute)(this); /*0x707f6a*/
  v3 = *(_DWORD *)(result + 1460); /*0x707f70*/
  if ( v3 == -1 /*0x707fa7*/
    || (v4 = v17, result = *v17, *v17 == MEMORY[0xB0EA90]) && v17[1] == MEMORY[0xB0EA94] && v17[2] == MEMORY[0xB0EA98] )
  {
    LOBYTE(result) = 1; /*0x70806d*/
  }
  else
  {
    LOWORD(v18) = result / 256; /*0x707fbb*/
    v5 = *(_DWORD *)this; /*0x707fce*/
    HIWORD(v18) = v4[1] / 256; /*0x707fd3*/
    v13 = v18; /*0x707fdc*/
    v6 = (_DWORD *)(*(int (__thiscall **)(#377 *))(v5 + 76))(this); /*0x707fe5*/
    LOWORD(v16) = *v6 / 256; /*0x707ff8*/
    v7 = *(_DWORD *)this; /*0x708009*/
    HIWORD(v16) = v6[1] / 256; /*0x70800e*/
    v12 = v16; /*0x708017*/
    v10 = (*(int (__thiscall **)(#377 *))(v7 + 800))(this); /*0x708023*/
    v8 = *((_DWORD *)CellCoord::To_CellObj(&MEMORY[0x87F7E8], &v11) + 80) >> 8; /*0x70803b*/
    LOBYTE(v8) = v8 & 1; /*0x70803e*/
    v9 = (*(int (__thiscall **)(#377 *, _DWORD, int, int))(this->missionStatus)(this, 0, v8, v10); /*0x708046*/
    LOBYTE(result) = MapSeed::CheckTileMatch(&MEMORY[0x87F7E8], &v14, (__int16 *)&v13, v3, v9, (char)&v15, 0); /*0x70805d*/
  }
  return result; /*0x708062*/
}


// ==== 0x00708080  TechnoClass::EvaluateMission  this=AbstractClass  sig=csp ====
char __thiscall TechnoClass::EvaluateMission(void *this, TechnoClass *aP1)
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
  TechnoClass *v44; // ebx
  char *v45; // ecx
  IUnknown *v46; // esi
  IUnknown *v47; // ecx
  IUnknown **v48; // ebx
  int v50; // [esp+46h] [ebp-70h]
  int v51; // [esp+4Ah] [ebp-6Ch]
  int v52; // [esp+4Eh] [ebp-68h]
  int i; // [esp+52h] [ebp-64h]
  int v54; // [esp+52h] [ebp-64h]
  char *v55; // [esp+56h] [ebp-60h]
  void *v56; // [esp+62h] [ebp-54h]
  int v57; // [esp+66h] [ebp-50h] BYREF
  int v58; // [esp+6Ah] [ebp-4Ch] BYREF
  char v59; // [esp+6Eh] [ebp-48h] BYREF
  char v60[8]; // [esp+72h] [ebp-44h] BYREF
  _DWORD v61[3]; // [esp+7Ah] [ebp-3Ch] BYREF
  _DWORD v62[6]; // [esp+86h] [ebp-30h] BYREF
  _DWORD v63[6]; // [esp+9Eh] [ebp-18h] BYREF

  v3 = 0; /*0x70809b*/
  memset(v63, 0, sizeof(v63)); /*0x70809d*/
  memset(v62, 0, sizeof(v62)); /*0x7080a8*/
  v56 = this; /*0x7080ae*/
  v50 = 0; /*0x7080b2*/
  v52 = 0; /*0x7080b6*/
  v4 = (*(int (__thiscall **)(TechnoClass *))(*(_DWORD *)aP1->__pad_0 + 704))(aP1); /*0x7080ba*/
  v55 = 0; /*0x7080c8*/
  v5 = *(_DWORD *)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9108] + 2840) * v4; /*0x7080cc*/
  v51 = v5; /*0x7080d5*/
  if ( aP1 ) /*0x7080d9*/
  {
    LOBYTE(v4) = Object::IsAlliedWithObjectHouse(*((_DWORD **)this + 135), (IUnknown *)aP1); /*0x7080e6*/
    if ( !(_BYTE)v4 ) /*0x7080ed*/
    {
      LOBYTE(v4) = House::IsCurrentPlayer(*((#375 **)this + 135)); /*0x7080f9*/
      if ( !(_BYTE)v4 ) /*0x708100*/
      {
        LOBYTE(v4) = aP1->inLimbo; /*0x708106*/
        if ( !(_BYTE)v4 ) /*0x70810e*/
        {
          if ( MEMORY[0xA8B238] /*0x708128*/
            || (LOBYTE(v4) = (*(int (__thiscall **)(void *))(this->q0AB)(this), !(_BYTE)v4) )
          {
            if ( (*(int (__thiscall **)(TechnoClass *))(*(_DWORD *)aP1->__pad_0 + 44))(aP1) == 15 /*0x708144*/
              || (v4 = (*(int (__thiscall **)(TechnoClass *))(*(_DWORD *)aP1->__pad_0 + 44))(aP1), v4 == 1) )
            {
              v4 = (*(int (__thiscall **)(void *))(this->__pad_210)(this); /*0x70814e*/
              if ( !*(_BYTE *)(v4 + 562) ) /*0x708154*/
              {
                if ( (aP1->abstractFlags & 4) == 0 ) /*0x70816f*/
                  goto LABEL_15; /*0x70816f*/
                v6 = *(_DWORD *)&aP1[1].__pad_115[27]; /*0x708171*/
                v4 = *(_DWORD *)&aP1[1].__pad_115[35]; /*0x708177*/
                if ( v6 != -1 ) /*0x708180*/
                {
                  if ( *(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[664] - v6 >= v4 ) /*0x70818c*/
                    goto LABEL_15; /*0x70818c*/
                  v4 -= *(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[664] - v6; /*0x70818e*/
                }
                if ( v4 ) /*0x708192*/
                  return v4; /*0x708192*/
LABEL_15:
                globalHelper_0EC250( /*0x708198*/
                  *(_DWORD *)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9108] + 5344),
                  this->q21C);
                for ( i = 0; i < (int)MEMORY[0xA83DF8]; ++i ) /*0x7081b9*/
                {
                  if ( v5 <= 0 ) /*0x7081c1*/
                    break; /*0x7081c1*/
                  v7 = *(TechnoClass **)&MEMORY[0xA83DEC]->__pad_0[4 * i]; /*0x7081d1*/
                  if ( v7 ) /*0x7081d6*/
                  {
                    if ( v7->isAliveFlag ) /*0x7081dc*/
                    {
                      v8 = (*(int (__thiscall **)(_DWORD))(*(_DWORD *)v7->__pad_0 + 56))(*(_DWORD *)&MEMORY[0xA83DEC]->__pad_0[4 * i]); /*0x7081f5*/
                      if ( v8 == (*(int (__thiscall **)(void *))(this->q038)(this) ) /*0x7081fc*/
                      {
                        queuedMission = v7[1].queuedMission; /*0x708202*/
                        v10 = queuedMission && *(_BYTE *)(*(_DWORD *)(queuedMission + 36) + 246); /*0x708219*/
                        if ( (!queuedMission || v10) /*0x70828b*/
                          && v7->__pad_3F7[42]
                          && (*(unsigned __int8 (__thiscall **)(TechnoClass *))(*(_DWORD *)v7->__pad_0 + 684))(v7)
                          && v7->__pad_3F7[43]
                          && (MissionClass::GetMissionControl(v7)[6] || MEMORY[0xA8B238])
                          && (*(int (__thiscall **)(TechnoClass *, TechnoClass *, _DWORD))(*(_DWORD *)v7->__pad_0 + 956))(
                               v7,
                               aP1,
                               0) != 5 )
                        {
                          v11 = (_DWORD *)(*(int (__thiscall **)(void *))(this->q04C)(this); /*0x70829c*/
                          LOWORD(i) = *v11 / 256; /*0x7082b1*/
                          HIWORD(i) = v11[1] / 256; /*0x7082c7*/
                          v12 = (_DWORD *)(*(int (__thiscall **)(TechnoClass *, char *, _DWORD))(*(_DWORD *)v7->__pad_0 /*0x7082db*/
                                                                                               + 76))(
                                            v7,
                                            v60,
                                            0);
                          LOWORD(v55) = *v12 / 256; /*0x7082f4*/
                          HIWORD(v55) = v12[1] / 256; /*0x70830a*/
                          v56 = v55; /*0x708313*/
                          v13 = (*(int (__thiscall **)(TechnoClass *, _DWORD, _DWORD, _DWORD))(*(_DWORD *)v7->__pad_0 /*0x708319*/
                                                                                             + 188))(
                                  v7,
                                  0,
                                  0,
                                  0);
                          if ( MapSeed::CheckTileMatch( /*0x70833c*/
                                 &MEMORY[0x87F7E8],
                                 (__int16 *)&v58,
                                 (__int16 *)&v57,
                                 *(_DWORD *)(v7[1].ironTintTimer[1] + 1460),
                                 v13,
                                 (char)&v59,
                                 0) )
                          {
                            v14 = TechnoClass::ComputeThreatLevel((AbstractClass **)v7, (AbstractClass *)aP1); /*0x708348*/
                            if ( v14 ) /*0x70834f*/
                            {
                              if ( *((void **)this + 134) == this ) /*0x708357*/
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
                                      v17 = v62[v15]; /*0x708395*/
                                      if ( v17 == v52 ) /*0x70839d*/
                                      {
                                        v62[v15] = v14; /*0x70839f*/
                                        v63[v15] = v7; /*0x7083a3*/
                                      }
                                      else if ( v17 < v16 ) /*0x7083ab*/
                                      {
                                        v16 = v62[v15]; /*0x7083ad*/
                                      }
                                      ++v15; /*0x7083b3*/
                                    }
                                    while ( v15 < v50 ); /*0x7083b6*/
                                    v52 = v16; /*0x7083b8*/
                                  }
                                }
                                else
                                {
                                  v63[v3] = v7; /*0x708375*/
                                  v62[v3] = v14; /*0x70837a*/
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
                if ( *(int *)&MEMORY[0x89F690].__pad_579C[62188] <= 0 ) /*0x7083e4*/
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
                          v34 = &v62[v32]; /*0x708663*/
                          do /*0x7086a2*/
                          {
                            v35 = v62[v33]; /*0x708667*/
                            if ( *v34 < v35 ) /*0x70866f*/
                            {
                              v36 = v35 ^ *v34; /*0x708673*/
                              *v34 = v36; /*0x708675*/
                              v37 = v36 ^ v62[v33]; /*0x70867d*/
                              v62[v33] = v37; /*0x70867f*/
                              v38 = v63[v32]; /*0x708689*/
                              *v34 ^= v37; /*0x70868d*/
                              v63[v32] = v63[v33]; /*0x708693*/
                              v63[v33] = v38; /*0x708697*/
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
                      v40 = v63; /*0x7086bd*/
                      while ( 1 ) /*0x7086c1*/
                      {
                        v41 = (_DWORD *)*v40; /*0x7086c1*/
                        v42 = *(_DWORD *)(*v40 + 1492); /*0x7086c3*/
                        v43 = v42 && *(_BYTE *)(*(_DWORD *)(v42 + 36) + 246); /*0x7086da*/
                        if ( Random::Range(&MEMORY[0xA8B230]->random[1], 0, (IUnknown *)0x63) >= 66 || v43 ) /*0x7086fc*/
                          (*(void (__thiscall **)(_DWORD *, int, _DWORD))(*v41 + 488))(v41, 11, 0); /*0x70870e*/
                        else
                          (*(void (__thiscall **)(_DWORD *, int, _DWORD))(*v41 + 488))(v41, 21, 0); /*0x708704*/
                        v44 = aP1; /*0x708718*/
                        v41[134] = v56; /*0x70871f*/
                        (*(void (__thiscall **)(_DWORD *, TechnoClass *))(*v41 + 968))(v41, aP1); /*0x70872a*/
                        v45 = &v55[(*(int (__thiscall **)(_DWORD *))(*v41 + 704))(v41)]; /*0x70873e*/
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
                      if ( (v44->abstractFlags & 4) != 0 ) /*0x70877c*/
                      {
                        v46 = *(IUnknown **)&MEMORY[0xA8D63C].__pad_14B0[664]; /*0x708783*/
                        v4 = Math::RoundToInt(*(double *)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9108] + 5336) * 900.0); /*0x708795*/
                        v47 = (IUnknown *)v61[1]; /*0x70879a*/
                        v48 = (IUnknown **)&v44[1].__pad_115[27]; /*0x70879e*/
                        *v48 = v46; /*0x7087a4*/
                        v48[1] = v47; /*0x7087a6*/
                        v48[2] = (IUnknown *)v4; /*0x7087a9*/
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
                    v19 = *(TechnoClass **)(*(_DWORD *)&MEMORY[0x89F690].__pad_579C[62176] + 4 * v54); /*0x708407*/
                    if ( v19 ) /*0x70840c*/
                    {
                      if ( v19->isAliveFlag ) /*0x708412*/
                      {
                        v20 = (*(int (__thiscall **)(_DWORD))(*(_DWORD *)v19->__pad_0 + 56))(*(_DWORD *)(*(_DWORD *)&MEMORY[0x89F690].__pad_579C[62176] + 4 * v54)); /*0x708427*/
                        if ( v20 == (*(int (__thiscall **)(void *))(this->q038)(this) ) /*0x708432*/
                        {
                          v21 = v19[1].queuedMission; /*0x708438*/
                          v22 = v21 && *(_BYTE *)(*(_DWORD *)(v21 + 36) + 246); /*0x70844f*/
                          if ( (!v21 || v22) /*0x7084db*/
                            && v19->__pad_3F7[42]
                            && (*(unsigned __int8 (__thiscall **)(TechnoClass *))(*(_DWORD *)v19->__pad_0 + 684))(v19)
                            && v19->__pad_3F7[43]
                            && (MissionClass::GetMissionControl(v19)[6] || MEMORY[0xA8B238])
                            && (*(int (__thiscall **)(TechnoClass *, TechnoClass *, _DWORD))(*(_DWORD *)v19->__pad_0
                                                                                           + 956))(
                                 v19,
                                 aP1,
                                 0) != 5
                            && !*(_BYTE *)(v19[1].ironTintTimer[2] + 1516)
                            && !v19->spawnManager )
                          {
                            v23 = (_DWORD *)(*(int (__thiscall **)(void *))(this->q04C)(this); /*0x7084f4*/
                            LOWORD(v55) = *v23 / 256; /*0x708509*/
                            HIWORD(v55) = v23[1] / 256; /*0x70851f*/
                            v56 = v55; /*0x70852c*/
                            v24 = (_DWORD *)(*(int (__thiscall **)(TechnoClass *, int *, _DWORD))(*(_DWORD *)v19->__pad_0 /*0x708533*/
                                                                                                + 76))(
                                              v19,
                                              &v57,
                                              0);
                            LOWORD(v54) = *v24 / 256; /*0x70854c*/
                            HIWORD(v54) = v24[1] / 256; /*0x708562*/
                            v25 = (*(int (__thiscall **)(TechnoClass *, _DWORD, _DWORD, _DWORD))(*(_DWORD *)v19->__pad_0 /*0x708571*/
                                                                                               + 188))(
                                    v19,
                                    0,
                                    0,
                                    0);
                            if ( MapSeed::CheckTileMatch( /*0x708594*/
                                   &MEMORY[0x87F7E8],
                                   (__int16 *)&v57,
                                   (__int16 *)&v58,
                                   *(_DWORD *)(v19[1].ironTintTimer[2] + 1460),
                                   v25,
                                   (char)v61,
                                   0) )
                            {
                              v26 = TechnoClass::ComputeThreatLevel((AbstractClass **)v19, (AbstractClass *)aP1); /*0x7085a4*/
                              if ( v26 ) /*0x7085ab*/
                              {
                                if ( !this->q2DC ) /*0x7085ad*/
                                {
                                  v27 = v26 < 0; /*0x7085b7*/
                                  if ( v26 > 0 ) /*0x7085b9*/
                                  {
                                    if ( *((void **)this + 134) == this ) /*0x7085c1*/
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
                                        v30 = v62[v28]; /*0x7085fb*/
                                        if ( v30 == v52 ) /*0x708603*/
                                        {
                                          v62[v28] = v26; /*0x708605*/
                                          v63[v28] = v19; /*0x708609*/
                                        }
                                        else if ( v30 < v29 ) /*0x708611*/
                                        {
                                          v29 = v62[v28]; /*0x708613*/
                                        }
                                        ++v28; /*0x708619*/
                                      }
                                      while ( v28 < v50 ); /*0x70861c*/
                                      v52 = v29; /*0x70861e*/
                                    }
                                  }
                                  else
                                  {
                                    v63[v18] = v19; /*0x7085db*/
                                    v62[v18] = v26; /*0x7085e0*/
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
                    if ( ++v54 >= *(int *)&MEMORY[0x89F690].__pad_579C[62188] ) /*0x708637*/
                      goto LABEL_89; /*0x708637*/
                  }
                }
LABEL_110:
                LOBYTE(v4) = (_BYTE)v55; /*0x70875c*/
                if ( (int)v55 <= v51 ) /*0x708766*/
                  return v4; /*0x708766*/
                v44 = aP1; /*0x708768*/
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
bool __thiscall ValidateAttackTarget(int this, TechnoClass *aP1, int a3)
{
  int v4; // ecx
  int v5; // edi
  int v6; // ebx
  int v7; // eax
  int v8; // edi
  int v9; // eax
  int v10; // eax
  int eax42; // eax
  TechnoClass *v11; // eax
  int v13; // esi
  double v15; // [esp+10h] [ebp-8h]

  if ( !aP1 /*0x708817*/
    || !*(_BYTE *)((*(int (__thiscall **)(int))(this->__pad_210)(this) + 3482)
    || *(_DWORD *)(this + 732)
    || *(_DWORD *)(this + 728)
    || *(_DWORD *)(this + 460) && !*(_BYTE *)(*(_DWORD *)(this + 540) + 492) )
  {
    return 0; /*0x708817*/
  }
  v4 = *(_DWORD *)(this + 700); /*0x708825*/
  if ( v4 ) /*0x70882d*/
  {
    if ( CaptureManagerClass::CannotControlAnyMore(v4) ) /*0x70882f*/
      return 0; /*0x70882f*/
  }
  if ( *(_DWORD *)(this + 720) /*0x708859*/
    || (unsigned __int8)House::IsCurrentPlayer(*(#375 **)(this + 540)) && *(_DWORD *)(this + 692) )
  {
    return 0; /*0x708859*/
  }
  if ( !MissionClass::GetMissionControl((_DWORD *)this)[8] ) /*0x70886e*/
    return 0; /*0x70886e*/
  if ( Object::IsAlliedWithObjectHouse(*(_DWORD **)(this + 540), (IUnknown *)aP1) ) /*0x708880*/
    return 0; /*0x708880*/
  if ( (*(unsigned __int8 (__thiscall **)(TechnoClass *, _DWORD))(*(_DWORD *)aP1->__pad_0 + 200))( /*0x708899*/
         aP1,
         *(_DWORD *)(this + 540)) )
  {
    return 0; /*0x708899*/
  }
  if ( TechnoClass::GetValue((_DWORD *)this, (ObjectClass *)0xFFFFFFFF) <= 0 ) /*0x7088b2*/
    return 0; /*0x7088b2*/
  if ( !(*(unsigned __int8 (__thiscall **)(int))(this->q0AB)(this) ) /*0x7088bc*/
    return 0; /*0x7088bc*/
  v5 = (*(int (__thiscall **)(int))(this->__pad_210)(this); /*0x7088d9*/
  v6 = (*(int (__thiscall **)(int, TechnoClass *))(this->q0B9)(this, aP1); /*0x7088e1*/
  v7 = (*(int (__thiscall **)(int, TechnoClass *, int))(this->q3BC)(this, aP1, v6); /*0x7088ed*/
  if ( v7 == 5 || v7 == 6 ) /*0x7088ff*/
    return 0; /*0x7088ff*/
  if ( (unsigned __int8)House::IsCurrentPlayer(*(#375 **)(this + 540)) /*0x708923*/
    && (*(int (__thiscall **)(TechnoClass *))(*(_DWORD *)aP1->__pad_0 + 44))(aP1) == 6 )
  {
    if ( (*(int (__thiscall **)(int))(this->q02C)(this) == 15 && *(_BYTE *)(v5 + 3778) ) /*0x708935*/
      return 0; /*0x708935*/
    if ( VeterancyStruct::IsVeteran((float *)(this + 336)) || VeterancyStruct::IsElite((float *)(this + 336)) ) /*0x708956*/
    {
      v8 = (*(int (__thiscall **)(int))(this->__pad_210)(this); /*0x70896b*/
      if ( VeterancyStruct::IsVeteran((float *)(this + 336)) ) /*0x70896d*/
      {
        if ( *(_BYTE *)(v8 + 682) ) /*0x708976*/
          return 0; /*0x708976*/
      }
      if ( VeterancyStruct::IsElite((float *)(this + 336)) && (*(_BYTE *)(v8 + 682) || *(_BYTE *)(v8 + 700)) ) /*0x70899d*/
        return 0; /*0x70899d*/
    }
  }
  if ( (unsigned __int8)House::IsCurrentPlayer(*(#375 **)(this + 540)) ) /*0x7089b5*/
  {
    if ( (*(int (__thiscall **)(int))(this->q02C)(this) == 1 ) /*0x7089c8*/
    {
      v9 = *(_DWORD *)(*(_DWORD *)(this + 1732) + 1028); /*0x7089d0*/
      if ( v9 ) /*0x7089d8*/
      {
        if ( *(_BYTE *)(v9 + 5834) ) /*0x7089da*/
          return 0; /*0x7089da*/
      }
    }
  }
  if ( (unsigned __int8)House::IsCurrentPlayer(*(#375 **)(this + 540)) ) /*0x7089ee*/
  {
    if ( !*(_BYTE *)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9108] + 6124) /*0x708a11*/
      && (*(int (__thiscall **)(int))(this->q02C)(this) != 6 )
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
      eax42 = *(_DWORD *)(this + 1492); /*0x708a3f*/
      if ( eax42 ) /*0x708a47*/
      {
        if ( *(_BYTE *)(*(_DWORD *)(eax42 + 36) + 175) ) /*0x708a4c*/
          return 0; /*0x708a4c*/
      }
    }
  }
  if ( !(unsigned __int8)House::IsCurrentPlayer(*(#375 **)(this + 540)) ) /*0x708a60*/
  {
    v11 = *(TechnoClass **)(this + 692); /*0x708a69*/
    if ( v11 ) /*0x708a71*/
    {
      if ( (v11->abstractFlags & 2) != 0 ) /*0x708a7f*/
      {
        v15 = TechnoClass::ComputeDamage((_DWORD *)this, (ObjectClass *)v11, &MEMORY[0xB077F8].__pad_579C[6908]); /*0x708a8e*/
        if ( TechnoClass::ComputeDamage((_DWORD *)this, (ObjectClass *)aP1, &MEMORY[0xB077F8].__pad_579C[6908]) < v15 ) /*0x708aa8*/
          return 0; /*0x708aa8*/
      }
    }
  }
  if ( this && (*(_BYTE *)(this + 20) & 4) != 0 && aP1 == *(TechnoClass **)(this + 1684) ) /*0x708ac3*/
    return 0; /*0x708ac3*/
  v13 = *(_DWORD *)(*(int (__thiscall **)(int, int))(*(_DWORD *)this + 1016))(this, v6); /*0x708ad0*/
  return !v13 /*0x708b1a*/
      || !*(_DWORD *)(v13 + 172)
      || *(double *)(*(_DWORD *)(v13 + 172)
                   + 8 * *(_DWORD *)((*(int (__thiscall **)(TechnoClass *))(*(_DWORD *)aP1->__pad_0 + 132))(aP1) + 156)
                   + 160) > 0.0099999998;
}


// ==== 0x00708B30  ObjectClass::GetTypeVt28  this=TechnoClass  sig=csp ====
int __thiscall ObjectClass::GetTypeVt28(#377 *this)
{
  int v1; // eax

  v1 = (*(int (__thiscall **)(#377 *))(this->hasParachute)(this); /*0x708b32*/
  return (*(int (__thiscall **)(int))(*(_DWORD *)v1 + 112))(v1);
}


// ==== 0x00708B40  TechnoClass::GetCostMultiplier  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::GetCostMultiplier(#377 *this)
{
  int v2; // edi
  int v3; // edi
  int v5; // ecx

  v2 = (*(int (__thiscall **)(#377 *))(this->hasParachute)(this); /*0x708b4c*/
  if ( !v2 ) /*0x708b50*/
    return 0; /*0x708bad*/
  if ( (*(int (__thiscall **)(#377 *))(this->fallRate)(this) != 6 ) /*0x708b5c*/
    return *(_DWORD *)(v2 + 1648); /*0x708b5c*/
  if ( (*(int (__thiscall **)(#377 *))(this->q1020)(this) > 0 ) /*0x708b6a*/
  {
    v3 = MEMORY[0x8871E0]->?[0]; /*0x708b74*/
    return v3 * (*(int (__thiscall **)(#377 *))(this->q1020)(this); /*0x708b87*/
  }
  v5 = this->alignmentPaddingB9; /*0x708b88*/
  if ( v5 ) /*0x708b90*/
    return *(_DWORD *)((*(int (__thiscall **)(int))(*(_DWORD *)v5 + 132))(v5) + 1648); /*0x708b9a*/
  else
    return *(_DWORD *)(v2 + 1648); /*0x708ba3*/
}


// ==== 0x00708BC0  TechnoClass::ComputeAverageValue  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::ComputeAverageValue(#377 *this)
{
  int result; // eax

  result = (*(int (__thiscall **)(#377 *))(this->hasParachute)(this); /*0x708bc8*/
  if ( *(_DWORD *)(result + 2048) ) /*0x708bce*/
  {
    Float4::Sum((float *)this + 207); /*0x708bde*/
    return (*(int (__thiscall **)(#377 *))(this->hasParachute)(this); /*0x708beb*/
  }
  return result; /*0x708bfc*/
}


// ==== 0x00708C10  TechnoClass::GetGlobalValue  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::GetGlobalValue(#377 *this)
{
  _DWORD *v2; // [esp+8h] [ebp+8h]

  *v2 = MEMORY[0xB0EA50]; /*0x708c1a*/
  return 0; /*0x708c1e*/
}


// ==== 0x00708C30  TechnoClass::GetAmmoCount  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass_GetAmmoCount(void *this)
{
  int v2; // eax
  double v3; // st7
  int v4; // eax
  int v5; // eax
  int v6; // eax
  int v7; // ecx
  int result; // eax
  int v9; // [esp+4h] [ebp-14h]
  double v10; // [esp+8h] [ebp-10h]

  switch ( *(_DWORD *)((*(int (__thiscall **)(void *))(this->hasParachute)(this) + 980) ) /*0x708c4e*/
  {
    case 1: /*0x708c4e*/
      v10 = (double)*((int *)this + 191); /*0x708c5f*/
      v2 = (*(int (__thiscall **)(void *))(this->hasParachute)(this); /*0x708c63*/
      v3 = (double)(*(int (__thiscall **)(int))(*(_DWORD *)v2 + 116))(v2); /*0x708c74*/
      goto LABEL_7; /*0x708c78*/
    case 2: /*0x708c4e*/
      v10 = Float4::Sum((float *)this + 207); /*0x708ce8*/
      v3 = (double)*(int *)((*(int (__thiscall **)(void *))(this->hasParachute)(this) + 2048); /*0x708cf2*/
      goto LABEL_7; /*0x708cf2*/
    case 3: /*0x708c4e*/
      v10 = (double)*((int *)this + 69); /*0x708cbe*/
      v5 = (*(int (__thiscall **)(void *))(this->hasParachute)(this); /*0x708cc2*/
      v3 = (double)(*(int (__thiscall **)(int))(*(_DWORD *)v5 + 116))(v5); /*0x708cd3*/
      goto LABEL_7; /*0x708cd7*/
    case 5: /*0x708c4e*/
      if ( !this->rockerLinkedUnit ) /*0x708c82*/
        goto LABEL_10; /*0x708c82*/
      v10 = (double)TechnoClass::processPowerDrain(); /*0x708c99*/
      v4 = (*(int (__thiscall **)(void *))(this->hasParachute)(this); /*0x708c9d*/
      v3 = (double)(*(int (__thiscall **)(int))(*(_DWORD *)v4 + 116))(v4); /*0x708cae*/
LABEL_7:
      v6 = (*(int (__thiscall **)(void *))(this->hasParachute)(this); /*0x708cf8*/
      v9 = (*(int (__thiscall **)(int))(*(_DWORD *)v6 + 116))(v6); /*0x708d0d*/
      v7 = Math::RoundToInt((double)v9 * (v10 / v3) + 0.5); /*0x708d2a*/
      if ( !v7 ) /*0x708d2e*/
        v7 = v10 > 0.0; /*0x708d41*/
      result = v7; /*0x708d46*/
      break; /*0x708d4c*/
    default:
LABEL_10:
      result = 0; /*0x708d4d*/
      break; /*0x708d4d*/
  }
  return result; /*0x708d48*/
}


// ==== 0x00708D70  TechnoClass::Vt170  this=TechnoClass  sig=csp ====
_DWORD *__thiscall TechnoClass_Vt170(void *this, _DWORD *a2)
{
  int v2; // ecx
  void *v4; // [esp+0h] [ebp-4h] BYREF

  v4 = this; /*0x708d70*/
  v2 = *(_DWORD *)(*(int (__thiscall **)(void *, void **))(this->airstrike)(this, &v4); /*0x708d7e*/
  *a2 = v2; /*0x708d84*/
  return a2; /*0x708d87*/
}


// ==== 0x00708D90  TechnoClass::SetMoveDestination  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::SetMoveDestination(#377 *this)
{
  int result; // eax
  int v3; // [esp+Ch] [ebp+4h]

  LOBYTE(result) = g_MoveFeedback; /*0x708d90*/
  if ( g_MoveFeedback && v3 != -1 ) /*0x708da4*/
  {
    result = House::IsHumanPlayer(*((#375 **)this + 135)); /*0x708dac*/
    if ( (_BYTE)result ) /*0x708db3*/
      this->currentWeaponSlot_e = v3; /*0x708db5*/
  }
  return result; /*0x708dbb*/
}


// ==== 0x00708DC0  TechnoClass::GetPrimaryTargetOrFallback  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::GetPrimaryTargetOrFallback(#377 *this)
{
  int v2; // edi
  int v3; // eax

  if ( *(_DWORD *)((*(int (__thiscall **)(#377 *))(this->hasParachute)(this) + 1372) == -1 ) /*0x708dd2*/
    return (*(int (__thiscall **)(#377 *))(*(_DWORD *)this + 856))(this); /*0x708df5*/
  v2 = *(_DWORD *)this; /*0x708dd5*/
  v3 = (*(int (__thiscall **)(#377 *))(this->hasParachute)(this); /*0x708dd9*/
  return (*(int (__thiscall **)(#377 *, _DWORD))(v2 + 852))(this, *(_DWORD *)(v3 + 1372)); /*0x708def*/
}


// ==== 0x00708E00  TechnoClass::PickAlternateTarget  this=TechnoClass  sig=csp ====
void __fastcall TechnoClass_PickAlternateTarget(_BYTE *a1)
{
  int v2; // eax
  int v3; // edi
  int v4; // eax
  int v5; // edi
  int v6; // eax

  if ( !a1[1272] )
  {
    if ( a1
      && (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)a1 + 44))(a1) == 15
      && (v2 = (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)a1 + 44))(a1),
          (unsigned __int8)TechnoClass::IsMission27to30(v2 == 15 ? a1 : 0)) )
    {
      if ( *(_DWORD *)((*(int (__thiscall **)(_BYTE *))(*(_DWORD *)a1 + 132))(a1) + 1428) != -1 ) /*0x708e4f*/
      {
        v3 = *(_DWORD *)a1; /*0x708e51*/
        v4 = (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)a1 + 132))(a1); /*0x708e55*/
        (*(void (__thiscall **)(_BYTE *, _DWORD))(v3 + 852))(a1, *(_DWORD *)(v4 + 1428)); /*0x708e64*/
        a1[1272] = 0; /*0x708e6a*/
        return; /*0x708e73*/
      }
    }
    else if ( *(_DWORD *)((*(int (__thiscall **)(_BYTE *))(*(_DWORD *)a1 + 132))(a1) + 1424) != -1 ) /*0x708e85*/
    {
      v5 = *(_DWORD *)a1; /*0x708e87*/
      v6 = (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)a1 + 132))(a1); /*0x708e8b*/
      (*(void (__thiscall **)(_BYTE *, _DWORD))(v5 + 852))(a1, *(_DWORD *)(v6 + 1424)); /*0x708e9a*/
    }
  }
  a1[1272] = 0; /*0x708ea0*/
}


// ==== 0x00708EB0  TechnoClass::SelectRandomTarget  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::SelectRandomTarget(#377 *this)
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

  if ( this->mindControlRingAnim ) /*0x708eb5*/
  {
    v2 = (*(int (__thiscall **)(#377 *))(this->hasParachute)(this); /*0x708ec1*/
    v3 = *(_DWORD *)(v2 + 1088); /*0x708ec7*/
    result = v2 + 1072; /*0x708ecd*/
    if ( !v3 ) /*0x708ed4*/
      return result; /*0x708ed4*/
    v5 = Random::State(MEMORY[0x886B88]); /*0x708ee8*/
    v6 = (*(int (__thiscall **)(#377 *))(this->hasParachute)(this) + 1072; /*0x708ef2*/
    return (*(int (__thiscall **)(#377 *, _DWORD))(this->q354)( /*0x708fa7*/
             this,
             *(_DWORD *)(*(_DWORD *)(v6 + 4) + 4 * (v5 % *(_DWORD *)(v6 + 16))));
  }
  if ( !this->airstrikeTintStage_e ) /*0x708f05*/
  {
    v11 = (*(int (__thiscall **)(#377 *))(this->hasParachute)(this); /*0x708f62*/
    v12 = *(_DWORD *)(v11 + 1060); /*0x708f68*/
    result = v11 + 1044; /*0x708f6e*/
    if ( !v12 ) /*0x708f75*/
      return result; /*0x708f75*/
    v5 = Random::State(MEMORY[0x886B88]); /*0x708f85*/
    v6 = (*(int (__thiscall **)(#377 *))(this->hasParachute)(this) + 1044; /*0x708f8f*/
    return (*(int (__thiscall **)(#377 *, _DWORD))(this->q354)( /*0x708f8f*/
             this,
             *(_DWORD *)(*(_DWORD *)(v6 + 4) + 4 * (v5 % *(_DWORD *)(v6 + 16))));
  }
  v7 = (*(int (__thiscall **)(#377 *))(this->hasParachute)(this); /*0x708f0b*/
  v8 = *(_DWORD *)(v7 + 1116); /*0x708f11*/
  result = v7 + 1100; /*0x708f17*/
  if ( v8 ) /*0x708f1e*/
  {
    v9 = Random::State(MEMORY[0x886B88]); /*0x708f2e*/
    v10 = (*(int (__thiscall **)(#377 *))(this->hasParachute)(this); /*0x708f34*/
    return (*(int (__thiscall **)(#377 *, _DWORD))(this->q354)( /*0x708f54*/
             this,
             *(_DWORD *)(*(_DWORD *)(v10 + 1104) + 4 * (v9 % *(_DWORD *)(v10 + 1116))));
  }
  return result; /*0x708f5a*/
}


// ==== 0x00708FC0  TechnoClass::ResponseMove_Pickup  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::ResponseMove_Pickup(#377 *this)
{
  int v2; // eax
  int v3; // ecx
  int result; // eax
  unsigned int v5; // edi
  int v6; // eax

  v2 = (*(int (__thiscall **)(#377 *))(this->hasParachute)(this); /*0x708fc5*/
  v3 = *(_DWORD *)(v2 + 1144); /*0x708fcb*/
  result = v2 + 1128; /*0x708fd1*/
  if ( v3 ) /*0x708fd8*/
  {
    v5 = Random::State(MEMORY[0x886B88]); /*0x708fea*/
    v6 = (*(int (__thiscall **)(#377 *))(this->hasParachute)(this); /*0x708fec*/
    return (*(int (__thiscall **)(#377 *, _DWORD))(this->q354)( /*0x70900c*/
             this,
             *(_DWORD *)(*(_DWORD *)(v6 + 1132) + 4 * (v5 % *(_DWORD *)(v6 + 1144))));
  }
  return result; /*0x709014*/
}


// ==== 0x00709020  TechnoClass::GetSecondaryTargetOrFallback  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::GetSecondaryTargetOrFallback(#377 *this)
{
  int v2; // edi
  int v3; // eax

  if ( *(_DWORD *)((*(int (__thiscall **)(#377 *))(this->hasParachute)(this) + 1368) == -1 ) /*0x709032*/
    return (*(int (__thiscall **)(#377 *))(*(_DWORD *)this + 872))(this); /*0x709055*/
  v2 = *(_DWORD *)this; /*0x709035*/
  v3 = (*(int (__thiscall **)(#377 *))(this->hasParachute)(this); /*0x709039*/
  return (*(int (__thiscall **)(#377 *, _DWORD))(v2 + 852))(this, *(_DWORD *)(v3 + 1368)); /*0x70904f*/
}


// ==== 0x00709060  TechnoClass::GetTertiaryTargetOrFallback  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::GetTertiaryTargetOrFallback(#377 *this)
{
  int v2; // edi
  int v3; // eax

  if ( *(_DWORD *)((*(int (__thiscall **)(#377 *))(this->hasParachute)(this) + 1404) == -1 ) /*0x709072*/
    return (*(int (__thiscall **)(#377 *))(*(_DWORD *)this + 872))(this); /*0x709095*/
  v2 = *(_DWORD *)this; /*0x709075*/
  v3 = (*(int (__thiscall **)(#377 *))(this->hasParachute)(this); /*0x709079*/
  return (*(int (__thiscall **)(#377 *, _DWORD))(v2 + 852))(this, *(_DWORD *)(v3 + 1404)); /*0x70908f*/
}


// ==== 0x007090A0  TechnoClass::VoiceAttack  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::VoiceAttack(#377 *this)
{
  int v2; // edi
  int v3; // eax
  int EnterGrinderSound; // edi
  int v5; // eax
  int v6; // ecx
  int result; // eax
  unsigned int v8; // edi
  int v9; // eax
  int v10; // [esp+Ch] [ebp+4h]

  v2 = (*(int (__thiscall **)(#377 *, int))(this->spawnManager)(this, v10); /*0x7090b5*/
  v3 = *(_DWORD *)(*(int (__thiscall **)(#377 *, int))(this->q3F8)(this, v2); /*0x7090c0*/
  if ( v3 && *(int *)(v3 + 164) < 0 && (unsigned __int8)ObjectClass::StepCleanup(this, MEMORY[0x84314C]) ) /*0x7090d7*/
  {
    EnterGrinderSound = MEMORY[0x8871E0]->MaxLowPowerProductionSpeed; /*0x7090e5*/
  }
  else if ( VeterancyStruct::IsElite((float *)this + 84) ) /*0x7090f3*/
  {
    if ( v2 ) /*0x7090fe*/
      EnterGrinderSound = *(_DWORD *)((*(int (__thiscall **)(#377 *))(this->hasParachute)(this) + 1420); /*0x70911c*/
    else
      EnterGrinderSound = *(_DWORD *)((*(int (__thiscall **)(#377 *))(this->hasParachute)(this) + 1412); /*0x70910a*/
  }
  else if ( v2 ) /*0x709126*/
  {
    EnterGrinderSound = *(_DWORD *)((*(int (__thiscall **)(#377 *))(this->hasParachute)(this) + 1416); /*0x709144*/
  }
  else
  {
    EnterGrinderSound = *(_DWORD *)((*(int (__thiscall **)(#377 *))(this->hasParachute)(this) + 1408); /*0x709132*/
  }
  v5 = (*(int (__thiscall **)(#377 *))(this->hasParachute)(this); /*0x70914e*/
  v6 = *(_DWORD *)(v5 + 1172); /*0x709154*/
  result = v5 + 1156; /*0x70915a*/
  if ( !v6 ) /*0x709161*/
  {
    if ( EnterGrinderSound == -1 ) /*0x709166*/
      return result; /*0x709166*/
    return (*(int (__thiscall **)(#377 *, int))(this->q354)(this, EnterGrinderSound); /*0x709166*/
  }
  if ( EnterGrinderSound != -1 ) /*0x70917b*/
    return (*(int (__thiscall **)(#377 *, int))(this->q354)(this, EnterGrinderSound); /*0x709175*/
  v8 = Random::State(MEMORY[0x886B88]); /*0x70919c*/
  v9 = (*(int (__thiscall **)(#377 *))(this->hasParachute)(this); /*0x70919e*/
  return (*(int (__thiscall **)(#377 *, _DWORD))(this->q354)( /*0x709173*/
           this,
           *(_DWORD *)(*(_DWORD *)(v9 + 1160) + 4 * (v8 % *(_DWORD *)(v9 + 1172))));
}


// ==== 0x007091D0  FootClass::CanEnterBuilding  this=AbstractClass  sig=csp ====
bool __thiscall sub_7091D0(int *this)
{
  int v2; // ecx
  bool v3; // bl
  bool result; // al

  result = 0; /*0x70927e*/
  if ( !(*(unsigned __int8 (__thiscall **)(int *))(*this + 476))(this) /*0x709226*/
    && !this->q2DC
    && *(_BYTE *)((*(int (__thiscall **)(int *))(*this + 132))(this) + 3481)
    && ((*(int (__thiscall **)(int *))(*this + 44))(this) != 6
     || !*(_BYTE *)(this->__pad_148 + 5499)
     || (*(int (__thiscall **)(int *))(*this + 1032))(this)) )
  {
    v2 = this->q2BC; /*0x709230*/
    v3 = v2 && CaptureManagerClass::CannotControlAnyMore(v2); /*0x709243*/
    if ( (!(*(unsigned __int8 (__thiscall **)(int *))(*this + 816))(this) /*0x70926e*/
       || !(unsigned __int8)House::IsCurrentPlayer((#375 *)this->q21C))
      && !v3
      && (*(unsigned __int8 (__thiscall **)(int *))(*this + 684))(this) )
    {
      return 1; /*0x70922e*/
    }
  }
  return result; /*0x709278*/
}


// ==== 0x00709290  FootClass::CanEnterCell  this=TechnoClass  sig=csp ====
bool __usercall sub_709290@<al>(int a1@<ecx>, int a2@<ebx>)
{
  int v3; // eax
  int v4; // eax
  bool result; // al
  _DWORD *v6; // ecx
  int v7; // edi
  _DWORD *v8; // ecx
  int v9; // edi
  int *v10; // eax
  int v11; // eax
  bool v12; // bl
  bool v13; // al

  if ( !*(_DWORD *)(a1 + 692) && !(unsigned __int8)House::IsCurrentPlayer(*(#375 **)(a1 + 540)) ) /*0x7092aa*/
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
  result = FootClass::CanEnterBuilding((int *)a1); /*0x7092f4*/
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
        v6 = *(_DWORD **)(a1 + 1300); /*0x70934b*/
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
              v8 = *(_DWORD **)(a1 + 1300); /*0x7093be*/
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
char __thiscall sub_709480(_DWORD *this)
{
  int v2; // ebx
  int v3; // edi
  int v4; // eax
  char result; // al
  _BYTE v6[12]; // [esp+8h] [ebp-Ch] BYREF

  if ( !FootClass::CanEnterCell((int)this, 0) ) /*0x709489*/
    return 0; /*0x7094d5*/
  v2 = this->q2B4; /*0x709497*/
  v3 = *this; /*0x70949e*/
  this->q13F = MEMORY[0xA8ED84]; /*0x7094a9*/
  v4 = (*(int (__thiscall **)(_DWORD *, _BYTE *, int))(v3 + 72))(this, v6, 1); /*0x7094af*/
  result = (*(int (__thiscall **)(_DWORD *, int))(v3 + 924))(this, v4); /*0x7094b5*/
  if ( result ) /*0x7094be*/
  {
    if ( this->q2B4 != v2 ) /*0x7094c6*/
      this->__pad_143 = 1; /*0x7094c8*/
  }
  return result; /*0x7094cf*/
}


// ==== 0x00709550  ObjectClass::SelectTargetByWeight  this=TechnoClass  sig=csp ====
void __usercall SelectTargetByWeight(_DWORD *a1@<ecx>, int a2@<esi>)
{
  int i; // edx
  int v4; // eax
  int v5; // ecx
  _DWORD *v6; // esi
  int v7; // eax
  int v8; // ecx
  int v9; // eax
  int v10; // ebp
  int v11; // eax
  int v12; // ebx
  int v13; // eax
  int v14; // esi
  _DWORD *v15; // ecx
  int v16; // eax
  _DWORD *v17; // esi
  int v18; // eax
  int v19; // ebp
  int v20; // edx
  int v21; // eax
  int v22; // ebx
  int v23; // edx
  int v24; // esi
  int k; // eax
  int j; // [esp+10h] [ebp-38h]
  int v28; // [esp+14h] [ebp-34h]
  void **v29; // [esp+18h] [ebp-30h] BYREF
  void *Block; // [esp+1Ch] [ebp-2Ch]
  int v31; // [esp+20h] [ebp-28h]
  int v32; // [esp+24h] [ebp-24h]
  int v33; // [esp+28h] [ebp-20h]
  int v34; // [esp+2Ch] [ebp-1Ch]
  void **v35; // [esp+30h] [ebp-18h] BYREF
  void *v36; // [esp+34h] [ebp-14h]
  int v37; // [esp+38h] [ebp-10h]
  char v38; // [esp+3Dh] [ebp-Bh]
  int v39; // [esp+40h] [ebp-8h]
  int v40; // [esp+44h] [ebp-4h]

  if ( a1[282] ) /*0x709559*/
  {
    for ( i = a1[288] - 1; i >= 0; --i ) /*0x70957f*/
    {
      v4 = 0; /*0x709587*/
      v5 = a1[282]; /*0x70958c*/
      if ( v5 <= 0 ) /*0x709594*/
      {
LABEL_8:
        v7 = a1[288]; /*0x7095a8*/
        if ( i < v7 ) /*0x7095b0*/
        {
          v8 = v7 - 1; /*0x7095b2*/
          v9 = i; /*0x7095b5*/
          for ( a1[288] = v8; v9 < a1[288]; *(_DWORD *)(a1[285] + 4 * v9 - 4) = *(_DWORD *)(a1[285] + 4 * v9) ) /*0x7095bf*/
            ++v9; /*0x7095c7*/
        }
      }
      else
      {
        v6 = (_DWORD *)a1[279]; /*0x709596*/
        while ( *(_DWORD *)(a1[285] + 4 * i) != *v6 ) /*0x70959e*/
        {
          ++v4; /*0x7095a0*/
          ++v6; /*0x7095a1*/
          if ( v4 >= v5 ) /*0x7095a6*/
            goto LABEL_8; /*0x7095a6*/
        }
      }
    }
    AbstractClassVector::Construct(&v35, 0, 0); /*0x7095e2*/
    v35 = &vt_DynamicVectorClass_AbstractClass; /*0x7095f2*/
    v40 = 10; /*0x7095fa*/
    v39 = 0; /*0x7095fe*/
    VectorClass::Construct(&v29, 0, 0); /*0x709602*/
    v10 = a1[288]; /*0x709607*/
    v29 = &vt_DynamicVectorClass_int; /*0x70960d*/
    v34 = 10; /*0x709617*/
    v33 = 0; /*0x70961b*/
    if ( v10 > 0 ) /*0x70961f*/
    {
      v11 = 0; /*0x70962b*/
      v28 = a1[282]; /*0x70962f*/
      for ( j = 0; j < v28; ++j ) /*0x709637*/
      {
        v12 = 4 * v11; /*0x709643*/
        v13 = 0; /*0x70964a*/
        v14 = *(_DWORD *)(a1[279] + v12); /*0x70964c*/
        v15 = (_DWORD *)a1[285]; /*0x709653*/
        while ( v14 != *v15 ) /*0x70965b*/
        {
          ++v13; /*0x709661*/
          ++v15; /*0x709662*/
          if ( v13 >= v10 ) /*0x709667*/
          {
            if ( v39 < v37 /*0x709696*/
              || (v38 || !v37)
              && v40 > 0
              && ((unsigned __int8 (__thiscall *)(void ***, int, _DWORD))v35[2])(&v35, v40 + v37, 0) )
            {
              v16 = v39++; /*0x7096a1*/
              *((_DWORD *)v36 + v16) = v14; /*0x7096ac*/
            }
            v17 = (_DWORD *)(v12 + a1[273]); /*0x7096bd*/
            if ( v33 < v31 /*0x7096e4*/
              || (BYTE1(v32) || !v31)
              && v34 > 0
              && ((unsigned __int8 (__thiscall *)(void ***, int, _DWORD))v29[2])(&v29, v34 + v31, 0) )
            {
              v18 = v33++; /*0x7096f3*/
              *((_DWORD *)Block + v18) = *v17; /*0x7096fc*/
            }
            break; /*0x7096fc*/
          }
        }
        v11 = j + 1; /*0x7096ff*/
      }
    }
    if ( v39 ) /*0x70971a*/
    {
      v23 = 0; /*0x709765*/
      v24 = 0; /*0x709767*/
      for ( k = 0; k < v39; ++k ) /*0x70976d*/
      {
        if ( *((_DWORD *)Block + k) > v23 ) /*0x70977c*/
        {
          v24 = *((_DWORD *)v36 + k); /*0x70977e*/
          v23 = *((_DWORD *)Block + k); /*0x709782*/
        }
      }
      (*(void (__thiscall **)(_DWORD *, int))(*a1 + 968))(a1, v24); /*0x709792*/
    }
    else
    {
      (*(void (__thiscall **)(_DWORD *, int))(a1[284] + 12))(a1 + 284, a2); /*0x709728*/
      v19 = a1[282]; /*0x70972b*/
      v20 = 0; /*0x709731*/
      v21 = 0; /*0x709735*/
      if ( v19 > 0 ) /*0x709739*/
      {
        v22 = a1[273]; /*0x70973b*/
        do /*0x709756*/
        {
          if ( *(_DWORD *)(v22 + 4 * v21) > v20 ) /*0x709746*/
            v20 = *(_DWORD *)(v22 + 4 * v21); /*0x709748*/
          ++v21; /*0x709753*/
        }
        while ( v21 < v19 ); /*0x709756*/
      }
      (*(void (__thiscall **)(_DWORD *))(*a1 + 968))(a1); /*0x70975d*/
    }
    v29 = &vt_VectorClass_int; /*0x7097a0*/
    if ( Block && BYTE1(v32) ) /*0x7097b0*/
    {
      __3_YAXPAX_Z(Block); /*0x7097b3*/
      Block = 0; /*0x7097bb*/
    }
    v31 = 0; /*0x7097c3*/
    BYTE1(v32) = 0; /*0x7097ca*/
    v35 = &vt_VectorClass_AbstractClass; /*0x7097cf*/
    if ( v36 ) /*0x7097d8*/
    {
      if ( v38 ) /*0x7097e0*/
        __3_YAXPAX_Z(v36); /*0x7097e3*/
    }
  }
  else
  {
    (*(void (__thiscall **)(_DWORD *))(a1[284] + 12))(a1 + 284); /*0x70956d*/
  }
}


// ==== 0x00709820  TechnoClass::BeginFiringSequence  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::BeginFiringSequence(#377 *this)
{
  int v2; // ecx
  int v3; // eax
  int v4; // eax
  _DWORD *v5; // ecx
  int v6; // edi
  int v7; // eax
  int v8; // eax
  int v10; // [esp+Ch] [ebp-8h]
  int v11; // [esp+18h] [ebp+4h]
  char v12; // [esp+1Ch] [ebp+8h]

  this->voiceHandle = MEMORY[0xA8ED84]; /*0x70982e*/
  if ( this->q02B == 11 ) /*0x70983f*/
    v2 = Random::Range((_DWORD *)MEMORY[0xA8B230] + 134, 0, 2) + MEMORY[0x8871E0]->?[0]; /*0x709864*/
  else
    v2 = Random::Range((_DWORD *)MEMORY[0xA8B230] + 134, 0, 2) + MEMORY[0x8871E0]->?[1]; /*0x70989a*/
  this->q060 = MEMORY[0xA8ED84]; /*0x70986c*/
  this->targetingTimer_e = v10; /*0x7098b0*/
  this->q188 = v2; /*0x7098b6*/
  if ( this->sprayOffsetIndex_e && this->shouldLoseTarget ) /*0x7098c3*/
  {
    v3 = (*(int (__thiscall **)(#377 *, _DWORD))(this->spawnManager)(this, this->sprayOffsetIndex_e); /*0x7098d2*/
    v4 = (*(int (__thiscall **)(#377 *, _DWORD, int, int))(this->q0F0)(this, this->sprayOffsetIndex_e, v3, 1); /*0x7098e6*/
    if ( v4 == 6 ) /*0x7098ef*/
    {
      v5 = (_DWORD *)this->queuedMission; /*0x7098f1*/
      if ( v5 ) /*0x7098f9*/
      {
        UnitClass::ProcessIdleOrders(v5); /*0x7098fb*/
        goto LABEL_12; /*0x709900*/
      }
      goto LABEL_11; /*0x7098f9*/
    }
    if ( v4 == 5 || v4 == 8 ) /*0x70990a*/
LABEL_11:
      (*(void (__thiscall **)(#377 *, _DWORD))(this->unknown_short_3C8)(this, 0); /*0x70990c*/
  }
LABEL_12:
  if ( !this->sprayOffsetIndex_e )
  {
    v6 = (*(int (__thiscall **)(#377 *, int, int, _DWORD))(this->__pad_F10)(this, v12 & 3, v11, 0); /*0x70993c*/
    if ( *(_BYTE *)((*(int (__thiscall **)(#377 *))(this->hasParachute)(this) + 1712) )
    {
      SelectTargetByWeight(this, (int)this); /*0x709950*/
    }
    else
    {
      if ( v6 ) /*0x709959*/
        (*(void (__thiscall **)(#377 *, int))(this->unknown_short_3C8)(this, v6); /*0x709960*/
      v7 = (*(int (__thiscall **)(#377 *, _DWORD))(this->spawnManager)(this, this->sprayOffsetIndex_e); /*0x709971*/
      if ( v6 )
        v6 = (*(_BYTE *)(v6 + 20) & 1) != 0 ? v6 : 0;
      v8 = *(_DWORD *)(*(int (__thiscall **)(#377 *, int))(this->q3F8)(this, v7); /*0x709992*/
      if ( v6 && v8 && !*(_BYTE *)(*(_DWORD *)(v8 + 160) + 674) ) /*0x7099a2*/
        *(_DWORD *)(v6 + 112) -= TechnoClass::ComputeAudioFalloffDamage(this, v6, v8); /*0x7099b5*/
    }
  }
  return this->sprayOffsetIndex_e != 0; /*0x7099c2*/
}


// ==== 0x007099D0  TechnoClass::IsDirty  this=TechnoClass  sig=csp ====
int __stdcall IPersistStream::_vt64(int a1, int a2)
{
  return 0; /*0x7099d2*/
}


// ==== 0x007099E0  TechnoClass::IsTimerExpired  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::IsTimerExpired(#377 *this)
{
  int v1; // edx
  int result; // eax

  v1 = this->q05A; /*0x7099e0*/
  result = this->q05C; /*0x7099e6*/
  if ( v1 != -1 ) /*0x7099ef*/
  {
    if ( (int)MEMORY[0xA8ED84] - v1 < result ) /*0x7099fb*/
    {
      result -= (int)MEMORY[0xA8ED84] - v1; /*0x7099fd*/
      LOBYTE(result) = result == 0; /*0x709a06*/
      return result; /*0x709a08*/
    }
    result = 0; /*0x709a09*/
  }
  LOBYTE(result) = result == 0; /*0x709a12*/
  return result; /*0x709a08*/
}


// ==== 0x00709A20  TechnoClass::COMStub_Return0_287  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::COMStub_Return0_287(#377 *this)
{
  int result; // eax

  return result; /*0x709a20*/
}


// ==== 0x00709A30  TechnoClass::Stub  this=TechnoClass  sig=csp ====
void __stdcall IPersistStream::Stub(BuildingTypeClass *aP0, int a2)
{
  ; /*0x709a30*/
}


// ==== 0x00709A40  TechnoClass::CompleteFactoryProduction  this=TechnoClass  sig=csp ====
char __thiscall TechnoClass::CompleteFactoryProduction(_DWORD *this, FootClass *aP1, int a3)
{
  _DWORD *v4; // ecx

  v4 = (_DWORD *)this->temporalUsing; /*0x709a43*/
  if ( v4 && v4[10] ) /*0x709a4d*/
    FactoryClass::CompleteItem(v4); /*0x709a54*/
  if ( !(*(unsigned __int8 (__thiscall **)(_DWORD *))(*this + 1232))(this) /*0x709a6b*/
    && (*(unsigned __int8 (__thiscall **)(_DWORD *))(*this + 1072))(this) )
  {
    BuildingClass::GetObjectData(this); /*0x709a77*/
  }
  return 0; /*0x709a7e*/
}


// ==== 0x0070A990  TechnoClass::DrawVeterancy  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::DrawVeterancy(#377 *this)
{
  int v2; // ebp
  unsigned int v3; // ebx
  int result; // eax
  int v5; // edx
  int v6; // eax
  int v7; // [esp+10h] [ebp-8h] BYREF
  int v8; // [esp+14h] [ebp-4h]
  _DWORD *v9; // [esp+1Ch] [ebp+4h]
  int *v10; // [esp+20h] [ebp+8h]

  (*(void (__thiscall **)(#377 *))(this->parachute)(this); /*0x70a99b*/
  v2 = MEMORY[0xAC147C]; /*0x70a9a1*/
  v3 = -1; /*0x70a9af*/
  if ( VeterancyStruct::IsVeteran((float *)this + 84) ) /*0x70a9b2*/
    v3 = 14; /*0x70a9bb*/
  if ( VeterancyStruct::IsElite((float *)this + 84) ) /*0x70a9c2*/
    v3 = 15; /*0x70a9cb*/
  result = VeinholeClass::GetState((float *)this + 84); /*0x70a9d2*/
  if ( (_BYTE)result ) /*0x70a9d9*/
  {
    v3 = 19; /*0x70a9db*/
  }
  else if ( v3 == -1 ) /*0x70a9e5*/
  {
    return result; /*0x70a9e5*/
  }
  v5 = *(_DWORD *)this; /*0x70a9eb*/
  v6 = *v9 + 5; /*0x70a9f5*/
  v8 = v9[1] + 2; /*0x70a9f8*/
  v7 = v6; /*0x70a9fe*/
  if ( (*(int (__thiscall **)(#377 *))(v5 + 44))(this) != 15 ) /*0x70aa08*/
  {
    v7 += 5; /*0x70aa18*/
    v8 += 4; /*0x70aa1c*/
  }
  DrawToSurfaceSHP(MEMORY[0x887314], MEMORY[0x87F6C4], v2, v3, &v7, v10, 3584, 0, -2, 0, 1000, 0, 0, 0, 0, 0); /*0x70aa4f*/
  return result; /*0x70aa54*/
}


// ==== 0x0070AA60  TechnoClass::DrawPowerIndicator  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::DrawPowerIndicator(#377 *this)
{
  int result; // eax
  CampaignScore *v3; // esi
  int v4; // eax
  wchar_t *StringCSF; // eax
  void **TextBoundingRect; // eax
  void **v7; // eax
  CampaignScore *v8; // edx
  unsigned __int8 *v9; // eax
  int v10; // esi
  wchar_t *v11; // eax
  int v12; // edx
  void **v13; // eax
  void **v14; // eax
  HouseClass *v15; // edi
  int v16; // esi
  AbstractClass v17; // [esp+0h] [ebp-150h] BYREF
  void *v18; // [esp+24h] [ebp-12Ch] BYREF
  void *v19; // [esp+28h] [ebp-128h]
  void *v20; // [esp+2Ch] [ebp-124h]
  CampaignScore *v21; // [esp+30h] [ebp-120h]
  _DWORD v22[3]; // [esp+34h] [ebp-11Ch] BYREF
  _DWORD v23[4]; // [esp+40h] [ebp-110h] BYREF
  CampaignScore Buffer[7]; // [esp+54h] [ebp-FCh] BYREF
  int *a2; // [esp+158h] [ebp+8h]
  IUnknown *aP2; // [esp+15Ch] [ebp+Ch]

  result = (*(int (__thiscall **)(#377 *))(this->fallRate)(this); /*0x70aa6e*/
  if ( result != 6 || (result = *(_DWORD *)(this->gattlingValue + 3808), result <= 0) ) /*0x70aa96*/
  {
LABEL_5:
    LOBYTE(result) = this->q3D3; /*0x70abea*/
    if ( !(_BYTE)result ) /*0x70abf2*/
      return result; /*0x70abf2*/
    goto LABEL_6; /*0x70abf2*/
  }
  if ( !this->q3D3 ) /*0x70aa9c*/
  {
    v21 = (CampaignScore *)(this->Owner + 36); /*0x70aabd*/
    v3 = v21; /*0x70aab6*/
    v4 = (*(int (__stdcall **)(CampaignScore *))(*(_DWORD *)v3->__pad_0 + 36))(v3); /*0x70aac3*/
    *(_DWORD *)&v17.__pad_0[12] = (*(int (__stdcall **)(CampaignScore *, int))(*(_DWORD *)v3->__pad_0 + 32))(v3, v4); /*0x70aacd*/
    StringCSF = GetStringCSF((wchar_t *)&stru_830620.__pad_579C[54184], 0, &stru_830620.__pad_579C[54204], 15483); /*0x70aadf*/
    swprintf( /*0x70aaea*/
      (wchar_t *const)Buffer,
      (const size_t)StringCSF,
      *(const wchar_t *const *)&v17.__pad_0[12],
      (CampaignScore *)v17.uniqueId);
    TextBoundingRect = (void **)GetTextBoundingRect(v22, Buffer, *a2, a2[1], 329, 4, 2); /*0x70ab0a*/
    v18 = *TextBoundingRect; /*0x70ab13*/
    v19 = TextBoundingRect[1]; /*0x70ab1d*/
    v20 = TextBoundingRect[2]; /*0x70ab24*/
    v21 = (CampaignScore *)TextBoundingRect[3]; /*0x70ab2f*/
    v7 = (void **)ClipRectIntersection((IUnknown *)v22, (IUnknown *)&v18, aP2, 0, 0); /*0x70ab37*/
    v18 = *v7; /*0x70ab3e*/
    v19 = v7[1]; /*0x70ab45*/
    v20 = v7[2]; /*0x70ab4c*/
    v8 = (CampaignScore *)v7[3]; /*0x70ab52*/
    v9 = (unsigned __int8 *)(this->Owner + 22265); /*0x70ab5b*/
    v21 = v8; /*0x70ab60*/
    v10 = (*v9 >> stru_89E138.__pad_14B0[6124] << stru_89E138.__pad_14B0[6120]) /*0x70abae*/
        | (v9[1] >> stru_89E138.__pad_14B0[6140] << stru_89E138.__pad_14B0[6136])
        | (v9[2] >> stru_89E138.__pad_14B0[6132] << stru_89E138.__pad_14B0[6128]);
    v17.uniqueId = 0; /*0x70abb4*/
    (*(void (__thiscall **)(_DWORD, void **))(**(_DWORD **)&stru_87C374.__pad_579C[22532] + 20))( /*0x70abb7*/
      *(_DWORD *)&stru_87C374.__pad_579C[22532],
      &v18);
    (*(void (__thiscall **)(_DWORD, void **, int))(**(_DWORD **)&stru_87C374.__pad_579C[22532] + 88))( /*0x70abc8*/
      *(_DWORD *)&stru_87C374.__pad_579C[22532],
      &v17.NeedsSaveOrLink,
      v10);
    *(_DWORD *)&v17.__pad_0[12] = 1; /*0x70abd0*/
    *(_DWORD *)&v17.__pad_0[8] = 329; /*0x70abd2*/
    *(_DWORD *)&v17.__pad_0[4] = 0; /*0x70abd7*/
    *(_DWORD *)v17.__pad_0 = v10; /*0x70abd9*/
    result = (int)RenderTextLabel(*(int **)&stru_87C374.__pad_579C[22532], (AbstractClass *)aP2, a2, v17); /*0x70abe5*/
    goto LABEL_5; /*0x70abe5*/
  }
LABEL_6:
  v11 = GetStringCSF((wchar_t *)&stru_830620.__pad_579C[54172], 0, &stru_830620.__pad_579C[54204], 15502); /*0x70abf8*/
  v12 = *(_DWORD *)this; /*0x70ac0e*/
  v21 = (CampaignScore *)v11; /*0x70ac12*/
  if ( (*(int (__thiscall **)(#377 *))(v12 + 44))(this) == 6 /*0x70ac2c*/
    && BuildingTypeClass::GetFoundationWidth(*((_DWORD **)this + 328)) == 1 )
  {
    v21 = (CampaignScore *)GetStringCSF( /*0x70ac44*/
                             (wchar_t *)&stru_830620.__pad_579C[54164],
                             0,
                             &stru_830620.__pad_579C[54204],
                             15504);
  }
  v13 = (void **)GetTextBoundingRect(v23, v21, *a2, a2[1], 329, 4, 2); /*0x70ac60*/
  v17.NeedsSaveOrLink = *v13; /*0x70ac69*/
  v18 = v13[1]; /*0x70ac73*/
  v19 = v13[2]; /*0x70ac7e*/
  v20 = v13[3]; /*0x70ac89*/
  v14 = (void **)ClipRectIntersection((IUnknown *)v23, (IUnknown *)&v17.NeedsSaveOrLink, aP2, 0, 0); /*0x70ac8d*/
  v15 = (HouseClass *)this->Owner; /*0x70ac94*/
  v17.NeedsSaveOrLink = *v14; /*0x70ac9a*/
  *(_DWORD *)&v17.__pad_0[12] = 0; /*0x70aca7*/
  v18 = v14[1]; /*0x70aca9*/
  v19 = v14[2]; /*0x70acb0*/
  v20 = v14[3]; /*0x70acbf*/
  v16 = (BYTE1(v15->base[4]) >> stru_89E138.__pad_14B0[6124] << stru_89E138.__pad_14B0[6120]) /*0x70ad07*/
      | (BYTE2(v15->base[4]) >> stru_89E138.__pad_14B0[6140] << stru_89E138.__pad_14B0[6136])
      | (HIBYTE(v15->base[4]) >> stru_89E138.__pad_14B0[6132] << stru_89E138.__pad_14B0[6128]);
  (*(void (__stdcall **)(void **, _DWORD))(**(_DWORD **)&stru_87C374.__pad_579C[22532] + 20))(&v17.NeedsSaveOrLink, 0); /*0x70ad0e*/
  (*(void (__thiscall **)(_DWORD, void **, int))(**(_DWORD **)&stru_87C374.__pad_579C[22532] + 88))( /*0x70ad1f*/
    *(_DWORD *)&stru_87C374.__pad_579C[22532],
    &v17.NeedsSaveOrLink,
    v16);
  *(_DWORD *)&v17.__pad_0[12] = 1; /*0x70ad2c*/
  *(_DWORD *)&v17.__pad_0[8] = 329; /*0x70ad2e*/
  *(_DWORD *)&v17.__pad_0[4] = 0; /*0x70ad33*/
  *(_DWORD *)v17.__pad_0 = v16; /*0x70ad35*/
  return (int)RenderTextLabel(*(int **)&stru_87C374.__pad_579C[22532], (AbstractClass *)aP2, a2, v17); /*0x70ad42*/
}


// ==== 0x0070AD50  TechnoClass::GetCellCoordsV2  this=TechnoClass  sig=csp ====
int __thiscall ObjectClass::GetCellCoordsV2(#377 *this)
{
  _DWORD *v1; // eax
  _BYTE v3[12]; // [esp+0h] [ebp-Ch] BYREF
  _DWORD *v4; // [esp+10h] [ebp+4h]
  int v5; // [esp+14h] [ebp+8h]
  int v6; // [esp+14h] [ebp+8h]

  v1 = (_DWORD *)(*(int (__thiscall **)(#377 *, _BYTE *, int))(this->lineTrailer)(this, v3, v5); /*0x70ad5f*/
  LOWORD(v6) = *v1 / 256; /*0x70ad75*/
  HIWORD(v6) = v1[1] / 256; /*0x70ad89*/
  *v4 = v6; /*0x70ad96*/
  return (int)v4; /*0x70ad98*/
}


// ==== 0x0070ADA0  TechnoClass::Vt46Thunk  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::Vt46Thunk(#377 *this)
{
  int v2; // eax

  v2 = (*(int (__thiscall **)(#377 *))(this->hasParachute)(this); /*0x70ada5*/
  return (*(int (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)v2 + 184))(v2, this->Owner, 0); /*0x70adbe*/
}


// ==== 0x0070ADC0  TechnoClass::RevealAreaSmall  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::RevealAreaSmall(#377 *this)
{
  int result; // eax
  int v3; // eax
  int v4; // eax
  int v5; // ebp
  int v6; // edx
  int v7; // ecx
  int v8; // [esp+8h] [ebp-10h]
  int v9; // [esp+Ch] [ebp-Ch] BYREF
  int v10; // [esp+10h] [ebp-8h]
  int v11; // [esp+14h] [ebp-4h]
  char v12; // [esp+1Ch] [ebp+4h]
  char v13; // [esp+20h] [ebp+8h]

  LOBYTE(result) = this->q3D5; /*0x70adc7*/
  if ( (_BYTE)result ) /*0x70adcf*/
  {
    if ( !*(_BYTE *)(*(_DWORD *)(this->Owner + 52) + 422) || (result = MEMORY[0xA8B238][0]) == 0 ) /*0x70adef*/
    {
      v9 = this->q027; /*0x70adff*/
      v10 = this->owningHouseIndex; /*0x70ae06*/
      v3 = 10 * (this->q029 / MEMORY[0x8871E0][1].?); /*0x70ae24*/
      if ( v3 > *((char *)this + 1056) ) /*0x70ae28*/
        v12 = 0; /*0x70ae2a*/
      this->q420 = v3; /*0x70ae2f*/
      v4 = (*(int (__thiscall **)(#377 *))(this->hasParachute)(this); /*0x70ae3b*/
      v8 = Math::RoundToInt((double)*(int *)(v4 + 1512) * ((double)*((char *)this + 1056) * 0.01 + 1.0)); /*0x70ae6f*/
      if ( VeterancyStruct::IsVeteran((float *)this + 84) || VeterancyStruct::IsElite((float *)this + 84) ) /*0x70ae80*/
      {
        if ( (v5 = (*(int (__thiscall **)(#377 *))(this->hasParachute)(this), /*0x70aebf*/
              VeterancyStruct::IsVeteran((float *)this + 84))
          && *(_BYTE *)(v5 + 673)
          || VeterancyStruct::IsElite((float *)this + 84) && (*(_BYTE *)(v5 + 673) || *(_BYTE *)(v5 + 691)) )
        {
          if ( *(double *)&MEMORY[0x8871E0]->Construction != 0.0 ) /*0x70aee0*/
            v8 = Math::RoundToInt((double)v8 * *(double *)&MEMORY[0x8871E0]->Construction); /*0x70aef1*/
        }
      }
      result = v8; /*0x70aef5*/
      if ( v8 ) /*0x70aefd*/
      {
        v6 = this->owningHouseIndex; /*0x70af01*/
        v9 = this->q027; /*0x70af04*/
        v7 = this->q029; /*0x70af08*/
        v10 = v6; /*0x70af0b*/
        v11 = v7; /*0x70af17*/
        return MapClass::RevealArea0((int *)&MEMORY[0x87F7E8], &v9, v8, *((#375 **)this + 135), v12, v13, 0, 1, 1); /*0x70af35*/
      }
    }
  }
  return result; /*0x70af3a*/
}


// ==== 0x0070AF50  TechnoClass::ScanForEnemies  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::ScanForEnemies(#377 *this)
{
  int result; // eax
  int *v3; // edi
  int v4; // eax
  int v5; // eax
  int v6; // ebx
  int v7; // eax
  int v8; // ecx
  int v9; // edx
  int v10; // edx
  int v11; // ecx
  int v12; // [esp+Ch] [ebp-14h]
  int v13; // [esp+14h] [ebp-Ch] BYREF
  int v14; // [esp+18h] [ebp-8h]
  int v15; // [esp+1Ch] [ebp-4h]
  char v16; // [esp+24h] [ebp+4h]
  int v17; // [esp+28h] [ebp+8h]
  char v18; // [esp+2Ch] [ebp+Ch]
  #375 *v19; // [esp+30h] [ebp+10h]
  int v20; // [esp+34h] [ebp+14h]

  LOBYTE(result) = this->q3D5; /*0x70af58*/
  if ( (_BYTE)result ) /*0x70af60*/
  {
    result = this->Owner; /*0x70af66*/
    LOBYTE(result) = *(_BYTE *)(*(_DWORD *)(result + 52) + 422); /*0x70af6f*/
    if ( !(_BYTE)result /*0x70af97*/
      && (*(_DWORD *)((*(int (__thiscall **)(#377 *))(this->hasParachute)(this) + 1512) || (result = v20) != 0) )
    {
      v3 = (int *)((char *)this + 156); /*0x70af9d*/
      v13 = this->q027; /*0x70afa7*/
      v14 = this->owningHouseIndex; /*0x70afb4*/
      v4 = 10 * (this->q029 / MEMORY[0x8871E0][1].?); /*0x70afcc*/
      if ( v4 > *((char *)this + 1056) ) /*0x70afd0*/
        v16 = 0; /*0x70afd2*/
      this->q420 = v4; /*0x70afd7*/
      v5 = (*(int (__thiscall **)(#377 *))(this->hasParachute)(this); /*0x70afe2*/
      v6 = Math::RoundToInt((double)*(int *)(v5 + 1512) * ((double)*((char *)this + 1056) * 0.01 + 1.0)); /*0x70b016*/
      if ( VeterancyStruct::IsVeteran((float *)this + 84) || VeterancyStruct::IsElite((float *)this + 84) ) /*0x70b029*/
      {
        if ( (v12 = (*(int (__thiscall **)(#377 *))(this->hasParachute)(this), /*0x70b072*/
              VeterancyStruct::IsVeteran((float *)this + 84))
          && *(_BYTE *)(v12 + 673)
          || VeterancyStruct::IsElite((float *)this + 84) && (*(_BYTE *)(v12 + 673) || *(_BYTE *)(v12 + 691)) )
        {
          if ( *(double *)&MEMORY[0x8871E0]->Construction != 0.0 ) /*0x70b093*/
            v6 = Math::RoundToInt((double)v6 * *(double *)&MEMORY[0x8871E0]->Construction); /*0x70b0a4*/
        }
      }
      result = v20; /*0x70b0a6*/
      if ( v20 ) /*0x70b0ad*/
        v6 = v20; /*0x70b0af*/
      if ( !this->isChronosphereImmune ) /*0x70b0b1*/
      {
        v7 = *v3; /*0x70b0c9*/
        this->isChronosphereImmune = 1; /*0x70b0cb*/
        this->lastSightCoords = v7; /*0x70b0d2*/
        this->isInLogic = v6; /*0x70b0d4*/
        result = this->owningHouseIndex; /*0x70b0da*/
        this->q096 = result; /*0x70b0dd*/
        this->q097 = this->q029; /*0x70b0e3*/
        if ( !v6 ) /*0x70b0e6*/
          return result; /*0x70b0e6*/
        if ( !v18 || !v19 ) /*0x70b0fa*/
        {
          v8 = this->owningHouseIndex; /*0x70b13c*/
          v9 = this->q029; /*0x70b13f*/
          v13 = *v3; /*0x70b142*/
          v14 = v8; /*0x70b14c*/
          v15 = v9; /*0x70b156*/
          return MapClass::RevealArea1((int *)&MEMORY[0x87F7E8], &v13, v6, *((#375 **)this + 135), v16, v17, 0, 1, 0); /*0x70b17b*/
        }
        goto LABEL_26; /*0x70b0fa*/
      }
      LOBYTE(result) = v18; /*0x70b17e*/
      if ( v18 ) /*0x70b184*/
      {
        if ( v6 ) /*0x70b188*/
        {
          result = (int)v19; /*0x70b18a*/
          if ( v19 ) /*0x70b190*/
          {
LABEL_26:
            v10 = this->owningHouseIndex; /*0x70b192*/
            v13 = *v3; /*0x70b197*/
            v11 = this->q029; /*0x70b19b*/
            v14 = v10; /*0x70b19e*/
            v15 = v11; /*0x70b1a8*/
            return MapClass::RevealArea1((int *)&MEMORY[0x87F7E8], &v13, v6, v19, v16, v17, 0, 1, 0); /*0x70b1c2*/
          }
        }
      }
    }
  }
  return result; /*0x70b131*/
}


// ==== 0x0070B1D0  TechnoClass::RevealAreaConditional  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::RevealAreaConditional(#377 *this)
{
  int result; // eax
  int v2; // esi
  #375 *v3; // edx
  char v4; // [esp+8h] [ebp+4h]
  int v5; // [esp+Ch] [ebp+8h]
  char v6; // [esp+10h] [ebp+Ch]
  #375 *v7; // [esp+14h] [ebp+10h]

  LOBYTE(result) = this->q3D5; /*0x70b1d0*/
  if ( (_BYTE)result ) /*0x70b1d9*/
  {
    v2 = this->Owner; /*0x70b1df*/
    result = *(_DWORD *)(v2 + 52); /*0x70b1e5*/
    if ( !*(_BYTE *)(result + 422) ) /*0x70b1e8*/
    {
      if ( this->isChronosphereImmune ) /*0x70b1f2*/
      {
        result = this->isInLogic; /*0x70b1fc*/
        this->isChronosphereImmune = 0; /*0x70b202*/
        if ( !result ) /*0x70b20b*/
          return result; /*0x70b20b*/
        if ( !v6 ) /*0x70b213*/
          return MapClass::RevealArea1((int *)&MEMORY[0x87F7E8], (int *)this + 149, result, (#375 *)v2, v4, v5, 0, 1, 1); /*0x70b213*/
        v3 = v7; /*0x70b215*/
        if ( !v7 ) /*0x70b21b*/
          return MapClass::RevealArea1((int *)&MEMORY[0x87F7E8], (int *)this + 149, result, (#375 *)v2, v4, v5, 0, 1, 1); /*0x70b232*/
        return MapClass::RevealArea1((int *)&MEMORY[0x87F7E8], (int *)this + 149, result, v3, v4, v5, 0, 1, 1); /*0x70b21b*/
      }
      LOBYTE(result) = v6; /*0x70b234*/
      if ( v6 ) /*0x70b23a*/
      {
        result = this->isInLogic; /*0x70b23c*/
        if ( result ) /*0x70b244*/
        {
          v3 = v7; /*0x70b246*/
          if ( v7 ) /*0x70b24c*/
            return MapClass::RevealArea1((int *)&MEMORY[0x87F7E8], (int *)this + 149, result, v3, v4, v5, 0, 1, 1); /*0x70b24e*/
        }
      }
    }
  }
  return result; /*0x70b271*/
}


// ==== 0x0070B280  TechnoClass::ComputeAimVector  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::ComputeAimVector(#377 *this)
{
  int result; // eax
  int v3; // edi
  int v4; // ecx
  int v5; // eax
  int v6; // edi
  unsigned int v7; // edi
  unsigned int v8; // ebx
  double v9; // st7
  __int16 v10; // fps
  long double v11; // st7
  bool v12; // c0
  char v13; // c2
  bool v14; // c3
  __int16 v15; // fps
  bool v16; // c0
  char v17; // c2
  bool v18; // c3
  double v19; // st7
  float v20; // eax
  double v21; // st7
  double v22; // st7
  char v23; // fps^1
  long double v24; // st6
  bool v25; // c0
  char v26; // c2
  bool v27; // c3
  char v28; // fps^1
  long double v29; // st6
  bool v30; // c0
  char v31; // c2
  bool v32; // c3
  double v33; // st6
  float v34; // [esp+18h] [ebp-48h]
  float v35; // [esp+24h] [ebp-3Ch]
  double v36; // [esp+28h] [ebp-38h] BYREF
  float v37; // [esp+30h] [ebp-30h]
  double v38; // [esp+3Ch] [ebp-24h]
  float v39; // [esp+44h] [ebp-1Ch]
  double v40; // [esp+48h] [ebp-18h]
  float v41; // [esp+50h] [ebp-10h]
  float v42; // [esp+54h] [ebp-Ch]
  _DWORD *v43; // [esp+68h] [ebp+8h]
  float v44; // [esp+6Ch] [ebp+Ch]
  char v45; // [esp+70h] [ebp+10h]

  result = (*(int (__thiscall **)(#377 *))(this->hasParachute)(this); /*0x70b290*/
  if ( *(_DWORD *)(result + 176) ) /*0x70b296*/
  {
    result = *(_DWORD *)((*(int (__thiscall **)(#377 *))(this->hasParachute)(this) + 176); /*0x70b2ae*/
    if ( !*(_BYTE *)result ) /*0x70b2b4*/
    {
      v3 = this->owningHouseIndex; /*0x70b2ce*/
      LODWORD(v36) = this->q027 - *v43; /*0x70b2d1*/
      v4 = this->q029; /*0x70b2dc*/
      v5 = v43[1] - v3; /*0x70b2df*/
      v6 = v43[2]; /*0x70b2e1*/
      *(float *)&v38 = (float)SLODWORD(v36); /*0x70b2e4*/
      LODWORD(v36) = v4 - v6; /*0x70b2f2*/
      *((float *)&v38 + 1) = (float)v5; /*0x70b302*/
      v40 = v38; /*0x70b315*/
      v39 = (float)(v4 - v6); /*0x70b319*/
      v41 = v39; /*0x70b321*/
      v36 = (double)(*(__int16 *)ProgressTimer::GetValue((_WORD *)this + 452, &v36) - 0x3FFF) * -0.00009587672516830327; /*0x70b341*/
      v7 = HIDWORD(v36); /*0x70b345*/
      v8 = LODWORD(v36); /*0x70b349*/
      v35 = Math::SinCos(v36); /*0x70b354*/
      v42 = Math::ArcTan2(COERCE_DOUBLE(__PAIR64__(v7, v8))); /*0x70b35f*/
      v9 = Math::Sqrt(*(float *)&v38 * *(float *)&v38 + *((float *)&v38 + 1) * *((float *)&v38 + 1) + v39 * v39); /*0x70b38b*/
      *(float *)&v36 = v9; /*0x70b390*/
      result = (*(int (__thiscall **)(#377 *))(this->hasParachute)(this); /*0x70b3ae*/
      v34 = (0.039999999 - v9 * 0.000024999999) * v44 / *(double *)(result + 880); /*0x70b3be*/
      v11 = fabs(*(float *)&v36); /*0x70b3c6*/
      v12 = v11 < 0.00002; /*0x70b3c8*/
      v13 = 0; /*0x70b3c8*/
      v14 = v11 == 0.00002; /*0x70b3c8*/
      LOWORD(result) = v10; /*0x70b3ce*/
      if ( v11 >= 0.00002 ) /*0x70b3d3*/
      {
        v16 = v34 < 0.0099999998; /*0x70b3dd*/
        v17 = 0; /*0x70b3dd*/
        v18 = v34 == 0.0099999998; /*0x70b3dd*/
        LOWORD(result) = v15; /*0x70b3e3*/
        if ( v34 >= 0.0099999998 ) /*0x70b3e8*/
        {
          if ( v34 > 0.050000001 ) /*0x70b3fd*/
            v34 = 0.050000001; /*0x70b3ff*/
          v41 = 0.0; /*0x70b41a*/
          v19 = Math::Sqrt(*((float *)&v40 + 1) * *((float *)&v40 + 1) + *(float *)&v40 * *(float *)&v40); /*0x70b427*/
          if ( v19 == 0.0 ) /*0x70b43a*/
          {
            v20 = v41; /*0x70b478*/
            v38 = v40; /*0x70b47c*/
          }
          else
          {
            *(float *)&v36 = *(float *)&v40 / v19; /*0x70b442*/
            *((float *)&v36 + 1) = *((float *)&v40 + 1) / v19; /*0x70b454*/
            v38 = v36; /*0x70b462*/
            v37 = 0.0 / v19; /*0x70b466*/
            v20 = v37; /*0x70b46a*/
          }
          v39 = v20; /*0x70b496*/
          *(float *)&v36 = *(float *)&v38 * v42 + *((float *)&v38 + 1) * v35; /*0x70b49f*/
          *(float *)&v40 = -(v20 * v35); /*0x70b4ad*/
          *((float *)&v40 + 1) = v20 * v42; /*0x70b4b9*/
          v21 = *(float *)&v38 * v35 - *((float *)&v38 + 1) * v42; /*0x70b4cd*/
          v22 = Math::Sqrt(*(float *)&v40 * *(float *)&v40 + *((float *)&v40 + 1) * *((float *)&v40 + 1) + v21 * v21); /*0x70b4f0*/
          v24 = fabs(v42 * *(float *)&v36 - v35 * v22 - *(float *)&v38); /*0x70b50c*/
          v25 = v24 < 0.0002; /*0x70b50e*/
          v26 = 0; /*0x70b50e*/
          v27 = v24 == 0.0002; /*0x70b50e*/
          BYTE1(result) = v23; /*0x70b514*/
          if ( v24 > 0.0002 /*0x70b53c*/
            || (v29 = fabs(v42 * v22 + v35 * *(float *)&v36 - *((float *)&v38 + 1)),
                v30 = v29 < 0.0002,
                v31 = 0,
                v32 = v29 == 0.0002,
                BYTE1(result) = v28,
                v29 > 0.0002) )
          {
            v22 = -v22; /*0x70b53e*/
          }
          LOBYTE(result) = v45; /*0x70b540*/
          v33 = *(float *)&v36 * v34; /*0x70b547*/
          if ( !v45 ) /*0x70b54d*/
            v33 = v33 * 0.5; /*0x70b54f*/
          *((float *)this + 205) = v33; /*0x70b555*/
          *((float *)this + 204) = -(v22 * v34); /*0x70b561*/
        }
      }
    }
  }
  return result; /*0x70b567*/
}


// ==== 0x0070B570  TechnoClass::UpdateBodyTilt  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::UpdateBodyTilt(#377 *this)
{
  int result; // eax
  bool v3; // dl
  __int16 v4; // fps
  double v5; // st7
  char v6; // c0
  bool v7; // c0
  char v8; // c2
  bool v9; // c3
  int v10; // edx
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
  int v35; // edx
  bool v36; // [esp+Ah] [ebp-Eh]
  bool v37; // [esp+Ah] [ebp-Eh]
  float v38; // [esp+Ch] [ebp-Ch]
  float v39; // [esp+Ch] [ebp-Ch]
  float v40; // [esp+10h] [ebp-8h]
  float v41; // [esp+14h] [ebp-4h] BYREF

  v3 = *((float *)this + 202) > 0.00002; /*0x70b58a*/
  v36 = *((float *)this + 202) < -0.00002; /*0x70b5aa*/
  if ( this->q3CD ) /*0x70b5ae*/
  {
    v5 = *((float *)this + 203); /*0x70b5c6*/
    if ( v6 ) /*0x70b5d1*/
      v5 = -v5; /*0x70b5d3*/
    v7 = v5 < 0.78539819; /*0x70b5d5*/
    v8 = 0; /*0x70b5d5*/
    v9 = v5 == 0.78539819; /*0x70b5d5*/
    LOWORD(result) = v4; /*0x70b5db*/
    if ( v5 < 0.78539819 ) /*0x70b5e0*/
    {
      result = ((unsigned int)((*ProgressTimer::GetValue((_WORD *)this + 452, &v41) >> 12) + 1) >> 1) & 7; /*0x70b5fe*/
      if ( result && result <= 5 ) /*0x70b606*/
        *((float *)this + 203) = *((float *)this + 203) + 0.01; /*0x70b619*/
      else
        *((float *)this + 203) = *((float *)this + 203) - 0.01; /*0x70b631*/
    }
    return result; /*0x70b624*/
  }
  if ( this->q425 ) /*0x70b63d*/
  {
    v10 = *(_DWORD *)this; /*0x70b655*/
    *((float *)this + 203) = *((float *)this + 205) + *((float *)this + 203); /*0x70b659*/
    *((float *)this + 202) = *((float *)this + 204) + *((float *)this + 202); /*0x70b66b*/
    result = (*(int (__thiscall **)(#377 *))(v10 + 132))(this); /*0x70b671*/
    if ( *(_BYTE *)(result + 3434) ) /*0x70b677*/
    {
      if ( *((float *)this + 203) <= -0.78539819 ) /*0x70b694*/
        v11 = -0.78539819; /*0x70b69e*/
      else
        v11 = *((float *)this + 203); /*0x70b696*/
      *((float *)this + 203) = v11; /*0x70b6a4*/
      if ( *((float *)this + 202) <= -0.78539819 ) /*0x70b6bb*/
        v12 = -0.78539819; /*0x70b6c5*/
      else
        v12 = *((float *)this + 202); /*0x70b6bd*/
      *((float *)this + 202) = v12; /*0x70b6cb*/
      v14 = v12 < 0.78539819; /*0x70b6d3*/
      v15 = 0; /*0x70b6d3*/
      v16 = v12 == 0.78539819; /*0x70b6d3*/
      LOWORD(result) = v13; /*0x70b6d9*/
      if ( v12 >= 0.78539819 ) /*0x70b6de*/
        *((float *)this + 202) = 0.78539819; /*0x70b6f4*/
      else
        *((float *)this + 202) = v12; /*0x70b6e0*/
    }
    return result; /*0x70b6eb*/
  }
  v17 = *((float *)this + 202) > 1.5707964; /*0x70b715*/
  if ( *((float *)this + 202) < -1.5707964 ) /*0x70b728*/
    v17 = 1; /*0x70b72a*/
  if ( *((float *)this + 204) == 0.0 ) /*0x70b73d*/
  {
    this->railgunParticles = 0; /*0x70b921*/
    goto LABEL_61; /*0x70b921*/
  }
  v18 = *((float *)this + 204) + *((float *)this + 202); /*0x70b749*/
  v38 = *((float *)this + 202); /*0x70b755*/
  *((float *)this + 202) = v18; /*0x70b75f*/
  if ( !(v20 | v21) && !this->q0AA && !v17 && v38 < 0.78539819 ) /*0x70b787*/
  {
    this->railgunParticles = 1061752795; /*0x70b78b*/
LABEL_33:
    this->q0CC = 0; /*0x70b7cb*/
    goto LABEL_34; /*0x70b7cb*/
  }
  if ( v18 < -0.78539819 && !this->q0AA && !v17 && v38 > -0.78539819 ) /*0x70b7bf*/
  {
    this->railgunParticles = -1085730853; /*0x70b7c1*/
    goto LABEL_33; /*0x70b7c1*/
  }
LABEL_34:
  v22 = *((float *)this + 204); /*0x70b7d1*/
  if ( !v3 ) /*0x70b7e1*/
  {
    result = this->q0AA; /*0x70b882*/
    if ( v22 >= 0.0 ) /*0x70b888*/
    {
      if ( result ) /*0x70b8cf*/
      {
        if ( !v17 ) /*0x70b8d3*/
        {
          *((float *)this + 204) = *(float *)&MEMORY[0x8871E0][1].? * 0.0020000001 + *((float *)this + 204); /*0x70b8ed*/
          goto LABEL_63; /*0x70b8f3*/
        }
      }
      else if ( !v17 ) /*0x70b8f7*/
      {
        *((float *)this + 204) = *((float *)this + 204) + 0.005000000237487257; /*0x70b919*/
        goto LABEL_63; /*0x70b91f*/
      }
    }
    else if ( result ) /*0x70b88c*/
    {
      if ( !v17 ) /*0x70b890*/
      {
        *((float *)this + 204) = *(float *)&MEMORY[0x8871E0][1].? * 0.0020000001 + *((float *)this + 204); /*0x70b8aa*/
        goto LABEL_63; /*0x70b8b0*/
      }
    }
    else if ( !v17 ) /*0x70b8b7*/
    {
      *((float *)this + 204) = *((float *)this + 204) + 0.0020000001; /*0x70b8c5*/
      goto LABEL_63; /*0x70b8cb*/
    }
    *((float *)this + 204) = *((float *)this + 204) - 0.0020000001; /*0x70b905*/
    goto LABEL_63; /*0x70b90b*/
  }
  result = this->q0AA; /*0x70b7ea*/
  if ( v22 <= 0.0 ) /*0x70b7f0*/
  {
    if ( result ) /*0x70b851*/
    {
      if ( !v17 ) /*0x70b855*/
      {
        HIWORD(result) = HIWORD(MEMORY[0x8871E0]); /*0x70b857*/
        v23 = *(float *)&MEMORY[0x8871E0][1].?; /*0x70b85c*/
        goto LABEL_39; /*0x70b862*/
      }
    }
    else if ( !v17 ) /*0x70b866*/
    {
      *((float *)this + 204) = *((float *)this + 204) - 0.005000000237487257; /*0x70b874*/
      goto LABEL_61; /*0x70b87a*/
    }
    goto LABEL_41; /*0x70b855*/
  }
  if ( !result ) /*0x70b7f4*/
  {
    if ( !v17 ) /*0x70b81f*/
    {
      *((float *)this + 204) = *((float *)this + 204) - 0.0020000001; /*0x70b844*/
      goto LABEL_61; /*0x70b84a*/
    }
    goto LABEL_41; /*0x70b81f*/
  }
  if ( v17 ) /*0x70b7f8*/
  {
LABEL_41:
    *((float *)this + 204) = *((float *)this + 204) + 0.0020000001; /*0x70b821*/
    goto LABEL_61; /*0x70b833*/
  }
  v23 = *(float *)&MEMORY[0x8871E0][1].?; /*0x70b800*/
LABEL_39:
  *((float *)this + 204) = *((float *)this + 204) - v23 * 0.0020000001; /*0x70b806*/
LABEL_61:
  if ( v3 && *((float *)this + 202) < 0.00002 ) /*0x70b93c*/
    goto LABEL_65; /*0x70b93c*/
LABEL_63:
  if ( v36 && *((float *)this + 202) > -0.00002 ) /*0x70b955*/
  {
LABEL_65:
    this->q0CC = 0; /*0x70b957*/
    this->railgunParticles = 0; /*0x70b95d*/
  }
  v24 = *((float *)this + 203) > 0.00002; /*0x70b963*/
  v37 = *((float *)this + 203) < -0.00002; /*0x70b994*/
  v25 = *((float *)this + 203) > 1.5707964; /*0x70b9ad*/
  if ( *((float *)this + 203) < -1.5707964 ) /*0x70b9c0*/
    v25 = 1; /*0x70b9c2*/
  if ( *((float *)this + 205) == 0.0 ) /*0x70b9d5*/
  {
    this->auxParticles1 = 0; /*0x70bbe1*/
    goto LABEL_110; /*0x70bbe1*/
  }
  v26 = *((float *)this + 205) + *((float *)this + 203); /*0x70b9e1*/
  v41 = *((float *)this + 203); /*0x70b9ef*/
  v40 = v26; /*0x70b9f3*/
  *((float *)this + 203) = v26; /*0x70b9f7*/
  v27 = 0.78539819; /*0x70b9fd*/
  if ( this && (this->abstractFlags & 4) != 0 && *((_BYTE *)this + 1717) ) /*0x70ba13*/
    v27 = 0.31415927; /*0x70ba1d*/
  if ( v40 > v27 && !this->q0AA && !v25 && v41 < v27 ) /*0x70ba47*/
  {
    *((float *)this + 203) = v27; /*0x70ba49*/
LABEL_83:
    this->firingParticles = 0; /*0x70ba8b*/
    goto LABEL_84; /*0x70ba8b*/
  }
  v39 = -v27; /*0x70ba53*/
  if ( v40 < (double)v39 && !this->q0AA && !v25 && v41 > (double)v39 ) /*0x70ba7f*/
  {
    *((float *)this + 203) = v39; /*0x70ba85*/
    goto LABEL_83; /*0x70ba85*/
  }
LABEL_84:
  v28 = *((float *)this + 205); /*0x70ba91*/
  if ( !v24 ) /*0x70baa1*/
  {
    result = this->q0AA; /*0x70bb57*/
    if ( v28 >= 0.0 ) /*0x70bb5d*/
    {
      if ( result ) /*0x70bb8f*/
      {
        if ( !v25 ) /*0x70bb93*/
        {
          *((float *)this + 205) = *(float *)&MEMORY[0x8871E0][1].? * 0.0020000001 + *((float *)this + 205); /*0x70bbad*/
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
          *((float *)this + 205) = *(float *)&MEMORY[0x8871E0][1].? * 0.0020000001 + *((float *)this + 205); /*0x70bb7f*/
          goto LABEL_112; /*0x70bb85*/
        }
LABEL_107:
        *((float *)this + 205) = *((float *)this + 205) - 0.0020000001; /*0x70bbb9*/
        goto LABEL_112; /*0x70bbcb*/
      }
      if ( v25 ) /*0x70bb89*/
        goto LABEL_107; /*0x70bb89*/
    }
    *((float *)this + 205) = *((float *)this + 205) + 0.005000000237487257; /*0x70bbd9*/
    goto LABEL_112; /*0x70bbdf*/
  }
  result = this->q0AA; /*0x70baaa*/
  if ( v28 <= 0.0 ) /*0x70bab0*/
  {
    if ( result ) /*0x70bafa*/
    {
      if ( !v25 ) /*0x70bafe*/
      {
        HIWORD(result) = HIWORD(MEMORY[0x8871E0]); /*0x70bb00*/
        *((float *)this + 205) = *((float *)this + 205) - *(float *)&MEMORY[0x8871E0][1].? * 0.0020000001; /*0x70bb17*/
        goto LABEL_110; /*0x70bb1d*/
      }
LABEL_95:
      *((float *)this + 205) = *((float *)this + 205) + 0.0020000001; /*0x70bb26*/
      goto LABEL_110; /*0x70bb38*/
    }
    if ( v25 ) /*0x70bb24*/
      goto LABEL_95; /*0x70bb24*/
LABEL_96:
    *((float *)this + 205) = *((float *)this + 205) - 0.005000000237487257; /*0x70bb3d*/
    goto LABEL_110; /*0x70bb4f*/
  }
  if ( !result ) /*0x70bab4*/
  {
    if ( v25 ) /*0x70badf*/
    {
      *((float *)this + 205) = *((float *)this + 205) + 0.0020000001; /*0x70baed*/
      goto LABEL_110; /*0x70baf3*/
    }
    goto LABEL_96; /*0x70badf*/
  }
  if ( v25 ) /*0x70bab8*/
    goto LABEL_95; /*0x70bab8*/
  *((float *)this + 205) = *((float *)this + 205) - *(float *)&MEMORY[0x8871E0][1].? * 0.0020000001; /*0x70bad2*/
LABEL_110:
  if ( v24 && *((float *)this + 203) < 0.00002 ) /*0x70bbfc*/
    goto LABEL_114; /*0x70bbfc*/
LABEL_112:
  if ( v37 && *((float *)this + 203) > -0.00002 ) /*0x70bc15*/
  {
LABEL_114:
    this->firingParticles = 0; /*0x70bc17*/
    this->auxParticles1 = 0; /*0x70bc1d*/
  }
  if ( *((float *)this + 202) > 3.1415927 /*0x70bc6d*/
    || *((float *)this + 202) < -3.1415927
    || *((float *)this + 203) > 3.1415927
    || (v30 = *((float *)this + 203),
        v31 = v30 < -3.1415927,
        v32 = 0,
        v33 = v30 == -3.1415927,
        LOWORD(result) = v29,
        v30 < -3.1415927) )
  {
    v34 = (*(int (__thiscall **)(#377 *))(this->hasParachute)(this); /*0x70bc73*/
    v35 = *(_DWORD *)this; /*0x70bc84*/
    v41 = *(float *)(v34 + 160); /*0x70bc87*/
    return (*(int (__thiscall **)(#377 *, float *, _DWORD, int, _DWORD, int, _DWORD, _DWORD))(v35 + 364))( /*0x70bc9e*/
             this,
             &v41,
             0,
             MEMORY[0x8871E0]->?[5],
             0,
             1,
             0,
             0);
  }
  return result; /*0x70b61f*/
}


// ==== 0x0070BCB0  TechnoClass::GetTargetCoords  this=IUnknown  sig=csp ====
int *__thiscall TechnoClass::GetTargetCoords(AbstractClass **this, int *a2)
{
  int v2; // ebp
  int v4; // edi
  AbstractClass *v5; // ecx
  int *v6; // eax
  AbstractClass *v7; // ecx
  AbstractClass *v8; // ebx
  _DWORD **v9; // eax
  _DWORD *v10; // ecx
  int WeaponRange; // eax
  double v12; // st7
  double v13; // st7
  void *v15; // [esp+10h] [ebp-30h]
  int v16; // [esp+10h] [ebp-30h]
  double v17; // [esp+10h] [ebp-30h]
  int v18; // [esp+18h] [ebp-28h]
  double v19; // [esp+18h] [ebp-28h]
  double v20; // [esp+20h] [ebp-20h] BYREF
  double v21; // [esp+28h] [ebp-18h] BYREF
  int v22; // [esp+34h] [ebp-Ch]
  int v23; // [esp+38h] [ebp-8h]

  v2 = *(_DWORD *)&MEMORY[0xB077F8].__pad_579C[6912]; /*0x70bcba*/
  v4 = *(_DWORD *)&MEMORY[0xB077F8].__pad_579C[6916]; /*0x70bcc4*/
  v5 = this->q2B4; /*0x70bcca*/
  v22 = *(_DWORD *)&MEMORY[0xB077F8].__pad_579C[6908]; /*0x70bcd0*/
  if ( v5 ) /*0x70bcd6*/
  {
    v6 = (int *)(*(int (__thiscall **)(AbstractClass *, double *))(*(_DWORD *)v5->__pad_0 + 88))(v5, &v21); /*0x70bce3*/
    v22 = *v6; /*0x70bce8*/
    v7 = this->q2B4; /*0x70bcec*/
    v2 = v6[1]; /*0x70bcf2*/
    v4 = v6[2]; /*0x70bcf7*/
    v23 = v2; /*0x70bcfa*/
    if ( v7 ) /*0x70bcfe*/
    {
      if ( (*(int (__thiscall **)(AbstractClass *))(*(_DWORD *)v7->__pad_0 + 44))(v7) == 1 ) /*0x70bd0c*/
      {
        v8 = this->q2B4; /*0x70bd12*/
        if ( v8 ) /*0x70bd1a*/
        {
          if ( !v8[45].NeedsSaveOrLink ) /*0x70bd20*/
            WinAPI::Wrapper(-2147467261); /*0x70bd2f*/
          if ( (*(unsigned __int8 (__stdcall **)(void *))(*(_DWORD *)v8[45].NeedsSaveOrLink + 16))(v8[45].NeedsSaveOrLink) ) /*0x70bd3d*/
          {
            v18 = (*(int (__thiscall **)(AbstractClass *))(*(_DWORD *)v8->__pad_0 + 1336))(v8); /*0x70bd52*/
            v15 = (void *)ObjectClass::DistanceTo(this, this->q2B4); /*0x70bd68*/
            v9 = (_DWORD **)(*(int (__thiscall **)(AbstractClass **))&(*this)[28].__pad_0[4])(this); /*0x70bd6c*/
            if ( v9 ) /*0x70bd74*/
            {
              v10 = *v9; /*0x70bd7a*/
              if ( *v9 ) /*0x70bd7a*/
              {
                v20 = (double)(int)v15; /*0x70bd8d*/
                WeaponRange = TechnoClass::GetWeaponRange(v10, v15); /*0x70bd91*/
                v16 = Math::RoundToInt(v20 / ((double)WeaponRange * 0.9) * (double)v18); /*0x70bdb5*/
                v19 = (double)(*(__int16 *)ProgressTimer::GetValue(&v8[25].__pad_0[4], (IUnknown *)&v20) - 0x3FFF) /*0x70bddc*/
                    * -0.00009587672516830327;
                v17 = (double)v16; /*0x70bdee*/
                v21 = (double)v23; /*0x70bdf6*/
                v12 = Math::SinCos(v19); /*0x70bdfa*/
                v2 = Math::RoundToInt(v21 - v12 * v17); /*0x70be0e*/
                v13 = Math::ArcTan2(v19); /*0x70be10*/
                v22 = Math::RoundToInt(v13 * v17 + (double)v22); /*0x70be25*/
              }
            }
          }
        }
      }
    }
  }
  *a2 = v22; /*0x70be33*/
  a2[1] = v2; /*0x70be35*/
  a2[2] = v4; /*0x70be38*/
  return a2; /*0x70be3b*/
}


// ==== 0x0070BE50  TechnoClass::CalcOffsetFacing  this=TechnoClass  sig=csp ====
int __thiscall sub_70BE50(int this)
{
  int v2; // edi

  v2 = (*(int (__stdcall **)(int))(*(_DWORD *)(this + 4) + 16))(this + 4); /*0x70be64*/
  return (int)(v2 + Math::RoundToInt(*(float *)(this + 588))) % 400; /*0x70be75*/
}


// ==== 0x0070BE80  TechnoClass::ShouldSelfHealOneStep  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::ShouldSelfHealOneStep(#377 *this)
{
  int result; // eax
  int v3; // edi
  int v4; // eax
  int v5; // et2
  int v6; // edi

  if ( *(_BYTE *)((*(int (__thiscall **)(#377 *))(this->hasParachute)(this) + 3348) /*0x70bee9*/
    || (VeterancyStruct::IsVeteran((float *)this + 84)
     || (result = VeterancyStruct::IsElite((float *)this + 84), (_BYTE)result))
    && ((v3 = (*(int (__thiscall **)(#377 *))(this->hasParachute)(this),
         VeterancyStruct::IsVeteran((float *)this + 84))
     && *(_BYTE *)(v3 + 677)
     || (result = VeterancyStruct::IsElite((float *)this + 84), (_BYTE)result)
     && (*(_BYTE *)(v3 + 677) || *(_BYTE *)(v3 + 695))) )
  {
    v4 = Math::RoundToInt(*(double *)&MEMORY[0x8871E0][1].? * 900.0); /*0x70bf0a*/
    v5 = (int)MEMORY[0xA8ED84] % v4; /*0x70bf17*/
    result = (int)MEMORY[0xA8ED84] / v4; /*0x70bf17*/
    if ( v5 ) /*0x70bf1b*/
    {
      LOBYTE(result) = 0; /*0x70bf1f*/
    }
    else
    {
      v6 = this->health; /*0x70bf25*/
      result = (*(int (__thiscall **)(#377 *))(this->hasParachute)(this); /*0x70bf2a*/
      LOBYTE(result) = v6 != *(_DWORD *)(result + 160) && v6 != 0; /*0x70bf3a*/
    }
  }
  else
  {
    LOBYTE(result) = 0; /*0x70bef5*/
  }
  return result; /*0x70bef3*/
}


// ==== 0x0070BF50  BuildingClass::AllocAndCtor  this=TechnoClass  sig=csp ====
int __stdcall BuildingClass::AllocAndCtor(BuildingClass *aP0, int aP2)
{
  void *v2; // ecx
  int result; // eax
  MouseClass *v3; // edi
  int v5; // ebp

  result = RadioClass::LoadState(v2, (ObjectClass *)aP0, (ObjectClass *)aP2); /*0x70bf5c*/
  if ( result >= 0 ) /*0x70bf65*/
  {
    aP0->planningToken = 0; /*0x70bf79*/
    ObjectPtr::RegisterForTracking((SwizzleManagerClass *)&stru_B05488.__pad_579C[5356], (MouseClass *)&aP0->focus); /*0x70bf7f*/
    v3 = (MouseClass *)&aP0->diskLaserTimer[1]; /*0x70bf84*/
    v5 = 8; /*0x70bf8a*/
    do /*0x70bf9e*/
    {
      ObjectPtr::RegisterForTracking((SwizzleManagerClass *)&stru_B05488.__pad_579C[5356], v3); /*0x70bf95*/
      v3 = (MouseClass *)((char *)v3 + 4); /*0x70bf9a*/
      --v5; /*0x70bf9d*/
    }
    while ( v5 ); /*0x70bf9e*/
    ObjectPtr::RegisterForTracking( /*0x70bfac*/
      (SwizzleManagerClass *)&stru_B05488.__pad_579C[5356],
      (MouseClass *)&aP0->ammoReloadTimer);
    ObjectPtr::RegisterForTracking( /*0x70bfbd*/
      (SwizzleManagerClass *)&stru_B05488.__pad_579C[5356],
      (MouseClass *)&aP0->spawnManager);
    ObjectPtr::RegisterForTracking((SwizzleManagerClass *)&stru_B05488.__pad_579C[5356], (MouseClass *)&aP0->Owner); /*0x70bfce*/
    ObjectPtr::RegisterForTracking( /*0x70bfdf*/
      (SwizzleManagerClass *)&stru_B05488.__pad_579C[5356],
      (MouseClass *)&aP0->voiceVolumeModifier);
    ObjectPtr::RegisterForTracking( /*0x70bff0*/
      (SwizzleManagerClass *)&stru_B05488.__pad_579C[5356],
      (MouseClass *)&aP0->sprayOffsetIndex);
    ObjectPtr::RegisterForTracking( /*0x70c001*/
      (SwizzleManagerClass *)&stru_B05488.__pad_579C[5356],
      (MouseClass *)&aP0->isUncrushable);
    ObjectPtr::RegisterForTracking( /*0x70c012*/
      (SwizzleManagerClass *)&stru_B05488.__pad_579C[5356],
      (MouseClass *)&aP0->rockerLinkedUnit);
    ObjectPtr::RegisterForTracking( /*0x70c023*/
      (SwizzleManagerClass *)&stru_B05488.__pad_579C[5356],
      (MouseClass *)&aP0->previousTeam);
    ObjectPtr::RegisterForTracking( /*0x70c034*/
      (SwizzleManagerClass *)&stru_B05488.__pad_579C[5356],
      (MouseClass *)&aP0->captureManager);
    ObjectPtr::RegisterForTracking( /*0x70c045*/
      (SwizzleManagerClass *)&stru_B05488.__pad_579C[5356],
      (MouseClass *)&aP0->mindControlledBy_a_unit);
    ObjectPtr::RegisterForTracking( /*0x70c056*/
      (SwizzleManagerClass *)&stru_B05488.__pad_579C[5356],
      (MouseClass *)&aP0->mindControlRingAnim);
    ObjectPtr::RegisterForTracking( /*0x70c067*/
      (SwizzleManagerClass *)&stru_B05488.__pad_579C[5356],
      (MouseClass *)&aP0->locomotorTarget);
    ObjectPtr::RegisterForTracking((SwizzleManagerClass *)&stru_B05488.__pad_579C[5356], (MouseClass *)&aP0->lastTarget); /*0x70c078*/
    ObjectPtr::RegisterForTracking( /*0x70c089*/
      (SwizzleManagerClass *)&stru_B05488.__pad_579C[5356],
      (MouseClass *)&aP0->mindControlledBy_house);
    ObjectPtr::RegisterForTracking( /*0x70c09a*/
      (SwizzleManagerClass *)&stru_B05488.__pad_579C[5356],
      (MouseClass *)&aP0->mindControlledBy);
    ObjectPtr::RegisterForTracking( /*0x70c0ab*/
      (SwizzleManagerClass *)&stru_B05488.__pad_579C[5356],
      (MouseClass *)&aP0->disguiseAsType);
    ObjectPtr::RegisterForTracking( /*0x70c0bc*/
      (SwizzleManagerClass *)&stru_B05488.__pad_579C[5356],
      (MouseClass *)&aP0->isDisguisedFlag_as_house);
    ObjectPtr::RegisterForTracking( /*0x70c0cd*/
      (SwizzleManagerClass *)&stru_B05488.__pad_579C[5356],
      (MouseClass *)&aP0->__pad_26A[10]);
    ObjectPtr::RegisterForTracking( /*0x70c0de*/
      (SwizzleManagerClass *)&stru_B05488.__pad_579C[5356],
      (MouseClass *)&aP0->__pad_26A[14]);
    ObjectPtr::RegisterForTracking( /*0x70c0ef*/
      (SwizzleManagerClass *)&stru_B05488.__pad_579C[5356],
      (MouseClass *)&aP0->owningHouseIndex0);
    ObjectPtr::RegisterForTracking( /*0x70c100*/
      (SwizzleManagerClass *)&stru_B05488.__pad_579C[5356],
      (MouseClass *)&aP0->isDeactivated);
    ObjectPtr::RegisterForTracking( /*0x70c111*/
      (SwizzleManagerClass *)&stru_B05488.__pad_579C[5356],
      (MouseClass *)&aP0->drainTarget);
    ObjectPtr::RegisterForTracking( /*0x70c122*/
      (SwizzleManagerClass *)&stru_B05488.__pad_579C[5356],
      (MouseClass *)&aP0->__pad_115[7]);
    ObjectPtr::RegisterForTracking((SwizzleManagerClass *)&stru_B05488.__pad_579C[5356], (MouseClass *)&aP0->airstrike); /*0x70c133*/
    ObjectPtr::RegisterForTracking((SwizzleManagerClass *)&stru_B05488.__pad_579C[5356], (MouseClass *)&aP0->isBerserk); /*0x70c144*/
    ObjectPtr::RegisterForTracking( /*0x70c155*/
      (SwizzleManagerClass *)&stru_B05488.__pad_579C[5356],
      (MouseClass *)&aP0->isBerserk_duration_left);
    ObjectPtr::RegisterForTracking( /*0x70c166*/
      (SwizzleManagerClass *)&stru_B05488.__pad_579C[5356],
      (MouseClass *)&aP0->__pad_3F7[49]);
    ObjectPtr::RegisterForTracking( /*0x70c177*/
      (SwizzleManagerClass *)&stru_B05488.__pad_579C[5356],
      (MouseClass *)&aP0->__pad_3F7[53]);
    ObjectPtr::RegisterForTracking( /*0x70c188*/
      (SwizzleManagerClass *)&stru_B05488.__pad_579C[5356],
      (MouseClass *)&aP0->__pad_115[3]);
    ObjectPtr::RegisterForTracking( /*0x70c199*/
      (SwizzleManagerClass *)&stru_B05488.__pad_579C[5356],
      (MouseClass *)&aP0->damageParticles);
    ObjectPtr::RegisterForTracking( /*0x70c1aa*/
      (SwizzleManagerClass *)&stru_B05488.__pad_579C[5356],
      (MouseClass *)&aP0->__pad_115[27]);
    ObjectPtr::RegisterForTracking( /*0x70c1bb*/
      (SwizzleManagerClass *)&stru_B05488.__pad_579C[5356],
      (MouseClass *)&aP0->__pad_115[23]);
    ObjectPtr::RegisterForTracking((SwizzleManagerClass *)&stru_B05488.__pad_579C[5356], (MouseClass *)&aP0->target); /*0x70c1cc*/
    ObjectPtr::RegisterForTracking((SwizzleManagerClass *)&stru_B05488.__pad_579C[5356], (MouseClass *)&aP0->drainingMe); /*0x70c1dd*/
    AudioController::Init(&aP0->audioController4[3]); /*0x70c1e8*/
    *(_DWORD *)&aP0->__pad_491[11] = 1; /*0x70c1f3*/
    *(_DWORD *)&aP0->__pad_491[15] = 0; /*0x70c1fd*/
    AudioController::Init(&aP0->__pad_491[19]); /*0x70c203*/
    aP0->__pad_491[39] = 0; /*0x70c20e*/
    aP0->audioHandle4 = 0; /*0x70c214*/
    AudioController::Init(aP0->audioController5); /*0x70c21a*/
    aP0->isAudio5Active = 0; /*0x70c225*/
    aP0->audioHandle5 = 0; /*0x70c22b*/
    AudioController::Init(aP0->audioController6); /*0x70c231*/
    aP0->queuedVoiceIndex = -1; /*0x70c23a*/
    aP0->voiceFlags = -1; /*0x70c240*/
    return 0; /*0x70c246*/
  }
  return result; /*0x70c249*/
}


// ==== 0x0070C250  TechnoClass::GetSizeMax  this=TechnoClass  sig=csp ====
int __stdcall IPersistStream::GetSizeMax(int a0, RadioClass *aP1, int a3)
{
  RadioClass::SaveState((int *)a0, aP1, a3); /*0x70c25f*/
  return 0; /*0x70c266*/
}


// ==== 0x0070C270  TechnoClass::PowerBeginUpdate  this=TechnoClass  sig=csp ====
int __thiscall House::PowerBeginUpdate(int this, AbstractClass *aP1)
{
  int v3; // edx
  int v4; // edx
  int v5; // eax
  int v6; // ecx
  int v7; // edx
  int v8; // eax
  int v9; // ecx
  int v10; // edx
  int v11; // eax
  int v12; // ecx
  int v13; // edx
  CellStruct *v22; // eax
  int v15; // ecx
  int v16; // edx
  int v17; // ecx
  int v18; // ebp
  int i; // ebx
  int v20; // ebp
  int result; // eax
  int j; // ebx
  AbstractClass *v33; // [esp-4h] [ebp-14h]
  AbstractClass *v34; // [esp-4h] [ebp-14h]

  RadioClass::PowerDrainUpdate((int *)this, aP1); /*0x70c27b*/
  Power::TimerProcess(aP1); /*0x70c289*/
  Checksummer::Add_double(aP1, *(AbstractClass **)(this + 344), *(AbstractClass **)(this + 348)); /*0x70c29e*/
  Checksummer::Add_double(aP1, *(AbstractClass **)(this + 352), *(AbstractClass **)(this + 356)); /*0x70c2b3*/
  Power::TimerProcess(aP1); /*0x70c2de*/
  Power::TimerProcess(aP1); /*0x70c2ec*/
  Power::TimerProcess(aP1); /*0x70c2fa*/
  Power::TimerProcess(aP1); /*0x70c325*/
  Checksummer::Add_float((unsigned int *)aP1, *(ParticleSystemClass **)(this + 588)); /*0x70c333*/
  LOBYTE(v3) = *(_BYTE *)(this + 592); /*0x70c338*/
  Power::FlagProcess(aP1, v3); /*0x70c341*/
  Power::TimerProcess(aP1); /*0x70c34f*/
  Checksummer::Add_float((unsigned int *)aP1, *(ParticleSystemClass **)(this + 744)); /*0x70c35d*/
  Power::TimerProcess(aP1); /*0x70c388*/
  Power::TimerProcess(aP1); /*0x70c396*/
  Power::TimerProcess(aP1); /*0x70c3c1*/
  Power::TimerProcess(aP1); /*0x70c3cf*/
  Checksummer::Add_float((unsigned int *)aP1, *(ParticleSystemClass **)(this + 808)); /*0x70c3dd*/
  Checksummer::Add_float((unsigned int *)aP1, *(ParticleSystemClass **)(this + 812)); /*0x70c3eb*/
  Checksummer::Add_float((unsigned int *)aP1, *(ParticleSystemClass **)(this + 816)); /*0x70c3f9*/
  Checksummer::Add_float((unsigned int *)aP1, *(ParticleSystemClass **)(this + 820)); /*0x70c407*/
  LOBYTE(v4) = *(_BYTE *)(this + 973); /*0x70c40c*/
  v5 = Power::FlagProcess(aP1, v4); /*0x70c415*/
  LOBYTE(v5) = *(_BYTE *)(this + 975); /*0x70c41a*/
  Power::FlagProcess(aP1, v5); /*0x70c423*/
  LOBYTE(v6) = *(_BYTE *)(this + 976); /*0x70c428*/
  Power::FlagProcess(aP1, v6); /*0x70c431*/
  LOBYTE(v7) = *(_BYTE *)(this + 977); /*0x70c436*/
  v8 = Power::FlagProcess(aP1, v7); /*0x70c43f*/
  LOBYTE(v8) = *(_BYTE *)(this + 978); /*0x70c444*/
  Power::FlagProcess(aP1, v8); /*0x70c44d*/
  LOBYTE(v9) = *(_BYTE *)(this + 979); /*0x70c452*/
  Power::FlagProcess(aP1, v9); /*0x70c45b*/
  LOBYTE(v10) = *(_BYTE *)(this + 980); /*0x70c460*/
  v11 = Power::FlagProcess(aP1, v10); /*0x70c469*/
  LOBYTE(v11) = *(_BYTE *)(this + 981); /*0x70c46e*/
  Power::FlagProcess(aP1, v11); /*0x70c477*/
  LOBYTE(v12) = *(_BYTE *)(this + 1048); /*0x70c47c*/
  Power::FlagProcess(aP1, v12); /*0x70c485*/
  LOBYTE(v13) = *(_BYTE *)(this + 1049); /*0x70c48a*/
  Power::FlagProcess(aP1, v13); /*0x70c493*/
  v22 = MEMORY[0xA8B238]; /*0x70c498*/
  if ( !MEMORY[0xA8B238] || MEMORY[0xA8B238] == (CellStruct *)5 ) /*0x70c4a4*/
  {
    LOBYTE(v22) = *(_BYTE *)(this + 1050); /*0x70c4a6*/
    Power::FlagProcess(aP1, (int)v22); /*0x70c4af*/
    LOBYTE(v15) = *(_BYTE *)(this + 1051); /*0x70c4b4*/
    Power::FlagProcess(aP1, v15); /*0x70c4bd*/
    LOBYTE(v16) = *(_BYTE *)(this + 1052); /*0x70c4c2*/
    v22 = (CellStruct *)Power::FlagProcess(aP1, v16); /*0x70c4cb*/
  }
  LOBYTE(v22) = *(_BYTE *)(this + 1053); /*0x70c4d0*/
  Power::FlagProcess(aP1, (int)v22); /*0x70c4d9*/
  Power::TimerProcess(aP1); /*0x70c4e7*/
  Power::TimerProcess(aP1); /*0x70c4f7*/
  Power::TimerProcess(aP1); /*0x70c507*/
  LOBYTE(v17) = *(_BYTE *)(this + 1056); /*0x70c50c*/
  Power::FinalizeDrain(aP1, v17); /*0x70c515*/
  v18 = *(_DWORD *)(this + 1128); /*0x70c51a*/
  Power::TimerProcess(aP1); /*0x70c523*/
  for ( i = 0; i < v18; ++i ) /*0x70c52c*/
  {
    v33 = (AbstractClass *)(*(_DWORD *)(*(_DWORD *)(this + 1116) + 4 * i) + 4); /*0x70c547*/
    (*(void (__stdcall **)(AbstractClass *))(*(_DWORD *)v33->__pad_0 + 16))(v33); /*0x70c54a*/
    Power::TimerProcess(aP1); /*0x70c550*/
    Power::TimerProcess(aP1); /*0x70c55c*/
  }
  v20 = *(_DWORD *)(this + 1152); /*0x70c566*/
  result = Power::TimerProcess(aP1); /*0x70c56f*/
  for ( j = 0; j < v20; ++j ) /*0x70c578*/
  {
    v34 = (AbstractClass *)(*(_DWORD *)(*(_DWORD *)(this + 1140) + 4 * j) + 4); /*0x70c586*/
    (*(void (__stdcall **)(AbstractClass *))(*(_DWORD *)v34->__pad_0 + 16))(v34); /*0x70c589*/
    result = Power::TimerProcess(aP1); /*0x70c58f*/
  }
  return result; /*0x70c599*/
}


// ==== 0x0070C5A0  TechnoClass::CheckCellPassability  this=TechnoClass  sig=csp ====
int __thiscall BuildingClass::_vt162(#377 *this)
{
  int result; // eax

  LOBYTE(result) = this->q3D2 != 0; /*0x70c5a8*/
  return result; /*0x70c5ab*/
}


// ==== 0x0070C5B0  ObjectClass::GetShroudByte  this=TechnoClass  sig=csp ====
int __thiscall ObjectClass::GetShroudByte(#377 *this)
{
  int result; // eax

  LOBYTE(result) = this->isBeingWarpedOut; /*0x70c5b0*/
  return result; /*0x70c5b6*/
}


// ==== 0x0070C5C0  ObjectClass::GetFogByte  this=TechnoClass  sig=csp ====
int __thiscall ObjectClass::GetFogByte(#377 *this)
{
  int result; // eax

  LOBYTE(result) = this->isWarpingOut; /*0x70c5c0*/
  return result; /*0x70c5c6*/
}


// ==== 0x0070C5D0  ObjectClass::HasSubObject  this=TechnoClass  sig=csp ====
int __thiscall ObjectClass::HasSubObject(#377 *this)
{
  int result; // eax

  result = this->temporalUsing; /*0x70c5d0*/
  LOBYTE(result) = result && *(_DWORD *)(result + 40); /*0x70c5e1*/
  return result; /*0x70c5e3*/
}


// ==== 0x0070C5F0  ObjectClass::IsNotShrouded  this=TechnoClass  sig=csp ====
int __thiscall ObjectClass::IsNotShrouded(#377 *this)
{
  int result; // eax

  LOBYTE(result) = !this->isBeingWarpedOut && !this->isWarpingOut; /*0x70c607*/
  return result; /*0x70c606*/
}


// ==== 0x0070C610  TechnoClass::SetFocus  this=IUnknown  sig=csp ====
int __thiscall TechnoClass::SetFocus(_DWORD *this, IUnknown *aP1)
{
  this->q086 = aP1; /*0x70c614*/
  return (int)aP1; /*0x70c61a*/
}


// ==== 0x0070C620  TechnoClass::CheckCliffTransition  this=TechnoClass  sig=csp ====
int __thiscall FootClass::CheckCliffTransition(#377 *this)
{
  int v2; // edi
  int v3; // eax
  _DWORD *v4; // eax
  int v6; // [esp+8h] [ebp-14h] BYREF
  _BYTE v7[4]; // [esp+Ch] [ebp-10h] BYREF
  _DWORD v8[3]; // [esp+10h] [ebp-Ch] BYREF

  v8[0] = this->q027; /*0x70c633*/
  v8[1] = this->owningHouseIndex; /*0x70c645*/
  v8[2] = this->q029; /*0x70c651*/
  v2 = *Terrain::ClimbCheck(&v6, v8); /*0x70c65a*/
  v3 = *(_DWORD *)this; /*0x70c65c*/
  v6 = v2; /*0x70c662*/
  v4 = (_DWORD *)(*(int (__thiscall **)(#377 *, _BYTE *))(v3 + 440))(this, v7); /*0x70c669*/
  return __PAIR32__(HIWORD(v6), v2) != *v4; /*0x70c672*/
}


// ==== 0x0070C690  Weapon::DestroyTerrain  this=IUnknown  sig=csp ====
int *__thiscall Weapon::DestroyTerrain(int *this, int *a1, IUnknown *aP2, InfantryClass *aP3, IUnknown *aP4)
{
  int v5; // eax
  int v6; // edx
  int v7; // eax
  double v8; // st7
  int v9; // eax
  int v10; // edx
  int v11; // eax
  int *v12; // eax
  _DWORD *v13; // eax
  int v14; // esi
  int v15; // edx
  int v16; // eax
  double v17; // st7
  double v18; // st6
  double v19; // st5
  double v20; // st4
  double v21; // st3
  double v22; // st2
  double v23; // st7
  double v24; // st7
  int v25; // eax
  int v26; // ecx
  CCINIClass *v27; // edx
  int GroundHeight; // eax
  int v29; // eax
  int v30; // ecx
  CCINIClass *v31; // edx
  _DWORD *v32; // eax
  int v33; // esi
  void *v34; // eax
  int v35; // edx
  CCINIClass *v36; // edx
  VectorClass *v37; // ecx
  int v39; // esi
  int v40; // esi
  int v41; // edx
  ObjectClass *v42; // edx
  int v43; // ecx
  IUnknown *v44; // [esp+18h] [ebp-C4h]
  char v45; // [esp+2Bh] [ebp-B1h]
  CCINIClass *v46; // [esp+2Ch] [ebp-B0h]
  int v47; // [esp+2Ch] [ebp-B0h]
  void **v48; // [esp+30h] [ebp-ACh] BYREF
  void *Block; // [esp+34h] [ebp-A8h]
  int v50; // [esp+38h] [ebp-A4h]
  int v51; // [esp+3Ch] [ebp-A0h]
  int v52; // [esp+40h] [ebp-9Ch]
  int v53; // [esp+44h] [ebp-98h]
  CCINIClass *v54; // [esp+48h] [ebp-94h]
  VectorClass *v55; // [esp+4Ch] [ebp-90h]
  float v56; // [esp+50h] [ebp-8Ch]
  float v57; // [esp+54h] [ebp-88h]
  CCINIClass *v58; // [esp+58h] [ebp-84h] BYREF
  int v59; // [esp+5Ch] [ebp-80h] BYREF
  int v60; // [esp+60h] [ebp-7Ch]
  int v61; // [esp+64h] [ebp-78h]
  float v62; // [esp+68h] [ebp-74h] BYREF
  int v63; // [esp+6Ch] [ebp-70h]
  float v64; // [esp+70h] [ebp-6Ch]
  int v65; // [esp+74h] [ebp-68h] BYREF
  ObjectClass *v66; // [esp+78h] [ebp-64h]
  int v67; // [esp+7Ch] [ebp-60h]
  float v68; // [esp+80h] [ebp-5Ch]
  float v69; // [esp+84h] [ebp-58h]
  float v70; // [esp+88h] [ebp-54h]
  float v71; // [esp+8Ch] [ebp-50h]
  float v72; // [esp+90h] [ebp-4Ch]
  float v73; // [esp+94h] [ebp-48h]
  int *v74; // [esp+98h] [ebp-44h]
  int v75; // [esp+9Ch] [ebp-40h]
  int v76; // [esp+A0h] [ebp-3Ch]
  int v77; // [esp+A4h] [ebp-38h]
  float v78; // [esp+A8h] [ebp-34h] BYREF
  float v79; // [esp+ACh] [ebp-30h]
  float v80; // [esp+B0h] [ebp-2Ch]
  double v81; // [esp+B4h] [ebp-28h]
  double v82; // [esp+BCh] [ebp-20h]
  double v83; // [esp+C4h] [ebp-18h]
  _DWORD v84[3]; // [esp+D0h] [ebp-Ch] BYREF

  v74 = this; /*0x70c6a0*/
  v5 = (*(int (__thiscall **)(InfantryClass *, float *))(*(_DWORD *)aP3->__pad_0 + 72))(aP3, &v78); /*0x70c6b2*/
  v65 = *(_DWORD *)v5; /*0x70c6ba*/
  v66 = *(ObjectClass **)(v5 + 4); /*0x70c6c4*/
  v6 = *(_DWORD *)(v5 + 8); /*0x70c6ca*/
  v7 = aP2->field_0; /*0x70c6cd*/
  v67 = v6; /*0x70c6cf*/
  v54 = (CCINIClass *)v7; /*0x70c6d3*/
  v8 = (double)v7; /*0x70c6d7*/
  v45 = 0; /*0x70c6e5*/
  LOWORD(v46) = v7 / 256; /*0x70c6ed*/
  v9 = aP2->field_4; /*0x70c6f2*/
  v71 = v8; /*0x70c6f5*/
  v64 = *(float *)&v9; /*0x70c6f9*/
  v72 = (float)v9; /*0x70c702*/
  v10 = aP2->field_0; /*0x70c711*/
  v73 = (float)aP2->field_8; /*0x70c713*/
  HIWORD(v46) = v9 / 256; /*0x70c725*/
  v69 = (float)(int)v66; /*0x70c72e*/
  v58 = v46; /*0x70c736*/
  v11 = aP2->field_4; /*0x70c73a*/
  v59 = v10; /*0x70c73d*/
  v60 = v11; /*0x70c741*/
  v70 = (float)v67; /*0x70c745*/
  v61 = aP2->field_8; /*0x70c750*/
  *(float *)&v55 = (double)v65 - v71; /*0x70c758*/
  v56 = v69 - v72; /*0x70c764*/
  v57 = v70 - v73; /*0x70c773*/
  ObjectVector::Construct(&v48, 0, 0); /*0x70c777*/
  v48 = &vt_DynamicVectorClass_ObjectClass; /*0x70c77c*/
  v53 = 10; /*0x70c784*/
  v52 = 0; /*0x70c78c*/
  v47 = 0; /*0x70c790*/
  while ( 1 ) /*0x70c7aa*/
  {
    *(float *)&v44 = (double)v47 * 0.020408163; /*0x70c7aa*/
    v12 = Color::RGBFromFloat(v84, (IUnknown *)&v65, *(float *)&v44); /*0x70c7b0*/
    v59 = *v12; /*0x70c7b9*/
    v60 = v12[1]; /*0x70c7c0*/
    v61 = v12[2]; /*0x70c7c7*/
    if ( (CCINIClass *)__PAIR32__(v60 / 256, v59 / 256) != v58 ) /*0x70c7ec*/
    {
      LOWORD(v54) = v59 / 256; /*0x70c7f9*/
      HIWORD(v54) = v60 / 256; /*0x70c802*/
      v58 = v54; /*0x70c811*/
      v13 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v58); /*0x70c815*/
      if ( (v13[80] & 0x100) != 0 && v61 >= *(_DWORD *)&MEMORY[0xB077F8].__pad_579C[7072] * (*((char *)v13 + 283) + 4) ) /*0x70c83c*/
        v14 = v13[58]; /*0x70c83e*/
      else
        v14 = v13[57]; /*0x70c846*/
      while ( v14 ) /*0x70c84e*/
      {
        if ( (int *)v14 == v74 ) /*0x70c858*/
          goto LABEL_31; /*0x70c858*/
        if ( (InfantryClass *)v14 == aP3 ) /*0x70c860*/
          v45 = 1; /*0x70c862*/
        HIBYTE(v63) = *(_BYTE *)(v14 + 20) & 1; /*0x70c874*/
        if ( !HIBYTE(v63) ) /*0x70c878*/
          goto LABEL_31; /*0x70c878*/
        v15 = *(_DWORD *)v14; /*0x70c87e*/
        v62 = 0.0; /*0x70c882*/
        if ( (*(int (__thiscall **)(int))(v15 + 44))(v14) == 6 ) /*0x70c890*/
        {
          v24 = v62; /*0x70c9d3*/
        }
        else
        {
          v75 = *(_DWORD *)(v14 + 156); /*0x70c8a2*/
          v16 = *(_DWORD *)(v14 + 164); /*0x70c8b3*/
          v76 = *(_DWORD *)(v14 + 160); /*0x70c8b6*/
          v77 = v16; /*0x70c8c4*/
          v79 = (float)v76; /*0x70c8cb*/
          v80 = (float)v16; /*0x70c8d9*/
          v17 = (double)v75 - v71; /*0x70c8e0*/
          v18 = v79 - v72; /*0x70c8eb*/
          v19 = v80 - v73; /*0x70c8f6*/
          v20 = v18 * v57 - v19 * v56; /*0x70c906*/
          v21 = v19 * *(float *)&v55 - v57 * v17; /*0x70c914*/
          v22 = v56 * v17 - v18 * *(float *)&v55; /*0x70c922*/
          v68 = v21 * v57 - v22 * v56; /*0x70c932*/
          v69 = v22 * *(float *)&v55 - v57 * v20; /*0x70c942*/
          v82 = v69; /*0x70c95a*/
          v81 = v20 * v56 - v21 * *(float *)&v55; /*0x70c961*/
          v83 = v68; /*0x70c96c*/
          v64 = v81 * v19 + v69 * v18 + v68 * v17; /*0x70c985*/
          v23 = Math::Sqrt(v68 * v68 + v81 * v81 + v69 * v69); /*0x70c9c3*/
          v24 = fabs(v64 / v23); /*0x70c9cf*/
        }
        if ( v24 >= (double)*(int *)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9108] + 1172) /*0x70c9f0*/
          && (InfantryClass *)v14 != aP3 )
        {
          goto LABEL_31; /*0x70c9f0*/
        }
        v25 = v52; /*0x70c9f2*/
        if ( v52 ) /*0x70c9f8*/
        {
          v26 = 0; /*0x70c9fa*/
          if ( v52 > 0 ) /*0x70c9fe*/
          {
            v27 = (CCINIClass *)Block; /*0x70ca00*/
            while ( *(_DWORD *)v27->__pad_0 != v14 ) /*0x70ca06*/
            {
              ++v26; /*0x70ca08*/
              v27 = (CCINIClass *)((char *)v27 + 4); /*0x70ca09*/
              if ( v26 >= v52 ) /*0x70ca0e*/
                goto LABEL_24; /*0x70ca0e*/
            }
            if ( v26 != -1 ) /*0x70ca15*/
              goto LABEL_31; /*0x70ca15*/
          }
        }
LABEL_24:
        if ( v52 >= v50 ) /*0x70ca1d*/
        {
          if ( !BYTE1(v51) && v50 /*0x70ca40*/
            || v53 <= 0
            || !((unsigned __int8 (__thiscall *)(void ***, int, _DWORD))v48[2])(&v48, v53 + v50, 0) )
          {
            goto LABEL_31; /*0x70ca45*/
          }
          v25 = v52; /*0x70ca47*/
        }
        v52 = v25 + 1; /*0x70ca4e*/
        *((_DWORD *)Block + v25) = v14; /*0x70ca56*/
LABEL_31:
        v14 = *(_DWORD *)(v14 + 48); /*0x70ca59*/
      }
      GroundHeight = Cell::GetGroundHeight(&v59); /*0x70ca6e*/
      if ( GroundHeight > v61 ) /*0x70ca77*/
        break; /*0x70ca77*/
    }
    if ( ++v47 >= 50 ) /*0x70ca85*/
    {
      if ( v45 || !aP3 || (aP3->abstractFlags & 2) == 0 ) /*0x70caa3*/
        goto LABEL_55; /*0x70caa3*/
      v29 = v52; /*0x70caa9*/
      if ( !v52 ) /*0x70caaf*/
        goto LABEL_48; /*0x70caaf*/
      v30 = 0; /*0x70cab5*/
      if ( v52 <= 0 ) /*0x70cab9*/
        goto LABEL_48; /*0x70cab9*/
      v31 = (CCINIClass *)Block; /*0x70cabf*/
      while ( *(InfantryClass **)v31->__pad_0 != aP3 ) /*0x70cac5*/
      {
        ++v30; /*0x70cacb*/
        v31 = (CCINIClass *)((char *)v31 + 4); /*0x70cacc*/
        if ( v30 >= v52 ) /*0x70cad1*/
          goto LABEL_48; /*0x70cad1*/
      }
      if ( v30 == -1 ) /*0x70cb68*/
      {
LABEL_48:
        if ( v52 < v50 ) /*0x70cb70*/
          goto LABEL_54; /*0x70cb70*/
        if ( (BYTE1(v51) || !v50) && v53 > 0 ) /*0x70cb84*/
        {
          if ( ((unsigned __int8 (__thiscall *)(void ***, int, _DWORD))v48[2])(&v48, v53 + v50, 0) ) /*0x70cb93*/
          {
            v29 = v52; /*0x70cb9a*/
LABEL_54:
            v52 = v29 + 1; /*0x70cb9e*/
            *((_DWORD *)Block + v29) = aP3; /*0x70cba9*/
          }
LABEL_55:
          v29 = v52; /*0x70cbac*/
        }
      }
      v39 = 0; /*0x70cbb0*/
      if ( v29 > 0 ) /*0x70cbb4*/
      {
        do /*0x70cbf5*/
        {
          v62 = *(float *)&aP4->__pad_8C[12]; /*0x70cbc3*/
          (*(void (__thiscall **)(_DWORD, float *, _DWORD, _DWORD, int *, _DWORD, _DWORD, _DWORD))(**((_DWORD **)Block + v39) /*0x70cbe8*/
                                                                                                 + 364))(
            *((_DWORD *)Block + v39),
            &v62,
            0,
            *(_DWORD *)&aP4->__pad_A8[4],
            v74,
            0,
            0,
            0);
          ++v39; /*0x70cbf2*/
        }
        while ( v39 < v52 ); /*0x70cbf5*/
      }
      if ( (*(int (__thiscall **)(InfantryClass *))(*(_DWORD *)aP3->__pad_0 + 44))(aP3) == 11 /*0x70cc05*/
        && CellClass::IsActiveOrNext(aP3) )
      {
        v40 = *(_DWORD *)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9108] + 6092); /*0x70cc1e*/
        if ( Random::Range(&MEMORY[0xA8B230]->random[1], 0, (IUnknown *)0x63) < v40 ) /*0x70cc31*/
          LayerClass::DestroyCliff((int *)&MEMORY[0x87F7E8], v41, (int)aP3); /*0x70cc39*/
      }
      v42 = v66; /*0x70cc45*/
      v48 = &vt_VectorClass_ObjectClass; /*0x70cc4b*/
      *a1 = v65; /*0x70cc53*/
      v43 = v67; /*0x70cc55*/
      a1[1] = (int)v42; /*0x70cc59*/
      a1[2] = v43; /*0x70cc5c*/
      if ( Block ) /*0x70cc65*/
      {
        if ( BYTE1(v51) ) /*0x70cc6d*/
          __3_YAXPAX_Z(Block); /*0x70cc70*/
      }
      return a1; /*0x70cc78*/
    }
  }
  v32 = Coord::To_Cell(&MEMORY[0x87F7E8], (IUnknown *)&v59); /*0x70cae2*/
  if ( CellClass::IsActiveOrNext(v32) ) /*0x70cae9*/
  {
    v33 = *(_DWORD *)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9108] + 6092); /*0x70cb01*/
    if ( Random::Range(&MEMORY[0xA8B230]->random[1], 0, (IUnknown *)0x63) < v33 ) /*0x70cb14*/
    {
      v34 = Coord::To_Cell(&MEMORY[0x87F7E8], (IUnknown *)&v59); /*0x70cb20*/
      LayerClass::DestroyCliff((int *)&MEMORY[0x87F7E8], v35, (int)v34); /*0x70cb2b*/
    }
  }
  v36 = (CCINIClass *)v60; /*0x70cb37*/
  v48 = &vt_VectorClass_ObjectClass; /*0x70cb3d*/
  *a1 = v59; /*0x70cb45*/
  v37 = (VectorClass *)v61; /*0x70cb47*/
  a1[1] = (int)v36; /*0x70cb4b*/
  a1[2] = (int)v37; /*0x70cb4e*/
  ObjectVector::ddtor((int)&v48); /*0x70cb55*/
  return a1; /*0x70cb5c*/
}


// ==== 0x0070CC90  TechnoClass::RadarUpdateOn  this=TechnoClass  sig=csp ====
void __thiscall TechnoClass::RadarUpdateOn(int this)
{
  BuildingClass::ProcessFogCellOccupancy( /*0x70cca7*/
    (int)&MEMORY[0x87F7E8],
    (TechnoClass *)this,
    *(MouseClass **)(this + 520),
    *(MouseClass **)(this + 524));
  *(_BYTE *)(this + 1059) = 1; /*0x70ccac*/
}


// ==== 0x0070CCC0  TechnoClass::RadarUpdateOff  this=TechnoClass  sig=csp ====
void __thiscall TechnoClass::RadarUpdateOff(int this)
{
  BuildingClass::RemoveGapCellCoverage( /*0x70ccd7*/
    (int)&MEMORY[0x87F7E8],
    (TechnoClass *)this,
    *(MouseClass **)(this + 520),
    *(MouseClass **)(this + 524));
  *(_BYTE *)(this + 1059) = 0; /*0x70ccdc*/
}


// ==== 0x0070CCF0  TechnoClass::RevealOwnCell  this=TechnoClass  sig=csp ====
void __thiscall TechnoClass_RevealOwnCell(_DWORD *this)
{
  FogOfWar::RevealCell((int)&MEMORY[0x87F7E8], this + 130); /*0x70ccfc*/
}


// ==== 0x0070CD10  TechnoClass::ComputeDamage  this=AbstractClass  sig=csp ====
double __thiscall TechnoClass::ComputeDamage(_DWORD *this, ObjectClass *aP1, _DWORD *a2)
{
  _DWORD *v4; // ebx
  int v6; // edx
  unsigned int v7; // eax
  unsigned int v8; // ecx
  int v9; // eax
  unsigned int v10; // ecx
  unsigned int v11; // edx
  unsigned int v12; // eax
  int v13; // ecx
  int v14; // edx
  int v15; // ecx
  unsigned int v16; // edx
  unsigned int v17; // eax
  int v18; // eax
  int v19; // eax
  int v20; // eax
  int v21; // eax
  int v22; // eax
  double v23; // st7
  double v24; // st7
  int v25; // eax
  int v26; // eax
  _DWORD *v27; // eax
  int v28; // edi
  int v29; // esi
  int v30; // ecx
  int v31; // edx
  double v32; // st7
  int v33; // eax
  _DWORD *v34; // esi
  int *v35; // eax
  int v36; // ecx
  int v37; // edx
  int v38; // edi
  int v39; // eax
  int v40; // eax
  double v41; // st7
  int v42; // [esp+2Ch] [ebp-4Ch]
  int v43; // [esp+2Ch] [ebp-4Ch]
  double v44; // [esp+30h] [ebp-48h]
  double v45; // [esp+30h] [ebp-48h]
  double v46; // [esp+38h] [ebp-40h]
  double v47; // [esp+40h] [ebp-38h] BYREF
  double v48[2]; // [esp+50h] [ebp-28h] BYREF
  double v49; // [esp+60h] [ebp-18h]
  int v50; // [esp+68h] [ebp-10h]
  double v51; // [esp+70h] [ebp-8h]

  v4 = (_DWORD *)(*(int (__thiscall **)(_DWORD *))(*this + 132))(this); /*0x70cd29*/
  if ( !(*(int (__thiscall **)(ObjectClass *))(*(_DWORD *)aP1->__pad_0 + 136))(aP1) ) /*0x70cd2f*/
    return 0.0; /*0x70cd39*/
  if ( *(_BYTE *)(this->q21C + 507) ) /*0x70cd4e*/
  {
    v6 = v4[179]; /*0x70cd5e*/
    v7 = v4[180]; /*0x70cd64*/
    LODWORD(v48[0]) = v4[178]; /*0x70cd6a*/
    v8 = v4[181]; /*0x70cd6e*/
    HIDWORD(v48[0]) = v6; /*0x70cd74*/
    v46 = COERCE_DOUBLE(__PAIR64__(v8, v7)); /*0x70cd7e*/
    v9 = v4[183]; /*0x70cd82*/
    v10 = v4[184]; /*0x70cd8c*/
    LODWORD(v47) = v4[182]; /*0x70cd92*/
    v11 = v4[185]; /*0x70cd96*/
    HIDWORD(v47) = v9; /*0x70cd9c*/
    v12 = v4[186]; /*0x70cda0*/
    v49 = COERCE_DOUBLE(__PAIR64__(v11, v10)); /*0x70cda6*/
    v51 = COERCE_DOUBLE(__PAIR64__(v4[187], v12)); /*0x70cdb4*/
  }
  else
  {
    v13 = *(_DWORD *)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9108] + 4204); /*0x70cdc9*/
    LODWORD(v48[0]) = *(_DWORD *)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9108] + 4200); /*0x70cdcf*/
    v14 = *(_DWORD *)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9108] + 4208); /*0x70cdd3*/
    HIDWORD(v48[0]) = v13; /*0x70cdd9*/
    LODWORD(v46) = v14; /*0x70cde3*/
    HIDWORD(v46) = *(_DWORD *)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9108] + 4212); /*0x70cded*/
    v47 = *(double *)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9108] + 4216); /*0x70cdf7*/
    v15 = *(_DWORD *)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9108] + 4228); /*0x70ce05*/
    LODWORD(v49) = *(_DWORD *)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9108] + 4224); /*0x70ce0b*/
    v16 = *(_DWORD *)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9108] + 4232); /*0x70ce0f*/
    v17 = *(_DWORD *)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9108] + 4236); /*0x70ce15*/
    HIDWORD(v49) = v15; /*0x70ce1b*/
    v51 = COERCE_DOUBLE(__PAIR64__(v17, v16)); /*0x70ce1f*/
  }
  v18 = (*(int (__thiscall **)(_DWORD *, ObjectClass *))(*this + 740))(this, aP1); /*0x70ce2c*/
  v42 = *(_DWORD *)(*(int (__thiscall **)(_DWORD *, int))(*this + 1016))(this, v18); /*0x70ce43*/
  v44 = 0.0; /*0x70ce47*/
  v19 = (*(int (__thiscall **)(ObjectClass *))(*(_DWORD *)aP1->__pad_0 + 44))(aP1); /*0x70ce57*/
  if ( (v19 == 6 || v19 == 15 || v19 == 1 || v19 == 2) && aP1 ) /*0x70ce74*/
  {
    v20 = (*(int (__thiscall **)(ObjectClass *, _DWORD *))(*(_DWORD *)aP1->__pad_0 + 740))(aP1, this); /*0x70ce7f*/
    v21 = *(_DWORD *)(*(int (__thiscall **)(ObjectClass *, int))(*(_DWORD *)aP1->__pad_0 + 1016))(aP1, v20); /*0x70ce90*/
    if ( v21 ) /*0x70ce94*/
    {
      v22 = *(_DWORD *)(v21 + 172); /*0x70ce96*/
      if ( v22 ) /*0x70ce9e*/
      {
        if ( *(_DWORD **)&aP1[4].__pad_0[4] == this ) /*0x70cea6*/
          v23 = -(v46 * *(double *)(v22 + 8 * v4[39] + 160)); /*0x70ceb9*/
        else
          v23 = v46 * *(double *)(v22 + 8 * v4[39] + 160); /*0x70cec7*/
        v44 = v23; /*0x70cece*/
      }
    }
    v24 = v47 * *(double *)((*(int (__thiscall **)(ObjectClass *))(*(_DWORD *)aP1->__pad_0 + 132))(aP1) + 704) + v44; /*0x70ceec*/
    v25 = *(_DWORD *)(this->q21C + 22016); /*0x70cef0*/
    v44 = v24; /*0x70cef9*/
    if ( v25 != -1 && v25 == *(_DWORD *)(aP1[3].nextArrayIndex + 48) ) /*0x70cf08*/
      v44 = v24 + *(double *)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9108] + 4240); /*0x70cf19*/
  }
  if ( v42 && *(_DWORD *)(v42 + 172) ) /*0x70cf25*/
    v44 = v48[0] /*0x70cf54*/
        * *(double *)(*(_DWORD *)(v42 + 172)
                    + 8 * *(_DWORD *)((*(int (__thiscall **)(ObjectClass *))(*(_DWORD *)aP1->__pad_0 + 136))(aP1) + 156)
                    + 160)
        + v44;
  v45 = BuildingClass::GetHealthRatio((int *)aP1->__pad_0) * v49 + v44; /*0x70cf69*/
  if ( v42 ) /*0x70cf6d*/
    v26 = *(_DWORD *)(v42 + 180); /*0x70cf6f*/
  else
    v26 = *(_DWORD *)((*(int (__thiscall **)(_DWORD *))(*this + 132))(this) + 1464); /*0x70cf81*/
  v43 = v26 / 256; /*0x70cf9c*/
  if ( *a2 == *(_DWORD *)&MEMORY[0xB077F8].__pad_579C[6908] /*0x70cfbc*/
    && a2[1] == *(_DWORD *)&MEMORY[0xB077F8].__pad_579C[6912]
    && a2[2] == *(_DWORD *)&MEMORY[0xB077F8].__pad_579C[6916] )
  {
    v34 = (_DWORD *)(*(int (__thiscall **)(ObjectClass *, double *))(*(_DWORD *)aP1->__pad_0 + 72))(aP1, v48); /*0x70d031*/
    v35 = (int *)(*(int (__thiscall **)(_DWORD *, double *))(*this + 72))(this, &v47); /*0x70d03a*/
    v36 = *v35; /*0x70d03d*/
    v37 = v35[1]; /*0x70d041*/
    v38 = v34[1]; /*0x70d044*/
    v39 = v35[2]; /*0x70d047*/
    LODWORD(v49) = v36 - *v34; /*0x70d04c*/
    v40 = v39 - v34[2]; /*0x70d055*/
    HIDWORD(v49) = v37 - v38; /*0x70d057*/
    v50 = v40; /*0x70d05b*/
    v41 = Math::Sqrt( /*0x70d087*/
            (double)SLODWORD(v49) * (double)SLODWORD(v49)
          + (double)v40 * (double)v40
          + (double)(v37 - v38) * (double)(v37 - v38));
    v33 = (int)Math::RoundToInt(v41) / 256; /*0x70d09d*/
  }
  else
  {
    v27 = (_DWORD *)(*(int (__thiscall **)(ObjectClass *, double *))(*(_DWORD *)aP1->__pad_0 + 72))(aP1, v48); /*0x70cfc7*/
    v28 = v27[1]; /*0x70cfce*/
    v29 = v27[2]; /*0x70cfd1*/
    v30 = a2[1]; /*0x70cfd6*/
    LODWORD(v49) = *a2 - *v27; /*0x70cfd9*/
    v31 = a2[2] - v29; /*0x70cfe2*/
    HIDWORD(v49) = v30 - v28; /*0x70cfe4*/
    v50 = v31; /*0x70cfe8*/
    v32 = Math::Sqrt( /*0x70d014*/
            (double)SLODWORD(v49) * (double)SLODWORD(v49)
          + (double)v31 * (double)v31
          + (double)(v30 - v28) * (double)(v30 - v28));
    v33 = Math::RoundToInt(v32); /*0x70d01c*/
  }
  return (double)((v33 - v43) & ((v33 - v43 < 0) - 1)) * v51 + v45 + 100000.0; /*0x70cd3f*/
}


// ==== 0x0070D0D0  TechnoTypeClass::HasVoiceResponse  this=IUnknown  sig=csp ====
bool __thiscall TechnoTypeClass::HasVoiceResponse(TechnoClass *this, int weaponIndex)
{
  HouseClass *v3; // edi
  int v4; // esi

  v3 = (HouseClass *)&this->initialOwner; /*0x70d0d5*/
  if ( !VeterancyStruct::IsVeteran((float *)&this->initialOwner) && !VeterancyStruct::IsElite((float *)v3->__pad_0) ) /*0x70d0e8*/
    return 0; /*0x70d0e8*/
  v4 = (*(int (__thiscall **)(TechnoClass *))(*(_DWORD *)this->__pad_0 + 132))(this); /*0x70d0fd*/
  if ( VeterancyStruct::IsVeteran((float *)v3->__pad_0) && *(_BYTE *)(v4 + weaponIndex + 668) ) /*0x70d10c*/
    return 1; /*0x70d11c*/
  return VeterancyStruct::IsElite((float *)v3->__pad_0) /*0x70d142*/
      && (*(_BYTE *)(v4 + weaponIndex + 668) || *(_BYTE *)(v4 + weaponIndex + 686));
}


// ==== 0x0070D150  FrameTimer::Init25  this=FrameTimer  sig=ida-proto ====
int FrameTimer_Init25()
{
  int v1; // [esp+4h] [ebp-8h]

  MEMORY[0xB0EA80] = (int)MEMORY[0xA8ED84]; /*0x70d15a*/
  MEMORY[0xB0EA84] = v1; /*0x70d166*/
  MEMORY[0xB0EA88] = 25; /*0x70d16b*/
  return v1; /*0x70d171*/
}


// ==== 0x0070D180  SetGlobalFlag  this=-  sig=ida-proto ====
void __fastcall GlobalFlag_Set(char a1)
{
  MEMORY[0x843108] = a1; /*0x70d180*/
}


// ==== 0x0070D190  TechnoClass::GetRangeModifier  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass_GetRangeModifier(_BYTE *this, int a2)
{
  if ( (this->q0F0 & 2) == 2 )
    return a2 <= 1500 ? 2000 : 500;
  else
    return a2; /*0x70d1ba*/
}


// ==== 0x0070D1D0  TechnoClass::ShouldScanArea  this=TechnoClass  sig=csp ====
bool __thiscall TechnoClass_ShouldScanArea(void *this, _DWORD *a2)
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
  int v13; // [esp+18h] [ebp-10h] BYREF
  int v14; // [esp+1Ch] [ebp-Ch] BYREF
  int v15; // [esp+20h] [ebp-8h]
  int v16; // [esp+24h] [ebp-4h]

  if ( *(_BYTE *)((*(int (__thiscall **)(void *))(this->hasParachute)(this) + 3226) /*0x70d20b*/
    || this->q3CD
    || !this->isAliveFlag
    || this->inLimbo )
  {
    return 0; /*0x70d20b*/
  }
  if ( (unsigned __int8)House::IsHumanPlayer(*((#375 **)this + 135)) ) /*0x70d21f*/
    return this->isDiscoveredByCurrentPlayer != 0; /*0x70d23a*/
  v4 = (_DWORD *)(*(int (__thiscall **)(void *, int *))(this->q048)(this, &v14); /*0x70d246*/
  LOWORD(v12) = *v4 / 256; /*0x70d25b*/
  HIWORD(v12) = v4[1] / 256; /*0x70d273*/
  v13 = v12; /*0x70d27c*/
  if ( !LayerClass::IsWithinUsableArea(&MEMORY[0x87F7E8], (__int16 *)&v13, 1) ) /*0x70d286*/
    return 0; /*0x70d40a*/
  v5 = (*(int (__thiscall **)(void *))(this->airstrikeTintStage_e)(this); /*0x70d2a3*/
  if ( !VeterancyStruct::IsVeteran((float *)this + 84) && !VeterancyStruct::IsElite((float *)this + 84) ) /*0x70d2b9*/
    goto LABEL_17; /*0x70d2b9*/
  v6 = (*(int (__thiscall **)(void *))(this->hasParachute)(this); /*0x70d2c7*/
  if ( !VeterancyStruct::IsVeteran((float *)this + 84) || !*(_BYTE *)(v6 + 679) ) /*0x70d2d2*/
  {
    if ( VeterancyStruct::IsElite((float *)this + 84) && (*(_BYTE *)(v6 + 679) || *(_BYTE *)(v6 + 697)) ) /*0x70d2f8*/
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
  v14 = this->q027; /*0x70d30e*/
  v15 = this->owningHouseIndex; /*0x70d329*/
  v16 = this->q029; /*0x70d330*/
  if ( !Cell::IsPassable(&v14) || (v11 = 1, !g_hWnd) ) /*0x70d349*/
    v11 = 0; /*0x70d34b*/
  if ( (*(_DWORD *)MEMORY[0xA8B230] & 0x1000) != 0 /*0x70d37b*/
    && (v7 = this->owningHouseIndex,
        v8 = this->q029,
        v14 = this->q027,
        v15 = v7,
        v16 = v8,
        Game::Stub3((int)&v14)) )
  {
    v9 = 1; /*0x70d384*/
  }
  else
  {
    v9 = 0; /*0x70d3df*/
    if ( this->parachute != 2 && v5 >= -20 && !v10 && !v11 ) /*0x70d3f9*/
      return 1; /*0x70d404*/
  }
  if ( !(*(unsigned __int8 (__thiscall **)(void *))(this->railgunParticles)(this) ) /*0x70d392*/
    return 0; /*0x70d392*/
  if ( !(unsigned __int8)HouseClass::IsAlliedWith(HouseClass_Player, *((#375 **)this + 135)) && !v10 && !v9 && !v11 ) /*0x70d3bc*/
    *a2 = (v5 < -20) + 1; /*0x70d3cb*/
  return 1; /*0x70d22e*/
}


// ==== 0x0070D420  TechnoClass::IsPlayerCellPassable  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::IsPlayerCellPassable(#377 *this)
{
  int result; // eax
  _DWORD *v2; // eax
  _WORD *v3; // eax
  _BYTE v4[12]; // [esp+0h] [ebp-Ch] BYREF

  result = (int)HouseClass_Player; /*0x70d420*/
  if ( HouseClass_Player ) /*0x70d42a*/
  {
    v2 = (_DWORD *)(*(int (__thiscall **)(#377 *, _BYTE *))(this->q048)(this, v4); /*0x70d433*/
    v3 = Coord::To_Cell(&MEMORY[0x87F7E8], v2); /*0x70d43c*/
    return Cell::IsPassableOffset(v3, *((_DWORD *)HouseClass_Player + 12)); /*0x70d44d*/
  }
  else
  {
    LOBYTE(result) = 0; /*0x70d456*/
  }
  return result; /*0x70d452*/
}


// ==== 0x0070D460  TechnoClass::IsCellPassableFor  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::IsCellPassableFor(#377 *this)
{
  _DWORD *v1; // eax
  _WORD *v2; // eax
  int result; // eax
  _BYTE v4[12]; // [esp+4h] [ebp-Ch] BYREF
  int v5; // [esp+14h] [ebp+4h]

  if ( v5 ) /*0x70d46a*/
  {
    v1 = (_DWORD *)(*(int (__thiscall **)(#377 *, _BYTE *))(this->q048)(this, v4); /*0x70d473*/
    v2 = Coord::To_Cell(&MEMORY[0x87F7E8], v1); /*0x70d47c*/
    return Cell::IsPassableOffset(v2, *(_DWORD *)(v5 + 48)); /*0x70d487*/
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
  for ( i = MEMORY[0xA8EC88] - 1; i >= 0; --i ) /*0x70d4c6*/
  {
    v4 = 1; /*0x70d4d2*/
    v5 = (_DWORD *)*((_DWORD *)MEMORY[0xA8EC7C] + i); /*0x70d4d6*/
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
      (*(void (__thiscall **)(_DWORD))(*v5 + 504))(*((_DWORD *)MEMORY[0xA8EC7C] + i)); /*0x70d50d*/
      if ( (*(int (__thiscall **)(_DWORD *))(*v5 + 44))(v5) == 2 && v5[43] == 25 ) /*0x70d526*/
      {
        v5[47] = 0; /*0x70d528*/
        *((_BYTE *)v5 + 1746) = 0; /*0x70d532*/
      }
      if ( v5[173] == a1 ) /*0x70d53f*/
        (*(void (__thiscall **)(_DWORD *, _DWORD))(*v5 + 968))(v5, 0); /*0x70d547*/
    }
  }
  for ( j = MEMORY[0x8B40F8] - 1; j >= 0; --j ) /*0x70d560*/
  {
    v8 = *((_DWORD *)MEMORY[0x8B40EC] + j); /*0x70d567*/
    if ( *(_DWORD *)(v8 + 60) == a1 ) /*0x70d56d*/
      *(_DWORD *)(v8 + 60) = 0; /*0x70d56f*/
    if ( *(_DWORD *)(v8 + 64) == a1 ) /*0x70d575*/
      *(_DWORD *)(v8 + 64) = 0; /*0x70d577*/
  }
}


// ==== 0x0070D590  TechnoClass::IsCloseEnoughToBuilding  this=IUnknown  sig=csp ====
bool __thiscall TechnoClass_IsCloseEnoughToBuilding(_DWORD *this, int a2)
{
  int v3; // eax
  int v5; // ecx
  _DWORD *v6; // esi
  int v7; // ebx
  int v8; // edi
  _DWORD *v9; // eax
  int v10; // ebp
  int v11; // eax
  double v12; // st7
  int v13; // [esp+20h] [ebp-18h] BYREF
  int v14; // [esp+24h] [ebp-14h]
  int v15; // [esp+28h] [ebp-10h]
  _BYTE v16[12]; // [esp+2Ch] [ebp-Ch] BYREF
  char v17; // [esp+3Ch] [ebp+4h]

  v3 = *(_DWORD *)(*(int (__thiscall **)(_DWORD *, int))(*this + 1016))(this, a2); /*0x70d5a6*/
  if ( !v3 ) /*0x70d5aa*/
    return 1; /*0x70d5ac*/
  v17 = *(_BYTE *)(v3 + 302); /*0x70d5bf*/
  if ( !v17 ) /*0x70d5c3*/
  {
    v5 = this->q2B4; /*0x70d5c9*/
    if ( v5 ) /*0x70d5d1*/
    {
      v6 = this + 39; /*0x70d5d7*/
      v13 = this->q09C; /*0x70d5e2*/
      v14 = this->q028; /*0x70d5e9*/
      v7 = this->q0A4; /*0x70d5f1*/
      v8 = *(_DWORD *)((*(int (__thiscall **)(int, int *))(*(_DWORD *)v5 + 72))(v5, &v13) + 8) - v7; /*0x70d5fd*/
      if ( v8 > 0 ) /*0x70d602*/
      {
        v9 = (_DWORD *)(*(int (__thiscall **)(_DWORD, _BYTE *))(*(_DWORD *)this->q2B4 + 72))(this->q2B4, v16); /*0x70d611*/
        v10 = v9[1]; /*0x70d614*/
        v11 = *v6 - *v9; /*0x70d620*/
        v14 = v6[1] - v10; /*0x70d622*/
        v13 = v11; /*0x70d626*/
        v15 = v6[2]; /*0x70d638*/
        v12 = Math::Sqrt((double)v11 * (double)v11 + (double)v14 * (double)v14); /*0x70d64d*/
        return (int)Math::RoundToInt(v12) < v8; /*0x70d65e*/
      }
    }
  }
  return v17; /*0x70d5ae*/
}


// ==== 0x0070D670  TechnoClass::DecCounter  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::DecCounter(#377 *this)
{
  int result; // eax

  result = this->q0BF; /*0x70d670*/
  if ( result > 0 ) /*0x70d678*/
    this->q0BF = --result; /*0x70d67b*/
  return result; /*0x70d681*/
}


// ==== 0x0070D690  TechnoClass::ComputeCombatDamage  this=TechnoClass  sig=csp ====
AbstractClass *__thiscall TechnoClass::ComputeCombatDamage(BulletClass **this, int a2)
{
  int v3; // eax
  BulletClass *v4; // edx
  int v5; // edi
  int v6; // eax
  _DWORD *v7; // eax
  AbstractClass *v8; // eax
  int v9; // eax
  AbstractClass *v10; // ebp
  AbstractClass *v12; // ebp
  BulletClass *UIObject; // eax
  BulletClass *v13; // ebx
  ObjectClass *v15; // eax
  _BYTE v16[12]; // [esp+Ch] [ebp-Ch] BYREF

  v3 = (*(int (__thiscall **)(BulletClass **))&(*this)->__pad_1C[104])(this); /*0x70d69a*/
  v4 = *this; /*0x70d6a6*/
  if ( *(_DWORD *)(v3 + 3352) ) /*0x70d6a0*/
  {
    v5 = *(_DWORD *)((*(int (__thiscall **)(BulletClass **))&v4->__pad_1C[104])(this) + 3352); /*0x70d6b4*/
    v6 = (*(int (__thiscall **)(BulletClass **))&(*this)->__pad_1C[104])(this); /*0x70d6be*/
LABEL_6:
    v8 = (AbstractClass *)Math::RoundToInt((double)*(int *)(v5 + 164) * *(float *)(v6 + 3356)); /*0x70d6eb*/
    goto LABEL_8; /*0x70d6fc*/
  }
  v7 = (_DWORD *)(*(int (__thiscall **)(BulletClass **))&v4->__pad_310[228])(this); /*0x70d6c6*/
  if ( v7 && *v7 ) /*0x70d6d0*/
  {
    v5 = *(_DWORD *)(*(int (__thiscall **)(BulletClass **))&(*this)->__pad_310[228])(this); /*0x70d6e1*/
    v6 = (*(int (__thiscall **)(BulletClass **))&(*this)->__pad_1C[104])(this); /*0x70d6e5*/
    goto LABEL_6; /*0x70d6e5*/
  }
  v5 = *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 4060); /*0x70d707*/
  v9 = (*(int (__thiscall **)(BulletClass **))&(*this)->__pad_1C[104])(this); /*0x70d70d*/
  v8 = (AbstractClass *)Math::RoundToInt((double)*(int *)(v9 + 160) * 0.5); /*0x70d71f*/
LABEL_8:
  v10 = v8; /*0x70d724*/
  if ( !v5 ) /*0x70d728*/
    return 0; /*0x70d72c*/
  LOBYTE(v8) = *(_BYTE *)(v5 + 303); /*0x70d735*/
  v12 = (AbstractClass *)((char *)v10 + a2); /*0x70d747*/
  UIObject = (BulletClass *)CreateUIObjectCOM( /*0x70d756*/
                              *(IUnknown **)(v5 + 160),
                              (AbstractClass *)this,
                              (AbstractClass *)this,
                              v12,
                              *(AbstractClass **)(v5 + 172),
                              0,
                              v8);
  v13 = UIObject; /*0x70d75b*/
  if ( UIObject ) /*0x70d75f*/
  {
    Function::Method_46B260(UIObject, v5); /*0x70d764*/
    (*(void (__thiscall **)(BulletClass *))(*(_DWORD *)v13->__pad_0 + 212))(v13); /*0x70d76d*/
    v15 = (ObjectClass *)(*(int (__thiscall **)(BulletClass **, _BYTE *))&(*this)->__pad_1C[44])(this, v16); /*0x70d77c*/
    Warhead::ApplyDamage(v13->__pad_0, v15); /*0x70d782*/
    (*(void (__stdcall **)(BulletClass *))(*(_DWORD *)v13->__pad_0 + 8))(v13); /*0x70d78a*/
  }
  return v12; /*0x70d72a*/
}


// ==== 0x0070D7A0  InfantryClass::ReleaseInfiltrators  this=ObjectClass  sig=csp ====
void __thiscall sub_70D7A0(int *this)
{
  int v2; // ecx

  if ( BuildingClass::GetHealthRatio(this) > *(double *)&MEMORY[0x8871E0][1].? /*0x70d7c7*/
    || (*(int (__thiscall **)(int *))(*this + 456))(this) < -10 )
  {
    v2 = this->q0C4; /*0x70d7c9*/
    if ( v2 ) /*0x70d7d1*/
      (*(void (__thiscall **)(int))(*(_DWORD *)v2 + 248))(v2); /*0x70d7d5*/
  }
}


// ==== 0x0070D7E0  FootClass::ProcessEnterTransport  this=FootClass  sig=csp ====
char __thiscall sub_70D7E0(_DWORD *this)
{
  int v2; // edi
  bool v3; // zf
  int v4; // eax
  int v6; // eax
  int v7; // eax

  v2 = this->queueUpToEnter; /*0x70d7e4*/
  if ( !v2 ) /*0x70d7ec*/
    return 0; /*0x70d7ec*/
  if ( !*(_BYTE *)(v2 + 144) ) /*0x70d7fa*/
  {
    this->queueUpToEnter = 0; /*0x70d8d8*/
    return 0; /*0x70d8d8*/
  }
  if ( (*(_BYTE *)(v2 + 20) & 1) == 0 ) /*0x70d80c*/
    return 0; /*0x70d8e3*/
  if ( (*(int (__thiscall **)(_DWORD *, int, _DWORD))(*this + 632))(this, 2, this->queueUpToEnter) != 1 ) /*0x70d820*/
  {
    if ( (*(int (__thiscall **)(int))(*(_DWORD *)v2 + 44))(v2) == 6 /*0x70d8aa*/
      && (*(int (__thiscall **)(_DWORD *))(*this + 44))(this) == 2 )
    {
      v7 = *(_DWORD *)(v2 + 1312); /*0x70d8ac*/
      if ( *(_BYTE *)(v7 + 5802) ) /*0x70d8b2*/
      {
        if ( !*(_BYTE *)(v7 + 5801) ) /*0x70d8bc*/
        {
          (*(void (__thiscall **)(_DWORD *, int, int))(*this + 632))(this, 14, v2); /*0x70d8cd*/
          return 0; /*0x70d8d7*/
        }
      }
    }
    return 0; /*0x70d8c4*/
  }
  v3 = (*(int (__thiscall **)(_DWORD *, int, int))(*this + 632))(this, 15, v2) == 1; /*0x70d82f*/
  v4 = *this; /*0x70d832*/
  if ( v3 ) /*0x70d834*/
  {
    (*(void (__thiscall **)(_DWORD *, int, int))(v4 + 488))(this, 7, 1); /*0x70d83c*/
    (*(void (__thiscall **)(_DWORD *, int, int))(*this + 1152))(this, v2, 1); /*0x70d849*/
    this->queueUpToEnter = 0; /*0x70d84f*/
  }
  else
  {
    (*(void (__thiscall **)(_DWORD *, int, _DWORD))(v4 + 488))(this, -1, 0); /*0x70d864*/
    (*(void (__thiscall **)(_DWORD *, _DWORD, int))(*this + 1152))(this, 0, 1); /*0x70d872*/
    v6 = *this; /*0x70d878*/
    this->queueUpToEnter = 0; /*0x70d87f*/
    (*(void (__thiscall **)(_DWORD *, int, int))(v6 + 632))(this, 3, v2); /*0x70d889*/
  }
  return 1; /*0x70d859*/
}


// ==== 0x0070D8F0  TechnoClass::PlaceAtCell  this=TechnoClass  sig=csp ====
char __thiscall TechnoClass::PlaceAtCell(char *this)
{
  IUnknown *v2; // eax
  IUnknown *v3; // edi
  void *v4; // eax
  int v6; // [esp+4h] [ebp-8h] BYREF
  int v7; // [esp+8h] [ebp-4h] BYREF

  v2 = (IUnknown *)this->currentRank; /*0x70d8f6*/
  if ( v2 ) /*0x70d8fe*/
  {
    if ( (v2->__pad_10[4] & 1) != 0 && v2->__pad_8C[4] ) /*0x70d906*/
    {
      v6 = *MapClass::FindPlacementCellsAlt(this, (IUnknown *)&v7, v2); /*0x70d926*/
      if ( v6 != *(_DWORD *)&MEMORY[0xB077F8].__pad_579C[6844] ) /*0x70d92a*/
      {
        v3 = *(IUnknown **)this; /*0x70d93b*/
        v4 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v6); /*0x70d949*/
        (*(void (__thiscall **)(char *, void *, int))&v3->__pad_430[80])(this, v4, 1); /*0x70d951*/
        (*(void (__thiscall **)(char *, int, _DWORD))(this->q1E8)(this, 2, 0); /*0x70d95f*/
        return 1; /*0x70d96c*/
      }
    }
    else
    {
      this->currentRank = 0; /*0x70d96d*/
    }
  }
  return 0; /*0x70d968*/
}


// ==== 0x0070D980  TechnoClass::StubReturnTrue3  this=TechnoClass  sig=csp ====
void TacticalClass::StubReturnTrue3()
{
  ; /*0x70d980*/
}


// ==== 0x0070D990  TechnoClass::OnEnterCell  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::OnEnterCell(#377 *this)
{
  _DWORD *v2; // eax
  int v3; // edx
  int *v4; // eax
  int v5; // eax
  char v6; // bl
  int *v7; // eax
  int v8; // edi
  int v9; // ebp
  int v10; // eax
  int v11; // ecx
  int v12; // edi
  int v13; // eax
  int *v14; // eax
  char v15; // al
  int result; // eax
  int v17; // edx
  int v18; // ecx
  int v19; // eax
  int v20; // et2
  int v21; // [esp+Ch] [ebp-2Ch] BYREF
  int v22; // [esp+10h] [ebp-28h]
  int v23; // [esp+14h] [ebp-24h]
  int v24[2]; // [esp+18h] [ebp-20h] BYREF
  int v25; // [esp+20h] [ebp-18h]
  int v26; // [esp+24h] [ebp-14h]
  int v27; // [esp+28h] [ebp-10h] BYREF
  int v28; // [esp+2Ch] [ebp-Ch]
  int v29; // [esp+30h] [ebp-8h]
  char v30; // [esp+3Ch] [ebp+4h]
  int v31; // [esp+3Ch] [ebp+4h]

  if ( !this->isDiscoveredByCurrentPlayer && !MEMORY[0xA8B238][0] ) /*0x70d9a8*/
  {
    v2 = (_DWORD *)(*(int (__thiscall **)(#377 *, int *))(this->q048)(this, &v27); /*0x70d9b3*/
    this->isDiscoveredByCurrentPlayer = !Cell::IsPassable(v2); /*0x70d9c6*/
  }
  if ( (*(int (__thiscall **)(#377 *))(this->fallRate)(this) != 6 || v30 ) /*0x70d9de*/
  {
    v27 = this->q027; /*0x70d9fc*/
    v28 = this->owningHouseIndex; /*0x70da08*/
    v29 = this->q029; /*0x70da19*/
    v4 = Coord::WorldToScreen((int)&MEMORY[0x87F7E8], v24, &v27, 0); /*0x70da1d*/
    v22 = *v4; /*0x70da24*/
    v3 = v4[1]; /*0x70da28*/
  }
  else
  {
    v3 = this->isSelected; /*0x70d9e6*/
    v22 = this->inOpenToppedTransport; /*0x70d9ec*/
  }
  v5 = *(_DWORD *)this; /*0x70da2b*/
  v23 = v3; /*0x70da36*/
  v21 = 0; /*0x70da3a*/
  v6 = (*(int (__thiscall **)(#377 *, int *))(v5 + 804))(this, &v21); /*0x70da4e*/
  v7 = (int *)(*(int (__thiscall **)(int, int *))(*(_DWORD *)MEMORY[0x880A04] + 120))(MEMORY[0x880A04], &v27); /*0x70da57*/
  v8 = *v7; /*0x70da5a*/
  v9 = v7[1]; /*0x70da5c*/
  v25 = v7[2]; /*0x70da62*/
  v26 = v7[3]; /*0x70da6f*/
  if ( v21 && v6 && (!this || (this->abstractFlags & 4) == 0 || *((char *)this + 1668) < 0) ) /*0x70da93*/
  {
    v10 = this->q027; /*0x70da9d*/
    v11 = this->owningHouseIndex; /*0x70da9f*/
    v29 = this->q029; /*0x70daa5*/
    LOWORD(v31) = v10 / 256; /*0x70dab5*/
    HIWORD(v31) = v11 / 256; /*0x70dacd*/
    CreateTriggerClassIfFarEnough(5, (unsigned __int8)(v11 >> 31), v31); /*0x70dad7*/
  }
  if ( v22 < v8 || v22 >= v8 + v25 ) /*0x70daec*/
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
    v13 = (*(int (__thiscall **)(#377 *))(this->airstrikeTintStage_e)(this); /*0x70db10*/
    v6 = Type::CheckAmbiguity(&MEMORY[0x87F7E8], v13, 1); /*0x70db21*/
    if ( v6 ) /*0x70db25*/
    {
      v27 = this->q027; /*0x70db31*/
      v28 = this->owningHouseIndex; /*0x70db3d*/
      v29 = this->q029; /*0x70db49*/
      v14 = Coord::WorldToScreen((int)&MEMORY[0x87F7E8], v24, &v27, 1); /*0x70db52*/
      v22 = *v14; /*0x70db59*/
      v23 = v14[1]; /*0x70db60*/
      v12 = v23; /*0x70db64*/
    }
  }
LABEL_23:
  if ( this->inLimbo && v6 ) /*0x70db72*/
    v6 = 0; /*0x70db74*/
  if ( this->q423 && (v22 != this->inOpenToppedTransport || v12 != this->isSelected || !v6) ) /*0x70db98*/
    (*(void (__thiscall **)(#377 *))(*(_DWORD *)this + 1176))(this); /*0x70db9e*/
  this->inOpenToppedTransport = v22; /*0x70dba8*/
  v15 = this->q423; /*0x70dbae*/
  this->isSelected = v12; /*0x70dbb6*/
  if ( !v15 && v6 ) /*0x70dbc0*/
    (*(void (__thiscall **)(#377 *))(*(_DWORD *)this + 1172))(this); /*0x70dbc6*/
  result = this->Owner; /*0x70dbcc*/
  if ( (#375 *)result == HouseClass_Player ) /*0x70dbdc*/
  {
    v17 = this->radarFlashTimer; /*0x70dbde*/
    result = this->q17C; /*0x70dbe4*/
    if ( v17 != -1 ) /*0x70dbf3*/
    {
      if ( (int)MEMORY[0xA8ED84] - v17 >= result ) /*0x70dbfb*/
        return result; /*0x70dbfb*/
      result -= (int)MEMORY[0xA8ED84] - v17; /*0x70dbfd*/
    }
    if ( result > 0 ) /*0x70dc01*/
    {
      v18 = this->radarFlashTimer; /*0x70dc03*/
      v19 = this->q17C; /*0x70dc09*/
      if ( v18 != -1 ) /*0x70dc12*/
      {
        if ( (int)MEMORY[0xA8ED84] - v18 >= v19 ) /*0x70dc1a*/
          v19 = 0; /*0x70dc20*/
        else
          v19 -= (int)MEMORY[0xA8ED84] - v18; /*0x70dc1c*/
      }
      v20 = v19 % MEMORY[0x8871E0]->InfantryHeadPop; /*0x70dc29*/
      result = v19 / MEMORY[0x8871E0]->InfantryHeadPop; /*0x70dc29*/
      if ( !v20 ) /*0x70dc31*/
        return (*(int (__thiscall **)(#377 *))(this->isTurretRotateSoundPlaying)(this); /*0x70dc37*/
    }
  }
  return result; /*0x70dc3d*/
}


// ==== 0x0070DC50  TechnoClass::processEMPulse  this=TechnoClass  sig=csp ====
char __thiscall sub_70DC50(void *this)
{
  return *(_BYTE *)((*(int (__thiscall **)(void *))(this->hasParachute)(this) + 2054); /*0x70dc5e*/
}


// ==== 0x0070DC60  TechnoClass::OwnerHasPower  this=TechnoClass  sig=csp ====
BOOL __thiscall TechnoClass_OwnerHasPower(void *this)
{
  _DWORD *v1; // eax

  v1 = (_DWORD *)(*(int (__thiscall **)(void *))(this->hasParachute)(this); /*0x70dc62*/
  return HouseClass::HasPower(v1);
}


// ==== 0x0070DC70  UnitClass::SetTurret  this=TechnoClass  sig=csp ====
int __thiscall UnitClass_SetTurret(_DWORD *this, unsigned int a2)
{
  int result; // eax

  result = (*(int (__thiscall **)(_DWORD *))(*this + 132))(this); /*0x70dc76*/
  if ( !*(_BYTE *)(result + 2064) ) /*0x70dc7c*/
  {
    (*(void (__thiscall **)(_DWORD *))(*this + 132))(this); /*0x70dc98*/
    if ( a2 > 0x11 ) /*0x70dc8c*/
    {
      result = UnitClass::processEnterTarget(0); /*0x70dcc4*/
      this->q124 = result; /*0x70dcc9*/
      this->currentWeaponSlot = 0; /*0x70dccf*/
    }
    else
    {
      result = UnitClass::processEnterTarget(a2); /*0x70dca0*/
      this->currentWeaponSlot = a2; /*0x70dca5*/
      this->q124 = result; /*0x70dcab*/
    }
  }
  return result; /*0x70dcb1*/
}


// ==== 0x0070DCE0  TechnoClass::checkEMPState  this=TechnoClass  sig=csp ====
BOOL __thiscall sub_70DCE0(_DWORD *this)
{
  return this->q124 != -1; /*0x70dcee*/
}


// ==== 0x0070DCF0  TechnoClass::applyEMPulseDamage  this=TechnoClass  sig=csp ====
int __thiscall sub_70DCF0(_DWORD *this)
{
  return this->q124; /*0x70dcf6*/
}


// ==== 0x0070DD20  TechnoClass::GetPoweredWeaponIndex  this=TechnoClass  sig=csp ====
int __thiscall sub_70DD20(_DWORD *this)
{
  _DWORD *v2; // eax

  v2 = (_DWORD *)(*(int (__thiscall **)(_DWORD *))(*this + 132))(this); /*0x70dd25*/
  if ( HouseClass::HasPower(v2) ) /*0x70dd2d*/
    return this->currentWeaponSlot; /*0x70dd36*/
  else
    return 0; /*0x70dd3e*/
}


// ==== 0x0070DD50  TechnoClass::GetVt252Byte  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::GetVt252Byte(#377 *this)
{
  int result; // eax

  result = (*(int (__thiscall **)(#377 *))(this->chronoWarpedByHouse)(this); /*0x70dd52*/
  if ( result && (result = *(_DWORD *)result) != 0 ) /*0x70dd60*/
    LOBYTE(result) = *(_BYTE *)(result + 336); /*0x70dd62*/
  else
    LOBYTE(result) = 0; /*0x70dd69*/
  return result; /*0x70dd68*/
}


// ==== 0x0070DD70  ObjectClass::CheckTypeFlag1681  this=TechnoClass  sig=csp ====
int __thiscall ObjectClass::CheckTypeFlag1681(#377 *this)
{
  return *(_BYTE *)((*(int (__thiscall **)(#377 *))(this->hasParachute)(this) + 1681) == 0; /*0x70dd87*/
}


// ==== 0x0070DD90  TechnoClass::vt_entry_3E8  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::vt_entry_3E8(#377 *this)
{
  return 1; /*0x70dd95*/
}


// ==== 0x0070DDA0  ObjectClass::CheckTypeFlag1681_2  this=TechnoClass  sig=csp ====
int __thiscall ObjectClass::CheckTypeFlag1681_2(#377 *this)
{
  return *(_BYTE *)((*(int (__thiscall **)(#377 *))(this->hasParachute)(this) + 1681) == 0; /*0x70ddb7*/
}


// ==== 0x0070DDC0  BuildingClass::checkPlacement  this=BuildingClass  sig=csp ====
int __thiscall sub_70DDC0(_DWORD *this)
{
  return this->currentRank; /*0x70ddc6*/
}


// ==== 0x0070DDD0  TechnoClass::SetSpread  this=AbstractClass  sig=csp ====
int __thiscall TechnoClass::SetSpread(_DWORD *this, BuildingTypeClass *aP1)
{
  BuildingTypeClass *result; // eax

  result = aP1; /*0x70ddd0*/
  if ( (int)aP1 >= 0 ) /*0x70ddd6*/
    this->q140 = aP1; /*0x70ddd8*/
  return (int)result->vtable0; /*0x70ddde*/
}


// ==== 0x0070DDF0  TechnoClass::GetMember81  this=ObjectClass  sig=csp ====
int __thiscall TechnoClass_GetMember81(_DWORD *this)
{
  return this->q144; /*0x70ddf6*/
}


// ==== 0x0070DE00  TechnoClass::SetMember81  this=AbstractClass  sig=csp ====
int __thiscall TechnoClass::SetMember81(_DWORD *this, BuildingTypeClass *aP1)
{
  BuildingTypeClass *result; // eax

  result = aP1; /*0x70de00*/
  if ( (int)aP1 >= 0 ) /*0x70de06*/
    this->q144 = aP1; /*0x70de08*/
  return (int)result->vtable0; /*0x70de0e*/
}


// ==== 0x0070DE20  ObjectClass::method_70DE20  this=ObjectClass  sig=csp ====
int __thiscall sub_70DE20(_DWORD *this, int a2)
{
  this->q144 += a2; /*0x70de2c*/
  return a2; /*0x70de32*/
}


// ==== 0x0070DE40  TechnoClass::GattlingValueRateDown_GattlingRateDownDelay  this=BuildingClass  sig=csp ====
int __thiscall TechnoClass::GattlingValueRateDown_GattlingRateDownDelay(_DWORD *this, int a2)
{
  int result; // eax
  int v3; // edx

  result = a2; /*0x70de40*/
  v3 = this->gattlingStage - a2; /*0x70de4a*/
  this->gattlingStage = v3; /*0x70de4c*/
  if ( v3 < 0 || !a2 ) /*0x70de56*/
    this->gattlingStage = 0; /*0x70de58*/
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
  if ( VeterancyStruct::IsElite(this + 84) ) /*0x70de8d*/
    v4 = *(_DWORD *)((*(int (__thiscall **)(float *))(this->hasParachute)(this) + 4 * v3 + 3312); /*0x70dea0*/
  else
    v4 = *(_DWORD *)((*(int (__thiscall **)(float *))(this->hasParachute)(this) + 4 * v3 + 3288); /*0x70deb3*/
  v13 = this->q144; /*0x70dec2*/
  if ( v13 < v4 ) /*0x70dec6*/
    this->q144 += a2 * *(_DWORD *)((*(int (__thiscall **)(float *))(this->hasParachute)(this) + 3340); /*0x70dee5*/
  v5 = this->customSound_controller; /*0x70deeb*/
  v6 = *(_DWORD *)(*(int (__thiscall **)(float *, int))(*(_DWORD *)this + 1016))(this, 2 * v5); /*0x70deff*/
  AudioController::Stop((_DWORD *)this + 304); /*0x70df07*/
  this->q4D4 = 0; /*0x70df0e*/
  if ( v5 >= 0 && v5 < v3 - 1 )
  {
    v7 = VeterancyStruct::IsElite(this + 84)
       ? *(_DWORD *)((*(int (__thiscall **)(float *))(this->hasParachute)(this) + 4 * v5 + 3316)
       : *(_DWORD *)((*(int (__thiscall **)(float *))(this->hasParachute)(this) + 4 * v5 + 3292);
    if ( v13 >= v7 ) /*0x70df53*/
    {
      v8 = v5 + 1; /*0x70df55*/
      if ( v8 >= 0 ) /*0x70df56*/
        this->customSound_controller = v8; /*0x70df58*/
      v6 = *(_DWORD *)(*(int (__thiscall **)(float *, int))(*(_DWORD *)this + 1016))(this, 2 * v8); /*0x70df6c*/
      AudioController::Stop((_DWORD *)this + 297); /*0x70df74*/
      this->q12E = 0; /*0x70df79*/
    }
  }
  LOBYTE(v9) = this->q12E; /*0x70df80*/
  if ( !(_BYTE)v9 ) /*0x70df88*/
  {
    v9 = *(_DWORD *)(v6 + 204); /*0x70df8a*/
    if ( v9 > 0 ) /*0x70df92*/
    {
      AudioController::Stop((_DWORD *)this + 297); /*0x70df9c*/
      v10 = *(_DWORD *)(v6 + 204); /*0x70dfa7*/
      *(float *)v14 = this->q027; /*0x70dfaf*/
      *(float *)&v14[1] = this->owningHouseIndex; /*0x70dfb6*/
      *(float *)&v14[2] = this->q029; /*0x70dfbd*/
      v11 = Random::State(MEMORY[0x886B88]); /*0x70dfc6*/
      LOBYTE(v9) = StartAudioControllerAt( /*0x70dfdd*/
                     *(_DWORD *)(*(_DWORD *)(v6 + 192) + 4 * (v11 % v10)),
                     (int)v14,
                     (int)(this + 297));
      this->q12E = 1; /*0x70dfe2*/
    }
  }
  return v9; /*0x70dfe9*/
}


// ==== 0x0070E000  TechnoClass::DrainAmmo  this=ObjectClass  sig=csp ====
char __thiscall TechnoClass::DrainAmmo(char *this, BuildingClass *aP1)
{
  AudioController *v3; // ebx
  BuildingTypeClass *v4; // eax
  int v5; // eax
  int v6; // ecx
  int v7; // ebp
  int v8; // edi
  int v9; // eax
  int v10; // edi

  v3 = (AudioController *)(this + 1188); /*0x70e006*/
  Mixer::ReleaseChannel((int **)this + 297); /*0x70e00e*/
  v4 = *(BuildingTypeClass **)this; /*0x70e013*/
  this->q12E = 0; /*0x70e017*/
  v5 = (_DWORD)aP1 * *(_DWORD *)((*(int (__thiscall **)(char *))&v4->Name[32])(this) + 3344); /*0x70e030*/
  v6 = this->q144 - v5; /*0x70e035*/
  this->q144 = v6; /*0x70e037*/
  if ( v6 < 0 || !v5 ) /*0x70e041*/
    this->q144 = 0; /*0x70e043*/
  v7 = this->q144; /*0x70e04d*/
  v8 = this->customSound_controller; /*0x70e053*/
  if ( v7 || v8 )
  {
    LOBYTE(v9) = (*(int (__thiscall **)(char *, int))(*(_DWORD *)this + 1016))(this, 2 * v8); /*0x70e0a8*/
    if ( v8 > 0 )
    {
      v9 = VeterancyStruct::IsElite((float *)this + 84)
         ? *(_DWORD *)((*(int (__thiscall **)(char *))(this->hasParachute)(this) + 4 * v8 + 3312)
         : *(_DWORD *)((*(int (__thiscall **)(char *))(this->hasParachute)(this) + 4 * v8 + 3288);
      if ( v7 < v9 ) /*0x70e0e7*/
      {
        v10 = v8 - 1; /*0x70e0e9*/
        if ( v10 >= 0 ) /*0x70e0ea*/
          this->customSound_controller = v10; /*0x70e0ec*/
        (*(void (__thiscall **)(char *, int))(*(_DWORD *)this + 1016))(this, 2 * v10); /*0x70e0fa*/
        LOBYTE(v9) = (unsigned __int8)AudioController::Stop((_DWORD *)this + 304); /*0x70e106*/
        this->q4D4 = 0; /*0x70e10b*/
      }
    }
  }
  else if ( this->q4D4 || (LOBYTE(v9) = this->q12E, (_BYTE)v9) ) /*0x70e073*/
  {
    AudioController::Stop(v3); /*0x70e07b*/
    LOBYTE(v9) = (unsigned __int8)AudioController::Stop((_DWORD *)this + 304); /*0x70e086*/
    this->q4D4 = 0; /*0x70e08b*/
    this->q12E = 0; /*0x70e092*/
  }
  return v9; /*0x70e099*/
}


// ==== 0x0070E120  TechnoClass::Vt249to254  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::Vt249to254(#377 *this)
{
  int v2; // edi
  int v3; // eax

  v2 = *(_DWORD *)this; /*0x70e124*/
  v3 = (*(int (__thiscall **)(#377 *))(this->sightRangeBonus)(this); /*0x70e126*/
  return (*(int (__thiscall **)(#377 *, int))(v2 + 1016))(this, v3); /*0x70e135*/
}


// ==== 0x0070E140  TechnoClass::SelectVocOrSfx  this=TechnoClass  sig=csp ====
WeaponStruct *__thiscall TechnoClass::SelectWeaponSlot(TechnoClass *this, int weaponIndex)
{
  WeaponStruct *result; // eax
  void *v4; // eax
  void *v5; // eax

  if ( weaponIndex == -1 ) /*0x70e14b*/
    return 0; /*0x70e14e*/
  if ( !VeterancyStruct::IsElite((float *)&this->initialOwner) /*0x70e179*/
    || (v4 = (void *)(*(int (__thiscall **)(TechnoClass *))(*(_DWORD *)this->__pad_0 + 132))(this),
        (result = (WeaponStruct *)TechnoClass::GetEliteWeaponSlot(v4, weaponIndex)) == 0)
    || !result->WeaponType )
  {
    v5 = (void *)(*(int (__thiscall **)(TechnoClass *))(*(_DWORD *)this->__pad_0 + 132))(this); /*0x70e183*/
    return (WeaponStruct *)TechnoClass::GetWeaponSlot(v5, weaponIndex); /*0x70e18b*/
  }
  return result; /*0x70e14d*/
}


// ==== 0x0070E1A0  TechnoClass::UpdatePowered  this=TechnoClass  sig=csp ====
WeaponTypeClass **__thiscall TechnoClass::GetPoweredWeaponSlot(TechnoClass *this)
{
  _DWORD *v2; // eax

  v2 = (_DWORD *)(*(int (__thiscall **)(TechnoClass *))(*(_DWORD *)this->__pad_0 + 132))(this); /*0x70e1a5*/
  if ( HouseClass::HasPower(v2) ) /*0x70e1ad*/
    return (*(WeaponTypeClass **(__thiscall **)(TechnoClass *, _DWORD))(*(_DWORD *)this->__pad_0 + 1016))( /*0x70e1c1*/
             this,
             *(_DWORD *)&this->__pad_115[35]);
  else
    return (*(WeaponTypeClass **(__thiscall **)(TechnoClass *, _DWORD))(*(_DWORD *)this->__pad_0 + 1016))(this, 0); /*0x70e1d0*/
}


// ==== 0x0070E1E0  InfantryClass::ProcessIdle  this=InfantryClass  sig=csp ====
BOOL __thiscall sub_70E1E0(void *this, int a2)
{
  _DWORD *v3; // eax
  bool v4; // al

  v3 = (_DWORD *)(*(int (__thiscall **)(void *))(this->hasParachute)(this); /*0x70e1f1*/
  v4 = HouseClass::HasPower(v3) /*0x70e214*/
    && a2 < *(_DWORD *)((*(int (__thiscall **)(void *))(this->hasParachute)(this) + 2060);
  return a2 >= -1 && (a2 < 2 || v4); /*0x70e227*/
}


// ==== 0x0070E240  IsNonNullPtr  this=FootClass  sig=csp ====
BOOL __stdcall IsNonNullPtr(UnitTypeClass *aP0)
{
  return aP0 && *(_DWORD *)aP0->__pad_0; /*0x70e252*/
}


// ==== 0x0070E280  TechnoClass::ActivateEffect  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::ActivateEffect(#377 *this)
{
  int v2; // [esp+4h] [ebp+4h]

  if ( v2 ) /*0x70e286*/
  {
    this->drainingMe = 1; /*0x70e288*/
    this->q077 = MEMORY[0xA8ED84]; /*0x70e294*/
  }
  return (*(int (__thiscall **)(#377 *))(this->isTurretRotateSoundPlaying)(this); /*0x70e2a2*/
}


// ==== 0x0070E2B0  TechnoClass::IronCurtain  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::IronCurtain(_DWORD *this, TechnoClass *aP1, int a3, TechnoClass *aP3)
{
  int result; // eax
  int v5; // [esp+8h] [ebp-8h]

  this->q18C = *(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[664]; /*0x70e2c3*/
  this->ironCurtainTimer = v5; /*0x70e2cd*/
  result = 0; /*0x70e2d0*/
  this->q1A4 = 0; /*0x70e2d2*/
  this->q194 = aP1; /*0x70e2d8*/
  if ( (_BYTE)aP3 ) /*0x70e2e2*/
    this->airstrikeTintStage_e = 1; /*0x70e2e4*/
  else
    this->airstrikeTintStage_e = 0; /*0x70e2f4*/
  return result; /*0x70e2e1*/
}


// ==== 0x0070E300  TechnoClass::ResetTimer  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::ResetTimer(#377 *this)
{
  wchar_t *v1; // eax
  int v3; // [esp+8h] [ebp-8h]
  int v4; // [esp+14h] [ebp+4h]

  v1 = MEMORY[0xA8ED84]; /*0x70e300*/
  this->estimatedHealth = 0; /*0x70e30c*/
  this->q06A = v1; /*0x70e31d*/
  this->ironTintStage_e = v3; /*0x70e327*/
  this->health = v4; /*0x70e32a*/
  return v3; /*0x70e32d*/
}


// ==== 0x0070E340  ObjectClass::ResetTimer2  this=TechnoClass  sig=csp ====
int __thiscall ObjectClass::ResetTimer2(#377 *this)
{
  _DWORD *v1; // ecx
  int v3; // [esp+4h] [ebp-8h]

  v1 = (_DWORD *)((char *)this + 424); /*0x70e34a*/
  *v1 = MEMORY[0xA8ED84]; /*0x70e350*/
  v1[1] = v3; /*0x70e356*/
  v1[2] = 0; /*0x70e359*/
  return v3; /*0x70e35c*/
}


// ==== 0x0070E360  Techno::StartInvulnerability  this=TechnoClass  sig=csp ====
BuildingTypeClass *__thiscall Techno::StartInvulnerability(_DWORD *this, BuildingTypeClass *aP1)
{
  BuildingTypeClass *v1; // eax

  v1 = TechnoClass::InvulnerabilityIntensity_SetContext(this, aP1); /*0x70e368*/
  return TechnoClass::CalcFlashAlpha(this, v1); /*0x70e375*/
}


// ==== 0x0070E380  TechnoClass::InvulnerabilityIntensity_SetContext  this=TechnoClass  sig=csp ====
BuildingTypeClass *__thiscall TechnoClass::InvulnerabilityIntensity_SetContext(_DWORD *this, BuildingTypeClass *aP1)
{
  int v2; // edx
  int v3; // esi
  int v4; // ecx
  int v5; // eax
  int v6; // edx
  BuildingTypeClass *result; // eax

  v2 = this->q1A0; /*0x70e380*/
  v3 = this->q198; /*0x70e387*/
  if ( v3 != -1 ) /*0x70e390*/
  {
    if ( *(_DWORD *)&HouseClass_Player.__pad_5568[23248] - v3 >= v2 ) /*0x70e39b*/
      v2 = 0; /*0x70e3a1*/
    else
      v2 -= *(_DWORD *)&HouseClass_Player.__pad_5568[23248] - v3; /*0x70e39d*/
  }
  switch ( this->q1A4 ) /*0x70e3b6*/
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
      result = (BuildingTypeClass *)(((int)aP1 * v5) >> 8); /*0x70e46d*/
      if ( (int)result > 2000 ) /*0x70e47a*/
        result = (BuildingTypeClass *)2000; /*0x70e47c*/
      break; /*0x70e481*/
    default:
      result = aP1; /*0x70e484*/
      break; /*0x70e484*/
  }
  return result; /*0x70e3a9*/
}


// ==== 0x0070E4B0  TechnoClass::CalcFlashAlpha  this=TechnoClass  sig=csp ====
BuildingTypeClass *__thiscall TechnoClass::CalcFlashAlpha(_DWORD *this, BuildingTypeClass *aP1)
{
  int v2; // edx
  int v3; // esi
  unsigned int v4; // edx
  int v5; // eax
  BuildingTypeClass *result; // eax

  v2 = this->q1BC; /*0x70e4b0*/
  v3 = this->q1B4; /*0x70e4b7*/
  if ( v3 != -1 ) /*0x70e4c0*/
  {
    if ( *(_DWORD *)&HouseClass_Player.__pad_5568[23248] - v3 >= v2 ) /*0x70e4cb*/
      v2 = 0; /*0x70e4d1*/
    else
      v2 -= *(_DWORD *)&HouseClass_Player.__pad_5568[23248] - v3; /*0x70e4cd*/
  }
  switch ( this->airstrikeTintStage ) /*0x70e4e6*/
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
      result = (BuildingTypeClass *)(((int)aP1 * v5) >> 8); /*0x70e556*/
      if ( (int)result > 2000 ) /*0x70e563*/
        result = (BuildingTypeClass *)2000; /*0x70e565*/
      break; /*0x70e56a*/
    default:
      result = aP1; /*0x70e56d*/
      break; /*0x70e56d*/
  }
  return result; /*0x70e4d9*/
}


// ==== 0x0070E5A0  ObjectClass::UpdateTechnoIdleTimer  this=TechnoClass  sig=csp ====
int __thiscall UpdateTechnoIdleTimer(int *this)
{
  int result; // eax
  _DWORD *v3; // esi
  int v4; // edi
  int v5; // ecx
  int v6; // edx
  int v7; // edi
  int v8; // ecx
  int v9; // edi
  int v10; // ecx
  int v11; // edx
  _DWORD *v12; // esi
  int v13; // edi
  int v14; // ecx
  int v15; // edi
  int v16; // ecx
  int v17; // edx
  int v18; // [esp+Ch] [ebp-8h]

  result = (*(int (__thiscall **)(int *))(*this + 352))(this); /*0x70e5a9*/
  if ( (_BYTE)result ) /*0x70e5b1*/
  {
    result = this->alignmentPadding69; /*0x70e5b7*/
    switch ( result ) /*0x70e5c6*/
    {
      case 0: /*0x70e5c6*/
        this->alignmentPadding69 = 1; /*0x70e5d1*/
        result = (int)MEMORY[0xA8ED84]; /*0x70e5db*/
        v3 = this + 102; /*0x70e5e0*/
        *v3 = MEMORY[0xA8ED84]; /*0x70e5ec*/
        v3[1] = v18; /*0x70e5ee*/
        v3[2] = 6; /*0x70e5f1*/
        return result; /*0x70e5f8*/
      case 1: /*0x70e5c6*/
        v4 = this->q198; /*0x70e5f9*/
        v5 = this->bombVisible; /*0x70e5ff*/
        result = (int)(this + 102); /*0x70e605*/
        if ( v4 == -1 ) /*0x70e60e*/
          goto LABEL_7; /*0x70e60e*/
        if ( (int)MEMORY[0xA8ED84] - v4 >= v5 ) /*0x70e61a*/
          goto LABEL_8; /*0x70e61a*/
        v5 -= (int)MEMORY[0xA8ED84] - v4; /*0x70e61c*/
LABEL_7:
        if ( !v5 ) /*0x70e620*/
        {
LABEL_8:
          this->alignmentPadding69 = 2; /*0x70e626*/
          *(_DWORD *)result = MEMORY[0xA8ED84]; /*0x70e636*/
          this->ironTintTimer = v18; /*0x70e641*/
          this->bombVisible = 4; /*0x70e645*/
        }
        break; /*0x70e64c*/
      case 2: /*0x70e5c6*/
        v6 = this->q198; /*0x70e64d*/
        result = this->bombVisible; /*0x70e653*/
        if ( v6 == -1 ) /*0x70e662*/
          goto LABEL_12; /*0x70e662*/
        if ( (int)MEMORY[0xA8ED84] - v6 >= result ) /*0x70e66e*/
          goto LABEL_13; /*0x70e66e*/
        result -= (int)MEMORY[0xA8ED84] - v6; /*0x70e670*/
LABEL_12:
        if ( !result ) /*0x70e674*/
        {
LABEL_13:
          this->alignmentPadding69 = 3; /*0x70e67a*/
          result = Random::Range((_DWORD *)MEMORY[0xA8B230] + 134, -5, 5) + 20; /*0x70e69f*/
          this->q198 = (int)MEMORY[0xA8ED84]; /*0x70e6a2*/
          this->ironTintTimer = v18; /*0x70e6a8*/
          this->bombVisible = result; /*0x70e6ab*/
        }
        break; /*0x70e6b3*/
      case 3: /*0x70e5c6*/
        v7 = this->q198; /*0x70e6b4*/
        v8 = this->bombVisible; /*0x70e6ba*/
        result = (int)(this + 102); /*0x70e6c0*/
        if ( v7 == -1 ) /*0x70e6c9*/
          goto LABEL_17; /*0x70e6c9*/
        if ( (int)MEMORY[0xA8ED84] - v7 >= v8 ) /*0x70e6d5*/
          goto LABEL_18; /*0x70e6d5*/
        v8 -= (int)MEMORY[0xA8ED84] - v7; /*0x70e6d7*/
LABEL_17:
        if ( !v8 ) /*0x70e6db*/
        {
LABEL_18:
          this->alignmentPadding69 = 4; /*0x70e6e1*/
          *(_DWORD *)result = MEMORY[0xA8ED84]; /*0x70e6f1*/
          this->ironTintTimer = v18; /*0x70e6fc*/
          this->bombVisible = 8; /*0x70e700*/
        }
        break; /*0x70e707*/
      case 4: /*0x70e5c6*/
        v9 = this->q198; /*0x70e708*/
        v10 = this->bombVisible; /*0x70e70e*/
        result = (int)(this + 102); /*0x70e714*/
        if ( v9 == -1 ) /*0x70e71d*/
          goto LABEL_22; /*0x70e71d*/
        if ( (int)MEMORY[0xA8ED84] - v9 >= v10 ) /*0x70e729*/
          goto LABEL_23; /*0x70e729*/
        v10 -= (int)MEMORY[0xA8ED84] - v9; /*0x70e72b*/
LABEL_22:
        if ( !v10 ) /*0x70e72f*/
        {
LABEL_23:
          this->alignmentPadding69 = 5; /*0x70e735*/
          *(_DWORD *)result = MEMORY[0xA8ED84]; /*0x70e745*/
          this->ironTintTimer = v18; /*0x70e750*/
          this->bombVisible = 16; /*0x70e754*/
        }
        break; /*0x70e75b*/
      case 5: /*0x70e5c6*/
        v11 = this->q198; /*0x70e75c*/
        result = this->bombVisible; /*0x70e762*/
        if ( v11 == -1 ) /*0x70e771*/
          goto LABEL_27; /*0x70e771*/
        if ( (int)MEMORY[0xA8ED84] - v11 >= result ) /*0x70e77d*/
          goto LABEL_28; /*0x70e77d*/
        result -= (int)MEMORY[0xA8ED84] - v11; /*0x70e77f*/
LABEL_27:
        if ( !result ) /*0x70e783*/
        {
LABEL_28:
          result = Timeout::GetRemaining(this + 99); /*0x70e78f*/
          if ( result >= 54 ) /*0x70e797*/
          {
            this->alignmentPadding69 = 4; /*0x70e7ad*/
            result = (int)MEMORY[0xA8ED84]; /*0x70e7b7*/
            this->q198 = (int)MEMORY[0xA8ED84]; /*0x70e7c1*/
            this->ironTintTimer = v18; /*0x70e7c3*/
            this->bombVisible = 8; /*0x70e7c6*/
          }
          else
          {
            this->alignmentPadding69 = 6; /*0x70e799*/
          }
        }
        break; /*0x70e7a8*/
      case 6: /*0x70e5c6*/
        result = Timeout::GetRemaining(this + 99); /*0x70e7d5*/
        if ( result <= 30 ) /*0x70e7dd*/
        {
          this->alignmentPadding69 = 7; /*0x70e7e3*/
          v12 = this + 102; /*0x70e7f2*/
          *v12 = MEMORY[0xA8ED84]; /*0x70e7fe*/
          v12[1] = v18; /*0x70e804*/
          v12[2] = 6; /*0x70e807*/
          return v18; /*0x70e800*/
        }
        return result; /*0x70e80e*/
      case 7: /*0x70e5c6*/
        v13 = this->q198; /*0x70e80f*/
        v14 = this->bombVisible; /*0x70e815*/
        result = (int)(this + 102); /*0x70e81b*/
        if ( v13 == -1 ) /*0x70e824*/
          goto LABEL_36; /*0x70e824*/
        if ( (int)MEMORY[0xA8ED84] - v13 >= v14 ) /*0x70e830*/
          goto LABEL_37; /*0x70e830*/
        v14 -= (int)MEMORY[0xA8ED84] - v13; /*0x70e832*/
LABEL_36:
        if ( !v14 ) /*0x70e836*/
        {
LABEL_37:
          this->alignmentPadding69 = 8; /*0x70e83c*/
          *(_DWORD *)result = MEMORY[0xA8ED84]; /*0x70e84c*/
          this->ironTintTimer = v18; /*0x70e857*/
          this->bombVisible = 4; /*0x70e85b*/
        }
        break; /*0x70e862*/
      case 8: /*0x70e5c6*/
        v15 = this->q198; /*0x70e863*/
        v16 = this->bombVisible; /*0x70e869*/
        result = (int)(this + 102); /*0x70e86f*/
        if ( v15 == -1 ) /*0x70e878*/
          goto LABEL_41; /*0x70e878*/
        if ( (int)MEMORY[0xA8ED84] - v15 >= v16 ) /*0x70e884*/
          goto LABEL_42; /*0x70e884*/
        v16 -= (int)MEMORY[0xA8ED84] - v15; /*0x70e886*/
LABEL_41:
        if ( !v16 ) /*0x70e88a*/
        {
LABEL_42:
          this->alignmentPadding69 = 9; /*0x70e88c*/
          *(_DWORD *)result = MEMORY[0xA8ED84]; /*0x70e89c*/
          this->ironTintTimer = v18; /*0x70e8a7*/
          this->bombVisible = 20; /*0x70e8ab*/
        }
        break; /*0x70e8b2*/
      case 9: /*0x70e5c6*/
        v17 = this->q198; /*0x70e8b3*/
        result = this->bombVisible; /*0x70e8b9*/
        if ( v17 != -1 ) /*0x70e8c2*/
        {
          if ( (int)MEMORY[0xA8ED84] - v17 >= result ) /*0x70e8ce*/
            goto LABEL_47; /*0x70e8ce*/
          result -= (int)MEMORY[0xA8ED84] - v17; /*0x70e8d0*/
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
        *v2 = MEMORY[0xA8ED84]; /*0x70e9a3*/
        v2[1] = v21; /*0x70e9a5*/
        v2[2] = 6; /*0x70e9a8*/
        return; /*0x70e9af*/
      case 1: /*0x70e97d*/
        v3 = a1[109]; /*0x70e9b0*/
        v4 = a1[111]; /*0x70e9b6*/
        if ( v3 == -1 ) /*0x70e9c5*/
          goto LABEL_10; /*0x70e9c5*/
        if ( (int)MEMORY[0xA8ED84] - v3 >= v4 ) /*0x70e9d1*/
          goto LABEL_11; /*0x70e9d1*/
        v4 -= (int)MEMORY[0xA8ED84] - v3; /*0x70e9d3*/
LABEL_10:
        if ( !v4 ) /*0x70e9d7*/
        {
LABEL_11:
          a1[112] = 2; /*0x70e9dd*/
          a1[109] = (int)MEMORY[0xA8ED84]; /*0x70e9ed*/
          a1[110] = v21; /*0x70e9f8*/
          a1[111] = 4; /*0x70e9fc*/
        }
        break; /*0x70ea03*/
      case 2: /*0x70e97d*/
        v5 = a1[109]; /*0x70ea04*/
        v6 = a1[111]; /*0x70ea0a*/
        if ( v5 == -1 ) /*0x70ea19*/
          goto LABEL_15; /*0x70ea19*/
        if ( (int)MEMORY[0xA8ED84] - v5 >= v6 ) /*0x70ea25*/
          goto LABEL_16; /*0x70ea25*/
        v6 -= (int)MEMORY[0xA8ED84] - v5; /*0x70ea27*/
LABEL_15:
        if ( !v6 ) /*0x70ea2b*/
        {
LABEL_16:
          a1[112] = 3; /*0x70ea31*/
          v7 = Random::Range((_DWORD *)MEMORY[0xA8B230] + 134, -5, 5); /*0x70ea4b*/
          a1[109] = (int)MEMORY[0xA8ED84]; /*0x70ea59*/
          a1[110] = v21; /*0x70ea5f*/
          a1[111] = v7 + 20; /*0x70ea62*/
        }
        break; /*0x70ea6a*/
      case 3: /*0x70e97d*/
        v8 = a1[109]; /*0x70ea6b*/
        v9 = a1[111]; /*0x70ea71*/
        if ( v8 == -1 ) /*0x70ea80*/
          goto LABEL_20; /*0x70ea80*/
        if ( (int)MEMORY[0xA8ED84] - v8 >= v9 ) /*0x70ea8c*/
          goto LABEL_21; /*0x70ea8c*/
        v9 -= (int)MEMORY[0xA8ED84] - v8; /*0x70ea8e*/
LABEL_20:
        if ( !v9 ) /*0x70ea92*/
        {
LABEL_21:
          a1[112] = 4; /*0x70ea98*/
          a1[109] = (int)MEMORY[0xA8ED84]; /*0x70eaa8*/
          a1[110] = v21; /*0x70eab3*/
          a1[111] = 64; /*0x70eab7*/
        }
        break; /*0x70eabe*/
      case 4: /*0x70e97d*/
        v10 = a1[109]; /*0x70eabf*/
        v11 = a1[111]; /*0x70eac5*/
        if ( v10 == -1 ) /*0x70ead4*/
          goto LABEL_25; /*0x70ead4*/
        if ( (int)MEMORY[0xA8ED84] - v10 >= v11 ) /*0x70eae0*/
          goto LABEL_26; /*0x70eae0*/
        v11 -= (int)MEMORY[0xA8ED84] - v10; /*0x70eae2*/
LABEL_25:
        if ( !v11 ) /*0x70eae6*/
        {
LABEL_26:
          a1[112] = 5; /*0x70eaec*/
          a1[109] = (int)MEMORY[0xA8ED84]; /*0x70eafc*/
          a1[110] = v21; /*0x70eb07*/
          a1[111] = 64; /*0x70eb0b*/
        }
        break; /*0x70eb12*/
      case 5: /*0x70e97d*/
        v12 = a1[109]; /*0x70eb13*/
        v13 = a1[111]; /*0x70eb19*/
        if ( v12 == -1 ) /*0x70eb28*/
          goto LABEL_30; /*0x70eb28*/
        if ( (int)MEMORY[0xA8ED84] - v12 >= v13 ) /*0x70eb34*/
          goto LABEL_31; /*0x70eb34*/
        v13 -= (int)MEMORY[0xA8ED84] - v12; /*0x70eb36*/
LABEL_30:
        if ( !v13 ) /*0x70eb3a*/
        {
LABEL_31:
          if ( Timeout::GetRemaining(a1 + 106) >= 158 ) /*0x70eb50*/
          {
            a1[112] = 4; /*0x70eb66*/
            a1[109] = (int)MEMORY[0xA8ED84]; /*0x70eb7a*/
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
          *v14 = MEMORY[0xA8ED84]; /*0x70ebb7*/
          v14[1] = v21; /*0x70ebbd*/
          v14[2] = 6; /*0x70ebc0*/
        }
        return; /*0x70ebc7*/
      case 7: /*0x70e97d*/
        v15 = a1[109]; /*0x70ebc8*/
        v16 = a1[111]; /*0x70ebce*/
        if ( v15 == -1 ) /*0x70ebdd*/
          goto LABEL_39; /*0x70ebdd*/
        if ( (int)MEMORY[0xA8ED84] - v15 >= v16 ) /*0x70ebe9*/
          goto LABEL_40; /*0x70ebe9*/
        v16 -= (int)MEMORY[0xA8ED84] - v15; /*0x70ebeb*/
LABEL_39:
        if ( !v16 ) /*0x70ebef*/
        {
LABEL_40:
          a1[112] = 8; /*0x70ebf5*/
          a1[109] = (int)MEMORY[0xA8ED84]; /*0x70ec05*/
          a1[110] = v21; /*0x70ec10*/
          a1[111] = 4; /*0x70ec14*/
        }
        break; /*0x70ec1b*/
      case 8: /*0x70e97d*/
        v17 = a1[109]; /*0x70ec1c*/
        v18 = a1[111]; /*0x70ec22*/
        if ( v17 == -1 ) /*0x70ec31*/
          goto LABEL_44; /*0x70ec31*/
        if ( (int)MEMORY[0xA8ED84] - v17 >= v18 ) /*0x70ec3d*/
          goto LABEL_45; /*0x70ec3d*/
        v18 -= (int)MEMORY[0xA8ED84] - v17; /*0x70ec3f*/
LABEL_44:
        if ( !v18 ) /*0x70ec43*/
        {
LABEL_45:
          a1[112] = 9; /*0x70ec45*/
          a1[109] = (int)MEMORY[0xA8ED84]; /*0x70ec55*/
          a1[110] = v21; /*0x70ec60*/
          a1[111] = 20; /*0x70ec64*/
        }
        break; /*0x70ec6b*/
      case 9: /*0x70e97d*/
        v19 = a1[109]; /*0x70ec6c*/
        v20 = a1[111]; /*0x70ec72*/
        if ( v19 != -1 ) /*0x70ec7b*/
        {
          if ( (int)MEMORY[0xA8ED84] - v19 >= v20 ) /*0x70ec87*/
            goto LABEL_50; /*0x70ec87*/
          v20 -= (int)MEMORY[0xA8ED84] - v19; /*0x70ec89*/
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
int __thiscall TechnoClass::Fire(int *this)
{
  int result; // eax
  int v2; // [esp+0h] [ebp-4h]

  result = *this; /*0x70ece1*/
  v2 = *this; /*0x70ece5*/
  if ( *this ) /*0x70ece5*/
  {
    result = this->vtable2; /*0x70eceb*/
    this->nextArrayIndex = 1; /*0x70ecf5*/
    this->referenceCount = result; /*0x70ecf8*/
    if ( result < 1 ) /*0x70ecfb*/
      this->referenceCount = 1; /*0x70ecfd*/
    *((float *)this + 4) = (double)v2 / (double)this->referenceCount; /*0x70ed07*/
  }
  return result; /*0x70ed0b*/
}


// ==== 0x0070ED10  TechnoClass::Update2  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::Update2(_DWORD *this)
{
  int result; // eax
  double v2; // st7
  int v3; // esi
  int v4; // eax
  int v5; // eax

  result = this->nextArrayIndex; /*0x70ed10*/
  if ( result ) /*0x70ed17*/
  {
    v2 = *((float *)this + 4) + *((float *)this + 5); /*0x70ed1c*/
    v3 = this->referenceCount - 1; /*0x70ed23*/
    this->referenceCount = v3; /*0x70ed24*/
    *((float *)this + 5) = v2; /*0x70ed29*/
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
            this->nextArrayIndex = 0; /*0x70ed38*/
            this->abstractFlags = 0; /*0x70ed3b*/
          }
          return result; /*0x70ed3e*/
        }
      }
      else
      {
        result = this->vtable4; /*0x70ed3f*/
        this->nextArrayIndex = 2; /*0x70ed42*/
        this->referenceCount = result; /*0x70ed4c*/
        this->uniqueId = 0; /*0x70ed4f*/
        if ( result > 1 ) /*0x70ed52*/
          return result; /*0x70ed52*/
      }
      result = this->vtable3; /*0x70ed54*/
      this->nextArrayIndex = 3; /*0x70ed57*/
      this->referenceCount = result; /*0x70ed61*/
      if ( result < 1 ) /*0x70ed64*/
        this->referenceCount = 1; /*0x70ed66*/
      *((float *)this + 4) = -((double)(int)*this / (double)(int)this->referenceCount); /*0x70ed74*/
    }
  }
  return result; /*0x70ed3e*/
}


// ==== 0x0070ED80  TechnoClass::GetAnimationFlags  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::GetAnimationFlags(#377 *this)
{
  int v1; // esi
  wchar_t *v2; // eax
  int v4; // ebx
  int v5; // ecx
  int v6; // eax
  int v8; // [esp+10h] [ebp+4h]

  v1 = v8; /*0x70ed82*/
  v2 = MEMORY[0xA8ED84]; /*0x70ed86*/
  v4 = this->q07B; /*0x70ed8e*/
  v5 = this->q07D; /*0x70ed94*/
  if ( v4 != -1 ) /*0x70ed9d*/
  {
    if ( (int)MEMORY[0xA8ED84] - v4 >= v5 ) /*0x70eda5*/
      goto LABEL_7; /*0x70eda5*/
    v5 -= (int)MEMORY[0xA8ED84] - v4; /*0x70eda7*/
  }
  if ( v5 ) /*0x70edab*/
  {
    if ( !(unsigned __int8)House::IsHumanPlayer(*((#375 **)this + 135)) ) /*0x70edba*/
      return v1; /*0x70edba*/
    v2 = MEMORY[0xA8ED84]; /*0x70edbc*/
  }
LABEL_7:
  v6 = ((int)v2 - this->q077 + 64) % 256; /*0x70edc1*/
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
int __thiscall TechnoClass::CheckFireCooldown(#377 *this)
{
  int v2; // edx
  int v3; // eax
  int result; // eax
  _WORD *v5; // edi
  int v6; // [esp+Ch] [ebp+4h]

  v2 = this->q07B; /*0x70ee34*/
  v3 = this->q07D; /*0x70ee3a*/
  if ( v2 != -1 ) /*0x70ee43*/
  {
    if ( (int)MEMORY[0xA8ED84] - v2 >= v3 ) /*0x70ee4f*/
      goto LABEL_6; /*0x70ee4f*/
    v3 -= (int)MEMORY[0xA8ED84] - v2; /*0x70ee51*/
  }
  if ( v3 ) /*0x70ee55*/
  {
    result = House::IsHumanPlayer(*((#375 **)this + 135)); /*0x70ee5d*/
    if ( !(_BYTE)result ) /*0x70ee64*/
      goto LABEL_14; /*0x70ee64*/
  }
LABEL_6:
  if ( (unsigned __int8)House::IsHumanPlayer(*((#375 **)this + 135)) /*0x70ee7d*/
    && (*(unsigned __int8 (__thiscall **)(#377 *))(this->missionData)(this) )
  {
    result = ((int)MEMORY[0xA8ED84] - this->q077 + 64) % 256; /*0x70eea4*/
    if ( result >= 72 && result <= 119 ) /*0x70eead*/
    {
      LOBYTE(result) = 0; /*0x70eeb0*/
      return result; /*0x70eeb3*/
    }
    goto LABEL_14; /*0x70eead*/
  }
  v5 = (_WORD *)(*(int (__thiscall **)(#377 *))(this->q1BC)(this); /*0x70eec0*/
  result = (*(int (__thiscall **)(#377 *))(this->missionData)(this); /*0x70eec6*/
  if ( !(_BYTE)result || !v5 || (result = HouseClass::HasType(v5, *(_DWORD *)(v6 + 48)), (_BYTE)result) ) /*0x70eee5*/
LABEL_14:
    LOBYTE(result) = 1; /*0x70eeec*/
  return result; /*0x70eeaf*/
}


// ==== 0x0070EF00  TechnoClass::CanDamageTarget  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::CanDamageTarget(#377 *this)
{
  int v2; // ebx
  int v3; // eax
  int result; // eax
  int v5; // esi
  int v6; // [esp+10h] [ebp+4h]

  v2 = *(_DWORD *)this; /*0x70ef09*/
  v3 = (*(int (__thiscall **)(#377 *, int))(this->spawnManager)(this, v6); /*0x70ef0c*/
  result = (*(int (__thiscall **)(#377 *, int))(v2 + 1016))(this, v3); /*0x70ef15*/
  v5 = *(_DWORD *)result; /*0x70ef1b*/
  if ( *(_DWORD *)result ) /*0x70ef1b*/
  {
    result = (*(int (__thiscall **)(int))(*(_DWORD *)v6 + 44))(v6); /*0x70ef29*/
    if ( result == 36 ) /*0x70ef2f*/
    {
      if ( BYTE1(MEMORY[0x8871E0][1].?[3]) || *(_BYTE *)(v5 + 312) ) /*0x70ef41*/
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
          if ( *(_BYTE *)(*(_DWORD *)&MEMORY[0xA83D84]->vtable0[4 * result] + 693) ) /*0x70ef7a*/
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
int __thiscall TechnoClass::HasPassengers(#377 *this)
{
  return this->empLockRemaining > 0; /*0x70efdd*/
}


// ==== 0x0070EFE0  TechnoClass::GetMaxSpeed  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::GetMaxSpeed(#377 *this)
{
  int v1; // eax

  v1 = (*(int (__thiscall **)(#377 *))(this->hasParachute)(this); /*0x70efe2*/
  if ( v1 ) /*0x70efea*/
    return *(_DWORD *)(v1 + 1656); /*0x70efec*/
  else
    return 0; /*0x70eff3*/
}


// ==== 0x0070F000  TechnoClass::ClearUnknownFlag  this=TechnoClass  sig=csp ====
int __thiscall BuildingClass::_vt297(#377 *this)
{
  int v2; // [esp+4h] [ebp+4h]

  return *(char *)(v2 + 12); /*0x70f008*/
}


// ==== 0x0070F010  TechnoClass::COMStub_Return0_298  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::COMStub_Return0_298(#377 *this)
{
  int result; // eax

  return result; /*0x70f010*/
}


// ==== 0x0070F020  TechnoClass::StubReturnFalse5  this=TechnoClass  sig=csp ====
int __thiscall BuildingClass::_vt299(#377 *this)
{
  int result; // eax

  LOBYTE(result) = 0; /*0x70f020*/
  return result; /*0x70f022*/
}


// ==== 0x0070F030  TechnoClass::StubReturnFalse6  this=TechnoClass  sig=csp ====
int __thiscall BuildingClass::_vt300(#377 *this)
{
  int result; // eax

  LOBYTE(result) = 0; /*0x70f030*/
  return result; /*0x70f032*/
}


// ==== 0x0070F040  TechnoClass::checkMovementRestrictions  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::checkMovementRestrictions(#377 *this)
{
  return -1; /*0x70f043*/
}


// ==== 0x0070F050  TechnoClass::ProcessCellClearance  this=TechnoClass  sig=csp ====
int __thiscall BuildingClass::_vt302(#377 *this)
{
  _DWORD *v2; // [esp+Ch] [ebp+4h]

  *v2 = -1; /*0x70f05e*/
  v2[1] = -1; /*0x70f063*/
  v2[2] = -1; /*0x70f066*/
  return (int)v2; /*0x70f069*/
}


// ==== 0x0070F070  TechnoClass::GetTypeVt40  this=TechnoClass  sig=csp ====
int __thiscall ObjectClass::GetTypeVt40(#377 *this)
{
  int v1; // eax

  v1 = (*(int (__thiscall **)(#377 *))(this->hasParachute)(this); /*0x70f072*/
  return (*(int (__thiscall **)(int))(*(_DWORD *)v1 + 160))(v1);
}


// ==== 0x0070F090  ObjectClass::GetTypeVt41  this=TechnoClass  sig=csp ====
int __thiscall ObjectClass::GetTypeVt41(#377 *this)
{
  int v1; // eax

  v1 = (*(int (__thiscall **)(#377 *))(this->hasParachute)(this); /*0x70f092*/
  return (*(int (__thiscall **)(int))(*(_DWORD *)v1 + 164))(v1);
}


// ==== 0x0070F0B0  TacticalClass::MapSpecialDrawMode  this=TacticalClass  sig=csp ====
int __thiscall TacticalClass::MapSpecialDrawMode(void *this, MouseClass *aP1)
{
  char v3; // al
  int result; // eax
  bool v5; // zf

  v3 = Render_Draw_731BF0(); /*0x70f0b3*/
  if ( this == (void *)1 ) /*0x70f0bb*/
  {
    if ( v3 ) /*0x70f0bf*/
      return 62; /*0x70f0c7*/
    return (int)this; /*0x70f0bf*/
  }
  if ( this != (void *)5 ) /*0x70f0cd*/
    return (int)this; /*0x70f0cd*/
  v5 = v3 == 0; /*0x70f0cf*/
  result = 63; /*0x70f0d1*/
  if ( v5 ) /*0x70f0d6*/
    return (int)this; /*0x70f0d8*/
  return result; /*0x70f0c6*/
}


// ==== 0x0070F0E0  TechnoClass::StubReturnFalse7  this=TechnoClass  sig=csp ====
int __thiscall BuildingClass::_vt305(#377 *this)
{
  int result; // eax

  LOBYTE(result) = 0; /*0x70f0e0*/
  return result; /*0x70f0e2*/
}


// ==== 0x0070F0F0  TechnoClass::StubReturnFalse8  this=TechnoClass  sig=csp ====
int __thiscall BuildingClass::_vt306(#377 *this)
{
  int result; // eax

  LOBYTE(result) = 0; /*0x70f0f0*/
  return result; /*0x70f0f2*/
}


// ==== 0x0070F100  TechnoClass::COMStub_Return0_307  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::COMStub_Return0_307(#377 *this)
{
  int result; // eax

  return result; /*0x70f100*/
}


// ==== 0x0070F110  TechnoClass::StubReturnFalse9  this=TechnoClass  sig=csp ====
int __thiscall BuildingClass::_vt308(#377 *this)
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
    MEMORY[0xB0EB3C] = a2; /*0x70f134*/
    MEMORY[0xB0EB38] = a1; /*0x70f13a*/
    v3 = *((_DWORD *)MEMORY[0x8871E0] + 1536); /*0x70f140*/
    Ticks = Timer::GetTicks(); /*0x70f14a*/
    MEMORY[0xB0EA74] = v9; /*0x70f161*/
    v7 = HouseClass_Player; /*0x70f169*/
    MEMORY[0xB0EA70] = Ticks; /*0x70f16e*/
    MEMORY[0xB0EA78] = v3; /*0x70f173*/
    v5 = (*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)a1 + 72))(a1, v8); /*0x70f180*/
    return MapClass::RevealArea0(v5, 2, v7, 0, 0, 0, 1, 1); /*0x70f189*/
  }
  else
  {
    MEMORY[0xB0EB3C] = 0; /*0x70f198*/
    MEMORY[0xB0EB38] = 0; /*0x70f1a2*/
    result = Timer::GetTicks(); /*0x70f1ac*/
    MEMORY[0xB0EA70] = result; /*0x70f1b7*/
    MEMORY[0xB0EA74] = v9; /*0x70f1bc*/
    MEMORY[0xB0EA78] = 0; /*0x70f1c2*/
  }
  return result; /*0x70f18f*/
}


// ==== 0x0070F1D0  ObjectClass::DrawBuildingRangeIndicator  this=TechnoClass  sig=csp ====
char __thiscall DrawBuildingRangeIndicator(void ***this, TechnoClass *aP1, int a3)
{
  AnimClass *v4; // eax
  AnimClass *v5; // edi
  CoordStruct *v6; // eax
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
  _BYTE v40[4]; // [esp+144h] [ebp-10h] BYREF
  _DWORD v41[3]; // [esp+148h] [ebp-Ch] BYREF

  v4 = (AnimClass *)((int (__thiscall *)(void ***, _DWORD, _DWORD))(*this)[26])(this, 0, 0); /*0x70f1e0*/
  if ( !v4 ) /*0x70f1e5*/
  {
    v4 = (AnimClass *)this->behindAnim; /*0x70f1eb*/
    if ( !v4 ) /*0x70f1f3*/
    {
      if ( *(_DWORD *)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9108] + 184) ) /*0x70f1ff*/
      {
        v5 = (AnimClass *)__2_YAPAXI_Z(0x1C8u); /*0x70f217*/
        if ( v5 ) /*0x70f21e*/
        {
          v6 = (CoordStruct *)((int (__thiscall *)(void ***, _DWORD *))(*this)[18])(this, v41); /*0x70f239*/
          v4 = AnimClass::ctor( /*0x70f24c*/
                 (void **)v5,
                 *(CoordStruct **)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9108] + 184),
                 v6,
                 0,
                 (CoordStruct *)1,
                 (void *)0x600,
                 0,
                 0);
        }
        else
        {
          v4 = 0; /*0x70f253*/
        }
        this->behindAnim = (void **)v4; /*0x70f257*/
        if ( v4 ) /*0x70f25d*/
        {
          BuildingClass::AimTurret(v4, (IUnknown *)this); /*0x70f266*/
          LOBYTE(v4) = MEMORY[0xA8D63C].__pad_14B0[147]; /*0x70f26b*/
          if ( !MEMORY[0xA8D63C].__pad_14B0[147] ) /*0x70f272*/
          {
            v4 = (AnimClass *)this->behindAnim; /*0x70f278*/
            v4->__pad_194[9] = 1; /*0x70f280*/
          }
        }
      }
      else
      {
        if ( *(_DWORD *)&MEMORY[0x87F6C4]->field_2[2] == 1 ) /*0x70f29b*/
          v7 = *(unsigned __int8 *)(*(_DWORD *)MEMORY[0x87F6C4]->__pad_174 + 12); /*0x70f2a8*/
        else
          v7 = *(unsigned __int16 *)(*(_DWORD *)MEMORY[0x87F6C4]->__pad_174 + 24); /*0x70f2b4*/
        v8 = *(_DWORD *)aP1->__pad_0; /*0x70f2c5*/
        v9 = *(_DWORD *)&aP1->__pad_0[4]; /*0x70f2c7*/
        if ( (MEMORY[0xA8D63C].__pad_14B0[664] & 8) != 0 ) /*0x70f2d1*/
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
          (*(void (__thiscall **)(_DWORD, _DWORD *, _DWORD *, int))(**(_DWORD **)&MEMORY[0x87F8E4].__pad_5568[9416] + 48))( /*0x70f370*/
            *(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9416],
            v24,
            v32,
            v7);
          v34[1] = v9 + v11; /*0x70f37a*/
          v34[0] = v14; /*0x70f385*/
          v26[0] = v18 + v14; /*0x70f395*/
          v26[1] = v9 + v11; /*0x70f399*/
          (*(void (__thiscall **)(_DWORD, _DWORD *, _DWORD *, int))(**(_DWORD **)&MEMORY[0x87F8E4].__pad_5568[9416] + 48))( /*0x70f3b3*/
            *(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9416],
            v26,
            v34,
            v7);
          v21[0] = v14; /*0x70f3c0*/
          v21[1] = v9 - v16; /*0x70f3c4*/
          v28[0] = v14; /*0x70f3cb*/
          v28[1] = v9 + v11; /*0x70f3cf*/
          (*(void (__thiscall **)(_DWORD, _DWORD *, _DWORD *, int))(**(_DWORD **)&MEMORY[0x87F8E4].__pad_5568[9416] + 48))( /*0x70f3e6*/
            *(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9416],
            v28,
            v21,
            v7);
          v35[1] = v9 + v15; /*0x70f3f9*/
          v35[0] = v14; /*0x70f403*/
          v30[0] = v14; /*0x70f40a*/
          v30[1] = v9 + v16; /*0x70f41f*/
          (*(void (__thiscall **)(_DWORD, _DWORD *, _DWORD *, int))(**(_DWORD **)&MEMORY[0x87F8E4].__pad_5568[9416] + 48))( /*0x70f430*/
            *(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9416],
            v30,
            v35,
            v7);
          v36[0] = v18 + v14; /*0x70f43f*/
          v22[0] = v14; /*0x70f44f*/
          v36[1] = v9 + v15; /*0x70f45b*/
          v22[1] = v9 + v15; /*0x70f462*/
          (*(void (__thiscall **)(_DWORD, _DWORD *, _DWORD *, int))(**(_DWORD **)&MEMORY[0x87F8E4].__pad_5568[9416] + 48))( /*0x70f46e*/
            *(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9416],
            v22,
            v36,
            v7);
          v23[0] = v11 + v8; /*0x70f478*/
          v23[1] = v9 + v15; /*0x70f484*/
          v25[1] = v9 + v15; /*0x70f488*/
          v25[0] = v8 - v16; /*0x70f48c*/
          (*(void (__thiscall **)(_DWORD, _DWORD *, _DWORD *, int))(**(_DWORD **)&MEMORY[0x87F8E4].__pad_5568[9416] + 48))( /*0x70f4a3*/
            *(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9416],
            v25,
            v23,
            v7);
          v27[0] = v11 + v8; /*0x70f4b2*/
          v27[1] = v9 + v16; /*0x70f4bf*/
          v29[0] = v11 + v8; /*0x70f4c6*/
          v29[1] = v9 + v15; /*0x70f4d4*/
          (*(void (__thiscall **)(_DWORD, _DWORD *, _DWORD *, int))(**(_DWORD **)&MEMORY[0x87F8E4].__pad_5568[9416] + 48))( /*0x70f4e6*/
            *(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9416],
            v29,
            v27,
            v7);
          v31[1] = v9 + v11; /*0x70f4ef*/
          v31[0] = v11 + v8; /*0x70f4fa*/
          v33[0] = v11 + v8; /*0x70f506*/
          v33[1] = v9 - v16; /*0x70f50d*/
          (*(void (__thiscall **)(_DWORD, _DWORD *, _DWORD *, int))(**(_DWORD **)&MEMORY[0x87F8E4].__pad_5568[9416] + 48))( /*0x70f52d*/
            *(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9416],
            v33,
            v31,
            v7);
          v37[0] = v14 + v19; /*0x70f540*/
          v37[1] = v9; /*0x70f556*/
          v39[0] = v20 + v14; /*0x70f55d*/
          v39[1] = v9; /*0x70f564*/
          (*(void (__thiscall **)(_DWORD, _DWORD *, _DWORD *, int))(**(_DWORD **)&MEMORY[0x87F8E4].__pad_5568[9416] + 48))( /*0x70f575*/
            *(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9416],
            v39,
            v37,
            v7);
          v38[1] = v9 + 4; /*0x70f581*/
          v38[0] = v8; /*0x70f58b*/
          v41[0] = v8; /*0x70f592*/
          v41[1] = v9 - 4; /*0x70f599*/
          (*(void (__thiscall **)(_DWORD, _DWORD *, _DWORD *, int))(**(_DWORD **)&MEMORY[0x87F8E4].__pad_5568[9416] + 48))( /*0x70f5b3*/
            *(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9416],
            v41,
            v38,
            v7);
          ++v8; /*0x70f5ba*/
          ++v14; /*0x70f5c3*/
          ++v9; /*0x70f5d9*/
          v4 = (AnimClass *)Color::ConvertToRGB( /*0x70f5e3*/
                              (unsigned __int8 *)(*((_DWORD *)MEMORY[0xB054D4] + HouseClass_Player[1].field_24) + 776),
                              (int)v40);
          v7 = ((unsigned __int8)LOWORD(v4->field_0) >> MEMORY[0x89F690].__pad_14B0[660] << MEMORY[0x89F690].__pad_14B0[656]) /*0x70f64a*/
             | ((unsigned __int8)HIBYTE(LOWORD(v4->field_0)) >> MEMORY[0x89F690].__pad_14B0[676] << MEMORY[0x89F690].__pad_14B0[672])
             | (BYTE2(v4->field_0) >> MEMORY[0x89F690].__pad_14B0[668] << MEMORY[0x89F690].__pad_14B0[664]);
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
void __thiscall FootClass::SetThreatBounds(_DWORD *this, IUnknown *aP1)
{
  IUnknown *v3; // eax
  BuildingTypeClass *v4; // edx
  BuildingTypeClass *v5; // eax
  IUnknown *v6; // [esp-4h] [ebp-Ch]

  if ( aP1 ) /*0x70f67a*/
  {
    v3 = (IUnknown *)(*(int (__thiscall **)(_DWORD *))(*this + 704))(this); /*0x70f67e*/
    v4 = (BuildingTypeClass *)*this; /*0x70f684*/
    v6 = v3; /*0x70f686*/
    this->threatPosed = v3; /*0x70f689*/
    v5 = (BuildingTypeClass *)(*(int (__thiscall **)(_DWORD *))&v4->BarrelVoxel[20])(this); /*0x70f68f*/
    CellClass::SetThreatBounds(aP1, v5, (int)v6); /*0x70f695*/
  }
}


// ==== 0x0070F6A0  FootClass::ApplyThreatBounds  this=FootClass  sig=csp ====
void __thiscall FootClass::ApplyThreatBounds(_DWORD *this, IUnknown *aP1)
{
  BuildingTypeClass *v3; // eax
  IUnknown *v4; // [esp-4h] [ebp-Ch]

  if ( aP1 ) /*0x70f6aa*/
  {
    v4 = (IUnknown *)-this->threatPosed; /*0x70f6b6*/
    v3 = (BuildingTypeClass *)(*(int (**)(void))(*this + 56))(); /*0x70f6b7*/
    CellClass::SetThreatBounds(aP1, v3, (int)v4); /*0x70f6bd*/
    this->threatPosed = 0; /*0x70f6c2*/
  }
}


// ==== 0x0070F6E0  BuildingClass::UpdateThreatBounds  this=IUnknown  sig=csp ====
void __thiscall BuildingClass::UpdateThreatBounds(_DWORD *this, _DWORD *a2)
{
  int v3; // eax
  int v4; // eax
  int v5; // eax
  int v6; // edx
  int v7; // eax
  int v8; // [esp-4h] [ebp-Ch]
  int v9; // [esp-4h] [ebp-Ch]

  if ( a2 ) /*0x70f6ea*/
  {
    v8 = -this->q508; /*0x70f6f6*/
    v3 = (*(int (**)(void))(*this + 56))(); /*0x70f6f7*/
    CellClass::SetThreatBounds(a2, v3, v8); /*0x70f6fd*/
    v4 = *this; /*0x70f702*/
    this->q508 = 0; /*0x70f706*/
    v5 = (*(int (__thiscall **)(_DWORD *))(v4 + 704))(this); /*0x70f710*/
    v6 = *this; /*0x70f716*/
    v9 = v5; /*0x70f718*/
    this->q508 = v5; /*0x70f71b*/
    v7 = (*(int (__thiscall **)(_DWORD *))(v6 + 56))(this); /*0x70f721*/
    CellClass::SetThreatBounds(a2, v7, v9); /*0x70f727*/
  }
}


// ==== 0x0070F740  ObjectClass::method_70F740  this=ObjectClass  sig=csp ====
int __thiscall sub_70F740(_DWORD *this, int a2)
{
  _DWORD *v2; // ecx
  int v4; // [esp+4h] [ebp-8h]

  v2 = this + 96; /*0x70f74c*/
  *v2 = MEMORY[0xA8ED84]; /*0x70f752*/
  v2[1] = v4; /*0x70f758*/
  v2[2] = a2; /*0x70f75b*/
  return v4; /*0x70f75e*/
}


// ==== 0x0070F770  Mission::GetMissionDelay  this=ObjectClass  sig=csp ====
int __thiscall sub_70F770(_DWORD *this)
{
  int v1; // edx
  int result; // eax
  _DWORD *v3; // esi
  int v4; // [esp+8h] [ebp-8h]

  v1 = this->__pad_180; /*0x70f770*/
  result = this->q188; /*0x70f779*/
  v3 = this + 96; /*0x70f783*/
  if ( v1 != -1 ) /*0x70f789*/
  {
    if ( (int)MEMORY[0xA8ED84] - v1 >= result ) /*0x70f795*/
      return result; /*0x70f795*/
    result -= (int)MEMORY[0xA8ED84] - v1; /*0x70f797*/
  }
  if ( result > 10 ) /*0x70f79c*/
  {
    result = MEMORY[0xA8E7AC]; /*0x70f79e*/
    if ( !MEMORY[0xA8E7AC] ) /*0x70f7a5*/
    {
      result = Random::Range((_DWORD *)MEMORY[0xA8B230] + 134, 4, 8); /*0x70f7b6*/
      *v3 = MEMORY[0xA8ED84]; /*0x70f7c1*/
      v3[1] = v4; /*0x70f7c7*/
      v3[2] = result; /*0x70f7ca*/
    }
  }
  return result; /*0x70f7cd*/
}


// ==== 0x0070F7E0  FootClass::updateThreat  this=AbstractClass  sig=csp ====
bool __thiscall sub_70F7E0(_DWORD *this)
{
  int v1; // edx
  int v2; // eax

  v1 = this->q600; /*0x70f7e0*/
  v2 = this->q620; /*0x70f7e6*/
  if ( v1 != -1 ) /*0x70f7ef*/
  {
    if ( (int)MEMORY[0xA8ED84] - v1 < v2 ) /*0x70f7fb*/
      return v2 == (_DWORD)MEMORY[0xA8ED84] - v1; /*0x70f808*/
    v2 = 0; /*0x70f809*/
  }
  return v2 == 0; /*0x70f808*/
}


// ==== 0x0070F820  ObjectClass::GetPriorityTarget  this=ObjectClass  sig=csp ====
int __thiscall ObjectClass_GetPriorityTarget(_DWORD *this)
{
  if ( this->q2C0 ) /*0x70f820*/
    return CaptureManagerClass::GetOriginalOwner(this); /*0x70f831*/
  if ( this->q2CC ) /*0x70f837*/
    return this->q2E0; /*0x70f841*/
  return this->q21C; /*0x70f836*/
}


// ==== 0x0070F850  TechnoClass::SetIdleState  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::SetIdleState(#377 *this)
{
  int v2; // eax

  (*(void (__thiscall **)(#377 *, _DWORD, int))(this->q120)(this, 0, 1); /*0x70f859*/
  (*(void (__thiscall **)(#377 *, _DWORD))(this->unknown_short_3C8)(this, 0); /*0x70f865*/
  v2 = *(_DWORD *)this; /*0x70f86b*/
  this->q086 = 0; /*0x70f871*/
  return (*(int (__thiscall **)(#377 *, int))(v2 + 496))(this, 5); /*0x70f881*/
}


// ==== 0x0070F8F0  TechnoClass::FindBridgeCell  this=TechnoClass  sig=csp ====
int __thiscall BuildingClass::FindBridgeCell(#377 *this)
{
  int v1; // edx
  _DWORD *v2; // eax
  int v4; // ebx
  int v5; // edi
  int v6; // esi
  _DWORD *v7; // eax
  void *v8; // eax
  int NthOfType; // eax
  _DWORD *v10; // eax
  void *v11; // eax
  int v12; // eax
  _DWORD *v13; // eax
  void *v14; // eax
  int v15; // eax
  _DWORD *v16; // eax
  void *v17; // eax
  int v18; // eax
  int v19; // [esp+4h] [ebp-34h] BYREF
  int v20; // [esp+8h] [ebp-30h]
  int v21; // [esp+Ch] [ebp-2Ch]
  int v22; // [esp+10h] [ebp-28h]
  int v23; // [esp+14h] [ebp-24h]
  int v24; // [esp+18h] [ebp-20h]
  int v25; // [esp+1Ch] [ebp-1Ch]
  int v26; // [esp+20h] [ebp-18h]
  int v27; // [esp+24h] [ebp-14h] BYREF
  int v28; // [esp+2Ah] [ebp-Eh] BYREF
  int v29; // [esp+2Eh] [ebp-Ah]
  int *v30; // [esp+3Ch] [ebp+4h]
  int v31; // [esp+40h] [ebp+8h]

  v1 = *(_DWORD *)this; /*0x70f8f8*/
  v20 = MEMORY[0xB0EA50]; /*0x70f8fa*/
  v2 = (_DWORD *)(*(int (__thiscall **)(#377 *, char *))(v1 + 72))(this, (char *)&v28 + 2); /*0x70f903*/
  LOWORD(v19) = *v2 / 256; /*0x70f916*/
  HIWORD(v19) = v2[1] / 256; /*0x70f92e*/
  v27 = v19; /*0x70f937*/
  if ( *((_DWORD *)CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v27) + 59) == 5 ) /*0x70f94d*/
  {
    *v30 = v27; /*0x70f957*/
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
            LOWORD(v21) = v6 + v27; /*0x70f9a0*/
            HIWORD(v21) = HIWORD(v27) - v4; /*0x70f9a5*/
            v19 = v21; /*0x70f9b2*/
            v7 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v19); /*0x70f9bc*/
            if ( Cell::IsBridge2(v7) ) /*0x70f9c3*/
            {
              v8 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v19); /*0x70f9d6*/
              NthOfType = Building::GetNthOfType((int)v8); /*0x70f9dd*/
              if ( NthOfType > v5 ) /*0x70f9e4*/
              {
                v5 = NthOfType; /*0x70f9e6*/
                v20 = v19; /*0x70f9ec*/
              }
            }
            LOWORD(v22) = v6 + v27; /*0x70f9fe*/
            HIWORD(v22) = v4 + HIWORD(v27); /*0x70fa03*/
            v19 = v22; /*0x70fa16*/
            v10 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v19); /*0x70fa1a*/
            if ( Cell::IsBridge2(v10) ) /*0x70fa21*/
            {
              v11 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v19); /*0x70fa34*/
              v12 = Building::GetNthOfType((int)v11); /*0x70fa3b*/
              if ( v12 > v5 ) /*0x70fa42*/
              {
                v5 = v12; /*0x70fa48*/
                v20 = v19; /*0x70fa4a*/
              }
            }
            LOWORD(v26) = -(__int16)v4; /*0x70fa56*/
            LOWORD(v23) = v27 - v4; /*0x70fa64*/
            HIWORD(v23) = v6 + HIWORD(v27); /*0x70fa69*/
            v19 = v23; /*0x70fa76*/
            v13 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v19); /*0x70fa80*/
            if ( Cell::IsBridge2(v13) ) /*0x70fa87*/
            {
              v14 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v19); /*0x70fa9a*/
              v15 = Building::GetNthOfType((int)v14); /*0x70faa1*/
              if ( v15 > v5 ) /*0x70faa8*/
              {
                v5 = v15; /*0x70faae*/
                v20 = v19; /*0x70fab0*/
              }
            }
            LOWORD(v24) = v4 + v27; /*0x70fac6*/
            HIWORD(v24) = v6 + HIWORD(v27); /*0x70facb*/
            v19 = v24; /*0x70fada*/
            v16 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v19); /*0x70fade*/
            if ( Cell::IsBridge2(v16) ) /*0x70fae5*/
            {
              v17 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v19); /*0x70faf8*/
              v18 = Building::GetNthOfType((int)v17); /*0x70faff*/
              if ( v18 > v5 ) /*0x70fb06*/
              {
                v5 = v18; /*0x70fb08*/
                v20 = v19; /*0x70fb0e*/
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
bool __thiscall TechnoClass::CanSelfRepair(_BYTE *this)
{
  _DWORD *v3; // eax

  if ( !*(_BYTE *)((*(int (__thiscall **)(_BYTE *))(this->hasParachute)(this) + 3374) ) /*0x70fb5b*/
    return 0; /*0x70fb65*/
  if ( !*(_BYTE *)((*(int (__thiscall **)(_BYTE *))(this->hasParachute)(this) + 3233) ) /*0x70fb73*/
    return 0; /*0x70fb7d*/
  v3 = (_DWORD *)(*(int (__thiscall **)(_BYTE *))(this->isChronoImmuneFlag)(this); /*0x70fb85*/
  if ( !v3 || !*v3 ) /*0x70fb8f*/
    return 0; /*0x70fb94*/
  if ( *(_DWORD *)((*(int (__thiscall **)(_BYTE *))(this->hasParachute)(this) + 1660) == 3 ) /*0x70fba9*/
    return 0; /*0x70fbab*/
  return !this || (this->abstractFlags & 4) == 0 || !this->q1A5; /*0x70fbb9*/
}


// ==== 0x0070FBD0  UnitClass::IsDeactivated  this=TechnoClass  sig=csp ====
char __thiscall UnitClass::IsDeactivated(_BYTE *this)
{
  return this->airstrikeTintStage_e; /*0x70fbd6*/
}


// ==== 0x0070FBE0  TechnoClass::Activate  this=TechnoClass  sig=csp ====
char __thiscall TechnoClass::Activate(_DWORD *this)
{
  int v2; // eax
  int v3; // edx
  int v4; // eax
  _DWORD v6[3]; // [esp+4h] [ebp-Ch] BYREF

  (*(void (__thiscall **)(_DWORD *))(*this + 976))(this); /*0x70fbe8*/
  if ( this && (*(_BYTE *)(this + 5) & 4) != 0 ) /*0x70fbf6*/
  {
    if ( !this->q674 ) /*0x70fbf8*/
      WinAPI::Wrapper(-2147467261); /*0x70fc07*/
    (*(void (__stdcall **)(_DWORD))(*(_DWORD *)this->q674 + 88))(this->q674); /*0x70fc15*/
  }
  LOBYTE(v2) = this->airstrikeTintStage_e; /*0x70fc18*/
  if ( !(_BYTE)v2 || (v2 = (*(int (__thiscall **)(_DWORD *))(*this + 132))(this), *(_DWORD *)(v2 + 1448) == -1) ) /*0x70fc33*/
  {
    this->airstrikeTintStage_e = 0; /*0x70fc7a*/
  }
  else
  {
    v6[0] = this->location; /*0x70fc44*/
    v6[1] = this->locationY; /*0x70fc4d*/
    v3 = *this; /*0x70fc51*/
    v6[2] = this->locationZ; /*0x70fc56*/
    v4 = (*(int (__thiscall **)(_DWORD *))(v3 + 132))(this); /*0x70fc5a*/
    LOBYTE(v2) = StartAudioControllerAt(*(_DWORD *)(v4 + 1448), (int)v6, 0); /*0x70fc68*/
    this->airstrikeTintStage_e = 0; /*0x70fc6d*/
  }
  return v2; /*0x70fc75*/
}


// ==== 0x0070FC90  TechnoClass::Deactivate  this=BuildingClass  sig=csp ====
char __thiscall TechnoClass::Deactivate(_DWORD *this)
{
  _DWORD *v2; // eax
  BuildingTypeClass *v3; // edi
  int Member; // eax
  BuildingTypeClass *v5; // edx
  int v6; // eax
  int v8[3]; // [esp+8h] [ebp-Ch] BYREF

  if ( !this->isTether /*0x70fcca*/
    || !Team::GetMember(this, 0)
    || (v2 = (_DWORD *)(*(int (__thiscall **)(_DWORD *))(*this + 444))(this),
        v3 = (BuildingTypeClass *)Cell::IsBridge(v2),
        Member = Team::GetMember(this, 0),
        v3 != (BuildingTypeClass *)Member) )
  {
    (*(void (__thiscall **)(_DWORD *))(*this + 976))(this); /*0x70fcd4*/
    (*(void (__thiscall **)(_DWORD *))(*this + 336))(this); /*0x70fcde*/
    if ( this && (*(_BYTE *)(this + 5) & 4) != 0 ) /*0x70fcec*/
    {
      if ( !this->FiringOccupantIndex ) /*0x70fcee*/
        WinAPI::Wrapper(-2147467261); /*0x70fcfd*/
      (*(void (__stdcall **)(_DWORD))(*(_DWORD *)this->FiringOccupantIndex + 92))(this->FiringOccupantIndex); /*0x70fd0b*/
    }
    LOBYTE(Member) = this->PlacementAllowed; /*0x70fd0e*/
    if ( !(_BYTE)Member ) /*0x70fd16*/
    {
      Member = (*(int (__thiscall **)(_DWORD *))(*this + 132))(this); /*0x70fd1c*/
      if ( *(_DWORD *)(Member + 1452) != -1 ) /*0x70fd29*/
      {
        v8[0] = this->location; /*0x70fd39*/
        v8[1] = this->q0A0; /*0x70fd42*/
        v5 = (BuildingTypeClass *)*this; /*0x70fd46*/
        v8[2] = this->q0A4; /*0x70fd4b*/
        v6 = (*(int (__thiscall **)(_DWORD *))&v5->Name[32])(this); /*0x70fd4f*/
        LOBYTE(Member) = StartAudioControllerAt(*(AudioController **)(v6 + 1452), (int)v8, 0); /*0x70fd5d*/
      }
    }
    this->PlacementAllowed = 1; /*0x70fd62*/
  }
  return Member; /*0x70fd69*/
}


// ==== 0x0070FD70  TechnoClass::LinkToBridge  this=TechnoClass  sig=csp ====
void __thiscall TechnoClass::LinkToBridge(IUnknown *this, _DWORD *a2)
{
  _DWORD *v3; // eax
  _DWORD *v4; // ecx
  AnimClass *v5; // edi
  CoordStruct *v6; // eax
  AnimClass *v7; // eax
  int v8; // ecx
  _BYTE v9[12]; // [esp+8h] [ebp-Ch] BYREF

  if ( a2 ) /*0x70fd7d*/
  {
    v3 = (_DWORD *)(*(int (__thiscall **)(IUnknown *))(this->field_0 + 444))(this); /*0x70fd85*/
    if ( Cell::IsBridge(v3) == a2 ) /*0x70fd94*/
    {
      a2[116] = this; /*0x70fd9a*/
      *(_DWORD *)&this->__pad_188[68] = a2; /*0x70fda0*/
      *(_BYTE *)(a2[135] + 22392) = 1; /*0x70fdac*/
      v4 = (_DWORD *)a2[175]; /*0x70fdb3*/
      if ( v4 ) /*0x70fdbb*/
        CaptureManager::FreeAll(v4); /*0x70fdbd*/
      v5 = (AnimClass *)__2_YAPAXI_Z(0x1C8u); /*0x70fdcc*/
      if ( v5 ) /*0x70fdd3*/
      {
        v6 = (CoordStruct *)(*(int (__thiscall **)(IUnknown *, _BYTE *))(this->field_0 + 72))(this, v9); /*0x70fdeb*/
        v7 = AnimClass::ctor( /*0x70fdfe*/
               (void **)v5,
               *(CoordStruct **)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9108] + 796),
               v6,
               0,
               (CoordStruct *)1,
               (void *)0x600,
               0,
               0);
      }
      else
      {
        v7 = 0; /*0x70fe05*/
      }
      this->field_1D4 = (int)v7; /*0x70fe09*/
      if ( v7 ) /*0x70fe0f*/
        BuildingClass::AimTurret(v7, this); /*0x70fe14*/
      if ( this && (this->__pad_10[4] & 4) != 0 ) /*0x70fe21*/
      {
        v8 = *(_DWORD *)&this->__pad_524[176]; /*0x70fe23*/
        if ( v8 ) /*0x70fe2b*/
          TeamClass::LiberateMember_Start(v8, this, 0xFFFFFFFF, (AbstractClass *)1); /*0x70fe32*/
      }
    }
  }
}


// ==== 0x0070FE40  ObjectClass::method_70FE40  this=ObjectClass  sig=csp ====
int __thiscall sub_70FE40(_DWORD *this, int a2)
{
  this->q1D0 = a2; /*0x70fe44*/
  return a2; /*0x70fe4a*/
}


// ==== 0x0070FE50  ObjectClass::method_70FE50  this=ObjectClass  sig=csp ====
int __thiscall sub_70FE50(_DWORD *this)
{
  int v2; // ecx
  int result; // eax

  v2 = this->q1D4; /*0x70fe53*/
  if ( v2 ) /*0x70fe5b*/
  {
    (*(void (__thiscall **)(int))(*(_DWORD *)v2 + 248))(v2); /*0x70fe5f*/
    this->q1D4 = 0; /*0x70fe65*/
  }
  result = this->q073; /*0x70fe6f*/
  if ( result ) /*0x70fe77*/
  {
    *(_DWORD *)(result + 464) = 0; /*0x70fe79*/
    result = *(_DWORD *)(this->q073 + 540); /*0x70fe89*/
    if ( result ) /*0x70fe91*/
      *(_BYTE *)(result + 22392) = 1; /*0x70fe93*/
    this->q073 = 0; /*0x70fe9a*/
  }
  return result; /*0x70fea4*/
}


// ==== 0x0070FEB0  FootClass::checkPassability  this=ObjectClass  sig=csp ====
BOOL __thiscall sub_70FEB0(_DWORD *this)
{
  return this->q073 != 0; /*0x70febd*/
}


// ==== 0x0070FEC0  ObjectClass::HasLocation  this=ObjectClass  sig=csp ====
BOOL __thiscall ObjectClass_HasLocation(_DWORD *this)
{
  return this->q1D0 != 0; /*0x70fecd*/
}


// ==== 0x0070FEE0  TechnoClass::EjectPassengers  this=IUnknown  sig=csp ====
char __thiscall TechnoClass_EjectPassengers(int *this, char a2)
{
  int v3; // eax
  _BYTE *v4; // ecx
  int v5; // eax
  _BYTE *v6; // ecx
  int v7; // eax

  v3 = this->q0AB; /*0x70fee3*/
  if ( !v3 ) /*0x70feeb*/
    return v3; /*0x70feeb*/
  *(_DWORD *)(v3 + 688) = 0; /*0x70fef1*/
  v4 = (_BYTE *)this->q0AB; /*0x70fefb*/
  if ( v4 && (v4[20] & 4) != 0 )
  {
    v5 = (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)v4 + 456))(v4); /*0x70ff15*/
    v6 = (_BYTE *)this->q0AB; /*0x70ff1b*/
    if ( v5 > 0 ) /*0x70ff23*/
    {
      v6[1061] = 1; /*0x70ff25*/
      *(_BYTE *)(this->q0AB + 1063) = 1; /*0x70ff32*/
      *(_DWORD *)(this->q0AB + 1064) = this; /*0x70ff3f*/
      *(_DWORD *)(this->q0AB + 1068) = this->q21C; /*0x70ff51*/
      (*(void (__thiscall **)(_DWORD))(*(_DWORD *)this->q0AB + 928))(this->q0AB); /*0x70ff5f*/
      (*(void (__thiscall **)(_DWORD, _DWORD, int))(*(_DWORD *)this->q0AB + 1152))(this->q0AB, 0, 1); /*0x70ff71*/
      LOBYTE(v3) = a2; /*0x70ff77*/
      this->q0AB = 0; /*0x70ff7b*/
      if ( a2 ) /*0x70ff87*/
        goto LABEL_11; /*0x70ff87*/
      return v3; /*0x70ff87*/
    }
    (*(void (__thiscall **)(_BYTE *, _DWORD, int))(*(_DWORD *)v6 + 1152))(v6, 0, 1); /*0x70ff9f*/
    v7 = this->q0AB; /*0x70ffa5*/
    if ( v7 )
      v7 = (*(_BYTE *)(v7 + 20) & 4) != 0 ? v7 : 0;
    *(_BYTE *)(v7 + 1710) = 1; /*0x70ffbb*/
    (*(void (__thiscall **)(_DWORD, _DWORD, int))(*(_DWORD *)this->q0AB + 1152))(this->q0AB, 0, 1); /*0x70ffce*/
  }
  LOBYTE(v3) = a2; /*0x70ffd4*/
  this->q0AB = 0; /*0x70ffd8*/
  if ( a2 ) /*0x70ffe4*/
LABEL_11:
    LOBYTE(v3) = (*(int (__thiscall **)(int *, _DWORD))(*this + 968))(this, 0); /*0x70ffe6*/
  return v3; /*0x70ff95*/
}

