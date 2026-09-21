// GENERATED raw decompilation, this-relative refs rewritten to this->Member
// by tools/csp_export/rewrite_member_refs.py (mechanical, CSP member table).
// REFERENCE ONLY - not compiled. Width-matched rewrites; unmatched kept raw.

// ==== 0x00490400  ConvertClass::method  this=ConvertClass  sig=csp ====
int __thiscall sub_490400(int this)
{
  void *v2; // ecx
  int result; // eax
  int v4; // [esp+4h] [ebp-4h] BYREF

  *(_DWORD *)this = &vt_ConvertClass; /*0x490404*/
  COMClass::RegisterAll((_DWORD *)this); /*0x49040a*/
  __3_YAXPAX_Z(*(void **)(this + 368)); /*0x490416*/
  v2 = *(void **)(this + 376); /*0x49041b*/
  *(_DWORD *)(this + 368) = 0; /*0x490421*/
  __3_YAXPAX_Z(v2); /*0x49042c*/
  *(_DWORD *)(this + 376) = 0; /*0x490434*/
  v4 = this; /*0x49044d*/
  result = (*(int (__thiscall **)(int *, int *))(MEMORY[0x89ECF8] + 16))(&MEMORY[0x89ECF8], &v4); /*0x490451*/
  if ( result != -1 && result < MEMORY[0x89ED08] && result < --MEMORY[0x89ED08] ) /*0x49046d*/
  {
    do /*0x490485*/
    {
      ++result; /*0x490475*/
      *((_DWORD *)MEMORY[0x89ECFC] + result - 1) = *((_DWORD *)MEMORY[0x89ECFC] + result); /*0x490479*/
    }
    while ( result < MEMORY[0x89ED08] ); /*0x490485*/
  }
  return result; /*0x490457*/
}


// ==== 0x00490490  COMClass::RegisterAll  this=ConvertClass  sig=csp ====
int __thiscall COMClass_RegisterAll(_DWORD *this)
{
  int (__thiscall ***v2)(_DWORD, int); // ecx
  int result; // eax
  int (__thiscall ***v4)(_DWORD, int); // ecx
  int (__thiscall ***v5)(_DWORD, int); // ecx
  int (__thiscall ***v6)(_DWORD, int); // ecx
  int (__thiscall ***v7)(_DWORD, int); // ecx
  int (__thiscall ***v8)(_DWORD, int); // ecx
  int (__thiscall ***v9)(_DWORD, int); // ecx
  int (__thiscall ***v10)(_DWORD, int); // ecx
  int (__thiscall ***v11)(_DWORD, int); // ecx
  int (__thiscall ***v12)(_DWORD, int); // ecx
  int (__thiscall ***v13)(_DWORD, int); // ecx
  int (__thiscall ***v14)(_DWORD, int); // ecx
  int (__thiscall ***v15)(_DWORD, int); // ecx
  int (__thiscall ***v16)(_DWORD, int); // ecx
  int (__thiscall ***v17)(_DWORD, int); // ecx
  int (__thiscall ***v18)(_DWORD, int); // ecx
  int (__thiscall ***v19)(_DWORD, int); // ecx
  int (__thiscall ***v20)(_DWORD, int); // ecx
  int (__thiscall ***v21)(_DWORD, int); // ecx
  int (__thiscall ***v22)(_DWORD, int); // ecx
  int (__thiscall ***v23)(_DWORD, int); // ecx
  int (__thiscall ***v24)(_DWORD, int); // ecx
  int (__thiscall ***v25)(_DWORD, int); // ecx
  int (__thiscall ***v26)(_DWORD, int); // ecx
  int (__thiscall ***v27)(_DWORD, int); // ecx
  int (__thiscall ***v28)(_DWORD, int); // ecx
  int (__thiscall ***v29)(_DWORD, int); // ecx
  int (__thiscall ***v30)(_DWORD, int); // ecx
  int (__thiscall ***v31)(_DWORD, int); // ecx
  int (__thiscall ***v32)(_DWORD, int); // ecx
  int (__thiscall ***v33)(_DWORD, int); // ecx
  int (__thiscall ***v34)(_DWORD, int); // ecx
  int (__thiscall ***v35)(_DWORD, int); // ecx
  int (__thiscall ***v36)(_DWORD, int); // ecx
  int (__thiscall ***v37)(_DWORD, int); // ecx
  int (__thiscall ***v38)(_DWORD, int); // ecx
  int (__thiscall ***v39)(_DWORD, int); // ecx
  int (__thiscall ***v40)(_DWORD, int); // ecx
  int (__thiscall ***v41)(_DWORD, int); // ecx
  int (__thiscall ***v42)(_DWORD, int); // ecx
  int (__thiscall ***v43)(_DWORD, int); // ecx
  int (__thiscall ***v44)(_DWORD, int); // ecx
  int (__thiscall ***v45)(_DWORD, int); // ecx
  int (__thiscall ***v46)(_DWORD, int); // ecx
  int (__thiscall ***v47)(_DWORD, int); // ecx
  int (__thiscall ***v48)(_DWORD, int); // ecx
  int (__thiscall ***v49)(_DWORD, int); // ecx
  int (__thiscall ***v50)(_DWORD, int); // ecx
  int (__thiscall ***v51)(_DWORD, int); // ecx
  int (__thiscall ***v52)(_DWORD, int); // ecx
  int (__thiscall ***v53)(_DWORD, int); // ecx
  int (__thiscall ***v54)(_DWORD, int); // ecx
  int (__thiscall ***v55)(_DWORD, int); // ecx
  int (__thiscall ***v56)(_DWORD, int); // ecx
  int (__thiscall ***v57)(_DWORD, int); // ecx
  int (__thiscall ***v58)(_DWORD, int); // ecx
  int (__thiscall ***v59)(_DWORD, int); // ecx
  int (__thiscall ***v60)(_DWORD, int); // ecx
  int (__thiscall ***v61)(_DWORD, int); // ecx
  int (__thiscall ***v62)(_DWORD, int); // ecx
  int (__thiscall ***v63)(_DWORD, int); // ecx
  int (__thiscall ***v64)(_DWORD, int); // ecx
  int (__thiscall ***v65)(_DWORD, int); // ecx
  int (__thiscall ***v66)(_DWORD, int); // ecx
  int (__thiscall ***v67)(_DWORD, int); // ecx
  int (__thiscall ***v68)(_DWORD, int); // ecx
  int (__thiscall ***v69)(_DWORD, int); // ecx
  int (__thiscall ***v70)(_DWORD, int); // ecx
  int (__thiscall ***v71)(_DWORD, int); // ecx
  int (__thiscall ***v72)(_DWORD, int); // ecx
  int (__thiscall ***v73)(_DWORD, int); // ecx
  int (__thiscall ***v74)(_DWORD, int); // ecx
  int (__thiscall ***v75)(_DWORD, int); // ecx
  int (__thiscall ***v76)(_DWORD, int); // ecx
  int (__thiscall ***v77)(_DWORD, int); // ecx
  int (__thiscall ***v78)(_DWORD, int); // ecx
  int (__thiscall ***v79)(_DWORD, int); // ecx
  int (__thiscall ***v80)(_DWORD, int); // ecx
  int (__thiscall ***v81)(_DWORD, int); // ecx
  int (__thiscall ***v82)(_DWORD, int); // ecx
  int (__thiscall ***v83)(_DWORD, int); // ecx
  int (__thiscall ***v84)(_DWORD, int); // ecx
  int (__thiscall ***v85)(_DWORD, int); // ecx
  int (__thiscall ***v86)(_DWORD, int); // ecx
  int (__thiscall ***v87)(_DWORD, int); // ecx
  int (__thiscall ***v88)(_DWORD, int); // ecx
  int (__thiscall ***v89)(_DWORD, int); // ecx
  int (__thiscall ***v90)(_DWORD, int); // ecx
  int (__thiscall ***v91)(_DWORD, int); // ecx

  v2 = (int (__thiscall ***)(_DWORD, int))this->q008; /*0x490496*/
  if ( v2 ) /*0x49049b*/
    result = (**v2)(v2, 1); /*0x4904a1*/
  this->q008 = 0; /*0x4904a3*/
  v4 = (int (__thiscall ***)(_DWORD, int))this->q00C; /*0x4904a6*/
  if ( v4 ) /*0x4904ab*/
    result = (**v4)(v4, 1); /*0x4904b1*/
  this->q00C = 0; /*0x4904b3*/
  v5 = (int (__thiscall ***)(_DWORD, int))this->q010; /*0x4904b6*/
  if ( v5 ) /*0x4904bb*/
    result = (**v5)(v5, 1); /*0x4904c1*/
  this->q010 = 0; /*0x4904c3*/
  v6 = (int (__thiscall ***)(_DWORD, int))this->q014; /*0x4904c6*/
  if ( v6 ) /*0x4904cb*/
    result = (**v6)(v6, 1); /*0x4904d1*/
  this->q014 = 0; /*0x4904d3*/
  v7 = (int (__thiscall ***)(_DWORD, int))this->q018; /*0x4904d6*/
  if ( v7 ) /*0x4904db*/
    result = (**v7)(v7, 1); /*0x4904e1*/
  this->q018 = 0; /*0x4904e3*/
  v8 = (int (__thiscall ***)(_DWORD, int))this->q01C; /*0x4904e6*/
  if ( v8 ) /*0x4904eb*/
    result = (**v8)(v8, 1); /*0x4904f1*/
  this->q01C = 0; /*0x4904f3*/
  v9 = (int (__thiscall ***)(_DWORD, int))this->q020; /*0x4904f6*/
  if ( v9 ) /*0x4904fb*/
    result = (**v9)(v9, 1); /*0x490501*/
  this->q020 = 0; /*0x490503*/
  v10 = (int (__thiscall ***)(_DWORD, int))this->q024; /*0x490506*/
  if ( v10 ) /*0x49050b*/
    result = (**v10)(v10, 1); /*0x490511*/
  this->q024 = 0; /*0x490513*/
  v11 = (int (__thiscall ***)(_DWORD, int))this->q028; /*0x490516*/
  if ( v11 ) /*0x49051b*/
    result = (**v11)(v11, 1); /*0x490521*/
  this->q028 = 0; /*0x490523*/
  v12 = (int (__thiscall ***)(_DWORD, int))this->q02C; /*0x490526*/
  if ( v12 ) /*0x49052b*/
    result = (**v12)(v12, 1); /*0x490531*/
  this->q02C = 0; /*0x490533*/
  v13 = (int (__thiscall ***)(_DWORD, int))this->q030; /*0x490536*/
  if ( v13 ) /*0x49053b*/
    result = (**v13)(v13, 1); /*0x490541*/
  this->q030 = 0; /*0x490543*/
  v14 = (int (__thiscall ***)(_DWORD, int))this->q034; /*0x490546*/
  if ( v14 ) /*0x49054b*/
    result = (**v14)(v14, 1); /*0x490551*/
  this->q034 = 0; /*0x490553*/
  v15 = (int (__thiscall ***)(_DWORD, int))this->q038; /*0x490556*/
  if ( v15 ) /*0x49055b*/
    result = (**v15)(v15, 1); /*0x490561*/
  this->q038 = 0; /*0x490563*/
  v16 = (int (__thiscall ***)(_DWORD, int))this->q03C; /*0x490566*/
  if ( v16 ) /*0x49056b*/
    result = (**v16)(v16, 1); /*0x490571*/
  this->q03C = 0; /*0x490573*/
  v17 = (int (__thiscall ***)(_DWORD, int))this->q040; /*0x490576*/
  if ( v17 ) /*0x49057b*/
    result = (**v17)(v17, 1); /*0x490581*/
  this->q040 = 0; /*0x490583*/
  v18 = (int (__thiscall ***)(_DWORD, int))this->q044; /*0x490586*/
  if ( v18 ) /*0x49058b*/
    result = (**v18)(v18, 1); /*0x490591*/
  this->q044 = 0; /*0x490593*/
  v19 = (int (__thiscall ***)(_DWORD, int))this->q048; /*0x490596*/
  if ( v19 ) /*0x49059b*/
    result = (**v19)(v19, 1); /*0x4905a1*/
  this->q048 = 0; /*0x4905a3*/
  v20 = (int (__thiscall ***)(_DWORD, int))this->q04C; /*0x4905a6*/
  if ( v20 ) /*0x4905ab*/
    result = (**v20)(v20, 1); /*0x4905b1*/
  this->q04C = 0; /*0x4905b3*/
  v21 = (int (__thiscall ***)(_DWORD, int))this->q050; /*0x4905b6*/
  if ( v21 ) /*0x4905bb*/
    result = (**v21)(v21, 1); /*0x4905c1*/
  this->q050 = 0; /*0x4905c3*/
  v22 = (int (__thiscall ***)(_DWORD, int))this->q054; /*0x4905c6*/
  if ( v22 ) /*0x4905cb*/
    result = (**v22)(v22, 1); /*0x4905d1*/
  this->q054 = 0; /*0x4905d3*/
  v23 = (int (__thiscall ***)(_DWORD, int))this->q058; /*0x4905d6*/
  if ( v23 ) /*0x4905db*/
    result = (**v23)(v23, 1); /*0x4905e1*/
  this->q058 = 0; /*0x4905e3*/
  v24 = (int (__thiscall ***)(_DWORD, int))this->q05C; /*0x4905e6*/
  if ( v24 ) /*0x4905eb*/
    result = (**v24)(v24, 1); /*0x4905f1*/
  this->q05C = 0; /*0x4905f3*/
  v25 = (int (__thiscall ***)(_DWORD, int))this->q060; /*0x4905f6*/
  if ( v25 ) /*0x4905fb*/
    result = (**v25)(v25, 1); /*0x490601*/
  this->q060 = 0; /*0x490603*/
  v26 = (int (__thiscall ***)(_DWORD, int))this->q064; /*0x490606*/
  if ( v26 ) /*0x49060b*/
    result = (**v26)(v26, 1); /*0x490611*/
  this->q064 = 0; /*0x490613*/
  v27 = (int (__thiscall ***)(_DWORD, int))this->q068; /*0x490616*/
  if ( v27 ) /*0x49061b*/
    result = (**v27)(v27, 1); /*0x490621*/
  this->q068 = 0; /*0x490623*/
  v28 = (int (__thiscall ***)(_DWORD, int))this->q06C; /*0x490626*/
  if ( v28 ) /*0x49062b*/
    result = (**v28)(v28, 1); /*0x490631*/
  this->q06C = 0; /*0x490633*/
  v29 = (int (__thiscall ***)(_DWORD, int))this->q070; /*0x490636*/
  if ( v29 ) /*0x49063b*/
    result = (**v29)(v29, 1); /*0x490641*/
  this->q070 = 0; /*0x490643*/
  v30 = (int (__thiscall ***)(_DWORD, int))this->q074; /*0x490646*/
  if ( v30 ) /*0x49064b*/
    result = (**v30)(v30, 1); /*0x490651*/
  this->q074 = 0; /*0x490653*/
  v31 = (int (__thiscall ***)(_DWORD, int))this->q078; /*0x490656*/
  if ( v31 ) /*0x49065b*/
    result = (**v31)(v31, 1); /*0x490661*/
  this->q078 = 0; /*0x490663*/
  v32 = (int (__thiscall ***)(_DWORD, int))this->q07C; /*0x490666*/
  if ( v32 ) /*0x49066b*/
    result = (**v32)(v32, 1); /*0x490671*/
  this->q07C = 0; /*0x490673*/
  v33 = (int (__thiscall ***)(_DWORD, int))this->q08C; /*0x490676*/
  if ( v33 ) /*0x49067e*/
    result = (**v33)(v33, 1); /*0x490684*/
  this->q08C = 0; /*0x490686*/
  v34 = (int (__thiscall ***)(_DWORD, int))this->q090; /*0x49068c*/
  if ( v34 ) /*0x490694*/
    result = (**v34)(v34, 1); /*0x49069a*/
  this->q090 = 0; /*0x49069c*/
  v35 = (int (__thiscall ***)(_DWORD, int))this->q080; /*0x4906a2*/
  if ( v35 ) /*0x4906aa*/
    result = (**v35)(v35, 1); /*0x4906b0*/
  this->q080 = 0; /*0x4906b2*/
  v36 = (int (__thiscall ***)(_DWORD, int))this->q084; /*0x4906b8*/
  if ( v36 ) /*0x4906c0*/
    result = (**v36)(v36, 1); /*0x4906c6*/
  this->q084 = 0; /*0x4906c8*/
  v37 = (int (__thiscall ***)(_DWORD, int))this->q088; /*0x4906ce*/
  if ( v37 ) /*0x4906d6*/
    result = (**v37)(v37, 1); /*0x4906dc*/
  this->q088 = 0; /*0x4906de*/
  v38 = (int (__thiscall ***)(_DWORD, int))this->q094; /*0x4906e4*/
  if ( v38 ) /*0x4906ec*/
    result = (**v38)(v38, 1); /*0x4906f2*/
  this->q094 = 0; /*0x4906f4*/
  v39 = (int (__thiscall ***)(_DWORD, int))this->q098; /*0x4906fa*/
  if ( v39 ) /*0x490702*/
    result = (**v39)(v39, 1); /*0x490708*/
  this->q098 = 0; /*0x49070a*/
  v40 = (int (__thiscall ***)(_DWORD, int))this->q09C; /*0x490710*/
  if ( v40 ) /*0x490718*/
    result = (**v40)(v40, 1); /*0x49071e*/
  this->q09C = 0; /*0x490720*/
  v41 = (int (__thiscall ***)(_DWORD, int))this->q0A0; /*0x490726*/
  if ( v41 ) /*0x49072e*/
    result = (**v41)(v41, 1); /*0x490734*/
  this->q0A0 = 0; /*0x490736*/
  v42 = (int (__thiscall ***)(_DWORD, int))this->q0A4; /*0x49073c*/
  if ( v42 ) /*0x490744*/
    result = (**v42)(v42, 1); /*0x49074a*/
  this->q0A4 = 0; /*0x49074c*/
  v43 = (int (__thiscall ***)(_DWORD, int))this->q0A8; /*0x490752*/
  if ( v43 ) /*0x49075a*/
    result = (**v43)(v43, 1); /*0x490760*/
  this->q0A8 = 0; /*0x490762*/
  v44 = (int (__thiscall ***)(_DWORD, int))this->q0AC; /*0x490768*/
  if ( v44 ) /*0x490770*/
    result = (**v44)(v44, 1); /*0x490776*/
  this->q0AC = 0; /*0x490778*/
  v45 = (int (__thiscall ***)(_DWORD, int))this->q0B0; /*0x49077e*/
  if ( v45 ) /*0x490786*/
    result = (**v45)(v45, 1); /*0x49078c*/
  this->q0B0 = 0; /*0x49078e*/
  v46 = (int (__thiscall ***)(_DWORD, int))this->q0B4; /*0x490794*/
  if ( v46 ) /*0x49079c*/
    result = (**v46)(v46, 1); /*0x4907a2*/
  this->q0B4 = 0; /*0x4907a4*/
  v47 = (int (__thiscall ***)(_DWORD, int))this->q0B8; /*0x4907aa*/
  if ( v47 ) /*0x4907b2*/
    result = (**v47)(v47, 1); /*0x4907b8*/
  this->q0B8 = 0; /*0x4907ba*/
  v48 = (int (__thiscall ***)(_DWORD, int))this->q0BC; /*0x4907c0*/
  if ( v48 ) /*0x4907c8*/
    result = (**v48)(v48, 1); /*0x4907ce*/
  this->q0BC = 0; /*0x4907d0*/
  v49 = (int (__thiscall ***)(_DWORD, int))this->q0C0; /*0x4907d6*/
  if ( v49 ) /*0x4907de*/
    result = (**v49)(v49, 1); /*0x4907e4*/
  this->q0C0 = 0; /*0x4907e6*/
  v50 = (int (__thiscall ***)(_DWORD, int))this->q0C4; /*0x4907ec*/
  if ( v50 ) /*0x4907f4*/
    result = (**v50)(v50, 1); /*0x4907fa*/
  this->q0C4 = 0; /*0x4907fc*/
  v51 = (int (__thiscall ***)(_DWORD, int))this->q0C8; /*0x490802*/
  if ( v51 ) /*0x49080a*/
    result = (**v51)(v51, 1); /*0x490810*/
  this->q0C8 = 0; /*0x490812*/
  v52 = (int (__thiscall ***)(_DWORD, int))this->q0CC; /*0x490818*/
  if ( v52 ) /*0x490820*/
    result = (**v52)(v52, 1); /*0x490826*/
  this->q0CC = 0; /*0x490828*/
  v53 = (int (__thiscall ***)(_DWORD, int))this->q0D0; /*0x49082e*/
  if ( v53 ) /*0x490836*/
    result = (**v53)(v53, 1); /*0x49083c*/
  this->q0D0 = 0; /*0x49083e*/
  v54 = (int (__thiscall ***)(_DWORD, int))this->q0D4; /*0x490844*/
  if ( v54 ) /*0x49084c*/
    result = (**v54)(v54, 1); /*0x490852*/
  this->q0D4 = 0; /*0x490854*/
  v55 = (int (__thiscall ***)(_DWORD, int))this->q0D8; /*0x49085a*/
  if ( v55 ) /*0x490862*/
    result = (**v55)(v55, 1); /*0x490868*/
  this->q0D8 = 0; /*0x49086a*/
  v56 = (int (__thiscall ***)(_DWORD, int))this->q0DC; /*0x490870*/
  if ( v56 ) /*0x490878*/
    result = (**v56)(v56, 1); /*0x49087e*/
  this->q0DC = 0; /*0x490880*/
  v57 = (int (__thiscall ***)(_DWORD, int))this->q0E0; /*0x490886*/
  if ( v57 ) /*0x49088e*/
    result = (**v57)(v57, 1); /*0x490894*/
  this->q0E0 = 0; /*0x490896*/
  v58 = (int (__thiscall ***)(_DWORD, int))this->q0E4; /*0x49089c*/
  if ( v58 ) /*0x4908a4*/
    result = (**v58)(v58, 1); /*0x4908aa*/
  this->q0E4 = 0; /*0x4908ac*/
  v59 = (int (__thiscall ***)(_DWORD, int))this->q0E8; /*0x4908b2*/
  if ( v59 ) /*0x4908ba*/
    result = (**v59)(v59, 1); /*0x4908c0*/
  this->q0E8 = 0; /*0x4908c2*/
  v60 = (int (__thiscall ***)(_DWORD, int))this->q0EC; /*0x4908c8*/
  if ( v60 ) /*0x4908d0*/
    result = (**v60)(v60, 1); /*0x4908d6*/
  v61 = (int (__thiscall ***)(_DWORD, int))this->q0F0; /*0x4908d8*/
  this->q0EC = 0; /*0x4908de*/
  if ( v61 ) /*0x4908e6*/
    result = (**v61)(v61, 1); /*0x4908ec*/
  v62 = (int (__thiscall ***)(_DWORD, int))this->q0F4; /*0x4908ee*/
  this->q0F0 = 0; /*0x4908f4*/
  if ( v62 ) /*0x4908fc*/
    result = (**v62)(v62, 1); /*0x490902*/
  v63 = (int (__thiscall ***)(_DWORD, int))this->q0F8; /*0x490904*/
  this->q0F4 = 0; /*0x49090a*/
  if ( v63 ) /*0x490912*/
    result = (**v63)(v63, 1); /*0x490918*/
  v64 = (int (__thiscall ***)(_DWORD, int))this->q0FC; /*0x49091a*/
  this->q0F8 = 0; /*0x490920*/
  if ( v64 ) /*0x490928*/
    result = (**v64)(v64, 1); /*0x49092e*/
  v65 = (int (__thiscall ***)(_DWORD, int))this->q100; /*0x490930*/
  this->q0FC = 0; /*0x490936*/
  if ( v65 ) /*0x49093e*/
    result = (**v65)(v65, 1); /*0x490944*/
  v66 = (int (__thiscall ***)(_DWORD, int))this->q104; /*0x490946*/
  this->q100 = 0; /*0x49094c*/
  if ( v66 ) /*0x490954*/
    result = (**v66)(v66, 1); /*0x49095a*/
  v67 = (int (__thiscall ***)(_DWORD, int))this->q108; /*0x49095c*/
  this->q104 = 0; /*0x490962*/
  if ( v67 ) /*0x49096a*/
    result = (**v67)(v67, 1); /*0x490970*/
  v68 = (int (__thiscall ***)(_DWORD, int))this->q10C; /*0x490972*/
  this->q108 = 0; /*0x490978*/
  if ( v68 ) /*0x490980*/
    result = (**v68)(v68, 1); /*0x490986*/
  v69 = (int (__thiscall ***)(_DWORD, int))this->q110; /*0x490988*/
  this->q10C = 0; /*0x49098e*/
  if ( v69 ) /*0x490996*/
    result = (**v69)(v69, 1); /*0x49099c*/
  v70 = (int (__thiscall ***)(_DWORD, int))this->q114; /*0x49099e*/
  this->q110 = 0; /*0x4909a4*/
  if ( v70 ) /*0x4909ac*/
    result = (**v70)(v70, 1); /*0x4909b2*/
  v71 = (int (__thiscall ***)(_DWORD, int))this->q118; /*0x4909b4*/
  this->q114 = 0; /*0x4909ba*/
  if ( v71 ) /*0x4909c2*/
    result = (**v71)(v71, 1); /*0x4909c8*/
  v72 = (int (__thiscall ***)(_DWORD, int))this->q11C; /*0x4909ca*/
  this->q118 = 0; /*0x4909d0*/
  if ( v72 ) /*0x4909d8*/
    result = (**v72)(v72, 1); /*0x4909de*/
  v73 = (int (__thiscall ***)(_DWORD, int))this->q120; /*0x4909e0*/
  this->q11C = 0; /*0x4909e6*/
  if ( v73 ) /*0x4909ee*/
    result = (**v73)(v73, 1); /*0x4909f4*/
  v74 = (int (__thiscall ***)(_DWORD, int))this->q124; /*0x4909f6*/
  this->q120 = 0; /*0x4909fc*/
  if ( v74 ) /*0x490a04*/
    result = (**v74)(v74, 1); /*0x490a0a*/
  v75 = (int (__thiscall ***)(_DWORD, int))this->q128; /*0x490a0c*/
  this->q124 = 0; /*0x490a12*/
  if ( v75 ) /*0x490a1a*/
    result = (**v75)(v75, 1); /*0x490a20*/
  v76 = (int (__thiscall ***)(_DWORD, int))this->q12C; /*0x490a22*/
  this->q128 = 0; /*0x490a28*/
  if ( v76 ) /*0x490a30*/
    result = (**v76)(v76, 1); /*0x490a36*/
  v77 = (int (__thiscall ***)(_DWORD, int))this->q130; /*0x490a38*/
  this->q12C = 0; /*0x490a3e*/
  if ( v77 ) /*0x490a46*/
    result = (**v77)(v77, 1); /*0x490a4c*/
  v78 = (int (__thiscall ***)(_DWORD, int))this->q134; /*0x490a4e*/
  this->q130 = 0; /*0x490a54*/
  if ( v78 ) /*0x490a5c*/
    result = (**v78)(v78, 1); /*0x490a62*/
  v79 = (int (__thiscall ***)(_DWORD, int))this->q138; /*0x490a64*/
  this->q134 = 0; /*0x490a6a*/
  if ( v79 ) /*0x490a72*/
    result = (**v79)(v79, 1); /*0x490a78*/
  v80 = (int (__thiscall ***)(_DWORD, int))this->q13C; /*0x490a7a*/
  this->q138 = 0; /*0x490a80*/
  if ( v80 ) /*0x490a88*/
    result = (**v80)(v80, 1); /*0x490a8e*/
  v81 = (int (__thiscall ***)(_DWORD, int))this->q140; /*0x490a90*/
  this->q13C = 0; /*0x490a96*/
  if ( v81 ) /*0x490a9e*/
    result = (**v81)(v81, 1); /*0x490aa4*/
  v82 = (int (__thiscall ***)(_DWORD, int))this->q144; /*0x490aa6*/
  this->q140 = 0; /*0x490aac*/
  if ( v82 ) /*0x490ab4*/
    result = (**v82)(v82, 1); /*0x490aba*/
  v83 = (int (__thiscall ***)(_DWORD, int))this->q148; /*0x490abc*/
  this->q144 = 0; /*0x490ac2*/
  if ( v83 ) /*0x490aca*/
    result = (**v83)(v83, 1); /*0x490ad0*/
  v84 = (int (__thiscall ***)(_DWORD, int))this->q14C; /*0x490ad2*/
  this->q148 = 0; /*0x490ad8*/
  if ( v84 ) /*0x490ae0*/
    result = (**v84)(v84, 1); /*0x490ae6*/
  v85 = (int (__thiscall ***)(_DWORD, int))this->q150; /*0x490ae8*/
  this->q14C = 0; /*0x490aee*/
  if ( v85 ) /*0x490af6*/
    result = (**v85)(v85, 1); /*0x490afc*/
  v86 = (int (__thiscall ***)(_DWORD, int))this->q154; /*0x490afe*/
  this->q150 = 0; /*0x490b04*/
  if ( v86 ) /*0x490b0c*/
    result = (**v86)(v86, 1); /*0x490b12*/
  v87 = (int (__thiscall ***)(_DWORD, int))this->q158; /*0x490b14*/
  this->q154 = 0; /*0x490b1a*/
  if ( v87 ) /*0x490b22*/
    result = (**v87)(v87, 1); /*0x490b28*/
  v88 = (int (__thiscall ***)(_DWORD, int))this->q15C; /*0x490b2a*/
  this->q158 = 0; /*0x490b30*/
  if ( v88 ) /*0x490b38*/
    result = (**v88)(v88, 1); /*0x490b3e*/
  v89 = (int (__thiscall ***)(_DWORD, int))this->q160; /*0x490b40*/
  this->q15C = 0; /*0x490b46*/
  if ( v89 ) /*0x490b4e*/
    result = (**v89)(v89, 1); /*0x490b54*/
  v90 = (int (__thiscall ***)(_DWORD, int))this->q164; /*0x490b56*/
  this->q160 = 0; /*0x490b5c*/
  if ( v90 ) /*0x490b64*/
    result = (**v90)(v90, 1); /*0x490b6a*/
  v91 = (int (__thiscall ***)(_DWORD, int))this->q168; /*0x490b6c*/
  this->q164 = 0; /*0x490b72*/
  if ( v91 ) /*0x490b7a*/
    result = (**v91)(v91, 1); /*0x490b80*/
  this->q168 = 0; /*0x490b82*/
  return result; /*0x490b88*/
}


// ==== 0x00490B90  BuildingClass::GetSHPFrame  this=ConvertClass  sig=csp ====
int __thiscall BuildingClass::GetSHPFrame(_DWORD *this, ConvertClass *aP1)
{
  if ( !this->q008 ) /*0x490b93*/
    ConvertClass::InitTables((int)this); /*0x490b9a*/
  if ( ((unsigned __int8)aP1 & 0x10) != 0 ) /*0x490ba5*/
  {
    if ( (BYTE1(aP1) & 0x40) != 0 ) /*0x490baa*/
    {
      if ( (BYTE1(aP1) & 8) != 0 ) /*0x490baf*/
        return this->q0C0; /*0x490bb1*/
      else
        return this->q058; /*0x490bbb*/
    }
    else if ( ((unsigned int)aP1 & g_INI_Key_Clear.headNode[1]) != 0 ) /*0x490bc8*/
    {
      if ( (BYTE1(aP1) & 8) != 0 ) /*0x490bcd*/
        return this->q09C; /*0x490bcf*/
      else
        return this->q030; /*0x490bd9*/
    }
    else if ( (BYTE1(aP1) & 8) != 0 ) /*0x490be3*/
    {
      return this->q070; /*0x490be5*/
    }
    else
    {
      return this->q014; /*0x490bec*/
    }
  }
  switch ( (unsigned __int8)aP1 & 6 ) /*0x490bfb*/
  {
    case 2: /*0x490bfb*/
      if ( (BYTE1(aP1) & 0x40) != 0 ) /*0x490de4*/
      {
        if ( (BYTE1(aP1) & 8) != 0 ) /*0x490de9*/
          return this->q0CC; /*0x490deb*/
        else
          return this->q064; /*0x490df5*/
      }
      else if ( ((unsigned int)aP1 & g_INI_Key_Clear.headNode[1]) != 0 ) /*0x490e02*/
      {
        if ( ((unsigned __int8)aP1 & 8) != 0 ) /*0x490e06*/
        {
          if ( (BYTE1(aP1) & 8) != 0 ) /*0x490e0b*/
            return this->q0B4; /*0x490e0d*/
          else
            return this->q048; /*0x490e17*/
        }
        else if ( (BYTE1(aP1) & 8) != 0 ) /*0x490e21*/
        {
          return this->q0A8; /*0x490e23*/
        }
        else
        {
          return this->q03C; /*0x490e2d*/
        }
      }
      else if ( (BYTE1(aP1) & 8) != 0 ) /*0x490e37*/
      {
        return this->q07C; /*0x490e39*/
      }
      else
      {
        return this->q020; /*0x490e40*/
      }
    case 4: /*0x490bfb*/
      if ( (BYTE1(aP1) & 0x40) != 0 ) /*0x490d5c*/
      {
        if ( (BYTE1(aP1) & 8) != 0 ) /*0x490d61*/
          return this->q0C8; /*0x490d63*/
        else
          return this->q060; /*0x490d6d*/
      }
      else if ( ((unsigned int)aP1 & g_INI_Key_Clear.headNode[1]) != 0 ) /*0x490d7a*/
      {
        if ( ((unsigned __int8)aP1 & 8) != 0 ) /*0x490d7e*/
        {
          if ( (BYTE1(aP1) & 8) != 0 ) /*0x490d83*/
            return this->q0B0; /*0x490d85*/
          else
            return this->q044; /*0x490d8f*/
        }
        else if ( (BYTE1(aP1) & 8) != 0 ) /*0x490d99*/
        {
          return this->q0A4; /*0x490d9b*/
        }
        else
        {
          return this->q038; /*0x490da5*/
        }
      }
      else if ( (BYTE1(aP1) & 8) != 0 ) /*0x490daf*/
      {
        return this->q078; /*0x490db1*/
      }
      else if ( ((unsigned int)aP1 & 0x10000) != 0 ) /*0x490dbd*/
      {
        return this->q090; /*0x490dbf*/
      }
      else if ( ((unsigned int)aP1 & 0x20000) != 0 ) /*0x490dce*/
      {
        return this->q08C; /*0x490dd0*/
      }
      else
      {
        return this->q01C; /*0x490dda*/
      }
    case 6: /*0x490bfb*/
      if ( (BYTE1(aP1) & 0x40) != 0 ) /*0x490cf6*/
      {
        if ( (BYTE1(aP1) & 8) != 0 ) /*0x490cfb*/
          return this->q0C4; /*0x490cfd*/
        else
          return this->q05C; /*0x490d07*/
      }
      else if ( ((unsigned int)aP1 & g_INI_Key_Clear.headNode[1]) != 0 ) /*0x490d14*/
      {
        if ( ((unsigned __int8)aP1 & 8) != 0 ) /*0x490d18*/
        {
          if ( (BYTE1(aP1) & 8) != 0 ) /*0x490d1d*/
            return this->q0AC; /*0x490d1f*/
          else
            return this->q040; /*0x490d29*/
        }
        else if ( (BYTE1(aP1) & 8) != 0 ) /*0x490d33*/
        {
          return this->q0A0; /*0x490d35*/
        }
        else
        {
          return this->q034; /*0x490d3f*/
        }
      }
      else if ( (BYTE1(aP1) & 8) != 0 ) /*0x490d49*/
      {
        return this->q074; /*0x490d4b*/
      }
      else
      {
        return this->q018; /*0x490d52*/
      }
    default:
      if ( ((unsigned __int8)aP1 & 1) != 0 ) /*0x490c15*/
      {
        if ( (BYTE1(aP1) & 0x40) != 0 ) /*0x490c1a*/
          return this->q054; /*0x490c1c*/
        if ( ((unsigned int)aP1 & g_INI_Key_Clear.headNode[1]) != 0 ) /*0x490c29*/
          return this->q02C; /*0x490c2b*/
        return this->q010; /*0x490c20*/
      }
      if ( ((unsigned __int8)aP1 & 0x20) != 0 ) /*0x490c3b*/
      {
        if ( (BYTE1(aP1) & 0x40) != 0 ) /*0x490c40*/
        {
          if ( (BYTE1(aP1) & 8) != 0 ) /*0x490c45*/
            return this->q0BC; /*0x490c4e*/
          return this->q050; /*0x490c93*/
        }
        if ( ((unsigned int)aP1 & g_INI_Key_Clear.headNode[1]) != 0 ) /*0x490c57*/
        {
          if ( (BYTE1(aP1) & 8) != 0 ) /*0x490c5c*/
            return this->q098; /*0x490c65*/
          return this->q028; /*0x490cb1*/
        }
        if ( (BYTE1(aP1) & 8) != 0 ) /*0x490c6b*/
          return this->q068; /*0x490c6d*/
        else
          return this->q008; /*0x490c74*/
      }
      else
      {
        if ( (BYTE1(aP1) & 0x40) != 0 ) /*0x490c7e*/
        {
          if ( (BYTE1(aP1) & 8) != 0 ) /*0x490c83*/
            return this->q0BC; /*0x490c8c*/
          return this->q050; /*0x490c83*/
        }
        if ( ((unsigned int)aP1 & g_INI_Key_Clear.headNode[1]) != 0 ) /*0x490c9c*/
        {
          if ( (BYTE1(aP1) & 8) != 0 ) /*0x490ca1*/
            return this->q098; /*0x490caa*/
          return this->q028; /*0x490ca1*/
        }
        if ( SBYTE1(aP1) >= 0 ) /*0x490cb7*/
        {
          if ( (BYTE1(aP1) & 1) != 0 ) /*0x490cc6*/
          {
            return this->q084; /*0x490cc8*/
          }
          else if ( ((unsigned __int8)aP1 & 0x40) != 0 ) /*0x490cd4*/
          {
            return this->q088; /*0x490cd6*/
          }
          else if ( (BYTE1(aP1) & 8) != 0 ) /*0x490ce3*/
          {
            return this->q06C; /*0x490ce5*/
          }
          else
          {
            return this->q00C; /*0x490cec*/
          }
        }
        else
        {
          return this->q080; /*0x490cb9*/
        }
      }
  }
}


// ==== 0x00490E50  LightConvertClass::SelectRLEBlitter  this=LightConvertClass  sig=csp ====
int __thiscall LightConvertClass::SelectRLEBlitter(_DWORD *this, IUnknown *aP1)
{
  if ( !this->q008 ) /*0x490e53*/
    ConvertClass::InitTables((int)this); /*0x490e5a*/
  if ( ((unsigned __int8)aP1 & 0x10) != 0 ) /*0x490e65*/
  {
    if ( (BYTE1(aP1) & 0x40) != 0 ) /*0x490e6a*/
    {
      if ( (BYTE1(aP1) & 8) != 0 ) /*0x490e6f*/
        return this->q15C; /*0x490e71*/
      else
        return this->q110; /*0x490e7b*/
    }
    else if ( ((unsigned int)aP1 & g_INI_Key_Clear.headNode[2]) != 0 ) /*0x490e8b*/
    {
      if ( (BYTE1(aP1) & 8) != 0 ) /*0x490e90*/
        return this->q13C; /*0x490e92*/
      else
        return this->q0EC; /*0x490e9c*/
    }
    else if ( (BYTE1(aP1) & 8) != 0 ) /*0x490ea9*/
    {
      return this->q128; /*0x490eab*/
    }
    else
    {
      return this->q0D8; /*0x490eb5*/
    }
  }
  switch ( (unsigned __int8)aP1 & 6 ) /*0x490ec7*/
  {
    case 2: /*0x490ec7*/
      if ( (BYTE1(aP1) & 0x40) != 0 ) /*0x491082*/
      {
        if ( (BYTE1(aP1) & 8) != 0 ) /*0x491087*/
          return this->q168; /*0x491089*/
        else
          return this->q120; /*0x491093*/
      }
      else if ( ((unsigned int)aP1 & g_INI_Key_Clear.headNode[2]) != 0 ) /*0x4910a3*/
      {
        if ( ((unsigned __int8)aP1 & 8) != 0 ) /*0x4910a7*/
        {
          if ( (BYTE1(aP1) & 8) != 0 ) /*0x4910ac*/
            return this->q154; /*0x4910ae*/
          else
            return this->q108; /*0x4910b8*/
        }
        else if ( (BYTE1(aP1) & 8) != 0 ) /*0x4910c5*/
        {
          return this->q148; /*0x4910c7*/
        }
        else
        {
          return this->q0FC; /*0x4910d1*/
        }
      }
      else if ( (BYTE1(aP1) & 8) != 0 ) /*0x4910de*/
      {
        return this->q134; /*0x4910e0*/
      }
      else
      {
        return this->q0E4; /*0x4910ea*/
      }
    case 4: /*0x490ec7*/
      if ( (BYTE1(aP1) & 0x40) != 0 ) /*0x49100d*/
      {
        if ( (BYTE1(aP1) & 8) != 0 ) /*0x491012*/
          return this->q164; /*0x491014*/
        else
          return this->q11C; /*0x49101e*/
      }
      else if ( ((unsigned int)aP1 & g_INI_Key_Clear.headNode[2]) != 0 ) /*0x49102e*/
      {
        if ( ((unsigned __int8)aP1 & 8) != 0 ) /*0x491032*/
        {
          if ( (BYTE1(aP1) & 8) != 0 ) /*0x491037*/
            return this->q150; /*0x491039*/
          else
            return this->q104; /*0x491043*/
        }
        else if ( (BYTE1(aP1) & 8) != 0 ) /*0x491050*/
        {
          return this->q144; /*0x491052*/
        }
        else
        {
          return this->q0F8; /*0x49105c*/
        }
      }
      else if ( (BYTE1(aP1) & 8) != 0 ) /*0x491069*/
      {
        return this->q130; /*0x49106b*/
      }
      else
      {
        return this->q0E0; /*0x491075*/
      }
    case 6: /*0x490ec7*/
      if ( (BYTE1(aP1) & 0x40) != 0 ) /*0x490f98*/
      {
        if ( (BYTE1(aP1) & 8) != 0 ) /*0x490f9d*/
          return this->q160; /*0x490f9f*/
        else
          return this->q118; /*0x490fa9*/
      }
      else if ( ((unsigned int)aP1 & g_INI_Key_Clear.headNode[2]) != 0 ) /*0x490fb9*/
      {
        if ( ((unsigned __int8)aP1 & 8) != 0 ) /*0x490fbd*/
        {
          if ( (BYTE1(aP1) & 8) != 0 ) /*0x490fc2*/
            return this->q14C; /*0x490fc4*/
          else
            return this->q100; /*0x490fce*/
        }
        else if ( (BYTE1(aP1) & 8) != 0 ) /*0x490fdb*/
        {
          return this->q140; /*0x490fdd*/
        }
        else
        {
          return this->q0F4; /*0x490fe7*/
        }
      }
      else if ( (BYTE1(aP1) & 8) != 0 ) /*0x490ff4*/
      {
        return this->q12C; /*0x490ff6*/
      }
      else
      {
        return this->q0DC; /*0x491000*/
      }
    default:
      if ( ((unsigned __int8)aP1 & 1) != 0 ) /*0x490ee1*/
      {
        if ( (BYTE1(aP1) & 0x40) != 0 ) /*0x490ee6*/
          return this->q114; /*0x490ee8*/
        if ( ((unsigned int)aP1 & g_INI_Key_Clear.headNode[2]) != 0 ) /*0x490ef8*/
          return this->q0F0; /*0x490efa*/
        return this->q0D4; /*0x490eef*/
      }
      if ( ((unsigned __int8)aP1 & 0x20) != 0 ) /*0x490f10*/
      {
        if ( (BYTE1(aP1) & 0x40) != 0 ) /*0x490f15*/
        {
          if ( (BYTE1(aP1) & 8) != 0 ) /*0x490f1a*/
            return this->q158; /*0x490f23*/
          return this->q10C; /*0x490f58*/
        }
        if ( ((unsigned int)aP1 & g_INI_Key_Clear.headNode[2]) != 0 ) /*0x490f2c*/
        {
          if ( (BYTE1(aP1) & 8) != 0 ) /*0x490f31*/
            return this->q138; /*0x490f3a*/
          return this->q0E8; /*0x490f79*/
        }
      }
      else
      {
        if ( (BYTE1(aP1) & 0x40) != 0 ) /*0x490f40*/
        {
          if ( (BYTE1(aP1) & 8) != 0 ) /*0x490f45*/
            return this->q158; /*0x490f4e*/
          return this->q10C; /*0x490f45*/
        }
        if ( ((unsigned int)aP1 & g_INI_Key_Clear.headNode[2]) != 0 ) /*0x490f61*/
        {
          if ( (BYTE1(aP1) & 8) != 0 ) /*0x490f66*/
            return this->q138; /*0x490f6f*/
          return this->q0E8; /*0x490f66*/
        }
      }
      if ( (BYTE1(aP1) & 8) != 0 ) /*0x490f7f*/
        return this->q124; /*0x490f81*/
      else
        return this->q0D0; /*0x490f8b*/
  }
}


// ==== 0x00491100  ObjectClass::method  this=ObjectClass  sig=csp ====
int sub_491100(ObjectClass *aP0, char a2, int a3, ObjectClass *aP3, __int16 a5, char a6, __int16 a7)
{
  char v7; // dl
  char v8; // cl
  int v9; // ebx
  ObjectClass *result; // eax
  char v11; // bp
  _DWORD *v12; // ecx
  _WORD *v13; // esi
  int v14; // edi
  int v15; // eax
  int v16; // edx
  __int16 v17; // ax
  unsigned __int8 v18; // dl
  ObjectClass *i; // [esp+4h] [ebp-Ch]
  char v20; // [esp+8h] [ebp-8h]
  int v21; // [esp+Ch] [ebp-4h]

  v20 = v8; /*0x491103*/
  result = 0; /*0x491107*/
  v11 = v7; /*0x491112*/
  for ( i = 0; (int)result < *(int *)&stru_89E138.__pad_BC0[16]; i = result ) /*0x491118*/
  {
    v12 = *(_DWORD **)(*(_DWORD *)&stru_89E138.__pad_BC0[4] + 4 * (_DWORD)result); /*0x491127*/
    v21 = (int)v12; /*0x49112a*/
    if ( v12[1] == 2 ) /*0x491132*/
    {
      v13 = (_WORD *)v12[92]; /*0x491138*/
      v14 = 256; /*0x49113e*/
      do /*0x4911ba*/
      {
        LOWORD(v9) = *v13; /*0x491143*/
        HIWORD(v15) = HIWORD(v9); /*0x491149*/
        HIWORD(v16) = HIWORD(v9); /*0x49114b*/
        v17 = *v13++ >> v11; /*0x49114d*/
        v18 = (unsigned __int8)((unsigned __int16)v9 >> a2) << (char)aP0; /*0x491165*/
        LOWORD(v9) = (unsigned __int8)((unsigned __int8)((unsigned __int8)((unsigned __int16)v9 >> (char)aP3) << a3) >> stru_89E138.__pad_14B0[6132]); /*0x491183*/
        LOWORD(v15) = (unsigned __int8)((unsigned __int8)((_BYTE)v17 << v20) >> stru_89E138.__pad_14B0[6124]); /*0x491197*/
        LOWORD(v16) = (unsigned __int8)(v18 >> stru_89E138.__pad_14B0[6140]); /*0x4911ad*/
        v9 = (v16 << stru_89E138.__pad_14B0[6136]) /*0x4911b3*/
           | (v15 << stru_89E138.__pad_14B0[6120])
           | (v9 << stru_89E138.__pad_14B0[6128]);
        --v14; /*0x4911b5*/
        *(v13 - 1) = v9; /*0x4911b6*/
      }
      while ( v14 ); /*0x4911ba*/
      v12[96] = *(unsigned __int16 *)&stru_89E138.__pad_14B0[6144]; /*0x4911ca*/
      v12[97] = *(unsigned __int16 *)&stru_89E138.__pad_14B0[6146]; /*0x4911d7*/
      COMClass::RegisterAll(v12); /*0x4911df*/
      ConvertClass::InitTables(v21); /*0x4911e6*/
      result = i; /*0x4911eb*/
    }
    result = (ObjectClass *)((char *)result + 1); /*0x4911f5*/
  }
  return (int)result->__pad_0; /*0x491205*/
}


// ==== 0x00491210  VectorClass_ptr_ConvertClass::Constructor_ConvertClass  this=ConvertClass  sig=csp ====
ConvertClass *__thiscall VectorClass_ptr_ConvertClass::Constructor_ConvertClass(void **Block, char a2)
{
  void *v3; // ecx
  int v4; // eax
  void **v6; // [esp+4h] [ebp-4h] BYREF

  *Block = &vt_ConvertClass; /*0x491214*/
  COMClass::RegisterAll(Block); /*0x49121a*/
  __3_YAXPAX_Z(*(Block + 92)); /*0x491226*/
  v3 = *(Block + 94); /*0x49122b*/
  *(Block + 92) = 0; /*0x491231*/
  __3_YAXPAX_Z(v3); /*0x49123c*/
  *(Block + 94) = 0; /*0x491244*/
  v6 = Block; /*0x49125d*/
  v4 = (*(int (__thiscall **)(int *, void ***))(MEMORY[0x89ECF8] + 16))(&MEMORY[0x89ECF8], &v6); /*0x491261*/
  if ( v4 != -1 && v4 < MEMORY[0x89ED08] && v4 < --MEMORY[0x89ED08] ) /*0x49127c*/
  {
    do /*0x491294*/
    {
      ++v4; /*0x491284*/
      *((_DWORD *)MEMORY[0x89ECFC] + v4 - 1) = *((_DWORD *)MEMORY[0x89ECFC] + v4); /*0x491288*/
    }
    while ( v4 < MEMORY[0x89ED08] ); /*0x491294*/
  }
  if ( (a2 & 1) != 0 ) /*0x49129b*/
    __3_YAXPAX_Z(Block); /*0x49129e*/
  return (ConvertClass *)Block; /*0x4912a8*/
}


// ==== 0x004912B0  _BlitTransXlat_G::method_4912B0  this=BlitTransXlat  sig=csp ====
char __thiscall sub_4912B0(_DWORD *this, int a2, _BYTE *a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
  int v9; // ebx
  int v10; // ecx
  _WORD *v11; // edi
  int v13; // eax

  v9 = *(this + 1); /*0x4912c5*/
  v10 = a4 + 1; /*0x4912cb*/
  v11 = (_WORD *)(a2 - 2); /*0x4912cf*/
  v13 = 0; /*0x4912d5*/
  while ( --v10 ) /*0x4912d7*/
  {
    ++v11; /*0x4912da*/
    LOBYTE(v13) = *a3++; /*0x4912dd*/
    if ( (_BYTE)v13 ) /*0x4912e2*/
      *v11 = *(_WORD *)(v9 + 2 * v13); /*0x4912e8*/
  }
  return v13; /*0x4912ed*/
}


// ==== 0x00491300  _BlitTransXlat_G::method  this=BlitTransXlat  sig=csp ====
int __thiscall sub_491300(void *this, int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
  return (*(int (__thiscall **)(void *, int, int, int, int, int, int, int, _DWORD))(*(_DWORD *)this + 4))( /*0x49132a*/
           this,
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           0);
}


// ==== 0x00491330  _BlitTransXlat_G::method  this=BlitTransXlat  sig=csp ====
int __thiscall sub_491330(void *this, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10)
{
  return (*(int (__thiscall **)(void *, int, int, int, int, int, int, int, _DWORD))(*(_DWORD *)this + 4))( /*0x49135a*/
           this,
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           0);
}


// ==== 0x00491360  _BlitTransXlat_G::method  this=BlitTransXlat  sig=csp ====
int __thiscall sub_491360(void *this, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
  return (*(int (__thiscall **)(void *, int, int, int, int, int, int, int, _DWORD))(*(_DWORD *)this + 4))( /*0x49138a*/
           this,
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           0);
}


// ==== 0x00491390  _DynamicVectorClass_PAVConvertClass::Destroy  this=DynamicVector  sig=csp ====
void __thiscall VectorClass_ptr_ConvertClass::sub_491390(int this)
{
  void *v2; // eax

  v2 = *(void **)(this + 4); /*0x491396*/
  *(_DWORD *)(this + 16) = 0; /*0x491399*/
  if ( v2 && *(_BYTE *)(this + 13) ) /*0x4913a0*/
  {
    __3_YAXPAX_Z(v2); /*0x4913a6*/
    *(_DWORD *)(this + 4) = 0; /*0x4913ae*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x4913b1*/
  *(_DWORD *)(this + 8) = 0; /*0x4913b4*/
}


// ==== 0x004913C0  _DynamicVectorClass_PAVConvertClass::GetItemIndex  this=DynamicVector  sig=csp ====
unsigned int __thiscall VectorClass_ptr_ConvertClass::sub_4913C0(int this, int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x4913c0*/
    return (unsigned int)(a2 - *(_DWORD *)(this + 4)) >> 2; /*0x4913d5*/
  else
    return 0; /*0x4913c7*/
}


// ==== 0x004913E0  _VectorClass_PAVConvertClass::Get  this=VectorClass  sig=csp ====
int __thiscall VectorClass_ptr_ConvertClass::Get(_DWORD *this, int a2)
{
  return *(_DWORD *)(this->Items + 4 * a2); /*0x4913ea*/
}


// ==== 0x004913F0  _BlitPlainXlat_E::AddRef  this=BlitPlainXlat  sig=csp ====
void __thiscall ConvertClass::_vt01(
        _DWORD *this,
        int a2,
        unsigned __int8 *a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9)
{
  int v9; // esi
  unsigned __int8 v12; // [esp+14h] [ebp+Ch]

  v9 = a4; /*0x4913f1*/
  if ( a4 > 0 ) /*0x4913fa*/
  {
    do /*0x491421*/
    {
      v12 = *a3++; /*0x49140a*/
      ++a2; /*0x491419*/
      --v9; /*0x49141a*/
      *(_BYTE *)(a2 - 1) = *(_BYTE *)(v12 + *(this + 1)); /*0x49141e*/
    }
    while ( v9 ); /*0x491421*/
  }
}


// ==== 0x00491430  _BlitPlainXlat_E::ddtor  this=BlitPlainXlat  sig=csp ====
int __thiscall ConvertClass::_vt03(void *this, int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
  return (*(int (__thiscall **)(void *, int, int, int, int, int, int, int, _DWORD))(*(_DWORD *)this + 4))( /*0x49145a*/
           this,
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           0);
}


// ==== 0x00491460  _BlitPlainXlat_E::Release  this=BlitPlainXlat  sig=csp ====
int __thiscall ConvertClass::_vt02(void *this, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10)
{
  return (*(int (__thiscall **)(void *, int, int, int, int, int, int, int, _DWORD))(*(_DWORD *)this + 4))( /*0x49148a*/
           this,
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           0);
}


// ==== 0x00491490  _BlitPlainXlat_E::Convert  this=BlitPlainXlat  sig=csp ====
int __thiscall ConvertClass::_vt04(void *this, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
  return (*(int (__thiscall **)(void *, int, int, int, int, int, int, int, _DWORD))(*(_DWORD *)this + 4))( /*0x4914ba*/
           this,
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           0);
}


// ==== 0x004914C0  ?$BlitTransXlat@E::getFactoryCount  this=BlitTransXlat  sig=csp ====
unsigned __int8 __thiscall AbstractClass::sub_4914C0(
        _DWORD *this,
        unsigned __int8 *a2,
        unsigned __int8 *a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9)
{
  unsigned __int8 result; // al
  int v12; // edi

  result = a4; /*0x4914c0*/
  if ( a4 > 0 ) /*0x4914c6*/
  {
    v12 = a4; /*0x4914d3*/
    do /*0x4914f3*/
    {
      result = *a3++; /*0x4914d5*/
      if ( result ) /*0x4914de*/
      {
        result = *(_BYTE *)(*(this + 1) + result); /*0x4914ec*/
        *a2 = result; /*0x4914ef*/
      }
      ++a2; /*0x4914f1*/
      --v12; /*0x4914f2*/
    }
    while ( v12 ); /*0x4914f3*/
  }
  return result; /*0x4914f8*/
}


// ==== 0x00491500  ?$BlitTransXlat@E::getFactoryIndex  this=BlitTransXlat  sig=csp ====
int __thiscall AbstractClass::sub_491500(void *this, int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
  return (*(int (__thiscall **)(void *, int, int, int, int, int, int, int, _DWORD))(*(_DWORD *)this + 4))( /*0x49152a*/
           this,
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           0);
}


// ==== 0x00491530  ?$BlitTransXlat@E::setFactoryState  this=BlitTransXlat  sig=csp ====
int __thiscall AbstractClass::sub_491530(
        void *this,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10)
{
  return (*(int (__thiscall **)(void *, int, int, int, int, int, int, int, _DWORD))(*(_DWORD *)this + 4))( /*0x49155a*/
           this,
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           0);
}


// ==== 0x00491560  ?$BlitTransXlat@E::checkFactoryQueue  this=BlitTransXlat  sig=csp ====
int __thiscall AbstractClass::sub_491560(void *this, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
  return (*(int (__thiscall **)(void *, int, int, int, int, int, int, int, _DWORD))(*(_DWORD *)this + 4))( /*0x49158a*/
           this,
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           0);
}


// ==== 0x00491590  ?$BlitTransZRemapXlat@E::readFactoryINI  this=?$BlitTransZRemapXlat@E  sig=csp ====
unsigned __int8 __thiscall AbstractClass::readFactoryINI(
        BlitTransZRemapXlat_E *this,
        unsigned __int8 *a1,
        unsigned __int8 *a2,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9)
{
  int v9; // edi
  unsigned __int8 result; // al
  int v13; // ebp

  v9 = **((_DWORD **)this + 1); /*0x491594*/
  result = a4; /*0x491596*/
  if ( a4 > 0 ) /*0x49159c*/
  {
    v13 = a4; /*0x4915a9*/
    do /*0x4915ce*/
    {
      result = *a2++; /*0x4915ab*/
      if ( result ) /*0x4915b4*/
      {
        result = *(_BYTE *)(*(unsigned __int8 *)(result + v9) + *((_DWORD *)this + 2)); /*0x4915c7*/
        *a1 = result; /*0x4915ca*/
      }
      ++a1; /*0x4915cc*/
      --v13; /*0x4915cd*/
    }
    while ( v13 ); /*0x4915ce*/
  }
  return result; /*0x4915d3*/
}


// ==== 0x004915E0  ?$BlitTransZRemapXlat@E::writeFactoryINI  this=?$BlitTransZRemapXlat@E  sig=csp ====
int __thiscall AbstractClass::writeFactoryINI(
        BlitTransZRemapXlat_E *this,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8)
{
  return (*((int (__thiscall **)(BlitTransZRemapXlat_E *, int, int, int, int, int, int, int, _DWORD))this->vfptr + 1))( /*0x49160a*/
           this,
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           0);
}


// ==== 0x00491610  ?$BlitTransZRemapXlat@E::resetFactoryState  this=?$BlitTransZRemapXlat@E  sig=csp ====
int __thiscall AbstractClass::resetFactoryState(
        BlitTransZRemapXlat_E *this,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10)
{
  return (*((int (__thiscall **)(BlitTransZRemapXlat_E *, int, int, int, int, int, int, int, _DWORD))this->vfptr + 1))( /*0x49163a*/
           this,
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           0);
}


// ==== 0x00491640  ?$BlitTransZRemapXlat@E::validateFactory  this=?$BlitTransZRemapXlat@E  sig=csp ====
int __thiscall AbstractClass::validateFactory(
        BlitTransZRemapXlat_E *this,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9)
{
  return (*((int (__thiscall **)(BlitTransZRemapXlat_E *, int, int, int, int, int, int, int, _DWORD))this->vfptr + 1))( /*0x49166a*/
           this,
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           0);
}


// ==== 0x00491670  _BlitTransRemapDest_E::method  this=?$BlitTransRemapDest@E  sig=csp ====
char __thiscall sub_491670(
        BlitTransRemapDest_E *this,
        _BYTE *a1,
        char *a2,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9)
{
  char result; // al
  int v12; // edi

  result = a4; /*0x491670*/
  if ( a4 > 0 ) /*0x491676*/
  {
    v12 = a4; /*0x491683*/
    do /*0x49169a*/
    {
      result = *a2++; /*0x491685*/
      if ( result ) /*0x49168a*/
      {
        result = *(_BYTE *)(*((_DWORD *)this + 1) + (unsigned __int8)*a1); /*0x491693*/
        *a1 = result; /*0x491696*/
      }
      ++a1; /*0x491698*/
      --v12; /*0x491699*/
    }
    while ( v12 ); /*0x49169a*/
  }
  return result; /*0x49169f*/
}


// ==== 0x004916B0  _BlitTransRemapDest_E::method_4916B0  this=?$BlitTransRemapDest@E  sig=csp ====
int __thiscall sub_4916B0(BlitTransRemapDest_E *this, int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
  return (*((int (__thiscall **)(BlitTransRemapDest_E *, int, int, int, int, int, int, int, _DWORD))this->vfptr + 1))( /*0x4916da*/
           this,
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           0);
}


// ==== 0x004916E0  _BlitTransRemapDest_E::method_4916E0  this=?$BlitTransRemapDest@E  sig=csp ====
int __thiscall sub_4916E0(
        BlitTransRemapDest_E *this,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10)
{
  return (*((int (__thiscall **)(BlitTransRemapDest_E *, int, int, int, int, int, int, int, _DWORD))this->vfptr + 1))( /*0x49170a*/
           this,
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           0);
}


// ==== 0x00491710  _BlitTransRemapDest_E::method  this=?$BlitTransRemapDest@E  sig=csp ====
int __thiscall sub_491710(BlitTransRemapDest_E *this, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
  return (*((int (__thiscall **)(BlitTransRemapDest_E *, int, int, int, int, int, int, int, _DWORD))this->vfptr + 1))( /*0x49173a*/
           this,
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           0);
}


// ==== 0x00491740  _BlitTransRemapXlat_E::method  this=?$BlitTransRemapXlat@E  sig=csp ====
unsigned __int8 __thiscall sub_491740(
        BlitTransRemapXlat_E *this,
        unsigned __int8 *a1,
        unsigned __int8 *a2,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9)
{
  unsigned __int8 result; // al
  int v12; // edi

  result = a4; /*0x491740*/
  if ( a4 > 0 ) /*0x491746*/
  {
    v12 = a4; /*0x491754*/
    do /*0x49177d*/
    {
      result = *a2++; /*0x491756*/
      if ( result ) /*0x49175f*/
      {
        result = *(_BYTE *)(*(unsigned __int8 *)(*((_DWORD *)this + 1) + result) + *((_DWORD *)this + 2)); /*0x491776*/
        *a1 = result; /*0x491779*/
      }
      ++a1; /*0x49177b*/
      --v12; /*0x49177c*/
    }
    while ( v12 ); /*0x49177d*/
  }
  return result; /*0x491783*/
}


// ==== 0x00491790  _BlitTransRemapXlat_E::method  this=?$BlitTransRemapXlat@E  sig=csp ====
int __thiscall sub_491790(BlitTransRemapXlat_E *this, int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
  return (*((int (__thiscall **)(BlitTransRemapXlat_E *, int, int, int, int, int, int, int, _DWORD))this->vfptr + 1))( /*0x4917ba*/
           this,
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           0);
}


// ==== 0x004917C0  _BlitTransRemapXlat_E::method_4917C0  this=?$BlitTransRemapXlat@E  sig=csp ====
int __thiscall sub_4917C0(
        BlitTransRemapXlat_E *this,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10)
{
  return (*((int (__thiscall **)(BlitTransRemapXlat_E *, int, int, int, int, int, int, int, _DWORD))this->vfptr + 1))( /*0x4917ea*/
           this,
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           0);
}


// ==== 0x004917F0  _BlitTransRemapXlat_E::method_4917F0  this=?$BlitTransRemapXlat@E  sig=csp ====
int __thiscall sub_4917F0(BlitTransRemapXlat_E *this, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
  return (*((int (__thiscall **)(BlitTransRemapXlat_E *, int, int, int, int, int, int, int, _DWORD))this->vfptr + 1))( /*0x49181a*/
           this,
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           0);
}


// ==== 0x00491820  _RLEBlitTransXlat_E::method  this=RLEBlitTransXlat  sig=csp ====
int __thiscall sub_491820(
        int *this,
        int a2,
        unsigned __int8 *a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11)
{
  int result; // eax
  int v13; // esi
  int v16; // edi
  unsigned __int8 v17; // al
  unsigned __int8 v18; // [esp+18h] [ebp+Ch]

  result = a5; /*0x491820*/
  v13 = a2; /*0x49182a*/
  if ( a5 <= 0 ) /*0x491833*/
  {
    v16 = a4; /*0x491856*/
  }
  else
  {
    do /*0x491848*/
    {
      if ( *a3++ ) /*0x491835*/
        --result; /*0x491845*/
      else
        result -= *a3++; /*0x491840*/
    }
    while ( result > 0 ); /*0x491848*/
    result = -result; /*0x49184e*/
    v13 = result + a2; /*0x491850*/
    v16 = a4 - result; /*0x491852*/
  }
  while ( v16 > 0 ) /*0x49185c*/
  {
    v17 = *a3++; /*0x49185e*/
    v18 = v17; /*0x491863*/
    if ( v17 ) /*0x491867*/
    {
      result = *(this + 1); /*0x491883*/
      ++v13; /*0x49188c*/
      --v16; /*0x49188d*/
      *(_BYTE *)(v13 - 1) = *(_BYTE *)(result + v18); /*0x491891*/
    }
    else
    {
      LOBYTE(result) = *a3++; /*0x491869*/
      result = (unsigned __int8)result; /*0x491874*/
      v16 -= (unsigned __int8)result; /*0x491879*/
      v13 += (unsigned __int8)result; /*0x49187b*/
    }
  }
  return result; /*0x491898*/
}


// ==== 0x004918A0  _RLEBlitTransXlat_E::method_4918A0  this=RLEBlitTransXlat  sig=csp ====
int __thiscall sub_4918A0(
        void *this,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12)
{
  return (*(int (__thiscall **)(void *, int, int, int, int, int, int, int, int, int, int))(*(_DWORD *)this + 4))( /*0x4918d7*/
           this,
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           a9,
           a10,
           a11);
}


// ==== 0x004918E0  _RLEBlitTransZRemapXlat_E::method_4918E0  this=?$RLEBlitTransZRemapXlat@E  sig=csp ====
char __thiscall sub_4918E0(
        RLEBlitTransZRemapXlat_E *this,
        int arg0,
        unsigned __int8 *a2,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11)
{
  int v13; // esi
  int v14; // ecx
  int v15; // eax
  int v17; // edi
  unsigned __int8 v18; // al

  v13 = arg0; /*0x4918e9*/
  v14 = **((_DWORD **)this + 1); /*0x4918f1*/
  v15 = a5; /*0x4918f3*/
  if ( a5 <= 0 ) /*0x4918f9*/
  {
    v17 = a4; /*0x49191c*/
  }
  else
  {
    do /*0x49190e*/
    {
      if ( *a2++ ) /*0x4918fb*/
        --v15; /*0x49190b*/
      else
        v15 -= *a2++; /*0x491906*/
    }
    while ( v15 > 0 ); /*0x49190e*/
    v15 = -v15; /*0x491914*/
    v13 = v15 + arg0; /*0x491916*/
    v17 = a4 - v15; /*0x491918*/
  }
  while ( v17 > 0 ) /*0x491922*/
  {
    v18 = *a2++; /*0x491924*/
    if ( v18 ) /*0x49192d*/
    {
      ++v13; /*0x491950*/
      --v17; /*0x491951*/
      LOBYTE(v15) = *(_BYTE *)(*(unsigned __int8 *)(v18 + v14) + *((_DWORD *)this + 2)); /*0x491958*/
      *(_BYTE *)(v13 - 1) = v15; /*0x49195b*/
    }
    else
    {
      LOBYTE(v15) = *a2++; /*0x49192f*/
      v17 -= (unsigned __int8)v15; /*0x49193f*/
      v13 += (unsigned __int8)v15; /*0x491941*/
    }
  }
  return v15; /*0x491962*/
}


// ==== 0x00491970  _RLEBlitTransZRemapXlat_E::method  this=?$RLEBlitTransZRemapXlat@E  sig=csp ====
int __thiscall sub_491970(
        RLEBlitTransZRemapXlat_E *this,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12)
{
  return (*((int (__thiscall **)(RLEBlitTransZRemapXlat_E *, int, int, int, int, int, int, int, int, int, int))this->vfptr /*0x4919a7*/
          + 1))(
           this,
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           a9,
           a10,
           a11);
}


// ==== 0x004919B0  _RLEBlitTransRemapDest_E::method_4919B0  this=?$RLEBlitTransRemapDest@E  sig=csp ====
int __thiscall sub_4919B0(
        RLEBlitTransRemapDest_E *this,
        unsigned __int8 *a1,
        unsigned __int8 *a2,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11)
{
  int result; // eax
  unsigned __int8 *v13; // esi
  int v16; // edi
  int v18; // ecx

  result = a5; /*0x4919b0*/
  v13 = a1; /*0x4919ba*/
  if ( a5 <= 0 ) /*0x4919c3*/
  {
    v16 = a4; /*0x4919e6*/
  }
  else
  {
    do /*0x4919d8*/
    {
      if ( *a2++ ) /*0x4919c5*/
        --result; /*0x4919d5*/
      else
        result -= *a2++; /*0x4919d0*/
    }
    while ( result > 0 ); /*0x4919d8*/
    result = -result; /*0x4919de*/
    v13 = &a1[result]; /*0x4919e0*/
    v16 = a4 - result; /*0x4919e2*/
  }
  while ( v16 > 0 ) /*0x4919ec*/
  {
    if ( *a2++ ) /*0x4919ee*/
    {
      result = *((_DWORD *)this + 1); /*0x491a0b*/
      v18 = *v13; /*0x491a10*/
      --v16; /*0x491a12*/
      *v13++ = *(_BYTE *)(result + v18); /*0x491a17*/
    }
    else
    {
      LOBYTE(result) = *a2++; /*0x4919f5*/
      result = (unsigned __int8)result; /*0x491a00*/
      v16 -= (unsigned __int8)result; /*0x491a05*/
      v13 += (unsigned __int8)result; /*0x491a07*/
    }
  }
  return result; /*0x491a1e*/
}


// ==== 0x00491A30  _RLEBlitTransRemapDest_E::method_491A30  this=?$RLEBlitTransRemapDest@E  sig=csp ====
int __thiscall sub_491A30(
        RLEBlitTransRemapDest_E *this,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12)
{
  return (*((int (__thiscall **)(RLEBlitTransRemapDest_E *, int, int, int, int, int, int, int, int, int, int))this->vfptr /*0x491a67*/
          + 1))(
           this,
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           a9,
           a10,
           a11);
}


// ==== 0x00491A70  _RLEBlitTransRemapXlat_E::method_491A70  this=?$RLEBlitTransRemapXlat@E  sig=csp ====
char __thiscall sub_491A70(
        RLEBlitTransRemapXlat_E *this,
        int arg0,
        unsigned __int8 *a2,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11)
{
  int v11; // eax
  int v13; // esi
  int v16; // edi
  unsigned __int8 v17; // al

  v11 = a5; /*0x491a70*/
  v13 = arg0; /*0x491a7a*/
  if ( a5 <= 0 ) /*0x491a83*/
  {
    v16 = a4; /*0x491aa6*/
  }
  else
  {
    do /*0x491a98*/
    {
      if ( *a2++ ) /*0x491a85*/
        --v11; /*0x491a95*/
      else
        v11 -= *a2++; /*0x491a90*/
    }
    while ( v11 > 0 ); /*0x491a98*/
    v11 = -v11; /*0x491a9e*/
    v13 = v11 + arg0; /*0x491aa0*/
    v16 = a4 - v11; /*0x491aa2*/
  }
  while ( v16 > 0 ) /*0x491aac*/
  {
    v17 = *a2++; /*0x491aaf*/
    if ( v17 ) /*0x491ab8*/
    {
      ++v13; /*0x491adf*/
      --v16; /*0x491ae0*/
      LOBYTE(v11) = *(_BYTE *)(*(unsigned __int8 *)(*((_DWORD *)this + 1) + v17) + *((_DWORD *)this + 2)); /*0x491ae7*/
      *(_BYTE *)(v13 - 1) = v11; /*0x491aea*/
    }
    else
    {
      LOBYTE(v11) = *a2++; /*0x491aba*/
      v16 -= (unsigned __int8)v11; /*0x491aca*/
      v13 += (unsigned __int8)v11; /*0x491acc*/
    }
  }
  return v11; /*0x491af2*/
}


// ==== 0x00491B00  _RLEBlitTransRemapXlat_E::method_491B00  this=?$RLEBlitTransRemapXlat@E  sig=csp ====
int __thiscall sub_491B00(
        RLEBlitTransRemapXlat_E *this,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12)
{
  return (*((int (__thiscall **)(RLEBlitTransRemapXlat_E *, int, int, int, int, int, int, int, int, int, int))this->vfptr /*0x491b37*/
          + 1))(
           this,
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           a9,
           a10,
           a11);
}


// ==== 0x00491B40  _RLEBlitTransXlatZRead_E::method_491B40  this=RLEBlitTransXlatZRead  sig=csp ====
int __thiscall sub_491B40(
        _DWORD *this,
        _BYTE *a2,
        unsigned __int8 *a3,
        int a4,
        int a5,
        int a6,
        unsigned int a7,
        int a8,
        int a9,
        int a10,
        char *a11)
{
  int result; // eax
  _BYTE *v14; // esi
  unsigned int v15; // edx
  int v17; // eax
  int v18; // edi
  unsigned __int8 v19; // al
  unsigned __int8 v20; // al
  int v21; // ebp

  result = a5; /*0x491b41*/
  v14 = a2; /*0x491b58*/
  v15 = a7; /*0x491b5f*/
  if ( a5 <= 0 ) /*0x491b61*/
  {
    v18 = a4; /*0x491b9a*/
  }
  else
  {
    do /*0x491b76*/
    {
      if ( *a3++ ) /*0x491b63*/
        --result; /*0x491b73*/
      else
        result -= *a3++; /*0x491b6e*/
    }
    while ( result > 0 ); /*0x491b76*/
    v17 = -result; /*0x491b82*/
    v14 = &a2[v17]; /*0x491b84*/
    v18 = a4 - v17; /*0x491b86*/
    result = a7 + 2 * v17; /*0x491b88*/
    if ( (unsigned int)result >= *((_DWORD *)MEMORY[0x887644] + 7) ) /*0x491b91*/
      result -= *((_DWORD *)MEMORY[0x887644] + 8); /*0x491b93*/
    v15 = result; /*0x491b96*/
  }
  while ( v18 > 0 ) /*0x491ba0*/
  {
    v19 = *a3++; /*0x491ba2*/
    if ( v19 ) /*0x491bab*/
    {
      v15 += 2; /*0x491bcf*/
      v21 = a6 - *a11++; /*0x491bd2*/
      if ( v21 < *(unsigned __int16 *)(v15 - 2) ) /*0x491bdd*/
        *v14 = *(_BYTE *)(v19 + *(this + 1)); /*0x491bf2*/
      ++v14; /*0x491bf4*/
      --v18; /*0x491bf5*/
    }
    else
    {
      v20 = *a3++; /*0x491bad*/
      v18 -= v20; /*0x491bbd*/
      v14 += v20; /*0x491bbf*/
      v15 += 2 * v20; /*0x491bc1*/
      a11 += v20; /*0x491bc4*/
    }
    result = (int)MEMORY[0x887644]; /*0x491bf6*/
    if ( v15 >= *((_DWORD *)MEMORY[0x887644] + 7) ) /*0x491bfe*/
      v15 -= *((_DWORD *)MEMORY[0x887644] + 8); /*0x491c00*/
  }
  return result; /*0x491c07*/
}


// ==== 0x00491C10  _RLEBlitTransXlatZRead_E::method_491C10  this=RLEBlitTransXlatZRead  sig=csp ====
int __thiscall sub_491C10(
        void *this,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12)
{
  return (*(int (__thiscall **)(void *, int, int, int, int, int, int, int, int, int, int))(*(_DWORD *)this + 4))( /*0x491c47*/
           this,
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           a9,
           a10,
           a11);
}


// ==== 0x00491C50  _RLEBlitTransZRemapXlatZRead_E::method_491C50  this=?$RLEBlitTransZRemapXlatZRead@E  sig=csp ====
int __thiscall sub_491C50(
        RLEBlitTransZRemapXlatZRead_E *this,
        _BYTE *a1,
        unsigned __int8 *a2,
        int a4,
        int a5,
        int a6,
        unsigned int a7,
        int a8,
        int a9,
        int _38,
        char *a10)
{
  char *v12; // edx
  int result; // eax
  TacticalMap *v14; // ecx
  _BYTE *v15; // esi
  unsigned int v16; // edx
  int v18; // eax
  int v19; // edi
  unsigned __int8 v20; // al
  int v21; // ebp
  unsigned __int8 v24; // [esp+20h] [ebp+Ch]
  unsigned __int8 v25; // [esp+20h] [ebp+Ch]
  char *a10a; // [esp+3Ch] [ebp+28h]

  v12 = (char *)**((_DWORD **)this + 1); /*0x491c65*/
  result = a5; /*0x491c67*/
  v14 = *(TacticalMap **)&MEMORY[0x87F8E4].__pad_5568[10232]; /*0x491c6b*/
  v15 = a1; /*0x491c77*/
  a10a = v12; /*0x491c7b*/
  v16 = a7; /*0x491c82*/
  if ( a5 <= 0 ) /*0x491c84*/
  {
    v19 = a4; /*0x491cb7*/
  }
  else
  {
    do /*0x491c99*/
    {
      if ( *a2++ ) /*0x491c86*/
        --result; /*0x491c96*/
      else
        result -= *a2++; /*0x491c91*/
    }
    while ( result > 0 ); /*0x491c99*/
    v18 = -result; /*0x491ca2*/
    v15 = &a1[v18]; /*0x491ca4*/
    v19 = a4 - v18; /*0x491ca6*/
    result = a7 + 2 * v18; /*0x491ca8*/
    if ( (unsigned int)result >= *(_DWORD *)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[10232] + 28) ) /*0x491cae*/
      result -= *(_DWORD *)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[10232] + 32); /*0x491cb0*/
    v16 = result; /*0x491cb3*/
  }
  while ( v19 > 0 ) /*0x491cbd*/
  {
    v20 = *a2++; /*0x491cbf*/
    v24 = v20; /*0x491cc4*/
    if ( v20 ) /*0x491cc8*/
    {
      v16 += 2; /*0x491cf5*/
      v21 = a6 - *a10; /*0x491cfb*/
      result = (int)++a10; /*0x491d03*/
      if ( v21 < *(unsigned __int16 *)(v16 - 2) ) /*0x491d0a*/
      {
        result = *((_DWORD *)this + 2); /*0x491d22*/
        *v15 = *(_BYTE *)((unsigned __int8)a10a[v24] + result); /*0x491d28*/
      }
      v14 = *(TacticalMap **)&MEMORY[0x87F8E4].__pad_5568[10232]; /*0x491d2a*/
      ++v15; /*0x491d30*/
      --v19; /*0x491d31*/
    }
    else
    {
      v25 = *a2++; /*0x491cd0*/
      result = v25; /*0x491cd9*/
      v19 -= v25; /*0x491cde*/
      v15 += v25; /*0x491ce0*/
      v16 += 2 * v25; /*0x491ce4*/
      a10 += v25; /*0x491ce7*/
    }
    if ( v16 >= v14->TacticalMap_field_1C ) /*0x491d35*/
      v16 -= v14->TacticalMap_field_20; /*0x491d37*/
  }
  return result; /*0x491d3e*/
}


// ==== 0x00491D50  _RLEBlitTransZRemapXlatZRead_E::method_491D50  this=?$RLEBlitTransZRemapXlatZRead@E  sig=csp ====
int __thiscall sub_491D50(
        RLEBlitTransZRemapXlatZRead_E *this,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12)
{
  return (*((int (__thiscall **)(RLEBlitTransZRemapXlatZRead_E *, int, int, int, int, int, int, int, int, int, int))this->vfptr /*0x491d87*/
          + 1))(
           this,
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           a9,
           a10,
           a11);
}


// ==== 0x00491D90  _RLEBlitTransRemapDestZRead_E::method_491D90  this=?$RLEBlitTransRemapDestZRead@E  sig=csp ====
char __thiscall sub_491D90(
        RLEBlitTransRemapDestZRead_E *this,
        unsigned __int8 *a1,
        unsigned __int8 *a2,
        RLEBlitTransRemapDestZRead_E *aP3,
        int a5,
        int a6,
        unsigned int a7,
        int a8,
        int a9,
        int _38,
        char *a10)
{
  int v11; // eax
  unsigned int v12; // edx
  unsigned __int8 *v14; // esi
  TacticalMap *v15; // ecx
  int v18; // eax
  RLEBlitTransRemapDestZRead_E *v19; // ebx

  v11 = a5; /*0x491d91*/
  v12 = a7; /*0x491d95*/
  v14 = a1; /*0x491da0*/
  v15 = *(TacticalMap **)&stru_87C374.__pad_579C[23348]; /*0x491da8*/
  if ( a5 <= 0 ) /*0x491db5*/
  {
    v19 = aP3; /*0x491de7*/
  }
  else
  {
    do /*0x491dca*/
    {
      if ( *a2++ ) /*0x491db7*/
        --v11; /*0x491dc7*/
      else
        v11 -= *a2++; /*0x491dc2*/
    }
    while ( v11 > 0 ); /*0x491dca*/
    v18 = -v11; /*0x491dd0*/
    v14 = &a1[v18]; /*0x491dd2*/
    v19 = (RLEBlitTransRemapDestZRead_E *)((char *)aP3 - v18); /*0x491dd4*/
    v11 = a7 + 2 * v18; /*0x491dd6*/
    if ( (unsigned int)v11 >= *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[23348] + 28) ) /*0x491dde*/
      v11 -= *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[23348] + 32); /*0x491de0*/
    v12 = v11; /*0x491de3*/
  }
  while ( (int)v19 > 0 ) /*0x491ded*/
  {
    if ( *a2++ ) /*0x491def*/
    {
      v12 += 2; /*0x491e19*/
      v11 = a6 - *a10++; /*0x491e1c*/
      if ( v11 >= *(unsigned __int16 *)(v12 - 2) ) /*0x491e27*/
      {
        ++v14; /*0x491e3e*/
        v19 = (RLEBlitTransRemapDestZRead_E *)((char *)v19 - 1); /*0x491e3f*/
      }
      else
      {
        v11 = *v14; /*0x491e2f*/
        v19 = (RLEBlitTransRemapDestZRead_E *)((char *)v19 - 1); /*0x491e31*/
        ++v14; /*0x491e35*/
        LOBYTE(v11) = *(_BYTE *)(*((_DWORD *)this + 1) + v11); /*0x491e36*/
        *(v14 - 1) = v11; /*0x491e39*/
      }
      v15 = *(TacticalMap **)&stru_87C374.__pad_579C[23348]; /*0x491e40*/
    }
    else
    {
      LOBYTE(v11) = *a2++; /*0x491df6*/
      v19 = (RLEBlitTransRemapDestZRead_E *)((char *)v19 - (unsigned __int8)v11); /*0x491e06*/
      v14 += (unsigned __int8)v11; /*0x491e08*/
      a10 += (unsigned __int8)v11; /*0x491e0a*/
      v12 += 2 * (unsigned __int8)v11; /*0x491e0c*/
    }
    if ( v12 >= v15->TacticalMap_field_1C ) /*0x491e49*/
      v12 -= v15->TacticalMap_field_20; /*0x491e4b*/
  }
  return v11; /*0x491e52*/
}


// ==== 0x00491E60  _RLEBlitTransRemapDestZRead_E::method_491E60  this=?$RLEBlitTransRemapDestZRead@E  sig=csp ====
int __thiscall sub_491E60(
        RLEBlitTransRemapDestZRead_E *this,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12)
{
  return (*((int (__thiscall **)(RLEBlitTransRemapDestZRead_E *, int, int, int, int, int, int, int, int, int, int))this->vfptr /*0x491e97*/
          + 1))(
           this,
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           a9,
           a10,
           a11);
}


// ==== 0x00491EA0  _RLEBlitTransRemapXlatZRead_E::method_491EA0  this=?$RLEBlitTransRemapXlatZRead@E  sig=csp ====
int __thiscall sub_491EA0(
        RLEBlitTransRemapXlatZRead_E *this,
        int arg0,
        unsigned __int8 *a2,
        int a4,
        int a5,
        int a6,
        unsigned int a7,
        int a8,
        int a9,
        int _38,
        char *a10)
{
  int result; // eax
  int v14; // esi
  unsigned int v15; // edx
  int v17; // eax
  int v18; // edi
  unsigned __int8 v19; // al
  unsigned __int8 v20; // al
  int v21; // ebp

  result = a5; /*0x491ea1*/
  v14 = arg0; /*0x491eb8*/
  v15 = a7; /*0x491ebf*/
  if ( a5 <= 0 ) /*0x491ec1*/
  {
    v18 = a4; /*0x491efa*/
  }
  else
  {
    do /*0x491ed6*/
    {
      if ( *a2++ ) /*0x491ec3*/
        --result; /*0x491ed3*/
      else
        result -= *a2++; /*0x491ece*/
    }
    while ( result > 0 ); /*0x491ed6*/
    v17 = -result; /*0x491ee2*/
    v14 = v17 + arg0; /*0x491ee4*/
    v18 = a4 - v17; /*0x491ee6*/
    result = a7 + 2 * v17; /*0x491ee8*/
    if ( (unsigned int)result >= *(_DWORD *)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[10232] + 28) ) /*0x491ef1*/
      result -= *(_DWORD *)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[10232] + 32); /*0x491ef3*/
    v15 = result; /*0x491ef6*/
  }
  while ( v18 > 0 ) /*0x491f00*/
  {
    v19 = *a2++; /*0x491f02*/
    if ( v19 ) /*0x491f0b*/
    {
      v15 += 2; /*0x491f2f*/
      v21 = a6 - *a10++; /*0x491f32*/
      ++v14; /*0x491f56*/
      --v18; /*0x491f57*/
      if ( v21 < *(unsigned __int16 *)(v15 - 2) ) /*0x491f41*/
        *(_BYTE *)(v14 - 1) = *(_BYTE *)(*(unsigned __int8 *)(v19 + *((_DWORD *)this + 1)) + *((_DWORD *)this + 2)); /*0x491f69*/
    }
    else
    {
      v20 = *a2++; /*0x491f0d*/
      v18 -= v20; /*0x491f1d*/
      v14 += v20; /*0x491f1f*/
      a10 += v20; /*0x491f21*/
      v15 += 2 * v20; /*0x491f23*/
    }
    result = *(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[10232]; /*0x491f70*/
    if ( v15 >= *(_DWORD *)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[10232] + 28) ) /*0x491f78*/
      v15 -= *(_DWORD *)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[10232] + 32); /*0x491f7a*/
  }
  return result; /*0x491f81*/
}


// ==== 0x00491F90  _RLEBlitTransRemapXlatZRead_E::method_491F90  this=?$RLEBlitTransRemapXlatZRead@E  sig=csp ====
int __thiscall sub_491F90(
        RLEBlitTransRemapXlatZRead_E *this,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12)
{
  return (*((int (__thiscall **)(RLEBlitTransRemapXlatZRead_E *, int, int, int, int, int, int, int, int, int, int))this->vfptr /*0x491fc7*/
          + 1))(
           this,
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           a9,
           a10,
           a11);
}


// ==== 0x00491FD0  _RLEBlitTransXlatZReadWrite_E::method_491FD0  this=?$RLEBlitTransXlatZReadWrite@E  sig=csp ====
_WORD *__thiscall sub_491FD0(
        RLEBlitTransXlatZReadWrite_E *this,
        int arg0,
        unsigned __int8 *a2,
        RLEBlitTransXlatZReadWrite_E *aP3,
        int a5,
        int arg10,
        _WORD *a6,
        int a8,
        int a9,
        int _38,
        char *a10)
{
  int v11; // edx
  _WORD *result; // eax
  int v14; // esi
  TacticalMap *v15; // ecx
  int v18; // edx
  RLEBlitTransXlatZReadWrite_E *v19; // ebx
  unsigned __int8 v20; // dl
  unsigned __int8 v21; // dl

  v11 = a5; /*0x491fd1*/
  result = a6; /*0x491fd5*/
  v14 = arg0; /*0x491fe0*/
  v15 = *(TacticalMap **)&stru_87C374.__pad_579C[23348]; /*0x491fe8*/
  if ( a5 <= 0 ) /*0x491ff5*/
  {
    v19 = aP3; /*0x492027*/
  }
  else
  {
    do /*0x49200c*/
    {
      if ( *a2++ ) /*0x491ff7*/
        --v11; /*0x492009*/
      else
        v11 -= *a2++; /*0x492004*/
    }
    while ( v11 > 0 ); /*0x49200c*/
    v18 = -v11; /*0x492012*/
    v14 = v18 + arg0; /*0x492014*/
    v19 = (RLEBlitTransXlatZReadWrite_E *)((char *)aP3 - v18); /*0x492016*/
    result = &a6[v18]; /*0x492018*/
    if ( (unsigned int)result >= *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[23348] + 28) ) /*0x492020*/
      result = (_WORD *)((char *)result - *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[23348] + 32)); /*0x492022*/
  }
  while ( (int)v19 > 0 ) /*0x49202d*/
  {
    v20 = *a2++; /*0x49202f*/
    if ( v20 ) /*0x492039*/
    {
      ++v14; /*0x492078*/
      if ( arg10 - *a10 < (unsigned __int16)*result ) /*0x492068*/
      {
        *(_BYTE *)(v14 - 1) = *(_BYTE *)(*((_DWORD *)this + 1) + v20); /*0x49207f*/
        *result = arg10 - *a10; /*0x49208c*/
      }
      v15 = *(TacticalMap **)&stru_87C374.__pad_579C[23348]; /*0x492092*/
      ++result; /*0x492098*/
      ++a10; /*0x49209b*/
      v19 = (RLEBlitTransXlatZReadWrite_E *)((char *)v19 - 1); /*0x49209c*/
    }
    else
    {
      v21 = *a2++; /*0x49203b*/
      v19 = (RLEBlitTransXlatZReadWrite_E *)((char *)v19 - v21); /*0x49204d*/
      v14 += v21; /*0x49204f*/
      a10 += v21; /*0x492051*/
      result += v21; /*0x492053*/
    }
    if ( (unsigned int)result >= v15->TacticalMap_field_1C ) /*0x4920a0*/
      result = (_WORD *)((char *)result - v15->TacticalMap_field_20); /*0x4920a2*/
  }
  return result; /*0x4920a9*/
}


// ==== 0x004920C0  _RLEBlitTransXlatZReadWrite_E::method_4920C0  this=?$RLEBlitTransXlatZReadWrite@E  sig=csp ====
int __thiscall sub_4920C0(
        RLEBlitTransXlatZReadWrite_E *this,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12)
{
  return (*((int (__thiscall **)(RLEBlitTransXlatZReadWrite_E *, int, int, int, int, int, int, int, int, int, int))this->vfptr /*0x4920f7*/
          + 1))(
           this,
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           a9,
           a10,
           a11);
}


// ==== 0x00492100  _RLEBlitTransZRemapXlatZReadWrite_E::method  this=?$RLEBlitTransZRemapXlatZReadWrite@E  sig=csp ====
unsigned __int16 *__thiscall sub_492100(
        RLEBlitTransZRemapXlatZReadWrite_E *this,
        int arg0,
        unsigned __int8 *a2,
        int a4,
        int a5,
        int arg10,
        unsigned __int16 *a6,
        int a8,
        int a9,
        int _38,
        char *a10)
{
  unsigned __int16 *result; // eax
  int v13; // ecx
  int v14; // esi
  int v17; // ecx
  int v18; // ebx
  unsigned __int8 v19; // cl
  unsigned __int8 v20; // cl
  int v21; // ecx
  char *v22; // edi
  __int16 v23; // cx
  unsigned __int8 *a2a; // [esp+1Ch] [ebp+8h]
  unsigned __int8 v26; // [esp+20h] [ebp+Ch]

  result = a6; /*0x492110*/
  a2a = (unsigned __int8 *)**((_DWORD **)this + 1); /*0x492114*/
  v13 = a5; /*0x492118*/
  v14 = arg0; /*0x49211d*/
  if ( a5 <= 0 ) /*0x492128*/
  {
    v18 = a4; /*0x49215e*/
  }
  else
  {
    do /*0x49213f*/
    {
      if ( *a2++ ) /*0x49212a*/
        --v13; /*0x49213c*/
      else
        v13 -= *a2++; /*0x492137*/
    }
    while ( v13 > 0 ); /*0x49213f*/
    v17 = -v13; /*0x492145*/
    v14 = v17 + arg0; /*0x492147*/
    v18 = a4 - v17; /*0x492149*/
    result = &a6[v17]; /*0x49214b*/
    if ( (unsigned int)result >= *(_DWORD *)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[10232] + 28) ) /*0x492157*/
      result = (unsigned __int16 *)((char *)result - *(_DWORD *)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[10232] + 32)); /*0x492159*/
  }
  while ( v18 > 0 ) /*0x492164*/
  {
    v19 = *a2++; /*0x49216a*/
    v26 = v19; /*0x492170*/
    if ( v19 ) /*0x492178*/
    {
      v21 = arg10 - *a10; /*0x49219e*/
      v22 = a10 + 1; /*0x4921a5*/
      if ( v21 >= *result ) /*0x4921a8*/
      {
        a10 = v22 + 1; /*0x4921e4*/
        ++v14; /*0x4921e5*/
        ++result; /*0x4921e6*/
      }
      else
      {
        ++v14; /*0x4921ba*/
        ++result; /*0x4921bb*/
        *(_BYTE *)(v14 - 1) = *(_BYTE *)(a2a[v26] + *((_DWORD *)this + 2)); /*0x4921cf*/
        v23 = *v22; /*0x4921d6*/
        a10 = v22 + 1; /*0x4921dc*/
        *(result - 1) = arg10 - v23; /*0x4921dd*/
      }
      --v18; /*0x4921e1*/
    }
    else
    {
      v20 = *a2++; /*0x49217a*/
      v18 -= v20; /*0x49218c*/
      v14 += v20; /*0x49218e*/
      a10 += v20; /*0x492190*/
      result += v20; /*0x492192*/
    }
    if ( (unsigned int)result >= *(_DWORD *)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[10232] + 28) ) /*0x4921f3*/
      result = (unsigned __int16 *)((char *)result - *(_DWORD *)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[10232] + 32)); /*0x4921f5*/
  }
  return result; /*0x492200*/
}


// ==== 0x00492210  _RLEBlitTransZRemapXlatZReadWrite_E::method  this=?$RLEBlitTransZRemapXlatZReadWrite@E  sig=csp ====
int __thiscall sub_492210(
        RLEBlitTransZRemapXlatZReadWrite_E *this,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12)
{
  return (*((int (__thiscall **)(RLEBlitTransZRemapXlatZReadWrite_E *, int, int, int, int, int, int, int, int, int, int))this->vfptr /*0x492247*/
          + 1))(
           this,
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           a9,
           a10,
           a11);
}


// ==== 0x00492250  _RLEBlitTransRemapDestZReadWrite_E::method  this=?$RLEBlitTransRemapDestZReadWrite@E  sig=csp ====
unsigned __int16 *__thiscall sub_492250(
        RLEBlitTransRemapDestZReadWrite_E *this,
        _BYTE *a1,
        unsigned __int8 *a2,
        RLEBlitTransRemapDestZReadWrite_E *aP3,
        int a5,
        int arg10,
        unsigned __int16 *a6,
        int a8,
        int a9,
        int _38,
        char *a10)
{
  int v11; // edx
  unsigned __int16 *result; // eax
  _BYTE *v14; // esi
  TacticalMap *v15; // ecx
  int v18; // edx
  RLEBlitTransRemapDestZReadWrite_E *v19; // ebx
  unsigned __int8 v21; // dl
  int v22; // edx
  char *v23; // edi
  __int16 v24; // cx

  v11 = a5; /*0x492251*/
  result = a6; /*0x492255*/
  v14 = a1; /*0x492260*/
  v15 = *(TacticalMap **)&stru_87C374.__pad_579C[23348]; /*0x492268*/
  if ( a5 <= 0 ) /*0x492275*/
  {
    v19 = aP3; /*0x4922a7*/
  }
  else
  {
    do /*0x49228c*/
    {
      if ( *a2++ ) /*0x492277*/
        --v11; /*0x492289*/
      else
        v11 -= *a2++; /*0x492284*/
    }
    while ( v11 > 0 ); /*0x49228c*/
    v18 = -v11; /*0x492292*/
    v14 = &a1[v18]; /*0x492294*/
    v19 = (RLEBlitTransRemapDestZReadWrite_E *)((char *)aP3 - v18); /*0x492296*/
    result = &a6[v18]; /*0x492298*/
    if ( (unsigned int)result >= *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[23348] + 28) ) /*0x4922a0*/
      result = (unsigned __int16 *)((char *)result - *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[23348] + 32)); /*0x4922a2*/
  }
  while ( (int)v19 > 0 ) /*0x4922ad*/
  {
    if ( *a2++ ) /*0x4922af*/
    {
      v22 = arg10 - *a10; /*0x4922db*/
      v23 = a10 + 1; /*0x4922e2*/
      if ( v22 >= *result ) /*0x4922e5*/
      {
        a10 = v23 + 1; /*0x49230d*/
        ++v14; /*0x49230e*/
        ++result; /*0x49230f*/
        v19 = (RLEBlitTransRemapDestZReadWrite_E *)((char *)v19 - 1); /*0x492312*/
      }
      else
      {
        ++result; /*0x4922ef*/
        *v14 = *(_BYTE *)(*((_DWORD *)this + 1) + (unsigned __int8)*v14); /*0x4922f8*/
        v24 = *v23; /*0x4922fe*/
        a10 = v23 + 1; /*0x492304*/
        *(result - 1) = arg10 - v24; /*0x492305*/
        v19 = (RLEBlitTransRemapDestZReadWrite_E *)((char *)v19 - 1); /*0x492309*/
        ++v14; /*0x49230a*/
      }
      v15 = *(TacticalMap **)&stru_87C374.__pad_579C[23348]; /*0x492313*/
    }
    else
    {
      v21 = *a2++; /*0x4922b7*/
      v19 = (RLEBlitTransRemapDestZReadWrite_E *)((char *)v19 - v21); /*0x4922c9*/
      v14 += v21; /*0x4922cb*/
      a10 += v21; /*0x4922cd*/
      result += v21; /*0x4922cf*/
    }
    if ( (unsigned int)result >= v15->TacticalMap_field_1C ) /*0x49231c*/
      result = (unsigned __int16 *)((char *)result - v15->TacticalMap_field_20); /*0x49231e*/
  }
  return result; /*0x492325*/
}


// ==== 0x00492330  _RLEBlitTransRemapDestZReadWrite_E::method  this=?$RLEBlitTransRemapDestZReadWrite@E  sig=csp ====
int __thiscall sub_492330(
        RLEBlitTransRemapDestZReadWrite_E *this,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12)
{
  return (*((int (__thiscall **)(RLEBlitTransRemapDestZReadWrite_E *, int, int, int, int, int, int, int, int, int, int))this->vfptr /*0x492367*/
          + 1))(
           this,
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           a9,
           a10,
           a11);
}


// ==== 0x00492370  _RLEBlitTransRemapXlatZReadWrite_E::method  this=?$RLEBlitTransRemapXlatZReadWrite@E  sig=csp ====
unsigned __int16 *__thiscall sub_492370(
        RLEBlitTransRemapXlatZReadWrite_E *this,
        _BYTE *a1,
        unsigned __int8 *a2,
        RLEBlitTransRemapXlatZReadWrite_E *aP3,
        int a5,
        int arg10,
        unsigned __int16 *a6,
        int a8,
        int a9,
        int _38,
        char *a10)
{
  int v11; // edx
  unsigned __int16 *result; // eax
  _BYTE *v14; // esi
  TacticalMap *v15; // ecx
  int v18; // edx
  RLEBlitTransRemapXlatZReadWrite_E *v19; // ebx
  unsigned __int8 v20; // dl
  unsigned __int8 v21; // dl
  __int16 v22; // dx

  v11 = a5; /*0x492371*/
  result = a6; /*0x492375*/
  v14 = a1; /*0x492380*/
  v15 = *(TacticalMap **)&stru_87C374.__pad_579C[23348]; /*0x492388*/
  if ( a5 <= 0 ) /*0x492395*/
  {
    v19 = aP3; /*0x4923c7*/
  }
  else
  {
    do /*0x4923ac*/
    {
      if ( *a2++ ) /*0x492397*/
        --v11; /*0x4923a9*/
      else
        v11 -= *a2++; /*0x4923a4*/
    }
    while ( v11 > 0 ); /*0x4923ac*/
    v18 = -v11; /*0x4923b2*/
    v14 = &a1[v18]; /*0x4923b4*/
    v19 = (RLEBlitTransRemapXlatZReadWrite_E *)((char *)aP3 - v18); /*0x4923b6*/
    result = &a6[v18]; /*0x4923b8*/
    if ( (unsigned int)result >= *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[23348] + 28) ) /*0x4923c0*/
      result = (unsigned __int16 *)((char *)result - *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[23348] + 32)); /*0x4923c2*/
  }
  while ( (int)v19 > 0 ) /*0x4923cd*/
  {
    v20 = *a2++; /*0x4923d3*/
    if ( v20 ) /*0x4923e1*/
    {
      if ( arg10 - *a10 >= *result ) /*0x492410*/
      {
        v15 = *(TacticalMap **)&stru_87C374.__pad_579C[23348]; /*0x492455*/
        ++a10; /*0x49245b*/
        ++v14; /*0x49245c*/
        ++result; /*0x49245d*/
      }
      else
      {
        ++result; /*0x492420*/
        *v14++ = *(_BYTE *)(*(unsigned __int8 *)(v20 + *((_DWORD *)this + 1)) + *((_DWORD *)this + 2)); /*0x49243a*/
        v22 = *a10++; /*0x492441*/
        *(result - 1) = arg10 - v22; /*0x492448*/
        v15 = *(TacticalMap **)&stru_87C374.__pad_579C[23348]; /*0x49244c*/
      }
      v19 = (RLEBlitTransRemapXlatZReadWrite_E *)((char *)v19 - 1); /*0x492452*/
    }
    else
    {
      v21 = *a2++; /*0x4923e3*/
      v19 = (RLEBlitTransRemapXlatZReadWrite_E *)((char *)v19 - v21); /*0x4923f5*/
      v14 += v21; /*0x4923f7*/
      a10 += v21; /*0x4923f9*/
      result += v21; /*0x4923fb*/
    }
    if ( (unsigned int)result >= v15->TacticalMap_field_1C ) /*0x492464*/
      result = (unsigned __int16 *)((char *)result - v15->TacticalMap_field_20); /*0x492466*/
  }
  return result; /*0x492471*/
}


// ==== 0x00492480  _RLEBlitTransRemapXlatZReadWrite_E::method  this=?$RLEBlitTransRemapXlatZReadWrite@E  sig=csp ====
int __thiscall sub_492480(
        RLEBlitTransRemapXlatZReadWrite_E *this,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12)
{
  return (*((int (__thiscall **)(RLEBlitTransRemapXlatZReadWrite_E *, int, int, int, int, int, int, int, int, int, int))this->vfptr /*0x4924b7*/
          + 1))(
           this,
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           a9,
           a10,
           a11);
}


// ==== 0x004924C0  _BlitPlainXlat_G::method_4924C0  this=BlitPlainXlat  sig=csp ====
void __thiscall sub_4924C0(_DWORD *this, int a2, unsigned __int8 *a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
  int v9; // esi
  unsigned __int8 v12; // [esp+14h] [ebp+Ch]

  v9 = a4; /*0x4924c1*/
  if ( a4 > 0 ) /*0x4924ca*/
  {
    do /*0x4924f5*/
    {
      v12 = *a3++; /*0x4924da*/
      a2 += 2; /*0x4924e3*/
      --v9; /*0x4924ec*/
      *(_WORD *)(a2 - 2) = *(_WORD *)(*(this + 1) + 2 * v12); /*0x4924f1*/
    }
    while ( v9 ); /*0x4924f5*/
  }
}


// ==== 0x00492500  _BlitPlainXlat_G::method  this=BlitPlainXlat  sig=csp ====
int __thiscall sub_492500(void *this, int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
  return (*(int (__thiscall **)(void *, int, int, int, int, int, int, int, _DWORD))(*(_DWORD *)this + 4))( /*0x49252a*/
           this,
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           0);
}


// ==== 0x00492530  _BlitPlainXlat_G::method  this=BlitPlainXlat  sig=csp ====
int __thiscall sub_492530(void *this, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10)
{
  return (*(int (__thiscall **)(void *, int, int, int, int, int, int, int, _DWORD))(*(_DWORD *)this + 4))( /*0x49255a*/
           this,
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           0);
}


// ==== 0x00492560  _BlitPlainXlat_G::method  this=BlitPlainXlat  sig=csp ====
int __thiscall sub_492560(void *this, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
  return (*(int (__thiscall **)(void *, int, int, int, int, int, int, int, _DWORD))(*(_DWORD *)this + 4))( /*0x49258a*/
           this,
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           0);
}


// ==== 0x00492590  _BlitTransZRemapXlat_G::method  this=?$BlitTransZRemapXlat@G  sig=csp ====
char __thiscall sub_492590(
        BlitTransZRemapXlat_G *this,
        _WORD *a1,
        _BYTE *a2,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9)
{
  int v9; // edi
  __int16 v10; // ax
  int v13; // ebp

  v9 = **((_DWORD **)this + 1); /*0x492594*/
  LOBYTE(v10) = a4; /*0x492596*/
  if ( a4 > 0 ) /*0x49259c*/
  {
    v13 = a4; /*0x4925a9*/
    do /*0x4925d2*/
    {
      LOBYTE(v10) = *a2++; /*0x4925ab*/
      if ( (_BYTE)v10 ) /*0x4925b4*/
      {
        v10 = *(_WORD *)(*((_DWORD *)this + 2) + 2 * *(unsigned __int8 *)((unsigned __int8)v10 + v9)); /*0x4925c7*/
        *a1 = v10; /*0x4925cb*/
      }
      ++a1; /*0x4925ce*/
      --v13; /*0x4925d1*/
    }
    while ( v13 ); /*0x4925d2*/
  }
  return v10; /*0x4925d7*/
}


// ==== 0x004925E0  _BlitTransZRemapXlat_G::method_4925E0  this=?$BlitTransZRemapXlat@G  sig=csp ====
int __thiscall sub_4925E0(BlitTransZRemapXlat_G *this, int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
  return (*((int (__thiscall **)(BlitTransZRemapXlat_G *, int, int, int, int, int, int, int, _DWORD))this->vfptr + 1))( /*0x49260a*/
           this,
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           0);
}


// ==== 0x00492610  _BlitTransZRemapXlat_G::method  this=?$BlitTransZRemapXlat@G  sig=csp ====
int __thiscall sub_492610(
        BlitTransZRemapXlat_G *this,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10)
{
  return (*((int (__thiscall **)(BlitTransZRemapXlat_G *, int, int, int, int, int, int, int, _DWORD))this->vfptr + 1))( /*0x49263a*/
           this,
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           0);
}


// ==== 0x00492640  _BlitTransZRemapXlat_G::method  this=?$BlitTransZRemapXlat@G  sig=csp ====
int __thiscall sub_492640(BlitTransZRemapXlat_G *this, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
  return (*((int (__thiscall **)(BlitTransZRemapXlat_G *, int, int, int, int, int, int, int, _DWORD))this->vfptr + 1))( /*0x49266a*/
           this,
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           0);
}


// ==== 0x00492670  _BlitTransDarken_G::method  this=BlitTransDarken  sig=csp ====
char __thiscall sub_492670(_WORD *this, _WORD *a2, _BYTE *a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
  __int16 v9; // ax
  int v12; // edi

  LOBYTE(v9) = a4; /*0x492670*/
  if ( a4 > 0 ) /*0x492676*/
  {
    v12 = a4; /*0x492682*/
    do /*0x49269c*/
    {
      LOBYTE(v9) = *a3++; /*0x492684*/
      if ( (_BYTE)v9 ) /*0x492689*/
      {
        v9 = *(this + 2) & (*a2 >> 1); /*0x492691*/
        *a2 = v9; /*0x492695*/
      }
      ++a2; /*0x492698*/
      --v12; /*0x49269b*/
    }
    while ( v12 ); /*0x49269c*/
  }
  return v9; /*0x4926a0*/
}


// ==== 0x004926B0  _BlitTransDarken_G::method_4926B0  this=BlitTransDarken  sig=csp ====
int __thiscall sub_4926B0(void *this, int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
  return (*(int (__thiscall **)(void *, int, int, int, int, int, int, int, _DWORD))(*(_DWORD *)this + 4))( /*0x4926da*/
           this,
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           0);
}


// ==== 0x004926E0  _BlitTransDarken_G::method_4926E0  this=BlitTransDarken  sig=csp ====
int __thiscall sub_4926E0(void *this, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10)
{
  return (*(int (__thiscall **)(void *, int, int, int, int, int, int, int, _DWORD))(*(_DWORD *)this + 4))( /*0x49270a*/
           this,
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           0);
}


// ==== 0x00492710  _BlitTransDarken_G::method  this=BlitTransDarken  sig=csp ====
int __thiscall sub_492710(void *this, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
  return (*(int (__thiscall **)(void *, int, int, int, int, int, int, int, _DWORD))(*(_DWORD *)this + 4))( /*0x49273a*/
           this,
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           0);
}


// ==== 0x00492740  _BlitTransLucent75_G::method  this=BlitTransLucent75  sig=csp ====
char __fastcall sub_492740(int a1, int a2, _WORD *a3, _BYTE *a4, int a5, int a6, int a7, int a8, int a9, int a10)
{
  int v10; // eax
  int v13; // ebx
  int v14; // eax
  __int16 v15; // bp
  unsigned __int8 v17; // [esp+Ch] [ebp+Ch]

  LOBYTE(v10) = a5; /*0x492740*/
  if ( a5 > 0 ) /*0x492746*/
  {
    v13 = a5; /*0x492754*/
    do /*0x492791*/
    {
      LOBYTE(v10) = *a4++; /*0x492756*/
      v17 = v10; /*0x49275b*/
      if ( (_BYTE)v10 ) /*0x49275f*/
      {
        LOWORD(a2) = *(_WORD *)(a1 + 8); /*0x492768*/
        v14 = (unsigned __int16)*a3; /*0x492776*/
        LOWORD(v14) = (unsigned __int16)v14 >> 2; /*0x492779*/
        v10 = a2 & v14; /*0x492781*/
        v15 = a2 & (*(_WORD *)(*(_DWORD *)(a1 + 4) + 2 * v17) >> 2); /*0x492783*/
        a2 = 3 * v10; /*0x492785*/
        *a3 = 3 * v10 + v15; /*0x49278a*/
      }
      ++a3; /*0x49278d*/
      --v13; /*0x492790*/
    }
    while ( v13 ); /*0x492791*/
  }
  return v10; /*0x492797*/
}


// ==== 0x004927A0  _BlitTransLucent75_G::method_4927A0  this=BlitTransLucent75  sig=csp ====
int __thiscall sub_4927A0(void *this, int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
  return (*(int (__thiscall **)(void *, int, int, int, int, int, int, int, _DWORD))(*(_DWORD *)this + 4))( /*0x4927ca*/
           this,
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           0);
}


// ==== 0x004927D0  _BlitTransLucent75_G::method_4927D0  this=BlitTransLucent75  sig=csp ====
int __thiscall sub_4927D0(void *this, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10)
{
  return (*(int (__thiscall **)(void *, int, int, int, int, int, int, int, _DWORD))(*(_DWORD *)this + 4))( /*0x4927fa*/
           this,
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           0);
}


// ==== 0x00492800  _BlitTransLucent75_G::method  this=BlitTransLucent75  sig=csp ====
int __thiscall sub_492800(void *this, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
  return (*(int (__thiscall **)(void *, int, int, int, int, int, int, int, _DWORD))(*(_DWORD *)this + 4))( /*0x49282a*/
           this,
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           0);
}


// ==== 0x00492830  _BlitTransLucent50_G::method  this=BlitTransLucent50  sig=csp ====
unsigned int __thiscall sub_492830(int this, _WORD *a2, _BYTE *a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
  int v11; // ecx
  unsigned int result; // eax
  int v14; // [esp+10h] [ebp-4h]

  v14 = *(_DWORD *)(this + 4); /*0x49284b*/
  v11 = *(unsigned __int16 *)(this + 8); /*0x492854*/
  do /*0x49287f*/
  {
    result = (unsigned __int8)*a3; /*0x49285c*/
    if ( *a3 ) /*0x49285c*/
    {
      LOWORD(result) = *(_WORD *)(v14 + 2 * result); /*0x492862*/
      result = (v11 & ((unsigned __int16)*a2 >> 1)) + (v11 & (result >> 1)); /*0x492873*/
      *a2 = result; /*0x492875*/
    }
    ++a3; /*0x492878*/
    ++a2; /*0x492879*/
  }
  while ( a4-- > 1 ); /*0x49287f*/
  return result; /*0x492881*/
}


// ==== 0x00492890  _BlitTransLucent50_G::method  this=BlitTransLucent50  sig=csp ====
int __thiscall sub_492890(void *this, int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
  return (*(int (__thiscall **)(void *, int, int, int, int, int, int, int, _DWORD))(*(_DWORD *)this + 4))( /*0x4928ba*/
           this,
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           0);
}


// ==== 0x004928C0  _BlitTransLucent50_G::method_4928C0  this=BlitTransLucent50  sig=csp ====
int __thiscall sub_4928C0(void *this, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10)
{
  return (*(int (__thiscall **)(void *, int, int, int, int, int, int, int, _DWORD))(*(_DWORD *)this + 4))( /*0x4928ea*/
           this,
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           0);
}


// ==== 0x004928F0  _BlitTransLucent50_G::method_4928F0  this=BlitTransLucent50  sig=csp ====
int __thiscall sub_4928F0(void *this, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
  return (*(int (__thiscall **)(void *, int, int, int, int, int, int, int, _DWORD))(*(_DWORD *)this + 4))( /*0x49291a*/
           this,
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           0);
}


// ==== 0x00492920  _BlitTransLucent25_G::method  this=BlitTransLucent25  sig=csp ====
char __thiscall sub_492920(int this, _WORD *a2, _BYTE *a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
  __int16 v9; // ax
  int v12; // ebx

  LOBYTE(v9) = a4; /*0x492920*/
  if ( a4 > 0 ) /*0x492926*/
  {
    v12 = a4; /*0x492934*/
    do /*0x492971*/
    {
      LOBYTE(v9) = *a3++; /*0x492936*/
      if ( (_BYTE)v9 ) /*0x49293f*/
      {
        v9 = (*(_WORD *)(this + 8) & (*a2 >> 2)) /*0x492968*/
           + 3 * (*(_WORD *)(this + 8) & (*(_WORD *)(*(_DWORD *)(this + 4) + 2 * (unsigned __int8)v9) >> 2));
        *a2 = v9; /*0x49296a*/
      }
      ++a2; /*0x49296d*/
      --v12; /*0x492970*/
    }
    while ( v12 ); /*0x492971*/
  }
  return v9; /*0x492977*/
}


// ==== 0x00492980  _BlitTransLucent25_G::method  this=BlitTransLucent25  sig=csp ====
int __thiscall sub_492980(void *this, int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
  return (*(int (__thiscall **)(void *, int, int, int, int, int, int, int, _DWORD))(*(_DWORD *)this + 4))( /*0x4929aa*/
           this,
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           0);
}


// ==== 0x004929B0  _BlitTransLucent25_G::method_4929B0  this=BlitTransLucent25  sig=csp ====
int __thiscall sub_4929B0(void *this, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10)
{
  return (*(int (__thiscall **)(void *, int, int, int, int, int, int, int, _DWORD))(*(_DWORD *)this + 4))( /*0x4929da*/
           this,
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           0);
}


// ==== 0x004929E0  _BlitTransLucent25_G::method_4929E0  this=BlitTransLucent25  sig=csp ====
int __thiscall sub_4929E0(void *this, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
  return (*(int (__thiscall **)(void *, int, int, int, int, int, int, int, _DWORD))(*(_DWORD *)this + 4))( /*0x492a0a*/
           this,
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           0);
}


// ==== 0x00492A10  _BlitPlainXlatZRead_G::method_492A10  this=?$BlitPlainXlatZRead@G  sig=csp ====
unsigned __int16 *__thiscall sub_492A10(
        BlitPlainXlatZRead_G *this,
        _WORD *a1,
        unsigned __int8 *a2,
        int a4,
        int argC,
        unsigned __int16 *a5,
        int a7,
        int a8,
        int a9)
{
  unsigned __int16 *result; // eax
  int v12; // ebp
  TacticalMap *v13; // edx
  unsigned __int16 v14; // bx

  result = a5; /*0x492a14*/
  if ( a4 > 0 ) /*0x492a1a*/
  {
    v12 = a4; /*0x492a28*/
    v13 = *(TacticalMap **)&MEMORY[0x87F8E4].__pad_5568[10232]; /*0x492a2a*/
    do /*0x492a61*/
    {
      v14 = *result++; /*0x492a32*/
      if ( argC < v14 ) /*0x492a3c*/
      {
        *a1 = *(_WORD *)(*((_DWORD *)this + 1) + 2 * *a2); /*0x492a49*/
        v13 = *(TacticalMap **)&MEMORY[0x87F8E4].__pad_5568[10232]; /*0x492a4c*/
      }
      ++a2; /*0x492a55*/
      ++a1; /*0x492a56*/
      if ( (unsigned int)result >= v13->TacticalMap_field_1C ) /*0x492a5b*/
        result = (unsigned __int16 *)((char *)result - v13->TacticalMap_field_20); /*0x492a5d*/
      --v12; /*0x492a60*/
    }
    while ( v12 ); /*0x492a61*/
  }
  return result; /*0x492a67*/
}


// ==== 0x00492A70  _BlitPlainXlatZRead_G::method_492A70  this=?$BlitPlainXlatZRead@G  sig=csp ====
int __thiscall sub_492A70(BlitPlainXlatZRead_G *this, int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
  return (*((int (__thiscall **)(BlitPlainXlatZRead_G *, int, int, int, int, int, int, int, _DWORD))this->vfptr + 1))( /*0x492a9a*/
           this,
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           0);
}


// ==== 0x00492AA0  _BlitPlainXlatZRead_G::method_492AA0  this=?$BlitPlainXlatZRead@G  sig=csp ====
int __thiscall sub_492AA0(
        BlitPlainXlatZRead_G *this,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10)
{
  return (*((int (__thiscall **)(BlitPlainXlatZRead_G *, int, int, int, int, int, int, int, _DWORD))this->vfptr + 1))( /*0x492aca*/
           this,
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           0);
}


// ==== 0x00492AD0  _BlitPlainXlatZRead_G::method_492AD0  this=?$BlitPlainXlatZRead@G  sig=csp ====
int __thiscall sub_492AD0(BlitPlainXlatZRead_G *this, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
  return (*((int (__thiscall **)(BlitPlainXlatZRead_G *, int, int, int, int, int, int, int, _DWORD))this->vfptr + 1))( /*0x492afa*/
           this,
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           0);
}


// ==== 0x00492B00  _BlitTransXlatZRead_G::method_492B00  this=BlitTransXlatZRead  sig=csp ====
unsigned __int16 *__thiscall sub_492B00(
        _DWORD *this,
        _WORD *a2,
        _BYTE *a3,
        int a4,
        int a5,
        unsigned __int16 *a6,
        int a7,
        int a8,
        int a9)
{
  unsigned __int16 *result; // eax
  _DWORD *v11; // esi
  int v13; // ebp
  unsigned __int16 v14; // dx

  result = a6; /*0x492b04*/
  if ( a4 > 0 ) /*0x492b0a*/
  {
    v11 = MEMORY[0x887644]; /*0x492b13*/
    v13 = a4; /*0x492b1e*/
    do /*0x492b61*/
    {
      v14 = *result++; /*0x492b22*/
      if ( a5 < v14 && *a3 ) /*0x492b32*/
      {
        *a2 = *(_WORD *)(*(this + 1) + 2 * (unsigned __int8)*a3); /*0x492b49*/
        v11 = MEMORY[0x887644]; /*0x492b4c*/
      }
      ++a3; /*0x492b55*/
      ++a2; /*0x492b56*/
      if ( (unsigned int)result >= v11[7] ) /*0x492b5b*/
        result = (unsigned __int16 *)((char *)result - v11[8]); /*0x492b5d*/
      --v13; /*0x492b60*/
    }
    while ( v13 ); /*0x492b61*/
  }
  return result; /*0x492b67*/
}


// ==== 0x00492B70  _BlitTransXlatZRead_G::method_492B70  this=BlitTransXlatZRead  sig=csp ====
int __thiscall sub_492B70(void *this, int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
  return (*(int (__thiscall **)(void *, int, int, int, int, int, int, int, _DWORD))(*(_DWORD *)this + 4))( /*0x492b9a*/
           this,
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           0);
}


// ==== 0x00492BA0  _BlitTransXlatZRead_G::method_492BA0  this=BlitTransXlatZRead  sig=csp ====
int __thiscall sub_492BA0(void *this, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10)
{
  return (*(int (__thiscall **)(void *, int, int, int, int, int, int, int, _DWORD))(*(_DWORD *)this + 4))( /*0x492bca*/
           this,
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           0);
}


// ==== 0x00492BD0  _BlitTransXlatZRead_G::method_492BD0  this=BlitTransXlatZRead  sig=csp ====
int __thiscall sub_492BD0(void *this, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
  return (*(int (__thiscall **)(void *, int, int, int, int, int, int, int, _DWORD))(*(_DWORD *)this + 4))( /*0x492bfa*/
           this,
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           0);
}


// ==== 0x00492C00  _BlitTransZRemapXlatZRead_G::method_492C00  this=?$BlitTransZRemapXlatZRead@G  sig=csp ====
unsigned __int16 *__thiscall sub_492C00(
        BlitTransZRemapXlatZRead_G *this,
        _WORD *a1,
        _BYTE *a2,
        int a4,
        int argC,
        unsigned __int16 *a5,
        int a7,
        int a8,
        int a9)
{
  unsigned __int16 *result; // eax
  TacticalMap *v13; // edi
  unsigned __int16 v14; // cx
  int v15; // [esp+4h] [ebp-4h]
  unsigned __int16 *a5a; // [esp+1Ch] [ebp+14h]

  result = a5; /*0x492c04*/
  v15 = **((_DWORD **)this + 1); /*0x492c0d*/
  if ( a4 > 0 ) /*0x492c17*/
  {
    v13 = *(TacticalMap **)&MEMORY[0x87F8E4].__pad_5568[10232]; /*0x492c24*/
    a5a = (unsigned __int16 *)a4; /*0x492c2a*/
    do /*0x492c82*/
    {
      v14 = *result++; /*0x492c34*/
      if ( argC < v14 && *a2 ) /*0x492c42*/
      {
        *a1 = *(_WORD *)(*((_DWORD *)this + 2) + 2 * *(unsigned __int8 *)((unsigned __int8)*a2 + v15)); /*0x492c62*/
        v13 = *(TacticalMap **)&MEMORY[0x87F8E4].__pad_5568[10232]; /*0x492c65*/
      }
      ++a2; /*0x492c6e*/
      ++a1; /*0x492c6f*/
      if ( (unsigned int)result >= v13->TacticalMap_field_1C ) /*0x492c74*/
        result = (unsigned __int16 *)((char *)result - v13->TacticalMap_field_20); /*0x492c76*/
      a5a = (unsigned __int16 *)((char *)a5a - 1); /*0x492c7e*/
    }
    while ( a5a ); /*0x492c82*/
  }
  return result; /*0x492c87*/
}


// ==== 0x00492C90  _BlitTransZRemapXlatZRead_G::method_492C90  this=?$BlitTransZRemapXlatZRead@G  sig=csp ====
int __thiscall sub_492C90(BlitTransZRemapXlatZRead_G *this, int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
  return (*((int (__thiscall **)(BlitTransZRemapXlatZRead_G *, int, int, int, int, int, int, int, _DWORD))this->vfptr + 1))( /*0x492cba*/
           this,
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           0);
}


// ==== 0x00492CC0  _BlitTransZRemapXlatZRead_G::method_492CC0  this=?$BlitTransZRemapXlatZRead@G  sig=csp ====
int __thiscall sub_492CC0(
        BlitTransZRemapXlatZRead_G *this,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10)
{
  return (*((int (__thiscall **)(BlitTransZRemapXlatZRead_G *, int, int, int, int, int, int, int, _DWORD))this->vfptr + 1))( /*0x492cea*/
           this,
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           0);
}


// ==== 0x00492CF0  _BlitTransZRemapXlatZRead_G::method_492CF0  this=?$BlitTransZRemapXlatZRead@G  sig=csp ====
int __thiscall sub_492CF0(
        BlitTransZRemapXlatZRead_G *this,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9)
{
  return (*((int (__thiscall **)(BlitTransZRemapXlatZRead_G *, int, int, int, int, int, int, int, _DWORD))this->vfptr + 1))( /*0x492d1a*/
           this,
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           0);
}


// ==== 0x00492D20  _BlitTransDarkenZRead_G::method_492D20  this=?$BlitTransDarkenZRead@G  sig=csp ====
unsigned __int16 *__thiscall sub_492D20(
        BlitTransDarkenZRead_G *this,
        _WORD *a1,
        _BYTE *a2,
        int a4,
        int argC,
        unsigned __int16 *a5,
        int a7,
        int a8,
        int a9)
{
  unsigned __int16 *result; // eax
  TacticalMap *v10; // esi
  int v12; // ebx
  unsigned __int16 v14; // bp

  result = a5; /*0x492d24*/
  if ( a4 > 0 ) /*0x492d2a*/
  {
    v10 = *(TacticalMap **)&MEMORY[0x87F8E4].__pad_5568[10232]; /*0x492d2f*/
    v12 = a4; /*0x492d3a*/
    do /*0x492d75*/
    {
      v14 = *result++; /*0x492d42*/
      if ( argC < v14 && *a2 ) /*0x492d4e*/
      {
        *a1 = *(_WORD *)(this + 1) & (*a1 >> 1); /*0x492d5d*/
        v10 = *(TacticalMap **)&MEMORY[0x87F8E4].__pad_5568[10232]; /*0x492d60*/
      }
      ++a2; /*0x492d69*/
      ++a1; /*0x492d6a*/
      if ( (unsigned int)result >= v10->TacticalMap_field_1C ) /*0x492d6f*/
        result = (unsigned __int16 *)((char *)result - v10->TacticalMap_field_20); /*0x492d71*/
      --v12; /*0x492d74*/
    }
    while ( v12 ); /*0x492d75*/
  }
  return result; /*0x492d7b*/
}


// ==== 0x00492D80  _BlitTransDarkenZRead_G::method_492D80  this=?$BlitTransDarkenZRead@G  sig=csp ====
int __thiscall sub_492D80(BlitTransDarkenZRead_G *this, int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
  return (*((int (__thiscall **)(BlitTransDarkenZRead_G *, int, int, int, int, int, int, int, _DWORD))this->vfptr + 1))( /*0x492daa*/
           this,
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           0);
}


// ==== 0x00492DB0  _BlitTransDarkenZRead_G::method_492DB0  this=?$BlitTransDarkenZRead@G  sig=csp ====
int __thiscall sub_492DB0(
        BlitTransDarkenZRead_G *this,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10)
{
  return (*((int (__thiscall **)(BlitTransDarkenZRead_G *, int, int, int, int, int, int, int, _DWORD))this->vfptr + 1))( /*0x492dda*/
           this,
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           0);
}


// ==== 0x00492DE0  _BlitTransDarkenZRead_G::method_492DE0  this=?$BlitTransDarkenZRead@G  sig=csp ====
int __thiscall sub_492DE0(BlitTransDarkenZRead_G *this, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
  return (*((int (__thiscall **)(BlitTransDarkenZRead_G *, int, int, int, int, int, int, int, _DWORD))this->vfptr + 1))( /*0x492e0a*/
           this,
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           0);
}


// ==== 0x00492E10  _BlitTransLucent75ZRead_G::method_492E10  this=?$BlitTransLucent75ZRead@G  sig=csp ====
int __thiscall sub_492E10(
        BlitTransLucent75ZRead_G *this,
        _WORD *a1,
        _BYTE *a2,
        int a4,
        int argC,
        unsigned __int16 *a5,
        int a7,
        int a8,
        int a9)
{
  int result; // eax
  TacticalMap *v12; // esi
  unsigned __int16 v14; // ax
  unsigned __int16 *a5a; // [esp+14h] [ebp+14h]

  result = a4; /*0x492e10*/
  if ( a4 > 0 ) /*0x492e1a*/
  {
    v12 = *(TacticalMap **)&MEMORY[0x87F8E4].__pad_5568[10232]; /*0x492e23*/
    a5a = (unsigned __int16 *)a4; /*0x492e2e*/
    do /*0x492e95*/
    {
      v14 = *a5++; /*0x492e38*/
      if ( argC < v14 && *a2 ) /*0x492e46*/
      {
        *a1 = 3 * (*(_WORD *)(this + 2) & (*a1 >> 2)) /*0x492e75*/
            + (*(_WORD *)(this + 2) & (*(_WORD *)(*((_DWORD *)this + 1) + 2 * (unsigned __int8)*a2) >> 2));
        v12 = *(TacticalMap **)&MEMORY[0x87F8E4].__pad_5568[10232]; /*0x492e78*/
      }
      ++a2; /*0x492e81*/
      ++a1; /*0x492e82*/
      if ( (unsigned int)a5 >= v12->TacticalMap_field_1C ) /*0x492e87*/
        a5 = (unsigned __int16 *)((char *)a5 - v12->TacticalMap_field_20); /*0x492e89*/
      result = (int)a5a - 1; /*0x492e90*/
      a5a = (unsigned __int16 *)((char *)a5a - 1); /*0x492e91*/
    }
    while ( a5a ); /*0x492e95*/
  }
  return result; /*0x492e9b*/
}


// ==== 0x00492EA0  _BlitTransLucent75ZRead_G::method_492EA0  this=?$BlitTransLucent75ZRead@G  sig=csp ====
int __thiscall sub_492EA0(BlitTransLucent75ZRead_G *this, int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
  return (*((int (__thiscall **)(BlitTransLucent75ZRead_G *, int, int, int, int, int, int, int, _DWORD))this->vfptr + 1))( /*0x492eca*/
           this,
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           0);
}


// ==== 0x00492ED0  _BlitTransLucent75ZRead_G::method_492ED0  this=?$BlitTransLucent75ZRead@G  sig=csp ====
int __thiscall sub_492ED0(
        BlitTransLucent75ZRead_G *this,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10)
{
  return (*((int (__thiscall **)(BlitTransLucent75ZRead_G *, int, int, int, int, int, int, int, _DWORD))this->vfptr + 1))( /*0x492efa*/
           this,
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           0);
}


// ==== 0x00492F00  _BlitTransLucent75ZRead_G::method_492F00  this=?$BlitTransLucent75ZRead@G  sig=csp ====
int __thiscall sub_492F00(
        BlitTransLucent75ZRead_G *this,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9)
{
  return (*((int (__thiscall **)(BlitTransLucent75ZRead_G *, int, int, int, int, int, int, int, _DWORD))this->vfptr + 1))( /*0x492f2a*/
           this,
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           0);
}


// ==== 0x00492F30  _BlitTransLucent50ZRead_G::method_492F30  this=?$BlitTransLucent50ZRead@G  sig=csp ====
unsigned __int16 *__thiscall sub_492F30(
        BlitTransLucent50ZRead_G *this,
        _WORD *a1,
        _BYTE *a2,
        int a4,
        int argC,
        unsigned __int16 *a5,
        int a7,
        int a8,
        int a9)
{
  unsigned __int16 *result; // eax
  TacticalMap *v12; // edi
  unsigned __int16 v13; // dx
  unsigned __int16 *a5a; // [esp+14h] [ebp+14h]

  result = a5; /*0x492f34*/
  if ( a4 > 0 ) /*0x492f3a*/
  {
    v12 = *(TacticalMap **)&MEMORY[0x87F8E4].__pad_5568[10232]; /*0x492f48*/
    a5a = (unsigned __int16 *)a4; /*0x492f4e*/
    do /*0x492fb1*/
    {
      v13 = *result++; /*0x492f58*/
      if ( argC < v13 && *a2 ) /*0x492f66*/
      {
        *a1 = (*(_WORD *)(this + 2) & (*a1 >> 1)) /*0x492f91*/
            + (*(_WORD *)(this + 2) & (*(_WORD *)(*((_DWORD *)this + 1) + 2 * (unsigned __int8)*a2) >> 1));
        v12 = *(TacticalMap **)&MEMORY[0x87F8E4].__pad_5568[10232]; /*0x492f94*/
      }
      ++a2; /*0x492f9d*/
      ++a1; /*0x492f9e*/
      if ( (unsigned int)result >= v12->TacticalMap_field_1C ) /*0x492fa3*/
        result = (unsigned __int16 *)((char *)result - v12->TacticalMap_field_20); /*0x492fa5*/
      a5a = (unsigned __int16 *)((char *)a5a - 1); /*0x492fad*/
    }
    while ( a5a ); /*0x492fb1*/
  }
  return result; /*0x492fb7*/
}


// ==== 0x00492FC0  _BlitTransLucent50ZRead_G::method_492FC0  this=?$BlitTransLucent50ZRead@G  sig=csp ====
int __thiscall sub_492FC0(BlitTransLucent50ZRead_G *this, int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
  return (*((int (__thiscall **)(BlitTransLucent50ZRead_G *, int, int, int, int, int, int, int, _DWORD))this->vfptr + 1))( /*0x492fea*/
           this,
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           0);
}


// ==== 0x00492FF0  _BlitTransLucent50ZRead_G::method_492FF0  this=?$BlitTransLucent50ZRead@G  sig=csp ====
int __thiscall sub_492FF0(
        BlitTransLucent50ZRead_G *this,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10)
{
  return (*((int (__thiscall **)(BlitTransLucent50ZRead_G *, int, int, int, int, int, int, int, _DWORD))this->vfptr + 1))( /*0x49301a*/
           this,
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           0);
}


// ==== 0x00493020  _BlitTransLucent50ZRead_G::method  this=?$BlitTransLucent50ZRead@G  sig=csp ====
int __thiscall sub_493020(
        BlitTransLucent50ZRead_G *this,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9)
{
  return (*((int (__thiscall **)(BlitTransLucent50ZRead_G *, int, int, int, int, int, int, int, _DWORD))this->vfptr + 1))( /*0x49304a*/
           this,
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           0);
}


// ==== 0x00493050  _BlitTransLucent25ZRead_G::method  this=?$BlitTransLucent25ZRead@G  sig=csp ====
int __thiscall sub_493050(
        BlitTransLucent25ZRead_G *this,
        _WORD *a1,
        _BYTE *a2,
        int a4,
        int argC,
        unsigned __int16 *a5,
        int a7,
        int a8,
        int a9)
{
  int result; // eax
  TacticalMap *v12; // esi
  unsigned __int16 v14; // ax
  unsigned __int16 *a5a; // [esp+14h] [ebp+14h]

  result = a4; /*0x493050*/
  if ( a4 > 0 ) /*0x49305a*/
  {
    v12 = *(TacticalMap **)&MEMORY[0x87F8E4].__pad_5568[10232]; /*0x493063*/
    a5a = (unsigned __int16 *)a4; /*0x49306e*/
    do /*0x4930d5*/
    {
      v14 = *a5++; /*0x493078*/
      if ( argC < v14 && *a2 ) /*0x493086*/
      {
        *a1 = (*(_WORD *)(this + 2) & (*a1 >> 2)) /*0x4930b5*/
            + 3 * (*(_WORD *)(this + 2) & (*(_WORD *)(*((_DWORD *)this + 1) + 2 * (unsigned __int8)*a2) >> 2));
        v12 = *(TacticalMap **)&MEMORY[0x87F8E4].__pad_5568[10232]; /*0x4930b8*/
      }
      ++a2; /*0x4930c1*/
      ++a1; /*0x4930c2*/
      if ( (unsigned int)a5 >= v12->TacticalMap_field_1C ) /*0x4930c7*/
        a5 = (unsigned __int16 *)((char *)a5 - v12->TacticalMap_field_20); /*0x4930c9*/
      result = (int)a5a - 1; /*0x4930d0*/
      a5a = (unsigned __int16 *)((char *)a5a - 1); /*0x4930d1*/
    }
    while ( a5a ); /*0x4930d5*/
  }
  return result; /*0x4930db*/
}


// ==== 0x004930E0  _BlitTransLucent25ZRead_G::method_4930E0  this=?$BlitTransLucent25ZRead@G  sig=csp ====
int __thiscall sub_4930E0(BlitTransLucent25ZRead_G *this, int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
  return (*((int (__thiscall **)(BlitTransLucent25ZRead_G *, int, int, int, int, int, int, int, _DWORD))this->vfptr + 1))( /*0x49310a*/
           this,
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           0);
}


// ==== 0x00493110  _BlitTransLucent25ZRead_G::method  this=?$BlitTransLucent25ZRead@G  sig=csp ====
int __thiscall sub_493110(
        BlitTransLucent25ZRead_G *this,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10)
{
  return (*((int (__thiscall **)(BlitTransLucent25ZRead_G *, int, int, int, int, int, int, int, _DWORD))this->vfptr + 1))( /*0x49313a*/
           this,
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           0);
}


// ==== 0x00493140  _BlitTransLucent25ZRead_G::method  this=?$BlitTransLucent25ZRead@G  sig=csp ====
int __thiscall sub_493140(
        BlitTransLucent25ZRead_G *this,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9)
{
  return (*((int (__thiscall **)(BlitTransLucent25ZRead_G *, int, int, int, int, int, int, int, _DWORD))this->vfptr + 1))( /*0x49316a*/
           this,
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           0);
}


// ==== 0x00493170  _BlitTransLucent75ZReadWarp_G::method  this=?$BlitTransLucent75ZReadWarp@G  sig=csp ====
int __thiscall sub_493170(
        BlitTransLucent75ZReadWarp_G *this,
        _WORD *a1,
        _BYTE *a2,
        int a4,
        int argC,
        unsigned __int16 *a5,
        int a7,
        int a8,
        int a9)
{
  int result; // eax
  TacticalMap *v12; // esi
  unsigned __int16 v14; // ax
  unsigned __int16 *a5a; // [esp+14h] [ebp+14h]

  result = a4; /*0x493170*/
  if ( a4 > 0 ) /*0x49317a*/
  {
    v12 = *(TacticalMap **)&MEMORY[0x87F8E4].__pad_5568[10232]; /*0x493187*/
    a5a = (unsigned __int16 *)a4; /*0x493192*/
    do /*0x4931fe*/
    {
      v14 = *a5++; /*0x49319c*/
      if ( argC < v14 && *a2 ) /*0x4931aa*/
      {
        *a1 = 3 * (*(_WORD *)(this + 2) & (a1[a9] >> 2)) /*0x4931de*/
            + (*(_WORD *)(this + 2) & (*(_WORD *)(*((_DWORD *)this + 1) + 2 * (unsigned __int8)*a2) >> 2));
        v12 = *(TacticalMap **)&MEMORY[0x87F8E4].__pad_5568[10232]; /*0x4931e1*/
      }
      ++a2; /*0x4931ea*/
      ++a1; /*0x4931eb*/
      if ( (unsigned int)a5 >= v12->TacticalMap_field_1C ) /*0x4931f0*/
        a5 = (unsigned __int16 *)((char *)a5 - v12->TacticalMap_field_20); /*0x4931f2*/
      result = (int)a5a - 1; /*0x4931f9*/
      a5a = (unsigned __int16 *)((char *)a5a - 1); /*0x4931fa*/
    }
    while ( a5a ); /*0x4931fe*/
  }
  return result; /*0x493204*/
}


// ==== 0x00493210  _BlitTransLucent75ZReadWarp_G::method  this=?$BlitTransLucent75ZReadWarp@G  sig=csp ====
int __thiscall sub_493210(BlitTransLucent75ZReadWarp_G *this, int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
  return (*((int (__thiscall **)(BlitTransLucent75ZReadWarp_G *, int, int, int, int, int, int, int, _DWORD))this->vfptr /*0x49323a*/
          + 1))(
           this,
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           0);
}


// ==== 0x00493240  _BlitTransLucent75ZReadWarp_G::method  this=?$BlitTransLucent75ZReadWarp@G  sig=csp ====
int __thiscall sub_493240(
        BlitTransLucent75ZReadWarp_G *this,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10)
{
  return (*((int (__thiscall **)(BlitTransLucent75ZReadWarp_G *, int, int, int, int, int, int, int, _DWORD))this->vfptr /*0x49326a*/
          + 1))(
           this,
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           0);
}


// ==== 0x00493270  _BlitTransLucent75ZReadWarp_G::method  this=?$BlitTransLucent75ZReadWarp@G  sig=csp ====
int __thiscall sub_493270(
        BlitTransLucent75ZReadWarp_G *this,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9)
{
  return (*((int (__thiscall **)(BlitTransLucent75ZReadWarp_G *, int, int, int, int, int, int, int, _DWORD))this->vfptr /*0x49329a*/
          + 1))(
           this,
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           0);
}


// ==== 0x004932A0  _BlitTransLucent50ZReadWarp_G::method_4932A0  this=?$BlitTransLucent50ZReadWarp@G  sig=csp ====
unsigned __int16 *__thiscall sub_4932A0(
        BlitTransLucent50ZReadWarp_G *this,
        _WORD *a1,
        _BYTE *a2,
        int a4,
        int argC,
        unsigned __int16 *a5,
        int a7,
        int a8,
        int a9)
{
  unsigned __int16 *result; // eax
  TacticalMap *v12; // edi
  unsigned __int16 v13; // dx
  unsigned __int16 *a5a; // [esp+14h] [ebp+14h]

  result = a5; /*0x4932a4*/
  if ( a4 > 0 ) /*0x4932aa*/
  {
    v12 = *(TacticalMap **)&MEMORY[0x87F8E4].__pad_5568[10232]; /*0x4932bc*/
    a5a = (unsigned __int16 *)a4; /*0x4932c2*/
    do /*0x49332a*/
    {
      v13 = *result++; /*0x4932cc*/
      if ( argC < v13 && *a2 ) /*0x4932da*/
      {
        *a1 = (*(_WORD *)(this + 2) & (a1[a9] >> 1)) /*0x49330a*/
            + (*(_WORD *)(this + 2) & (*(_WORD *)(*((_DWORD *)this + 1) + 2 * (unsigned __int8)*a2) >> 1));
        v12 = *(TacticalMap **)&MEMORY[0x87F8E4].__pad_5568[10232]; /*0x49330d*/
      }
      ++a2; /*0x493316*/
      ++a1; /*0x493317*/
      if ( (unsigned int)result >= v12->TacticalMap_field_1C ) /*0x49331c*/
        result = (unsigned __int16 *)((char *)result - v12->TacticalMap_field_20); /*0x49331e*/
      a5a = (unsigned __int16 *)((char *)a5a - 1); /*0x493326*/
    }
    while ( a5a ); /*0x49332a*/
  }
  return result; /*0x493330*/
}


// ==== 0x00493340  _BlitTransLucent50ZReadWarp_G::method  this=?$BlitTransLucent50ZReadWarp@G  sig=csp ====
int __thiscall sub_493340(BlitTransLucent50ZReadWarp_G *this, int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
  return (*((int (__thiscall **)(BlitTransLucent50ZReadWarp_G *, int, int, int, int, int, int, int, _DWORD))this->vfptr /*0x49336a*/
          + 1))(
           this,
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           0);
}


// ==== 0x00493370  _BlitTransLucent50ZReadWarp_G::method  this=?$BlitTransLucent50ZReadWarp@G  sig=csp ====
int __thiscall sub_493370(
        BlitTransLucent50ZReadWarp_G *this,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10)
{
  return (*((int (__thiscall **)(BlitTransLucent50ZReadWarp_G *, int, int, int, int, int, int, int, _DWORD))this->vfptr /*0x49339a*/
          + 1))(
           this,
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           0);
}


// ==== 0x004933A0  _BlitTransLucent50ZReadWarp_G::method_4933A0  this=?$BlitTransLucent50ZReadWarp@G  sig=csp ====
int __thiscall sub_4933A0(
        BlitTransLucent50ZReadWarp_G *this,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9)
{
  return (*((int (__thiscall **)(BlitTransLucent50ZReadWarp_G *, int, int, int, int, int, int, int, _DWORD))this->vfptr /*0x4933ca*/
          + 1))(
           this,
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           0);
}


// ==== 0x004933D0  _BlitTransLucent25ZReadWarp_G::method_4933D0  this=?$BlitTransLucent25ZReadWarp@G  sig=csp ====
int __thiscall sub_4933D0(
        BlitTransLucent25ZReadWarp_G *this,
        _WORD *a1,
        _BYTE *a2,
        int a4,
        int argC,
        unsigned __int16 *a5,
        int a7,
        int a8,
        int a9)
{
  int result; // eax
  TacticalMap *v12; // esi
  unsigned __int16 v14; // ax
  unsigned __int16 *a5a; // [esp+14h] [ebp+14h]

  result = a4; /*0x4933d0*/
  if ( a4 > 0 ) /*0x4933da*/
  {
    v12 = *(TacticalMap **)&MEMORY[0x87F8E4].__pad_5568[10232]; /*0x4933e7*/
    a5a = (unsigned __int16 *)a4; /*0x4933f2*/
    do /*0x49345e*/
    {
      v14 = *a5++; /*0x4933fc*/
      if ( argC < v14 && *a2 ) /*0x49340a*/
      {
        *a1 = (*(_WORD *)(this + 2) & (a1[a9] >> 2)) /*0x49343e*/
            + 3 * (*(_WORD *)(this + 2) & (*(_WORD *)(*((_DWORD *)this + 1) + 2 * (unsigned __int8)*a2) >> 2));
        v12 = *(TacticalMap **)&MEMORY[0x87F8E4].__pad_5568[10232]; /*0x493441*/
      }
      ++a2; /*0x49344a*/
      ++a1; /*0x49344b*/
      if ( (unsigned int)a5 >= v12->TacticalMap_field_1C ) /*0x493450*/
        a5 = (unsigned __int16 *)((char *)a5 - v12->TacticalMap_field_20); /*0x493452*/
      result = (int)a5a - 1; /*0x493459*/
      a5a = (unsigned __int16 *)((char *)a5a - 1); /*0x49345a*/
    }
    while ( a5a ); /*0x49345e*/
  }
  return result; /*0x493464*/
}


// ==== 0x00493470  _BlitTransLucent25ZReadWarp_G::method  this=?$BlitTransLucent25ZReadWarp@G  sig=csp ====
int __thiscall sub_493470(BlitTransLucent25ZReadWarp_G *this, int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
  return (*((int (__thiscall **)(BlitTransLucent25ZReadWarp_G *, int, int, int, int, int, int, int, _DWORD))this->vfptr /*0x49349a*/
          + 1))(
           this,
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           0);
}


// ==== 0x004934A0  _BlitTransLucent25ZReadWarp_G::method_4934A0  this=?$BlitTransLucent25ZReadWarp@G  sig=csp ====
int __thiscall sub_4934A0(
        BlitTransLucent25ZReadWarp_G *this,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10)
{
  return (*((int (__thiscall **)(BlitTransLucent25ZReadWarp_G *, int, int, int, int, int, int, int, _DWORD))this->vfptr /*0x4934ca*/
          + 1))(
           this,
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           0);
}


// ==== 0x004934D0  _BlitTransLucent25ZReadWarp_G::method_4934D0  this=?$BlitTransLucent25ZReadWarp@G  sig=csp ====
int __thiscall sub_4934D0(
        BlitTransLucent25ZReadWarp_G *this,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9)
{
  return (*((int (__thiscall **)(BlitTransLucent25ZReadWarp_G *, int, int, int, int, int, int, int, _DWORD))this->vfptr /*0x4934fa*/
          + 1))(
           this,
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           0);
}


// ==== 0x00493500  _BlitPlainXlatZReadWrite_G::method  this=?$BlitPlainXlatZReadWrite@G  sig=csp ====
_WORD *__thiscall sub_493500(
        BlitPlainXlatZReadWrite_G *this,
        _WORD *a1,
        unsigned __int8 *a2,
        int a4,
        int argC,
        _WORD *a5,
        int a7,
        int a8,
        int a9)
{
  _WORD *result; // eax
  TacticalMap *v12; // edi
  _WORD *a5a; // [esp+18h] [ebp+14h]

  result = a5; /*0x493500*/
  if ( a4 > 0 ) /*0x49350d*/
  {
    v12 = *(TacticalMap **)&MEMORY[0x87F8E4].__pad_5568[10232]; /*0x49351a*/
    a5a = (_WORD *)a4; /*0x493520*/
    do /*0x493566*/
    {
      if ( argC < (unsigned __int16)*result ) /*0x49352f*/
      {
        *a1 = *(_WORD *)(*((_DWORD *)this + 1) + 2 * *a2); /*0x49353c*/
        *result = (unsigned __int8)argC; /*0x493543*/
        v12 = *(TacticalMap **)&MEMORY[0x87F8E4].__pad_5568[10232]; /*0x493546*/
      }
      ++result; /*0x49354f*/
      ++a2; /*0x493552*/
      ++a1; /*0x493553*/
      if ( (unsigned int)result >= v12->TacticalMap_field_1C ) /*0x493558*/
        result = (_WORD *)((char *)result - v12->TacticalMap_field_20); /*0x49355a*/
      a5a = (_WORD *)((char *)a5a - 1); /*0x493562*/
    }
    while ( a5a ); /*0x493566*/
  }
  return result; /*0x49356b*/
}


// ==== 0x00493570  _BlitPlainXlatZReadWrite_G::method  this=?$BlitPlainXlatZReadWrite@G  sig=csp ====
int __thiscall sub_493570(BlitPlainXlatZReadWrite_G *this, int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
  return (*((int (__thiscall **)(BlitPlainXlatZReadWrite_G *, int, int, int, int, int, int, int, _DWORD))this->vfptr + 1))( /*0x49359a*/
           this,
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           0);
}


// ==== 0x004935A0  _BlitPlainXlatZReadWrite_G::method_4935A0  this=?$BlitPlainXlatZReadWrite@G  sig=csp ====
int __thiscall sub_4935A0(
        BlitPlainXlatZReadWrite_G *this,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10)
{
  return (*((int (__thiscall **)(BlitPlainXlatZReadWrite_G *, int, int, int, int, int, int, int, _DWORD))this->vfptr + 1))( /*0x4935ca*/
           this,
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           0);
}


// ==== 0x004935D0  _BlitPlainXlatZReadWrite_G::method_4935D0  this=?$BlitPlainXlatZReadWrite@G  sig=csp ====
int __thiscall sub_4935D0(
        BlitPlainXlatZReadWrite_G *this,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9)
{
  return (*((int (__thiscall **)(BlitPlainXlatZReadWrite_G *, int, int, int, int, int, int, int, _DWORD))this->vfptr + 1))( /*0x4935fa*/
           this,
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           0);
}


// ==== 0x00493600  _BlitTransXlatZReadWrite_G::method  this=BlitTransXlatZReadWrite  sig=csp ====
_WORD *__thiscall sub_493600(_DWORD *this, _WORD *a2, _BYTE *a3, int a4, int a5, _WORD *a6, int a7, int a8, int a9)
{
  _WORD *result; // eax
  _DWORD *v10; // esi
  int v13; // [esp+14h] [ebp+14h]

  result = a6; /*0x493604*/
  if ( a4 > 0 ) /*0x49360a*/
  {
    v10 = MEMORY[0x887644]; /*0x493613*/
    v13 = a4; /*0x49361e*/
    do /*0x493670*/
    {
      if ( a5 < (unsigned __int16)*result && *a3 ) /*0x493633*/
      {
        *a2 = *(_WORD *)(*(this + 1) + 2 * (unsigned __int8)*a3); /*0x49364a*/
        *result = a5; /*0x49364d*/
        v10 = MEMORY[0x887644]; /*0x493650*/
      }
      ++result; /*0x493659*/
      ++a3; /*0x49365c*/
      ++a2; /*0x49365d*/
      if ( (unsigned int)result >= v10[7] ) /*0x493662*/
        result = (_WORD *)((char *)result - v10[8]); /*0x493664*/
      --v13; /*0x49366c*/
    }
    while ( v13 ); /*0x493670*/
  }
  return result; /*0x493676*/
}


// ==== 0x00493680  _BlitTransXlatZReadWrite_G::method  this=BlitTransXlatZReadWrite  sig=csp ====
int __thiscall sub_493680(void *this, int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
  return (*(int (__thiscall **)(void *, int, int, int, int, int, int, int, _DWORD))(*(_DWORD *)this + 4))( /*0x4936aa*/
           this,
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           0);
}


// ==== 0x004936B0  _BlitTransXlatZReadWrite_G::method_4936B0  this=BlitTransXlatZReadWrite  sig=csp ====
int __thiscall sub_4936B0(void *this, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10)
{
  return (*(int (__thiscall **)(void *, int, int, int, int, int, int, int, _DWORD))(*(_DWORD *)this + 4))( /*0x4936da*/
           this,
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           0);
}


// ==== 0x004936E0  _BlitTransXlatZReadWrite_G::method_4936E0  this=BlitTransXlatZReadWrite  sig=csp ====
int __thiscall sub_4936E0(void *this, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
  return (*(int (__thiscall **)(void *, int, int, int, int, int, int, int, _DWORD))(*(_DWORD *)this + 4))( /*0x49370a*/
           this,
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           0);
}


// ==== 0x00493710  _BlitTransZRemapXlatZReadWrite_G::method  this=?$BlitTransZRemapXlatZReadWrite@G  sig=csp ====
_WORD *__thiscall sub_493710(
        BlitTransZRemapXlatZReadWrite_G *this,
        _WORD *a1,
        _BYTE *a2,
        int a4,
        int argC,
        _WORD *a5,
        int a7,
        int a8,
        int a9)
{
  _WORD *result; // eax
  int v10; // ecx
  TacticalMap *v11; // esi
  _WORD *a5a; // [esp+18h] [ebp+14h]

  result = a5; /*0x493715*/
  v10 = **((_DWORD **)this + 1); /*0x493722*/
  if ( a4 > 0 ) /*0x493724*/
  {
    v11 = *(TacticalMap **)&MEMORY[0x87F8E4].__pad_5568[10232]; /*0x49372d*/
    a5a = (_WORD *)a4; /*0x493738*/
    do /*0x493793*/
    {
      if ( argC < (unsigned __int16)*result && *a2 ) /*0x49374d*/
      {
        *a1 = *(_WORD *)(*((_DWORD *)this + 2) + 2 * *(unsigned __int8 *)((unsigned __int8)*a2 + v10)); /*0x49376d*/
        *result = argC; /*0x493770*/
        v11 = *(TacticalMap **)&MEMORY[0x87F8E4].__pad_5568[10232]; /*0x493773*/
      }
      ++result; /*0x49377c*/
      ++a2; /*0x49377f*/
      ++a1; /*0x493780*/
      if ( (unsigned int)result >= v11->TacticalMap_field_1C ) /*0x493785*/
        result = (_WORD *)((char *)result - v11->TacticalMap_field_20); /*0x493787*/
      a5a = (_WORD *)((char *)a5a - 1); /*0x49378f*/
    }
    while ( a5a ); /*0x493793*/
  }
  return result; /*0x49379a*/
}


// ==== 0x004937A0  _BlitTransZRemapXlatZReadWrite_G::method_4937A0  this=?$BlitTransZRemapXlatZReadWrite@G  sig=csp ====
int __thiscall sub_4937A0(
        BlitTransZRemapXlatZReadWrite_G *this,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8)
{
  return (*((int (__thiscall **)(BlitTransZRemapXlatZReadWrite_G *, int, int, int, int, int, int, int, _DWORD))this->vfptr /*0x4937ca*/
          + 1))(
           this,
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           0);
}


// ==== 0x004937D0  _BlitTransZRemapXlatZReadWrite_G::method_4937D0  this=?$BlitTransZRemapXlatZReadWrite@G  sig=csp ====
int __thiscall sub_4937D0(
        BlitTransZRemapXlatZReadWrite_G *this,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10)
{
  return (*((int (__thiscall **)(BlitTransZRemapXlatZReadWrite_G *, int, int, int, int, int, int, int, _DWORD))this->vfptr /*0x4937fa*/
          + 1))(
           this,
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           0);
}


// ==== 0x00493800  _BlitTransZRemapXlatZReadWrite_G::method  this=?$BlitTransZRemapXlatZReadWrite@G  sig=csp ====
int __thiscall sub_493800(
        BlitTransZRemapXlatZReadWrite_G *this,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9)
{
  return (*((int (__thiscall **)(BlitTransZRemapXlatZReadWrite_G *, int, int, int, int, int, int, int, _DWORD))this->vfptr /*0x49382a*/
          + 1))(
           this,
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           0);
}


// ==== 0x00493830  _BlitTransDarkenZReadWrite_G::method  this=?$BlitTransDarkenZReadWrite@G  sig=csp ====
_WORD *__thiscall sub_493830(
        BlitTransDarkenZReadWrite_G *this,
        _WORD *a1,
        _BYTE *a2,
        int a4,
        int argC,
        _WORD *a5,
        int a7,
        int a8,
        int a9)
{
  _WORD *result; // eax
  TacticalMap *v10; // esi
  _WORD *a5a; // [esp+14h] [ebp+14h]

  result = a5; /*0x493834*/
  if ( a4 > 0 ) /*0x49383a*/
  {
    v10 = *(TacticalMap **)&MEMORY[0x87F8E4].__pad_5568[10232]; /*0x493843*/
    a5a = (_WORD *)a4; /*0x49384e*/
    do /*0x493894*/
    {
      if ( argC < (unsigned __int16)*result && *a2 ) /*0x49385f*/
      {
        *a1 = *(_WORD *)(this + 1) & (*a1 >> 1); /*0x49386e*/
        *result = argC; /*0x493871*/
        v10 = *(TacticalMap **)&MEMORY[0x87F8E4].__pad_5568[10232]; /*0x493874*/
      }
      ++result; /*0x49387d*/
      ++a2; /*0x493880*/
      ++a1; /*0x493881*/
      if ( (unsigned int)result >= v10->TacticalMap_field_1C ) /*0x493886*/
        result = (_WORD *)((char *)result - v10->TacticalMap_field_20); /*0x493888*/
      a5a = (_WORD *)((char *)a5a - 1); /*0x493890*/
    }
    while ( a5a ); /*0x493894*/
  }
  return result; /*0x49389a*/
}


// ==== 0x004938A0  _BlitTransDarkenZReadWrite_G::method_4938A0  this=?$BlitTransDarkenZReadWrite@G  sig=csp ====
int __thiscall sub_4938A0(BlitTransDarkenZReadWrite_G *this, int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
  return (*((int (__thiscall **)(BlitTransDarkenZReadWrite_G *, int, int, int, int, int, int, int, _DWORD))this->vfptr /*0x4938ca*/
          + 1))(
           this,
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           0);
}


// ==== 0x004938D0  _BlitTransDarkenZReadWrite_G::method_4938D0  this=?$BlitTransDarkenZReadWrite@G  sig=csp ====
int __thiscall sub_4938D0(
        BlitTransDarkenZReadWrite_G *this,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10)
{
  return (*((int (__thiscall **)(BlitTransDarkenZReadWrite_G *, int, int, int, int, int, int, int, _DWORD))this->vfptr /*0x4938fa*/
          + 1))(
           this,
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           0);
}


// ==== 0x00493900  _BlitTransDarkenZReadWrite_G::method  this=?$BlitTransDarkenZReadWrite@G  sig=csp ====
int __thiscall sub_493900(
        BlitTransDarkenZReadWrite_G *this,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9)
{
  return (*((int (__thiscall **)(BlitTransDarkenZReadWrite_G *, int, int, int, int, int, int, int, _DWORD))this->vfptr /*0x49392a*/
          + 1))(
           this,
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           0);
}


// ==== 0x00493930  _BlitTransLucent75ZReadWrite_G::Blit_Alpha_ZReadWrite_Lucent25  this=?$BlitTransLucent75ZReadWrite@G  sig=csp ====
int __thiscall BlitTransXlatAlpha_ushort::Blit_Alpha_ZReadWrite_Lucent25(
        BlitTransLucent75ZReadWrite_G *this,
        _WORD *a1,
        _BYTE *a2,
        int a4,
        int argC,
        _WORD *a5,
        int a7,
        int a8,
        int a9)
{
  int result; // eax
  TacticalMap *v11; // edx
  _WORD *v13; // eax
  _WORD *a5a; // [esp+18h] [ebp+14h]

  result = a4; /*0x493930*/
  if ( a4 > 0 ) /*0x49393b*/
  {
    v11 = *(TacticalMap **)&MEMORY[0x87F8E4].__pad_5568[10232]; /*0x493941*/
    a5a = (_WORD *)a4; /*0x493952*/
    do /*0x4939c4*/
    {
      if ( argC < (unsigned __int16)*a5 && *a2 ) /*0x493967*/
      {
        *a1 = 3 * (*(_WORD *)(this + 2) & (*a1 >> 2)) /*0x493996*/
            + (*(_WORD *)(this + 2) & (*(_WORD *)(*((_DWORD *)this + 1) + 2 * (unsigned __int8)*a2) >> 2));
        *a5 = argC; /*0x493999*/
        v11 = *(TacticalMap **)&MEMORY[0x87F8E4].__pad_5568[10232]; /*0x49399c*/
      }
      ++a1; /*0x4939a6*/
      ++a2; /*0x4939aa*/
      v13 = a5 + 1; /*0x4939ae*/
      if ( (unsigned int)(a5 + 1) >= v11->TacticalMap_field_1C ) /*0x4939b4*/
        v13 = (_WORD *)((char *)v13 - v11->TacticalMap_field_20); /*0x4939b6*/
      a5 = v13; /*0x4939b9*/
      result = (int)a5a - 1; /*0x4939bf*/
      a5a = (_WORD *)((char *)a5a - 1); /*0x4939c0*/
    }
    while ( a5a ); /*0x4939c4*/
  }
  return result; /*0x4939c9*/
}


// ==== 0x004939D0  _BlitTransLucent75ZReadWrite_G::CallBlit0  this=?$BlitTransLucent75ZReadWrite@G  sig=csp ====
int __thiscall BlitTransXlatAlpha_ushort::CallBlit0(
        BlitTransLucent75ZReadWrite_G *this,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8)
{
  return (*((int (__thiscall **)(BlitTransLucent75ZReadWrite_G *, int, int, int, int, int, int, int, _DWORD))this->vfptr /*0x4939fa*/
          + 1))(
           this,
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           0);
}


// ==== 0x00493A00  _BlitTransLucent75ZReadWrite_G::CallBlit0_0  this=?$BlitTransLucent75ZReadWrite@G  sig=csp ====
int __thiscall BlitTransXlatAlpha_ushort::CallBlit0_0(
        BlitTransLucent75ZReadWrite_G *this,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10)
{
  return (*((int (__thiscall **)(BlitTransLucent75ZReadWrite_G *, int, int, int, int, int, int, int, _DWORD))this->vfptr /*0x493a2a*/
          + 1))(
           this,
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           0);
}


// ==== 0x00493A30  _BlitTransLucent75ZReadWrite_G::CallBlit0_1  this=?$BlitTransLucent75ZReadWrite@G  sig=csp ====
int __thiscall BlitTransXlatAlpha_ushort::CallBlit0_1(
        BlitTransLucent75ZReadWrite_G *this,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9)
{
  return (*((int (__thiscall **)(BlitTransLucent75ZReadWrite_G *, int, int, int, int, int, int, int, _DWORD))this->vfptr /*0x493a5a*/
          + 1))(
           this,
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           0);
}


// ==== 0x00493A60  _BlitTransLucent50ZReadWrite_G::Blit_Alpha_ZReadWrite_Lucent50  this=?$BlitTransLucent50ZReadWrite@G  sig=csp ====
int __thiscall BlitTransXlatAlpha_ushort::Blit_Alpha_ZReadWrite_Lucent50(
        BlitTransLucent50ZReadWrite_G *this,
        _WORD *a1,
        _BYTE *a2,
        int a4,
        int argC,
        _WORD *a5,
        int a7,
        int a8,
        int a9)
{
  int result; // eax
  int v12; // ebp
  TacticalMap *v14; // edi
  _WORD *v15; // eax
  _WORD *a5a; // [esp+14h] [ebp+14h]

  result = a4; /*0x493a60*/
  if ( a4 > 0 ) /*0x493a6a*/
  {
    v12 = argC; /*0x493a76*/
    v14 = *(TacticalMap **)&MEMORY[0x87F8E4].__pad_5568[10232]; /*0x493a80*/
    a5a = (_WORD *)a4; /*0x493a86*/
    do /*0x493aee*/
    {
      if ( v12 < (unsigned __int16)*a5 && *a2 ) /*0x493a97*/
      {
        v12 = argC; /*0x493ac2*/
        *a1 = (*(_WORD *)(this + 2) & (*a1 >> 1)) /*0x493ac6*/
            + (*(_WORD *)(this + 2) & (*(_WORD *)(*((_DWORD *)this + 1) + 2 * (unsigned __int8)*a2) >> 1));
        *a5 = argC; /*0x493ac9*/
        v14 = *(TacticalMap **)&MEMORY[0x87F8E4].__pad_5568[10232]; /*0x493acc*/
      }
      v15 = a5 + 1; /*0x493ad2*/
      ++a2; /*0x493ad8*/
      ++a1; /*0x493ad9*/
      if ( (unsigned int)(a5 + 1) >= v14->TacticalMap_field_1C ) /*0x493ade*/
        v15 = (_WORD *)((char *)v15 - v14->TacticalMap_field_20); /*0x493ae0*/
      a5 = v15; /*0x493ae3*/
      result = (int)a5a - 1; /*0x493ae9*/
      a5a = (_WORD *)((char *)a5a - 1); /*0x493aea*/
    }
    while ( a5a ); /*0x493aee*/
  }
  return result; /*0x493af4*/
}


// ==== 0x00493B00  _BlitTransLucent50ZReadWrite_G::CallBlit0_2  this=?$BlitTransLucent50ZReadWrite@G  sig=csp ====
int __thiscall BlitTransXlatAlpha_ushort::CallBlit0_2(
        BlitTransLucent50ZReadWrite_G *this,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8)
{
  return (*((int (__thiscall **)(BlitTransLucent50ZReadWrite_G *, int, int, int, int, int, int, int, _DWORD))this->vfptr /*0x493b2a*/
          + 1))(
           this,
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           0);
}


// ==== 0x00493B30  _BlitTransLucent50ZReadWrite_G::CallBlit0_3  this=?$BlitTransLucent50ZReadWrite@G  sig=csp ====
int __thiscall BlitTransXlatAlpha_ushort::CallBlit0_3(
        BlitTransLucent50ZReadWrite_G *this,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10)
{
  return (*((int (__thiscall **)(BlitTransLucent50ZReadWrite_G *, int, int, int, int, int, int, int, _DWORD))this->vfptr /*0x493b5a*/
          + 1))(
           this,
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           0);
}


// ==== 0x00493B60  _BlitTransLucent50ZReadWrite_G::CallBlit0_4  this=?$BlitTransLucent50ZReadWrite@G  sig=csp ====
int __thiscall BlitTransXlatAlpha_ushort::CallBlit0_4(
        BlitTransLucent50ZReadWrite_G *this,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9)
{
  return (*((int (__thiscall **)(BlitTransLucent50ZReadWrite_G *, int, int, int, int, int, int, int, _DWORD))this->vfptr /*0x493b8a*/
          + 1))(
           this,
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           0);
}


// ==== 0x00493B90  _BlitTransLucent25ZReadWrite_G::Blit_Alpha_ZReadWrite_Lucent25_0  this=?$BlitTransLucent25ZReadWrite@G  sig=csp ====
int __thiscall BlitTransXlatAlpha_ushort::Blit_Alpha_ZReadWrite_Lucent25_0(
        BlitTransLucent25ZReadWrite_G *this,
        _WORD *a1,
        _BYTE *a2,
        int a4,
        int argC,
        _WORD *a5,
        int a7,
        int a8,
        int a9)
{
  int result; // eax
  TacticalMap *v11; // edx
  _WORD *v13; // eax
  _WORD *a5a; // [esp+18h] [ebp+14h]

  result = a4; /*0x493b90*/
  if ( a4 > 0 ) /*0x493b9b*/
  {
    v11 = *(TacticalMap **)&MEMORY[0x87F8E4].__pad_5568[10232]; /*0x493ba1*/
    a5a = (_WORD *)a4; /*0x493bb2*/
    do /*0x493c24*/
    {
      if ( argC < (unsigned __int16)*a5 && *a2 ) /*0x493bc7*/
      {
        *a1 = (*(_WORD *)(this + 2) & (*a1 >> 2)) /*0x493bf6*/
            + 3 * (*(_WORD *)(this + 2) & (*(_WORD *)(*((_DWORD *)this + 1) + 2 * (unsigned __int8)*a2) >> 2));
        *a5 = argC; /*0x493bf9*/
        v11 = *(TacticalMap **)&MEMORY[0x87F8E4].__pad_5568[10232]; /*0x493bfc*/
      }
      ++a1; /*0x493c06*/
      ++a2; /*0x493c0a*/
      v13 = a5 + 1; /*0x493c0e*/
      if ( (unsigned int)(a5 + 1) >= v11->TacticalMap_field_1C ) /*0x493c14*/
        v13 = (_WORD *)((char *)v13 - v11->TacticalMap_field_20); /*0x493c16*/
      a5 = v13; /*0x493c19*/
      result = (int)a5a - 1; /*0x493c1f*/
      a5a = (_WORD *)((char *)a5a - 1); /*0x493c20*/
    }
    while ( a5a ); /*0x493c24*/
  }
  return result; /*0x493c29*/
}


// ==== 0x00493C30  _BlitTransLucent25ZReadWrite_G::CallBlit0_5  this=?$BlitTransLucent25ZReadWrite@G  sig=csp ====
int __thiscall BlitTransXlatAlpha_ushort::CallBlit0_5(
        BlitTransLucent25ZReadWrite_G *this,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8)
{
  return (*((int (__thiscall **)(BlitTransLucent25ZReadWrite_G *, int, int, int, int, int, int, int, _DWORD))this->vfptr /*0x493c5a*/
          + 1))(
           this,
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           0);
}


// ==== 0x00493C60  _BlitTransLucent25ZReadWrite_G::CallBlit0_6  this=?$BlitTransLucent25ZReadWrite@G  sig=csp ====
int __thiscall BlitTransXlatAlpha_ushort::CallBlit0_6(
        BlitTransLucent25ZReadWrite_G *this,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10)
{
  return (*((int (__thiscall **)(BlitTransLucent25ZReadWrite_G *, int, int, int, int, int, int, int, _DWORD))this->vfptr /*0x493c8a*/
          + 1))(
           this,
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           0);
}


// ==== 0x00493C90  _BlitTransLucent25ZReadWrite_G::CallBlit0_7  this=?$BlitTransLucent25ZReadWrite@G  sig=csp ====
int __thiscall BlitTransXlatAlpha_ushort::CallBlit0_7(
        BlitTransLucent25ZReadWrite_G *this,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9)
{
  return (*((int (__thiscall **)(BlitTransLucent25ZReadWrite_G *, int, int, int, int, int, int, int, _DWORD))this->vfptr /*0x493cba*/
          + 1))(
           this,
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           0);
}


// ==== 0x00493CC0  _BlitPlainXlatAlpha_G::AddRef  this=BlitPlainXlatAlpha_ushort  sig=csp ====
int __thiscall BlitPlainXlatAlpha_ushort::_vt01(
        _DWORD *this,
        int a2,
        unsigned __int8 *a3,
        int a4,
        int a5,
        int a6,
        unsigned __int16 *a7,
        int a8,
        int a9)
{
  int v10; // eax
  int v11; // ebp
  int result; // eax
  unsigned __int16 v15; // ax
  int v16; // [esp+24h] [ebp+18h]
  unsigned __int8 v17; // [esp+28h] [ebp+1Ch]

  v10 = (261 * (a8 <= 0 ? 0 : a8)) >> 11;
  if ( v10 > 254 ) /*0x493ce7*/
    v10 = 254; /*0x493ce9*/
  v11 = this->BlitPlainXlatAlpha_ushort_field_0x08 + (v10 << 9); /*0x493cf6*/
  result = a4; /*0x493cf8*/
  if ( a4 > 0 ) /*0x493cfe*/
  {
    v16 = a4; /*0x493d09*/
    do /*0x493d53*/
    {
      v17 = *a3; /*0x493d11*/
      v15 = *a7++; /*0x493d17*/
      ++a3; /*0x493d1d*/
      a2 += 2; /*0x493d1e*/
      *(_WORD *)(a2 - 2) = *(_WORD *)(this->BlitPlainXlatAlpha_ushort_field_0x04 + 2 * (v17 | *(unsigned __int16 *)(v11 + 2 * v15))); /*0x493d38*/
      if ( (unsigned int)a7 >= *((_DWORD *)MEMORY[0x87E8A4] + 7) ) /*0x493d45*/
        a7 = (unsigned __int16 *)((char *)a7 - *((_DWORD *)MEMORY[0x87E8A4] + 8)); /*0x493d47*/
      result = --v16; /*0x493d4e*/
    }
    while ( v16 ); /*0x493d53*/
  }
  return result; /*0x493d56*/
}


// ==== 0x00493D60  _BlitPlainXlatAlpha_G::ddtor  this=BlitPlainXlatAlpha_ushort  sig=csp ====
int __thiscall BlitPlainXlatAlpha_ushort::_vt03(void *this, int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
  return (*(int (__thiscall **)(void *, int, int, int, int, int, int, int, _DWORD))(this->BlitPlainXlatAlpha_ushort_field_0x04)( /*0x493d8a*/
           this,
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           0);
}


// ==== 0x00493D90  _BlitPlainXlatAlpha_G::Release  this=BlitPlainXlatAlpha_ushort  sig=csp ====
int __thiscall BlitPlainXlatAlpha_ushort::_vt02(
        void *this,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10)
{
  return (*(int (__thiscall **)(void *, int, int, int, int, int, int, int, _DWORD))(this->BlitPlainXlatAlpha_ushort_field_0x04)( /*0x493dba*/
           this,
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           0);
}


// ==== 0x00493DC0  _BlitPlainXlatAlpha_G::Blit  this=BlitPlainXlatAlpha_ushort  sig=csp ====
int __thiscall BlitPlainXlatAlpha_ushort::_vt04(
        void *this,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9)
{
  return (*(int (__thiscall **)(void *, int, int, int, int, int, int, int, _DWORD))(this->BlitPlainXlatAlpha_ushort_field_0x04)( /*0x493dea*/
           this,
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           0);
}


// ==== 0x00493DF0  _BlitTransXlatAlpha_G::AddRef  this=BlitTransXlatAlpha_ushort  sig=csp ====
int __thiscall BlitTransXlatAlpha_ushort::_vt01(
        _DWORD *this,
        _WORD *a2,
        unsigned __int8 *a3,
        int a4,
        int a5,
        int a6,
        unsigned __int16 *a7,
        int a8,
        int a9)
{
  int v11; // eax
  int result; // eax
  _DWORD *v14; // edi
  unsigned __int8 v16; // bl
  int v17; // [esp+20h] [ebp+18h]

  v11 = (261 * (a8 <= 0 ? 0 : a8)) >> 11;
  if ( v11 > 254 ) /*0x493e18*/
    v11 = 254; /*0x493e1a*/
  result = this->BlitTransXlatAlpha_ushort_field_0x8 + (v11 << 9); /*0x493e25*/
  if ( a4 > 0 ) /*0x493e2d*/
  {
    v14 = MEMORY[0x87E8A4]; /*0x493e35*/
    v17 = a4; /*0x493e3b*/
    do /*0x493e8e*/
    {
      v16 = *a3++; /*0x493e43*/
      if ( v16 ) /*0x493e4c*/
      {
        *a2 = *(_WORD *)(this->BlitTransXlatAlpha_ushort_field_0x4 + 2 * (v16 | *(unsigned __int16 *)(result + 2 * *a7))); /*0x493e6c*/
        v14 = MEMORY[0x87E8A4]; /*0x493e6f*/
      }
      ++a7; /*0x493e78*/
      ++a2; /*0x493e7b*/
      if ( (unsigned int)a7 >= v14[7] ) /*0x493e80*/
        a7 = (unsigned __int16 *)((char *)a7 - v14[8]); /*0x493e82*/
      --v17; /*0x493e8a*/
    }
    while ( v17 ); /*0x493e8e*/
  }
  return result; /*0x493e92*/
}


// ==== 0x00493EA0  _BlitTransXlatAlpha_G::ddtor  this=BlitTransXlatAlpha_ushort  sig=csp ====
int __thiscall BlitTransXlatAlpha_ushort::_vt03(void *this, int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
  return (*(int (__thiscall **)(void *, int, int, int, int, int, int, int, _DWORD))(this->BlitTransXlatAlpha_ushort_field_0x4)( /*0x493eca*/
           this,
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           0);
}


// ==== 0x00493ED0  _BlitTransXlatAlpha_G::BlitRect  this=BlitTransXlatAlpha_ushort  sig=csp ====
int __thiscall BlitTransXlatAlpha_ushort::BlitRect(
        void *this,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10)
{
  return (*(int (__thiscall **)(void *, int, int, int, int, int, int, int, _DWORD))(this->BlitTransXlatAlpha_ushort_field_0x4)( /*0x493efa*/
           this,
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           0);
}


// ==== 0x00493F00  _BlitTransXlatAlpha_G::GetSize  this=BlitTransXlatAlpha_ushort  sig=csp ====
int __thiscall BlitTransXlatAlpha_ushort::_vt04(
        void *this,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9)
{
  return (*(int (__thiscall **)(void *, int, int, int, int, int, int, int, _DWORD))(this->BlitTransXlatAlpha_ushort_field_0x4)( /*0x493f2a*/
           this,
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           0);
}


// ==== 0x00493F30  _BlitTransZRemapXlatAlpha_G::AddRef  this=BlitTransZRemapXlatAlpha_ushort  sig=csp ====
int __thiscall BlitTransZRemapXlatAlpha_ushort::_vt01(
        int this,
        _WORD *a2,
        unsigned __int8 *a3,
        int a4,
        int a5,
        int a6,
        unsigned __int16 *a7,
        int a8,
        int a9)
{
  int v9; // ebp
  int v11; // eax
  int result; // eax
  _DWORD *v14; // edi
  bool v15; // zf
  unsigned __int8 v16; // [esp+18h] [ebp+Ch]
  int v17; // [esp+24h] [ebp+18h]
  int v18; // [esp+28h] [ebp+1Ch]

  v9 = **(_DWORD **)(this + 4); /*0x493f39*/
  v11 = (261 * (a8 <= 0 ? 0 : a8)) >> 11;
  if ( v11 > 254 ) /*0x493f5c*/
    v11 = 254; /*0x493f5e*/
  v18 = *(_DWORD *)(this + 12) + (v11 << 9); /*0x493f6b*/
  result = a4; /*0x493f6f*/
  if ( a4 > 0 ) /*0x493f75*/
  {
    v14 = MEMORY[0x87E8A4]; /*0x493f7b*/
    v17 = a4; /*0x493f82*/
    do /*0x493fe1*/
    {
      v15 = *a3 == 0; /*0x493f8d*/
      v16 = *a3++; /*0x493f8f*/
      if ( !v15 ) /*0x493f97*/
      {
        *a2 = *(_WORD *)(*(_DWORD *)(this + 8) /*0x493fbf*/
                       + 2 * (*(unsigned __int8 *)(v16 + v9) | *(unsigned __int16 *)(v18 + 2 * *a7)));
        v14 = MEMORY[0x87E8A4]; /*0x493fc2*/
      }
      ++a7; /*0x493fcb*/
      ++a2; /*0x493fce*/
      if ( (unsigned int)a7 >= v14[7] ) /*0x493fd3*/
        a7 = (unsigned __int16 *)((char *)a7 - v14[8]); /*0x493fd5*/
      result = --v17; /*0x493fdc*/
    }
    while ( v17 ); /*0x493fe1*/
  }
  return result; /*0x493fe4*/
}


// ==== 0x00493FF0  _BlitTransZRemapXlatAlpha_G::ddtor  this=BlitTransZRemapXlatAlpha_ushort  sig=csp ====
int __thiscall BlitTransZRemapXlatAlpha_ushort::_vt03(
        void *this,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8)
{
  return (*(int (__thiscall **)(void *, int, int, int, int, int, int, int, _DWORD))(this->BlitTransZRemapXlatAlpha_ushort_field_0x04)( /*0x49401a*/
           this,
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           0);
}


// ==== 0x00494020  _BlitTransZRemapXlatAlpha_G::BlitRect  this=BlitTransZRemapXlatAlpha_ushort  sig=csp ====
int __thiscall BlitTransZRemapXlatAlpha_ushort::BlitRect(
        void *this,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10)
{
  return (*(int (__thiscall **)(void *, int, int, int, int, int, int, int, _DWORD))(this->BlitTransZRemapXlatAlpha_ushort_field_0x04)( /*0x49404a*/
           this,
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           0);
}


// ==== 0x00494050  _BlitTransZRemapXlatAlpha_G::GetSize  this=BlitTransZRemapXlatAlpha_ushort  sig=csp ====
int __thiscall BlitTransZRemapXlatAlpha_ushort::_vt04(
        void *this,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9)
{
  return (*(int (__thiscall **)(void *, int, int, int, int, int, int, int, _DWORD))(this->BlitTransZRemapXlatAlpha_ushort_field_0x04)( /*0x49407a*/
           this,
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           0);
}


// ==== 0x00494080  _BlitTransLucent75Alpha_G::AddRef  this=BlitTransLucent75Alpha_ushort  sig=csp ====
int __thiscall BlitTransLucent75Alpha_ushort::_vt01(
        int this,
        _WORD *a2,
        unsigned __int8 *a3,
        int a4,
        int a5,
        int a6,
        unsigned __int16 *a7,
        int a8,
        int a9)
{
  int v10; // eax
  int v11; // ebx
  int result; // eax
  _DWORD *v14; // edx
  bool v15; // zf
  unsigned __int16 *v16; // eax
  int v17; // [esp+24h] [ebp+18h]
  unsigned __int8 v18; // [esp+28h] [ebp+1Ch]

  v10 = (261 * (a8 <= 0 ? 0 : a8)) >> 11;
  if ( v10 > 254 ) /*0x4940a7*/
    v10 = 254; /*0x4940a9*/
  v11 = *(_DWORD *)(this + 8) + (v10 << 9); /*0x4940b6*/
  result = a4; /*0x4940b8*/
  if ( a4 > 0 ) /*0x4940be*/
  {
    v14 = MEMORY[0x87E8A4]; /*0x4940c4*/
    v17 = a4; /*0x4940cb*/
    do /*0x49413c*/
    {
      v15 = *a3 == 0; /*0x4940d7*/
      v18 = *a3++; /*0x4940d9*/
      if ( !v15 ) /*0x4940e1*/
      {
        *a2 = 3 * (*(_WORD *)(this + 12) & (*a2 >> 2)) /*0x494118*/
            + (*(_WORD *)(this + 12)
             & (*(_WORD *)(*(_DWORD *)(this + 4) + 2 * (v18 | *(unsigned __int16 *)(v11 + 2 * *a7))) >> 2));
        v14 = MEMORY[0x87E8A4]; /*0x49411b*/
      }
      v16 = a7 + 1; /*0x494121*/
      ++a2; /*0x494127*/
      if ( (unsigned int)(a7 + 1) >= v14[7] ) /*0x49412c*/
        v16 = (unsigned __int16 *)((char *)v16 - v14[8]); /*0x49412e*/
      a7 = v16; /*0x494131*/
      result = --v17; /*0x494137*/
    }
    while ( v17 ); /*0x49413c*/
  }
  return result; /*0x49413f*/
}


// ==== 0x00494150  _BlitTransLucent75Alpha_G::ddtor  this=BlitTransLucent75Alpha_ushort  sig=csp ====
int __thiscall BlitTransLucent75Alpha_ushort::_vt03(void *this, int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
  return (*(int (__thiscall **)(void *, int, int, int, int, int, int, int, _DWORD))(this->BlitTransLucent75Alpha_ushort_field_0x04)( /*0x49417a*/
           this,
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           0);
}


// ==== 0x00494180  _BlitTransLucent75Alpha_G::BlitRect  this=BlitTransLucent75Alpha_ushort  sig=csp ====
int __thiscall BlitTransLucent75Alpha_ushort::BlitRect(
        void *this,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10)
{
  return (*(int (__thiscall **)(void *, int, int, int, int, int, int, int, _DWORD))(this->BlitTransLucent75Alpha_ushort_field_0x04)( /*0x4941aa*/
           this,
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           0);
}


// ==== 0x004941B0  _BlitTransLucent75Alpha_G::GetSize  this=BlitTransLucent75Alpha_ushort  sig=csp ====
int __thiscall BlitTransLucent75Alpha_ushort::_vt04(
        void *this,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9)
{
  return (*(int (__thiscall **)(void *, int, int, int, int, int, int, int, _DWORD))(this->BlitTransLucent75Alpha_ushort_field_0x04)( /*0x4941da*/
           this,
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           0);
}


// ==== 0x004941E0  _BlitTransLucent50Alpha_G::AddRef  this=BlitTransLucent50Alpha_ushort  sig=csp ====
int __thiscall BlitTransLucent50Alpha_ushort::_vt01(
        int this,
        _WORD *a2,
        unsigned __int8 *a3,
        int a4,
        int a5,
        int a6,
        unsigned __int16 *a7,
        int a8,
        int a9)
{
  int v10; // eax
  int result; // eax
  _DWORD *v12; // ebx
  bool v14; // zf
  unsigned __int16 *v15; // edx
  int v16; // [esp+20h] [ebp+18h]
  unsigned __int8 v17; // [esp+24h] [ebp+1Ch]

  v10 = (261 * (a8 <= 0 ? 0 : a8)) >> 11;
  if ( v10 > 254 ) /*0x494206*/
    v10 = 254; /*0x494208*/
  result = *(_DWORD *)(this + 8) + (v10 << 9); /*0x494217*/
  if ( a4 > 0 ) /*0x49421b*/
  {
    v12 = MEMORY[0x87E8A4]; /*0x49421d*/
    v16 = a4; /*0x494229*/
    do /*0x494296*/
    {
      v14 = *a3 == 0; /*0x494235*/
      v17 = *a3++; /*0x494237*/
      if ( !v14 ) /*0x49423f*/
      {
        *a2 = (*(_WORD *)(this + 12) & (*a2 >> 1)) /*0x494272*/
            + (*(_WORD *)(this + 12)
             & (*(_WORD *)(*(_DWORD *)(this + 4) + 2 * (v17 | *(unsigned __int16 *)(result + 2 * *a7))) >> 1));
        v12 = MEMORY[0x87E8A4]; /*0x494275*/
      }
      v15 = a7 + 1; /*0x49427b*/
      ++a2; /*0x494281*/
      if ( (unsigned int)(a7 + 1) >= v12[7] ) /*0x494286*/
        v15 = (unsigned __int16 *)((char *)v15 - v12[8]); /*0x494288*/
      a7 = v15; /*0x49428b*/
      --v16; /*0x494292*/
    }
    while ( v16 ); /*0x494296*/
  }
  return result; /*0x49429a*/
}


// ==== 0x004942A0  _BlitTransLucent50Alpha_G::ddtor  this=BlitTransLucent50Alpha_ushort  sig=csp ====
int __thiscall BlitTransLucent50Alpha_ushort::_vt03(void *this, int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
  return (*(int (__thiscall **)(void *, int, int, int, int, int, int, int, _DWORD))(this->BlitTransLucent50Alpha_ushort_field_0x04)( /*0x4942ca*/
           this,
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           0);
}


// ==== 0x004942D0  _BlitTransLucent50Alpha_G::BlitRect  this=BlitTransLucent50Alpha_ushort  sig=csp ====
int __thiscall BlitTransLucent50Alpha_ushort::BlitRect(
        void *this,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10)
{
  return (*(int (__thiscall **)(void *, int, int, int, int, int, int, int, _DWORD))(this->BlitTransLucent50Alpha_ushort_field_0x04)( /*0x4942fa*/
           this,
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           0);
}


// ==== 0x00494300  _BlitTransLucent50Alpha_G::GetSize  this=BlitTransLucent50Alpha_ushort  sig=csp ====
int __thiscall BlitTransLucent50Alpha_ushort::_vt04(
        void *this,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9)
{
  return (*(int (__thiscall **)(void *, int, int, int, int, int, int, int, _DWORD))(this->BlitTransLucent50Alpha_ushort_field_0x04)( /*0x49432a*/
           this,
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           0);
}


// ==== 0x00494330  _BlitTransLucent25Alpha_G::AddRef  this=BlitTransLucent25Alpha_ushort  sig=csp ====
int __thiscall BlitTransLucent25Alpha_ushort::_vt01(
        int this,
        _WORD *a2,
        unsigned __int8 *a3,
        int a4,
        int a5,
        int a6,
        unsigned __int16 *a7,
        int a8,
        int a9)
{
  int v10; // eax
  int v11; // ebx
  int result; // eax
  _DWORD *v14; // edx
  bool v15; // zf
  unsigned __int16 *v16; // eax
  int v17; // [esp+24h] [ebp+18h]
  unsigned __int8 v18; // [esp+28h] [ebp+1Ch]

  v10 = (261 * (a8 <= 0 ? 0 : a8)) >> 11;
  if ( v10 > 254 ) /*0x494357*/
    v10 = 254; /*0x494359*/
  v11 = *(_DWORD *)(this + 8) + (v10 << 9); /*0x494366*/
  result = a4; /*0x494368*/
  if ( a4 > 0 ) /*0x49436e*/
  {
    v14 = MEMORY[0x87E8A4]; /*0x494374*/
    v17 = a4; /*0x49437b*/
    do /*0x4943ec*/
    {
      v15 = *a3 == 0; /*0x494387*/
      v18 = *a3++; /*0x494389*/
      if ( !v15 ) /*0x494391*/
      {
        *a2 = (*(_WORD *)(this + 12) & (*a2 >> 2)) /*0x4943c8*/
            + 3
            * (*(_WORD *)(this + 12)
             & (*(_WORD *)(*(_DWORD *)(this + 4) + 2 * (v18 | *(unsigned __int16 *)(v11 + 2 * *a7))) >> 2));
        v14 = MEMORY[0x87E8A4]; /*0x4943cb*/
      }
      v16 = a7 + 1; /*0x4943d1*/
      ++a2; /*0x4943d7*/
      if ( (unsigned int)(a7 + 1) >= v14[7] ) /*0x4943dc*/
        v16 = (unsigned __int16 *)((char *)v16 - v14[8]); /*0x4943de*/
      a7 = v16; /*0x4943e1*/
      result = --v17; /*0x4943e7*/
    }
    while ( v17 ); /*0x4943ec*/
  }
  return result; /*0x4943ef*/
}


// ==== 0x00494400  _BlitTransLucent25Alpha_G::ddtor  this=BlitTransLucent25Alpha_ushort  sig=csp ====
int __thiscall BlitTransLucent25Alpha_ushort::_vt03(void *this, int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
  return (*(int (__thiscall **)(void *, int, int, int, int, int, int, int, _DWORD))(this->BlitTransLucent25Alpha_ushort_field_0x04)( /*0x49442a*/
           this,
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           0);
}


// ==== 0x00494430  _BlitTransLucent25Alpha_G::BlitRect  this=BlitTransLucent25Alpha_ushort  sig=csp ====
int __thiscall BlitTransLucent25Alpha_ushort::BlitRect(
        void *this,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10)
{
  return (*(int (__stdcall **)(int, int, int, int, int, int, int, _DWORD))(this->BlitTransLucent25Alpha_ushort_field_0x04)( /*0x49445a*/
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           0);
}


// ==== 0x00494460  _BlitTransLucent25Alpha_G::GetSize  this=BlitTransLucent25Alpha_ushort  sig=csp ====
int __thiscall BlitTransLucent25Alpha_ushort::_vt04(
        void *this,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9)
{
  return (*(int (__thiscall **)(void *, int, int, int, int, int, int, int, _DWORD))(this->BlitTransLucent25Alpha_ushort_field_0x04)( /*0x49448a*/
           this,
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           0);
}


// ==== 0x00494490  _BlitTransXlatWriteAlpha_G::Blit_ZRead_AlphaBlend  this=?$BlitTransXlatWriteAlpha@G  sig=csp ====
_WORD *__thiscall BlitTransLucent25Alpha_ushort::Blit_ZRead_AlphaBlend(BlitTransXlatWriteAlpha_G *this)
{
  _WORD *result; // eax
  TacticalClass *v9; // edx
  BlitTransXlatWriteAlpha_G *v3; // esi
  BlitTransXlatWriteAlpha_G *v11; // edi
  unsigned __int8 vfptr; // cl
  int v6; // ecx
  BlitTransXlatWriteAlpha_G *v7; // [esp+8h] [ebp+8h]
  BlitTransXlatWriteAlpha_G *v8; // [esp+Ch] [ebp+Ch]
  int argC; // [esp+10h] [ebp+10h]
  _WORD *v10; // [esp+18h] [ebp+18h]

  result = v10; /*0x494494*/
  if ( (int)v8 > 0 ) /*0x49449a*/
  {
    v9 = (TacticalClass *)MEMORY[0x87E8A4]; /*0x49449c*/
    v3 = v7; /*0x4944a8*/
    v11 = v8; /*0x4944ad*/
    do /*0x4944ea*/
    {
      vfptr = (unsigned __int8)v3->vfptr; /*0x4944af*/
      v3 = (BlitTransXlatWriteAlpha_G *)((char *)v3 + 1); /*0x4944b1*/
      if ( vfptr ) /*0x4944b8*/
      {
        v6 = argC + vfptr; /*0x4944c4*/
        if ( v6 >= 255 ) /*0x4944cc*/
          LOWORD(v6) = 255; /*0x4944ce*/
        *result = v6; /*0x4944d3*/
        v9 = (TacticalClass *)MEMORY[0x87E8A4]; /*0x4944d6*/
      }
      if ( (unsigned int)++result >= v9->referenceCount ) /*0x4944e4*/
        result = (_WORD *)((char *)result - (unsigned int)v9->NeedsSaveOrLink); /*0x4944e6*/
      v11 = (BlitTransXlatWriteAlpha_G *)((char *)v11 - 1); /*0x4944e9*/
    }
    while ( v11 ); /*0x4944ea*/
  }
  return result; /*0x4944ef*/
}


// ==== 0x00494500  _BlitTransXlatWriteAlpha_G::CallBlit0  this=?$BlitTransXlatWriteAlpha@G  sig=csp ====
int __thiscall BlitTransLucent25Alpha_ushort::CallBlit0(
        BlitTransXlatWriteAlpha_G *this,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8)
{
  return (*((int (__thiscall **)(BlitTransXlatWriteAlpha_G *, int, int, int, int, int, int, int, _DWORD))this->vfptr + 1))( /*0x49452a*/
           this,
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           0);
}


// ==== 0x00494530  _BlitTransXlatWriteAlpha_G::CallBlit0_0  this=?$BlitTransXlatWriteAlpha@G  sig=csp ====
int __thiscall BlitTransLucent25Alpha_ushort::CallBlit0_0(
        BlitTransXlatWriteAlpha_G *this,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10)
{
  return (*((int (__thiscall **)(BlitTransXlatWriteAlpha_G *, int, int, int, int, int, int, int, _DWORD))this->vfptr + 1))( /*0x49455a*/
           this,
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           0);
}


// ==== 0x00494560  _BlitTransXlatWriteAlpha_G::CallBlit0_1  this=?$BlitTransXlatWriteAlpha@G  sig=csp ====
int __thiscall BlitTransLucent25Alpha_ushort::CallBlit0_1(
        BlitTransXlatWriteAlpha_G *this,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9)
{
  return (*((int (__thiscall **)(BlitTransXlatWriteAlpha_G *, int, int, int, int, int, int, int, _DWORD))this->vfptr + 1))( /*0x49458a*/
           this,
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           0);
}


// ==== 0x00494590  _BlitTransXlatMultWriteAlpha_G::Blit_ZRead_AlphaBlend  this=?$BlitTransXlatMultWriteAlpha@G  sig=csp ====
_WORD *__stdcall BlitTransXlatAlphaZRead_ushort::sub_494590(
        int a1,
        unsigned __int8 *a2,
        int a3,
        int a4,
        int a5,
        _WORD *a6,
        int a7,
        int a8)
{
  _WORD *result; // eax
  _DWORD *v9; // edx
  int v11; // ebp
  unsigned __int8 v12; // cl
  int v13; // ecx

  result = a6; /*0x494594*/
  if ( a3 > 0 ) /*0x49459a*/
  {
    v9 = MEMORY[0x87E8A4]; /*0x49459c*/
    v11 = a3; /*0x4945b2*/
    do /*0x4945f2*/
    {
      v12 = *a2++; /*0x4945b4*/
      if ( v12 ) /*0x4945bd*/
      {
        v13 = a4 + a7 * v12; /*0x4945cc*/
        if ( v13 >= 255 ) /*0x4945d4*/
          LOWORD(v13) = 255; /*0x4945d6*/
        *result = v13; /*0x4945db*/
        v9 = MEMORY[0x87E8A4]; /*0x4945de*/
      }
      if ( (unsigned int)++result >= v9[7] ) /*0x4945ec*/
        result = (_WORD *)((char *)result - v9[8]); /*0x4945ee*/
      --v11; /*0x4945f1*/
    }
    while ( v11 ); /*0x4945f2*/
  }
  return result; /*0x4945f8*/
}


// ==== 0x00494600  _BlitTransXlatMultWriteAlpha_G::CallBlit0  this=?$BlitTransXlatMultWriteAlpha@G  sig=csp ====
int __thiscall BlitTransXlatAlphaZRead_ushort::CallBlit0(
        BlitTransXlatMultWriteAlpha_G *this,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8)
{
  return (*((int (__thiscall **)(BlitTransXlatMultWriteAlpha_G *, int, int, int, int, int, int, int, _DWORD))this->vfptr /*0x49462a*/
          + 1))(
           this,
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           0);
}


// ==== 0x00494630  _BlitTransXlatMultWriteAlpha_G::CallBlit0_0  this=?$BlitTransXlatMultWriteAlpha@G  sig=csp ====
int __thiscall BlitTransXlatAlphaZRead_ushort::CallBlit0_0(
        BlitTransXlatMultWriteAlpha_G *this,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10)
{
  return (*((int (__thiscall **)(BlitTransXlatMultWriteAlpha_G *, int, int, int, int, int, int, int, _DWORD))this->vfptr /*0x49465a*/
          + 1))(
           this,
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           0);
}


// ==== 0x00494660  _BlitTransXlatMultWriteAlpha_G::CallBlit0_1  this=?$BlitTransXlatMultWriteAlpha@G  sig=csp ====
int __thiscall BlitTransXlatAlphaZRead_ushort::CallBlit0_1(
        BlitTransXlatMultWriteAlpha_G *this,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9)
{
  return (*((int (__thiscall **)(BlitTransXlatMultWriteAlpha_G *, int, int, int, int, int, int, int, _DWORD))this->vfptr /*0x49468a*/
          + 1))(
           this,
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           0);
}


// ==== 0x00494690  _BlitTranslucentWriteAlpha_G::BlitAlpha  this=?$BlitTranslucentWriteAlpha@G  sig=csp ====
int __thiscall BlitTransXlatAlphaZRead_ushort::BlitAlpha(
        BlitTranslucentWriteAlpha_G *this,
        BlitTranslucentWriteAlpha_G *aP1,
        unsigned __int8 *a2,
        int a4,
        int a5,
        int _2C,
        unsigned __int16 *a6,
        int a8,
        int a9)
{
  int result; // eax
  TacticalClass *v10; // ecx
  bool v11; // zf
  int v12; // esi
  int v13; // edi
  unsigned __int16 v14; // ax
  int v15; // ecx
  int v16; // eax
  int v17; // edx
  int v18; // ecx
  int v19; // esi
  unsigned __int16 *v20; // eax
  unsigned __int8 v21; // [esp+0h] [ebp-18h]

  result = a4; /*0x49469f*/
  if ( a4 > 0 ) /*0x4946a5*/
  {
    v10 = *(TacticalClass **)&stru_87C374.__pad_14B0[4224]; /*0x4946ab*/
    do /*0x494875*/
    {
      v11 = *a2 == 0; /*0x4946c0*/
      v21 = *a2++; /*0x4946c2*/
      if ( !v11 ) /*0x4946ca*/
      {
        v12 = *a6; /*0x4946db*/
        v13 = 255 - v12; /*0x4946de*/
        if ( v12 == 255 ) /*0x4946e6*/
          v12 = 256; /*0x4946e8*/
        v14 = *(_WORD *)(*((_DWORD *)this + 1) + 2 * v21); /*0x49470a*/
        v15 = v12 /*0x4947c5*/
            * (unsigned __int8)((unsigned __int8)(v14 >> stru_89E138.__pad_14B0[6136]) << stru_89E138.__pad_14B0[6140])
            + v13
            * (unsigned __int8)((unsigned __int8)(LOWORD(aP1->vfptr) >> stru_89E138.__pad_14B0[6136]) << stru_89E138.__pad_14B0[6140]);
        v16 = (v12 /*0x4947e2*/
             * (unsigned __int8)((unsigned __int8)(v14 >> stru_89E138.__pad_14B0[6128]) << stru_89E138.__pad_14B0[6132])
             + v13
             * (unsigned __int8)((unsigned __int8)(LOWORD(aP1->vfptr) >> stru_89E138.__pad_14B0[6128]) << stru_89E138.__pad_14B0[6132])) >> 8;
        v17 = (v12 /*0x4947e5*/
             * (unsigned __int8)((unsigned __int8)(*(_WORD *)(*((_DWORD *)this + 1) + 2 * v21) >> stru_89E138.__pad_14B0[6120]) << stru_89E138.__pad_14B0[6124])
             + v13
             * (unsigned __int8)((unsigned __int8)(LOWORD(aP1->vfptr) >> stru_89E138.__pad_14B0[6120]) << stru_89E138.__pad_14B0[6124])) >> 8;
        v18 = v15 >> 8; /*0x4947e8*/
        if ( v16 > 255 ) /*0x4947f0*/
          v16 = 255; /*0x4947f2*/
        v19 = 255; /*0x4947fd*/
        if ( v18 <= 255 ) /*0x494802*/
          v19 = v18; /*0x494804*/
        if ( v17 > 255 ) /*0x49480c*/
          v17 = 255; /*0x49480e*/
        LOWORD(aP1->vfptr) = (v16 >> stru_89E138.__pad_14B0[6132] << stru_89E138.__pad_14B0[6128]) /*0x494843*/
                           | (v19 >> stru_89E138.__pad_14B0[6140] << stru_89E138.__pad_14B0[6136])
                           | (v17 >> stru_89E138.__pad_14B0[6124] << stru_89E138.__pad_14B0[6120]);
        v10 = *(TacticalClass **)&stru_87C374.__pad_14B0[4224]; /*0x494846*/
      }
      v20 = a6 + 1; /*0x494857*/
      aP1 = (BlitTranslucentWriteAlpha_G *)((char *)aP1 + 2); /*0x49485f*/
      if ( (unsigned int)(a6 + 1) >= v10->referenceCount ) /*0x494863*/
        v20 = (unsigned __int16 *)((char *)v20 - (unsigned int)v10->NeedsSaveOrLink); /*0x494865*/
      a6 = v20; /*0x494868*/
      result = --a4; /*0x494870*/
    }
    while ( a4 ); /*0x494875*/
  }
  return result; /*0x49487f*/
}


// ==== 0x00494890  _BlitTranslucentWriteAlpha_G::CallBlit0_2  this=?$BlitTranslucentWriteAlpha@G  sig=csp ====
int __thiscall BlitTransXlatAlphaZRead_ushort::CallBlit0_2(
        BlitTranslucentWriteAlpha_G *this,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8)
{
  return (*((int (__thiscall **)(BlitTranslucentWriteAlpha_G *, int, int, int, int, int, int, int, _DWORD))this->vfptr /*0x4948ba*/
          + 1))(
           this,
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           0);
}


// ==== 0x004948C0  _BlitTranslucentWriteAlpha_G::CallBlit0_3  this=?$BlitTranslucentWriteAlpha@G  sig=csp ====
int __thiscall BlitTransXlatAlphaZRead_ushort::CallBlit0_3(
        BlitTranslucentWriteAlpha_G *this,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10)
{
  return (*((int (__thiscall **)(BlitTranslucentWriteAlpha_G *, int, int, int, int, int, int, int, _DWORD))this->vfptr /*0x4948ea*/
          + 1))(
           this,
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           0);
}


// ==== 0x004948F0  _BlitTranslucentWriteAlpha_G::CallBlit0_4  this=?$BlitTranslucentWriteAlpha@G  sig=csp ====
int __thiscall BlitTransXlatAlphaZRead_ushort::CallBlit0_4(
        BlitTranslucentWriteAlpha_G *this,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9)
{
  return (*((int (__thiscall **)(BlitTranslucentWriteAlpha_G *, int, int, int, int, int, int, int, _DWORD))this->vfptr /*0x49491a*/
          + 1))(
           this,
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           0);
}


// ==== 0x00494920  _BlitTranslucent50NonzeroAlpha_G::Blit_Alpha_Lucent50  this=?$BlitTranslucent50NonzeroAlpha@G  sig=csp ====
_WORD *__thiscall BlitTransXlatAlphaZRead_ushort::Blit_Alpha_Lucent50(
        BlitTranslucent50NonzeroAlpha_G *this,
        _WORD *a1,
        unsigned __int8 *a2,
        int a4,
        int a5,
        int _14,
        _WORD *a6,
        int a8,
        int a9)
{
  _WORD *result; // eax
  TacticalClass *v12; // edi
  unsigned __int8 v13; // dl
  _WORD *a6a; // [esp+18h] [ebp+18h]

  result = a6; /*0x494924*/
  if ( a4 > 0 ) /*0x49492a*/
  {
    v12 = (TacticalClass *)MEMORY[0x87E8A4]; /*0x494938*/
    a6a = (_WORD *)a4; /*0x49493e*/
    do /*0x49499a*/
    {
      v13 = *a2++; /*0x494942*/
      if ( v13 && *result ) /*0x49494d*/
      {
        *a1 = (*(_WORD *)(this + 2) & (*a1 >> 1)) /*0x494978*/
            + (*(_WORD *)(this + 2) & (*(_WORD *)(*((_DWORD *)this + 1) + 2 * v13) >> 1));
        v12 = (TacticalClass *)MEMORY[0x87E8A4]; /*0x49497b*/
      }
      ++result; /*0x494984*/
      ++a1; /*0x494987*/
      if ( (unsigned int)result >= v12->referenceCount ) /*0x49498c*/
        result = (_WORD *)((char *)result - (unsigned int)v12->NeedsSaveOrLink); /*0x49498e*/
      a6a = (_WORD *)((char *)a6a - 1); /*0x494996*/
    }
    while ( a6a ); /*0x49499a*/
  }
  return result; /*0x4949a0*/
}


// ==== 0x004949B0  _BlitTranslucent50NonzeroAlpha_G::CallBlit0_5  this=?$BlitTranslucent50NonzeroAlpha@G  sig=csp ====
int __thiscall BlitTransXlatAlphaZRead_ushort::CallBlit0_5(
        BlitTranslucent50NonzeroAlpha_G *this,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8)
{
  return (*((int (__thiscall **)(BlitTranslucent50NonzeroAlpha_G *, int, int, int, int, int, int, int, _DWORD))this->vfptr /*0x4949da*/
          + 1))(
           this,
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           0);
}


// ==== 0x004949E0  _BlitTranslucent50NonzeroAlpha_G::CallBlit0_6  this=?$BlitTranslucent50NonzeroAlpha@G  sig=csp ====
int __thiscall BlitTransXlatAlphaZRead_ushort::CallBlit0_6(
        BlitTranslucent50NonzeroAlpha_G *this,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10)
{
  return (*((int (__thiscall **)(BlitTranslucent50NonzeroAlpha_G *, int, int, int, int, int, int, int, _DWORD))this->vfptr /*0x494a0a*/
          + 1))(
           this,
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           0);
}


// ==== 0x00494A10  _BlitTranslucent50NonzeroAlpha_G::CallBlit0_7  this=?$BlitTranslucent50NonzeroAlpha@G  sig=csp ====
int __thiscall BlitTransXlatAlphaZRead_ushort::CallBlit0_7(
        BlitTranslucent50NonzeroAlpha_G *this,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9)
{
  return (*((int (__thiscall **)(BlitTranslucent50NonzeroAlpha_G *, int, int, int, int, int, int, int, _DWORD))this->vfptr /*0x494a3a*/
          + 1))(
           this,
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           0);
}


// ==== 0x00494A40  _BlitTranslucent50ZeroAlpha_G::Blit_Alpha_Lucent50_0  this=?$BlitTranslucent50ZeroAlpha@G  sig=csp ====
_WORD *__thiscall BlitTransXlatAlphaZRead_ushort::Blit_Alpha_Lucent50_0(
        BlitTranslucent50ZeroAlpha_G *this,
        _WORD *a1,
        unsigned __int8 *a2,
        int a4,
        int a5,
        int _14,
        _WORD *a6,
        int a8,
        int a9)
{
  _WORD *result; // eax
  TacticalClass *v12; // edi
  unsigned __int8 v13; // dl
  _WORD *a6a; // [esp+18h] [ebp+18h]

  result = a6; /*0x494a44*/
  if ( a4 > 0 ) /*0x494a4a*/
  {
    v12 = (TacticalClass *)MEMORY[0x87E8A4]; /*0x494a58*/
    a6a = (_WORD *)a4; /*0x494a5e*/
    do /*0x494aba*/
    {
      v13 = *a2++; /*0x494a62*/
      if ( v13 && !*result ) /*0x494a6d*/
      {
        *a1 = (*(_WORD *)(this + 2) & (*a1 >> 1)) /*0x494a98*/
            + (*(_WORD *)(this + 2) & (*(_WORD *)(*((_DWORD *)this + 1) + 2 * v13) >> 1));
        v12 = (TacticalClass *)MEMORY[0x87E8A4]; /*0x494a9b*/
      }
      ++result; /*0x494aa4*/
      ++a1; /*0x494aa7*/
      if ( (unsigned int)result >= v12->referenceCount ) /*0x494aac*/
        result = (_WORD *)((char *)result - (unsigned int)v12->NeedsSaveOrLink); /*0x494aae*/
      a6a = (_WORD *)((char *)a6a - 1); /*0x494ab6*/
    }
    while ( a6a ); /*0x494aba*/
  }
  return result; /*0x494ac0*/
}


// ==== 0x00494AD0  _BlitTranslucent50ZeroAlpha_G::CallBlit0_8  this=?$BlitTranslucent50ZeroAlpha@G  sig=csp ====
int __thiscall BlitTransXlatAlphaZRead_ushort::CallBlit0_8(
        BlitTranslucent50ZeroAlpha_G *this,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8)
{
  return (*((int (__thiscall **)(BlitTranslucent50ZeroAlpha_G *, int, int, int, int, int, int, int, _DWORD))this->vfptr /*0x494afa*/
          + 1))(
           this,
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           0);
}


// ==== 0x00494B00  _BlitTranslucent50ZeroAlpha_G::CallBlit0_9  this=?$BlitTranslucent50ZeroAlpha@G  sig=csp ====
int __thiscall BlitTransXlatAlphaZRead_ushort::CallBlit0_9(
        BlitTranslucent50ZeroAlpha_G *this,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10)
{
  return (*((int (__thiscall **)(BlitTranslucent50ZeroAlpha_G *, int, int, int, int, int, int, int, _DWORD))this->vfptr /*0x494b2a*/
          + 1))(
           this,
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           0);
}


// ==== 0x00494B30  _BlitTranslucent50ZeroAlpha_G::CallBlit0_10  this=?$BlitTranslucent50ZeroAlpha@G  sig=csp ====
int __thiscall BlitTransXlatAlphaZRead_ushort::CallBlit0_10(
        BlitTranslucent50ZeroAlpha_G *this,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9)
{
  return (*((int (__thiscall **)(BlitTranslucent50ZeroAlpha_G *, int, int, int, int, int, int, int, _DWORD))this->vfptr /*0x494b5a*/
          + 1))(
           this,
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           0);
}


// ==== 0x00494B60  _BlitTransXlatAlphaZRead_G::AddRef  this=BlitTransXlatAlphaZRead_ushort  sig=csp ====
int __thiscall BlitTransXlatAlphaZRead_ushort::_vt01(
        _DWORD *this,
        _WORD *a2,
        _BYTE *a3,
        int a4,
        int a5,
        unsigned __int16 *a6,
        unsigned __int16 *a7,
        int a8,
        int a9)
{
  int v11; // eax
  int result; // eax
  _DWORD *v13; // ebp
  unsigned __int16 v15; // ax
  int v16; // [esp+20h] [ebp+14h]
  int v17; // [esp+24h] [ebp+18h]

  v11 = (261 * (a8 <= 0 ? 0 : a8)) >> 11;
  if ( v11 > 254 ) /*0x494b8b*/
    v11 = 254; /*0x494b8d*/
  result = this->BlitTransXlatAlphaZRead_ushort_field_0x08 + (v11 << 9); /*0x494b98*/
  v17 = result; /*0x494ba0*/
  if ( a4 > 0 ) /*0x494ba4*/
  {
    v13 = MEMORY[0x887644]; /*0x494bab*/
    v16 = a4; /*0x494bb1*/
    do /*0x494c31*/
    {
      v15 = *a6++; /*0x494bbf*/
      if ( a5 < v15 && *a3 ) /*0x494bd1*/
      {
        *a2 = *(_WORD *)(this->BlitTransXlatAlphaZRead_ushort_field_0x04 + 2 * ((unsigned __int8)*a3 | *(unsigned __int16 *)(v17 + 2 * *a7))); /*0x494bf9*/
        v13 = MEMORY[0x887644]; /*0x494bfc*/
      }
      ++a2; /*0x494c06*/
      ++a3; /*0x494c0a*/
      if ( (unsigned int)a6 >= v13[7] ) /*0x494c13*/
        a6 = (unsigned __int16 *)((char *)a6 - v13[8]); /*0x494c15*/
      if ( (unsigned int)++a7 >= *((_DWORD *)MEMORY[0x87E8A4] + 7) ) /*0x494c23*/
        a7 = (unsigned __int16 *)((char *)a7 - *((_DWORD *)MEMORY[0x87E8A4] + 8)); /*0x494c25*/
      result = --v16; /*0x494c2c*/
    }
    while ( v16 ); /*0x494c31*/
  }
  return result; /*0x494c34*/
}


// ==== 0x00494C40  _BlitTransXlatAlphaZRead_G::BlitRect  this=BlitTransXlatAlphaZRead_ushort  sig=csp ====
int __thiscall BlitTransXlatAlphaZRead_ushort::BlitRect(
        _DWORD *this,
        _WORD *a2,
        _BYTE *a3,
        int a4,
        int a5,
        unsigned __int16 *a6,
        unsigned __int16 *a7,
        int a8,
        int a9,
        __int16 a10)
{
  int v12; // eax
  int result; // eax
  _DWORD *v14; // ebp
  unsigned __int16 v16; // ax
  int v17; // [esp+20h] [ebp+14h]
  int v18; // [esp+24h] [ebp+18h]

  v12 = (261 * (a8 <= 0 ? 0 : a8)) >> 11;
  if ( v12 > 254 ) /*0x494c6b*/
    v12 = 254; /*0x494c6d*/
  result = this->BlitTransXlatAlphaZRead_ushort_field_0x08 + (v12 << 9); /*0x494c78*/
  v18 = result; /*0x494c80*/
  if ( a4 > 0 ) /*0x494c84*/
  {
    v14 = MEMORY[0x887644]; /*0x494c8b*/
    v17 = a4; /*0x494c91*/
    do /*0x494d16*/
    {
      v16 = *a6++; /*0x494c9f*/
      if ( a5 < v16 && *a3 ) /*0x494cb1*/
      {
        *a2 = a10 | *(_WORD *)(this->BlitTransXlatAlphaZRead_ushort_field_0x04 + 2 * ((unsigned __int8)*a3 | *(unsigned __int16 *)(v18 + 2 * *a7))); /*0x494cde*/
        v14 = MEMORY[0x887644]; /*0x494ce1*/
      }
      ++a2; /*0x494ceb*/
      ++a3; /*0x494cef*/
      if ( (unsigned int)a6 >= v14[7] ) /*0x494cf8*/
        a6 = (unsigned __int16 *)((char *)a6 - v14[8]); /*0x494cfa*/
      if ( (unsigned int)++a7 >= *((_DWORD *)MEMORY[0x87E8A4] + 7) ) /*0x494d08*/
        a7 = (unsigned __int16 *)((char *)a7 - *((_DWORD *)MEMORY[0x87E8A4] + 8)); /*0x494d0a*/
      result = --v17; /*0x494d11*/
    }
    while ( v17 ); /*0x494d16*/
  }
  return result; /*0x494d19*/
}


// ==== 0x00494D20  _BlitTransXlatAlphaZRead_G::ddtor  this=BlitTransXlatAlphaZRead_ushort  sig=csp ====
int __thiscall BlitTransXlatAlphaZRead_ushort::_vt03(
        void *this,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8)
{
  return (*(int (__thiscall **)(void *, int, int, int, int, int, int, int, _DWORD))(this->BlitTransXlatAlphaZRead_ushort_field_0x04)( /*0x494d4a*/
           this,
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           0);
}


// ==== 0x00494D50  _BlitTransXlatAlphaZRead_G::GetSize  this=BlitTransXlatAlphaZRead_ushort  sig=csp ====
int __thiscall BlitTransXlatAlphaZRead_ushort::_vt04(
        void *this,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9)
{
  return (*(int (__thiscall **)(void *, int, int, int, int, int, int, int, _DWORD, int))(this->BlitTransXlatAlphaZRead_ushort_field_0x08)( /*0x494d7f*/
           this,
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           0,
           a9);
}


// ==== 0x00494D90  _BlitTransZRemapXlatAlphaZRead_G::AddRef  this=BlitTransZRemapXlatAlphaZRead_ushort  sig=csp ====
_DWORD *__thiscall BlitTransZRemapXlatAlphaZRead_ushort::AddRef(
        int this,
        _WORD *a1,
        _BYTE *a2,
        int a4,
        BlitTransZRemapXlatAlphaZRead_ushort *aP4,
        unsigned __int16 *a5,
        unsigned __int16 *a6,
        int a8,
        int a9)
{
  int v11; // ebp
  int v12; // eax
  _DWORD *result; // eax
  TacticalClass *v15; // ecx
  unsigned __int16 v16; // bx
  unsigned __int16 *a5a; // [esp+28h] [ebp+14h]
  unsigned __int16 *a6a; // [esp+2Ch] [ebp+18h]

  v11 = **(_DWORD **)(this + 4); /*0x494da8*/
  v12 = (261 * (a8 <= 0 ? 0 : a8)) >> 11;
  if ( v12 > 254 ) /*0x494dc8*/
    v12 = 254; /*0x494dca*/
  a6a = (unsigned __int16 *)(*(_DWORD *)(this + 12) + (v12 << 9)); /*0x494dd7*/
  result = (_DWORD *)a4; /*0x494ddb*/
  if ( a4 > 0 ) /*0x494de1*/
  {
    v15 = *(TacticalClass **)&stru_87C374.__pad_14B0[4224]; /*0x494deb*/
    a5a = (unsigned __int16 *)a4; /*0x494df1*/
    result = *(_DWORD **)&stru_87C374.__pad_579C[23348]; /*0x494df5*/
    do /*0x494e7a*/
    {
      v16 = *a5++; /*0x494dfc*/
      if ( (int)aP4 < v16 && *a2 ) /*0x494e10*/
      {
        *a1 = *(_WORD *)(*(_DWORD *)(this + 8) + 2 * (*(unsigned __int8 *)((unsigned __int8)*a2 + v11) | a6a[*a6])); /*0x494e40*/
        result = *(_DWORD **)&stru_87C374.__pad_579C[23348]; /*0x494e43*/
        v15 = *(TacticalClass **)&stru_87C374.__pad_14B0[4224]; /*0x494e48*/
      }
      ++a1; /*0x494e52*/
      ++a2; /*0x494e56*/
      if ( (unsigned int)a5 >= result[7] ) /*0x494e5f*/
        a5 = (unsigned __int16 *)((char *)a5 - result[8]); /*0x494e61*/
      if ( (unsigned int)++a6 >= v15->referenceCount ) /*0x494e6c*/
        a6 = (unsigned __int16 *)((char *)a6 - (unsigned int)v15->NeedsSaveOrLink); /*0x494e6e*/
      a5a = (unsigned __int16 *)((char *)a5a - 1); /*0x494e76*/
    }
    while ( a5a ); /*0x494e7a*/
  }
  return result; /*0x494e80*/
}


// ==== 0x00494E90  _BlitTransZRemapXlatAlphaZRead_G::ddtor  this=BlitTransZRemapXlatAlphaZRead_ushort  sig=csp ====
int __thiscall BlitTransZRemapXlatAlphaZRead_ushort::_vt03(
        void *this,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8)
{
  return (*(int (__thiscall **)(void *, int, int, int, int, int, int, int, _DWORD))(this->BlitTransZRemapXlatAlphaZRead_ushort_field_0x04)( /*0x494eba*/
           this,
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           0);
}


// ==== 0x00494EC0  _BlitTransZRemapXlatAlphaZRead_G::BlitRect  this=BlitTransZRemapXlatAlphaZRead_ushort  sig=csp ====
int __thiscall BlitTransZRemapXlatAlphaZRead_ushort::BlitRect(
        void *this,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10)
{
  return (*(int (__thiscall **)(void *, int, int, int, int, int, int, int, _DWORD))(this->BlitTransZRemapXlatAlphaZRead_ushort_field_0x04)( /*0x494eea*/
           this,
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           0);
}


// ==== 0x00494EF0  _BlitTransZRemapXlatAlphaZRead_G::GetSize  this=BlitTransZRemapXlatAlphaZRead_ushort  sig=csp ====
int __thiscall BlitTransZRemapXlatAlphaZRead_ushort::_vt04(
        void *this,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9)
{
  return (*(int (__thiscall **)(void *, int, int, int, int, int, int, int, _DWORD))(this->BlitTransZRemapXlatAlphaZRead_ushort_field_0x04)( /*0x494f1a*/
           this,
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           0);
}


// ==== 0x00494F20  _BlitTransLucent75AlphaZRead_G::AddRef  this=BlitTransLucent75AlphaZRead_ushort  sig=csp ====
int __thiscall BlitTransLucent75AlphaZRead_ushort::AddRef(
        int this,
        _WORD *a1,
        _BYTE *a2,
        BlitTransLucent75AlphaZRead_ushort *aP3,
        int argC,
        unsigned __int16 *a5,
        unsigned __int16 *a6,
        int a8,
        int a9)
{
  int v11; // eax
  int result; // eax
  TacticalMap *v14; // edx
  int v15; // ebp
  unsigned __int16 v16; // ax
  __int16 v17; // dx
  unsigned __int16 *v18; // eax
  int v19; // [esp+Ch] [ebp-4h]
  unsigned __int16 *a5a; // [esp+24h] [ebp+14h]
  unsigned __int16 *a6a; // [esp+28h] [ebp+18h]

  v19 = this; /*0x494f3a*/
  v11 = (261 * (a8 <= 0 ? 0 : a8)) >> 11;
  if ( v11 > 254 ) /*0x494f50*/
    v11 = 254; /*0x494f52*/
  a6a = (unsigned __int16 *)(*(_DWORD *)(this + 8) + (v11 << 9)); /*0x494f5f*/
  result = (int)aP3; /*0x494f63*/
  if ( (int)aP3 > 0 ) /*0x494f69*/
  {
    v14 = *(TacticalMap **)&stru_87C374.__pad_579C[23348]; /*0x494f73*/
    v15 = *(_DWORD *)&stru_87C374.__pad_14B0[4224]; /*0x494f7a*/
    a5a = (unsigned __int16 *)aP3; /*0x494f80*/
    do /*0x49501d*/
    {
      v16 = *a5++; /*0x494f86*/
      if ( argC < v16 && *a2 ) /*0x494f9a*/
      {
        v17 = *(_WORD *)(this + 12); /*0x494fa0*/
        this = v19; /*0x494fc0*/
        *a1 = 3 * (v17 & (*a1 >> 2)) /*0x494fe0*/
            + (v17 & (*(_WORD *)(*(_DWORD *)(v19 + 4) + 2 * ((unsigned __int8)*a2 | a6a[*a6])) >> 2));
        v14 = *(TacticalMap **)&stru_87C374.__pad_579C[23348]; /*0x494fe3*/
        v15 = *(_DWORD *)&stru_87C374.__pad_14B0[4224]; /*0x494fe9*/
      }
      ++a1; /*0x494ff3*/
      ++a2; /*0x494ff7*/
      if ( (unsigned int)a5 >= v14->TacticalMap_field_1C ) /*0x495000*/
        a5 = (unsigned __int16 *)((char *)a5 - v14->TacticalMap_field_20); /*0x495002*/
      v18 = a6 + 1; /*0x495005*/
      if ( (unsigned int)(a6 + 1) >= *(_DWORD *)(v15 + 28) ) /*0x49500d*/
        v18 = (unsigned __int16 *)((char *)v18 - *(_DWORD *)(v15 + 32)); /*0x49500f*/
      a6 = v18; /*0x495012*/
      result = (int)a5a - 1; /*0x495018*/
      a5a = (unsigned __int16 *)((char *)a5a - 1); /*0x495019*/
    }
    while ( a5a ); /*0x49501d*/
  }
  return result; /*0x495024*/
}


// ==== 0x00495030  _BlitTransLucent75AlphaZRead_G::ddtor  this=BlitTransLucent75AlphaZRead_ushort  sig=csp ====
int __thiscall BlitTransLucent75AlphaZRead_ushort::_vt03(
        void *this,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8)
{
  return (*(int (__thiscall **)(void *, int, int, int, int, int, int, int, _DWORD))(this->BlitTransLucent75AlphaZRead_ushort_field_0x04)( /*0x49505a*/
           this,
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           0);
}


// ==== 0x00495060  _BlitTransLucent75AlphaZRead_G::BlitRect  this=BlitTransLucent75AlphaZRead_ushort  sig=csp ====
int __thiscall BlitTransLucent75AlphaZRead_ushort::BlitRect(
        void *this,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10)
{
  return (*(int (__thiscall **)(void *, int, int, int, int, int, int, int, _DWORD))(this->BlitTransLucent75AlphaZRead_ushort_field_0x04)( /*0x49508a*/
           this,
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           0);
}


// ==== 0x00495090  _BlitTransLucent75AlphaZRead_G::GetSize  this=BlitTransLucent75AlphaZRead_ushort  sig=csp ====
int __thiscall BlitTransLucent75AlphaZRead_ushort::_vt04(
        void *this,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9)
{
  return (*(int (__thiscall **)(void *, int, int, int, int, int, int, int, _DWORD))(this->BlitTransLucent75AlphaZRead_ushort_field_0x04)( /*0x4950ba*/
           this,
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           0);
}


// ==== 0x004950C0  _BlitTransLucent50AlphaZRead_G::AddRef  this=BlitTransLucent50AlphaZRead_ushort  sig=csp ====
int __thiscall BlitTransLucent50AlphaZRead_ushort::AddRef(
        _DWORD *this,
        _WORD *a1,
        _BYTE *a2,
        BlitTransLucent50AlphaZRead_ushort *aP3,
        int argC,
        unsigned __int16 *a5,
        unsigned __int16 *a6,
        int a8,
        int a9)
{
  _DWORD *v9; // ebp
  int v12; // eax
  int result; // eax
  TacticalMap *v14; // ecx
  unsigned __int16 v16; // ax
  __int16 v17; // si
  unsigned __int16 *v18; // esi
  unsigned __int16 *a5a; // [esp+24h] [ebp+14h]
  unsigned __int16 *a6a; // [esp+28h] [ebp+18h]

  v9 = this; /*0x4950ca*/
  v12 = (261 * (a8 <= 0 ? 0 : a8)) >> 11;
  if ( v12 > 254 ) /*0x4950f2*/
    v12 = 254; /*0x4950f4*/
  a6a = (unsigned __int16 *)(this->BlitTransLucent50AlphaZRead_ushort_field_0x08 + (v12 << 9)); /*0x495101*/
  result = (int)aP3; /*0x495105*/
  if ( (int)aP3 > 0 ) /*0x49510b*/
  {
    v14 = *(TacticalMap **)&stru_87C374.__pad_579C[23348]; /*0x495111*/
    a5a = (unsigned __int16 *)aP3; /*0x49511c*/
    do /*0x4951b2*/
    {
      v16 = *a5++; /*0x495126*/
      if ( argC < v16 && *a2 ) /*0x495138*/
      {
        v17 = *((_WORD *)v9 + 6); /*0x49513e*/
        v9 = this; /*0x495156*/
        *a1 = (v17 & (*a1 >> 1)) + (v17 & (*(_WORD *)(this->BlitTransLucent50AlphaZRead_ushort_field_0x04 + 2 * ((unsigned __int8)*a2 | a6a[*a6])) >> 1)); /*0x495178*/
        v14 = *(TacticalMap **)&stru_87C374.__pad_579C[23348]; /*0x49517b*/
      }
      ++a1; /*0x495185*/
      ++a2; /*0x495189*/
      if ( (unsigned int)a5 >= v14->TacticalMap_field_1C ) /*0x495192*/
        a5 = (unsigned __int16 *)((char *)a5 - v14->TacticalMap_field_20); /*0x495194*/
      v18 = a6 + 1; /*0x49519c*/
      if ( (unsigned int)(a6 + 1) >= *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_14B0[4224] + 28) ) /*0x4951a2*/
        v18 = (unsigned __int16 *)((char *)v18 - *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_14B0[4224] + 32)); /*0x4951a4*/
      a6 = v18; /*0x4951ab*/
      result = (int)a5a - 1; /*0x4951ad*/
      a5a = (unsigned __int16 *)((char *)a5a - 1); /*0x4951ae*/
    }
    while ( a5a ); /*0x4951b2*/
  }
  return result; /*0x4951b9*/
}


// ==== 0x004951C0  _BlitTransLucent50AlphaZRead_G::ddtor  this=BlitTransLucent50AlphaZRead_ushort  sig=csp ====
int __thiscall BlitTransLucent50AlphaZRead_ushort::_vt03(
        void *this,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8)
{
  return (*(int (__thiscall **)(void *, int, int, int, int, int, int, int, _DWORD))(this->BlitTransLucent50AlphaZRead_ushort_field_0x04)( /*0x4951ea*/
           this,
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           0);
}


// ==== 0x004951F0  _BlitTransLucent50AlphaZRead_G::BlitRect  this=BlitTransLucent50AlphaZRead_ushort  sig=csp ====
int __thiscall BlitTransLucent50AlphaZRead_ushort::BlitRect(
        void *this,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10)
{
  return (*(int (__thiscall **)(void *, int, int, int, int, int, int, int, _DWORD))(this->BlitTransLucent50AlphaZRead_ushort_field_0x04)( /*0x49521a*/
           this,
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           0);
}


// ==== 0x00495220  _BlitTransLucent50AlphaZRead_G::GetSize  this=BlitTransLucent50AlphaZRead_ushort  sig=csp ====
int __thiscall BlitTransLucent50AlphaZRead_ushort::_vt04(
        void *this,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9)
{
  return (*(int (__thiscall **)(void *, int, int, int, int, int, int, int, _DWORD))(this->BlitTransLucent50AlphaZRead_ushort_field_0x04)( /*0x49524a*/
           this,
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           0);
}


// ==== 0x00495250  _BlitTransLucent25AlphaZRead_G::AddRef  this=BlitTransLucent25AlphaZRead_ushort  sig=csp ====
int __thiscall BlitTransLucent25AlphaZRead_ushort::AddRef(
        int this,
        _WORD *a1,
        _BYTE *a2,
        BlitTransLucent25AlphaZRead_ushort *aP3,
        int argC,
        unsigned __int16 *a5,
        unsigned __int16 *a6,
        int a8,
        int a9)
{
  int v11; // eax
  int result; // eax
  TacticalMap *v14; // edx
  int v15; // ebp
  unsigned __int16 v16; // ax
  __int16 v17; // dx
  unsigned __int16 *v18; // eax
  int v19; // [esp+Ch] [ebp-4h]
  unsigned __int16 *a5a; // [esp+24h] [ebp+14h]
  unsigned __int16 *a6a; // [esp+28h] [ebp+18h]

  v19 = this; /*0x49526a*/
  v11 = (261 * (a8 <= 0 ? 0 : a8)) >> 11;
  if ( v11 > 254 ) /*0x495280*/
    v11 = 254; /*0x495282*/
  a6a = (unsigned __int16 *)(*(_DWORD *)(this + 8) + (v11 << 9)); /*0x49528f*/
  result = (int)aP3; /*0x495293*/
  if ( (int)aP3 > 0 ) /*0x495299*/
  {
    v14 = *(TacticalMap **)&stru_87C374.__pad_579C[23348]; /*0x4952a3*/
    v15 = *(_DWORD *)&stru_87C374.__pad_14B0[4224]; /*0x4952aa*/
    a5a = (unsigned __int16 *)aP3; /*0x4952b0*/
    do /*0x49534d*/
    {
      v16 = *a5++; /*0x4952b6*/
      if ( argC < v16 && *a2 ) /*0x4952ca*/
      {
        v17 = *(_WORD *)(this + 12); /*0x4952d0*/
        this = v19; /*0x4952f0*/
        *a1 = (v17 & (*a1 >> 2)) /*0x495310*/
            + 3 * (v17 & (*(_WORD *)(*(_DWORD *)(v19 + 4) + 2 * ((unsigned __int8)*a2 | a6a[*a6])) >> 2));
        v14 = *(TacticalMap **)&stru_87C374.__pad_579C[23348]; /*0x495313*/
        v15 = *(_DWORD *)&stru_87C374.__pad_14B0[4224]; /*0x495319*/
      }
      ++a1; /*0x495323*/
      ++a2; /*0x495327*/
      if ( (unsigned int)a5 >= v14->TacticalMap_field_1C ) /*0x495330*/
        a5 = (unsigned __int16 *)((char *)a5 - v14->TacticalMap_field_20); /*0x495332*/
      v18 = a6 + 1; /*0x495335*/
      if ( (unsigned int)(a6 + 1) >= *(_DWORD *)(v15 + 28) ) /*0x49533d*/
        v18 = (unsigned __int16 *)((char *)v18 - *(_DWORD *)(v15 + 32)); /*0x49533f*/
      a6 = v18; /*0x495342*/
      result = (int)a5a - 1; /*0x495348*/
      a5a = (unsigned __int16 *)((char *)a5a - 1); /*0x495349*/
    }
    while ( a5a ); /*0x49534d*/
  }
  return result; /*0x495354*/
}


// ==== 0x00495360  _BlitTransLucent25AlphaZRead_G::ddtor  this=BlitTransLucent25AlphaZRead_ushort  sig=csp ====
int __thiscall BlitTransLucent25AlphaZRead_ushort::_vt03(
        void *this,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8)
{
  return (*(int (__thiscall **)(void *, int, int, int, int, int, int, int, _DWORD))(this->BlitTransLucent25AlphaZRead_ushort_field_0x04)( /*0x49538a*/
           this,
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           0);
}


// ==== 0x00495390  _BlitTransLucent25AlphaZRead_G::BlitRect  this=BlitTransLucent25AlphaZRead_ushort  sig=csp ====
int __thiscall BlitTransLucent25AlphaZRead_ushort::BlitRect(
        void *this,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10)
{
  return (*(int (__thiscall **)(void *, int, int, int, int, int, int, int, _DWORD))(this->BlitTransLucent25AlphaZRead_ushort_field_0x04)( /*0x4953ba*/
           this,
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           0);
}


// ==== 0x004953C0  _BlitTransLucent25AlphaZRead_G::GetSize  this=BlitTransLucent25AlphaZRead_ushort  sig=csp ====
int __thiscall BlitTransLucent25AlphaZRead_ushort::_vt04(
        void *this,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9)
{
  return (*(int (__thiscall **)(void *, int, int, int, int, int, int, int, _DWORD))(this->BlitTransLucent25AlphaZRead_ushort_field_0x04)( /*0x4953ea*/
           this,
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           0);
}


// ==== 0x004953F0  _BlitTransLucent75AlphaZReadWarp_G::AddRef  this=BlitTransLucent75AlphaZReadWarp_ushort  sig=csp ====
int __thiscall BlitTransLucent75AlphaZReadWarp_ushort::_vt01(
        int this,
        _WORD *a2,
        _BYTE *a3,
        int a4,
        int a5,
        unsigned __int16 *a6,
        unsigned __int16 *a7,
        int a8,
        int a9)
{
  unsigned __int16 *v9; // ebx
  int v11; // eax
  int result; // eax
  _DWORD *v14; // edx
  _DWORD *v15; // ebp
  unsigned __int16 v16; // ax
  unsigned __int16 *v17; // eax
  bool v18; // zf
  unsigned __int16 *v19; // [esp+20h] [ebp+14h]
  int v20; // [esp+24h] [ebp+18h]
  int v21; // [esp+28h] [ebp+1Ch]

  v9 = a7; /*0x4953f9*/
  v19 = a7; /*0x495409*/
  v11 = (261 * (a8 <= 0 ? 0 : a8)) >> 11;
  if ( v11 > 254 ) /*0x49541f*/
    v11 = 254; /*0x495421*/
  v21 = *(_DWORD *)(this + 8) + (v11 << 9); /*0x49542e*/
  result = a4; /*0x495432*/
  if ( a4 > 0 ) /*0x495438*/
  {
    v14 = MEMORY[0x887644]; /*0x495442*/
    v15 = MEMORY[0x87E8A4]; /*0x495449*/
    v20 = a4; /*0x49544f*/
    do /*0x4954f3*/
    {
      v16 = *a6++; /*0x495455*/
      if ( a5 < v16 && *a3 ) /*0x495469*/
      {
        *a2 = 3 * (*(_WORD *)(this + 12) & (a2[a9] >> 2)) /*0x4954ae*/
            + (*(_WORD *)(this + 12)
             & (*(_WORD *)(*(_DWORD *)(this + 4) + 2 * ((unsigned __int8)*a3 | *(unsigned __int16 *)(v21 + 2 * *v9))) >> 2));
        v14 = MEMORY[0x887644]; /*0x4954b1*/
        v15 = MEMORY[0x87E8A4]; /*0x4954b7*/
        v9 = v19; /*0x4954bd*/
      }
      ++a2; /*0x4954c5*/
      ++a3; /*0x4954c9*/
      if ( (unsigned int)a6 >= v14[7] ) /*0x4954d2*/
        a6 = (unsigned __int16 *)((char *)a6 - v14[8]); /*0x4954d4*/
      v17 = v9 + 1; /*0x4954d7*/
      if ( (unsigned int)(v9 + 1) >= v15[7] ) /*0x4954df*/
        v17 = (unsigned __int16 *)((char *)v17 - v15[8]); /*0x4954e1*/
      v9 = v17; /*0x4954e4*/
      result = v20 - 1; /*0x4954ea*/
      v18 = v20 == 1; /*0x4954ea*/
      v19 = v9; /*0x4954eb*/
      --v20; /*0x4954ef*/
    }
    while ( !v18 ); /*0x4954f3*/
  }
  return result; /*0x4954fa*/
}


// ==== 0x00495500  _BlitTransLucent75AlphaZReadWarp_G::ddtor  this=BlitTransLucent75AlphaZReadWarp_ushort  sig=csp ====
int __thiscall BlitTransLucent75AlphaZReadWarp_ushort::_vt03(
        void *this,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8)
{
  return (*(int (__thiscall **)(void *, int, int, int, int, int, int, int, _DWORD))(this->BlitTransLucent75AlphaZReadWarp_ushort_field_0x04)( /*0x49552a*/
           this,
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           0);
}


// ==== 0x00495530  _BlitTransLucent75AlphaZReadWarp_G::BlitRect  this=BlitTransLucent75AlphaZReadWarp_ushort  sig=csp ====
int __thiscall BlitTransLucent75AlphaZReadWarp_ushort::BlitRect(
        void *this,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10)
{
  return (*(int (__thiscall **)(void *, int, int, int, int, int, int, int, _DWORD))(this->BlitTransLucent75AlphaZReadWarp_ushort_field_0x04)( /*0x49555a*/
           this,
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           0);
}


// ==== 0x00495560  _BlitTransLucent75AlphaZReadWarp_G::GetSize  this=BlitTransLucent75AlphaZReadWarp_ushort  sig=csp ====
int __thiscall BlitTransLucent75AlphaZReadWarp_ushort::_vt04(
        void *this,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9)
{
  return (*(int (__thiscall **)(void *, int, int, int, int, int, int, int, _DWORD))(this->BlitTransLucent75AlphaZReadWarp_ushort_field_0x04)( /*0x49558a*/
           this,
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           0);
}


// ==== 0x00495590  _BlitTransLucent50AlphaZReadWarp_G::AddRef  this=BlitTransLucent50AlphaZReadWarp_ushort  sig=csp ====
int __thiscall BlitTransLucent50AlphaZReadWarp_ushort::AddRef(
        int this,
        _WORD *a1,
        _BYTE *a2,
        BlitTransLucent50AlphaZReadWarp_ushort *aP3,
        int argC,
        unsigned __int16 *a5,
        unsigned __int16 *a6,
        int a8,
        int a9)
{
  int v11; // eax
  int result; // eax
  int v14; // ebp
  unsigned __int16 v15; // ax
  __int16 v16; // dx
  unsigned __int16 *v17; // edx
  int v18; // [esp+Ch] [ebp-4h]
  unsigned __int16 *a5a; // [esp+24h] [ebp+14h]
  unsigned __int16 *a6a; // [esp+28h] [ebp+18h]

  v18 = this; /*0x4955aa*/
  v11 = (261 * (a8 <= 0 ? 0 : a8)) >> 11;
  if ( v11 > 254 ) /*0x4955c0*/
    v11 = 254; /*0x4955c2*/
  a6a = (unsigned __int16 *)(*(_DWORD *)(this + 8) + (v11 << 9)); /*0x4955cf*/
  result = (int)aP3; /*0x4955d3*/
  if ( (int)aP3 > 0 ) /*0x4955d9*/
  {
    v14 = *(_DWORD *)&stru_87C374.__pad_579C[23348]; /*0x4955e4*/
    a5a = (unsigned __int16 *)aP3; /*0x4955ea*/
    do /*0x495688*/
    {
      v15 = *a5++; /*0x4955f4*/
      if ( argC < v15 && *a2 ) /*0x495606*/
      {
        v16 = *(_WORD *)(this + 12); /*0x49560c*/
        this = v18; /*0x49562e*/
        *a1 = (v16 & (a1[a9] >> 1)) /*0x49564e*/
            + (v16 & (*(_WORD *)(*(_DWORD *)(v18 + 4) + 2 * ((unsigned __int8)*a2 | a6a[*a6])) >> 1));
        v14 = *(_DWORD *)&stru_87C374.__pad_579C[23348]; /*0x495651*/
      }
      ++a1; /*0x49565b*/
      ++a2; /*0x49565f*/
      if ( (unsigned int)a5 >= *(_DWORD *)(v14 + 28) ) /*0x495668*/
        a5 = (unsigned __int16 *)((char *)a5 - *(_DWORD *)(v14 + 32)); /*0x49566a*/
      v17 = a6 + 1; /*0x495672*/
      if ( (unsigned int)(a6 + 1) >= *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_14B0[4224] + 28) ) /*0x495678*/
        v17 = (unsigned __int16 *)((char *)v17 - *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_14B0[4224] + 32)); /*0x49567a*/
      a6 = v17; /*0x495681*/
      result = (int)a5a - 1; /*0x495683*/
      a5a = (unsigned __int16 *)((char *)a5a - 1); /*0x495684*/
    }
    while ( a5a ); /*0x495688*/
  }
  return result; /*0x49568f*/
}


// ==== 0x004956A0  _BlitTransLucent50AlphaZReadWarp_G::ddtor  this=BlitTransLucent50AlphaZReadWarp_ushort  sig=csp ====
int __thiscall BlitTransLucent50AlphaZReadWarp_ushort::_vt03(
        void *this,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8)
{
  return (*(int (__thiscall **)(void *, int, int, int, int, int, int, int, _DWORD))(this->BlitTransLucent50AlphaZReadWarp_ushort_field_0x04)( /*0x4956ca*/
           this,
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           0);
}


// ==== 0x004956D0  _BlitTransLucent50AlphaZReadWarp_G::BlitRect  this=BlitTransLucent50AlphaZReadWarp_ushort  sig=csp ====
int __thiscall BlitTransLucent50AlphaZReadWarp_ushort::BlitRect(
        void *this,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10)
{
  return (*(int (__thiscall **)(void *, int, int, int, int, int, int, int, _DWORD))(this->BlitTransLucent50AlphaZReadWarp_ushort_field_0x04)( /*0x4956fa*/
           this,
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           0);
}


// ==== 0x00495700  _BlitTransLucent50AlphaZReadWarp_G::GetSize  this=BlitTransLucent50AlphaZReadWarp_ushort  sig=csp ====
int __thiscall BlitTransLucent50AlphaZReadWarp_ushort::_vt04(
        void *this,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9)
{
  return (*(int (__thiscall **)(void *, int, int, int, int, int, int, int, _DWORD))(this->BlitTransLucent50AlphaZReadWarp_ushort_field_0x04)( /*0x49572a*/
           this,
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           0);
}


// ==== 0x00495730  _BlitTransLucent25AlphaZReadWarp_G::AddRef  this=BlitTransLucent25AlphaZReadWarp_ushort  sig=csp ====
int __thiscall BlitTransLucent25AlphaZReadWarp_ushort::_vt01(
        int this,
        _WORD *a2,
        _BYTE *a3,
        int a4,
        int a5,
        unsigned __int16 *a6,
        unsigned __int16 *a7,
        int a8,
        int a9)
{
  unsigned __int16 *v9; // ebx
  int v11; // eax
  int result; // eax
  _DWORD *v14; // edx
  _DWORD *v15; // ebp
  unsigned __int16 v16; // ax
  __int16 v17; // ax
  unsigned __int16 *v18; // eax
  bool v19; // zf
  unsigned __int16 *v20; // [esp+20h] [ebp+14h]
  int v21; // [esp+24h] [ebp+18h]
  int v22; // [esp+28h] [ebp+1Ch]

  v9 = a7; /*0x495739*/
  v20 = a7; /*0x495749*/
  v11 = (261 * (a8 <= 0 ? 0 : a8)) >> 11;
  if ( v11 > 254 ) /*0x49575f*/
    v11 = 254; /*0x495761*/
  v22 = *(_DWORD *)(this + 8) + (v11 << 9); /*0x49576e*/
  result = a4; /*0x495772*/
  if ( a4 > 0 ) /*0x495778*/
  {
    v14 = MEMORY[0x887644]; /*0x495782*/
    v15 = MEMORY[0x87E8A4]; /*0x495789*/
    v21 = a4; /*0x49578f*/
    do /*0x495833*/
    {
      v16 = *a6++; /*0x495795*/
      if ( a5 < v16 && *a3 ) /*0x4957a9*/
      {
        v17 = (*(_WORD *)(this + 12) & (a2[a9] >> 2)) /*0x4957ec*/
            + 3
            * (*(_WORD *)(this + 12)
             & (*(_WORD *)(*(_DWORD *)(this + 4) + 2 * ((unsigned __int8)*a3 | *(unsigned __int16 *)(v22 + 2 * *v9))) >> 2));
        v9 = v20; /*0x4957ee*/
        *a2 = v17; /*0x4957f2*/
        v14 = MEMORY[0x887644]; /*0x4957f5*/
        v15 = MEMORY[0x87E8A4]; /*0x4957fb*/
      }
      ++a2; /*0x495805*/
      ++a3; /*0x495809*/
      if ( (unsigned int)a6 >= v14[7] ) /*0x495812*/
        a6 = (unsigned __int16 *)((char *)a6 - v14[8]); /*0x495814*/
      v18 = v9 + 1; /*0x495817*/
      if ( (unsigned int)(v9 + 1) >= v15[7] ) /*0x49581f*/
        v18 = (unsigned __int16 *)((char *)v18 - v15[8]); /*0x495821*/
      v9 = v18; /*0x495824*/
      result = v21 - 1; /*0x49582a*/
      v19 = v21 == 1; /*0x49582a*/
      v20 = v9; /*0x49582b*/
      --v21; /*0x49582f*/
    }
    while ( !v19 ); /*0x495833*/
  }
  return result; /*0x49583a*/
}


// ==== 0x00495840  _BlitTransLucent25AlphaZReadWarp_G::ddtor  this=BlitTransLucent25AlphaZReadWarp_ushort  sig=csp ====
int __thiscall BlitTransLucent25AlphaZReadWarp_ushort::_vt03(
        void *this,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8)
{
  return (*(int (__thiscall **)(void *, int, int, int, int, int, int, int, _DWORD))(this->BlitTransLucent25AlphaZReadWarp_ushort_field_0x04)( /*0x49586a*/
           this,
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           0);
}


// ==== 0x00495870  _BlitTransLucent25AlphaZReadWarp_G::BlitRect  this=BlitTransLucent25AlphaZReadWarp_ushort  sig=csp ====
int __thiscall BlitTransLucent25AlphaZReadWarp_ushort::BlitRect(
        void *this,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10)
{
  return (*(int (__thiscall **)(void *, int, int, int, int, int, int, int, _DWORD))(this->BlitTransLucent25AlphaZReadWarp_ushort_field_0x04)( /*0x49589a*/
           this,
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           0);
}


// ==== 0x004958A0  _BlitTransLucent25AlphaZReadWarp_G::GetSize  this=BlitTransLucent25AlphaZReadWarp_ushort  sig=csp ====
int __thiscall BlitTransLucent25AlphaZReadWarp_ushort::_vt04(
        void *this,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9)
{
  return (*(int (__thiscall **)(void *, int, int, int, int, int, int, int, _DWORD))(this->BlitTransLucent25AlphaZReadWarp_ushort_field_0x04)( /*0x4958ca*/
           this,
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           0);
}


// ==== 0x004958D0  _BlitTransXlatAlphaZReadWrite_G::AddRef  this=BlitTransXlatAlphaZReadWrite_ushort  sig=csp ====
_DWORD *__thiscall BlitTransXlatAlphaZReadWrite_ushort::_vt01(
        _DWORD *this,
        _WORD *a2,
        _BYTE *a3,
        int a4,
        int a5,
        _WORD *a6,
        unsigned __int16 *a7,
        int a8,
        int a9)
{
  int v12; // eax
  _DWORD *result; // eax
  int v14; // ecx
  int v16; // [esp+20h] [ebp+14h]
  _DWORD *v17; // [esp+24h] [ebp+18h]

  v12 = (261 * (a8 <= 0 ? 0 : a8)) >> 11;
  if ( v12 > 254 ) /*0x4958fd*/
    v12 = 254; /*0x4958ff*/
  result = (_DWORD *)(this->BlitTransXlatAlphaZReadWrite_ushort_field_0x08 + (v12 << 9)); /*0x49590e*/
  v17 = result; /*0x495912*/
  if ( a4 > 0 ) /*0x495916*/
  {
    v14 = a5; /*0x49591c*/
    result = MEMORY[0x887644]; /*0x495920*/
    v16 = a4; /*0x495925*/
    do /*0x4959a8*/
    {
      if ( v14 < (unsigned __int16)*a6 && *a3 ) /*0x49593f*/
      {
        *a2 = *(_WORD *)(this->BlitTransXlatAlphaZReadWrite_ushort_field_0x04 + 2 * ((unsigned __int8)*a3 | *((unsigned __int16 *)v17 + *a7))); /*0x495966*/
        v14 = a5; /*0x495969*/
        *a6 = a5; /*0x49596d*/
        result = MEMORY[0x887644]; /*0x495970*/
      }
      ++a6; /*0x495979*/
      ++a2; /*0x49597d*/
      ++a3; /*0x495980*/
      if ( (unsigned int)a6 >= result[7] ) /*0x495989*/
        a6 = (_WORD *)((char *)a6 - result[8]); /*0x49598b*/
      if ( (unsigned int)++a7 >= *((_DWORD *)MEMORY[0x87E8A4] + 7) ) /*0x49599a*/
        a7 = (unsigned __int16 *)((char *)a7 - *((_DWORD *)MEMORY[0x87E8A4] + 8)); /*0x49599c*/
      --v16; /*0x4959a4*/
    }
    while ( v16 ); /*0x4959a8*/
  }
  return result; /*0x4959ab*/
}


// ==== 0x004959C0  _BlitTransXlatAlphaZReadWrite_G::ddtor  this=BlitTransXlatAlphaZReadWrite_ushort  sig=csp ====
int __thiscall BlitTransXlatAlphaZReadWrite_ushort::_vt03(
        void *this,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8)
{
  return (*(int (__thiscall **)(void *, int, int, int, int, int, int, int, _DWORD))(this->BlitTransXlatAlphaZReadWrite_ushort_field_0x04)( /*0x4959ea*/
           this,
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           0);
}


// ==== 0x004959F0  _BlitTransXlatAlphaZReadWrite_G::BlitRect  this=BlitTransXlatAlphaZReadWrite_ushort  sig=csp ====
int __thiscall BlitTransXlatAlphaZReadWrite_ushort::BlitRect(
        void *this,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10)
{
  return (*(int (__thiscall **)(void *, int, int, int, int, int, int, int, _DWORD))(this->BlitTransXlatAlphaZReadWrite_ushort_field_0x04)( /*0x495a1a*/
           this,
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           0);
}


// ==== 0x00495A20  _BlitTransXlatAlphaZReadWrite_G::GetSize  this=BlitTransXlatAlphaZReadWrite_ushort  sig=csp ====
int __thiscall BlitTransXlatAlphaZReadWrite_ushort::_vt04(
        void *this,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9)
{
  return (*(int (__thiscall **)(void *, int, int, int, int, int, int, int, _DWORD))(this->BlitTransXlatAlphaZReadWrite_ushort_field_0x04)( /*0x495a4a*/
           this,
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           0);
}


// ==== 0x00495A50  _BlitTransZRemapXlatAlphaZReadWrite_G::AddRef  this=BlitTransZRemapXlatAlphaZReadWrite_ushort  sig=csp ====
int __thiscall BlitTransZRemapXlatAlphaZReadWrite_ushort::_vt01(
        int this,
        _WORD *a2,
        _BYTE *a3,
        int a4,
        int a5,
        _WORD *a6,
        unsigned __int16 *a7,
        int a8,
        int a9)
{
  int v10; // eax
  int v11; // ebp
  int result; // eax
  int v13; // edi
  _DWORD *v15; // ebx
  int v16; // [esp+20h] [ebp+14h]
  int v17; // [esp+28h] [ebp+1Ch]

  v10 = (261 * (a8 <= 0 ? 0 : a8)) >> 11;
  if ( v10 > 254 ) /*0x495a77*/
    v10 = 254; /*0x495a79*/
  v17 = *(_DWORD *)(this + 12) + (v10 << 9); /*0x495a86*/
  v11 = **(_DWORD **)(this + 4); /*0x495a8d*/
  result = a4; /*0x495a8f*/
  if ( a4 > 0 ) /*0x495a95*/
  {
    v13 = a5; /*0x495a9b*/
    v15 = MEMORY[0x887644]; /*0x495aa4*/
    v16 = a4; /*0x495aaa*/
    do /*0x495b21*/
    {
      if ( v13 < (unsigned __int16)*a6 && *a3 ) /*0x495abf*/
      {
        v13 = a5; /*0x495aef*/
        *a2 = *(_WORD *)(*(_DWORD *)(this + 8) /*0x495af3*/
                       + 2 * (*(unsigned __int8 *)((unsigned __int8)*a3 + v11) | *(unsigned __int16 *)(v17 + 2 * *a7)));
        *a6 = a5; /*0x495af6*/
        v15 = MEMORY[0x887644]; /*0x495af9*/
      }
      ++a6; /*0x495b03*/
      ++a2; /*0x495b07*/
      ++a3; /*0x495b0a*/
      if ( (unsigned int)a6 >= v15[7] ) /*0x495b13*/
        a6 = (_WORD *)((char *)a6 - v15[8]); /*0x495b15*/
      result = --v16; /*0x495b1c*/
    }
    while ( v16 ); /*0x495b21*/
  }
  return result; /*0x495b24*/
}


// ==== 0x00495B30  _BlitTransZRemapXlatAlphaZReadWrite_G::ddtor  this=BlitTransZRemapXlatAlphaZReadWrite_ushort  sig=csp ====
int __thiscall BlitTransZRemapXlatAlphaZReadWrite_ushort::_vt03(
        void *this,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8)
{
  return (*(int (__thiscall **)(void *, int, int, int, int, int, int, int, _DWORD))(this->BlitTransZRemapXlatAlphaZReadWrite_ushort_field_0x04)( /*0x495b5a*/
           this,
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           0);
}


// ==== 0x00495B60  _BlitTransZRemapXlatAlphaZReadWrite_G::BlitRect  this=BlitTransZRemapXlatAlphaZReadWrite_ushort  sig=csp ====
int __thiscall BlitTransZRemapXlatAlphaZReadWrite_ushort::BlitRect(
        void *this,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10)
{
  return (*(int (__thiscall **)(void *, int, int, int, int, int, int, int, _DWORD))(this->BlitTransZRemapXlatAlphaZReadWrite_ushort_field_0x04)( /*0x495b8a*/
           this,
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           0);
}


// ==== 0x00495B90  _BlitTransZRemapXlatAlphaZReadWrite_G::GetSize  this=BlitTransZRemapXlatAlphaZReadWrite_ushort  sig=csp ====
int __thiscall BlitTransZRemapXlatAlphaZReadWrite_ushort::_vt04(
        void *this,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9)
{
  return (*(int (__thiscall **)(void *, int, int, int, int, int, int, int, _DWORD))(this->BlitTransZRemapXlatAlphaZReadWrite_ushort_field_0x04)( /*0x495bba*/
           this,
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           0);
}


// ==== 0x00495BC0  _BlitTransLucent75AlphaZReadWrite_G::AddRef  this=BlitTransLucent75AlphaZReadWrite_ushort  sig=csp ====
int __thiscall BlitTransLucent75AlphaZReadWrite_ushort::_vt01(
        int this,
        _WORD *a2,
        _BYTE *a3,
        int a4,
        int a5,
        _WORD *a6,
        unsigned __int16 *a7,
        int a8,
        int a9)
{
  unsigned __int16 *v9; // ebx
  int v11; // eax
  int result; // eax
  int v13; // edx
  _DWORD *v15; // ebp
  __int16 v16; // dx
  __int16 v17; // ax
  __int16 v18; // bx
  _WORD *v19; // eax
  unsigned __int16 *v20; // eax
  bool v21; // zf
  unsigned __int16 *v22; // [esp+20h] [ebp+14h]
  int v23; // [esp+24h] [ebp+18h]
  int v24; // [esp+28h] [ebp+1Ch]

  v9 = a7; /*0x495bc9*/
  v22 = a7; /*0x495bd9*/
  v11 = (261 * (a8 <= 0 ? 0 : a8)) >> 11;
  if ( v11 > 254 ) /*0x495bef*/
    v11 = 254; /*0x495bf1*/
  v24 = *(_DWORD *)(this + 8) + (v11 << 9); /*0x495bfe*/
  result = a4; /*0x495c02*/
  if ( a4 > 0 ) /*0x495c08*/
  {
    v13 = a5; /*0x495c0e*/
    v15 = MEMORY[0x887644]; /*0x495c17*/
    v23 = a4; /*0x495c1d*/
    do /*0x495cbf*/
    {
      if ( v13 < (unsigned __int16)*a6 && *a3 ) /*0x495c32*/
      {
        v16 = *(_WORD *)(this + 12); /*0x495c43*/
        v17 = v16 & (*a2 >> 2); /*0x495c69*/
        v18 = v16 /*0x495c6b*/
            & (*(_WORD *)(*(_DWORD *)(this + 4) + 2 * ((unsigned __int8)*a3 | *(unsigned __int16 *)(v24 + 2 * *v9))) >> 2);
        v13 = a5; /*0x495c72*/
        *a2 = 3 * v17 + v18; /*0x495c76*/
        v9 = v22; /*0x495c79*/
        *a6 = a5; /*0x495c7d*/
        v15 = MEMORY[0x887644]; /*0x495c80*/
      }
      ++a2; /*0x495c8a*/
      ++a3; /*0x495c8e*/
      v19 = a6 + 1; /*0x495c92*/
      if ( (unsigned int)(a6 + 1) >= v15[7] ) /*0x495c98*/
        v19 = (_WORD *)((char *)v19 - v15[8]); /*0x495c9a*/
      a6 = v19; /*0x495c9d*/
      v20 = v9 + 1; /*0x495c9f*/
      if ( (unsigned int)(v9 + 1) >= *((_DWORD *)MEMORY[0x87E8A4] + 7) ) /*0x495cab*/
        v20 = (unsigned __int16 *)((char *)v20 - *((_DWORD *)MEMORY[0x87E8A4] + 8)); /*0x495cad*/
      v9 = v20; /*0x495cb0*/
      result = v23 - 1; /*0x495cb6*/
      v21 = v23 == 1; /*0x495cb6*/
      v22 = v9; /*0x495cb7*/
      --v23; /*0x495cbb*/
    }
    while ( !v21 ); /*0x495cbf*/
  }
  return result; /*0x495cc6*/
}


// ==== 0x00495CD0  _BlitTransLucent75AlphaZReadWrite_G::ddtor  this=BlitTransLucent75AlphaZReadWrite_ushort  sig=csp ====
int __thiscall BlitTransLucent75AlphaZReadWrite_ushort::_vt03(
        void *this,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8)
{
  return (*(int (__thiscall **)(void *, int, int, int, int, int, int, int, _DWORD))(this->BlitTransLucent75AlphaZReadWrite_ushort_field_0x04)( /*0x495cfa*/
           this,
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           0);
}


// ==== 0x00495D00  _BlitTransLucent75AlphaZReadWrite_G::BlitRect  this=BlitTransLucent75AlphaZReadWrite_ushort  sig=csp ====
int __thiscall BlitTransLucent75AlphaZReadWrite_ushort::BlitRect(
        void *this,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10)
{
  return (*(int (__thiscall **)(void *, int, int, int, int, int, int, int, _DWORD))(this->BlitTransLucent75AlphaZReadWrite_ushort_field_0x04)( /*0x495d2a*/
           this,
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           0);
}


// ==== 0x00495D30  _BlitTransLucent75AlphaZReadWrite_G::GetSize  this=BlitTransLucent75AlphaZReadWrite_ushort  sig=csp ====
int __thiscall BlitTransLucent75AlphaZReadWrite_ushort::_vt04(
        void *this,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9)
{
  return (*(int (__thiscall **)(void *, int, int, int, int, int, int, int, _DWORD))(this->BlitTransLucent75AlphaZReadWrite_ushort_field_0x04)( /*0x495d5a*/
           this,
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           0);
}


// ==== 0x00495D60  _BlitTransLucent50AlphaZReadWrite_G::AddRef  this=BlitTransLucent50AlphaZReadWrite_ushort  sig=csp ====
int __thiscall BlitTransLucent50AlphaZReadWrite_ushort::_vt01(
        int this,
        _WORD *a2,
        _BYTE *a3,
        int a4,
        int a5,
        _WORD *a6,
        unsigned __int16 *a7,
        int a8,
        int a9)
{
  unsigned __int16 *v10; // edi
  int v11; // eax
  int result; // eax
  int v13; // ebx
  _DWORD *v15; // ebp
  _WORD *v16; // eax
  unsigned __int16 *v17; // eax
  bool v18; // zf
  unsigned __int16 *v19; // [esp+20h] [ebp+14h]
  int v20; // [esp+24h] [ebp+18h]
  int v21; // [esp+28h] [ebp+1Ch]

  v10 = a7; /*0x495d77*/
  v19 = a7; /*0x495d80*/
  v11 = (261 * (a8 <= 0 ? 0 : a8)) >> 11;
  if ( v11 > 254 ) /*0x495d8f*/
    v11 = 254; /*0x495d91*/
  v21 = *(_DWORD *)(this + 8) + (v11 << 9); /*0x495d9e*/
  result = a4; /*0x495da2*/
  if ( a4 > 0 ) /*0x495da8*/
  {
    v13 = a5; /*0x495dae*/
    v15 = MEMORY[0x887644]; /*0x495db7*/
    v20 = a4; /*0x495dbd*/
    do /*0x495e5b*/
    {
      if ( v13 < (unsigned __int16)*a6 && *a3 ) /*0x495dd2*/
      {
        v13 = a5; /*0x495e0e*/
        *a2 = (*(_WORD *)(this + 12) & (*a2 >> 1)) /*0x495e12*/
            + (*(_WORD *)(this + 12)
             & (*(_WORD *)(*(_DWORD *)(this + 4) + 2 * ((unsigned __int8)*a3 | *(unsigned __int16 *)(v21 + 2 * *v10))) >> 1));
        v10 = v19; /*0x495e15*/
        *a6 = a5; /*0x495e19*/
        v15 = MEMORY[0x887644]; /*0x495e1c*/
      }
      ++a2; /*0x495e26*/
      ++a3; /*0x495e2a*/
      v16 = a6 + 1; /*0x495e2e*/
      if ( (unsigned int)(a6 + 1) >= v15[7] ) /*0x495e34*/
        v16 = (_WORD *)((char *)v16 - v15[8]); /*0x495e36*/
      a6 = v16; /*0x495e39*/
      v17 = v10 + 1; /*0x495e3b*/
      if ( (unsigned int)(v10 + 1) >= *((_DWORD *)MEMORY[0x87E8A4] + 7) ) /*0x495e47*/
        v17 = (unsigned __int16 *)((char *)v17 - *((_DWORD *)MEMORY[0x87E8A4] + 8)); /*0x495e49*/
      v10 = v17; /*0x495e4c*/
      result = v20 - 1; /*0x495e52*/
      v18 = v20 == 1; /*0x495e52*/
      v19 = v10; /*0x495e53*/
      --v20; /*0x495e57*/
    }
    while ( !v18 ); /*0x495e5b*/
  }
  return result; /*0x495e62*/
}


// ==== 0x00495E70  _BlitTransLucent50AlphaZReadWrite_G::ddtor  this=BlitTransLucent50AlphaZReadWrite_ushort  sig=csp ====
int __thiscall BlitTransLucent50AlphaZReadWrite_ushort::_vt03(
        void *this,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8)
{
  return (*(int (__thiscall **)(void *, int, int, int, int, int, int, int, _DWORD))(this->BlitTransLucent50AlphaZReadWrite_ushort_field_0x04)( /*0x495e9a*/
           this,
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           0);
}


// ==== 0x00495EA0  _BlitTransLucent50AlphaZReadWrite_G::BlitRect  this=BlitTransLucent50AlphaZReadWrite_ushort  sig=csp ====
int __thiscall BlitTransLucent50AlphaZReadWrite_ushort::BlitRect(
        void *this,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10)
{
  return (*(int (__thiscall **)(void *, int, int, int, int, int, int, int, _DWORD))(this->BlitTransLucent50AlphaZReadWrite_ushort_field_0x04)( /*0x495eca*/
           this,
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           0);
}


// ==== 0x00495ED0  _BlitTransLucent50AlphaZReadWrite_G::GetSize  this=BlitTransLucent50AlphaZReadWrite_ushort  sig=csp ====
int __thiscall BlitTransLucent50AlphaZReadWrite_ushort::_vt04(
        void *this,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9)
{
  return (*(int (__thiscall **)(void *, int, int, int, int, int, int, int, _DWORD))(this->BlitTransLucent50AlphaZReadWrite_ushort_field_0x04)( /*0x495efa*/
           this,
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           0);
}


// ==== 0x00495F00  _BlitTransLucent25AlphaZReadWrite_G::AddRef  this=BlitTransLucent25AlphaZReadWrite_ushort  sig=csp ====
int __thiscall BlitTransLucent25AlphaZReadWrite_ushort::_vt01(
        int this,
        _WORD *a2,
        _BYTE *a3,
        int a4,
        int a5,
        _WORD *a6,
        unsigned __int16 *a7,
        int a8,
        int a9)
{
  unsigned __int16 *v9; // ebx
  int v11; // eax
  int result; // eax
  int v13; // edx
  _DWORD *v15; // ebp
  __int16 v16; // dx
  __int16 v17; // ax
  __int16 v18; // bx
  __int16 v19; // ax
  _WORD *v20; // eax
  unsigned __int16 *v21; // eax
  bool v22; // zf
  unsigned __int16 *v23; // [esp+20h] [ebp+14h]
  int v24; // [esp+24h] [ebp+18h]
  int v25; // [esp+28h] [ebp+1Ch]

  v9 = a7; /*0x495f09*/
  v23 = a7; /*0x495f19*/
  v11 = (261 * (a8 <= 0 ? 0 : a8)) >> 11;
  if ( v11 > 254 ) /*0x495f2f*/
    v11 = 254; /*0x495f31*/
  v25 = *(_DWORD *)(this + 8) + (v11 << 9); /*0x495f3e*/
  result = a4; /*0x495f42*/
  if ( a4 > 0 ) /*0x495f48*/
  {
    v13 = a5; /*0x495f4e*/
    v15 = MEMORY[0x887644]; /*0x495f57*/
    v24 = a4; /*0x495f5d*/
    do /*0x495fff*/
    {
      if ( v13 < (unsigned __int16)*a6 && *a3 ) /*0x495f72*/
      {
        v16 = *(_WORD *)(this + 12); /*0x495f83*/
        v17 = 3 /*0x495fab*/
            * (v16
             & (*(_WORD *)(*(_DWORD *)(this + 4) + 2 * ((unsigned __int8)*a3 | *(unsigned __int16 *)(v25 + 2 * *v9))) >> 2));
        v18 = v16 & (*a2 >> 2); /*0x495fae*/
        v13 = a5; /*0x495fb0*/
        v19 = v18 + v17; /*0x495fb4*/
        v9 = v23; /*0x495fb6*/
        *a2 = v19; /*0x495fba*/
        *a6 = a5; /*0x495fbd*/
        v15 = MEMORY[0x887644]; /*0x495fc0*/
      }
      ++a2; /*0x495fca*/
      ++a3; /*0x495fce*/
      v20 = a6 + 1; /*0x495fd2*/
      if ( (unsigned int)(a6 + 1) >= v15[7] ) /*0x495fd8*/
        v20 = (_WORD *)((char *)v20 - v15[8]); /*0x495fda*/
      a6 = v20; /*0x495fdd*/
      v21 = v9 + 1; /*0x495fdf*/
      if ( (unsigned int)(v9 + 1) >= *((_DWORD *)MEMORY[0x87E8A4] + 7) ) /*0x495feb*/
        v21 = (unsigned __int16 *)((char *)v21 - *((_DWORD *)MEMORY[0x87E8A4] + 8)); /*0x495fed*/
      v9 = v21; /*0x495ff0*/
      result = v24 - 1; /*0x495ff6*/
      v22 = v24 == 1; /*0x495ff6*/
      v23 = v9; /*0x495ff7*/
      --v24; /*0x495ffb*/
    }
    while ( !v22 ); /*0x495fff*/
  }
  return result; /*0x496006*/
}


// ==== 0x00496010  _BlitTransLucent25AlphaZReadWrite_G::ddtor  this=BlitTransLucent25AlphaZReadWrite_ushort  sig=csp ====
int __thiscall BlitTransLucent25AlphaZReadWrite_ushort::_vt03(
        void *this,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8)
{
  return (*(int (__thiscall **)(void *, int, int, int, int, int, int, int, _DWORD))(this->BlitTransLucent25AlphaZReadWrite_ushort_field_0x04)( /*0x49603a*/
           this,
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           0);
}


// ==== 0x00496040  _BlitTransLucent25AlphaZReadWrite_G::BlitRect  this=BlitTransLucent25AlphaZReadWrite_ushort  sig=csp ====
int __thiscall BlitTransLucent25AlphaZReadWrite_ushort::BlitRect(
        void *this,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10)
{
  return (*(int (__thiscall **)(void *, int, int, int, int, int, int, int, _DWORD))(this->BlitTransLucent25AlphaZReadWrite_ushort_field_0x04)( /*0x49606a*/
           this,
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           0);
}


// ==== 0x00496070  _BlitTransLucent25AlphaZReadWrite_G::GetSize  this=BlitTransLucent25AlphaZReadWrite_ushort  sig=csp ====
int __thiscall BlitTransLucent25AlphaZReadWrite_ushort::_vt04(
        void *this,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9)
{
  return (*(int (__thiscall **)(void *, int, int, int, int, int, int, int, _DWORD))(this->BlitTransLucent25AlphaZReadWrite_ushort_field_0x04)( /*0x49609a*/
           this,
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           0);
}


// ==== 0x004960A0  _RLEBlitTransXlat_G::Blit_RLE_Xlat  this=RLEBlitTransXlat  sig=csp ====
int __thiscall BlitTransLucent25AlphaZReadWrite_ushort::sub_4960A0(
        _DWORD *this,
        int a2,
        unsigned __int8 *a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11)
{
  int v11; // edx
  int result; // eax
  int v16; // edx
  int v17; // edi
  unsigned __int8 v18; // dl
  unsigned __int8 v19; // dl

  v11 = a5; /*0x4960a0*/
  result = a2; /*0x4960a4*/
  if ( a5 <= 0 ) /*0x4960b3*/
  {
    v17 = a4; /*0x4960d7*/
  }
  else
  {
    do /*0x4960c8*/
    {
      if ( *a3++ ) /*0x4960b5*/
        --v11; /*0x4960c5*/
      else
        v11 -= *a3++; /*0x4960c0*/
    }
    while ( v11 > 0 ); /*0x4960c8*/
    v16 = -v11; /*0x4960ce*/
    v17 = a4 - v16; /*0x4960d0*/
    result = a2 + 2 * v16; /*0x4960d2*/
  }
  while ( v17 > 0 ) /*0x4960dd*/
  {
    v18 = *a3++; /*0x4960df*/
    if ( v18 ) /*0x4960e8*/
    {
      result += 2; /*0x49610f*/
      --v17; /*0x496112*/
      *(_WORD *)(result - 2) = *(_WORD *)(*(this + 1) + 2 * v18); /*0x496117*/
    }
    else
    {
      v19 = *a3++; /*0x4960ea*/
      v17 -= v19; /*0x4960fb*/
      result += 2 * v19; /*0x4960fd*/
    }
  }
  return result; /*0x49611f*/
}


// ==== 0x00496130  _RLEBlitTransXlat_G::CallBlit0  this=RLEBlitTransXlat  sig=csp ====
int __thiscall BlitTransLucent25AlphaZReadWrite_ushort::sub_496130(
        void *this,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12)
{
  return (*(int (__thiscall **)(void *, int, int, int, int, int, int, int, int, int, int))(*(_DWORD *)this + 4))( /*0x496167*/
           this,
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           a9,
           a10,
           a11);
}


// ==== 0x00496170  _RLEBlitTransZRemapXlat_G::Blit_RLE_Remap  this=?$RLEBlitTransZRemapXlat@G  sig=csp ====
int __thiscall BlitTransLucent25AlphaZReadWrite_ushort::Blit_RLE_Remap(
        RLEBlitTransZRemapXlat_G *this,
        int arg0,
        unsigned __int8 *a2,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11)
{
  int v11; // edx
  int result; // eax
  int v15; // ecx
  int v17; // edx
  int v18; // edi
  unsigned __int8 v19; // dl
  unsigned __int8 v20; // dl

  v11 = a5; /*0x496170*/
  result = arg0; /*0x496175*/
  v15 = **((_DWORD **)this + 1); /*0x496187*/
  if ( a5 <= 0 ) /*0x496189*/
  {
    v18 = a4; /*0x4961ad*/
  }
  else
  {
    do /*0x49619e*/
    {
      if ( *a2++ ) /*0x49618b*/
        --v11; /*0x49619b*/
      else
        v11 -= *a2++; /*0x496196*/
    }
    while ( v11 > 0 ); /*0x49619e*/
    v17 = -v11; /*0x4961a4*/
    v18 = a4 - v17; /*0x4961a6*/
    result = arg0 + 2 * v17; /*0x4961a8*/
  }
  while ( v18 > 0 ) /*0x4961b3*/
  {
    v19 = *a2++; /*0x4961b5*/
    if ( v19 ) /*0x4961be*/
    {
      result += 2; /*0x4961e4*/
      --v18; /*0x4961e7*/
      *(_WORD *)(result - 2) = *(_WORD *)(*((_DWORD *)this + 2) + 2 * *(unsigned __int8 *)(v19 + v15)); /*0x4961f2*/
    }
    else
    {
      v20 = *a2++; /*0x4961c0*/
      v18 -= v20; /*0x4961d1*/
      result += 2 * v20; /*0x4961d3*/
    }
  }
  return result; /*0x4961fa*/
}


// ==== 0x00496210  _RLEBlitTransZRemapXlat_G::CallBlit0_0  this=?$RLEBlitTransZRemapXlat@G  sig=csp ====
int __thiscall BlitTransLucent25AlphaZReadWrite_ushort::CallBlit0_0(
        RLEBlitTransZRemapXlat_G *this,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12)
{
  return (*((int (__thiscall **)(RLEBlitTransZRemapXlat_G *, int, int, int, int, int, int, int, int, int, int))this->vfptr /*0x496247*/
          + 1))(
           this,
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           a9,
           a10,
           a11);
}


// ==== 0x00496250  _RLEBlitTransDarken_G::Blit_RLE_Lucent50  this=?$RLEBlitTransDarken@G  sig=csp ====
_WORD *__thiscall BlitTransLucent25AlphaZReadWrite_ushort::Blit_RLE_Lucent50(
        RLEBlitTransDarken_G *this,
        _WORD *a1,
        unsigned __int8 *a2,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11)
{
  int v11; // edx
  _WORD *result; // eax
  int v16; // edx
  int v17; // edi
  unsigned __int8 v19; // dl

  v11 = a5; /*0x496250*/
  result = a1; /*0x496254*/
  if ( a5 <= 0 ) /*0x496263*/
  {
    v17 = a4; /*0x496287*/
  }
  else
  {
    do /*0x496278*/
    {
      if ( *a2++ ) /*0x496265*/
        --v11; /*0x496275*/
      else
        v11 -= *a2++; /*0x496270*/
    }
    while ( v11 > 0 ); /*0x496278*/
    v16 = -v11; /*0x49627e*/
    v17 = a4 - v16; /*0x496280*/
    result = &a1[v16]; /*0x496282*/
  }
  while ( v17 > 0 ) /*0x49628d*/
  {
    if ( *a2++ ) /*0x49628f*/
    {
      --v17; /*0x4962b8*/
      *result = *(_WORD *)(this + 1) & (*result >> 1); /*0x4962b9*/
      ++result; /*0x4962bc*/
    }
    else
    {
      v19 = *a2++; /*0x496296*/
      v17 -= v19; /*0x4962a7*/
      result += v19; /*0x4962a9*/
    }
  }
  return result; /*0x4962c3*/
}


// ==== 0x004962D0  _RLEBlitTransDarken_G::CallBlit0_1  this=?$RLEBlitTransDarken@G  sig=csp ====
int __thiscall BlitTransLucent25AlphaZReadWrite_ushort::CallBlit0_1(
        RLEBlitTransDarken_G *this,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12)
{
  return (*((int (__thiscall **)(RLEBlitTransDarken_G *, int, int, int, int, int, int, int, int, int, int))this->vfptr /*0x496307*/
          + 1))(
           this,
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           a9,
           a10,
           a11);
}


// ==== 0x00496310  _RLEBlitTransLucent75_G::method  this=?$RLEBlitTransLucent75@G  sig=csp ====
int __thiscall sub_496310(RLEBlitTransLucent75_G *this)
{
  int v1; // esi
  int result; // eax
  int v3; // edx
  unsigned __int8 *v4; // edi
  int v7; // ebx
  unsigned __int8 v8; // al
  int v9; // eax
  int v10; // ecx
  int v11; // [esp+10h] [ebp+4h]
  unsigned __int8 *v12; // [esp+14h] [ebp+8h]
  int v13; // [esp+18h] [ebp+Ch]
  unsigned __int8 v14; // [esp+18h] [ebp+Ch]
  int v15; // [esp+1Ch] [ebp+10h]

  result = v15; /*0x496310*/
  v3 = v11; /*0x496314*/
  v4 = v12; /*0x49631b*/
  if ( v15 <= 0 ) /*0x496323*/
  {
    v7 = v13; /*0x496347*/
  }
  else
  {
    do /*0x496338*/
    {
      if ( *v4++ ) /*0x496325*/
        --result; /*0x496335*/
      else
        result -= *v4++; /*0x496330*/
    }
    while ( result > 0 ); /*0x496338*/
    result = -result; /*0x49633e*/
    v7 = v13 - result; /*0x496340*/
    v3 = v11 + 2 * result; /*0x496342*/
  }
  while ( v7 > 0 ) /*0x49634d*/
  {
    v8 = *v4++; /*0x496350*/
    v14 = v8; /*0x496355*/
    if ( v8 ) /*0x496359*/
    {
      v9 = *((_DWORD *)this + 1); /*0x496376*/
      LOWORD(v1) = *((_WORD *)this + 4); /*0x496379*/
      v3 += 2; /*0x496383*/
      v10 = *(unsigned __int16 *)(v9 + 2 * v14); /*0x496386*/
      LOWORD(v9) = *(_WORD *)(v3 - 2) >> 2; /*0x49638e*/
      result = 3 * (v1 & v9); /*0x49639a*/
      --v7; /*0x49639f*/
      *(_WORD *)(v3 - 2) = result + (v1 & ((unsigned __int16)v10 >> 2)); /*0x4963a0*/
    }
    else
    {
      LOBYTE(result) = *v4++; /*0x49635b*/
      result = (unsigned __int8)result; /*0x496366*/
      v7 -= (unsigned __int8)result; /*0x49636b*/
      v3 += 2 * (unsigned __int8)result; /*0x49636d*/
    }
  }
  return result; /*0x4963a9*/
}


// ==== 0x004963B0  _RLEBlitTransLucent75_G::method_4963B0  this=?$RLEBlitTransLucent75@G  sig=csp ====
int __thiscall sub_4963B0(
        RLEBlitTransLucent75_G *this,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12)
{
  return (*((int (__thiscall **)(RLEBlitTransLucent75_G *, int, int, int, int, int, int, int, int, int, int))this->vfptr /*0x4963e7*/
          + 1))(
           this,
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           a9,
           a10,
           a11);
}


// ==== 0x004963F0  _RLEBlitTransLucent50_G::method_4963F0  this=?$RLEBlitTransLucent50@G  sig=csp ====
_WORD *__thiscall sub_4963F0(
        RLEBlitTransLucent50_G *this,
        _WORD *a1,
        unsigned __int8 *a2,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11)
{
  int v11; // edx
  _WORD *result; // eax
  int v15; // edx
  int v16; // edi
  unsigned __int8 v17; // dl
  unsigned __int8 v18; // dl

  v11 = a5; /*0x4963f0*/
  result = a1; /*0x496400*/
  if ( a5 <= 0 ) /*0x496402*/
  {
    v16 = a4; /*0x496426*/
  }
  else
  {
    do /*0x496417*/
    {
      if ( *a2++ ) /*0x496404*/
        --v11; /*0x496414*/
      else
        v11 -= *a2++; /*0x49640f*/
    }
    while ( v11 > 0 ); /*0x496417*/
    v15 = -v11; /*0x496419*/
    result = &a1[v15]; /*0x49641b*/
    v16 = a4 - v15; /*0x496422*/
  }
  while ( v16 > 0 ) /*0x49642c*/
  {
    v17 = *a2++; /*0x496430*/
    if ( v17 ) /*0x496439*/
    {
      --v16; /*0x496478*/
      *result = (*(_WORD *)(this + 2) & (*result >> 1)) /*0x496479*/
              + (*(_WORD *)(this + 2) & (*(_WORD *)(*((_DWORD *)this + 1) + 2 * v17) >> 1));
      ++result; /*0x49647c*/
    }
    else
    {
      v18 = *a2++; /*0x49643b*/
      v16 -= v18; /*0x49644c*/
      result += v18; /*0x49644e*/
    }
  }
  return result; /*0x496485*/
}


// ==== 0x00496490  _RLEBlitTransLucent50_G::method  this=?$RLEBlitTransLucent50@G  sig=csp ====
int __thiscall sub_496490(
        RLEBlitTransLucent50_G *this,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12)
{
  return (*((int (__thiscall **)(RLEBlitTransLucent50_G *, int, int, int, int, int, int, int, int, int, int))this->vfptr /*0x4964c7*/
          + 1))(
           this,
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           a9,
           a10,
           a11);
}


// ==== 0x004964D0  _RLEBlitTransLucent25_G::method_4964D0  this=?$RLEBlitTransLucent25@G  sig=csp ====
int __thiscall sub_4964D0(RLEBlitTransLucent25_G *this)
{
  int v1; // esi
  int result; // eax
  int v3; // edx
  unsigned __int8 *v4; // edi
  int v7; // ebx
  unsigned __int8 v8; // al
  int v9; // eax
  int v10; // eax
  __int16 v11; // cx
  int v12; // [esp+10h] [ebp+4h]
  unsigned __int8 *v13; // [esp+14h] [ebp+8h]
  int v14; // [esp+18h] [ebp+Ch]
  unsigned __int8 v15; // [esp+18h] [ebp+Ch]
  int v16; // [esp+1Ch] [ebp+10h]

  result = v16; /*0x4964d0*/
  v3 = v12; /*0x4964d4*/
  v4 = v13; /*0x4964db*/
  if ( v16 <= 0 ) /*0x4964e3*/
  {
    v7 = v14; /*0x496507*/
  }
  else
  {
    do /*0x4964f8*/
    {
      if ( *v4++ ) /*0x4964e5*/
        --result; /*0x4964f5*/
      else
        result -= *v4++; /*0x4964f0*/
    }
    while ( result > 0 ); /*0x4964f8*/
    result = -result; /*0x4964fe*/
    v7 = v14 - result; /*0x496500*/
    v3 = v12 + 2 * result; /*0x496502*/
  }
  while ( v7 > 0 ) /*0x49650d*/
  {
    v8 = *v4++; /*0x496510*/
    v15 = v8; /*0x496515*/
    if ( v8 ) /*0x496519*/
    {
      v9 = *((_DWORD *)this + 1); /*0x496536*/
      LOWORD(v1) = *((_WORD *)this + 4); /*0x496539*/
      v3 += 2; /*0x496543*/
      LOWORD(v9) = *(_WORD *)(v9 + 2 * v15) >> 2; /*0x49654a*/
      v10 = v1 & v9; /*0x49654e*/
      v11 = 3 * v10; /*0x496550*/
      LOWORD(v10) = *(_WORD *)(v3 - 2) >> 2; /*0x496557*/
      result = v1 & v10; /*0x49655b*/
      --v7; /*0x49655f*/
      *(_WORD *)(v3 - 2) = result + v11; /*0x496560*/
    }
    else
    {
      LOBYTE(result) = *v4++; /*0x49651b*/
      result = (unsigned __int8)result; /*0x496526*/
      v7 -= (unsigned __int8)result; /*0x49652b*/
      v3 += 2 * (unsigned __int8)result; /*0x49652d*/
    }
  }
  return result; /*0x496569*/
}


// ==== 0x00496570  _RLEBlitTransLucent25_G::method  this=?$RLEBlitTransLucent25@G  sig=csp ====
int __thiscall sub_496570(
        RLEBlitTransLucent25_G *this,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12)
{
  return (*((int (__thiscall **)(RLEBlitTransLucent25_G *, int, int, int, int, int, int, int, int, int, int))this->vfptr /*0x4965a7*/
          + 1))(
           this,
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           a9,
           a10,
           a11);
}


// ==== 0x004965B0  _RLEBlitTransXlatZRead_G::method_4965B0  this=RLEBlitTransXlatZRead  sig=csp ====
int __thiscall sub_4965B0(
        _DWORD *this,
        _WORD *a1,
        RLEBlitTransXlatZRead *aP2,
        int a4,
        int a5,
        int a6,
        unsigned int a7,
        int a8,
        int a9,
        int _38,
        char *a10)
{
  int result; // eax
  unsigned int v12; // edx
  _WORD *v15; // edi
  char v16; // bl
  int v17; // eax
  int v18; // ebx
  unsigned __int8 v19; // al
  unsigned __int8 v20; // al
  int v21; // esi

  result = a5; /*0x4965b1*/
  v12 = a7; /*0x4965b5*/
  v15 = a1; /*0x4965c9*/
  if ( a5 <= 0 ) /*0x4965cf*/
  {
    v18 = a4; /*0x496608*/
  }
  else
  {
    do /*0x4965e6*/
    {
      v16 = aP2->__pad_0[0]; /*0x4965d1*/
      aP2 = (RLEBlitTransXlatZRead *)((char *)aP2 + 1); /*0x4965d4*/
      if ( v16 ) /*0x4965d7*/
      {
        --result; /*0x4965e3*/
      }
      else
      {
        result -= (unsigned __int8)aP2->__pad_0[0]; /*0x4965de*/
        aP2 = (RLEBlitTransXlatZRead *)((char *)aP2 + 1); /*0x4965e0*/
      }
    }
    while ( result > 0 ); /*0x4965e6*/
    v17 = -result; /*0x4965ec*/
    v18 = a4 - v17; /*0x4965ee*/
    v15 = &a1[v17]; /*0x4965f0*/
    result = a7 + 2 * v17; /*0x4965f3*/
    if ( (unsigned int)result >= *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[23348] + 28) ) /*0x4965ff*/
      result -= *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[23348] + 32); /*0x496601*/
    v12 = result; /*0x496604*/
  }
  while ( v18 > 0 ) /*0x49660e*/
  {
    v19 = aP2->__pad_0[0]; /*0x496610*/
    aP2 = (RLEBlitTransXlatZRead *)((char *)aP2 + 1); /*0x496613*/
    if ( v19 ) /*0x49661a*/
    {
      v12 += 2; /*0x496641*/
      v21 = a6 - *a10++; /*0x496644*/
      if ( v21 < *(unsigned __int16 *)(v12 - 2) ) /*0x49664f*/
        *v15 = *(_WORD *)(*(this + 1) + 2 * v19); /*0x496665*/
      ++v15; /*0x496668*/
      --v18; /*0x49666b*/
    }
    else
    {
      v20 = aP2->__pad_0[0]; /*0x49661c*/
      aP2 = (RLEBlitTransXlatZRead *)((char *)aP2 + 1); /*0x49661f*/
      v18 -= v20; /*0x49662d*/
      v15 += v20; /*0x496632*/
      v12 += 2 * v20; /*0x496634*/
      a10 += v20; /*0x496636*/
    }
    result = *(_DWORD *)&stru_87C374.__pad_579C[23348]; /*0x49666c*/
    if ( v12 >= *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[23348] + 28) ) /*0x496674*/
      v12 -= *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[23348] + 32); /*0x496676*/
  }
  return result; /*0x49667d*/
}


// ==== 0x00496690  _RLEBlitTransXlatZRead_G::method  this=RLEBlitTransXlatZRead  sig=csp ====
int __thiscall sub_496690(
        void *this,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12)
{
  return (*(int (__thiscall **)(void *, int, int, int, int, int, int, int, int, int, int))(*(_DWORD *)this + 4))( /*0x4966c7*/
           this,
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           a9,
           a10,
           a11);
}


// ==== 0x004966D0  _RLEBlitTransZRemapXlatZRead_G::method_4966D0  this=?$RLEBlitTransZRemapXlatZRead@G  sig=csp ====
int __thiscall sub_4966D0(
        RLEBlitTransZRemapXlatZRead_G *this,
        int arg0,
        unsigned __int8 *a2,
        int a4,
        int a5,
        int a6,
        unsigned int a7,
        int a8,
        int a9,
        int _38,
        char *a10)
{
  int result; // eax
  int v14; // edi
  unsigned int v15; // edx
  int v17; // eax
  int v18; // ebx
  unsigned __int8 v19; // al
  unsigned __int8 v20; // al
  int v21; // esi
  unsigned __int8 *a2a; // [esp+1Ch] [ebp+8h]

  result = a5; /*0x4966e7*/
  v14 = arg0; /*0x4966f2*/
  a2a = (unsigned __int8 *)**((_DWORD **)this + 1); /*0x4966f6*/
  v15 = a7; /*0x4966fa*/
  if ( a5 <= 0 ) /*0x496700*/
  {
    v18 = a4; /*0x496733*/
  }
  else
  {
    do /*0x496717*/
    {
      if ( *a2++ ) /*0x496702*/
        --result; /*0x496714*/
      else
        result -= *a2++; /*0x49670f*/
    }
    while ( result > 0 ); /*0x496717*/
    v17 = -result; /*0x49671d*/
    v18 = a4 - v17; /*0x49671f*/
    v14 = arg0 + 2 * v17; /*0x496721*/
    result = a7 + 2 * v17; /*0x496724*/
    if ( (unsigned int)result >= *(_DWORD *)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[10232] + 28) ) /*0x49672a*/
      result -= *(_DWORD *)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[10232] + 32); /*0x49672c*/
    v15 = result; /*0x49672f*/
  }
  while ( v18 > 0 ) /*0x496739*/
  {
    v19 = *a2++; /*0x49673f*/
    if ( v19 ) /*0x496749*/
    {
      v15 += 2; /*0x496770*/
      v21 = a6 - *a10++; /*0x496773*/
      v14 += 2; /*0x496794*/
      --v18; /*0x496797*/
      if ( v21 < *(unsigned __int16 *)(v15 - 2) ) /*0x496782*/
        *(_WORD *)(v14 - 2) = *(_WORD *)(*((_DWORD *)this + 2) + 2 * a2a[v19]); /*0x4967aa*/
    }
    else
    {
      v20 = *a2++; /*0x49674b*/
      v18 -= v20; /*0x49675c*/
      a10 += v20; /*0x49675e*/
      v14 += 2 * v20; /*0x496763*/
      v15 += 2 * v20; /*0x496765*/
    }
    result = *(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[10232]; /*0x4967b4*/
    if ( v15 >= *(_DWORD *)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[10232] + 28) ) /*0x4967bc*/
      v15 -= *(_DWORD *)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[10232] + 32); /*0x4967be*/
  }
  return result; /*0x4967c9*/
}


// ==== 0x004967E0  _RLEBlitTransZRemapXlatZRead_G::method_4967E0  this=?$RLEBlitTransZRemapXlatZRead@G  sig=csp ====
int __thiscall sub_4967E0(
        RLEBlitTransZRemapXlatZRead_G *this,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12)
{
  return (*((int (__thiscall **)(RLEBlitTransZRemapXlatZRead_G *, int, int, int, int, int, int, int, int, int, int))this->vfptr /*0x496817*/
          + 1))(
           this,
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           a9,
           a10,
           a11);
}


// ==== 0x00496820  _RLEBlitTransDarkenZRead_G::method  this=?$RLEBlitTransDarkenZRead@G  sig=csp ====
int __thiscall sub_496820(
        RLEBlitTransDarkenZRead_G *this,
        _WORD *a1,
        unsigned __int8 *a2,
        RLEBlitTransDarkenZRead_G *aP3,
        int a5,
        int a6,
        unsigned int a7,
        int a8,
        int a9,
        int _38,
        char *a10)
{
  int result; // eax
  unsigned int v12; // edx
  _WORD *v14; // esi
  int v17; // eax
  RLEBlitTransDarkenZRead_G *v18; // ebx
  unsigned __int8 v20; // al
  int v21; // edi

  result = a5; /*0x496821*/
  v12 = a7; /*0x496825*/
  v14 = a1; /*0x496830*/
  if ( a5 <= 0 ) /*0x496845*/
  {
    v18 = aP3; /*0x496878*/
  }
  else
  {
    do /*0x49685c*/
    {
      if ( *a2++ ) /*0x496847*/
        --result; /*0x496859*/
      else
        result -= *a2++; /*0x496854*/
    }
    while ( result > 0 ); /*0x49685c*/
    v17 = -result; /*0x496862*/
    v18 = (RLEBlitTransDarkenZRead_G *)((char *)aP3 - v17); /*0x496864*/
    v14 = &a1[v17]; /*0x496866*/
    result = a7 + 2 * v17; /*0x496869*/
    if ( (unsigned int)result >= *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[23348] + 28) ) /*0x49686f*/
      result -= *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[23348] + 32); /*0x496871*/
    v12 = result; /*0x496874*/
  }
  while ( (int)v18 > 0 ) /*0x49687e*/
  {
    if ( *a2++ ) /*0x496880*/
    {
      v12 += 2; /*0x4968ad*/
      v21 = a6 - *a10++; /*0x4968b0*/
      if ( v21 < *(unsigned __int16 *)(v12 - 2) ) /*0x4968bb*/
        *v14 = *(_WORD *)(this + 1) & (*v14 >> 1); /*0x4968cb*/
      v18 = (RLEBlitTransDarkenZRead_G *)((char *)v18 - 1); /*0x4968ce*/
      ++v14; /*0x4968cf*/
    }
    else
    {
      v20 = *a2++; /*0x496888*/
      v18 = (RLEBlitTransDarkenZRead_G *)((char *)v18 - v20); /*0x496899*/
      a10 += v20; /*0x49689b*/
      v14 += v20; /*0x4968a0*/
      v12 += 2 * v20; /*0x4968a2*/
    }
    result = *(_DWORD *)&stru_87C374.__pad_579C[23348]; /*0x4968d2*/
    if ( v12 >= *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[23348] + 28) ) /*0x4968da*/
      v12 -= *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[23348] + 32); /*0x4968dc*/
  }
  return result; /*0x4968e3*/
}


// ==== 0x004968F0  _RLEBlitTransDarkenZRead_G::method_4968F0  this=?$RLEBlitTransDarkenZRead@G  sig=csp ====
int __thiscall sub_4968F0(
        RLEBlitTransDarkenZRead_G *this,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12)
{
  return (*((int (__thiscall **)(RLEBlitTransDarkenZRead_G *, int, int, int, int, int, int, int, int, int, int))this->vfptr /*0x496927*/
          + 1))(
           this,
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           a9,
           a10,
           a11);
}


// ==== 0x00496930  _RLEBlitTransLucent75ZRead_G::method  this=?$RLEBlitTransLucent75ZRead@G  sig=csp ====
int __thiscall sub_496930(
        RLEBlitTransLucent75ZRead_G *this,
        int arg0,
        unsigned __int8 *a2,
        RLEBlitTransLucent75ZRead_G *aP3,
        int a5,
        int a6,
        unsigned int a7,
        int a8,
        int a9,
        int _38,
        char *a10)
{
  int result; // eax
  int v12; // edx
  unsigned int v14; // esi
  int v17; // eax
  RLEBlitTransLucent75ZRead_G *v18; // ebx
  unsigned __int8 v19; // al
  unsigned __int8 v20; // al
  int v21; // edi

  result = a5; /*0x496931*/
  v12 = arg0; /*0x496935*/
  v14 = a7; /*0x496940*/
  if ( a5 <= 0 ) /*0x496955*/
  {
    v18 = aP3; /*0x496988*/
  }
  else
  {
    do /*0x49696c*/
    {
      if ( *a2++ ) /*0x496957*/
        --result; /*0x496969*/
      else
        result -= *a2++; /*0x496964*/
    }
    while ( result > 0 ); /*0x49696c*/
    v17 = -result; /*0x496972*/
    v18 = (RLEBlitTransLucent75ZRead_G *)((char *)aP3 - v17); /*0x496974*/
    v12 = arg0 + 2 * v17; /*0x496976*/
    result = a7 + 2 * v17; /*0x496979*/
    if ( (unsigned int)result >= *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[23348] + 28) ) /*0x49697f*/
      result -= *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[23348] + 32); /*0x496981*/
    v14 = result; /*0x496984*/
  }
  while ( (int)v18 > 0 ) /*0x49698e*/
  {
    v19 = *a2++; /*0x496994*/
    if ( v19 ) /*0x49699e*/
    {
      v14 += 2; /*0x4969c5*/
      v21 = a6 - *a10++; /*0x4969c8*/
      v12 += 2; /*0x4969e7*/
      v18 = (RLEBlitTransLucent75ZRead_G *)((char *)v18 - 1); /*0x496a0a*/
      if ( v21 < *(unsigned __int16 *)(v14 - 2) ) /*0x4969d7*/
        *(_WORD *)(v12 - 2) = 3 * (*(_WORD *)(this + 2) & (*(_WORD *)(v12 - 2) >> 2)) /*0x496a0b*/
                            + (*(_WORD *)(this + 2) & (*(_WORD *)(*((_DWORD *)this + 1) + 2 * v19) >> 2));
    }
    else
    {
      v20 = *a2++; /*0x4969a0*/
      v18 = (RLEBlitTransLucent75ZRead_G *)((char *)v18 - v20); /*0x4969b1*/
      a10 += v20; /*0x4969b3*/
      v12 += 2 * v20; /*0x4969b8*/
      v14 += 2 * v20; /*0x4969ba*/
    }
    result = *(_DWORD *)&stru_87C374.__pad_579C[23348]; /*0x496a19*/
    if ( v14 >= *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[23348] + 28) ) /*0x496a21*/
      v14 -= *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[23348] + 32); /*0x496a23*/
  }
  return result; /*0x496a2e*/
}


// ==== 0x00496A40  _RLEBlitTransLucent75ZRead_G::method_496A40  this=?$RLEBlitTransLucent75ZRead@G  sig=csp ====
int __thiscall sub_496A40(
        RLEBlitTransLucent75ZRead_G *this,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12)
{
  return (*((int (__thiscall **)(RLEBlitTransLucent75ZRead_G *, int, int, int, int, int, int, int, int, int, int))this->vfptr /*0x496a77*/
          + 1))(
           this,
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           a9,
           a10,
           a11);
}


// ==== 0x00496A80  _RLEBlitTransLucent50ZRead_G::method_496A80  this=?$RLEBlitTransLucent50ZRead@G  sig=csp ====
int __thiscall sub_496A80(
        RLEBlitTransLucent50ZRead_G *this,
        _WORD *a1,
        unsigned __int8 *a2,
        RLEBlitTransLucent50ZRead_G *aP3,
        int a5,
        int a6,
        unsigned int a7,
        int a8,
        int a9,
        int _38,
        char *a10)
{
  int result; // eax
  unsigned int v12; // edx
  _WORD *v14; // esi
  int v17; // eax
  RLEBlitTransLucent50ZRead_G *v18; // ebx
  unsigned __int8 v19; // al
  unsigned __int8 v20; // al
  int v21; // edi

  result = a5; /*0x496a81*/
  v12 = a7; /*0x496a85*/
  v14 = a1; /*0x496a90*/
  if ( a5 <= 0 ) /*0x496aa5*/
  {
    v18 = aP3; /*0x496ad8*/
  }
  else
  {
    do /*0x496abc*/
    {
      if ( *a2++ ) /*0x496aa7*/
        --result; /*0x496ab9*/
      else
        result -= *a2++; /*0x496ab4*/
    }
    while ( result > 0 ); /*0x496abc*/
    v17 = -result; /*0x496ac2*/
    v18 = (RLEBlitTransLucent50ZRead_G *)((char *)aP3 - v17); /*0x496ac4*/
    v14 = &a1[v17]; /*0x496ac6*/
    result = a7 + 2 * v17; /*0x496ac9*/
    if ( (unsigned int)result >= *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[23348] + 28) ) /*0x496acf*/
      result -= *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[23348] + 32); /*0x496ad1*/
    v12 = result; /*0x496ad4*/
  }
  while ( (int)v18 > 0 ) /*0x496ade*/
  {
    v19 = *a2++; /*0x496ae4*/
    if ( v19 ) /*0x496aee*/
    {
      v12 += 2; /*0x496b15*/
      v21 = a6 - *a10++; /*0x496b18*/
      v18 = (RLEBlitTransLucent50ZRead_G *)((char *)v18 - 1); /*0x496b51*/
      if ( v21 < *(unsigned __int16 *)(v12 - 2) ) /*0x496b27*/
        *v14 = (*(_WORD *)(this + 2) & (*v14 >> 1)) /*0x496b52*/
             + (*(_WORD *)(this + 2) & (*(_WORD *)(*((_DWORD *)this + 1) + 2 * v19) >> 1));
      ++v14; /*0x496b59*/
    }
    else
    {
      v20 = *a2++; /*0x496af0*/
      v18 = (RLEBlitTransLucent50ZRead_G *)((char *)v18 - v20); /*0x496b01*/
      a10 += v20; /*0x496b03*/
      v14 += v20; /*0x496b08*/
      v12 += 2 * v20; /*0x496b0a*/
    }
    result = *(_DWORD *)&stru_87C374.__pad_579C[23348]; /*0x496b62*/
    if ( v12 >= *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[23348] + 28) ) /*0x496b6a*/
      v12 -= *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[23348] + 32); /*0x496b6c*/
  }
  return result; /*0x496b77*/
}


// ==== 0x00496B80  _RLEBlitTransLucent50ZRead_G::method_496B80  this=?$RLEBlitTransLucent50ZRead@G  sig=csp ====
int __thiscall sub_496B80(
        RLEBlitTransLucent50ZRead_G *this,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12)
{
  return (*((int (__thiscall **)(RLEBlitTransLucent50ZRead_G *, int, int, int, int, int, int, int, int, int, int))this->vfptr /*0x496bb7*/
          + 1))(
           this,
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           a9,
           a10,
           a11);
}


// ==== 0x00496BC0  _RLEBlitTransLucent25ZRead_G::method_496BC0  this=?$RLEBlitTransLucent25ZRead@G  sig=csp ====
int __thiscall sub_496BC0(
        RLEBlitTransLucent25ZRead_G *this,
        int arg0,
        unsigned __int8 *a2,
        RLEBlitTransLucent25ZRead_G *aP3,
        int a5,
        int a6,
        unsigned int a7,
        int a8,
        int a9,
        int _38,
        char *a10)
{
  int result; // eax
  int v12; // edx
  unsigned int v14; // esi
  int v17; // eax
  RLEBlitTransLucent25ZRead_G *v18; // ebx
  unsigned __int8 v19; // al
  unsigned __int8 v20; // al
  int v21; // edi

  result = a5; /*0x496bc1*/
  v12 = arg0; /*0x496bc5*/
  v14 = a7; /*0x496bd0*/
  if ( a5 <= 0 ) /*0x496be5*/
  {
    v18 = aP3; /*0x496c18*/
  }
  else
  {
    do /*0x496bfc*/
    {
      if ( *a2++ ) /*0x496be7*/
        --result; /*0x496bf9*/
      else
        result -= *a2++; /*0x496bf4*/
    }
    while ( result > 0 ); /*0x496bfc*/
    v17 = -result; /*0x496c02*/
    v18 = (RLEBlitTransLucent25ZRead_G *)((char *)aP3 - v17); /*0x496c04*/
    v12 = arg0 + 2 * v17; /*0x496c06*/
    result = a7 + 2 * v17; /*0x496c09*/
    if ( (unsigned int)result >= *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[23348] + 28) ) /*0x496c0f*/
      result -= *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[23348] + 32); /*0x496c11*/
    v14 = result; /*0x496c14*/
  }
  while ( (int)v18 > 0 ) /*0x496c1e*/
  {
    v19 = *a2++; /*0x496c24*/
    if ( v19 ) /*0x496c2e*/
    {
      v14 += 2; /*0x496c55*/
      v21 = a6 - *a10++; /*0x496c58*/
      v12 += 2; /*0x496c77*/
      v18 = (RLEBlitTransLucent25ZRead_G *)((char *)v18 - 1); /*0x496c9a*/
      if ( v21 < *(unsigned __int16 *)(v14 - 2) ) /*0x496c67*/
        *(_WORD *)(v12 - 2) = (*(_WORD *)(this + 2) & (*(_WORD *)(v12 - 2) >> 2)) /*0x496c9b*/
                            + 3 * (*(_WORD *)(this + 2) & (*(_WORD *)(*((_DWORD *)this + 1) + 2 * v19) >> 2));
    }
    else
    {
      v20 = *a2++; /*0x496c30*/
      v18 = (RLEBlitTransLucent25ZRead_G *)((char *)v18 - v20); /*0x496c41*/
      a10 += v20; /*0x496c43*/
      v12 += 2 * v20; /*0x496c48*/
      v14 += 2 * v20; /*0x496c4a*/
    }
    result = *(_DWORD *)&stru_87C374.__pad_579C[23348]; /*0x496ca9*/
    if ( v14 >= *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[23348] + 28) ) /*0x496cb1*/
      v14 -= *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[23348] + 32); /*0x496cb3*/
  }
  return result; /*0x496cbe*/
}


// ==== 0x00496CD0  _RLEBlitTransLucent25ZRead_G::method_496CD0  this=?$RLEBlitTransLucent25ZRead@G  sig=csp ====
int __thiscall sub_496CD0(
        RLEBlitTransLucent25ZRead_G *this,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12)
{
  return (*((int (__thiscall **)(RLEBlitTransLucent25ZRead_G *, int, int, int, int, int, int, int, int, int, int))this->vfptr /*0x496d07*/
          + 1))(
           this,
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           a9,
           a10,
           a11);
}


// ==== 0x00496D10  _RLEBlitTransLucent75ZReadWarp_G::method_496D10  this=?$RLEBlitTransLucent75ZReadWarp@G  sig=csp ====
int __thiscall sub_496D10(
        RLEBlitTransLucent75ZReadWarp_G *this,
        int arg0,
        unsigned __int8 *a2,
        RLEBlitTransLucent75ZReadWarp_G *aP3,
        int a5,
        int a6,
        unsigned int a7,
        int a8,
        int a9,
        int arg20,
        char *a10)
{
  int result; // eax
  int v12; // edx
  unsigned int v14; // esi
  int v17; // eax
  RLEBlitTransLucent75ZReadWarp_G *v18; // ebx
  unsigned __int8 v19; // al
  unsigned __int8 v20; // al
  int v21; // edi

  result = a5; /*0x496d11*/
  v12 = arg0; /*0x496d15*/
  v14 = a7; /*0x496d20*/
  if ( a5 <= 0 ) /*0x496d35*/
  {
    v18 = aP3; /*0x496d68*/
  }
  else
  {
    do /*0x496d4c*/
    {
      if ( *a2++ ) /*0x496d37*/
        --result; /*0x496d49*/
      else
        result -= *a2++; /*0x496d44*/
    }
    while ( result > 0 ); /*0x496d4c*/
    v17 = -result; /*0x496d52*/
    v18 = (RLEBlitTransLucent75ZReadWarp_G *)((char *)aP3 - v17); /*0x496d54*/
    v12 = arg0 + 2 * v17; /*0x496d56*/
    result = a7 + 2 * v17; /*0x496d59*/
    if ( (unsigned int)result >= *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[23348] + 28) ) /*0x496d5f*/
      result -= *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[23348] + 32); /*0x496d61*/
    v14 = result; /*0x496d64*/
  }
  while ( (int)v18 > 0 ) /*0x496d6e*/
  {
    v19 = *a2++; /*0x496d74*/
    if ( v19 ) /*0x496d7e*/
    {
      v14 += 2; /*0x496da5*/
      v21 = a6 - *a10++; /*0x496da8*/
      v12 += 2; /*0x496dc7*/
      v18 = (RLEBlitTransLucent75ZReadWarp_G *)((char *)v18 - 1); /*0x496def*/
      if ( v21 < *(unsigned __int16 *)(v14 - 2) ) /*0x496db7*/
        *(_WORD *)(v12 - 2) = 3 * (*(_WORD *)(this + 2) & (*(_WORD *)(v12 + 2 * arg20 - 2) >> 2)) /*0x496df0*/
                            + (*(_WORD *)(this + 2) & (*(_WORD *)(*((_DWORD *)this + 1) + 2 * v19) >> 2));
    }
    else
    {
      v20 = *a2++; /*0x496d80*/
      v18 = (RLEBlitTransLucent75ZReadWarp_G *)((char *)v18 - v20); /*0x496d91*/
      a10 += v20; /*0x496d93*/
      v12 += 2 * v20; /*0x496d98*/
      v14 += 2 * v20; /*0x496d9a*/
    }
    result = *(_DWORD *)&stru_87C374.__pad_579C[23348]; /*0x496dfe*/
    if ( v14 >= *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[23348] + 28) ) /*0x496e06*/
      v14 -= *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[23348] + 32); /*0x496e08*/
  }
  return result; /*0x496e13*/
}


// ==== 0x00496E20  _RLEBlitTransLucent75ZReadWarp_G::method_496E20  this=?$RLEBlitTransLucent75ZReadWarp@G  sig=csp ====
int __thiscall sub_496E20(
        RLEBlitTransLucent75ZReadWarp_G *this,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12)
{
  return (*((int (__thiscall **)(RLEBlitTransLucent75ZReadWarp_G *, int, int, int, int, int, int, int, int, int, int))this->vfptr /*0x496e57*/
          + 1))(
           this,
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           a9,
           a10,
           a11);
}


// ==== 0x00496E60  _RLEBlitTransLucent50ZReadWarp_G::method_496E60  this=?$RLEBlitTransLucent50ZReadWarp@G  sig=csp ====
int __thiscall sub_496E60(
        RLEBlitTransLucent50ZReadWarp_G *this,
        _WORD *a1,
        unsigned __int8 *a2,
        RLEBlitTransLucent50ZReadWarp_G *aP3,
        int a5,
        int a6,
        unsigned int a7,
        int a8,
        int a9,
        int arg20,
        char *a10)
{
  int result; // eax
  _WORD *v12; // edx
  unsigned int v14; // esi
  int v17; // eax
  RLEBlitTransLucent50ZReadWarp_G *v18; // ebx
  unsigned __int8 v19; // al
  unsigned __int8 v20; // al
  int v21; // edi

  result = a5; /*0x496e61*/
  v12 = a1; /*0x496e65*/
  v14 = a7; /*0x496e70*/
  if ( a5 <= 0 ) /*0x496e85*/
  {
    v18 = aP3; /*0x496eb8*/
  }
  else
  {
    do /*0x496e9c*/
    {
      if ( *a2++ ) /*0x496e87*/
        --result; /*0x496e99*/
      else
        result -= *a2++; /*0x496e94*/
    }
    while ( result > 0 ); /*0x496e9c*/
    v17 = -result; /*0x496ea2*/
    v18 = (RLEBlitTransLucent50ZReadWarp_G *)((char *)aP3 - v17); /*0x496ea4*/
    v12 = &a1[v17]; /*0x496ea6*/
    result = a7 + 2 * v17; /*0x496ea9*/
    if ( (unsigned int)result >= *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[23348] + 28) ) /*0x496eaf*/
      result -= *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[23348] + 32); /*0x496eb1*/
    v14 = result; /*0x496eb4*/
  }
  while ( (int)v18 > 0 ) /*0x496ebe*/
  {
    v19 = *a2++; /*0x496ec4*/
    if ( v19 ) /*0x496ece*/
    {
      v14 += 2; /*0x496ef5*/
      v21 = a6 - *a10++; /*0x496ef8*/
      v18 = (RLEBlitTransLucent50ZReadWarp_G *)((char *)v18 - 1); /*0x496f36*/
      if ( v21 < *(unsigned __int16 *)(v14 - 2) ) /*0x496f07*/
        *v12 = (*(_WORD *)(this + 2) & (v12[arg20] >> 1)) /*0x496f37*/
             + (*(_WORD *)(this + 2) & (*(_WORD *)(*((_DWORD *)this + 1) + 2 * v19) >> 1));
      ++v12; /*0x496f3e*/
    }
    else
    {
      v20 = *a2++; /*0x496ed0*/
      v18 = (RLEBlitTransLucent50ZReadWarp_G *)((char *)v18 - v20); /*0x496ee1*/
      a10 += v20; /*0x496ee3*/
      v12 += v20; /*0x496ee8*/
      v14 += 2 * v20; /*0x496eea*/
    }
    result = *(_DWORD *)&stru_87C374.__pad_579C[23348]; /*0x496f47*/
    if ( v14 >= *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[23348] + 28) ) /*0x496f4f*/
      v14 -= *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[23348] + 32); /*0x496f51*/
  }
  return result; /*0x496f5c*/
}


// ==== 0x00496F70  _RLEBlitTransLucent50ZReadWarp_G::method_496F70  this=?$RLEBlitTransLucent50ZReadWarp@G  sig=csp ====
int __thiscall sub_496F70(
        RLEBlitTransLucent50ZReadWarp_G *this,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12)
{
  return (*((int (__thiscall **)(RLEBlitTransLucent50ZReadWarp_G *, int, int, int, int, int, int, int, int, int, int))this->vfptr /*0x496fa7*/
          + 1))(
           this,
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           a9,
           a10,
           a11);
}


// ==== 0x00496FB0  _RLEBlitTransLucent25ZReadWarp_G::method_496FB0  this=?$RLEBlitTransLucent25ZReadWarp@G  sig=csp ====
int __thiscall sub_496FB0(
        RLEBlitTransLucent25ZReadWarp_G *this,
        int arg0,
        unsigned __int8 *a2,
        RLEBlitTransLucent25ZReadWarp_G *aP3,
        int a5,
        int a6,
        unsigned int a7,
        int a8,
        int a9,
        int arg20,
        char *a10)
{
  int result; // eax
  int v12; // edx
  unsigned int v14; // esi
  int v17; // eax
  RLEBlitTransLucent25ZReadWarp_G *v18; // ebx
  unsigned __int8 v19; // al
  unsigned __int8 v20; // al
  int v21; // edi

  result = a5; /*0x496fb1*/
  v12 = arg0; /*0x496fb5*/
  v14 = a7; /*0x496fc0*/
  if ( a5 <= 0 ) /*0x496fd5*/
  {
    v18 = aP3; /*0x497008*/
  }
  else
  {
    do /*0x496fec*/
    {
      if ( *a2++ ) /*0x496fd7*/
        --result; /*0x496fe9*/
      else
        result -= *a2++; /*0x496fe4*/
    }
    while ( result > 0 ); /*0x496fec*/
    v17 = -result; /*0x496ff2*/
    v18 = (RLEBlitTransLucent25ZReadWarp_G *)((char *)aP3 - v17); /*0x496ff4*/
    v12 = arg0 + 2 * v17; /*0x496ff6*/
    result = a7 + 2 * v17; /*0x496ff9*/
    if ( (unsigned int)result >= *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[23348] + 28) ) /*0x496fff*/
      result -= *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[23348] + 32); /*0x497001*/
    v14 = result; /*0x497004*/
  }
  while ( (int)v18 > 0 ) /*0x49700e*/
  {
    v19 = *a2++; /*0x497014*/
    if ( v19 ) /*0x49701e*/
    {
      v14 += 2; /*0x497045*/
      v21 = a6 - *a10++; /*0x497048*/
      v12 += 2; /*0x497067*/
      v18 = (RLEBlitTransLucent25ZReadWarp_G *)((char *)v18 - 1); /*0x49708f*/
      if ( v21 < *(unsigned __int16 *)(v14 - 2) ) /*0x497057*/
        *(_WORD *)(v12 - 2) = (*(_WORD *)(this + 2) & (*(_WORD *)(v12 + 2 * arg20 - 2) >> 2)) /*0x497090*/
                            + 3 * (*(_WORD *)(this + 2) & (*(_WORD *)(*((_DWORD *)this + 1) + 2 * v19) >> 2));
    }
    else
    {
      v20 = *a2++; /*0x497020*/
      v18 = (RLEBlitTransLucent25ZReadWarp_G *)((char *)v18 - v20); /*0x497031*/
      a10 += v20; /*0x497033*/
      v12 += 2 * v20; /*0x497038*/
      v14 += 2 * v20; /*0x49703a*/
    }
    result = *(_DWORD *)&stru_87C374.__pad_579C[23348]; /*0x49709e*/
    if ( v14 >= *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[23348] + 28) ) /*0x4970a6*/
      v14 -= *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[23348] + 32); /*0x4970a8*/
  }
  return result; /*0x4970b3*/
}


// ==== 0x004970C0  _RLEBlitTransLucent25ZReadWarp_G::method_4970C0  this=?$RLEBlitTransLucent25ZReadWarp@G  sig=csp ====
int __thiscall sub_4970C0(
        RLEBlitTransLucent25ZReadWarp_G *this,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12)
{
  return (*((int (__thiscall **)(RLEBlitTransLucent25ZReadWarp_G *, int, int, int, int, int, int, int, int, int, int))this->vfptr /*0x4970f7*/
          + 1))(
           this,
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           a9,
           a10,
           a11);
}


// ==== 0x00497100  _RLEBlitTransXlatZReadWrite_G::method  this=?$RLEBlitTransXlatZReadWrite@G  sig=csp ====
_WORD *__thiscall sub_497100(
        RLEBlitTransXlatZReadWrite_G *this,
        int arg0,
        unsigned __int8 *a2,
        RLEBlitTransXlatZReadWrite_G *aP3,
        int a5,
        int arg10,
        _WORD *a6,
        int a8,
        int a9,
        int _38,
        char *a10)
{
  int v11; // edx
  _WORD *result; // eax
  int v13; // esi
  int v17; // edx
  RLEBlitTransXlatZReadWrite_G *v18; // ebp
  unsigned __int8 v19; // dl
  unsigned __int8 v20; // dl

  v11 = a5; /*0x497101*/
  result = a6; /*0x497105*/
  v13 = arg0; /*0x49710c*/
  if ( a5 <= 0 ) /*0x49711f*/
  {
    v18 = aP3; /*0x497154*/
  }
  else
  {
    do /*0x497134*/
    {
      if ( *a2++ ) /*0x497121*/
        --v11; /*0x497131*/
      else
        v11 -= *a2++; /*0x49712c*/
    }
    while ( v11 > 0 ); /*0x497134*/
    v17 = -v11; /*0x49713a*/
    v18 = (RLEBlitTransXlatZReadWrite_G *)((char *)aP3 - v17); /*0x49713c*/
    v13 = arg0 + 2 * v17; /*0x49713e*/
    result = &a6[v17]; /*0x497141*/
    if ( (unsigned int)result >= *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[23348] + 28) ) /*0x49714d*/
      result = (_WORD *)((char *)result - *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[23348] + 32)); /*0x49714f*/
  }
  while ( (int)v18 > 0 ) /*0x49715a*/
  {
    v19 = *a2++; /*0x497160*/
    if ( v19 ) /*0x497169*/
    {
      v13 += 2; /*0x4971a9*/
      if ( arg10 - *a10 < (unsigned __int16)*result ) /*0x497199*/
      {
        *(_WORD *)(v13 - 2) = *(_WORD *)(*((_DWORD *)this + 1) + 2 * v19); /*0x4971b7*/
        *result = arg10 - *a10; /*0x4971c1*/
      }
      ++result; /*0x4971c9*/
      ++a10; /*0x4971cc*/
      v18 = (RLEBlitTransXlatZReadWrite_G *)((char *)v18 - 1); /*0x4971cd*/
    }
    else
    {
      v20 = *a2++; /*0x49716b*/
      v18 = (RLEBlitTransXlatZReadWrite_G *)((char *)v18 - v20); /*0x49717c*/
      a10 += v20; /*0x49717e*/
      v13 += 2 * v20; /*0x497183*/
      result += v20; /*0x497185*/
    }
    if ( (unsigned int)result >= *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[23348] + 28) ) /*0x4971d7*/
      result = (_WORD *)((char *)result - *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[23348] + 32)); /*0x4971d9*/
  }
  return result; /*0x4971e0*/
}


// ==== 0x004971F0  _RLEBlitTransXlatZReadWrite_G::method_4971F0  this=?$RLEBlitTransXlatZReadWrite@G  sig=csp ====
int __thiscall sub_4971F0(
        RLEBlitTransXlatZReadWrite_G *this,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12)
{
  return (*((int (__thiscall **)(RLEBlitTransXlatZReadWrite_G *, int, int, int, int, int, int, int, int, int, int))this->vfptr /*0x497227*/
          + 1))(
           this,
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           a9,
           a10,
           a11);
}


// ==== 0x00497230  _RLEBlitTransZRemapXlatZReadWrite_G::method  this=?$RLEBlitTransZRemapXlatZReadWrite@G  sig=csp ====
unsigned __int16 *__thiscall sub_497230(
        RLEBlitTransZRemapXlatZReadWrite_G *this,
        int arg0,
        unsigned __int8 *a2,
        int a4,
        int a5,
        int arg10,
        unsigned __int16 *a6,
        int a8,
        int a9,
        int _38,
        char *a10)
{
  unsigned __int16 *result; // eax
  int v13; // ecx
  int v14; // esi
  int v17; // ecx
  int v18; // ebx
  unsigned __int8 v19; // cl
  unsigned __int8 v20; // cl
  int v21; // ecx
  int v22; // ecx
  char *v23; // edi
  __int16 v24; // cx
  unsigned __int8 *a2a; // [esp+1Ch] [ebp+8h]
  unsigned __int8 v27; // [esp+20h] [ebp+Ch]

  result = a6; /*0x497240*/
  a2a = (unsigned __int8 *)**((_DWORD **)this + 1); /*0x497244*/
  v13 = a5; /*0x497248*/
  v14 = arg0; /*0x49724d*/
  if ( a5 <= 0 ) /*0x497258*/
  {
    v18 = a4; /*0x49728f*/
  }
  else
  {
    do /*0x49726f*/
    {
      if ( *a2++ ) /*0x49725a*/
        --v13; /*0x49726c*/
      else
        v13 -= *a2++; /*0x497267*/
    }
    while ( v13 > 0 ); /*0x49726f*/
    v17 = -v13; /*0x497275*/
    v18 = a4 - v17; /*0x497277*/
    v14 = arg0 + 2 * v17; /*0x497279*/
    result = &a6[v17]; /*0x49727c*/
    if ( (unsigned int)result >= *(_DWORD *)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[10232] + 28) ) /*0x497288*/
      result = (unsigned __int16 *)((char *)result - *(_DWORD *)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[10232] + 32)); /*0x49728a*/
  }
  while ( v18 > 0 ) /*0x497295*/
  {
    v19 = *a2++; /*0x49729b*/
    v27 = v19; /*0x4972a1*/
    if ( v19 ) /*0x4972a9*/
    {
      v22 = arg10 - *a10; /*0x4972d1*/
      v23 = a10 + 1; /*0x4972d8*/
      if ( v22 >= *result ) /*0x4972db*/
      {
        a10 = v23 + 1; /*0x49731b*/
        v14 += 2; /*0x49731c*/
        ++result; /*0x49731f*/
      }
      else
      {
        v14 += 2; /*0x4972ed*/
        ++result; /*0x4972f0*/
        *(_WORD *)(v14 - 2) = *(_WORD *)(*((_DWORD *)this + 2) + 2 * a2a[v27]); /*0x497305*/
        v24 = *v23; /*0x49730d*/
        a10 = v23 + 1; /*0x497313*/
        *(result - 1) = arg10 - v24; /*0x497314*/
      }
      --v18; /*0x497318*/
    }
    else
    {
      v20 = *a2++; /*0x4972ab*/
      v18 -= v20; /*0x4972bd*/
      a10 += v20; /*0x4972bf*/
      v21 = 2 * v20; /*0x4972c1*/
      v14 += v21; /*0x4972c4*/
      result = (unsigned __int16 *)((char *)result + v21); /*0x4972c6*/
    }
    if ( (unsigned int)result >= *(_DWORD *)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[10232] + 28) ) /*0x49732c*/
      result = (unsigned __int16 *)((char *)result - *(_DWORD *)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[10232] + 32)); /*0x49732e*/
  }
  return result; /*0x497339*/
}


// ==== 0x00497350  _RLEBlitTransZRemapXlatZReadWrite_G::method  this=?$RLEBlitTransZRemapXlatZReadWrite@G  sig=csp ====
int __thiscall sub_497350(
        RLEBlitTransZRemapXlatZReadWrite_G *this,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12)
{
  return (*((int (__thiscall **)(RLEBlitTransZRemapXlatZReadWrite_G *, int, int, int, int, int, int, int, int, int, int))this->vfptr /*0x497387*/
          + 1))(
           this,
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           a9,
           a10,
           a11);
}


// ==== 0x00497390  _RLEBlitTransDarkenZReadWrite_G::method  this=?$RLEBlitTransDarkenZReadWrite@G  sig=csp ====
unsigned __int16 *__thiscall sub_497390(
        RLEBlitTransDarkenZReadWrite_G *this,
        _WORD *a1,
        unsigned __int8 *a2,
        int a4,
        RLEBlitTransDarkenZReadWrite_G *aP4,
        int arg10,
        unsigned __int16 *a6,
        int a8,
        int a9,
        int _38,
        char *a10)
{
  RLEBlitTransDarkenZReadWrite_G *v11; // edx
  RLEBlitTransDarkenZReadWrite_G *v13; // esi
  unsigned __int16 *result; // eax
  int v17; // edx
  int v18; // ebp
  unsigned __int8 v20; // dl
  __int16 v21; // dx

  v11 = aP4; /*0x497391*/
  v13 = (RLEBlitTransDarkenZReadWrite_G *)a1; /*0x49739c*/
  result = a6; /*0x4973a9*/
  if ( (int)aP4 <= 0 ) /*0x4973b1*/
  {
    v18 = a4; /*0x4973e6*/
  }
  else
  {
    do /*0x4973c6*/
    {
      if ( *a2++ ) /*0x4973b3*/
        v11 = (RLEBlitTransDarkenZReadWrite_G *)((char *)v11 - 1); /*0x4973c3*/
      else
        v11 = (RLEBlitTransDarkenZReadWrite_G *)((char *)v11 - *a2++); /*0x4973be*/
    }
    while ( (int)v11 > 0 ); /*0x4973c6*/
    v17 = -(int)v11; /*0x4973cc*/
    v18 = a4 - v17; /*0x4973ce*/
    v13 = (RLEBlitTransDarkenZReadWrite_G *)&a1[v17]; /*0x4973d0*/
    result = &a6[v17]; /*0x4973d3*/
    if ( (unsigned int)result >= *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[23348] + 28) ) /*0x4973df*/
      result = (unsigned __int16 *)((char *)result - *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[23348] + 32)); /*0x4973e1*/
  }
  while ( v18 > 0 ) /*0x4973ec*/
  {
    if ( *a2++ ) /*0x4973ee*/
    {
      if ( arg10 - *a10 >= *result ) /*0x497423*/
      {
        ++a10; /*0x49744b*/
        --v18; /*0x49744c*/
        ++result; /*0x49744d*/
      }
      else
      {
        ++result; /*0x497437*/
        LOWORD(v13->vfptr) = *(_WORD *)(this + 1) & (LOWORD(v13->vfptr) >> 1); /*0x49743a*/
        v21 = *a10++; /*0x49743d*/
        *(result - 1) = arg10 - v21; /*0x497444*/
        --v18; /*0x497448*/
      }
      v13 = (RLEBlitTransDarkenZReadWrite_G *)((char *)v13 + 2); /*0x497450*/
    }
    else
    {
      v20 = *a2++; /*0x4973f5*/
      v18 -= v20; /*0x497406*/
      a10 += v20; /*0x497408*/
      v13 = (RLEBlitTransDarkenZReadWrite_G *)((char *)v13 + 2 * v20); /*0x49740d*/
      result += v20; /*0x49740f*/
    }
    if ( (unsigned int)result >= *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[23348] + 28) ) /*0x49745c*/
      result = (unsigned __int16 *)((char *)result - *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[23348] + 32)); /*0x49745e*/
  }
  return result; /*0x497465*/
}


// ==== 0x00497470  _RLEBlitTransDarkenZReadWrite_G::method  this=?$RLEBlitTransDarkenZReadWrite@G  sig=csp ====
int __thiscall sub_497470(
        RLEBlitTransDarkenZReadWrite_G *this,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12)
{
  return (*((int (__thiscall **)(RLEBlitTransDarkenZReadWrite_G *, int, int, int, int, int, int, int, int, int, int))this->vfptr /*0x4974a7*/
          + 1))(
           this,
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           a9,
           a10,
           a11);
}


// ==== 0x004974B0  _RLEBlitTransLucent75ZReadWrite_G::Blit_Alpha_ZReadWrite_Lucent25  this=?$RLEBlitTransLucent75ZReadWrite@G  sig=csp ====
int __thiscall RLEBlitTransZRemapXlatAlpha_ushort::Blit_Alpha_ZReadWrite_Lucent25(
        RLEBlitTransLucent75ZReadWrite_G *this,
        int a2,
        unsigned int a3,
        RLEBlitTransLucent75ZReadWrite_G *aP3,
        int a5,
        int arg10,
        unsigned __int16 *a6,
        int a8,
        int a9,
        int _38,
        char *a10)
{
  int result; // eax
  unsigned __int16 *v12; // edx
  int v14; // esi
  TacticalMap *v15; // ecx
  int v18; // eax
  RLEBlitTransLucent75ZReadWrite_G *v19; // ebx
  unsigned __int8 v20; // al
  int v21; // eax
  int v22; // ecx
  unsigned int v23; // ecx
  unsigned __int8 aP3a; // [esp+20h] [ebp+Ch]
  unsigned __int16 *a6a; // [esp+2Ch] [ebp+18h]

  result = a5; /*0x4974b1*/
  v12 = a6; /*0x4974b5*/
  v14 = a2; /*0x4974c0*/
  v15 = *(TacticalMap **)&stru_87C374.__pad_579C[23348]; /*0x4974c8*/
  if ( a5 <= 0 ) /*0x4974d5*/
  {
    v19 = aP3; /*0x497506*/
  }
  else
  {
    do /*0x4974ea*/
    {
      if ( *(_BYTE *)a3++ ) /*0x4974d7*/
        --result; /*0x4974e7*/
      else
        result -= *(unsigned __int8 *)a3++; /*0x4974e2*/
    }
    while ( result > 0 ); /*0x4974ea*/
    v18 = -result; /*0x4974f0*/
    v19 = (RLEBlitTransLucent75ZReadWrite_G *)((char *)aP3 - v18); /*0x4974f2*/
    v14 = a2 + 2 * v18; /*0x4974f4*/
    result = (int)&a6[v18]; /*0x4974f7*/
    if ( (unsigned int)result >= *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[23348] + 28) ) /*0x4974fd*/
      result -= *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[23348] + 32); /*0x4974ff*/
    v12 = (unsigned __int16 *)result; /*0x497502*/
  }
  while ( (int)v19 > 0 ) /*0x49750c*/
  {
    v20 = *(_BYTE *)a3++; /*0x497512*/
    aP3a = v20; /*0x497517*/
    a6a = (unsigned __int16 *)a3; /*0x49751b*/
    if ( v20 ) /*0x49751f*/
    {
      result = arg10 - *a10; /*0x497540*/
      if ( result >= *v12 ) /*0x497549*/
      {
        v15 = *(TacticalMap **)&stru_87C374.__pad_579C[23348]; /*0x4975a0*/
        ++a10; /*0x4975a6*/
        v14 += 2; /*0x4975a7*/
        ++v12; /*0x4975aa*/
      }
      else
      {
        v14 += 2; /*0x497559*/
        LOWORD(a3) = *((_WORD *)this + 4); /*0x49755c*/
        v21 = *((_DWORD *)this + 1); /*0x497560*/
        ++v12; /*0x497563*/
        v22 = *(unsigned __int16 *)(v21 + 2 * aP3a); /*0x497566*/
        LOWORD(v21) = *(_WORD *)(v14 - 2) >> 2; /*0x49756e*/
        LOWORD(v22) = (unsigned __int16)v22 >> 2; /*0x497574*/
        v23 = 3 * (a3 & v21) + (a3 & v22); /*0x49757d*/
        *(_WORD *)(v14 - 2) = v23; /*0x497583*/
        a3 = (unsigned int)a6a; /*0x497587*/
        LOWORD(v23) = *a10; /*0x49758b*/
        result = arg10 - v23; /*0x497590*/
        ++a10; /*0x497592*/
        *(v12 - 1) = arg10 - v23; /*0x497593*/
        v15 = *(TacticalMap **)&stru_87C374.__pad_579C[23348]; /*0x497597*/
      }
      v19 = (RLEBlitTransLucent75ZReadWrite_G *)((char *)v19 - 1); /*0x49759d*/
    }
    else
    {
      LOBYTE(result) = *(_BYTE *)a3++; /*0x497521*/
      result = (unsigned __int8)result; /*0x49752c*/
      v19 = (RLEBlitTransLucent75ZReadWrite_G *)((char *)v19 - (unsigned __int8)result); /*0x497531*/
      v14 += 2 * (unsigned __int8)result; /*0x497533*/
    }
    if ( (unsigned int)v12 >= v15->TacticalMap_field_1C ) /*0x4975b1*/
      v12 = (unsigned __int16 *)((char *)v12 - v15->TacticalMap_field_20); /*0x4975b3*/
  }
  return result; /*0x4975be*/
}


// ==== 0x004975D0  _RLEBlitTransLucent75ZReadWrite_G::CallBlit0  this=?$RLEBlitTransLucent75ZReadWrite@G  sig=csp ====
int __thiscall RLEBlitTransZRemapXlatAlpha_ushort::CallBlit0(
        RLEBlitTransLucent75ZReadWrite_G *this,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12)
{
  return (*((int (__thiscall **)(RLEBlitTransLucent75ZReadWrite_G *, int, int, int, int, int, int, int, int, int, int))this->vfptr /*0x497607*/
          + 1))(
           this,
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           a9,
           a10,
           a11);
}


// ==== 0x00497610  _RLEBlitTransLucent50ZReadWrite_G::Blit_Alpha_ZReadWrite_Lucent50  this=?$RLEBlitTransLucent50ZReadWrite@G  sig=csp ====
unsigned __int16 *__thiscall RLEBlitTransZRemapXlatAlpha_ushort::Blit_Alpha_ZReadWrite_Lucent50(
        RLEBlitTransLucent50ZReadWrite_G *this,
        _WORD *a1,
        unsigned __int8 *a2,
        RLEBlitTransLucent50ZReadWrite_G *aP3,
        int a5,
        int arg10,
        unsigned __int16 *a6,
        int a8,
        int a9,
        int _38,
        char *a10)
{
  unsigned __int16 *result; // eax
  int v12; // esi
  _WORD *v15; // edx
  int v17; // esi
  RLEBlitTransLucent50ZReadWrite_G *v18; // ebp
  unsigned __int8 v19; // bl
  unsigned __int8 v20; // bl
  int v21; // ebx

  result = a6; /*0x497611*/
  v12 = a5; /*0x49761c*/
  v15 = a1; /*0x49762f*/
  if ( a5 <= 0 ) /*0x497631*/
  {
    v18 = aP3; /*0x497667*/
  }
  else
  {
    do /*0x497646*/
    {
      if ( *a2++ ) /*0x497633*/
        --v12; /*0x497643*/
      else
        v12 -= *a2++; /*0x49763e*/
    }
    while ( v12 > 0 ); /*0x497646*/
    v17 = -v12; /*0x497648*/
    v15 = &a1[v17]; /*0x49764a*/
    v18 = (RLEBlitTransLucent50ZReadWrite_G *)((char *)aP3 - v17); /*0x497652*/
    result = &a6[v17]; /*0x497654*/
    if ( (unsigned int)result >= *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[23348] + 28) ) /*0x497660*/
      result = (unsigned __int16 *)((char *)result - *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[23348] + 32)); /*0x497662*/
  }
  while ( (int)v18 > 0 ) /*0x49766d*/
  {
    v19 = *a2++; /*0x497673*/
    if ( v19 ) /*0x497680*/
    {
      if ( arg10 - *a10 >= *result ) /*0x4976b0*/
      {
        ++a10; /*0x4976f9*/
        ++v15; /*0x4976fa*/
        ++result; /*0x4976fd*/
        v18 = (RLEBlitTransLucent50ZReadWrite_G *)((char *)v18 - 1); /*0x497700*/
      }
      else
      {
        ++result; /*0x4976c0*/
        *v15 = (*(_WORD *)(this + 2) & (*v15 >> 1)) /*0x4976e1*/
             + (*(_WORD *)(this + 2) & (*(_WORD *)(*((_DWORD *)this + 1) + 2 * v19) >> 1));
        *(result - 1) = arg10 - *a10++; /*0x4976ee*/
        v18 = (RLEBlitTransLucent50ZReadWrite_G *)((char *)v18 - 1); /*0x4976f3*/
        ++v15; /*0x4976f4*/
      }
    }
    else
    {
      v20 = *a2++; /*0x497682*/
      v18 = (RLEBlitTransLucent50ZReadWrite_G *)((char *)v18 - v20); /*0x497693*/
      a10 += v20; /*0x497695*/
      v21 = 2 * v20; /*0x497697*/
      v15 = (_WORD *)((char *)v15 + v21); /*0x49769a*/
      result = (unsigned __int16 *)((char *)result + v21); /*0x49769c*/
    }
    if ( (unsigned int)result >= *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[23348] + 28) ) /*0x49770a*/
      result = (unsigned __int16 *)((char *)result - *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[23348] + 32)); /*0x49770c*/
  }
  return result; /*0x497717*/
}


// ==== 0x00497720  _RLEBlitTransLucent50ZReadWrite_G::CallBlit0_0  this=?$RLEBlitTransLucent50ZReadWrite@G  sig=csp ====
int __thiscall RLEBlitTransZRemapXlatAlpha_ushort::CallBlit0_0(
        RLEBlitTransLucent50ZReadWrite_G *this,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12)
{
  return (*((int (__thiscall **)(RLEBlitTransLucent50ZReadWrite_G *, int, int, int, int, int, int, int, int, int, int))this->vfptr /*0x497757*/
          + 1))(
           this,
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           a9,
           a10,
           a11);
}


// ==== 0x00497760  _RLEBlitTransLucent25ZReadWrite_G::Blit_Alpha_ZReadWrite  this=?$RLEBlitTransLucent25ZReadWrite@G  sig=csp ====
int __thiscall RLEBlitTransZRemapXlatAlpha_ushort::Blit_Alpha_ZReadWrite(
        RLEBlitTransLucent25ZReadWrite_G *this,
        int a2,
        unsigned int a3,
        RLEBlitTransLucent25ZReadWrite_G *aP3,
        int a5,
        int arg10,
        unsigned __int16 *a6,
        int a8,
        int a9,
        int _38,
        char *a10)
{
  int result; // eax
  unsigned __int16 *v12; // edx
  int v14; // esi
  TacticalMap *v15; // ecx
  int v18; // eax
  RLEBlitTransLucent25ZReadWrite_G *v19; // ebx
  unsigned __int8 v20; // al
  int v21; // eax
  unsigned int v22; // eax
  int v23; // ecx
  unsigned int v24; // eax
  unsigned int v25; // ecx
  unsigned __int8 aP3a; // [esp+20h] [ebp+Ch]
  unsigned __int16 *a6a; // [esp+2Ch] [ebp+18h]

  result = a5; /*0x497761*/
  v12 = a6; /*0x497765*/
  v14 = a2; /*0x497770*/
  v15 = *(TacticalMap **)&stru_87C374.__pad_579C[23348]; /*0x497778*/
  if ( a5 <= 0 ) /*0x497785*/
  {
    v19 = aP3; /*0x4977b6*/
  }
  else
  {
    do /*0x49779a*/
    {
      if ( *(_BYTE *)a3++ ) /*0x497787*/
        --result; /*0x497797*/
      else
        result -= *(unsigned __int8 *)a3++; /*0x497792*/
    }
    while ( result > 0 ); /*0x49779a*/
    v18 = -result; /*0x4977a0*/
    v19 = (RLEBlitTransLucent25ZReadWrite_G *)((char *)aP3 - v18); /*0x4977a2*/
    v14 = a2 + 2 * v18; /*0x4977a4*/
    result = (int)&a6[v18]; /*0x4977a7*/
    if ( (unsigned int)result >= *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[23348] + 28) ) /*0x4977ad*/
      result -= *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[23348] + 32); /*0x4977af*/
    v12 = (unsigned __int16 *)result; /*0x4977b2*/
  }
  while ( (int)v19 > 0 ) /*0x4977bc*/
  {
    v20 = *(_BYTE *)a3++; /*0x4977c2*/
    aP3a = v20; /*0x4977c7*/
    a6a = (unsigned __int16 *)a3; /*0x4977cb*/
    if ( v20 ) /*0x4977cf*/
    {
      result = arg10 - *a10; /*0x4977f0*/
      if ( result >= *v12 ) /*0x4977f9*/
      {
        v15 = *(TacticalMap **)&stru_87C374.__pad_579C[23348]; /*0x497850*/
        ++a10; /*0x497856*/
        v14 += 2; /*0x497857*/
        ++v12; /*0x49785a*/
      }
      else
      {
        v14 += 2; /*0x497809*/
        LOWORD(a3) = *((_WORD *)this + 4); /*0x49780c*/
        v21 = *((_DWORD *)this + 1); /*0x497810*/
        ++v12; /*0x497813*/
        LOWORD(v21) = *(_WORD *)(v21 + 2 * aP3a) >> 2; /*0x49781a*/
        v22 = a3 & v21; /*0x49781e*/
        v23 = 3 * v22; /*0x497820*/
        LOWORD(v22) = *(_WORD *)(v14 - 2) >> 2; /*0x497827*/
        v24 = a3 & v22; /*0x49782b*/
        a3 = (unsigned int)a6a; /*0x49782d*/
        v25 = v24 + v23; /*0x497831*/
        *(_WORD *)(v14 - 2) = v25; /*0x497837*/
        LOWORD(v25) = *a10; /*0x49783b*/
        result = arg10 - v25; /*0x497840*/
        ++a10; /*0x497842*/
        *(v12 - 1) = arg10 - v25; /*0x497843*/
        v15 = *(TacticalMap **)&stru_87C374.__pad_579C[23348]; /*0x497847*/
      }
      v19 = (RLEBlitTransLucent25ZReadWrite_G *)((char *)v19 - 1); /*0x49784d*/
    }
    else
    {
      LOBYTE(result) = *(_BYTE *)a3++; /*0x4977d1*/
      result = (unsigned __int8)result; /*0x4977dc*/
      v19 = (RLEBlitTransLucent25ZReadWrite_G *)((char *)v19 - (unsigned __int8)result); /*0x4977e1*/
      v14 += 2 * (unsigned __int8)result; /*0x4977e3*/
    }
    if ( (unsigned int)v12 >= v15->TacticalMap_field_1C ) /*0x497861*/
      v12 = (unsigned __int16 *)((char *)v12 - v15->TacticalMap_field_20); /*0x497863*/
  }
  return result; /*0x49786e*/
}


// ==== 0x00497880  _RLEBlitTransLucent25ZReadWrite_G::CallBlit0_1  this=?$RLEBlitTransLucent25ZReadWrite@G  sig=csp ====
int __thiscall RLEBlitTransZRemapXlatAlpha_ushort::CallBlit0_1(
        RLEBlitTransLucent25ZReadWrite_G *this,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12)
{
  return (*((int (__thiscall **)(RLEBlitTransLucent25ZReadWrite_G *, int, int, int, int, int, int, int, int, int, int))this->vfptr /*0x4978b7*/
          + 1))(
           this,
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           a9,
           a10,
           a11);
}


// ==== 0x004978C0  _RLEBlitTransXlatAlpha_G::AddRef  this=RLEBlitTransXlatAlpha_ushort  sig=csp ====
unsigned __int16 *__thiscall RLEBlitTransXlatAlpha_ushort::AddRef(
        _DWORD *this,
        int arg0,
        unsigned __int8 *a2,
        int a4,
        RLEBlitTransXlatAlpha_ushort *aP4,
        int a6,
        int _2C,
        unsigned __int16 *a7,
        int a9,
        int a10,
        int a11)
{
  unsigned __int16 *result; // eax
  int v13; // edi
  int v14; // edx
  RLEBlitTransXlatAlpha_ushort *v15; // esi
  TacticalClass *v16; // edx
  int v18; // esi
  int v19; // ebx
  unsigned __int8 v20; // cl
  unsigned __int8 v21; // cl
  int v22; // esi
  int v23; // ecx
  unsigned __int8 *a2a; // [esp+1Ch] [ebp+8h]

  result = a7; /*0x4978d0*/
  v13 = arg0; /*0x4978dd*/
  v14 = (261 * (a9 <= 0 ? 0 : a9)) >> 11;
  if ( v14 > 254 ) /*0x4978f8*/
    v14 = 254; /*0x4978fa*/
  v15 = aP4; /*0x497902*/
  a2a = (unsigned __int8 *)(this->RLEBlitTransXlatAlpha_ushort_field_0x08 + (v14 << 9)); /*0x49790b*/
  v16 = *(TacticalClass **)&stru_87C374.__pad_14B0[4224]; /*0x49790f*/
  if ( (int)aP4 <= 0 ) /*0x497917*/
  {
    v19 = a4; /*0x49794e*/
  }
  else
  {
    do /*0x49792e*/
    {
      if ( *a2++ ) /*0x497919*/
        v15 = (RLEBlitTransXlatAlpha_ushort *)((char *)v15 - 1); /*0x49792b*/
      else
        v15 = (RLEBlitTransXlatAlpha_ushort *)((char *)v15 - *a2++); /*0x497926*/
    }
    while ( (int)v15 > 0 ); /*0x49792e*/
    v18 = -(int)v15; /*0x49793b*/
    v19 = a4 - v18; /*0x49793d*/
    result = &a7[v18]; /*0x49793f*/
    v13 = arg0 + 2 * v18; /*0x497942*/
    if ( (unsigned int)result >= *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_14B0[4224] + 28) ) /*0x497947*/
      result = (unsigned __int16 *)((char *)result - *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_14B0[4224] + 32)); /*0x497949*/
  }
  while ( v19 > 0 ) /*0x497954*/
  {
    v20 = *a2++; /*0x497956*/
    if ( v20 ) /*0x497960*/
    {
      v13 += 2; /*0x497989*/
      v23 = v20 | *(unsigned __int16 *)&a2a[2 * *result]; /*0x49799a*/
      --v19; /*0x4979a0*/
      ++result; /*0x4979a1*/
      *(_WORD *)(v13 - 2) = *(_WORD *)(this->RLEBlitTransXlatAlpha_ushort_field_0x04 + 2 * v23); /*0x4979ab*/
      v16 = *(TacticalClass **)&stru_87C374.__pad_14B0[4224]; /*0x4979af*/
    }
    else
    {
      v21 = *a2++; /*0x497962*/
      v19 -= v21; /*0x497974*/
      v22 = 2 * v21; /*0x497976*/
      v13 += v22; /*0x497978*/
      result = (unsigned __int16 *)((char *)result + v22); /*0x49797a*/
    }
    if ( (unsigned int)result >= v16->referenceCount ) /*0x4979b8*/
      result = (unsigned __int16 *)((char *)result - (unsigned int)v16->NeedsSaveOrLink); /*0x4979ba*/
  }
  return result; /*0x4979c1*/
}


// ==== 0x004979D0  _RLEBlitTransXlatAlpha_G::Release  this=RLEBlitTransXlatAlpha_ushort  sig=csp ====
int __thiscall RLEBlitTransXlatAlpha_ushort::_vt02(
        void *this,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12)
{
  return (*(int (__thiscall **)(void *, int, int, int, int, int, int, int, int, int, int))(this->RLEBlitTransXlatAlpha_ushort_field_0x04)( /*0x497a07*/
           this,
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           a9,
           a10,
           a11);
}


// ==== 0x00497A10  _RLEBlitTransZRemapXlatAlpha_G::AddRef  this=RLEBlitTransZRemapXlatAlpha_ushort  sig=csp ====
unsigned __int16 *__thiscall RLEBlitTransZRemapXlatAlpha_ushort::AddRef(
        int this,
        int arg0,
        unsigned __int8 *a2,
        int a4,
        RLEBlitTransZRemapXlatAlpha_ushort *aP4,
        int a6,
        int _2C,
        unsigned __int16 *a7,
        int a9,
        int a10,
        int a11)
{
  unsigned __int16 *result; // eax
  int v14; // edx
  RLEBlitTransZRemapXlatAlpha_ushort *v15; // edx
  int v17; // edx
  int v18; // ebx
  unsigned __int8 v19; // dl
  unsigned __int8 v20; // dl
  int v21; // esi
  int v22; // esi
  int v23; // [esp+18h] [ebp+4h]
  unsigned __int8 *a2a; // [esp+1Ch] [ebp+8h]

  result = a7; /*0x497a2c*/
  a2a = **(unsigned __int8 ***)(this + 4); /*0x497a30*/
  v14 = (261 * (a9 <= 0 ? 0 : a9)) >> 11;
  if ( v14 > 254 ) /*0x497a51*/
    v14 = 254; /*0x497a53*/
  v23 = *(_DWORD *)(this + 12) + (v14 << 9); /*0x497a60*/
  v15 = aP4; /*0x497a64*/
  if ( (int)aP4 <= 0 ) /*0x497a6a*/
  {
    v18 = a4; /*0x497aa5*/
  }
  else
  {
    do /*0x497a81*/
    {
      if ( *a2++ ) /*0x497a6c*/
        v15 = (RLEBlitTransZRemapXlatAlpha_ushort *)((char *)v15 - 1); /*0x497a7e*/
      else
        v15 = (RLEBlitTransZRemapXlatAlpha_ushort *)((char *)v15 - *a2++); /*0x497a79*/
    }
    while ( (int)v15 > 0 ); /*0x497a81*/
    v17 = -(int)v15; /*0x497a91*/
    v18 = a4 - v17; /*0x497a93*/
    arg0 += 2 * v17; /*0x497a95*/
    result = &a7[v17]; /*0x497a98*/
    if ( (unsigned int)result >= *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_14B0[4224] + 28) ) /*0x497a9e*/
      result = (unsigned __int16 *)((char *)result - *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_14B0[4224] + 32)); /*0x497aa0*/
  }
  while ( v18 > 0 ) /*0x497aab*/
  {
    v19 = *a2++; /*0x497ab1*/
    if ( v19 ) /*0x497abf*/
    {
      arg0 += 2; /*0x497ae8*/
      v22 = a2a[v19] | *(unsigned __int16 *)(v23 + 2 * *result); /*0x497b03*/
      --v18; /*0x497b09*/
      ++result; /*0x497b0a*/
      *(_WORD *)(arg0 - 2) = *(_WORD *)(*(_DWORD *)(this + 8) + 2 * v22); /*0x497b14*/
    }
    else
    {
      v20 = *a2++; /*0x497ac1*/
      v18 -= v20; /*0x497ad3*/
      v21 = 2 * v20; /*0x497ad5*/
      arg0 += v21; /*0x497ad7*/
      result = (unsigned __int16 *)((char *)result + v21); /*0x497ad9*/
    }
    if ( (unsigned int)result >= *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_14B0[4224] + 28) ) /*0x497b21*/
      result = (unsigned __int16 *)((char *)result - *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_14B0[4224] + 32)); /*0x497b23*/
  }
  return result; /*0x497b2a*/
}


// ==== 0x00497B40  _RLEBlitTransZRemapXlatAlpha_G::Release  this=RLEBlitTransZRemapXlatAlpha_ushort  sig=csp ====
int __thiscall RLEBlitTransZRemapXlatAlpha_ushort::_vt02(
        void *this,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12)
{
  return (*(int (__thiscall **)(void *, int, int, int, int, int, int, int, int, int, int))(this->RLEBlitTransZRemapXlatAlpha_ushort_field_0x04)( /*0x497b77*/
           this,
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           a9,
           a10,
           a11);
}


// ==== 0x00497B80  _RLEBlitTransLucent75Alpha_G::AddRef  this=RLEBlitTransLucent75Alpha_ushort  sig=csp ====
int __thiscall RLEBlitTransLucent75Alpha_ushort::AddRef(
        _DWORD *this,
        int arg0,
        unsigned __int8 *a2,
        int a4,
        RLEBlitTransLucent75Alpha_ushort *aP4,
        int a6,
        int _2C,
        unsigned __int16 *a7,
        int a9,
        int a10,
        int a11)
{
  _DWORD *v11; // ebp
  unsigned __int16 *v12; // edx
  int v13; // esi
  int v15; // eax
  TacticalClass *v16; // ecx
  int result; // eax
  int v19; // eax
  int v20; // ebx
  unsigned __int8 v21; // al
  unsigned __int8 *v22; // edi
  unsigned __int8 v23; // al
  int v24; // eax
  unsigned __int16 v25; // cx
  int v26; // eax
  __int16 v27; // cx
  unsigned __int8 *a2a; // [esp+1Ch] [ebp+8h]
  unsigned __int8 *v30; // [esp+20h] [ebp+Ch]

  v11 = this; /*0x497b87*/
  v12 = a7; /*0x497b8b*/
  v13 = arg0; /*0x497b98*/
  v15 = (261 * (a9 <= 0 ? 0 : a9)) >> 11;
  if ( v15 > 254 ) /*0x497bb7*/
    v15 = 254; /*0x497bb9*/
  v16 = *(TacticalClass **)&stru_87C374.__pad_14B0[4224]; /*0x497bc1*/
  a2a = (unsigned __int8 *)(v11[2] + (v15 << 9)); /*0x497bcc*/
  result = (int)aP4; /*0x497bd0*/
  if ( (int)aP4 <= 0 ) /*0x497bd6*/
  {
    v20 = a4; /*0x497c0b*/
  }
  else
  {
    do /*0x497beb*/
    {
      if ( *a2++ ) /*0x497bd8*/
        --result; /*0x497be8*/
      else
        result -= *a2++; /*0x497be3*/
    }
    while ( result > 0 ); /*0x497beb*/
    v19 = -result; /*0x497bf5*/
    v20 = a4 - v19; /*0x497bf7*/
    v13 = arg0 + 2 * v19; /*0x497bf9*/
    result = (int)&a7[v19]; /*0x497bfc*/
    if ( (unsigned int)result >= *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_14B0[4224] + 28) ) /*0x497c02*/
      result -= *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_14B0[4224] + 32); /*0x497c04*/
    v12 = (unsigned __int16 *)result; /*0x497c07*/
  }
  while ( v20 > 0 ) /*0x497c11*/
  {
    v21 = *a2; /*0x497c17*/
    v22 = a2 + 1; /*0x497c19*/
    v30 = v22; /*0x497c20*/
    if ( v21 ) /*0x497c24*/
    {
      LOWORD(v22) = *((_WORD *)v11 + 6); /*0x497c40*/
      v13 += 2; /*0x497c4f*/
      v11 = this; /*0x497c5b*/
      v24 = v21 | *(unsigned __int16 *)&a2a[2 * *v12]; /*0x497c65*/
      v25 = *(_WORD *)(this->RLEBlitTransLucent75Alpha_ushort_field_0x04 + 2 * v24); /*0x497c6a*/
      LOWORD(v24) = *(_WORD *)(v13 - 2) >> 2; /*0x497c72*/
      v26 = (unsigned int)v22 & v24; /*0x497c76*/
      v27 = (unsigned __int16)v22 & (v25 >> 2); /*0x497c7c*/
      a2 = v30; /*0x497c7e*/
      result = 3 * v26; /*0x497c82*/
      --v20; /*0x497c87*/
      *(_WORD *)(v13 - 2) = result + v27; /*0x497c88*/
      v16 = *(TacticalClass **)&stru_87C374.__pad_14B0[4224]; /*0x497c8c*/
      ++v12; /*0x497c92*/
    }
    else
    {
      v23 = *v22; /*0x497c26*/
      a2 = v22 + 1; /*0x497c28*/
      v20 -= v23; /*0x497c36*/
      result = 2 * v23; /*0x497c38*/
      v13 += result; /*0x497c3a*/
      v12 = (unsigned __int16 *)((char *)v12 + result); /*0x497c3c*/
    }
    if ( (unsigned int)v12 >= v16->referenceCount ) /*0x497c98*/
      v12 = (unsigned __int16 *)((char *)v12 - (unsigned int)v16->NeedsSaveOrLink); /*0x497c9a*/
  }
  return result; /*0x497ca5*/
}


// ==== 0x00497CB0  _RLEBlitTransLucent75Alpha_G::Release  this=RLEBlitTransLucent75Alpha_ushort  sig=csp ====
int __thiscall RLEBlitTransLucent75Alpha_ushort::_vt02(
        void *this,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12)
{
  return (*(int (__thiscall **)(void *, int, int, int, int, int, int, int, int, int, int))(this->RLEBlitTransLucent75Alpha_ushort_field_0x04)( /*0x497ce7*/
           this,
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           a9,
           a10,
           a11);
}


// ==== 0x00497CF0  _RLEBlitTransLucent50Alpha_G::AddRef  this=RLEBlitTransLucent50Alpha_ushort  sig=csp ====
unsigned __int16 *__thiscall RLEBlitTransLucent50Alpha_ushort::AddRef(
        int this,
        int arg0,
        unsigned __int8 *a2,
        int a4,
        RLEBlitTransLucent50Alpha_ushort *aP4,
        int a6,
        int _2C,
        unsigned __int16 *a7,
        int a9,
        int a10,
        int a11)
{
  int v12; // esi
  unsigned __int16 *result; // eax
  int v14; // edx
  RLEBlitTransLucent50Alpha_ushort *v15; // edi
  int v17; // edi
  int v18; // ebx
  unsigned __int8 v19; // dl
  unsigned __int8 v20; // dl
  int v21; // edi
  __int16 v22; // di
  RLEBlitTransLucent50Alpha_ushort *v23; // [esp+10h] [ebp-4h]
  unsigned __int8 *a2a; // [esp+1Ch] [ebp+8h]

  v12 = arg0; /*0x497d07*/
  result = a7; /*0x497d0d*/
  v23 = (RLEBlitTransLucent50Alpha_ushort *)this; /*0x497d16*/
  v14 = (261 * (a9 <= 0 ? 0 : a9)) >> 11;
  if ( v14 > 254 ) /*0x497d26*/
    v14 = 254; /*0x497d28*/
  v15 = aP4; /*0x497d35*/
  a2a = (unsigned __int8 *)(*(_DWORD *)(this + 8) + (v14 << 9)); /*0x497d39*/
  if ( (int)aP4 <= 0 ) /*0x497d45*/
  {
    v18 = a4; /*0x497d7a*/
  }
  else
  {
    do /*0x497d5c*/
    {
      if ( *a2++ ) /*0x497d47*/
        v15 = (RLEBlitTransLucent50Alpha_ushort *)((char *)v15 - 1); /*0x497d59*/
      else
        v15 = (RLEBlitTransLucent50Alpha_ushort *)((char *)v15 - *a2++); /*0x497d54*/
    }
    while ( (int)v15 > 0 ); /*0x497d5c*/
    v17 = -(int)v15; /*0x497d66*/
    v18 = a4 - v17; /*0x497d68*/
    v12 = arg0 + 2 * v17; /*0x497d6a*/
    result = &a7[v17]; /*0x497d6d*/
    if ( (unsigned int)result >= *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_14B0[4224] + 28) ) /*0x497d73*/
      result = (unsigned __int16 *)((char *)result - *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_14B0[4224] + 32)); /*0x497d75*/
  }
  while ( v18 > 0 ) /*0x497d80*/
  {
    v19 = *a2++; /*0x497d86*/
    if ( v19 ) /*0x497d94*/
    {
      v22 = *(_WORD *)(this + 12); /*0x497db2*/
      v12 += 2; /*0x497dc1*/
      this = (int)v23; /*0x497dd5*/
      *(_WORD *)(v12 - 2) = (v22 & (*(_WORD *)(v12 - 2) >> 1)) /*0x497df5*/
                          + (v22
                           & (*(_WORD *)(v23->RLEBlitTransLucent50Alpha_ushort_field_0x04
                                       + 2 * (v19 | *(unsigned __int16 *)&a2a[2 * *result])) >> 1));
      --v18; /*0x497df9*/
      ++result; /*0x497dfa*/
    }
    else
    {
      v20 = *a2++; /*0x497d96*/
      v18 -= v20; /*0x497da8*/
      v21 = 2 * v20; /*0x497daa*/
      v12 += v21; /*0x497dac*/
      result = (unsigned __int16 *)((char *)result + v21); /*0x497dae*/
    }
    if ( (unsigned int)result >= *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_14B0[4224] + 28) ) /*0x497e06*/
      result = (unsigned __int16 *)((char *)result - *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_14B0[4224] + 32)); /*0x497e08*/
  }
  return result; /*0x497e13*/
}


// ==== 0x00497E20  _RLEBlitTransLucent50Alpha_G::Release  this=RLEBlitTransLucent50Alpha_ushort  sig=csp ====
int __thiscall RLEBlitTransLucent50Alpha_ushort::_vt02(
        void *this,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12)
{
  return (*(int (__thiscall **)(void *, int, int, int, int, int, int, int, int, int, int))(this->RLEBlitTransLucent50Alpha_ushort_field_0x04)( /*0x497e57*/
           this,
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           a9,
           a10,
           a11);
}


// ==== 0x00497E60  _RLEBlitTransLucent25Alpha_G::AddRef  this=RLEBlitTransLucent25Alpha_ushort  sig=csp ====
int __thiscall RLEBlitTransLucent25Alpha_ushort::AddRef(
        _DWORD *this,
        int arg0,
        unsigned __int8 *a2,
        int a4,
        RLEBlitTransLucent25Alpha_ushort *aP4,
        int a6,
        int _2C,
        unsigned __int16 *a7,
        int a9,
        int a10,
        int a11)
{
  _DWORD *v11; // ebp
  unsigned __int16 *v12; // edx
  int v13; // esi
  int v15; // eax
  TacticalClass *v16; // ecx
  int result; // eax
  int v19; // eax
  int v20; // ebx
  unsigned __int8 v21; // al
  unsigned __int8 *v22; // edi
  unsigned __int8 v23; // al
  int v24; // eax
  int v25; // ecx
  int v26; // eax
  int v27; // ecx
  unsigned __int8 *a2a; // [esp+1Ch] [ebp+8h]
  unsigned __int8 *v30; // [esp+20h] [ebp+Ch]

  v11 = this; /*0x497e67*/
  v12 = a7; /*0x497e6b*/
  v13 = arg0; /*0x497e78*/
  v15 = (261 * (a9 <= 0 ? 0 : a9)) >> 11;
  if ( v15 > 254 ) /*0x497e97*/
    v15 = 254; /*0x497e99*/
  v16 = *(TacticalClass **)&stru_87C374.__pad_14B0[4224]; /*0x497ea1*/
  a2a = (unsigned __int8 *)(v11[2] + (v15 << 9)); /*0x497eac*/
  result = (int)aP4; /*0x497eb0*/
  if ( (int)aP4 <= 0 ) /*0x497eb6*/
  {
    v20 = a4; /*0x497eeb*/
  }
  else
  {
    do /*0x497ecb*/
    {
      if ( *a2++ ) /*0x497eb8*/
        --result; /*0x497ec8*/
      else
        result -= *a2++; /*0x497ec3*/
    }
    while ( result > 0 ); /*0x497ecb*/
    v19 = -result; /*0x497ed5*/
    v20 = a4 - v19; /*0x497ed7*/
    v13 = arg0 + 2 * v19; /*0x497ed9*/
    result = (int)&a7[v19]; /*0x497edc*/
    if ( (unsigned int)result >= *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_14B0[4224] + 28) ) /*0x497ee2*/
      result -= *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_14B0[4224] + 32); /*0x497ee4*/
    v12 = (unsigned __int16 *)result; /*0x497ee7*/
  }
  while ( v20 > 0 ) /*0x497ef1*/
  {
    v21 = *a2; /*0x497ef7*/
    v22 = a2 + 1; /*0x497ef9*/
    v30 = v22; /*0x497f00*/
    if ( v21 ) /*0x497f04*/
    {
      LOWORD(v22) = *((_WORD *)v11 + 6); /*0x497f20*/
      v13 += 2; /*0x497f2f*/
      v11 = this; /*0x497f3b*/
      v24 = v21 | *(unsigned __int16 *)&a2a[2 * *v12]; /*0x497f45*/
      v25 = this->RLEBlitTransLucent25Alpha_ushort_field_0x04; /*0x497f47*/
      LOWORD(v24) = *(_WORD *)(v25 + 2 * v24) >> 2; /*0x497f52*/
      LOWORD(v25) = *(_WORD *)(v13 - 2) >> 2; /*0x497f58*/
      v26 = 3 * ((unsigned int)v22 & v24); /*0x497f5c*/
      v27 = (unsigned int)v22 & v25; /*0x497f5f*/
      a2 = v30; /*0x497f61*/
      result = v27 + v26; /*0x497f65*/
      *(_WORD *)(v13 - 2) = result; /*0x497f67*/
      v16 = *(TacticalClass **)&stru_87C374.__pad_14B0[4224]; /*0x497f6b*/
      --v20; /*0x497f71*/
      ++v12; /*0x497f72*/
    }
    else
    {
      v23 = *v22; /*0x497f06*/
      a2 = v22 + 1; /*0x497f08*/
      v20 -= v23; /*0x497f16*/
      result = 2 * v23; /*0x497f18*/
      v13 += result; /*0x497f1a*/
      v12 = (unsigned __int16 *)((char *)v12 + result); /*0x497f1c*/
    }
    if ( (unsigned int)v12 >= v16->referenceCount ) /*0x497f78*/
      v12 = (unsigned __int16 *)((char *)v12 - (unsigned int)v16->NeedsSaveOrLink); /*0x497f7a*/
  }
  return result; /*0x497f85*/
}


// ==== 0x00497F90  _RLEBlitTransLucent25Alpha_G::Release  this=RLEBlitTransLucent25Alpha_ushort  sig=csp ====
int __thiscall RLEBlitTransLucent25Alpha_ushort::_vt02(
        void *this,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12)
{
  return (*(int (__thiscall **)(void *, int, int, int, int, int, int, int, int, int, int))(this->RLEBlitTransLucent25Alpha_ushort_field_0x04)( /*0x497fc7*/
           this,
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           a9,
           a10,
           a11);
}


// ==== 0x00497FD0  _RLEBlitTransXlatAlphaZRead_G::AddRef  this=RLEBlitTransXlatAlphaZRead_ushort  sig=csp ====
int __thiscall RLEBlitTransXlatAlphaZRead_ushort::AddRef(
        _DWORD *this,
        int arg0,
        unsigned __int8 *a2,
        int a4,
        RLEBlitTransXlatAlphaZRead_ushort *aP4,
        int a6,
        unsigned int arg14,
        unsigned __int16 *a7,
        int a9,
        int _38,
        char *a10)
{
  int v12; // ebp
  unsigned int v13; // ebx
  unsigned __int16 *v14; // esi
  int v15; // eax
  RLEBlitTransXlatAlphaZRead_ushort *v16; // edx
  int v18; // edx
  int result; // eax
  unsigned __int16 *v20; // edx
  char *v21; // ecx
  unsigned __int8 v22; // dl
  unsigned __int8 *v23; // edi
  int v24; // edx
  int v25; // edi
  unsigned __int8 *v28; // [esp+2Ch] [ebp+18h]
  char *a10a; // [esp+3Ch] [ebp+28h]

  v12 = arg0; /*0x497fef*/
  v13 = arg14; /*0x497ff5*/
  v14 = a7; /*0x497ffb*/
  v15 = (261 * (a9 <= 0 ? 0 : a9)) >> 11;
  if ( v15 > 254 ) /*0x498013*/
    v15 = 254; /*0x498015*/
  v16 = aP4; /*0x49801d*/
  a10a = (char *)(this->RLEBlitTransXlatAlphaZRead_ushort_field_0x08 + (v15 << 9)); /*0x49802e*/
  if ( (int)aP4 <= 0 ) /*0x498032*/
  {
    result = a4; /*0x498082*/
  }
  else
  {
    do /*0x498047*/
    {
      if ( *a2++ ) /*0x498034*/
        v16 = (RLEBlitTransXlatAlphaZRead_ushort *)((char *)v16 - 1); /*0x498044*/
      else
        v16 = (RLEBlitTransXlatAlphaZRead_ushort *)((char *)v16 - *a2++); /*0x49803f*/
    }
    while ( (int)v16 > 0 ); /*0x498047*/
    v18 = -(int)v16; /*0x498051*/
    v12 = arg0 + 2 * v18; /*0x498053*/
    v13 = arg14 + 2 * v18; /*0x49805a*/
    result = a4 - v18; /*0x498060*/
    if ( v13 >= *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[23348] + 28) ) /*0x498064*/
      v13 -= *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[23348] + 32); /*0x498066*/
    v20 = &a7[v18]; /*0x49806d*/
    if ( (unsigned int)v20 >= *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_14B0[4224] + 28) ) /*0x498079*/
      v20 = (unsigned __int16 *)((char *)v20 - *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_14B0[4224] + 32)); /*0x49807b*/
    v14 = v20; /*0x49807e*/
  }
  if ( result > 0 ) /*0x498088*/
  {
    v21 = a10; /*0x49808e*/
    while ( 1 ) /*0x498098*/
    {
      v22 = *a2; /*0x498098*/
      v23 = a2 + 1; /*0x49809a*/
      v28 = v23; /*0x4980a1*/
      if ( v22 ) /*0x4980a5*/
      {
        v13 += 2; /*0x4980d2*/
        v25 = a6 - *v21++; /*0x4980d5*/
        v12 += 2; /*0x4980f1*/
        --result; /*0x498108*/
        if ( v25 < *(unsigned __int16 *)(v13 - 2) ) /*0x4980e4*/
          *(_WORD *)(v12 - 2) = *(_WORD *)(this->RLEBlitTransXlatAlphaZRead_ushort_field_0x04 + 2 * (v22 | *(unsigned __int16 *)&a10a[2 * *v14])); /*0x498114*/
        ++v14; /*0x49811e*/
      }
      else
      {
        v28 = v23 + 1; /*0x4980ae*/
        v24 = *v23; /*0x4980b6*/
        result -= v24; /*0x4980bc*/
        v21 += v24; /*0x4980be*/
        v12 += 2 * v24; /*0x4980c3*/
        v13 += 2 * v24; /*0x4980c5*/
        v14 += v24; /*0x4980c7*/
      }
      if ( v13 >= *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[23348] + 28) ) /*0x49812a*/
        v13 -= *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[23348] + 32); /*0x49812c*/
      if ( (unsigned int)v14 >= *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_14B0[4224] + 28) ) /*0x498138*/
        v14 = (unsigned __int16 *)((char *)v14 - *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_14B0[4224] + 32)); /*0x49813a*/
      if ( result <= 0 ) /*0x49813f*/
        break; /*0x49813f*/
      a2 = v28; /*0x498094*/
    }
  }
  return result; /*0x498145*/
}


// ==== 0x00498150  _RLEBlitTransXlatAlphaZRead_G::Release  this=RLEBlitTransXlatAlphaZRead_ushort  sig=csp ====
int __thiscall RLEBlitTransXlatAlphaZRead_ushort::Release(
        _DWORD *this,
        int arg0,
        unsigned __int8 *a2,
        int a4,
        RLEBlitTransXlatAlphaZRead_ushort *aP4,
        int a6,
        unsigned int arg14,
        unsigned __int16 *a7,
        int a9,
        int _38,
        char *a10,
        __int16 a12)
{
  int v13; // ebp
  unsigned int v14; // ebx
  unsigned __int16 *v15; // esi
  int v16; // eax
  RLEBlitTransXlatAlphaZRead_ushort *v17; // edx
  int v19; // edx
  int result; // eax
  unsigned __int16 *v21; // edx
  char *v22; // ecx
  unsigned __int8 v23; // dl
  unsigned __int8 *v24; // edi
  int v25; // edx
  int v26; // edi
  unsigned __int8 *v29; // [esp+2Ch] [ebp+18h]
  char *a10a; // [esp+3Ch] [ebp+28h]

  v13 = arg0; /*0x49816f*/
  v14 = arg14; /*0x498175*/
  v15 = a7; /*0x49817b*/
  v16 = (261 * (a9 <= 0 ? 0 : a9)) >> 11;
  if ( v16 > 254 ) /*0x498193*/
    v16 = 254; /*0x498195*/
  v17 = aP4; /*0x49819d*/
  a10a = (char *)(this->RLEBlitTransXlatAlphaZRead_ushort_field_0x08 + (v16 << 9)); /*0x4981ae*/
  if ( (int)aP4 <= 0 ) /*0x4981b2*/
  {
    result = a4; /*0x498202*/
  }
  else
  {
    do /*0x4981c7*/
    {
      if ( *a2++ ) /*0x4981b4*/
        v17 = (RLEBlitTransXlatAlphaZRead_ushort *)((char *)v17 - 1); /*0x4981c4*/
      else
        v17 = (RLEBlitTransXlatAlphaZRead_ushort *)((char *)v17 - *a2++); /*0x4981bf*/
    }
    while ( (int)v17 > 0 ); /*0x4981c7*/
    v19 = -(int)v17; /*0x4981d1*/
    v13 = arg0 + 2 * v19; /*0x4981d3*/
    v14 = arg14 + 2 * v19; /*0x4981da*/
    result = a4 - v19; /*0x4981e0*/
    if ( v14 >= *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[23348] + 28) ) /*0x4981e4*/
      v14 -= *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[23348] + 32); /*0x4981e6*/
    v21 = &a7[v19]; /*0x4981ed*/
    if ( (unsigned int)v21 >= *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_14B0[4224] + 28) ) /*0x4981f9*/
      v21 = (unsigned __int16 *)((char *)v21 - *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_14B0[4224] + 32)); /*0x4981fb*/
    v15 = v21; /*0x4981fe*/
  }
  if ( result > 0 ) /*0x498208*/
  {
    v22 = a10; /*0x49820e*/
    while ( 1 ) /*0x498218*/
    {
      v23 = *a2; /*0x498218*/
      v24 = a2 + 1; /*0x49821a*/
      v29 = v24; /*0x498221*/
      if ( v23 ) /*0x498225*/
      {
        v14 += 2; /*0x498252*/
        v26 = a6 - *v22++; /*0x498255*/
        v13 += 2; /*0x498271*/
        --result; /*0x498298*/
        if ( v26 < *(unsigned __int16 *)(v14 - 2) ) /*0x498264*/
          *(_WORD *)(v13 - 2) = a12 | *(_WORD *)(this->RLEBlitTransXlatAlphaZRead_ushort_field_0x04 + 2 * (v23 | *(unsigned __int16 *)&a10a[2 * *v15])); /*0x498299*/
        ++v15; /*0x4982a3*/
      }
      else
      {
        v29 = v24 + 1; /*0x49822e*/
        v25 = *v24; /*0x498236*/
        result -= v25; /*0x49823c*/
        v22 += v25; /*0x49823e*/
        v13 += 2 * v25; /*0x498243*/
        v14 += 2 * v25; /*0x498245*/
        v15 += v25; /*0x498247*/
      }
      if ( v14 >= *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[23348] + 28) ) /*0x4982af*/
        v14 -= *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[23348] + 32); /*0x4982b1*/
      if ( (unsigned int)v15 >= *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_14B0[4224] + 28) ) /*0x4982bd*/
        v15 = (unsigned __int16 *)((char *)v15 - *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_14B0[4224] + 32)); /*0x4982bf*/
      if ( result <= 0 ) /*0x4982c4*/
        break; /*0x4982c4*/
      a2 = v29; /*0x498214*/
    }
  }
  return result; /*0x4982ca*/
}


// ==== 0x004982E0  _RLEBlitTransZRemapXlatAlphaZRead_G::AddRef  this=RLEBlitTransZRemapXlatAlphaZRead_ushort  sig=csp ====
int __thiscall RLEBlitTransZRemapXlatAlphaZRead_ushort::AddRef(
        int this,
        int arg0,
        unsigned __int8 *a2,
        int a4,
        int a5,
        RLEBlitTransZRemapXlatAlphaZRead_ushort *aP5,
        unsigned int arg14,
        unsigned __int16 *a7,
        int a9,
        int _3C,
        char *a10)
{
  int v13; // ebp
  unsigned int v14; // ebx
  unsigned __int16 *v15; // esi
  int v16; // eax
  int v17; // eax
  int v19; // eax
  unsigned __int16 *v20; // eax
  int result; // eax
  unsigned __int8 v22; // al
  int v23; // edi
  char *v24; // edi
  int v25; // [esp+10h] [ebp-8h]
  RLEBlitTransZRemapXlatAlphaZRead_ushort *v26; // [esp+14h] [ebp-4h]
  unsigned __int8 v27; // [esp+1Ch] [ebp+4h]
  char *a10a; // [esp+40h] [ebp+28h]

  v25 = **(_DWORD **)(this + 4); /*0x4982fe*/
  v13 = arg0; /*0x498304*/
  v14 = arg14; /*0x49830e*/
  v15 = a7; /*0x498314*/
  v26 = (RLEBlitTransZRemapXlatAlphaZRead_ushort *)this; /*0x49831a*/
  v16 = (261 * (a9 <= 0 ? 0 : a9)) >> 11;
  if ( v16 > 254 ) /*0x49832e*/
    v16 = 254; /*0x498330*/
  a10a = (char *)(*(_DWORD *)(this + 12) + (v16 << 9)); /*0x49833d*/
  v17 = a5; /*0x498341*/
  if ( a5 > 0 ) /*0x498347*/
  {
    do /*0x49835c*/
    {
      if ( *a2++ ) /*0x498349*/
        --v17; /*0x498359*/
      else
        v17 -= *a2++; /*0x498354*/
    }
    while ( v17 > 0 ); /*0x49835c*/
    v19 = -v17; /*0x498366*/
    v13 = arg0 + 2 * v19; /*0x49836a*/
    a4 -= v19; /*0x498371*/
    v14 = arg14 + 2 * v19; /*0x498375*/
    if ( v14 >= *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[23348] + 28) ) /*0x498381*/
      v14 -= *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[23348] + 32); /*0x498383*/
    v20 = &a7[v19]; /*0x49838a*/
    if ( (unsigned int)v20 >= *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_14B0[4224] + 28) ) /*0x498396*/
      v20 = (unsigned __int16 *)((char *)v20 - *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_14B0[4224] + 32)); /*0x498398*/
    v15 = v20; /*0x49839b*/
  }
  for ( result = a4; a4 > 0; result = a4 ) /*0x4983a3*/
  {
    v22 = *a2++; /*0x4983a9*/
    if ( v22 ) /*0x4983b6*/
    {
      v14 += 2; /*0x4983f0*/
      v24 = &aP5->__pad_0[-*a10++]; /*0x4983f6*/
      v13 += 2; /*0x498416*/
      if ( (int)v24 < *(unsigned __int16 *)(v14 - 2) ) /*0x498405*/
        *(_WORD *)(v13 - 2) = *(_WORD *)(v26->RLEBlitTransZRemapXlatAlphaZRead_ushort_field_0x08 /*0x49843c*/
                                       + 2 * (*(unsigned __int8 *)(v22 + v25) | *(unsigned __int16 *)&a10a[2 * *v15]));
      --a4; /*0x498445*/
      ++v15; /*0x498457*/
    }
    else
    {
      v27 = *a2++; /*0x4983be*/
      a4 -= v27; /*0x4983d5*/
      v23 = 2 * v27; /*0x4983d9*/
      v13 += v23; /*0x4983dc*/
      v14 += v23; /*0x4983de*/
      a10 += v27; /*0x4983e0*/
      v15 = (unsigned __int16 *)((char *)v15 + v23); /*0x4983e4*/
    }
    if ( v14 >= *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[23348] + 28) ) /*0x498462*/
      v14 -= *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[23348] + 32); /*0x498464*/
    if ( (unsigned int)v15 >= *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_14B0[4224] + 28) ) /*0x49846f*/
      v15 = (unsigned __int16 *)((char *)v15 - *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_14B0[4224] + 32)); /*0x498471*/
  }
  return result; /*0x498480*/
}


// ==== 0x00498490  _RLEBlitTransZRemapXlatAlphaZRead_G::Release  this=RLEBlitTransZRemapXlatAlphaZRead_ushort  sig=csp ====
int __thiscall RLEBlitTransZRemapXlatAlphaZRead_ushort::_vt02(
        void *this,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12)
{
  return (*(int (__thiscall **)(void *, int, int, int, int, int, int, int, int, int, int))(this->RLEBlitTransZRemapXlatAlphaZRead_ushort_field_0x04)( /*0x4984c7*/
           this,
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           a9,
           a10,
           a11);
}


// ==== 0x004984D0  _RLEBlitTransLucent75AlphaZRead_G::AddRef  this=RLEBlitTransLucent75AlphaZRead_ushort  sig=csp ====
int __thiscall RLEBlitTransLucent75AlphaZRead_ushort::AddRef(
        int this,
        int arg0,
        unsigned __int8 *a2,
        int a4,
        RLEBlitTransLucent75AlphaZRead_ushort *aP4,
        int a6,
        unsigned int arg14,
        unsigned __int16 *a7,
        int a9,
        int _38,
        char *a10)
{
  unsigned int v12; // ebx
  unsigned __int16 *v13; // edx
  int v14; // edi
  int v15; // eax
  RLEBlitTransLucent75AlphaZRead_ushort *v16; // eax
  int v18; // eax
  unsigned __int16 *v19; // eax
  int result; // eax
  unsigned __int8 v21; // al
  int v22; // esi
  int v23; // esi
  unsigned __int8 v24; // [esp+18h] [ebp+4h]
  char *a10a; // [esp+3Ch] [ebp+28h]

  v12 = arg14; /*0x4984ec*/
  v13 = a7; /*0x4984f2*/
  v14 = arg0; /*0x4984fc*/
  v15 = (261 * (a9 <= 0 ? 0 : a9)) >> 11;
  if ( v15 > 254 ) /*0x498511*/
    v15 = 254; /*0x498513*/
  a10a = (char *)(*(_DWORD *)(this + 8) + (v15 << 9)); /*0x49852c*/
  v16 = aP4; /*0x498530*/
  if ( (int)aP4 > 0 ) /*0x498536*/
  {
    do /*0x49854d*/
    {
      if ( *a2++ ) /*0x498538*/
        v16 = (RLEBlitTransLucent75AlphaZRead_ushort *)((char *)v16 - 1); /*0x49854a*/
      else
        v16 = (RLEBlitTransLucent75AlphaZRead_ushort *)((char *)v16 - *a2++); /*0x498545*/
    }
    while ( (int)v16 > 0 ); /*0x49854d*/
    v18 = -(int)v16; /*0x498557*/
    v14 = arg0 + 2 * v18; /*0x49855b*/
    a4 -= v18; /*0x498562*/
    v12 = arg14 + 2 * v18; /*0x498566*/
    if ( v12 >= *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[23348] + 28) ) /*0x49856e*/
      v12 -= *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[23348] + 32); /*0x498570*/
    v19 = &a7[v18]; /*0x498577*/
    if ( (unsigned int)v19 >= *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_14B0[4224] + 28) ) /*0x49857f*/
      v19 = (unsigned __int16 *)((char *)v19 - *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_14B0[4224] + 32)); /*0x498581*/
    v13 = v19; /*0x498584*/
  }
  for ( result = a4; a4 > 0; result = a4 ) /*0x49858c*/
  {
    v21 = *a2++; /*0x498592*/
    if ( v21 ) /*0x4985a0*/
    {
      v12 += 2; /*0x4985dd*/
      v23 = a6 - *a10++; /*0x4985e3*/
      v14 += 2; /*0x4985fe*/
      if ( v23 < *(unsigned __int16 *)(v12 - 2) ) /*0x4985f2*/
        *(_WORD *)(v14 - 2) = 3 * (*(_WORD *)(this + 12) & (*(_WORD *)(v14 - 2) >> 2)) /*0x498643*/
                            + (*(_WORD *)(this + 12)
                             & (*(_WORD *)(*(_DWORD *)(this + 4) + 2 * (v21 | *(unsigned __int16 *)&a10a[2 * *v13])) >> 2));
      --a4; /*0x498648*/
      ++v13; /*0x49865a*/
    }
    else
    {
      v24 = *a2++; /*0x4985a9*/
      a4 -= v24; /*0x4985bf*/
      v22 = 2 * v24; /*0x4985c3*/
      v14 += v22; /*0x4985c6*/
      v12 += v22; /*0x4985c8*/
      a10 += v24; /*0x4985ca*/
      v13 = (unsigned __int16 *)((char *)v13 + v22); /*0x4985ce*/
    }
    if ( v12 >= *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[23348] + 28) ) /*0x498665*/
      v12 -= *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[23348] + 32); /*0x498667*/
    if ( (unsigned int)v13 >= *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_14B0[4224] + 28) ) /*0x498672*/
      v13 = (unsigned __int16 *)((char *)v13 - *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_14B0[4224] + 32)); /*0x498674*/
  }
  return result; /*0x498683*/
}


// ==== 0x00498690  _RLEBlitTransLucent75AlphaZRead_G::Release  this=RLEBlitTransLucent75AlphaZRead_ushort  sig=csp ====
int __thiscall RLEBlitTransLucent75AlphaZRead_ushort::_vt02(
        void *this,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12)
{
  return (*(int (__thiscall **)(void *, int, int, int, int, int, int, int, int, int, int))(this->RLEBlitTransLucent75AlphaZRead_ushort_field_0x04)( /*0x4986c7*/
           this,
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           a9,
           a10,
           a11);
}


// ==== 0x004986D0  _RLEBlitTransLucent50AlphaZRead_G::AddRef  this=RLEBlitTransLucent50AlphaZRead_ushort  sig=csp ====
int __thiscall RLEBlitTransLucent50AlphaZRead_ushort::_vt01(
        int this,
        _WORD *a2,
        unsigned __int8 *a3,
        int a4,
        int a5,
        int a6,
        unsigned int a7,
        unsigned __int16 *a8,
        int a9,
        int a10,
        char *a11)
{
  unsigned int v12; // ebp
  unsigned __int16 *v13; // esi
  int v15; // eax
  _WORD *v16; // ebx
  int v17; // edx
  int v19; // edx
  unsigned __int16 *v20; // edx
  int result; // eax
  unsigned __int8 v22; // al
  int v23; // edi
  int v24; // edi
  int v26; // [esp+18h] [ebp+4h]
  unsigned __int8 v28; // [esp+2Ch] [ebp+18h]

  v12 = a7; /*0x4986f3*/
  v13 = a8; /*0x4986fd*/
  v15 = (261 * (a9 <= 0 ? 0 : a9)) >> 11;
  v16 = a2; /*0x498711*/
  if ( v15 > 254 ) /*0x498713*/
    v15 = 254; /*0x498715*/
  v17 = a5; /*0x498724*/
  v26 = *(_DWORD *)(this + 8) + (v15 << 9); /*0x49872a*/
  if ( a5 > 0 ) /*0x498733*/
  {
    do /*0x498748*/
    {
      if ( *a3++ ) /*0x498735*/
        --v17; /*0x498745*/
      else
        v17 -= *a3++; /*0x498740*/
    }
    while ( v17 > 0 ); /*0x498748*/
    v19 = -v17; /*0x49874e*/
    v16 = &a2[v19]; /*0x498750*/
    v12 = a7 + 2 * v19; /*0x498757*/
    a4 -= v19; /*0x498761*/
    if ( v12 >= *((_DWORD *)MEMORY[0x887644] + 7) ) /*0x498765*/
      v12 -= *((_DWORD *)MEMORY[0x887644] + 8); /*0x498767*/
    v20 = &a8[v19]; /*0x49876e*/
    if ( (unsigned int)v20 >= *((_DWORD *)MEMORY[0x87E8A4] + 7) ) /*0x498779*/
      v20 = (unsigned __int16 *)((char *)v20 - *((_DWORD *)MEMORY[0x87E8A4] + 8)); /*0x49877b*/
    v13 = v20; /*0x49877e*/
  }
  for ( result = a4; a4 > 0; result = a4 ) /*0x498786*/
  {
    v22 = *a3++; /*0x49878c*/
    if ( v22 ) /*0x498799*/
    {
      v12 += 2; /*0x4987d6*/
      v24 = a6 - *a11++; /*0x4987dc*/
      if ( v24 >= *(unsigned __int16 *)(v12 - 2) ) /*0x4987eb*/
      {
        ++v16; /*0x498844*/
        --a4; /*0x498847*/
      }
      else
      {
        *v16 = (*(_WORD *)(this + 12) & (*v16 >> 1)) /*0x49882f*/
             + (*(_WORD *)(this + 12)
              & (*(_WORD *)(*(_DWORD *)(this + 4) + 2 * (v22 | *(unsigned __int16 *)(v26 + 2 * *v13))) >> 1));
        --a4; /*0x498832*/
        ++v16; /*0x49883a*/
      }
      ++v13; /*0x49884b*/
    }
    else
    {
      v28 = *a3++; /*0x4987a1*/
      a4 -= v28; /*0x4987b8*/
      v23 = 2 * v28; /*0x4987bc*/
      v16 = (_WORD *)((char *)v16 + v23); /*0x4987bf*/
      v12 += v23; /*0x4987c1*/
      a11 += v28; /*0x4987c3*/
      v13 = (unsigned __int16 *)((char *)v13 + v23); /*0x4987c7*/
    }
    if ( v12 >= *((_DWORD *)MEMORY[0x887644] + 7) ) /*0x498856*/
      v12 -= *((_DWORD *)MEMORY[0x887644] + 8); /*0x498858*/
    if ( (unsigned int)v13 >= *((_DWORD *)MEMORY[0x87E8A4] + 7) ) /*0x498863*/
      v13 = (unsigned __int16 *)((char *)v13 - *((_DWORD *)MEMORY[0x87E8A4] + 8)); /*0x498865*/
  }
  return result; /*0x498874*/
}


// ==== 0x00498880  _RLEBlitTransLucent50AlphaZRead_G::Release  this=RLEBlitTransLucent50AlphaZRead_ushort  sig=csp ====
int __thiscall RLEBlitTransLucent50AlphaZRead_ushort::_vt02(
        void *this,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12)
{
  return (*(int (__thiscall **)(void *, int, int, int, int, int, int, int, int, int, int))(this->RLEBlitTransLucent50AlphaZRead_ushort_field_0x04)( /*0x4988b7*/
           this,
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           a9,
           a10,
           a11);
}


// ==== 0x004988C0  _RLEBlitTransLucent25AlphaZRead_G::AddRef  this=RLEBlitTransLucent25AlphaZRead_ushort  sig=csp ====
int __thiscall RLEBlitTransLucent25AlphaZRead_ushort::AddRef(
        int this,
        int arg0,
        unsigned __int8 *a2,
        int a4,
        RLEBlitTransLucent25AlphaZRead_ushort *aP4,
        int a6,
        unsigned int arg14,
        unsigned __int16 *a7,
        int a9,
        int _38,
        char *a10)
{
  unsigned int v12; // ebx
  unsigned __int16 *v13; // edx
  int v14; // edi
  int v15; // eax
  RLEBlitTransLucent25AlphaZRead_ushort *v16; // eax
  int v18; // eax
  unsigned __int16 *v19; // eax
  int result; // eax
  unsigned __int8 v21; // al
  int v22; // esi
  int v23; // esi
  unsigned __int8 v24; // [esp+18h] [ebp+4h]
  char *a10a; // [esp+3Ch] [ebp+28h]

  v12 = arg14; /*0x4988dc*/
  v13 = a7; /*0x4988e2*/
  v14 = arg0; /*0x4988ec*/
  v15 = (261 * (a9 <= 0 ? 0 : a9)) >> 11;
  if ( v15 > 254 ) /*0x498901*/
    v15 = 254; /*0x498903*/
  a10a = (char *)(*(_DWORD *)(this + 8) + (v15 << 9)); /*0x49891c*/
  v16 = aP4; /*0x498920*/
  if ( (int)aP4 > 0 ) /*0x498926*/
  {
    do /*0x49893d*/
    {
      if ( *a2++ ) /*0x498928*/
        v16 = (RLEBlitTransLucent25AlphaZRead_ushort *)((char *)v16 - 1); /*0x49893a*/
      else
        v16 = (RLEBlitTransLucent25AlphaZRead_ushort *)((char *)v16 - *a2++); /*0x498935*/
    }
    while ( (int)v16 > 0 ); /*0x49893d*/
    v18 = -(int)v16; /*0x498947*/
    v14 = arg0 + 2 * v18; /*0x49894b*/
    a4 -= v18; /*0x498952*/
    v12 = arg14 + 2 * v18; /*0x498956*/
    if ( v12 >= *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[23348] + 28) ) /*0x49895e*/
      v12 -= *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[23348] + 32); /*0x498960*/
    v19 = &a7[v18]; /*0x498967*/
    if ( (unsigned int)v19 >= *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_14B0[4224] + 28) ) /*0x49896f*/
      v19 = (unsigned __int16 *)((char *)v19 - *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_14B0[4224] + 32)); /*0x498971*/
    v13 = v19; /*0x498974*/
  }
  for ( result = a4; a4 > 0; result = a4 ) /*0x49897c*/
  {
    v21 = *a2++; /*0x498982*/
    if ( v21 ) /*0x498990*/
    {
      v12 += 2; /*0x4989cd*/
      v23 = a6 - *a10++; /*0x4989d3*/
      v14 += 2; /*0x4989ee*/
      if ( v23 < *(unsigned __int16 *)(v12 - 2) ) /*0x4989e2*/
        *(_WORD *)(v14 - 2) = (*(_WORD *)(this + 12) & (*(_WORD *)(v14 - 2) >> 2)) /*0x498a2f*/
                            + 3
                            * (*(_WORD *)(this + 12)
                             & (*(_WORD *)(*(_DWORD *)(this + 4) + 2 * (v21 | *(unsigned __int16 *)&a10a[2 * *v13])) >> 2));
      --a4; /*0x498a38*/
      ++v13; /*0x498a4a*/
    }
    else
    {
      v24 = *a2++; /*0x498999*/
      a4 -= v24; /*0x4989af*/
      v22 = 2 * v24; /*0x4989b3*/
      v14 += v22; /*0x4989b6*/
      v12 += v22; /*0x4989b8*/
      a10 += v24; /*0x4989ba*/
      v13 = (unsigned __int16 *)((char *)v13 + v22); /*0x4989be*/
    }
    if ( v12 >= *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[23348] + 28) ) /*0x498a55*/
      v12 -= *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[23348] + 32); /*0x498a57*/
    if ( (unsigned int)v13 >= *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_14B0[4224] + 28) ) /*0x498a62*/
      v13 = (unsigned __int16 *)((char *)v13 - *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_14B0[4224] + 32)); /*0x498a64*/
  }
  return result; /*0x498a73*/
}


// ==== 0x00498A80  _RLEBlitTransLucent25AlphaZRead_G::Release  this=RLEBlitTransLucent25AlphaZRead_ushort  sig=csp ====
int __thiscall RLEBlitTransLucent25AlphaZRead_ushort::_vt02(
        void *this,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12)
{
  return (*(int (__thiscall **)(void *, int, int, int, int, int, int, int, int, int, int))(this->RLEBlitTransLucent25AlphaZRead_ushort_field_0x04)( /*0x498ab7*/
           this,
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           a9,
           a10,
           a11);
}


// ==== 0x00498AC0  _RLEBlitTransLucent75AlphaZReadWarp_G::AddRef  this=RLEBlitTransLucent75AlphaZReadWarp_ushort  sig=csp ====
int __thiscall RLEBlitTransLucent75AlphaZReadWarp_ushort::AddRef(
        int this,
        int arg0,
        unsigned __int8 *a2,
        int a4,
        RLEBlitTransLucent75AlphaZReadWarp_ushort *aP4,
        int a6,
        unsigned int arg14,
        unsigned __int16 *a7,
        int a9,
        int arg20,
        char *a10)
{
  int v12; // esi
  unsigned int v13; // ebx
  unsigned __int16 *v14; // edx
  int v15; // eax
  TacticalClass *v16; // edi
  RLEBlitTransLucent75AlphaZReadWarp_ushort *v17; // eax
  int v19; // eax
  unsigned __int16 *v20; // eax
  int result; // eax
  unsigned __int8 v22; // al
  int v23; // eax
  int v24; // edi
  unsigned __int8 v25; // [esp+18h] [ebp+4h]
  char *a10a; // [esp+3Ch] [ebp+28h]

  v12 = arg0; /*0x498ad7*/
  v13 = arg14; /*0x498ae1*/
  v14 = a7; /*0x498ae7*/
  v15 = (261 * (a9 <= 0 ? 0 : a9)) >> 11;
  if ( v15 > 254 ) /*0x498b01*/
    v15 = 254; /*0x498b03*/
  v16 = *(TacticalClass **)&stru_87C374.__pad_14B0[4224]; /*0x498b16*/
  a10a = (char *)(*(_DWORD *)(this + 8) + (v15 << 9)); /*0x498b1c*/
  v17 = aP4; /*0x498b20*/
  if ( (int)aP4 > 0 ) /*0x498b26*/
  {
    do /*0x498b3d*/
    {
      if ( *a2++ ) /*0x498b28*/
        v17 = (RLEBlitTransLucent75AlphaZReadWarp_ushort *)((char *)v17 - 1); /*0x498b3a*/
      else
        v17 = (RLEBlitTransLucent75AlphaZReadWarp_ushort *)((char *)v17 - *a2++); /*0x498b35*/
    }
    while ( (int)v17 > 0 ); /*0x498b3d*/
    v19 = -(int)v17; /*0x498b47*/
    v12 = arg0 + 2 * v19; /*0x498b4b*/
    a4 -= v19; /*0x498b52*/
    v13 = arg14 + 2 * v19; /*0x498b56*/
    if ( v13 >= *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[23348] + 28) ) /*0x498b5e*/
      v13 -= *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[23348] + 32); /*0x498b60*/
    v20 = &a7[v19]; /*0x498b67*/
    if ( (unsigned int)v20 >= *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_14B0[4224] + 28) ) /*0x498b6f*/
      v20 = (unsigned __int16 *)((char *)v20 - *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_14B0[4224] + 32)); /*0x498b71*/
    v14 = v20; /*0x498b74*/
  }
  for ( result = a4; a4 > 0; result = a4 ) /*0x498b7c*/
  {
    v22 = *a2++; /*0x498b82*/
    if ( v22 ) /*0x498b90*/
    {
      v13 += 2; /*0x498bcc*/
      v24 = a6 - *a10++; /*0x498bd2*/
      if ( v24 >= *(unsigned __int16 *)(v13 - 2) ) /*0x498be1*/
      {
        v16 = *(TacticalClass **)&stru_87C374.__pad_14B0[4224]; /*0x498c4c*/
        v12 += 2; /*0x498c52*/
      }
      else
      {
        v12 += 2; /*0x498bed*/
        *(_WORD *)(v12 - 2) = 3 * (*(_WORD *)(this + 12) & (*(_WORD *)(v12 + 2 * arg20 - 2) >> 2)) /*0x498c37*/
                            + (*(_WORD *)(this + 12)
                             & (*(_WORD *)(*(_DWORD *)(this + 4) + 2 * (v22 | *(unsigned __int16 *)&a10a[2 * *v14])) >> 2));
        v16 = *(TacticalClass **)&stru_87C374.__pad_14B0[4224]; /*0x498c3b*/
      }
      --a4; /*0x498c42*/
      ++v14; /*0x498c5a*/
    }
    else
    {
      v25 = *a2++; /*0x498b99*/
      a4 -= v25; /*0x498ba9*/
      v23 = 2 * v25; /*0x498bb3*/
      v13 += v23; /*0x498bb5*/
      v12 += v23; /*0x498bb7*/
      a10 += v25; /*0x498bb9*/
      v14 = (unsigned __int16 *)((char *)v14 + v23); /*0x498bbd*/
    }
    if ( v13 >= *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[23348] + 28) ) /*0x498c65*/
      v13 -= *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[23348] + 32); /*0x498c67*/
    if ( (unsigned int)v14 >= v16->referenceCount ) /*0x498c6d*/
      v14 = (unsigned __int16 *)((char *)v14 - (unsigned int)v16->NeedsSaveOrLink); /*0x498c6f*/
  }
  return result; /*0x498c7e*/
}


// ==== 0x00498C90  _RLEBlitTransLucent75AlphaZReadWarp_G::Release  this=RLEBlitTransLucent75AlphaZReadWarp_ushort  sig=csp ====
int __thiscall RLEBlitTransLucent75AlphaZReadWarp_ushort::_vt02(
        void *this,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12)
{
  return (*(int (__thiscall **)(void *, int, int, int, int, int, int, int, int, int, int))(this->RLEBlitTransLucent75AlphaZReadWarp_ushort_field_0x04)( /*0x498cc7*/
           this,
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           a9,
           a10,
           a11);
}


// ==== 0x00498CD0  _RLEBlitTransLucent50AlphaZReadWarp_G::AddRef  this=RLEBlitTransLucent50AlphaZReadWarp_ushort  sig=csp ====
int __thiscall RLEBlitTransLucent50AlphaZReadWarp_ushort::_vt01(
        int this,
        _WORD *a2,
        unsigned __int8 *a3,
        int a4,
        int a5,
        int a6,
        unsigned int a7,
        unsigned __int16 *a8,
        int a9,
        int a10,
        char *a11)
{
  unsigned int v12; // ebp
  unsigned __int16 *v13; // esi
  int v15; // eax
  _WORD *v16; // ebx
  int v17; // edx
  int v19; // edx
  unsigned __int16 *v20; // edx
  int result; // eax
  unsigned __int8 v22; // al
  int v23; // edi
  int v24; // edi
  int v26; // [esp+18h] [ebp+4h]
  unsigned __int8 v28; // [esp+2Ch] [ebp+18h]

  v12 = a7; /*0x498cf3*/
  v13 = a8; /*0x498cfd*/
  v15 = (261 * (a9 <= 0 ? 0 : a9)) >> 11;
  v16 = a2; /*0x498d11*/
  if ( v15 > 254 ) /*0x498d13*/
    v15 = 254; /*0x498d15*/
  v17 = a5; /*0x498d24*/
  v26 = *(_DWORD *)(this + 8) + (v15 << 9); /*0x498d2a*/
  if ( a5 > 0 ) /*0x498d33*/
  {
    do /*0x498d48*/
    {
      if ( *a3++ ) /*0x498d35*/
        --v17; /*0x498d45*/
      else
        v17 -= *a3++; /*0x498d40*/
    }
    while ( v17 > 0 ); /*0x498d48*/
    v19 = -v17; /*0x498d4e*/
    v16 = &a2[v19]; /*0x498d50*/
    v12 = a7 + 2 * v19; /*0x498d57*/
    a4 -= v19; /*0x498d61*/
    if ( v12 >= *((_DWORD *)MEMORY[0x887644] + 7) ) /*0x498d65*/
      v12 -= *((_DWORD *)MEMORY[0x887644] + 8); /*0x498d67*/
    v20 = &a8[v19]; /*0x498d6e*/
    if ( (unsigned int)v20 >= *((_DWORD *)MEMORY[0x87E8A4] + 7) ) /*0x498d79*/
      v20 = (unsigned __int16 *)((char *)v20 - *((_DWORD *)MEMORY[0x87E8A4] + 8)); /*0x498d7b*/
    v13 = v20; /*0x498d7e*/
  }
  for ( result = a4; a4 > 0; result = a4 ) /*0x498d86*/
  {
    v22 = *a3++; /*0x498d8c*/
    if ( v22 ) /*0x498d99*/
    {
      v12 += 2; /*0x498dd6*/
      v24 = a6 - *a11++; /*0x498ddc*/
      if ( v24 >= *(unsigned __int16 *)(v12 - 2) ) /*0x498deb*/
      {
        ++v16; /*0x498e49*/
        --a4; /*0x498e4c*/
      }
      else
      {
        *v16 = (*(_WORD *)(this + 12) & (v16[a10] >> 1)) /*0x498e34*/
             + (*(_WORD *)(this + 12)
              & (*(_WORD *)(*(_DWORD *)(this + 4) + 2 * (v22 | *(unsigned __int16 *)(v26 + 2 * *v13))) >> 1));
        --a4; /*0x498e37*/
        ++v16; /*0x498e3f*/
      }
      ++v13; /*0x498e50*/
    }
    else
    {
      v28 = *a3++; /*0x498da1*/
      a4 -= v28; /*0x498db8*/
      v23 = 2 * v28; /*0x498dbc*/
      v16 = (_WORD *)((char *)v16 + v23); /*0x498dbf*/
      v12 += v23; /*0x498dc1*/
      a11 += v28; /*0x498dc3*/
      v13 = (unsigned __int16 *)((char *)v13 + v23); /*0x498dc7*/
    }
    if ( v12 >= *((_DWORD *)MEMORY[0x887644] + 7) ) /*0x498e5b*/
      v12 -= *((_DWORD *)MEMORY[0x887644] + 8); /*0x498e5d*/
    if ( (unsigned int)v13 >= *((_DWORD *)MEMORY[0x87E8A4] + 7) ) /*0x498e68*/
      v13 = (unsigned __int16 *)((char *)v13 - *((_DWORD *)MEMORY[0x87E8A4] + 8)); /*0x498e6a*/
  }
  return result; /*0x498e79*/
}


// ==== 0x00498E90  _RLEBlitTransLucent50AlphaZReadWarp_G::Release  this=RLEBlitTransLucent50AlphaZReadWarp_ushort  sig=csp ====
int __thiscall RLEBlitTransLucent50AlphaZReadWarp_ushort::_vt02(
        void *this,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12)
{
  return (*(int (__thiscall **)(void *, int, int, int, int, int, int, int, int, int, int))(this->RLEBlitTransLucent50AlphaZReadWarp_ushort_field_0x04)( /*0x498ec7*/
           this,
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           a9,
           a10,
           a11);
}


// ==== 0x00498ED0  _RLEBlitTransLucent25AlphaZReadWarp_G::AddRef  this=RLEBlitTransLucent25AlphaZReadWarp_ushort  sig=csp ====
int __thiscall RLEBlitTransLucent25AlphaZReadWarp_ushort::AddRef(
        int this,
        int arg0,
        unsigned __int8 *a2,
        int a4,
        RLEBlitTransLucent25AlphaZReadWarp_ushort *aP4,
        int a6,
        unsigned int arg14,
        unsigned __int16 *a7,
        int a9,
        int arg20,
        char *a10)
{
  int v12; // esi
  unsigned int v13; // ebx
  unsigned __int16 *v14; // edx
  int v15; // eax
  TacticalClass *v16; // edi
  RLEBlitTransLucent25AlphaZReadWarp_ushort *v17; // eax
  int v19; // eax
  unsigned __int16 *v20; // eax
  int result; // eax
  unsigned __int8 v22; // al
  int v23; // eax
  int v24; // edi
  unsigned __int8 v25; // [esp+18h] [ebp+4h]
  char *a10a; // [esp+3Ch] [ebp+28h]

  v12 = arg0; /*0x498ee7*/
  v13 = arg14; /*0x498ef1*/
  v14 = a7; /*0x498ef7*/
  v15 = (261 * (a9 <= 0 ? 0 : a9)) >> 11;
  if ( v15 > 254 ) /*0x498f11*/
    v15 = 254; /*0x498f13*/
  v16 = *(TacticalClass **)&stru_87C374.__pad_14B0[4224]; /*0x498f26*/
  a10a = (char *)(*(_DWORD *)(this + 8) + (v15 << 9)); /*0x498f2c*/
  v17 = aP4; /*0x498f30*/
  if ( (int)aP4 > 0 ) /*0x498f36*/
  {
    do /*0x498f4d*/
    {
      if ( *a2++ ) /*0x498f38*/
        v17 = (RLEBlitTransLucent25AlphaZReadWarp_ushort *)((char *)v17 - 1); /*0x498f4a*/
      else
        v17 = (RLEBlitTransLucent25AlphaZReadWarp_ushort *)((char *)v17 - *a2++); /*0x498f45*/
    }
    while ( (int)v17 > 0 ); /*0x498f4d*/
    v19 = -(int)v17; /*0x498f57*/
    v12 = arg0 + 2 * v19; /*0x498f5b*/
    a4 -= v19; /*0x498f62*/
    v13 = arg14 + 2 * v19; /*0x498f66*/
    if ( v13 >= *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[23348] + 28) ) /*0x498f6e*/
      v13 -= *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[23348] + 32); /*0x498f70*/
    v20 = &a7[v19]; /*0x498f77*/
    if ( (unsigned int)v20 >= *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_14B0[4224] + 28) ) /*0x498f7f*/
      v20 = (unsigned __int16 *)((char *)v20 - *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_14B0[4224] + 32)); /*0x498f81*/
    v14 = v20; /*0x498f84*/
  }
  for ( result = a4; a4 > 0; result = a4 ) /*0x498f8c*/
  {
    v22 = *a2++; /*0x498f92*/
    if ( v22 ) /*0x498fa0*/
    {
      v13 += 2; /*0x498fdc*/
      v24 = a6 - *a10++; /*0x498fe2*/
      if ( v24 >= *(unsigned __int16 *)(v13 - 2) ) /*0x498ff1*/
      {
        v16 = *(TacticalClass **)&stru_87C374.__pad_14B0[4224]; /*0x49905c*/
        v12 += 2; /*0x499062*/
      }
      else
      {
        v12 += 2; /*0x498ffd*/
        *(_WORD *)(v12 - 2) = (*(_WORD *)(this + 12) & (*(_WORD *)(v12 + 2 * arg20 - 2) >> 2)) /*0x499043*/
                            + 3
                            * (*(_WORD *)(this + 12)
                             & (*(_WORD *)(*(_DWORD *)(this + 4) + 2 * (v22 | *(unsigned __int16 *)&a10a[2 * *v14])) >> 2));
        v16 = *(TacticalClass **)&stru_87C374.__pad_14B0[4224]; /*0x49904b*/
      }
      --a4; /*0x499052*/
      ++v14; /*0x49906a*/
    }
    else
    {
      v25 = *a2++; /*0x498fa9*/
      a4 -= v25; /*0x498fb9*/
      v23 = 2 * v25; /*0x498fc3*/
      v13 += v23; /*0x498fc5*/
      v12 += v23; /*0x498fc7*/
      a10 += v25; /*0x498fc9*/
      v14 = (unsigned __int16 *)((char *)v14 + v23); /*0x498fcd*/
    }
    if ( v13 >= *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[23348] + 28) ) /*0x499075*/
      v13 -= *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[23348] + 32); /*0x499077*/
    if ( (unsigned int)v14 >= v16->referenceCount ) /*0x49907d*/
      v14 = (unsigned __int16 *)((char *)v14 - (unsigned int)v16->NeedsSaveOrLink); /*0x49907f*/
  }
  return result; /*0x49908e*/
}


// ==== 0x004990A0  _RLEBlitTransLucent25AlphaZReadWarp_G::Release  this=RLEBlitTransLucent25AlphaZReadWarp_ushort  sig=csp ====
int __thiscall RLEBlitTransLucent25AlphaZReadWarp_ushort::_vt02(
        void *this,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12)
{
  return (*(int (__thiscall **)(void *, int, int, int, int, int, int, int, int, int, int))(this->RLEBlitTransLucent25AlphaZReadWarp_ushort_field_0x04)( /*0x4990d7*/
           this,
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           a9,
           a10,
           a11);
}


// ==== 0x004990E0  _RLEBlitTransXlatAlphaZReadWrite_G::AddRef  this=RLEBlitTransXlatAlphaZReadWrite_ushort  sig=csp ====
unsigned __int16 *__thiscall RLEBlitTransXlatAlphaZReadWrite_ushort::AddRef(
        _DWORD *this,
        int arg0,
        unsigned __int8 *a2,
        RLEBlitTransXlatAlphaZReadWrite_ushort *aP3,
        int a5,
        int arg10,
        unsigned __int16 *a6,
        unsigned __int16 *a7,
        int a9,
        int _38,
        char *a10)
{
  int v12; // ebp
  unsigned __int16 *result; // eax
  unsigned __int16 *v15; // edi
  int v16; // edx
  int v17; // esi
  int v19; // esi
  unsigned __int16 *v20; // esi
  unsigned __int8 v21; // dl
  int v22; // esi
  unsigned __int8 *a2a; // [esp+1Ch] [ebp+8h]

  v12 = arg0; /*0x4990f4*/
  result = a6; /*0x4990fa*/
  v15 = a7; /*0x49910e*/
  v16 = (261 * (a9 <= 0 ? 0 : a9)) >> 11;
  if ( v16 > 254 ) /*0x49911e*/
    v16 = 254; /*0x499120*/
  v17 = a5; /*0x49912f*/
  a2a = (unsigned __int8 *)(this->RLEBlitTransXlatAlphaZReadWrite_ushort_field_0x08 + (v16 << 9)); /*0x499135*/
  if ( a5 > 0 ) /*0x49913f*/
  {
    do /*0x499154*/
    {
      if ( *a2++ ) /*0x499141*/
        --v17; /*0x499151*/
      else
        v17 -= *a2++; /*0x49914c*/
    }
    while ( v17 > 0 ); /*0x499154*/
    v19 = -v17; /*0x49915d*/
    v12 = arg0 + 2 * v19; /*0x49915f*/
    aP3 = (RLEBlitTransXlatAlphaZReadWrite_ushort *)((char *)aP3 - v19); /*0x499168*/
    result = &a6[v19]; /*0x499170*/
    if ( (unsigned int)result >= *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[23348] + 28) ) /*0x499175*/
      result = (unsigned __int16 *)((char *)result - *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[23348] + 32)); /*0x499177*/
    v20 = &a7[v19]; /*0x49917e*/
    if ( (unsigned int)v20 >= *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_14B0[4224] + 28) ) /*0x49918a*/
      v20 = (unsigned __int16 *)((char *)v20 - *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_14B0[4224] + 32)); /*0x49918c*/
    v15 = v20; /*0x49918f*/
  }
  while ( (int)aP3 > 0 ) /*0x499197*/
  {
    v21 = *a2++; /*0x49919d*/
    if ( v21 ) /*0x4991aa*/
    {
      if ( arg10 - *a10 >= *result ) /*0x4991ec*/
      {
        ++a10; /*0x499240*/
        v12 += 2; /*0x499241*/
        ++result; /*0x499244*/
      }
      else
      {
        v12 += 2; /*0x4991f9*/
        ++result; /*0x4991fc*/
        *(_WORD *)(v12 - 2) = *(_WORD *)(this->RLEBlitTransXlatAlphaZReadWrite_ushort_field_0x04 + 2 * (v21 | *(unsigned __int16 *)&a2a[2 * *v15])); /*0x499222*/
        *(result - 1) = arg10 - *a10++; /*0x499230*/
      }
      aP3 = (RLEBlitTransXlatAlphaZReadWrite_ushort *)((char *)aP3 - 1); /*0x499236*/
      ++v15; /*0x49924c*/
    }
    else
    {
      v22 = *a2; /*0x4991bf*/
      a10 += v22; /*0x4991c7*/
      aP3 = (RLEBlitTransXlatAlphaZReadWrite_ushort *)((char *)aP3 - v22); /*0x4991c9*/
      v12 += 2 * v22; /*0x4991d0*/
      result += v22; /*0x4991d2*/
      v15 += v22; /*0x4991d4*/
      ++a2; /*0x4991d6*/
    }
    if ( (unsigned int)result >= *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[23348] + 28) ) /*0x499258*/
      result = (unsigned __int16 *)((char *)result - *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[23348] + 32)); /*0x49925a*/
    if ( (unsigned int)v15 >= *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_14B0[4224] + 28) ) /*0x499266*/
      v15 = (unsigned __int16 *)((char *)v15 - *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_14B0[4224] + 32)); /*0x499268*/
  }
  return result; /*0x499277*/
}


// ==== 0x00499280  _RLEBlitTransXlatAlphaZReadWrite_G::Release  this=RLEBlitTransXlatAlphaZReadWrite_ushort  sig=csp ====
unsigned __int16 *__thiscall RLEBlitTransXlatAlphaZReadWrite_ushort::Release(
        _DWORD *this,
        int arg0,
        unsigned __int8 *a2,
        RLEBlitTransXlatAlphaZReadWrite_ushort *aP3,
        int a5,
        int arg10,
        unsigned __int16 *a6,
        unsigned __int16 *a7,
        int a9,
        int _38,
        char *a10,
        __int16 a12)
{
  int v13; // ebp
  unsigned __int16 *result; // eax
  unsigned __int16 *v16; // edi
  int v17; // edx
  int v18; // esi
  int v20; // esi
  unsigned __int16 *v21; // esi
  unsigned __int8 v22; // dl
  int v23; // esi
  unsigned __int8 *a2a; // [esp+1Ch] [ebp+8h]

  v13 = arg0; /*0x499294*/
  result = a6; /*0x49929a*/
  v16 = a7; /*0x4992ae*/
  v17 = (261 * (a9 <= 0 ? 0 : a9)) >> 11;
  if ( v17 > 254 ) /*0x4992be*/
    v17 = 254; /*0x4992c0*/
  v18 = a5; /*0x4992cf*/
  a2a = (unsigned __int8 *)(this->RLEBlitTransXlatAlphaZReadWrite_ushort_field_0x08 + (v17 << 9)); /*0x4992d5*/
  if ( a5 > 0 ) /*0x4992df*/
  {
    do /*0x4992f4*/
    {
      if ( *a2++ ) /*0x4992e1*/
        --v18; /*0x4992f1*/
      else
        v18 -= *a2++; /*0x4992ec*/
    }
    while ( v18 > 0 ); /*0x4992f4*/
    v20 = -v18; /*0x4992fd*/
    v13 = arg0 + 2 * v20; /*0x4992ff*/
    aP3 = (RLEBlitTransXlatAlphaZReadWrite_ushort *)((char *)aP3 - v20); /*0x499308*/
    result = &a6[v20]; /*0x499310*/
    if ( (unsigned int)result >= *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[23348] + 28) ) /*0x499315*/
      result = (unsigned __int16 *)((char *)result - *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[23348] + 32)); /*0x499317*/
    v21 = &a7[v20]; /*0x49931e*/
    if ( (unsigned int)v21 >= *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_14B0[4224] + 28) ) /*0x49932a*/
      v21 = (unsigned __int16 *)((char *)v21 - *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_14B0[4224] + 32)); /*0x49932c*/
    v16 = v21; /*0x49932f*/
  }
  while ( (int)aP3 > 0 ) /*0x499337*/
  {
    v22 = *a2++; /*0x49933d*/
    if ( v22 ) /*0x49934a*/
    {
      if ( arg10 - *a10 >= *result ) /*0x49938c*/
      {
        ++a10; /*0x4993e5*/
        v13 += 2; /*0x4993e6*/
        ++result; /*0x4993e9*/
      }
      else
      {
        v13 += 2; /*0x499399*/
        ++result; /*0x49939c*/
        *(_WORD *)(v13 - 2) = a12 | *(_WORD *)(this->RLEBlitTransXlatAlphaZReadWrite_ushort_field_0x04 + 2 * (v22 | *(unsigned __int16 *)&a2a[2 * *v16])); /*0x4993c7*/
        *(result - 1) = arg10 - *a10++; /*0x4993d5*/
      }
      aP3 = (RLEBlitTransXlatAlphaZReadWrite_ushort *)((char *)aP3 - 1); /*0x4993db*/
      ++v16; /*0x4993f1*/
    }
    else
    {
      v23 = *a2; /*0x49935f*/
      a10 += v23; /*0x499367*/
      aP3 = (RLEBlitTransXlatAlphaZReadWrite_ushort *)((char *)aP3 - v23); /*0x499369*/
      v13 += 2 * v23; /*0x499370*/
      result += v23; /*0x499372*/
      v16 += v23; /*0x499374*/
      ++a2; /*0x499376*/
    }
    if ( (unsigned int)result >= *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[23348] + 28) ) /*0x4993fd*/
      result = (unsigned __int16 *)((char *)result - *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[23348] + 32)); /*0x4993ff*/
    if ( (unsigned int)v16 >= *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_14B0[4224] + 28) ) /*0x49940b*/
      v16 = (unsigned __int16 *)((char *)v16 - *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_14B0[4224] + 32)); /*0x49940d*/
  }
  return result; /*0x49941c*/
}


// ==== 0x00499430  _RLEBlitTransZRemapXlatAlphaZReadWrite_G::AddRef  this=RLEBlitTransZRemapXlatAlphaZReadWrite_ushort  sig=csp ====
unsigned __int16 *__thiscall RLEBlitTransZRemapXlatAlphaZReadWrite_ushort::AddRef(
        int this,
        int arg0,
        unsigned __int8 *a2,
        int a4,
        int a5,
        RLEBlitTransZRemapXlatAlphaZReadWrite_ushort *aP5,
        unsigned __int16 *a6,
        unsigned __int16 *a7,
        int a9,
        int _3C,
        char *a10)
{
  int v12; // ebp
  unsigned __int16 *v13; // edi
  int v14; // edx
  char *v15; // ecx
  unsigned __int16 *result; // eax
  int v17; // edx
  int v18; // ebx
  int v19; // esi
  int v20; // edx
  int v23; // esi
  unsigned __int16 *v24; // esi
  unsigned __int8 v25; // dl
  int v26; // esi
  int v27; // [esp+10h] [ebp-8h]
  RLEBlitTransZRemapXlatAlphaZReadWrite_ushort *v28; // [esp+14h] [ebp-4h]
  int v29; // [esp+38h] [ebp+20h]

  v12 = arg0; /*0x499441*/
  v13 = a7; /*0x499446*/
  v14 = **(_DWORD **)(this + 4); /*0x49944a*/
  v15 = a10; /*0x49944c*/
  v27 = v14; /*0x499450*/
  result = a6; /*0x499464*/
  v28 = (RLEBlitTransZRemapXlatAlphaZReadWrite_ushort *)this; /*0x49946a*/
  v17 = (261 * (a9 <= 0 ? 0 : a9)) >> 11;
  if ( v17 > 254 ) /*0x499483*/
    v17 = 254; /*0x499485*/
  v18 = *(_DWORD *)(this + 12); /*0x49948a*/
  v19 = a5; /*0x49948d*/
  v20 = v18 + (v17 << 9); /*0x499494*/
  v29 = v20; /*0x49949a*/
  if ( a5 > 0 ) /*0x4994a6*/
  {
    do /*0x4994bb*/
    {
      if ( *a2++ ) /*0x4994a8*/
        --v19; /*0x4994b8*/
      else
        v19 -= *a2++; /*0x4994b3*/
    }
    while ( v19 > 0 ); /*0x4994bb*/
    v23 = -v19; /*0x4994c4*/
    v12 = arg0 + 2 * v23; /*0x4994c6*/
    a4 -= v23; /*0x4994cf*/
    result = &a6[v23]; /*0x4994d7*/
    if ( (unsigned int)result >= *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[23348] + 28) ) /*0x4994dc*/
      result = (unsigned __int16 *)((char *)result - *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[23348] + 32)); /*0x4994de*/
    v24 = &a7[v23]; /*0x4994e5*/
    if ( (unsigned int)v24 >= *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_14B0[4224] + 28) ) /*0x4994f1*/
      v24 = (unsigned __int16 *)((char *)v24 - *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_14B0[4224] + 32)); /*0x4994f3*/
    v13 = v24; /*0x4994f6*/
  }
  while ( a4 > 0 ) /*0x4994fe*/
  {
    v25 = *a2++; /*0x499504*/
    if ( v25 ) /*0x499511*/
    {
      if ( (int)&aP5->__pad_0[-*v15] >= *result ) /*0x49955a*/
      {
        ++v15; /*0x4995bf*/
        v12 += 2; /*0x4995c0*/
        ++result; /*0x4995c3*/
        a10 = v15; /*0x4995c7*/
      }
      else
      {
        v12 += 2; /*0x499569*/
        ++result; /*0x49957e*/
        *(_WORD *)(v12 - 2) = *(_WORD *)(v28->RLEBlitTransZRemapXlatAlphaZReadWrite_ushort_field_0x08 /*0x49959d*/
                                       + 2 * (*(unsigned __int8 *)(v25 + v27) | *(unsigned __int16 *)(v29 + 2 * *v13)));
        *(result - 1) = (_WORD)aP5 - *a10; /*0x4995ab*/
        v15 = ++a10; /*0x4995af*/
      }
      --a4; /*0x4995b5*/
      ++v13; /*0x4995cf*/
    }
    else
    {
      v26 = *a2; /*0x499526*/
      v15 += v26; /*0x49952e*/
      a4 -= v26; /*0x499530*/
      v12 += 2 * v26; /*0x499537*/
      result += v26; /*0x499539*/
      v13 += v26; /*0x49953b*/
      ++a2; /*0x49953d*/
      a10 = v15; /*0x499541*/
    }
    if ( (unsigned int)result >= *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[23348] + 28) ) /*0x4995db*/
      result = (unsigned __int16 *)((char *)result - *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[23348] + 32)); /*0x4995dd*/
    if ( (unsigned int)v13 >= *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_14B0[4224] + 28) ) /*0x4995e9*/
      v13 = (unsigned __int16 *)((char *)v13 - *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_14B0[4224] + 32)); /*0x4995eb*/
  }
  return result; /*0x4995fa*/
}


// ==== 0x00499610  _RLEBlitTransZRemapXlatAlphaZReadWrite_G::Release  this=RLEBlitTransZRemapXlatAlphaZReadWrite_ushort  sig=csp ====
int __thiscall RLEBlitTransZRemapXlatAlphaZReadWrite_ushort::_vt02(
        void *this,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12)
{
  return (*(int (__thiscall **)(void *, int, int, int, int, int, int, int, int, int, int))(this->RLEBlitTransZRemapXlatAlphaZReadWrite_ushort_field_0x04)( /*0x499647*/
           this,
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           a9,
           a10,
           a11);
}


// ==== 0x00499650  _RLEBlitTransLucent75AlphaZReadWrite_G::AddRef  this=RLEBlitTransLucent75AlphaZReadWrite_ushort  sig=csp ====
int __thiscall RLEBlitTransLucent75AlphaZReadWrite_ushort::_vt01(
        int this,
        int a2,
        unsigned __int8 *a3,
        int a4,
        int a5,
        int a6,
        unsigned __int16 *a7,
        unsigned __int16 *a8,
        int a9,
        int a10,
        char *a11)
{
  unsigned __int16 *v11; // edx
  char *v12; // ebp
  int v14; // esi
  unsigned __int16 *v15; // edi
  int v16; // eax
  int v17; // eax
  int v19; // eax
  unsigned __int16 *v20; // eax
  int result; // eax
  unsigned __int8 v22; // al
  int v23; // ebx
  unsigned __int8 v25; // [esp+18h] [ebp+4h]
  char *v26; // [esp+1Ch] [ebp+8h]
  int v27; // [esp+3Ch] [ebp+28h]

  v11 = a7; /*0x499658*/
  v12 = a11; /*0x499665*/
  v14 = a2; /*0x499679*/
  v15 = a8; /*0x499681*/
  v26 = a11; /*0x499685*/
  v16 = (261 * (a9 <= 0 ? 0 : a9)) >> 11;
  if ( v16 > 254 ) /*0x499691*/
    v16 = 254; /*0x499693*/
  v27 = *(_DWORD *)(this + 8) + (v16 << 9); /*0x4996a2*/
  v17 = a5; /*0x4996a6*/
  if ( a5 > 0 ) /*0x4996ac*/
  {
    do /*0x4996c1*/
    {
      if ( *a3++ ) /*0x4996ae*/
        --v17; /*0x4996be*/
      else
        v17 -= *a3++; /*0x4996b9*/
    }
    while ( v17 > 0 ); /*0x4996c1*/
    v19 = -v17; /*0x4996cd*/
    v14 = a2 + 2 * v19; /*0x4996d2*/
    a4 -= v19; /*0x4996db*/
    v11 = &a7[v19]; /*0x4996e3*/
    if ( (unsigned int)v11 >= *((_DWORD *)MEMORY[0x887644] + 7) ) /*0x4996e8*/
      v11 = (unsigned __int16 *)((char *)v11 - *((_DWORD *)MEMORY[0x887644] + 8)); /*0x4996ea*/
    v20 = &a8[v19]; /*0x4996f1*/
    if ( (unsigned int)v20 >= *((_DWORD *)MEMORY[0x87E8A4] + 7) ) /*0x4996fd*/
      v20 = (unsigned __int16 *)((char *)v20 - *((_DWORD *)MEMORY[0x87E8A4] + 8)); /*0x4996ff*/
    v15 = v20; /*0x499702*/
  }
  for ( result = a4; a4 > 0; result = a4 ) /*0x49970a*/
  {
    v22 = *a3++; /*0x499710*/
    if ( v22 ) /*0x49971d*/
    {
      if ( a6 - *v12 >= *v11 ) /*0x49975e*/
      {
        ++v12; /*0x4997d8*/
        v14 += 2; /*0x4997d9*/
        ++v11; /*0x4997dc*/
      }
      else
      {
        v14 += 2; /*0x49976a*/
        ++v11; /*0x499776*/
        *(_WORD *)(v14 - 2) = 3 * (*(_WORD *)(this + 12) & (*(_WORD *)(v14 - 2) >> 2)) /*0x4997b1*/
                            + (*(_WORD *)(this + 12)
                             & (*(_WORD *)(*(_DWORD *)(this + 4) + 2 * (v22 | *(unsigned __int16 *)(v27 + 2 * *v15))) >> 2));
        *(v11 - 1) = a6 - *v26; /*0x4997c0*/
        v12 = v26 + 1; /*0x4997c8*/
      }
      v26 = v12; /*0x4997ca*/
      --a4; /*0x4997ce*/
      ++v15; /*0x4997e8*/
    }
    else
    {
      v25 = *a3++; /*0x499725*/
      v12 += v25; /*0x499735*/
      a4 -= v25; /*0x499737*/
      v23 = 2 * v25; /*0x49973b*/
      v14 += v23; /*0x49973e*/
      v11 = (unsigned __int16 *)((char *)v11 + v23); /*0x499740*/
      v26 = v12; /*0x499742*/
      v15 = (unsigned __int16 *)((char *)v15 + v23); /*0x499746*/
    }
    if ( (unsigned int)v11 >= *((_DWORD *)MEMORY[0x887644] + 7) ) /*0x4997f3*/
      v11 = (unsigned __int16 *)((char *)v11 - *((_DWORD *)MEMORY[0x887644] + 8)); /*0x4997f5*/
    if ( (unsigned int)v15 >= *((_DWORD *)MEMORY[0x87E8A4] + 7) ) /*0x499800*/
      v15 = (unsigned __int16 *)((char *)v15 - *((_DWORD *)MEMORY[0x87E8A4] + 8)); /*0x499802*/
  }
  return result; /*0x499811*/
}


// ==== 0x00499820  _RLEBlitTransLucent75AlphaZReadWrite_G::Release  this=RLEBlitTransLucent75AlphaZReadWrite_ushort  sig=csp ====
int __thiscall RLEBlitTransLucent75AlphaZReadWrite_ushort::_vt02(
        void *this,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12)
{
  return (*(int (__thiscall **)(void *, int, int, int, int, int, int, int, int, int, int))(this->RLEBlitTransLucent75AlphaZReadWrite_ushort_field_0x04)( /*0x499857*/
           this,
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           a9,
           a10,
           a11);
}


// ==== 0x00499860  _RLEBlitTransLucent50AlphaZReadWrite_G::AddRef  this=RLEBlitTransLucent50AlphaZReadWrite_ushort  sig=csp ====
unsigned __int16 *__thiscall RLEBlitTransLucent50AlphaZReadWrite_ushort::AddRef(
        int this,
        _WORD *a1,
        _BYTE *a2,
        RLEBlitTransLucent50AlphaZReadWrite_ushort *aP3,
        int a5,
        int arg10,
        unsigned __int16 *a6,
        unsigned __int16 *a7,
        int a9,
        int _38,
        char *a10)
{
  unsigned __int16 *v11; // ebx
  char *v12; // ecx
  unsigned __int16 *result; // eax
  int v15; // edx
  int v16; // edx
  unsigned __int8 *v17; // esi
  int v19; // edx
  unsigned __int8 *v20; // ebp
  int v21; // esi
  char *a1a; // [esp+18h] [ebp+4h]
  char *a10a; // [esp+3Ch] [ebp+28h]

  v11 = a7; /*0x499874*/
  v12 = a10; /*0x499880*/
  result = a6; /*0x499892*/
  v15 = (261 * (a9 <= 0 ? 0 : a9)) >> 11;
  a1a = a10; /*0x4998a2*/
  if ( v15 > 254 ) /*0x4998a6*/
    v15 = 254; /*0x4998a8*/
  a10a = (char *)(*(_DWORD *)(this + 8) + (v15 << 9)); /*0x4998bf*/
  v16 = a5; /*0x4998c3*/
  if ( a5 <= 0 ) /*0x4998c9*/
  {
    v17 = a2; /*0x499923*/
  }
  else
  {
    do /*0x4998ea*/
    {
      v17 = a2 + 1; /*0x4998d1*/
      if ( *a2++ == 0 ) /*0x4998d2*/
      {
        v16 -= *v17++; /*0x4998de*/
        a2 = v17; /*0x4998e1*/
      }
      else
      {
        --v16; /*0x4998e7*/
      }
    }
    while ( v16 > 0 ); /*0x4998ea*/
    v19 = -v16; /*0x4998f3*/
    aP3 = (RLEBlitTransLucent50AlphaZReadWrite_ushort *)((char *)aP3 - v19); /*0x4998f7*/
    a1 += v19; /*0x4998ff*/
    result = &a6[v19]; /*0x499902*/
    if ( (unsigned int)result >= *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[23348] + 28) ) /*0x499907*/
      result = (unsigned __int16 *)((char *)result - *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[23348] + 32)); /*0x499909*/
    v11 = &a7[v19]; /*0x499910*/
    if ( (unsigned int)v11 >= *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_14B0[4224] + 28) ) /*0x49991c*/
      v11 = (unsigned __int16 *)((char *)v11 - *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_14B0[4224] + 32)); /*0x49991e*/
  }
  if ( (int)aP3 > 0 ) /*0x49992d*/
  {
    while ( 1 ) /*0x49993f*/
    {
      v20 = ++a2; /*0x49993f*/
      if ( *v17 ) /*0x499940*/
      {
        if ( arg10 - *v12 >= *result ) /*0x499993*/
        {
          ++v12; /*0x499a02*/
          ++a1; /*0x499a03*/
          ++result; /*0x499a06*/
          a1a = v12; /*0x499a0a*/
          aP3 = (RLEBlitTransLucent50AlphaZReadWrite_ushort *)((char *)aP3 - 1); /*0x499a0e*/
        }
        else
        {
          ++result; /*0x49999f*/
          *a1 = (*(_WORD *)(this + 12) & (*a1 >> 1)) /*0x4999da*/
              + (*(_WORD *)(this + 12)
               & (*(_WORD *)(*(_DWORD *)(this + 4) + 2 * (*v17 | *(unsigned __int16 *)&a10a[2 * *v11])) >> 1));
          v12 = a1a + 1; /*0x4999e7*/
          *(result - 1) = arg10 - *a1a++; /*0x4999e8*/
          aP3 = (RLEBlitTransLucent50AlphaZReadWrite_ushort *)((char *)aP3 - 1); /*0x4999f5*/
          ++a1; /*0x4999f9*/
        }
        ++v11; /*0x499a12*/
      }
      else
      {
        a2 = v20 + 1; /*0x499957*/
        v21 = *v20; /*0x499963*/
        v12 += v21; /*0x49996b*/
        aP3 = (RLEBlitTransLucent50AlphaZReadWrite_ushort *)((char *)aP3 - v21); /*0x49996d*/
        a1 += v21; /*0x499974*/
        result += v21; /*0x499976*/
        a1a = v12; /*0x499978*/
        v11 += v21; /*0x49997c*/
      }
      if ( (unsigned int)result >= *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[23348] + 28) ) /*0x499a1e*/
        result = (unsigned __int16 *)((char *)result - *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[23348] + 32)); /*0x499a20*/
      if ( (unsigned int)v11 >= *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_14B0[4224] + 28) ) /*0x499a2c*/
        v11 = (unsigned __int16 *)((char *)v11 - *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_14B0[4224] + 32)); /*0x499a2e*/
      if ( (int)aP3 <= 0 ) /*0x499a37*/
        break; /*0x499a37*/
      v17 = a2; /*0x499935*/
    }
  }
  return result; /*0x499a3d*/
}


// ==== 0x00499A50  _RLEBlitTransLucent50AlphaZReadWrite_G::Release  this=RLEBlitTransLucent50AlphaZReadWrite_ushort  sig=csp ====
int __thiscall RLEBlitTransLucent50AlphaZReadWrite_ushort::_vt02(
        void *this,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12)
{
  return (*(int (__thiscall **)(void *, int, int, int, int, int, int, int, int, int, int))(this->RLEBlitTransLucent50AlphaZReadWrite_ushort_field_0x04)( /*0x499a87*/
           this,
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           a9,
           a10,
           a11);
}


// ==== 0x00499A90  _RLEBlitTransLucent25AlphaZReadWrite_G::AddRef  this=RLEBlitTransLucent25AlphaZReadWrite_ushort  sig=csp ====
int __thiscall RLEBlitTransLucent25AlphaZReadWrite_ushort::_vt01(
        int this,
        int a2,
        unsigned __int8 *a3,
        int a4,
        int a5,
        int a6,
        unsigned __int16 *a7,
        unsigned __int16 *a8,
        int a9,
        int a10,
        char *a11)
{
  unsigned __int16 *v11; // edx
  char *v12; // ebp
  int v14; // esi
  unsigned __int16 *v15; // edi
  int v16; // eax
  int v17; // eax
  int v19; // eax
  unsigned __int16 *v20; // eax
  int result; // eax
  unsigned __int8 v22; // al
  int v23; // ebx
  unsigned __int8 v25; // [esp+18h] [ebp+4h]
  char *v26; // [esp+1Ch] [ebp+8h]
  int v27; // [esp+3Ch] [ebp+28h]

  v11 = a7; /*0x499a98*/
  v12 = a11; /*0x499aa5*/
  v14 = a2; /*0x499ab9*/
  v15 = a8; /*0x499ac1*/
  v26 = a11; /*0x499ac5*/
  v16 = (261 * (a9 <= 0 ? 0 : a9)) >> 11;
  if ( v16 > 254 ) /*0x499ad1*/
    v16 = 254; /*0x499ad3*/
  v27 = *(_DWORD *)(this + 8) + (v16 << 9); /*0x499ae2*/
  v17 = a5; /*0x499ae6*/
  if ( a5 > 0 ) /*0x499aec*/
  {
    do /*0x499b01*/
    {
      if ( *a3++ ) /*0x499aee*/
        --v17; /*0x499afe*/
      else
        v17 -= *a3++; /*0x499af9*/
    }
    while ( v17 > 0 ); /*0x499b01*/
    v19 = -v17; /*0x499b0d*/
    v14 = a2 + 2 * v19; /*0x499b12*/
    a4 -= v19; /*0x499b1b*/
    v11 = &a7[v19]; /*0x499b23*/
    if ( (unsigned int)v11 >= *((_DWORD *)MEMORY[0x887644] + 7) ) /*0x499b28*/
      v11 = (unsigned __int16 *)((char *)v11 - *((_DWORD *)MEMORY[0x887644] + 8)); /*0x499b2a*/
    v20 = &a8[v19]; /*0x499b31*/
    if ( (unsigned int)v20 >= *((_DWORD *)MEMORY[0x87E8A4] + 7) ) /*0x499b3d*/
      v20 = (unsigned __int16 *)((char *)v20 - *((_DWORD *)MEMORY[0x87E8A4] + 8)); /*0x499b3f*/
    v15 = v20; /*0x499b42*/
  }
  for ( result = a4; a4 > 0; result = a4 ) /*0x499b4a*/
  {
    v22 = *a3++; /*0x499b50*/
    if ( v22 ) /*0x499b5d*/
    {
      if ( a6 - *v12 >= *v11 ) /*0x499b9e*/
      {
        ++v12; /*0x499c18*/
        v14 += 2; /*0x499c19*/
        ++v11; /*0x499c1c*/
      }
      else
      {
        v14 += 2; /*0x499baa*/
        ++v11; /*0x499bb6*/
        *(_WORD *)(v14 - 2) = (*(_WORD *)(this + 12) & (*(_WORD *)(v14 - 2) >> 2)) /*0x499bf1*/
                            + 3
                            * (*(_WORD *)(this + 12)
                             & (*(_WORD *)(*(_DWORD *)(this + 4) + 2 * (v22 | *(unsigned __int16 *)(v27 + 2 * *v15))) >> 2));
        *(v11 - 1) = a6 - *v26; /*0x499c00*/
        v12 = v26 + 1; /*0x499c08*/
      }
      v26 = v12; /*0x499c0a*/
      --a4; /*0x499c0e*/
      ++v15; /*0x499c28*/
    }
    else
    {
      v25 = *a3++; /*0x499b65*/
      v12 += v25; /*0x499b75*/
      a4 -= v25; /*0x499b77*/
      v23 = 2 * v25; /*0x499b7b*/
      v14 += v23; /*0x499b7e*/
      v11 = (unsigned __int16 *)((char *)v11 + v23); /*0x499b80*/
      v26 = v12; /*0x499b82*/
      v15 = (unsigned __int16 *)((char *)v15 + v23); /*0x499b86*/
    }
    if ( (unsigned int)v11 >= *((_DWORD *)MEMORY[0x887644] + 7) ) /*0x499c33*/
      v11 = (unsigned __int16 *)((char *)v11 - *((_DWORD *)MEMORY[0x887644] + 8)); /*0x499c35*/
    if ( (unsigned int)v15 >= *((_DWORD *)MEMORY[0x87E8A4] + 7) ) /*0x499c40*/
      v15 = (unsigned __int16 *)((char *)v15 - *((_DWORD *)MEMORY[0x87E8A4] + 8)); /*0x499c42*/
  }
  return result; /*0x499c51*/
}


// ==== 0x00499C60  _RLEBlitTransLucent25AlphaZReadWrite_G::Release  this=RLEBlitTransLucent25AlphaZReadWrite_ushort  sig=csp ====
int __thiscall RLEBlitTransLucent25AlphaZReadWrite_ushort::_vt02(
        void *this,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12)
{
  return (*(int (__thiscall **)(void *, int, int, int, int, int, int, int, int, int, int))(this->RLEBlitTransLucent25AlphaZReadWrite_ushort_field_0x04)( /*0x499c97*/
           this,
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           a9,
           a10,
           a11);
}


// ==== 0x00499CA0  _BlitTransXlat_G::??_Gfacet_locale_std__UAEPAXI_Z_4  this=BlitTransXlat  sig=csp ====
BlitTransXlat *__thiscall ___Gfacet_locale_std__UAEPAXI_Z_4(std::locale::facet *this, char a2)
{
  *(_DWORD *)this = &vt_Blitter; /*0x499ca9*/
  if ( (a2 & 1) != 0 ) /*0x499caf*/
    __3_YAXPAX_Z(this); /*0x499cb2*/
  return (BlitTransXlat *)this; /*0x499cbc*/
}


// ==== 0x00499CC0  Blitter::getTileIndex  this=Blitter  sig=csp ====
Blitter *__thiscall AbstractClass::getTileIndex(std::locale::facet *this, char a2)
{
  *(_DWORD *)this = &vt_Blitter; /*0x499cc9*/
  if ( (a2 & 1) != 0 ) /*0x499ccf*/
    __3_YAXPAX_Z(this); /*0x499cd2*/
  return (Blitter *)this; /*0x499cdc*/
}


// ==== 0x00499CE0  ?$BlitPlainXlat@E::setTileIndex  this=BlitPlainXlat  sig=csp ====
BlitPlainXlat *__thiscall AbstractClass::setTileIndex(std::locale::facet *this, char a2)
{
  *(_DWORD *)this = &vt_Blitter; /*0x499ce9*/
  if ( (a2 & 1) != 0 ) /*0x499cef*/
    __3_YAXPAX_Z(this); /*0x499cf2*/
  return (BlitPlainXlat *)this; /*0x499cfc*/
}


// ==== 0x00499D00  ?$BlitTransXlat@E::getOverlayType  this=BlitTransXlat  sig=csp ====
BlitTransXlat *__thiscall AbstractClass::getOverlayType(std::locale::facet *this, char a2)
{
  *(_DWORD *)this = &vt_Blitter; /*0x499d09*/
  if ( (a2 & 1) != 0 ) /*0x499d0f*/
    __3_YAXPAX_Z(this); /*0x499d12*/
  return (BlitTransXlat *)this; /*0x499d1c*/
}


// ==== 0x00499D20  ?$BlitTransZRemapXlat@E::setOverlayFlags  this=?$BlitTransZRemapXlat@E  sig=csp ====
std::locale::facet *__thiscall AbstractClass::setOverlayFlags(std::locale::facet *this, char a2)
{
  *(_DWORD *)this = &vt_Blitter; /*0x499d29*/
  if ( (a2 & 1) != 0 ) /*0x499d2f*/
    __3_YAXPAX_Z(this); /*0x499d32*/
  return this; /*0x499d3c*/
}


// ==== 0x00499D40  _BlitTransRemapDest_E::??_Gfacet_locale_std__UAEPAXI_Z_9  this=?$BlitTransRemapDest@E  sig=csp ====
std::locale::facet *__thiscall ___Gfacet_locale_std__UAEPAXI_Z_9(std::locale::facet *this, char a2)
{
  *(_DWORD *)this = &vt_Blitter; /*0x499d49*/
  if ( (a2 & 1) != 0 ) /*0x499d4f*/
    __3_YAXPAX_Z(this); /*0x499d52*/
  return this; /*0x499d5c*/
}


// ==== 0x00499D60  _BlitTransRemapXlat_E::??_Gfacet_locale_std__UAEPAXI_Z_10  this=?$BlitTransRemapXlat@E  sig=csp ====
std::locale::facet *__thiscall ___Gfacet_locale_std__UAEPAXI_Z_10(std::locale::facet *this, char a2)
{
  *(_DWORD *)this = &vt_Blitter; /*0x499d69*/
  if ( (a2 & 1) != 0 ) /*0x499d6f*/
    __3_YAXPAX_Z(this); /*0x499d72*/
  return this; /*0x499d7c*/
}


// ==== 0x00499D80  _RLEBlitTransXlat_E::??_Gfacet_locale_std__UAEPAXI_Z_11  this=RLEBlitTransXlat  sig=csp ====
RLEBlitTransXlat *__thiscall ___Gfacet_locale_std__UAEPAXI_Z_11(std::locale::facet *this, char a2)
{
  *(_DWORD *)this = &vt_RLEBlitter; /*0x499d89*/
  if ( (a2 & 1) != 0 ) /*0x499d8f*/
    __3_YAXPAX_Z(this); /*0x499d92*/
  return (RLEBlitTransXlat *)this; /*0x499d9c*/
}


// ==== 0x00499DA0  RLEBlitter::clearOverlayFlags  this=RLEBlitter  sig=csp ====
RLEBlitter *__thiscall AbstractClass::clearOverlayFlags(std::locale::facet *this, char a2)
{
  *(_DWORD *)this = &vt_RLEBlitter; /*0x499da9*/
  if ( (a2 & 1) != 0 ) /*0x499daf*/
    __3_YAXPAX_Z(this); /*0x499db2*/
  return (RLEBlitter *)this; /*0x499dbc*/
}


// ==== 0x00499DC0  _RLEBlitTransZRemapXlat_E::??_Gfacet_locale_std__UAEPAXI_Z_13  this=?$RLEBlitTransZRemapXlat@E  sig=csp ====
std::locale::facet *__thiscall ___Gfacet_locale_std__UAEPAXI_Z_13(std::locale::facet *this, char a2)
{
  *(_DWORD *)this = &vt_RLEBlitter; /*0x499dc9*/
  if ( (a2 & 1) != 0 ) /*0x499dcf*/
    __3_YAXPAX_Z(this); /*0x499dd2*/
  return this; /*0x499ddc*/
}


// ==== 0x00499DE0  _RLEBlitTransRemapDest_E::??_Gfacet_locale_std__UAEPAXI_Z_14  this=?$RLEBlitTransRemapDest@E  sig=csp ====
std::locale::facet *__thiscall ___Gfacet_locale_std__UAEPAXI_Z_14(std::locale::facet *this, char a2)
{
  *(_DWORD *)this = &vt_RLEBlitter; /*0x499de9*/
  if ( (a2 & 1) != 0 ) /*0x499def*/
    __3_YAXPAX_Z(this); /*0x499df2*/
  return this; /*0x499dfc*/
}


// ==== 0x00499E00  _RLEBlitTransRemapXlat_E::??_Gfacet_locale_std__UAEPAXI_Z_15  this=?$RLEBlitTransRemapXlat@E  sig=csp ====
std::locale::facet *__thiscall ___Gfacet_locale_std__UAEPAXI_Z_15(std::locale::facet *this, char a2)
{
  *(_DWORD *)this = &vt_RLEBlitter; /*0x499e09*/
  if ( (a2 & 1) != 0 ) /*0x499e0f*/
    __3_YAXPAX_Z(this); /*0x499e12*/
  return this; /*0x499e1c*/
}


// ==== 0x00499E20  _RLEBlitTransXlatZRead_E::??_Gfacet_locale_std__UAEPAXI_Z_16  this=RLEBlitTransXlatZRead  sig=csp ====
RLEBlitTransXlatZRead *__thiscall ___Gfacet_locale_std__UAEPAXI_Z_16(std::locale::facet *this, char a2)
{
  *(_DWORD *)this = &vt_RLEBlitter; /*0x499e29*/
  if ( (a2 & 1) != 0 ) /*0x499e2f*/
    __3_YAXPAX_Z(this); /*0x499e32*/
  return (RLEBlitTransXlatZRead *)this; /*0x499e3c*/
}


// ==== 0x00499E40  _RLEBlitTransZRemapXlatZRead_E::??_Gfacet_locale_std__UAEPAXI_Z_17  this=?$RLEBlitTransZRemapXlatZRead@E  sig=csp ====
std::locale::facet *__thiscall ___Gfacet_locale_std__UAEPAXI_Z_17(std::locale::facet *this, char a2)
{
  *(_DWORD *)this = &vt_RLEBlitter; /*0x499e49*/
  if ( (a2 & 1) != 0 ) /*0x499e4f*/
    __3_YAXPAX_Z(this); /*0x499e52*/
  return this; /*0x499e5c*/
}


// ==== 0x00499E60  _RLEBlitTransRemapDestZRead_E::??_Gfacet_locale_std__UAEPAXI_Z_18  this=?$RLEBlitTransRemapDestZRead@E  sig=csp ====
std::locale::facet *__thiscall ___Gfacet_locale_std__UAEPAXI_Z_18(std::locale::facet *this, char a2)
{
  *(_DWORD *)this = &vt_RLEBlitter; /*0x499e69*/
  if ( (a2 & 1) != 0 ) /*0x499e6f*/
    __3_YAXPAX_Z(this); /*0x499e72*/
  return this; /*0x499e7c*/
}


// ==== 0x00499E80  _RLEBlitTransRemapXlatZRead_E::??_Gfacet_locale_std__UAEPAXI_Z_19  this=?$RLEBlitTransRemapXlatZRead@E  sig=csp ====
std::locale::facet *__thiscall ___Gfacet_locale_std__UAEPAXI_Z_19(std::locale::facet *this, char a2)
{
  *(_DWORD *)this = &vt_RLEBlitter; /*0x499e89*/
  if ( (a2 & 1) != 0 ) /*0x499e8f*/
    __3_YAXPAX_Z(this); /*0x499e92*/
  return this; /*0x499e9c*/
}


// ==== 0x00499EA0  _RLEBlitTransXlatZReadWrite_E::??_Gfacet_locale_std__UAEPAXI_Z_20  this=?$RLEBlitTransXlatZReadWrite@E  sig=csp ====
std::locale::facet *__thiscall ___Gfacet_locale_std__UAEPAXI_Z_20(std::locale::facet *this, char a2)
{
  *(_DWORD *)this = &vt_RLEBlitter; /*0x499ea9*/
  if ( (a2 & 1) != 0 ) /*0x499eaf*/
    __3_YAXPAX_Z(this); /*0x499eb2*/
  return this; /*0x499ebc*/
}


// ==== 0x00499EC0  _RLEBlitTransZRemapXlatZReadWrite_E::??_Gfacet_locale_std__UAEPAXI_Z_21  this=?$RLEBlitTransZRemapXlatZReadWrite@E  sig=csp ====
std::locale::facet *__thiscall ___Gfacet_locale_std__UAEPAXI_Z_21(std::locale::facet *this, char a2)
{
  *(_DWORD *)this = &vt_RLEBlitter; /*0x499ec9*/
  if ( (a2 & 1) != 0 ) /*0x499ecf*/
    __3_YAXPAX_Z(this); /*0x499ed2*/
  return this; /*0x499edc*/
}


// ==== 0x00499EE0  _RLEBlitTransRemapDestZReadWrite_E::??_Gfacet_locale_std__UAEPAXI_Z_22  this=?$RLEBlitTransRemapDestZReadWrite@E  sig=csp ====
std::locale::facet *__thiscall ___Gfacet_locale_std__UAEPAXI_Z_22(std::locale::facet *this, char a2)
{
  *(_DWORD *)this = &vt_RLEBlitter; /*0x499ee9*/
  if ( (a2 & 1) != 0 ) /*0x499eef*/
    __3_YAXPAX_Z(this); /*0x499ef2*/
  return this; /*0x499efc*/
}


// ==== 0x00499F00  _RLEBlitTransRemapXlatZReadWrite_E::??_Gfacet_locale_std__UAEPAXI_Z_23  this=?$RLEBlitTransRemapXlatZReadWrite@E  sig=csp ====
std::locale::facet *__thiscall ___Gfacet_locale_std__UAEPAXI_Z_23(std::locale::facet *this, char a2)
{
  *(_DWORD *)this = &vt_RLEBlitter; /*0x499f09*/
  if ( (a2 & 1) != 0 ) /*0x499f0f*/
    __3_YAXPAX_Z(this); /*0x499f12*/
  return this; /*0x499f1c*/
}


// ==== 0x00499F20  _BlitPlainXlat_G::??_Gfacet_locale_std__UAEPAXI_Z_24  this=BlitPlainXlat  sig=csp ====
BlitPlainXlat *__thiscall ___Gfacet_locale_std__UAEPAXI_Z_24(std::locale::facet *this, char a2)
{
  *(_DWORD *)this = &vt_Blitter; /*0x499f29*/
  if ( (a2 & 1) != 0 ) /*0x499f2f*/
    __3_YAXPAX_Z(this); /*0x499f32*/
  return (BlitPlainXlat *)this; /*0x499f3c*/
}


// ==== 0x00499F40  _BlitTransZRemapXlat_G::??_Gfacet_locale_std__UAEPAXI_Z_25  this=?$BlitTransZRemapXlat@G  sig=csp ====
std::locale::facet *__thiscall ___Gfacet_locale_std__UAEPAXI_Z_25(std::locale::facet *this, char a2)
{
  *(_DWORD *)this = &vt_Blitter; /*0x499f49*/
  if ( (a2 & 1) != 0 ) /*0x499f4f*/
    __3_YAXPAX_Z(this); /*0x499f52*/
  return this; /*0x499f5c*/
}


// ==== 0x00499F60  _BlitTransDarken_G::??_Gfacet_locale_std__UAEPAXI_Z_26  this=BlitTransDarken  sig=csp ====
BlitTransDarken *__thiscall ___Gfacet_locale_std__UAEPAXI_Z_26(std::locale::facet *this, char a2)
{
  *(_DWORD *)this = &vt_Blitter; /*0x499f69*/
  if ( (a2 & 1) != 0 ) /*0x499f6f*/
    __3_YAXPAX_Z(this); /*0x499f72*/
  return (BlitTransDarken *)this; /*0x499f7c*/
}


// ==== 0x00499F80  _BlitTransLucent75_G::??_Gfacet_locale_std__UAEPAXI_Z_27  this=BlitTransLucent75  sig=csp ====
BlitTransLucent75 *__thiscall ___Gfacet_locale_std__UAEPAXI_Z_27(std::locale::facet *this, char a2)
{
  *(_DWORD *)this = &vt_Blitter; /*0x499f89*/
  if ( (a2 & 1) != 0 ) /*0x499f8f*/
    __3_YAXPAX_Z(this); /*0x499f92*/
  return (BlitTransLucent75 *)this; /*0x499f9c*/
}


// ==== 0x00499FA0  _BlitTransLucent50_G::??_Gfacet_locale_std__UAEPAXI_Z_28  this=BlitTransLucent50  sig=csp ====
BlitTransLucent50 *__thiscall ___Gfacet_locale_std__UAEPAXI_Z_28(std::locale::facet *this, char a2)
{
  *(_DWORD *)this = &vt_Blitter; /*0x499fa9*/
  if ( (a2 & 1) != 0 ) /*0x499faf*/
    __3_YAXPAX_Z(this); /*0x499fb2*/
  return (BlitTransLucent50 *)this; /*0x499fbc*/
}


// ==== 0x00499FC0  _BlitTransLucent25_G::??_Gfacet_locale_std__UAEPAXI_Z_29  this=BlitTransLucent25  sig=csp ====
BlitTransLucent25 *__thiscall ___Gfacet_locale_std__UAEPAXI_Z_29(std::locale::facet *this, char a2)
{
  *(_DWORD *)this = &vt_Blitter; /*0x499fc9*/
  if ( (a2 & 1) != 0 ) /*0x499fcf*/
    __3_YAXPAX_Z(this); /*0x499fd2*/
  return (BlitTransLucent25 *)this; /*0x499fdc*/
}


// ==== 0x00499FE0  _BlitPlainXlatZRead_G::??_Gfacet_locale_std__UAEPAXI_Z_30  this=?$BlitPlainXlatZRead@G  sig=csp ====
std::locale::facet *__thiscall ___Gfacet_locale_std__UAEPAXI_Z_30(std::locale::facet *this, char a2)
{
  *(_DWORD *)this = &vt_Blitter; /*0x499fe9*/
  if ( (a2 & 1) != 0 ) /*0x499fef*/
    __3_YAXPAX_Z(this); /*0x499ff2*/
  return this; /*0x499ffc*/
}


// ==== 0x0049A000  _BlitTransXlatZRead_G::??_Gfacet_locale_std__UAEPAXI_Z_31  this=BlitTransXlatZRead  sig=csp ====
BlitTransXlatZRead *__thiscall ___Gfacet_locale_std__UAEPAXI_Z_31(std::locale::facet *this, char a2)
{
  *(_DWORD *)this = &vt_Blitter; /*0x49a009*/
  if ( (a2 & 1) != 0 ) /*0x49a00f*/
    __3_YAXPAX_Z(this); /*0x49a012*/
  return (BlitTransXlatZRead *)this; /*0x49a01c*/
}


// ==== 0x0049A020  _BlitTransZRemapXlatZRead_G::??_Gfacet_locale_std__UAEPAXI_Z_32  this=?$BlitTransZRemapXlatZRead@G  sig=csp ====
std::locale::facet *__thiscall ___Gfacet_locale_std__UAEPAXI_Z_32(std::locale::facet *this, char a2)
{
  *(_DWORD *)this = &vt_Blitter; /*0x49a029*/
  if ( (a2 & 1) != 0 ) /*0x49a02f*/
    __3_YAXPAX_Z(this); /*0x49a032*/
  return this; /*0x49a03c*/
}


// ==== 0x0049A040  _BlitTransDarkenZRead_G::??_Gfacet_locale_std__UAEPAXI_Z_33  this=?$BlitTransDarkenZRead@G  sig=csp ====
std::locale::facet *__thiscall ___Gfacet_locale_std__UAEPAXI_Z_33(std::locale::facet *this, char a2)
{
  *(_DWORD *)this = &vt_Blitter; /*0x49a049*/
  if ( (a2 & 1) != 0 ) /*0x49a04f*/
    __3_YAXPAX_Z(this); /*0x49a052*/
  return this; /*0x49a05c*/
}


// ==== 0x0049A060  _BlitTransLucent75ZRead_G::??_Gfacet_locale_std__UAEPAXI_Z_34  this=?$BlitTransLucent75ZRead@G  sig=csp ====
std::locale::facet *__thiscall ___Gfacet_locale_std__UAEPAXI_Z_34(std::locale::facet *this, char a2)
{
  *(_DWORD *)this = &vt_Blitter; /*0x49a069*/
  if ( (a2 & 1) != 0 ) /*0x49a06f*/
    __3_YAXPAX_Z(this); /*0x49a072*/
  return this; /*0x49a07c*/
}


// ==== 0x0049A080  _BlitTransLucent50ZRead_G::??_Gfacet_locale_std__UAEPAXI_Z_35  this=?$BlitTransLucent50ZRead@G  sig=csp ====
std::locale::facet *__thiscall ___Gfacet_locale_std__UAEPAXI_Z_35(std::locale::facet *this, char a2)
{
  *(_DWORD *)this = &vt_Blitter; /*0x49a089*/
  if ( (a2 & 1) != 0 ) /*0x49a08f*/
    __3_YAXPAX_Z(this); /*0x49a092*/
  return this; /*0x49a09c*/
}


// ==== 0x0049A0A0  _BlitTransLucent25ZRead_G::??_Gfacet_locale_std__UAEPAXI_Z_36  this=?$BlitTransLucent25ZRead@G  sig=csp ====
std::locale::facet *__thiscall ___Gfacet_locale_std__UAEPAXI_Z_36(std::locale::facet *this, char a2)
{
  *(_DWORD *)this = &vt_Blitter; /*0x49a0a9*/
  if ( (a2 & 1) != 0 ) /*0x49a0af*/
    __3_YAXPAX_Z(this); /*0x49a0b2*/
  return this; /*0x49a0bc*/
}


// ==== 0x0049A0C0  _BlitTransLucent75ZReadWarp_G::??_Gfacet_locale_std__UAEPAXI_Z_37  this=?$BlitTransLucent75ZReadWarp@G  sig=csp ====
std::locale::facet *__thiscall ___Gfacet_locale_std__UAEPAXI_Z_37(std::locale::facet *this, char a2)
{
  *(_DWORD *)this = &vt_Blitter; /*0x49a0c9*/
  if ( (a2 & 1) != 0 ) /*0x49a0cf*/
    __3_YAXPAX_Z(this); /*0x49a0d2*/
  return this; /*0x49a0dc*/
}


// ==== 0x0049A0E0  _BlitTransLucent50ZReadWarp_G::??_Gfacet_locale_std__UAEPAXI_Z_38  this=?$BlitTransLucent50ZReadWarp@G  sig=csp ====
std::locale::facet *__thiscall ___Gfacet_locale_std__UAEPAXI_Z_38(std::locale::facet *this, char a2)
{
  *(_DWORD *)this = &vt_Blitter; /*0x49a0e9*/
  if ( (a2 & 1) != 0 ) /*0x49a0ef*/
    __3_YAXPAX_Z(this); /*0x49a0f2*/
  return this; /*0x49a0fc*/
}


// ==== 0x0049A100  _BlitTransLucent25ZReadWarp_G::??_Gfacet_locale_std__UAEPAXI_Z_39  this=?$BlitTransLucent25ZReadWarp@G  sig=csp ====
std::locale::facet *__thiscall ___Gfacet_locale_std__UAEPAXI_Z_39(std::locale::facet *this, char a2)
{
  *(_DWORD *)this = &vt_Blitter; /*0x49a109*/
  if ( (a2 & 1) != 0 ) /*0x49a10f*/
    __3_YAXPAX_Z(this); /*0x49a112*/
  return this; /*0x49a11c*/
}


// ==== 0x0049A120  _BlitPlainXlatZReadWrite_G::??_Gfacet_locale_std__UAEPAXI_Z_40  this=?$BlitPlainXlatZReadWrite@G  sig=csp ====
std::locale::facet *__thiscall ___Gfacet_locale_std__UAEPAXI_Z_40(std::locale::facet *this, char a2)
{
  *(_DWORD *)this = &vt_Blitter; /*0x49a129*/
  if ( (a2 & 1) != 0 ) /*0x49a12f*/
    __3_YAXPAX_Z(this); /*0x49a132*/
  return this; /*0x49a13c*/
}


// ==== 0x0049A140  _BlitTransXlatZReadWrite_G::??_Gfacet_locale_std__UAEPAXI_Z_41  this=BlitTransXlatZReadWrite  sig=csp ====
BlitTransXlatZReadWrite *__thiscall ___Gfacet_locale_std__UAEPAXI_Z_41(std::locale::facet *this, char a2)
{
  *(_DWORD *)this = &vt_Blitter; /*0x49a149*/
  if ( (a2 & 1) != 0 ) /*0x49a14f*/
    __3_YAXPAX_Z(this); /*0x49a152*/
  return (BlitTransXlatZReadWrite *)this; /*0x49a15c*/
}


// ==== 0x0049A160  _BlitTransZRemapXlatZReadWrite_G::??_Gfacet_locale_std__UAEPAXI_Z_42  this=?$BlitTransZRemapXlatZReadWrite@G  sig=csp ====
std::locale::facet *__thiscall ___Gfacet_locale_std__UAEPAXI_Z_42(std::locale::facet *this, char a2)
{
  *(_DWORD *)this = &vt_Blitter; /*0x49a169*/
  if ( (a2 & 1) != 0 ) /*0x49a16f*/
    __3_YAXPAX_Z(this); /*0x49a172*/
  return this; /*0x49a17c*/
}


// ==== 0x0049A180  _BlitTransDarkenZReadWrite_G::??_Gfacet_locale_std__UAEPAXI_Z_43  this=?$BlitTransDarkenZReadWrite@G  sig=csp ====
std::locale::facet *__thiscall ___Gfacet_locale_std__UAEPAXI_Z_43(std::locale::facet *this, char a2)
{
  *(_DWORD *)this = &vt_Blitter; /*0x49a189*/
  if ( (a2 & 1) != 0 ) /*0x49a18f*/
    __3_YAXPAX_Z(this); /*0x49a192*/
  return this; /*0x49a19c*/
}


// ==== 0x0049A1A0  _BlitTransLucent75ZReadWrite_G::Constructor_Blitter  this=?$BlitTransLucent75ZReadWrite@G  sig=csp ====
std::locale::facet *__thiscall BlitTransXlatAlpha_ushort::Constructor_Blitter(std::locale::facet *this, char a2)
{
  *(_DWORD *)this = &vt_Blitter; /*0x49a1a9*/
  if ( (a2 & 1) != 0 ) /*0x49a1af*/
    __3_YAXPAX_Z(this); /*0x49a1b2*/
  return this; /*0x49a1bc*/
}


// ==== 0x0049A1C0  _BlitTransLucent50ZReadWrite_G::Constructor_Blitter_0  this=?$BlitTransLucent50ZReadWrite@G  sig=csp ====
std::locale::facet *__thiscall BlitTransXlatAlpha_ushort::Constructor_Blitter_0(std::locale::facet *this, char a2)
{
  *(_DWORD *)this = &vt_Blitter; /*0x49a1c9*/
  if ( (a2 & 1) != 0 ) /*0x49a1cf*/
    __3_YAXPAX_Z(this); /*0x49a1d2*/
  return this; /*0x49a1dc*/
}


// ==== 0x0049A1E0  _BlitTransLucent25ZReadWrite_G::Constructor_Blitter_1  this=?$BlitTransLucent25ZReadWrite@G  sig=csp ====
std::locale::facet *__thiscall BlitTransXlatAlpha_ushort::Constructor_Blitter_1(std::locale::facet *this, char a2)
{
  *(_DWORD *)this = &vt_Blitter; /*0x49a1e9*/
  if ( (a2 & 1) != 0 ) /*0x49a1ef*/
    __3_YAXPAX_Z(this); /*0x49a1f2*/
  return this; /*0x49a1fc*/
}


// ==== 0x0049A200  _BlitPlainXlatAlpha_G::QueryInterface  this=BlitPlainXlatAlpha_ushort  sig=csp ====
BlitPlainXlatAlpha_ushort *__thiscall BlitPlainXlatAlpha_ushort::QueryInterface(_DWORD *Block, char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 2); /*0x49a208*/
  *Block = &BlitPlainXlatAlpha<unsigned short>::`vftable'; /*0x49a20b*/
  FractalNoise::Release(v3); /*0x49a212*/
  *(Block + 2) = 0; /*0x49a21b*/
  *Block = &vt_Blitter; /*0x49a224*/
  if ( (a2 & 1) != 0 ) /*0x49a22a*/
    __3_YAXPAX_Z(Block); /*0x49a22d*/
  return (BlitPlainXlatAlpha_ushort *)Block; /*0x49a237*/
}


// ==== 0x0049A240  _BlitTransXlatAlpha_G::Blit  this=BlitTransXlatAlpha_ushort  sig=csp ====
BlitTransXlatAlpha_ushort *__thiscall BlitTransXlatAlpha_ushort::Blit(_DWORD *Block, char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 2); /*0x49a248*/
  *Block = &vt_BlitTransXlatAlpha_unsigned_short; /*0x49a24b*/
  FractalNoise::Release(v3); /*0x49a252*/
  *(Block + 2) = 0; /*0x49a25b*/
  *Block = &vt_Blitter; /*0x49a264*/
  if ( (a2 & 1) != 0 ) /*0x49a26a*/
    __3_YAXPAX_Z(Block); /*0x49a26d*/
  return (BlitTransXlatAlpha_ushort *)Block; /*0x49a277*/
}


// ==== 0x0049A280  _BlitTransZRemapXlatAlpha_G::Blit  this=BlitTransZRemapXlatAlpha_ushort  sig=csp ====
BlitTransZRemapXlatAlpha_ushort *__thiscall BlitTransZRemapXlatAlpha_ushort::Blit(_DWORD *Block, char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 3); /*0x49a288*/
  *Block = &BlitTransZRemapXlatAlpha<unsigned short>::`vftable'; /*0x49a28b*/
  FractalNoise::Release(v3); /*0x49a292*/
  *(Block + 3) = 0; /*0x49a29b*/
  *Block = &vt_Blitter; /*0x49a2a4*/
  if ( (a2 & 1) != 0 ) /*0x49a2aa*/
    __3_YAXPAX_Z(Block); /*0x49a2ad*/
  return (BlitTransZRemapXlatAlpha_ushort *)Block; /*0x49a2b7*/
}


// ==== 0x0049A2C0  _BlitTransLucent75Alpha_G::Blit  this=BlitTransLucent75Alpha_ushort  sig=csp ====
BlitTransLucent75Alpha_ushort *__thiscall BlitTransLucent75Alpha_ushort::Blit(_DWORD *Block, char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 2); /*0x49a2c8*/
  *Block = &BlitTransLucent75Alpha<unsigned short>::`vftable'; /*0x49a2cb*/
  FractalNoise::Release(v3); /*0x49a2d2*/
  *(Block + 2) = 0; /*0x49a2db*/
  *Block = &vt_Blitter; /*0x49a2e4*/
  if ( (a2 & 1) != 0 ) /*0x49a2ea*/
    __3_YAXPAX_Z(Block); /*0x49a2ed*/
  return (BlitTransLucent75Alpha_ushort *)Block; /*0x49a2f7*/
}


// ==== 0x0049A300  _BlitTransLucent50Alpha_G::Blit  this=BlitTransLucent50Alpha_ushort  sig=csp ====
BlitTransLucent50Alpha_ushort *__thiscall BlitTransLucent50Alpha_ushort::Blit(_DWORD *Block, char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 2); /*0x49a308*/
  *Block = &BlitTransLucent50Alpha<unsigned short>::`vftable'; /*0x49a30b*/
  FractalNoise::Release(v3); /*0x49a312*/
  *(Block + 2) = 0; /*0x49a31b*/
  *Block = &vt_Blitter; /*0x49a324*/
  if ( (a2 & 1) != 0 ) /*0x49a32a*/
    __3_YAXPAX_Z(Block); /*0x49a32d*/
  return (BlitTransLucent50Alpha_ushort *)Block; /*0x49a337*/
}


// ==== 0x0049A340  _BlitTransLucent25Alpha_G::Blit  this=BlitTransLucent25Alpha_ushort  sig=csp ====
BlitTransLucent25Alpha_ushort *__thiscall BlitTransLucent25Alpha_ushort::Blit(_DWORD *Block, char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 2); /*0x49a348*/
  *Block = &vt_BlitTransLucent25Alpha_unsigned_short; /*0x49a34b*/
  FractalNoise::Release(v3); /*0x49a352*/
  *(Block + 2) = 0; /*0x49a35b*/
  *Block = &vt_Blitter; /*0x49a364*/
  if ( (a2 & 1) != 0 ) /*0x49a36a*/
    __3_YAXPAX_Z(Block); /*0x49a36d*/
  return (BlitTransLucent25Alpha_ushort *)Block; /*0x49a377*/
}


// ==== 0x0049A380  _BlitTransXlatWriteAlpha_G::Constructor_Blitter  this=?$BlitTransXlatWriteAlpha@G  sig=csp ====
std::locale::facet *__thiscall BlitTransLucent25Alpha_ushort::Constructor_Blitter(std::locale::facet *this, char a2)
{
  *(_DWORD *)this = &vt_Blitter; /*0x49a389*/
  if ( (a2 & 1) != 0 ) /*0x49a38f*/
    __3_YAXPAX_Z(this); /*0x49a392*/
  return this; /*0x49a39c*/
}


// ==== 0x0049A3A0  _BlitTransXlatMultWriteAlpha_G::Constructor_Blitter  this=?$BlitTransXlatMultWriteAlpha@G  sig=csp ====
std::locale::facet *__thiscall BlitTransXlatAlphaZRead_ushort::Constructor_Blitter(std::locale::facet *this, char a2)
{
  *(_DWORD *)this = &vt_Blitter; /*0x49a3a9*/
  if ( (a2 & 1) != 0 ) /*0x49a3af*/
    __3_YAXPAX_Z(this); /*0x49a3b2*/
  return this; /*0x49a3bc*/
}


// ==== 0x0049A3C0  _BlitTranslucentWriteAlpha_G::Constructor_Blitter_0  this=?$BlitTranslucentWriteAlpha@G  sig=csp ====
std::locale::facet *__thiscall BlitTransXlatAlphaZRead_ushort::Constructor_Blitter_0(std::locale::facet *this, char a2)
{
  *(_DWORD *)this = &vt_Blitter; /*0x49a3c9*/
  if ( (a2 & 1) != 0 ) /*0x49a3cf*/
    __3_YAXPAX_Z(this); /*0x49a3d2*/
  return this; /*0x49a3dc*/
}


// ==== 0x0049A3E0  _BlitTranslucent50NonzeroAlpha_G::Constructor_Blitter_1  this=?$BlitTranslucent50NonzeroAlpha@G  sig=csp ====
std::locale::facet *__thiscall BlitTransXlatAlphaZRead_ushort::Constructor_Blitter_1(std::locale::facet *this, char a2)
{
  *(_DWORD *)this = &vt_Blitter; /*0x49a3e9*/
  if ( (a2 & 1) != 0 ) /*0x49a3ef*/
    __3_YAXPAX_Z(this); /*0x49a3f2*/
  return this; /*0x49a3fc*/
}


// ==== 0x0049A400  _BlitTranslucent50ZeroAlpha_G::Constructor_Blitter_2  this=?$BlitTranslucent50ZeroAlpha@G  sig=csp ====
std::locale::facet *__thiscall BlitTransXlatAlphaZRead_ushort::Constructor_Blitter_2(std::locale::facet *this, char a2)
{
  *(_DWORD *)this = &vt_Blitter; /*0x49a409*/
  if ( (a2 & 1) != 0 ) /*0x49a40f*/
    __3_YAXPAX_Z(this); /*0x49a412*/
  return this; /*0x49a41c*/
}


// ==== 0x0049A420  _BlitTransXlatAlphaZRead_G::Blit  this=BlitTransXlatAlphaZRead_ushort  sig=csp ====
BlitTransXlatAlphaZRead_ushort *__thiscall BlitTransXlatAlphaZRead_ushort::Blit(_DWORD *Block, char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 2); /*0x49a428*/
  *Block = &vt_BlitTransXlatAlphaZRead_unsigned_short; /*0x49a42b*/
  FractalNoise::Release(v3); /*0x49a432*/
  *(Block + 2) = 0; /*0x49a43b*/
  *Block = &vt_Blitter; /*0x49a444*/
  if ( (a2 & 1) != 0 ) /*0x49a44a*/
    __3_YAXPAX_Z(Block); /*0x49a44d*/
  return (BlitTransXlatAlphaZRead_ushort *)Block; /*0x49a457*/
}


// ==== 0x0049A460  _BlitTransZRemapXlatAlphaZRead_G::Blit  this=BlitTransZRemapXlatAlphaZRead_ushort  sig=csp ====
BlitTransZRemapXlatAlphaZRead_ushort *__thiscall BlitTransZRemapXlatAlphaZRead_ushort::Blit(_DWORD *Block, char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 3); /*0x49a468*/
  *Block = &BlitTransZRemapXlatAlphaZRead<unsigned short>::`vftable'; /*0x49a46b*/
  FractalNoise::Release(v3); /*0x49a472*/
  *(Block + 3) = 0; /*0x49a47b*/
  *Block = &vt_Blitter; /*0x49a484*/
  if ( (a2 & 1) != 0 ) /*0x49a48a*/
    __3_YAXPAX_Z(Block); /*0x49a48d*/
  return (BlitTransZRemapXlatAlphaZRead_ushort *)Block; /*0x49a497*/
}


// ==== 0x0049A4A0  _BlitTransLucent75AlphaZRead_G::Blit  this=BlitTransLucent75AlphaZRead_ushort  sig=csp ====
BlitTransLucent75AlphaZRead_ushort *__thiscall BlitTransLucent75AlphaZRead_ushort::Blit(_DWORD *Block, char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 2); /*0x49a4a8*/
  *Block = &BlitTransLucent75AlphaZRead<unsigned short>::`vftable'; /*0x49a4ab*/
  FractalNoise::Release(v3); /*0x49a4b2*/
  *(Block + 2) = 0; /*0x49a4bb*/
  *Block = &vt_Blitter; /*0x49a4c4*/
  if ( (a2 & 1) != 0 ) /*0x49a4ca*/
    __3_YAXPAX_Z(Block); /*0x49a4cd*/
  return (BlitTransLucent75AlphaZRead_ushort *)Block; /*0x49a4d7*/
}


// ==== 0x0049A4E0  _BlitTransLucent50AlphaZRead_G::Blit  this=BlitTransLucent50AlphaZRead_ushort  sig=csp ====
BlitTransLucent50AlphaZRead_ushort *__thiscall BlitTransLucent50AlphaZRead_ushort::Blit(_DWORD *Block, char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 2); /*0x49a4e8*/
  *Block = &BlitTransLucent50AlphaZRead<unsigned short>::`vftable'; /*0x49a4eb*/
  FractalNoise::Release(v3); /*0x49a4f2*/
  *(Block + 2) = 0; /*0x49a4fb*/
  *Block = &vt_Blitter; /*0x49a504*/
  if ( (a2 & 1) != 0 ) /*0x49a50a*/
    __3_YAXPAX_Z(Block); /*0x49a50d*/
  return (BlitTransLucent50AlphaZRead_ushort *)Block; /*0x49a517*/
}


// ==== 0x0049A520  _BlitTransLucent25AlphaZRead_G::Blit  this=BlitTransLucent25AlphaZRead_ushort  sig=csp ====
BlitTransLucent25AlphaZRead_ushort *__thiscall BlitTransLucent25AlphaZRead_ushort::Blit(_DWORD *Block, char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 2); /*0x49a528*/
  *Block = &BlitTransLucent25AlphaZRead<unsigned short>::`vftable'; /*0x49a52b*/
  FractalNoise::Release(v3); /*0x49a532*/
  *(Block + 2) = 0; /*0x49a53b*/
  *Block = &vt_Blitter; /*0x49a544*/
  if ( (a2 & 1) != 0 ) /*0x49a54a*/
    __3_YAXPAX_Z(Block); /*0x49a54d*/
  return (BlitTransLucent25AlphaZRead_ushort *)Block; /*0x49a557*/
}


// ==== 0x0049A560  _BlitTransLucent75AlphaZReadWarp_G::Blit  this=BlitTransLucent75AlphaZReadWarp_ushort  sig=csp ====
BlitTransLucent75AlphaZReadWarp_ushort *__thiscall BlitTransLucent75AlphaZReadWarp_ushort::Blit(_DWORD *Block, char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 2); /*0x49a568*/
  *Block = &BlitTransLucent75AlphaZReadWarp<unsigned short>::`vftable'; /*0x49a56b*/
  FractalNoise::Release(v3); /*0x49a572*/
  *(Block + 2) = 0; /*0x49a57b*/
  *Block = &vt_Blitter; /*0x49a584*/
  if ( (a2 & 1) != 0 ) /*0x49a58a*/
    __3_YAXPAX_Z(Block); /*0x49a58d*/
  return (BlitTransLucent75AlphaZReadWarp_ushort *)Block; /*0x49a597*/
}


// ==== 0x0049A5A0  _BlitTransLucent50AlphaZReadWarp_G::Blit  this=BlitTransLucent50AlphaZReadWarp_ushort  sig=csp ====
BlitTransLucent50AlphaZReadWarp_ushort *__thiscall BlitTransLucent50AlphaZReadWarp_ushort::Blit(_DWORD *Block, char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 2); /*0x49a5a8*/
  *Block = &BlitTransLucent50AlphaZReadWarp<unsigned short>::`vftable'; /*0x49a5ab*/
  FractalNoise::Release(v3); /*0x49a5b2*/
  *(Block + 2) = 0; /*0x49a5bb*/
  *Block = &vt_Blitter; /*0x49a5c4*/
  if ( (a2 & 1) != 0 ) /*0x49a5ca*/
    __3_YAXPAX_Z(Block); /*0x49a5cd*/
  return (BlitTransLucent50AlphaZReadWarp_ushort *)Block; /*0x49a5d7*/
}


// ==== 0x0049A5E0  _BlitTransLucent25AlphaZReadWarp_G::Blit  this=BlitTransLucent25AlphaZReadWarp_ushort  sig=csp ====
BlitTransLucent25AlphaZReadWarp_ushort *__thiscall BlitTransLucent25AlphaZReadWarp_ushort::Blit(_DWORD *Block, char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 2); /*0x49a5e8*/
  *Block = &BlitTransLucent25AlphaZReadWarp<unsigned short>::`vftable'; /*0x49a5eb*/
  FractalNoise::Release(v3); /*0x49a5f2*/
  *(Block + 2) = 0; /*0x49a5fb*/
  *Block = &vt_Blitter; /*0x49a604*/
  if ( (a2 & 1) != 0 ) /*0x49a60a*/
    __3_YAXPAX_Z(Block); /*0x49a60d*/
  return (BlitTransLucent25AlphaZReadWarp_ushort *)Block; /*0x49a617*/
}


// ==== 0x0049A620  _BlitTransXlatAlphaZReadWrite_G::Blit  this=BlitTransXlatAlphaZReadWrite_ushort  sig=csp ====
BlitTransXlatAlphaZReadWrite_ushort *__thiscall BlitTransXlatAlphaZReadWrite_ushort::Blit(_DWORD *Block, char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 2); /*0x49a628*/
  *Block = &BlitTransXlatAlphaZReadWrite<unsigned short>::`vftable'; /*0x49a62b*/
  FractalNoise::Release(v3); /*0x49a632*/
  *(Block + 2) = 0; /*0x49a63b*/
  *Block = &vt_Blitter; /*0x49a644*/
  if ( (a2 & 1) != 0 ) /*0x49a64a*/
    __3_YAXPAX_Z(Block); /*0x49a64d*/
  return (BlitTransXlatAlphaZReadWrite_ushort *)Block; /*0x49a657*/
}


// ==== 0x0049A660  _BlitTransZRemapXlatAlphaZReadWrite_G::Blit  this=BlitTransZRemapXlatAlphaZReadWrite_ushort  sig=csp ====
BlitTransZRemapXlatAlphaZReadWrite_ushort *__thiscall BlitTransZRemapXlatAlphaZReadWrite_ushort::Blit(
        _DWORD *Block,
        char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 3); /*0x49a668*/
  *Block = &BlitTransZRemapXlatAlphaZReadWrite<unsigned short>::`vftable'; /*0x49a66b*/
  FractalNoise::Release(v3); /*0x49a672*/
  *(Block + 3) = 0; /*0x49a67b*/
  *Block = &vt_Blitter; /*0x49a684*/
  if ( (a2 & 1) != 0 ) /*0x49a68a*/
    __3_YAXPAX_Z(Block); /*0x49a68d*/
  return (BlitTransZRemapXlatAlphaZReadWrite_ushort *)Block; /*0x49a697*/
}


// ==== 0x0049A6A0  _BlitTransLucent75AlphaZReadWrite_G::Blit  this=BlitTransLucent75AlphaZReadWrite_ushort  sig=csp ====
BlitTransLucent75AlphaZReadWrite_ushort *__thiscall BlitTransLucent75AlphaZReadWrite_ushort::Blit(
        _DWORD *Block,
        char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 2); /*0x49a6a8*/
  *Block = &BlitTransLucent75AlphaZReadWrite<unsigned short>::`vftable'; /*0x49a6ab*/
  FractalNoise::Release(v3); /*0x49a6b2*/
  *(Block + 2) = 0; /*0x49a6bb*/
  *Block = &vt_Blitter; /*0x49a6c4*/
  if ( (a2 & 1) != 0 ) /*0x49a6ca*/
    __3_YAXPAX_Z(Block); /*0x49a6cd*/
  return (BlitTransLucent75AlphaZReadWrite_ushort *)Block; /*0x49a6d7*/
}


// ==== 0x0049A6E0  _BlitTransLucent50AlphaZReadWrite_G::Blit  this=BlitTransLucent50AlphaZReadWrite_ushort  sig=csp ====
BlitTransLucent50AlphaZReadWrite_ushort *__thiscall BlitTransLucent50AlphaZReadWrite_ushort::Blit(
        _DWORD *Block,
        char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 2); /*0x49a6e8*/
  *Block = &BlitTransLucent50AlphaZReadWrite<unsigned short>::`vftable'; /*0x49a6eb*/
  FractalNoise::Release(v3); /*0x49a6f2*/
  *(Block + 2) = 0; /*0x49a6fb*/
  *Block = &vt_Blitter; /*0x49a704*/
  if ( (a2 & 1) != 0 ) /*0x49a70a*/
    __3_YAXPAX_Z(Block); /*0x49a70d*/
  return (BlitTransLucent50AlphaZReadWrite_ushort *)Block; /*0x49a717*/
}


// ==== 0x0049A720  _BlitTransLucent25AlphaZReadWrite_G::Blit  this=BlitTransLucent25AlphaZReadWrite_ushort  sig=csp ====
BlitTransLucent25AlphaZReadWrite_ushort *__thiscall BlitTransLucent25AlphaZReadWrite_ushort::Blit(
        _DWORD *Block,
        char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 2); /*0x49a728*/
  *Block = &vt_BlitTransLucent25AlphaZReadWrite_unsigned_short; /*0x49a72b*/
  FractalNoise::Release(v3); /*0x49a732*/
  *(Block + 2) = 0; /*0x49a73b*/
  *Block = &vt_Blitter; /*0x49a744*/
  if ( (a2 & 1) != 0 ) /*0x49a74a*/
    __3_YAXPAX_Z(Block); /*0x49a74d*/
  return (BlitTransLucent25AlphaZReadWrite_ushort *)Block; /*0x49a757*/
}


// ==== 0x0049A760  _RLEBlitTransXlat_G::Constructor_RLEBlitter  this=RLEBlitTransXlat  sig=csp ====
RLEBlitTransXlat *__thiscall BlitTransLucent25AlphaZReadWrite_ushort::Constructor_RLEBlitter(
        std::locale::facet *this,
        char a2)
{
  *(_DWORD *)this = &vt_RLEBlitter; /*0x49a769*/
  if ( (a2 & 1) != 0 ) /*0x49a76f*/
    __3_YAXPAX_Z(this); /*0x49a772*/
  return (RLEBlitTransXlat *)this; /*0x49a77c*/
}


// ==== 0x0049A780  _RLEBlitTransZRemapXlat_G::Constructor_RLEBlitter_0  this=?$RLEBlitTransZRemapXlat@G  sig=csp ====
std::locale::facet *__thiscall BlitTransLucent25AlphaZReadWrite_ushort::Constructor_RLEBlitter_0(
        std::locale::facet *this,
        char a2)
{
  *(_DWORD *)this = &vt_RLEBlitter; /*0x49a789*/
  if ( (a2 & 1) != 0 ) /*0x49a78f*/
    __3_YAXPAX_Z(this); /*0x49a792*/
  return this; /*0x49a79c*/
}


// ==== 0x0049A7A0  _RLEBlitTransDarken_G::Constructor_RLEBlitter_1  this=?$RLEBlitTransDarken@G  sig=csp ====
std::locale::facet *__thiscall BlitTransLucent25AlphaZReadWrite_ushort::Constructor_RLEBlitter_1(
        std::locale::facet *this,
        char a2)
{
  *(_DWORD *)this = &vt_RLEBlitter; /*0x49a7a9*/
  if ( (a2 & 1) != 0 ) /*0x49a7af*/
    __3_YAXPAX_Z(this); /*0x49a7b2*/
  return this; /*0x49a7bc*/
}


// ==== 0x0049A7C0  _RLEBlitTransLucent75_G::??_Gfacet_locale_std__UAEPAXI_Z_55  this=?$RLEBlitTransLucent75@G  sig=csp ====
std::locale::facet *__thiscall ___Gfacet_locale_std__UAEPAXI_Z_55(std::locale::facet *this, char a2)
{
  *(_DWORD *)this = &vt_RLEBlitter; /*0x49a7c9*/
  if ( (a2 & 1) != 0 ) /*0x49a7cf*/
    __3_YAXPAX_Z(this); /*0x49a7d2*/
  return this; /*0x49a7dc*/
}


// ==== 0x0049A7E0  _RLEBlitTransLucent50_G::??_Gfacet_locale_std__UAEPAXI_Z_56  this=?$RLEBlitTransLucent50@G  sig=csp ====
std::locale::facet *__thiscall ___Gfacet_locale_std__UAEPAXI_Z_56(std::locale::facet *this, char a2)
{
  *(_DWORD *)this = &vt_RLEBlitter; /*0x49a7e9*/
  if ( (a2 & 1) != 0 ) /*0x49a7ef*/
    __3_YAXPAX_Z(this); /*0x49a7f2*/
  return this; /*0x49a7fc*/
}


// ==== 0x0049A800  _RLEBlitTransLucent25_G::??_Gfacet_locale_std__UAEPAXI_Z_57  this=?$RLEBlitTransLucent25@G  sig=csp ====
std::locale::facet *__thiscall ___Gfacet_locale_std__UAEPAXI_Z_57(std::locale::facet *this, char a2)
{
  *(_DWORD *)this = &vt_RLEBlitter; /*0x49a809*/
  if ( (a2 & 1) != 0 ) /*0x49a80f*/
    __3_YAXPAX_Z(this); /*0x49a812*/
  return this; /*0x49a81c*/
}


// ==== 0x0049A820  _RLEBlitTransXlatZRead_G::??_Gfacet_locale_std__UAEPAXI_Z_58  this=RLEBlitTransXlatZRead  sig=csp ====
RLEBlitTransXlatZRead *__thiscall ___Gfacet_locale_std__UAEPAXI_Z_58(std::locale::facet *this, char a2)
{
  *(_DWORD *)this = &vt_RLEBlitter; /*0x49a829*/
  if ( (a2 & 1) != 0 ) /*0x49a82f*/
    __3_YAXPAX_Z(this); /*0x49a832*/
  return (RLEBlitTransXlatZRead *)this; /*0x49a83c*/
}


// ==== 0x0049A840  _RLEBlitTransZRemapXlatZRead_G::??_Gfacet_locale_std__UAEPAXI_Z_59  this=?$RLEBlitTransZRemapXlatZRead@G  sig=csp ====
std::locale::facet *__thiscall ___Gfacet_locale_std__UAEPAXI_Z_59(std::locale::facet *this, char a2)
{
  *(_DWORD *)this = &vt_RLEBlitter; /*0x49a849*/
  if ( (a2 & 1) != 0 ) /*0x49a84f*/
    __3_YAXPAX_Z(this); /*0x49a852*/
  return this; /*0x49a85c*/
}


// ==== 0x0049A860  _RLEBlitTransDarkenZRead_G::??_Gfacet_locale_std__UAEPAXI_Z_60  this=?$RLEBlitTransDarkenZRead@G  sig=csp ====
std::locale::facet *__thiscall ___Gfacet_locale_std__UAEPAXI_Z_60(std::locale::facet *this, char a2)
{
  *(_DWORD *)this = &vt_RLEBlitter; /*0x49a869*/
  if ( (a2 & 1) != 0 ) /*0x49a86f*/
    __3_YAXPAX_Z(this); /*0x49a872*/
  return this; /*0x49a87c*/
}


// ==== 0x0049A880  _RLEBlitTransLucent75ZRead_G::??_Gfacet_locale_std__UAEPAXI_Z_61  this=?$RLEBlitTransLucent75ZRead@G  sig=csp ====
std::locale::facet *__thiscall ___Gfacet_locale_std__UAEPAXI_Z_61(std::locale::facet *this, char a2)
{
  *(_DWORD *)this = &vt_RLEBlitter; /*0x49a889*/
  if ( (a2 & 1) != 0 ) /*0x49a88f*/
    __3_YAXPAX_Z(this); /*0x49a892*/
  return this; /*0x49a89c*/
}


// ==== 0x0049A8A0  _RLEBlitTransLucent50ZRead_G::??_Gfacet_locale_std__UAEPAXI_Z_62  this=?$RLEBlitTransLucent50ZRead@G  sig=csp ====
std::locale::facet *__thiscall ___Gfacet_locale_std__UAEPAXI_Z_62(std::locale::facet *this, char a2)
{
  *(_DWORD *)this = &vt_RLEBlitter; /*0x49a8a9*/
  if ( (a2 & 1) != 0 ) /*0x49a8af*/
    __3_YAXPAX_Z(this); /*0x49a8b2*/
  return this; /*0x49a8bc*/
}


// ==== 0x0049A8C0  _RLEBlitTransLucent25ZRead_G::??_Gfacet_locale_std__UAEPAXI_Z_63  this=?$RLEBlitTransLucent25ZRead@G  sig=csp ====
std::locale::facet *__thiscall ___Gfacet_locale_std__UAEPAXI_Z_63(std::locale::facet *this, char a2)
{
  *(_DWORD *)this = &vt_RLEBlitter; /*0x49a8c9*/
  if ( (a2 & 1) != 0 ) /*0x49a8cf*/
    __3_YAXPAX_Z(this); /*0x49a8d2*/
  return this; /*0x49a8dc*/
}


// ==== 0x0049A8E0  _RLEBlitTransLucent75ZReadWarp_G::??_Gfacet_locale_std__UAEPAXI_Z_64  this=?$RLEBlitTransLucent75ZReadWarp@G  sig=csp ====
std::locale::facet *__thiscall ___Gfacet_locale_std__UAEPAXI_Z_64(std::locale::facet *this, char a2)
{
  *(_DWORD *)this = &vt_RLEBlitter; /*0x49a8e9*/
  if ( (a2 & 1) != 0 ) /*0x49a8ef*/
    __3_YAXPAX_Z(this); /*0x49a8f2*/
  return this; /*0x49a8fc*/
}


// ==== 0x0049A900  _RLEBlitTransLucent50ZReadWarp_G::??_Gfacet_locale_std__UAEPAXI_Z_65  this=?$RLEBlitTransLucent50ZReadWarp@G  sig=csp ====
std::locale::facet *__thiscall ___Gfacet_locale_std__UAEPAXI_Z_65(std::locale::facet *this, char a2)
{
  *(_DWORD *)this = &vt_RLEBlitter; /*0x49a909*/
  if ( (a2 & 1) != 0 ) /*0x49a90f*/
    __3_YAXPAX_Z(this); /*0x49a912*/
  return this; /*0x49a91c*/
}


// ==== 0x0049A920  _RLEBlitTransLucent25ZReadWarp_G::??_Gfacet_locale_std__UAEPAXI_Z_66  this=?$RLEBlitTransLucent25ZReadWarp@G  sig=csp ====
std::locale::facet *__thiscall ___Gfacet_locale_std__UAEPAXI_Z_66(std::locale::facet *this, char a2)
{
  *(_DWORD *)this = &vt_RLEBlitter; /*0x49a929*/
  if ( (a2 & 1) != 0 ) /*0x49a92f*/
    __3_YAXPAX_Z(this); /*0x49a932*/
  return this; /*0x49a93c*/
}


// ==== 0x0049A940  _RLEBlitTransXlatZReadWrite_G::??_Gfacet_locale_std__UAEPAXI_Z_67  this=?$RLEBlitTransXlatZReadWrite@G  sig=csp ====
std::locale::facet *__thiscall ___Gfacet_locale_std__UAEPAXI_Z_67(std::locale::facet *this, char a2)
{
  *(_DWORD *)this = &vt_RLEBlitter; /*0x49a949*/
  if ( (a2 & 1) != 0 ) /*0x49a94f*/
    __3_YAXPAX_Z(this); /*0x49a952*/
  return this; /*0x49a95c*/
}


// ==== 0x0049A960  _RLEBlitTransZRemapXlatZReadWrite_G::??_Gfacet_locale_std__UAEPAXI_Z_68  this=?$RLEBlitTransZRemapXlatZReadWrite@G  sig=csp ====
std::locale::facet *__thiscall ___Gfacet_locale_std__UAEPAXI_Z_68(std::locale::facet *this, char a2)
{
  *(_DWORD *)this = &vt_RLEBlitter; /*0x49a969*/
  if ( (a2 & 1) != 0 ) /*0x49a96f*/
    __3_YAXPAX_Z(this); /*0x49a972*/
  return this; /*0x49a97c*/
}


// ==== 0x0049A980  _RLEBlitTransDarkenZReadWrite_G::??_Gfacet_locale_std__UAEPAXI_Z_69  this=?$RLEBlitTransDarkenZReadWrite@G  sig=csp ====
std::locale::facet *__thiscall ___Gfacet_locale_std__UAEPAXI_Z_69(std::locale::facet *this, char a2)
{
  *(_DWORD *)this = &vt_RLEBlitter; /*0x49a989*/
  if ( (a2 & 1) != 0 ) /*0x49a98f*/
    __3_YAXPAX_Z(this); /*0x49a992*/
  return this; /*0x49a99c*/
}


// ==== 0x0049A9A0  _RLEBlitTransLucent75ZReadWrite_G::Constructor_RLEBlitter  this=?$RLEBlitTransLucent75ZReadWrite@G  sig=csp ====
std::locale::facet *__thiscall RLEBlitTransZRemapXlatAlpha_ushort::Constructor_RLEBlitter(
        std::locale::facet *this,
        char a2)
{
  *(_DWORD *)this = &vt_RLEBlitter; /*0x49a9a9*/
  if ( (a2 & 1) != 0 ) /*0x49a9af*/
    __3_YAXPAX_Z(this); /*0x49a9b2*/
  return this; /*0x49a9bc*/
}


// ==== 0x0049A9C0  _RLEBlitTransLucent50ZReadWrite_G::Constructor_RLEBlitter_0  this=?$RLEBlitTransLucent50ZReadWrite@G  sig=csp ====
std::locale::facet *__thiscall RLEBlitTransZRemapXlatAlpha_ushort::Constructor_RLEBlitter_0(
        std::locale::facet *this,
        char a2)
{
  *(_DWORD *)this = &vt_RLEBlitter; /*0x49a9c9*/
  if ( (a2 & 1) != 0 ) /*0x49a9cf*/
    __3_YAXPAX_Z(this); /*0x49a9d2*/
  return this; /*0x49a9dc*/
}


// ==== 0x0049A9E0  _RLEBlitTransLucent25ZReadWrite_G::Constructor_RLEBlitter_1  this=?$RLEBlitTransLucent25ZReadWrite@G  sig=csp ====
std::locale::facet *__thiscall RLEBlitTransZRemapXlatAlpha_ushort::Constructor_RLEBlitter_1(
        std::locale::facet *this,
        char a2)
{
  *(_DWORD *)this = &vt_RLEBlitter; /*0x49a9e9*/
  if ( (a2 & 1) != 0 ) /*0x49a9ef*/
    __3_YAXPAX_Z(this); /*0x49a9f2*/
  return this; /*0x49a9fc*/
}


// ==== 0x0049AA00  _RLEBlitTransXlatAlpha_G::QueryInterface  this=RLEBlitTransXlatAlpha_ushort  sig=csp ====
RLEBlitTransXlatAlpha_ushort *__thiscall RLEBlitTransXlatAlpha_ushort::QueryInterface(_DWORD *Block, char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 2); /*0x49aa08*/
  *Block = &RLEBlitTransXlatAlpha<unsigned short>::`vftable'; /*0x49aa0b*/
  FractalNoise::Release(v3); /*0x49aa12*/
  *(Block + 2) = 0; /*0x49aa1b*/
  *Block = &vt_RLEBlitter; /*0x49aa24*/
  if ( (a2 & 1) != 0 ) /*0x49aa2a*/
    __3_YAXPAX_Z(Block); /*0x49aa2d*/
  return (RLEBlitTransXlatAlpha_ushort *)Block; /*0x49aa37*/
}


// ==== 0x0049AA40  _RLEBlitTransZRemapXlatAlpha_G::QueryInterface  this=RLEBlitTransZRemapXlatAlpha_ushort  sig=csp ====
RLEBlitTransZRemapXlatAlpha_ushort *__thiscall RLEBlitTransZRemapXlatAlpha_ushort::QueryInterface(
        _DWORD *Block,
        char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 3); /*0x49aa48*/
  *Block = &vt_RLEBlitTransZRemapXlatAlpha_unsigned_short; /*0x49aa4b*/
  FractalNoise::Release(v3); /*0x49aa52*/
  *(Block + 3) = 0; /*0x49aa5b*/
  *Block = &vt_RLEBlitter; /*0x49aa64*/
  if ( (a2 & 1) != 0 ) /*0x49aa6a*/
    __3_YAXPAX_Z(Block); /*0x49aa6d*/
  return (RLEBlitTransZRemapXlatAlpha_ushort *)Block; /*0x49aa77*/
}


// ==== 0x0049AA80  _RLEBlitTransLucent75Alpha_G::QueryInterface  this=RLEBlitTransLucent75Alpha_ushort  sig=csp ====
RLEBlitTransLucent75Alpha_ushort *__thiscall RLEBlitTransLucent75Alpha_ushort::QueryInterface(_DWORD *Block, char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 2); /*0x49aa88*/
  *Block = &RLEBlitTransLucent75Alpha<unsigned short>::`vftable'; /*0x49aa8b*/
  FractalNoise::Release(v3); /*0x49aa92*/
  *(Block + 2) = 0; /*0x49aa9b*/
  *Block = &vt_RLEBlitter; /*0x49aaa4*/
  if ( (a2 & 1) != 0 ) /*0x49aaaa*/
    __3_YAXPAX_Z(Block); /*0x49aaad*/
  return (RLEBlitTransLucent75Alpha_ushort *)Block; /*0x49aab7*/
}


// ==== 0x0049AAC0  _RLEBlitTransLucent50Alpha_G::QueryInterface  this=RLEBlitTransLucent50Alpha_ushort  sig=csp ====
RLEBlitTransLucent50Alpha_ushort *__thiscall RLEBlitTransLucent50Alpha_ushort::QueryInterface(_DWORD *Block, char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 2); /*0x49aac8*/
  *Block = &RLEBlitTransLucent50Alpha<unsigned short>::`vftable'; /*0x49aacb*/
  FractalNoise::Release(v3); /*0x49aad2*/
  *(Block + 2) = 0; /*0x49aadb*/
  *Block = &vt_RLEBlitter; /*0x49aae4*/
  if ( (a2 & 1) != 0 ) /*0x49aaea*/
    __3_YAXPAX_Z(Block); /*0x49aaed*/
  return (RLEBlitTransLucent50Alpha_ushort *)Block; /*0x49aaf7*/
}


// ==== 0x0049AB00  _RLEBlitTransLucent25Alpha_G::QueryInterface  this=RLEBlitTransLucent25Alpha_ushort  sig=csp ====
RLEBlitTransLucent25Alpha_ushort *__thiscall RLEBlitTransLucent25Alpha_ushort::QueryInterface(_DWORD *Block, char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 2); /*0x49ab08*/
  *Block = &RLEBlitTransLucent25Alpha<unsigned short>::`vftable'; /*0x49ab0b*/
  FractalNoise::Release(v3); /*0x49ab12*/
  *(Block + 2) = 0; /*0x49ab1b*/
  *Block = &vt_RLEBlitter; /*0x49ab24*/
  if ( (a2 & 1) != 0 ) /*0x49ab2a*/
    __3_YAXPAX_Z(Block); /*0x49ab2d*/
  return (RLEBlitTransLucent25Alpha_ushort *)Block; /*0x49ab37*/
}


// ==== 0x0049AB40  _RLEBlitTransXlatAlphaZRead_G::QueryInterface  this=RLEBlitTransXlatAlphaZRead_ushort  sig=csp ====
RLEBlitTransXlatAlphaZRead_ushort *__thiscall RLEBlitTransXlatAlphaZRead_ushort::QueryInterface(_DWORD *Block, char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 2); /*0x49ab48*/
  *Block = &RLEBlitTransXlatAlphaZRead<unsigned short>::`vftable'; /*0x49ab4b*/
  FractalNoise::Release(v3); /*0x49ab52*/
  *(Block + 2) = 0; /*0x49ab5b*/
  *Block = &vt_RLEBlitter; /*0x49ab64*/
  if ( (a2 & 1) != 0 ) /*0x49ab6a*/
    __3_YAXPAX_Z(Block); /*0x49ab6d*/
  return (RLEBlitTransXlatAlphaZRead_ushort *)Block; /*0x49ab77*/
}


// ==== 0x0049AB80  _RLEBlitTransZRemapXlatAlphaZRead_G::QueryInterface  this=RLEBlitTransZRemapXlatAlphaZRead_ushort  sig=csp ====
RLEBlitTransZRemapXlatAlphaZRead_ushort *__thiscall RLEBlitTransZRemapXlatAlphaZRead_ushort::QueryInterface(
        _DWORD *Block,
        char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 3); /*0x49ab88*/
  *Block = &RLEBlitTransZRemapXlatAlphaZRead<unsigned short>::`vftable'; /*0x49ab8b*/
  FractalNoise::Release(v3); /*0x49ab92*/
  *(Block + 3) = 0; /*0x49ab9b*/
  *Block = &vt_RLEBlitter; /*0x49aba4*/
  if ( (a2 & 1) != 0 ) /*0x49abaa*/
    __3_YAXPAX_Z(Block); /*0x49abad*/
  return (RLEBlitTransZRemapXlatAlphaZRead_ushort *)Block; /*0x49abb7*/
}


// ==== 0x0049ABC0  _RLEBlitTransLucent75AlphaZRead_G::QueryInterface  this=RLEBlitTransLucent75AlphaZRead_ushort  sig=csp ====
RLEBlitTransLucent75AlphaZRead_ushort *__thiscall RLEBlitTransLucent75AlphaZRead_ushort::QueryInterface(
        _DWORD *Block,
        char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 2); /*0x49abc8*/
  *Block = &RLEBlitTransLucent75AlphaZRead<unsigned short>::`vftable'; /*0x49abcb*/
  FractalNoise::Release(v3); /*0x49abd2*/
  *(Block + 2) = 0; /*0x49abdb*/
  *Block = &vt_RLEBlitter; /*0x49abe4*/
  if ( (a2 & 1) != 0 ) /*0x49abea*/
    __3_YAXPAX_Z(Block); /*0x49abed*/
  return (RLEBlitTransLucent75AlphaZRead_ushort *)Block; /*0x49abf7*/
}


// ==== 0x0049AC00  _RLEBlitTransLucent50AlphaZRead_G::QueryInterface  this=RLEBlitTransLucent50AlphaZRead_ushort  sig=csp ====
RLEBlitTransLucent50AlphaZRead_ushort *__thiscall RLEBlitTransLucent50AlphaZRead_ushort::QueryInterface(
        _DWORD *Block,
        char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 2); /*0x49ac08*/
  *Block = &RLEBlitTransLucent50AlphaZRead<unsigned short>::`vftable'; /*0x49ac0b*/
  FractalNoise::Release(v3); /*0x49ac12*/
  *(Block + 2) = 0; /*0x49ac1b*/
  *Block = &vt_RLEBlitter; /*0x49ac24*/
  if ( (a2 & 1) != 0 ) /*0x49ac2a*/
    __3_YAXPAX_Z(Block); /*0x49ac2d*/
  return (RLEBlitTransLucent50AlphaZRead_ushort *)Block; /*0x49ac37*/
}


// ==== 0x0049AC40  _RLEBlitTransLucent25AlphaZRead_G::QueryInterface  this=RLEBlitTransLucent25AlphaZRead_ushort  sig=csp ====
RLEBlitTransLucent25AlphaZRead_ushort *__thiscall RLEBlitTransLucent25AlphaZRead_ushort::QueryInterface(
        _DWORD *Block,
        char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 2); /*0x49ac48*/
  *Block = &RLEBlitTransLucent25AlphaZRead<unsigned short>::`vftable'; /*0x49ac4b*/
  FractalNoise::Release(v3); /*0x49ac52*/
  *(Block + 2) = 0; /*0x49ac5b*/
  *Block = &vt_RLEBlitter; /*0x49ac64*/
  if ( (a2 & 1) != 0 ) /*0x49ac6a*/
    __3_YAXPAX_Z(Block); /*0x49ac6d*/
  return (RLEBlitTransLucent25AlphaZRead_ushort *)Block; /*0x49ac77*/
}


// ==== 0x0049AC80  _RLEBlitTransLucent75AlphaZReadWarp_G::QueryInterface  this=RLEBlitTransLucent75AlphaZReadWarp_ushort  sig=csp ====
RLEBlitTransLucent75AlphaZReadWarp_ushort *__thiscall RLEBlitTransLucent75AlphaZReadWarp_ushort::QueryInterface(
        _DWORD *Block,
        char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 2); /*0x49ac88*/
  *Block = &RLEBlitTransLucent75AlphaZReadWarp<unsigned short>::`vftable'; /*0x49ac8b*/
  FractalNoise::Release(v3); /*0x49ac92*/
  *(Block + 2) = 0; /*0x49ac9b*/
  *Block = &vt_RLEBlitter; /*0x49aca4*/
  if ( (a2 & 1) != 0 ) /*0x49acaa*/
    __3_YAXPAX_Z(Block); /*0x49acad*/
  return (RLEBlitTransLucent75AlphaZReadWarp_ushort *)Block; /*0x49acb7*/
}


// ==== 0x0049ACC0  _RLEBlitTransLucent50AlphaZReadWarp_G::QueryInterface  this=RLEBlitTransLucent50AlphaZReadWarp_ushort  sig=csp ====
RLEBlitTransLucent50AlphaZReadWarp_ushort *__thiscall RLEBlitTransLucent50AlphaZReadWarp_ushort::QueryInterface(
        _DWORD *Block,
        char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 2); /*0x49acc8*/
  *Block = &RLEBlitTransLucent50AlphaZReadWarp<unsigned short>::`vftable'; /*0x49accb*/
  FractalNoise::Release(v3); /*0x49acd2*/
  *(Block + 2) = 0; /*0x49acdb*/
  *Block = &vt_RLEBlitter; /*0x49ace4*/
  if ( (a2 & 1) != 0 ) /*0x49acea*/
    __3_YAXPAX_Z(Block); /*0x49aced*/
  return (RLEBlitTransLucent50AlphaZReadWarp_ushort *)Block; /*0x49acf7*/
}


// ==== 0x0049AD00  _RLEBlitTransLucent25AlphaZReadWarp_G::QueryInterface  this=RLEBlitTransLucent25AlphaZReadWarp_ushort  sig=csp ====
RLEBlitTransLucent25AlphaZReadWarp_ushort *__thiscall RLEBlitTransLucent25AlphaZReadWarp_ushort::QueryInterface(
        _DWORD *Block,
        char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 2); /*0x49ad08*/
  *Block = &RLEBlitTransLucent25AlphaZReadWarp<unsigned short>::`vftable'; /*0x49ad0b*/
  FractalNoise::Release(v3); /*0x49ad12*/
  *(Block + 2) = 0; /*0x49ad1b*/
  *Block = &vt_RLEBlitter; /*0x49ad24*/
  if ( (a2 & 1) != 0 ) /*0x49ad2a*/
    __3_YAXPAX_Z(Block); /*0x49ad2d*/
  return (RLEBlitTransLucent25AlphaZReadWarp_ushort *)Block; /*0x49ad37*/
}


// ==== 0x0049AD40  _RLEBlitTransXlatAlphaZReadWrite_G::QueryInterface  this=RLEBlitTransXlatAlphaZReadWrite_ushort  sig=csp ====
RLEBlitTransXlatAlphaZReadWrite_ushort *__thiscall RLEBlitTransXlatAlphaZReadWrite_ushort::QueryInterface(
        _DWORD *Block,
        char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 2); /*0x49ad48*/
  *Block = &RLEBlitTransXlatAlphaZReadWrite<unsigned short>::`vftable'; /*0x49ad4b*/
  FractalNoise::Release(v3); /*0x49ad52*/
  *(Block + 2) = 0; /*0x49ad5b*/
  *Block = &vt_RLEBlitter; /*0x49ad64*/
  if ( (a2 & 1) != 0 ) /*0x49ad6a*/
    __3_YAXPAX_Z(Block); /*0x49ad6d*/
  return (RLEBlitTransXlatAlphaZReadWrite_ushort *)Block; /*0x49ad77*/
}


// ==== 0x0049AD80  _RLEBlitTransZRemapXlatAlphaZReadWrite_G::QueryInterface  this=RLEBlitTransZRemapXlatAlphaZReadWrite_ushort  sig=csp ====
RLEBlitTransZRemapXlatAlphaZReadWrite_ushort *__thiscall RLEBlitTransZRemapXlatAlphaZReadWrite_ushort::QueryInterface(
        _DWORD *Block,
        char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 3); /*0x49ad88*/
  *Block = &RLEBlitTransZRemapXlatAlphaZReadWrite<unsigned short>::`vftable'; /*0x49ad8b*/
  FractalNoise::Release(v3); /*0x49ad92*/
  *(Block + 3) = 0; /*0x49ad9b*/
  *Block = &vt_RLEBlitter; /*0x49ada4*/
  if ( (a2 & 1) != 0 ) /*0x49adaa*/
    __3_YAXPAX_Z(Block); /*0x49adad*/
  return (RLEBlitTransZRemapXlatAlphaZReadWrite_ushort *)Block; /*0x49adb7*/
}


// ==== 0x0049ADC0  _RLEBlitTransLucent75AlphaZReadWrite_G::QueryInterface  this=RLEBlitTransLucent75AlphaZReadWrite_ushort  sig=csp ====
RLEBlitTransLucent75AlphaZReadWrite_ushort *__thiscall RLEBlitTransLucent75AlphaZReadWrite_ushort::QueryInterface(
        _DWORD *Block,
        char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 2); /*0x49adc8*/
  *Block = &RLEBlitTransLucent75AlphaZReadWrite<unsigned short>::`vftable'; /*0x49adcb*/
  FractalNoise::Release(v3); /*0x49add2*/
  *(Block + 2) = 0; /*0x49addb*/
  *Block = &vt_RLEBlitter; /*0x49ade4*/
  if ( (a2 & 1) != 0 ) /*0x49adea*/
    __3_YAXPAX_Z(Block); /*0x49aded*/
  return (RLEBlitTransLucent75AlphaZReadWrite_ushort *)Block; /*0x49adf7*/
}


// ==== 0x0049AE00  _RLEBlitTransLucent50AlphaZReadWrite_G::QueryInterface  this=RLEBlitTransLucent50AlphaZReadWrite_ushort  sig=csp ====
RLEBlitTransLucent50AlphaZReadWrite_ushort *__thiscall RLEBlitTransLucent50AlphaZReadWrite_ushort::QueryInterface(
        _DWORD *Block,
        char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 2); /*0x49ae08*/
  *Block = &RLEBlitTransLucent50AlphaZReadWrite<unsigned short>::`vftable'; /*0x49ae0b*/
  FractalNoise::Release(v3); /*0x49ae12*/
  *(Block + 2) = 0; /*0x49ae1b*/
  *Block = &vt_RLEBlitter; /*0x49ae24*/
  if ( (a2 & 1) != 0 ) /*0x49ae2a*/
    __3_YAXPAX_Z(Block); /*0x49ae2d*/
  return (RLEBlitTransLucent50AlphaZReadWrite_ushort *)Block; /*0x49ae37*/
}


// ==== 0x0049AE40  _RLEBlitTransLucent25AlphaZReadWrite_G::QueryInterface  this=RLEBlitTransLucent25AlphaZReadWrite_ushort  sig=csp ====
RLEBlitTransLucent25AlphaZReadWrite_ushort *__thiscall RLEBlitTransLucent25AlphaZReadWrite_ushort::QueryInterface(
        _DWORD *Block,
        char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 2); /*0x49ae48*/
  *Block = &RLEBlitTransLucent25AlphaZReadWrite<unsigned short>::`vftable'; /*0x49ae4b*/
  FractalNoise::Release(v3); /*0x49ae52*/
  *(Block + 2) = 0; /*0x49ae5b*/
  *Block = &vt_RLEBlitter; /*0x49ae64*/
  if ( (a2 & 1) != 0 ) /*0x49ae6a*/
    __3_YAXPAX_Z(Block); /*0x49ae6d*/
  return (RLEBlitTransLucent25AlphaZReadWrite_ushort *)Block; /*0x49ae77*/
}


// ==== 0x0049AE80  _VectorClass_PAVConvertClass::Add  this=VectorClass  sig=csp ====
char __thiscall VectorClass_ptr_ConvertClass::Add(int *this, int a2)
{
  int v2; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  v2 = this->Capacity; /*0x49ae82*/
  if ( v2 == *(_DWORD *)(a2 + 8) ) /*0x49ae8d*/
  {
    v3 = 0; /*0x49ae8f*/
    if ( v2 <= 0 ) /*0x49ae93*/
      return 1; /*0x49aeb3*/
    v4 = (_DWORD *)this->Items; /*0x49ae95*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x49ae9b*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x49aea4*/
    {
      ++v3; /*0x49aea6*/
      ++v4; /*0x49aea7*/
      if ( v3 >= v2 ) /*0x49aeac*/
        return 1; /*0x49aeac*/
    }
  }
  return 0; /*0x49aeae*/
}


// ==== 0x0049AEC0  _VectorClass_PAVConvertClass::Release  this=VectorClass  sig=csp ====
char __thiscall VectorClass_ptr_ConvertClass::_vt02(void *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int v6; // ecx
  int i; // eax

  if ( a2 ) /*0x49aecc*/
  {
    this->IsInitialized = 0; /*0x49aed6*/
    if ( a3 ) /*0x49aedc*/
      v4 = a3; /*0x49aef2*/
    else
      v4 = __2_YAPAXI_Z(4 * a2); /*0x49aeee*/
    this->IsInitialized = 1; /*0x49aef6*/
    if ( v4 ) /*0x49aefa*/
    {
      if ( this->Items ) /*0x49af05*/
      {
        v6 = this->Capacity; /*0x49af0c*/
        if ( a2 < v6 ) /*0x49af11*/
          v6 = a2; /*0x49af13*/
        for ( i = 0; i < v6; v4[i - 1] = *(_DWORD *)(this->Items + 4 * i - 4) ) /*0x49af19*/
          ++i; /*0x49af1e*/
        if ( this->IsAllocated ) /*0x49af2b*/
        {
          __3_YAXPAX_Z(*((void **)this + 1)); /*0x49af36*/
          this->Items = 0; /*0x49af3e*/
        }
      }
      this->Items = v4; /*0x49af47*/
      this->Capacity = a2; /*0x49af4f*/
      this->IsAllocated = a3 == 0; /*0x49af52*/
      return 1; /*0x49af58*/
    }
    else
    {
      return 0; /*0x49aeff*/
    }
  }
  else
  {
    (*(void (__thiscall **)(void *))(this->IsInitialized)(this); /*0x49af62*/
    return 1; /*0x49af68*/
  }
}


// ==== 0x0049AF70  _VectorClass_PAVConvertClass::Remove  this=VectorClass  sig=csp ====
void __thiscall VectorClass_ptr_ConvertClass::Remove(int this)
{
  if ( *(_DWORD *)(this + 4) && *(_BYTE *)(this + 13) ) /*0x49af7d*/
  {
    __3_YAXPAX_Z(*(void **)(this + 4)); /*0x49af83*/
    *(_DWORD *)(this + 4) = 0; /*0x49af8b*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x49af8e*/
  *(_DWORD *)(this + 8) = 0; /*0x49af91*/
}


// ==== 0x0049AFA0  _VectorClass_PAVConvertClass::GetSize  this=VectorClass  sig=csp ====
int __thiscall VectorClass_ptr_ConvertClass::_vt04(int this, _DWORD *a2)
{
  int result; // eax
  int v3; // edx
  _DWORD *i; // ecx

  if ( !*(_BYTE *)(this + 12) ) /*0x49afa0*/
    return 0; /*0x49afa8*/
  v3 = *(_DWORD *)(this + 8); /*0x49afae*/
  result = 0; /*0x49afb1*/
  if ( v3 <= 0 ) /*0x49afb5*/
    return -1; /*0x49afcc*/
  for ( i = *(_DWORD **)(this + 4); *i != *a2; ++i ) /*0x49afbb*/
  {
    if ( ++result >= v3 ) /*0x49afca*/
      return -1; /*0x49afca*/
  }
  return result; /*0x49afaa*/
}


// ==== 0x0049AFE0  _VectorClass_PAVConvertClass::GetCapacity  this=VectorClass  sig=csp ====
unsigned int __thiscall VectorClass_ptr_ConvertClass::_vt05(int this, int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x49afe0*/
    return (unsigned int)(a2 - *(_DWORD *)(this + 4)) >> 2; /*0x49aff5*/
  else
    return 0; /*0x49afe7*/
}


// ==== 0x0049B000  _DynamicVectorClass_PAVConvertClass::SetCapacity  this=DynamicVector  sig=csp ====
char __thiscall VectorClass_ptr_ConvertClass::sub_49B000(void *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int v5; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x49b00c*/
  {
    this->IsInitialized = 0; /*0x49b012*/
    if ( a3 ) /*0x49b018*/
      v4 = a3; /*0x49b02e*/
    else
      v4 = __2_YAPAXI_Z(4 * a2); /*0x49b02a*/
    this->IsInitialized = 1; /*0x49b032*/
    if ( !v4 ) /*0x49b036*/
      return 0; /*0x49b0aa*/
    if ( this->Items ) /*0x49b038*/
    {
      v5 = this->DynamicVector_field_0x8; /*0x49b03f*/
      if ( a2 < v5 ) /*0x49b044*/
        v5 = a2; /*0x49b046*/
      for ( i = 0; i < v5; v4[i - 1] = *(_DWORD *)(this->Items + 4 * i - 4) ) /*0x49b04c*/
        ++i; /*0x49b051*/
      if ( this->IsAllocated ) /*0x49b05e*/
      {
        __3_YAXPAX_Z(*((void **)this + 1)); /*0x49b069*/
        this->Items = 0; /*0x49b071*/
      }
    }
    this->Items = v4; /*0x49b07a*/
    this->DynamicVector_field_0x8 = a2; /*0x49b082*/
    this->IsAllocated = a3 == 0; /*0x49b085*/
  }
  else
  {
    (*(void (__thiscall **)(void *))(this->IsInitialized)(this); /*0x49b08e*/
  }
  v7 = this->DynamicVector_field_0x8; /*0x49b091*/
  if ( v7 < this->Items ) /*0x49b099*/
    this->Items = v7; /*0x49b09b*/
  return 1; /*0x49b09e*/
}


// ==== 0x0049B0B0  _DynamicVectorClass_PAVConvertClass::FindItemIndex  this=DynamicVector  sig=csp ====
int __thiscall VectorClass_ptr_ConvertClass::sub_49B0B0(int *this, _DWORD *a2)
{
  int v2; // edx
  int result; // eax
  _DWORD *i; // ecx

  v2 = this->Items; /*0x49b0b0*/
  result = 0; /*0x49b0b3*/
  if ( v2 <= 0 ) /*0x49b0b8*/
    return -1; /*0x49b0cf*/
  for ( i = (_DWORD *)this->Items; *i != *a2; ++i ) /*0x49b0be*/
  {
    if ( ++result >= v2 ) /*0x49b0cd*/
      return -1; /*0x49b0cd*/
  }
  return result; /*0x49b0d2*/
}


// ==== 0x0049B0E0  _VectorClass_PAVConvertClass::QueryInterface  this=VectorClass  sig=csp ====
VectorClass *__thiscall VectorClass_ptr_ConvertClass::QueryInterface(_DWORD *Block, char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x49b0e3*/
  *Block = &vt_VectorClass_ConvertClass; /*0x49b0e6*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x49b0f0*/
  {
    __3_YAXPAX_Z(v3); /*0x49b0f8*/
    *(Block + 1) = 0; /*0x49b100*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x49b10b*/
  *(Block + 2) = 0; /*0x49b111*/
  if ( (a2 & 1) != 0 ) /*0x49b118*/
    __3_YAXPAX_Z(Block); /*0x49b11b*/
  return (VectorClass *)Block; /*0x49b125*/
}


// ==== 0x0049B130  _DynamicVectorClass_PAVConvertClass::Constructor_VectorClass_ConvertClass___  this=DynamicVector  sig=csp ====
DynamicVector *__thiscall VectorClass_ptr_ConvertClass::Constructor_VectorClass_ConvertClass___(_DWORD *Block, char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x49b133*/
  *Block = &vt_VectorClass_ConvertClass; /*0x49b136*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x49b140*/
  {
    __3_YAXPAX_Z(v3); /*0x49b148*/
    *(Block + 1) = 0; /*0x49b150*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x49b15b*/
  *(Block + 2) = 0; /*0x49b161*/
  if ( (a2 & 1) != 0 ) /*0x49b168*/
    __3_YAXPAX_Z(Block); /*0x49b16b*/
  return (DynamicVector *)Block; /*0x49b175*/
}


// ==== 0x0049B180  sub_49B180  this=-  sig=ida-proto ====
void sub_49B180()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x49b18c*/
  MEMORY[0x89F5A0] = Math::Sqrt(v0 + v0); /*0x49b19e*/
}


// ==== 0x0049B1B0  sub_49B1B0  this=-  sig=ida-proto ====
void sub_49B1B0()
{
  *((double *)&MEMORY[0x89F5D8] + 19) = MEMORY[0x89F5A0] / 60.0; /*0x49b1bc*/
}


// ==== 0x0049B1D0  sub_49B1D0  this=-  sig=ida-proto ====
void sub_49B1D0()
{
  *((double *)&MEMORY[0x89F5D8] + 16) = 1.0 / *((double *)&MEMORY[0x89F5D8] + 19); /*0x49b1dc*/
}


// ==== 0x0049B1F0  sub_49B1F0  this=-  sig=ida-proto ====
void sub_49B1F0()
{
  MEMORY[0x89F5D0] = 0.0174532925199433 * 45.0; /*0x49b1fc*/
}


// ==== 0x0049B210  sub_49B210  this=-  sig=ida-proto ====
void sub_49B210()
{
  MEMORY[0x89F5A8] = 0.0174532925199433 * 60.0; /*0x49b21c*/
}


// ==== 0x0049B230  sub_49B230  this=-  sig=ida-proto ====
void sub_49B230()
{
  MEMORY[0x89F580] = 0.0174532925199433 * 90.0; /*0x49b23c*/
}


// ==== 0x0049B250  sub_49B250  this=-  sig=ida-proto ====
__int64 sub_49B250()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(MEMORY[0x89F580] - MEMORY[0x89F5A8]); /*0x49b262*/
  result = Math::RoundToInt(v0 * MEMORY[0x89F5A0] * 0.5); /*0x49b276*/
  *((_DWORD *)&MEMORY[0x89F5D8] + 40) = result; /*0x49b27b*/
  return result; /*0x49b280*/
}


// ==== 0x0049B290  sub_49B290  this=-  sig=ida-proto ====
void sub_49B290()
{
  MEMORY[0x89F5B0] = Math::ArcTan((double)*((int *)&MEMORY[0x89F5D8] + 40) * 0.00390625); /*0x49b2a7*/
}


// ==== 0x0049B2C0  sub_49B2C0  this=-  sig=ida-proto ====
void sub_49B2C0()
{
  MEMORY[0x89F5C8] = Math::ArcTan((double)(2 * *((_DWORD *)&MEMORY[0x89F5D8] + 40)) / MEMORY[0x89F5A0]); /*0x49b2e2*/
}


// ==== 0x0049B2F0  sub_49B2F0  this=-  sig=ida-proto ====
__int64 sub_49B2F0()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * *((_DWORD *)&MEMORY[0x89F5D8] + 40)) + 0.5); /*0x49b30b*/
  *((_DWORD *)&MEMORY[0x89F5D8] + 37) = result; /*0x49b310*/
  return result; /*0x49b316*/
}


// ==== 0x0049B320  sub_49B320  this=-  sig=ida-proto ====
int sub_49B320()
{
  MEMORY[0x89F598] = 0; /*0x49b322*/
  MEMORY[0x89F59A] = 0; /*0x49b328*/
  return 0; /*0x49b32e*/
}


// ==== 0x0049B330  sub_49B330  this=-  sig=ida-proto ====
int sub_49B330()
{
  MEMORY[0x89F5B8] = 0; /*0x49b332*/
  MEMORY[0x89F5BC] = 0; /*0x49b337*/
  MEMORY[0x89F5C0] = 0; /*0x49b33c*/
  return 0; /*0x49b341*/
}


// ==== 0x0049B350  sub_49B350  this=-  sig=ida-proto ====
int sub_49B350()
{
  *((_DWORD *)&MEMORY[0x89F5D8] + 34) = 128; /*0x49b35f*/
  *(_QWORD *)(&MEMORY[0x89F5D8] + 70) = 128; /*0x49b364*/
  return 128; /*0x49b369*/
}


// ==== 0x0049B370  sub_49B370  this=-  sig=ida-proto ====
int sub_49B370()
{
  MEMORY[0x89F588] = 0; /*0x49b372*/
  MEMORY[0x89F58C] = 0; /*0x49b377*/
  MEMORY[0x89F590] = 0; /*0x49b37c*/
  MEMORY[0x89F594] = 0; /*0x49b381*/
  return 0; /*0x49b386*/
}


// ==== 0x0049B390  sub_49B390  this=-  sig=ida-proto ====
int sub_49B390()
{
  MEMORY[0x89F51C] = 0; /*0x49b398*/
  MEMORY[0x89F520] = 0; /*0x49b39e*/
  GenericNode::Constructor(MEMORY[0x89F528]); /*0x49b3a4*/
  GenericNode::Constructor(MEMORY[0x89F534]); /*0x49b3ae*/
  MEMORY[0x89F524] = (int)&vt_GenericList; /*0x49b3bd*/
  LinkedList::Prepend(MEMORY[0x89F528], (int)MEMORY[0x89F534]); /*0x49b3c7*/
  MEMORY[0x89F524] = (int)&vt_List_INIClass_INISection; /*0x49b3d1*/
  MEMORY[0x89F540] = 0; /*0x49b3db*/
  MEMORY[0x89F544] = 0; /*0x49b3e1*/
  MEMORY[0x89F548] = 0; /*0x49b3e7*/
  MEMORY[0x89F54C] = 0; /*0x49b3ed*/
  MEMORY[0x89F550] = 0; /*0x49b3f3*/
  MEMORY[0x89F554] = 0; /*0x49b3f9*/
  MEMORY[0x89F558] = 0; /*0x49b3ff*/
  MEMORY[0x89F518] = (int)&CCINIClass_Vtable; /*0x49b405*/
  MEMORY[0x89F578] = 0; /*0x49b40f*/
  return atexit(unknown_libname_12); /*0x49b41d*/
}


// ==== 0x0049B420  unknown_libname_12  this=-  sig=ida-proto ====
// Microsoft VisualC 2-14/net runtime
void __cdecl unknown_libname_12()
{
  INIClass::ClearContents((int)&MEMORY[0x89F518]); /*0x49b425*/
}


// ==== 0x0049B430  EncodeDigitHex  this=-  sig=ida-proto ====
char __fastcall Hex_EncodeDigit(int a1)
{
  if ( (unsigned int)a1 >= 0x10 ) /*0x49b432*/
    return 0; /*0x49b446*/
  if ( a1 >= 10 ) /*0x49b43c*/
    return a1 + 55; /*0x49b442*/
  return a1 + 48; /*0x49b441*/
}


// ==== 0x0049B610  MissionClass::Init  this=CampaignClass  sig=csp ====
_DWORD *__thiscall MissionClass_Init(_DWORD *this)
{
  this->abstractFlags = -2; /*0x49b619*/
  this->q0C0 = -2; /*0x49b61c*/
  this->nextArrayIndex = -2; /*0x49b61f*/
  this->q0D0 = -2; /*0x49b622*/
  *(_BYTE *)this = 0; /*0x49b628*/
  this->q070 = 0; /*0x49b62a*/
  this->q03C = 0; /*0x49b62d*/
  this->q044 = -1; /*0x49b630*/
  this->q1B0 = 0; /*0x49b633*/
  this->uniqueId = 0; /*0x49b636*/
  this->q038 = -1; /*0x49b639*/
  this->q048 = 0; /*0x49b63c*/
  this->q04C = 0; /*0x49b63f*/
  this->q050 = 0; /*0x49b642*/
  this->q054 = 0; /*0x49b645*/
  this->q058 = 0; /*0x49b648*/
  this->q05C = 0; /*0x49b64b*/
  this->q068 = 0; /*0x49b64e*/
  this->q060 = 0; /*0x49b651*/
  this->Name = 0; /*0x49b654*/
  return this; /*0x49b657*/
}


// ==== 0x0049B660  MPCooperative::processTurn  this=MPCooperative  sig=csp ====
int __thiscall sub_49B660(int this, char *a2, char *a3)
{
  if ( a2 ) /*0x49b66e*/
    strcpy((char *)this, ToWideStringChar(a2)); /*0x49b68b*/
  else
    *(_BYTE *)this = 0; /*0x49b696*/
  if ( a3 ) /*0x49b69f*/
    strcpy((char *)(this + 28), ToWideStringChar(a3)); /*0x49b6bf*/
  else
    *(_BYTE *)(this + 28) = 0; /*0x49b6ca*/
  *(_DWORD *)(this + 20) = -2; /*0x49b6d3*/
  *(_DWORD *)(this + 48) = -2; /*0x49b6d6*/
  *(_DWORD *)(this + 24) = -2; /*0x49b6d9*/
  *(_DWORD *)(this + 52) = -2; /*0x49b6dc*/
  *(_DWORD *)(this + 60) = 0; /*0x49b6e2*/
  *(_DWORD *)(this + 68) = -1; /*0x49b6e5*/
  *(_DWORD *)(this + 56) = -1; /*0x49b6e8*/
  *(_BYTE *)(this + 108) = 0; /*0x49b6eb*/
  *(_DWORD *)(this + 64) = 0; /*0x49b6ee*/
  *(_DWORD *)(this + 72) = 0; /*0x49b6f1*/
  *(_DWORD *)(this + 76) = 0; /*0x49b6f4*/
  *(_DWORD *)(this + 80) = 0; /*0x49b6f7*/
  *(_DWORD *)(this + 84) = 0; /*0x49b6fa*/
  *(_DWORD *)(this + 88) = 0; /*0x49b6fd*/
  *(_DWORD *)(this + 92) = 0; /*0x49b700*/
  *(_DWORD *)(this + 104) = 0; /*0x49b703*/
  *(_DWORD *)(this + 96) = 0; /*0x49b706*/
  *(_DWORD *)(this + 100) = 0; /*0x49b709*/
  return this; /*0x49b6d2*/
}


// ==== 0x0049B720  Array::Cleanup  this=Array  sig=csp ====
void __thiscall Array_Cleanup(int this)
{
  int i; // edi

  if ( *(_DWORD *)(this + 60) ) /*0x49b723*/
  {
    for ( i = 0; i < *(_DWORD *)(this + 64); ++i ) /*0x49b732*/
    {
      if ( *(_DWORD *)(*(_DWORD *)(this + 60) + 4 * i) ) /*0x49b737*/
        __3_YAXPAX_Z(*(void **)(*(_DWORD *)(this + 60) + 4 * i)); /*0x49b73f*/
    }
    __3_YAXPAX_Z(*(void **)(this + 60)); /*0x49b753*/
  }
}


// ==== 0x0049B760  String::AssignWideToChar  this=String  sig=csp ====
void __thiscall String::AssignWideToChar(char *this, CampaignScore *aP1, CampaignScore *aP2)
{
  if ( aP1 ) /*0x49b76b*/
    strcpy(this, ToWideStringChar(aP1->__pad_0)); /*0x49b788*/
  else
    *this = 0; /*0x49b793*/
  if ( aP2 ) /*0x49b79c*/
    strcpy(this + 28, ToWideStringChar(aP2->__pad_0)); /*0x49b7bc*/
  else
    *(this + 28) = 0; /*0x49b7cc*/
}


// ==== 0x0049B7E0  FillScoreScreenStats  this=-  sig=csp ====
void __fastcall FillScoreScreenStats(IUnknown *Destination, char a2)
{
  IUnknown *v2; // ebp
  int v3; // eax
  HouseClass *i; // ecx
  int v6; // esi
  int v7; // eax
  _DWORD *v8; // ecx
  int v9; // edx
  int *v10; // ecx
  IUnknown *v11; // edx
  int v12; // ebp
  int Count; // ebp
  int v14; // ebp
  int v15; // ebp
  int v16; // esi

  v2 = HouseClass_Count; /*0x49b7e2*/
  v3 = 0; /*0x49b7e9*/
  if ( (int)HouseClass_Count <= 0 ) /*0x49b7f0*/
    return; /*0x49b7f0*/
  for ( i = HouseClass_Array; ; i = (HouseClass *)((char *)i + 4) ) /*0x49b7f6*/
  {
    v6 = *(_DWORD *)i->__pad_0; /*0x49b7fc*/
    if ( !*(_DWORD *)i->__pad_0 || *(_BYTE *)(*(_DWORD *)(v6 + 52) + 422) == 1 || !*(_BYTE *)(v6 + 492) ) /*0x49b810*/
      goto LABEL_8; /*0x49b816*/
    if ( !a2 ) /*0x49b81a*/
      break; /*0x49b81a*/
    a2 = 0; /*0x49b81c*/
LABEL_8:
    if ( ++v3 >= (int)HouseClass_Count ) /*0x49b824*/
      return; /*0x49b824*/
  }
  *(_DWORD *)&Destination->__pad_28[4] = 0; /*0x49b831*/
  wcscpy((wchar_t *)Destination, (const wchar_t *)(v6 + 90154)); /*0x49b836*/
  *(_DWORD *)&Destination->__pad_28[8] = 0; /*0x49b83b*/
  Destination->field_40 = 0; /*0x49b83e*/
  Destination->field_50 = 0; /*0x49b841*/
  Destination->field_60 = 0; /*0x49b844*/
  *(_DWORD *)Destination->__pad_28 = *(_DWORD *)(v6 + 90196); /*0x49b850*/
  if ( !*(_BYTE *)(v6 + 501) ) /*0x49b853*/
    ++*(_DWORD *)&Destination->__pad_28[4]; /*0x49b85d*/
  v7 = 0; /*0x49b860*/
  v8 = (_DWORD *)(v6 + 21476); /*0x49b862*/
  v9 = 20; /*0x49b868*/
  do /*0x49b873*/
  {
    v7 += *v8++; /*0x49b86d*/
    --v9; /*0x49b872*/
  }
  while ( v9 ); /*0x49b873*/
  v10 = (int *)(v6 + 21560); /*0x49b875*/
  v11 = v2; /*0x49b87b*/
  do /*0x49b885*/
  {
    v12 = *v10++; /*0x49b87d*/
    v7 += v12; /*0x49b882*/
    v11 = (IUnknown *)((char *)v11 - 1); /*0x49b884*/
  }
  while ( v11 ); /*0x49b885*/
  Destination->field_40 = v7; /*0x49b887*/
  *(_DWORD *)&Destination->__pad_28[8] = *(_DWORD *)(v6 + 21640) + *(_DWORD *)(v6 + 21556); /*0x49b89e*/
  Count = VectorClass::GetCount((_DWORD *)(v6 + 21840)); /*0x49b8ac*/
  v14 = VectorClass::GetCount((_DWORD *)(v6 + 21860)) + Count; /*0x49b8b9*/
  v15 = VectorClass::GetCount((_DWORD *)(v6 + 21880)) + v14; /*0x49b8c6*/
  Destination->field_50 = VectorClass::GetCount((_DWORD *)(v6 + 21900)) /*0x49b8df*/
                        + v15
                        + *(_DWORD *)(v6 + 21640)
                        + *(_DWORD *)(v6 + 21556);
  v16 = *(_DWORD *)(v6 + 21736); /*0x49b8e2*/
  if ( v16 > 0 ) /*0x49b8ea*/
    Destination->field_60 += v16; /*0x49b8ec*/
  ToWideStringChar(Destination); /*0x49b902*/
  Debug::Log(); /*0x49b922*/
}


// ==== 0x0049B930  ObjectClass::UpdateScoreScreenStatistics  this=ObjectClass  sig=csp ====
char __thiscall UpdateScoreScreenStatistics(int this)
{
  int v3; // ebx
  int v4; // ecx
  int v5; // edi
  int v6; // esi
  int v7; // eax
  int v8; // edx
  int v9; // ebx
  int v10; // edi
  int v11; // ecx
  int v12; // eax
  int v13; // esi
  int v14; // eax
  int v15; // edi
  int v16; // ebx
  int v17; // ecx
  int v18; // esi
  int v19; // eax
  int v20; // eax
  int v21; // edx
  int v22; // edi
  int v23; // eax
  int v24; // edi
  int v25; // esi
  int v26; // ecx
  int v27; // esi
  _DWORD *v28; // edi
  int v29; // ecx
  int v30; // esi
  int v31; // ecx
  int v32; // edi
  _DWORD *v33; // esi
  int v34; // esi
  int v35; // ecx
  int v36; // esi
  int v37; // ecx
  _BYTE v38[16]; // [esp-Ch] [ebp-2F0h] BYREF
  wchar_t Destination[24]; // [esp+4h] [ebp-2E0h] BYREF
  int v40; // [esp+34h] [ebp-2B0h]
  int v41; // [esp+44h] [ebp-2A0h]
  int v42; // [esp+54h] [ebp-290h]
  int v43; // [esp+64h] [ebp-280h]
  wchar_t v44[24]; // [esp+74h] [ebp-270h] BYREF
  int v45; // [esp+A4h] [ebp-240h]
  int v46; // [esp+B4h] [ebp-230h]
  int v47; // [esp+C4h] [ebp-220h]
  int v48; // [esp+D4h] [ebp-210h]
  char v49[256]; // [esp+E4h] [ebp-200h] BYREF
  char Buffer[256]; // [esp+1E4h] [ebp-100h] BYREF

  if ( !*(_BYTE *)(this + 108) ) /*0x49b939*/
    return 0; /*0x49b940*/
  Debug::Log(); /*0x49b952*/
  FillScoreScreenStats(Destination, 0); /*0x49b960*/
  FillScoreScreenStats(v44, 1); /*0x49b96e*/
  if ( !strcmp((const char *)this, ToWideStringChar((char *)Destination)) ) /*0x49b988*/
  {
    ToWideStringChar((char *)Destination); /*0x49b9b9*/
    Debug::Log(); /*0x49b9c4*/
    v3 = *(_DWORD *)(this + 84); /*0x49b9dc*/
    v4 = v40; /*0x49b9df*/
    v5 = *(_DWORD *)(this + 88); /*0x49b9e3*/
    v6 = v41 + *(_DWORD *)(this + 72); /*0x49b9e6*/
    v7 = *(_DWORD *)(this + 80); /*0x49b9e8*/
    *(_DWORD *)(this + 76) += v46; /*0x49b9eb*/
    v8 = v45; /*0x49b9f4*/
    *(_DWORD *)(this + 80) = v42 + v7; /*0x49b9fb*/
    v9 = v47 + v3; /*0x49ba05*/
    v10 = v4 + v5; /*0x49ba0b*/
    v11 = v43 + *(_DWORD *)(this + 96); /*0x49ba10*/
    v12 = *(_DWORD *)(this + 100); /*0x49ba12*/
    *(_DWORD *)(this + 72) = v6; /*0x49ba15*/
    v13 = *(_DWORD *)(this + 92); /*0x49ba18*/
    *(_DWORD *)(this + 96) = v11; /*0x49ba1b*/
    v14 = v48 + v12; /*0x49ba2a*/
    *(_DWORD *)(this + 84) = v9; /*0x49ba2c*/
    *(_DWORD *)(this + 88) = v10; /*0x49ba2f*/
    *(_DWORD *)(this + 92) = v8 + v13; /*0x49ba32*/
    *(_DWORD *)(this + 100) = v14; /*0x49ba35*/
  }
  else
  {
    ToWideStringChar((char *)v44); /*0x49ba44*/
    Debug::Log(); /*0x49ba4f*/
    v15 = v41 + *(_DWORD *)(this + 76); /*0x49ba69*/
    v16 = *(_DWORD *)(this + 92); /*0x49ba6e*/
    v17 = v45; /*0x49ba73*/
    v18 = v46 + *(_DWORD *)(this + 72); /*0x49ba7a*/
    v19 = *(_DWORD *)(this + 80); /*0x49ba7c*/
    *(_DWORD *)(this + 84) += v42; /*0x49ba7f*/
    v20 = v47 + v19; /*0x49ba89*/
    v21 = v43; /*0x49ba8b*/
    *(_DWORD *)(this + 76) = v15; /*0x49ba8f*/
    v22 = *(_DWORD *)(this + 88); /*0x49ba92*/
    *(_DWORD *)(this + 80) = v20; /*0x49ba95*/
    v23 = v40; /*0x49ba98*/
    *(_DWORD *)(this + 72) = v18; /*0x49ba9c*/
    v24 = v17 + v22; /*0x49baab*/
    v25 = v21 + *(_DWORD *)(this + 100); /*0x49bab3*/
    v26 = v48 + *(_DWORD *)(this + 96); /*0x49bab5*/
    *(_DWORD *)(this + 92) = v23 + v16; /*0x49bab7*/
    *(_DWORD *)(this + 88) = v24; /*0x49baba*/
    *(_DWORD *)(this + 100) = v25; /*0x49babd*/
    *(_DWORD *)(this + 96) = v26; /*0x49bac0*/
  }
  v27 = *((_DWORD *)MEMORY[0xA8B230] + 391); /*0x49bacf*/
  if ( *((_DWORD *)MEMORY[0xA8B230] + 389) != -1 ) /*0x49bade*/
  {
    v28 = (char *)MEMORY[0xA8B230] + 1556; /*0x49bad5*/
    v27 += Timer::GetTicks() - *v28; /*0x49baea*/
  }
  v29 = v27 / 60; /*0x49bb06*/
  if ( v38 != (_BYTE *)-496 ) /*0x49bb0a*/
  {
    if ( v29 / 3600 > 99 ) /*0x49bb22*/
      v29 = 359999; /*0x49bb24*/
    v30 = v29 / 3600; /*0x49bb3c*/
    v31 = 720 * (4 * (v29 / -3600) - v29 / 3600) + v29; /*0x49bb55*/
    sprintf(Buffer, stru_81F0A8, v30, v31 / 60, v31 % 60); /*0x49bb80*/
  }
  v32 = *((_DWORD *)MEMORY[0xA8B230] + 391); /*0x49bb94*/
  if ( *((_DWORD *)MEMORY[0xA8B230] + 389) != -1 ) /*0x49bba3*/
  {
    v33 = (char *)MEMORY[0xA8B230] + 1556; /*0x49bb9a*/
    v32 += Timer::GetTicks() - *v33; /*0x49bbaf*/
  }
  v34 = v32 + *(_DWORD *)(this + 104); /*0x49bbbb*/
  *(_DWORD *)(this + 104) = v34; /*0x49bbbf*/
  v35 = v34; /*0x49bbc2*/
  if ( v38 != (_BYTE *)-240 ) /*0x49bbc4*/
  {
    if ( v34 / 3600 > 99 ) /*0x49bbdc*/
      v35 = 359999; /*0x49bbde*/
    v36 = v35 / 3600; /*0x49bbf6*/
    v37 = 720 * (4 * (v35 / -3600) - v35 / 3600) + v35; /*0x49bc0f*/
    sprintf(v49, stru_81F0A8, v36, v37 / 60, v37 % 60); /*0x49bc3a*/
  }
  Debug::Log(); /*0x49bc57*/
  ++*(_DWORD *)(this + 56); /*0x49bc65*/
  return 1; /*0x49b942*/
}


// ==== 0x0049BC80  Movie::GetSectionID  this=Movie  sig=csp ====
char __thiscall Movie_GetSectionID(int this, _DWORD *a2)
{
  if ( !*(_BYTE *)(this + 108) ) /*0x49bc80*/
    return 0; /*0x49bc87*/
  *a2 = *(_DWORD *)(this + 68); /*0x49bc93*/
  return 1; /*0x49bc89*/
}


// ==== 0x0049BCA0  MPCooperative::GetMovieScore  this=MPCooperative  sig=csp ====
char __thiscall MPCooperative::GetMovieScore(int this, CampaignEndScoreClass *aP1)
{
  if ( !*(_BYTE *)(this + 108) ) /*0x49bca0*/
    return 0; /*0x49bca7*/
  aP1->vfptr = *(void **)(this + 64); /*0x49bcb3*/
  return 1; /*0x49bca9*/
}


// ==== 0x0049BCC0  Movie::GetState  this=Movie  sig=csp ====
char __thiscall Movie::GetState(int this, CCINIClass *aP1)
{
  if ( !*(_BYTE *)(this + 108) ) /*0x49bcc0*/
    return 0; /*0x49bcc7*/
  *(_DWORD *)aP1->__pad_0 = *(_DWORD *)(this + 56); /*0x49bcd3*/
  return 1; /*0x49bcc9*/
}


// ==== 0x0049BCE0  MPCooperative::BuildScoreEntries  this=MPCooperative  sig=csp ====
char __thiscall MPCooperative::BuildScoreEntries(int this, int a2, CCINIClass *aP2)
{
  int v6; // eax
  int v7; // ecx
  int v8; // eax
  wchar_t *v9; // ebx
  int i; // ebx
  wchar_t *v11; // edi
  int v12; // eax
  int v13; // ecx
  int v14; // eax
  int v15; // edx
  wchar_t *v16; // [esp+4h] [ebp-4h]
  wchar_t *v17; // [esp+Ch] [ebp+4h]

  if ( !*(_BYTE *)(this + 108) ) /*0x49bce4*/
    return 0; /*0x49bceb*/
  while ( *(_DWORD *)(a2 + 16) ) /*0x49bcf9*/
  {
    __3_YAXPAX_Z(**(void ***)(a2 + 4)); /*0x49bd06*/
    v6 = *(_DWORD *)(a2 + 16); /*0x49bd0b*/
    if ( v6 > 0 ) /*0x49bd13*/
    {
      v7 = v6 - 1; /*0x49bd15*/
      v8 = 0; /*0x49bd18*/
      for ( *(_DWORD *)(a2 + 16) = v7; /*0x49bd1f*/
            v8 < *(_DWORD *)(a2 + 16);
            *(_DWORD *)(*(_DWORD *)(a2 + 4) + 4 * v8 - 4) = *(_DWORD *)(*(_DWORD *)(a2 + 4) + 4 * v8) )
      {
        ++v8; /*0x49bd24*/
      }
    }
  }
  v9 = (wchar_t *)__2_YAPAXI_Z(0x70u); /*0x49bd41*/
  v16 = v9; /*0x49bd4a*/
  FillScoreScreenStats(v9, 0); /*0x49bd4e*/
  v17 = (wchar_t *)__2_YAPAXI_Z(0x70u); /*0x49bd61*/
  FillScoreScreenStats(v17, 1); /*0x49bd65*/
  if ( strcmp((const char *)this, ToWideStringChar((char *)v9)) ) /*0x49bd7b*/
  {
    v16 = v17; /*0x49bda8*/
    v17 = v9; /*0x49bdac*/
  }
  for ( i = 0; i < 2; ++i ) /*0x49bdb0*/
  {
    v11 = v16; /*0x49bdb2*/
    if ( i ) /*0x49bdb8*/
      v11 = v17; /*0x49bdba*/
    *((_DWORD *)v11 + 16) = *(_DWORD *)(this + 4 * i + 72); /*0x49bdc2*/
    *((_DWORD *)v11 + 20) = *(_DWORD *)(this + 4 * i + 80); /*0x49bdc9*/
    *((_DWORD *)v11 + 12) = *(_DWORD *)(this + 4 * i + 88); /*0x49bdd0*/
    *((_DWORD *)v11 + 11) = *(_DWORD *)(this + 56); /*0x49bdd6*/
    *((_DWORD *)v11 + 24) = *(_DWORD *)(this + 4 * i + 96); /*0x49bddd*/
    v12 = *(_DWORD *)(a2 + 8); /*0x49bde0*/
    if ( *(_DWORD *)(a2 + 16) >= v12 ) /*0x49bde6*/
    {
      if ( !*(_BYTE *)(a2 + 13) && v12 ) /*0x49bdf1*/
        continue; /*0x49bdf1*/
      v13 = *(_DWORD *)(a2 + 20); /*0x49bdf3*/
      if ( v13 <= 0 || !(*(unsigned __int8 (__thiscall **)(int, int, _DWORD))(*(_DWORD *)a2 + 8))(a2, v12 + v13, 0) ) /*0x49be03*/
        continue; /*0x49be03*/
    }
    v14 = *(_DWORD *)(a2 + 16); /*0x49be0a*/
    v15 = *(_DWORD *)(a2 + 4); /*0x49be0d*/
    *(_DWORD *)(a2 + 16) = v14 + 1; /*0x49be13*/
    *(_DWORD *)(v15 + 4 * v14) = v11; /*0x49be16*/
  }
  *(_DWORD *)aP2->__pad_0 = *(_DWORD *)(this + 104); /*0x49be28*/
  return 1; /*0x49bced*/
}


// ==== 0x0049BE40  MPCooperative::WriteCoopSaveINI  this=MPCooperative  sig=csp ====
char __thiscall MPCooperative::WriteCoopSaveINI(char *this)
{
  char *v1; // edi
  char *v2; // ebp
  int v3; // esi
  int v4; // esi
  int v5; // eax
  char v6; // al
  char v7; // al
  char *v8; // edi
  int v9; // esi
  char i; // al
  int v11; // esi
  int v12; // eax
  char v13; // al
  void *v15[3]; // [esp+Ch] [ebp-194h] BYREF
  _DWORD v16[7]; // [esp+18h] [ebp-188h] BYREF
  _DWORD v17[6]; // [esp+34h] [ebp-16Ch] BYREF
  char v18; // [esp+4Ch] [ebp-154h]
  _DWORD v19[22]; // [esp+64h] [ebp-13Ch] BYREF
  _BYTE v20[12]; // [esp+BCh] [ebp-E4h] BYREF
  int v21; // [esp+C8h] [ebp-D8h]
  _DWORD v22[22]; // [esp+D0h] [ebp-D0h] BYREF
  _BYTE v23[12]; // [esp+128h] [ebp-78h] BYREF
  int v24; // [esp+134h] [ebp-6Ch]
  char v25[100]; // [esp+13Ch] [ebp-64h] BYREF

  v1 = this; /*0x49be49*/
  if ( !*this ) /*0x49be4d*/
    return 1; /*0x49be4d*/
  v2 = this + 28; /*0x49be58*/
  if ( !this->__pad_070 ) /*0x49be55*/
    return 1; /*0x49c0c5*/
  CCFileClass::Construct(v22, MEMORY[0x81F0F8]); /*0x49be70*/
  v15[1] = 0; /*0x49be79*/
  v15[2] = 0; /*0x49be7d*/
  INISectionList::Constructor(v16); /*0x49be81*/
  Node::Init(v17); /*0x49be8a*/
  v17[5] = 0; /*0x49be9d*/
  v18 = 0; /*0x49bea1*/
  v15[0] = &CCINIClass_Vtable; /*0x49bea5*/
  CCINIClass::Load(v15, (int)v22, 0, 0); /*0x49bead*/
  CCFileClass::Reset(v22); /*0x49beb9*/
  v3 = 0; /*0x49bec0*/
  if ( *v1 )
  {
    do
    {
      if ( v3 >= 1021 ) /*0x49becc*/
        break; /*0x49becc*/
      if ( isalnum(*v1) )
      {
        MEMORY[0x89ED18][v3] = *v1; /*0x49bf1d*/
      }
      else
      {
        MEMORY[0x89ED18][v3] = 61; /*0x49bede*/
        v4 = v3 + 1; /*0x49bee5*/
        v5 = *v1 >> 4; /*0x49bee9*/
        if ( (unsigned int)v5 >= 0x10 )
          v6 = 0; /*0x49bf00*/
        else
          v6 = v5 >= 10 ? v5 + 55 : v5 + 48;
        MEMORY[0x89ED18][v4] = v6; /*0x49bf02*/
        v3 = v4 + 1; /*0x49bf0d*/
        MEMORY[0x89ED18][v3] = EncodeDigitHex(*v1 & 0xF); /*0x49bf13*/
      }
      v7 = v1[1]; /*0x49bf23*/
      ++v3; /*0x49bf26*/
      ++v1; /*0x49bf27*/
    }
    while ( v7 );
  }
  MEMORY[0x89ED18][v3] = 0; /*0x49bf36*/
  strcpy(v25, MEMORY[0x89ED18]); /*0x49bf52*/
  v8 = v2; /*0x49bf5b*/
  v9 = 0; /*0x49bf5d*/
  for ( i = *v2; i; ++v8 )
  {
    if ( v9 >= 1021 ) /*0x49bf6b*/
      break; /*0x49bf6b*/
    if ( isalnum(i) )
    {
      MEMORY[0x89ED18][v9] = *v8; /*0x49bfbc*/
    }
    else
    {
      MEMORY[0x89ED18][v9] = 61; /*0x49bf7d*/
      v11 = v9 + 1; /*0x49bf84*/
      v12 = *v8 >> 4; /*0x49bf88*/
      if ( (unsigned int)v12 >= 0x10 )
        v13 = 0; /*0x49bf9f*/
      else
        v13 = v12 >= 10 ? v12 + 55 : v12 + 48;
      MEMORY[0x89ED18][v11] = v13; /*0x49bfa1*/
      v9 = v11 + 1; /*0x49bfac*/
      MEMORY[0x89ED18][v9] = EncodeDigitHex(*v8 & 0xF); /*0x49bfb2*/
    }
    i = v8[1]; /*0x49bfc2*/
    ++v9; /*0x49bfc5*/
  }
  MEMORY[0x89ED18][v9] = 0; /*0x49bfd5*/
  strcat(v25, MEMORY[0x89ED18]); /*0x49bff9*/
  CCFileClass::Construct3((int)v19); /*0x49c006*/
  (*(void (__thiscall **)(_DWORD *, char *))(v19[0] + 8))(v19, MEMORY[0x81F0F8]); /*0x49c018*/
  (*(void (__thiscall **)(_DWORD *, int))(v19[0] + 28))(v19, 2); /*0x49c025*/
  INIClass::ClearSection((int)v15, (int)v25, 0); /*0x49c035*/
  INIClass::WriteDigest(v15, (int)v19, 0); /*0x49c044*/
  CCFileClass::Reset(v19); /*0x49c04d*/
  v19[0] = &vt_CCFileClass; /*0x49c05e*/
  v21 = 0; /*0x49c062*/
  Vector::Clear((int)v20); /*0x49c069*/
  v19[0] = &off_7E1668; /*0x49c077*/
  BufferIOFileClass::Dtor(v19); /*0x49c07b*/
  HashTable::DestroyHashTableINIClass(v15); /*0x49c084*/
  v22[0] = &vt_CCFileClass; /*0x49c090*/
  v24 = 0; /*0x49c097*/
  Vector::Clear((int)v23); /*0x49c09e*/
  v22[0] = &off_7E1668; /*0x49c0aa*/
  BufferIOFileClass::Dtor(v22); /*0x49c0b1*/
  return 1; /*0x49c0b7*/
}


// ==== 0x0049C0D0  ObjectClass::LoadCampaignCoopSave  this=ObjectClass  sig=csp ====
char __thiscall CampaignClass_LoadCoopSave(char *this)
{
  char *v2; // ebx
  int v3; // esi
  char *v4; // edi
  int v5; // esi
  int v6; // eax
  char v7; // al
  unsigned __int8 v8; // al
  char v9; // al
  char v10; // al
  char *v11; // edi
  int v12; // esi
  char i; // al
  int v14; // esi
  int v15; // eax
  char v16; // al
  unsigned __int8 v17; // al
  char v18; // al
  int Int_Overwrite; // eax
  int v20; // esi
  int v21; // eax
  int j; // esi
  void *v24[3]; // [esp+10h] [ebp-148h] BYREF
  int v25[7]; // [esp+1Ch] [ebp-13Ch] BYREF
  _DWORD v26[6]; // [esp+38h] [ebp-120h] BYREF
  char v27; // [esp+50h] [ebp-108h]
  char v28[100]; // [esp+68h] [ebp-F0h] BYREF
  _DWORD v29[22]; // [esp+CCh] [ebp-8Ch] BYREF
  _BYTE v30[12]; // [esp+124h] [ebp-34h] BYREF
  int v31; // [esp+130h] [ebp-28h]
  char Buffer[32]; // [esp+138h] [ebp-20h] BYREF

  if ( !*this ) /*0x49c0dc*/
    return 0; /*0x49c0dc*/
  v2 = this + 28; /*0x49c0e9*/
  if ( !this->referenceCount ) /*0x49c0e6*/
    return 0; /*0x49c0ee*/
  v3 = 0; /*0x49c0f7*/
  v4 = this; /*0x49c0fb*/
  if ( *this )
  {
    do
    {
      if ( v3 >= 1021 ) /*0x49c109*/
        break; /*0x49c109*/
      if ( isalnum(*v4) )
      {
        MEMORY[0x89ED18][v3] = *v4; /*0x49c177*/
      }
      else
      {
        MEMORY[0x89ED18][v3] = 61; /*0x49c11b*/
        v5 = v3 + 1; /*0x49c122*/
        v6 = *v4 >> 4; /*0x49c126*/
        if ( (unsigned int)v6 >= 0x10 )
          v7 = 0; /*0x49c13d*/
        else
          v7 = v6 >= 10 ? v6 + 55 : v6 + 48;
        MEMORY[0x89ED18][v5] = v7; /*0x49c13f*/
        v3 = v5 + 1; /*0x49c147*/
        v8 = *v4 & 0xF; /*0x49c148*/
        if ( v8 > 0xFu )
        {
          MEMORY[0x89ED18][v3] = 0; /*0x49c16d*/
        }
        else
        {
          v9 = (*v4 & 0xFu) >= 0xA ? v8 + 55 : v8 + 48;
          MEMORY[0x89ED18][v3] = v9; /*0x49c159*/
        }
      }
      v10 = v4[1]; /*0x49c17d*/
      ++v3; /*0x49c180*/
      ++v4; /*0x49c181*/
    }
    while ( v10 );
  }
  MEMORY[0x89ED18][v3] = 0; /*0x49c194*/
  strcpy(v28, MEMORY[0x89ED18]); /*0x49c1ae*/
  v11 = this + 28; /*0x49c1b7*/
  v12 = 0; /*0x49c1b9*/
  for ( i = *v2; i; ++v11 )
  {
    if ( v12 >= 1021 ) /*0x49c1cb*/
      break; /*0x49c1cb*/
    if ( isalnum(i) )
    {
      MEMORY[0x89ED18][v12] = *v11; /*0x49c239*/
    }
    else
    {
      MEMORY[0x89ED18][v12] = 61; /*0x49c1dd*/
      v14 = v12 + 1; /*0x49c1e4*/
      v15 = *v11 >> 4; /*0x49c1e8*/
      if ( (unsigned int)v15 >= 0x10 )
        v16 = 0; /*0x49c1ff*/
      else
        v16 = v15 >= 10 ? v15 + 55 : v15 + 48;
      MEMORY[0x89ED18][v14] = v16; /*0x49c201*/
      v12 = v14 + 1; /*0x49c209*/
      v17 = *v11 & 0xF; /*0x49c20a*/
      if ( v17 > 0xFu )
      {
        MEMORY[0x89ED18][v12] = 0; /*0x49c22f*/
      }
      else
      {
        v18 = (*v11 & 0xFu) >= 0xA ? v17 + 55 : v17 + 48;
        MEMORY[0x89ED18][v12] = v18; /*0x49c21b*/
      }
    }
    i = v11[1]; /*0x49c23f*/
    ++v12; /*0x49c242*/
  }
  MEMORY[0x89ED18][v12] = 0; /*0x49c256*/
  strcat(v28, MEMORY[0x89ED18]); /*0x49c278*/
  CCFileClass::Construct(v29, MEMORY[0x81F0F8]); /*0x49c28d*/
  v24[1] = 0; /*0x49c298*/
  v24[2] = 0; /*0x49c29c*/
  INISectionList::Constructor(v25); /*0x49c2a0*/
  Node::Init(v26); /*0x49c2a9*/
  v26[5] = 0; /*0x49c2bc*/
  v27 = 0; /*0x49c2c0*/
  v24[0] = &CCINIClass_Vtable; /*0x49c2c4*/
  if ( !CCINIClass::Load(v24, (int)v29, 0, 0) ) /*0x49c2d3*/
  {
LABEL_44:
    HashTable::DestroyHashTableINIClass(v24); /*0x49c553*/
    v29[0] = &vt_CCFileClass; /*0x49c563*/
    v31 = 0; /*0x49c56e*/
    Vector::Clear((int)v30); /*0x49c575*/
    v29[0] = &off_7E1668; /*0x49c581*/
    BufferIOFileClass::Dtor(v29); /*0x49c58c*/
    return 0; /*0x49c594*/
  }
  this->attachedBomb = INIClass::ReadInt_Overwrite(v28, unk_81F19C, 0); /*0x49c2fc*/
  INIClass::ReadInt_Overwrite(v28, unk_81F194, 0); /*0x49c2ff*/
  this->q011 = INIClass::ReadInt_Overwrite(v28, unk_81F184, -1); /*0x49c329*/
  this->abstractFlags = SuperWeaponTypeClass::FindOrCreate( /*0x49c341*/
                            (unsigned __int8 ***)v24,
                            (unsigned __int8 *)v28,
                            (unsigned __int8 *)unk_81F17C,
                            -2);
  this->nextArrayIndex = INIClass::ReadInt_Overwrite(v28, unk_81F174, -2); /*0x49c349*/
  this->vtable4 = SuperWeaponTypeClass::FindOrCreate( /*0x49c371*/
                             (unsigned __int8 ***)v24,
                             (unsigned __int8 *)v28,
                             (unsigned __int8 *)unk_81F16C,
                             -2);
  this->attachedTag = INIClass::ReadInt_Overwrite(v28, unk_81F164, -2); /*0x49c388*/
  this->q048 = INIClass::ReadInt_Overwrite(v28, unk_81F15C, 0); /*0x49c390*/
  this->q04C = INIClass::ReadInt_Overwrite(v28, unk_81F154, 0); /*0x49c3b6*/
  this->abstractFlags = INIClass::ReadInt_Overwrite(v28, MEMORY[0x81F14C], 0); /*0x49c3cd*/
  this->q054 = INIClass::ReadInt_Overwrite(v28, MEMORY[0x81F144], 0); /*0x49c3d5*/
  this->q058 = INIClass::ReadInt_Overwrite(v28, MEMORY[0x81F13C], 0); /*0x49c3fb*/
  this->q05C = INIClass::ReadInt_Overwrite(v28, MEMORY[0x81F134], 0); /*0x49c412*/
  this->nextArrayIndex = INIClass::ReadInt_Overwrite(v28, MEMORY[0x81F12C], 0); /*0x49c41a*/
  this->customSound = INIClass::ReadInt_Overwrite(v28, MEMORY[0x81F124], 0); /*0x49c440*/
  Int_Overwrite = INIClass::ReadInt_Overwrite(v28, MEMORY[0x81F11C], 0); /*0x49c443*/
  v20 = this->q011; /*0x49c448*/
  this->bombVisible = Int_Overwrite; /*0x49c44b*/
  if ( !MEMORY[0x89F578] ) /*0x49c455*/
    CampaignClass::LoadFromINI((int)&MEMORY[0x89F518]); /*0x49c45c*/
  if ( v20 < 0 || v20 >= MEMORY[0x89F574] ) /*0x49c46f*/
  {
    this->uniqueId = 0; /*0x49c550*/
    goto LABEL_44; /*0x49c550*/
  }
  v21 = MEMORY[0x89F570] + 76 * v20; /*0x49c486*/
  this->uniqueId = *(char *)(v21 + 8); /*0x49c489*/
  this->ambientSoundController = __2_YAPAXI_Z(4 * *(char *)(v21 + 8)); /*0x49c499*/
  for ( j = 0; j < this->uniqueId; ++j ) /*0x49c4a6*/
  {
    sprintf(Buffer, MEMORY[0x81F114], j + 1); /*0x49c4b9*/
    *(_DWORD *)(this->ambientSoundController + 4 * j) = __2_YAPAXI_Z(0x104u); /*0x49c4ce*/
    INIClass::GetString( /*0x49c4f3*/
      (unsigned __int8 ***)v24,
      (unsigned __int8 *)v28,
      (unsigned __int8 *)Buffer,
      MEMORY[0x81F108],
      *(char **)(this->ambientSoundController + 4 * j),
      260);
  }
  this->health = 1; /*0x49c505*/
  HashTable::DestroyHashTableINIClass(v24); /*0x49c509*/
  v29[0] = &vt_CCFileClass; /*0x49c515*/
  v31 = 0; /*0x49c520*/
  Vector::Clear((int)v30); /*0x49c527*/
  v29[0] = &off_7E1668; /*0x49c533*/
  BufferIOFileClass::Dtor(v29); /*0x49c53e*/
  return 1; /*0x49c543*/
}


// ==== 0x0049C5A0  CampaignClass::SaveProgress  this=CampaignClass  sig=csp ====
char __thiscall CampaignClass_SaveProgress(char *this)
{
  char *v2; // ebx
  int v3; // esi
  int v5; // esi
  char *v6; // edi
  int v7; // esi
  int v8; // eax
  char v9; // al
  unsigned __int8 v10; // al
  char v11; // al
  char v12; // al
  char *v13; // edi
  int v14; // esi
  char i; // al
  int v16; // esi
  int v17; // eax
  char v18; // al
  int j; // esi
  int v20; // ecx
  void *PlayerSide; // eax
  int PlayerColor; // eax
  int v23; // esi
  _DWORD *v24; // eax
  void *v25; // eax
  int v26; // eax
  int v27; // [esp+10h] [ebp-1B8h]
  void *v28[3]; // [esp+14h] [ebp-1B4h] BYREF
  int v29[7]; // [esp+20h] [ebp-1A8h] BYREF
  _DWORD v30[6]; // [esp+3Ch] [ebp-18Ch] BYREF
  char v31; // [esp+54h] [ebp-174h]
  char Block[100]; // [esp+6Ch] [ebp-15Ch] BYREF
  _DWORD v33[22]; // [esp+D0h] [ebp-F8h] BYREF
  char v34[12]; // [esp+128h] [ebp-A0h] BYREF
  int v35; // [esp+134h] [ebp-94h]
  _DWORD v36[22]; // [esp+13Ch] [ebp-8Ch] BYREF
  char v37[12]; // [esp+194h] [ebp-34h] BYREF
  int v38; // [esp+1A0h] [ebp-28h]
  char Buffer[32]; // [esp+1A8h] [ebp-20h] BYREF

  if ( !this->q06C ) /*0x49c5ac*/
    return 0; /*0x49c5ac*/
  if ( !*this ) /*0x49c5b7*/
    return 0; /*0x49c5b7*/
  v2 = this + 28; /*0x49c5c4*/
  if ( !this->referenceCount ) /*0x49c5c1*/
    return 0; /*0x49c5c1*/
  v3 = this->alignmentPadding_3; /*0x49c5d4*/
  if ( !MEMORY[0x89F578] ) /*0x49c5d9*/
    CampaignClass::LoadFromINI((int)&MEMORY[0x89F518]); /*0x49c5e0*/
  if ( v3 < 0 || v3 >= MEMORY[0x89F574] ) /*0x49c5f5*/
    return 0; /*0x49cae5*/
  v27 = MEMORY[0x89F570] + 76 * v3; /*0x49c60d*/
  if ( this->uniqueId == this->q038 ) /*0x49c616*/
    return 1; /*0x49c61b*/
  CCFileClass::Construct(v36, MEMORY[0x81F0F8]); /*0x49c631*/
  v28[1] = 0; /*0x49c63a*/
  v28[2] = 0; /*0x49c63e*/
  INISectionList::Constructor(v29); /*0x49c642*/
  Node::Init(v30); /*0x49c64b*/
  v30[5] = 0; /*0x49c65e*/
  v31 = 0; /*0x49c662*/
  v28[0] = &CCINIClass_Vtable; /*0x49c667*/
  CCINIClass::Load(v28, (int)v36, 0, 0); /*0x49c66f*/
  CCFileClass::Reset(v36); /*0x49c67b*/
  v5 = 0; /*0x49c683*/
  v6 = this; /*0x49c687*/
  if ( *this )
  {
    do
    {
      if ( v5 >= 1021 ) /*0x49c695*/
        break; /*0x49c695*/
      if ( isalnum(*v6) )
      {
        MEMORY[0x89ED18][v5] = *v6; /*0x49c703*/
      }
      else
      {
        MEMORY[0x89ED18][v5] = 61; /*0x49c6a7*/
        v7 = v5 + 1; /*0x49c6ae*/
        v8 = *v6 >> 4; /*0x49c6b2*/
        if ( (unsigned int)v8 >= 0x10 )
          v9 = 0; /*0x49c6c9*/
        else
          v9 = v8 >= 10 ? v8 + 55 : v8 + 48;
        MEMORY[0x89ED18][v7] = v9; /*0x49c6cb*/
        v5 = v7 + 1; /*0x49c6d3*/
        v10 = *v6 & 0xF; /*0x49c6d4*/
        if ( v10 > 0xFu )
        {
          MEMORY[0x89ED18][v5] = 0; /*0x49c6f9*/
        }
        else
        {
          v11 = (*v6 & 0xFu) >= 0xA ? v10 + 55 : v10 + 48;
          MEMORY[0x89ED18][v5] = v11; /*0x49c6e5*/
        }
      }
      v12 = v6[1]; /*0x49c709*/
      ++v5; /*0x49c70c*/
      ++v6; /*0x49c70d*/
    }
    while ( v12 );
  }
  MEMORY[0x89ED18][v5] = 0; /*0x49c720*/
  strcpy(Block, MEMORY[0x89ED18]); /*0x49c73a*/
  v13 = this + 28; /*0x49c743*/
  v14 = 0; /*0x49c745*/
  for ( i = *v2; i; ++v13 )
  {
    if ( v14 >= 1021 ) /*0x49c753*/
      break; /*0x49c753*/
    if ( isalnum(i) )
    {
      MEMORY[0x89ED18][v14] = *v13; /*0x49c7a4*/
    }
    else
    {
      MEMORY[0x89ED18][v14] = 61; /*0x49c765*/
      v16 = v14 + 1; /*0x49c76c*/
      v17 = *v13 >> 4; /*0x49c770*/
      if ( (unsigned int)v17 >= 0x10 )
        v18 = 0; /*0x49c787*/
      else
        v18 = v17 >= 10 ? v17 + 55 : v17 + 48;
      MEMORY[0x89ED18][v16] = v18; /*0x49c789*/
      v14 = v16 + 1; /*0x49c794*/
      MEMORY[0x89ED18][v14] = EncodeDigitHex(*v13 & 0xF); /*0x49c79a*/
    }
    i = v13[1]; /*0x49c7aa*/
    ++v14; /*0x49c7ad*/
  }
  MEMORY[0x89ED18][v14] = 0; /*0x49c7bd*/
  strcat(Block, MEMORY[0x89ED18]); /*0x49c7df*/
  CCFileClass::Construct3((int)v33); /*0x49c7ef*/
  (*(void (__thiscall **)(_DWORD *, char *))(v33[0] + 8))(v33, MEMORY[0x81F0F8]); /*0x49c807*/
  (*(void (__thiscall **)(_DWORD *, int))(v33[0] + 28))(v33, 2); /*0x49c81a*/
  INIClass::ClearSection((int)v28, (int)Block, 0); /*0x49c828*/
  INIClass::SetInt((char *)v28, (unsigned __int8 *)Block, unk_81F19C, this->q038, 0); /*0x49c841*/
  INIClass::SetInt((char *)v28, (unsigned __int8 *)Block, unk_81F184, this->alignmentPadding_3, 0); /*0x49c85a*/
  for ( j = 0; /*0x49c863*/
        j < *(char *)(v27 + 8);
        INIClass::SetString((char *)v28, (unsigned __int8 *)Block, Buffer, *(char **)(this->q03C + 4 * j++)) )
  {
    sprintf(Buffer, MEMORY[0x81F114], j + 1); /*0x49c87d*/
  }
  v20 = MEMORY[0xA8DA84]; /*0x49c8ac*/
  if ( MEMORY[0xA8DA84] ) /*0x49c8b4*/
  {
    PlayerSide = (void *)SessionClass::GetPlayerSide(*(_DWORD *)MEMORY[0xA8DA78]); /*0x49c8be*/
    INIClass::SetHouseName((char *)v28, (unsigned __int8 *)Block, unk_81F17C, PlayerSide); /*0x49c8d2*/
    PlayerColor = SessionClass::GetPlayerColor(*(_DWORD *)MEMORY[0xA8DA78]); /*0x49c8e1*/
    INIClass::SetInt((char *)v28, (unsigned __int8 *)Block, unk_81F174, PlayerColor, 0); /*0x49c8f5*/
    v20 = MEMORY[0xA8DA84]; /*0x49c8fa*/
  }
  v23 = 1; /*0x49c900*/
  if ( v20 > 1 ) /*0x49c907*/
  {
    v24 = &MEMORY[0xA8B2A0]; /*0x49c909*/
    while ( *v24 != -1 ) /*0x49c911*/
    {
      ++v23; /*0x49c913*/
      ++v24; /*0x49c914*/
      if ( v23 >= v20 ) /*0x49c919*/
        goto LABEL_47; /*0x49c919*/
    }
    v25 = (void *)SessionClass::GetPlayerSide(*(_DWORD *)(MEMORY[0xA8DA78] + 4 * v23)); /*0x49c925*/
    INIClass::SetHouseName((char *)v28, (unsigned __int8 *)Block, unk_81F16C, v25); /*0x49c939*/
    v26 = SessionClass::GetPlayerColor(*(_DWORD *)(MEMORY[0xA8DA78] + 4 * v23)); /*0x49c949*/
    INIClass::SetInt((char *)v28, (unsigned __int8 *)Block, unk_81F164, v26, 0); /*0x49c95d*/
  }
LABEL_47:
  INIClass::SetInt((char *)v28, (unsigned __int8 *)Block, MEMORY[0x81F11C], this->q068, 0); /*0x49c962*/
  INIClass::SetInt((char *)v28, (unsigned __int8 *)Block, unk_81F15C, this->q048, 0); /*0x49c98f*/
  INIClass::SetInt((char *)v28, (unsigned __int8 *)Block, unk_81F154, this->q04C, 0); /*0x49c9a8*/
  INIClass::SetInt((char *)v28, (unsigned __int8 *)Block, MEMORY[0x81F14C], this->abstractFlags, 0); /*0x49c9c1*/
  INIClass::SetInt((char *)v28, (unsigned __int8 *)Block, MEMORY[0x81F144], this->q054, 0); /*0x49c9da*/
  INIClass::SetInt((char *)v28, (unsigned __int8 *)Block, MEMORY[0x81F13C], this->q058, 0); /*0x49c9f3*/
  INIClass::SetInt((char *)v28, (unsigned __int8 *)Block, MEMORY[0x81F134], this->q05C, 0); /*0x49ca0c*/
  INIClass::SetInt((char *)v28, (unsigned __int8 *)Block, MEMORY[0x81F12C], this->nextArrayIndex, 0); /*0x49ca25*/
  INIClass::SetInt((char *)v28, (unsigned __int8 *)Block, MEMORY[0x81F124], this->Name, 0); /*0x49ca3e*/
  INIClass::WriteDigest(v28, (int)v33, 0); /*0x49ca51*/
  CCFileClass::Reset(v33); /*0x49ca5d*/
  v33[0] = &vt_CCFileClass; /*0x49ca67*/
  v35 = 0; /*0x49ca77*/
  Vector::Clear((int)v34); /*0x49ca7e*/
  v33[0] = &off_7E1668; /*0x49ca8f*/
  BufferIOFileClass::Dtor(v33); /*0x49ca96*/
  HashTable::DestroyHashTableINIClass(v28); /*0x49ca9f*/
  v36[0] = &vt_CCFileClass; /*0x49caab*/
  v38 = 0; /*0x49cab2*/
  Vector::Clear((int)v37); /*0x49cab9*/
  v36[0] = &off_7E1668; /*0x49cac5*/
  BufferIOFileClass::Dtor(v36); /*0x49cacc*/
  this->q06C = 1; /*0x49cad2*/
  return 1; /*0x49c618*/
}


// ==== 0x0049CAF0  Movie::SetupScreen  this=Movie  sig=csp ====
char __thiscall Movie::SetupScreen(int this, CCINIClass *aP1)
{
  CCINIClass *v3; // eax
  TechnoTypeClass *v4; // ecx
  char *v5; // ebp
  CCINIClass *v6; // ecx
  int i; // edi
  CCINIClass *v8; // edx
  int v9; // edi
  CCINIClass *v10; // ebx
  int v12; // [esp+8h] [ebp-4h]

  if ( !MEMORY[0x89F578] ) /*0x49cafc*/
    CampaignClass::LoadFromINI((int)&MEMORY[0x89F518]); /*0x49cb03*/
  v3 = aP1; /*0x49cb08*/
  if ( (int)aP1 < 0 || (int)aP1 >= MEMORY[0x89F574] ) /*0x49cb1c*/
    return 0; /*0x49cc46*/
  v4 = (TechnoTypeClass *)MEMORY[0x89F570]; /*0x49cb29*/
  *(_BYTE *)(this + 108) = 1; /*0x49cb2f*/
  *(_DWORD *)(this + 56) = -1; /*0x49cb33*/
  v5 = &v4->vtable0[76 * (_DWORD)aP1]; /*0x49cb3a*/
  v6 = *(CCINIClass **)(this + 68); /*0x49cb3d*/
  *(_DWORD *)(this + 72) = 0; /*0x49cb42*/
  *(_DWORD *)(this + 76) = 0; /*0x49cb45*/
  *(_DWORD *)(this + 80) = 0; /*0x49cb48*/
  *(_DWORD *)(this + 84) = 0; /*0x49cb4b*/
  *(_DWORD *)(this + 96) = 0; /*0x49cb4e*/
  *(_DWORD *)(this + 100) = 0; /*0x49cb51*/
  *(_DWORD *)(this + 88) = 0; /*0x49cb54*/
  *(_DWORD *)(this + 92) = 0; /*0x49cb57*/
  *(_DWORD *)(this + 104) = 0; /*0x49cb5a*/
  if ( v6 != aP1 ) /*0x49cb5d*/
  {
    if ( *(_DWORD *)(this + 60) ) /*0x49cb63*/
    {
      for ( i = 0; i < *(_DWORD *)(this + 64); ++i ) /*0x49cb72*/
      {
        v8 = *(CCINIClass **)(this + 60); /*0x49cb74*/
        if ( *(_DWORD *)&v8->__pad_0[4 * i] ) /*0x49cb77*/
          __3_YAXPAX_Z(*(void **)&v8->__pad_0[4 * i]); /*0x49cb7f*/
      }
      __3_YAXPAX_Z(*(void **)(this + 60)); /*0x49cb93*/
    }
    *(_DWORD *)(this + 60) = 0; /*0x49cb9b*/
    *(_DWORD *)(this + 64) = 0; /*0x49cb9e*/
    *(_DWORD *)(this + 60) = __2_YAPAXI_Z(4 * v5[8]); /*0x49cbae*/
    v9 = 0; /*0x49cbb7*/
    if ( v5[8] > 0 ) /*0x49cbbb*/
    {
      v12 = 0; /*0x49cbbd*/
      do /*0x49cc26*/
      {
        v10 = (CCINIClass *)Random::Range(&MEMORY[0xA8B230]->random[1], 0, (IUnknown *)2); /*0x49cbde*/
        *(_DWORD *)(*(_DWORD *)(this + 60) + 4 * v9) = __2_YAPAXI_Z(0x104u); /*0x49cbf1*/
        strncpy( /*0x49cc0c*/
          *(char **)(*(_DWORD *)(this + 60) + 4 * v9++),
          (const char *)(*((_DWORD *)v5 + 3) + 260 * ((_DWORD)v10 + v12)),
          0x103u);
        v12 += 3; /*0x49cc22*/
      }
      while ( v9 < v5[8] ); /*0x49cc26*/
    }
    v3 = aP1; /*0x49cc2e*/
    *(_DWORD *)(this + 64) = v5[8]; /*0x49cc32*/
    *(_DWORD *)(this + 56) = 0; /*0x49cc35*/
  }
  *(_DWORD *)(this + 68) = v3; /*0x49cc39*/
  return 1; /*0x49cc3d*/
}


// ==== 0x0049CC50  MPCooperative::validateMove  this=MPCooperative  sig=csp ====
char __thiscall sub_49CC50(
        _DWORD *this,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12,
        int a13,
        int a14,
        int a15,
        int a16,
        int a17,
        int a18,
        int a19,
        int a20,
        int a21,
        int a22,
        int a23,
        int a24,
        int a25,
        int a26,
        int a27,
        int a28,
        int a29,
        int a30,
        int a31,
        int a32,
        int a33,
        int a34,
        int a35,
        int a36,
        int a37,
        int a38,
        int a39,
        int a40,
        int a41,
        int a42,
        int a43,
        int a44,
        int a45,
        int a46,
        int a47,
        int a48,
        int a49,
        int a50,
        int a51,
        int a52,
        int a53,
        int a54,
        int a55,
        int a56,
        int a57,
        int a58,
        int a59)
{
  int v59; // esi

  if ( a2 < 0 || a2 >= this->MPCooperative_field_0x10 ) /*0x49cc5f*/
    return 0; /*0x49ccde*/
  v59 = this->MPCooperative_field_0x48; /*0x49cc66*/
  this->MPCooperative_field_0x38 = a2; /*0x49cc69*/
  this->MPCooperative_field_0x48 = a20 + v59; /*0x49cc75*/
  this->MPCooperative_field_0x4C += a48; /*0x49cc81*/
  this->MPCooperative_field_0x14 += a24; /*0x49cc90*/
  this->MPCooperative_field_0x54 += a52; /*0x49cc9c*/
  this->MPCooperative_field_0x58 += a16; /*0x49ccab*/
  this->MPCooperative_field_0x5C += a44; /*0x49ccb7*/
  this->__pad_018 += a28; /*0x49ccc6*/
  this->MPCooperative_field_0x64 += a56; /*0x49ccd2*/
  this->MPCooperative_field_0x68 = a3; /*0x49ccd5*/
  return 1; /*0x49ccdb*/
}


// ==== 0x0049CCF0  ObjectClass::DecodeCampaignPlayerName  this=ObjectClass  sig=csp ====
char __thiscall sub_49CCF0(
        int this,
        int a2,
        int a3,
        void *Block,
        int a5,
        __int16 a6,
        int a7,
        int a8,
        char *a9,
        char *a10)
{
  int v12; // esi
  int v14; // eax
  int i; // esi
  int v16; // esi
  int v17; // ebx
  char *v18; // edx
  char *v19; // esi
  char v20; // al
  char v21; // al
  char v22; // al
  char v23; // cl
  char v24; // al
  char *v25; // edx
  char *v26; // esi
  char v27; // al
  char v28; // al
  char v29; // al
  char v30; // cl
  char v31; // al
  char v32; // bl
  int v33; // [esp+14h] [ebp+4h]

  if ( !MEMORY[0x89F578] ) /*0x49ccfd*/
    CampaignClass::LoadFromINI((int)&MEMORY[0x89F518]); /*0x49cd04*/
  if ( a2 >= 0 && a2 < MEMORY[0x89F574] ) /*0x49cd1d*/
  {
    v12 = MEMORY[0x89F570]; /*0x49cd23*/
    *(_DWORD *)(this + 56) = -1; /*0x49cd30*/
    *(_DWORD *)(this + 72) = 0; /*0x49cd3a*/
    *(_DWORD *)(this + 76) = 0; /*0x49cd3d*/
    *(_DWORD *)(this + 80) = 0; /*0x49cd40*/
    *(_DWORD *)(this + 84) = 0; /*0x49cd46*/
    v33 = v12 + 76 * a2; /*0x49cd49*/
    *(_DWORD *)(this + 88) = 0; /*0x49cd4d*/
    *(_DWORD *)(this + 92) = 0; /*0x49cd50*/
    *(_DWORD *)(this + 96) = 0; /*0x49cd53*/
    *(_DWORD *)(this + 100) = 0; /*0x49cd56*/
    *(_DWORD *)(this + 104) = 0; /*0x49cd59*/
    if ( *(char *)(v12 + 76 * a2 + 8) != a7 ) /*0x49cd62*/
    {
      if ( Block ) /*0x49cd6a*/
      {
        if ( HIBYTE(a6) ) /*0x49cd72*/
          __3_YAXPAX_Z(Block); /*0x49cd75*/
      }
      return 0; /*0x49cd83*/
    }
    *(_DWORD *)(this + 68) = a2; /*0x49cd86*/
    v14 = *(_DWORD *)(this + 60); /*0x49cd89*/
    *(_BYTE *)(this + 108) = 1; /*0x49cd8e*/
    if ( v14 ) /*0x49cd92*/
    {
      for ( i = 0; i < *(_DWORD *)(this + 64); ++i ) /*0x49cd9b*/
      {
        if ( *(_DWORD *)(*(_DWORD *)(this + 60) + 4 * i) ) /*0x49cda0*/
          __3_YAXPAX_Z(*(void **)(*(_DWORD *)(this + 60) + 4 * i)); /*0x49cda8*/
      }
      __3_YAXPAX_Z(*(void **)(this + 60)); /*0x49cdbe*/
    }
    *(_DWORD *)(this + 60) = 0; /*0x49cdc8*/
    *(_DWORD *)(this + 64) = 0; /*0x49cdcb*/
    v16 = 0; /*0x49cdde*/
    *(_DWORD *)(this + 60) = __2_YAPAXI_Z(4 * a7); /*0x49cde2*/
    if ( a7 > 0 ) /*0x49cde5*/
    {
      v17 = 0; /*0x49cde7*/
      do /*0x49ce2e*/
      {
        *(_DWORD *)(*(_DWORD *)(this + 60) + 4 * v16) = __2_YAPAXI_Z(0x104u); /*0x49cdff*/
        strncpy( /*0x49ce20*/
          *(char **)(*(_DWORD *)(this + 60) + 4 * v16),
          (const char *)(*(_DWORD *)(v33 + 12) + 260 * (v17 + *((_DWORD *)Block + v16))),
          0x103u);
        ++v16; /*0x49ce28*/
        v17 += 3; /*0x49ce29*/
      }
      while ( v16 < a7 ); /*0x49ce2e*/
    }
    v18 = a10; /*0x49ce30*/
    *(_DWORD *)(this + 64) = a7; /*0x49ce34*/
    *(_DWORD *)(this + 56) = 0; /*0x49ce39*/
    if ( a10 ) /*0x49ce40*/
    {
      v19 = MEMORY[0x89F118]; /*0x49ce48*/
      if ( *a10 ) /*0x49ce46*/
      {
        do /*0x49cf05*/
        {
          if ( *v18 == 61 ) /*0x49ce59*/
          {
            v20 = v18[1]; /*0x49ce5f*/
            if ( !v20 ) /*0x49ce64*/
              break; /*0x49ce64*/
            if ( v20 > 57 || v20 < 48 ) /*0x49ce70*/
            {
              if ( v20 > 102 || v20 < 97 ) /*0x49ce80*/
              {
                if ( v20 > 70 || v20 < 65 ) /*0x49ce90*/
                  v21 = 0; /*0x49ce9a*/
                else
                  v21 = v20 - 55; /*0x49ce95*/
              }
              else
              {
                v21 = v20 - 87; /*0x49ce85*/
              }
            }
            else
            {
              v21 = v20 - 48; /*0x49ce75*/
            }
            ++v18; /*0x49ce9c*/
            *v19 = v21; /*0x49ce9d*/
            if ( v18[1] ) /*0x49ce9f*/
            {
              v22 = 16 * v21; /*0x49cea6*/
              *v19 = v22; /*0x49cea9*/
              v23 = v18[1]; /*0x49ceab*/
              if ( v23 > 57 || v23 < 48 ) /*0x49ceb6*/
              {
                if ( v23 > 102 || v23 < 97 ) /*0x49cecd*/
                {
                  if ( v23 > 70 || v23 < 65 ) /*0x49cee4*/
                  {
                    ++v18; /*0x49cef7*/
                    *v19 = v22; /*0x49cef8*/
                  }
                  else
                  {
                    ++v18; /*0x49ceee*/
                    *v19 = (v23 - 55) | v22; /*0x49ceef*/
                  }
                }
                else
                {
                  ++v18; /*0x49ced7*/
                  *v19 = (v23 - 87) | v22; /*0x49ced8*/
                }
              }
              else
              {
                ++v18; /*0x49cec0*/
                *v19 = (v23 - 48) | v22; /*0x49cec1*/
              }
            }
          }
          else
          {
            *v19 = *v18; /*0x49cefc*/
          }
          v24 = *++v18; /*0x49cefe*/
          ++v19; /*0x49cf02*/
        }
        while ( v24 ); /*0x49cf05*/
      }
      *v19 = 0; /*0x49cf0b*/
      strcpy((char *)this, MEMORY[0x89F118]); /*0x49cf27*/
    }
    else
    {
      *(_BYTE *)this = 0; /*0x49cf32*/
    }
    v25 = a9; /*0x49cf36*/
    if ( a9 ) /*0x49cf3c*/
    {
      v26 = MEMORY[0x89F118]; /*0x49cf44*/
      if ( *a9 ) /*0x49cf42*/
      {
        do /*0x49d001*/
        {
          if ( *v25 == 61 ) /*0x49cf55*/
          {
            v27 = v25[1]; /*0x49cf5b*/
            if ( !v27 ) /*0x49cf60*/
              break; /*0x49cf60*/
            if ( v27 > 57 || v27 < 48 ) /*0x49cf6c*/
            {
              if ( v27 > 102 || v27 < 97 ) /*0x49cf7c*/
              {
                if ( v27 > 70 || v27 < 65 ) /*0x49cf8c*/
                  v28 = 0; /*0x49cf96*/
                else
                  v28 = v27 - 55; /*0x49cf91*/
              }
              else
              {
                v28 = v27 - 87; /*0x49cf81*/
              }
            }
            else
            {
              v28 = v27 - 48; /*0x49cf71*/
            }
            ++v25; /*0x49cf98*/
            *v26 = v28; /*0x49cf99*/
            if ( v25[1] ) /*0x49cf9b*/
            {
              v29 = 16 * v28; /*0x49cfa2*/
              *v26 = v29; /*0x49cfa5*/
              v30 = v25[1]; /*0x49cfa7*/
              if ( v30 > 57 || v30 < 48 ) /*0x49cfb2*/
              {
                if ( v30 > 102 || v30 < 97 ) /*0x49cfc9*/
                {
                  if ( v30 > 70 || v30 < 65 ) /*0x49cfe0*/
                  {
                    ++v25; /*0x49cff3*/
                    *v26 = v29; /*0x49cff4*/
                  }
                  else
                  {
                    ++v25; /*0x49cfea*/
                    *v26 = (v30 - 55) | v29; /*0x49cfeb*/
                  }
                }
                else
                {
                  ++v25; /*0x49cfd3*/
                  *v26 = (v30 - 87) | v29; /*0x49cfd4*/
                }
              }
              else
              {
                ++v25; /*0x49cfbc*/
                *v26 = (v30 - 48) | v29; /*0x49cfbd*/
              }
            }
          }
          else
          {
            *v26 = *v25; /*0x49cff8*/
          }
          v31 = *++v25; /*0x49cffa*/
          ++v26; /*0x49cffe*/
        }
        while ( v31 ); /*0x49d001*/
      }
      *v26 = 0; /*0x49d007*/
      strcpy((char *)(this + 28), MEMORY[0x89F118]); /*0x49d026*/
    }
    else
    {
      *(_BYTE *)(this + 28) = 0; /*0x49d031*/
    }
    Debug::Log(); /*0x49d03e*/
  }
  v32 = *(_BYTE *)(this + 108); /*0x49d04c*/
  if ( Block && HIBYTE(a6) ) /*0x49d059*/
    __3_YAXPAX_Z(Block); /*0x49d05c*/
  return v32; /*0x49cd7d*/
}


// ==== 0x0049D070  Array::GetElementAt  this=Array  sig=csp ====
char __thiscall Array_GetElementAt(int this, _DWORD *a2, int a3)
{
  int v3; // edx
  char result; // al

  v3 = a3; /*0x49d070*/
  result = 0; /*0x49d079*/
  *a2 = 0; /*0x49d07e*/
  if ( a3 == -1 ) /*0x49d084*/
    v3 = *(_DWORD *)(this + 56); /*0x49d086*/
  if ( v3 < 0 || v3 >= *(_DWORD *)(this + 64) ) /*0x49d094*/
    v3 = -1; /*0x49d096*/
  if ( *(_BYTE *)(this + 108) ) /*0x49d09a*/
  {
    if ( v3 != -1 ) /*0x49d0a5*/
      *a2 = *(_DWORD *)(*(_DWORD *)(this + 60) + 4 * v3); /*0x49d0ad*/
    if ( *a2 ) /*0x49d0af*/
      return 1; /*0x49d0b4*/
  }
  return result; /*0x49d0b6*/
}


// ==== 0x0049D120  MPCooperative::ReadCoopSaveINI  this=MPCooperative  sig=csp ====
bool __thiscall MPCooperative::ReadCoopSaveINI(char *this)
{
  char *v1; // edi
  char *v2; // ebx
  int v4; // esi
  int v5; // esi
  int v6; // eax
  char v7; // al
  char v8; // al
  char *v9; // edi
  int v10; // esi
  char i; // al
  int v12; // esi
  int v13; // eax
  char v14; // al
  bool v15; // bl
  _DWORD v16[22]; // [esp+Ch] [ebp-128h] BYREF
  _BYTE v17[12]; // [esp+64h] [ebp-D0h] BYREF
  int v18; // [esp+70h] [ebp-C4h]
  void *v19[3]; // [esp+78h] [ebp-BCh] BYREF
  _DWORD v20[7]; // [esp+84h] [ebp-B0h] BYREF
  _DWORD v21[6]; // [esp+A0h] [ebp-94h] BYREF
  char v22; // [esp+B8h] [ebp-7Ch]
  char v23[100]; // [esp+D0h] [ebp-64h] BYREF

  v1 = this; /*0x49d129*/
  if ( !*this ) /*0x49d12b*/
    return 0; /*0x49d12b*/
  v2 = this + 28; /*0x49d137*/
  if ( !this->__pad_070 ) /*0x49d134*/
    return 0; /*0x49d13c*/
  CCFileClass::Construct(v16, MEMORY[0x81F0F8]); /*0x49d14b*/
  v19[1] = 0; /*0x49d159*/
  v19[2] = 0; /*0x49d15d*/
  INISectionList::Constructor(v20); /*0x49d164*/
  Node::Init(v21); /*0x49d170*/
  v21[5] = 0; /*0x49d183*/
  v22 = 0; /*0x49d18a*/
  v19[0] = &CCINIClass_Vtable; /*0x49d192*/
  if ( !CCINIClass::Load(v19, (int)v16, 0, 0) ) /*0x49d19d*/
  {
    CCFileClass::Reset(v16); /*0x49d1aa*/
    HashTable::DestroyHashTableINIClass(v19); /*0x49d1b3*/
    v16[0] = &vt_CCFileClass; /*0x49d1bc*/
    v18 = 0; /*0x49d1c4*/
    Vector::Clear((int)v17); /*0x49d1c8*/
    v16[0] = &off_7E1668; /*0x49d1d1*/
    BufferIOFileClass::Dtor(v16); /*0x49d1d9*/
    return 0; /*0x49d1e9*/
  }
  CCFileClass::Reset(v16); /*0x49d1ef*/
  v4 = 0; /*0x49d1f6*/
  if ( *v1 )
  {
    do
    {
      if ( v4 >= 1021 ) /*0x49d202*/
        break; /*0x49d202*/
      if ( isalnum(*v1) )
      {
        MEMORY[0x89ED18][v4] = *v1; /*0x49d253*/
      }
      else
      {
        MEMORY[0x89ED18][v4] = 61; /*0x49d214*/
        v5 = v4 + 1; /*0x49d21b*/
        v6 = *v1 >> 4; /*0x49d21f*/
        if ( (unsigned int)v6 >= 0x10 )
          v7 = 0; /*0x49d236*/
        else
          v7 = v6 >= 10 ? v6 + 55 : v6 + 48;
        MEMORY[0x89ED18][v5] = v7; /*0x49d238*/
        v4 = v5 + 1; /*0x49d243*/
        MEMORY[0x89ED18][v4] = EncodeDigitHex(*v1 & 0xF); /*0x49d249*/
      }
      v8 = v1[1]; /*0x49d259*/
      ++v4; /*0x49d25c*/
      ++v1; /*0x49d25d*/
    }
    while ( v8 );
  }
  MEMORY[0x89ED18][v4] = 0; /*0x49d26c*/
  strcpy(v23, MEMORY[0x89ED18]); /*0x49d289*/
  v9 = v2; /*0x49d292*/
  v10 = 0; /*0x49d294*/
  for ( i = *v2; i; ++v9 )
  {
    if ( v10 >= 1021 ) /*0x49d2a2*/
      break; /*0x49d2a2*/
    if ( isalnum(i) )
    {
      MEMORY[0x89ED18][v10] = *v9; /*0x49d2f3*/
    }
    else
    {
      MEMORY[0x89ED18][v10] = 61; /*0x49d2b4*/
      v12 = v10 + 1; /*0x49d2bb*/
      v13 = *v9 >> 4; /*0x49d2bf*/
      if ( (unsigned int)v13 >= 0x10 )
        v14 = 0; /*0x49d2d6*/
      else
        v14 = v13 >= 10 ? v13 + 55 : v13 + 48;
      MEMORY[0x89ED18][v12] = v14; /*0x49d2d8*/
      v10 = v12 + 1; /*0x49d2e3*/
      MEMORY[0x89ED18][v10] = EncodeDigitHex(*v9 & 0xF); /*0x49d2e9*/
    }
    i = v9[1]; /*0x49d2f9*/
    ++v10; /*0x49d2fc*/
  }
  MEMORY[0x89ED18][v10] = 0; /*0x49d30c*/
  strcat(v23, MEMORY[0x89ED18]); /*0x49d331*/
  v15 = INIClass::BinarySearchSection((int)v19, (unsigned __int8 *)v23) != 0; /*0x49d354*/
  HashTable::DestroyHashTableINIClass(v19); /*0x49d357*/
  v16[0] = &vt_CCFileClass; /*0x49d360*/
  v18 = 0; /*0x49d368*/
  Vector::Clear((int)v17); /*0x49d36c*/
  v16[0] = &off_7E1668; /*0x49d375*/
  BufferIOFileClass::Dtor(v16); /*0x49d37d*/
  return v15; /*0x49d1de*/
}


// ==== 0x0049D390  ObjectClass::LoadCoopCampaignSave  this=ObjectClass  sig=csp ====
char __thiscall LoadCoopCampaignSave(char *this, IUnknown *aP1)
{
  char *v2; // edi
  char *v3; // ebp
  int v5; // esi
  int v6; // esi
  int v7; // eax
  char v8; // al
  char v9; // al
  char *v10; // edi
  int v11; // esi
  char i; // al
  int v13; // esi
  int v14; // eax
  char v15; // al
  int Int_Overwrite; // eax
  MultiplayerGameMode aP1a; // [esp+Ch] [ebp-148h] BYREF
  _BYTE v18[12]; // [esp+64h] [ebp-F0h] BYREF
  int v19; // [esp+70h] [ebp-E4h]
  unsigned __int8 **v20[3]; // [esp+78h] [ebp-DCh] BYREF
  _DWORD v21[7]; // [esp+84h] [ebp-D0h] BYREF
  _DWORD v22[6]; // [esp+A0h] [ebp-B4h] BYREF
  char v23; // [esp+B8h] [ebp-9Ch]
  char Buffer[32]; // [esp+D0h] [ebp-84h] BYREF
  INIClass v25; // [esp+F0h] [ebp-64h] BYREF

  v2 = this; /*0x49d399*/
  if ( !*this ) /*0x49d39d*/
    return 0; /*0x49d39d*/
  v3 = this + 28; /*0x49d3a8*/
  if ( !this->referenceCount ) /*0x49d3a5*/
    return 0; /*0x49d3ad*/
  CCFileClass::Construct(&aP1a, MEMORY[0x81F0F8]); /*0x49d3bc*/
  v20[1] = 0; /*0x49d3c8*/
  v20[2] = 0; /*0x49d3cc*/
  INISectionList::Constructor(v21); /*0x49d3d3*/
  Node::Init(v22); /*0x49d3df*/
  v22[5] = 0; /*0x49d3f2*/
  v23 = 0; /*0x49d3f9*/
  v20[0] = (unsigned __int8 **)&CCINIClass_Vtable; /*0x49d400*/
  if ( !CCINIClass::Load(v20, &aP1a, 0, 0) ) /*0x49d40b*/
  {
    CCFileClass::Reset(&aP1a); /*0x49d418*/
LABEL_5:
    HashTable::DestroyHashTableINIClass((void **)v20); /*0x49d41d*/
    *(_DWORD *)aP1a.__pad_0 = &vt_CCFileClass; /*0x49d42a*/
    v19 = 0; /*0x49d432*/
    Vector::Clear((int)v18); /*0x49d436*/
    *(_DWORD *)aP1a.__pad_0 = &off_7E1668; /*0x49d43f*/
    BufferIOFileClass::Dtor(&aP1a); /*0x49d447*/
    return 0; /*0x49d457*/
  }
  CCFileClass::Reset(&aP1a); /*0x49d45f*/
  v5 = 0; /*0x49d466*/
  if ( *v2 )
  {
    do
    {
      if ( v5 >= 1021 ) /*0x49d472*/
        break; /*0x49d472*/
      if ( isalnum(*v2) )
      {
        MEMORY[0x89ED18][v5] = *v2; /*0x49d4c3*/
      }
      else
      {
        MEMORY[0x89ED18][v5] = 61; /*0x49d484*/
        v6 = v5 + 1; /*0x49d48b*/
        v7 = *v2 >> 4; /*0x49d48f*/
        if ( (unsigned int)v7 >= 0x10 )
          v8 = 0; /*0x49d4a6*/
        else
          v8 = v7 >= 10 ? v7 + 55 : v7 + 48;
        MEMORY[0x89ED18][v6] = v8; /*0x49d4a8*/
        v5 = v6 + 1; /*0x49d4b3*/
        MEMORY[0x89ED18][v5] = EncodeDigitHex(*v2 & 0xF); /*0x49d4b9*/
      }
      v9 = v2[1]; /*0x49d4c9*/
      ++v5; /*0x49d4cc*/
      ++v2; /*0x49d4cd*/
    }
    while ( v9 );
  }
  MEMORY[0x89ED18][v5] = 0; /*0x49d4dc*/
  strcpy(v25.__pad_0, MEMORY[0x89ED18]); /*0x49d4f8*/
  v10 = v3; /*0x49d501*/
  v11 = 0; /*0x49d503*/
  for ( i = *v3; i; ++v10 )
  {
    if ( v11 >= 1021 ) /*0x49d511*/
      break; /*0x49d511*/
    if ( isalnum(i) )
    {
      MEMORY[0x89ED18][v11] = *v10; /*0x49d562*/
    }
    else
    {
      MEMORY[0x89ED18][v11] = 61; /*0x49d523*/
      v13 = v11 + 1; /*0x49d52a*/
      v14 = *v10 >> 4; /*0x49d52e*/
      if ( (unsigned int)v14 >= 0x10 )
        v15 = 0; /*0x49d545*/
      else
        v15 = v14 >= 10 ? v14 + 55 : v14 + 48;
      MEMORY[0x89ED18][v13] = v15; /*0x49d547*/
      v11 = v13 + 1; /*0x49d552*/
      MEMORY[0x89ED18][v11] = EncodeDigitHex(*v10 & 0xF); /*0x49d558*/
    }
    i = v10[1]; /*0x49d568*/
    ++v11; /*0x49d56b*/
  }
  MEMORY[0x89ED18][v11] = 0; /*0x49d57b*/
  strcat(v25.__pad_0, MEMORY[0x89ED18]); /*0x49d59f*/
  Int_Overwrite = INIClass::ReadInt_Overwrite((int)v20, (unsigned __int8 *)&v25, &unk_81F19C, 0); /*0x49d5bd*/
  sprintf(Buffer, (const char *const)&MEMORY[0x81F108].headNode[2], Int_Overwrite + 1); /*0x49d5d1*/
  INIClass::GetString(v20, &v25, (unsigned __int8 *)Buffer, &MEMORY[0x81F108], (INIClass *)aP1, 260); /*0x49d602*/
  if ( strcmp((const char *)aP1, MEMORY[0x81F108].__pad_0) ) /*0x49d614*/
    goto LABEL_5; /*0x49d63a*/
  HashTable::DestroyHashTableINIClass((void **)v20); /*0x49d644*/
  *(_DWORD *)aP1a.__pad_0 = &vt_CCFileClass; /*0x49d64d*/
  v19 = 0; /*0x49d655*/
  Vector::Clear((int)v18); /*0x49d659*/
  *(_DWORD *)aP1a.__pad_0 = &off_7E1668; /*0x49d662*/
  BufferIOFileClass::Dtor(&aP1a); /*0x49d66a*/
  return 1; /*0x49d44c*/
}


// ==== 0x0049D680  ObjectClass::SerializeCampaignOptions  this=ObjectClass  sig=csp ====
char __thiscall SerializeCampaignOptions(char *this)
{
  int v3; // esi
  int v4; // ebx
  int v5; // esi
  int v6; // edi
  int v7; // esi
  char *v8; // edi
  int v9; // esi
  int v10; // eax
  char v11; // al
  unsigned __int8 v12; // al
  char v13; // al
  char v14; // al
  char *v15; // ebp
  char v16; // al
  int i; // esi
  int v18; // esi
  int v19; // eax
  char v20; // al
  unsigned __int8 v21; // al
  char v22; // al
  int v23; // [esp+Ch] [ebp-1ACh]
  int v24; // [esp+14h] [ebp-1A4h]
  char v25[16]; // [esp+18h] [ebp-1A0h] BYREF
  char Buffer[400]; // [esp+28h] [ebp-190h] BYREF

  if ( !this->health ) /*0x49d68b*/
    return 0; /*0x49d68b*/
  v3 = this->q011; /*0x49d6a3*/
  if ( !MEMORY[0x89F578] ) /*0x49d6a8*/
    CampaignClass::LoadFromINI((int)&MEMORY[0x89F518]); /*0x49d6af*/
  v4 = 0; /*0x49d6b4*/
  if ( v3 < 0 || v3 >= MEMORY[0x89F574] ) /*0x49d6c0*/
    return 0; /*0x49d694*/
  v24 = MEMORY[0x89F570] + 76 * v3; /*0x49d6d8*/
  sprintf( /*0x49d70c*/
    Buffer,
    stru_81F218,
    this->q011,
    this->attachedBomb,
    this->bombVisible,
    this->q048,
    this->abstractFlags,
    this->q058,
    this->nextArrayIndex,
    this->q04C,
    this->q054,
    this->q05C,
    this->customSound);
  if ( *((int *)this + 16) > 0 ) /*0x49d719*/
  {
    v23 = 0; /*0x49d71f*/
    do /*0x49d7ae*/
    {
      v5 = v23; /*0x49d723*/
      v6 = 0; /*0x49d727*/
      while ( _strcmpi((const void *)(v5 + *(_DWORD *)(v24 + 12)), *(const void **)(this->ambientSoundController + 4 * v4)) ) /*0x49d748*/
      {
        ++v6; /*0x49d74a*/
        v5 += 260; /*0x49d74b*/
        if ( v6 >= 3 ) /*0x49d754*/
        {
          v6 = 0; /*0x49d756*/
          break; /*0x49d756*/
        }
      }
      sprintf(v25, g_Str_Trace_, v6); /*0x49d75a*/
      strcat(Buffer, v25); /*0x49d791*/
      ++v4; /*0x49d79b*/
      v23 += 780; /*0x49d7aa*/
    }
    while ( v4 < this->uniqueId ); /*0x49d7ae*/
  }
  strcat(Buffer, a1_0); /*0x49d7d9*/
  v7 = 0; /*0x49d7e7*/
  v8 = this; /*0x49d7e9*/
  if ( *this )
  {
    do
    {
      if ( v7 >= 1021 ) /*0x49d7f9*/
        break; /*0x49d7f9*/
      if ( isalnum(*v8) )
      {
        MEMORY[0x89ED18][v7] = *v8; /*0x49d866*/
      }
      else
      {
        MEMORY[0x89ED18][v7] = 61; /*0x49d80b*/
        v9 = v7 + 1; /*0x49d811*/
        v10 = *v8 >> 4; /*0x49d815*/
        if ( (unsigned int)v10 >= 0x10 )
          v11 = 0; /*0x49d82c*/
        else
          v11 = v10 >= 10 ? v10 + 55 : v10 + 48;
        MEMORY[0x89ED18][v9] = v11; /*0x49d82e*/
        v7 = v9 + 1; /*0x49d836*/
        v12 = *v8 & 0xF; /*0x49d837*/
        if ( v12 > 0xFu )
        {
          MEMORY[0x89ED18][v7] = 0; /*0x49d85c*/
        }
        else
        {
          v13 = (*v8 & 0xFu) >= 0xA ? v12 + 55 : v12 + 48;
          MEMORY[0x89ED18][v7] = v13; /*0x49d848*/
        }
      }
      v14 = v8[1]; /*0x49d86c*/
      ++v7; /*0x49d86f*/
      ++v8; /*0x49d870*/
    }
    while ( v14 );
  }
  MEMORY[0x89ED18][v7] = 0; /*0x49d883*/
  strcat(Buffer, MEMORY[0x89ED18]); /*0x49d8a5*/
  v15 = this + 28; /*0x49d8b0*/
  strcat(Buffer, MEMORY[0x817F70]); /*0x49d8d4*/
  v16 = *v15; /*0x49d8d6*/
  for ( i = 0; v16; ++v15 )
  {
    if ( i >= 1021 ) /*0x49d8f0*/
      break; /*0x49d8f0*/
    if ( isalnum(v16) )
    {
      MEMORY[0x89ED18][i] = *v15; /*0x49d964*/
    }
    else
    {
      MEMORY[0x89ED18][i] = 61; /*0x49d906*/
      v18 = i + 1; /*0x49d90c*/
      v19 = *v15 >> 4; /*0x49d911*/
      if ( (unsigned int)v19 >= 0x10 )
        v20 = 0; /*0x49d928*/
      else
        v20 = v19 >= 10 ? v19 + 55 : v19 + 48;
      MEMORY[0x89ED18][v18] = v20; /*0x49d92a*/
      i = v18 + 1; /*0x49d933*/
      v21 = *v15 & 0xF; /*0x49d934*/
      if ( v21 > 0xFu )
      {
        MEMORY[0x89ED18][i] = 0; /*0x49d959*/
      }
      else
      {
        v22 = (*v15 & 0xFu) >= 0xA ? v21 + 55 : v21 + 48;
        MEMORY[0x89ED18][i] = v22; /*0x49d945*/
      }
    }
    v16 = v15[1]; /*0x49d96a*/
    ++i; /*0x49d96d*/
  }
  MEMORY[0x89ED18][i] = 0; /*0x49d981*/
  strcat(Buffer, MEMORY[0x89ED18]); /*0x49d9a3*/
  Debug::Log(); /*0x49d9b6*/
  Network::SendOptionsGame(Buffer); /*0x49d9c2*/
  Debug::Log(); /*0x49d9cc*/
  return 1; /*0x49d692*/
}


// ==== 0x0049D9F0  SideClass::FindByName  this=SideClass  sig=csp ====
int __thiscall SideClass::FindByName(void *this)
{
  int v3; // ebx
  int v4; // esi

  if ( !_strcmpi(this, &g_INI_Key_Digest.__pad_20[8]) ) /*0x49d9fb*/
    return -2; /*0x49da09*/
  if ( !this ) /*0x49da12*/
    return -1; /*0x49da12*/
  v3 = 0; /*0x49da19*/
  if ( g_SuperWeaponTypeArray <= 0 ) /*0x49da1d*/
    return -1; /*0x49da53*/
  while ( 1 ) /*0x49da25*/
  {
    v4 = *((_DWORD *)g_SuperWeaponTypeCount + v3); /*0x49da25*/
    if ( !_strcmpi((const void *)(v4 + 100), this) || !_strcmpi((const void *)(v4 + 36), this) ) /*0x49da3d*/
      break; /*0x49da3d*/
    if ( ++v3 >= g_SuperWeaponTypeArray ) /*0x49da51*/
      return -1; /*0x49da51*/
  }
  return v3; /*0x49da07*/
}


// ==== 0x0049DA60  ObjectClass::method_49DA60  this=ObjectClass  sig=csp ====
_DWORD *__thiscall sub_49DA60(_DWORD *this)
{
  _DWORD *result; // eax
  _DWORD *v2; // esi
  _DWORD *v3; // ecx
  int v4; // ebx
  int v5; // edi
  int v6; // edi
  int v7; // edi

  result = this; /*0x49da60*/
  v2 = this + 4; /*0x49da66*/
  v3 = this + 7; /*0x49da69*/
  result[1] = 0; /*0x49da6c*/
  result[2] = 0; /*0x49da6f*/
  v2[1] = 0; /*0x49da72*/
  v2[2] = 0; /*0x49da75*/
  *v2 = &vt_GenericNode; /*0x49da78*/
  v3[1] = 0; /*0x49da7e*/
  v3[2] = 0; /*0x49da81*/
  *v3 = &vt_GenericNode; /*0x49da84*/
  result[3] = &vt_GenericList; /*0x49da8d*/
  if ( v3 ) /*0x49da94*/
  {
    v4 = v3[1]; /*0x49da96*/
    if ( v4 ) /*0x49da9b*/
    {
      v5 = v3[2]; /*0x49da9d*/
      if ( v5 ) /*0x49daa2*/
      {
        *(_DWORD *)(v5 + 4) = v4; /*0x49daa4*/
        *(_DWORD *)(v3[1] + 8) = v3[2]; /*0x49daad*/
        v3[2] = 0; /*0x49dab0*/
        v3[1] = 0; /*0x49dab3*/
      }
    }
  }
  v6 = v2[1]; /*0x49dab6*/
  v3[2] = v2; /*0x49dab9*/
  v3[1] = v6; /*0x49dabc*/
  v7 = v2[1]; /*0x49dabf*/
  if ( v7 ) /*0x49dac4*/
    *(_DWORD *)(v7 + 8) = v3; /*0x49dac6*/
  v2[1] = v3; /*0x49dac9*/
  result[3] = &vt_List_INIClass_INISection; /*0x49dacc*/
  result[10] = 0; /*0x49dad4*/
  result[11] = 0; /*0x49dad7*/
  result[12] = 0; /*0x49dada*/
  *((_BYTE *)result + 52) = 0; /*0x49dadd*/
  result[14] = 0; /*0x49dae0*/
  result[15] = 0; /*0x49dae4*/
  *((_BYTE *)result + 64) = 0; /*0x49dae7*/
  *result = &CCINIClass_Vtable; /*0x49daea*/
  *((_BYTE *)result + 96) = 0; /*0x49daf0*/
  return result; /*0x49dad3*/
}


// ==== 0x0049DB00  CampaignClass::LoadFromINI  this=CampaignClass  sig=csp ====
int __thiscall CampaignClass::LoadFromINI(int this)
{
  int v2; // ebx
  MultiplayerGameMode *KeyCount; // esi
  MultiplayerGameMode **v5; // eax
  VectorClass *v6; // edi
  char *v7; // eax
  VectorClass *v8; // esi
  char *v9; // ebx
  VectorClass *v10; // eax
  CCINIClass *v11; // esi
  unsigned __int8 *StringByIndex; // eax
  INIClass *String; // esi
  wchar_t *v14; // eax
  INIClass *v15; // eax
  char *v16; // eax
  char *v17; // eax
  char *v18; // eax
  TechnoTypeClass *v19; // esi
  int v20; // ecx
  int v21; // eax
  _DWORD *v22; // edi
  int v23; // ecx
  int v24; // eax
  int v25; // edx
  INIClass *v26; // eax
  INIClass *v27; // esi
  CCINIClass *v28; // edx
  int v29; // esi
  int v30; // eax
  int v31; // ecx
  int v32; // eax
  char *i; // esi
  CCINIClass *v34; // edx
  int v35; // esi
  int v36; // eax
  int v37; // ecx
  int v38; // eax
  int v39; // esi
  int v40; // edx
  int v41; // eax
  _DWORD *v42; // edi
  int v43; // ecx
  int v44; // eax
  int v45; // edx
  INIClass *v46; // eax
  INIClass *v47; // esi
  CCINIClass *v48; // edx
  int v49; // esi
  int v50; // eax
  int v51; // ecx
  int v52; // eax
  char *j; // esi
  CCINIClass *v54; // edx
  int v55; // esi
  int v56; // eax
  int v57; // ecx
  int v58; // eax
  bool v59; // cc
  int Int_Overwrite; // [esp+30h] [ebp-134h]
  int v61; // [esp+30h] [ebp-134h]
  CCINIClass *v62; // [esp+34h] [ebp-130h]
  CCINIClass *v63; // [esp+34h] [ebp-130h]
  CCINIClass *v64; // [esp+34h] [ebp-130h]
  CCINIClass *v65; // [esp+34h] [ebp-130h]
  CCINIClass *v66; // [esp+38h] [ebp-12Ch]
  int v67; // [esp+3Ch] [ebp-128h]
  CCINIClass *v68; // [esp+40h] [ebp-124h]
  int v69; // [esp+44h] [ebp-120h]
  char Buffer[48]; // [esp+48h] [ebp-11Ch] BYREF
  MultiplayerGameMode aP1; // [esp+78h] [ebp-ECh] BYREF
  _BYTE v72[12]; // [esp+D0h] [ebp-94h] BYREF
  int v73; // [esp+DCh] [ebp-88h]
  INIClass Destination[2]; // [esp+E4h] [ebp-80h] BYREF

  CCFileClass::Construct(&aP1, aCoopcampmdIni); /*0x49db13*/
  v2 = 0; /*0x49db18*/
  if ( !CCINIClass::Load((_BYTE *)this, &aP1, 0, 0) ) /*0x49db23*/
  {
    *(_DWORD *)(this + 92) = 0; /*0x49db33*/
    *(_DWORD *)(this + 88) = 0; /*0x49db36*/
    *(_BYTE *)(this + 96) = 0; /*0x49db39*/
    *(_DWORD *)aP1.__pad_0 = &vt_CCFileClass; /*0x49db3c*/
    v73 = 0; /*0x49db44*/
    Vector::Clear((int)v72); /*0x49db4b*/
    *(_DWORD *)aP1.__pad_0 = &off_7E1668; /*0x49db54*/
    return BufferIOFileClass::Dtor(&aP1); /*0x49db69*/
  }
  KeyCount = (MultiplayerGameMode *)INIClass::GetKeyCount((char *)this, &unk_81F3B4); /*0x49db78*/
  *(_DWORD *)(this + 92) = KeyCount; /*0x49db7c*/
  if ( (int)KeyCount > 0 ) /*0x49db7f*/
  {
    v5 = (MultiplayerGameMode **)__2_YAPAXI_Z(76 * (_DWORD)KeyCount + 4); /*0x49db9a*/
    if ( v5 ) /*0x49dba4*/
    {
      *v5 = KeyCount; /*0x49dba6*/
      v6 = (VectorClass *)(v5 + 1); /*0x49dba8*/
      v7 = (char *)&KeyCount[-1].MultiplayerGameMode_field_0x18 + 3; /*0x49dbab*/
      if ( (int)&KeyCount[-1].MultiplayerGameMode_field_0x18 + 3 >= 0 ) /*0x49dbb0*/
      {
        v8 = v6 + 1; /*0x49dbb2*/
        v9 = v7 + 1; /*0x49dbb5*/
        do /*0x49dbf7*/
        {
          CampaignClass::Constructor_0(v8, 0, 0); /*0x49dbbe*/
          v8->vtable0 = &DynamicVectorClass<DynamicVectorClass<char *> *>::`vftable'; /*0x49dbca*/
          v8[1].Items = (void *)10; /*0x49dbd0*/
          v8[1].vtable0 = 0; /*0x49dbd7*/
          CampaignClass::Constructor(&v8[1].Capacity, 0, 0); /*0x49dbde*/
          unknown_libname_73(&v8[3].Items); /*0x49dbe6*/
          unknown_libname_73(&v8[3].Capacity); /*0x49dbee*/
          v8 = (VectorClass *)((char *)v8 + 76); /*0x49dbf3*/
          --v9; /*0x49dbf6*/
        }
        while ( v9 ); /*0x49dbf7*/
        v2 = 0; /*0x49dbf9*/
      }
      v10 = v6; /*0x49dbfb*/
    }
    else
    {
      v10 = 0; /*0x49dbff*/
    }
    *(_DWORD *)(this + 88) = v10; /*0x49dc03*/
    if ( !v10 ) /*0x49dc06*/
      goto LABEL_80; /*0x49dc06*/
    v11 = 0; /*0x49dc0f*/
    v68 = 0; /*0x49dc13*/
    if ( *(int *)(this + 92) <= 0 ) /*0x49dc17*/
      goto LABEL_80; /*0x49dc17*/
    while ( 1 ) /*0x49dc25*/
    {
      StringByIndex = (unsigned __int8 *)INIClass::GetStringByIndex((char *)this, (CCINIClass *)&unk_81F3B4, v11); /*0x49dc25*/
      if ( StringByIndex ) /*0x49dc2c*/
      {
        INIClass::GetString((unsigned __int8 ***)this, &unk_81F3B4, StringByIndex, 0, Destination, 128); /*0x49dc49*/
        Int_Overwrite = INIClass::ReadInt_Overwrite(this, (unsigned __int8 *)Destination, &unk_81F39C, 0); /*0x49dc69*/
        if ( INIClass::GetString( /*0x49dc83*/
               (unsigned __int8 ***)this,
               Destination,
               &unk_81F38C,
               0,
               (INIClass *)&stru_89E138.__pad_1258[584],
               128) )
        {
          String = (INIClass *)GetStringCSF( /*0x49dca7*/
                                 (wchar_t *)&stru_89E138.__pad_1258[584],
                                 0,
                                 (CampaignScore *)"D:\\ra2mdpost\\coopcamp.cpp",
                                 1048);
          *(_DWORD *)(*(_DWORD *)(this + 88) + v2 + 4) = __2_YAPAXI_Z(0x102u); /*0x49dcb4*/
          v14 = *(wchar_t **)(*(_DWORD *)(this + 88) + v2 + 4); /*0x49dcbb*/
          if ( v14 ) /*0x49dcc1*/
            wcscpy(v14, (const wchar_t *)String); /*0x49dcc5*/
        }
        INIClass::GetString( /*0x49dce8*/
          (unsigned __int8 ***)this,
          Destination,
          &unk_81F35C,
          0,
          (INIClass *)&stru_89E138.__pad_1258[584],
          128);
        String::Assign_Alt((void **)(*(_DWORD *)(this + 88) + v2 + 68), (CCINIClass *)&stru_89E138.__pad_1258[584]); /*0x49dcf9*/
        INIClass::GetString( /*0x49dd19*/
          (unsigned __int8 ***)this,
          Destination,
          (unsigned __int8 *)&stru_81F30C.needsSave_flag,
          0,
          (INIClass *)&stru_89E138.__pad_1258[584],
          128);
        String::Assign_Alt((void **)(*(_DWORD *)(this + 88) + v2 + 72), (CCINIClass *)&stru_89E138.__pad_1258[584]); /*0x49dd2a*/
        INIClass::GetString( /*0x49dd4d*/
          (unsigned __int8 ***)this,
          Destination,
          (unsigned __int8 *)&stru_81F30C.__pad_20[8],
          &g_INI_Key_Easy,
          (INIClass *)&stru_89E138.__pad_1258[584],
          128);
        *(_DWORD *)(*(_DWORD *)(this + 88) + v2 + 64) = __2_YAPAXI_Z(strlen(&stru_89E138.__pad_1258[584]) + 1); /*0x49dd71*/
        strcpy(*(char **)(*(_DWORD *)(this + 88) + v2 + 64), &stru_89E138.__pad_1258[584]); /*0x49dd8f*/
        *(_DWORD *)(*(_DWORD *)(this + 88) + v2) = v68; /*0x49dd9b*/
        *(_BYTE *)(*(_DWORD *)(this + 88) + v2 + 8) = Int_Overwrite; /*0x49dda5*/
        *(_DWORD *)(*(_DWORD *)(this + 88) + v2 + 12) = __2_YAPAXI_Z(780 * Int_Overwrite); /*0x49ddc7*/
        v15 = (INIClass *)1; /*0x49ddcb*/
        v67 = 1; /*0x49ddd2*/
        v69 = Int_Overwrite + 1; /*0x49ddd6*/
        if ( Int_Overwrite + 1 > 1 ) /*0x49ddda*/
        {
          v66 = (CCINIClass *)4; /*0x49dde0*/
          v61 = 780; /*0x49dde8*/
          while ( 2 ) /*0x49ddf0*/
          {
            ((void (*)(char *const, const char *const, ...))sprintf)( /*0x49ddf0*/
              Buffer,
              (const char *const)&stru_81F0A8.health,
              v15);
            if ( INIClass::GetString( /*0x49de1e*/
                   (unsigned __int8 ***)this,
                   Destination,
                   (unsigned __int8 *)Buffer,
                   0,
                   (INIClass *)&stru_89E138.__pad_1258[584],
                   128) )
            {
              v16 = strtok(&stru_89E138.__pad_1258[584], (ObjectClass *)&stru_817F40.nextObject); /*0x49de35*/
              if ( v16 ) /*0x49de3f*/
                strcpy((char *)(*(_DWORD *)(*(_DWORD *)(this + 88) + v2 + 12) + v61 - 780), v16); /*0x49de69*/
              v17 = strtok(0, (ObjectClass *)&stru_817F40.nextObject); /*0x49de79*/
              if ( v17 ) /*0x49de83*/
                strcpy((char *)(*(_DWORD *)(*(_DWORD *)(this + 88) + v2 + 12) + v61 - 520), v17); /*0x49dead*/
              v18 = strtok(0, (ObjectClass *)&stru_817F40.nextObject); /*0x49debd*/
              if ( v18 ) /*0x49dec7*/
                strcpy((char *)(*(_DWORD *)(*(_DWORD *)(this + 88) + v2 + 12) + v61 - 260), v18); /*0x49def1*/
            }
            v19 = (TechnoTypeClass *)__2_YAPAXI_Z(0x18u); /*0x49df01*/
            if ( !v19 ) /*0x49df0a*/
              goto LABEL_77; /*0x49df0a*/
            v19->vtable1 = 0; /*0x49df10*/
            v19->vtable2 = 0; /*0x49df13*/
            LOBYTE(v19->vtable3) = 1; /*0x49df16*/
            BYTE1(v19->vtable3) = 0; /*0x49df1a*/
            v19->vtable0 = (int)&vt_DynamicVectorClass_char; /*0x49df1d*/
            v19->abstractFlags = 10; /*0x49df23*/
            v19->uniqueId = 0; /*0x49df2a*/
            v20 = *(_DWORD *)(this + 88); /*0x49df2d*/
            v21 = *(_DWORD *)(v20 + v2 + 24); /*0x49df30*/
            v22 = (_DWORD *)(v20 + v2 + 16); /*0x49df34*/
            if ( *(_DWORD *)(v20 + v2 + 32) < v21 /*0x49df5b*/
              || (*(_BYTE *)(v20 + v2 + 29) || !v21)
              && (v23 = *(_DWORD *)(v20 + v2 + 36), v23 > 0)
              && (*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(*v22 + 8))(v22, v21 + v23, 0) )
            {
              v24 = v22[4]; /*0x49df62*/
              v25 = v22[1]; /*0x49df65*/
              v22[4] = v24 + 1; /*0x49df6b*/
              *(_DWORD *)(v25 + 4 * v24) = v19; /*0x49df6e*/
            }
            ((void (*)(char *const, const char *const, ...))sprintf)( /*0x49df85*/
              Buffer,
              (const char *const)stru_81F30C.sectionHead,
              (const char *)&stru_81F30C.sectionHead[2],
              v67);
            if ( INIClass::GetString( /*0x49dfa8*/
                   (unsigned __int8 ***)this,
                   Destination,
                   (unsigned __int8 *)Buffer,
                   0,
                   (INIClass *)&stru_89E138.__pad_1258[584],
                   128) )
            {
              v26 = (INIClass *)strtok(&stru_89E138.__pad_1258[584], (ObjectClass *)&stru_817F40.nextObject); /*0x49dfbf*/
              v27 = v26; /*0x49dfc4*/
              if ( v26 ) /*0x49dfcb*/
              {
                v28 = (CCINIClass *)__2_YAPAXI_Z(strlen(v26->__pad_0) + 1); /*0x49dfe2*/
                v62 = v28; /*0x49dfee*/
                strcpy(v28->__pad_0, v27->__pad_0); /*0x49e001*/
                v29 = *(_DWORD *)&v66->__pad_0[*(_DWORD *)(*(_DWORD *)(this + 88) + v2 + 20) - 4]; /*0x49e015*/
                v30 = *(_DWORD *)(v29 + 8); /*0x49e019*/
                if ( *(_DWORD *)(v29 + 16) < v30 ) /*0x49e021*/
                  goto LABEL_42; /*0x49e021*/
                if ( *(_BYTE *)(v29 + 13) || !v30 ) /*0x49e02c*/
                {
                  v31 = *(_DWORD *)(v29 + 20); /*0x49e02e*/
                  if ( v31 > 0 ) /*0x49e033*/
                  {
                    if ( (*(unsigned __int8 (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v29 + 8))(v29, v30 + v31, 0) ) /*0x49e03e*/
                    {
                      v28 = v62; /*0x49e045*/
LABEL_42:
                      v32 = *(_DWORD *)(v29 + 16); /*0x49e049*/
                      *(_DWORD *)(v29 + 16) = v32 + 1; /*0x49e04f*/
                      *(_DWORD *)(*(_DWORD *)(v29 + 4) + 4 * v32) = v28; /*0x49e055*/
                    }
                  }
                }
              }
              for ( i = strtok(0, (ObjectClass *)&stru_817F40.nextObject); /*0x49e06b*/
                    i;
                    i = strtok(0, (ObjectClass *)&stru_817F40.nextObject) )
              {
                v34 = (CCINIClass *)__2_YAPAXI_Z(strlen(i) + 1); /*0x49e082*/
                v63 = v34; /*0x49e08e*/
                strcpy(v34->__pad_0, i); /*0x49e0a1*/
                v35 = *(_DWORD *)&v66->__pad_0[*(_DWORD *)(*(_DWORD *)(this + 88) + v2 + 20) - 4]; /*0x49e0b5*/
                v36 = *(_DWORD *)(v35 + 8); /*0x49e0b9*/
                if ( *(_DWORD *)(v35 + 16) >= v36 ) /*0x49e0c1*/
                {
                  if ( !*(_BYTE *)(v35 + 13) && v36 ) /*0x49e0cc*/
                    continue; /*0x49e0cc*/
                  v37 = *(_DWORD *)(v35 + 20); /*0x49e0ce*/
                  if ( v37 <= 0 /*0x49e0de*/
                    || !(*(unsigned __int8 (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v35 + 8))(v35, v36 + v37, 0) )
                  {
                    continue; /*0x49e0e3*/
                  }
                  v34 = v63; /*0x49e0e5*/
                }
                v38 = *(_DWORD *)(v35 + 16); /*0x49e0e9*/
                *(_DWORD *)(v35 + 16) = v38 + 1; /*0x49e0ef*/
                *(_DWORD *)(*(_DWORD *)(v35 + 4) + 4 * v38) = v34; /*0x49e0f5*/
              }
            }
            v39 = __2_YAPAXI_Z(0x18u); /*0x49e111*/
            if ( v39 ) /*0x49e121*/
            {
              *(_DWORD *)(v39 + 4) = 0; /*0x49e127*/
              *(_DWORD *)(v39 + 8) = 0; /*0x49e12a*/
              *(_BYTE *)(v39 + 12) = 1; /*0x49e12d*/
              *(_BYTE *)(v39 + 13) = 0; /*0x49e131*/
              *(_DWORD *)v39 = &vt_DynamicVectorClass_char; /*0x49e134*/
              *(_DWORD *)(v39 + 20) = 10; /*0x49e13a*/
              *(_DWORD *)(v39 + 16) = 0; /*0x49e141*/
              v40 = *(_DWORD *)(this + 88); /*0x49e144*/
              v41 = *(_DWORD *)(v40 + v2 + 48); /*0x49e147*/
              v42 = (_DWORD *)(v40 + v2 + 40); /*0x49e14f*/
              if ( *(_DWORD *)(v40 + v2 + 56) < v41 /*0x49e172*/
                || (*(_BYTE *)(v40 + v2 + 53) || !v41)
                && (v43 = *(_DWORD *)(v40 + v2 + 60), v43 > 0)
                && (*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(*v42 + 8))(v42, v43 + v41, 0) )
              {
                v44 = v42[4]; /*0x49e179*/
                v45 = v42[1]; /*0x49e17c*/
                v42[4] = v44 + 1; /*0x49e182*/
                *(_DWORD *)(v45 + 4 * v44) = v39; /*0x49e185*/
              }
              ((void (*)(char *const, const char *const, ...))sprintf)( /*0x49e19c*/
                Buffer,
                (const char *const)stru_81F30C.sectionHead,
                stru_81F30C.__pad_0,
                v67);
              if ( INIClass::GetString( /*0x49e1bf*/
                     (unsigned __int8 ***)this,
                     Destination,
                     (unsigned __int8 *)Buffer,
                     0,
                     (INIClass *)&stru_89E138.__pad_1258[584],
                     128) )
              {
                v46 = (INIClass *)strtok(&stru_89E138.__pad_1258[584], (ObjectClass *)&stru_817F40.nextObject); /*0x49e1d6*/
                v47 = v46; /*0x49e1db*/
                if ( v46 ) /*0x49e1e2*/
                {
                  v48 = (CCINIClass *)__2_YAPAXI_Z(strlen(v46->__pad_0) + 1); /*0x49e1f9*/
                  v64 = v48; /*0x49e205*/
                  strcpy(v48->__pad_0, v47->__pad_0); /*0x49e218*/
                  v49 = *(_DWORD *)&v66->__pad_0[*(_DWORD *)(*(_DWORD *)(this + 88) + v2 + 44) - 4]; /*0x49e22c*/
                  v50 = *(_DWORD *)(v49 + 8); /*0x49e230*/
                  if ( *(_DWORD *)(v49 + 16) < v50 ) /*0x49e238*/
                    goto LABEL_67; /*0x49e238*/
                  if ( *(_BYTE *)(v49 + 13) || !v50 ) /*0x49e243*/
                  {
                    v51 = *(_DWORD *)(v49 + 20); /*0x49e245*/
                    if ( v51 > 0 ) /*0x49e24a*/
                    {
                      if ( (*(unsigned __int8 (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v49 + 8))(v49, v51 + v50, 0) ) /*0x49e255*/
                      {
                        v48 = v64; /*0x49e25c*/
LABEL_67:
                        v52 = *(_DWORD *)(v49 + 16); /*0x49e260*/
                        *(_DWORD *)(v49 + 16) = v52 + 1; /*0x49e266*/
                        *(_DWORD *)(*(_DWORD *)(v49 + 4) + 4 * v52) = v48; /*0x49e26c*/
                      }
                    }
                  }
                }
                for ( j = strtok(0, (ObjectClass *)&stru_817F40.nextObject); /*0x49e282*/
                      j;
                      j = strtok(0, (ObjectClass *)&stru_817F40.nextObject) )
                {
                  v54 = (CCINIClass *)__2_YAPAXI_Z(strlen(j) + 1); /*0x49e299*/
                  v65 = v54; /*0x49e2a5*/
                  strcpy(v54->__pad_0, j); /*0x49e2b8*/
                  v55 = *(_DWORD *)&v66->__pad_0[*(_DWORD *)(*(_DWORD *)(this + 88) + v2 + 44) - 4]; /*0x49e2cc*/
                  v56 = *(_DWORD *)(v55 + 8); /*0x49e2d0*/
                  if ( *(_DWORD *)(v55 + 16) >= v56 ) /*0x49e2d8*/
                  {
                    if ( !*(_BYTE *)(v55 + 13) && v56 ) /*0x49e2e3*/
                      continue; /*0x49e2e3*/
                    v57 = *(_DWORD *)(v55 + 20); /*0x49e2e5*/
                    if ( v57 <= 0 /*0x49e2f5*/
                      || !(*(unsigned __int8 (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v55 + 8))(v55, v57 + v56, 0) )
                    {
                      continue; /*0x49e2fa*/
                    }
                    v54 = v65; /*0x49e2fc*/
                  }
                  v58 = *(_DWORD *)(v55 + 16); /*0x49e300*/
                  *(_DWORD *)(v55 + 16) = v58 + 1; /*0x49e306*/
                  *(_DWORD *)(*(_DWORD *)(v55 + 4) + 4 * v58) = v54; /*0x49e30c*/
                }
              }
            }
LABEL_77:
            v15 = (INIClass *)(v67 + 1); /*0x49e328*/
            v59 = ++v67 < v69; /*0x49e342*/
            v61 += 780; /*0x49e348*/
            v66 = (CCINIClass *)((char *)v66 + 4); /*0x49e34c*/
            if ( !v59 ) /*0x49e350*/
              break; /*0x49e350*/
            continue; /*0x49e350*/
          }
        }
        v11 = v68; /*0x49e356*/
      }
      v11 = (CCINIClass *)((char *)v11 + 1); /*0x49e35d*/
      v2 += 76; /*0x49e35e*/
      v68 = v11; /*0x49e363*/
      if ( (int)v11 >= *(_DWORD *)(this + 92) ) /*0x49e367*/
        goto LABEL_80; /*0x49e367*/
    }
  }
  *(_DWORD *)(this + 92) = 0; /*0x49db81*/
  *(_DWORD *)(this + 88) = 0; /*0x49db84*/
LABEL_80:
  *(_BYTE *)(this + 96) = 1; /*0x49e36f*/
  *(_DWORD *)aP1.__pad_0 = &vt_CCFileClass; /*0x49e37a*/
  v73 = 0; /*0x49e382*/
  Vector::Clear((int)v72); /*0x49e389*/
  *(_DWORD *)aP1.__pad_0 = &off_7E1668; /*0x49e392*/
  return BufferIOFileClass::Dtor(&aP1); /*0x49db61*/
}


// ==== 0x0049E3B0  Movie::GetSection  this=CampaignClass  sig=csp ====
char __thiscall Movie::GetSection(int this, CCINIClass *aP1, CCINIClass *aP2)
{
  if ( !*(_BYTE *)(this + 96) ) /*0x49e3b3*/
    CampaignClass::LoadFromINI(this); /*0x49e3ba*/
  if ( (int)aP1 < 0 || (int)aP1 >= *(_DWORD *)(this + 92) ) /*0x49e3ca*/
  {
    *(_DWORD *)aP2->__pad_0 = 0; /*0x49e3e9*/
    return 0; /*0x49e3ef*/
  }
  else
  {
    *(_DWORD *)aP2->__pad_0 = *(_DWORD *)(this + 88) + 76 * (_DWORD)aP1; /*0x49e3df*/
    return 1; /*0x49e3dd*/
  }
}


// ==== 0x0049E400  CampaignClass::FindMission  this=CampaignClass  sig=csp ====
char __thiscall CampaignClass::FindMission(int this, char *String1, CCINIClass *aP2)
{
  int v4; // esi
  int v5; // eax
  int v6; // ebx
  bool v7; // cc
  int v9; // [esp+10h] [ebp-Ch]
  int v10; // [esp+14h] [ebp-8h]
  int v11; // [esp+18h] [ebp-4h]

  if ( !*(_BYTE *)(this + 96) ) /*0x49e409*/
    CampaignClass::LoadFromINI(this); /*0x49e410*/
  v10 = 0; /*0x49e41c*/
  if ( *(int *)(this + 92) > 0 ) /*0x49e420*/
  {
    v9 = 0; /*0x49e426*/
    while ( 2 ) /*0x49e42a*/
    {
      v4 = 0; /*0x49e42a*/
      v11 = 0; /*0x49e42c*/
      do /*0x49e494*/
      {
        v5 = v9 + *(_DWORD *)(this + 88); /*0x49e437*/
        v6 = 0; /*0x49e439*/
        if ( *(char *)(v5 + 8) > 0 ) /*0x49e440*/
        {
          while ( _strnicmp( /*0x49e464*/
                    String1,
                    (const char *)(v4 + *(_DWORD *)(v5 + 12)),
                    strlen((const char *)(v4 + *(_DWORD *)(v5 + 12)))) )
          {
            ++v6; /*0x49e46d*/
            v4 += 780; /*0x49e46e*/
            v5 = *(_DWORD *)(this + 88) + v9; /*0x49e474*/
            if ( v6 >= *(char *)(v5 + 8) ) /*0x49e47e*/
            {
              v4 = v11; /*0x49e480*/
              goto LABEL_10; /*0x49e480*/
            }
          }
          *(_DWORD *)aP2->__pad_0 = *(_DWORD *)(this + 88) + 76 * v10; /*0x49e4d9*/
          return 1; /*0x49e4db*/
        }
LABEL_10:
        v4 += 260; /*0x49e484*/
        v11 = v4; /*0x49e490*/
      }
      while ( v4 < 780 ); /*0x49e494*/
      v7 = ++v10 < *(_DWORD *)(this + 92); /*0x49e4a5*/
      v9 += 76; /*0x49e4ab*/
      if ( v7 ) /*0x49e4af*/
        continue; /*0x49e4af*/
      break;
    }
  }
  return 0; /*0x49e4b5*/
}


// ==== 0x0049E4F0  CampaignClass::GetValue  this=CampaignClass  sig=csp ====
char __thiscall CampaignClass::GetValue(int this, CCINIClass *aP1)
{
  if ( !*(_BYTE *)(this + 96) ) /*0x49e4f3*/
    CampaignClass::LoadFromINI(this); /*0x49e4fa*/
  *(_DWORD *)aP1->__pad_0 = *(_DWORD *)(this + 92); /*0x49e506*/
  return *(_BYTE *)(this + 96); /*0x49e50b*/
}


// ==== 0x0049E510  INIClass::ClearContents  this=INIClass  sig=csp ====
char *__thiscall INIClass::ClearContents(int this)
{
  int v2; // ebp
  int v3; // esi
  int v4; // eax
  int v5; // eax
  int v6; // ebx
  int v7; // eax
  int v8; // ecx
  void (__thiscall ***v9)(_DWORD, int); // ecx
  int v10; // eax
  int i; // ebp
  int v12; // ebx
  int v13; // eax
  int v14; // ecx
  void (__thiscall ***v15)(_DWORD, int); // ecx
  int v16; // ecx
  int v17; // eax
  void *v18; // edx
  int v19; // esi
  int v20; // eax
  int v21; // ecx
  int v22; // esi
  void *v23; // eax
  void *v24; // eax
  int v26; // [esp+8h] [ebp-8h]
  int v27; // [esp+8h] [ebp-8h]
  void *v28; // [esp+Ch] [ebp-4h]

  v2 = 0; /*0x49e517*/
  if ( *(_DWORD *)(this + 88) ) /*0x49e519*/
  {
    v26 = 0; /*0x49e529*/
    if ( *(int *)(this + 92) > 0 ) /*0x49e52d*/
    {
      v3 = 0; /*0x49e533*/
      while ( 1 ) /*0x49e53c*/
      {
        v4 = v3 + *(_DWORD *)(this + 88); /*0x49e53c*/
        if ( *(_DWORD *)(v4 + 12) ) /*0x49e53e*/
        {
          __3_YAXPAX_Z(*(void **)(v4 + 4)); /*0x49e547*/
          __3_YAXPAX_Z(*(void **)(v3 + *(_DWORD *)(this + 88) + 64)); /*0x49e554*/
          __3_YAXPAX_Z(*(void **)(v3 + *(_DWORD *)(this + 88) + 12)); /*0x49e561*/
        }
        v5 = *(_DWORD *)(this + 88); /*0x49e569*/
        if ( *(int *)(v3 + v5 + 56) > 0 ) /*0x49e572*/
        {
          do /*0x49e5d5*/
          {
            v6 = 0; /*0x49e578*/
            if ( *(int *)(*(_DWORD *)(*(_DWORD *)(v3 + v5 + 44) + 4 * v2) + 16) > 0 ) /*0x49e582*/
            {
              v7 = *(_DWORD *)(*(_DWORD *)(v3 + v5 + 44) + 4 * v2); /*0x49e588*/
              do /*0x49e5a8*/
              {
                __3_YAXPAX_Z(*(void **)(*(_DWORD *)(v7 + 4) + 4 * v6++)); /*0x49e592*/
                v7 = *(_DWORD *)(*(_DWORD *)(v3 + *(_DWORD *)(this + 88) + 44) + 4 * v2); /*0x49e5a2*/
              }
              while ( v6 < *(_DWORD *)(v7 + 16) ); /*0x49e5a8*/
            }
            v8 = *(_DWORD *)(*(_DWORD *)(v3 + *(_DWORD *)(this + 88) + 44) + 4 * v2); /*0x49e5b1*/
            (*(void (__thiscall **)(int))(*(_DWORD *)v8 + 12))(v8); /*0x49e5b6*/
            v9 = *(void (__thiscall ****)(_DWORD, int))(*(_DWORD *)(v3 + *(_DWORD *)(this + 88) + 44) + 4 * v2); /*0x49e5c0*/
            if ( v9 ) /*0x49e5c5*/
              (**v9)(v9, 1); /*0x49e5cb*/
            v5 = *(_DWORD *)(this + 88); /*0x49e5cd*/
            ++v2; /*0x49e5d0*/
          }
          while ( v2 < *(_DWORD *)(v3 + v5 + 56) ); /*0x49e5d5*/
        }
        (*(void (__thiscall **)(int))(*(_DWORD *)(v3 + *(_DWORD *)(this + 88) + 40) + 12))(v3 + *(_DWORD *)(this + 88) + 40); /*0x49e5e2*/
        v10 = *(_DWORD *)(this + 88); /*0x49e5e5*/
        for ( i = 0; i < *(_DWORD *)(v3 + v10 + 32); ++i ) /*0x49e5f0*/
        {
          v12 = 0; /*0x49e5f6*/
          if ( *(int *)(*(_DWORD *)(*(_DWORD *)(v3 + v10 + 20) + 4 * i) + 16) > 0 ) /*0x49e600*/
          {
            v13 = *(_DWORD *)(*(_DWORD *)(v3 + v10 + 20) + 4 * i); /*0x49e606*/
            do /*0x49e626*/
            {
              __3_YAXPAX_Z(*(void **)(*(_DWORD *)(v13 + 4) + 4 * v12++)); /*0x49e610*/
              v13 = *(_DWORD *)(*(_DWORD *)(v3 + *(_DWORD *)(this + 88) + 20) + 4 * i); /*0x49e620*/
            }
            while ( v12 < *(_DWORD *)(v13 + 16) ); /*0x49e626*/
          }
          v14 = *(_DWORD *)(*(_DWORD *)(v3 + *(_DWORD *)(this + 88) + 20) + 4 * i); /*0x49e62f*/
          (*(void (__thiscall **)(int))(*(_DWORD *)v14 + 12))(v14); /*0x49e634*/
          v15 = *(void (__thiscall ****)(_DWORD, int))(*(_DWORD *)(v3 + *(_DWORD *)(this + 88) + 20) + 4 * i); /*0x49e63e*/
          if ( v15 ) /*0x49e643*/
            (**v15)(v15, 1); /*0x49e649*/
          v10 = *(_DWORD *)(this + 88); /*0x49e64b*/
        }
        (*(void (__thiscall **)(int))(*(_DWORD *)(v3 + *(_DWORD *)(this + 88) + 16) + 12))(v3 + *(_DWORD *)(this + 88) + 16); /*0x49e660*/
        v3 += 76; /*0x49e66b*/
        if ( ++v26 >= *(_DWORD *)(this + 92) ) /*0x49e674*/
          break; /*0x49e674*/
        v2 = 0; /*0x49e537*/
      }
    }
    v16 = *(_DWORD *)(this + 88); /*0x49e67c*/
    if ( v16 ) /*0x49e681*/
    {
      v17 = *(_DWORD *)(v16 - 4); /*0x49e687*/
      v18 = (void *)(v16 - 4); /*0x49e68a*/
      v28 = (void *)(v16 - 4); /*0x49e68d*/
      v19 = 19 * v17; /*0x49e694*/
      v20 = v17 - 1; /*0x49e697*/
      v21 = v16 + 4 * v19; /*0x49e698*/
      if ( v20 >= 0 ) /*0x49e69b*/
      {
        v22 = v21 + 44; /*0x49e69e*/
        v27 = v20 + 1; /*0x49e6a1*/
        do /*0x49e70c*/
        {
          v22 -= 76; /*0x49e6aa*/
          DeleteAndZero((void **)(v22 + 28)); /*0x49e6b0*/
          DeleteAndZero((void **)(v22 + 24)); /*0x49e6b8*/
          v23 = *(void **)v22; /*0x49e6bd*/
          *(_DWORD *)(v22 - 4) = &vt_VectorClass_DynamicVectorClass_char; /*0x49e6bf*/
          if ( v23 && *(_BYTE *)(v22 + 9) ) /*0x49e6c6*/
          {
            __3_YAXPAX_Z(v23); /*0x49e6ce*/
            *(_DWORD *)v22 = 0; /*0x49e6d6*/
          }
          *(_BYTE *)(v22 + 9) = 0; /*0x49e6d8*/
          *(_DWORD *)(v22 + 4) = 0; /*0x49e6dc*/
          v24 = *(void **)(v22 - 24); /*0x49e6df*/
          *(_DWORD *)(v22 - 28) = &vt_VectorClass_DynamicVectorClass_char; /*0x49e6e2*/
          if ( v24 && *(_BYTE *)(v22 - 15) ) /*0x49e6e9*/
          {
            __3_YAXPAX_Z(v24); /*0x49e6f1*/
            *(_DWORD *)(v22 - 24) = 0; /*0x49e6f9*/
          }
          *(_BYTE *)(v22 - 15) = 0; /*0x49e700*/
          *(_DWORD *)(v22 - 20) = 0; /*0x49e705*/
          --v27; /*0x49e708*/
        }
        while ( v27 ); /*0x49e70c*/
        v18 = v28; /*0x49e70e*/
      }
      __3_YAXPAX_Z(v18); /*0x49e713*/
    }
    *(_DWORD *)(this + 88) = 0; /*0x49e71c*/
    *(_BYTE *)(this + 96) = 0; /*0x49e71f*/
  }
  return HashTable::DestroyHashTableINIClass((void **)this); /*0x49e72b*/
}


// ==== 0x0049E740  ObjectClass::SmallFunc_49E740  this=CampaignClass  sig=csp ====
char __thiscall sub_49E740(int this, _DWORD *a2)
{
  int v3; // esi
  int v4; // ebp
  wchar_t *v5; // eax

  if ( !*(_BYTE *)(this + 96) ) /*0x49e743*/
  {
    CampaignClass::LoadFromINI(this); /*0x49e74a*/
    if ( !*(_BYTE *)(this + 96) ) /*0x49e74f*/
      return 0; /*0x49e7b7*/
  }
  (*(void (__thiscall **)(_DWORD *, _DWORD, _DWORD))(*a2 + 8))(a2, *(_DWORD *)(this + 92), 0); /*0x49e766*/
  v3 = 0; /*0x49e76c*/
  if ( *(int *)(this + 92) > 0 ) /*0x49e770*/
  {
    v4 = 0; /*0x49e773*/
    do /*0x49e7ac*/
    {
      *(_DWORD *)(a2[1] + 4 * v3) = __2_YAPAXI_Z(0x102u); /*0x49e785*/
      v5 = *(wchar_t **)(a2[1] + 4 * v3); /*0x49e78b*/
      if ( v5 ) /*0x49e790*/
        wcscpy(v5, *(const wchar_t **)(*(_DWORD *)(this + 88) + v4 + 4)); /*0x49e79b*/
      ++v3; /*0x49e7a6*/
      v4 += 76; /*0x49e7a7*/
    }
    while ( v3 < *(_DWORD *)(this + 92) ); /*0x49e7ac*/
  }
  return 1; /*0x49e7b3*/
}


// ==== 0x0049E7C0  ObjectClass::method_49E7C0  this=ObjectClass  sig=csp ====
char *__thiscall sub_49E7C0(char *Block, char a2)
{
  int v3; // eax
  char *v4; // edi
  int v5; // edx
  int v6; // eax
  char *v7; // esi
  int v8; // ebp
  void *v9; // eax
  void *v10; // eax
  void *v12; // eax
  ObjectClass *v13; // eax
  char *v14; // [esp+Ch] [ebp-4h]

  if ( (a2 & 2) != 0 ) /*0x49e7cc*/
  {
    v3 = *((_DWORD *)Block - 1); /*0x49e7d2*/
    v4 = Block - 4; /*0x49e7d5*/
    v14 = Block - 4; /*0x49e7d8*/
    v5 = 19 * v3; /*0x49e7df*/
    v6 = v3 - 1; /*0x49e7e2*/
    if ( v6 >= 0 ) /*0x49e7e6*/
    {
      v7 = Block + 4 * v5 + 44; /*0x49e7e9*/
      v8 = v6 + 1; /*0x49e7ec*/
      do /*0x49e84a*/
      {
        v7 -= 76; /*0x49e7f6*/
        DeleteAndZero((void **)v7 + 7); /*0x49e7fc*/
        DeleteAndZero((void **)v7 + 6); /*0x49e804*/
        v9 = *(void **)v7; /*0x49e809*/
        *((_DWORD *)v7 - 1) = &vt_VectorClass_DynamicVectorClass_char; /*0x49e80b*/
        if ( v9 && v7[9] ) /*0x49e812*/
        {
          __3_YAXPAX_Z(v9); /*0x49e818*/
          *(_DWORD *)v7 = 0; /*0x49e820*/
        }
        v7[9] = 0; /*0x49e822*/
        *((_DWORD *)v7 + 1) = 0; /*0x49e825*/
        v10 = (void *)*((_DWORD *)v7 - 6); /*0x49e828*/
        *((_DWORD *)v7 - 7) = &vt_VectorClass_DynamicVectorClass_char; /*0x49e82b*/
        if ( v10 && *(v7 - 15) ) /*0x49e832*/
        {
          __3_YAXPAX_Z(v10); /*0x49e838*/
          *((_DWORD *)v7 - 6) = 0; /*0x49e840*/
        }
        --v8; /*0x49e843*/
        *(v7 - 15) = 0; /*0x49e844*/
        *((_DWORD *)v7 - 5) = 0; /*0x49e847*/
      }
      while ( v8 ); /*0x49e84a*/
      v4 = v14; /*0x49e84c*/
    }
    if ( (a2 & 1) != 0 ) /*0x49e856*/
      __3_YAXPAX_Z(v4); /*0x49e859*/
    return v4; /*0x49e861*/
  }
  else
  {
    DeleteAndZero((void **)Block + 18); /*0x49e86d*/
    DeleteAndZero((void **)Block + 17); /*0x49e875*/
    v12 = (void *)*((_DWORD *)Block + 11); /*0x49e87a*/
    *((_DWORD *)Block + 10) = &vt_VectorClass_DynamicVectorClass_char; /*0x49e886*/
    if ( v12 && *(Block + 53) ) /*0x49e88b*/
    {
      __3_YAXPAX_Z(v12); /*0x49e891*/
      *((_DWORD *)Block + 11) = 0; /*0x49e899*/
    }
    *(Block + 53) = 0; /*0x49e89c*/
    *((_DWORD *)Block + 12) = 0; /*0x49e89f*/
    v13 = (ObjectClass *)*((_DWORD *)Block + 5); /*0x49e8a2*/
    *((_DWORD *)Block + 4) = &vt_VectorClass_DynamicVectorClass_char; /*0x49e8a5*/
    if ( v13 && *(Block + 29) ) /*0x49e8ac*/
    {
      __3_YAXPAX_Z(v13); /*0x49e8b2*/
      *((_DWORD *)Block + 5) = 0; /*0x49e8ba*/
    }
    *(Block + 29) = 0; /*0x49e8c1*/
    *((_DWORD *)Block + 6) = 0; /*0x49e8c6*/
    if ( (a2 & 1) != 0 ) /*0x49e8c9*/
      __3_YAXPAX_Z(Block); /*0x49e8cc*/
    return Block; /*0x49e8d4*/
  }
}


// ==== 0x0049E8E0  INISectionList::Constructor  this=GenericList  sig=csp ====
_DWORD *__thiscall INISectionList_Constructor(_DWORD *this)
{
  _DWORD *result; // eax
  _DWORD *v2; // edx
  int v3; // ebx
  int v4; // edi
  int v5; // edi
  int v6; // edi

  result = this; /*0x49e8e0*/
  v2 = this + 4; /*0x49e8e9*/
  *(this + 2) = 0; /*0x49e8ef*/
  *(this + 3) = 0; /*0x49e8f2*/
  *(this + 1) = &vt_GenericNode; /*0x49e8f5*/
  *(this + 5) = 0; /*0x49e8fb*/
  *(this + 6) = 0; /*0x49e8fe*/
  *(this + 4) = &vt_GenericNode; /*0x49e901*/
  *this = &vt_GenericList; /*0x49e907*/
  if ( this != (_DWORD *)-16 ) /*0x49e90d*/
  {
    v3 = *(this + 5); /*0x49e90f*/
    if ( v3 ) /*0x49e914*/
    {
      v4 = *(this + 6); /*0x49e916*/
      if ( v4 ) /*0x49e91b*/
      {
        *(_DWORD *)(v4 + 4) = v3; /*0x49e91d*/
        *(_DWORD *)(*(this + 5) + 8) = *(this + 6); /*0x49e926*/
        *(this + 6) = 0; /*0x49e929*/
        *(this + 5) = 0; /*0x49e92c*/
      }
    }
  }
  v5 = *(this + 2); /*0x49e92f*/
  *(this + 6) = this + 1; /*0x49e932*/
  *(this + 5) = v5; /*0x49e935*/
  v6 = *(this + 2); /*0x49e938*/
  if ( v6 ) /*0x49e93d*/
    *(_DWORD *)(v6 + 8) = v2; /*0x49e93f*/
  *(this + 2) = v2; /*0x49e942*/
  *this = &vt_List_INIClass_INISection; /*0x49e947*/
  return result; /*0x49e945*/
}


// ==== 0x0049E950  _DynamicVectorClass_PAD::ddtor  this=DynamicVector  sig=csp ====
void __thiscall DynamicVectorClass_PAD::_vt03(int this)
{
  void *v2; // eax

  v2 = *(void **)(this + 4); /*0x49e956*/
  *(_DWORD *)(this + 16) = 0; /*0x49e959*/
  if ( v2 && *(_BYTE *)(this + 13) ) /*0x49e960*/
  {
    __3_YAXPAX_Z(v2); /*0x49e966*/
    *(_DWORD *)(this + 4) = 0; /*0x49e96e*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x49e971*/
  *(_DWORD *)(this + 8) = 0; /*0x49e974*/
}


// ==== 0x0049E980  _DynamicVectorClass_PAD::Get  this=DynamicVector  sig=csp ====
unsigned int __thiscall DynamicVectorClass_PAD::Get(int this, int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x49e980*/
    return (unsigned int)(a2 - *(_DWORD *)(this + 4)) >> 2; /*0x49e995*/
  else
    return 0; /*0x49e987*/
}


// ==== 0x0049E9A0  _VectorClass_PAD::Clear  this=VectorClass  sig=csp ====
int __thiscall DynamicVectorClass_PAD::_vt06(_DWORD *this, int a2)
{
  return *(_DWORD *)(this->Items + 4 * a2); /*0x49e9aa*/
}


// ==== 0x0049E9B0  _DynamicVectorClass_PAV_DynamicVectorClass_PAD::Clear_49E9B0  this=DynamicVector  sig=csp ====
void __thiscall DynamicVectorClass_PAD::sub_49E9B0(int this)
{
  void *v2; // eax

  v2 = *(void **)(this + 4); /*0x49e9b6*/
  *(_DWORD *)(this + 16) = 0; /*0x49e9b9*/
  if ( v2 && *(_BYTE *)(this + 13) ) /*0x49e9c0*/
  {
    __3_YAXPAX_Z(v2); /*0x49e9c6*/
    *(_DWORD *)(this + 4) = 0; /*0x49e9ce*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x49e9d1*/
  *(_DWORD *)(this + 8) = 0; /*0x49e9d4*/
}


// ==== 0x0049E9E0  _DynamicVectorClass_PAV_DynamicVectorClass_PAD::GetCount  this=DynamicVector  sig=csp ====
unsigned int __thiscall DynamicVectorClass_PAD::sub_49E9E0(int this, int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x49e9e0*/
    return (unsigned int)(a2 - *(_DWORD *)(this + 4)) >> 2; /*0x49e9f5*/
  else
    return 0; /*0x49e9e7*/
}


// ==== 0x0049EA00  _VectorClass_PAV_DynamicVectorClass_PAD::Get  this=VectorClass  sig=csp ====
int __thiscall DynamicVectorClass_PAD_16_::Get(_DWORD *this, int a2)
{
  return *(_DWORD *)(this->Items + 4 * a2); /*0x49ea0a*/
}


// ==== 0x0049EA10  Node::Init  this=Node  sig=csp ====
_DWORD *__thiscall Node_Init(_DWORD *this)
{
  *this = 0; /*0x49ea14*/
  this->q004 = 0; /*0x49ea16*/
  this->q008 = 0; /*0x49ea19*/
  *((_BYTE *)this + 12) = 0; /*0x49ea1c*/
  this->q004 = 0; /*0x49ea1f*/
  return this; /*0x49ea22*/
}


// ==== 0x0049EA30  _VectorClass_PAD::AddRef  this=VectorClass  sig=csp ====
char __thiscall DynamicVectorClass_PAD::_vt01(int *this, int a2)
{
  int v2; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  v2 = this->Capacity; /*0x49ea32*/
  if ( v2 == *(_DWORD *)(a2 + 8) ) /*0x49ea3d*/
  {
    v3 = 0; /*0x49ea3f*/
    if ( v2 <= 0 ) /*0x49ea43*/
      return 1; /*0x49ea63*/
    v4 = (_DWORD *)this->Items; /*0x49ea45*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x49ea4b*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x49ea54*/
    {
      ++v3; /*0x49ea56*/
      ++v4; /*0x49ea57*/
      if ( v3 >= v2 ) /*0x49ea5c*/
        return 1; /*0x49ea5c*/
    }
  }
  return 0; /*0x49ea5e*/
}


// ==== 0x0049EA70  _DynamicVectorClass_PAD::Remove  this=DynamicVector  sig=csp ====
char __thiscall DynamicVectorClass_PAD::Remove(void *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int v5; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x49ea7c*/
  {
    this->IsInitialized = 0; /*0x49ea82*/
    if ( a3 ) /*0x49ea88*/
      v4 = a3; /*0x49ea9e*/
    else
      v4 = __2_YAPAXI_Z(4 * a2); /*0x49ea9a*/
    this->IsInitialized = 1; /*0x49eaa2*/
    if ( !v4 ) /*0x49eaa6*/
      return 0; /*0x49eb1a*/
    if ( this->Items ) /*0x49eaa8*/
    {
      v5 = this->DynamicVector_field_0x8; /*0x49eaaf*/
      if ( a2 < v5 ) /*0x49eab4*/
        v5 = a2; /*0x49eab6*/
      for ( i = 0; i < v5; v4[i - 1] = *(_DWORD *)(this->Items + 4 * i - 4) ) /*0x49eabc*/
        ++i; /*0x49eac1*/
      if ( this->IsAllocated ) /*0x49eace*/
      {
        __3_YAXPAX_Z(*((void **)this + 1)); /*0x49ead9*/
        this->Items = 0; /*0x49eae1*/
      }
    }
    this->Items = v4; /*0x49eaea*/
    this->DynamicVector_field_0x8 = a2; /*0x49eaf2*/
    this->IsAllocated = a3 == 0; /*0x49eaf5*/
  }
  else
  {
    (*(void (__thiscall **)(void *))(this->IsInitialized)(this); /*0x49eafe*/
  }
  v7 = this->DynamicVector_field_0x8; /*0x49eb01*/
  if ( v7 < this->Items ) /*0x49eb09*/
    this->Items = v7; /*0x49eb0b*/
  return 1; /*0x49eb0e*/
}


// ==== 0x0049EB20  _DynamicVectorClass_PAD::GetSize  this=DynamicVector  sig=csp ====
int __thiscall DynamicVectorClass_PAD::_vt04(int *this, _DWORD *a2)
{
  int v2; // edx
  int result; // eax
  _DWORD *i; // ecx

  v2 = this->Items; /*0x49eb20*/
  result = 0; /*0x49eb23*/
  if ( v2 <= 0 ) /*0x49eb28*/
    return -1; /*0x49eb3f*/
  for ( i = (_DWORD *)this->Items; *i != *a2; ++i ) /*0x49eb2e*/
  {
    if ( ++result >= v2 ) /*0x49eb3d*/
      return -1; /*0x49eb3d*/
  }
  return result; /*0x49eb42*/
}


// ==== 0x0049EB50  _VectorClass_PAV_DynamicVectorClass_PAD::Add  this=VectorClass  sig=csp ====
char __thiscall DynamicVectorClass_PAD_16_::Add(int *this, int a2)
{
  int v2; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  v2 = this->Capacity; /*0x49eb52*/
  if ( v2 == *(_DWORD *)(a2 + 8) ) /*0x49eb5d*/
  {
    v3 = 0; /*0x49eb5f*/
    if ( v2 <= 0 ) /*0x49eb63*/
      return 1; /*0x49eb83*/
    v4 = (_DWORD *)this->Items; /*0x49eb65*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x49eb6b*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x49eb74*/
    {
      ++v3; /*0x49eb76*/
      ++v4; /*0x49eb77*/
      if ( v3 >= v2 ) /*0x49eb7c*/
        return 1; /*0x49eb7c*/
    }
  }
  return 0; /*0x49eb7e*/
}


// ==== 0x0049EB90  _VectorClass_PAV_DynamicVectorClass_PAD::Release  this=VectorClass  sig=csp ====
char __thiscall DynamicVectorClass_PAD_16_::_vt02(void *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int v6; // ecx
  int i; // eax

  if ( a2 ) /*0x49eb9c*/
  {
    this->IsInitialized = 0; /*0x49eba6*/
    if ( a3 ) /*0x49ebac*/
      v4 = a3; /*0x49ebc2*/
    else
      v4 = __2_YAPAXI_Z(4 * a2); /*0x49ebbe*/
    this->IsInitialized = 1; /*0x49ebc6*/
    if ( v4 ) /*0x49ebca*/
    {
      if ( this->Items ) /*0x49ebd5*/
      {
        v6 = this->Capacity; /*0x49ebdc*/
        if ( a2 < v6 ) /*0x49ebe1*/
          v6 = a2; /*0x49ebe3*/
        for ( i = 0; i < v6; v4[i - 1] = *(_DWORD *)(this->Items + 4 * i - 4) ) /*0x49ebe9*/
          ++i; /*0x49ebee*/
        if ( this->IsAllocated ) /*0x49ebfb*/
        {
          __3_YAXPAX_Z(*((void **)this + 1)); /*0x49ec06*/
          this->Items = 0; /*0x49ec0e*/
        }
      }
      this->Items = v4; /*0x49ec17*/
      this->Capacity = a2; /*0x49ec1f*/
      this->IsAllocated = a3 == 0; /*0x49ec22*/
      return 1; /*0x49ec28*/
    }
    else
    {
      return 0; /*0x49ebcf*/
    }
  }
  else
  {
    (*(void (__thiscall **)(void *))(this->IsInitialized)(this); /*0x49ec32*/
    return 1; /*0x49ec38*/
  }
}


// ==== 0x0049EC40  _VectorClass_PAV_DynamicVectorClass_PAD::Remove  this=VectorClass  sig=csp ====
void __thiscall DynamicVectorClass_PAD_16_::Remove(int this)
{
  if ( *(_DWORD *)(this + 4) && *(_BYTE *)(this + 13) ) /*0x49ec4d*/
  {
    __3_YAXPAX_Z(*(void **)(this + 4)); /*0x49ec53*/
    *(_DWORD *)(this + 4) = 0; /*0x49ec5b*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x49ec5e*/
  *(_DWORD *)(this + 8) = 0; /*0x49ec61*/
}


// ==== 0x0049EC70  _VectorClass_PAV_DynamicVectorClass_PAD::GetSize  this=VectorClass  sig=csp ====
int __thiscall DynamicVectorClass_PAD_16_::_vt04(int this, _DWORD *a2)
{
  int result; // eax
  int v3; // edx
  _DWORD *i; // ecx

  if ( !*(_BYTE *)(this + 12) ) /*0x49ec70*/
    return 0; /*0x49ec78*/
  v3 = *(_DWORD *)(this + 8); /*0x49ec7e*/
  result = 0; /*0x49ec81*/
  if ( v3 <= 0 ) /*0x49ec85*/
    return -1; /*0x49ec9c*/
  for ( i = *(_DWORD **)(this + 4); *i != *a2; ++i ) /*0x49ec8b*/
  {
    if ( ++result >= v3 ) /*0x49ec9a*/
      return -1; /*0x49ec9a*/
  }
  return result; /*0x49ec7a*/
}


// ==== 0x0049ECB0  _VectorClass_PAV_DynamicVectorClass_PAD::GetCapacity  this=VectorClass  sig=csp ====
unsigned int __thiscall DynamicVectorClass_PAD_16_::_vt05(int this, int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x49ecb0*/
    return (unsigned int)(a2 - *(_DWORD *)(this + 4)) >> 2; /*0x49ecc5*/
  else
    return 0; /*0x49ecb7*/
}


// ==== 0x0049ECD0  CampaignClass::Constructor  this=VectorClass  sig=csp ====
_DWORD *__thiscall sub_49ECD0(_DWORD *this, int a2, int a3)
{
  this->Items = 0; /*0x49ecd9*/
  this->Capacity = a2; /*0x49ece0*/
  this->q030 = 1; /*0x49ece3*/
  this->__pad_034 = 0; /*0x49ece7*/
  *this = &vt_VectorClass_DynamicVectorClass_char; /*0x49eceb*/
  if ( a2 ) /*0x49ecf1*/
  {
    if ( a3 ) /*0x49ecf9*/
    {
      this->Items = a3; /*0x49ecfb*/
    }
    else
    {
      this->Items = __2_YAPAXI_Z(4 * a2); /*0x49ed0c*/
      this->__pad_034 = 1; /*0x49ed0f*/
    }
  }
  *this = &DynamicVectorClass<DynamicVectorClass<char *> *>::`vftable'; /*0x49ed13*/
  this->__pad_014 = 10; /*0x49ed19*/
  this->q010 = 0; /*0x49ed20*/
  return this; /*0x49ed29*/
}


// ==== 0x0049ED30  _DynamicVectorClass_PAV_DynamicVectorClass_PAD::SetCapacity  this=DynamicVector  sig=csp ====
char __thiscall DynamicVectorClass_PAD::sub_49ED30(void *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int v5; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x49ed3c*/
  {
    this->IsInitialized = 0; /*0x49ed42*/
    if ( a3 ) /*0x49ed48*/
      v4 = a3; /*0x49ed5e*/
    else
      v4 = __2_YAPAXI_Z(4 * a2); /*0x49ed5a*/
    this->IsInitialized = 1; /*0x49ed62*/
    if ( !v4 ) /*0x49ed66*/
      return 0; /*0x49edda*/
    if ( this->Items ) /*0x49ed68*/
    {
      v5 = this->DynamicVector_field_0x8; /*0x49ed6f*/
      if ( a2 < v5 ) /*0x49ed74*/
        v5 = a2; /*0x49ed76*/
      for ( i = 0; i < v5; v4[i - 1] = *(_DWORD *)(this->Items + 4 * i - 4) ) /*0x49ed7c*/
        ++i; /*0x49ed81*/
      if ( this->IsAllocated ) /*0x49ed8e*/
      {
        __3_YAXPAX_Z(*((void **)this + 1)); /*0x49ed99*/
        this->Items = 0; /*0x49eda1*/
      }
    }
    this->Items = v4; /*0x49edaa*/
    this->DynamicVector_field_0x8 = a2; /*0x49edb2*/
    this->IsAllocated = a3 == 0; /*0x49edb5*/
  }
  else
  {
    (*(void (__thiscall **)(void *))(this->IsInitialized)(this); /*0x49edbe*/
  }
  v7 = this->DynamicVector_field_0x8; /*0x49edc1*/
  if ( v7 < this->Items ) /*0x49edc9*/
    this->Items = v7; /*0x49edcb*/
  return 1; /*0x49edce*/
}


// ==== 0x0049EDE0  _DynamicVectorClass_PAV_DynamicVectorClass_PAD::FindItemIndex  this=DynamicVector  sig=csp ====
int __thiscall DynamicVectorClass_PAD::sub_49EDE0(int *this, _DWORD *a2)
{
  int v2; // edx
  int result; // eax
  _DWORD *i; // ecx

  v2 = this->Items; /*0x49ede0*/
  result = 0; /*0x49ede3*/
  if ( v2 <= 0 ) /*0x49ede8*/
    return -1; /*0x49edff*/
  for ( i = (_DWORD *)this->Items; *i != *a2; ++i ) /*0x49edee*/
  {
    if ( ++result >= v2 ) /*0x49edfd*/
      return -1; /*0x49edfd*/
  }
  return result; /*0x49ee02*/
}


// ==== 0x0049EE10  _DynamicVectorClass_PAD::Add  this=DynamicVector  sig=csp ====
DynamicVector *__thiscall DynamicVectorClass_PAD::Add(_DWORD *Block, char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x49ee13*/
  *Block = &vt_VectorClass_char; /*0x49ee16*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x49ee20*/
  {
    __3_YAXPAX_Z(v3); /*0x49ee28*/
    *(Block + 1) = 0; /*0x49ee30*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x49ee3b*/
  *(Block + 2) = 0; /*0x49ee41*/
  if ( (a2 & 1) != 0 ) /*0x49ee48*/
    __3_YAXPAX_Z(Block); /*0x49ee4b*/
  return (DynamicVector *)Block; /*0x49ee55*/
}


// ==== 0x0049EE60  _VectorClass_PAD::Release  this=VectorClass  sig=csp ====
char __thiscall StringVector::_vt02(void *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int v6; // ecx
  int i; // eax

  if ( a2 ) /*0x49ee6c*/
  {
    this->IsInitialized = 0; /*0x49ee76*/
    if ( a3 ) /*0x49ee7c*/
      v4 = a3; /*0x49ee92*/
    else
      v4 = __2_YAPAXI_Z(4 * a2); /*0x49ee8e*/
    this->IsInitialized = 1; /*0x49ee96*/
    if ( v4 ) /*0x49ee9a*/
    {
      if ( this->Items ) /*0x49eea5*/
      {
        v6 = this->Capacity; /*0x49eeac*/
        if ( a2 < v6 ) /*0x49eeb1*/
          v6 = a2; /*0x49eeb3*/
        for ( i = 0; i < v6; v4[i - 1] = *(_DWORD *)(this->Items + 4 * i - 4) ) /*0x49eeb9*/
          ++i; /*0x49eebe*/
        if ( this->IsAllocated ) /*0x49eecb*/
        {
          __3_YAXPAX_Z(*((void **)this + 1)); /*0x49eed6*/
          this->Items = 0; /*0x49eede*/
        }
      }
      this->Items = v4; /*0x49eee7*/
      this->Capacity = a2; /*0x49eeef*/
      this->IsAllocated = a3 == 0; /*0x49eef2*/
      return 1; /*0x49eef8*/
    }
    else
    {
      return 0; /*0x49ee9f*/
    }
  }
  else
  {
    (*(void (__thiscall **)(void *))(this->IsInitialized)(this); /*0x49ef02*/
    return 1; /*0x49ef08*/
  }
}


// ==== 0x0049EF10  _VectorClass_PAD::ddtor  this=VectorClass  sig=csp ====
void __thiscall StringVector::_vt03(int this)
{
  if ( *(_DWORD *)(this + 4) && *(_BYTE *)(this + 13) ) /*0x49ef1d*/
  {
    __3_YAXPAX_Z(*(void **)(this + 4)); /*0x49ef23*/
    *(_DWORD *)(this + 4) = 0; /*0x49ef2b*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x49ef2e*/
  *(_DWORD *)(this + 8) = 0; /*0x49ef31*/
}


// ==== 0x0049EF40  _VectorClass_PAD::Add  this=VectorClass  sig=csp ====
int __thiscall StringVector::_vt04(int this, _DWORD *a2)
{
  int result; // eax
  int v3; // edx
  _DWORD *i; // ecx

  if ( !*(_BYTE *)(this + 12) ) /*0x49ef40*/
    return 0; /*0x49ef48*/
  v3 = *(_DWORD *)(this + 8); /*0x49ef4e*/
  result = 0; /*0x49ef51*/
  if ( v3 <= 0 ) /*0x49ef55*/
    return -1; /*0x49ef6c*/
  for ( i = *(_DWORD **)(this + 4); *i != *a2; ++i ) /*0x49ef5b*/
  {
    if ( ++result >= v3 ) /*0x49ef6a*/
      return -1; /*0x49ef6a*/
  }
  return result; /*0x49ef4a*/
}


// ==== 0x0049EF80  _VectorClass_PAD::Remove  this=VectorClass  sig=csp ====
unsigned int __thiscall StringVector::_vt05(int this, int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x49ef80*/
    return (unsigned int)(a2 - *(_DWORD *)(this + 4)) >> 2; /*0x49ef95*/
  else
    return 0; /*0x49ef87*/
}


// ==== 0x0049EFA0  _VectorClass_PAD::QueryInterface  this=VectorClass  sig=csp ====
VectorClass *__thiscall StringVector::QueryInterface(_DWORD *Block, char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x49efa3*/
  *Block = &vt_VectorClass_char; /*0x49efa6*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x49efb0*/
  {
    __3_YAXPAX_Z(v3); /*0x49efb8*/
    *(Block + 1) = 0; /*0x49efc0*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x49efcb*/
  *(Block + 2) = 0; /*0x49efd1*/
  if ( (a2 & 1) != 0 ) /*0x49efd8*/
    __3_YAXPAX_Z(Block); /*0x49efdb*/
  return (VectorClass *)Block; /*0x49efe5*/
}


// ==== 0x0049EFF0  _VectorClass_PAV_DynamicVectorClass_PAD::QueryInterface  this=VectorClass  sig=csp ====
VectorClass *__thiscall DynamicVectorClass_PAD_16_::QueryInterface(_DWORD *Block, char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x49eff3*/
  *Block = &vt_VectorClass_DynamicVectorClass_char; /*0x49eff6*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x49f000*/
  {
    __3_YAXPAX_Z(v3); /*0x49f008*/
    *(Block + 1) = 0; /*0x49f010*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x49f01b*/
  *(Block + 2) = 0; /*0x49f021*/
  if ( (a2 & 1) != 0 ) /*0x49f028*/
    __3_YAXPAX_Z(Block); /*0x49f02b*/
  return (VectorClass *)Block; /*0x49f035*/
}


// ==== 0x0049F040  _DynamicVectorClass_PAV_DynamicVectorClass_PAD::Destructor  this=DynamicVector  sig=csp ====
DynamicVector *__thiscall DynamicVectorClass_PAD::Destructor(_DWORD *Block, char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x49f043*/
  *Block = &vt_VectorClass_DynamicVectorClass_char; /*0x49f046*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x49f050*/
  {
    __3_YAXPAX_Z(v3); /*0x49f058*/
    *(Block + 1) = 0; /*0x49f060*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x49f06b*/
  *(Block + 2) = 0; /*0x49f071*/
  if ( (a2 & 1) != 0 ) /*0x49f078*/
    __3_YAXPAX_Z(Block); /*0x49f07b*/
  return (DynamicVector *)Block; /*0x49f085*/
}


// ==== 0x0049F090  CampaignClass::Constructor_0  this=VectorClass  sig=csp ====
_DWORD *__thiscall sub_49F090(_DWORD *this, int a2, int a3)
{
  this->Items = 0; /*0x49f09b*/
  this->Capacity = a2; /*0x49f09e*/
  this->q030 = 1; /*0x49f0a1*/
  this->__pad_034 = 0; /*0x49f0a5*/
  *this = &vt_VectorClass_DynamicVectorClass_char; /*0x49f0a8*/
  if ( a2 ) /*0x49f0ae*/
  {
    if ( a3 ) /*0x49f0b6*/
    {
      this->Items = a3; /*0x49f0b8*/
      return this; /*0x49f0be*/
    }
    this->Items = __2_YAPAXI_Z(4 * a2); /*0x49f0cd*/
    this->__pad_034 = 1; /*0x49f0d0*/
  }
  return this; /*0x49f0bd*/
}


// ==== 0x0049F0E0  sub_49F0E0  this=-  sig=ida-proto ====
void sub_49F0E0()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x49f0ec*/
  MEMORY[0x89F6C0] = Math::Sqrt(v0 + v0); /*0x49f0fe*/
}


// ==== 0x0049F110  sub_49F110  this=-  sig=ida-proto ====
void sub_49F110()
{
  MEMORY[0x89F750] = MEMORY[0x89F6C0] / 60.0; /*0x49f11c*/
}


// ==== 0x0049F130  sub_49F130  this=-  sig=ida-proto ====
void sub_49F130()
{
  MEMORY[0x89F738] = 1.0 / MEMORY[0x89F750]; /*0x49f13c*/
}


// ==== 0x0049F150  sub_49F150  this=-  sig=ida-proto ====
void sub_49F150()
{
  MEMORY[0x89F730] = 0.0174532925199433 * 45.0; /*0x49f15c*/
}


// ==== 0x0049F170  sub_49F170  this=-  sig=ida-proto ====
void sub_49F170()
{
  MEMORY[0x89F6C8] = 0.0174532925199433 * 60.0; /*0x49f17c*/
}


// ==== 0x0049F190  sub_49F190  this=-  sig=ida-proto ====
void sub_49F190()
{
  *((double *)&MEMORY[0x89F5D8] + 21) = 0.0174532925199433 * 90.0; /*0x49f19c*/
}


// ==== 0x0049F1B0  sub_49F1B0  this=-  sig=ida-proto ====
__int64 sub_49F1B0()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(*((double *)&MEMORY[0x89F5D8] + 21) - MEMORY[0x89F6C8]); /*0x49f1c2*/
  result = Math::RoundToInt(v0 * MEMORY[0x89F6C0] * 0.5); /*0x49f1d6*/
  MEMORY[0x89F758] = result; /*0x49f1db*/
  return result; /*0x49f1e0*/
}


// ==== 0x0049F1F0  sub_49F1F0  this=-  sig=ida-proto ====
void sub_49F1F0()
{
  MEMORY[0x89F6D0] = Math::ArcTan((double)MEMORY[0x89F758] * 0.00390625); /*0x49f207*/
}


// ==== 0x0049F220  sub_49F220  this=-  sig=ida-proto ====
void sub_49F220()
{
  MEMORY[0x89F728] = Math::ArcTan((double)(2 * MEMORY[0x89F758]) / MEMORY[0x89F6C0]); /*0x49f242*/
}


// ==== 0x0049F250  sub_49F250  this=-  sig=ida-proto ====
__int64 sub_49F250()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * MEMORY[0x89F758]) + 0.5); /*0x49f26b*/
  MEMORY[0x89F74C] = result; /*0x49f270*/
  return result; /*0x49f276*/
}


// ==== 0x0049F280  sub_49F280  this=-  sig=ida-proto ====
int sub_49F280()
{
  MEMORY[0x89F6B8] = 0; /*0x49f282*/
  MEMORY[0x89F6BA] = 0; /*0x49f288*/
  return 0; /*0x49f28e*/
}


// ==== 0x0049F290  sub_49F290  this=-  sig=ida-proto ====
int sub_49F290()
{
  MEMORY[0x89F718] = 0; /*0x49f292*/
  MEMORY[0x89F71C] = 0; /*0x49f297*/
  MEMORY[0x89F720] = 0; /*0x49f29c*/
  return 0; /*0x49f2a1*/
}


// ==== 0x0049F2B0  sub_49F2B0  this=-  sig=ida-proto ====
int sub_49F2B0()
{
  MEMORY[0x89F748] = 0; /*0x49f2b5*/
  MEMORY[0x89F740] = 128; /*0x49f2bf*/
  MEMORY[0x89F744] = 128; /*0x49f2c4*/
  return 128; /*0x49f2c9*/
}


// ==== 0x0049F2D0  sub_49F2D0  this=-  sig=ida-proto ====
int sub_49F2D0()
{
  MEMORY[0x89F6A8] = 0; /*0x49f2d2*/
  MEMORY[0x89F6AC] = 0; /*0x49f2d7*/
  MEMORY[0x89F6B0] = 0; /*0x49f2dc*/
  MEMORY[0x89F6B4] = 0; /*0x49f2e1*/
  return 0; /*0x49f2e6*/
}


// ==== 0x0049F2F0  sub_49F2F0  this=-  sig=csp ====
int sub_49F2F0()
{
  MEMORY[0x89F688][0] = -65536; /*0x49f305*/
  MEMORY[0x89F68C] = -65535; /*0x49f322*/
  MEMORY[0x89F690] = 1; /*0x49f336*/
  MEMORY[0x89F694] = 65537; /*0x49f34a*/
  MEMORY[0x89F69C] = 0x1FFFF; /*0x49f375*/
  MEMORY[0x89F698] = 0x10000; /*0x49f388*/
  MEMORY[0x89F6A0] = 0xFFFF; /*0x49f38e*/
  MEMORY[0x89F6A4] = -1; /*0x49f394*/
  return -1; /*0x49f39b*/
}


// ==== 0x0049F3A0  sub_49F3A0  this=-  sig=ida-proto ====
int sub_49F3A0()
{
  MEMORY[0x89F6DC][0] = -256; /*0x49f3a7*/
  MEMORY[0x89F6E4] = -256; /*0x49f3ad*/
  MEMORY[0x89F6D8][0] = 0; /*0x49f3b3*/
  MEMORY[0x89F6EC] = 0; /*0x49f3bf*/
  MEMORY[0x89F6E0] = 256; /*0x49f3c5*/
  MEMORY[0x89F6E8] = 256; /*0x49f3ca*/
  MEMORY[0x89F6F0] = 256; /*0x49f3d1*/
  MEMORY[0x89F6F4] = 256; /*0x49f3d8*/
  MEMORY[0x89F6FC] = 256; /*0x49f3de*/
  MEMORY[0x89F704] = 256; /*0x49f3e4*/
  MEMORY[0x89F6F8] = 0; /*0x49f3ea*/
  MEMORY[0x89F70C] = 0; /*0x49f3f6*/
  MEMORY[0x89F700] = -256; /*0x49f3fe*/
  MEMORY[0x89F708] = -256; /*0x49f403*/
  MEMORY[0x89F710] = -256; /*0x49f408*/
  MEMORY[0x89F714] = -256; /*0x49f40d*/
  return -256; /*0x49f413*/
}


// ==== 0x0049F420  RandomCoordScatter  this=-  sig=csp ====
int *__fastcall RandomCoordScatter(int *a0, IUnknown *aP1, int aP2, ScenarioClass *aP3)
{
  char v5; // al
  __int16 v6; // cx
  IUnknown *v7; // edi
  double v8; // st7
  double v9; // st7
  IUnknown *v10; // eax
  IUnknown *v11; // edi
  int v12; // ebx
  IUnknown *v13; // ecx
  int *result; // eax
  int *v15; // edx
  IUnknown *aP0[2]; // [esp+10h] [ebp-20h] BYREF
  int v17; // [esp+18h] [ebp-18h]
  int *v18; // [esp+1Ch] [ebp-14h]
  double v19; // [esp+20h] [ebp-10h]
  double v20; // [esp+28h] [ebp-8h]
  IUnknown *aP2a; // [esp+34h] [ebp+4h]

  v18 = a0; /*0x49f42a*/
  LOWORD(aP0[0]) = 0; /*0x49f438*/
  v5 = Random::State((_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[8060] + 536)); /*0x49f43f*/
  LOBYTE(v6) = 0; /*0x49f448*/
  HIBYTE(v6) = v5; /*0x49f44a*/
  v7 = (IUnknown *)aP1->field_8; /*0x49f451*/
  *(double *)aP0 = (double)(v6 - 0x3FFF) * -0.00009587672516830327; /*0x49f46c*/
  v19 = (double)aP2; /*0x49f47e*/
  v20 = (double)aP1->field_4; /*0x49f485*/
  v8 = Math::SinCos(aP0[0]); /*0x49f489*/
  aP2a = (IUnknown *)Math::RoundToInt(v20 - v8 * v19); /*0x49f49d*/
  v9 = Math::ArcTan2(aP0[0]); /*0x49f4a1*/
  v10 = (IUnknown *)Math::RoundToInt(v9 * v19 + (double)aP1->field_0); /*0x49f4af*/
  Coord::Subtract(aP0, v10, aP2a, v7); /*0x49f4bf*/
  v11 = aP0[1]; /*0x49f4c4*/
  v12 = v17; /*0x49f4c8*/
  v13 = aP0[0]; /*0x49f4d0*/
  if ( (unsigned int)((int)aP0[0] / 256) >= 0x200 || (unsigned int)((int)aP0[1] / 256) >= 0x200 ) /*0x49f4f8*/
  {
    v13 = (IUnknown *)aP1->field_0; /*0x49f4fa*/
    v11 = (IUnknown *)aP1->field_4; /*0x49f4fc*/
    v12 = aP1->field_8; /*0x49f4ff*/
  }
  if ( (_BYTE)aP3 ) /*0x49f508*/
  {
    v13 = (IUnknown *)&v13->__pad_68[-(unsigned __int8)v13 + 24]; /*0x49f51d*/
    v11 = (IUnknown *)&v11->__pad_68[-(unsigned __int8)v11 + 24]; /*0x49f523*/
  }
  result = v18; /*0x49f529*/
  v15 = v18; /*0x49f52d*/
  *v18 = (int)v13; /*0x49f52f*/
  v15[1] = (int)v11; /*0x49f531*/
  v15[2] = v12; /*0x49f537*/
  return result; /*0x49f534*/
}


// ==== 0x0049F550  globalHelper_09F550  this=-  sig=csp ====
IUnknown *__fastcall globalHelper_09F550(int *a1, IUnknown *a2, int a3)
{
  int v4; // eax
  IUnknown *v5; // edi
  char *v6; // edi
  int GroundHeight; // eax
  int v9; // [esp+8h] [ebp-Ch] BYREF
  int v10; // [esp+Ch] [ebp-8h]
  IUnknown *v11; // [esp+10h] [ebp-4h]

  v4 = *(_DWORD *)&stru_89E138.__pad_14B0[8 * a3 + 240] + a2->field_0; /*0x49f56c*/
  v5 = (IUnknown *)a2->field_8; /*0x49f573*/
  v10 = a2->field_4 + *(_DWORD *)&stru_89E138.__pad_14B0[8 * a3 + 244]; /*0x49f576*/
  v9 = v4; /*0x49f57f*/
  v11 = v5; /*0x49f583*/
  v6 = (char *)v5 - Cell::GetGroundHeight(a2); /*0x49f595*/
  GroundHeight = Cell::GetGroundHeight((IUnknown *)&v9); /*0x49f59c*/
  *a1 = v9; /*0x49f5aa*/
  a1[1] = v10; /*0x49f5b0*/
  a1[2] = (int)&v6[GroundHeight]; /*0x49f5b3*/
  return (IUnknown *)a1; /*0x49f5a9*/
}


// ==== 0x0049F5C0  CopyProtection::CheckLauncher  this=CopyProtection  sig=ida-proto ====
bool CopyProtection::CheckLauncher()
{
  int v0; // esi
  bool v1; // bl

  Debug::Log(); /*0x49f5c8*/
  v0 = ((int (__stdcall *)(_DWORD, _DWORD, char *))CreateMutexA)(0, 0, Name); /*0x49f5df*/
  v1 = ((int (*)(void))GetLastError)() == 183; /*0x49f5ec*/
  if ( v0 ) /*0x49f5f5*/
    ((void (__stdcall *)(int))CloseHandle)(v0); /*0x49f5f8*/
  Debug::Log(); /*0x49f60d*/
  return v1; /*0x49f617*/
}


// ==== 0x0049F620  CopyProtection::NotifyLauncher  this=CopyProtection  sig=ida-proto ====
char CopyProtection::NotifyLauncher()
{
  unsigned int v0; // edi
  int v1; // esi
  unsigned int v2; // esi
  _DWORD Msg[7]; // [esp+10h] [ebp-1Ch] BYREF

  Debug::Log(); /*0x49f62c*/
  ((void (__stdcall *)(_DWORD *, _DWORD, int, int, _DWORD))PeekMessageA)(Msg, 0, 1024, 1024, 0); /*0x49f647*/
  v0 = ((int (*)(void))timeGetTime)() + 60000; /*0x49f657*/
  if ( ((int (*)(void))timeGetTime)() < v0 ) /*0x49f661*/
  {
    while ( 1 ) /*0x49f678*/
    {
      v1 = ((int (__stdcall *)(int, int, char *))OpenEventA)(2, 1, aD6e7fc9764f94d); /*0x49f678*/
      if ( v1 ) /*0x49f67c*/
        break; /*0x49f67c*/
      ((void (__stdcall *)(_DWORD))Sleep)(0); /*0x49f67f*/
      if ( ((int (*)(void))timeGetTime)() >= v0 ) /*0x49f689*/
        goto LABEL_9; /*0x49f689*/
    }
    ((void (__stdcall *)(int))SetEvent)(v1); /*0x49f690*/
    ((void (__stdcall *)(int))CloseHandle)(v1); /*0x49f697*/
    Debug::Log(); /*0x49f6a2*/
    Debug::Log(); /*0x49f6ac*/
    v2 = ((int (*)(void))timeGetTime)() + 10000; /*0x49f6b8*/
    if ( ((int (*)(void))timeGetTime)() <= v2 ) /*0x49f6c2*/
    {
      while ( !((int (__stdcall *)(_DWORD *, _DWORD, int, int, int))PeekMessageA)(Msg, 0, 48879, 48879, 1) /*0x49f6e2*/
           || Msg[1] != 48879 )
      {
        ((void (__stdcall *)(_DWORD))Sleep)(0); /*0x49f6e6*/
        if ( ((int (*)(void))timeGetTime)() > v2 ) /*0x49f6f0*/
          goto LABEL_9; /*0x49f6f0*/
      }
      MEMORY[0x87F7E8][32733] = ((int (__stdcall *)(_DWORD, int, _DWORD, _DWORD, _DWORD, _DWORD))MapViewOfFileEx)( /*0x49f723*/
                                  Msg[3],
                                  983071,
                                  0,
                                  0,
                                  0,
                                  0);
      if ( MEMORY[0x87F7E8][32733] ) /*0x49f728*/
        return 1; /*0x49f72d*/
    }
  }
LABEL_9:
  Debug::Log(); /*0x49f6f2*/
  return 0; /*0x49f701*/
}


// ==== 0x0049F740  Dialog::MapDialogResource  this=Dialog  sig=csp ====
void __thiscall Dialog::MapDialogResource(_DWORD *this)
{
  if ( this->__pad_010 == 48879 ) /*0x49f74a*/
  {
    Debug::Log(); /*0x49f751*/
    MEMORY[0x87F7E8][32733] = ((int (__stdcall *)(_DWORD, int, _DWORD, _DWORD, _DWORD, _DWORD))MapViewOfFileEx)( /*0x49f772*/
                                this->Dialog_field_0xC,
                                983071,
                                0,
                                0,
                                0,
                                0);
    Debug::Log(); /*0x49f77e*/
  }
}


// ==== 0x0049F7A0  CopyProtection::CheckProtectedData  this=CopyProtection  sig=ida-proto ====
char CopyProtection::CheckProtectedData()
{
  return 1; /*0x49f7a2*/
}


// ==== 0x0049F8B0  WinMain::CleanupResource  this=AnimClass  sig=csp ====
LSTATUS __thiscall WinMain::CleanupResource(AnimClass *this)
{
  LSTATUS result; // eax
  HKEY phkResult; // [esp+0h] [ebp-4h] BYREF

  phkResult = (HKEY)this; /*0x49f8b0*/
  Debug::Log(); /*0x49f8b6*/
  if ( MEMORY[0x89F75C] ) /*0x49f8c5*/
  {
    UnmapViewOfFile(MEMORY[0x89F75C]); /*0x49f8c8*/
    MEMORY[0x89F75C] = 0; /*0x49f8ce*/
  }
  result = RegOpenKeyExA(HKEY_CLASSES_ROOT, SubKey, 0, 0xF003Fu, &phkResult); /*0x49f8ee*/
  if ( !result ) /*0x49f8f6*/
  {
    RegDeleteValueA(phkResult, ValueName); /*0x49f902*/
    return RegCloseKey(phkResult); /*0x49f90d*/
  }
  return result; /*0x49f914*/
}


// ==== 0x0049F920  sub_49F920  this=-  sig=ida-proto ====
bool sub_49F920()
{
  LSTATUS v0; // esi
  int v1; // eax
  HKEY phkResult; // [esp+0h] [ebp-10h] BYREF
  DWORD cbData; // [esp+4h] [ebp-Ch] BYREF
  DWORD Type; // [esp+8h] [ebp-8h] BYREF
  BYTE Data[4]; // [esp+Ch] [ebp-4h] BYREF

  if ( RegOpenKeyExA(HKEY_CLASSES_ROOT, SubKey, 0, 0x20019u, &phkResult) ) /*0x49f939*/
    return 0; /*0x49f939*/
  cbData = 4; /*0x49f95f*/
  v0 = RegQueryValueExA(phkResult, ValueName, 0, &Type, Data, &cbData); /*0x49f96d*/
  RegCloseKey(phkResult); /*0x49f974*/
  if ( v0 || Type != 4 ) /*0x49f984*/
    return 0; /*0x49f9a1*/
  v1 = VersionInfo::Read((int)&MEMORY[0xA8EA70].__pad_220[80]); /*0x49f98b*/
  return *(_DWORD *)Data == v1; /*0x49f99d*/
}


// ==== 0x0049F9B0  CounterClass::Construct  this=CounterClass  sig=csp ====
_DWORD *__thiscall CounterClass_Constructor(_DWORD *this)
{
  this->count = 0; /*0x49f9b4*/
  this->Capacity = 0; /*0x49f9b7*/
  this->q00C = 1; /*0x49f9ba*/
  this->q00D = 0; /*0x49f9be*/
  *this = &CounterClass::`vftable'; /*0x49f9c1*/
  this->Count = 0; /*0x49f9c7*/
  return this; /*0x49f9ca*/
}


// ==== 0x0049F9D0  IntVector::Destructor  this=VectorClass  sig=csp ====
void __thiscall IntVector_Destructor(_DWORD *this)
{
  void *v2; // eax

  v2 = (void *)this->Items; /*0x49f9d6*/
  *this = &vt_VectorClass_int; /*0x49f9d9*/
  if ( v2 && this->__pad_034 ) /*0x49f9e3*/
  {
    __3_YAXPAX_Z(v2); /*0x49f9e9*/
    this->Items = 0; /*0x49f9f1*/
  }
  this->__pad_034 = 0; /*0x49f9f4*/
  this->Capacity = 0; /*0x49f9f7*/
}


// ==== 0x0049FA00  RefCount::Increment  this=RefCount  sig=csp ====
int __thiscall RefCount_Increment(_DWORD *this, int a2)
{
  int v3; // edi
  int i; // eax
  int v5; // ecx

  v3 = this->__pad_008; /*0x49fa09*/
  if ( a2 < v3 ) /*0x49fa0e*/
  {
LABEL_5:
    ++*(_DWORD *)(this->RefCount_field_04 + 4 * a2); /*0x49fa3d*/
    v5 = this->RefCount_field_04; /*0x49fa4d*/
    ++this->RefCount_field_04; /*0x49fa51*/
    return *(_DWORD *)(v5 + 4 * a2); /*0x49fa59*/
  }
  if ( (*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(*this + 8))(this, a2 + 10, 0) ) /*0x49fa1a*/
  {
    for ( i = v3; i < this->__pad_008; *(_DWORD *)(this->RefCount_field_04 + 4 * i - 4) = 0 ) /*0x49fa28*/
      ++i; /*0x49fa2d*/
    goto LABEL_5; /*0x49fa3b*/
  }
  return 0; /*0x49fa40*/
}


// ==== 0x0049FA70  CounterClass::Decrement  this=CounterClass  sig=csp ====
int __thiscall CounterClass_Decrement(_DWORD *this, int a2)
{
  int v3; // edi
  int i; // eax
  int v5; // ecx

  v3 = this->Capacity; /*0x49fa79*/
  if ( a2 < v3 ) /*0x49fa7e*/
  {
LABEL_5:
    --*(_DWORD *)(this->count + 4 * a2); /*0x49faad*/
    v5 = this->count; /*0x49fabd*/
    --this->Count; /*0x49fac1*/
    return *(_DWORD *)(v5 + 4 * a2); /*0x49fac9*/
  }
  if ( (*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(*this + 8))(this, a2 + 10, 0) ) /*0x49fa8a*/
  {
    for ( i = v3; i < this->Capacity; *(_DWORD *)(this->count + 4 * i - 4) = 0 ) /*0x49fa98*/
      ++i; /*0x49fa9d*/
    goto LABEL_5; /*0x49faab*/
  }
  return 0; /*0x49fab0*/
}


// ==== 0x0049FAE0  DynamicVector::GetOrGrow  this=DynamicVector  sig=csp ====
int __thiscall DynamicVector::GetOrGrow(_DWORD *this, DynamicVector *aP1)
{
  int v3; // edi
  int i; // eax

  v3 = this->DynamicVector_field_0x8; /*0x49fae9*/
  if ( (int)aP1 < v3 ) /*0x49faee*/
    return *(_DWORD *)(this->Items + 4 * (_DWORD)aP1); /*0x49fb26*/
  if ( (*(unsigned __int8 (__thiscall **)(_DWORD *, char *, _DWORD))(*this + 8))(this, (char *)&aP1->field_8 + 2, 0) ) /*0x49fafa*/
  {
    for ( i = v3; i < this->DynamicVector_field_0x8; *(_DWORD *)(this->Items + 4 * i - 4) = 0 ) /*0x49fb08*/
      ++i; /*0x49fb0d*/
    return *(_DWORD *)(this->Items + 4 * (_DWORD)aP1); /*0x49fb1b*/
  }
  return 0; /*0x49fb20*/
}


// ==== 0x0049FB40  CounterClass::ddtor  this=CounterClass  sig=csp ====
int __thiscall CounterClass::_vt03(_DWORD *this)
{
  int result; // eax

  for ( result = 0; result < this->Capacity; this->Items[result - 1] = 0 ) /*0x49fb4a*/
    ++result; /*0x49fb4f*/
  this->Count = 0; /*0x49fb5b*/
  return result; /*0x49fb5e*/
}


// ==== 0x0049FB60  VectorClass::GetCount  this=VectorClass  sig=csp ====
int __thiscall VectorClass_GetCount(_DWORD *this)
{
  return this->q010; /*0x49fb63*/
}


// ==== 0x0049FB70  Stream::ReadIntArray  this=Stream  sig=csp ====
int __thiscall Stream_ReadIntArray(int *this, int a2)
{
  int v2; // esi
  int result; // eax
  int v5; // eax
  int v6; // ebx

  v2 = a2; /*0x49fb72*/
  result = (*(int (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)a2 + 16))(a2, this + 4, 4, 0); /*0x49fb84*/
  if ( result >= 0 ) /*0x49fb89*/
  {
    v5 = *(_DWORD *)v2; /*0x49fb8e*/
    a2 = this->Stream_field_08; /*0x49fb9a*/
    result = (*(int (__stdcall **)(int, int *, int, _DWORD))(v5 + 16))(v2, &a2, 4, 0); /*0x49fb9e*/
    if ( result >= 0 ) /*0x49fba3*/
    {
      v6 = 0; /*0x49fba9*/
      if ( a2 <= 0 ) /*0x49fbad*/
      {
        return 0; /*0x49fbcd*/
      }
      else
      {
        while ( 1 ) /*0x49fbbd*/
        {
          result = (*(int (__stdcall **)(int, int, int, _DWORD))(*(_DWORD *)v2 + 16))(v2, this->Stream_field_04 + 4 * v6, 4, 0); /*0x49fbbd*/
          if ( result < 0 ) /*0x49fbc2*/
            break; /*0x49fbc2*/
          if ( ++v6 >= a2 ) /*0x49fbcb*/
            return 0; /*0x49fbcb*/
        }
      }
    }
  }
  return result; /*0x49fbcf*/
}


// ==== 0x0049FBE0  CounterClass::Load  this=CounterClass  sig=csp ====
int __thiscall CounterClass::Load(_DWORD *this, AbstractClass *aP1)
{
  AbstractClass *v3; // esi
  int result; // eax
  int v5; // ebp

  if ( this ) /*0x49fbea*/
  {
    this->count = 0; /*0x49fbec*/
    this->Capacity = 0; /*0x49fbef*/
    this->q00C = 1; /*0x49fbf2*/
    this->q00D = 0; /*0x49fbf6*/
    *this = &CounterClass::`vftable'; /*0x49fbf9*/
    this->Count = 0; /*0x49fbff*/
  }
  v3 = aP1; /*0x49fc02*/
  result = (*(int (__stdcall **)(AbstractClass *, _DWORD *, int, _DWORD))(*(_DWORD *)aP1->__pad_0 + 12))( /*0x49fc10*/
             aP1,
             this + 4,
             4,
             0);
  if ( result >= 0 ) /*0x49fc15*/
  {
    result = (*(int (__stdcall **)(AbstractClass *, AbstractClass **, int, _DWORD))(*(_DWORD *)v3->__pad_0 + 12))( /*0x49fc22*/
               v3,
               &aP1,
               4,
               0);
    if ( result >= 0 ) /*0x49fc27*/
    {
      if ( (*(unsigned __int8 (__thiscall **)(_DWORD *, AbstractClass *, _DWORD))(*this + 8))(this, aP1, 0) ) /*0x49fc33*/
      {
        v5 = 0; /*0x49fc4a*/
        if ( (int)aP1 <= 0 ) /*0x49fc4e*/
        {
          return 0; /*0x49fc6d*/
        }
        else
        {
          while ( 1 ) /*0x49fc5d*/
          {
            result = (*(int (__stdcall **)(AbstractClass *, int, int, _DWORD))(*(_DWORD *)v3->__pad_0 + 12))( /*0x49fc5d*/
                       v3,
                       this->count + 4 * v5,
                       4,
                       0);
            if ( result < 0 ) /*0x49fc62*/
              break; /*0x49fc62*/
            if ( ++v5 >= (int)aP1 ) /*0x49fc6b*/
              return 0; /*0x49fc6b*/
          }
        }
      }
      else
      {
        return 8; /*0x49fc3d*/
      }
    }
  }
  return result; /*0x49fc3a*/
}


// ==== 0x0049FCE0  CounterClass::QueryInterface  this=CounterClass  sig=csp ====
CounterClass *__thiscall CounterClass::QueryInterface(_DWORD *Block, char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x49fce3*/
  *Block = &vt_VectorClass_int; /*0x49fce6*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x49fcf0*/
  {
    __3_YAXPAX_Z(v3); /*0x49fcf8*/
    *(Block + 1) = 0; /*0x49fd00*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x49fd0b*/
  *(Block + 2) = 0; /*0x49fd11*/
  if ( (a2 & 1) != 0 ) /*0x49fd18*/
    __3_YAXPAX_Z(Block); /*0x49fd1b*/
  return (CounterClass *)Block; /*0x49fd25*/
}


// ==== 0x0049FD30  sub_49FD30  this=-  sig=ida-proto ====
int sub_49FD30()
{
  MEMORY[0x89F768] = 0; /*0x49fd32*/
  MEMORY[0x89F76C] = 0; /*0x49fd37*/
  MEMORY[0x89F770] = 0; /*0x49fd3c*/
  MEMORY[0x89F774] = 0; /*0x49fd41*/
  return 0; /*0x49fd46*/
}


// ==== 0x0049FD50  sub_49FD50  this=-  sig=ida-proto ====
void sub_49FD50()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x49fd5c*/
  MEMORY[0x89F780] = Math::Sqrt(v0 + v0); /*0x49fd6e*/
}


// ==== 0x0049FD80  sub_49FD80  this=-  sig=ida-proto ====
void sub_49FD80()
{
  MEMORY[0x89F7D0] = MEMORY[0x89F780] / 60.0; /*0x49fd8c*/
}


// ==== 0x0049FDA0  sub_49FDA0  this=-  sig=ida-proto ====
void sub_49FDA0()
{
  MEMORY[0x89F7B8] = 1.0 / MEMORY[0x89F7D0]; /*0x49fdac*/
}


// ==== 0x0049FDC0  sub_49FDC0  this=-  sig=ida-proto ====
void sub_49FDC0()
{
  MEMORY[0x89F7B0] = 0.0174532925199433 * 45.0; /*0x49fdcc*/
}


// ==== 0x0049FDE0  sub_49FDE0  this=-  sig=ida-proto ====
void sub_49FDE0()
{
  MEMORY[0x89F788] = 0.0174532925199433 * 60.0; /*0x49fdec*/
}


// ==== 0x0049FE00  sub_49FE00  this=-  sig=ida-proto ====
void sub_49FE00()
{
  MEMORY[0x89F760] = 0.0174532925199433 * 90.0; /*0x49fe0c*/
}


// ==== 0x0049FE20  sub_49FE20  this=-  sig=ida-proto ====
__int64 sub_49FE20()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(MEMORY[0x89F760] - MEMORY[0x89F788]); /*0x49fe32*/
  result = Math::RoundToInt(v0 * MEMORY[0x89F780] * 0.5); /*0x49fe46*/
  MEMORY[0x89F7D8] = result; /*0x49fe4b*/
  return result; /*0x49fe50*/
}


// ==== 0x0049FE60  sub_49FE60  this=-  sig=ida-proto ====
void sub_49FE60()
{
  MEMORY[0x89F790] = Math::ArcTan((double)MEMORY[0x89F7D8] * 0.00390625); /*0x49fe77*/
}


// ==== 0x0049FE90  sub_49FE90  this=-  sig=ida-proto ====
void sub_49FE90()
{
  MEMORY[0x89F7A8] = Math::ArcTan((double)(2 * MEMORY[0x89F7D8]) / MEMORY[0x89F780]); /*0x49feb2*/
}


// ==== 0x0049FEC0  sub_49FEC0  this=-  sig=ida-proto ====
__int64 sub_49FEC0()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * MEMORY[0x89F7D8]) + 0.5); /*0x49fedb*/
  MEMORY[0x89F7CC] = result; /*0x49fee0*/
  return result; /*0x49fee6*/
}


// ==== 0x0049FEF0  sub_49FEF0  this=-  sig=ida-proto ====
int sub_49FEF0()
{
  MEMORY[0x89F778] = 0; /*0x49fef2*/
  MEMORY[0x89F77A] = 0; /*0x49fef8*/
  return 0; /*0x49fefe*/
}


// ==== 0x0049FF00  sub_49FF00  this=-  sig=ida-proto ====
int sub_49FF00()
{
  MEMORY[0x89F798] = 0; /*0x49ff02*/
  MEMORY[0x89F79C] = 0; /*0x49ff07*/
  MEMORY[0x89F7A0] = 0; /*0x49ff0c*/
  return 0; /*0x49ff11*/
}


// ==== 0x0049FF20  sub_49FF20  this=-  sig=ida-proto ====
int sub_49FF20()
{
  MEMORY[0x89F7C8] = 0; /*0x49ff25*/
  MEMORY[0x89F7C0] = 128; /*0x49ff2f*/
  MEMORY[0x89F7C4] = 128; /*0x49ff34*/
  return 128; /*0x49ff39*/
}


// ==== 0x0049FF80  EnumConnectionsClass::QueryInterface  this=EnumConnectionsClass  sig=csp ====
int __stdcall EnumConnectionsClass::_vt00(int a1, const void *a2, _DWORD *a3)
{
  if ( !a3 ) /*0x49ff87*/
    return -2147467261; /*0x49ff89*/
  *a3 = 0; /*0x49ffa6*/
  if ( !memcmp(a2, &IID_IUnknown, 0x10u) ) /*0x49ffb0*/
    *a3 = a1; /*0x49ffb4*/
  if ( !memcmp(a2, &unk_7F7CB0, 0x10u) ) /*0x49ffc4*/
    *a3 = a1; /*0x49ffca*/
  if ( !*a3 ) /*0x49ffcc*/
    return -2147467262; /*0x49ffdd*/
  (*(void (__stdcall **)(int))(*(_DWORD *)a1 + 4))(a1); /*0x49ffd4*/
  return 0; /*0x49ff8e*/
}


// ==== 0x0049FFF0  EnumConnectionsClass::AddRef  this=EnumConnectionsClass  sig=csp ====
LONG __stdcall EnumConnectionsClass::_vt01(int a1)
{
  ++g_BulletClassPool; /*0x49ffff*/
  return InterlockedIncrement((volatile LONG *)(a1 + 32)); /*0x4a000b*/
}

