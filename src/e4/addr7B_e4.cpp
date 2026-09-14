// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/E4Recv_7B2E50_e4.hpp"
#include "e4/classes/E4Recv_7B39D0_e4.hpp"
#include "e4/classes/E4Recv_7B46F0_e4.hpp"
#include "e4/classes/E4Recv_7B4AC0_e4.hpp"
#include "e4/classes/E4Recv_7B4B50_e4.hpp"
#include "e4/classes/E4Recv_7B50F0_e4.hpp"
#include "e4/classes/E4Recv_7B5360_e4.hpp"
#include "e4/classes/E4Recv_7B53B0_e4.hpp"
#include "e4/classes/E4Recv_7B5410_e4.hpp"
#include "e4/classes/E4Recv_7B54D0_e4.hpp"
#include "e4/classes/E4Recv_7B5640_e4.hpp"
#include "e4/classes/E4Recv_7B5C50_e4.hpp"
#include "e4/classes/E4Recv_7B5CA0_e4.hpp"
#include "e4/classes/E4Recv_7B60E0_e4.hpp"
#include "e4/classes/E4Recv_7B6280_e4.hpp"
#include "e4/classes/E4Recv_7B69F0_e4.hpp"
#include "e4/classes/E4Recv_7B6A60_e4.hpp"
#include "e4/classes/E4Recv_7B6EE0_e4.hpp"
#include "e4/classes/E4Recv_7B70B0_e4.hpp"
#include "e4/classes/E4Recv_7B7C00_e4.hpp"
#include "e4/classes/E4Recv_7B8250_e4.hpp"
#include "e4/classes/E4Recv_7B9530_e4.hpp"
#include "e4/classes/E4Recv_7B9DF0_e4.hpp"
#include "e4/classes/E4Recv_7BC640_e4.hpp"
#include "e4/classes/E4Recv_7BC660_e4.hpp"
#include "e4/classes/E4Recv_7BC680_e4.hpp"
#include "e4/classes/E4Recv_7BC6A0_e4.hpp"
#include "e4/classes/E4Recv_7BC6C0_e4.hpp"
#include "e4/classes/E4Recv_7BC6F0_e4.hpp"
#include "e4/classes/E4Recv_7BC720_e4.hpp"
#include "e4/classes/E4Recv_7BC8C0_e4.hpp"
#include "e4/classes/E4Recv_7BC8F0_e4.hpp"
#include "e4/classes/E4Recv_7BC920_e4.hpp"
#include "e4/classes/E4Recv_7BCA50_e4.hpp"
#include "e4/classes/E4Recv_7BEA40_e4.hpp"
#include "e4/classes/E4Recv_7BEFE0_e4.hpp"
#include "e4/classes/E4Recv_7BF0B0_e4.hpp"
#include "e4/classes/E4Recv_7BF140_e4.hpp"
#include "e4/classes/E4Recv_7BF190_e4.hpp"

// 0x7B0310
namespace gamemd {
CCINIClass * sub_7B0310()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
CCINIClass *sub_7B0310()
{
  return dword_B77F54; /*0x7b0315*/
}
}
} // namespace gamemd

// 0x7B0340
namespace gamemd {
CCINIClass * sub_7B0340()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
CCINIClass *sub_7B0340()
{
  return dword_B77F60; /*0x7b0345*/
}
}
} // namespace gamemd

// 0x7B05C0
namespace gamemd {
char Screenshot_Compress(int * a1, int * a2, void * Src)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __fastcall Screenshot_Compress(int *a1, int *a2, void *Src)
{
  int v5; // ebx
  int v6; // eax
  __int16 v7; // ax
  int v8; // edx
  __int16 v9; // ax
  int v10; // edx
  int v11; // eax
  int v12; // eax
  int v13; // edx
  int v14; // eax
  __int16 v15; // ax
  int v16; // edx
  size_t v17; // eax
  void *v18; // eax
  int v19; // edx
  size_t v20; // eax
  size_t v21; // eax
  void *v22; // eax
  int v23; // edx
  int v24; // eax
  char *v25; // ebx
  int v26; // edx
  _BYTE *v27; // edi
  unsigned __int16 v28; // bx
  char v29; // al
  char v30; // dl
  int v31; // eax
  int v32; // edi
  int v33; // edi
  char *v35; // edi
  char v36; // al
  char v37; // dl
  char v38; // cl
  int v39; // edx
  int v40; // edx
  int v41; // edx
  int v42; // [esp+30h] [ebp-3C0h]
  char v43; // [esp+43h] [ebp-3ADh] BYREF
  char v44; // [esp+44h] [ebp-3ACh] BYREF
  char v45; // [esp+45h] [ebp-3ABh]
  char v46; // [esp+46h] [ebp-3AAh] BYREF
  char v47; // [esp+47h] [ebp-3A9h] BYREF
  int v48; // [esp+48h] [ebp-3A8h]
  void *v49; // [esp+4Ch] [ebp-3A4h]
  int v50; // [esp+50h] [ebp-3A0h]
  void *v51; // [esp+54h] [ebp-39Ch]
  unsigned __int16 *v52; // [esp+58h] [ebp-398h]
  void *Block; // [esp+5Ch] [ebp-394h]
  _BYTE v54[4]; // [esp+60h] [ebp-390h] BYREF
  __int16 v55; // [esp+64h] [ebp-38Ch]
  __int16 v56; // [esp+66h] [ebp-38Ah]
  __int16 v57; // [esp+68h] [ebp-388h]
  unsigned __int16 v58; // [esp+6Ah] [ebp-386h]
  __int16 v59; // [esp+6Ch] [ebp-384h]
  __int16 v60; // [esp+6Eh] [ebp-382h]
  char v61; // [esp+70h] [ebp-380h]
  char v62; // [esp+71h] [ebp-37Fh]
  char v63; // [esp+72h] [ebp-37Eh]
  char v64; // [esp+73h] [ebp-37Dh]
  char v65; // [esp+74h] [ebp-37Ch]
  char v66; // [esp+75h] [ebp-37Bh]
  char v67; // [esp+76h] [ebp-37Ah]
  char v68; // [esp+77h] [ebp-379h]
  char v69; // [esp+78h] [ebp-378h]
  char v70; // [esp+79h] [ebp-377h]
  char v71; // [esp+7Ah] [ebp-376h]
  char v72; // [esp+7Bh] [ebp-375h]
  char v73; // [esp+7Ch] [ebp-374h]
  char v74; // [esp+7Dh] [ebp-373h]
  char v75; // [esp+7Eh] [ebp-372h]
  char v76; // [esp+7Fh] [ebp-371h]
  char v77; // [esp+80h] [ebp-370h]
  char v78; // [esp+81h] [ebp-36Fh]
  char v79; // [esp+82h] [ebp-36Eh]
  char v80; // [esp+83h] [ebp-36Dh]
  char v81; // [esp+84h] [ebp-36Ch]
  char v82; // [esp+85h] [ebp-36Bh]
  char v83; // [esp+86h] [ebp-36Ah]
  char v84; // [esp+87h] [ebp-369h]
  char v85; // [esp+88h] [ebp-368h]
  char v86; // [esp+89h] [ebp-367h]
  char v87; // [esp+8Ah] [ebp-366h]
  char v88; // [esp+8Bh] [ebp-365h]
  char v89; // [esp+8Ch] [ebp-364h]
  char v90; // [esp+8Dh] [ebp-363h]
  int v91; // [esp+8Eh] [ebp-362h]
  char v92; // [esp+92h] [ebp-35Eh]
  char v93; // [esp+93h] [ebp-35Dh]
  char v94; // [esp+94h] [ebp-35Ch]
  char v95; // [esp+95h] [ebp-35Bh]
  char v96; // [esp+96h] [ebp-35Ah]
  char v97; // [esp+97h] [ebp-359h]
  char v98; // [esp+98h] [ebp-358h]
  char v99; // [esp+99h] [ebp-357h]
  char v100; // [esp+9Ah] [ebp-356h]
  char v101; // [esp+9Bh] [ebp-355h]
  char v102; // [esp+9Ch] [ebp-354h]
  char v103; // [esp+9Dh] [ebp-353h]
  char v104; // [esp+9Eh] [ebp-352h]
  char v105; // [esp+9Fh] [ebp-351h]
  char v106; // [esp+A0h] [ebp-350h]
  char v107; // [esp+A1h] [ebp-34Fh]
  unsigned __int16 v108; // [esp+A2h] [ebp-34Eh]
  __int16 v109; // [esp+A4h] [ebp-34Ch]
  __int16 v110; // [esp+A6h] [ebp-34Ah]
  __int16 v111; // [esp+A8h] [ebp-348h]
  char v112; // [esp+AAh] [ebp-346h]
  _BYTE v113[53]; // [esp+ABh] [ebp-345h] BYREF
  int v114; // [esp+E0h] [ebp-310h]
  int v115; // [esp+E4h] [ebp-30Ch]
  char *v116; // [esp+E8h] [ebp-308h]
  _BYTE v117[768]; // [esp+F0h] [ebp-300h] BYREF

  v5 = 0; /*0x7b05cd*/
  v6 = *a2; /*0x7b05cf*/
  v54[0] = 10; /*0x7b05d4*/
  v54[1] = 5; /*0x7b05d9*/
  v54[2] = 1; /*0x7b05de*/
  v54[3] = 8; /*0x7b05e3*/
  v55 = 0; /*0x7b05e8*/
  v56 = 0; /*0x7b05ed*/
  v7 = (*(int (__thiscall **)(int *))(v6 + 124))(a2); /*0x7b05f2*/
  v8 = *a2; /*0x7b05f5*/
  v57 = v7 - 1; /*0x7b05fa*/
  v58 = (*(int (__thiscall **)(int *))(v8 + 128))(a2) - 1; /*0x7b0608*/
  v9 = (*(int (__thiscall **)(int *))(*a2 + 124))(a2); /*0x7b060f*/
  v10 = *a2; /*0x7b0612*/
  v59 = v9; /*0x7b0616*/
  v60 = (*(int (__thiscall **)(int *))(v10 + 128))(a2); /*0x7b0621*/
  v11 = *a2; /*0x7b0626*/
  v61 = 0; /*0x7b0628*/
  v62 = 0; /*0x7b062c*/
  v63 = 0; /*0x7b0630*/
  v64 = 0; /*0x7b0634*/
  v65 = 0; /*0x7b0638*/
  v66 = 0; /*0x7b063c*/
  v67 = 0; /*0x7b0640*/
  v68 = 0; /*0x7b0644*/
  v69 = 0; /*0x7b0648*/
  v70 = 0; /*0x7b064c*/
  v71 = 0; /*0x7b0650*/
  v72 = 0; /*0x7b0654*/
  v73 = 0; /*0x7b0658*/
  v74 = 0; /*0x7b065c*/
  v75 = 0; /*0x7b0660*/
  v76 = 0; /*0x7b0664*/
  v77 = 0; /*0x7b0668*/
  v78 = 0; /*0x7b066c*/
  v79 = 0; /*0x7b0670*/
  v80 = 0; /*0x7b0674*/
  v81 = 0; /*0x7b0678*/
  v82 = 0; /*0x7b067c*/
  v83 = 0; /*0x7b0680*/
  v84 = 0; /*0x7b0684*/
  v85 = 0; /*0x7b0688*/
  v86 = 0; /*0x7b068c*/
  v87 = 0; /*0x7b0690*/
  v88 = 0; /*0x7b0694*/
  v89 = 0; /*0x7b0698*/
  v90 = 0; /*0x7b069c*/
  v91 = 0; /*0x7b06a0*/
  v92 = 0; /*0x7b06b0*/
  v93 = 0; /*0x7b06b4*/
  v94 = 0; /*0x7b06b8*/
  v95 = 0; /*0x7b06bc*/
  v96 = 0; /*0x7b06c0*/
  v97 = 0; /*0x7b06c4*/
  v98 = 0; /*0x7b06c8*/
  v99 = 0; /*0x7b06cc*/
  v100 = 0; /*0x7b06d0*/
  v101 = 0; /*0x7b06d4*/
  v102 = 0; /*0x7b06d8*/
  v103 = 0; /*0x7b06dc*/
  v104 = 0; /*0x7b06e0*/
  v105 = 0; /*0x7b06e4*/
  v106 = 0; /*0x7b06e8*/
  v12 = (*(int (__thiscall **)(int *))(v11 + 112))(a2); /*0x7b06ee*/
  v13 = *a2; /*0x7b06f4*/
  v107 = v12 != 2 ? 1 : 3;
  v108 = (*(int (__thiscall **)(int *))(v13 + 124))(a2); /*0x7b0707*/
  v14 = *a2; /*0x7b070c*/
  v109 = 1; /*0x7b0710*/
  v15 = (*(int (__thiscall **)(int *))(v14 + 124))(a2); /*0x7b0717*/
  v16 = *a2; /*0x7b071a*/
  v110 = v15; /*0x7b071e*/
  v111 = (*(int (__thiscall **)(int *))(v16 + 128))(a2); /*0x7b0729*/
  v112 = 0; /*0x7b0739*/
  v45 = 0; /*0x7b073d*/
  memset(v113, 0, sizeof(v113)); /*0x7b0741*/
  if ( !(*(unsigned __int8 (__thiscall **)(int *))(*a1 + 24))(a1) ) /*0x7b0749*/
  {
    (*(void (__thiscall **)(int *, int))(*a1 + 28))(a1, 2); /*0x7b0757*/
    v45 = 1; /*0x7b075a*/
  }
  (*(void (__thiscall **)(int *, _BYTE *, int))(*a1 + 48))(a1, v54, 128); /*0x7b076e*/
  if ( (*(int (__thiscall **)(int *))(*a2 + 112))(a2) != 2 ) /*0x7b077b*/
  {
    if ( v58 + 1 <= 0 ) /*0x7b097c*/
      goto LABEL_33; /*0x7b097c*/
    v116 = 0; /*0x7b0982*/
    while ( 1 ) /*0x7b0999*/
    {
      v35 = (char *)(*(int (__thiscall **)(int *, char *, int))(*a2 + 92))(a2, v116, v5); /*0x7b0999*/
      v36 = 1; /*0x7b099b*/
      v37 = *v35; /*0x7b09a1*/
      v43 = *v35; /*0x7b09ac*/
      if ( v108 > 1u ) /*0x7b09b0*/
      {
        v48 = v108 - 1; /*0x7b09b7*/
        do /*0x7b0a3a*/
        {
          v38 = *++v35; /*0x7b09bb*/
          v46 = v38; /*0x7b09c1*/
          if ( v38 == v37 ) /*0x7b09c5*/
          {
            if ( ++v36 == 47 ) /*0x7b09cb*/
            {
              (*(void (__thiscall **)(int *, char *, int))(*a1 + 48))(a1, &byte_7F7930, 1); /*0x7b09d9*/
              (*(void (__thiscall **)(int *, char *, int))(*a1 + 48))(a1, &v46, 1); /*0x7b09e8*/
              v36 = 0; /*0x7b09eb*/
              v37 = v43; /*0x7b09ed*/
            }
          }
          else
          {
            if ( v36 ) /*0x7b09f5*/
            {
              if ( v36 != 1 || (v37 & 0xC0) == 0xC0 ) /*0x7b0a01*/
              {
                v39 = *a1; /*0x7b0a03*/
                v44 = v36 | 0xC0; /*0x7b0a08*/
                (*(void (__thiscall **)(int *, char *, int))(v39 + 48))(a1, &v44, 1); /*0x7b0a15*/
              }
              (*(void (__thiscall **)(int *, char *, int))(*a1 + 48))(a1, &v43, 1); /*0x7b0a24*/
            }
            v37 = v46; /*0x7b0a27*/
            v36 = 1; /*0x7b0a2b*/
            v43 = v46; /*0x7b0a2d*/
          }
          --v48; /*0x7b0a36*/
        }
        while ( v48 ); /*0x7b0a3a*/
        if ( !v36 ) /*0x7b0a42*/
          goto LABEL_32; /*0x7b0a42*/
        if ( v36 != 1 ) /*0x7b0a46*/
          goto LABEL_30; /*0x7b0a46*/
      }
      if ( (v37 & 0xC0) == 0xC0 ) /*0x7b0a4e*/
      {
LABEL_30:
        v40 = *a1; /*0x7b0a50*/
        v44 = v36 | 0xC0; /*0x7b0a55*/
        (*(void (__thiscall **)(int *, char *, int))(v40 + 48))(a1, &v44, 1); /*0x7b0a62*/
      }
      (*(void (__thiscall **)(int *, char *, int))(*a1 + 48))(a1, &v43, 1); /*0x7b0a71*/
LABEL_32:
      (*(void (__thiscall **)(int *))(*a2 + 96))(a2); /*0x7b0a74*/
      if ( ++v5 >= v58 + 1 ) /*0x7b0a88*/
        goto LABEL_33; /*0x7b0a88*/
    }
  }
  v17 = (*(int (__thiscall **)(int *))(*a2 + 124))(a2); /*0x7b0785*/
  v18 = __2_YAPAXI_Z(v17); /*0x7b0789*/
  v19 = *a2; /*0x7b078e*/
  Block = v18; /*0x7b0795*/
  v20 = (*(int (__thiscall **)(int *))(v19 + 124))(a2); /*0x7b0799*/
  v49 = __2_YAPAXI_Z(v20); /*0x7b07a2*/
  v21 = (*(int (__thiscall **)(int *))(*a2 + 124))(a2); /*0x7b07ad*/
  v22 = __2_YAPAXI_Z(v21); /*0x7b07b1*/
  v23 = *a2; /*0x7b07b6*/
  v51 = v22; /*0x7b07bd*/
  v24 = (*(int (__thiscall **)(int *))(v23 + 124))(a2); /*0x7b07c1*/
  v25 = (char *)__2_YAPAXI_Z(10 * v24); /*0x7b07dc*/
  v116 = v25; /*0x7b07df*/
  v50 = 0; /*0x7b07e8*/
  if ( v58 + 1 <= 0 ) /*0x7b07f0*/
  {
LABEL_11:
    __3_YAXPAX_Z(Block); /*0x7b0934*/
    __3_YAXPAX_Z(v49); /*0x7b0943*/
    __3_YAXPAX_Z(v51); /*0x7b094d*/
    __3_YAXPAX_Z(v25); /*0x7b0953*/
LABEL_33:
    v41 = *a1; /*0x7b0a8e*/
    v47 = 12; /*0x7b0a9a*/
    (*(void (__thiscall **)(int *, char *, int))(v41 + 48))(a1, &v47, 1); /*0x7b0a9f*/
    if ( (*(int (__thiscall **)(int *))(*a2 + 112))(a2) == 1 ) /*0x7b0aac*/
    {
      memcpy(v117, Src, sizeof(v117)); /*0x7b0ac3*/
      (*(void (__thiscall **)(int *, _BYTE *, int))(*a1 + 48))(a1, v117, 768); /*0x7b0add*/
    }
    if ( v45 ) /*0x7b0ae6*/
      (*(void (__thiscall **)(int *))(*a1 + 52))(a1); /*0x7b0aed*/
    return 0; /*0x7b0af3*/
  }
  while ( 1 ) /*0x7b0807*/
  {
    v52 = (unsigned __int16 *)(*(int (__thiscall **)(int *, _DWORD, int))(*a2 + 92))(a2, 0, v50); /*0x7b0807*/
    if ( !v52 ) /*0x7b080b*/
      return 1; /*0x7b0960*/
    v26 = *a2; /*0x7b0811*/
    v48 = 0; /*0x7b0815*/
    if ( (*(int (__thiscall **)(int *))(v26 + 124))(a2) > 0 ) /*0x7b0822*/
    {
      v27 = v49; /*0x7b0828*/
      v114 = (_BYTE *)Block - (_BYTE *)v49; /*0x7b0834*/
      v115 = (_BYTE *)v51 - (_BYTE *)v49; /*0x7b0841*/
      do /*0x7b08b9*/
      {
        v28 = *v52++; /*0x7b0853*/
        v29 = (unsigned __int8)(v28 >> MEMORY[0x8A0DD0]) << MEMORY[0x8A0DD4]; /*0x7b086a*/
        v30 = (unsigned __int8)(v28 >> MEMORY[0x8A0DE0]) << MEMORY[0x8A0DE4]; /*0x7b087c*/
        LOBYTE(v28) = (unsigned __int8)(v28 >> MEMORY[0x8A0DD8]) << MEMORY[0x8A0DDC]; /*0x7b088e*/
        v27[v114] = v29; /*0x7b0897*/
        *v27 = v30; /*0x7b089a*/
        v27[v115] = v28; /*0x7b08a5*/
        v31 = *a2; /*0x7b08ac*/
        ++v48; /*0x7b08af*/
        ++v27; /*0x7b08b3*/
      }
      while ( v48 < (*(int (__thiscall **)(int *))(v31 + 124))(a2) ); /*0x7b08b9*/
      v25 = v116; /*0x7b08bb*/
    }
    (*(void (__thiscall **)(int *))(*a2 + 96))(a2); /*0x7b08c6*/
    (*(void (__thiscall **)(int *, char *))(*a2 + 124))(a2, v25); /*0x7b08ce*/
    v32 = EncodeScreenshotRLE(v42); /*0x7b08de*/
    (*(void (__thiscall **)(int *))(*a2 + 124))(a2); /*0x7b08e6*/
    v33 = EncodeScreenshotRLE(&v25[v32]) + v32; /*0x7b08f6*/
    (*(void (__thiscall **)(int *))(*a2 + 124))(a2); /*0x7b08fe*/
    v42 = EncodeScreenshotRLE(&v25[v33]) + v33; /*0x7b0911*/
    (*(void (__thiscall **)(int *, char *))(*a1 + 48))(a1, v25); /*0x7b0915*/
    if ( ++v50 >= v58 + 1 ) /*0x7b092e*/
      goto LABEL_11; /*0x7b092e*/
  }
}
}
} // namespace gamemd

