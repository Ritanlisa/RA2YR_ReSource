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
#include "e4/classes/AudioStream_e4.hpp"
#include "e4/classes/BSurface_e4.hpp"
#include "e4/classes/Building_e4.hpp"
#include "e4/classes/CellStruct_e4.hpp"
#include "e4/classes/Debug_e4.hpp"
#include "e4/classes/Math_e4.hpp"
#include "e4/classes/Mouse_e4.hpp"
#include "e4/classes/WideString_e4.hpp"
#include "e4/classes/E4Recv_7BF140_e4.hpp"
#include "e4/classes/E4Recv_7BF190_e4.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/UDPInterfaceClass_e4.hpp"
#include "e4/classes/ObjectClass_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/String_e4.hpp"
#include "e4/classes/ComPtr_e4.hpp"
#include "e4/classes/Socket_e4.hpp"
#include "e4/classes/Waypoint_e4.hpp"
#include "e4/classes/Timer_e4.hpp"
#include "e4/classes/Dialog_e4.hpp"

// 0x7B0310
namespace gamemd {
void * * sub_7B0310()
{
  return (void **)(dword_B77F54);
}
}
// 0x7B0340
namespace gamemd {
void * * sub_7B0340()
{
  return (void **)(dword_B77F60);
}
}
// 0x7B05C0
namespace gamemd {
AbstractClass * * Screenshot_Compress(int * a1, int * a2, void * Src)
{
  int v5; // ebx
  int v6; // eax
  int16_t v7; // ax
  int v8; // edx
  int16_t v9; // ax
  int v10; // edx
  int v11; // eax
  int v12; // eax
  int v13; // edx
  int v14; // eax
  int16_t v15; // ax
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
  unsigned char *v27; // edi
  uint16_t v28; // bx
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
  char v47; // [esp+47h] [ebp-3A9h] BYREF
  int v48; // [esp+48h] [ebp-3A8h]
  void *v49; // [esp+4Ch] [ebp-3A4h]
  int v50; // [esp+50h] [ebp-3A0h]
  uint16_t *v52; // [esp+58h] [ebp-398h]
  void *Block; // [esp+5Ch] [ebp-394h]
  unsigned char v54[4]; // [esp+60h] [ebp-390h] BYREF
  int16_t v55; // [esp+64h] [ebp-38Ch]
  int16_t v56; // [esp+66h] [ebp-38Ah]
  int16_t v57; // [esp+68h] [ebp-388h]
  uint16_t v58; // [esp+6Ah] [ebp-386h]
  int16_t v60; // [esp+6Eh] [ebp-382h]
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
  uint16_t v108; // [esp+A2h] [ebp-34Eh]
  int16_t v109; // [esp+A4h] [ebp-34Ch]
  int16_t v111; // [esp+A8h] [ebp-348h]
  char v112; // [esp+AAh] [ebp-346h]
  unsigned char v113[53]; // [esp+ABh] [ebp-345h] BYREF
  int v114; // [esp+E0h] [ebp-310h]
  int v115; // [esp+E4h] [ebp-30Ch]
  char *v116; // [esp+E8h] [ebp-308h]
  unsigned char v117[768]; // [esp+F0h] [ebp-300h] BYREF

  v5 = 0; /*0x7b05cd*/
  v6 = *a2; /*0x7b05cf*/
  v54[0] = 10; /*0x7b05d4*/
  v54[1] = 5; /*0x7b05d9*/
  v54[2] = 1; /*0x7b05de*/
  v54[3] = 8; /*0x7b05e3*/
  v55 = 0; /*0x7b05e8*/
  v56 = 0; /*0x7b05ed*/
  v7 = (*(int (**)(int *))(v6 + 124))(a2); /*0x7b05f2*/
  v8 = *a2; /*0x7b05f5*/
  v57 = v7 - 1; /*0x7b05fa*/
  v58 = (*(int (**)(int *))(v8 + 128))(a2) - 1; /*0x7b0608*/
  v9 = (*(int (**)(int *))(*a2 + 124))(a2); /*0x7b060f*/
  v10 = *a2; /*0x7b0612*/
  v9 = v9; /*0x7b0616*/
  v60 = (*(int (**)(int *))(v10 + 128))(a2); /*0x7b0621*/
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
  v12 = (*(int (**)(int *))(v11 + 112))(a2); /*0x7b06ee*/
  v13 = *a2; /*0x7b06f4*/
  v107 = v12 != 2 ? 1 : 3;
  v108 = (*(int (**)(int *))(v13 + 124))(a2); /*0x7b0707*/
  v14 = *a2; /*0x7b070c*/
  v109 = 1; /*0x7b0710*/
  v15 = (*(int (**)(int *))(v14 + 124))(a2); /*0x7b0717*/
  v16 = *a2; /*0x7b071a*/
  v15 = v15; /*0x7b071e*/
  v111 = (*(int (**)(int *))(v16 + 128))(a2); /*0x7b0729*/
  v112 = 0; /*0x7b0739*/
  v45 = 0; /*0x7b073d*/
  memset(v113, 0, sizeof(v113)); /*0x7b0741*/
  if ( !(*(uint8_t (**)(int *))(*a1 + 24))(a1) ) /*0x7b0749*/
  {
    (*(void (**)(int *, int))(*a1 + 28))(a1, 2); /*0x7b0757*/
    v45 = 1; /*0x7b075a*/
  }
  (*(void (**)(int *, unsigned char *, int))(*a1 + 48))(a1, v54, 128); /*0x7b076e*/
  if ( (*(int (**)(int *))(*a2 + 112))(a2) != 2 ) /*0x7b077b*/
  {
    if ( v58 + 1 <= 0 ) /*0x7b097c*/
      goto LABEL_33; /*0x7b097c*/
    v116 = 0; /*0x7b0982*/
    while ( 1 ) /*0x7b0999*/
    {
      v35 = (char *)(*(int (**)(int *, char *, int))(*a2 + 92))(a2, v116, v5); /*0x7b0999*/
      v36 = 1; /*0x7b099b*/
      v37 = *v35; /*0x7b09a1*/
      v43 = *v35; /*0x7b09ac*/
      if ( v108 > 1u ) /*0x7b09b0*/
      {
        v48 = v108 - 1; /*0x7b09b7*/
        do /*0x7b0a3a*/
        {
          v38 = *++v35; /*0x7b09bb*/
          v38 = v38; /*0x7b09c1*/
          if ( v38 == v37 ) /*0x7b09c5*/
          {
            if ( ++v36 == 47 ) /*0x7b09cb*/
            {
              (*(void (**)(int *, char *, int))(*a1 + 48))(a1, &byte_7F7930, 1); /*0x7b09d9*/
              (*(void (**)(int *, char *, int))(*a1 + 48))(a1, &v38, 1); /*0x7b09e8*/
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
                a1->vt_slot_48(&v44, 1); /*0x7b0a15*/
              }
              (*(void (**)(int *, char *, int))(*a1 + 48))(a1, &v43, 1); /*0x7b0a24*/
            }
            v37 = v38; /*0x7b0a27*/
            v36 = 1; /*0x7b0a2b*/
            v43 = v38; /*0x7b0a2d*/
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
        a1->vt_slot_48(&v44, 1); /*0x7b0a62*/
      }
      (*(void (**)(int *, char *, int))(*a1 + 48))(a1, &v43, 1); /*0x7b0a71*/
  LABEL_32:
      (*(void (**)(int *))(*a2 + 96))(a2); /*0x7b0a74*/
      if ( ++v5 >= v58 + 1 ) /*0x7b0a88*/
        goto LABEL_33; /*0x7b0a88*/
    }
  }
  v17 = (*(int (**)(int *))(*a2 + 124))(a2); /*0x7b0785*/
  v18 = RA2_OPNEW(v17); /*0x7b0789*/
  v19 = *a2; /*0x7b078e*/
  Block = v18; /*0x7b0795*/
  v20 = (*(int (**)(int *))(v19 + 124))(a2); /*0x7b0799*/
  v49 = RA2_OPNEW(v20); /*0x7b07a2*/
  v21 = (*(int (**)(int *))(*a2 + 124))(a2); /*0x7b07ad*/
  v22 = RA2_OPNEW(v21); /*0x7b07b1*/
  v23 = *a2; /*0x7b07b6*/
  v22 = v22; /*0x7b07bd*/
  v24 = (*(int (**)(int *))(v23 + 124))(a2); /*0x7b07c1*/
  v25 = (char *)RA2_OPNEW(10 * v24); /*0x7b07dc*/
  v116 = v25; /*0x7b07df*/
  v50 = 0; /*0x7b07e8*/
  if ( v58 + 1 <= 0 ) /*0x7b07f0*/
  {
  LABEL_11:
    RA2_OPDEL(Block); /*0x7b0934*/
    RA2_OPDEL(v49); /*0x7b0943*/
    RA2_OPDEL(v22); /*0x7b094d*/
    RA2_OPDEL(v25); /*0x7b0953*/
  LABEL_33:
    v41 = *a1; /*0x7b0a8e*/
    v47 = 12; /*0x7b0a9a*/
    a1->vt_slot_48(&v47, 1); /*0x7b0a9f*/
    if ( (*(int (**)(int *))(*a2 + 112))(a2) == 1 ) /*0x7b0aac*/
    {
      memcpy(v117, Src, sizeof(v117)); /*0x7b0ac3*/
      (*(void (**)(int *, unsigned char *, int))(*a1 + 48))(a1, v117, 768); /*0x7b0add*/
    }
    if ( v45 ) /*0x7b0ae6*/
      (*(void (**)(int *))(*a1 + 52))(a1); /*0x7b0aed*/
    return 0; /*0x7b0af3*/
  }
  while ( 1 ) /*0x7b0807*/
  {
    v52 = (uint16_t *)((gamemd::AbstractClass **)((uint16_t *)(*(int (**)(int *, unsigned int, int))(*a2 + 92))(a2, 0, v50)));
    if ( !v52 ) /*0x7b080b*/
      return 1; /*0x7b0960*/
    v26 = *a2; /*0x7b0811*/
    v48 = 0; /*0x7b0815*/
    if ( (*(int (**)(int *))(v26 + 124))(a2) > 0 ) /*0x7b0822*/
    {
      v27 = (unsigned char *)(v49);
      v114 = (unsigned char *)Block - (unsigned char *)v49; /*0x7b0834*/
      v115 = (unsigned char *)v22 - (unsigned char *)v49; /*0x7b0841*/
      do /*0x7b08b9*/
      {
        v28 = *v52++; /*0x7b0853*/
        v29 = (uint8_t)(v28 >> g_BitShift_Red) << g_BitShift_Green_0; /*0x7b086a*/
        v30 = (uint8_t)(v28 >> g_BitMask_Green) << g_BitMask_Blue; /*0x7b087c*/
        IDA_LOBYTE(v28) = (uint8_t)(v28 >> g_BitShift_Blue) << g_BitMask_Red; /*0x7b088e*/
        v27[v114] = v29; /*0x7b0897*/
        *v27 = v30; /*0x7b089a*/
        v27[v115] = v28; /*0x7b08a5*/
        v31 = *a2; /*0x7b08ac*/
        ++v48; /*0x7b08af*/
        ++v27; /*0x7b08b3*/
      }
      while ( v48 < (*(int (**)(int *))(v31 + 124))(a2) ); /*0x7b08b9*/
      v25 = v116; /*0x7b08bb*/
    }
    (*(void (**)(int *))(*a2 + 96))(a2); /*0x7b08c6*/
    (*(void (**)(int *, char *))(*a2 + 124))(a2, v25); /*0x7b08ce*/
    v32 = EncodeScreenshotRLE(v42); /*0x7b08de*/
    (*(void (**)(int *))(*a2 + 124))(a2); /*0x7b08e6*/
    v33 = EncodeScreenshotRLE(&v25[v32]) + v32; /*0x7b08f6*/
    (*(void (**)(int *))(*a2 + 124))(a2); /*0x7b08fe*/
    v42 = EncodeScreenshotRLE(&v25[v33]) + v33; /*0x7b0911*/
    (*(void (**)(int *, char *))(*a1 + 48))(a1, v25); /*0x7b0915*/
    if ( ++v50 >= v58 + 1 ) /*0x7b092e*/
      goto LABEL_11; /*0x7b092e*/
  }
}
}
// 0x7B0B00
namespace gamemd {
void Screenshot_EncodeRLE(int a1, char * a2, int a3)
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
      *(unsigned char *)(result + a3) = v6; /*0x7b0b8b*/
      return ++result; /*0x7b0b8e*/
    }
  LABEL_16:
    *(unsigned char *)(result + a3) = v5 | 0xC0; /*0x7b0b84*/
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
        *(unsigned char *)(result + a3) = -17; /*0x7b0b31*/
        v9 = result + 1; /*0x7b0b34*/
        *(unsigned char *)(v9 + a3) = v8; /*0x7b0b35*/
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
          *(unsigned char *)(result + a3) = v5 | 0xC0; /*0x7b0b61*/
          v10 = result + 1; /*0x7b0b64*/
          *(unsigned char *)(v10 + a3) = v6; /*0x7b0b65*/
          result = v10 + 1; /*0x7b0b68*/
        }
        else
        {
          *(unsigned char *)(result + a3) = v6; /*0x7b0b54*/
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
// 0x7B2E50
namespace gamemd {
CampaignClass * * E4Recv_7B2E50::sub_7B2E50()
{

  int v2; // eax
  int v3; // ecx
  int v4; // eax
  int v5; // eax
  int v6; // ecx
  int v7; // eax
  void *v8; // eax
  void *v9; // eax

  this->Socket = (int)&vt_UDPInterfaceClass; /*0x7b2e56*/
  while ( *((unsigned int *)this + 64722) ) /*0x7b2e5c*/
  {
    __3_YAXPAX_Z(**((void ***)this + 64719)); /*0x7b2e6f*/
    v2 = *((unsigned int *)this + 64722); /*0x7b2e74*/
    if ( v2 > 0 ) /*0x7b2e7f*/
    {
      v3 = v2 - 1; /*0x7b2e81*/
      v4 = 0; /*0x7b2e84*/
      for ( *((unsigned int *)this + 64722) = v3; /*0x7b2e8e*/
            v4 < *((unsigned int *)this + 64722);
            *(unsigned int *)(*((unsigned int *)this + 64719) + 4 * v4 - 4) = *(unsigned int *)(*((unsigned int *)this + 64719) + 4 * v4) )
      {
        ++v4; /*0x7b2e96*/
      }
    }
  }
  while ( *((unsigned int *)this + 64856) ) /*0x7b2eb0*/
  {
    __3_YAXPAX_Z(**((void ***)this + 64853)); /*0x7b2ec1*/
    v5 = *((unsigned int *)this + 64856); /*0x7b2ec6*/
    if ( v5 > 0 ) /*0x7b2ed1*/
    {
      v6 = v5 - 1; /*0x7b2ed3*/
      v7 = 0; /*0x7b2ed6*/
      for ( *((unsigned int *)this + 64856) = v6; /*0x7b2ee0*/
            v7 < *((unsigned int *)this + 64856);
            *(unsigned int *)(*((unsigned int *)this + 64853) + 4 * v7 - 4) = *(unsigned int *)(*((unsigned int *)this + 64853) + 4 * v7) )
      {
        ++v7; /*0x7b2ee8*/
      }
    }
  }
  UDPInterfaceClass::connect(this); /*0x7b2f04*/
  v8 = (void *)*((unsigned int *)this + 64853); /*0x7b2f09*/
  *((unsigned int *)this + 64852) = &vt_VectorClass; /*0x7b2f0f*/
  if ( v8 && *((unsigned char *)this + 259421) ) /*0x7b2f1d*/
  {
    __3_YAXPAX_Z(v8); /*0x7b2f26*/
    *((unsigned int *)this + 64853) = 0; /*0x7b2f2e*/
  }
  *((unsigned char *)this + 259421) = 0; /*0x7b2f34*/
  *((unsigned int *)this + 64854) = 0; /*0x7b2f3a*/
  v9 = (void *)*((unsigned int *)this + 64719); /*0x7b2f40*/
  *((unsigned int *)this + 64718) = &vt_VectorClass; /*0x7b2f46*/
  if ( v9 && *((unsigned char *)this + 258885) ) /*0x7b2f54*/
  {
    __3_YAXPAX_Z(v9); /*0x7b2f5d*/
    *((unsigned int *)this + 64719) = 0; /*0x7b2f65*/
  }
  *((unsigned char *)this + 258885) = 0; /*0x7b2f6d*/
  *((unsigned int *)this + 64720) = 0; /*0x7b2f73*/
  WinsockInterfaceClass::WinsockInterfaceClass((int)this); /*0x7b2f79*/

}
}
// 0x7B4620
namespace gamemd {
void ObjectClass::unknown_libname_73()
{

  *this = 0; /*0x7b4622*/
  return this; /*0x7b4628*/

}
}
// 0x7B60E0
namespace gamemd {
AbstractClass * * E4Recv_7B60E0::sub_7B60E0(signed int a2, void ** a3)
{

  signed int v5; // esi
  signed int v6; // ecx
  signed int v8; // ecx
  unsigned char *vtable0; // eax
  const char *v10; // esi
  size_t v11; // ecx
  unsigned char *v12; // eax
  const char *v13; // edi
  void * v14;
  char *v15; // eax
  char *v16; // ebp
  const char *v17; // esi
  size_t v18; // ecx
  unsigned char *v19; // eax
  void * v20;

  v5 = a2; /*0x7b60ec*/
  if ( this->AbstractClass ) /*0x7b60ea*/
    v6 = strlen((const char *)this->AbstractClass); /*0x7b60ff*/
  else
    v6 = 0; /*0x7b60f2*/
  if ( a2 >= v6 ) /*0x7b6102*/
    return -1; /*0x7b6107*/
  while ( 1 )
  {
    v8 = this->AbstractClass ? strlen((const char *)this->AbstractClass) : 0;
    if ( v5 >= v8 || strchr(String2, *((char *)this->AbstractClass + v5)) ) /*0x7b6132*/
      break; /*0x7b6132*/
    ++v5; /*0x7b613e*/
  }
  vtable0 = (unsigned char *)((const char *)(this->AbstractClass));
  v20 = (void *)((int)((void *)(v5)));
  if ( *((unsigned char *)this->AbstractClass + v5) == 13 && vtable0[v5 + 1] == 10 ) /*0x7b6152*/
    v20 = v5 + 1; /*0x7b6155*/
  v10 = &vtable0[a2]; /*0x7b615d*/
  if ( *a3 ) /*0x7b6160*/
    __3_YAXPAX_Z(*a3); /*0x7b6167*/
  *a3 = (const char *)(0);
  if ( v10 ) /*0x7b6177*/
    v11 = strlen(v10) + 1; /*0x7b6180*/
  else
    v11 = 1; /*0x7b6186*/
  v12 = (unsigned char *)__2_YAPAXI_Z(v11); /*0x7b618c*/
  *a3 = v12; /*0x7b6194*/
  *v12 = 0; /*0x7b6198*/
  if ( v10 ) /*0x7b619b*/
    strcpy((char *)*a3, v10); /*0x7b61b3*/
  v13 = &g_INI_DefaultBuffer; /*0x7b61c4*/
  v14 = (unsigned int)(v20)- a2 + 1; /*0x7b61c9*/
  if ( *a3 ) /*0x7b61c0*/
    v13 = (const char *)*a3; /*0x7b61ce*/
  v15 = (char *)__2_YAPAXI_Z((unsigned int)(v20)- a2 + 2); /*0x7b61d4*/
  v16 = v15; /*0x7b61d9*/
  *v15 = 0; /*0x7b61e0*/
  if ( v13 ) /*0x7b61e4*/
    strncpy(v15, v13, v14); /*0x7b61e9*/
  v16[v14] = 0; /*0x7b61f1*/
  v17 = &g_INI_DefaultBuffer; /*0x7b61f5*/
  if ( v16 ) /*0x7b61fc*/
    v17 = v16; /*0x7b61fe*/
  if ( *a3 ) /*0x7b6200*/
    __3_YAXPAX_Z(*a3); /*0x7b6207*/
  *a3 = 0; /*0x7b6211*/
  if ( v17 ) /*0x7b6217*/
    v18 = strlen(v17) + 1; /*0x7b6220*/
  else
    v18 = 1; /*0x7b6226*/
  v19 = (unsigned char *)__2_YAPAXI_Z(v18); /*0x7b622c*/
  *a3 = v19; /*0x7b6234*/
  *v19 = 0; /*0x7b6238*/
  if ( v17 ) /*0x7b623b*/
    strcpy((char *)*a3, v17); /*0x7b6253*/
  if ( v16 ) /*0x7b625e*/
    __3_YAXPAX_Z(v16); /*0x7b6261*/
  return (unsigned int)(v20)+ 1; /*0x7b6104*/

}
}
// 0x7B63C0
namespace gamemd {
char ** ProcessStringAndCopy(AbstractClass * aP0, CCINIClass * aP1, char ** a2)
{
  size_t v5; // ecx
  char *v6; // ebx
  char *v7; // eax
  char *v8; // edx
  char *Block; // [esp+10h] [ebp-4h]

  if ( aP1 ) /*0x7b63cb*/
    v5 = strlen(aP1) + 1; /*0x7b63d4*/
  else
    v5 = 1; /*0x7b63da*/
  v6 = (char *)RA2_OPNEW(v5); /*0x7b63e5*/
  *v6 = 0; /*0x7b63ec*/
  if ( aP1 ) /*0x7b63ef*/
    strcpy(v6, aP1); /*0x7b6407*/
  Block = 0; /*0x7b6412*/
  if ( v6 ) /*0x7b641a*/
  {
    Block = (char *)RA2_OPNEW(strlen(v6) + 1); /*0x7b6439*/
    strcpy(Block, v6); /*0x7b644c*/
  }
  v7 = (char *)(*a2);
  if ( !*a2 ) /*0x7b6459*/
    v7 = &g_INI_DefaultBuffer; /*0x7b645f*/
  String_Process_7B4A10(v7); /*0x7b6469*/
  *(unsigned int *)aP0 = 0; /*0x7b6472*/
  if ( Block ) /*0x7b647b*/
  {
    v8 = (char *)RA2_OPNEW(strlen(Block) + 1); /*0x7b6490*/
    *aP0 = v8; /*0x7b649a*/
    strcpy(v8, Block); /*0x7b64ac*/
    RA2_OPDEL(Block); /*0x7b64be*/
  }
  if ( v6 ) /*0x7b64c8*/
    RA2_OPDEL(v6); /*0x7b64cb*/
  return aP0; /*0x7b64d3*/
}
}
// 0x7B64E0
namespace gamemd {
char ** ConcatStringAlloc(ObjectClass * aP0, const char ** a1, char ** a2)
{
  char **v4; // ebp
  char *v5; // ebx
  const char *v6; // eax
  const char *v7; // esi
  char *v8; // ebp
  unsigned int v9; // kr14_4
  size_t v10; // edx
  char *v11; // eax
  char *v12; // edx
  char *v15; // [esp+18h] [ebp+4h]

  v4 = (char **)(aP0);
  v5 = 0; /*0x7b64eb*/
  if ( *a1 ) /*0x7b64e9*/
  {
    v5 = (char *)RA2_OPNEW(strlen(*a1) + 1); /*0x7b6506*/
    strcpy(v5, *a1); /*0x7b651f*/
  }
  v6 = *a2; /*0x7b652c*/
  if ( *a2 ) /*0x7b652c*/
  {
    v15 = *a2; /*0x7b653d*/
    v7 = v6; /*0x7b6541*/
  }
  else
  {
    v7 = (char *)(&g_INI_DefaultBuffer);
    v15 = (char *)(&g_INI_DefaultBuffer);
  }
  if ( v7 ) /*0x7b6545*/
  {
    v8 = v5; /*0x7b6552*/
    v9 = strlen(v7) + 1; /*0x7b6554*/
    v10 = v9; /*0x7b655b*/
    if ( v5 ) /*0x7b655e*/
      v10 = strlen(v5) + v9; /*0x7b656a*/
    v11 = (char *)RA2_OPNEW(v10); /*0x7b656d*/
    v5 = v11; /*0x7b6575*/
    if ( v8 ) /*0x7b6579*/
    {
      strcpy(v11, v8); /*0x7b6591*/
      v7 = v15; /*0x7b659a*/
    }
    else
    {
      *v11 = 0; /*0x7b65a0*/
    }
    strcat(v11, v7); /*0x7b65c1*/
    if ( v8 ) /*0x7b65cc*/
      RA2_OPDEL(v8); /*0x7b65cf*/
    v4 = aP0; /*0x7b65d7*/
  }
  *v4 = 0; /*0x7b65dd*/
  if ( v5 ) /*0x7b65e4*/
  {
    v12 = (char *)RA2_OPNEW(strlen(v5) + 1); /*0x7b65f7*/
    *v4 = v12; /*0x7b6600*/
    strcpy(v12, v5); /*0x7b6613*/
    RA2_OPDEL(v5); /*0x7b661c*/
  }
  return v4; /*0x7b6624*/
}
}
// 0x7B66C0
namespace gamemd {
void ObjectClass::unknown_libname_74()
{

  *this = 0; /*0x7b66c2*/
  return this; /*0x7b66c8*/

}
}
// 0x7B7C00
namespace gamemd {
AbstractClass * * E4Recv_7B7C00::sub_7B7C00(int a2, void ** a3)
{

  void * v5;
  void *vtable0; // eax
  void *v8; // eax
  unsigned short *v9; // eax
  void * v10;
  const wchar_t *v11; // esi
  int v12; // eax
  unsigned short *v13; // eax
  void * v14;
  const wchar_t *v15; // ebp
  wchar_t *v16; // eax
  wchar_t *v17; // ebx
  const wchar_t *v18; // esi
  int v19; // eax
  unsigned short *v20; // eax
  void * v21;

  v5 = (void *)((int)((void *)(a2)));
  vtable0 = (void *)(this->AbstractClass);
  if ( this->AbstractClass ) /*0x7b7c0b*/
    vtable0 = (void *)wcslen((const wchar_t *)this->AbstractClass); /*0x7b7c12*/
  if ( a2 >= (int)vtable0 ) /*0x7b7c1c*/
    return -1; /*0x7b7c20*/
  while ( 1 ) /*0x7b7c27*/
  {
    v8 = (void *)(this->AbstractClass);
    if ( this->AbstractClass ) /*0x7b7c27*/
      v8 = (void *)wcslen((const wchar_t *)this->AbstractClass); /*0x7b7c2e*/
    if ( v5 >= (void *)((int))v8 || strchr(String2, *((uint16_t *)(unsigned int)(this-)>AbstractClass + v5)) ) /*0x7b7c48*/
      break; /*0x7b7c48*/
    ++v5; /*0x7b7c54*/
  }
  v9 = (unsigned short *)(this->AbstractClass);
  v21 = (void *)((int)(v5));
  if ( *((unsigned short *)(unsigned int)(this->AbstractClass)+ v5) == 13 ) /*0x7b7c62*/
  {
    v10 = ((unsigned int)(void)*)((int)(v5 + 1));
    if ( v9[v10] == 10 ) /*0x7b7c6a*/
      v21 = v10; /*0x7b7c6c*/
  }
  v11 = (const wchar_t *)(&v9[a2]);
  if ( *a3 ) /*0x7b7c77*/
    __3_YAXPAX_Z(*a3); /*0x7b7c7e*/
  *a3 = (const wchar_t *)(0);
  if ( v11 ) /*0x7b7c8e*/
    v12 = wcslen(v11) + 1; /*0x7b7c99*/
  else
    v12 = 1; /*0x7b7c9c*/
  v13 = (unsigned short *)__2_YAPAXI_Z(2 * v12); /*0x7b7ca5*/
  *a3 = v13; /*0x7b7cad*/
  *v13 = 0; /*0x7b7cb1*/
  if ( v11 ) /*0x7b7cb6*/
    wcscpy((wchar_t *)*a3, v11); /*0x7b7cbc*/
  v14 = (unsigned int)(v21)- a2 + 1; /*0x7b7ccd*/
  v15 = &g_TypeClass_DefaultString; /*0x7b7cce*/
  if ( *a3 ) /*0x7b7cc8*/
    v15 = (const wchar_t *)*a3; /*0x7b7cd7*/
  v16 = (wchar_t *)__2_YAPAXI_Z(2 * v14 + 2); /*0x7b7cde*/
  v17 = v16; /*0x7b7ce3*/
  *v16 = 0; /*0x7b7cea*/
  if ( v15 ) /*0x7b7cef*/
    wcsncpy(v16, v15, v14); /*0x7b7cf4*/
  v17[v14] = 0; /*0x7b7cfc*/
  v18 = &g_TypeClass_DefaultString; /*0x7b7d05*/
  if ( v17 ) /*0x7b7d0a*/
    v18 = v17; /*0x7b7d0c*/
  if ( *a3 ) /*0x7b7d0e*/
    __3_YAXPAX_Z(*a3); /*0x7b7d15*/
  *a3 = 0; /*0x7b7d1f*/
  if ( v18 ) /*0x7b7d25*/
    v19 = wcslen(v18) + 1; /*0x7b7d30*/
  else
    v19 = 1; /*0x7b7d33*/
  v20 = (unsigned short *)__2_YAPAXI_Z(2 * v19); /*0x7b7d3c*/
  *a3 = v20; /*0x7b7d44*/
  *v20 = 0; /*0x7b7d48*/
  if ( v18 ) /*0x7b7d4d*/
    wcscpy((wchar_t *)*a3, v18); /*0x7b7d53*/
  if ( v17 ) /*0x7b7d5d*/
    __3_YAXPAX_Z(v17); /*0x7b7d60*/
  return (unsigned int)(v21)+ 1; /*0x7b7c1e*/

}
}
// 0x7B9530
namespace gamemd {
AbstractClass * * E4Recv_7B9530::sub_7B9530()
{

  int v2; // edi
  int v3; // ebx
  int v4; // ebp
  int v5; // eax
  int *FoundationSize; // eax
  int v7; // edi
  int abstractFlags; // edx
  int v9; // ebx
  int v10; // ecx
  int nextArrayIndex; // eax
  int v12; // ecx
  ObjectClass *nextObject; // ecx
  char *v14; // ebx
  int v15; // ecx
  int occupant; // [esp-1Ch] [ebp-50h]
  unsigned int v18[4]; // [esp+4h] [ebp-30h] BYREF
  unsigned int v19[3]; // [esp+14h] [ebp-20h] BYREF
  int v20; // [esp+20h] [ebp-14h]
  unsigned int v21[4]; // [esp+24h] [ebp-10h] BYREF

  if ( WaitForSingleObject(hMutex, 0x2710u) == 258 ) /*0x7b954c*/
    this->Debug::Log(); /*0x7b955d*/
  if ( (uint8_t)BSurface::CreateTripleBuffer((int)this) && this->occupant ) /*0x7b9574*/
  {
    v2 = 0; /*0x7b9585*/
    v3 = 0; /*0x7b9587*/
    v4 = 0; /*0x7b9589*/
    v5 = 0; /*0x7b958b*/
    if ( this->? ) /*0x7b957f*/
    {
      if ( WaitForSingleObject(hMutex, 0x2710u) == 258 ) /*0x7b95a8*/
        this->Debug::Log(); /*0x7b95b9*/
      FoundationSize = Building::GetFoundationSize(v21, (unsigned int)this->?); /*0x7b95cd*/
      v7 = *FoundationSize; /*0x7b95d2*/
      abstractFlags = this->?; /*0x7b95d4*/
      v9 = FoundationSize[1]; /*0x7b95d7*/
      v4 = FoundationSize[2]; /*0x7b95da*/
      v10 = FoundationSize[3]; /*0x7b95dd*/
      nextArrayIndex = this->?; /*0x7b95e0*/
      v20 = v10; /*0x7b95e3*/
      v2 = abstractFlags - this-((unsigned int *)(>ambientSoundController))[0] + v7; /*0x7b95f2*/
      v3 = nextArrayIndex - this-((unsigned int *)(>ambientSoundController))[1] + v9; /*0x7b95fa*/
      ReleaseMutex(hMutex); /*0x7b95fc*/
      v5 = v20; /*0x7b9602*/
    }
    v12 = (gamemd::ObjectClass *)(v2 + this->fallRate);
    this-((unsigned int *)(>ambientSoundController))[3] = v2; /*0x7b9610*/
    v18[0] = v12; /*0x7b9616*/
    nextObject = this->nextObject; /*0x7b961a*/
    this-((unsigned int *)(>ambientSoundController))[4] = v3; /*0x7b961d*/
    v14 = (char *)nextObject + v3; /*0x7b9620*/
    v15 = this-((unsigned int *)(>ambientSoundController))[2]; /*0x7b9622*/
    v18[2] = v4; /*0x7b9625*/
    this->customSound_controller[0] = v4; /*0x7b9629*/
    v18[3] = v5; /*0x7b962c*/
    v18[1] = v14; /*0x7b9630*/
    v19[2] = v4; /*0x7b9634*/
    this->customSound_controller[1] = v5; /*0x7b9638*/
    v19[0] = 0; /*0x7b963d*/
    v19[1] = 0; /*0x7b9641*/
    occupant = this->occupant; /*0x7b964e*/
    v20 = v5; /*0x7b964f*/
    (*(void (**)(int, unsigned int *, int, unsigned int *, unsigned int, int))(*(unsigned int *)v15 + 8))( /*0x7b965a*/
      v15,
      v19,
      occupant,
      v18,
      0,
      1);
  }
  Mouse::DrawCursor((Mouse *)this, (int *)this->occupant, 0, 0); /*0x7b966a*/
  return ReleaseMutex(hMutex); /*0x7b967c*/

}
}
// 0x7BBE20
namespace gamemd {
void IntersectSurfaceRects(IUnknown * aP0, int a2, XSurface * aP2, int a4)
{
  int v5; // ecx
  int v6; // ecx
  int v7; // eax
  int v8; // eax
  int v9; // ecx
  int v10; // ecx
  int v11; // eax
  int v12; // eax
  int v13; // eax
  int v14; // eax
  int v15; // eax
  int v16; // eax
  int v17; // eax
  int v18; // ebx
  int v19; // eax
  int *v20; // eax
  int *v21; // eax
  unsigned int v23[4]; // [esp+Ch] [ebp-10h] BYREF

  v5 = aP2[2]; /*0x7bbe2c*/
  if ( aP0[2] == v5 && aP0[3] == aP2[3] ) /*0x7bbe40*/
  {
    if ( *aP0 < 0 ) /*0x7bbe4a*/
    {
      *aP2 -= *aP0; /*0x7bbe50*/
      aP2[2] = v5 + *aP0; /*0x7bbe56*/
      v6 = *aP0; /*0x7bbe59*/
      v7 = aP0[2]; /*0x7bbe5b*/
      *(unsigned int *)aP0 = 0; /*0x7bbe5e*/
      aP0[2] = v6 + v7; /*0x7bbe66*/
    }
    v8 = (int)(aP0[1]);
    if ( v8 < 0 ) /*0x7bbe6e*/
    {
      v9 = (int)(aP2[3]);
      aP2[1] -= v8; /*0x7bbe78*/
      aP2[3] = aP0[1] + v9; /*0x7bbe80*/
      v10 = aP0[1]; /*0x7bbe83*/
      v11 = aP0[3]; /*0x7bbe86*/
      aP0[1] = 0; /*0x7bbe89*/
      aP0[3] = v10 + v11; /*0x7bbe92*/
    }
    v12 = aP0[2] + *aP0 - *(unsigned int *)(a2 + 8); /*0x7bbe9f*/
    if ( v12 > 0 ) /*0x7bbea3*/
    {
      aP2[2] -= v12; /*0x7bbeaa*/
      aP0[2] -= v12; /*0x7bbeb2*/
    }
    v13 = aP0[1] + aP0[3] - *(unsigned int *)(a2 + 12); /*0x7bbec0*/
    if ( v13 > 0 ) /*0x7bbec4*/
    {
      aP2[3] -= v13; /*0x7bbecb*/
      aP0[3] -= v13; /*0x7bbed3*/
    }
    if ( *aP2 < 0 ) /*0x7bbeda*/
    {
      *aP0 -= *aP2; /*0x7bbee0*/
      v14 = *aP2; /*0x7bbee2*/
      aP2[2] += *aP2; /*0x7bbee9*/
      aP0[2] += v14; /*0x7bbef1*/
      *aP2 = 0; /*0x7bbef4*/
    }
    v15 = aP2[1]; /*0x7bbefa*/
    if ( v15 < 0 ) /*0x7bbeff*/
    {
      aP0[1] -= v15; /*0x7bbf06*/
      v16 = aP2[1]; /*0x7bbf09*/
      aP2[3] += v16; /*0x7bbf11*/
      aP0[3] += v16; /*0x7bbf19*/
      aP2[1] = 0; /*0x7bbf1c*/
    }
    v17 = *aP2 + aP2[2] - *(unsigned int *)(a4 + 8); /*0x7bbf33*/
    if ( v17 > 0 ) /*0x7bbf37*/
    {
      aP2[2] = *(unsigned int *)(a4 + 8) - *aP2; /*0x7bbf3b*/
      aP0[2] -= v17; /*0x7bbf43*/
    }
    v18 = *(unsigned int *)(a4 + 12); /*0x7bbf49*/
    v19 = aP2[3] + aP2[1] - v18; /*0x7bbf51*/
    if ( v19 > 0 ) /*0x7bbf55*/
    {
      aP2[3] = v18 - aP2[1]; /*0x7bbf59*/
      aP0[3] -= v19; /*0x7bbf61*/
    }
  }
  else
  {
    v20 = ClipRectIntersection(v23, aP0, (int *)a2, 0, 0); /*0x7bbf71*/
    *aP0 = *v20; /*0x7bbf7e*/
    aP0[1] = v20[1]; /*0x7bbf83*/
    aP0[2] = v20[2]; /*0x7bbf89*/
    aP0[3] = v20[3]; /*0x7bbf93*/
    v21 = ClipRectIntersection(v23, aP2, (int *)a4, 0, 0); /*0x7bbf9d*/
    *aP2 = *v21; /*0x7bbfa6*/
    aP2[1] = v21[1]; /*0x7bbfab*/
    aP2[2] = v21[2]; /*0x7bbfb1*/
    aP2[3] = v21[3]; /*0x7bbfb7*/
  }
  return aP0[2] > 0 && aP0[3] > 0 && aP2[2] > 0 && aP2[3] > 0; /*0x7bbfd6*/
}
}
// 0x7BC040
namespace gamemd {
void* CalcSurfaceBlitRects(int ecx0, int * a1, IUnknown * aP2, int arg4, int * a4, IUnknown * aP5, unsigned char * a6, int * a7, int * a8)
{
  int v9; // ebx
  CellStruct *v10; // ebp
  int v11; // eax
  int v12; // edx
  int v13; // ebx
  int v14; // eax
  int v15; // ecx
  Coord2D *v16; // eax
  unsigned int *v17; // eax
  int v18; // eax
  Coord2D *v19; // eax
  unsigned int *v20; // eax
  int v21; // eax
  unsigned int *v23; // [esp-4h] [ebp-2Ch]
  unsigned int *v24; // [esp-4h] [ebp-2Ch]
  unsigned int v25[2]; // [esp+10h] [ebp-18h] BYREF
  unsigned int v26[2]; // [esp+18h] [ebp-10h] BYREF
  unsigned int v27[2]; // [esp+20h] [ebp-8h] BYREF

  v9 = ecx0; /*0x7bc049*/
  v10 = a1; /*0x7bc04f*/
  *a6 = 0; /*0x7bc05a*/
  *a7 = 0; /*0x7bc05d*/
  *a8 = 0; /*0x7bc063*/
  v11 = *(unsigned int *)aP2->__pad_8; /*0x7bc069*/
  v26[0] = a1; /*0x7bc06f*/
  v25[0] = ecx0; /*0x7bc073*/
  if ( v11 <= 0 /*0x7bc0d8*/
    || *(int *)&aP2->__pad_8[4] <= 0
    || *(int *)a1->__pad_8 <= 0
    || *(int *)&a1->__pad_8[4] <= 0
    || *(int *)aP5->__pad_8 <= 0
    || *(int *)&aP5->__pad_8[4] <= 0
    || *(int *)a4->__pad_8 <= 0
    || *(int *)&a4->__pad_8[4] <= 0
    || !(uint8_t)IntersectSurfaceRects(&aP2->field_0, (int)a1, &aP5->field_0, (int)a4) )
  {
    return 0; /*0x7bc0d8*/
  }
  *a6 = 0; /*0x7bc0e9*/
  if ( arg4 == v9 ) /*0x7bc0f2*/
  {
    v12 = aP2->field_0; /*0x7bc0f4*/
    v13 = aP5->field_0; /*0x7bc0f9*/
    if ( aP5->field_0 < aP2->field_0 + *(unsigned int *)aP2->__pad_8 ) /*0x7bc0ff*/
    {
      v14 = (int)aP2->field_4; /*0x7bc101*/
      v15 = (int)aP5->field_4; /*0x7bc107*/
      if ( v15 < v14 + *(unsigned int *)&aP2->__pad_8[4] /*0x7bc12a*/
        && *(unsigned int *)aP5->__pad_8 + v13 > v12
        && *(unsigned int *)&aP5->__pad_8[4] + v15 > v14
        && (v15 < v14 || v15 == v14 && v13 < v12) )
      {
        *a6 = 1; /*0x7bc130*/
      }
      v10 = (CellStruct *)v26[0]; /*0x7bc133*/
    }
    v9 = v25[0]; /*0x7bc137*/
  }
  v23 = CellStruct::Copy(aP2, v26); /*0x7bc14f*/
  v16 = (Coord2D *)CellStruct::Copy(v10, v27); /*0x7bc154*/
  v17 = Coord2D::Add(v16, v25, v23); /*0x7bc15b*/
  v18 = (*(int (**)(int, unsigned int, unsigned int))(*(unsigned int *)v9 + 92))(v9, *v17, v17[1]); /*0x7bc173*/
  *a7 = v18; /*0x7bc17c*/
  if ( !v18 ) /*0x7bc17e*/
    return 0; /*0x7bc17e*/
  v24 = CellStruct::Copy(aP5, v27); /*0x7bc190*/
  v19 = (Coord2D *)CellStruct::Copy(a4, v25); /*0x7bc19b*/
  v20 = Coord2D::Add(v19, v26, v24); /*0x7bc1a2*/
  v21 = (*(int (**)(int, unsigned int, unsigned int))(*(unsigned int *)arg4 + 92))(arg4, *v20, v20[1]); /*0x7bc1bc*/
  *a8 = v21; /*0x7bc1c5*/
  if ( !v21 ) /*0x7bc1c7*/
  {
    (*(void (**)(int))(*(unsigned int *)v9 + 96))(v9); /*0x7bc1cd*/
    return 0; /*0x7bc1d9*/
  }
  return 1; /*0x7bc1d2*/
}
}
// 0x7BC1F0
namespace gamemd {
char sub_7BC1F0(XSurface * a1, XSurface * a2, XSurface * aP2, int arg4)
{
  void **v7; // [esp+8h] [ebp-4h] BYREF

  if ( (*(int (**)(int *))(*a1 + 112))(a1) == 1 ) /*0x7bc1ff*/
  {
    v7 = (void*)&BlitPlain_unsigned_char_vftable; /*0x7bc20a*/
    return BlitterCopySimpleSHP(a1, a2, aP2, arg4, (int *)&v7, 0, 3, 1000, 0); /*0x7bc218*/
  }
  else
  {
    v7 = (void*)&BlitPlain_unsigned_short_vftable; /*0x7bc223*/
    return BlitterCopySimpleSHP(a1, a2, aP2, arg4, (int *)&v7, 0, 3, 1000, 0); /*0x7bc240*/
  }
}
}
// 0x7BC250
namespace gamemd {
char sub_7BC250(XSurface * a1, XSurface * a2, XSurface * aP2, int arg4)
{
  void **v7; // [esp+8h] [ebp-4h] BYREF

  if ( (*(int (**)(int *))(*a1 + 112))(a1) == 1 ) /*0x7bc25f*/
  {
    v7 = (void*)&BlitTrans_unsigned_char_vftable; /*0x7bc26a*/
    return BlitterCopySimpleSHP(a1, a2, aP2, arg4, (int *)&v7, 0, 3, 1000, 0); /*0x7bc278*/
  }
  else
  {
    v7 = (void*)&BlitTrans_unsigned_short_vftable; /*0x7bc283*/
    return BlitterCopySimpleSHP(a1, a2, aP2, arg4, (int *)&v7, 0, 3, 1000, 0); /*0x7bc2a0*/
  }
}
}
// 0x7BC2B0
namespace gamemd {
void ClipLine(IUnknown * aP0, int * a1, int * a2)
{
  int v4; // esi
  double v5; // st7
  double v6; // st6
  double v7; // st5
  double v8; // st4
  int v9; // edx
  int result; // eax
  int v11; // ecx
  char v12; // fps^1
  bool v13; // c0
  char v14; // c2
  bool v15; // c3
  char v16; // fps^1
  bool v17; // c0
  char v18; // c2
  bool v19; // c3
  double v20; // st4
  double v21; // kr00_8
  char v22; // fps^1
  bool v23; // c0
  char v24; // c2
  bool v25; // c3
  bool v26; // c0
  char v27; // c2
  bool v28; // c3
  char v29; // fps^1
  bool v30; // c0
  char v31; // c2
  bool v32; // c3
  bool v33; // c0
  char v34; // c2
  bool v35; // c3
  int v36; // eax
  int v37; // eax
  int v38; // eax
  int v39; // [esp+10h] [ebp-60h]
  int v40; // [esp+14h] [ebp-5Ch]
  double v42; // [esp+28h] [ebp-48h]
  double v43; // [esp+30h] [ebp-40h]
  double v44; // [esp+38h] [ebp-38h]
  double v45; // [esp+40h] [ebp-30h]
  double v46; // [esp+48h] [ebp-28h]
  double v47; // [esp+50h] [ebp-20h]
  double v48; // [esp+58h] [ebp-18h]
  double v49; // [esp+60h] [ebp-10h]
  double v50; // [esp+68h] [ebp-8h]

  v4 = a2[1]; /*0x7bc2c9*/
  v5 = (double)*a2; /*0x7bc2d3*/
  v43 = v5; /*0x7bc2dd*/
  v6 = (double)v4; /*0x7bc2e1*/
  v40 = *a2 + a2[2]; /*0x7bc2e5*/
  v7 = v6; /*0x7bc2e9*/
  v44 = (double)*aP0; /*0x7bc2ed*/
  v42 = (double)aP0[1]; /*0x7bc2f6*/
  v8 = (double)*a1; /*0x7bc2fa*/
  v50 = v8; /*0x7bc2fc*/
  v45 = (double)a1[1]; /*0x7bc303*/
  v48 = (v8 - v44) / (v45 - v42); /*0x7bc31b*/
  v49 = (v45 - v42) / (v8 - v44); /*0x7bc321*/
  v46 = (double)v40; /*0x7bc32b*/
  if ( v44 < v46 ) /*0x7bc338*/
    v9 = v44 < v5; /*0x7bc34c*/
  else
    v9 = 2; /*0x7bc33c*/
  result = v4 + a2[3]; /*0x7bc354*/
  v39 = result; /*0x7bc356*/
  v47 = (double)result; /*0x7bc35e*/
  if ( v42 < v47 ) /*0x7bc36f*/
  {
    if ( v42 < v6 ) /*0x7bc381*/
      v9 |= 8u; /*0x7bc383*/
  }
  else
  {
    v9 |= 4u; /*0x7bc371*/
  }
  if ( v8 < v46 ) /*0x7bc391*/
    v11 = v8 < v5; /*0x7bc3a5*/
  else
    v11 = 2; /*0x7bc395*/
  v13 = v45 < v47; /*0x7bc3ae*/
  v14 = 0; /*0x7bc3ae*/
  v15 = v45 == v47; /*0x7bc3ae*/
  IDA_BYTE1(result) = v12; /*0x7bc3b2*/
  if ( v45 < v47 ) /*0x7bc3b7*/
  {
    v17 = v45 < v6; /*0x7bc3c2*/
    v18 = 0; /*0x7bc3c2*/
    v19 = v45 == v6; /*0x7bc3c2*/
    IDA_BYTE1(result) = v16; /*0x7bc3c4*/
    if ( v45 < v6 ) /*0x7bc3c9*/
      goto LABEL_14; /*0x7bc3c9*/
  }
  else
  {
    v11 |= 4u; /*0x7bc3b9*/
  }
  while ( 1 ) /*0x7bc3ce*/
  {
    if ( !v9 && !v11 ) /*0x7bc3d4*/
    {
      IDA_LOWORD(v36) = Math::RoundToInt(v44); /*0x7bc533*/
      *aP0 = v36; /*0x7bc540*/
      IDA_LOWORD(v37) = Math::RoundToInt(v42); /*0x7bc542*/
      aP0[1] = v37; /*0x7bc54b*/
      IDA_LOWORD(v38) = Math::RoundToInt(v50); /*0x7bc54e*/
      *a1 = v38; /*0x7bc557*/
      IDA_LOWORD(result) = Math::RoundToInt(v45); /*0x7bc559*/
      a1[1] = result; /*0x7bc55e*/
      IDA_LOBYTE(result) = 1; /*0x7bc561*/
      return result; /*0x7bc569*/
    }
    if ( (v11 & v9) != 0 ) /*0x7bc3dc*/
      break; /*0x7bc3dc*/
    result = v9; /*0x7bc3e4*/
    if ( !v9 ) /*0x7bc3e6*/
      result = v11; /*0x7bc3e8*/
    if ( (result & 8) != 0 ) /*0x7bc3ec*/
    {
      v43 = (v6 - v42) * v48 + v44; /*0x7bc3fe*/
      v7 = v6; /*0x7bc402*/
    }
    else
    {
      if ( (result & 4) != 0 ) /*0x7bc408*/
      {
        v7 = (double)(v39 - 1); /*0x7bc415*/
        v20 = (v7 - v42) * v48 + v44; /*0x7bc423*/
  LABEL_28:
        v43 = v20; /*0x7bc474*/
        goto LABEL_29; /*0x7bc474*/
      }
      if ( (result & 2) != 0 ) /*0x7bc42b*/
      {
        v21 = (double)(v40 - 1); /*0x7bc448*/
        v43 = v21; /*0x7bc44c*/
        v7 = (v21 - v44) * v49 + v42; /*0x7bc458*/
      }
      else if ( (result & 1) != 0 ) /*0x7bc460*/
      {
        v7 = (v5 - v44) * v49 + v42; /*0x7bc46e*/
        v20 = v5; /*0x7bc472*/
        goto LABEL_28; /*0x7bc472*/
      }
    }
  LABEL_29:
    if ( result == v9 ) /*0x7bc47e*/
    {
      v44 = v43; /*0x7bc480*/
      v42 = v7; /*0x7bc488*/
      if ( v43 < v46 ) /*0x7bc495*/
        v9 = v43 < v5; /*0x7bc4a9*/
      else
        v9 = 2; /*0x7bc499*/
      v23 = v7 < v47; /*0x7bc4ae*/
      v24 = 0; /*0x7bc4ae*/
      v25 = v7 == v47; /*0x7bc4ae*/
      IDA_BYTE1(result) = v22; /*0x7bc4b2*/
      if ( v7 < v47 ) /*0x7bc4b7*/
      {
        v26 = v7 < v6; /*0x7bc4c1*/
        v27 = 0; /*0x7bc4c1*/
        v28 = v7 == v6; /*0x7bc4c1*/
        IDA_BYTE1(result) = v22; /*0x7bc4c3*/
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
      v50 = v43; /*0x7bc4d6*/
      v45 = v7; /*0x7bc4de*/
      if ( v43 < v46 ) /*0x7bc4eb*/
        v11 = v43 < v5; /*0x7bc4ff*/
      else
        v11 = 2; /*0x7bc4ef*/
      v30 = v7 < v47; /*0x7bc504*/
      v31 = 0; /*0x7bc504*/
      v32 = v7 == v47; /*0x7bc504*/
      IDA_BYTE1(result) = v29; /*0x7bc508*/
      if ( v7 < v47 ) /*0x7bc50d*/
      {
        v33 = v7 < v6; /*0x7bc517*/
        v34 = 0; /*0x7bc517*/
        v35 = v7 == v6; /*0x7bc517*/
        IDA_BYTE1(result) = v29; /*0x7bc519*/
        if ( v7 < v6 ) /*0x7bc51e*/
  LABEL_14:
          v11 |= 8u; /*0x7bc3cb*/
      }
      else
      {
        v11 |= 4u; /*0x7bc50f*/
      }
    }
  }
  IDA_LOBYTE(result) = 0; /*0x7bc574*/
  return result; /*0x7bc563*/
}
}
// 0x7BC580
namespace gamemd {
AbstractClass * * ObjectClass::sub_7BC580( ObjectClass * aP1, double a3)
{

  int v3; // edx
  void *vtable1; // [esp+8h] [ebp-4h]

  if ( (double)((unsigned int)this->AbstractClass + (unsigned int)this->?) > aP1 ) /*0x7bc5a3*/
    v3 = (double)(int)this->AbstractClass > aP1; /*0x7bc5bb*/
  else
    v3 = 2; /*0x7bc5a5*/
  vtable1 = this->?; /*0x7bc5c8*/
  if ( (double)(int)((int)vtable1 + (unsigned int)this->?) <= a3 ) /*0x7bc5dd*/
    return v3 | 4; /*0x7bc5e2*/
  if ( (double)(int)vtable1 > a3 ) /*0x7bc5f7*/
    return v3 | 8; /*0x7bc5f9*/
  return v3; /*0x7bc5e4*/

}
}
// 0x7BD470
namespace gamemd {
int sub_7BD470(int a1)
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

  v1 = *(unsigned int *)(a1 + 1980); /*0x7bd476*/
  v2 = *(unsigned int *)(a1 + 156); /*0x7bd47c*/
  if ( (v1 & 0x200) != 0 ) /*0x7bd485*/
    return 0; /*0x7bd48b*/
  v4 = *(unsigned int *)(a1 + 1952); /*0x7bd492*/
  v5 = *(unsigned int *)(a1 + 1988); /*0x7bd49a*/
  if ( (*(unsigned int *)(a1 + 132) & 0x200) != 0 ) /*0x7bd4a3*/
  {
    v6 = v4 + 1; /*0x7bd4ab*/
    if ( (unsigned int)(v4 + 1) >= *(unsigned int *)(a1 + 1948) ) /*0x7bd4b0*/
      v6 = 0; /*0x7bd4b2*/
    if ( (v1 & 0x100) == 0 && !*(unsigned char *)(v6 + *(unsigned int *)(a1 + 1940)) ) /*0x7bd4bf*/
    {
      IDA_BYTE1(v1) |= 4u; /*0x7bd4c5*/
      *(unsigned int *)(a1 + 1980) = v1; /*0x7bd4c8*/
    }
  }
  v7 = 0; /*0x7bd4d4*/
  if ( *(unsigned char *)(*(unsigned int *)(a1 + 1940) + v4) == 1 ) /*0x7bd4da*/
  {
    if ( *(unsigned int *)(a1 + 1956) == -1 ) /*0x7bd4e3*/
    {
      *(unsigned int *)(a1 + 1956) = v4; /*0x7bd4e5*/
      *(unsigned int *)(a1 + 1984) = v5; /*0x7bd4eb*/
    }
    v8 = v4 + 1; /*0x7bd4f7*/
    *(unsigned short *)(*(unsigned int *)(a1 + 1944) + 2 * v8 - 2) = 0; /*0x7bd4f8*/
    v9 = v5 + v2; /*0x7bd505*/
    if ( v5 + v2 >= *(unsigned int *)(a1 + 152) ) /*0x7bd50a*/
    {
      v9 = 0; /*0x7bd50c*/
      v8 = 0; /*0x7bd50e*/
    }
    *(unsigned int *)(a1 + 1988) = v9; /*0x7bd510*/
    *(unsigned int *)(a1 + 1952) = v8; /*0x7bd516*/
  }
  else
  {
    v10 = *(unsigned int *)(a1 + 1980); /*0x7bd51e*/
    if ( (v10 & 0x100) != 0 ) /*0x7bd527*/
    {
      v11 = *(unsigned int *)(a1 + 1936); /*0x7bd529*/
      IDA_BYTE1(v10) |= 2u; /*0x7bd52f*/
      *(unsigned int *)(a1 + 1980) = v10; /*0x7bd534*/
      if ( v5 >= v11 ) /*0x7bd53a*/
        return 0; /*0x7bd54a*/
      v2 = v11 - v5; /*0x7bd53e*/
    }
    else
    {
      IDA_LOBYTE(v10) = v10 | 0x80; /*0x7bd54b*/
      v5 -= v2; /*0x7bd54e*/
      *(unsigned int *)(a1 + 1980) = v10; /*0x7bd550*/
      v12 = v4 - 1; /*0x7bd55a*/
      v7 = 1; /*0x7bd55d*/
      ++*(unsigned int *)(a1 + 56); /*0x7bd55f*/
      if ( v5 < 0 ) /*0x7bd562*/
      {
        v5 = *(unsigned int *)(a1 + 152) - v2; /*0x7bd570*/
        v12 = *(unsigned int *)(a1 + 1948) - 1; /*0x7bd572*/
      }
      ++*(unsigned short *)(*(unsigned int *)(a1 + 1944) + 2 * v12); /*0x7bd579*/
    }
  }
  if ( v2 > 0 ) /*0x7bd582*/
  {
    if ( v7 == 1 ) /*0x7bd588*/
    {
      (*(void (**)(int, int, unsigned int, int))(a1 + 88))(a1, 5, *(unsigned int *)(a1 + 1976), v2); /*0x7bd594*/
      return v2; /*0x7bd5a0*/
    }
    (*(void (**)(int, int, int, int))(a1 + 88))(a1, 5, v5 + *(unsigned int *)(a1 + 1932), v2); /*0x7bd5ad*/
  }
  return v2; /*0x7bd487*/
}
}
// 0x7BEFE0
namespace gamemd {
int E4Recv_7BEFE0::sub_7BEFE0()
{

  int v2; // esi
  int v3; // eax
  int v4; // edi
  int v5; // eax
  char *v6; // ecx
  int v7; // eax
  int v8; // eax
  char *v9; // ecx

  v2 = *((unsigned int *)this + 104); /*0x7befe5*/
  LOBYTE(v3) = *((unsigned char *)this + 420); /*0x7befeb*/
  v4 = *(unsigned int *)(v2 + 4); /*0x7beff3*/
  if ( (v3 & 2) == 0 ) /*0x7beff6*/
  {
    v5 = *(unsigned int *)(v4 + 12); /*0x7beffc*/
    if ( (v5 & 2) != 0 ) /*0x7bf001*/
    {
      if ( (*((unsigned char *)this + 340) & 1) != 0 ) /*0x7bf00a*/
      {
        v6 = *(char **)((char *)this + 1776); /*0x7bf00c*/
        LOBYTE(v5) = v5 | 4; /*0x7bf012*/
        *(unsigned int *)(v4 + 12) = v5; /*0x7bf014*/
      }
      else
      {
        v6 = *(char **)v4; /*0x7bf019*/
      }
      *(unsigned int *)(v4 + 20) = AudioCodec::Decode( /*0x7bf030*/
                               (uint8_t *)(*(unsigned int *)v4 + *(unsigned int *)(v4 + 16)),
                               v6,
                               *((unsigned int *)this + 477));
      v7 = *(unsigned int *)(v4 + 12); /*0x7bf033*/
      LOBYTE(v7) = v7 & 0xFD; /*0x7bf039*/
      *(unsigned int *)(v4 + 12) = v7; /*0x7bf03b*/
    }
    if ( (*(unsigned char *)(v2 + 20) & 8) != 0 ) /*0x7bf042*/
    {
      *(unsigned int *)(v2 + 40) = AudioCodec::Decode( /*0x7bf05a*/
                               (uint8_t *)(*(unsigned int *)(v2 + 8) + *(unsigned int *)(v2 + 36)),
                               *(char **)(v2 + 8),
                               *((unsigned int *)this + 476));
      v8 = *(unsigned int *)(v2 + 20); /*0x7bf05d*/
      LOBYTE(v8) = v8 & 0xF7; /*0x7bf063*/
      *(unsigned int *)(v2 + 20) = v8; /*0x7bf065*/
    }
    v3 = *(unsigned int *)(v2 + 20); /*0x7bf068*/
    if ( (v3 & 0x10) != 0 ) /*0x7bf06d*/
    {
      if ( (*((unsigned char *)this + 340) & 2) != 0 ) /*0x7bf076*/
      {
        v9 = *(char **)((char *)this + 1768); /*0x7bf078*/
        LOBYTE(v3) = v3 | 0x40; /*0x7bf07e*/
        *(unsigned int *)(v2 + 20) = v3; /*0x7bf080*/
      }
      else
      {
        v9 = *(char **)v2; /*0x7bf085*/
      }
      AudioCodec::Decode((uint8_t *)(*(unsigned int *)v2 + *(unsigned int *)(v2 + 32)), v9, *((unsigned int *)this + 478)); /*0x7bf097*/
      v3 = *(unsigned int *)(v2 + 20); /*0x7bf09c*/
      LOBYTE(v3) = v3 & 0xEF; /*0x7bf0a2*/
      *(unsigned int *)(v2 + 20) = v3; /*0x7bf0a4*/
    }
  }
  return v3; /*0x7bf0a7*/

}
}
// 0x7BF470
namespace gamemd {
int AudioStream_FillBuffer(int a1, int a2)
{
  int v3; // ebx
  char v4; // al
  int v5; // ecx
  int v6; // edx
  int v7; // ebp
  int v8; // eax
  int v9; // edi
  int v10; // eax
  unsigned int *v11; // ecx
  int v12; // edi
  int (__cdecl *v13)(int, int, int, int); // eax
  int result; // eax
  int v15; // eax
  int v16; // eax
  uint16_t *v17; // edi
  int v18; // ecx
  char v19; // [esp+13h] [ebp-19h]
  int v20; // [esp+14h] [ebp-18h]
  unsigned int *i; // [esp+18h] [ebp-14h]
  int v22; // [esp+1Ch] [ebp-10h]
  int v23; // [esp+20h] [ebp-Ch] BYREF
  int v24; // [esp+24h] [ebp-8h]
  int v25; // [esp+28h] [ebp-4h]

  v24 = a2; /*0x7bf478*/
  v3 = 0; /*0x7bf47c*/
  v4 = *(unsigned char *)(a1 + 132); /*0x7bf47e*/
  v5 = *(unsigned int *)(a1 + 1892); /*0x7bf484*/
  v6 = *(unsigned int *)(a1 + 384); /*0x7bf48a*/
  v7 = 0; /*0x7bf490*/
  v25 = 0; /*0x7bf495*/
  v22 = v5; /*0x7bf499*/
  v20 = v6; /*0x7bf49d*/
  v19 = 0; /*0x7bf4a1*/
  if ( (v4 & 0x20) != 0 && (*(unsigned char *)(a1 + 340) & 4) != 0 ) /*0x7bf4b3*/
  {
    v8 = *(unsigned int *)(a1 + 288); /*0x7bf4b9*/
    if ( v8 >= 0 ) /*0x7bf4c1*/
    {
      if ( v6 < *(unsigned int *)(a1 + 16) ) /*0x7bf4ca*/
        v7 = 2 * (*(unsigned int *)(v5 + 4 * v6) & 0xFFFFFFF); /*0x7bf4d5*/
      if ( v6 == *(unsigned int *)(a1 + 296) && v8 != *(unsigned int *)(a1 + 1808) ) /*0x7bf4e9*/
      {
        if ( v6 != *(unsigned int *)(a1 + 1800) ) /*0x7bf4f5*/
        {
          *(unsigned int *)(a1 + 1788) = v7; /*0x7bf4f7*/
          *(unsigned int *)(a1 + 1792) = 0; /*0x7bf4fd*/
          *(unsigned int *)(a1 + 1796) = 0; /*0x7bf503*/
        }
        *(unsigned int *)(a1 + 1808) = *(unsigned int *)(a1 + 288); /*0x7bf50f*/
        *(unsigned int *)(a1 + 1800) = *(unsigned int *)(a1 + 296); /*0x7bf51b*/
        *(unsigned int *)(a1 + 1804) = -1; /*0x7bf521*/
        v9 = *(unsigned int *)(a1 + 296); /*0x7bf52b*/
        v10 = *(unsigned int *)(a1 + 300); /*0x7bf531*/
        if ( v9 <= v10 ) /*0x7bf539*/
        {
          v11 = (unsigned int *)(v5 + 4 * v9); /*0x7bf53f*/
          for ( i = v11; ; v11 = i ) /*0x7bf542*/
          {
            if ( v9 >= *(unsigned int *)(a1 + 16) - 1 ) /*0x7bf552*/
            {
              if ( (*(int (**)(int, int, int *, unsigned int))(a1 + 64))(a1, 9, &v23, 0) ) /*0x7bf579*/
                break; /*0x7bf581*/
              v10 = *(unsigned int *)(a1 + 300); /*0x7bf583*/
              v3 += v23 - 2 * (*(unsigned int *)(v22 + 4 * v10) & 0xFFFFFFF); /*0x7bf59e*/
            }
            else
            {
              v3 += 2 * (v11[1] & 0xFFFFFFF) - 2 * (*v11 & 0xFFFFFFF); /*0x7bf56b*/
            }
            if ( v3 >= *(unsigned int *)(a1 + 1784) ) /*0x7bf5a6*/
              break; /*0x7bf5a6*/
            ++v9; /*0x7bf5ac*/
            ++i; /*0x7bf5b2*/
            if ( v9 > v10 ) /*0x7bf5b6*/
              goto LABEL_21; /*0x7bf5b6*/
          }
          *(unsigned int *)(a1 + 1804) = v9 - 1; /*0x7bf5ba*/
  LABEL_21:
          v6 = v20; /*0x7bf5c1*/
        }
        if ( v3 < *(unsigned int *)(a1 + 1784) && *(unsigned int *)(a1 + 1804) == -1 ) /*0x7bf5d4*/
          *(unsigned int *)(a1 + 1804) = *(unsigned int *)(a1 + 300); /*0x7bf5dc*/
        v5 = v22; /*0x7bf5e2*/
      }
      if ( v6 >= *(unsigned int *)(a1 + 1800) && v6 <= *(unsigned int *)(a1 + 1804) ) /*0x7bf5f8*/
      {
        if ( v7 != *(unsigned int *)(a1 + 1788) + *(unsigned int *)(a1 + 1792) ) /*0x7bf60e*/
          goto LABEL_40; /*0x7bf60e*/
        if ( v6 >= *(unsigned int *)(a1 + 16) - 1 ) /*0x7bf61a*/
        {
          if ( (*(int (**)(int, int, int *, unsigned int))(a1 + 64))(a1, 9, &v23, 0) ) /*0x7bf636*/
            goto LABEL_39; /*0x7bf63e*/
          v6 = v20; /*0x7bf644*/
          v12 = v23 - v7; /*0x7bf648*/
        }
        else
        {
          v12 = 2 * (*(unsigned int *)(v5 + 4 * v6 + 4) & 0xFFFFFFF) - v7; /*0x7bf628*/
        }
        if ( v12 <= 0 ) /*0x7bf64c*/
          goto LABEL_40; /*0x7bf64c*/
        v13 = *(int (**)(int, int, int, int))(a1 + 64); /*0x7bf64e*/
        if ( v13 != sub_7BF3A0 ) /*0x7bf656*/
          v13(a1, 7, 0, v7); /*0x7bf65e*/
        if ( (*(int (**)(int, int, int, int))(a1 + 64))( /*0x7bf676*/
               a1,
               5,
               *(unsigned int *)(a1 + 1780) + *(unsigned int *)(a1 + 1796),
               v12) )
        {
          return -4; /*0x7bf68c*/
        }
        *(unsigned int *)(a1 + 1792) += v12; /*0x7bf68d*/
  LABEL_39:
        v6 = v20; /*0x7bf693*/
  LABEL_40:
        v15 = *(unsigned int *)(a1 + 1788); /*0x7bf697*/
        if ( v7 < v15 + *(unsigned int *)(a1 + 1792) ) /*0x7bf6a7*/
        {
          v19 = 1; /*0x7bf6ab*/
          *(unsigned int *)(a1 + 1796) = v7 - v15; /*0x7bf6b0*/
          v25 = *(unsigned int *)(a1 + 64); /*0x7bf6b9*/
          *(unsigned int *)(a1 + 64) = sub_7BF3A0; /*0x7bf6bd*/
        }
      }
    }
  }
  if ( !v6 ) /*0x7bf6c6*/
  {
  LABEL_49:
    if ( (v24 & 0x20) == 0 ) /*0x7bf702*/
      *(unsigned int *)(a1 + 360) = *(unsigned int *)(a1 + 356); /*0x7bf70a*/
    goto LABEL_51; /*0x7bf70a*/
  }
  v16 = *(uint16_t *)(a1 + 1812); /*0x7bf6ca*/
  if ( (unsigned short)v16 && (*(unsigned char *)(a1 + 1814) & 3) != 0 ) /*0x7bf6dc*/
  {
    v17 = *(uint16_t **)(a1 + 1820); /*0x7bf6de*/
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
    *(unsigned int *)(a1 + 64) = v25; /*0x7bf727*/
  return result; /*0x7bf680*/
}
}
// 0x7B0090
namespace gamemd {
int sub_7B0090()
{
  dword_B77F54 = 0; /*0x7b0095*/
  return atexit(sub_7B00B0); /*0x7b00a5*/
}
} // namespace gamemd

// 0x7B00B0
namespace gamemd {
void sub_7B00B0()
{
  if ( dword_B77F54 ) /*0x7b00b7*/
  {
    RA2_OPDEL(dword_B77F54); /*0x7b00ba*/
    dword_B77F54 = 0; /*0x7b00c2*/
  }
}
} // namespace gamemd

// 0x7B00D0
namespace gamemd {
int sub_7B00D0()
{
  dword_B77F60 = 0; /*0x7b00d5*/
  return atexit(sub_7B00F0); /*0x7b00e5*/
}
} // namespace gamemd

// 0x7B00F0
namespace gamemd {
void sub_7B00F0()
{
  if ( dword_B77F60 ) /*0x7b00f7*/
  {
    RA2_OPDEL(dword_B77F60); /*0x7b00fa*/
    dword_B77F60 = 0; /*0x7b0102*/
  }
}
} // namespace gamemd

// 0x7B0110
namespace gamemd {
int sub_7B0110()
{
  ComPtr::Constructor(&dword_B77F58); /*0x7b0115*/
  dword_B77F58 = (int)&rc_ptr_WDTState_vftable; /*0x7b011f*/
  return atexit(sub_7B0130); /*0x7b012f*/
}
} // namespace gamemd

// 0x7B0130
namespace gamemd {
void sub_7B0130()
{
  dword_B77F58 = (int)&rc_ptr_WDTState_vftable; /*0x7b0130*/
  ComPtr::Release(&dword_B77F58); /*0x7b013f*/
}
} // namespace gamemd

// 0x7B0150
namespace gamemd {
int sub_7B0150()
{
  ComPtr::Constructor(&dword_B77F70); /*0x7b0155*/
  dword_B77F70 = (int)&rc_ptr_WDTState_vftable; /*0x7b015f*/
  return atexit(sub_7B0170); /*0x7b016f*/
}
} // namespace gamemd

// 0x7B0170
namespace gamemd {
void sub_7B0170()
{
  dword_B77F70 = (int)&rc_ptr_WDTState_vftable; /*0x7b0170*/
  ComPtr::Release(&dword_B77F70); /*0x7b017f*/
}
} // namespace gamemd

// 0x7B0190
namespace gamemd {
int sub_7B0190()
{
  ComPtr::Constructor(&stru_B77F68); /*0x7b0195*/
  stru_B77F68 = (int)&rc_ptr_WorldDominationTour_Campaign_vftable; /*0x7b019f*/
  return atexit(sub_7B01B0); /*0x7b01af*/
}
} // namespace gamemd

// 0x7B01B0
namespace gamemd {
void sub_7B01B0()
{
  stru_B77F68 = (int)&rc_ptr_WorldDominationTour_Campaign_vftable; /*0x7b01b0*/
  ComPtr::Release(&stru_B77F68); /*0x7b01bf*/
}
} // namespace gamemd

// 0x7B01D0
namespace gamemd {
int sub_7B01D0()
{
  ComPtr::Constructor(&dword_B77F78); /*0x7b01d5*/
  dword_B77F78 = (int)&rc_ptr_WorldDominationTour_Campaign_vftable; /*0x7b01df*/
  return atexit(sub_7B01F0); /*0x7b01ef*/
}
} // namespace gamemd

// 0x7B01F0
namespace gamemd {
void sub_7B01F0()
{
  dword_B77F78 = (int)&rc_ptr_WorldDominationTour_Campaign_vftable; /*0x7b01f0*/
  ComPtr::Release(&dword_B77F78); /*0x7b01ff*/
}
} // namespace gamemd

// 0x7B0290
namespace gamemd {
int * sub_7B0290()
{
  return &dword_B77F70; /*0x7b0295*/
}
} // namespace gamemd

// 0x7B0380
namespace gamemd {
int * sub_7B0380()
{
  return &dword_B77F78; /*0x7b0385*/
}
} // namespace gamemd

// 0x7B0390
namespace gamemd {
rc_ptr * FindWDTTerritoryClass(rc_ptr_base * a1, int a2)
{
  char v3; // bl
  unsigned int *v4; // edi
  unsigned int v6[2]; // [esp+Ch] [ebp-18h] BYREF
  unsigned int v7[4]; // [esp+14h] [ebp-10h] BYREF

  v3 = 0; /*0x7b03a2*/
  v7[3] = 0; /*0x7b03a6*/
  FindWDTTerritoryClass_Find((char *)stru_B77F68.ComPtr_field_0x04, v7, a2); /*0x7b03aa*/
  if ( (*(uint8_t (**)(unsigned int *))(v7[0] + 4))(v7) ) /*0x7b03b7*/
  {
    v4 = (unsigned int *)(*(unsigned int *)(*(unsigned int *)(v7[1] + 4) + 8 * v7[2] + 4) + 8); /*0x7b03d0*/
  }
  else
  {
    ComPtr::Constructor((ComPtr *)v6); /*0x7b03d9*/
    v6[0] = (void*)&rc_ptr_WDTTerritory_vftable; /*0x7b03de*/
    v3 = 1; /*0x7b03e6*/
    v4 = v6; /*0x7b03eb*/
  }
  ComPtr::Constructor((ComPtr *)a1); /*0x7b03f1*/
  *(unsigned int *)a1 = (void*)&rc_ptr_WDTTerritory_vftable; /*0x7b03f6*/
  ComPtr::Set((ComPtr *)a1, v4[1]); /*0x7b0402*/
  if ( (v3 & 1) != 0 ) /*0x7b040a*/
  {
    v6[0] = (void*)&rc_ptr_WDTTerritory_vftable; /*0x7b0410*/
    ComPtr::Release((ComPtr *)v6); /*0x7b0418*/
  }
  return a1; /*0x7b041f*/
}
} // namespace gamemd

// 0x7B0430
namespace gamemd {
char ObjectClass::_do_always_noconv_codecvt_base_std__MBE_NXZ_23()
{

  return 1; /*0x7b0432*/

}
} // namespace gamemd

// 0x7B05A0
namespace gamemd {
int sub_7B05A0()
{
  dword_B77FA0 = 0; /*0x7b05a2*/
  dword_B77FA4 = 0; /*0x7b05a7*/
  dword_B77FA8 = 0; /*0x7b05ac*/
  dword_B77FAC = 0; /*0x7b05b1*/
  return 0; /*0x7b05b6*/
}
} // namespace gamemd

// 0x7B0BA0
namespace gamemd {
void sub_7B0BA0()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x7b0bac*/
  dbl_B77FC0 = Math::Sqrt(v0 + v0); /*0x7b0bbe*/
}
} // namespace gamemd

// 0x7B0BD0
namespace gamemd {
void sub_7B0BD0()
{
  dbl_B78010 = dbl_B77FC0 / 60.0; /*0x7b0bdc*/
}
} // namespace gamemd

// 0x7B0BF0
namespace gamemd {
void sub_7B0BF0()
{
  dbl_B77FF8 = 1.0 / dbl_B78010; /*0x7b0bfc*/
}
} // namespace gamemd

// 0x7B0C10
namespace gamemd {
void sub_7B0C10()
{
  dbl_B77FF0 = 0.0174532925199433 * 45.0; /*0x7b0c1c*/
}
} // namespace gamemd

// 0x7B0C30
namespace gamemd {
void sub_7B0C30()
{
  dbl_B77FC8 = 0.0174532925199433 * 60.0; /*0x7b0c3c*/
}
} // namespace gamemd

// 0x7B0C50
namespace gamemd {
void sub_7B0C50()
{
  dbl_B77FB0 = 0.0174532925199433 * 90.0; /*0x7b0c5c*/
}
} // namespace gamemd

// 0x7B0C70
namespace gamemd {
long long sub_7B0C70()
{
  double v0; // st7
  int64_t result; // rax

  v0 = Math::Sin(dbl_B77FB0 - dbl_B77FC8); /*0x7b0c82*/
  result = Math::RoundToInt(v0 * dbl_B77FC0 * 0.5); /*0x7b0c96*/
  dword_B78018 = result; /*0x7b0c9b*/
  return result; /*0x7b0ca0*/
}
} // namespace gamemd

// 0x7B0CB0
namespace gamemd {
void sub_7B0CB0()
{
  dbl_B77FD0 = Math::ArcTan((double)dword_B78018 * 0.00390625); /*0x7b0cc7*/
}
} // namespace gamemd

// 0x7B0CE0
namespace gamemd {
void sub_7B0CE0()
{
  dbl_B77FE8 = Math::ArcTan((double)(2 * dword_B78018) / dbl_B77FC0); /*0x7b0d02*/
}
} // namespace gamemd

// 0x7B0D10
namespace gamemd {
long long sub_7B0D10()
{
  int64_t result; // rax

  result = Math::RoundToInt((double)(4 * dword_B78018) + 0.5); /*0x7b0d2b*/
  dword_B7800C = result; /*0x7b0d30*/
  return result; /*0x7b0d36*/
}
} // namespace gamemd

// 0x7B0D40
namespace gamemd {
int sub_7B0D40()
{
  word_B77FB8 = 0; /*0x7b0d42*/
  word_B77FBA = 0; /*0x7b0d48*/
  return 0; /*0x7b0d4e*/
}
} // namespace gamemd

// 0x7B0D50
namespace gamemd {
int sub_7B0D50()
{
  dword_B77FD8 = 0; /*0x7b0d52*/
  dword_B77FDC = 0; /*0x7b0d57*/
  dword_B77FE0 = 0; /*0x7b0d5c*/
  return 0; /*0x7b0d61*/
}
} // namespace gamemd

// 0x7B0D70
namespace gamemd {
int sub_7B0D70()
{
  dword_B78008 = 0; /*0x7b0d75*/
  dword_B78000 = 128; /*0x7b0d7f*/
  dword_B78004 = 128; /*0x7b0d84*/
  return 128; /*0x7b0d89*/
}
} // namespace gamemd

// 0x7B17B0
namespace gamemd {
int sub_7B17B0()
{
  dword_B78028 = 0; /*0x7b17b2*/
  dword_B7802C = 0; /*0x7b17b7*/
  dword_B78030 = 0; /*0x7b17bc*/
  dword_B78034 = 0; /*0x7b17c1*/
  return 0; /*0x7b17c6*/
}
} // namespace gamemd

// 0x7B17D0
namespace gamemd {
void sub_7B17D0()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x7b17dc*/
  dbl_B78040 = Math::Sqrt(v0 + v0); /*0x7b17ee*/
}
} // namespace gamemd

