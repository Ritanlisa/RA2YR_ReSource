// GENERATED raw decompilation, this-relative refs rewritten to this->Member
// by tools/csp_export/rewrite_member_refs.py (mechanical, CSP member table).
// REFERENCE ONLY - not compiled. Width-matched rewrites; unmatched kept raw.

// ==== 0x005B0060  MechLocomotionClass::ShortFunc_5B0060  this=MechLocomotionClass  sig=csp ====
int __stdcall JumpjetLocomotionClass::ShortFunc_5B0060(MechLocomotionClass *this)
{
  BuildingClass::ProcessMission((int)this - 4, 1); /*0x5b006a*/
  return (*(int (__stdcall **)(MechLocomotionClass *))(*(_DWORD *)this->LocomotionClass + 16))(this); /*0x5b0075*/
}



// ==== 0x005B0080  MechLocomotionClass::ConvertCoordToCell_1  this=MechLocomotionClass  sig=csp ====
int __stdcall JumpjetLocomotionClass::ConvertCoordToCell_1(MechLocomotionClass *this, int a2, int a3, int a4)
{
  int result; // eax
  int v5; // ecx
  int v6; // edx

  result = (*((int (__thiscall **)(FootClass *))this->?->TechnoClass + 223))(this->?); /*0x5b008a*/
  if ( !(_BYTE)result ) /*0x5b0092*/
  {
    result = (*((int (__thiscall **)(FootClass *))this->?->TechnoClass + 224))(this->?); /*0x5b0099*/
    if ( !(_BYTE)result ) /*0x5b00a1*/
    {
      result = (*((int (__thiscall **)(FootClass *))this->?->TechnoClass + 117))(this->?); /*0x5b00a8*/
      if ( !(_BYTE)result ) /*0x5b00b0*/
      {
        result = (*((int (__thiscall **)(FootClass *))this->?->TechnoClass + 118))(this->?); /*0x5b00b7*/
        if ( !(_BYTE)result ) /*0x5b00bf*/
        {
          v5 = a3; /*0x5b00c5*/
          v6 = a4; /*0x5b00ca*/
          this->? = a2; /*0x5b00dd*/
          this->MovingDestination[0] = v5; /*0x5b00e4*/
          this->MovingDestination[1] = v6; /*0x5b00ec*/
          result = (int)Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], &a2); /*0x5b00ef*/
          if ( (*(_DWORD *)(result + 320) & 0x100) != 0 ) /*0x5b00fe*/
          {
            result = Coord::ScaleToScreenY((Coord *)0x3C); /*0x5b0105*/
            this->MovingDestination[1] += result; /*0x5b010a*/
          }
          LOBYTE(this->HeadToCoord[2]) = 1; /*0x5b010d*/
        }
      }
    }
  }
  return result; /*0x5b0111*/
}



// ==== 0x005B0120  MechLocomotionClass::SyncMatrixTransformState  this=MechLocomotionClass  sig=csp ====
int __stdcall JumpjetLocomotionClass::SyncMatrixTransformState(MechLocomotionClass *this)
{
  int result; // eax

  result = (int)this; /*0x5b0120*/
  this->? = g_MissionQueueFrame.localVariables[227]; /*0x5b012d*/
  this->MovingDestination[0] = g_MissionQueueFrame.localVariables[228]; /*0x5b0136*/
  this->MovingDestination[1] = g_MissionQueueFrame.localVariables[229]; /*0x5b013f*/
  if ( this->MovingDestination[2] == g_MissionQueueFrame.localVariables[227] /*0x5b0165*/
    && this->HeadToCoord[0] == g_MissionQueueFrame.localVariables[228]
    && this->HeadToCoord[1] == g_MissionQueueFrame.localVariables[229] )
  {
    LOBYTE(this->HeadToCoord[2]) = 0; /*0x5b0167*/
  }
  return result; /*0x5b016b*/
}



// ==== 0x005B0170  MechLocomotionClass::UpdateFacingDirection_1  this=MechLocomotionClass  sig=csp ====
char __stdcall JumpjetLocomotionClass::UpdateFacingDirection_1(MechLocomotionClass *this, int a2)
{
  return FacingClass::Update((char *)this->?->?, &a2); /*0x5b018f*/
}



// ==== 0x005B01A0  MechLocomotionClass::InitMultiFieldArray  this=MechLocomotionClass  sig=csp ====
int __stdcall JumpjetLocomotionClass::InitMultiFieldArray(MechLocomotionClass *this, int a2, int a3, int a4)
{
  this->MovingDestination[2] = a2; /*0x5b01b4*/
  this->HeadToCoord[0] = a3; /*0x5b01b6*/
  this->HeadToCoord[1] = a4; /*0x5b01b9*/
  return a2; /*0x5b01bc*/
}



// ==== 0x005B01C0  BuildingClass::ProcessMission  this=BuildingClass  sig=csp ====
void __thiscall BuildingClass_ProcessMission(int this, char a2)
{
  _DWORD *v3; // esi
  _DWORD *v4; // ecx
  int v5; // edx
  int v6; // eax
  _DWORD *v7; // edi
  int v8; // eax
  int v9; // ecx
  int v10; // ecx
  _DWORD *v11; // eax
  int *v12; // eax
  _BYTE *v13; // ecx
  int v14; // eax
  int v15; // ecx
  _BYTE *v16; // ecx
  _DWORD *v17; // eax
  int v18; // edx
  int v19; // esi
  int v20; // eax
  int v21; // eax
  int v22; // ecx
  _DWORD *v23; // eax
  _BYTE *v24; // ecx
  _DWORD *v25; // eax
  int v26; // edx
  int v27; // esi
  int v28; // eax
  int v29; // eax
  int v30; // eax
  int v31; // edi
  int *v32; // eax
  int v33; // eax
  _DWORD *v34; // ecx
  _DWORD *v35; // edx
  int v36; // ecx
  int v37; // eax
  int v38; // eax
  int v39; // edx
  int v40; // esi
  int v41; // edi
  _DWORD *v42; // eax
  int *Coords; // eax
  int v44; // edx
  int v45; // ecx
  _DWORD *v46; // esi
  int v47; // edx
  _DWORD *v48; // edi
  int v49; // eax
  int v50; // eax
  int v51; // edx
  int v52; // edi
  int *v53; // eax
  int GroundHeight; // esi
  int v55; // edi
  int v56; // edx
  int v57; // ecx
  int v58; // ecx
  int v59; // eax
  int v60; // esi
  int v61; // edx
  _DWORD *v62; // ecx
  int v63; // eax
  _BYTE *v64; // ecx
  int v65; // esi
  void *v66; // eax
  int v67; // eax
  int v68; // esi
  _DWORD *v69; // eax
  _DWORD *v70; // ecx
  _DWORD *v71; // esi
  _DWORD *v72; // edx
  _DWORD *v73; // eax
  int v74; // edi
  int v75; // ecx
  int v76; // edx
  int v77; // eax
  int v78; // eax
  double v79; // st7
  int *v80; // ecx
  __int64 v81; // rax
  int *v82; // eax
  __int64 v83; // rax
  int v84; // eax
  _DWORD *v85; // edx
  int v86; // ecx
  int v87; // esi
  int v88; // edx
  int v89; // eax
  int v90; // ecx
  int v91; // eax
  char v92; // cl
  char v93; // al
  wchar_t *v94; // esi
  wchar_t *v95; // eax
  int v96; // ecx
  wchar_t **v97; // edx
  int v98; // ecx
  _DWORD *v99; // eax
  double v100; // st7
  __int16 v101; // ax
  int v102; // edx
  _DWORD *v103; // eax
  int Object; // esi
  _DWORD *v105; // edx
  int v106; // esi
  void *v107; // eax
  _DWORD *v108; // eax
  char v109; // al
  _DWORD *v110; // ecx
  int v111; // eax
  int v112; // esi
  _WORD *v113; // eax
  int v114; // esi
  __int16 v115; // cx
  int v116; // eax
  int v117; // esi
  _BYTE *v118; // ecx
  int *v119; // eax
  int v120; // ecx
  double v121; // st7
  __int16 v122; // ax
  int v123; // ecx
  double *v124; // ecx
  int v125; // esi
  int v126; // edi
  _DWORD *v127; // eax
  int v128; // ecx
  int v129; // eax
  double v130; // st7
  int v131; // eax
  int v132; // ecx
  int v133; // eax
  _DWORD *v134; // ecx
  int v135; // esi
  int v136; // edi
  _WORD *v137; // eax
  __int64 v138; // rax
  int v139; // ecx
  int v140; // eax
  int v141; // esi
  _WORD *v142; // eax
  int v143; // esi
  __int16 v144; // cx
  int v145; // eax
  int v146; // esi
  _BYTE *v147; // ecx
  int v148; // eax
  int v149; // ecx
  int *v150; // eax
  int v151; // ecx
  double v152; // st7
  __int16 v153; // ax
  int v154; // ecx
  __int16 v155; // si
  int v156; // ecx
  int *v157; // eax
  int *v158; // edx
  int v159; // edi
  double v160; // st7
  int v161; // esi
  double v162; // st7
  _DWORD *v163; // esi
  _DWORD *v164; // eax
  int *v165; // edx
  void *v166; // eax
  int v167; // eax
  char v168; // cl
  int LandHeight; // [esp+20h] [ebp-74h]
  char v170; // [esp+24h] [ebp-70h]
  char v171; // [esp+24h] [ebp-70h]
  char v172; // [esp+28h] [ebp-6Ch]
  char v173; // [esp+28h] [ebp-6Ch]
  int v174; // [esp+2Ch] [ebp-68h]
  char v175; // [esp+3Fh] [ebp-55h]
  _DWORD *v176; // [esp+40h] [ebp-54h] BYREF
  double v177; // [esp+44h] [ebp-50h] BYREF
  int v178; // [esp+4Ch] [ebp-48h]
  double v179; // [esp+54h] [ebp-40h] BYREF
  double v180; // [esp+5Ch] [ebp-38h] BYREF
  int v181; // [esp+64h] [ebp-30h]
  int v182; // [esp+70h] [ebp-24h] BYREF
  int v183; // [esp+74h] [ebp-20h]
  int v184; // [esp+78h] [ebp-1Ch]
  int v185; // [esp+7Ch] [ebp-18h] BYREF
  int v186; // [esp+80h] [ebp-14h]
  int v187; // [esp+84h] [ebp-10h]
  int v188; // [esp+88h] [ebp-Ch] BYREF
  int v189; // [esp+8Ch] [ebp-8h]
  int v190; // [esp+90h] [ebp-4h]

  if ( TimerClass::Active(*(_DWORD *)(this + 12) + 904) ) /*0x5b01d7*/
    return; /*0x5b01de*/
  if ( *(_DWORD *)(this + 36) != dword_ABEE10 /*0x5b0210*/
    || *(_DWORD *)(this + 40) != dword_ABEE14
    || *(_DWORD *)(this + 44) != dword_ABEE18 )
  {
    v125 = *(_DWORD *)(this + 36); /*0x5b1190*/
    v126 = *(_DWORD *)(this + 40); /*0x5b1193*/
    v127 = (_DWORD *)(*(int (__thiscall **)(_DWORD, int *))(**(_DWORD **)(this + 12) + 72))( /*0x5b119d*/
                       *(_DWORD *)(this + 12),
                       &v188);
    v128 = *v127 - v125; /*0x5b11a5*/
    v129 = v127[1] - v126; /*0x5b11a7*/
    v182 = v128; /*0x5b11a9*/
    v183 = v129; /*0x5b11ad*/
    v130 = Math::Sqrt((double)v129 * (double)v129 + (double)v128 * (double)v128); /*0x5b11cd*/
    v131 = Math::RoundToInt(v130); /*0x5b11d5*/
    v132 = *(_DWORD *)(this + 12); /*0x5b11da*/
    if ( v131 < 16 ) /*0x5b11e0*/
    {
      (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v132 + 292))(v132, 0); /*0x5b11ea*/
      v133 = *(_DWORD *)(this + 12); /*0x5b11f0*/
      if ( *(_DWORD *)(v133 + 1504) == -1 ) /*0x5b11fc*/
        *(_DWORD *)(v133 + 1508) = -1; /*0x5b11fe*/
      qmemcpy((void *)(*(_DWORD *)(this + 12) + 1504), (const void *)(*(_DWORD *)(this + 12) + 1508), 0x5Cu); /*0x5b1218*/
      *(_DWORD *)(*(_DWORD *)(this + 12) + 1596) = -1; /*0x5b121d*/
      (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 12) + 436))(*(_DWORD *)(this + 12), this + 36); /*0x5b1230*/
      LOWORD(v179) = *(_DWORD *)(this + 36) / 256; /*0x5b1247*/
      WORD1(v179) = *(_DWORD *)(this + 40) / 256; /*0x5b125b*/
      *(_DWORD *)(*(_DWORD *)(this + 12) + 1368) = LODWORD(v179); /*0x5b1267*/
      (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(this + 12) + 460))(*(_DWORD *)(this + 12), 0); /*0x5b1272*/
      BuildingClass::UpdateMovingPosition(&dword_ABEE10); /*0x5b127f*/
      v134 = *(_DWORD **)(this + 12); /*0x5b1284*/
      if ( v134[376] == -1 ) /*0x5b128e*/
        (*(void (__thiscall **)(_DWORD *, _DWORD, _DWORD))(*v134 + 1348))(v134, 0, 0); /*0x5b1296*/
      *(_BYTE *)(*(_DWORD *)(this + 12) + 1718) = 1; /*0x5b129f*/
      *(_BYTE *)(*(_DWORD *)(this + 12) + 1719) = 0; /*0x5b12a9*/
      if ( *(_DWORD *)(this + 24) == dword_ABEE10 /*0x5b1337*/
        && *(_DWORD *)(this + 28) == dword_ABEE14
        && *(_DWORD *)(this + 32) == dword_ABEE18
        || (v135 = *(_DWORD *)(this + 24) / 256,
            v136 = *(_DWORD *)(this + 28) / 256,
            v137 = (_WORD *)(*(int (__thiscall **)(_DWORD, int *))(**(_DWORD **)(this + 12) + 440))(
                              *(_DWORD *)(this + 12),
                              &v182),
            *v137 == (_WORD)v135)
        && v137[1] == (_WORD)v136
        && (v138 = *(_DWORD *)((*(int (__thiscall **)(_DWORD, int *, _DWORD))(**(_DWORD **)(this + 12) + 76))(
                                 *(_DWORD *)(this + 12),
                                 &v188,
                                 0)
                             + 8)
                 - *(_DWORD *)(this + 32),
            (int)((HIDWORD(v138) ^ v138) - HIDWORD(v138)) < 2 * dword_ABEE50) )
      {
        (*(void (__thiscall **)(_DWORD, _DWORD, int))(**(_DWORD **)(this + 12) + 1152))(*(_DWORD *)(this + 12), 0, 1); /*0x5b1342*/
        (*(void (__thiscall **)(_DWORD, _DWORD, _DWORD))(**(_DWORD **)(this + 12) + 1348))(*(_DWORD *)(this + 12), 0, 0); /*0x5b1351*/
        (*(void (__stdcall **)(int))(*(_DWORD *)(this + 4) + 72))(this + 4); /*0x5b135e*/
        *(_BYTE *)(this + 48) = 0; /*0x5b1361*/
      }
      (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 12) + 396))(*(_DWORD *)(this + 12), 2); /*0x5b136c*/
      v139 = *(_DWORD *)(this + 12); /*0x5b1372*/
      if ( *(_BYTE *)(v139 + 144) && !*(_BYTE *)(v139 + 129) && !*(_BYTE *)(v139 + 141) ) /*0x5b1391*/
      {
        v140 = *(_DWORD *)(v139 + 1504); /*0x5b139f*/
        if ( v140 != -1 && v140 != 8 ) /*0x5b13b1*/
        {
          v141 = *(_DWORD *)(v139 + 1504); /*0x5b13b7*/
          v142 = (_WORD *)(*(int (__thiscall **)(int, int *))(*(_DWORD *)v139 + 440))(v139, &v182); /*0x5b13c0*/
          v143 = v141 & 7; /*0x5b13c6*/
          v144 = v142[1] + HIWORD(dword_89F688[v143]); /*0x5b13df*/
          LOWORD(v179) = *v142 + LOWORD(dword_89F688[v143]); /*0x5b13e3*/
          WORD1(v179) = v144; /*0x5b13ec*/
          LODWORD(v180) = LODWORD(v179); /*0x5b13fb*/
          v145 = *((_DWORD *)CellCoord::To_CellObj(&dword_87F7E8, (__int16 *)&v180) + 17); /*0x5b1404*/
          if ( v145 != -1 ) /*0x5b140a*/
          {
            v146 = *((_DWORD *)dword_A83D84 + v145); /*0x5b1412*/
            if ( (*(_BYTE *)((*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 12) + 132))(*(_DWORD *)(this + 12)) /*0x5b1438*/
                           + 3368)
               || TechnoTypeClass::HasVoiceResponse(*(float **)(this + 12), 17))
              && !*(_DWORD *)(v146 + 660) )
            {
              *(_BYTE *)(*(_DWORD *)(this + 12) + 1717) = 1; /*0x5b1445*/
              if ( *(_BYTE *)((*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 12) + 132))(*(_DWORD *)(this + 12)) /*0x5b1457*/
                            + 3371) )
                *(_DWORD *)(*(_DWORD *)(this + 12) + 820) = -1138501878; /*0x5b1464*/
            }
          }
        }
        v147 = *(_BYTE **)(this + 12); /*0x5b146e*/
        if ( v147[144] && !v147[129] ) /*0x5b147f*/
        {
          (*(void (__thiscall **)(_BYTE *, int))(*(_DWORD *)v147 + 292))(v147, 1); /*0x5b1491*/
          *(_BYTE *)(*(_DWORD *)(this + 12) + 1674) = 0; /*0x5b149a*/
        }
      }
      return; /*0x5b14a7*/
    }
    (*(void (__thiscall **)(int, _DWORD, int))(*(_DWORD *)v132 + 1348))(v132, 0, 1072693248); /*0x5b14b3*/
    v148 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 12) + 1336))(*(_DWORD *)(this + 12)); /*0x5b14be*/
    v149 = *(_DWORD *)(this + 12); /*0x5b14c4*/
    LODWORD(v177) = v148; /*0x5b14c7*/
    v150 = (int *)(*(int (__thiscall **)(int, int *))(*(_DWORD *)v149 + 72))(v149, &v188); /*0x5b14d2*/
    v151 = *v150; /*0x5b14d8*/
    LODWORD(v180) = *(_DWORD *)(this + 36); /*0x5b14da*/
    LODWORD(v179) = v151; /*0x5b14de*/
    v152 = Math::CalcAngle((double)v150[1] - (double)*(int *)(this + 40), (double)SLODWORD(v180) - (double)v151); /*0x5b14fd*/
    v153 = Math::RoundToInt((v152 - 1.570796326794897) * -10430.06004058427); /*0x5b1511*/
    v154 = *(_DWORD *)(this + 4); /*0x5b1516*/
    v155 = v153; /*0x5b1519*/
    LOWORD(v180) = v153; /*0x5b151c*/
    (*(void (__stdcall **)(int, _DWORD))(v154 + 76))(this + 4, LODWORD(v180)); /*0x5b152a*/
    if ( TimerClass::Active(*(_DWORD *)(this + 12) + 904) ) /*0x5b1536*/
      return; /*0x5b153d*/
    if ( (*(unsigned __int8 (__thiscall **)(_DWORD))(**(_DWORD **)(this + 12) + 192))(*(_DWORD *)(this + 12)) ) /*0x5b1548*/
    {
      v156 = *(_DWORD *)(this + 12); /*0x5b1552*/
      v180 = *(double *)(v156 + 156); /*0x5b1561*/
      v181 = *(_DWORD *)(v156 + 164); /*0x5b156f*/
      (*(void (__thiscall **)(int, double *))(*(_DWORD *)v156 + 244))(v156, &v180); /*0x5b157a*/
      *(_BYTE *)(*(_DWORD *)(this + 12) + 1718) = 0; /*0x5b1583*/
      *(_BYTE *)(*(_DWORD *)(this + 12) + 1719) = 0; /*0x5b158d*/
    }
    v157 = (int *)(*(int (__thiscall **)(_DWORD, double *))(**(_DWORD **)(this + 12) + 440))( /*0x5b159e*/
                    *(_DWORD *)(this + 12),
                    &v180);
    v158 = (int *)(*(_DWORD *)(this + 12) + 156); /*0x5b15a9*/
    v176 = (_DWORD *)*v157; /*0x5b15af*/
    v188 = *v158; /*0x5b15b5*/
    v189 = v158[1]; /*0x5b15bc*/
    v159 = v158[2]; /*0x5b15c0*/
    LODWORD(v180) = v155 - 0x3FFF; /*0x5b15cc*/
    v180 = (double)SLODWORD(v180) * -0.00009587672516830327; /*0x5b15da*/
    v179 = (double)SLODWORD(v177); /*0x5b15ec*/
    v177 = (double)v189; /*0x5b15f4*/
    v160 = Math::SinCos(v180); /*0x5b15f8*/
    v161 = Math::RoundToInt(v177 - v160 * v179); /*0x5b160e*/
    v162 = Math::ArcTan2(v180); /*0x5b1616*/
    v185 = Math::RoundToInt(v162 * v179 + (double)v188); /*0x5b162b*/
    v186 = v161; /*0x5b162f*/
    v187 = v159; /*0x5b163a*/
    LOWORD(v179) = v185 / 256; /*0x5b1658*/
    WORD1(v179) = v161 / 256; /*0x5b165d*/
    v182 = LODWORD(v179); /*0x5b1666*/
    if ( v176 == (_DWORD *)LODWORD(v179) ) /*0x5b166a*/
    {
      v167 = *(_DWORD *)(this + 12); /*0x5b175a*/
      v168 = *(_BYTE *)(v167 + 116); /*0x5b175d*/
      *(_BYTE *)(v167 + 116) = 0; /*0x5b1760*/
      v175 = v168; /*0x5b1764*/
      (*(void (__thiscall **)(_DWORD, int *))(**(_DWORD **)(this + 12) + 436))(*(_DWORD *)(this + 12), &v185); /*0x5b1772*/
      (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(this + 12) + 460))(*(_DWORD *)(this + 12), 0); /*0x5b177f*/
      *(_BYTE *)(*(_DWORD *)(this + 12) + 116) = v175; /*0x5b178e*/
      *(_BYTE *)(*(_DWORD *)(this + 12) + 1674) = 0; /*0x5b1795*/
      return; /*0x5b166c*/
    }
    (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(this + 12) + 292))(*(_DWORD *)(this + 12), 0); /*0x5b167e*/
    (*(void (__thiscall **)(_DWORD, int *))(**(_DWORD **)(this + 12) + 436))(*(_DWORD *)(this + 12), &v185); /*0x5b168e*/
    v163 = CellCoord::To_CellObj(&dword_87F7E8, (__int16 *)&v176); /*0x5b16ad*/
    v164 = CellCoord::To_CellObj(&dword_87F7E8, (__int16 *)&v182); /*0x5b16af*/
    if ( *((char *)v164 + 283) == *((char *)v163 + 283) - 4 ) /*0x5b16cc*/
    {
      if ( (v164[80] & 0x100) == 0 ) /*0x5b16d4*/
        goto LABEL_145; /*0x5b16d4*/
      *(_BYTE *)(*(_DWORD *)(this + 12) + 140) = 1; /*0x5b16d9*/
    }
    if ( (v164[80] & 0x100) != 0 ) /*0x5b16e6*/
    {
LABEL_147:
      (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(this + 12) + 460))(*(_DWORD *)(this + 12), 0); /*0x5b16fa*/
      (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 12) + 292))(*(_DWORD *)(this + 12), 1); /*0x5b170e*/
      v165 = (int *)(*(_DWORD *)(this + 12) + 156); /*0x5b1717*/
      v188 = *v165; /*0x5b171f*/
      v189 = v165[1]; /*0x5b172b*/
      v190 = v165[2]; /*0x5b1737*/
      v166 = Coord::To_Cell(&dword_87F7E8, &v188); /*0x5b173b*/
      BuildingClass::CreateIdleAnim((int)v166); /*0x5b1742*/
LABEL_148:
      *(_BYTE *)(*(_DWORD *)(this + 12) + 1674) = 0; /*0x5b1747*/
      return; /*0x5b174a*/
    }
LABEL_145:
    if ( (v163[80] & 0x100) != 0 ) /*0x5b16ee*/
      *(_BYTE *)(*(_DWORD *)(this + 12) + 140) = 0; /*0x5b16f3*/
    goto LABEL_147; /*0x5b16f3*/
  }
  v3 = (_DWORD *)(this + 24); /*0x5b0219*/
  if ( *(_DWORD *)(this + 24) == dword_ABEE10 /*0x5b0228*/
    && *(_DWORD *)(this + 28) == dword_ABEE14
    && *(_DWORD *)(this + 32) == dword_ABEE18 )
  {
    v124 = *(double **)(this + 12); /*0x5b1154*/
    if ( v124[175] > 0.0 ) /*0x5b1168*/
    {
      (*(void (__thiscall **)(double *, _DWORD, _DWORD))(*(_DWORD *)v124 + 1348))(v124, 0, 0); /*0x5b1174*/
      *(_BYTE *)(*(_DWORD *)(this + 12) + 1674) = 0; /*0x5b117d*/
      return; /*0x5b118a*/
    }
    goto LABEL_148; /*0x5b1168*/
  }
  v4 = *(_DWORD **)(this + 12); /*0x5b022e*/
  v176 = v4; /*0x5b0231*/
  if ( v4[376] == -1 ) /*0x5b023c*/
  {
    v5 = v4[400]; /*0x5b0242*/
    v6 = v4[402]; /*0x5b0248*/
    v7 = v4 + 400; /*0x5b024e*/
    if ( v5 != -1 ) /*0x5b0257*/
    {
      if ( (int)dword_A8ED84 - v5 >= v6 ) /*0x5b0263*/
      {
LABEL_14:
        v8 = Math::RoundToInt(*((double *)dword_8871E0 + 748) * 900.0); /*0x5b0280*/
        v9 = v189; /*0x5b029d*/
        *v7 = dword_A8ED84; /*0x5b02a1*/
        v7[1] = v9; /*0x5b02a3*/
        v7[2] = v8; /*0x5b02a6*/
        v10 = *(_DWORD *)(this + 12); /*0x5b02b2*/
        LOWORD(v176) = *v3 / 256; /*0x5b02bc*/
        HIWORD(v176) = *(_DWORD *)(this + 28) / 256; /*0x5b02d2*/
        if ( !FootClass::MovementStep(v10, (int)v7, (int)v176, 0, 0, v174) ) /*0x5b02dc*/
        {
          if ( (*(unsigned __int8 (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 12) + 716))( /*0x5b02ef*/
                 *(_DWORD *)(this + 12),
                 this + 24) )
          {
            v11 = (_DWORD *)(*(int (__thiscall **)(_DWORD, int *))(**(_DWORD **)(this + 12) + 72))( /*0x5b0307*/
                              *(_DWORD *)(this + 12),
                              &v188);
            v12 = Coord::Subtract(&v182, *v11 - *v3, v11[1] - *(_DWORD *)(this + 28), v11[2] - *(_DWORD *)(this + 32)); /*0x5b0327*/
            v185 = *v12; /*0x5b032e*/
            v186 = v12[1]; /*0x5b0339*/
            v187 = v12[2]; /*0x5b0340*/
            if ( (int)Coord::Length(&v185) >= *((_DWORD *)dword_8871E0 + 1478) /*0x5b035a*/
              || (v13 = *(_BYTE **)(this + 12), v13[1048]) )
            {
              v14 = *(_DWORD *)(this + 12); /*0x5b0375*/
              v15 = *(_DWORD *)(v14 + 1612); /*0x5b0378*/
              if ( v15 ) /*0x5b0380*/
              {
                *(_DWORD *)(v14 + 1612) = v15 - 1; /*0x5b0383*/
              }
              else
              {
                if ( *(_BYTE *)(v14 + 1674) ) /*0x5b038e*/
                  PlayVocClass(*((_DWORD *)dword_8871E0 + 448), 0x2000, 1.0, 0); /*0x5b03aa*/
                *(_BYTE *)(*(_DWORD *)(this + 12) + 1674) = 0; /*0x5b03b2*/
                LOWORD(v176) = *v3 / 256; /*0x5b03c7*/
                HIWORD(v176) = *(_DWORD *)(this + 28) / 256; /*0x5b03db*/
                LODWORD(v177) = v176; /*0x5b03e4*/
                v16 = *(_BYTE **)(this + 12); /*0x5b03e8*/
                if ( v16[981] ) /*0x5b03eb*/
                {
                  v17 = (_DWORD *)(*(int (__thiscall **)(_BYTE *, int *, _DWORD))(*(_DWORD *)v16 + 76))(v16, &v188, 0); /*0x5b0402*/
                  LOWORD(v176) = *v17 / 256; /*0x5b0415*/
                  v18 = *(_DWORD *)(this + 12); /*0x5b0426*/
                  HIWORD(v176) = v17[1] / 256; /*0x5b042c*/
                  v19 = v18; /*0x5b0435*/
                  LODWORD(v179) = v176; /*0x5b0437*/
                  v176 = (_DWORD *)v18; /*0x5b043d*/
                  v172 = (*(int (__thiscall **)(int))(*(_DWORD *)v18 + 800))(v18); /*0x5b044d*/
                  v170 = BYTE1(*((_DWORD *)CellCoord::To_CellObj(&dword_87F7E8, (__int16 *)&v177) + 80)) & 1; /*0x5b0469*/
                  v20 = (*(int (__thiscall **)(int))(*(_DWORD *)v19 + 188))(v19); /*0x5b046c*/
                  v21 = (*(int (__thiscall **)(int, int))(*(_DWORD *)v19 + 132))(v19, v20); /*0x5b0477*/
                  if ( !MapSeed::CheckTileMatch( /*0x5b0493*/
                          &dword_87F7E8,
                          (__int16 *)&v179,
                          (__int16 *)&v177,
                          *(_DWORD *)(v21 + 1460),
                          0,
                          v170,
                          v172) )
                    (*(void (__thiscall **)(_DWORD, _DWORD, int))(**(_DWORD **)(this + 12) + 1152))( /*0x5b04a5*/
                      *(_DWORD *)(this + 12),
                      0,
                      1);
                }
                v22 = *(_DWORD *)(*(_DWORD *)(this + 12) + 692); /*0x5b04ae*/
                if ( v22 ) /*0x5b04b6*/
                {
                  v23 = (_DWORD *)(*(int (__thiscall **)(int, int *, _DWORD))(*(_DWORD *)v22 + 76))( /*0x5b04c4*/
                                    v22,
                                    &v188,
                                    *(_DWORD *)(this + 12));
                  LOWORD(v176) = *v23 / 256; /*0x5b04d7*/
                  HIWORD(v176) = v23[1] / 256; /*0x5b04eb*/
                  LODWORD(v179) = v176; /*0x5b04f4*/
                  v24 = *(_BYTE **)(this + 12); /*0x5b04f8*/
                  if ( v24[981] ) /*0x5b04fb*/
                  {
                    v25 = (_DWORD *)(*(int (__stdcall **)(int *, _DWORD))(*(_DWORD *)v24 + 76))( /*0x5b0511*/
                                      &v188,
                                      *(_DWORD *)(this + 12));
                    LOWORD(v176) = *v25 / 256; /*0x5b0524*/
                    v26 = *(_DWORD *)(this + 12); /*0x5b0535*/
                    HIWORD(v176) = v25[1] / 256; /*0x5b053b*/
                    v27 = v26; /*0x5b0544*/
                    LODWORD(v180) = v176; /*0x5b0546*/
                    v176 = (_DWORD *)v26; /*0x5b054c*/
                    v173 = (*(int (__thiscall **)(int))(*(_DWORD *)v26 + 800))(v26); /*0x5b055c*/
                    v171 = BYTE1(*((_DWORD *)CellCoord::To_CellObj(&dword_87F7E8, (__int16 *)&v179) + 80)) & 1; /*0x5b0578*/
                    v28 = (*(int (__thiscall **)(int))(*(_DWORD *)v27 + 188))(v27); /*0x5b057a*/
                    v29 = (*(int (__thiscall **)(int, int))(*(_DWORD *)v27 + 132))(v27, v28); /*0x5b0585*/
                    if ( !MapSeed::CheckTileMatch( /*0x5b05a1*/
                            &dword_87F7E8,
                            (__int16 *)&v180,
                            (__int16 *)&v179,
                            *(_DWORD *)(v29 + 1460),
                            v27,
                            v171,
                            v173) )
                      (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(this + 12) + 968))( /*0x5b05b1*/
                        *(_DWORD *)(this + 12),
                        0);
                  }
                }
              }
            }
            else
            {
              (*(void (__thiscall **)(_BYTE *, _DWORD, int))(*(_DWORD *)v13 + 1152))(v13, 0, 1); /*0x5b036a*/
            }
            (*(void (__thiscall **)(_DWORD, _DWORD, _DWORD))(**(_DWORD **)(this + 12) + 1348))( /*0x5b05c0*/
              *(_DWORD *)(this + 12),
              0,
              0);
            (*(void (__stdcall **)(int))(*(_DWORD *)(this + 4) + 72))(this + 4); /*0x5b05cd*/
            *(_BYTE *)(this + 48) = 0; /*0x5b05d0*/
            return; /*0x5b05da*/
          }
LABEL_37:
          (*(void (__thiscall **)(_DWORD, _DWORD, int))(**(_DWORD **)(this + 12) + 1152))(*(_DWORD *)(this + 12), 0, 1); /*0x5b0871*/
          return; /*0x5b0888*/
        }
        *(_DWORD *)(*(_DWORD *)(this + 12) + 1612) = 10; /*0x5b05e0*/
        goto LABEL_32; /*0x5b05e0*/
      }
      v6 -= (int)dword_A8ED84 - v5; /*0x5b0265*/
      v4 = v176; /*0x5b0267*/
    }
    if ( v6 ) /*0x5b026d*/
    {
      (*(void (__thiscall **)(_DWORD *))(*v4 + 1352))(v4); /*0x5b0271*/
      return; /*0x5b027d*/
    }
    goto LABEL_14; /*0x5b026d*/
  }
LABEL_32:
  v30 = *(_DWORD *)(this + 12); /*0x5b05ea*/
  v31 = *(_DWORD *)(v30 + 1504); /*0x5b05ed*/
  if ( v31 == 8 ) /*0x5b05f6*/
  {
    v32 = (int *)(v30 + 156); /*0x5b05fc*/
    v185 = *v32; /*0x5b0603*/
    v186 = v32[1]; /*0x5b060f*/
    v187 = v32[2]; /*0x5b061b*/
    v33 = *((__int16 *)Coord::To_Cell(&dword_87F7E8, &v185) + 139); /*0x5b0624*/
    v176 = (_DWORD *)v33; /*0x5b062d*/
    if ( v33 >= 0 && v33 < dword_8B4148 ) /*0x5b0640*/
    {
      (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(this + 12) + 292))(*(_DWORD *)(this + 12), 0); /*0x5b064d*/
      v34 = *(_DWORD **)(this + 12); /*0x5b0653*/
      v182 = v34[39]; /*0x5b0662*/
      v183 = v34[40]; /*0x5b0669*/
      v184 = v34[41]; /*0x5b0670*/
      (*(void (__thiscall **)(_DWORD *, int *))(*v34 + 244))(v34, &v182); /*0x5b067b*/
      v35 = (_DWORD *)*((_DWORD *)dword_8B413C + (_DWORD)v176); /*0x5b068c*/
      LODWORD(v177) = v35; /*0x5b068f*/
      LODWORD(v180) = v35[10]; /*0x5b0696*/
      v36 = SWORD1(v180) << 8; /*0x5b06aa*/
      *(_DWORD *)(this + 36) = (SLOWORD(v180) << 8) + 128; /*0x5b06b3*/
      v37 = *(_DWORD *)(this + 12); /*0x5b06b6*/
      *(_DWORD *)(this + 40) = v36 + 128; /*0x5b06b9*/
      *(_DWORD *)(this + 44) = 0; /*0x5b06bc*/
      qmemcpy((void *)(v37 + 1504), (const void *)(v37 + 1508), 0x5Cu); /*0x5b06d0*/
      *(_DWORD *)(*(_DWORD *)(this + 12) + 1596) = -1; /*0x5b06d5*/
      *(_BYTE *)(*(_DWORD *)(this + 12) + 1668) = (_BYTE)v176; /*0x5b06e6*/
      *(_BYTE *)(*(_DWORD *)(this + 12) + 1669) = 0; /*0x5b06ef*/
      v38 = v35[9]; /*0x5b06f6*/
      v39 = v35[12] & 7; /*0x5b0705*/
      LODWORD(v180) = v38; /*0x5b0708*/
      LOWORD(v179) = LOWORD(dword_89F688[v39]) + v38; /*0x5b0722*/
      WORD1(v179) = HIWORD(v38) + HIWORD(dword_89F688[v39]); /*0x5b0734*/
      LODWORD(v180) = LODWORD(v179); /*0x5b0741*/
      v40 = ((__int16)v38 << 8) + 128; /*0x5b074e*/
      v41 = (SHIWORD(v38) << 8) + 128; /*0x5b0754*/
      v42 = CellCoord::To_CellObj(&dword_87F7E8, (__int16 *)&v180); /*0x5b075a*/
      Coords = CellClass::GetCoords(v42, &v188); /*0x5b0761*/
      v44 = Coords[1]; /*0x5b0768*/
      v45 = *Coords - v40; /*0x5b076e*/
      v46 = *(_DWORD **)(this + 12); /*0x5b0770*/
      v190 = Coords[2]; /*0x5b0773*/
      v47 = v44 - v41; /*0x5b0777*/
      v48 = v46 + 39; /*0x5b077f*/
      v185 = v46[39]; /*0x5b0783*/
      v49 = v46[40]; /*0x5b0787*/
      v46 += 346; /*0x5b078a*/
      v50 = v47 + v49; /*0x5b0790*/
      v51 = v190; /*0x5b0795*/
      v187 = v48[2]; /*0x5b0799*/
      v52 = v187; /*0x5b07a3*/
      *v46 = v185 + v45; /*0x5b07a7*/
      v46[1] = v50; /*0x5b07ab*/
      v46[2] = v52 + v51; /*0x5b07ae*/
      v53 = (int *)(*(_DWORD *)(this + 12) + 156); /*0x5b07b4*/
      v185 = *v53; /*0x5b07bb*/
      v186 = v53[1]; /*0x5b07c7*/
      v187 = v53[2]; /*0x5b07d3*/
      GroundHeight = Cell::GetGroundHeight(&v185); /*0x5b07dc*/
      v187 = 0; /*0x5b07e2*/
      v55 = *(_DWORD *)(LODWORD(v177) + 448); /*0x5b07ed*/
      v56 = (__int16)*(_DWORD *)(LODWORD(v177) + 40); /*0x5b07f3*/
      LODWORD(v180) = *(_DWORD *)(LODWORD(v177) + 40); /*0x5b07f6*/
      v185 = (v56 << 8) + 128; /*0x5b080b*/
      v186 = (SWORD1(v180) << 8) + 128; /*0x5b0819*/
      *(_DWORD *)(*(_DWORD *)(this + 12) + 1392) = GroundHeight + (Cell::GetGroundHeight(&v185) - GroundHeight) / v55; /*0x5b0832*/
      return; /*0x5b083e*/
    }
    *(_DWORD *)(*(_DWORD *)(this + 12) + 1504) = -1; /*0x5b0844*/
    *(_DWORD *)(this + 36) = dword_ABEE10; /*0x5b0853*/
    *(_DWORD *)(this + 40) = dword_ABEE14; /*0x5b085f*/
    v57 = *(_DWORD *)(this + 4); /*0x5b0869*/
    *(_DWORD *)(this + 44) = dword_ABEE18; /*0x5b086b*/
    (*(void (__stdcall **)(int))(v57 + 72))(this + 4); /*0x5b086e*/
    goto LABEL_37; /*0x5b086e*/
  }
  v58 = v30 + 156; /*0x5b0890*/
  v59 = *(_DWORD *)(v30 + 156); /*0x5b0892*/
  v60 = *(_DWORD *)(v58 + 4); /*0x5b0894*/
  v190 = *(_DWORD *)(v58 + 8); /*0x5b089a*/
  v61 = v31 & 7; /*0x5b08b6*/
  LOWORD(v58) = LOWORD(dword_89F688[v61]) + v59 / 256; /*0x5b08bc*/
  LOWORD(v61) = HIWORD(dword_89F688[v61]); /*0x5b08ce*/
  LOWORD(v179) = v58; /*0x5b08d2*/
  WORD1(v179) = v60 / 256 + v61; /*0x5b08da*/
  v176 = (_DWORD *)LODWORD(v179); /*0x5b08e3*/
  HIDWORD(v177) = (SWORD1(v179) << 8) + 128; /*0x5b08f8*/
  LODWORD(v177) = ((__int16)v58 << 8) + 128; /*0x5b090e*/
  v178 = 0; /*0x5b0912*/
  v178 = Cell::GetGroundHeight(&v177); /*0x5b0925*/
  v62 = CellCoord::To_CellObj(&dword_87F7E8, (__int16 *)&v176); /*0x5b092e*/
  v63 = *(_DWORD *)(this + 12); /*0x5b0930*/
  LODWORD(v180) = v62; /*0x5b0933*/
  if ( *(_BYTE *)(v63 + 140) != ((v62[80] >> 8) & 1) ) /*0x5b094b*/
    *(_BYTE *)(v63 + 1675) = 1; /*0x5b094f*/
  v64 = *(_BYTE **)(this + 12); /*0x5b0956*/
  v65 = *(_DWORD *)v64; /*0x5b095d*/
  LandHeight = ObjectClass::GetLandHeight(v64); /*0x5b0964*/
  v66 = CellCoord::To_CellObj(&dword_87F7E8, (__int16 *)&v176); /*0x5b0970*/
  v67 = (*(int (__thiscall **)(_DWORD, void *, int, int, _DWORD, int))(v65 + 428))( /*0x5b0979*/
          *(_DWORD *)(this + 12),
          v66,
          v31,
          LandHeight,
          0,
          1);
  v68 = v67; /*0x5b097f*/
  if ( (v67 != 5 && v67 != 4 /*0x5b09b1*/
     || !*(_BYTE *)((*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 12) + 132))(*(_DWORD *)(this + 12)) + 3368)
     || *(_DWORD *)(LODWORD(v180) + 68))
    && v68 )
  {
    (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 12) + 1352))(*(_DWORD *)(this + 12)); /*0x5b09bc*/
    if ( v68 == 6 ) /*0x5b09c5*/
    {
      v69 = CellCoord::To_CellObj(&dword_87F7E8, (__int16 *)&v176); /*0x5b09d5*/
      v70 = *(_DWORD **)(this + 12); /*0x5b09da*/
      v71 = v69; /*0x5b09dd*/
      if ( a2 ) /*0x5b09e4*/
      {
        v70[376] = -1; /*0x5b09e6*/
        *(_DWORD *)(this + 36) = dword_ABEE10; /*0x5b09f6*/
        v72 = *(_DWORD **)(this + 12); /*0x5b09fe*/
        *(_DWORD *)(this + 40) = dword_ABEE14; /*0x5b0a01*/
        v72 += 400; /*0x5b0a0a*/
        *(_DWORD *)(this + 44) = dword_ABEE18; /*0x5b0a10*/
        *v72 = dword_A8ED84; /*0x5b0a18*/
        v72[1] = v189; /*0x5b0a20*/
        v72[2] = 0; /*0x5b0a24*/
        BuildingClass::ProcessMission(0); /*0x5b0a29*/
      }
      else
      {
        v73 = (_DWORD *)(*(int (__thiscall **)(_DWORD *, int *))(*v70 + 72))(v70, &v188); /*0x5b0a3e*/
        v74 = *(_DWORD *)(this + 28); /*0x5b0a46*/
        v75 = *v73 - *(_DWORD *)(this + 24); /*0x5b0a49*/
        v76 = v73[1]; /*0x5b0a4b*/
        v77 = v73[2]; /*0x5b0a4e*/
        v182 = v75; /*0x5b0a51*/
        v78 = v77 - *(_DWORD *)(this + 32); /*0x5b0a5e*/
        v183 = v76 - v74; /*0x5b0a60*/
        v184 = v78; /*0x5b0a64*/
        v79 = Math::Sqrt((double)v78 * (double)v78 + (double)(v76 - v74) * (double)(v76 - v74) + (double)v182 /*0x5b0a8c*/
                                                                                               * (double)v182);
        if ( (int)Math::RoundToInt(v79) >= *((_DWORD *)dword_8871E0 + 1478) /*0x5b0b16*/
          || Team::AllMembersValid(*(int **)(this + 12))
          || (v80 = (int *)(*(_DWORD *)(this + 12) + 156),
              v188 = *v80,
              v189 = v80[1],
              v81 = *(_DWORD *)(this + 32) - v80[2],
              (int)((HIDWORD(v81) ^ v81) - HIDWORD(v81)) >= 2 * dword_ABEE50)
          || (v185 = *v80, v186 = v80[1], v187 = v80[2], *((_DWORD *)Coord::To_Cell(&dword_87F7E8, &v185) + 59) == 10) )
        {
          if ( (v71[80] & 0x100) == 0 /*0x5b0b99*/
            || (v82 = *(int **)(this + 12),
                LOBYTE(v179) = 1,
                v82 += 39,
                v188 = *v82,
                v189 = v82[1],
                v83 = v82[2] / dword_ABEE50 - *((char *)v71 + 283),
                (int)((HIDWORD(v83) ^ v83) - HIDWORD(v83)) <= 2) )
          {
            LOBYTE(v179) = 0; /*0x5b0b9b*/
          }
          Cell::ApplyDamage(v71, (int)&dword_ABEE10, 1, 1, SLOBYTE(v179)); /*0x5b0bb0*/
        }
        else
        {
          (*(void (__thiscall **)(_DWORD, _DWORD, _DWORD))(**(_DWORD **)(this + 12) + 1348))( /*0x5b0b21*/
            *(_DWORD *)(this + 12),
            0,
            0);
          (*(void (__thiscall **)(_DWORD, _DWORD, int))(**(_DWORD **)(this + 12) + 1152))(*(_DWORD *)(this + 12), 0, 1); /*0x5b0b30*/
          *(_DWORD *)(*(_DWORD *)(this + 12) + 1504) = -1; /*0x5b0b3d*/
          (*(void (__stdcall **)(int))(*(_DWORD *)(this + 4) + 72))(this + 4); /*0x5b0b49*/
          *(_BYTE *)(this + 48) = 0; /*0x5b0b4c*/
        }
      }
      return; /*0x5b0a34*/
    }
    if ( v68 == 2 ) /*0x5b0bc1*/
    {
      v84 = *(_DWORD *)(this + 12); /*0x5b0bc7*/
      if ( !*(_BYTE *)(v84 + 1719) ) /*0x5b0bca*/
      {
        *(_BYTE *)(v84 + 1719) = 1; /*0x5b0bd4*/
        v85 = (_DWORD *)(*(_DWORD *)(this + 12) + 1640); /*0x5b0be9*/
        v86 = *((_DWORD *)dword_8871E0 + 1498); /*0x5b0bef*/
        *v85 = dword_A8ED84; /*0x5b0bf5*/
        v85[1] = v189; /*0x5b0bfb*/
        v85[2] = v86; /*0x5b0bfe*/
      }
      v87 = *(_DWORD *)(this + 12); /*0x5b0c01*/
      v88 = *(_DWORD *)(v87 + 1600); /*0x5b0c0a*/
      v89 = *(_DWORD *)(v87 + 1608); /*0x5b0c10*/
      if ( v88 != -1 ) /*0x5b0c19*/
      {
        if ( (int)dword_A8ED84 - v88 >= v89 ) /*0x5b0c21*/
          goto LABEL_64; /*0x5b0c21*/
        v89 -= (int)dword_A8ED84 - v88; /*0x5b0c23*/
      }
      if ( v89 ) /*0x5b0c27*/
      {
        v99 = (_DWORD *)(*(int (__thiscall **)(int, int *))(*(_DWORD *)v87 + 72))(v87, &v188); /*0x5b0d34*/
        LODWORD(v180) = *v99; /*0x5b0d40*/
        v100 = Math::CalcAngle( /*0x5b0d59*/
                 (double)(int)v99[1] - (double)SHIDWORD(v177),
                 (double)SLODWORD(v177) - (double)SLODWORD(v180));
        v101 = Math::RoundToInt((v100 - 1.570796326794897) * -10430.06004058427); /*0x5b0d6d*/
        v102 = *(_DWORD *)(this + 4); /*0x5b0d72*/
        LOWORD(v180) = v101; /*0x5b0d75*/
        (*(void (__stdcall **)(int, _DWORD))(v102 + 76))(this + 4, LODWORD(v180)); /*0x5b0d83*/
        return; /*0x5b0d8c*/
      }
LABEL_64:
      if ( *(_BYTE *)(v87 + 1719) ) /*0x5b0c2d*/
      {
        v90 = *(_DWORD *)(v87 + 1640); /*0x5b0c37*/
        v91 = *(_DWORD *)(v87 + 1648); /*0x5b0c3d*/
        if ( v90 != -1 ) /*0x5b0c46*/
        {
          if ( (int)dword_A8ED84 - v90 >= v91 ) /*0x5b0c4e*/
          {
LABEL_69:
            v92 = 1; /*0x5b0c56*/
            goto LABEL_71; /*0x5b0c58*/
          }
          v91 -= (int)dword_A8ED84 - v90; /*0x5b0c50*/
        }
        if ( !v91 ) /*0x5b0c54*/
          goto LABEL_69; /*0x5b0c54*/
      }
      v92 = 0; /*0x5b0c5a*/
LABEL_71:
      LOWORD(v179) = *(_DWORD *)(this + 24) / 256; /*0x5b0c5c*/
      WORD1(v179) = *(_DWORD *)(this + 28) / 256; /*0x5b0c8a*/
      v93 = FootClass::MovementStep(v87, this + 24, SLODWORD(v179), 0, (v92 != 0) + 1, v174); /*0x5b0c99*/
      v94 = dword_A8ED84; /*0x5b0ca4*/
      v175 = v93; /*0x5b0caa*/
      v95 = (wchar_t *)Math::RoundToInt(*((double *)dword_8871E0 + 748) * 900.0); /*0x5b0cba*/
      v96 = v189; /*0x5b0cc2*/
      v97 = (wchar_t **)(*(_DWORD *)(this + 12) + 1600); /*0x5b0cc6*/
      *v97 = v94; /*0x5b0ccc*/
      v97[1] = (wchar_t *)v96; /*0x5b0cce*/
      v97[2] = v95; /*0x5b0cd1*/
      v98 = *(_DWORD *)(this + 12); /*0x5b0cd8*/
      if ( v175 ) /*0x5b0cdd*/
      {
        (*(void (__thiscall **)(int))(*(_DWORD *)v98 + 1272))(v98); /*0x5b0d1c*/
      }
      else if ( (*(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)v98 + 716))(v98, this + 24) ) /*0x5b0ce2*/
      {
        (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 12) + 1268))(*(_DWORD *)(this + 12)); /*0x5b0d0b*/
      }
      else
      {
        (*(void (__thiscall **)(_DWORD, _DWORD, int))(**(_DWORD **)(this + 12) + 1152))(*(_DWORD *)(this + 12), 0, 1); /*0x5b0cf7*/
      }
      return; /*0x5b0d03*/
    }
    if ( v68 == 3 ) /*0x5b0d92*/
    {
      Cell::IsPassableAllied(*(_DWORD *)(this + 12), (__int16 *)&v176); /*0x5b0da2*/
      *(_DWORD *)(*(_DWORD *)(this + 12) + 1612) = 10; /*0x5b0daa*/
      return; /*0x5b0dba*/
    }
    if ( v68 == 1 ) /*0x5b0dc0*/
    {
      v108 = CellCoord::To_CellObj(&dword_87F7E8, (__int16 *)&v176); /*0x5b0f39*/
      CellClass::DamageAllObjects(v108); /*0x5b0f40*/
    }
    else if ( v68 != 7 ) /*0x5b0dc9*/
    {
      if ( v68 == 5 || v68 == 4 ) /*0x5b0dd7*/
      {
        v182 = 0; /*0x5b0dee*/
        v183 = 0; /*0x5b0df6*/
        v103 = CellCoord::To_CellObj(&dword_87F7E8, (__int16 *)&v176); /*0x5b0dfe*/
        Object = Object::FindObjectCell(v103, &v182, 0); /*0x5b0e0a*/
        if ( a2 ) /*0x5b0e11*/
          goto LABEL_84; /*0x5b0e11*/
        if ( Object ) /*0x5b0e69*/
        {
          if ( !Object::IsAlliedWithObjectHouse(*(_DWORD **)(*(_DWORD *)(this + 12) + 540), Object) ) /*0x5b0e75*/
            (*(void (__thiscall **)(_DWORD, int, int, _DWORD))(**(_DWORD **)(this + 12) + 500))( /*0x5b0e88*/
              *(_DWORD *)(this + 12),
              1,
              Object,
              0);
        }
        else if ( *((_DWORD *)CellCoord::To_CellObj(&dword_87F7E8, (__int16 *)&v176) + 17) != -1 /*0x5b0ec0*/
               && *(_BYTE *)(*((_DWORD *)dword_A83D84
                             + *((_DWORD *)CellCoord::To_CellObj(&dword_87F7E8, (__int16 *)&v176) + 17))
                           + 680) )
        {
          v106 = **(_DWORD **)(this + 12); /*0x5b0ed4*/
          v107 = CellCoord::To_CellObj(&dword_87F7E8, (__int16 *)&v176); /*0x5b0edb*/
          (*(void (__thiscall **)(_DWORD, int, void *, _DWORD))(v106 + 500))(*(_DWORD *)(this + 12), 1, v107, 0); /*0x5b0ee6*/
        }
      }
      *(_DWORD *)(*(_DWORD *)(this + 12) + 1504) = -1; /*0x5b0ef3*/
      (*(void (__thiscall **)(_DWORD, _DWORD, _DWORD))(**(_DWORD **)(this + 12) + 1348))(*(_DWORD *)(this + 12), 0, 0); /*0x5b0f02*/
      (*(void (__stdcall **)(int))(*(_DWORD *)(this + 4) + 72))(this + 4); /*0x5b0f0f*/
      *(_BYTE *)(*(_DWORD *)(this + 12) + 1674) = 0; /*0x5b0f15*/
      *(_BYTE *)(*(_DWORD *)(this + 12) + 1674) = 0; /*0x5b0f1f*/
      return; /*0x5b0f2c*/
    }
    if ( !a2 ) /*0x5b0f4a*/
      return; /*0x5b0f4a*/
LABEL_84:
    *(_DWORD *)(*(_DWORD *)(this + 12) + 1504) = -1; /*0x5b0e13*/
    *(_DWORD *)(this + 36) = dword_ABEE10; /*0x5b0e26*/
    v105 = *(_DWORD **)(this + 12); /*0x5b0e2e*/
    *(_DWORD *)(this + 40) = dword_ABEE14; /*0x5b0e31*/
    v105 += 400; /*0x5b0e3a*/
    *(_DWORD *)(this + 44) = dword_ABEE18; /*0x5b0e40*/
    *v105 = dword_A8ED84; /*0x5b0e48*/
    v105[1] = v189; /*0x5b0e50*/
    v105[2] = 0; /*0x5b0e54*/
    BuildingClass::ProcessMission(0); /*0x5b0e59*/
    return; /*0x5b0e64*/
  }
  v109 = BuildingClass::UpdateMovingPosition(&v177); /*0x5b0fab*/
  v110 = *(_DWORD **)(this + 12); /*0x5b0fb0*/
  if ( v109 ) /*0x5b0fb5*/
  {
    v111 = v110[376]; /*0x5b0fbb*/
    if ( v111 != -1 && v111 != 8 ) /*0x5b0fcd*/
    {
      v112 = v110[376]; /*0x5b0fd5*/
      v113 = (_WORD *)(*(int (__thiscall **)(_DWORD *, int *))(*v110 + 440))(v110, &v182); /*0x5b0fdc*/
      v114 = v112 & 7; /*0x5b0fe2*/
      v115 = v113[1] + HIWORD(dword_89F688[v114]); /*0x5b0ffb*/
      LOWORD(v179) = *v113 + LOWORD(dword_89F688[v114]); /*0x5b0fff*/
      WORD1(v179) = v115; /*0x5b1008*/
      LODWORD(v180) = LODWORD(v179); /*0x5b1017*/
      v116 = *((_DWORD *)CellCoord::To_CellObj(&dword_87F7E8, (__int16 *)&v180) + 17); /*0x5b1020*/
      if ( v116 != -1 ) /*0x5b1026*/
      {
        v117 = *((_DWORD *)dword_A83D84 + v116); /*0x5b102e*/
        if ( (*(_BYTE *)((*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 12) + 132))(*(_DWORD *)(this + 12)) + 3368) /*0x5b1054*/
           || TechnoTypeClass::HasVoiceResponse(*(float **)(this + 12), 17))
          && !*(_DWORD *)(v117 + 660) )
        {
          *(_BYTE *)(*(_DWORD *)(this + 12) + 1717) = 1; /*0x5b1061*/
          if ( *(_BYTE *)((*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 12) + 132))(*(_DWORD *)(this + 12)) + 3371) ) /*0x5b1073*/
            *(_DWORD *)(*(_DWORD *)(this + 12) + 820) = -1138501878; /*0x5b1080*/
        }
      }
    }
    v118 = *(_BYTE **)(this + 12); /*0x5b108a*/
    if ( v118[144] ) /*0x5b108d*/
    {
      v119 = (int *)(*(int (__thiscall **)(_BYTE *, int *))(*(_DWORD *)v118 + 72))(v118, &v188); /*0x5b10a2*/
      v120 = *v119; /*0x5b10a8*/
      LODWORD(v180) = *(_DWORD *)(this + 36); /*0x5b10aa*/
      LODWORD(v179) = v120; /*0x5b10ae*/
      v121 = Math::CalcAngle((double)v119[1] - (double)*(int *)(this + 40), (double)SLODWORD(v180) - (double)v120); /*0x5b10cd*/
      v122 = Math::RoundToInt((v121 - 1.570796326794897) * -10430.06004058427); /*0x5b10e1*/
      v123 = *(_DWORD *)(this + 4); /*0x5b10e6*/
      LOWORD(v180) = v122; /*0x5b10e9*/
      (*(void (__stdcall **)(int, _DWORD))(v123 + 76))(this + 4, LODWORD(v180)); /*0x5b10f7*/
      if ( !TimerClass::Active(*(_DWORD *)(this + 12) + 904) ) /*0x5b1103*/
      {
        (*(void (__thiscall **)(_DWORD, _DWORD, int))(**(_DWORD **)(this + 12) + 1348))( /*0x5b111c*/
          *(_DWORD *)(this + 12),
          0,
          1072693248);
        *(_BYTE *)(*(_DWORD *)(this + 12) + 1674) = 0; /*0x5b1125*/
      }
    }
  }
  else
  {
    (*(void (__thiscall **)(_DWORD *, _DWORD, _DWORD))(*v110 + 1348))(v110, 0, 0); /*0x5b113b*/
    *(_BYTE *)(*(_DWORD *)(this + 12) + 1674) = 0; /*0x5b1144*/
  }
}


// ==== 0x005B17B0  BuildingClass::UpdateMovingPosition  this=BuildingClass  sig=csp ====
char __thiscall BuildingClass::UpdateMovingPosition(BuildingClass *this, int *a2)
{
  bool v3; // zf
  int v4; // ecx
  int v5; // edx
  int *v6; // ecx
  int *p_occupant; // esi
  CellClass *v8; // eax
  _BYTE *v9; // ecx
  void *ptr_C; // [esp-4h] [ebp-28h]
  int v12; // [esp+Ch] [ebp-18h] BYREF
  int v13; // [esp+10h] [ebp-14h]
  int GroundHeight; // [esp+14h] [ebp-10h]
  int v15; // [esp+18h] [ebp-Ch] BYREF
  int v16; // [esp+1Ch] [ebp-8h]
  int v17; // [esp+20h] [ebp-4h]

  v3 = *a2 == g_MissionQueueFrame.localVariables[227]; /*0x5b17c6*/
  v12 = *a2; /*0x5b17c8*/
  v4 = a2[1]; /*0x5b17cc*/
  v13 = v4; /*0x5b17cf*/
  v5 = a2[2]; /*0x5b17d3*/
  GroundHeight = v5; /*0x5b17d6*/
  if ( !v3 || v4 != g_MissionQueueFrame.localVariables[228] || v5 != g_MissionQueueFrame.localVariables[229] ) /*0x5b17ea*/
  {
    GroundHeight = Cell::GetGroundHeight(&v12); /*0x5b1801*/
    if ( (Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], a2)->flags[0] & 0x100) != 0 ) /*0x5b1813*/
    {
      v6 = (int *)((char *)this->? + 156); /*0x5b1818*/
      v15 = *v6; /*0x5b1820*/
      v16 = v6[1]; /*0x5b1827*/
      if ( v6[2] > GroundHeight + 2 * g_MissionQueueFrame.localVariables[243] + g_MissionQueueFrame.localVariables[243] ) /*0x5b183e*/
        GroundHeight += g_MissionQueueFrame.localVariables[240]; /*0x5b1846*/
    }
  }
  p_occupant = &this->?; /*0x5b1853*/
  if ( this->? != g_MissionQueueFrame.localVariables[227] /*0x5b1871*/
    || this->? != g_MissionQueueFrame.localVariables[228]
    || this->? != g_MissionQueueFrame.localVariables[229] )
  {
    (*(void (__thiscall **)(void *, int *))(*(_DWORD *)this->? + 244))(this->?, &this->?); /*0x5b1879*/
  }
  ptr_C = this->?; /*0x5b1886*/
  v8 = Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], &v12); /*0x5b188d*/
  if ( !(unsigned __int8)CrateClass::ProcessPickup((CrateClass *)v8, (int)ptr_C) || (v9 = this->?, v9[129]) ) /*0x5b18a0*/
  {
    *p_occupant = g_MissionQueueFrame.localVariables[227]; /*0x5b18ca*/
    this->? = g_MissionQueueFrame.localVariables[228]; /*0x5b18d1*/
    this->? = g_MissionQueueFrame.localVariables[229]; /*0x5b18da*/
    v9 = this->?; /*0x5b18dd*/
    if ( !v9[144] ) /*0x5b18e8*/
      return 0; /*0x5b18e8*/
  }
  else
  {
    *p_occupant = v12; /*0x5b18b0*/
    this->? = v13; /*0x5b18b6*/
    this->? = GroundHeight; /*0x5b18bd*/
  }
  if ( *p_occupant != g_MissionQueueFrame.localVariables[227] /*0x5b190d*/
    || this->? != g_MissionQueueFrame.localVariables[228]
    || this->? != g_MissionQueueFrame.localVariables[229] )
  {
    (*(void (__thiscall **)(_BYTE *, int *))(*(_DWORD *)v9 + 240))(v9, &this->?); /*0x5b1912*/
    return 1; /*0x5b1920*/
  }
  v15 = *((_DWORD *)v9 + 39); /*0x5b192f*/
  v16 = *((_DWORD *)v9 + 40); /*0x5b1936*/
  v17 = *((_DWORD *)v9 + 41); /*0x5b193d*/
  (*(void (__thiscall **)(_BYTE *, int *))(*(_DWORD *)v9 + 240))(v9, &v15); /*0x5b1948*/
  return 0; /*0x5b1918*/
}



// ==== 0x005B1960  MechLocomotionClass::ddtor  this=MechLocomotionClass  sig=csp ====
int __stdcall MechLocomotionClass::ddtor(MechLocomotionClass *this, _DWORD *a2)
{
  if ( !a2 ) /*0x5b1966*/
    return -2147467261; /*0x5b1968*/
  *(IID *)a2 = g_CLSID_TunnelLocomotion; /*0x5b1976*/
  a2[3] = unk_7E9AAC; /*0x5b1990*/
  return 0; /*0x5b196d*/
}



// ==== 0x005B19A0  MechLocomotionClass::BeginMove  this=MechLocomotionClass  sig=csp ====
int __stdcall MechLocomotionClass::BeginMove(MechLocomotionClass *this, int *a2)
{
  int result; // eax

  result = SwizzleManager::SaveLoad((int *)this->LocomotionClass, a2); /*0x5b19ab*/
  if ( result >= 0 ) /*0x5b19b2*/
  {
    if ( this ) /*0x5b19b6*/
    {
      *(_DWORD *)this->LocomotionClass = &MechLocomotionClass::`vftable'; /*0x5b19b8*/
      *(_DWORD *)&this->LocomotionClass[4] = &MechLocomotionClass::`vftable'; /*0x5b19be*/
    }
  }
  return result; /*0x5b19c5*/
}



// ==== 0x005B19D0  MechLocomotionClass::SmallStub_5B19D0  this=MechLocomotionClass  sig=csp ====
int __stdcall JumpjetLocomotionClass::SmallStub_5B19D0(MechLocomotionClass *this)
{
  return 2; /*0x5b19d5*/
}



// ==== 0x005B19E0  MechLocomotionClass::StubReturnTrue_4  this=MechLocomotionClass  sig=csp ====
bool __stdcall JumpjetLocomotionClass::StubReturnTrue_4(MechLocomotionClass *this)
{
  if ( (unsigned __int8)TimerClass::Active((int)this->?->?) ) /*0x5b19ee*/
    return 1; /*0x5b19f7*/
  return (*(unsigned __int8 (__stdcall **)(MechLocomotionClass *))(*(_DWORD *)this->LocomotionClass + 16))(this) /*0x5b1a39*/
      && (this->MovingDestination[2] != g_MissionQueueFrame.localVariables[227]
       || this->HeadToCoord[0] != g_MissionQueueFrame.localVariables[228]
       || this->HeadToCoord[1] != g_MissionQueueFrame.localVariables[229])
      && (*((int (__thiscall **)(FootClass *))this->?->TechnoClass + 334))(this->?) > 0;
}



// ==== 0x005B1A50  MechLocomotionClass::DispatchVirtualCall_5  this=MechLocomotionClass  sig=csp ====
int __stdcall JumpjetLocomotionClass::DispatchVirtualCall_5(MechLocomotionClass *this, int a2)
{
  int result; // eax
  _DWORD *v3; // eax
  FootClass *Owner; // ecx
  _DWORD v5[3]; // [esp+8h] [ebp-18h] BYREF
  _BYTE v6[12]; // [esp+14h] [ebp-Ch] BYREF

  result = a2; /*0x5b1a50*/
  if ( !a2 ) /*0x5b1a59*/
  {
    v3 = (_DWORD *)(*(int (__stdcall **)(MechLocomotionClass *, _BYTE *))(*(_DWORD *)this->LocomotionClass + 24))( /*0x5b1a68*/
                     this,
                     v6);
    v5[0] = *v3; /*0x5b1a6d*/
    v5[1] = v3[1]; /*0x5b1a74*/
    Owner = this->?; /*0x5b1a7b*/
    v5[2] = v3[2]; /*0x5b1a7e*/
    return (*((int (__thiscall **)(FootClass *, _DWORD *))Owner->TechnoClass + 61))(Owner, v5); /*0x5b1a89*/
  }
  return result; /*0x5b1a90*/
}



// ==== 0x005B1AA0  MechLocomotionClass::IsPositionWithinThreshold_0  this=MechLocomotionClass  sig=csp ====
bool __stdcall JumpjetLocomotionClass::IsPositionWithinThreshold_0(MechLocomotionClass *this, int a2, int a3, int a4)
{
  int *v4; // eax
  int v5; // ebp
  int v6; // kr04_4
  int v7; // eax
  _BYTE v9[12]; // [esp+10h] [ebp-Ch] BYREF

  v4 = (int *)(*(int (__stdcall **)(MechLocomotionClass *, _BYTE *))(*(_DWORD *)this->LocomotionClass + 24))(this, v9); /*0x5b1ab3*/
  v5 = v4[2]; /*0x5b1abb*/
  v6 = *v4; /*0x5b1ae7*/
  v7 = v4[1] / 256; /*0x5b1afd*/
  return (unsigned __int16)(v6 / 256) == (unsigned __int16)(a2 / 256) /*0x5b1b21*/
      && (_WORD)v7 == (unsigned __int16)(a3 / 256)
      && (int)abs32(v5 - a4) <= g_MissionQueueFrame.localVariables[243];
}



// ==== 0x005B1B40  MechLocomotionClass::StubReturn52  this=MechLocomotionClass  sig=csp ====
int MechLocomotionClass::StubReturn52(MechLocomotionClass *this)
{
  return 52; /*0x5b1b45*/
}



// ==== 0x005B1B50  MechLocomotionClass::ProcessMove  this=MechLocomotionClass  sig=csp ====
_DWORD *__thiscall MechLocomotionClass::ProcessMove(MechLocomotionClass *this, char a2)
{
  *(_DWORD *)this->LocomotionClass = &MechLocomotionClass::`vftable'; /*0x5b1b53*/
  *(_DWORD *)&this->LocomotionClass[4] = &MechLocomotionClass::`vftable'; /*0x5b1b59*/
  LocomotionClass::Construct((LocomotionClass *)this); /*0x5b1b60*/
  if ( (a2 & 1) != 0 ) /*0x5b1b6a*/
    __3_YAXPAX_Z(this); /*0x5b1b6d*/
  return this->LocomotionClass; /*0x5b1b77*/
}



// ==== 0x005B1B80  sub_5B1B80  this=-  sig=ida-proto ====
int sub_5B1B80()
{
  dword_ABEE60 = 0; /*0x5b1b82*/
  dword_ABEE64 = 0; /*0x5b1b87*/
  dword_ABEE68 = 0; /*0x5b1b8c*/
  dword_ABEE6C = 0; /*0x5b1b91*/
  return 0; /*0x5b1b96*/
}



// ==== 0x005B1BA0  sub_5B1BA0  this=-  sig=ida-proto ====
void sub_5B1BA0()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x5b1bac*/
  dbl_ABEE78 = Math::Sqrt(v0 + v0); /*0x5b1bbe*/
}



// ==== 0x005B1BD0  sub_5B1BD0  this=-  sig=ida-proto ====
void sub_5B1BD0()
{
  dbl_ABEEC8 = dbl_ABEE78 / 60.0; /*0x5b1bdc*/
}



// ==== 0x005B1BF0  sub_5B1BF0  this=-  sig=ida-proto ====
void sub_5B1BF0()
{
  dbl_ABEEB0 = 1.0 / dbl_ABEEC8; /*0x5b1bfc*/
}



// ==== 0x005B1C10  sub_5B1C10  this=-  sig=ida-proto ====
void sub_5B1C10()
{
  dbl_ABEEA8 = 0.0174532925199433 * 45.0; /*0x5b1c1c*/
}



// ==== 0x005B1C30  sub_5B1C30  this=-  sig=ida-proto ====
void sub_5B1C30()
{
  dbl_ABEE80 = 0.0174532925199433 * 60.0; /*0x5b1c3c*/
}



// ==== 0x005B1C50  sub_5B1C50  this=-  sig=ida-proto ====
void sub_5B1C50()
{
  dbl_ABEE58 = 0.0174532925199433 * 90.0; /*0x5b1c5c*/
}



// ==== 0x005B1C70  sub_5B1C70  this=-  sig=ida-proto ====
__int64 sub_5B1C70()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_ABEE58 - dbl_ABEE80); /*0x5b1c82*/
  result = Math::RoundToInt(v0 * dbl_ABEE78 * 0.5); /*0x5b1c96*/
  dword_ABEED0 = result; /*0x5b1c9b*/
  return result; /*0x5b1ca0*/
}



// ==== 0x005B1CB0  sub_5B1CB0  this=-  sig=ida-proto ====
void sub_5B1CB0()
{
  dbl_ABEE88 = Math::ArcTan((double)dword_ABEED0 * 0.00390625); /*0x5b1cc7*/
}



// ==== 0x005B1CE0  sub_5B1CE0  this=-  sig=ida-proto ====
void sub_5B1CE0()
{
  dbl_ABEEA0 = Math::ArcTan((double)(2 * dword_ABEED0) / dbl_ABEE78); /*0x5b1d02*/
}



// ==== 0x005B1D10  sub_5B1D10  this=-  sig=ida-proto ====
__int64 sub_5B1D10()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_ABEED0) + 0.5); /*0x5b1d2b*/
  dword_ABEEC4 = result; /*0x5b1d30*/
  return result; /*0x5b1d36*/
}



// ==== 0x005B1D40  sub_5B1D40  this=-  sig=ida-proto ====
int sub_5B1D40()
{
  word_ABEE70 = 0; /*0x5b1d42*/
  word_ABEE72 = 0; /*0x5b1d48*/
  return 0; /*0x5b1d4e*/
}



// ==== 0x005B1D50  sub_5B1D50  this=-  sig=ida-proto ====
int sub_5B1D50()
{
  dword_ABEE90 = 0; /*0x5b1d52*/
  dword_ABEE94 = 0; /*0x5b1d57*/
  dword_ABEE98 = 0; /*0x5b1d5c*/
  return 0; /*0x5b1d61*/
}



// ==== 0x005B1D70  sub_5B1D70  this=-  sig=ida-proto ====
int sub_5B1D70()
{
  dword_ABEEC0 = 0; /*0x5b1d75*/
  dword_ABEEB8 = 128; /*0x5b1d7f*/
  dword_ABEEBC = 128; /*0x5b1d84*/
  return 128; /*0x5b1d89*/
}



// ==== 0x005B1D90  ObjectClass::method_5B1D90  this=ObjectClass  sig=csp ====
double *__thiscall sub_5B1D90(double *this)
{
  DWORD v2; // edi
  unsigned int v4; // [esp+8h] [ebp-Ch] BYREF
  double v5; // [esp+Ch] [ebp-8h]

  *(_DWORD *)this = 0; /*0x5b1d9b*/
  v4 = 0; /*0x5b1da1*/
  this->ptr_8 = 1072693248; /*0x5b1da9*/
  v2 = sub_5CAF70((LONG *)&v4); /*0x5b1db5*/
  if ( v2 || v4 ) /*0x5b1dc1*/
  {
    v5 = (double)v4; /*0x5b1de8*/
    Debug::Log(); /*0x5b1dec*/
    *this = (v5 * 4294967296.0 + (double)v2) * 0.001; /*0x5b1e19*/
    return this; /*0x5b1e0e*/
  }
  else
  {
    timeBeginPeriod(1u); /*0x5b1dc5*/
    return this; /*0x5b1dcb*/
  }
}



// ==== 0x005B1E40  Timer::GetHighPrecision  this=Timer  sig=csp ====
int __thiscall Timer::GetHighPrecision(int *this)
{
  int result; // eax
  unsigned int v3; // [esp+4h] [ebp-Ch] BYREF
  __int64 v4; // [esp+8h] [ebp-8h]

  if ( dword_82C24C == -1 ) /*0x5b1e4e*/
    GetVersionString(&dword_82C24C, unk_ABEED4, 0, 0); /*0x5b1e5e*/
  if ( !*this && this->u32_4 == 1072693248 || dword_82C24C <= 4 ) /*0x5b1e78*/
    return timeGetTime(); /*0x5b1eba*/
  result = Timer::ReadTSC(&v3); /*0x5b1e7f*/
  v4 = v3; /*0x5b1e9b*/
  return result; /*0x5b1eb5*/
}



// ==== 0x005B1EE0  sub_5B1EE0  this=-  sig=ida-proto ====
int sub_5B1EE0()
{
  dword_ABEEE0 = 0; /*0x5b1ee2*/
  dword_ABEEE4 = 0; /*0x5b1ee7*/
  dword_ABEEE8 = 0; /*0x5b1eec*/
  dword_ABEEEC = 0; /*0x5b1ef1*/
  return 0; /*0x5b1ef6*/
}



// ==== 0x005B1F00  sub_5B1F00  this=-  sig=ida-proto ====
void sub_5B1F00()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x5b1f0c*/
  dbl_ABEEF8 = Math::Sqrt(v0 + v0); /*0x5b1f1e*/
}



// ==== 0x005B1F30  sub_5B1F30  this=-  sig=ida-proto ====
void sub_5B1F30()
{
  dbl_ABEF48 = dbl_ABEEF8 / 60.0; /*0x5b1f3c*/
}



// ==== 0x005B1F50  sub_5B1F50  this=-  sig=ida-proto ====
void sub_5B1F50()
{
  dbl_ABEF30 = 1.0 / dbl_ABEF48; /*0x5b1f5c*/
}



// ==== 0x005B1F70  sub_5B1F70  this=-  sig=ida-proto ====
void sub_5B1F70()
{
  dbl_ABEF28 = 0.0174532925199433 * 45.0; /*0x5b1f7c*/
}



// ==== 0x005B1F90  sub_5B1F90  this=-  sig=ida-proto ====
void sub_5B1F90()
{
  dbl_ABEF00 = 0.0174532925199433 * 60.0; /*0x5b1f9c*/
}



// ==== 0x005B1FB0  sub_5B1FB0  this=-  sig=ida-proto ====
void sub_5B1FB0()
{
  dbl_ABEED8 = 0.0174532925199433 * 90.0; /*0x5b1fbc*/
}



// ==== 0x005B1FD0  sub_5B1FD0  this=-  sig=ida-proto ====
__int64 sub_5B1FD0()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_ABEED8 - dbl_ABEF00); /*0x5b1fe2*/
  result = Math::RoundToInt(v0 * dbl_ABEEF8 * 0.5); /*0x5b1ff6*/
  dword_ABEF50 = result; /*0x5b1ffb*/
  return result; /*0x5b2000*/
}



// ==== 0x005B2010  sub_5B2010  this=-  sig=ida-proto ====
void sub_5B2010()
{
  dbl_ABEF08 = Math::ArcTan((double)dword_ABEF50 * 0.00390625); /*0x5b2027*/
}



// ==== 0x005B2040  sub_5B2040  this=-  sig=ida-proto ====
void sub_5B2040()
{
  dbl_ABEF20 = Math::ArcTan((double)(2 * dword_ABEF50) / dbl_ABEEF8); /*0x5b2062*/
}



// ==== 0x005B2070  sub_5B2070  this=-  sig=ida-proto ====
__int64 sub_5B2070()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_ABEF50) + 0.5); /*0x5b208b*/
  dword_ABEF44 = result; /*0x5b2090*/
  return result; /*0x5b2096*/
}



// ==== 0x005B20A0  sub_5B20A0  this=-  sig=ida-proto ====
int sub_5B20A0()
{
  word_ABEEF0 = 0; /*0x5b20a2*/
  word_ABEEF2 = 0; /*0x5b20a8*/
  return 0; /*0x5b20ae*/
}



// ==== 0x005B20B0  sub_5B20B0  this=-  sig=ida-proto ====
int sub_5B20B0()
{
  dword_ABEF10 = 0; /*0x5b20b2*/
  dword_ABEF14 = 0; /*0x5b20b7*/
  dword_ABEF18 = 0; /*0x5b20bc*/
  return 0; /*0x5b20c1*/
}



// ==== 0x005B20D0  sub_5B20D0  this=-  sig=ida-proto ====
int sub_5B20D0()
{
  dword_ABEF40 = 0; /*0x5b20d5*/
  dword_ABEF38 = 128; /*0x5b20df*/
  dword_ABEF3C = 128; /*0x5b20e4*/
  return 128; /*0x5b20e9*/
}



// ==== 0x005B20F0  Movement::CalcVelocity  this=Movement  sig=csp ====
int __userpurge Movement::CalcVelocity@<eax>(
        double *a1@<edx>,
        Vector3 *a2@<ecx>,
        double a3@<st0>,
        void **a4,
        __int16 *a5,
        char a6,
        char a7,
        char a8,
        char a9)
{
  bool v11; // zf
  unsigned int v13; // edi
  int Movement_field_00_low; // edx
  int v18; // eax
  int v20; // edx
  unsigned int v22; // eax
  int v23; // eax
  int v24; // edi
  int v25; // eax
  int v26; // eax
  unsigned int *v27; // eax
  unsigned int v28; // ecx
  unsigned int v29; // edx
  int result; // eax
  unsigned int v31; // edx
  int v32; // eax
  int v33; // esi
  int v34; // eax
  int v35; // eax
  unsigned int *v36; // eax
  unsigned int v37; // ecx
  unsigned int v38; // edx
  int *v39; // eax
  int v40; // eax
  void *v41; // ecx
  void *v42; // edx
  int v43; // eax
  unsigned int Vector3_field_0x04; // ecx
  int *v45; // eax
  double v46; // st7
  unsigned int v47; // ecx
  unsigned int Vector3_field_0x08; // esi
  unsigned int v49; // edx
  void *v50; // eax
  double *v51; // eax
  int v53; // edx
  int v56; // ecx
  int v57; // eax
  int v58; // edi
  int v59; // eax
  int v60; // eax
  _DWORD *v61; // eax
  double *v62; // eax
  int GroundHeight; // edi
  int v64; // eax
  unsigned int v65; // edx
  int v66; // ecx
  unsigned int v67; // edx
  Movement *v68; // eax
  int *v69; // eax
  __int16 *v70; // eax
  double v71; // [esp+0h] [ebp-A8h]
  double v72; // [esp+0h] [ebp-A8h]
  double v73; // [esp+0h] [ebp-A8h]
  double v74; // [esp+8h] [ebp-A0h]
  double v75; // [esp+8h] [ebp-A0h]
  double v76; // [esp+8h] [ebp-A0h]
  double v77; // [esp+8h] [ebp-A0h]
  unsigned __int64 v78; // [esp+8h] [ebp-A0h]
  double v79; // [esp+8h] [ebp-A0h]
  double v80; // [esp+8h] [ebp-A0h]
  double v81; // [esp+8h] [ebp-A0h]
  double v82; // [esp+8h] [ebp-A0h]
  __int16 *v83; // [esp+Ch] [ebp-9Ch]
  _WORD *v84; // [esp+10h] [ebp-98h]
  Movement v85; // [esp+20h] [ebp-88h] BYREF
  int v86; // [esp+24h] [ebp-84h] BYREF
  _BYTE v87[24]; // [esp+28h] [ebp-80h] BYREF
  Math v88; // [esp+44h] [ebp-64h] BYREF
  double v89; // [esp+58h] [ebp-50h] BYREF
  double v90; // [esp+60h] [ebp-48h] BYREF
  double v91; // [esp+68h] [ebp-40h]
  double v92; // [esp+78h] [ebp-30h] BYREF
  unsigned int v93[4]; // [esp+80h] [ebp-28h]
  double v94[3]; // [esp+90h] [ebp-18h] BYREF

  _ESI = a1; /*0x5b2104*/
  v11 = *a4 == (void *)g_MissionQueueFrame.localVariables[291]; /*0x5b210e*/
  *(_DWORD *)v88.__pad_0 = a1; /*0x5b2110*/
  if ( v11 /*0x5b2134*/
    && a4[1] == (void *)g_MissionQueueFrame.localVariables[292]
    && a4[2] == (void *)g_MissionQueueFrame.localVariables[293] )
  {
    Math::Hypotenuse2D((int *)a1); /*0x5b213c*/
    __asm { fstp [esp+0A0h+var_A0]; double } /*0x5b214a*/
    Math::CalcAngle(_ESI[2], v74); /*0x5b214f*/
    __asm { fsub ds:dbl_7E2820 } /*0x5b2154*/
    __asm { fmul ds:dbl_7E2818 }
    *(_WORD *)v88.__pad_0 = Math::RoundToInt(a3); /*0x5b216b*/
    v85.Movement_field_00 = *(_DWORD *)v88.__pad_0; /*0x5b217e*/
    LOWORD(v86) = 0x2000; /*0x5b2182*/
    if ( Math::Abs16Cmp((Math *)&v85, &v86, a5) ) /*0x5b2189*/
    {
      LOWORD(v85.Movement_field_00) = v86; /*0x5b2197*/
    }
    else if ( *(__int16 *)Math::Sub16((Math *)&v86, &v89, &v85) >= 0 ) /*0x5b21b5*/
    {
      LOWORD(v85.Movement_field_00) += *a5; /*0x5b21c4*/
    }
    else
    {
      LOWORD(v85.Movement_field_00) -= *a5; /*0x5b21ba*/
    }
    *(_DWORD *)v88.__pad_0 = *(__int16 *)Vector::ToFacingMath((int *)&v89, v84) - 0x3FFF; /*0x5b21de*/
    __asm /*0x5b21e4*/
    {
      fild dword ptr [esp+98h+var_64.__pad_0]
      fmul ds:dbl_7E2810
      fstp qword ptr [esp+98h+var_50]
    }
    Vector3::Magnitude((int *)_ESI); /*0x5b21f2*/
    __asm /*0x5b21f7*/
    {
      fstp qword ptr [esp+98h+var_64.field_4]
      fld qword ptr [esp+98h+var_50]
      fcomp ds:dbl_7E2800
      fnstsw ax
    }
    if ( (_AX & 0x4000) == 0 ) /*0x5b220a*/
    {
      v13 = HIDWORD(v89); /*0x5b220c*/
      Math::ArcTan2(v89); /*0x5b2216*/
      __asm { fdivr qword ptr [esi] } /*0x5b221b*/
      v71 = COERCE_DOUBLE(__PAIR64__(v13, LODWORD(v89))); /*0x5b2222*/
      __asm { fstp qword ptr [esi] } /*0x5b2223*/
      *_ESI = _RT1; /*0x5b2223*/
      Math::ArcTan2(v71); /*0x5b2225*/
      __asm { fdivr qword ptr [esi+8] } /*0x5b222a*/
      __asm { fstp qword ptr [esi+8] }
      _ESI[1] = _RT1; /*0x5b2230*/
    }
    *(_DWORD *)v88.__pad_0 = SLOWORD(v85.Movement_field_00) - 0x3FFF; /*0x5b2241*/
    __asm /*0x5b2245*/
    {
      fild dword ptr [esp+0A0h+var_64.__pad_0]
      fmul ds:dbl_7E2810
      fstp [esp+0A0h+var_A0]; double
    }
    Math::ArcTan2(v75); /*0x5b2252*/
    __asm { fmul qword ptr [esi] } /*0x5b2257*/
    Movement_field_00_low = SLOWORD(v85.Movement_field_00); /*0x5b2259*/
    __asm { fstp qword ptr [esi] } /*0x5b225e*/
    *_ESI = _RT1; /*0x5b225e*/
    *(_DWORD *)v88.__pad_0 = Movement_field_00_low - 0x3FFF; /*0x5b2266*/
    __asm /*0x5b226a*/
    {
      fild dword ptr [esp+0A0h+var_64.__pad_0]
      fmul ds:dbl_7E2810
      fstp [esp+0A0h+var_A0]; double
    }
    Math::ArcTan2(v76); /*0x5b2277*/
    __asm { fmul qword ptr [esi+8] } /*0x5b227c*/
    v18 = SLOWORD(v85.Movement_field_00); /*0x5b227f*/
    __asm { fstp qword ptr [esi+8] } /*0x5b2284*/
    _ESI[1] = _RT1; /*0x5b2284*/
    *(_DWORD *)v88.__pad_0 = v18 - 0x3FFF; /*0x5b228c*/
    __asm /*0x5b2290*/
    {
      fild dword ptr [esp+0A0h+var_64.__pad_0]
      fmul ds:dbl_7E2810
      fstp [esp+0A0h+var_A0]; double
    }
    Math::SinCos(v77); /*0x5b229d*/
    __asm { fmul qword ptr [esp+0A0h+var_64.field_4] } /*0x5b22a2*/
    v20 = *(_DWORD *)_ESI; /*0x5b22ab*/
    __asm { fst qword ptr [esi+10h] } /*0x5b22ad*/
    _ESI[2] = _RT1; /*0x5b22ad*/
    *(_QWORD *)&v92 = __PAIR64__(*((_DWORD *)_ESI + 1), v20); /*0x5b22b3*/
    __asm { fld [esp+98h+var_30] } /*0x5b22be*/
    v22 = *((_DWORD *)_ESI + 3); /*0x5b22c2*/
    v93[0] = *((_DWORD *)_ESI + 2); /*0x5b22c5*/
    v93[1] = v22; /*0x5b22c9*/
    LOWORD(v23) = Math::RoundToInt(a3); /*0x5b22cd*/
    __asm { fld qword ptr [esp+98h+var_28] } /*0x5b22d2*/
    v24 = v23; /*0x5b22d6*/
    LOWORD(v25) = Math::RoundToInt(a3); /*0x5b22d8*/
    HIDWORD(v92) = v25; /*0x5b22dd*/
    LOWORD(v26) = Math::RoundToInt(a3); /*0x5b22e1*/
    v78 = __PAIR64__(v26 + a2->Vector3_field_0x08, HIDWORD(v92) + a2->Vector3_field_0x04); /*0x5b22f9*/
    v27 = Coord::Subtract((Coord *)&v92, *(_DWORD *)a2->__pad_0 + v24, v78, SHIDWORD(v78)); /*0x5b22ff*/
    v28 = v27[1]; /*0x5b2308*/
    v29 = v27[2]; /*0x5b230b*/
    *(_DWORD *)a2->__pad_0 = *v27; /*0x5b230e*/
    a2->Vector3_field_0x04 = v28; /*0x5b2310*/
    a2->Vector3_field_0x08 = v29; /*0x5b2313*/
    __asm /*0x5b2316*/
    {
      fld qword ptr [esi+10h]
      fld qword ptr [esi+8]
      fld qword ptr [esi]
      fld st(1)
      fmul st, st(2)
      fld st(1)
      fmul st, st(2)
      faddp st(1), st
      fld st(3)
      fmul st, st(4)
      faddp st(1), st
    }
    __asm
    {
      fstp [esp+0A0h+var_A0]; double
      fstp st
      fstp st
      fstp st
    }
    Math::Sqrt(v79); /*0x5b233a*/
    LOWORD(result) = Math::RoundToInt(a3); /*0x5b2342*/
    return result; /*0x5b234d*/
  }
  __asm { fld qword ptr [esi+10h] } /*0x5b2352*/
  v92 = *a1; /*0x5b2357*/
  __asm { fld [esp+98h+var_30] } /*0x5b2365*/
  v31 = *((_DWORD *)a1 + 3); /*0x5b2369*/
  v93[0] = *((_DWORD *)_ESI + 2); /*0x5b236c*/
  v93[1] = v31; /*0x5b2370*/
  LOWORD(v32) = Math::RoundToInt(a3); /*0x5b2374*/
  __asm { fld qword ptr [esp+98h+var_28] } /*0x5b2379*/
  v33 = v32; /*0x5b237d*/
  LOWORD(v34) = Math::RoundToInt(a3); /*0x5b237f*/
  HIDWORD(v92) = v34; /*0x5b2384*/
  LOWORD(v35) = Math::RoundToInt(a3); /*0x5b2388*/
  v36 = Coord::Subtract( /*0x5b23a6*/
          (Coord *)&v90,
          *(_DWORD *)a2->__pad_0 + v33,
          a2->Vector3_field_0x04 + HIDWORD(v92),
          a2->Vector3_field_0x08 + v35);
  v37 = v36[1]; /*0x5b23b2*/
  v38 = v36[2]; /*0x5b23b5*/
  *(_DWORD *)a2->__pad_0 = *v36; /*0x5b23b8*/
  a2->Vector3_field_0x04 = v37; /*0x5b23be*/
  a2->Vector3_field_0x08 = v38; /*0x5b23c4*/
  v39 = Vector3::Subtract(a2, (int *)&v90, a4); /*0x5b23c7*/
  v40 = Coord::Length((Coord *)v39); /*0x5b23ce*/
  v41 = *a4; /*0x5b23d3*/
  v42 = a4[1]; /*0x5b23d5*/
  LODWORD(v89) = v40; /*0x5b23d8*/
  v43 = *(_DWORD *)a2->__pad_0; /*0x5b23dc*/
  v88.field_4 = v41; /*0x5b23de*/
  Vector3_field_0x04 = a2->Vector3_field_0x04; /*0x5b23e2*/
  v88.field_8 = v42; /*0x5b23e5*/
  *(_DWORD *)v87 = v43; /*0x5b23e9*/
  *(_DWORD *)&v87[4] = Vector3_field_0x04; /*0x5b23f5*/
  v45 = Coord2D::Sub((Coord2D *)v87, (int *)&v90, &v88.field_4); /*0x5b23ff*/
  v46 = Vector::TwoDMagnitudeMath(v45); /*0x5b2406*/
  v47 = (unsigned int)a4[2]; /*0x5b240b*/
  Vector3_field_0x08 = a2->Vector3_field_0x08; /*0x5b240e*/
  v49 = (unsigned int)a4[1]; /*0x5b2411*/
  v88.field_4 = v50; /*0x5b2414*/
  v51 = (double *)Coord::Subtract( /*0x5b242c*/
                    (Coord *)&v90,
                    (int)*a4 - *(_DWORD *)a2->__pad_0,
                    v49 - a2->Vector3_field_0x04,
                    v47 - Vector3_field_0x08);
  v92 = *v51; /*0x5b2433*/
  __asm { fild dword ptr [esp+98h+var_30] } /*0x5b243e*/
  v93[0] = *((_DWORD *)v51 + 2); /*0x5b2449*/
  __asm /*0x5b2454*/
  {
    fstp qword ptr [esp+98h+var_48]
    fild dword ptr [esp+98h+var_30+4]
  }
  *(double *)v87 = v90; /*0x5b2464*/
  __asm { fstp [esp+98h+var_40] } /*0x5b246c*/
  __asm
  {
    fild [esp+98h+var_28]
    fstp [esp+98h+var_70]
  }
  *(double *)&v87[8] = v91; /*0x5b2489*/
  qmemcpy(v94, v87, sizeof(v94)); /*0x5b248d*/
  _ESI = *(_DWORD *)v88.__pad_0; /*0x5b248f*/
  __asm { fld qword ptr [esi+8] } /*0x5b2498*/
  __asm
  {
    fchs
    fstp [esp+0A8h+var_A8]; double
  }
  Math::CalcAngle(v72, **(double **)v88.__pad_0); /*0x5b24a5*/
  __asm { fsub ds:dbl_7E2820 } /*0x5b24aa*/
  __asm { fmul ds:dbl_7E2818 }
  *(_WORD *)v88.__pad_0 = Math::RoundToInt(v46); /*0x5b24c5*/
  __asm { fld [esp+98h+var_10] } /*0x5b24d5*/
  v86 = *(_DWORD *)v88.__pad_0; /*0x5b24e1*/
  __asm /*0x5b24e5*/
  {
    fchs
    fstp [esp+0A8h+var_A8]; double
  }
  Math::CalcAngle(v73, v94[0]); /*0x5b24ea*/
  __asm { fsub ds:dbl_7E2820 } /*0x5b24ef*/
  __asm { fmul ds:dbl_7E2818 }
  *(_WORD *)v87 = Math::RoundToInt(v46); /*0x5b2510*/
  if ( Math::Abs16Cmp((Math *)&v86, v87, a5) ) /*0x5b2515*/
  {
    LOWORD(v86) = *(_WORD *)v87; /*0x5b2523*/
  }
  else if ( *(__int16 *)Math::Sub16((Math *)v87, &v88, &v86) >= 0 ) /*0x5b2541*/
  {
    LOWORD(v86) = *a5 + v86; /*0x5b2550*/
  }
  else
  {
    LOWORD(v86) = v86 - *a5; /*0x5b2546*/
  }
  Vector2::NormalizeNonZero((int *)_ESI); /*0x5b2557*/
  Function::41C430((double *)_ESI); /*0x5b255e*/
  __asm { fstp qword ptr [esp+98h+var_88.field_8] } /*0x5b2568*/
  *(_DWORD *)v88.__pad_0 = (__int16)v86 - 0x3FFF; /*0x5b2575*/
  __asm /*0x5b2579*/
  {
    fild dword ptr [esp+0A0h+var_64.__pad_0]
    fmul ds:dbl_7E2810
    fstp [esp+0A0h+var_A0]; double
  }
  Math::ArcTan2(v80); /*0x5b2586*/
  __asm { fmul qword ptr [esp+0A0h+var_88.field_8] } /*0x5b258b*/
  v53 = (__int16)v86; /*0x5b258f*/
  __asm { fstp qword ptr [esi] } /*0x5b2594*/
  *(double *)_ESI = _RT1; /*0x5b2594*/
  *(_DWORD *)v88.__pad_0 = v53 - 0x3FFF; /*0x5b259c*/
  __asm /*0x5b25a0*/
  {
    fild dword ptr [esp+0A0h+var_64.__pad_0]
    fmul ds:dbl_7E2810
    fstp [esp+0A0h+var_A0]; double
  }
  Math::SinCos(v81); /*0x5b25ad*/
  __asm { fmul qword ptr [esp+0A0h+var_88.field_8] } /*0x5b25b2*/
  __asm
  {
    fchs
    fstp qword ptr [esi+8]
  }
  *(double *)(_ESI + 8) = _RT1; /*0x5b25bd*/
  Math::Hypotenuse2D((int *)_ESI); /*0x5b25c0*/
  __asm { fstp [esp+0A0h+var_A0]; double } /*0x5b25ce*/
  Math::CalcAngle(*(double *)(_ESI + 16), v82); /*0x5b25d3*/
  __asm { fsub ds:dbl_7E2820 } /*0x5b25d8*/
  __asm { fmul ds:dbl_7E2818 }
  *(_WORD *)v88.__pad_0 = Math::RoundToInt(v46); /*0x5b25ec*/
  v85.Movement_field_00 = *(_DWORD *)v88.__pad_0; /*0x5b25fa*/
  if ( a6
    || !a7 && (int)v88.field_4 <= (a8 != 0 ? 6 : 3) << 8
    || (unsigned __int8)((unsigned int)((*(_DWORD *)a5 >> 7) + 1) >> 1) <= 1u )
  {
    if ( !a9 ) /*0x5b28a1*/
    {
      LOWORD(v89) = 256; /*0x5b28b6*/
      v68 = (Movement *)Movement::Check((Movement *)a5, &v88, &v89); /*0x5b28bd*/
      v69 = Movement::DivideAndStoreScaled(v68, (int *)&v88.field_4, 2); /*0x5b28c4*/
      v70 = (__int16 *)Vector::ToFacingMath((int *)v87, v69); /*0x5b28d6*/
      Movement::CompareAbsCoords(&v85, v70, v83); /*0x5b28e0*/
    }
    goto LABEL_49; /*0x5b28e0*/
  }
  __asm { fld qword ptr [esi+10h] } /*0x5b2640*/
  v90 = *(double *)_ESI; /*0x5b2645*/
  __asm { fld qword ptr [esp+98h+var_48] } /*0x5b2653*/
  v56 = *(_DWORD *)(_ESI + 12); /*0x5b2657*/
  LODWORD(v91) = *(_DWORD *)(_ESI + 8); /*0x5b265a*/
  HIDWORD(v91) = v56; /*0x5b265e*/
  LOWORD(v57) = Math::RoundToInt(v46); /*0x5b2662*/
  __asm { fld [esp+98h+var_40] } /*0x5b2667*/
  v58 = v57; /*0x5b266b*/
  LOWORD(v59) = Math::RoundToInt(v46); /*0x5b266d*/
  HIDWORD(v90) = v59; /*0x5b2672*/
  LOWORD(v60) = Math::RoundToInt(v46); /*0x5b2676*/
  v61 = Coord::Subtract((Coord *)&v88.field_4, 6 * v58, 6 * HIDWORD(v90), 6 * v60); /*0x5b2695*/
  v62 = (double *)Coord::Subtract( /*0x5b26b9*/
                    (Coord *)v87,
                    *(_DWORD *)a2->__pad_0 + *v61,
                    a2->Vector3_field_0x04 + v61[1],
                    a2->Vector3_field_0x08 + v61[2]);
  v90 = *v62; /*0x5b26c0*/
  LODWORD(v91) = *((_DWORD *)v62 + 2); /*0x5b26d8*/
  GroundHeight = Cell::GetGroundHeight(&v90); /*0x5b26eb*/
  if ( (Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], &v90)->flags[0] & 0x100) != 0 ) /*0x5b26fb*/
    GroundHeight += g_MissionQueueFrame.localVariables[304]; /*0x5b26fd*/
  v64 = SLODWORD(v89) / 256; /*0x5b2713*/
  if ( a7 || a8 ) /*0x5b271f*/
  {
    v64 = 10; /*0x5b272d*/
  }
  else if ( v64 >= 5 ) /*0x5b2724*/
  {
    v64 = 5; /*0x5b2726*/
  }
  if ( !a9 ) /*0x5b2737*/
  {
    v65 = a2->Vector3_field_0x08; /*0x5b2744*/
    v66 = v65 - g_MissionQueueFrame.localVariables[307] * v64 - GroundHeight; /*0x5b274b*/
    if ( v66 >= -20 ) /*0x5b2750*/
    {
      if ( v66 <= 20 ) /*0x5b275a*/
        goto LABEL_34; /*0x5b275a*/
      v67 = v65 - 18; /*0x5b275c*/
    }
    else
    {
      v67 = v65 + 18; /*0x5b2752*/
    }
    a2->Vector3_field_0x08 = v67; /*0x5b275f*/
LABEL_34:
    if ( v66 >= g_MissionQueueFrame.localVariables[307] / -2 ) /*0x5b2773*/
    {
      if ( v66 <= g_MissionQueueFrame.localVariables[307] / 2 ) /*0x5b27fa*/
      {
        LOWORD(v88.field_4) = 0x4000; /*0x5b2875*/
        LOWORD(v89) = *a5 / 2; /*0x5b2888*/
        Movement::CompareAbsCoords(&v85, (__int16 *)&v88.field_4, (__int16 *)&v89); /*0x5b289a*/
      }
      else
      {
        *(_WORD *)v88.__pad_0 = 18432; /*0x5b27ff*/
        LOWORD(v89) = *a5 / 2; /*0x5b2812*/
        *(_DWORD *)v87 = LODWORD(v89); /*0x5b281f*/
        if ( Math::Abs16Cmp((Math *)&v85, &v88, (__int16 *)v87) ) /*0x5b2829*/
        {
          LOWORD(v85.Movement_field_00) = *(_WORD *)v88.__pad_0; /*0x5b2837*/
        }
        else if ( *(__int16 *)Math::Sub16(&v88, &v89, &v85) >= 0 ) /*0x5b2858*/
        {
          LOWORD(v85.Movement_field_00) += *(_WORD *)v87; /*0x5b286b*/
        }
        else
        {
          LOWORD(v85.Movement_field_00) -= *(_WORD *)v87; /*0x5b285f*/
        }
      }
    }
    else
    {
      *(_WORD *)v87 = 0x2000; /*0x5b2778*/
      LOWORD(v89) = *a5 / 2; /*0x5b278b*/
      *(_DWORD *)v88.__pad_0 = LODWORD(v89); /*0x5b2798*/
      if ( Math::Abs16Cmp((Math *)&v85, v87, (__int16 *)v88.__pad_0) ) /*0x5b27a2*/
      {
        LOWORD(v85.Movement_field_00) = *(_WORD *)v87; /*0x5b27b0*/
      }
      else if ( *(__int16 *)Math::Sub16((Math *)v87, &v89, &v85) >= 0 ) /*0x5b27d1*/
      {
        LOWORD(v85.Movement_field_00) += *(_WORD *)v88.__pad_0; /*0x5b27e7*/
      }
      else
      {
        LOWORD(v85.Movement_field_00) -= *(_WORD *)v88.__pad_0; /*0x5b27d8*/
      }
    }
  }
LABEL_49:
  Movement::UpdateLocomotion((double *)_ESI, (__int16 *)&v85); /*0x5b28e5*/
  if ( a7 ) /*0x5b28f6*/
    v93[0] = 0; /*0x5b28f8*/
  else
    v93[0] = (signed int)v93[0] / 4; /*0x5b290f*/
  return Coord::Length((Coord *)&v92); /*0x5b2347*/
}



// ==== 0x005B2930  Movement::Check  this=Movement  sig=csp ====
_DWORD *__thiscall Movement::Check(Movement *this, _DWORD *a2, _WORD *a3)
{
  LOWORD(a3) = LOWORD(this->Movement_field_00) + *a3; /*0x5b293e*/
  *a2 = a3; /*0x5b2947*/
  return a2; /*0x5b2949*/
}



// ==== 0x005B2950  Math::Sub16  this=Math  sig=csp ====
_DWORD *__thiscall Math::Sub16(Math *this, _DWORD *a2, _WORD *a3)
{
  LOWORD(a3) = *(_WORD *)this->__pad_0 - *a3; /*0x5b295a*/
  *a2 = a3; /*0x5b2967*/
  return a2; /*0x5b2969*/
}



// ==== 0x005B2970  Movement::DivideAndStoreScaled  this=Movement  sig=csp ====
int *__thiscall Movement::DivideAndStoreScaled(Movement *this, int *a2, int a3)
{
  LOWORD(a3) = SLOWORD(this->Movement_field_00) / a3; /*0x5b2978*/
  *a2 = a3; /*0x5b2985*/
  return a2; /*0x5b2987*/
}



// ==== 0x005B2990  Math::Abs16Cmp  this=Math  sig=csp ====
bool __thiscall Math::Abs16Cmp(Math *this, _WORD *a2, __int16 *a3)
{
  return abs16(*a3) >= (int)abs16(*(_WORD *)this->__pad_0 - *a2); /*0x5b29b3*/
}



// ==== 0x005B29C0  Movement::CompareAbsCoords  this=Movement  sig=csp ====
char __thiscall Movement::CompareAbsCoords(Movement *this, __int16 *a2, __int16 *a3)
{
  __int16 v3; // bp
  __int16 v4; // di
  __int16 Movement_field_00; // si

  v3 = *a3; /*0x5b29ca*/
  v4 = *a2; /*0x5b29cf*/
  Movement_field_00 = this->Movement_field_00; /*0x5b29d2*/
  if ( abs16(*a3) < (int)abs16(LOWORD(this->Movement_field_00) - *a2) ) /*0x5b29f3*/
  {
    if ( (__int16)(v4 - Movement_field_00) >= 0 ) /*0x5b2a06*/
      LOWORD(this->Movement_field_00) = Movement_field_00 + v3; /*0x5b2a19*/
    else
      LOWORD(this->Movement_field_00) = Movement_field_00 - v3; /*0x5b2a0b*/
    return 0; /*0x5b2a10*/
  }
  else
  {
    LOWORD(this->Movement_field_00) = v4; /*0x5b29f5*/
    return 1; /*0x5b29fb*/
  }
}



// ==== 0x005B2A30  Movement::UpdateLocomotion  this=RecoilData  sig=csp ====
void __thiscall sub_5B2A30(double *this, __int16 *a2)
{
  double v3; // st7
  double v4; // st7
  double v5; // [esp+18h] [ebp-10h]
  double v6; // [esp+20h] [ebp-8h]

  v3 = Math::Sqrt(*this * *this + this->u32_4 * this->u32_4); /*0x5b2a57*/
  v4 = Math::CalcAngle(this->u32_8, v3); /*0x5b2a72*/
  v5 = (double)((__int16)Math::RoundToInt((v4 - 1.570796326794897) * -10430.06004058427) - 0x3FFF) /*0x5b2aa2*/
     * -0.00009587672516830327;
  v6 = Math::Sqrt(this->u32_8 * this->u32_8 + *this * *this + this->u32_4 * this->u32_4); /*0x5b2acc*/
  if ( v5 != 0.0 ) /*0x5b2ae2*/
  {
    *this = *this / Math::ArcTan2(v5); /*0x5b2af7*/
    this->u32_4 = this->u32_4 / Math::ArcTan2(v5); /*0x5b2b04*/
  }
  *this = Math::ArcTan2((double)(*a2 - 0x3FFF) * -0.00009587672516830327) * *this; /*0x5b2b2e*/
  this->u32_4 = Math::ArcTan2((double)(*a2 - 0x3FFF) * -0.00009587672516830327) * this->u32_4; /*0x5b2b51*/
  this->u32_8 = Math::SinCos((double)(*a2 - 0x3FFF) * -0.00009587672516830327) * v6; /*0x5b2b7b*/
}



// ==== 0x005B2B90  sub_5B2B90  this=-  sig=ida-proto ====
void sub_5B2B90()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x5b2b9c*/
  dbl_ABEF78 = Math::Sqrt(v0 + v0); /*0x5b2bae*/
}



// ==== 0x005B2BC0  sub_5B2BC0  this=-  sig=ida-proto ====
void sub_5B2BC0()
{
  dbl_ABEFC8 = dbl_ABEF78 / 60.0; /*0x5b2bcc*/
}



// ==== 0x005B2BE0  sub_5B2BE0  this=-  sig=ida-proto ====
void sub_5B2BE0()
{
  dbl_ABEFB0 = 1.0 / dbl_ABEFC8; /*0x5b2bec*/
}



// ==== 0x005B2C00  sub_5B2C00  this=-  sig=ida-proto ====
void sub_5B2C00()
{
  dbl_ABEFA8 = 0.0174532925199433 * 45.0; /*0x5b2c0c*/
}



// ==== 0x005B2C20  sub_5B2C20  this=-  sig=ida-proto ====
void sub_5B2C20()
{
  dbl_ABEF80 = 0.0174532925199433 * 60.0; /*0x5b2c2c*/
}



// ==== 0x005B2C40  sub_5B2C40  this=-  sig=ida-proto ====
void sub_5B2C40()
{
  dbl_ABEF58 = 0.0174532925199433 * 90.0; /*0x5b2c4c*/
}



// ==== 0x005B2C60  sub_5B2C60  this=-  sig=ida-proto ====
__int64 sub_5B2C60()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_ABEF58 - dbl_ABEF80); /*0x5b2c72*/
  result = Math::RoundToInt(v0 * dbl_ABEF78 * 0.5); /*0x5b2c86*/
  dword_ABEFD0 = result; /*0x5b2c8b*/
  return result; /*0x5b2c90*/
}



// ==== 0x005B2CA0  sub_5B2CA0  this=-  sig=ida-proto ====
void sub_5B2CA0()
{
  dbl_ABEF88 = Math::ArcTan((double)dword_ABEFD0 * 0.00390625); /*0x5b2cb7*/
}



// ==== 0x005B2CD0  sub_5B2CD0  this=-  sig=ida-proto ====
void sub_5B2CD0()
{
  dbl_ABEFA0 = Math::ArcTan((double)(2 * dword_ABEFD0) / dbl_ABEF78); /*0x5b2cf2*/
}



// ==== 0x005B2D00  sub_5B2D00  this=-  sig=ida-proto ====
__int64 sub_5B2D00()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_ABEFD0) + 0.5); /*0x5b2d1b*/
  dword_ABEFC4 = result; /*0x5b2d20*/
  return result; /*0x5b2d26*/
}



// ==== 0x005B2D30  sub_5B2D30  this=-  sig=ida-proto ====
int sub_5B2D30()
{
  word_ABEF70 = 0; /*0x5b2d32*/
  word_ABEF72 = 0; /*0x5b2d38*/
  return 0; /*0x5b2d3e*/
}



// ==== 0x005B2D40  sub_5B2D40  this=-  sig=ida-proto ====
int sub_5B2D40()
{
  dword_ABEF90 = 0; /*0x5b2d42*/
  dword_ABEF94 = 0; /*0x5b2d47*/
  dword_ABEF98 = 0; /*0x5b2d4c*/
  return 0; /*0x5b2d51*/
}



// ==== 0x005B2D60  sub_5B2D60  this=-  sig=ida-proto ====
int sub_5B2D60()
{
  dword_ABEFC0 = 0; /*0x5b2d65*/
  dword_ABEFB8 = 128; /*0x5b2d6f*/
  dword_ABEFBC = 128; /*0x5b2d74*/
  return 128; /*0x5b2d79*/
}



// ==== 0x005B2D80  sub_5B2D80  this=-  sig=ida-proto ====
int sub_5B2D80()
{
  dword_ABEF60 = 0; /*0x5b2d82*/
  dword_ABEF64 = 0; /*0x5b2d87*/
  dword_ABEF68 = 0; /*0x5b2d8c*/
  dword_ABEF6C = 0; /*0x5b2d91*/
  return 0; /*0x5b2d96*/
}



// ==== 0x005B2DA0  MissionClass::Constructor  this=MissionClass  sig=csp ====
int __thiscall sub_5B2DA0(int this)
{
  wchar_t *v2; // ecx

  ObjectClass::ctor((_DWORD *)this); /*0x5b2da3*/
  *(_DWORD *)(this + 172) = -1; /*0x5b2dab*/
  *(_DWORD *)(this + 176) = -1; /*0x5b2db1*/
  *(_DWORD *)(this + 180) = -1; /*0x5b2db7*/
  *(_BYTE *)(this + 184) = 0; /*0x5b2dbf*/
  *(_DWORD *)(this + 188) = 0; /*0x5b2dc5*/
  *(_DWORD *)(this + 192) = 0; /*0x5b2dcb*/
  *(_DWORD *)(this + 196) = 0; /*0x5b2dd1*/
  v2 = dword_A8ED84; /*0x5b2dd7*/
  *(_DWORD *)(this + 208) = 0; /*0x5b2ddd*/
  *(_DWORD *)(this + 200) = v2; /*0x5b2de3*/
  *(_DWORD *)this = &MissionClass::`vftable'; /*0x5b2de9*/
  *(_DWORD *)(this + 4) = &MissionClass::`vftable'; /*0x5b2def*/
  *(_DWORD *)(this + 8) = &MissionClass::`vftable'; /*0x5b2df6*/
  *(_DWORD *)(this + 12) = &MissionClass::`vftable'; /*0x5b2dfd*/
  return this; /*0x5b2e06*/
}



// ==== 0x005B2E10  MissionClass::Return450A  this=MissionClass  sig=csp ====
int __thiscall MissionClass::Return450A(MissionClass *this)
{
  return 450; /*0x5b2e15*/
}



// ==== 0x005B2E20  MissionClass::Return450B  this=MissionClass  sig=csp ====
int __thiscall MissionClass::Return450B(MissionClass *this)
{
  return 450; /*0x5b2e25*/
}



// ==== 0x005B2E30  MissionClass::Return450C  this=MissionClass  sig=csp ====
int __thiscall MissionClass::Return450C(MissionClass *this)
{
  return 450; /*0x5b2e35*/
}



// ==== 0x005B2E40  MissionClass::StubReturn450  this=MissionClass  sig=csp ====
int TechnoClass::StubReturn450(MissionClass *this)
{
  return 450; /*0x5b2e45*/
}



// ==== 0x005B2E50  MissionClass::StubReturn450  this=MissionClass  sig=csp ====
int IPersistStream::StubReturn450(MissionClass *this)
{
  return 450; /*0x5b2e55*/
}



// ==== 0x005B2E60  MissionClass::COMStub_Ret450_134  this=MissionClass  sig=csp ====
int __thiscall AbstractClass::COMStub_Ret450_134(MissionClass *this)
{
  return 450; /*0x5b2e65*/
}



// ==== 0x005B2E70  MissionClass::CheckState1  this=MissionClass  sig=csp ====
int TechnoClass::CheckState1(MissionClass *this)
{
  return 450; /*0x5b2e75*/
}



// ==== 0x005B2E80  MissionClass::CheckState2  this=MissionClass  sig=csp ====
int TechnoClass::CheckState2(MissionClass *this)
{
  return 450; /*0x5b2e85*/
}



// ==== 0x005B2E90  MissionClass::CheckMissionStatus  this=MissionClass  sig=csp ====
int AircraftClass::CheckMissionStatus(MissionClass *this)
{
  return 450; /*0x5b2e95*/
}



// ==== 0x005B2EA0  MissionClass::COMStub_Ret450_138  this=MissionClass  sig=csp ====
int __thiscall AbstractClass::COMStub_Ret450_138(MissionClass *this)
{
  return 450; /*0x5b2ea5*/
}



// ==== 0x005B2EB0  MissionClass::COMStub_Ret450_139  this=MissionClass  sig=csp ====
int __thiscall AbstractClass::COMStub_Ret450_139(MissionClass *this)
{
  return 450; /*0x5b2eb5*/
}



// ==== 0x005B2EC0  MissionClass::COMStub_Ret450_140  this=MissionClass  sig=csp ====
int __thiscall AbstractClass::COMStub_Ret450_140(MissionClass *this)
{
  return 450; /*0x5b2ec5*/
}



// ==== 0x005B2ED0  MissionClass::Return450D  this=MissionClass  sig=csp ====
int __thiscall MissionClass::Return450D(MissionClass *this)
{
  return 450; /*0x5b2ed5*/
}



// ==== 0x005B2EE0  MissionClass::Return450E  this=MissionClass  sig=csp ====
int __thiscall MissionClass::Return450E(MissionClass *this)
{
  return 450; /*0x5b2ee5*/
}



// ==== 0x005B2EF0  MissionClass::GetMaxSize  this=MissionClass  sig=csp ====
int IPersistStream::GetMaxSize(MissionClass *this)
{
  return 450; /*0x5b2ef5*/
}



// ==== 0x005B2F00  MissionClass::COMStub_Ret450_144  this=MissionClass  sig=csp ====
int __thiscall AbstractClass::COMStub_Ret450_144(MissionClass *this)
{
  return 450; /*0x5b2f05*/
}



// ==== 0x005B2F10  MissionClass::Return450G  this=MissionClass  sig=csp ====
int MissionClass::Return450G(MissionClass *this)
{
  return 450; /*0x5b2f15*/
}



// ==== 0x005B2F20  MissionClass::Return450H  this=MissionClass  sig=csp ====
int MissionClass::Return450H(MissionClass *this)
{
  return 450; /*0x5b2f25*/
}



// ==== 0x005B2F30  MissionClass::CheckMissionStatus2  this=MissionClass  sig=csp ====
int AircraftClass::CheckMissionStatus2(MissionClass *this)
{
  return 450; /*0x5b2f35*/
}



// ==== 0x005B2F40  MissionClass::Return450I  this=MissionClass  sig=csp ====
int MissionClass::Return450I(MissionClass *this)
{
  return 450; /*0x5b2f45*/
}



// ==== 0x005B2F50  MissionClass::Return450J  this=MissionClass  sig=csp ====
int MissionClass::Return450J(MissionClass *this)
{
  return 450; /*0x5b2f55*/
}



// ==== 0x005B2F60  MissionClass::COMStub_Ret450_150  this=MissionClass  sig=csp ====
int __thiscall AbstractClass::COMStub_Ret450_150(MissionClass *this)
{
  return 450; /*0x5b2f65*/
}



// ==== 0x005B2F70  MissionClass::COMStub_Ret450_151  this=MissionClass  sig=csp ====
int __thiscall AbstractClass::COMStub_Ret450_151(MissionClass *this)
{
  return 450; /*0x5b2f75*/
}



// ==== 0x005B2F80  MissionClass::Return450K  this=MissionClass  sig=csp ====
int __thiscall MissionClass::Return450K(MissionClass *this)
{
  return 450; /*0x5b2f85*/
}



// ==== 0x005B2F90  MissionClass::Return450L  this=MissionClass  sig=csp ====
int __thiscall MissionClass::Return450L(MissionClass *this)
{
  return 450; /*0x5b2f95*/
}



// ==== 0x005B2FA0  MissionClass::Return450F  this=MissionClass  sig=csp ====
int __thiscall MissionClass::Return450F(MissionClass *this)
{
  return 450; /*0x5b2fa5*/
}



// ==== 0x005B2FB0  MissionClass::Return450M  this=MissionClass  sig=csp ====
int __thiscall MissionClass::Return450M(MissionClass *this)
{
  return 450; /*0x5b2fb5*/
}



// ==== 0x005B2FC0  MissionClass::Return450N  this=MissionClass  sig=csp ====
int __thiscall MissionClass::Return450N(MissionClass *this)
{
  return 450; /*0x5b2fc5*/
}



// ==== 0x005B2FD0  MissionClass::SetState  this=MissionClass  sig=csp ====
int __thiscall MissionClass::SetState(MissionClass *this)
{
  int result; // eax
  int *missionTimer; // ecx
  int v3; // [esp+4h] [ebp-8h]
  int v4; // [esp+10h] [ebp+4h]

  result = v4; /*0x5b2fdc*/
  if ( this->currentMission != 28 || v4 != 5 ) /*0x5b2fe5*/
  {
    this->currentMission = v4; /*0x5b2fe9*/
    this->queuedMission = -1; /*0x5b2fef*/
    this->missionQueued = 0; /*0x5b2ff9*/
    this->missionStatus = 0; /*0x5b2fff*/
    this->missionStartTime = *(_DWORD *)&stru_A8EB00.?[416]; /*0x5b300a*/
    this->missionData = 0; /*0x5b3010*/
    missionTimer = this->missionTimer; /*0x5b301b*/
    *missionTimer = *(_DWORD *)&stru_A8EB00.?[416]; /*0x5b3021*/
    missionTimer[1] = v3; /*0x5b3027*/
    missionTimer[2] = 0; /*0x5b302a*/
    return v3; /*0x5b3023*/
  }
  return result; /*0x5b302d*/
}



// ==== 0x005B3040  MissionClass::GetPrimaryOrFallback  this=MissionClass  sig=csp ====
int __thiscall MissionClass::GetPrimaryOrFallback(MissionClass *this)
{
  int result; // eax

  result = this->currentMission; /*0x5b3040*/
  if ( result == -1 ) /*0x5b3049*/
    return this->queuedMission; /*0x5b304b*/
  return result; /*0x5b3051*/
}



// ==== 0x005B3060  MissionClass::ProcessCloaking  this=MissionClass  sig=csp ====
char __thiscall ObjectClass::ProcessCloaking(MissionClass *this)
{
  int health; // eax
  int v3; // edx
  int *missionTimer; // esi
  int v6; // [esp+Ch] [ebp-8h]

  ObjectClass::DetectCloaked((ObjectClass *)this); /*0x5b3067*/
  LOBYTE(health) = this->?; /*0x5b306c*/
  if ( !(_BYTE)health ) /*0x5b3074*/
    return health; /*0x5b3074*/
  v3 = this->missionTimer[0]; /*0x5b307a*/
  health = this->missionTimer[2]; /*0x5b3080*/
  missionTimer = this->missionTimer; /*0x5b3086*/
  if ( v3 == -1 ) /*0x5b308f*/
    goto LABEL_5; /*0x5b308f*/
  if ( *(_DWORD *)&stru_A8EB00.?[416] - v3 < health ) /*0x5b309b*/
  {
    health -= *(_DWORD *)&stru_A8EB00.?[416] - v3; /*0x5b309d*/
LABEL_5:
    if ( health ) /*0x5b30a1*/
      return health; /*0x5b30a1*/
  }
  health = this->?; /*0x5b30a7*/
  if ( health > 0 ) /*0x5b30ac*/
  {
    switch ( this->currentMission ) /*0x5b30c1*/
    {
      case 1: /*0x5b30c1*/
        health = (*((int (__thiscall **)(MissionClass *))this->ObjectClass + 132))(this); /*0x5b3176*/
        *missionTimer = *(_DWORD *)&stru_A8EB00.?[416]; /*0x5b3183*/
        this->missionTimer[1] = v6; /*0x5b3189*/
        this->missionTimer[2] = health; /*0x5b318c*/
        break; /*0x5b3193*/
      case 2: /*0x5b30c1*/
        health = (*((int (__thiscall **)(MissionClass *))this->ObjectClass + 139))(this); /*0x5b3352*/
        *missionTimer = *(_DWORD *)&stru_A8EB00.?[416]; /*0x5b335f*/
        this->missionTimer[1] = v6; /*0x5b3365*/
        this->missionTimer[2] = health; /*0x5b3368*/
        break; /*0x5b336f*/
      case 4: /*0x5b30c1*/
        health = (*((int (__thiscall **)(MissionClass *))this->ObjectClass + 140))(this); /*0x5b3198*/
        *missionTimer = *(_DWORD *)&stru_A8EB00.?[416]; /*0x5b31a5*/
        this->missionTimer[1] = v6; /*0x5b31ab*/
        this->missionTimer[2] = health; /*0x5b31ae*/
        break; /*0x5b31b5*/
      case 5: /*0x5b30c1*/
      case 6: /*0x5b30c1*/
        health = (*((int (__thiscall **)(MissionClass *))this->ObjectClass + 135))(this); /*0x5b32ec*/
        *missionTimer = *(_DWORD *)&stru_A8EB00.?[416]; /*0x5b32f9*/
        this->missionTimer[1] = v6; /*0x5b32ff*/
        this->missionTimer[2] = health; /*0x5b3302*/
        break; /*0x5b3309*/
      case 7: /*0x5b30c1*/
        health = (*((int (__thiscall **)(MissionClass *))this->ObjectClass + 144))(this); /*0x5b3110*/
        *missionTimer = *(_DWORD *)&stru_A8EB00.?[416]; /*0x5b311d*/
        this->missionTimer[1] = v6; /*0x5b3123*/
        this->missionTimer[2] = health; /*0x5b3126*/
        break; /*0x5b312d*/
      case 8: /*0x5b30c1*/
      case 0x11: /*0x5b30c1*/
        health = (*((int (__thiscall **)(MissionClass *))this->ObjectClass + 133))(this); /*0x5b330e*/
        *missionTimer = *(_DWORD *)&stru_A8EB00.?[416]; /*0x5b331b*/
        this->missionTimer[1] = v6; /*0x5b3321*/
        this->missionTimer[2] = health; /*0x5b3324*/
        break; /*0x5b332b*/
      case 9: /*0x5b30c1*/
        health = (*((int (__thiscall **)(MissionClass *))this->ObjectClass + 134))(this); /*0x5b3330*/
        *missionTimer = *(_DWORD *)&stru_A8EB00.?[416]; /*0x5b333d*/
        this->missionTimer[1] = v6; /*0x5b3343*/
        this->missionTimer[2] = health; /*0x5b3346*/
        break; /*0x5b334d*/
      case 0xA: /*0x5b30c1*/
        health = (*((int (__thiscall **)(MissionClass *))this->ObjectClass + 137))(this); /*0x5b31ba*/
        *missionTimer = *(_DWORD *)&stru_A8EB00.?[416]; /*0x5b31c7*/
        this->missionTimer[1] = v6; /*0x5b31cd*/
        this->missionTimer[2] = health; /*0x5b31d0*/
        break; /*0x5b31d7*/
      case 0xB: /*0x5b30c1*/
        health = (*((int (__thiscall **)(MissionClass *))this->ObjectClass + 136))(this); /*0x5b31dc*/
        *missionTimer = *(_DWORD *)&stru_A8EB00.?[416]; /*0x5b31e9*/
        this->missionTimer[1] = v6; /*0x5b31ef*/
        this->missionTimer[2] = health; /*0x5b31f2*/
        break; /*0x5b31f9*/
      case 0xC: /*0x5b30c1*/
        health = (*((int (__thiscall **)(MissionClass *))this->ObjectClass + 141))(this); /*0x5b31fe*/
        *missionTimer = *(_DWORD *)&stru_A8EB00.?[416]; /*0x5b320b*/
        this->missionTimer[1] = v6; /*0x5b3211*/
        this->missionTimer[2] = health; /*0x5b3214*/
        break; /*0x5b321b*/
      case 0xD: /*0x5b30c1*/
        health = (*((int (__thiscall **)(MissionClass *))this->ObjectClass + 142))(this); /*0x5b3220*/
        *missionTimer = *(_DWORD *)&stru_A8EB00.?[416]; /*0x5b322d*/
        this->missionTimer[1] = v6; /*0x5b3233*/
        this->missionTimer[2] = health; /*0x5b3236*/
        break; /*0x5b323d*/
      case 0xE: /*0x5b30c1*/
        health = (*((int (__thiscall **)(MissionClass *))this->ObjectClass + 131))(this); /*0x5b3242*/
        *missionTimer = *(_DWORD *)&stru_A8EB00.?[416]; /*0x5b324f*/
        this->missionTimer[1] = v6; /*0x5b3255*/
        this->missionTimer[2] = health; /*0x5b3258*/
        break; /*0x5b325f*/
      case 0xF: /*0x5b30c1*/
        health = (*((int (__thiscall **)(MissionClass *))this->ObjectClass + 138))(this); /*0x5b3374*/
        *missionTimer = *(_DWORD *)&stru_A8EB00.?[416]; /*0x5b3381*/
        this->missionTimer[1] = v6; /*0x5b3387*/
        this->missionTimer[2] = health; /*0x5b338a*/
        break; /*0x5b3391*/
      case 0x10: /*0x5b30c1*/
        health = (*((int (__thiscall **)(MissionClass *))this->ObjectClass + 143))(this); /*0x5b3264*/
        *missionTimer = *(_DWORD *)&stru_A8EB00.?[416]; /*0x5b3271*/
        this->missionTimer[1] = v6; /*0x5b3277*/
        this->missionTimer[2] = health; /*0x5b327a*/
        break; /*0x5b3281*/
      case 0x12: /*0x5b30c1*/
        health = (*((int (__thiscall **)(MissionClass *))this->ObjectClass + 145))(this); /*0x5b3132*/
        *missionTimer = *(_DWORD *)&stru_A8EB00.?[416]; /*0x5b313f*/
        this->missionTimer[1] = v6; /*0x5b3145*/
        this->missionTimer[2] = health; /*0x5b3148*/
        break; /*0x5b314f*/
      case 0x13: /*0x5b30c1*/
        health = (*((int (__thiscall **)(MissionClass *))this->ObjectClass + 146))(this); /*0x5b3154*/
        *missionTimer = *(_DWORD *)&stru_A8EB00.?[416]; /*0x5b3161*/
        this->missionTimer[1] = v6; /*0x5b3167*/
        this->missionTimer[2] = health; /*0x5b316a*/
        break; /*0x5b3171*/
      case 0x14: /*0x5b30c1*/
        health = (*((int (__thiscall **)(MissionClass *))this->ObjectClass + 147))(this); /*0x5b3286*/
        *missionTimer = *(_DWORD *)&stru_A8EB00.?[416]; /*0x5b3293*/
        this->missionTimer[1] = v6; /*0x5b3299*/
        this->missionTimer[2] = health; /*0x5b329c*/
        break; /*0x5b32a3*/
      case 0x15: /*0x5b30c1*/
        health = (*((int (__thiscall **)(MissionClass *))this->ObjectClass + 150))(this); /*0x5b3396*/
        *missionTimer = *(_DWORD *)&stru_A8EB00.?[416]; /*0x5b33a3*/
        this->missionTimer[1] = v6; /*0x5b33a9*/
        this->missionTimer[2] = health; /*0x5b33ac*/
        break; /*0x5b33b3*/
      case 0x16: /*0x5b30c1*/
        health = (*((int (__thiscall **)(MissionClass *))this->ObjectClass + 148))(this); /*0x5b32ca*/
        *missionTimer = *(_DWORD *)&stru_A8EB00.?[416]; /*0x5b32d7*/
        this->missionTimer[1] = v6; /*0x5b32dd*/
        this->missionTimer[2] = health; /*0x5b32e0*/
        break; /*0x5b32e7*/
      case 0x17: /*0x5b30c1*/
        health = (*((int (__thiscall **)(MissionClass *))this->ObjectClass + 130))(this); /*0x5b30ee*/
        *missionTimer = *(_DWORD *)&stru_A8EB00.?[416]; /*0x5b30fb*/
        this->missionTimer[1] = v6; /*0x5b3101*/
        this->missionTimer[2] = health; /*0x5b3104*/
        break; /*0x5b310b*/
      case 0x18: /*0x5b30c1*/
        health = (*((int (__thiscall **)(MissionClass *))this->ObjectClass + 149))(this); /*0x5b32a8*/
        *missionTimer = *(_DWORD *)&stru_A8EB00.?[416]; /*0x5b32b5*/
        this->missionTimer[1] = v6; /*0x5b32bb*/
        this->missionTimer[2] = health; /*0x5b32be*/
        break; /*0x5b32c5*/
      case 0x19: /*0x5b30c1*/
        health = (*((int (__thiscall **)(MissionClass *))this->ObjectClass + 151))(this); /*0x5b33b8*/
        *missionTimer = *(_DWORD *)&stru_A8EB00.?[416]; /*0x5b33c5*/
        this->missionTimer[1] = v6; /*0x5b33cb*/
        this->missionTimer[2] = health; /*0x5b33ce*/
        break; /*0x5b33d5*/
      case 0x1A: /*0x5b30c1*/
        health = (*((int (__thiscall **)(MissionClass *))this->ObjectClass + 152))(this); /*0x5b33da*/
        *missionTimer = *(_DWORD *)&stru_A8EB00.?[416]; /*0x5b33e7*/
        this->missionTimer[1] = v6; /*0x5b33ed*/
        this->missionTimer[2] = health; /*0x5b33f0*/
        break; /*0x5b33f7*/
      case 0x1B: /*0x5b30c1*/
        health = (*((int (__thiscall **)(MissionClass *))this->ObjectClass + 153))(this); /*0x5b33fc*/
        *missionTimer = *(_DWORD *)&stru_A8EB00.?[416]; /*0x5b3409*/
        this->missionTimer[1] = v6; /*0x5b340f*/
        this->missionTimer[2] = health; /*0x5b3412*/
        break; /*0x5b3419*/
      case 0x1C: /*0x5b30c1*/
        health = (*((int (__thiscall **)(MissionClass *))this->ObjectClass + 154))(this); /*0x5b3462*/
        *missionTimer = *(_DWORD *)&stru_A8EB00.?[416]; /*0x5b346f*/
        this->missionTimer[1] = v6; /*0x5b3475*/
        this->missionTimer[2] = health; /*0x5b3478*/
        break; /*0x5b347f*/
      case 0x1E: /*0x5b30c1*/
        health = (*((int (__thiscall **)(MissionClass *))this->ObjectClass + 155))(this); /*0x5b341e*/
        *missionTimer = *(_DWORD *)&stru_A8EB00.?[416]; /*0x5b342b*/
        this->missionTimer[1] = v6; /*0x5b3431*/
        this->missionTimer[2] = health; /*0x5b3434*/
        break; /*0x5b343b*/
      case 0x1F: /*0x5b30c1*/
        health = (*((int (__thiscall **)(MissionClass *))this->ObjectClass + 156))(this); /*0x5b3440*/
        *missionTimer = *(_DWORD *)&stru_A8EB00.?[416]; /*0x5b344d*/
        this->missionTimer[1] = v6; /*0x5b3453*/
        this->missionTimer[2] = health; /*0x5b3456*/
        break; /*0x5b345d*/
      default:
        health = (*((int (__thiscall **)(MissionClass *))this->ObjectClass + 129))(this); /*0x5b34c8*/
        *missionTimer = *(_DWORD *)&stru_A8EB00.?[416]; /*0x5b34d4*/
        this->missionTimer[1] = v6; /*0x5b34da*/
        this->missionTimer[2] = health; /*0x5b34dd*/
        break; /*0x5b34dd*/
    }
  }
  return health; /*0x5b30d8*/
}



// ==== 0x005B3570  MissionClass::AdvanceState  this=MissionClass  sig=csp ====
int __thiscall MissionClass::AdvanceState(MissionClass *this)
{
  int result; // eax
  int v2; // eax
  int v3; // [esp+4h] [ebp-8h]

  result = this->queuedMission; /*0x5b3570*/
  if ( result == -1 ) /*0x5b357c*/
  {
    LOBYTE(result) = 0; /*0x5b35cc*/
  }
  else
  {
    this->currentMission = result; /*0x5b357f*/
    this->queuedMission = -1; /*0x5b3585*/
    v2 = *(_DWORD *)&stru_A8EB00.?[416]; /*0x5b358f*/
    this->missionStatus = 0; /*0x5b359c*/
    this->missionTimer[0] = v2; /*0x5b35a2*/
    this->missionTimer[1] = v3; /*0x5b35a8*/
    this->missionTimer[2] = 0; /*0x5b35ab*/
    result = *(_DWORD *)&stru_A8EB00.?[416]; /*0x5b35ae*/
    this->missionStartTime = *(_DWORD *)&stru_A8EB00.?[416]; /*0x5b35b3*/
    this->missionData = 0; /*0x5b35b9*/
    this->missionQueued = 0; /*0x5b35bf*/
    LOBYTE(result) = 1; /*0x5b35c5*/
  }
  return result; /*0x5b35c8*/
}



// ==== 0x005B35E0  MissionClass::MissionDispatch  this=MissionClass  sig=csp ====
int __thiscall ParticleClass::MissionDispatch(MissionClass *this)
{
  int result; // eax
  int currentMission; // ecx
  int queuedMission; // ecx
  int v5; // [esp+8h] [ebp+4h]
  char v6; // [esp+Ch] [ebp+8h]

  result = v5; /*0x5b35e0*/
  currentMission = this->currentMission; /*0x5b35e7*/
  if ( (currentMission != 28 || v5 != 5) && currentMission != 19 ) /*0x5b35fa*/
  {
    if ( v5 != -1 ) /*0x5b35ff*/
    {
      if ( currentMission != v5 || (queuedMission = this->queuedMission, queuedMission != v5) && queuedMission != -1 ) /*0x5b3612*/
      {
        this->queuedMission = v5; /*0x5b3614*/
        this->missionQueued = 0; /*0x5b361a*/
      }
    }
    LOBYTE(result) = v6; /*0x5b3621*/
    if ( v6 ) /*0x5b3627*/
    {
      result = (*((int (__thiscall **)(MissionClass *))this->ObjectClass + 128))(this); /*0x5b362d*/
      if ( (_BYTE)result ) /*0x5b3635*/
        return (*((int (__thiscall **)(MissionClass *))this->ObjectClass + 123))(this); /*0x5b363b*/
    }
  }
  return result; /*0x5b3641*/
}



// ==== 0x005B3650  MissionClass::COMStub_125  this=MissionClass  sig=csp ====
int __thiscall AbstractClass::COMStub_125(MissionClass *this, int a2, int a3, int a4)
{
  int result; // eax
  int queuedMission; // edx

  result = this->currentMission; /*0x5b3650*/
  if ( (result != 28 || a2 != 5) && result != 19 ) /*0x5b3668*/
  {
    queuedMission = this->queuedMission; /*0x5b366a*/
    if ( queuedMission == -1 ) /*0x5b3673*/
    {
      this->suspendedMission = result; /*0x5b368c*/
      this->currentMission = a2; /*0x5b3692*/
    }
    else
    {
      this->currentMission = a2; /*0x5b3675*/
      this->suspendedMission = queuedMission; /*0x5b367b*/
    }
    this->missionQueued = 0; /*0x5b3681*/
  }
  return result; /*0x5b3688*/
}



// ==== 0x005B36B0  MissionClass::COMStub_126  this=MissionClass  sig=csp ====
char __thiscall AbstractClass::COMStub_126(MissionClass *this)
{
  int suspendedMission; // eax

  suspendedMission = this->suspendedMission; /*0x5b36b0*/
  if ( suspendedMission == -1 ) /*0x5b36b9*/
    return 0; /*0x5b36d5*/
  this->currentMission = suspendedMission; /*0x5b36bb*/
  this->suspendedMission = -1; /*0x5b36c1*/
  this->missionQueued = 0; /*0x5b36cb*/
  return 1; /*0x5b36d4*/
}



// ==== 0x005B36E0  IPersistStream::SetField  this=IPersistStream  sig=ida-proto ====
char __fastcall IPersistStream::SetField(int a1)
{
  if ( a1 == -1 ) /*0x5b36e3*/
    return 1; /*0x5b36e5*/
  else
    return byte_A8E3AE[32 * a1]; /*0x5b36eb*/
}



// ==== 0x005B3700  MissionClass::FindName  this=MissionClass  sig=csp ====
_BYTE *__thiscall MissionClass::FindName(MissionClass *this)
{
  LOBYTE(this->?) = 0; /*0x5b3706*/
  BYTE1(this->?) = 0; /*0x5b3709*/
  HIBYTE(this->?) = 0; /*0x5b370c*/
  BYTE2(this->?) = 1; /*0x5b370f*/
  LOBYTE(this->?) = 1; /*0x5b3712*/
  BYTE1(this->?) = 1; /*0x5b3715*/
  this->? = -755914244; /*0x5b3722*/
  this->? = -755914244; /*0x5b3725*/
  this->ObjectClass = (void *)-1; /*0x5b3728*/
  this->? = 1066426957; /*0x5b372e*/
  this->? = 1066426957; /*0x5b3731*/
  return this; /*0x5b3734*/
}



// ==== 0x005B3760  MissionClass::LoadFromINI  this=MissionClass  sig=csp ====
char __thiscall MissionClass::LoadFromINI(MissionClass *this, _DWORD *a2)
{
  char *v3; // eax
  char *v4; // eax
  char *v5; // eax
  char *v6; // eax
  char *v7; // eax
  char *v8; // eax
  char *v9; // eax
  char *v10; // eax
  void *ptr_0; // eax
  char *v13; // eax
  int abstractFlags; // ecx

  INIClass::ResetSection((INIClass *)a2); /*0x5b376a*/
  if ( this->ObjectClass == (void *)-1 ) /*0x5b3774*/
    v3 = g_Str__none_; /*0x5b3776*/
  else
    v3 = off_816CAC[(int)this->ObjectClass]; /*0x5b377d*/
  if ( !INIClass::BinarySearchSection((int)a2, (unsigned __int8 *)v3) ) /*0x5b3787*/
    return 0; /*0x5b3906*/
  if ( this->ObjectClass == (void *)-1 ) /*0x5b379e*/
    v4 = g_Str__none_; /*0x5b37a0*/
  else
    v4 = off_816CAC[(int)this->ObjectClass]; /*0x5b37a7*/
  LOBYTE(this->?) = INIClass::ReadBool_Overwrite( /*0x5b37bf*/
                      a2,
                      (unsigned __int8 *)v4,
                      (unsigned __int8 *)&stru_82BA00.?[8],
                      (char)this->?);
  if ( this->ObjectClass == (void *)-1 ) /*0x5b37c7*/
    v5 = g_Str__none_; /*0x5b37c9*/
  else
    v5 = off_816CAC[(int)this->ObjectClass]; /*0x5b37d0*/
  BYTE1(this->?) = INIClass::ReadBool_Overwrite( /*0x5b37e8*/
                     a2,
                     (unsigned __int8 *)v5,
                     (unsigned __int8 *)&stru_82BA00.?[6],
                     BYTE1(this->?));
  if ( this->ObjectClass == (void *)-1 ) /*0x5b37f0*/
    v6 = g_Str__none_; /*0x5b37f2*/
  else
    v6 = off_816CAC[(int)this->ObjectClass]; /*0x5b37f9*/
  BYTE2(this->?) = INIClass::ReadBool_Overwrite( /*0x5b3811*/
                     a2,
                     (unsigned __int8 *)v6,
                     (unsigned __int8 *)&stru_82BA00.?[3],
                     BYTE2(this->?));
  if ( this->ObjectClass == (void *)-1 ) /*0x5b3819*/
    v7 = g_Str__none_; /*0x5b381b*/
  else
    v7 = off_816CAC[(int)this->ObjectClass]; /*0x5b3822*/
  HIBYTE(this->?) = INIClass::ReadBool_Overwrite( /*0x5b383a*/
                      a2,
                      (unsigned __int8 *)v7,
                      (unsigned __int8 *)stru_82BA00.?,
                      HIBYTE(this->?));
  if ( this->ObjectClass == (void *)-1 ) /*0x5b3842*/
    v8 = g_Str__none_; /*0x5b3844*/
  else
    v8 = off_816CAC[(int)this->ObjectClass]; /*0x5b384b*/
  LOBYTE(this->?) = INIClass::ReadBool_Overwrite( /*0x5b3863*/
                      a2,
                      (unsigned __int8 *)v8,
                      (unsigned __int8 *)&stru_82BA00.?[30],
                      (char)this->?);
  if ( this->ObjectClass == (void *)-1 ) /*0x5b386b*/
    v9 = g_Str__none_; /*0x5b386d*/
  else
    v9 = off_816CAC[(int)this->ObjectClass]; /*0x5b3874*/
  BYTE1(this->?) = INIClass::ReadBool_Overwrite( /*0x5b388c*/
                     a2,
                     (unsigned __int8 *)v9,
                     (unsigned __int8 *)&stru_82BA00.?[28],
                     BYTE1(this->?));
  if ( this->ObjectClass == (void *)-1 ) /*0x5b3894*/
    v10 = g_Str__none_; /*0x5b3896*/
  else
    v10 = off_816CAC[(int)this->ObjectClass]; /*0x5b389d*/
  INIClass::ReadDouble_Overwrite( /*0x5b38b4*/
    (double *)a2,
    (unsigned __int8 *)v10,
    (unsigned __int8 *)g_INI_Key_Rate,
    *(double *)&this->?);
  ptr_0 = this->ObjectClass; /*0x5b38b9*/
  __asm { fstp qword ptr [esi+10h] } /*0x5b38bb*/
  *(double *)&this->? = _RT1; /*0x5b38bb*/
  if ( ptr_0 == (void *)-1 ) /*0x5b38c1*/
    v13 = g_Str__none_; /*0x5b38c3*/
  else
    v13 = off_816CAC[(_DWORD)ptr_0]; /*0x5b38ca*/
  INIClass::ReadDouble_Overwrite((double *)a2, (unsigned __int8 *)v13, (unsigned __int8 *)&stru_82BA00.?[26], 0.0); /*0x5b38dd*/
  __asm { fst qword ptr [esi+18h] } /*0x5b38e2*/
  *(double *)&this->? = _RT1; /*0x5b38e2*/
  __asm /*0x5b38e5*/
  {
    fcomp ds:dbl_7E2800
    fnstsw ax
  }
  if ( (_AX & 0x4000) != 0 ) /*0x5b38f0*/
  {
    abstractFlags = this->?; /*0x5b38f5*/
    this->? = this->?; /*0x5b38f8*/
    this->? = abstractFlags; /*0x5b38fb*/
  }
  return 1; /*0x5b38fe*/
}



// ==== 0x005B3910  ObjectClass::LookupWaypointName  this=ObjectClass  sig=csp ====
int __thiscall LookupWaypointName(ObjectClass *this)
{
  int v2; // edi
  char **v3; // esi

  if ( !this ) /*0x5b3917*/
    return -1; /*0x5b393c*/
  v2 = 0; /*0x5b3919*/
  v3 = off_816CAC; /*0x5b391b*/
  while ( _strcmpi(*v3, (char *)this) ) /*0x5b392e*/
  {
    ++v3; /*0x5b3930*/
    ++v2; /*0x5b3933*/
    if ( (int)v3 >= (int)aSpyplaneOverfl ) /*0x5b393a*/
      return -1; /*0x5b393a*/
  }
  return v2; /*0x5b393c*/
}



// ==== 0x005B3950  FromNameIndex  this=-  sig=csp ====
char *__fastcall Name_FromIndex(int a1)
{
  if ( a1 == -1 ) /*0x5b3953*/
    return g_Str__none_; /*0x5b395d*/
  else
    return off_816CAC[a1]; /*0x5b3955*/
}



// ==== 0x005B3970  AbstractClass::COMStub_13  this=MissionClass  sig=csp ====
int __thiscall AbstractClass::_vt13(int this, int a2)
{
  int v3; // edx
  int v4; // eax

  HouseClass::ProcessPower((#374 *)this); /*0x5b3979*/
  Power::TimerProcess(*(_DWORD *)(this + 172)); /*0x5b3987*/
  Power::TimerProcess(*(_DWORD *)(this + 176)); /*0x5b3995*/
  Power::TimerProcess(*(_DWORD *)(this + 180)); /*0x5b39a3*/
  Power::TimerProcess(*(_DWORD *)(this + 188)); /*0x5b39b1*/
  v3 = *(_DWORD *)(this + 200); /*0x5b39b6*/
  v4 = *(_DWORD *)(this + 208); /*0x5b39bc*/
  if ( v3 != -1 ) /*0x5b39c5*/
  {
    if ( (int)dword_A8ED84 - v3 >= v4 ) /*0x5b39d1*/
      v4 = 0; /*0x5b39d7*/
    else
      v4 -= (int)dword_A8ED84 - v3; /*0x5b39d3*/
  }
  Power::TimerProcess(v4); /*0x5b39dc*/
  return Power::TimerProcess(*(_DWORD *)(this + 192)); /*0x5b39ef*/
}



// ==== 0x005B3A00  MissionClass::GetMissionControl  this=TechnoClass  sig=csp ====
char *__thiscall MissionClass::GetMissionControl(MissionClass *this)
{
  return (char *)&stru_A8E3A8 + 32 * this->currentMission; /*0x5b3a0e*/
}



// ==== 0x005B3A10  MissionClass::HasValidTarget  this=MissionClass  sig=csp ====
int __thiscall MissionClass::HasValidTarget(MissionClass *this)
{
  return this->suspendedMission != -1; /*0x5b3a1e*/
}



// ==== 0x005B3A50  ObjectClass::StubReturnFalse  this=ObjectClass  sig=csp ====
int __thiscall IPersistStream::StubReturnFalse(ObjectClass *this)
{
  int result; // eax

  return result; /*0x5b3a50*/
}



// ==== 0x005B3A60  AbstractClass::getWeaponRange  this=MissionClass  sig=csp ====
_DWORD *__thiscall AbstractClass::getWeaponRange(AbstractClass *this, char a2)
{
  this->ptr_0 = &MissionClass::`vftable'; /*0x5b3a63*/
  this->ptr_4 = &MissionClass::`vftable'; /*0x5b3a69*/
  this->ptr_8 = &MissionClass::`vftable'; /*0x5b3a70*/
  this->ptr_C = &MissionClass::`vftable'; /*0x5b3a77*/
  ObjectClass::Dtor((ObjectClass *)this); /*0x5b3a7e*/
  if ( (a2 & 1) != 0 ) /*0x5b3a88*/
    __3_YAXPAX_Z(this); /*0x5b3a8b*/
  return &this->ptr_0; /*0x5b3a95*/
}



// ==== 0x005B3AA0  sub_5B3AA0  this=-  sig=ida-proto ====
int sub_5B3AA0()
{
  dword_ABEFF8 = 0; /*0x5b3aa2*/
  dword_ABEFFC = 0; /*0x5b3aa7*/
  dword_ABF000 = 0; /*0x5b3aac*/
  dword_ABF004 = 0; /*0x5b3ab1*/
  return 0; /*0x5b3ab6*/
}



// ==== 0x005B3AC0  sub_5B3AC0  this=-  sig=ida-proto ====
int sub_5B3AC0()
{
  dword_ABEFE4 = 0; /*0x5b3acc*/
  dword_ABEFDC = (int)&GenericNode::`vftable'; /*0x5b3ad2*/
  dword_ABEFE8 = (int)&GenericNode::`vftable'; /*0x5b3ad7*/
  dword_ABEFEC = 0; /*0x5b3adc*/
  dword_ABEFF0 = (int)&dword_ABEFDC; /*0x5b3ae2*/
  dword_ABEFE0 = (int)&dword_ABEFE8; /*0x5b3aec*/
  dword_ABEFD8 = (int)&List<MixFileClass *>::`vftable'; /*0x5b3af6*/
  return atexit(sub_5B3B10); /*0x5b3b06*/
}



// ==== 0x005B3B10  sub_5B3B10  this=-  sig=ida-proto ====
void __cdecl sub_5B3B10()
{
  int v0; // edx
  int v1; // edi
  int v2; // ecx
  int v3; // esi
  _DWORD *v4; // eax

  if ( (byte_ABF008 & 1) == 0 ) /*0x5b3b1b*/
  {
    byte_ABF008 |= 1u; /*0x5b3b25*/
    dword_ABEFD8 = (int)&GenericList::`vftable'; /*0x5b3b2b*/
LABEL_3:
    v0 = dword_ABEFE0; /*0x5b3b37*/
    while ( dword_ABEFE0 && *(_DWORD *)(dword_ABEFE0 + 4) && *(_DWORD *)(dword_ABEFE0 + 8) && dword_ABEFE0 ) /*0x5b3b4d*/
    {
      v1 = *(_DWORD *)(dword_ABEFE0 + 4); /*0x5b3b4f*/
      v2 = dword_ABEFE0 + 4; /*0x5b3b52*/
      if ( v1 ) /*0x5b3b57*/
      {
        v3 = *(_DWORD *)(dword_ABEFE0 + 8); /*0x5b3b59*/
        v4 = (_DWORD *)(dword_ABEFE0 + 8); /*0x5b3b5c*/
        if ( v3 ) /*0x5b3b61*/
        {
          *(_DWORD *)(v3 + 4) = v1; /*0x5b3b63*/
          *(_DWORD *)(*(_DWORD *)v2 + 8) = *v4; /*0x5b3b6a*/
          *v4 = 0; /*0x5b3b6d*/
          *(_DWORD *)v2 = 0; /*0x5b3b6f*/
          goto LABEL_3; /*0x5b3b71*/
        }
      }
    }
    dword_ABEFE8 = (int)&GenericNode::`vftable'; /*0x5b3b7f*/
    if ( &dword_ABEFE8 && dword_ABEFEC && dword_ABEFF0 ) /*0x5b3b98*/
    {
      *(_DWORD *)(dword_ABEFF0 + 4) = dword_ABEFEC; /*0x5b3b9a*/
      *(_DWORD *)(dword_ABEFEC + 8) = dword_ABEFF0; /*0x5b3ba9*/
      v0 = dword_ABEFE0; /*0x5b3bac*/
      dword_ABEFF0 = 0; /*0x5b3bb2*/
      dword_ABEFEC = 0; /*0x5b3bb8*/
    }
    dword_ABEFDC = (int)&GenericNode::`vftable'; /*0x5b3bc3*/
    if ( &dword_ABEFDC && v0 && dword_ABEFE4 ) /*0x5b3bda*/
    {
      *(_DWORD *)(dword_ABEFE4 + 4) = v0; /*0x5b3bdc*/
      *(_DWORD *)(dword_ABEFE0 + 8) = dword_ABEFE4; /*0x5b3beb*/
      dword_ABEFE4 = 0; /*0x5b3bee*/
      dword_ABEFE0 = 0; /*0x5b3bf4*/
    }
  }
}



// ==== 0x005B3C20  MixFileClass::FromFile  this=MixFileClass  sig=csp ====
_DWORD *__thiscall MixFileClass::FromFile(MixFileClass *this, char *Source, int a3)
{
  void *v4; // edi
  bool v5; // zf
  bool v6; // al
  int v7; // eax
  MixHeaderData *v8; // ecx
  int v9; // eax
  int v10; // eax
  int v11; // edi
  GenericNode *v12; // edx
  int v13; // eax
  void *v14; // edi
  GameClass *v16; // [esp+4h] [ebp-1E8h]
  _BYTE v17[6]; // [esp+10h] [ebp-1DCh] BYREF
  int v18[4]; // [esp+18h] [ebp-1D4h] BYREF
  char v19; // [esp+28h] [ebp-1C4h]
  _WORD Src[4]; // [esp+2Ch] [ebp-1C0h] BYREF
  CD v21; // [esp+34h] [ebp-1B8h]
  CCFileClass v22; // [esp+3Ch] [ebp-1B0h] BYREF
  int v23[3]; // [esp+94h] [ebp-158h] BYREF
  int v24; // [esp+A0h] [ebp-14Ch]
  PKStraw v25; // [esp+A8h] [ebp-144h] BYREF

  this->? = 0; /*0x5b3c31*/
  *(_DWORD *)&this->Blowfish = 0; /*0x5b3c34*/
  this->CountFiles = 0; /*0x5b3c37*/
  LOBYTE(this->FileSize) = 0; /*0x5b3c3a*/
  BYTE1(this->FileSize) = 0; /*0x5b3c3d*/
  BYTE2(this->FileSize) = 0; /*0x5b3c40*/
  this->FileStartOffset = 0; /*0x5b3c43*/
  this->Headers = 0; /*0x5b3c46*/
  *(_DWORD *)this->__pad_1C = 0; /*0x5b3c49*/
  *(_DWORD *)&this->__pad_1C[4] = 0; /*0x5b3c4c*/
  this->MixFileClass_field_24 = 0; /*0x5b3c4f*/
  *(_DWORD *)this->Node = &MixFileClass::`vftable'; /*0x5b3c52*/
  v21 = (CD)&CD::`vftable'; /*0x5b3c5d*/
  if ( !(unsigned __int8)CD::`vftable'(dword_81C1D0) ) /*0x5b3c66*/
  {
    GameClass::Shutdown(v16); /*0x5b3c70*/
    ExitProgram((ObjectClass *)1); /*0x5b3c7a*/
  }
  CCFileClass::Construct(&v22, Source); /*0x5b3c8b*/
  this->CountFiles = (int)_strdup(*(const char **)&v22.?); /*0x5b3c9d*/
  v18[1] = 0; /*0x5b3cb2*/
  v18[2] = 0; /*0x5b3cb6*/
  v18[3] = (int)&v22; /*0x5b3cba*/
  v19 = 0; /*0x5b3cbe*/
  v18[0] = (int)&FileStraw::`vftable'; /*0x5b3cc2*/
  PKStrawClass::Initialize((PKStrawClass *)&v25, 1, (int)&stru_A8E7B0); /*0x5b3cca*/
  v4 = v18; /*0x5b3cd4*/
  if ( !(unsigned __int8)CCFileClass::Open(&v22, 0) ) /*0x5b3cd8*/
    goto LABEL_10; /*0x5b3cd8*/
  (*(void (__thiscall **)(int *, _WORD *, int))(v18[0] + 8))(v18, Src, 4); /*0x5b3cf4*/
  if ( Src[0] ) /*0x5b3cfc*/
  {
    memcpy(v17, Src, 4u); /*0x5b3d5b*/
    (*(void (__thiscall **)(int *, _BYTE *, int))(v18[0] + 8))(v18, &v17[4], 2); /*0x5b3d72*/
  }
  else
  {
    v6 = (Src[1] & 2) != 0; /*0x5b3d09*/
    v5 = (Src[1] & 2) == 0; /*0x5b3d09*/
    LOBYTE(this->FileSize) = Src[1] & 1; /*0x5b3d0b*/
    BYTE1(this->FileSize) = v6; /*0x5b3d0e*/
    if ( !v5 ) /*0x5b3d11*/
    {
      PKStrawClass::SetSource((int)&v25, a3); /*0x5b3d22*/
      PKStrawClass::RelayBlowfishKey(&v25, (int)v18); /*0x5b3d33*/
      v4 = &v25; /*0x5b3d38*/
    }
    (*(void (__thiscall **)(void *, _BYTE *, int))(*(_DWORD *)v4 + 8))(v4, v17, 6); /*0x5b3d4a*/
  }
  v7 = *(__int16 *)v17; /*0x5b3d75*/
  v8 = *(MixHeaderData **)&v17[2]; /*0x5b3d7a*/
  this->FileStartOffset = *(__int16 *)v17; /*0x5b3d7e*/
  this->Headers = v8; /*0x5b3d84*/
  v9 = __2_YAPAXI_Z(12 * v7); /*0x5b3d8b*/
  *(_DWORD *)&this->__pad_1C[4] = v9; /*0x5b3d95*/
  if ( v9 ) /*0x5b3d98*/
  {
    (*(void (__thiscall **)(void *, int, int))(*(_DWORD *)v4 + 8))(v4, v9, 12 * this->FileStartOffset); /*0x5b3dc8*/
    v10 = BufferIOFileClass::Seek(&v22, 0, 1u); /*0x5b3dd2*/
    *(_DWORD *)this->__pad_1C = (char *)v22.? + v10; /*0x5b3ddf*/
    v11 = g_MissionQueueFrame.localVariables[347]; /*0x5b3de2*/
    MixFileClass::LinkIntoPool(this); /*0x5b3de8*/
    v12 = *(GenericNode **)(v11 + 4); /*0x5b3ded*/
    *(_DWORD *)&this->Blowfish = v11; /*0x5b3df0*/
    this->? = v12; /*0x5b3df3*/
    v13 = *(_DWORD *)(v11 + 4); /*0x5b3df6*/
    if ( v13 ) /*0x5b3dfb*/
      *(_DWORD *)(v13 + 8) = this; /*0x5b3dfd*/
    *(_DWORD *)(v11 + 4) = this; /*0x5b3e00*/
    v25.m_14 = (int)&BlowStraw::`vftable'; /*0x5b3e0c*/
    v14 = *(void **)&v25.__pad_18[8]; /*0x5b3e17*/
    if ( *(_DWORD *)&v25.__pad_18[8] ) /*0x5b3e19*/
    {
      COMObject::Release(*(COMObject **)&v25.__pad_18[8]); /*0x5b3e1b*/
      __3_YAXPAX_Z(v14); /*0x5b3e21*/
    }
  }
  else
  {
LABEL_10:
    v25.m_14 = (int)&BlowStraw::`vftable'; /*0x5b3da1*/
    if ( *(_DWORD *)&v25.__pad_18[8] ) /*0x5b3dae*/
      MixFileClass::UnlinkFromPool(*(MixFileClass **)&v25.__pad_18[8], 1); /*0x5b3db2*/
  }
  *(_DWORD *)&v25.__pad_18[8] = 0; /*0x5b3e30*/
  Straw::Dtor((Straw *)&v25.m_14); /*0x5b3e37*/
  Straw::Dtor((Straw *)&v25); /*0x5b3e43*/
  FileStraw::Destructor((int)v18); /*0x5b3e4c*/
  *(_DWORD *)v22.CDFileClass = &CCFileClass::`vftable'; /*0x5b3e58*/
  v24 = 0; /*0x5b3e60*/
  Vector::Clear((int)v23); /*0x5b3e67*/
  *(_DWORD *)v22.CDFileClass = &off_7E1668; /*0x5b3e70*/
  BufferIOFileClass::Dtor((BufferIOFileClass *)&v22); /*0x5b3e78*/
  return this->Node; /*0x5b3e7f*/
}



// ==== 0x005B3E90  ObjectClass::method_5B3E90  this=ObjectClass  sig=csp ====
char __thiscall sub_5B3E90(ObjectClass *this)
{
  int i; // esi
  char Filename[256]; // [esp+8h] [ebp-304h] BYREF
  char Ext[256]; // [esp+108h] [ebp-204h] BYREF
  char Buffer[260]; // [esp+208h] [ebp-104h] BYREF

  for ( i = g_MissionQueueFrame.localVariables[343]; ; i = *(_DWORD *)(i + 4) ) /*0x5b3e97*/
  {
    if ( !i || !*(_DWORD *)(i + 4) || !*(_DWORD *)(i + 8) ) /*0x5b3eb3*/
      return 0; /*0x5b3f42*/
    _splitpath(*(const char **)(i + 12), 0, 0, Filename, Ext); /*0x5b3ed3*/
    _makepath(Buffer, 0, 0, Filename, Ext); /*0x5b3ef1*/
    if ( !_strcmpi(Buffer, (char *)this) ) /*0x5b3eff*/
      break; /*0x5b3eff*/
  }
  if ( *(_DWORD *)(i + 36) ) /*0x5b3f14*/
  {
    if ( *(_BYTE *)(i + 18) ) /*0x5b3f1b*/
      __3_YAXPAX_Z(*(void **)(i + 36)); /*0x5b3f23*/
  }
  *(_DWORD *)(i + 36) = 0; /*0x5b3f2b*/
  *(_BYTE *)(i + 18) = 0; /*0x5b3f32*/
  return 1; /*0x5b3f36*/
}



// ==== 0x005B3F50  MixFileClass::method_5B3F50  this=MixFileClass  sig=csp ====
void __thiscall sub_5B3F50(MixFileClass *this)
{
  void *CountFiles; // eax
  void *v3; // eax
  GenericNode *Previous; // ecx
  int v5; // eax
  GenericNode *v6; // ecx
  int v7; // eax

  CountFiles = (void *)this->CountFiles; /*0x5b3f56*/
  *(_DWORD *)this->Node = &MixFileClass::`vftable'; /*0x5b3f59*/
  if ( CountFiles ) /*0x5b3f61*/
    free(CountFiles); /*0x5b3f64*/
  if ( this->MixFileClass_field_24 && BYTE2(this->FileSize) ) /*0x5b3f73*/
  {
    __3_YAXPAX_Z((void *)this->MixFileClass_field_24); /*0x5b3f79*/
    BYTE2(this->FileSize) = 0; /*0x5b3f81*/
  }
  v3 = *(void **)&this->__pad_1C[4]; /*0x5b3f84*/
  this->MixFileClass_field_24 = 0; /*0x5b3f87*/
  if ( v3 ) /*0x5b3f8c*/
  {
    __3_YAXPAX_Z(v3); /*0x5b3f8f*/
    *(_DWORD *)&this->__pad_1C[4] = 0; /*0x5b3f97*/
  }
  if ( this ) /*0x5b3f9c*/
  {
    Previous = this->?; /*0x5b3f9e*/
    if ( Previous ) /*0x5b3fa3*/
    {
      v5 = *(_DWORD *)&this->Blowfish; /*0x5b3fa5*/
      if ( v5 ) /*0x5b3faa*/
      {
        *(_DWORD *)(v5 + 4) = Previous; /*0x5b3fac*/
        *(_DWORD *)this->?[1].__pad_0 = *(_DWORD *)&this->Blowfish; /*0x5b3fb5*/
        *(_DWORD *)&this->Blowfish = 0; /*0x5b3fb8*/
        this->? = 0; /*0x5b3fbb*/
      }
    }
  }
  *(_DWORD *)this->Node = &GenericNode::`vftable'; /*0x5b3fc0*/
  if ( this ) /*0x5b3fc6*/
  {
    v6 = this->?; /*0x5b3fc8*/
    if ( v6 ) /*0x5b3fcd*/
    {
      v7 = *(_DWORD *)&this->Blowfish; /*0x5b3fcf*/
      if ( v7 ) /*0x5b3fd4*/
      {
        *(_DWORD *)(v7 + 4) = v6; /*0x5b3fd6*/
        *(_DWORD *)this->?[1].__pad_0 = *(_DWORD *)&this->Blowfish; /*0x5b3fdf*/
        *(_DWORD *)&this->Blowfish = 0; /*0x5b3fe2*/
        this->? = 0; /*0x5b3fe5*/
      }
    }
  }
}



// ==== 0x005B3FF0  InsertIntoHashTree  this=Coord  sig=csp ====
_DWORD *__fastcall sub_5B3FF0(_DWORD *a1, _DWORD *a2)
{
  _DWORD *result; // eax

  for ( result = (_DWORD *)*a2; *a2; result = (_DWORD *)*a2 ) /*0x5b3ff0*/
  {
    a2 = result + 1; /*0x5b3fff*/
    if ( result[2] >= a1[2] ) /*0x5b4002*/
      a2 = result; /*0x5b4004*/
  }
  *a2 = a1; /*0x5b400d*/
  *a1 = 0; /*0x5b400f*/
  a1[1] = 0; /*0x5b4015*/
  return result; /*0x5b401c*/
}



// ==== 0x005B4080  Tree::Destructor  this=Tree  sig=csp ====
void __thiscall Tree::Destructor(Tree *this)
{
  Tree *v2; // ecx
  Tree *v3; // ecx

  if ( this ) /*0x5b4085*/
  {
    v2 = (Tree *)*this; /*0x5b4087*/
    if ( *this ) /*0x5b4087*/
      Tree::Destructor(v2); /*0x5b408d*/
    v3 = (Tree *)*((_DWORD *)this + 1); /*0x5b4092*/
    if ( v3 ) /*0x5b4097*/
      Tree::Destructor(v3); /*0x5b4099*/
    __3_YAXPAX_Z(this); /*0x5b409f*/
  }
}



// ==== 0x005B40B0  SearchMIXFile  this=char*  sig=csp ====
void *__fastcall SearchMIXFile(char *Source, char a2)
{
  int v3; // edi
  _DWORD *v4; // eax
  int v5; // ecx
  bool v6; // cc
  _DWORD *v8; // eax
  _DWORD *v9; // esi
  _DWORD *v10; // edx
  void *SHPFile; // edi
  ObjectClass *v12; // eax
  Checksummer v14; // [esp+14h] [ebp-17Ch] BYREF
  int v15[3]; // [esp+78h] [ebp-118h] BYREF
  int v16; // [esp+84h] [ebp-10Ch]
  char Str[260]; // [esp+8Ch] [ebp-104h] BYREF

  strcpy(Str, Source); /*0x5b40dd*/
  _strupr(Str); /*0x5b40ee*/
  memset(&v14, 0, 12); /*0x5b4110*/
  v3 = Checksummer::Add_Buffer(&v14, (unsigned __int8 *)Str, strlen(Str)); /*0x5b4127*/
  v4 = dword_ABF00C; /*0x5b4129*/
  if ( !dword_ABF00C ) /*0x5b4130*/
    goto LABEL_9; /*0x5b4130*/
  while ( 1 ) /*0x5b4132*/
  {
    v5 = v4[2]; /*0x5b4132*/
    v6 = v5 < v3; /*0x5b4135*/
    if ( v5 == v3 ) /*0x5b4137*/
      break; /*0x5b4137*/
LABEL_5:
    if ( v6 ) /*0x5b4140*/
      v4 = (_DWORD *)v4[1]; /*0x5b4142*/
    else
      v4 = (_DWORD *)*v4; /*0x5b4147*/
    if ( !v4 ) /*0x5b414b*/
      goto LABEL_9; /*0x5b414b*/
  }
  if ( !v4[3] ) /*0x5b4139*/
  {
    v6 = v5 < v3; /*0x5b413e*/
    goto LABEL_5; /*0x5b413e*/
  }
  if ( v4 ) /*0x5b419d*/
    return (void *)v4[3]; /*0x5b41ac*/
LABEL_9:
  CCFileClass::Construct((CCFileClass *)&v14.buffer, Source); /*0x5b414d*/
  if ( (unsigned __int8)CCFileClass::Open((CCFileClass *)&v14.buffer, 0) ) /*0x5b415c*/
  {
    v8 = (_DWORD *)__2_YAPAXI_Z(0x10u); /*0x5b41af*/
    v9 = v8; /*0x5b41b4*/
    v8[2] = v3; /*0x5b41b9*/
    v10 = dword_ABF00C; /*0x5b41bc*/
    if ( dword_ABF00C ) /*0x5b41c4*/
    {
      if ( *((_DWORD *)dword_ABF00C + 2) < v3 ) /*0x5b41d6*/
        v10 = (char *)dword_ABF00C + 4; /*0x5b41d8*/
      InsertIntoHashTree(v8, v10); /*0x5b41dd*/
    }
    else
    {
      dword_ABF00C = v8; /*0x5b41c6*/
      *v8 = 0; /*0x5b41cc*/
      v8[1] = 0; /*0x5b41ce*/
    }
    if ( a2 || strstr(Str, Ext) ) /*0x5b41f5*/
    {
      v12 = (ObjectClass *)__2_YAPAXI_Z(0x24u); /*0x5b4210*/
      if ( v12 ) /*0x5b421a*/
        SHPFile = LoadSHPFile(v12, Source); /*0x5b4224*/
      else
        SHPFile = 0; /*0x5b4228*/
    }
    else
    {
      SHPFile = CCFileClass::ReadEntireFile((CCFileClass *)&v14.buffer); /*0x5b420a*/
    }
    v9[3] = SHPFile; /*0x5b422a*/
    v14.buffer = (int)&CCFileClass::`vftable'; /*0x5b4231*/
    v16 = 0; /*0x5b4239*/
    Vector::Clear((int)v15); /*0x5b4240*/
    v14.buffer = (int)&off_7E1668; /*0x5b4249*/
    BufferIOFileClass::Dtor((BufferIOFileClass *)&v14.buffer); /*0x5b4251*/
    return SHPFile; /*0x5b4256*/
  }
  else
  {
    v14.buffer = (int)&CCFileClass::`vftable'; /*0x5b4169*/
    v16 = 0; /*0x5b4171*/
    Vector::Clear((int)v15); /*0x5b4178*/
    v14.buffer = (int)&off_7E1668; /*0x5b4181*/
    BufferIOFileClass::Dtor((BufferIOFileClass *)&v14.buffer); /*0x5b4189*/
    return 0; /*0x5b418e*/
  }
}



// ==== 0x005B4270  HashTree::MarkEntry  this=HashTree  sig=csp ====
int __thiscall HashTree_MarkEntry(const char *this)
{
  int result; // eax
  _DWORD *v2; // ecx
  int v3; // edx
  bool v4; // cc
  unsigned int v5[3]; // [esp+8h] [ebp-110h] BYREF
  char String[260]; // [esp+14h] [ebp-104h] BYREF

  strcpy(String, this); /*0x5b4292*/
  _strupr(String); /*0x5b42a0*/
  memset(v5, 0, sizeof(v5)); /*0x5b42bc*/
  result = Checksummer::Add_Buffer(v5, (unsigned __int8 *)String, strlen(String)); /*0x5b42ce*/
  v2 = dword_ABF00C; /*0x5b42d3*/
  if ( dword_ABF00C ) /*0x5b42db*/
  {
    do /*0x5b42dd*/
    {
      v3 = v2[2]; /*0x5b42dd*/
      v4 = v3 < result; /*0x5b42e0*/
      if ( v3 == result ) /*0x5b42e2*/
      {
        if ( v2[3] ) /*0x5b42e4*/
        {
          v2[3] = 0; /*0x5b4301*/
          return result; /*0x5b4301*/
        }
        v4 = v3 < result; /*0x5b42e9*/
      }
      if ( v4 ) /*0x5b42eb*/
        v2 = (_DWORD *)v2[1]; /*0x5b42ed*/
      else
        v2 = (_DWORD *)*v2; /*0x5b42f2*/
    }
    while ( v2 ); /*0x5b42dd*/
  }
  return result; /*0x5b42f8*/
}



// ==== 0x005B4310  WinMainSetup_Setup_5B4310  this=-  sig=ida-proto ====
void sub_5B4310()
{
  _DWORD *v0; // esi
  _DWORD *v1; // ecx

  v0 = dword_ABF00C; /*0x5b4318*/
  if ( dword_ABF00C ) /*0x5b431a*/
  {
    if ( *(_DWORD *)dword_ABF00C ) /*0x5b431c*/
      Tree::Destructor(*(_DWORD **)dword_ABF00C); /*0x5b4324*/
    v1 = (_DWORD *)v0[1]; /*0x5b4329*/
    if ( v1 ) /*0x5b432e*/
      Tree::Destructor(v1); /*0x5b4330*/
    __3_YAXPAX_Z(v0); /*0x5b4336*/
  }
  dword_ABF00C = 0; /*0x5b433e*/
}



// ==== 0x005B4350  ObjectClass::method_5B4350  this=ObjectClass  sig=csp ====
int __thiscall sub_5B4350(ObjectClass *this)
{
  int i; // esi
  char Filename[256]; // [esp+8h] [ebp-304h] BYREF
  char Ext[256]; // [esp+108h] [ebp-204h] BYREF
  char Buffer[260]; // [esp+208h] [ebp-104h] BYREF

  for ( i = g_MissionQueueFrame.localVariables[343]; i && *(_DWORD *)(i + 4) && *(_DWORD *)(i + 8); i = *(_DWORD *)(i + 4) ) /*0x5b4357*/
  {
    _splitpath(*(const char **)(i + 12), 0, 0, Filename, Ext); /*0x5b4387*/
    _makepath(Buffer, 0, 0, Filename, Ext); /*0x5b43a5*/
    if ( !_strcmpi(Buffer, (char *)this) ) /*0x5b43bd*/
      return i; /*0x5b43ce*/
  }
  return 0; /*0x5b43c6*/
}



// ==== 0x005B43E0  ObjectClass::?do_always_noconv_codecvt_base_std__MBE_NXZ_7  this=ObjectClass  sig=csp ====
char __thiscall _do_always_noconv_codecvt_base_std__MBE_NXZ_7(std::codecvt_base *this)
{
  return 1; /*0x5b43e2*/
}



// ==== 0x005B43F0  ReturnTrue  this=MixFileClass  sig=csp ====
int __stdcall ReturnTrue(int a1)
{
  int result; // eax

  LOBYTE(result) = 1; /*0x5b43f0*/
  return result; /*0x5b43f2*/
}



// ==== 0x005B4400  ObjectClass::method_5B4400  this=ObjectClass  sig=csp ====
void __thiscall sub_5B4400(ObjectClass *this)
{
  if ( this->occupant && BYTE2(this->?) ) /*0x5b440d*/
    __3_YAXPAX_Z((void *)this->occupant); /*0x5b4413*/
  this->occupant = 0; /*0x5b441b*/
  BYTE2(this->?) = 0; /*0x5b441e*/
}



// ==== 0x005B4430  LookupFileInfoCache  this=-  sig=csp ====
char __fastcall FileInfoCache_Lookup(const char *a1, _DWORD *a2, _DWORD *a3, _DWORD *a4, _DWORD *a5)
{
  int v5; // eax
  _DWORD *v6; // ebp
  int v7; // ecx
  int v8; // edi
  int v9; // esi
  int v10; // edx
  int v11; // eax
  unsigned int v14[3]; // [esp+18h] [ebp-110h] BYREF
  char String[260]; // [esp+24h] [ebp-104h] BYREF

  if ( !a1 ) /*0x5b4442*/
    return 0; /*0x5b4442*/
  strcpy(String, a1); /*0x5b4462*/
  _strupr(String); /*0x5b4470*/
  memset(v14, 0, sizeof(v14)); /*0x5b4490*/
  v5 = Checksummer::Add_Buffer(v14, (unsigned __int8 *)String, strlen(String)); /*0x5b449c*/
  v6 = (_DWORD *)dword_ABEFE0; /*0x5b44a1*/
LABEL_3:
  while ( 2 ) /*0x5b44c0*/
  {
    if ( !v6 || !v6[1] || !v6[2] ) /*0x5b44c0*/
      return 0; /*0x5b4580*/
    v7 = v6[5]; /*0x5b44cb*/
    v8 = v6[8]; /*0x5b44ce*/
    if ( v7 <= 0 ) /*0x5b44d3*/
      goto LABEL_14; /*0x5b44d3*/
    while ( 1 ) /*0x5b44df*/
    {
      v9 = *(_DWORD *)(v8 + 12 * (v7 / 2)); /*0x5b44df*/
      v10 = v8 + 12 * (v7 / 2); /*0x5b44e2*/
      if ( v9 <= v5 ) /*0x5b44e7*/
        break; /*0x5b44e7*/
      v7 /= 2; /*0x5b44e9*/
LABEL_11:
      if ( v7 <= 0 ) /*0x5b44fb*/
      {
        v6 = (_DWORD *)v6[1]; /*0x5b44fd*/
        goto LABEL_3; /*0x5b4501*/
      }
    }
    if ( v9 != v5 ) /*0x5b44ed*/
    {
      v8 = v10 + 12; /*0x5b44ef*/
      v7 += -1 - v7 / 2; /*0x5b44f7*/
      goto LABEL_11; /*0x5b44f7*/
    }
    if ( !v10 ) /*0x5b4505*/
    {
LABEL_14:
      v6 = (_DWORD *)v6[1]; /*0x5b4507*/
      continue; /*0x5b450b*/
    }
    break;
  }
  if ( a3 ) /*0x5b4516*/
    *a3 = v6; /*0x5b4518*/
  if ( a5 ) /*0x5b4523*/
    *a5 = *(_DWORD *)(v10 + 8); /*0x5b4528*/
  if ( a2 ) /*0x5b4530*/
    *a2 = 0; /*0x5b4532*/
  if ( a4 ) /*0x5b4541*/
    *a4 = *(_DWORD *)(v10 + 4); /*0x5b4546*/
  if ( a2 ) /*0x5b454a*/
  {
    v11 = v6[9]; /*0x5b454c*/
    if ( v11 ) /*0x5b4551*/
      *a2 = v11 + *(_DWORD *)(v10 + 4); /*0x5b4558*/
  }
  if ( !v6[9] ) /*0x5b455a*/
  {
    if ( a4 ) /*0x5b4563*/
      *a4 += v6[7]; /*0x5b456c*/
  }
  return 1; /*0x5b456e*/
}



// ==== 0x005B4590  MixFileClass::LinkIntoPool  this=MixFileClass  sig=csp ====
void __thiscall MixFileClass::LinkIntoPool(MixFileClass *this)
{
  GenericNode *Previous; // edx
  int v2; // eax

  if ( this ) /*0x5b4592*/
  {
    Previous = this->?; /*0x5b4594*/
    if ( Previous ) /*0x5b4599*/
    {
      v2 = *(_DWORD *)&this->Blowfish; /*0x5b459b*/
      if ( v2 ) /*0x5b45a0*/
      {
        *(_DWORD *)(v2 + 4) = Previous; /*0x5b45a2*/
        *(_DWORD *)this->?[1].__pad_0 = *(_DWORD *)&this->Blowfish; /*0x5b45ab*/
        *(_DWORD *)&this->Blowfish = 0; /*0x5b45ae*/
        this->? = 0; /*0x5b45b5*/
      }
    }
  }
}



// ==== 0x005B45C0  BlowStraw::QueryInterface  this=BlowStraw  sig=csp ====
_DWORD *__thiscall BlowStraw::QueryInterface(BlowStraw *this, char a2)
{
  COMObject *v3; // edi

  v3 = (COMObject *)*((_DWORD *)this + 3); /*0x5b45c4*/
  *(_DWORD *)this->__pad_0 = &BlowStraw::`vftable'; /*0x5b45c7*/
  if ( v3 ) /*0x5b45cf*/
  {
    COMObject::Release(v3); /*0x5b45d3*/
    __3_YAXPAX_Z(v3); /*0x5b45d9*/
  }
  *((_DWORD *)this + 3) = 0; /*0x5b45e3*/
  Straw::Dtor((Straw *)this); /*0x5b45ea*/
  if ( (a2 & 1) != 0 ) /*0x5b45f4*/
    __3_YAXPAX_Z(this); /*0x5b45f7*/
  return this->__pad_0; /*0x5b4601*/
}



// ==== 0x005B4610  MixFileClass::UnlinkFromPool  this=MixFileClass  sig=csp ====
int *__thiscall MixFileClass::UnlinkFromPool(MixFileClass *this, char a2)
{
  COMObject::Release((COMObject *)this); /*0x5b4613*/
  if ( (a2 & 1) != 0 ) /*0x5b461d*/
    __3_YAXPAX_Z(this); /*0x5b4620*/
  return (int *)this->Node; /*0x5b462a*/
}



// ==== 0x005B4630  MixFileClass::Constructor_MixFileClass  this=MixFileClass  sig=csp ====
void *__thiscall BlowStraw::Constructor_MixFileClass(MixFileClass *this, char a2)
{
  void *CountFiles; // eax
  void *v4; // eax
  GenericNode *Previous; // ecx
  int v6; // eax
  GenericNode *v7; // ecx
  int v8; // eax

  CountFiles = (void *)this->CountFiles; /*0x5b4636*/
  *(_DWORD *)this->Node = &MixFileClass::`vftable'; /*0x5b4639*/
  if ( CountFiles ) /*0x5b4641*/
    free(CountFiles); /*0x5b4644*/
  if ( this->MixFileClass_field_24 && BYTE2(this->FileSize) ) /*0x5b4653*/
  {
    __3_YAXPAX_Z((void *)this->MixFileClass_field_24); /*0x5b4659*/
    BYTE2(this->FileSize) = 0; /*0x5b4661*/
  }
  v4 = *(void **)&this->__pad_1C[4]; /*0x5b4664*/
  this->MixFileClass_field_24 = 0; /*0x5b4667*/
  if ( v4 ) /*0x5b466c*/
  {
    __3_YAXPAX_Z(v4); /*0x5b466f*/
    *(_DWORD *)&this->__pad_1C[4] = 0; /*0x5b4677*/
  }
  if ( this ) /*0x5b467c*/
  {
    Previous = this->?; /*0x5b467e*/
    if ( Previous ) /*0x5b4683*/
    {
      v6 = *(_DWORD *)&this->Blowfish; /*0x5b4685*/
      if ( v6 ) /*0x5b468a*/
      {
        *(_DWORD *)(v6 + 4) = Previous; /*0x5b468c*/
        *(_DWORD *)this->?[1].__pad_0 = *(_DWORD *)&this->Blowfish; /*0x5b4695*/
        *(_DWORD *)&this->Blowfish = 0; /*0x5b4698*/
        this->? = 0; /*0x5b469b*/
      }
    }
  }
  *(_DWORD *)this->Node = &GenericNode::`vftable'; /*0x5b46a0*/
  if ( this ) /*0x5b46a6*/
  {
    v7 = this->?; /*0x5b46a8*/
    if ( v7 ) /*0x5b46ad*/
    {
      v8 = *(_DWORD *)&this->Blowfish; /*0x5b46af*/
      if ( v8 ) /*0x5b46b4*/
      {
        *(_DWORD *)(v8 + 4) = v7; /*0x5b46b6*/
        *(_DWORD *)this->?[1].__pad_0 = *(_DWORD *)&this->Blowfish; /*0x5b46bf*/
        *(_DWORD *)&this->Blowfish = 0; /*0x5b46c2*/
        this->? = 0; /*0x5b46c5*/
      }
    }
  }
  if ( (a2 & 1) != 0 ) /*0x5b46cd*/
    __3_YAXPAX_Z(this); /*0x5b46d0*/
  return this; /*0x5b46da*/
}



// ==== 0x005B46E0  AbstractClass::getWeaponSpeed  this=GenericList  sig=csp ====
_DWORD *__thiscall AbstractClass::getWeaponSpeed(AbstractClass *this, char a2)
{
  _DWORD *ptr_8; // eax
  int v4; // ecx
  int v5; // edx
  int abstractFlags; // edx
  int nextArrayIndex; // ecx
  void *v8; // edx
  _DWORD *ptr_C; // ecx

  this->ptr_0 = &GenericList::`vftable'; /*0x5b46e6*/
  while ( 1 ) /*0x5b46ec*/
  {
    ptr_8 = this->ptr_8; /*0x5b46ec*/
    if ( !ptr_8 ) /*0x5b46f1*/
      break; /*0x5b46f1*/
    if ( !ptr_8[1] ) /*0x5b46f3*/
      break; /*0x5b46f3*/
    v4 = ptr_8[2]; /*0x5b46f8*/
    if ( !v4 ) /*0x5b46fd*/
      break; /*0x5b46fd*/
    v5 = ptr_8[1]; /*0x5b4703*/
    if ( v5 ) /*0x5b4708*/
    {
      *(_DWORD *)(v4 + 4) = v5; /*0x5b470e*/
      *(_DWORD *)(ptr_8[1] + 8) = ptr_8[2]; /*0x5b4717*/
      ptr_8[2] = 0; /*0x5b471a*/
      ptr_8[1] = 0; /*0x5b471d*/
    }
  }
  this->uniqueId = (int)&GenericNode::`vftable'; /*0x5b4727*/
  if ( this != (AbstractClass *)-16 ) /*0x5b472d*/
  {
    abstractFlags = this->abstractFlags; /*0x5b472f*/
    if ( abstractFlags ) /*0x5b4734*/
    {
      nextArrayIndex = this->nextArrayIndex; /*0x5b4736*/
      if ( nextArrayIndex ) /*0x5b473b*/
      {
        *(_DWORD *)(nextArrayIndex + 4) = abstractFlags; /*0x5b473d*/
        *(_DWORD *)(this->abstractFlags + 8) = this->nextArrayIndex; /*0x5b4746*/
        this->nextArrayIndex = 0; /*0x5b4749*/
        this->abstractFlags = 0; /*0x5b474c*/
      }
    }
  }
  this->ptr_4 = &GenericNode::`vftable'; /*0x5b4754*/
  if ( this != (AbstractClass *)-4 ) /*0x5b475a*/
  {
    v8 = this->ptr_8; /*0x5b475c*/
    if ( v8 ) /*0x5b4761*/
    {
      ptr_C = this->ptr_C; /*0x5b4763*/
      if ( ptr_C ) /*0x5b4768*/
      {
        ptr_C[1] = v8; /*0x5b476a*/
        *((_DWORD *)this->ptr_8 + 2) = this->ptr_C; /*0x5b4773*/
        this->ptr_C = 0; /*0x5b4776*/
        this->ptr_8 = 0; /*0x5b4779*/
      }
    }
  }
  if ( (a2 & 1) != 0 ) /*0x5b4781*/
    __3_YAXPAX_Z(this); /*0x5b4784*/
  return &this->ptr_0; /*0x5b478e*/
}



// ==== 0x005B47A0  sub_5B47A0  this=-  sig=ida-proto ====
int sub_5B47A0()
{
  dword_ABF018 = 0; /*0x5b47a2*/
  dword_ABF01C = 0; /*0x5b47a7*/
  dword_ABF020 = 0; /*0x5b47ac*/
  dword_ABF024 = 0; /*0x5b47b1*/
  return 0; /*0x5b47b6*/
}



// ==== 0x005B47C0  sub_5B47C0  this=-  sig=ida-proto ====
void sub_5B47C0()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x5b47cc*/
  dbl_ABF030 = Math::Sqrt(v0 + v0); /*0x5b47de*/
}



// ==== 0x005B47F0  sub_5B47F0  this=-  sig=ida-proto ====
void sub_5B47F0()
{
  dbl_ABF080 = dbl_ABF030 / 60.0; /*0x5b47fc*/
}



// ==== 0x005B4810  sub_5B4810  this=-  sig=ida-proto ====
void sub_5B4810()
{
  dbl_ABF068 = 1.0 / dbl_ABF080; /*0x5b481c*/
}



// ==== 0x005B4830  sub_5B4830  this=-  sig=ida-proto ====
void sub_5B4830()
{
  dbl_ABF060 = 0.0174532925199433 * 45.0; /*0x5b483c*/
}



// ==== 0x005B4850  sub_5B4850  this=-  sig=ida-proto ====
void sub_5B4850()
{
  dbl_ABF038 = 0.0174532925199433 * 60.0; /*0x5b485c*/
}



// ==== 0x005B4870  sub_5B4870  this=-  sig=ida-proto ====
void sub_5B4870()
{
  dbl_ABF010 = 0.0174532925199433 * 90.0; /*0x5b487c*/
}



// ==== 0x005B4890  sub_5B4890  this=-  sig=ida-proto ====
__int64 sub_5B4890()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_ABF010 - dbl_ABF038); /*0x5b48a2*/
  result = Math::RoundToInt(v0 * dbl_ABF030 * 0.5); /*0x5b48b6*/
  dword_ABF088 = result; /*0x5b48bb*/
  return result; /*0x5b48c0*/
}



// ==== 0x005B48D0  sub_5B48D0  this=-  sig=ida-proto ====
void sub_5B48D0()
{
  dbl_ABF040 = Math::ArcTan((double)dword_ABF088 * 0.00390625); /*0x5b48e7*/
}



// ==== 0x005B4900  sub_5B4900  this=-  sig=ida-proto ====
void sub_5B4900()
{
  dbl_ABF058 = Math::ArcTan((double)(2 * dword_ABF088) / dbl_ABF030); /*0x5b4922*/
}



// ==== 0x005B4930  sub_5B4930  this=-  sig=ida-proto ====
__int64 sub_5B4930()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_ABF088) + 0.5); /*0x5b494b*/
  dword_ABF07C = result; /*0x5b4950*/
  return result; /*0x5b4956*/
}



// ==== 0x005B4960  sub_5B4960  this=-  sig=ida-proto ====
int sub_5B4960()
{
  word_ABF028 = 0; /*0x5b4962*/
  word_ABF02A = 0; /*0x5b4968*/
  return 0; /*0x5b496e*/
}



// ==== 0x005B4970  sub_5B4970  this=-  sig=ida-proto ====
int sub_5B4970()
{
  dword_ABF048 = 0; /*0x5b4972*/
  dword_ABF04C = 0; /*0x5b4977*/
  dword_ABF050 = 0; /*0x5b497c*/
  return 0; /*0x5b4981*/
}



// ==== 0x005B4990  sub_5B4990  this=-  sig=ida-proto ====
int sub_5B4990()
{
  dword_ABF078 = 0; /*0x5b4995*/
  dword_ABF070 = 128; /*0x5b499f*/
  dword_ABF074 = 128; /*0x5b49a4*/
  return 128; /*0x5b49a9*/
}



// ==== 0x005B49B0  ModemGuest::Dialog  this=ModemGuest  sig=csp ====
char __thiscall ModemGuest::Dialog(ModemGuest *this)
{
  HWND Dialog; // eax
  int v3; // edi
  int v4; // edi
  TechnoTypeClass *v5; // ecx
  int ModemGuest_field_0x04; // eax
  char v7; // bl
  int v9; // [esp+0h] [ebp-10h]

  Debug::Log(); /*0x5b49c1*/
  this->ModemGuest_field_0x04 = -1; /*0x5b49d7*/
  Dialog = (HWND)CreateDialog(0xF2u, (INT_PTR (__stdcall *)(HWND, UINT, WPARAM, LPARAM))GameSetupDialogProc, 0); /*0x5b49da*/
  *(_DWORD *)this->__pad_0 = Dialog; /*0x5b49e1*/
  if ( !Dialog ) /*0x5b49e3*/
  {
LABEL_16:
    v7 = 0; /*0x5b4af1*/
    goto LABEL_17; /*0x5b4af1*/
  }
  SetWindowLongA(Dialog, 8, (LONG)this); /*0x5b49ee*/
  ModemGuest::InitDialog(this); /*0x5b49f6*/
  Dialog::Show(*(Dialog **)this->__pad_0); /*0x5b49fd*/
  LOBYTE(this->ModemGuest_field_0x08) = 0; /*0x5b4a02*/
  BYTE1(this->ModemGuest_field_0x08) = 1; /*0x5b4a05*/
  v3 = *(_DWORD *)&stru_88732C.__pad_6[14]; /*0x5b4a0e*/
  if ( *(_DWORD *)&stru_88732C.__pad_6[6] != -1 ) /*0x5b4a16*/
    v3 += Timer::GetTicks() - *(_DWORD *)&stru_88732C.__pad_6[6]; /*0x5b4a28*/
  this->ModemGuest_field_0x0C = v3; /*0x5b4a2a*/
  this->q004 = 10000; /*0x5b4a2d*/
  v4 = *(_DWORD *)&stru_88732C.__pad_6[14]; /*0x5b4a39*/
  if ( *(_DWORD *)&stru_88732C.__pad_6[6] != -1 ) /*0x5b4a41*/
    v4 += Timer::GetTicks() - *(_DWORD *)&stru_88732C.__pad_6[6]; /*0x5b4a53*/
  *((_DWORD *)this + 5) = v4; /*0x5b4a55*/
  *((_DWORD *)this + 6) = 1200; /*0x5b4a58*/
  *((_DWORD *)this + 7) = 0; /*0x5b4a5f*/
  this->q004 = 0; /*0x5b4a62*/
  *((_DWORD *)this + 18) = -1; /*0x5b4a66*/
  *((_DWORD *)this + 19) = -1; /*0x5b4a69*/
  *((_DWORD *)this + 20) = GameConfig::ComputeHash(); /*0x5b4a71*/
  LoadArtINI(); /*0x5b4a74*/
  *((_DWORD *)this + 21) = unknown_libname_29(); /*0x5b4a7e*/
  *((_DWORD *)this + 22) = unknown_libname_30(); /*0x5b4a86*/
  while ( this->ModemGuest_field_0x04 < 0 ) /*0x5b4a8f*/
  {
    if ( (unsigned __int8)Dialog::PumpMessages() == 1 ) /*0x5b4a98*/
      break; /*0x5b4a98*/
    CellClass::LockSurface((int)this, 0); /*0x5b4a9d*/
    if ( ModemGame::ProcessPacket((ModemGame *)this) == 1 ) /*0x5b4aab*/
      break; /*0x5b4aab*/
    LOBYTE(v5) = 0; /*0x5b4aad*/
    ScreenSaver::Process(v5, v9); /*0x5b4aaf*/
  }
  Dialog::Destroy(*(Dialog **)this->__pad_0); /*0x5b4abb*/
  if ( LOBYTE(this->ModemGuest_field_0x08) == 1 ) /*0x5b4ac4*/
    SaveConfigWOL((ObjectClass *)&dword_A8B238); /*0x5b4acb*/
  ModemGuest_field_0x04 = this->ModemGuest_field_0x04; /*0x5b4ad0*/
  if ( ModemGuest_field_0x04 != 1 ) /*0x5b4ad6*/
  {
    if ( ModemGuest_field_0x04 == 2 ) /*0x5b4ae4*/
      ReadEventINI(); /*0x5b4aec*/
    goto LABEL_16; /*0x5b4aec*/
  }
  v7 = 1; /*0x5b4ad8*/
LABEL_17:
  Debug::Log(); /*0x5b4afa*/
  return v7; /*0x5b4b0a*/
}



// ==== 0x005B4B10  GameSetupDialogProc  this=-  sig=csp ====
int __stdcall GameSetupDialogProc(HWND hWnd, unsigned int a2, unsigned int a3, unsigned int a4)
{
  int result; // eax
  LONG WindowLongA; // ebp
  HWND v6; // eax
  HWND DlgItem; // eax
  HWND v8; // esi
  char *v9; // eax
  HWND v10; // eax
  HWND v11; // esi
  LRESULT v12; // eax
  HWND v13; // eax
  HWND v14; // edi
  void *v15; // esi
  int v16; // [esp-4h] [ebp-338h] BYREF
  wchar_t v17[22]; // [esp+Ch] [ebp-328h] BYREF
  _DWORD v18[62]; // [esp+38h] [ebp-2FCh] BYREF
  __int16 v19; // [esp+130h] [ebp-204h]
  wchar_t lParam[256]; // [esp+134h] [ebp-200h] BYREF

  result = BaseDialogProc(hWnd, a2, a3, a4); /*0x5b4b38*/
  if ( result ) /*0x5b4b3f*/
    return result; /*0x5b4b3f*/
  WindowLongA = GetWindowLongA(hWnd, 8); /*0x5b4b4f*/
  switch ( a2 ) /*0x5b4b56*/
  {
    case 2u: /*0x5b4b56*/
      v15 = g_UIControlState; /*0x5b4ead*/
      if ( g_UIControlState ) /*0x5b4eb5*/
      {
        ComPtr::Dtor(g_UIControlState); /*0x5b4eb9*/
        __3_YAXPAX_Z(v15); /*0x5b4ebf*/
        g_UIControlState = 0; /*0x5b4ec7*/
      }
      return 0; /*0x5b4ec7*/
    case 0xFu: /*0x5b4b56*/
      if ( g_UIControlState ) /*0x5b4e8d*/
        Skirmish::RenderPreview(g_UIControlState, hWnd); /*0x5b4e90*/
      ValidateRect(hWnd, 0); /*0x5b4e98*/
      return 0; /*0x5b4ea1*/
    case 0x111u: /*0x5b4b56*/
      if ( (unsigned __int16)a3 <= 0x540u ) /*0x5b4b7c*/
      {
        if ( (unsigned __int16)a3 == 1344 ) /*0x5b4b82*/
        {
          if ( HIWORD(a3) == 1281 ) /*0x5b4c4b*/
          {
            DlgItem = GetDlgItem(*(HWND *)WindowLongA, 1344); /*0x5b4c5a*/
            v8 = DlgItem; /*0x5b4c60*/
            if ( DlgItem ) /*0x5b4c64*/
            {
              SendMessageA(DlgItem, 0x4B3u, 0x100u, (LPARAM)lParam); /*0x5b4c83*/
              SendMessageA(v8, 0x4B2u, 0, (LPARAM)&g_TypeClass_DefaultString); /*0x5b4c92*/
              if ( wcslen(lParam) ) /*0x5b4c9c*/
              {
                if ( lParam[0] != 13 ) /*0x5b4cb5*/
                {
                  WideString::Trim(lParam); /*0x5b4cc2*/
                  if ( &v16 != (int *)-312 ) /*0x5b4cd0*/
                  {
                    memset(v18, 0, sizeof(v18)); /*0x5b4ce5*/
                    v19 = 0; /*0x5b4ce7*/
                    v18[0] = 104; /*0x5b4cf3*/
                    strcpy((char *)&v18[1], unk_A8B380); /*0x5b4d11*/
                    LOBYTE(v18[6]) = dword_A8B394; /*0x5b4d26*/
                    wcscpy((wchar_t *)((char *)&v18[6] + 1), lParam); /*0x5b4d2a*/
                    Stream::WriteBlock((int)&unk_A8EA70, (int)v18, 250, 1); /*0x5b4d43*/
                    Stream::ReadPacket((int)&unk_A8EA70); /*0x5b4d4d*/
                    v9 = CharToWideString(unk_A8B380); /*0x5b4d57*/
                    UI_Setup((wchar_t *)v9, dword_A8B394, (int)lParam); /*0x5b4d6e*/
                    return 0; /*0x5b4d7f*/
                  }
                }
              }
            }
          }
          return 0; /*0x5b4cd0*/
        }
        if ( (unsigned __int16)a3 != 1 ) /*0x5b4b89*/
        {
          if ( (unsigned __int16)a3 == 2 ) /*0x5b4b8c*/
          {
            if ( !HIWORD(a3) ) /*0x5b4bbb*/
            {
              Game::processStartup(WindowLongA); /*0x5b4bc6*/
              *(_DWORD *)(WindowLongA + 4) = 2; /*0x5b4bcb*/
              return 0; /*0x5b4bde*/
            }
          }
          else if ( (unsigned __int16)a3 == 1029 && HIWORD(a3) == 1 ) /*0x5b4b9f*/
          {
            ModemGame::AdvanceTauntCommand(WindowLongA); /*0x5b4ba7*/
            return 0; /*0x5b4bb8*/
          }
          return 0; /*0x5b4b9f*/
        }
        if ( !HIWORD(a3) ) /*0x5b4be1*/
        {
          v6 = GetDlgItem(*(HWND *)WindowLongA, 1); /*0x5b4bf4*/
          if ( v6 ) /*0x5b4bfc*/
            EnableWindow(v6, 0); /*0x5b4c01*/
          memset(v18, 0, sizeof(v18)); /*0x5b4c13*/
          v19 = 0; /*0x5b4c1e*/
          v18[0] = 116; /*0x5b4c26*/
          Stream::WriteBlock((int)&unk_A8EA70, (int)v18, 250, 1); /*0x5b4c2e*/
          return 0; /*0x5b4c3f*/
        }
        return 0; /*0x5b4ed1*/
      }
      if ( (unsigned __int16)a3 != 1473 ) /*0x5b4d87*/
      {
        if ( (unsigned __int16)a3 == 1639 && HIWORD(a3) == 1 ) /*0x5b4d9e*/
        {
          v10 = GetDlgItem(*(HWND *)WindowLongA, 1639); /*0x5b4da9*/
          v11 = v10; /*0x5b4daf*/
          if ( v10 ) /*0x5b4db3*/
          {
            v12 = SendMessageA(v10, 0x147u, 0, 0); /*0x5b4dc9*/
            if ( v12 != -1 ) /*0x5b4dce*/
            {
              dword_A8B3AC = SendMessageA(v11, 0x150u, v12, 0); /*0x5b4ddf*/
              *(_BYTE *)(WindowLongA + 9) = 1; /*0x5b4de4*/
              *(_BYTE *)(WindowLongA + 8) = 1; /*0x5b4de7*/
              return 0; /*0x5b4df6*/
            }
          }
        }
        return 0; /*0x5b4dce*/
      }
      if ( HIWORD(a3) != 1281 && HIWORD(a3) != 768 ) /*0x5b4e08*/
        return 0; /*0x5b4e08*/
      v13 = GetDlgItem(*(HWND *)WindowLongA, 1473); /*0x5b4e17*/
      v14 = v13; /*0x5b4e1d*/
      if ( !v13 ) /*0x5b4e21*/
        return 0; /*0x5b4e21*/
      SendMessageA(v13, 0x4B3u, 0x15u, (LPARAM)v17); /*0x5b4e3a*/
      WideString::Trim(v17); /*0x5b4e40*/
      if ( HIWORD(a3) != 768 ) /*0x5b4e4a*/
        SendMessageA(v14, 0x4B2u, 0, (LPARAM)v17); /*0x5b4e59*/
      CopyWideToChar(unk_A8B380, (char *)v17, -1); /*0x5b4e66*/
      *(_BYTE *)(WindowLongA + 9) = 1; /*0x5b4e72*/
      *(_BYTE *)(WindowLongA + 8) = 1; /*0x5b4e75*/
      return 0; /*0x5b4e70*/
    default:
      return 0; /*0x5b4b6a*/
  }
}



// ==== 0x005B4EE0  ModemGuest::InitDialog  this=ModemGuest  sig=csp ====
void __thiscall ModemGuest::InitDialog(ModemGuest *this)
{
  HWND *v1; // ebp
  HWND (__stdcall *v2)(HWND, int); // ebx
  HWND DlgItem; // eax
  HWND v4; // edi
  char *v5; // eax
  HWND v6; // eax
  HWND v7; // edi
  wchar_t *StringCSF; // eax
  wchar_t *v9; // eax
  wchar_t *v10; // eax
  wchar_t *v11; // eax
  wchar_t *v12; // eax
  wchar_t *v13; // eax
  wchar_t *v14; // eax
  wchar_t *v15; // eax
  WPARAM v16; // ebx
  LPARAM *v17; // ebp
  HWND v18; // eax
  HWND v19; // edi
  LPARAM i; // ebx
  int v21; // eax
  LRESULT v22; // eax
  WPARAM ListBoxItem; // eax
  HWND v24; // edi
  HWND v25; // eax
  HWND v26; // edi
  HWND v27; // edi
  HWND v28; // eax
  HWND v29; // edi
  HWND v30; // eax
  HWND v31; // edi
  HWND v32; // eax
  HWND v33; // edi
  HWND v34; // eax
  HWND v35; // eax
  HWND v36; // eax
  HWND v37; // eax
  HWND v38; // eax
  HWND v39; // eax
  HWND v40; // eax
  HWND v41; // eax
  HWND v42; // eax
  HWND v43; // eax
  Skirmish *v44; // esi
  HWND v45; // esi
  wchar_t Buffer[256]; // [esp+14h] [ebp-A00h] BYREF
  wchar_t Format[1024]; // [esp+214h] [ebp-800h] BYREF

  v1 = (HWND *)this; /*0x5b4eea*/
  Debug::Log(); /*0x5b4ef5*/
  v2 = GetDlgItem; /*0x5b4efd*/
  DlgItem = GetDlgItem(*v1, 1473); /*0x5b4f0c*/
  v4 = DlgItem; /*0x5b4f14*/
  if ( DlgItem ) /*0x5b4f18*/
  {
    SendMessageA(DlgItem, 0xC5u, 0x13u, 0); /*0x5b4f24*/
    v5 = CharToWideString(unk_A8B380); /*0x5b4f2b*/
    SendMessageA(v4, 0x4B2u, 0, (LPARAM)v5); /*0x5b4f39*/
  }
  Debug::Log(); /*0x5b4f45*/
  v6 = GetDlgItem(*v1, 1029); /*0x5b4f56*/
  v7 = v6; /*0x5b4f58*/
  if ( v6 ) /*0x5b4f5c*/
  {
    SendMessageA(v6, 0x14Bu, 0, 0); /*0x5b4f6c*/
    StringCSF = GetStringCSF((wchar_t *)&stru_82BA00.?[37], 0, (const char *)&stru_82BA00.?[40], 280); /*0x5b4f7f*/
    SendMessageA(v7, 0x4C1u, 0xFFFFFFFF, (LPARAM)StringCSF); /*0x5b4f8d*/
    v9 = GetStringCSF((wchar_t *)&stru_82BA00.?[35], 0, (const char *)&stru_82BA00.?[40], 281); /*0x5b4fa0*/
    SendMessageA(v7, 0x4C1u, 0xFFFFFFFF, (LPARAM)v9); /*0x5b4fae*/
    v10 = GetStringCSF((wchar_t *)&stru_82BA00.?[32], 0, (const char *)&stru_82BA00.?[40], 282); /*0x5b4fc1*/
    SendMessageA(v7, 0x4C1u, 0xFFFFFFFF, (LPARAM)v10); /*0x5b4fcf*/
    v11 = GetStringCSF((wchar_t *)&stru_82BA00.?[29], 0, (const char *)&stru_82BA00.?[40], 283); /*0x5b4fe2*/
    SendMessageA(v7, 0x4C1u, 0xFFFFFFFF, (LPARAM)v11); /*0x5b4ff0*/
    v12 = GetStringCSF((wchar_t *)&stru_82BA00.?[26], 0, (const char *)&stru_82BA00.?[40], 284); /*0x5b5003*/
    SendMessageA(v7, 0x4C1u, 0xFFFFFFFF, (LPARAM)v12); /*0x5b5011*/
    v13 = GetStringCSF((wchar_t *)&stru_82BA00.?[22], 0, (const char *)&stru_82BA00.?[40], 285); /*0x5b5024*/
    SendMessageA(v7, 0x4C1u, 0xFFFFFFFF, (LPARAM)v13); /*0x5b5032*/
    v14 = GetStringCSF((wchar_t *)&stru_82BA00.?[19], 0, (const char *)&stru_82BA00.?[40], 286); /*0x5b5045*/
    SendMessageA(v7, 0x4C1u, 0xFFFFFFFF, (LPARAM)v14); /*0x5b5053*/
    v15 = GetStringCSF((wchar_t *)&stru_82BA00.?[16], 0, (const char *)&stru_82BA00.?[40], 287); /*0x5b5066*/
    SendMessageA(v7, 0x4C1u, 0xFFFFFFFF, (LPARAM)v15); /*0x5b5074*/
    v16 = 0; /*0x5b5076*/
    v17 = dword_8316A8; /*0x5b5078*/
    do /*0x5b5094*/
      SendMessageA(v7, 0x498u, v16++, *v17++); /*0x5b5088*/
    while ( (int)v17 < (int)&off_8316C8 ); /*0x5b5094*/
    dword_A8B394 = dword_A8B3B4; /*0x5b50a4*/
    SendMessageA(v7, 0x14Eu, dword_A8B3B4, 0); /*0x5b50a9*/
    v1 = (HWND *)this; /*0x5b50ab*/
    v2 = GetDlgItem; /*0x5b50af*/
  }
  Debug::Log(); /*0x5b50c0*/
  v18 = v2(*v1, 1639); /*0x5b50d1*/
  v19 = v18; /*0x5b50d3*/
  if ( v18 ) /*0x5b50d7*/
  {
    SendMessageA(v18, 0x14Bu, 0, 0); /*0x5b50e3*/
    for ( i = 0; i < dword_A83CA8; ++i ) /*0x5b50ee*/
    {
      v21 = *((_DWORD *)dword_A83C9C + i); /*0x5b50f6*/
      if ( *(_BYTE *)(v21 + 421) ) /*0x5b50f9*/
      {
        v22 = SendMessageA(v19, 0x4C2u, 0, *(_DWORD *)(v21 + 96)); /*0x5b510f*/
        SendMessageA(v19, 0x151u, v22, i); /*0x5b5119*/
      }
    }
    ListBoxItem = FindListBoxItem(v19, -1, dword_A8B3AC); /*0x5b5130*/
    SendMessageA(v19, 0x14Eu, ListBoxItem, 0); /*0x5b513e*/
    v2 = GetDlgItem; /*0x5b5140*/
  }
  v24 = v2(*v1, 1641); /*0x5b5151*/
  if ( v24 ) /*0x5b5155*/
  {
    SendMessageA( /*0x5b517c*/
      v24,
      0x406u,
      1u,
      *(unsigned __int16 *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 5264)
    | (*(unsigned __int16 *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 5272) << 16));
    SendMessageA(v24, 0x405u, 1u, *(LPARAM *)&stru_A8B250.__pad_0[32]); /*0x5b518d*/
  }
  Debug::Log(); /*0x5b519a*/
  v25 = v2(*v1, 1360); /*0x5b51ab*/
  v26 = v25; /*0x5b51ad*/
  if ( v25 ) /*0x5b51b1*/
  {
    SendMessageA(v25, 0x406u, 1u, 655361); /*0x5b51c0*/
    SendMessageA(v26, 0x405u, 1u, g_RulesInitConfig); /*0x5b51d1*/
  }
  Debug::Log(); /*0x5b51de*/
  v27 = v2(*v1, 1026); /*0x5b51f1*/
  if ( v27 ) /*0x5b51f5*/
  {
    SendMessageA( /*0x5b521c*/
      v27,
      0x406u,
      1u,
      *(unsigned __int16 *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 5248)
    | (*(unsigned __int16 *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 5256) << 16));
    SendMessageA(v27, 0x405u, 1u, *(LPARAM *)&stru_A8B250.__pad_0[12]); /*0x5b522d*/
  }
  Debug::Log(); /*0x5b523a*/
  v28 = v2(*v1, 1362); /*0x5b524b*/
  v29 = v28; /*0x5b524d*/
  if ( v28 ) /*0x5b5251*/
  {
    SendMessageA(v28, 0x406u, 1u, 393216); /*0x5b5260*/
    SendMessageA(v29, 0x405u, 1u, *(LPARAM *)&stru_A8B250.__pad_0[36]); /*0x5b5271*/
  }
  Debug::Log(); /*0x5b527e*/
  v30 = v2(*v1, 1321); /*0x5b528f*/
  v31 = v30; /*0x5b5291*/
  if ( v30 ) /*0x5b5295*/
  {
    SendMessageA(v30, 0x406u, 1u, 393216); /*0x5b52a4*/
    SendMessageA(v31, 0x405u, 1u, 6 - *(_DWORD *)&stru_A8B250.__pad_0[24]); /*0x5b52bc*/
  }
  Debug::Log(); /*0x5b52c9*/
  v32 = v2(*v1, 1363); /*0x5b52da*/
  v33 = v32; /*0x5b52dc*/
  if ( v32 ) /*0x5b52e0*/
  {
    SendMessageA(v32, 0x406u, 1u, 0x20000); /*0x5b52ef*/
    SendMessageA(v33, 0x405u, 1u, *(LPARAM *)&stru_A8B250.__pad_0[40]); /*0x5b5300*/
  }
  Debug::Log(); /*0x5b530d*/
  v34 = v2(*v1, 1643); /*0x5b531e*/
  if ( v34 ) /*0x5b5322*/
    SendMessageA(v34, 0xF1u, dword_A8B320 == 1, 0); /*0x5b533b*/
  Debug::Log(); /*0x5b5356*/
  v35 = v2(*v1, 1642); /*0x5b5367*/
  if ( v35 ) /*0x5b536b*/
    SendMessageA(v35, 0xF1u, stru_A8B250.__pad_0[8] == 1, 0); /*0x5b5384*/
  Debug::Log(); /*0x5b539f*/
  v36 = v2(*v1, 1358); /*0x5b53b0*/
  if ( v36 ) /*0x5b53b4*/
    SendMessageA(v36, 0xF1u, stru_A8B250.__pad_0[18] == 1, 0); /*0x5b53cd*/
  Debug::Log(); /*0x5b53e8*/
  v37 = v2(*v1, 1690); /*0x5b53f9*/
  if ( v37 ) /*0x5b53fd*/
    SendMessageA(v37, 0xF1u, stru_A8B250.__pad_0[19] == 1, 0); /*0x5b5416*/
  Debug::Log(); /*0x5b5431*/
  v38 = v2(*v1, 1693); /*0x5b5442*/
  if ( v38 ) /*0x5b5446*/
    SendMessageA(v38, 0xF1u, stru_A8B250.__pad_0[20] == 1, 0); /*0x5b545f*/
  Debug::Log(); /*0x5b547a*/
  v39 = v2(*v1, 1361); /*0x5b548b*/
  if ( v39 ) /*0x5b548f*/
    SendMessageA(v39, 0xF1u, stru_A8B250.__pad_0[28] == 1, 0); /*0x5b54a8*/
  Debug::Log(); /*0x5b54c3*/
  v40 = v2(*v1, 1356); /*0x5b54d4*/
  if ( v40 ) /*0x5b54d8*/
    SendMessageA(v40, 0xF1u, stru_A8B250.__pad_0[17] == 1, 0); /*0x5b54f1*/
  Debug::Log(); /*0x5b550c*/
  v41 = v2(*v1, 1357); /*0x5b551d*/
  if ( v41 ) /*0x5b5521*/
    SendMessageA(v41, 0xF1u, byte_A8B31F == 1, 0); /*0x5b553a*/
  Debug::Log(); /*0x5b5555*/
  v42 = v2(*v1, 1572); /*0x5b5566*/
  if ( v42 ) /*0x5b556a*/
    SendMessageA(v42, 0xF1u, stru_A8B250.__pad_0[16] == 1, 0); /*0x5b5583*/
  Debug::Log(); /*0x5b559e*/
  v43 = v2(*v1, 1430); /*0x5b55af*/
  if ( v43 ) /*0x5b55b3*/
    SendMessageA(v43, 0xF1u, byte_A8B31D == 1, 0); /*0x5b55cc*/
  Debug::Log(); /*0x5b55e7*/
  NetworkBuffer::GetField((NetworkBuffer *)&stru_A8EB00.?[252]); /*0x5b55f4*/
  v44 = g_UIControlState; /*0x5b55f9*/
  if ( g_UIControlState ) /*0x5b5601*/
  {
    ComPtr::Dtor((ComPtr *)g_UIControlState); /*0x5b5605*/
    __3_YAXPAX_Z(v44); /*0x5b560b*/
    g_UIControlState = 0; /*0x5b5613*/
  }
  if ( strlen(byte_AC1288) > 0x4E ) /*0x5b562f*/
    byte_AC12D7 = 0; /*0x5b5631*/
  if ( strlen(byte_AC1288) ) /*0x5b563b*/
  {
    BulkCharToWide(Format, (unsigned __int8 *)byte_AC1288, -1); /*0x5b5655*/
    if ( &g_TypeClass_DefaultString ) /*0x5b5661*/
    {
      v45 = v2(*v1, 1343); /*0x5b566e*/
      if ( v45 ) /*0x5b5672*/
      {
        swprintf(Buffer, (const size_t)g_Str_Trace___s_, Format, &g_TypeClass_DefaultString); /*0x5b5691*/
        DrawDialogText((LPARAM)Math::InitDegToRad, Buffer, v45); /*0x5b56a0*/
      }
    }
  }
  byte_AC1288[0] = 0; /*0x5b56ac*/
  NullModemClass::Flush((NullModemClass *)&unk_A8EA70, 1); /*0x5b56b3*/
  BYTE2(stru_A8D600.Network_field_0xC) = 1; /*0x5b56bd*/
  PtrVector::Destroy(&stru_A8DA74); /*0x5b56c4*/
  MEMORY[0xA8B322] = 0; /*0x5b56ce*/
  Debug::Log(); /*0x5b56d7*/
}



// ==== 0x005B56F0  Game::processStartup  this=Game  sig=csp ====
void __thiscall Game::processStartup(Game *this)
{
  HWND DlgItem; // eax
  HWND v3; // eax
  HWND v4; // eax
  HWND v5; // esi
  LRESULT v6; // eax
  char lParam[40]; // [esp+Ch] [ebp-28h] BYREF

  Debug::Log(); /*0x5b56fd*/
  DlgItem = GetDlgItem(*(HWND *)this->__pad_0, 1473); /*0x5b5713*/
  if ( DlgItem ) /*0x5b571d*/
  {
    SendMessageA(DlgItem, 0x4B3u, 0x14u, (LPARAM)lParam); /*0x5b572c*/
    CopyWideToChar(unk_A8B380, lParam, -1); /*0x5b5739*/
  }
  Debug::Log(); /*0x5b5748*/
  v3 = GetDlgItem(*(HWND *)this->__pad_0, 1029); /*0x5b5758*/
  if ( v3 ) /*0x5b575c*/
    dword_A8B394 = SendMessageA(v3, 0x147u, 0, 0); /*0x5b576a*/
  Debug::Log(); /*0x5b577a*/
  v4 = GetDlgItem(*(HWND *)this->__pad_0, 1639); /*0x5b578a*/
  v5 = v4; /*0x5b578c*/
  if ( v4 ) /*0x5b5790*/
  {
    v6 = SendMessageA(v4, 0x147u, 0, 0); /*0x5b579c*/
    dword_A8B3AC = SendMessageA(v5, 0x150u, v6, 0); /*0x5b57a9*/
  }
  Debug::Log(); /*0x5b57b3*/
}



// ==== 0x005B57D0  ObjectClass::method_5B57D0  this=ObjectClass  sig=csp ====
int __thiscall sub_5B57D0(ObjectClass *this)
{
  int result; // eax
  HWND v3; // esi
  char *v4; // eax
  unsigned int v5; // edi
  HWND v6; // esi
  int (__usercall *v7)@<eax>(char@<cf>, char@<zf>); // edi
  HWND ptr_0; // [esp-8h] [ebp-518h]
  int v9; // [esp+0h] [ebp-510h] BYREF
  wchar_t *Format; // [esp+10h] [ebp-500h]
  int v11[62]; // [esp+14h] [ebp-4FCh] BYREF
  __int16 v12; // [esp+10Ch] [ebp-404h]
  wchar_t lParam[256]; // [esp+110h] [ebp-400h] BYREF
  wchar_t Buffer[256]; // [esp+310h] [ebp-200h] BYREF

  result = (int)GetDlgItem((HWND)this->AbstractClass, 1344); /*0x5b57ea*/
  v3 = (HWND)result; /*0x5b57ec*/
  if ( result ) /*0x5b57f0*/
  {
    SendMessageA((HWND)result, 0x4B3u, 0x100u, (LPARAM)lParam); /*0x5b580f*/
    SendMessageA(v3, 0x4B2u, 0, (LPARAM)&g_TypeClass_DefaultString); /*0x5b581e*/
    result = wcslen(lParam); /*0x5b5828*/
    if ( result ) /*0x5b5832*/
    {
      if ( lParam[0] != 13 ) /*0x5b5841*/
      {
        WideString::Trim(lParam); /*0x5b584e*/
        result = (int)lParam; /*0x5b5853*/
        if ( &v9 != (int *)-272 ) /*0x5b585c*/
        {
          memset(v11, 0, sizeof(v11)); /*0x5b5871*/
          v12 = 0; /*0x5b5873*/
          v11[0] = 104; /*0x5b587f*/
          strcpy((char *)&v11[1], unk_A8B380); /*0x5b589d*/
          LOBYTE(v11[6]) = dword_A8B394; /*0x5b58b2*/
          wcscpy((wchar_t *)((char *)&v11[6] + 1), lParam); /*0x5b58b6*/
          Stream::WriteBlock((int *)&unk_A8EA70, (int)v11, 250, 1); /*0x5b58cf*/
          Stream::ReadPacket((int)&unk_A8EA70); /*0x5b58d9*/
          v4 = CharToWideString(unk_A8B380); /*0x5b58e3*/
          v5 = dword_A8B394; /*0x5b58ea*/
          ptr_0 = (HWND)this->AbstractClass; /*0x5b58f5*/
          Format = (wchar_t *)v4; /*0x5b58f6*/
          result = (int)GetDlgItem(ptr_0, 1343); /*0x5b58fa*/
          v6 = (HWND)result; /*0x5b58fc*/
          if ( result ) /*0x5b5900*/
          {
            if ( v5 >= 8 ) /*0x5b5904*/
              v7 = Math::InitDegToRad; /*0x5b5914*/
            else
              v7 = (int (__usercall *)@<eax>(char@<cf>, char@<zf>))dword_8316A8[v5]; /*0x5b590b*/
            swprintf(Buffer, (const size_t)g_Str_Trace___s_, Format, lParam); /*0x5b5934*/
            return DrawDialogText((LPARAM)v7, Buffer, v6); /*0x5b5946*/
          }
        }
      }
    }
  }
  return result; /*0x5b594b*/
}



// ==== 0x005B5960  ObjectClass::method_5B5960  this=ObjectClass  sig=csp ====
char __thiscall sub_5B5960(ObjectClass *this)
{
  HWND DlgItem; // eax
  HWND v3; // edi

  DlgItem = GetDlgItem((HWND)this->AbstractClass, 1639); /*0x5b596d*/
  v3 = DlgItem; /*0x5b5973*/
  if ( DlgItem ) /*0x5b5977*/
  {
    DlgItem = (HWND)SendMessageA(DlgItem, 0x147u, 0, 0); /*0x5b5989*/
    if ( DlgItem != HWND_MESSAGE|0x2 ) /*0x5b598e*/
    {
      dword_A8B3AC = SendMessageA(v3, 0x150u, (WPARAM)DlgItem, 0); /*0x5b599b*/
      BYTE1(this->?) = 1; /*0x5b59a2*/
      LOBYTE(this->?) = 1; /*0x5b59a5*/
      LOBYTE(DlgItem) = 1; /*0x5b59a0*/
    }
  }
  return (char)DlgItem; /*0x5b59a8*/
}



// ==== 0x005B59B0  ModemGame::AdvanceTauntCommand  this=ModemGame  sig=csp ====
int __thiscall ModemGame::AdvanceTauntCommand(ModemGame *this)
{
  int result; // eax
  HWND v3; // ebx
  WPARAM v4; // esi
  int v5; // eax

  result = (int)GetDlgItem(*(HWND *)this->__pad_0, 1029); /*0x5b59be*/
  v3 = (HWND)result; /*0x5b59c4*/
  if ( result ) /*0x5b59c8*/
  {
    result = SendMessageA((HWND)result, 0x147u, 0, 0); /*0x5b59da*/
    v4 = result; /*0x5b59dc*/
    if ( result != -1 ) /*0x5b59e1*/
    {
      v5 = *((_DWORD *)this + 18); /*0x5b59e3*/
      if ( v4 == v5 ) /*0x5b59e8*/
      {
        v4 = v5 + 1; /*0x5b59ea*/
        if ( v5 + 1 > 7 ) /*0x5b59f0*/
          v4 = 0; /*0x5b59f2*/
        SendMessageA(v3, 0x14Eu, v4, 0); /*0x5b59fd*/
      }
      dword_A8B394 = v4; /*0x5b5a01*/
      BYTE1(this->ModemGame_field_0x08) = 1; /*0x5b5a09*/
      LOBYTE(this->ModemGame_field_0x08) = 1; /*0x5b5a0c*/
      if ( v4 >= 8 ) /*0x5b5a0f*/
        return SendMessageA(v3, 0x498u, 0, (LPARAM)Math::InitDegToRad); /*0x5b5a3c*/
      else
        return SendMessageA(v3, 0x498u, 0, dword_8316A8[v4]); /*0x5b5a26*/
    }
  }
  return result; /*0x5b5a28*/
}



// ==== 0x005B5A50  ObjectClass::method_5B5A50  this=ObjectClass  sig=csp ====
char __thiscall sub_5B5A50(ObjectClass *this, char a2)
{
  HWND DlgItem; // eax
  HWND v4; // esi
  wchar_t lParam[22]; // [esp+8h] [ebp-2Ch] BYREF

  DlgItem = GetDlgItem((HWND)this->AbstractClass, 1473); /*0x5b5a5f*/
  v4 = DlgItem; /*0x5b5a65*/
  if ( DlgItem ) /*0x5b5a69*/
  {
    SendMessageA(DlgItem, 0x4B3u, 0x15u, (LPARAM)lParam); /*0x5b5a7f*/
    WideString::Trim(lParam); /*0x5b5a85*/
    if ( !a2 ) /*0x5b5a90*/
      SendMessageA(v4, 0x4B2u, 0, (LPARAM)lParam); /*0x5b5a9f*/
    CopyWideToChar(unk_A8B380, (char *)lParam, -1); /*0x5b5aac*/
    BYTE1(this->?) = 1; /*0x5b5ab4*/
    LOBYTE(this->?) = 1; /*0x5b5ab7*/
    LOBYTE(DlgItem) = 1; /*0x5b5ab1*/
  }
  return (char)DlgItem; /*0x5b5aba*/
}



// ==== 0x005B5AD0  ModemGame::UpdatePlayerNameAndColor  this=ModemGame  sig=csp ====
int __thiscall ModemGame::UpdatePlayerNameAndColor(ModemGame *this, wchar_t *Source, unsigned int a3, int a4)
{
  HWND v5; // edx
  HWND DlgItem; // eax
  LRESULT v7; // eax
  int result; // eax
  HWND v9; // esi
  int (__usercall *v10)@<eax>(char@<cf>, char@<zf>); // ebx
  HWND v11; // [esp-8h] [ebp-B8h]
  wchar_t lParam[80]; // [esp+10h] [ebp-A0h] BYREF

  wcscpy((wchar_t *)this + 16, Source); /*0x5b5ae8*/
  v5 = *(HWND *)this->__pad_0; /*0x5b5aed*/
  *((_DWORD *)this + 18) = a3; /*0x5b5aff*/
  DlgItem = GetDlgItem(v5, 1029); /*0x5b5b08*/
  if ( DlgItem ) /*0x5b5b0c*/
  {
    v7 = SendMessageA(DlgItem, 0x147u, 0, 0); /*0x5b5b18*/
    if ( v7 != -1 && v7 == *((_DWORD *)this + 18) ) /*0x5b5b26*/
      ModemGame::AdvanceTauntCommand(this); /*0x5b5b2a*/
  }
  v11 = *(HWND *)this->__pad_0; /*0x5b5b3d*/
  *((_DWORD *)this + 19) = a4; /*0x5b5b3e*/
  result = (int)GetDlgItem(v11, 1640); /*0x5b5b41*/
  v9 = (HWND)result; /*0x5b5b43*/
  if ( result ) /*0x5b5b47*/
  {
    swprintf(lParam, (const size_t)&stru_82BA00.?[77], Source, *(_DWORD *)(*((_DWORD *)dword_A83C9C + a4) + 96)); /*0x5b5b68*/
    SendMessageA(v9, 0x4B2u, 0, (LPARAM)lParam); /*0x5b5b83*/
    if ( a3 >= 8 ) /*0x5b5b87*/
      v10 = Math::InitDegToRad; /*0x5b5b97*/
    else
      v10 = (int (__usercall *)@<eax>(char@<cf>, char@<zf>))dword_8316A8[a3]; /*0x5b5b8e*/
    return SendMessageA(v9, 0x498u, 0, (LPARAM)v10); /*0x5b5ba6*/
  }
  return result; /*0x5b5ba8*/
}



// ==== 0x005B5BC0  Dialog::InitializeGameSettings  this=Dialog  sig=csp ====
int __thiscall Dialog::InitializeGameSettings(Dialog *this)
{
  HWND DlgItem; // eax
  HWND v3; // eax
  HWND v4; // eax
  HWND v5; // eax
  HWND v6; // eax
  HWND v7; // eax
  HWND v8; // eax
  HWND v9; // eax
  HWND v10; // eax
  HWND v11; // eax
  HWND v12; // eax
  HWND v13; // eax
  HWND v14; // eax
  HWND v15; // eax
  HWND v16; // eax
  HWND v17; // eax
  HWND v18; // eax
  HWND v19; // eax

  Debug::Log(); /*0x5b5bcb*/
  DlgItem = GetDlgItem(*(HWND *)this->__pad_0, 1641); /*0x5b5be1*/
  if ( DlgItem ) /*0x5b5bf0*/
    SendMessageA(DlgItem, 0x405u, 1u, *(LPARAM *)&stru_A8B250.__pad_0[32]); /*0x5b5c00*/
  v3 = GetDlgItem(*(HWND *)this->__pad_0, 1360); /*0x5b5c0a*/
  if ( v3 ) /*0x5b5c0e*/
    SendMessageA(v3, 0x405u, 1u, g_RulesInitConfig); /*0x5b5c1e*/
  v4 = GetDlgItem(*(HWND *)this->__pad_0, 1026); /*0x5b5c28*/
  if ( v4 ) /*0x5b5c2c*/
    SendMessageA(v4, 0x405u, 1u, *(LPARAM *)&stru_A8B250.__pad_0[12]); /*0x5b5c3c*/
  v5 = GetDlgItem(*(HWND *)this->__pad_0, 1362); /*0x5b5c46*/
  if ( v5 ) /*0x5b5c4a*/
    SendMessageA(v5, 0x405u, 1u, *(LPARAM *)&stru_A8B250.__pad_0[36]); /*0x5b5c5a*/
  v6 = GetDlgItem(*(HWND *)this->__pad_0, 1321); /*0x5b5c64*/
  if ( v6 ) /*0x5b5c68*/
    SendMessageA(v6, 0x405u, 1u, 6 - *(_DWORD *)&stru_A8B250.__pad_0[24]); /*0x5b5c7f*/
  v7 = GetDlgItem(*(HWND *)this->__pad_0, 1363); /*0x5b5c89*/
  if ( v7 ) /*0x5b5c8d*/
    SendMessageA(v7, 0x405u, 1u, *(LPARAM *)&stru_A8B250.__pad_0[40]); /*0x5b5c9d*/
  v8 = GetDlgItem(*(HWND *)this->__pad_0, 1643); /*0x5b5ca7*/
  if ( v8 ) /*0x5b5cab*/
    SendMessageA(v8, 0xF1u, dword_A8B320 == 1, 0); /*0x5b5cc3*/
  v9 = GetDlgItem(*(HWND *)this->__pad_0, 1642); /*0x5b5ccd*/
  if ( v9 ) /*0x5b5cd1*/
    SendMessageA(v9, 0xF1u, stru_A8B250.__pad_0[8] == 1, 0); /*0x5b5ce9*/
  v10 = GetDlgItem(*(HWND *)this->__pad_0, 1361); /*0x5b5cf3*/
  if ( v10 ) /*0x5b5cf7*/
    SendMessageA(v10, 0xF1u, stru_A8B250.__pad_0[28] == 1, 0); /*0x5b5d0f*/
  v11 = GetDlgItem(*(HWND *)this->__pad_0, 1358); /*0x5b5d19*/
  if ( v11 ) /*0x5b5d1d*/
    SendMessageA(v11, 0xF1u, stru_A8B250.__pad_0[18] == 1, 0); /*0x5b5d35*/
  v12 = GetDlgItem(*(HWND *)this->__pad_0, 1690); /*0x5b5d3f*/
  if ( v12 ) /*0x5b5d43*/
    SendMessageA(v12, 0xF1u, stru_A8B250.__pad_0[19] == 1, 0); /*0x5b5d5b*/
  v13 = GetDlgItem(*(HWND *)this->__pad_0, 1693); /*0x5b5d65*/
  if ( v13 ) /*0x5b5d69*/
    SendMessageA(v13, 0xF1u, stru_A8B250.__pad_0[20] == 1, 0); /*0x5b5d81*/
  v14 = GetDlgItem(*(HWND *)this->__pad_0, 1356); /*0x5b5d8b*/
  if ( v14 ) /*0x5b5d8f*/
    SendMessageA(v14, 0xF1u, stru_A8B250.__pad_0[17] == 1, 0); /*0x5b5da7*/
  v15 = GetDlgItem(*(HWND *)this->__pad_0, 1357); /*0x5b5db1*/
  if ( v15 ) /*0x5b5db5*/
    SendMessageA(v15, 0xF1u, byte_A8B31F == 1, 0); /*0x5b5dcd*/
  v16 = GetDlgItem(*(HWND *)this->__pad_0, 1572); /*0x5b5dd7*/
  if ( v16 ) /*0x5b5ddb*/
    SendMessageA(v16, 0xF1u, stru_A8B250.__pad_0[16] == 1, 0); /*0x5b5df3*/
  v17 = GetDlgItem(*(HWND *)this->__pad_0, 1430); /*0x5b5dfd*/
  if ( v17 ) /*0x5b5e01*/
    SendMessageA(v17, 0xF1u, byte_A8B31D == 1, 0); /*0x5b5e19*/
  v18 = GetDlgItem(*(HWND *)this->__pad_0, 1448); /*0x5b5e23*/
  if ( v18 ) /*0x5b5e27*/
    SendMessageA(v18, 0x4B2u, 0, (LPARAM)&MEMORY[0xA8B322]); /*0x5b5e36*/
  if ( !g_UIControlState || !*(_DWORD *)g_UIControlState ) /*0x5b5e41*/
    Session::PrepareGame(*(Session **)this->__pad_0); /*0x5b5e48*/
  v19 = GetDlgItem(*(HWND *)this->__pad_0, 1); /*0x5b5e51*/
  if ( v19 ) /*0x5b5e55*/
    EnableWindow(v19, 1); /*0x5b5e59*/
  return PlayVocClass(*(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 1716), 0x2000, 1.0, 0); /*0x5b5e7c*/
}



// ==== 0x005B5E90  Network::SendSettingsRequest  this=Network  sig=csp ====
int __thiscall Network::SendSettingsRequest(Network *this)
{
  HWND DlgItem; // eax
  int v3[62]; // [esp+0h] [ebp-FCh] BYREF
  __int16 v4; // [esp+F8h] [ebp-4h]

  DlgItem = GetDlgItem((HWND)this->Network_field_0x0, 1); /*0x5b5e9b*/
  if ( DlgItem ) /*0x5b5ea3*/
    EnableWindow(DlgItem, 0); /*0x5b5ea8*/
  memset(v3, 0, sizeof(v3)); /*0x5b5eba*/
  v4 = 0; /*0x5b5ec8*/
  v3[0] = 116; /*0x5b5ecf*/
  return Stream::WriteBlock((int *)&unk_A8EA70, (int)v3, 250, 1); /*0x5b5edd*/
}



// ==== 0x005B5EF0  CellClass::LockSurface  this=ModemGuest  sig=csp ====
int __thiscall CellClass::LockSurface(int this, char a2)
{
  int v3; // edi
  int v4; // edi
  int result; // eax
  int v6; // edi
  int v7; // edi
  int v8[62]; // [esp+Ch] [ebp-FCh] BYREF
  __int16 v9; // [esp+104h] [ebp-4h]

  Stream::ReadPacket((int)&unk_A8EA70); /*0x5b5f00*/
  if ( *(_BYTE *)(this + 9) == 1 ) /*0x5b5f0d*/
  {
    v3 = *(_DWORD *)&stru_88732C.__pad_6[14]; /*0x5b5f14*/
    if ( *(_DWORD *)&stru_88732C.__pad_6[6] != -1 ) /*0x5b5f1c*/
      v3 += Timer::GetTicks() - *(_DWORD *)&stru_88732C.__pad_6[6]; /*0x5b5f2e*/
    if ( (unsigned int)(v3 - *(_DWORD *)(this + 12)) > 0x1E ) /*0x5b5f36*/
      goto LABEL_6; /*0x5b5f36*/
  }
  if ( a2 == 1 ) /*0x5b5f40*/
  {
LABEL_6:
    Surface_Lock((ObjectClass *)this); /*0x5b5f44*/
    v4 = *(_DWORD *)&stru_88732C.__pad_6[14]; /*0x5b5f4e*/
    if ( *(_DWORD *)&stru_88732C.__pad_6[6] != -1 ) /*0x5b5f56*/
      v4 += Timer::GetTicks() - *(_DWORD *)&stru_88732C.__pad_6[6]; /*0x5b5f68*/
    *(_DWORD *)(this + 12) = v4; /*0x5b5f6a*/
    *(_BYTE *)(this + 9) = 0; /*0x5b5f6d*/
  }
  result = *(_DWORD *)&stru_88732C.__pad_6[6]; /*0x5b5f71*/
  v6 = *(_DWORD *)&stru_88732C.__pad_6[14]; /*0x5b5f76*/
  if ( *(_DWORD *)&stru_88732C.__pad_6[6] != -1 ) /*0x5b5f7e*/
  {
    result = Timer::GetTicks() - *(_DWORD *)&stru_88732C.__pad_6[6]; /*0x5b5f8a*/
    v6 += result; /*0x5b5f90*/
  }
  if ( (unsigned int)(v6 - *(_DWORD *)(this + 28)) > 0x28 ) /*0x5b5f98*/
  {
    memset(v8, 0, sizeof(v8)); /*0x5b5fa5*/
    v9 = 0; /*0x5b5fa7*/
    v8[0] = 105; /*0x5b5fae*/
    *(int *)((char *)&v8[38] + 2) = CellClass::GetBridgeIndexThunk((NullModemClass *)&unk_A8EA70); /*0x5b5fc1*/
    LOBYTE(v8[6]) = dword_A8DB30; /*0x5b5fd8*/
    Stream::WriteBlock((int *)&unk_A8EA70, (int)v8, 250, 0); /*0x5b5fdc*/
    result = *(_DWORD *)&stru_88732C.__pad_6[6]; /*0x5b5fe1*/
    v7 = *(_DWORD *)&stru_88732C.__pad_6[14]; /*0x5b5fe6*/
    if ( *(_DWORD *)&stru_88732C.__pad_6[6] != -1 ) /*0x5b5fee*/
    {
      result = Timer::GetTicks() - *(_DWORD *)&stru_88732C.__pad_6[6]; /*0x5b5ffa*/
      v7 += result; /*0x5b6000*/
    }
    *(_DWORD *)(this + 28) = v7; /*0x5b6002*/
  }
  return result; /*0x5b6005*/
}



// ==== 0x005B6020  ModemGame::ProcessPacket  this=ModemGame  sig=csp ====
char __thiscall ModemGame::ProcessPacket(ModemGame *this)
{
  int v2; // esi
  int v3; // eax
  int *v4; // eax
  char result; // al
  int v6; // edi
  int v7; // esi
  int *v8; // eax
  int v9; // esi
  unsigned int updated; // eax
  bool v11; // cl
  char *v12; // eax
  int v13; // ecx
  int v14; // esi
  int v15; // esi
  unsigned int v16; // ecx
  int v17; // esi
  int *v18; // eax
  char *v19; // ebp
  int v20; // esi
  HWND DlgItem; // edi
  int (__usercall *v22)@<eax>(char@<cf>, char@<zf>); // esi
  int v23; // esi
  int v24; // esi
  int *v25; // [esp-14h] [ebp-434h]
  int *v26; // [esp-14h] [ebp-434h]
  int *v27; // [esp-14h] [ebp-434h]
  int *v28; // [esp-14h] [ebp-434h]
  wchar_t *v29; // [esp-10h] [ebp-430h]
  wchar_t *v30; // [esp-10h] [ebp-430h]
  wchar_t *v31; // [esp-10h] [ebp-430h]
  wchar_t *v32; // [esp-10h] [ebp-430h]
  wchar_t *v33; // [esp-10h] [ebp-430h]
  wchar_t *v34; // [esp-10h] [ebp-430h]
  wchar_t *StringCSF; // [esp-10h] [ebp-430h]
  int v36; // [esp+0h] [ebp-420h] BYREF
  const wchar_t *v37; // [esp+10h] [ebp-410h]
  const wchar_t *v38; // [esp+14h] [ebp-40Ch]
  const wchar_t *v39; // [esp+18h] [ebp-408h]
  const wchar_t *v40; // [esp+1Ch] [ebp-404h]
  const wchar_t *v41; // [esp+20h] [ebp-400h]
  int v42; // [esp+24h] [ebp-3FCh] BYREF
  int v43; // [esp+28h] [ebp-3F8h] BYREF
  _BYTE v44[20]; // [esp+2Ch] [ebp-3F4h] BYREF
  _BYTE v45[6]; // [esp+40h] [ebp-3E0h] BYREF
  unsigned int v46; // [esp+46h] [ebp-3DAh]
  unsigned int v47; // [esp+4Ah] [ebp-3D6h]
  int v48; // [esp+AEh] [ebp-372h]
  unsigned int v49; // [esp+C2h] [ebp-35Eh]
  int v50; // [esp+F8h] [ebp-328h]
  int v51; // [esp+FCh] [ebp-324h]
  int v52[62]; // [esp+124h] [ebp-2FCh] BYREF
  __int16 v53; // [esp+21Ch] [ebp-204h]
  wchar_t Buffer[256]; // [esp+220h] [ebp-200h] BYREF

  Stream::ReadPacket((int)&unk_A8EA70); /*0x5b6031*/
  if ( ObjectTypeClass::CreateInstance(&unk_A8EA70, (int)&v43, (int)&v42) <= 0 ) /*0x5b604c*/
  {
LABEL_51:
    v17 = *(_DWORD *)&stru_88732C.__pad_6[14]; /*0x5b65d6*/
    if ( *(_DWORD *)&stru_88732C.__pad_6[6] != -1 ) /*0x5b65e3*/
      v17 += Timer::GetTicks() - *(_DWORD *)&stru_88732C.__pad_6[6]; /*0x5b65f5*/
    if ( (unsigned int)(v17 - *((_DWORD *)this + 5)) <= *((_DWORD *)this + 6) ) /*0x5b6601*/
    {
      return 0; /*0x5b67af*/
    }
    else
    {
      Debug::Log(); /*0x5b660d*/
      v37 = asc_82083C; /*0x5b661c*/
      StringCSF = GetStringCSF(g_Str_TXT_OK, 0, (const char *)&stru_82BA00.?[40], 1391); /*0x5b6639*/
      v18 = (int *)GetStringCSF((wchar_t *)&stru_82BA00.?, 0, (const char *)&stru_82BA00.?[40], 1391); /*0x5b664b*/
      Dialog::ShowMessageBox(v18, StringCSF, 0, 0, 0, v36); /*0x5b6655*/
      return 1; /*0x5b665d*/
    }
  }
  else
  {
    v2 = *(_DWORD *)&stru_88732C.__pad_6[14]; /*0x5b6057*/
    if ( *(_DWORD *)&stru_88732C.__pad_6[6] != -1 ) /*0x5b6062*/
      v2 += Timer::GetTicks() - *(_DWORD *)&stru_88732C.__pad_6[6]; /*0x5b6074*/
    v3 = v43; /*0x5b6076*/
    *((_DWORD *)this + 5) = v2; /*0x5b607a*/
    *((_DWORD *)this + 6) = 1200; /*0x5b6080*/
    if ( v3 >= 100 && v3 < 109 && v3 != 104 && v45[0] == dword_A8DB30 ) /*0x5b60a5*/
    {
      Debug::Log(); /*0x5b60ac*/
      v38 = asc_82083C; /*0x5b60bb*/
      v29 = GetStringCSF(g_Str_TXT_OK, 0, (const char *)&stru_82BA00.?[40], 1177); /*0x5b60d8*/
      v4 = (int *)GetStringCSF((wchar_t *)&stru_82BA00.?, 0, (const char *)&stru_82BA00.?[40], 1177); /*0x5b60ea*/
      Dialog::ShowMessageBox(v4, v29, 0, 0, 0, v36); /*0x5b60f4*/
      return 1; /*0x5b6105*/
    }
    switch ( v3 ) /*0x5b611a*/
    {
      case 'e': /*0x5b611a*/
        Debug::Log(); /*0x5b6208*/
        updated = NetworkBuffer::UpdateWindow((NetworkBuffer *)&stru_A8EB00.?[252], v46, v47); /*0x5b621f*/
        if ( !updated ) /*0x5b6226*/
        {
          v41 = asc_82083C; /*0x5b623c*/
          v31 = GetStringCSF(g_Str_TXT_OK, 0, (const char *)&stru_82BA00.?[40], 1209); /*0x5b6249*/
          v25 = (int *)GetStringCSF((wchar_t *)stru_82BA00.?, 0, (const char *)&stru_82BA00.?[40], 1209); /*0x5b6260*/
          Dialog::ShowMessageBox(v25, v31, 0, 0, 0, v36); /*0x5b6265*/
          goto LABEL_35; /*0x5b6265*/
        }
        if ( updated == -1 ) /*0x5b626c*/
        {
          v40 = asc_82083C; /*0x5b6285*/
          v32 = GetStringCSF(g_Str_TXT_OK, 0, (const char *)&stru_82BA00.?[40], 1215); /*0x5b6292*/
          v26 = (int *)GetStringCSF((wchar_t *)stru_82BA00.?, 0, (const char *)&stru_82BA00.?[40], 1215); /*0x5b62a9*/
          Dialog::ShowMessageBox(v26, v32, 0, 0, 0, v36); /*0x5b62ae*/
          goto LABEL_35; /*0x5b62ae*/
        }
        v11 = v48 == *((_DWORD *)this + 20); /*0x5b62c3*/
        if ( v50 != *((_DWORD *)this + 22) ) /*0x5b62d1*/
          v11 = 0; /*0x5b62d3*/
        if ( v51 != *((_DWORD *)this + 21) || !v11 ) /*0x5b62e5*/
        {
          v39 = asc_82083C; /*0x5b62fe*/
          v33 = GetStringCSF(g_Str_TXT_OK, 0, (const char *)&stru_82BA00.?[40], 1262); /*0x5b630b*/
          v27 = (int *)GetStringCSF((wchar_t *)&stru_82BA00.?, 0, (const char *)&stru_82BA00.?[40], 1262); /*0x5b6322*/
          Dialog::ShowMessageBox(v27, v33, 0, 0, 0, v36); /*0x5b6327*/
          goto LABEL_35; /*0x5b6327*/
        }
        dword_A8B24C = Network::GetMaxPacketSize(updated); /*0x5b633b*/
        v12 = CharToWideString(v44); /*0x5b6340*/
        ModemGame::UpdatePlayerNameAndColor(this, (wchar_t *)v12, v45[5], *(int *)&v45[1]); /*0x5b6353*/
        if ( ApplyGameOptions((int)&v43) == 1 ) /*0x5b6366*/
          Dialog::InitializeGameSettings((Dialog *)this); /*0x5b636e*/
        goto LABEL_51; /*0x5b6373*/
      case 'f': /*0x5b611a*/
        Debug::Log(); /*0x5b6126*/
        v6 = *(_DWORD *)&stru_88732C.__pad_6[14]; /*0x5b6130*/
        if ( *(_DWORD *)&stru_88732C.__pad_6[6] != -1 ) /*0x5b613b*/
          v6 += Timer::GetTicks() - *(_DWORD *)&stru_88732C.__pad_6[6]; /*0x5b614d*/
        while ( 1 ) /*0x5b6154*/
        {
          v7 = *(_DWORD *)&stru_88732C.__pad_6[14]; /*0x5b6154*/
          if ( *(_DWORD *)&stru_88732C.__pad_6[6] != -1 ) /*0x5b615c*/
            v7 += Timer::GetTicks() - *(_DWORD *)&stru_88732C.__pad_6[6]; /*0x5b616e*/
          if ( (unsigned int)(v7 - v6) >= 0x3C ) /*0x5b6175*/
            break; /*0x5b6175*/
          Event::Dispatch(); /*0x5b6177*/
          Stream::ReadPacket((int)&unk_A8EA70); /*0x5b6181*/
        }
        v38 = asc_82083C; /*0x5b619f*/
        v30 = GetStringCSF(g_Str_TXT_OK, 0, (const char *)&stru_82BA00.?[40], 1193); /*0x5b61ac*/
        v8 = (int *)GetStringCSF((wchar_t *)stru_82BA00.?, 0, (const char *)&stru_82BA00.?[40], 1193); /*0x5b61be*/
        Dialog::ShowMessageBox(v8, v30, 0, 0, 0, v36); /*0x5b61c8*/
        v9 = *(_DWORD *)&stru_88732C.__pad_6[14]; /*0x5b61d2*/
        if ( *(_DWORD *)&stru_88732C.__pad_6[6] != -1 ) /*0x5b61da*/
          v9 += Timer::GetTicks() - *(_DWORD *)&stru_88732C.__pad_6[6]; /*0x5b61ec*/
        *((_DWORD *)this + 5) = v9; /*0x5b61ee*/
        Network::CleanupOnDisconnect(); /*0x5b61f1*/
        return 1; /*0x5b6202*/
      case 'g': /*0x5b611a*/
      case 'k': /*0x5b611a*/
        Debug::Log(); /*0x5b637d*/
        LOBYTE(v13) = dword_A8BB08; /*0x5b6382*/
        if ( FindAndValidateMap(byte_A8B8E0, dword_A8BB04, &byte_A8BAE2, v13, 1) == 1 ) /*0x5b63a5*/
        {
          memset(v52, 0, sizeof(v52)); /*0x5b63b7*/
          v53 = 0; /*0x5b63c5*/
          v52[0] = 114; /*0x5b63cd*/
          Stream::WriteBlock((int *)&unk_A8EA70, (int)v52, 250, 1); /*0x5b63d8*/
LABEL_43:
          strcpy((char *)&dword_A8B230[130].abstractFlags, byte_A8B8E0); /*0x5b650e*/
          dword_A8B554 = 5; /*0x5b654d*/
          dword_A8DB9C = 0; /*0x5b6553*/
          dword_A8B56C = 0; /*0x5b6559*/
          dword_A8B570 = 0; /*0x5b655f*/
          if ( dword_A8B24C == 2 ) /*0x5b6565*/
          {
            v16 = (v49 >> 3) + 4; /*0x5b6576*/
            if ( 5 * (v16 / 5) <= 0xA ) /*0x5b6584*/
              dword_A8B550 = (wchar_t *)10; /*0x5b658d*/
            else
              dword_A8B550 = (wchar_t *)(5 * (v16 / 5)); /*0x5b6586*/
          }
          else
          {
            dword_A8B550 = (wchar_t *)(v49 >> 3); /*0x5b65a5*/
            if ( v49 >> 3 <= 5 ) /*0x5b65aa*/
              dword_A8B550 = (wchar_t *)5; /*0x5b65ac*/
          }
          if ( Game::StartModemMultiplayer((int)this, v43 == 107) == 1 ) /*0x5b65c6*/
            this->ModemGame_field_0x04 = 1; /*0x5b65cc*/
          else
            this->ModemGame_field_0x04 = 2; /*0x5b6667*/
          goto LABEL_51; /*0x5b65cc*/
        }
        if ( !dword_A8BB08 || !_strcmpi(byte_A8B8E0, &stru_82BA00.?) ) /*0x5b63fb*/
        {
          if ( !RequestNetworkFile(byte_A8B8E0, 1, 0) ) /*0x5b64d3*/
            return 1; /*0x5b64e8*/
          v15 = *(_DWORD *)&stru_88732C.__pad_6[14]; /*0x5b64ee*/
          if ( *(_DWORD *)&stru_88732C.__pad_6[6] != -1 ) /*0x5b64f7*/
            v15 += Timer::GetTicks() - *(_DWORD *)&stru_88732C.__pad_6[6]; /*0x5b6509*/
          *((_DWORD *)this + 5) = v15; /*0x5b650b*/
          goto LABEL_43; /*0x5b650b*/
        }
        memset(v52, 0, sizeof(v52)); /*0x5b641b*/
        v53 = 0; /*0x5b641d*/
        v52[0] = 115; /*0x5b6431*/
        Stream::WriteBlock((int *)&unk_A8EA70, (int)v52, 250, 1); /*0x5b643c*/
        Event::Dispatch(); /*0x5b6441*/
        Stream::ReadPacket((int)&unk_A8EA70); /*0x5b644b*/
        v37 = asc_82083C; /*0x5b6467*/
        v34 = GetStringCSF(g_Str_TXT_OK, 0, (const char *)&stru_82BA00.?[40], 1308); /*0x5b6474*/
        v28 = (int *)GetStringCSF((wchar_t *)&stru_82BA00.?[2], 0, (const char *)&stru_82BA00.?[40], 1308); /*0x5b648b*/
        Dialog::ShowMessageBox(v28, v34, 0, 0, 0, v36); /*0x5b6490*/
LABEL_35:
        v14 = *(_DWORD *)&stru_88732C.__pad_6[14]; /*0x5b6495*/
        if ( *(_DWORD *)&stru_88732C.__pad_6[6] != -1 ) /*0x5b64a2*/
          v14 += Timer::GetTicks() - *(_DWORD *)&stru_88732C.__pad_6[6]; /*0x5b64b4*/
        *((_DWORD *)this + 5) = v14; /*0x5b64b6*/
        result = 1; /*0x5b64bc*/
        break; /*0x5b64c5*/
      case 'h': /*0x5b611a*/
        Debug::Log(); /*0x5b6674*/
        v19 = CharToWideString(v44); /*0x5b6689*/
        v20 = v45[0]; /*0x5b668f*/
        if ( &v36 != (int *)-65 ) /*0x5b6697*/
        {
          DlgItem = GetDlgItem(*(HWND *)this->__pad_0, 1343); /*0x5b66a7*/
          if ( DlgItem ) /*0x5b66ab*/
          {
            if ( v20 >= 8 ) /*0x5b66b4*/
              v22 = Math::InitDegToRad; /*0x5b66bf*/
            else
              v22 = (int (__usercall *)@<eax>(char@<cf>, char@<zf>))dword_8316A8[v20]; /*0x5b66b6*/
            swprintf(Buffer, (const size_t)g_Str_Trace___s_, (const wchar_t *const)v19, &v45[1]); /*0x5b66d8*/
            DrawDialogText((LPARAM)v22, Buffer, DlgItem); /*0x5b66ea*/
          }
        }
        PlayVocClass(*(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 1708), 0x2000, 1.0, 0); /*0x5b6707*/
        goto LABEL_51; /*0x5b670c*/
      case 'j': /*0x5b611a*/
        Debug::Log(); /*0x5b6728*/
        BYTE1(this->ModemGame_field_0x08) = 1; /*0x5b672d*/
        v23 = *(_DWORD *)&stru_88732C.__pad_6[14]; /*0x5b6736*/
        if ( *(_DWORD *)&stru_88732C.__pad_6[6] != -1 ) /*0x5b6741*/
          v23 += Timer::GetTicks() - *(_DWORD *)&stru_88732C.__pad_6[6]; /*0x5b6753*/
        this->ModemGame_field_0x0C = v23; /*0x5b6755*/
        goto LABEL_51; /*0x5b6758*/
      case 'u': /*0x5b611a*/
        Debug::Log(); /*0x5b6762*/
        ModemGame::ReceiveMapPreview(this); /*0x5b676c*/
        v24 = *(_DWORD *)&stru_88732C.__pad_6[14]; /*0x5b6776*/
        if ( *(_DWORD *)&stru_88732C.__pad_6[6] != -1 ) /*0x5b677e*/
          v24 += Timer::GetTicks() - *(_DWORD *)&stru_88732C.__pad_6[6]; /*0x5b6790*/
        *((_DWORD *)this + 5) = v24; /*0x5b6792*/
        goto LABEL_51; /*0x5b6795*/
      default:
        Debug::Log(); /*0x5b6716*/
        goto LABEL_51; /*0x5b671e*/
    }
  }
  return result; /*0x5b60f9*/
}



// ==== 0x005B67F0  ApplyGameOptions  this=-  sig=csp ====
char __stdcall ApplyGameOptions(int a1)
{
  int v1; // esi
  int v2; // eax
  int v3; // eax
  int v5; // edx
  int v6; // eax
  int v7; // edx
  void *ptr_0; // ecx
  bool v9; // al
  int v10; // edi
  int v11; // esi
  Skirmish *v12; // esi
  ObjectClass *v13; // [esp+0h] [ebp-Ch]

  if ( stru_A8B250.__pad_0[8] == (*(_BYTE *)(a1 + 130) & 1) ) /*0x5b6807*/
  {
    v1 = *(_DWORD *)(a1 + 142); /*0x5b680d*/
    if ( dword_A8B320 == ((v1 & 4) != 0) && byte_A8B31D == ((v1 & 2) != 0) ) /*0x5b6836*/
    {
      v2 = *(_DWORD *)(a1 + 130); /*0x5b683c*/
      if ( stru_A8B250.__pad_0[16] == ((v2 & 2) != 0) /*0x5b6920*/
        && stru_A8B250.__pad_0[17] == ((v2 & 4) != 0)
        && byte_A8B31F == ((v1 & 8) != 0)
        && *(_DWORD *)&stru_A8B250.__pad_0[36] == *(unsigned __int8 *)(a1 + 140)
        && *(_DWORD *)&stru_A8B250.__pad_0[40] == *(unsigned __int8 *)(a1 + 141)
        && g_RulesInitConfig == *(unsigned __int8 *)(a1 + 138)
        && *(_DWORD *)&stru_A8B250.__pad_0[12] == *(_DWORD *)(a1 + 126)
        && *(_DWORD *)&stru_A8B250.__pad_0[32] == *(unsigned __int8 *)(a1 + 139)
        && *(_DWORD *)&stru_A8EB00.?[432] == *(_DWORD *)(a1 + 146)
        && ApplyGameOptions_Helper((ObjectClass *)dword_A8E960, (_DWORD *)(a1 + 150))
        && *(_DWORD *)&stru_A8B250.__pad_0[24] == *(unsigned __int8 *)(a1 + 162) )
      {
        v3 = *(_DWORD *)(a1 + 142); /*0x5b6926*/
        if ( stru_A8B250.__pad_0[18] == ((v3 & 0x10) != 0) /*0x5b69da*/
          && stru_A8B250.__pad_0[19] == ((v3 & 0x20) != 0)
          && stru_A8B250.__pad_0[20] == ((v3 & 0x40) != 0)
          && stru_A8B250.__pad_0[28] == ((v3 & 0x80) != 0)
          && !_strcmpi(byte_A8B8E0, (char *)(a1 + 163))
          && !strcmp(&byte_A8BAE2, (const char *)(a1 + 176))
          && dword_A8BB04 == *(_DWORD *)(a1 + 158) )
        {
          return 0; /*0x5b69de*/
        }
      }
    }
  }
  Debug::Log(); /*0x5b69e9*/
  stru_A8B250.__pad_0[8] = *(_BYTE *)(a1 + 130) & 1; /*0x5b69fa*/
  dword_A8B320 = (*(_DWORD *)(a1 + 142) & 4) != 0; /*0x5b6a0c*/
  v5 = dword_A8E960[0]; /*0x5b6a18*/
  BYTE1(v5) = BYTE1(dword_A8E960[0]) & 0x7F; /*0x5b6a22*/
  stru_A8B250.__pad_0[16] = (*(_DWORD *)(a1 + 130) & 2) != 0; /*0x5b6a25*/
  dword_A8E960[0] = v5 | ((*(_DWORD *)(a1 + 130) & 2) << 14); /*0x5b6a38*/
  stru_A8B250.__pad_0[17] = (*(_DWORD *)(a1 + 130) & 4) != 0; /*0x5b6a49*/
  byte_A8B31F = (*(_DWORD *)(a1 + 142) & 8) != 0; /*0x5b6a5c*/
  byte_A8B31D = (*(_DWORD *)(a1 + 142) & 2) != 0; /*0x5b6a6f*/
  *(_DWORD *)&stru_A8B250.__pad_0[36] = *(unsigned __int8 *)(a1 + 140); /*0x5b6a7b*/
  *(_DWORD *)&stru_A8B250.__pad_0[40] = *(unsigned __int8 *)(a1 + 141); /*0x5b6a88*/
  g_RulesInitConfig = *(unsigned __int8 *)(a1 + 138); /*0x5b6a96*/
  *(_DWORD *)&stru_A8B250.__pad_0[12] = *(_DWORD *)(a1 + 126); /*0x5b6a9f*/
  *(_DWORD *)&stru_A8B250.__pad_0[32] = *(unsigned __int8 *)(a1 + 139); /*0x5b6aaa*/
  *(_DWORD *)&stru_A8EB00.?[432] = *(_DWORD *)(a1 + 146); /*0x5b6ab6*/
  v6 = *(_DWORD *)(a1 + 150); /*0x5b6abc*/
  dword_A8E960[0] = v6; /*0x5b6ac4*/
  LOBYTE(v6) = v6 | 0xC0; /*0x5b6acf*/
  *(_DWORD *)&stru_A8B250.__pad_0[24] = *(unsigned __int8 *)(a1 + 162); /*0x5b6ad1*/
  stru_A8EB00.ObjectTypeClass[24] = *(_DWORD *)&stru_A8B250.__pad_0[24]; /*0x5b6ad7*/
  stru_A8B250.__pad_0[18] = (*(_DWORD *)(a1 + 142) & 0x10) != 0; /*0x5b6ae9*/
  stru_A8B250.__pad_0[19] = (*(_DWORD *)(a1 + 142) & 0x20) != 0; /*0x5b6afb*/
  stru_A8B250.__pad_0[20] = (*(_DWORD *)(a1 + 142) & 0x40) != 0; /*0x5b6b0d*/
  v7 = *(_DWORD *)(a1 + 142) >> 7; /*0x5b6b19*/
  dword_A8E960[0] = v6; /*0x5b6b1c*/
  stru_A8B250.__pad_0[28] = v7 & 1; /*0x5b6b29*/
  ptr_0 = dword_A8B230->ptr_0; /*0x5b6b2f*/
  BYTE1(ptr_0) = ((unsigned __int16)dword_A8B230->ptr_0 >> 8) & 0xFB; /*0x5b6b31*/
  dword_A8B230->ptr_0 = ptr_0; /*0x5b6b34*/
  byte_A8B31C = 1; /*0x5b6b3b*/
  nullsub_37(v13); /*0x5b6b42*/
  if ( _strcmpi(byte_A8B8E0, (char *)(a1 + 163)) /*0x5b6ba4*/
    || _strcmpi(&byte_A8BAE2, (char *)(a1 + 176))
    || dword_A8BB08 != ((*(_DWORD *)(a1 + 130) & 0x10) != 0)
    || dword_A8BB04 != *(_DWORD *)(a1 + 158)
    || !MEMORY[0xA8B322][0] )
  {
    Debug::Log(); /*0x5b6baf*/
    strcpy(byte_A8B8E0, (const char *)(a1 + 163)); /*0x5b6bce*/
    strcpy(&byte_A8BAE2, (const char *)(a1 + 176)); /*0x5b6bf4*/
    v9 = (*(_DWORD *)(a1 + 130) & 0x10) != 0; /*0x5b6c0b*/
    dword_A8BB08 = v9; /*0x5b6c12*/
    dword_A8BB04 = *(_DWORD *)(a1 + 158); /*0x5b6c1d*/
    if ( !strcmp(byte_A8B8E0, &stru_82BA00.?) && v9 || (v10 = 0, dword_A8B8D8 <= 0) ) /*0x5b6c5d*/
    {
LABEL_33:
      wcscpy(MEMORY[0xA8B322], (const wchar_t *)(a1 + 38)); /*0x5b6c86*/
    }
    else
    {
      while ( 1 ) /*0x5b6c64*/
      {
        v11 = *(_DWORD *)(dword_A8B8CC + 4 * v10); /*0x5b6c64*/
        if ( !_strcmpi(byte_A8B8E0, (char *)(v11 + 88)) ) /*0x5b6c70*/
          break; /*0x5b6c70*/
        if ( ++v10 >= dword_A8B8D8 ) /*0x5b6c84*/
          goto LABEL_33; /*0x5b6c84*/
      }
      wcscpy(MEMORY[0xA8B322], (const wchar_t *)v11); /*0x5b6cc4*/
    }
    v12 = g_UIControlState; /*0x5b6c94*/
    if ( g_UIControlState ) /*0x5b6c9f*/
    {
      ComPtr::Dtor((ComPtr *)g_UIControlState); /*0x5b6ca3*/
      __3_YAXPAX_Z(v12); /*0x5b6ca9*/
      g_UIControlState = 0; /*0x5b6cb1*/
    }
  }
  return 1; /*0x5b69dc*/
}



// ==== 0x005B6CD0  ObjectClass::Surface_Lock  this=ObjectClass  sig=csp ====
int __thiscall Surface_Lock(ObjectClass *this)
{
  int v2; // ecx
  int v3; // eax
  int v4; // edx
  char v5; // dl
  int v7[62]; // [esp+8h] [ebp-FCh] BYREF
  __int16 v8; // [esp+100h] [ebp-4h]

  memset(v7, 0, sizeof(v7)); /*0x5b6ce5*/
  v2 = this->customSound_controller[1]; /*0x5b6ce7*/
  v8 = 0; /*0x5b6cea*/
  v3 = this->customSound_controller[0]; /*0x5b6cec*/
  v4 = this->customSound_controller[2]; /*0x5b6cef*/
  v7[0] = 101; /*0x5b6cf2*/
  *(int *)((char *)&v7[33] + 2) = v3; /*0x5b6cfa*/
  v7[53] = v2; /*0x5b6d01*/
  v7[52] = v4; /*0x5b6d08*/
  v7[54] = GameOptions::GetEntry(); /*0x5b6d19*/
  *(int *)((char *)&v7[7] + 2) = NetworkBuffer::GetField2(); /*0x5b6d2a*/
  *(int *)((char *)&v7[8] + 2) = NetworkBuffer::GetField3(); /*0x5b6d33*/
  LOBYTE(v7[6]) = dword_A8DB30; /*0x5b6d3c*/
  v5 = dword_A8B394; /*0x5b6d5a*/
  strcpy((char *)&v7[1], unk_A8B380); /*0x5b6d63*/
  *(int *)((char *)&v7[6] + 1) = dword_A8B3AC; /*0x5b6d7d*/
  BYTE1(v7[7]) = v5; /*0x5b6d87*/
  return Stream::WriteBlock((int *)&unk_A8EA70, (int)v7, 250, 1); /*0x5b6d90*/
}



// ==== 0x005B6DA0  ObjectClass::method_5B6DA0  this=ObjectClass  sig=csp ====
void __thiscall sub_5B6DA0(ObjectClass *this, wchar_t *Source)
{
  char *v3; // eax
  unsigned int v4; // edi
  HWND DlgItem; // esi
  int (__usercall *v6)@<eax>(char@<cf>, char@<zf>); // edi
  wchar_t *Format; // [esp+10h] [ebp-300h]
  int v8[62]; // [esp+14h] [ebp-2FCh] BYREF
  __int16 v9; // [esp+10Ch] [ebp-204h]
  wchar_t Buffer[256]; // [esp+110h] [ebp-200h] BYREF

  if ( Source ) /*0x5b6db5*/
  {
    memset(v8, 0, sizeof(v8)); /*0x5b6dca*/
    v9 = 0; /*0x5b6dcc*/
    v8[0] = 104; /*0x5b6dd8*/
    strcpy((char *)&v8[1], unk_A8B380); /*0x5b6df4*/
    LOBYTE(v8[6]) = dword_A8B394; /*0x5b6e04*/
    wcscpy((wchar_t *)((char *)&v8[6] + 1), Source); /*0x5b6e08*/
    Stream::WriteBlock((int *)&unk_A8EA70, (int)v8, 250, 1); /*0x5b6e21*/
    Stream::ReadPacket((int)&unk_A8EA70); /*0x5b6e2b*/
    v3 = CharToWideString(unk_A8B380); /*0x5b6e35*/
    v4 = dword_A8B394; /*0x5b6e3d*/
    Format = (wchar_t *)v3; /*0x5b6e49*/
    DlgItem = GetDlgItem((HWND)this->AbstractClass, 1343); /*0x5b6e53*/
    if ( DlgItem ) /*0x5b6e57*/
    {
      if ( v4 >= 8 ) /*0x5b6e5b*/
        v6 = Math::InitDegToRad; /*0x5b6e6b*/
      else
        v6 = (int (__usercall *)@<eax>(char@<cf>, char@<zf>))dword_8316A8[v4]; /*0x5b6e62*/
      swprintf(Buffer, (const size_t)g_Str_Trace___s_, Format, Source); /*0x5b6e84*/
      DrawDialogText((LPARAM)v6, Buffer, DlgItem); /*0x5b6e96*/
    }
  }
}



// ==== 0x005B6EB0  ObjectClass::UI_Setup  this=ObjectClass  sig=csp ====
void __thiscall UI_Setup(ObjectClass *this, wchar_t *Format, unsigned int a3, int a4)
{
  HWND DlgItem; // edi
  int (__usercall *v5)@<eax>(char@<cf>, char@<zf>); // esi
  wchar_t Buffer[256]; // [esp+8h] [ebp-200h] BYREF

  if ( a4 ) /*0x5b6ec1*/
  {
    DlgItem = GetDlgItem((HWND)this->AbstractClass, 1343); /*0x5b6ed1*/
    if ( DlgItem ) /*0x5b6ed5*/
    {
      if ( a3 >= 8 ) /*0x5b6ee1*/
        v5 = Math::InitDegToRad; /*0x5b6ef1*/
      else
        v5 = (int (__usercall *)@<eax>(char@<cf>, char@<zf>))dword_8316A8[a3]; /*0x5b6ee8*/
      swprintf(Buffer, (const size_t)g_Str_Trace___s_, Format, a4); /*0x5b6f0a*/
      DrawDialogText((LPARAM)v5, Buffer, DlgItem); /*0x5b6f19*/
    }
  }
}



// ==== 0x005B6F30  ReadEventINI  this=ModemGuest  sig=ida-proto ====
HWND sub_5B6F30()
{
  wchar_t *StringCSF; // eax
  HWND MessageBox; // eax
  HWND v2; // ebx
  int v3; // edi
  int v4; // esi
  HWND result; // eax
  _BYTE v6[4]; // [esp+8h] [ebp-1FCh] BYREF
  _DWORD v7[62]; // [esp+Ch] [ebp-1F8h] BYREF
  __int16 v8; // [esp+104h] [ebp-100h]
  _DWORD v9[6]; // [esp+108h] [ebp-FCh] BYREF
  int v10; // [esp+120h] [ebp-E4h]

  memset(v7, 0, sizeof(v7)); /*0x5b6f45*/
  v8 = 0; /*0x5b6f51*/
  LOBYTE(v7[6]) = dword_A8DB30; /*0x5b6f58*/
  v7[0] = 102; /*0x5b6f67*/
  BYTE1(v7[7]) = dword_A8B394; /*0x5b6f6f*/
  Stream::WriteBlock((int)&unk_A8EA70, (int)v7, 250, 1); /*0x5b6f73*/
  StringCSF = GetStringCSF(aTxtSigningOff, 0, aDRa2mdpostMode, 1683); /*0x5b6f8b*/
  MessageBox = CreateMessageBox((LPARAM)StringCSF, 0, 0); /*0x5b6f94*/
  v2 = MessageBox; /*0x5b6f99*/
  if ( MessageBox ) /*0x5b6f9d*/
    Dialog::Show(MessageBox); /*0x5b6fa1*/
  v3 = dword_887340; /*0x5b6fab*/
  if ( dword_887338 != -1 ) /*0x5b6fb4*/
    v3 += Timer::GetTicks() - dword_887338; /*0x5b6fc6*/
  while ( Count::GetCountQueue(&unk_A8EA70) ) /*0x5b6fcd*/
  {
    v4 = dword_887340; /*0x5b6fe0*/
    if ( dword_887338 != -1 ) /*0x5b6fe9*/
      v4 += Timer::GetTicks() - dword_887338; /*0x5b6ffb*/
    if ( (unsigned int)(v4 - v3) >= 0x12C /*0x5b7040*/
      || ObjectTypeClass::CreateInstance((int)&unk_A8EA70, (int)v9, (int)v6) > 0
      && v9[0] == 102
      && (unsigned __int8)v10 == dword_A8DB30 )
    {
      break; /*0x5b7040*/
    }
    Event::Dispatch(); /*0x5b7042*/
    MessageLoop(); /*0x5b7047*/
    Stream::ReadPacket((int)&unk_A8EA70); /*0x5b7051*/
  }
  result = (HWND)Network::CleanupOnDisconnect(); /*0x5b7069*/
  if ( v2 ) /*0x5b7070*/
    return Dialog::Destroy(v2); /*0x5b7074*/
  return result; /*0x5b7079*/
}



// ==== 0x005B7090  Game::StartModemMultiplayer  this=Game  sig=csp ====
char __userpurge Game::StartModemMultiplayer@<al>(int this@<ecx>, ObjectClass *a2@<ebp>, char a3)
{
  int v5; // eax
  int v6; // esi
  int v7; // eax
  int v8; // eax
  int v9; // esi
  int v10; // eax
  wchar_t *StringCSF; // eax
  Dialog *MessageBox; // eax
  Dialog *v13; // ebp
  int v14; // edi
  int v15; // esi
  int v16; // esi
  int v17; // ecx
  int v18; // edx

  if ( a3 == 1 ) /*0x5b709b*/
    return 0; /*0x5b709f*/
  Game::processStartup((Game *)this); /*0x5b70a7*/
  dword_A8B54C = 0; /*0x5b70b1*/
  v5 = __2_YAPAXI_Z(0x85u); /*0x5b70bb*/
  v6 = v5; /*0x5b70c0*/
  if ( v5 ) /*0x5b70ca*/
  {
    Waypoint::InitInvalid((Waypoint *)(v5 + 40)); /*0x5b70d3*/
    BulkCharToWide((_WORD *)v6, (unsigned __int8 *)unk_A8B380, -1); /*0x5b70e0*/
    *(_DWORD *)(v6 + 75) = dword_A8B3AC; /*0x5b70ea*/
    *(_DWORD *)(v6 + 83) = dword_A8B394; /*0x5b70f3*/
    *(_DWORD *)(v6 + 115) = -1; /*0x5b70f6*/
    if ( dword_A8DA84 < dword_A8DA7C /*0x5b7130*/
      || (byte_A8DA81 || !dword_A8DA7C)
      && dword_A8DA88 > 0
      && (*(unsigned __int8 (__thiscall **)(PtrVector *, int, _DWORD))(*(_DWORD *)&stru_A8DA74 + 8))(
           &stru_A8DA74,
           dword_A8DA7C + dword_A8DA88,
           0) )
    {
      v7 = dword_A8DA84++; /*0x5b713d*/
      dword_A8DA78[v7] = v6; /*0x5b714c*/
    }
    ++dword_A8B54C; /*0x5b714f*/
  }
  v8 = __2_YAPAXI_Z(0x85u); /*0x5b715a*/
  v9 = v8; /*0x5b715f*/
  if ( v8 ) /*0x5b7166*/
  {
    Waypoint::InitInvalid((Waypoint *)(v8 + 40)); /*0x5b716f*/
    wcscpy((wchar_t *)v9, (const wchar_t *)(this + 32)); /*0x5b7179*/
    *(_DWORD *)(v9 + 75) = *(_DWORD *)(this + 76); /*0x5b7184*/
    *(_DWORD *)(v9 + 83) = *(_DWORD *)(this + 72); /*0x5b718a*/
    *(_DWORD *)(v9 + 115) = -1; /*0x5b718d*/
    if ( dword_A8DA84 < dword_A8DA7C /*0x5b71c7*/
      || (byte_A8DA81 || !dword_A8DA7C)
      && dword_A8DA88 > 0
      && (*(unsigned __int8 (__thiscall **)(PtrVector *, int, _DWORD))(*(_DWORD *)&stru_A8DA74 + 8))(
           &stru_A8DA74,
           dword_A8DA7C + dword_A8DA88,
           0) )
    {
      v10 = dword_A8DA84++; /*0x5b71d4*/
      dword_A8DA78[v10] = v9; /*0x5b71e3*/
    }
    ++dword_A8B54C; /*0x5b71e6*/
  }
  if ( dword_A8B54C != 2 ) /*0x5b71f3*/
    return 0; /*0x5b71f7*/
  StringCSF = GetStringCSF((wchar_t *)&stru_82BA00.?[4], 0, (const char *)&stru_82BA00.?[40], 1779); /*0x5b7211*/
  MessageBox = (Dialog *)CreateMessageBox((LPARAM)StringCSF, 0, 0); /*0x5b721a*/
  v13 = MessageBox; /*0x5b721f*/
  if ( MessageBox ) /*0x5b7223*/
    Dialog::Show(MessageBox); /*0x5b7227*/
  v14 = *(_DWORD *)&stru_88732C.__pad_6[14]; /*0x5b7231*/
  if ( *(_DWORD *)&stru_88732C.__pad_6[6] != -1 ) /*0x5b7239*/
    v14 += Timer::GetTicks() - *(_DWORD *)&stru_88732C.__pad_6[6]; /*0x5b724b*/
  while ( 1 ) /*0x5b7252*/
  {
    if ( !Count::GetCountQueue((Count *)&unk_A8EA70) ) /*0x5b7252*/
      goto LABEL_31; /*0x5b7252*/
    v15 = *(_DWORD *)&stru_88732C.__pad_6[14]; /*0x5b7260*/
    if ( *(_DWORD *)&stru_88732C.__pad_6[6] != -1 ) /*0x5b7268*/
      v15 += Timer::GetTicks() - *(_DWORD *)&stru_88732C.__pad_6[6]; /*0x5b727a*/
    if ( (unsigned int)(v15 - v14) >= 0x708 ) /*0x5b7284*/
    {
LABEL_31:
      v16 = *(_DWORD *)&stru_88732C.__pad_6[14]; /*0x5b728b*/
      if ( *(_DWORD *)&stru_88732C.__pad_6[6] != -1 ) /*0x5b7293*/
        v16 += Timer::GetTicks() - *(_DWORD *)&stru_88732C.__pad_6[6]; /*0x5b72a5*/
      if ( (unsigned int)(v16 - v14) >= 0x3C ) /*0x5b72ac*/
        break; /*0x5b72ac*/
    }
    Event::Dispatch(); /*0x5b72ae*/
    MessageLoop(); /*0x5b72b3*/
    Stream::ReadPacket((int)&unk_A8EA70); /*0x5b72bd*/
  }
  if ( v13 ) /*0x5b72c6*/
    Dialog::Destroy(v13); /*0x5b72ca*/
  EventClass::CheckFlag((EventClass *)&unk_A8EA70); /*0x5b72d4*/
  BYTE2(stru_A8D600.Network_field_0xC) = 0; /*0x5b72e4*/
  dword_A8B230[130].ptr_C = *(void **)&stru_A8B250.__pad_0[4]; /*0x5b72eb*/
  dword_A8B54C = dword_A8DA84; /*0x5b730b*/
  v17 = dword_A8E960[0]; /*0x5b7311*/
  BYTE1(v17) = BYTE1(dword_A8E960[0]) & 0x77; /*0x5b7319*/
  v18 = v17 | ((byte_A8B31D & 1 | (16 * (stru_A8B250.__pad_0[16] & 1))) << 11); /*0x5b731f*/
  LOBYTE(v18) = LOBYTE(dword_A8E960[0]) | 0xC0; /*0x5b7326*/
  *(_DWORD *)&stru_A8EB00.?[416] = 0; /*0x5b7329*/
  dword_A8B24C = 2; /*0x5b7333*/
  dword_A8E960[0] = v18; /*0x5b733d*/
  nullsub_37(a2); /*0x5b7343*/
  return 1; /*0x5b709d*/
}



// ==== 0x005B7360  ModemGame::ReceiveMapPreview  this=ModemGame  sig=csp ====
void __thiscall ModemGame::ReceiveMapPreview(ModemGame *this)
{
  int v1; // esi
  int v2; // eax
  int FileSize; // esi
  char *v4; // edi
  signed int v5; // ebx
  char *v6; // esi
  Skirmish *v7; // ebx
  ObjectClass *v8; // eax
  Skirmish *v9; // eax
  int Ticks; // [esp+Ch] [ebp-280h]
  Straw v12; // [esp+1Ch] [ebp-270h] BYREF
  int v13; // [esp+24h] [ebp-268h]
  Buffer v14; // [esp+28h] [ebp-264h] BYREF
  Straw v15[5]; // [esp+68h] [ebp-224h] BYREF
  int v16[62]; // [esp+90h] [ebp-1FCh] BYREF
  __int16 v17; // [esp+188h] [ebp-104h]
  char v18[256]; // [esp+18Ch] [ebp-100h] BYREF

  Timer::GetTicks(); /*0x5b7371*/
  Debug::Log(); /*0x5b7385*/
  memset(v16, 0, sizeof(v16)); /*0x5b739d*/
  v17 = 0; /*0x5b739f*/
  v16[0] = 118; /*0x5b73a1*/
  Debug::Log(); /*0x5b73ac*/
  Stream::WriteBlock((int *)&unk_A8EA70, (int)v16, 250, 1); /*0x5b73c8*/
  Ticks = Timer::GetTicks(); /*0x5b73e8*/
  while ( Count::GetCountQueue((Count *)&unk_A8EA70) > 0 ) /*0x5b73f7*/
  {
    v1 = 600; /*0x5b7400*/
    if ( Ticks != -1 ) /*0x5b7406*/
    {
      v2 = Timer::GetTicks() - Ticks; /*0x5b7411*/
      if ( v2 >= 600 ) /*0x5b7417*/
        break; /*0x5b7417*/
      v1 = 600 - v2; /*0x5b7419*/
    }
    if ( !v1 ) /*0x5b741d*/
      break; /*0x5b741d*/
    Event::Dispatch(); /*0x5b741f*/
  }
  Debug::Log(); /*0x5b7432*/
  Debug::Log(); /*0x5b7441*/
  if ( RequestNetworkFile(v18, 1, 0) ) /*0x5b7456*/
  {
    Debug::Log(); /*0x5b747c*/
    RawFileClass::Construct((RawFileClass *)&v14.Buffer_field_1C, (int)v18); /*0x5b7490*/
    FileSize = CCFileClass::GetFileSize((RawFileClass *)&v14.Buffer_field_1C); /*0x5b749e*/
    v4 = (char *)__2_YAPAXI_Z(FileSize); /*0x5b74a9*/
    FileClass::Read((RawFileClass *)&v14.Buffer_field_1C, v4, FileSize); /*0x5b74b1*/
    v5 = *(_DWORD *)v4; /*0x5b74b6*/
    Debug::Log(); /*0x5b74bd*/
    v12.Straw_field_0x04 = 0; /*0x5b74c8*/
    v13 = 0; /*0x5b74cc*/
    Buffer::Init(&v14, (int)(v4 + 4), FileSize); /*0x5b74de*/
    v14.Buffer_field_0C = 0; /*0x5b74ee*/
    *(_DWORD *)v12.__pad_0 = &BufferStraw::`vftable'; /*0x5b74f2*/
    LZOStraw::Constructor((LZOStraw *)v15, 1, 0x2000); /*0x5b74fa*/
    Delegate::Set(v15, (int)&v12); /*0x5b7508*/
    v6 = (char *)__2_YAPAXI_Z(2 * v5); /*0x5b7519*/
    LCW::Decompress((LZOStraw *)v15, v6, v5); /*0x5b7521*/
    Debug::Log(); /*0x5b752b*/
    if ( g_UIControlState ) /*0x5b753a*/
    {
      v7 = g_UIControlState; /*0x5b753c*/
      ComPtr::Dtor((ComPtr *)g_UIControlState); /*0x5b7544*/
      __3_YAXPAX_Z(v7); /*0x5b754a*/
    }
    v8 = (ObjectClass *)__2_YAPAXI_Z(4u); /*0x5b7554*/
    if ( v8 ) /*0x5b755f*/
      v9 = (Skirmish *)unknown_libname_27(v8); /*0x5b7563*/
    else
      v9 = 0; /*0x5b756a*/
    g_UIControlState = v9; /*0x5b756f*/
    ModemGame::RenderPaletteImage((ModemGame *)v9, (int *)v6); /*0x5b7574*/
    InvalidateRect(*(HWND *)this->__pad_0, 0, 0); /*0x5b7582*/
    Debug::Log(); /*0x5b758d*/
    __3_YAXPAX_Z(v6); /*0x5b7593*/
    __3_YAXPAX_Z(v4); /*0x5b7599*/
    LZOStraw::Destructor((LZOStraw *)v15); /*0x5b75a5*/
    Vector::Clear((int)&v14); /*0x5b75ae*/
    Straw::Dtor(&v12); /*0x5b75b7*/
    RawFileClass::Dtor((RawFileClass *)&v14.Buffer_field_1C); /*0x5b75c0*/
  }
  else
  {
    Debug::Log(); /*0x5b7464*/
  }
}



// ==== 0x005B75D0  sub_5B75D0  this=-  sig=ida-proto ====
int sub_5B75D0()
{
  dword_ABF098 = 0; /*0x5b75d2*/
  dword_ABF09C = 0; /*0x5b75d7*/
  dword_ABF0A0 = 0; /*0x5b75dc*/
  dword_ABF0A4 = 0; /*0x5b75e1*/
  return 0; /*0x5b75e6*/
}



// ==== 0x005B75F0  sub_5B75F0  this=-  sig=ida-proto ====
void sub_5B75F0()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x5b75fc*/
  dbl_ABF0B0 = Math::Sqrt(v0 + v0); /*0x5b760e*/
}



// ==== 0x005B7620  sub_5B7620  this=-  sig=ida-proto ====
void sub_5B7620()
{
  dbl_ABF100 = dbl_ABF0B0 / 60.0; /*0x5b762c*/
}



// ==== 0x005B7640  sub_5B7640  this=-  sig=ida-proto ====
void sub_5B7640()
{
  dbl_ABF0E8 = 1.0 / dbl_ABF100; /*0x5b764c*/
}



// ==== 0x005B7660  sub_5B7660  this=-  sig=ida-proto ====
void sub_5B7660()
{
  dbl_ABF0E0 = 0.0174532925199433 * 45.0; /*0x5b766c*/
}



// ==== 0x005B7680  sub_5B7680  this=-  sig=ida-proto ====
void sub_5B7680()
{
  dbl_ABF0B8 = 0.0174532925199433 * 60.0; /*0x5b768c*/
}



// ==== 0x005B76A0  sub_5B76A0  this=-  sig=ida-proto ====
void sub_5B76A0()
{
  dbl_ABF090 = 0.0174532925199433 * 90.0; /*0x5b76ac*/
}



// ==== 0x005B76C0  sub_5B76C0  this=-  sig=ida-proto ====
__int64 sub_5B76C0()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_ABF090 - dbl_ABF0B8); /*0x5b76d2*/
  result = Math::RoundToInt(v0 * dbl_ABF0B0 * 0.5); /*0x5b76e6*/
  dword_ABF108 = result; /*0x5b76eb*/
  return result; /*0x5b76f0*/
}



// ==== 0x005B7700  sub_5B7700  this=-  sig=ida-proto ====
void sub_5B7700()
{
  dbl_ABF0C0 = Math::ArcTan((double)dword_ABF108 * 0.00390625); /*0x5b7717*/
}



// ==== 0x005B7730  sub_5B7730  this=-  sig=ida-proto ====
void sub_5B7730()
{
  dbl_ABF0D8 = Math::ArcTan((double)(2 * dword_ABF108) / dbl_ABF0B0); /*0x5b7752*/
}



// ==== 0x005B7760  sub_5B7760  this=-  sig=ida-proto ====
__int64 sub_5B7760()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_ABF108) + 0.5); /*0x5b777b*/
  dword_ABF0FC = result; /*0x5b7780*/
  return result; /*0x5b7786*/
}



// ==== 0x005B7790  sub_5B7790  this=-  sig=ida-proto ====
int sub_5B7790()
{
  word_ABF0A8 = 0; /*0x5b7792*/
  word_ABF0AA = 0; /*0x5b7798*/
  return 0; /*0x5b779e*/
}



// ==== 0x005B77A0  sub_5B77A0  this=-  sig=ida-proto ====
int sub_5B77A0()
{
  dword_ABF0C8 = 0; /*0x5b77a2*/
  dword_ABF0CC = 0; /*0x5b77a7*/
  dword_ABF0D0 = 0; /*0x5b77ac*/
  return 0; /*0x5b77b1*/
}



// ==== 0x005B77C0  sub_5B77C0  this=-  sig=ida-proto ====
int sub_5B77C0()
{
  dword_ABF0F8 = 0; /*0x5b77c5*/
  dword_ABF0F0 = 128; /*0x5b77cf*/
  dword_ABF0F4 = 128; /*0x5b77d4*/
  return 128; /*0x5b77d9*/
}



// ==== 0x005B77E0  ModemHost::Dialog  this=ModemHost  sig=csp ====
char __thiscall ModemHost::Dialog(ModemHost *this)
{
  int v1; // edi
  HWND Dialog; // eax
  int v4; // edi
  int v5; // edi
  TechnoTypeClass *v6; // ecx
  int v8; // [esp-4h] [ebp-14h]
  char v9; // [esp+Fh] [ebp-1h]

  v9 = 0; /*0x5b77ed*/
  Debug::Log(); /*0x5b77f1*/
  this->ModemHost_field_0x04 = -1; /*0x5b7807*/
  Dialog = (HWND)CreateDialog(0xF1u, (INT_PTR (__stdcall *)(HWND, UINT, WPARAM, LPARAM))NetworkGameSetup::DlgProc, 0); /*0x5b780a*/
  *(_DWORD *)this->__pad_0 = Dialog; /*0x5b7811*/
  if ( Dialog ) /*0x5b7813*/
  {
    v8 = v1; /*0x5b7819*/
    SetWindowLongA(Dialog, 8, (LONG)this); /*0x5b781e*/
    ModemHost::InitDialog(this); /*0x5b7826*/
    Dialog::Show(*(Dialog **)this->__pad_0); /*0x5b782d*/
    LOBYTE(this->ModemHost_field_0x08) = 0; /*0x5b7832*/
    BYTE1(this->ModemHost_field_0x08) = 1; /*0x5b7835*/
    v4 = *(_DWORD *)&stru_88732C.__pad_6[14]; /*0x5b783e*/
    if ( *(_DWORD *)&stru_88732C.__pad_6[6] != -1 ) /*0x5b7846*/
      v4 += Timer::GetTicks() - *(_DWORD *)&stru_88732C.__pad_6[6]; /*0x5b7858*/
    *((_DWORD *)this + 3) = v4; /*0x5b785a*/
    this->q004 = 10000; /*0x5b785d*/
    v5 = *(_DWORD *)&stru_88732C.__pad_6[14]; /*0x5b7869*/
    if ( *(_DWORD *)&stru_88732C.__pad_6[6] != -1 ) /*0x5b7871*/
      v5 += Timer::GetTicks() - *(_DWORD *)&stru_88732C.__pad_6[6]; /*0x5b7883*/
    *((_DWORD *)this + 5) = v5; /*0x5b7885*/
    *((_DWORD *)this + 6) = 1200; /*0x5b7888*/
    *((_DWORD *)this + 7) = 0; /*0x5b788f*/
    this->q008 = 0; /*0x5b7892*/
    *((_WORD *)this + 17) = 0; /*0x5b7895*/
    *((_DWORD *)this + 19) = -1; /*0x5b7899*/
    *((_DWORD *)this + 20) = -1; /*0x5b789c*/
    g_MissionQueueFrame.localVariables[418] = (int)this; /*0x5b789f*/
    *((_DWORD *)this + 21) = GameConfig::ComputeHash(); /*0x5b78aa*/
    LoadArtINI(); /*0x5b78ad*/
    *((_DWORD *)this + 22) = unknown_libname_29(); /*0x5b78b7*/
    *((_DWORD *)this + 23) = unknown_libname_30(); /*0x5b78c5*/
    while ( 1 ) /*0x5b78c8*/
    {
      this->ModemHost_field_0x04 = -1; /*0x5b78c8*/
      do /*0x5b78f2*/
      {
        if ( (unsigned __int8)Dialog::PumpMessages() == 1 ) /*0x5b78d2*/
          break; /*0x5b78d2*/
        CellClass::SetOccupancy((int)this, 0); /*0x5b78d7*/
        if ( ModemGuest::ProcessPacket((int)this, 0) == 1 ) /*0x5b78e6*/
          break; /*0x5b78e6*/
        LOBYTE(v6) = 0; /*0x5b78e8*/
        ScreenSaver::Process(v6, v8); /*0x5b78ea*/
      }
      while ( this->ModemHost_field_0x04 < 0 ); /*0x5b78f2*/
      if ( this->ModemHost_field_0x04 != 1 ) /*0x5b78f8*/
        break; /*0x5b78f8*/
      ShowWindow(*(HWND *)this->__pad_0, 0); /*0x5b78fe*/
      if ( ModemHost::StartGame((int)this, 0) == 1 ) /*0x5b790a*/
      {
        v9 = 1; /*0x5b7915*/
        break; /*0x5b7915*/
      }
      ShowWindow(*(HWND *)this->__pad_0, 5); /*0x5b7911*/
    }
    Dialog::Destroy(*(Dialog **)this->__pad_0); /*0x5b791a*/
    g_MissionQueueFrame.localVariables[418] = 0; /*0x5b7921*/
    if ( LOBYTE(this->ModemHost_field_0x08) == 1 ) /*0x5b792d*/
      SaveConfigWOL((ObjectClass *)&dword_A8B238); /*0x5b7934*/
  }
  if ( this->ModemHost_field_0x04 == 2 ) /*0x5b793d*/
    SendSignOffEvent(); /*0x5b7941*/
  Debug::Log(); /*0x5b795f*/
  return v9; /*0x5b7969*/
}



// ==== 0x005B7970  NetworkGameSetup::DlgProc  this=NetworkGameSetup  sig=csp ====
int __stdcall NetworkGameSetup_DlgProc(HWND hWnd, unsigned int a2, unsigned int a3, HWND a4)
{
  int result; // eax
  LONG WindowLongA; // ebp
  HWND v6; // eax
  HWND v7; // esi
  unsigned int v8; // eax
  HWND v9; // eax
  HWND v10; // esi
  HWND v11; // eax
  HWND v12; // eax
  HWND v13; // eax
  HWND v14; // eax
  HWND v15; // eax
  HWND v16; // eax
  HWND v17; // esi
  LRESULT v18; // eax
  LRESULT v19; // eax
  HWND v20; // eax
  HWND v21; // esi
  HWND v22; // eax
  HWND v23; // eax
  LRESULT v24; // eax
  HWND v25; // eax
  HWND v26; // eax
  HWND v27; // eax
  HWND DlgItem; // eax
  wchar_t v29[20]; // [esp+Ch] [ebp-228h] BYREF
  wchar_t lParam[256]; // [esp+34h] [ebp-200h] BYREF

  result = BaseDialogProc(hWnd, a2, a3, (unsigned int)a4); /*0x5b7999*/
  if ( result ) /*0x5b79a0*/
    return result; /*0x5b79a0*/
  WindowLongA = GetWindowLongA(hWnd, 8); /*0x5b79b0*/
  if ( a2 > 0x111 ) /*0x5b79be*/
  {
    if ( a2 >= 0x114 && a2 <= 0x115 ) /*0x5b80d5*/
    {
      if ( GetDlgItem(hWnd, 1641) == a4 ) /*0x5b80eb*/
      {
        DlgItem = GetDlgItem(*(HWND *)WindowLongA, 1641); /*0x5b80f6*/
        if ( DlgItem ) /*0x5b80fa*/
        {
          MEMORY[0xA8B270] = SendMessageA(DlgItem, 0x400u, 0, 0); /*0x5b8110*/
          *(_BYTE *)(WindowLongA + 9) = 1; /*0x5b8115*/
          return 0; /*0x5b8125*/
        }
      }
      else
      {
        if ( GetDlgItem(hWnd, 1360) == a4 ) /*0x5b8132*/
        {
          NetworkGameSetup::ReadRulesInitConfig(WindowLongA); /*0x5b8136*/
          return 0; /*0x5b8147*/
        }
        if ( GetDlgItem(hWnd, 1026) == a4 ) /*0x5b8154*/
        {
          NetworkGameSetup::ReadRulesBases(WindowLongA); /*0x5b8158*/
          return 0; /*0x5b8169*/
        }
        if ( GetDlgItem(hWnd, 1362) == a4 ) /*0x5b8176*/
        {
          NetworkGameSetup::ReadRulesAlliesAllowed(WindowLongA); /*0x5b817a*/
          return 0; /*0x5b818b*/
        }
        if ( GetDlgItem(hWnd, 1363) == a4 ) /*0x5b8198*/
        {
          NetworkGameSetup::ReadRulesUnknown(WindowLongA); /*0x5b819c*/
          return 0; /*0x5b81ad*/
        }
        if ( GetDlgItem(hWnd, 1321) == a4 ) /*0x5b81ba*/
          NetworkGameSetup::ReadRulesEngineerCount(WindowLongA); /*0x5b81be*/
      }
    }
    return 0; /*0x5b80fa*/
  }
  if ( a2 != 273 ) /*0x5b79c9*/
  {
    if ( a2 == 2 ) /*0x5b79ce*/
    {
      if ( g_UIControlState ) /*0x5b7a09*/
      {
        NetworkGameSetup::DeleteComPtr(g_UIControlState, 1); /*0x5b7a11*/
        g_UIControlState = 0; /*0x5b7a19*/
        return 0; /*0x5b7a2c*/
      }
    }
    else if ( a2 == 15 ) /*0x5b79d3*/
    {
      if ( g_UIControlState ) /*0x5b79e1*/
        Skirmish::RenderPreview(g_UIControlState, hWnd); /*0x5b79e4*/
      ValidateRect(hWnd, 0); /*0x5b79ec*/
      return 0; /*0x5b79fe*/
    }
    return 0; /*0x5b79d3*/
  }
  if ( (unsigned __int16)a3 > 0x596u ) /*0x5b7a3b*/
  {
    switch ( (__int16)a3 ) /*0x5b7de9*/
    {
      case 1450: /*0x5b7de9*/
        if ( HIWORD(a3) ) /*0x5b80a6*/
          return 0; /*0x5b80a9*/
        SkirmishDialog::HandleGameStart(WindowLongA); /*0x5b80b1*/
        result = 0; /*0x5b80b9*/
        break; /*0x5b80c2*/
      case 1473: /*0x5b7de9*/
        if ( HIWORD(a3) != 1281 && HIWORD(a3) != 768 ) /*0x5b7e71*/
          return 0; /*0x5b7e71*/
        v20 = GetDlgItem(*(HWND *)WindowLongA, 1473); /*0x5b7e80*/
        v21 = v20; /*0x5b7e86*/
        if ( !v20 ) /*0x5b7e8a*/
          return 0; /*0x5b7e8a*/
        SendMessageA(v20, 0x4B3u, 0x14u, (LPARAM)v29); /*0x5b7ea3*/
        WideString::Trim(v29); /*0x5b7ea9*/
        if ( HIWORD(a3) != 768 ) /*0x5b7eb3*/
          SendMessageA(v21, 0x4B2u, 0, (LPARAM)v29); /*0x5b7ec2*/
        strcpy(unk_A8B380, ToWideStringChar((char *)v29)); /*0x5b7eeb*/
        *(_BYTE *)(WindowLongA + 9) = 1; /*0x5b7ef4*/
        *(_BYTE *)(WindowLongA + 8) = 1; /*0x5b7ef7*/
        result = 0; /*0x5b7ed2*/
        break; /*0x5b7f04*/
      case 1572: /*0x5b7de9*/
        v25 = GetDlgItem(*(HWND *)WindowLongA, 1572); /*0x5b7fd5*/
        if ( !v25 ) /*0x5b7fdd*/
          return 0; /*0x5b7fdd*/
        MEMORY[0xA8B260] = SendMessageA(v25, 0xF0u, 0, 0) == 1; /*0x5b7ffd*/
        *(_BYTE *)(WindowLongA + 9) = 1; /*0x5b8002*/
        result = 0; /*0x5b8008*/
        break; /*0x5b8011*/
      case 1639: /*0x5b7de9*/
        if ( HIWORD(a3) != 1 ) /*0x5b7dfa*/
          return 0; /*0x5b7dfa*/
        v16 = GetDlgItem(*(HWND *)WindowLongA, 1639); /*0x5b7e09*/
        v17 = v16; /*0x5b7e0f*/
        if ( !v16 ) /*0x5b7e13*/
          return 0; /*0x5b7e13*/
        v18 = SendMessageA(v16, 0x147u, 0, 0); /*0x5b7e29*/
        if ( v18 == -1 ) /*0x5b7e2e*/
          return 0; /*0x5b7e2e*/
        v19 = SendMessageA(v17, 0x150u, v18, 0); /*0x5b7e3d*/
        if ( v19 == -1 ) /*0x5b7e42*/
          return 0; /*0x5b7e42*/
        dword_A8B3AC = v19; /*0x5b7e48*/
        *(_BYTE *)(WindowLongA + 9) = 1; /*0x5b7e4d*/
        *(_BYTE *)(WindowLongA + 8) = 1; /*0x5b7e50*/
        result = 0; /*0x5b7e56*/
        break; /*0x5b7e5f*/
      case 1642: /*0x5b7de9*/
        v23 = GetDlgItem(*(HWND *)WindowLongA, 1642); /*0x5b7f5f*/
        if ( !v23 ) /*0x5b7f63*/
          return 0; /*0x5b7f63*/
        v24 = SendMessageA(v23, 0xF0u, 0, 0); /*0x5b7f73*/
        MEMORY[0xA8B258] = v24 == 1; /*0x5b7f85*/
        if ( v24 != 1 && GetDlgItem(*(HWND *)WindowLongA, 1358) ) /*0x5b7f95*/
        {
          MEMORY[0xA8B262] = 0; /*0x5b7f9d*/
          SendDlgItemMessageA(*(HWND *)WindowLongA, 1358, 0xF1u, 0, 0); /*0x5b7fb4*/
        }
        *(_BYTE *)(WindowLongA + 9) = 1; /*0x5b7fba*/
        result = 0; /*0x5b7fc0*/
        break; /*0x5b7fc9*/
      case 1643: /*0x5b7de9*/
        v22 = GetDlgItem(*(HWND *)WindowLongA, 1643); /*0x5b7f10*/
        if ( !v22 ) /*0x5b7f18*/
          return 0; /*0x5b7f18*/
        LOBYTE(dword_A8B320) = SendMessageA(v22, 0xF0u, 0, 0) == 1; /*0x5b7f38*/
        *(_BYTE *)(WindowLongA + 9) = 1; /*0x5b7f3e*/
        result = 0; /*0x5b7f44*/
        break; /*0x5b7f4d*/
      case 1690: /*0x5b7de9*/
        v26 = GetDlgItem(*(HWND *)WindowLongA, 1690); /*0x5b801d*/
        if ( !v26 ) /*0x5b8025*/
          return 0; /*0x5b8025*/
        MEMORY[0xA8B263] = SendMessageA(v26, 0xF0u, 0, 0) == 1; /*0x5b8045*/
        *(_BYTE *)(WindowLongA + 9) = 1; /*0x5b804b*/
        result = 0; /*0x5b8051*/
        break; /*0x5b805a*/
      case 1693: /*0x5b7de9*/
        v27 = GetDlgItem(*(HWND *)WindowLongA, 1693); /*0x5b8066*/
        if ( !v27 ) /*0x5b806e*/
          return 0; /*0x5b806e*/
        MEMORY[0xA8B262] = SendMessageA(v27, 0xF0u, 0, 0) == 1; /*0x5b808e*/
        *(_BYTE *)(WindowLongA + 9) = 1; /*0x5b8094*/
        result = 0; /*0x5b809a*/
        break; /*0x5b80a3*/
      default:
        return 0;
    }
  }
  else
  {
    if ( (unsigned __int16)a3 == 1430 ) /*0x5b7a41*/
    {
      v15 = GetDlgItem(*(HWND *)WindowLongA, 1430); /*0x5b7d91*/
      if ( v15 ) /*0x5b7d99*/
      {
        byte_A8B31D = SendMessageA(v15, 0xF0u, 0, 0) == 1; /*0x5b7db9*/
        *(_BYTE *)(WindowLongA + 9) = 1; /*0x5b7dbf*/
        return 0; /*0x5b7dce*/
      }
      return 0; /*0x5b7d99*/
    }
    if ( (unsigned __int16)a3 > 0x54Cu ) /*0x5b7a4c*/
    {
      switch ( (unsigned __int16)a3 ) /*0x5b7c5c*/
      {
        case 0x54Du: /*0x5b7c5c*/
          v14 = GetDlgItem(*(HWND *)WindowLongA, 1357); /*0x5b7d48*/
          if ( v14 ) /*0x5b7d50*/
          {
            byte_A8B31F = SendMessageA(v14, 0xF0u, 0, 0) == 1; /*0x5b7d70*/
            *(_BYTE *)(WindowLongA + 9) = 1; /*0x5b7d76*/
            return 0; /*0x5b7d85*/
          }
          break;
        case 0x54Eu: /*0x5b7c5c*/
          v13 = GetDlgItem(*(HWND *)WindowLongA, 1358); /*0x5b7cc6*/
          if ( v13 ) /*0x5b7cca*/
          {
            MEMORY[0xA8B262] = SendMessageA(v13, 0xF0u, 0, 0) == 1; /*0x5b7cea*/
            *(_BYTE *)(WindowLongA + 9) = 1; /*0x5b7cf0*/
            if ( MEMORY[0xA8B262] ) /*0x5b7cfa*/
            {
              if ( GetDlgItem(*(HWND *)WindowLongA, 1642) ) /*0x5b7d09*/
              {
                MEMORY[0xA8B258] = 1; /*0x5b7d15*/
                SendDlgItemMessageA(*(HWND *)WindowLongA, 1642, 0xF1u, 1u, 0); /*0x5b7d2a*/
                return 0; /*0x5b7d3c*/
              }
            }
          }
          break;
        case 0x551u: /*0x5b7c5c*/
          v12 = GetDlgItem(*(HWND *)WindowLongA, 1361); /*0x5b7c77*/
          if ( v12 ) /*0x5b7c7f*/
          {
            MEMORY[0xA8B26C] = SendMessageA(v12, 0xF0u, 0, 0) == 1; /*0x5b7c9f*/
            *(_BYTE *)(WindowLongA + 9) = 1; /*0x5b7ca5*/
            return 0; /*0x5b7cb4*/
          }
          break;
      }
      return 0; /*0x5b7c7f*/
    }
    if ( (unsigned __int16)a3 == 1356 ) /*0x5b7a52*/
    {
      v11 = GetDlgItem(*(HWND *)WindowLongA, 1356); /*0x5b7c18*/
      if ( v11 ) /*0x5b7c20*/
      {
        MEMORY[0xA8B261] = SendMessageA(v11, 0xF0u, 0, 0) == 1; /*0x5b7c40*/
        *(_BYTE *)(WindowLongA + 9) = 1; /*0x5b7c45*/
        return 0; /*0x5b7c54*/
      }
      return 0; /*0x5b7c20*/
    }
    if ( (unsigned __int16)a3 > 0x405u ) /*0x5b7a5d*/
    {
      if ( (unsigned __int16)a3 == 1344 && HIWORD(a3) == 1281 ) /*0x5b7b77*/
      {
        memset(lParam, 0, sizeof(lParam)); /*0x5b7b8d*/
        v9 = GetDlgItem(*(HWND *)WindowLongA, 1344); /*0x5b7b93*/
        v10 = v9; /*0x5b7b99*/
        if ( v9 ) /*0x5b7b9d*/
        {
          SendMessageA(v9, 0x4B3u, 0x100u, (LPARAM)lParam); /*0x5b7bb9*/
          SendMessageA(v10, 0x4B2u, 0, (LPARAM)&g_TypeClass_DefaultString); /*0x5b7bc8*/
          if ( wcslen(lParam) ) /*0x5b7bcf*/
          {
            if ( lParam[0] != 13 ) /*0x5b7be5*/
            {
              WideString::Trim(lParam); /*0x5b7bef*/
              NetworkGameSetup::SendGameSetupPacket(lParam); /*0x5b7bfb*/
              return 0; /*0x5b7c0c*/
            }
          }
        }
      }
      return 0; /*0x5b7be5*/
    }
    if ( (unsigned __int16)a3 != 1029 ) /*0x5b7a63*/
    {
      if ( (unsigned __int16)a3 == 1 ) /*0x5b7a66*/
      {
        if ( !HIWORD(a3) && (unsigned __int8)GameOptions::ReadSettings(WindowLongA) == 1 ) /*0x5b7aac*/
        {
          Game::BuildGameSetupPacket(WindowLongA); /*0x5b7ab4*/
          *(_DWORD *)(WindowLongA + 4) = 1; /*0x5b7ab9*/
          return 0; /*0x5b7ac8*/
        }
      }
      else if ( (unsigned __int16)a3 == 2 && !HIWORD(a3) ) /*0x5b7a6f*/
      {
        GameOptions::ReadSettings(WindowLongA); /*0x5b7a7a*/
        *(_DWORD *)(WindowLongA + 4) = 2; /*0x5b7a7f*/
        return 0; /*0x5b7a92*/
      }
      return 0; /*0x5b7a72*/
    }
    if ( HIWORD(a3) != 1 ) /*0x5b7ad5*/
      return 0; /*0x5b7ad5*/
    v6 = GetDlgItem(*(HWND *)WindowLongA, 1029); /*0x5b7ae4*/
    v7 = v6; /*0x5b7aea*/
    if ( !v6 ) /*0x5b7aee*/
      return 0; /*0x5b7aee*/
    v8 = SendMessageA(v6, 0x147u, 0, 0); /*0x5b7b04*/
    if ( v8 == -1 ) /*0x5b7b09*/
      return 0; /*0x5b81c3*/
    dword_A8B394 = v8; /*0x5b7b0f*/
    *(_BYTE *)(WindowLongA + 9) = 1; /*0x5b7b14*/
    *(_BYTE *)(WindowLongA + 8) = 1; /*0x5b7b19*/
    if ( v8 >= 8 ) /*0x5b7b1c*/
      SendMessageA(v7, 0x498u, 0, (LPARAM)Math::InitDegToRad); /*0x5b7b52*/
    else
      SendMessageA(v7, 0x498u, 0, dword_8316A8[v8]); /*0x5b7b33*/
    return 0; /*0x5b7b38*/
  }
  return result; /*0x5b79f3*/
}



// ==== 0x005B82F0  ModemHost::InitDialog  this=ModemHost  sig=csp ====
void __thiscall ModemHost::InitDialog(ModemHost *this)
{
  ObjectClass *v1; // edi
  HWND *v2; // ebp
  int v3; // ecx
  char v4; // al
  HWND (__stdcall *v5)(HWND, int); // ebx
  HWND DlgItem; // eax
  HWND v7; // edi
  char *v8; // eax
  HWND v9; // eax
  HWND v10; // edi
  wchar_t *StringCSF; // eax
  wchar_t *v12; // eax
  wchar_t *v13; // eax
  wchar_t *v14; // eax
  wchar_t *v15; // eax
  wchar_t *v16; // eax
  wchar_t *v17; // eax
  wchar_t *v18; // eax
  WPARAM v19; // ebx
  LPARAM *v20; // ebp
  HWND v21; // eax
  HWND v22; // edi
  LPARAM i; // ebp
  int v24; // eax
  LRESULT v25; // eax
  WPARAM ListBoxItem; // eax
  HWND v27; // edi
  HWND v28; // eax
  HWND v29; // edi
  HWND v30; // edi
  LPARAM v31; // ebp
  HWND v32; // eax
  HWND v33; // edi
  HWND v34; // eax
  HWND v35; // edi
  HWND v36; // edi
  HWND v37; // eax
  HWND v38; // eax
  HWND v39; // eax
  HWND v40; // eax
  HWND v41; // eax
  HWND v42; // eax
  HWND v43; // eax
  HWND v44; // eax
  HWND v45; // eax
  HWND v46; // eax
  unsigned int v47; // eax
  int v48; // eax
  Skirmish *v49; // edi
  HWND v50; // eax
  _DWORD *v51; // eax
  char v52; // bl
  ObjectClass *v53; // eax
  Skirmish *v54; // eax
  HWND *v55; // ebx
  HWND v56; // esi
  HWND v57; // eax
  HWND *lParam; // [esp+4h] [ebp-A74h]
  BufferIOFileClass v59; // [esp+8h] [ebp-A70h] BYREF
  int v60[3]; // [esp+60h] [ebp-A18h] BYREF
  int v61; // [esp+6Ch] [ebp-A0Ch]
  wchar_t Buffer[256]; // [esp+74h] [ebp-A04h] BYREF
  wchar_t Format[1026]; // [esp+274h] [ebp-804h] BYREF

  v2 = (HWND *)this; /*0x5b82fa*/
  *(_DWORD *)v59.RawFileClass = this; /*0x5b8301*/
  Debug::Log(); /*0x5b8305*/
  if ( LOBYTE(stru_82BA00.BuildingAnim[7]) == 1 ) /*0x5b8314*/
  {
    LOBYTE(stru_82BA00.BuildingAnim[7]) = 0; /*0x5b831f*/
    nullsub_38(v1); /*0x5b8326*/
    *(_DWORD *)&stru_A8B250.__pad_0[12] = *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 5252); /*0x5b8336*/
    stru_A8B250.__pad_0[8] = *(_BYTE *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 5295); /*0x5b8342*/
    stru_A8B250.__pad_0[16] = *(_BYTE *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 5292); /*0x5b834e*/
    stru_A8B250.__pad_0[17] = *(_BYTE *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 5297); /*0x5b835a*/
    *(_DWORD *)&stru_A8B250.__pad_0[36] = 0; /*0x5b8360*/
    v3 = *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 5268); /*0x5b836a*/
    stru_A8B250.__pad_0[18] = 0; /*0x5b8370*/
    *(_DWORD *)&stru_A8B250.__pad_0[32] = v3; /*0x5b8377*/
    stru_A8B250.__pad_0[19] = *(_BYTE *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 5305); /*0x5b8389*/
    v4 = *(_BYTE *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 5306); /*0x5b838f*/
    *(_DWORD *)&stru_A8B250.__pad_0[24] = stru_A8EB00.ObjectTypeClass[24]; /*0x5b8395*/
    stru_A8B250.__pad_0[20] = v4; /*0x5b839b*/
    stru_A8B250.__pad_0[28] = 0; /*0x5b83a0*/
  }
  v5 = GetDlgItem; /*0x5b83aa*/
  DlgItem = GetDlgItem(*v2, 1473); /*0x5b83b6*/
  v7 = DlgItem; /*0x5b83be*/
  if ( DlgItem ) /*0x5b83c2*/
  {
    SendMessageA(DlgItem, 0xC5u, 0x13u, 0); /*0x5b83ce*/
    v8 = CharToWideString(unk_A8B380); /*0x5b83d5*/
    SendMessageA(v7, 0x4B2u, 0, (LPARAM)v8); /*0x5b83e3*/
  }
  Debug::Log(); /*0x5b83ef*/
  v9 = GetDlgItem(*v2, 1029); /*0x5b8400*/
  v10 = v9; /*0x5b8402*/
  if ( v9 ) /*0x5b8406*/
  {
    SendMessageA(v9, 0x14Bu, 0, 0); /*0x5b8416*/
    StringCSF = GetStringCSF((wchar_t *)&stru_82BA00.?[37], 0, &stru_82BA00.__pad_F70[52], 407); /*0x5b8429*/
    SendMessageA(v10, 0x4C1u, 0xFFFFFFFF, (LPARAM)StringCSF); /*0x5b8437*/
    v12 = GetStringCSF((wchar_t *)&stru_82BA00.?[35], 0, &stru_82BA00.__pad_F70[52], 408); /*0x5b844a*/
    SendMessageA(v10, 0x4C1u, 0xFFFFFFFF, (LPARAM)v12); /*0x5b8458*/
    v13 = GetStringCSF((wchar_t *)&stru_82BA00.?[32], 0, &stru_82BA00.__pad_F70[52], 409); /*0x5b846b*/
    SendMessageA(v10, 0x4C1u, 0xFFFFFFFF, (LPARAM)v13); /*0x5b8479*/
    v14 = GetStringCSF((wchar_t *)&stru_82BA00.?[29], 0, &stru_82BA00.__pad_F70[52], 410); /*0x5b848c*/
    SendMessageA(v10, 0x4C1u, 0xFFFFFFFF, (LPARAM)v14); /*0x5b849a*/
    v15 = GetStringCSF((wchar_t *)&stru_82BA00.?[26], 0, &stru_82BA00.__pad_F70[52], 411); /*0x5b84ad*/
    SendMessageA(v10, 0x4C1u, 0xFFFFFFFF, (LPARAM)v15); /*0x5b84bb*/
    v16 = GetStringCSF((wchar_t *)&stru_82BA00.?[22], 0, &stru_82BA00.__pad_F70[52], 412); /*0x5b84ce*/
    SendMessageA(v10, 0x4C1u, 0xFFFFFFFF, (LPARAM)v16); /*0x5b84dc*/
    v17 = GetStringCSF((wchar_t *)&stru_82BA00.?[19], 0, &stru_82BA00.__pad_F70[52], 413); /*0x5b84ef*/
    SendMessageA(v10, 0x4C1u, 0xFFFFFFFF, (LPARAM)v17); /*0x5b84fd*/
    v18 = GetStringCSF((wchar_t *)&stru_82BA00.?[16], 0, &stru_82BA00.__pad_F70[52], 414); /*0x5b8510*/
    SendMessageA(v10, 0x4C1u, 0xFFFFFFFF, (LPARAM)v18); /*0x5b851e*/
    v19 = 0; /*0x5b8520*/
    v20 = dword_8316A8; /*0x5b8522*/
    do /*0x5b853e*/
      SendMessageA(v10, 0x498u, v19++, *v20++); /*0x5b8532*/
    while ( (int)v20 < (int)&off_8316C8 ); /*0x5b853e*/
    dword_A8B394 = dword_A8B3B4; /*0x5b854e*/
    SendMessageA(v10, 0x14Eu, dword_A8B3B4, 0); /*0x5b8553*/
    v5 = GetDlgItem; /*0x5b8555*/
    v2 = *(HWND **)v59.RawFileClass; /*0x5b855b*/
  }
  Debug::Log(); /*0x5b856b*/
  v21 = v5(*v2, 1639); /*0x5b857c*/
  v22 = v21; /*0x5b857e*/
  if ( v21 ) /*0x5b8582*/
  {
    SendMessageA(v21, 0x14Bu, 0, 0); /*0x5b858e*/
    for ( i = 0; i < dword_A83CA8; ++i ) /*0x5b8599*/
    {
      v24 = *((_DWORD *)dword_A83C9C + i); /*0x5b85a1*/
      if ( *(_BYTE *)(v24 + 421) ) /*0x5b85a4*/
      {
        v25 = SendMessageA(v22, 0x4C2u, 0, *(_DWORD *)(v24 + 96)); /*0x5b85ba*/
        SendMessageA(v22, 0x151u, v25, i); /*0x5b85c4*/
      }
    }
    ListBoxItem = FindListBoxItem(v22, -1, dword_A8B3AC); /*0x5b85dc*/
    SendMessageA(v22, 0x14Eu, ListBoxItem, 0); /*0x5b85ea*/
    v2 = *(HWND **)v59.RawFileClass; /*0x5b85ec*/
  }
  v27 = v5(*v2, 1641); /*0x5b85fb*/
  if ( v27 ) /*0x5b85ff*/
  {
    lParam = *(HWND **)&stru_A8B250.__pad_0[32]; /*0x5b860e*/
    SendMessageA( /*0x5b8630*/
      v27,
      0x406u,
      1u,
      *(unsigned __int16 *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 5264)
    | (*(unsigned __int16 *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 5272) << 16));
    SendMessageA(v27, 0x405u, 1u, (LPARAM)lParam); /*0x5b863f*/
  }
  Debug::Log(); /*0x5b864c*/
  v28 = v5(*v2, 1360); /*0x5b865d*/
  v29 = v28; /*0x5b865f*/
  if ( v28 ) /*0x5b8663*/
  {
    lParam = (HWND *)g_RulesInitConfig; /*0x5b8678*/
    SendMessageA(v28, 0x406u, 1u, 655361); /*0x5b867c*/
    SendMessageA(v29, 0x405u, 1u, (LPARAM)lParam); /*0x5b868b*/
  }
  Debug::Log(); /*0x5b8699*/
  v30 = v5(*v2, 1026); /*0x5b86ac*/
  if ( v30 ) /*0x5b86b0*/
  {
    v31 = *(_DWORD *)&stru_A8B250.__pad_0[12]; /*0x5b86bb*/
    SendMessageA( /*0x5b86dd*/
      v30,
      0x406u,
      1u,
      *(unsigned __int16 *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 5248)
    | (*(unsigned __int16 *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 5256) << 16));
    SendMessageA(v30, 0x405u, 1u, v31); /*0x5b86e8*/
    SendMessageA(v30, 0x4ABu, 0, 250); /*0x5b86f7*/
    v2 = *(HWND **)v59.RawFileClass; /*0x5b86f9*/
  }
  Debug::Log(); /*0x5b8708*/
  v32 = v5(*v2, 1362); /*0x5b8719*/
  v33 = v32; /*0x5b871b*/
  if ( v32 ) /*0x5b871f*/
  {
    lParam = *(HWND **)&stru_A8B250.__pad_0[36]; /*0x5b8734*/
    SendMessageA(v32, 0x406u, 1u, 393216); /*0x5b8738*/
    SendMessageA(v33, 0x405u, 1u, (LPARAM)lParam); /*0x5b8747*/
  }
  Debug::Log(); /*0x5b8755*/
  v34 = v5(*v2, 1321); /*0x5b8766*/
  v35 = v34; /*0x5b8768*/
  if ( v34 ) /*0x5b876c*/
  {
    SendMessageA(v34, 0x406u, 1u, 393216); /*0x5b877b*/
    SendMessageA(v35, 0x405u, 1u, 6 - stru_A8EB00.ObjectTypeClass[24]); /*0x5b8793*/
  }
  Debug::Log(); /*0x5b87a1*/
  v36 = v5(*v2, 1363); /*0x5b87b4*/
  if ( v36 ) /*0x5b87b8*/
  {
    lParam = *(HWND **)&stru_A8B250.__pad_0[40]; /*0x5b87cc*/
    SendMessageA(v36, 0x406u, 1u, 0x20000); /*0x5b87d0*/
    SendMessageA(v36, 0x405u, 1u, (LPARAM)lParam); /*0x5b87df*/
  }
  Debug::Log(); /*0x5b87ed*/
  v37 = v5(*v2, 1643); /*0x5b87fe*/
  if ( v37 ) /*0x5b8802*/
    SendMessageA(v37, 0xF1u, dword_A8B320 == 1, 0); /*0x5b881b*/
  Debug::Log(); /*0x5b8836*/
  v38 = v5(*v2, 1642); /*0x5b8847*/
  if ( v38 ) /*0x5b884b*/
    SendMessageA(v38, 0xF1u, stru_A8B250.__pad_0[8] == 1, 0); /*0x5b8864*/
  Debug::Log(); /*0x5b887f*/
  v39 = v5(*v2, 1356); /*0x5b8890*/
  if ( v39 ) /*0x5b8894*/
    SendMessageA(v39, 0xF1u, stru_A8B250.__pad_0[17] == 1, 0); /*0x5b88ad*/
  Debug::Log(); /*0x5b88c8*/
  v40 = v5(*v2, 1357); /*0x5b88d9*/
  if ( v40 ) /*0x5b88dd*/
    SendMessageA(v40, 0xF1u, byte_A8B31F == 1, 0); /*0x5b88f6*/
  Debug::Log(); /*0x5b8911*/
  v41 = v5(*v2, 1572); /*0x5b8922*/
  if ( v41 ) /*0x5b8926*/
    SendMessageA(v41, 0xF1u, stru_A8B250.__pad_0[16] == 1, 0); /*0x5b893f*/
  Debug::Log(); /*0x5b895a*/
  v42 = v5(*v2, 1430); /*0x5b896b*/
  if ( v42 ) /*0x5b896f*/
    SendMessageA(v42, 0xF1u, byte_A8B31D == 1, 0); /*0x5b8988*/
  Debug::Log(); /*0x5b89a3*/
  v43 = v5(*v2, 1358); /*0x5b89b4*/
  if ( v43 ) /*0x5b89b8*/
    SendMessageA(v43, 0xF1u, stru_A8B250.__pad_0[18] == 1, 0); /*0x5b89d1*/
  Debug::Log(); /*0x5b89ec*/
  v44 = v5(*v2, 1690); /*0x5b89fd*/
  if ( v44 ) /*0x5b8a01*/
    SendMessageA(v44, 0xF1u, stru_A8B250.__pad_0[19] == 1, 0); /*0x5b8a1a*/
  Debug::Log(); /*0x5b8a35*/
  v45 = v5(*v2, 1693); /*0x5b8a46*/
  if ( v45 ) /*0x5b8a4a*/
    SendMessageA(v45, 0xF1u, stru_A8B250.__pad_0[20] == 1, 0); /*0x5b8a63*/
  Debug::Log(); /*0x5b8a7e*/
  v46 = v5(*v2, 1361); /*0x5b8a8f*/
  if ( v46 ) /*0x5b8a93*/
    SendMessageA(v46, 0xF1u, stru_A8B250.__pad_0[28] == 1, 0); /*0x5b8aac*/
  Debug::Log(); /*0x5b8ac7*/
  NetworkBuffer::GetField((NetworkBuffer *)&stru_A8EB00.?[252]); /*0x5b8ad4*/
  v47 = Random::Range(&Randomizer_Global, 1, 0x7FFF); /*0x5b8ae5*/
  srand(v47); /*0x5b8aeb*/
  v48 = rand(); /*0x5b8af3*/
  v49 = g_UIControlState; /*0x5b8b04*/
  *(_DWORD *)&stru_A8EB00.?[432] = v48; /*0x5b8b0a*/
  dword_A8E960[0] = dword_A8E960[0] & 0xFFFFFFEF /*0x5b8b22*/
                  | (16 * (*(_BYTE *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 5298) & 1));
  if ( g_UIControlState ) /*0x5b8b27*/
  {
    ComPtr::Dtor((ComPtr *)g_UIControlState); /*0x5b8b2b*/
    __3_YAXPAX_Z(v49); /*0x5b8b31*/
    g_UIControlState = 0; /*0x5b8b39*/
  }
  PtrVector::Destroy(&stru_A8DA74); /*0x5b8b48*/
  LoadScenarioClassByIndex(0); /*0x5b8b4f*/
  *(_DWORD *)&stru_A8B250.__pad_0[4] = 0; /*0x5b8b54*/
  v50 = v5(*v2, 1448); /*0x5b8b67*/
  SendMessageA(v50, 0x4B2u, 0, (LPARAM)MEMORY[0xA8B322]); /*0x5b8b76*/
  BYTE2(stru_A8D600.Network_field_0xC) = 1; /*0x5b8b81*/
  v51 = CCFileClass::Construct((CCFileClass *)&v59.?, byte_A8B8E0); /*0x5b8b88*/
  v52 = (*(int (__thiscall **)(_DWORD *, _DWORD))(*v51 + 20))(v51, 0); /*0x5b8b9a*/
  v61 = 0; /*0x5b8ba4*/
  Vector::Clear((int)v60); /*0x5b8bac*/
  *(_DWORD *)v59.RawFileClass = &off_7E1668; /*0x5b8bb5*/
  BufferIOFileClass::Dtor(&v59); /*0x5b8bbd*/
  if ( v52 ) /*0x5b8bc4*/
  {
    v53 = (ObjectClass *)__2_YAPAXI_Z(4u); /*0x5b8bc8*/
    if ( v53 ) /*0x5b8bd2*/
      v54 = (Skirmish *)unknown_libname_27(v53); /*0x5b8bd6*/
    else
      v54 = 0; /*0x5b8bdd*/
    g_UIControlState = v54; /*0x5b8be6*/
    PreviewClass::ReadPreview((PreviewClass *)v54, byte_A8B8E0); /*0x5b8beb*/
    v55 = lParam; /*0x5b8bf0*/
    PostMessageA(*lParam, 0xFu, 0, 0); /*0x5b8bfd*/
  }
  else
  {
    v55 = lParam; /*0x5b8c05*/
  }
  if ( strlen(byte_AC1288) > 0x4E ) /*0x5b8c1b*/
    byte_AC12D7 = 0; /*0x5b8c1d*/
  if ( strlen(byte_AC1288) ) /*0x5b8c27*/
  {
    BulkCharToWide(Format, (unsigned __int8 *)byte_AC1288, -1); /*0x5b8c41*/
    if ( &g_TypeClass_DefaultString ) /*0x5b8c4d*/
    {
      v56 = GetDlgItem(*v55, 1343); /*0x5b8c5d*/
      if ( v56 ) /*0x5b8c61*/
      {
        swprintf(Buffer, (const size_t)g_Str_Trace___s_, Format, &g_TypeClass_DefaultString); /*0x5b8c83*/
        DrawDialogText((LPARAM)Math::InitDegToRad, Buffer, v56); /*0x5b8c95*/
      }
    }
  }
  byte_AC1288[0] = 0; /*0x5b8c9a*/
  v57 = GetDlgItem(*v55, 1); /*0x5b8ca6*/
  if ( v57 ) /*0x5b8cb2*/
    EnableWindow(v57, 0); /*0x5b8cb7*/
  NullModemClass::Flush((NullModemClass *)&unk_A8EA70, 1); /*0x5b8cc4*/
  Debug::Log(); /*0x5b8cce*/
}



// ==== 0x005B8CE0  GameOptions::ReadSettings  this=GameOptions  sig=csp ====
char __thiscall GameOptions::ReadSettings(GameOptions *this)
{
  int v2; // edi
  HWND DlgItem; // eax
  wchar_t *StringCSF; // eax
  wchar_t *v5; // eax
  HWND v7; // eax
  HWND v8; // eax
  HWND v9; // eax
  HWND v10; // edi
  LRESULT v11; // eax
  HWND v12; // eax
  HWND v13; // eax
  HWND v14; // eax
  HWND v15; // eax
  HWND v16; // eax
  HWND v17; // eax
  HWND v18; // eax
  HWND v19; // eax
  HWND v20; // eax
  HWND v21; // eax
  HWND v22; // eax
  HWND v23; // eax
  HWND v24; // eax
  HWND v25; // eax
  HWND v26; // eax
  HWND v27; // eax
  int v28; // [esp+0h] [ebp-23Ch]
  wchar_t *Format; // [esp+10h] [ebp-22Ch]
  char lParam[40]; // [esp+14h] [ebp-228h] BYREF
  int Buffer[128]; // [esp+3Ch] [ebp-200h] BYREF

  Debug::Log(); /*0x5b8cf1*/
  Format = (wchar_t *)ReadPlayerCountMap(*(int *)&stru_A8B250.__pad_0[4]); /*0x5b8d0a*/
  v2 = 2; /*0x5b8d16*/
  DlgItem = GetDlgItem(*(HWND *)this->__pad_0, 1362); /*0x5b8d1b*/
  if ( DlgItem ) /*0x5b8d25*/
    v2 = SendMessageA(DlgItem, 0x400u, 0, 0) + 2; /*0x5b8d35*/
  if ( (int)Format >= v2 ) /*0x5b8d3e*/
  {
    v7 = GetDlgItem(*(HWND *)this->__pad_0, 1473); /*0x5b8dad*/
    if ( v7 ) /*0x5b8db1*/
    {
      SendMessageA(v7, 0x4B3u, 0x14u, (LPARAM)lParam); /*0x5b8dc0*/
      CopyWideToChar(unk_A8B380, lParam, -1); /*0x5b8dcd*/
    }
    Debug::Log(); /*0x5b8ddc*/
    v8 = GetDlgItem(*(HWND *)this->__pad_0, 1029); /*0x5b8dec*/
    if ( v8 ) /*0x5b8df0*/
      dword_A8B394 = SendMessageA(v8, 0x147u, 0, 0); /*0x5b8dfe*/
    Debug::Log(); /*0x5b8e0e*/
    v9 = GetDlgItem(*(HWND *)this->__pad_0, 1639); /*0x5b8e1e*/
    v10 = v9; /*0x5b8e20*/
    if ( v9 ) /*0x5b8e24*/
    {
      v11 = SendMessageA(v9, 0x147u, 0, 0); /*0x5b8e30*/
      dword_A8B3AC = SendMessageA(v10, 0x150u, v11, 0); /*0x5b8e3d*/
    }
    v12 = GetDlgItem(*(HWND *)this->__pad_0, 1641); /*0x5b8e4a*/
    if ( v12 ) /*0x5b8e4e*/
      *(_DWORD *)&stru_A8B250.__pad_0[32] = SendMessageA(v12, 0x400u, 0, 0); /*0x5b8e5c*/
    Debug::Log(); /*0x5b8e6c*/
    v13 = GetDlgItem(*(HWND *)this->__pad_0, 1360); /*0x5b8e7c*/
    if ( v13 ) /*0x5b8e80*/
      g_RulesInitConfig = SendMessageA(v13, 0x400u, 0, 0); /*0x5b8e8e*/
    Debug::Log(); /*0x5b8e9f*/
    v14 = GetDlgItem(*(HWND *)this->__pad_0, 1026); /*0x5b8eaf*/
    if ( v14 ) /*0x5b8eb3*/
      *(_DWORD *)&stru_A8B250.__pad_0[12] = SendMessageA(v14, 0x400u, 0, 0); /*0x5b8ec1*/
    Debug::Log(); /*0x5b8ed2*/
    v15 = GetDlgItem(*(HWND *)this->__pad_0, 1362); /*0x5b8ee2*/
    if ( v15 ) /*0x5b8ee6*/
      *(_DWORD *)&stru_A8B250.__pad_0[36] = SendMessageA(v15, 0x400u, 0, 0); /*0x5b8ef4*/
    Debug::Log(); /*0x5b8f04*/
    v16 = GetDlgItem(*(HWND *)this->__pad_0, 1321); /*0x5b8f14*/
    if ( v16 ) /*0x5b8f18*/
      *(_DWORD *)&stru_A8B250.__pad_0[24] = 6 - SendMessageA(v16, 0x400u, 0, 0); /*0x5b8f2d*/
    Debug::Log(); /*0x5b8f41*/
    v17 = GetDlgItem(*(HWND *)this->__pad_0, 1363); /*0x5b8f51*/
    if ( v17 ) /*0x5b8f55*/
      *(_DWORD *)&stru_A8B250.__pad_0[40] = SendMessageA(v17, 0x400u, 0, 0); /*0x5b8f63*/
    Debug::Log(); /*0x5b8f73*/
    v18 = GetDlgItem(*(HWND *)this->__pad_0, 1643); /*0x5b8f83*/
    if ( v18 ) /*0x5b8f87*/
      dword_A8B320 = SendMessageA(v18, 0xF0u, 0, 0) == 1; /*0x5b8f98*/
    Debug::Log(); /*0x5b8fb8*/
    v19 = GetDlgItem(*(HWND *)this->__pad_0, 1642); /*0x5b8fc8*/
    if ( v19 ) /*0x5b8fcc*/
      stru_A8B250.__pad_0[8] = SendMessageA(v19, 0xF0u, 0, 0) == 1; /*0x5b8fdd*/
    Debug::Log(); /*0x5b8ffd*/
    v20 = GetDlgItem(*(HWND *)this->__pad_0, 1356); /*0x5b900d*/
    if ( v20 ) /*0x5b9011*/
      stru_A8B250.__pad_0[17] = SendMessageA(v20, 0xF0u, 0, 0) == 1; /*0x5b9022*/
    Debug::Log(); /*0x5b9042*/
    v21 = GetDlgItem(*(HWND *)this->__pad_0, 1357); /*0x5b9052*/
    if ( v21 ) /*0x5b9056*/
      byte_A8B31F = SendMessageA(v21, 0xF0u, 0, 0) == 1; /*0x5b9067*/
    Debug::Log(); /*0x5b9087*/
    v22 = GetDlgItem(*(HWND *)this->__pad_0, 1572); /*0x5b9097*/
    if ( v22 ) /*0x5b909b*/
      stru_A8B250.__pad_0[16] = SendMessageA(v22, 0xF0u, 0, 0) == 1; /*0x5b90ac*/
    Debug::Log(); /*0x5b90cc*/
    v23 = GetDlgItem(*(HWND *)this->__pad_0, 1430); /*0x5b90dc*/
    if ( v23 ) /*0x5b90e0*/
      byte_A8B31D = SendMessageA(v23, 0xF0u, 0, 0) == 1; /*0x5b90f1*/
    Debug::Log(); /*0x5b9111*/
    v24 = GetDlgItem(*(HWND *)this->__pad_0, 1358); /*0x5b9121*/
    if ( v24 ) /*0x5b9125*/
      stru_A8B250.__pad_0[18] = SendMessageA(v24, 0xF0u, 0, 0) == 1; /*0x5b9136*/
    Debug::Log(); /*0x5b9156*/
    v25 = GetDlgItem(*(HWND *)this->__pad_0, 1690); /*0x5b9166*/
    if ( v25 ) /*0x5b916a*/
      stru_A8B250.__pad_0[19] = SendMessageA(v25, 0xF0u, 0, 0) == 1; /*0x5b917e*/
    Debug::Log(); /*0x5b919c*/
    v26 = GetDlgItem(*(HWND *)this->__pad_0, 1693); /*0x5b91ac*/
    if ( v26 ) /*0x5b91b0*/
      stru_A8B250.__pad_0[20] = SendMessageA(v26, 0xF0u, 0, 0) == 1; /*0x5b91c4*/
    Debug::Log(); /*0x5b91e3*/
    v27 = GetDlgItem(*(HWND *)this->__pad_0, 1361); /*0x5b91f3*/
    if ( v27 ) /*0x5b91f7*/
      stru_A8B250.__pad_0[28] = SendMessageA(v27, 0xF0u, 0, 0) == 1; /*0x5b9208*/
    Debug::Log(); /*0x5b9228*/
    Debug::Log(); /*0x5b9232*/
    return 1; /*0x5b923a*/
  }
  else
  {
    StringCSF = GetStringCSF((wchar_t *)&stru_82BA00.__pad_F70[140], 0, &stru_82BA00.__pad_F70[52], 759); /*0x5b8d52*/
    swprintf((wchar_t *const)Buffer, (const size_t)StringCSF, Format); /*0x5b8d5d*/
    v5 = GetStringCSF(g_Str_TXT_OK, 0, &stru_82BA00.__pad_F70[52], 760); /*0x5b8d84*/
    Dialog::ShowMessageBox(Buffer, v5, 0, 0, 0, v28); /*0x5b8d93*/
    return 0; /*0x5b8d9b*/
  }
}



// ==== 0x005B9250  ObjectClass::method_5B9250  this=ObjectClass  sig=csp ====
int __thiscall sub_5B9250(ObjectClass *this)
{
  int result; // eax
  HWND v3; // esi
  char *v4; // eax
  unsigned int v5; // edi
  HWND v6; // esi
  int (__usercall *v7)@<eax>(char@<cf>, char@<zf>); // edi
  HWND ptr_0; // [esp-8h] [ebp-518h]
  int v9; // [esp+0h] [ebp-510h] BYREF
  wchar_t *Format; // [esp+10h] [ebp-500h]
  int v11[62]; // [esp+14h] [ebp-4FCh] BYREF
  __int16 v12; // [esp+10Ch] [ebp-404h]
  wchar_t lParam[256]; // [esp+110h] [ebp-400h] BYREF
  wchar_t Buffer[256]; // [esp+310h] [ebp-200h] BYREF

  memset(lParam, 0, sizeof(lParam)); /*0x5b9270*/
  result = (int)GetDlgItem((HWND)this->AbstractClass, 1344); /*0x5b927a*/
  v3 = (HWND)result; /*0x5b927c*/
  if ( result ) /*0x5b9280*/
  {
    SendMessageA((HWND)result, 0x4B3u, 0x100u, (LPARAM)lParam); /*0x5b929f*/
    SendMessageA(v3, 0x4B2u, 0, (LPARAM)&g_TypeClass_DefaultString); /*0x5b92ae*/
    result = wcslen(lParam); /*0x5b92b8*/
    if ( result ) /*0x5b92c2*/
    {
      if ( lParam[0] != 13 ) /*0x5b92d1*/
      {
        WideString::Trim(lParam); /*0x5b92de*/
        result = (int)lParam; /*0x5b92e3*/
        if ( &v9 != (int *)-272 ) /*0x5b92ec*/
        {
          memset(v11, 0, sizeof(v11)); /*0x5b9301*/
          v12 = 0; /*0x5b9303*/
          v11[0] = 104; /*0x5b930f*/
          strcpy((char *)&v11[1], unk_A8B380); /*0x5b932d*/
          LOBYTE(v11[6]) = dword_A8B394; /*0x5b9342*/
          wcscpy((wchar_t *)((char *)&v11[6] + 1), lParam); /*0x5b9346*/
          Stream::WriteBlock((int *)&unk_A8EA70, (int)v11, 250, 1); /*0x5b935f*/
          Stream::ReadPacket((int)&unk_A8EA70); /*0x5b9369*/
          v4 = CharToWideString(unk_A8B380); /*0x5b9373*/
          v5 = dword_A8B394; /*0x5b937a*/
          ptr_0 = (HWND)this->AbstractClass; /*0x5b9385*/
          Format = (wchar_t *)v4; /*0x5b9386*/
          result = (int)GetDlgItem(ptr_0, 1343); /*0x5b938a*/
          v6 = (HWND)result; /*0x5b938c*/
          if ( result ) /*0x5b9390*/
          {
            if ( v5 >= 8 ) /*0x5b9394*/
              v7 = Math::InitDegToRad; /*0x5b93a4*/
            else
              v7 = (int (__usercall *)@<eax>(char@<cf>, char@<zf>))dword_8316A8[v5]; /*0x5b939b*/
            swprintf(Buffer, (const size_t)g_Str_Trace___s_, Format, lParam); /*0x5b93c4*/
            return DrawDialogText((LPARAM)v7, Buffer, v6); /*0x5b93d6*/
          }
        }
      }
    }
  }
  return result; /*0x5b93db*/
}



// ==== 0x005B93F0  ObjectClass::method_5B93F0  this=ObjectClass  sig=csp ====
char __thiscall sub_5B93F0(ObjectClass *this)
{
  HWND DlgItem; // eax
  HWND v3; // esi

  DlgItem = GetDlgItem((HWND)this->AbstractClass, 1639); /*0x5b93fd*/
  v3 = DlgItem; /*0x5b9403*/
  if ( DlgItem ) /*0x5b9407*/
  {
    DlgItem = (HWND)SendMessageA(DlgItem, 0x147u, 0, 0); /*0x5b9419*/
    if ( DlgItem != HWND_MESSAGE|0x2 ) /*0x5b941e*/
    {
      DlgItem = (HWND)SendMessageA(v3, 0x150u, (WPARAM)DlgItem, 0); /*0x5b9429*/
      if ( DlgItem != HWND_MESSAGE|0x2 ) /*0x5b942e*/
      {
        dword_A8B3AC = (int)DlgItem; /*0x5b9430*/
        BYTE1(this->?) = 1; /*0x5b9437*/
        LOBYTE(this->?) = 1; /*0x5b943a*/
        LOBYTE(DlgItem) = 1; /*0x5b9435*/
      }
    }
  }
  return (char)DlgItem; /*0x5b943d*/
}



// ==== 0x005B9450  ObjectClass::method_5B9450  this=ObjectClass  sig=csp ====
unsigned int __thiscall sub_5B9450(ObjectClass *this)
{
  unsigned int result; // eax
  HWND v3; // edi

  result = (unsigned int)GetDlgItem((HWND)this->AbstractClass, 1029); /*0x5b945d*/
  v3 = (HWND)result; /*0x5b9463*/
  if ( result ) /*0x5b9467*/
  {
    result = SendMessageA((HWND)result, 0x147u, 0, 0); /*0x5b9479*/
    if ( result != -1 ) /*0x5b947e*/
    {
      dword_A8B394 = result; /*0x5b9482*/
      BYTE1(this->?) = 1; /*0x5b9489*/
      LOBYTE(this->?) = 1; /*0x5b948c*/
      if ( result >= 8 ) /*0x5b948f*/
        return SendMessageA(v3, 0x498u, 0, (LPARAM)Math::InitDegToRad); /*0x5b94ba*/
      else
        return SendMessageA(v3, 0x498u, 0, dword_8316A8[result]); /*0x5b94a6*/
    }
  }
  return result; /*0x5b94a8*/
}



// ==== 0x005B94C0  ObjectClass::method_5B94C0  this=ObjectClass  sig=csp ====
char __thiscall sub_5B94C0(ObjectClass *this, char a2)
{
  HWND DlgItem; // eax
  HWND v4; // esi
  wchar_t lParam[20]; // [esp+8h] [ebp-28h] BYREF

  DlgItem = GetDlgItem((HWND)this->AbstractClass, 1473); /*0x5b94cf*/
  v4 = DlgItem; /*0x5b94d5*/
  if ( DlgItem ) /*0x5b94d9*/
  {
    SendMessageA(DlgItem, 0x4B3u, 0x14u, (LPARAM)lParam); /*0x5b94ef*/
    WideString::Trim(lParam); /*0x5b94f5*/
    if ( !a2 ) /*0x5b9500*/
      SendMessageA(v4, 0x4B2u, 0, (LPARAM)lParam); /*0x5b950f*/
    strcpy(unk_A8B380, ToWideStringChar((char *)lParam)); /*0x5b9533*/
    BYTE1(this->?) = 1; /*0x5b953e*/
    LOBYTE(this->?) = 1; /*0x5b9541*/
    LOBYTE(DlgItem) = 1; /*0x5b9537*/
  }
  return (char)DlgItem; /*0x5b9545*/
}



// ==== 0x005B9550  ModemGuest::UpdateGuestPlayerInfo  this=ModemGuest  sig=csp ====
int __thiscall sub_5B9550(char *this, wchar_t *Source, unsigned int a3, int a4)
{
  wchar_t *v5; // edi
  int result; // eax
  HWND v7; // edx
  HWND DlgItem; // edi
  int (__usercall *v9)@<eax>(char@<cf>, char@<zf>); // ebx
  wchar_t lParam[80]; // [esp+10h] [ebp-A0h] BYREF

  v5 = (wchar_t *)(this + 34); /*0x5b9564*/
  if ( _wcsicmp((const wchar_t *)this + 17, Source) /*0x5b958c*/
    || *((_DWORD *)this + 19) != a3
    || (result = a4, *((_DWORD *)this + 20) != a4) )
  {
    wcscpy(v5, Source); /*0x5b9594*/
    v7 = *(HWND *)this; /*0x5b9599*/
    *((_DWORD *)this + 19) = a3; /*0x5b95a5*/
    *((_DWORD *)this + 20) = a4; /*0x5b95a8*/
    DlgItem = GetDlgItem(v7, 1640); /*0x5b95b7*/
    if ( DlgItem ) /*0x5b95bb*/
    {
      swprintf(lParam, (const size_t)&aSS, Source, *(_DWORD *)(*((_DWORD *)dword_A83C9C + a4) + 96)); /*0x5b95db*/
      SendMessageA(DlgItem, 0x4B2u, 0, (LPARAM)lParam); /*0x5b95f6*/
      if ( a3 >= 8 ) /*0x5b95fa*/
        v9 = Math::InitDegToRad; /*0x5b960a*/
      else
        v9 = (int (__usercall *)@<eax>(char@<cf>, char@<zf>))dword_8316A8[a3]; /*0x5b9601*/
      SendMessageA(DlgItem, 0x498u, 0, (LPARAM)v9); /*0x5b9619*/
    }
    result = PlayVocClass(HIDWORD(dword_8871E0->MovieOff), 0x2000, 1.0, 0); /*0x5b9632*/
  }
  this->u32_9 = 1; /*0x5b9637*/
  return result; /*0x5b963b*/
}



// ==== 0x005B9680  NetworkGameSetup::ReadRulesInitConfig  this=NetworkGameSetup  sig=csp ====
int __thiscall NetworkGameSetup::ReadRulesInitConfig(NetworkGameSetup *this)
{
  int result; // eax

  result = (int)GetDlgItem(*(HWND *)this->__pad_0, 1360); /*0x5b968b*/
  if ( result ) /*0x5b9693*/
  {
    result = SendMessageA((HWND)result, 0x400u, 0, 0); /*0x5b969f*/
    g_RulesInitConfig = result; /*0x5b96a5*/
    BYTE1(this->NetworkGameSetup_field_0x08) = 1; /*0x5b96aa*/
  }
  return result; /*0x5b96ae*/
}



// ==== 0x005B96B0  NetworkGameSetup::ReadRulesBases  this=NetworkGameSetup  sig=csp ====
int __thiscall NetworkGameSetup::ReadRulesBases(NetworkGameSetup *this)
{
  int result; // eax

  result = (int)GetDlgItem(*(HWND *)this->__pad_0, 1026); /*0x5b96bb*/
  if ( result ) /*0x5b96c3*/
  {
    result = SendMessageA((HWND)result, 0x400u, 0, 0); /*0x5b96cf*/
    *(_DWORD *)&stru_A8B250.__pad_0[12] = result; /*0x5b96d5*/
    BYTE1(this->NetworkGameSetup_field_0x08) = 1; /*0x5b96da*/
  }
  return result; /*0x5b96de*/
}



// ==== 0x005B96E0  NetworkGameSetup::ReadRulesAlliesAllowed  this=NetworkGameSetup  sig=csp ====
int __thiscall NetworkGameSetup::ReadRulesAlliesAllowed(NetworkGameSetup *this)
{
  int result; // eax

  result = (int)GetDlgItem(*(HWND *)this->__pad_0, 1362); /*0x5b96eb*/
  if ( result ) /*0x5b96f3*/
  {
    result = SendMessageA((HWND)result, 0x400u, 0, 0); /*0x5b96ff*/
    *(_DWORD *)&stru_A8B250.__pad_0[36] = result; /*0x5b9705*/
    BYTE1(this->NetworkGameSetup_field_0x08) = 1; /*0x5b970a*/
  }
  return result; /*0x5b970e*/
}



// ==== 0x005B9710  NetworkGameSetup::ReadRulesEngineerCount  this=NetworkGameSetup  sig=csp ====
int __thiscall NetworkGameSetup::ReadRulesEngineerCount(NetworkGameSetup *this)
{
  int result; // eax

  result = (int)GetDlgItem(*(HWND *)this->__pad_0, 1321); /*0x5b971b*/
  if ( result ) /*0x5b9723*/
  {
    result = SendMessageA((HWND)result, 0x400u, 0, 0); /*0x5b972f*/
    *(_DWORD *)&stru_A8B250.__pad_0[24] = 6 - result; /*0x5b973c*/
    BYTE1(this->NetworkGameSetup_field_0x08) = 1; /*0x5b9742*/
  }
  return result; /*0x5b9746*/
}



// ==== 0x005B9750  NetworkGameSetup::ReadRulesUnknown  this=NetworkGameSetup  sig=csp ====
int __thiscall NetworkGameSetup::ReadRulesUnknown(NetworkGameSetup *this)
{
  int result; // eax

  result = (int)GetDlgItem(*(HWND *)this->__pad_0, 1363); /*0x5b975b*/
  if ( result ) /*0x5b9763*/
  {
    result = SendMessageA((HWND)result, 0x400u, 0, 0); /*0x5b976f*/
    *(_DWORD *)&stru_A8B250.__pad_0[40] = result; /*0x5b9775*/
    BYTE1(this->NetworkGameSetup_field_0x08) = 1; /*0x5b977a*/
  }
  return result; /*0x5b977e*/
}



// ==== 0x005B9A60  SkirmishDialog::HandleGameStart  this=SkirmishDialog  sig=csp ====
void __thiscall SkirmishDialog::HandleGameStart(SkirmishDialog *this)
{
  int v2; // ebp
  Skirmish *v3; // esi
  ObjectClass *v4; // eax
  Skirmish *v5; // eax
  HWND DlgItem; // eax
  Skirmish *v7; // esi
  ObjectClass *v8; // eax
  Skirmish *v9; // eax
  char v10[132]; // [esp+10h] [ebp-188h] BYREF
  wchar_t Destination[130]; // [esp+94h] [ebp-104h] BYREF

  Debug::Log(); /*0x5b9a71*/
  v2 = *(_DWORD *)&stru_A8B250.__pad_0[4]; /*0x5b9a8a*/
  strcpy(v10, byte_A8B8E0); /*0x5b9a9e*/
  wcscpy(Destination, MEMORY[0xA8B322]); /*0x5b9aaf*/
  ShowWindow(*(HWND *)this->__pad_0, 0); /*0x5b9ac2*/
  if ( SkirmishDialog::Show(g_hWnd, (int)this, v2) == 2 ) /*0x5b9ad2*/
  {
    *(_DWORD *)&stru_A8B250.__pad_0[4] = v2; /*0x5b9ada*/
    LoadScenarioClassByIndex(v2); /*0x5b9ae0*/
    Session::PrepareGame(*(Session **)this->__pad_0); /*0x5b9ae7*/
    ShowWindow(*(HWND *)this->__pad_0, 5); /*0x5b9af1*/
    if ( _strcmpi((char *)(*(_DWORD *)(dword_A8B8CC + 4 * *(_DWORD *)&stru_A8B250.__pad_0[4]) + 88), &stru_82BA00.?) ) /*0x5b9b0b*/
    {
      Session::PrepareGame(*(Session **)this->__pad_0); /*0x5b9b8c*/
      InvalidateRect(*(HWND *)this->__pad_0, 0, 0); /*0x5b9b98*/
    }
    else
    {
      v3 = g_UIControlState; /*0x5b9b1d*/
      if ( g_UIControlState ) /*0x5b9b25*/
      {
        ComPtr::Dtor((ComPtr *)g_UIControlState); /*0x5b9b29*/
        __3_YAXPAX_Z(v3); /*0x5b9b2f*/
      }
      v4 = (ObjectClass *)__2_YAPAXI_Z(4u); /*0x5b9b39*/
      if ( v4 ) /*0x5b9b43*/
        v5 = (Skirmish *)unknown_libname_27(v4); /*0x5b9b47*/
      else
        v5 = 0; /*0x5b9b4e*/
      g_UIControlState = v5; /*0x5b9b57*/
      Surface::LoadToSurfaceSHP((Surface *)v5, ExistingFileName); /*0x5b9b5c*/
      if ( !*(_DWORD *)g_UIControlState ) /*0x5b9b67*/
        Session::PrepareGame(*(Session **)this->__pad_0); /*0x5b9b6e*/
      InvalidateRect(*(HWND *)this->__pad_0, 0, 0); /*0x5b9b7a*/
      InvalidateRect(*(HWND *)this->__pad_0, 0, 0); /*0x5b9b83*/
    }
  }
  else
  {
    ShowWindow(*(HWND *)this->__pad_0, 5); /*0x5b9ba4*/
    if ( LoadScenarioClassByIndex(*(int *)&stru_A8B250.__pad_0[4]) == 1 ) /*0x5b9bb3*/
    {
      DlgItem = GetDlgItem(*(HWND *)this->__pad_0, 1448); /*0x5b9bc1*/
      SendMessageA(DlgItem, 0x4B2u, 0, 11055906); /*0x5b9bd4*/
      if ( _strcmpi((char *)(*(_DWORD *)(dword_A8B8CC + 4 * *(_DWORD *)&stru_A8B250.__pad_0[4]) + 88), &stru_82BA00.?) ) /*0x5b9bf1*/
      {
        Session::PrepareGame(*(Session **)this->__pad_0); /*0x5b9c64*/
      }
      else
      {
        v7 = g_UIControlState; /*0x5b9bfd*/
        if ( g_UIControlState ) /*0x5b9c05*/
        {
          ComPtr::Dtor((ComPtr *)g_UIControlState); /*0x5b9c09*/
          __3_YAXPAX_Z(v7); /*0x5b9c0f*/
          v8 = (ObjectClass *)__2_YAPAXI_Z(4u); /*0x5b9c19*/
          if ( v8 ) /*0x5b9c23*/
            v9 = (Skirmish *)unknown_libname_27(v8); /*0x5b9c27*/
          else
            v9 = 0; /*0x5b9c2e*/
          g_UIControlState = v9; /*0x5b9c37*/
          Surface::LoadToSurfaceSHP((Surface *)v9, ExistingFileName); /*0x5b9c3c*/
          v7 = g_UIControlState; /*0x5b9c41*/
        }
        if ( !*(_DWORD *)v7 ) /*0x5b9c47*/
          Session::PrepareGame(*(Session **)this->__pad_0); /*0x5b9c4e*/
        InvalidateRect(*(HWND *)this->__pad_0, 0, 0); /*0x5b9c5a*/
      }
    }
    else
    {
      *(_DWORD *)&stru_A8B250.__pad_0[4] = v2; /*0x5b9c6b*/
    }
  }
  BYTE1(this->SkirmishDialog_field_0x08) = 1; /*0x5b9c76*/
  Debug::Log(); /*0x5b9c7a*/
}



// ==== 0x005B9C90  RandomMap::RegenerateRandomMapPreview  this=RandomMap  sig=csp ====
void __thiscall RandomMap::RegenerateRandomMapPreview(RandomMap *this)
{
  Skirmish *v2; // esi
  HWND DlgItem; // eax
  char v4; // bl
  int v5; // esi
  char *v6; // eax
  char *v7; // edi
  SessionClass *v8; // eax
  wchar_t *v9; // ebx
  int v10; // eax
  AbstractClass *v11; // eax
  _DWORD *v12; // eax
  char v13; // bl
  ObjectClass *v14; // eax
  Skirmish *v15; // eax
  CCFileClass v17; // [esp+8h] [ebp-6Ch] BYREF
  int v18[3]; // [esp+60h] [ebp-14h] BYREF
  int v19; // [esp+6Ch] [ebp-8h]

  Debug::Log(); /*0x5b9c9f*/
  byte_8316D4 = 0; /*0x5b9cac*/
  if ( CCFileClass::Load((CCFileClass *)&loc_5BB260) == 1 ) /*0x5b9cbb*/
  {
    byte_8316D4 = 1; /*0x5b9ccd*/
    MapSeed::ValidateName((char *)&g_MissionQueueFrame.briefing[356], (int)&stru_82BA00.?); /*0x5b9cd2*/
    v2 = g_UIControlState; /*0x5b9cd7*/
    if ( g_UIControlState ) /*0x5b9cdf*/
    {
      ComPtr::Dtor((ComPtr *)g_UIControlState); /*0x5b9ce3*/
      __3_YAXPAX_Z(v2); /*0x5b9ce9*/
      g_UIControlState = 0; /*0x5b9cf1*/
    }
    DlgItem = GetDlgItem(*(HWND *)this->__pad_0, 1448); /*0x5b9d03*/
    SendMessageA(DlgItem, 0x4B2u, 0, (LPARAM)&g_MissionQueueFrame.briefing[386]); /*0x5b9d16*/
    v4 = 0; /*0x5b9d21*/
    v5 = 0; /*0x5b9d23*/
    if ( dword_A8B8D8 > 0 ) /*0x5b9d27*/
    {
      while ( _strcmpi((char *)(*(_DWORD *)(dword_A8B8CC + 4 * v5) + 88), &stru_82BA00.?) ) /*0x5b9d44*/
      {
        if ( ++v5 >= dword_A8B8D8 ) /*0x5b9d4e*/
          goto LABEL_9; /*0x5b9d4e*/
      }
      v4 = 1; /*0x5b9d52*/
    }
LABEL_9:
    v6 = GameConfig::ComputeCRC(); /*0x5b9d54*/
    v7 = v6; /*0x5b9d5b*/
    if ( v4 ) /*0x5b9d5d*/
    {
      GameOption::SetDigest(*(char **)(dword_A8B8CC + 4 * v5), v6); /*0x5b9df6*/
      GameOption::SetDescriptionWStr( /*0x5b9e08*/
        *(GameOption **)(dword_A8B8CC + 4 * v5),
        (wchar_t *)&g_MissionQueueFrame.briefing[386]);
    }
    else
    {
      v8 = (SessionClass *)__2_YAPAXI_Z(0x1BCu); /*0x5b9d68*/
      if ( v8 ) /*0x5b9d72*/
        v9 = SessionClass::ParseGameInfo( /*0x5b9d8e*/
               v8,
               &stru_82BA00.?,
               (wchar_t *)&g_MissionQueueFrame.briefing[386],
               v7,
               1,
               0,
               2,
               4);
      else
        v9 = 0; /*0x5b9d92*/
      if ( dword_A8B8D8 < dword_A8B8D0 /*0x5b9dcb*/
        || (byte_A8B8D5 || !dword_A8B8D0)
        && dword_A8B8DC > 0
        && (*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(dword_A8B8C8 + 8))(
             &dword_A8B8C8,
             dword_A8B8D0 + dword_A8B8DC,
             0) )
      {
        v10 = dword_A8B8D8++; /*0x5b9dd8*/
        *(_DWORD *)(dword_A8B8CC + 4 * v10) = v9; /*0x5b9de7*/
      }
    }
    __3_YAXPAX_Z(v7); /*0x5b9e0e*/
    if ( LoadScenarioClassByIndex(v5) == 1 ) /*0x5b9e1f*/
    {
      *(_DWORD *)&stru_A8B250.__pad_0[4] = v5; /*0x5b9e2f*/
      v11 = dword_A8B230; /*0x5b9e3b*/
      strcpy(byte_A8B8E0, &stru_82BA00.?); /*0x5b9e51*/
      strcpy((char *)&v11[130].abstractFlags, byte_A8B8E0); /*0x5b9e79*/
      v12 = CCFileClass::Construct(&v17, byte_A8B8E0); /*0x5b9e86*/
      v13 = (*(int (__thiscall **)(_DWORD *, _DWORD))(*v12 + 20))(v12, 0); /*0x5b9e98*/
      *(_DWORD *)v17.CDFileClass = &CCFileClass::`vftable'; /*0x5b9e9a*/
      v19 = 0; /*0x5b9ea2*/
      Vector::Clear((int)v18); /*0x5b9eaa*/
      *(_DWORD *)v17.CDFileClass = &off_7E1668; /*0x5b9eb3*/
      BufferIOFileClass::Dtor((BufferIOFileClass *)&v17); /*0x5b9ebb*/
      if ( v13 ) /*0x5b9ec2*/
      {
        v14 = (ObjectClass *)__2_YAPAXI_Z(4u); /*0x5b9ec6*/
        if ( v14 ) /*0x5b9ed0*/
          v15 = (Skirmish *)unknown_libname_27(v14); /*0x5b9ed4*/
        else
          v15 = 0; /*0x5b9edb*/
        g_UIControlState = v15; /*0x5b9ee4*/
        Surface::LoadToSurfaceSHP((Surface *)v15, ExistingFileName); /*0x5b9ee9*/
        PostMessageA(*(HWND *)this->__pad_0, 0xFu, 0, 0); /*0x5b9efb*/
      }
    }
    BYTE1(this->RandomMap_field_0x8) = 1; /*0x5b9f07*/
  }
  byte_8316D4 = 1; /*0x5b9f10*/
  Debug::Log(); /*0x5b9f17*/
}



// ==== 0x005B9F30  CellClass::SetOccupancy  this=ModemHost  sig=csp ====
int __thiscall CellClass::SetOccupancy(int this, char a2)
{
  int v3; // edi
  int v4; // edi
  int result; // eax
  int v6; // edi
  int v7; // edi
  int v8[62]; // [esp+Ch] [ebp-FCh] BYREF
  __int16 v9; // [esp+104h] [ebp-4h]

  Stream::ReadPacket((int)&unk_A8EA70); /*0x5b9f40*/
  if ( *(_BYTE *)(this + 9) == 1 ) /*0x5b9f4d*/
  {
    v3 = *(_DWORD *)&stru_88732C.__pad_6[14]; /*0x5b9f54*/
    if ( *(_DWORD *)&stru_88732C.__pad_6[6] != -1 ) /*0x5b9f5c*/
      v3 += Timer::GetTicks() - *(_DWORD *)&stru_88732C.__pad_6[6]; /*0x5b9f6e*/
    if ( (unsigned int)(v3 - *(_DWORD *)(this + 12)) > 0x1E ) /*0x5b9f76*/
      goto LABEL_6; /*0x5b9f76*/
  }
  if ( a2 == 1 ) /*0x5b9f80*/
  {
LABEL_6:
    Game::BuildGameSetupPacket((Game *)this); /*0x5b9f84*/
    v4 = *(_DWORD *)&stru_88732C.__pad_6[14]; /*0x5b9f8e*/
    if ( *(_DWORD *)&stru_88732C.__pad_6[6] != -1 ) /*0x5b9f96*/
      v4 += Timer::GetTicks() - *(_DWORD *)&stru_88732C.__pad_6[6]; /*0x5b9fa8*/
    *(_DWORD *)(this + 12) = v4; /*0x5b9faa*/
    *(_BYTE *)(this + 9) = 0; /*0x5b9fad*/
  }
  result = *(_DWORD *)&stru_88732C.__pad_6[6]; /*0x5b9fb1*/
  v6 = *(_DWORD *)&stru_88732C.__pad_6[14]; /*0x5b9fb6*/
  if ( *(_DWORD *)&stru_88732C.__pad_6[6] != -1 ) /*0x5b9fbe*/
  {
    result = Timer::GetTicks() - *(_DWORD *)&stru_88732C.__pad_6[6]; /*0x5b9fca*/
    v6 += result; /*0x5b9fd0*/
  }
  if ( (unsigned int)(v6 - *(_DWORD *)(this + 28)) > 0x28 ) /*0x5b9fd8*/
  {
    memset(v8, 0, sizeof(v8)); /*0x5b9fe5*/
    v9 = 0; /*0x5b9fe7*/
    v8[0] = 105; /*0x5b9fee*/
    *(int *)((char *)&v8[38] + 2) = CellClass::GetBridgeIndexThunk((NullModemClass *)&unk_A8EA70); /*0x5ba001*/
    LOBYTE(v8[6]) = dword_A8DB30; /*0x5ba018*/
    Stream::WriteBlock((int *)&unk_A8EA70, (int)v8, 250, 0); /*0x5ba01c*/
    result = *(_DWORD *)&stru_88732C.__pad_6[6]; /*0x5ba021*/
    v7 = *(_DWORD *)&stru_88732C.__pad_6[14]; /*0x5ba026*/
    if ( *(_DWORD *)&stru_88732C.__pad_6[6] != -1 ) /*0x5ba02e*/
    {
      result = Timer::GetTicks() - *(_DWORD *)&stru_88732C.__pad_6[6]; /*0x5ba03a*/
      v7 += result; /*0x5ba040*/
    }
    *(_DWORD *)(this + 28) = v7; /*0x5ba042*/
  }
  return result; /*0x5ba045*/
}



// ==== 0x005BA060  ModemGuest::ProcessPacket  this=ModemHost  sig=csp ====
char __thiscall ModemGuest::ProcessPacket(int this, char a2)
{
  int v3; // esi
  int v4; // eax
  int *v5; // eax
  int v7; // edi
  int v8; // esi
  int *v9; // eax
  int v10; // esi
  unsigned int updated; // eax
  bool v12; // cl
  int v13; // esi
  char *v14; // eax
  HWND v15; // eax
  char *v16; // eax
  int v17; // esi
  const wchar_t *v18; // ebx
  HWND DlgItem; // edi
  int (__usercall *v20)@<eax>(char@<cf>, char@<zf>); // esi
  int v21; // esi
  int *v22; // eax
  char v23; // al
  int v24; // esi
  int *v25; // [esp-14h] [ebp-334h]
  int *v26; // [esp-14h] [ebp-334h]
  int *v27; // [esp-14h] [ebp-334h]
  wchar_t *v28; // [esp-10h] [ebp-330h]
  wchar_t *v29; // [esp-10h] [ebp-330h]
  wchar_t *v30; // [esp-10h] [ebp-330h]
  wchar_t *v31; // [esp-10h] [ebp-330h]
  wchar_t *v32; // [esp-10h] [ebp-330h]
  wchar_t *StringCSF; // [esp-10h] [ebp-330h]
  ObjectClass *v34; // [esp+0h] [ebp-320h] BYREF
  const wchar_t *v35; // [esp+10h] [ebp-310h]
  const wchar_t *v36; // [esp+14h] [ebp-30Ch]
  const wchar_t *v37; // [esp+18h] [ebp-308h]
  const wchar_t *v38; // [esp+1Ch] [ebp-304h]
  int v39; // [esp+20h] [ebp-300h] BYREF
  int v40; // [esp+24h] [ebp-2FCh] BYREF
  _BYTE v41[20]; // [esp+28h] [ebp-2F8h] BYREF
  _BYTE v42[6]; // [esp+3Ch] [ebp-2E4h] BYREF
  unsigned int v43; // [esp+42h] [ebp-2DEh]
  unsigned int v44; // [esp+46h] [ebp-2DAh]
  int v45; // [esp+AAh] [ebp-276h]
  int v46; // [esp+BEh] [ebp-262h]
  int v47; // [esp+F4h] [ebp-22Ch]
  int v48; // [esp+F8h] [ebp-228h]
  wchar_t Buffer[256]; // [esp+120h] [ebp-200h] BYREF

  if ( ObjectTypeClass::CreateInstance(&unk_A8EA70, (int)&v40, (int)&v39) <= 0 ) /*0x5ba082*/
  {
LABEL_48:
    v21 = *(_DWORD *)&stru_88732C.__pad_6[14]; /*0x5ba4f6*/
    if ( *(_DWORD *)&stru_88732C.__pad_6[6] != -1 ) /*0x5ba503*/
      v21 += Timer::GetTicks() - *(_DWORD *)&stru_88732C.__pad_6[6]; /*0x5ba515*/
    if ( (unsigned int)(v21 - *(_DWORD *)(this + 20)) <= *(_DWORD *)(this + 24) ) /*0x5ba521*/
    {
      return 0; /*0x5ba616*/
    }
    else
    {
      Debug::Log(); /*0x5ba52d*/
      if ( !a2 ) /*0x5ba53e*/
      {
        v35 = asc_82083C; /*0x5ba557*/
        StringCSF = GetStringCSF(g_Str_TXT_OK, 0, &stru_82BA00.__pad_F70[52], 2197); /*0x5ba564*/
        v22 = (int *)GetStringCSF((wchar_t *)&stru_82BA00.?, 0, &stru_82BA00.__pad_F70[52], 2197); /*0x5ba576*/
        Dialog::ShowMessageBox(v22, StringCSF, 0, 0, 0, (int)v34); /*0x5ba580*/
      }
      return 1; /*0x5ba588*/
    }
  }
  else
  {
    v3 = *(_DWORD *)&stru_88732C.__pad_6[14]; /*0x5ba08d*/
    if ( *(_DWORD *)&stru_88732C.__pad_6[6] != -1 ) /*0x5ba098*/
      v3 += Timer::GetTicks() - *(_DWORD *)&stru_88732C.__pad_6[6]; /*0x5ba0aa*/
    v4 = v40; /*0x5ba0ac*/
    *(_DWORD *)(this + 20) = v3; /*0x5ba0b0*/
    *(_DWORD *)(this + 24) = 1200; /*0x5ba0b6*/
    if ( v4 < 100 || v4 >= 109 || v4 == 104 || v42[0] != dword_A8DB30 ) /*0x5ba0e7*/
    {
      switch ( v4 ) /*0x5ba16d*/
      {
        case 'e': /*0x5ba16d*/
          Debug::Log(); /*0x5ba268*/
          updated = NetworkBuffer::UpdateWindow((NetworkBuffer *)&stru_A8EB00.?[252], v43, v44); /*0x5ba27f*/
          if ( updated ) /*0x5ba286*/
          {
            if ( updated == -1 ) /*0x5ba2de*/
            {
              if ( !a2 ) /*0x5ba2e9*/
              {
                v37 = asc_82083C; /*0x5ba306*/
                v31 = GetStringCSF(g_Str_TXT_OK, 0, &stru_82BA00.__pad_F70[52], 2068); /*0x5ba313*/
                v26 = (int *)GetStringCSF((wchar_t *)stru_82BA00.?, 0, &stru_82BA00.__pad_F70[52], 2068); /*0x5ba32a*/
                Dialog::ShowMessageBox(v26, v31, 0, 0, 0, (int)v34); /*0x5ba32f*/
              }
            }
            else
            {
              v12 = v45 == *(_DWORD *)(this + 84); /*0x5ba344*/
              if ( v47 != *(_DWORD *)(this + 92) ) /*0x5ba352*/
                v12 = 0; /*0x5ba354*/
              if ( v48 == *(_DWORD *)(this + 88) && v12 ) /*0x5ba366*/
              {
                dword_A8B24C = Network::GetMaxPacketSize(updated); /*0x5ba3fe*/
                v14 = CharToWideString(v41); /*0x5ba403*/
                ModemGuest::UpdateGuestPlayerInfo((char *)this, (wchar_t *)v14, v42[5], *(int *)&v42[1]); /*0x5ba416*/
                *(_BYTE *)(this + 32) = 1; /*0x5ba41b*/
                goto LABEL_48; /*0x5ba41f*/
              }
              if ( !a2 ) /*0x5ba375*/
              {
                v35 = asc_82083C; /*0x5ba38e*/
                v32 = GetStringCSF(g_Str_TXT_OK, 0, &stru_82BA00.__pad_F70[52], 2129); /*0x5ba39b*/
                v27 = (int *)GetStringCSF((wchar_t *)&stru_82BA00.?, 0, &stru_82BA00.__pad_F70[52], 2129); /*0x5ba3b2*/
                Dialog::ShowMessageBox(v27, v32, 0, 0, 0, (int)v34); /*0x5ba3b7*/
              }
            }
          }
          else if ( !a2 ) /*0x5ba291*/
          {
            v38 = asc_82083C; /*0x5ba2ae*/
            v30 = GetStringCSF(g_Str_TXT_OK, 0, &stru_82BA00.__pad_F70[52], 2059); /*0x5ba2bb*/
            v25 = (int *)GetStringCSF((wchar_t *)stru_82BA00.?, 0, &stru_82BA00.__pad_F70[52], 2059); /*0x5ba2d2*/
            Dialog::ShowMessageBox(v25, v30, 0, 0, 0, (int)v34); /*0x5ba2d7*/
          }
          v13 = *(_DWORD *)&stru_88732C.__pad_6[14]; /*0x5ba3c1*/
          if ( *(_DWORD *)&stru_88732C.__pad_6[6] != -1 ) /*0x5ba3c9*/
            v13 += Timer::GetTicks() - *(_DWORD *)&stru_88732C.__pad_6[6]; /*0x5ba3db*/
          *(_DWORD *)(this + 20) = v13; /*0x5ba3dd*/
          break; /*0x5ba3dd*/
        case 'f': /*0x5ba16d*/
          Debug::Log(); /*0x5ba179*/
          v7 = *(_DWORD *)&stru_88732C.__pad_6[14]; /*0x5ba183*/
          if ( *(_DWORD *)&stru_88732C.__pad_6[6] != -1 ) /*0x5ba18e*/
            v7 += Timer::GetTicks() - *(_DWORD *)&stru_88732C.__pad_6[6]; /*0x5ba1a0*/
          while ( 1 ) /*0x5ba1a7*/
          {
            v8 = *(_DWORD *)&stru_88732C.__pad_6[14]; /*0x5ba1a7*/
            if ( *(_DWORD *)&stru_88732C.__pad_6[6] != -1 ) /*0x5ba1af*/
              v8 += Timer::GetTicks() - *(_DWORD *)&stru_88732C.__pad_6[6]; /*0x5ba1c1*/
            if ( (unsigned int)(v8 - v7) >= 0x3C ) /*0x5ba1c8*/
              break; /*0x5ba1c8*/
            Event::Dispatch(); /*0x5ba1ca*/
            Stream::ReadPacket((int)&unk_A8EA70); /*0x5ba1d4*/
          }
          if ( !a2 ) /*0x5ba1e4*/
          {
            v36 = asc_82083C; /*0x5ba1fd*/
            v29 = GetStringCSF(g_Str_TXT_OK, 0, &stru_82BA00.__pad_F70[52], 2038); /*0x5ba20a*/
            v9 = (int *)GetStringCSF((wchar_t *)stru_82BA00.?, 0, &stru_82BA00.__pad_F70[52], 2038); /*0x5ba21c*/
            Dialog::ShowMessageBox(v9, v29, 0, 0, 0, (int)v34); /*0x5ba226*/
          }
          v10 = *(_DWORD *)&stru_88732C.__pad_6[14]; /*0x5ba230*/
          if ( *(_DWORD *)&stru_88732C.__pad_6[6] != -1 ) /*0x5ba238*/
            v10 += Timer::GetTicks() - *(_DWORD *)&stru_88732C.__pad_6[6]; /*0x5ba24a*/
          *(_DWORD *)(this + 20) = v10; /*0x5ba24c*/
          Network::CleanupOnDisconnect(); /*0x5ba24f*/
          return 1; /*0x5ba260*/
        case 'h': /*0x5ba16d*/
          Debug::Log(); /*0x5ba450*/
          v16 = CharToWideString(v41); /*0x5ba45c*/
          v17 = v42[0]; /*0x5ba469*/
          v18 = (const wchar_t *)v16; /*0x5ba46f*/
          if ( &v34 != (ObjectClass **)-61 ) /*0x5ba473*/
          {
            DlgItem = GetDlgItem(*(HWND *)this, 1343); /*0x5ba484*/
            if ( DlgItem ) /*0x5ba488*/
            {
              if ( v17 >= 8 ) /*0x5ba491*/
                v20 = Math::InitDegToRad; /*0x5ba49c*/
              else
                v20 = (int (__usercall *)@<eax>(char@<cf>, char@<zf>))dword_8316A8[v17]; /*0x5ba493*/
              swprintf(Buffer, (const size_t)g_Str_Trace___s_, v18, &v42[1]); /*0x5ba4b5*/
              DrawDialogText((LPARAM)v20, Buffer, DlgItem); /*0x5ba4c7*/
            }
          }
          if ( !a2 ) /*0x5ba4d5*/
            PlayVocClass(*(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 1708), 0x2000, 1.0, 0); /*0x5ba4ee*/
          goto LABEL_48; /*0x5ba4ee*/
        case 'i': /*0x5ba16d*/
          Debug::Log(); /*0x5ba599*/
          v23 = *(_BYTE *)(this + 32); /*0x5ba59e*/
          *(_DWORD *)(this + 16) = v46; /*0x5ba5ab*/
          if ( !v23 ) /*0x5ba5b0*/
            *(_BYTE *)(this + 9) = 1; /*0x5ba5b6*/
          goto LABEL_48; /*0x5ba5ba*/
        case 't': /*0x5ba16d*/
          Debug::Log(); /*0x5ba429*/
          v15 = GetDlgItem(*(HWND *)this, 1); /*0x5ba439*/
          EnableWindow(v15, 1); /*0x5ba440*/
          goto LABEL_48; /*0x5ba446*/
        case 'w': /*0x5ba16d*/
          GenerateRandomMapPreview(v34); /*0x5ba5d3*/
          v24 = *(_DWORD *)&stru_88732C.__pad_6[14]; /*0x5ba5dd*/
          if ( *(_DWORD *)&stru_88732C.__pad_6[6] != -1 ) /*0x5ba5e5*/
            v24 += Timer::GetTicks() - *(_DWORD *)&stru_88732C.__pad_6[6]; /*0x5ba5f7*/
          *(_DWORD *)(this + 20) = v24; /*0x5ba5f9*/
          goto LABEL_48; /*0x5ba5fc*/
        default:
          Debug::Log(); /*0x5ba5c4*/
          goto LABEL_48; /*0x5ba5cc*/
      }
    }
    else
    {
      Debug::Log(); /*0x5ba0ee*/
      if ( !a2 ) /*0x5ba0ff*/
      {
        v36 = asc_82083C; /*0x5ba11c*/
        v28 = GetStringCSF(g_Str_TXT_OK, 0, &stru_82BA00.__pad_F70[52], 2018); /*0x5ba129*/
        v5 = (int *)GetStringCSF((wchar_t *)&stru_82BA00.?, 0, &stru_82BA00.__pad_F70[52], 2018); /*0x5ba13b*/
        Dialog::ShowMessageBox(v5, v28, 0, 0, 0, (int)v34); /*0x5ba145*/
        return 1; /*0x5ba156*/
      }
    }
    return 1; /*0x5ba3e3*/
  }
}



// ==== 0x005BA660  Game::BuildGameSetupPacket  this=Game  sig=csp ====
int __thiscall Game::BuildGameSetupPacket(Game *this)
{
  HWND DlgItem; // eax
  int v3; // edx
  int v4; // ecx
  int v5; // eax
  int Field3; // eax
  int v7; // eax
  char v8; // dl
  unsigned int v9; // eax
  int v11[62]; // [esp+8h] [ebp-168h] BYREF
  __int16 v12; // [esp+100h] [ebp-70h]
  CCFileClass v13; // [esp+104h] [ebp-6Ch] BYREF
  int v14[3]; // [esp+15Ch] [ebp-14h] BYREF
  int v15; // [esp+168h] [ebp-8h]

  Debug::Log(); /*0x5ba66f*/
  DlgItem = GetDlgItem(*(HWND *)this->__pad_0, 1); /*0x5ba67e*/
  EnableWindow(DlgItem, 0); /*0x5ba685*/
  v3 = *(_DWORD *)&this->__pad_44[20]; /*0x5ba696*/
  memset(v11, 0, sizeof(v11)); /*0x5ba699*/
  v4 = *(_DWORD *)&this->__pad_44[16]; /*0x5ba69b*/
  v12 = 0; /*0x5ba69e*/
  v5 = *(_DWORD *)&this->__pad_44[24]; /*0x5ba6a0*/
  v11[0] = 101; /*0x5ba6a3*/
  *(int *)((char *)&v11[33] + 2) = v4; /*0x5ba6ab*/
  v11[53] = v3; /*0x5ba6b2*/
  v11[52] = v5; /*0x5ba6b9*/
  v11[54] = GameOptions::GetEntry(); /*0x5ba6ca*/
  *(int *)((char *)&v11[7] + 2) = NetworkBuffer::GetField2(); /*0x5ba6db*/
  Field3 = NetworkBuffer::GetField3(); /*0x5ba6df*/
  *(int *)((char *)&v11[36] + 2) = *(_DWORD *)&stru_A8EB00.?[432]; /*0x5ba6f0*/
  *(int *)((char *)&v11[37] + 2) = dword_A8E960[0]; /*0x5ba6fd*/
  *(int *)((char *)&v11[8] + 2) = Field3; /*0x5ba70a*/
  BYTE2(v11[40]) = stru_A8B250.__pad_0[24]; /*0x5ba71b*/
  v7 = *(int *)((char *)&v11[35] + 2); /*0x5ba739*/
  LOBYTE(v7) = BYTE2(v11[35]) & 0xF; /*0x5ba744*/
  *(int *)((char *)&v11[35] + 2) = v7 /*0x5ba750*/
                                 | (16
                                  * (stru_A8B250.__pad_0[18] & 1
                                   | (2
                                    * (stru_A8B250.__pad_0[19] & 1
                                     | (2 * (stru_A8B250.__pad_0[20] & 1 | (2 * (stru_A8B250.__pad_0[28] & 1))))))));
  LOBYTE(v11[6]) = dword_A8DB30; /*0x5ba75d*/
  v8 = dword_A8B394; /*0x5ba776*/
  strcpy((char *)&v11[1], unk_A8B380); /*0x5ba77f*/
  BYTE1(v11[7]) = v8; /*0x5ba793*/
  *(int *)((char *)&v11[6] + 1) = dword_A8B3AC; /*0x5ba797*/
  *(int *)((char *)&v11[31] + 2) = *(_DWORD *)&stru_A8B250.__pad_0[12]; /*0x5ba79b*/
  v9 = *(int *)((char *)&v11[32] + 2) & 0xFFFFFFFE | stru_A8B250.__pad_0[8] & 1; /*0x5ba7bd*/
  LOBYTE(v9) = BYTE2(v11[32]) & 0xF8 | stru_A8B250.__pad_0[8] & 1; /*0x5ba7cc*/
  *(int *)((char *)&v11[32] + 2) = v9 | (2 * (stru_A8B250.__pad_0[16] & 1 | (2 * (stru_A8B250.__pad_0[17] & 1)))); /*0x5ba7f7*/
  LOBYTE(v11[35]) = stru_A8B250.__pad_0[36]; /*0x5ba819*/
  *(int *)((char *)&v11[35] + 2) = *(int *)((char *)&v11[35] + 2) & 0xFFFFFFF1 /*0x5ba828*/
                                 | (4 * (dword_A8B320 & 1)) & 0xF5
                                 | (2 * (byte_A8B31D & 1 | (4 * (byte_A8B31F & 1))));
  BYTE1(v11[35]) = stru_A8B250.__pad_0[40]; /*0x5ba835*/
  BYTE2(v11[34]) = g_RulesInitConfig; /*0x5ba842*/
  HIBYTE(v11[34]) = stru_A8B250.__pad_0[32]; /*0x5ba84e*/
  wcscpy((wchar_t *)&v11[9] + 1, *(const wchar_t **)(dword_A8B8CC + 4 * *(_DWORD *)&stru_A8B250.__pad_0[4])); /*0x5ba85e*/
  CCFileClass::Construct(&v13, (char *)(*(_DWORD *)(dword_A8B8CC + 4 * *(_DWORD *)&stru_A8B250.__pad_0[4]) + 88)); /*0x5ba87f*/
  *(int *)((char *)&v11[39] + 2) = CCFileClass::GetSize(&v13); /*0x5ba896*/
  strncpy( /*0x5ba8b3*/
    (char *)&v11[40] + 3,
    (const char *)(*(_DWORD *)(dword_A8B8CC + 4 * *(_DWORD *)&stru_A8B250.__pad_0[4]) + 88),
    0xDu);
  strncpy( /*0x5ba8d7*/
    (char *)&v11[44],
    (const char *)(*(_DWORD *)(dword_A8B8CC + 4 * *(_DWORD *)&stru_A8B250.__pad_0[4]) + 348),
    0x20u);
  *(int *)((char *)&v11[32] + 2) = *(int *)((char *)&v11[32] + 2) & 0xFFFFFFEF /*0x5ba90c*/
                                 | (16
                                  * (*(_BYTE *)(*(_DWORD *)(dword_A8B8CC + 4 * *(_DWORD *)&stru_A8B250.__pad_0[4]) + 380)
                                   & 1));
  Stream::WriteBlock((int *)&unk_A8EA70, (int)v11, 250, 1); /*0x5ba91d*/
  *(_DWORD *)v13.CDFileClass = &CCFileClass::`vftable'; /*0x5ba929*/
  v15 = 0; /*0x5ba934*/
  Vector::Clear((int)v14); /*0x5ba93f*/
  *(_DWORD *)v13.CDFileClass = &off_7E1668; /*0x5ba94b*/
  return BufferIOFileClass::Dtor((BufferIOFileClass *)&v13); /*0x5ba95b*/
}



// ==== 0x005BA970  NetworkGameSetup::SendGameSetupPacket  this=NetworkGameSetup  sig=csp ====
void __thiscall NetworkGameSetup::SendGameSetupPacket(NetworkGameSetup *this, wchar_t *Source)
{
  char *v3; // eax
  unsigned int v4; // edi
  HWND DlgItem; // esi
  int (__usercall *v6)@<eax>(char@<cf>, char@<zf>); // edi
  wchar_t *Format; // [esp+10h] [ebp-300h]
  int v8[62]; // [esp+14h] [ebp-2FCh] BYREF
  __int16 v9; // [esp+10Ch] [ebp-204h]
  wchar_t Buffer[256]; // [esp+110h] [ebp-200h] BYREF

  if ( Source ) /*0x5ba985*/
  {
    memset(v8, 0, sizeof(v8)); /*0x5ba99a*/
    v9 = 0; /*0x5ba99c*/
    v8[0] = 104; /*0x5ba9a8*/
    strcpy((char *)&v8[1], unk_A8B380); /*0x5ba9c4*/
    LOBYTE(v8[6]) = dword_A8B394; /*0x5ba9d4*/
    wcscpy((wchar_t *)((char *)&v8[6] + 1), Source); /*0x5ba9d8*/
    Stream::WriteBlock((int *)&unk_A8EA70, (int)v8, 250, 1); /*0x5ba9f1*/
    Stream::ReadPacket((int)&unk_A8EA70); /*0x5ba9fb*/
    v3 = CharToWideString(unk_A8B380); /*0x5baa05*/
    v4 = dword_A8B394; /*0x5baa0d*/
    Format = (wchar_t *)v3; /*0x5baa19*/
    DlgItem = GetDlgItem(*(HWND *)this->__pad_0, 1343); /*0x5baa23*/
    if ( DlgItem ) /*0x5baa27*/
    {
      if ( v4 >= 8 ) /*0x5baa2b*/
        v6 = Math::InitDegToRad; /*0x5baa3b*/
      else
        v6 = (int (__usercall *)@<eax>(char@<cf>, char@<zf>))dword_8316A8[v4]; /*0x5baa32*/
      swprintf(Buffer, (const size_t)g_Str_Trace___s_, Format, Source); /*0x5baa54*/
      DrawDialogText((LPARAM)v6, Buffer, DlgItem); /*0x5baa66*/
    }
  }
}



// ==== 0x005BAA80  ObjectClass::method_5BAA80  this=ObjectClass  sig=csp ====
void __thiscall sub_5BAA80(ObjectClass *this, wchar_t *Format, unsigned int a3, int a4)
{
  HWND DlgItem; // edi
  int (__usercall *v5)@<eax>(char@<cf>, char@<zf>); // esi
  wchar_t Buffer[256]; // [esp+8h] [ebp-200h] BYREF

  if ( a4 ) /*0x5baa91*/
  {
    DlgItem = GetDlgItem((HWND)this->AbstractClass, 1343); /*0x5baaa1*/
    if ( DlgItem ) /*0x5baaa5*/
    {
      if ( a3 >= 8 ) /*0x5baab1*/
        v5 = Math::InitDegToRad; /*0x5baac1*/
      else
        v5 = (int (__usercall *)@<eax>(char@<cf>, char@<zf>))dword_8316A8[a3]; /*0x5baab8*/
      swprintf(Buffer, (const size_t)g_Str_Trace___s_, Format, a4); /*0x5baada*/
      DrawDialogText((LPARAM)v5, Buffer, DlgItem); /*0x5baae9*/
    }
  }
}



// ==== 0x005BAB00  SendSignOffEvent  this=ModemHost  sig=ida-proto ====
HWND sub_5BAB00()
{
  wchar_t *StringCSF; // eax
  HWND MessageBox; // eax
  HWND v2; // ebx
  int v3; // edi
  int v4; // esi
  HWND result; // eax
  _BYTE v6[4]; // [esp+8h] [ebp-1FCh] BYREF
  _DWORD v7[62]; // [esp+Ch] [ebp-1F8h] BYREF
  __int16 v8; // [esp+104h] [ebp-100h]
  _DWORD v9[6]; // [esp+108h] [ebp-FCh] BYREF
  int v10; // [esp+120h] [ebp-E4h]

  memset(v7, 0, sizeof(v7)); /*0x5bab15*/
  v8 = 0; /*0x5bab21*/
  LOBYTE(v7[6]) = dword_A8DB30; /*0x5bab28*/
  v7[0] = 102; /*0x5bab37*/
  BYTE1(v7[7]) = dword_A8B394; /*0x5bab3f*/
  Stream::WriteBlock((int)&unk_A8EA70, (int)v7, 250, 1); /*0x5bab43*/
  StringCSF = GetStringCSF(aTxtSigningOff, 0, aDRa2mdpostMode_0, 2398); /*0x5bab5b*/
  MessageBox = CreateMessageBox((LPARAM)StringCSF, 0, 0); /*0x5bab64*/
  v2 = MessageBox; /*0x5bab69*/
  if ( MessageBox ) /*0x5bab6d*/
    Dialog::Show(MessageBox); /*0x5bab71*/
  v3 = dword_887340; /*0x5bab7b*/
  if ( dword_887338 != -1 ) /*0x5bab84*/
    v3 += Timer::GetTicks() - dword_887338; /*0x5bab96*/
  while ( Count::GetCountQueue(&unk_A8EA70) ) /*0x5bab9d*/
  {
    v4 = dword_887340; /*0x5babb0*/
    if ( dword_887338 != -1 ) /*0x5babb9*/
      v4 += Timer::GetTicks() - dword_887338; /*0x5babcb*/
    if ( (unsigned int)(v4 - v3) >= 0x12C /*0x5bac10*/
      || ObjectTypeClass::CreateInstance((int)&unk_A8EA70, (int)v9, (int)v6) > 0
      && v9[0] == 102
      && (unsigned __int8)v10 == dword_A8DB30 )
    {
      break; /*0x5bac10*/
    }
    Event::Dispatch(); /*0x5bac12*/
    MessageLoop(); /*0x5bac17*/
    Stream::ReadPacket((int)&unk_A8EA70); /*0x5bac21*/
  }
  result = (HWND)Network::CleanupOnDisconnect(); /*0x5bac39*/
  if ( v2 ) /*0x5bac40*/
    return Dialog::Destroy(v2); /*0x5bac44*/
  return result; /*0x5bac49*/
}



// ==== 0x005BAC60  ModemHost::StartGame  this=ModemHost  sig=csp ====
char __thiscall ModemHost::StartGame(int this, char a2)
{
  int v3; // eax
  int v4; // esi
  char *v5; // eax
  int v6; // eax
  int v7; // eax
  int v8; // esi
  int v9; // ebx
  int v10; // eax
  unsigned int BridgeIndexThunk; // ecx
  unsigned int v12; // eax
  unsigned int v13; // eax
  wchar_t *StringCSF; // eax
  Dialog *MessageBox; // eax
  Dialog *v16; // ebx
  int v17; // edi
  int v18; // esi
  int v19; // esi
  wchar_t *v20; // eax
  int v21; // edi
  int v22; // esi
  int *v23; // eax
  int v24; // esi
  int v25; // eax
  int v26; // ecx
  void *ptr_0; // edx
  wchar_t *v28; // [esp-10h] [ebp-224h]
  ObjectClass *v29; // [esp+0h] [ebp-214h]
  char v31[4]; // [esp+18h] [ebp-1FCh] BYREF
  int v32[62]; // [esp+1Ch] [ebp-1F8h] BYREF
  __int16 v33; // [esp+114h] [ebp-100h]
  int v34[63]; // [esp+118h] [ebp-FCh] BYREF

  Debug::Log(); /*0x5bac73*/
  Debug::Log(); /*0x5bac97*/
  if ( a2 == 1 ) /*0x5baca2*/
    return 0; /*0x5bacb0*/
  dword_A8B230[130].ptr_C = *(void **)&stru_A8B250.__pad_0[4]; /*0x5bacc5*/
  strcpy( /*0x5bacfc*/
    (char *)&dword_A8B230[130].abstractFlags,
    (const char *)(*(_DWORD *)(dword_A8B8CC + 4 * *(_DWORD *)&stru_A8B250.__pad_0[4]) + 88));
  dword_A8B230[43].ptr_4 = (void *)1; /*0x5bad10*/
  dword_A8B230[43].ptr_0 = (void *)1; /*0x5bad1c*/
  dword_A8B54C = 0; /*0x5bad22*/
  v3 = __2_YAPAXI_Z(0x85u); /*0x5bad28*/
  v4 = v3; /*0x5bad2d*/
  if ( v3 ) /*0x5bad34*/
  {
    Waypoint::InitInvalid((Waypoint *)(v3 + 40)); /*0x5bad3d*/
    v5 = CharToWideString(unk_A8B380); /*0x5bad47*/
    wcscpy((wchar_t *)v4, (const wchar_t *)v5); /*0x5bad4e*/
    *(_DWORD *)(v4 + 75) = dword_A8B3AC; /*0x5bad5b*/
    *(_DWORD *)(v4 + 83) = dword_A8B394; /*0x5bad64*/
    *(_DWORD *)(v4 + 115) = -1; /*0x5bad67*/
    if ( dword_A8DA84 < dword_A8DA7C /*0x5bada4*/
      || (byte_A8DA81 || !dword_A8DA7C)
      && dword_A8DA88 > 0
      && (*(unsigned __int8 (__thiscall **)(PtrVector *, int, _DWORD))(*(_DWORD *)&stru_A8DA74 + 8))(
           &stru_A8DA74,
           dword_A8DA7C + dword_A8DA88,
           0) )
    {
      v6 = dword_A8DA84++; /*0x5badb1*/
      dword_A8DA78[v6] = v4; /*0x5badc0*/
    }
  }
  v7 = __2_YAPAXI_Z(0x85u); /*0x5badc8*/
  v8 = v7; /*0x5badcd*/
  if ( v7 ) /*0x5badd4*/
  {
    Waypoint::InitInvalid((Waypoint *)(v7 + 40)); /*0x5baddd*/
    v9 = this; /*0x5bade2*/
    wcscpy((wchar_t *)v8, (const wchar_t *)(this + 34)); /*0x5badeb*/
    *(_DWORD *)(v8 + 75) = *(_DWORD *)(this + 80); /*0x5badf6*/
    *(_DWORD *)(v8 + 83) = *(_DWORD *)(this + 76); /*0x5badfc*/
    *(_DWORD *)(v8 + 115) = -1; /*0x5badff*/
    if ( dword_A8DA84 < dword_A8DA7C /*0x5bae3c*/
      || (byte_A8DA81 || !dword_A8DA7C)
      && dword_A8DA88 > 0
      && (*(unsigned __int8 (__thiscall **)(PtrVector *, int, _DWORD))(*(_DWORD *)&stru_A8DA74 + 8))(
           &stru_A8DA74,
           dword_A8DA7C + dword_A8DA88,
           0) )
    {
      v10 = dword_A8DA84++; /*0x5bae49*/
      dword_A8DA78[v10] = v8; /*0x5bae58*/
    }
  }
  else
  {
    v9 = this; /*0x5bae5d*/
  }
  if ( dword_A8DA84 != 2 ) /*0x5bae6d*/
    return 0; /*0x5bae7b*/
  memset(v32, 0, sizeof(v32)); /*0x5bae89*/
  v33 = 0; /*0x5bae8b*/
  v32[0] = 103; /*0x5bae92*/
  BridgeIndexThunk = CellClass::GetBridgeIndexThunk((NullModemClass *)&unk_A8EA70); /*0x5bae9f*/
  v12 = *(_DWORD *)(v9 + 16); /*0x5baea1*/
  *(int *)((char *)&v32[38] + 2) = BridgeIndexThunk; /*0x5baea9*/
  if ( v12 != 10000 && BridgeIndexThunk < v12 ) /*0x5baeb4*/
  {
    BridgeIndexThunk = v12; /*0x5baeb6*/
    *(int *)((char *)&v32[38] + 2) = v12; /*0x5baeb8*/
  }
  v13 = 5; /*0x5baec5*/
  stru_A8EB00.ObjectTypeClass[24] = *(_DWORD *)&stru_A8B250.__pad_0[24]; /*0x5baeca*/
  dword_A8B554 = 5; /*0x5baed8*/
  dword_A8DB9C = 0; /*0x5baedd*/
  dword_A8B56C = 0; /*0x5baee3*/
  dword_A8B570 = 0; /*0x5baee9*/
  if ( dword_A8B24C != 2 ) /*0x5baeef*/
  {
    dword_A8B550 = (wchar_t *)(BridgeIndexThunk >> 3); /*0x5baf1a*/
    if ( BridgeIndexThunk >> 3 > 5 ) /*0x5baf20*/
      goto LABEL_28; /*0x5baf20*/
LABEL_27:
    dword_A8B550 = (wchar_t *)v13; /*0x5baf22*/
    goto LABEL_28; /*0x5baf22*/
  }
  v13 = 5 * (((BridgeIndexThunk >> 3) + 4) / 5); /*0x5baf01*/
  if ( v13 > 0xA ) /*0x5baf07*/
    goto LABEL_27; /*0x5baf07*/
  dword_A8B550 = (wchar_t *)10; /*0x5baf09*/
LABEL_28:
  LOBYTE(v32[6]) = dword_A8DB30; /*0x5baf27*/
  Stream::WriteBlock((int *)&unk_A8EA70, (int)v32, 250, 1); /*0x5baf41*/
  StringCSF = GetStringCSF((wchar_t *)&stru_82BA00.__pad_F70[628], 0, &stru_82BA00.__pad_F70[52], 2540); /*0x5baf58*/
  MessageBox = (Dialog *)CreateMessageBox((LPARAM)StringCSF, 0, 0); /*0x5baf61*/
  v16 = MessageBox; /*0x5baf66*/
  if ( MessageBox ) /*0x5baf6a*/
    Dialog::Show(MessageBox); /*0x5baf6e*/
  v17 = *(_DWORD *)&stru_88732C.__pad_6[14]; /*0x5baf78*/
  if ( *(_DWORD *)&stru_88732C.__pad_6[6] != -1 ) /*0x5baf81*/
    v17 += Timer::GetTicks() - *(_DWORD *)&stru_88732C.__pad_6[6]; /*0x5baf93*/
  while ( 1 ) /*0x5baf9a*/
  {
    if ( !Count::GetCountQueue((Count *)&unk_A8EA70) ) /*0x5baf9a*/
      goto LABEL_38; /*0x5baf9a*/
    v18 = *(_DWORD *)&stru_88732C.__pad_6[14]; /*0x5bafa8*/
    if ( *(_DWORD *)&stru_88732C.__pad_6[6] != -1 ) /*0x5bafb1*/
      v18 += Timer::GetTicks() - *(_DWORD *)&stru_88732C.__pad_6[6]; /*0x5bafc3*/
    if ( (unsigned int)(v18 - v17) >= 0x708 ) /*0x5bafcd*/
    {
LABEL_38:
      v19 = *(_DWORD *)&stru_88732C.__pad_6[14]; /*0x5bafd4*/
      if ( *(_DWORD *)&stru_88732C.__pad_6[6] != -1 ) /*0x5bafdd*/
        v19 += Timer::GetTicks() - *(_DWORD *)&stru_88732C.__pad_6[6]; /*0x5bafef*/
      if ( (unsigned int)(v19 - v17) >= 0x3C ) /*0x5baff6*/
        break; /*0x5baff6*/
    }
    Event::Dispatch(); /*0x5baff8*/
    MessageLoop(); /*0x5baffd*/
    Stream::ReadPacket((int)&unk_A8EA70); /*0x5bb007*/
  }
  if ( v16 ) /*0x5bb010*/
  {
    v20 = GetStringCSF((wchar_t *)&stru_82BA00.__pad_F70[612], 0, &stru_82BA00.__pad_F70[52], 2557); /*0x5bb023*/
    Network_Start((HWND)v16, (LPARAM)v20); /*0x5bb02c*/
  }
  Debug::Log(); /*0x5bb036*/
  v21 = *(_DWORD *)&stru_88732C.__pad_6[14]; /*0x5bb040*/
  if ( *(_DWORD *)&stru_88732C.__pad_6[6] != -1 ) /*0x5bb04c*/
    v21 += Timer::GetTicks() - *(_DWORD *)&stru_88732C.__pad_6[6]; /*0x5bb05e*/
  while ( 1 ) /*0x5bb060*/
  {
    Event::Dispatch(); /*0x5bb060*/
    MessageLoop(); /*0x5bb065*/
    Stream::ReadPacket((int)&unk_A8EA70); /*0x5bb06f*/
    if ( ObjectTypeClass::CreateInstance(&unk_A8EA70, (int)v34, (int)v31) <= 0 ) /*0x5bb08d*/
      goto LABEL_48; /*0x5bb08d*/
    Debug::Log(); /*0x5bb094*/
    if ( v34[0] == 114 ) /*0x5bb0a6*/
    {
      Debug::Log(); /*0x5bb0f0*/
LABEL_57:
      if ( v16 ) /*0x5bb1aa*/
        Dialog::Destroy(v16); /*0x5bb1ae*/
      EventClass::CheckFlag((EventClass *)&unk_A8EA70); /*0x5bb1b8*/
      BYTE2(stru_A8D600.Network_field_0xC) = 0; /*0x5bb1c9*/
      dword_A8B230[130].ptr_C = *(void **)&stru_A8B250.__pad_0[4]; /*0x5bb1d0*/
      dword_A8B54C = dword_A8DA84; /*0x5bb1f0*/
      v25 = dword_A8E960[0]; /*0x5bb1f5*/
      BYTE1(v25) = BYTE1(dword_A8E960[0]) & 0x77; /*0x5bb1fc*/
      v26 = v25 | ((byte_A8B31D & 1 | (16 * (stru_A8B250.__pad_0[16] & 1))) << 11); /*0x5bb202*/
      LOBYTE(v26) = LOBYTE(dword_A8E960[0]) | 0xC0; /*0x5bb209*/
      *(_DWORD *)&stru_A8EB00.?[416] = 0; /*0x5bb20c*/
      dword_A8B24C = 2; /*0x5bb212*/
      dword_A8E960[0] = v26; /*0x5bb21c*/
      ptr_0 = dword_A8B230->ptr_0; /*0x5bb222*/
      BYTE1(ptr_0) = ((unsigned __int16)dword_A8B230->ptr_0 >> 8) & 0xFB; /*0x5bb229*/
      dword_A8B230->ptr_0 = ptr_0; /*0x5bb22c*/
      byte_A8B31C = 1; /*0x5bb22e*/
      nullsub_37(v29); /*0x5bb235*/
      Debug::Log(); /*0x5bb23f*/
      return 1; /*0x5bb247*/
    }
    if ( v34[0] == 115 ) /*0x5bb0ab*/
      break; /*0x5bb0ab*/
    if ( v34[0] == 110 ) /*0x5bb0b0*/
    {
      Debug::Log(); /*0x5bb189*/
      SendNetworkFile((char *)&dword_A8B230[130].abstractFlags, 1, 0, 0); /*0x5bb1a3*/
      goto LABEL_57; /*0x5bb1a3*/
    }
LABEL_48:
    v22 = *(_DWORD *)&stru_88732C.__pad_6[14]; /*0x5bb0b6*/
    if ( *(_DWORD *)&stru_88732C.__pad_6[6] != -1 ) /*0x5bb0c4*/
      v22 += Timer::GetTicks() - *(_DWORD *)&stru_88732C.__pad_6[6]; /*0x5bb0d6*/
    if ( (unsigned int)(v22 - v21) >= 0x4B0 ) /*0x5bb0e0*/
      goto LABEL_57; /*0x5bb0e0*/
  }
  v28 = GetStringCSF(g_Str_TXT_CANCEL, 0, &stru_82BA00.__pad_F70[52], 2582); /*0x5bb11e*/
  v23 = (int *)GetStringCSF((wchar_t *)&stru_82BA00.__pad_F70[512], 0, &stru_82BA00.__pad_F70[52], 2582); /*0x5bb130*/
  Dialog::ShowMessageBox(v23, v28, 0, 0, 0, (int)v29); /*0x5bb13a*/
  v24 = *(_DWORD *)&stru_88732C.__pad_6[14]; /*0x5bb144*/
  if ( *(_DWORD *)&stru_88732C.__pad_6[6] != -1 ) /*0x5bb14d*/
    v24 += Timer::GetTicks() - *(_DWORD *)&stru_88732C.__pad_6[6]; /*0x5bb15f*/
  *(_DWORD *)(this + 20) = v24; /*0x5bb16a*/
  Debug::Log(); /*0x5bb16d*/
  return 0; /*0x5baca4*/
}



// ==== 0x005BB290  ObjectClass::GenerateRandomMapPreview  this=ObjectClass  sig=csp ====
void __usercall GenerateRandomMapPreview(ObjectClass *this)
{
  int v1; // esi
  int v2; // eax
  int v3; // esi
  int v4; // eax
  int v5; // esi
  void *v6; // edi
  int v7; // esi
  DWORD v8; // esi
  size_t *v9; // [esp+0h] [ebp-290h]
  signed int Buffer; // [esp+10h] [ebp-280h] BYREF
  int Ticks; // [esp+14h] [ebp-27Ch]
  int v12; // [esp+18h] [ebp-278h]
  int v13; // [esp+1Ch] [ebp-274h]
  int v14; // [esp+24h] [ebp-26Ch]
  Pipe v15; // [esp+2Ch] [ebp-264h] BYREF
  int v16; // [esp+44h] [ebp-24Ch]
  int v17; // [esp+48h] [ebp-248h] BYREF
  LPCSTR v18[9]; // [esp+4Ch] [ebp-244h] BYREF
  Pipe v19; // [esp+70h] [ebp-220h] BYREF
  int v20[62]; // [esp+98h] [ebp-1F8h] BYREF
  __int16 v21; // [esp+190h] [ebp-100h]
  int v22[63]; // [esp+194h] [ebp-FCh] BYREF

  Ticks = Timer::GetTicks(); /*0x5bb2af*/
  v13 = 0; /*0x5bb2b3*/
  if ( !_strcmpi(byte_A8B8E0, aRandmapSed) ) /*0x5bb2b7*/
  {
    Debug::Log(); /*0x5bb2cc*/
    memset(v20, 0, sizeof(v20)); /*0x5bb2e2*/
    v21 = 0; /*0x5bb2e4*/
    v20[0] = 117; /*0x5bb2fa*/
    Stream::WriteBlock(&unk_A8EA70.ptr_0, (int)v20, 250, 1); /*0x5bb305*/
    v13 = 600; /*0x5bb31c*/
    Ticks = Timer::GetTicks(); /*0x5bb325*/
    v12 = v14; /*0x5bb329*/
    while ( Count::GetCountQueue((Count *)&unk_A8EA70) > 0 ) /*0x5bb337*/
    {
      v1 = v13; /*0x5bb33d*/
      if ( Ticks != -1 ) /*0x5bb343*/
      {
        v2 = Timer::GetTicks() - Ticks; /*0x5bb34e*/
        if ( v2 >= v13 ) /*0x5bb354*/
          break; /*0x5bb354*/
        v1 = v13 - v2; /*0x5bb356*/
      }
      if ( !v1 ) /*0x5bb35a*/
        break; /*0x5bb35a*/
      Event::Dispatch(); /*0x5bb35c*/
    }
    Ticks = Timer::GetTicks(); /*0x5bb36f*/
    v12 = v14; /*0x5bb385*/
    v13 = 1800; /*0x5bb389*/
    while ( 1 ) /*0x5bb392*/
    {
      Event::Dispatch(); /*0x5bb392*/
      if ( ObjectTypeClass::CreateInstance(&unk_A8EA70, (int)v22, (int)&v17) > 0 && v22[0] == 118 ) /*0x5bb3b9*/
        break; /*0x5bb3b9*/
      v3 = v13; /*0x5bb3bf*/
      if ( Ticks != -1 ) /*0x5bb3c5*/
      {
        v4 = Timer::GetTicks() - Ticks; /*0x5bb3d0*/
        if ( v4 >= v13 ) /*0x5bb3d6*/
          goto LABEL_15; /*0x5bb3d6*/
        v3 = v13 - v4; /*0x5bb3d8*/
      }
      if ( !v3 ) /*0x5bb3dc*/
      {
LABEL_15:
        Debug::Log(); /*0x5bb3de*/
        return; /*0x5bb3f5*/
      }
    }
    Buffer = 0; /*0x5bb403*/
    v5 = Palette::Preview_Generate((Palette *)g_UIControlState, 64, (int)&Buffer, v9); /*0x5bb410*/
    Debug::Log(); /*0x5bb418*/
    v6 = (void *)__2_YAPAXI_Z(4 * Buffer); /*0x5bb435*/
    v15.Pipe_field_0x04 = 0; /*0x5bb437*/
    v15.Pipe_field_0x08 = 0; /*0x5bb448*/
    *(_DWORD *)v15.__pad_0 = &Pipe::`vftable'; /*0x5bb44c*/
    Buffer::Init((Buffer *)&v15.Pipe_field_0x0C, (int)v6, 4 * Buffer); /*0x5bb454*/
    v16 = 0; /*0x5bb463*/
    *(_DWORD *)v15.__pad_0 = &BufferPipe::`vftable'; /*0x5bb467*/
    LZOPipe::Constructor((LZOPipe *)&v19, 0, 0x2000); /*0x5bb46f*/
    Pipe::SetDelegate(&v19, (int)&v15); /*0x5bb47d*/
    v7 = Compression::Read((int *)v19.__pad_0, v5, Buffer); /*0x5bb499*/
    v8 = (*(int (__thiscall **)(Pipe *))(*(_DWORD *)v19.__pad_0 + 4))(&v19) + v7; /*0x5bb49e*/
    Debug::Log(); /*0x5bb4a6*/
    RawFileClass::Construct((RawFileClass *)v18, (int)aPreviewBin); /*0x5bb4b7*/
    if ( (unsigned __int8)FileClass::Open((RawFileClass *)v18, 0) ) /*0x5bb4c1*/
      FileClass::Delete((RawFileClass *)v18); /*0x5bb4ce*/
    FileClass::Open2((RawFileClass *)v18, (const CHAR *)2); /*0x5bb4d9*/
    FileClass::Write2((RawFileClass *)v18, &Buffer, 4u); /*0x5bb4e9*/
    FileClass::Write2((RawFileClass *)v18, v6, v8); /*0x5bb4f4*/
    FileClass::CloseHandle((RawFileClass *)v18); /*0x5bb4fd*/
    __3_YAXPAX_Z(v6); /*0x5bb503*/
    Debug::Log(); /*0x5bb50d*/
    SendNetworkFile(aPreviewBin, 1, 0, 0); /*0x5bb521*/
    RawFileClass::Dtor((RawFileClass *)v18); /*0x5bb52a*/
    LZOPipe::Destructor((LZOPipe *)&v19); /*0x5bb533*/
    Vector::Clear((int)&v15.Pipe_field_0x0C); /*0x5bb53c*/
    Pipe::Dtor(&v15); /*0x5bb545*/
  }
}



// ==== 0x005BB560  NetworkGameSetup::DeleteComPtr  this=NetworkGameSetup  sig=csp ====
_DWORD *__thiscall NetworkGameSetup::DeleteComPtr(NetworkGameSetup *this, char a2)
{
  ComPtr::Dtor((ComPtr *)this); /*0x5bb563*/
  if ( (a2 & 1) != 0 ) /*0x5bb56d*/
    __3_YAXPAX_Z(this); /*0x5bb570*/
  return this->__pad_0; /*0x5bb57a*/
}



// ==== 0x005BB580  Network_Find  this=-  sig=csp ====
HKEY __fastcall sub_5BB580(HKEY a1, const CHAR *a2, const char *a3)
{
  HKEY v3; // esi
  DWORD v4; // ebx
  CHAR *v5; // ebp
  HKEY RegistrySubKey; // edi
  int v7; // esi
  DWORD v9; // [esp-1Ch] [ebp-4Ch]
  LPBYTE lpData; // [esp+10h] [ebp-20h]
  DWORD cchName; // [esp+14h] [ebp-1Ch] BYREF
  DWORD cbData; // [esp+18h] [ebp-18h] BYREF
  LPCSTR lpValueName; // [esp+1Ch] [ebp-14h]
  DWORD Type; // [esp+20h] [ebp-10h] BYREF
  HKEY v15; // [esp+24h] [ebp-Ch]
  struct _FILETIME ftLastWriteTime; // [esp+28h] [ebp-8h] BYREF

  v3 = a1; /*0x5bb58c*/
  lpValueName = a2; /*0x5bb58e*/
  v15 = a1; /*0x5bb593*/
  v4 = 0; /*0x5bb597*/
  v5 = (CHAR *)__2_YAPAXI_Z(0x100u); /*0x5bb59f*/
  lpData = (LPBYTE)__2_YAPAXI_Z(0x100u); /*0x5bb5ad*/
  cbData = 256; /*0x5bb5b1*/
  while ( 1 ) /*0x5bb5c8*/
  {
    v9 = v4; /*0x5bb5c8*/
    cchName = 256; /*0x5bb5ca*/
    ++v4; /*0x5bb5d2*/
    if ( RegEnumKeyExA(v3, v9, v5, &cchName, 0, 0, 0, &ftLastWriteTime) ) /*0x5bb5d3*/
      break; /*0x5bb5d3*/
    RegistrySubKey = FindRegistrySubKey(v3, v5, 0); /*0x5bb5eb*/
    if ( RegistrySubKey ) /*0x5bb5ef*/
    {
      cbData = 256; /*0x5bb608*/
      if ( !RegQueryValueExA(RegistrySubKey, lpValueName, 0, &Type, lpData, &cbData) /*0x5bb654*/
        && Type == 1
        && !strcmp((const char *)lpData, a3) )
      {
        __3_YAXPAX_Z(v5); /*0x5bb67d*/
        __3_YAXPAX_Z(lpData); /*0x5bb687*/
        return RegistrySubKey; /*0x5bb698*/
      }
      v7 = Network_Find(a3); /*0x5bb666*/
      RegCloseKey(RegistrySubKey); /*0x5bb669*/
      if ( v7 ) /*0x5bb671*/
      {
        __3_YAXPAX_Z(v5); /*0x5bb69c*/
        __3_YAXPAX_Z(lpData); /*0x5bb6a6*/
        return (HKEY)v7; /*0x5bb6b7*/
      }
      v3 = v15; /*0x5bb673*/
    }
  }
  __3_YAXPAX_Z(v5); /*0x5bb6bb*/
  __3_YAXPAX_Z(lpData); /*0x5bb6c5*/
  return 0; /*0x5bb691*/
}



// ==== 0x005BB6E0  Modem::EnumerateDevices  this=ObjectClass  sig=csp ====
int __thiscall Modem_EnumerateDevices(int this, int a2)
{
  BYTE *v4; // eax
  DWORD v5; // kr00_4
  const char *v6; // edi
  char *v7; // eax
  const char *v8; // edi
  char *v9; // edx
  unsigned int v10; // eax
  const char *v11; // edi
  char *v12; // edi
  const char *v13; // esi
  char v14; // cl
  char *v15; // eax
  DWORD v16; // edx
  HKEY v17; // eax
  BYTE *v18; // eax
  DWORD v19; // kr04_4
  BYTE *v20; // eax
  DWORD v21; // kr08_4
  BYTE *v22; // eax
  DWORD v23; // kr0C_4
  BYTE *v24; // eax
  DWORD v25; // kr10_4
  BYTE *v26; // eax
  DWORD v27; // kr14_4
  HKEY v28; // eax
  BYTE *v29; // eax
  DWORD v30; // ecx
  const char *v31; // esi
  void *v32; // ecx
  DWORD cbData; // [esp+10h] [ebp-42Ch] BYREF
  HKEY phkResult; // [esp+14h] [ebp-428h] BYREF
  DWORD cchName; // [esp+18h] [ebp-424h] BYREF
  DWORD cchClass; // [esp+1Ch] [ebp-420h] BYREF
  CHAR SubKey[8]; // [esp+20h] [ebp-41Ch] BYREF
  DWORD v38; // [esp+28h] [ebp-414h]
  int v39; // [esp+2Ch] [ebp-410h]
  HKEY hKey; // [esp+30h] [ebp-40Ch] BYREF
  struct _FILETIME ftLastWriteTime; // [esp+34h] [ebp-408h] BYREF
  BYTE Data[256]; // [esp+3Ch] [ebp-400h] BYREF
  char v43[256]; // [esp+13Ch] [ebp-300h] BYREF
  CHAR Name[256]; // [esp+23Ch] [ebp-200h] BYREF
  CHAR Class[256]; // [esp+33Ch] [ebp-100h] BYREF

  cbData = 256; /*0x5bb705*/
  v39 = 0; /*0x5bb709*/
  *(_DWORD *)this = 0; /*0x5bb70d*/
  *(_DWORD *)(this + 4) = 0; /*0x5bb710*/
  *(_DWORD *)(this + 8) = 0; /*0x5bb713*/
  *(_DWORD *)(this + 12) = 0; /*0x5bb716*/
  *(_DWORD *)(this + 16) = 0; /*0x5bb719*/
  *(_DWORD *)(this + 20) = 0; /*0x5bb71c*/
  *(_DWORD *)(this + 24) = 0; /*0x5bb71f*/
  wsprintfA(SubKey, "%04d", a2); /*0x5bb722*/
  if ( byte_887624 ) /*0x5bb732*/
  {
    if ( RegOpenKeyExA(HKEY_LOCAL_MACHINE, aSystemCurrentc, 0, 0x20019u, &phkResult) ) /*0x5bb74f*/
      return this; /*0x5bb753*/
    if ( RegOpenKeyExA(phkResult, SubKey, 0, 0x20019u, &phkResult) ) /*0x5bb76e*/
    {
LABEL_4:
      Debug::Log(); /*0x5bb778*/
      return this; /*0x5bb791*/
    }
  }
  else
  {
    if ( RegOpenKeyExA(HKEY_LOCAL_MACHINE, aSystemCurrentc_0, 0, 0x20019u, &phkResult) ) /*0x5bb7af*/
      goto LABEL_4; /*0x5bb7b3*/
    v38 = 0; /*0x5bb7f7*/
    cchName = 256; /*0x5bb7fb*/
    cchClass = 256; /*0x5bb7ff*/
    if ( RegEnumKeyExA(phkResult, 0, Name, &cchName, 0, Class, &cchClass, &ftLastWriteTime) ) /*0x5bb803*/
      return this; /*0x5bb803*/
    while ( 1 ) /*0x5bb838*/
    {
      strcpy(v43, aSystemCurrentc_1); /*0x5bb838*/
      strcat(v43, Name); /*0x5bb864*/
      if ( !RegOpenKeyExA(HKEY_LOCAL_MACHINE, v43, 0, 0x20019u, &hKey) ) /*0x5bb886*/
      {
        cbData = 256; /*0x5bb8a9*/
        if ( !RegQueryValueExA(hKey, aClass, 0, 0, Data, &cbData) && !_strcmpi(Data, aModem) ) /*0x5bb8c1*/
          break; /*0x5bb8c1*/
      }
      ++v38; /*0x5bb8f9*/
      cchName = 256; /*0x5bb8fd*/
      cchClass = 256; /*0x5bb901*/
      if ( RegEnumKeyExA(phkResult, v38, Name, &cchName, 0, Class, &cchClass, &ftLastWriteTime) ) /*0x5bb905*/
        return this; /*0x5bb91f*/
    }
    strcpy(v43, aSystemCurrentc_1); /*0x5bb949*/
    strcat(v43, Name); /*0x5bb975*/
    strcat(v43, asc_815E74); /*0x5bb9a4*/
    strcat(v43, SubKey); /*0x5bb9d2*/
    if ( RegOpenKeyExA(HKEY_LOCAL_MACHINE, v43, 0, 0x20019u, &phkResult) ) /*0x5bb9f4*/
      return this; /*0x5bb9f8*/
  }
  cbData = 256; /*0x5bba21*/
  if ( !RegQueryValueExA(phkResult, aModel, 0, 0, Data, &cbData) ) /*0x5bba25*/
  {
    v4 = (BYTE *)__2_YAPAXI_Z(cbData + 1); /*0x5bba35*/
    v5 = cbData; /*0x5bba42*/
    *(_DWORD *)this = v4; /*0x5bba49*/
    qmemcpy(v4, Data, v5); /*0x5bba4c*/
    Debug::Log(); /*0x5bba5e*/
    cbData = 256; /*0x5bba83*/
    if ( RegQueryValueExA(phkResult, aAttachedto, 0, 0, Data, &cbData) /*0x5bbab2*/
      && ((cbData = 256, byte_887624) || RegQueryValueExA(phkResult, aPnpattachedto, 0, 0, Data, &cbData)) )
    {
      v6 = *(const char **)this; /*0x5bbab8*/
      v39 = 1; /*0x5bbac0*/
      v7 = (char *)__2_YAPAXI_Z(strlen(v6) + 1); /*0x5bbacd*/
      v8 = *(const char **)this; /*0x5bbad2*/
      v9 = v7; /*0x5bbad5*/
      *(_DWORD *)(this + 4) = v7; /*0x5bbadf*/
      v10 = strlen(v8) + 1; /*0x5bbae2*/
      v11 = &v8[v10]; /*0x5bbae2*/
      qmemcpy(v9, &v11[-v10], 4 * (v10 >> 2)); /*0x5bbaf1*/
      v13 = &v11[4 * (v10 >> 2) - v10]; /*0x5bbaf1*/
      v12 = &v9[4 * (v10 >> 2)]; /*0x5bbaf1*/
      v14 = v10; /*0x5bbaf3*/
    }
    else
    {
      v15 = (char *)__2_YAPAXI_Z(cbData + 1); /*0x5bbafd*/
      v16 = cbData; /*0x5bbb09*/
      *(_DWORD *)(this + 4) = v15; /*0x5bbb11*/
      qmemcpy(v15, Data, 4 * (v16 >> 2)); /*0x5bbb17*/
      v13 = (const char *)&Data[4 * (v16 >> 2)]; /*0x5bbb17*/
      v12 = &v15[4 * (v16 >> 2)]; /*0x5bbb17*/
      v14 = v16; /*0x5bbb19*/
    }
    qmemcpy(v12, v13, v14 & 3); /*0x5bbb1e*/
    Debug::Log(); /*0x5bbb29*/
    v17 = FindRegistrySubKey(phkResult, aSettings, 1); /*0x5bbb3c*/
    phkResult = v17; /*0x5bbb43*/
    if ( !v17 ) /*0x5bbb47*/
      return this; /*0x5bbb47*/
    cbData = 256; /*0x5bbb61*/
    if ( !RegQueryValueExA(v17, aErrorcontrolOn, 0, 0, Data, &cbData) ) /*0x5bbb69*/
    {
      v18 = (BYTE *)__2_YAPAXI_Z(cbData + 1); /*0x5bbb75*/
      v19 = cbData; /*0x5bbb82*/
      *(_DWORD *)(this + 8) = v18; /*0x5bbb89*/
      qmemcpy(v18, Data, v19); /*0x5bbb8c*/
      Debug::Log(); /*0x5bbb9e*/
    }
    cbData = 256; /*0x5bbbbe*/
    if ( !RegQueryValueExA(phkResult, aErrorcontrolOf, 0, 0, Data, &cbData) ) /*0x5bbbc6*/
    {
      v20 = (BYTE *)__2_YAPAXI_Z(cbData + 1); /*0x5bbbd2*/
      v21 = cbData; /*0x5bbbdf*/
      *(_DWORD *)(this + 12) = v20; /*0x5bbbe6*/
      qmemcpy(v20, Data, v21); /*0x5bbbe9*/
      Debug::Log(); /*0x5bbbfb*/
    }
    cbData = 256; /*0x5bbc1b*/
    if ( !RegQueryValueExA(phkResult, aCompressionOn, 0, 0, Data, &cbData) ) /*0x5bbc23*/
    {
      v22 = (BYTE *)__2_YAPAXI_Z(cbData + 1); /*0x5bbc2f*/
      v23 = cbData; /*0x5bbc3c*/
      *(_DWORD *)(this + 16) = v22; /*0x5bbc43*/
      qmemcpy(v22, Data, v23); /*0x5bbc46*/
      Debug::Log(); /*0x5bbc58*/
    }
    cbData = 256; /*0x5bbc78*/
    if ( !RegQueryValueExA(phkResult, aCompressionOff, 0, 0, Data, &cbData) ) /*0x5bbc80*/
    {
      v24 = (BYTE *)__2_YAPAXI_Z(cbData + 1); /*0x5bbc8c*/
      v25 = cbData; /*0x5bbc99*/
      *(_DWORD *)(this + 20) = v24; /*0x5bbca0*/
      qmemcpy(v24, Data, v25); /*0x5bbca3*/
      Debug::Log(); /*0x5bbcb5*/
    }
    cbData = 256; /*0x5bbcd5*/
    if ( !RegQueryValueExA(phkResult, aFlowcontrolHar, 0, 0, Data, &cbData) ) /*0x5bbcdd*/
    {
      v26 = (BYTE *)__2_YAPAXI_Z(cbData + 1); /*0x5bbce9*/
      v27 = cbData; /*0x5bbcf6*/
      *(_DWORD *)(this + 24) = v26; /*0x5bbcfd*/
      qmemcpy(v26, Data, v27); /*0x5bbd00*/
      Debug::Log(); /*0x5bbd12*/
    }
    RegCloseKey(phkResult); /*0x5bbd1f*/
    if ( !v39 ) /*0x5bbd2b*/
      return this; /*0x5bbd2b*/
    strcpy(v43, "Modem\\"); /*0x5bbd60*/
    memset(&v43[7], 0, 249); /*0x5bbd6e*/
    strcat(v43, SubKey); /*0x5bbd92*/
    phkResult = FindRegistrySubKey(HKEY_LOCAL_MACHINE, aEnum, 0); /*0x5bbdac*/
    if ( !phkResult ) /*0x5bbdb0*/
      return this; /*0x5bbdb0*/
    v28 = (HKEY)Network_Find(v43); /*0x5bbdc5*/
    if ( v28 ) /*0x5bbdcc*/
    {
      cbData = 256; /*0x5bbde2*/
      if ( !RegQueryValueExA(v28, aPortname, 0, 0, Data, &cbData) ) /*0x5bbdea*/
      {
        if ( *(_DWORD *)(this + 4) ) /*0x5bbdf4*/
          __3_YAXPAX_Z(*(void **)(this + 4)); /*0x5bbdfc*/
        v29 = (BYTE *)__2_YAPAXI_Z(cbData + 1); /*0x5bbe0a*/
        v30 = cbData; /*0x5bbe0f*/
        *(_DWORD *)(this + 4) = v29; /*0x5bbe13*/
        qmemcpy(v29, Data, v30); /*0x5bbe21*/
        Debug::Log(); /*0x5bbe33*/
      }
    }
    else
    {
      v31 = *(const char **)(this + 4); /*0x5bbe3d*/
      if ( v31 && *(_DWORD *)this && !strcmp(*(const char **)this, v31) ) /*0x5bbe55*/
      {
        Debug::Log(); /*0x5bbe84*/
        __3_YAXPAX_Z(*(void **)this); /*0x5bbe8d*/
        v32 = *(void **)(this + 4); /*0x5bbe92*/
        *(_DWORD *)this = 0; /*0x5bbe95*/
        __3_YAXPAX_Z(v32); /*0x5bbe9d*/
        *(_DWORD *)(this + 4) = 0; /*0x5bbea5*/
      }
    }
  }
  RegCloseKey(phkResult); /*0x5bbeb1*/
  return this; /*0x5bb787*/
}



// ==== 0x005BBED0  FileFind::Close  this=AbstractClass  sig=ida-proto ====
// attributes: thunk
void __thiscall FileFind::Close(void **this)
{
  FileFind::ReleaseAllHandles(this); /*0x5bbed0*/
}



// ==== 0x005BBEE0  FileFind::ReleaseAllHandles  this=FileFind  sig=csp ====
void __thiscall FileFind::ReleaseAllHandles(FileFind *this)
{
  if ( *(_DWORD *)this->__pad_0 ) /*0x5bbee6*/
  {
    __3_YAXPAX_Z(*(void **)this->__pad_0); /*0x5bbeed*/
    *(_DWORD *)this->__pad_0 = 0; /*0x5bbef5*/
  }
  if ( this->FileFind_field_0x04 ) /*0x5bbef7*/
  {
    __3_YAXPAX_Z((void *)this->FileFind_field_0x04); /*0x5bbeff*/
    this->FileFind_field_0x04 = 0; /*0x5bbf07*/
  }
  if ( this->FileFind_field_0x08 ) /*0x5bbf0a*/
  {
    __3_YAXPAX_Z((void *)this->FileFind_field_0x08); /*0x5bbf12*/
    this->FileFind_field_0x08 = 0; /*0x5bbf1a*/
  }
  if ( this->FileFind_field_0x0C ) /*0x5bbf1d*/
  {
    __3_YAXPAX_Z((void *)this->FileFind_field_0x0C); /*0x5bbf25*/
    this->FileFind_field_0x0C = 0; /*0x5bbf2d*/
  }
  if ( this->q004 ) /*0x5bbf30*/
  {
    __3_YAXPAX_Z(*((void **)this + 4)); /*0x5bbf38*/
    this->q004 = 0; /*0x5bbf40*/
  }
  if ( *((_DWORD *)this + 5) ) /*0x5bbf43*/
  {
    __3_YAXPAX_Z(*((void **)this + 5)); /*0x5bbf4b*/
    *((_DWORD *)this + 5) = 0; /*0x5bbf53*/
  }
  if ( *((_DWORD *)this + 6) ) /*0x5bbf56*/
  {
    __3_YAXPAX_Z(*((void **)this + 6)); /*0x5bbf5e*/
    *((_DWORD *)this + 6) = 0; /*0x5bbf66*/
  }
}



// ==== 0x005BBF70  sub_5BBF70  this=-  sig=ida-proto ====
int sub_5BBF70()
{
  dword_ABF138 = 0; /*0x5bbf72*/
  dword_ABF13C = 0; /*0x5bbf77*/
  dword_ABF140 = 0; /*0x5bbf7c*/
  dword_ABF144 = 0; /*0x5bbf81*/
  return 0; /*0x5bbf86*/
}



// ==== 0x005BBF90  sub_5BBF90  this=-  sig=ida-proto ====
void sub_5BBF90()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x5bbf9c*/
  dbl_ABF150 = Math::Sqrt(v0 + v0); /*0x5bbfae*/
}



// ==== 0x005BBFC0  sub_5BBFC0  this=-  sig=ida-proto ====
void sub_5BBFC0()
{
  dbl_ABF210 = dbl_ABF150 / 60.0; /*0x5bbfcc*/
}



// ==== 0x005BBFE0  sub_5BBFE0  this=-  sig=ida-proto ====
void sub_5BBFE0()
{
  dbl_ABF1C0 = 1.0 / dbl_ABF210; /*0x5bbfec*/
}



// ==== 0x005BC000  sub_5BC000  this=-  sig=ida-proto ====
void sub_5BC000()
{
  dbl_ABF1B8 = 0.0174532925199433 * 45.0; /*0x5bc00c*/
}



// ==== 0x005BC020  sub_5BC020  this=-  sig=ida-proto ====
void sub_5BC020()
{
  dbl_ABF158 = 0.0174532925199433 * 60.0; /*0x5bc02c*/
}



// ==== 0x005BC040  sub_5BC040  this=-  sig=ida-proto ====
void sub_5BC040()
{
  dbl_ABF130 = 0.0174532925199433 * 90.0; /*0x5bc04c*/
}



// ==== 0x005BC060  sub_5BC060  this=-  sig=ida-proto ====
__int64 sub_5BC060()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_ABF130 - dbl_ABF158); /*0x5bc072*/
  result = Math::RoundToInt(v0 * dbl_ABF150 * 0.5); /*0x5bc086*/
  dword_ABF218 = result; /*0x5bc08b*/
  return result; /*0x5bc090*/
}



// ==== 0x005BC0A0  sub_5BC0A0  this=-  sig=ida-proto ====
void sub_5BC0A0()
{
  dbl_ABF160 = Math::ArcTan((double)dword_ABF218 * 0.00390625); /*0x5bc0b7*/
}



// ==== 0x005BC0D0  sub_5BC0D0  this=-  sig=ida-proto ====
void sub_5BC0D0()
{
  dbl_ABF1B0 = Math::ArcTan((double)(2 * dword_ABF218) / dbl_ABF150); /*0x5bc0f2*/
}



// ==== 0x005BC100  sub_5BC100  this=-  sig=ida-proto ====
__int64 sub_5BC100()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_ABF218) + 0.5); /*0x5bc11b*/
  dword_ABF20C = result; /*0x5bc120*/
  return result; /*0x5bc126*/
}



// ==== 0x005BC130  sub_5BC130  this=-  sig=ida-proto ====
int sub_5BC130()
{
  word_ABF148 = 0; /*0x5bc132*/
  word_ABF14A = 0; /*0x5bc138*/
  return 0; /*0x5bc13e*/
}



// ==== 0x005BC140  sub_5BC140  this=-  sig=ida-proto ====
int sub_5BC140()
{
  dword_ABF188 = 0; /*0x5bc142*/
  dword_ABF18C = 0; /*0x5bc147*/
  dword_ABF190 = 0; /*0x5bc14c*/
  return 0; /*0x5bc151*/
}



// ==== 0x005BC160  sub_5BC160  this=-  sig=ida-proto ====
int sub_5BC160()
{
  dword_ABF208 = 0; /*0x5bc165*/
  dword_ABF200 = 128; /*0x5bc16f*/
  dword_ABF204 = 128; /*0x5bc174*/
  return 128; /*0x5bc179*/
}



// ==== 0x005BC180  WinMain_Create  this=ObjectClass  sig=csp ====
unsigned __int8 __fastcall sub_5BC180(HINSTANCE a1, HWND a2, char a3)
{
  int *v3; // edi
  _DWORD *v4; // eax
  _BYTE *v5; // esi
  int v6; // edi
  _DWORD *v7; // ebp
  _BYTE *v8; // ecx
  _DWORD *v9; // eax
  int v10; // edx
  int *v11; // ebx
  _BYTE *v12; // ecx
  int v13; // edi
  int v14; // ebp
  _BYTE *v15; // edx
  _DWORD *v16; // eax
  int v17; // esi
  unsigned __int8 result; // al
  int *v19; // [esp+10h] [ebp-4h]
  int v20; // [esp+18h] [ebp+4h]

  v3 = dword_ABF168; /*0x5bc18b*/
  dword_ABF230 = a1; /*0x5bc190*/
  dword_ABF234 = a2; /*0x5bc196*/
  byte_ABF238 = a3; /*0x5bc19c*/
  v20 = 0; /*0x5bc1a1*/
  v19 = dword_ABF168; /*0x5bc1a5*/
  do /*0x5bc24f*/
  {
    v4 = __2_YAPAXI_Z(0x2738u); /*0x5bc1ae*/
    v5 = v4; /*0x5bc1b3*/
    if ( v4 ) /*0x5bc1ba*/
    {
      v4[2503] = 0; /*0x5bc1c0*/
      v4[2502] = v20; /*0x5bc1c6*/
      v4[2504] = 0; /*0x5bc1cc*/
      v4[2505] = 0; /*0x5bc1d2*/
      v4[2506] = 0; /*0x5bc1d8*/
      v4[2507] = 80; /*0x5bc1de*/
      v4[2508] = 25; /*0x5bc1e8*/
      v6 = 0; /*0x5bc1f2*/
      v7 = v4 + 500; /*0x5bc1f4*/
      do /*0x5bc219*/
      {
        v8 = &v5[v6]; /*0x5bc1fa*/
        v9 = v7; /*0x5bc1fd*/
        v10 = 80; /*0x5bc1ff*/
        do /*0x5bc210*/
        {
          *v8 = 32; /*0x5bc204*/
          *v9 = 0; /*0x5bc207*/
          v9 += 25; /*0x5bc209*/
          v8 += 25; /*0x5bc20c*/
          --v10; /*0x5bc20f*/
        }
        while ( v10 ); /*0x5bc210*/
        ++v6; /*0x5bc212*/
        ++v7; /*0x5bc213*/
      }
      while ( v6 < 25 ); /*0x5bc219*/
      v5[10036] = 1; /*0x5bc223*/
      Text::DrawRepeated(v5, 0, 0, 80, 25); /*0x5bc22a*/
      v3 = v19; /*0x5bc22f*/
    }
    else
    {
      v5 = 0; /*0x5bc235*/
    }
    *v3++ = (int)v5; /*0x5bc23b*/
    ++v20; /*0x5bc247*/
    v19 = v3; /*0x5bc24b*/
  }
  while ( (int)v3 < (int)&dword_ABF188 ); /*0x5bc24f*/
  v11 = dword_ABF168; /*0x5bc25b*/
  dword_ABF23C = dword_ABF168[0]; /*0x5bc260*/
  do /*0x5bc2b2*/
  {
    v12 = (_BYTE *)*v11; /*0x5bc266*/
    v13 = 0; /*0x5bc268*/
    v14 = *v11 + 2000; /*0x5bc26a*/
    do /*0x5bc293*/
    {
      v15 = &v12[v13]; /*0x5bc270*/
      v16 = (_DWORD *)v14; /*0x5bc273*/
      v17 = 80; /*0x5bc275*/
      do /*0x5bc28a*/
      {
        *v15 = 32; /*0x5bc27a*/
        *v16 = 0; /*0x5bc27d*/
        v16 += 25; /*0x5bc283*/
        v15 += 25; /*0x5bc286*/
        --v17; /*0x5bc289*/
      }
      while ( v17 ); /*0x5bc28a*/
      ++v13; /*0x5bc28c*/
      v14 += 4; /*0x5bc28d*/
    }
    while ( v13 < 25 ); /*0x5bc293*/
    v12[10036] = 1; /*0x5bc29d*/
    Text::DrawRepeated(v12, 0, 0, 80, 25); /*0x5bc2a4*/
    ++v11; /*0x5bc2a9*/
  }
  while ( (int)v11 < (int)&dword_ABF188 ); /*0x5bc2b2*/
  result = byte_ABF239; /*0x5bc2b4*/
  if ( byte_ABF239 ) /*0x5bc2bf*/
  {
    result = byte_ABF238; /*0x5bc2c1*/
    if ( byte_ABF238 ) /*0x5bc2c8*/
    {
      if ( !dword_ABF240 ) /*0x5bc2d1*/
        CreateDebugOutput(); /*0x5bc2d3*/
      byte_ABF23A = 1; /*0x5bc2e0*/
      ShowWindow(dword_ABF240, 1); /*0x5bc2e7*/
      return (unsigned __int8)SetFocus(dword_ABF234); /*0x5bc2f4*/
    }
  }
  return result; /*0x5bc2b9*/
}



// ==== 0x005BC300  __ioterm  this=-  sig=ida-proto ====
HWND _ioterm()
{
  void **v0; // esi
  HWND result; // eax

  v0 = (void **)dword_ABF168; /*0x5bc301*/
  do /*0x5bc324*/
  {
    if ( *v0 ) /*0x5bc306*/
    {
      __3_YAXPAX_Z(*v0); /*0x5bc30d*/
      *v0 = 0; /*0x5bc315*/
    }
    ++v0; /*0x5bc31b*/
  }
  while ( (int)v0 < (int)&dword_ABF188 ); /*0x5bc324*/
  result = dword_ABF240; /*0x5bc326*/
  if ( dword_ABF240 ) /*0x5bc32e*/
  {
    DeleteObject(dword_ABF244); /*0x5bc336*/
    Object::RemoveObjectArray(dword_ABF240); /*0x5bc342*/
    result = (HWND)DestroyWindow(dword_ABF240); /*0x5bc34e*/
    dword_ABF244 = 0; /*0x5bc354*/
    dword_ABF240 = 0; /*0x5bc35e*/
  }
  return result; /*0x5bc32b*/
}



// ==== 0x005BC3C0  Network_Process  this=-  sig=ida-proto ====
unsigned __int8 sub_5BC3C0()
{
  unsigned __int8 result; // al

  result = byte_ABF238; /*0x5bc3c0*/
  if ( byte_ABF238 ) /*0x5bc3c7*/
  {
    if ( !dword_ABF240 ) /*0x5bc3d0*/
      CreateDebugOutput(); /*0x5bc3d2*/
    byte_ABF23A = 1; /*0x5bc3df*/
    ShowWindow(dword_ABF240, 1); /*0x5bc3e6*/
    return (unsigned __int8)SetFocus(dword_ABF234); /*0x5bc3f3*/
  }
  return result; /*0x5bc3f9*/
}



// ==== 0x005BC400  Mouse::HideWindow  this=MouseClass  sig=ida-proto ====
HWND Mouse_HideWindow()
{
  HWND result; // eax

  result = dword_ABF240; /*0x5bc400*/
  byte_ABF239 = 0; /*0x5bc409*/
  if ( dword_ABF240 ) /*0x5bc40f*/
  {
    byte_ABF23A = 0; /*0x5bc413*/
    return (HWND)ShowWindow(dword_ABF240, 0); /*0x5bc419*/
  }
  return result; /*0x5bc41f*/
}



// ==== 0x005BC440  sub_5BC440  this=-  sig=ida-proto ====
int sub_5BC440()
{
  return dword_ABF23C; /*0x5bc445*/
}



// ==== 0x005BC450  GetTextBufferEntry  this=-  sig=ida-proto ====
int __fastcall sub_5BC450(int a1)
{
  return dword_ABF168[a1]; /*0x5bc457*/
}



// ==== 0x005BC460  sub_5BC460  this=-  sig=ida-proto ====
char __fastcall sub_5BC460(int a1)
{
  _BYTE *v1; // ecx
  int v2; // edi
  _DWORD *v3; // ebx
  _BYTE *v4; // edx
  _DWORD *v5; // eax
  int v6; // esi

  v1 = (_BYTE *)dword_ABF168[a1]; /*0x5bc460*/
  dword_ABF23C = (int)v1; /*0x5bc46a*/
  v2 = 0; /*0x5bc470*/
  v3 = v1 + 2000; /*0x5bc472*/
  do /*0x5bc49b*/
  {
    v4 = &v1[v2]; /*0x5bc478*/
    v5 = v3; /*0x5bc47b*/
    v6 = 80; /*0x5bc47d*/
    do /*0x5bc492*/
    {
      *v4 = 32; /*0x5bc482*/
      *v5 = 0; /*0x5bc485*/
      v5 += 25; /*0x5bc48b*/
      v4 += 25; /*0x5bc48e*/
      --v6; /*0x5bc491*/
    }
    while ( v6 ); /*0x5bc492*/
    ++v2; /*0x5bc494*/
    ++v3; /*0x5bc495*/
  }
  while ( v2 < 25 ); /*0x5bc49b*/
  v1[10036] = 1; /*0x5bc4a5*/
  Text::DrawRepeated(v1, 0, 0, 80, 25); /*0x5bc4ac*/
  return Text::DrawRepeated((void *)dword_ABF23C, 0, 0, 80, 25); /*0x5bc4c4*/
}



// ==== 0x005BC4D0  ObjectClass::method_5BC4D0  this=ObjectClass  sig=csp ====
char sub_5BC4D0(UnitClass *this)
{
  int *v1; // ebx
  int v2; // ecx
  int v3; // edi
  int v4; // ebp
  _BYTE *v5; // edx
  _DWORD *v6; // eax
  int v7; // esi
  char result; // al

  v1 = &dword_ABF168; /*0x5bc4d4*/
  do /*0x5bc525*/
  {
    v2 = *v1; /*0x5bc4d9*/
    v3 = 0; /*0x5bc4db*/
    v4 = *v1 + 2000; /*0x5bc4dd*/
    do /*0x5bc506*/
    {
      v5 = (_BYTE *)(v3 + v2); /*0x5bc4e3*/
      v6 = (_DWORD *)v4; /*0x5bc4e6*/
      v7 = 80; /*0x5bc4e8*/
      do /*0x5bc4fd*/
      {
        *v5 = 32; /*0x5bc4ed*/
        *v6 = 0; /*0x5bc4f0*/
        v6 += 25; /*0x5bc4f6*/
        v5 += 25; /*0x5bc4f9*/
        --v7; /*0x5bc4fc*/
      }
      while ( v7 ); /*0x5bc4fd*/
      ++v3; /*0x5bc4ff*/
      v4 += 4; /*0x5bc500*/
    }
    while ( v3 < 25 ); /*0x5bc506*/
    *(_BYTE *)(v2 + 10036) = 1; /*0x5bc510*/
    result = Text::DrawRepeated((Text *)v2, 0, 0, 80, 25); /*0x5bc517*/
    ++v1; /*0x5bc51c*/
  }
  while ( (int)v1 < (int)&dword_ABF188 ); /*0x5bc525*/
  return result; /*0x5bc527*/
}



// ==== 0x005BC530  CreateDebugOutput  this=-  sig=ida-proto ====
int sub_5BC530()
{
  HDC DC; // ebp
  int DeviceCaps; // eax
  HGDIOBJ v2; // edi
  struct tagRECT Rect; // [esp+10h] [ebp-5Ch] BYREF
  struct tagRECT v5; // [esp+20h] [ebp-4Ch] BYREF
  LOGFONTA lf; // [esp+30h] [ebp-3Ch] BYREF

  dword_ABF240 = CreateDialogParamA(dword_ABF230, (LPCSTR)0xF8, dword_ABF234, DlgProcAudioDebug, 0); /*0x5bc559*/
  TimerPool::AllocSlot(dword_ABF240); /*0x5bc55e*/
  DC = GetDC(dword_ABF240); /*0x5bc570*/
  DeviceCaps = GetDeviceCaps(DC, 90); /*0x5bc577*/
  lf.lfHeight = -MulDiv(8, DeviceCaps, 72); /*0x5bc588*/
  memset(&lf.lfWidth, 0, 24); /*0x5bc5a6*/
  strcpy(lf.lfFaceName, "Courier"); /*0x5bc5d9*/
  dword_ABF244 = CreateFontIndirectA(&lf); /*0x5bc5f3*/
  v2 = SelectObject(DC, dword_ABF244); /*0x5bc5fc*/
  GetTextMetricsA(DC, &dword_ABF1C8); /*0x5bc604*/
  SelectObject(DC, v2); /*0x5bc60c*/
  dword_ABF128 = GetSysColor(15); /*0x5bc618*/
  dword_ABF110 = GetSysColor(8); /*0x5bc621*/
  Rect.left = 0; /*0x5bc62b*/
  Rect.top = 0; /*0x5bc62f*/
  Rect.right = 79 * dword_ABF1C8.tmMaxCharWidth + 20; /*0x5bc64b*/
  Rect.bottom = 25 * (dword_ABF1C8.tmHeight + dword_ABF1C8.tmExternalLeading) + 20; /*0x5bc661*/
  AdjustWindowRect(&Rect, 0xC00000u, 0); /*0x5bc665*/
  GetWindowRect(dword_ABF234, &v5); /*0x5bc677*/
  MoveWindow(dword_ABF240, v5.right + 5, 0, Rect.right - Rect.left, Rect.bottom - Rect.top, 1); /*0x5bc6a4*/
  ShowWindow(dword_ABF240, 0); /*0x5bc6b2*/
  SetFocus(dword_ABF234); /*0x5bc6bf*/
  return ReleaseDC(dword_ABF240, DC); /*0x5bc6d2*/
}



// ==== 0x005BC6E0  DlgProcAudioDebug  this=-  sig=csp ====
INT_PTR __stdcall AudioDebug_DlgProc(HWND hWnd, UINT a2, WPARAM a3, LPARAM a4)
{
  int v5; // ecx
  int v6; // ecx
  int v7; // ecx
  int v8; // ecx
  char *v9; // ecx
  int Index; // eax
  void *Enabled; // eax
  char *v12; // eax
  _DWORD *v13; // ecx
  _BYTE *v14; // ecx
  int v15; // eax
  _BYTE *v16; // ecx
  int v17; // edi
  _DWORD *v18; // ebx
  _BYTE *v19; // edx
  _DWORD *v20; // eax
  int v21; // esi
  int v22; // eax
  int v23; // edi
  _DWORD *v24; // ebx
  _BYTE *v25; // edx
  _DWORD *v26; // eax
  int v27; // esi
  int v28; // [esp-4h] [ebp-50h]
  struct tagPAINTSTRUCT Paint; // [esp+Ch] [ebp-40h] BYREF

  if ( a2 == 15 ) /*0x5bc6ed*/
  {
    InvalidateRect(hWnd, 0, 1); /*0x5bc6f8*/
    BeginPaint(hWnd, &Paint); /*0x5bc704*/
    if ( dword_ABF23C ) /*0x5bc712*/
    {
      if ( byte_ABF23A ) /*0x5bc71b*/
        Text::DrawRepeated((void *)dword_ABF23C, 0, 0, 80, 25); /*0x5bc732*/
    }
    EndPaint(hWnd, &Paint); /*0x5bc73d*/
    return 1; /*0x5bc74e*/
  }
  if ( a2 == 258 ) /*0x5bc756*/
  {
    if ( !dword_ABF224 ) /*0x5bc763*/
    {
      dword_ABF224 = (int)unk_ABF198; /*0x5bc76a*/
      AudioController::Init(unk_ABF198); /*0x5bc770*/
    }
    switch ( a3 ) /*0x5bc78d*/
    {
      case ',': /*0x5bc78d*/
      case '<': /*0x5bc78d*/
        v15 = *(_DWORD *)(dword_ABF23C + 10008) + 1; /*0x5bc9d1*/
        if ( *(_DWORD *)(dword_ABF23C + 10008) == 7 ) /*0x5bc9d5*/
          v15 = 0; /*0x5bc9d7*/
        v16 = (_BYTE *)dword_ABF168[v15]; /*0x5bc9d9*/
        v17 = 0; /*0x5bc9e0*/
        dword_ABF23C = (int)v16; /*0x5bc9e2*/
        v18 = v16 + 2000; /*0x5bc9e8*/
        do /*0x5bca11*/
        {
          v19 = &v16[v17]; /*0x5bc9ee*/
          v20 = v18; /*0x5bc9f1*/
          v21 = 80; /*0x5bc9f3*/
          do /*0x5bca08*/
          {
            *v19 = 32; /*0x5bc9f8*/
            *v20 = 0; /*0x5bc9fb*/
            v20 += 25; /*0x5bca01*/
            v19 += 25; /*0x5bca04*/
            --v21; /*0x5bca07*/
          }
          while ( v21 ); /*0x5bca08*/
          ++v17; /*0x5bca0a*/
          ++v18; /*0x5bca0b*/
        }
        while ( v17 < 25 ); /*0x5bca11*/
        goto LABEL_54; /*0x5bca11*/
      case '.': /*0x5bc78d*/
      case '>': /*0x5bc78d*/
        v22 = *(_DWORD *)(dword_ABF23C + 10008) - 1; /*0x5bca38*/
        if ( v22 < 0 ) /*0x5bca39*/
          v22 = 7; /*0x5bca3b*/
        v16 = (_BYTE *)dword_ABF168[v22]; /*0x5bca40*/
        v23 = 0; /*0x5bca47*/
        dword_ABF23C = (int)v16; /*0x5bca49*/
        v24 = v16 + 2000; /*0x5bca4f*/
        do /*0x5bca78*/
        {
          v25 = &v16[v23]; /*0x5bca55*/
          v26 = v24; /*0x5bca58*/
          v27 = 80; /*0x5bca5a*/
          do /*0x5bca6f*/
          {
            *v25 = 32; /*0x5bca5f*/
            *v26 = 0; /*0x5bca62*/
            v26 += 25; /*0x5bca68*/
            v25 += 25; /*0x5bca6b*/
            --v27; /*0x5bca6e*/
          }
          while ( v27 ); /*0x5bca6f*/
          ++v23; /*0x5bca71*/
          ++v24; /*0x5bca72*/
        }
        while ( v23 < 25 ); /*0x5bca78*/
LABEL_54:
        v16[10036] = 1; /*0x5bca13*/
        Text::DrawRepeated(v16, 0, 0, 80, 25); /*0x5bca22*/
        goto LABEL_45; /*0x5bca27*/
      case '1': /*0x5bc78d*/
      case '2': /*0x5bc78d*/
      case '3': /*0x5bc78d*/
      case '4': /*0x5bc78d*/
        dword_ABF22C = a3 - 49; /*0x5bc799*/
        return 0; /*0x5bc7a5*/
      case 'A': /*0x5bc78d*/
      case 'a': /*0x5bc78d*/
        v14 = (_BYTE *)dword_ABF17C; /*0x5bc987*/
        goto LABEL_44; /*0x5bc987*/
      case 'E': /*0x5bc78d*/
      case 'e': /*0x5bc78d*/
        v7 = dword_ABF220; /*0x5bc80f*/
        if ( dword_ABF220 > 16 || dword_ABF220 >= g_InfantrySelectState ) /*0x5bc820*/
        {
          v7 = 0; /*0x5bc822*/
          dword_ABF220 = 0; /*0x5bc824*/
        }
        UpdateThemeManager(v7, 2, dword_ABF22C); /*0x5bc835*/
        goto LABEL_15; /*0x5bc835*/
      case 'I': /*0x5bc78d*/
      case 'i': /*0x5bc78d*/
        v14 = (_BYTE *)dword_ABF184; /*0x5bc9b6*/
        goto LABEL_44; /*0x5bc9bc*/
      case 'L': /*0x5bc78d*/
      case 'l': /*0x5bc78d*/
        if ( AudioSource::Get((int **)dword_ABF224) ) /*0x5bc862*/
        {
          AudioFile::Stop((_DWORD *)dword_ABF224); /*0x5bc871*/
          return 0; /*0x5bc878*/
        }
        else
        {
          v28 = dword_ABF224; /*0x5bc881*/
          v9 = aTestenvelopefs; /*0x5bc887*/
LABEL_31:
          Index = VocClass::FindIndex(v9); /*0x5bc88c*/
          PlayVocClass(Index, 0x2000, 1.0, v28); /*0x5bc898*/
          return 0; /*0x5bc89f*/
        }
      case 'M': /*0x5bc78d*/
      case 'm': /*0x5bc78d*/
        v14 = (_BYTE *)dword_ABF180; /*0x5bc9be*/
LABEL_44:
        dword_ABF23C = (int)v14; /*0x5bc98d*/
        TextBuffer::Init(v14); /*0x5bc993*/
LABEL_45:
        Text::DrawRepeated((void *)dword_ABF23C, 0, 0, 80, 25); /*0x5bc998*/
        return 0; /*0x5bc9b3*/
      case 'N': /*0x5bc78d*/
      case 'n': /*0x5bc78d*/
        dword_ABF21C = dword_ABF21C == 0; /*0x5bc968*/
        return 0; /*0x5bc974*/
      case 'O': /*0x5bc78d*/
      case 'o': /*0x5bc78d*/
        v8 = dword_ABF220; /*0x5bc837*/
        if ( dword_ABF220 > 16 || dword_ABF220 >= g_InfantrySelectState ) /*0x5bc848*/
        {
          v8 = 0; /*0x5bc84a*/
          dword_ABF220 = 0; /*0x5bc84c*/
        }
        UpdateThemeManager(v8, -1, -1); /*0x5bc857*/
        goto LABEL_15; /*0x5bc857*/
      case 'Q': /*0x5bc78d*/
      case 'q': /*0x5bc78d*/
        v5 = dword_ABF220; /*0x5bc7a8*/
        if ( dword_ABF220 > 16 || dword_ABF220 >= g_InfantrySelectState ) /*0x5bc7b9*/
        {
          v5 = 0; /*0x5bc7bb*/
          dword_ABF220 = 0; /*0x5bc7bd*/
        }
        UpdateThemeManager(v5, 1, dword_ABF22C); /*0x5bc7ce*/
        goto LABEL_15; /*0x5bc7ce*/
      case 'S': /*0x5bc78d*/
      case 's': /*0x5bc78d*/
        sub_406EE0(); /*0x5bc977*/
        return 0; /*0x5bc984*/
      case 'T': /*0x5bc78d*/
      case 't': /*0x5bc78d*/
        v28 = 0; /*0x5bc8a8*/
        v9 = aTesteffect; /*0x5bc8af*/
        goto LABEL_31; /*0x5bc8b4*/
      case 'W': /*0x5bc78d*/
      case 'w': /*0x5bc78d*/
        v6 = dword_ABF220; /*0x5bc7e9*/
        if ( dword_ABF220 > 16 || dword_ABF220 >= g_InfantrySelectState ) /*0x5bc7fa*/
        {
          v6 = 0; /*0x5bc7fc*/
          dword_ABF220 = 0; /*0x5bc7fe*/
        }
        UpdateThemeManager(v6, 0, dword_ABF22C); /*0x5bc80d*/
LABEL_15:
        ++dword_ABF220; /*0x5bc7d3*/
        return 0; /*0x5bc7e6*/
      case '[': /*0x5bc78d*/
        if ( dword_ABF228 >= 5 ) /*0x5bc8bd*/
          return 0; /*0x5bc8bd*/
        Enabled = Audio::GetEnabled(); /*0x5bc8c6*/
        v12 = AudioStream::Constructor(Enabled, 0x1388u); /*0x5bc8cd*/
        *(&dword_ABF114 + dword_ABF228) = v12; /*0x5bc8da*/
        if ( !v12 ) /*0x5bc8e1*/
          return 0; /*0x5bc8e1*/
        if ( ThreadAudioMixerMain(v12, aIntroWav, 1) ) /*0x5bc8ec*/
        {
          ++dword_ABF228; /*0x5bc8fc*/
          return 0; /*0x5bc908*/
        }
        AudioSample::Destructor(*(&dword_ABF114 + dword_ABF228)); /*0x5bc912*/
        break; /*0x5bc912*/
      case ']': /*0x5bc78d*/
        if ( dword_ABF228 <= 0 ) /*0x5bc929*/
          return 0; /*0x5bc929*/
        v13 = (_DWORD *)*(&dword_ABF110 + dword_ABF228--); /*0x5bc92b*/
        Audio::Release(v13); /*0x5bc938*/
        AudioSample::Destructor(*(&dword_ABF114 + dword_ABF228)); /*0x5bc94a*/
        return 0; /*0x5bc957*/
      default:
        return 0;
    }
    return 0; /*0x5bc912*/
  }
  if ( a2 != 273 ) /*0x5bca98*/
    return 0; /*0x5bc91f*/
  byte_ABF239 = 0; /*0x5bcaa3*/
  if ( dword_ABF240 ) /*0x5bcaac*/
  {
    byte_ABF23A = 0; /*0x5bcab1*/
    ShowWindow(dword_ABF240, 0); /*0x5bcab8*/
  }
  return 1; /*0x5bc743*/
}



// ==== 0x005BCB90  ObjectClass::method_5BCB90  this=ObjectClass  sig=csp ====
int __thiscall sub_5BCB90(UnitClass *this, int a2)
{
  int v3; // edi
  char *v4; // ebx
  _BYTE *v5; // ecx
  char *v6; // eax
  int v7; // edx

  v3 = 0; /*0x5bcb9c*/
  *((_DWORD *)this + 2502) = a2; /*0x5bcb9e*/
  *((_DWORD *)this + 2503) = 0; /*0x5bcba4*/
  *((_DWORD *)this + 2504) = 0; /*0x5bcbaa*/
  *((_DWORD *)this + 2505) = 0; /*0x5bcbb0*/
  *((_DWORD *)this + 2506) = 0; /*0x5bcbb6*/
  *((_DWORD *)this + 2507) = 80; /*0x5bcbbc*/
  *((_DWORD *)this + 2508) = 25; /*0x5bcbc6*/
  v4 = &this->ToolTipText[232]; /*0x5bcbd0*/
  do /*0x5bcbf5*/
  {
    v5 = (char *)this + v3; /*0x5bcbd6*/
    v6 = v4; /*0x5bcbd9*/
    v7 = 80; /*0x5bcbdb*/
    do /*0x5bcbec*/
    {
      *v5 = 32; /*0x5bcbe0*/
      *(_DWORD *)v6 = 0; /*0x5bcbe3*/
      v6 += 100; /*0x5bcbe5*/
      v5 += 25; /*0x5bcbe8*/
      --v7; /*0x5bcbeb*/
    }
    while ( v7 ); /*0x5bcbec*/
    ++v3; /*0x5bcbee*/
    v4 += 4; /*0x5bcbef*/
  }
  while ( v3 < 25 ); /*0x5bcbf5*/
  *((_BYTE *)this + 10036) = 1; /*0x5bcbff*/
  Text::DrawRepeated((Text *)this, 0, 0, 80, 25); /*0x5bcc06*/
  return (int)this; /*0x5bcc0d*/
}



// ==== 0x005BCC20  nullsub_174  this=-  sig=ida-proto ====
void nullsub_174()
{
  ; /*0x5bcc20*/
}



// ==== 0x005BCC30  ObjectClass::method_5BCC30  this=ObjectClass  sig=csp ====
int __thiscall sub_5BCC30(ObjectClass *this)
{
  return *((_DWORD *)this + 2502); /*0x5bcc36*/
}



// ==== 0x005BCC40  Network::validateConnection  this=Network  sig=csp ====
int __thiscall Network::validateConnection(Network *this, int a2, int a3)
{
  *((_DWORD *)this + 2503) = a2; /*0x5bcc48*/
  *((_DWORD *)this + 2504) = a3; /*0x5bcc4e*/
  return a2; /*0x5bcc54*/
}



// ==== 0x005BCC60  ObjectClass::method_5BCC60  this=ObjectClass  sig=csp ====
int __thiscall sub_5BCC60(ObjectClass *this, int a2, int a3, int a4, int a5)
{
  *((_DWORD *)this + 2505) = a2; /*0x5bcc68*/
  *((_DWORD *)this + 2506) = a3; /*0x5bcc72*/
  *((_DWORD *)this + 2507) = a4; /*0x5bcc7c*/
  *((_DWORD *)this + 2508) = a5; /*0x5bcc82*/
  return a4; /*0x5bcc88*/
}



// ==== 0x005BCC90  TextBuffer::Init  this=TextBuffer  sig=csp ====
int __thiscall TextBuffer::Init(TextBuffer *this)
{
  int v1; // edi
  TextBuffer *v2; // ebx
  TextBuffer *v3; // edx
  TextBuffer *v4; // eax
  int v5; // esi

  v1 = 0; /*0x5bcc93*/
  v2 = this + 2000; /*0x5bcc95*/
  do /*0x5bccbe*/
  {
    v3 = this + v1; /*0x5bcc9b*/
    v4 = v2; /*0x5bcc9e*/
    v5 = 80; /*0x5bcca0*/
    do /*0x5bccb5*/
    {
      *v3 = (TextBuffer)32; /*0x5bcca5*/
      *(_DWORD *)v4 = 0; /*0x5bcca8*/
      v4 += 100; /*0x5bccae*/
      v3 += 25; /*0x5bccb1*/
      --v5; /*0x5bccb4*/
    }
    while ( v5 ); /*0x5bccb5*/
    ++v1; /*0x5bccb7*/
    v2 += 4; /*0x5bccb8*/
  }
  while ( v1 < 25 ); /*0x5bccbe*/
  this->q2734 = 1; /*0x5bccc8*/
  return Text::DrawRepeated((Text *)this, 0, 0, 80, 25); /*0x5bccd4*/
}



// ==== 0x005BCCE0  ObjectClass::method_5BCCE0  this=ObjectClass  sig=csp ====
char __thiscall sub_5BCCE0(ObjectClass *this)
{
  return *((_BYTE *)this + 10036); /*0x5bcce6*/
}



// ==== 0x005BCE10  ObjectClass::method_5BCE10  this=ObjectClass  sig=csp ====
char __thiscall sub_5BCE10(ObjectClass *this, int a2)
{
  char result; // al
  int v4; // eax
  int v5; // edx
  int v6; // ebx
  int v7; // ebp
  char *v8; // edi
  int v9; // ecx
  char *v10; // ebx
  char *v11; // ecx
  int v12; // ebx
  int v13; // eax
  _DWORD *v14; // ebp
  int v15; // ebp
  char *v16; // edi
  int v17; // ebx
  ObjectClass *v18; // ecx
  int v19; // eax
  void **v20; // ebp
  char *v21; // [esp+4h] [ebp-Ch]
  _BYTE *v22; // [esp+8h] [ebp-8h]
  int v23; // [esp+Ch] [ebp-4h]
  int v24; // [esp+Ch] [ebp-4h]
  int v25; // [esp+14h] [ebp+4h]
  int v26; // [esp+14h] [ebp+4h]

  result = BYTE2(g_MissionQueueFrame.localVariables[493]); /*0x5bce10*/
  if ( BYTE2(g_MissionQueueFrame.localVariables[493]) ) /*0x5bce1d*/
  {
    v4 = *((_DWORD *)this + 2505); /*0x5bce27*/
    v5 = *((_DWORD *)this + 2506); /*0x5bce2d*/
    v6 = *((_DWORD *)this + 2508); /*0x5bce34*/
    v7 = *((_DWORD *)this + 2507); /*0x5bce3b*/
    if ( a2 <= 0 ) /*0x5bce44*/
    {
      if ( a2 < 0 ) /*0x5bcef9*/
      {
        v15 = v4 + v7; /*0x5bcefb*/
        if ( v4 < v15 ) /*0x5bceff*/
        {
          v26 = v6 + v5 - 1; /*0x5bcf08*/
          v16 = (char *)this + 20 * v4 + 5 * v4; /*0x5bcf0f*/
          v17 = 500 - (_DWORD)this; /*0x5bcf1f*/
          v18 = (ObjectClass *)((char *)this + 80 * v4 + 20 * v4 + 4 * v5 + 2000); /*0x5bcf23*/
          v24 = v15 - v4; /*0x5bcf2a*/
          do /*0x5bcf6f*/
          {
            v19 = v26; /*0x5bcf2e*/
            if ( v26 > v5 ) /*0x5bcf34*/
            {
              v20 = &this->AbstractClass + (_DWORD)&v16[v17 + v26]; /*0x5bcf3a*/
              do /*0x5bcf50*/
              {
                --v20; /*0x5bcf41*/
                v16[v19] = v16[v19 - 1]; /*0x5bcf44*/
                v20[1] = *v20; /*0x5bcf4a*/
                --v19; /*0x5bcf4d*/
              }
              while ( v19 > v5 ); /*0x5bcf50*/
              v17 = 500 - (_DWORD)this; /*0x5bcf52*/
            }
            v16[v5] = 32; /*0x5bcf5a*/
            v18->AbstractClass = 0; /*0x5bcf5e*/
            v18 = (ObjectClass *)((char *)v18 + 100); /*0x5bcf64*/
            v16 += 25; /*0x5bcf67*/
            --v24; /*0x5bcf6b*/
          }
          while ( v24 ); /*0x5bcf6f*/
        }
      }
    }
    else if ( v4 < v4 + v7 ) /*0x5bce53*/
    {
      v25 = v6 + v5 - 1; /*0x5bce5d*/
      v8 = (char *)this + 25 * v4; /*0x5bce67*/
      v9 = v5 + v6 + 25 * v4; /*0x5bce6c*/
      v10 = (char *)this + v9 - 1; /*0x5bce72*/
      v11 = (char *)this + 4 * v9 + 1996; /*0x5bce76*/
      v22 = v10; /*0x5bce7d*/
      v23 = *((_DWORD *)this + 2507); /*0x5bce97*/
      v21 = (char *)this + 80 * v4 + 20 * v4 + 4 * v5 + 2000; /*0x5bce9b*/
      v12 = v25; /*0x5bce9f*/
      do /*0x5bcef5*/
      {
        v13 = v5; /*0x5bcea5*/
        if ( v5 < v12 ) /*0x5bcea7*/
        {
          v14 = v21; /*0x5bcea9*/
          do /*0x5bcec4*/
          {
            ++v14; /*0x5bceb1*/
            v8[v13] = v8[v13 + 1]; /*0x5bceb4*/
            *(v14 - 1) = *v14; /*0x5bceba*/
            v12 = v25; /*0x5bcebd*/
            ++v13; /*0x5bcec1*/
          }
          while ( v13 < v25 ); /*0x5bcec4*/
        }
        v11 += 100; /*0x5bced1*/
        *v22 = 32; /*0x5bced4*/
        v22 += 25; /*0x5bceda*/
        *((_DWORD *)v11 - 25) = 0; /*0x5bcee2*/
        v8 += 25; /*0x5bcee9*/
        v21 += 100; /*0x5bceed*/
        --v23; /*0x5bcef1*/
      }
      while ( v23 ); /*0x5bcef5*/
    }
    return Text::DrawRepeated((Text *)this, 0, 0, 80, 25); /*0x5bcf7b*/
  }
  return result; /*0x5bcf83*/
}



// ==== 0x005BD0D0  Debug::ScrollText  this=ObjectClass  sig=csp ====
char __thiscall Debug::ScrollText(int this, const char *a2)
{
  char result; // al
  int v4; // eax
  int v5; // ebp
  int v6; // edx
  int v7; // edi
  int v8; // ebx
  const char *v9; // eax
  int v10; // eax
  _DWORD *v11; // [esp+4h] [ebp-10h]
  char *v12; // [esp+8h] [ebp-Ch]
  int v13; // [esp+Ch] [ebp-8h]
  const char *i; // [esp+10h] [ebp-4h]
  char v15; // [esp+18h] [ebp+4h]

  result = BYTE2(g_MissionQueueFrame.localVariables[493]); /*0x5bd0d0*/
  if ( BYTE2(g_MissionQueueFrame.localVariables[493]) ) /*0x5bd0dd*/
  {
    v4 = *(_DWORD *)(this + 10020); /*0x5bd0ef*/
    v5 = *(_DWORD *)(this + 10012) + v4; /*0x5bd108*/
    v13 = *(_DWORD *)(this + 10016) + *(_DWORD *)(this + 10024); /*0x5bd10e*/
    v6 = v4 + *(_DWORD *)(this + 10028); /*0x5bd112*/
    *(_BYTE *)(this + 10036) = 0; /*0x5bd119*/
    v7 = v5 + strlen(a2); /*0x5bd127*/
    if ( v7 > v6 ) /*0x5bd12b*/
      v7 = v6; /*0x5bd12d*/
    v8 = v5; /*0x5bd131*/
    if ( v5 < v7 ) /*0x5bd133*/
    {
      v12 = (char *)(this + v13 + 20 * v5 + 5 * v5); /*0x5bd148*/
      v9 = &a2[-v5]; /*0x5bd15c*/
      v11 = (_DWORD *)(this + 4 * (v13 + 4 * (5 * v5 + 100) + 5 * v5 + 100)); /*0x5bd15e*/
      for ( i = &a2[-v5]; ; v9 = i ) /*0x5bd162*/
      {
        v15 = v9[v8]; /*0x5bd16f*/
        *v12 = Debug_Helper(v15); /*0x5bd187*/
        *v11 = *(_DWORD *)(this + 10000); /*0x5bd18f*/
        if ( v15 == 10 ) /*0x5bd197*/
        {
          v10 = *(_DWORD *)(this + 10016); /*0x5bd199*/
          *(_DWORD *)(this + 10012) = 0; /*0x5bd19f*/
          *(_DWORD *)(this + 10016) = v10 + 1; /*0x5bd1aa*/
        }
        else
        {
          ++*(_DWORD *)(this + 10012); /*0x5bd1b2*/
        }
        ++v8; /*0x5bd1c0*/
        v11 += 25; /*0x5bd1c9*/
        v12 += 25; /*0x5bd1cd*/
        if ( v8 >= v7 ) /*0x5bd1d1*/
          break; /*0x5bd1d1*/
      }
    }
    return Text::DrawRepeated((Text *)this, v5, v13, v7 - v5, 1); /*0x5bd1e0*/
  }
  return result; /*0x5bd1e8*/
}



// ==== 0x005BD1F0  Debug::Printf  this=CellStruct  sig=csp ====
char Debug_Printf(int a1, char *Format, ...)
{
  char result; // al
  char Buffer[256]; // [esp+0h] [ebp-100h] BYREF
  va_list va; // [esp+10Ch] [ebp+Ch] BYREF

  va_start(va, Format);
  result = byte_ABF23A; /*0x5bd1f0*/
  if ( byte_ABF23A ) /*0x5bd1fd*/
  {
    vsprintf(Buffer, Format, va); /*0x5bd214*/
    Buffer[255] = 0; /*0x5bd227*/
    return Debug::ScrollText(Buffer); /*0x5bd230*/
  }
  return result; /*0x5bd235*/
}



// ==== 0x005BD240  sub_5BD240  this=-  sig=ida-proto ====
char __cdecl sub_5BD240(int a1, size_t BufferCount, wchar_t Format)
{
  char result; // al
  char v4[256]; // [esp+0h] [ebp-300h] BYREF
  wchar_t Buffer[256]; // [esp+100h] [ebp-200h] BYREF

  result = byte_ABF23A; /*0x5bd240*/
  if ( byte_ABF23A ) /*0x5bd24d*/
  {
    vswprintf(Buffer, BufferCount, &Format, *(va_list *)v4); /*0x5bd267*/
    sprintf(v4, "%S", Buffer); /*0x5bd27e*/
    return Debug::ScrollText(a1, v4); /*0x5bd292*/
  }
  return result; /*0x5bd297*/
}



// ==== 0x005BD2E0  ObjectClass::method_5BD2E0  this=ObjectClass  sig=csp ====
char __thiscall sub_5BD2E0(ObjectClass *this, const wchar_t *a2, int a3, int a4, int a5)
{
  char result; // al
  char Buffer[1024]; // [esp+4h] [ebp-400h] BYREF

  result = BYTE2(g_MissionQueueFrame.localVariables[493]); /*0x5bd2e0*/
  if ( BYTE2(g_MissionQueueFrame.localVariables[493]) ) /*0x5bd2f0*/
  {
    *((_DWORD *)this + 2503) = a3; /*0x5bd300*/
    *((_DWORD *)this + 2504) = a4; /*0x5bd306*/
    if ( BYTE2(g_MissionQueueFrame.localVariables[493]) ) /*0x5bd313*/
      *((_DWORD *)this + 2500) = a5; /*0x5bd31c*/
    sprintf(Buffer, (const char *const)&stru_82BA00.NumberImpassableRows, a2); /*0x5bd334*/
    return Debug::ScrollText((int)this, Buffer); /*0x5bd343*/
  }
  return result; /*0x5bd348*/
}



// ==== 0x005BD360  Debug_Helper  this=ObjectClass  sig=csp ====
char __stdcall sub_5BD360(char a1)
{
  char result; // al

  result = a1; /*0x5bd360*/
  switch ( a1 ) /*0x5bd366*/
  {
    case 10: /*0x5bd366*/
      return 32; /*0x5bd368*/
    case -77: /*0x5bd366*/
      return 124; /*0x5bd371*/
    case -60: /*0x5bd366*/
      return 45; /*0x5bd37a*/
    case -51: /*0x5bd366*/
      return 61; /*0x5bd383*/
    case -38: /*0x5bd366*/
    case -62: /*0x5bd366*/
    case -65: /*0x5bd366*/
    case -58: /*0x5bd366*/
    case -61: /*0x5bd366*/
    case -47: /*0x5bd366*/
    case -59: /*0x5bd366*/
    case -40: /*0x5bd366*/
    case -75: /*0x5bd366*/
    case -64: /*0x5bd366*/
    case -63: /*0x5bd366*/
    case -39: /*0x5bd366*/
    case -43: /*0x5bd366*/
    case -76: /*0x5bd366*/
      return 43; /*0x5bd3c0*/
  }
  return result; /*0x5bd36a*/
}



// ==== 0x005BD3D0  Text::DrawCharAtGrid  this=Text  sig=csp ====
BOOL __thiscall Text::DrawCharAtGrid(Text *this, HDC hdc, int String, int a4)
{
  int v4; // ebx
  int v5; // esi
  int v7; // ebp

  v4 = a4; /*0x5bd3d1*/
  v5 = String; /*0x5bd3d7*/
  v7 = *((_DWORD *)this + 20 * String + 5 * String + a4 + 500); /*0x5bd3e7*/
  if ( v7 != *((_DWORD *)this + 2501) ) /*0x5bd3f2*/
  {
    if ( v7 == 1 ) /*0x5bd3f7*/
    {
      SetBkColor(hdc, g_MissionQueueFrame.localVariables[419]); /*0x5bd405*/
      SetTextColor(hdc, g_MissionQueueFrame.localVariables[425]); /*0x5bd417*/
    }
    else
    {
      SetBkColor(hdc, g_MissionQueueFrame.localVariables[425]); /*0x5bd424*/
      SetTextColor(hdc, g_MissionQueueFrame.localVariables[419]); /*0x5bd436*/
    }
    *((_DWORD *)this + 2501) = v7; /*0x5bd43c*/
  }
  LOBYTE(String) = *((_BYTE *)&this->Text_field_00 + 20 * v5 + 5 * v5 + v4); /*0x5bd45a*/
  return TextOutA( /*0x5bd484*/
           hdc,
           v5 * g_MissionQueueFrame.localVariables[471] + 10,
           v4 * (g_MissionQueueFrame.localVariables[469] + g_MissionQueueFrame.localVariables[465]) + 10,
           (LPCSTR)&String,
           1);
}



// ==== 0x005BD490  Text::DrawRepeated  this=Text  sig=csp ====
int __thiscall Text::DrawRepeated(Text *this, int String, int a3, int a4, int a5)
{
  int result; // eax
  HDC DC; // edi
  int v7; // ebx
  int v8; // eax
  bool v9; // of
  int v10; // esi
  int v11; // ebp
  HGDIOBJ h; // [esp+8h] [ebp-4h]
  int v14; // [esp+14h] [ebp+8h]

  LOBYTE(result) = BYTE2(g_MissionQueueFrame.localVariables[493]); /*0x5bd493*/
  if ( BYTE2(g_MissionQueueFrame.localVariables[493]) ) /*0x5bd49f*/
  {
    if ( this == (Text *)g_MissionQueueFrame.localVariables[494] ) /*0x5bd4ab*/
    {
      DC = GetDC((HWND)g_MissionQueueFrame.localVariables[495]); /*0x5bd4bd*/
      SetBkMode(DC, 2); /*0x5bd4c2*/
      SetBkColor(DC, g_MissionQueueFrame.localVariables[425]); /*0x5bd4d0*/
      result = SetTextColor(DC, g_MissionQueueFrame.localVariables[419]); /*0x5bd4de*/
      if ( DC ) /*0x5bd4e6*/
      {
        v7 = a3; /*0x5bd4f6*/
        h = SelectObject(DC, (HGDIOBJ)g_MissionQueueFrame.localVariables[496]); /*0x5bd4fe*/
        v8 = a3 + a5; /*0x5bd502*/
        v9 = __OFSUB__(a3, a3 + a5); /*0x5bd505*/
        v14 = a3 + a5; /*0x5bd507*/
        if ( -a5 < 0 != v9 ) /*0x5bd50b*/
        {
          v10 = String; /*0x5bd513*/
          v11 = String + a4; /*0x5bd517*/
          do /*0x5bd53a*/
          {
            if ( v10 < v11 ) /*0x5bd51c*/
            {
              do /*0x5bd52d*/
                Text::DrawCharAtGrid(this, DC, v10++, v7); /*0x5bd525*/
              while ( v10 < v11 ); /*0x5bd52d*/
              v10 = String; /*0x5bd52f*/
              v8 = v14; /*0x5bd533*/
            }
            ++v7; /*0x5bd537*/
          }
          while ( v7 < v8 ); /*0x5bd53a*/
        }
        SelectObject(DC, h); /*0x5bd544*/
        return ReleaseDC((HWND)g_MissionQueueFrame.localVariables[495], DC); /*0x5bd552*/
      }
    }
  }
  return result; /*0x5bd559*/
}



// ==== 0x005BD560  ObjectClass::method_5BD560  this=ObjectClass  sig=csp ====
_DWORD *__thiscall sub_5BD560(ObjectClass *this)
{
  LOBYTE(this->AbstractClass) = 0; /*0x5bd564*/
  this->? = 0; /*0x5bd566*/
  this->? = 0; /*0x5bd569*/
  this->? = 0; /*0x5bd56c*/
  return &this->AbstractClass; /*0x5bd56f*/
}



// ==== 0x005BD570  File::LoadFileHVA  this=File  sig=csp ====
_DWORD *__thiscall File::LoadFileHVA(File *this, int a2)
{
  this->__pad_0[0] = 0; /*0x5bd575*/
  *(_DWORD *)&this->File_field_0x2[2] = 0; /*0x5bd577*/
  *(_DWORD *)&this->__pad_6[2] = 0; /*0x5bd57a*/
  *(_DWORD *)&this->__pad_6[6] = 0; /*0x5bd57d*/
  if ( !File::ParseFileHVA((int)this, a2) ) /*0x5bd585*/
    this->__pad_0[0] = 1; /*0x5bd58e*/
  return this->__pad_0; /*0x5bd593*/
}



// ==== 0x005BD5A0  String::Release  this=String  sig=csp ====
int __thiscall String::Release(String *this)
{
  int result; // eax

  result = this->u32_C; /*0x5bd5a3*/
  if ( result ) /*0x5bd5a8*/
    __3_YAXPAX_Z(*((void **)this + 3)); /*0x5bd5ab*/
  this->u32_C = 0; /*0x5bd5b3*/
  return result; /*0x5bd5ba*/
}



// ==== 0x005BD5C0  File::ParseFileHVA  this=File  sig=csp ====
int __thiscall HVA_ParseFile(int this, int a2)
{
  int v3; // esi
  int result; // eax
  void *v5; // eax
  int v6; // edx
  void *v7; // eax
  unsigned int v8; // ebp
  const void *v9; // eax
  void *v10; // edi
  int v11; // [esp+1Ch] [ebp-7Ch]
  _BYTE v12[16]; // [esp+20h] [ebp-78h] BYREF
  int v13; // [esp+30h] [ebp-68h]
  int v14; // [esp+34h] [ebp-64h]
  _BYTE v15[48]; // [esp+38h] [ebp-60h] BYREF

  if ( *(_DWORD *)(this + 12) ) /*0x5bd5c9*/
    __3_YAXPAX_Z(*(void **)(this + 12)); /*0x5bd5d3*/
  v3 = a2; /*0x5bd5db*/
  *(_DWORD *)(this + 12) = 0; /*0x5bd5e2*/
  result = (*(int (__thiscall **)(int, int))(*(_DWORD *)a2 + 28))(a2, 1); /*0x5bd5eb*/
  if ( result ) /*0x5bd5f0*/
  {
    (*(void (__thiscall **)(int, _BYTE *, int))(*(_DWORD *)a2 + 36))(a2, v12, 24); /*0x5bd607*/
    v5 = *(void **)(this + 12); /*0x5bd60a*/
    v6 = v13; /*0x5bd611*/
    *(_DWORD *)(this + 4) = v14; /*0x5bd617*/
    *(_DWORD *)(this + 8) = v6; /*0x5bd61a*/
    if ( v5 ) /*0x5bd61d*/
      __3_YAXPAX_Z(v5); /*0x5bd620*/
    v7 = __2_YAPAXI_Z(48 * *(_DWORD *)(this + 4) * *(_DWORD *)(this + 8)); /*0x5bd636*/
    if ( !v7 ) /*0x5bd640*/
      v7 = 0; /*0x5bd649*/
    *(_DWORD *)(this + 12) = v7; /*0x5bd64d*/
    if ( v7 ) /*0x5bd650*/
    {
      (*(void (__thiscall **)(int, int, int))(*(_DWORD *)a2 + 40))(a2, 16 * *(_DWORD *)(this + 4), 1); /*0x5bd675*/
      v11 = 0; /*0x5bd67b*/
      if ( *(_DWORD *)(this + 8) ) /*0x5bd678*/
      {
        while ( 1 ) /*0x5bd686*/
        {
          v8 = 0; /*0x5bd686*/
          if ( *(_DWORD *)(this + 4) ) /*0x5bd683*/
            break; /*0x5bd683*/
LABEL_14:
          if ( (unsigned int)++v11 >= *(_DWORD *)(this + 8) ) /*0x5bd6e8*/
            goto LABEL_15; /*0x5bd6e8*/
        }
        while ( (*(int (__thiscall **)(int, _BYTE *, int))(*(_DWORD *)v3 + 36))(v3, v15, 48) == 48 ) /*0x5bd69d*/
        {
          v9 = (const void *)Matrix::Copy12Float(v15); /*0x5bd6a8*/
          v10 = (void *)(*(_DWORD *)(this + 12) + 48 * (v8 + v11 * *(_DWORD *)(this + 4))); /*0x5bd6c7*/
          ++v8; /*0x5bd6c9*/
          qmemcpy(v10, v9, 0x30u); /*0x5bd6ca*/
          v3 = a2; /*0x5bd6cf*/
          if ( v8 >= *(_DWORD *)(this + 4) ) /*0x5bd6d8*/
            goto LABEL_14; /*0x5bd6d8*/
        }
        (*(void (__thiscall **)(int))(*(_DWORD *)v3 + 52))(v3); /*0x5bd704*/
        if ( *(_DWORD *)(this + 12) ) /*0x5bd707*/
          __3_YAXPAX_Z(*(void **)(this + 12)); /*0x5bd70f*/
        *(_DWORD *)(this + 12) = 0; /*0x5bd719*/
        return 0; /*0x5bd721*/
      }
      else
      {
LABEL_15:
        (*(void (__thiscall **)(int))(*(_DWORD *)v3 + 52))(v3); /*0x5bd6ea*/
        return 1; /*0x5bd6f4*/
      }
    }
    else
    {
      *(_DWORD *)(this + 12) = 0; /*0x5bd652*/
      (*(void (__thiscall **)(int))(*(_DWORD *)a2 + 52))(a2); /*0x5bd659*/
      return 0; /*0x5bd65f*/
    }
  }
  return result; /*0x5bd5f2*/
}



// ==== 0x005BD730  Matrix::Scale  this=Matrix  sig=csp ====
int __thiscall Matrix::Scale(Matrix *this, float a2)
{
  int result; // eax
  unsigned int i; // esi
  unsigned int Matrix_field_0x04; // eax
  unsigned int j; // edx
  int v6; // eax
  int v7; // eax

  result = *((_DWORD *)this + 2); /*0x5bd730*/
  for ( i = 0; i < result; ++i ) /*0x5bd738*/
  {
    Matrix_field_0x04 = this->Matrix_field_0x04; /*0x5bd73b*/
    for ( j = 0; j < Matrix_field_0x04; Matrix_field_0x04 = this->Matrix_field_0x04 ) /*0x5bd742*/
    {
      *(float *)(48 * (j + i * Matrix_field_0x04) + *((_DWORD *)this + 3) + 12) = a2 /*0x5bd75e*/
                                                                                * *(float *)(48
                                                                                           * (j + i * Matrix_field_0x04)
                                                                                           + *((_DWORD *)this + 3)
                                                                                           + 12);
      v6 = 48 * (j + this->Matrix_field_0x04 * i); /*0x5bd772*/
      *(float *)(v6 + *((_DWORD *)this + 3) + 28) = a2 * *(float *)(v6 + *((_DWORD *)this + 3) + 28); /*0x5bd77d*/
      v7 = 48 * (j + this->Matrix_field_0x04 * i); /*0x5bd791*/
      ++j; /*0x5bd794*/
      *(float *)(v7 + *((_DWORD *)this + 3) + 44) = a2 * *(float *)(v7 + *((_DWORD *)this + 3) + 44); /*0x5bd79d*/
    }
    result = *((_DWORD *)this + 2); /*0x5bd7a6*/
  }
  return result; /*0x5bd7af*/
}



// ==== 0x005BD7E0  sub_5BD7E0  this=-  sig=ida-proto ====
void sub_5BD7E0()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x5bd7ec*/
  dbl_ABF270 = Math::Sqrt(v0 + v0); /*0x5bd7fe*/
}



// ==== 0x005BD810  sub_5BD810  this=-  sig=ida-proto ====
void sub_5BD810()
{
  dbl_ABF2D0 = dbl_ABF270 / 60.0; /*0x5bd81c*/
}



// ==== 0x005BD830  sub_5BD830  this=-  sig=ida-proto ====
void sub_5BD830()
{
  dbl_ABF2B8 = 1.0 / dbl_ABF2D0; /*0x5bd83c*/
}



// ==== 0x005BD850  sub_5BD850  this=-  sig=ida-proto ====
void sub_5BD850()
{
  dbl_ABF2B0 = 0.0174532925199433 * 45.0; /*0x5bd85c*/
}



// ==== 0x005BD870  sub_5BD870  this=-  sig=ida-proto ====
void sub_5BD870()
{
  dbl_ABF278 = 0.0174532925199433 * 60.0; /*0x5bd87c*/
}



// ==== 0x005BD890  sub_5BD890  this=-  sig=ida-proto ====
void sub_5BD890()
{
  dbl_ABF248 = 0.0174532925199433 * 90.0; /*0x5bd89c*/
}



// ==== 0x005BD8B0  sub_5BD8B0  this=-  sig=ida-proto ====
__int64 sub_5BD8B0()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_ABF248 - dbl_ABF278); /*0x5bd8c2*/
  result = Math::RoundToInt(v0 * dbl_ABF270 * 0.5); /*0x5bd8d6*/
  dword_ABF2D8 = result; /*0x5bd8db*/
  return result; /*0x5bd8e0*/
}



// ==== 0x005BD8F0  sub_5BD8F0  this=-  sig=ida-proto ====
void sub_5BD8F0()
{
  dbl_ABF280 = Math::ArcTan((double)dword_ABF2D8 * 0.00390625); /*0x5bd907*/
}



// ==== 0x005BD920  sub_5BD920  this=-  sig=ida-proto ====
void sub_5BD920()
{
  dbl_ABF298 = Math::ArcTan((double)(2 * dword_ABF2D8) / dbl_ABF270); /*0x5bd942*/
}



// ==== 0x005BD950  sub_5BD950  this=-  sig=ida-proto ====
__int64 sub_5BD950()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_ABF2D8) + 0.5); /*0x5bd96b*/
  dword_ABF2CC = result; /*0x5bd970*/
  return result; /*0x5bd976*/
}



// ==== 0x005BD980  sub_5BD980  this=-  sig=ida-proto ====
int sub_5BD980()
{
  word_ABF268 = 0; /*0x5bd982*/
  word_ABF26A = 0; /*0x5bd988*/
  return 0; /*0x5bd98e*/
}



// ==== 0x005BD990  sub_5BD990  this=-  sig=ida-proto ====
int sub_5BD990()
{
  dword_ABF288 = 0; /*0x5bd992*/
  dword_ABF28C = 0; /*0x5bd997*/
  dword_ABF290 = 0; /*0x5bd99c*/
  return 0; /*0x5bd9a1*/
}



// ==== 0x005BD9B0  sub_5BD9B0  this=-  sig=ida-proto ====
int sub_5BD9B0()
{
  dword_ABF2C8 = 0; /*0x5bd9b5*/
  dword_ABF2C0 = 128; /*0x5bd9bf*/
  dword_ABF2C4 = 128; /*0x5bd9c4*/
  return 128; /*0x5bd9c9*/
}



// ==== 0x005BD9D0  sub_5BD9D0  this=-  sig=ida-proto ====
int sub_5BD9D0()
{
  dword_ABF258 = 0; /*0x5bd9d2*/
  dword_ABF25C = 0; /*0x5bd9d7*/
  dword_ABF260 = 0; /*0x5bd9dc*/
  dword_ABF264 = 0; /*0x5bd9e1*/
  return 0; /*0x5bd9e6*/
}



// ==== 0x005BD9F0  sub_5BD9F0  this=-  sig=ida-proto ====
int sub_5BD9F0()
{
  dword_ABF2A0 = Timer::GetTicks(); /*0x5bd9ff*/
  dword_ABF2A8 = 0; /*0x5bda04*/
  return atexit(sub_5BDA20); /*0x5bda14*/
}



// ==== 0x005BDA20  sub_5BDA20  this=-  sig=ida-proto ====
void __cdecl sub_5BDA20()
{
  if ( (byte_ABF250 & 1) == 0 ) /*0x5bda2a*/
    byte_ABF250 |= 1u; /*0x5bda2e*/
}



// ==== 0x005BDA40  MouseClass::method_5BDA40  this=MouseClass  sig=csp ====
_BYTE *__thiscall sub_5BDA40(MouseClass *this)
{
  SmallFunc_692290((int)this); /*0x5bda43*/
  this->MouseClass_field_0x0 = &MouseClass::`vftable'; /*0x5bda4a*/
  this->u32_555C = 0; /*0x5bda50*/
  this->q1558 = 0; /*0x5bda56*/
  this->u32_5564 = 0; /*0x5bda5c*/
  this->u32_5568 = 0; /*0x5bda62*/
  this->u32_5518 = &MouseClass::`vftable'; /*0x5bda68*/
  return this; /*0x5bda74*/
}



// ==== 0x005BDA80  MouseClass::SetAndCall  this=MouseClass  sig=csp ====
int __thiscall Mission::SetAndCall(MouseClass *this, int a2, int a3)
{
  int (__stdcall **MouseClass_field_0x0)(int, int); // edx

  MouseClass_field_0x0 = (int (__stdcall **)(int, int))this->MouseClass_field_0x0; /*0x5bda84*/
  this->u32_5564 = a2; /*0x5bda8d*/
  return MouseClass_field_0x0[19](a2, a3); /*0x5bda96*/
}



// ==== 0x005BDAA0  MouseClass::GetPosition  this=MouseClass  sig=csp ====
int __thiscall MouseClass::GetPosition(MouseClass *this)
{
  return (*((int (__thiscall **)(MouseClass *, _DWORD, _DWORD))this->MouseClass_field_0x0 + 19))( /*0x5bdaae*/
           this,
           this->u32_5564,
           0);
}



// ==== 0x005BDAB0  MouseClass::SetPosition  this=MouseClass  sig=csp ====
char __thiscall MouseClass::SetPosition(MouseClass *this, char a2)
{
  char result; // al
  int v3; // eax
  int v4; // ebx
  int v5; // edi
  int v6; // esi
  int v7; // ebp
  _DWORD v8[2]; // [esp+4h] [ebp-8h] BYREF
  int v9; // [esp+10h] [ebp+4h]

  result = this->u32_555C; /*0x5bdab7*/
  if ( result != a2 ) /*0x5bdac3*/
  {
    v3 = this->q1558; /*0x5bdac9*/
    this->u32_555C = a2; /*0x5bdacf*/
    if ( !a2 || *(_DWORD *)&stru_82BA00.__pad_1624[28 * v3 + 16] == -1 ) /*0x5bdaf2*/
      v9 = *(_DWORD *)&stru_82BA00.__pad_1624[28 * v3 + 4]; /*0x5bdafd*/
    else
      v9 = *(_DWORD *)&stru_82BA00.__pad_1624[28 * v3 + 16]; /*0x5bdaf4*/
    v4 = *(_DWORD *)&stru_82BA00.__pad_1624[28 * v3 + 24]; /*0x5bdb08*/
    v5 = 0; /*0x5bdb0b*/
    v6 = 0; /*0x5bdb0d*/
    if ( v4 == 12345 ) /*0x5bdb15*/
      v5 = *(__int16 *)(g_MissionQueueFrame.localVariables[516] + 2) / 2; /*0x5bdb20*/
    if ( v4 == 54321 ) /*0x5bdb29*/
      v5 = *(__int16 *)(g_MissionQueueFrame.localVariables[516] + 2); /*0x5bdb2b*/
    v7 = *(_DWORD *)&stru_82BA00.__pad_1624[28 * v3 + 28]; /*0x5bdb2f*/
    if ( v7 == 12345 ) /*0x5bdb38*/
      v6 = *(__int16 *)(g_MissionQueueFrame.localVariables[516] + 4) / 2; /*0x5bdb43*/
    if ( v7 == 54321 ) /*0x5bdb4b*/
      v6 = *(__int16 *)(g_MissionQueueFrame.localVariables[516] + 4); /*0x5bdb4d*/
    v8[1] = v6; /*0x5bdb55*/
    v8[0] = v5; /*0x5bdb62*/
    return (*(int (__thiscall **)(void *, _DWORD *, int, int))(*(_DWORD *)stru_887598.lineTrailer + 4))( /*0x5bdb79*/
             stru_887598.lineTrailer,
             v8,
             g_MissionQueueFrame.localVariables[516],
             v9 + this->u32_5568);
  }
  return result; /*0x5bdb7f*/
}



// ==== 0x005BDB90  System_Handle  this=-  sig=csp ====
int __stdcall sub_5BDB90(int a1, char a2)
{
  int result; // eax

  if ( !a2 ) /*0x5bdbaa*/
    return dword_82D028[7 * a1]; /*0x5bdbaa*/
  result = dword_82D034[7 * a1]; /*0x5bdbac*/
  if ( result == -1 ) /*0x5bdbb2*/
    return dword_82D028[7 * a1]; /*0x5bdbb4*/
  return result; /*0x5bdbb6*/
}



// ==== 0x005BDC00  sub_5BDC00  this=-  sig=csp ====
int *__stdcall sub_5BDC00(int *a1, int a2)
{
  int v2; // ebx
  int v3; // edi
  int v4; // ecx
  int v5; // esi

  v2 = 0; /*0x5bdc17*/
  v3 = 0; /*0x5bdc19*/
  v4 = dword_82D03C[7 * a2]; /*0x5bdc22*/
  if ( v4 == 12345 ) /*0x5bdc2f*/
    v2 = *((__int16 *)dword_ABF294 + 1) / 2; /*0x5bdc3a*/
  if ( v4 == 54321 ) /*0x5bdc42*/
    v2 = *((__int16 *)dword_ABF294 + 1); /*0x5bdc44*/
  v5 = unk_82D040[7 * a2]; /*0x5bdc48*/
  if ( v5 == 12345 ) /*0x5bdc51*/
    v3 = *((__int16 *)dword_ABF294 + 2) / 2; /*0x5bdc5c*/
  if ( v5 == 54321 ) /*0x5bdc64*/
    v3 = *((__int16 *)dword_ABF294 + 2); /*0x5bdc66*/
  *a1 = v2; /*0x5bdc6e*/
  a1[1] = v3; /*0x5bdc70*/
  return a1; /*0x5bdc73*/
}



// ==== 0x005BDC80  MouseClass::SetCursor  this=MouseClass  sig=csp ====
int __thiscall Mouse::SetCursor(int this, int a2, char a3)
{
  int result; // eax
  char v5; // bl
  int v6; // edi
  int Ticks; // eax
  int v8; // ecx
  int v9; // eax
  int v10; // ebx
  int v11; // edi
  int v12; // esi
  int v13; // [esp+10h] [ebp-Ch] BYREF
  int v14; // [esp+14h] [ebp-8h]

  result = a2; /*0x5bdc80*/
  if ( dword_82D034[7 * a2] == -1 ) /*0x5bdca6*/
  {
    v5 = 0; /*0x5bdca8*/
    a3 = 0; /*0x5bdcaa*/
  }
  else
  {
    v5 = a3; /*0x5bdcb0*/
  }
  if ( byte_ABF2DD && (!dword_ABF294 || a2 == *(_DWORD *)(this + 21856) && v5 == *(_BYTE *)(this + 21852)) ) /*0x5bdcd6*/
  {
    LOBYTE(result) = 0; /*0x5bdcda*/
  }
  else
  {
    byte_ABF2DD = 1; /*0x5bdce4*/
    v6 = dword_82D030[7 * a2]; /*0x5bdceb*/
    Ticks = Timer::GetTicks(); /*0x5bdcf2*/
    v8 = 0; /*0x5bdcfb*/
    dword_ABF2A0 = Ticks; /*0x5bdcfd*/
    dword_ABF2A4 = v14; /*0x5bdd02*/
    dword_ABF2A8 = v6; /*0x5bdd08*/
    *(_DWORD *)(this + 21864) = 0; /*0x5bdd0e*/
    if ( !v5 || (v9 = dword_82D034[7 * a2], v9 == -1) ) /*0x5bdd1e*/
      v9 = dword_82D028[7 * a2]; /*0x5bdd20*/
    v10 = dword_82D03C[7 * a2]; /*0x5bdd22*/
    v11 = 0; /*0x5bdd25*/
    if ( v10 == 12345 ) /*0x5bdd31*/
      v11 = *((__int16 *)dword_ABF294 + 1) / 2; /*0x5bdd42*/
    if ( v10 == 54321 ) /*0x5bdd50*/
      v11 = *((__int16 *)dword_ABF294 + 1); /*0x5bdd52*/
    v12 = unk_82D040[7 * a2]; /*0x5bdd56*/
    if ( v12 == 12345 ) /*0x5bdd5f*/
      v8 = *((__int16 *)dword_ABF294 + 2) / 2; /*0x5bdd6a*/
    if ( v12 == 54321 ) /*0x5bdd72*/
      v8 = *((__int16 *)dword_ABF294 + 2); /*0x5bdd74*/
    v14 = v8; /*0x5bdd7c*/
    v13 = v11; /*0x5bdd87*/
    (*(void (__thiscall **)(int, int *, void *, int))(*(_DWORD *)dword_887640 + 4))( /*0x5bdd93*/
      dword_887640,
      &v13,
      dword_ABF294,
      v9);
    result = a2; /*0x5bdd96*/
    *(_DWORD *)(this + 21856) = a2; /*0x5bdd9f*/
    *(_BYTE *)(this + 21852) = a3; /*0x5bdda5*/
    LOBYTE(result) = 1; /*0x5bddad*/
  }
  return result; /*0x5bdcd8*/
}



// ==== 0x005BDDC0  MouseClass::Reset  this=MouseClass  sig=csp ====
int __thiscall Actions::Reset(MouseClass *this, int *a2, _DWORD *a3)
{
  int v4; // ecx
  _DWORD *v5; // ebx
  int v6; // edi
  int v7; // eax
  char v8; // cl
  int v9; // eax
  int v10; // edx
  int v11; // edi
  int v12; // ebp
  int v13; // ebx
  int v14; // edi
  int v15; // ecx
  int v16; // eax
  int v18; // [esp+Ch] [ebp-10h]
  int v19; // [esp+10h] [ebp-Ch] BYREF
  int v20; // [esp+14h] [ebp-8h]

  v4 = 7 * this->q1558; /*0x5bddd5*/
  v5 = (_DWORD *)(4 * v4 + 8572968); /*0x5bdde0*/
  if ( !*(_DWORD *)&stru_82BA00.__pad_1624[4 * v4 + 12] ) /*0x5bdde7*/
    return ScrollClass::Scroll((ScrollClass *)this, a2, a3); /*0x5bdde7*/
  v6 = g_MissionQueueFrame.localVariables[521]; /*0x5bddf2*/
  if ( g_MissionQueueFrame.localVariables[519] == -1 ) /*0x5bddfb*/
    goto LABEL_5; /*0x5bddfb*/
  v7 = Timer::GetTicks() - g_MissionQueueFrame.localVariables[519]; /*0x5bde07*/
  if ( v7 < v6 ) /*0x5bde0f*/
  {
    v6 -= v7; /*0x5bde11*/
LABEL_5:
    if ( v6 ) /*0x5bde15*/
      return ScrollClass::Scroll((ScrollClass *)this, a2, a3); /*0x5bde15*/
  }
  v8 = this->u32_555C; /*0x5bde1b*/
  v9 = this->u32_5568 + 1; /*0x5bde28*/
  this->u32_5568 = v9; /*0x5bde2a*/
  if ( v8 ) /*0x5bde33*/
    v10 = v9 % v5[4]; /*0x5bde35*/
  else
    v10 = v9 % v5[1]; /*0x5bde3a*/
  this->u32_5568 = v10; /*0x5bde3d*/
  v11 = v5[2]; /*0x5bde43*/
  g_MissionQueueFrame.localVariables[519] = Timer::GetTicks(); /*0x5bde53*/
  g_MissionQueueFrame.localVariables[520] = v20; /*0x5bde58*/
  g_MissionQueueFrame.localVariables[521] = v11; /*0x5bde5e*/
  if ( !this->u32_555C || *(_DWORD *)&stru_82BA00.__pad_1624[28 * this->q1558 + 16] == -1 ) /*0x5bde8a*/
    v18 = *(_DWORD *)&stru_82BA00.__pad_1624[28 * this->q1558 + 4]; /*0x5bde94*/
  else
    v18 = *(_DWORD *)&stru_82BA00.__pad_1624[28 * this->q1558 + 16]; /*0x5bde8c*/
  v12 = *(_DWORD *)&stru_82BA00.__pad_1624[28 * this->q1558 + 24]; /*0x5bde99*/
  v13 = 0; /*0x5bde9c*/
  v14 = 0; /*0x5bde9e*/
  if ( v12 == 12345 ) /*0x5bdea6*/
    v13 = *(__int16 *)(g_MissionQueueFrame.localVariables[516] + 2) / 2; /*0x5bdeb6*/
  if ( v12 == 54321 ) /*0x5bdec4*/
    v13 = *(__int16 *)(g_MissionQueueFrame.localVariables[516] + 2); /*0x5bdec6*/
  v15 = *(_DWORD *)&stru_82BA00.__pad_1624[28 * this->q1558 + 28]; /*0x5bdeca*/
  if ( v15 == 12345 ) /*0x5bded3*/
    v14 = *(__int16 *)(g_MissionQueueFrame.localVariables[516] + 4) / 2; /*0x5bdede*/
  if ( v15 == 54321 ) /*0x5bdee6*/
    v14 = *(__int16 *)(g_MissionQueueFrame.localVariables[516] + 4); /*0x5bdee8*/
  v16 = this->u32_5568; /*0x5bdeec*/
  v19 = v13; /*0x5bdef8*/
  v20 = v14; /*0x5bdf02*/
  (*(void (__thiscall **)(void *, int *, int, int))(*(_DWORD *)stru_887598.lineTrailer + 4))( /*0x5bdf0f*/
    stru_887598.lineTrailer,
    &v19,
    g_MissionQueueFrame.localVariables[516],
    v18 + v16);
  return ScrollClass::Scroll((ScrollClass *)this, a2, a3); /*0x5bdf24*/
}



// ==== 0x005BDF30  MouseClass::LoadTypeData  this=MouseClass  sig=csp ====
void *__thiscall MouseClass::LoadTypeData(MouseClass *this)
{
  void *result; // eax

  BlowStraw_29::Stub((int *)this); /*0x5bdf30*/
  result = LoadFileSHP(g_Str_File_MOUSE_SHA, (bool *)&g_MissionQueueFrame.localVariables[534]); /*0x5bdf3f*/
  g_MissionQueueFrame.localVariables[516] = (int)result; /*0x5bdf44*/
  return result; /*0x5bdf49*/
}



// ==== 0x005BDF50  MouseClass::HandleClick  this=MouseClass  sig=csp ====
int __thiscall MouseClass::HandleClick(MouseClass *this)
{
  HouseClass::InitSubsystems((SidebarClass *)this); /*0x5bdf53*/
  this->u32_555C = 0; /*0x5bdf5a*/
  this->u32_5564 = 0; /*0x5bdf60*/
  return 0; /*0x5bdf66*/
}



// ==== 0x005BDF70  MouseClass::LoadGameAssets  this=MouseClass  sig=csp ====
int __thiscall MouseClass::LoadGameAssets(MouseClass *this, LPSTREAM pStm)
{
  LPSTREAM v3; // esi
  int result; // eax
  void *MouseClass_field_0x68; // ecx
  _DWORD *MouseClass_field_0x14; // esi
  char *v7; // esi
  int v8; // edi
  char *pad_18; // esi
  int v10; // edi
  char *v11; // edi
  int v12; // ebx
  _DWORD *v13; // esi
  int *v14; // ebx
  int *v15; // esi
  int v16; // edi
  void *MouseClass_field_0x0; // eax
  CampaignClass *v18; // eax
  int v19; // esi
  int v20; // eax
  int v21; // esi
  _BYTE *v22; // ecx
  int v23; // edx
  char **v24; // eax
  char **v25; // esi
  int v26; // ebx
  _DWORD *v27; // eax
  MouseClass *v28; // edi
  char *v29; // eax
  int v30; // ecx
  int v31; // eax
  int v32; // ecx
  int v33; // eax
  int v34; // edi
  int v35; // edx
  int v36; // esi
  SubzoneHashVector **v37; // eax
  SubzoneHashVector **v38; // edi
  SubzoneHashVector *v39; // eax
  SubzoneHashVector *v40; // esi
  int v41; // ebx
  SubzoneHashVector *v42; // eax
  int v43; // ecx
  int v44; // eax
  int v45; // ecx
  char *v46; // ecx
  int v47; // edx
  IStream *v48; // edi
  int v49; // ebx
  char *v50; // esi
  int v51; // eax
  int v52; // eax
  int v53; // eax
  int v54; // ecx
  int v55; // eax
  int v56; // eax
  int v57; // edx
  _DWORD *v58; // eax
  int i; // esi
  int v60; // ecx
  int j; // esi
  int v62; // ecx
  int v63; // eax
  int v64; // eax
  int v65; // edx
  int v66; // ecx
  int v67; // eax
  int v68; // eax
  int v69; // edx
  int uniqueId; // ecx
  BuildingTypeClass *v71; // [esp+D0h] [ebp-40h]
  _BYTE v72[5]; // [esp+E3h] [ebp-2Dh] BYREF
  int v73; // [esp+E8h] [ebp-28h]
  int v74; // [esp+ECh] [ebp-24h] BYREF
  char *v75; // [esp+F0h] [ebp-20h]
  SubzoneHashVector *v76; // [esp+F4h] [ebp-1Ch]
  int v77; // [esp+F8h] [ebp-18h] BYREF
  int v78; // [esp+FCh] [ebp-14h] BYREF
  int v79; // [esp+100h] [ebp-10h] BYREF
  int v80; // [esp+104h] [ebp-Ch]
  int v81; // [esp+108h] [ebp-8h]
  int v82; // [esp+10Ch] [ebp-4h]

  (*(void (__thiscall **)(char *))(*(_DWORD *)&this->__pad_1D4[3976] + 12))(&this->__pad_1D4[3976]); /*0x5bdf85*/
  (*(void (__thiscall **)(char *))(*(_DWORD *)&this->__pad_74[96] + 12))(&this->__pad_74[96]); /*0x5bdf94*/
  v3 = pStm; /*0x5bdf97*/
  result = SidebarClass::saveLoadPrefix((SidebarClass *)this, (int)pStm); /*0x5bdf9e*/
  if ( result >= 0 ) /*0x5bdfa7*/
  {
    result = (*(int (__stdcall **)(LPSTREAM, int *, int, _DWORD))(*(_DWORD *)v3->__pad_0 + 12))(v3, &v78, 4, 0); /*0x5bdfb8*/
    if ( result >= 0 ) /*0x5bdfbd*/
    {
      dword_822CF8 = -1; /*0x5bdfc3*/
      (*((void (__thiscall **)(MouseClass *))this->MouseClass_field_0x0 + 23))(this); /*0x5bdfd2*/
      __3_YAXPAX_Z(this->MouseClass_field_0x70); /*0x5bdfd9*/
      MouseClass_field_0x68 = (void *)this->MouseClass_field_0x68; /*0x5bdfde*/
      this->MouseClass_field_0x70 = 0; /*0x5bdfe1*/
      __3_YAXPAX_Z(MouseClass_field_0x68); /*0x5bdfe5*/
      MouseClass_field_0x14 = (_DWORD *)this->MouseClass_field_0x14; /*0x5bdfea*/
      this->MouseClass_field_0x68 = 0; /*0x5bdff2*/
      if ( MouseClass_field_0x14 ) /*0x5bdff5*/
      {
        if ( *MouseClass_field_0x14 ) /*0x5bdff7*/
          (**(void (__thiscall ***)(_DWORD, int))*MouseClass_field_0x14)(*MouseClass_field_0x14, 3); /*0x5be001*/
        __3_YAXPAX_Z(MouseClass_field_0x14); /*0x5be004*/
      }
      this->MouseClass_field_0x14 = 0; /*0x5be00c*/
      v7 = &this->__pad_74[24]; /*0x5be00f*/
      v8 = 3; /*0x5be015*/
      do /*0x5be025*/
      {
        (*(void (__thiscall **)(char *))(*(_DWORD *)v7 + 12))(v7); /*0x5be01e*/
        v7 += 24; /*0x5be021*/
        --v8; /*0x5be024*/
      }
      while ( v8 ); /*0x5be025*/
      pad_18 = this->__pad_18; /*0x5be027*/
      v10 = 13; /*0x5be02a*/
      do /*0x5be040*/
      {
        __3_YAXPAX_Z(*(void **)pad_18); /*0x5be032*/
        *(_DWORD *)pad_18 = 0; /*0x5be037*/
        pad_18 += 4; /*0x5be03c*/
        --v10; /*0x5be03f*/
      }
      while ( v10 ); /*0x5be040*/
      v11 = &this->__pad_74[12]; /*0x5be042*/
      v12 = 3; /*0x5be048*/
      do /*0x5be072*/
      {
        v13 = *(_DWORD **)v11; /*0x5be04d*/
        if ( *(_DWORD *)v11 ) /*0x5be04d*/
        {
          if ( *v13 ) /*0x5be053*/
            (**(void (__thiscall ***)(_DWORD, int))*v13)(*v13, 3); /*0x5be05d*/
          __3_YAXPAX_Z(v13); /*0x5be060*/
          *(_DWORD *)v11 = 0; /*0x5be068*/
        }
        v11 += 4; /*0x5be06e*/
        --v12; /*0x5be071*/
      }
      while ( v12 ); /*0x5be072*/
      (*(void (__thiscall **)(char *))(*(_DWORD *)&this->__pad_11F[25] + 12))(&this->__pad_11F[25]); /*0x5be080*/
      result = (*(int (__stdcall **)(LPSTREAM, MouseClass *, int, _DWORD))(*(_DWORD *)pStm->__pad_0 + 12))( /*0x5be092*/
                 pStm,
                 this,
                 21868,
                 0);
      if ( result >= 0 ) /*0x5be097*/
      {
        if ( this ) /*0x5be09f*/
        {
          MouseClass::drawCursor(this, (int)v72); /*0x5be0a8*/
          this->MouseClass_field_0x0 = &MouseClass::`vftable'; /*0x5be0ad*/
          this->u32_5518 = &MouseClass::`vftable'; /*0x5be0b4*/
        }
        v14 = (int *)((char *)this + 5544); /*0x5be0be*/
        v73 = 4; /*0x5be0c4*/
        do /*0x5be0f3*/
        {
          v15 = v14; /*0x5be0cc*/
          v16 = 75; /*0x5be0ce*/
          do /*0x5be0e2*/
          {
            ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, v15); /*0x5be0d9*/
            v15 += 13; /*0x5be0de*/
            --v16; /*0x5be0e1*/
          }
          while ( v16 ); /*0x5be0e2*/
          v14 += 997; /*0x5be0e8*/
          --v73; /*0x5be0ef*/
        }
        while ( v73 ); /*0x5be0f3*/
        ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, this->MouseClass_field_0x11A4); /*0x5be101*/
        ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, this->MouseClass_field_0x11A8); /*0x5be112*/
        ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, this->MouseClass_field_0x11A0); /*0x5be123*/
        (*((void (__thiscall **)(MouseClass *))this->MouseClass_field_0x0 + 22))(this); /*0x5be12d*/
        (*((void (__thiscall **)(MouseClass *))this->MouseClass_field_0x0 + 24))(this); /*0x5be135*/
        MouseClass_field_0x0 = this->MouseClass_field_0x0; /*0x5be138*/
        this->MouseClass_field_0x70 = 0; /*0x5be14a*/
        this->MouseClass_field_0x68 = 0; /*0x5be14d*/
        (*((void (__thiscall **)(MouseClass *, char *, int, _DWORD, _DWORD))MouseClass_field_0x0 + 28))( /*0x5be150*/
          this,
          &this->__pad_74[120],
          1,
          0,
          0);
        if ( this->MouseClass_field_0x70 ) /*0x5be153*/
        {
          __3_YAXPAX_Z(this->MouseClass_field_0x70); /*0x5be15b*/
          this->MouseClass_field_0x70 = 0; /*0x5be163*/
        }
        if ( this->MouseClass_field_0x68 ) /*0x5be166*/
        {
          __3_YAXPAX_Z((void *)this->MouseClass_field_0x68); /*0x5be16e*/
          this->MouseClass_field_0x68 = 0; /*0x5be176*/
        }
        v18 = (CampaignClass *)__2_YAPAXI_Z(10 * *(_DWORD *)this->__pad_6C); /*0x5be182*/
        v19 = *(_DWORD *)this->__pad_6C; /*0x5be187*/
        this->MouseClass_field_0x70 = v18; /*0x5be18a*/
        v20 = __2_YAPAXI_Z(4 * v19); /*0x5be195*/
        if ( v20 ) /*0x5be19f*/
        {
          v21 = v19 - 1; /*0x5be1a1*/
          v22 = (_BYTE *)v20; /*0x5be1a2*/
          if ( v21 >= 0 ) /*0x5be1a6*/
          {
            v23 = v21 + 1; /*0x5be1a8*/
            do /*0x5be1b6*/
            {
              *v22 = 7; /*0x5be1ab*/
              v22[1] = 0; /*0x5be1ae*/
              v22 += 4; /*0x5be1b2*/
              --v23; /*0x5be1b5*/
            }
            while ( v23 ); /*0x5be1b6*/
          }
        }
        else
        {
          v20 = 0; /*0x5be1ba*/
        }
        this->MouseClass_field_0x68 = v20; /*0x5be1be*/
        v24 = (char **)__2_YAPAXI_Z(0x10u); /*0x5be1c1*/
        v25 = v24; /*0x5be1c6*/
        v26 = 256; /*0x5be1cd*/
        if ( v24 ) /*0x5be1d2*/
        {
          v24[1] = (char *)Cell::DecodeFlags; /*0x5be1d9*/
          v24[2] = (char *)256; /*0x5be1e0*/
          v24[3] = (char *)20; /*0x5be1e3*/
          v27 = (_DWORD *)__2_YAPAXI_Z(0x1804u); /*0x5be1ea*/
          if ( v27 ) /*0x5be1f4*/
          {
            *v27 = 256; /*0x5be1f6*/
            v75 = (char *)(v27 + 1); /*0x5be1fb*/
            v28 = (MouseClass *)(v27 + 1); /*0x5be1ff*/
            do /*0x5be210*/
            {
              MouseClass::loadCursor(v28, 0, 0); /*0x5be207*/
              v28 = (MouseClass *)((char *)v28 + 24); /*0x5be20c*/
              --v26; /*0x5be20f*/
            }
            while ( v26 ); /*0x5be210*/
            v29 = v75; /*0x5be212*/
          }
          else
          {
            v29 = 0; /*0x5be218*/
          }
          v30 = (int)v25[2]; /*0x5be21a*/
          *v25 = v29; /*0x5be21d*/
          v31 = 0; /*0x5be21f*/
          if ( v30 > 0 ) /*0x5be223*/
          {
            v32 = 0; /*0x5be225*/
            do /*0x5be23b*/
            {
              ++v31; /*0x5be22e*/
              *(_DWORD *)&(*v25)[v32 + 20] = 20; /*0x5be22f*/
              v32 += 24; /*0x5be236*/
            }
            while ( v31 < (int)v25[2] ); /*0x5be23b*/
          }
        }
        else
        {
          v25 = 0; /*0x5be23f*/
        }
        this->MouseClass_field_0x14 = (int)v25; /*0x5be247*/
        v75 = &this->__pad_74[12]; /*0x5be24a*/
        v33 = 0; /*0x5be254*/
        v73 = (int)&this->__pad_74[24]; /*0x5be256*/
        do /*0x5be34f*/
        {
          v34 = v73; /*0x5be25a*/
          v35 = *(_DWORD *)v73; /*0x5be266*/
          v77 = v33 + 1; /*0x5be268*/
          v36 = 1 << (v33 + 1); /*0x5be26c*/
          (*(void (__thiscall **)(int))(v35 + 12))(v73); /*0x5be270*/
          *(_DWORD *)(v34 + 20) = 4 * *(_DWORD *)&this->__pad_74[128] * *(_DWORD *)&this->__pad_74[132] / (v36 * v36); /*0x5be28d*/
          v37 = (SubzoneHashVector **)__2_YAPAXI_Z(0x10u); /*0x5be290*/
          v38 = v37; /*0x5be295*/
          if ( v37 ) /*0x5be29c*/
          {
            v37[1] = (SubzoneHashVector *)Cell::DecodeFlags; /*0x5be2a7*/
            v37[2] = (SubzoneHashVector *)256; /*0x5be2ae*/
            v37[3] = (SubzoneHashVector *)20; /*0x5be2b5*/
            v39 = (SubzoneHashVector *)__2_YAPAXI_Z(0x1804u); /*0x5be2bc*/
            if ( v39 ) /*0x5be2c6*/
            {
              *v39 = (SubzoneHashVector)256; /*0x5be2c8*/
              v76 = v39 + 1; /*0x5be2d1*/
              v40 = v39 + 1; /*0x5be2d5*/
              v41 = 256; /*0x5be2d7*/
              do /*0x5be2ff*/
              {
                SubzoneHashVector::Construct(v40, 0, 0); /*0x5be2e2*/
                *v40 = (SubzoneHashVector)&DynamicVectorClass<HashObject<unsigned int,SubzoneConnectionStruct>>::`vftable'; /*0x5be2e7*/
                v40[5] = (SubzoneHashVector)10; /*0x5be2ed*/
                v40[4] = 0; /*0x5be2f4*/
                v40 += 6; /*0x5be2fb*/
                --v41; /*0x5be2fe*/
              }
              while ( v41 ); /*0x5be2ff*/
              v42 = v76; /*0x5be301*/
            }
            else
            {
              v42 = 0; /*0x5be307*/
            }
            v43 = (int)v38[2]; /*0x5be309*/
            *v38 = v42; /*0x5be30c*/
            v44 = 0; /*0x5be30e*/
            if ( v43 > 0 ) /*0x5be312*/
            {
              v45 = 0; /*0x5be314*/
              do /*0x5be32a*/
              {
                ++v44; /*0x5be31d*/
                (*v38)[v45 + 5] = (SubzoneHashVector)20; /*0x5be31e*/
                v45 += 6; /*0x5be325*/
              }
              while ( v44 < (int)v38[2] ); /*0x5be32a*/
            }
          }
          else
          {
            v38 = 0; /*0x5be32e*/
          }
          v46 = v75; /*0x5be330*/
          v33 = v77; /*0x5be338*/
          v47 = v73 + 24; /*0x5be33c*/
          *(_DWORD *)v75 = v38; /*0x5be33f*/
          v75 = v46 + 4; /*0x5be347*/
          v73 = v47; /*0x5be34b*/
        }
        while ( v33 < 3 ); /*0x5be34f*/
        v48 = pStm; /*0x5be358*/
        result = (*(int (__stdcall **)(LPSTREAM, int, int, _DWORD))(*(_DWORD *)pStm->__pad_0 + 12))( /*0x5be369*/
                   pStm,
                   this->MouseClass_field_0x68,
                   4 * *(_DWORD *)this->__pad_6C,
                   0);
        if ( result >= 0 ) /*0x5be36e*/
        {
          v49 = 0; /*0x5be374*/
          v50 = this->__pad_18; /*0x5be376*/
          while ( 1 ) /*0x5be37f*/
          {
            v51 = __2_YAPAXI_Z(2 * *(_DWORD *)&this->__pad_3C[16]); /*0x5be37f*/
            *(_DWORD *)v50 = v51; /*0x5be384*/
            result = (*(int (__stdcall **)(IStream *, int, int, _DWORD))(*(_DWORD *)v48->__pad_0 + 12))( /*0x5be395*/
                       v48,
                       v51,
                       2 * *(_DWORD *)&this->__pad_3C[16],
                       0);
            if ( result < 0 ) /*0x5be39a*/
              break; /*0x5be39a*/
            ++v49; /*0x5be3a0*/
            v50 += 4; /*0x5be3a1*/
            if ( v49 >= 13 ) /*0x5be3a7*/
            {
              v52 = *(_DWORD *)v48->__pad_0; /*0x5be3a9*/
              v74 = 0; /*0x5be3b5*/
              result = (*(int (__stdcall **)(IStream *, int *, int, _DWORD))(v52 + 12))(v48, &v74, 4, 0); /*0x5be3bd*/
              if ( result >= 0 ) /*0x5be3c4*/
              {
                (*(void (__thiscall **)(char *))(*(_DWORD *)&this->__pad_3C[20] + 12))(&this->__pad_3C[20]); /*0x5be3d2*/
                pStm = 0; /*0x5be3d9*/
                if ( v74 <= 0 ) /*0x5be3df*/
                {
LABEL_72:
                  for ( i = 0; i < this->MouseClass_field_0x140; ++i ) /*0x5be492*/
                  {
                    v60 = *(_DWORD *)(*(_DWORD *)&this->__pad_11F[29] + 4 * i); /*0x5be49a*/
                    if ( v60 ) /*0x5be49f*/
                    {
                      (*(void (__thiscall **)(int, int))(*(_DWORD *)v60 + 32))(v60, 1); /*0x5be4a5*/
                      *(_DWORD *)(*(_DWORD *)&this->__pad_11F[29] + 4 * i) = 0; /*0x5be4ae*/
                    }
                  }
                  result = (*(int (__stdcall **)(IStream *, _BYTE *, int, _DWORD))(*(_DWORD *)v48->__pad_0 + 12))( /*0x5be4c7*/
                             v48,
                             &v72[1],
                             4,
                             0);
                  if ( result >= 0 ) /*0x5be4cc*/
                  {
                    for ( j = 0; j < *(int *)&v72[1]; ++j ) /*0x5be4da*/
                      OleLoadFromStream(v48, &IID_IUnknown, (LPVOID *)&pStm); /*0x5be4ed*/
                    result = (*(int (__stdcall **)(IStream *, _BYTE *, int, _DWORD))(*(_DWORD *)v48->__pad_0 + 12))( /*0x5be505*/
                               v48,
                               &v72[1],
                               4,
                               0);
                    if ( result >= 0 ) /*0x5be50a*/
                    {
                      pStm = 0; /*0x5be514*/
                      if ( *(int *)&v72[1] <= 0 ) /*0x5be51a*/
                      {
LABEL_89:
                        result = (*(int (__stdcall **)(IStream *, _BYTE *, int, _DWORD))(*(_DWORD *)v48->__pad_0 + 12))( /*0x5be58d*/
                                   v48,
                                   &v72[1],
                                   4,
                                   0);
                        if ( result >= 0 ) /*0x5be59d*/
                        {
                          pStm = 0; /*0x5be5a7*/
                          if ( *(int *)&v72[1] <= 0 ) /*0x5be5ad*/
                          {
LABEL_99:
                            LoadObjectTypeClassTheaterSHP(dword_A8B230[130].uniqueId); /*0x5be620*/
                            uniqueId = dword_A8B230[130].uniqueId; /*0x5be636*/
                            if ( uniqueId == dword_822CF8 ) /*0x5be643*/
                              ResetAllTechnoField776(); /*0x5be64e*/
                            else
                              LoadTerrainTypeClassTheatre(uniqueId, 1); /*0x5be647*/
                            LoadMapClassIsometricTiles(0, 0); /*0x5be657*/
                            LoadBuildingTypeClassSHPs(dword_A8B230[130].uniqueId); /*0x5be668*/
                            BuildingTypeClass::LoadRepairAnimations(v71); /*0x5be679*/
                            LoadBuildingTypeClassTheatreSHP(dword_A8B230[130].uniqueId); /*0x5be689*/
                            LoadFactoryClassTheaterSHP(dword_A8B230[130].uniqueId); /*0x5be69a*/
                            *(_DWORD *)&this->__pad_11AC[16] = 0; /*0x5be69f*/
                            dword_822CF8 = dword_A8B230[130].uniqueId; /*0x5be6b1*/
                            return 0; /*0x5be6b6*/
                          }
                          else
                          {
                            while ( 1 ) /*0x5be5ba*/
                            {
                              result = (*(int (__stdcall **)(IStream *, int *, int, _DWORD))(*(_DWORD *)v48->__pad_0 + 12))( /*0x5be5ba*/
                                         v48,
                                         &v77,
                                         4,
                                         0);
                              if ( result < 0 ) /*0x5be5bf*/
                                break; /*0x5be5bf*/
                              v66 = *(_DWORD *)&this->__pad_74[104]; /*0x5be5c5*/
                              if ( *(_DWORD *)&this->__pad_74[112] < v66 /*0x5be5f5*/
                                || (this->__pad_74[109] || !v66)
                                && (v67 = *(_DWORD *)&this->__pad_74[116], v67 > 0)
                                && (*(unsigned __int8 (__thiscall **)(char *, int, _DWORD))(*(_DWORD *)&this->__pad_74[96]
                                                                                          + 8))(
                                     &this->__pad_74[96],
                                     v67 + v66,
                                     0) )
                              {
                                v68 = *(_DWORD *)&this->__pad_74[112]; /*0x5be5fc*/
                                v69 = *(_DWORD *)&this->__pad_74[100]; /*0x5be5ff*/
                                *(_DWORD *)&this->__pad_74[112] = v68 + 1; /*0x5be605*/
                                *(_DWORD *)(v69 + 4 * v68) = v77; /*0x5be60c*/
                              }
                              pStm = (LPSTREAM)((char *)pStm + 1); /*0x5be61a*/
                              if ( (int)pStm >= *(int *)&v72[1] ) /*0x5be61e*/
                                goto LABEL_99; /*0x5be61e*/
                            }
                          }
                        }
                      }
                      else
                      {
                        while ( 1 ) /*0x5be527*/
                        {
                          result = (*(int (__stdcall **)(IStream *, int *, int, _DWORD))(*(_DWORD *)v48->__pad_0 + 12))( /*0x5be527*/
                                     v48,
                                     &v77,
                                     4,
                                     0);
                          if ( result < 0 ) /*0x5be52c*/
                            break; /*0x5be52c*/
                          v62 = *(_DWORD *)&this->__pad_1D4[3984]; /*0x5be532*/
                          if ( *(_DWORD *)&this->__pad_1D4[3992] < v62 /*0x5be562*/
                            || (this->__pad_1D4[3989] || !v62)
                            && (v63 = *(_DWORD *)&this->__pad_1D4[3996], v63 > 0)
                            && (*(unsigned __int8 (__thiscall **)(char *, int, _DWORD))(*(_DWORD *)&this->__pad_1D4[3976]
                                                                                      + 8))(
                                 &this->__pad_1D4[3976],
                                 v63 + v62,
                                 0) )
                          {
                            v64 = *(_DWORD *)&this->__pad_1D4[3992]; /*0x5be569*/
                            v65 = *(_DWORD *)&this->__pad_1D4[3980]; /*0x5be56c*/
                            *(_DWORD *)&this->__pad_1D4[3992] = v64 + 1; /*0x5be572*/
                            *(_DWORD *)(v65 + 4 * v64) = v77; /*0x5be579*/
                          }
                          pStm = (LPSTREAM)((char *)pStm + 1); /*0x5be587*/
                          if ( (int)pStm >= *(int *)&v72[1] ) /*0x5be58b*/
                            goto LABEL_89; /*0x5be58b*/
                        }
                      }
                    }
                  }
                }
                else
                {
                  while ( 1 ) /*0x5be3e5*/
                  {
                    v53 = *(_DWORD *)v48->__pad_0; /*0x5be3e5*/
                    v79 = 0; /*0x5be3f0*/
                    v80 = 0; /*0x5be3fa*/
                    LOBYTE(v81) = 0; /*0x5be404*/
                    v82 = -1; /*0x5be409*/
                    result = (*(int (__stdcall **)(IStream *, int *, int, _DWORD))(v53 + 12))(v48, &v79, 16, 0); /*0x5be411*/
                    if ( result < 0 ) /*0x5be416*/
                      break; /*0x5be416*/
                    v54 = *(_DWORD *)&this->__pad_3C[28]; /*0x5be41c*/
                    if ( *(_DWORD *)&this->__pad_3C[36] < v54 /*0x5be440*/
                      || (this->__pad_3C[33] || !v54)
                      && (v55 = *(_DWORD *)&this->__pad_3C[40], v55 > 0)
                      && (*(unsigned __int8 (__thiscall **)(char *, int, _DWORD))(*(_DWORD *)&this->__pad_3C[20] + 8))(
                           &this->__pad_3C[20],
                           v55 + v54,
                           0) )
                    {
                      v56 = *(_DWORD *)&this->__pad_3C[36]; /*0x5be447*/
                      v57 = v79; /*0x5be44a*/
                      *(_DWORD *)&this->__pad_3C[36] = v56 + 1; /*0x5be451*/
                      v58 = (_DWORD *)(*(_DWORD *)&this->__pad_3C[24] + 16 * v56); /*0x5be45a*/
                      *v58 = v57; /*0x5be45c*/
                      v58[1] = v80; /*0x5be462*/
                      v58[2] = v81; /*0x5be469*/
                      v58[3] = v82; /*0x5be470*/
                    }
                    pStm = (LPSTREAM)((char *)pStm + 1); /*0x5be47e*/
                    if ( (int)pStm >= v74 ) /*0x5be482*/
                      goto LABEL_72; /*0x5be482*/
                  }
                }
              }
              return result; /*0x5be416*/
            }
          }
        }
      }
    }
  }
  return result; /*0x5be6b8*/
}



// ==== 0x005BE6D0  MouseClass::DrawCursor  this=MouseClass  sig=csp ====
int __thiscall MouseClass::DrawCursor(MouseClass *this, LPSTREAM pStm)
{
  IStream *v2; // esi
  int result; // eax
  int v5; // edx
  int v6; // ebp
  char *pad_18; // ebx
  int v8; // eax
  int v9; // ebp
  int v10; // ebx
  int v11; // eax
  int v12; // ecx
  int i; // eax
  int v14; // ebp
  IPersistStream *v15; // ebx
  int v16; // ecx
  int v17; // ebx
  int v18; // ecx
  int v19; // ebx
  int v20; // [esp+8Ch] [ebp-20h] BYREF
  int uniqueId; // [esp+90h] [ebp-1Ch] BYREF
  __int16 v22[2]; // [esp+94h] [ebp-18h] BYREF
  int v23; // [esp+98h] [ebp-14h]
  _DWORD v24[2]; // [esp+9Ch] [ebp-10h] BYREF
  char v25; // [esp+A4h] [ebp-8h]
  int v26; // [esp+A8h] [ebp-4h]

  v2 = pStm; /*0x5be6d6*/
  result = SidebarClass::saveLoadPrefix2((SidebarClass *)this, (int)pStm); /*0x5be6de*/
  if ( result >= 0 ) /*0x5be6e5*/
  {
    v5 = *(_DWORD *)v2->__pad_0; /*0x5be6f0*/
    uniqueId = dword_A8B230[130].uniqueId; /*0x5be702*/
    result = (*(int (__stdcall **)(IStream *, int *, int, _DWORD))(v5 + 16))(v2, &uniqueId, 4, 0); /*0x5be706*/
    if ( result >= 0 ) /*0x5be70b*/
    {
      result = (*(int (__stdcall **)(IStream *, MouseClass *, int, _DWORD))(*(_DWORD *)v2->__pad_0 + 16))( /*0x5be71c*/
                 v2,
                 this,
                 21868,
                 0);
      if ( result >= 0 ) /*0x5be721*/
      {
        result = (*(int (__stdcall **)(IStream *, int, int, _DWORD))(*(_DWORD *)v2->__pad_0 + 16))( /*0x5be737*/
                   v2,
                   this->MouseClass_field_0x68,
                   4 * *(_DWORD *)this->__pad_6C,
                   0);
        if ( result >= 0 ) /*0x5be73c*/
        {
          v6 = 0; /*0x5be742*/
          pad_18 = this->__pad_18; /*0x5be744*/
          while ( 1 ) /*0x5be755*/
          {
            result = (*(int (__stdcall **)(IStream *, _DWORD, int, _DWORD))(*(_DWORD *)v2->__pad_0 + 16))( /*0x5be755*/
                       v2,
                       *(_DWORD *)pad_18,
                       2 * *(_DWORD *)&this->__pad_3C[16],
                       0);
            if ( result < 0 ) /*0x5be75a*/
              break; /*0x5be75a*/
            ++v6; /*0x5be760*/
            pad_18 += 4; /*0x5be761*/
            if ( v6 >= 13 ) /*0x5be767*/
            {
              v8 = *(_DWORD *)v2->__pad_0; /*0x5be76c*/
              v20 = *(_DWORD *)&this->__pad_3C[36]; /*0x5be778*/
              result = (*(int (__stdcall **)(IStream *, int *, int, _DWORD))(v8 + 16))(v2, &v20, 4, 0); /*0x5be77c*/
              if ( result >= 0 ) /*0x5be781*/
              {
                v9 = 0; /*0x5be78b*/
                if ( v20 <= 0 ) /*0x5be78f*/
                {
LABEL_13:
                  pStm = 0; /*0x5be7d8*/
                  LayerClass::CellIteratorReset((LayerClass *)this); /*0x5be7e2*/
                  for ( i = LayerClass::CellIteratorNext((LayerClass *)this); /*0x5be7f0*/
                        i;
                        i = LayerClass::CellIteratorNext((LayerClass *)this) )
                  {
                    *(_DWORD *)v22 = *(_DWORD *)(i + 36); /*0x5be7fc*/
                    if ( (unsigned __int8)Cell::Exists((Cell *)this, v22) ) /*0x5be800*/
                      pStm = (LPSTREAM)((char *)pStm + 1); /*0x5be809*/
                  }
                  result = (*(int (__stdcall **)(IStream *, LPSTREAM *, int, _DWORD))(*(_DWORD *)v2->__pad_0 + 16))( /*0x5be824*/
                             v2,
                             &pStm,
                             4,
                             0);
                  v14 = result; /*0x5be827*/
                  v23 = result; /*0x5be82b*/
                  if ( result >= 0 ) /*0x5be82f*/
                  {
                    LayerClass::CellIteratorReset((LayerClass *)this); /*0x5be83d*/
                    v15 = (IPersistStream *)LayerClass::CellIteratorNext((LayerClass *)this); /*0x5be849*/
                    if ( v15 ) /*0x5be84d*/
                    {
                      do /*0x5be87f*/
                      {
                        *(IPersistStream *)v22 = v15[9]; /*0x5be85c*/
                        if ( (unsigned __int8)Cell::Exists((Cell *)this, v22) ) /*0x5be863*/
                        {
                          OleSaveToStream(v15, v2); /*0x5be86e*/
                          pStm = (LPSTREAM)((char *)pStm - 1); /*0x5be870*/
                        }
                        v15 = (IPersistStream *)LayerClass::CellIteratorNext((LayerClass *)this); /*0x5be87b*/
                      }
                      while ( v15 ); /*0x5be87f*/
                      v14 = v23; /*0x5be881*/
                    }
                    if ( pStm ) /*0x5be88b*/
                    {
                      return v14; /*0x5be88e*/
                    }
                    else
                    {
                      v16 = *(_DWORD *)v2->__pad_0; /*0x5be89f*/
                      pStm = *(LPSTREAM *)&this->__pad_1D4[3992]; /*0x5be8ab*/
                      result = (*(int (__stdcall **)(IStream *, LPSTREAM *, int, _DWORD))(v16 + 16))(v2, &pStm, 4, 0); /*0x5be8af*/
                      if ( result >= 0 ) /*0x5be8b4*/
                      {
                        v17 = 0; /*0x5be8ba*/
                        if ( (int)pStm <= 0 ) /*0x5be8be*/
                        {
LABEL_29:
                          v18 = *(_DWORD *)v2->__pad_0; /*0x5be8e1*/
                          pStm = *(LPSTREAM *)&this->__pad_74[112]; /*0x5be8f3*/
                          result = (*(int (__stdcall **)(IStream *, LPSTREAM *, int, _DWORD))(v18 + 16))( /*0x5be8f7*/
                                     v2,
                                     &pStm,
                                     4,
                                     0);
                          if ( result >= 0 ) /*0x5be8fc*/
                          {
                            v19 = 0; /*0x5be902*/
                            if ( (int)pStm <= 0 ) /*0x5be906*/
                            {
                              return 0; /*0x5be929*/
                            }
                            else
                            {
                              while ( 1 ) /*0x5be919*/
                              {
                                result = (*(int (__stdcall **)(IStream *, int, int, _DWORD))(*(_DWORD *)v2->__pad_0 + 16))( /*0x5be919*/
                                           v2,
                                           *(_DWORD *)&this->__pad_74[100] + 4 * v19,
                                           4,
                                           0);
                                if ( result < 0 ) /*0x5be91e*/
                                  break; /*0x5be91e*/
                                if ( ++v19 >= (int)pStm ) /*0x5be927*/
                                  return 0; /*0x5be927*/
                              }
                            }
                          }
                        }
                        else
                        {
                          while ( 1 ) /*0x5be8d1*/
                          {
                            result = (*(int (__stdcall **)(IStream *, int, int, _DWORD))(*(_DWORD *)v2->__pad_0 + 16))( /*0x5be8d1*/
                                       v2,
                                       *(_DWORD *)&this->__pad_1D4[3980] + 4 * v17,
                                       4,
                                       0);
                            if ( result < 0 ) /*0x5be8d6*/
                              break; /*0x5be8d6*/
                            if ( ++v17 >= (int)pStm ) /*0x5be8df*/
                              goto LABEL_29; /*0x5be8df*/
                          }
                        }
                      }
                    }
                  }
                }
                else
                {
                  v10 = 0; /*0x5be791*/
                  while ( 1 ) /*0x5be798*/
                  {
                    v11 = *(_DWORD *)&this->__pad_3C[24] + v10; /*0x5be798*/
                    v24[0] = *(_DWORD *)v11; /*0x5be7a0*/
                    v24[1] = *(_DWORD *)(v11 + 4); /*0x5be7a7*/
                    v12 = *(_DWORD *)v2->__pad_0; /*0x5be7ae*/
                    v25 = *(_BYTE *)(v11 + 8); /*0x5be7b0*/
                    v26 = *(_DWORD *)(v11 + 12); /*0x5be7bd*/
                    result = (*(int (__stdcall **)(IStream *, _DWORD *, int, _DWORD))(v12 + 16))(v2, v24, 16, 0); /*0x5be7c1*/
                    if ( result < 0 ) /*0x5be7c6*/
                      break; /*0x5be7c6*/
                    ++v9; /*0x5be7d0*/
                    v10 += 16; /*0x5be7d1*/
                    if ( v9 >= v20 ) /*0x5be7d6*/
                      goto LABEL_13; /*0x5be7d6*/
                  }
                }
              }
              return result; /*0x5be7c6*/
            }
          }
        }
      }
    }
  }
  return result; /*0x5be831*/
}



// ==== 0x005BE940  WinMainSetup_Setup_5BE940  this=-  sig=ida-proto ====
void sub_5BE940()
{
  void *v0; // esi

  v0 = dword_ABF294; /*0x5be941*/
  if ( dword_ABF294 ) /*0x5be949*/
  {
    FileTreeNode::Destroy(dword_ABF294); /*0x5be94d*/
    __3_YAXPAX_Z(v0); /*0x5be953*/
    byte_ABF2DC = 0; /*0x5be95b*/
  }
  dword_ABF294 = 0; /*0x5be962*/
}



// ==== 0x005BE970  Render_Render_5BE970  this=-  sig=csp ====
int __stdcall sub_5BE970(int a1)
{
  return dword_82D028[7 * a1]; /*0x5be984*/
}



// ==== 0x005BE990  Render_Render_5BE990  this=-  sig=csp ====
int __stdcall sub_5BE990(int a1)
{
  return dword_82D02C[7 * a1]; /*0x5be9a4*/
}



// ==== 0x005BE9B0  MouseClass::drawCursor  this=TabClass  sig=csp ====
_DWORD *__thiscall MouseClass::drawCursor(MouseClass *this, int a2)
{
  UI_Init((int)this, a2); /*0x5be9b8*/
  *((_DWORD *)this + 5446) = &INoticeSink::`vftable'; /*0x5be9bd*/
  this->MouseClass_field_0x0 = &TabClass::`vftable'; /*0x5be9c7*/
  *((_DWORD *)this + 5446) = &TabClass::`vftable'; /*0x5be9cd*/
  return &this->MouseClass_field_0x0; /*0x5be9d9*/
}



// ==== 0x005BE9E0  TabClass::Read  this=TabClass  sig=csp ====
RadarClass *__thiscall BlowStraw_29::Read(TabClass *this, char a2)
{
  int *v3; // esi
  int v4; // edi

  v3 = (int *)((char *)this + 21484); /*0x5be9e5*/
  v4 = 4; /*0x5be9eb*/
  do /*0x5bea06*/
  {
    v3 -= 997; /*0x5be9f5*/
    Array::ForEachReverse(v3, 52, 75, (int (__thiscall *)(int))nullsub_56); /*0x5bea00*/
    --v4; /*0x5bea05*/
  }
  while ( v4 ); /*0x5bea06*/
  RadarClass::Destruct((RadarClass *)this); /*0x5bea0a*/
  if ( (a2 & 1) != 0 ) /*0x5bea14*/
    __3_YAXPAX_Z(this); /*0x5bea17*/
  return (RadarClass *)this; /*0x5bea1f*/
}



// ==== 0x005BEA30  MouseClass::loadCursor  this=VectorClass  sig=csp ====
_DWORD *__thiscall MouseClass::loadCursor(MouseClass *this, int a2, int a3)
{
  void *v4; // eax

  this->MouseClass_field_0x4 = 0; /*0x5bea3a*/
  this->MouseClass_field_0x8 = (void *)a2; /*0x5bea41*/
  LOBYTE(this->MouseClass_field_0xC) = 1; /*0x5bea44*/
  BYTE1(this->MouseClass_field_0xC) = 0; /*0x5bea48*/
  this->MouseClass_field_0x0 = &VectorClass<HashObject<unsigned int,unsigned int>>::`vftable'; /*0x5bea4c*/
  if ( a2 ) /*0x5bea52*/
  {
    if ( a3 ) /*0x5bea5a*/
    {
      this->MouseClass_field_0x4 = (void *)a3; /*0x5bea5d*/
    }
    else
    {
      v4 = (void *)__2_YAPAXI_Z(8 * a2); /*0x5bea6e*/
      if ( !v4 ) /*0x5bea78*/
        v4 = 0; /*0x5bea81*/
      this->MouseClass_field_0x4 = v4; /*0x5bea83*/
      BYTE1(this->MouseClass_field_0xC) = 1; /*0x5bea86*/
    }
  }
  this->MouseClass_field_0x0 = &DynamicVectorClass<HashObject<unsigned int,unsigned int>>::`vftable'; /*0x5bea8a*/
  this->MouseClass_field_0x14 = 10; /*0x5bea90*/
  this->MouseClass_field_0x10 = 0; /*0x5bea97*/
  return &this->MouseClass_field_0x0; /*0x5beaa0*/
}



// ==== 0x005BEAB0  sub_5BEAB0  this=-  sig=ida-proto ====
int sub_5BEAB0()
{
  dword_ABF2E8 = 0; /*0x5beab2*/
  dword_ABF2EC = 0; /*0x5beab7*/
  dword_ABF2F0 = 0; /*0x5beabc*/
  dword_ABF2F4 = 0; /*0x5beac1*/
  return 0; /*0x5beac6*/
}



// ==== 0x005BEAD0  sub_5BEAD0  this=-  sig=ida-proto ====
void sub_5BEAD0()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x5beadc*/
  dbl_ABF300 = Math::Sqrt(v0 + v0); /*0x5beaee*/
}



// ==== 0x005BEB00  sub_5BEB00  this=-  sig=ida-proto ====
void sub_5BEB00()
{
  dbl_ABF350 = dbl_ABF300 / 60.0; /*0x5beb0c*/
}



// ==== 0x005BEB20  sub_5BEB20  this=-  sig=ida-proto ====
void sub_5BEB20()
{
  dbl_ABF338 = 1.0 / dbl_ABF350; /*0x5beb2c*/
}



// ==== 0x005BEB40  sub_5BEB40  this=-  sig=ida-proto ====
void sub_5BEB40()
{
  dbl_ABF330 = 0.0174532925199433 * 45.0; /*0x5beb4c*/
}



// ==== 0x005BEB60  sub_5BEB60  this=-  sig=ida-proto ====
void sub_5BEB60()
{
  dbl_ABF308 = 0.0174532925199433 * 60.0; /*0x5beb6c*/
}



// ==== 0x005BEB80  sub_5BEB80  this=-  sig=ida-proto ====
void sub_5BEB80()
{
  dbl_ABF2E0 = 0.0174532925199433 * 90.0; /*0x5beb8c*/
}



// ==== 0x005BEBA0  sub_5BEBA0  this=-  sig=ida-proto ====
__int64 sub_5BEBA0()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_ABF2E0 - dbl_ABF308); /*0x5bebb2*/
  result = Math::RoundToInt(v0 * dbl_ABF300 * 0.5); /*0x5bebc6*/
  dword_ABF358 = result; /*0x5bebcb*/
  return result; /*0x5bebd0*/
}



// ==== 0x005BEBE0  sub_5BEBE0  this=-  sig=ida-proto ====
void sub_5BEBE0()
{
  dbl_ABF310 = Math::ArcTan((double)dword_ABF358 * 0.00390625); /*0x5bebf7*/
}



// ==== 0x005BEC10  sub_5BEC10  this=-  sig=ida-proto ====
void sub_5BEC10()
{
  dbl_ABF328 = Math::ArcTan((double)(2 * dword_ABF358) / dbl_ABF300); /*0x5bec32*/
}



// ==== 0x005BEC40  sub_5BEC40  this=-  sig=ida-proto ====
__int64 sub_5BEC40()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_ABF358) + 0.5); /*0x5bec5b*/
  dword_ABF34C = result; /*0x5bec60*/
  return result; /*0x5bec66*/
}



// ==== 0x005BEC70  sub_5BEC70  this=-  sig=ida-proto ====
int sub_5BEC70()
{
  word_ABF2F8 = 0; /*0x5bec72*/
  word_ABF2FA = 0; /*0x5bec78*/
  return 0; /*0x5bec7e*/
}



// ==== 0x005BEC80  sub_5BEC80  this=-  sig=ida-proto ====
int sub_5BEC80()
{
  dword_ABF318 = 0; /*0x5bec82*/
  dword_ABF31C = 0; /*0x5bec87*/
  dword_ABF320 = 0; /*0x5bec8c*/
  return 0; /*0x5bec91*/
}



// ==== 0x005BECA0  sub_5BECA0  this=-  sig=ida-proto ====
int sub_5BECA0()
{
  dword_ABF348 = 0; /*0x5beca5*/
  dword_ABF340 = 128; /*0x5becaf*/
  dword_ABF344 = 128; /*0x5becb4*/
  return 128; /*0x5becb9*/
}



// ==== 0x005BECC0  ObjectClass::method_5BECC0  this=ObjectClass  sig=csp ====
int __thiscall sub_5BECC0(ObjectClass *this)
{
  int v1; // esi
  int result; // eax
  ObjectClass *v3; // edi
  int v4; // ebp
  int v5; // edx
  char *v6; // eax
  char v7; // bl

  v1 = 0; /*0x5becc9*/
  result = 256 - (_DWORD)this; /*0x5beccb*/
  v3 = this; /*0x5becce*/
  do /*0x5bed0c*/
  {
    v4 = v1 + 1; /*0x5becd4*/
    v5 = v1 + 1; /*0x5becdd*/
    if ( v1 + 1 < 256 ) /*0x5becdf*/
    {
      v6 = (char *)v3 + result + v1 + (_DWORD)this; /*0x5bece5*/
      do /*0x5becf8*/
      {
        v7 = *v6; /*0x5bece7*/
        v6 += 256; /*0x5bece9*/
        *((_BYTE *)&v3->AbstractClass + v5++) = v7; /*0x5becee*/
      }
      while ( v5 < 256 ); /*0x5becf8*/
      result = 256 - (_DWORD)this; /*0x5becfa*/
    }
    ++v1; /*0x5becfe*/
    v3 = (ObjectClass *)((char *)v3 + 256); /*0x5bed00*/
  }
  while ( v4 < 255 ); /*0x5bed0c*/
  return result; /*0x5bed0e*/
}



// ==== 0x005BED40  Movie::Play  this=Movie  sig=csp ====
void __userpurge Movie::Play(
        int a1@<edx>,
        int a2@<ebp>,
        int a3@<edi>,
        const char *a4@<ecx>,
        char a5,
        char a6,
        char a7,
        char a8)
{
  char *v8; // eax
  int v9; // edi
  int v10; // ebp
  int v11; // eax
  MovieClass **VQMovie; // eax
  MovieContext *v13; // esi
  bool v14; // al
  double v15; // st7
  MovieContext v16; // eax
  ObjectClass *v17; // [esp+0h] [ebp-150h]
  int v18; // [esp+0h] [ebp-150h]
  int v19; // [esp+0h] [ebp-150h]
  int v20; // [esp+4h] [ebp-14Ch]
  int *v21; // [esp+8h] [ebp-148h]
  BinkMovie v23; // [esp+1Ch] [ebp-134h] BYREF
  char Str[256]; // [esp+50h] [ebp-100h] BYREF

  if ( Render_Play(a4, Str, 1) && !*(_DWORD *)&dword_A8B238 ) /*0x5bed6a*/
  {
    Timer::PumpMessages(*(Timer **)&stru_87F5F0.__pad_58[296]); /*0x5bed76*/
    v8 = strrchr(Str, 46); /*0x5bed82*/
    if ( !v8 || _strcmpi(v8, aBik) ) /*0x5bed98*/
    {
      Timer::PumpMessages(*(Timer **)&stru_87F5F0.__pad_58[296]); /*0x5bef0b*/
      v9 = 0; /*0x5bef1e*/
      v10 = 0; /*0x5bef20*/
      LOWORD(v11) = Math::RoundToInt(*(float *)&stru_A8EB00.ObjectTypeClass[39] * 255.0); /*0x5bef24*/
      VQMovie = (MovieClass **)LoadVQMovie(Str, (int *)DSurface_Alternate, 0, 0, 0, 0, 0, 0, 0, 0, v11, 1); /*0x5bef56*/
      v13 = (MovieContext *)VQMovie; /*0x5bef5b*/
      if ( VQMovie ) /*0x5bef61*/
      {
        if ( MovieClass::GetWidth(*VQMovie) >= 320 || MovieClass::GetHeight(*(MovieClass **)v13) >= 200 ) /*0x5bef81*/
        {
          v14 = a6 == 1 && LOBYTE(stru_A8EB00.ObjectTypeClass[37]) == 1; /*0x5befba*/
          if ( g_DDraw_AllowStretchBlits == 1 && v14 ) /*0x5befcb*/
          {
            v9 = (int)v13[11]; /*0x5befcd*/
            if ( v9 < *(int *)&DSurface_ViewBounds.__pad_8[16] ) /*0x5befdb*/
            {
              v10 = (int)v13[12]; /*0x5befdd*/
              if ( v10 < *(int *)&DSurface_ViewBounds.__pad_8[20] ) /*0x5befec*/
              {
                v15 = (double)*(int *)&DSurface_ViewBounds.__pad_8[16]; /*0x5befee*/
                v13[15] = *(MovieContext *)&DSurface_ViewBounds.__pad_8[16]; /*0x5beff4*/
                *(_WORD *)v16.__tail_0 = Math::RoundToInt(v15 / (double)v9); /*0x5bf001*/
                v13[13] = 0; /*0x5bf008*/
                v13[16] = v16; /*0x5bf00b*/
                v13[14] = (MovieContext)((*(_DWORD *)&DSurface_ViewBounds.__pad_8[20] - *(_DWORD *)&v16) / 2); /*0x5bf01d*/
                Debug::Log(); /*0x5bf02b*/
              }
            }
          }
          (*(void (__thiscall **)(void *))(*(_DWORD *)stru_887598.lineTrailer + 12))(stru_887598.lineTrailer); /*0x5bf03b*/
          if ( a7 ) /*0x5bf045*/
          {
            (*((void (__thiscall **)(ObjectClass *, _DWORD))g_DSurface_Hidden->AbstractClass + 6))(g_DSurface_Hidden, 0); /*0x5bf050*/
            Frame::Present((int)g_DSurface_Hidden, 0, v10, v9, 0, (int)v17, v20, v21); /*0x5bf05c*/
          }
          if ( !LOBYTE(g_MissionQueueFrame.localVariables[566]) ) /*0x5bf067*/
          {
            AudioFrame::CounterInc(); /*0x5bf069*/
            AudioQueue::IncrementPriority(); /*0x5bf06e*/
            AudioQueue::ReleaseBuffers(); /*0x5bf073*/
            RequestBufferMixer((unsigned int *)g_MixerState, 0x2000); /*0x5bf083*/
            RequestBufferMixer((unsigned int *)g_MixerChannel_Ambient, 0x2000); /*0x5bf093*/
            LOBYTE(g_MissionQueueFrame.localVariables[566]) = 1; /*0x5bf098*/
          }
          sub_406EA0(); /*0x5bf09f*/
          CreateDirectSoundBuffer(44100, 16, 2); /*0x5bf0b0*/
          RenderMovieFrame((int)v13, 1, a1, 0); /*0x5bf0bf*/
          sub_40A850(v17); /*0x5bf0c4*/
          sub_406EC0(); /*0x5bf0c9*/
          if ( LOBYTE(g_MissionQueueFrame.localVariables[566]) ) /*0x5bf0d4*/
          {
            AudioTimer::DecrementAll(); /*0x5bf0d6*/
            ProcessAudioTimer(); /*0x5bf0db*/
            Mixer::RequestAllBuffers(); /*0x5bf0e0*/
            RequestBufferMixer((unsigned int *)g_MixerState, 0x4000); /*0x5bf0f0*/
            RequestBufferMixer((unsigned int *)g_MixerChannel_Ambient, 0x4000); /*0x5bf100*/
            AudioMixer::Pump(); /*0x5bf105*/
            LOBYTE(g_MissionQueueFrame.localVariables[566]) = 0; /*0x5bf10a*/
          }
          MovieContext::Cleanup(v13); /*0x5bf112*/
          BinkMovie::Cleanup((BinkMovie *)v13); /*0x5bf119*/
          __3_YAXPAX_Z(v13); /*0x5bf11f*/
          if ( a5 == 1 ) /*0x5bf130*/
          {
            (*((void (__thiscall **)(ObjectClass *, _DWORD))g_DSurface_Hidden->AbstractClass + 6))(g_DSurface_Hidden, 0); /*0x5bf13b*/
            Frame::Present((int)g_DSurface_Hidden, 0, v10, v9, 0, v19, v20, v21); /*0x5bf147*/
          }
          (*(void (__thiscall **)(void *))(*(_DWORD *)stru_887598.lineTrailer + 16))(stru_887598.lineTrailer); /*0x5bf154*/
          MapClass::MarkForRedraw((GScreenClass *)&stru_87F5F0.__pad_58[416], 2); /*0x5bf15e*/
          Timer::PumpMessages(*(Timer **)&stru_87F5F0.__pad_58[296]); /*0x5bf169*/
        }
        else
        {
          MovieContext::Cleanup(v13); /*0x5bef85*/
          BinkMovie::Cleanup((BinkMovie *)v13); /*0x5bef8c*/
          __3_YAXPAX_Z(v13); /*0x5bef92*/
        }
      }
    }
    else
    {
      Debug::Log(); /*0x5bedad*/
      (*(void (__thiscall **)(void *))(*(_DWORD *)stru_887598.lineTrailer + 12))(stru_887598.lineTrailer); /*0x5bedbd*/
      if ( a7 ) /*0x5bedc7*/
      {
        (*((void (__thiscall **)(ObjectClass *, _DWORD))g_DSurface_Hidden->AbstractClass + 6))(g_DSurface_Hidden, 0); /*0x5bedd2*/
        Frame::Present((int)g_DSurface_Hidden, 0, a2, a3, 0, (int)v17, v20, v21); /*0x5bedde*/
      }
      BinkMovie::Close(&v23, Str); /*0x5bedec*/
      if ( a8 == 1 ) /*0x5bedf9*/
        v23.__pad_0[0] = 1; /*0x5bedfb*/
      if ( !LOBYTE(g_MissionQueueFrame.localVariables[566]) ) /*0x5bee06*/
      {
        AudioFrame::CounterInc(); /*0x5bee08*/
        AudioQueue::IncrementPriority(); /*0x5bee0d*/
        AudioQueue::ReleaseBuffers(); /*0x5bee12*/
        RequestBufferMixer((unsigned int *)g_MixerState, 0x2000); /*0x5bee22*/
        RequestBufferMixer((unsigned int *)g_MixerChannel_Ambient, 0x2000); /*0x5bee32*/
        LOBYTE(g_MissionQueueFrame.localVariables[566]) = 1; /*0x5bee37*/
      }
      sub_406EA0(); /*0x5bee3e*/
      CreateDirectSoundBuffer(44100, 16, 2); /*0x5bee4f*/
      BinkMovie::Play(&v23); /*0x5bee58*/
      sub_40A850(v17); /*0x5bee5d*/
      sub_406EC0(); /*0x5bee62*/
      if ( LOBYTE(g_MissionQueueFrame.localVariables[566]) ) /*0x5bee6d*/
      {
        AudioTimer::DecrementAll(); /*0x5bee6f*/
        ProcessAudioTimer(); /*0x5bee74*/
        Mixer::RequestAllBuffers(); /*0x5bee79*/
        RequestBufferMixer((unsigned int *)g_MixerState, 0x4000); /*0x5bee89*/
        RequestBufferMixer((unsigned int *)g_MixerChannel_Ambient, 0x4000); /*0x5bee99*/
        AudioMixer::Pump(); /*0x5bee9e*/
        LOBYTE(g_MissionQueueFrame.localVariables[566]) = 0; /*0x5beea3*/
      }
      if ( a5 == 1 ) /*0x5beeb1*/
      {
        (*((void (__thiscall **)(ObjectClass *, _DWORD))g_DSurface_Hidden->AbstractClass + 6))(g_DSurface_Hidden, 0); /*0x5beebc*/
        Frame::Present((int)g_DSurface_Hidden, 0, a2, a3, 0, v18, v20, v21); /*0x5beec8*/
      }
      Timer::PumpMessages(*(Timer **)&stru_87F5F0.__pad_58[296]); /*0x5beed3*/
      (*(void (__thiscall **)(void *))(*(_DWORD *)stru_887598.lineTrailer + 16))(stru_887598.lineTrailer); /*0x5beee0*/
      MapClass::MarkForRedraw((GScreenClass *)&stru_87F5F0.__pad_58[416], 2); /*0x5beeea*/
      BinkMovie::Stop(&v23); /*0x5beef3*/
    }
  }
}



// ==== 0x005BF260  Movie::PlayWrapper  this=RandomStruct  sig=csp ====
void __userpurge Movie_PlayWrapper(int a1@<ecx>, int a2@<ebp>, int a3@<edi>, char a4, char a5, char a6)
{
  char v6; // bl

  if ( a1 >= 0 && a1 < dword_ABF3A0 ) /*0x5bf26a*/
  {
    v6 = byte_A8E378; /*0x5bf275*/
    byte_A8E378 = 0; /*0x5bf289*/
    Movie::Play(-1, a2, a3, a4, a5, a6, 0); /*0x5bf296*/
    byte_A8E378 = v6; /*0x5bf29b*/
  }
}



// ==== 0x005BF360  ObjectClass::method_5BF360  this=ObjectClass  sig=csp ====
int __thiscall sub_5BF360(ObjectClass *this)
{
  int result; // eax

  if ( this ) /*0x5bf362*/
    return MessageListClass::AddMessage( /*0x5bf37e*/
             (MessageListClass *)&stru_A8BB1C.__pad_87[189],
             0,
             0,
             (wchar_t *)this->?,
             0,
             16454,
             (int)this->?,
             0);
  return result; /*0x5bf383*/
}



// ==== 0x005BF390  EnqueueAsyncIOMovie  this=RandomStruct  sig=ida-proto ====
void __fastcall sub_5BF390(int a1, char a2)
{
  int v3; // ecx
  _DWORD *v4; // eax
  _BYTE *v5; // esi
  int v6; // eax

  if ( a1 >= 0 && a1 < dword_ABF3A0 ) /*0x5bf3a2*/
  {
    v3 = *((_DWORD *)dword_ABF394 + a1); /*0x5bf3ad*/
    if ( !dword_A8B238 ) /*0x5bf3b7*/
    {
      v4 = CreateMovie(v3, DSurface_Sidebar, 0); /*0x5bf3c5*/
      v5 = v4; /*0x5bf3ca*/
      if ( v4 ) /*0x5bf3ce*/
      {
        (*(void (__thiscall **)(_DWORD *, int, int))(*v4 + 24))(v4, dword_8809D8 - 3, dword_8809DC - 1); /*0x5bf3e5*/
        (*(void (__thiscall **)(_BYTE *, int (*)()))(*(_DWORD *)v5 + 32))(v5, sub_5BF360); /*0x5bf3f1*/
        v5[4] = a2; /*0x5bf3f4*/
        if ( g_AsyncIOState < dword_B45B60 /*0x5bf42b*/
          || (byte_B45B65 || !dword_B45B60)
          && dword_B45B6C > 0
          && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(dword_B45B58 + 8))(
               &dword_B45B58,
               dword_B45B60 + dword_B45B6C,
               0) )
        {
          v6 = g_AsyncIOState++; /*0x5bf438*/
          *((_DWORD *)AsyncIO_Instance + v6) = v5; /*0x5bf447*/
        }
      }
    }
  }
}



// ==== 0x005BF450  AsyncIO::Shutdown  this=AsyncIO  sig=csp ====
char AsyncIO::Shutdown(AsyncIO *this)
{
  int v1; // esi
  _DWORD *i; // eax
  void (__thiscall ***v3)(_DWORD, int); // ecx
  char result; // al

  v1 = 0; /*0x5bf459*/
  for ( i = AsyncIO_Instance; v1 < g_AsyncIOState; ++v1 ) /*0x5bf462*/
  {
    v3 = (void (__thiscall ***)(_DWORD, int))i[v1]; /*0x5bf464*/
    if ( v3 ) /*0x5bf469*/
    {
      (**v3)(v3, 1); /*0x5bf473*/
      i = AsyncIO_Instance; /*0x5bf475*/
    }
  }
  g_AsyncIOState = 0; /*0x5bf487*/
  if ( i && byte_B45B65 ) /*0x5bf495*/
  {
    __3_YAXPAX_Z(i); /*0x5bf498*/
    AsyncIO_Instance = 0; /*0x5bf4a0*/
  }
  result = g_MissionQueueFrame.localVariables[566]; /*0x5bf4a6*/
  byte_B45B65 = 0; /*0x5bf4ab*/
  dword_B45B60 = 0; /*0x5bf4b3*/
  if ( LOBYTE(g_MissionQueueFrame.localVariables[566]) ) /*0x5bf4b9*/
  {
    AudioTimer::DecrementAll(); /*0x5bf4bb*/
    ProcessAudioTimer(); /*0x5bf4c0*/
    Mixer::RequestAllBuffers(); /*0x5bf4c5*/
    RequestBufferMixer((unsigned int *)g_MixerState, 0x4000); /*0x5bf4d5*/
    RequestBufferMixer((unsigned int *)g_MixerChannel_Ambient, 0x4000); /*0x5bf4e5*/
    result = AudioMixer::Pump(); /*0x5bf4ea*/
    LOBYTE(g_MissionQueueFrame.localVariables[566]) = 0; /*0x5bf4ef*/
  }
  return result; /*0x5bf4f5*/
}



// ==== 0x005BF500  AsyncIO::Read  this=AsyncIO  sig=csp ====
int __thiscall AsyncIO::Read(AsyncIO *this)
{
  int result; // eax

  result = g_AsyncIOState; /*0x5bf500*/
  if ( g_AsyncIOState > 0 ) /*0x5bf507*/
    return (*(int (__thiscall **)(_DWORD, AsyncIO *))(**(_DWORD **)AsyncIO_Instance + 12))( /*0x5bf515*/
             *(_DWORD *)AsyncIO_Instance,
             this);
  return result; /*0x5bf518*/
}



// ==== 0x005BF530  Game_Process  this=-  sig=ida-proto ====
char sub_5BF530()
{
  char result; // al

  result = byte_ABF35C; /*0x5bf530*/
  if ( byte_ABF35C ) /*0x5bf537*/
  {
    AudioTimer::DecrementAll(); /*0x5bf539*/
    ProcessAudioTimer(); /*0x5bf53e*/
    Mixer::RequestAllBuffers(); /*0x5bf543*/
    RequestBufferMixer((unsigned int *)g_MixerState, 0x4000); /*0x5bf553*/
    RequestBufferMixer((unsigned int *)g_MixerChannel_Ambient, 0x4000); /*0x5bf563*/
    result = AudioMixer::Pump(); /*0x5bf568*/
    byte_ABF35C = 0; /*0x5bf56d*/
  }
  return result; /*0x5bf574*/
}



// ==== 0x005BF580  Map_Process  this=-  sig=ida-proto ====
char sub_5BF580()
{
  char result; // al

  result = byte_ABF35C; /*0x5bf580*/
  if ( !byte_ABF35C ) /*0x5bf587*/
  {
    AudioFrame::CounterInc(); /*0x5bf589*/
    AudioQueue::IncrementPriority(); /*0x5bf58e*/
    AudioQueue::ReleaseBuffers(); /*0x5bf593*/
    RequestBufferMixer((unsigned int *)g_MixerState, 0x2000); /*0x5bf5a3*/
    result = RequestBufferMixer((unsigned int *)g_MixerChannel_Ambient, 0x2000); /*0x5bf5b3*/
    byte_ABF35C = 1; /*0x5bf5b8*/
  }
  return result; /*0x5bf5bf*/
}



// ==== 0x005BF5C0  sub_5BF5C0  this=-  sig=ida-proto ====
int sub_5BF5C0()
{
  dword_ABF368 = 0; /*0x5bf5c2*/
  dword_ABF36C = 0; /*0x5bf5c7*/
  dword_ABF370 = 0; /*0x5bf5cc*/
  dword_ABF374 = 0; /*0x5bf5d1*/
  return 0; /*0x5bf5d6*/
}



// ==== 0x005BF5E0  sub_5BF5E0  this=-  sig=ida-proto ====
void sub_5BF5E0()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x5bf5ec*/
  dbl_ABF380 = Math::Sqrt(v0 + v0); /*0x5bf5fe*/
}



// ==== 0x005BF610  sub_5BF610  this=-  sig=ida-proto ====
void sub_5BF610()
{
  dbl_ABF3E8 = dbl_ABF380 / 60.0; /*0x5bf61c*/
}



// ==== 0x005BF630  sub_5BF630  this=-  sig=ida-proto ====
void sub_5BF630()
{
  dbl_ABF3D0 = 1.0 / dbl_ABF3E8; /*0x5bf63c*/
}



// ==== 0x005BF650  sub_5BF650  this=-  sig=ida-proto ====
void sub_5BF650()
{
  dbl_ABF3C8 = 0.0174532925199433 * 45.0; /*0x5bf65c*/
}



// ==== 0x005BF670  sub_5BF670  this=-  sig=ida-proto ====
void sub_5BF670()
{
  dbl_ABF388 = 0.0174532925199433 * 60.0; /*0x5bf67c*/
}



// ==== 0x005BF690  sub_5BF690  this=-  sig=ida-proto ====
void sub_5BF690()
{
  dbl_ABF360 = 0.0174532925199433 * 90.0; /*0x5bf69c*/
}



// ==== 0x005BF6B0  sub_5BF6B0  this=-  sig=ida-proto ====
__int64 sub_5BF6B0()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_ABF360 - dbl_ABF388); /*0x5bf6c2*/
  result = Math::RoundToInt(v0 * dbl_ABF380 * 0.5); /*0x5bf6d6*/
  dword_ABF3F0 = result; /*0x5bf6db*/
  return result; /*0x5bf6e0*/
}



// ==== 0x005BF6F0  sub_5BF6F0  this=-  sig=ida-proto ====
void sub_5BF6F0()
{
  dbl_ABF3A8 = Math::ArcTan((double)dword_ABF3F0 * 0.00390625); /*0x5bf707*/
}



// ==== 0x005BF720  sub_5BF720  this=-  sig=ida-proto ====
void sub_5BF720()
{
  dbl_ABF3C0 = Math::ArcTan((double)(2 * dword_ABF3F0) / dbl_ABF380); /*0x5bf742*/
}



// ==== 0x005BF750  sub_5BF750  this=-  sig=ida-proto ====
__int64 sub_5BF750()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_ABF3F0) + 0.5); /*0x5bf76b*/
  dword_ABF3E4 = result; /*0x5bf770*/
  return result; /*0x5bf776*/
}



// ==== 0x005BF780  sub_5BF780  this=-  sig=ida-proto ====
int sub_5BF780()
{
  word_ABF378 = 0; /*0x5bf782*/
  word_ABF37A = 0; /*0x5bf788*/
  return 0; /*0x5bf78e*/
}



// ==== 0x005BF790  sub_5BF790  this=-  sig=ida-proto ====
int sub_5BF790()
{
  dword_ABF3B0 = 0; /*0x5bf792*/
  dword_ABF3B4 = 0; /*0x5bf797*/
  dword_ABF3B8 = 0; /*0x5bf79c*/
  return 0; /*0x5bf7a1*/
}



// ==== 0x005BF7B0  sub_5BF7B0  this=-  sig=ida-proto ====
int sub_5BF7B0()
{
  dword_ABF3E0 = 0; /*0x5bf7b5*/
  dword_ABF3D8 = 128; /*0x5bf7bf*/
  dword_ABF3DC = 128; /*0x5bf7c4*/
  return 128; /*0x5bf7c9*/
}



// ==== 0x005BF7D0  sub_5BF7D0  this=-  sig=ida-proto ====
int sub_5BF7D0()
{
  dword_ABF394 = 0; /*0x5bf7d7*/
  dword_ABF398 = 0; /*0x5bf7dc*/
  byte_ABF39C = 1; /*0x5bf7e1*/
  byte_ABF39D = 0; /*0x5bf7e8*/
  dword_ABF390 = (int)&DynamicVectorClass<char const *>::`vftable'; /*0x5bf7ed*/
  dword_ABF3A4 = 10; /*0x5bf7f7*/
  dword_ABF3A0 = 0; /*0x5bf801*/
  return atexit(sub_5BF810); /*0x5bf80c*/
}



// ==== 0x005BF810  sub_5BF810  this=-  sig=ida-proto ====
void __cdecl sub_5BF810()
{
  dword_ABF390 = (int)&VectorClass<char const *>::`vftable'; /*0x5bf818*/
  if ( dword_ABF394 && byte_ABF39D ) /*0x5bf82c*/
  {
    __3_YAXPAX_Z(dword_ABF394); /*0x5bf82f*/
    dword_ABF394 = 0; /*0x5bf837*/
  }
  byte_ABF39D = 0; /*0x5bf83d*/
  dword_ABF398 = 0; /*0x5bf843*/
}



// ==== 0x005BF850  sub_5BF850  this=-  sig=ida-proto ====
int sub_5BF850()
{
  int v0; // esi
  int v1; // edi
  int *v2; // ebx
  int v3; // eax
  int v4; // ebp
  int v5; // eax
  unsigned int v7; // [esp-Ch] [ebp-1Ch]
  int v8; // [esp-8h] [ebp-18h]

  v0 = *(_DWORD *)(dword_ABF3F4 + 8); /*0x5bf858*/
  v1 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)v0 + 92))(v0, 0); /*0x5bf869*/
  v2 = *(int **)dword_ABF3F4; /*0x5bf873*/
  v8 = *(_DWORD *)(dword_ABF3F4 + 40); /*0x5bf87a*/
  v7 = *(_DWORD *)(dword_ABF3F4 + 36); /*0x5bf87b*/
  v3 = (*(int (__thiscall **)(int))(*(_DWORD *)v0 + 128))(v0); /*0x5bf87e*/
  v4 = (*(int (__thiscall **)(int, int))(*(_DWORD *)v0 + 116))(v0, v3); /*0x5bf88c*/
  v5 = (*(int (__thiscall **)(int))(*(_DWORD *)v0 + 112))(v0); /*0x5bf892*/
  Render_Load_759EB0(v2, 0, v4 / v5, v7, v8, 0); /*0x5bf8a1*/
  return v1; /*0x5bf8a8*/
}



// ==== 0x005BF8B0  ObjectClass::method_5BF8B0  this=ObjectClass  sig=csp ====
int sub_5BF8B0(ObjectClass *this)
{
  return (*(int (__thiscall **)(_DWORD, ObjectClass *))(**(_DWORD **)(g_MissionQueueFrame.localVariables[604] + 8) + 96))(
           *(_DWORD *)(g_MissionQueueFrame.localVariables[604] + 8),
           this);
}



// ==== 0x005BF8C0  ObjectClass::method_5BF8C0  this=ObjectClass  sig=csp ====
char sub_5BF8C0(ObjectClass *this)
{
  char result; // al
  int v2; // edx
  int v3; // ecx
  int v4; // edi
  _DWORD v5[4]; // [esp+0h] [ebp-20h] BYREF
  struct tagRECT Rect; // [esp+10h] [ebp-10h] BYREF

  result = TestBitArray(15); /*0x5bf8c8*/
  if ( !result ) /*0x5bf8cf*/
  {
    GetClientRect(g_hWnd, &Rect); /*0x5bf8e0*/
    ClientToScreen(g_hWnd, (LPPOINT)&Rect); /*0x5bf8f1*/
    v2 = *(_DWORD *)(g_MissionQueueFrame.localVariables[604] + 64); /*0x5bf90c*/
    v3 = Rect.top + *(_DWORD *)(g_MissionQueueFrame.localVariables[604] + 56); /*0x5bf90f*/
    v4 = *(_DWORD *)(g_MissionQueueFrame.localVariables[604] + 52); /*0x5bf911*/
    v5[2] = *(_DWORD *)(g_MissionQueueFrame.localVariables[604] + 60); /*0x5bf914*/
    v5[1] = v3; /*0x5bf91a*/
    v5[0] = Rect.left + v4; /*0x5bf924*/
    v5[3] = v2; /*0x5bf928*/
    return (*((int (__thiscall **)(DSurface *, _DWORD *, _DWORD, int, _DWORD, int))g_DSurface_Primary->DSurface_field_0x0 /*0x5bf93d*/
            + 2))(
             g_DSurface_Primary,
             v5,
             *(_DWORD *)(g_MissionQueueFrame.localVariables[604] + 8),
             g_MissionQueueFrame.localVariables[604] + 36,
             0,
             1);
  }
  return result; /*0x5bf943*/
}



// ==== 0x005BF950  ObjectClass::method_5BF950  this=ObjectClass  sig=csp ====
char __usercall sub_5BF950@<al>(ObjectClass *this, int a2@<edi>, int a3@<esi>)
{
  char result; // al
  _DWORD *v4; // eax
  int v5; // esi
  _DWORD *v6; // eax
  int v7; // eax
  int v8; // edx
  int v9; // esi
  int v10; // edi
  _DWORD v11[2]; // [esp+24h] [ebp-44h] BYREF
  int v12; // [esp+2Ch] [ebp-3Ch]
  int v13; // [esp+30h] [ebp-38h]
  _DWORD v14[4]; // [esp+34h] [ebp-34h] BYREF
  _DWORD v15[4]; // [esp+44h] [ebp-24h] BYREF
  struct tagRECT Rect; // [esp+54h] [ebp-14h] BYREF
  _BYTE v17[4]; // [esp+64h] [ebp-4h] BYREF

  result = TestBitArray(15); /*0x5bf958*/
  if ( !result ) /*0x5bf95f*/
  {
    (*((void (__thiscall **)(ObjectClass *, int, _DWORD, int, _DWORD, int, int, int))g_DSurface_Hidden->AbstractClass + 2))( /*0x5bf983*/
      g_DSurface_Hidden,
      g_MissionQueueFrame.localVariables[604] + 36,
      *(_DWORD *)(g_MissionQueueFrame.localVariables[604] + 8),
      g_MissionQueueFrame.localVariables[604] + 36,
      0,
      1,
      a2,
      a3);
    v4 = *(_DWORD **)(g_MissionQueueFrame.localVariables[604] + 72); /*0x5bf98c*/
    if ( v4 ) /*0x5bf991*/
    {
      if ( *v4 ) /*0x5bf997*/
      {
        v5 = v4[4]; /*0x5bf9a0*/
        v6 = (_DWORD *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)v5 + 120))(v5, v17); /*0x5bf9ac*/
        v11[0] = *v6; /*0x5bf9b1*/
        v11[1] = v6[1]; /*0x5bf9b8*/
        v12 = v6[2]; /*0x5bf9bf*/
        v13 = v6[3]; /*0x5bf9cc*/
        v14[0] = ((*((int (__thiscall **)(ObjectClass *))g_DSurface_Hidden->AbstractClass + 31))(g_DSurface_Hidden) - v12) /*0x5bf9e6*/
               / 2;
        v7 = (*((int (__thiscall **)(ObjectClass *))g_DSurface_Hidden->AbstractClass + 32))(g_DSurface_Hidden); /*0x5bf9ec*/
        v14[2] = v12; /*0x5bf9fc*/
        v14[1] = v7 - v13; /*0x5bfa04*/
        v14[3] = v13; /*0x5bfa15*/
        (*((void (__thiscall **)(ObjectClass *, _DWORD *, int, _DWORD *, int, int))g_DSurface_Hidden->AbstractClass + 2))( /*0x5bfa21*/
          g_DSurface_Hidden,
          v14,
          v5,
          v11,
          1,
          1);
      }
    }
    GetClientRect(g_hWnd, &Rect); /*0x5bfa30*/
    ClientToScreen(g_hWnd, (LPPOINT)&Rect); /*0x5bfa41*/
    v8 = *(_DWORD *)(g_MissionQueueFrame.localVariables[604] + 64); /*0x5bfa59*/
    v9 = *(_DWORD *)(g_MissionQueueFrame.localVariables[604] + 60); /*0x5bfa5c*/
    v10 = *(_DWORD *)(g_MissionQueueFrame.localVariables[604] + 52); /*0x5bfa61*/
    v15[1] = Rect.top + *(_DWORD *)(g_MissionQueueFrame.localVariables[604] + 56); /*0x5bfa6f*/
    v15[0] = Rect.left + v10; /*0x5bfa7c*/
    v15[2] = v9; /*0x5bfa80*/
    v15[3] = v8; /*0x5bfa84*/
    return (*((int (__thiscall **)(DSurface *, _DWORD *, ObjectClass *))g_DSurface_Primary->DSurface_field_0x0 + 2))( /*0x5bfa8f*/
             g_DSurface_Primary,
             v15,
             g_DSurface_Hidden);
  }
  return result; /*0x5bfa95*/
}



// ==== 0x005BFAA0  LoadVQMovie  this=ObjectClass  sig=csp ====
_DWORD *__fastcall LoadVQMovie(
        char *Source,
        int *a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        char a12)
{
  int v14; // eax
  int v15; // esi
  _DWORD *v16; // eax
  char v17; // al
  int v18; // eax
  char *v19; // eax
  char *v20; // eax
  int Height; // ebp
  int v23; // kr04_4
  int v24; // eax
  int v25; // edx
  int v26; // ebp
  _DWORD *v27; // eax
  int v28; // eax
  int v29; // ecx
  int v30; // ebp
  int v31; // ecx
  int v32; // eax
  int v33; // edx
  int v34; // ebp
  int v35; // eax
  int Status; // eax
  int v37; // ebx
  int v38; // eax
  _DWORD *SurfaceTracker; // eax
  unsigned int v40; // [esp-Ch] [ebp-BCh]
  int v41; // [esp+10h] [ebp-A0h]
  int Width; // [esp+10h] [ebp-A0h]
  char (__usercall *v43)@<al>(ObjectClass *, int@<edi>, int@<esi>); // [esp+14h] [ebp-9Ch]
  int v44; // [esp+14h] [ebp-9Ch]
  bool v45; // [esp+1Bh] [ebp-95h]
  int v46; // [esp+1Ch] [ebp-94h] BYREF
  int v47; // [esp+20h] [ebp-90h]
  int v48; // [esp+24h] [ebp-8Ch]
  int v49; // [esp+28h] [ebp-88h]
  int _759EA0; // [esp+2Ch] [ebp-84h]
  char *FullPath; // [esp+30h] [ebp-80h]
  int v52[4]; // [esp+34h] [ebp-7Ch] BYREF
  CCFileClass v53; // [esp+44h] [ebp-6Ch] BYREF
  int v54[3]; // [esp+9Ch] [ebp-14h] BYREF
  int v55; // [esp+A8h] [ebp-8h]

  FullPath = Source; /*0x5bfab2*/
  v43 = 0; /*0x5bfab6*/
  v14 = __2_YAPAXI_Z(0x4Cu); /*0x5bfaba*/
  v15 = v14; /*0x5bfabf*/
  if ( !v14 ) /*0x5bfac6*/
    return 0; /*0x5bfac6*/
  *(_DWORD *)v14 = 0; /*0x5bfacf*/
  *(_DWORD *)(v14 + 4) = -1; /*0x5bfad1*/
  *(_DWORD *)(v14 + 8) = 0; /*0x5bfad8*/
  *(_DWORD *)(v14 + 12) = 0; /*0x5bfadb*/
  *(_DWORD *)(v14 + 16) = 0; /*0x5bfade*/
  *(_DWORD *)(v14 + 20) = 0; /*0x5bfae1*/
  *(_DWORD *)(v14 + 24) = 0; /*0x5bfae4*/
  *(_DWORD *)(v14 + 28) = 1; /*0x5bfae7*/
  *(_DWORD *)(v14 + 32) = 0; /*0x5bfaee*/
  *(_DWORD *)(v14 + 36) = 0; /*0x5bfaf5*/
  *(_DWORD *)(v14 + 40) = 0; /*0x5bfaf8*/
  *(_DWORD *)(v14 + 44) = 0; /*0x5bfafb*/
  *(_DWORD *)(v14 + 48) = 0; /*0x5bfafe*/
  Rect::Set((Rect *)(v14 + 52), 0, 0, 0, 0); /*0x5bfb01*/
  *(_BYTE *)(v15 + 68) = 0; /*0x5bfb0a*/
  *(_BYTE *)(v15 + 69) = 0; /*0x5bfb0e*/
  *(_DWORD *)(v15 + 72) = 0; /*0x5bfb11*/
  v16 = CCFileClass::Construct(&v53, Source); /*0x5bfb14*/
  v17 = (*(int (__thiscall **)(_DWORD *, _DWORD))(*v16 + 20))(v16, 0); /*0x5bfb1e*/
  *(_DWORD *)v53.CDFileClass = &CCFileClass::`vftable'; /*0x5bfb2a*/
  v45 = v17 == 0; /*0x5bfb32*/
  v55 = 0; /*0x5bfb37*/
  Vector::Clear((int)v54); /*0x5bfb3e*/
  *(_DWORD *)v53.CDFileClass = &off_7E1668; /*0x5bfb47*/
  BufferIOFileClass::Dtor((BufferIOFileClass *)&v53); /*0x5bfb4f*/
  if ( v45 ) /*0x5bfb58*/
    return 0; /*0x5bfb58*/
  v41 = 0; /*0x5bfb5e*/
  if ( !Audio::IsSoundEnabled() ) /*0x5bfb62*/
    ResetAnimSystem(3); /*0x5bfb70*/
  if ( (unsigned __int8)TestBitArray(0) ) /*0x5bfb77*/
    v41 = 1; /*0x5bfb80*/
  if ( g_MissionQueueFrame.localVariables[606] == 1 ) /*0x5bfb8f*/
  {
    v18 = v41; /*0x5bfb91*/
    LOBYTE(v18) = v41 | 2; /*0x5bfb95*/
    v41 = v18; /*0x5bfb97*/
  }
  if ( a12 == 1 ) /*0x5bfba3*/
    v43 = sub_5BF950; /*0x5bfba5*/
  v19 = (char *)__2_YAPAXI_Z(0x554u); /*0x5bfbb2*/
  if ( v19 ) /*0x5bfbbc*/
    v20 = Stream::InitializeBinkAudio(v19, Source, v41, (int)sub_5BF850, (int)sub_5BF8B0, (int)v43, -1, -1); /*0x5bfbd9*/
  else
    v20 = 0; /*0x5bfbe0*/
  *(_DWORD *)v15 = v20; /*0x5bfbe4*/
  if ( !v20 || (Render_Load_759830((ObjectClass *)v20, a11), !Render_Load_7597A0(*(ObjectClass **)v15)) ) /*0x5bfbf9*/
  {
    BinkMovie::Cleanup((BinkMovie *)v15); /*0x5bfc04*/
    __3_YAXPAX_Z((void *)v15); /*0x5bfc0a*/
    return 0; /*0x5bfc1e*/
  }
  Width = MovieClass::GetWidth(*(MovieClass **)v15); /*0x5bfc2a*/
  Height = MovieClass::GetHeight(*(MovieClass **)v15); /*0x5bfc35*/
  _759EA0 = Render_Load_759EA0(*(ObjectClass **)v15); /*0x5bfc43*/
  if ( _759EA0 == 4 ) /*0x5bfc47*/
    _759EA0 = 1; /*0x5bfc49*/
  if ( !a3 && !a4 && !a5 && !a6 ) /*0x5bfc73*/
  {
    a3 = 0; /*0x5bfc7b*/
    a4 = 0; /*0x5bfc82*/
    a5 = Width; /*0x5bfc89*/
    a6 = Height; /*0x5bfc90*/
  }
  if ( !a7 && !a8 && !a9 && !a10 ) /*0x5bfcb9*/
  {
    v23 = (*(int (__thiscall **)(int *))(*a2 + 128))(a2) - Height; /*0x5bfcca*/
    v24 = (*(int (__thiscall **)(int *))(*a2 + 124))(a2); /*0x5bfcd2*/
    a8 = v23 / 2; /*0x5bfcd9*/
    a9 = Width; /*0x5bfce2*/
    a7 = (v24 - Width) / 2; /*0x5bfcee*/
    a10 = Height; /*0x5bfcf9*/
  }
  v25 = *a2; /*0x5bfd06*/
  v52[2] = Width; /*0x5bfd08*/
  v52[0] = 0; /*0x5bfd0e*/
  v52[1] = 0; /*0x5bfd12*/
  v52[3] = Height; /*0x5bfd16*/
  v44 = (*(int (__thiscall **)(int *))(v25 + 128))(a2); /*0x5bfd20*/
  v26 = (*(int (__thiscall **)(int *))(*a2 + 124))(a2); /*0x5bfd3d*/
  v27 = ClipRectIntersection(&v46, &a3, v52, 0, 0); /*0x5bfd3f*/
  *(_DWORD *)(v15 + 36) = *v27; /*0x5bfd46*/
  *(_DWORD *)(v15 + 40) = v27[1]; /*0x5bfd4c*/
  *(_DWORD *)(v15 + 44) = v27[2]; /*0x5bfd54*/
  v28 = v27[3]; /*0x5bfd59*/
  v47 = 0; /*0x5bfd5c*/
  *(_DWORD *)(v15 + 48) = v28; /*0x5bfd64*/
  v48 = v26; /*0x5bfd69*/
  v46 = 0; /*0x5bfd6d*/
  v49 = v44; /*0x5bfd7a*/
  if ( a9 <= 0 || a10 <= 0 || v26 <= 0 || v44 <= 0 ) /*0x5bfd9d*/
    goto LABEL_47; /*0x5bfd9d*/
  v29 = a7; /*0x5bfda3*/
  if ( a7 > 0 ) /*0x5bfdac*/
  {
    v46 = a7; /*0x5bfdb0*/
    v48 = v26 - a7; /*0x5bfdb4*/
  }
  if ( v48 < 1 ) /*0x5bfdbd*/
    goto LABEL_47; /*0x5bfdbd*/
  if ( v47 < a8 ) /*0x5bfdd0*/
  {
    v30 = v47 - a8; /*0x5bfdd6*/
    v47 = a8; /*0x5bfdda*/
    v49 += v30; /*0x5bfdde*/
    v29 = a7; /*0x5bfde2*/
  }
  if ( v49 < 1 ) /*0x5bfdee*/
    goto LABEL_47; /*0x5bfdee*/
  if ( v48 + v46 > a9 + v29 ) /*0x5bfe05*/
    v48 = a7 + a9 - v46; /*0x5bfe16*/
  if ( v48 < 1 ) /*0x5bfe1f*/
    goto LABEL_47; /*0x5bfe1f*/
  v31 = v47; /*0x5bfe35*/
  if ( v47 + v49 > a10 + a8 ) /*0x5bfe3d*/
    v49 = a10 + a8 - v47; /*0x5bfe51*/
  if ( v49 < 1 ) /*0x5bfe5a*/
  {
LABEL_47:
    v32 = 0; /*0x5bfe6a*/
    v33 = 0; /*0x5bfe6c*/
    v31 = 0; /*0x5bfe6e*/
    v34 = 0; /*0x5bfe70*/
  }
  else
  {
    v32 = v46; /*0x5bfe5c*/
    v33 = v48; /*0x5bfe60*/
    v34 = v49; /*0x5bfe64*/
  }
  *(_DWORD *)(v15 + 52) = v32; /*0x5bfe72*/
  v35 = _759EA0; /*0x5bfe75*/
  *(_DWORD *)(v15 + 56) = v31; /*0x5bfe79*/
  *(_DWORD *)(v15 + 60) = v33; /*0x5bfe7c*/
  *(_DWORD *)(v15 + 64) = v34; /*0x5bfe82*/
  if ( v35 == 1 || v35 == 4 ) /*0x5bfe8a*/
  {
    Status = DDraw::GetStatus(); /*0x5bfe8c*/
    Render_Load_759F20(*(ObjectClass **)v15, Status); /*0x5bfe94*/
  }
  *(_DWORD *)(v15 + 8) = a2; /*0x5bfe99*/
  v40 = (*(int (__thiscall **)(int *))(*a2 + 128))(a2); /*0x5bfeac*/
  v37 = (*(int (__thiscall **)(int *))(*a2 + 116))(a2); /*0x5bfeb6*/
  v38 = (*(int (__thiscall **)(int *))(*a2 + 112))(a2); /*0x5bfeb8*/
  Render_Load_759EB0(*(ObjectClass **)v15, 0, v37 / v38, v40, 0, 0); /*0x5bfec7*/
  SurfaceTracker = BinkMovie::CreateSurfaceTracker(FullPath); /*0x5bfed0*/
  *(_DWORD *)(v15 + 72) = SurfaceTracker; /*0x5bfed7*/
  if ( SurfaceTracker ) /*0x5bfeda*/
    **(_DWORD **)v15 = SurfaceTracker; /*0x5bfede*/
  *(_BYTE *)(v15 + 69) = 1; /*0x5bfee0*/
  return (_DWORD *)v15; /*0x5bfc12*/
}



// ==== 0x005BFF00  MovieContext::Cleanup  this=MovieContext  sig=csp ====
int __thiscall MovieContext::Cleanup(MovieContext *this)
{
  DSurface *v2; // ecx
  int result; // eax
  void *v4; // edi
  void *v5; // edi

  if ( this ) /*0x5bff05*/
  {
    v2 = (DSurface *)*this; /*0x5bff07*/
    if ( v2 ) /*0x5bff0c*/
    {
      LOBYTE(result) = DSurface::FlipIfNeeded(v2); /*0x5bff0e*/
      v4 = (void *)*this; /*0x5bff13*/
      if ( *this ) /*0x5bff13*/
      {
        CCFileClass::Cleanup(*(CCFileClass **)this); /*0x5bff1b*/
        __3_YAXPAX_Z(v4); /*0x5bff21*/
      }
      *this = 0; /*0x5bff29*/
    }
    v5 = (void *)*((_DWORD *)this + 18); /*0x5bff2f*/
    if ( v5 ) /*0x5bff34*/
    {
      BinkMovie::FreeSurfaceTracker(*((BinkMovie **)this + 18)); /*0x5bff38*/
      __3_YAXPAX_Z(v5); /*0x5bff3e*/
      *((_DWORD *)this + 18) = 0; /*0x5bff46*/
    }
    *((_BYTE *)this + 69) = 0; /*0x5bff4d*/
  }
  return result; /*0x5bff52*/
}



// ==== 0x005BFF60  RenderMovieFrame  this=-  sig=csp ====
char __fastcall Movie_RenderFrame(int a1, char a2, int a3, char a4)
{
  char result; // al
  int v6; // ebx
  int v7; // ebp
  int v8; // edi
  bool v9; // zf
  int v10; // [esp-10h] [ebp-1Ch]
  int v12; // [esp+8h] [ebp-4h]

  result = dword_ABF3F4; /*0x5bff63*/
  if ( !dword_ABF3F4 ) /*0x5bff71*/
  {
    *(_BYTE *)(a1 + 69) = 1; /*0x5bff7a*/
    dword_ABF3F4 = a1; /*0x5bff83*/
    v12 = 0; /*0x5bff89*/
    v6 = -1; /*0x5bff91*/
    v7 = 0; /*0x5bff94*/
    if ( (unsigned __int8)TestBitArray(2) ) /*0x5bff96*/
    {
      v12 = *(_DWORD *)(a1 + 16); /*0x5bffa2*/
      if ( *(int *)(a1 + 20) >= 0 ) /*0x5bffab*/
        v6 = *(_DWORD *)(a1 + 20); /*0x5bffad*/
      v7 = *(_DWORD *)(a1 + 28); /*0x5bffb2*/
      if ( *(_DWORD *)(a1 + 12) == 1 ) /*0x5bffb8*/
      {
        v10 = *(_DWORD *)(a1 + 28); /*0x5bffbd*/
        if ( *(_DWORD *)(a1 + 24) ) /*0x5bffba*/
          Render_Render_759880(v12, v6, v10); /*0x5bffd7*/
        else
          Render_Render_759850(*(_DWORD *)(a1 + 32), v10); /*0x5bffc8*/
      }
    }
    if ( a2 ) /*0x5bffe2*/
      (*(void (__thiscall **)(int))(*(_DWORD *)dword_887640 + 12))(dword_887640); /*0x5bffec*/
    if ( a3 != -1 ) /*0x5bfff6*/
      Theme::QueueSong(a3); /*0x5bfffe*/
    do /*0x5c0049*/
    {
      if ( *(_DWORD *)(a1 + 12) == 2 || v12 ) /*0x5c000f*/
        AbstractClass::updateBuildingState(v12); /*0x5c0018*/
      v8 = MovieClass::RenderLoop(v6, a4); /*0x5c002a*/
      if ( *(_DWORD *)(a1 + 12) == 1 ) /*0x5c0032*/
        v7 = 0; /*0x5c0034*/
      AbstractClass::finalizeConstruction(*(_DWORD *)a1); /*0x5c0038*/
      if ( v8 == 1 ) /*0x5c0040*/
        break; /*0x5c0040*/
      v9 = v7 == 0; /*0x5c0042*/
      if ( v7 > 0 ) /*0x5c0044*/
        v9 = --v7 == 0; /*0x5c0047*/
    }
    while ( !v9 ); /*0x5c0049*/
    result = a2; /*0x5c004b*/
    if ( a2 ) /*0x5c0054*/
      result = (*(int (__thiscall **)(int))(*(_DWORD *)dword_887640 + 16))(dword_887640); /*0x5c005e*/
    dword_ABF3F4 = 0; /*0x5c0061*/
  }
  return result; /*0x5c006b*/
}



// ==== 0x005B0060  MechLocomotionClass::ShortFunc_5B0060  this=MechLocomotionClass  sig=csp ====
int __stdcall JumpjetLocomotionClass::ShortFunc_5B0060(MechLocomotionClass *this)
{
  BuildingClass::ProcessMission((int)this - 4, 1); /*0x5b006a*/
  return (*(int (__stdcall **)(MechLocomotionClass *))(*(_DWORD *)this->LocomotionClass + 16))(this); /*0x5b0075*/
}



// ==== 0x005B0080  MechLocomotionClass::ConvertCoordToCell_1  this=MechLocomotionClass  sig=csp ====
int __stdcall JumpjetLocomotionClass::ConvertCoordToCell_1(MechLocomotionClass *this, int a2, int a3, int a4)
{
  int result; // eax
  int v5; // ecx
  int v6; // edx

  result = (*((int (__thiscall **)(FootClass *))this->?->TechnoClass + 223))(this->?); /*0x5b008a*/
  if ( !(_BYTE)result ) /*0x5b0092*/
  {
    result = (*((int (__thiscall **)(FootClass *))this->?->TechnoClass + 224))(this->?); /*0x5b0099*/
    if ( !(_BYTE)result ) /*0x5b00a1*/
    {
      result = (*((int (__thiscall **)(FootClass *))this->?->TechnoClass + 117))(this->?); /*0x5b00a8*/
      if ( !(_BYTE)result ) /*0x5b00b0*/
      {
        result = (*((int (__thiscall **)(FootClass *))this->?->TechnoClass + 118))(this->?); /*0x5b00b7*/
        if ( !(_BYTE)result ) /*0x5b00bf*/
        {
          v5 = a3; /*0x5b00c5*/
          v6 = a4; /*0x5b00ca*/
          this->? = a2; /*0x5b00dd*/
          this->MovingDestination[0] = v5; /*0x5b00e4*/
          this->MovingDestination[1] = v6; /*0x5b00ec*/
          result = (int)Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], &a2); /*0x5b00ef*/
          if ( (*(_DWORD *)(result + 320) & 0x100) != 0 ) /*0x5b00fe*/
          {
            result = Coord::ScaleToScreenY((Coord *)0x3C); /*0x5b0105*/
            this->MovingDestination[1] += result; /*0x5b010a*/
          }
          LOBYTE(this->HeadToCoord[2]) = 1; /*0x5b010d*/
        }
      }
    }
  }
  return result; /*0x5b0111*/
}



// ==== 0x005B0120  MechLocomotionClass::SyncMatrixTransformState  this=MechLocomotionClass  sig=csp ====
int __stdcall JumpjetLocomotionClass::SyncMatrixTransformState(MechLocomotionClass *this)
{
  int result; // eax

  result = (int)this; /*0x5b0120*/
  this->? = g_MissionQueueFrame.localVariables[227]; /*0x5b012d*/
  this->MovingDestination[0] = g_MissionQueueFrame.localVariables[228]; /*0x5b0136*/
  this->MovingDestination[1] = g_MissionQueueFrame.localVariables[229]; /*0x5b013f*/
  if ( this->MovingDestination[2] == g_MissionQueueFrame.localVariables[227] /*0x5b0165*/
    && this->HeadToCoord[0] == g_MissionQueueFrame.localVariables[228]
    && this->HeadToCoord[1] == g_MissionQueueFrame.localVariables[229] )
  {
    LOBYTE(this->HeadToCoord[2]) = 0; /*0x5b0167*/
  }
  return result; /*0x5b016b*/
}



// ==== 0x005B0170  MechLocomotionClass::UpdateFacingDirection_1  this=MechLocomotionClass  sig=csp ====
char __stdcall JumpjetLocomotionClass::UpdateFacingDirection_1(MechLocomotionClass *this, int a2)
{
  return FacingClass::Update((char *)this->?->?, &a2); /*0x5b018f*/
}



// ==== 0x005B01A0  MechLocomotionClass::InitMultiFieldArray  this=MechLocomotionClass  sig=csp ====
int __stdcall JumpjetLocomotionClass::InitMultiFieldArray(MechLocomotionClass *this, int a2, int a3, int a4)
{
  this->MovingDestination[2] = a2; /*0x5b01b4*/
  this->HeadToCoord[0] = a3; /*0x5b01b6*/
  this->HeadToCoord[1] = a4; /*0x5b01b9*/
  return a2; /*0x5b01bc*/
}



// ==== 0x005B01C0  BuildingClass::ProcessMission  this=BuildingClass  sig=csp ====
void __thiscall BuildingClass_ProcessMission(int this, char a2)
{
  _DWORD *v3; // esi
  _DWORD *v4; // ecx
  int v5; // edx
  int v6; // eax
  _DWORD *v7; // edi
  int v8; // eax
  int v9; // ecx
  int v10; // ecx
  _DWORD *v11; // eax
  int *v12; // eax
  _BYTE *v13; // ecx
  int v14; // eax
  int v15; // ecx
  _BYTE *v16; // ecx
  _DWORD *v17; // eax
  int v18; // edx
  int v19; // esi
  int v20; // eax
  int v21; // eax
  int v22; // ecx
  _DWORD *v23; // eax
  _BYTE *v24; // ecx
  _DWORD *v25; // eax
  int v26; // edx
  int v27; // esi
  int v28; // eax
  int v29; // eax
  int v30; // eax
  int v31; // edi
  int *v32; // eax
  int v33; // eax
  _DWORD *v34; // ecx
  _DWORD *v35; // edx
  int v36; // ecx
  int v37; // eax
  int v38; // eax
  int v39; // edx
  int v40; // esi
  int v41; // edi
  _DWORD *v42; // eax
  int *Coords; // eax
  int v44; // edx
  int v45; // ecx
  _DWORD *v46; // esi
  int v47; // edx
  _DWORD *v48; // edi
  int v49; // eax
  int v50; // eax
  int v51; // edx
  int v52; // edi
  int *v53; // eax
  int GroundHeight; // esi
  int v55; // edi
  int v56; // edx
  int v57; // ecx
  int v58; // ecx
  int v59; // eax
  int v60; // esi
  int v61; // edx
  _DWORD *v62; // ecx
  int v63; // eax
  _BYTE *v64; // ecx
  int v65; // esi
  void *v66; // eax
  int v67; // eax
  int v68; // esi
  _DWORD *v69; // eax
  _DWORD *v70; // ecx
  _DWORD *v71; // esi
  _DWORD *v72; // edx
  _DWORD *v73; // eax
  int v74; // edi
  int v75; // ecx
  int v76; // edx
  int v77; // eax
  int v78; // eax
  double v79; // st7
  int *v80; // ecx
  __int64 v81; // rax
  int *v82; // eax
  __int64 v83; // rax
  int v84; // eax
  _DWORD *v85; // edx
  int v86; // ecx
  int v87; // esi
  int v88; // edx
  int v89; // eax
  int v90; // ecx
  int v91; // eax
  char v92; // cl
  char v93; // al
  wchar_t *v94; // esi
  wchar_t *v95; // eax
  int v96; // ecx
  wchar_t **v97; // edx
  int v98; // ecx
  _DWORD *v99; // eax
  double v100; // st7
  __int16 v101; // ax
  int v102; // edx
  _DWORD *v103; // eax
  int Object; // esi
  _DWORD *v105; // edx
  int v106; // esi
  void *v107; // eax
  _DWORD *v108; // eax
  char v109; // al
  _DWORD *v110; // ecx
  int v111; // eax
  int v112; // esi
  _WORD *v113; // eax
  int v114; // esi
  __int16 v115; // cx
  int v116; // eax
  int v117; // esi
  _BYTE *v118; // ecx
  int *v119; // eax
  int v120; // ecx
  double v121; // st7
  __int16 v122; // ax
  int v123; // ecx
  double *v124; // ecx
  int v125; // esi
  int v126; // edi
  _DWORD *v127; // eax
  int v128; // ecx
  int v129; // eax
  double v130; // st7
  int v131; // eax
  int v132; // ecx
  int v133; // eax
  _DWORD *v134; // ecx
  int v135; // esi
  int v136; // edi
  _WORD *v137; // eax
  __int64 v138; // rax
  int v139; // ecx
  int v140; // eax
  int v141; // esi
  _WORD *v142; // eax
  int v143; // esi
  __int16 v144; // cx
  int v145; // eax
  int v146; // esi
  _BYTE *v147; // ecx
  int v148; // eax
  int v149; // ecx
  int *v150; // eax
  int v151; // ecx
  double v152; // st7
  __int16 v153; // ax
  int v154; // ecx
  __int16 v155; // si
  int v156; // ecx
  int *v157; // eax
  int *v158; // edx
  int v159; // edi
  double v160; // st7
  int v161; // esi
  double v162; // st7
  _DWORD *v163; // esi
  _DWORD *v164; // eax
  int *v165; // edx
  void *v166; // eax
  int v167; // eax
  char v168; // cl
  int LandHeight; // [esp+20h] [ebp-74h]
  char v170; // [esp+24h] [ebp-70h]
  char v171; // [esp+24h] [ebp-70h]
  char v172; // [esp+28h] [ebp-6Ch]
  char v173; // [esp+28h] [ebp-6Ch]
  int v174; // [esp+2Ch] [ebp-68h]
  char v175; // [esp+3Fh] [ebp-55h]
  _DWORD *v176; // [esp+40h] [ebp-54h] BYREF
  double v177; // [esp+44h] [ebp-50h] BYREF
  int v178; // [esp+4Ch] [ebp-48h]
  double v179; // [esp+54h] [ebp-40h] BYREF
  double v180; // [esp+5Ch] [ebp-38h] BYREF
  int v181; // [esp+64h] [ebp-30h]
  int v182; // [esp+70h] [ebp-24h] BYREF
  int v183; // [esp+74h] [ebp-20h]
  int v184; // [esp+78h] [ebp-1Ch]
  int v185; // [esp+7Ch] [ebp-18h] BYREF
  int v186; // [esp+80h] [ebp-14h]
  int v187; // [esp+84h] [ebp-10h]
  int v188; // [esp+88h] [ebp-Ch] BYREF
  int v189; // [esp+8Ch] [ebp-8h]
  int v190; // [esp+90h] [ebp-4h]

  if ( TimerClass::Active(*(_DWORD *)(this + 12) + 904) ) /*0x5b01d7*/
    return; /*0x5b01de*/
  if ( *(_DWORD *)(this + 36) != dword_ABEE10 /*0x5b0210*/
    || *(_DWORD *)(this + 40) != dword_ABEE14
    || *(_DWORD *)(this + 44) != dword_ABEE18 )
  {
    v125 = *(_DWORD *)(this + 36); /*0x5b1190*/
    v126 = *(_DWORD *)(this + 40); /*0x5b1193*/
    v127 = (_DWORD *)(*(int (__thiscall **)(_DWORD, int *))(**(_DWORD **)(this + 12) + 72))( /*0x5b119d*/
                       *(_DWORD *)(this + 12),
                       &v188);
    v128 = *v127 - v125; /*0x5b11a5*/
    v129 = v127[1] - v126; /*0x5b11a7*/
    v182 = v128; /*0x5b11a9*/
    v183 = v129; /*0x5b11ad*/
    v130 = Math::Sqrt((double)v129 * (double)v129 + (double)v128 * (double)v128); /*0x5b11cd*/
    v131 = Math::RoundToInt(v130); /*0x5b11d5*/
    v132 = *(_DWORD *)(this + 12); /*0x5b11da*/
    if ( v131 < 16 ) /*0x5b11e0*/
    {
      (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v132 + 292))(v132, 0); /*0x5b11ea*/
      v133 = *(_DWORD *)(this + 12); /*0x5b11f0*/
      if ( *(_DWORD *)(v133 + 1504) == -1 ) /*0x5b11fc*/
        *(_DWORD *)(v133 + 1508) = -1; /*0x5b11fe*/
      qmemcpy((void *)(*(_DWORD *)(this + 12) + 1504), (const void *)(*(_DWORD *)(this + 12) + 1508), 0x5Cu); /*0x5b1218*/
      *(_DWORD *)(*(_DWORD *)(this + 12) + 1596) = -1; /*0x5b121d*/
      (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 12) + 436))(*(_DWORD *)(this + 12), this + 36); /*0x5b1230*/
      LOWORD(v179) = *(_DWORD *)(this + 36) / 256; /*0x5b1247*/
      WORD1(v179) = *(_DWORD *)(this + 40) / 256; /*0x5b125b*/
      *(_DWORD *)(*(_DWORD *)(this + 12) + 1368) = LODWORD(v179); /*0x5b1267*/
      (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(this + 12) + 460))(*(_DWORD *)(this + 12), 0); /*0x5b1272*/
      BuildingClass::UpdateMovingPosition(&dword_ABEE10); /*0x5b127f*/
      v134 = *(_DWORD **)(this + 12); /*0x5b1284*/
      if ( v134[376] == -1 ) /*0x5b128e*/
        (*(void (__thiscall **)(_DWORD *, _DWORD, _DWORD))(*v134 + 1348))(v134, 0, 0); /*0x5b1296*/
      *(_BYTE *)(*(_DWORD *)(this + 12) + 1718) = 1; /*0x5b129f*/
      *(_BYTE *)(*(_DWORD *)(this + 12) + 1719) = 0; /*0x5b12a9*/
      if ( *(_DWORD *)(this + 24) == dword_ABEE10 /*0x5b1337*/
        && *(_DWORD *)(this + 28) == dword_ABEE14
        && *(_DWORD *)(this + 32) == dword_ABEE18
        || (v135 = *(_DWORD *)(this + 24) / 256,
            v136 = *(_DWORD *)(this + 28) / 256,
            v137 = (_WORD *)(*(int (__thiscall **)(_DWORD, int *))(**(_DWORD **)(this + 12) + 440))(
                              *(_DWORD *)(this + 12),
                              &v182),
            *v137 == (_WORD)v135)
        && v137[1] == (_WORD)v136
        && (v138 = *(_DWORD *)((*(int (__thiscall **)(_DWORD, int *, _DWORD))(**(_DWORD **)(this + 12) + 76))(
                                 *(_DWORD *)(this + 12),
                                 &v188,
                                 0)
                             + 8)
                 - *(_DWORD *)(this + 32),
            (int)((HIDWORD(v138) ^ v138) - HIDWORD(v138)) < 2 * dword_ABEE50) )
      {
        (*(void (__thiscall **)(_DWORD, _DWORD, int))(**(_DWORD **)(this + 12) + 1152))(*(_DWORD *)(this + 12), 0, 1); /*0x5b1342*/
        (*(void (__thiscall **)(_DWORD, _DWORD, _DWORD))(**(_DWORD **)(this + 12) + 1348))(*(_DWORD *)(this + 12), 0, 0); /*0x5b1351*/
        (*(void (__stdcall **)(int))(*(_DWORD *)(this + 4) + 72))(this + 4); /*0x5b135e*/
        *(_BYTE *)(this + 48) = 0; /*0x5b1361*/
      }
      (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 12) + 396))(*(_DWORD *)(this + 12), 2); /*0x5b136c*/
      v139 = *(_DWORD *)(this + 12); /*0x5b1372*/
      if ( *(_BYTE *)(v139 + 144) && !*(_BYTE *)(v139 + 129) && !*(_BYTE *)(v139 + 141) ) /*0x5b1391*/
      {
        v140 = *(_DWORD *)(v139 + 1504); /*0x5b139f*/
        if ( v140 != -1 && v140 != 8 ) /*0x5b13b1*/
        {
          v141 = *(_DWORD *)(v139 + 1504); /*0x5b13b7*/
          v142 = (_WORD *)(*(int (__thiscall **)(int, int *))(*(_DWORD *)v139 + 440))(v139, &v182); /*0x5b13c0*/
          v143 = v141 & 7; /*0x5b13c6*/
          v144 = v142[1] + HIWORD(dword_89F688[v143]); /*0x5b13df*/
          LOWORD(v179) = *v142 + LOWORD(dword_89F688[v143]); /*0x5b13e3*/
          WORD1(v179) = v144; /*0x5b13ec*/
          LODWORD(v180) = LODWORD(v179); /*0x5b13fb*/
          v145 = *((_DWORD *)CellCoord::To_CellObj(&dword_87F7E8, (__int16 *)&v180) + 17); /*0x5b1404*/
          if ( v145 != -1 ) /*0x5b140a*/
          {
            v146 = *((_DWORD *)dword_A83D84 + v145); /*0x5b1412*/
            if ( (*(_BYTE *)((*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 12) + 132))(*(_DWORD *)(this + 12)) /*0x5b1438*/
                           + 3368)
               || TechnoTypeClass::HasVoiceResponse(*(float **)(this + 12), 17))
              && !*(_DWORD *)(v146 + 660) )
            {
              *(_BYTE *)(*(_DWORD *)(this + 12) + 1717) = 1; /*0x5b1445*/
              if ( *(_BYTE *)((*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 12) + 132))(*(_DWORD *)(this + 12)) /*0x5b1457*/
                            + 3371) )
                *(_DWORD *)(*(_DWORD *)(this + 12) + 820) = -1138501878; /*0x5b1464*/
            }
          }
        }
        v147 = *(_BYTE **)(this + 12); /*0x5b146e*/
        if ( v147[144] && !v147[129] ) /*0x5b147f*/
        {
          (*(void (__thiscall **)(_BYTE *, int))(*(_DWORD *)v147 + 292))(v147, 1); /*0x5b1491*/
          *(_BYTE *)(*(_DWORD *)(this + 12) + 1674) = 0; /*0x5b149a*/
        }
      }
      return; /*0x5b14a7*/
    }
    (*(void (__thiscall **)(int, _DWORD, int))(*(_DWORD *)v132 + 1348))(v132, 0, 1072693248); /*0x5b14b3*/
    v148 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 12) + 1336))(*(_DWORD *)(this + 12)); /*0x5b14be*/
    v149 = *(_DWORD *)(this + 12); /*0x5b14c4*/
    LODWORD(v177) = v148; /*0x5b14c7*/
    v150 = (int *)(*(int (__thiscall **)(int, int *))(*(_DWORD *)v149 + 72))(v149, &v188); /*0x5b14d2*/
    v151 = *v150; /*0x5b14d8*/
    LODWORD(v180) = *(_DWORD *)(this + 36); /*0x5b14da*/
    LODWORD(v179) = v151; /*0x5b14de*/
    v152 = Math::CalcAngle((double)v150[1] - (double)*(int *)(this + 40), (double)SLODWORD(v180) - (double)v151); /*0x5b14fd*/
    v153 = Math::RoundToInt((v152 - 1.570796326794897) * -10430.06004058427); /*0x5b1511*/
    v154 = *(_DWORD *)(this + 4); /*0x5b1516*/
    v155 = v153; /*0x5b1519*/
    LOWORD(v180) = v153; /*0x5b151c*/
    (*(void (__stdcall **)(int, _DWORD))(v154 + 76))(this + 4, LODWORD(v180)); /*0x5b152a*/
    if ( TimerClass::Active(*(_DWORD *)(this + 12) + 904) ) /*0x5b1536*/
      return; /*0x5b153d*/
    if ( (*(unsigned __int8 (__thiscall **)(_DWORD))(**(_DWORD **)(this + 12) + 192))(*(_DWORD *)(this + 12)) ) /*0x5b1548*/
    {
      v156 = *(_DWORD *)(this + 12); /*0x5b1552*/
      v180 = *(double *)(v156 + 156); /*0x5b1561*/
      v181 = *(_DWORD *)(v156 + 164); /*0x5b156f*/
      (*(void (__thiscall **)(int, double *))(*(_DWORD *)v156 + 244))(v156, &v180); /*0x5b157a*/
      *(_BYTE *)(*(_DWORD *)(this + 12) + 1718) = 0; /*0x5b1583*/
      *(_BYTE *)(*(_DWORD *)(this + 12) + 1719) = 0; /*0x5b158d*/
    }
    v157 = (int *)(*(int (__thiscall **)(_DWORD, double *))(**(_DWORD **)(this + 12) + 440))( /*0x5b159e*/
                    *(_DWORD *)(this + 12),
                    &v180);
    v158 = (int *)(*(_DWORD *)(this + 12) + 156); /*0x5b15a9*/
    v176 = (_DWORD *)*v157; /*0x5b15af*/
    v188 = *v158; /*0x5b15b5*/
    v189 = v158[1]; /*0x5b15bc*/
    v159 = v158[2]; /*0x5b15c0*/
    LODWORD(v180) = v155 - 0x3FFF; /*0x5b15cc*/
    v180 = (double)SLODWORD(v180) * -0.00009587672516830327; /*0x5b15da*/
    v179 = (double)SLODWORD(v177); /*0x5b15ec*/
    v177 = (double)v189; /*0x5b15f4*/
    v160 = Math::SinCos(v180); /*0x5b15f8*/
    v161 = Math::RoundToInt(v177 - v160 * v179); /*0x5b160e*/
    v162 = Math::ArcTan2(v180); /*0x5b1616*/
    v185 = Math::RoundToInt(v162 * v179 + (double)v188); /*0x5b162b*/
    v186 = v161; /*0x5b162f*/
    v187 = v159; /*0x5b163a*/
    LOWORD(v179) = v185 / 256; /*0x5b1658*/
    WORD1(v179) = v161 / 256; /*0x5b165d*/
    v182 = LODWORD(v179); /*0x5b1666*/
    if ( v176 == (_DWORD *)LODWORD(v179) ) /*0x5b166a*/
    {
      v167 = *(_DWORD *)(this + 12); /*0x5b175a*/
      v168 = *(_BYTE *)(v167 + 116); /*0x5b175d*/
      *(_BYTE *)(v167 + 116) = 0; /*0x5b1760*/
      v175 = v168; /*0x5b1764*/
      (*(void (__thiscall **)(_DWORD, int *))(**(_DWORD **)(this + 12) + 436))(*(_DWORD *)(this + 12), &v185); /*0x5b1772*/
      (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(this + 12) + 460))(*(_DWORD *)(this + 12), 0); /*0x5b177f*/
      *(_BYTE *)(*(_DWORD *)(this + 12) + 116) = v175; /*0x5b178e*/
      *(_BYTE *)(*(_DWORD *)(this + 12) + 1674) = 0; /*0x5b1795*/
      return; /*0x5b166c*/
    }
    (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(this + 12) + 292))(*(_DWORD *)(this + 12), 0); /*0x5b167e*/
    (*(void (__thiscall **)(_DWORD, int *))(**(_DWORD **)(this + 12) + 436))(*(_DWORD *)(this + 12), &v185); /*0x5b168e*/
    v163 = CellCoord::To_CellObj(&dword_87F7E8, (__int16 *)&v176); /*0x5b16ad*/
    v164 = CellCoord::To_CellObj(&dword_87F7E8, (__int16 *)&v182); /*0x5b16af*/
    if ( *((char *)v164 + 283) == *((char *)v163 + 283) - 4 ) /*0x5b16cc*/
    {
      if ( (v164[80] & 0x100) == 0 ) /*0x5b16d4*/
        goto LABEL_145; /*0x5b16d4*/
      *(_BYTE *)(*(_DWORD *)(this + 12) + 140) = 1; /*0x5b16d9*/
    }
    if ( (v164[80] & 0x100) != 0 ) /*0x5b16e6*/
    {
LABEL_147:
      (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(this + 12) + 460))(*(_DWORD *)(this + 12), 0); /*0x5b16fa*/
      (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 12) + 292))(*(_DWORD *)(this + 12), 1); /*0x5b170e*/
      v165 = (int *)(*(_DWORD *)(this + 12) + 156); /*0x5b1717*/
      v188 = *v165; /*0x5b171f*/
      v189 = v165[1]; /*0x5b172b*/
      v190 = v165[2]; /*0x5b1737*/
      v166 = Coord::To_Cell(&dword_87F7E8, &v188); /*0x5b173b*/
      BuildingClass::CreateIdleAnim((int)v166); /*0x5b1742*/
LABEL_148:
      *(_BYTE *)(*(_DWORD *)(this + 12) + 1674) = 0; /*0x5b1747*/
      return; /*0x5b174a*/
    }
LABEL_145:
    if ( (v163[80] & 0x100) != 0 ) /*0x5b16ee*/
      *(_BYTE *)(*(_DWORD *)(this + 12) + 140) = 0; /*0x5b16f3*/
    goto LABEL_147; /*0x5b16f3*/
  }
  v3 = (_DWORD *)(this + 24); /*0x5b0219*/
  if ( *(_DWORD *)(this + 24) == dword_ABEE10 /*0x5b0228*/
    && *(_DWORD *)(this + 28) == dword_ABEE14
    && *(_DWORD *)(this + 32) == dword_ABEE18 )
  {
    v124 = *(double **)(this + 12); /*0x5b1154*/
    if ( v124[175] > 0.0 ) /*0x5b1168*/
    {
      (*(void (__thiscall **)(double *, _DWORD, _DWORD))(*(_DWORD *)v124 + 1348))(v124, 0, 0); /*0x5b1174*/
      *(_BYTE *)(*(_DWORD *)(this + 12) + 1674) = 0; /*0x5b117d*/
      return; /*0x5b118a*/
    }
    goto LABEL_148; /*0x5b1168*/
  }
  v4 = *(_DWORD **)(this + 12); /*0x5b022e*/
  v176 = v4; /*0x5b0231*/
  if ( v4[376] == -1 ) /*0x5b023c*/
  {
    v5 = v4[400]; /*0x5b0242*/
    v6 = v4[402]; /*0x5b0248*/
    v7 = v4 + 400; /*0x5b024e*/
    if ( v5 != -1 ) /*0x5b0257*/
    {
      if ( (int)dword_A8ED84 - v5 >= v6 ) /*0x5b0263*/
      {
LABEL_14:
        v8 = Math::RoundToInt(*((double *)dword_8871E0 + 748) * 900.0); /*0x5b0280*/
        v9 = v189; /*0x5b029d*/
        *v7 = dword_A8ED84; /*0x5b02a1*/
        v7[1] = v9; /*0x5b02a3*/
        v7[2] = v8; /*0x5b02a6*/
        v10 = *(_DWORD *)(this + 12); /*0x5b02b2*/
        LOWORD(v176) = *v3 / 256; /*0x5b02bc*/
        HIWORD(v176) = *(_DWORD *)(this + 28) / 256; /*0x5b02d2*/
        if ( !FootClass::MovementStep(v10, (int)v7, (int)v176, 0, 0, v174) ) /*0x5b02dc*/
        {
          if ( (*(unsigned __int8 (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 12) + 716))( /*0x5b02ef*/
                 *(_DWORD *)(this + 12),
                 this + 24) )
          {
            v11 = (_DWORD *)(*(int (__thiscall **)(_DWORD, int *))(**(_DWORD **)(this + 12) + 72))( /*0x5b0307*/
                              *(_DWORD *)(this + 12),
                              &v188);
            v12 = Coord::Subtract(&v182, *v11 - *v3, v11[1] - *(_DWORD *)(this + 28), v11[2] - *(_DWORD *)(this + 32)); /*0x5b0327*/
            v185 = *v12; /*0x5b032e*/
            v186 = v12[1]; /*0x5b0339*/
            v187 = v12[2]; /*0x5b0340*/
            if ( (int)Coord::Length(&v185) >= *((_DWORD *)dword_8871E0 + 1478) /*0x5b035a*/
              || (v13 = *(_BYTE **)(this + 12), v13[1048]) )
            {
              v14 = *(_DWORD *)(this + 12); /*0x5b0375*/
              v15 = *(_DWORD *)(v14 + 1612); /*0x5b0378*/
              if ( v15 ) /*0x5b0380*/
              {
                *(_DWORD *)(v14 + 1612) = v15 - 1; /*0x5b0383*/
              }
              else
              {
                if ( *(_BYTE *)(v14 + 1674) ) /*0x5b038e*/
                  PlayVocClass(*((_DWORD *)dword_8871E0 + 448), 0x2000, 1.0, 0); /*0x5b03aa*/
                *(_BYTE *)(*(_DWORD *)(this + 12) + 1674) = 0; /*0x5b03b2*/
                LOWORD(v176) = *v3 / 256; /*0x5b03c7*/
                HIWORD(v176) = *(_DWORD *)(this + 28) / 256; /*0x5b03db*/
                LODWORD(v177) = v176; /*0x5b03e4*/
                v16 = *(_BYTE **)(this + 12); /*0x5b03e8*/
                if ( v16[981] ) /*0x5b03eb*/
                {
                  v17 = (_DWORD *)(*(int (__thiscall **)(_BYTE *, int *, _DWORD))(*(_DWORD *)v16 + 76))(v16, &v188, 0); /*0x5b0402*/
                  LOWORD(v176) = *v17 / 256; /*0x5b0415*/
                  v18 = *(_DWORD *)(this + 12); /*0x5b0426*/
                  HIWORD(v176) = v17[1] / 256; /*0x5b042c*/
                  v19 = v18; /*0x5b0435*/
                  LODWORD(v179) = v176; /*0x5b0437*/
                  v176 = (_DWORD *)v18; /*0x5b043d*/
                  v172 = (*(int (__thiscall **)(int))(*(_DWORD *)v18 + 800))(v18); /*0x5b044d*/
                  v170 = BYTE1(*((_DWORD *)CellCoord::To_CellObj(&dword_87F7E8, (__int16 *)&v177) + 80)) & 1; /*0x5b0469*/
                  v20 = (*(int (__thiscall **)(int))(*(_DWORD *)v19 + 188))(v19); /*0x5b046c*/
                  v21 = (*(int (__thiscall **)(int, int))(*(_DWORD *)v19 + 132))(v19, v20); /*0x5b0477*/
                  if ( !MapSeed::CheckTileMatch( /*0x5b0493*/
                          &dword_87F7E8,
                          (__int16 *)&v179,
                          (__int16 *)&v177,
                          *(_DWORD *)(v21 + 1460),
                          0,
                          v170,
                          v172) )
                    (*(void (__thiscall **)(_DWORD, _DWORD, int))(**(_DWORD **)(this + 12) + 1152))( /*0x5b04a5*/
                      *(_DWORD *)(this + 12),
                      0,
                      1);
                }
                v22 = *(_DWORD *)(*(_DWORD *)(this + 12) + 692); /*0x5b04ae*/
                if ( v22 ) /*0x5b04b6*/
                {
                  v23 = (_DWORD *)(*(int (__thiscall **)(int, int *, _DWORD))(*(_DWORD *)v22 + 76))( /*0x5b04c4*/
                                    v22,
                                    &v188,
                                    *(_DWORD *)(this + 12));
                  LOWORD(v176) = *v23 / 256; /*0x5b04d7*/
                  HIWORD(v176) = v23[1] / 256; /*0x5b04eb*/
                  LODWORD(v179) = v176; /*0x5b04f4*/
                  v24 = *(_BYTE **)(this + 12); /*0x5b04f8*/
                  if ( v24[981] ) /*0x5b04fb*/
                  {
                    v25 = (_DWORD *)(*(int (__stdcall **)(int *, _DWORD))(*(_DWORD *)v24 + 76))( /*0x5b0511*/
                                      &v188,
                                      *(_DWORD *)(this + 12));
                    LOWORD(v176) = *v25 / 256; /*0x5b0524*/
                    v26 = *(_DWORD *)(this + 12); /*0x5b0535*/
                    HIWORD(v176) = v25[1] / 256; /*0x5b053b*/
                    v27 = v26; /*0x5b0544*/
                    LODWORD(v180) = v176; /*0x5b0546*/
                    v176 = (_DWORD *)v26; /*0x5b054c*/
                    v173 = (*(int (__thiscall **)(int))(*(_DWORD *)v26 + 800))(v26); /*0x5b055c*/
                    v171 = BYTE1(*((_DWORD *)CellCoord::To_CellObj(&dword_87F7E8, (__int16 *)&v179) + 80)) & 1; /*0x5b0578*/
                    v28 = (*(int (__thiscall **)(int))(*(_DWORD *)v27 + 188))(v27); /*0x5b057a*/
                    v29 = (*(int (__thiscall **)(int, int))(*(_DWORD *)v27 + 132))(v27, v28); /*0x5b0585*/
                    if ( !MapSeed::CheckTileMatch( /*0x5b05a1*/
                            &dword_87F7E8,
                            (__int16 *)&v180,
                            (__int16 *)&v179,
                            *(_DWORD *)(v29 + 1460),
                            v27,
                            v171,
                            v173) )
                      (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(this + 12) + 968))( /*0x5b05b1*/
                        *(_DWORD *)(this + 12),
                        0);
                  }
                }
              }
            }
            else
            {
              (*(void (__thiscall **)(_BYTE *, _DWORD, int))(*(_DWORD *)v13 + 1152))(v13, 0, 1); /*0x5b036a*/
            }
            (*(void (__thiscall **)(_DWORD, _DWORD, _DWORD))(**(_DWORD **)(this + 12) + 1348))( /*0x5b05c0*/
              *(_DWORD *)(this + 12),
              0,
              0);
            (*(void (__stdcall **)(int))(*(_DWORD *)(this + 4) + 72))(this + 4); /*0x5b05cd*/
            *(_BYTE *)(this + 48) = 0; /*0x5b05d0*/
            return; /*0x5b05da*/
          }
LABEL_37:
          (*(void (__thiscall **)(_DWORD, _DWORD, int))(**(_DWORD **)(this + 12) + 1152))(*(_DWORD *)(this + 12), 0, 1); /*0x5b0871*/
          return; /*0x5b0888*/
        }
        *(_DWORD *)(*(_DWORD *)(this + 12) + 1612) = 10; /*0x5b05e0*/
        goto LABEL_32; /*0x5b05e0*/
      }
      v6 -= (int)dword_A8ED84 - v5; /*0x5b0265*/
      v4 = v176; /*0x5b0267*/
    }
    if ( v6 ) /*0x5b026d*/
    {
      (*(void (__thiscall **)(_DWORD *))(*v4 + 1352))(v4); /*0x5b0271*/
      return; /*0x5b027d*/
    }
    goto LABEL_14; /*0x5b026d*/
  }
LABEL_32:
  v30 = *(_DWORD *)(this + 12); /*0x5b05ea*/
  v31 = *(_DWORD *)(v30 + 1504); /*0x5b05ed*/
  if ( v31 == 8 ) /*0x5b05f6*/
  {
    v32 = (int *)(v30 + 156); /*0x5b05fc*/
    v185 = *v32; /*0x5b0603*/
    v186 = v32[1]; /*0x5b060f*/
    v187 = v32[2]; /*0x5b061b*/
    v33 = *((__int16 *)Coord::To_Cell(&dword_87F7E8, &v185) + 139); /*0x5b0624*/
    v176 = (_DWORD *)v33; /*0x5b062d*/
    if ( v33 >= 0 && v33 < dword_8B4148 ) /*0x5b0640*/
    {
      (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(this + 12) + 292))(*(_DWORD *)(this + 12), 0); /*0x5b064d*/
      v34 = *(_DWORD **)(this + 12); /*0x5b0653*/
      v182 = v34[39]; /*0x5b0662*/
      v183 = v34[40]; /*0x5b0669*/
      v184 = v34[41]; /*0x5b0670*/
      (*(void (__thiscall **)(_DWORD *, int *))(*v34 + 244))(v34, &v182); /*0x5b067b*/
      v35 = (_DWORD *)*((_DWORD *)dword_8B413C + (_DWORD)v176); /*0x5b068c*/
      LODWORD(v177) = v35; /*0x5b068f*/
      LODWORD(v180) = v35[10]; /*0x5b0696*/
      v36 = SWORD1(v180) << 8; /*0x5b06aa*/
      *(_DWORD *)(this + 36) = (SLOWORD(v180) << 8) + 128; /*0x5b06b3*/
      v37 = *(_DWORD *)(this + 12); /*0x5b06b6*/
      *(_DWORD *)(this + 40) = v36 + 128; /*0x5b06b9*/
      *(_DWORD *)(this + 44) = 0; /*0x5b06bc*/
      qmemcpy((void *)(v37 + 1504), (const void *)(v37 + 1508), 0x5Cu); /*0x5b06d0*/
      *(_DWORD *)(*(_DWORD *)(this + 12) + 1596) = -1; /*0x5b06d5*/
      *(_BYTE *)(*(_DWORD *)(this + 12) + 1668) = (_BYTE)v176; /*0x5b06e6*/
      *(_BYTE *)(*(_DWORD *)(this + 12) + 1669) = 0; /*0x5b06ef*/
      v38 = v35[9]; /*0x5b06f6*/
      v39 = v35[12] & 7; /*0x5b0705*/
      LODWORD(v180) = v38; /*0x5b0708*/
      LOWORD(v179) = LOWORD(dword_89F688[v39]) + v38; /*0x5b0722*/
      WORD1(v179) = HIWORD(v38) + HIWORD(dword_89F688[v39]); /*0x5b0734*/
      LODWORD(v180) = LODWORD(v179); /*0x5b0741*/
      v40 = ((__int16)v38 << 8) + 128; /*0x5b074e*/
      v41 = (SHIWORD(v38) << 8) + 128; /*0x5b0754*/
      v42 = CellCoord::To_CellObj(&dword_87F7E8, (__int16 *)&v180); /*0x5b075a*/
      Coords = CellClass::GetCoords(v42, &v188); /*0x5b0761*/
      v44 = Coords[1]; /*0x5b0768*/
      v45 = *Coords - v40; /*0x5b076e*/
      v46 = *(_DWORD **)(this + 12); /*0x5b0770*/
      v190 = Coords[2]; /*0x5b0773*/
      v47 = v44 - v41; /*0x5b0777*/
      v48 = v46 + 39; /*0x5b077f*/
      v185 = v46[39]; /*0x5b0783*/
      v49 = v46[40]; /*0x5b0787*/
      v46 += 346; /*0x5b078a*/
      v50 = v47 + v49; /*0x5b0790*/
      v51 = v190; /*0x5b0795*/
      v187 = v48[2]; /*0x5b0799*/
      v52 = v187; /*0x5b07a3*/
      *v46 = v185 + v45; /*0x5b07a7*/
      v46[1] = v50; /*0x5b07ab*/
      v46[2] = v52 + v51; /*0x5b07ae*/
      v53 = (int *)(*(_DWORD *)(this + 12) + 156); /*0x5b07b4*/
      v185 = *v53; /*0x5b07bb*/
      v186 = v53[1]; /*0x5b07c7*/
      v187 = v53[2]; /*0x5b07d3*/
      GroundHeight = Cell::GetGroundHeight(&v185); /*0x5b07dc*/
      v187 = 0; /*0x5b07e2*/
      v55 = *(_DWORD *)(LODWORD(v177) + 448); /*0x5b07ed*/
      v56 = (__int16)*(_DWORD *)(LODWORD(v177) + 40); /*0x5b07f3*/
      LODWORD(v180) = *(_DWORD *)(LODWORD(v177) + 40); /*0x5b07f6*/
      v185 = (v56 << 8) + 128; /*0x5b080b*/
      v186 = (SWORD1(v180) << 8) + 128; /*0x5b0819*/
      *(_DWORD *)(*(_DWORD *)(this + 12) + 1392) = GroundHeight + (Cell::GetGroundHeight(&v185) - GroundHeight) / v55; /*0x5b0832*/
      return; /*0x5b083e*/
    }
    *(_DWORD *)(*(_DWORD *)(this + 12) + 1504) = -1; /*0x5b0844*/
    *(_DWORD *)(this + 36) = dword_ABEE10; /*0x5b0853*/
    *(_DWORD *)(this + 40) = dword_ABEE14; /*0x5b085f*/
    v57 = *(_DWORD *)(this + 4); /*0x5b0869*/
    *(_DWORD *)(this + 44) = dword_ABEE18; /*0x5b086b*/
    (*(void (__stdcall **)(int))(v57 + 72))(this + 4); /*0x5b086e*/
    goto LABEL_37; /*0x5b086e*/
  }
  v58 = v30 + 156; /*0x5b0890*/
  v59 = *(_DWORD *)(v30 + 156); /*0x5b0892*/
  v60 = *(_DWORD *)(v58 + 4); /*0x5b0894*/
  v190 = *(_DWORD *)(v58 + 8); /*0x5b089a*/
  v61 = v31 & 7; /*0x5b08b6*/
  LOWORD(v58) = LOWORD(dword_89F688[v61]) + v59 / 256; /*0x5b08bc*/
  LOWORD(v61) = HIWORD(dword_89F688[v61]); /*0x5b08ce*/
  LOWORD(v179) = v58; /*0x5b08d2*/
  WORD1(v179) = v60 / 256 + v61; /*0x5b08da*/
  v176 = (_DWORD *)LODWORD(v179); /*0x5b08e3*/
  HIDWORD(v177) = (SWORD1(v179) << 8) + 128; /*0x5b08f8*/
  LODWORD(v177) = ((__int16)v58 << 8) + 128; /*0x5b090e*/
  v178 = 0; /*0x5b0912*/
  v178 = Cell::GetGroundHeight(&v177); /*0x5b0925*/
  v62 = CellCoord::To_CellObj(&dword_87F7E8, (__int16 *)&v176); /*0x5b092e*/
  v63 = *(_DWORD *)(this + 12); /*0x5b0930*/
  LODWORD(v180) = v62; /*0x5b0933*/
  if ( *(_BYTE *)(v63 + 140) != ((v62[80] >> 8) & 1) ) /*0x5b094b*/
    *(_BYTE *)(v63 + 1675) = 1; /*0x5b094f*/
  v64 = *(_BYTE **)(this + 12); /*0x5b0956*/
  v65 = *(_DWORD *)v64; /*0x5b095d*/
  LandHeight = ObjectClass::GetLandHeight(v64); /*0x5b0964*/
  v66 = CellCoord::To_CellObj(&dword_87F7E8, (__int16 *)&v176); /*0x5b0970*/
  v67 = (*(int (__thiscall **)(_DWORD, void *, int, int, _DWORD, int))(v65 + 428))( /*0x5b0979*/
          *(_DWORD *)(this + 12),
          v66,
          v31,
          LandHeight,
          0,
          1);
  v68 = v67; /*0x5b097f*/
  if ( (v67 != 5 && v67 != 4 /*0x5b09b1*/
     || !*(_BYTE *)((*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 12) + 132))(*(_DWORD *)(this + 12)) + 3368)
     || *(_DWORD *)(LODWORD(v180) + 68))
    && v68 )
  {
    (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 12) + 1352))(*(_DWORD *)(this + 12)); /*0x5b09bc*/
    if ( v68 == 6 ) /*0x5b09c5*/
    {
      v69 = CellCoord::To_CellObj(&dword_87F7E8, (__int16 *)&v176); /*0x5b09d5*/
      v70 = *(_DWORD **)(this + 12); /*0x5b09da*/
      v71 = v69; /*0x5b09dd*/
      if ( a2 ) /*0x5b09e4*/
      {
        v70[376] = -1; /*0x5b09e6*/
        *(_DWORD *)(this + 36) = dword_ABEE10; /*0x5b09f6*/
        v72 = *(_DWORD **)(this + 12); /*0x5b09fe*/
        *(_DWORD *)(this + 40) = dword_ABEE14; /*0x5b0a01*/
        v72 += 400; /*0x5b0a0a*/
        *(_DWORD *)(this + 44) = dword_ABEE18; /*0x5b0a10*/
        *v72 = dword_A8ED84; /*0x5b0a18*/
        v72[1] = v189; /*0x5b0a20*/
        v72[2] = 0; /*0x5b0a24*/
        BuildingClass::ProcessMission(0); /*0x5b0a29*/
      }
      else
      {
        v73 = (_DWORD *)(*(int (__thiscall **)(_DWORD *, int *))(*v70 + 72))(v70, &v188); /*0x5b0a3e*/
        v74 = *(_DWORD *)(this + 28); /*0x5b0a46*/
        v75 = *v73 - *(_DWORD *)(this + 24); /*0x5b0a49*/
        v76 = v73[1]; /*0x5b0a4b*/
        v77 = v73[2]; /*0x5b0a4e*/
        v182 = v75; /*0x5b0a51*/
        v78 = v77 - *(_DWORD *)(this + 32); /*0x5b0a5e*/
        v183 = v76 - v74; /*0x5b0a60*/
        v184 = v78; /*0x5b0a64*/
        v79 = Math::Sqrt((double)v78 * (double)v78 + (double)(v76 - v74) * (double)(v76 - v74) + (double)v182 /*0x5b0a8c*/
                                                                                               * (double)v182);
        if ( (int)Math::RoundToInt(v79) >= *((_DWORD *)dword_8871E0 + 1478) /*0x5b0b16*/
          || Team::AllMembersValid(*(int **)(this + 12))
          || (v80 = (int *)(*(_DWORD *)(this + 12) + 156),
              v188 = *v80,
              v189 = v80[1],
              v81 = *(_DWORD *)(this + 32) - v80[2],
              (int)((HIDWORD(v81) ^ v81) - HIDWORD(v81)) >= 2 * dword_ABEE50)
          || (v185 = *v80, v186 = v80[1], v187 = v80[2], *((_DWORD *)Coord::To_Cell(&dword_87F7E8, &v185) + 59) == 10) )
        {
          if ( (v71[80] & 0x100) == 0 /*0x5b0b99*/
            || (v82 = *(int **)(this + 12),
                LOBYTE(v179) = 1,
                v82 += 39,
                v188 = *v82,
                v189 = v82[1],
                v83 = v82[2] / dword_ABEE50 - *((char *)v71 + 283),
                (int)((HIDWORD(v83) ^ v83) - HIDWORD(v83)) <= 2) )
          {
            LOBYTE(v179) = 0; /*0x5b0b9b*/
          }
          Cell::ApplyDamage(v71, (int)&dword_ABEE10, 1, 1, SLOBYTE(v179)); /*0x5b0bb0*/
        }
        else
        {
          (*(void (__thiscall **)(_DWORD, _DWORD, _DWORD))(**(_DWORD **)(this + 12) + 1348))( /*0x5b0b21*/
            *(_DWORD *)(this + 12),
            0,
            0);
          (*(void (__thiscall **)(_DWORD, _DWORD, int))(**(_DWORD **)(this + 12) + 1152))(*(_DWORD *)(this + 12), 0, 1); /*0x5b0b30*/
          *(_DWORD *)(*(_DWORD *)(this + 12) + 1504) = -1; /*0x5b0b3d*/
          (*(void (__stdcall **)(int))(*(_DWORD *)(this + 4) + 72))(this + 4); /*0x5b0b49*/
          *(_BYTE *)(this + 48) = 0; /*0x5b0b4c*/
        }
      }
      return; /*0x5b0a34*/
    }
    if ( v68 == 2 ) /*0x5b0bc1*/
    {
      v84 = *(_DWORD *)(this + 12); /*0x5b0bc7*/
      if ( !*(_BYTE *)(v84 + 1719) ) /*0x5b0bca*/
      {
        *(_BYTE *)(v84 + 1719) = 1; /*0x5b0bd4*/
        v85 = (_DWORD *)(*(_DWORD *)(this + 12) + 1640); /*0x5b0be9*/
        v86 = *((_DWORD *)dword_8871E0 + 1498); /*0x5b0bef*/
        *v85 = dword_A8ED84; /*0x5b0bf5*/
        v85[1] = v189; /*0x5b0bfb*/
        v85[2] = v86; /*0x5b0bfe*/
      }
      v87 = *(_DWORD *)(this + 12); /*0x5b0c01*/
      v88 = *(_DWORD *)(v87 + 1600); /*0x5b0c0a*/
      v89 = *(_DWORD *)(v87 + 1608); /*0x5b0c10*/
      if ( v88 != -1 ) /*0x5b0c19*/
      {
        if ( (int)dword_A8ED84 - v88 >= v89 ) /*0x5b0c21*/
          goto LABEL_64; /*0x5b0c21*/
        v89 -= (int)dword_A8ED84 - v88; /*0x5b0c23*/
      }
      if ( v89 ) /*0x5b0c27*/
      {
        v99 = (_DWORD *)(*(int (__thiscall **)(int, int *))(*(_DWORD *)v87 + 72))(v87, &v188); /*0x5b0d34*/
        LODWORD(v180) = *v99; /*0x5b0d40*/
        v100 = Math::CalcAngle( /*0x5b0d59*/
                 (double)(int)v99[1] - (double)SHIDWORD(v177),
                 (double)SLODWORD(v177) - (double)SLODWORD(v180));
        v101 = Math::RoundToInt((v100 - 1.570796326794897) * -10430.06004058427); /*0x5b0d6d*/
        v102 = *(_DWORD *)(this + 4); /*0x5b0d72*/
        LOWORD(v180) = v101; /*0x5b0d75*/
        (*(void (__stdcall **)(int, _DWORD))(v102 + 76))(this + 4, LODWORD(v180)); /*0x5b0d83*/
        return; /*0x5b0d8c*/
      }
LABEL_64:
      if ( *(_BYTE *)(v87 + 1719) ) /*0x5b0c2d*/
      {
        v90 = *(_DWORD *)(v87 + 1640); /*0x5b0c37*/
        v91 = *(_DWORD *)(v87 + 1648); /*0x5b0c3d*/
        if ( v90 != -1 ) /*0x5b0c46*/
        {
          if ( (int)dword_A8ED84 - v90 >= v91 ) /*0x5b0c4e*/
          {
LABEL_69:
            v92 = 1; /*0x5b0c56*/
            goto LABEL_71; /*0x5b0c58*/
          }
          v91 -= (int)dword_A8ED84 - v90; /*0x5b0c50*/
        }
        if ( !v91 ) /*0x5b0c54*/
          goto LABEL_69; /*0x5b0c54*/
      }
      v92 = 0; /*0x5b0c5a*/
LABEL_71:
      LOWORD(v179) = *(_DWORD *)(this + 24) / 256; /*0x5b0c5c*/
      WORD1(v179) = *(_DWORD *)(this + 28) / 256; /*0x5b0c8a*/
      v93 = FootClass::MovementStep(v87, this + 24, SLODWORD(v179), 0, (v92 != 0) + 1, v174); /*0x5b0c99*/
      v94 = dword_A8ED84; /*0x5b0ca4*/
      v175 = v93; /*0x5b0caa*/
      v95 = (wchar_t *)Math::RoundToInt(*((double *)dword_8871E0 + 748) * 900.0); /*0x5b0cba*/
      v96 = v189; /*0x5b0cc2*/
      v97 = (wchar_t **)(*(_DWORD *)(this + 12) + 1600); /*0x5b0cc6*/
      *v97 = v94; /*0x5b0ccc*/
      v97[1] = (wchar_t *)v96; /*0x5b0cce*/
      v97[2] = v95; /*0x5b0cd1*/
      v98 = *(_DWORD *)(this + 12); /*0x5b0cd8*/
      if ( v175 ) /*0x5b0cdd*/
      {
        (*(void (__thiscall **)(int))(*(_DWORD *)v98 + 1272))(v98); /*0x5b0d1c*/
      }
      else if ( (*(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)v98 + 716))(v98, this + 24) ) /*0x5b0ce2*/
      {
        (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 12) + 1268))(*(_DWORD *)(this + 12)); /*0x5b0d0b*/
      }
      else
      {
        (*(void (__thiscall **)(_DWORD, _DWORD, int))(**(_DWORD **)(this + 12) + 1152))(*(_DWORD *)(this + 12), 0, 1); /*0x5b0cf7*/
      }
      return; /*0x5b0d03*/
    }
    if ( v68 == 3 ) /*0x5b0d92*/
    {
      Cell::IsPassableAllied(*(_DWORD *)(this + 12), (__int16 *)&v176); /*0x5b0da2*/
      *(_DWORD *)(*(_DWORD *)(this + 12) + 1612) = 10; /*0x5b0daa*/
      return; /*0x5b0dba*/
    }
    if ( v68 == 1 ) /*0x5b0dc0*/
    {
      v108 = CellCoord::To_CellObj(&dword_87F7E8, (__int16 *)&v176); /*0x5b0f39*/
      CellClass::DamageAllObjects(v108); /*0x5b0f40*/
    }
    else if ( v68 != 7 ) /*0x5b0dc9*/
    {
      if ( v68 == 5 || v68 == 4 ) /*0x5b0dd7*/
      {
        v182 = 0; /*0x5b0dee*/
        v183 = 0; /*0x5b0df6*/
        v103 = CellCoord::To_CellObj(&dword_87F7E8, (__int16 *)&v176); /*0x5b0dfe*/
        Object = Object::FindObjectCell(v103, &v182, 0); /*0x5b0e0a*/
        if ( a2 ) /*0x5b0e11*/
          goto LABEL_84; /*0x5b0e11*/
        if ( Object ) /*0x5b0e69*/
        {
          if ( !Object::IsAlliedWithObjectHouse(*(_DWORD **)(*(_DWORD *)(this + 12) + 540), Object) ) /*0x5b0e75*/
            (*(void (__thiscall **)(_DWORD, int, int, _DWORD))(**(_DWORD **)(this + 12) + 500))( /*0x5b0e88*/
              *(_DWORD *)(this + 12),
              1,
              Object,
              0);
        }
        else if ( *((_DWORD *)CellCoord::To_CellObj(&dword_87F7E8, (__int16 *)&v176) + 17) != -1 /*0x5b0ec0*/
               && *(_BYTE *)(*((_DWORD *)dword_A83D84
                             + *((_DWORD *)CellCoord::To_CellObj(&dword_87F7E8, (__int16 *)&v176) + 17))
                           + 680) )
        {
          v106 = **(_DWORD **)(this + 12); /*0x5b0ed4*/
          v107 = CellCoord::To_CellObj(&dword_87F7E8, (__int16 *)&v176); /*0x5b0edb*/
          (*(void (__thiscall **)(_DWORD, int, void *, _DWORD))(v106 + 500))(*(_DWORD *)(this + 12), 1, v107, 0); /*0x5b0ee6*/
        }
      }
      *(_DWORD *)(*(_DWORD *)(this + 12) + 1504) = -1; /*0x5b0ef3*/
      (*(void (__thiscall **)(_DWORD, _DWORD, _DWORD))(**(_DWORD **)(this + 12) + 1348))(*(_DWORD *)(this + 12), 0, 0); /*0x5b0f02*/
      (*(void (__stdcall **)(int))(*(_DWORD *)(this + 4) + 72))(this + 4); /*0x5b0f0f*/
      *(_BYTE *)(*(_DWORD *)(this + 12) + 1674) = 0; /*0x5b0f15*/
      *(_BYTE *)(*(_DWORD *)(this + 12) + 1674) = 0; /*0x5b0f1f*/
      return; /*0x5b0f2c*/
    }
    if ( !a2 ) /*0x5b0f4a*/
      return; /*0x5b0f4a*/
LABEL_84:
    *(_DWORD *)(*(_DWORD *)(this + 12) + 1504) = -1; /*0x5b0e13*/
    *(_DWORD *)(this + 36) = dword_ABEE10; /*0x5b0e26*/
    v105 = *(_DWORD **)(this + 12); /*0x5b0e2e*/
    *(_DWORD *)(this + 40) = dword_ABEE14; /*0x5b0e31*/
    v105 += 400; /*0x5b0e3a*/
    *(_DWORD *)(this + 44) = dword_ABEE18; /*0x5b0e40*/
    *v105 = dword_A8ED84; /*0x5b0e48*/
    v105[1] = v189; /*0x5b0e50*/
    v105[2] = 0; /*0x5b0e54*/
    BuildingClass::ProcessMission(0); /*0x5b0e59*/
    return; /*0x5b0e64*/
  }
  v109 = BuildingClass::UpdateMovingPosition(&v177); /*0x5b0fab*/
  v110 = *(_DWORD **)(this + 12); /*0x5b0fb0*/
  if ( v109 ) /*0x5b0fb5*/
  {
    v111 = v110[376]; /*0x5b0fbb*/
    if ( v111 != -1 && v111 != 8 ) /*0x5b0fcd*/
    {
      v112 = v110[376]; /*0x5b0fd5*/
      v113 = (_WORD *)(*(int (__thiscall **)(_DWORD *, int *))(*v110 + 440))(v110, &v182); /*0x5b0fdc*/
      v114 = v112 & 7; /*0x5b0fe2*/
      v115 = v113[1] + HIWORD(dword_89F688[v114]); /*0x5b0ffb*/
      LOWORD(v179) = *v113 + LOWORD(dword_89F688[v114]); /*0x5b0fff*/
      WORD1(v179) = v115; /*0x5b1008*/
      LODWORD(v180) = LODWORD(v179); /*0x5b1017*/
      v116 = *((_DWORD *)CellCoord::To_CellObj(&dword_87F7E8, (__int16 *)&v180) + 17); /*0x5b1020*/
      if ( v116 != -1 ) /*0x5b1026*/
      {
        v117 = *((_DWORD *)dword_A83D84 + v116); /*0x5b102e*/
        if ( (*(_BYTE *)((*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 12) + 132))(*(_DWORD *)(this + 12)) + 3368) /*0x5b1054*/
           || TechnoTypeClass::HasVoiceResponse(*(float **)(this + 12), 17))
          && !*(_DWORD *)(v117 + 660) )
        {
          *(_BYTE *)(*(_DWORD *)(this + 12) + 1717) = 1; /*0x5b1061*/
          if ( *(_BYTE *)((*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 12) + 132))(*(_DWORD *)(this + 12)) + 3371) ) /*0x5b1073*/
            *(_DWORD *)(*(_DWORD *)(this + 12) + 820) = -1138501878; /*0x5b1080*/
        }
      }
    }
    v118 = *(_BYTE **)(this + 12); /*0x5b108a*/
    if ( v118[144] ) /*0x5b108d*/
    {
      v119 = (int *)(*(int (__thiscall **)(_BYTE *, int *))(*(_DWORD *)v118 + 72))(v118, &v188); /*0x5b10a2*/
      v120 = *v119; /*0x5b10a8*/
      LODWORD(v180) = *(_DWORD *)(this + 36); /*0x5b10aa*/
      LODWORD(v179) = v120; /*0x5b10ae*/
      v121 = Math::CalcAngle((double)v119[1] - (double)*(int *)(this + 40), (double)SLODWORD(v180) - (double)v120); /*0x5b10cd*/
      v122 = Math::RoundToInt((v121 - 1.570796326794897) * -10430.06004058427); /*0x5b10e1*/
      v123 = *(_DWORD *)(this + 4); /*0x5b10e6*/
      LOWORD(v180) = v122; /*0x5b10e9*/
      (*(void (__stdcall **)(int, _DWORD))(v123 + 76))(this + 4, LODWORD(v180)); /*0x5b10f7*/
      if ( !TimerClass::Active(*(_DWORD *)(this + 12) + 904) ) /*0x5b1103*/
      {
        (*(void (__thiscall **)(_DWORD, _DWORD, int))(**(_DWORD **)(this + 12) + 1348))( /*0x5b111c*/
          *(_DWORD *)(this + 12),
          0,
          1072693248);
        *(_BYTE *)(*(_DWORD *)(this + 12) + 1674) = 0; /*0x5b1125*/
      }
    }
  }
  else
  {
    (*(void (__thiscall **)(_DWORD *, _DWORD, _DWORD))(*v110 + 1348))(v110, 0, 0); /*0x5b113b*/
    *(_BYTE *)(*(_DWORD *)(this + 12) + 1674) = 0; /*0x5b1144*/
  }
}


// ==== 0x005B17B0  BuildingClass::UpdateMovingPosition  this=BuildingClass  sig=csp ====
char __thiscall BuildingClass::UpdateMovingPosition(BuildingClass *this, int *a2)
{
  bool v3; // zf
  int v4; // ecx
  int v5; // edx
  int *v6; // ecx
  int *p_occupant; // esi
  CellClass *v8; // eax
  _BYTE *v9; // ecx
  void *ptr_C; // [esp-4h] [ebp-28h]
  int v12; // [esp+Ch] [ebp-18h] BYREF
  int v13; // [esp+10h] [ebp-14h]
  int GroundHeight; // [esp+14h] [ebp-10h]
  int v15; // [esp+18h] [ebp-Ch] BYREF
  int v16; // [esp+1Ch] [ebp-8h]
  int v17; // [esp+20h] [ebp-4h]

  v3 = *a2 == g_MissionQueueFrame.localVariables[227]; /*0x5b17c6*/
  v12 = *a2; /*0x5b17c8*/
  v4 = a2[1]; /*0x5b17cc*/
  v13 = v4; /*0x5b17cf*/
  v5 = a2[2]; /*0x5b17d3*/
  GroundHeight = v5; /*0x5b17d6*/
  if ( !v3 || v4 != g_MissionQueueFrame.localVariables[228] || v5 != g_MissionQueueFrame.localVariables[229] ) /*0x5b17ea*/
  {
    GroundHeight = Cell::GetGroundHeight(&v12); /*0x5b1801*/
    if ( (Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], a2)->flags[0] & 0x100) != 0 ) /*0x5b1813*/
    {
      v6 = (int *)((char *)this->? + 156); /*0x5b1818*/
      v15 = *v6; /*0x5b1820*/
      v16 = v6[1]; /*0x5b1827*/
      if ( v6[2] > GroundHeight + 2 * g_MissionQueueFrame.localVariables[243] + g_MissionQueueFrame.localVariables[243] ) /*0x5b183e*/
        GroundHeight += g_MissionQueueFrame.localVariables[240]; /*0x5b1846*/
    }
  }
  p_occupant = &this->?; /*0x5b1853*/
  if ( this->? != g_MissionQueueFrame.localVariables[227] /*0x5b1871*/
    || this->? != g_MissionQueueFrame.localVariables[228]
    || this->? != g_MissionQueueFrame.localVariables[229] )
  {
    (*(void (__thiscall **)(void *, int *))(*(_DWORD *)this->? + 244))(this->?, &this->?); /*0x5b1879*/
  }
  ptr_C = this->?; /*0x5b1886*/
  v8 = Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], &v12); /*0x5b188d*/
  if ( !(unsigned __int8)CrateClass::ProcessPickup((CrateClass *)v8, (int)ptr_C) || (v9 = this->?, v9[129]) ) /*0x5b18a0*/
  {
    *p_occupant = g_MissionQueueFrame.localVariables[227]; /*0x5b18ca*/
    this->? = g_MissionQueueFrame.localVariables[228]; /*0x5b18d1*/
    this->? = g_MissionQueueFrame.localVariables[229]; /*0x5b18da*/
    v9 = this->?; /*0x5b18dd*/
    if ( !v9[144] ) /*0x5b18e8*/
      return 0; /*0x5b18e8*/
  }
  else
  {
    *p_occupant = v12; /*0x5b18b0*/
    this->? = v13; /*0x5b18b6*/
    this->? = GroundHeight; /*0x5b18bd*/
  }
  if ( *p_occupant != g_MissionQueueFrame.localVariables[227] /*0x5b190d*/
    || this->? != g_MissionQueueFrame.localVariables[228]
    || this->? != g_MissionQueueFrame.localVariables[229] )
  {
    (*(void (__thiscall **)(_BYTE *, int *))(*(_DWORD *)v9 + 240))(v9, &this->?); /*0x5b1912*/
    return 1; /*0x5b1920*/
  }
  v15 = *((_DWORD *)v9 + 39); /*0x5b192f*/
  v16 = *((_DWORD *)v9 + 40); /*0x5b1936*/
  v17 = *((_DWORD *)v9 + 41); /*0x5b193d*/
  (*(void (__thiscall **)(_BYTE *, int *))(*(_DWORD *)v9 + 240))(v9, &v15); /*0x5b1948*/
  return 0; /*0x5b1918*/
}



// ==== 0x005B1960  MechLocomotionClass::ddtor  this=MechLocomotionClass  sig=csp ====
int __stdcall MechLocomotionClass::ddtor(MechLocomotionClass *this, _DWORD *a2)
{
  if ( !a2 ) /*0x5b1966*/
    return -2147467261; /*0x5b1968*/
  *(IID *)a2 = g_CLSID_TunnelLocomotion; /*0x5b1976*/
  a2[3] = unk_7E9AAC; /*0x5b1990*/
  return 0; /*0x5b196d*/
}



// ==== 0x005B19A0  MechLocomotionClass::BeginMove  this=MechLocomotionClass  sig=csp ====
int __stdcall MechLocomotionClass::BeginMove(MechLocomotionClass *this, int *a2)
{
  int result; // eax

  result = SwizzleManager::SaveLoad((int *)this->LocomotionClass, a2); /*0x5b19ab*/
  if ( result >= 0 ) /*0x5b19b2*/
  {
    if ( this ) /*0x5b19b6*/
    {
      *(_DWORD *)this->LocomotionClass = &MechLocomotionClass::`vftable'; /*0x5b19b8*/
      *(_DWORD *)&this->LocomotionClass[4] = &MechLocomotionClass::`vftable'; /*0x5b19be*/
    }
  }
  return result; /*0x5b19c5*/
}



// ==== 0x005B19D0  MechLocomotionClass::SmallStub_5B19D0  this=MechLocomotionClass  sig=csp ====
int __stdcall JumpjetLocomotionClass::SmallStub_5B19D0(MechLocomotionClass *this)
{
  return 2; /*0x5b19d5*/
}



// ==== 0x005B19E0  MechLocomotionClass::StubReturnTrue_4  this=MechLocomotionClass  sig=csp ====
bool __stdcall JumpjetLocomotionClass::StubReturnTrue_4(MechLocomotionClass *this)
{
  if ( (unsigned __int8)TimerClass::Active((int)this->?->?) ) /*0x5b19ee*/
    return 1; /*0x5b19f7*/
  return (*(unsigned __int8 (__stdcall **)(MechLocomotionClass *))(*(_DWORD *)this->LocomotionClass + 16))(this) /*0x5b1a39*/
      && (this->MovingDestination[2] != g_MissionQueueFrame.localVariables[227]
       || this->HeadToCoord[0] != g_MissionQueueFrame.localVariables[228]
       || this->HeadToCoord[1] != g_MissionQueueFrame.localVariables[229])
      && (*((int (__thiscall **)(FootClass *))this->?->TechnoClass + 334))(this->?) > 0;
}



// ==== 0x005B1A50  MechLocomotionClass::DispatchVirtualCall_5  this=MechLocomotionClass  sig=csp ====
int __stdcall JumpjetLocomotionClass::DispatchVirtualCall_5(MechLocomotionClass *this, int a2)
{
  int result; // eax
  _DWORD *v3; // eax
  FootClass *Owner; // ecx
  _DWORD v5[3]; // [esp+8h] [ebp-18h] BYREF
  _BYTE v6[12]; // [esp+14h] [ebp-Ch] BYREF

  result = a2; /*0x5b1a50*/
  if ( !a2 ) /*0x5b1a59*/
  {
    v3 = (_DWORD *)(*(int (__stdcall **)(MechLocomotionClass *, _BYTE *))(*(_DWORD *)this->LocomotionClass + 24))( /*0x5b1a68*/
                     this,
                     v6);
    v5[0] = *v3; /*0x5b1a6d*/
    v5[1] = v3[1]; /*0x5b1a74*/
    Owner = this->?; /*0x5b1a7b*/
    v5[2] = v3[2]; /*0x5b1a7e*/
    return (*((int (__thiscall **)(FootClass *, _DWORD *))Owner->TechnoClass + 61))(Owner, v5); /*0x5b1a89*/
  }
  return result; /*0x5b1a90*/
}



// ==== 0x005B1AA0  MechLocomotionClass::IsPositionWithinThreshold_0  this=MechLocomotionClass  sig=csp ====
bool __stdcall JumpjetLocomotionClass::IsPositionWithinThreshold_0(MechLocomotionClass *this, int a2, int a3, int a4)
{
  int *v4; // eax
  int v5; // ebp
  int v6; // kr04_4
  int v7; // eax
  _BYTE v9[12]; // [esp+10h] [ebp-Ch] BYREF

  v4 = (int *)(*(int (__stdcall **)(MechLocomotionClass *, _BYTE *))(*(_DWORD *)this->LocomotionClass + 24))(this, v9); /*0x5b1ab3*/
  v5 = v4[2]; /*0x5b1abb*/
  v6 = *v4; /*0x5b1ae7*/
  v7 = v4[1] / 256; /*0x5b1afd*/
  return (unsigned __int16)(v6 / 256) == (unsigned __int16)(a2 / 256) /*0x5b1b21*/
      && (_WORD)v7 == (unsigned __int16)(a3 / 256)
      && (int)abs32(v5 - a4) <= g_MissionQueueFrame.localVariables[243];
}



// ==== 0x005B1B40  MechLocomotionClass::StubReturn52  this=MechLocomotionClass  sig=csp ====
int MechLocomotionClass::StubReturn52(MechLocomotionClass *this)
{
  return 52; /*0x5b1b45*/
}



// ==== 0x005B1B50  MechLocomotionClass::ProcessMove  this=MechLocomotionClass  sig=csp ====
_DWORD *__thiscall MechLocomotionClass::ProcessMove(MechLocomotionClass *this, char a2)
{
  *(_DWORD *)this->LocomotionClass = &MechLocomotionClass::`vftable'; /*0x5b1b53*/
  *(_DWORD *)&this->LocomotionClass[4] = &MechLocomotionClass::`vftable'; /*0x5b1b59*/
  LocomotionClass::Construct((LocomotionClass *)this); /*0x5b1b60*/
  if ( (a2 & 1) != 0 ) /*0x5b1b6a*/
    __3_YAXPAX_Z(this); /*0x5b1b6d*/
  return this->LocomotionClass; /*0x5b1b77*/
}



// ==== 0x005B1B80  sub_5B1B80  this=-  sig=ida-proto ====
int sub_5B1B80()
{
  dword_ABEE60 = 0; /*0x5b1b82*/
  dword_ABEE64 = 0; /*0x5b1b87*/
  dword_ABEE68 = 0; /*0x5b1b8c*/
  dword_ABEE6C = 0; /*0x5b1b91*/
  return 0; /*0x5b1b96*/
}



// ==== 0x005B1BA0  sub_5B1BA0  this=-  sig=ida-proto ====
void sub_5B1BA0()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x5b1bac*/
  dbl_ABEE78 = Math::Sqrt(v0 + v0); /*0x5b1bbe*/
}



// ==== 0x005B1BD0  sub_5B1BD0  this=-  sig=ida-proto ====
void sub_5B1BD0()
{
  dbl_ABEEC8 = dbl_ABEE78 / 60.0; /*0x5b1bdc*/
}



// ==== 0x005B1BF0  sub_5B1BF0  this=-  sig=ida-proto ====
void sub_5B1BF0()
{
  dbl_ABEEB0 = 1.0 / dbl_ABEEC8; /*0x5b1bfc*/
}



// ==== 0x005B1C10  sub_5B1C10  this=-  sig=ida-proto ====
void sub_5B1C10()
{
  dbl_ABEEA8 = 0.0174532925199433 * 45.0; /*0x5b1c1c*/
}



// ==== 0x005B1C30  sub_5B1C30  this=-  sig=ida-proto ====
void sub_5B1C30()
{
  dbl_ABEE80 = 0.0174532925199433 * 60.0; /*0x5b1c3c*/
}



// ==== 0x005B1C50  sub_5B1C50  this=-  sig=ida-proto ====
void sub_5B1C50()
{
  dbl_ABEE58 = 0.0174532925199433 * 90.0; /*0x5b1c5c*/
}



// ==== 0x005B1C70  sub_5B1C70  this=-  sig=ida-proto ====
__int64 sub_5B1C70()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_ABEE58 - dbl_ABEE80); /*0x5b1c82*/
  result = Math::RoundToInt(v0 * dbl_ABEE78 * 0.5); /*0x5b1c96*/
  dword_ABEED0 = result; /*0x5b1c9b*/
  return result; /*0x5b1ca0*/
}



// ==== 0x005B1CB0  sub_5B1CB0  this=-  sig=ida-proto ====
void sub_5B1CB0()
{
  dbl_ABEE88 = Math::ArcTan((double)dword_ABEED0 * 0.00390625); /*0x5b1cc7*/
}



// ==== 0x005B1CE0  sub_5B1CE0  this=-  sig=ida-proto ====
void sub_5B1CE0()
{
  dbl_ABEEA0 = Math::ArcTan((double)(2 * dword_ABEED0) / dbl_ABEE78); /*0x5b1d02*/
}



// ==== 0x005B1D10  sub_5B1D10  this=-  sig=ida-proto ====
__int64 sub_5B1D10()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_ABEED0) + 0.5); /*0x5b1d2b*/
  dword_ABEEC4 = result; /*0x5b1d30*/
  return result; /*0x5b1d36*/
}



// ==== 0x005B1D40  sub_5B1D40  this=-  sig=ida-proto ====
int sub_5B1D40()
{
  word_ABEE70 = 0; /*0x5b1d42*/
  word_ABEE72 = 0; /*0x5b1d48*/
  return 0; /*0x5b1d4e*/
}



// ==== 0x005B1D50  sub_5B1D50  this=-  sig=ida-proto ====
int sub_5B1D50()
{
  dword_ABEE90 = 0; /*0x5b1d52*/
  dword_ABEE94 = 0; /*0x5b1d57*/
  dword_ABEE98 = 0; /*0x5b1d5c*/
  return 0; /*0x5b1d61*/
}



// ==== 0x005B1D70  sub_5B1D70  this=-  sig=ida-proto ====
int sub_5B1D70()
{
  dword_ABEEC0 = 0; /*0x5b1d75*/
  dword_ABEEB8 = 128; /*0x5b1d7f*/
  dword_ABEEBC = 128; /*0x5b1d84*/
  return 128; /*0x5b1d89*/
}



// ==== 0x005B1D90  ObjectClass::method_5B1D90  this=ObjectClass  sig=csp ====
double *__thiscall sub_5B1D90(double *this)
{
  DWORD v2; // edi
  unsigned int v4; // [esp+8h] [ebp-Ch] BYREF
  double v5; // [esp+Ch] [ebp-8h]

  *(_DWORD *)this = 0; /*0x5b1d9b*/
  v4 = 0; /*0x5b1da1*/
  this->ptr_8 = 1072693248; /*0x5b1da9*/
  v2 = sub_5CAF70((LONG *)&v4); /*0x5b1db5*/
  if ( v2 || v4 ) /*0x5b1dc1*/
  {
    v5 = (double)v4; /*0x5b1de8*/
    Debug::Log(); /*0x5b1dec*/
    *this = (v5 * 4294967296.0 + (double)v2) * 0.001; /*0x5b1e19*/
    return this; /*0x5b1e0e*/
  }
  else
  {
    timeBeginPeriod(1u); /*0x5b1dc5*/
    return this; /*0x5b1dcb*/
  }
}



// ==== 0x005B1E40  Timer::GetHighPrecision  this=Timer  sig=csp ====
int __thiscall Timer::GetHighPrecision(int *this)
{
  int result; // eax
  unsigned int v3; // [esp+4h] [ebp-Ch] BYREF
  __int64 v4; // [esp+8h] [ebp-8h]

  if ( dword_82C24C == -1 ) /*0x5b1e4e*/
    GetVersionString(&dword_82C24C, unk_ABEED4, 0, 0); /*0x5b1e5e*/
  if ( !*this && this->u32_4 == 1072693248 || dword_82C24C <= 4 ) /*0x5b1e78*/
    return timeGetTime(); /*0x5b1eba*/
  result = Timer::ReadTSC(&v3); /*0x5b1e7f*/
  v4 = v3; /*0x5b1e9b*/
  return result; /*0x5b1eb5*/
}



// ==== 0x005B1EE0  sub_5B1EE0  this=-  sig=ida-proto ====
int sub_5B1EE0()
{
  dword_ABEEE0 = 0; /*0x5b1ee2*/
  dword_ABEEE4 = 0; /*0x5b1ee7*/
  dword_ABEEE8 = 0; /*0x5b1eec*/
  dword_ABEEEC = 0; /*0x5b1ef1*/
  return 0; /*0x5b1ef6*/
}



// ==== 0x005B1F00  sub_5B1F00  this=-  sig=ida-proto ====
void sub_5B1F00()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x5b1f0c*/
  dbl_ABEEF8 = Math::Sqrt(v0 + v0); /*0x5b1f1e*/
}



// ==== 0x005B1F30  sub_5B1F30  this=-  sig=ida-proto ====
void sub_5B1F30()
{
  dbl_ABEF48 = dbl_ABEEF8 / 60.0; /*0x5b1f3c*/
}



// ==== 0x005B1F50  sub_5B1F50  this=-  sig=ida-proto ====
void sub_5B1F50()
{
  dbl_ABEF30 = 1.0 / dbl_ABEF48; /*0x5b1f5c*/
}



// ==== 0x005B1F70  sub_5B1F70  this=-  sig=ida-proto ====
void sub_5B1F70()
{
  dbl_ABEF28 = 0.0174532925199433 * 45.0; /*0x5b1f7c*/
}



// ==== 0x005B1F90  sub_5B1F90  this=-  sig=ida-proto ====
void sub_5B1F90()
{
  dbl_ABEF00 = 0.0174532925199433 * 60.0; /*0x5b1f9c*/
}



// ==== 0x005B1FB0  sub_5B1FB0  this=-  sig=ida-proto ====
void sub_5B1FB0()
{
  dbl_ABEED8 = 0.0174532925199433 * 90.0; /*0x5b1fbc*/
}



// ==== 0x005B1FD0  sub_5B1FD0  this=-  sig=ida-proto ====
__int64 sub_5B1FD0()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_ABEED8 - dbl_ABEF00); /*0x5b1fe2*/
  result = Math::RoundToInt(v0 * dbl_ABEEF8 * 0.5); /*0x5b1ff6*/
  dword_ABEF50 = result; /*0x5b1ffb*/
  return result; /*0x5b2000*/
}



// ==== 0x005B2010  sub_5B2010  this=-  sig=ida-proto ====
void sub_5B2010()
{
  dbl_ABEF08 = Math::ArcTan((double)dword_ABEF50 * 0.00390625); /*0x5b2027*/
}



// ==== 0x005B2040  sub_5B2040  this=-  sig=ida-proto ====
void sub_5B2040()
{
  dbl_ABEF20 = Math::ArcTan((double)(2 * dword_ABEF50) / dbl_ABEEF8); /*0x5b2062*/
}



// ==== 0x005B2070  sub_5B2070  this=-  sig=ida-proto ====
__int64 sub_5B2070()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_ABEF50) + 0.5); /*0x5b208b*/
  dword_ABEF44 = result; /*0x5b2090*/
  return result; /*0x5b2096*/
}



// ==== 0x005B20A0  sub_5B20A0  this=-  sig=ida-proto ====
int sub_5B20A0()
{
  word_ABEEF0 = 0; /*0x5b20a2*/
  word_ABEEF2 = 0; /*0x5b20a8*/
  return 0; /*0x5b20ae*/
}



// ==== 0x005B20B0  sub_5B20B0  this=-  sig=ida-proto ====
int sub_5B20B0()
{
  dword_ABEF10 = 0; /*0x5b20b2*/
  dword_ABEF14 = 0; /*0x5b20b7*/
  dword_ABEF18 = 0; /*0x5b20bc*/
  return 0; /*0x5b20c1*/
}



// ==== 0x005B20D0  sub_5B20D0  this=-  sig=ida-proto ====
int sub_5B20D0()
{
  dword_ABEF40 = 0; /*0x5b20d5*/
  dword_ABEF38 = 128; /*0x5b20df*/
  dword_ABEF3C = 128; /*0x5b20e4*/
  return 128; /*0x5b20e9*/
}



// ==== 0x005B20F0  Movement::CalcVelocity  this=Movement  sig=csp ====
int __userpurge Movement::CalcVelocity@<eax>(
        double *a1@<edx>,
        Vector3 *a2@<ecx>,
        double a3@<st0>,
        void **a4,
        __int16 *a5,
        char a6,
        char a7,
        char a8,
        char a9)
{
  bool v11; // zf
  unsigned int v13; // edi
  int Movement_field_00_low; // edx
  int v18; // eax
  int v20; // edx
  unsigned int v22; // eax
  int v23; // eax
  int v24; // edi
  int v25; // eax
  int v26; // eax
  unsigned int *v27; // eax
  unsigned int v28; // ecx
  unsigned int v29; // edx
  int result; // eax
  unsigned int v31; // edx
  int v32; // eax
  int v33; // esi
  int v34; // eax
  int v35; // eax
  unsigned int *v36; // eax
  unsigned int v37; // ecx
  unsigned int v38; // edx
  int *v39; // eax
  int v40; // eax
  void *v41; // ecx
  void *v42; // edx
  int v43; // eax
  unsigned int Vector3_field_0x04; // ecx
  int *v45; // eax
  double v46; // st7
  unsigned int v47; // ecx
  unsigned int Vector3_field_0x08; // esi
  unsigned int v49; // edx
  void *v50; // eax
  double *v51; // eax
  int v53; // edx
  int v56; // ecx
  int v57; // eax
  int v58; // edi
  int v59; // eax
  int v60; // eax
  _DWORD *v61; // eax
  double *v62; // eax
  int GroundHeight; // edi
  int v64; // eax
  unsigned int v65; // edx
  int v66; // ecx
  unsigned int v67; // edx
  Movement *v68; // eax
  int *v69; // eax
  __int16 *v70; // eax
  double v71; // [esp+0h] [ebp-A8h]
  double v72; // [esp+0h] [ebp-A8h]
  double v73; // [esp+0h] [ebp-A8h]
  double v74; // [esp+8h] [ebp-A0h]
  double v75; // [esp+8h] [ebp-A0h]
  double v76; // [esp+8h] [ebp-A0h]
  double v77; // [esp+8h] [ebp-A0h]
  unsigned __int64 v78; // [esp+8h] [ebp-A0h]
  double v79; // [esp+8h] [ebp-A0h]
  double v80; // [esp+8h] [ebp-A0h]
  double v81; // [esp+8h] [ebp-A0h]
  double v82; // [esp+8h] [ebp-A0h]
  __int16 *v83; // [esp+Ch] [ebp-9Ch]
  _WORD *v84; // [esp+10h] [ebp-98h]
  Movement v85; // [esp+20h] [ebp-88h] BYREF
  int v86; // [esp+24h] [ebp-84h] BYREF
  _BYTE v87[24]; // [esp+28h] [ebp-80h] BYREF
  Math v88; // [esp+44h] [ebp-64h] BYREF
  double v89; // [esp+58h] [ebp-50h] BYREF
  double v90; // [esp+60h] [ebp-48h] BYREF
  double v91; // [esp+68h] [ebp-40h]
  double v92; // [esp+78h] [ebp-30h] BYREF
  unsigned int v93[4]; // [esp+80h] [ebp-28h]
  double v94[3]; // [esp+90h] [ebp-18h] BYREF

  _ESI = a1; /*0x5b2104*/
  v11 = *a4 == (void *)g_MissionQueueFrame.localVariables[291]; /*0x5b210e*/
  *(_DWORD *)v88.__pad_0 = a1; /*0x5b2110*/
  if ( v11 /*0x5b2134*/
    && a4[1] == (void *)g_MissionQueueFrame.localVariables[292]
    && a4[2] == (void *)g_MissionQueueFrame.localVariables[293] )
  {
    Math::Hypotenuse2D((int *)a1); /*0x5b213c*/
    __asm { fstp [esp+0A0h+var_A0]; double } /*0x5b214a*/
    Math::CalcAngle(_ESI[2], v74); /*0x5b214f*/
    __asm { fsub ds:dbl_7E2820 } /*0x5b2154*/
    __asm { fmul ds:dbl_7E2818 }
    *(_WORD *)v88.__pad_0 = Math::RoundToInt(a3); /*0x5b216b*/
    v85.Movement_field_00 = *(_DWORD *)v88.__pad_0; /*0x5b217e*/
    LOWORD(v86) = 0x2000; /*0x5b2182*/
    if ( Math::Abs16Cmp((Math *)&v85, &v86, a5) ) /*0x5b2189*/
    {
      LOWORD(v85.Movement_field_00) = v86; /*0x5b2197*/
    }
    else if ( *(__int16 *)Math::Sub16((Math *)&v86, &v89, &v85) >= 0 ) /*0x5b21b5*/
    {
      LOWORD(v85.Movement_field_00) += *a5; /*0x5b21c4*/
    }
    else
    {
      LOWORD(v85.Movement_field_00) -= *a5; /*0x5b21ba*/
    }
    *(_DWORD *)v88.__pad_0 = *(__int16 *)Vector::ToFacingMath((int *)&v89, v84) - 0x3FFF; /*0x5b21de*/
    __asm /*0x5b21e4*/
    {
      fild dword ptr [esp+98h+var_64.__pad_0]
      fmul ds:dbl_7E2810
      fstp qword ptr [esp+98h+var_50]
    }
    Vector3::Magnitude((int *)_ESI); /*0x5b21f2*/
    __asm /*0x5b21f7*/
    {
      fstp qword ptr [esp+98h+var_64.field_4]
      fld qword ptr [esp+98h+var_50]
      fcomp ds:dbl_7E2800
      fnstsw ax
    }
    if ( (_AX & 0x4000) == 0 ) /*0x5b220a*/
    {
      v13 = HIDWORD(v89); /*0x5b220c*/
      Math::ArcTan2(v89); /*0x5b2216*/
      __asm { fdivr qword ptr [esi] } /*0x5b221b*/
      v71 = COERCE_DOUBLE(__PAIR64__(v13, LODWORD(v89))); /*0x5b2222*/
      __asm { fstp qword ptr [esi] } /*0x5b2223*/
      *_ESI = _RT1; /*0x5b2223*/
      Math::ArcTan2(v71); /*0x5b2225*/
      __asm { fdivr qword ptr [esi+8] } /*0x5b222a*/
      __asm { fstp qword ptr [esi+8] }
      _ESI[1] = _RT1; /*0x5b2230*/
    }
    *(_DWORD *)v88.__pad_0 = SLOWORD(v85.Movement_field_00) - 0x3FFF; /*0x5b2241*/
    __asm /*0x5b2245*/
    {
      fild dword ptr [esp+0A0h+var_64.__pad_0]
      fmul ds:dbl_7E2810
      fstp [esp+0A0h+var_A0]; double
    }
    Math::ArcTan2(v75); /*0x5b2252*/
    __asm { fmul qword ptr [esi] } /*0x5b2257*/
    Movement_field_00_low = SLOWORD(v85.Movement_field_00); /*0x5b2259*/
    __asm { fstp qword ptr [esi] } /*0x5b225e*/
    *_ESI = _RT1; /*0x5b225e*/
    *(_DWORD *)v88.__pad_0 = Movement_field_00_low - 0x3FFF; /*0x5b2266*/
    __asm /*0x5b226a*/
    {
      fild dword ptr [esp+0A0h+var_64.__pad_0]
      fmul ds:dbl_7E2810
      fstp [esp+0A0h+var_A0]; double
    }
    Math::ArcTan2(v76); /*0x5b2277*/
    __asm { fmul qword ptr [esi+8] } /*0x5b227c*/
    v18 = SLOWORD(v85.Movement_field_00); /*0x5b227f*/
    __asm { fstp qword ptr [esi+8] } /*0x5b2284*/
    _ESI[1] = _RT1; /*0x5b2284*/
    *(_DWORD *)v88.__pad_0 = v18 - 0x3FFF; /*0x5b228c*/
    __asm /*0x5b2290*/
    {
      fild dword ptr [esp+0A0h+var_64.__pad_0]
      fmul ds:dbl_7E2810
      fstp [esp+0A0h+var_A0]; double
    }
    Math::SinCos(v77); /*0x5b229d*/
    __asm { fmul qword ptr [esp+0A0h+var_64.field_4] } /*0x5b22a2*/
    v20 = *(_DWORD *)_ESI; /*0x5b22ab*/
    __asm { fst qword ptr [esi+10h] } /*0x5b22ad*/
    _ESI[2] = _RT1; /*0x5b22ad*/
    *(_QWORD *)&v92 = __PAIR64__(*((_DWORD *)_ESI + 1), v20); /*0x5b22b3*/
    __asm { fld [esp+98h+var_30] } /*0x5b22be*/
    v22 = *((_DWORD *)_ESI + 3); /*0x5b22c2*/
    v93[0] = *((_DWORD *)_ESI + 2); /*0x5b22c5*/
    v93[1] = v22; /*0x5b22c9*/
    LOWORD(v23) = Math::RoundToInt(a3); /*0x5b22cd*/
    __asm { fld qword ptr [esp+98h+var_28] } /*0x5b22d2*/
    v24 = v23; /*0x5b22d6*/
    LOWORD(v25) = Math::RoundToInt(a3); /*0x5b22d8*/
    HIDWORD(v92) = v25; /*0x5b22dd*/
    LOWORD(v26) = Math::RoundToInt(a3); /*0x5b22e1*/
    v78 = __PAIR64__(v26 + a2->Vector3_field_0x08, HIDWORD(v92) + a2->Vector3_field_0x04); /*0x5b22f9*/
    v27 = Coord::Subtract((Coord *)&v92, *(_DWORD *)a2->__pad_0 + v24, v78, SHIDWORD(v78)); /*0x5b22ff*/
    v28 = v27[1]; /*0x5b2308*/
    v29 = v27[2]; /*0x5b230b*/
    *(_DWORD *)a2->__pad_0 = *v27; /*0x5b230e*/
    a2->Vector3_field_0x04 = v28; /*0x5b2310*/
    a2->Vector3_field_0x08 = v29; /*0x5b2313*/
    __asm /*0x5b2316*/
    {
      fld qword ptr [esi+10h]
      fld qword ptr [esi+8]
      fld qword ptr [esi]
      fld st(1)
      fmul st, st(2)
      fld st(1)
      fmul st, st(2)
      faddp st(1), st
      fld st(3)
      fmul st, st(4)
      faddp st(1), st
    }
    __asm
    {
      fstp [esp+0A0h+var_A0]; double
      fstp st
      fstp st
      fstp st
    }
    Math::Sqrt(v79); /*0x5b233a*/
    LOWORD(result) = Math::RoundToInt(a3); /*0x5b2342*/
    return result; /*0x5b234d*/
  }
  __asm { fld qword ptr [esi+10h] } /*0x5b2352*/
  v92 = *a1; /*0x5b2357*/
  __asm { fld [esp+98h+var_30] } /*0x5b2365*/
  v31 = *((_DWORD *)a1 + 3); /*0x5b2369*/
  v93[0] = *((_DWORD *)_ESI + 2); /*0x5b236c*/
  v93[1] = v31; /*0x5b2370*/
  LOWORD(v32) = Math::RoundToInt(a3); /*0x5b2374*/
  __asm { fld qword ptr [esp+98h+var_28] } /*0x5b2379*/
  v33 = v32; /*0x5b237d*/
  LOWORD(v34) = Math::RoundToInt(a3); /*0x5b237f*/
  HIDWORD(v92) = v34; /*0x5b2384*/
  LOWORD(v35) = Math::RoundToInt(a3); /*0x5b2388*/
  v36 = Coord::Subtract( /*0x5b23a6*/
          (Coord *)&v90,
          *(_DWORD *)a2->__pad_0 + v33,
          a2->Vector3_field_0x04 + HIDWORD(v92),
          a2->Vector3_field_0x08 + v35);
  v37 = v36[1]; /*0x5b23b2*/
  v38 = v36[2]; /*0x5b23b5*/
  *(_DWORD *)a2->__pad_0 = *v36; /*0x5b23b8*/
  a2->Vector3_field_0x04 = v37; /*0x5b23be*/
  a2->Vector3_field_0x08 = v38; /*0x5b23c4*/
  v39 = Vector3::Subtract(a2, (int *)&v90, a4); /*0x5b23c7*/
  v40 = Coord::Length((Coord *)v39); /*0x5b23ce*/
  v41 = *a4; /*0x5b23d3*/
  v42 = a4[1]; /*0x5b23d5*/
  LODWORD(v89) = v40; /*0x5b23d8*/
  v43 = *(_DWORD *)a2->__pad_0; /*0x5b23dc*/
  v88.field_4 = v41; /*0x5b23de*/
  Vector3_field_0x04 = a2->Vector3_field_0x04; /*0x5b23e2*/
  v88.field_8 = v42; /*0x5b23e5*/
  *(_DWORD *)v87 = v43; /*0x5b23e9*/
  *(_DWORD *)&v87[4] = Vector3_field_0x04; /*0x5b23f5*/
  v45 = Coord2D::Sub((Coord2D *)v87, (int *)&v90, &v88.field_4); /*0x5b23ff*/
  v46 = Vector::TwoDMagnitudeMath(v45); /*0x5b2406*/
  v47 = (unsigned int)a4[2]; /*0x5b240b*/
  Vector3_field_0x08 = a2->Vector3_field_0x08; /*0x5b240e*/
  v49 = (unsigned int)a4[1]; /*0x5b2411*/
  v88.field_4 = v50; /*0x5b2414*/
  v51 = (double *)Coord::Subtract( /*0x5b242c*/
                    (Coord *)&v90,
                    (int)*a4 - *(_DWORD *)a2->__pad_0,
                    v49 - a2->Vector3_field_0x04,
                    v47 - Vector3_field_0x08);
  v92 = *v51; /*0x5b2433*/
  __asm { fild dword ptr [esp+98h+var_30] } /*0x5b243e*/
  v93[0] = *((_DWORD *)v51 + 2); /*0x5b2449*/
  __asm /*0x5b2454*/
  {
    fstp qword ptr [esp+98h+var_48]
    fild dword ptr [esp+98h+var_30+4]
  }
  *(double *)v87 = v90; /*0x5b2464*/
  __asm { fstp [esp+98h+var_40] } /*0x5b246c*/
  __asm
  {
    fild [esp+98h+var_28]
    fstp [esp+98h+var_70]
  }
  *(double *)&v87[8] = v91; /*0x5b2489*/
  qmemcpy(v94, v87, sizeof(v94)); /*0x5b248d*/
  _ESI = *(_DWORD *)v88.__pad_0; /*0x5b248f*/
  __asm { fld qword ptr [esi+8] } /*0x5b2498*/
  __asm
  {
    fchs
    fstp [esp+0A8h+var_A8]; double
  }
  Math::CalcAngle(v72, **(double **)v88.__pad_0); /*0x5b24a5*/
  __asm { fsub ds:dbl_7E2820 } /*0x5b24aa*/
  __asm { fmul ds:dbl_7E2818 }
  *(_WORD *)v88.__pad_0 = Math::RoundToInt(v46); /*0x5b24c5*/
  __asm { fld [esp+98h+var_10] } /*0x5b24d5*/
  v86 = *(_DWORD *)v88.__pad_0; /*0x5b24e1*/
  __asm /*0x5b24e5*/
  {
    fchs
    fstp [esp+0A8h+var_A8]; double
  }
  Math::CalcAngle(v73, v94[0]); /*0x5b24ea*/
  __asm { fsub ds:dbl_7E2820 } /*0x5b24ef*/
  __asm { fmul ds:dbl_7E2818 }
  *(_WORD *)v87 = Math::RoundToInt(v46); /*0x5b2510*/
  if ( Math::Abs16Cmp((Math *)&v86, v87, a5) ) /*0x5b2515*/
  {
    LOWORD(v86) = *(_WORD *)v87; /*0x5b2523*/
  }
  else if ( *(__int16 *)Math::Sub16((Math *)v87, &v88, &v86) >= 0 ) /*0x5b2541*/
  {
    LOWORD(v86) = *a5 + v86; /*0x5b2550*/
  }
  else
  {
    LOWORD(v86) = v86 - *a5; /*0x5b2546*/
  }
  Vector2::NormalizeNonZero((int *)_ESI); /*0x5b2557*/
  Function::41C430((double *)_ESI); /*0x5b255e*/
  __asm { fstp qword ptr [esp+98h+var_88.field_8] } /*0x5b2568*/
  *(_DWORD *)v88.__pad_0 = (__int16)v86 - 0x3FFF; /*0x5b2575*/
  __asm /*0x5b2579*/
  {
    fild dword ptr [esp+0A0h+var_64.__pad_0]
    fmul ds:dbl_7E2810
    fstp [esp+0A0h+var_A0]; double
  }
  Math::ArcTan2(v80); /*0x5b2586*/
  __asm { fmul qword ptr [esp+0A0h+var_88.field_8] } /*0x5b258b*/
  v53 = (__int16)v86; /*0x5b258f*/
  __asm { fstp qword ptr [esi] } /*0x5b2594*/
  *(double *)_ESI = _RT1; /*0x5b2594*/
  *(_DWORD *)v88.__pad_0 = v53 - 0x3FFF; /*0x5b259c*/
  __asm /*0x5b25a0*/
  {
    fild dword ptr [esp+0A0h+var_64.__pad_0]
    fmul ds:dbl_7E2810
    fstp [esp+0A0h+var_A0]; double
  }
  Math::SinCos(v81); /*0x5b25ad*/
  __asm { fmul qword ptr [esp+0A0h+var_88.field_8] } /*0x5b25b2*/
  __asm
  {
    fchs
    fstp qword ptr [esi+8]
  }
  *(double *)(_ESI + 8) = _RT1; /*0x5b25bd*/
  Math::Hypotenuse2D((int *)_ESI); /*0x5b25c0*/
  __asm { fstp [esp+0A0h+var_A0]; double } /*0x5b25ce*/
  Math::CalcAngle(*(double *)(_ESI + 16), v82); /*0x5b25d3*/
  __asm { fsub ds:dbl_7E2820 } /*0x5b25d8*/
  __asm { fmul ds:dbl_7E2818 }
  *(_WORD *)v88.__pad_0 = Math::RoundToInt(v46); /*0x5b25ec*/
  v85.Movement_field_00 = *(_DWORD *)v88.__pad_0; /*0x5b25fa*/
  if ( a6
    || !a7 && (int)v88.field_4 <= (a8 != 0 ? 6 : 3) << 8
    || (unsigned __int8)((unsigned int)((*(_DWORD *)a5 >> 7) + 1) >> 1) <= 1u )
  {
    if ( !a9 ) /*0x5b28a1*/
    {
      LOWORD(v89) = 256; /*0x5b28b6*/
      v68 = (Movement *)Movement::Check((Movement *)a5, &v88, &v89); /*0x5b28bd*/
      v69 = Movement::DivideAndStoreScaled(v68, (int *)&v88.field_4, 2); /*0x5b28c4*/
      v70 = (__int16 *)Vector::ToFacingMath((int *)v87, v69); /*0x5b28d6*/
      Movement::CompareAbsCoords(&v85, v70, v83); /*0x5b28e0*/
    }
    goto LABEL_49; /*0x5b28e0*/
  }
  __asm { fld qword ptr [esi+10h] } /*0x5b2640*/
  v90 = *(double *)_ESI; /*0x5b2645*/
  __asm { fld qword ptr [esp+98h+var_48] } /*0x5b2653*/
  v56 = *(_DWORD *)(_ESI + 12); /*0x5b2657*/
  LODWORD(v91) = *(_DWORD *)(_ESI + 8); /*0x5b265a*/
  HIDWORD(v91) = v56; /*0x5b265e*/
  LOWORD(v57) = Math::RoundToInt(v46); /*0x5b2662*/
  __asm { fld [esp+98h+var_40] } /*0x5b2667*/
  v58 = v57; /*0x5b266b*/
  LOWORD(v59) = Math::RoundToInt(v46); /*0x5b266d*/
  HIDWORD(v90) = v59; /*0x5b2672*/
  LOWORD(v60) = Math::RoundToInt(v46); /*0x5b2676*/
  v61 = Coord::Subtract((Coord *)&v88.field_4, 6 * v58, 6 * HIDWORD(v90), 6 * v60); /*0x5b2695*/
  v62 = (double *)Coord::Subtract( /*0x5b26b9*/
                    (Coord *)v87,
                    *(_DWORD *)a2->__pad_0 + *v61,
                    a2->Vector3_field_0x04 + v61[1],
                    a2->Vector3_field_0x08 + v61[2]);
  v90 = *v62; /*0x5b26c0*/
  LODWORD(v91) = *((_DWORD *)v62 + 2); /*0x5b26d8*/
  GroundHeight = Cell::GetGroundHeight(&v90); /*0x5b26eb*/
  if ( (Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], &v90)->flags[0] & 0x100) != 0 ) /*0x5b26fb*/
    GroundHeight += g_MissionQueueFrame.localVariables[304]; /*0x5b26fd*/
  v64 = SLODWORD(v89) / 256; /*0x5b2713*/
  if ( a7 || a8 ) /*0x5b271f*/
  {
    v64 = 10; /*0x5b272d*/
  }
  else if ( v64 >= 5 ) /*0x5b2724*/
  {
    v64 = 5; /*0x5b2726*/
  }
  if ( !a9 ) /*0x5b2737*/
  {
    v65 = a2->Vector3_field_0x08; /*0x5b2744*/
    v66 = v65 - g_MissionQueueFrame.localVariables[307] * v64 - GroundHeight; /*0x5b274b*/
    if ( v66 >= -20 ) /*0x5b2750*/
    {
      if ( v66 <= 20 ) /*0x5b275a*/
        goto LABEL_34; /*0x5b275a*/
      v67 = v65 - 18; /*0x5b275c*/
    }
    else
    {
      v67 = v65 + 18; /*0x5b2752*/
    }
    a2->Vector3_field_0x08 = v67; /*0x5b275f*/
LABEL_34:
    if ( v66 >= g_MissionQueueFrame.localVariables[307] / -2 ) /*0x5b2773*/
    {
      if ( v66 <= g_MissionQueueFrame.localVariables[307] / 2 ) /*0x5b27fa*/
      {
        LOWORD(v88.field_4) = 0x4000; /*0x5b2875*/
        LOWORD(v89) = *a5 / 2; /*0x5b2888*/
        Movement::CompareAbsCoords(&v85, (__int16 *)&v88.field_4, (__int16 *)&v89); /*0x5b289a*/
      }
      else
      {
        *(_WORD *)v88.__pad_0 = 18432; /*0x5b27ff*/
        LOWORD(v89) = *a5 / 2; /*0x5b2812*/
        *(_DWORD *)v87 = LODWORD(v89); /*0x5b281f*/
        if ( Math::Abs16Cmp((Math *)&v85, &v88, (__int16 *)v87) ) /*0x5b2829*/
        {
          LOWORD(v85.Movement_field_00) = *(_WORD *)v88.__pad_0; /*0x5b2837*/
        }
        else if ( *(__int16 *)Math::Sub16(&v88, &v89, &v85) >= 0 ) /*0x5b2858*/
        {
          LOWORD(v85.Movement_field_00) += *(_WORD *)v87; /*0x5b286b*/
        }
        else
        {
          LOWORD(v85.Movement_field_00) -= *(_WORD *)v87; /*0x5b285f*/
        }
      }
    }
    else
    {
      *(_WORD *)v87 = 0x2000; /*0x5b2778*/
      LOWORD(v89) = *a5 / 2; /*0x5b278b*/
      *(_DWORD *)v88.__pad_0 = LODWORD(v89); /*0x5b2798*/
      if ( Math::Abs16Cmp((Math *)&v85, v87, (__int16 *)v88.__pad_0) ) /*0x5b27a2*/
      {
        LOWORD(v85.Movement_field_00) = *(_WORD *)v87; /*0x5b27b0*/
      }
      else if ( *(__int16 *)Math::Sub16((Math *)v87, &v89, &v85) >= 0 ) /*0x5b27d1*/
      {
        LOWORD(v85.Movement_field_00) += *(_WORD *)v88.__pad_0; /*0x5b27e7*/
      }
      else
      {
        LOWORD(v85.Movement_field_00) -= *(_WORD *)v88.__pad_0; /*0x5b27d8*/
      }
    }
  }
LABEL_49:
  Movement::UpdateLocomotion((double *)_ESI, (__int16 *)&v85); /*0x5b28e5*/
  if ( a7 ) /*0x5b28f6*/
    v93[0] = 0; /*0x5b28f8*/
  else
    v93[0] = (signed int)v93[0] / 4; /*0x5b290f*/
  return Coord::Length((Coord *)&v92); /*0x5b2347*/
}



// ==== 0x005B2930  Movement::Check  this=Movement  sig=csp ====
_DWORD *__thiscall Movement::Check(Movement *this, _DWORD *a2, _WORD *a3)
{
  LOWORD(a3) = LOWORD(this->Movement_field_00) + *a3; /*0x5b293e*/
  *a2 = a3; /*0x5b2947*/
  return a2; /*0x5b2949*/
}



// ==== 0x005B2950  Math::Sub16  this=Math  sig=csp ====
_DWORD *__thiscall Math::Sub16(Math *this, _DWORD *a2, _WORD *a3)
{
  LOWORD(a3) = *(_WORD *)this->__pad_0 - *a3; /*0x5b295a*/
  *a2 = a3; /*0x5b2967*/
  return a2; /*0x5b2969*/
}



// ==== 0x005B2970  Movement::DivideAndStoreScaled  this=Movement  sig=csp ====
int *__thiscall Movement::DivideAndStoreScaled(Movement *this, int *a2, int a3)
{
  LOWORD(a3) = SLOWORD(this->Movement_field_00) / a3; /*0x5b2978*/
  *a2 = a3; /*0x5b2985*/
  return a2; /*0x5b2987*/
}



// ==== 0x005B2990  Math::Abs16Cmp  this=Math  sig=csp ====
bool __thiscall Math::Abs16Cmp(Math *this, _WORD *a2, __int16 *a3)
{
  return abs16(*a3) >= (int)abs16(*(_WORD *)this->__pad_0 - *a2); /*0x5b29b3*/
}



// ==== 0x005B29C0  Movement::CompareAbsCoords  this=Movement  sig=csp ====
char __thiscall Movement::CompareAbsCoords(Movement *this, __int16 *a2, __int16 *a3)
{
  __int16 v3; // bp
  __int16 v4; // di
  __int16 Movement_field_00; // si

  v3 = *a3; /*0x5b29ca*/
  v4 = *a2; /*0x5b29cf*/
  Movement_field_00 = this->Movement_field_00; /*0x5b29d2*/
  if ( abs16(*a3) < (int)abs16(LOWORD(this->Movement_field_00) - *a2) ) /*0x5b29f3*/
  {
    if ( (__int16)(v4 - Movement_field_00) >= 0 ) /*0x5b2a06*/
      LOWORD(this->Movement_field_00) = Movement_field_00 + v3; /*0x5b2a19*/
    else
      LOWORD(this->Movement_field_00) = Movement_field_00 - v3; /*0x5b2a0b*/
    return 0; /*0x5b2a10*/
  }
  else
  {
    LOWORD(this->Movement_field_00) = v4; /*0x5b29f5*/
    return 1; /*0x5b29fb*/
  }
}



// ==== 0x005B2A30  Movement::UpdateLocomotion  this=RecoilData  sig=csp ====
void __thiscall sub_5B2A30(double *this, __int16 *a2)
{
  double v3; // st7
  double v4; // st7
  double v5; // [esp+18h] [ebp-10h]
  double v6; // [esp+20h] [ebp-8h]

  v3 = Math::Sqrt(*this * *this + this->u32_4 * this->u32_4); /*0x5b2a57*/
  v4 = Math::CalcAngle(this->u32_8, v3); /*0x5b2a72*/
  v5 = (double)((__int16)Math::RoundToInt((v4 - 1.570796326794897) * -10430.06004058427) - 0x3FFF) /*0x5b2aa2*/
     * -0.00009587672516830327;
  v6 = Math::Sqrt(this->u32_8 * this->u32_8 + *this * *this + this->u32_4 * this->u32_4); /*0x5b2acc*/
  if ( v5 != 0.0 ) /*0x5b2ae2*/
  {
    *this = *this / Math::ArcTan2(v5); /*0x5b2af7*/
    this->u32_4 = this->u32_4 / Math::ArcTan2(v5); /*0x5b2b04*/
  }
  *this = Math::ArcTan2((double)(*a2 - 0x3FFF) * -0.00009587672516830327) * *this; /*0x5b2b2e*/
  this->u32_4 = Math::ArcTan2((double)(*a2 - 0x3FFF) * -0.00009587672516830327) * this->u32_4; /*0x5b2b51*/
  this->u32_8 = Math::SinCos((double)(*a2 - 0x3FFF) * -0.00009587672516830327) * v6; /*0x5b2b7b*/
}



// ==== 0x005B2B90  sub_5B2B90  this=-  sig=ida-proto ====
void sub_5B2B90()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x5b2b9c*/
  dbl_ABEF78 = Math::Sqrt(v0 + v0); /*0x5b2bae*/
}



// ==== 0x005B2BC0  sub_5B2BC0  this=-  sig=ida-proto ====
void sub_5B2BC0()
{
  dbl_ABEFC8 = dbl_ABEF78 / 60.0; /*0x5b2bcc*/
}



// ==== 0x005B2BE0  sub_5B2BE0  this=-  sig=ida-proto ====
void sub_5B2BE0()
{
  dbl_ABEFB0 = 1.0 / dbl_ABEFC8; /*0x5b2bec*/
}



// ==== 0x005B2C00  sub_5B2C00  this=-  sig=ida-proto ====
void sub_5B2C00()
{
  dbl_ABEFA8 = 0.0174532925199433 * 45.0; /*0x5b2c0c*/
}



// ==== 0x005B2C20  sub_5B2C20  this=-  sig=ida-proto ====
void sub_5B2C20()
{
  dbl_ABEF80 = 0.0174532925199433 * 60.0; /*0x5b2c2c*/
}



// ==== 0x005B2C40  sub_5B2C40  this=-  sig=ida-proto ====
void sub_5B2C40()
{
  dbl_ABEF58 = 0.0174532925199433 * 90.0; /*0x5b2c4c*/
}



// ==== 0x005B2C60  sub_5B2C60  this=-  sig=ida-proto ====
__int64 sub_5B2C60()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_ABEF58 - dbl_ABEF80); /*0x5b2c72*/
  result = Math::RoundToInt(v0 * dbl_ABEF78 * 0.5); /*0x5b2c86*/
  dword_ABEFD0 = result; /*0x5b2c8b*/
  return result; /*0x5b2c90*/
}



// ==== 0x005B2CA0  sub_5B2CA0  this=-  sig=ida-proto ====
void sub_5B2CA0()
{
  dbl_ABEF88 = Math::ArcTan((double)dword_ABEFD0 * 0.00390625); /*0x5b2cb7*/
}



// ==== 0x005B2CD0  sub_5B2CD0  this=-  sig=ida-proto ====
void sub_5B2CD0()
{
  dbl_ABEFA0 = Math::ArcTan((double)(2 * dword_ABEFD0) / dbl_ABEF78); /*0x5b2cf2*/
}



// ==== 0x005B2D00  sub_5B2D00  this=-  sig=ida-proto ====
__int64 sub_5B2D00()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_ABEFD0) + 0.5); /*0x5b2d1b*/
  dword_ABEFC4 = result; /*0x5b2d20*/
  return result; /*0x5b2d26*/
}



// ==== 0x005B2D30  sub_5B2D30  this=-  sig=ida-proto ====
int sub_5B2D30()
{
  word_ABEF70 = 0; /*0x5b2d32*/
  word_ABEF72 = 0; /*0x5b2d38*/
  return 0; /*0x5b2d3e*/
}



// ==== 0x005B2D40  sub_5B2D40  this=-  sig=ida-proto ====
int sub_5B2D40()
{
  dword_ABEF90 = 0; /*0x5b2d42*/
  dword_ABEF94 = 0; /*0x5b2d47*/
  dword_ABEF98 = 0; /*0x5b2d4c*/
  return 0; /*0x5b2d51*/
}



// ==== 0x005B2D60  sub_5B2D60  this=-  sig=ida-proto ====
int sub_5B2D60()
{
  dword_ABEFC0 = 0; /*0x5b2d65*/
  dword_ABEFB8 = 128; /*0x5b2d6f*/
  dword_ABEFBC = 128; /*0x5b2d74*/
  return 128; /*0x5b2d79*/
}



// ==== 0x005B2D80  sub_5B2D80  this=-  sig=ida-proto ====
int sub_5B2D80()
{
  dword_ABEF60 = 0; /*0x5b2d82*/
  dword_ABEF64 = 0; /*0x5b2d87*/
  dword_ABEF68 = 0; /*0x5b2d8c*/
  dword_ABEF6C = 0; /*0x5b2d91*/
  return 0; /*0x5b2d96*/
}



// ==== 0x005B2DA0  MissionClass::Constructor  this=MissionClass  sig=csp ====
int __thiscall sub_5B2DA0(int this)
{
  wchar_t *v2; // ecx

  ObjectClass::ctor((_DWORD *)this); /*0x5b2da3*/
  *(_DWORD *)(this + 172) = -1; /*0x5b2dab*/
  *(_DWORD *)(this + 176) = -1; /*0x5b2db1*/
  *(_DWORD *)(this + 180) = -1; /*0x5b2db7*/
  *(_BYTE *)(this + 184) = 0; /*0x5b2dbf*/
  *(_DWORD *)(this + 188) = 0; /*0x5b2dc5*/
  *(_DWORD *)(this + 192) = 0; /*0x5b2dcb*/
  *(_DWORD *)(this + 196) = 0; /*0x5b2dd1*/
  v2 = dword_A8ED84; /*0x5b2dd7*/
  *(_DWORD *)(this + 208) = 0; /*0x5b2ddd*/
  *(_DWORD *)(this + 200) = v2; /*0x5b2de3*/
  *(_DWORD *)this = &MissionClass::`vftable'; /*0x5b2de9*/
  *(_DWORD *)(this + 4) = &MissionClass::`vftable'; /*0x5b2def*/
  *(_DWORD *)(this + 8) = &MissionClass::`vftable'; /*0x5b2df6*/
  *(_DWORD *)(this + 12) = &MissionClass::`vftable'; /*0x5b2dfd*/
  return this; /*0x5b2e06*/
}



// ==== 0x005B2E10  MissionClass::Return450A  this=MissionClass  sig=csp ====
int __thiscall MissionClass::Return450A(MissionClass *this)
{
  return 450; /*0x5b2e15*/
}



// ==== 0x005B2E20  MissionClass::Return450B  this=MissionClass  sig=csp ====
int __thiscall MissionClass::Return450B(MissionClass *this)
{
  return 450; /*0x5b2e25*/
}



// ==== 0x005B2E30  MissionClass::Return450C  this=MissionClass  sig=csp ====
int __thiscall MissionClass::Return450C(MissionClass *this)
{
  return 450; /*0x5b2e35*/
}



// ==== 0x005B2E40  MissionClass::StubReturn450  this=MissionClass  sig=csp ====
int TechnoClass::StubReturn450(MissionClass *this)
{
  return 450; /*0x5b2e45*/
}



// ==== 0x005B2E50  MissionClass::StubReturn450  this=MissionClass  sig=csp ====
int IPersistStream::StubReturn450(MissionClass *this)
{
  return 450; /*0x5b2e55*/
}



// ==== 0x005B2E60  MissionClass::COMStub_Ret450_134  this=MissionClass  sig=csp ====
int __thiscall AbstractClass::COMStub_Ret450_134(MissionClass *this)
{
  return 450; /*0x5b2e65*/
}



// ==== 0x005B2E70  MissionClass::CheckState1  this=MissionClass  sig=csp ====
int TechnoClass::CheckState1(MissionClass *this)
{
  return 450; /*0x5b2e75*/
}



// ==== 0x005B2E80  MissionClass::CheckState2  this=MissionClass  sig=csp ====
int TechnoClass::CheckState2(MissionClass *this)
{
  return 450; /*0x5b2e85*/
}



// ==== 0x005B2E90  MissionClass::CheckMissionStatus  this=MissionClass  sig=csp ====
int AircraftClass::CheckMissionStatus(MissionClass *this)
{
  return 450; /*0x5b2e95*/
}



// ==== 0x005B2EA0  MissionClass::COMStub_Ret450_138  this=MissionClass  sig=csp ====
int __thiscall AbstractClass::COMStub_Ret450_138(MissionClass *this)
{
  return 450; /*0x5b2ea5*/
}



// ==== 0x005B2EB0  MissionClass::COMStub_Ret450_139  this=MissionClass  sig=csp ====
int __thiscall AbstractClass::COMStub_Ret450_139(MissionClass *this)
{
  return 450; /*0x5b2eb5*/
}



// ==== 0x005B2EC0  MissionClass::COMStub_Ret450_140  this=MissionClass  sig=csp ====
int __thiscall AbstractClass::COMStub_Ret450_140(MissionClass *this)
{
  return 450; /*0x5b2ec5*/
}



// ==== 0x005B2ED0  MissionClass::Return450D  this=MissionClass  sig=csp ====
int __thiscall MissionClass::Return450D(MissionClass *this)
{
  return 450; /*0x5b2ed5*/
}



// ==== 0x005B2EE0  MissionClass::Return450E  this=MissionClass  sig=csp ====
int __thiscall MissionClass::Return450E(MissionClass *this)
{
  return 450; /*0x5b2ee5*/
}



// ==== 0x005B2EF0  MissionClass::GetMaxSize  this=MissionClass  sig=csp ====
int IPersistStream::GetMaxSize(MissionClass *this)
{
  return 450; /*0x5b2ef5*/
}



// ==== 0x005B2F00  MissionClass::COMStub_Ret450_144  this=MissionClass  sig=csp ====
int __thiscall AbstractClass::COMStub_Ret450_144(MissionClass *this)
{
  return 450; /*0x5b2f05*/
}



// ==== 0x005B2F10  MissionClass::Return450G  this=MissionClass  sig=csp ====
int MissionClass::Return450G(MissionClass *this)
{
  return 450; /*0x5b2f15*/
}



// ==== 0x005B2F20  MissionClass::Return450H  this=MissionClass  sig=csp ====
int MissionClass::Return450H(MissionClass *this)
{
  return 450; /*0x5b2f25*/
}



// ==== 0x005B2F30  MissionClass::CheckMissionStatus2  this=MissionClass  sig=csp ====
int AircraftClass::CheckMissionStatus2(MissionClass *this)
{
  return 450; /*0x5b2f35*/
}



// ==== 0x005B2F40  MissionClass::Return450I  this=MissionClass  sig=csp ====
int MissionClass::Return450I(MissionClass *this)
{
  return 450; /*0x5b2f45*/
}



// ==== 0x005B2F50  MissionClass::Return450J  this=MissionClass  sig=csp ====
int MissionClass::Return450J(MissionClass *this)
{
  return 450; /*0x5b2f55*/
}



// ==== 0x005B2F60  MissionClass::COMStub_Ret450_150  this=MissionClass  sig=csp ====
int __thiscall AbstractClass::COMStub_Ret450_150(MissionClass *this)
{
  return 450; /*0x5b2f65*/
}



// ==== 0x005B2F70  MissionClass::COMStub_Ret450_151  this=MissionClass  sig=csp ====
int __thiscall AbstractClass::COMStub_Ret450_151(MissionClass *this)
{
  return 450; /*0x5b2f75*/
}



// ==== 0x005B2F80  MissionClass::Return450K  this=MissionClass  sig=csp ====
int __thiscall MissionClass::Return450K(MissionClass *this)
{
  return 450; /*0x5b2f85*/
}



// ==== 0x005B2F90  MissionClass::Return450L  this=MissionClass  sig=csp ====
int __thiscall MissionClass::Return450L(MissionClass *this)
{
  return 450; /*0x5b2f95*/
}



// ==== 0x005B2FA0  MissionClass::Return450F  this=MissionClass  sig=csp ====
int __thiscall MissionClass::Return450F(MissionClass *this)
{
  return 450; /*0x5b2fa5*/
}



// ==== 0x005B2FB0  MissionClass::Return450M  this=MissionClass  sig=csp ====
int __thiscall MissionClass::Return450M(MissionClass *this)
{
  return 450; /*0x5b2fb5*/
}



// ==== 0x005B2FC0  MissionClass::Return450N  this=MissionClass  sig=csp ====
int __thiscall MissionClass::Return450N(MissionClass *this)
{
  return 450; /*0x5b2fc5*/
}



// ==== 0x005B2FD0  MissionClass::SetState  this=MissionClass  sig=csp ====
int __thiscall MissionClass::SetState(MissionClass *this)
{
  int result; // eax
  int *missionTimer; // ecx
  int v3; // [esp+4h] [ebp-8h]
  int v4; // [esp+10h] [ebp+4h]

  result = v4; /*0x5b2fdc*/
  if ( this->currentMission != 28 || v4 != 5 ) /*0x5b2fe5*/
  {
    this->currentMission = v4; /*0x5b2fe9*/
    this->queuedMission = -1; /*0x5b2fef*/
    this->missionQueued = 0; /*0x5b2ff9*/
    this->missionStatus = 0; /*0x5b2fff*/
    this->missionStartTime = *(_DWORD *)&stru_A8EB00.?[416]; /*0x5b300a*/
    this->missionData = 0; /*0x5b3010*/
    missionTimer = this->missionTimer; /*0x5b301b*/
    *missionTimer = *(_DWORD *)&stru_A8EB00.?[416]; /*0x5b3021*/
    missionTimer[1] = v3; /*0x5b3027*/
    missionTimer[2] = 0; /*0x5b302a*/
    return v3; /*0x5b3023*/
  }
  return result; /*0x5b302d*/
}



// ==== 0x005B3040  MissionClass::GetPrimaryOrFallback  this=MissionClass  sig=csp ====
int __thiscall MissionClass::GetPrimaryOrFallback(MissionClass *this)
{
  int result; // eax

  result = this->currentMission; /*0x5b3040*/
  if ( result == -1 ) /*0x5b3049*/
    return this->queuedMission; /*0x5b304b*/
  return result; /*0x5b3051*/
}



// ==== 0x005B3060  MissionClass::ProcessCloaking  this=MissionClass  sig=csp ====
char __thiscall ObjectClass::ProcessCloaking(MissionClass *this)
{
  int health; // eax
  int v3; // edx
  int *missionTimer; // esi
  int v6; // [esp+Ch] [ebp-8h]

  ObjectClass::DetectCloaked((ObjectClass *)this); /*0x5b3067*/
  LOBYTE(health) = this->?; /*0x5b306c*/
  if ( !(_BYTE)health ) /*0x5b3074*/
    return health; /*0x5b3074*/
  v3 = this->missionTimer[0]; /*0x5b307a*/
  health = this->missionTimer[2]; /*0x5b3080*/
  missionTimer = this->missionTimer; /*0x5b3086*/
  if ( v3 == -1 ) /*0x5b308f*/
    goto LABEL_5; /*0x5b308f*/
  if ( *(_DWORD *)&stru_A8EB00.?[416] - v3 < health ) /*0x5b309b*/
  {
    health -= *(_DWORD *)&stru_A8EB00.?[416] - v3; /*0x5b309d*/
LABEL_5:
    if ( health ) /*0x5b30a1*/
      return health; /*0x5b30a1*/
  }
  health = this->?; /*0x5b30a7*/
  if ( health > 0 ) /*0x5b30ac*/
  {
    switch ( this->currentMission ) /*0x5b30c1*/
    {
      case 1: /*0x5b30c1*/
        health = (*((int (__thiscall **)(MissionClass *))this->ObjectClass + 132))(this); /*0x5b3176*/
        *missionTimer = *(_DWORD *)&stru_A8EB00.?[416]; /*0x5b3183*/
        this->missionTimer[1] = v6; /*0x5b3189*/
        this->missionTimer[2] = health; /*0x5b318c*/
        break; /*0x5b3193*/
      case 2: /*0x5b30c1*/
        health = (*((int (__thiscall **)(MissionClass *))this->ObjectClass + 139))(this); /*0x5b3352*/
        *missionTimer = *(_DWORD *)&stru_A8EB00.?[416]; /*0x5b335f*/
        this->missionTimer[1] = v6; /*0x5b3365*/
        this->missionTimer[2] = health; /*0x5b3368*/
        break; /*0x5b336f*/
      case 4: /*0x5b30c1*/
        health = (*((int (__thiscall **)(MissionClass *))this->ObjectClass + 140))(this); /*0x5b3198*/
        *missionTimer = *(_DWORD *)&stru_A8EB00.?[416]; /*0x5b31a5*/
        this->missionTimer[1] = v6; /*0x5b31ab*/
        this->missionTimer[2] = health; /*0x5b31ae*/
        break; /*0x5b31b5*/
      case 5: /*0x5b30c1*/
      case 6: /*0x5b30c1*/
        health = (*((int (__thiscall **)(MissionClass *))this->ObjectClass + 135))(this); /*0x5b32ec*/
        *missionTimer = *(_DWORD *)&stru_A8EB00.?[416]; /*0x5b32f9*/
        this->missionTimer[1] = v6; /*0x5b32ff*/
        this->missionTimer[2] = health; /*0x5b3302*/
        break; /*0x5b3309*/
      case 7: /*0x5b30c1*/
        health = (*((int (__thiscall **)(MissionClass *))this->ObjectClass + 144))(this); /*0x5b3110*/
        *missionTimer = *(_DWORD *)&stru_A8EB00.?[416]; /*0x5b311d*/
        this->missionTimer[1] = v6; /*0x5b3123*/
        this->missionTimer[2] = health; /*0x5b3126*/
        break; /*0x5b312d*/
      case 8: /*0x5b30c1*/
      case 0x11: /*0x5b30c1*/
        health = (*((int (__thiscall **)(MissionClass *))this->ObjectClass + 133))(this); /*0x5b330e*/
        *missionTimer = *(_DWORD *)&stru_A8EB00.?[416]; /*0x5b331b*/
        this->missionTimer[1] = v6; /*0x5b3321*/
        this->missionTimer[2] = health; /*0x5b3324*/
        break; /*0x5b332b*/
      case 9: /*0x5b30c1*/
        health = (*((int (__thiscall **)(MissionClass *))this->ObjectClass + 134))(this); /*0x5b3330*/
        *missionTimer = *(_DWORD *)&stru_A8EB00.?[416]; /*0x5b333d*/
        this->missionTimer[1] = v6; /*0x5b3343*/
        this->missionTimer[2] = health; /*0x5b3346*/
        break; /*0x5b334d*/
      case 0xA: /*0x5b30c1*/
        health = (*((int (__thiscall **)(MissionClass *))this->ObjectClass + 137))(this); /*0x5b31ba*/
        *missionTimer = *(_DWORD *)&stru_A8EB00.?[416]; /*0x5b31c7*/
        this->missionTimer[1] = v6; /*0x5b31cd*/
        this->missionTimer[2] = health; /*0x5b31d0*/
        break; /*0x5b31d7*/
      case 0xB: /*0x5b30c1*/
        health = (*((int (__thiscall **)(MissionClass *))this->ObjectClass + 136))(this); /*0x5b31dc*/
        *missionTimer = *(_DWORD *)&stru_A8EB00.?[416]; /*0x5b31e9*/
        this->missionTimer[1] = v6; /*0x5b31ef*/
        this->missionTimer[2] = health; /*0x5b31f2*/
        break; /*0x5b31f9*/
      case 0xC: /*0x5b30c1*/
        health = (*((int (__thiscall **)(MissionClass *))this->ObjectClass + 141))(this); /*0x5b31fe*/
        *missionTimer = *(_DWORD *)&stru_A8EB00.?[416]; /*0x5b320b*/
        this->missionTimer[1] = v6; /*0x5b3211*/
        this->missionTimer[2] = health; /*0x5b3214*/
        break; /*0x5b321b*/
      case 0xD: /*0x5b30c1*/
        health = (*((int (__thiscall **)(MissionClass *))this->ObjectClass + 142))(this); /*0x5b3220*/
        *missionTimer = *(_DWORD *)&stru_A8EB00.?[416]; /*0x5b322d*/
        this->missionTimer[1] = v6; /*0x5b3233*/
        this->missionTimer[2] = health; /*0x5b3236*/
        break; /*0x5b323d*/
      case 0xE: /*0x5b30c1*/
        health = (*((int (__thiscall **)(MissionClass *))this->ObjectClass + 131))(this); /*0x5b3242*/
        *missionTimer = *(_DWORD *)&stru_A8EB00.?[416]; /*0x5b324f*/
        this->missionTimer[1] = v6; /*0x5b3255*/
        this->missionTimer[2] = health; /*0x5b3258*/
        break; /*0x5b325f*/
      case 0xF: /*0x5b30c1*/
        health = (*((int (__thiscall **)(MissionClass *))this->ObjectClass + 138))(this); /*0x5b3374*/
        *missionTimer = *(_DWORD *)&stru_A8EB00.?[416]; /*0x5b3381*/
        this->missionTimer[1] = v6; /*0x5b3387*/
        this->missionTimer[2] = health; /*0x5b338a*/
        break; /*0x5b3391*/
      case 0x10: /*0x5b30c1*/
        health = (*((int (__thiscall **)(MissionClass *))this->ObjectClass + 143))(this); /*0x5b3264*/
        *missionTimer = *(_DWORD *)&stru_A8EB00.?[416]; /*0x5b3271*/
        this->missionTimer[1] = v6; /*0x5b3277*/
        this->missionTimer[2] = health; /*0x5b327a*/
        break; /*0x5b3281*/
      case 0x12: /*0x5b30c1*/
        health = (*((int (__thiscall **)(MissionClass *))this->ObjectClass + 145))(this); /*0x5b3132*/
        *missionTimer = *(_DWORD *)&stru_A8EB00.?[416]; /*0x5b313f*/
        this->missionTimer[1] = v6; /*0x5b3145*/
        this->missionTimer[2] = health; /*0x5b3148*/
        break; /*0x5b314f*/
      case 0x13: /*0x5b30c1*/
        health = (*((int (__thiscall **)(MissionClass *))this->ObjectClass + 146))(this); /*0x5b3154*/
        *missionTimer = *(_DWORD *)&stru_A8EB00.?[416]; /*0x5b3161*/
        this->missionTimer[1] = v6; /*0x5b3167*/
        this->missionTimer[2] = health; /*0x5b316a*/
        break; /*0x5b3171*/
      case 0x14: /*0x5b30c1*/
        health = (*((int (__thiscall **)(MissionClass *))this->ObjectClass + 147))(this); /*0x5b3286*/
        *missionTimer = *(_DWORD *)&stru_A8EB00.?[416]; /*0x5b3293*/
        this->missionTimer[1] = v6; /*0x5b3299*/
        this->missionTimer[2] = health; /*0x5b329c*/
        break; /*0x5b32a3*/
      case 0x15: /*0x5b30c1*/
        health = (*((int (__thiscall **)(MissionClass *))this->ObjectClass + 150))(this); /*0x5b3396*/
        *missionTimer = *(_DWORD *)&stru_A8EB00.?[416]; /*0x5b33a3*/
        this->missionTimer[1] = v6; /*0x5b33a9*/
        this->missionTimer[2] = health; /*0x5b33ac*/
        break; /*0x5b33b3*/
      case 0x16: /*0x5b30c1*/
        health = (*((int (__thiscall **)(MissionClass *))this->ObjectClass + 148))(this); /*0x5b32ca*/
        *missionTimer = *(_DWORD *)&stru_A8EB00.?[416]; /*0x5b32d7*/
        this->missionTimer[1] = v6; /*0x5b32dd*/
        this->missionTimer[2] = health; /*0x5b32e0*/
        break; /*0x5b32e7*/
      case 0x17: /*0x5b30c1*/
        health = (*((int (__thiscall **)(MissionClass *))this->ObjectClass + 130))(this); /*0x5b30ee*/
        *missionTimer = *(_DWORD *)&stru_A8EB00.?[416]; /*0x5b30fb*/
        this->missionTimer[1] = v6; /*0x5b3101*/
        this->missionTimer[2] = health; /*0x5b3104*/
        break; /*0x5b310b*/
      case 0x18: /*0x5b30c1*/
        health = (*((int (__thiscall **)(MissionClass *))this->ObjectClass + 149))(this); /*0x5b32a8*/
        *missionTimer = *(_DWORD *)&stru_A8EB00.?[416]; /*0x5b32b5*/
        this->missionTimer[1] = v6; /*0x5b32bb*/
        this->missionTimer[2] = health; /*0x5b32be*/
        break; /*0x5b32c5*/
      case 0x19: /*0x5b30c1*/
        health = (*((int (__thiscall **)(MissionClass *))this->ObjectClass + 151))(this); /*0x5b33b8*/
        *missionTimer = *(_DWORD *)&stru_A8EB00.?[416]; /*0x5b33c5*/
        this->missionTimer[1] = v6; /*0x5b33cb*/
        this->missionTimer[2] = health; /*0x5b33ce*/
        break; /*0x5b33d5*/
      case 0x1A: /*0x5b30c1*/
        health = (*((int (__thiscall **)(MissionClass *))this->ObjectClass + 152))(this); /*0x5b33da*/
        *missionTimer = *(_DWORD *)&stru_A8EB00.?[416]; /*0x5b33e7*/
        this->missionTimer[1] = v6; /*0x5b33ed*/
        this->missionTimer[2] = health; /*0x5b33f0*/
        break; /*0x5b33f7*/
      case 0x1B: /*0x5b30c1*/
        health = (*((int (__thiscall **)(MissionClass *))this->ObjectClass + 153))(this); /*0x5b33fc*/
        *missionTimer = *(_DWORD *)&stru_A8EB00.?[416]; /*0x5b3409*/
        this->missionTimer[1] = v6; /*0x5b340f*/
        this->missionTimer[2] = health; /*0x5b3412*/
        break; /*0x5b3419*/
      case 0x1C: /*0x5b30c1*/
        health = (*((int (__thiscall **)(MissionClass *))this->ObjectClass + 154))(this); /*0x5b3462*/
        *missionTimer = *(_DWORD *)&stru_A8EB00.?[416]; /*0x5b346f*/
        this->missionTimer[1] = v6; /*0x5b3475*/
        this->missionTimer[2] = health; /*0x5b3478*/
        break; /*0x5b347f*/
      case 0x1E: /*0x5b30c1*/
        health = (*((int (__thiscall **)(MissionClass *))this->ObjectClass + 155))(this); /*0x5b341e*/
        *missionTimer = *(_DWORD *)&stru_A8EB00.?[416]; /*0x5b342b*/
        this->missionTimer[1] = v6; /*0x5b3431*/
        this->missionTimer[2] = health; /*0x5b3434*/
        break; /*0x5b343b*/
      case 0x1F: /*0x5b30c1*/
        health = (*((int (__thiscall **)(MissionClass *))this->ObjectClass + 156))(this); /*0x5b3440*/
        *missionTimer = *(_DWORD *)&stru_A8EB00.?[416]; /*0x5b344d*/
        this->missionTimer[1] = v6; /*0x5b3453*/
        this->missionTimer[2] = health; /*0x5b3456*/
        break; /*0x5b345d*/
      default:
        health = (*((int (__thiscall **)(MissionClass *))this->ObjectClass + 129))(this); /*0x5b34c8*/
        *missionTimer = *(_DWORD *)&stru_A8EB00.?[416]; /*0x5b34d4*/
        this->missionTimer[1] = v6; /*0x5b34da*/
        this->missionTimer[2] = health; /*0x5b34dd*/
        break; /*0x5b34dd*/
    }
  }
  return health; /*0x5b30d8*/
}



// ==== 0x005B3570  MissionClass::AdvanceState  this=MissionClass  sig=csp ====
int __thiscall MissionClass::AdvanceState(MissionClass *this)
{
  int result; // eax
  int v2; // eax
  int v3; // [esp+4h] [ebp-8h]

  result = this->queuedMission; /*0x5b3570*/
  if ( result == -1 ) /*0x5b357c*/
  {
    LOBYTE(result) = 0; /*0x5b35cc*/
  }
  else
  {
    this->currentMission = result; /*0x5b357f*/
    this->queuedMission = -1; /*0x5b3585*/
    v2 = *(_DWORD *)&stru_A8EB00.?[416]; /*0x5b358f*/
    this->missionStatus = 0; /*0x5b359c*/
    this->missionTimer[0] = v2; /*0x5b35a2*/
    this->missionTimer[1] = v3; /*0x5b35a8*/
    this->missionTimer[2] = 0; /*0x5b35ab*/
    result = *(_DWORD *)&stru_A8EB00.?[416]; /*0x5b35ae*/
    this->missionStartTime = *(_DWORD *)&stru_A8EB00.?[416]; /*0x5b35b3*/
    this->missionData = 0; /*0x5b35b9*/
    this->missionQueued = 0; /*0x5b35bf*/
    LOBYTE(result) = 1; /*0x5b35c5*/
  }
  return result; /*0x5b35c8*/
}



// ==== 0x005B35E0  MissionClass::MissionDispatch  this=MissionClass  sig=csp ====
int __thiscall ParticleClass::MissionDispatch(MissionClass *this)
{
  int result; // eax
  int currentMission; // ecx
  int queuedMission; // ecx
  int v5; // [esp+8h] [ebp+4h]
  char v6; // [esp+Ch] [ebp+8h]

  result = v5; /*0x5b35e0*/
  currentMission = this->currentMission; /*0x5b35e7*/
  if ( (currentMission != 28 || v5 != 5) && currentMission != 19 ) /*0x5b35fa*/
  {
    if ( v5 != -1 ) /*0x5b35ff*/
    {
      if ( currentMission != v5 || (queuedMission = this->queuedMission, queuedMission != v5) && queuedMission != -1 ) /*0x5b3612*/
      {
        this->queuedMission = v5; /*0x5b3614*/
        this->missionQueued = 0; /*0x5b361a*/
      }
    }
    LOBYTE(result) = v6; /*0x5b3621*/
    if ( v6 ) /*0x5b3627*/
    {
      result = (*((int (__thiscall **)(MissionClass *))this->ObjectClass + 128))(this); /*0x5b362d*/
      if ( (_BYTE)result ) /*0x5b3635*/
        return (*((int (__thiscall **)(MissionClass *))this->ObjectClass + 123))(this); /*0x5b363b*/
    }
  }
  return result; /*0x5b3641*/
}



// ==== 0x005B3650  MissionClass::COMStub_125  this=MissionClass  sig=csp ====
int __thiscall AbstractClass::COMStub_125(MissionClass *this, int a2, int a3, int a4)
{
  int result; // eax
  int queuedMission; // edx

  result = this->currentMission; /*0x5b3650*/
  if ( (result != 28 || a2 != 5) && result != 19 ) /*0x5b3668*/
  {
    queuedMission = this->queuedMission; /*0x5b366a*/
    if ( queuedMission == -1 ) /*0x5b3673*/
    {
      this->suspendedMission = result; /*0x5b368c*/
      this->currentMission = a2; /*0x5b3692*/
    }
    else
    {
      this->currentMission = a2; /*0x5b3675*/
      this->suspendedMission = queuedMission; /*0x5b367b*/
    }
    this->missionQueued = 0; /*0x5b3681*/
  }
  return result; /*0x5b3688*/
}



// ==== 0x005B36B0  MissionClass::COMStub_126  this=MissionClass  sig=csp ====
char __thiscall AbstractClass::COMStub_126(MissionClass *this)
{
  int suspendedMission; // eax

  suspendedMission = this->suspendedMission; /*0x5b36b0*/
  if ( suspendedMission == -1 ) /*0x5b36b9*/
    return 0; /*0x5b36d5*/
  this->currentMission = suspendedMission; /*0x5b36bb*/
  this->suspendedMission = -1; /*0x5b36c1*/
  this->missionQueued = 0; /*0x5b36cb*/
  return 1; /*0x5b36d4*/
}



// ==== 0x005B36E0  IPersistStream::SetField  this=IPersistStream  sig=ida-proto ====
char __fastcall IPersistStream::SetField(int a1)
{
  if ( a1 == -1 ) /*0x5b36e3*/
    return 1; /*0x5b36e5*/
  else
    return byte_A8E3AE[32 * a1]; /*0x5b36eb*/
}



// ==== 0x005B3700  MissionClass::FindName  this=MissionClass  sig=csp ====
_BYTE *__thiscall MissionClass::FindName(MissionClass *this)
{
  LOBYTE(this->?) = 0; /*0x5b3706*/
  BYTE1(this->?) = 0; /*0x5b3709*/
  HIBYTE(this->?) = 0; /*0x5b370c*/
  BYTE2(this->?) = 1; /*0x5b370f*/
  LOBYTE(this->?) = 1; /*0x5b3712*/
  BYTE1(this->?) = 1; /*0x5b3715*/
  this->? = -755914244; /*0x5b3722*/
  this->? = -755914244; /*0x5b3725*/
  this->ObjectClass = (void *)-1; /*0x5b3728*/
  this->? = 1066426957; /*0x5b372e*/
  this->? = 1066426957; /*0x5b3731*/
  return this; /*0x5b3734*/
}



// ==== 0x005B3760  MissionClass::LoadFromINI  this=MissionClass  sig=csp ====
char __thiscall MissionClass::LoadFromINI(MissionClass *this, _DWORD *a2)
{
  char *v3; // eax
  char *v4; // eax
  char *v5; // eax
  char *v6; // eax
  char *v7; // eax
  char *v8; // eax
  char *v9; // eax
  char *v10; // eax
  void *ptr_0; // eax
  char *v13; // eax
  int abstractFlags; // ecx

  INIClass::ResetSection((INIClass *)a2); /*0x5b376a*/
  if ( this->ObjectClass == (void *)-1 ) /*0x5b3774*/
    v3 = g_Str__none_; /*0x5b3776*/
  else
    v3 = off_816CAC[(int)this->ObjectClass]; /*0x5b377d*/
  if ( !INIClass::BinarySearchSection((int)a2, (unsigned __int8 *)v3) ) /*0x5b3787*/
    return 0; /*0x5b3906*/
  if ( this->ObjectClass == (void *)-1 ) /*0x5b379e*/
    v4 = g_Str__none_; /*0x5b37a0*/
  else
    v4 = off_816CAC[(int)this->ObjectClass]; /*0x5b37a7*/
  LOBYTE(this->?) = INIClass::ReadBool_Overwrite( /*0x5b37bf*/
                      a2,
                      (unsigned __int8 *)v4,
                      (unsigned __int8 *)&stru_82BA00.?[8],
                      (char)this->?);
  if ( this->ObjectClass == (void *)-1 ) /*0x5b37c7*/
    v5 = g_Str__none_; /*0x5b37c9*/
  else
    v5 = off_816CAC[(int)this->ObjectClass]; /*0x5b37d0*/
  BYTE1(this->?) = INIClass::ReadBool_Overwrite( /*0x5b37e8*/
                     a2,
                     (unsigned __int8 *)v5,
                     (unsigned __int8 *)&stru_82BA00.?[6],
                     BYTE1(this->?));
  if ( this->ObjectClass == (void *)-1 ) /*0x5b37f0*/
    v6 = g_Str__none_; /*0x5b37f2*/
  else
    v6 = off_816CAC[(int)this->ObjectClass]; /*0x5b37f9*/
  BYTE2(this->?) = INIClass::ReadBool_Overwrite( /*0x5b3811*/
                     a2,
                     (unsigned __int8 *)v6,
                     (unsigned __int8 *)&stru_82BA00.?[3],
                     BYTE2(this->?));
  if ( this->ObjectClass == (void *)-1 ) /*0x5b3819*/
    v7 = g_Str__none_; /*0x5b381b*/
  else
    v7 = off_816CAC[(int)this->ObjectClass]; /*0x5b3822*/
  HIBYTE(this->?) = INIClass::ReadBool_Overwrite( /*0x5b383a*/
                      a2,
                      (unsigned __int8 *)v7,
                      (unsigned __int8 *)stru_82BA00.?,
                      HIBYTE(this->?));
  if ( this->ObjectClass == (void *)-1 ) /*0x5b3842*/
    v8 = g_Str__none_; /*0x5b3844*/
  else
    v8 = off_816CAC[(int)this->ObjectClass]; /*0x5b384b*/
  LOBYTE(this->?) = INIClass::ReadBool_Overwrite( /*0x5b3863*/
                      a2,
                      (unsigned __int8 *)v8,
                      (unsigned __int8 *)&stru_82BA00.?[30],
                      (char)this->?);
  if ( this->ObjectClass == (void *)-1 ) /*0x5b386b*/
    v9 = g_Str__none_; /*0x5b386d*/
  else
    v9 = off_816CAC[(int)this->ObjectClass]; /*0x5b3874*/
  BYTE1(this->?) = INIClass::ReadBool_Overwrite( /*0x5b388c*/
                     a2,
                     (unsigned __int8 *)v9,
                     (unsigned __int8 *)&stru_82BA00.?[28],
                     BYTE1(this->?));
  if ( this->ObjectClass == (void *)-1 ) /*0x5b3894*/
    v10 = g_Str__none_; /*0x5b3896*/
  else
    v10 = off_816CAC[(int)this->ObjectClass]; /*0x5b389d*/
  INIClass::ReadDouble_Overwrite( /*0x5b38b4*/
    (double *)a2,
    (unsigned __int8 *)v10,
    (unsigned __int8 *)g_INI_Key_Rate,
    *(double *)&this->?);
  ptr_0 = this->ObjectClass; /*0x5b38b9*/
  __asm { fstp qword ptr [esi+10h] } /*0x5b38bb*/
  *(double *)&this->? = _RT1; /*0x5b38bb*/
  if ( ptr_0 == (void *)-1 ) /*0x5b38c1*/
    v13 = g_Str__none_; /*0x5b38c3*/
  else
    v13 = off_816CAC[(_DWORD)ptr_0]; /*0x5b38ca*/
  INIClass::ReadDouble_Overwrite((double *)a2, (unsigned __int8 *)v13, (unsigned __int8 *)&stru_82BA00.?[26], 0.0); /*0x5b38dd*/
  __asm { fst qword ptr [esi+18h] } /*0x5b38e2*/
  *(double *)&this->? = _RT1; /*0x5b38e2*/
  __asm /*0x5b38e5*/
  {
    fcomp ds:dbl_7E2800
    fnstsw ax
  }
  if ( (_AX & 0x4000) != 0 ) /*0x5b38f0*/
  {
    abstractFlags = this->?; /*0x5b38f5*/
    this->? = this->?; /*0x5b38f8*/
    this->? = abstractFlags; /*0x5b38fb*/
  }
  return 1; /*0x5b38fe*/
}



// ==== 0x005B3910  ObjectClass::LookupWaypointName  this=ObjectClass  sig=csp ====
int __thiscall LookupWaypointName(ObjectClass *this)
{
  int v2; // edi
  char **v3; // esi

  if ( !this ) /*0x5b3917*/
    return -1; /*0x5b393c*/
  v2 = 0; /*0x5b3919*/
  v3 = off_816CAC; /*0x5b391b*/
  while ( _strcmpi(*v3, (char *)this) ) /*0x5b392e*/
  {
    ++v3; /*0x5b3930*/
    ++v2; /*0x5b3933*/
    if ( (int)v3 >= (int)aSpyplaneOverfl ) /*0x5b393a*/
      return -1; /*0x5b393a*/
  }
  return v2; /*0x5b393c*/
}



// ==== 0x005B3950  FromNameIndex  this=-  sig=csp ====
char *__fastcall Name_FromIndex(int a1)
{
  if ( a1 == -1 ) /*0x5b3953*/
    return g_Str__none_; /*0x5b395d*/
  else
    return off_816CAC[a1]; /*0x5b3955*/
}



// ==== 0x005B3970  AbstractClass::COMStub_13  this=MissionClass  sig=csp ====
int __thiscall AbstractClass::_vt13(int this, int a2)
{
  int v3; // edx
  int v4; // eax

  HouseClass::ProcessPower((#374 *)this); /*0x5b3979*/
  Power::TimerProcess(*(_DWORD *)(this + 172)); /*0x5b3987*/
  Power::TimerProcess(*(_DWORD *)(this + 176)); /*0x5b3995*/
  Power::TimerProcess(*(_DWORD *)(this + 180)); /*0x5b39a3*/
  Power::TimerProcess(*(_DWORD *)(this + 188)); /*0x5b39b1*/
  v3 = *(_DWORD *)(this + 200); /*0x5b39b6*/
  v4 = *(_DWORD *)(this + 208); /*0x5b39bc*/
  if ( v3 != -1 ) /*0x5b39c5*/
  {
    if ( (int)dword_A8ED84 - v3 >= v4 ) /*0x5b39d1*/
      v4 = 0; /*0x5b39d7*/
    else
      v4 -= (int)dword_A8ED84 - v3; /*0x5b39d3*/
  }
  Power::TimerProcess(v4); /*0x5b39dc*/
  return Power::TimerProcess(*(_DWORD *)(this + 192)); /*0x5b39ef*/
}



// ==== 0x005B3A00  MissionClass::GetMissionControl  this=TechnoClass  sig=csp ====
char *__thiscall MissionClass::GetMissionControl(MissionClass *this)
{
  return (char *)&stru_A8E3A8 + 32 * this->currentMission; /*0x5b3a0e*/
}



// ==== 0x005B3A10  MissionClass::HasValidTarget  this=MissionClass  sig=csp ====
int __thiscall MissionClass::HasValidTarget(MissionClass *this)
{
  return this->suspendedMission != -1; /*0x5b3a1e*/
}



// ==== 0x005B3A50  ObjectClass::StubReturnFalse  this=ObjectClass  sig=csp ====
int __thiscall IPersistStream::StubReturnFalse(ObjectClass *this)
{
  int result; // eax

  return result; /*0x5b3a50*/
}



// ==== 0x005B3A60  AbstractClass::getWeaponRange  this=MissionClass  sig=csp ====
_DWORD *__thiscall AbstractClass::getWeaponRange(AbstractClass *this, char a2)
{
  this->ptr_0 = &MissionClass::`vftable'; /*0x5b3a63*/
  this->ptr_4 = &MissionClass::`vftable'; /*0x5b3a69*/
  this->ptr_8 = &MissionClass::`vftable'; /*0x5b3a70*/
  this->ptr_C = &MissionClass::`vftable'; /*0x5b3a77*/
  ObjectClass::Dtor((ObjectClass *)this); /*0x5b3a7e*/
  if ( (a2 & 1) != 0 ) /*0x5b3a88*/
    __3_YAXPAX_Z(this); /*0x5b3a8b*/
  return &this->ptr_0; /*0x5b3a95*/
}



// ==== 0x005B3AA0  sub_5B3AA0  this=-  sig=ida-proto ====
int sub_5B3AA0()
{
  dword_ABEFF8 = 0; /*0x5b3aa2*/
  dword_ABEFFC = 0; /*0x5b3aa7*/
  dword_ABF000 = 0; /*0x5b3aac*/
  dword_ABF004 = 0; /*0x5b3ab1*/
  return 0; /*0x5b3ab6*/
}



// ==== 0x005B3AC0  sub_5B3AC0  this=-  sig=ida-proto ====
int sub_5B3AC0()
{
  dword_ABEFE4 = 0; /*0x5b3acc*/
  dword_ABEFDC = (int)&GenericNode::`vftable'; /*0x5b3ad2*/
  dword_ABEFE8 = (int)&GenericNode::`vftable'; /*0x5b3ad7*/
  dword_ABEFEC = 0; /*0x5b3adc*/
  dword_ABEFF0 = (int)&dword_ABEFDC; /*0x5b3ae2*/
  dword_ABEFE0 = (int)&dword_ABEFE8; /*0x5b3aec*/
  dword_ABEFD8 = (int)&List<MixFileClass *>::`vftable'; /*0x5b3af6*/
  return atexit(sub_5B3B10); /*0x5b3b06*/
}



// ==== 0x005B3B10  sub_5B3B10  this=-  sig=ida-proto ====
void __cdecl sub_5B3B10()
{
  int v0; // edx
  int v1; // edi
  int v2; // ecx
  int v3; // esi
  _DWORD *v4; // eax

  if ( (byte_ABF008 & 1) == 0 ) /*0x5b3b1b*/
  {
    byte_ABF008 |= 1u; /*0x5b3b25*/
    dword_ABEFD8 = (int)&GenericList::`vftable'; /*0x5b3b2b*/
LABEL_3:
    v0 = dword_ABEFE0; /*0x5b3b37*/
    while ( dword_ABEFE0 && *(_DWORD *)(dword_ABEFE0 + 4) && *(_DWORD *)(dword_ABEFE0 + 8) && dword_ABEFE0 ) /*0x5b3b4d*/
    {
      v1 = *(_DWORD *)(dword_ABEFE0 + 4); /*0x5b3b4f*/
      v2 = dword_ABEFE0 + 4; /*0x5b3b52*/
      if ( v1 ) /*0x5b3b57*/
      {
        v3 = *(_DWORD *)(dword_ABEFE0 + 8); /*0x5b3b59*/
        v4 = (_DWORD *)(dword_ABEFE0 + 8); /*0x5b3b5c*/
        if ( v3 ) /*0x5b3b61*/
        {
          *(_DWORD *)(v3 + 4) = v1; /*0x5b3b63*/
          *(_DWORD *)(*(_DWORD *)v2 + 8) = *v4; /*0x5b3b6a*/
          *v4 = 0; /*0x5b3b6d*/
          *(_DWORD *)v2 = 0; /*0x5b3b6f*/
          goto LABEL_3; /*0x5b3b71*/
        }
      }
    }
    dword_ABEFE8 = (int)&GenericNode::`vftable'; /*0x5b3b7f*/
    if ( &dword_ABEFE8 && dword_ABEFEC && dword_ABEFF0 ) /*0x5b3b98*/
    {
      *(_DWORD *)(dword_ABEFF0 + 4) = dword_ABEFEC; /*0x5b3b9a*/
      *(_DWORD *)(dword_ABEFEC + 8) = dword_ABEFF0; /*0x5b3ba9*/
      v0 = dword_ABEFE0; /*0x5b3bac*/
      dword_ABEFF0 = 0; /*0x5b3bb2*/
      dword_ABEFEC = 0; /*0x5b3bb8*/
    }
    dword_ABEFDC = (int)&GenericNode::`vftable'; /*0x5b3bc3*/
    if ( &dword_ABEFDC && v0 && dword_ABEFE4 ) /*0x5b3bda*/
    {
      *(_DWORD *)(dword_ABEFE4 + 4) = v0; /*0x5b3bdc*/
      *(_DWORD *)(dword_ABEFE0 + 8) = dword_ABEFE4; /*0x5b3beb*/
      dword_ABEFE4 = 0; /*0x5b3bee*/
      dword_ABEFE0 = 0; /*0x5b3bf4*/
    }
  }
}



// ==== 0x005B3C20  MixFileClass::FromFile  this=MixFileClass  sig=csp ====
_DWORD *__thiscall MixFileClass::FromFile(MixFileClass *this, char *Source, int a3)
{
  void *v4; // edi
  bool v5; // zf
  bool v6; // al
  int v7; // eax
  MixHeaderData *v8; // ecx
  int v9; // eax
  int v10; // eax
  int v11; // edi
  GenericNode *v12; // edx
  int v13; // eax
  void *v14; // edi
  GameClass *v16; // [esp+4h] [ebp-1E8h]
  _BYTE v17[6]; // [esp+10h] [ebp-1DCh] BYREF
  int v18[4]; // [esp+18h] [ebp-1D4h] BYREF
  char v19; // [esp+28h] [ebp-1C4h]
  _WORD Src[4]; // [esp+2Ch] [ebp-1C0h] BYREF
  CD v21; // [esp+34h] [ebp-1B8h]
  CCFileClass v22; // [esp+3Ch] [ebp-1B0h] BYREF
  int v23[3]; // [esp+94h] [ebp-158h] BYREF
  int v24; // [esp+A0h] [ebp-14Ch]
  PKStraw v25; // [esp+A8h] [ebp-144h] BYREF

  this->? = 0; /*0x5b3c31*/
  *(_DWORD *)&this->Blowfish = 0; /*0x5b3c34*/
  this->CountFiles = 0; /*0x5b3c37*/
  LOBYTE(this->FileSize) = 0; /*0x5b3c3a*/
  BYTE1(this->FileSize) = 0; /*0x5b3c3d*/
  BYTE2(this->FileSize) = 0; /*0x5b3c40*/
  this->FileStartOffset = 0; /*0x5b3c43*/
  this->Headers = 0; /*0x5b3c46*/
  *(_DWORD *)this->__pad_1C = 0; /*0x5b3c49*/
  *(_DWORD *)&this->__pad_1C[4] = 0; /*0x5b3c4c*/
  this->MixFileClass_field_24 = 0; /*0x5b3c4f*/
  *(_DWORD *)this->Node = &MixFileClass::`vftable'; /*0x5b3c52*/
  v21 = (CD)&CD::`vftable'; /*0x5b3c5d*/
  if ( !(unsigned __int8)CD::`vftable'(dword_81C1D0) ) /*0x5b3c66*/
  {
    GameClass::Shutdown(v16); /*0x5b3c70*/
    ExitProgram((ObjectClass *)1); /*0x5b3c7a*/
  }
  CCFileClass::Construct(&v22, Source); /*0x5b3c8b*/
  this->CountFiles = (int)_strdup(*(const char **)&v22.?); /*0x5b3c9d*/
  v18[1] = 0; /*0x5b3cb2*/
  v18[2] = 0; /*0x5b3cb6*/
  v18[3] = (int)&v22; /*0x5b3cba*/
  v19 = 0; /*0x5b3cbe*/
  v18[0] = (int)&FileStraw::`vftable'; /*0x5b3cc2*/
  PKStrawClass::Initialize((PKStrawClass *)&v25, 1, (int)&stru_A8E7B0); /*0x5b3cca*/
  v4 = v18; /*0x5b3cd4*/
  if ( !(unsigned __int8)CCFileClass::Open(&v22, 0) ) /*0x5b3cd8*/
    goto LABEL_10; /*0x5b3cd8*/
  (*(void (__thiscall **)(int *, _WORD *, int))(v18[0] + 8))(v18, Src, 4); /*0x5b3cf4*/
  if ( Src[0] ) /*0x5b3cfc*/
  {
    memcpy(v17, Src, 4u); /*0x5b3d5b*/
    (*(void (__thiscall **)(int *, _BYTE *, int))(v18[0] + 8))(v18, &v17[4], 2); /*0x5b3d72*/
  }
  else
  {
    v6 = (Src[1] & 2) != 0; /*0x5b3d09*/
    v5 = (Src[1] & 2) == 0; /*0x5b3d09*/
    LOBYTE(this->FileSize) = Src[1] & 1; /*0x5b3d0b*/
    BYTE1(this->FileSize) = v6; /*0x5b3d0e*/
    if ( !v5 ) /*0x5b3d11*/
    {
      PKStrawClass::SetSource((int)&v25, a3); /*0x5b3d22*/
      PKStrawClass::RelayBlowfishKey(&v25, (int)v18); /*0x5b3d33*/
      v4 = &v25; /*0x5b3d38*/
    }
    (*(void (__thiscall **)(void *, _BYTE *, int))(*(_DWORD *)v4 + 8))(v4, v17, 6); /*0x5b3d4a*/
  }
  v7 = *(__int16 *)v17; /*0x5b3d75*/
  v8 = *(MixHeaderData **)&v17[2]; /*0x5b3d7a*/
  this->FileStartOffset = *(__int16 *)v17; /*0x5b3d7e*/
  this->Headers = v8; /*0x5b3d84*/
  v9 = __2_YAPAXI_Z(12 * v7); /*0x5b3d8b*/
  *(_DWORD *)&this->__pad_1C[4] = v9; /*0x5b3d95*/
  if ( v9 ) /*0x5b3d98*/
  {
    (*(void (__thiscall **)(void *, int, int))(*(_DWORD *)v4 + 8))(v4, v9, 12 * this->FileStartOffset); /*0x5b3dc8*/
    v10 = BufferIOFileClass::Seek(&v22, 0, 1u); /*0x5b3dd2*/
    *(_DWORD *)this->__pad_1C = (char *)v22.? + v10; /*0x5b3ddf*/
    v11 = g_MissionQueueFrame.localVariables[347]; /*0x5b3de2*/
    MixFileClass::LinkIntoPool(this); /*0x5b3de8*/
    v12 = *(GenericNode **)(v11 + 4); /*0x5b3ded*/
    *(_DWORD *)&this->Blowfish = v11; /*0x5b3df0*/
    this->? = v12; /*0x5b3df3*/
    v13 = *(_DWORD *)(v11 + 4); /*0x5b3df6*/
    if ( v13 ) /*0x5b3dfb*/
      *(_DWORD *)(v13 + 8) = this; /*0x5b3dfd*/
    *(_DWORD *)(v11 + 4) = this; /*0x5b3e00*/
    v25.m_14 = (int)&BlowStraw::`vftable'; /*0x5b3e0c*/
    v14 = *(void **)&v25.__pad_18[8]; /*0x5b3e17*/
    if ( *(_DWORD *)&v25.__pad_18[8] ) /*0x5b3e19*/
    {
      COMObject::Release(*(COMObject **)&v25.__pad_18[8]); /*0x5b3e1b*/
      __3_YAXPAX_Z(v14); /*0x5b3e21*/
    }
  }
  else
  {
LABEL_10:
    v25.m_14 = (int)&BlowStraw::`vftable'; /*0x5b3da1*/
    if ( *(_DWORD *)&v25.__pad_18[8] ) /*0x5b3dae*/
      MixFileClass::UnlinkFromPool(*(MixFileClass **)&v25.__pad_18[8], 1); /*0x5b3db2*/
  }
  *(_DWORD *)&v25.__pad_18[8] = 0; /*0x5b3e30*/
  Straw::Dtor((Straw *)&v25.m_14); /*0x5b3e37*/
  Straw::Dtor((Straw *)&v25); /*0x5b3e43*/
  FileStraw::Destructor((int)v18); /*0x5b3e4c*/
  *(_DWORD *)v22.CDFileClass = &CCFileClass::`vftable'; /*0x5b3e58*/
  v24 = 0; /*0x5b3e60*/
  Vector::Clear((int)v23); /*0x5b3e67*/
  *(_DWORD *)v22.CDFileClass = &off_7E1668; /*0x5b3e70*/
  BufferIOFileClass::Dtor((BufferIOFileClass *)&v22); /*0x5b3e78*/
  return this->Node; /*0x5b3e7f*/
}



// ==== 0x005B3E90  ObjectClass::method_5B3E90  this=ObjectClass  sig=csp ====
char __thiscall sub_5B3E90(ObjectClass *this)
{
  int i; // esi
  char Filename[256]; // [esp+8h] [ebp-304h] BYREF
  char Ext[256]; // [esp+108h] [ebp-204h] BYREF
  char Buffer[260]; // [esp+208h] [ebp-104h] BYREF

  for ( i = g_MissionQueueFrame.localVariables[343]; ; i = *(_DWORD *)(i + 4) ) /*0x5b3e97*/
  {
    if ( !i || !*(_DWORD *)(i + 4) || !*(_DWORD *)(i + 8) ) /*0x5b3eb3*/
      return 0; /*0x5b3f42*/
    _splitpath(*(const char **)(i + 12), 0, 0, Filename, Ext); /*0x5b3ed3*/
    _makepath(Buffer, 0, 0, Filename, Ext); /*0x5b3ef1*/
    if ( !_strcmpi(Buffer, (char *)this) ) /*0x5b3eff*/
      break; /*0x5b3eff*/
  }
  if ( *(_DWORD *)(i + 36) ) /*0x5b3f14*/
  {
    if ( *(_BYTE *)(i + 18) ) /*0x5b3f1b*/
      __3_YAXPAX_Z(*(void **)(i + 36)); /*0x5b3f23*/
  }
  *(_DWORD *)(i + 36) = 0; /*0x5b3f2b*/
  *(_BYTE *)(i + 18) = 0; /*0x5b3f32*/
  return 1; /*0x5b3f36*/
}



// ==== 0x005B3F50  MixFileClass::method_5B3F50  this=MixFileClass  sig=csp ====
void __thiscall sub_5B3F50(MixFileClass *this)
{
  void *CountFiles; // eax
  void *v3; // eax
  GenericNode *Previous; // ecx
  int v5; // eax
  GenericNode *v6; // ecx
  int v7; // eax

  CountFiles = (void *)this->CountFiles; /*0x5b3f56*/
  *(_DWORD *)this->Node = &MixFileClass::`vftable'; /*0x5b3f59*/
  if ( CountFiles ) /*0x5b3f61*/
    free(CountFiles); /*0x5b3f64*/
  if ( this->MixFileClass_field_24 && BYTE2(this->FileSize) ) /*0x5b3f73*/
  {
    __3_YAXPAX_Z((void *)this->MixFileClass_field_24); /*0x5b3f79*/
    BYTE2(this->FileSize) = 0; /*0x5b3f81*/
  }
  v3 = *(void **)&this->__pad_1C[4]; /*0x5b3f84*/
  this->MixFileClass_field_24 = 0; /*0x5b3f87*/
  if ( v3 ) /*0x5b3f8c*/
  {
    __3_YAXPAX_Z(v3); /*0x5b3f8f*/
    *(_DWORD *)&this->__pad_1C[4] = 0; /*0x5b3f97*/
  }
  if ( this ) /*0x5b3f9c*/
  {
    Previous = this->?; /*0x5b3f9e*/
    if ( Previous ) /*0x5b3fa3*/
    {
      v5 = *(_DWORD *)&this->Blowfish; /*0x5b3fa5*/
      if ( v5 ) /*0x5b3faa*/
      {
        *(_DWORD *)(v5 + 4) = Previous; /*0x5b3fac*/
        *(_DWORD *)this->?[1].__pad_0 = *(_DWORD *)&this->Blowfish; /*0x5b3fb5*/
        *(_DWORD *)&this->Blowfish = 0; /*0x5b3fb8*/
        this->? = 0; /*0x5b3fbb*/
      }
    }
  }
  *(_DWORD *)this->Node = &GenericNode::`vftable'; /*0x5b3fc0*/
  if ( this ) /*0x5b3fc6*/
  {
    v6 = this->?; /*0x5b3fc8*/
    if ( v6 ) /*0x5b3fcd*/
    {
      v7 = *(_DWORD *)&this->Blowfish; /*0x5b3fcf*/
      if ( v7 ) /*0x5b3fd4*/
      {
        *(_DWORD *)(v7 + 4) = v6; /*0x5b3fd6*/
        *(_DWORD *)this->?[1].__pad_0 = *(_DWORD *)&this->Blowfish; /*0x5b3fdf*/
        *(_DWORD *)&this->Blowfish = 0; /*0x5b3fe2*/
        this->? = 0; /*0x5b3fe5*/
      }
    }
  }
}



// ==== 0x005B3FF0  InsertIntoHashTree  this=Coord  sig=csp ====
_DWORD *__fastcall sub_5B3FF0(_DWORD *a1, _DWORD *a2)
{
  _DWORD *result; // eax

  for ( result = (_DWORD *)*a2; *a2; result = (_DWORD *)*a2 ) /*0x5b3ff0*/
  {
    a2 = result + 1; /*0x5b3fff*/
    if ( result[2] >= a1[2] ) /*0x5b4002*/
      a2 = result; /*0x5b4004*/
  }
  *a2 = a1; /*0x5b400d*/
  *a1 = 0; /*0x5b400f*/
  a1[1] = 0; /*0x5b4015*/
  return result; /*0x5b401c*/
}



// ==== 0x005B4080  Tree::Destructor  this=Tree  sig=csp ====
void __thiscall Tree::Destructor(Tree *this)
{
  Tree *v2; // ecx
  Tree *v3; // ecx

  if ( this ) /*0x5b4085*/
  {
    v2 = (Tree *)*this; /*0x5b4087*/
    if ( *this ) /*0x5b4087*/
      Tree::Destructor(v2); /*0x5b408d*/
    v3 = (Tree *)*((_DWORD *)this + 1); /*0x5b4092*/
    if ( v3 ) /*0x5b4097*/
      Tree::Destructor(v3); /*0x5b4099*/
    __3_YAXPAX_Z(this); /*0x5b409f*/
  }
}



// ==== 0x005B40B0  SearchMIXFile  this=char*  sig=csp ====
void *__fastcall SearchMIXFile(char *Source, char a2)
{
  int v3; // edi
  _DWORD *v4; // eax
  int v5; // ecx
  bool v6; // cc
  _DWORD *v8; // eax
  _DWORD *v9; // esi
  _DWORD *v10; // edx
  void *SHPFile; // edi
  ObjectClass *v12; // eax
  Checksummer v14; // [esp+14h] [ebp-17Ch] BYREF
  int v15[3]; // [esp+78h] [ebp-118h] BYREF
  int v16; // [esp+84h] [ebp-10Ch]
  char Str[260]; // [esp+8Ch] [ebp-104h] BYREF

  strcpy(Str, Source); /*0x5b40dd*/
  _strupr(Str); /*0x5b40ee*/
  memset(&v14, 0, 12); /*0x5b4110*/
  v3 = Checksummer::Add_Buffer(&v14, (unsigned __int8 *)Str, strlen(Str)); /*0x5b4127*/
  v4 = dword_ABF00C; /*0x5b4129*/
  if ( !dword_ABF00C ) /*0x5b4130*/
    goto LABEL_9; /*0x5b4130*/
  while ( 1 ) /*0x5b4132*/
  {
    v5 = v4[2]; /*0x5b4132*/
    v6 = v5 < v3; /*0x5b4135*/
    if ( v5 == v3 ) /*0x5b4137*/
      break; /*0x5b4137*/
LABEL_5:
    if ( v6 ) /*0x5b4140*/
      v4 = (_DWORD *)v4[1]; /*0x5b4142*/
    else
      v4 = (_DWORD *)*v4; /*0x5b4147*/
    if ( !v4 ) /*0x5b414b*/
      goto LABEL_9; /*0x5b414b*/
  }
  if ( !v4[3] ) /*0x5b4139*/
  {
    v6 = v5 < v3; /*0x5b413e*/
    goto LABEL_5; /*0x5b413e*/
  }
  if ( v4 ) /*0x5b419d*/
    return (void *)v4[3]; /*0x5b41ac*/
LABEL_9:
  CCFileClass::Construct((CCFileClass *)&v14.buffer, Source); /*0x5b414d*/
  if ( (unsigned __int8)CCFileClass::Open((CCFileClass *)&v14.buffer, 0) ) /*0x5b415c*/
  {
    v8 = (_DWORD *)__2_YAPAXI_Z(0x10u); /*0x5b41af*/
    v9 = v8; /*0x5b41b4*/
    v8[2] = v3; /*0x5b41b9*/
    v10 = dword_ABF00C; /*0x5b41bc*/
    if ( dword_ABF00C ) /*0x5b41c4*/
    {
      if ( *((_DWORD *)dword_ABF00C + 2) < v3 ) /*0x5b41d6*/
        v10 = (char *)dword_ABF00C + 4; /*0x5b41d8*/
      InsertIntoHashTree(v8, v10); /*0x5b41dd*/
    }
    else
    {
      dword_ABF00C = v8; /*0x5b41c6*/
      *v8 = 0; /*0x5b41cc*/
      v8[1] = 0; /*0x5b41ce*/
    }
    if ( a2 || strstr(Str, Ext) ) /*0x5b41f5*/
    {
      v12 = (ObjectClass *)__2_YAPAXI_Z(0x24u); /*0x5b4210*/
      if ( v12 ) /*0x5b421a*/
        SHPFile = LoadSHPFile(v12, Source); /*0x5b4224*/
      else
        SHPFile = 0; /*0x5b4228*/
    }
    else
    {
      SHPFile = CCFileClass::ReadEntireFile((CCFileClass *)&v14.buffer); /*0x5b420a*/
    }
    v9[3] = SHPFile; /*0x5b422a*/
    v14.buffer = (int)&CCFileClass::`vftable'; /*0x5b4231*/
    v16 = 0; /*0x5b4239*/
    Vector::Clear((int)v15); /*0x5b4240*/
    v14.buffer = (int)&off_7E1668; /*0x5b4249*/
    BufferIOFileClass::Dtor((BufferIOFileClass *)&v14.buffer); /*0x5b4251*/
    return SHPFile; /*0x5b4256*/
  }
  else
  {
    v14.buffer = (int)&CCFileClass::`vftable'; /*0x5b4169*/
    v16 = 0; /*0x5b4171*/
    Vector::Clear((int)v15); /*0x5b4178*/
    v14.buffer = (int)&off_7E1668; /*0x5b4181*/
    BufferIOFileClass::Dtor((BufferIOFileClass *)&v14.buffer); /*0x5b4189*/
    return 0; /*0x5b418e*/
  }
}



// ==== 0x005B4270  HashTree::MarkEntry  this=HashTree  sig=csp ====
int __thiscall HashTree_MarkEntry(const char *this)
{
  int result; // eax
  _DWORD *v2; // ecx
  int v3; // edx
  bool v4; // cc
  unsigned int v5[3]; // [esp+8h] [ebp-110h] BYREF
  char String[260]; // [esp+14h] [ebp-104h] BYREF

  strcpy(String, this); /*0x5b4292*/
  _strupr(String); /*0x5b42a0*/
  memset(v5, 0, sizeof(v5)); /*0x5b42bc*/
  result = Checksummer::Add_Buffer(v5, (unsigned __int8 *)String, strlen(String)); /*0x5b42ce*/
  v2 = dword_ABF00C; /*0x5b42d3*/
  if ( dword_ABF00C ) /*0x5b42db*/
  {
    do /*0x5b42dd*/
    {
      v3 = v2[2]; /*0x5b42dd*/
      v4 = v3 < result; /*0x5b42e0*/
      if ( v3 == result ) /*0x5b42e2*/
      {
        if ( v2[3] ) /*0x5b42e4*/
        {
          v2[3] = 0; /*0x5b4301*/
          return result; /*0x5b4301*/
        }
        v4 = v3 < result; /*0x5b42e9*/
      }
      if ( v4 ) /*0x5b42eb*/
        v2 = (_DWORD *)v2[1]; /*0x5b42ed*/
      else
        v2 = (_DWORD *)*v2; /*0x5b42f2*/
    }
    while ( v2 ); /*0x5b42dd*/
  }
  return result; /*0x5b42f8*/
}



// ==== 0x005B4310  WinMainSetup_Setup_5B4310  this=-  sig=ida-proto ====
void sub_5B4310()
{
  _DWORD *v0; // esi
  _DWORD *v1; // ecx

  v0 = dword_ABF00C; /*0x5b4318*/
  if ( dword_ABF00C ) /*0x5b431a*/
  {
    if ( *(_DWORD *)dword_ABF00C ) /*0x5b431c*/
      Tree::Destructor(*(_DWORD **)dword_ABF00C); /*0x5b4324*/
    v1 = (_DWORD *)v0[1]; /*0x5b4329*/
    if ( v1 ) /*0x5b432e*/
      Tree::Destructor(v1); /*0x5b4330*/
    __3_YAXPAX_Z(v0); /*0x5b4336*/
  }
  dword_ABF00C = 0; /*0x5b433e*/
}



// ==== 0x005B4350  ObjectClass::method_5B4350  this=ObjectClass  sig=csp ====
int __thiscall sub_5B4350(ObjectClass *this)
{
  int i; // esi
  char Filename[256]; // [esp+8h] [ebp-304h] BYREF
  char Ext[256]; // [esp+108h] [ebp-204h] BYREF
  char Buffer[260]; // [esp+208h] [ebp-104h] BYREF

  for ( i = g_MissionQueueFrame.localVariables[343]; i && *(_DWORD *)(i + 4) && *(_DWORD *)(i + 8); i = *(_DWORD *)(i + 4) ) /*0x5b4357*/
  {
    _splitpath(*(const char **)(i + 12), 0, 0, Filename, Ext); /*0x5b4387*/
    _makepath(Buffer, 0, 0, Filename, Ext); /*0x5b43a5*/
    if ( !_strcmpi(Buffer, (char *)this) ) /*0x5b43bd*/
      return i; /*0x5b43ce*/
  }
  return 0; /*0x5b43c6*/
}



// ==== 0x005B43E0  ObjectClass::?do_always_noconv_codecvt_base_std__MBE_NXZ_7  this=ObjectClass  sig=csp ====
char __thiscall _do_always_noconv_codecvt_base_std__MBE_NXZ_7(std::codecvt_base *this)
{
  return 1; /*0x5b43e2*/
}



// ==== 0x005B43F0  ReturnTrue  this=MixFileClass  sig=csp ====
int __stdcall ReturnTrue(int a1)
{
  int result; // eax

  LOBYTE(result) = 1; /*0x5b43f0*/
  return result; /*0x5b43f2*/
}



// ==== 0x005B4400  ObjectClass::method_5B4400  this=ObjectClass  sig=csp ====
void __thiscall sub_5B4400(ObjectClass *this)
{
  if ( this->occupant && BYTE2(this->?) ) /*0x5b440d*/
    __3_YAXPAX_Z((void *)this->occupant); /*0x5b4413*/
  this->occupant = 0; /*0x5b441b*/
  BYTE2(this->?) = 0; /*0x5b441e*/
}



// ==== 0x005B4430  LookupFileInfoCache  this=-  sig=csp ====
char __fastcall FileInfoCache_Lookup(const char *a1, _DWORD *a2, _DWORD *a3, _DWORD *a4, _DWORD *a5)
{
  int v5; // eax
  _DWORD *v6; // ebp
  int v7; // ecx
  int v8; // edi
  int v9; // esi
  int v10; // edx
  int v11; // eax
  unsigned int v14[3]; // [esp+18h] [ebp-110h] BYREF
  char String[260]; // [esp+24h] [ebp-104h] BYREF

  if ( !a1 ) /*0x5b4442*/
    return 0; /*0x5b4442*/
  strcpy(String, a1); /*0x5b4462*/
  _strupr(String); /*0x5b4470*/
  memset(v14, 0, sizeof(v14)); /*0x5b4490*/
  v5 = Checksummer::Add_Buffer(v14, (unsigned __int8 *)String, strlen(String)); /*0x5b449c*/
  v6 = (_DWORD *)dword_ABEFE0; /*0x5b44a1*/
LABEL_3:
  while ( 2 ) /*0x5b44c0*/
  {
    if ( !v6 || !v6[1] || !v6[2] ) /*0x5b44c0*/
      return 0; /*0x5b4580*/
    v7 = v6[5]; /*0x5b44cb*/
    v8 = v6[8]; /*0x5b44ce*/
    if ( v7 <= 0 ) /*0x5b44d3*/
      goto LABEL_14; /*0x5b44d3*/
    while ( 1 ) /*0x5b44df*/
    {
      v9 = *(_DWORD *)(v8 + 12 * (v7 / 2)); /*0x5b44df*/
      v10 = v8 + 12 * (v7 / 2); /*0x5b44e2*/
      if ( v9 <= v5 ) /*0x5b44e7*/
        break; /*0x5b44e7*/
      v7 /= 2; /*0x5b44e9*/
LABEL_11:
      if ( v7 <= 0 ) /*0x5b44fb*/
      {
        v6 = (_DWORD *)v6[1]; /*0x5b44fd*/
        goto LABEL_3; /*0x5b4501*/
      }
    }
    if ( v9 != v5 ) /*0x5b44ed*/
    {
      v8 = v10 + 12; /*0x5b44ef*/
      v7 += -1 - v7 / 2; /*0x5b44f7*/
      goto LABEL_11; /*0x5b44f7*/
    }
    if ( !v10 ) /*0x5b4505*/
    {
LABEL_14:
      v6 = (_DWORD *)v6[1]; /*0x5b4507*/
      continue; /*0x5b450b*/
    }
    break;
  }
  if ( a3 ) /*0x5b4516*/
    *a3 = v6; /*0x5b4518*/
  if ( a5 ) /*0x5b4523*/
    *a5 = *(_DWORD *)(v10 + 8); /*0x5b4528*/
  if ( a2 ) /*0x5b4530*/
    *a2 = 0; /*0x5b4532*/
  if ( a4 ) /*0x5b4541*/
    *a4 = *(_DWORD *)(v10 + 4); /*0x5b4546*/
  if ( a2 ) /*0x5b454a*/
  {
    v11 = v6[9]; /*0x5b454c*/
    if ( v11 ) /*0x5b4551*/
      *a2 = v11 + *(_DWORD *)(v10 + 4); /*0x5b4558*/
  }
  if ( !v6[9] ) /*0x5b455a*/
  {
    if ( a4 ) /*0x5b4563*/
      *a4 += v6[7]; /*0x5b456c*/
  }
  return 1; /*0x5b456e*/
}



// ==== 0x005B4590  MixFileClass::LinkIntoPool  this=MixFileClass  sig=csp ====
void __thiscall MixFileClass::LinkIntoPool(MixFileClass *this)
{
  GenericNode *Previous; // edx
  int v2; // eax

  if ( this ) /*0x5b4592*/
  {
    Previous = this->?; /*0x5b4594*/
    if ( Previous ) /*0x5b4599*/
    {
      v2 = *(_DWORD *)&this->Blowfish; /*0x5b459b*/
      if ( v2 ) /*0x5b45a0*/
      {
        *(_DWORD *)(v2 + 4) = Previous; /*0x5b45a2*/
        *(_DWORD *)this->?[1].__pad_0 = *(_DWORD *)&this->Blowfish; /*0x5b45ab*/
        *(_DWORD *)&this->Blowfish = 0; /*0x5b45ae*/
        this->? = 0; /*0x5b45b5*/
      }
    }
  }
}



// ==== 0x005B45C0  BlowStraw::QueryInterface  this=BlowStraw  sig=csp ====
_DWORD *__thiscall BlowStraw::QueryInterface(BlowStraw *this, char a2)
{
  COMObject *v3; // edi

  v3 = (COMObject *)*((_DWORD *)this + 3); /*0x5b45c4*/
  *(_DWORD *)this->__pad_0 = &BlowStraw::`vftable'; /*0x5b45c7*/
  if ( v3 ) /*0x5b45cf*/
  {
    COMObject::Release(v3); /*0x5b45d3*/
    __3_YAXPAX_Z(v3); /*0x5b45d9*/
  }
  *((_DWORD *)this + 3) = 0; /*0x5b45e3*/
  Straw::Dtor((Straw *)this); /*0x5b45ea*/
  if ( (a2 & 1) != 0 ) /*0x5b45f4*/
    __3_YAXPAX_Z(this); /*0x5b45f7*/
  return this->__pad_0; /*0x5b4601*/
}



// ==== 0x005B4610  MixFileClass::UnlinkFromPool  this=MixFileClass  sig=csp ====
int *__thiscall MixFileClass::UnlinkFromPool(MixFileClass *this, char a2)
{
  COMObject::Release((COMObject *)this); /*0x5b4613*/
  if ( (a2 & 1) != 0 ) /*0x5b461d*/
    __3_YAXPAX_Z(this); /*0x5b4620*/
  return (int *)this->Node; /*0x5b462a*/
}



// ==== 0x005B4630  MixFileClass::Constructor_MixFileClass  this=MixFileClass  sig=csp ====
void *__thiscall BlowStraw::Constructor_MixFileClass(MixFileClass *this, char a2)
{
  void *CountFiles; // eax
  void *v4; // eax
  GenericNode *Previous; // ecx
  int v6; // eax
  GenericNode *v7; // ecx
  int v8; // eax

  CountFiles = (void *)this->CountFiles; /*0x5b4636*/
  *(_DWORD *)this->Node = &MixFileClass::`vftable'; /*0x5b4639*/
  if ( CountFiles ) /*0x5b4641*/
    free(CountFiles); /*0x5b4644*/
  if ( this->MixFileClass_field_24 && BYTE2(this->FileSize) ) /*0x5b4653*/
  {
    __3_YAXPAX_Z((void *)this->MixFileClass_field_24); /*0x5b4659*/
    BYTE2(this->FileSize) = 0; /*0x5b4661*/
  }
  v4 = *(void **)&this->__pad_1C[4]; /*0x5b4664*/
  this->MixFileClass_field_24 = 0; /*0x5b4667*/
  if ( v4 ) /*0x5b466c*/
  {
    __3_YAXPAX_Z(v4); /*0x5b466f*/
    *(_DWORD *)&this->__pad_1C[4] = 0; /*0x5b4677*/
  }
  if ( this ) /*0x5b467c*/
  {
    Previous = this->?; /*0x5b467e*/
    if ( Previous ) /*0x5b4683*/
    {
      v6 = *(_DWORD *)&this->Blowfish; /*0x5b4685*/
      if ( v6 ) /*0x5b468a*/
      {
        *(_DWORD *)(v6 + 4) = Previous; /*0x5b468c*/
        *(_DWORD *)this->?[1].__pad_0 = *(_DWORD *)&this->Blowfish; /*0x5b4695*/
        *(_DWORD *)&this->Blowfish = 0; /*0x5b4698*/
        this->? = 0; /*0x5b469b*/
      }
    }
  }
  *(_DWORD *)this->Node = &GenericNode::`vftable'; /*0x5b46a0*/
  if ( this ) /*0x5b46a6*/
  {
    v7 = this->?; /*0x5b46a8*/
    if ( v7 ) /*0x5b46ad*/
    {
      v8 = *(_DWORD *)&this->Blowfish; /*0x5b46af*/
      if ( v8 ) /*0x5b46b4*/
      {
        *(_DWORD *)(v8 + 4) = v7; /*0x5b46b6*/
        *(_DWORD *)this->?[1].__pad_0 = *(_DWORD *)&this->Blowfish; /*0x5b46bf*/
        *(_DWORD *)&this->Blowfish = 0; /*0x5b46c2*/
        this->? = 0; /*0x5b46c5*/
      }
    }
  }
  if ( (a2 & 1) != 0 ) /*0x5b46cd*/
    __3_YAXPAX_Z(this); /*0x5b46d0*/
  return this; /*0x5b46da*/
}



// ==== 0x005B46E0  AbstractClass::getWeaponSpeed  this=GenericList  sig=csp ====
_DWORD *__thiscall AbstractClass::getWeaponSpeed(AbstractClass *this, char a2)
{
  _DWORD *ptr_8; // eax
  int v4; // ecx
  int v5; // edx
  int abstractFlags; // edx
  int nextArrayIndex; // ecx
  void *v8; // edx
  _DWORD *ptr_C; // ecx

  this->ptr_0 = &GenericList::`vftable'; /*0x5b46e6*/
  while ( 1 ) /*0x5b46ec*/
  {
    ptr_8 = this->ptr_8; /*0x5b46ec*/
    if ( !ptr_8 ) /*0x5b46f1*/
      break; /*0x5b46f1*/
    if ( !ptr_8[1] ) /*0x5b46f3*/
      break; /*0x5b46f3*/
    v4 = ptr_8[2]; /*0x5b46f8*/
    if ( !v4 ) /*0x5b46fd*/
      break; /*0x5b46fd*/
    v5 = ptr_8[1]; /*0x5b4703*/
    if ( v5 ) /*0x5b4708*/
    {
      *(_DWORD *)(v4 + 4) = v5; /*0x5b470e*/
      *(_DWORD *)(ptr_8[1] + 8) = ptr_8[2]; /*0x5b4717*/
      ptr_8[2] = 0; /*0x5b471a*/
      ptr_8[1] = 0; /*0x5b471d*/
    }
  }
  this->uniqueId = (int)&GenericNode::`vftable'; /*0x5b4727*/
  if ( this != (AbstractClass *)-16 ) /*0x5b472d*/
  {
    abstractFlags = this->abstractFlags; /*0x5b472f*/
    if ( abstractFlags ) /*0x5b4734*/
    {
      nextArrayIndex = this->nextArrayIndex; /*0x5b4736*/
      if ( nextArrayIndex ) /*0x5b473b*/
      {
        *(_DWORD *)(nextArrayIndex + 4) = abstractFlags; /*0x5b473d*/
        *(_DWORD *)(this->abstractFlags + 8) = this->nextArrayIndex; /*0x5b4746*/
        this->nextArrayIndex = 0; /*0x5b4749*/
        this->abstractFlags = 0; /*0x5b474c*/
      }
    }
  }
  this->ptr_4 = &GenericNode::`vftable'; /*0x5b4754*/
  if ( this != (AbstractClass *)-4 ) /*0x5b475a*/
  {
    v8 = this->ptr_8; /*0x5b475c*/
    if ( v8 ) /*0x5b4761*/
    {
      ptr_C = this->ptr_C; /*0x5b4763*/
      if ( ptr_C ) /*0x5b4768*/
      {
        ptr_C[1] = v8; /*0x5b476a*/
        *((_DWORD *)this->ptr_8 + 2) = this->ptr_C; /*0x5b4773*/
        this->ptr_C = 0; /*0x5b4776*/
        this->ptr_8 = 0; /*0x5b4779*/
      }
    }
  }
  if ( (a2 & 1) != 0 ) /*0x5b4781*/
    __3_YAXPAX_Z(this); /*0x5b4784*/
  return &this->ptr_0; /*0x5b478e*/
}



// ==== 0x005B47A0  sub_5B47A0  this=-  sig=ida-proto ====
int sub_5B47A0()
{
  dword_ABF018 = 0; /*0x5b47a2*/
  dword_ABF01C = 0; /*0x5b47a7*/
  dword_ABF020 = 0; /*0x5b47ac*/
  dword_ABF024 = 0; /*0x5b47b1*/
  return 0; /*0x5b47b6*/
}



// ==== 0x005B47C0  sub_5B47C0  this=-  sig=ida-proto ====
void sub_5B47C0()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x5b47cc*/
  dbl_ABF030 = Math::Sqrt(v0 + v0); /*0x5b47de*/
}



// ==== 0x005B47F0  sub_5B47F0  this=-  sig=ida-proto ====
void sub_5B47F0()
{
  dbl_ABF080 = dbl_ABF030 / 60.0; /*0x5b47fc*/
}



// ==== 0x005B4810  sub_5B4810  this=-  sig=ida-proto ====
void sub_5B4810()
{
  dbl_ABF068 = 1.0 / dbl_ABF080; /*0x5b481c*/
}



// ==== 0x005B4830  sub_5B4830  this=-  sig=ida-proto ====
void sub_5B4830()
{
  dbl_ABF060 = 0.0174532925199433 * 45.0; /*0x5b483c*/
}



// ==== 0x005B4850  sub_5B4850  this=-  sig=ida-proto ====
void sub_5B4850()
{
  dbl_ABF038 = 0.0174532925199433 * 60.0; /*0x5b485c*/
}



// ==== 0x005B4870  sub_5B4870  this=-  sig=ida-proto ====
void sub_5B4870()
{
  dbl_ABF010 = 0.0174532925199433 * 90.0; /*0x5b487c*/
}



// ==== 0x005B4890  sub_5B4890  this=-  sig=ida-proto ====
__int64 sub_5B4890()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_ABF010 - dbl_ABF038); /*0x5b48a2*/
  result = Math::RoundToInt(v0 * dbl_ABF030 * 0.5); /*0x5b48b6*/
  dword_ABF088 = result; /*0x5b48bb*/
  return result; /*0x5b48c0*/
}



// ==== 0x005B48D0  sub_5B48D0  this=-  sig=ida-proto ====
void sub_5B48D0()
{
  dbl_ABF040 = Math::ArcTan((double)dword_ABF088 * 0.00390625); /*0x5b48e7*/
}



// ==== 0x005B4900  sub_5B4900  this=-  sig=ida-proto ====
void sub_5B4900()
{
  dbl_ABF058 = Math::ArcTan((double)(2 * dword_ABF088) / dbl_ABF030); /*0x5b4922*/
}



// ==== 0x005B4930  sub_5B4930  this=-  sig=ida-proto ====
__int64 sub_5B4930()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_ABF088) + 0.5); /*0x5b494b*/
  dword_ABF07C = result; /*0x5b4950*/
  return result; /*0x5b4956*/
}



// ==== 0x005B4960  sub_5B4960  this=-  sig=ida-proto ====
int sub_5B4960()
{
  word_ABF028 = 0; /*0x5b4962*/
  word_ABF02A = 0; /*0x5b4968*/
  return 0; /*0x5b496e*/
}



// ==== 0x005B4970  sub_5B4970  this=-  sig=ida-proto ====
int sub_5B4970()
{
  dword_ABF048 = 0; /*0x5b4972*/
  dword_ABF04C = 0; /*0x5b4977*/
  dword_ABF050 = 0; /*0x5b497c*/
  return 0; /*0x5b4981*/
}



// ==== 0x005B4990  sub_5B4990  this=-  sig=ida-proto ====
int sub_5B4990()
{
  dword_ABF078 = 0; /*0x5b4995*/
  dword_ABF070 = 128; /*0x5b499f*/
  dword_ABF074 = 128; /*0x5b49a4*/
  return 128; /*0x5b49a9*/
}



// ==== 0x005B49B0  ModemGuest::Dialog  this=ModemGuest  sig=csp ====
char __thiscall ModemGuest::Dialog(ModemGuest *this)
{
  HWND Dialog; // eax
  int v3; // edi
  int v4; // edi
  TechnoTypeClass *v5; // ecx
  int ModemGuest_field_0x04; // eax
  char v7; // bl
  int v9; // [esp+0h] [ebp-10h]

  Debug::Log(); /*0x5b49c1*/
  this->ModemGuest_field_0x04 = -1; /*0x5b49d7*/
  Dialog = (HWND)CreateDialog(0xF2u, (INT_PTR (__stdcall *)(HWND, UINT, WPARAM, LPARAM))GameSetupDialogProc, 0); /*0x5b49da*/
  *(_DWORD *)this->__pad_0 = Dialog; /*0x5b49e1*/
  if ( !Dialog ) /*0x5b49e3*/
  {
LABEL_16:
    v7 = 0; /*0x5b4af1*/
    goto LABEL_17; /*0x5b4af1*/
  }
  SetWindowLongA(Dialog, 8, (LONG)this); /*0x5b49ee*/
  ModemGuest::InitDialog(this); /*0x5b49f6*/
  Dialog::Show(*(Dialog **)this->__pad_0); /*0x5b49fd*/
  LOBYTE(this->ModemGuest_field_0x08) = 0; /*0x5b4a02*/
  BYTE1(this->ModemGuest_field_0x08) = 1; /*0x5b4a05*/
  v3 = *(_DWORD *)&stru_88732C.__pad_6[14]; /*0x5b4a0e*/
  if ( *(_DWORD *)&stru_88732C.__pad_6[6] != -1 ) /*0x5b4a16*/
    v3 += Timer::GetTicks() - *(_DWORD *)&stru_88732C.__pad_6[6]; /*0x5b4a28*/
  this->ModemGuest_field_0x0C = v3; /*0x5b4a2a*/
  this->q004 = 10000; /*0x5b4a2d*/
  v4 = *(_DWORD *)&stru_88732C.__pad_6[14]; /*0x5b4a39*/
  if ( *(_DWORD *)&stru_88732C.__pad_6[6] != -1 ) /*0x5b4a41*/
    v4 += Timer::GetTicks() - *(_DWORD *)&stru_88732C.__pad_6[6]; /*0x5b4a53*/
  *((_DWORD *)this + 5) = v4; /*0x5b4a55*/
  *((_DWORD *)this + 6) = 1200; /*0x5b4a58*/
  *((_DWORD *)this + 7) = 0; /*0x5b4a5f*/
  this->q004 = 0; /*0x5b4a62*/
  *((_DWORD *)this + 18) = -1; /*0x5b4a66*/
  *((_DWORD *)this + 19) = -1; /*0x5b4a69*/
  *((_DWORD *)this + 20) = GameConfig::ComputeHash(); /*0x5b4a71*/
  LoadArtINI(); /*0x5b4a74*/
  *((_DWORD *)this + 21) = unknown_libname_29(); /*0x5b4a7e*/
  *((_DWORD *)this + 22) = unknown_libname_30(); /*0x5b4a86*/
  while ( this->ModemGuest_field_0x04 < 0 ) /*0x5b4a8f*/
  {
    if ( (unsigned __int8)Dialog::PumpMessages() == 1 ) /*0x5b4a98*/
      break; /*0x5b4a98*/
    CellClass::LockSurface((int)this, 0); /*0x5b4a9d*/
    if ( ModemGame::ProcessPacket((ModemGame *)this) == 1 ) /*0x5b4aab*/
      break; /*0x5b4aab*/
    LOBYTE(v5) = 0; /*0x5b4aad*/
    ScreenSaver::Process(v5, v9); /*0x5b4aaf*/
  }
  Dialog::Destroy(*(Dialog **)this->__pad_0); /*0x5b4abb*/
  if ( LOBYTE(this->ModemGuest_field_0x08) == 1 ) /*0x5b4ac4*/
    SaveConfigWOL((ObjectClass *)&dword_A8B238); /*0x5b4acb*/
  ModemGuest_field_0x04 = this->ModemGuest_field_0x04; /*0x5b4ad0*/
  if ( ModemGuest_field_0x04 != 1 ) /*0x5b4ad6*/
  {
    if ( ModemGuest_field_0x04 == 2 ) /*0x5b4ae4*/
      ReadEventINI(); /*0x5b4aec*/
    goto LABEL_16; /*0x5b4aec*/
  }
  v7 = 1; /*0x5b4ad8*/
LABEL_17:
  Debug::Log(); /*0x5b4afa*/
  return v7; /*0x5b4b0a*/
}



// ==== 0x005B4B10  GameSetupDialogProc  this=-  sig=csp ====
int __stdcall GameSetupDialogProc(HWND hWnd, unsigned int a2, unsigned int a3, unsigned int a4)
{
  int result; // eax
  LONG WindowLongA; // ebp
  HWND v6; // eax
  HWND DlgItem; // eax
  HWND v8; // esi
  char *v9; // eax
  HWND v10; // eax
  HWND v11; // esi
  LRESULT v12; // eax
  HWND v13; // eax
  HWND v14; // edi
  void *v15; // esi
  int v16; // [esp-4h] [ebp-338h] BYREF
  wchar_t v17[22]; // [esp+Ch] [ebp-328h] BYREF
  _DWORD v18[62]; // [esp+38h] [ebp-2FCh] BYREF
  __int16 v19; // [esp+130h] [ebp-204h]
  wchar_t lParam[256]; // [esp+134h] [ebp-200h] BYREF

  result = BaseDialogProc(hWnd, a2, a3, a4); /*0x5b4b38*/
  if ( result ) /*0x5b4b3f*/
    return result; /*0x5b4b3f*/
  WindowLongA = GetWindowLongA(hWnd, 8); /*0x5b4b4f*/
  switch ( a2 ) /*0x5b4b56*/
  {
    case 2u: /*0x5b4b56*/
      v15 = g_UIControlState; /*0x5b4ead*/
      if ( g_UIControlState ) /*0x5b4eb5*/
      {
        ComPtr::Dtor(g_UIControlState); /*0x5b4eb9*/
        __3_YAXPAX_Z(v15); /*0x5b4ebf*/
        g_UIControlState = 0; /*0x5b4ec7*/
      }
      return 0; /*0x5b4ec7*/
    case 0xFu: /*0x5b4b56*/
      if ( g_UIControlState ) /*0x5b4e8d*/
        Skirmish::RenderPreview(g_UIControlState, hWnd); /*0x5b4e90*/
      ValidateRect(hWnd, 0); /*0x5b4e98*/
      return 0; /*0x5b4ea1*/
    case 0x111u: /*0x5b4b56*/
      if ( (unsigned __int16)a3 <= 0x540u ) /*0x5b4b7c*/
      {
        if ( (unsigned __int16)a3 == 1344 ) /*0x5b4b82*/
        {
          if ( HIWORD(a3) == 1281 ) /*0x5b4c4b*/
          {
            DlgItem = GetDlgItem(*(HWND *)WindowLongA, 1344); /*0x5b4c5a*/
            v8 = DlgItem; /*0x5b4c60*/
            if ( DlgItem ) /*0x5b4c64*/
            {
              SendMessageA(DlgItem, 0x4B3u, 0x100u, (LPARAM)lParam); /*0x5b4c83*/
              SendMessageA(v8, 0x4B2u, 0, (LPARAM)&g_TypeClass_DefaultString); /*0x5b4c92*/
              if ( wcslen(lParam) ) /*0x5b4c9c*/
              {
                if ( lParam[0] != 13 ) /*0x5b4cb5*/
                {
                  WideString::Trim(lParam); /*0x5b4cc2*/
                  if ( &v16 != (int *)-312 ) /*0x5b4cd0*/
                  {
                    memset(v18, 0, sizeof(v18)); /*0x5b4ce5*/
                    v19 = 0; /*0x5b4ce7*/
                    v18[0] = 104; /*0x5b4cf3*/
                    strcpy((char *)&v18[1], unk_A8B380); /*0x5b4d11*/
                    LOBYTE(v18[6]) = dword_A8B394; /*0x5b4d26*/
                    wcscpy((wchar_t *)((char *)&v18[6] + 1), lParam); /*0x5b4d2a*/
                    Stream::WriteBlock((int)&unk_A8EA70, (int)v18, 250, 1); /*0x5b4d43*/
                    Stream::ReadPacket((int)&unk_A8EA70); /*0x5b4d4d*/
                    v9 = CharToWideString(unk_A8B380); /*0x5b4d57*/
                    UI_Setup((wchar_t *)v9, dword_A8B394, (int)lParam); /*0x5b4d6e*/
                    return 0; /*0x5b4d7f*/
                  }
                }
              }
            }
          }
          return 0; /*0x5b4cd0*/
        }
        if ( (unsigned __int16)a3 != 1 ) /*0x5b4b89*/
        {
          if ( (unsigned __int16)a3 == 2 ) /*0x5b4b8c*/
          {
            if ( !HIWORD(a3) ) /*0x5b4bbb*/
            {
              Game::processStartup(WindowLongA); /*0x5b4bc6*/
              *(_DWORD *)(WindowLongA + 4) = 2; /*0x5b4bcb*/
              return 0; /*0x5b4bde*/
            }
          }
          else if ( (unsigned __int16)a3 == 1029 && HIWORD(a3) == 1 ) /*0x5b4b9f*/
          {
            ModemGame::AdvanceTauntCommand(WindowLongA); /*0x5b4ba7*/
            return 0; /*0x5b4bb8*/
          }
          return 0; /*0x5b4b9f*/
        }
        if ( !HIWORD(a3) ) /*0x5b4be1*/
        {
          v6 = GetDlgItem(*(HWND *)WindowLongA, 1); /*0x5b4bf4*/
          if ( v6 ) /*0x5b4bfc*/
            EnableWindow(v6, 0); /*0x5b4c01*/
          memset(v18, 0, sizeof(v18)); /*0x5b4c13*/
          v19 = 0; /*0x5b4c1e*/
          v18[0] = 116; /*0x5b4c26*/
          Stream::WriteBlock((int)&unk_A8EA70, (int)v18, 250, 1); /*0x5b4c2e*/
          return 0; /*0x5b4c3f*/
        }
        return 0; /*0x5b4ed1*/
      }
      if ( (unsigned __int16)a3 != 1473 ) /*0x5b4d87*/
      {
        if ( (unsigned __int16)a3 == 1639 && HIWORD(a3) == 1 ) /*0x5b4d9e*/
        {
          v10 = GetDlgItem(*(HWND *)WindowLongA, 1639); /*0x5b4da9*/
          v11 = v10; /*0x5b4daf*/
          if ( v10 ) /*0x5b4db3*/
          {
            v12 = SendMessageA(v10, 0x147u, 0, 0); /*0x5b4dc9*/
            if ( v12 != -1 ) /*0x5b4dce*/
            {
              dword_A8B3AC = SendMessageA(v11, 0x150u, v12, 0); /*0x5b4ddf*/
              *(_BYTE *)(WindowLongA + 9) = 1; /*0x5b4de4*/
              *(_BYTE *)(WindowLongA + 8) = 1; /*0x5b4de7*/
              return 0; /*0x5b4df6*/
            }
          }
        }
        return 0; /*0x5b4dce*/
      }
      if ( HIWORD(a3) != 1281 && HIWORD(a3) != 768 ) /*0x5b4e08*/
        return 0; /*0x5b4e08*/
      v13 = GetDlgItem(*(HWND *)WindowLongA, 1473); /*0x5b4e17*/
      v14 = v13; /*0x5b4e1d*/
      if ( !v13 ) /*0x5b4e21*/
        return 0; /*0x5b4e21*/
      SendMessageA(v13, 0x4B3u, 0x15u, (LPARAM)v17); /*0x5b4e3a*/
      WideString::Trim(v17); /*0x5b4e40*/
      if ( HIWORD(a3) != 768 ) /*0x5b4e4a*/
        SendMessageA(v14, 0x4B2u, 0, (LPARAM)v17); /*0x5b4e59*/
      CopyWideToChar(unk_A8B380, (char *)v17, -1); /*0x5b4e66*/
      *(_BYTE *)(WindowLongA + 9) = 1; /*0x5b4e72*/
      *(_BYTE *)(WindowLongA + 8) = 1; /*0x5b4e75*/
      return 0; /*0x5b4e70*/
    default:
      return 0; /*0x5b4b6a*/
  }
}



// ==== 0x005B4EE0  ModemGuest::InitDialog  this=ModemGuest  sig=csp ====
void __thiscall ModemGuest::InitDialog(ModemGuest *this)
{
  HWND *v1; // ebp
  HWND (__stdcall *v2)(HWND, int); // ebx
  HWND DlgItem; // eax
  HWND v4; // edi
  char *v5; // eax
  HWND v6; // eax
  HWND v7; // edi
  wchar_t *StringCSF; // eax
  wchar_t *v9; // eax
  wchar_t *v10; // eax
  wchar_t *v11; // eax
  wchar_t *v12; // eax
  wchar_t *v13; // eax
  wchar_t *v14; // eax
  wchar_t *v15; // eax
  WPARAM v16; // ebx
  LPARAM *v17; // ebp
  HWND v18; // eax
  HWND v19; // edi
  LPARAM i; // ebx
  int v21; // eax
  LRESULT v22; // eax
  WPARAM ListBoxItem; // eax
  HWND v24; // edi
  HWND v25; // eax
  HWND v26; // edi
  HWND v27; // edi
  HWND v28; // eax
  HWND v29; // edi
  HWND v30; // eax
  HWND v31; // edi
  HWND v32; // eax
  HWND v33; // edi
  HWND v34; // eax
  HWND v35; // eax
  HWND v36; // eax
  HWND v37; // eax
  HWND v38; // eax
  HWND v39; // eax
  HWND v40; // eax
  HWND v41; // eax
  HWND v42; // eax
  HWND v43; // eax
  Skirmish *v44; // esi
  HWND v45; // esi
  wchar_t Buffer[256]; // [esp+14h] [ebp-A00h] BYREF
  wchar_t Format[1024]; // [esp+214h] [ebp-800h] BYREF

  v1 = (HWND *)this; /*0x5b4eea*/
  Debug::Log(); /*0x5b4ef5*/
  v2 = GetDlgItem; /*0x5b4efd*/
  DlgItem = GetDlgItem(*v1, 1473); /*0x5b4f0c*/
  v4 = DlgItem; /*0x5b4f14*/
  if ( DlgItem ) /*0x5b4f18*/
  {
    SendMessageA(DlgItem, 0xC5u, 0x13u, 0); /*0x5b4f24*/
    v5 = CharToWideString(unk_A8B380); /*0x5b4f2b*/
    SendMessageA(v4, 0x4B2u, 0, (LPARAM)v5); /*0x5b4f39*/
  }
  Debug::Log(); /*0x5b4f45*/
  v6 = GetDlgItem(*v1, 1029); /*0x5b4f56*/
  v7 = v6; /*0x5b4f58*/
  if ( v6 ) /*0x5b4f5c*/
  {
    SendMessageA(v6, 0x14Bu, 0, 0); /*0x5b4f6c*/
    StringCSF = GetStringCSF((wchar_t *)&stru_82BA00.?[37], 0, (const char *)&stru_82BA00.?[40], 280); /*0x5b4f7f*/
    SendMessageA(v7, 0x4C1u, 0xFFFFFFFF, (LPARAM)StringCSF); /*0x5b4f8d*/
    v9 = GetStringCSF((wchar_t *)&stru_82BA00.?[35], 0, (const char *)&stru_82BA00.?[40], 281); /*0x5b4fa0*/
    SendMessageA(v7, 0x4C1u, 0xFFFFFFFF, (LPARAM)v9); /*0x5b4fae*/
    v10 = GetStringCSF((wchar_t *)&stru_82BA00.?[32], 0, (const char *)&stru_82BA00.?[40], 282); /*0x5b4fc1*/
    SendMessageA(v7, 0x4C1u, 0xFFFFFFFF, (LPARAM)v10); /*0x5b4fcf*/
    v11 = GetStringCSF((wchar_t *)&stru_82BA00.?[29], 0, (const char *)&stru_82BA00.?[40], 283); /*0x5b4fe2*/
    SendMessageA(v7, 0x4C1u, 0xFFFFFFFF, (LPARAM)v11); /*0x5b4ff0*/
    v12 = GetStringCSF((wchar_t *)&stru_82BA00.?[26], 0, (const char *)&stru_82BA00.?[40], 284); /*0x5b5003*/
    SendMessageA(v7, 0x4C1u, 0xFFFFFFFF, (LPARAM)v12); /*0x5b5011*/
    v13 = GetStringCSF((wchar_t *)&stru_82BA00.?[22], 0, (const char *)&stru_82BA00.?[40], 285); /*0x5b5024*/
    SendMessageA(v7, 0x4C1u, 0xFFFFFFFF, (LPARAM)v13); /*0x5b5032*/
    v14 = GetStringCSF((wchar_t *)&stru_82BA00.?[19], 0, (const char *)&stru_82BA00.?[40], 286); /*0x5b5045*/
    SendMessageA(v7, 0x4C1u, 0xFFFFFFFF, (LPARAM)v14); /*0x5b5053*/
    v15 = GetStringCSF((wchar_t *)&stru_82BA00.?[16], 0, (const char *)&stru_82BA00.?[40], 287); /*0x5b5066*/
    SendMessageA(v7, 0x4C1u, 0xFFFFFFFF, (LPARAM)v15); /*0x5b5074*/
    v16 = 0; /*0x5b5076*/
    v17 = dword_8316A8; /*0x5b5078*/
    do /*0x5b5094*/
      SendMessageA(v7, 0x498u, v16++, *v17++); /*0x5b5088*/
    while ( (int)v17 < (int)&off_8316C8 ); /*0x5b5094*/
    dword_A8B394 = dword_A8B3B4; /*0x5b50a4*/
    SendMessageA(v7, 0x14Eu, dword_A8B3B4, 0); /*0x5b50a9*/
    v1 = (HWND *)this; /*0x5b50ab*/
    v2 = GetDlgItem; /*0x5b50af*/
  }
  Debug::Log(); /*0x5b50c0*/
  v18 = v2(*v1, 1639); /*0x5b50d1*/
  v19 = v18; /*0x5b50d3*/
  if ( v18 ) /*0x5b50d7*/
  {
    SendMessageA(v18, 0x14Bu, 0, 0); /*0x5b50e3*/
    for ( i = 0; i < dword_A83CA8; ++i ) /*0x5b50ee*/
    {
      v21 = *((_DWORD *)dword_A83C9C + i); /*0x5b50f6*/
      if ( *(_BYTE *)(v21 + 421) ) /*0x5b50f9*/
      {
        v22 = SendMessageA(v19, 0x4C2u, 0, *(_DWORD *)(v21 + 96)); /*0x5b510f*/
        SendMessageA(v19, 0x151u, v22, i); /*0x5b5119*/
      }
    }
    ListBoxItem = FindListBoxItem(v19, -1, dword_A8B3AC); /*0x5b5130*/
    SendMessageA(v19, 0x14Eu, ListBoxItem, 0); /*0x5b513e*/
    v2 = GetDlgItem; /*0x5b5140*/
  }
  v24 = v2(*v1, 1641); /*0x5b5151*/
  if ( v24 ) /*0x5b5155*/
  {
    SendMessageA( /*0x5b517c*/
      v24,
      0x406u,
      1u,
      *(unsigned __int16 *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 5264)
    | (*(unsigned __int16 *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 5272) << 16));
    SendMessageA(v24, 0x405u, 1u, *(LPARAM *)&stru_A8B250.__pad_0[32]); /*0x5b518d*/
  }
  Debug::Log(); /*0x5b519a*/
  v25 = v2(*v1, 1360); /*0x5b51ab*/
  v26 = v25; /*0x5b51ad*/
  if ( v25 ) /*0x5b51b1*/
  {
    SendMessageA(v25, 0x406u, 1u, 655361); /*0x5b51c0*/
    SendMessageA(v26, 0x405u, 1u, g_RulesInitConfig); /*0x5b51d1*/
  }
  Debug::Log(); /*0x5b51de*/
  v27 = v2(*v1, 1026); /*0x5b51f1*/
  if ( v27 ) /*0x5b51f5*/
  {
    SendMessageA( /*0x5b521c*/
      v27,
      0x406u,
      1u,
      *(unsigned __int16 *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 5248)
    | (*(unsigned __int16 *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 5256) << 16));
    SendMessageA(v27, 0x405u, 1u, *(LPARAM *)&stru_A8B250.__pad_0[12]); /*0x5b522d*/
  }
  Debug::Log(); /*0x5b523a*/
  v28 = v2(*v1, 1362); /*0x5b524b*/
  v29 = v28; /*0x5b524d*/
  if ( v28 ) /*0x5b5251*/
  {
    SendMessageA(v28, 0x406u, 1u, 393216); /*0x5b5260*/
    SendMessageA(v29, 0x405u, 1u, *(LPARAM *)&stru_A8B250.__pad_0[36]); /*0x5b5271*/
  }
  Debug::Log(); /*0x5b527e*/
  v30 = v2(*v1, 1321); /*0x5b528f*/
  v31 = v30; /*0x5b5291*/
  if ( v30 ) /*0x5b5295*/
  {
    SendMessageA(v30, 0x406u, 1u, 393216); /*0x5b52a4*/
    SendMessageA(v31, 0x405u, 1u, 6 - *(_DWORD *)&stru_A8B250.__pad_0[24]); /*0x5b52bc*/
  }
  Debug::Log(); /*0x5b52c9*/
  v32 = v2(*v1, 1363); /*0x5b52da*/
  v33 = v32; /*0x5b52dc*/
  if ( v32 ) /*0x5b52e0*/
  {
    SendMessageA(v32, 0x406u, 1u, 0x20000); /*0x5b52ef*/
    SendMessageA(v33, 0x405u, 1u, *(LPARAM *)&stru_A8B250.__pad_0[40]); /*0x5b5300*/
  }
  Debug::Log(); /*0x5b530d*/
  v34 = v2(*v1, 1643); /*0x5b531e*/
  if ( v34 ) /*0x5b5322*/
    SendMessageA(v34, 0xF1u, dword_A8B320 == 1, 0); /*0x5b533b*/
  Debug::Log(); /*0x5b5356*/
  v35 = v2(*v1, 1642); /*0x5b5367*/
  if ( v35 ) /*0x5b536b*/
    SendMessageA(v35, 0xF1u, stru_A8B250.__pad_0[8] == 1, 0); /*0x5b5384*/
  Debug::Log(); /*0x5b539f*/
  v36 = v2(*v1, 1358); /*0x5b53b0*/
  if ( v36 ) /*0x5b53b4*/
    SendMessageA(v36, 0xF1u, stru_A8B250.__pad_0[18] == 1, 0); /*0x5b53cd*/
  Debug::Log(); /*0x5b53e8*/
  v37 = v2(*v1, 1690); /*0x5b53f9*/
  if ( v37 ) /*0x5b53fd*/
    SendMessageA(v37, 0xF1u, stru_A8B250.__pad_0[19] == 1, 0); /*0x5b5416*/
  Debug::Log(); /*0x5b5431*/
  v38 = v2(*v1, 1693); /*0x5b5442*/
  if ( v38 ) /*0x5b5446*/
    SendMessageA(v38, 0xF1u, stru_A8B250.__pad_0[20] == 1, 0); /*0x5b545f*/
  Debug::Log(); /*0x5b547a*/
  v39 = v2(*v1, 1361); /*0x5b548b*/
  if ( v39 ) /*0x5b548f*/
    SendMessageA(v39, 0xF1u, stru_A8B250.__pad_0[28] == 1, 0); /*0x5b54a8*/
  Debug::Log(); /*0x5b54c3*/
  v40 = v2(*v1, 1356); /*0x5b54d4*/
  if ( v40 ) /*0x5b54d8*/
    SendMessageA(v40, 0xF1u, stru_A8B250.__pad_0[17] == 1, 0); /*0x5b54f1*/
  Debug::Log(); /*0x5b550c*/
  v41 = v2(*v1, 1357); /*0x5b551d*/
  if ( v41 ) /*0x5b5521*/
    SendMessageA(v41, 0xF1u, byte_A8B31F == 1, 0); /*0x5b553a*/
  Debug::Log(); /*0x5b5555*/
  v42 = v2(*v1, 1572); /*0x5b5566*/
  if ( v42 ) /*0x5b556a*/
    SendMessageA(v42, 0xF1u, stru_A8B250.__pad_0[16] == 1, 0); /*0x5b5583*/
  Debug::Log(); /*0x5b559e*/
  v43 = v2(*v1, 1430); /*0x5b55af*/
  if ( v43 ) /*0x5b55b3*/
    SendMessageA(v43, 0xF1u, byte_A8B31D == 1, 0); /*0x5b55cc*/
  Debug::Log(); /*0x5b55e7*/
  NetworkBuffer::GetField((NetworkBuffer *)&stru_A8EB00.?[252]); /*0x5b55f4*/
  v44 = g_UIControlState; /*0x5b55f9*/
  if ( g_UIControlState ) /*0x5b5601*/
  {
    ComPtr::Dtor((ComPtr *)g_UIControlState); /*0x5b5605*/
    __3_YAXPAX_Z(v44); /*0x5b560b*/
    g_UIControlState = 0; /*0x5b5613*/
  }
  if ( strlen(byte_AC1288) > 0x4E ) /*0x5b562f*/
    byte_AC12D7 = 0; /*0x5b5631*/
  if ( strlen(byte_AC1288) ) /*0x5b563b*/
  {
    BulkCharToWide(Format, (unsigned __int8 *)byte_AC1288, -1); /*0x5b5655*/
    if ( &g_TypeClass_DefaultString ) /*0x5b5661*/
    {
      v45 = v2(*v1, 1343); /*0x5b566e*/
      if ( v45 ) /*0x5b5672*/
      {
        swprintf(Buffer, (const size_t)g_Str_Trace___s_, Format, &g_TypeClass_DefaultString); /*0x5b5691*/
        DrawDialogText((LPARAM)Math::InitDegToRad, Buffer, v45); /*0x5b56a0*/
      }
    }
  }
  byte_AC1288[0] = 0; /*0x5b56ac*/
  NullModemClass::Flush((NullModemClass *)&unk_A8EA70, 1); /*0x5b56b3*/
  BYTE2(stru_A8D600.Network_field_0xC) = 1; /*0x5b56bd*/
  PtrVector::Destroy(&stru_A8DA74); /*0x5b56c4*/
  MEMORY[0xA8B322] = 0; /*0x5b56ce*/
  Debug::Log(); /*0x5b56d7*/
}



// ==== 0x005B56F0  Game::processStartup  this=Game  sig=csp ====
void __thiscall Game::processStartup(Game *this)
{
  HWND DlgItem; // eax
  HWND v3; // eax
  HWND v4; // eax
  HWND v5; // esi
  LRESULT v6; // eax
  char lParam[40]; // [esp+Ch] [ebp-28h] BYREF

  Debug::Log(); /*0x5b56fd*/
  DlgItem = GetDlgItem(*(HWND *)this->__pad_0, 1473); /*0x5b5713*/
  if ( DlgItem ) /*0x5b571d*/
  {
    SendMessageA(DlgItem, 0x4B3u, 0x14u, (LPARAM)lParam); /*0x5b572c*/
    CopyWideToChar(unk_A8B380, lParam, -1); /*0x5b5739*/
  }
  Debug::Log(); /*0x5b5748*/
  v3 = GetDlgItem(*(HWND *)this->__pad_0, 1029); /*0x5b5758*/
  if ( v3 ) /*0x5b575c*/
    dword_A8B394 = SendMessageA(v3, 0x147u, 0, 0); /*0x5b576a*/
  Debug::Log(); /*0x5b577a*/
  v4 = GetDlgItem(*(HWND *)this->__pad_0, 1639); /*0x5b578a*/
  v5 = v4; /*0x5b578c*/
  if ( v4 ) /*0x5b5790*/
  {
    v6 = SendMessageA(v4, 0x147u, 0, 0); /*0x5b579c*/
    dword_A8B3AC = SendMessageA(v5, 0x150u, v6, 0); /*0x5b57a9*/
  }
  Debug::Log(); /*0x5b57b3*/
}



// ==== 0x005B57D0  ObjectClass::method_5B57D0  this=ObjectClass  sig=csp ====
int __thiscall sub_5B57D0(ObjectClass *this)
{
  int result; // eax
  HWND v3; // esi
  char *v4; // eax
  unsigned int v5; // edi
  HWND v6; // esi
  int (__usercall *v7)@<eax>(char@<cf>, char@<zf>); // edi
  HWND ptr_0; // [esp-8h] [ebp-518h]
  int v9; // [esp+0h] [ebp-510h] BYREF
  wchar_t *Format; // [esp+10h] [ebp-500h]
  int v11[62]; // [esp+14h] [ebp-4FCh] BYREF
  __int16 v12; // [esp+10Ch] [ebp-404h]
  wchar_t lParam[256]; // [esp+110h] [ebp-400h] BYREF
  wchar_t Buffer[256]; // [esp+310h] [ebp-200h] BYREF

  result = (int)GetDlgItem((HWND)this->AbstractClass, 1344); /*0x5b57ea*/
  v3 = (HWND)result; /*0x5b57ec*/
  if ( result ) /*0x5b57f0*/
  {
    SendMessageA((HWND)result, 0x4B3u, 0x100u, (LPARAM)lParam); /*0x5b580f*/
    SendMessageA(v3, 0x4B2u, 0, (LPARAM)&g_TypeClass_DefaultString); /*0x5b581e*/
    result = wcslen(lParam); /*0x5b5828*/
    if ( result ) /*0x5b5832*/
    {
      if ( lParam[0] != 13 ) /*0x5b5841*/
      {
        WideString::Trim(lParam); /*0x5b584e*/
        result = (int)lParam; /*0x5b5853*/
        if ( &v9 != (int *)-272 ) /*0x5b585c*/
        {
          memset(v11, 0, sizeof(v11)); /*0x5b5871*/
          v12 = 0; /*0x5b5873*/
          v11[0] = 104; /*0x5b587f*/
          strcpy((char *)&v11[1], unk_A8B380); /*0x5b589d*/
          LOBYTE(v11[6]) = dword_A8B394; /*0x5b58b2*/
          wcscpy((wchar_t *)((char *)&v11[6] + 1), lParam); /*0x5b58b6*/
          Stream::WriteBlock((int *)&unk_A8EA70, (int)v11, 250, 1); /*0x5b58cf*/
          Stream::ReadPacket((int)&unk_A8EA70); /*0x5b58d9*/
          v4 = CharToWideString(unk_A8B380); /*0x5b58e3*/
          v5 = dword_A8B394; /*0x5b58ea*/
          ptr_0 = (HWND)this->AbstractClass; /*0x5b58f5*/
          Format = (wchar_t *)v4; /*0x5b58f6*/
          result = (int)GetDlgItem(ptr_0, 1343); /*0x5b58fa*/
          v6 = (HWND)result; /*0x5b58fc*/
          if ( result ) /*0x5b5900*/
          {
            if ( v5 >= 8 ) /*0x5b5904*/
              v7 = Math::InitDegToRad; /*0x5b5914*/
            else
              v7 = (int (__usercall *)@<eax>(char@<cf>, char@<zf>))dword_8316A8[v5]; /*0x5b590b*/
            swprintf(Buffer, (const size_t)g_Str_Trace___s_, Format, lParam); /*0x5b5934*/
            return DrawDialogText((LPARAM)v7, Buffer, v6); /*0x5b5946*/
          }
        }
      }
    }
  }
  return result; /*0x5b594b*/
}



// ==== 0x005B5960  ObjectClass::method_5B5960  this=ObjectClass  sig=csp ====
char __thiscall sub_5B5960(ObjectClass *this)
{
  HWND DlgItem; // eax
  HWND v3; // edi

  DlgItem = GetDlgItem((HWND)this->AbstractClass, 1639); /*0x5b596d*/
  v3 = DlgItem; /*0x5b5973*/
  if ( DlgItem ) /*0x5b5977*/
  {
    DlgItem = (HWND)SendMessageA(DlgItem, 0x147u, 0, 0); /*0x5b5989*/
    if ( DlgItem != HWND_MESSAGE|0x2 ) /*0x5b598e*/
    {
      dword_A8B3AC = SendMessageA(v3, 0x150u, (WPARAM)DlgItem, 0); /*0x5b599b*/
      BYTE1(this->?) = 1; /*0x5b59a2*/
      LOBYTE(this->?) = 1; /*0x5b59a5*/
      LOBYTE(DlgItem) = 1; /*0x5b59a0*/
    }
  }
  return (char)DlgItem; /*0x5b59a8*/
}



// ==== 0x005B59B0  ModemGame::AdvanceTauntCommand  this=ModemGame  sig=csp ====
int __thiscall ModemGame::AdvanceTauntCommand(ModemGame *this)
{
  int result; // eax
  HWND v3; // ebx
  WPARAM v4; // esi
  int v5; // eax

  result = (int)GetDlgItem(*(HWND *)this->__pad_0, 1029); /*0x5b59be*/
  v3 = (HWND)result; /*0x5b59c4*/
  if ( result ) /*0x5b59c8*/
  {
    result = SendMessageA((HWND)result, 0x147u, 0, 0); /*0x5b59da*/
    v4 = result; /*0x5b59dc*/
    if ( result != -1 ) /*0x5b59e1*/
    {
      v5 = *((_DWORD *)this + 18); /*0x5b59e3*/
      if ( v4 == v5 ) /*0x5b59e8*/
      {
        v4 = v5 + 1; /*0x5b59ea*/
        if ( v5 + 1 > 7 ) /*0x5b59f0*/
          v4 = 0; /*0x5b59f2*/
        SendMessageA(v3, 0x14Eu, v4, 0); /*0x5b59fd*/
      }
      dword_A8B394 = v4; /*0x5b5a01*/
      BYTE1(this->ModemGame_field_0x08) = 1; /*0x5b5a09*/
      LOBYTE(this->ModemGame_field_0x08) = 1; /*0x5b5a0c*/
      if ( v4 >= 8 ) /*0x5b5a0f*/
        return SendMessageA(v3, 0x498u, 0, (LPARAM)Math::InitDegToRad); /*0x5b5a3c*/
      else
        return SendMessageA(v3, 0x498u, 0, dword_8316A8[v4]); /*0x5b5a26*/
    }
  }
  return result; /*0x5b5a28*/
}



// ==== 0x005B5A50  ObjectClass::method_5B5A50  this=ObjectClass  sig=csp ====
char __thiscall sub_5B5A50(ObjectClass *this, char a2)
{
  HWND DlgItem; // eax
  HWND v4; // esi
  wchar_t lParam[22]; // [esp+8h] [ebp-2Ch] BYREF

  DlgItem = GetDlgItem((HWND)this->AbstractClass, 1473); /*0x5b5a5f*/
  v4 = DlgItem; /*0x5b5a65*/
  if ( DlgItem ) /*0x5b5a69*/
  {
    SendMessageA(DlgItem, 0x4B3u, 0x15u, (LPARAM)lParam); /*0x5b5a7f*/
    WideString::Trim(lParam); /*0x5b5a85*/
    if ( !a2 ) /*0x5b5a90*/
      SendMessageA(v4, 0x4B2u, 0, (LPARAM)lParam); /*0x5b5a9f*/
    CopyWideToChar(unk_A8B380, (char *)lParam, -1); /*0x5b5aac*/
    BYTE1(this->?) = 1; /*0x5b5ab4*/
    LOBYTE(this->?) = 1; /*0x5b5ab7*/
    LOBYTE(DlgItem) = 1; /*0x5b5ab1*/
  }
  return (char)DlgItem; /*0x5b5aba*/
}



// ==== 0x005B5AD0  ModemGame::UpdatePlayerNameAndColor  this=ModemGame  sig=csp ====
int __thiscall ModemGame::UpdatePlayerNameAndColor(ModemGame *this, wchar_t *Source, unsigned int a3, int a4)
{
  HWND v5; // edx
  HWND DlgItem; // eax
  LRESULT v7; // eax
  int result; // eax
  HWND v9; // esi
  int (__usercall *v10)@<eax>(char@<cf>, char@<zf>); // ebx
  HWND v11; // [esp-8h] [ebp-B8h]
  wchar_t lParam[80]; // [esp+10h] [ebp-A0h] BYREF

  wcscpy((wchar_t *)this + 16, Source); /*0x5b5ae8*/
  v5 = *(HWND *)this->__pad_0; /*0x5b5aed*/
  *((_DWORD *)this + 18) = a3; /*0x5b5aff*/
  DlgItem = GetDlgItem(v5, 1029); /*0x5b5b08*/
  if ( DlgItem ) /*0x5b5b0c*/
  {
    v7 = SendMessageA(DlgItem, 0x147u, 0, 0); /*0x5b5b18*/
    if ( v7 != -1 && v7 == *((_DWORD *)this + 18) ) /*0x5b5b26*/
      ModemGame::AdvanceTauntCommand(this); /*0x5b5b2a*/
  }
  v11 = *(HWND *)this->__pad_0; /*0x5b5b3d*/
  *((_DWORD *)this + 19) = a4; /*0x5b5b3e*/
  result = (int)GetDlgItem(v11, 1640); /*0x5b5b41*/
  v9 = (HWND)result; /*0x5b5b43*/
  if ( result ) /*0x5b5b47*/
  {
    swprintf(lParam, (const size_t)&stru_82BA00.?[77], Source, *(_DWORD *)(*((_DWORD *)dword_A83C9C + a4) + 96)); /*0x5b5b68*/
    SendMessageA(v9, 0x4B2u, 0, (LPARAM)lParam); /*0x5b5b83*/
    if ( a3 >= 8 ) /*0x5b5b87*/
      v10 = Math::InitDegToRad; /*0x5b5b97*/
    else
      v10 = (int (__usercall *)@<eax>(char@<cf>, char@<zf>))dword_8316A8[a3]; /*0x5b5b8e*/
    return SendMessageA(v9, 0x498u, 0, (LPARAM)v10); /*0x5b5ba6*/
  }
  return result; /*0x5b5ba8*/
}



// ==== 0x005B5BC0  Dialog::InitializeGameSettings  this=Dialog  sig=csp ====
int __thiscall Dialog::InitializeGameSettings(Dialog *this)
{
  HWND DlgItem; // eax
  HWND v3; // eax
  HWND v4; // eax
  HWND v5; // eax
  HWND v6; // eax
  HWND v7; // eax
  HWND v8; // eax
  HWND v9; // eax
  HWND v10; // eax
  HWND v11; // eax
  HWND v12; // eax
  HWND v13; // eax
  HWND v14; // eax
  HWND v15; // eax
  HWND v16; // eax
  HWND v17; // eax
  HWND v18; // eax
  HWND v19; // eax

  Debug::Log(); /*0x5b5bcb*/
  DlgItem = GetDlgItem(*(HWND *)this->__pad_0, 1641); /*0x5b5be1*/
  if ( DlgItem ) /*0x5b5bf0*/
    SendMessageA(DlgItem, 0x405u, 1u, *(LPARAM *)&stru_A8B250.__pad_0[32]); /*0x5b5c00*/
  v3 = GetDlgItem(*(HWND *)this->__pad_0, 1360); /*0x5b5c0a*/
  if ( v3 ) /*0x5b5c0e*/
    SendMessageA(v3, 0x405u, 1u, g_RulesInitConfig); /*0x5b5c1e*/
  v4 = GetDlgItem(*(HWND *)this->__pad_0, 1026); /*0x5b5c28*/
  if ( v4 ) /*0x5b5c2c*/
    SendMessageA(v4, 0x405u, 1u, *(LPARAM *)&stru_A8B250.__pad_0[12]); /*0x5b5c3c*/
  v5 = GetDlgItem(*(HWND *)this->__pad_0, 1362); /*0x5b5c46*/
  if ( v5 ) /*0x5b5c4a*/
    SendMessageA(v5, 0x405u, 1u, *(LPARAM *)&stru_A8B250.__pad_0[36]); /*0x5b5c5a*/
  v6 = GetDlgItem(*(HWND *)this->__pad_0, 1321); /*0x5b5c64*/
  if ( v6 ) /*0x5b5c68*/
    SendMessageA(v6, 0x405u, 1u, 6 - *(_DWORD *)&stru_A8B250.__pad_0[24]); /*0x5b5c7f*/
  v7 = GetDlgItem(*(HWND *)this->__pad_0, 1363); /*0x5b5c89*/
  if ( v7 ) /*0x5b5c8d*/
    SendMessageA(v7, 0x405u, 1u, *(LPARAM *)&stru_A8B250.__pad_0[40]); /*0x5b5c9d*/
  v8 = GetDlgItem(*(HWND *)this->__pad_0, 1643); /*0x5b5ca7*/
  if ( v8 ) /*0x5b5cab*/
    SendMessageA(v8, 0xF1u, dword_A8B320 == 1, 0); /*0x5b5cc3*/
  v9 = GetDlgItem(*(HWND *)this->__pad_0, 1642); /*0x5b5ccd*/
  if ( v9 ) /*0x5b5cd1*/
    SendMessageA(v9, 0xF1u, stru_A8B250.__pad_0[8] == 1, 0); /*0x5b5ce9*/
  v10 = GetDlgItem(*(HWND *)this->__pad_0, 1361); /*0x5b5cf3*/
  if ( v10 ) /*0x5b5cf7*/
    SendMessageA(v10, 0xF1u, stru_A8B250.__pad_0[28] == 1, 0); /*0x5b5d0f*/
  v11 = GetDlgItem(*(HWND *)this->__pad_0, 1358); /*0x5b5d19*/
  if ( v11 ) /*0x5b5d1d*/
    SendMessageA(v11, 0xF1u, stru_A8B250.__pad_0[18] == 1, 0); /*0x5b5d35*/
  v12 = GetDlgItem(*(HWND *)this->__pad_0, 1690); /*0x5b5d3f*/
  if ( v12 ) /*0x5b5d43*/
    SendMessageA(v12, 0xF1u, stru_A8B250.__pad_0[19] == 1, 0); /*0x5b5d5b*/
  v13 = GetDlgItem(*(HWND *)this->__pad_0, 1693); /*0x5b5d65*/
  if ( v13 ) /*0x5b5d69*/
    SendMessageA(v13, 0xF1u, stru_A8B250.__pad_0[20] == 1, 0); /*0x5b5d81*/
  v14 = GetDlgItem(*(HWND *)this->__pad_0, 1356); /*0x5b5d8b*/
  if ( v14 ) /*0x5b5d8f*/
    SendMessageA(v14, 0xF1u, stru_A8B250.__pad_0[17] == 1, 0); /*0x5b5da7*/
  v15 = GetDlgItem(*(HWND *)this->__pad_0, 1357); /*0x5b5db1*/
  if ( v15 ) /*0x5b5db5*/
    SendMessageA(v15, 0xF1u, byte_A8B31F == 1, 0); /*0x5b5dcd*/
  v16 = GetDlgItem(*(HWND *)this->__pad_0, 1572); /*0x5b5dd7*/
  if ( v16 ) /*0x5b5ddb*/
    SendMessageA(v16, 0xF1u, stru_A8B250.__pad_0[16] == 1, 0); /*0x5b5df3*/
  v17 = GetDlgItem(*(HWND *)this->__pad_0, 1430); /*0x5b5dfd*/
  if ( v17 ) /*0x5b5e01*/
    SendMessageA(v17, 0xF1u, byte_A8B31D == 1, 0); /*0x5b5e19*/
  v18 = GetDlgItem(*(HWND *)this->__pad_0, 1448); /*0x5b5e23*/
  if ( v18 ) /*0x5b5e27*/
    SendMessageA(v18, 0x4B2u, 0, (LPARAM)&MEMORY[0xA8B322]); /*0x5b5e36*/
  if ( !g_UIControlState || !*(_DWORD *)g_UIControlState ) /*0x5b5e41*/
    Session::PrepareGame(*(Session **)this->__pad_0); /*0x5b5e48*/
  v19 = GetDlgItem(*(HWND *)this->__pad_0, 1); /*0x5b5e51*/
  if ( v19 ) /*0x5b5e55*/
    EnableWindow(v19, 1); /*0x5b5e59*/
  return PlayVocClass(*(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 1716), 0x2000, 1.0, 0); /*0x5b5e7c*/
}



// ==== 0x005B5E90  Network::SendSettingsRequest  this=Network  sig=csp ====
int __thiscall Network::SendSettingsRequest(Network *this)
{
  HWND DlgItem; // eax
  int v3[62]; // [esp+0h] [ebp-FCh] BYREF
  __int16 v4; // [esp+F8h] [ebp-4h]

  DlgItem = GetDlgItem((HWND)this->Network_field_0x0, 1); /*0x5b5e9b*/
  if ( DlgItem ) /*0x5b5ea3*/
    EnableWindow(DlgItem, 0); /*0x5b5ea8*/
  memset(v3, 0, sizeof(v3)); /*0x5b5eba*/
  v4 = 0; /*0x5b5ec8*/
  v3[0] = 116; /*0x5b5ecf*/
  return Stream::WriteBlock((int *)&unk_A8EA70, (int)v3, 250, 1); /*0x5b5edd*/
}



// ==== 0x005B5EF0  CellClass::LockSurface  this=ModemGuest  sig=csp ====
int __thiscall CellClass::LockSurface(int this, char a2)
{
  int v3; // edi
  int v4; // edi
  int result; // eax
  int v6; // edi
  int v7; // edi
  int v8[62]; // [esp+Ch] [ebp-FCh] BYREF
  __int16 v9; // [esp+104h] [ebp-4h]

  Stream::ReadPacket((int)&unk_A8EA70); /*0x5b5f00*/
  if ( *(_BYTE *)(this + 9) == 1 ) /*0x5b5f0d*/
  {
    v3 = *(_DWORD *)&stru_88732C.__pad_6[14]; /*0x5b5f14*/
    if ( *(_DWORD *)&stru_88732C.__pad_6[6] != -1 ) /*0x5b5f1c*/
      v3 += Timer::GetTicks() - *(_DWORD *)&stru_88732C.__pad_6[6]; /*0x5b5f2e*/
    if ( (unsigned int)(v3 - *(_DWORD *)(this + 12)) > 0x1E ) /*0x5b5f36*/
      goto LABEL_6; /*0x5b5f36*/
  }
  if ( a2 == 1 ) /*0x5b5f40*/
  {
LABEL_6:
    Surface_Lock((ObjectClass *)this); /*0x5b5f44*/
    v4 = *(_DWORD *)&stru_88732C.__pad_6[14]; /*0x5b5f4e*/
    if ( *(_DWORD *)&stru_88732C.__pad_6[6] != -1 ) /*0x5b5f56*/
      v4 += Timer::GetTicks() - *(_DWORD *)&stru_88732C.__pad_6[6]; /*0x5b5f68*/
    *(_DWORD *)(this + 12) = v4; /*0x5b5f6a*/
    *(_BYTE *)(this + 9) = 0; /*0x5b5f6d*/
  }
  result = *(_DWORD *)&stru_88732C.__pad_6[6]; /*0x5b5f71*/
  v6 = *(_DWORD *)&stru_88732C.__pad_6[14]; /*0x5b5f76*/
  if ( *(_DWORD *)&stru_88732C.__pad_6[6] != -1 ) /*0x5b5f7e*/
  {
    result = Timer::GetTicks() - *(_DWORD *)&stru_88732C.__pad_6[6]; /*0x5b5f8a*/
    v6 += result; /*0x5b5f90*/
  }
  if ( (unsigned int)(v6 - *(_DWORD *)(this + 28)) > 0x28 ) /*0x5b5f98*/
  {
    memset(v8, 0, sizeof(v8)); /*0x5b5fa5*/
    v9 = 0; /*0x5b5fa7*/
    v8[0] = 105; /*0x5b5fae*/
    *(int *)((char *)&v8[38] + 2) = CellClass::GetBridgeIndexThunk((NullModemClass *)&unk_A8EA70); /*0x5b5fc1*/
    LOBYTE(v8[6]) = dword_A8DB30; /*0x5b5fd8*/
    Stream::WriteBlock((int *)&unk_A8EA70, (int)v8, 250, 0); /*0x5b5fdc*/
    result = *(_DWORD *)&stru_88732C.__pad_6[6]; /*0x5b5fe1*/
    v7 = *(_DWORD *)&stru_88732C.__pad_6[14]; /*0x5b5fe6*/
    if ( *(_DWORD *)&stru_88732C.__pad_6[6] != -1 ) /*0x5b5fee*/
    {
      result = Timer::GetTicks() - *(_DWORD *)&stru_88732C.__pad_6[6]; /*0x5b5ffa*/
      v7 += result; /*0x5b6000*/
    }
    *(_DWORD *)(this + 28) = v7; /*0x5b6002*/
  }
  return result; /*0x5b6005*/
}



// ==== 0x005B6020  ModemGame::ProcessPacket  this=ModemGame  sig=csp ====
char __thiscall ModemGame::ProcessPacket(ModemGame *this)
{
  int v2; // esi
  int v3; // eax
  int *v4; // eax
  char result; // al
  int v6; // edi
  int v7; // esi
  int *v8; // eax
  int v9; // esi
  unsigned int updated; // eax
  bool v11; // cl
  char *v12; // eax
  int v13; // ecx
  int v14; // esi
  int v15; // esi
  unsigned int v16; // ecx
  int v17; // esi
  int *v18; // eax
  char *v19; // ebp
  int v20; // esi
  HWND DlgItem; // edi
  int (__usercall *v22)@<eax>(char@<cf>, char@<zf>); // esi
  int v23; // esi
  int v24; // esi
  int *v25; // [esp-14h] [ebp-434h]
  int *v26; // [esp-14h] [ebp-434h]
  int *v27; // [esp-14h] [ebp-434h]
  int *v28; // [esp-14h] [ebp-434h]
  wchar_t *v29; // [esp-10h] [ebp-430h]
  wchar_t *v30; // [esp-10h] [ebp-430h]
  wchar_t *v31; // [esp-10h] [ebp-430h]
  wchar_t *v32; // [esp-10h] [ebp-430h]
  wchar_t *v33; // [esp-10h] [ebp-430h]
  wchar_t *v34; // [esp-10h] [ebp-430h]
  wchar_t *StringCSF; // [esp-10h] [ebp-430h]
  int v36; // [esp+0h] [ebp-420h] BYREF
  const wchar_t *v37; // [esp+10h] [ebp-410h]
  const wchar_t *v38; // [esp+14h] [ebp-40Ch]
  const wchar_t *v39; // [esp+18h] [ebp-408h]
  const wchar_t *v40; // [esp+1Ch] [ebp-404h]
  const wchar_t *v41; // [esp+20h] [ebp-400h]
  int v42; // [esp+24h] [ebp-3FCh] BYREF
  int v43; // [esp+28h] [ebp-3F8h] BYREF
  _BYTE v44[20]; // [esp+2Ch] [ebp-3F4h] BYREF
  _BYTE v45[6]; // [esp+40h] [ebp-3E0h] BYREF
  unsigned int v46; // [esp+46h] [ebp-3DAh]
  unsigned int v47; // [esp+4Ah] [ebp-3D6h]
  int v48; // [esp+AEh] [ebp-372h]
  unsigned int v49; // [esp+C2h] [ebp-35Eh]
  int v50; // [esp+F8h] [ebp-328h]
  int v51; // [esp+FCh] [ebp-324h]
  int v52[62]; // [esp+124h] [ebp-2FCh] BYREF
  __int16 v53; // [esp+21Ch] [ebp-204h]
  wchar_t Buffer[256]; // [esp+220h] [ebp-200h] BYREF

  Stream::ReadPacket((int)&unk_A8EA70); /*0x5b6031*/
  if ( ObjectTypeClass::CreateInstance(&unk_A8EA70, (int)&v43, (int)&v42) <= 0 ) /*0x5b604c*/
  {
LABEL_51:
    v17 = *(_DWORD *)&stru_88732C.__pad_6[14]; /*0x5b65d6*/
    if ( *(_DWORD *)&stru_88732C.__pad_6[6] != -1 ) /*0x5b65e3*/
      v17 += Timer::GetTicks() - *(_DWORD *)&stru_88732C.__pad_6[6]; /*0x5b65f5*/
    if ( (unsigned int)(v17 - *((_DWORD *)this + 5)) <= *((_DWORD *)this + 6) ) /*0x5b6601*/
    {
      return 0; /*0x5b67af*/
    }
    else
    {
      Debug::Log(); /*0x5b660d*/
      v37 = asc_82083C; /*0x5b661c*/
      StringCSF = GetStringCSF(g_Str_TXT_OK, 0, (const char *)&stru_82BA00.?[40], 1391); /*0x5b6639*/
      v18 = (int *)GetStringCSF((wchar_t *)&stru_82BA00.?, 0, (const char *)&stru_82BA00.?[40], 1391); /*0x5b664b*/
      Dialog::ShowMessageBox(v18, StringCSF, 0, 0, 0, v36); /*0x5b6655*/
      return 1; /*0x5b665d*/
    }
  }
  else
  {
    v2 = *(_DWORD *)&stru_88732C.__pad_6[14]; /*0x5b6057*/
    if ( *(_DWORD *)&stru_88732C.__pad_6[6] != -1 ) /*0x5b6062*/
      v2 += Timer::GetTicks() - *(_DWORD *)&stru_88732C.__pad_6[6]; /*0x5b6074*/
    v3 = v43; /*0x5b6076*/
    *((_DWORD *)this + 5) = v2; /*0x5b607a*/
    *((_DWORD *)this + 6) = 1200; /*0x5b6080*/
    if ( v3 >= 100 && v3 < 109 && v3 != 104 && v45[0] == dword_A8DB30 ) /*0x5b60a5*/
    {
      Debug::Log(); /*0x5b60ac*/
      v38 = asc_82083C; /*0x5b60bb*/
      v29 = GetStringCSF(g_Str_TXT_OK, 0, (const char *)&stru_82BA00.?[40], 1177); /*0x5b60d8*/
      v4 = (int *)GetStringCSF((wchar_t *)&stru_82BA00.?, 0, (const char *)&stru_82BA00.?[40], 1177); /*0x5b60ea*/
      Dialog::ShowMessageBox(v4, v29, 0, 0, 0, v36); /*0x5b60f4*/
      return 1; /*0x5b6105*/
    }
    switch ( v3 ) /*0x5b611a*/
    {
      case 'e': /*0x5b611a*/
        Debug::Log(); /*0x5b6208*/
        updated = NetworkBuffer::UpdateWindow((NetworkBuffer *)&stru_A8EB00.?[252], v46, v47); /*0x5b621f*/
        if ( !updated ) /*0x5b6226*/
        {
          v41 = asc_82083C; /*0x5b623c*/
          v31 = GetStringCSF(g_Str_TXT_OK, 0, (const char *)&stru_82BA00.?[40], 1209); /*0x5b6249*/
          v25 = (int *)GetStringCSF((wchar_t *)stru_82BA00.?, 0, (const char *)&stru_82BA00.?[40], 1209); /*0x5b6260*/
          Dialog::ShowMessageBox(v25, v31, 0, 0, 0, v36); /*0x5b6265*/
          goto LABEL_35; /*0x5b6265*/
        }
        if ( updated == -1 ) /*0x5b626c*/
        {
          v40 = asc_82083C; /*0x5b6285*/
          v32 = GetStringCSF(g_Str_TXT_OK, 0, (const char *)&stru_82BA00.?[40], 1215); /*0x5b6292*/
          v26 = (int *)GetStringCSF((wchar_t *)stru_82BA00.?, 0, (const char *)&stru_82BA00.?[40], 1215); /*0x5b62a9*/
          Dialog::ShowMessageBox(v26, v32, 0, 0, 0, v36); /*0x5b62ae*/
          goto LABEL_35; /*0x5b62ae*/
        }
        v11 = v48 == *((_DWORD *)this + 20); /*0x5b62c3*/
        if ( v50 != *((_DWORD *)this + 22) ) /*0x5b62d1*/
          v11 = 0; /*0x5b62d3*/
        if ( v51 != *((_DWORD *)this + 21) || !v11 ) /*0x5b62e5*/
        {
          v39 = asc_82083C; /*0x5b62fe*/
          v33 = GetStringCSF(g_Str_TXT_OK, 0, (const char *)&stru_82BA00.?[40], 1262); /*0x5b630b*/
          v27 = (int *)GetStringCSF((wchar_t *)&stru_82BA00.?, 0, (const char *)&stru_82BA00.?[40], 1262); /*0x5b6322*/
          Dialog::ShowMessageBox(v27, v33, 0, 0, 0, v36); /*0x5b6327*/
          goto LABEL_35; /*0x5b6327*/
        }
        dword_A8B24C = Network::GetMaxPacketSize(updated); /*0x5b633b*/
        v12 = CharToWideString(v44); /*0x5b6340*/
        ModemGame::UpdatePlayerNameAndColor(this, (wchar_t *)v12, v45[5], *(int *)&v45[1]); /*0x5b6353*/
        if ( ApplyGameOptions((int)&v43) == 1 ) /*0x5b6366*/
          Dialog::InitializeGameSettings((Dialog *)this); /*0x5b636e*/
        goto LABEL_51; /*0x5b6373*/
      case 'f': /*0x5b611a*/
        Debug::Log(); /*0x5b6126*/
        v6 = *(_DWORD *)&stru_88732C.__pad_6[14]; /*0x5b6130*/
        if ( *(_DWORD *)&stru_88732C.__pad_6[6] != -1 ) /*0x5b613b*/
          v6 += Timer::GetTicks() - *(_DWORD *)&stru_88732C.__pad_6[6]; /*0x5b614d*/
        while ( 1 ) /*0x5b6154*/
        {
          v7 = *(_DWORD *)&stru_88732C.__pad_6[14]; /*0x5b6154*/
          if ( *(_DWORD *)&stru_88732C.__pad_6[6] != -1 ) /*0x5b615c*/
            v7 += Timer::GetTicks() - *(_DWORD *)&stru_88732C.__pad_6[6]; /*0x5b616e*/
          if ( (unsigned int)(v7 - v6) >= 0x3C ) /*0x5b6175*/
            break; /*0x5b6175*/
          Event::Dispatch(); /*0x5b6177*/
          Stream::ReadPacket((int)&unk_A8EA70); /*0x5b6181*/
        }
        v38 = asc_82083C; /*0x5b619f*/
        v30 = GetStringCSF(g_Str_TXT_OK, 0, (const char *)&stru_82BA00.?[40], 1193); /*0x5b61ac*/
        v8 = (int *)GetStringCSF((wchar_t *)stru_82BA00.?, 0, (const char *)&stru_82BA00.?[40], 1193); /*0x5b61be*/
        Dialog::ShowMessageBox(v8, v30, 0, 0, 0, v36); /*0x5b61c8*/
        v9 = *(_DWORD *)&stru_88732C.__pad_6[14]; /*0x5b61d2*/
        if ( *(_DWORD *)&stru_88732C.__pad_6[6] != -1 ) /*0x5b61da*/
          v9 += Timer::GetTicks() - *(_DWORD *)&stru_88732C.__pad_6[6]; /*0x5b61ec*/
        *((_DWORD *)this + 5) = v9; /*0x5b61ee*/
        Network::CleanupOnDisconnect(); /*0x5b61f1*/
        return 1; /*0x5b6202*/
      case 'g': /*0x5b611a*/
      case 'k': /*0x5b611a*/
        Debug::Log(); /*0x5b637d*/
        LOBYTE(v13) = dword_A8BB08; /*0x5b6382*/
        if ( FindAndValidateMap(byte_A8B8E0, dword_A8BB04, &byte_A8BAE2, v13, 1) == 1 ) /*0x5b63a5*/
        {
          memset(v52, 0, sizeof(v52)); /*0x5b63b7*/
          v53 = 0; /*0x5b63c5*/
          v52[0] = 114; /*0x5b63cd*/
          Stream::WriteBlock((int *)&unk_A8EA70, (int)v52, 250, 1); /*0x5b63d8*/
LABEL_43:
          strcpy((char *)&dword_A8B230[130].abstractFlags, byte_A8B8E0); /*0x5b650e*/
          dword_A8B554 = 5; /*0x5b654d*/
          dword_A8DB9C = 0; /*0x5b6553*/
          dword_A8B56C = 0; /*0x5b6559*/
          dword_A8B570 = 0; /*0x5b655f*/
          if ( dword_A8B24C == 2 ) /*0x5b6565*/
          {
            v16 = (v49 >> 3) + 4; /*0x5b6576*/
            if ( 5 * (v16 / 5) <= 0xA ) /*0x5b6584*/
              dword_A8B550 = (wchar_t *)10; /*0x5b658d*/
            else
              dword_A8B550 = (wchar_t *)(5 * (v16 / 5)); /*0x5b6586*/
          }
          else
          {
            dword_A8B550 = (wchar_t *)(v49 >> 3); /*0x5b65a5*/
            if ( v49 >> 3 <= 5 ) /*0x5b65aa*/
              dword_A8B550 = (wchar_t *)5; /*0x5b65ac*/
          }
          if ( Game::StartModemMultiplayer((int)this, v43 == 107) == 1 ) /*0x5b65c6*/
            this->ModemGame_field_0x04 = 1; /*0x5b65cc*/
          else
            this->ModemGame_field_0x04 = 2; /*0x5b6667*/
          goto LABEL_51; /*0x5b65cc*/
        }
        if ( !dword_A8BB08 || !_strcmpi(byte_A8B8E0, &stru_82BA00.?) ) /*0x5b63fb*/
        {
          if ( !RequestNetworkFile(byte_A8B8E0, 1, 0) ) /*0x5b64d3*/
            return 1; /*0x5b64e8*/
          v15 = *(_DWORD *)&stru_88732C.__pad_6[14]; /*0x5b64ee*/
          if ( *(_DWORD *)&stru_88732C.__pad_6[6] != -1 ) /*0x5b64f7*/
            v15 += Timer::GetTicks() - *(_DWORD *)&stru_88732C.__pad_6[6]; /*0x5b6509*/
          *((_DWORD *)this + 5) = v15; /*0x5b650b*/
          goto LABEL_43; /*0x5b650b*/
        }
        memset(v52, 0, sizeof(v52)); /*0x5b641b*/
        v53 = 0; /*0x5b641d*/
        v52[0] = 115; /*0x5b6431*/
        Stream::WriteBlock((int *)&unk_A8EA70, (int)v52, 250, 1); /*0x5b643c*/
        Event::Dispatch(); /*0x5b6441*/
        Stream::ReadPacket((int)&unk_A8EA70); /*0x5b644b*/
        v37 = asc_82083C; /*0x5b6467*/
        v34 = GetStringCSF(g_Str_TXT_OK, 0, (const char *)&stru_82BA00.?[40], 1308); /*0x5b6474*/
        v28 = (int *)GetStringCSF((wchar_t *)&stru_82BA00.?[2], 0, (const char *)&stru_82BA00.?[40], 1308); /*0x5b648b*/
        Dialog::ShowMessageBox(v28, v34, 0, 0, 0, v36); /*0x5b6490*/
LABEL_35:
        v14 = *(_DWORD *)&stru_88732C.__pad_6[14]; /*0x5b6495*/
        if ( *(_DWORD *)&stru_88732C.__pad_6[6] != -1 ) /*0x5b64a2*/
          v14 += Timer::GetTicks() - *(_DWORD *)&stru_88732C.__pad_6[6]; /*0x5b64b4*/
        *((_DWORD *)this + 5) = v14; /*0x5b64b6*/
        result = 1; /*0x5b64bc*/
        break; /*0x5b64c5*/
      case 'h': /*0x5b611a*/
        Debug::Log(); /*0x5b6674*/
        v19 = CharToWideString(v44); /*0x5b6689*/
        v20 = v45[0]; /*0x5b668f*/
        if ( &v36 != (int *)-65 ) /*0x5b6697*/
        {
          DlgItem = GetDlgItem(*(HWND *)this->__pad_0, 1343); /*0x5b66a7*/
          if ( DlgItem ) /*0x5b66ab*/
          {
            if ( v20 >= 8 ) /*0x5b66b4*/
              v22 = Math::InitDegToRad; /*0x5b66bf*/
            else
              v22 = (int (__usercall *)@<eax>(char@<cf>, char@<zf>))dword_8316A8[v20]; /*0x5b66b6*/
            swprintf(Buffer, (const size_t)g_Str_Trace___s_, (const wchar_t *const)v19, &v45[1]); /*0x5b66d8*/
            DrawDialogText((LPARAM)v22, Buffer, DlgItem); /*0x5b66ea*/
          }
        }
        PlayVocClass(*(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 1708), 0x2000, 1.0, 0); /*0x5b6707*/
        goto LABEL_51; /*0x5b670c*/
      case 'j': /*0x5b611a*/
        Debug::Log(); /*0x5b6728*/
        BYTE1(this->ModemGame_field_0x08) = 1; /*0x5b672d*/
        v23 = *(_DWORD *)&stru_88732C.__pad_6[14]; /*0x5b6736*/
        if ( *(_DWORD *)&stru_88732C.__pad_6[6] != -1 ) /*0x5b6741*/
          v23 += Timer::GetTicks() - *(_DWORD *)&stru_88732C.__pad_6[6]; /*0x5b6753*/
        this->ModemGame_field_0x0C = v23; /*0x5b6755*/
        goto LABEL_51; /*0x5b6758*/
      case 'u': /*0x5b611a*/
        Debug::Log(); /*0x5b6762*/
        ModemGame::ReceiveMapPreview(this); /*0x5b676c*/
        v24 = *(_DWORD *)&stru_88732C.__pad_6[14]; /*0x5b6776*/
        if ( *(_DWORD *)&stru_88732C.__pad_6[6] != -1 ) /*0x5b677e*/
          v24 += Timer::GetTicks() - *(_DWORD *)&stru_88732C.__pad_6[6]; /*0x5b6790*/
        *((_DWORD *)this + 5) = v24; /*0x5b6792*/
        goto LABEL_51; /*0x5b6795*/
      default:
        Debug::Log(); /*0x5b6716*/
        goto LABEL_51; /*0x5b671e*/
    }
  }
  return result; /*0x5b60f9*/
}



// ==== 0x005B67F0  ApplyGameOptions  this=-  sig=csp ====
char __stdcall ApplyGameOptions(int a1)
{
  int v1; // esi
  int v2; // eax
  int v3; // eax
  int v5; // edx
  int v6; // eax
  int v7; // edx
  void *ptr_0; // ecx
  bool v9; // al
  int v10; // edi
  int v11; // esi
  Skirmish *v12; // esi
  ObjectClass *v13; // [esp+0h] [ebp-Ch]

  if ( stru_A8B250.__pad_0[8] == (*(_BYTE *)(a1 + 130) & 1) ) /*0x5b6807*/
  {
    v1 = *(_DWORD *)(a1 + 142); /*0x5b680d*/
    if ( dword_A8B320 == ((v1 & 4) != 0) && byte_A8B31D == ((v1 & 2) != 0) ) /*0x5b6836*/
    {
      v2 = *(_DWORD *)(a1 + 130); /*0x5b683c*/
      if ( stru_A8B250.__pad_0[16] == ((v2 & 2) != 0) /*0x5b6920*/
        && stru_A8B250.__pad_0[17] == ((v2 & 4) != 0)
        && byte_A8B31F == ((v1 & 8) != 0)
        && *(_DWORD *)&stru_A8B250.__pad_0[36] == *(unsigned __int8 *)(a1 + 140)
        && *(_DWORD *)&stru_A8B250.__pad_0[40] == *(unsigned __int8 *)(a1 + 141)
        && g_RulesInitConfig == *(unsigned __int8 *)(a1 + 138)
        && *(_DWORD *)&stru_A8B250.__pad_0[12] == *(_DWORD *)(a1 + 126)
        && *(_DWORD *)&stru_A8B250.__pad_0[32] == *(unsigned __int8 *)(a1 + 139)
        && *(_DWORD *)&stru_A8EB00.?[432] == *(_DWORD *)(a1 + 146)
        && ApplyGameOptions_Helper((ObjectClass *)dword_A8E960, (_DWORD *)(a1 + 150))
        && *(_DWORD *)&stru_A8B250.__pad_0[24] == *(unsigned __int8 *)(a1 + 162) )
      {
        v3 = *(_DWORD *)(a1 + 142); /*0x5b6926*/
        if ( stru_A8B250.__pad_0[18] == ((v3 & 0x10) != 0) /*0x5b69da*/
          && stru_A8B250.__pad_0[19] == ((v3 & 0x20) != 0)
          && stru_A8B250.__pad_0[20] == ((v3 & 0x40) != 0)
          && stru_A8B250.__pad_0[28] == ((v3 & 0x80) != 0)
          && !_strcmpi(byte_A8B8E0, (char *)(a1 + 163))
          && !strcmp(&byte_A8BAE2, (const char *)(a1 + 176))
          && dword_A8BB04 == *(_DWORD *)(a1 + 158) )
        {
          return 0; /*0x5b69de*/
        }
      }
    }
  }
  Debug::Log(); /*0x5b69e9*/
  stru_A8B250.__pad_0[8] = *(_BYTE *)(a1 + 130) & 1; /*0x5b69fa*/
  dword_A8B320 = (*(_DWORD *)(a1 + 142) & 4) != 0; /*0x5b6a0c*/
  v5 = dword_A8E960[0]; /*0x5b6a18*/
  BYTE1(v5) = BYTE1(dword_A8E960[0]) & 0x7F; /*0x5b6a22*/
  stru_A8B250.__pad_0[16] = (*(_DWORD *)(a1 + 130) & 2) != 0; /*0x5b6a25*/
  dword_A8E960[0] = v5 | ((*(_DWORD *)(a1 + 130) & 2) << 14); /*0x5b6a38*/
  stru_A8B250.__pad_0[17] = (*(_DWORD *)(a1 + 130) & 4) != 0; /*0x5b6a49*/
  byte_A8B31F = (*(_DWORD *)(a1 + 142) & 8) != 0; /*0x5b6a5c*/
  byte_A8B31D = (*(_DWORD *)(a1 + 142) & 2) != 0; /*0x5b6a6f*/
  *(_DWORD *)&stru_A8B250.__pad_0[36] = *(unsigned __int8 *)(a1 + 140); /*0x5b6a7b*/
  *(_DWORD *)&stru_A8B250.__pad_0[40] = *(unsigned __int8 *)(a1 + 141); /*0x5b6a88*/
  g_RulesInitConfig = *(unsigned __int8 *)(a1 + 138); /*0x5b6a96*/
  *(_DWORD *)&stru_A8B250.__pad_0[12] = *(_DWORD *)(a1 + 126); /*0x5b6a9f*/
  *(_DWORD *)&stru_A8B250.__pad_0[32] = *(unsigned __int8 *)(a1 + 139); /*0x5b6aaa*/
  *(_DWORD *)&stru_A8EB00.?[432] = *(_DWORD *)(a1 + 146); /*0x5b6ab6*/
  v6 = *(_DWORD *)(a1 + 150); /*0x5b6abc*/
  dword_A8E960[0] = v6; /*0x5b6ac4*/
  LOBYTE(v6) = v6 | 0xC0; /*0x5b6acf*/
  *(_DWORD *)&stru_A8B250.__pad_0[24] = *(unsigned __int8 *)(a1 + 162); /*0x5b6ad1*/
  stru_A8EB00.ObjectTypeClass[24] = *(_DWORD *)&stru_A8B250.__pad_0[24]; /*0x5b6ad7*/
  stru_A8B250.__pad_0[18] = (*(_DWORD *)(a1 + 142) & 0x10) != 0; /*0x5b6ae9*/
  stru_A8B250.__pad_0[19] = (*(_DWORD *)(a1 + 142) & 0x20) != 0; /*0x5b6afb*/
  stru_A8B250.__pad_0[20] = (*(_DWORD *)(a1 + 142) & 0x40) != 0; /*0x5b6b0d*/
  v7 = *(_DWORD *)(a1 + 142) >> 7; /*0x5b6b19*/
  dword_A8E960[0] = v6; /*0x5b6b1c*/
  stru_A8B250.__pad_0[28] = v7 & 1; /*0x5b6b29*/
  ptr_0 = dword_A8B230->ptr_0; /*0x5b6b2f*/
  BYTE1(ptr_0) = ((unsigned __int16)dword_A8B230->ptr_0 >> 8) & 0xFB; /*0x5b6b31*/
  dword_A8B230->ptr_0 = ptr_0; /*0x5b6b34*/
  byte_A8B31C = 1; /*0x5b6b3b*/
  nullsub_37(v13); /*0x5b6b42*/
  if ( _strcmpi(byte_A8B8E0, (char *)(a1 + 163)) /*0x5b6ba4*/
    || _strcmpi(&byte_A8BAE2, (char *)(a1 + 176))
    || dword_A8BB08 != ((*(_DWORD *)(a1 + 130) & 0x10) != 0)
    || dword_A8BB04 != *(_DWORD *)(a1 + 158)
    || !MEMORY[0xA8B322][0] )
  {
    Debug::Log(); /*0x5b6baf*/
    strcpy(byte_A8B8E0, (const char *)(a1 + 163)); /*0x5b6bce*/
    strcpy(&byte_A8BAE2, (const char *)(a1 + 176)); /*0x5b6bf4*/
    v9 = (*(_DWORD *)(a1 + 130) & 0x10) != 0; /*0x5b6c0b*/
    dword_A8BB08 = v9; /*0x5b6c12*/
    dword_A8BB04 = *(_DWORD *)(a1 + 158); /*0x5b6c1d*/
    if ( !strcmp(byte_A8B8E0, &stru_82BA00.?) && v9 || (v10 = 0, dword_A8B8D8 <= 0) ) /*0x5b6c5d*/
    {
LABEL_33:
      wcscpy(MEMORY[0xA8B322], (const wchar_t *)(a1 + 38)); /*0x5b6c86*/
    }
    else
    {
      while ( 1 ) /*0x5b6c64*/
      {
        v11 = *(_DWORD *)(dword_A8B8CC + 4 * v10); /*0x5b6c64*/
        if ( !_strcmpi(byte_A8B8E0, (char *)(v11 + 88)) ) /*0x5b6c70*/
          break; /*0x5b6c70*/
        if ( ++v10 >= dword_A8B8D8 ) /*0x5b6c84*/
          goto LABEL_33; /*0x5b6c84*/
      }
      wcscpy(MEMORY[0xA8B322], (const wchar_t *)v11); /*0x5b6cc4*/
    }
    v12 = g_UIControlState; /*0x5b6c94*/
    if ( g_UIControlState ) /*0x5b6c9f*/
    {
      ComPtr::Dtor((ComPtr *)g_UIControlState); /*0x5b6ca3*/
      __3_YAXPAX_Z(v12); /*0x5b6ca9*/
      g_UIControlState = 0; /*0x5b6cb1*/
    }
  }
  return 1; /*0x5b69dc*/
}



// ==== 0x005B6CD0  ObjectClass::Surface_Lock  this=ObjectClass  sig=csp ====
int __thiscall Surface_Lock(ObjectClass *this)
{
  int v2; // ecx
  int v3; // eax
  int v4; // edx
  char v5; // dl
  int v7[62]; // [esp+8h] [ebp-FCh] BYREF
  __int16 v8; // [esp+100h] [ebp-4h]

  memset(v7, 0, sizeof(v7)); /*0x5b6ce5*/
  v2 = this->customSound_controller[1]; /*0x5b6ce7*/
  v8 = 0; /*0x5b6cea*/
  v3 = this->customSound_controller[0]; /*0x5b6cec*/
  v4 = this->customSound_controller[2]; /*0x5b6cef*/
  v7[0] = 101; /*0x5b6cf2*/
  *(int *)((char *)&v7[33] + 2) = v3; /*0x5b6cfa*/
  v7[53] = v2; /*0x5b6d01*/
  v7[52] = v4; /*0x5b6d08*/
  v7[54] = GameOptions::GetEntry(); /*0x5b6d19*/
  *(int *)((char *)&v7[7] + 2) = NetworkBuffer::GetField2(); /*0x5b6d2a*/
  *(int *)((char *)&v7[8] + 2) = NetworkBuffer::GetField3(); /*0x5b6d33*/
  LOBYTE(v7[6]) = dword_A8DB30; /*0x5b6d3c*/
  v5 = dword_A8B394; /*0x5b6d5a*/
  strcpy((char *)&v7[1], unk_A8B380); /*0x5b6d63*/
  *(int *)((char *)&v7[6] + 1) = dword_A8B3AC; /*0x5b6d7d*/
  BYTE1(v7[7]) = v5; /*0x5b6d87*/
  return Stream::WriteBlock((int *)&unk_A8EA70, (int)v7, 250, 1); /*0x5b6d90*/
}



// ==== 0x005B6DA0  ObjectClass::method_5B6DA0  this=ObjectClass  sig=csp ====
void __thiscall sub_5B6DA0(ObjectClass *this, wchar_t *Source)
{
  char *v3; // eax
  unsigned int v4; // edi
  HWND DlgItem; // esi
  int (__usercall *v6)@<eax>(char@<cf>, char@<zf>); // edi
  wchar_t *Format; // [esp+10h] [ebp-300h]
  int v8[62]; // [esp+14h] [ebp-2FCh] BYREF
  __int16 v9; // [esp+10Ch] [ebp-204h]
  wchar_t Buffer[256]; // [esp+110h] [ebp-200h] BYREF

  if ( Source ) /*0x5b6db5*/
  {
    memset(v8, 0, sizeof(v8)); /*0x5b6dca*/
    v9 = 0; /*0x5b6dcc*/
    v8[0] = 104; /*0x5b6dd8*/
    strcpy((char *)&v8[1], unk_A8B380); /*0x5b6df4*/
    LOBYTE(v8[6]) = dword_A8B394; /*0x5b6e04*/
    wcscpy((wchar_t *)((char *)&v8[6] + 1), Source); /*0x5b6e08*/
    Stream::WriteBlock((int *)&unk_A8EA70, (int)v8, 250, 1); /*0x5b6e21*/
    Stream::ReadPacket((int)&unk_A8EA70); /*0x5b6e2b*/
    v3 = CharToWideString(unk_A8B380); /*0x5b6e35*/
    v4 = dword_A8B394; /*0x5b6e3d*/
    Format = (wchar_t *)v3; /*0x5b6e49*/
    DlgItem = GetDlgItem((HWND)this->AbstractClass, 1343); /*0x5b6e53*/
    if ( DlgItem ) /*0x5b6e57*/
    {
      if ( v4 >= 8 ) /*0x5b6e5b*/
        v6 = Math::InitDegToRad; /*0x5b6e6b*/
      else
        v6 = (int (__usercall *)@<eax>(char@<cf>, char@<zf>))dword_8316A8[v4]; /*0x5b6e62*/
      swprintf(Buffer, (const size_t)g_Str_Trace___s_, Format, Source); /*0x5b6e84*/
      DrawDialogText((LPARAM)v6, Buffer, DlgItem); /*0x5b6e96*/
    }
  }
}



// ==== 0x005B6EB0  ObjectClass::UI_Setup  this=ObjectClass  sig=csp ====
void __thiscall UI_Setup(ObjectClass *this, wchar_t *Format, unsigned int a3, int a4)
{
  HWND DlgItem; // edi
  int (__usercall *v5)@<eax>(char@<cf>, char@<zf>); // esi
  wchar_t Buffer[256]; // [esp+8h] [ebp-200h] BYREF

  if ( a4 ) /*0x5b6ec1*/
  {
    DlgItem = GetDlgItem((HWND)this->AbstractClass, 1343); /*0x5b6ed1*/
    if ( DlgItem ) /*0x5b6ed5*/
    {
      if ( a3 >= 8 ) /*0x5b6ee1*/
        v5 = Math::InitDegToRad; /*0x5b6ef1*/
      else
        v5 = (int (__usercall *)@<eax>(char@<cf>, char@<zf>))dword_8316A8[a3]; /*0x5b6ee8*/
      swprintf(Buffer, (const size_t)g_Str_Trace___s_, Format, a4); /*0x5b6f0a*/
      DrawDialogText((LPARAM)v5, Buffer, DlgItem); /*0x5b6f19*/
    }
  }
}



// ==== 0x005B6F30  ReadEventINI  this=ModemGuest  sig=ida-proto ====
HWND sub_5B6F30()
{
  wchar_t *StringCSF; // eax
  HWND MessageBox; // eax
  HWND v2; // ebx
  int v3; // edi
  int v4; // esi
  HWND result; // eax
  _BYTE v6[4]; // [esp+8h] [ebp-1FCh] BYREF
  _DWORD v7[62]; // [esp+Ch] [ebp-1F8h] BYREF
  __int16 v8; // [esp+104h] [ebp-100h]
  _DWORD v9[6]; // [esp+108h] [ebp-FCh] BYREF
  int v10; // [esp+120h] [ebp-E4h]

  memset(v7, 0, sizeof(v7)); /*0x5b6f45*/
  v8 = 0; /*0x5b6f51*/
  LOBYTE(v7[6]) = dword_A8DB30; /*0x5b6f58*/
  v7[0] = 102; /*0x5b6f67*/
  BYTE1(v7[7]) = dword_A8B394; /*0x5b6f6f*/
  Stream::WriteBlock((int)&unk_A8EA70, (int)v7, 250, 1); /*0x5b6f73*/
  StringCSF = GetStringCSF(aTxtSigningOff, 0, aDRa2mdpostMode, 1683); /*0x5b6f8b*/
  MessageBox = CreateMessageBox((LPARAM)StringCSF, 0, 0); /*0x5b6f94*/
  v2 = MessageBox; /*0x5b6f99*/
  if ( MessageBox ) /*0x5b6f9d*/
    Dialog::Show(MessageBox); /*0x5b6fa1*/
  v3 = dword_887340; /*0x5b6fab*/
  if ( dword_887338 != -1 ) /*0x5b6fb4*/
    v3 += Timer::GetTicks() - dword_887338; /*0x5b6fc6*/
  while ( Count::GetCountQueue(&unk_A8EA70) ) /*0x5b6fcd*/
  {
    v4 = dword_887340; /*0x5b6fe0*/
    if ( dword_887338 != -1 ) /*0x5b6fe9*/
      v4 += Timer::GetTicks() - dword_887338; /*0x5b6ffb*/
    if ( (unsigned int)(v4 - v3) >= 0x12C /*0x5b7040*/
      || ObjectTypeClass::CreateInstance((int)&unk_A8EA70, (int)v9, (int)v6) > 0
      && v9[0] == 102
      && (unsigned __int8)v10 == dword_A8DB30 )
    {
      break; /*0x5b7040*/
    }
    Event::Dispatch(); /*0x5b7042*/
    MessageLoop(); /*0x5b7047*/
    Stream::ReadPacket((int)&unk_A8EA70); /*0x5b7051*/
  }
  result = (HWND)Network::CleanupOnDisconnect(); /*0x5b7069*/
  if ( v2 ) /*0x5b7070*/
    return Dialog::Destroy(v2); /*0x5b7074*/
  return result; /*0x5b7079*/
}



// ==== 0x005B7090  Game::StartModemMultiplayer  this=Game  sig=csp ====
char __userpurge Game::StartModemMultiplayer@<al>(int this@<ecx>, ObjectClass *a2@<ebp>, char a3)
{
  int v5; // eax
  int v6; // esi
  int v7; // eax
  int v8; // eax
  int v9; // esi
  int v10; // eax
  wchar_t *StringCSF; // eax
  Dialog *MessageBox; // eax
  Dialog *v13; // ebp
  int v14; // edi
  int v15; // esi
  int v16; // esi
  int v17; // ecx
  int v18; // edx

  if ( a3 == 1 ) /*0x5b709b*/
    return 0; /*0x5b709f*/
  Game::processStartup((Game *)this); /*0x5b70a7*/
  dword_A8B54C = 0; /*0x5b70b1*/
  v5 = __2_YAPAXI_Z(0x85u); /*0x5b70bb*/
  v6 = v5; /*0x5b70c0*/
  if ( v5 ) /*0x5b70ca*/
  {
    Waypoint::InitInvalid((Waypoint *)(v5 + 40)); /*0x5b70d3*/
    BulkCharToWide((_WORD *)v6, (unsigned __int8 *)unk_A8B380, -1); /*0x5b70e0*/
    *(_DWORD *)(v6 + 75) = dword_A8B3AC; /*0x5b70ea*/
    *(_DWORD *)(v6 + 83) = dword_A8B394; /*0x5b70f3*/
    *(_DWORD *)(v6 + 115) = -1; /*0x5b70f6*/
    if ( dword_A8DA84 < dword_A8DA7C /*0x5b7130*/
      || (byte_A8DA81 || !dword_A8DA7C)
      && dword_A8DA88 > 0
      && (*(unsigned __int8 (__thiscall **)(PtrVector *, int, _DWORD))(*(_DWORD *)&stru_A8DA74 + 8))(
           &stru_A8DA74,
           dword_A8DA7C + dword_A8DA88,
           0) )
    {
      v7 = dword_A8DA84++; /*0x5b713d*/
      dword_A8DA78[v7] = v6; /*0x5b714c*/
    }
    ++dword_A8B54C; /*0x5b714f*/
  }
  v8 = __2_YAPAXI_Z(0x85u); /*0x5b715a*/
  v9 = v8; /*0x5b715f*/
  if ( v8 ) /*0x5b7166*/
  {
    Waypoint::InitInvalid((Waypoint *)(v8 + 40)); /*0x5b716f*/
    wcscpy((wchar_t *)v9, (const wchar_t *)(this + 32)); /*0x5b7179*/
    *(_DWORD *)(v9 + 75) = *(_DWORD *)(this + 76); /*0x5b7184*/
    *(_DWORD *)(v9 + 83) = *(_DWORD *)(this + 72); /*0x5b718a*/
    *(_DWORD *)(v9 + 115) = -1; /*0x5b718d*/
    if ( dword_A8DA84 < dword_A8DA7C /*0x5b71c7*/
      || (byte_A8DA81 || !dword_A8DA7C)
      && dword_A8DA88 > 0
      && (*(unsigned __int8 (__thiscall **)(PtrVector *, int, _DWORD))(*(_DWORD *)&stru_A8DA74 + 8))(
           &stru_A8DA74,
           dword_A8DA7C + dword_A8DA88,
           0) )
    {
      v10 = dword_A8DA84++; /*0x5b71d4*/
      dword_A8DA78[v10] = v9; /*0x5b71e3*/
    }
    ++dword_A8B54C; /*0x5b71e6*/
  }
  if ( dword_A8B54C != 2 ) /*0x5b71f3*/
    return 0; /*0x5b71f7*/
  StringCSF = GetStringCSF((wchar_t *)&stru_82BA00.?[4], 0, (const char *)&stru_82BA00.?[40], 1779); /*0x5b7211*/
  MessageBox = (Dialog *)CreateMessageBox((LPARAM)StringCSF, 0, 0); /*0x5b721a*/
  v13 = MessageBox; /*0x5b721f*/
  if ( MessageBox ) /*0x5b7223*/
    Dialog::Show(MessageBox); /*0x5b7227*/
  v14 = *(_DWORD *)&stru_88732C.__pad_6[14]; /*0x5b7231*/
  if ( *(_DWORD *)&stru_88732C.__pad_6[6] != -1 ) /*0x5b7239*/
    v14 += Timer::GetTicks() - *(_DWORD *)&stru_88732C.__pad_6[6]; /*0x5b724b*/
  while ( 1 ) /*0x5b7252*/
  {
    if ( !Count::GetCountQueue((Count *)&unk_A8EA70) ) /*0x5b7252*/
      goto LABEL_31; /*0x5b7252*/
    v15 = *(_DWORD *)&stru_88732C.__pad_6[14]; /*0x5b7260*/
    if ( *(_DWORD *)&stru_88732C.__pad_6[6] != -1 ) /*0x5b7268*/
      v15 += Timer::GetTicks() - *(_DWORD *)&stru_88732C.__pad_6[6]; /*0x5b727a*/
    if ( (unsigned int)(v15 - v14) >= 0x708 ) /*0x5b7284*/
    {
LABEL_31:
      v16 = *(_DWORD *)&stru_88732C.__pad_6[14]; /*0x5b728b*/
      if ( *(_DWORD *)&stru_88732C.__pad_6[6] != -1 ) /*0x5b7293*/
        v16 += Timer::GetTicks() - *(_DWORD *)&stru_88732C.__pad_6[6]; /*0x5b72a5*/
      if ( (unsigned int)(v16 - v14) >= 0x3C ) /*0x5b72ac*/
        break; /*0x5b72ac*/
    }
    Event::Dispatch(); /*0x5b72ae*/
    MessageLoop(); /*0x5b72b3*/
    Stream::ReadPacket((int)&unk_A8EA70); /*0x5b72bd*/
  }
  if ( v13 ) /*0x5b72c6*/
    Dialog::Destroy(v13); /*0x5b72ca*/
  EventClass::CheckFlag((EventClass *)&unk_A8EA70); /*0x5b72d4*/
  BYTE2(stru_A8D600.Network_field_0xC) = 0; /*0x5b72e4*/
  dword_A8B230[130].ptr_C = *(void **)&stru_A8B250.__pad_0[4]; /*0x5b72eb*/
  dword_A8B54C = dword_A8DA84; /*0x5b730b*/
  v17 = dword_A8E960[0]; /*0x5b7311*/
  BYTE1(v17) = BYTE1(dword_A8E960[0]) & 0x77; /*0x5b7319*/
  v18 = v17 | ((byte_A8B31D & 1 | (16 * (stru_A8B250.__pad_0[16] & 1))) << 11); /*0x5b731f*/
  LOBYTE(v18) = LOBYTE(dword_A8E960[0]) | 0xC0; /*0x5b7326*/
  *(_DWORD *)&stru_A8EB00.?[416] = 0; /*0x5b7329*/
  dword_A8B24C = 2; /*0x5b7333*/
  dword_A8E960[0] = v18; /*0x5b733d*/
  nullsub_37(a2); /*0x5b7343*/
  return 1; /*0x5b709d*/
}



// ==== 0x005B7360  ModemGame::ReceiveMapPreview  this=ModemGame  sig=csp ====
void __thiscall ModemGame::ReceiveMapPreview(ModemGame *this)
{
  int v1; // esi
  int v2; // eax
  int FileSize; // esi
  char *v4; // edi
  signed int v5; // ebx
  char *v6; // esi
  Skirmish *v7; // ebx
  ObjectClass *v8; // eax
  Skirmish *v9; // eax
  int Ticks; // [esp+Ch] [ebp-280h]
  Straw v12; // [esp+1Ch] [ebp-270h] BYREF
  int v13; // [esp+24h] [ebp-268h]
  Buffer v14; // [esp+28h] [ebp-264h] BYREF
  Straw v15[5]; // [esp+68h] [ebp-224h] BYREF
  int v16[62]; // [esp+90h] [ebp-1FCh] BYREF
  __int16 v17; // [esp+188h] [ebp-104h]
  char v18[256]; // [esp+18Ch] [ebp-100h] BYREF

  Timer::GetTicks(); /*0x5b7371*/
  Debug::Log(); /*0x5b7385*/
  memset(v16, 0, sizeof(v16)); /*0x5b739d*/
  v17 = 0; /*0x5b739f*/
  v16[0] = 118; /*0x5b73a1*/
  Debug::Log(); /*0x5b73ac*/
  Stream::WriteBlock((int *)&unk_A8EA70, (int)v16, 250, 1); /*0x5b73c8*/
  Ticks = Timer::GetTicks(); /*0x5b73e8*/
  while ( Count::GetCountQueue((Count *)&unk_A8EA70) > 0 ) /*0x5b73f7*/
  {
    v1 = 600; /*0x5b7400*/
    if ( Ticks != -1 ) /*0x5b7406*/
    {
      v2 = Timer::GetTicks() - Ticks; /*0x5b7411*/
      if ( v2 >= 600 ) /*0x5b7417*/
        break; /*0x5b7417*/
      v1 = 600 - v2; /*0x5b7419*/
    }
    if ( !v1 ) /*0x5b741d*/
      break; /*0x5b741d*/
    Event::Dispatch(); /*0x5b741f*/
  }
  Debug::Log(); /*0x5b7432*/
  Debug::Log(); /*0x5b7441*/
  if ( RequestNetworkFile(v18, 1, 0) ) /*0x5b7456*/
  {
    Debug::Log(); /*0x5b747c*/
    RawFileClass::Construct((RawFileClass *)&v14.Buffer_field_1C, (int)v18); /*0x5b7490*/
    FileSize = CCFileClass::GetFileSize((RawFileClass *)&v14.Buffer_field_1C); /*0x5b749e*/
    v4 = (char *)__2_YAPAXI_Z(FileSize); /*0x5b74a9*/
    FileClass::Read((RawFileClass *)&v14.Buffer_field_1C, v4, FileSize); /*0x5b74b1*/
    v5 = *(_DWORD *)v4; /*0x5b74b6*/
    Debug::Log(); /*0x5b74bd*/
    v12.Straw_field_0x04 = 0; /*0x5b74c8*/
    v13 = 0; /*0x5b74cc*/
    Buffer::Init(&v14, (int)(v4 + 4), FileSize); /*0x5b74de*/
    v14.Buffer_field_0C = 0; /*0x5b74ee*/
    *(_DWORD *)v12.__pad_0 = &BufferStraw::`vftable'; /*0x5b74f2*/
    LZOStraw::Constructor((LZOStraw *)v15, 1, 0x2000); /*0x5b74fa*/
    Delegate::Set(v15, (int)&v12); /*0x5b7508*/
    v6 = (char *)__2_YAPAXI_Z(2 * v5); /*0x5b7519*/
    LCW::Decompress((LZOStraw *)v15, v6, v5); /*0x5b7521*/
    Debug::Log(); /*0x5b752b*/
    if ( g_UIControlState ) /*0x5b753a*/
    {
      v7 = g_UIControlState; /*0x5b753c*/
      ComPtr::Dtor((ComPtr *)g_UIControlState); /*0x5b7544*/
      __3_YAXPAX_Z(v7); /*0x5b754a*/
    }
    v8 = (ObjectClass *)__2_YAPAXI_Z(4u); /*0x5b7554*/
    if ( v8 ) /*0x5b755f*/
      v9 = (Skirmish *)unknown_libname_27(v8); /*0x5b7563*/
    else
      v9 = 0; /*0x5b756a*/
    g_UIControlState = v9; /*0x5b756f*/
    ModemGame::RenderPaletteImage((ModemGame *)v9, (int *)v6); /*0x5b7574*/
    InvalidateRect(*(HWND *)this->__pad_0, 0, 0); /*0x5b7582*/
    Debug::Log(); /*0x5b758d*/
    __3_YAXPAX_Z(v6); /*0x5b7593*/
    __3_YAXPAX_Z(v4); /*0x5b7599*/
    LZOStraw::Destructor((LZOStraw *)v15); /*0x5b75a5*/
    Vector::Clear((int)&v14); /*0x5b75ae*/
    Straw::Dtor(&v12); /*0x5b75b7*/
    RawFileClass::Dtor((RawFileClass *)&v14.Buffer_field_1C); /*0x5b75c0*/
  }
  else
  {
    Debug::Log(); /*0x5b7464*/
  }
}



// ==== 0x005B75D0  sub_5B75D0  this=-  sig=ida-proto ====
int sub_5B75D0()
{
  dword_ABF098 = 0; /*0x5b75d2*/
  dword_ABF09C = 0; /*0x5b75d7*/
  dword_ABF0A0 = 0; /*0x5b75dc*/
  dword_ABF0A4 = 0; /*0x5b75e1*/
  return 0; /*0x5b75e6*/
}



// ==== 0x005B75F0  sub_5B75F0  this=-  sig=ida-proto ====
void sub_5B75F0()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x5b75fc*/
  dbl_ABF0B0 = Math::Sqrt(v0 + v0); /*0x5b760e*/
}



// ==== 0x005B7620  sub_5B7620  this=-  sig=ida-proto ====
void sub_5B7620()
{
  dbl_ABF100 = dbl_ABF0B0 / 60.0; /*0x5b762c*/
}



// ==== 0x005B7640  sub_5B7640  this=-  sig=ida-proto ====
void sub_5B7640()
{
  dbl_ABF0E8 = 1.0 / dbl_ABF100; /*0x5b764c*/
}



// ==== 0x005B7660  sub_5B7660  this=-  sig=ida-proto ====
void sub_5B7660()
{
  dbl_ABF0E0 = 0.0174532925199433 * 45.0; /*0x5b766c*/
}



// ==== 0x005B7680  sub_5B7680  this=-  sig=ida-proto ====
void sub_5B7680()
{
  dbl_ABF0B8 = 0.0174532925199433 * 60.0; /*0x5b768c*/
}



// ==== 0x005B76A0  sub_5B76A0  this=-  sig=ida-proto ====
void sub_5B76A0()
{
  dbl_ABF090 = 0.0174532925199433 * 90.0; /*0x5b76ac*/
}



// ==== 0x005B76C0  sub_5B76C0  this=-  sig=ida-proto ====
__int64 sub_5B76C0()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_ABF090 - dbl_ABF0B8); /*0x5b76d2*/
  result = Math::RoundToInt(v0 * dbl_ABF0B0 * 0.5); /*0x5b76e6*/
  dword_ABF108 = result; /*0x5b76eb*/
  return result; /*0x5b76f0*/
}



// ==== 0x005B7700  sub_5B7700  this=-  sig=ida-proto ====
void sub_5B7700()
{
  dbl_ABF0C0 = Math::ArcTan((double)dword_ABF108 * 0.00390625); /*0x5b7717*/
}



// ==== 0x005B7730  sub_5B7730  this=-  sig=ida-proto ====
void sub_5B7730()
{
  dbl_ABF0D8 = Math::ArcTan((double)(2 * dword_ABF108) / dbl_ABF0B0); /*0x5b7752*/
}



// ==== 0x005B7760  sub_5B7760  this=-  sig=ida-proto ====
__int64 sub_5B7760()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_ABF108) + 0.5); /*0x5b777b*/
  dword_ABF0FC = result; /*0x5b7780*/
  return result; /*0x5b7786*/
}



// ==== 0x005B7790  sub_5B7790  this=-  sig=ida-proto ====
int sub_5B7790()
{
  word_ABF0A8 = 0; /*0x5b7792*/
  word_ABF0AA = 0; /*0x5b7798*/
  return 0; /*0x5b779e*/
}



// ==== 0x005B77A0  sub_5B77A0  this=-  sig=ida-proto ====
int sub_5B77A0()
{
  dword_ABF0C8 = 0; /*0x5b77a2*/
  dword_ABF0CC = 0; /*0x5b77a7*/
  dword_ABF0D0 = 0; /*0x5b77ac*/
  return 0; /*0x5b77b1*/
}



// ==== 0x005B77C0  sub_5B77C0  this=-  sig=ida-proto ====
int sub_5B77C0()
{
  dword_ABF0F8 = 0; /*0x5b77c5*/
  dword_ABF0F0 = 128; /*0x5b77cf*/
  dword_ABF0F4 = 128; /*0x5b77d4*/
  return 128; /*0x5b77d9*/
}



// ==== 0x005B77E0  ModemHost::Dialog  this=ModemHost  sig=csp ====
char __thiscall ModemHost::Dialog(ModemHost *this)
{
  int v1; // edi
  HWND Dialog; // eax
  int v4; // edi
  int v5; // edi
  TechnoTypeClass *v6; // ecx
  int v8; // [esp-4h] [ebp-14h]
  char v9; // [esp+Fh] [ebp-1h]

  v9 = 0; /*0x5b77ed*/
  Debug::Log(); /*0x5b77f1*/
  this->ModemHost_field_0x04 = -1; /*0x5b7807*/
  Dialog = (HWND)CreateDialog(0xF1u, (INT_PTR (__stdcall *)(HWND, UINT, WPARAM, LPARAM))NetworkGameSetup::DlgProc, 0); /*0x5b780a*/
  *(_DWORD *)this->__pad_0 = Dialog; /*0x5b7811*/
  if ( Dialog ) /*0x5b7813*/
  {
    v8 = v1; /*0x5b7819*/
    SetWindowLongA(Dialog, 8, (LONG)this); /*0x5b781e*/
    ModemHost::InitDialog(this); /*0x5b7826*/
    Dialog::Show(*(Dialog **)this->__pad_0); /*0x5b782d*/
    LOBYTE(this->ModemHost_field_0x08) = 0; /*0x5b7832*/
    BYTE1(this->ModemHost_field_0x08) = 1; /*0x5b7835*/
    v4 = *(_DWORD *)&stru_88732C.__pad_6[14]; /*0x5b783e*/
    if ( *(_DWORD *)&stru_88732C.__pad_6[6] != -1 ) /*0x5b7846*/
      v4 += Timer::GetTicks() - *(_DWORD *)&stru_88732C.__pad_6[6]; /*0x5b7858*/
    *((_DWORD *)this + 3) = v4; /*0x5b785a*/
    this->q004 = 10000; /*0x5b785d*/
    v5 = *(_DWORD *)&stru_88732C.__pad_6[14]; /*0x5b7869*/
    if ( *(_DWORD *)&stru_88732C.__pad_6[6] != -1 ) /*0x5b7871*/
      v5 += Timer::GetTicks() - *(_DWORD *)&stru_88732C.__pad_6[6]; /*0x5b7883*/
    *((_DWORD *)this + 5) = v5; /*0x5b7885*/
    *((_DWORD *)this + 6) = 1200; /*0x5b7888*/
    *((_DWORD *)this + 7) = 0; /*0x5b788f*/
    this->q008 = 0; /*0x5b7892*/
    *((_WORD *)this + 17) = 0; /*0x5b7895*/
    *((_DWORD *)this + 19) = -1; /*0x5b7899*/
    *((_DWORD *)this + 20) = -1; /*0x5b789c*/
    g_MissionQueueFrame.localVariables[418] = (int)this; /*0x5b789f*/
    *((_DWORD *)this + 21) = GameConfig::ComputeHash(); /*0x5b78aa*/
    LoadArtINI(); /*0x5b78ad*/
    *((_DWORD *)this + 22) = unknown_libname_29(); /*0x5b78b7*/
    *((_DWORD *)this + 23) = unknown_libname_30(); /*0x5b78c5*/
    while ( 1 ) /*0x5b78c8*/
    {
      this->ModemHost_field_0x04 = -1; /*0x5b78c8*/
      do /*0x5b78f2*/
      {
        if ( (unsigned __int8)Dialog::PumpMessages() == 1 ) /*0x5b78d2*/
          break; /*0x5b78d2*/
        CellClass::SetOccupancy((int)this, 0); /*0x5b78d7*/
        if ( ModemGuest::ProcessPacket((int)this, 0) == 1 ) /*0x5b78e6*/
          break; /*0x5b78e6*/
        LOBYTE(v6) = 0; /*0x5b78e8*/
        ScreenSaver::Process(v6, v8); /*0x5b78ea*/
      }
      while ( this->ModemHost_field_0x04 < 0 ); /*0x5b78f2*/
      if ( this->ModemHost_field_0x04 != 1 ) /*0x5b78f8*/
        break; /*0x5b78f8*/
      ShowWindow(*(HWND *)this->__pad_0, 0); /*0x5b78fe*/
      if ( ModemHost::StartGame((int)this, 0) == 1 ) /*0x5b790a*/
      {
        v9 = 1; /*0x5b7915*/
        break; /*0x5b7915*/
      }
      ShowWindow(*(HWND *)this->__pad_0, 5); /*0x5b7911*/
    }
    Dialog::Destroy(*(Dialog **)this->__pad_0); /*0x5b791a*/
    g_MissionQueueFrame.localVariables[418] = 0; /*0x5b7921*/
    if ( LOBYTE(this->ModemHost_field_0x08) == 1 ) /*0x5b792d*/
      SaveConfigWOL((ObjectClass *)&dword_A8B238); /*0x5b7934*/
  }
  if ( this->ModemHost_field_0x04 == 2 ) /*0x5b793d*/
    SendSignOffEvent(); /*0x5b7941*/
  Debug::Log(); /*0x5b795f*/
  return v9; /*0x5b7969*/
}



// ==== 0x005B7970  NetworkGameSetup::DlgProc  this=NetworkGameSetup  sig=csp ====
int __stdcall NetworkGameSetup_DlgProc(HWND hWnd, unsigned int a2, unsigned int a3, HWND a4)
{
  int result; // eax
  LONG WindowLongA; // ebp
  HWND v6; // eax
  HWND v7; // esi
  unsigned int v8; // eax
  HWND v9; // eax
  HWND v10; // esi
  HWND v11; // eax
  HWND v12; // eax
  HWND v13; // eax
  HWND v14; // eax
  HWND v15; // eax
  HWND v16; // eax
  HWND v17; // esi
  LRESULT v18; // eax
  LRESULT v19; // eax
  HWND v20; // eax
  HWND v21; // esi
  HWND v22; // eax
  HWND v23; // eax
  LRESULT v24; // eax
  HWND v25; // eax
  HWND v26; // eax
  HWND v27; // eax
  HWND DlgItem; // eax
  wchar_t v29[20]; // [esp+Ch] [ebp-228h] BYREF
  wchar_t lParam[256]; // [esp+34h] [ebp-200h] BYREF

  result = BaseDialogProc(hWnd, a2, a3, (unsigned int)a4); /*0x5b7999*/
  if ( result ) /*0x5b79a0*/
    return result; /*0x5b79a0*/
  WindowLongA = GetWindowLongA(hWnd, 8); /*0x5b79b0*/
  if ( a2 > 0x111 ) /*0x5b79be*/
  {
    if ( a2 >= 0x114 && a2 <= 0x115 ) /*0x5b80d5*/
    {
      if ( GetDlgItem(hWnd, 1641) == a4 ) /*0x5b80eb*/
      {
        DlgItem = GetDlgItem(*(HWND *)WindowLongA, 1641); /*0x5b80f6*/
        if ( DlgItem ) /*0x5b80fa*/
        {
          MEMORY[0xA8B270] = SendMessageA(DlgItem, 0x400u, 0, 0); /*0x5b8110*/
          *(_BYTE *)(WindowLongA + 9) = 1; /*0x5b8115*/
          return 0; /*0x5b8125*/
        }
      }
      else
      {
        if ( GetDlgItem(hWnd, 1360) == a4 ) /*0x5b8132*/
        {
          NetworkGameSetup::ReadRulesInitConfig(WindowLongA); /*0x5b8136*/
          return 0; /*0x5b8147*/
        }
        if ( GetDlgItem(hWnd, 1026) == a4 ) /*0x5b8154*/
        {
          NetworkGameSetup::ReadRulesBases(WindowLongA); /*0x5b8158*/
          return 0; /*0x5b8169*/
        }
        if ( GetDlgItem(hWnd, 1362) == a4 ) /*0x5b8176*/
        {
          NetworkGameSetup::ReadRulesAlliesAllowed(WindowLongA); /*0x5b817a*/
          return 0; /*0x5b818b*/
        }
        if ( GetDlgItem(hWnd, 1363) == a4 ) /*0x5b8198*/
        {
          NetworkGameSetup::ReadRulesUnknown(WindowLongA); /*0x5b819c*/
          return 0; /*0x5b81ad*/
        }
        if ( GetDlgItem(hWnd, 1321) == a4 ) /*0x5b81ba*/
          NetworkGameSetup::ReadRulesEngineerCount(WindowLongA); /*0x5b81be*/
      }
    }
    return 0; /*0x5b80fa*/
  }
  if ( a2 != 273 ) /*0x5b79c9*/
  {
    if ( a2 == 2 ) /*0x5b79ce*/
    {
      if ( g_UIControlState ) /*0x5b7a09*/
      {
        NetworkGameSetup::DeleteComPtr(g_UIControlState, 1); /*0x5b7a11*/
        g_UIControlState = 0; /*0x5b7a19*/
        return 0; /*0x5b7a2c*/
      }
    }
    else if ( a2 == 15 ) /*0x5b79d3*/
    {
      if ( g_UIControlState ) /*0x5b79e1*/
        Skirmish::RenderPreview(g_UIControlState, hWnd); /*0x5b79e4*/
      ValidateRect(hWnd, 0); /*0x5b79ec*/
      return 0; /*0x5b79fe*/
    }
    return 0; /*0x5b79d3*/
  }
  if ( (unsigned __int16)a3 > 0x596u ) /*0x5b7a3b*/
  {
    switch ( (__int16)a3 ) /*0x5b7de9*/
    {
      case 1450: /*0x5b7de9*/
        if ( HIWORD(a3) ) /*0x5b80a6*/
          return 0; /*0x5b80a9*/
        SkirmishDialog::HandleGameStart(WindowLongA); /*0x5b80b1*/
        result = 0; /*0x5b80b9*/
        break; /*0x5b80c2*/
      case 1473: /*0x5b7de9*/
        if ( HIWORD(a3) != 1281 && HIWORD(a3) != 768 ) /*0x5b7e71*/
          return 0; /*0x5b7e71*/
        v20 = GetDlgItem(*(HWND *)WindowLongA, 1473); /*0x5b7e80*/
        v21 = v20; /*0x5b7e86*/
        if ( !v20 ) /*0x5b7e8a*/
          return 0; /*0x5b7e8a*/
        SendMessageA(v20, 0x4B3u, 0x14u, (LPARAM)v29); /*0x5b7ea3*/
        WideString::Trim(v29); /*0x5b7ea9*/
        if ( HIWORD(a3) != 768 ) /*0x5b7eb3*/
          SendMessageA(v21, 0x4B2u, 0, (LPARAM)v29); /*0x5b7ec2*/
        strcpy(unk_A8B380, ToWideStringChar((char *)v29)); /*0x5b7eeb*/
        *(_BYTE *)(WindowLongA + 9) = 1; /*0x5b7ef4*/
        *(_BYTE *)(WindowLongA + 8) = 1; /*0x5b7ef7*/
        result = 0; /*0x5b7ed2*/
        break; /*0x5b7f04*/
      case 1572: /*0x5b7de9*/
        v25 = GetDlgItem(*(HWND *)WindowLongA, 1572); /*0x5b7fd5*/
        if ( !v25 ) /*0x5b7fdd*/
          return 0; /*0x5b7fdd*/
        MEMORY[0xA8B260] = SendMessageA(v25, 0xF0u, 0, 0) == 1; /*0x5b7ffd*/
        *(_BYTE *)(WindowLongA + 9) = 1; /*0x5b8002*/
        result = 0; /*0x5b8008*/
        break; /*0x5b8011*/
      case 1639: /*0x5b7de9*/
        if ( HIWORD(a3) != 1 ) /*0x5b7dfa*/
          return 0; /*0x5b7dfa*/
        v16 = GetDlgItem(*(HWND *)WindowLongA, 1639); /*0x5b7e09*/
        v17 = v16; /*0x5b7e0f*/
        if ( !v16 ) /*0x5b7e13*/
          return 0; /*0x5b7e13*/
        v18 = SendMessageA(v16, 0x147u, 0, 0); /*0x5b7e29*/
        if ( v18 == -1 ) /*0x5b7e2e*/
          return 0; /*0x5b7e2e*/
        v19 = SendMessageA(v17, 0x150u, v18, 0); /*0x5b7e3d*/
        if ( v19 == -1 ) /*0x5b7e42*/
          return 0; /*0x5b7e42*/
        dword_A8B3AC = v19; /*0x5b7e48*/
        *(_BYTE *)(WindowLongA + 9) = 1; /*0x5b7e4d*/
        *(_BYTE *)(WindowLongA + 8) = 1; /*0x5b7e50*/
        result = 0; /*0x5b7e56*/
        break; /*0x5b7e5f*/
      case 1642: /*0x5b7de9*/
        v23 = GetDlgItem(*(HWND *)WindowLongA, 1642); /*0x5b7f5f*/
        if ( !v23 ) /*0x5b7f63*/
          return 0; /*0x5b7f63*/
        v24 = SendMessageA(v23, 0xF0u, 0, 0); /*0x5b7f73*/
        MEMORY[0xA8B258] = v24 == 1; /*0x5b7f85*/
        if ( v24 != 1 && GetDlgItem(*(HWND *)WindowLongA, 1358) ) /*0x5b7f95*/
        {
          MEMORY[0xA8B262] = 0; /*0x5b7f9d*/
          SendDlgItemMessageA(*(HWND *)WindowLongA, 1358, 0xF1u, 0, 0); /*0x5b7fb4*/
        }
        *(_BYTE *)(WindowLongA + 9) = 1; /*0x5b7fba*/
        result = 0; /*0x5b7fc0*/
        break; /*0x5b7fc9*/
      case 1643: /*0x5b7de9*/
        v22 = GetDlgItem(*(HWND *)WindowLongA, 1643); /*0x5b7f10*/
        if ( !v22 ) /*0x5b7f18*/
          return 0; /*0x5b7f18*/
        LOBYTE(dword_A8B320) = SendMessageA(v22, 0xF0u, 0, 0) == 1; /*0x5b7f38*/
        *(_BYTE *)(WindowLongA + 9) = 1; /*0x5b7f3e*/
        result = 0; /*0x5b7f44*/
        break; /*0x5b7f4d*/
      case 1690: /*0x5b7de9*/
        v26 = GetDlgItem(*(HWND *)WindowLongA, 1690); /*0x5b801d*/
        if ( !v26 ) /*0x5b8025*/
          return 0; /*0x5b8025*/
        MEMORY[0xA8B263] = SendMessageA(v26, 0xF0u, 0, 0) == 1; /*0x5b8045*/
        *(_BYTE *)(WindowLongA + 9) = 1; /*0x5b804b*/
        result = 0; /*0x5b8051*/
        break; /*0x5b805a*/
      case 1693: /*0x5b7de9*/
        v27 = GetDlgItem(*(HWND *)WindowLongA, 1693); /*0x5b8066*/
        if ( !v27 ) /*0x5b806e*/
          return 0; /*0x5b806e*/
        MEMORY[0xA8B262] = SendMessageA(v27, 0xF0u, 0, 0) == 1; /*0x5b808e*/
        *(_BYTE *)(WindowLongA + 9) = 1; /*0x5b8094*/
        result = 0; /*0x5b809a*/
        break; /*0x5b80a3*/
      default:
        return 0;
    }
  }
  else
  {
    if ( (unsigned __int16)a3 == 1430 ) /*0x5b7a41*/
    {
      v15 = GetDlgItem(*(HWND *)WindowLongA, 1430); /*0x5b7d91*/
      if ( v15 ) /*0x5b7d99*/
      {
        byte_A8B31D = SendMessageA(v15, 0xF0u, 0, 0) == 1; /*0x5b7db9*/
        *(_BYTE *)(WindowLongA + 9) = 1; /*0x5b7dbf*/
        return 0; /*0x5b7dce*/
      }
      return 0; /*0x5b7d99*/
    }
    if ( (unsigned __int16)a3 > 0x54Cu ) /*0x5b7a4c*/
    {
      switch ( (unsigned __int16)a3 ) /*0x5b7c5c*/
      {
        case 0x54Du: /*0x5b7c5c*/
          v14 = GetDlgItem(*(HWND *)WindowLongA, 1357); /*0x5b7d48*/
          if ( v14 ) /*0x5b7d50*/
          {
            byte_A8B31F = SendMessageA(v14, 0xF0u, 0, 0) == 1; /*0x5b7d70*/
            *(_BYTE *)(WindowLongA + 9) = 1; /*0x5b7d76*/
            return 0; /*0x5b7d85*/
          }
          break;
        case 0x54Eu: /*0x5b7c5c*/
          v13 = GetDlgItem(*(HWND *)WindowLongA, 1358); /*0x5b7cc6*/
          if ( v13 ) /*0x5b7cca*/
          {
            MEMORY[0xA8B262] = SendMessageA(v13, 0xF0u, 0, 0) == 1; /*0x5b7cea*/
            *(_BYTE *)(WindowLongA + 9) = 1; /*0x5b7cf0*/
            if ( MEMORY[0xA8B262] ) /*0x5b7cfa*/
            {
              if ( GetDlgItem(*(HWND *)WindowLongA, 1642) ) /*0x5b7d09*/
              {
                MEMORY[0xA8B258] = 1; /*0x5b7d15*/
                SendDlgItemMessageA(*(HWND *)WindowLongA, 1642, 0xF1u, 1u, 0); /*0x5b7d2a*/
                return 0; /*0x5b7d3c*/
              }
            }
          }
          break;
        case 0x551u: /*0x5b7c5c*/
          v12 = GetDlgItem(*(HWND *)WindowLongA, 1361); /*0x5b7c77*/
          if ( v12 ) /*0x5b7c7f*/
          {
            MEMORY[0xA8B26C] = SendMessageA(v12, 0xF0u, 0, 0) == 1; /*0x5b7c9f*/
            *(_BYTE *)(WindowLongA + 9) = 1; /*0x5b7ca5*/
            return 0; /*0x5b7cb4*/
          }
          break;
      }
      return 0; /*0x5b7c7f*/
    }
    if ( (unsigned __int16)a3 == 1356 ) /*0x5b7a52*/
    {
      v11 = GetDlgItem(*(HWND *)WindowLongA, 1356); /*0x5b7c18*/
      if ( v11 ) /*0x5b7c20*/
      {
        MEMORY[0xA8B261] = SendMessageA(v11, 0xF0u, 0, 0) == 1; /*0x5b7c40*/
        *(_BYTE *)(WindowLongA + 9) = 1; /*0x5b7c45*/
        return 0; /*0x5b7c54*/
      }
      return 0; /*0x5b7c20*/
    }
    if ( (unsigned __int16)a3 > 0x405u ) /*0x5b7a5d*/
    {
      if ( (unsigned __int16)a3 == 1344 && HIWORD(a3) == 1281 ) /*0x5b7b77*/
      {
        memset(lParam, 0, sizeof(lParam)); /*0x5b7b8d*/
        v9 = GetDlgItem(*(HWND *)WindowLongA, 1344); /*0x5b7b93*/
        v10 = v9; /*0x5b7b99*/
        if ( v9 ) /*0x5b7b9d*/
        {
          SendMessageA(v9, 0x4B3u, 0x100u, (LPARAM)lParam); /*0x5b7bb9*/
          SendMessageA(v10, 0x4B2u, 0, (LPARAM)&g_TypeClass_DefaultString); /*0x5b7bc8*/
          if ( wcslen(lParam) ) /*0x5b7bcf*/
          {
            if ( lParam[0] != 13 ) /*0x5b7be5*/
            {
              WideString::Trim(lParam); /*0x5b7bef*/
              NetworkGameSetup::SendGameSetupPacket(lParam); /*0x5b7bfb*/
              return 0; /*0x5b7c0c*/
            }
          }
        }
      }
      return 0; /*0x5b7be5*/
    }
    if ( (unsigned __int16)a3 != 1029 ) /*0x5b7a63*/
    {
      if ( (unsigned __int16)a3 == 1 ) /*0x5b7a66*/
      {
        if ( !HIWORD(a3) && (unsigned __int8)GameOptions::ReadSettings(WindowLongA) == 1 ) /*0x5b7aac*/
        {
          Game::BuildGameSetupPacket(WindowLongA); /*0x5b7ab4*/
          *(_DWORD *)(WindowLongA + 4) = 1; /*0x5b7ab9*/
          return 0; /*0x5b7ac8*/
        }
      }
      else if ( (unsigned __int16)a3 == 2 && !HIWORD(a3) ) /*0x5b7a6f*/
      {
        GameOptions::ReadSettings(WindowLongA); /*0x5b7a7a*/
        *(_DWORD *)(WindowLongA + 4) = 2; /*0x5b7a7f*/
        return 0; /*0x5b7a92*/
      }
      return 0; /*0x5b7a72*/
    }
    if ( HIWORD(a3) != 1 ) /*0x5b7ad5*/
      return 0; /*0x5b7ad5*/
    v6 = GetDlgItem(*(HWND *)WindowLongA, 1029); /*0x5b7ae4*/
    v7 = v6; /*0x5b7aea*/
    if ( !v6 ) /*0x5b7aee*/
      return 0; /*0x5b7aee*/
    v8 = SendMessageA(v6, 0x147u, 0, 0); /*0x5b7b04*/
    if ( v8 == -1 ) /*0x5b7b09*/
      return 0; /*0x5b81c3*/
    dword_A8B394 = v8; /*0x5b7b0f*/
    *(_BYTE *)(WindowLongA + 9) = 1; /*0x5b7b14*/
    *(_BYTE *)(WindowLongA + 8) = 1; /*0x5b7b19*/
    if ( v8 >= 8 ) /*0x5b7b1c*/
      SendMessageA(v7, 0x498u, 0, (LPARAM)Math::InitDegToRad); /*0x5b7b52*/
    else
      SendMessageA(v7, 0x498u, 0, dword_8316A8[v8]); /*0x5b7b33*/
    return 0; /*0x5b7b38*/
  }
  return result; /*0x5b79f3*/
}



// ==== 0x005B82F0  ModemHost::InitDialog  this=ModemHost  sig=csp ====
void __thiscall ModemHost::InitDialog(ModemHost *this)
{
  ObjectClass *v1; // edi
  HWND *v2; // ebp
  int v3; // ecx
  char v4; // al
  HWND (__stdcall *v5)(HWND, int); // ebx
  HWND DlgItem; // eax
  HWND v7; // edi
  char *v8; // eax
  HWND v9; // eax
  HWND v10; // edi
  wchar_t *StringCSF; // eax
  wchar_t *v12; // eax
  wchar_t *v13; // eax
  wchar_t *v14; // eax
  wchar_t *v15; // eax
  wchar_t *v16; // eax
  wchar_t *v17; // eax
  wchar_t *v18; // eax
  WPARAM v19; // ebx
  LPARAM *v20; // ebp
  HWND v21; // eax
  HWND v22; // edi
  LPARAM i; // ebp
  int v24; // eax
  LRESULT v25; // eax
  WPARAM ListBoxItem; // eax
  HWND v27; // edi
  HWND v28; // eax
  HWND v29; // edi
  HWND v30; // edi
  LPARAM v31; // ebp
  HWND v32; // eax
  HWND v33; // edi
  HWND v34; // eax
  HWND v35; // edi
  HWND v36; // edi
  HWND v37; // eax
  HWND v38; // eax
  HWND v39; // eax
  HWND v40; // eax
  HWND v41; // eax
  HWND v42; // eax
  HWND v43; // eax
  HWND v44; // eax
  HWND v45; // eax
  HWND v46; // eax
  unsigned int v47; // eax
  int v48; // eax
  Skirmish *v49; // edi
  HWND v50; // eax
  _DWORD *v51; // eax
  char v52; // bl
  ObjectClass *v53; // eax
  Skirmish *v54; // eax
  HWND *v55; // ebx
  HWND v56; // esi
  HWND v57; // eax
  HWND *lParam; // [esp+4h] [ebp-A74h]
  BufferIOFileClass v59; // [esp+8h] [ebp-A70h] BYREF
  int v60[3]; // [esp+60h] [ebp-A18h] BYREF
  int v61; // [esp+6Ch] [ebp-A0Ch]
  wchar_t Buffer[256]; // [esp+74h] [ebp-A04h] BYREF
  wchar_t Format[1026]; // [esp+274h] [ebp-804h] BYREF

  v2 = (HWND *)this; /*0x5b82fa*/
  *(_DWORD *)v59.RawFileClass = this; /*0x5b8301*/
  Debug::Log(); /*0x5b8305*/
  if ( LOBYTE(stru_82BA00.BuildingAnim[7]) == 1 ) /*0x5b8314*/
  {
    LOBYTE(stru_82BA00.BuildingAnim[7]) = 0; /*0x5b831f*/
    nullsub_38(v1); /*0x5b8326*/
    *(_DWORD *)&stru_A8B250.__pad_0[12] = *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 5252); /*0x5b8336*/
    stru_A8B250.__pad_0[8] = *(_BYTE *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 5295); /*0x5b8342*/
    stru_A8B250.__pad_0[16] = *(_BYTE *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 5292); /*0x5b834e*/
    stru_A8B250.__pad_0[17] = *(_BYTE *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 5297); /*0x5b835a*/
    *(_DWORD *)&stru_A8B250.__pad_0[36] = 0; /*0x5b8360*/
    v3 = *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 5268); /*0x5b836a*/
    stru_A8B250.__pad_0[18] = 0; /*0x5b8370*/
    *(_DWORD *)&stru_A8B250.__pad_0[32] = v3; /*0x5b8377*/
    stru_A8B250.__pad_0[19] = *(_BYTE *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 5305); /*0x5b8389*/
    v4 = *(_BYTE *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 5306); /*0x5b838f*/
    *(_DWORD *)&stru_A8B250.__pad_0[24] = stru_A8EB00.ObjectTypeClass[24]; /*0x5b8395*/
    stru_A8B250.__pad_0[20] = v4; /*0x5b839b*/
    stru_A8B250.__pad_0[28] = 0; /*0x5b83a0*/
  }
  v5 = GetDlgItem; /*0x5b83aa*/
  DlgItem = GetDlgItem(*v2, 1473); /*0x5b83b6*/
  v7 = DlgItem; /*0x5b83be*/
  if ( DlgItem ) /*0x5b83c2*/
  {
    SendMessageA(DlgItem, 0xC5u, 0x13u, 0); /*0x5b83ce*/
    v8 = CharToWideString(unk_A8B380); /*0x5b83d5*/
    SendMessageA(v7, 0x4B2u, 0, (LPARAM)v8); /*0x5b83e3*/
  }
  Debug::Log(); /*0x5b83ef*/
  v9 = GetDlgItem(*v2, 1029); /*0x5b8400*/
  v10 = v9; /*0x5b8402*/
  if ( v9 ) /*0x5b8406*/
  {
    SendMessageA(v9, 0x14Bu, 0, 0); /*0x5b8416*/
    StringCSF = GetStringCSF((wchar_t *)&stru_82BA00.?[37], 0, &stru_82BA00.__pad_F70[52], 407); /*0x5b8429*/
    SendMessageA(v10, 0x4C1u, 0xFFFFFFFF, (LPARAM)StringCSF); /*0x5b8437*/
    v12 = GetStringCSF((wchar_t *)&stru_82BA00.?[35], 0, &stru_82BA00.__pad_F70[52], 408); /*0x5b844a*/
    SendMessageA(v10, 0x4C1u, 0xFFFFFFFF, (LPARAM)v12); /*0x5b8458*/
    v13 = GetStringCSF((wchar_t *)&stru_82BA00.?[32], 0, &stru_82BA00.__pad_F70[52], 409); /*0x5b846b*/
    SendMessageA(v10, 0x4C1u, 0xFFFFFFFF, (LPARAM)v13); /*0x5b8479*/
    v14 = GetStringCSF((wchar_t *)&stru_82BA00.?[29], 0, &stru_82BA00.__pad_F70[52], 410); /*0x5b848c*/
    SendMessageA(v10, 0x4C1u, 0xFFFFFFFF, (LPARAM)v14); /*0x5b849a*/
    v15 = GetStringCSF((wchar_t *)&stru_82BA00.?[26], 0, &stru_82BA00.__pad_F70[52], 411); /*0x5b84ad*/
    SendMessageA(v10, 0x4C1u, 0xFFFFFFFF, (LPARAM)v15); /*0x5b84bb*/
    v16 = GetStringCSF((wchar_t *)&stru_82BA00.?[22], 0, &stru_82BA00.__pad_F70[52], 412); /*0x5b84ce*/
    SendMessageA(v10, 0x4C1u, 0xFFFFFFFF, (LPARAM)v16); /*0x5b84dc*/
    v17 = GetStringCSF((wchar_t *)&stru_82BA00.?[19], 0, &stru_82BA00.__pad_F70[52], 413); /*0x5b84ef*/
    SendMessageA(v10, 0x4C1u, 0xFFFFFFFF, (LPARAM)v17); /*0x5b84fd*/
    v18 = GetStringCSF((wchar_t *)&stru_82BA00.?[16], 0, &stru_82BA00.__pad_F70[52], 414); /*0x5b8510*/
    SendMessageA(v10, 0x4C1u, 0xFFFFFFFF, (LPARAM)v18); /*0x5b851e*/
    v19 = 0; /*0x5b8520*/
    v20 = dword_8316A8; /*0x5b8522*/
    do /*0x5b853e*/
      SendMessageA(v10, 0x498u, v19++, *v20++); /*0x5b8532*/
    while ( (int)v20 < (int)&off_8316C8 ); /*0x5b853e*/
    dword_A8B394 = dword_A8B3B4; /*0x5b854e*/
    SendMessageA(v10, 0x14Eu, dword_A8B3B4, 0); /*0x5b8553*/
    v5 = GetDlgItem; /*0x5b8555*/
    v2 = *(HWND **)v59.RawFileClass; /*0x5b855b*/
  }
  Debug::Log(); /*0x5b856b*/
  v21 = v5(*v2, 1639); /*0x5b857c*/
  v22 = v21; /*0x5b857e*/
  if ( v21 ) /*0x5b8582*/
  {
    SendMessageA(v21, 0x14Bu, 0, 0); /*0x5b858e*/
    for ( i = 0; i < dword_A83CA8; ++i ) /*0x5b8599*/
    {
      v24 = *((_DWORD *)dword_A83C9C + i); /*0x5b85a1*/
      if ( *(_BYTE *)(v24 + 421) ) /*0x5b85a4*/
      {
        v25 = SendMessageA(v22, 0x4C2u, 0, *(_DWORD *)(v24 + 96)); /*0x5b85ba*/
        SendMessageA(v22, 0x151u, v25, i); /*0x5b85c4*/
      }
    }
    ListBoxItem = FindListBoxItem(v22, -1, dword_A8B3AC); /*0x5b85dc*/
    SendMessageA(v22, 0x14Eu, ListBoxItem, 0); /*0x5b85ea*/
    v2 = *(HWND **)v59.RawFileClass; /*0x5b85ec*/
  }
  v27 = v5(*v2, 1641); /*0x5b85fb*/
  if ( v27 ) /*0x5b85ff*/
  {
    lParam = *(HWND **)&stru_A8B250.__pad_0[32]; /*0x5b860e*/
    SendMessageA( /*0x5b8630*/
      v27,
      0x406u,
      1u,
      *(unsigned __int16 *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 5264)
    | (*(unsigned __int16 *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 5272) << 16));
    SendMessageA(v27, 0x405u, 1u, (LPARAM)lParam); /*0x5b863f*/
  }
  Debug::Log(); /*0x5b864c*/
  v28 = v5(*v2, 1360); /*0x5b865d*/
  v29 = v28; /*0x5b865f*/
  if ( v28 ) /*0x5b8663*/
  {
    lParam = (HWND *)g_RulesInitConfig; /*0x5b8678*/
    SendMessageA(v28, 0x406u, 1u, 655361); /*0x5b867c*/
    SendMessageA(v29, 0x405u, 1u, (LPARAM)lParam); /*0x5b868b*/
  }
  Debug::Log(); /*0x5b8699*/
  v30 = v5(*v2, 1026); /*0x5b86ac*/
  if ( v30 ) /*0x5b86b0*/
  {
    v31 = *(_DWORD *)&stru_A8B250.__pad_0[12]; /*0x5b86bb*/
    SendMessageA( /*0x5b86dd*/
      v30,
      0x406u,
      1u,
      *(unsigned __int16 *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 5248)
    | (*(unsigned __int16 *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 5256) << 16));
    SendMessageA(v30, 0x405u, 1u, v31); /*0x5b86e8*/
    SendMessageA(v30, 0x4ABu, 0, 250); /*0x5b86f7*/
    v2 = *(HWND **)v59.RawFileClass; /*0x5b86f9*/
  }
  Debug::Log(); /*0x5b8708*/
  v32 = v5(*v2, 1362); /*0x5b8719*/
  v33 = v32; /*0x5b871b*/
  if ( v32 ) /*0x5b871f*/
  {
    lParam = *(HWND **)&stru_A8B250.__pad_0[36]; /*0x5b8734*/
    SendMessageA(v32, 0x406u, 1u, 393216); /*0x5b8738*/
    SendMessageA(v33, 0x405u, 1u, (LPARAM)lParam); /*0x5b8747*/
  }
  Debug::Log(); /*0x5b8755*/
  v34 = v5(*v2, 1321); /*0x5b8766*/
  v35 = v34; /*0x5b8768*/
  if ( v34 ) /*0x5b876c*/
  {
    SendMessageA(v34, 0x406u, 1u, 393216); /*0x5b877b*/
    SendMessageA(v35, 0x405u, 1u, 6 - stru_A8EB00.ObjectTypeClass[24]); /*0x5b8793*/
  }
  Debug::Log(); /*0x5b87a1*/
  v36 = v5(*v2, 1363); /*0x5b87b4*/
  if ( v36 ) /*0x5b87b8*/
  {
    lParam = *(HWND **)&stru_A8B250.__pad_0[40]; /*0x5b87cc*/
    SendMessageA(v36, 0x406u, 1u, 0x20000); /*0x5b87d0*/
    SendMessageA(v36, 0x405u, 1u, (LPARAM)lParam); /*0x5b87df*/
  }
  Debug::Log(); /*0x5b87ed*/
  v37 = v5(*v2, 1643); /*0x5b87fe*/
  if ( v37 ) /*0x5b8802*/
    SendMessageA(v37, 0xF1u, dword_A8B320 == 1, 0); /*0x5b881b*/
  Debug::Log(); /*0x5b8836*/
  v38 = v5(*v2, 1642); /*0x5b8847*/
  if ( v38 ) /*0x5b884b*/
    SendMessageA(v38, 0xF1u, stru_A8B250.__pad_0[8] == 1, 0); /*0x5b8864*/
  Debug::Log(); /*0x5b887f*/
  v39 = v5(*v2, 1356); /*0x5b8890*/
  if ( v39 ) /*0x5b8894*/
    SendMessageA(v39, 0xF1u, stru_A8B250.__pad_0[17] == 1, 0); /*0x5b88ad*/
  Debug::Log(); /*0x5b88c8*/
  v40 = v5(*v2, 1357); /*0x5b88d9*/
  if ( v40 ) /*0x5b88dd*/
    SendMessageA(v40, 0xF1u, byte_A8B31F == 1, 0); /*0x5b88f6*/
  Debug::Log(); /*0x5b8911*/
  v41 = v5(*v2, 1572); /*0x5b8922*/
  if ( v41 ) /*0x5b8926*/
    SendMessageA(v41, 0xF1u, stru_A8B250.__pad_0[16] == 1, 0); /*0x5b893f*/
  Debug::Log(); /*0x5b895a*/
  v42 = v5(*v2, 1430); /*0x5b896b*/
  if ( v42 ) /*0x5b896f*/
    SendMessageA(v42, 0xF1u, byte_A8B31D == 1, 0); /*0x5b8988*/
  Debug::Log(); /*0x5b89a3*/
  v43 = v5(*v2, 1358); /*0x5b89b4*/
  if ( v43 ) /*0x5b89b8*/
    SendMessageA(v43, 0xF1u, stru_A8B250.__pad_0[18] == 1, 0); /*0x5b89d1*/
  Debug::Log(); /*0x5b89ec*/
  v44 = v5(*v2, 1690); /*0x5b89fd*/
  if ( v44 ) /*0x5b8a01*/
    SendMessageA(v44, 0xF1u, stru_A8B250.__pad_0[19] == 1, 0); /*0x5b8a1a*/
  Debug::Log(); /*0x5b8a35*/
  v45 = v5(*v2, 1693); /*0x5b8a46*/
  if ( v45 ) /*0x5b8a4a*/
    SendMessageA(v45, 0xF1u, stru_A8B250.__pad_0[20] == 1, 0); /*0x5b8a63*/
  Debug::Log(); /*0x5b8a7e*/
  v46 = v5(*v2, 1361); /*0x5b8a8f*/
  if ( v46 ) /*0x5b8a93*/
    SendMessageA(v46, 0xF1u, stru_A8B250.__pad_0[28] == 1, 0); /*0x5b8aac*/
  Debug::Log(); /*0x5b8ac7*/
  NetworkBuffer::GetField((NetworkBuffer *)&stru_A8EB00.?[252]); /*0x5b8ad4*/
  v47 = Random::Range(&Randomizer_Global, 1, 0x7FFF); /*0x5b8ae5*/
  srand(v47); /*0x5b8aeb*/
  v48 = rand(); /*0x5b8af3*/
  v49 = g_UIControlState; /*0x5b8b04*/
  *(_DWORD *)&stru_A8EB00.?[432] = v48; /*0x5b8b0a*/
  dword_A8E960[0] = dword_A8E960[0] & 0xFFFFFFEF /*0x5b8b22*/
                  | (16 * (*(_BYTE *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 5298) & 1));
  if ( g_UIControlState ) /*0x5b8b27*/
  {
    ComPtr::Dtor((ComPtr *)g_UIControlState); /*0x5b8b2b*/
    __3_YAXPAX_Z(v49); /*0x5b8b31*/
    g_UIControlState = 0; /*0x5b8b39*/
  }
  PtrVector::Destroy(&stru_A8DA74); /*0x5b8b48*/
  LoadScenarioClassByIndex(0); /*0x5b8b4f*/
  *(_DWORD *)&stru_A8B250.__pad_0[4] = 0; /*0x5b8b54*/
  v50 = v5(*v2, 1448); /*0x5b8b67*/
  SendMessageA(v50, 0x4B2u, 0, (LPARAM)MEMORY[0xA8B322]); /*0x5b8b76*/
  BYTE2(stru_A8D600.Network_field_0xC) = 1; /*0x5b8b81*/
  v51 = CCFileClass::Construct((CCFileClass *)&v59.?, byte_A8B8E0); /*0x5b8b88*/
  v52 = (*(int (__thiscall **)(_DWORD *, _DWORD))(*v51 + 20))(v51, 0); /*0x5b8b9a*/
  v61 = 0; /*0x5b8ba4*/
  Vector::Clear((int)v60); /*0x5b8bac*/
  *(_DWORD *)v59.RawFileClass = &off_7E1668; /*0x5b8bb5*/
  BufferIOFileClass::Dtor(&v59); /*0x5b8bbd*/
  if ( v52 ) /*0x5b8bc4*/
  {
    v53 = (ObjectClass *)__2_YAPAXI_Z(4u); /*0x5b8bc8*/
    if ( v53 ) /*0x5b8bd2*/
      v54 = (Skirmish *)unknown_libname_27(v53); /*0x5b8bd6*/
    else
      v54 = 0; /*0x5b8bdd*/
    g_UIControlState = v54; /*0x5b8be6*/
    PreviewClass::ReadPreview((PreviewClass *)v54, byte_A8B8E0); /*0x5b8beb*/
    v55 = lParam; /*0x5b8bf0*/
    PostMessageA(*lParam, 0xFu, 0, 0); /*0x5b8bfd*/
  }
  else
  {
    v55 = lParam; /*0x5b8c05*/
  }
  if ( strlen(byte_AC1288) > 0x4E ) /*0x5b8c1b*/
    byte_AC12D7 = 0; /*0x5b8c1d*/
  if ( strlen(byte_AC1288) ) /*0x5b8c27*/
  {
    BulkCharToWide(Format, (unsigned __int8 *)byte_AC1288, -1); /*0x5b8c41*/
    if ( &g_TypeClass_DefaultString ) /*0x5b8c4d*/
    {
      v56 = GetDlgItem(*v55, 1343); /*0x5b8c5d*/
      if ( v56 ) /*0x5b8c61*/
      {
        swprintf(Buffer, (const size_t)g_Str_Trace___s_, Format, &g_TypeClass_DefaultString); /*0x5b8c83*/
        DrawDialogText((LPARAM)Math::InitDegToRad, Buffer, v56); /*0x5b8c95*/
      }
    }
  }
  byte_AC1288[0] = 0; /*0x5b8c9a*/
  v57 = GetDlgItem(*v55, 1); /*0x5b8ca6*/
  if ( v57 ) /*0x5b8cb2*/
    EnableWindow(v57, 0); /*0x5b8cb7*/
  NullModemClass::Flush((NullModemClass *)&unk_A8EA70, 1); /*0x5b8cc4*/
  Debug::Log(); /*0x5b8cce*/
}



// ==== 0x005B8CE0  GameOptions::ReadSettings  this=GameOptions  sig=csp ====
char __thiscall GameOptions::ReadSettings(GameOptions *this)
{
  int v2; // edi
  HWND DlgItem; // eax
  wchar_t *StringCSF; // eax
  wchar_t *v5; // eax
  HWND v7; // eax
  HWND v8; // eax
  HWND v9; // eax
  HWND v10; // edi
  LRESULT v11; // eax
  HWND v12; // eax
  HWND v13; // eax
  HWND v14; // eax
  HWND v15; // eax
  HWND v16; // eax
  HWND v17; // eax
  HWND v18; // eax
  HWND v19; // eax
  HWND v20; // eax
  HWND v21; // eax
  HWND v22; // eax
  HWND v23; // eax
  HWND v24; // eax
  HWND v25; // eax
  HWND v26; // eax
  HWND v27; // eax
  int v28; // [esp+0h] [ebp-23Ch]
  wchar_t *Format; // [esp+10h] [ebp-22Ch]
  char lParam[40]; // [esp+14h] [ebp-228h] BYREF
  int Buffer[128]; // [esp+3Ch] [ebp-200h] BYREF

  Debug::Log(); /*0x5b8cf1*/
  Format = (wchar_t *)ReadPlayerCountMap(*(int *)&stru_A8B250.__pad_0[4]); /*0x5b8d0a*/
  v2 = 2; /*0x5b8d16*/
  DlgItem = GetDlgItem(*(HWND *)this->__pad_0, 1362); /*0x5b8d1b*/
  if ( DlgItem ) /*0x5b8d25*/
    v2 = SendMessageA(DlgItem, 0x400u, 0, 0) + 2; /*0x5b8d35*/
  if ( (int)Format >= v2 ) /*0x5b8d3e*/
  {
    v7 = GetDlgItem(*(HWND *)this->__pad_0, 1473); /*0x5b8dad*/
    if ( v7 ) /*0x5b8db1*/
    {
      SendMessageA(v7, 0x4B3u, 0x14u, (LPARAM)lParam); /*0x5b8dc0*/
      CopyWideToChar(unk_A8B380, lParam, -1); /*0x5b8dcd*/
    }
    Debug::Log(); /*0x5b8ddc*/
    v8 = GetDlgItem(*(HWND *)this->__pad_0, 1029); /*0x5b8dec*/
    if ( v8 ) /*0x5b8df0*/
      dword_A8B394 = SendMessageA(v8, 0x147u, 0, 0); /*0x5b8dfe*/
    Debug::Log(); /*0x5b8e0e*/
    v9 = GetDlgItem(*(HWND *)this->__pad_0, 1639); /*0x5b8e1e*/
    v10 = v9; /*0x5b8e20*/
    if ( v9 ) /*0x5b8e24*/
    {
      v11 = SendMessageA(v9, 0x147u, 0, 0); /*0x5b8e30*/
      dword_A8B3AC = SendMessageA(v10, 0x150u, v11, 0); /*0x5b8e3d*/
    }
    v12 = GetDlgItem(*(HWND *)this->__pad_0, 1641); /*0x5b8e4a*/
    if ( v12 ) /*0x5b8e4e*/
      *(_DWORD *)&stru_A8B250.__pad_0[32] = SendMessageA(v12, 0x400u, 0, 0); /*0x5b8e5c*/
    Debug::Log(); /*0x5b8e6c*/
    v13 = GetDlgItem(*(HWND *)this->__pad_0, 1360); /*0x5b8e7c*/
    if ( v13 ) /*0x5b8e80*/
      g_RulesInitConfig = SendMessageA(v13, 0x400u, 0, 0); /*0x5b8e8e*/
    Debug::Log(); /*0x5b8e9f*/
    v14 = GetDlgItem(*(HWND *)this->__pad_0, 1026); /*0x5b8eaf*/
    if ( v14 ) /*0x5b8eb3*/
      *(_DWORD *)&stru_A8B250.__pad_0[12] = SendMessageA(v14, 0x400u, 0, 0); /*0x5b8ec1*/
    Debug::Log(); /*0x5b8ed2*/
    v15 = GetDlgItem(*(HWND *)this->__pad_0, 1362); /*0x5b8ee2*/
    if ( v15 ) /*0x5b8ee6*/
      *(_DWORD *)&stru_A8B250.__pad_0[36] = SendMessageA(v15, 0x400u, 0, 0); /*0x5b8ef4*/
    Debug::Log(); /*0x5b8f04*/
    v16 = GetDlgItem(*(HWND *)this->__pad_0, 1321); /*0x5b8f14*/
    if ( v16 ) /*0x5b8f18*/
      *(_DWORD *)&stru_A8B250.__pad_0[24] = 6 - SendMessageA(v16, 0x400u, 0, 0); /*0x5b8f2d*/
    Debug::Log(); /*0x5b8f41*/
    v17 = GetDlgItem(*(HWND *)this->__pad_0, 1363); /*0x5b8f51*/
    if ( v17 ) /*0x5b8f55*/
      *(_DWORD *)&stru_A8B250.__pad_0[40] = SendMessageA(v17, 0x400u, 0, 0); /*0x5b8f63*/
    Debug::Log(); /*0x5b8f73*/
    v18 = GetDlgItem(*(HWND *)this->__pad_0, 1643); /*0x5b8f83*/
    if ( v18 ) /*0x5b8f87*/
      dword_A8B320 = SendMessageA(v18, 0xF0u, 0, 0) == 1; /*0x5b8f98*/
    Debug::Log(); /*0x5b8fb8*/
    v19 = GetDlgItem(*(HWND *)this->__pad_0, 1642); /*0x5b8fc8*/
    if ( v19 ) /*0x5b8fcc*/
      stru_A8B250.__pad_0[8] = SendMessageA(v19, 0xF0u, 0, 0) == 1; /*0x5b8fdd*/
    Debug::Log(); /*0x5b8ffd*/
    v20 = GetDlgItem(*(HWND *)this->__pad_0, 1356); /*0x5b900d*/
    if ( v20 ) /*0x5b9011*/
      stru_A8B250.__pad_0[17] = SendMessageA(v20, 0xF0u, 0, 0) == 1; /*0x5b9022*/
    Debug::Log(); /*0x5b9042*/
    v21 = GetDlgItem(*(HWND *)this->__pad_0, 1357); /*0x5b9052*/
    if ( v21 ) /*0x5b9056*/
      byte_A8B31F = SendMessageA(v21, 0xF0u, 0, 0) == 1; /*0x5b9067*/
    Debug::Log(); /*0x5b9087*/
    v22 = GetDlgItem(*(HWND *)this->__pad_0, 1572); /*0x5b9097*/
    if ( v22 ) /*0x5b909b*/
      stru_A8B250.__pad_0[16] = SendMessageA(v22, 0xF0u, 0, 0) == 1; /*0x5b90ac*/
    Debug::Log(); /*0x5b90cc*/
    v23 = GetDlgItem(*(HWND *)this->__pad_0, 1430); /*0x5b90dc*/
    if ( v23 ) /*0x5b90e0*/
      byte_A8B31D = SendMessageA(v23, 0xF0u, 0, 0) == 1; /*0x5b90f1*/
    Debug::Log(); /*0x5b9111*/
    v24 = GetDlgItem(*(HWND *)this->__pad_0, 1358); /*0x5b9121*/
    if ( v24 ) /*0x5b9125*/
      stru_A8B250.__pad_0[18] = SendMessageA(v24, 0xF0u, 0, 0) == 1; /*0x5b9136*/
    Debug::Log(); /*0x5b9156*/
    v25 = GetDlgItem(*(HWND *)this->__pad_0, 1690); /*0x5b9166*/
    if ( v25 ) /*0x5b916a*/
      stru_A8B250.__pad_0[19] = SendMessageA(v25, 0xF0u, 0, 0) == 1; /*0x5b917e*/
    Debug::Log(); /*0x5b919c*/
    v26 = GetDlgItem(*(HWND *)this->__pad_0, 1693); /*0x5b91ac*/
    if ( v26 ) /*0x5b91b0*/
      stru_A8B250.__pad_0[20] = SendMessageA(v26, 0xF0u, 0, 0) == 1; /*0x5b91c4*/
    Debug::Log(); /*0x5b91e3*/
    v27 = GetDlgItem(*(HWND *)this->__pad_0, 1361); /*0x5b91f3*/
    if ( v27 ) /*0x5b91f7*/
      stru_A8B250.__pad_0[28] = SendMessageA(v27, 0xF0u, 0, 0) == 1; /*0x5b9208*/
    Debug::Log(); /*0x5b9228*/
    Debug::Log(); /*0x5b9232*/
    return 1; /*0x5b923a*/
  }
  else
  {
    StringCSF = GetStringCSF((wchar_t *)&stru_82BA00.__pad_F70[140], 0, &stru_82BA00.__pad_F70[52], 759); /*0x5b8d52*/
    swprintf((wchar_t *const)Buffer, (const size_t)StringCSF, Format); /*0x5b8d5d*/
    v5 = GetStringCSF(g_Str_TXT_OK, 0, &stru_82BA00.__pad_F70[52], 760); /*0x5b8d84*/
    Dialog::ShowMessageBox(Buffer, v5, 0, 0, 0, v28); /*0x5b8d93*/
    return 0; /*0x5b8d9b*/
  }
}



// ==== 0x005B9250  ObjectClass::method_5B9250  this=ObjectClass  sig=csp ====
int __thiscall sub_5B9250(ObjectClass *this)
{
  int result; // eax
  HWND v3; // esi
  char *v4; // eax
  unsigned int v5; // edi
  HWND v6; // esi
  int (__usercall *v7)@<eax>(char@<cf>, char@<zf>); // edi
  HWND ptr_0; // [esp-8h] [ebp-518h]
  int v9; // [esp+0h] [ebp-510h] BYREF
  wchar_t *Format; // [esp+10h] [ebp-500h]
  int v11[62]; // [esp+14h] [ebp-4FCh] BYREF
  __int16 v12; // [esp+10Ch] [ebp-404h]
  wchar_t lParam[256]; // [esp+110h] [ebp-400h] BYREF
  wchar_t Buffer[256]; // [esp+310h] [ebp-200h] BYREF

  memset(lParam, 0, sizeof(lParam)); /*0x5b9270*/
  result = (int)GetDlgItem((HWND)this->AbstractClass, 1344); /*0x5b927a*/
  v3 = (HWND)result; /*0x5b927c*/
  if ( result ) /*0x5b9280*/
  {
    SendMessageA((HWND)result, 0x4B3u, 0x100u, (LPARAM)lParam); /*0x5b929f*/
    SendMessageA(v3, 0x4B2u, 0, (LPARAM)&g_TypeClass_DefaultString); /*0x5b92ae*/
    result = wcslen(lParam); /*0x5b92b8*/
    if ( result ) /*0x5b92c2*/
    {
      if ( lParam[0] != 13 ) /*0x5b92d1*/
      {
        WideString::Trim(lParam); /*0x5b92de*/
        result = (int)lParam; /*0x5b92e3*/
        if ( &v9 != (int *)-272 ) /*0x5b92ec*/
        {
          memset(v11, 0, sizeof(v11)); /*0x5b9301*/
          v12 = 0; /*0x5b9303*/
          v11[0] = 104; /*0x5b930f*/
          strcpy((char *)&v11[1], unk_A8B380); /*0x5b932d*/
          LOBYTE(v11[6]) = dword_A8B394; /*0x5b9342*/
          wcscpy((wchar_t *)((char *)&v11[6] + 1), lParam); /*0x5b9346*/
          Stream::WriteBlock((int *)&unk_A8EA70, (int)v11, 250, 1); /*0x5b935f*/
          Stream::ReadPacket((int)&unk_A8EA70); /*0x5b9369*/
          v4 = CharToWideString(unk_A8B380); /*0x5b9373*/
          v5 = dword_A8B394; /*0x5b937a*/
          ptr_0 = (HWND)this->AbstractClass; /*0x5b9385*/
          Format = (wchar_t *)v4; /*0x5b9386*/
          result = (int)GetDlgItem(ptr_0, 1343); /*0x5b938a*/
          v6 = (HWND)result; /*0x5b938c*/
          if ( result ) /*0x5b9390*/
          {
            if ( v5 >= 8 ) /*0x5b9394*/
              v7 = Math::InitDegToRad; /*0x5b93a4*/
            else
              v7 = (int (__usercall *)@<eax>(char@<cf>, char@<zf>))dword_8316A8[v5]; /*0x5b939b*/
            swprintf(Buffer, (const size_t)g_Str_Trace___s_, Format, lParam); /*0x5b93c4*/
            return DrawDialogText((LPARAM)v7, Buffer, v6); /*0x5b93d6*/
          }
        }
      }
    }
  }
  return result; /*0x5b93db*/
}



// ==== 0x005B93F0  ObjectClass::method_5B93F0  this=ObjectClass  sig=csp ====
char __thiscall sub_5B93F0(ObjectClass *this)
{
  HWND DlgItem; // eax
  HWND v3; // esi

  DlgItem = GetDlgItem((HWND)this->AbstractClass, 1639); /*0x5b93fd*/
  v3 = DlgItem; /*0x5b9403*/
  if ( DlgItem ) /*0x5b9407*/
  {
    DlgItem = (HWND)SendMessageA(DlgItem, 0x147u, 0, 0); /*0x5b9419*/
    if ( DlgItem != HWND_MESSAGE|0x2 ) /*0x5b941e*/
    {
      DlgItem = (HWND)SendMessageA(v3, 0x150u, (WPARAM)DlgItem, 0); /*0x5b9429*/
      if ( DlgItem != HWND_MESSAGE|0x2 ) /*0x5b942e*/
      {
        dword_A8B3AC = (int)DlgItem; /*0x5b9430*/
        BYTE1(this->?) = 1; /*0x5b9437*/
        LOBYTE(this->?) = 1; /*0x5b943a*/
        LOBYTE(DlgItem) = 1; /*0x5b9435*/
      }
    }
  }
  return (char)DlgItem; /*0x5b943d*/
}



// ==== 0x005B9450  ObjectClass::method_5B9450  this=ObjectClass  sig=csp ====
unsigned int __thiscall sub_5B9450(ObjectClass *this)
{
  unsigned int result; // eax
  HWND v3; // edi

  result = (unsigned int)GetDlgItem((HWND)this->AbstractClass, 1029); /*0x5b945d*/
  v3 = (HWND)result; /*0x5b9463*/
  if ( result ) /*0x5b9467*/
  {
    result = SendMessageA((HWND)result, 0x147u, 0, 0); /*0x5b9479*/
    if ( result != -1 ) /*0x5b947e*/
    {
      dword_A8B394 = result; /*0x5b9482*/
      BYTE1(this->?) = 1; /*0x5b9489*/
      LOBYTE(this->?) = 1; /*0x5b948c*/
      if ( result >= 8 ) /*0x5b948f*/
        return SendMessageA(v3, 0x498u, 0, (LPARAM)Math::InitDegToRad); /*0x5b94ba*/
      else
        return SendMessageA(v3, 0x498u, 0, dword_8316A8[result]); /*0x5b94a6*/
    }
  }
  return result; /*0x5b94a8*/
}



// ==== 0x005B94C0  ObjectClass::method_5B94C0  this=ObjectClass  sig=csp ====
char __thiscall sub_5B94C0(ObjectClass *this, char a2)
{
  HWND DlgItem; // eax
  HWND v4; // esi
  wchar_t lParam[20]; // [esp+8h] [ebp-28h] BYREF

  DlgItem = GetDlgItem((HWND)this->AbstractClass, 1473); /*0x5b94cf*/
  v4 = DlgItem; /*0x5b94d5*/
  if ( DlgItem ) /*0x5b94d9*/
  {
    SendMessageA(DlgItem, 0x4B3u, 0x14u, (LPARAM)lParam); /*0x5b94ef*/
    WideString::Trim(lParam); /*0x5b94f5*/
    if ( !a2 ) /*0x5b9500*/
      SendMessageA(v4, 0x4B2u, 0, (LPARAM)lParam); /*0x5b950f*/
    strcpy(unk_A8B380, ToWideStringChar((char *)lParam)); /*0x5b9533*/
    BYTE1(this->?) = 1; /*0x5b953e*/
    LOBYTE(this->?) = 1; /*0x5b9541*/
    LOBYTE(DlgItem) = 1; /*0x5b9537*/
  }
  return (char)DlgItem; /*0x5b9545*/
}



// ==== 0x005B9550  ModemGuest::UpdateGuestPlayerInfo  this=ModemGuest  sig=csp ====
int __thiscall sub_5B9550(char *this, wchar_t *Source, unsigned int a3, int a4)
{
  wchar_t *v5; // edi
  int result; // eax
  HWND v7; // edx
  HWND DlgItem; // edi
  int (__usercall *v9)@<eax>(char@<cf>, char@<zf>); // ebx
  wchar_t lParam[80]; // [esp+10h] [ebp-A0h] BYREF

  v5 = (wchar_t *)(this + 34); /*0x5b9564*/
  if ( _wcsicmp((const wchar_t *)this + 17, Source) /*0x5b958c*/
    || *((_DWORD *)this + 19) != a3
    || (result = a4, *((_DWORD *)this + 20) != a4) )
  {
    wcscpy(v5, Source); /*0x5b9594*/
    v7 = *(HWND *)this; /*0x5b9599*/
    *((_DWORD *)this + 19) = a3; /*0x5b95a5*/
    *((_DWORD *)this + 20) = a4; /*0x5b95a8*/
    DlgItem = GetDlgItem(v7, 1640); /*0x5b95b7*/
    if ( DlgItem ) /*0x5b95bb*/
    {
      swprintf(lParam, (const size_t)&aSS, Source, *(_DWORD *)(*((_DWORD *)dword_A83C9C + a4) + 96)); /*0x5b95db*/
      SendMessageA(DlgItem, 0x4B2u, 0, (LPARAM)lParam); /*0x5b95f6*/
      if ( a3 >= 8 ) /*0x5b95fa*/
        v9 = Math::InitDegToRad; /*0x5b960a*/
      else
        v9 = (int (__usercall *)@<eax>(char@<cf>, char@<zf>))dword_8316A8[a3]; /*0x5b9601*/
      SendMessageA(DlgItem, 0x498u, 0, (LPARAM)v9); /*0x5b9619*/
    }
    result = PlayVocClass(HIDWORD(dword_8871E0->MovieOff), 0x2000, 1.0, 0); /*0x5b9632*/
  }
  this->u32_9 = 1; /*0x5b9637*/
  return result; /*0x5b963b*/
}



// ==== 0x005B9680  NetworkGameSetup::ReadRulesInitConfig  this=NetworkGameSetup  sig=csp ====
int __thiscall NetworkGameSetup::ReadRulesInitConfig(NetworkGameSetup *this)
{
  int result; // eax

  result = (int)GetDlgItem(*(HWND *)this->__pad_0, 1360); /*0x5b968b*/
  if ( result ) /*0x5b9693*/
  {
    result = SendMessageA((HWND)result, 0x400u, 0, 0); /*0x5b969f*/
    g_RulesInitConfig = result; /*0x5b96a5*/
    BYTE1(this->NetworkGameSetup_field_0x08) = 1; /*0x5b96aa*/
  }
  return result; /*0x5b96ae*/
}



// ==== 0x005B96B0  NetworkGameSetup::ReadRulesBases  this=NetworkGameSetup  sig=csp ====
int __thiscall NetworkGameSetup::ReadRulesBases(NetworkGameSetup *this)
{
  int result; // eax

  result = (int)GetDlgItem(*(HWND *)this->__pad_0, 1026); /*0x5b96bb*/
  if ( result ) /*0x5b96c3*/
  {
    result = SendMessageA((HWND)result, 0x400u, 0, 0); /*0x5b96cf*/
    *(_DWORD *)&stru_A8B250.__pad_0[12] = result; /*0x5b96d5*/
    BYTE1(this->NetworkGameSetup_field_0x08) = 1; /*0x5b96da*/
  }
  return result; /*0x5b96de*/
}



// ==== 0x005B96E0  NetworkGameSetup::ReadRulesAlliesAllowed  this=NetworkGameSetup  sig=csp ====
int __thiscall NetworkGameSetup::ReadRulesAlliesAllowed(NetworkGameSetup *this)
{
  int result; // eax

  result = (int)GetDlgItem(*(HWND *)this->__pad_0, 1362); /*0x5b96eb*/
  if ( result ) /*0x5b96f3*/
  {
    result = SendMessageA((HWND)result, 0x400u, 0, 0); /*0x5b96ff*/
    *(_DWORD *)&stru_A8B250.__pad_0[36] = result; /*0x5b9705*/
    BYTE1(this->NetworkGameSetup_field_0x08) = 1; /*0x5b970a*/
  }
  return result; /*0x5b970e*/
}



// ==== 0x005B9710  NetworkGameSetup::ReadRulesEngineerCount  this=NetworkGameSetup  sig=csp ====
int __thiscall NetworkGameSetup::ReadRulesEngineerCount(NetworkGameSetup *this)
{
  int result; // eax

  result = (int)GetDlgItem(*(HWND *)this->__pad_0, 1321); /*0x5b971b*/
  if ( result ) /*0x5b9723*/
  {
    result = SendMessageA((HWND)result, 0x400u, 0, 0); /*0x5b972f*/
    *(_DWORD *)&stru_A8B250.__pad_0[24] = 6 - result; /*0x5b973c*/
    BYTE1(this->NetworkGameSetup_field_0x08) = 1; /*0x5b9742*/
  }
  return result; /*0x5b9746*/
}



// ==== 0x005B9750  NetworkGameSetup::ReadRulesUnknown  this=NetworkGameSetup  sig=csp ====
int __thiscall NetworkGameSetup::ReadRulesUnknown(NetworkGameSetup *this)
{
  int result; // eax

  result = (int)GetDlgItem(*(HWND *)this->__pad_0, 1363); /*0x5b975b*/
  if ( result ) /*0x5b9763*/
  {
    result = SendMessageA((HWND)result, 0x400u, 0, 0); /*0x5b976f*/
    *(_DWORD *)&stru_A8B250.__pad_0[40] = result; /*0x5b9775*/
    BYTE1(this->NetworkGameSetup_field_0x08) = 1; /*0x5b977a*/
  }
  return result; /*0x5b977e*/
}



// ==== 0x005B9A60  SkirmishDialog::HandleGameStart  this=SkirmishDialog  sig=csp ====
void __thiscall SkirmishDialog::HandleGameStart(SkirmishDialog *this)
{
  int v2; // ebp
  Skirmish *v3; // esi
  ObjectClass *v4; // eax
  Skirmish *v5; // eax
  HWND DlgItem; // eax
  Skirmish *v7; // esi
  ObjectClass *v8; // eax
  Skirmish *v9; // eax
  char v10[132]; // [esp+10h] [ebp-188h] BYREF
  wchar_t Destination[130]; // [esp+94h] [ebp-104h] BYREF

  Debug::Log(); /*0x5b9a71*/
  v2 = *(_DWORD *)&stru_A8B250.__pad_0[4]; /*0x5b9a8a*/
  strcpy(v10, byte_A8B8E0); /*0x5b9a9e*/
  wcscpy(Destination, MEMORY[0xA8B322]); /*0x5b9aaf*/
  ShowWindow(*(HWND *)this->__pad_0, 0); /*0x5b9ac2*/
  if ( SkirmishDialog::Show(g_hWnd, (int)this, v2) == 2 ) /*0x5b9ad2*/
  {
    *(_DWORD *)&stru_A8B250.__pad_0[4] = v2; /*0x5b9ada*/
    LoadScenarioClassByIndex(v2); /*0x5b9ae0*/
    Session::PrepareGame(*(Session **)this->__pad_0); /*0x5b9ae7*/
    ShowWindow(*(HWND *)this->__pad_0, 5); /*0x5b9af1*/
    if ( _strcmpi((char *)(*(_DWORD *)(dword_A8B8CC + 4 * *(_DWORD *)&stru_A8B250.__pad_0[4]) + 88), &stru_82BA00.?) ) /*0x5b9b0b*/
    {
      Session::PrepareGame(*(Session **)this->__pad_0); /*0x5b9b8c*/
      InvalidateRect(*(HWND *)this->__pad_0, 0, 0); /*0x5b9b98*/
    }
    else
    {
      v3 = g_UIControlState; /*0x5b9b1d*/
      if ( g_UIControlState ) /*0x5b9b25*/
      {
        ComPtr::Dtor((ComPtr *)g_UIControlState); /*0x5b9b29*/
        __3_YAXPAX_Z(v3); /*0x5b9b2f*/
      }
      v4 = (ObjectClass *)__2_YAPAXI_Z(4u); /*0x5b9b39*/
      if ( v4 ) /*0x5b9b43*/
        v5 = (Skirmish *)unknown_libname_27(v4); /*0x5b9b47*/
      else
        v5 = 0; /*0x5b9b4e*/
      g_UIControlState = v5; /*0x5b9b57*/
      Surface::LoadToSurfaceSHP((Surface *)v5, ExistingFileName); /*0x5b9b5c*/
      if ( !*(_DWORD *)g_UIControlState ) /*0x5b9b67*/
        Session::PrepareGame(*(Session **)this->__pad_0); /*0x5b9b6e*/
      InvalidateRect(*(HWND *)this->__pad_0, 0, 0); /*0x5b9b7a*/
      InvalidateRect(*(HWND *)this->__pad_0, 0, 0); /*0x5b9b83*/
    }
  }
  else
  {
    ShowWindow(*(HWND *)this->__pad_0, 5); /*0x5b9ba4*/
    if ( LoadScenarioClassByIndex(*(int *)&stru_A8B250.__pad_0[4]) == 1 ) /*0x5b9bb3*/
    {
      DlgItem = GetDlgItem(*(HWND *)this->__pad_0, 1448); /*0x5b9bc1*/
      SendMessageA(DlgItem, 0x4B2u, 0, 11055906); /*0x5b9bd4*/
      if ( _strcmpi((char *)(*(_DWORD *)(dword_A8B8CC + 4 * *(_DWORD *)&stru_A8B250.__pad_0[4]) + 88), &stru_82BA00.?) ) /*0x5b9bf1*/
      {
        Session::PrepareGame(*(Session **)this->__pad_0); /*0x5b9c64*/
      }
      else
      {
        v7 = g_UIControlState; /*0x5b9bfd*/
        if ( g_UIControlState ) /*0x5b9c05*/
        {
          ComPtr::Dtor((ComPtr *)g_UIControlState); /*0x5b9c09*/
          __3_YAXPAX_Z(v7); /*0x5b9c0f*/
          v8 = (ObjectClass *)__2_YAPAXI_Z(4u); /*0x5b9c19*/
          if ( v8 ) /*0x5b9c23*/
            v9 = (Skirmish *)unknown_libname_27(v8); /*0x5b9c27*/
          else
            v9 = 0; /*0x5b9c2e*/
          g_UIControlState = v9; /*0x5b9c37*/
          Surface::LoadToSurfaceSHP((Surface *)v9, ExistingFileName); /*0x5b9c3c*/
          v7 = g_UIControlState; /*0x5b9c41*/
        }
        if ( !*(_DWORD *)v7 ) /*0x5b9c47*/
          Session::PrepareGame(*(Session **)this->__pad_0); /*0x5b9c4e*/
        InvalidateRect(*(HWND *)this->__pad_0, 0, 0); /*0x5b9c5a*/
      }
    }
    else
    {
      *(_DWORD *)&stru_A8B250.__pad_0[4] = v2; /*0x5b9c6b*/
    }
  }
  BYTE1(this->SkirmishDialog_field_0x08) = 1; /*0x5b9c76*/
  Debug::Log(); /*0x5b9c7a*/
}



// ==== 0x005B9C90  RandomMap::RegenerateRandomMapPreview  this=RandomMap  sig=csp ====
void __thiscall RandomMap::RegenerateRandomMapPreview(RandomMap *this)
{
  Skirmish *v2; // esi
  HWND DlgItem; // eax
  char v4; // bl
  int v5; // esi
  char *v6; // eax
  char *v7; // edi
  SessionClass *v8; // eax
  wchar_t *v9; // ebx
  int v10; // eax
  AbstractClass *v11; // eax
  _DWORD *v12; // eax
  char v13; // bl
  ObjectClass *v14; // eax
  Skirmish *v15; // eax
  CCFileClass v17; // [esp+8h] [ebp-6Ch] BYREF
  int v18[3]; // [esp+60h] [ebp-14h] BYREF
  int v19; // [esp+6Ch] [ebp-8h]

  Debug::Log(); /*0x5b9c9f*/
  byte_8316D4 = 0; /*0x5b9cac*/
  if ( CCFileClass::Load((CCFileClass *)&loc_5BB260) == 1 ) /*0x5b9cbb*/
  {
    byte_8316D4 = 1; /*0x5b9ccd*/
    MapSeed::ValidateName((char *)&g_MissionQueueFrame.briefing[356], (int)&stru_82BA00.?); /*0x5b9cd2*/
    v2 = g_UIControlState; /*0x5b9cd7*/
    if ( g_UIControlState ) /*0x5b9cdf*/
    {
      ComPtr::Dtor((ComPtr *)g_UIControlState); /*0x5b9ce3*/
      __3_YAXPAX_Z(v2); /*0x5b9ce9*/
      g_UIControlState = 0; /*0x5b9cf1*/
    }
    DlgItem = GetDlgItem(*(HWND *)this->__pad_0, 1448); /*0x5b9d03*/
    SendMessageA(DlgItem, 0x4B2u, 0, (LPARAM)&g_MissionQueueFrame.briefing[386]); /*0x5b9d16*/
    v4 = 0; /*0x5b9d21*/
    v5 = 0; /*0x5b9d23*/
    if ( dword_A8B8D8 > 0 ) /*0x5b9d27*/
    {
      while ( _strcmpi((char *)(*(_DWORD *)(dword_A8B8CC + 4 * v5) + 88), &stru_82BA00.?) ) /*0x5b9d44*/
      {
        if ( ++v5 >= dword_A8B8D8 ) /*0x5b9d4e*/
          goto LABEL_9; /*0x5b9d4e*/
      }
      v4 = 1; /*0x5b9d52*/
    }
LABEL_9:
    v6 = GameConfig::ComputeCRC(); /*0x5b9d54*/
    v7 = v6; /*0x5b9d5b*/
    if ( v4 ) /*0x5b9d5d*/
    {
      GameOption::SetDigest(*(char **)(dword_A8B8CC + 4 * v5), v6); /*0x5b9df6*/
      GameOption::SetDescriptionWStr( /*0x5b9e08*/
        *(GameOption **)(dword_A8B8CC + 4 * v5),
        (wchar_t *)&g_MissionQueueFrame.briefing[386]);
    }
    else
    {
      v8 = (SessionClass *)__2_YAPAXI_Z(0x1BCu); /*0x5b9d68*/
      if ( v8 ) /*0x5b9d72*/
        v9 = SessionClass::ParseGameInfo( /*0x5b9d8e*/
               v8,
               &stru_82BA00.?,
               (wchar_t *)&g_MissionQueueFrame.briefing[386],
               v7,
               1,
               0,
               2,
               4);
      else
        v9 = 0; /*0x5b9d92*/
      if ( dword_A8B8D8 < dword_A8B8D0 /*0x5b9dcb*/
        || (byte_A8B8D5 || !dword_A8B8D0)
        && dword_A8B8DC > 0
        && (*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(dword_A8B8C8 + 8))(
             &dword_A8B8C8,
             dword_A8B8D0 + dword_A8B8DC,
             0) )
      {
        v10 = dword_A8B8D8++; /*0x5b9dd8*/
        *(_DWORD *)(dword_A8B8CC + 4 * v10) = v9; /*0x5b9de7*/
      }
    }
    __3_YAXPAX_Z(v7); /*0x5b9e0e*/
    if ( LoadScenarioClassByIndex(v5) == 1 ) /*0x5b9e1f*/
    {
      *(_DWORD *)&stru_A8B250.__pad_0[4] = v5; /*0x5b9e2f*/
      v11 = dword_A8B230; /*0x5b9e3b*/
      strcpy(byte_A8B8E0, &stru_82BA00.?); /*0x5b9e51*/
      strcpy((char *)&v11[130].abstractFlags, byte_A8B8E0); /*0x5b9e79*/
      v12 = CCFileClass::Construct(&v17, byte_A8B8E0); /*0x5b9e86*/
      v13 = (*(int (__thiscall **)(_DWORD *, _DWORD))(*v12 + 20))(v12, 0); /*0x5b9e98*/
      *(_DWORD *)v17.CDFileClass = &CCFileClass::`vftable'; /*0x5b9e9a*/
      v19 = 0; /*0x5b9ea2*/
      Vector::Clear((int)v18); /*0x5b9eaa*/
      *(_DWORD *)v17.CDFileClass = &off_7E1668; /*0x5b9eb3*/
      BufferIOFileClass::Dtor((BufferIOFileClass *)&v17); /*0x5b9ebb*/
      if ( v13 ) /*0x5b9ec2*/
      {
        v14 = (ObjectClass *)__2_YAPAXI_Z(4u); /*0x5b9ec6*/
        if ( v14 ) /*0x5b9ed0*/
          v15 = (Skirmish *)unknown_libname_27(v14); /*0x5b9ed4*/
        else
          v15 = 0; /*0x5b9edb*/
        g_UIControlState = v15; /*0x5b9ee4*/
        Surface::LoadToSurfaceSHP((Surface *)v15, ExistingFileName); /*0x5b9ee9*/
        PostMessageA(*(HWND *)this->__pad_0, 0xFu, 0, 0); /*0x5b9efb*/
      }
    }
    BYTE1(this->RandomMap_field_0x8) = 1; /*0x5b9f07*/
  }
  byte_8316D4 = 1; /*0x5b9f10*/
  Debug::Log(); /*0x5b9f17*/
}



// ==== 0x005B9F30  CellClass::SetOccupancy  this=ModemHost  sig=csp ====
int __thiscall CellClass::SetOccupancy(int this, char a2)
{
  int v3; // edi
  int v4; // edi
  int result; // eax
  int v6; // edi
  int v7; // edi
  int v8[62]; // [esp+Ch] [ebp-FCh] BYREF
  __int16 v9; // [esp+104h] [ebp-4h]

  Stream::ReadPacket((int)&unk_A8EA70); /*0x5b9f40*/
  if ( *(_BYTE *)(this + 9) == 1 ) /*0x5b9f4d*/
  {
    v3 = *(_DWORD *)&stru_88732C.__pad_6[14]; /*0x5b9f54*/
    if ( *(_DWORD *)&stru_88732C.__pad_6[6] != -1 ) /*0x5b9f5c*/
      v3 += Timer::GetTicks() - *(_DWORD *)&stru_88732C.__pad_6[6]; /*0x5b9f6e*/
    if ( (unsigned int)(v3 - *(_DWORD *)(this + 12)) > 0x1E ) /*0x5b9f76*/
      goto LABEL_6; /*0x5b9f76*/
  }
  if ( a2 == 1 ) /*0x5b9f80*/
  {
LABEL_6:
    Game::BuildGameSetupPacket((Game *)this); /*0x5b9f84*/
    v4 = *(_DWORD *)&stru_88732C.__pad_6[14]; /*0x5b9f8e*/
    if ( *(_DWORD *)&stru_88732C.__pad_6[6] != -1 ) /*0x5b9f96*/
      v4 += Timer::GetTicks() - *(_DWORD *)&stru_88732C.__pad_6[6]; /*0x5b9fa8*/
    *(_DWORD *)(this + 12) = v4; /*0x5b9faa*/
    *(_BYTE *)(this + 9) = 0; /*0x5b9fad*/
  }
  result = *(_DWORD *)&stru_88732C.__pad_6[6]; /*0x5b9fb1*/
  v6 = *(_DWORD *)&stru_88732C.__pad_6[14]; /*0x5b9fb6*/
  if ( *(_DWORD *)&stru_88732C.__pad_6[6] != -1 ) /*0x5b9fbe*/
  {
    result = Timer::GetTicks() - *(_DWORD *)&stru_88732C.__pad_6[6]; /*0x5b9fca*/
    v6 += result; /*0x5b9fd0*/
  }
  if ( (unsigned int)(v6 - *(_DWORD *)(this + 28)) > 0x28 ) /*0x5b9fd8*/
  {
    memset(v8, 0, sizeof(v8)); /*0x5b9fe5*/
    v9 = 0; /*0x5b9fe7*/
    v8[0] = 105; /*0x5b9fee*/
    *(int *)((char *)&v8[38] + 2) = CellClass::GetBridgeIndexThunk((NullModemClass *)&unk_A8EA70); /*0x5ba001*/
    LOBYTE(v8[6]) = dword_A8DB30; /*0x5ba018*/
    Stream::WriteBlock((int *)&unk_A8EA70, (int)v8, 250, 0); /*0x5ba01c*/
    result = *(_DWORD *)&stru_88732C.__pad_6[6]; /*0x5ba021*/
    v7 = *(_DWORD *)&stru_88732C.__pad_6[14]; /*0x5ba026*/
    if ( *(_DWORD *)&stru_88732C.__pad_6[6] != -1 ) /*0x5ba02e*/
    {
      result = Timer::GetTicks() - *(_DWORD *)&stru_88732C.__pad_6[6]; /*0x5ba03a*/
      v7 += result; /*0x5ba040*/
    }
    *(_DWORD *)(this + 28) = v7; /*0x5ba042*/
  }
  return result; /*0x5ba045*/
}



// ==== 0x005BA060  ModemGuest::ProcessPacket  this=ModemHost  sig=csp ====
char __thiscall ModemGuest::ProcessPacket(int this, char a2)
{
  int v3; // esi
  int v4; // eax
  int *v5; // eax
  int v7; // edi
  int v8; // esi
  int *v9; // eax
  int v10; // esi
  unsigned int updated; // eax
  bool v12; // cl
  int v13; // esi
  char *v14; // eax
  HWND v15; // eax
  char *v16; // eax
  int v17; // esi
  const wchar_t *v18; // ebx
  HWND DlgItem; // edi
  int (__usercall *v20)@<eax>(char@<cf>, char@<zf>); // esi
  int v21; // esi
  int *v22; // eax
  char v23; // al
  int v24; // esi
  int *v25; // [esp-14h] [ebp-334h]
  int *v26; // [esp-14h] [ebp-334h]
  int *v27; // [esp-14h] [ebp-334h]
  wchar_t *v28; // [esp-10h] [ebp-330h]
  wchar_t *v29; // [esp-10h] [ebp-330h]
  wchar_t *v30; // [esp-10h] [ebp-330h]
  wchar_t *v31; // [esp-10h] [ebp-330h]
  wchar_t *v32; // [esp-10h] [ebp-330h]
  wchar_t *StringCSF; // [esp-10h] [ebp-330h]
  ObjectClass *v34; // [esp+0h] [ebp-320h] BYREF
  const wchar_t *v35; // [esp+10h] [ebp-310h]
  const wchar_t *v36; // [esp+14h] [ebp-30Ch]
  const wchar_t *v37; // [esp+18h] [ebp-308h]
  const wchar_t *v38; // [esp+1Ch] [ebp-304h]
  int v39; // [esp+20h] [ebp-300h] BYREF
  int v40; // [esp+24h] [ebp-2FCh] BYREF
  _BYTE v41[20]; // [esp+28h] [ebp-2F8h] BYREF
  _BYTE v42[6]; // [esp+3Ch] [ebp-2E4h] BYREF
  unsigned int v43; // [esp+42h] [ebp-2DEh]
  unsigned int v44; // [esp+46h] [ebp-2DAh]
  int v45; // [esp+AAh] [ebp-276h]
  int v46; // [esp+BEh] [ebp-262h]
  int v47; // [esp+F4h] [ebp-22Ch]
  int v48; // [esp+F8h] [ebp-228h]
  wchar_t Buffer[256]; // [esp+120h] [ebp-200h] BYREF

  if ( ObjectTypeClass::CreateInstance(&unk_A8EA70, (int)&v40, (int)&v39) <= 0 ) /*0x5ba082*/
  {
LABEL_48:
    v21 = *(_DWORD *)&stru_88732C.__pad_6[14]; /*0x5ba4f6*/
    if ( *(_DWORD *)&stru_88732C.__pad_6[6] != -1 ) /*0x5ba503*/
      v21 += Timer::GetTicks() - *(_DWORD *)&stru_88732C.__pad_6[6]; /*0x5ba515*/
    if ( (unsigned int)(v21 - *(_DWORD *)(this + 20)) <= *(_DWORD *)(this + 24) ) /*0x5ba521*/
    {
      return 0; /*0x5ba616*/
    }
    else
    {
      Debug::Log(); /*0x5ba52d*/
      if ( !a2 ) /*0x5ba53e*/
      {
        v35 = asc_82083C; /*0x5ba557*/
        StringCSF = GetStringCSF(g_Str_TXT_OK, 0, &stru_82BA00.__pad_F70[52], 2197); /*0x5ba564*/
        v22 = (int *)GetStringCSF((wchar_t *)&stru_82BA00.?, 0, &stru_82BA00.__pad_F70[52], 2197); /*0x5ba576*/
        Dialog::ShowMessageBox(v22, StringCSF, 0, 0, 0, (int)v34); /*0x5ba580*/
      }
      return 1; /*0x5ba588*/
    }
  }
  else
  {
    v3 = *(_DWORD *)&stru_88732C.__pad_6[14]; /*0x5ba08d*/
    if ( *(_DWORD *)&stru_88732C.__pad_6[6] != -1 ) /*0x5ba098*/
      v3 += Timer::GetTicks() - *(_DWORD *)&stru_88732C.__pad_6[6]; /*0x5ba0aa*/
    v4 = v40; /*0x5ba0ac*/
    *(_DWORD *)(this + 20) = v3; /*0x5ba0b0*/
    *(_DWORD *)(this + 24) = 1200; /*0x5ba0b6*/
    if ( v4 < 100 || v4 >= 109 || v4 == 104 || v42[0] != dword_A8DB30 ) /*0x5ba0e7*/
    {
      switch ( v4 ) /*0x5ba16d*/
      {
        case 'e': /*0x5ba16d*/
          Debug::Log(); /*0x5ba268*/
          updated = NetworkBuffer::UpdateWindow((NetworkBuffer *)&stru_A8EB00.?[252], v43, v44); /*0x5ba27f*/
          if ( updated ) /*0x5ba286*/
          {
            if ( updated == -1 ) /*0x5ba2de*/
            {
              if ( !a2 ) /*0x5ba2e9*/
              {
                v37 = asc_82083C; /*0x5ba306*/
                v31 = GetStringCSF(g_Str_TXT_OK, 0, &stru_82BA00.__pad_F70[52], 2068); /*0x5ba313*/
                v26 = (int *)GetStringCSF((wchar_t *)stru_82BA00.?, 0, &stru_82BA00.__pad_F70[52], 2068); /*0x5ba32a*/
                Dialog::ShowMessageBox(v26, v31, 0, 0, 0, (int)v34); /*0x5ba32f*/
              }
            }
            else
            {
              v12 = v45 == *(_DWORD *)(this + 84); /*0x5ba344*/
              if ( v47 != *(_DWORD *)(this + 92) ) /*0x5ba352*/
                v12 = 0; /*0x5ba354*/
              if ( v48 == *(_DWORD *)(this + 88) && v12 ) /*0x5ba366*/
              {
                dword_A8B24C = Network::GetMaxPacketSize(updated); /*0x5ba3fe*/
                v14 = CharToWideString(v41); /*0x5ba403*/
                ModemGuest::UpdateGuestPlayerInfo((char *)this, (wchar_t *)v14, v42[5], *(int *)&v42[1]); /*0x5ba416*/
                *(_BYTE *)(this + 32) = 1; /*0x5ba41b*/
                goto LABEL_48; /*0x5ba41f*/
              }
              if ( !a2 ) /*0x5ba375*/
              {
                v35 = asc_82083C; /*0x5ba38e*/
                v32 = GetStringCSF(g_Str_TXT_OK, 0, &stru_82BA00.__pad_F70[52], 2129); /*0x5ba39b*/
                v27 = (int *)GetStringCSF((wchar_t *)&stru_82BA00.?, 0, &stru_82BA00.__pad_F70[52], 2129); /*0x5ba3b2*/
                Dialog::ShowMessageBox(v27, v32, 0, 0, 0, (int)v34); /*0x5ba3b7*/
              }
            }
          }
          else if ( !a2 ) /*0x5ba291*/
          {
            v38 = asc_82083C; /*0x5ba2ae*/
            v30 = GetStringCSF(g_Str_TXT_OK, 0, &stru_82BA00.__pad_F70[52], 2059); /*0x5ba2bb*/
            v25 = (int *)GetStringCSF((wchar_t *)stru_82BA00.?, 0, &stru_82BA00.__pad_F70[52], 2059); /*0x5ba2d2*/
            Dialog::ShowMessageBox(v25, v30, 0, 0, 0, (int)v34); /*0x5ba2d7*/
          }
          v13 = *(_DWORD *)&stru_88732C.__pad_6[14]; /*0x5ba3c1*/
          if ( *(_DWORD *)&stru_88732C.__pad_6[6] != -1 ) /*0x5ba3c9*/
            v13 += Timer::GetTicks() - *(_DWORD *)&stru_88732C.__pad_6[6]; /*0x5ba3db*/
          *(_DWORD *)(this + 20) = v13; /*0x5ba3dd*/
          break; /*0x5ba3dd*/
        case 'f': /*0x5ba16d*/
          Debug::Log(); /*0x5ba179*/
          v7 = *(_DWORD *)&stru_88732C.__pad_6[14]; /*0x5ba183*/
          if ( *(_DWORD *)&stru_88732C.__pad_6[6] != -1 ) /*0x5ba18e*/
            v7 += Timer::GetTicks() - *(_DWORD *)&stru_88732C.__pad_6[6]; /*0x5ba1a0*/
          while ( 1 ) /*0x5ba1a7*/
          {
            v8 = *(_DWORD *)&stru_88732C.__pad_6[14]; /*0x5ba1a7*/
            if ( *(_DWORD *)&stru_88732C.__pad_6[6] != -1 ) /*0x5ba1af*/
              v8 += Timer::GetTicks() - *(_DWORD *)&stru_88732C.__pad_6[6]; /*0x5ba1c1*/
            if ( (unsigned int)(v8 - v7) >= 0x3C ) /*0x5ba1c8*/
              break; /*0x5ba1c8*/
            Event::Dispatch(); /*0x5ba1ca*/
            Stream::ReadPacket((int)&unk_A8EA70); /*0x5ba1d4*/
          }
          if ( !a2 ) /*0x5ba1e4*/
          {
            v36 = asc_82083C; /*0x5ba1fd*/
            v29 = GetStringCSF(g_Str_TXT_OK, 0, &stru_82BA00.__pad_F70[52], 2038); /*0x5ba20a*/
            v9 = (int *)GetStringCSF((wchar_t *)stru_82BA00.?, 0, &stru_82BA00.__pad_F70[52], 2038); /*0x5ba21c*/
            Dialog::ShowMessageBox(v9, v29, 0, 0, 0, (int)v34); /*0x5ba226*/
          }
          v10 = *(_DWORD *)&stru_88732C.__pad_6[14]; /*0x5ba230*/
          if ( *(_DWORD *)&stru_88732C.__pad_6[6] != -1 ) /*0x5ba238*/
            v10 += Timer::GetTicks() - *(_DWORD *)&stru_88732C.__pad_6[6]; /*0x5ba24a*/
          *(_DWORD *)(this + 20) = v10; /*0x5ba24c*/
          Network::CleanupOnDisconnect(); /*0x5ba24f*/
          return 1; /*0x5ba260*/
        case 'h': /*0x5ba16d*/
          Debug::Log(); /*0x5ba450*/
          v16 = CharToWideString(v41); /*0x5ba45c*/
          v17 = v42[0]; /*0x5ba469*/
          v18 = (const wchar_t *)v16; /*0x5ba46f*/
          if ( &v34 != (ObjectClass **)-61 ) /*0x5ba473*/
          {
            DlgItem = GetDlgItem(*(HWND *)this, 1343); /*0x5ba484*/
            if ( DlgItem ) /*0x5ba488*/
            {
              if ( v17 >= 8 ) /*0x5ba491*/
                v20 = Math::InitDegToRad; /*0x5ba49c*/
              else
                v20 = (int (__usercall *)@<eax>(char@<cf>, char@<zf>))dword_8316A8[v17]; /*0x5ba493*/
              swprintf(Buffer, (const size_t)g_Str_Trace___s_, v18, &v42[1]); /*0x5ba4b5*/
              DrawDialogText((LPARAM)v20, Buffer, DlgItem); /*0x5ba4c7*/
            }
          }
          if ( !a2 ) /*0x5ba4d5*/
            PlayVocClass(*(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 1708), 0x2000, 1.0, 0); /*0x5ba4ee*/
          goto LABEL_48; /*0x5ba4ee*/
        case 'i': /*0x5ba16d*/
          Debug::Log(); /*0x5ba599*/
          v23 = *(_BYTE *)(this + 32); /*0x5ba59e*/
          *(_DWORD *)(this + 16) = v46; /*0x5ba5ab*/
          if ( !v23 ) /*0x5ba5b0*/
            *(_BYTE *)(this + 9) = 1; /*0x5ba5b6*/
          goto LABEL_48; /*0x5ba5ba*/
        case 't': /*0x5ba16d*/
          Debug::Log(); /*0x5ba429*/
          v15 = GetDlgItem(*(HWND *)this, 1); /*0x5ba439*/
          EnableWindow(v15, 1); /*0x5ba440*/
          goto LABEL_48; /*0x5ba446*/
        case 'w': /*0x5ba16d*/
          GenerateRandomMapPreview(v34); /*0x5ba5d3*/
          v24 = *(_DWORD *)&stru_88732C.__pad_6[14]; /*0x5ba5dd*/
          if ( *(_DWORD *)&stru_88732C.__pad_6[6] != -1 ) /*0x5ba5e5*/
            v24 += Timer::GetTicks() - *(_DWORD *)&stru_88732C.__pad_6[6]; /*0x5ba5f7*/
          *(_DWORD *)(this + 20) = v24; /*0x5ba5f9*/
          goto LABEL_48; /*0x5ba5fc*/
        default:
          Debug::Log(); /*0x5ba5c4*/
          goto LABEL_48; /*0x5ba5cc*/
      }
    }
    else
    {
      Debug::Log(); /*0x5ba0ee*/
      if ( !a2 ) /*0x5ba0ff*/
      {
        v36 = asc_82083C; /*0x5ba11c*/
        v28 = GetStringCSF(g_Str_TXT_OK, 0, &stru_82BA00.__pad_F70[52], 2018); /*0x5ba129*/
        v5 = (int *)GetStringCSF((wchar_t *)&stru_82BA00.?, 0, &stru_82BA00.__pad_F70[52], 2018); /*0x5ba13b*/
        Dialog::ShowMessageBox(v5, v28, 0, 0, 0, (int)v34); /*0x5ba145*/
        return 1; /*0x5ba156*/
      }
    }
    return 1; /*0x5ba3e3*/
  }
}



// ==== 0x005BA660  Game::BuildGameSetupPacket  this=Game  sig=csp ====
int __thiscall Game::BuildGameSetupPacket(Game *this)
{
  HWND DlgItem; // eax
  int v3; // edx
  int v4; // ecx
  int v5; // eax
  int Field3; // eax
  int v7; // eax
  char v8; // dl
  unsigned int v9; // eax
  int v11[62]; // [esp+8h] [ebp-168h] BYREF
  __int16 v12; // [esp+100h] [ebp-70h]
  CCFileClass v13; // [esp+104h] [ebp-6Ch] BYREF
  int v14[3]; // [esp+15Ch] [ebp-14h] BYREF
  int v15; // [esp+168h] [ebp-8h]

  Debug::Log(); /*0x5ba66f*/
  DlgItem = GetDlgItem(*(HWND *)this->__pad_0, 1); /*0x5ba67e*/
  EnableWindow(DlgItem, 0); /*0x5ba685*/
  v3 = *(_DWORD *)&this->__pad_44[20]; /*0x5ba696*/
  memset(v11, 0, sizeof(v11)); /*0x5ba699*/
  v4 = *(_DWORD *)&this->__pad_44[16]; /*0x5ba69b*/
  v12 = 0; /*0x5ba69e*/
  v5 = *(_DWORD *)&this->__pad_44[24]; /*0x5ba6a0*/
  v11[0] = 101; /*0x5ba6a3*/
  *(int *)((char *)&v11[33] + 2) = v4; /*0x5ba6ab*/
  v11[53] = v3; /*0x5ba6b2*/
  v11[52] = v5; /*0x5ba6b9*/
  v11[54] = GameOptions::GetEntry(); /*0x5ba6ca*/
  *(int *)((char *)&v11[7] + 2) = NetworkBuffer::GetField2(); /*0x5ba6db*/
  Field3 = NetworkBuffer::GetField3(); /*0x5ba6df*/
  *(int *)((char *)&v11[36] + 2) = *(_DWORD *)&stru_A8EB00.?[432]; /*0x5ba6f0*/
  *(int *)((char *)&v11[37] + 2) = dword_A8E960[0]; /*0x5ba6fd*/
  *(int *)((char *)&v11[8] + 2) = Field3; /*0x5ba70a*/
  BYTE2(v11[40]) = stru_A8B250.__pad_0[24]; /*0x5ba71b*/
  v7 = *(int *)((char *)&v11[35] + 2); /*0x5ba739*/
  LOBYTE(v7) = BYTE2(v11[35]) & 0xF; /*0x5ba744*/
  *(int *)((char *)&v11[35] + 2) = v7 /*0x5ba750*/
                                 | (16
                                  * (stru_A8B250.__pad_0[18] & 1
                                   | (2
                                    * (stru_A8B250.__pad_0[19] & 1
                                     | (2 * (stru_A8B250.__pad_0[20] & 1 | (2 * (stru_A8B250.__pad_0[28] & 1))))))));
  LOBYTE(v11[6]) = dword_A8DB30; /*0x5ba75d*/
  v8 = dword_A8B394; /*0x5ba776*/
  strcpy((char *)&v11[1], unk_A8B380); /*0x5ba77f*/
  BYTE1(v11[7]) = v8; /*0x5ba793*/
  *(int *)((char *)&v11[6] + 1) = dword_A8B3AC; /*0x5ba797*/
  *(int *)((char *)&v11[31] + 2) = *(_DWORD *)&stru_A8B250.__pad_0[12]; /*0x5ba79b*/
  v9 = *(int *)((char *)&v11[32] + 2) & 0xFFFFFFFE | stru_A8B250.__pad_0[8] & 1; /*0x5ba7bd*/
  LOBYTE(v9) = BYTE2(v11[32]) & 0xF8 | stru_A8B250.__pad_0[8] & 1; /*0x5ba7cc*/
  *(int *)((char *)&v11[32] + 2) = v9 | (2 * (stru_A8B250.__pad_0[16] & 1 | (2 * (stru_A8B250.__pad_0[17] & 1)))); /*0x5ba7f7*/
  LOBYTE(v11[35]) = stru_A8B250.__pad_0[36]; /*0x5ba819*/
  *(int *)((char *)&v11[35] + 2) = *(int *)((char *)&v11[35] + 2) & 0xFFFFFFF1 /*0x5ba828*/
                                 | (4 * (dword_A8B320 & 1)) & 0xF5
                                 | (2 * (byte_A8B31D & 1 | (4 * (byte_A8B31F & 1))));
  BYTE1(v11[35]) = stru_A8B250.__pad_0[40]; /*0x5ba835*/
  BYTE2(v11[34]) = g_RulesInitConfig; /*0x5ba842*/
  HIBYTE(v11[34]) = stru_A8B250.__pad_0[32]; /*0x5ba84e*/
  wcscpy((wchar_t *)&v11[9] + 1, *(const wchar_t **)(dword_A8B8CC + 4 * *(_DWORD *)&stru_A8B250.__pad_0[4])); /*0x5ba85e*/
  CCFileClass::Construct(&v13, (char *)(*(_DWORD *)(dword_A8B8CC + 4 * *(_DWORD *)&stru_A8B250.__pad_0[4]) + 88)); /*0x5ba87f*/
  *(int *)((char *)&v11[39] + 2) = CCFileClass::GetSize(&v13); /*0x5ba896*/
  strncpy( /*0x5ba8b3*/
    (char *)&v11[40] + 3,
    (const char *)(*(_DWORD *)(dword_A8B8CC + 4 * *(_DWORD *)&stru_A8B250.__pad_0[4]) + 88),
    0xDu);
  strncpy( /*0x5ba8d7*/
    (char *)&v11[44],
    (const char *)(*(_DWORD *)(dword_A8B8CC + 4 * *(_DWORD *)&stru_A8B250.__pad_0[4]) + 348),
    0x20u);
  *(int *)((char *)&v11[32] + 2) = *(int *)((char *)&v11[32] + 2) & 0xFFFFFFEF /*0x5ba90c*/
                                 | (16
                                  * (*(_BYTE *)(*(_DWORD *)(dword_A8B8CC + 4 * *(_DWORD *)&stru_A8B250.__pad_0[4]) + 380)
                                   & 1));
  Stream::WriteBlock((int *)&unk_A8EA70, (int)v11, 250, 1); /*0x5ba91d*/
  *(_DWORD *)v13.CDFileClass = &CCFileClass::`vftable'; /*0x5ba929*/
  v15 = 0; /*0x5ba934*/
  Vector::Clear((int)v14); /*0x5ba93f*/
  *(_DWORD *)v13.CDFileClass = &off_7E1668; /*0x5ba94b*/
  return BufferIOFileClass::Dtor((BufferIOFileClass *)&v13); /*0x5ba95b*/
}



// ==== 0x005BA970  NetworkGameSetup::SendGameSetupPacket  this=NetworkGameSetup  sig=csp ====
void __thiscall NetworkGameSetup::SendGameSetupPacket(NetworkGameSetup *this, wchar_t *Source)
{
  char *v3; // eax
  unsigned int v4; // edi
  HWND DlgItem; // esi
  int (__usercall *v6)@<eax>(char@<cf>, char@<zf>); // edi
  wchar_t *Format; // [esp+10h] [ebp-300h]
  int v8[62]; // [esp+14h] [ebp-2FCh] BYREF
  __int16 v9; // [esp+10Ch] [ebp-204h]
  wchar_t Buffer[256]; // [esp+110h] [ebp-200h] BYREF

  if ( Source ) /*0x5ba985*/
  {
    memset(v8, 0, sizeof(v8)); /*0x5ba99a*/
    v9 = 0; /*0x5ba99c*/
    v8[0] = 104; /*0x5ba9a8*/
    strcpy((char *)&v8[1], unk_A8B380); /*0x5ba9c4*/
    LOBYTE(v8[6]) = dword_A8B394; /*0x5ba9d4*/
    wcscpy((wchar_t *)((char *)&v8[6] + 1), Source); /*0x5ba9d8*/
    Stream::WriteBlock((int *)&unk_A8EA70, (int)v8, 250, 1); /*0x5ba9f1*/
    Stream::ReadPacket((int)&unk_A8EA70); /*0x5ba9fb*/
    v3 = CharToWideString(unk_A8B380); /*0x5baa05*/
    v4 = dword_A8B394; /*0x5baa0d*/
    Format = (wchar_t *)v3; /*0x5baa19*/
    DlgItem = GetDlgItem(*(HWND *)this->__pad_0, 1343); /*0x5baa23*/
    if ( DlgItem ) /*0x5baa27*/
    {
      if ( v4 >= 8 ) /*0x5baa2b*/
        v6 = Math::InitDegToRad; /*0x5baa3b*/
      else
        v6 = (int (__usercall *)@<eax>(char@<cf>, char@<zf>))dword_8316A8[v4]; /*0x5baa32*/
      swprintf(Buffer, (const size_t)g_Str_Trace___s_, Format, Source); /*0x5baa54*/
      DrawDialogText((LPARAM)v6, Buffer, DlgItem); /*0x5baa66*/
    }
  }
}



// ==== 0x005BAA80  ObjectClass::method_5BAA80  this=ObjectClass  sig=csp ====
void __thiscall sub_5BAA80(ObjectClass *this, wchar_t *Format, unsigned int a3, int a4)
{
  HWND DlgItem; // edi
  int (__usercall *v5)@<eax>(char@<cf>, char@<zf>); // esi
  wchar_t Buffer[256]; // [esp+8h] [ebp-200h] BYREF

  if ( a4 ) /*0x5baa91*/
  {
    DlgItem = GetDlgItem((HWND)this->AbstractClass, 1343); /*0x5baaa1*/
    if ( DlgItem ) /*0x5baaa5*/
    {
      if ( a3 >= 8 ) /*0x5baab1*/
        v5 = Math::InitDegToRad; /*0x5baac1*/
      else
        v5 = (int (__usercall *)@<eax>(char@<cf>, char@<zf>))dword_8316A8[a3]; /*0x5baab8*/
      swprintf(Buffer, (const size_t)g_Str_Trace___s_, Format, a4); /*0x5baada*/
      DrawDialogText((LPARAM)v5, Buffer, DlgItem); /*0x5baae9*/
    }
  }
}



// ==== 0x005BAB00  SendSignOffEvent  this=ModemHost  sig=ida-proto ====
HWND sub_5BAB00()
{
  wchar_t *StringCSF; // eax
  HWND MessageBox; // eax
  HWND v2; // ebx
  int v3; // edi
  int v4; // esi
  HWND result; // eax
  _BYTE v6[4]; // [esp+8h] [ebp-1FCh] BYREF
  _DWORD v7[62]; // [esp+Ch] [ebp-1F8h] BYREF
  __int16 v8; // [esp+104h] [ebp-100h]
  _DWORD v9[6]; // [esp+108h] [ebp-FCh] BYREF
  int v10; // [esp+120h] [ebp-E4h]

  memset(v7, 0, sizeof(v7)); /*0x5bab15*/
  v8 = 0; /*0x5bab21*/
  LOBYTE(v7[6]) = dword_A8DB30; /*0x5bab28*/
  v7[0] = 102; /*0x5bab37*/
  BYTE1(v7[7]) = dword_A8B394; /*0x5bab3f*/
  Stream::WriteBlock((int)&unk_A8EA70, (int)v7, 250, 1); /*0x5bab43*/
  StringCSF = GetStringCSF(aTxtSigningOff, 0, aDRa2mdpostMode_0, 2398); /*0x5bab5b*/
  MessageBox = CreateMessageBox((LPARAM)StringCSF, 0, 0); /*0x5bab64*/
  v2 = MessageBox; /*0x5bab69*/
  if ( MessageBox ) /*0x5bab6d*/
    Dialog::Show(MessageBox); /*0x5bab71*/
  v3 = dword_887340; /*0x5bab7b*/
  if ( dword_887338 != -1 ) /*0x5bab84*/
    v3 += Timer::GetTicks() - dword_887338; /*0x5bab96*/
  while ( Count::GetCountQueue(&unk_A8EA70) ) /*0x5bab9d*/
  {
    v4 = dword_887340; /*0x5babb0*/
    if ( dword_887338 != -1 ) /*0x5babb9*/
      v4 += Timer::GetTicks() - dword_887338; /*0x5babcb*/
    if ( (unsigned int)(v4 - v3) >= 0x12C /*0x5bac10*/
      || ObjectTypeClass::CreateInstance((int)&unk_A8EA70, (int)v9, (int)v6) > 0
      && v9[0] == 102
      && (unsigned __int8)v10 == dword_A8DB30 )
    {
      break; /*0x5bac10*/
    }
    Event::Dispatch(); /*0x5bac12*/
    MessageLoop(); /*0x5bac17*/
    Stream::ReadPacket((int)&unk_A8EA70); /*0x5bac21*/
  }
  result = (HWND)Network::CleanupOnDisconnect(); /*0x5bac39*/
  if ( v2 ) /*0x5bac40*/
    return Dialog::Destroy(v2); /*0x5bac44*/
  return result; /*0x5bac49*/
}



// ==== 0x005BAC60  ModemHost::StartGame  this=ModemHost  sig=csp ====
char __thiscall ModemHost::StartGame(int this, char a2)
{
  int v3; // eax
  int v4; // esi
  char *v5; // eax
  int v6; // eax
  int v7; // eax
  int v8; // esi
  int v9; // ebx
  int v10; // eax
  unsigned int BridgeIndexThunk; // ecx
  unsigned int v12; // eax
  unsigned int v13; // eax
  wchar_t *StringCSF; // eax
  Dialog *MessageBox; // eax
  Dialog *v16; // ebx
  int v17; // edi
  int v18; // esi
  int v19; // esi
  wchar_t *v20; // eax
  int v21; // edi
  int v22; // esi
  int *v23; // eax
  int v24; // esi
  int v25; // eax
  int v26; // ecx
  void *ptr_0; // edx
  wchar_t *v28; // [esp-10h] [ebp-224h]
  ObjectClass *v29; // [esp+0h] [ebp-214h]
  char v31[4]; // [esp+18h] [ebp-1FCh] BYREF
  int v32[62]; // [esp+1Ch] [ebp-1F8h] BYREF
  __int16 v33; // [esp+114h] [ebp-100h]
  int v34[63]; // [esp+118h] [ebp-FCh] BYREF

  Debug::Log(); /*0x5bac73*/
  Debug::Log(); /*0x5bac97*/
  if ( a2 == 1 ) /*0x5baca2*/
    return 0; /*0x5bacb0*/
  dword_A8B230[130].ptr_C = *(void **)&stru_A8B250.__pad_0[4]; /*0x5bacc5*/
  strcpy( /*0x5bacfc*/
    (char *)&dword_A8B230[130].abstractFlags,
    (const char *)(*(_DWORD *)(dword_A8B8CC + 4 * *(_DWORD *)&stru_A8B250.__pad_0[4]) + 88));
  dword_A8B230[43].ptr_4 = (void *)1; /*0x5bad10*/
  dword_A8B230[43].ptr_0 = (void *)1; /*0x5bad1c*/
  dword_A8B54C = 0; /*0x5bad22*/
  v3 = __2_YAPAXI_Z(0x85u); /*0x5bad28*/
  v4 = v3; /*0x5bad2d*/
  if ( v3 ) /*0x5bad34*/
  {
    Waypoint::InitInvalid((Waypoint *)(v3 + 40)); /*0x5bad3d*/
    v5 = CharToWideString(unk_A8B380); /*0x5bad47*/
    wcscpy((wchar_t *)v4, (const wchar_t *)v5); /*0x5bad4e*/
    *(_DWORD *)(v4 + 75) = dword_A8B3AC; /*0x5bad5b*/
    *(_DWORD *)(v4 + 83) = dword_A8B394; /*0x5bad64*/
    *(_DWORD *)(v4 + 115) = -1; /*0x5bad67*/
    if ( dword_A8DA84 < dword_A8DA7C /*0x5bada4*/
      || (byte_A8DA81 || !dword_A8DA7C)
      && dword_A8DA88 > 0
      && (*(unsigned __int8 (__thiscall **)(PtrVector *, int, _DWORD))(*(_DWORD *)&stru_A8DA74 + 8))(
           &stru_A8DA74,
           dword_A8DA7C + dword_A8DA88,
           0) )
    {
      v6 = dword_A8DA84++; /*0x5badb1*/
      dword_A8DA78[v6] = v4; /*0x5badc0*/
    }
  }
  v7 = __2_YAPAXI_Z(0x85u); /*0x5badc8*/
  v8 = v7; /*0x5badcd*/
  if ( v7 ) /*0x5badd4*/
  {
    Waypoint::InitInvalid((Waypoint *)(v7 + 40)); /*0x5baddd*/
    v9 = this; /*0x5bade2*/
    wcscpy((wchar_t *)v8, (const wchar_t *)(this + 34)); /*0x5badeb*/
    *(_DWORD *)(v8 + 75) = *(_DWORD *)(this + 80); /*0x5badf6*/
    *(_DWORD *)(v8 + 83) = *(_DWORD *)(this + 76); /*0x5badfc*/
    *(_DWORD *)(v8 + 115) = -1; /*0x5badff*/
    if ( dword_A8DA84 < dword_A8DA7C /*0x5bae3c*/
      || (byte_A8DA81 || !dword_A8DA7C)
      && dword_A8DA88 > 0
      && (*(unsigned __int8 (__thiscall **)(PtrVector *, int, _DWORD))(*(_DWORD *)&stru_A8DA74 + 8))(
           &stru_A8DA74,
           dword_A8DA7C + dword_A8DA88,
           0) )
    {
      v10 = dword_A8DA84++; /*0x5bae49*/
      dword_A8DA78[v10] = v8; /*0x5bae58*/
    }
  }
  else
  {
    v9 = this; /*0x5bae5d*/
  }
  if ( dword_A8DA84 != 2 ) /*0x5bae6d*/
    return 0; /*0x5bae7b*/
  memset(v32, 0, sizeof(v32)); /*0x5bae89*/
  v33 = 0; /*0x5bae8b*/
  v32[0] = 103; /*0x5bae92*/
  BridgeIndexThunk = CellClass::GetBridgeIndexThunk((NullModemClass *)&unk_A8EA70); /*0x5bae9f*/
  v12 = *(_DWORD *)(v9 + 16); /*0x5baea1*/
  *(int *)((char *)&v32[38] + 2) = BridgeIndexThunk; /*0x5baea9*/
  if ( v12 != 10000 && BridgeIndexThunk < v12 ) /*0x5baeb4*/
  {
    BridgeIndexThunk = v12; /*0x5baeb6*/
    *(int *)((char *)&v32[38] + 2) = v12; /*0x5baeb8*/
  }
  v13 = 5; /*0x5baec5*/
  stru_A8EB00.ObjectTypeClass[24] = *(_DWORD *)&stru_A8B250.__pad_0[24]; /*0x5baeca*/
  dword_A8B554 = 5; /*0x5baed8*/
  dword_A8DB9C = 0; /*0x5baedd*/
  dword_A8B56C = 0; /*0x5baee3*/
  dword_A8B570 = 0; /*0x5baee9*/
  if ( dword_A8B24C != 2 ) /*0x5baeef*/
  {
    dword_A8B550 = (wchar_t *)(BridgeIndexThunk >> 3); /*0x5baf1a*/
    if ( BridgeIndexThunk >> 3 > 5 ) /*0x5baf20*/
      goto LABEL_28; /*0x5baf20*/
LABEL_27:
    dword_A8B550 = (wchar_t *)v13; /*0x5baf22*/
    goto LABEL_28; /*0x5baf22*/
  }
  v13 = 5 * (((BridgeIndexThunk >> 3) + 4) / 5); /*0x5baf01*/
  if ( v13 > 0xA ) /*0x5baf07*/
    goto LABEL_27; /*0x5baf07*/
  dword_A8B550 = (wchar_t *)10; /*0x5baf09*/
LABEL_28:
  LOBYTE(v32[6]) = dword_A8DB30; /*0x5baf27*/
  Stream::WriteBlock((int *)&unk_A8EA70, (int)v32, 250, 1); /*0x5baf41*/
  StringCSF = GetStringCSF((wchar_t *)&stru_82BA00.__pad_F70[628], 0, &stru_82BA00.__pad_F70[52], 2540); /*0x5baf58*/
  MessageBox = (Dialog *)CreateMessageBox((LPARAM)StringCSF, 0, 0); /*0x5baf61*/
  v16 = MessageBox; /*0x5baf66*/
  if ( MessageBox ) /*0x5baf6a*/
    Dialog::Show(MessageBox); /*0x5baf6e*/
  v17 = *(_DWORD *)&stru_88732C.__pad_6[14]; /*0x5baf78*/
  if ( *(_DWORD *)&stru_88732C.__pad_6[6] != -1 ) /*0x5baf81*/
    v17 += Timer::GetTicks() - *(_DWORD *)&stru_88732C.__pad_6[6]; /*0x5baf93*/
  while ( 1 ) /*0x5baf9a*/
  {
    if ( !Count::GetCountQueue((Count *)&unk_A8EA70) ) /*0x5baf9a*/
      goto LABEL_38; /*0x5baf9a*/
    v18 = *(_DWORD *)&stru_88732C.__pad_6[14]; /*0x5bafa8*/
    if ( *(_DWORD *)&stru_88732C.__pad_6[6] != -1 ) /*0x5bafb1*/
      v18 += Timer::GetTicks() - *(_DWORD *)&stru_88732C.__pad_6[6]; /*0x5bafc3*/
    if ( (unsigned int)(v18 - v17) >= 0x708 ) /*0x5bafcd*/
    {
LABEL_38:
      v19 = *(_DWORD *)&stru_88732C.__pad_6[14]; /*0x5bafd4*/
      if ( *(_DWORD *)&stru_88732C.__pad_6[6] != -1 ) /*0x5bafdd*/
        v19 += Timer::GetTicks() - *(_DWORD *)&stru_88732C.__pad_6[6]; /*0x5bafef*/
      if ( (unsigned int)(v19 - v17) >= 0x3C ) /*0x5baff6*/
        break; /*0x5baff6*/
    }
    Event::Dispatch(); /*0x5baff8*/
    MessageLoop(); /*0x5baffd*/
    Stream::ReadPacket((int)&unk_A8EA70); /*0x5bb007*/
  }
  if ( v16 ) /*0x5bb010*/
  {
    v20 = GetStringCSF((wchar_t *)&stru_82BA00.__pad_F70[612], 0, &stru_82BA00.__pad_F70[52], 2557); /*0x5bb023*/
    Network_Start((HWND)v16, (LPARAM)v20); /*0x5bb02c*/
  }
  Debug::Log(); /*0x5bb036*/
  v21 = *(_DWORD *)&stru_88732C.__pad_6[14]; /*0x5bb040*/
  if ( *(_DWORD *)&stru_88732C.__pad_6[6] != -1 ) /*0x5bb04c*/
    v21 += Timer::GetTicks() - *(_DWORD *)&stru_88732C.__pad_6[6]; /*0x5bb05e*/
  while ( 1 ) /*0x5bb060*/
  {
    Event::Dispatch(); /*0x5bb060*/
    MessageLoop(); /*0x5bb065*/
    Stream::ReadPacket((int)&unk_A8EA70); /*0x5bb06f*/
    if ( ObjectTypeClass::CreateInstance(&unk_A8EA70, (int)v34, (int)v31) <= 0 ) /*0x5bb08d*/
      goto LABEL_48; /*0x5bb08d*/
    Debug::Log(); /*0x5bb094*/
    if ( v34[0] == 114 ) /*0x5bb0a6*/
    {
      Debug::Log(); /*0x5bb0f0*/
LABEL_57:
      if ( v16 ) /*0x5bb1aa*/
        Dialog::Destroy(v16); /*0x5bb1ae*/
      EventClass::CheckFlag((EventClass *)&unk_A8EA70); /*0x5bb1b8*/
      BYTE2(stru_A8D600.Network_field_0xC) = 0; /*0x5bb1c9*/
      dword_A8B230[130].ptr_C = *(void **)&stru_A8B250.__pad_0[4]; /*0x5bb1d0*/
      dword_A8B54C = dword_A8DA84; /*0x5bb1f0*/
      v25 = dword_A8E960[0]; /*0x5bb1f5*/
      BYTE1(v25) = BYTE1(dword_A8E960[0]) & 0x77; /*0x5bb1fc*/
      v26 = v25 | ((byte_A8B31D & 1 | (16 * (stru_A8B250.__pad_0[16] & 1))) << 11); /*0x5bb202*/
      LOBYTE(v26) = LOBYTE(dword_A8E960[0]) | 0xC0; /*0x5bb209*/
      *(_DWORD *)&stru_A8EB00.?[416] = 0; /*0x5bb20c*/
      dword_A8B24C = 2; /*0x5bb212*/
      dword_A8E960[0] = v26; /*0x5bb21c*/
      ptr_0 = dword_A8B230->ptr_0; /*0x5bb222*/
      BYTE1(ptr_0) = ((unsigned __int16)dword_A8B230->ptr_0 >> 8) & 0xFB; /*0x5bb229*/
      dword_A8B230->ptr_0 = ptr_0; /*0x5bb22c*/
      byte_A8B31C = 1; /*0x5bb22e*/
      nullsub_37(v29); /*0x5bb235*/
      Debug::Log(); /*0x5bb23f*/
      return 1; /*0x5bb247*/
    }
    if ( v34[0] == 115 ) /*0x5bb0ab*/
      break; /*0x5bb0ab*/
    if ( v34[0] == 110 ) /*0x5bb0b0*/
    {
      Debug::Log(); /*0x5bb189*/
      SendNetworkFile((char *)&dword_A8B230[130].abstractFlags, 1, 0, 0); /*0x5bb1a3*/
      goto LABEL_57; /*0x5bb1a3*/
    }
LABEL_48:
    v22 = *(_DWORD *)&stru_88732C.__pad_6[14]; /*0x5bb0b6*/
    if ( *(_DWORD *)&stru_88732C.__pad_6[6] != -1 ) /*0x5bb0c4*/
      v22 += Timer::GetTicks() - *(_DWORD *)&stru_88732C.__pad_6[6]; /*0x5bb0d6*/
    if ( (unsigned int)(v22 - v21) >= 0x4B0 ) /*0x5bb0e0*/
      goto LABEL_57; /*0x5bb0e0*/
  }
  v28 = GetStringCSF(g_Str_TXT_CANCEL, 0, &stru_82BA00.__pad_F70[52], 2582); /*0x5bb11e*/
  v23 = (int *)GetStringCSF((wchar_t *)&stru_82BA00.__pad_F70[512], 0, &stru_82BA00.__pad_F70[52], 2582); /*0x5bb130*/
  Dialog::ShowMessageBox(v23, v28, 0, 0, 0, (int)v29); /*0x5bb13a*/
  v24 = *(_DWORD *)&stru_88732C.__pad_6[14]; /*0x5bb144*/
  if ( *(_DWORD *)&stru_88732C.__pad_6[6] != -1 ) /*0x5bb14d*/
    v24 += Timer::GetTicks() - *(_DWORD *)&stru_88732C.__pad_6[6]; /*0x5bb15f*/
  *(_DWORD *)(this + 20) = v24; /*0x5bb16a*/
  Debug::Log(); /*0x5bb16d*/
  return 0; /*0x5baca4*/
}



// ==== 0x005BB290  ObjectClass::GenerateRandomMapPreview  this=ObjectClass  sig=csp ====
void __usercall GenerateRandomMapPreview(ObjectClass *this)
{
  int v1; // esi
  int v2; // eax
  int v3; // esi
  int v4; // eax
  int v5; // esi
  void *v6; // edi
  int v7; // esi
  DWORD v8; // esi
  size_t *v9; // [esp+0h] [ebp-290h]
  signed int Buffer; // [esp+10h] [ebp-280h] BYREF
  int Ticks; // [esp+14h] [ebp-27Ch]
  int v12; // [esp+18h] [ebp-278h]
  int v13; // [esp+1Ch] [ebp-274h]
  int v14; // [esp+24h] [ebp-26Ch]
  Pipe v15; // [esp+2Ch] [ebp-264h] BYREF
  int v16; // [esp+44h] [ebp-24Ch]
  int v17; // [esp+48h] [ebp-248h] BYREF
  LPCSTR v18[9]; // [esp+4Ch] [ebp-244h] BYREF
  Pipe v19; // [esp+70h] [ebp-220h] BYREF
  int v20[62]; // [esp+98h] [ebp-1F8h] BYREF
  __int16 v21; // [esp+190h] [ebp-100h]
  int v22[63]; // [esp+194h] [ebp-FCh] BYREF

  Ticks = Timer::GetTicks(); /*0x5bb2af*/
  v13 = 0; /*0x5bb2b3*/
  if ( !_strcmpi(byte_A8B8E0, aRandmapSed) ) /*0x5bb2b7*/
  {
    Debug::Log(); /*0x5bb2cc*/
    memset(v20, 0, sizeof(v20)); /*0x5bb2e2*/
    v21 = 0; /*0x5bb2e4*/
    v20[0] = 117; /*0x5bb2fa*/
    Stream::WriteBlock(&unk_A8EA70.ptr_0, (int)v20, 250, 1); /*0x5bb305*/
    v13 = 600; /*0x5bb31c*/
    Ticks = Timer::GetTicks(); /*0x5bb325*/
    v12 = v14; /*0x5bb329*/
    while ( Count::GetCountQueue((Count *)&unk_A8EA70) > 0 ) /*0x5bb337*/
    {
      v1 = v13; /*0x5bb33d*/
      if ( Ticks != -1 ) /*0x5bb343*/
      {
        v2 = Timer::GetTicks() - Ticks; /*0x5bb34e*/
        if ( v2 >= v13 ) /*0x5bb354*/
          break; /*0x5bb354*/
        v1 = v13 - v2; /*0x5bb356*/
      }
      if ( !v1 ) /*0x5bb35a*/
        break; /*0x5bb35a*/
      Event::Dispatch(); /*0x5bb35c*/
    }
    Ticks = Timer::GetTicks(); /*0x5bb36f*/
    v12 = v14; /*0x5bb385*/
    v13 = 1800; /*0x5bb389*/
    while ( 1 ) /*0x5bb392*/
    {
      Event::Dispatch(); /*0x5bb392*/
      if ( ObjectTypeClass::CreateInstance(&unk_A8EA70, (int)v22, (int)&v17) > 0 && v22[0] == 118 ) /*0x5bb3b9*/
        break; /*0x5bb3b9*/
      v3 = v13; /*0x5bb3bf*/
      if ( Ticks != -1 ) /*0x5bb3c5*/
      {
        v4 = Timer::GetTicks() - Ticks; /*0x5bb3d0*/
        if ( v4 >= v13 ) /*0x5bb3d6*/
          goto LABEL_15; /*0x5bb3d6*/
        v3 = v13 - v4; /*0x5bb3d8*/
      }
      if ( !v3 ) /*0x5bb3dc*/
      {
LABEL_15:
        Debug::Log(); /*0x5bb3de*/
        return; /*0x5bb3f5*/
      }
    }
    Buffer = 0; /*0x5bb403*/
    v5 = Palette::Preview_Generate((Palette *)g_UIControlState, 64, (int)&Buffer, v9); /*0x5bb410*/
    Debug::Log(); /*0x5bb418*/
    v6 = (void *)__2_YAPAXI_Z(4 * Buffer); /*0x5bb435*/
    v15.Pipe_field_0x04 = 0; /*0x5bb437*/
    v15.Pipe_field_0x08 = 0; /*0x5bb448*/
    *(_DWORD *)v15.__pad_0 = &Pipe::`vftable'; /*0x5bb44c*/
    Buffer::Init((Buffer *)&v15.Pipe_field_0x0C, (int)v6, 4 * Buffer); /*0x5bb454*/
    v16 = 0; /*0x5bb463*/
    *(_DWORD *)v15.__pad_0 = &BufferPipe::`vftable'; /*0x5bb467*/
    LZOPipe::Constructor((LZOPipe *)&v19, 0, 0x2000); /*0x5bb46f*/
    Pipe::SetDelegate(&v19, (int)&v15); /*0x5bb47d*/
    v7 = Compression::Read((int *)v19.__pad_0, v5, Buffer); /*0x5bb499*/
    v8 = (*(int (__thiscall **)(Pipe *))(*(_DWORD *)v19.__pad_0 + 4))(&v19) + v7; /*0x5bb49e*/
    Debug::Log(); /*0x5bb4a6*/
    RawFileClass::Construct((RawFileClass *)v18, (int)aPreviewBin); /*0x5bb4b7*/
    if ( (unsigned __int8)FileClass::Open((RawFileClass *)v18, 0) ) /*0x5bb4c1*/
      FileClass::Delete((RawFileClass *)v18); /*0x5bb4ce*/
    FileClass::Open2((RawFileClass *)v18, (const CHAR *)2); /*0x5bb4d9*/
    FileClass::Write2((RawFileClass *)v18, &Buffer, 4u); /*0x5bb4e9*/
    FileClass::Write2((RawFileClass *)v18, v6, v8); /*0x5bb4f4*/
    FileClass::CloseHandle((RawFileClass *)v18); /*0x5bb4fd*/
    __3_YAXPAX_Z(v6); /*0x5bb503*/
    Debug::Log(); /*0x5bb50d*/
    SendNetworkFile(aPreviewBin, 1, 0, 0); /*0x5bb521*/
    RawFileClass::Dtor((RawFileClass *)v18); /*0x5bb52a*/
    LZOPipe::Destructor((LZOPipe *)&v19); /*0x5bb533*/
    Vector::Clear((int)&v15.Pipe_field_0x0C); /*0x5bb53c*/
    Pipe::Dtor(&v15); /*0x5bb545*/
  }
}



// ==== 0x005BB560  NetworkGameSetup::DeleteComPtr  this=NetworkGameSetup  sig=csp ====
_DWORD *__thiscall NetworkGameSetup::DeleteComPtr(NetworkGameSetup *this, char a2)
{
  ComPtr::Dtor((ComPtr *)this); /*0x5bb563*/
  if ( (a2 & 1) != 0 ) /*0x5bb56d*/
    __3_YAXPAX_Z(this); /*0x5bb570*/
  return this->__pad_0; /*0x5bb57a*/
}



// ==== 0x005BB580  Network_Find  this=-  sig=csp ====
HKEY __fastcall sub_5BB580(HKEY a1, const CHAR *a2, const char *a3)
{
  HKEY v3; // esi
  DWORD v4; // ebx
  CHAR *v5; // ebp
  HKEY RegistrySubKey; // edi
  int v7; // esi
  DWORD v9; // [esp-1Ch] [ebp-4Ch]
  LPBYTE lpData; // [esp+10h] [ebp-20h]
  DWORD cchName; // [esp+14h] [ebp-1Ch] BYREF
  DWORD cbData; // [esp+18h] [ebp-18h] BYREF
  LPCSTR lpValueName; // [esp+1Ch] [ebp-14h]
  DWORD Type; // [esp+20h] [ebp-10h] BYREF
  HKEY v15; // [esp+24h] [ebp-Ch]
  struct _FILETIME ftLastWriteTime; // [esp+28h] [ebp-8h] BYREF

  v3 = a1; /*0x5bb58c*/
  lpValueName = a2; /*0x5bb58e*/
  v15 = a1; /*0x5bb593*/
  v4 = 0; /*0x5bb597*/
  v5 = (CHAR *)__2_YAPAXI_Z(0x100u); /*0x5bb59f*/
  lpData = (LPBYTE)__2_YAPAXI_Z(0x100u); /*0x5bb5ad*/
  cbData = 256; /*0x5bb5b1*/
  while ( 1 ) /*0x5bb5c8*/
  {
    v9 = v4; /*0x5bb5c8*/
    cchName = 256; /*0x5bb5ca*/
    ++v4; /*0x5bb5d2*/
    if ( RegEnumKeyExA(v3, v9, v5, &cchName, 0, 0, 0, &ftLastWriteTime) ) /*0x5bb5d3*/
      break; /*0x5bb5d3*/
    RegistrySubKey = FindRegistrySubKey(v3, v5, 0); /*0x5bb5eb*/
    if ( RegistrySubKey ) /*0x5bb5ef*/
    {
      cbData = 256; /*0x5bb608*/
      if ( !RegQueryValueExA(RegistrySubKey, lpValueName, 0, &Type, lpData, &cbData) /*0x5bb654*/
        && Type == 1
        && !strcmp((const char *)lpData, a3) )
      {
        __3_YAXPAX_Z(v5); /*0x5bb67d*/
        __3_YAXPAX_Z(lpData); /*0x5bb687*/
        return RegistrySubKey; /*0x5bb698*/
      }
      v7 = Network_Find(a3); /*0x5bb666*/
      RegCloseKey(RegistrySubKey); /*0x5bb669*/
      if ( v7 ) /*0x5bb671*/
      {
        __3_YAXPAX_Z(v5); /*0x5bb69c*/
        __3_YAXPAX_Z(lpData); /*0x5bb6a6*/
        return (HKEY)v7; /*0x5bb6b7*/
      }
      v3 = v15; /*0x5bb673*/
    }
  }
  __3_YAXPAX_Z(v5); /*0x5bb6bb*/
  __3_YAXPAX_Z(lpData); /*0x5bb6c5*/
  return 0; /*0x5bb691*/
}



// ==== 0x005BB6E0  Modem::EnumerateDevices  this=ObjectClass  sig=csp ====
int __thiscall Modem_EnumerateDevices(int this, int a2)
{
  BYTE *v4; // eax
  DWORD v5; // kr00_4
  const char *v6; // edi
  char *v7; // eax
  const char *v8; // edi
  char *v9; // edx
  unsigned int v10; // eax
  const char *v11; // edi
  char *v12; // edi
  const char *v13; // esi
  char v14; // cl
  char *v15; // eax
  DWORD v16; // edx
  HKEY v17; // eax
  BYTE *v18; // eax
  DWORD v19; // kr04_4
  BYTE *v20; // eax
  DWORD v21; // kr08_4
  BYTE *v22; // eax
  DWORD v23; // kr0C_4
  BYTE *v24; // eax
  DWORD v25; // kr10_4
  BYTE *v26; // eax
  DWORD v27; // kr14_4
  HKEY v28; // eax
  BYTE *v29; // eax
  DWORD v30; // ecx
  const char *v31; // esi
  void *v32; // ecx
  DWORD cbData; // [esp+10h] [ebp-42Ch] BYREF
  HKEY phkResult; // [esp+14h] [ebp-428h] BYREF
  DWORD cchName; // [esp+18h] [ebp-424h] BYREF
  DWORD cchClass; // [esp+1Ch] [ebp-420h] BYREF
  CHAR SubKey[8]; // [esp+20h] [ebp-41Ch] BYREF
  DWORD v38; // [esp+28h] [ebp-414h]
  int v39; // [esp+2Ch] [ebp-410h]
  HKEY hKey; // [esp+30h] [ebp-40Ch] BYREF
  struct _FILETIME ftLastWriteTime; // [esp+34h] [ebp-408h] BYREF
  BYTE Data[256]; // [esp+3Ch] [ebp-400h] BYREF
  char v43[256]; // [esp+13Ch] [ebp-300h] BYREF
  CHAR Name[256]; // [esp+23Ch] [ebp-200h] BYREF
  CHAR Class[256]; // [esp+33Ch] [ebp-100h] BYREF

  cbData = 256; /*0x5bb705*/
  v39 = 0; /*0x5bb709*/
  *(_DWORD *)this = 0; /*0x5bb70d*/
  *(_DWORD *)(this + 4) = 0; /*0x5bb710*/
  *(_DWORD *)(this + 8) = 0; /*0x5bb713*/
  *(_DWORD *)(this + 12) = 0; /*0x5bb716*/
  *(_DWORD *)(this + 16) = 0; /*0x5bb719*/
  *(_DWORD *)(this + 20) = 0; /*0x5bb71c*/
  *(_DWORD *)(this + 24) = 0; /*0x5bb71f*/
  wsprintfA(SubKey, "%04d", a2); /*0x5bb722*/
  if ( byte_887624 ) /*0x5bb732*/
  {
    if ( RegOpenKeyExA(HKEY_LOCAL_MACHINE, aSystemCurrentc, 0, 0x20019u, &phkResult) ) /*0x5bb74f*/
      return this; /*0x5bb753*/
    if ( RegOpenKeyExA(phkResult, SubKey, 0, 0x20019u, &phkResult) ) /*0x5bb76e*/
    {
LABEL_4:
      Debug::Log(); /*0x5bb778*/
      return this; /*0x5bb791*/
    }
  }
  else
  {
    if ( RegOpenKeyExA(HKEY_LOCAL_MACHINE, aSystemCurrentc_0, 0, 0x20019u, &phkResult) ) /*0x5bb7af*/
      goto LABEL_4; /*0x5bb7b3*/
    v38 = 0; /*0x5bb7f7*/
    cchName = 256; /*0x5bb7fb*/
    cchClass = 256; /*0x5bb7ff*/
    if ( RegEnumKeyExA(phkResult, 0, Name, &cchName, 0, Class, &cchClass, &ftLastWriteTime) ) /*0x5bb803*/
      return this; /*0x5bb803*/
    while ( 1 ) /*0x5bb838*/
    {
      strcpy(v43, aSystemCurrentc_1); /*0x5bb838*/
      strcat(v43, Name); /*0x5bb864*/
      if ( !RegOpenKeyExA(HKEY_LOCAL_MACHINE, v43, 0, 0x20019u, &hKey) ) /*0x5bb886*/
      {
        cbData = 256; /*0x5bb8a9*/
        if ( !RegQueryValueExA(hKey, aClass, 0, 0, Data, &cbData) && !_strcmpi(Data, aModem) ) /*0x5bb8c1*/
          break; /*0x5bb8c1*/
      }
      ++v38; /*0x5bb8f9*/
      cchName = 256; /*0x5bb8fd*/
      cchClass = 256; /*0x5bb901*/
      if ( RegEnumKeyExA(phkResult, v38, Name, &cchName, 0, Class, &cchClass, &ftLastWriteTime) ) /*0x5bb905*/
        return this; /*0x5bb91f*/
    }
    strcpy(v43, aSystemCurrentc_1); /*0x5bb949*/
    strcat(v43, Name); /*0x5bb975*/
    strcat(v43, asc_815E74); /*0x5bb9a4*/
    strcat(v43, SubKey); /*0x5bb9d2*/
    if ( RegOpenKeyExA(HKEY_LOCAL_MACHINE, v43, 0, 0x20019u, &phkResult) ) /*0x5bb9f4*/
      return this; /*0x5bb9f8*/
  }
  cbData = 256; /*0x5bba21*/
  if ( !RegQueryValueExA(phkResult, aModel, 0, 0, Data, &cbData) ) /*0x5bba25*/
  {
    v4 = (BYTE *)__2_YAPAXI_Z(cbData + 1); /*0x5bba35*/
    v5 = cbData; /*0x5bba42*/
    *(_DWORD *)this = v4; /*0x5bba49*/
    qmemcpy(v4, Data, v5); /*0x5bba4c*/
    Debug::Log(); /*0x5bba5e*/
    cbData = 256; /*0x5bba83*/
    if ( RegQueryValueExA(phkResult, aAttachedto, 0, 0, Data, &cbData) /*0x5bbab2*/
      && ((cbData = 256, byte_887624) || RegQueryValueExA(phkResult, aPnpattachedto, 0, 0, Data, &cbData)) )
    {
      v6 = *(const char **)this; /*0x5bbab8*/
      v39 = 1; /*0x5bbac0*/
      v7 = (char *)__2_YAPAXI_Z(strlen(v6) + 1); /*0x5bbacd*/
      v8 = *(const char **)this; /*0x5bbad2*/
      v9 = v7; /*0x5bbad5*/
      *(_DWORD *)(this + 4) = v7; /*0x5bbadf*/
      v10 = strlen(v8) + 1; /*0x5bbae2*/
      v11 = &v8[v10]; /*0x5bbae2*/
      qmemcpy(v9, &v11[-v10], 4 * (v10 >> 2)); /*0x5bbaf1*/
      v13 = &v11[4 * (v10 >> 2) - v10]; /*0x5bbaf1*/
      v12 = &v9[4 * (v10 >> 2)]; /*0x5bbaf1*/
      v14 = v10; /*0x5bbaf3*/
    }
    else
    {
      v15 = (char *)__2_YAPAXI_Z(cbData + 1); /*0x5bbafd*/
      v16 = cbData; /*0x5bbb09*/
      *(_DWORD *)(this + 4) = v15; /*0x5bbb11*/
      qmemcpy(v15, Data, 4 * (v16 >> 2)); /*0x5bbb17*/
      v13 = (const char *)&Data[4 * (v16 >> 2)]; /*0x5bbb17*/
      v12 = &v15[4 * (v16 >> 2)]; /*0x5bbb17*/
      v14 = v16; /*0x5bbb19*/
    }
    qmemcpy(v12, v13, v14 & 3); /*0x5bbb1e*/
    Debug::Log(); /*0x5bbb29*/
    v17 = FindRegistrySubKey(phkResult, aSettings, 1); /*0x5bbb3c*/
    phkResult = v17; /*0x5bbb43*/
    if ( !v17 ) /*0x5bbb47*/
      return this; /*0x5bbb47*/
    cbData = 256; /*0x5bbb61*/
    if ( !RegQueryValueExA(v17, aErrorcontrolOn, 0, 0, Data, &cbData) ) /*0x5bbb69*/
    {
      v18 = (BYTE *)__2_YAPAXI_Z(cbData + 1); /*0x5bbb75*/
      v19 = cbData; /*0x5bbb82*/
      *(_DWORD *)(this + 8) = v18; /*0x5bbb89*/
      qmemcpy(v18, Data, v19); /*0x5bbb8c*/
      Debug::Log(); /*0x5bbb9e*/
    }
    cbData = 256; /*0x5bbbbe*/
    if ( !RegQueryValueExA(phkResult, aErrorcontrolOf, 0, 0, Data, &cbData) ) /*0x5bbbc6*/
    {
      v20 = (BYTE *)__2_YAPAXI_Z(cbData + 1); /*0x5bbbd2*/
      v21 = cbData; /*0x5bbbdf*/
      *(_DWORD *)(this + 12) = v20; /*0x5bbbe6*/
      qmemcpy(v20, Data, v21); /*0x5bbbe9*/
      Debug::Log(); /*0x5bbbfb*/
    }
    cbData = 256; /*0x5bbc1b*/
    if ( !RegQueryValueExA(phkResult, aCompressionOn, 0, 0, Data, &cbData) ) /*0x5bbc23*/
    {
      v22 = (BYTE *)__2_YAPAXI_Z(cbData + 1); /*0x5bbc2f*/
      v23 = cbData; /*0x5bbc3c*/
      *(_DWORD *)(this + 16) = v22; /*0x5bbc43*/
      qmemcpy(v22, Data, v23); /*0x5bbc46*/
      Debug::Log(); /*0x5bbc58*/
    }
    cbData = 256; /*0x5bbc78*/
    if ( !RegQueryValueExA(phkResult, aCompressionOff, 0, 0, Data, &cbData) ) /*0x5bbc80*/
    {
      v24 = (BYTE *)__2_YAPAXI_Z(cbData + 1); /*0x5bbc8c*/
      v25 = cbData; /*0x5bbc99*/
      *(_DWORD *)(this + 20) = v24; /*0x5bbca0*/
      qmemcpy(v24, Data, v25); /*0x5bbca3*/
      Debug::Log(); /*0x5bbcb5*/
    }
    cbData = 256; /*0x5bbcd5*/
    if ( !RegQueryValueExA(phkResult, aFlowcontrolHar, 0, 0, Data, &cbData) ) /*0x5bbcdd*/
    {
      v26 = (BYTE *)__2_YAPAXI_Z(cbData + 1); /*0x5bbce9*/
      v27 = cbData; /*0x5bbcf6*/
      *(_DWORD *)(this + 24) = v26; /*0x5bbcfd*/
      qmemcpy(v26, Data, v27); /*0x5bbd00*/
      Debug::Log(); /*0x5bbd12*/
    }
    RegCloseKey(phkResult); /*0x5bbd1f*/
    if ( !v39 ) /*0x5bbd2b*/
      return this; /*0x5bbd2b*/
    strcpy(v43, "Modem\\"); /*0x5bbd60*/
    memset(&v43[7], 0, 249); /*0x5bbd6e*/
    strcat(v43, SubKey); /*0x5bbd92*/
    phkResult = FindRegistrySubKey(HKEY_LOCAL_MACHINE, aEnum, 0); /*0x5bbdac*/
    if ( !phkResult ) /*0x5bbdb0*/
      return this; /*0x5bbdb0*/
    v28 = (HKEY)Network_Find(v43); /*0x5bbdc5*/
    if ( v28 ) /*0x5bbdcc*/
    {
      cbData = 256; /*0x5bbde2*/
      if ( !RegQueryValueExA(v28, aPortname, 0, 0, Data, &cbData) ) /*0x5bbdea*/
      {
        if ( *(_DWORD *)(this + 4) ) /*0x5bbdf4*/
          __3_YAXPAX_Z(*(void **)(this + 4)); /*0x5bbdfc*/
        v29 = (BYTE *)__2_YAPAXI_Z(cbData + 1); /*0x5bbe0a*/
        v30 = cbData; /*0x5bbe0f*/
        *(_DWORD *)(this + 4) = v29; /*0x5bbe13*/
        qmemcpy(v29, Data, v30); /*0x5bbe21*/
        Debug::Log(); /*0x5bbe33*/
      }
    }
    else
    {
      v31 = *(const char **)(this + 4); /*0x5bbe3d*/
      if ( v31 && *(_DWORD *)this && !strcmp(*(const char **)this, v31) ) /*0x5bbe55*/
      {
        Debug::Log(); /*0x5bbe84*/
        __3_YAXPAX_Z(*(void **)this); /*0x5bbe8d*/
        v32 = *(void **)(this + 4); /*0x5bbe92*/
        *(_DWORD *)this = 0; /*0x5bbe95*/
        __3_YAXPAX_Z(v32); /*0x5bbe9d*/
        *(_DWORD *)(this + 4) = 0; /*0x5bbea5*/
      }
    }
  }
  RegCloseKey(phkResult); /*0x5bbeb1*/
  return this; /*0x5bb787*/
}



// ==== 0x005BBED0  FileFind::Close  this=AbstractClass  sig=ida-proto ====
// attributes: thunk
void __thiscall FileFind::Close(void **this)
{
  FileFind::ReleaseAllHandles(this); /*0x5bbed0*/
}



// ==== 0x005BBEE0  FileFind::ReleaseAllHandles  this=FileFind  sig=csp ====
void __thiscall FileFind::ReleaseAllHandles(FileFind *this)
{
  if ( *(_DWORD *)this->__pad_0 ) /*0x5bbee6*/
  {
    __3_YAXPAX_Z(*(void **)this->__pad_0); /*0x5bbeed*/
    *(_DWORD *)this->__pad_0 = 0; /*0x5bbef5*/
  }
  if ( this->FileFind_field_0x04 ) /*0x5bbef7*/
  {
    __3_YAXPAX_Z((void *)this->FileFind_field_0x04); /*0x5bbeff*/
    this->FileFind_field_0x04 = 0; /*0x5bbf07*/
  }
  if ( this->FileFind_field_0x08 ) /*0x5bbf0a*/
  {
    __3_YAXPAX_Z((void *)this->FileFind_field_0x08); /*0x5bbf12*/
    this->FileFind_field_0x08 = 0; /*0x5bbf1a*/
  }
  if ( this->FileFind_field_0x0C ) /*0x5bbf1d*/
  {
    __3_YAXPAX_Z((void *)this->FileFind_field_0x0C); /*0x5bbf25*/
    this->FileFind_field_0x0C = 0; /*0x5bbf2d*/
  }
  if ( this->q004 ) /*0x5bbf30*/
  {
    __3_YAXPAX_Z(*((void **)this + 4)); /*0x5bbf38*/
    this->q004 = 0; /*0x5bbf40*/
  }
  if ( *((_DWORD *)this + 5) ) /*0x5bbf43*/
  {
    __3_YAXPAX_Z(*((void **)this + 5)); /*0x5bbf4b*/
    *((_DWORD *)this + 5) = 0; /*0x5bbf53*/
  }
  if ( *((_DWORD *)this + 6) ) /*0x5bbf56*/
  {
    __3_YAXPAX_Z(*((void **)this + 6)); /*0x5bbf5e*/
    *((_DWORD *)this + 6) = 0; /*0x5bbf66*/
  }
}



// ==== 0x005BBF70  sub_5BBF70  this=-  sig=ida-proto ====
int sub_5BBF70()
{
  dword_ABF138 = 0; /*0x5bbf72*/
  dword_ABF13C = 0; /*0x5bbf77*/
  dword_ABF140 = 0; /*0x5bbf7c*/
  dword_ABF144 = 0; /*0x5bbf81*/
  return 0; /*0x5bbf86*/
}



// ==== 0x005BBF90  sub_5BBF90  this=-  sig=ida-proto ====
void sub_5BBF90()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x5bbf9c*/
  dbl_ABF150 = Math::Sqrt(v0 + v0); /*0x5bbfae*/
}



// ==== 0x005BBFC0  sub_5BBFC0  this=-  sig=ida-proto ====
void sub_5BBFC0()
{
  dbl_ABF210 = dbl_ABF150 / 60.0; /*0x5bbfcc*/
}



// ==== 0x005BBFE0  sub_5BBFE0  this=-  sig=ida-proto ====
void sub_5BBFE0()
{
  dbl_ABF1C0 = 1.0 / dbl_ABF210; /*0x5bbfec*/
}



// ==== 0x005BC000  sub_5BC000  this=-  sig=ida-proto ====
void sub_5BC000()
{
  dbl_ABF1B8 = 0.0174532925199433 * 45.0; /*0x5bc00c*/
}



// ==== 0x005BC020  sub_5BC020  this=-  sig=ida-proto ====
void sub_5BC020()
{
  dbl_ABF158 = 0.0174532925199433 * 60.0; /*0x5bc02c*/
}



// ==== 0x005BC040  sub_5BC040  this=-  sig=ida-proto ====
void sub_5BC040()
{
  dbl_ABF130 = 0.0174532925199433 * 90.0; /*0x5bc04c*/
}



// ==== 0x005BC060  sub_5BC060  this=-  sig=ida-proto ====
__int64 sub_5BC060()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_ABF130 - dbl_ABF158); /*0x5bc072*/
  result = Math::RoundToInt(v0 * dbl_ABF150 * 0.5); /*0x5bc086*/
  dword_ABF218 = result; /*0x5bc08b*/
  return result; /*0x5bc090*/
}



// ==== 0x005BC0A0  sub_5BC0A0  this=-  sig=ida-proto ====
void sub_5BC0A0()
{
  dbl_ABF160 = Math::ArcTan((double)dword_ABF218 * 0.00390625); /*0x5bc0b7*/
}



// ==== 0x005BC0D0  sub_5BC0D0  this=-  sig=ida-proto ====
void sub_5BC0D0()
{
  dbl_ABF1B0 = Math::ArcTan((double)(2 * dword_ABF218) / dbl_ABF150); /*0x5bc0f2*/
}



// ==== 0x005BC100  sub_5BC100  this=-  sig=ida-proto ====
__int64 sub_5BC100()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_ABF218) + 0.5); /*0x5bc11b*/
  dword_ABF20C = result; /*0x5bc120*/
  return result; /*0x5bc126*/
}



// ==== 0x005BC130  sub_5BC130  this=-  sig=ida-proto ====
int sub_5BC130()
{
  word_ABF148 = 0; /*0x5bc132*/
  word_ABF14A = 0; /*0x5bc138*/
  return 0; /*0x5bc13e*/
}



// ==== 0x005BC140  sub_5BC140  this=-  sig=ida-proto ====
int sub_5BC140()
{
  dword_ABF188 = 0; /*0x5bc142*/
  dword_ABF18C = 0; /*0x5bc147*/
  dword_ABF190 = 0; /*0x5bc14c*/
  return 0; /*0x5bc151*/
}



// ==== 0x005BC160  sub_5BC160  this=-  sig=ida-proto ====
int sub_5BC160()
{
  dword_ABF208 = 0; /*0x5bc165*/
  dword_ABF200 = 128; /*0x5bc16f*/
  dword_ABF204 = 128; /*0x5bc174*/
  return 128; /*0x5bc179*/
}



// ==== 0x005BC180  WinMain_Create  this=ObjectClass  sig=csp ====
unsigned __int8 __fastcall sub_5BC180(HINSTANCE a1, HWND a2, char a3)
{
  int *v3; // edi
  _DWORD *v4; // eax
  _BYTE *v5; // esi
  int v6; // edi
  _DWORD *v7; // ebp
  _BYTE *v8; // ecx
  _DWORD *v9; // eax
  int v10; // edx
  int *v11; // ebx
  _BYTE *v12; // ecx
  int v13; // edi
  int v14; // ebp
  _BYTE *v15; // edx
  _DWORD *v16; // eax
  int v17; // esi
  unsigned __int8 result; // al
  int *v19; // [esp+10h] [ebp-4h]
  int v20; // [esp+18h] [ebp+4h]

  v3 = dword_ABF168; /*0x5bc18b*/
  dword_ABF230 = a1; /*0x5bc190*/
  dword_ABF234 = a2; /*0x5bc196*/
  byte_ABF238 = a3; /*0x5bc19c*/
  v20 = 0; /*0x5bc1a1*/
  v19 = dword_ABF168; /*0x5bc1a5*/
  do /*0x5bc24f*/
  {
    v4 = __2_YAPAXI_Z(0x2738u); /*0x5bc1ae*/
    v5 = v4; /*0x5bc1b3*/
    if ( v4 ) /*0x5bc1ba*/
    {
      v4[2503] = 0; /*0x5bc1c0*/
      v4[2502] = v20; /*0x5bc1c6*/
      v4[2504] = 0; /*0x5bc1cc*/
      v4[2505] = 0; /*0x5bc1d2*/
      v4[2506] = 0; /*0x5bc1d8*/
      v4[2507] = 80; /*0x5bc1de*/
      v4[2508] = 25; /*0x5bc1e8*/
      v6 = 0; /*0x5bc1f2*/
      v7 = v4 + 500; /*0x5bc1f4*/
      do /*0x5bc219*/
      {
        v8 = &v5[v6]; /*0x5bc1fa*/
        v9 = v7; /*0x5bc1fd*/
        v10 = 80; /*0x5bc1ff*/
        do /*0x5bc210*/
        {
          *v8 = 32; /*0x5bc204*/
          *v9 = 0; /*0x5bc207*/
          v9 += 25; /*0x5bc209*/
          v8 += 25; /*0x5bc20c*/
          --v10; /*0x5bc20f*/
        }
        while ( v10 ); /*0x5bc210*/
        ++v6; /*0x5bc212*/
        ++v7; /*0x5bc213*/
      }
      while ( v6 < 25 ); /*0x5bc219*/
      v5[10036] = 1; /*0x5bc223*/
      Text::DrawRepeated(v5, 0, 0, 80, 25); /*0x5bc22a*/
      v3 = v19; /*0x5bc22f*/
    }
    else
    {
      v5 = 0; /*0x5bc235*/
    }
    *v3++ = (int)v5; /*0x5bc23b*/
    ++v20; /*0x5bc247*/
    v19 = v3; /*0x5bc24b*/
  }
  while ( (int)v3 < (int)&dword_ABF188 ); /*0x5bc24f*/
  v11 = dword_ABF168; /*0x5bc25b*/
  dword_ABF23C = dword_ABF168[0]; /*0x5bc260*/
  do /*0x5bc2b2*/
  {
    v12 = (_BYTE *)*v11; /*0x5bc266*/
    v13 = 0; /*0x5bc268*/
    v14 = *v11 + 2000; /*0x5bc26a*/
    do /*0x5bc293*/
    {
      v15 = &v12[v13]; /*0x5bc270*/
      v16 = (_DWORD *)v14; /*0x5bc273*/
      v17 = 80; /*0x5bc275*/
      do /*0x5bc28a*/
      {
        *v15 = 32; /*0x5bc27a*/
        *v16 = 0; /*0x5bc27d*/
        v16 += 25; /*0x5bc283*/
        v15 += 25; /*0x5bc286*/
        --v17; /*0x5bc289*/
      }
      while ( v17 ); /*0x5bc28a*/
      ++v13; /*0x5bc28c*/
      v14 += 4; /*0x5bc28d*/
    }
    while ( v13 < 25 ); /*0x5bc293*/
    v12[10036] = 1; /*0x5bc29d*/
    Text::DrawRepeated(v12, 0, 0, 80, 25); /*0x5bc2a4*/
    ++v11; /*0x5bc2a9*/
  }
  while ( (int)v11 < (int)&dword_ABF188 ); /*0x5bc2b2*/
  result = byte_ABF239; /*0x5bc2b4*/
  if ( byte_ABF239 ) /*0x5bc2bf*/
  {
    result = byte_ABF238; /*0x5bc2c1*/
    if ( byte_ABF238 ) /*0x5bc2c8*/
    {
      if ( !dword_ABF240 ) /*0x5bc2d1*/
        CreateDebugOutput(); /*0x5bc2d3*/
      byte_ABF23A = 1; /*0x5bc2e0*/
      ShowWindow(dword_ABF240, 1); /*0x5bc2e7*/
      return (unsigned __int8)SetFocus(dword_ABF234); /*0x5bc2f4*/
    }
  }
  return result; /*0x5bc2b9*/
}



// ==== 0x005BC300  __ioterm  this=-  sig=ida-proto ====
HWND _ioterm()
{
  void **v0; // esi
  HWND result; // eax

  v0 = (void **)dword_ABF168; /*0x5bc301*/
  do /*0x5bc324*/
  {
    if ( *v0 ) /*0x5bc306*/
    {
      __3_YAXPAX_Z(*v0); /*0x5bc30d*/
      *v0 = 0; /*0x5bc315*/
    }
    ++v0; /*0x5bc31b*/
  }
  while ( (int)v0 < (int)&dword_ABF188 ); /*0x5bc324*/
  result = dword_ABF240; /*0x5bc326*/
  if ( dword_ABF240 ) /*0x5bc32e*/
  {
    DeleteObject(dword_ABF244); /*0x5bc336*/
    Object::RemoveObjectArray(dword_ABF240); /*0x5bc342*/
    result = (HWND)DestroyWindow(dword_ABF240); /*0x5bc34e*/
    dword_ABF244 = 0; /*0x5bc354*/
    dword_ABF240 = 0; /*0x5bc35e*/
  }
  return result; /*0x5bc32b*/
}



// ==== 0x005BC3C0  Network_Process  this=-  sig=ida-proto ====
unsigned __int8 sub_5BC3C0()
{
  unsigned __int8 result; // al

  result = byte_ABF238; /*0x5bc3c0*/
  if ( byte_ABF238 ) /*0x5bc3c7*/
  {
    if ( !dword_ABF240 ) /*0x5bc3d0*/
      CreateDebugOutput(); /*0x5bc3d2*/
    byte_ABF23A = 1; /*0x5bc3df*/
    ShowWindow(dword_ABF240, 1); /*0x5bc3e6*/
    return (unsigned __int8)SetFocus(dword_ABF234); /*0x5bc3f3*/
  }
  return result; /*0x5bc3f9*/
}



// ==== 0x005BC400  Mouse::HideWindow  this=MouseClass  sig=ida-proto ====
HWND Mouse_HideWindow()
{
  HWND result; // eax

  result = dword_ABF240; /*0x5bc400*/
  byte_ABF239 = 0; /*0x5bc409*/
  if ( dword_ABF240 ) /*0x5bc40f*/
  {
    byte_ABF23A = 0; /*0x5bc413*/
    return (HWND)ShowWindow(dword_ABF240, 0); /*0x5bc419*/
  }
  return result; /*0x5bc41f*/
}



// ==== 0x005BC440  sub_5BC440  this=-  sig=ida-proto ====
int sub_5BC440()
{
  return dword_ABF23C; /*0x5bc445*/
}



// ==== 0x005BC450  GetTextBufferEntry  this=-  sig=ida-proto ====
int __fastcall sub_5BC450(int a1)
{
  return dword_ABF168[a1]; /*0x5bc457*/
}



// ==== 0x005BC460  sub_5BC460  this=-  sig=ida-proto ====
char __fastcall sub_5BC460(int a1)
{
  _BYTE *v1; // ecx
  int v2; // edi
  _DWORD *v3; // ebx
  _BYTE *v4; // edx
  _DWORD *v5; // eax
  int v6; // esi

  v1 = (_BYTE *)dword_ABF168[a1]; /*0x5bc460*/
  dword_ABF23C = (int)v1; /*0x5bc46a*/
  v2 = 0; /*0x5bc470*/
  v3 = v1 + 2000; /*0x5bc472*/
  do /*0x5bc49b*/
  {
    v4 = &v1[v2]; /*0x5bc478*/
    v5 = v3; /*0x5bc47b*/
    v6 = 80; /*0x5bc47d*/
    do /*0x5bc492*/
    {
      *v4 = 32; /*0x5bc482*/
      *v5 = 0; /*0x5bc485*/
      v5 += 25; /*0x5bc48b*/
      v4 += 25; /*0x5bc48e*/
      --v6; /*0x5bc491*/
    }
    while ( v6 ); /*0x5bc492*/
    ++v2; /*0x5bc494*/
    ++v3; /*0x5bc495*/
  }
  while ( v2 < 25 ); /*0x5bc49b*/
  v1[10036] = 1; /*0x5bc4a5*/
  Text::DrawRepeated(v1, 0, 0, 80, 25); /*0x5bc4ac*/
  return Text::DrawRepeated((void *)dword_ABF23C, 0, 0, 80, 25); /*0x5bc4c4*/
}



// ==== 0x005BC4D0  ObjectClass::method_5BC4D0  this=ObjectClass  sig=csp ====
char sub_5BC4D0(UnitClass *this)
{
  int *v1; // ebx
  int v2; // ecx
  int v3; // edi
  int v4; // ebp
  _BYTE *v5; // edx
  _DWORD *v6; // eax
  int v7; // esi
  char result; // al

  v1 = &dword_ABF168; /*0x5bc4d4*/
  do /*0x5bc525*/
  {
    v2 = *v1; /*0x5bc4d9*/
    v3 = 0; /*0x5bc4db*/
    v4 = *v1 + 2000; /*0x5bc4dd*/
    do /*0x5bc506*/
    {
      v5 = (_BYTE *)(v3 + v2); /*0x5bc4e3*/
      v6 = (_DWORD *)v4; /*0x5bc4e6*/
      v7 = 80; /*0x5bc4e8*/
      do /*0x5bc4fd*/
      {
        *v5 = 32; /*0x5bc4ed*/
        *v6 = 0; /*0x5bc4f0*/
        v6 += 25; /*0x5bc4f6*/
        v5 += 25; /*0x5bc4f9*/
        --v7; /*0x5bc4fc*/
      }
      while ( v7 ); /*0x5bc4fd*/
      ++v3; /*0x5bc4ff*/
      v4 += 4; /*0x5bc500*/
    }
    while ( v3 < 25 ); /*0x5bc506*/
    *(_BYTE *)(v2 + 10036) = 1; /*0x5bc510*/
    result = Text::DrawRepeated((Text *)v2, 0, 0, 80, 25); /*0x5bc517*/
    ++v1; /*0x5bc51c*/
  }
  while ( (int)v1 < (int)&dword_ABF188 ); /*0x5bc525*/
  return result; /*0x5bc527*/
}



// ==== 0x005BC530  CreateDebugOutput  this=-  sig=ida-proto ====
int sub_5BC530()
{
  HDC DC; // ebp
  int DeviceCaps; // eax
  HGDIOBJ v2; // edi
  struct tagRECT Rect; // [esp+10h] [ebp-5Ch] BYREF
  struct tagRECT v5; // [esp+20h] [ebp-4Ch] BYREF
  LOGFONTA lf; // [esp+30h] [ebp-3Ch] BYREF

  dword_ABF240 = CreateDialogParamA(dword_ABF230, (LPCSTR)0xF8, dword_ABF234, DlgProcAudioDebug, 0); /*0x5bc559*/
  TimerPool::AllocSlot(dword_ABF240); /*0x5bc55e*/
  DC = GetDC(dword_ABF240); /*0x5bc570*/
  DeviceCaps = GetDeviceCaps(DC, 90); /*0x5bc577*/
  lf.lfHeight = -MulDiv(8, DeviceCaps, 72); /*0x5bc588*/
  memset(&lf.lfWidth, 0, 24); /*0x5bc5a6*/
  strcpy(lf.lfFaceName, "Courier"); /*0x5bc5d9*/
  dword_ABF244 = CreateFontIndirectA(&lf); /*0x5bc5f3*/
  v2 = SelectObject(DC, dword_ABF244); /*0x5bc5fc*/
  GetTextMetricsA(DC, &dword_ABF1C8); /*0x5bc604*/
  SelectObject(DC, v2); /*0x5bc60c*/
  dword_ABF128 = GetSysColor(15); /*0x5bc618*/
  dword_ABF110 = GetSysColor(8); /*0x5bc621*/
  Rect.left = 0; /*0x5bc62b*/
  Rect.top = 0; /*0x5bc62f*/
  Rect.right = 79 * dword_ABF1C8.tmMaxCharWidth + 20; /*0x5bc64b*/
  Rect.bottom = 25 * (dword_ABF1C8.tmHeight + dword_ABF1C8.tmExternalLeading) + 20; /*0x5bc661*/
  AdjustWindowRect(&Rect, 0xC00000u, 0); /*0x5bc665*/
  GetWindowRect(dword_ABF234, &v5); /*0x5bc677*/
  MoveWindow(dword_ABF240, v5.right + 5, 0, Rect.right - Rect.left, Rect.bottom - Rect.top, 1); /*0x5bc6a4*/
  ShowWindow(dword_ABF240, 0); /*0x5bc6b2*/
  SetFocus(dword_ABF234); /*0x5bc6bf*/
  return ReleaseDC(dword_ABF240, DC); /*0x5bc6d2*/
}



// ==== 0x005BC6E0  DlgProcAudioDebug  this=-  sig=csp ====
INT_PTR __stdcall AudioDebug_DlgProc(HWND hWnd, UINT a2, WPARAM a3, LPARAM a4)
{
  int v5; // ecx
  int v6; // ecx
  int v7; // ecx
  int v8; // ecx
  char *v9; // ecx
  int Index; // eax
  void *Enabled; // eax
  char *v12; // eax
  _DWORD *v13; // ecx
  _BYTE *v14; // ecx
  int v15; // eax
  _BYTE *v16; // ecx
  int v17; // edi
  _DWORD *v18; // ebx
  _BYTE *v19; // edx
  _DWORD *v20; // eax
  int v21; // esi
  int v22; // eax
  int v23; // edi
  _DWORD *v24; // ebx
  _BYTE *v25; // edx
  _DWORD *v26; // eax
  int v27; // esi
  int v28; // [esp-4h] [ebp-50h]
  struct tagPAINTSTRUCT Paint; // [esp+Ch] [ebp-40h] BYREF

  if ( a2 == 15 ) /*0x5bc6ed*/
  {
    InvalidateRect(hWnd, 0, 1); /*0x5bc6f8*/
    BeginPaint(hWnd, &Paint); /*0x5bc704*/
    if ( dword_ABF23C ) /*0x5bc712*/
    {
      if ( byte_ABF23A ) /*0x5bc71b*/
        Text::DrawRepeated((void *)dword_ABF23C, 0, 0, 80, 25); /*0x5bc732*/
    }
    EndPaint(hWnd, &Paint); /*0x5bc73d*/
    return 1; /*0x5bc74e*/
  }
  if ( a2 == 258 ) /*0x5bc756*/
  {
    if ( !dword_ABF224 ) /*0x5bc763*/
    {
      dword_ABF224 = (int)unk_ABF198; /*0x5bc76a*/
      AudioController::Init(unk_ABF198); /*0x5bc770*/
    }
    switch ( a3 ) /*0x5bc78d*/
    {
      case ',': /*0x5bc78d*/
      case '<': /*0x5bc78d*/
        v15 = *(_DWORD *)(dword_ABF23C + 10008) + 1; /*0x5bc9d1*/
        if ( *(_DWORD *)(dword_ABF23C + 10008) == 7 ) /*0x5bc9d5*/
          v15 = 0; /*0x5bc9d7*/
        v16 = (_BYTE *)dword_ABF168[v15]; /*0x5bc9d9*/
        v17 = 0; /*0x5bc9e0*/
        dword_ABF23C = (int)v16; /*0x5bc9e2*/
        v18 = v16 + 2000; /*0x5bc9e8*/
        do /*0x5bca11*/
        {
          v19 = &v16[v17]; /*0x5bc9ee*/
          v20 = v18; /*0x5bc9f1*/
          v21 = 80; /*0x5bc9f3*/
          do /*0x5bca08*/
          {
            *v19 = 32; /*0x5bc9f8*/
            *v20 = 0; /*0x5bc9fb*/
            v20 += 25; /*0x5bca01*/
            v19 += 25; /*0x5bca04*/
            --v21; /*0x5bca07*/
          }
          while ( v21 ); /*0x5bca08*/
          ++v17; /*0x5bca0a*/
          ++v18; /*0x5bca0b*/
        }
        while ( v17 < 25 ); /*0x5bca11*/
        goto LABEL_54; /*0x5bca11*/
      case '.': /*0x5bc78d*/
      case '>': /*0x5bc78d*/
        v22 = *(_DWORD *)(dword_ABF23C + 10008) - 1; /*0x5bca38*/
        if ( v22 < 0 ) /*0x5bca39*/
          v22 = 7; /*0x5bca3b*/
        v16 = (_BYTE *)dword_ABF168[v22]; /*0x5bca40*/
        v23 = 0; /*0x5bca47*/
        dword_ABF23C = (int)v16; /*0x5bca49*/
        v24 = v16 + 2000; /*0x5bca4f*/
        do /*0x5bca78*/
        {
          v25 = &v16[v23]; /*0x5bca55*/
          v26 = v24; /*0x5bca58*/
          v27 = 80; /*0x5bca5a*/
          do /*0x5bca6f*/
          {
            *v25 = 32; /*0x5bca5f*/
            *v26 = 0; /*0x5bca62*/
            v26 += 25; /*0x5bca68*/
            v25 += 25; /*0x5bca6b*/
            --v27; /*0x5bca6e*/
          }
          while ( v27 ); /*0x5bca6f*/
          ++v23; /*0x5bca71*/
          ++v24; /*0x5bca72*/
        }
        while ( v23 < 25 ); /*0x5bca78*/
LABEL_54:
        v16[10036] = 1; /*0x5bca13*/
        Text::DrawRepeated(v16, 0, 0, 80, 25); /*0x5bca22*/
        goto LABEL_45; /*0x5bca27*/
      case '1': /*0x5bc78d*/
      case '2': /*0x5bc78d*/
      case '3': /*0x5bc78d*/
      case '4': /*0x5bc78d*/
        dword_ABF22C = a3 - 49; /*0x5bc799*/
        return 0; /*0x5bc7a5*/
      case 'A': /*0x5bc78d*/
      case 'a': /*0x5bc78d*/
        v14 = (_BYTE *)dword_ABF17C; /*0x5bc987*/
        goto LABEL_44; /*0x5bc987*/
      case 'E': /*0x5bc78d*/
      case 'e': /*0x5bc78d*/
        v7 = dword_ABF220; /*0x5bc80f*/
        if ( dword_ABF220 > 16 || dword_ABF220 >= g_InfantrySelectState ) /*0x5bc820*/
        {
          v7 = 0; /*0x5bc822*/
          dword_ABF220 = 0; /*0x5bc824*/
        }
        UpdateThemeManager(v7, 2, dword_ABF22C); /*0x5bc835*/
        goto LABEL_15; /*0x5bc835*/
      case 'I': /*0x5bc78d*/
      case 'i': /*0x5bc78d*/
        v14 = (_BYTE *)dword_ABF184; /*0x5bc9b6*/
        goto LABEL_44; /*0x5bc9bc*/
      case 'L': /*0x5bc78d*/
      case 'l': /*0x5bc78d*/
        if ( AudioSource::Get((int **)dword_ABF224) ) /*0x5bc862*/
        {
          AudioFile::Stop((_DWORD *)dword_ABF224); /*0x5bc871*/
          return 0; /*0x5bc878*/
        }
        else
        {
          v28 = dword_ABF224; /*0x5bc881*/
          v9 = aTestenvelopefs; /*0x5bc887*/
LABEL_31:
          Index = VocClass::FindIndex(v9); /*0x5bc88c*/
          PlayVocClass(Index, 0x2000, 1.0, v28); /*0x5bc898*/
          return 0; /*0x5bc89f*/
        }
      case 'M': /*0x5bc78d*/
      case 'm': /*0x5bc78d*/
        v14 = (_BYTE *)dword_ABF180; /*0x5bc9be*/
LABEL_44:
        dword_ABF23C = (int)v14; /*0x5bc98d*/
        TextBuffer::Init(v14); /*0x5bc993*/
LABEL_45:
        Text::DrawRepeated((void *)dword_ABF23C, 0, 0, 80, 25); /*0x5bc998*/
        return 0; /*0x5bc9b3*/
      case 'N': /*0x5bc78d*/
      case 'n': /*0x5bc78d*/
        dword_ABF21C = dword_ABF21C == 0; /*0x5bc968*/
        return 0; /*0x5bc974*/
      case 'O': /*0x5bc78d*/
      case 'o': /*0x5bc78d*/
        v8 = dword_ABF220; /*0x5bc837*/
        if ( dword_ABF220 > 16 || dword_ABF220 >= g_InfantrySelectState ) /*0x5bc848*/
        {
          v8 = 0; /*0x5bc84a*/
          dword_ABF220 = 0; /*0x5bc84c*/
        }
        UpdateThemeManager(v8, -1, -1); /*0x5bc857*/
        goto LABEL_15; /*0x5bc857*/
      case 'Q': /*0x5bc78d*/
      case 'q': /*0x5bc78d*/
        v5 = dword_ABF220; /*0x5bc7a8*/
        if ( dword_ABF220 > 16 || dword_ABF220 >= g_InfantrySelectState ) /*0x5bc7b9*/
        {
          v5 = 0; /*0x5bc7bb*/
          dword_ABF220 = 0; /*0x5bc7bd*/
        }
        UpdateThemeManager(v5, 1, dword_ABF22C); /*0x5bc7ce*/
        goto LABEL_15; /*0x5bc7ce*/
      case 'S': /*0x5bc78d*/
      case 's': /*0x5bc78d*/
        sub_406EE0(); /*0x5bc977*/
        return 0; /*0x5bc984*/
      case 'T': /*0x5bc78d*/
      case 't': /*0x5bc78d*/
        v28 = 0; /*0x5bc8a8*/
        v9 = aTesteffect; /*0x5bc8af*/
        goto LABEL_31; /*0x5bc8b4*/
      case 'W': /*0x5bc78d*/
      case 'w': /*0x5bc78d*/
        v6 = dword_ABF220; /*0x5bc7e9*/
        if ( dword_ABF220 > 16 || dword_ABF220 >= g_InfantrySelectState ) /*0x5bc7fa*/
        {
          v6 = 0; /*0x5bc7fc*/
          dword_ABF220 = 0; /*0x5bc7fe*/
        }
        UpdateThemeManager(v6, 0, dword_ABF22C); /*0x5bc80d*/
LABEL_15:
        ++dword_ABF220; /*0x5bc7d3*/
        return 0; /*0x5bc7e6*/
      case '[': /*0x5bc78d*/
        if ( dword_ABF228 >= 5 ) /*0x5bc8bd*/
          return 0; /*0x5bc8bd*/
        Enabled = Audio::GetEnabled(); /*0x5bc8c6*/
        v12 = AudioStream::Constructor(Enabled, 0x1388u); /*0x5bc8cd*/
        *(&dword_ABF114 + dword_ABF228) = v12; /*0x5bc8da*/
        if ( !v12 ) /*0x5bc8e1*/
          return 0; /*0x5bc8e1*/
        if ( ThreadAudioMixerMain(v12, aIntroWav, 1) ) /*0x5bc8ec*/
        {
          ++dword_ABF228; /*0x5bc8fc*/
          return 0; /*0x5bc908*/
        }
        AudioSample::Destructor(*(&dword_ABF114 + dword_ABF228)); /*0x5bc912*/
        break; /*0x5bc912*/
      case ']': /*0x5bc78d*/
        if ( dword_ABF228 <= 0 ) /*0x5bc929*/
          return 0; /*0x5bc929*/
        v13 = (_DWORD *)*(&dword_ABF110 + dword_ABF228--); /*0x5bc92b*/
        Audio::Release(v13); /*0x5bc938*/
        AudioSample::Destructor(*(&dword_ABF114 + dword_ABF228)); /*0x5bc94a*/
        return 0; /*0x5bc957*/
      default:
        return 0;
    }
    return 0; /*0x5bc912*/
  }
  if ( a2 != 273 ) /*0x5bca98*/
    return 0; /*0x5bc91f*/
  byte_ABF239 = 0; /*0x5bcaa3*/
  if ( dword_ABF240 ) /*0x5bcaac*/
  {
    byte_ABF23A = 0; /*0x5bcab1*/
    ShowWindow(dword_ABF240, 0); /*0x5bcab8*/
  }
  return 1; /*0x5bc743*/
}



// ==== 0x005BCB90  ObjectClass::method_5BCB90  this=ObjectClass  sig=csp ====
int __thiscall sub_5BCB90(UnitClass *this, int a2)
{
  int v3; // edi
  char *v4; // ebx
  _BYTE *v5; // ecx
  char *v6; // eax
  int v7; // edx

  v3 = 0; /*0x5bcb9c*/
  *((_DWORD *)this + 2502) = a2; /*0x5bcb9e*/
  *((_DWORD *)this + 2503) = 0; /*0x5bcba4*/
  *((_DWORD *)this + 2504) = 0; /*0x5bcbaa*/
  *((_DWORD *)this + 2505) = 0; /*0x5bcbb0*/
  *((_DWORD *)this + 2506) = 0; /*0x5bcbb6*/
  *((_DWORD *)this + 2507) = 80; /*0x5bcbbc*/
  *((_DWORD *)this + 2508) = 25; /*0x5bcbc6*/
  v4 = &this->ToolTipText[232]; /*0x5bcbd0*/
  do /*0x5bcbf5*/
  {
    v5 = (char *)this + v3; /*0x5bcbd6*/
    v6 = v4; /*0x5bcbd9*/
    v7 = 80; /*0x5bcbdb*/
    do /*0x5bcbec*/
    {
      *v5 = 32; /*0x5bcbe0*/
      *(_DWORD *)v6 = 0; /*0x5bcbe3*/
      v6 += 100; /*0x5bcbe5*/
      v5 += 25; /*0x5bcbe8*/
      --v7; /*0x5bcbeb*/
    }
    while ( v7 ); /*0x5bcbec*/
    ++v3; /*0x5bcbee*/
    v4 += 4; /*0x5bcbef*/
  }
  while ( v3 < 25 ); /*0x5bcbf5*/
  *((_BYTE *)this + 10036) = 1; /*0x5bcbff*/
  Text::DrawRepeated((Text *)this, 0, 0, 80, 25); /*0x5bcc06*/
  return (int)this; /*0x5bcc0d*/
}



// ==== 0x005BCC20  nullsub_174  this=-  sig=ida-proto ====
void nullsub_174()
{
  ; /*0x5bcc20*/
}



// ==== 0x005BCC30  ObjectClass::method_5BCC30  this=ObjectClass  sig=csp ====
int __thiscall sub_5BCC30(ObjectClass *this)
{
  return *((_DWORD *)this + 2502); /*0x5bcc36*/
}



// ==== 0x005BCC40  Network::validateConnection  this=Network  sig=csp ====
int __thiscall Network::validateConnection(Network *this, int a2, int a3)
{
  *((_DWORD *)this + 2503) = a2; /*0x5bcc48*/
  *((_DWORD *)this + 2504) = a3; /*0x5bcc4e*/
  return a2; /*0x5bcc54*/
}



// ==== 0x005BCC60  ObjectClass::method_5BCC60  this=ObjectClass  sig=csp ====
int __thiscall sub_5BCC60(ObjectClass *this, int a2, int a3, int a4, int a5)
{
  *((_DWORD *)this + 2505) = a2; /*0x5bcc68*/
  *((_DWORD *)this + 2506) = a3; /*0x5bcc72*/
  *((_DWORD *)this + 2507) = a4; /*0x5bcc7c*/
  *((_DWORD *)this + 2508) = a5; /*0x5bcc82*/
  return a4; /*0x5bcc88*/
}



// ==== 0x005BCC90  TextBuffer::Init  this=TextBuffer  sig=csp ====
int __thiscall TextBuffer::Init(TextBuffer *this)
{
  int v1; // edi
  TextBuffer *v2; // ebx
  TextBuffer *v3; // edx
  TextBuffer *v4; // eax
  int v5; // esi

  v1 = 0; /*0x5bcc93*/
  v2 = this + 2000; /*0x5bcc95*/
  do /*0x5bccbe*/
  {
    v3 = this + v1; /*0x5bcc9b*/
    v4 = v2; /*0x5bcc9e*/
    v5 = 80; /*0x5bcca0*/
    do /*0x5bccb5*/
    {
      *v3 = (TextBuffer)32; /*0x5bcca5*/
      *(_DWORD *)v4 = 0; /*0x5bcca8*/
      v4 += 100; /*0x5bccae*/
      v3 += 25; /*0x5bccb1*/
      --v5; /*0x5bccb4*/
    }
    while ( v5 ); /*0x5bccb5*/
    ++v1; /*0x5bccb7*/
    v2 += 4; /*0x5bccb8*/
  }
  while ( v1 < 25 ); /*0x5bccbe*/
  this->q2734 = 1; /*0x5bccc8*/
  return Text::DrawRepeated((Text *)this, 0, 0, 80, 25); /*0x5bccd4*/
}



// ==== 0x005BCCE0  ObjectClass::method_5BCCE0  this=ObjectClass  sig=csp ====
char __thiscall sub_5BCCE0(ObjectClass *this)
{
  return *((_BYTE *)this + 10036); /*0x5bcce6*/
}



// ==== 0x005BCE10  ObjectClass::method_5BCE10  this=ObjectClass  sig=csp ====
char __thiscall sub_5BCE10(ObjectClass *this, int a2)
{
  char result; // al
  int v4; // eax
  int v5; // edx
  int v6; // ebx
  int v7; // ebp
  char *v8; // edi
  int v9; // ecx
  char *v10; // ebx
  char *v11; // ecx
  int v12; // ebx
  int v13; // eax
  _DWORD *v14; // ebp
  int v15; // ebp
  char *v16; // edi
  int v17; // ebx
  ObjectClass *v18; // ecx
  int v19; // eax
  void **v20; // ebp
  char *v21; // [esp+4h] [ebp-Ch]
  _BYTE *v22; // [esp+8h] [ebp-8h]
  int v23; // [esp+Ch] [ebp-4h]
  int v24; // [esp+Ch] [ebp-4h]
  int v25; // [esp+14h] [ebp+4h]
  int v26; // [esp+14h] [ebp+4h]

  result = BYTE2(g_MissionQueueFrame.localVariables[493]); /*0x5bce10*/
  if ( BYTE2(g_MissionQueueFrame.localVariables[493]) ) /*0x5bce1d*/
  {
    v4 = *((_DWORD *)this + 2505); /*0x5bce27*/
    v5 = *((_DWORD *)this + 2506); /*0x5bce2d*/
    v6 = *((_DWORD *)this + 2508); /*0x5bce34*/
    v7 = *((_DWORD *)this + 2507); /*0x5bce3b*/
    if ( a2 <= 0 ) /*0x5bce44*/
    {
      if ( a2 < 0 ) /*0x5bcef9*/
      {
        v15 = v4 + v7; /*0x5bcefb*/
        if ( v4 < v15 ) /*0x5bceff*/
        {
          v26 = v6 + v5 - 1; /*0x5bcf08*/
          v16 = (char *)this + 20 * v4 + 5 * v4; /*0x5bcf0f*/
          v17 = 500 - (_DWORD)this; /*0x5bcf1f*/
          v18 = (ObjectClass *)((char *)this + 80 * v4 + 20 * v4 + 4 * v5 + 2000); /*0x5bcf23*/
          v24 = v15 - v4; /*0x5bcf2a*/
          do /*0x5bcf6f*/
          {
            v19 = v26; /*0x5bcf2e*/
            if ( v26 > v5 ) /*0x5bcf34*/
            {
              v20 = &this->AbstractClass + (_DWORD)&v16[v17 + v26]; /*0x5bcf3a*/
              do /*0x5bcf50*/
              {
                --v20; /*0x5bcf41*/
                v16[v19] = v16[v19 - 1]; /*0x5bcf44*/
                v20[1] = *v20; /*0x5bcf4a*/
                --v19; /*0x5bcf4d*/
              }
              while ( v19 > v5 ); /*0x5bcf50*/
              v17 = 500 - (_DWORD)this; /*0x5bcf52*/
            }
            v16[v5] = 32; /*0x5bcf5a*/
            v18->AbstractClass = 0; /*0x5bcf5e*/
            v18 = (ObjectClass *)((char *)v18 + 100); /*0x5bcf64*/
            v16 += 25; /*0x5bcf67*/
            --v24; /*0x5bcf6b*/
          }
          while ( v24 ); /*0x5bcf6f*/
        }
      }
    }
    else if ( v4 < v4 + v7 ) /*0x5bce53*/
    {
      v25 = v6 + v5 - 1; /*0x5bce5d*/
      v8 = (char *)this + 25 * v4; /*0x5bce67*/
      v9 = v5 + v6 + 25 * v4; /*0x5bce6c*/
      v10 = (char *)this + v9 - 1; /*0x5bce72*/
      v11 = (char *)this + 4 * v9 + 1996; /*0x5bce76*/
      v22 = v10; /*0x5bce7d*/
      v23 = *((_DWORD *)this + 2507); /*0x5bce97*/
      v21 = (char *)this + 80 * v4 + 20 * v4 + 4 * v5 + 2000; /*0x5bce9b*/
      v12 = v25; /*0x5bce9f*/
      do /*0x5bcef5*/
      {
        v13 = v5; /*0x5bcea5*/
        if ( v5 < v12 ) /*0x5bcea7*/
        {
          v14 = v21; /*0x5bcea9*/
          do /*0x5bcec4*/
          {
            ++v14; /*0x5bceb1*/
            v8[v13] = v8[v13 + 1]; /*0x5bceb4*/
            *(v14 - 1) = *v14; /*0x5bceba*/
            v12 = v25; /*0x5bcebd*/
            ++v13; /*0x5bcec1*/
          }
          while ( v13 < v25 ); /*0x5bcec4*/
        }
        v11 += 100; /*0x5bced1*/
        *v22 = 32; /*0x5bced4*/
        v22 += 25; /*0x5bceda*/
        *((_DWORD *)v11 - 25) = 0; /*0x5bcee2*/
        v8 += 25; /*0x5bcee9*/
        v21 += 100; /*0x5bceed*/
        --v23; /*0x5bcef1*/
      }
      while ( v23 ); /*0x5bcef5*/
    }
    return Text::DrawRepeated((Text *)this, 0, 0, 80, 25); /*0x5bcf7b*/
  }
  return result; /*0x5bcf83*/
}



// ==== 0x005BD0D0  Debug::ScrollText  this=ObjectClass  sig=csp ====
char __thiscall Debug::ScrollText(int this, const char *a2)
{
  char result; // al
  int v4; // eax
  int v5; // ebp
  int v6; // edx
  int v7; // edi
  int v8; // ebx
  const char *v9; // eax
  int v10; // eax
  _DWORD *v11; // [esp+4h] [ebp-10h]
  char *v12; // [esp+8h] [ebp-Ch]
  int v13; // [esp+Ch] [ebp-8h]
  const char *i; // [esp+10h] [ebp-4h]
  char v15; // [esp+18h] [ebp+4h]

  result = BYTE2(g_MissionQueueFrame.localVariables[493]); /*0x5bd0d0*/
  if ( BYTE2(g_MissionQueueFrame.localVariables[493]) ) /*0x5bd0dd*/
  {
    v4 = *(_DWORD *)(this + 10020); /*0x5bd0ef*/
    v5 = *(_DWORD *)(this + 10012) + v4; /*0x5bd108*/
    v13 = *(_DWORD *)(this + 10016) + *(_DWORD *)(this + 10024); /*0x5bd10e*/
    v6 = v4 + *(_DWORD *)(this + 10028); /*0x5bd112*/
    *(_BYTE *)(this + 10036) = 0; /*0x5bd119*/
    v7 = v5 + strlen(a2); /*0x5bd127*/
    if ( v7 > v6 ) /*0x5bd12b*/
      v7 = v6; /*0x5bd12d*/
    v8 = v5; /*0x5bd131*/
    if ( v5 < v7 ) /*0x5bd133*/
    {
      v12 = (char *)(this + v13 + 20 * v5 + 5 * v5); /*0x5bd148*/
      v9 = &a2[-v5]; /*0x5bd15c*/
      v11 = (_DWORD *)(this + 4 * (v13 + 4 * (5 * v5 + 100) + 5 * v5 + 100)); /*0x5bd15e*/
      for ( i = &a2[-v5]; ; v9 = i ) /*0x5bd162*/
      {
        v15 = v9[v8]; /*0x5bd16f*/
        *v12 = Debug_Helper(v15); /*0x5bd187*/
        *v11 = *(_DWORD *)(this + 10000); /*0x5bd18f*/
        if ( v15 == 10 ) /*0x5bd197*/
        {
          v10 = *(_DWORD *)(this + 10016); /*0x5bd199*/
          *(_DWORD *)(this + 10012) = 0; /*0x5bd19f*/
          *(_DWORD *)(this + 10016) = v10 + 1; /*0x5bd1aa*/
        }
        else
        {
          ++*(_DWORD *)(this + 10012); /*0x5bd1b2*/
        }
        ++v8; /*0x5bd1c0*/
        v11 += 25; /*0x5bd1c9*/
        v12 += 25; /*0x5bd1cd*/
        if ( v8 >= v7 ) /*0x5bd1d1*/
          break; /*0x5bd1d1*/
      }
    }
    return Text::DrawRepeated((Text *)this, v5, v13, v7 - v5, 1); /*0x5bd1e0*/
  }
  return result; /*0x5bd1e8*/
}



// ==== 0x005BD1F0  Debug::Printf  this=CellStruct  sig=csp ====
char Debug_Printf(int a1, char *Format, ...)
{
  char result; // al
  char Buffer[256]; // [esp+0h] [ebp-100h] BYREF
  va_list va; // [esp+10Ch] [ebp+Ch] BYREF

  va_start(va, Format);
  result = byte_ABF23A; /*0x5bd1f0*/
  if ( byte_ABF23A ) /*0x5bd1fd*/
  {
    vsprintf(Buffer, Format, va); /*0x5bd214*/
    Buffer[255] = 0; /*0x5bd227*/
    return Debug::ScrollText(Buffer); /*0x5bd230*/
  }
  return result; /*0x5bd235*/
}



// ==== 0x005BD240  sub_5BD240  this=-  sig=ida-proto ====
char __cdecl sub_5BD240(int a1, size_t BufferCount, wchar_t Format)
{
  char result; // al
  char v4[256]; // [esp+0h] [ebp-300h] BYREF
  wchar_t Buffer[256]; // [esp+100h] [ebp-200h] BYREF

  result = byte_ABF23A; /*0x5bd240*/
  if ( byte_ABF23A ) /*0x5bd24d*/
  {
    vswprintf(Buffer, BufferCount, &Format, *(va_list *)v4); /*0x5bd267*/
    sprintf(v4, "%S", Buffer); /*0x5bd27e*/
    return Debug::ScrollText(a1, v4); /*0x5bd292*/
  }
  return result; /*0x5bd297*/
}



// ==== 0x005BD2E0  ObjectClass::method_5BD2E0  this=ObjectClass  sig=csp ====
char __thiscall sub_5BD2E0(ObjectClass *this, const wchar_t *a2, int a3, int a4, int a5)
{
  char result; // al
  char Buffer[1024]; // [esp+4h] [ebp-400h] BYREF

  result = BYTE2(g_MissionQueueFrame.localVariables[493]); /*0x5bd2e0*/
  if ( BYTE2(g_MissionQueueFrame.localVariables[493]) ) /*0x5bd2f0*/
  {
    *((_DWORD *)this + 2503) = a3; /*0x5bd300*/
    *((_DWORD *)this + 2504) = a4; /*0x5bd306*/
    if ( BYTE2(g_MissionQueueFrame.localVariables[493]) ) /*0x5bd313*/
      *((_DWORD *)this + 2500) = a5; /*0x5bd31c*/
    sprintf(Buffer, (const char *const)&stru_82BA00.NumberImpassableRows, a2); /*0x5bd334*/
    return Debug::ScrollText((int)this, Buffer); /*0x5bd343*/
  }
  return result; /*0x5bd348*/
}



// ==== 0x005BD360  Debug_Helper  this=ObjectClass  sig=csp ====
char __stdcall sub_5BD360(char a1)
{
  char result; // al

  result = a1; /*0x5bd360*/
  switch ( a1 ) /*0x5bd366*/
  {
    case 10: /*0x5bd366*/
      return 32; /*0x5bd368*/
    case -77: /*0x5bd366*/
      return 124; /*0x5bd371*/
    case -60: /*0x5bd366*/
      return 45; /*0x5bd37a*/
    case -51: /*0x5bd366*/
      return 61; /*0x5bd383*/
    case -38: /*0x5bd366*/
    case -62: /*0x5bd366*/
    case -65: /*0x5bd366*/
    case -58: /*0x5bd366*/
    case -61: /*0x5bd366*/
    case -47: /*0x5bd366*/
    case -59: /*0x5bd366*/
    case -40: /*0x5bd366*/
    case -75: /*0x5bd366*/
    case -64: /*0x5bd366*/
    case -63: /*0x5bd366*/
    case -39: /*0x5bd366*/
    case -43: /*0x5bd366*/
    case -76: /*0x5bd366*/
      return 43; /*0x5bd3c0*/
  }
  return result; /*0x5bd36a*/
}



// ==== 0x005BD3D0  Text::DrawCharAtGrid  this=Text  sig=csp ====
BOOL __thiscall Text::DrawCharAtGrid(Text *this, HDC hdc, int String, int a4)
{
  int v4; // ebx
  int v5; // esi
  int v7; // ebp

  v4 = a4; /*0x5bd3d1*/
  v5 = String; /*0x5bd3d7*/
  v7 = *((_DWORD *)this + 20 * String + 5 * String + a4 + 500); /*0x5bd3e7*/
  if ( v7 != *((_DWORD *)this + 2501) ) /*0x5bd3f2*/
  {
    if ( v7 == 1 ) /*0x5bd3f7*/
    {
      SetBkColor(hdc, g_MissionQueueFrame.localVariables[419]); /*0x5bd405*/
      SetTextColor(hdc, g_MissionQueueFrame.localVariables[425]); /*0x5bd417*/
    }
    else
    {
      SetBkColor(hdc, g_MissionQueueFrame.localVariables[425]); /*0x5bd424*/
      SetTextColor(hdc, g_MissionQueueFrame.localVariables[419]); /*0x5bd436*/
    }
    *((_DWORD *)this + 2501) = v7; /*0x5bd43c*/
  }
  LOBYTE(String) = *((_BYTE *)&this->Text_field_00 + 20 * v5 + 5 * v5 + v4); /*0x5bd45a*/
  return TextOutA( /*0x5bd484*/
           hdc,
           v5 * g_MissionQueueFrame.localVariables[471] + 10,
           v4 * (g_MissionQueueFrame.localVariables[469] + g_MissionQueueFrame.localVariables[465]) + 10,
           (LPCSTR)&String,
           1);
}



// ==== 0x005BD490  Text::DrawRepeated  this=Text  sig=csp ====
int __thiscall Text::DrawRepeated(Text *this, int String, int a3, int a4, int a5)
{
  int result; // eax
  HDC DC; // edi
  int v7; // ebx
  int v8; // eax
  bool v9; // of
  int v10; // esi
  int v11; // ebp
  HGDIOBJ h; // [esp+8h] [ebp-4h]
  int v14; // [esp+14h] [ebp+8h]

  LOBYTE(result) = BYTE2(g_MissionQueueFrame.localVariables[493]); /*0x5bd493*/
  if ( BYTE2(g_MissionQueueFrame.localVariables[493]) ) /*0x5bd49f*/
  {
    if ( this == (Text *)g_MissionQueueFrame.localVariables[494] ) /*0x5bd4ab*/
    {
      DC = GetDC((HWND)g_MissionQueueFrame.localVariables[495]); /*0x5bd4bd*/
      SetBkMode(DC, 2); /*0x5bd4c2*/
      SetBkColor(DC, g_MissionQueueFrame.localVariables[425]); /*0x5bd4d0*/
      result = SetTextColor(DC, g_MissionQueueFrame.localVariables[419]); /*0x5bd4de*/
      if ( DC ) /*0x5bd4e6*/
      {
        v7 = a3; /*0x5bd4f6*/
        h = SelectObject(DC, (HGDIOBJ)g_MissionQueueFrame.localVariables[496]); /*0x5bd4fe*/
        v8 = a3 + a5; /*0x5bd502*/
        v9 = __OFSUB__(a3, a3 + a5); /*0x5bd505*/
        v14 = a3 + a5; /*0x5bd507*/
        if ( -a5 < 0 != v9 ) /*0x5bd50b*/
        {
          v10 = String; /*0x5bd513*/
          v11 = String + a4; /*0x5bd517*/
          do /*0x5bd53a*/
          {
            if ( v10 < v11 ) /*0x5bd51c*/
            {
              do /*0x5bd52d*/
                Text::DrawCharAtGrid(this, DC, v10++, v7); /*0x5bd525*/
              while ( v10 < v11 ); /*0x5bd52d*/
              v10 = String; /*0x5bd52f*/
              v8 = v14; /*0x5bd533*/
            }
            ++v7; /*0x5bd537*/
          }
          while ( v7 < v8 ); /*0x5bd53a*/
        }
        SelectObject(DC, h); /*0x5bd544*/
        return ReleaseDC((HWND)g_MissionQueueFrame.localVariables[495], DC); /*0x5bd552*/
      }
    }
  }
  return result; /*0x5bd559*/
}



// ==== 0x005BD560  ObjectClass::method_5BD560  this=ObjectClass  sig=csp ====
_DWORD *__thiscall sub_5BD560(ObjectClass *this)
{
  LOBYTE(this->AbstractClass) = 0; /*0x5bd564*/
  this->? = 0; /*0x5bd566*/
  this->? = 0; /*0x5bd569*/
  this->? = 0; /*0x5bd56c*/
  return &this->AbstractClass; /*0x5bd56f*/
}



// ==== 0x005BD570  File::LoadFileHVA  this=File  sig=csp ====
_DWORD *__thiscall File::LoadFileHVA(File *this, int a2)
{
  this->__pad_0[0] = 0; /*0x5bd575*/
  *(_DWORD *)&this->File_field_0x2[2] = 0; /*0x5bd577*/
  *(_DWORD *)&this->__pad_6[2] = 0; /*0x5bd57a*/
  *(_DWORD *)&this->__pad_6[6] = 0; /*0x5bd57d*/
  if ( !File::ParseFileHVA((int)this, a2) ) /*0x5bd585*/
    this->__pad_0[0] = 1; /*0x5bd58e*/
  return this->__pad_0; /*0x5bd593*/
}



// ==== 0x005BD5A0  String::Release  this=String  sig=csp ====
int __thiscall String::Release(String *this)
{
  int result; // eax

  result = this->u32_C; /*0x5bd5a3*/
  if ( result ) /*0x5bd5a8*/
    __3_YAXPAX_Z(*((void **)this + 3)); /*0x5bd5ab*/
  this->u32_C = 0; /*0x5bd5b3*/
  return result; /*0x5bd5ba*/
}



// ==== 0x005BD5C0  File::ParseFileHVA  this=File  sig=csp ====
int __thiscall HVA_ParseFile(int this, int a2)
{
  int v3; // esi
  int result; // eax
  void *v5; // eax
  int v6; // edx
  void *v7; // eax
  unsigned int v8; // ebp
  const void *v9; // eax
  void *v10; // edi
  int v11; // [esp+1Ch] [ebp-7Ch]
  _BYTE v12[16]; // [esp+20h] [ebp-78h] BYREF
  int v13; // [esp+30h] [ebp-68h]
  int v14; // [esp+34h] [ebp-64h]
  _BYTE v15[48]; // [esp+38h] [ebp-60h] BYREF

  if ( *(_DWORD *)(this + 12) ) /*0x5bd5c9*/
    __3_YAXPAX_Z(*(void **)(this + 12)); /*0x5bd5d3*/
  v3 = a2; /*0x5bd5db*/
  *(_DWORD *)(this + 12) = 0; /*0x5bd5e2*/
  result = (*(int (__thiscall **)(int, int))(*(_DWORD *)a2 + 28))(a2, 1); /*0x5bd5eb*/
  if ( result ) /*0x5bd5f0*/
  {
    (*(void (__thiscall **)(int, _BYTE *, int))(*(_DWORD *)a2 + 36))(a2, v12, 24); /*0x5bd607*/
    v5 = *(void **)(this + 12); /*0x5bd60a*/
    v6 = v13; /*0x5bd611*/
    *(_DWORD *)(this + 4) = v14; /*0x5bd617*/
    *(_DWORD *)(this + 8) = v6; /*0x5bd61a*/
    if ( v5 ) /*0x5bd61d*/
      __3_YAXPAX_Z(v5); /*0x5bd620*/
    v7 = __2_YAPAXI_Z(48 * *(_DWORD *)(this + 4) * *(_DWORD *)(this + 8)); /*0x5bd636*/
    if ( !v7 ) /*0x5bd640*/
      v7 = 0; /*0x5bd649*/
    *(_DWORD *)(this + 12) = v7; /*0x5bd64d*/
    if ( v7 ) /*0x5bd650*/
    {
      (*(void (__thiscall **)(int, int, int))(*(_DWORD *)a2 + 40))(a2, 16 * *(_DWORD *)(this + 4), 1); /*0x5bd675*/
      v11 = 0; /*0x5bd67b*/
      if ( *(_DWORD *)(this + 8) ) /*0x5bd678*/
      {
        while ( 1 ) /*0x5bd686*/
        {
          v8 = 0; /*0x5bd686*/
          if ( *(_DWORD *)(this + 4) ) /*0x5bd683*/
            break; /*0x5bd683*/
LABEL_14:
          if ( (unsigned int)++v11 >= *(_DWORD *)(this + 8) ) /*0x5bd6e8*/
            goto LABEL_15; /*0x5bd6e8*/
        }
        while ( (*(int (__thiscall **)(int, _BYTE *, int))(*(_DWORD *)v3 + 36))(v3, v15, 48) == 48 ) /*0x5bd69d*/
        {
          v9 = (const void *)Matrix::Copy12Float(v15); /*0x5bd6a8*/
          v10 = (void *)(*(_DWORD *)(this + 12) + 48 * (v8 + v11 * *(_DWORD *)(this + 4))); /*0x5bd6c7*/
          ++v8; /*0x5bd6c9*/
          qmemcpy(v10, v9, 0x30u); /*0x5bd6ca*/
          v3 = a2; /*0x5bd6cf*/
          if ( v8 >= *(_DWORD *)(this + 4) ) /*0x5bd6d8*/
            goto LABEL_14; /*0x5bd6d8*/
        }
        (*(void (__thiscall **)(int))(*(_DWORD *)v3 + 52))(v3); /*0x5bd704*/
        if ( *(_DWORD *)(this + 12) ) /*0x5bd707*/
          __3_YAXPAX_Z(*(void **)(this + 12)); /*0x5bd70f*/
        *(_DWORD *)(this + 12) = 0; /*0x5bd719*/
        return 0; /*0x5bd721*/
      }
      else
      {
LABEL_15:
        (*(void (__thiscall **)(int))(*(_DWORD *)v3 + 52))(v3); /*0x5bd6ea*/
        return 1; /*0x5bd6f4*/
      }
    }
    else
    {
      *(_DWORD *)(this + 12) = 0; /*0x5bd652*/
      (*(void (__thiscall **)(int))(*(_DWORD *)a2 + 52))(a2); /*0x5bd659*/
      return 0; /*0x5bd65f*/
    }
  }
  return result; /*0x5bd5f2*/
}



// ==== 0x005BD730  Matrix::Scale  this=Matrix  sig=csp ====
int __thiscall Matrix::Scale(Matrix *this, float a2)
{
  int result; // eax
  unsigned int i; // esi
  unsigned int Matrix_field_0x04; // eax
  unsigned int j; // edx
  int v6; // eax
  int v7; // eax

  result = *((_DWORD *)this + 2); /*0x5bd730*/
  for ( i = 0; i < result; ++i ) /*0x5bd738*/
  {
    Matrix_field_0x04 = this->Matrix_field_0x04; /*0x5bd73b*/
    for ( j = 0; j < Matrix_field_0x04; Matrix_field_0x04 = this->Matrix_field_0x04 ) /*0x5bd742*/
    {
      *(float *)(48 * (j + i * Matrix_field_0x04) + *((_DWORD *)this + 3) + 12) = a2 /*0x5bd75e*/
                                                                                * *(float *)(48
                                                                                           * (j + i * Matrix_field_0x04)
                                                                                           + *((_DWORD *)this + 3)
                                                                                           + 12);
      v6 = 48 * (j + this->Matrix_field_0x04 * i); /*0x5bd772*/
      *(float *)(v6 + *((_DWORD *)this + 3) + 28) = a2 * *(float *)(v6 + *((_DWORD *)this + 3) + 28); /*0x5bd77d*/
      v7 = 48 * (j + this->Matrix_field_0x04 * i); /*0x5bd791*/
      ++j; /*0x5bd794*/
      *(float *)(v7 + *((_DWORD *)this + 3) + 44) = a2 * *(float *)(v7 + *((_DWORD *)this + 3) + 44); /*0x5bd79d*/
    }
    result = *((_DWORD *)this + 2); /*0x5bd7a6*/
  }
  return result; /*0x5bd7af*/
}



// ==== 0x005BD7E0  sub_5BD7E0  this=-  sig=ida-proto ====
void sub_5BD7E0()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x5bd7ec*/
  dbl_ABF270 = Math::Sqrt(v0 + v0); /*0x5bd7fe*/
}



// ==== 0x005BD810  sub_5BD810  this=-  sig=ida-proto ====
void sub_5BD810()
{
  dbl_ABF2D0 = dbl_ABF270 / 60.0; /*0x5bd81c*/
}



// ==== 0x005BD830  sub_5BD830  this=-  sig=ida-proto ====
void sub_5BD830()
{
  dbl_ABF2B8 = 1.0 / dbl_ABF2D0; /*0x5bd83c*/
}



// ==== 0x005BD850  sub_5BD850  this=-  sig=ida-proto ====
void sub_5BD850()
{
  dbl_ABF2B0 = 0.0174532925199433 * 45.0; /*0x5bd85c*/
}



// ==== 0x005BD870  sub_5BD870  this=-  sig=ida-proto ====
void sub_5BD870()
{
  dbl_ABF278 = 0.0174532925199433 * 60.0; /*0x5bd87c*/
}



// ==== 0x005BD890  sub_5BD890  this=-  sig=ida-proto ====
void sub_5BD890()
{
  dbl_ABF248 = 0.0174532925199433 * 90.0; /*0x5bd89c*/
}



// ==== 0x005BD8B0  sub_5BD8B0  this=-  sig=ida-proto ====
__int64 sub_5BD8B0()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_ABF248 - dbl_ABF278); /*0x5bd8c2*/
  result = Math::RoundToInt(v0 * dbl_ABF270 * 0.5); /*0x5bd8d6*/
  dword_ABF2D8 = result; /*0x5bd8db*/
  return result; /*0x5bd8e0*/
}



// ==== 0x005BD8F0  sub_5BD8F0  this=-  sig=ida-proto ====
void sub_5BD8F0()
{
  dbl_ABF280 = Math::ArcTan((double)dword_ABF2D8 * 0.00390625); /*0x5bd907*/
}



// ==== 0x005BD920  sub_5BD920  this=-  sig=ida-proto ====
void sub_5BD920()
{
  dbl_ABF298 = Math::ArcTan((double)(2 * dword_ABF2D8) / dbl_ABF270); /*0x5bd942*/
}



// ==== 0x005BD950  sub_5BD950  this=-  sig=ida-proto ====
__int64 sub_5BD950()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_ABF2D8) + 0.5); /*0x5bd96b*/
  dword_ABF2CC = result; /*0x5bd970*/
  return result; /*0x5bd976*/
}



// ==== 0x005BD980  sub_5BD980  this=-  sig=ida-proto ====
int sub_5BD980()
{
  word_ABF268 = 0; /*0x5bd982*/
  word_ABF26A = 0; /*0x5bd988*/
  return 0; /*0x5bd98e*/
}



// ==== 0x005BD990  sub_5BD990  this=-  sig=ida-proto ====
int sub_5BD990()
{
  dword_ABF288 = 0; /*0x5bd992*/
  dword_ABF28C = 0; /*0x5bd997*/
  dword_ABF290 = 0; /*0x5bd99c*/
  return 0; /*0x5bd9a1*/
}



// ==== 0x005BD9B0  sub_5BD9B0  this=-  sig=ida-proto ====
int sub_5BD9B0()
{
  dword_ABF2C8 = 0; /*0x5bd9b5*/
  dword_ABF2C0 = 128; /*0x5bd9bf*/
  dword_ABF2C4 = 128; /*0x5bd9c4*/
  return 128; /*0x5bd9c9*/
}



// ==== 0x005BD9D0  sub_5BD9D0  this=-  sig=ida-proto ====
int sub_5BD9D0()
{
  dword_ABF258 = 0; /*0x5bd9d2*/
  dword_ABF25C = 0; /*0x5bd9d7*/
  dword_ABF260 = 0; /*0x5bd9dc*/
  dword_ABF264 = 0; /*0x5bd9e1*/
  return 0; /*0x5bd9e6*/
}



// ==== 0x005BD9F0  sub_5BD9F0  this=-  sig=ida-proto ====
int sub_5BD9F0()
{
  dword_ABF2A0 = Timer::GetTicks(); /*0x5bd9ff*/
  dword_ABF2A8 = 0; /*0x5bda04*/
  return atexit(sub_5BDA20); /*0x5bda14*/
}



// ==== 0x005BDA20  sub_5BDA20  this=-  sig=ida-proto ====
void __cdecl sub_5BDA20()
{
  if ( (byte_ABF250 & 1) == 0 ) /*0x5bda2a*/
    byte_ABF250 |= 1u; /*0x5bda2e*/
}



// ==== 0x005BDA40  MouseClass::method_5BDA40  this=MouseClass  sig=csp ====
_BYTE *__thiscall sub_5BDA40(MouseClass *this)
{
  SmallFunc_692290((int)this); /*0x5bda43*/
  this->MouseClass_field_0x0 = &MouseClass::`vftable'; /*0x5bda4a*/
  this->u32_555C = 0; /*0x5bda50*/
  this->q1558 = 0; /*0x5bda56*/
  this->u32_5564 = 0; /*0x5bda5c*/
  this->u32_5568 = 0; /*0x5bda62*/
  this->u32_5518 = &MouseClass::`vftable'; /*0x5bda68*/
  return this; /*0x5bda74*/
}



// ==== 0x005BDA80  MouseClass::SetAndCall  this=MouseClass  sig=csp ====
int __thiscall Mission::SetAndCall(MouseClass *this, int a2, int a3)
{
  int (__stdcall **MouseClass_field_0x0)(int, int); // edx

  MouseClass_field_0x0 = (int (__stdcall **)(int, int))this->MouseClass_field_0x0; /*0x5bda84*/
  this->u32_5564 = a2; /*0x5bda8d*/
  return MouseClass_field_0x0[19](a2, a3); /*0x5bda96*/
}



// ==== 0x005BDAA0  MouseClass::GetPosition  this=MouseClass  sig=csp ====
int __thiscall MouseClass::GetPosition(MouseClass *this)
{
  return (*((int (__thiscall **)(MouseClass *, _DWORD, _DWORD))this->MouseClass_field_0x0 + 19))( /*0x5bdaae*/
           this,
           this->u32_5564,
           0);
}



// ==== 0x005BDAB0  MouseClass::SetPosition  this=MouseClass  sig=csp ====
char __thiscall MouseClass::SetPosition(MouseClass *this, char a2)
{
  char result; // al
  int v3; // eax
  int v4; // ebx
  int v5; // edi
  int v6; // esi
  int v7; // ebp
  _DWORD v8[2]; // [esp+4h] [ebp-8h] BYREF
  int v9; // [esp+10h] [ebp+4h]

  result = this->u32_555C; /*0x5bdab7*/
  if ( result != a2 ) /*0x5bdac3*/
  {
    v3 = this->q1558; /*0x5bdac9*/
    this->u32_555C = a2; /*0x5bdacf*/
    if ( !a2 || *(_DWORD *)&stru_82BA00.__pad_1624[28 * v3 + 16] == -1 ) /*0x5bdaf2*/
      v9 = *(_DWORD *)&stru_82BA00.__pad_1624[28 * v3 + 4]; /*0x5bdafd*/
    else
      v9 = *(_DWORD *)&stru_82BA00.__pad_1624[28 * v3 + 16]; /*0x5bdaf4*/
    v4 = *(_DWORD *)&stru_82BA00.__pad_1624[28 * v3 + 24]; /*0x5bdb08*/
    v5 = 0; /*0x5bdb0b*/
    v6 = 0; /*0x5bdb0d*/
    if ( v4 == 12345 ) /*0x5bdb15*/
      v5 = *(__int16 *)(g_MissionQueueFrame.localVariables[516] + 2) / 2; /*0x5bdb20*/
    if ( v4 == 54321 ) /*0x5bdb29*/
      v5 = *(__int16 *)(g_MissionQueueFrame.localVariables[516] + 2); /*0x5bdb2b*/
    v7 = *(_DWORD *)&stru_82BA00.__pad_1624[28 * v3 + 28]; /*0x5bdb2f*/
    if ( v7 == 12345 ) /*0x5bdb38*/
      v6 = *(__int16 *)(g_MissionQueueFrame.localVariables[516] + 4) / 2; /*0x5bdb43*/
    if ( v7 == 54321 ) /*0x5bdb4b*/
      v6 = *(__int16 *)(g_MissionQueueFrame.localVariables[516] + 4); /*0x5bdb4d*/
    v8[1] = v6; /*0x5bdb55*/
    v8[0] = v5; /*0x5bdb62*/
    return (*(int (__thiscall **)(void *, _DWORD *, int, int))(*(_DWORD *)stru_887598.lineTrailer + 4))( /*0x5bdb79*/
             stru_887598.lineTrailer,
             v8,
             g_MissionQueueFrame.localVariables[516],
             v9 + this->u32_5568);
  }
  return result; /*0x5bdb7f*/
}



// ==== 0x005BDB90  System_Handle  this=-  sig=csp ====
int __stdcall sub_5BDB90(int a1, char a2)
{
  int result; // eax

  if ( !a2 ) /*0x5bdbaa*/
    return dword_82D028[7 * a1]; /*0x5bdbaa*/
  result = dword_82D034[7 * a1]; /*0x5bdbac*/
  if ( result == -1 ) /*0x5bdbb2*/
    return dword_82D028[7 * a1]; /*0x5bdbb4*/
  return result; /*0x5bdbb6*/
}



// ==== 0x005BDC00  sub_5BDC00  this=-  sig=csp ====
int *__stdcall sub_5BDC00(int *a1, int a2)
{
  int v2; // ebx
  int v3; // edi
  int v4; // ecx
  int v5; // esi

  v2 = 0; /*0x5bdc17*/
  v3 = 0; /*0x5bdc19*/
  v4 = dword_82D03C[7 * a2]; /*0x5bdc22*/
  if ( v4 == 12345 ) /*0x5bdc2f*/
    v2 = *((__int16 *)dword_ABF294 + 1) / 2; /*0x5bdc3a*/
  if ( v4 == 54321 ) /*0x5bdc42*/
    v2 = *((__int16 *)dword_ABF294 + 1); /*0x5bdc44*/
  v5 = unk_82D040[7 * a2]; /*0x5bdc48*/
  if ( v5 == 12345 ) /*0x5bdc51*/
    v3 = *((__int16 *)dword_ABF294 + 2) / 2; /*0x5bdc5c*/
  if ( v5 == 54321 ) /*0x5bdc64*/
    v3 = *((__int16 *)dword_ABF294 + 2); /*0x5bdc66*/
  *a1 = v2; /*0x5bdc6e*/
  a1[1] = v3; /*0x5bdc70*/
  return a1; /*0x5bdc73*/
}



// ==== 0x005BDC80  MouseClass::SetCursor  this=MouseClass  sig=csp ====
int __thiscall Mouse::SetCursor(int this, int a2, char a3)
{
  int result; // eax
  char v5; // bl
  int v6; // edi
  int Ticks; // eax
  int v8; // ecx
  int v9; // eax
  int v10; // ebx
  int v11; // edi
  int v12; // esi
  int v13; // [esp+10h] [ebp-Ch] BYREF
  int v14; // [esp+14h] [ebp-8h]

  result = a2; /*0x5bdc80*/
  if ( dword_82D034[7 * a2] == -1 ) /*0x5bdca6*/
  {
    v5 = 0; /*0x5bdca8*/
    a3 = 0; /*0x5bdcaa*/
  }
  else
  {
    v5 = a3; /*0x5bdcb0*/
  }
  if ( byte_ABF2DD && (!dword_ABF294 || a2 == *(_DWORD *)(this + 21856) && v5 == *(_BYTE *)(this + 21852)) ) /*0x5bdcd6*/
  {
    LOBYTE(result) = 0; /*0x5bdcda*/
  }
  else
  {
    byte_ABF2DD = 1; /*0x5bdce4*/
    v6 = dword_82D030[7 * a2]; /*0x5bdceb*/
    Ticks = Timer::GetTicks(); /*0x5bdcf2*/
    v8 = 0; /*0x5bdcfb*/
    dword_ABF2A0 = Ticks; /*0x5bdcfd*/
    dword_ABF2A4 = v14; /*0x5bdd02*/
    dword_ABF2A8 = v6; /*0x5bdd08*/
    *(_DWORD *)(this + 21864) = 0; /*0x5bdd0e*/
    if ( !v5 || (v9 = dword_82D034[7 * a2], v9 == -1) ) /*0x5bdd1e*/
      v9 = dword_82D028[7 * a2]; /*0x5bdd20*/
    v10 = dword_82D03C[7 * a2]; /*0x5bdd22*/
    v11 = 0; /*0x5bdd25*/
    if ( v10 == 12345 ) /*0x5bdd31*/
      v11 = *((__int16 *)dword_ABF294 + 1) / 2; /*0x5bdd42*/
    if ( v10 == 54321 ) /*0x5bdd50*/
      v11 = *((__int16 *)dword_ABF294 + 1); /*0x5bdd52*/
    v12 = unk_82D040[7 * a2]; /*0x5bdd56*/
    if ( v12 == 12345 ) /*0x5bdd5f*/
      v8 = *((__int16 *)dword_ABF294 + 2) / 2; /*0x5bdd6a*/
    if ( v12 == 54321 ) /*0x5bdd72*/
      v8 = *((__int16 *)dword_ABF294 + 2); /*0x5bdd74*/
    v14 = v8; /*0x5bdd7c*/
    v13 = v11; /*0x5bdd87*/
    (*(void (__thiscall **)(int, int *, void *, int))(*(_DWORD *)dword_887640 + 4))( /*0x5bdd93*/
      dword_887640,
      &v13,
      dword_ABF294,
      v9);
    result = a2; /*0x5bdd96*/
    *(_DWORD *)(this + 21856) = a2; /*0x5bdd9f*/
    *(_BYTE *)(this + 21852) = a3; /*0x5bdda5*/
    LOBYTE(result) = 1; /*0x5bddad*/
  }
  return result; /*0x5bdcd8*/
}



// ==== 0x005BDDC0  MouseClass::Reset  this=MouseClass  sig=csp ====
int __thiscall Actions::Reset(MouseClass *this, int *a2, _DWORD *a3)
{
  int v4; // ecx
  _DWORD *v5; // ebx
  int v6; // edi
  int v7; // eax
  char v8; // cl
  int v9; // eax
  int v10; // edx
  int v11; // edi
  int v12; // ebp
  int v13; // ebx
  int v14; // edi
  int v15; // ecx
  int v16; // eax
  int v18; // [esp+Ch] [ebp-10h]
  int v19; // [esp+10h] [ebp-Ch] BYREF
  int v20; // [esp+14h] [ebp-8h]

  v4 = 7 * this->q1558; /*0x5bddd5*/
  v5 = (_DWORD *)(4 * v4 + 8572968); /*0x5bdde0*/
  if ( !*(_DWORD *)&stru_82BA00.__pad_1624[4 * v4 + 12] ) /*0x5bdde7*/
    return ScrollClass::Scroll((ScrollClass *)this, a2, a3); /*0x5bdde7*/
  v6 = g_MissionQueueFrame.localVariables[521]; /*0x5bddf2*/
  if ( g_MissionQueueFrame.localVariables[519] == -1 ) /*0x5bddfb*/
    goto LABEL_5; /*0x5bddfb*/
  v7 = Timer::GetTicks() - g_MissionQueueFrame.localVariables[519]; /*0x5bde07*/
  if ( v7 < v6 ) /*0x5bde0f*/
  {
    v6 -= v7; /*0x5bde11*/
LABEL_5:
    if ( v6 ) /*0x5bde15*/
      return ScrollClass::Scroll((ScrollClass *)this, a2, a3); /*0x5bde15*/
  }
  v8 = this->u32_555C; /*0x5bde1b*/
  v9 = this->u32_5568 + 1; /*0x5bde28*/
  this->u32_5568 = v9; /*0x5bde2a*/
  if ( v8 ) /*0x5bde33*/
    v10 = v9 % v5[4]; /*0x5bde35*/
  else
    v10 = v9 % v5[1]; /*0x5bde3a*/
  this->u32_5568 = v10; /*0x5bde3d*/
  v11 = v5[2]; /*0x5bde43*/
  g_MissionQueueFrame.localVariables[519] = Timer::GetTicks(); /*0x5bde53*/
  g_MissionQueueFrame.localVariables[520] = v20; /*0x5bde58*/
  g_MissionQueueFrame.localVariables[521] = v11; /*0x5bde5e*/
  if ( !this->u32_555C || *(_DWORD *)&stru_82BA00.__pad_1624[28 * this->q1558 + 16] == -1 ) /*0x5bde8a*/
    v18 = *(_DWORD *)&stru_82BA00.__pad_1624[28 * this->q1558 + 4]; /*0x5bde94*/
  else
    v18 = *(_DWORD *)&stru_82BA00.__pad_1624[28 * this->q1558 + 16]; /*0x5bde8c*/
  v12 = *(_DWORD *)&stru_82BA00.__pad_1624[28 * this->q1558 + 24]; /*0x5bde99*/
  v13 = 0; /*0x5bde9c*/
  v14 = 0; /*0x5bde9e*/
  if ( v12 == 12345 ) /*0x5bdea6*/
    v13 = *(__int16 *)(g_MissionQueueFrame.localVariables[516] + 2) / 2; /*0x5bdeb6*/
  if ( v12 == 54321 ) /*0x5bdec4*/
    v13 = *(__int16 *)(g_MissionQueueFrame.localVariables[516] + 2); /*0x5bdec6*/
  v15 = *(_DWORD *)&stru_82BA00.__pad_1624[28 * this->q1558 + 28]; /*0x5bdeca*/
  if ( v15 == 12345 ) /*0x5bded3*/
    v14 = *(__int16 *)(g_MissionQueueFrame.localVariables[516] + 4) / 2; /*0x5bdede*/
  if ( v15 == 54321 ) /*0x5bdee6*/
    v14 = *(__int16 *)(g_MissionQueueFrame.localVariables[516] + 4); /*0x5bdee8*/
  v16 = this->u32_5568; /*0x5bdeec*/
  v19 = v13; /*0x5bdef8*/
  v20 = v14; /*0x5bdf02*/
  (*(void (__thiscall **)(void *, int *, int, int))(*(_DWORD *)stru_887598.lineTrailer + 4))( /*0x5bdf0f*/
    stru_887598.lineTrailer,
    &v19,
    g_MissionQueueFrame.localVariables[516],
    v18 + v16);
  return ScrollClass::Scroll((ScrollClass *)this, a2, a3); /*0x5bdf24*/
}



// ==== 0x005BDF30  MouseClass::LoadTypeData  this=MouseClass  sig=csp ====
void *__thiscall MouseClass::LoadTypeData(MouseClass *this)
{
  void *result; // eax

  BlowStraw_29::Stub((int *)this); /*0x5bdf30*/
  result = LoadFileSHP(g_Str_File_MOUSE_SHA, (bool *)&g_MissionQueueFrame.localVariables[534]); /*0x5bdf3f*/
  g_MissionQueueFrame.localVariables[516] = (int)result; /*0x5bdf44*/
  return result; /*0x5bdf49*/
}



// ==== 0x005BDF50  MouseClass::HandleClick  this=MouseClass  sig=csp ====
int __thiscall MouseClass::HandleClick(MouseClass *this)
{
  HouseClass::InitSubsystems((SidebarClass *)this); /*0x5bdf53*/
  this->u32_555C = 0; /*0x5bdf5a*/
  this->u32_5564 = 0; /*0x5bdf60*/
  return 0; /*0x5bdf66*/
}



// ==== 0x005BDF70  MouseClass::LoadGameAssets  this=MouseClass  sig=csp ====
int __thiscall MouseClass::LoadGameAssets(MouseClass *this, LPSTREAM pStm)
{
  LPSTREAM v3; // esi
  int result; // eax
  void *MouseClass_field_0x68; // ecx
  _DWORD *MouseClass_field_0x14; // esi
  char *v7; // esi
  int v8; // edi
  char *pad_18; // esi
  int v10; // edi
  char *v11; // edi
  int v12; // ebx
  _DWORD *v13; // esi
  int *v14; // ebx
  int *v15; // esi
  int v16; // edi
  void *MouseClass_field_0x0; // eax
  CampaignClass *v18; // eax
  int v19; // esi
  int v20; // eax
  int v21; // esi
  _BYTE *v22; // ecx
  int v23; // edx
  char **v24; // eax
  char **v25; // esi
  int v26; // ebx
  _DWORD *v27; // eax
  MouseClass *v28; // edi
  char *v29; // eax
  int v30; // ecx
  int v31; // eax
  int v32; // ecx
  int v33; // eax
  int v34; // edi
  int v35; // edx
  int v36; // esi
  SubzoneHashVector **v37; // eax
  SubzoneHashVector **v38; // edi
  SubzoneHashVector *v39; // eax
  SubzoneHashVector *v40; // esi
  int v41; // ebx
  SubzoneHashVector *v42; // eax
  int v43; // ecx
  int v44; // eax
  int v45; // ecx
  char *v46; // ecx
  int v47; // edx
  IStream *v48; // edi
  int v49; // ebx
  char *v50; // esi
  int v51; // eax
  int v52; // eax
  int v53; // eax
  int v54; // ecx
  int v55; // eax
  int v56; // eax
  int v57; // edx
  _DWORD *v58; // eax
  int i; // esi
  int v60; // ecx
  int j; // esi
  int v62; // ecx
  int v63; // eax
  int v64; // eax
  int v65; // edx
  int v66; // ecx
  int v67; // eax
  int v68; // eax
  int v69; // edx
  int uniqueId; // ecx
  BuildingTypeClass *v71; // [esp+D0h] [ebp-40h]
  _BYTE v72[5]; // [esp+E3h] [ebp-2Dh] BYREF
  int v73; // [esp+E8h] [ebp-28h]
  int v74; // [esp+ECh] [ebp-24h] BYREF
  char *v75; // [esp+F0h] [ebp-20h]
  SubzoneHashVector *v76; // [esp+F4h] [ebp-1Ch]
  int v77; // [esp+F8h] [ebp-18h] BYREF
  int v78; // [esp+FCh] [ebp-14h] BYREF
  int v79; // [esp+100h] [ebp-10h] BYREF
  int v80; // [esp+104h] [ebp-Ch]
  int v81; // [esp+108h] [ebp-8h]
  int v82; // [esp+10Ch] [ebp-4h]

  (*(void (__thiscall **)(char *))(*(_DWORD *)&this->__pad_1D4[3976] + 12))(&this->__pad_1D4[3976]); /*0x5bdf85*/
  (*(void (__thiscall **)(char *))(*(_DWORD *)&this->__pad_74[96] + 12))(&this->__pad_74[96]); /*0x5bdf94*/
  v3 = pStm; /*0x5bdf97*/
  result = SidebarClass::saveLoadPrefix((SidebarClass *)this, (int)pStm); /*0x5bdf9e*/
  if ( result >= 0 ) /*0x5bdfa7*/
  {
    result = (*(int (__stdcall **)(LPSTREAM, int *, int, _DWORD))(*(_DWORD *)v3->__pad_0 + 12))(v3, &v78, 4, 0); /*0x5bdfb8*/
    if ( result >= 0 ) /*0x5bdfbd*/
    {
      dword_822CF8 = -1; /*0x5bdfc3*/
      (*((void (__thiscall **)(MouseClass *))this->MouseClass_field_0x0 + 23))(this); /*0x5bdfd2*/
      __3_YAXPAX_Z(this->MouseClass_field_0x70); /*0x5bdfd9*/
      MouseClass_field_0x68 = (void *)this->MouseClass_field_0x68; /*0x5bdfde*/
      this->MouseClass_field_0x70 = 0; /*0x5bdfe1*/
      __3_YAXPAX_Z(MouseClass_field_0x68); /*0x5bdfe5*/
      MouseClass_field_0x14 = (_DWORD *)this->MouseClass_field_0x14; /*0x5bdfea*/
      this->MouseClass_field_0x68 = 0; /*0x5bdff2*/
      if ( MouseClass_field_0x14 ) /*0x5bdff5*/
      {
        if ( *MouseClass_field_0x14 ) /*0x5bdff7*/
          (**(void (__thiscall ***)(_DWORD, int))*MouseClass_field_0x14)(*MouseClass_field_0x14, 3); /*0x5be001*/
        __3_YAXPAX_Z(MouseClass_field_0x14); /*0x5be004*/
      }
      this->MouseClass_field_0x14 = 0; /*0x5be00c*/
      v7 = &this->__pad_74[24]; /*0x5be00f*/
      v8 = 3; /*0x5be015*/
      do /*0x5be025*/
      {
        (*(void (__thiscall **)(char *))(*(_DWORD *)v7 + 12))(v7); /*0x5be01e*/
        v7 += 24; /*0x5be021*/
        --v8; /*0x5be024*/
      }
      while ( v8 ); /*0x5be025*/
      pad_18 = this->__pad_18; /*0x5be027*/
      v10 = 13; /*0x5be02a*/
      do /*0x5be040*/
      {
        __3_YAXPAX_Z(*(void **)pad_18); /*0x5be032*/
        *(_DWORD *)pad_18 = 0; /*0x5be037*/
        pad_18 += 4; /*0x5be03c*/
        --v10; /*0x5be03f*/
      }
      while ( v10 ); /*0x5be040*/
      v11 = &this->__pad_74[12]; /*0x5be042*/
      v12 = 3; /*0x5be048*/
      do /*0x5be072*/
      {
        v13 = *(_DWORD **)v11; /*0x5be04d*/
        if ( *(_DWORD *)v11 ) /*0x5be04d*/
        {
          if ( *v13 ) /*0x5be053*/
            (**(void (__thiscall ***)(_DWORD, int))*v13)(*v13, 3); /*0x5be05d*/
          __3_YAXPAX_Z(v13); /*0x5be060*/
          *(_DWORD *)v11 = 0; /*0x5be068*/
        }
        v11 += 4; /*0x5be06e*/
        --v12; /*0x5be071*/
      }
      while ( v12 ); /*0x5be072*/
      (*(void (__thiscall **)(char *))(*(_DWORD *)&this->__pad_11F[25] + 12))(&this->__pad_11F[25]); /*0x5be080*/
      result = (*(int (__stdcall **)(LPSTREAM, MouseClass *, int, _DWORD))(*(_DWORD *)pStm->__pad_0 + 12))( /*0x5be092*/
                 pStm,
                 this,
                 21868,
                 0);
      if ( result >= 0 ) /*0x5be097*/
      {
        if ( this ) /*0x5be09f*/
        {
          MouseClass::drawCursor(this, (int)v72); /*0x5be0a8*/
          this->MouseClass_field_0x0 = &MouseClass::`vftable'; /*0x5be0ad*/
          this->u32_5518 = &MouseClass::`vftable'; /*0x5be0b4*/
        }
        v14 = (int *)((char *)this + 5544); /*0x5be0be*/
        v73 = 4; /*0x5be0c4*/
        do /*0x5be0f3*/
        {
          v15 = v14; /*0x5be0cc*/
          v16 = 75; /*0x5be0ce*/
          do /*0x5be0e2*/
          {
            ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, v15); /*0x5be0d9*/
            v15 += 13; /*0x5be0de*/
            --v16; /*0x5be0e1*/
          }
          while ( v16 ); /*0x5be0e2*/
          v14 += 997; /*0x5be0e8*/
          --v73; /*0x5be0ef*/
        }
        while ( v73 ); /*0x5be0f3*/
        ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, this->MouseClass_field_0x11A4); /*0x5be101*/
        ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, this->MouseClass_field_0x11A8); /*0x5be112*/
        ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, this->MouseClass_field_0x11A0); /*0x5be123*/
        (*((void (__thiscall **)(MouseClass *))this->MouseClass_field_0x0 + 22))(this); /*0x5be12d*/
        (*((void (__thiscall **)(MouseClass *))this->MouseClass_field_0x0 + 24))(this); /*0x5be135*/
        MouseClass_field_0x0 = this->MouseClass_field_0x0; /*0x5be138*/
        this->MouseClass_field_0x70 = 0; /*0x5be14a*/
        this->MouseClass_field_0x68 = 0; /*0x5be14d*/
        (*((void (__thiscall **)(MouseClass *, char *, int, _DWORD, _DWORD))MouseClass_field_0x0 + 28))( /*0x5be150*/
          this,
          &this->__pad_74[120],
          1,
          0,
          0);
        if ( this->MouseClass_field_0x70 ) /*0x5be153*/
        {
          __3_YAXPAX_Z(this->MouseClass_field_0x70); /*0x5be15b*/
          this->MouseClass_field_0x70 = 0; /*0x5be163*/
        }
        if ( this->MouseClass_field_0x68 ) /*0x5be166*/
        {
          __3_YAXPAX_Z((void *)this->MouseClass_field_0x68); /*0x5be16e*/
          this->MouseClass_field_0x68 = 0; /*0x5be176*/
        }
        v18 = (CampaignClass *)__2_YAPAXI_Z(10 * *(_DWORD *)this->__pad_6C); /*0x5be182*/
        v19 = *(_DWORD *)this->__pad_6C; /*0x5be187*/
        this->MouseClass_field_0x70 = v18; /*0x5be18a*/
        v20 = __2_YAPAXI_Z(4 * v19); /*0x5be195*/
        if ( v20 ) /*0x5be19f*/
        {
          v21 = v19 - 1; /*0x5be1a1*/
          v22 = (_BYTE *)v20; /*0x5be1a2*/
          if ( v21 >= 0 ) /*0x5be1a6*/
          {
            v23 = v21 + 1; /*0x5be1a8*/
            do /*0x5be1b6*/
            {
              *v22 = 7; /*0x5be1ab*/
              v22[1] = 0; /*0x5be1ae*/
              v22 += 4; /*0x5be1b2*/
              --v23; /*0x5be1b5*/
            }
            while ( v23 ); /*0x5be1b6*/
          }
        }
        else
        {
          v20 = 0; /*0x5be1ba*/
        }
        this->MouseClass_field_0x68 = v20; /*0x5be1be*/
        v24 = (char **)__2_YAPAXI_Z(0x10u); /*0x5be1c1*/
        v25 = v24; /*0x5be1c6*/
        v26 = 256; /*0x5be1cd*/
        if ( v24 ) /*0x5be1d2*/
        {
          v24[1] = (char *)Cell::DecodeFlags; /*0x5be1d9*/
          v24[2] = (char *)256; /*0x5be1e0*/
          v24[3] = (char *)20; /*0x5be1e3*/
          v27 = (_DWORD *)__2_YAPAXI_Z(0x1804u); /*0x5be1ea*/
          if ( v27 ) /*0x5be1f4*/
          {
            *v27 = 256; /*0x5be1f6*/
            v75 = (char *)(v27 + 1); /*0x5be1fb*/
            v28 = (MouseClass *)(v27 + 1); /*0x5be1ff*/
            do /*0x5be210*/
            {
              MouseClass::loadCursor(v28, 0, 0); /*0x5be207*/
              v28 = (MouseClass *)((char *)v28 + 24); /*0x5be20c*/
              --v26; /*0x5be20f*/
            }
            while ( v26 ); /*0x5be210*/
            v29 = v75; /*0x5be212*/
          }
          else
          {
            v29 = 0; /*0x5be218*/
          }
          v30 = (int)v25[2]; /*0x5be21a*/
          *v25 = v29; /*0x5be21d*/
          v31 = 0; /*0x5be21f*/
          if ( v30 > 0 ) /*0x5be223*/
          {
            v32 = 0; /*0x5be225*/
            do /*0x5be23b*/
            {
              ++v31; /*0x5be22e*/
              *(_DWORD *)&(*v25)[v32 + 20] = 20; /*0x5be22f*/
              v32 += 24; /*0x5be236*/
            }
            while ( v31 < (int)v25[2] ); /*0x5be23b*/
          }
        }
        else
        {
          v25 = 0; /*0x5be23f*/
        }
        this->MouseClass_field_0x14 = (int)v25; /*0x5be247*/
        v75 = &this->__pad_74[12]; /*0x5be24a*/
        v33 = 0; /*0x5be254*/
        v73 = (int)&this->__pad_74[24]; /*0x5be256*/
        do /*0x5be34f*/
        {
          v34 = v73; /*0x5be25a*/
          v35 = *(_DWORD *)v73; /*0x5be266*/
          v77 = v33 + 1; /*0x5be268*/
          v36 = 1 << (v33 + 1); /*0x5be26c*/
          (*(void (__thiscall **)(int))(v35 + 12))(v73); /*0x5be270*/
          *(_DWORD *)(v34 + 20) = 4 * *(_DWORD *)&this->__pad_74[128] * *(_DWORD *)&this->__pad_74[132] / (v36 * v36); /*0x5be28d*/
          v37 = (SubzoneHashVector **)__2_YAPAXI_Z(0x10u); /*0x5be290*/
          v38 = v37; /*0x5be295*/
          if ( v37 ) /*0x5be29c*/
          {
            v37[1] = (SubzoneHashVector *)Cell::DecodeFlags; /*0x5be2a7*/
            v37[2] = (SubzoneHashVector *)256; /*0x5be2ae*/
            v37[3] = (SubzoneHashVector *)20; /*0x5be2b5*/
            v39 = (SubzoneHashVector *)__2_YAPAXI_Z(0x1804u); /*0x5be2bc*/
            if ( v39 ) /*0x5be2c6*/
            {
              *v39 = (SubzoneHashVector)256; /*0x5be2c8*/
              v76 = v39 + 1; /*0x5be2d1*/
              v40 = v39 + 1; /*0x5be2d5*/
              v41 = 256; /*0x5be2d7*/
              do /*0x5be2ff*/
              {
                SubzoneHashVector::Construct(v40, 0, 0); /*0x5be2e2*/
                *v40 = (SubzoneHashVector)&DynamicVectorClass<HashObject<unsigned int,SubzoneConnectionStruct>>::`vftable'; /*0x5be2e7*/
                v40[5] = (SubzoneHashVector)10; /*0x5be2ed*/
                v40[4] = 0; /*0x5be2f4*/
                v40 += 6; /*0x5be2fb*/
                --v41; /*0x5be2fe*/
              }
              while ( v41 ); /*0x5be2ff*/
              v42 = v76; /*0x5be301*/
            }
            else
            {
              v42 = 0; /*0x5be307*/
            }
            v43 = (int)v38[2]; /*0x5be309*/
            *v38 = v42; /*0x5be30c*/
            v44 = 0; /*0x5be30e*/
            if ( v43 > 0 ) /*0x5be312*/
            {
              v45 = 0; /*0x5be314*/
              do /*0x5be32a*/
              {
                ++v44; /*0x5be31d*/
                (*v38)[v45 + 5] = (SubzoneHashVector)20; /*0x5be31e*/
                v45 += 6; /*0x5be325*/
              }
              while ( v44 < (int)v38[2] ); /*0x5be32a*/
            }
          }
          else
          {
            v38 = 0; /*0x5be32e*/
          }
          v46 = v75; /*0x5be330*/
          v33 = v77; /*0x5be338*/
          v47 = v73 + 24; /*0x5be33c*/
          *(_DWORD *)v75 = v38; /*0x5be33f*/
          v75 = v46 + 4; /*0x5be347*/
          v73 = v47; /*0x5be34b*/
        }
        while ( v33 < 3 ); /*0x5be34f*/
        v48 = pStm; /*0x5be358*/
        result = (*(int (__stdcall **)(LPSTREAM, int, int, _DWORD))(*(_DWORD *)pStm->__pad_0 + 12))( /*0x5be369*/
                   pStm,
                   this->MouseClass_field_0x68,
                   4 * *(_DWORD *)this->__pad_6C,
                   0);
        if ( result >= 0 ) /*0x5be36e*/
        {
          v49 = 0; /*0x5be374*/
          v50 = this->__pad_18; /*0x5be376*/
          while ( 1 ) /*0x5be37f*/
          {
            v51 = __2_YAPAXI_Z(2 * *(_DWORD *)&this->__pad_3C[16]); /*0x5be37f*/
            *(_DWORD *)v50 = v51; /*0x5be384*/
            result = (*(int (__stdcall **)(IStream *, int, int, _DWORD))(*(_DWORD *)v48->__pad_0 + 12))( /*0x5be395*/
                       v48,
                       v51,
                       2 * *(_DWORD *)&this->__pad_3C[16],
                       0);
            if ( result < 0 ) /*0x5be39a*/
              break; /*0x5be39a*/
            ++v49; /*0x5be3a0*/
            v50 += 4; /*0x5be3a1*/
            if ( v49 >= 13 ) /*0x5be3a7*/
            {
              v52 = *(_DWORD *)v48->__pad_0; /*0x5be3a9*/
              v74 = 0; /*0x5be3b5*/
              result = (*(int (__stdcall **)(IStream *, int *, int, _DWORD))(v52 + 12))(v48, &v74, 4, 0); /*0x5be3bd*/
              if ( result >= 0 ) /*0x5be3c4*/
              {
                (*(void (__thiscall **)(char *))(*(_DWORD *)&this->__pad_3C[20] + 12))(&this->__pad_3C[20]); /*0x5be3d2*/
                pStm = 0; /*0x5be3d9*/
                if ( v74 <= 0 ) /*0x5be3df*/
                {
LABEL_72:
                  for ( i = 0; i < this->MouseClass_field_0x140; ++i ) /*0x5be492*/
                  {
                    v60 = *(_DWORD *)(*(_DWORD *)&this->__pad_11F[29] + 4 * i); /*0x5be49a*/
                    if ( v60 ) /*0x5be49f*/
                    {
                      (*(void (__thiscall **)(int, int))(*(_DWORD *)v60 + 32))(v60, 1); /*0x5be4a5*/
                      *(_DWORD *)(*(_DWORD *)&this->__pad_11F[29] + 4 * i) = 0; /*0x5be4ae*/
                    }
                  }
                  result = (*(int (__stdcall **)(IStream *, _BYTE *, int, _DWORD))(*(_DWORD *)v48->__pad_0 + 12))( /*0x5be4c7*/
                             v48,
                             &v72[1],
                             4,
                             0);
                  if ( result >= 0 ) /*0x5be4cc*/
                  {
                    for ( j = 0; j < *(int *)&v72[1]; ++j ) /*0x5be4da*/
                      OleLoadFromStream(v48, &IID_IUnknown, (LPVOID *)&pStm); /*0x5be4ed*/
                    result = (*(int (__stdcall **)(IStream *, _BYTE *, int, _DWORD))(*(_DWORD *)v48->__pad_0 + 12))( /*0x5be505*/
                               v48,
                               &v72[1],
                               4,
                               0);
                    if ( result >= 0 ) /*0x5be50a*/
                    {
                      pStm = 0; /*0x5be514*/
                      if ( *(int *)&v72[1] <= 0 ) /*0x5be51a*/
                      {
LABEL_89:
                        result = (*(int (__stdcall **)(IStream *, _BYTE *, int, _DWORD))(*(_DWORD *)v48->__pad_0 + 12))( /*0x5be58d*/
                                   v48,
                                   &v72[1],
                                   4,
                                   0);
                        if ( result >= 0 ) /*0x5be59d*/
                        {
                          pStm = 0; /*0x5be5a7*/
                          if ( *(int *)&v72[1] <= 0 ) /*0x5be5ad*/
                          {
LABEL_99:
                            LoadObjectTypeClassTheaterSHP(dword_A8B230[130].uniqueId); /*0x5be620*/
                            uniqueId = dword_A8B230[130].uniqueId; /*0x5be636*/
                            if ( uniqueId == dword_822CF8 ) /*0x5be643*/
                              ResetAllTechnoField776(); /*0x5be64e*/
                            else
                              LoadTerrainTypeClassTheatre(uniqueId, 1); /*0x5be647*/
                            LoadMapClassIsometricTiles(0, 0); /*0x5be657*/
                            LoadBuildingTypeClassSHPs(dword_A8B230[130].uniqueId); /*0x5be668*/
                            BuildingTypeClass::LoadRepairAnimations(v71); /*0x5be679*/
                            LoadBuildingTypeClassTheatreSHP(dword_A8B230[130].uniqueId); /*0x5be689*/
                            LoadFactoryClassTheaterSHP(dword_A8B230[130].uniqueId); /*0x5be69a*/
                            *(_DWORD *)&this->__pad_11AC[16] = 0; /*0x5be69f*/
                            dword_822CF8 = dword_A8B230[130].uniqueId; /*0x5be6b1*/
                            return 0; /*0x5be6b6*/
                          }
                          else
                          {
                            while ( 1 ) /*0x5be5ba*/
                            {
                              result = (*(int (__stdcall **)(IStream *, int *, int, _DWORD))(*(_DWORD *)v48->__pad_0 + 12))( /*0x5be5ba*/
                                         v48,
                                         &v77,
                                         4,
                                         0);
                              if ( result < 0 ) /*0x5be5bf*/
                                break; /*0x5be5bf*/
                              v66 = *(_DWORD *)&this->__pad_74[104]; /*0x5be5c5*/
                              if ( *(_DWORD *)&this->__pad_74[112] < v66 /*0x5be5f5*/
                                || (this->__pad_74[109] || !v66)
                                && (v67 = *(_DWORD *)&this->__pad_74[116], v67 > 0)
                                && (*(unsigned __int8 (__thiscall **)(char *, int, _DWORD))(*(_DWORD *)&this->__pad_74[96]
                                                                                          + 8))(
                                     &this->__pad_74[96],
                                     v67 + v66,
                                     0) )
                              {
                                v68 = *(_DWORD *)&this->__pad_74[112]; /*0x5be5fc*/
                                v69 = *(_DWORD *)&this->__pad_74[100]; /*0x5be5ff*/
                                *(_DWORD *)&this->__pad_74[112] = v68 + 1; /*0x5be605*/
                                *(_DWORD *)(v69 + 4 * v68) = v77; /*0x5be60c*/
                              }
                              pStm = (LPSTREAM)((char *)pStm + 1); /*0x5be61a*/
                              if ( (int)pStm >= *(int *)&v72[1] ) /*0x5be61e*/
                                goto LABEL_99; /*0x5be61e*/
                            }
                          }
                        }
                      }
                      else
                      {
                        while ( 1 ) /*0x5be527*/
                        {
                          result = (*(int (__stdcall **)(IStream *, int *, int, _DWORD))(*(_DWORD *)v48->__pad_0 + 12))( /*0x5be527*/
                                     v48,
                                     &v77,
                                     4,
                                     0);
                          if ( result < 0 ) /*0x5be52c*/
                            break; /*0x5be52c*/
                          v62 = *(_DWORD *)&this->__pad_1D4[3984]; /*0x5be532*/
                          if ( *(_DWORD *)&this->__pad_1D4[3992] < v62 /*0x5be562*/
                            || (this->__pad_1D4[3989] || !v62)
                            && (v63 = *(_DWORD *)&this->__pad_1D4[3996], v63 > 0)
                            && (*(unsigned __int8 (__thiscall **)(char *, int, _DWORD))(*(_DWORD *)&this->__pad_1D4[3976]
                                                                                      + 8))(
                                 &this->__pad_1D4[3976],
                                 v63 + v62,
                                 0) )
                          {
                            v64 = *(_DWORD *)&this->__pad_1D4[3992]; /*0x5be569*/
                            v65 = *(_DWORD *)&this->__pad_1D4[3980]; /*0x5be56c*/
                            *(_DWORD *)&this->__pad_1D4[3992] = v64 + 1; /*0x5be572*/
                            *(_DWORD *)(v65 + 4 * v64) = v77; /*0x5be579*/
                          }
                          pStm = (LPSTREAM)((char *)pStm + 1); /*0x5be587*/
                          if ( (int)pStm >= *(int *)&v72[1] ) /*0x5be58b*/
                            goto LABEL_89; /*0x5be58b*/
                        }
                      }
                    }
                  }
                }
                else
                {
                  while ( 1 ) /*0x5be3e5*/
                  {
                    v53 = *(_DWORD *)v48->__pad_0; /*0x5be3e5*/
                    v79 = 0; /*0x5be3f0*/
                    v80 = 0; /*0x5be3fa*/
                    LOBYTE(v81) = 0; /*0x5be404*/
                    v82 = -1; /*0x5be409*/
                    result = (*(int (__stdcall **)(IStream *, int *, int, _DWORD))(v53 + 12))(v48, &v79, 16, 0); /*0x5be411*/
                    if ( result < 0 ) /*0x5be416*/
                      break; /*0x5be416*/
                    v54 = *(_DWORD *)&this->__pad_3C[28]; /*0x5be41c*/
                    if ( *(_DWORD *)&this->__pad_3C[36] < v54 /*0x5be440*/
                      || (this->__pad_3C[33] || !v54)
                      && (v55 = *(_DWORD *)&this->__pad_3C[40], v55 > 0)
                      && (*(unsigned __int8 (__thiscall **)(char *, int, _DWORD))(*(_DWORD *)&this->__pad_3C[20] + 8))(
                           &this->__pad_3C[20],
                           v55 + v54,
                           0) )
                    {
                      v56 = *(_DWORD *)&this->__pad_3C[36]; /*0x5be447*/
                      v57 = v79; /*0x5be44a*/
                      *(_DWORD *)&this->__pad_3C[36] = v56 + 1; /*0x5be451*/
                      v58 = (_DWORD *)(*(_DWORD *)&this->__pad_3C[24] + 16 * v56); /*0x5be45a*/
                      *v58 = v57; /*0x5be45c*/
                      v58[1] = v80; /*0x5be462*/
                      v58[2] = v81; /*0x5be469*/
                      v58[3] = v82; /*0x5be470*/
                    }
                    pStm = (LPSTREAM)((char *)pStm + 1); /*0x5be47e*/
                    if ( (int)pStm >= v74 ) /*0x5be482*/
                      goto LABEL_72; /*0x5be482*/
                  }
                }
              }
              return result; /*0x5be416*/
            }
          }
        }
      }
    }
  }
  return result; /*0x5be6b8*/
}



// ==== 0x005BE6D0  MouseClass::DrawCursor  this=MouseClass  sig=csp ====
int __thiscall MouseClass::DrawCursor(MouseClass *this, LPSTREAM pStm)
{
  IStream *v2; // esi
  int result; // eax
  int v5; // edx
  int v6; // ebp
  char *pad_18; // ebx
  int v8; // eax
  int v9; // ebp
  int v10; // ebx
  int v11; // eax
  int v12; // ecx
  int i; // eax
  int v14; // ebp
  IPersistStream *v15; // ebx
  int v16; // ecx
  int v17; // ebx
  int v18; // ecx
  int v19; // ebx
  int v20; // [esp+8Ch] [ebp-20h] BYREF
  int uniqueId; // [esp+90h] [ebp-1Ch] BYREF
  __int16 v22[2]; // [esp+94h] [ebp-18h] BYREF
  int v23; // [esp+98h] [ebp-14h]
  _DWORD v24[2]; // [esp+9Ch] [ebp-10h] BYREF
  char v25; // [esp+A4h] [ebp-8h]
  int v26; // [esp+A8h] [ebp-4h]

  v2 = pStm; /*0x5be6d6*/
  result = SidebarClass::saveLoadPrefix2((SidebarClass *)this, (int)pStm); /*0x5be6de*/
  if ( result >= 0 ) /*0x5be6e5*/
  {
    v5 = *(_DWORD *)v2->__pad_0; /*0x5be6f0*/
    uniqueId = dword_A8B230[130].uniqueId; /*0x5be702*/
    result = (*(int (__stdcall **)(IStream *, int *, int, _DWORD))(v5 + 16))(v2, &uniqueId, 4, 0); /*0x5be706*/
    if ( result >= 0 ) /*0x5be70b*/
    {
      result = (*(int (__stdcall **)(IStream *, MouseClass *, int, _DWORD))(*(_DWORD *)v2->__pad_0 + 16))( /*0x5be71c*/
                 v2,
                 this,
                 21868,
                 0);
      if ( result >= 0 ) /*0x5be721*/
      {
        result = (*(int (__stdcall **)(IStream *, int, int, _DWORD))(*(_DWORD *)v2->__pad_0 + 16))( /*0x5be737*/
                   v2,
                   this->MouseClass_field_0x68,
                   4 * *(_DWORD *)this->__pad_6C,
                   0);
        if ( result >= 0 ) /*0x5be73c*/
        {
          v6 = 0; /*0x5be742*/
          pad_18 = this->__pad_18; /*0x5be744*/
          while ( 1 ) /*0x5be755*/
          {
            result = (*(int (__stdcall **)(IStream *, _DWORD, int, _DWORD))(*(_DWORD *)v2->__pad_0 + 16))( /*0x5be755*/
                       v2,
                       *(_DWORD *)pad_18,
                       2 * *(_DWORD *)&this->__pad_3C[16],
                       0);
            if ( result < 0 ) /*0x5be75a*/
              break; /*0x5be75a*/
            ++v6; /*0x5be760*/
            pad_18 += 4; /*0x5be761*/
            if ( v6 >= 13 ) /*0x5be767*/
            {
              v8 = *(_DWORD *)v2->__pad_0; /*0x5be76c*/
              v20 = *(_DWORD *)&this->__pad_3C[36]; /*0x5be778*/
              result = (*(int (__stdcall **)(IStream *, int *, int, _DWORD))(v8 + 16))(v2, &v20, 4, 0); /*0x5be77c*/
              if ( result >= 0 ) /*0x5be781*/
              {
                v9 = 0; /*0x5be78b*/
                if ( v20 <= 0 ) /*0x5be78f*/
                {
LABEL_13:
                  pStm = 0; /*0x5be7d8*/
                  LayerClass::CellIteratorReset((LayerClass *)this); /*0x5be7e2*/
                  for ( i = LayerClass::CellIteratorNext((LayerClass *)this); /*0x5be7f0*/
                        i;
                        i = LayerClass::CellIteratorNext((LayerClass *)this) )
                  {
                    *(_DWORD *)v22 = *(_DWORD *)(i + 36); /*0x5be7fc*/
                    if ( (unsigned __int8)Cell::Exists((Cell *)this, v22) ) /*0x5be800*/
                      pStm = (LPSTREAM)((char *)pStm + 1); /*0x5be809*/
                  }
                  result = (*(int (__stdcall **)(IStream *, LPSTREAM *, int, _DWORD))(*(_DWORD *)v2->__pad_0 + 16))( /*0x5be824*/
                             v2,
                             &pStm,
                             4,
                             0);
                  v14 = result; /*0x5be827*/
                  v23 = result; /*0x5be82b*/
                  if ( result >= 0 ) /*0x5be82f*/
                  {
                    LayerClass::CellIteratorReset((LayerClass *)this); /*0x5be83d*/
                    v15 = (IPersistStream *)LayerClass::CellIteratorNext((LayerClass *)this); /*0x5be849*/
                    if ( v15 ) /*0x5be84d*/
                    {
                      do /*0x5be87f*/
                      {
                        *(IPersistStream *)v22 = v15[9]; /*0x5be85c*/
                        if ( (unsigned __int8)Cell::Exists((Cell *)this, v22) ) /*0x5be863*/
                        {
                          OleSaveToStream(v15, v2); /*0x5be86e*/
                          pStm = (LPSTREAM)((char *)pStm - 1); /*0x5be870*/
                        }
                        v15 = (IPersistStream *)LayerClass::CellIteratorNext((LayerClass *)this); /*0x5be87b*/
                      }
                      while ( v15 ); /*0x5be87f*/
                      v14 = v23; /*0x5be881*/
                    }
                    if ( pStm ) /*0x5be88b*/
                    {
                      return v14; /*0x5be88e*/
                    }
                    else
                    {
                      v16 = *(_DWORD *)v2->__pad_0; /*0x5be89f*/
                      pStm = *(LPSTREAM *)&this->__pad_1D4[3992]; /*0x5be8ab*/
                      result = (*(int (__stdcall **)(IStream *, LPSTREAM *, int, _DWORD))(v16 + 16))(v2, &pStm, 4, 0); /*0x5be8af*/
                      if ( result >= 0 ) /*0x5be8b4*/
                      {
                        v17 = 0; /*0x5be8ba*/
                        if ( (int)pStm <= 0 ) /*0x5be8be*/
                        {
LABEL_29:
                          v18 = *(_DWORD *)v2->__pad_0; /*0x5be8e1*/
                          pStm = *(LPSTREAM *)&this->__pad_74[112]; /*0x5be8f3*/
                          result = (*(int (__stdcall **)(IStream *, LPSTREAM *, int, _DWORD))(v18 + 16))( /*0x5be8f7*/
                                     v2,
                                     &pStm,
                                     4,
                                     0);
                          if ( result >= 0 ) /*0x5be8fc*/
                          {
                            v19 = 0; /*0x5be902*/
                            if ( (int)pStm <= 0 ) /*0x5be906*/
                            {
                              return 0; /*0x5be929*/
                            }
                            else
                            {
                              while ( 1 ) /*0x5be919*/
                              {
                                result = (*(int (__stdcall **)(IStream *, int, int, _DWORD))(*(_DWORD *)v2->__pad_0 + 16))( /*0x5be919*/
                                           v2,
                                           *(_DWORD *)&this->__pad_74[100] + 4 * v19,
                                           4,
                                           0);
                                if ( result < 0 ) /*0x5be91e*/
                                  break; /*0x5be91e*/
                                if ( ++v19 >= (int)pStm ) /*0x5be927*/
                                  return 0; /*0x5be927*/
                              }
                            }
                          }
                        }
                        else
                        {
                          while ( 1 ) /*0x5be8d1*/
                          {
                            result = (*(int (__stdcall **)(IStream *, int, int, _DWORD))(*(_DWORD *)v2->__pad_0 + 16))( /*0x5be8d1*/
                                       v2,
                                       *(_DWORD *)&this->__pad_1D4[3980] + 4 * v17,
                                       4,
                                       0);
                            if ( result < 0 ) /*0x5be8d6*/
                              break; /*0x5be8d6*/
                            if ( ++v17 >= (int)pStm ) /*0x5be8df*/
                              goto LABEL_29; /*0x5be8df*/
                          }
                        }
                      }
                    }
                  }
                }
                else
                {
                  v10 = 0; /*0x5be791*/
                  while ( 1 ) /*0x5be798*/
                  {
                    v11 = *(_DWORD *)&this->__pad_3C[24] + v10; /*0x5be798*/
                    v24[0] = *(_DWORD *)v11; /*0x5be7a0*/
                    v24[1] = *(_DWORD *)(v11 + 4); /*0x5be7a7*/
                    v12 = *(_DWORD *)v2->__pad_0; /*0x5be7ae*/
                    v25 = *(_BYTE *)(v11 + 8); /*0x5be7b0*/
                    v26 = *(_DWORD *)(v11 + 12); /*0x5be7bd*/
                    result = (*(int (__stdcall **)(IStream *, _DWORD *, int, _DWORD))(v12 + 16))(v2, v24, 16, 0); /*0x5be7c1*/
                    if ( result < 0 ) /*0x5be7c6*/
                      break; /*0x5be7c6*/
                    ++v9; /*0x5be7d0*/
                    v10 += 16; /*0x5be7d1*/
                    if ( v9 >= v20 ) /*0x5be7d6*/
                      goto LABEL_13; /*0x5be7d6*/
                  }
                }
              }
              return result; /*0x5be7c6*/
            }
          }
        }
      }
    }
  }
  return result; /*0x5be831*/
}



// ==== 0x005BE940  WinMainSetup_Setup_5BE940  this=-  sig=ida-proto ====
void sub_5BE940()
{
  void *v0; // esi

  v0 = dword_ABF294; /*0x5be941*/
  if ( dword_ABF294 ) /*0x5be949*/
  {
    FileTreeNode::Destroy(dword_ABF294); /*0x5be94d*/
    __3_YAXPAX_Z(v0); /*0x5be953*/
    byte_ABF2DC = 0; /*0x5be95b*/
  }
  dword_ABF294 = 0; /*0x5be962*/
}



// ==== 0x005BE970  Render_Render_5BE970  this=-  sig=csp ====
int __stdcall sub_5BE970(int a1)
{
  return dword_82D028[7 * a1]; /*0x5be984*/
}



// ==== 0x005BE990  Render_Render_5BE990  this=-  sig=csp ====
int __stdcall sub_5BE990(int a1)
{
  return dword_82D02C[7 * a1]; /*0x5be9a4*/
}



// ==== 0x005BE9B0  MouseClass::drawCursor  this=TabClass  sig=csp ====
_DWORD *__thiscall MouseClass::drawCursor(MouseClass *this, int a2)
{
  UI_Init((int)this, a2); /*0x5be9b8*/
  *((_DWORD *)this + 5446) = &INoticeSink::`vftable'; /*0x5be9bd*/
  this->MouseClass_field_0x0 = &TabClass::`vftable'; /*0x5be9c7*/
  *((_DWORD *)this + 5446) = &TabClass::`vftable'; /*0x5be9cd*/
  return &this->MouseClass_field_0x0; /*0x5be9d9*/
}



// ==== 0x005BE9E0  TabClass::Read  this=TabClass  sig=csp ====
RadarClass *__thiscall BlowStraw_29::Read(TabClass *this, char a2)
{
  int *v3; // esi
  int v4; // edi

  v3 = (int *)((char *)this + 21484); /*0x5be9e5*/
  v4 = 4; /*0x5be9eb*/
  do /*0x5bea06*/
  {
    v3 -= 997; /*0x5be9f5*/
    Array::ForEachReverse(v3, 52, 75, (int (__thiscall *)(int))nullsub_56); /*0x5bea00*/
    --v4; /*0x5bea05*/
  }
  while ( v4 ); /*0x5bea06*/
  RadarClass::Destruct((RadarClass *)this); /*0x5bea0a*/
  if ( (a2 & 1) != 0 ) /*0x5bea14*/
    __3_YAXPAX_Z(this); /*0x5bea17*/
  return (RadarClass *)this; /*0x5bea1f*/
}



// ==== 0x005BEA30  MouseClass::loadCursor  this=VectorClass  sig=csp ====
_DWORD *__thiscall MouseClass::loadCursor(MouseClass *this, int a2, int a3)
{
  void *v4; // eax

  this->MouseClass_field_0x4 = 0; /*0x5bea3a*/
  this->MouseClass_field_0x8 = (void *)a2; /*0x5bea41*/
  LOBYTE(this->MouseClass_field_0xC) = 1; /*0x5bea44*/
  BYTE1(this->MouseClass_field_0xC) = 0; /*0x5bea48*/
  this->MouseClass_field_0x0 = &VectorClass<HashObject<unsigned int,unsigned int>>::`vftable'; /*0x5bea4c*/
  if ( a2 ) /*0x5bea52*/
  {
    if ( a3 ) /*0x5bea5a*/
    {
      this->MouseClass_field_0x4 = (void *)a3; /*0x5bea5d*/
    }
    else
    {
      v4 = (void *)__2_YAPAXI_Z(8 * a2); /*0x5bea6e*/
      if ( !v4 ) /*0x5bea78*/
        v4 = 0; /*0x5bea81*/
      this->MouseClass_field_0x4 = v4; /*0x5bea83*/
      BYTE1(this->MouseClass_field_0xC) = 1; /*0x5bea86*/
    }
  }
  this->MouseClass_field_0x0 = &DynamicVectorClass<HashObject<unsigned int,unsigned int>>::`vftable'; /*0x5bea8a*/
  this->MouseClass_field_0x14 = 10; /*0x5bea90*/
  this->MouseClass_field_0x10 = 0; /*0x5bea97*/
  return &this->MouseClass_field_0x0; /*0x5beaa0*/
}



// ==== 0x005BEAB0  sub_5BEAB0  this=-  sig=ida-proto ====
int sub_5BEAB0()
{
  dword_ABF2E8 = 0; /*0x5beab2*/
  dword_ABF2EC = 0; /*0x5beab7*/
  dword_ABF2F0 = 0; /*0x5beabc*/
  dword_ABF2F4 = 0; /*0x5beac1*/
  return 0; /*0x5beac6*/
}



// ==== 0x005BEAD0  sub_5BEAD0  this=-  sig=ida-proto ====
void sub_5BEAD0()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x5beadc*/
  dbl_ABF300 = Math::Sqrt(v0 + v0); /*0x5beaee*/
}



// ==== 0x005BEB00  sub_5BEB00  this=-  sig=ida-proto ====
void sub_5BEB00()
{
  dbl_ABF350 = dbl_ABF300 / 60.0; /*0x5beb0c*/
}



// ==== 0x005BEB20  sub_5BEB20  this=-  sig=ida-proto ====
void sub_5BEB20()
{
  dbl_ABF338 = 1.0 / dbl_ABF350; /*0x5beb2c*/
}



// ==== 0x005BEB40  sub_5BEB40  this=-  sig=ida-proto ====
void sub_5BEB40()
{
  dbl_ABF330 = 0.0174532925199433 * 45.0; /*0x5beb4c*/
}



// ==== 0x005BEB60  sub_5BEB60  this=-  sig=ida-proto ====
void sub_5BEB60()
{
  dbl_ABF308 = 0.0174532925199433 * 60.0; /*0x5beb6c*/
}



// ==== 0x005BEB80  sub_5BEB80  this=-  sig=ida-proto ====
void sub_5BEB80()
{
  dbl_ABF2E0 = 0.0174532925199433 * 90.0; /*0x5beb8c*/
}



// ==== 0x005BEBA0  sub_5BEBA0  this=-  sig=ida-proto ====
__int64 sub_5BEBA0()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_ABF2E0 - dbl_ABF308); /*0x5bebb2*/
  result = Math::RoundToInt(v0 * dbl_ABF300 * 0.5); /*0x5bebc6*/
  dword_ABF358 = result; /*0x5bebcb*/
  return result; /*0x5bebd0*/
}



// ==== 0x005BEBE0  sub_5BEBE0  this=-  sig=ida-proto ====
void sub_5BEBE0()
{
  dbl_ABF310 = Math::ArcTan((double)dword_ABF358 * 0.00390625); /*0x5bebf7*/
}



// ==== 0x005BEC10  sub_5BEC10  this=-  sig=ida-proto ====
void sub_5BEC10()
{
  dbl_ABF328 = Math::ArcTan((double)(2 * dword_ABF358) / dbl_ABF300); /*0x5bec32*/
}



// ==== 0x005BEC40  sub_5BEC40  this=-  sig=ida-proto ====
__int64 sub_5BEC40()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_ABF358) + 0.5); /*0x5bec5b*/
  dword_ABF34C = result; /*0x5bec60*/
  return result; /*0x5bec66*/
}



// ==== 0x005BEC70  sub_5BEC70  this=-  sig=ida-proto ====
int sub_5BEC70()
{
  word_ABF2F8 = 0; /*0x5bec72*/
  word_ABF2FA = 0; /*0x5bec78*/
  return 0; /*0x5bec7e*/
}



// ==== 0x005BEC80  sub_5BEC80  this=-  sig=ida-proto ====
int sub_5BEC80()
{
  dword_ABF318 = 0; /*0x5bec82*/
  dword_ABF31C = 0; /*0x5bec87*/
  dword_ABF320 = 0; /*0x5bec8c*/
  return 0; /*0x5bec91*/
}



// ==== 0x005BECA0  sub_5BECA0  this=-  sig=ida-proto ====
int sub_5BECA0()
{
  dword_ABF348 = 0; /*0x5beca5*/
  dword_ABF340 = 128; /*0x5becaf*/
  dword_ABF344 = 128; /*0x5becb4*/
  return 128; /*0x5becb9*/
}



// ==== 0x005BECC0  ObjectClass::method_5BECC0  this=ObjectClass  sig=csp ====
int __thiscall sub_5BECC0(ObjectClass *this)
{
  int v1; // esi
  int result; // eax
  ObjectClass *v3; // edi
  int v4; // ebp
  int v5; // edx
  char *v6; // eax
  char v7; // bl

  v1 = 0; /*0x5becc9*/
  result = 256 - (_DWORD)this; /*0x5beccb*/
  v3 = this; /*0x5becce*/
  do /*0x5bed0c*/
  {
    v4 = v1 + 1; /*0x5becd4*/
    v5 = v1 + 1; /*0x5becdd*/
    if ( v1 + 1 < 256 ) /*0x5becdf*/
    {
      v6 = (char *)v3 + result + v1 + (_DWORD)this; /*0x5bece5*/
      do /*0x5becf8*/
      {
        v7 = *v6; /*0x5bece7*/
        v6 += 256; /*0x5bece9*/
        *((_BYTE *)&v3->AbstractClass + v5++) = v7; /*0x5becee*/
      }
      while ( v5 < 256 ); /*0x5becf8*/
      result = 256 - (_DWORD)this; /*0x5becfa*/
    }
    ++v1; /*0x5becfe*/
    v3 = (ObjectClass *)((char *)v3 + 256); /*0x5bed00*/
  }
  while ( v4 < 255 ); /*0x5bed0c*/
  return result; /*0x5bed0e*/
}



// ==== 0x005BED40  Movie::Play  this=Movie  sig=csp ====
void __userpurge Movie::Play(
        int a1@<edx>,
        int a2@<ebp>,
        int a3@<edi>,
        const char *a4@<ecx>,
        char a5,
        char a6,
        char a7,
        char a8)
{
  char *v8; // eax
  int v9; // edi
  int v10; // ebp
  int v11; // eax
  MovieClass **VQMovie; // eax
  MovieContext *v13; // esi
  bool v14; // al
  double v15; // st7
  MovieContext v16; // eax
  ObjectClass *v17; // [esp+0h] [ebp-150h]
  int v18; // [esp+0h] [ebp-150h]
  int v19; // [esp+0h] [ebp-150h]
  int v20; // [esp+4h] [ebp-14Ch]
  int *v21; // [esp+8h] [ebp-148h]
  BinkMovie v23; // [esp+1Ch] [ebp-134h] BYREF
  char Str[256]; // [esp+50h] [ebp-100h] BYREF

  if ( Render_Play(a4, Str, 1) && !*(_DWORD *)&dword_A8B238 ) /*0x5bed6a*/
  {
    Timer::PumpMessages(*(Timer **)&stru_87F5F0.__pad_58[296]); /*0x5bed76*/
    v8 = strrchr(Str, 46); /*0x5bed82*/
    if ( !v8 || _strcmpi(v8, aBik) ) /*0x5bed98*/
    {
      Timer::PumpMessages(*(Timer **)&stru_87F5F0.__pad_58[296]); /*0x5bef0b*/
      v9 = 0; /*0x5bef1e*/
      v10 = 0; /*0x5bef20*/
      LOWORD(v11) = Math::RoundToInt(*(float *)&stru_A8EB00.ObjectTypeClass[39] * 255.0); /*0x5bef24*/
      VQMovie = (MovieClass **)LoadVQMovie(Str, (int *)DSurface_Alternate, 0, 0, 0, 0, 0, 0, 0, 0, v11, 1); /*0x5bef56*/
      v13 = (MovieContext *)VQMovie; /*0x5bef5b*/
      if ( VQMovie ) /*0x5bef61*/
      {
        if ( MovieClass::GetWidth(*VQMovie) >= 320 || MovieClass::GetHeight(*(MovieClass **)v13) >= 200 ) /*0x5bef81*/
        {
          v14 = a6 == 1 && LOBYTE(stru_A8EB00.ObjectTypeClass[37]) == 1; /*0x5befba*/
          if ( g_DDraw_AllowStretchBlits == 1 && v14 ) /*0x5befcb*/
          {
            v9 = (int)v13[11]; /*0x5befcd*/
            if ( v9 < *(int *)&DSurface_ViewBounds.__pad_8[16] ) /*0x5befdb*/
            {
              v10 = (int)v13[12]; /*0x5befdd*/
              if ( v10 < *(int *)&DSurface_ViewBounds.__pad_8[20] ) /*0x5befec*/
              {
                v15 = (double)*(int *)&DSurface_ViewBounds.__pad_8[16]; /*0x5befee*/
                v13[15] = *(MovieContext *)&DSurface_ViewBounds.__pad_8[16]; /*0x5beff4*/
                *(_WORD *)v16.__tail_0 = Math::RoundToInt(v15 / (double)v9); /*0x5bf001*/
                v13[13] = 0; /*0x5bf008*/
                v13[16] = v16; /*0x5bf00b*/
                v13[14] = (MovieContext)((*(_DWORD *)&DSurface_ViewBounds.__pad_8[20] - *(_DWORD *)&v16) / 2); /*0x5bf01d*/
                Debug::Log(); /*0x5bf02b*/
              }
            }
          }
          (*(void (__thiscall **)(void *))(*(_DWORD *)stru_887598.lineTrailer + 12))(stru_887598.lineTrailer); /*0x5bf03b*/
          if ( a7 ) /*0x5bf045*/
          {
            (*((void (__thiscall **)(ObjectClass *, _DWORD))g_DSurface_Hidden->AbstractClass + 6))(g_DSurface_Hidden, 0); /*0x5bf050*/
            Frame::Present((int)g_DSurface_Hidden, 0, v10, v9, 0, (int)v17, v20, v21); /*0x5bf05c*/
          }
          if ( !LOBYTE(g_MissionQueueFrame.localVariables[566]) ) /*0x5bf067*/
          {
            AudioFrame::CounterInc(); /*0x5bf069*/
            AudioQueue::IncrementPriority(); /*0x5bf06e*/
            AudioQueue::ReleaseBuffers(); /*0x5bf073*/
            RequestBufferMixer((unsigned int *)g_MixerState, 0x2000); /*0x5bf083*/
            RequestBufferMixer((unsigned int *)g_MixerChannel_Ambient, 0x2000); /*0x5bf093*/
            LOBYTE(g_MissionQueueFrame.localVariables[566]) = 1; /*0x5bf098*/
          }
          sub_406EA0(); /*0x5bf09f*/
          CreateDirectSoundBuffer(44100, 16, 2); /*0x5bf0b0*/
          RenderMovieFrame((int)v13, 1, a1, 0); /*0x5bf0bf*/
          sub_40A850(v17); /*0x5bf0c4*/
          sub_406EC0(); /*0x5bf0c9*/
          if ( LOBYTE(g_MissionQueueFrame.localVariables[566]) ) /*0x5bf0d4*/
          {
            AudioTimer::DecrementAll(); /*0x5bf0d6*/
            ProcessAudioTimer(); /*0x5bf0db*/
            Mixer::RequestAllBuffers(); /*0x5bf0e0*/
            RequestBufferMixer((unsigned int *)g_MixerState, 0x4000); /*0x5bf0f0*/
            RequestBufferMixer((unsigned int *)g_MixerChannel_Ambient, 0x4000); /*0x5bf100*/
            AudioMixer::Pump(); /*0x5bf105*/
            LOBYTE(g_MissionQueueFrame.localVariables[566]) = 0; /*0x5bf10a*/
          }
          MovieContext::Cleanup(v13); /*0x5bf112*/
          BinkMovie::Cleanup((BinkMovie *)v13); /*0x5bf119*/
          __3_YAXPAX_Z(v13); /*0x5bf11f*/
          if ( a5 == 1 ) /*0x5bf130*/
          {
            (*((void (__thiscall **)(ObjectClass *, _DWORD))g_DSurface_Hidden->AbstractClass + 6))(g_DSurface_Hidden, 0); /*0x5bf13b*/
            Frame::Present((int)g_DSurface_Hidden, 0, v10, v9, 0, v19, v20, v21); /*0x5bf147*/
          }
          (*(void (__thiscall **)(void *))(*(_DWORD *)stru_887598.lineTrailer + 16))(stru_887598.lineTrailer); /*0x5bf154*/
          MapClass::MarkForRedraw((GScreenClass *)&stru_87F5F0.__pad_58[416], 2); /*0x5bf15e*/
          Timer::PumpMessages(*(Timer **)&stru_87F5F0.__pad_58[296]); /*0x5bf169*/
        }
        else
        {
          MovieContext::Cleanup(v13); /*0x5bef85*/
          BinkMovie::Cleanup((BinkMovie *)v13); /*0x5bef8c*/
          __3_YAXPAX_Z(v13); /*0x5bef92*/
        }
      }
    }
    else
    {
      Debug::Log(); /*0x5bedad*/
      (*(void (__thiscall **)(void *))(*(_DWORD *)stru_887598.lineTrailer + 12))(stru_887598.lineTrailer); /*0x5bedbd*/
      if ( a7 ) /*0x5bedc7*/
      {
        (*((void (__thiscall **)(ObjectClass *, _DWORD))g_DSurface_Hidden->AbstractClass + 6))(g_DSurface_Hidden, 0); /*0x5bedd2*/
        Frame::Present((int)g_DSurface_Hidden, 0, a2, a3, 0, (int)v17, v20, v21); /*0x5bedde*/
      }
      BinkMovie::Close(&v23, Str); /*0x5bedec*/
      if ( a8 == 1 ) /*0x5bedf9*/
        v23.__pad_0[0] = 1; /*0x5bedfb*/
      if ( !LOBYTE(g_MissionQueueFrame.localVariables[566]) ) /*0x5bee06*/
      {
        AudioFrame::CounterInc(); /*0x5bee08*/
        AudioQueue::IncrementPriority(); /*0x5bee0d*/
        AudioQueue::ReleaseBuffers(); /*0x5bee12*/
        RequestBufferMixer((unsigned int *)g_MixerState, 0x2000); /*0x5bee22*/
        RequestBufferMixer((unsigned int *)g_MixerChannel_Ambient, 0x2000); /*0x5bee32*/
        LOBYTE(g_MissionQueueFrame.localVariables[566]) = 1; /*0x5bee37*/
      }
      sub_406EA0(); /*0x5bee3e*/
      CreateDirectSoundBuffer(44100, 16, 2); /*0x5bee4f*/
      BinkMovie::Play(&v23); /*0x5bee58*/
      sub_40A850(v17); /*0x5bee5d*/
      sub_406EC0(); /*0x5bee62*/
      if ( LOBYTE(g_MissionQueueFrame.localVariables[566]) ) /*0x5bee6d*/
      {
        AudioTimer::DecrementAll(); /*0x5bee6f*/
        ProcessAudioTimer(); /*0x5bee74*/
        Mixer::RequestAllBuffers(); /*0x5bee79*/
        RequestBufferMixer((unsigned int *)g_MixerState, 0x4000); /*0x5bee89*/
        RequestBufferMixer((unsigned int *)g_MixerChannel_Ambient, 0x4000); /*0x5bee99*/
        AudioMixer::Pump(); /*0x5bee9e*/
        LOBYTE(g_MissionQueueFrame.localVariables[566]) = 0; /*0x5beea3*/
      }
      if ( a5 == 1 ) /*0x5beeb1*/
      {
        (*((void (__thiscall **)(ObjectClass *, _DWORD))g_DSurface_Hidden->AbstractClass + 6))(g_DSurface_Hidden, 0); /*0x5beebc*/
        Frame::Present((int)g_DSurface_Hidden, 0, a2, a3, 0, v18, v20, v21); /*0x5beec8*/
      }
      Timer::PumpMessages(*(Timer **)&stru_87F5F0.__pad_58[296]); /*0x5beed3*/
      (*(void (__thiscall **)(void *))(*(_DWORD *)stru_887598.lineTrailer + 16))(stru_887598.lineTrailer); /*0x5beee0*/
      MapClass::MarkForRedraw((GScreenClass *)&stru_87F5F0.__pad_58[416], 2); /*0x5beeea*/
      BinkMovie::Stop(&v23); /*0x5beef3*/
    }
  }
}



// ==== 0x005BF260  Movie::PlayWrapper  this=RandomStruct  sig=csp ====
void __userpurge Movie_PlayWrapper(int a1@<ecx>, int a2@<ebp>, int a3@<edi>, char a4, char a5, char a6)
{
  char v6; // bl

  if ( a1 >= 0 && a1 < dword_ABF3A0 ) /*0x5bf26a*/
  {
    v6 = byte_A8E378; /*0x5bf275*/
    byte_A8E378 = 0; /*0x5bf289*/
    Movie::Play(-1, a2, a3, a4, a5, a6, 0); /*0x5bf296*/
    byte_A8E378 = v6; /*0x5bf29b*/
  }
}



// ==== 0x005BF360  ObjectClass::method_5BF360  this=ObjectClass  sig=csp ====
int __thiscall sub_5BF360(ObjectClass *this)
{
  int result; // eax

  if ( this ) /*0x5bf362*/
    return MessageListClass::AddMessage( /*0x5bf37e*/
             (MessageListClass *)&stru_A8BB1C.__pad_87[189],
             0,
             0,
             (wchar_t *)this->?,
             0,
             16454,
             (int)this->?,
             0);
  return result; /*0x5bf383*/
}



// ==== 0x005BF390  EnqueueAsyncIOMovie  this=RandomStruct  sig=ida-proto ====
void __fastcall sub_5BF390(int a1, char a2)
{
  int v3; // ecx
  _DWORD *v4; // eax
  _BYTE *v5; // esi
  int v6; // eax

  if ( a1 >= 0 && a1 < dword_ABF3A0 ) /*0x5bf3a2*/
  {
    v3 = *((_DWORD *)dword_ABF394 + a1); /*0x5bf3ad*/
    if ( !dword_A8B238 ) /*0x5bf3b7*/
    {
      v4 = CreateMovie(v3, DSurface_Sidebar, 0); /*0x5bf3c5*/
      v5 = v4; /*0x5bf3ca*/
      if ( v4 ) /*0x5bf3ce*/
      {
        (*(void (__thiscall **)(_DWORD *, int, int))(*v4 + 24))(v4, dword_8809D8 - 3, dword_8809DC - 1); /*0x5bf3e5*/
        (*(void (__thiscall **)(_BYTE *, int (*)()))(*(_DWORD *)v5 + 32))(v5, sub_5BF360); /*0x5bf3f1*/
        v5[4] = a2; /*0x5bf3f4*/
        if ( g_AsyncIOState < dword_B45B60 /*0x5bf42b*/
          || (byte_B45B65 || !dword_B45B60)
          && dword_B45B6C > 0
          && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(dword_B45B58 + 8))(
               &dword_B45B58,
               dword_B45B60 + dword_B45B6C,
               0) )
        {
          v6 = g_AsyncIOState++; /*0x5bf438*/
          *((_DWORD *)AsyncIO_Instance + v6) = v5; /*0x5bf447*/
        }
      }
    }
  }
}



// ==== 0x005BF450  AsyncIO::Shutdown  this=AsyncIO  sig=csp ====
char AsyncIO::Shutdown(AsyncIO *this)
{
  int v1; // esi
  _DWORD *i; // eax
  void (__thiscall ***v3)(_DWORD, int); // ecx
  char result; // al

  v1 = 0; /*0x5bf459*/
  for ( i = AsyncIO_Instance; v1 < g_AsyncIOState; ++v1 ) /*0x5bf462*/
  {
    v3 = (void (__thiscall ***)(_DWORD, int))i[v1]; /*0x5bf464*/
    if ( v3 ) /*0x5bf469*/
    {
      (**v3)(v3, 1); /*0x5bf473*/
      i = AsyncIO_Instance; /*0x5bf475*/
    }
  }
  g_AsyncIOState = 0; /*0x5bf487*/
  if ( i && byte_B45B65 ) /*0x5bf495*/
  {
    __3_YAXPAX_Z(i); /*0x5bf498*/
    AsyncIO_Instance = 0; /*0x5bf4a0*/
  }
  result = g_MissionQueueFrame.localVariables[566]; /*0x5bf4a6*/
  byte_B45B65 = 0; /*0x5bf4ab*/
  dword_B45B60 = 0; /*0x5bf4b3*/
  if ( LOBYTE(g_MissionQueueFrame.localVariables[566]) ) /*0x5bf4b9*/
  {
    AudioTimer::DecrementAll(); /*0x5bf4bb*/
    ProcessAudioTimer(); /*0x5bf4c0*/
    Mixer::RequestAllBuffers(); /*0x5bf4c5*/
    RequestBufferMixer((unsigned int *)g_MixerState, 0x4000); /*0x5bf4d5*/
    RequestBufferMixer((unsigned int *)g_MixerChannel_Ambient, 0x4000); /*0x5bf4e5*/
    result = AudioMixer::Pump(); /*0x5bf4ea*/
    LOBYTE(g_MissionQueueFrame.localVariables[566]) = 0; /*0x5bf4ef*/
  }
  return result; /*0x5bf4f5*/
}



// ==== 0x005BF500  AsyncIO::Read  this=AsyncIO  sig=csp ====
int __thiscall AsyncIO::Read(AsyncIO *this)
{
  int result; // eax

  result = g_AsyncIOState; /*0x5bf500*/
  if ( g_AsyncIOState > 0 ) /*0x5bf507*/
    return (*(int (__thiscall **)(_DWORD, AsyncIO *))(**(_DWORD **)AsyncIO_Instance + 12))( /*0x5bf515*/
             *(_DWORD *)AsyncIO_Instance,
             this);
  return result; /*0x5bf518*/
}



// ==== 0x005BF530  Game_Process  this=-  sig=ida-proto ====
char sub_5BF530()
{
  char result; // al

  result = byte_ABF35C; /*0x5bf530*/
  if ( byte_ABF35C ) /*0x5bf537*/
  {
    AudioTimer::DecrementAll(); /*0x5bf539*/
    ProcessAudioTimer(); /*0x5bf53e*/
    Mixer::RequestAllBuffers(); /*0x5bf543*/
    RequestBufferMixer((unsigned int *)g_MixerState, 0x4000); /*0x5bf553*/
    RequestBufferMixer((unsigned int *)g_MixerChannel_Ambient, 0x4000); /*0x5bf563*/
    result = AudioMixer::Pump(); /*0x5bf568*/
    byte_ABF35C = 0; /*0x5bf56d*/
  }
  return result; /*0x5bf574*/
}



// ==== 0x005BF580  Map_Process  this=-  sig=ida-proto ====
char sub_5BF580()
{
  char result; // al

  result = byte_ABF35C; /*0x5bf580*/
  if ( !byte_ABF35C ) /*0x5bf587*/
  {
    AudioFrame::CounterInc(); /*0x5bf589*/
    AudioQueue::IncrementPriority(); /*0x5bf58e*/
    AudioQueue::ReleaseBuffers(); /*0x5bf593*/
    RequestBufferMixer((unsigned int *)g_MixerState, 0x2000); /*0x5bf5a3*/
    result = RequestBufferMixer((unsigned int *)g_MixerChannel_Ambient, 0x2000); /*0x5bf5b3*/
    byte_ABF35C = 1; /*0x5bf5b8*/
  }
  return result; /*0x5bf5bf*/
}



// ==== 0x005BF5C0  sub_5BF5C0  this=-  sig=ida-proto ====
int sub_5BF5C0()
{
  dword_ABF368 = 0; /*0x5bf5c2*/
  dword_ABF36C = 0; /*0x5bf5c7*/
  dword_ABF370 = 0; /*0x5bf5cc*/
  dword_ABF374 = 0; /*0x5bf5d1*/
  return 0; /*0x5bf5d6*/
}



// ==== 0x005BF5E0  sub_5BF5E0  this=-  sig=ida-proto ====
void sub_5BF5E0()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x5bf5ec*/
  dbl_ABF380 = Math::Sqrt(v0 + v0); /*0x5bf5fe*/
}



// ==== 0x005BF610  sub_5BF610  this=-  sig=ida-proto ====
void sub_5BF610()
{
  dbl_ABF3E8 = dbl_ABF380 / 60.0; /*0x5bf61c*/
}



// ==== 0x005BF630  sub_5BF630  this=-  sig=ida-proto ====
void sub_5BF630()
{
  dbl_ABF3D0 = 1.0 / dbl_ABF3E8; /*0x5bf63c*/
}



// ==== 0x005BF650  sub_5BF650  this=-  sig=ida-proto ====
void sub_5BF650()
{
  dbl_ABF3C8 = 0.0174532925199433 * 45.0; /*0x5bf65c*/
}



// ==== 0x005BF670  sub_5BF670  this=-  sig=ida-proto ====
void sub_5BF670()
{
  dbl_ABF388 = 0.0174532925199433 * 60.0; /*0x5bf67c*/
}



// ==== 0x005BF690  sub_5BF690  this=-  sig=ida-proto ====
void sub_5BF690()
{
  dbl_ABF360 = 0.0174532925199433 * 90.0; /*0x5bf69c*/
}



// ==== 0x005BF6B0  sub_5BF6B0  this=-  sig=ida-proto ====
__int64 sub_5BF6B0()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_ABF360 - dbl_ABF388); /*0x5bf6c2*/
  result = Math::RoundToInt(v0 * dbl_ABF380 * 0.5); /*0x5bf6d6*/
  dword_ABF3F0 = result; /*0x5bf6db*/
  return result; /*0x5bf6e0*/
}



// ==== 0x005BF6F0  sub_5BF6F0  this=-  sig=ida-proto ====
void sub_5BF6F0()
{
  dbl_ABF3A8 = Math::ArcTan((double)dword_ABF3F0 * 0.00390625); /*0x5bf707*/
}



// ==== 0x005BF720  sub_5BF720  this=-  sig=ida-proto ====
void sub_5BF720()
{
  dbl_ABF3C0 = Math::ArcTan((double)(2 * dword_ABF3F0) / dbl_ABF380); /*0x5bf742*/
}



// ==== 0x005BF750  sub_5BF750  this=-  sig=ida-proto ====
__int64 sub_5BF750()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_ABF3F0) + 0.5); /*0x5bf76b*/
  dword_ABF3E4 = result; /*0x5bf770*/
  return result; /*0x5bf776*/
}



// ==== 0x005BF780  sub_5BF780  this=-  sig=ida-proto ====
int sub_5BF780()
{
  word_ABF378 = 0; /*0x5bf782*/
  word_ABF37A = 0; /*0x5bf788*/
  return 0; /*0x5bf78e*/
}



// ==== 0x005BF790  sub_5BF790  this=-  sig=ida-proto ====
int sub_5BF790()
{
  dword_ABF3B0 = 0; /*0x5bf792*/
  dword_ABF3B4 = 0; /*0x5bf797*/
  dword_ABF3B8 = 0; /*0x5bf79c*/
  return 0; /*0x5bf7a1*/
}



// ==== 0x005BF7B0  sub_5BF7B0  this=-  sig=ida-proto ====
int sub_5BF7B0()
{
  dword_ABF3E0 = 0; /*0x5bf7b5*/
  dword_ABF3D8 = 128; /*0x5bf7bf*/
  dword_ABF3DC = 128; /*0x5bf7c4*/
  return 128; /*0x5bf7c9*/
}



// ==== 0x005BF7D0  sub_5BF7D0  this=-  sig=ida-proto ====
int sub_5BF7D0()
{
  dword_ABF394 = 0; /*0x5bf7d7*/
  dword_ABF398 = 0; /*0x5bf7dc*/
  byte_ABF39C = 1; /*0x5bf7e1*/
  byte_ABF39D = 0; /*0x5bf7e8*/
  dword_ABF390 = (int)&DynamicVectorClass<char const *>::`vftable'; /*0x5bf7ed*/
  dword_ABF3A4 = 10; /*0x5bf7f7*/
  dword_ABF3A0 = 0; /*0x5bf801*/
  return atexit(sub_5BF810); /*0x5bf80c*/
}



// ==== 0x005BF810  sub_5BF810  this=-  sig=ida-proto ====
void __cdecl sub_5BF810()
{
  dword_ABF390 = (int)&VectorClass<char const *>::`vftable'; /*0x5bf818*/
  if ( dword_ABF394 && byte_ABF39D ) /*0x5bf82c*/
  {
    __3_YAXPAX_Z(dword_ABF394); /*0x5bf82f*/
    dword_ABF394 = 0; /*0x5bf837*/
  }
  byte_ABF39D = 0; /*0x5bf83d*/
  dword_ABF398 = 0; /*0x5bf843*/
}



// ==== 0x005BF850  sub_5BF850  this=-  sig=ida-proto ====
int sub_5BF850()
{
  int v0; // esi
  int v1; // edi
  int *v2; // ebx
  int v3; // eax
  int v4; // ebp
  int v5; // eax
  unsigned int v7; // [esp-Ch] [ebp-1Ch]
  int v8; // [esp-8h] [ebp-18h]

  v0 = *(_DWORD *)(dword_ABF3F4 + 8); /*0x5bf858*/
  v1 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)v0 + 92))(v0, 0); /*0x5bf869*/
  v2 = *(int **)dword_ABF3F4; /*0x5bf873*/
  v8 = *(_DWORD *)(dword_ABF3F4 + 40); /*0x5bf87a*/
  v7 = *(_DWORD *)(dword_ABF3F4 + 36); /*0x5bf87b*/
  v3 = (*(int (__thiscall **)(int))(*(_DWORD *)v0 + 128))(v0); /*0x5bf87e*/
  v4 = (*(int (__thiscall **)(int, int))(*(_DWORD *)v0 + 116))(v0, v3); /*0x5bf88c*/
  v5 = (*(int (__thiscall **)(int))(*(_DWORD *)v0 + 112))(v0); /*0x5bf892*/
  Render_Load_759EB0(v2, 0, v4 / v5, v7, v8, 0); /*0x5bf8a1*/
  return v1; /*0x5bf8a8*/
}



// ==== 0x005BF8B0  ObjectClass::method_5BF8B0  this=ObjectClass  sig=csp ====
int sub_5BF8B0(ObjectClass *this)
{
  return (*(int (__thiscall **)(_DWORD, ObjectClass *))(**(_DWORD **)(g_MissionQueueFrame.localVariables[604] + 8) + 96))(
           *(_DWORD *)(g_MissionQueueFrame.localVariables[604] + 8),
           this);
}



// ==== 0x005BF8C0  ObjectClass::method_5BF8C0  this=ObjectClass  sig=csp ====
char sub_5BF8C0(ObjectClass *this)
{
  char result; // al
  int v2; // edx
  int v3; // ecx
  int v4; // edi
  _DWORD v5[4]; // [esp+0h] [ebp-20h] BYREF
  struct tagRECT Rect; // [esp+10h] [ebp-10h] BYREF

  result = TestBitArray(15); /*0x5bf8c8*/
  if ( !result ) /*0x5bf8cf*/
  {
    GetClientRect(g_hWnd, &Rect); /*0x5bf8e0*/
    ClientToScreen(g_hWnd, (LPPOINT)&Rect); /*0x5bf8f1*/
    v2 = *(_DWORD *)(g_MissionQueueFrame.localVariables[604] + 64); /*0x5bf90c*/
    v3 = Rect.top + *(_DWORD *)(g_MissionQueueFrame.localVariables[604] + 56); /*0x5bf90f*/
    v4 = *(_DWORD *)(g_MissionQueueFrame.localVariables[604] + 52); /*0x5bf911*/
    v5[2] = *(_DWORD *)(g_MissionQueueFrame.localVariables[604] + 60); /*0x5bf914*/
    v5[1] = v3; /*0x5bf91a*/
    v5[0] = Rect.left + v4; /*0x5bf924*/
    v5[3] = v2; /*0x5bf928*/
    return (*((int (__thiscall **)(DSurface *, _DWORD *, _DWORD, int, _DWORD, int))g_DSurface_Primary->DSurface_field_0x0 /*0x5bf93d*/
            + 2))(
             g_DSurface_Primary,
             v5,
             *(_DWORD *)(g_MissionQueueFrame.localVariables[604] + 8),
             g_MissionQueueFrame.localVariables[604] + 36,
             0,
             1);
  }
  return result; /*0x5bf943*/
}



// ==== 0x005BF950  ObjectClass::method_5BF950  this=ObjectClass  sig=csp ====
char __usercall sub_5BF950@<al>(ObjectClass *this, int a2@<edi>, int a3@<esi>)
{
  char result; // al
  _DWORD *v4; // eax
  int v5; // esi
  _DWORD *v6; // eax
  int v7; // eax
  int v8; // edx
  int v9; // esi
  int v10; // edi
  _DWORD v11[2]; // [esp+24h] [ebp-44h] BYREF
  int v12; // [esp+2Ch] [ebp-3Ch]
  int v13; // [esp+30h] [ebp-38h]
  _DWORD v14[4]; // [esp+34h] [ebp-34h] BYREF
  _DWORD v15[4]; // [esp+44h] [ebp-24h] BYREF
  struct tagRECT Rect; // [esp+54h] [ebp-14h] BYREF
  _BYTE v17[4]; // [esp+64h] [ebp-4h] BYREF

  result = TestBitArray(15); /*0x5bf958*/
  if ( !result ) /*0x5bf95f*/
  {
    (*((void (__thiscall **)(ObjectClass *, int, _DWORD, int, _DWORD, int, int, int))g_DSurface_Hidden->AbstractClass + 2))( /*0x5bf983*/
      g_DSurface_Hidden,
      g_MissionQueueFrame.localVariables[604] + 36,
      *(_DWORD *)(g_MissionQueueFrame.localVariables[604] + 8),
      g_MissionQueueFrame.localVariables[604] + 36,
      0,
      1,
      a2,
      a3);
    v4 = *(_DWORD **)(g_MissionQueueFrame.localVariables[604] + 72); /*0x5bf98c*/
    if ( v4 ) /*0x5bf991*/
    {
      if ( *v4 ) /*0x5bf997*/
      {
        v5 = v4[4]; /*0x5bf9a0*/
        v6 = (_DWORD *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)v5 + 120))(v5, v17); /*0x5bf9ac*/
        v11[0] = *v6; /*0x5bf9b1*/
        v11[1] = v6[1]; /*0x5bf9b8*/
        v12 = v6[2]; /*0x5bf9bf*/
        v13 = v6[3]; /*0x5bf9cc*/
        v14[0] = ((*((int (__thiscall **)(ObjectClass *))g_DSurface_Hidden->AbstractClass + 31))(g_DSurface_Hidden) - v12) /*0x5bf9e6*/
               / 2;
        v7 = (*((int (__thiscall **)(ObjectClass *))g_DSurface_Hidden->AbstractClass + 32))(g_DSurface_Hidden); /*0x5bf9ec*/
        v14[2] = v12; /*0x5bf9fc*/
        v14[1] = v7 - v13; /*0x5bfa04*/
        v14[3] = v13; /*0x5bfa15*/
        (*((void (__thiscall **)(ObjectClass *, _DWORD *, int, _DWORD *, int, int))g_DSurface_Hidden->AbstractClass + 2))( /*0x5bfa21*/
          g_DSurface_Hidden,
          v14,
          v5,
          v11,
          1,
          1);
      }
    }
    GetClientRect(g_hWnd, &Rect); /*0x5bfa30*/
    ClientToScreen(g_hWnd, (LPPOINT)&Rect); /*0x5bfa41*/
    v8 = *(_DWORD *)(g_MissionQueueFrame.localVariables[604] + 64); /*0x5bfa59*/
    v9 = *(_DWORD *)(g_MissionQueueFrame.localVariables[604] + 60); /*0x5bfa5c*/
    v10 = *(_DWORD *)(g_MissionQueueFrame.localVariables[604] + 52); /*0x5bfa61*/
    v15[1] = Rect.top + *(_DWORD *)(g_MissionQueueFrame.localVariables[604] + 56); /*0x5bfa6f*/
    v15[0] = Rect.left + v10; /*0x5bfa7c*/
    v15[2] = v9; /*0x5bfa80*/
    v15[3] = v8; /*0x5bfa84*/
    return (*((int (__thiscall **)(DSurface *, _DWORD *, ObjectClass *))g_DSurface_Primary->DSurface_field_0x0 + 2))( /*0x5bfa8f*/
             g_DSurface_Primary,
             v15,
             g_DSurface_Hidden);
  }
  return result; /*0x5bfa95*/
}



// ==== 0x005BFAA0  LoadVQMovie  this=ObjectClass  sig=csp ====
_DWORD *__fastcall LoadVQMovie(
        char *Source,
        int *a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        char a12)
{
  int v14; // eax
  int v15; // esi
  _DWORD *v16; // eax
  char v17; // al
  int v18; // eax
  char *v19; // eax
  char *v20; // eax
  int Height; // ebp
  int v23; // kr04_4
  int v24; // eax
  int v25; // edx
  int v26; // ebp
  _DWORD *v27; // eax
  int v28; // eax
  int v29; // ecx
  int v30; // ebp
  int v31; // ecx
  int v32; // eax
  int v33; // edx
  int v34; // ebp
  int v35; // eax
  int Status; // eax
  int v37; // ebx
  int v38; // eax
  _DWORD *SurfaceTracker; // eax
  unsigned int v40; // [esp-Ch] [ebp-BCh]
  int v41; // [esp+10h] [ebp-A0h]
  int Width; // [esp+10h] [ebp-A0h]
  char (__usercall *v43)@<al>(ObjectClass *, int@<edi>, int@<esi>); // [esp+14h] [ebp-9Ch]
  int v44; // [esp+14h] [ebp-9Ch]
  bool v45; // [esp+1Bh] [ebp-95h]
  int v46; // [esp+1Ch] [ebp-94h] BYREF
  int v47; // [esp+20h] [ebp-90h]
  int v48; // [esp+24h] [ebp-8Ch]
  int v49; // [esp+28h] [ebp-88h]
  int _759EA0; // [esp+2Ch] [ebp-84h]
  char *FullPath; // [esp+30h] [ebp-80h]
  int v52[4]; // [esp+34h] [ebp-7Ch] BYREF
  CCFileClass v53; // [esp+44h] [ebp-6Ch] BYREF
  int v54[3]; // [esp+9Ch] [ebp-14h] BYREF
  int v55; // [esp+A8h] [ebp-8h]

  FullPath = Source; /*0x5bfab2*/
  v43 = 0; /*0x5bfab6*/
  v14 = __2_YAPAXI_Z(0x4Cu); /*0x5bfaba*/
  v15 = v14; /*0x5bfabf*/
  if ( !v14 ) /*0x5bfac6*/
    return 0; /*0x5bfac6*/
  *(_DWORD *)v14 = 0; /*0x5bfacf*/
  *(_DWORD *)(v14 + 4) = -1; /*0x5bfad1*/
  *(_DWORD *)(v14 + 8) = 0; /*0x5bfad8*/
  *(_DWORD *)(v14 + 12) = 0; /*0x5bfadb*/
  *(_DWORD *)(v14 + 16) = 0; /*0x5bfade*/
  *(_DWORD *)(v14 + 20) = 0; /*0x5bfae1*/
  *(_DWORD *)(v14 + 24) = 0; /*0x5bfae4*/
  *(_DWORD *)(v14 + 28) = 1; /*0x5bfae7*/
  *(_DWORD *)(v14 + 32) = 0; /*0x5bfaee*/
  *(_DWORD *)(v14 + 36) = 0; /*0x5bfaf5*/
  *(_DWORD *)(v14 + 40) = 0; /*0x5bfaf8*/
  *(_DWORD *)(v14 + 44) = 0; /*0x5bfafb*/
  *(_DWORD *)(v14 + 48) = 0; /*0x5bfafe*/
  Rect::Set((Rect *)(v14 + 52), 0, 0, 0, 0); /*0x5bfb01*/
  *(_BYTE *)(v15 + 68) = 0; /*0x5bfb0a*/
  *(_BYTE *)(v15 + 69) = 0; /*0x5bfb0e*/
  *(_DWORD *)(v15 + 72) = 0; /*0x5bfb11*/
  v16 = CCFileClass::Construct(&v53, Source); /*0x5bfb14*/
  v17 = (*(int (__thiscall **)(_DWORD *, _DWORD))(*v16 + 20))(v16, 0); /*0x5bfb1e*/
  *(_DWORD *)v53.CDFileClass = &CCFileClass::`vftable'; /*0x5bfb2a*/
  v45 = v17 == 0; /*0x5bfb32*/
  v55 = 0; /*0x5bfb37*/
  Vector::Clear((int)v54); /*0x5bfb3e*/
  *(_DWORD *)v53.CDFileClass = &off_7E1668; /*0x5bfb47*/
  BufferIOFileClass::Dtor((BufferIOFileClass *)&v53); /*0x5bfb4f*/
  if ( v45 ) /*0x5bfb58*/
    return 0; /*0x5bfb58*/
  v41 = 0; /*0x5bfb5e*/
  if ( !Audio::IsSoundEnabled() ) /*0x5bfb62*/
    ResetAnimSystem(3); /*0x5bfb70*/
  if ( (unsigned __int8)TestBitArray(0) ) /*0x5bfb77*/
    v41 = 1; /*0x5bfb80*/
  if ( g_MissionQueueFrame.localVariables[606] == 1 ) /*0x5bfb8f*/
  {
    v18 = v41; /*0x5bfb91*/
    LOBYTE(v18) = v41 | 2; /*0x5bfb95*/
    v41 = v18; /*0x5bfb97*/
  }
  if ( a12 == 1 ) /*0x5bfba3*/
    v43 = sub_5BF950; /*0x5bfba5*/
  v19 = (char *)__2_YAPAXI_Z(0x554u); /*0x5bfbb2*/
  if ( v19 ) /*0x5bfbbc*/
    v20 = Stream::InitializeBinkAudio(v19, Source, v41, (int)sub_5BF850, (int)sub_5BF8B0, (int)v43, -1, -1); /*0x5bfbd9*/
  else
    v20 = 0; /*0x5bfbe0*/
  *(_DWORD *)v15 = v20; /*0x5bfbe4*/
  if ( !v20 || (Render_Load_759830((ObjectClass *)v20, a11), !Render_Load_7597A0(*(ObjectClass **)v15)) ) /*0x5bfbf9*/
  {
    BinkMovie::Cleanup((BinkMovie *)v15); /*0x5bfc04*/
    __3_YAXPAX_Z((void *)v15); /*0x5bfc0a*/
    return 0; /*0x5bfc1e*/
  }
  Width = MovieClass::GetWidth(*(MovieClass **)v15); /*0x5bfc2a*/
  Height = MovieClass::GetHeight(*(MovieClass **)v15); /*0x5bfc35*/
  _759EA0 = Render_Load_759EA0(*(ObjectClass **)v15); /*0x5bfc43*/
  if ( _759EA0 == 4 ) /*0x5bfc47*/
    _759EA0 = 1; /*0x5bfc49*/
  if ( !a3 && !a4 && !a5 && !a6 ) /*0x5bfc73*/
  {
    a3 = 0; /*0x5bfc7b*/
    a4 = 0; /*0x5bfc82*/
    a5 = Width; /*0x5bfc89*/
    a6 = Height; /*0x5bfc90*/
  }
  if ( !a7 && !a8 && !a9 && !a10 ) /*0x5bfcb9*/
  {
    v23 = (*(int (__thiscall **)(int *))(*a2 + 128))(a2) - Height; /*0x5bfcca*/
    v24 = (*(int (__thiscall **)(int *))(*a2 + 124))(a2); /*0x5bfcd2*/
    a8 = v23 / 2; /*0x5bfcd9*/
    a9 = Width; /*0x5bfce2*/
    a7 = (v24 - Width) / 2; /*0x5bfcee*/
    a10 = Height; /*0x5bfcf9*/
  }
  v25 = *a2; /*0x5bfd06*/
  v52[2] = Width; /*0x5bfd08*/
  v52[0] = 0; /*0x5bfd0e*/
  v52[1] = 0; /*0x5bfd12*/
  v52[3] = Height; /*0x5bfd16*/
  v44 = (*(int (__thiscall **)(int *))(v25 + 128))(a2); /*0x5bfd20*/
  v26 = (*(int (__thiscall **)(int *))(*a2 + 124))(a2); /*0x5bfd3d*/
  v27 = ClipRectIntersection(&v46, &a3, v52, 0, 0); /*0x5bfd3f*/
  *(_DWORD *)(v15 + 36) = *v27; /*0x5bfd46*/
  *(_DWORD *)(v15 + 40) = v27[1]; /*0x5bfd4c*/
  *(_DWORD *)(v15 + 44) = v27[2]; /*0x5bfd54*/
  v28 = v27[3]; /*0x5bfd59*/
  v47 = 0; /*0x5bfd5c*/
  *(_DWORD *)(v15 + 48) = v28; /*0x5bfd64*/
  v48 = v26; /*0x5bfd69*/
  v46 = 0; /*0x5bfd6d*/
  v49 = v44; /*0x5bfd7a*/
  if ( a9 <= 0 || a10 <= 0 || v26 <= 0 || v44 <= 0 ) /*0x5bfd9d*/
    goto LABEL_47; /*0x5bfd9d*/
  v29 = a7; /*0x5bfda3*/
  if ( a7 > 0 ) /*0x5bfdac*/
  {
    v46 = a7; /*0x5bfdb0*/
    v48 = v26 - a7; /*0x5bfdb4*/
  }
  if ( v48 < 1 ) /*0x5bfdbd*/
    goto LABEL_47; /*0x5bfdbd*/
  if ( v47 < a8 ) /*0x5bfdd0*/
  {
    v30 = v47 - a8; /*0x5bfdd6*/
    v47 = a8; /*0x5bfdda*/
    v49 += v30; /*0x5bfdde*/
    v29 = a7; /*0x5bfde2*/
  }
  if ( v49 < 1 ) /*0x5bfdee*/
    goto LABEL_47; /*0x5bfdee*/
  if ( v48 + v46 > a9 + v29 ) /*0x5bfe05*/
    v48 = a7 + a9 - v46; /*0x5bfe16*/
  if ( v48 < 1 ) /*0x5bfe1f*/
    goto LABEL_47; /*0x5bfe1f*/
  v31 = v47; /*0x5bfe35*/
  if ( v47 + v49 > a10 + a8 ) /*0x5bfe3d*/
    v49 = a10 + a8 - v47; /*0x5bfe51*/
  if ( v49 < 1 ) /*0x5bfe5a*/
  {
LABEL_47:
    v32 = 0; /*0x5bfe6a*/
    v33 = 0; /*0x5bfe6c*/
    v31 = 0; /*0x5bfe6e*/
    v34 = 0; /*0x5bfe70*/
  }
  else
  {
    v32 = v46; /*0x5bfe5c*/
    v33 = v48; /*0x5bfe60*/
    v34 = v49; /*0x5bfe64*/
  }
  *(_DWORD *)(v15 + 52) = v32; /*0x5bfe72*/
  v35 = _759EA0; /*0x5bfe75*/
  *(_DWORD *)(v15 + 56) = v31; /*0x5bfe79*/
  *(_DWORD *)(v15 + 60) = v33; /*0x5bfe7c*/
  *(_DWORD *)(v15 + 64) = v34; /*0x5bfe82*/
  if ( v35 == 1 || v35 == 4 ) /*0x5bfe8a*/
  {
    Status = DDraw::GetStatus(); /*0x5bfe8c*/
    Render_Load_759F20(*(ObjectClass **)v15, Status); /*0x5bfe94*/
  }
  *(_DWORD *)(v15 + 8) = a2; /*0x5bfe99*/
  v40 = (*(int (__thiscall **)(int *))(*a2 + 128))(a2); /*0x5bfeac*/
  v37 = (*(int (__thiscall **)(int *))(*a2 + 116))(a2); /*0x5bfeb6*/
  v38 = (*(int (__thiscall **)(int *))(*a2 + 112))(a2); /*0x5bfeb8*/
  Render_Load_759EB0(*(ObjectClass **)v15, 0, v37 / v38, v40, 0, 0); /*0x5bfec7*/
  SurfaceTracker = BinkMovie::CreateSurfaceTracker(FullPath); /*0x5bfed0*/
  *(_DWORD *)(v15 + 72) = SurfaceTracker; /*0x5bfed7*/
  if ( SurfaceTracker ) /*0x5bfeda*/
    **(_DWORD **)v15 = SurfaceTracker; /*0x5bfede*/
  *(_BYTE *)(v15 + 69) = 1; /*0x5bfee0*/
  return (_DWORD *)v15; /*0x5bfc12*/
}



// ==== 0x005BFF00  MovieContext::Cleanup  this=MovieContext  sig=csp ====
int __thiscall MovieContext::Cleanup(MovieContext *this)
{
  DSurface *v2; // ecx
  int result; // eax
  void *v4; // edi
  void *v5; // edi

  if ( this ) /*0x5bff05*/
  {
    v2 = (DSurface *)*this; /*0x5bff07*/
    if ( v2 ) /*0x5bff0c*/
    {
      LOBYTE(result) = DSurface::FlipIfNeeded(v2); /*0x5bff0e*/
      v4 = (void *)*this; /*0x5bff13*/
      if ( *this ) /*0x5bff13*/
      {
        CCFileClass::Cleanup(*(CCFileClass **)this); /*0x5bff1b*/
        __3_YAXPAX_Z(v4); /*0x5bff21*/
      }
      *this = 0; /*0x5bff29*/
    }
    v5 = (void *)*((_DWORD *)this + 18); /*0x5bff2f*/
    if ( v5 ) /*0x5bff34*/
    {
      BinkMovie::FreeSurfaceTracker(*((BinkMovie **)this + 18)); /*0x5bff38*/
      __3_YAXPAX_Z(v5); /*0x5bff3e*/
      *((_DWORD *)this + 18) = 0; /*0x5bff46*/
    }
    *((_BYTE *)this + 69) = 0; /*0x5bff4d*/
  }
  return result; /*0x5bff52*/
}



// ==== 0x005BFF60  RenderMovieFrame  this=-  sig=csp ====
char __fastcall Movie_RenderFrame(int a1, char a2, int a3, char a4)
{
  char result; // al
  int v6; // ebx
  int v7; // ebp
  int v8; // edi
  bool v9; // zf
  int v10; // [esp-10h] [ebp-1Ch]
  int v12; // [esp+8h] [ebp-4h]

  result = dword_ABF3F4; /*0x5bff63*/
  if ( !dword_ABF3F4 ) /*0x5bff71*/
  {
    *(_BYTE *)(a1 + 69) = 1; /*0x5bff7a*/
    dword_ABF3F4 = a1; /*0x5bff83*/
    v12 = 0; /*0x5bff89*/
    v6 = -1; /*0x5bff91*/
    v7 = 0; /*0x5bff94*/
    if ( (unsigned __int8)TestBitArray(2) ) /*0x5bff96*/
    {
      v12 = *(_DWORD *)(a1 + 16); /*0x5bffa2*/
      if ( *(int *)(a1 + 20) >= 0 ) /*0x5bffab*/
        v6 = *(_DWORD *)(a1 + 20); /*0x5bffad*/
      v7 = *(_DWORD *)(a1 + 28); /*0x5bffb2*/
      if ( *(_DWORD *)(a1 + 12) == 1 ) /*0x5bffb8*/
      {
        v10 = *(_DWORD *)(a1 + 28); /*0x5bffbd*/
        if ( *(_DWORD *)(a1 + 24) ) /*0x5bffba*/
          Render_Render_759880(v12, v6, v10); /*0x5bffd7*/
        else
          Render_Render_759850(*(_DWORD *)(a1 + 32), v10); /*0x5bffc8*/
      }
    }
    if ( a2 ) /*0x5bffe2*/
      (*(void (__thiscall **)(int))(*(_DWORD *)dword_887640 + 12))(dword_887640); /*0x5bffec*/
    if ( a3 != -1 ) /*0x5bfff6*/
      Theme::QueueSong(a3); /*0x5bfffe*/
    do /*0x5c0049*/
    {
      if ( *(_DWORD *)(a1 + 12) == 2 || v12 ) /*0x5c000f*/
        AbstractClass::updateBuildingState(v12); /*0x5c0018*/
      v8 = MovieClass::RenderLoop(v6, a4); /*0x5c002a*/
      if ( *(_DWORD *)(a1 + 12) == 1 ) /*0x5c0032*/
        v7 = 0; /*0x5c0034*/
      AbstractClass::finalizeConstruction(*(_DWORD *)a1); /*0x5c0038*/
      if ( v8 == 1 ) /*0x5c0040*/
        break; /*0x5c0040*/
      v9 = v7 == 0; /*0x5c0042*/
      if ( v7 > 0 ) /*0x5c0044*/
        v9 = --v7 == 0; /*0x5c0047*/
    }
    while ( !v9 ); /*0x5c0049*/
    result = a2; /*0x5c004b*/
    if ( a2 ) /*0x5c0054*/
      result = (*(int (__thiscall **)(int))(*(_DWORD *)dword_887640 + 16))(dword_887640); /*0x5c005e*/
    dword_ABF3F4 = 0; /*0x5c0061*/
  }
  return result; /*0x5c006b*/
}