// 0x7B0B00
namespace gamemd {
int Screenshot_EncodeRLE(int a1, char * a2, int a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __fastcall Screenshot_EncodeRLE(int a1, char *a2, int a3)
{
  int result; // eax
  char v5; // dl
  char v6; // bl
  int v7; // ebp
  char v8; // cl
  int v9; // eax
  int v10; // eax

  result = 0; /*0x7b0b09*/
  v5 = 1; /*0x7b0b0e*/
  v6 = *a2; /*0x7b0b10*/
  if ( a1 <= 1 ) /*0x7b0b12*/
  {
LABEL_15:
    if ( (v6 & 0xC0) != 0xC0 ) /*0x7b0b82*/
    {
LABEL_17:
      *(_BYTE *)(result + a3) = v6; /*0x7b0b8b*/
      return ++result; /*0x7b0b8e*/
    }
LABEL_16:
    *(_BYTE *)(result + a3) = v5 | 0xC0; /*0x7b0b84*/
    ++result; /*0x7b0b8a*/
    goto LABEL_17; /*0x7b0b8a*/
  }
  v7 = a1 - 1; /*0x7b0b15*/
  do /*0x7b0b6e*/
  {
    v8 = *++a2; /*0x7b0b18*/
    if ( v8 == v6 ) /*0x7b0b22*/
    {
      if ( ++v5 == 47 ) /*0x7b0b29*/
      {
        *(_BYTE *)(result + a3) = -17; /*0x7b0b31*/
        v9 = result + 1; /*0x7b0b34*/
        *(_BYTE *)(v9 + a3) = v8; /*0x7b0b35*/
        result = v9 + 1; /*0x7b0b38*/
        v5 = 0; /*0x7b0b39*/
      }
    }
    else
    {
      if ( v5 ) /*0x7b0b3f*/
      {
        if ( v5 != 1 || (v6 & 0xC0) == 0xC0 ) /*0x7b0b4e*/
        {
          *(_BYTE *)(result + a3) = v5 | 0xC0; /*0x7b0b61*/
          v10 = result + 1; /*0x7b0b64*/
          *(_BYTE *)(v10 + a3) = v6; /*0x7b0b65*/
          result = v10 + 1; /*0x7b0b68*/
        }
        else
        {
          *(_BYTE *)(result + a3) = v6; /*0x7b0b54*/
          ++result; /*0x7b0b57*/
        }
      }
      v6 = v8; /*0x7b0b69*/
      v5 = 1; /*0x7b0b6b*/
    }
    --v7; /*0x7b0b6d*/
  }
  while ( v7 ); /*0x7b0b6e*/
  if ( v5 ) /*0x7b0b73*/
  {
    if ( v5 != 1 ) /*0x7b0b78*/
      goto LABEL_16; /*0x7b0b78*/
    goto LABEL_15; /*0x7b0b78*/
  }
  return result; /*0x7b0b8f*/
}
}
} // namespace gamemd

// 0x7B2E50
namespace gamemd {
void E4Recv_7B2E50::sub_7B2E50()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __thiscall sub_7B2E50(int this)
{
  int v2; // eax
  int v3; // ecx
  int v4; // eax
  int v5; // eax
  int v6; // ecx
  int v7; // eax
  void *v8; // eax
  void *v9; // eax

  *(_DWORD *)this = &vt_UDPInterfaceClass; /*0x7b2e56*/
  while ( this->M258888 ) /*0x7b2e5c*/
  {
    __3_YAXPAX_Z(**(void ***)(this + 258876)); /*0x7b2e6f*/
    v2 = this->M258888; /*0x7b2e74*/
    if ( v2 > 0 ) /*0x7b2e7f*/
    {
      v3 = v2 - 1; /*0x7b2e81*/
      v4 = 0; /*0x7b2e84*/
      for ( this->M258888 = v3; /*0x7b2e8e*/
            v4 < this->M258888;
            *(_DWORD *)(this->M258876 + 4 * v4 - 4) = *(_DWORD *)(this->M258876 + 4 * v4) )
      {
        ++v4; /*0x7b2e96*/
      }
    }
  }
  while ( this->M259424 ) /*0x7b2eb0*/
  {
    __3_YAXPAX_Z(**(void ***)(this + 259412)); /*0x7b2ec1*/
    v5 = this->M259424; /*0x7b2ec6*/
    if ( v5 > 0 ) /*0x7b2ed1*/
    {
      v6 = v5 - 1; /*0x7b2ed3*/
      v7 = 0; /*0x7b2ed6*/
      for ( this->M259424 = v6; /*0x7b2ee0*/
            v7 < this->M259424;
            *(_DWORD *)(this->M259412 + 4 * v7 - 4) = *(_DWORD *)(this->M259412 + 4 * v7) )
      {
        ++v7; /*0x7b2ee8*/
      }
    }
  }
  UDPInterfaceClass::connect((_BYTE *)this); /*0x7b2f04*/
  v8 = *(void **)(this + 259412); /*0x7b2f09*/
  this->M259408 = &vt_VectorClass_unsigned_char; /*0x7b2f0f*/
  if ( v8 && (unsigned char)this->M259421 ) /*0x7b2f1d*/
  {
    __3_YAXPAX_Z(v8); /*0x7b2f26*/
    this->M259412 = 0; /*0x7b2f2e*/
  }
  *(_BYTE *)(this + 259421) = 0; /*0x7b2f34*/
  this->M259416 = 0; /*0x7b2f3a*/
  v9 = *(void **)(this + 258876); /*0x7b2f40*/
  this->M258872 = &vt_VectorClass_unsigned_char; /*0x7b2f46*/
  if ( v9 && (unsigned char)this->M258885 ) /*0x7b2f54*/
  {
    __3_YAXPAX_Z(v9); /*0x7b2f5d*/
    this->M258876 = 0; /*0x7b2f65*/
  }
  *(_BYTE *)(this + 258885) = 0; /*0x7b2f6d*/
  this->M258880 = 0; /*0x7b2f73*/
  WinsockInterfaceClass::WinsockInterfaceClass(this); /*0x7b2f79*/
}
}
} // namespace gamemd

// 0x7B4620
namespace gamemd {
int unknown_libname_73()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
// Microsoft VisualC 2-14/net runtime
_DWORD *__thiscall unknown_libname_73(_DWORD *this)
{
  *this = 0; /*0x7b4622*/
  return this; /*0x7b4628*/
}
}
} // namespace gamemd

// 0x7B60E0
namespace gamemd {
int E4Recv_7B60E0::sub_7B60E0(signed int a2, void ** a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall sub_7B60E0(const char **this, signed int a2, void **a3)
{
  signed int v5; // esi
  signed int v6; // ecx
  signed int v8; // ecx
  const char *v9; // eax
  const char *v10; // esi
  size_t v11; // ecx
  _BYTE *v12; // eax
  const char *v13; // edi
  size_t v14; // esi
  char *v15; // eax
  char *v16; // ebp
  const char *v17; // esi
  size_t v18; // ecx
  _BYTE *v19; // eax
  signed int v20; // [esp+14h] [ebp+4h]

  v5 = a2; /*0x7b60ec*/
  if ( *this ) /*0x7b60ea*/
    v6 = strlen(*this); /*0x7b60ff*/
  else
    v6 = 0; /*0x7b60f2*/
  if ( a2 >= v6 ) /*0x7b6102*/
    return -1; /*0x7b6107*/
  while ( 1 )
  {
    v8 = *this ? strlen(*this) : 0;
    if ( v5 >= v8 || strchr(String2, (*this)[v5]) ) /*0x7b6132*/
      break; /*0x7b6132*/
    ++v5; /*0x7b613e*/
  }
  v9 = *this; /*0x7b6141*/
  v20 = v5; /*0x7b6143*/
  if ( (*this)[v5] == 13 && v9[v5 + 1] == 10 ) /*0x7b6152*/
    v20 = v5 + 1; /*0x7b6155*/
  v10 = &v9[a2]; /*0x7b615d*/
  if ( *a3 ) /*0x7b6160*/
    __3_YAXPAX_Z(*a3); /*0x7b6167*/
  *a3 = 0; /*0x7b6171*/
  if ( v10 ) /*0x7b6177*/
    v11 = strlen(v10) + 1; /*0x7b6180*/
  else
    v11 = 1; /*0x7b6186*/
  v12 = __2_YAPAXI_Z(v11); /*0x7b618c*/
  *a3 = v12; /*0x7b6194*/
  *v12 = 0; /*0x7b6198*/
  if ( v10 ) /*0x7b619b*/
    strcpy((char *)*a3, v10); /*0x7b61b3*/
  v13 = &MEMORY[0x889F64]; /*0x7b61c4*/
  v14 = v20 - a2 + 1; /*0x7b61c9*/
  if ( *a3 ) /*0x7b61c0*/
    v13 = (const char *)*a3; /*0x7b61ce*/
  v15 = (char *)__2_YAPAXI_Z(v20 - a2 + 2); /*0x7b61d4*/
  v16 = v15; /*0x7b61d9*/
  *v15 = 0; /*0x7b61e0*/
  if ( v13 ) /*0x7b61e4*/
    strncpy(v15, v13, v14); /*0x7b61e9*/
  v16[v14] = 0; /*0x7b61f1*/
  v17 = &MEMORY[0x889F64]; /*0x7b61f5*/
  if ( v16 ) /*0x7b61fc*/
    v17 = v16; /*0x7b61fe*/
  if ( *a3 ) /*0x7b6200*/
    __3_YAXPAX_Z(*a3); /*0x7b6207*/
  *a3 = 0; /*0x7b6211*/
  if ( v17 ) /*0x7b6217*/
    v18 = strlen(v17) + 1; /*0x7b6220*/
  else
    v18 = 1; /*0x7b6226*/
  v19 = __2_YAPAXI_Z(v18); /*0x7b622c*/
  *a3 = v19; /*0x7b6234*/
  *v19 = 0; /*0x7b6238*/
  if ( v17 ) /*0x7b623b*/
    strcpy((char *)*a3, v17); /*0x7b6253*/
  if ( v16 ) /*0x7b625e*/
    __3_YAXPAX_Z(v16); /*0x7b6261*/
  return v20 + 1; /*0x7b6104*/
}
}
} // namespace gamemd

// 0x7B63C0
namespace gamemd {
char ** ProcessStringAndCopy(AbstractClass * aP0, CCINIClass * aP1, char ** a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char **__fastcall ProcessStringAndCopy(AbstractClass *aP0, CCINIClass *aP1, char **a2)
{
  size_t v5; // ecx
  CCINIClass *v6; // ebx
  char *v7; // eax
  const char *v8; // edi
  char *v9; // eax
  const char *v10; // edi
  void *Block; // [esp+10h] [ebp-4h] BYREF

  if ( aP1 ) /*0x7b63cb*/
    v5 = strlen(aP1->__pad_0) + 1; /*0x7b63d4*/
  else
    v5 = 1; /*0x7b63da*/
  v6 = (CCINIClass *)__2_YAPAXI_Z(v5); /*0x7b63e5*/
  v6->__pad_0[0] = 0; /*0x7b63ec*/
  if ( aP1 ) /*0x7b63ef*/
    strcpy(v6->__pad_0, aP1->__pad_0); /*0x7b6407*/
  Block = 0; /*0x7b6412*/
  if ( v6 ) /*0x7b641a*/
  {
    Block = (void *)__2_YAPAXI_Z(strlen(v6->__pad_0) + 1); /*0x7b6439*/
    strcpy((char *)Block, v6->__pad_0); /*0x7b644c*/
  }
  v7 = *a2; /*0x7b6459*/
  if ( !*a2 ) /*0x7b6459*/
    v7 = &stru_87C374.__pad_579C[33876]; /*0x7b645f*/
  String_Process_7B4A10((const char **)&Block, v7); /*0x7b6469*/
  v8 = (const char *)Block; /*0x7b646e*/
  *(_DWORD *)aP0->__pad_0 = 0; /*0x7b6472*/
  if ( v8 ) /*0x7b647b*/
  {
    v9 = (char *)__2_YAPAXI_Z(strlen(v8) + 1); /*0x7b6487*/
    v10 = (const char *)Block; /*0x7b648c*/
    *(_DWORD *)aP0->__pad_0 = v9; /*0x7b649a*/
    strcpy(v9, v10); /*0x7b64ac*/
    if ( Block ) /*0x7b64bb*/
      __3_YAXPAX_Z(Block); /*0x7b64be*/
  }
  if ( v6 ) /*0x7b64c8*/
    __3_YAXPAX_Z(v6); /*0x7b64cb*/
  return (char **)aP0; /*0x7b64d3*/
}
}
} // namespace gamemd