// 0x7B1800
namespace gamemd {
void sub_7B1800()
{
  dbl_B78090 = dbl_B78040 / 60.0; /*0x7b180c*/
}
} // namespace gamemd

// 0x7B1820
namespace gamemd {
void sub_7B1820()
{
  dbl_B78078 = 1.0 / dbl_B78090; /*0x7b182c*/
}
} // namespace gamemd

// 0x7B1840
namespace gamemd {
void sub_7B1840()
{
  dbl_B78070 = 0.0174532925199433 * 45.0; /*0x7b184c*/
}
} // namespace gamemd

// 0x7B1860
namespace gamemd {
void sub_7B1860()
{
  dbl_B78048 = 0.0174532925199433 * 60.0; /*0x7b186c*/
}
} // namespace gamemd

// 0x7B1880
namespace gamemd {
void sub_7B1880()
{
  dbl_B78020 = 0.0174532925199433 * 90.0; /*0x7b188c*/
}
} // namespace gamemd

// 0x7B18A0
namespace gamemd {
long long sub_7B18A0()
{
  double v0; // st7
  int64_t result; // rax

  v0 = Math::Sin(dbl_B78020 - dbl_B78048); /*0x7b18b2*/
  result = Math::RoundToInt(v0 * dbl_B78040 * 0.5); /*0x7b18c6*/
  dword_B78098 = result; /*0x7b18cb*/
  return result; /*0x7b18d0*/
}
} // namespace gamemd

