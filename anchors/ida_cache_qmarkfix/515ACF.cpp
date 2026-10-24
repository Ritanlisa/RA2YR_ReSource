int __thiscall MovementAI::MainFootClass(MovementAI *this, char a2)
{
  MovementAI *v3; // esi
  int result; // eax
  int *m_State; // ecx
  int *v6; // ecx
  int v7; // eax
  _DWORD *v8; // ecx
  int v9; // ecx
  int v10; // eax
  int v11; // edx
  int v12; // edx
  int v13; // esi
  int v14; // edi
  CellClass *v15; // eax
  int *Coords; // eax
  int v17; // edx
  int v18; // ecx
  _DWORD *v19; // esi
  int v20; // edx
  int *v21; // eax
  int *v22; // edi
  int v23; // eax
  int v24; // edx
  int v25; // edi
  int v26; // esi
  int *v27; // ecx
  int GroundHeight; // edi
  int v29; // ecx
  int v30; // eax
  int v31; // ecx
  int v32; // ecx
  _WORD *v33; // eax
  int v34; // edi
  __int16 v35; // dx
  int v36; // eax
  int *v37; // ecx
  CellClass *v38; // eax
  int v39; // eax
  int v40; // eax
  int *v41; // eax
  CellClass *v42; // eax
  int v43; // ecx
  ObjectClass *v44; // ecx
  int vfptr; // edi
  void *v46; // eax
  CellClass *v47; // eax
  int v48; // ecx
  _DWORD *v49; // ecx
  int v50; // edx
  int v51; // ecx
  int v52; // ecx
  int v53; // edx
  int v54; // ecx
  _DWORD *v55; // edx
  _DWORD *v56; // eax
  int *v57; // eax
  int *v58; // ecx
  __int64 v59; // rax
  int *v60; // ecx
  int v61; // edi
  int v62; // ecx
  CellClass *v63; // eax
  int v64; // ecx
  _BYTE *v65; // ecx
  int v66; // edx
  int v67; // ecx
  _DWORD *v68; // edx
  Object *v69; // eax
  Object *v70; // eax
  int ObjectCell; // eax
  int *v72; // ecx
  int v73; // edi
  Object *v74; // eax
  int v75; // eax
  int v76; // edi
  void *v77; // eax
  int v78; // ecx
  int v79; // eax
  _DWORD *v80; // edx
  int ForceShieldRadius; // ecx
  _DWORD *v82; // esi
  int v83; // edi
  int v84; // edx
  int v85; // eax
  int v86; // ecx
  int v87; // eax
  int v88; // ecx
  int v89; // edi
  char v90; // al
  int v91; // [esp+10h] [ebp-78h]
  int LandHeight; // [esp+14h] [ebp-74h]
  int v93; // [esp+1Ch] [ebp-6Ch]
  char v94; // [esp+1Ch] [ebp-6Ch]
  __int16 v95[2]; // [esp+2Ch] [ebp-5Ch] BYREF
  __int16 v96[2]; // [esp+30h] [ebp-58h] BYREF
  char v97[4]; // [esp+34h] [ebp-54h] BYREF
  _DWORD v98[2]; // [esp+38h] [ebp-50h] BYREF
  int v99; // [esp+40h] [ebp-48h] BYREF
  int v100; // [esp+44h] [ebp-44h]
  int v101; // [esp+48h] [ebp-40h]
  int v102; // [esp+4Ch] [ebp-3Ch] BYREF
  int v103; // [esp+50h] [ebp-38h]
  int v104; // [esp+54h] [ebp-34h]
  int v105; // [esp+58h] [ebp-30h] BYREF
  int v106; // [esp+5Ch] [ebp-2Ch]
  int v107; // [esp+60h] [ebp-28h]
  int v108; // [esp+64h] [ebp-24h] BYREF
  int v109; // [esp+68h] [ebp-20h]
  int v110; // [esp+6Ch] [ebp-1Ch]
  char v111[12]; // [esp+70h] [ebp-18h] BYREF
  int v112; // [esp+7Ch] [ebp-Ch] BYREF
  int v113; // [esp+80h] [ebp-8h]

  v3 = (MovementAI *)((char *)this + 36);
  if ( *((_DWORD *)this + 9) != *(_DWORD *)&stru_A8E960.waypoints[494]
    || *((_DWORD *)this + 10) != *(_DWORD *)&stru_A8E960.waypoints[498]
    || *((_DWORD *)this + 11) != *(_DWORD *)&stru_A8E960.waypoints[502] )
  {
    (*(void (__thiscall **)(int, char *))(*(_DWORD *)this->m_State + 244))(this->m_State, (char *)this + 36);
    v3->m_Target[0] = *(_DWORD *)&stru_A8E960.waypoints[494];
    *((_DWORD *)this + 10) = *(_DWORD *)&stru_A8E960.waypoints[498];
    *((_DWORD *)this + 11) = *(_DWORD *)&stru_A8E960.waypoints[502];
  }
  if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)this->m_State + 896))(this->m_State) )
    return 7;
  if ( !(*(unsigned __int8 (__stdcall **)(int *))(this->m_Target[1] + 16))(&this->m_Target[1])
    || this->MovementAI_field_18 == *(_DWORD *)&stru_A8E960.waypoints[494]
    && *((_DWORD *)this + 7) == *(_DWORD *)&stru_A8E960.waypoints[498]
    && *((_DWORD *)this + 8) == *(_DWORD *)&stru_A8E960.waypoints[502] )
  {
    return 0;
  }
  m_State = (int *)this->m_State;
  *(_DWORD *)v96 = m_State[376];
  if ( *(_DWORD *)v96 == 8 )
  {
    v6 = m_State + 39;
    v102 = *v6;
    v103 = v6[1];
    v104 = v6[2];
    v7 = *(__int16 *)Coord::To_Cell((Coord *)&dword_87F7E8, &v102)->tubeIndex;
    *(_DWORD *)v95 = v7;
    if ( v7 < 0 || v7 >= dword_8B4148 )
    {
      *(_DWORD *)(this->m_State + 1504) = -1;
      v3->m_Target[0] = *(_DWORD *)&stru_A8E960.waypoints[494];
      v31 = this->m_State;
      *((_DWORD *)this + 10) = *(_DWORD *)&stru_A8E960.waypoints[498];
      *((_DWORD *)this + 11) = *(_DWORD *)&stru_A8E960.waypoints[502];
      (*(void (__thiscall **)(int, _DWORD, int))(*(_DWORD *)v31 + 1152))(v31, 0, 1);
      v32 = this->m_State;
      *((_DWORD *)this + 20) = 0;
      *((_DWORD *)this + 18) = 0;
      *((_DWORD *)this + 21) = 0;
      *((_DWORD *)this + 19) = 0;
      (*(void (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)v32 + 1348))(v32, 0, 0);
      (*(void (__thiscall **)(int, _DWORD, int))(*(_DWORD *)this->m_State + 1152))(this->m_State, 0, 1);
      return 7;
    }
    else
    {
      (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)this->m_State + 292))(this->m_State, 0);
      v8 = (_DWORD *)this->m_State;
      v99 = v8[39];
      v100 = v8[40];
      v101 = v8[41];
      (*(void (__thiscall **)(_DWORD *, int *))(*v8 + 244))(v8, &v99);
      *(_DWORD *)v97 = *((_DWORD *)dword_8B413C + *(_DWORD *)v95);
      *(_DWORD *)v96 = *(_DWORD *)(*(_DWORD *)v97 + 40);
      v9 = v96[1] << 8;
      *((_DWORD *)this + 9) = (v96[0] << 8) + 128;
      v10 = this->m_State;
      *((_DWORD *)this + 10) = v9 + 128;
      *((_DWORD *)this + 11) = 0;
      qmemcpy((void *)(v10 + 1504), (const void *)(v10 + 1508), 0x5Cu);
      v96[0] = *((_DWORD *)this + 9) / 256;
      v11 = this->m_State;
      v96[1] = *((_DWORD *)this + 10) / 256;
      *(_DWORD *)(v11 + 1368) = *(_DWORD *)v96;
      LOBYTE(v10) = v95[0];
      *(_DWORD *)(this->m_State + 1596) = -1;
      *(_BYTE *)(this->m_State + 1668) = v10;
      *(_BYTE *)(this->m_State + 1669) = 0;
      v12 = *(_DWORD *)(*(_DWORD *)v97 + 48) & 7;
      *(_DWORD *)v96 = *(_DWORD *)(*(_DWORD *)v97 + 36);
      *(_DWORD *)v95 = *(_DWORD *)v96;
      v13 = v96[0] << 8;
      v96[0] += LOWORD(dword_89F688[v12]);
      v14 = (v96[1] << 8) + 128;
      v96[1] = v95[1] + HIWORD(dword_89F688[v12]);
      v15 = (CellClass *)CellCoord::To_CellObj((CellCoord *)&dword_87F7E8, v96);
      Coords = CellClass::GetCoords(v15, &v108);
      v17 = Coords[1];
      v18 = *Coords - (v13 + 128);
      v19 = (_DWORD *)this->m_State;
      v110 = Coords[2];
      v20 = v17 - v14;
      v21 = v19 + 39;
      v19 += 346;
      v22 = v21;
      v102 = *v21;
      v23 = v20 + v21[1];
      v24 = v110;
      v104 = v22[2];
      v25 = v104;
      *v19 = v102 + v18;
      v19[1] = v23;
      v19[2] = v25 + v24;
      v26 = (*(int (__thiscall **)(int))(*(_DWORD *)this->m_State + 464))(this->m_State);
      v27 = (int *)(this->m_State + 156);
      v102 = *v27;
      v103 = v27[1];
      v104 = v27[2];
      GroundHeight = Cell::GetGroundHeight(&v102);
      v104 = 0;
      v29 = *(_DWORD *)(*(_DWORD *)v97 + 40);
      *(_DWORD *)v97 = *(_DWORD *)(*(_DWORD *)v97 + 448);
      v102 = ((__int16)v29 << 8) + 128;
      v103 = (SHIWORD(v29) << 8) + 128;
      v30 = Cell::GetGroundHeight(&v102);
      *(_DWORD *)(this->m_State + 1392) = v26 + (v30 - GroundHeight) / *(_DWORD *)v97;
      return 7;
    }
  }
  if ( *(_DWORD *)v96 == -1 )
  {
    MovementAI::StepFootClass(this, 0);
    return 0;
  }
  v33 = (_WORD *)(*(int (__thiscall **)(int *, char *))(*m_State + 440))(m_State, v97);
  v34 = v96[0] & 7;
  v35 = v33[1] + HIWORD(dword_89F688[v34]);
  v3->m_Target[0] = ((__int16)(LOWORD(dword_89F688[v34]) + *v33) << 8) + 128;
  *((_DWORD *)this + 10) = (v35 << 8) + 128;
  *((_DWORD *)this + 11) = 0;
  v36 = Cell::GetGroundHeight((_DWORD *)this + 9);
  v37 = (int *)this->m_State;
  *((_DWORD *)this + 11) = v36;
  v37 += 39;
  v102 = *v37;
  v103 = v37[1];
  v104 = v37[2];
  if ( v104 >= v36 + 2 * *(_DWORD *)&stru_A8E960.waypoints[558] + *(_DWORD *)&stru_A8E960.waypoints[558] )
    *((_DWORD *)this + 11) = *(_DWORD *)&stru_A8E960.waypoints[546] + v36;
  v93 = this->m_State;
  v38 = Coord::To_Cell((Coord *)&dword_87F7E8, (_DWORD *)this + 9);
  if ( !(unsigned __int8)CrateClass::ProcessPickup((CrateClass *)v38, v93) )
  {
    v39 = this->m_State;
    if ( !*(_BYTE *)(v39 + 129) )
    {
      if ( *(_BYTE *)(v39 + 144) && !*(_BYTE *)(v39 + 141) )
      {
        *(_DWORD *)(v39 + 1504) = -1;
        v3->m_Target[0] = *(_DWORD *)&stru_A8E960.waypoints[494];
        *((_DWORD *)this + 10) = *(_DWORD *)&stru_A8E960.waypoints[498];
        *((_DWORD *)this + 11) = *(_DWORD *)&stru_A8E960.waypoints[502];
        (*(void (__thiscall **)(int, _DWORD, int))(*(_DWORD *)this->m_State + 1152))(this->m_State, 0, 1);
        *((_DWORD *)this + 20) = 0;
        *((_DWORD *)this + 18) = 0;
        *((_DWORD *)this + 21) = 0;
        *((_DWORD *)this + 19) = 0;
        (*(void (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)this->m_State + 1348))(this->m_State, 0, 0);
        return 7;
      }
      return 7;
    }
  }
  v40 = this->m_State;
  if ( !*(_BYTE *)(v40 + 144) || *(_BYTE *)(v40 + 129) || *(_BYTE *)(v40 + 141) )
    return 7;
  v41 = Coord::Subtract(
          (Coord *)&v108,
          dword_89F6D8[2 * v34] + *(_DWORD *)(v40 + 156),
          *(_DWORD *)(v40 + 160) + dword_89F6DC[2 * v34],
          *(_DWORD *)(v40 + 164));
  v102 = *v41;
  v103 = v41[1];
  v104 = v41[2];
  v42 = Coord::To_Cell((Coord *)&dword_87F7E8, &v102);
  v43 = this->m_State;
  if ( *(_BYTE *)(v43 + 140) != (((unsigned int)v42->flags >> 8) & 1) )
    *(_BYTE *)(v43 + 1675) = 1;
  *(_WORD *)v97 = v3->m_Target[0] / 256;
  *(_WORD *)&v97[2] = *((_DWORD *)this + 10) / 256;
  *(_DWORD *)v95 = *(_DWORD *)v97;
  v44 = (ObjectClass *)this->m_State;
  vfptr = v44->vfptr;
  LandHeight = ObjectClass::GetLandHeight(v44);
  v91 = *(_DWORD *)v96;
  v46 = CellCoord::To_CellObj((CellCoord *)&dword_87F7E8, v95);
  *(_DWORD *)v96 = (*(int (__thiscall **)(int, void *, int, int, _DWORD, int))(vfptr + 428))(
                     this->m_State,
                     v46,
                     v91,
                     LandHeight,
                     0,
                     1);
  switch ( *(_DWORD *)v96 )
  {
    case 0:
      (*(void (__thiscall **)(int, int))(*(_DWORD *)this->m_State + 396))(this->m_State, 2);
      v65 = (_BYTE *)this->m_State;
      if ( !v65[144] || v65[129] || v65[141] )
        return 7;
      if ( v65[981] )
        (*(void (__thiscall **)(_BYTE *, char *))(*(_DWORD *)v65 + 240))(v65, (char *)this + 36);
      qmemcpy((void *)(this->m_State + 1504), (const void *)(this->m_State + 1508), 0x5Cu);
      *(_DWORD *)(this->m_State + 1596) = -1;
      *(_WORD *)v97 = *((_DWORD *)this + 9) / 256;
      v66 = this->m_State;
      *(_WORD *)&v97[2] = *((_DWORD *)this + 10) / 256;
      *(_DWORD *)(v66 + 1368) = *(_DWORD *)v97;
      return *(_DWORD *)v96;
    case 1:
    case 7:
      v47 = Coord::To_Cell((Coord *)&dword_87F7E8, (_DWORD *)this + 9);
      CellClass::DamageAllObjects(v47);
      if ( a2 )
      {
        v48 = this->m_State;
        *((_DWORD *)this + 20) = 0;
        *((_DWORD *)this + 18) = 0;
        *((_DWORD *)this + 21) = 0;
        *((_DWORD *)this + 19) = 0;
        (*(void (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)v48 + 1348))(v48, 0, 0);
        if ( v3->m_Target[0] != *(_DWORD *)&stru_A8E960.waypoints[494]
          || *((_DWORD *)this + 10) != *(_DWORD *)&stru_A8E960.waypoints[498]
          || *((_DWORD *)this + 11) != *(_DWORD *)&stru_A8E960.waypoints[502] )
        {
          (*(void (__thiscall **)(int, char *))(*(_DWORD *)this->m_State + 244))(this->m_State, (char *)this + 36);
          v3->m_Target[0] = *(_DWORD *)&stru_A8E960.waypoints[494];
          *((_DWORD *)this + 10) = *(_DWORD *)&stru_A8E960.waypoints[498];
          *((_DWORD *)this + 11) = *(_DWORD *)&stru_A8E960.waypoints[502];
        }
        v49 = (_DWORD *)(this->m_State + 1600);
        *v49 = *(_DWORD *)&stru_A8E960.random[528];
        v49[1] = v109;
        v49[2] = 0;
        *(_DWORD *)(this->m_State + 1504) = -1;
        MovementAI::StepFootClass(this, 0);
        *(_DWORD *)v96 = MovementAI::MainFootClass(this, 0);
      }
      if ( *(_DWORD *)v96 )
      {
        v3->m_Target[0] = *(_DWORD *)&stru_A8E960.waypoints[494];
        *((_DWORD *)this + 10) = *(_DWORD *)&stru_A8E960.waypoints[498];
        v50 = *(_DWORD *)&stru_A8E960.waypoints[502];
        *((_DWORD *)this + 20) = 0;
        *((_DWORD *)this + 18) = 0;
        *((_DWORD *)this + 11) = v50;
        v51 = this->m_State;
        *((_DWORD *)this + 21) = 0;
        *((_DWORD *)this + 19) = 0;
        (*(void (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)v51 + 1348))(v51, 0, 0);
        if ( v3->m_Target[0] != *(_DWORD *)&stru_A8E960.waypoints[494]
          || *((_DWORD *)this + 10) != *(_DWORD *)&stru_A8E960.waypoints[498]
          || *((_DWORD *)this + 11) != *(_DWORD *)&stru_A8E960.waypoints[502] )
        {
          (*(void (__thiscall **)(int, MovementAI *))(*(_DWORD *)this->m_State + 244))(this->m_State, v3);
          v3->m_Target[0] = *(_DWORD *)&stru_A8E960.waypoints[494];
          v3->m_Target[1] = *(_DWORD *)&stru_A8E960.waypoints[498];
          v3->m_Target[2] = *(_DWORD *)&stru_A8E960.waypoints[502];
        }
      }
      return *(_DWORD *)v96;
    case 2:
      v3->m_Target[0] = *(_DWORD *)&stru_A8E960.waypoints[494];
      *((_DWORD *)this + 10) = *(_DWORD *)&stru_A8E960.waypoints[498];
      v78 = this->m_State;
      *((_DWORD *)this + 11) = *(_DWORD *)&stru_A8E960.waypoints[502];
      *((_DWORD *)this + 20) = 0;
      *((_DWORD *)this + 18) = 0;
      *((_DWORD *)this + 21) = 0;
      *((_DWORD *)this + 19) = 0;
      (*(void (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)v78 + 1348))(v78, 0, 0);
      if ( v3->m_Target[0] != *(_DWORD *)&stru_A8E960.waypoints[494]
        || *((_DWORD *)this + 10) != *(_DWORD *)&stru_A8E960.waypoints[498]
        || *((_DWORD *)this + 11) != *(_DWORD *)&stru_A8E960.waypoints[502] )
      {
        (*(void (__thiscall **)(int, char *))(*(_DWORD *)this->m_State + 244))(this->m_State, (char *)this + 36);
        v3->m_Target[0] = *(_DWORD *)&stru_A8E960.waypoints[494];
        *((_DWORD *)this + 10) = *(_DWORD *)&stru_A8E960.waypoints[498];
        *((_DWORD *)this + 11) = *(_DWORD *)&stru_A8E960.waypoints[502];
      }
      v79 = this->m_State;
      if ( !*(_BYTE *)(v79 + 1719) )
      {
        *(_BYTE *)(v79 + 1719) = 1;
        v80 = (_DWORD *)(this->m_State + 1640);
        ForceShieldRadius = dword_8871E0->ForceShieldRadius;
        *v80 = *(_DWORD *)&stru_A8E960.random[528];
        v80[1] = v113;
        v80[2] = ForceShieldRadius;
      }
      v82 = (_DWORD *)this->m_State;
      v83 = *(_DWORD *)&stru_A8E960.random[528];
      v84 = v82[400];
      v85 = v82[402];
      if ( v84 == -1 )
        goto LABEL_90;
      if ( *(_DWORD *)&stru_A8E960.random[528] - v84 >= v85 )
        goto LABEL_91;
      v85 -= *(_DWORD *)&stru_A8E960.random[528] - v84;
LABEL_90:
      if ( !v85 )
      {
LABEL_91:
        v82[376] = -1;
        v83 = *(_DWORD *)&stru_A8E960.random[528];
      }
      v86 = this->m_State;
      if ( !*(_BYTE *)(v86 + 1719) )
        goto LABEL_98;
      v87 = *(_DWORD *)(v86 + 1648);
      v88 = *(_DWORD *)(v86 + 1640);
      if ( v88 == -1 )
        goto LABEL_96;
      v89 = v83 - v88;
      if ( v89 >= v87 )
        goto LABEL_97;
      v87 -= v89;
LABEL_96:
      if ( v87 )
LABEL_98:
        v90 = 0;
      else
LABEL_97:
        v90 = 1;
      MovementAI::StepFootClass(this, (v90 != 0) + 1);
      return *(_DWORD *)v96;
    case 3:
      v3->m_Target[0] = *(_DWORD *)&stru_A8E960.waypoints[494];
      *((_DWORD *)this + 10) = *(_DWORD *)&stru_A8E960.waypoints[498];
      *((_DWORD *)this + 11) = *(_DWORD *)&stru_A8E960.waypoints[502];
      Cell::IsPassableAllied(this->m_State, v95);
      v52 = this->m_State;
      *((_DWORD *)this + 20) = 0;
      *((_DWORD *)this + 18) = 0;
      *((_DWORD *)this + 21) = 0;
      *((_DWORD *)this + 19) = 0;
      (*(void (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)v52 + 1348))(v52, 0, 0);
      if ( v3->m_Target[0] == *(_DWORD *)&stru_A8E960.waypoints[494]
        && *((_DWORD *)this + 10) == *(_DWORD *)&stru_A8E960.waypoints[498] )
      {
        goto LABEL_61;
      }
      goto LABEL_62;
    case 4:
    case 5:
      v3->m_Target[0] = *(_DWORD *)&stru_A8E960.waypoints[494];
      *((_DWORD *)this + 10) = *(_DWORD *)&stru_A8E960.waypoints[498];
      *((_DWORD *)this + 11) = *(_DWORD *)&stru_A8E960.waypoints[502];
      if ( a2 )
      {
        v67 = this->m_State;
        *((_DWORD *)this + 20) = 0;
        *((_DWORD *)this + 18) = 0;
        *((_DWORD *)this + 21) = 0;
        *((_DWORD *)this + 19) = 0;
        (*(void (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)v67 + 1348))(v67, 0, 0);
        if ( v3->m_Target[0] != *(_DWORD *)&stru_A8E960.waypoints[494]
          || *((_DWORD *)this + 10) != *(_DWORD *)&stru_A8E960.waypoints[498]
          || *((_DWORD *)this + 11) != *(_DWORD *)&stru_A8E960.waypoints[502] )
        {
          (*(void (__thiscall **)(int, char *))(*(_DWORD *)this->m_State + 244))(this->m_State, (char *)this + 36);
          v3->m_Target[0] = *(_DWORD *)&stru_A8E960.waypoints[494];
          *((_DWORD *)this + 10) = *(_DWORD *)&stru_A8E960.waypoints[498];
          *((_DWORD *)this + 11) = *(_DWORD *)&stru_A8E960.waypoints[502];
        }
        v68 = (_DWORD *)(this->m_State + 1600);
        *v68 = *(_DWORD *)&stru_A8E960.random[528];
        v68[1] = v113;
        v68[2] = 0;
        *(_DWORD *)(this->m_State + 1504) = -1;
        MovementAI::StepFootClass(this, 0);
        result = MovementAI::MainFootClass(this, 0);
        *(_DWORD *)v96 = result;
        return result;
      }
      v98[0] = 0;
      v98[1] = 0;
      v69 = (Object *)CellCoord::To_CellObj((CellCoord *)&dword_87F7E8, v95);
      if ( Object::FindObjectCell(v69, v98, 0) )
      {
        v99 = 0;
        v100 = 0;
        v70 = (Object *)CellCoord::To_CellObj((CellCoord *)&dword_87F7E8, v95);
        ObjectCell = Object::FindObjectCell(v70, &v99, 0);
        if ( (unsigned __int8)Object::IsAlliedWithObjectHouse(*(Object **)(this->m_State + 540), ObjectCell) )
          return *(_DWORD *)v96;
        v72 = (int *)this->m_State;
        v102 = 0;
        v103 = 0;
        v73 = *v72;
        v74 = (Object *)CellCoord::To_CellObj((CellCoord *)&dword_87F7E8, v95);
        v75 = Object::FindObjectCell(v74, &v102, 0);
        (*(void (__thiscall **)(int, int, int, _DWORD))(v73 + 500))(this->m_State, 1, v75, 0);
        return *(_DWORD *)v96;
      }
      if ( *((_DWORD *)CellCoord::To_CellObj((CellCoord *)&dword_87F7E8, v95) + 17) != -1
        && *(_BYTE *)(*(_DWORD *)(*(int *)((char *)&stru_A83CD9.lineTrailer + 3)
                                + 4 * *((_DWORD *)CellCoord::To_CellObj((CellCoord *)&dword_87F7E8, v95) + 17))
                    + 680) )
      {
        v76 = *(_DWORD *)this->m_State;
        v77 = CellCoord::To_CellObj((CellCoord *)&dword_87F7E8, v95);
        (*(void (__thiscall **)(int, int, void *, _DWORD))(v76 + 500))(this->m_State, 1, v77, 0);
        return *(_DWORD *)v96;
      }
      return *(_DWORD *)v96;
    case 6:
      if ( !a2 )
      {
        v56 = (_DWORD *)(*(int (__thiscall **)(int, char *))(*(_DWORD *)this->m_State + 72))(this->m_State, v111);
        v57 = Coord::Subtract(
                (Coord *)&v112,
                *v56 - this->MovementAI_field_18,
                v56[1] - *((_DWORD *)this + 7),
                v56[2] - *((_DWORD *)this + 8));
        v105 = *v57;
        v106 = v57[1];
        v107 = v57[2];
        if ( (int)Coord::Length((Coord *)&v105) < dword_8871E0->BuildSpeed[1] )
        {
          v58 = (int *)(this->m_State + 156);
          v105 = *v58;
          v106 = v58[1];
          v59 = *((_DWORD *)this + 8) - v58[2];
          if ( (int)((HIDWORD(v59) ^ v59) - HIDWORD(v59)) < 2 * *(_DWORD *)&stru_A8E960.waypoints[558] )
          {
            v108 = *v58;
            v109 = v58[1];
            v110 = v58[2];
            if ( Coord::To_Cell((Coord *)&dword_87F7E8, &v108)->landType != 10 )
            {
              (*(void (__stdcall **)(int *))(this->m_Target[1] + 72))(&this->m_Target[1]);
              (*(void (__thiscall **)(int, _DWORD, int))(*(_DWORD *)this->m_State + 1152))(this->m_State, 0, 1);
              return 7;
            }
          }
        }
        if ( (Coord::To_Cell((Coord *)&dword_87F7E8, (_DWORD *)this + 9)->flags & 0x100) == 0
          || (v60 = (int *)(this->m_State + 156),
              v105 = *v60,
              v106 = v60[1],
              v61 = v60[2],
              v62 = Coord::To_Cell((Coord *)&dword_87F7E8, (_DWORD *)this + 9)->level[0],
              v97[0] = 1,
              (int)abs32(v61 / *(_DWORD *)&stru_A8E960.waypoints[558] - v62) <= 2) )
        {
          v97[0] = 0;
        }
        v94 = v97[0];
        v63 = Coord::To_Cell((Coord *)&dword_87F7E8, (_DWORD *)this + 9);
        Cell::ApplyDamage((Cell *)v63, (int)&stru_A8E960.waypoints[494], 1, 1, v94);
        v3->m_Target[0] = *(_DWORD *)&stru_A8E960.waypoints[494];
        *((_DWORD *)this + 10) = *(_DWORD *)&stru_A8E960.waypoints[498];
        *((_DWORD *)this + 11) = *(_DWORD *)&stru_A8E960.waypoints[502];
        v64 = this->m_State;
        *((_DWORD *)this + 20) = 0;
        *((_DWORD *)this + 18) = 0;
        *((_DWORD *)this + 21) = 0;
        *((_DWORD *)this + 19) = 0;
        (*(void (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)v64 + 1348))(v64, 0, 0);
        if ( v3->m_Target[0] == *(_DWORD *)&stru_A8E960.waypoints[494]
          && *((_DWORD *)this + 10) == *(_DWORD *)&stru_A8E960.waypoints[498] )
        {
LABEL_61:
          if ( *((_DWORD *)this + 11) == *(_DWORD *)&stru_A8E960.waypoints[502] )
            return *(_DWORD *)v96;
        }
LABEL_62:
        (*(void (__thiscall **)(int, MovementAI *))(*(_DWORD *)this->m_State + 244))(this->m_State, v3);
        v3->m_Target[0] = *(_DWORD *)&stru_A8E960.waypoints[494];
        v3->m_Target[1] = *(_DWORD *)&stru_A8E960.waypoints[498];
        v3->m_Target[2] = *(_DWORD *)&stru_A8E960.waypoints[502];
        return *(_DWORD *)v96;
      }
      v3->m_Target[0] = *(_DWORD *)&stru_A8E960.waypoints[494];
      *((_DWORD *)this + 10) = *(_DWORD *)&stru_A8E960.waypoints[498];
      v53 = *(_DWORD *)&stru_A8E960.waypoints[502];
      *((_DWORD *)this + 20) = 0;
      *((_DWORD *)this + 18) = 0;
      *((_DWORD *)this + 11) = v53;
      v54 = this->m_State;
      *((_DWORD *)this + 21) = 0;
      *((_DWORD *)this + 19) = 0;
      (*(void (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)v54 + 1348))(v54, 0, 0);
      if ( v3->m_Target[0] != *(_DWORD *)&stru_A8E960.waypoints[494]
        || *((_DWORD *)this + 10) != *(_DWORD *)&stru_A8E960.waypoints[498]
        || *((_DWORD *)this + 11) != *(_DWORD *)&stru_A8E960.waypoints[502] )
      {
        (*(void (__thiscall **)(int, char *))(*(_DWORD *)this->m_State + 244))(this->m_State, (char *)this + 36);
        v3->m_Target[0] = *(_DWORD *)&stru_A8E960.waypoints[494];
        *((_DWORD *)this + 10) = *(_DWORD *)&stru_A8E960.waypoints[498];
        *((_DWORD *)this + 11) = *(_DWORD *)&stru_A8E960.waypoints[502];
      }
      v55 = (_DWORD *)(this->m_State + 1600);
      *v55 = *(_DWORD *)&stru_A8E960.random[528];
      v55[1] = v109;
      v55[2] = 0;
      *(_DWORD *)(this->m_State + 1504) = -1;
      MovementAI::StepFootClass(this, 0);
      result = MovementAI::MainFootClass(this, 0);
      *(_DWORD *)v96 = result;
      break;
    default:
      return *(_DWORD *)v96;
  }
  return result;
}