// 0x7B64E0
namespace gamemd {
char ** ConcatStringAlloc(ObjectClass * aP0, const char ** a1, char ** a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char **__fastcall ConcatStringAlloc(ObjectClass *aP0, const char **a1, char **a2)
{
  char **v4; // ebp
  char *v5; // ebx
  ObjectClass *v6; // eax
  ObjectClass *v7; // esi
  char *v8; // ebp
  unsigned int v9; // kr14_4
  size_t v10; // edx
  char *v11; // eax
  char *v12; // edx
  ObjectClass *a2a; // [esp+18h] [ebp+4h]

  v4 = (char **)aP0; /*0x7b64e7*/
  v5 = 0; /*0x7b64eb*/
  if ( *a1 ) /*0x7b64e9*/
  {
    v5 = (char *)__2_YAPAXI_Z(strlen(*a1) + 1); /*0x7b6506*/
    strcpy(v5, *a1); /*0x7b651f*/
  }
  v6 = (ObjectClass *)*a2; /*0x7b652c*/
  if ( *a2 ) /*0x7b652c*/
  {
    a2a = (ObjectClass *)*a2; /*0x7b653d*/
    v7 = v6; /*0x7b6541*/
  }
  else
  {
    v7 = (ObjectClass *)&stru_87C374.__pad_579C[33876]; /*0x7b6532*/
    a2a = (ObjectClass *)&stru_87C374.__pad_579C[33876]; /*0x7b6537*/
  }
  if ( v7 ) /*0x7b6545*/
  {
    v8 = v5; /*0x7b6552*/
    v9 = strlen(v7->__pad_0) + 1; /*0x7b6554*/
    v10 = v9; /*0x7b655b*/
    if ( v5 ) /*0x7b655e*/
      v10 = strlen(v5) + v9; /*0x7b656a*/
    v11 = (char *)__2_YAPAXI_Z(v10); /*0x7b656d*/
    v5 = v11; /*0x7b6575*/
    if ( v8 ) /*0x7b6579*/
    {
      strcpy(v11, v8); /*0x7b6591*/
      v7 = a2a; /*0x7b659a*/
    }
    else
    {
      *v11 = 0; /*0x7b65a0*/
    }
    strcat(v11, v7->__pad_0); /*0x7b65c1*/
    if ( v8 ) /*0x7b65cc*/
      __3_YAXPAX_Z(v8); /*0x7b65cf*/
    v4 = (char **)aP0; /*0x7b65d7*/
  }
  *v4 = 0; /*0x7b65dd*/
  if ( v5 ) /*0x7b65e4*/
  {
    v12 = (char *)__2_YAPAXI_Z(strlen(v5) + 1); /*0x7b65f7*/
    *v4 = v12; /*0x7b6600*/
    strcpy(v12, v5); /*0x7b6613*/
    __3_YAXPAX_Z(v5); /*0x7b661c*/
  }
  return v4; /*0x7b6624*/
}
}
} // namespace gamemd

// 0x7B66C0
namespace gamemd {
int unknown_libname_74()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
// Microsoft VisualC 2-14/net runtime
_DWORD *__thiscall unknown_libname_74(_DWORD *this)
{
  *this = 0; /*0x7b66c2*/
  return this; /*0x7b66c8*/
}
}
} // namespace gamemd

// 0x7B7C00
namespace gamemd {
int E4Recv_7B7C00::sub_7B7C00(int a2, void ** a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall sub_7B7C00(const wchar_t **this, int a2, void **a3)
{
  int v5; // esi
  const wchar_t *v6; // eax
  const wchar_t *v8; // eax
  const wchar_t *v9; // eax
  int v10; // esi
  const wchar_t *v11; // esi
  size_t v12; // eax
  _WORD *v13; // eax
  size_t v14; // esi
  const wchar_t *v15; // ebp
  wchar_t *v16; // eax
  wchar_t *v17; // ebx
  const wchar_t *v18; // esi
  size_t v19; // eax
  _WORD *v20; // eax
  int v21; // [esp+10h] [ebp+4h]

  v5 = a2; /*0x7b7c09*/
  v6 = *this; /*0x7b7c0b*/
  if ( *this ) /*0x7b7c0b*/
    v6 = (const wchar_t *)wcslen(*this); /*0x7b7c12*/
  if ( a2 >= (int)v6 ) /*0x7b7c1c*/
    return -1; /*0x7b7c20*/
  while ( 1 ) /*0x7b7c27*/
  {
    v8 = *this; /*0x7b7c27*/
    if ( *this ) /*0x7b7c27*/
      v8 = (const wchar_t *)wcslen(*this); /*0x7b7c2e*/
    if ( v5 >= (int)v8 || strchr(String2, (*this)[v5]) ) /*0x7b7c48*/
      break; /*0x7b7c48*/
    ++v5; /*0x7b7c54*/
  }
  v9 = *this; /*0x7b7c57*/
  v21 = v5; /*0x7b7c59*/
  if ( (*this)[v5] == 13 ) /*0x7b7c62*/
  {
    v10 = v5 + 1; /*0x7b7c64*/
    if ( v9[v10] == 10 ) /*0x7b7c6a*/
      v21 = v10; /*0x7b7c6c*/
  }
  v11 = &v9[a2]; /*0x7b7c74*/
  if ( *a3 ) /*0x7b7c77*/
    __3_YAXPAX_Z(*a3); /*0x7b7c7e*/
  *a3 = 0; /*0x7b7c88*/
  if ( v11 ) /*0x7b7c8e*/
    v12 = wcslen(v11) + 1; /*0x7b7c99*/
  else
    v12 = 1; /*0x7b7c9c*/
  v13 = __2_YAPAXI_Z(2 * v12); /*0x7b7ca5*/
  *a3 = v13; /*0x7b7cad*/
  *v13 = 0; /*0x7b7cb1*/
  if ( v11 ) /*0x7b7cb6*/
    wcscpy((wchar_t *)*a3, v11); /*0x7b7cbc*/
  v14 = v21 - a2 + 1; /*0x7b7ccd*/
  v15 = &MEMORY[0x887734]; /*0x7b7cce*/
  if ( *a3 ) /*0x7b7cc8*/
    v15 = (const wchar_t *)*a3; /*0x7b7cd7*/
  v16 = (wchar_t *)__2_YAPAXI_Z(2 * v14 + 2); /*0x7b7cde*/
  v17 = v16; /*0x7b7ce3*/
  *v16 = 0; /*0x7b7cea*/
  if ( v15 ) /*0x7b7cef*/
    wcsncpy(v16, v15, v14); /*0x7b7cf4*/
  v17[v14] = 0; /*0x7b7cfc*/
  v18 = &MEMORY[0x887734]; /*0x7b7d05*/
  if ( v17 ) /*0x7b7d0a*/
    v18 = v17; /*0x7b7d0c*/
  if ( *a3 ) /*0x7b7d0e*/
    __3_YAXPAX_Z(*a3); /*0x7b7d15*/
  *a3 = 0; /*0x7b7d1f*/
  if ( v18 ) /*0x7b7d25*/
    v19 = wcslen(v18) + 1; /*0x7b7d30*/
  else
    v19 = 1; /*0x7b7d33*/
  v20 = __2_YAPAXI_Z(2 * v19); /*0x7b7d3c*/
  *a3 = v20; /*0x7b7d44*/
  *v20 = 0; /*0x7b7d48*/
  if ( v18 ) /*0x7b7d4d*/
    wcscpy((wchar_t *)*a3, v18); /*0x7b7d53*/
  if ( v17 ) /*0x7b7d5d*/
    __3_YAXPAX_Z(v17); /*0x7b7d60*/
  return v21 + 1; /*0x7b7c1e*/
}
}
} // namespace gamemd

// 0x7B9530
namespace gamemd {
BOOL E4Recv_7B9530::sub_7B9530()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
BOOL __thiscall sub_7B9530(int this)
{
  int v2; // edi
  int v3; // ebx
  int v4; // ebp
  int v5; // eax
  int *FoundationSize; // eax
  int v7; // edi
  int v8; // edx
  int v9; // ebx
  int v10; // ecx
  int v11; // eax
  int v12; // ecx
  ObjectClass *v13; // ecx
  char *v14; // ebx
  int v15; // ecx
  int v17; // [esp-1Ch] [ebp-50h]
  _DWORD v18[4]; // [esp+4h] [ebp-30h] BYREF
  _DWORD v19[3]; // [esp+14h] [ebp-20h] BYREF
  int v20; // [esp+20h] [ebp-14h]
  _DWORD v21[4]; // [esp+24h] [ebp-10h] BYREF

  if ( WaitForSingleObject(hMutex, 0x2710u) == 258 ) /*0x7b954c*/
    Debug::Log(); /*0x7b955d*/
  if ( BSurface::CreateTripleBuffer(this) && this->M36 ) /*0x7b9574*/
  {
    v2 = 0; /*0x7b9585*/
    v3 = 0; /*0x7b9587*/
    v4 = 0; /*0x7b9589*/
    v5 = 0; /*0x7b958b*/
    if ( this->M4 ) /*0x7b957f*/
    {
      if ( WaitForSingleObject(hMutex, 0x2710u) == 258 ) /*0x7b95a8*/
        Debug::Log(); /*0x7b95b9*/
      FoundationSize = Building::GetFoundationSize(v21, this->M8); /*0x7b95cd*/
      v7 = *FoundationSize; /*0x7b95d2*/
      v8 = this->M20; /*0x7b95d4*/
      v9 = FoundationSize[1]; /*0x7b95d7*/
      v4 = FoundationSize[2]; /*0x7b95da*/
      v10 = FoundationSize[3]; /*0x7b95dd*/
      v11 = this->M24; /*0x7b95e0*/
      v20 = v10; /*0x7b95e3*/
      v2 = v8 - this->M60 + v7; /*0x7b95f2*/
      v3 = v11 - this->M64 + v9; /*0x7b95fa*/
      ReleaseMutex(hMutex); /*0x7b95fc*/
      v5 = v20; /*0x7b9602*/
    }
    v12 = v2 + this->M44; /*0x7b960c*/
    this->M72 = v2; /*0x7b9610*/
    v18[0] = v12; /*0x7b9616*/
    v13 = *(ObjectClass **)(this + 48); /*0x7b961a*/
    this->M76 = v3; /*0x7b961d*/
    v14 = &v13->__pad_0[v3]; /*0x7b9620*/
    v15 = this->M68; /*0x7b9622*/
    v18[2] = v4; /*0x7b9625*/
    this->M80 = v4; /*0x7b9629*/
    v18[3] = v5; /*0x7b962c*/
    v18[1] = v14; /*0x7b9630*/
    v19[2] = v4; /*0x7b9634*/
    this->M84 = v5; /*0x7b9638*/
    v19[0] = 0; /*0x7b963d*/
    v19[1] = 0; /*0x7b9641*/
    v17 = this->M36; /*0x7b964e*/
    v20 = v5; /*0x7b964f*/
    (*(void (__thiscall **)(int, _DWORD *, int, _DWORD *, _DWORD, int))(*(_DWORD *)v15 + 8))(v15, v19, v17, v18, 0, 1); /*0x7b965a*/
  }
  Mouse::DrawCursor((_DWORD *)this, *(IUnknown **)(this + 36), 0, 0); /*0x7b966a*/
  return ReleaseMutex(hMutex); /*0x7b967c*/
}
}
} // namespace gamemd

// 0x7BBE20
namespace gamemd {
BOOL IntersectSurfaceRects(IUnknown * aP0, int a2, XSurface * aP2, int a4)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
BOOL __fastcall IntersectSurfaceRects(IUnknown *aP0, int a2, XSurface *aP2, int a4)
{
  int Height; // ecx
  int v6; // ecx
  int v7; // eax
  int v8; // eax
  int LockCount; // ecx
  int v10; // ecx
  int v11; // eax
  int v12; // eax
  int v13; // eax
  int v14; // eax
  int Width; // eax
  int v16; // eax
  int v17; // eax
  int v18; // ebx
  int v19; // eax
  int *v20; // eax
  _BYTE v22[16]; // [esp+Ch] [ebp-10h] BYREF

  Height = aP2->Height; /*0x7bbe2c*/
  if ( aP0->field_8 == Height && aP0->field_C == aP2->LockCount ) /*0x7bbe40*/
  {
    if ( aP0->field_0 < 0 ) /*0x7bbe4a*/
    {
      *(_DWORD *)aP2->__pad_0 -= aP0->field_0; /*0x7bbe50*/
      aP2->Height = Height + aP0->field_0; /*0x7bbe56*/
      v6 = aP0->field_0; /*0x7bbe59*/
      v7 = aP0->field_8; /*0x7bbe5b*/
      aP0->field_0 = 0; /*0x7bbe5e*/
      aP0->field_8 = v6 + v7; /*0x7bbe66*/
    }
    v8 = aP0->field_4; /*0x7bbe69*/
    if ( v8 < 0 ) /*0x7bbe6e*/
    {
      LockCount = aP2->LockCount; /*0x7bbe73*/
      aP2->Width -= v8; /*0x7bbe78*/
      aP2->LockCount = aP0->field_4 + LockCount; /*0x7bbe80*/
      v10 = aP0->field_4; /*0x7bbe83*/
      v11 = aP0->field_C; /*0x7bbe86*/
      aP0->field_4 = 0; /*0x7bbe89*/
      aP0->field_C = v10 + v11; /*0x7bbe92*/
    }
    v12 = aP0->field_8 + aP0->field_0 - *(_DWORD *)(a2 + 8); /*0x7bbe9f*/
    if ( v12 > 0 ) /*0x7bbea3*/
    {
      aP2->Height -= v12; /*0x7bbeaa*/
      aP0->field_8 -= v12; /*0x7bbeb2*/
    }
    v13 = aP0->field_4 + aP0->field_C - *(_DWORD *)(a2 + 12); /*0x7bbec0*/
    if ( v13 > 0 ) /*0x7bbec4*/
    {
      aP2->LockCount -= v13; /*0x7bbecb*/
      aP0->field_C -= v13; /*0x7bbed3*/
    }
    if ( *(int *)aP2->__pad_0 < 0 ) /*0x7bbeda*/
    {
      aP0->field_0 -= *(_DWORD *)aP2->__pad_0; /*0x7bbee0*/
      v14 = *(_DWORD *)aP2->__pad_0; /*0x7bbee2*/
      aP2->Height += *(_DWORD *)aP2->__pad_0; /*0x7bbee9*/
      aP0->field_8 += v14; /*0x7bbef1*/
      *(_DWORD *)aP2->__pad_0 = 0; /*0x7bbef4*/
    }
    Width = aP2->Width; /*0x7bbefa*/
    if ( Width < 0 ) /*0x7bbeff*/
    {
      aP0->field_4 -= Width; /*0x7bbf06*/
      v16 = aP2->Width; /*0x7bbf09*/
      aP2->LockCount += v16; /*0x7bbf11*/
      aP0->field_C += v16; /*0x7bbf19*/
      aP2->Width = 0; /*0x7bbf1c*/
    }
    v17 = *(_DWORD *)aP2->__pad_0 + aP2->Height - *(_DWORD *)(a4 + 8); /*0x7bbf33*/
    if ( v17 > 0 ) /*0x7bbf37*/
    {
      aP2->Height = *(_DWORD *)(a4 + 8) - *(_DWORD *)aP2->__pad_0; /*0x7bbf3b*/
      aP0->field_8 -= v17; /*0x7bbf43*/
    }
    v18 = *(_DWORD *)(a4 + 12); /*0x7bbf49*/
    v19 = aP2->LockCount + aP2->Width - v18; /*0x7bbf51*/
    if ( v19 > 0 ) /*0x7bbf55*/
    {
      aP2->LockCount = v18 - aP2->Width; /*0x7bbf59*/
      aP0->field_C -= v19; /*0x7bbf61*/
    }
  }
  else
  {
    v20 = ClipRectIntersection((IUnknown *)v22, aP0, (IUnknown *)a2, 0, 0); /*0x7bbf71*/
    aP0->field_0 = *v20; /*0x7bbf7e*/
    aP0->field_4 = v20[1]; /*0x7bbf83*/
    aP0->field_8 = v20[2]; /*0x7bbf89*/
    aP0->field_C = v20[3]; /*0x7bbf93*/
    *aP2 = *(XSurface *)ClipRectIntersection((IUnknown *)v22, (IUnknown *)aP2, (IUnknown *)a4, 0, 0); /*0x7bbfa6*/
  }
  return aP0->field_8 > 0 && aP0->field_C > 0 && aP2->Height > 0 && aP2->LockCount > 0; /*0x7bbfd6*/
}
}
} // namespace gamemd

// 0x7BC040
namespace gamemd {
char CalcSurfaceBlitRects(int ecx0, int * a1, IUnknown * aP2, int arg4, int * a4, IUnknown * aP5, unsigned char * a6, int * a7, int * a8)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __fastcall CalcSurfaceBlitRects(
        int ecx0,
        int *a1,
        IUnknown *aP2,
        int arg4,
        int *a4,
        IUnknown *aP5,
        _BYTE *a6,
        int *a7,
        int *a8)
{
  int v9; // ebx
  int *v10; // ebp
  int v11; // eax
  int v12; // edx
  int v13; // ebx
  int v14; // eax
  int v15; // ecx
  _DWORD *v16; // eax
  _DWORD *v17; // eax
  int v18; // eax
  _DWORD *v19; // eax
  _DWORD *v20; // eax
  int v21; // eax
  AbstractClass *v23; // [esp-4h] [ebp-2Ch]
  AbstractClass *v24; // [esp-4h] [ebp-2Ch]
  _DWORD v25[2]; // [esp+10h] [ebp-18h] BYREF
  _DWORD v26[2]; // [esp+18h] [ebp-10h] BYREF
  _BYTE v27[8]; // [esp+20h] [ebp-8h] BYREF

  v9 = ecx0; /*0x7bc049*/
  v10 = a1; /*0x7bc04f*/
  *a6 = 0; /*0x7bc05a*/
  *a7 = 0; /*0x7bc05d*/
  *a8 = 0; /*0x7bc063*/
  v11 = aP2->field_8; /*0x7bc069*/
  v26[0] = a1; /*0x7bc06f*/
  v25[0] = ecx0; /*0x7bc073*/
  if ( v11 <= 0 /*0x7bc0d8*/
    || aP2->field_C <= 0
    || a1[2] <= 0
    || a1[3] <= 0
    || aP5->field_8 <= 0
    || aP5->field_C <= 0
    || a4[2] <= 0
    || a4[3] <= 0
    || !IntersectSurfaceRects(aP2, (int)a1, (XSurface *)aP5, (int)a4) )
  {
    return 0; /*0x7bc0d8*/
  }
  *a6 = 0; /*0x7bc0e9*/
  if ( arg4 == v9 ) /*0x7bc0f2*/
  {
    v12 = aP2->field_0; /*0x7bc0f4*/
    v13 = aP5->field_0; /*0x7bc0f9*/
    if ( aP5->field_0 < aP2->field_0 + aP2->field_8 ) /*0x7bc0ff*/
    {
      v14 = aP2->field_4; /*0x7bc101*/
      v15 = aP5->field_4; /*0x7bc107*/
      if ( v15 < v14 + aP2->field_C /*0x7bc12a*/
        && aP5->field_8 + v13 > v12
        && aP5->field_C + v15 > v14
        && (v15 < v14 || v15 == v14 && v13 < v12) )
      {
        *a6 = 1; /*0x7bc130*/
      }
      v10 = (int *)v26[0]; /*0x7bc133*/
    }
    v9 = v25[0]; /*0x7bc137*/
  }
  v23 = (AbstractClass *)CellStruct::Copy(&aP2->field_0, (IUnknown *)v26); /*0x7bc14f*/
  v16 = CellStruct::Copy(v10, (IUnknown *)v27); /*0x7bc154*/
  v17 = Coord2D::Add(v16, (AbstractClass *)v25, v23); /*0x7bc15b*/
  v18 = (*(int (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)v9 + 92))(v9, *v17, v17[1]); /*0x7bc173*/
  *a7 = v18; /*0x7bc17c*/
  if ( !v18 ) /*0x7bc17e*/
    return 0; /*0x7bc17e*/
  v24 = (AbstractClass *)CellStruct::Copy(&aP5->field_0, (IUnknown *)v27); /*0x7bc190*/
  v19 = CellStruct::Copy(a4, (IUnknown *)v25); /*0x7bc19b*/
  v20 = Coord2D::Add(v19, (AbstractClass *)v26, v24); /*0x7bc1a2*/
  v21 = (*(int (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)arg4 + 92))(arg4, *v20, v20[1]); /*0x7bc1bc*/
  *a8 = v21; /*0x7bc1c5*/
  if ( !v21 ) /*0x7bc1c7*/
  {
    (*(void (__thiscall **)(int))(*(_DWORD *)v9 + 96))(v9); /*0x7bc1cd*/
    return 0; /*0x7bc1d9*/
  }
  return 1; /*0x7bc1d2*/
}
}
} // namespace gamemd