// 0x7B18E0
namespace gamemd {
void sub_7B18E0()
{
  dbl_B78050 = Math::ArcTan((double)dword_B78098 * 0.00390625); /*0x7b18f7*/
}
} // namespace gamemd

// 0x7B1910
namespace gamemd {
void sub_7B1910()
{
  dbl_B78068 = Math::ArcTan((double)(2 * dword_B78098) / dbl_B78040); /*0x7b1932*/
}
} // namespace gamemd

// 0x7B1940
namespace gamemd {
long long sub_7B1940()
{
  int64_t result; // rax

  result = Math::RoundToInt((double)(4 * dword_B78098) + 0.5); /*0x7b195b*/
  dword_B7808C = result; /*0x7b1960*/
  return result; /*0x7b1966*/
}
} // namespace gamemd

// 0x7B1970
namespace gamemd {
int sub_7B1970()
{
  word_B78038 = 0; /*0x7b1972*/
  word_B7803A = 0; /*0x7b1978*/
  return 0; /*0x7b197e*/
}
} // namespace gamemd

// 0x7B1980
namespace gamemd {
int sub_7B1980()
{
  dword_B78058 = 0; /*0x7b1982*/
  dword_B7805C = 0; /*0x7b1987*/
  dword_B78060 = 0; /*0x7b198c*/
  return 0; /*0x7b1991*/
}
} // namespace gamemd

// 0x7B19A0
namespace gamemd {
int sub_7B19A0()
{
  dword_B78088 = 0; /*0x7b19a5*/
  dword_B78080 = 128; /*0x7b19af*/
  dword_B78084 = 128; /*0x7b19b4*/
  return 128; /*0x7b19b9*/
}
} // namespace gamemd

// 0x7B2BA0
namespace gamemd {
void sub_7B2BA0()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x7b2bac*/
  dbl_B780C8 = Math::Sqrt(v0 + v0); /*0x7b2bbe*/
}
} // namespace gamemd

// 0x7B2BD0
namespace gamemd {
void sub_7B2BD0()
{
  dbl_B78118 = dbl_B780C8 / 60.0; /*0x7b2bdc*/
}
} // namespace gamemd

// 0x7B2BF0
namespace gamemd {
void sub_7B2BF0()
{
  dbl_B78100 = 1.0 / dbl_B78118; /*0x7b2bfc*/
}
} // namespace gamemd

// 0x7B2C10
namespace gamemd {
void sub_7B2C10()
{
  dbl_B780F8 = 0.0174532925199433 * 45.0; /*0x7b2c1c*/
}
} // namespace gamemd

// 0x7B2C30
namespace gamemd {
void sub_7B2C30()
{
  dbl_B780D0 = 0.0174532925199433 * 60.0; /*0x7b2c3c*/
}
} // namespace gamemd