// 0x7BC1F0
namespace gamemd {
char sub_7BC1F0(XSurface * a1, XSurface * a2, XSurface * aP2, int arg4)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __fastcall sub_7BC1F0(XSurface *a1, XSurface *a2, XSurface *aP2, int arg4)
{
  int a4; // [esp+8h] [ebp-4h] BYREF

  if ( (*(int (__thiscall **)(XSurface *))(*(_DWORD *)a1->__pad_0 + 112))(a1) == 1 ) /*0x7bc1ff*/
  {
    a4 = (int)&vt_BlitPlain_unsigned_char; /*0x7bc20a*/
    return BlitterCopySimpleSHP(a1, a2, aP2, arg4, &a4, 0, 3, 1000, 0); /*0x7bc218*/
  }
  else
  {
    a4 = (int)&vt_BlitPlain_unsigned_short; /*0x7bc223*/
    return BlitterCopySimpleSHP(a1, a2, aP2, arg4, &a4, 0, 3, 1000, 0); /*0x7bc240*/
  }
}
}
} // namespace gamemd

// 0x7BC250
namespace gamemd {
char sub_7BC250(XSurface * a1, XSurface * a2, XSurface * aP2, int arg4)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __fastcall sub_7BC250(XSurface *a1, XSurface *a2, XSurface *aP2, int arg4)
{
  int a4; // [esp+8h] [ebp-4h] BYREF

  if ( (*(int (__thiscall **)(XSurface *))(*(_DWORD *)a1->__pad_0 + 112))(a1) == 1 ) /*0x7bc25f*/
  {
    a4 = (int)&vt_BlitTrans_unsigned_char; /*0x7bc26a*/
    return BlitterCopySimpleSHP(a1, a2, aP2, arg4, &a4, 0, 3, 1000, 0); /*0x7bc278*/
  }
  else
  {
    a4 = (int)&vt_BlitTrans_unsigned_short; /*0x7bc283*/
    return BlitterCopySimpleSHP(a1, a2, aP2, arg4, &a4, 0, 3, 1000, 0); /*0x7bc2a0*/
  }
}
}
} // namespace gamemd

// 0x7BC2B0
namespace gamemd {
char ClipLine(IUnknown * aP0, int * a1, int * a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __fastcall ClipLine(IUnknown *aP0, int *a1, int *a2)
{
  int v4; // esi
  double v5; // st7
  double v6; // st6
  double v7; // st5
  double v8; // st4
  int v9; // edx
  int v10; // ecx
  int v11; // eax
  double v12; // st4
  double v13; // kr00_8
  int v15; // [esp+10h] [ebp-60h]
  int v16; // [esp+14h] [ebp-5Ch]
  double v18; // [esp+28h] [ebp-48h]
  double v19; // [esp+30h] [ebp-40h]
  double v20; // [esp+38h] [ebp-38h]
  double v21; // [esp+40h] [ebp-30h]
  double v22; // [esp+48h] [ebp-28h]
  double v23; // [esp+50h] [ebp-20h]
  double v24; // [esp+58h] [ebp-18h]
  double v25; // [esp+60h] [ebp-10h]
  double v26; // [esp+68h] [ebp-8h]

  v4 = a2[1]; /*0x7bc2c9*/
  v5 = (double)*a2; /*0x7bc2d3*/
  v19 = v5; /*0x7bc2dd*/
  v6 = (double)v4; /*0x7bc2e1*/
  v16 = *a2 + a2[2]; /*0x7bc2e5*/
  v7 = v6; /*0x7bc2e9*/
  v20 = (double)aP0->field_0; /*0x7bc2ed*/
  v18 = (double)aP0->field_4; /*0x7bc2f6*/
  v8 = (double)*a1; /*0x7bc2fa*/
  v26 = v8; /*0x7bc2fc*/
  v21 = (double)a1[1]; /*0x7bc303*/
  v24 = (v8 - v20) / (v21 - v18); /*0x7bc31b*/
  v25 = (v21 - v18) / (v8 - v20); /*0x7bc321*/
  v22 = (double)v16; /*0x7bc32b*/
  if ( v20 < v22 ) /*0x7bc338*/
    v9 = v20 < v5; /*0x7bc34c*/
  else
    v9 = 2; /*0x7bc33c*/
  v15 = v4 + a2[3]; /*0x7bc356*/
  v23 = (double)v15; /*0x7bc35e*/
  if ( v18 < v23 ) /*0x7bc36f*/
  {
    if ( v18 < v6 ) /*0x7bc381*/
      v9 |= 8u; /*0x7bc383*/
  }
  else
  {
    v9 |= 4u; /*0x7bc371*/
  }
  if ( v8 < v22 ) /*0x7bc391*/
    v10 = v8 < v5; /*0x7bc3a5*/
  else
    v10 = 2; /*0x7bc395*/
  if ( v21 < v23 ) /*0x7bc3b7*/
  {
    if ( v21 < v6 ) /*0x7bc3c9*/
      goto LABEL_14; /*0x7bc3c9*/
  }
  else
  {
    v10 |= 4u; /*0x7bc3b9*/
  }
  while ( 1 ) /*0x7bc3ce*/
  {
    if ( !v9 && !v10 ) /*0x7bc3d4*/
    {
      aP0->field_0 = Math::RoundToInt(v20); /*0x7bc540*/
      aP0->field_4 = Math::RoundToInt(v18); /*0x7bc54b*/
      *a1 = Math::RoundToInt(v26); /*0x7bc557*/
      a1[1] = Math::RoundToInt(v21); /*0x7bc55e*/
      return 1; /*0x7bc569*/
    }
    if ( (v10 & v9) != 0 ) /*0x7bc3dc*/
      return 0; /*0x7bc563*/
    v11 = v9; /*0x7bc3e4*/
    if ( !v9 ) /*0x7bc3e6*/
      v11 = v10; /*0x7bc3e8*/
    if ( (v11 & 8) != 0 ) /*0x7bc3ec*/
    {
      v19 = (v6 - v18) * v24 + v20; /*0x7bc3fe*/
      v7 = v6; /*0x7bc402*/
    }
    else
    {
      if ( (v11 & 4) != 0 ) /*0x7bc408*/
      {
        v7 = (double)(v15 - 1); /*0x7bc415*/
        v12 = (v7 - v18) * v24 + v20; /*0x7bc423*/
LABEL_28:
        v19 = v12; /*0x7bc474*/
        goto LABEL_29; /*0x7bc474*/
      }
      if ( (v11 & 2) != 0 ) /*0x7bc42b*/
      {
        v13 = (double)(v16 - 1); /*0x7bc448*/
        v19 = v13; /*0x7bc44c*/
        v7 = (v13 - v20) * v25 + v18; /*0x7bc458*/
      }
      else if ( (v11 & 1) != 0 ) /*0x7bc460*/
      {
        v7 = (v5 - v20) * v25 + v18; /*0x7bc46e*/
        v12 = v5; /*0x7bc472*/
        goto LABEL_28; /*0x7bc472*/
      }
    }
LABEL_29:
    if ( v11 == v9 ) /*0x7bc47e*/
    {
      v20 = v19; /*0x7bc480*/
      v18 = v7; /*0x7bc488*/
      if ( v19 < v22 ) /*0x7bc495*/
        v9 = v19 < v5; /*0x7bc4a9*/
      else
        v9 = 2; /*0x7bc499*/
      if ( v7 < v23 ) /*0x7bc4b7*/
      {
        if ( v7 < v6 ) /*0x7bc4c8*/
          v9 |= 8u; /*0x7bc4ce*/
      }
      else
      {
        v9 |= 4u; /*0x7bc4b9*/
      }
    }
    else
    {
      v26 = v19; /*0x7bc4d6*/
      v21 = v7; /*0x7bc4de*/
      if ( v19 < v22 ) /*0x7bc4eb*/
        v10 = v19 < v5; /*0x7bc4ff*/
      else
        v10 = 2; /*0x7bc4ef*/
      if ( v7 < v23 ) /*0x7bc50d*/
      {
        if ( v7 < v6 ) /*0x7bc51e*/
LABEL_14:
          v10 |= 8u; /*0x7bc3cb*/
      }
      else
      {
        v10 |= 4u; /*0x7bc50f*/
      }
    }
  }
}
}
} // namespace gamemd

// 0x7BC580
namespace gamemd {
int sub_7BC580()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
// local variable allocation has failed, the output may be wrong!
int __thiscall sub_7BC580(int *this, ObjectClass *aP1, double a3)
{
  int v3; // edx
  int v5; // [esp+8h] [ebp-4h]

  if ( (double)(*this + *(this + 2)) > *(double *)&aP1 ) /*0x7bc5a3*/
    v3 = (double)*this > *(double *)&aP1; /*0x7bc5bb*/
  else
    v3 = 2; /*0x7bc5a5*/
  v5 = *(this + 1); /*0x7bc5c8*/
  if ( (double)(v5 + *(this + 3)) <= *(double *)((char *)&a3 + 4) ) /*0x7bc5dd*/
    return v3 | 4; /*0x7bc5e2*/
  if ( (double)v5 > *(double *)((char *)&a3 + 4) ) /*0x7bc5f7*/
    return v3 | 8; /*0x7bc5f9*/
  return v3; /*0x7bc5e4*/
}
}
} // namespace gamemd

// 0x7BC640
namespace gamemd {
BlitPlain * E4Recv_7BC640::___Gfacet_locale_std__UAEPAXI_Z_148(char a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
BlitPlain *__thiscall ___Gfacet_locale_std__UAEPAXI_Z_148(_DWORD *this, char a2)
{
  *this = &vt_Blitter; /*0x7bc649*/
  if ( (a2 & 1) != 0 ) /*0x7bc64f*/
    __3_YAXPAX_Z(this); /*0x7bc652*/
  return (BlitPlain *)this; /*0x7bc65c*/
}
}
} // namespace gamemd

// 0x7BC660
namespace gamemd {
BlitPlain * E4Recv_7BC660::___Gfacet_locale_std__UAEPAXI_Z_149(char a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
BlitPlain *__thiscall ___Gfacet_locale_std__UAEPAXI_Z_149(_DWORD *this, char a2)
{
  *this = &vt_Blitter; /*0x7bc669*/
  if ( (a2 & 1) != 0 ) /*0x7bc66f*/
    __3_YAXPAX_Z(this); /*0x7bc672*/
  return (BlitPlain *)this; /*0x7bc67c*/
}
}
} // namespace gamemd

// 0x7BC680
namespace gamemd {
BlitTrans * E4Recv_7BC680::___Gfacet_locale_std__UAEPAXI_Z_150(char a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
BlitTrans *__thiscall ___Gfacet_locale_std__UAEPAXI_Z_150(_DWORD *this, char a2)
{
  *this = &vt_Blitter; /*0x7bc689*/
  if ( (a2 & 1) != 0 ) /*0x7bc68f*/
    __3_YAXPAX_Z(this); /*0x7bc692*/
  return (BlitTrans *)this; /*0x7bc69c*/
}
}
} // namespace gamemd

// 0x7BC6A0
namespace gamemd {
BlitTrans * E4Recv_7BC6A0::___Gfacet_locale_std__UAEPAXI_Z_151(char a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
BlitTrans *__thiscall ___Gfacet_locale_std__UAEPAXI_Z_151(_DWORD *this, char a2)
{
  *this = &vt_Blitter; /*0x7bc6a9*/
  if ( (a2 & 1) != 0 ) /*0x7bc6af*/
    __3_YAXPAX_Z(this); /*0x7bc6b2*/
  return (BlitTrans *)this; /*0x7bc6bc*/
}
}
} // namespace gamemd

// 0x7BCA50
namespace gamemd {
int E4Recv_7BCA50::sub_7BCA50(int a2, int a3, int a4, int a5, int a6)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall sub_7BCA50(_DWORD *this, int a2, int a3, int a4, int a5, int a6)
{
  _WORD *v8; // edi
  __int16 *v9; // esi
  int v10; // eax
  int v11; // edx
  int v12; // eax
  int v13; // ecx
  __int16 v14; // dx
  int v16; // [esp+14h] [ebp+4h]

  v8 = (_WORD *)(*(int (__thiscall **)(int, int, int))(*(_DWORD *)a2 + 92))(a2, a3, a4); /*0x7bca72*/
  v9 = (__int16 *)(*(this + 4) + *(this + 6)); /*0x7bca79*/
  v10 = (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 116))(a2); /*0x7bca7b*/
  v11 = a5; /*0x7bca81*/
  v12 = v10 / 2 - a5; /*0x7bca87*/
  if ( v8 && a6 > 0 ) /*0x7bca93*/
  {
    v16 = a6; /*0x7bca95*/
    do /*0x7bcac8*/
    {
      if ( v11 > 0 ) /*0x7bca9b*/
      {
        v13 = v11; /*0x7bca9d*/
        do /*0x7bcab6*/
        {
          v14 = *v9++; /*0x7bca9f*/
          *v8++ = v14; /*0x7bcaa5*/
          if ( (unsigned int)v9 >= *(this + 7) ) /*0x7bcab0*/
            v9 = (__int16 *)((char *)v9 - *(this + 8)); /*0x7bcab2*/
          --v13; /*0x7bcab5*/
        }
        while ( v13 ); /*0x7bcab6*/
        v11 = a5; /*0x7bcab8*/
      }
      v8 += v12; /*0x7bcac0*/
      --v16; /*0x7bcac4*/
    }
    while ( v16 ); /*0x7bcac8*/
  }
  return (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 96))(a2); /*0x7bcad2*/
}
}
} // namespace gamemd