// 0x7B2C50
namespace gamemd {
void sub_7B2C50()
{
  dbl_B780A8 = 0.0174532925199433 * 90.0; /*0x7b2c5c*/
}
} // namespace gamemd

// 0x7B2C70
namespace gamemd {
long long sub_7B2C70()
{
  double v0; // st7
  int64_t result; // rax

  v0 = Math::Sin(dbl_B780A8 - dbl_B780D0); /*0x7b2c82*/
  result = Math::RoundToInt(v0 * dbl_B780C8 * 0.5); /*0x7b2c96*/
  dword_B78120 = result; /*0x7b2c9b*/
  return result; /*0x7b2ca0*/
}
} // namespace gamemd

// 0x7B2CB0
namespace gamemd {
void sub_7B2CB0()
{
  dbl_B780D8 = Math::ArcTan((double)dword_B78120 * 0.00390625); /*0x7b2cc7*/
}
} // namespace gamemd

// 0x7B2CE0
namespace gamemd {
void sub_7B2CE0()
{
  dbl_B780F0 = Math::ArcTan((double)(2 * dword_B78120) / dbl_B780C8); /*0x7b2d02*/
}
} // namespace gamemd

// 0x7B2D10
namespace gamemd {
long long sub_7B2D10()
{
  int64_t result; // rax

  result = Math::RoundToInt((double)(4 * dword_B78120) + 0.5); /*0x7b2d2b*/
  dword_B78114 = result; /*0x7b2d30*/
  return result; /*0x7b2d36*/
}
} // namespace gamemd

// 0x7B2D40
namespace gamemd {
int sub_7B2D40()
{
  word_B780C0 = 0; /*0x7b2d42*/
  word_B780C2 = 0; /*0x7b2d48*/
  return 0; /*0x7b2d4e*/
}
} // namespace gamemd

// 0x7B2D50
namespace gamemd {
int sub_7B2D50()
{
  dword_B780E0 = 0; /*0x7b2d52*/
  dword_B780E4 = 0; /*0x7b2d57*/
  dword_B780E8 = 0; /*0x7b2d5c*/
  return 0; /*0x7b2d61*/
}
} // namespace gamemd

// 0x7B2D70
namespace gamemd {
int sub_7B2D70()
{
  dword_B78110 = 0; /*0x7b2d75*/
  dword_B78108 = 128; /*0x7b2d7f*/
  dword_B7810C = 128; /*0x7b2d84*/
  return 128; /*0x7b2d89*/
}
} // namespace gamemd

// 0x7B2D90
namespace gamemd {
int sub_7B2D90()
{
  dword_B780B0 = 0; /*0x7b2d92*/
  dword_B780B4 = 0; /*0x7b2d97*/
  dword_B780B8 = 0; /*0x7b2d9c*/
  dword_B780BC = 0; /*0x7b2da1*/
  return 0; /*0x7b2da6*/
}
} // namespace gamemd

// 0x7B39D0
namespace gamemd {
char E4Recv_7B39D0::sub_7B39D0(unsigned int * a2, short a3)
{

  int v3; // esi
  int v4; // eax
  ObjectClass *v5; // edx
  unsigned short *i; // ecx

  v3 = *((unsigned int *)this + 64858); /*0x7b39d3*/
  v4 = 0; /*0x7b39d9*/
  if ( v3 <= 0 ) /*0x7b39de*/
    return 1; /*0x7b3a0b*/
  v5 = (ObjectClass *)((char *)this + 259436); /*0x7b39e9*/
  for ( i = (unsigned short *)((char *)this + 259500); a3 != *i || (void *)*a2 != v5->AbstractClass; ++i ) /*0x7b39ef*/
  {
    ++v4; /*0x7b3a00*/
    v5 = (ObjectClass *)((char *)v5 + 4); /*0x7b3a04*/
    if ( v4 >= v3 ) /*0x7b3a09*/
      return 1; /*0x7b3a09*/
  }
  return 0; /*0x7b3a0b*/

}
} // namespace gamemd

// 0x7B46F0
namespace gamemd {
void E4Recv_7B46F0::DeleteAndZero()
{

  int result; // eax

  result = (int)this->AbstractClass; /*0x7b46f3*/
  if ( this->AbstractClass ) /*0x7b46f3*/
    __3_YAXPAX_Z(this->AbstractClass); /*0x7b46fa*/
  this->AbstractClass = 0; /*0x7b4702*/
  return result; /*0x7b4708*/

}
} // namespace gamemd

// 0x7B4AC0
namespace gamemd {
char E4Recv_7B4AC0::sub_7B4AC0(size_t Count, char * Source)
{

  size_t v4; // edx
  char *vtable0; // ebx
  unsigned char *v6; // eax

  v4 = Count + 1; /*0x7b4ac9*/
  vtable0 = (char *)this->AbstractClass; /*0x7b4acc*/
  if ( this->AbstractClass ) /*0x7b4acc*/
    v4 = strlen((const char *)this->AbstractClass) + 1 + Count; /*0x7b4adf*/
  v6 = (unsigned char *)__2_YAPAXI_Z(v4); /*0x7b4ae2*/
  this->AbstractClass = v6; /*0x7b4aee*/
  if ( vtable0 ) /*0x7b4af1*/
    strcpy(v6, vtable0); /*0x7b4b0a*/
  else
    *v6 = 0; /*0x7b4b16*/
  if ( Source ) /*0x7b4b1f*/
    strncat((char *)this->AbstractClass, Source, Count); /*0x7b4b2b*/
  if ( vtable0 ) /*0x7b4b35*/
    __3_YAXPAX_Z(vtable0); /*0x7b4b38*/
  return 1; /*0x7b4b40*/

}
} // namespace gamemd

// 0x7B4B50
namespace gamemd {
char E4Recv_7B4B50::sub_7B4B50(char ** a2)
{

  char *v2; // eax
  const char *v4; // esi
  unsigned int v5; // kr08_4
  char *vtable0; // ebx
  size_t v7; // edx
  unsigned char *v8; // eax
  char *v10; // [esp+10h] [ebp+4h]

  v2 = *a2; /*0x7b4b57*/
  if ( *a2 ) /*0x7b4b57*/
  {
    v10 = *a2; /*0x7b4b6a*/
    v4 = v2; /*0x7b4b6e*/
  }
  else
  {
    v4 = &g_INI_DefaultBuffer; /*0x7b4b5f*/
    v10 = &g_INI_DefaultBuffer; /*0x7b4b64*/
  }
  if ( v4 ) /*0x7b4b72*/
  {
    v5 = strlen(v4) + 1; /*0x7b4b80*/
    vtable0 = (char *)this->AbstractClass; /*0x7b4b82*/
    v7 = v5; /*0x7b4b8a*/
    if ( this->AbstractClass ) /*0x7b4b82*/
      v7 = strlen((const char *)this->AbstractClass) + v5; /*0x7b4b99*/
    v8 = (unsigned char *)__2_YAPAXI_Z(v7); /*0x7b4b9c*/
    this->AbstractClass = v8; /*0x7b4ba8*/
    if ( vtable0 ) /*0x7b4bab*/
    {
      strcpy(v8, vtable0); /*0x7b4bc3*/
      v4 = v10; /*0x7b4bcc*/
    }
    else
    {
      *v8 = 0; /*0x7b4bd2*/
    }
    strcat((char *)this->AbstractClass, v4); /*0x7b4bf4*/
    if ( vtable0 ) /*0x7b4c00*/
      __3_YAXPAX_Z(vtable0); /*0x7b4c03*/
  }
  return 1; /*0x7b4c0b*/

}
} // namespace gamemd

// 0x7B50F0
namespace gamemd {
char E4Recv_7B50F0::sub_7B50F0(char a2)
{

  char v3; // bl
  const char *vtable0; // edx
  unsigned int v6; // esi
  char *v7; // eax
  char *v8; // ebx

  v3 = 0; /*0x7b50f4*/
  vtable0 = (const char *)this->AbstractClass; /*0x7b50f6*/
  if ( !this->AbstractClass ) /*0x7b50f6*/
    return 0; /*0x7b50fe*/
  v6 = strlen(vtable0); /*0x7b5119*/
  v7 = strchr(vtable0, a2); /*0x7b511b*/
  if ( v7 ) /*0x7b5125*/
  {
    do /*0x7b5157*/
    {
      memcpy(v7, v7 + 1, (char *)this->AbstractClass - (char *)v7 + v6-- - 1); /*0x7b513b*/
      *((unsigned char *)this->AbstractClass + v6) = 0; /*0x7b5145*/
      v7 = strchr((const char *)this->AbstractClass, a2); /*0x7b514d*/
    }
    while ( v7 ); /*0x7b5157*/
    v8 = (char *)__2_YAPAXI_Z(strlen((const char *)this->AbstractClass) + 1); /*0x7b516c*/
    strcpy(v8, (const char *)this->AbstractClass); /*0x7b5182*/
    __3_YAXPAX_Z(this->AbstractClass); /*0x7b518f*/
    this->AbstractClass = v8; /*0x7b5194*/
    return 1; /*0x7b5197*/
  }
  return v3; /*0x7b50fd*/

}
} // namespace gamemd

// 0x7B5360
namespace gamemd {
void E4Recv_7B5360::sub_7B5360(int Size)
{

  void *v3; // edi

  if ( this->AbstractClass ) /*0x7b5364*/
    __3_YAXPAX_Z(this->AbstractClass); /*0x7b536b*/
  this->AbstractClass = 0; /*0x7b5377*/
  if ( Size >= 0 ) /*0x7b537f*/
  {
    v3 = (void *)__2_YAPAXI_Z(Size); /*0x7b538a*/
    this->AbstractClass = v3; /*0x7b5393*/
    memset(v3, 0, Size); /*0x7b5398*/
  }

}
} // namespace gamemd

// 0x7B53B0
namespace gamemd {
unsigned int E4Recv_7B53B0::sub_7B53B0(ObjectClass * aP1, size_t Count)
{

  unsigned int v4; // kr08_4
  unsigned int result; // eax

  strncpy(aP1, (const char *)this->AbstractClass, Count); /*0x7b53c2*/
  v4 = strlen((const char *)this->AbstractClass) + 1; /*0x7b53d1*/
  result = v4 - 1; /*0x7b53d6*/
  if ( v4 - 1 < Count ) /*0x7b53da*/
  {
    result = 538976288; /*0x7b53e3*/
    memset(&aP1[v4 - 1], 0x20u, Count - (v4 - 1)); /*0x7b53ed*/
  }
  aP1[Count] = 0; /*0x7b53f6*/
  return result; /*0x7b53fa*/

}
} // namespace gamemd

// 0x7B5410
namespace gamemd {
char E4Recv_7B5410::sub_7B5410(unsigned int a2)
{

  unsigned char *vtable0; // edx

  vtable0 = this->AbstractClass; /*0x7b5410*/
  if ( a2 >= strlen((const char *)this->AbstractClass) ) /*0x7b5426*/
    return 0; /*0x7b542e*/
  else
    return vtable0[a2]; /*0x7b5428*/

}
} // namespace gamemd

// 0x7B54D0
namespace gamemd {
char E4Recv_7B54D0::sub_7B54D0(const char * Src, unsigned int a3)
{

  const char *vtable0; // edx
  size_t v5; // ecx
  unsigned char *v6; // eax
  char *v8; // ebp

  vtable0 = (const char *)this->AbstractClass; /*0x7b54d5*/
  if ( this->AbstractClass ) /*0x7b54d5*/
  {
    if ( a3 > strlen((const char *)this->AbstractClass) ) /*0x7b5542*/
      a3 = strlen(vtable0); /*0x7b5550*/
    v8 = (char *)__2_YAPAXI_Z(strlen(vtable0) + 1 + strlen(Src)); /*0x7b557d*/
    memset(v8, 0, strlen((const char *)this->AbstractClass) + 1 + strlen(Src)); /*0x7b55a0*/
    strcpy(v8, (const char *)this->AbstractClass); /*0x7b55c3*/
    memcpy(&v8[strlen(Src) + a3], &v8[a3], strlen((const char *)this->AbstractClass) + 1 - a3); /*0x7b55ff*/
    memcpy(&v8[a3], Src, strlen(Src)); /*0x7b5617*/
    __3_YAXPAX_Z(this->AbstractClass); /*0x7b561f*/
    this->AbstractClass = v8; /*0x7b5627*/
    return 1; /*0x7b5629*/
  }
  else
  {
    this->AbstractClass = 0; /*0x7b54df*/
    if ( Src ) /*0x7b54e3*/
      v5 = strlen(Src) + 1; /*0x7b54ec*/
    else
      v5 = 1; /*0x7b54f2*/
    v6 = (unsigned char *)__2_YAPAXI_Z(v5); /*0x7b54f8*/
    this->AbstractClass = v6; /*0x7b5500*/
    *v6 = 0; /*0x7b5504*/
    if ( Src ) /*0x7b5507*/
      strcpy((char *)this->AbstractClass, Src); /*0x7b551f*/
    return 1; /*0x7b552a*/
  }

}
} // namespace gamemd

// 0x7B5640
namespace gamemd {
char E4Recv_7B5640::sub_7B5640(char a2, unsigned int a3)
{

  size_t v4; // ecx
  unsigned char *v5; // eax
  unsigned int v7; // kr0C_4
  char *v8; // eax
  unsigned char *vtable0; // ecx
  char *v10; // ebx
  char v11; // dl
  int v12; // [esp+0h] [ebp-10h] BYREF
  char v13; // [esp+Eh] [ebp-2h] BYREF
  char v14; // [esp+Fh] [ebp-1h]

  if ( this->AbstractClass ) /*0x7b5646*/
  {
    v7 = strlen((const char *)this->AbstractClass) + 1; /*0x7b56c0*/
    if ( a3 > v7 - 1 ) /*0x7b56cb*/
      a3 = v7 - 1; /*0x7b56cd*/
    v8 = (char *)__2_YAPAXI_Z(v7 - 1 + 2); /*0x7b56d6*/
    vtable0 = this->AbstractClass; /*0x7b56db*/
    v10 = v8; /*0x7b56e2*/
    v14 = 0; /*0x7b56e4*/
    v11 = vtable0[a3]; /*0x7b56ef*/
    vtable0[a3] = 0; /*0x7b56f1*/
    strcpy(v8, (const char *)this->AbstractClass); /*0x7b5708*/
    *((unsigned char *)this->AbstractClass + a3) = v11; /*0x7b571c*/
    v13 = a2; /*0x7b5723*/
    strcat(v8, &v13); /*0x7b5743*/
    strcat(v8, (const char *)this->AbstractClass + a3); /*0x7b5771*/
    __3_YAXPAX_Z(this->AbstractClass); /*0x7b577e*/
    this->AbstractClass = v10; /*0x7b5786*/
    return 1; /*0x7b5789*/
  }
  else
  {
    v13 = a2; /*0x7b5657*/
    v14 = 0; /*0x7b565b*/
    this->AbstractClass = 0; /*0x7b5660*/
    if ( &v12 == (int *)-14 ) /*0x7b5663*/
      v4 = 1; /*0x7b5674*/
    else
      v4 = strlen(&v13) + 1; /*0x7b566e*/
    v5 = (unsigned char *)__2_YAPAXI_Z(v4); /*0x7b567a*/
    this->AbstractClass = v5; /*0x7b5686*/
    *v5 = 0; /*0x7b5689*/
    if ( &v13 ) /*0x7b568e*/
      strcpy((char *)this->AbstractClass, &v13); /*0x7b56a9*/
    return 1; /*0x7b56b4*/
  }

}
} // namespace gamemd

// 0x7B5C50
namespace gamemd {
void E4Recv_7B5C50::sub_7B5C50()
{

  unsigned int i; // esi
  char v3; // dl

  for ( i = 0; this->AbstractClass && i < strlen((const char *)this->AbstractClass); ++i ) /*0x7b5c55*/
  {
    v3 = *((unsigned char *)this->AbstractClass + i); /*0x7b5c6d*/
    if ( v3 >= 97 && v3 <= 122 ) /*0x7b5c78*/
      *((unsigned char *)this->AbstractClass + i) = toupper(v3); /*0x7b5c88*/
  }

}
} // namespace gamemd

// 0x7B5CA0
namespace gamemd {
char ** E4Recv_7B5CA0::sub_7B5CA0(char ** a2)
{

  char *v3; // ebx
  unsigned int i; // esi
  char v5; // al
  char *v6; // edx

  v3 = 0; /*0x7b5ca6*/
  if ( this->AbstractClass ) /*0x7b5ca8*/
  {
    v3 = (char *)__2_YAPAXI_Z(strlen((const char *)this->AbstractClass) + 1); /*0x7b5cbf*/
    strcpy(v3, (const char *)this->AbstractClass); /*0x7b5cd8*/
  }
  for ( i = 0; v3 && i < strlen(v3); ++i ) /*0x7b5ce1*/
  {
    v5 = v3[i]; /*0x7b5cf7*/
    if ( v5 >= 97 && v5 <= 122 ) /*0x7b5d00*/
      v3[i] = toupper(v5); /*0x7b5d0e*/
  }
  *a2 = 0; /*0x7b5d1a*/
  if ( v3 ) /*0x7b5d21*/
  {
    v6 = (char *)__2_YAPAXI_Z(strlen(v3) + 1); /*0x7b5d34*/
    *a2 = v6; /*0x7b5d3d*/
    strcpy(v6, v3); /*0x7b5d50*/
    __3_YAXPAX_Z(v3); /*0x7b5d59*/
  }
  return a2; /*0x7b5d61*/

}
} // namespace gamemd

// 0x7B6280
namespace gamemd {
void E4Recv_7B6280::__1_Timevec_std__QAE_XZ()
{

  atoi(*this); /*0x7b6283*/

}
} // namespace gamemd

// 0x7B6290
namespace gamemd {
char ** FromStringInt(IUnknown * aP0, int a2)
{
  size_t v3; // ecx
  char *v4; // eax
  char Buffer[16]; // [esp+8h] [ebp-10h] BYREF

  sprintf(Buffer, "%d", a2); /*0x7b62a2*/
  *aP0 = 0; /*0x7b62b0*/
  if ( Buffer ) /*0x7b62b6*/
    v3 = strlen(Buffer) + 1; /*0x7b62c1*/
  else
    v3 = 1; /*0x7b62c7*/
  v4 = (char *)RA2_OPNEW(v3); /*0x7b62cd*/
  *aP0 = v4; /*0x7b62d9*/
  *v4 = 0; /*0x7b62db*/
  if ( Buffer ) /*0x7b62e0*/
    strcpy(*aP0, Buffer); /*0x7b62fb*/
  return aP0; /*0x7b6307*/
}
} // namespace gamemd

// 0x7B6320
namespace gamemd {
char ** FormatStringInt(INIClass * aP0, MPCooperative * aP1, ObjectClass * aP2)
{
  size_t v5; // ecx
  char *v6; // eax
  char Buffer[16]; // [esp+Ch] [ebp-10h] BYREF

  sprintf(Buffer, "%%0%dd", aP2); /*0x7b6339*/
  sprintf(Buffer, Buffer, aP1); /*0x7b6349*/
  *aP0 = 0; /*0x7b6357*/
  if ( Buffer ) /*0x7b635d*/
    v5 = strlen(Buffer) + 1; /*0x7b6368*/
  else
    v5 = 1; /*0x7b636e*/
  v6 = (char *)RA2_OPNEW(v5); /*0x7b6374*/
  *aP0 = v6; /*0x7b6380*/
  *v6 = 0; /*0x7b6382*/
  if ( Buffer ) /*0x7b6387*/
    strcpy(*aP0, Buffer); /*0x7b63a1*/
  return aP0; /*0x7b63aa*/
}
} // namespace gamemd

// 0x7B6630
namespace gamemd {
bool String_ValidateContains(const char ** a1, const char * a2, char * Control)
{
  int result; // eax

  if ( Control && *a1 ) /*0x7b6639*/
    return strcspn(*a1, Control) < strlen(a2); /*0x7b665f*/
  IDA_LOBYTE(result) = 0; /*0x7b6665*/
  return result; /*0x7b6661*/
}
} // namespace gamemd

// 0x7B69F0
namespace gamemd {
char E4Recv_7B69F0::sub_7B69F0(size_t Count, wchar_t * Source)
{

  size_t v4; // ebx
  wchar_t *vtable0; // esi
  unsigned short *v6; // eax

  v4 = Count + 1; /*0x7b69fa*/
  vtable0 = (wchar_t *)this->AbstractClass; /*0x7b69fd*/
  if ( this->AbstractClass ) /*0x7b69fd*/
    v4 += wcslen((const wchar_t *)this->AbstractClass); /*0x7b6a0c*/
  v6 = (unsigned short *)__2_YAPAXI_Z(4 * v4); /*0x7b6a16*/
  this->AbstractClass = v6; /*0x7b6a1e*/
  if ( vtable0 ) /*0x7b6a22*/
    wcscpy(v6, vtable0); /*0x7b6a26*/
  else
    *v6 = 0; /*0x7b6a30*/
  if ( Source ) /*0x7b6a3b*/
    wcsncat((wchar_t *)this->AbstractClass, Source, Count); /*0x7b6a42*/
  if ( vtable0 ) /*0x7b6a4c*/
    __3_YAXPAX_Z(vtable0); /*0x7b6a4f*/
  return 1; /*0x7b6a57*/

}
} // namespace gamemd

// 0x7B6A60
namespace gamemd {
char E4Recv_7B6A60::sub_7B6A60(ObjectClass * aP1)
{

  wchar_t *v2; // ebp
  wchar_t *vtable0; // esi
  int v5; // edi
  unsigned short *v6; // eax

  v2 = (wchar_t *)*aP1; /*0x7b6a67*/
  if ( *aP1 || (v2 = &g_TypeClass_DefaultString) != 0 ) /*0x7b6a76*/
  {
    vtable0 = (wchar_t *)this->AbstractClass; /*0x7b6a78*/
    v5 = wcslen(v2) + 1; /*0x7b6a86*/
    if ( vtable0 ) /*0x7b6a89*/
      v5 += wcslen(vtable0); /*0x7b6a94*/
    v6 = (unsigned short *)__2_YAPAXI_Z(4 * v5); /*0x7b6a9e*/
    this->AbstractClass = v6; /*0x7b6aa6*/
    if ( vtable0 ) /*0x7b6aab*/
      wcscpy(v6, vtable0); /*0x7b6aaf*/
    else
      *v6 = 0; /*0x7b6ab9*/
    wcscat((wchar_t *)this->AbstractClass, v2); /*0x7b6ac2*/
    if ( vtable0 ) /*0x7b6acc*/
      __3_YAXPAX_Z(vtable0); /*0x7b6acf*/
  }
  return 1; /*0x7b6ad7*/

}
} // namespace gamemd

// 0x7B6EE0
namespace gamemd {
short E4Recv_7B6EE0::sub_7B6EE0(const wchar_t ** a2)
{

  unsigned int i; // esi
  wchar_t *vtable0; // eax
  wchar_t *v5; // eax

  for ( i = 0; ; ++i ) /*0x7b6ee9*/
  {
    vtable0 = (wchar_t *)this->vtable0; /*0x7b6eeb*/
    if ( !this->vtable0 ) /*0x7b6eeb*/
      break; /*0x7b6eeb*/
    vtable0 = (wchar_t *)wcslen((const wchar_t *)this->vtable0); /*0x7b6ef2*/
    if ( i >= (unsigned int)vtable0 ) /*0x7b6efc*/
      break; /*0x7b6efc*/
    v5 = (wchar_t *)*a2; /*0x7b6efe*/
    if ( !*a2 ) /*0x7b6efe*/
      v5 = &g_TypeClass_DefaultString; /*0x7b6f04*/
    vtable0 = wcschr(v5, *(unsigned short *)(this->vtable0 + 2 * i)); /*0x7b6f11*/
    if ( !vtable0 ) /*0x7b6f1b*/
      break; /*0x7b6f1b*/
  }
  if ( i ) /*0x7b6f22*/
    LOWORD(vtable0) = WideString::Erase((WideString *)this, 0, i); /*0x7b6f29*/
  return (int16_t)vtable0; /*0x7b6f2e*/

}
} // namespace gamemd

// 0x7B70B0
namespace gamemd {
size_t E4Recv_7B70B0::sub_7B70B0(ObjectClass * aP1, size_t Count)
{

  int result; // eax
  wchar_t *v5; // edi
  unsigned int v6; // ecx
  char v7; // cf
  wchar_t *v8; // edi
  int i; // ecx

  wcsncpy(aP1, (const wchar_t *)this->AbstractClass, Count); /*0x7b70c2*/
  result = wcslen((const wchar_t *)this->AbstractClass); /*0x7b70ca*/
  if ( result < Count ) /*0x7b70d4*/
  {
    v5 = &aP1[result]; /*0x7b70d8*/
    v6 = Count - result; /*0x7b70db*/
    result = 2097184; /*0x7b70dd*/
    v7 = v6 & 1; /*0x7b70e2*/
    v6 >>= 1; /*0x7b70e2*/
    memset32(v5, 2097184, v6); /*0x7b70e4*/
    v8 = &v5[2 * v6]; /*0x7b70e4*/
    for ( i = v7; i; --i ) /*0x7b70e6*/
      *v8++ = 32; /*0x7b70e8*/
  }
  aP1[Count] = 0; /*0x7b70eb*/
  return result; /*0x7b70f1*/

}
} // namespace gamemd

// 0x7B7DD0
namespace gamemd {
CampaignScore * FormatWideString(wchar_t ** a1, const wchar_t * a2)
{
  size_t v3; // eax
  wchar_t *v4; // eax
  wchar_t String[32]; // [esp+4h] [ebp-40h] BYREF

  swprintf(String, (const size_t)&g_Str_Fmt_PctD, a2); /*0x7b7de1*/
  *a1 = 0; /*0x7b7def*/
  if ( String ) /*0x7b7df5*/
    v3 = wcslen(String) + 1; /*0x7b7e04*/
  else
    v3 = 1; /*0x7b7e07*/
  v4 = (wchar_t *)RA2_OPNEW(2 * v3); /*0x7b7e0f*/
  *a1 = v4; /*0x7b7e1b*/
  *v4 = 0; /*0x7b7e1d*/
  if ( String ) /*0x7b7e24*/
    wcscpy(*a1, String); /*0x7b7e2e*/
  return a1; /*0x7b7e38*/
}
} // namespace gamemd

// 0x7B7ED0
namespace gamemd {
wchar_t ** CharStringToWide(ObjectClass * aP0, const char ** a1)
{
  int v4; // esi
  wchar_t *v5; // edi
  char *v6; // eax
  size_t v7; // eax
  wchar_t *v8; // eax
  wchar_t *v9; // esi
  size_t v10; // eax
  wchar_t *v11; // eax

  if ( *a1 ) /*0x7b7ed8*/
    v4 = strlen(*a1); /*0x7b7eec*/
  else
    v4 = 0; /*0x7b7ede*/
  v5 = (wchar_t *)RA2_OPNEW(2 * v4 + 2); /*0x7b7ef8*/
  v6 = (char *)*a1; /*0x7b7efa*/
  if ( !*a1 ) /*0x7b7efa*/
    v6 = &g_INI_DefaultBuffer; /*0x7b7f03*/
  BulkCharToWide(v5, (uint8_t *)v6, v4); /*0x7b7f0d*/
  if ( v5 ) /*0x7b7f14*/
    v7 = wcslen(v5) + 1; /*0x7b7f1f*/
  else
    v7 = 1; /*0x7b7f22*/
  v8 = (wchar_t *)RA2_OPNEW(2 * v7); /*0x7b7f2b*/
  v9 = v8; /*0x7b7f30*/
  *v8 = 0; /*0x7b7f37*/
  if ( v5 ) /*0x7b7f3c*/
    wcscpy(v8, v5); /*0x7b7f40*/
  RA2_OPDEL(v5); /*0x7b7f49*/
  *aP0 = 0; /*0x7b7f51*/
  if ( v9 ) /*0x7b7f5a*/
  {
    v10 = wcslen(v9); /*0x7b7f5d*/
    v11 = (wchar_t *)RA2_OPNEW(2 * v10 + 2); /*0x7b7f67*/
    *aP0 = v11; /*0x7b7f6e*/
    wcscpy(v11, v9); /*0x7b7f71*/
    RA2_OPDEL(v9); /*0x7b7f77*/
  }
  return aP0; /*0x7b7f7f*/
}
} // namespace gamemd