// 0x7BD470
namespace gamemd {
int sub_7BD470(int a1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __cdecl sub_7BD470(int a1)
{
  int v1; // ebx
  int v2; // edi
  int v4; // ecx
  int v5; // esi
  int v6; // edx
  char v7; // bl
  int v8; // ecx
  int v9; // edx
  int v10; // edx
  unsigned int v11; // ecx
  int v12; // ecx

  v1 = *(_DWORD *)(a1 + 1980); /*0x7bd476*/
  v2 = *(_DWORD *)(a1 + 156); /*0x7bd47c*/
  if ( (v1 & 0x200) != 0 ) /*0x7bd485*/
    return 0; /*0x7bd48b*/
  v4 = *(_DWORD *)(a1 + 1952); /*0x7bd492*/
  v5 = *(_DWORD *)(a1 + 1988); /*0x7bd49a*/
  if ( (*(_DWORD *)(a1 + 132) & 0x200) != 0 ) /*0x7bd4a3*/
  {
    v6 = v4 + 1; /*0x7bd4ab*/
    if ( (unsigned int)(v4 + 1) >= *(_DWORD *)(a1 + 1948) ) /*0x7bd4b0*/
      v6 = 0; /*0x7bd4b2*/
    if ( (v1 & 0x100) == 0 && !*(_BYTE *)(v6 + *(_DWORD *)(a1 + 1940)) ) /*0x7bd4bf*/
    {
      BYTE1(v1) |= 4u; /*0x7bd4c5*/
      *(_DWORD *)(a1 + 1980) = v1; /*0x7bd4c8*/
    }
  }
  v7 = 0; /*0x7bd4d4*/
  if ( *(_BYTE *)(*(_DWORD *)(a1 + 1940) + v4) == 1 ) /*0x7bd4da*/
  {
    if ( *(_DWORD *)(a1 + 1956) == -1 ) /*0x7bd4e3*/
    {
      *(_DWORD *)(a1 + 1956) = v4; /*0x7bd4e5*/
      *(_DWORD *)(a1 + 1984) = v5; /*0x7bd4eb*/
    }
    v8 = v4 + 1; /*0x7bd4f7*/
    *(_WORD *)(*(_DWORD *)(a1 + 1944) + 2 * v8 - 2) = 0; /*0x7bd4f8*/
    v9 = v5 + v2; /*0x7bd505*/
    if ( v5 + v2 >= *(_DWORD *)(a1 + 152) ) /*0x7bd50a*/
    {
      v9 = 0; /*0x7bd50c*/
      v8 = 0; /*0x7bd50e*/
    }
    *(_DWORD *)(a1 + 1988) = v9; /*0x7bd510*/
    *(_DWORD *)(a1 + 1952) = v8; /*0x7bd516*/
  }
  else
  {
    v10 = *(_DWORD *)(a1 + 1980); /*0x7bd51e*/
    if ( (v10 & 0x100) != 0 ) /*0x7bd527*/
    {
      v11 = *(_DWORD *)(a1 + 1936); /*0x7bd529*/
      BYTE1(v10) |= 2u; /*0x7bd52f*/
      *(_DWORD *)(a1 + 1980) = v10; /*0x7bd534*/
      if ( v5 >= v11 ) /*0x7bd53a*/
        return 0; /*0x7bd54a*/
      v2 = v11 - v5; /*0x7bd53e*/
    }
    else
    {
      LOBYTE(v10) = v10 | 0x80; /*0x7bd54b*/
      v5 -= v2; /*0x7bd54e*/
      *(_DWORD *)(a1 + 1980) = v10; /*0x7bd550*/
      v12 = v4 - 1; /*0x7bd55a*/
      v7 = 1; /*0x7bd55d*/
      ++*(_DWORD *)(a1 + 56); /*0x7bd55f*/
      if ( v5 < 0 ) /*0x7bd562*/
      {
        v5 = *(_DWORD *)(a1 + 152) - v2; /*0x7bd570*/
        v12 = *(_DWORD *)(a1 + 1948) - 1; /*0x7bd572*/
      }
      ++*(_WORD *)(*(_DWORD *)(a1 + 1944) + 2 * v12); /*0x7bd579*/
    }
  }
  if ( v2 > 0 ) /*0x7bd582*/
  {
    if ( v7 == 1 ) /*0x7bd588*/
    {
      (*(void (__cdecl **)(int, int, _DWORD, int))(a1 + 88))(a1, 5, *(_DWORD *)(a1 + 1976), v2); /*0x7bd594*/
      return v2; /*0x7bd5a0*/
    }
    (*(void (__cdecl **)(int, int, int, int))(a1 + 88))(a1, 5, v5 + *(_DWORD *)(a1 + 1932), v2); /*0x7bd5ad*/
  }
  return v2; /*0x7bd487*/
}
}
} // namespace gamemd

// 0x7BEFE0
namespace gamemd {
char E4Recv_7BEFE0::sub_7BEFE0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __thiscall sub_7BEFE0(int this)
{
  int v2; // esi
  int v3; // eax
  int v4; // edi
  int v5; // eax
  char *v6; // ecx
  int v7; // eax
  int v8; // eax
  char *v9; // ecx

  v2 = this->M416; /*0x7befe5*/
  LOBYTE(v3) = (unsigned char)this->M420; /*0x7befeb*/
  v4 = *(_DWORD *)(v2 + 4); /*0x7beff3*/
  if ( (v3 & 2) == 0 ) /*0x7beff6*/
  {
    v5 = *(_DWORD *)(v4 + 12); /*0x7beffc*/
    if ( (v5 & 2) != 0 ) /*0x7bf001*/
    {
      if ( ((unsigned char)this->M340 & 1) != 0 ) /*0x7bf00a*/
      {
        v6 = *(char **)(this + 1776); /*0x7bf00c*/
        LOBYTE(v5) = v5 | 4; /*0x7bf012*/
        *(_DWORD *)(v4 + 12) = v5; /*0x7bf014*/
      }
      else
      {
        v6 = *(char **)v4; /*0x7bf019*/
      }
      *(_DWORD *)(v4 + 20) = AudioCodec::Decode( /*0x7bf030*/
                               (unsigned __int8 *)(*(_DWORD *)v4 + *(_DWORD *)(v4 + 16)),
                               v6,
                               this->M1908);
      v7 = *(_DWORD *)(v4 + 12); /*0x7bf033*/
      LOBYTE(v7) = v7 & 0xFD; /*0x7bf039*/
      *(_DWORD *)(v4 + 12) = v7; /*0x7bf03b*/
    }
    if ( (*(_BYTE *)(v2 + 20) & 8) != 0 ) /*0x7bf042*/
    {
      *(_DWORD *)(v2 + 40) = AudioCodec::Decode( /*0x7bf05a*/
                               (unsigned __int8 *)(*(_DWORD *)(v2 + 8) + *(_DWORD *)(v2 + 36)),
                               *(char **)(v2 + 8),
                               this->M1904);
      v8 = *(_DWORD *)(v2 + 20); /*0x7bf05d*/
      LOBYTE(v8) = v8 & 0xF7; /*0x7bf063*/
      *(_DWORD *)(v2 + 20) = v8; /*0x7bf065*/
    }
    v3 = *(_DWORD *)(v2 + 20); /*0x7bf068*/
    if ( (v3 & 0x10) != 0 ) /*0x7bf06d*/
    {
      if ( ((unsigned char)this->M340 & 2) != 0 ) /*0x7bf076*/
      {
        v9 = *(char **)(this + 1768); /*0x7bf078*/
        LOBYTE(v3) = v3 | 0x40; /*0x7bf07e*/
        *(_DWORD *)(v2 + 20) = v3; /*0x7bf080*/
      }
      else
      {
        v9 = *(char **)v2; /*0x7bf085*/
      }
      AudioCodec::Decode((unsigned __int8 *)(*(_DWORD *)v2 + *(_DWORD *)(v2 + 32)), v9, this->M1912); /*0x7bf097*/
      v3 = *(_DWORD *)(v2 + 20); /*0x7bf09c*/
      LOBYTE(v3) = v3 & 0xEF; /*0x7bf0a2*/
      *(_DWORD *)(v2 + 20) = v3; /*0x7bf0a4*/
    }
  }
  return v3; /*0x7bf0a7*/
}
}
} // namespace gamemd

// 0x7BF0B0
namespace gamemd {
int E4Recv_7BF0B0::sub_7BF0B0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall sub_7BF0B0(_DWORD *this)
{
  int *v2; // edi
  void (__cdecl *v3)(_DWORD *, int, int, int); // eax
  int v4; // eax
  void (__cdecl *v5)(_DWORD *, int, _DWORD *, _DWORD); // eax
  int (__cdecl *v6)(_DWORD *, int); // eax

  v2 = (int *)*(this + 439); /*0x7bf0b4*/
  if ( (v2[5] & 4) != 0 || ((unsigned char)this->M105 & 1) != 0 ) /*0x7bf0c9*/
  {
    if ( (v2[5] & 4) != 0 ) /*0x7bf0cd*/
    {
      v3 = (void (__cdecl *)(_DWORD *, int, int, int))*(this + 18); /*0x7bf0cf*/
      if ( v3 ) /*0x7bf0d4*/
        v3(this, 2, v2[2], v2[10]); /*0x7bf0dd*/
    }
    else
    {
      v4 = *(this + 105); /*0x7bf0df*/
      if ( (v4 & 1) != 0 ) /*0x7bf0e7*/
      {
        LOBYTE(v4) = v4 & 0xFE; /*0x7bf0e9*/
        *(this + 105) = v4; /*0x7bf0eb*/
        v5 = (void (__cdecl *)(_DWORD *, int, _DWORD *, _DWORD))*(this + 18); /*0x7bf0f1*/
        if ( v5 ) /*0x7bf0f6*/
          v5(this, 2, this + 113, *(this + 112)); /*0x7bf109*/
      }
    }
  }
  sub_7BE940((int)this, v2); /*0x7bf112*/
  v6 = (int (__cdecl *)(_DWORD *, int))*(this + 19); /*0x7bf117*/
  if ( v6 && v6(this, v2[7]) ) /*0x7bf123*/
    return -2; /*0x7bf12d*/
  else
    return -1; /*0x7bf135*/
}
}
} // namespace gamemd

// 0x7BF190
namespace gamemd {
int E4Recv_7BF190::sub_7BF190()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall sub_7BF190(_DWORD *this)
{
  _DWORD *v2; // edi
  void (__cdecl *v3)(_DWORD *, int, _DWORD, _DWORD); // eax
  int v4; // eax
  void (__cdecl *v5)(_DWORD *, int, _DWORD *, _DWORD); // eax
  int (__cdecl *v6)(_DWORD *, _DWORD); // eax

  v2 = (_DWORD *)*(this + 439); /*0x7bf194*/
  if ( (v2[5] & 4) != 0 || ((unsigned char)this->M105 & 1) != 0 ) /*0x7bf1a9*/
  {
    if ( (v2[5] & 4) != 0 ) /*0x7bf1ad*/
    {
      v3 = (void (__cdecl *)(_DWORD *, int, _DWORD, _DWORD))*(this + 18); /*0x7bf1af*/
      if ( v3 ) /*0x7bf1b4*/
        v3(this, 2, v2[2], v2[10]); /*0x7bf1bd*/
    }
    else
    {
      v4 = *(this + 105); /*0x7bf1bf*/
      if ( (v4 & 1) != 0 ) /*0x7bf1c7*/
      {
        LOBYTE(v4) = v4 & 0xFE; /*0x7bf1c9*/
        *(this + 105) = v4; /*0x7bf1cb*/
        v5 = (void (__cdecl *)(_DWORD *, int, _DWORD *, _DWORD))*(this + 18); /*0x7bf1d1*/
        if ( v5 ) /*0x7bf1d6*/
          v5(this, 2, this + 113, *(this + 112)); /*0x7bf1e9*/
      }
    }
  }
  v6 = (int (__cdecl *)(_DWORD *, _DWORD))*(this + 19); /*0x7bf1ee*/
  if ( v6 && v6(this, v2[7]) ) /*0x7bf1fa*/
    return -2; /*0x7bf204*/
  else
    return -1; /*0x7bf20c*/
}
}
} // namespace gamemd

// 0x7BF470
namespace gamemd {
int AudioStream_FillBuffer(int a1, int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __fastcall AudioStream_FillBuffer(int a1, int a2)
{
  int v3; // ebx
  char v4; // al
  int v5; // ecx
  int v6; // edx
  int v7; // ebp
  int v8; // eax
  int v9; // edi
  int v10; // eax
  _DWORD *v11; // ecx
  int v12; // edi
  int (__cdecl *v13)(int, int, int, int); // eax
  int result; // eax
  int v15; // eax
  int v16; // eax
  unsigned __int16 *v17; // edi
  int v18; // ecx
  char v19; // [esp+13h] [ebp-19h]
  int v20; // [esp+14h] [ebp-18h]
  _DWORD *i; // [esp+18h] [ebp-14h]
  int v22; // [esp+1Ch] [ebp-10h]
  int v23; // [esp+20h] [ebp-Ch] BYREF
  int v24; // [esp+24h] [ebp-8h]
  int v25; // [esp+28h] [ebp-4h]

  v24 = a2; /*0x7bf478*/
  v3 = 0; /*0x7bf47c*/
  v4 = *(_BYTE *)(a1 + 132); /*0x7bf47e*/
  v5 = *(_DWORD *)(a1 + 1892); /*0x7bf484*/
  v6 = *(_DWORD *)(a1 + 384); /*0x7bf48a*/
  v7 = 0; /*0x7bf490*/
  v25 = 0; /*0x7bf495*/
  v22 = v5; /*0x7bf499*/
  v20 = v6; /*0x7bf49d*/
  v19 = 0; /*0x7bf4a1*/
  if ( (v4 & 0x20) != 0 && (*(_BYTE *)(a1 + 340) & 4) != 0 ) /*0x7bf4b3*/
  {
    v8 = *(_DWORD *)(a1 + 288); /*0x7bf4b9*/
    if ( v8 >= 0 ) /*0x7bf4c1*/
    {
      if ( v6 < *(_DWORD *)(a1 + 16) ) /*0x7bf4ca*/
        v7 = 2 * (*(_DWORD *)(v5 + 4 * v6) & 0xFFFFFFF); /*0x7bf4d5*/
      if ( v6 == *(_DWORD *)(a1 + 296) && v8 != *(_DWORD *)(a1 + 1808) ) /*0x7bf4e9*/
      {
        if ( v6 != *(_DWORD *)(a1 + 1800) ) /*0x7bf4f5*/
        {
          *(_DWORD *)(a1 + 1788) = v7; /*0x7bf4f7*/
          *(_DWORD *)(a1 + 1792) = 0; /*0x7bf4fd*/
          *(_DWORD *)(a1 + 1796) = 0; /*0x7bf503*/
        }
        *(_DWORD *)(a1 + 1808) = *(_DWORD *)(a1 + 288); /*0x7bf50f*/
        *(_DWORD *)(a1 + 1800) = *(_DWORD *)(a1 + 296); /*0x7bf51b*/
        *(_DWORD *)(a1 + 1804) = -1; /*0x7bf521*/
        v9 = *(_DWORD *)(a1 + 296); /*0x7bf52b*/
        v10 = *(_DWORD *)(a1 + 300); /*0x7bf531*/
        if ( v9 <= v10 ) /*0x7bf539*/
        {
          v11 = (_DWORD *)(v5 + 4 * v9); /*0x7bf53f*/
          for ( i = v11; ; v11 = i ) /*0x7bf542*/
          {
            if ( v9 >= *(_DWORD *)(a1 + 16) - 1 ) /*0x7bf552*/
            {
              if ( (*(int (__cdecl **)(int, int, int *, _DWORD))(a1 + 64))(a1, 9, &v23, 0) ) /*0x7bf579*/
                break; /*0x7bf581*/
              v10 = *(_DWORD *)(a1 + 300); /*0x7bf583*/
              v3 += v23 - 2 * (*(_DWORD *)(v22 + 4 * v10) & 0xFFFFFFF); /*0x7bf59e*/
            }
            else
            {
              v3 += 2 * (v11[1] & 0xFFFFFFF) - 2 * (*v11 & 0xFFFFFFF); /*0x7bf56b*/
            }
            if ( v3 >= *(_DWORD *)(a1 + 1784) ) /*0x7bf5a6*/
              break; /*0x7bf5a6*/
            ++v9; /*0x7bf5ac*/
            ++i; /*0x7bf5b2*/
            if ( v9 > v10 ) /*0x7bf5b6*/
              goto LABEL_21; /*0x7bf5b6*/
          }
          *(_DWORD *)(a1 + 1804) = v9 - 1; /*0x7bf5ba*/
LABEL_21:
          v6 = v20; /*0x7bf5c1*/
        }
        if ( v3 < *(_DWORD *)(a1 + 1784) && *(_DWORD *)(a1 + 1804) == -1 ) /*0x7bf5d4*/
          *(_DWORD *)(a1 + 1804) = *(_DWORD *)(a1 + 300); /*0x7bf5dc*/
        v5 = v22; /*0x7bf5e2*/
      }
      if ( v6 >= *(_DWORD *)(a1 + 1800) && v6 <= *(_DWORD *)(a1 + 1804) ) /*0x7bf5f8*/
      {
        if ( v7 != *(_DWORD *)(a1 + 1788) + *(_DWORD *)(a1 + 1792) ) /*0x7bf60e*/
          goto LABEL_40; /*0x7bf60e*/
        if ( v6 >= *(_DWORD *)(a1 + 16) - 1 ) /*0x7bf61a*/
        {
          if ( (*(int (__cdecl **)(int, int, int *, _DWORD))(a1 + 64))(a1, 9, &v23, 0) ) /*0x7bf636*/
            goto LABEL_39; /*0x7bf63e*/
          v6 = v20; /*0x7bf644*/
          v12 = v23 - v7; /*0x7bf648*/
        }
        else
        {
          v12 = 2 * (*(_DWORD *)(v5 + 4 * v6 + 4) & 0xFFFFFFF) - v7; /*0x7bf628*/
        }
        if ( v12 <= 0 ) /*0x7bf64c*/
          goto LABEL_40; /*0x7bf64c*/
        v13 = *(int (__cdecl **)(int, int, int, int))(a1 + 64); /*0x7bf64e*/
        if ( v13 != sub_7BF3A0 ) /*0x7bf656*/
          v13(a1, 7, 0, v7); /*0x7bf65e*/
        if ( (*(int (__cdecl **)(int, int, int, int))(a1 + 64))( /*0x7bf676*/
               a1,
               5,
               *(_DWORD *)(a1 + 1780) + *(_DWORD *)(a1 + 1796),
               v12) )
        {
          return -4; /*0x7bf68c*/
        }
        *(_DWORD *)(a1 + 1792) += v12; /*0x7bf68d*/
LABEL_39:
        v6 = v20; /*0x7bf693*/
LABEL_40:
        v15 = *(_DWORD *)(a1 + 1788); /*0x7bf697*/
        if ( v7 < v15 + *(_DWORD *)(a1 + 1792) ) /*0x7bf6a7*/
        {
          v19 = 1; /*0x7bf6ab*/
          *(_DWORD *)(a1 + 1796) = v7 - v15; /*0x7bf6b0*/
          v25 = *(_DWORD *)(a1 + 64); /*0x7bf6b9*/
          *(_DWORD *)(a1 + 64) = sub_7BF3A0; /*0x7bf6bd*/
        }
      }
    }
  }
  if ( !v6 ) /*0x7bf6c6*/
  {
LABEL_49:
    if ( (v24 & 0x20) == 0 ) /*0x7bf702*/
      *(_DWORD *)(a1 + 360) = *(_DWORD *)(a1 + 356); /*0x7bf70a*/
    goto LABEL_51; /*0x7bf70a*/
  }
  v16 = *(unsigned __int16 *)(a1 + 1812); /*0x7bf6ca*/
  if ( (_WORD)v16 && (*(_BYTE *)(a1 + 1814) & 3) != 0 ) /*0x7bf6dc*/
  {
    v17 = *(unsigned __int16 **)(a1 + 1820); /*0x7bf6de*/
    v18 = 0; /*0x7bf6e4*/
    while ( v6 != *v17 ) /*0x7bf6f1*/
    {
      ++v18; /*0x7bf6f3*/
      v17 += 2; /*0x7bf6f4*/
      if ( v18 >= v16 ) /*0x7bf6f9*/
        goto LABEL_51; /*0x7bf6f9*/
    }
    goto LABEL_49; /*0x7bf6f1*/
  }
LABEL_51:
  result = DSP_AudioMixBuffers(a1, v24); /*0x7bf710*/
  if ( v19 ) /*0x7bf721*/
    *(_DWORD *)(a1 + 64) = v25; /*0x7bf727*/
  return result; /*0x7bf680*/
}
}
} // namespace gamemd