// 0x7B7F90
namespace gamemd {
char ** sub_7B7F90(char ** a1, const wchar_t ** a2)
{
  char **v3; // esi
  size_t v4; // edi
  char *v5; // ebp
  wchar_t *v6; // eax
  size_t v7; // ecx
  char *v8; // ebx
  char *v9; // edx

  v3 = a1; /*0x7b7f95*/
  if ( *a2 ) /*0x7b7f97*/
    v4 = wcslen(*a2); /*0x7b7faf*/
  else
    v4 = 0; /*0x7b7fa2*/
  v5 = (char *)RA2_OPNEW(v4 + 1); /*0x7b7fbb*/
  v6 = (wchar_t *)*a2; /*0x7b7fbd*/
  if ( !*a2 ) /*0x7b7fbd*/
    v6 = &g_TypeClass_DefaultString; /*0x7b7fc6*/
  CopyWideToChar(v5, (char *)v6, v4); /*0x7b7fd0*/
  if ( v5 ) /*0x7b7fd7*/
    v7 = strlen(v5) + 1; /*0x7b7fe0*/
  else
    v7 = 1; /*0x7b7fe6*/
  v8 = (char *)RA2_OPNEW(v7); /*0x7b7ff1*/
  *v8 = 0; /*0x7b7ff8*/
  if ( v5 ) /*0x7b7ffb*/
  {
    strcpy(v8, v5); /*0x7b8013*/
    v3 = a1; /*0x7b801c*/
  }
  RA2_OPDEL(v5); /*0x7b8021*/
  *v3 = 0; /*0x7b8029*/
  if ( !v8 ) /*0x7b8032*/
    return v3; /*0x7b807a*/
  v9 = (char *)RA2_OPNEW(strlen(v8) + 1); /*0x7b8045*/
  *v3 = v9; /*0x7b804e*/
  strcpy(v9, v8); /*0x7b8060*/
  RA2_OPDEL(v8); /*0x7b8069*/
  return a1; /*0x7b8075*/
}
} // namespace gamemd

// 0x7B8090
namespace gamemd {
wchar_t ** FormatWideStringPrefix(CampaignScore * aP0, const wchar_t * a1, wchar_t ** a2)
{
  int v5; // eax
  wchar_t *v6; // eax
  wchar_t *v7; // edi
  int v8; // eax
  wchar_t *v9; // eax
  int v10; // eax
  wchar_t *v11; // eax
  wchar_t *v12; // ecx
  wchar_t *String; // [esp+Ch] [ebp-4h] BYREF

  if ( a1 ) /*0x7b809a*/
    v5 = wcslen(a1) + 1; /*0x7b80a5*/
  else
    v5 = 1; /*0x7b80a8*/
  v6 = (wchar_t *)RA2_OPNEW(2 * v5); /*0x7b80b0*/
  v7 = v6; /*0x7b80b5*/
  *v6 = 0; /*0x7b80bc*/
  if ( a1 ) /*0x7b80c1*/
    wcscpy(v6, a1); /*0x7b80c5*/
  String = 0; /*0x7b80cf*/
  if ( v7 ) /*0x7b80d7*/
  {
    v8 = wcslen(v7); /*0x7b80da*/
    String = (wchar_t *)RA2_OPNEW(2 * v8 + 2); /*0x7b80eb*/
    wcscpy(String, v7); /*0x7b80ef*/
  }
  v9 = *a2; /*0x7b80fb*/
  if ( !*a2 ) /*0x7b80fb*/
    v9 = &g_TypeClass_DefaultString; /*0x7b8101*/
  WString::Append(&String, v9); /*0x7b810b*/
  *aP0 = 0; /*0x7b8110*/
  if ( String ) /*0x7b811c*/
  {
    v10 = wcslen(String); /*0x7b811f*/
    v11 = (wchar_t *)RA2_OPNEW(2 * v10 + 2); /*0x7b8129*/
    v12 = String; /*0x7b812e*/
    *aP0 = v11; /*0x7b8132*/
    wcscpy(v11, v12); /*0x7b8136*/
    if ( String ) /*0x7b8144*/
      RA2_OPDEL(String); /*0x7b8147*/
  }
  if ( v7 ) /*0x7b8151*/
    RA2_OPDEL(v7); /*0x7b8154*/
  return aP0; /*0x7b815c*/
}
} // namespace gamemd

// 0x7B8170
namespace gamemd {
wchar_t ** ConcatWString(GameSetup * aP0, const wchar_t ** a1, const wchar_t ** a2)
{
  wchar_t **v4; // ebx
  wchar_t *v5; // esi
  size_t v6; // eax
  const wchar_t *v7; // ebp
  wchar_t *v8; // ebx
  size_t v9; // edi
  wchar_t *v10; // eax
  size_t v11; // eax
  wchar_t *v12; // eax

  v4 = aP0; /*0x7b8176*/
  v5 = 0; /*0x7b8178*/
  if ( *a1 ) /*0x7b817a*/
  {
    v6 = wcslen(*a1); /*0x7b8185*/
    v5 = (wchar_t *)RA2_OPNEW(2 * v6 + 2); /*0x7b8196*/
    wcscpy(v5, *a1); /*0x7b819a*/
  }
  v7 = *a2; /*0x7b81a7*/
  if ( *a2 || (v7 = &g_TypeClass_DefaultString) != 0 ) /*0x7b81b4*/
  {
    v8 = v5; /*0x7b81b7*/
    v9 = wcslen(v7) + 1; /*0x7b81c3*/
    if ( v5 ) /*0x7b81c6*/
      v9 += wcslen(v5); /*0x7b81d1*/
    v10 = (wchar_t *)RA2_OPNEW(4 * v9); /*0x7b81db*/
    v5 = v10; /*0x7b81e3*/
    if ( v8 ) /*0x7b81e7*/
      wcscpy(v10, v8); /*0x7b81eb*/
    else
      *v10 = 0; /*0x7b81f5*/
    wcscat(v5, v7); /*0x7b81fc*/
    if ( v8 ) /*0x7b8206*/
      RA2_OPDEL(v8); /*0x7b8209*/
    v4 = aP0; /*0x7b8211*/
  }
  *v4 = 0; /*0x7b8217*/
  if ( v5 ) /*0x7b821e*/
  {
    v11 = wcslen(v5); /*0x7b8221*/
    v12 = (wchar_t *)RA2_OPNEW(2 * v11 + 2); /*0x7b822b*/
    *v4 = v12; /*0x7b8232*/
    wcscpy(v12, v5); /*0x7b8234*/
    RA2_OPDEL(v5); /*0x7b823a*/
  }
  return v4; /*0x7b8242*/
}
} // namespace gamemd

// 0x7B8250
namespace gamemd {
bool E4Recv_7B8250::sub_7B8250(wchar_t * Control)
{

  size_t v3; // edi

  if ( !Control || !this->AbstractClass ) /*0x7b825c*/
    return 0; /*0x7b8284*/
  v3 = wcslen((const wchar_t *)this->AbstractClass); /*0x7b8269*/
  return wcscspn((const wchar_t *)this->AbstractClass, Control) < v3; /*0x7b827c*/

}
} // namespace gamemd

// 0x7B84B0
namespace gamemd {
int sub_7B84B0()
{
  dword_B78128 = 0; /*0x7b84b2*/
  dword_B7812C = 0; /*0x7b84b7*/
  dword_B78130 = 0; /*0x7b84bc*/
  dword_B78134 = 0; /*0x7b84c1*/
  return 0; /*0x7b84c6*/
}
} // namespace gamemd

// 0x7B8610
namespace gamemd {
DWORD sub_7B8610(unsigned int * lpThreadParameter)
{
  lpThreadParameter[6] = 1; /*0x7b861a*/
  lpThreadParameter[2] = 0; /*0x7b861d*/
  if ( *lpThreadParameter ) /*0x7b8624*/
  {
    lpThreadParameter[2] = 1; /*0x7b86a7*/
    return 0; /*0x7b86aa*/
  }
  else
  {
    do /*0x7b8695*/
    {
      if ( WaitForSingleObject(hMutex, 0x2710u) == 258 ) /*0x7b8650*/
        Debug::Log(); /*0x7b8661*/
      if ( dword_B78164 ) /*0x7b8671*/
        WWMouseClass::UpdateCursorMovement((LONG *)dword_B78164); /*0x7b8673*/
      ReleaseMutex(hMutex); /*0x7b867f*/
      Sleep(lpThreadParameter[4]); /*0x7b8688*/
      ++lpThreadParameter[1]; /*0x7b868e*/
    }
    while ( !*lpThreadParameter ); /*0x7b8695*/
    lpThreadParameter[2] = 1; /*0x7b8697*/
    return 0; /*0x7b86a1*/
  }
}
} // namespace gamemd

// 0x7B9DF0
namespace gamemd {
int E4Recv_7B9DF0::sub_7B9DF0(LONG * a2, LONG * a3)
{

  LONG y; // edx
  struct tagPOINT Point; // [esp+4h] [ebp-8h] BYREF

  GetCursorPos(&Point); /*0x7b9dfb*/
  y = Point.y; /*0x7b9e09*/
  *a2 = Point.x; /*0x7b9e0d*/
  *a3 = y; /*0x7b9e15*/
  return (*((int (**)(ObjectClass *, LONG *, LONG *))this->AbstractClass + 17))(this, a2, a3); /*0x7b9e1e*/

}
} // namespace gamemd

// 0x7BA2F0
namespace gamemd {
void ___CxxRestoreUnhandledExceptionFilter_YAXXZ()
{
  ReleaseMutex(hMutex); /*0x7ba2f6*/
}
} // namespace gamemd

// 0x7BA5C0
namespace gamemd {
int sub_7BA5C0()
{
  dword_B78178 = 0; /*0x7ba5c2*/
  dword_B7817C = 0; /*0x7ba5c7*/
  dword_B78180 = 0; /*0x7ba5cc*/
  dword_B78184 = 0; /*0x7ba5d1*/
  return 0; /*0x7ba5d6*/
}
} // namespace gamemd

// 0x7BBFF0
namespace gamemd {
char sub_7BBFF0(int a1, int a2, int * a4, int arg4, unsigned char * a6, int * a7, int * a8)
{
  int v9; // eax
  int *v11; // [esp-10h] [ebp-3Ch]
  unsigned char v12[20]; // [esp+Ch] [ebp-20h] BYREF
  int v13[3]; // [esp+20h] [ebp-Ch] BYREF

  v11 = (int *)(*(int (**)(int *, unsigned char *, int))(*arg4 + 120))(arg4, v12, arg4); /*0x7bc022*/
  v9 = (*(int (**)(int))(*(unsigned int *)a1 + 120))(a1); /*0x7bc02a*/
  return CalcSurfaceBlitRects(a1, v9, v13, a2, arg4, v11, a8, a8, a8); /*0x7bc036*/
}
} // namespace gamemd

// 0x7BC610
namespace gamemd {
void sub_7BC610(int a1, char * a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
  char *v9; // edi
  int v10; // ecx
  char v11; // al

  v9 = (char *)a1 - 1; /*0x7bc623*/
  v10 = a3 + 1; /*0x7bc624*/
  while ( --v10 ) /*0x7bc625*/
  {
    v11 = *a2; /*0x7bc628*/
    ++v9; /*0x7bc62a*/
    ++a2; /*0x7bc62b*/
    if ( v11 ) /*0x7bc62e*/
      *v9 = v11; /*0x7bc630*/
  }
}
} // namespace gamemd

// 0x7BC640
namespace gamemd {
BlitPlain * E4Recv_7BC640::___Gfacet_locale_std__UAEPAXI_Z_148(unsigned int * Block, char a2)
{

  *Block = &vt_Blitter; /*0x7bc649*/
  if ( (a2 & 1) != 0 ) /*0x7bc64f*/
    __3_YAXPAX_Z(Block); /*0x7bc652*/
  return Block; /*0x7bc65c*/

}
} // namespace gamemd

// 0x7BC660
namespace gamemd {
BlitPlain * E4Recv_7BC660::___Gfacet_locale_std__UAEPAXI_Z_149(unsigned int * Block, char a2)
{

  *Block = &vt_Blitter; /*0x7bc669*/
  if ( (a2 & 1) != 0 ) /*0x7bc66f*/
    __3_YAXPAX_Z(Block); /*0x7bc672*/
  return Block; /*0x7bc67c*/

}
} // namespace gamemd

// 0x7BC680
namespace gamemd {
BlitTrans * E4Recv_7BC680::___Gfacet_locale_std__UAEPAXI_Z_150(unsigned int * Block, char a2)
{

  *Block = &vt_Blitter; /*0x7bc689*/
  if ( (a2 & 1) != 0 ) /*0x7bc68f*/
    __3_YAXPAX_Z(Block); /*0x7bc692*/
  return Block; /*0x7bc69c*/

}
} // namespace gamemd

// 0x7BC6A0
namespace gamemd {
BlitTrans * E4Recv_7BC6A0::___Gfacet_locale_std__UAEPAXI_Z_151(unsigned int * Block, char a2)
{

  *Block = &vt_Blitter; /*0x7bc6a9*/
  if ( (a2 & 1) != 0 ) /*0x7bc6af*/
    __3_YAXPAX_Z(Block); /*0x7bc6b2*/
  return Block; /*0x7bc6bc*/

}
} // namespace gamemd

// 0x7BC6C0
namespace gamemd {
int E4Recv_7BC6C0::sub_7BC6C0(int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{

  return (*(int (**)(_BlitTrans_E *, int, int, int, int, int, int, int, unsigned int))(*(unsigned int *)this->__pad_0 + 4))( /*0x7bc6ea*/
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
} // namespace gamemd

// 0x7BC6F0
namespace gamemd {
int E4Recv_7BC6F0::sub_7BC6F0(int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10)
{

  return (*(int (**)(_BlitTrans_E *, int, int, int, int, int, int, int, unsigned int))(*(unsigned int *)this->__pad_0 + 4))( /*0x7bc71a*/
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
} // namespace gamemd

// 0x7BC720
namespace gamemd {
int E4Recv_7BC720::sub_7BC720(int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{

  return (*(int (**)(_BlitTrans_E *, int, int, int, int, int, int, int, unsigned int))(*(unsigned int *)this->__pad_0 + 4))( /*0x7bc74a*/
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
} // namespace gamemd

// 0x7BC750
namespace gamemd {
unsigned int sub_7BC750(void * a0, const void * a1, BlitPlain * aP2, int a4, int a5, int a6, int a7, int a8)
{
  qmemcpy((void *)a1, (const void *)aP2, a4); /*0x7bc763*/
  return a4; /*0x7bc76c*/
}
} // namespace gamemd

// 0x7BC780
namespace gamemd {
void * sub_7BC780(BlowStraw * aP0, void * Src, ModemGame * aP2, int a4, int a5, int a6, int a7)
{
  return memcpy(Src, (const void *)aP2, a4); /*0x7bc797*/
}
} // namespace gamemd

// 0x7BC7A0
namespace gamemd {
unsigned int sub_7BC7A0(void * a0, const void * a1, BlitPlain * aP2, int a4, int a5, int a6, int a7, int a8, int a9)
{
  qmemcpy((void *)a1, (const void *)aP2, a4); /*0x7bc7b3*/
  return a4; /*0x7bc7bc*/
}
} // namespace gamemd

// 0x7BC7D0
namespace gamemd {
void * sub_7BC7D0(BlowStraw * aP0, void * Src, ModemGame * aP2, int a4, int a5, int a6, int a7, int a8)
{
  return memcpy(Src, (const void *)aP2, a4); /*0x7bc7e7*/
}
} // namespace gamemd

// 0x7BC7F0
namespace gamemd {
int sub_7BC7F0(void * a1, const void * a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
  qmemcpy((void *)a2, (const void *)a3, 2 * a4); /*0x7bc806*/
  return a4; /*0x7bc80f*/
}
} // namespace gamemd

// 0x7BC820
namespace gamemd {
void * sub_7BC820(BlowStraw * aP0, BombClass * aP1, int a3, int a4, int a5, int a6, int a7)
{
  return memcpy(aP1, (const void *)a3, 2 * a4); /*0x7bc83a*/
}
} // namespace gamemd

// 0x7BC840
namespace gamemd {
int sub_7BC840(void * a1, const void * a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
  qmemcpy((void *)a2, (const void *)a3, 2 * a4); /*0x7bc856*/
  return a4; /*0x7bc85f*/
}
} // namespace gamemd

// 0x7BC870
namespace gamemd {
void * sub_7BC870(BlowStraw * aP0, BombClass * aP1, int a3, int a4, int a5, int a6, int a7, int a8)
{
  return memcpy(aP1, (const void *)a3, 2 * a4); /*0x7bc88a*/
}
} // namespace gamemd

// 0x7BC890
namespace gamemd {
short sub_7BC890(unsigned short * a1, short * a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
  int16_t result; // ax
  int v11; // esi

  result = a3; /*0x7bc890*/
  if ( a3 > 0 ) /*0x7bc896*/
  {
    v11 = a3; /*0x7bc8a1*/
    do /*0x7bc8b5*/
    {
      result = *a2++; /*0x7bc8a3*/
      if ( result ) /*0x7bc8ac*/
        *(unsigned short *)a1->__pad_0 = result; /*0x7bc8ae*/
      a1 = (_BlitTrans_G *)((char *)a1 + 2); /*0x7bc8b1*/
      --v11; /*0x7bc8b4*/
    }
    while ( v11 ); /*0x7bc8b5*/
  }
  return result; /*0x7bc8b8*/
}
} // namespace gamemd

// 0x7BC8C0
namespace gamemd {
int E4Recv_7BC8C0::sub_7BC8C0(int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{

  return (*(int (**)(_BlitTrans_G *, int, int, int, int, int, int, int, unsigned int))(*(unsigned int *)this->__pad_0 + 4))( /*0x7bc8ea*/
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
} // namespace gamemd

// 0x7BC8F0
namespace gamemd {
int E4Recv_7BC8F0::sub_7BC8F0(int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10)
{

  return (*(int (**)(_BlitTrans_G *, int, int, int, int, int, int, int, unsigned int))(*(unsigned int *)this->__pad_0 + 4))( /*0x7bc91a*/
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
} // namespace gamemd

// 0x7BC920
namespace gamemd {
int E4Recv_7BC920::sub_7BC920(int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{

  return (*(int (**)(_BlitTrans_G *, int, int, int, int, int, int, int, unsigned int))(*(unsigned int *)this->__pad_0 + 4))( /*0x7bc94a*/
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
} // namespace gamemd

// 0x7BC950
namespace gamemd {
int sub_7BC950()
{
  dword_B78188 = 0; /*0x7bc952*/
  dword_B7818C = 0; /*0x7bc957*/
  dword_B78190 = 0; /*0x7bc95c*/
  dword_B78194 = 0; /*0x7bc961*/
  return 0; /*0x7bc966*/
}
} // namespace gamemd

// 0x7BCA50
namespace gamemd {
int E4Recv_7BCA50::sub_7BCA50(int a2, int a3, int a4, int a5, int a6)
{

  unsigned short *v8; // edi
  int16_t *v9; // esi
  int v10; // eax
  int v11; // edx
  int v12; // eax
  int v13; // ecx
  int16_t v14; // dx
  int v16; // [esp+14h] [ebp+4h]

  v8 = (unsigned short *)(*(int (**)(int, int, int))(*(unsigned int *)a2 + 92))(a2, a3, a4); /*0x7bca72*/
  v9 = (int16_t *)(this->? + this->?); /*0x7bca79*/
  v10 = (*(int (**)(int))(*(unsigned int *)a2 + 116))(a2); /*0x7bca7b*/
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
          if ( (unsigned int)v9 >= this->? ) /*0x7bcab0*/
            v9 = (int16_t *)((char *)v9 - (unsigned int)this->?); /*0x7bcab2*/
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
  return (*(int (**)(int))(*(unsigned int *)a2 + 96))(a2); /*0x7bcad2*/

}
} // namespace gamemd

// 0x7BCAF0
namespace gamemd {
char * sub_7BCAF0(char * a1, int a2, unsigned short a3)
{
  char *v3; // edx
  int v4; // ebx
  char *result; // eax
  unsigned int v6; // esi

  v3 = a1; /*0x7bcaf0*/
  v4 = a2; /*0x7bcaf5*/
  if ( ((uint8_t)a1 & 2) != 0 && a2 ) /*0x7bcb06*/
  {
    *(unsigned short *)a1 = a3; /*0x7bcb08*/
    v3 = a1 + 2; /*0x7bcb0b*/
    v4 = a2 - 1; /*0x7bcb0e*/
  }
  result = 0; /*0x7bcb11*/
  v6 = v4 >> 1; /*0x7bcb16*/
  if ( v4 >> 1 ) /*0x7bcb16*/
  {
    memset32(v3, 65537 * a3, v6); /*0x7bcb2e*/
    result = &v3[4 * v6]; /*0x7bcb30*/
  }
  if ( (v4 & 1) != 0 ) /*0x7bcb37*/
  {
    if ( result ) /*0x7bcb3b*/
      *(unsigned short *)result = a3; /*0x7bcb3d*/
  }
  return result; /*0x7bcb40*/
}
} // namespace gamemd

// 0x7BD5C0
namespace gamemd {
int sub_7BD5C0(unsigned int * a1, int a2)
{
  int v3; // ecx
  int v4; // edx
  int16_t v5; // si
  unsigned short *v6; // edx
  unsigned int v7; // ecx
  unsigned int v8; // ebx

  if ( a2 != a1[483] + a1[496] && a2 != a1[494] ) /*0x7bd5e0*/
    return -19; /*0x7bd5e2*/
  v3 = a1[489]; /*0x7bd5e8*/
  if ( v3 == -1 ) /*0x7bd5f1*/
    return -20; /*0x7bd67f*/
  v4 = a1[486]; /*0x7bd5f7*/
  v5 = *(unsigned short *)(v4 + 2 * v3); /*0x7bd5ff*/
  v6 = (unsigned short *)(v4 + 2 * v3); /*0x7bd603*/
  if ( v5 ) /*0x7bd609*/
  {
    *v6 = v5 - 1; /*0x7bd679*/
    return -1; /*0x7bd676*/
  }
  else
  {
    v7 = v3 + 1; /*0x7bd611*/
    *(unsigned char *)(a1[485] + v7 - 1) = 0; /*0x7bd612*/
    if ( v7 >= a1[487] ) /*0x7bd61f*/
      v7 = 0; /*0x7bd621*/
    if ( *(unsigned char *)(a1[485] + v7) == 1 ) /*0x7bd62d*/
    {
      v8 = a1[39] + a1[496]; /*0x7bd63b*/
      a1[496] = v8; /*0x7bd63d*/
      if ( v8 >= a1[38] ) /*0x7bd64d*/
        a1[496] = 0; /*0x7bd64f*/
      a1[489] = v7; /*0x7bd659*/
      return -1; /*0x7bd660*/
    }
    else
    {
      a1[489] = -1; /*0x7bd665*/
      return -1; /*0x7bd670*/
    }
  }
}
} // namespace gamemd

// 0x7BE940
namespace gamemd {
char sub_7BE940(int a1, int * a2)
{
  int v4; // eax
  unsigned int *v5; // ebx
  int (__cdecl *v6)(int, int, unsigned int, unsigned int); // eax
  int v7; // ecx
  int v8; // edx
  int v9; // edi
  int v10; // ebp
  int v11; // eax
  int v12; // ebx
  int v14; // [esp-8h] [ebp-24h]

  IDA_LOBYTE(v4) = *(unsigned char *)(a1 + 420); /*0x7be94a*/
  v5 = (unsigned int *)a2[1]; /*0x7be954*/
  v5 = v5; /*0x7be959*/
  if ( (v4 & 2) == 0 /*0x7be982*/
    && ((v6 = *(int (**)(int, int, unsigned int, unsigned int))(a1 + 72)) != 0 && (v4 = v6(a1, 6, 0, 0)) != 0
     || (v4 = *(unsigned int *)(a1 + 424)) != 0) )
  {
    v7 = *(unsigned int *)(a1 + 1732); /*0x7be988*/
    v8 = *(unsigned int *)(a1 + 1736); /*0x7be98e*/
    v9 = v4 + *(unsigned int *)(a1 + 444); /*0x7be99b*/
    v7 = v7; /*0x7be9a2*/
    v8 = v8; /*0x7be9a6*/
    if ( (a2[5] & 0x40) != 0 ) /*0x7be9aa*/
      v10 = *(unsigned int *)(a1 + 1768); /*0x7be9ac*/
    else
      v10 = *a2; /*0x7be9b4*/
    v11 = v5[3]; /*0x7be9b7*/
    if ( (v11 & 4) != 0 ) /*0x7be9bc*/
      v12 = *(unsigned int *)(a1 + 1776); /*0x7be9be*/
    else
      v12 = *v5; /*0x7be9c6*/
    if ( *(unsigned int *)(a1 + 72) && (v11 & 8) != 0 ) /*0x7be9d0*/
    {
      IDA_LOBYTE(v11) = v11 & 0xF7; /*0x7be9d6*/
      v5[3] = v11; /*0x7be9d8*/
      (*(void (**)(int, int, int, unsigned int))(a1 + 72))(a1, 3, v12, v5[5]); /*0x7be9e3*/
      v8 = v8; /*0x7be9e6*/
      v7 = v7; /*0x7be9ea*/
    }
    v14 = *(unsigned int *)(a1 + 428); /*0x7be9ff*/
    if ( (a2[5] & 0x20) != 0 ) /*0x7bea05*/
      (*(void (**)(int, int, int, int, int, int))(a1 + 1928))(v12, v10, v9, v7, v8, v14); /*0x7bea0f*/
    else
      (*(void (**)(int, int, int, int, int, int))(a1 + 1924))(v12, v10, v9, v7, v8, v14); /*0x7bea07*/
    v4 = *(unsigned int *)(a1 + 72); /*0x7bea15*/
    if ( v4 ) /*0x7bea1e*/
      IDA_LOBYTE(v4) = v4(a1, 7, 0, 0); /*0x7bea27*/
  }
  return v4; /*0x7bea2c*/
}
} // namespace gamemd

// 0x7BEA40
namespace gamemd {
int E4Recv_7BEA40::sub_7BEA40()
{

  int result; // eax
  int v3; // eax

  result = AudioStream::ProcessStream((int)this); /*0x7bea43*/
  if ( result == -1 ) /*0x7bea4b*/
  {
    sub_7BEFE0((int)this); /*0x7bea4f*/
    v3 = this->ironTintTimer[1]; /*0x7bea54*/
    *((unsigned int *)this + 439) = v3; /*0x7bea5a*/
    if ( (this->ironTintTimer[2] & 8) == 0 ) /*0x7bea69*/
      this->ironTintTimer[1] = *(unsigned int *)(v3 + 12); /*0x7bea6e*/
    return -1; /*0x7bea74*/
  }
  return result; /*0x7bea77*/

}
} // namespace gamemd

// 0x7BF0B0
namespace gamemd {
int E4Recv_7BF0B0::sub_7BF0B0()
{

  int *v2; // edi
  void (__cdecl *v3)(TechnoClass *, int, int, int); // eax
  int v4; // eax
  void (__cdecl *v5)(TechnoClass *, int, char *, int); // eax
  int (__cdecl *v6)(TechnoClass *, int); // eax

  v2 = (int *)*((unsigned int *)this + 439); /*0x7bf0b4*/
  if ( (v2[5] & 4) != 0 || (this->ironTintTimer[2] & 1) != 0 ) /*0x7bf0c9*/
  {
    if ( (v2[5] & 4) != 0 ) /*0x7bf0cd*/
    {
      v3 = (void (*)(TechnoClass *, int, int, int))this->ambientSoundController[3]; /*0x7bf0cf*/
      if ( v3 ) /*0x7bf0d4*/
        v3(this, 2, v2[2], v2[10]); /*0x7bf0dd*/
    }
    else
    {
      v4 = this->ironTintTimer[2]; /*0x7bf0df*/
      if ( (v4 & 1) != 0 ) /*0x7bf0e7*/
      {
        LOBYTE(v4) = v4 & 0xFE; /*0x7bf0e9*/
        this->ironTintTimer[2] = v4; /*0x7bf0eb*/
        v5 = (void (*)(TechnoClass *, int, char *, int))this->ambientSoundController[3]; /*0x7bf0f1*/
        if ( v5 ) /*0x7bf0f6*/
          v5(this, 2, this->__pad_1C4, this->airstrikeTintTimer[2]); /*0x7bf109*/
      }
    }
  }
  sub_7BE940((int)this, v2); /*0x7bf112*/
  v6 = (int (*)(TechnoClass *, int))this->ambientSoundController[4]; /*0x7bf117*/
  if ( v6 && v6(this, v2[7]) ) /*0x7bf123*/
    return -2; /*0x7bf12d*/
  else
    return -1; /*0x7bf135*/

}
} // namespace gamemd

// 0x7BF140
namespace gamemd {
int E4Recv_7BF140::sub_7BF140()
{

  int result; // eax
  int *v3; // edi

  result = AudioStream::ProcessStream((int)this); /*0x7bf143*/
  if ( result == -1 ) /*0x7bf14b*/
  {
    sub_7BEFE0((int)this); /*0x7bf150*/
    v3 = (int *)this->ironTintTimer[1]; /*0x7bf155*/
    sub_7BE940((int)this, v3); /*0x7bf15f*/
    *((unsigned int *)this + 439) = v3; /*0x7bf164*/
    if ( (this->ironTintTimer[2] & 8) == 0 ) /*0x7bf172*/
      this->ironTintTimer[1] = v3[3]; /*0x7bf177*/
    return -1; /*0x7bf17d*/
  }
  return result; /*0x7bf181*/

}
} // namespace gamemd

// 0x7BF190
namespace gamemd {
int E4Recv_7BF190::sub_7BF190()
{

  unsigned int *v2; // edi
  void (__cdecl *v3)(TechnoClass *, int, unsigned int, unsigned int); // eax
  int v4; // eax
  void (__cdecl *v5)(TechnoClass *, int, char *, int); // eax
  int (__cdecl *v6)(TechnoClass *, unsigned int); // eax

  v2 = (unsigned int *)*((unsigned int *)this + 439); /*0x7bf194*/
  if ( (v2[5] & 4) != 0 || (this->ironTintTimer[2] & 1) != 0 ) /*0x7bf1a9*/
  {
    if ( (v2[5] & 4) != 0 ) /*0x7bf1ad*/
    {
      v3 = (void (*)(TechnoClass *, int, unsigned int, unsigned int))this->ambientSoundController[3]; /*0x7bf1af*/
      if ( v3 ) /*0x7bf1b4*/
        v3(this, 2, v2[2], v2[10]); /*0x7bf1bd*/
    }
    else
    {
      v4 = this->ironTintTimer[2]; /*0x7bf1bf*/
      if ( (v4 & 1) != 0 ) /*0x7bf1c7*/
      {
        LOBYTE(v4) = v4 & 0xFE; /*0x7bf1c9*/
        this->ironTintTimer[2] = v4; /*0x7bf1cb*/
        v5 = (void (*)(TechnoClass *, int, char *, int))this->ambientSoundController[3]; /*0x7bf1d1*/
        if ( v5 ) /*0x7bf1d6*/
          v5(this, 2, this->__pad_1C4, this->airstrikeTintTimer[2]); /*0x7bf1e9*/
      }
    }
  }
  v6 = (int (*)(TechnoClass *, unsigned int))this->ambientSoundController[4]; /*0x7bf1ee*/
  if ( v6 && v6(this, v2[7]) ) /*0x7bf1fa*/
    return -2; /*0x7bf204*/
  else
    return -1; /*0x7bf20c*/

}
} // namespace gamemd

// 0x7BF220
namespace gamemd {
void nullsub_49()
{
  ; /*0x7bf220*/
}
} // namespace gamemd

// 0x7BF230
namespace gamemd {
int _underflow___basic_streambuf_DU__char_traits_D_std___std__MAEHXZ_7()
{
  return -1; /*0x7bf233*/
}
} // namespace gamemd

// 0x7BF240
namespace gamemd {
int sub_7BF240(int a1, int a2, char * DstBuf, int MaxCharCount)
{
  int result; // eax
  int v5; // esi
  int v6; // edi
  int v7; // eax

  result = 0; /*0x7bf24a*/
  v5 = *(unsigned int *)(a1 + 184); /*0x7bf24d*/
  switch ( a2 ) /*0x7bf25c*/
  {
    case 1: /*0x7bf25c*/
    case 2: /*0x7bf25c*/
      return 0;
    case 3: /*0x7bf25c*/
      result = _open(DstBuf, 0x8000); /*0x7bf26d*/
      if ( result != -1 ) /*0x7bf278*/
      {
        *(unsigned int *)(a1 + 184) = result; /*0x7bf27e*/
        return 0; /*0x7bf285*/
      }
      return result; /*0x7bf288*/
    case 4: /*0x7bf25c*/
      _close(*(unsigned int *)(a1 + 184)); /*0x7bf365*/
      return 0; /*0x7bf36d*/
    case 5: /*0x7bf25c*/
      v6 = MaxCharCount; /*0x7bf289*/
      return _read(v5, DstBuf, MaxCharCount) != v6; /*0x7bf2a7*/
    case 6: /*0x7bf25c*/
      return 1; /*0x7bf2af*/
    case 7: /*0x7bf25c*/
      v7 = _lseek(v5, MaxCharCount, (int)DstBuf); /*0x7bf2ba*/
      return v7 == -1; /*0x7bf2ba*/
    case 8: /*0x7bf25c*/
      if ( MaxCharCount <= 0 ) /*0x7bf2c2*/
      {
        result = _lseek(v5, MaxCharCount, (int)DstBuf) == -1; /*0x7bf317*/
        if ( !result ) /*0x7bf31b*/
        {
          result = _read(v5, &MaxCharCount, 1u) != 1; /*0x7bf332*/
          if ( !result ) /*0x7bf334*/
          {
            v7 = _lseek(v5, -1, 1); /*0x7bf33b*/
            return v7 == -1; /*0x7bf340*/
          }
        }
      }
      else
      {
        result = _lseek(v5, MaxCharCount - 1, (int)DstBuf) == -1; /*0x7bf2dc*/
        if ( !result ) /*0x7bf2e0*/
          return _read(v5, &MaxCharCount, 1u) != 1; /*0x7bf2fc*/
      }
      return result;
    case 9: /*0x7bf25c*/
      *(unsigned int *)DstBuf = _filelength(*(unsigned int *)(a1 + 184)); /*0x7bf35d*/
      return 0; /*0x7bf363*/
    default:
      return result;
  }
}
} // namespace gamemd

// 0x7BF3A0
namespace gamemd {
int sub_7BF3A0(unsigned int * a1, int a2, void * a3, signed int a4)
{
  int result; // eax
  int v5; // edi
  int v6; // esi

  result = 0; /*0x7bf3a8*/
  switch ( a2 ) /*0x7bf3b6*/
  {
    case 1: /*0x7bf3b6*/
    case 2: /*0x7bf3b6*/
    case 3: /*0x7bf3b6*/
    case 4: /*0x7bf3b6*/
    case 9: /*0x7bf3b6*/
      return 0;
    case 5: /*0x7bf3b6*/
      v5 = a1[449]; /*0x7bf3bd*/
      if ( v5 + a4 > a1[448] ) /*0x7bf3d2*/
        return 1; /*0x7bf3d2*/
      qmemcpy(a3, (const void *)(v5 + a1[445]), a4); /*0x7bf3e8*/
      a1[449] += a4; /*0x7bf3fd*/
      return 0; /*0x7bf404*/
    case 6: /*0x7bf3b6*/
      return 1;
    case 7: /*0x7bf3b6*/
    case 8: /*0x7bf3b6*/
      if ( !a3 ) /*0x7bf40c*/
      {
        v6 = a1[447]; /*0x7bf428*/
        if ( a4 >= v6 ) /*0x7bf434*/
        {
          a1[449] = a4 - v6; /*0x7bf439*/
          return result; /*0x7bf440*/
        }
        return 1; /*0x7bf434*/
      }
      if ( a3 != (void *)1 ) /*0x7bf40f*/
        return 1; /*0x7bf441*/
      a1[449] += a4; /*0x7bf41d*/
      return 0;
    default:
      return result;
  }
}
} // namespace gamemd