// 0x7B0090
namespace gamemd {
int sub_7B0090()
{
{
    DataGlobal_B77F54 = 0;
    return atexit(sub_7B00B0);
}
}
} // namespace gamemd

// 0x7B00B0
namespace gamemd {
void sub_7B00B0()
{
{
    if ( DataGlobal_B77F54 )
  {
    __3_YAXPAX_Z(DataGlobal_B77F54);
    DataGlobal_B77F54 = 0;
  }
}
}
} // namespace gamemd

// 0x7B00D0
namespace gamemd {
int sub_7B00D0()
{
{
    DataGlobal_B77F60 = 0;
    return atexit(sub_7B00F0);
}
}
} // namespace gamemd

// 0x7B00F0
namespace gamemd {
void sub_7B00F0()
{
{
    if ( DataGlobal_B77F60 )
  {
    __3_YAXPAX_Z(DataGlobal_B77F60);
    DataGlobal_B77F60 = 0;
  }
}
}
} // namespace gamemd

// 0x7B0110
namespace gamemd {
int sub_7B0110()
{
{
    ComPtr::Constructor(&DataGlobal_B77F58);
    DataGlobal_B77F58 = (int)&vt_rc_ptr_WDTState;
    return atexit(sub_7B0130);
}
}
} // namespace gamemd

// 0x7B0130
namespace gamemd {
void sub_7B0130()
{
{
    DataGlobal_B77F58 = (int)&vt_rc_ptr_WDTState;
    ComPtr::Release(&DataGlobal_B77F58);
}
}
} // namespace gamemd

// 0x7B0150
namespace gamemd {
int sub_7B0150()
{
{
    ComPtr::Constructor(&DataGlobal_B77F70);
    DataGlobal_B77F70 = (int)&vt_rc_ptr_WDTState;
    return atexit(sub_7B0170);
}
}
} // namespace gamemd

// 0x7B0170
namespace gamemd {
void sub_7B0170()
{
{
    DataGlobal_B77F70 = (int)&vt_rc_ptr_WDTState;
    ComPtr::Release(&DataGlobal_B77F70);
}
}
} // namespace gamemd

// 0x7B0190
namespace gamemd {
int sub_7B0190()
{
{
    ComPtr::Constructor(&DataGlobal_B77F68);
    DataGlobal_B77F68 = (int)&vt_rc_ptr_WorldDominationTour_Campaign;
    return atexit(sub_7B01B0);
}
}
} // namespace gamemd

// 0x7B01B0
namespace gamemd {
void sub_7B01B0()
{
{
    DataGlobal_B77F68 = (int)&vt_rc_ptr_WorldDominationTour_Campaign;
    ComPtr::Release(&DataGlobal_B77F68);
}
}
} // namespace gamemd

// 0x7B01D0
namespace gamemd {
int sub_7B01D0()
{
{
    ComPtr::Constructor(&DataGlobal_B77F78);
    DataGlobal_B77F78 = (int)&vt_rc_ptr_WorldDominationTour_Campaign;
    return atexit(sub_7B01F0);
}
}
} // namespace gamemd

// 0x7B01F0
namespace gamemd {
void sub_7B01F0()
{
{
    DataGlobal_B77F78 = (int)&vt_rc_ptr_WorldDominationTour_Campaign;
    ComPtr::Release(&DataGlobal_B77F78);
}
}
} // namespace gamemd

// 0x7B0290
namespace gamemd {
int * sub_7B0290()
{
{
    return &DataGlobal_B77F70;
}
}
} // namespace gamemd

// 0x7B0380
namespace gamemd {
int * sub_7B0380()
{
{
    return &DataGlobal_B77F78;
}
}
} // namespace gamemd

// 0x7B0390
namespace gamemd {
rc_ptr * FindWDTTerritoryClass(rc_ptr_base * a1, int a2)
{
{
    char v3;
    rc_ptr_base *v4;
    rc_ptr_base v6;
    int v7[4];
    v3 = 0;
    v7[3] = 0;
    FindWDTTerritoryClass_Find((char *)DataGlobal_B77F6C, v7, a2);
    if ( (*(unsigned char (__thiscall **)(int *))(v7[0] + 4))(v7) )
  {
    v4 = (rc_ptr_base *)(*(int *)(*(int *)(v7[1] + 4) + 8 * v7[2] + 4) + 8);
  }
    else
  {
    ComPtr::Constructor(&v6);
    v6.vfptr = &vt_rc_ptr_WDTTerritory;
    v3 = 1;
    v4 = &v6;
  }
    ComPtr::Constructor(a1);
    a1->vfptr = &vt_rc_ptr_WDTTerritory;
    ComPtr::Set(a1, (int)v4[1].vfptr);
    if ( (v3 & 1) != 0 )
  {
    v6.vfptr = &vt_rc_ptr_WDTTerritory;
    ComPtr::Release(&v6);
  }
    return (rc_ptr *)a1;
}
}
} // namespace gamemd

// 0x7B0430
namespace gamemd {
char _do_always_noconv_codecvt_base_std__MBE_NXZ_23()
{
return 1;
}
} // namespace gamemd

// 0x7B05A0
namespace gamemd {
int sub_7B05A0()
{
{
    DataGlobal_B77FA0 = 0;
    DataGlobal_B77FA4 = 0;
    DataGlobal_B77FA8 = 0;
    DataGlobal_B77FAC = 0;
    return 0;
}
}
} // namespace gamemd

// 0x7B0BA0
namespace gamemd {
void sub_7B0BA0()
{
{
    long double v0;
    v0 = pow(256.0, 2.0);
    DataGlobal_B77FC0 = Math::Sqrt(v0 + v0);
}
}
} // namespace gamemd

// 0x7B0BD0
namespace gamemd {
void sub_7B0BD0()
{
{
    DataGlobal_B78010 = DataGlobal_B77FC0 / 60.0;
}
}
} // namespace gamemd

// 0x7B0BF0
namespace gamemd {
void sub_7B0BF0()
{
{
    DataGlobal_B77FF8 = 1.0 / DataGlobal_B78010;
}
}
} // namespace gamemd

// 0x7B0C10
namespace gamemd {
void sub_7B0C10()
{
{
    DataGlobal_B77FF0 = 0.0174532925199433 * 45.0;
}
}
} // namespace gamemd

// 0x7B0C30
namespace gamemd {
void sub_7B0C30()
{
{
    DataGlobal_B77FC8 = 0.0174532925199433 * 60.0;
}
}
} // namespace gamemd

// 0x7B0C50
namespace gamemd {
void sub_7B0C50()
{
{
    DataGlobal_B77FB0 = 0.0174532925199433 * 90.0;
}
}
} // namespace gamemd

// 0x7B0C70
namespace gamemd {
long long sub_7B0C70()
{
{
    double v0;
    __int64 result;
    v0 = Math::Sin(DataGlobal_B77FB0 - DataGlobal_B77FC8);
    result = Math::RoundToInt(v0 * DataGlobal_B77FC0 * 0.5);
    DataGlobal_B78018 = result;
    return result;
}
}
} // namespace gamemd

// 0x7B0CB0
namespace gamemd {
void sub_7B0CB0()
{
{
    DataGlobal_B77FD0 = Math::ArcTan((double)DataGlobal_B78018 * 0.00390625);
}
}
} // namespace gamemd

// 0x7B0CE0
namespace gamemd {
void sub_7B0CE0()
{
{
    DataGlobal_B77FE8 = Math::ArcTan((double)(2 * DataGlobal_B78018) / DataGlobal_B77FC0);
}
}
} // namespace gamemd

// 0x7B0D10
namespace gamemd {
long long sub_7B0D10()
{
{
    __int64 result;
    result = Math::RoundToInt((double)(4 * DataGlobal_B78018) + 0.5);
    DataGlobal_B7800C = result;
    return result;
}
}
} // namespace gamemd

// 0x7B0D40
namespace gamemd {
int sub_7B0D40()
{
{
    DataGlobal_B77FB8 = 0;
    DataGlobal_B77FBA = 0;
    return 0;
}
}
} // namespace gamemd

// 0x7B0D50
namespace gamemd {
int sub_7B0D50()
{
{
    DataGlobal_B77FD8 = 0;
    DataGlobal_B77FDC = 0;
    DataGlobal_B77FE0 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x7B0D70
namespace gamemd {
int sub_7B0D70()
{
{
    DataGlobal_B78008 = 0;
    DataGlobal_B78000 = 128;
    DataGlobal_B78004 = 128;
    return 128;
}
}
} // namespace gamemd

// 0x7B17B0
namespace gamemd {
int sub_7B17B0()
{
{
    DataGlobal_B78028 = 0;
    DataGlobal_B7802C = 0;
    DataGlobal_B78030 = 0;
    DataGlobal_B78034 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x7B17D0
namespace gamemd {
void sub_7B17D0()
{
{
    long double v0;
    v0 = pow(256.0, 2.0);
    DataGlobal_B78040 = Math::Sqrt(v0 + v0);
}
}
} // namespace gamemd

// 0x7B1800
namespace gamemd {
void sub_7B1800()
{
{
    DataGlobal_B78090 = DataGlobal_B78040 / 60.0;
}
}
} // namespace gamemd

// 0x7B1820
namespace gamemd {
void sub_7B1820()
{
{
    DataGlobal_B78078 = 1.0 / DataGlobal_B78090;
}
}
} // namespace gamemd

// 0x7B1840
namespace gamemd {
void sub_7B1840()
{
{
    DataGlobal_B78070 = 0.0174532925199433 * 45.0;
}
}
} // namespace gamemd

// 0x7B1860
namespace gamemd {
void sub_7B1860()
{
{
    DataGlobal_B78048 = 0.0174532925199433 * 60.0;
}
}
} // namespace gamemd

// 0x7B1880
namespace gamemd {
void sub_7B1880()
{
{
    DataGlobal_B78020 = 0.0174532925199433 * 90.0;
}
}
} // namespace gamemd

// 0x7B18A0
namespace gamemd {
long long sub_7B18A0()
{
{
    double v0;
    __int64 result;
    v0 = Math::Sin(DataGlobal_B78020 - DataGlobal_B78048);
    result = Math::RoundToInt(v0 * DataGlobal_B78040 * 0.5);
    DataGlobal_B78098 = result;
    return result;
}
}
} // namespace gamemd

// 0x7B18E0
namespace gamemd {
void sub_7B18E0()
{
{
    DataGlobal_B78050 = Math::ArcTan((double)DataGlobal_B78098 * 0.00390625);
}
}
} // namespace gamemd

// 0x7B1910
namespace gamemd {
void sub_7B1910()
{
{
    DataGlobal_B78068 = Math::ArcTan((double)(2 * DataGlobal_B78098) / DataGlobal_B78040);
}
}
} // namespace gamemd

// 0x7B1940
namespace gamemd {
long long sub_7B1940()
{
{
    __int64 result;
    result = Math::RoundToInt((double)(4 * DataGlobal_B78098) + 0.5);
    DataGlobal_B7808C = result;
    return result;
}
}
} // namespace gamemd

// 0x7B1970
namespace gamemd {
int sub_7B1970()
{
{
    DataGlobal_B78038 = 0;
    DataGlobal_B7803A = 0;
    return 0;
}
}
} // namespace gamemd

// 0x7B1980
namespace gamemd {
int sub_7B1980()
{
{
    DataGlobal_B78058 = 0;
    DataGlobal_B7805C = 0;
    DataGlobal_B78060 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x7B19A0
namespace gamemd {
int sub_7B19A0()
{
{
    DataGlobal_B78088 = 0;
    DataGlobal_B78080 = 128;
    DataGlobal_B78084 = 128;
    return 128;
}
}
} // namespace gamemd

// 0x7B2BA0
namespace gamemd {
void sub_7B2BA0()
{
{
    long double v0;
    v0 = pow(256.0, 2.0);
    DataGlobal_B780C8 = Math::Sqrt(v0 + v0);
}
}
} // namespace gamemd

// 0x7B2BD0
namespace gamemd {
void sub_7B2BD0()
{
{
    DataGlobal_B78118 = DataGlobal_B780C8 / 60.0;
}
}
} // namespace gamemd

// 0x7B2BF0
namespace gamemd {
void sub_7B2BF0()
{
{
    DataGlobal_B78100 = 1.0 / DataGlobal_B78118;
}
}
} // namespace gamemd

// 0x7B2C10
namespace gamemd {
void sub_7B2C10()
{
{
    DataGlobal_B780F8 = 0.0174532925199433 * 45.0;
}
}
} // namespace gamemd

// 0x7B2C30
namespace gamemd {
void sub_7B2C30()
{
{
    DataGlobal_B780D0 = 0.0174532925199433 * 60.0;
}
}
} // namespace gamemd

// 0x7B2C50
namespace gamemd {
void sub_7B2C50()
{
{
    DataGlobal_B780A8 = 0.0174532925199433 * 90.0;
}
}
} // namespace gamemd

// 0x7B2C70
namespace gamemd {
long long sub_7B2C70()
{
{
    double v0;
    __int64 result;
    v0 = Math::Sin(DataGlobal_B780A8 - DataGlobal_B780D0);
    result = Math::RoundToInt(v0 * DataGlobal_B780C8 * 0.5);
    DataGlobal_B78120 = result;
    return result;
}
}
} // namespace gamemd

// 0x7B2CB0
namespace gamemd {
void sub_7B2CB0()
{
{
    DataGlobal_B780D8 = Math::ArcTan((double)DataGlobal_B78120 * 0.00390625);
}
}
} // namespace gamemd

// 0x7B2CE0
namespace gamemd {
void sub_7B2CE0()
{
{
    DataGlobal_B780F0 = Math::ArcTan((double)(2 * DataGlobal_B78120) / DataGlobal_B780C8);
}
}
} // namespace gamemd

// 0x7B2D10
namespace gamemd {
long long sub_7B2D10()
{
{
    __int64 result;
    result = Math::RoundToInt((double)(4 * DataGlobal_B78120) + 0.5);
    DataGlobal_B78114 = result;
    return result;
}
}
} // namespace gamemd

// 0x7B2D40
namespace gamemd {
int sub_7B2D40()
{
{
    DataGlobal_B780C0 = 0;
    DataGlobal_B780C2 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x7B2D50
namespace gamemd {
int sub_7B2D50()
{
{
    DataGlobal_B780E0 = 0;
    DataGlobal_B780E4 = 0;
    DataGlobal_B780E8 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x7B2D70
namespace gamemd {
int sub_7B2D70()
{
{
    DataGlobal_B78110 = 0;
    DataGlobal_B78108 = 128;
    DataGlobal_B7810C = 128;
    return 128;
}
}
} // namespace gamemd

// 0x7B2D90
namespace gamemd {
int sub_7B2D90()
{
{
    DataGlobal_B780B0 = 0;
    DataGlobal_B780B4 = 0;
    DataGlobal_B780B8 = 0;
    DataGlobal_B780BC = 0;
    return 0;
}
}
} // namespace gamemd

// 0x7B39D0
namespace gamemd {
char E4Recv_7B39D0::sub_7B39D0(unsigned int * a2, short a3)
{
{
    int v3;
    int v4;
    int *v5;
    short *i;
    v3 = this->M259432;
    v4 = 0;
    if ( v3 <= 0 )
    return 1;
    v5 = this + 64859;
    for ( i = this + 64875; a3 != *i || *a2 != *v5; ++i )
  {
    ++v4;
    ++v5;
    if ( v4 >= v3 )
    return 1;
  }
    return 0;
}
}
} // namespace gamemd

// 0x7B46F0
namespace gamemd {
void E4Recv_7B46F0::DeleteAndZero()
{
{
    if ( *(void**)this )
    __3_YAXPAX_Z(*(void**)this);
    *(void**)this = 0;
}
}
} // namespace gamemd

// 0x7B4AC0
namespace gamemd {
char E4Recv_7B4AC0::sub_7B4AC0(size_t Count, char * Source)
{
{
    size_t v4;
    char *v5;
    char *v6;
    v4 = Count + 1;
    v5 = (char *)*(void**)this;
    if ( *(void**)this )
    v4 = strlen(*(void**)this) + 1 + Count;
    v6 = (char *)__2_YAPAXI_Z(v4);
    *(void**)this = v6;
    if ( v5 )
    strcpy(v6, v5);
    else
    *v6 = 0;
    if ( Source )
    strncat((char *)*(void**)this, Source, Count);
    if ( v5 )
    __3_YAXPAX_Z(v5);
    return 1;
}
}
} // namespace gamemd

// 0x7B4B50
namespace gamemd {
char E4Recv_7B4B50::sub_7B4B50(char ** a2)
{
{
    const char *v2;
    const char *v4;
    unsigned int v5;
    char *v6;
    size_t v7;
    char *v8;
    char *v10;
    v2 = *a2;
    if ( *a2 )
  {
    v10 = *a2;
    v4 = v2;
  }
    else
  {
    v4 = &g_INI_DefaultBuffer;
    v10 = &g_INI_DefaultBuffer;
  }
    if ( v4 )
  {
    v5 = strlen(v4) + 1;
    v6 = (char *)*(void**)this;
    v7 = v5;
    if ( *(void**)this )
    v7 = strlen(*(void**)this) + v5;
    v8 = (char *)__2_YAPAXI_Z(v7);
    *(void**)this = v8;
    if ( v6 )
    {
    strcpy(v8, v6);
    v4 = v10;
    }
    else
    {
    *v8 = 0;
    }
    strcat((char *)*(void**)this, v4);
    if ( v6 )
    __3_YAXPAX_Z(v6);
  }
    return 1;
}
}
} // namespace gamemd

// 0x7B50F0
namespace gamemd {
char E4Recv_7B50F0::sub_7B50F0(char a2)
{
{
    char v3;
    const char *v4;
    unsigned int v6;
    char *v7;
    char *v8;
    v3 = 0;
    v4 = *(void**)this;
    if ( !*(void**)this )
    return 0;
    v6 = strlen(v4);
    v7 = strchr(v4, a2);
    if ( v7 )
  {
    do
    {
    memcpy(v7, v7 + 1, *(void**)this - v7 + v6-- - 1);
    (*(void**)this)[v6] = 0;
    v7 = strchr(*(void**)this, a2);
    }
    while ( v7 );
    v8 = (char *)__2_YAPAXI_Z(strlen(*(void**)this) + 1);
    strcpy(v8, *(void**)this);
    __3_YAXPAX_Z((void *)*(void**)this);
    *(void**)this = v8;
    return 1;
  }
    return v3;
}
}
} // namespace gamemd

// 0x7B5360
namespace gamemd {
void E4Recv_7B5360::sub_7B5360(int Size)
{
{
    void *v3;
    if ( *(void**)this )
    __3_YAXPAX_Z(*(void**)this);
    *(void**)this = 0;
    if ( Size >= 0 )
  {
    v3 = __2_YAPAXI_Z(Size);
    *(void**)this = v3;
    memset(v3, 0, Size);
  }
}
}
} // namespace gamemd

// 0x7B53B0
namespace gamemd {
unsigned int E4Recv_7B53B0::sub_7B53B0(ObjectClass * aP1, size_t Count)
{
{
    unsigned int v4;
    unsigned int result;
    strncpy(aP1->__pad_0, *(void**)this, Count);
    v4 = strlen(*(void**)this) + 1;
    result = v4 - 1;
    if ( v4 - 1 < Count )
  {
    result = 538976288;
    memset(&aP1->__pad_0[v4 - 1], 0x20u, Count - (v4 - 1));
  }
    aP1->__pad_0[Count] = 0;
    return result;
}
}
} // namespace gamemd

// 0x7B5410
namespace gamemd {
char E4Recv_7B5410::sub_7B5410(unsigned int a2)
{
{
    const char *v2;
    v2 = *(void**)this;
    if ( a2 >= strlen(*(void**)this) )
    return 0;
    else
    return v2[a2];
}
}
} // namespace gamemd

// 0x7B54D0
namespace gamemd {
char E4Recv_7B54D0::sub_7B54D0(const char * Src, unsigned int a3)
{
{
    const char *v4;
    size_t v5;
    const char *v6;
    char *v8;
    v4 = *(void**)this;
    if ( *(void**)this )
  {
    if ( a3 > strlen(*(void**)this) )
    a3 = strlen(v4);
    v8 = (char *)__2_YAPAXI_Z(strlen(v4) + 1 + strlen(Src));
    memset(v8, 0, strlen(*(void**)this) + 1 + strlen(Src));
    strcpy(v8, *(void**)this);
    memcpy(&v8[strlen(Src) + a3], &v8[a3], strlen(*(void**)this) + 1 - a3);
    memcpy(&v8[a3], Src, strlen(Src));
    __3_YAXPAX_Z((void *)*(void**)this);
    *(void**)this = v8;
    return 1;
  }
    else
  {
    *(void**)this = 0;
    if ( Src )
    v5 = strlen(Src) + 1;
    else
    v5 = 1;
    v6 = (const char *)__2_YAPAXI_Z(v5);
    *(void**)this = v6;
    *v6 = 0;
    if ( Src )
    strcpy((char *)*(void**)this, Src);
    return 1;
  }
}
}
} // namespace gamemd

// 0x7B5640
namespace gamemd {
char E4Recv_7B5640::sub_7B5640(char a2, unsigned int a3)
{
{
    size_t v4;
    const char *v5;
    unsigned int v7;
    char *v8;
    const char *v9;
    char *v10;
    char v11;
    int v12;
    char v13;
    char v14;
    if ( *(void**)this )
  {
    v7 = strlen(*(void**)this) + 1;
    if ( a3 > v7 - 1 )
    a3 = v7 - 1;
    v8 = (char *)__2_YAPAXI_Z(v7 - 1 + 2);
    v9 = *(void**)this;
    v10 = v8;
    v14 = 0;
    v11 = v9[a3];
    v9[a3] = 0;
    strcpy(v8, *(void**)this);
    (*(void**)this)[a3] = v11;
    v13 = a2;
    strcat(v8, &v13);
    strcat(v8, &(*(void**)this)[a3]);
    __3_YAXPAX_Z((void *)*(void**)this);
    *(void**)this = v10;
    return 1;
  }
    else
  {
    v13 = a2;
    v14 = 0;
    *(void**)this = 0;
    if ( &v12 == (int *)-14 )
    v4 = 1;
    else
    v4 = strlen(&v13) + 1;
    v5 = (const char *)__2_YAPAXI_Z(v4);
    *(void**)this = v5;
    *v5 = 0;
    if ( &v13 )
    strcpy((char *)*(void**)this, &v13);
    return 1;
  }
}
}
} // namespace gamemd

// 0x7B5C50
namespace gamemd {
void E4Recv_7B5C50::sub_7B5C50()
{
{
    unsigned int i;
    char v3;
    for ( i = 0; *(void**)this && i < strlen(*(void**)this); ++i )
  {
    v3 = (*(void**)this)[i];
    if ( v3 >= 97 && v3 <= 122 )
    (*(void**)this)[i] = toupper(v3);
  }
}
}
} // namespace gamemd

// 0x7B5CA0
namespace gamemd {
char ** E4Recv_7B5CA0::sub_7B5CA0(char ** a2)
{
{
    char *v3;
    unsigned int i;
    char v5;
    char *v6;
    v3 = 0;
    if ( *(void**)this )
  {
    v3 = (char *)__2_YAPAXI_Z(strlen(*(void**)this) + 1);
    strcpy(v3, *(void**)this);
  }
    for ( i = 0; v3 && i < strlen(v3); ++i )
  {
    v5 = v3[i];
    if ( v5 >= 97 && v5 <= 122 )
    v3[i] = toupper(v5);
  }
    *a2 = 0;
    if ( v3 )
  {
    v6 = (char *)__2_YAPAXI_Z(strlen(v3) + 1);
    *a2 = v6;
    strcpy(v6, v3);
    __3_YAXPAX_Z(v3);
  }
    return a2;
}
}
} // namespace gamemd

// 0x7B6280
namespace gamemd {
void E4Recv_7B6280::__1_Timevec_std__QAE_XZ()
{
{
    atoi(*(void**)this);
}
}
} // namespace gamemd

// 0x7B6290
namespace gamemd {
char ** FromStringInt(IUnknown * aP0, int a2)
{
{
    size_t v3;
    char *v4;
    char Buffer[16];
    sprintf(Buffer, (ObjectClass *)&DataGlobal_817F40.fallRate, (INIClass *)a2);
    aP0->field_0 = 0;
    if ( Buffer )
    v3 = strlen(Buffer) + 1;
    else
    v3 = 1;
    v4 = (char *)__2_YAPAXI_Z(v3);
    aP0->field_0 = (int)v4;
    *v4 = 0;
    if ( Buffer )
    strcpy((char *)aP0->field_0, Buffer);
    return (char **)aP0;
}
}
} // namespace gamemd

// 0x7B6320
namespace gamemd {
char ** FormatStringInt(INIClass * aP0, MPCooperative * aP1, ObjectClass * aP2)
{
{
    size_t v5;
    char *v6;
    char Buffer[16];
    sprintf(Buffer, (ObjectClass *)&DataGlobal_84DD9C.__pad_71C[212], (INIClass *)aP2);
    sprintf(Buffer, (ObjectClass *)Buffer, (INIClass *)aP1);
    *(int *)aP0->__pad_0 = 0;
    if ( Buffer )
    v5 = strlen(Buffer) + 1;
    else
    v5 = 1;
    v6 = (char *)__2_YAPAXI_Z(v5);
    *(int *)aP0->__pad_0 = v6;
    *v6 = 0;
    if ( Buffer )
    strcpy(*(char **)aP0->__pad_0, Buffer);
    return (char **)aP0;
}
}
} // namespace gamemd

// 0x7B6630
namespace gamemd {
bool String_ValidateContains(const char ** a1, const char * a2, char * Control)
{
{
    return Control && *a1 && strcspn(*a1, Control) < strlen(a2);
}
}
} // namespace gamemd

// 0x7B69F0
namespace gamemd {
char E4Recv_7B69F0::sub_7B69F0(size_t Count, wchar_t * Source)
{
{
    size_t v4;
    wchar_t *v5;
    wchar_t *v6;
    v4 = Count + 1;
    v5 = (wchar_t *)*(void**)this;
    if ( *(void**)this )
    v4 += wcslen(*(void**)this);
    v6 = (wchar_t *)__2_YAPAXI_Z(4 * v4);
    *(void**)this = v6;
    if ( v5 )
    wcscpy(v6, v5);
    else
    *v6 = 0;
    if ( Source )
    wcsncat((wchar_t *)*(void**)this, Source, Count);
    if ( v5 )
    __3_YAXPAX_Z(v5);
    return 1;
}
}
} // namespace gamemd

// 0x7B6A60
namespace gamemd {
char E4Recv_7B6A60::sub_7B6A60(ObjectClass * aP1)
{
{
    wchar_t *v2;
    ObjectClass *v4;
    size_t v5;
    wchar_t *v6;
    v2 = *(wchar_t **)aP1->__pad_0;
    if ( *(int *)aP1->__pad_0 || (v2 = (wchar_t *)&DataGlobal_87C374.__pad_579C[23588], &DataGlobal_87C374 != (IUnknown *)-46016) )
  {
    v4 = (ObjectClass *)*(void**)this;
    v5 = wcslen(v2) + 1;
    if ( v4 )
    v5 += wcslen((const wchar_t *)v4);
    v6 = (wchar_t *)__2_YAPAXI_Z(4 * v5);
    *(void**)this = v6;
    if ( v4 )
    wcscpy(v6, (const wchar_t *)v4);
    else
    *v6 = 0;
    wcscat(*(void**)this, (CampaignScore *)v2);
    if ( v4 )
    __3_YAXPAX_Z(v4);
  }
    return 1;
}
}
} // namespace gamemd

// 0x7B6EE0
namespace gamemd {
short E4Recv_7B6EE0::sub_7B6EE0(const wchar_t ** a2)
{
{
    unsigned int i;
    void *v4;
    const wchar_t *v5;
    for ( i = 0; ; ++i )
  {
    v4 = (void *)*(void**)this;
    if ( !*(void**)this )
    break;
    v4 = (void *)wcslen(*(void**)this);
    if ( i >= (unsigned int)v4 )
    break;
    v5 = *a2;
    if ( !*a2 )
    v5 = &g_TypeClass_DefaultString;
    v4 = wcschr(v5, (*(void**)this)[i]);
    if ( !v4 )
    break;
  }
    if ( i )
    LOWORD(v4) = WideString::Erase(this, 0, i);
    return (short)v4;
}
}
} // namespace gamemd

// 0x7B70B0
namespace gamemd {
size_t E4Recv_7B70B0::sub_7B70B0(ObjectClass * aP1, size_t Count)
{
{
    size_t result;
    char *v5;
    unsigned int v6;
    char v7;
    char *v8;
    int i;
    wcsncpy((wchar_t *)aP1, *(void**)this, Count);
    result = wcslen(*(void**)this);
    if ( result < Count )
  {
    v5 = &aP1->__pad_0[2 * result];
    v6 = Count - result;
    result = 2097184;
    v7 = v6 & 1;
    v6 >>= 1;
    memset32(v5, 2097184, v6);
    v8 = &v5[4 * v6];
    for ( i = v7; i; --i )
    {
    *(short *)v8 = 32;
    v8 += 2;
    }
  }
    *(short *)&aP1->__pad_0[2 * Count] = 0;
    return result;
}
}
} // namespace gamemd

// 0x7B7DD0
namespace gamemd {
CampaignScore * FormatWideString(wchar_t ** a1, const wchar_t * a2)
{
{
    size_t v3;
    wchar_t *v4;
    CampaignScore *v6;
    wchar_t String[32];
    swprintf(String, (const size_t)&g_Str_Fmt_PctD, a2, v6);
    *a1 = 0;
    if ( String )
    v3 = wcslen(String) + 1;
    else
    v3 = 1;
    v4 = (wchar_t *)__2_YAPAXI_Z(2 * v3);
    *a1 = v4;
    *v4 = 0;
    if ( String )
    wcscpy(*a1, String);
    return (CampaignScore *)a1;
}
}
} // namespace gamemd

// 0x7B7ED0
namespace gamemd {
wchar_t ** CharStringToWide(ObjectClass * aP0, const char ** a1)
{
{
    int v4;
    AbstractClass *v5;
    char *v6;
    size_t v7;
    CCINIClass *v8;
    CCINIClass *v9;
    size_t v10;
    wchar_t *v11;
    if ( *a1 )
    v4 = strlen(*a1);
    else
    v4 = 0;
    v5 = (AbstractClass *)__2_YAPAXI_Z(2 * v4 + 2);
    v6 = (char *)*a1;
    if ( !*a1 )
    v6 = &DataGlobal_87C374.__pad_579C[33876];
    BulkCharToWide(v5, (unsigned char *)v6, v4);
    if ( v5 )
    v7 = wcslen((const wchar_t *)v5) + 1;
    else
    v7 = 1;
    v8 = (CCINIClass *)__2_YAPAXI_Z(2 * v7);
    v9 = v8;
    *(short *)v8->__pad_0 = 0;
    if ( v5 )
    wcscpy((wchar_t *)v8, (const wchar_t *)v5);
    __3_YAXPAX_Z(v5);
    *(int *)aP0->__pad_0 = 0;
    if ( v9 )
  {
    v10 = wcslen((const wchar_t *)v9);
    v11 = (wchar_t *)__2_YAPAXI_Z(2 * v10 + 2);
    *(int *)aP0->__pad_0 = v11;
    wcscpy(v11, (const wchar_t *)v9);
    __3_YAXPAX_Z(v9);
  }
    return (wchar_t **)aP0;
}
}
} // namespace gamemd

// 0x7B7F90
namespace gamemd {
char ** sub_7B7F90(char ** a1, const wchar_t ** a2)
{
{
    char **v3;
    size_t v4;
    char *v5;
    wchar_t *v6;
    size_t v7;
    char *v8;
    char *v9;
    v3 = a1;
    if ( *a2 )
    v4 = wcslen(*a2);
    else
    v4 = 0;
    v5 = (char *)__2_YAPAXI_Z(v4 + 1);
    v6 = (wchar_t *)*a2;
    if ( !*a2 )
    v6 = &g_TypeClass_DefaultString;
    CopyWideToChar(v5, (char *)v6, v4);
    if ( v5 )
    v7 = strlen(v5) + 1;
    else
    v7 = 1;
    v8 = (char *)__2_YAPAXI_Z(v7);
    *v8 = 0;
    if ( v5 )
  {
    strcpy(v8, v5);
    v3 = a1;
  }
    __3_YAXPAX_Z(v5);
    *v3 = 0;
    if ( !v8 )
    return v3;
    v9 = (char *)__2_YAPAXI_Z(strlen(v8) + 1);
    *v3 = v9;
    strcpy(v9, v8);
    __3_YAXPAX_Z(v8);
    return a1;
}
}
} // namespace gamemd

// 0x7B8090
namespace gamemd {
wchar_t ** FormatWideStringPrefix(CampaignScore * aP0, const wchar_t * a1, wchar_t ** a2)
{
{
    size_t v5;
    wchar_t *v6;
    wchar_t *v7;
    size_t v8;
    CampaignScore *v9;
    size_t v10;
    wchar_t *v11;
    CampaignScore *v12;
    CCINIClass *String;
    if ( a1 )
    v5 = wcslen(a1) + 1;
    else
    v5 = 1;
    v6 = (wchar_t *)__2_YAPAXI_Z(2 * v5);
    v7 = v6;
    *v6 = 0;
    if ( a1 )
    wcscpy(v6, a1);
    String = 0;
    if ( v7 )
  {
    v8 = wcslen(v7);
    String = (CCINIClass *)__2_YAPAXI_Z(2 * v8 + 2);
    wcscpy((wchar_t *)String, v7);
  }
    v9 = (CampaignScore *)*a2;
    if ( !*a2 )
    v9 = (CampaignScore *)&DataGlobal_87C374.__pad_579C[23588];
    WString::Append((wchar_t **)&String, v9);
    *(int *)aP0->__pad_0 = 0;
    if ( String )
  {
    v10 = wcslen((const wchar_t *)String);
    v11 = (wchar_t *)__2_YAPAXI_Z(2 * v10 + 2);
    v12 = (CampaignScore *)String;
    *(int *)aP0->__pad_0 = v11;
    wcscpy(v11, (const wchar_t *)v12);
    if ( String )
    __3_YAXPAX_Z(String);
  }
    if ( v7 )
    __3_YAXPAX_Z(v7);
    return (wchar_t **)aP0;
}
}
} // namespace gamemd

// 0x7B8170
namespace gamemd {
wchar_t ** ConcatWString(GameSetup * aP0, const wchar_t ** a1, const wchar_t ** a2)
{
{
    wchar_t **v4;
    wchar_t *v5;
    size_t v6;
    wchar_t *v7;
    CCINIClass *v8;
    size_t v9;
    wchar_t *v10;
    size_t v11;
    wchar_t *v12;
    v4 = (wchar_t **)aP0;
    v5 = 0;
    if ( *a1 )
  {
    v6 = wcslen(*a1);
    v5 = (wchar_t *)__2_YAPAXI_Z(2 * v6 + 2);
    wcscpy(v5, *a1);
  }
    v7 = (wchar_t *)*a2;
    if ( *a2 || (v7 = (wchar_t *)&DataGlobal_87C374.__pad_579C[23588], &DataGlobal_87C374 != (IUnknown *)-46016) )
  {
    v8 = (CCINIClass *)v5;
    v9 = wcslen(v7) + 1;
    if ( v5 )
    v9 += wcslen(v5);
    v10 = (wchar_t *)__2_YAPAXI_Z(4 * v9);
    v5 = v10;
    if ( v8 )
    wcscpy(v10, (const wchar_t *)v8);
    else
    *v10 = 0;
    wcscat(v5, (CampaignScore *)v7);
    if ( v8 )
    __3_YAXPAX_Z(v8);
    v4 = (wchar_t **)aP0;
  }
    *v4 = 0;
    if ( v5 )
  {
    v11 = wcslen(v5);
    v12 = (wchar_t *)__2_YAPAXI_Z(2 * v11 + 2);
    *v4 = v12;
    wcscpy(v12, v5);
    __3_YAXPAX_Z(v5);
  }
    return v4;
}
}
} // namespace gamemd

// 0x7B8250
namespace gamemd {
bool E4Recv_7B8250::sub_7B8250(wchar_t * Control)
{
{
    size_t v3;
    if ( !Control || !*(void**)this )
    return 0;
    v3 = wcslen(*(void**)this);
    return wcscspn(*(void**)this, Control) < v3;
}
}
} // namespace gamemd

// 0x7B84B0
namespace gamemd {
int sub_7B84B0()
{
{
    DataGlobal_B78128 = 0;
    DataGlobal_B7812C = 0;
    DataGlobal_B78130 = 0;
    DataGlobal_B78134 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x7B8610
namespace gamemd {
DWORD sub_7B8610(unsigned int * lpThreadParameter)
{
{
    lpThreadParameter[6] = 1;
    lpThreadParameter[2] = 0;
    if ( *lpThreadParameter )
  {
    lpThreadParameter[2] = 1;
    return 0;
  }
    else
  {
    do
    {
    if ( WaitForSingleObject(hMutex, 0x2710u) == 258 )
    Debug::Log();
    if ( DataGlobal_B78164 )
    WWMouseClass::UpdateCursorMovement((LONG *)DataGlobal_B78164);
    ReleaseMutex(hMutex);
    Sleep(lpThreadParameter[4]);
    ++lpThreadParameter[1];
    }
    while ( !*lpThreadParameter );
    lpThreadParameter[2] = 1;
    return 0;
  }
}
}
} // namespace gamemd

// 0x7B9DF0
namespace gamemd {
int E4Recv_7B9DF0::sub_7B9DF0(LONG * a2, LONG * a3)
{
{
    LONG y;
    struct tagPOINT Point;
    GetCursorPos(&Point);
    y = Point.y;
    *a2 = Point.x;
    *a3 = y;
    return this->Vf68(a2, a3);
}
}
} // namespace gamemd

// 0x7BA2F0
namespace gamemd {
void ___CxxRestoreUnhandledExceptionFilter_YAXXZ()
{
{
    ReleaseMutex(hMutex);
}
}
} // namespace gamemd

// 0x7BA5C0
namespace gamemd {
int sub_7BA5C0()
{
{
    DataGlobal_B78178 = 0;
    DataGlobal_B7817C = 0;
    DataGlobal_B78180 = 0;
    DataGlobal_B78184 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x7BBFF0
namespace gamemd {
char sub_7BBFF0(int a1, int a2, int * a4, int arg4, unsigned char * a6, int * a7, int * a8)
{
{
    int *v9;
    IUnknown *v11;
    char v12[20];
    int v13[3];
    v11 = (IUnknown *)(*(int (__thiscall **)(int *, char *, int))(*a4 + 120))(a4, v12, arg4);
    v9 = (int *)(*(int (__thiscall **)(int))(*(int *)(a1) + 120))(a1);
    return CalcSurfaceBlitRects(a1, v9, (IUnknown *)v13, a2, a4, v11, a6, a7, a8);
}
}
} // namespace gamemd

// 0x7BC610
namespace gamemd {
void sub_7BC610(int a1, char * a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
{
    char *v9;
    int v10;
    char v11;
    v9 = (char *)(a1 - 1);
    v10 = a3 + 1;
    while ( --v10 )
  {
    v11 = *a2;
    ++v9;
    ++a2;
    if ( v11 )
    *v9 = v11;
  }
}
}
} // namespace gamemd

// 0x7BC6C0
namespace gamemd {
int E4Recv_7BC6C0::sub_7BC6C0(int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
{
    return this->Vf4(a2, a3, a4, a5, a6, a7, a8, 0);
}
}
} // namespace gamemd

// 0x7BC6F0
namespace gamemd {
int E4Recv_7BC6F0::sub_7BC6F0(int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10)
{
{
    return this->Vf4(a2, a3, a4, a5, a6, a7, a8, 0);
}
}
} // namespace gamemd

// 0x7BC720
namespace gamemd {
int E4Recv_7BC720::sub_7BC720(int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
{
    return this->Vf4(a2, a3, a4, a5, a6, a7, a8, 0);
}
}
} // namespace gamemd

// 0x7BC750
namespace gamemd {
unsigned int sub_7BC750(void * a0, const void * a1, BlitPlain * aP2, int a4, int a5, int a6, int a7, int a8)
{
{
    qmemcpy(a0, a1, (unsigned int)aP2);
    return (unsigned int)aP2;
}
}
} // namespace gamemd

// 0x7BC780
namespace gamemd {
void * sub_7BC780(BlowStraw * aP0, void * Src, ModemGame * aP2, int a4, int a5, int a6, int a7)
{
{
    return memcpy(aP0, (AbstractClass *)Src, (size_t)aP2);
}
}
} // namespace gamemd

// 0x7BC7A0
namespace gamemd {
unsigned int sub_7BC7A0(void * a0, const void * a1, BlitPlain * aP2, int a4, int a5, int a6, int a7, int a8, int a9)
{
{
    qmemcpy(a0, a1, (unsigned int)aP2);
    return (unsigned int)aP2;
}
}
} // namespace gamemd

// 0x7BC7D0
namespace gamemd {
void * sub_7BC7D0(BlowStraw * aP0, void * Src, ModemGame * aP2, int a4, int a5, int a6, int a7, int a8)
{
{
    return memcpy(aP0, (AbstractClass *)Src, (size_t)aP2);
}
}
} // namespace gamemd

// 0x7BC7F0
namespace gamemd {
int sub_7BC7F0(void * a1, const void * a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
{
    qmemcpy(a1, a2, 2 * a3);
    return a3;
}
}
} // namespace gamemd

// 0x7BC820
namespace gamemd {
void * sub_7BC820(BlowStraw * aP0, BombClass * aP1, int a3, int a4, int a5, int a6, int a7)
{
{
    return memcpy(aP0, (AbstractClass *)aP1, 2 * a3);
}
}
} // namespace gamemd

// 0x7BC840
namespace gamemd {
int sub_7BC840(void * a1, const void * a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
{
    qmemcpy(a1, a2, 2 * a3);
    return a3;
}
}
} // namespace gamemd

// 0x7BC870
namespace gamemd {
void * sub_7BC870(BlowStraw * aP0, BombClass * aP1, int a3, int a4, int a5, int a6, int a7, int a8)
{
{
    return memcpy(aP0, (AbstractClass *)aP1, 2 * a3);
}
}
} // namespace gamemd

// 0x7BC890
namespace gamemd {
short sub_7BC890(unsigned short * a1, short * a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
{
    short result;
    int v11;
    result = a3;
    if ( a3 > 0 )
  {
    v11 = a3;
    do
    {
    result = *a2++;
    if ( result )
    *a1 = result;
    ++a1;
    --v11;
    }
    while ( v11 );
  }
    return result;
}
}
} // namespace gamemd

// 0x7BC8C0
namespace gamemd {
int E4Recv_7BC8C0::sub_7BC8C0(int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
{
    return this->Vf4(a2, a3, a4, a5, a6, a7, a8, 0);
}
}
} // namespace gamemd

// 0x7BC8F0
namespace gamemd {
int E4Recv_7BC8F0::sub_7BC8F0(int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10)
{
{
    return this->Vf4(a2, a3, a4, a5, a6, a7, a8, 0);
}
}
} // namespace gamemd

// 0x7BC920
namespace gamemd {
int E4Recv_7BC920::sub_7BC920(int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
{
    return this->Vf4(a2, a3, a4, a5, a6, a7, a8, 0);
}
}
} // namespace gamemd

// 0x7BC950
namespace gamemd {
int sub_7BC950()
{
{
    DataGlobal_B78188 = 0;
    DataGlobal_B7818C = 0;
    DataGlobal_B78190 = 0;
    DataGlobal_B78194 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x7BCAF0
namespace gamemd {
char * sub_7BCAF0(char * a1, int a2, unsigned short a3)
{
{
    char *v3;
    int v4;
    char *result;
    unsigned int v6;
    v3 = a1;
    v4 = a2;
    if ( ((unsigned char)a1 & 2) != 0 && a2 )
  {
    *(short *)a1 = a3;
    v3 = a1 + 2;
    v4 = a2 - 1;
  }
    result = 0;
    v6 = v4 >> 1;
    if ( v4 >> 1 )
  {
    memset32(v3, 65537 * a3, v6);
    result = &v3[4 * v6];
  }
    if ( (v4 & 1) != 0 )
  {
    if ( result )
    *(short *)result = a3;
  }
    return result;
}
}
} // namespace gamemd

// 0x7BD5C0
namespace gamemd {
int sub_7BD5C0(unsigned int * a1, int a2)
{
{
    int v3;
    int v4;
    short v5;
    short *v6;
    unsigned int v7;
    unsigned int v8;
    if ( a2 != *((int*)(a1) + 483) + *((int*)(a1) + 496) && a2 != *((int*)(a1) + 494) )
    return -19;
    v3 = *((int*)(a1) + 489);
    if ( v3 == -1 )
    return -20;
    v4 = *((int*)(a1) + 486);
    v5 = *(short *)(v4 + 2 * v3);
    v6 = (short *)(v4 + 2 * v3);
    if ( v5 )
  {
    *v6 = v5 - 1;
    return -1;
  }
    else
  {
    v7 = v3 + 1;
    *(char *)(*((int*)(a1) + 485) + v7 - 1) = 0;
    if ( v7 >= *((int*)(a1) + 487) )
    v7 = 0;
    if ( *(char *)(*((int*)(a1) + 485) + v7) == 1 )
    {
    v8 = *((int*)(a1) + 39) + *((int*)(a1) + 496);
    *((int*)(a1) + 496) = v8;
    if ( v8 >= *((int*)(a1) + 38) )
    *((int*)(a1) + 496) = 0;
    *((int*)(a1) + 489) = v7;
    return -1;
    }
    else
    {
    *((int*)(a1) + 489) = -1;
    return -1;
    }
  }
}
}
} // namespace gamemd

// 0x7BE940
namespace gamemd {
char sub_7BE940(int a1, int * a2)
{
{
    int v4;
    int *v5;
    int (__cdecl *v6)(int, int, int, int);
    int v7;
    int v8;
    int v9;
    int v10;
    int v11;
    int v12;
    int v14;
    int *v15;
    int v16;
    int v17;
    LOBYTE(v4) = *(char *)(a1 + 420);
    v5 = (int *)*((int*)(a2) + 1);
    v15 = v5;
    if ( (v4 & 2) == 0 && ((v6 = *(int (__cdecl **)(int, int, int, int))(a1 + 72)) != 0 && (v4 = v6(a1, 6, 0, 0)) != 0 || (v4 = *(int *)(a1 + 424)) != 0) )
  {
    v7 = *(int *)(a1 + 1732);
    v8 = *(int *)(a1 + 1736);
    v9 = v4 + *(int *)(a1 + 444);
    v17 = v7;
    v16 = v8;
    if ( (*((int*)(a2) + 5) & 0x40) != 0 )
    v10 = *(int *)(a1 + 1768);
    else
    v10 = *a2;
    v11 = v5[3];
    if ( (v11 & 4) != 0 )
    v12 = *(int *)(a1 + 1776);
    else
    v12 = *v5;
    if ( *(int *)(a1 + 72) && (v11 & 8) != 0 )
    {
    LOBYTE(v11) = v11 & 0xF7;
    v15[3] = v11;
    (*(void (__cdecl **)(int, int, int, int))(a1 + 72))(a1, 3, v12, v15[5]);
    v8 = v16;
    v7 = v17;
    }
    v14 = *(int *)(a1 + 428);
    if ( (*((int*)(a2) + 5) & 0x20) != 0 )
    (*(void (__cdecl **)(int, int, int, int, int, int))(a1 + 1928))(v12, v10, v9, v7, v8, v14);
    else
    (*(void (__cdecl **)(int, int, int, int, int, int))(a1 + 1924))(v12, v10, v9, v7, v8, v14);
    v4 = *(int *)(a1 + 72);
    if ( v4 )
    LOBYTE(v4) = ((int (__cdecl *)(int, int, int, int))v4)(a1, 7, 0, 0);
  }
    return v4;
}
}
} // namespace gamemd

// 0x7BEA40
namespace gamemd {
int E4Recv_7BEA40::sub_7BEA40()
{
{
    int result;
    int v3;
    result = AudioStream::ProcessStream(this);
    if ( result == -1 )
  {
    sub_7BEFE0(this);
    v3 = this->M416;
    this->M1756 = v3;
    if ( ((unsigned char)this->M420 & 8) == 0 )
    this->M416 = *(int *)(v3 + 12);
    return -1;
  }
    return result;
}
}
} // namespace gamemd

// 0x7BF140
namespace gamemd {
int E4Recv_7BF140::sub_7BF140()
{
{
    int result;
    int *v3;
    result = AudioStream::ProcessStream(this);
    if ( result == -1 )
  {
    sub_7BEFE0(this);
    v3 = *(int **)(this + 416);
    sub_7BE940(this, v3);
    this->M1756 = v3;
    if ( ((unsigned char)this->M420 & 8) == 0 )
    this->M416 = v3[3];
    return -1;
  }
    return result;
}
}
} // namespace gamemd

// 0x7BF220
namespace gamemd {
void nullsub_49()
{
  ;
}
} // namespace gamemd

// 0x7BF230
namespace gamemd {
int _underflow___basic_streambuf_DU__char_traits_D_std___std__MAEHXZ_7()
{
return -1;
}
} // namespace gamemd

// 0x7BF240
namespace gamemd {
int sub_7BF240(int a1, int a2, char * DstBuf, int MaxCharCount)
{
{
    int result;
    int v5;
    int v6;
    int v7;
    result = 0;
    v5 = *(int *)(a1 + 184);
    switch ( a2 )
  {
    case 1: case 2: return 0;
    case 3: result = _open(DstBuf, 0x8000);
    if ( result != -1 )
      {
    *(int *)(a1 + 184) = result;
    return 0;
      }
    return result;
    case 4: _close(*(int *)(a1 + 184));
    return 0;
    case 5: v6 = MaxCharCount;
    return _read(v5, DstBuf, MaxCharCount) != v6;
    case 6: return 1;
    case 7: v7 = _lseek(v5, MaxCharCount, (int)DstBuf);
    return v7 == -1;
    case 8: if ( MaxCharCount <= 0 )
      {
    result = _lseek(v5, MaxCharCount, (int)DstBuf) == -1;
    if ( !result )
        {
    result = _read(v5, &MaxCharCount, 1u) != 1;
    if ( !result )
          {
    v7 = _lseek(v5, -1, 1);
    return v7 == -1;
          }
        }
      }
    else
      {
    result = _lseek(v5, MaxCharCount - 1, (int)DstBuf) == -1;
    if ( !result )
    return _read(v5, &MaxCharCount, 1u) != 1;
      }
    return result;
    case 9: *(int *)DstBuf = _filelength(*(int *)(a1 + 184));
    return 0;
    default: return result;
  }
}
}
} // namespace gamemd

// 0x7BF3A0
namespace gamemd {
int sub_7BF3A0(unsigned int * a1, int a2, void * a3, signed int a4)
{
{
    int result;
    int v5;
    int v6;
    result = 0;
    switch ( a2 )
  {
    case 1: case 2: case 3: case 4: case 9: return 0;
    case 5: v5 = *((int*)(a1) + 449);
    if ( v5 + a4 > *((int*)(a1) + 448) )
    return 1;
    qmemcpy(a3, (const void *)(v5 + *((int*)(a1) + 445)), a4);
    *((int*)(a1) + 449) += a4;
    return 0;
    case 6: return 1;
    case 7: case 8: if ( !a3 )
      {
    v6 = *((int*)(a1) + 447);
    if ( a4 >= v6 )
        {
    *((int*)(a1) + 449) = a4 - v6;
    return result;
        }
    return 1;
      }
    if ( a3 != (void *)1 )
    return 1;
    *((int*)(a1) + 449) += a4;
    return 0;
    default: return result;
  }
}
}
} // namespace gamemd
