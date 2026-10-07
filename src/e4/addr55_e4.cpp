// E4 materialized pending bodies (auto-generated from full_export v3)
#define GAMEMD_E4_VECTOR_TREE_TRUTH 1  // G57a2: G42.55 tree-truth bridge pulls core/vector.hpp templates
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/E4Recv_554400_e4.hpp"
#include "e4/classes/E4Recv_556510_e4.hpp"
#include "e4/classes/E4Recv_556520_e4.hpp"
#include "e4/classes/E4Recv_557380_e4.hpp"
#include "e4/classes/E4Recv_5581A0_e4.hpp"
#include "e4/classes/E4Recv_558810_e4.hpp"
#include "e4/classes/E4Recv_5595F0_e4.hpp"
#include "e4/classes/E4Recv_55B720_e4.hpp"
#include "e4/classes/Audio_e4.hpp"
#include "e4/classes/Coord_e4.hpp"
#include "e4/classes/Debug_e4.hpp"
#include "e4/classes/Dialog_e4.hpp"
#include "e4/classes/Event_e4.hpp"
#include "e4/classes/EventClass_e4.hpp"
#include "e4/classes/Math_e4.hpp"
#include "e4/classes/Mouse_e4.hpp"
#include "e4/classes/Network_e4.hpp"
#include "e4/classes/Options_e4.hpp"
#include "e4/classes/Scenario_e4.hpp"
#include "e4/classes/ScriptAction_e4.hpp"
#include "e4/classes/Tactical_e4.hpp"
#include "e4/classes/Timer_e4.hpp"
#include "e4/classes/Vector_e4.hpp"
#include "e4/classes/ObjectClass_e4.hpp"
#include "e4/classes/Block_e4.hpp"
#include "e4/classes/BuildingTypeClass_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/ColorStruct_e4.hpp"
#include "e4/classes/ObjectTypeClass_e4.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/CCFileClass_e4.hpp"
#include "e4/classes/SidebarClass_e4.hpp"
#include "e4/classes/CellStruct_e4.hpp"
#include "e4/classes/AudioStream_e4.hpp"
#include "e4/classes/Mission_e4.hpp"
#include "e4/classes/TeamClass_e4.hpp"
#include "e4/classes/Color_e4.hpp"
#include "e4/classes/MapClass_e4.hpp"
#include "e4/classes/PingPongBuffer_e4.hpp"
#include "e4/classes/StructTable_e4.hpp"
#include "e4/classes/TacticalClass_e4.hpp"
#include "e4/classes/ListClass_e4.hpp"
#include "e4/classes/Pipe_e4.hpp"
#include "e4/classes/SaveLoadDialog_e4.hpp"
#include "e4/classes/ScenarioClass_e4.hpp"
#include "e4/classes/LightConvertClass_e4.hpp"  // G42.36 C2027 supply
#include "e4/classes/CopyProtection_e4.hpp"  // G42.36 C2027 supply
#include "e4/classes/Tooltip_e4.hpp"  // G42.36 C2027 supply
#include "e4/classes/WTFMode_e4.hpp"  // G42.36 C2027 supply
#include "e4/classes/NetworkEventQueueClass_e4.hpp"  // G42.36 C2027 supply
#include "e4/classes/Process_e4.hpp"  // G42.36 C2027 supply
#include "e4/classes/Theme_e4.hpp"  // G42.36 C2027 supply
// ==== G42.57w9 data-label supply (IDA truth; e4_globals pending) ====
extern unsigned char byte_A8B8B4;  // data: 0xa8b8b4 truth(IDA G42.57w9)
extern unsigned char byte_A8EDDC;  // data: 0xa8eddc truth(IDA G42.57w9)


// 0x550080
namespace gamemd {
void ObjectClass::sub_550080(ObjectClass ** Block)
{

  void *vtable2; // edx
  int uniqueId; // eax
  int abstractFlags; // eax
  char *v5; // edx
  void *v6; // edx
  int v7; // eax
  unsigned int v8[4]; // [esp+4h] [ebp-10h] BYREF

  vtable2 = (void *)(((unsigned int *)this)[0]); /*0x550086*/
  uniqueId = ((unsigned int *)this)[0]; /*0x550089*/
  if ( vtable2 == (void *)-1 ) /*0x55008f*/
  {
LABEL_4:
    if ( uniqueId ) /*0x5500a1*/
      goto LABEL_7; /*0x5500a1*/
    goto LABEL_5; /*0x5500a1*/
  }
  if ( *(unsigned int *)((char *)&stru_A8EB00 + 416) - (int)vtable2 < uniqueId ) /*0x55009b*/
  {
    uniqueId -= *(unsigned int *)((char *)&stru_A8EB00 + 416) - (unsigned int)vtable2; /*0x55009d*/
    goto LABEL_4; /*0x55009d*/
  }
LABEL_5:
  abstractFlags = ((unsigned int *)this)[0]; /*0x5500a3*/
  if ( abstractFlags ) /*0x5500a8*/
  {
    v5 = (char *)this->AbstractClass + ((unsigned int *)this)[0]; /*0x5500af*/
    LOBYTE(((unsigned int *)this)[0]) = 1; /*0x5500b1*/
    this->AbstractClass = v5; /*0x5500b5*/
    v6 = (void *)v8[2]; /*0x5500bd*/
    ((unsigned int *)this)[0] = (unsigned int)(*(void **)(unsigned int *)((char *)&stru_A8EB00 + 416)); /*0x5500c1*/
    ((unsigned int *)this)[0] = (unsigned int)(v6); /*0x5500c4*/
    ((unsigned int *)this)[0] = abstractFlags; /*0x5500c7*/
    goto LABEL_8; /*0x5500ca*/
  }
LABEL_7:
  LOBYTE(((unsigned int *)this)[0]) = 0; /*0x5500cc*/
LABEL_8:
  if ( LOBYTE(this->customSound_controller[0]) ) /*0x5500d0*/
    BYTE1(this->customSound_controller[0]) = BYTE1(this->customSound_controller[0]) == 0; /*0x5500df*/
  if ( (int)this->AbstractClass >= this->ambientSoundController[4] && this ) /*0x5500ed*/
  {
    v8[0] = (unsigned int)(this);
v7 = (*(int (**)(int *, unsigned int *))(g_MissionQueueFrame.random[27] + 16))( /*0x550102*/ &g_MissionQueueFrame.random[27], (unsigned int *)(v8));


    if ( v7 != -1 && v7 < g_MissionQueueFrame.random[31] ) /*0x550112*/
    {
      --g_MissionQueueFrame.random[31]; /*0x550117*/
      for ( ; /*0x55011d*/
            v7 < g_MissionQueueFrame.random[31];
            *(unsigned int *)(g_MissionQueueFrame.random[28] + 4 * v7 - 4) = *(unsigned int *)(g_MissionQueueFrame.random[28]
                                                                                 + 4 * v7) )
      {
        ++v7; /*0x550125*/
      }
    }
    __3_YAXPAX_Z(this); /*0x550138*/
  }

}
} // namespace ra2

// 0x550150
namespace gamemd {
void sub_550150()
{
  int v1; // edi
  int v2; // ebp
  int *v3; // esi
  int v4; // edx
  int v5; // eax
  int v6; // ecx
  int v7; // eax
  int v8; // eax
  unsigned int v9[4]; // [esp+4h] [ebp-10h] BYREF

  v1 = g_MissionQueueFrame.random[31] - 1; /*0x550159*/
  if ( g_MissionQueueFrame.random[31] - 1 >= 0 ) /*0x55015e*/
  {
    v2 = v9[2]; /*0x550165*/
    do /*0x550170*/
    {
      v3 = *(int **)(g_MissionQueueFrame.random[28] + 4 * v1); /*0x550170*/
      v4 = v3[2]; /*0x550173*/
      v5 = v3[4]; /*0x550176*/
      if ( v4 != -1 ) /*0x55017c*/
      {
        if ( *(unsigned int *)((char *)&stru_A8EB00 + 416) - v4 >= v5 ) /*0x550188*/
          goto LABEL_7; /*0x550188*/
        v5 -= *(unsigned int *)((char *)&stru_A8EB00 + 416) - v4; /*0x55018a*/
      }
      if ( v5 ) /*0x55018e*/
        goto LABEL_9; /*0x55018e*/
  LABEL_7:
      v6 = v3[5]; /*0x550190*/
      if ( !v6 ) /*0x550195*/
      {
  LABEL_9:
        *((unsigned char *)v3 + 4) = 0; /*0x5501b4*/
        goto LABEL_10; /*0x5501b4*/
      }
      v7 = v3[6] + *v3; /*0x55019c*/
      *((unsigned char *)v3 + 4) = 1; /*0x55019e*/
      *v3 = v7; /*0x5501a2*/
      v3[2] = *(unsigned int *)((char *)&stru_A8EB00 + 416); /*0x5501a9*/
      v3[3] = v2; /*0x5501ac*/
      v3[4] = v6; /*0x5501af*/
  LABEL_10:
      if ( *((unsigned char *)v3 + 80) ) /*0x5501b8*/
        *((unsigned char *)v3 + 81) = *((unsigned char *)v3 + 81) == 0; /*0x5501c7*/
      if ( *v3 >= v3[19] && v3 ) /*0x5501d5*/
      {
        v9[0] = (unsigned int)(v3);
v8 = (*(int (**)(int *, unsigned int *))(g_MissionQueueFrame.random[27] + 16))( /*0x5501ea*/ &g_MissionQueueFrame.random[27], (unsigned int *)(v9));


        if ( v8 != -1 && v8 < g_MissionQueueFrame.random[31] ) /*0x5501fa*/
        {
          --g_MissionQueueFrame.random[31]; /*0x5501ff*/
          for ( ; /*0x550205*/
                v8 < g_MissionQueueFrame.random[31];
                *(unsigned int *)(g_MissionQueueFrame.random[28] + 4 * v8 - 4) = *(unsigned int *)(g_MissionQueueFrame.random[28]
                                                                                     + 4 * v8) )
          {
            ++v8; /*0x55020d*/
          }
        }
        RA2_OPDEL(v3); /*0x550220*/
      }
      --v1; /*0x550228*/
    }
    while ( v1 >= 0 ); /*0x550170*/
  }
}
}
// 0x5509F0
namespace gamemd {
int PrepareTacticalClassCellTransform(BuildingTypeClass * a1)
{
  BuildingTypeClass * v1;
  int v2; // eax
  double v3; // st7
  int v4; // ebp
  int v5; // esi
  char v6; // al
  int v7; // ecx
  double v8; // st7
  char v9; // al
  unsigned int v10; // eax
  unsigned int v11; // edx
  unsigned int v12; // ecx
  uint8_t v13; // cl
  uint8_t v14; // dl
  int v15; // eax
  unsigned int v16; // edi
  int v17; // eax
  BuildingTypeClass * v18;
  BuildingTypeClass * v19;
  int v20; // esi
  int v21; // edi
  int v22; // eax
  int v23; // ebx
  int v24; // esi
  int v25; // ecx
  int v26; // eax
  int v27; // ecx
  int v28; // eax
  float v29; // esi
  int v30; // esi
  unsigned int v31; // esi
  int v32; // ecx
  int16_t v33; // ax
  int16_t v34; // ax
  int v35; // ebp
  int v36; // edi
  int v37; // esi
  int v38; // esi
  int v39; // edi
  int v41; // [esp+38h] [ebp-158h]
  int v42; // [esp+38h] [ebp-158h]
  int v43; // [esp+38h] [ebp-158h]
  int v44; // [esp+38h] [ebp-158h]
  int v45; // [esp+38h] [ebp-158h]
  int v46; // [esp+38h] [ebp-158h]
  int v47; // [esp+3Ch] [ebp-154h]
  int v48; // [esp+3Ch] [ebp-154h]
  int v49; // [esp+3Ch] [ebp-154h]
  int v50; // [esp+3Ch] [ebp-154h]
  int v51; // [esp+3Ch] [ebp-154h]
  int v52; // [esp+3Ch] [ebp-154h]
  char v53; // [esp+5Fh] [ebp-131h]
  int16_t v54; // [esp+60h] [ebp-130h] BYREF
  uint8_t v55; // [esp+62h] [ebp-12Eh]
  int16_t v56; // [esp+68h] [ebp-128h] BYREF
  uint8_t v57; // [esp+6Ah] [ebp-126h]
  int v58; // [esp+70h] [ebp-120h]
  unsigned int v59; // [esp+74h] [ebp-11Ch]
  int16_t v60; // [esp+78h] [ebp-118h] BYREF
  uint8_t v61; // [esp+7Ah] [ebp-116h]
  int64_t v62; // [esp+80h] [ebp-110h] BYREF
  int v63; // [esp+88h] [ebp-108h] BYREF
  int v64; // [esp+8Ch] [ebp-104h]
  float v65; // [esp+90h] [ebp-100h]
  int v66; // [esp+94h] [ebp-FCh]
  int64_t v67; // [esp+98h] [ebp-F8h] BYREF
  int v68; // [esp+A0h] [ebp-F0h] BYREF
  int v69; // [esp+A4h] [ebp-ECh]
  int v70; // [esp+A8h] [ebp-E8h]
  uint8_t v71[4]; // [esp+ACh] [ebp-E4h] BYREF
  int64_t v72; // [esp+B0h] [ebp-E0h]
  int64_t v73; // [esp+B8h] [ebp-D8h]
  int64_t v74; // [esp+C0h] [ebp-D0h] BYREF
  int v75; // [esp+C8h] [ebp-C8h] BYREF
  int v76; // [esp+CCh] [ebp-C4h]
  unsigned int v77[24]; // [esp+D0h] [ebp-C0h] BYREF
  unsigned int v78[24]; // [esp+130h] [ebp-60h] BYREF
v1 = (gamemd::BuildingTypeClass *)((unsigned int)((gamemd::BuildingTypeClass *)((unsigned int)(a1))));
  IDA_LODWORD(v72) = (unsigned int)(a1); /*0x550a03*/
  if ( (byte_ABC7C8 & 1) == 0 ) /*0x550a07*/
  {
    ((unsigned int *)(dword_ABC7F8))[0] = -1; /*0x550a15*/
    ((unsigned int *)(dword_ABC7FC))[0] = -1; /*0x550a1f*/
    ((unsigned int *)(dword_ABC800))[0] = 1; /*0x550a27*/
    ((unsigned int *)(dword_ABC804))[0] = 1; /*0x550a2c*/
    dword_ABC808 = 0; /*0x550a37*/
    dword_ABC810 = 0; /*0x550a3c*/
    dword_ABC80C = -1; /*0x550a41*/
    dword_ABC818 = -1; /*0x550a4f*/
    dword_ABC820 = 1; /*0x550a56*/
    dword_ABC814 = 1; /*0x550a5e*/
    dword_ABC81C = 1; /*0x550a64*/
    dword_ABC828 = -1; /*0x550a6d*/
    dword_ABC824 = -1; /*0x550a77*/
    dword_ABC830 = 1; /*0x550a7f*/
    dword_ABC82C = 0; /*0x550a87*/
    dword_ABC834 = 0; /*0x550a8d*/
    dword_ABC838 = -1; /*0x550a96*/
    dword_ABC83C = -1; /*0x550aa0*/
    dword_ABC840 = 1; /*0x550aa8*/
    dword_ABC844 = 1; /*0x550aad*/
    dword_ABC848 = 0; /*0x550ab8*/
    dword_ABC850 = 0; /*0x550abd*/
    dword_ABC84C = -1; /*0x550ac2*/
    dword_ABC858 = -1; /*0x550ad0*/
    dword_ABC854 = 1; /*0x550ad7*/
    dword_ABC85C = 1; /*0x550add*/
    dword_ABC860 = 1; /*0x550ae3*/
    dword_ABC864 = -1; /*0x550aee*/
    dword_ABC868 = -1; /*0x550af4*/
    byte_ABC7C8 |= 1u; /*0x550b08*/
    dword_ABC86C = 0; /*0x550b0e*/
    dword_ABC870 = 1; /*0x550b14*/
    dword_ABC874 = 0; /*0x550b19*/
    atexit(nullsub_22); /*0x550b1f*/
  }
  v2 = (unsigned int)(v1[9]);
  v59 = (unsigned int)(v1[12]);
  v58 = v2; /*0x550b37*/
  v3 = ((Math *)(double)v1[10] - (double)v1[13])->CalcAngle( (double)(int)v59 - (double)v2); /*0x550b56*/
  IDA_LOWORD(v59) = Math::RoundToInt((v3 - 1.570796326794897) * -10430.06004058427); /*0x550b6f*/
  v59 = (((v59 >> 12) + 1) >> 1) & 7; /*0x550b8d*/
  ((Coord *)(g_TacticalClass_Instance))->To_Screen( (unsigned int *)(v1 + 9), (int *)(&v75)); /*0x550b91*/
  ((Coord *)(g_TacticalClass_Instance))->To_Screen((unsigned int *)(v1 + 12), (int *)&v74); /*0x550ba2*/
  v4 = (int)(v1[15] - ZCoordToScreenY((int)(v1[11])) - 2); /*0x550bb7*/
  v5 = (int)(-2 - ZCoordToScreenY((int)(v1[14]))); /*0x550bc4*/
  v66 = v5; /*0x550bc6*/
  if ( (unsigned int)dword_ABCD44 < PingPongBuffer::GetWriteOffset() || (v53 = 1, !dword_A8EB78) ) /*0x550be3*/
    v53 = 0; /*0x550be5*/
  v6 = *((unsigned char *)v1 + 82); /*0x550bea*/
  v65 = 1.0; /*0x550bed*/
  if ( v6 ) /*0x550bf7*/
  {
    v7 = (int)(*v1);
    v8 = *((float *)v1 + 21) - *((float *)v1 + 22); /*0x550c01*/
    v65 = *((float *)v1 + 19); /*0x550c04*/
    v58 = IDA_LODWORD(v65) - v7; /*0x550c0a*/
    v65 = v8 * (double)(IDA_LODWORD(v65) - v7) / (double)IDA_SLODWORD(v65) + *((float *)v1 + 22); /*0x550c19*/
  }
  v58 = Math::RoundToInt(v65 * 255.0); /*0x550c2c*/
  v9 = *((unsigned char *)v1 + 33); /*0x550c30*/
  v56 = 0; /*0x550c35*/
  v57 = 0; /*0x550c3f*/
  v71[0] = -1; /*0x550c44*/
  v71[1] = -1; /*0x550c49*/
  v71[2] = -1; /*0x550c4e*/
  if ( v9 ) /*0x550c53*/
  {
    v10 = 2 * *((uint8_t *)v1 + 67); /*0x550c64*/
    v11 = 2 * *((uint8_t *)v1 + 65); /*0x550c66*/
    v12 = 2 * *((uint8_t *)v1 + 66); /*0x550c68*/
    if ( v10 > 0xFF ) /*0x550c6f*/
      IDA_LOBYTE(v10) = -1; /*0x550c71*/
    if ( v12 > 0xFF ) /*0x550c7c*/
      IDA_LOBYTE(v12) = -1; /*0x550c7e*/
    if ( v11 > 0xFF ) /*0x550c89*/
      IDA_LOBYTE(v11) = -1; /*0x550c8b*/
    IDA_LOBYTE(v60) = v11; /*0x550c90*/
    IDA_HIBYTE(v60) = v12; /*0x550c94*/
    v61 = v10; /*0x550c9d*/
    v54 = v60; /*0x550ca1*/
    IDA_LOBYTE(v11) = v10; /*0x550ca6*/
  }
  else
  {
    v60 = *(unsigned short *)&v1->q041; /*0x550cb4*/
    v13 = *((unsigned char *)v1 + 66); /*0x550cb9*/
    v61 = *((unsigned char *)v1 + 67); /*0x550cbf*/
    v14 = *((unsigned char *)v1 + 67); /*0x550cc3*/
    IDA_LOBYTE(v54) = (uint8_t)v60 >> 1; /*0x550cca*/
    IDA_HIBYTE(v54) = v13 >> 1; /*0x550cce*/
    IDA_LOBYTE(v11) = v14 >> 1; /*0x550cd2*/
  }
  v63 = (int)(v75);
  v64 = (int)(v76);
  v68 = (int)(v75);
  v69 = (int)(v76);
  v67 = (int)(v74);
  v62 = (int)(v74);
  v15 = (int)(v1[7]);
  v55 = v11; /*0x550d11*/
  v70 = 1; /*0x550d15*/
  if ( v15 >= 1 )
  {
    v16 = v59; /*0x550d1f*/
    v17 = v59 & 1; /*0x550d25*/
    IDA_LODWORD(v73) = v17; /*0x550d27*/
    while ( 1 )
    {
      if ( v17 ) /*0x550d33*/
      {
        v18 = (gamemd::BuildingTypeClass *)((int)((gamemd::BuildingTypeClass *)(4 * v16)));
        v19 = (gamemd::BuildingTypeClass *)((&dword_ABC7F8)[4 * v16]);
        v20 = (int)((gamemd::BuildingTypeClass *)((&dword_ABC7FC)[4 * v16]));
        v68 += v19; /*0x550d52*/
        v69 += v20; /*0x550d5a*/
        v21 = (&dword_ABC800)[4 * v16]; /*0x550d5e*/
        v22 = ((unsigned int *)(dword_ABC804))[v18]; /*0x550d64*/
        v63 += v21; /*0x550d6c*/
        v64 += v22; /*0x550d76*/
        IDA_LODWORD(v62) = (unsigned int)(v19 + v62); /*0x550d84*/
        v23 = v20 + IDA_HIDWORD(v62); /*0x550d8c*/
        v24 = v21 + v67; /*0x550d92*/
        v16 = v59; /*0x550d94*/
        IDA_HIDWORD(v62) = v23; /*0x550d9a*/
        v1 = (gamemd::BuildingTypeClass *)((int *)v72); /*0x550d9e*/
        IDA_LODWORD(v67) = v24; /*0x550da2*/
        IDA_HIDWORD(v67) += v22; /*0x550da6*/
      }
      else if ( (v70 & 1) != 0 ) /*0x550db3*/
      {
        v25 = (&dword_ABC7F8)[4 * v16]; /*0x550dbc*/
        v26 = (&dword_ABC804)[4 * v16]; /*0x550dc2*/
        v68 += v25; /*0x550dca*/
        v64 += v26; /*0x550dd4*/
        IDA_LODWORD(v62) = v25 + v62; /*0x550de4*/
        IDA_HIDWORD(v67) += v26; /*0x550de8*/
      }
      else
      {
        v27 = (&dword_ABC7FC)[4 * v16]; /*0x550df5*/
        v28 = (&dword_ABC800)[4 * v16]; /*0x550dfb*/
        v69 += v27; /*0x550e03*/
        v63 += v28; /*0x550e0d*/
        IDA_HIDWORD(v62) += v27; /*0x550e1d*/
        IDA_LODWORD(v67) = v28 + v67; /*0x550e21*/
      }
      if ( !byte_8A0DF0 )
      {
        if ( v53 ) /*0x550e38*/
        {
          v29 = v65; /*0x550e3e*/
          (*(void (**)(int, int *, int *, int64_t *, int16_t *, float, int, int))(*(unsigned int *)g_DSurface_Hidden_2 /*0x550e61*/
                                                                                           + 64))(
            g_DSurface_Hidden_2,
            (int *)&DSurface_ViewBounds,
            &v68,
            &v62,
            &v54,
            COERCE_FLOAT(IDA_LODWORD(v65)),
            v4,
            v66);
          (*(void (**)(int, int *, int *, int64_t *, int16_t *, float, int, int))(*(unsigned int *)g_DSurface_Hidden_2 /*0x550e87*/
                                                                                           + 64))(
            g_DSurface_Hidden_2,
            (int *)&DSurface_ViewBounds,
            &v63,
            &v67,
            &v54,
            COERCE_FLOAT(IDA_LODWORD(v29)),
            v4,
            v66);
        }
        else
        {
          v57 = v11; /*0x550e98*/
          v56 = v54; /*0x550ea0*/
          ((Color *)((uint8_t *)&v56))->Lerp( v58, (uint8_t *)(v71)); /*0x550eab*/
          v30 = ((uint8_t)v56 >> g_BitShift_Green_0 << g_BitShift_Red) /*0x550f09*/
              | (IDA_HIBYTE(v56) >> g_BitMask_Blue << g_BitMask_Green)
              | (v57 >> g_BitMask_Red << g_BitShift_Blue);
          (*(void (**)(int, int *, int *, int64_t *, int, int, int, unsigned int))(*(unsigned int *)g_DSurface_Hidden_2 /*0x550f21*/
                                                                                      + 52))(
            g_DSurface_Hidden_2,
            (int *)&DSurface_ViewBounds,
            &v68,
            &v62,
            v30,
            v4,
            v66,
            0);
          (*(void (**)(int, int *, int *, int64_t *, int, int, int, unsigned int))(*(unsigned int *)g_DSurface_Hidden_2 /*0x550f44*/
                                                                                      + 52))(
            g_DSurface_Hidden_2,
            (int *)&DSurface_ViewBounds,
            &v63,
            &v67,
            v30,
            v4,
            v66,
            0);
        }
        if ( *((unsigned char *)v1 + 33) && v70 == 1 )
        {
          v54 = *(unsigned short *)&v1->q041; /*0x550f5c*/
          IDA_LOBYTE(v11) = *((unsigned char *)v1 + 67); /*0x550f61*/
          v55 = v11; /*0x550f64*/
        }
        else
        {
          v11 = v55 >> 1; /*0x550f8f*/
          v31 = v53 != 0 ? 8 : 64;
          if ( (uint8_t)v54 >> 1 < v31 && IDA_HIBYTE(v54) >> 1 < v31 && v11 < v31 ) /*0x550fa7*/
          {
  LABEL_37:
            v5 = v66; /*0x550fd1*/
            break; /*0x550fd1*/
          }
          v1 = (gamemd::BuildingTypeClass *)((int *)v72);
          v16 = v59; /*0x550fad*/
          IDA_LOBYTE(v54) = (uint8_t)v54 >> 1; /*0x550fb1*/
          IDA_HIBYTE(v54) >>= 1; /*0x550fb5*/
          v55 >>= 1; /*0x550fb9*/
        }
      }
      v32 = (int)(v1[7]);
      if ( ++v70 > v32 ) /*0x550fcb*/
        goto LABEL_37; /*0x550fcb*/
      v17 = v73; /*0x550d2d*/
    }
  }
  if ( byte_8A0DF0 && dword_8A0E10 && g_ZBufferDescriptor ) /*0x550ff9*/
  {
    v33 = *((unsigned short *)g_ZBufferDescriptor + 18); /*0x550fff*/
    IDA_HIDWORD(v73) = 0; /*0x551003*/
    v34 = *((unsigned short *)g_ZBufferDescriptor + 2) + v33; /*0x551007*/
    v73 = (uint16_t)(v4 + v34 - v76 - dword_886FA4); /*0x551036*/
    v72 = (uint16_t)(v5 + v34 - IDA_WORD2(v74) - dword_886FA4); /*0x551053*/
    *(float *)&v73 = (double)v73 * 0.000015259022; /*0x551064*/
    v35 = (v58 * v61) >> 8; /*0x551086*/
    v36 = (v58 * IDA_HIBYTE(v60)) >> 8; /*0x551089*/
    v37 = (v58 * (uint8_t)v60) >> 8; /*0x55108c*/
    *(float *)&v72 = (double)v72 * 0.000015259022; /*0x55108f*/
    ((ColorStruct*)/*0x55109d*/
      v77)->SetRGB(/*0x55109d*/ (uint16_t)(v58 * (uint8_t)v60) >> 8, (uint16_t)(v58 * IDA_HIBYTE(v60)) >> 8, (uint16_t)(v58 * v61) >> 8);
    ((ColorStruct *)(v78))->SetRGB(v37, v36, v35); /*0x5510ac*/
    v38 = v73; /*0x5510b1*/
    *(float *)&v47 = (float)v69; /*0x5510bf*/
    *(float *)&v41 = (float)v68; /*0x5510ce*/
    ((Tactical*)(char *)v77)->SetCellTransform( (int)((Tactical*)(char *)v77), 0, v41, (void *)(v47), v73, 0, 0); /*0x5510d3*/
    *(float *)&v48 = (float)v64; /*0x5510e5*/
    *(float *)&v42 = (float)v63; /*0x5510f4*/
    ((Tactical*)((char *)v77))->SetCellTransform( (int)((Tactical*)((char *)v77)), 1, v42, (void *)(v48), v38, 0, 1065353216); /*0x5510f9*/
    v39 = v72; /*0x5510fe*/
    *(float *)&v49 = (float)IDA_SHIDWORD(v62); /*0x55110f*/
    *(float *)&v43 = (float)(int)v62; /*0x55111e*/
    ((Tactical*)((char *)v77))->SetCellTransform( (int)((Tactical*)((char *)v77)), 2, v43, (void *)(v49), v72, 1065353216, 0); /*0x551123*/
    *(float *)&v50 = (float)v64; /*0x551135*/
    *(float *)&v44 = (float)v63; /*0x551144*/
    ((Tactical*)((char *)v78))->SetCellTransform( (int)((Tactical*)((char *)v78)), 0, v44, (void *)(v50), v38, 0, 1065353216); /*0x551149*/
    *(float *)&v51 = (float)IDA_SHIDWORD(v67); /*0x55115e*/
    *(float *)&v45 = (float)(int)v67; /*0x55116d*/
    ((Tactical*)((char *)v78))->SetCellTransform( (int)((Tactical*)((char *)v78)), 1, v45, (void *)(v51), v39, 1065353216, 1065353216); /*0x551172*/
    *(float *)&v52 = (float)IDA_SHIDWORD(v62); /*0x551184*/
    *(float *)&v46 = (float)(int)v62; /*0x551193*/
    ((Tactical*)((char *)v78))->SetCellTransform( (int)((Tactical*)((char *)v78)), 2, v46, (void *)(v52), v39, 1065353216, 0); /*0x551198*/
    ((StructTable *)(dword_8A0E10))->Append((void *)(v77)); /*0x5511ab*/
// 0x4a3840
    return ((StructTable *)(dword_8A0E10))->Append((void *)(v78)); /*0x5511be*/
  }
  else if ( v53 ) /*0x5511d4*/
  {
    return (*(int (**)(int, int *, int *, int64_t *, int16_t *, float, int, int))(*(unsigned int *)g_DSurface_Hidden_2 /*0x5511ff*/
                                                                                           + 64))(
             g_DSurface_Hidden_2,
             (int *)&DSurface_ViewBounds,
             &v75,
             &v74,
             &v60,
             COERCE_FLOAT(IDA_LODWORD(v65)),
             v4,
             v5);
  }
  else
  {
    v56 = v60; /*0x551216*/
    v57 = v61; /*0x551223*/
    ((Color *)((uint8_t *)&v56))->Lerp( v58, (uint8_t *)(v71)); /*0x55122d*/
    return (*(int (**)(int, int *, int *, int64_t *, int, int, int, unsigned int))(*(unsigned int *)g_DSurface_Hidden_2 /*0x5512a7*/
                                                                                      + 52))(
             g_DSurface_Hidden_2,
             (int *)&DSurface_ViewBounds,
             &v75,
             &v74,
             ((uint8_t)v56 >> g_BitShift_Green_0 << g_BitShift_Red)
           | (IDA_HIBYTE(v56) >> g_BitMask_Blue << g_BitMask_Green)
           | (v57 >> g_BitMask_Red << g_BitShift_Blue),
             v4,
             v5,
             0);
  }
}
}
// 0x551C60
namespace gamemd {
void int LCW_BitStreamIO(unsigned char * a1, unsigned int a2, int a3)
{
  unsigned int v3; // ebp
  unsigned int v5; // esi
  uint8_t v6; // al
  unsigned char *v7; // edi
  int v8; // ecx
  int v9; // ecx
  int v10; // eax
  uint8_t v11; // al
  int v12; // edi
  int v13; // ebp
  unsigned int v14; // edi
  unsigned int v15; // edx
  int v16; // eax
  unsigned int *v17; // ecx
  int v18; // edx
  unsigned int v19; // edi
  int v20; // eax
  unsigned int v21; // ecx
  int v22; // eax
  int v23; // ecx
  int v24; // edx
  unsigned int v25; // edi
  int v26; // edx
  unsigned char *v27; // ecx
  int v28; // edi
  int v29; // ecx
  unsigned int v30; // edi
  unsigned char *v31; // ecx
  int v32; // edx
  int v33; // eax
  int v34; // edi
  uint8_t v36; // [esp+10h] [ebp-18h]
  uint8_t *v38; // [esp+20h] [ebp-8h]

  v3 = a2; /*0x551c65*/
  v5 = a2; /*0x551c6f*/
  while ( 1 ) /*0x551cb9*/
  {
    while ( 1 ) /*0x551c80*/
    {
      while ( 1 ) /*0x551c77*/
      {
        v6 = *a1++; /*0x551c77*/
        if ( (v6 & 0x80u) != 0 ) /*0x551c80*/
          break; /*0x551c80*/
        v7 = (unsigned char *)(v5 - ((v6 & 0xF) << 8) - *a1++); /*0x551ca1*/
        if ( v6 >> 4 != -3 ) /*0x551ca9*/
        {
          v8 = (v6 >> 4) + 3; /*0x551cab*/
          do /*0x551cb3*/
          {
            *(unsigned char *)v5++ = *v7++; /*0x551cae*/
            --v8; /*0x551cb2*/
          }
          while ( v8 ); /*0x551cb3*/
        }
      }
      if ( (v6 & 0x40) == 0 ) /*0x551cb9*/
        break; /*0x551cb9*/
      if ( v6 == 0xFE ) /*0x551cdb*/
      {
        v11 = a1[2]; /*0x551cec*/
        v36 = v11; /*0x551cf2*/
        v12 = *a1 + (a1[1] << 8); /*0x551cf6*/
        a1 += 3; /*0x551d09*/
        v38 = (uint8_t *)(a1); /*0x551d11*/
        v13 = 16843009 * v11; /*0x551d1d*/
        v14 = (v5 & 3) - 4 + v12; /*0x551d2a*/
        if ( v5 < v5 - (v5 & 3) + 4 ) /*0x551d32*/
        {
          IDA_LOBYTE(a1) = v11; /*0x551d34*/
          IDA_BYTE1(a1) = v11; /*0x551d38*/
          v15 = 4 - (v5 & 3); /*0x551d40*/
          v16 = (unsigned int)a1 << 16; /*0x551d42*/
          IDA_LOWORD(v16) = (unsigned short)a1; /*0x551d47*/
          memset32((void *)v5, v16, v15 >> 2); /*0x551d4d*/
          a1 = (unsigned char *)(v38); /*0x551d51*/
          memset((void *)(v5 + 4 * (v15 >> 2)), v16, v15 & 3); /*0x551d58*/
          v5 += v15; /*0x551d60*/
          v11 = v36; /*0x551d62*/
        }
        v17 = (unsigned int *)v5; /*0x551d68*/
        IDA_HIWORD(v18) = IDA_HIWORD(v14); /*0x551d6a*/
        for ( v5 += v14 & 0xFFFFFFFC; (unsigned int)v17 < v5; v17 += 2 ) /*0x551d71*/
        {
          *v17 = v13; /*0x551d73*/
          v17[1] = v13; /*0x551d75*/
        }
        v19 = v5 + (v14 & 3); /*0x551d82*/
        if ( v5 < v19 ) /*0x551d86*/
        {
          IDA_LOBYTE(v18) = v11; /*0x551d8c*/
          IDA_BYTE1(v18) = v11; /*0x551d90*/
          v20 = v18 << 16; /*0x551d98*/
          IDA_LOWORD(v20) = v18; /*0x551da1*/
          v21 = (v19 - v5) >> 2; /*0x551da4*/
          memset32((void *)v5, v20, v21); /*0x551da7*/
          memset((void *)(v5 + 4 * v21), v18, ((unsigned char)v19 - (unsigned char)v5) & 3); /*0x551dae*/
          v5 = v19; /*0x551db2*/
        }
        v3 = a2; /*0x551c73*/
      }
      else if ( v6 == 0xFF ) /*0x551dbb*/
      {
        v22 = a1[1]; /*0x551dc1*/
        v23 = *a1; /*0x551dc4*/
        v24 = a1[3]; /*0x551dca*/
        a1 += 4; /*0x551dcd*/
        v25 = (v24 << 8) + v3; /*0x551ddd*/
        v26 = v23 + (v22 << 8); /*0x551ddf*/
        v27 = (unsigned char *)(v25 + *(a1 - 2)); /*0x551de1*/
        if ( v26 ) /*0x551de6*/
        {
          v28 = v26; /*0x551dec*/
          do /*0x551df6*/
          {
            *(unsigned char *)v5++ = *v27++; /*0x551df1*/
            --v28; /*0x551df5*/
          }
          while ( v28 ); /*0x551df6*/
        }
      }
      else
      {
        v29 = *a1; /*0x551e0b*/
        v30 = (a1[1] << 8) + v3; /*0x551e13*/
        a1 += 2; /*0x551e15*/
        v31 = (unsigned char *)(v30 + v29); /*0x551e18*/
        v32 = (v6 & 0x3F) + 3; /*0x551e1a*/
        v33 = (v6 & 0x3F) + 2; /*0x551e1c*/
        if ( v32 ) /*0x551e1f*/
        {
          v34 = v33 + 1; /*0x551e25*/
          do /*0x551e2f*/
          {
            *(unsigned char *)v5++ = *v31++; /*0x551e2a*/
            --v34; /*0x551e2e*/
          }
          while ( v34 ); /*0x551e2f*/
        }
      }
    }
    if ( v6 == 0x80 ) /*0x551cbb*/
      break; /*0x551cbb*/
    v9 = v6 & 0x3F; /*0x551cc6*/
    if ( v9 ) /*0x551ccb*/
    {
      v10 = v9; /*0x551ccd*/
      do /*0x551cd5*/
      {
        *(unsigned char *)v5++ = *a1++; /*0x551cd0*/
        --v10; /*0x551cd4*/
      }
      while ( v10 ); /*0x551cd5*/
    }
  }
  return v5 - v3; /*0x551e38*/
}
}
// 0x551E50
namespace gamemd {
int DecompressCoreLCW(Pipe * aP0, unsigned char * a1, int a3)
{
  char *v3; // esi
  unsigned char *v4; // edi
  unsigned char *v5; // edi
  uint8_t v6; // al
  unsigned char *v7; // ebx
  char *v8; // edi
  int v9; // ecx
  char *v10; // edi
  int16_t v11; // cx
  bool v12; // zf
  int v13; // ecx
  char *v14; // edx
  unsigned char *v15; // ebx
  unsigned char *v16; // edi
  bool v17; // zf
  int v18; // ecx
  unsigned char *v19; // eax
  unsigned char *v20; // edi
  int16_t v21; // ax
  char v22; // al
  unsigned char *v25; // [esp+18h] [ebp-20h]
  unsigned char *v27; // [esp+24h] [ebp-14h]
  char *v28; // [esp+28h] [ebp-10h]
  unsigned int v29; // [esp+2Ch] [ebp-Ch]
  int v30; // [esp+30h] [ebp-8h]
  unsigned char *v31; // [esp+34h] [ebp-4h]

  v25 = (unsigned char *)((char *)((unsigned char)(0)));
  v28 = (char *)((unsigned char)(&aP0[a3]));
  v30 = (unsigned char)(1);
  v27 = (unsigned char *)((unsigned char)(a1));
  *a1 = (unsigned char)(-127);
  v3 = (char *)((unsigned char)(aP0 + 1));
  a1[1] = (unsigned char)(*aP0);
  v4 = a1 + 2; /*0x551ec5*/
  do /*0x551fc7*/
  {
    v31 = (unsigned char *)(v4);
    v5 = (unsigned char *)(aP0);
    v29 = 1; /*0x551ecc*/
  LABEL_3:
    while ( 1 ) /*0x551ed5*/
    {
      v6 = *v3; /*0x551ed5*/
      if ( *v3 != v3[64] ) /*0x551eda*/
        break; /*0x551eda*/
      v7 = v5; /*0x551edc*/
      v8 = v3; /*0x551ede*/
      v9 = v28 - v3; /*0x551ee3*/
      do /*0x551ee5*/
      {
        if ( !v9 ) /*0x551ee5*/
          break; /*0x551ee5*/
        v12 = *v8++ == (char)v6; /*0x551ee5*/
        --v9; /*0x551ee5*/
      }
      while ( v12 ); /*0x551ee5*/
      v10 = v8 - 1; /*0x551ee7*/
      v11 = (unsigned short)v10 - (unsigned short)v3; /*0x551eea*/
      if ( (unsigned int)(v10 - v3) < 0x41 ) /*0x551eef*/
      {
        v5 = v7; /*0x551f0f*/
        break; /*0x551f0f*/
      }
      v30 = 0; /*0x551ef1*/
      v3 = v10; /*0x551ef8*/
      *v31 = -2; /*0x551f01*/
      *(unsigned short *)(v31 + 1) = v11; /*0x551f03*/
      v31[3] = v6; /*0x551f07*/
      v31 += 4; /*0x551f08*/
      v5 = v7; /*0x551f0b*/
    }
    while ( 1 ) /*0x551f13*/
    {
      v13 = (unsigned int)(char *)(v3 - v5); /*0x551f13*/
      v12 = v3 == (char *)(v5); /*0x551f13*/
      if ( v3 == (char *)(v5) ) /*0x551f15*/
        break; /*0x551f15*/
      do /*0x551f17*/
      {
        if ( !v13 ) /*0x551f17*/
          break; /*0x551f17*/
        v12 = *v5++ == v6; /*0x551f17*/
        --v13; /*0x551f17*/
      }
      while ( !v12 ); /*0x551f17*/
      if ( !v12 ) /*0x551f19*/
        break; /*0x551f19*/
      if ( v3[v29 - 1] == v5[v29 - 2] ) /*0x551f26*/
      {
        v14 = v3; /*0x551f28*/
        v15 = v5; /*0x551f2a*/
        v16 = v5 - 1; /*0x551f2c*/
        v18 = v28 - v3; /*0x551f30*/
        v17 = v28 == v3; /*0x551f30*/
        do /*0x551f32*/
        {
          if ( !v18 ) /*0x551f32*/
            break; /*0x551f32*/
          v17 = *v3++ == *v16++; /*0x551f32*/
          --v18; /*0x551f32*/
        }
        while ( v17 ); /*0x551f32*/
        if ( v17 ) /*0x551f34*/
          ++v16; /*0x551f36*/
        v3 = v14; /*0x551f37*/
        v19 = (unsigned char *)(v16 - v15); /*0x551f3b*/
        v5 = v15; /*0x551f3d*/
        if ( (unsigned int)v19 >= v29 ) /*0x551f42*/
        {
          v29 = (unsigned int)v19; /*0x551f44*/
          v25 = v15 - 1; /*0x551f48*/
        }
        goto LABEL_3; /*0x551f4b*/
      }
    }
    v20 = v31; /*0x551f50*/
    if ( v29 <= 2 ) /*0x551f56*/
    {
      if ( v30 ) /*0x551f8d*/
        goto LABEL_30; /*0x551f8d*/
      while ( 1 ) /*0x551f8f*/
      {
        v27 = v20; /*0x551f8f*/
        *v20++ = 0x80; /*0x551f94*/
  LABEL_30:
        if ( *v27 != 0xBF ) /*0x551f9b*/
        {
          ++*v27; /*0x551f9d*/
          v22 = *v3++; /*0x551f9f*/
          *v20 = v22; /*0x551fa0*/
          v4 = v20 + 1; /*0x551fa0*/
          v30 = 1; /*0x551fa1*/
          goto LABEL_35; /*0x551fa8*/
        }
      }
    }
    if ( v29 > 0xA || (unsigned int)(v3 - v25) > 0xFFF ) /*0x551f67*/
    {
      if ( v29 > 0x40 ) /*0x551f7c*/
      {
        *v31 = -1; /*0x551fac*/
        *(unsigned short *)(v31 + 1) = v29; /*0x551fb0*/
        v20 = v31 + 3; /*0x551fb0*/
      }
      else
      {
        *v31 = (v29 - 3) | 0xC0; /*0x551f86*/
        v20 = v31 + 1; /*0x551f86*/
      }
      v21 = (unsigned short)v25 - (unsigned short)aP0; /*0x551fb5*/
    }
    else
    {
      IDA_HIBYTE(v21) = (unsigned char)v3 - (unsigned char)v25; /*0x551f75*/
      IDA_LOBYTE(v21) = 16 * (v29 - 3) + ((uint16_t)((unsigned short)v3 - (unsigned short)v25) >> 8); /*0x551f75*/
    }
    *(unsigned short *)v20 = v21; /*0x551fb8*/
    v4 = v20 + 2; /*0x551fb8*/
    v3 += v29; /*0x551fba*/
    v30 = 0; /*0x551fbd*/
  LABEL_35:
    ; /*0x551fc4*/
  }
  while ( v3 < v28 ); /*0x551fc7*/
  *v4 = 0x80; /*0x551fd2*/
  return v4 + 1 - a1; /*0x551fde*/
}
}
// 0x552640
namespace gamemd {
unsigned int sub_552640(unsigned char * a1, unsigned int a2)
{
  unsigned int v3; // ebp
  unsigned int v4; // esi
  uint8_t v5; // al
  unsigned char *v6; // edi
  int v7; // ecx
  int v8; // ecx
  int v9; // eax
  uint8_t v10; // al
  int v11; // edi
  int v12; // ebp
  int v13; // ebx
  int v14; // edi
  int v15; // eax
  unsigned int v16; // ecx
  unsigned int *v17; // ecx
  int v18; // ebx
  unsigned int v19; // edi
  int v20; // eax
  unsigned int v21; // ecx
  int v22; // eax
  int v23; // edi
  int v24; // ecx
  unsigned int v25; // ebx
  int v26; // edi
  unsigned char *v27; // ecx
  int v28; // eax
  int v29; // edi
  int v30; // ecx
  unsigned int v31; // ebx
  unsigned char *v32; // ecx
  int v33; // edi
  int v34; // eax
  int v35; // edi

  v3 = a2; /*0x552649*/
  v4 = a2; /*0x55264f*/
  while ( 1 ) /*0x552699*/
  {
    while ( 1 ) /*0x552660*/
    {
      while ( 1 ) /*0x552657*/
      {
        v5 = *a1++; /*0x552657*/
        if ( (v5 & 0x80u) != 0 ) /*0x552660*/
          break; /*0x552660*/
        v6 = (unsigned char *)(v4 - ((v5 & 0xF) << 8) - *a1++); /*0x552681*/
        if ( v5 >> 4 != -3 ) /*0x552689*/
        {
          v7 = (v5 >> 4) + 3; /*0x55268b*/
          do /*0x552693*/
          {
            *(unsigned char *)v4++ = *v6++; /*0x55268e*/
            --v7; /*0x552692*/
          }
          while ( v7 ); /*0x552693*/
        }
      }
      if ( (v5 & 0x40) == 0 ) /*0x552699*/
        break; /*0x552699*/
      if ( v5 == 0xFE ) /*0x5526bb*/
      {
        v10 = a1[2]; /*0x5526cc*/
        v11 = *a1 + (a1[1] << 8); /*0x5526d6*/
        a1 += 3; /*0x5526e9*/
        v12 = 16843009 * v10; /*0x5526fd*/
        v13 = (v4 & 3) - 4; /*0x552708*/
        v14 = v13 + v11; /*0x55270a*/
        if ( v4 < v4 - (v4 & 3) + 4 ) /*0x552712*/
        {
          IDA_LOBYTE(v13) = v10; /*0x552714*/
          IDA_BYTE1(v13) = v10; /*0x552718*/
          v15 = v13 << 16; /*0x552722*/
          IDA_LOWORD(v15) = v13; /*0x552727*/
          v16 = (4 - (v4 & 3)) >> 2; /*0x55272a*/
          memset32((void *)v4, v15, v16); /*0x55272d*/
          memset((void *)(v4 + 4 * v16), v13, (4 - (v4 & 3)) & 3); /*0x552734*/
          v4 += 4 - (v4 & 3); /*0x552740*/
          v10 = v13; /*0x552742*/
        }
        v17 = (unsigned int *)v4; /*0x552746*/
        IDA_HIWORD(v18) = IDA_HIWORD(v14); /*0x552748*/
        for ( v4 += v14 & 0xFFFFFFFC; (unsigned int)v17 < v4; v17 += 2 ) /*0x55274f*/
        {
          *v17 = v12; /*0x552751*/
          v17[1] = v12; /*0x552753*/
        }
        v19 = v4 + (v14 & 3); /*0x552760*/
        if ( v4 < v19 ) /*0x552764*/
        {
          IDA_LOBYTE(v18) = v10; /*0x55276a*/
          IDA_BYTE1(v18) = v10; /*0x55276e*/
          v20 = v18 << 16; /*0x552776*/
          IDA_LOWORD(v20) = v18; /*0x55277f*/
          v21 = (v19 - v4) >> 2; /*0x552782*/
          memset32((void *)v4, v20, v21); /*0x552785*/
          memset((void *)(v4 + 4 * v21), v18, ((unsigned char)v19 - (unsigned char)v4) & 3); /*0x55278c*/
          v4 = v19; /*0x552790*/
        }
        v3 = a2; /*0x552653*/
      }
      else if ( v5 == 0xFF ) /*0x552799*/
      {
        v22 = *a1 + (a1[1] << 8); /*0x5527a7*/
        v23 = a1[3]; /*0x5527b0*/
        v24 = a1[2]; /*0x5527b4*/
        a1 += 4; /*0x5527b7*/
        v25 = (v23 << 8) + v3; /*0x5527bd*/
        v26 = v22; /*0x5527bf*/
        v27 = (unsigned char *)(v25 + v24); /*0x5527c1*/
        v28 = v22 - 1; /*0x5527c3*/
        if ( v26 ) /*0x5527c6*/
        {
          v29 = v28 + 1; /*0x5527cc*/
          do /*0x5527d6*/
          {
            *(unsigned char *)v4++ = *v27++; /*0x5527d1*/
            --v29; /*0x5527d5*/
          }
          while ( v29 ); /*0x5527d6*/
        }
      }
      else
      {
        v30 = *a1; /*0x5527eb*/
        v31 = (a1[1] << 8) + v3; /*0x5527f3*/
        a1 += 2; /*0x5527f5*/
        v32 = (unsigned char *)(v31 + v30); /*0x5527f8*/
        v33 = (v5 & 0x3F) + 3; /*0x5527fa*/
        v34 = (v5 & 0x3F) + 2; /*0x5527fc*/
        if ( v33 ) /*0x5527ff*/
        {
          v35 = v34 + 1; /*0x552805*/
          do /*0x55280f*/
          {
            *(unsigned char *)v4++ = *v32++; /*0x55280a*/
            --v35; /*0x55280e*/
          }
          while ( v35 ); /*0x55280f*/
        }
      }
    }
    if ( v5 == 0x80 ) /*0x55269b*/
      break; /*0x55269b*/
    v8 = v5 & 0x3F; /*0x5526a6*/
    if ( v8 ) /*0x5526ab*/
    {
      v9 = v8; /*0x5526ad*/
      do /*0x5526b5*/
      {
        *(unsigned char *)v4++ = *a1++; /*0x5526b0*/
        --v9; /*0x5526b4*/
      }
      while ( v9 ); /*0x5526b5*/
    }
  }
  return v4 - v3; /*0x552818*/
}
}
// 0x554400
namespace gamemd {
ObjectClass * * E4Recv_554400::sub_554400(int a2, int a3)
{

  int v3; // eax

  if ( a2 != 4526 ) /*0x55440a*/
    return 0; /*0x554428*/
  v3 = (&this->customSound_controller)[4]; /*0x55440c*/
  if ( v3 ) /*0x554417*/
    (*((void (**)(ObjectClass *, int, unsigned int, int))g_DSurface_Hidden->vtable1 + 1))( /*0x554420*/
      g_DSurface_Hidden,
      v3,
      0,
      1);
  return (gamemd::ObjectClass **)(1); /*0x554425*/

}
}
// 0x554D50
namespace gamemd {
void UpdateDeferredLightSurfaces(int a1, char a2)
{
  int v4; // eax
  double v5; // st7
  void *v6; // eax
  double v7; // st7
  double v8; // st7
  int i; // edi
  void *v10; // esi
  void *v11; // eax
  double v12; // st7
  double v13; // st7
  double v14; // st7
  int64_t v15; // rax
  int v16; // eax
  int v17; // [esp-18h] [ebp-4Ch]
  int v18; // [esp-14h] [ebp-48h]
  int16_t v19; // [esp-10h] [ebp-44h]
  int16_t v20; // [esp-Ch] [ebp-40h]
  int16_t v21; // [esp-8h] [ebp-3Ch]
  int16_t v22; // [esp-4h] [ebp-38h]
  int v24; // [esp+10h] [ebp-24h] BYREF
  int v25; // [esp+14h] [ebp-20h] BYREF
  int v26; // [esp+18h] [ebp-1Ch] BYREF
  int v27; // [esp+1Ch] [ebp-18h] BYREF
  double v28; // [esp+20h] [ebp-14h] BYREF
  int v29; // [esp+28h] [ebp-Ch] BYREF
  double HighPrecisionTimer; // [esp+2Ch] [ebp-8h]

  HighPrecisionTimer = ((Timer*)&dbl_884D88)->GetHighPrecision(); /*0x554d6e*/
  ++dword_ABCA74; /*0x554d73*/
  if ( dword_ABCA50 && !byte_ABCA84 ) /*0x554d8e*/
  {
    v4 = dword_ABCA7C; /*0x554d94*/
    if ( dword_ABCA7C > 0 /*0x554dac*/
      || (dword_ABCA80 = dword_ABCA50, v4 = dword_ABCA50 - 1, dword_ABCA7C = dword_ABCA50 - 1, dword_ABCA50 - 1 >= 0) )
    {
      do /*0x554ed0*/
      {
        if ( !a2 && (v4 & 0xF) == 0xF ) /*0x554dbe*/
        {
          v5 = ((Timer*)&dbl_884D88)->GetHighPrecision(); /*0x554dc5*/
          if ( (double)a1 <= v5 - HighPrecisionTimer ) /*0x554dd9*/
            break; /*0x554dd9*/
          v4 = dword_ABCA7C; /*0x554ddf*/
        }
        if ( **((unsigned int **)dword_ABCA44 + v4) ) /*0x554ded*/
        {
          --dword_ABCA80; /*0x554df2*/
        }
        else
        {
          v6 = ((CellCoord *)(&dword_87F7E8))->To_CellObj((int16_t *)(*((unsigned int *)dword_ABCA44 + v4) + 16)); /*0x554e27*/
          Tactical::CreateTacticalLightSurface( (int *)((int)v6), (int *)(&v24), (gamemd::IUnknown *)(&v25), (int *)(&v26), (int *)(&v27), (IUnknown *)((int)&v28),  (void *)((int)&v29)); /*0x554e2e*/
          **((unsigned int **)dword_ABCA44 + dword_ABCA7C) = v24; /*0x554e46*/
          *(unsigned int *)(*((unsigned int *)dword_ABCA44 + dword_ABCA7C) + 4) = v25; /*0x554e5a*/
          *(unsigned short *)(*((unsigned int *)dword_ABCA44 + dword_ABCA7C) + 8) = v26; /*0x554e70*/
          *(unsigned short *)(*((unsigned int *)dword_ABCA44 + dword_ABCA7C) + 10) = v27; /*0x554e88*/
          *(unsigned short *)(*((unsigned int *)dword_ABCA44 + dword_ABCA7C) + 12) = IDA_LOWORD(v28); /*0x554e9f*/
          *(unsigned short *)(*((unsigned int *)dword_ABCA44 + dword_ABCA7C) + 14) = v29; /*0x554eb6*/
          --dword_ABCA80; /*0x554ec0*/
          v4 = dword_ABCA7C; /*0x554ec5*/
        }
        dword_ABCA7C = --v4; /*0x554ecb*/
      }
      while ( v4 >= 0 ); /*0x554ed0*/
    }
    if ( dword_ABCA80 <= 0 ) /*0x554edd*/
      byte_ABCA84 = 1; /*0x554edf*/
  }
  v28 = (double)a1; /*0x554eef*/
  v7 = ((Timer*)&dbl_884D88)->GetHighPrecision(); /*0x554ef3*/
  v8 = v28 - (v7 - HighPrecisionTimer); /*0x554f03*/
  if ( byte_ABCA84 ) /*0x554f07*/
  {
    if ( a2 || (v29 = a1 - 1, v8 >= (double)(a1 - 1)) ) /*0x554f23*/
    {
      for ( i = 0; i < dword_ABCA50; ++i ) /*0x554f36*/
      {
        v10 = (void *)*((unsigned int *)dword_ABCA44 + i); /*0x554f42*/
        v22 = *((unsigned short *)v10 + 7); /*0x554f53*/
        v21 = *((unsigned short *)v10 + 6); /*0x554f56*/
        v20 = *((unsigned short *)v10 + 5); /*0x554f5e*/
        v19 = *((unsigned short *)v10 + 4); /*0x554f61*/
        v18 = *((unsigned int *)v10 + 1); /*0x554f62*/
        v17 = *(unsigned int *)v10; /*0x554f66*/
        v11 = ((CellCoord *)(&dword_87F7E8))->To_CellObj((int16_t *)v10 + 8); /*0x554f6d*/
        TacticalClass::SetView((int)v11, v17, v18, v19, v20, v21, v22); /*0x554f74*/
        RA2_OPDEL(v10); /*0x554f7a*/
      }
      dword_ABCA50 = 0; /*0x554f91*/
      if ( dword_ABCA44 && byte_ABCA4D ) /*0x554fa7*/
      {
        RA2_OPDEL(dword_ABCA44); /*0x554faa*/
        dword_ABCA44 = 0; /*0x554fb2*/
      }
      byte_ABCA4D = 0; /*0x554fc3*/
      dword_ABCA48 = 0; /*0x554fca*/
      byte_ABCA84 = 0; /*0x554fd4*/
      ((MapClass *)((int)(&dword_87F7E8)))->MarkForRedraw((int)((MapClass *)((int)(&dword_87F7E8))), (void *)(1)); /*0x554fdb*/
    }
  }
  v12 = ((Timer*)&dbl_884D88)->GetHighPrecision(); /*0x554fe9*/
  v13 = v28 - (v12 - HighPrecisionTimer); /*0x554ff5*/
  if ( v13 > 0.0 && dword_ABCA74 > (unsigned int)(dword_ABCA78 + dword_829AE8) ) /*0x55501a*/
  {
    v14 = v13 * 0.5; /*0x55501c*/
    if ( v14 >= 1.0 ) /*0x55502d*/
      v14 = 1.0; /*0x555031*/
    v15 = Math::RoundToInt(v14); /*0x555037*/
    IDA_BYTE4(v15) = 0; /*0x55503e*/
    v16 = -((uint8_t)ReturnFalse2(v15, IDA_HIDWORD(v15)) != 0); /*0x55504d*/
    dword_ABCA78 = dword_ABCA74; /*0x55504f*/
    IDA_LOBYTE(v16) = v16 & 0xCF; /*0x555055*/
    dword_829AE8 = v16 + 50; /*0x55505a*/
  }
}
}
// 0x557380
namespace gamemd {
int E4Recv_557380::sub_557380(int a2)
{

  int v3; // eax

  ((ControlClass *)((unsigned int *)this))->CtorFromData(a2); /*0x55738b*/
  *((unsigned int *)this + 11) = *(unsigned int *)(a2 + 44); /*0x557396*/
  *((unsigned int *)this + 12) = *(unsigned int *)(a2 + 48); /*0x55739f*/
  *((unsigned int *)this + 14) = 0; /*0x5573a7*/
  *((unsigned int *)this + 15) = 0; /*0x5573aa*/
  *((unsigned char *)this + 64) = 1; /*0x5573ad*/
  *((unsigned char *)this + 65) = (unsigned int)(0); /*0x5573b1*/
  *((unsigned int *)this + 13) = (unsigned int)(&vt_VectorClass); /*0x5573b4*/
  sub_4B5830((unsigned int *)((char *)this + 52), (unsigned int *)(a2 + 52)); /*0x5573ba*/
  *((unsigned int *)this + 17) = *(unsigned int *)(a2 + 68); /*0x5573c2*/
  *((unsigned int *)this + 18) = *(unsigned int *)(a2 + 72); /*0x5573c8*/
  *((unsigned int *)this + 13) = (unsigned int)(&vt_DynamicVectorClass); /*0x5573cb*/
  *((unsigned int *)this + 19) = *(unsigned int *)(a2 + 76); /*0x5573d7*/
  *((unsigned int *)this + 20) = *(unsigned int *)(a2 + 80); /*0x5573dd*/
  *((unsigned char *)this + 84) = *(unsigned char *)(a2 + 84); /*0x5573e9*/
  ((ControlClass *)((unsigned int *)((char *)this + 88)))->CtorFromData(a2 + 88); /*0x5573ec*/
  *((unsigned char *)this + 132) = *(unsigned char *)(a2 + 132); /*0x5573fa*/
  *((unsigned char *)this + 133) = *(unsigned char *)(a2 + 133); /*0x557400*/
  *((unsigned int *)this + 34) = *(unsigned int *)(a2 + 136); /*0x557406*/
  *((unsigned int *)this + 22) = (unsigned int)(&vt_ToggleClass); /*0x557409*/
  *((unsigned char *)this + 140) = *(unsigned char *)(a2 + 140); /*0x557413*/
  *((unsigned int *)this + 36) = *(unsigned int *)(a2 + 144); /*0x557419*/
  *((unsigned int *)this + 37) = *(unsigned int *)(a2 + 148); /*0x55741f*/
  *((unsigned char *)this + 152) = *(unsigned char *)(a2 + 152); /*0x557425*/
  *((unsigned int *)this + 39) = *(unsigned int *)(a2 + 156); /*0x55742b*/
  *((unsigned int *)this + 40) = *(unsigned int *)(a2 + 160); /*0x557431*/
  *((unsigned char *)this + 164) = *(unsigned char *)(a2 + 164); /*0x557437*/
  *((unsigned int *)this + 42) = *(unsigned int *)(a2 + 168); /*0x55743d*/
  *((unsigned char *)this + 172) = *(unsigned char *)(a2 + 172); /*0x557443*/
  *((unsigned char *)this + 173) = *(unsigned char *)(a2 + 173); /*0x557449*/
  *((unsigned int *)this + 44) = *(unsigned int *)(a2 + 176); /*0x55744f*/
  *((unsigned char *)this + 180) = *(unsigned char *)(a2 + 180); /*0x55745b*/
  *((unsigned int *)this + 22) = (unsigned int)(&vt_ShapeButtonClass); /*0x557460*/
  ((ControlClass *)((unsigned int *)((char *)this + 184)))->CtorFromData(a2 + 184); /*0x557466*/
  *((unsigned char *)this + 228) = *(unsigned char *)(a2 + 228); /*0x55746e*/
  *((unsigned char *)this + 229) = *(unsigned char *)(a2 + 229); /*0x557474*/
  *((unsigned int *)this + 58) = *(unsigned int *)(a2 + 232); /*0x55747a*/
  *((unsigned int *)this + 46) = (unsigned int)(&vt_ToggleClass); /*0x55747d*/
  *((unsigned char *)this + 236) = *(unsigned char *)(a2 + 236); /*0x557486*/
  *((unsigned int *)this + 60) = *(unsigned int *)(a2 + 240); /*0x55748c*/
  *((unsigned int *)this + 61) = *(unsigned int *)(a2 + 244); /*0x557492*/
  *((unsigned char *)this + 248) = *(unsigned char *)(a2 + 248); /*0x557498*/
  *((unsigned int *)this + 63) = *(unsigned int *)(a2 + 252); /*0x55749e*/
  *((unsigned int *)this + 64) = *(unsigned int *)(a2 + 256); /*0x5574a4*/
  *((unsigned char *)this + 260) = *(unsigned char *)(a2 + 260); /*0x5574aa*/
  *((unsigned int *)this + 66) = *(unsigned int *)(a2 + 264); /*0x5574b0*/
  *((unsigned char *)this + 268) = *(unsigned char *)(a2 + 268); /*0x5574b6*/
  *((unsigned char *)this + 269) = *(unsigned char *)(a2 + 269); /*0x5574bc*/
  *((unsigned int *)this + 68) = *(unsigned int *)(a2 + 272); /*0x5574c6*/
  *((unsigned char *)this + 276) = *(unsigned char *)(a2 + 276); /*0x5574d2*/
  *((unsigned int *)this + 46) = (unsigned int)(&vt_ShapeButtonClass); /*0x5574de*/
  sub_5581A0((char *)this + 280, a2 + 280); /*0x5574e4*/
  *((unsigned int *)this + 85) = *(unsigned int *)(a2 + 340); /*0x5574fa*/
  *((unsigned int *)this + 86) = *(unsigned int *)(a2 + 344); /*0x557500*/
  *((unsigned char *)this + 348) = *(unsigned char *)(a2 + 348); /*0x557506*/
  *((unsigned int *)this + 88) = *(unsigned int *)(a2 + 352); /*0x55750c*/
  *((unsigned int *)this + 89) = *(unsigned int *)(a2 + 356); /*0x557512*/
  *((unsigned int *)this + 90) = *(unsigned int *)(a2 + 360); /*0x55751c*/
  *((unsigned int *)this + 70) = (unsigned int)(&vt_SliderClass); /*0x55751f*/
  *((unsigned int *)this + 91) = *(unsigned int *)(a2 + 364); /*0x55752c*/
  v3 = *((unsigned int *)this + 22); /*0x557538*/
  *((unsigned int *)this + 92) = *(unsigned int *)(a2 + 368); /*0x55753c*/
  *(unsigned int *)this = (unsigned int)(&vt_ListClass); /*0x557542*/
  (*(void (**)(int, int))(v3 + 132))((int)((char *)this + 88), (int)(this)); /*0x557548*/
  (*(void (**)(int, int))(*((unsigned int *)this + 46) + 132))((int)((char *)this + 184), (int)(this)); /*0x557553*/
  (*(void (**)(int, int))(*((unsigned int *)this + 70) + 132))((int)((char *)this + 280), (int)(this)); /*0x55755f*/
  return (int)(this); /*0x557566*/

}
}
// 0x557B10
namespace gamemd {
ControlClass * * ListClass::CheckListClass__vt_19_(char a2, int a3, unsigned int * a4)
{

  char result; // al
  int v6; // edi
  int v7; // eax

  result = a2; /*0x557b10*/
  if ( (a2 & 4) != 0 ) /*0x557b1e*/
  {
    if ( a4 == (unsigned int *)((char *)this + 88) ) /*0x557b25*/
      (*(void (**)(ListClass *, int))(*(unsigned int *)this->__pad_0 + 196))(this, 1); /*0x557b2b*/
    result = (unsigned char)this - 72; /*0x557b31*/
    if ( a4 == (unsigned int *)((char *)this + 184) ) /*0x557b39*/
      result = (*(int (**)(ListClass *, unsigned int))(*(unsigned int *)this->__pad_0 + 196))(this, 0); /*0x557b41*/
  }
  if ( a4 == (unsigned int *)((char *)this + 280) ) /*0x557b4f*/
  {
    v6 = *(unsigned int *)this->__pad_0; /*0x557b53*/
    v7 = (*(int (**)(char *))(*((unsigned int *)this + 70) + 144))((char *)this + 280); /*0x557b55*/
    return (gamemd::ControlClass **)((*(char (**)(ListClass *, int))(v6 + 192))(this, v7)); /*0x557b5e*/
  }
  return (gamemd::ControlClass **)(result); /*0x557b64*/

}
// 0x558810
namespace gamemd {
int E4Recv_558810::ShowSaveLoadDialog(CampaignScore * aP1, void *a2_1)
{

  char *p_referenceCount; // eax

  p_referenceCount = (char *)(aP1); /*0x558810*/
  *((unsigned int *)this + 1) = 2; /*0x558814*/
  if ( !aP1 ) /*0x55881d*/
    p_referenceCount = (char *)&((AbstractClass *)dword_A8B230)[137].referenceCount; /*0x558824*/
  *((unsigned int *)this + 3) = (unsigned int)(p_referenceCount); /*0x558829*/
  return SaveLoadDialog::DlgProc( ((SaveLoadDialog *)this)); /*0x558831*/

}
}
// 0x55B720
namespace gamemd {
int E4Recv_55B720::sub_55B720()
{

  int v1; // ebx
  void *v3; // edi
  int nextArrayIndex; // edx
  int *p_nextArrayIndex; // esi
  char *NeedsSaveOrLink; // eax
  int v7; // eax
  unsigned char *vtable0; // edx
  char *vtable2; // eax
  AbstractClass *v10; // esi
  void *v11; // eax
  int result; // eax
  int i; // edi
  int v14; // esi
  void *v15; // [esp+18h] [ebp-8h]

  v1 = *(unsigned int *)&DSurface_ViewBounds.__pad_FC[324]; /*0x55b724*/
  if ( !*(unsigned char *)(*(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 6128) /*0x55b74a*/
    || *(double *)(*(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 5696) == 0.0 )
  {
    goto LABEL_8; /*0x55b74a*/
  }
  v3 = *(void **)(unsigned int *)((char *)&stru_A8EB00 + 416); /*0x55b751*/
  nextArrayIndex = ((AbstractClass *)dword_A8B230)[128].nextArrayIndex; /*0x55b757*/
  p_nextArrayIndex = &((AbstractClass *)dword_A8B230)[128].nextArrayIndex; /*0x55b75d*/
  NeedsSaveOrLink = (char *)((AbstractClass *)dword_A8B230)[128].NeedsSaveOrLink; /*0x55b766*/
  if ( nextArrayIndex != -1 ) /*0x55b769*/
  {
    if ( *(unsigned int *)((char *)&stru_A8EB00 + 416) - nextArrayIndex >= (int)NeedsSaveOrLink ) /*0x55b771*/
    {
LABEL_7:
      LOWORD(v7) = Math::RoundToInt(*(double *)(*(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 5696) * 900.0); /*0x55b779*/
      *p_nextArrayIndex = (int)v3; /*0x55b78e*/
      p_nextArrayIndex[1] = (int)v15; /*0x55b790*/
      p_nextArrayIndex[2] = v7; /*0x55b798*/
      ((MapClass *)((MapClass *)&stru_87F5F0.__pad_58[416]))->ProcessVisibilityFlags(); /*0x55b79b*/
      v1 = *(unsigned int *)&DSurface_ViewBounds.__pad_FC[324]; /*0x55b7a0*/
LABEL_8:
      v3 = *(void **)(unsigned int *)((char *)&stru_A8EB00 + 416); /*0x55b7a6*/
      goto LABEL_9; /*0x55b7a6*/
    }
    NeedsSaveOrLink -= *(unsigned int *)((char *)&stru_A8EB00 + 416) - nextArrayIndex; /*0x55b773*/
  }
  if ( !NeedsSaveOrLink ) /*0x55b777*/
    goto LABEL_7; /*0x55b777*/
LABEL_9:
  if ( ((int)dword_A8B230->vtable1 & 0x1000) != 0 && *(double *)(v1 + 5704) != 0.0 ) /*0x55b7ca*/
  {
    vtable0 = ((AbstractClass *)dword_A8B230)[129].vtable0; /*0x55b7cc*/
    vtable2 = (char *)((AbstractClass *)dword_A8B230)[129].vtable2; /*0x55b7d2*/
    v10 = (gamemd::AbstractClass *)(dword_A8B230 + 129); /*0x55b7d8*/
    if ( vtable0 != (unsigned char *)-1 ) /*0x55b7e1*/
    {
      if ( (unsigned char *)v3 - vtable0 >= (int)vtable2 ) /*0x55b7e9*/
      {
LABEL_15:
        LOWORD(v11) = Math::RoundToInt(*(double *)(v1 + 5704) * 900.0); /*0x55b7f1*/
        v10->vtable1 = v3; /*0x55b806*/
        v10->vtable1 = v15; /*0x55b808*/
        v10->vtable2 = v11; /*0x55b810*/
        ((MapClass*)(MapClass *)&stru_87F5F0.__pad_58[416])->ProcessFogTransition(); /*0x55b813*/
        goto LABEL_16; /*0x55b813*/
      }
      vtable2 -= (unsigned char *)v3 - vtable0; /*0x55b7eb*/
    }
    if ( vtable2 ) /*0x55b7ef*/
      goto LABEL_16; /*0x55b7ef*/
    goto LABEL_15; /*0x55b7ef*/
  }
LABEL_16:
  result = ((unsigned int *)this)[0]; /*0x55b818*/
  for ( i = 0; i < result; ++i ) /*0x55b81f*/
  {
    v14 = *((unsigned int *)((unsigned int *)this)[0] + i); /*0x55b824*/
    if ( v14 && (*(unsigned char *)(v14 + 20) & 4) != 0 && *(unsigned int *)(v14 + 1652) && !*(unsigned char *)(v14 + 973) ) /*0x55b844*/
    {
      if ( !*(unsigned int *)(v14 + 1652) ) /*0x55b84e*/
        WinAPI::Wrapper(-2147467261); /*0x55b85d*/
      (*(void (**)(unsigned int))(**(unsigned int **)(v14 + 1652) + 64))(*(unsigned int *)(v14 + 1652)); /*0x55b86b*/
    }
    result = ((unsigned int *)this)[0]; /*0x55b86e*/
  }
  return result; /*0x55b876*/

}
}
// 0x55BC00
namespace gamemd {
void CompressLCWBuffer(Pipe * aP0, int edx0, unsigned char * a2, unsigned int * a3, int a5)
{
  uint8_t *v5; // edi
  uint8_t *v6; // ebp
  unsigned int v7; // eax
  int v8; // edx
  unsigned int v9; // ecx
  unsigned int v10; // eax
  unsigned int v11; // ecx
  uint8_t *i; // esi
  unsigned int v13; // eax
  uint8_t *v14; // ebx
  unsigned int v15; // eax
  char *v16; // ebx
  uint8_t v17; // dl
  uint8_t *v18; // ebp
  uint8_t *v19; // edi
  int v20; // ecx
  int v21; // edx
  unsigned int v22; // eax
  uint8_t *v23; // ebp
  unsigned int v24; // eax
  char v25; // dl
  uint8_t v26; // al
  char v27; // dl
  char *v28; // ebx
  uint8_t v29; // al
  char v30; // dl
  char *v31; // ebx
  uint8_t v32; // al
  char v33; // dl
  char *v34; // ebx
  uint8_t v35; // al
  char v36; // dl
  char *v37; // ebx
  uint8_t v38; // al
  char v39; // dl
  char *v40; // ebx
  uint8_t v41; // al
  char v42; // dl
  unsigned char *v43; // ebx
  unsigned int v44; // ebx
  int v45; // eax
  int v46; // ecx
  unsigned char *v47; // ebp
  unsigned int v48; // ebx
  int v49; // eax
  unsigned char *v50; // ebp
  unsigned int v51; // eax
  char v52; // al
  int v53; // ecx
  unsigned char *v54; // ebp
  int v55; // ecx
  unsigned int v56; // eax
  uint8_t v57; // bl
  unsigned int v58; // edx
  unsigned int v59; // ecx
  uint8_t *v60; // edi
  int v62; // [esp+10h] [ebp-1Ch]
  int v63; // [esp+10h] [ebp-1Ch]
  uint8_t *v64; // [esp+14h] [ebp-18h]
  uint8_t *v65; // [esp+18h] [ebp-14h]
  unsigned int v66; // [esp+1Ch] [ebp-10h]
  int v68; // [esp+28h] [ebp-4h]
  unsigned int v69; // [esp+38h] [ebp+Ch]

  v5 = (uint8_t *)(aP0); /*0x55bc07*/
  v6 = (uint8_t *)(a2); /*0x55bc0d*/
  v65 = (uint8_t *)(&aP0[edx0]); /*0x55bc17*/
  v7 = *aP0 ^ (32 * (aP0[1] ^ (32 * aP0[2]))); /*0x55bc33*/
  v8 = a5; /*0x55bc35*/
  v64 = (uint8_t *)(aP0); /*0x55bc3b*/
  *(unsigned int *)(a5 + 4 * (((40799 * v7) >> 5) & 0x3FFF)) = (unsigned int)aP0; /*0x55bc58*/
  v9 = (v7 >> 5) ^ (*v5 >> 5) ^ (v5[3] << 10); /*0x55bc6d*/
  *(unsigned int *)(a5 + 4 * (((40799 * v9) >> 5) & 0x3FFF)) = (unsigned int)(v5 + 1); /*0x55bc89*/
  v10 = (v9 >> 5) ^ (v5[1] >> 5) ^ (v5[4] << 10); /*0x55bc9e*/
  *(unsigned int *)(a5 + 4 * (((40799 * v10) >> 5) & 0x3FFF)) = (unsigned int)(v5 + 2); /*0x55bcbb*/
  v11 = (v10 >> 5) ^ (v5[2] >> 5) ^ (v5[5] << 10); /*0x55bcce*/
  *(unsigned int *)(a5 + 4 * (((40799 * v11) >> 5) & 0x3FFF)) = (unsigned int)(v5 + 3); /*0x55bce7*/
  for ( i = v5 + 4; ; v11 = *i ^ (32 * (i[1] ^ (32 * i[2]))) ) /*0x55bcea*/
  {
    while ( 1 ) /*0x55bcfd*/
    {
      v13 = ((40799 * v11) >> 5) & 0x3FFF; /*0x55bcfd*/
      v14 = *(uint8_t **)(v8 + 4 * v13); /*0x55bd02*/
      *(unsigned int *)(v8 + 4 * v13) = (unsigned int)i; /*0x55bd05*/
      if ( v14 >= aP0 ) /*0x55bd0c*/
      {
        v62 = i - v14; /*0x55bd18*/
        if ( i - v14 > 0 && i - v14 <= 49151 && *v14 == *i && v14[1] == i[1] && v14[2] == i[2] ) /*0x55bd49*/
          break; /*0x55bd49*/
      }
  LABEL_56:
      if ( ++i >= v65 - 13 ) /*0x55c005*/
        goto LABEL_59; /*0x55c005*/
      v11 = (*(i - 1) >> 5) ^ (i[2] << 10) ^ (v11 >> 5); /*0x55c01c*/
    }
    v15 = i - v5; /*0x55bd55*/
    v16 = (char *)(v14 + 3); /*0x55bd57*/
    if ( v62 > 2048 ) /*0x55bd60*/
    {
      if ( v15 == 3 ) /*0x55bd65*/
      {
        *(v6 - 2) |= 3u; /*0x55bd6c*/
        *v6 = *v5; /*0x55bd71*/
        v17 = v5[1]; /*0x55bd74*/
        v18 = v6 + 1; /*0x55bd77*/
        v19 = v5 + 1; /*0x55bd78*/
        *v18++ = v17; /*0x55bd79*/
        *v18 = v19[1]; /*0x55bd81*/
        v6 = v18 + 1; /*0x55bd84*/
        v5 = v19 + 2; /*0x55bd85*/
        v64 = v5; /*0x55bd86*/
  LABEL_11:
        v20 = v62; /*0x55bd8a*/
        goto LABEL_25; /*0x55bd8e*/
      }
      if ( *v16 != i[3] ) /*0x55bd98*/
      {
        v8 = a5; /*0x55bff7*/
        goto LABEL_56; /*0x55bff7*/
      }
    }
    if ( !v15 ) /*0x55bda0*/
      goto LABEL_11; /*0x55bda0*/
    v21 = i - v5; /*0x55bda2*/
    v68 = i - v5; /*0x55bda7*/
    if ( v15 > 3 ) /*0x55bdab*/
    {
      if ( v15 > 0x12 ) /*0x55bdbe*/
      {
        v22 = v15 - 18; /*0x55bdcc*/
        *v6 = 0; /*0x55bdcf*/
        v23 = v6 + 1; /*0x55bdd3*/
        v66 = v22; /*0x55bdd9*/
        if ( v22 <= 0xFF ) /*0x55bddd*/
        {
          v20 = v62; /*0x55bed9*/
        }
        else
        {
          memset( (void *)(v23), 0, 4 * ((v22 - 1) / 0x3FC) + (((v22 - 1) / 0xFF) & 3)); /*0x55bdff*/
          v24 = (v22 - 1) / 0xFF; /*0x55be08*/
          v23 += v24; /*0x55be0a*/
          do /*0x55be1b*/
          {
            v25 = v66 + 1; /*0x55be10*/
            --v24; /*0x55be16*/
            v66 -= 255; /*0x55be17*/
          }
          while ( v24 ); /*0x55be1b*/
          v20 = v62; /*0x55be1d*/
          v5 = v64; /*0x55be21*/
          IDA_LOBYTE(v22) = v25; /*0x55be25*/
          v21 = v68; /*0x55be27*/
        }
        *v23 = v22; /*0x55be2b*/
        v6 = v23 + 1; /*0x55be2e*/
      }
      else
      {
        v20 = v62; /*0x55bdc0*/
        *v6++ = v15 - 3; /*0x55bdc6*/
      }
    }
    else
    {
      *(v6 - 2) |= v15; /*0x55bdb2*/
      v20 = v62; /*0x55bdb5*/
    }
    do /*0x55be37*/
    {
      *v6++ = *v5++; /*0x55be31*/
      --v21; /*0x55be36*/
    }
    while ( v21 ); /*0x55be37*/
    v64 = v5; /*0x55be39*/
  LABEL_25:
    v26 = i[3]; /*0x55be3d*/
    v27 = *v16; /*0x55be40*/
    i += 4; /*0x55be45*/
    v28 = v16 + 1; /*0x55be46*/
    if ( v27 == v26 ) /*0x55be49*/
    {
      v29 = *i; /*0x55be4f*/
      v30 = *v28; /*0x55be51*/
      ++i; /*0x55be53*/
      v31 = v28 + 1; /*0x55be54*/
      if ( v30 == v29 ) /*0x55be57*/
      {
        v32 = *i; /*0x55be5d*/
        v33 = *v31; /*0x55be5f*/
        ++i; /*0x55be61*/
        v34 = v31 + 1; /*0x55be62*/
        if ( v33 == v32 ) /*0x55be65*/
        {
          v35 = *i; /*0x55be6b*/
          v36 = *v34; /*0x55be6d*/
          ++i; /*0x55be6f*/
          v37 = v34 + 1; /*0x55be70*/
          if ( v36 == v35 ) /*0x55be73*/
          {
            v38 = *i; /*0x55be79*/
            v39 = *v37; /*0x55be7b*/
            ++i; /*0x55be7d*/
            v40 = v37 + 1; /*0x55be7e*/
            if ( v39 == v38 ) /*0x55be81*/
            {
              v41 = *i; /*0x55be87*/
              v42 = *v40; /*0x55be89*/
              ++i; /*0x55be8b*/
              v43 = (unsigned char *)(v40 + 1); /*0x55be8c*/
              if ( v42 == v41 ) /*0x55be8f*/
              {
                for ( ; i < v65; ++i ) /*0x55be9b*/
                {
                  if ( *v43 != *i ) /*0x55bea3*/
                    break; /*0x55bea3*/
                  ++v43; /*0x55bea5*/
                }
                v44 = i - v64; /*0x55beb5*/
                if ( v62 > 0x4000 ) /*0x55bebc*/
                {
                  v49 = v62 - 0x4000; /*0x55beeb*/
                  v63 = v62 - 0x4000; /*0x55bef3*/
                  if ( v44 <= 9 ) /*0x55bef7*/
                  {
                    v46 = v63; /*0x55befc*/
                    *v6 = (v44 - 2) | (v49 >> 11) & 8 | 0x10; /*0x55bf09*/
                    v47 = v6 + 1; /*0x55bf0c*/
                    goto LABEL_52; /*0x55bf0d*/
                  }
                  v48 = v44 - 9; /*0x55bf17*/
                  *v6 = (v49 >> 11) & 8 | 0x10; /*0x55bf1c*/
                }
                else
                {
                  v45 = v62 - 1; /*0x55bebe*/
                  v63 = v62 - 1; /*0x55bec2*/
                  if ( v44 <= 0x21 ) /*0x55bec6*/
                  {
                    v46 = v45; /*0x55becb*/
                    *v6 = (v44 - 2) | 0x20; /*0x55bed0*/
                    v47 = v6 + 1; /*0x55bed3*/
                    goto LABEL_52; /*0x55bed4*/
                  }
                  v48 = v44 - 33; /*0x55bee2*/
                  *v6 = 32; /*0x55bee5*/
                }
                v50 = v6 + 1; /*0x55bf1f*/
                if ( v48 > 0xFF ) /*0x55bf26*/
                {
                  memset( (void *)(v50), 0, 4 * ((v48 - 1) / 0x3FC) + (((v48 - 1) / 0xFF) & 3)); /*0x55bf44*/
                  v51 = (v48 - 1) / 0xFF; /*0x55bf4d*/
                  v50 += v51; /*0x55bf4f*/
                  do /*0x55bf58*/
                  {
                    IDA_LOBYTE(v48) = v48 + 1; /*0x55bf51*/
                    --v51; /*0x55bf57*/
                  }
                  while ( v51 ); /*0x55bf58*/
                }
                v46 = v63; /*0x55bf5a*/
                *v50 = v48; /*0x55bf5e*/
                v47 = v50 + 1; /*0x55bf61*/
                goto LABEL_52; /*0x55bf62*/
              }
            }
          }
        }
      }
    }
    v52 = (unsigned char)--i - (unsigned char)v5; /*0x55bf67*/
    if ( v20 <= 2048 ) /*0x55bf6f*/
    {
      v53 = v20 - 1; /*0x55bf71*/
      *v6 = (32 * (v52 + 7)) | (4 * (v53 & 7)); /*0x55bf81*/
      v54 = v6 + 1; /*0x55bf84*/
      v55 = v53 >> 3; /*0x55bf85*/
      goto LABEL_53; /*0x55bf88*/
    }
    if ( v20 > 0x4000 ) /*0x55bf90*/
    {
      v46 = v20 - 0x4000; /*0x55bf9c*/
      *v6 = (v52 - 2) | (v46 >> 11) & 8 | 0x10; /*0x55bfb1*/
    }
    else
    {
      v46 = v20 - 1; /*0x55bf94*/
      *v6 = (v52 - 2) | 0x20; /*0x55bf97*/
    }
    v47 = v6 + 1; /*0x55bfb4*/
  LABEL_52:
    *v47 = 4 * v46; /*0x55bfba*/
    v54 = v47 + 1; /*0x55bfbd*/
    v55 = v46 >> 6; /*0x55bfbe*/
  LABEL_53:
    *v54 = v55; /*0x55bfc1*/
    v6 = v54 + 1; /*0x55bfc8*/
    v64 = i; /*0x55bfc9*/
    if ( i >= v65 - 13 ) /*0x55bfd2*/
      break; /*0x55bfd2*/
    v8 = a5; /*0x55bfe3*/
    v5 = i; /*0x55bfe9*/
  }
  v5 = i; /*0x55c023*/
  LABEL_59:
  v56 = v65 - v5; /*0x55c027*/
  if ( v65 - v5 > 0 ) /*0x55c02f*/
  {
    v69 = v65 - v5; /*0x55c039*/
    if ( v6 == a2 && v56 <= 0xEE ) /*0x55c046*/
    {
      *v6 = v56 + 17; /*0x55c04d*/
      goto LABEL_72; /*0x55c050*/
    }
    if ( v56 > 3 ) /*0x55c055*/
    {
      if ( v56 > 0x12 ) /*0x55c05f*/
      {
        v57 = v56 - 18; /*0x55c06b*/
        *v6++ = 0; /*0x55c06e*/
        if ( v56 - 18 > 0xFF ) /*0x55c079*/
        {
          v58 = (v56 - 19) / 0xFF; /*0x55c085*/
          v59 = (v56 - 19) / 0x3FC; /*0x55c090*/
          memset( (void *)(v6), 0, 4 * v59); /*0x55c093*/
          v60 = &v6[4 * v59]; /*0x55c093*/
          v6 += v58; /*0x55c09a*/
          memset( (void *)(v60), 0, v58 & 3); /*0x55c09c*/
          do /*0x55c0a5*/
          {
            ++v57; /*0x55c09e*/
            --v58; /*0x55c0a4*/
          }
          while ( v58 ); /*0x55c0a5*/
          v5 = v64; /*0x55c0a7*/
          v56 = v69; /*0x55c0ab*/
        }
        *v6 = v57; /*0x55c0af*/
      }
      else
      {
        *v6 = v56 - 3; /*0x55c066*/
      }
  LABEL_72:
      ++v6; /*0x55c0b2*/
    }
    else
    {
      *(v6 - 2) |= v56; /*0x55c057*/
    }
    do /*0x55c0bb*/
    {
      *v6++ = *v5++; /*0x55c0b5*/
      --v56; /*0x55c0ba*/
    }
    while ( v56 ); /*0x55c0bb*/
  }
  *a3 = v6 - a2; /*0x55c0c9*/
  return 0; /*0x55c0c1*/
}
}
// 0x55C0E0
namespace gamemd {
int DecodeBlockLCW(AbstractClass * aP0, int aP1, unsigned char *a2, unsigned int *a3, int a5)
{
  uint8_t *v5; // eax
  unsigned char *v6; // esi
  uint8_t *v7; // ebp
  unsigned int v8; // edx
  uint8_t *v9; // eax
  int v10; // edx
  uint8_t v11; // cl
  uint8_t v12; // cl
  uint8_t *v13; // esi
  uint8_t *v14; // eax
  uint8_t v15; // cl
  uint8_t *v16; // eax
  int v17; // ecx
  unsigned char *v18; // ecx
  unsigned char *v19; // esi
  int v20; // ecx
  unsigned char *v21; // edi
  int v22; // edx
  int v23; // edx
  uint8_t v24; // cl
  unsigned char *v25; // edi
  int v26; // edx
  uint8_t v27; // cl
  unsigned char *v28; // edi
  uint8_t *v29; // eax
  unsigned char *v30; // edi
  unsigned char *v32; // esi
  unsigned char *v33; // edi

  v5 = (uint8_t *)(aP0); /*0x55c0e5*/
  *a3 = 0; /*0x55c0e8*/
  v6 = a2; /*0x55c0ef*/
  v7 = (uint8_t *)(&aP0[aP1]); /*0x55c0f3*/
  if ( *aP0 > 0x11u ) /*0x55c0fc*/
  {
    v8 = *aP0 - 17; /*0x55c104*/
    goto LABEL_9; /*0x55c107*/
  }
  LABEL_3:
  v8 = *v5; /*0x55c109*/
  v9 = v5 + 1; /*0x55c10d*/
  if ( v8 < 0x10 ) /*0x55c111*/
  {
    if ( !v8 ) /*0x55c119*/
    {
      v10 = 15; /*0x55c11d*/
      if ( !*v9 ) /*0x55c11b*/
      {
        do /*0x55c132*/
        {
          v11 = v9[1]; /*0x55c126*/
          v10 += 255; /*0x55c129*/
          ++v9; /*0x55c12f*/
        }
        while ( !v11 ); /*0x55c132*/
      }
      v8 = *v9++ + v10; /*0x55c138*/
    }
    *v6 = *v9; /*0x55c13d*/
    v12 = v9[1]; /*0x55c13f*/
    v13 = v6 + 1; /*0x55c142*/
    v14 = v9 + 1; /*0x55c143*/
    *v13 = v12; /*0x55c144*/
    v15 = v14[1]; /*0x55c146*/
    ++v13; /*0x55c149*/
    v5 = v14 + 1; /*0x55c14a*/
    *v13 = v15; /*0x55c14b*/
    v6 = v13 + 1; /*0x55c14d*/
  LABEL_9:
    v16 = v5 + 1; /*0x55c14e*/
    do /*0x55c156*/
    {
      *v6++ = *v16++; /*0x55c151*/
      --v8; /*0x55c155*/
    }
    while ( v8 ); /*0x55c156*/
    v8 = *v16; /*0x55c15a*/
    v9 = v16 + 1; /*0x55c15c*/
    if ( v8 < 0x10 ) /*0x55c160*/
    {
      v17 = (int)&v6[-(v8 >> 2) + -4 * *v9]; /*0x55c170*/
      v5 = v9 + 1; /*0x55c17e*/
      *v6++ = *(unsigned char *)(v17 - 2049); /*0x55c17f*/
      v18 = (unsigned char *)(v17 - 2049 + 1); /*0x55c182*/
  LABEL_13:
      *v6 = *v18; /*0x55c183*/
      v19 = v6 + 1; /*0x55c18a*/
      *v19 = v18[1]; /*0x55c18b*/
      v6 = v19 + 1; /*0x55c18d*/
      goto LABEL_14; /*0x55c18d*/
    }
  }
  while ( 1 ) /*0x55c1c1*/
  {
    if ( v8 >= 0x40 ) /*0x55c1c4*/
    {
      v21 = &v6[-((v8 >> 2) & 7) - 1 + -8 * *v9]; /*0x55c1db*/
      v5 = v9 + 1; /*0x55c1dc*/
      v22 = (v8 >> 5) - 1; /*0x55c1e0*/
      goto LABEL_33; /*0x55c1e1*/
    }
    if ( v8 < 0x20 ) /*0x55c1e9*/
      break; /*0x55c1e9*/
    v22 = v8 & 0x1F; /*0x55c1eb*/
    if ( !v22 ) /*0x55c1ee*/
    {
      v23 = 31; /*0x55c1f2*/
      if ( !*v9 ) /*0x55c1f0*/
      {
        do /*0x55c207*/
        {
          v24 = v9[1]; /*0x55c1fb*/
          v23 += 255; /*0x55c1fe*/
          ++v9; /*0x55c204*/
        }
        while ( !v24 ); /*0x55c207*/
      }
      v22 = *v9++ + v23; /*0x55c20d*/
    }
    v21 = &v6[-(*v9 >> 2) - 1 + -64 * v9[1]]; /*0x55c225*/
    v5 = v9 + 2; /*0x55c227*/
  LABEL_33:
    *v6 = *v21; /*0x55c28e*/
    v32 = v6 + 1; /*0x55c295*/
    *v32 = v21[1]; /*0x55c297*/
    v6 = v32 + 1; /*0x55c299*/
    v33 = v21 + 2; /*0x55c29a*/
    do /*0x55c2a2*/
    {
      *v6++ = *v33++; /*0x55c29d*/
      --v22; /*0x55c2a1*/
    }
    while ( v22 ); /*0x55c2a2*/
  LABEL_14:
    v20 = *(v5 - 2) & 3; /*0x55c18e*/
    if ( (*(v5 - 2) & 3) == 0 ) /*0x55c194*/
      goto LABEL_3; /*0x55c194*/
    do /*0x55c1a1*/
    {
      *v6++ = *v5++; /*0x55c19c*/
      --v20; /*0x55c1a0*/
    }
    while ( v20 ); /*0x55c1a1*/
    v8 = *v5; /*0x55c1a5*/
    v9 = v5 + 1; /*0x55c1a7*/
    if ( v8 < 0x10 ) /*0x55c1ab*/
    {
      v18 = &v6[-(v8 >> 2) - 1 + -4 * *v9]; /*0x55c1bd*/
      v5 = v9 + 1; /*0x55c1be*/
      goto LABEL_13; /*0x55c1bf*/
    }
  }
  v25 = &v6[-2048 * (v8 & 8)]; /*0x55c234*/
  v22 = v8 & 7; /*0x55c236*/
  if ( !v22 ) /*0x55c239*/
  {
    v26 = 7; /*0x55c23d*/
    if ( !*v9 ) /*0x55c23b*/
    {
      do /*0x55c252*/
      {
        v27 = v9[1]; /*0x55c246*/
        v26 += 255; /*0x55c249*/
        ++v9; /*0x55c24f*/
      }
      while ( !v27 ); /*0x55c252*/
    }
    v22 = *v9++ + v26; /*0x55c258*/
  }
  v28 = &v25[-(*v9 >> 2)]; /*0x55c262*/
  v29 = v9 + 1; /*0x55c264*/
  v30 = &v28[-64 * *v29]; /*0x55c26c*/
  v5 = v29 + 1; /*0x55c26e*/
  if ( v30 != v6 ) /*0x55c271*/
  {
    v21 = v30 - 0x4000; /*0x55c288*/
    goto LABEL_33; /*0x55c288*/
  }
  *a3 = v6 - a2; /*0x55c27c*/
  return -(v7 != v5); /*0x55c27b*/
}
}
// 0x55CFD0
namespace gamemd {
AbstractClass * * Game_Frame_Check()
{
  char *v1; // eax
  int v2; // eax
  int v3; // edx
  Tooltip *v4; // ecx
  int v5; // esi
  int v6; // eax
  Scenario *v8; // [esp+0h] [ebp-84h]
  Scenario *v9; // [esp+0h] [ebp-84h]
  Network *v10; // [esp+0h] [ebp-84h]
  int Ticks; // [esp+8h] [ebp-7Ch]
  char v12[112]; // [esp+14h] [ebp-70h] BYREF

  if ( ((uint16_t)dword_A8ED84 & 0x3FF) == 0 && !CopyProtection::CheckProtectedData() ) /*0x55cfe1*/
  {
    v1 = (char *)((EventClass *)v12)->AddEvent( dword_A83D4C->Object_field_0x30, 8u); /*0x55cff9*/
    if ( *(int *)&dword_A802C8 < 128 ) /*0x55d008*/
    {
      qmemcpy(&(&byte_A802D4)[111 * dword_A802D0], v1, 0x6Fu); /*0x55d025*/
      (&dword_A83A54)[dword_A802D0] = timeGetTime(); /*0x55d037*/
      dword_A802D0 = ((unsigned char)dword_A802D0 + 1) & 0x7F; /*0x55d04e*/
      ++*(unsigned int *)&dword_A802C8; /*0x55d054*/
    }
  }
  if ( byte_A83D49 || byte_A8ECD0 || byte_8B41C0 || byte_A83D48 ) /*0x55d07a*/
  {
    ++dword_A8DAB4; /*0x55d080*/
    v2 = Scenario::ClearScreen(v8); /*0x55d086*/
    IDA_LOBYTE(v2) = byte_A83D49; /*0x55d08b*/
    if ( byte_A83D49 || byte_A8ECD0 ) /*0x55d09a*/
    {
      if ( dword_887368 ) /*0x55d0a8*/
      {
        v2 = ((Tooltip *)(dword_887368))->Enable(0); /*0x55d0ab*/
        IDA_LOBYTE(v2) = byte_A83D49; /*0x55d0b0*/
      }
      if ( (unsigned char)v2 || byte_A8ECD0 ) /*0x55d0bf*/
      {
        v3 = *(unsigned int *)&dword_A8B238; /*0x55d0cb*/
        if ( dword_A8B23C && (*(unsigned int *)&dword_A8B238 == 3 || *(unsigned int *)&dword_A8B238 == 4) ) /*0x55d0dd*/
        {
          (*(void (**)(int))(dword_A8B23C->vtable1 + 160))(v2); /*0x55d0e2*/
          IDA_LOBYTE(v2) = byte_A83D49; /*0x55d0e8*/
          v3 = *(unsigned int *)&dword_A8B238; /*0x55d0ed*/
        }
        if ( (unsigned char)v2 ) /*0x55d0f5*/
        {
          if ( v3 == 4 && !byte_A8F900 ) /*0x55d106*/
          {
            if ( *(unsigned int *)dword_B779C4 ) /*0x55d10e*/
              byte_A8B8C1 = 1; /*0x55d110*/
            Timer::UpdateDelta(); /*0x55d117*/
            ProcessGameResults(0); /*0x55d11e*/
          }
          byte_A8ECD0 = 0; /*0x55d123*/
          byte_A83D49 = 0; /*0x55d129*/
          byte_8B41C0 = 0; /*0x55d12f*/
          byte_A83D48 = 0; /*0x55d135*/
          InitLoadingScreenResources(); /*0x55d13b*/
          WTFMode::Shutdown( (void *)((&dword_A8B238))); /*0x55d145*/
          Scenario::EndGameFlow(v9); /*0x55d14a*/
          WTFMode::Init(&dword_A8B238); /*0x55d154*/
          v4 = (Tooltip *)(dword_887368); /*0x55d159*/
          byte_ABCD58 = 0; /*0x55d15f*/
          if ( !dword_887368 ) /*0x55d167*/
            goto LABEL_52; /*0x55d167*/
          goto LABEL_26; /*0x55d167*/
        }
        if ( byte_A8ECD0 ) /*0x55d183*/
        {
          if ( v3 == 4 && !byte_A8F900 ) /*0x55d194*/
          {
            if ( *(unsigned int *)dword_B779C4 ) /*0x55d19c*/
              byte_A8B8C1 = 1; /*0x55d19e*/
            Timer::UpdateDelta(); /*0x55d1a5*/
            ProcessGameResults(0); /*0x55d1ac*/
          }
          byte_A83D49 = 0; /*0x55d1b1*/
          byte_A8ECD0 = 0; /*0x55d1b7*/
          byte_8B41C0 = 0; /*0x55d1bd*/
          byte_A83D48 = 0; /*0x55d1c3*/
          InitLoadingScreenResources(); /*0x55d1c9*/
          WTFMode::Shutdown( (void *)((&dword_A8B238))); /*0x55d1d3*/
          Scenario::EndGame(v9); /*0x55d1d8*/
          WTFMode::Init(&dword_A8B238); /*0x55d1e2*/
          v4 = (Tooltip *)(dword_887368); /*0x55d1e7*/
          byte_ABCD58 = 0; /*0x55d1ed*/
          if ( !dword_887368 ) /*0x55d1f5*/
            goto LABEL_52; /*0x55d1f5*/
  LABEL_26:
          ((Tooltip *)(v4))->Enable(byte_A8EB80); /*0x55d16d*/
  LABEL_52:
          --dword_A8DAB4; /*0x55d341*/
          return (gamemd::AbstractClass **)(byte_A8E9A0 == 0); /*0x55d341*/
        }
      }
    }
    if ( byte_8B41C0 ) /*0x55d212*/
    {
      byte_A83D49 = 0; /*0x55d219*/
      byte_A8ECD0 = 0; /*0x55d21f*/
      byte_8B41C0 = 0; /*0x55d225*/
      byte_A83D48 = 0; /*0x55d22b*/
      WTFMode::Shutdown( (void *)((&dword_A8B238))); /*0x55d231*/
      GameFrameCheck_Check(); /*0x55d236*/
      WTFMode::Init(&dword_A8B238); /*0x55d240*/
      byte_ABCD58 = 0; /*0x55d245*/
    }
    else if ( byte_A83D48 ) /*0x55d256*/
    {
      byte_A83D49 = 0; /*0x55d25c*/
      byte_A8ECD0 = 0; /*0x55d262*/
      byte_8B41C0 = 0; /*0x55d268*/
      byte_A83D48 = 0; /*0x55d26e*/
      InitLoadingScreenResources(); /*0x55d274*/
      WTFMode::Shutdown( (void *)((&dword_A8B238))); /*0x55d27e*/
      GameFrameCheck_Check_686570((ObjectClass *)v9); /*0x55d283*/
      WTFMode::Init(&dword_A8B238); /*0x55d28d*/
      byte_ABCD58 = 0; /*0x55d292*/
      Debug::Log("Disconnect_Gracefully\n"); /*0x55d29d G57c1: IDA 0x55d29d push offset aDisconnectGrac*/
      if ( *(unsigned int *)&dword_A8B238 == 4 && dword_887628 && byte_A8DBA0 ) /*0x55d2c5*/
      {
        if ( dword_A8EA0C ) /*0x55d2cd*/
        {
          ((NetworkEventQueueClass *)((NetworkEventQueueClass *)&unk_B052D0))->WaitForResponse(); /*0x55d2d4*/
          v5 = 480; /*0x55d2e2*/
          Ticks = TimerGetTicks(); /*0x55d2e7*/
          while ( 1 ) /*0x55d2f5*/
          {
            if ( Ticks != -1 ) /*0x55d2fa*/
            {
              v6 = TimerGetTicks() - Ticks; /*0x55d305*/
              if ( v6 >= 480 ) /*0x55d30b*/
                break; /*0x55d30b*/
              v5 = 480 - v6; /*0x55d30d*/
            }
            if ( !v5 ) /*0x55d311*/
              break; /*0x55d311*/
            Event::Dispatch(); /*0x55d313*/
            if ( ((Process *)((Process *)&unk_B052D0))->WaitForExit(0xAu, 0) ) /*0x55d320*/
              break; /*0x55d320*/
            v5 = 480; /*0x55d2f1*/
          }
        }
        if ( !dword_A8B23C /*0x55d335*/
          || !(*(uint8_t (**)(ObjectClass *))(dword_A8B23C->vtable1 + 8))( (ObjectClass *)(dword_A8B23C)) )
        {
          ((gamemd::Network*)v10)->SendUnreachable(); /*0x55d33c*/
        }
      }
    }
    goto LABEL_52; /*0x55d24b*/
  }
  return (gamemd::AbstractClass **)(byte_A8E9A0 == 0); /*0x55d351*/
}
}
// 0x55D360
namespace gamemd {
void GameFrameLoop()
{
  int result; // eax
  int v2; // eax
  int v3; // esi
  int v4; // esi
  wchar_t *v5; // esi
  signed int v6; // eax
  int v7; // ebx
  int v8; // ebp
  int v9; // esi
  int *v10; // edi
  int v11; // esi
  signed int v12; // eax
  int v13; // esi
  signed int v14; // eax
  int v15; // esi
  signed int v16; // eax
  DWORD v17; // esi
  int referenceCount; // esi
  int *p_abstractFlags; // edi
  int v20; // eax
  char v21; // cl
  int *v22; // eax
  int v23; // esi
  unsigned char *WaypointCoords; // eax
  uint8_t v25; // cl
  int v26; // ecx
  int i; // esi
  unsigned char *v28; // eax
  uint8_t v29; // cl
  int v30; // ecx
  int v31; // esi
  unsigned char *v32; // eax
  uint8_t v33; // cl
  int v34; // ecx
  int v35; // esi
  int Object; // eax
  char *v37; // eax
  int v38; // eax
  int v39; // eax
  int v40; // eax
  signed int v41; // eax
  char *v42; // edx
  ObjectClass *v43; // [esp+0h] [ebp-1C4h]
  ObjectClass *v44; // [esp+0h] [ebp-1C4h]
  ObjectClass *v45; // [esp+0h] [ebp-1C4h]
  ObjectClass *v46; // [esp+0h] [ebp-1C4h]
  ObjectClass *v47; // [esp+0h] [ebp-1C4h]
  TechnoClass *v48; // [esp+0h] [ebp-1C4h]
  DWORD Time; // [esp+10h] [ebp-1B4h] BYREF
  Timer v50; // [esp+14h] [ebp-1B0h] BYREF
  char v51; // [esp+150h] [ebp-74h]
  wchar_t Buffer[56]; // [esp+154h] [ebp-70h] BYREF

  if ( !byte_A8E9A0 ) /*0x55d371*/
    goto LABEL_155; /*0x55d371*/
  byte_ABCD58 = 1; /*0x55d37c*/
  if ( !byte_A8ED80 ) /*0x55d385*/
  {
    while ( !*(unsigned int *)&dword_A8B238 || *(unsigned int *)&dword_A8B238 == 5 ) /*0x55d399*/
    {
      Sleep(0x1F4u); /*0x55d3a0*/
      MessageLoop(); /*0x55d3a2*/
      if ( byte_A8ED80 ) /*0x55d3ae*/
        goto LABEL_8; /*0x55d3ae*/
    }
    Sleep(0xAu); /*0x55d3b4*/
    MessageLoop(); /*0x55d3b6*/
  }
  LABEL_8:
  if ( (int)dword_A8ED84 >= dword_A8E2E4 ) /*0x55d3c8*/
    nullsub_35(); /*0x55d3cf*/
  dword_A8B55C = timeGetTime(); /*0x55d3da*/
  if ( dword_A8E308 ) /*0x55d3e6*/
    byte_A8ED72 = 1; /*0x55d3e8*/
  if ( byte_A8E378 == 1 && Audio::IsSoundEnabled() ) /*0x55d3f8*/
  {
    v2 = dword_A83D14; /*0x55d401*/
    if ( dword_A83D14 == -1 ) /*0x55d409*/
      v2 = dword_A83D18; /*0x55d40b*/
    if ( byte_A8EBA5 ) /*0x55d418*/
    {
      if ( v2 == -1 ) /*0x55d41d*/
        ((Theme*)((int)&unk_A83D10))->QueueSong(-2); /*0x55d421*/
    }
    else if ( v2 != -3 ) /*0x55d426*/
    {
      ((Theme *)((Theme *)&unk_A83D10))->Stop(1); /*0x55d42f*/
      ((Theme*)((int)&unk_A83D10))->QueueSong(-3); /*0x55d43b*/
    }
  }
  if ( !*(unsigned int *)&dword_A8B238 ) /*0x55d447*/
  {
    if ( !byte_A8EDDC ) /*0x55d76e*/
    {
      dword_A8EB60 = (AudioOptionsClass)2; /*0x55d774*/
      dword_887348 = TimerGetTicks(); /*0x55d783*/
      dword_88734C = *(unsigned int *)v50.__pad_0; /*0x55d791*/
      dword_887350 = 2; /*0x55d796*/
      goto LABEL_62; /*0x55d79c*/
    }
  LABEL_61:
    v17 = (DWORD)dword_A8EB60; /*0x55d79e*/
    dword_887348 = TimerGetTicks(); /*0x55d7b1*/
    dword_88734C = *(unsigned int *)v50.__pad_0; /*0x55d7b6*/
    dword_887350 = v17; /*0x55d7bc*/
    goto LABEL_62; /*0x55d7bc*/
  }
  if ( *(unsigned int *)&dword_A8B238 == 5 || dword_A8B24C != 2 ) /*0x55d45d*/
    goto LABEL_61; /*0x55d45d*/
  if ( (dword_A8D5F8 & 2) != 0 ) /*0x55d46a*/
  {
    dword_887348 = TimerGetTicks(); /*0x55d47b*/
    dword_88734C = *(unsigned int *)v50.__pad_0; /*0x55d480*/
    dword_887350 = 0; /*0x55d486*/
  }
  else
  {
    if ( dword_A8B558 ) /*0x55d499*/
    {
      v3 = 60 / (int)dword_A8B558; /*0x55d507*/
      dword_887348 = TimerGetTicks(); /*0x55d50e*/
      dword_88734C = *(unsigned int *)v50.__pad_0; /*0x55d517*/
      dword_887350 = v3; /*0x55d528*/
      v4 = 1000 / (int)dword_A8B558; /*0x55d532*/
      Time = timeGetTime(); /*0x55d53d*/
      ((Timer *)&v50)->EnableHighPrecision(); /*0x55d541*/
      g_TacticalState = (void*)(Time); /*0x55d54e*/
      *(unsigned int *)&v50.u32_4 = v4; /*0x55d554*/
      *(unsigned int *)stru_88732C.__pad_0 = *(unsigned int *)v50.__pad_0; /*0x55d558*/
      dword_887330 = v4; /*0x55d55e*/
    }
    else
    {
      dword_887348 = TimerGetTicks(); /*0x55d4a9*/
      dword_887350 = 2; /*0x55d4b2*/
      dword_88734C = *(unsigned int *)v50.__pad_0; /*0x55d4bc*/
      Time = timeGetTime(); /*0x55d4ca*/
      ((Timer *)&v50)->EnableHighPrecision(); /*0x55d4ce*/
      g_TacticalState = (void*)(Time); /*0x55d4e0*/
      *(unsigned int *)&v50.u32_4 = 33; /*0x55d4e6*/
      *(unsigned int *)stru_88732C.__pad_0 = *(unsigned int *)v50.__pad_0; /*0x55d4ea*/
      dword_887330 = 33; /*0x55d4f0*/
    }
    Timer::DisableHighPrecision(); /*0x55d568*/
    v5 = (wchar_t *)dword_887330; /*0x55d572*/
    if ( g_TacticalState  !=  (void *)(-1) ) /*0x55d57b*/
    {
      v6 = timeGetTime() - g_TacticalState; /*0x55d587*/
      if ( v6 >= (int)v5 ) /*0x55d58f*/
        v5 = (wchar_t *)(0); /*0x55d595*/
      else
        v5 = (wchar_t *)((char *)v5 - v6); /*0x55d591*/
    }
    v7 = (int)dword_A8B550; /*0x55d59c*/
    v8 = 0; /*0x55d5a2*/
    dword_ABCE04 = (unsigned int)v5; /*0x55d5a7*/
    if ( *(unsigned int *)&dword_A8B238 == 4 ) /*0x55d5ad*/
    {
      if ( (int)dword_A8B550 <= 30 ) /*0x55d5b6*/
        goto LABEL_72; /*0x55d5b6*/
      v9 = 0; /*0x55d5c1*/
      if ( Network::GetSendCount( (void *)(&unk_A8E9C0)) > 0 ) /*0x55d5ca*/
      {
        v10 = (int *)(dword_A8DB7C); /*0x55d5d0*/
        do /*0x55d5ed*/
        {
          if ( v8 <= *v10 ) /*0x55d5d9*/
            v8 = *v10; /*0x55d5db*/
          ++v9; /*0x55d5e2*/
          ++v10; /*0x55d5e3*/
        }
        while ( v9 < Network::GetSendCount( (void *)(&unk_A8E9C0)) ); /*0x55d5ed*/
        if ( v8 ) /*0x55d5f1*/
        {
          if ( v8 >= v7 / 4 ) /*0x55d604*/
          {
            v11 = dword_887330; /*0x55d60b*/
            if ( g_TacticalState  !=  (void *)(-1) ) /*0x55d616*/
            {
              v12 = timeGetTime() - g_TacticalState; /*0x55d622*/
              if ( v12 >= v11 ) /*0x55d62a*/
                v11 = 0; /*0x55d630*/
              else
                v11 -= v12; /*0x55d62c*/
            }
            Time = timeGetTime(); /*0x55d63f*/
            ((Timer *)&v50)->EnableHighPrecision(); /*0x55d643*/
            g_TacticalState = (void*)(Time); /*0x55d653*/
            *(unsigned int *)&v50.u32_4 = v11 + 10; /*0x55d65d*/
            *(unsigned int *)stru_88732C.__pad_0 = *(unsigned int *)v50.__pad_0; /*0x55d661*/
            dword_887330 = v11 + 10; /*0x55d667*/
            Timer::DisableHighPrecision(); /*0x55d66c*/
          }
          if ( v8 >= v7 / 2 ) /*0x55d67f*/
          {
            v13 = dword_887330; /*0x55d686*/
            if ( g_TacticalState  !=  (void *)(-1) ) /*0x55d68e*/
            {
              v14 = timeGetTime() - g_TacticalState; /*0x55d69a*/
              if ( v14 >= v13 ) /*0x55d6a2*/
                v13 = 0; /*0x55d6a8*/
              else
                v13 -= v14; /*0x55d6a4*/
            }
            Time = timeGetTime(); /*0x55d6b7*/
            ((Timer *)&v50)->EnableHighPrecision(); /*0x55d6bb*/
            g_TacticalState = (void*)(Time); /*0x55d6cb*/
            *(unsigned int *)&v50.u32_4 = v13 + 10; /*0x55d6d5*/
            *(unsigned int *)stru_88732C.__pad_0 = *(unsigned int *)v50.__pad_0; /*0x55d6d9*/
            dword_887330 = v13 + 10; /*0x55d6df*/
            Timer::DisableHighPrecision(); /*0x55d6e4*/
          }
          if ( v8 >= 3 * v7 / 4 ) /*0x55d6f7*/
          {
            v15 = dword_887330; /*0x55d702*/
            if ( g_TacticalState  !=  (void *)(-1) ) /*0x55d70a*/
            {
              v16 = timeGetTime() - g_TacticalState; /*0x55d716*/
              if ( v16 >= v15 ) /*0x55d71e*/
                v15 = 0; /*0x55d724*/
              else
                v15 -= v16; /*0x55d720*/
            }
            Time = timeGetTime(); /*0x55d733*/
            ((Timer *)&v50)->EnableHighPrecision(); /*0x55d737*/
            g_TacticalState = (void*)(Time); /*0x55d747*/
            *(unsigned int *)&v50.u32_4 = v15 + 10; /*0x55d751*/
            *(unsigned int *)stru_88732C.__pad_0 = *(unsigned int *)v50.__pad_0; /*0x55d755*/
            dword_887330 = v15 + 10; /*0x55d75b*/
            Timer::DisableHighPrecision(); /*0x55d760*/
          }
        }
      }
    }
  }
  LABEL_62:
  if ( *(unsigned int *)&dword_A8B238 && *(unsigned int *)&dword_A8B238 != 5 ) /*0x55d7ce*/
    goto LABEL_72; /*0x55d7ce*/
  if ( IDA_LOBYTE(((AbstractClass *)dword_A8B230)[44].vtable0) ) /*0x55d7da*/
  {
    referenceCount = ((AbstractClass *)dword_A8B230)[43].referenceCount; /*0x55d7ea*/
    if ( ((AbstractClass *)dword_A8B230)[43].abstractFlags != -1 ) /*0x55d7f9*/
    {
      p_abstractFlags = &((AbstractClass *)dword_A8B230)[43].abstractFlags; /*0x55d7f0*/
      v20 = TimerGetTicks() - *p_abstractFlags; /*0x55d803*/
      if ( v20 >= referenceCount ) /*0x55d807*/
      {
  LABEL_69:
        IDA_LOBYTE(((AbstractClass *)dword_A8B230)[44].vtable0) = 0; /*0x55d80f*/
        ((ScenarioClass *)v43)->ProcessIntroTimer(); /*0x55d81c*/
        goto LABEL_70; /*0x55d81c*/
      }
      referenceCount -= v20; /*0x55d809*/
    }
    if ( referenceCount > 0 ) /*0x55d80d*/
      goto LABEL_70; /*0x55d80d*/
    goto LABEL_69; /*0x55d80d*/
  }
  LABEL_70:
  if ( ((AbstractClass *)dword_A8B230)[43].NeedsSaveOrLink ) /*0x55d826*/
  {
    MessageLoop(); /*0x55d830*/
    Event::Dispatch(); /*0x55d835*/
    UpdateChronosphereEffect(); /*0x55d83a*/
    (*(void (**)(LPPERSISTSTREAM))(*(unsigned int *)&((TacticalMap *)g_TacticalClass_Instance)->q_170))( (LPPERSISTSTREAM)((LPPERSISTSTREAM)((LPPERSISTSTREAM)((LPPERSISTSTREAM)(g_TacticalClass_Instance)))));  /*0x55d847*/
    ((TacticalMap*)((GScreenClass *)&dword_87F7E8))->Redraw(); /*0x55d84f*/
    SyncDelay::Start((SyncDelay *)v43); /*0x55d854*/
    byte_ABCD58 = 0; /*0x55d866*/
    return byte_A8E9A0 == 0; /*0x55d877*/
  }
  LABEL_72:
  v21 = dword_A8D5F8; /*0x55d878*/
  if ( (dword_A8D5F8 & 2) == 0 && !dword_A8EDA0 && byte_A8ED80 ) /*0x55d895*/
  {
    InputManager_ProcessEvents::Vtable( /*0x55d8ab*/
      (GScreenClass *)&dword_87F7E8,
      &v50.__pad_1C[8],
      &v50.__pad_1C[16],
      &v50.__pad_1C[12]);
    ((SyncDelayClass *)&v50.__pad_1C[8])->ProcessNetworkSync(); /*0x55d8b4*/
    if ( byte_A8B8B4 ) /*0x55d8c0*/
      DrawHUD( (void *)(v43)); /*0x55d8c4*/
    if ( ((uint8_t)dword_A8ED84 & 7) == 7 && *(unsigned int *)&dword_A8B238 == 4 ) /*0x55d8dc*/
      IPXManagerClass::ProcessQueue(&unk_A8E9C0); /*0x55d8e3*/
    MarkAllFootOccupancies(v43); /*0x55d8e8*/
    ((TacticalMap*)((GScreenClass *)&dword_87F7E8))->Redraw(); /*0x55d8f2*/
    v21 = dword_A8D5F8; /*0x55d8f7*/
  }
  byte_A8ED9D = 0; /*0x55d903*/
  if ( (v21 & 1) != 0 || (v21 & 2) != 0 ) /*0x55d912*/
  {
    if ( (v21 & 1) != 0 ) /*0x55d91a*/
    {
      v22 = RequestMapSnapshot((ObjectClass *)g_TacticalClass_Instance, &v50.__pad_1C[20]); /*0x55d92b*/
      Time = *v22; /*0x55d936*/
      *(unsigned int *)v50.__pad_0 = v22[1]; /*0x55d945*/
      ((FileClass *)&dword_A8D58C)->Write( (CCFileClass *)(&Time), 8u); /*0x55d949*/
      *(unsigned int *)&v50.__pad_6[2] = dword_A8ECC8; /*0x55d960*/
      ((FileClass *)&dword_A8D58C)->Write( (CCFileClass *)(&v50.__pad_6[2]), 4u); /*0x55d964*/
      v23 = 0; /*0x55d969*/
      for ( *(unsigned int *)&v50.__pad_6[6] = 0; v23 < *(int *)&v50.__pad_6[2]; *(unsigned int *)&v50.__pad_6[6] += v26 ) /*0x55d973*/
      {
        WaypointCoords = ScriptAction::GetWaypointCoords( /*0x55d983*/
                           (ScriptAction *)&v50.__pad_6[14],
                           *((unsigned int **)dword_A8ECBC + v23));
        v25 = WaypointCoords[4]; /*0x55d988*/
        if ( v25 ) /*0x55d98d*/
          v26 = *(unsigned int *)WaypointCoords & 0xFFFFFF | (v25 << 24); /*0x55d9a4*/
        else
          v26 = -1; /*0x55d98f*/
        ++v23; /*0x55d9b0*/
      }
      ((FileClass *)&dword_A8D58C)->Write( (CCFileClass *)(&v50.__pad_6[6]), 4u); /*0x55d9c5*/
      for ( i = 0; i < *(int *)&v50.__pad_6[2]; ++i ) /*0x55d9d0*/
      {
        v28 = ((ScriptAction *)(&v50.__pad_6[14]))->GetWaypointCoords( *((unsigned int **)dword_A8ECBC + i)); /*0x55d9e0*/
        v29 = v28[4]; /*0x55d9e5*/
        if ( v29 ) /*0x55d9ea*/
          v30 = *(unsigned int *)v28 & 0xFFFFFF | (v29 << 24); /*0x55da02*/
        else
          v30 = -1; /*0x55d9ec*/
        *(unsigned int *)v50.__pad_1C = v30; /*0x55da08*/
        ((FileClass *)&dword_A8D58C)->Write( v50.__pad_1C, 4u); /*0x55da14*/
      }
      ((FileClass *)&dword_A8D58C)->Write( (CCFileClass *)(&dword_ABCDFC), 4u); /*0x55da2c*/
      ((FileClass *)&dword_A8D58C)->Write( (CCFileClass *)(&dword_ABCE00), 4u); /*0x55da3d*/
      v21 = dword_A8D5F8; /*0x55da42*/
      dword_ABCDFC = 0; /*0x55da48*/
      dword_ABCE00 = 0; /*0x55da4e*/
    }
    if ( (v21 & 2) != 0 ) /*0x55da57*/
    {
      if ( ((CCFileClass *)(&dword_A8D58C))->Read( &Time, 8) == 8 ) /*0x55da71*/
        TacticalMapClass::SetCameraPosition((TacticalClass *)g_TacticalClass_Instance, (int *)&Time); /*0x55da7e*/
      if ( ((CCFileClass *)(&dword_A8D58C))->Read( &v50.__pad_6[2], 4) == 4 ) /*0x55da97*/
      {
        v31 = 0; /*0x55daa2*/
        for ( *(unsigned int *)&v50.__pad_6[6] = 0; v31 < (int)dword_A8ECC8; *(unsigned int *)&v50.__pad_6[6] += v34 ) /*0x55daaa*/
        {
          v32 = ((ScriptAction *)(&v50.__pad_6[14]))->GetWaypointCoords( *((unsigned int **)dword_A8ECBC + v31)); /*0x55daba*/
          v33 = v32[4]; /*0x55dabf*/
          if ( v33 ) /*0x55dac4*/
            v34 = *(unsigned int *)v32 & 0xFFFFFF | (v33 << 24); /*0x55dadb*/
          else
            v34 = -1; /*0x55dac6*/
          ++v31; /*0x55dae8*/
        }
        ((CCFileClass *)(&dword_A8D58C))->Read( &v50.__pad_1C[4], 4); /*0x55dafd*/
        if ( *(unsigned int *)&v50.__pad_1C[4] != *(unsigned int *)&v50.__pad_6[6] ) /*0x55db0c*/
          ((MapClass *)v43)->UnselectAll_ClearLimboLaunchers(); /*0x55db0e*/
        v35 = 0; /*0x55db17*/
        for ( g_MoveFeedback = 1; v35 < *(int *)&v50.__pad_6[2]; ++v35 ) /*0x55db22*/
        {
          if ( ((CCFileClass *)(&dword_A8D58C))->Read( v50.__pad_1C, 4) == 4 ) /*0x55db38*/
          {
            IDA_LOBYTE(v50.m_18) = 0; /*0x55db48*/
            CheckNetworkSync((ObjectClass *)&v50.__pad_6[14], (int)&v50.__pad_1C[20], *(int *)v50.__pad_1C); /*0x55db4d*/
            Object = BuildingLoadQueue::FindObject((BuildingLoadQueue *)&v50.__pad_6[14]); /*0x55db56*/
            if ( Object ) /*0x55db5d*/
            {
              if ( *(unsigned int *)&v50.__pad_1C[4] != *(unsigned int *)&v50.__pad_6[6] ) /*0x55db69*/
              {
                (*(void (**)(int))(*(unsigned int *)Object + 332))(Object); /*0x55db6f*/
                g_MoveFeedback = 0; /*0x55db75*/
              }
            }
          }
        }
        g_MoveFeedback = 1; /*0x55db85*/
      }
      ((CCFileClass *)(&dword_A8D58C))->Read( &dword_ABCDFC, 4); /*0x55db98*/
      ((CCFileClass *)(&dword_A8D58C))->Read( &dword_ABCE00, 4); /*0x55dba9*/
      ((MapClass *)((int)((GScreenClass *)&dword_87F7E8)))->MarkForRedraw((int)((MapClass *)((int)((GScreenClass *)&dword_87F7E8))), 0); /*0x55dbb4*/
      ((TacticalMap*)((GScreenClass *)&dword_87F7E8))->Redraw(); /*0x55dbbe*/
    }
  }
  ProcessAutoSave(&stru_8A0390); /*0x55dbc8*/
  if ( !*(unsigned int *)&dword_A8B238 && !byte_ABCE08 ) /*0x55dbe0*/
  {
    byte_ABCE08 = 1; /*0x55dbee*/
    strcpy( (char *)(&v50.__pad_1C[28]), (const char *)&dword_A8B230[130].abstractFlags); /*0x55dc12*/
    v51 = 0; /*0x55dc1f*/
    v37 = strrchr(&v50.__pad_1C[28], 46); /*0x55dc28*/
    if ( v37 ) /*0x55dc32*/
      *v37 = 0; /*0x55dc34*/
    strcat( (char *)(&v50.__pad_1C[28]), aSav); /*0x55dc5c*/
    swprintf(Buffer, (const size_t)aS, (const wchar_t *const)&dword_A8B230[141].vtable1 + 1); /*0x55dc7d*/
    SaveScenarioClassGame_AdjustMPSaveFileName( (const char*)(&v50.__pad_1C[28]), (const wchar_t*)(Buffer), 0); /*0x55dc92*/
  }
  Scenario::Update((Scenario *)&dword_87F778); /*0x55dc9e*/
  *(unsigned int *)&v50.__pad_6[10] = dword_82A030; /*0x55dcb5*/
  if ( (uint8_t)Mouse::IsButtonDown(dword_A8EC08) || (uint8_t)Mouse::IsButtonDown(dword_A8EC0C) ) /*0x55dcce*/
  {
    IDA_LOWORD(v39) = Math::RoundToInt((double)*(int *)&v50.__pad_6[10] * flt_82A034); /*0x55dd21*/
  LABEL_127:
    *(unsigned int *)&v50.__pad_6[10] = v39; /*0x55dd26*/
    goto LABEL_128; /*0x55dd26*/
  }
  if ( (uint8_t)Mouse::IsButtonDown(dword_A8EC00) || (uint8_t)Mouse::IsButtonDown(dword_A8EC04) ) /*0x55dcf8*/
  {
    v38 = dword_87F8DC; /*0x55dd01*/
    if ( dword_87F8DC <= dword_87F8E0 ) /*0x55dd0e*/
      v38 = dword_87F8E0; /*0x55dd10*/
    v39 = v38 << 8; /*0x55dd12*/
    goto LABEL_127; /*0x55dd15*/
  }
  LABEL_128:
  if ( (dword_ABCE14 & 0x100) != 0 ) /*0x55dd32*/
    DisplayClass::SetCoordVisible( (IUnknown *)((DisplayClass *)6), (MouseClass *)(&v50.__pad_6[10]), 1); /*0x55dd42*/
  if ( (dword_ABCE14 & 0x1000) != 0 ) /*0x55dd4f*/
    DisplayClass::SetCoordVisible( (IUnknown *)((DisplayClass *)2), (MouseClass *)(&v50.__pad_6[10]), 1); /*0x55dd5f*/
  if ( (dword_ABCE14 & 1) != 0 ) /*0x55dd6b*/
    DisplayClass::SetCoordVisible( 0, (MouseClass *)(&v50.__pad_6[10]), 1); /*0x55dd7a*/
  if ( (dword_ABCE14 & 0x10) != 0 ) /*0x55dd86*/
    DisplayClass::SetCoordVisible( (IUnknown *)((DisplayClass *)4), (MouseClass *)(&v50.__pad_6[10]), 1); /*0x55dd96*/
  FlushPlanningQueue(v43); /*0x55dd9b*/
  SyncFrameCounter((char *)&unk_A8BC60); /*0x55dda5*/
  if ( *(unsigned int *)&dword_A8B238 == 3 || *(unsigned int *)&dword_A8B238 == 4 ) /*0x55ddb7*/
  {
    if ( dword_A8B23C ) /*0x55ddc1*/
    {
      if ( !(*(uint8_t (**)(ObjectClass *))(dword_A8B23C->vtable1 + 4))( (ObjectClass *)(dword_A8B23C)) ) /*0x55ddc5*/
      {
        v40 = *(unsigned int *)((dword_87F8DC << 11) + dword_87F924 + 10268); /*0x55dde1*/
        if ( v40 ) /*0x55dde5*/
        {
          if ( *(unsigned int *)(v40 + 304) != 1 || (*(unsigned char *)(v40 + 300) & 0x18) != 0 ) /*0x55ddf7*/
            Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, 2); /*0x55de08*/
        }
      }
    }
  }
  v41 = timeGetTime() - dword_A8B55C; /*0x55de13*/
  if ( v41 > 1000 ) /*0x55de1e*/
    v41 = 1000; /*0x55de20*/
  *(unsigned int *)dword_A8B560 += v41; /*0x55de34*/
  ++dword_A8B564; /*0x55de3a*/
  ProcessNetworkEvents(v44); /*0x55de40*/
  FlushPlanningQueue(v45); /*0x55de45*/
  result = Event::Dispatch(); /*0x55de4a*/
  if ( byte_A83D49 || byte_A8ECD0 || byte_8B41C0 || byte_A83D48 ) /*0x55de71*/
  {
    byte_ABCD58 = 0; /*0x55dec8*/
  LABEL_155:
    IDA_LOBYTE(result) = 1; /*0x55decf*/
    return result; /*0x55ded2*/
  }
  v42 = (char *)dword_A8ED84 + 1; /*0x55de7e*/
  dword_A8ED84 = (unsigned int)(wchar_t *)((char *)dword_A8ED84 + 1); /*0x55de81*/
  if ( dword_B07784 ) /*0x55de87*/
  {
    if ( dword_B07784 < (int)v42 ) /*0x55de8d*/
    {
      UpdateMouse(v46); /*0x55de8f*/
      dword_B07784 = 0; /*0x55de94*/
    }
  }
  SyncDelay::Start((SyncDelay *)v46); /*0x55de9a*/
  ProcessExpiredPointers(v47); /*0x55de9f*/
  ExecutePlanningQueue(v48); /*0x55dea4*/
  byte_ABCD58 = 0; /*0x55deb6*/
  return byte_A8E9A0 == 0; /*0x55d861*/
}
}
// 0x55F1E0
namespace gamemd {
BitFont * * DrawHUD()
{
  int *result; // eax
  int Type; // eax
  AudioStream *v3; // esi
  int v4; // eax
  int BuildingAnimByName; // eax
  unsigned int *v6; // eax
  int v7; // eax
  unsigned int *v8; // eax
  int v9; // eax
  unsigned int *v10; // eax
  unsigned int QueueSize; // eax
  int v12; // eax
  unsigned int *v13; // eax
  int v14; // eax
  unsigned int *v15; // eax
  int v16; // eax
  unsigned int *v17; // eax
  int v18; // eax
  unsigned int *v19; // eax
  int v20; // eax
  unsigned int *v21; // eax
  int v22; // eax
  unsigned int *v23; // eax
  int v24; // [esp-14h] [ebp-264h]
  int v25; // [esp-10h] [ebp-260h]
  int v26; // [esp-10h] [ebp-260h]
  int v27; // [esp-Ch] [ebp-25Ch]
  int v28; // [esp-Ch] [ebp-25Ch]
  int v29; // [esp-Ch] [ebp-25Ch]
  int v30; // [esp-8h] [ebp-258h]
  int v31; // [esp-8h] [ebp-258h]
  int v32; // [esp-8h] [ebp-258h]
  int v33; // [esp-4h] [ebp-254h]
  int v34; // [esp-4h] [ebp-254h]
  int v35; // [esp-4h] [ebp-254h]
  int v36; // [esp+0h] [ebp-250h]
  int v37; // [esp+0h] [ebp-250h]
  int v38; // [esp+0h] [ebp-250h]
  int v39; // [esp+0h] [ebp-250h]
  int v40; // [esp+4h] [ebp-24Ch]
  int v41; // [esp+4h] [ebp-24Ch]
  int v42; // [esp+4h] [ebp-24Ch]
  int v43; // [esp+4h] [ebp-24Ch]
  int v44; // [esp+4h] [ebp-24Ch]
  int v45; // [esp+8h] [ebp-248h] BYREF
  int v46; // [esp+Ch] [ebp-244h] BYREF
  wchar_t Format[2]; // [esp+10h] [ebp-240h] BYREF
  int v48; // [esp+14h] [ebp-23Ch] BYREF
  int v49; // [esp+18h] [ebp-238h] BYREF
  int v50; // [esp+1Ch] [ebp-234h] BYREF
  int v51; // [esp+20h] [ebp-230h] BYREF
  int v52; // [esp+24h] [ebp-22Ch] BYREF
  int v53; // [esp+28h] [ebp-228h] BYREF
  int v54; // [esp+2Ch] [ebp-224h] BYREF
  int v55; // [esp+30h] [ebp-220h] BYREF
  wchar_t v56; // [esp+34h] [ebp-21Ch] BYREF
  wchar_t v57[2]; // [esp+38h] [ebp-218h] BYREF
  wchar_t v58[2]; // [esp+3Ch] [ebp-214h] BYREF
  wchar_t v59[2]; // [esp+40h] [ebp-210h] BYREF
  wchar_t v60[2]; // [esp+44h] [ebp-20Ch] BYREF
  wchar_t v61[4]; // [esp+48h] [ebp-208h] BYREF
  wchar_t Buffer[256]; // [esp+50h] [ebp-200h] BYREF

  result = (int *)dword_8373A0; /*0x55f1e0*/
  if ( dword_8373A0 != -1 ) /*0x55f1f2*/
  {
    *(double *)v61 = (double)(unsigned int)dword_8373A0 * 0.001; /*0x55f20a*/
    Type = BuildingAnim::GetType(); /*0x55f20e*/
    v53 = 100; /*0x55f225*/
    v54 = 0; /*0x55f23a*/
    *(unsigned int *)v57 = 0; /*0x55f23e*/
    *(unsigned int *)v58 = 0; /*0x55f242*/
    wcscpy( (wchar_t *)(v59), L"?"); /*0x55f246*/
    wcscpy( (wchar_t *)(v60), L"\x0F"); /*0x55f24e*/
    result = TextRenderer::DrawText( /*0x55f278*/
               &v55,
               (size_t)a2f,
               (int)DSurface_Composite,
               v57,
               (int)&v53,
               *(unsigned int *)(*(unsigned int *)&stru_B054D0.m_1[3] + 4 * Type),
               31,
               (int)wcscpy( (wchar_t *)(Format), L"\x06"),
               *(unsigned int *)v61,
               *(unsigned int *)&v61[2],
               &dword_A8B230[130].abstractFlags);
  }
  if ( byte_A8B8B5 ) /*0x55f286*/
  {
    result = *(int **)&dword_A8B238; /*0x55f28c*/
    if ( *(unsigned int *)&dword_A8B238 > 2u ) /*0x55f293*/
    {
      v3 = (AudioStream *)(DSurface_Composite); /*0x55f2b1*/
      (*(void (**)(void *))(*(unsigned int *)&((MouseClass *)stru_887598.lineTrailer)->q_30))(stru_887598.lineTrailer);  /*0x55f2b9*/
      v4 = *(unsigned int *)v3->__pad_0; /*0x55f2bc*/
      *(unsigned int *)v57 = 0; /*0x55f2c6*/
      wcscpy( (wchar_t *)(v58), L"?"); /*0x55f2ca*/
      wcscpy( (wchar_t *)(v59), L"?"); /*0x55f2d2*/
      wcscpy( (wchar_t *)(v60), L"�"); /*0x55f2da*/
      (*(void (**)(AudioStream *, wchar_t *, unsigned int))(v4 + 20))( (AudioStream *)(v3), (wchar_t *)(v57), 0); /*0x55f2e2*/
      swprintf(Buffer, (const size_t)&off_82A224, *(const wchar_t *const *)((char *)&stru_A8EB00 + 416)); /*0x55f2f6*/
      v53 = 0; /*0x55f308*/
      v54 = 302; /*0x55f30f*/
      BuildingAnimByName = FindBuildingAnimByName( (AbstractClass *)(&stru_822420.TrailerAnim), 1); /*0x55f317*/
v6 = (unsigned int *)(*(int (**)(AudioStream *, wchar_t *, int *, int, unsigned int, int))(*(unsigned int *)v3->__pad_0 /*0x55f32b*/ + 120))( (AudioStream *)(v3), (wchar_t *)(v57), (int *)(&v53), BuildingAnimByName, 0, 25);







      TextRenderer::DrawText(&v54, (size_t)&v61[2], (int)v3, v6, v46, *(int *)Format, v48, v49); /*0x55f33a*/
      swprintf(&v61[2], (const size_t)&off_82A210, *(const wchar_t *const *)&g_MissionQueueFrame.waypoints[282]); /*0x55f34f*/
      v52 = 0; /*0x55f361*/
      v53 = 312; /*0x55f368*/
      v7 = FindBuildingAnimByName( (AbstractClass *)(&stru_822420.TrailerAnim), 1); /*0x55f370*/
v8 = (unsigned int *)(*(int (**)(AudioStream *, wchar_t *, int *, int, unsigned int, int))(*(unsigned int *)v3->__pad_0 /*0x55f384*/ + 120))( (AudioStream *)(v3), (wchar_t *)(&v56), (int *)(&v52), v7, 0, 25);







      TextRenderer::DrawText(&v53, (size_t)v61, (int)v3, v8, v45, v46, *(int *)Format, v48); /*0x55f393*/
      swprintf(v61, (const size_t)&off_82A1F4, dword_A8B550); /*0x55f3a9*/
      v51 = 0; /*0x55f3b1*/
      v52 = 322; /*0x55f3b5*/
      v9 = FindBuildingAnimByName( (AbstractClass *)(&stru_822420.TrailerAnim), 1); /*0x55f3ca*/
v10 = (unsigned int *)(*(int (**)(AudioStream *, int *, int *, int, unsigned int, int))(*(unsigned int *)v3->__pad_0 + 120))( /*0x55f3de*/ v3, (int *)(&v55), (int *)(&v51), v9, 0, 25);






      TextRenderer::DrawText(&v52, (size_t)v60, (int)v3, v10, v40, v45, v46, *(int *)Format); /*0x55f3ed*/
      QueueSize = IPXManagerClass::GetQueueSize(&unk_A8E9C0); /*0x55f3fa*/
      swprintf(v60, (const size_t)&off_82A1D0, (const wchar_t *)((int)(1000 * QueueSize) / 60)); /*0x55f429*/
      v50 = 0; /*0x55f43b*/
      v51 = 332; /*0x55f442*/
      v12 = FindBuildingAnimByName( (AbstractClass *)(&stru_822420.TrailerAnim), 1); /*0x55f44a*/
v13 = (unsigned int *)(*(int (**)(AudioStream *, int *, int *, int, unsigned int, wchar_t *))(*(unsigned int *)v3->__pad_0 /*0x55f45e*/ + 120))( (AudioStream *)(v3), (int *)(&v54), (int *)(&v50), v12, 0, wcscpy( (wchar_t *)(Format), L"\x19"));







      TextRenderer::DrawText(&v51, (size_t)v59, (int)v3, v13, v36, v41, v45, v46); /*0x55f46d*/
      swprintf(v59, (const size_t)&off_82A1B4, dword_A8B558); /*0x55f483*/
      v49 = 0; /*0x55f495*/
      v50 = 342; /*0x55f49c*/
      v14 = FindBuildingAnimByName( (AbstractClass *)(&stru_822420.TrailerAnim), 1); /*0x55f4a4*/
v15 = (unsigned int *)(*(int (**)(AudioStream *, int *, int *, int, unsigned int, int))(*(unsigned int *)v3->__pad_0 + 120))( /*0x55f4b8*/ v3, (int *)(&v53), (int *)(&v49), v14, 0, 25);






      TextRenderer::DrawText(&v50, (size_t)v58, (int)v3, v15, v33, v37, v42, v45); /*0x55f4c7*/
      swprintf(v58, (const size_t)&off_828788, *(const wchar_t *const *)(*dword_A8DA78 + 115)); /*0x55f4e1*/
      v48 = 0; /*0x55f4f3*/
      v49 = 352; /*0x55f4fa*/
      v16 = FindBuildingAnimByName( (AbstractClass *)(&stru_822420.TrailerAnim), 1); /*0x55f502*/
v17 = (unsigned int *)(*(int (**)(AudioStream *, int *, int *, int, unsigned int, int))(*(unsigned int *)v3->__pad_0 + 120))( /*0x55f516*/ v3, (int *)(&v52), (int *)(&v48), v16, 0, 25);






      TextRenderer::DrawText(&v49, (size_t)v57, (int)v3, v17, v30, v34, v38, v43); /*0x55f525*/
      swprintf(v57, (const size_t)&off_828708, (const wchar_t *)(1000 * dword_A8E2D4 / 0x3Cu)); /*0x55f550*/
      *(unsigned int *)Format = 0; /*0x55f562*/
      v48 = 362; /*0x55f569*/
      v18 = FindBuildingAnimByName( (AbstractClass *)(&stru_822420.TrailerAnim), 1); /*0x55f571*/
v19 = (unsigned int *)(*(int (**)(AudioStream *, int *, wchar_t *, int, unsigned int, int))(*(unsigned int *)v3->__pad_0 /*0x55f585*/ + 120))( (AudioStream *)(v3), (int *)(&v51), (wchar_t *)(Format), v18, 0, 25);







      TextRenderer::DrawText(&v48, (size_t)&v56, (int)v3, v19, v27, v31, v35, v39); /*0x55f594*/
      swprintf( /*0x55f5c2*/
        &v56,
        (const size_t)&off_82A1A0,
        (const wchar_t *const)g_TacticalState,
        *(unsigned int *)stru_88732C.__pad_0,
        *(unsigned int *)&stru_88732C.m_2[2]);
      v46 = 0; /*0x55f5d4*/
      wcscpy( (wchar_t *)(Format), L"?"); /*0x55f5db*/
      v20 = FindBuildingAnimByName( (AbstractClass *)(&stru_822420.TrailerAnim), 1); /*0x55f5e3*/
v21 = (unsigned int *)(*(int (**)(AudioStream *, int *, int *, int))(*(unsigned int *)v3->__pad_0 + 120))( /*0x55f5f7*/ v3, (int *)(&v50), (int *)(&v46), v20);




      TextRenderer::DrawText((int *)Format, (size_t)&v55, (int)v3, v21, v25, v28, v32, 0); /*0x55f606*/
      swprintf( /*0x55f61b*/
        (wchar_t *const)&v55,
        (const size_t)&off_82A18C,
        *(const wchar_t *const *)&g_MissionQueueFrame.waypoints[474]);
      v45 = 0; /*0x55f62d*/
      v46 = 382; /*0x55f634*/
      v22 = FindBuildingAnimByName( (AbstractClass *)(&stru_822420.TrailerAnim), 1); /*0x55f63c*/
v23 = (unsigned int *)(*(int (**)(AudioStream *, int *, int *, int))(*(unsigned int *)v3->__pad_0 + 120))( /*0x55f650*/ v3, (int *)(&v49), (int *)(&v45), v22);




      TextRenderer::DrawText(&v46, (size_t)&v54, (int)v3, v23, v24, v26, v29, 0); /*0x55f65f*/
      ScoreBoard::Render((char *)&unk_A8E9C0); /*0x55f66c*/
      return (*(int *(**)(void *, int, int, int, int, int, unsigned int, int, int, int))(*(unsigned int *)stru_887598.lineTrailer /*0x55f679*/
                                                                                            + 16))(
               stru_887598.lineTrailer,
               25,
               25,
               v44,
               v45,
               v46,
               *(unsigned int *)Format,
               v48,
               v49,
               v50);
    }
  }
  return result; /*0x55f67c*/
}
}
// 0x55F970
namespace gamemd {
void* unknown_libname_21()
{
  unk_ABCE70[0] = 3; /*0x5fa35a*/
  unk_ABCE70[1] = 1; /*0x5fa360*/
  unk_ABCE70[3] = 0; /*0x5fa363*/
  unk_ABCE70[4] = 3; /*0x5fa366*/
  IDA_LOBYTE(unk_ABCE70[5]) = 1; /*0x5fa36d*/
  unk_ABCE70[6] = 2; /*0x5fa370*/
  IDA_LOBYTE(unk_ABCE70[7]) = 1; /*0x5fa377*/
  IDA_BYTE1(unk_ABCE70[7]) = 1; /*0x5fa37a*/
  IDA_BYTE2(unk_ABCE70[7]) = 1; /*0x5fa37d*/
  IDA_LOBYTE(unk_ABCE70[8]) = 1; /*0x5fa380*/
  unk_ABCEB5 = 1; /*0x5fa383*/
  unk_ABCF08 = 18; /*0x5fa38b*/
  unk_ABCF0C = 18; /*0x5fa391*/
  unk_ABCF10 = 17; /*0x5fa39f*/
  unk_ABCF14 = 17; /*0x5fa3a5*/
  dword_ABCE94 = -1; /*0x5fa3b0*/
  unk_ABCF18 = 16; /*0x5fa3b3*/
  unk_ABCF1C = 16; /*0x5fa3b9*/
  dword_ABCE98 = -1; /*0x5fa3c4*/
  unk_ABCEBC = -1; /*0x5fa3c7*/
  unk_ABCEC0 = -1; /*0x5fa3ca*/
  IDA_HIBYTE(unk_ABCE70[7]) = 0; /*0x5fa3cd*/
  unk_ABCE9C = 800; /*0x5fa3d0*/
  unk_ABCEA0 = 600; /*0x5fa3d7*/
  unk_ABCEA4 = 0; /*0x5fa3de*/
  unk_ABCEA5 = 0; /*0x5fa3e1*/
  unk_ABCEA6 = 0; /*0x5fa3e4*/
  unk_ABCEA8 = 1060320051; /*0x5fa3e7*/
  unk_ABCEAC = 1060320051; /*0x5fa3ee*/
  unk_ABCEB0 = 1053609165; /*0x5fa3f5*/
  unk_ABCEB4 = 0; /*0x5fa3fc*/
  unk_ABCEB6 = 0; /*0x5fa3ff*/
  unk_ABCEB8 = 9; /*0x5fa402*/
  unk_ABCEBA = -1; /*0x5fa408*/
  unk_ABCEC4 = 0; /*0x5fa40e*/
  unk_ABCF20 = 81; /*0x5fa411*/
  unk_ABCF24 = 81; /*0x5fa417*/
  unk_ABCEC8 = 0; /*0x5fa41d*/
  return (void*)unk_ABCE70; /*0x5fa421*/
}
}
// 0x55FDB0
namespace gamemd {
AbstractClass * * Options_Screen_DlgProc(HWND hWnd, WPARAM wParam, unsigned int a3, HWND a4)
{
  int result; // eax
  HWND v6; // eax
  HWND v7; // esi
  LRESULT v8; // eax
  LRESULT v9; // eax
  int v10; // ecx
  int v11; // eax
  unsigned int v12; // ebx
  unsigned int v13; // eax
  wchar_t *v14; // edi
  HWND v15; // eax
  HWND v16; // esi
  wchar_t *String; // eax
  HWND DlgItem; // eax
  HWND v19; // edi
  unsigned int *v20; // eax
  LPARAM v21; // edi
  int *v22; // ebx
  int v23; // eax
  int v24; // ecx
  LRESULT v25; // eax
  HWND v26; // eax
  HWND v27; // edi
  HWND v28; // eax
  HWND v29; // eax
  HWND v30; // eax
  HWND v31; // eax
  HWND v32; // edi
  BOOL IsSoundEnabled; // ebx
  HWND v34; // eax
  HWND v35; // edi
  LPARAM v36; // eax
  HWND v37; // eax
  HWND v38; // edi
  LPARAM v39; // eax
  HWND v40; // eax
  HWND v41; // edi
  LPARAM v42; // eax
  float v43; // [esp+0h] [ebp-58h]
  float v44; // [esp+0h] [ebp-58h]
  float v45; // [esp+0h] [ebp-58h]
  char lParam[64]; // [esp+18h] [ebp-40h] BYREF
  int wParama; // [esp+60h] [ebp+8h]
  HWND v48; // [esp+64h] [ebp+Ch]
  HWND WindowLongA; // [esp+68h] [ebp+10h]
  HWND v50; // [esp+68h] [ebp+10h]

  result = BaseDialogProc( (SkirmishDialog *)(hWnd), wParam, a3, (unsigned int)a4); /*0x55fdcd*/
  if ( !result ) /*0x55fdd4*/
  {
    WindowLongA = (HWND)GetWindowLongA(hWnd, 8); /*0x55fde9*/
    if ( wParam > 0x114 ) /*0x55fded*/
    {
      if ( wParam == 1175 ) /*0x560112*/
      {
        byte_ABCF54 = 0; /*0x560124*/
        DlgItem = GetDlgItem(hWnd, 1323); /*0x56012b*/
        v19 = DlgItem; /*0x560133*/
        if ( DlgItem ) /*0x560137*/
        {
          SendMessageA( (HWND)(DlgItem), 0x4ACu, 0, 0); /*0x560143*/
          SendMessageA( (HWND)(v19), 0x406u, 1u, 0x10000); /*0x560152*/
          SendMessageA( (HWND)(v19), 0x405u, 1u, dword_A8EB78 != 0); /*0x56016a*/
        }
        v48 = GetDlgItem(hWnd, 1773); /*0x560176*/
        if ( byte_A8EB95 ) /*0x560181*/
          v20 = (unsigned int *)sub_4A4900(4096, 4096, 16); /*0x56018d*/
        else
          v20 = (unsigned int *)sub_4A4900(1024, 768, 16); /*0x5601a3*/
        v21 = 0; /*0x5601a8*/
        dword_ABCF58 = (unsigned int)v20; /*0x5601aa*/
        v22 = (int *)(v20); /*0x5601b1*/
        wParama = -1; /*0x5601b3*/
        v50 = 0; /*0x5601bb*/
        if ( v20 && *v20 ) /*0x5601c9*/
        {
          do /*0x56024d*/
          {
            v23 = *v22; /*0x5601d2*/
            v24 = v22[1]; /*0x5601d4*/
            v22 += 2; /*0x5601e0*/
            if ( byte_A8EB95 || v23 == 640 || v23 == 800 || v23 == 1024 ) /*0x5601fa*/
            {
              if ( v23 == dword_ABCE94 && v24 == dword_ABCE98 ) /*0x56020a*/
                wParama = (int)v50; /*0x560210*/
              sprintf(lParam, "%d x %d x 16", v23, v24); /*0x560220*/
              v25 = SendMessageA( (HWND)(v48), 0x4BCu, 0, (LPARAM)((LPARAM)((LPARAM)lParam))); /*0x560239*/
              SendMessageA( (HWND)(v48), 0x151u, v25, (LPARAM)((LPARAM)(v21))); /*0x560247*/
              v50 = (HWND)((char *)v50 + 1); /*0x560249*/
            }
            ++v21; /*0x56024f*/
          }
          while ( *v22 ); /*0x56024d*/
        }
        SendMessageA( (HWND)(v48), 0x14Eu, wParama, 0); /*0x560269*/
        dword_82A27C = wParama; /*0x56027b*/
        v26 = GetDlgItem(hWnd, 1295); /*0x560280*/
        v27 = v26; /*0x560282*/
        if ( v26 ) /*0x560286*/
        {
          SendMessageA( (HWND)(v26), 0x4ACu, 0, 0); /*0x560292*/
          SendMessageA( (HWND)(v27), 0x406u, 1u, 0x20000); /*0x5602a1*/
          SendMessageA( (HWND)(v27), 0x405u, 1u, (LPARAM)((LPARAM)(dword_A8EB64))); /*0x5602b2*/
        }
        v28 = GetDlgItem(hWnd, 1537); /*0x5602ba*/
        if ( v28 ) /*0x5602be*/
          SendMessageA( (HWND)(v28), 0xF1u, byte_A8EB7E != 0, 0); /*0x5602d6*/
        v29 = GetDlgItem(hWnd, 1540); /*0x5602de*/
        if ( v29 ) /*0x5602e2*/
          SendMessageA( (HWND)(v29), 0xF1u, byte_A8EB7F != 0, 0); /*0x5602fa*/
        v30 = GetDlgItem(hWnd, 1538); /*0x560302*/
        if ( v30 ) /*0x560306*/
          SendMessageA( (HWND)(v30), 0xF1u, byte_A8EB80 != 0, 0); /*0x56031e*/
        v31 = GetDlgItem(hWnd, 1322); /*0x560326*/
        v32 = v31; /*0x560328*/
        if ( v31 ) /*0x56032c*/
        {
          SendMessageA( (HWND)(v31), 0x4ACu, 0, 0); /*0x560338*/
          SendMessageA( (HWND)(v32), 0x406u, 1u, 393216); /*0x560347*/
          SendMessageA( (HWND)(v32), 0x405u, 1u, 6 - dword_A8EB70); /*0x56035f*/
        }
        IsSoundEnabled = Audio::IsSoundEnabled(); /*0x56036c*/
        v34 = GetDlgItem(hWnd, 1327); /*0x56036e*/
        v35 = v34; /*0x560374*/
        if ( v34 ) /*0x560378*/
        {
          SendMessageA( (HWND)(v34), 0x4AEu, 0, 0); /*0x560384*/
          SendMessageA( (HWND)(v35), 0x406u, 1u, 655360); /*0x560393*/
          v36 = Math::RoundToInt(flt_A8EBA0 * 10.0 + 0.5); /*0x5603a7*/
          SendMessageA( (HWND)(v35), 0x405u, 1u, (LPARAM)((LPARAM)(v36))); /*0x5603b5*/
          EnableWindow(v35, IsSoundEnabled); /*0x5603b9*/
        }
        v37 = GetDlgItem(hWnd, 1330); /*0x5603c5*/
        v38 = v37; /*0x5603cb*/
        if ( v37 ) /*0x5603cf*/
        {
          SendMessageA( (HWND)(v37), 0x4AEu, 0, 0); /*0x5603db*/
          SendMessageA( (HWND)(v38), 0x406u, 1u, 655360); /*0x5603ea*/
          v39 = Math::RoundToInt(flt_A8EB98 * 10.0 + 0.5); /*0x5603fe*/
          SendMessageA( (HWND)(v38), 0x405u, 1u, (LPARAM)((LPARAM)(v39))); /*0x56040c*/
          EnableWindow(v38, IsSoundEnabled); /*0x560410*/
        }
        v40 = GetDlgItem(hWnd, 1334); /*0x56041c*/
        v41 = v40; /*0x560422*/
        if ( v40 ) /*0x560426*/
        {
          SendMessageA( (HWND)(v40), 0x4AEu, 0, 0); /*0x560432*/
          SendMessageA( (HWND)(v41), 0x406u, 1u, 655360); /*0x560441*/
          v42 = Math::RoundToInt(*(float *)&flt_A8EB9C * 10.0 + 0.5); /*0x560455*/
          SendMessageA( (HWND)(v41), 0x405u, 1u, (LPARAM)((LPARAM)(v42))); /*0x560463*/
          EnableWindow(v41, IsSoundEnabled); /*0x560467*/
        }
        byte_ABCF54 = 1; /*0x56046d*/
      }
    }
    else
    {
      switch ( wParam ) /*0x55fdf3*/
      {
        case 0x114u: /*0x55fdf3*/
          if ( (unsigned short)a3 == 5 ) /*0x55ff6c*/
          {
            v12 = IDA_HIWORD(a3); /*0x55ff75*/
            if ( a4 == GetDlgItem(hWnd, 1323) ) /*0x55ff87*/
            {
              v13 = IDA_HIWORD(a3); /*0x55ff8b*/
              if ( v12 ) /*0x55ff8d*/
                v13 = 2; /*0x55ff8f*/
              v14 = (&off_82A248)[v13]; /*0x55ff94*/
              v15 = GetDlgItem(hWnd, 1651); /*0x55ffa1*/
            }
            else if ( a4 == GetDlgItem(hWnd, 1295) ) /*0x55ffe5*/
            {
              v14 = (wchar_t *)off_82A254[v12]; /*0x55ffe7*/
              v15 = GetDlgItem(hWnd, 1648); /*0x55fff3*/
            }
            else
            {
              if ( a4 != GetDlgItem(hWnd, 1322) ) /*0x55ffff*/
              {
                if ( a4 == GetDlgItem(hWnd, 1327) ) /*0x560019*/
                {
                  if ( byte_ABCF54 ) /*0x560022*/
                  {
                    v43 = (double)SendMessageA( (HWND)(a4), 0x400u, 0, 0) * 0.1; /*0x56004e*/
                    Audio::SetScoreVolume((float *)dword_A8EB60, v43, 1); /*0x560051*/
                    return 0; /*0x56005f*/
                  }
                }
                else if ( a4 == GetDlgItem(hWnd, 1330) ) /*0x56006c*/
                {
                  if ( byte_ABCF54 ) /*0x560075*/
                  {
                    v44 = (double)SendMessageA( (HWND)(a4), 0x400u, 0, 0) * 0.1; /*0x5600a1*/
                    Audio::SetSoundVolume((float *)dword_A8EB60, v44, 1); /*0x5600a4*/
                    return 0; /*0x5600b2*/
                  }
                }
                else if ( a4 == GetDlgItem(hWnd, 1334) && byte_ABCF54 ) /*0x5600cc*/
                {
                  v45 = (double)SendMessageA( (HWND)(a4), 0x400u, 0, 0) * 0.1; /*0x5600f8*/
                  Audio::SetVoiceVolume((float *)dword_A8EB60, v45, 1); /*0x5600fb*/
                  return 0; /*0x560109*/
                }
                return 0; /*0x560022*/
              }
              v14 = (wchar_t *)off_82A260[v12]; /*0x560001*/
              v15 = GetDlgItem(hWnd, 1650); /*0x56000d*/
            }
            v16 = v15; /*0x55ffa3*/
            if ( v15 ) /*0x55ffa7*/
            {
              String = (unsigned int)GetStringCSF( (wchar_t *)(v14), 0, (const char *)(g_Str_File_MainOpt_cpp), 553); /*0x55ffbb*/
              SendMessageA( (HWND)(v16), 0x4B2u, 0, (LPARAM)((LPARAM)((LPARAM)String))); /*0x55ffc9*/
              return 0; /*0x55ffd8*/
            }
          }
          break;
        case 2u: /*0x55fdf3*/
          if ( dword_ABCF58 ) /*0x55ff43*/
          {
            RA2_OPDEL(dword_ABCF58); /*0x55ff4a*/
            dword_ABCF58 = 0; /*0x55ff52*/
            return 0; /*0x55ff65*/
          }
          break;
        case 0x111u: /*0x55fdf3*/
          if ( (uint16_t)a3 > 0x686u ) /*0x55fe1c*/
          {
            if ( (uint16_t)a3 == 1773 && IDA_HIWORD(a3) == 1 ) /*0x55feb5*/
            {
              SetDialogParent( (HWND)(hWnd), (HWND)(g_hWnd)); /*0x55fec3*/
              v6 = GetDlgItem(hWnd, 1773); /*0x55feca*/
              v7 = v6; /*0x55fed0*/
              if ( v6 ) /*0x55fed4*/
              {
                v8 = SendMessageA( (HWND)(v6), 0x147u, 0, 0); /*0x55feea*/
                v9 = SendMessageA( (HWND)(v7), 0x150u, v8, 0); /*0x55fef5*/
                v10 = *((unsigned int *)dword_ABCF58 + 2 * v9); /*0x55fefd*/
                dword_ABCE94 = v10; /*0x55ff00*/
                v11 = *((unsigned int *)dword_ABCF58 + 2 * v9 + 1); /*0x55ff06*/
                dword_ABCE98 = v11; /*0x55ff10*/
                if ( v10 != dword_A8EB84 || v11 != dword_A8EB88 ) /*0x55ff1f*/
                {
                  dword_A8EB88 = v11; /*0x55ff27*/
                  dword_A8EB84 = v10; /*0x55ff2d*/
                  return 0; /*0x55ff39*/
                }
              }
            }
          }
          else if ( (uint16_t)a3 == 1670 ) /*0x55fe22*/
          {
            if ( !IDA_HIWORD(a3) ) /*0x55fe66*/
            {
              RA2_OPDEL(dword_ABCF58); /*0x55fe76*/
              dword_ABCF58 = 0; /*0x55fe7e*/
              *(unsigned int *)GetWindowLongA(hWnd, 8) = 1483; /*0x55fe93*/
              return 0; /*0x55fea0*/
            }
          }
          else if ( (uint16_t)a3 >= 0x5CDu && (uint16_t)a3 <= 0x5CEu ) /*0x55fe36*/
          {
            RA2_OPDEL(dword_ABCF58); /*0x55fe42*/
            dword_ABCF58 = 0; /*0x55fe4e*/
            *(unsigned int *)WindowLongA = (uint16_t)a3; /*0x55fe5a*/
            return 0; /*0x55fe63*/
          }
          break;
      }
    }
    return 0; /*0x560474*/
  }
  return (AbstractClass * *)result; /*0x55fe5c*/
}
}
// 0x5509E0
void nullsub_21()
{
  ; /*0x5509e0*/
}

// 0x5512C0
void nullsub_22()
{
  ; /*0x5512c0*/
}

// 0x5517A0
namespace gamemd {
void sub_5517A0()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x5517ac*/
  dbl_ABC8E0 = Math::Sqrt(v0 + v0); /*0x5517be*/
}
} // namespace gamemd

// 0x5517D0
void sub_5517D0()
{
  dbl_ABC930 = dbl_ABC8E0 / 60.0; /*0x5517dc*/
}

// 0x5517F0
void sub_5517F0()
{
  dbl_ABC918 = 1.0 / dbl_ABC930; /*0x5517fc*/
}

// 0x551810
void sub_551810()
{
  dbl_ABC910 = 0.0174532925199433 * 45.0; /*0x55181c*/
}

// 0x551830
void sub_551830()
{
  dbl_ABC8E8 = 0.0174532925199433 * 60.0; /*0x55183c*/
}

// 0x551850
void sub_551850()
{
  dbl_ABC8C0 = 0.0174532925199433 * 90.0; /*0x55185c*/
}

// 0x551870
long long sub_551870()
{
  double v0; // st7
  int64_t result; // rax

  v0 = Math::Sin(dbl_ABC8C0 - dbl_ABC8E8); /*0x551882*/
  result = Math::RoundToInt(v0 * dbl_ABC8E0 * 0.5); /*0x551896*/
  dword_ABC938 = result; /*0x55189b*/
  return result; /*0x5518a0*/
}

// 0x5518B0
void sub_5518B0()
{
  dbl_ABC8F0 = Math::ArcTan((double)dword_ABC938 * 0.00390625); /*0x5518c7*/
}

// 0x5518E0
void sub_5518E0()
{
  dbl_ABC908 = Math::ArcTan((double)(2 * dword_ABC938) / dbl_ABC8E0); /*0x551902*/
}

// 0x551910
long long sub_551910()
{
  int64_t result; // rax

  result = Math::RoundToInt((double)(4 * dword_ABC938) + 0.5); /*0x55192b*/
  dword_ABC92C = result; /*0x551930*/
  return result; /*0x551936*/
}

// 0x551940
namespace gamemd {
int sub_551940()
{
  word_ABC8D8 = 0; /*0x551942*/
  word_ABC8DA = 0; /*0x551948*/
  return 0; /*0x55194e*/
}
} // namespace gamemd

// 0x551950
namespace gamemd {
int sub_551950()
{
  dword_ABC8F8 = 0; /*0x551952*/
  dword_ABC8FC = 0; /*0x551957*/
  dword_ABC900 = 0; /*0x55195c*/
  return 0; /*0x551961*/
}
} // namespace gamemd

// 0x551970
namespace gamemd {
int sub_551970()
{
  dword_ABC928 = 0; /*0x551975*/
  dword_ABC920 = 128; /*0x55197f*/
  dword_ABC924 = 128; /*0x551984*/
  return 128; /*0x551989*/
}
} // namespace gamemd

// 0x551990
namespace gamemd {
int sub_551990()
{
  dword_ABC8C8 = 0; /*0x551992*/
  dword_ABC8CC = 0; /*0x551997*/
  dword_ABC8D0 = 0; /*0x55199c*/
  dword_ABC8D4 = 0; /*0x5519a1*/
  return 0; /*0x5519a6*/
}
} // namespace gamemd

// 0x552830
namespace gamemd {
int sub_552830()
{
  dword_ABC948 = 0; /*0x552832*/
  dword_ABC94C = 0; /*0x552837*/
  dword_ABC950 = 0; /*0x55283c*/
  dword_ABC954 = 0; /*0x552841*/
  return 0; /*0x552846*/
}
} // namespace gamemd

// 0x552850
namespace gamemd {
void sub_552850()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x55285c*/
  dbl_ABC960 = Math::Sqrt(v0 + v0); /*0x55286e*/
}
} // namespace gamemd

// 0x552880
void sub_552880()
{
  dbl_ABC9B0 = dbl_ABC960 / 60.0; /*0x55288c*/
}

// 0x5528A0
void sub_5528A0()
{
  dbl_ABC998 = 1.0 / dbl_ABC9B0; /*0x5528ac*/
}

// 0x5528C0
void sub_5528C0()
{
  dbl_ABC990 = 0.0174532925199433 * 45.0; /*0x5528cc*/
}

// 0x5528E0
void sub_5528E0()
{
  dbl_ABC968 = 0.0174532925199433 * 60.0; /*0x5528ec*/
}

// 0x552900
void sub_552900()
{
  dbl_ABC940 = 0.0174532925199433 * 90.0; /*0x55290c*/
}

// 0x552920
long long sub_552920()
{
  double v0; // st7
  int64_t result; // rax

  v0 = Math::Sin(dbl_ABC940 - dbl_ABC968); /*0x552932*/
  result = Math::RoundToInt(v0 * dbl_ABC960 * 0.5); /*0x552946*/
  dword_ABC9B8 = result; /*0x55294b*/
  return result; /*0x552950*/
}

// 0x552960
void sub_552960()
{
  dbl_ABC970 = Math::ArcTan((double)dword_ABC9B8 * 0.00390625); /*0x552977*/
}

// 0x552990
void sub_552990()
{
  dbl_ABC988 = Math::ArcTan((double)(2 * dword_ABC9B8) / dbl_ABC960); /*0x5529b2*/
}

// 0x5529C0
long long sub_5529C0()
{
  int64_t result; // rax

  result = Math::RoundToInt((double)(4 * dword_ABC9B8) + 0.5); /*0x5529db*/
  dword_ABC9AC = result; /*0x5529e0*/
  return result; /*0x5529e6*/
}

// 0x5529F0
namespace gamemd {
int sub_5529F0()
{
  word_ABC958 = 0; /*0x5529f2*/
  word_ABC95A = 0; /*0x5529f8*/
  return 0; /*0x5529fe*/
}
} // namespace gamemd

// 0x552A00
namespace gamemd {
int sub_552A00()
{
  dword_ABC978 = 0; /*0x552a02*/
  dword_ABC97C = 0; /*0x552a07*/
  dword_ABC980 = 0; /*0x552a0c*/
  return 0; /*0x552a11*/
}
} // namespace gamemd

// 0x552A20
namespace gamemd {
int sub_552A20()
{
  dword_ABC9A8 = 0; /*0x552a25*/
  dword_ABC9A0 = 128; /*0x552a2f*/
  dword_ABC9A4 = 128; /*0x552a34*/
  return 128; /*0x552a39*/
}
} // namespace gamemd

// 0x554430
namespace gamemd {
void sub_554430()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x55443c*/
  dbl_ABC9E8 = Math::Sqrt(v0 + v0); /*0x55444e*/
}
} // namespace gamemd

// 0x554460
void sub_554460()
{
  dbl_ABCA68 = dbl_ABC9E8 / 60.0; /*0x55446c*/
}

// 0x554480
void sub_554480()
{
  dbl_ABCA38 = 1.0 / dbl_ABCA68; /*0x55448c*/
}

// 0x5544A0
void sub_5544A0()
{
  dbl_ABCA30 = 0.0174532925199433 * 45.0; /*0x5544ac*/
}

// 0x5544C0
void sub_5544C0()
{
  dbl_ABC9F0 = 0.0174532925199433 * 60.0; /*0x5544cc*/
}

// 0x5544E0
void sub_5544E0()
{
  dbl_ABC9C8 = 0.0174532925199433 * 90.0; /*0x5544ec*/
}

// 0x554500
long long sub_554500()
{
  double v0; // st7
  int64_t result; // rax

  v0 = Math::Sin(dbl_ABC9C8 - dbl_ABC9F0); /*0x554512*/
  result = Math::RoundToInt(v0 * dbl_ABC9E8 * 0.5); /*0x554526*/
  dword_ABCA70 = result; /*0x55452b*/
  return result; /*0x554530*/
}

// 0x554540
void sub_554540()
{
  dbl_ABC9F8 = Math::ArcTan((double)dword_ABCA70 * 0.00390625); /*0x554557*/
}

// 0x554570
void sub_554570()
{
  dbl_ABCA28 = Math::ArcTan((double)(2 * dword_ABCA70) / dbl_ABC9E8); /*0x554592*/
}

// 0x5545A0
long long sub_5545A0()
{
  int64_t result; // rax

  result = Math::RoundToInt((double)(4 * dword_ABCA70) + 0.5); /*0x5545bb*/
  dword_ABCA64 = result; /*0x5545c0*/
  return result; /*0x5545c6*/
}

// 0x5545D0
namespace gamemd {
int sub_5545D0()
{
  word_ABC9E0 = 0; /*0x5545d2*/
  word_ABC9E2 = 0; /*0x5545d8*/
  return 0; /*0x5545de*/
}
} // namespace gamemd

// 0x5545E0
namespace gamemd {
int sub_5545E0()
{
  dword_ABCA00 = 0; /*0x5545e2*/
  dword_ABCA04 = 0; /*0x5545e7*/
  dword_ABCA08 = 0; /*0x5545ec*/
  return 0; /*0x5545f1*/
}
} // namespace gamemd

// 0x554600
namespace gamemd {
int sub_554600()
{
  dword_ABCA60 = 0; /*0x554605*/
  dword_ABCA58 = 128; /*0x55460f*/
  dword_ABCA5C = 128; /*0x554614*/
  return 128; /*0x554619*/
}
} // namespace gamemd

// 0x554620
namespace gamemd {
int sub_554620()
{
  dword_ABC9D0 = 0; /*0x554622*/
  dword_ABC9D4 = 0; /*0x554627*/
  dword_ABC9D8 = 0; /*0x55462c*/
  dword_ABC9DC = 0; /*0x554631*/
  return 0; /*0x554636*/
}
} // namespace gamemd

// 0x554640
namespace gamemd {
int sub_554640()
{
  dword_ABCA14 = 0; /*0x554647*/
  dword_ABCA18 = 0; /*0x55464c*/
  byte_ABCA1C = 1; /*0x554651*/
  byte_ABCA1D = 0; /*0x554658*/
  dword_ABCA10 = (int)&DynamicVectorClass_LightSourceClass___vftable; /*0x55465d*/
  dword_ABCA24 = 10; /*0x554667*/
  dword_ABCA20 = 0; /*0x554671*/
  return atexit(sub_554680); /*0x55467c*/
}
} // namespace gamemd

// 0x554680
namespace gamemd {
void sub_554680()
{
  dword_ABCA10 = (int)&VectorClass_LightSourceClass___vftable; /*0x554688*/
  if ( dword_ABCA14 && byte_ABCA1D ) /*0x55469c*/
  {
    RA2_OPDEL(dword_ABCA14); /*0x55469f*/
    dword_ABCA14 = 0; /*0x5546a7*/
  }
  byte_ABCA1D = 0; /*0x5546ad*/
  dword_ABCA18 = 0; /*0x5546b3*/
}
} // namespace gamemd

// 0x5546C0
namespace gamemd {
int sub_5546C0()
{
  dword_ABCA44 = 0; /*0x5546c7*/
  dword_ABCA48 = 0; /*0x5546cc*/
  byte_ABCA4C = 1; /*0x5546d1*/
  byte_ABCA4D = 0; /*0x5546d8*/
  dword_ABCA40 = (int)&DynamicVectorClass_LightSourceClass_PendingCellClass___vftable; /*0x5546dd*/
  dword_ABCA54 = 10; /*0x5546e7*/
  dword_ABCA50 = 0; /*0x5546f1*/
  return atexit(sub_554700); /*0x5546fc*/
}
} // namespace gamemd

// 0x554700
namespace gamemd {
void sub_554700()
{
  if ( (byte_ABC9C0 & 1) == 0 ) /*0x55470a*/
  {
    dword_ABCA40 = (int)&VectorClass_LightSourceClass_PendingCellClass___vftable; /*0x55470e*/
    byte_ABC9C0 |= 1u; /*0x554721*/
    if ( dword_ABCA44 ) /*0x554727*/
    {
      if ( byte_ABCA4D ) /*0x554731*/
      {
        RA2_OPDEL(dword_ABCA44); /*0x554734*/
        dword_ABCA44 = 0; /*0x55473c*/
      }
    }
    byte_ABCA4D = 0; /*0x554746*/
    dword_ABCA48 = 0; /*0x55474d*/
  }
}
} // namespace gamemd

// 0x5558C0
namespace gamemd {
int sub_5558C0()
{
  dword_ABCA88 = 0; /*0x5558c2*/
  dword_ABCA8C = 0; /*0x5558c7*/
  dword_ABCA90 = 0; /*0x5558cc*/
  dword_ABCA94 = 0; /*0x5558d1*/
  return 0; /*0x5558d6*/
}
} // namespace gamemd

// 0x555AC0
int * Color_QuantizeRGB(int * a1, int * a2, int * a3)
{
  int v4; // eax
  int v5; // eax
  int *result; // eax
  int v7; // ecx

  v4 = *a1; /*0x555ac4*/
  if ( *a1 >= 1000 ) /*0x555acb*/
    v4 = 1000; /*0x555acd*/
  *a1 = v4; /*0x555ad2*/
  v5 = *a2; /*0x555ad4*/
  if ( *a2 >= 1000 ) /*0x555adb*/
    v5 = 1000; /*0x555add*/
  *a2 = v5; /*0x555ae2*/
  result = a3; /*0x555ae4*/
  v7 = *a3; /*0x555ae8*/
  if ( *a3 >= 1000 ) /*0x555af0*/
    v7 = 1000; /*0x555af2*/
  *a3 = v7; /*0x555af7*/
  *a1 &= (*a1 <= 0) - 1; /*0x555b05*/
  *a2 &= (*a2 <= 0) - 1; /*0x555b13*/
  *a3 &= (*a3 <= 0) - 1; /*0x555b21*/
  if ( dword_A8EB78 ) /*0x555b2c*/
  {
    if ( dword_A8EB78 == 1 ) /*0x555b2f*/
    {
      *a1 &= 0xFFFFFFC0; /*0x555b53*/
      *a2 &= 0xFFFFFFC0; /*0x555b5b*/
      *a3 &= 0xFFFFFFC0; /*0x555b63*/
    }
    else if ( dword_A8EB78 == 2 ) /*0x555b32*/
    {
      *a1 &= 0xFFFFFFE0; /*0x555b39*/
      *a2 &= 0xFFFFFFE0; /*0x555b41*/
      *a3 &= 0xFFFFFFE0; /*0x555b49*/
    }
  }
  else
  {
    *a1 &= 0xFFFFFF80; /*0x555b6d*/
    *a2 &= 0xFFFFFF80; /*0x555b74*/
    *a3 &= 0xFFFFFF80; /*0x555b7b*/
  }
  return result; /*0x555b40*/
}

// 0x555B90
namespace gamemd {
int sub_555B90()
{
  dword_ABCAA0 = 0; /*0x555b92*/
  dword_ABCAA4 = 0; /*0x555b97*/
  dword_ABCAA8 = 0; /*0x555b9c*/
  dword_ABCAAC = 0; /*0x555ba1*/
  return 0; /*0x555ba6*/
}
} // namespace gamemd

// 0x555BB0
namespace gamemd {
void sub_555BB0()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x555bbc*/
  dbl_ABCAB8 = Math::Sqrt(v0 + v0); /*0x555bce*/
}
} // namespace gamemd

// 0x555BE0
void sub_555BE0()
{
  dbl_ABCB08 = dbl_ABCAB8 / 60.0; /*0x555bec*/
}

// 0x555C00
void sub_555C00()
{
  dbl_ABCAF0 = 1.0 / dbl_ABCB08; /*0x555c0c*/
}

// 0x555C20
void sub_555C20()
{
  dbl_ABCAE8 = 0.0174532925199433 * 45.0; /*0x555c2c*/
}

// 0x555C40
void sub_555C40()
{
  dbl_ABCAC0 = 0.0174532925199433 * 60.0; /*0x555c4c*/
}

// 0x555C60
void sub_555C60()
{
  dbl_ABCA98 = 0.0174532925199433 * 90.0; /*0x555c6c*/
}

// 0x555C80
long long sub_555C80()
{
  double v0; // st7
  int64_t result; // rax

  v0 = Math::Sin(dbl_ABCA98 - dbl_ABCAC0); /*0x555c92*/
  result = Math::RoundToInt(v0 * dbl_ABCAB8 * 0.5); /*0x555ca6*/
  dword_ABCB10 = result; /*0x555cab*/
  return result; /*0x555cb0*/
}

// 0x555CC0
void sub_555CC0()
{
  dbl_ABCAC8 = Math::ArcTan((double)dword_ABCB10 * 0.00390625); /*0x555cd7*/
}

// 0x555CF0
void sub_555CF0()
{
  dbl_ABCAE0 = Math::ArcTan((double)(2 * dword_ABCB10) / dbl_ABCAB8); /*0x555d12*/
}

// 0x555D20
long long sub_555D20()
{
  int64_t result; // rax

  result = Math::RoundToInt((double)(4 * dword_ABCB10) + 0.5); /*0x555d3b*/
  dword_ABCB04 = result; /*0x555d40*/
  return result; /*0x555d46*/
}

// 0x555D50
namespace gamemd {
int sub_555D50()
{
  word_ABCAB0 = 0; /*0x555d52*/
  word_ABCAB2 = 0; /*0x555d58*/
  return 0; /*0x555d5e*/
}
} // namespace gamemd

// 0x555D60
namespace gamemd {
int sub_555D60()
{
  dword_ABCAD0 = 0; /*0x555d62*/
  dword_ABCAD4 = 0; /*0x555d67*/
  dword_ABCAD8 = 0; /*0x555d6c*/
  return 0; /*0x555d71*/
}
} // namespace gamemd

// 0x555D80
namespace gamemd {
int sub_555D80()
{
  dword_ABCB00 = 0; /*0x555d85*/
  dword_ABCAF8 = 128; /*0x555d8f*/
  dword_ABCAFC = 128; /*0x555d94*/
  return 128; /*0x555d99*/
}
} // namespace gamemd

// 0x556510
namespace gamemd {
int E4Recv_556510::sub_556510()
{

  *(unsigned int *)this->__pad_0 = (unsigned int)&vt_LightConvertClass;
  return sub_490400((int)this);

}
} // namespace gamemd

// 0x556520
namespace gamemd {
LightConvertClass * E4Recv_556520::sub_556520(unsigned int * Block, char a2)
{

  *(unsigned int *)this->__pad_0 = (unsigned int)&vt_LightConvertClass;
  sub_490400((int)this); /*0x556529*/
  if ( (a2 & 1) != 0 ) /*0x556533*/
    __3_YAXPAX_Z(this); /*0x556536*/
  return this->__pad_0; /*0x556540*/

}
} // namespace gamemd

// 0x556790
namespace gamemd {
void sub_556790()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x55679c*/
  dbl_ABCB38 = Math::Sqrt(v0 + v0); /*0x5567ae*/
}
} // namespace gamemd

// 0x5567C0
void sub_5567C0()
{
  dbl_ABCBA0 = dbl_ABCB38 / 60.0; /*0x5567cc*/
}

// 0x5567E0
void sub_5567E0()
{
  dbl_ABCB70 = 1.0 / dbl_ABCBA0; /*0x5567ec*/
}

// 0x556800
void sub_556800()
{
  dbl_ABCB68 = 0.0174532925199433 * 45.0; /*0x55680c*/
}

// 0x556820
void sub_556820()
{
  dbl_ABCB40 = 0.0174532925199433 * 60.0; /*0x55682c*/
}

// 0x556840
void sub_556840()
{
  dbl_ABCB18 = 0.0174532925199433 * 90.0; /*0x55684c*/
}

// 0x556860
long long sub_556860()
{
  double v0; // st7
  int64_t result; // rax

  v0 = Math::Sin(dbl_ABCB18 - dbl_ABCB40); /*0x556872*/
  result = Math::RoundToInt(v0 * dbl_ABCB38 * 0.5); /*0x556886*/
  dword_ABCBA8 = result; /*0x55688b*/
  return result; /*0x556890*/
}

// 0x5568A0
void sub_5568A0()
{
  dbl_ABCB48 = Math::ArcTan((double)dword_ABCBA8 * 0.00390625); /*0x5568b7*/
}

// 0x5568D0
void sub_5568D0()
{
  dbl_ABCB60 = Math::ArcTan((double)(2 * dword_ABCBA8) / dbl_ABCB38); /*0x5568f2*/
}

// 0x556900
long long sub_556900()
{
  int64_t result; // rax

  result = Math::RoundToInt((double)(4 * dword_ABCBA8) + 0.5); /*0x55691b*/
  dword_ABCB9C = result; /*0x556920*/
  return result; /*0x556926*/
}

// 0x556930
namespace gamemd {
int sub_556930()
{
  word_ABCB30 = 0; /*0x556932*/
  word_ABCB32 = 0; /*0x556938*/
  return 0; /*0x55693e*/
}
} // namespace gamemd

// 0x556940
namespace gamemd {
int sub_556940()
{
  dword_ABCB50 = 0; /*0x556942*/
  dword_ABCB54 = 0; /*0x556947*/
  dword_ABCB58 = 0; /*0x55694c*/
  return 0; /*0x556951*/
}
} // namespace gamemd

// 0x556960
namespace gamemd {
int sub_556960()
{
  dword_ABCB98 = 0; /*0x556965*/
  dword_ABCB90 = 128; /*0x55696f*/
  dword_ABCB94 = 128; /*0x556974*/
  return 128; /*0x556979*/
}
} // namespace gamemd

// 0x556980
namespace gamemd {
int sub_556980()
{
  dword_ABCB20 = 0; /*0x556982*/
  dword_ABCB24 = 0; /*0x556987*/
  dword_ABCB28 = 0; /*0x55698c*/
  dword_ABCB2C = 0; /*0x556991*/
  return 0; /*0x556996*/
}
} // namespace gamemd

// 0x5569A0
namespace gamemd {
int sub_5569A0()
{
  dword_ABCB7C = 0; /*0x5569a7*/
  dword_ABCB80 = 0; /*0x5569ac*/
  byte_ABCB84 = 1; /*0x5569b1*/
  byte_ABCB85 = 0; /*0x5569b8*/
  dword_ABCB78 = (int)&DynamicVectorClass_LineTrail___vftable; /*0x5569bd*/
  dword_ABCB8C = 10; /*0x5569c7*/
  dword_ABCB88 = 0; /*0x5569d1*/
  return atexit(sub_5569E0); /*0x5569dc*/
}
} // namespace gamemd

// 0x5569E0
namespace gamemd {
void sub_5569E0()
{
  dword_ABCB78 = (int)&VectorClass_LineTrail___vftable; /*0x5569e8*/
  if ( dword_ABCB7C && byte_ABCB85 ) /*0x5569fc*/
  {
    RA2_OPDEL(dword_ABCB7C); /*0x5569ff*/
    dword_ABCB7C = 0; /*0x556a07*/
  }
  byte_ABCB85 = 0; /*0x556a0d*/
  dword_ABCB80 = 0; /*0x556a13*/
}
} // namespace gamemd

// 0x557210
namespace gamemd {
int sub_557210()
{
  dword_ABCBB0 = 0; /*0x557212*/
  dword_ABCBB4 = 0; /*0x557217*/
  dword_ABCBB8 = 0; /*0x55721c*/
  dword_ABCBBC = 0; /*0x557221*/
  return 0; /*0x557226*/
}
} // namespace gamemd

// 0x5581A0
namespace gamemd {
int E4Recv_5581A0::sub_5581A0(GaugeClass * aP1)
{

  ((ControlClass *)((unsigned int *)this))->CtorFromData(aP1); /*0x5581a9*/
  *((unsigned char *)this + 44) = *(unsigned char *)(aP1 + 44); /*0x5581b1*/
  *((unsigned char *)this + 45) = *(unsigned char *)(aP1 + 45); /*0x5581b7*/
  *((unsigned char *)this + 46) = *(unsigned char *)(aP1 + 46); /*0x5581bd*/
  *((unsigned int *)this + 12) = *(unsigned int *)(aP1 + 48); /*0x5581c3*/
  *((unsigned int *)this + 13) = *(unsigned int *)(aP1 + 52); /*0x5581c9*/
  *((unsigned int *)this + 14) = *(unsigned int *)(aP1 + 56); /*0x5581cf*/
  *(unsigned int *)this = (unsigned int)&vt_GaugeClass;
  return this; /*0x5581da*/

}
} // namespace gamemd

// 0x5584F0
namespace gamemd {
size_t sub_5584F0(char * a1, void * a2)
{
  size_t v2; // esi
  int v3; // eax
  char *v4; // ecx

  if ( !a1 || !a2 ) /*0x5584f6*/
    return 0; /*0x55852a*/
  v2 = *(unsigned int *)(a1 + 2); /*0x5584fc*/
  v3 = *a1 - 3; /*0x558500*/
  v4 = &a1[*((int16_t *)a1 + 3) + 8]; /*0x558507*/
  if ( v3 ) /*0x55850b*/
  {
    if ( v3 != 1 ) /*0x55850f*/
    {
      memcpy( (void *)(a2), (const void *)(v4), v2); /*0x558513*/
      return v2; /*0x55851f*/
    }
    BitStreamIOLCW((uint8_t *)v4, (unsigned int)a2, v2); /*0x558520*/
  }
  return v2; /*0x55851f*/
}
} // namespace gamemd

// 0x558530
namespace gamemd {
int sub_558530()
{
  dword_ABCBC8 = 0; /*0x558532*/
  dword_ABCBCC = 0; /*0x558537*/
  dword_ABCBD0 = 0; /*0x55853c*/
  dword_ABCBD4 = 0; /*0x558541*/
  return 0; /*0x558546*/
}
} // namespace gamemd

// 0x558550
namespace gamemd {
void sub_558550()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x55855c*/
  dbl_ABCBE0 = Math::Sqrt(v0 + v0); /*0x55856e*/
}
} // namespace gamemd

// 0x558580
void sub_558580()
{
  dbl_ABCC30 = dbl_ABCBE0 / 60.0; /*0x55858c*/
}

// 0x5585A0
void sub_5585A0()
{
  dbl_ABCC18 = 1.0 / dbl_ABCC30; /*0x5585ac*/
}

// 0x5585C0
void sub_5585C0()
{
  dbl_ABCC10 = 0.0174532925199433 * 45.0; /*0x5585cc*/
}

// 0x5585E0
void sub_5585E0()
{
  dbl_ABCBE8 = 0.0174532925199433 * 60.0; /*0x5585ec*/
}

// 0x558600
void sub_558600()
{
  dbl_ABCBC0 = 0.0174532925199433 * 90.0; /*0x55860c*/
}

// 0x558620
long long sub_558620()
{
  double v0; // st7
  int64_t result; // rax

  v0 = Math::Sin(dbl_ABCBC0 - dbl_ABCBE8); /*0x558632*/
  result = Math::RoundToInt(v0 * dbl_ABCBE0 * 0.5); /*0x558646*/
  dword_ABCC38 = result; /*0x55864b*/
  return result; /*0x558650*/
}

// 0x558660
void sub_558660()
{
  dbl_ABCBF0 = Math::ArcTan((double)dword_ABCC38 * 0.00390625); /*0x558677*/
}

// 0x558690
void sub_558690()
{
  dbl_ABCC08 = Math::ArcTan((double)(2 * dword_ABCC38) / dbl_ABCBE0); /*0x5586b2*/
}

// 0x5586C0
long long sub_5586C0()
{
  int64_t result; // rax

  result = Math::RoundToInt((double)(4 * dword_ABCC38) + 0.5); /*0x5586db*/
  dword_ABCC2C = result; /*0x5586e0*/
  return result; /*0x5586e6*/
}

// 0x5586F0
namespace gamemd {
int sub_5586F0()
{
  word_ABCBD8 = 0; /*0x5586f2*/
  word_ABCBDA = 0; /*0x5586f8*/
  return 0; /*0x5586fe*/
}
} // namespace gamemd

// 0x558700
namespace gamemd {
int sub_558700()
{
  dword_ABCBF8 = 0; /*0x558702*/
  dword_ABCBFC = 0; /*0x558707*/
  dword_ABCC00 = 0; /*0x55870c*/
  return 0; /*0x558711*/
}
} // namespace gamemd

// 0x558720
namespace gamemd {
int sub_558720()
{
  dword_ABCC28 = 0; /*0x558725*/
  dword_ABCC20 = 128; /*0x55872f*/
  dword_ABCC24 = 128; /*0x558734*/
  return 128; /*0x558739*/
}
} // namespace gamemd

// 0x5588E0
namespace gamemd {
LRESULT sub_5588E0(HWND hDlg, int a2, HWND hWnd, int a4)
{
  LRESULT result; // eax
  LRESULT v7; // ebp
  HWND DlgItem; // eax
  HWND v9; // eax
  HWND v10; // eax
  LRESULT v11; // [esp+Ch] [ebp-4h]

  result = GetWindowLongA(hDlg, 8); /*0x5588eb*/
  v11 = result; /*0x5588f9*/
  if ( a2 == 1319 ) /*0x5588fd*/
  {
    if ( a4 == 1 ) /*0x558949*/
    {
      result = SendMessageA( (HWND)(hWnd), 0x18Bu, 0, 0); /*0x558963*/
      if ( result > 0 ) /*0x558967*/
      {
        result = SendMessageA( (HWND)(hWnd), 0x188u, 0, 0); /*0x558973*/
        if ( result != -1 ) /*0x558978*/
        {
          v7 = SendMessageA( (HWND)(hWnd), 0x199u, result, 0); /*0x55898c*/
          if ( *(unsigned char *)(v7 + 436) && !*(unsigned char *)(v7 + 437) || (v7 = *(unsigned int *)(v11 + 12)) != 0 ) /*0x5589ab*/
          {
            DlgItem = GetDlgItem(hDlg, 1318); /*0x5589b3*/
            SendMessageA( (HWND)(DlgItem), 0x4B2u, 0, (LPARAM)((LPARAM)(v7))); /*0x5589be*/
          }
          v9 = GetDlgItem(hDlg, 1318); /*0x5589c6*/
          SetFocus(v9); /*0x5589c9*/
          v10 = GetDlgItem(hDlg, 1318); /*0x5589de*/
          return SendMessageA( (HWND)(v10), 0xB1u, 0, -1); /*0x5589e1*/
        }
      }
    }
  }
  else if ( a2 == 1670 ) /*0x558905*/
  {
    if ( !a4 ) /*0x558930*/
      *(unsigned int *)(result + 24) = 2; /*0x558938*/
  }
  else if ( a2 == 1735 && !a4 ) /*0x558916*/
  {
    *(unsigned int *)(result + 24) = 1; /*0x55891e*/
  }
  return result; /*0x55891c*/
}
} // namespace gamemd

// 0x558A30
namespace gamemd {
int sub_558A30(HWND hWnd, unsigned int a2, unsigned int a3, HWND a4)
{
  int result; // eax
  unsigned int v5; // ebx
  LONG WindowLongA; // eax
  LONG v7; // edi

  result = BaseDialogProc( (SkirmishDialog *)(hWnd), a2, a3, (unsigned int)a4); /*0x558a4a*/
  if ( !result ) /*0x558a51*/
  {
    if ( a2 > 0x216 ) /*0x558a5d*/
    {
      if ( a2 == 1175 ) /*0x558b38*/
      {
        SendDlgItemMessageA(hWnd, 1317, 0x4A6u, 0xF9u, 2); /*0x558b52*/
        SendDlgItemMessageA(hWnd, 1317, 0x4A6u, 0x38u, 255); /*0x558b66*/
        SendDlgItemMessageA(hWnd, 1317, 0x4A6u, 0, 315); /*0x558b7a*/
      }
    }
    else
    {
      switch ( a2 ) /*0x558a63*/
      {
        case 0x216u: /*0x558a63*/
          return (uint8_t)((Window *)a4)->ClampToScreen(); /*0x558b2f*/
        case 0xFu: /*0x558a63*/
          Dialog::StopBink( (void *)(hWnd)); /*0x558b0b*/
          return 1; /*0x558b19*/
        case 0x111u: /*0x558a63*/
          v5 = IDA_HIWORD(a3); /*0x558a89*/
          WindowLongA = GetWindowLongA(hWnd, 8); /*0x558a8c*/
          v7 = WindowLongA; /*0x558a98*/
          switch ( (uint16_t)a3 ) /*0x558a9a*/
          {
            case 0x40Fu: /*0x558a9a*/
              if ( !v5 ) /*0x558af3*/
              {
                *(unsigned int *)(WindowLongA + 24) = 1039; /*0x558af9*/
                return 0; /*0x558b06*/
              }
              break;
            case 0x525u: /*0x558a9a*/
              if ( v5 == 2 && SendMessageA( (HWND)(a4), 0x18Bu, 0, 0) > 0 ) /*0x558adb*/
              {
                *(unsigned int *)(v7 + 24) = 1039; /*0x558ae1*/
                return 0; /*0x558aee*/
              }
              break;
            case 0x686u: /*0x558a9a*/
              *(unsigned int *)(WindowLongA + 24) = 2; /*0x558ab0*/
              return 0; /*0x558abd*/
          }
          break;
      }
    }
    return 0; /*0x558b7c*/
  }
  return result; /*0x558ab7*/
}
} // namespace gamemd

// 0x558B90
namespace gamemd {
int sub_558B90(HWND hWnd, unsigned int a2, unsigned int a3, HWND a4)
{
  int result; // eax
  HWND DlgItem; // eax

  result = BaseDialogProc( (SkirmishDialog *)(hWnd), a2, a3, (unsigned int)a4); /*0x558baa*/
  if ( !result ) /*0x558bb1*/
  {
    if ( a2 > 0x216 ) /*0x558bbd*/
    {
      if ( a2 == 1175 ) /*0x558c20*/
      {
        DlgItem = GetDlgItem(hWnd, 1318); /*0x558c4f*/
        SendMessageA( (HWND)(DlgItem), 0xC5u, 0x4Fu, 0); /*0x558c56*/
        SendDlgItemMessageA(hWnd, 1319, 0x4A6u, 0xF9u, 2); /*0x558c74*/
        SendDlgItemMessageA(hWnd, 1319, 0x4A6u, 0x38u, 255); /*0x558c88*/
        SendDlgItemMessageA(hWnd, 1319, 0x4A6u, 0, 315); /*0x558c9c*/
      }
      else if ( a2 == 1242 ) /*0x558c25*/
      {
        *(unsigned int *)(GetWindowLongA(hWnd, 8) + 24) = 1; /*0x558c32*/
        return 0; /*0x558c3d*/
      }
    }
    else
    {
      switch ( a2 ) /*0x558bbf*/
      {
        case 0x216u: /*0x558bbf*/
          return (uint8_t)((Window *)a4)->ClampToScreen(); /*0x558c17*/
        case 0xFu: /*0x558bbf*/
          Dialog::StopBink( (void *)(hWnd)); /*0x558bf3*/
          return 1; /*0x558c01*/
        case 0x111u: /*0x558bbf*/
          sub_5588E0(hWnd, (uint16_t)a3, a4, IDA_HIWORD(a3)); /*0x558be3*/
          return 0; /*0x558bee*/
      }
    }
    return 0; /*0x558c9e*/
  }
  return result; /*0x558be8*/
}
} // namespace gamemd

// 0x558CB0
namespace gamemd {
int sub_558CB0(HWND hWnd, unsigned int a2, unsigned int a3, int * a4)
{
  int result; // eax
  unsigned int v5; // ebx
  LONG WindowLongA; // eax

  result = BaseDialogProc( (SkirmishDialog *)(hWnd), a2, a3, (unsigned int)a4); /*0x558cca*/
  if ( !result ) /*0x558cd1*/
  {
    if ( a2 > 0x216 ) /*0x558cdd*/
    {
      if ( a2 == 1175 ) /*0x558d7a*/
      {
        SendDlgItemMessageA(hWnd, 1320, 0x4A6u, 0xF9u, 2); /*0x558d94*/
        SendDlgItemMessageA(hWnd, 1320, 0x4A6u, 0x38u, 255); /*0x558da8*/
        SendDlgItemMessageA(hWnd, 1320, 0x4A6u, 0, 315); /*0x558dbc*/
      }
    }
    else
    {
      switch ( a2 ) /*0x558ce3*/
      {
        case 0x216u: /*0x558ce3*/
          return (uint8_t)((Window *)(a4))->ClampToScreen(); /*0x558d71*/
        case 0xFu: /*0x558ce3*/
          Dialog::StopBink( (void *)(hWnd)); /*0x558d4d*/
          return 1; /*0x558d5b*/
        case 0x111u: /*0x558ce3*/
          v5 = IDA_HIWORD(a3); /*0x558cfb*/
          WindowLongA = GetWindowLongA(hWnd, 8); /*0x558cfe*/
          if ( (uint16_t)a3 == 1670 ) /*0x558d10*/
          {
            if ( !v5 ) /*0x558d35*/
            {
              *(unsigned int *)(WindowLongA + 24) = 2; /*0x558d3d*/
              return 0; /*0x558d48*/
            }
          }
          else if ( (uint16_t)a3 == 1736 && !v5 ) /*0x558d1d*/
          {
            *(unsigned int *)(WindowLongA + 24) = 1; /*0x558d25*/
            return 0; /*0x558d30*/
          }
          break;
      }
    }
    return 0; /*0x558dbe*/
  }
  return result; /*0x558d23*/
}
} // namespace gamemd

// 0x5595F0
namespace gamemd {
int E4Recv_5595F0::sub_5595F0(char * Buffer)
{

  int v3; // eax
  const char *vtable2; // [esp-4h] [ebp-78h]
  CCFileClass v6; // [esp+8h] [ebp-6Ch] BYREF
  int v7[3]; // [esp+60h] [ebp-14h] BYREF
  int v8; // [esp+6Ch] [ebp-8h]

  CCFileClass::Construct3((int)&v6); /*0x5595fb*/
  do /*0x559633*/
  {
    vtable2 = (const char *)((unsigned int *)this)[0]; /*0x559607*/
    v3 = rand(); /*0x559608*/
    sprintf(Buffer, "SAVE%04lX.%3s", v3, vtable2); /*0x559614*/
    ((gamemd::FileClass*)(&v6))->SetFileName(Buffer); /*0x559621*/
  }
  while ( (uint8_t)((CCFileClass *)(&v6))->Open(0) == 1 ); /*0x559633*/
  *(unsigned int *)v6.CDFileClass = (unsigned int)&vt_CCFileClass;
  v8 = 0; /*0x559641*/
  ((Vector *)((int)v7))->Clear((int)((Vector *)((int)v7))); /*0x559649*/
  *(unsigned int *)v6.CDFileClass = (unsigned int)&off_7E1668;
  return ((BufferIOFileClass *)((BufferIOFileClass *)&v6))->Dtor(); /*0x55965f*/

}
} // namespace gamemd

// 0x559D30
int sub_559D30(const void * a1, const void * a2)
{
  return -CompareFileTime((const FILETIME *)(*(unsigned int *)a1 + 428), (const FILETIME *)(*(unsigned int *)a2 + 428)); /*0x559d51*/
}

// 0x55A4B0
namespace gamemd {
int sub_55A4B0()
{
  dword_ABCC48 = 0; /*0x55a4b2*/
  dword_ABCC4C = 0; /*0x55a4b7*/
  dword_ABCC50 = 0; /*0x55a4bc*/
  dword_ABCC54 = 0; /*0x55a4c1*/
  return 0; /*0x55a4c6*/
}
} // namespace gamemd

// 0x55A4D0
namespace gamemd {
void sub_55A4D0()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x55a4dc*/
  dbl_ABCC60 = Math::Sqrt(v0 + v0); /*0x55a4ee*/
}
} // namespace gamemd

// 0x55A500
void sub_55A500()
{
  dbl_ABCCB0 = dbl_ABCC60 / 60.0; /*0x55a50c*/
}

// 0x55A520
void sub_55A520()
{
  dbl_ABCC98 = 1.0 / dbl_ABCCB0; /*0x55a52c*/
}

// 0x55A540
void sub_55A540()
{
  dbl_ABCC90 = 0.0174532925199433 * 45.0; /*0x55a54c*/
}

// 0x55A560
void sub_55A560()
{
  dbl_ABCC68 = 0.0174532925199433 * 60.0; /*0x55a56c*/
}

// 0x55A580
void sub_55A580()
{
  dbl_ABCC40 = 0.0174532925199433 * 90.0; /*0x55a58c*/
}

// 0x55A5A0
long long sub_55A5A0()
{
  double v0; // st7
  int64_t result; // rax

  v0 = Math::Sin(dbl_ABCC40 - dbl_ABCC68); /*0x55a5b2*/
  result = Math::RoundToInt(v0 * dbl_ABCC60 * 0.5); /*0x55a5c6*/
  dword_ABCCB8 = result; /*0x55a5cb*/
  return result; /*0x55a5d0*/
}

// 0x55A5E0
void sub_55A5E0()
{
  dbl_ABCC70 = Math::ArcTan((double)dword_ABCCB8 * 0.00390625); /*0x55a5f7*/
}

// 0x55A610
void sub_55A610()
{
  dbl_ABCC88 = Math::ArcTan((double)(2 * dword_ABCCB8) / dbl_ABCC60); /*0x55a632*/
}

// 0x55A640
long long sub_55A640()
{
  int64_t result; // rax

  result = Math::RoundToInt((double)(4 * dword_ABCCB8) + 0.5); /*0x55a65b*/
  dword_ABCCAC = result; /*0x55a660*/
  return result; /*0x55a666*/
}

// 0x55A670
namespace gamemd {
int sub_55A670()
{
  word_ABCC58 = 0; /*0x55a672*/
  word_ABCC5A = 0; /*0x55a678*/
  return 0; /*0x55a67e*/
}
} // namespace gamemd

// 0x55A680
namespace gamemd {
int sub_55A680()
{
  dword_ABCC78 = 0; /*0x55a682*/
  dword_ABCC7C = 0; /*0x55a687*/
  dword_ABCC80 = 0; /*0x55a68c*/
  return 0; /*0x55a691*/
}
} // namespace gamemd

// 0x55A6A0
namespace gamemd {
int sub_55A6A0()
{
  dword_ABCCA8 = 0; /*0x55a6a5*/
  dword_ABCCA0 = 128; /*0x55a6af*/
  dword_ABCCA4 = 128; /*0x55a6b4*/
  return 128; /*0x55a6b9*/
}
} // namespace gamemd

// 0x55AA60
namespace gamemd {
int IPersistStream_Load(int * a1, int * a2, int a3)
{
  int *v3; // esi
  int result; // eax
  int v5; // eax
  int v6; // ebx
  int v7; // eax
  int *v8; // [esp-4h] [ebp-18h]

  v3 = a2; /*0x55aa61*/
  if ( !a2 ) /*0x55aa68*/
    return -2147467261; /*0x55aa6b*/
  v5 = *a2; /*0x55aa78*/
  v8 = a2; /*0x55aa83*/
  a2 = (int *)a1; /*0x55aa84*/
  result = (*(int (**)(int *, int **, int, unsigned int))(v5 + 16))( (int *)(v8), (int **)(&a2), 4, 0); /*0x55aa88*/
  if ( result >= 0 ) /*0x55aa8d*/
  {
    v6 = *v3; /*0x55aa92*/
    v7 = (*(int (**)(LocomotionClass *, unsigned int))(*(unsigned int *)a1->ILocomotion + 36))( (LocomotionClass *)(a1), 0); /*0x55aa98*/
    result = (*(int (**)(int *, LocomotionClass *, int))(v6 + 16))( (int *)(v3), (LocomotionClass *)(a1), v7); /*0x55aa9e*/
    if ( result >= 0 ) /*0x55aaa4*/
    {
      if ( a3 ) /*0x55aaac*/
        a1->Dirty = 0; /*0x55aaae*/
    }
  }
  return result; /*0x55aa6a*/
}
} // namespace gamemd

// 0x55AC40
void nullsub_164(int a1)
{
  ; /*0x55ac40*/
}

// 0x55AD30
namespace gamemd {
int sub_55AD30()
{
  dword_ABCCC8 = 0; /*0x55ad32*/
  dword_ABCCCC = 0; /*0x55ad37*/
  dword_ABCCD0 = 0; /*0x55ad3c*/
  dword_ABCCD4 = 0; /*0x55ad41*/
  return 0; /*0x55ad46*/
}
} // namespace gamemd

// 0x55AD50
namespace gamemd {
void sub_55AD50()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x55ad5c*/
  dbl_ABCCE0 = Math::Sqrt(v0 + v0); /*0x55ad6e*/
}
} // namespace gamemd

// 0x55AD80
void sub_55AD80()
{
  dbl_ABCD30 = dbl_ABCCE0 / 60.0; /*0x55ad8c*/
}

// 0x55ADA0
void sub_55ADA0()
{
  dbl_ABCD18 = 1.0 / dbl_ABCD30; /*0x55adac*/
}

// 0x55ADC0
void sub_55ADC0()
{
  dbl_ABCD10 = 0.0174532925199433 * 45.0; /*0x55adcc*/
}

// 0x55ADE0
void sub_55ADE0()
{
  dbl_ABCCE8 = 0.0174532925199433 * 60.0; /*0x55adec*/
}

// 0x55AE00
void sub_55AE00()
{
  dbl_ABCCC0 = 0.0174532925199433 * 90.0; /*0x55ae0c*/
}

// 0x55AE20
long long sub_55AE20()
{
  double v0; // st7
  int64_t result; // rax

  v0 = Math::Sin(dbl_ABCCC0 - dbl_ABCCE8); /*0x55ae32*/
  result = Math::RoundToInt(v0 * dbl_ABCCE0 * 0.5); /*0x55ae46*/
  dword_ABCD38 = result; /*0x55ae4b*/
  return result; /*0x55ae50*/
}

// 0x55AE60
void sub_55AE60()
{
  dbl_ABCCF0 = Math::ArcTan((double)dword_ABCD38 * 0.00390625); /*0x55ae77*/
}

// 0x55AE90
void sub_55AE90()
{
  dbl_ABCD08 = Math::ArcTan((double)(2 * dword_ABCD38) / dbl_ABCCE0); /*0x55aeb2*/
}

// 0x55AEC0
long long sub_55AEC0()
{
  int64_t result; // rax

  result = Math::RoundToInt((double)(4 * dword_ABCD38) + 0.5); /*0x55aedb*/
  dword_ABCD2C = result; /*0x55aee0*/
  return result; /*0x55aee6*/
}

// 0x55AEF0
namespace gamemd {
int sub_55AEF0()
{
  dword_ABCCD8 = 0; /*0x55aef2*/
  return 0; /*0x55aefe*/
}
} // namespace gamemd

// 0x55AF00
namespace gamemd {
int sub_55AF00()
{
  dword_ABCCF8 = 0; /*0x55af02*/
  dword_ABCCFC = 0; /*0x55af07*/
  dword_ABCD00 = 0; /*0x55af0c*/
  return 0; /*0x55af11*/
}
} // namespace gamemd

// 0x55AF20
namespace gamemd {
int sub_55AF20()
{
  dword_ABCD28 = 0; /*0x55af25*/
  dword_ABCD20 = 128; /*0x55af2f*/
  dword_ABCD24 = 128; /*0x55af34*/
  return 128; /*0x55af39*/
}
} // namespace gamemd

// 0x55BB90
namespace gamemd {
int WriteCompressionBlock(Pipe * aP0, unsigned int aP1, CCINIClass * aP2, int *a3, int a5)
{
  int result; // eax
  int *v6; // esi
  unsigned char *v7; // edi
  int v8; // ecx
  unsigned char *v9; // ecx

  result = 0; /*0x55bb90*/
  if ( aP1 ) /*0x55bb9a*/
  {
    if ( aP1 > 0xD ) /*0x55bba7*/
    {
      v6 = a3; /*0x55bbcf*/
      result = CompressLCWBuffer(aP2, a3, a5); /*0x55bbd6*/
      if ( result ) /*0x55bbdd*/
        return result; /*0x55bbdd*/
    }
    else
    {
      *aP2 = aP1 + 17; /*0x55bbb0*/
      v7 = aP2 + 1; /*0x55bbb3*/
      do /*0x55bbbd*/
      {
        *v7++ = *aP0++; /*0x55bbb8*/
        --aP1; /*0x55bbbc*/
      }
      while ( aP1 ); /*0x55bbbd*/
      v6 = a3; /*0x55bbbf*/
      *a3 = v7 - aP2; /*0x55bbc5*/
    }
  }
  else
  {
    v6 = a3; /*0x55bb9c*/
    *a3 = 0; /*0x55bba0*/
  }
  v8 = *v6; /*0x55bbdf*/
  aP2[v8] = 17; /*0x55bbe1*/
  v9 = &aP2[v8 + 1]; /*0x55bbe7*/
  *v9 = 0; /*0x55bbe8*/
  v9[1] = 0; /*0x55bbeb*/
  *v6 += 3; /*0x55bbef*/
  return result; /*0x55bbf2*/
}
} // namespace gamemd

// 0x55C9E0
namespace gamemd {
int sub_55C9E0()
{
  dword_ABCD68 = 0; /*0x55c9e2*/
  dword_ABCD6C = 0; /*0x55c9e7*/
  dword_ABCD70 = 0; /*0x55c9ec*/
  dword_ABCD74 = 0; /*0x55c9f1*/
  return 0; /*0x55c9f6*/
}
} // namespace gamemd

// 0x55CA00
namespace gamemd {
void sub_55CA00()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x55ca0c*/
  dbl_ABCD80 = Math::Sqrt(v0 + v0); /*0x55ca1e*/
}
} // namespace gamemd

// 0x55CA30
void sub_55CA30()
{
  dbl_ABCDF0 = dbl_ABCD80 / 60.0; /*0x55ca3c*/
}

// 0x55CA50
void sub_55CA50()
{
  dbl_ABCDD0 = 1.0 / dbl_ABCDF0; /*0x55ca5c*/
}

// 0x55CA70
void sub_55CA70()
{
  dbl_ABCDC8 = 0.0174532925199433 * 45.0; /*0x55ca7c*/
}

// 0x55CA90
void sub_55CA90()
{
  dbl_ABCD98 = 0.0174532925199433 * 60.0; /*0x55ca9c*/
}

// 0x55CAB0
void sub_55CAB0()
{
  dbl_ABCD60 = 0.0174532925199433 * 90.0; /*0x55cabc*/
}

// 0x55CAD0
long long sub_55CAD0()
{
  double v0; // st7
  int64_t result; // rax

  v0 = Math::Sin(dbl_ABCD60 - dbl_ABCD98); /*0x55cae2*/
  result = Math::RoundToInt(v0 * dbl_ABCD80 * 0.5); /*0x55caf6*/
  dword_ABCDF8 = result; /*0x55cafb*/
  return result; /*0x55cb00*/
}

// 0x55CB10
void sub_55CB10()
{
  dbl_ABCDA0 = Math::ArcTan((double)dword_ABCDF8 * 0.00390625); /*0x55cb27*/
}

// 0x55CB40
void sub_55CB40()
{
  dbl_ABCDC0 = Math::ArcTan((double)(2 * dword_ABCDF8) / dbl_ABCD80); /*0x55cb62*/
}

// 0x55CB70
long long sub_55CB70()
{
  int64_t result; // rax

  result = Math::RoundToInt((double)(4 * dword_ABCDF8) + 0.5); /*0x55cb8b*/
  dword_ABCDEC = result; /*0x55cb90*/
  return result; /*0x55cb96*/
}

// 0x55CBA0
namespace gamemd {
int sub_55CBA0()
{
  word_ABCD78 = 0; /*0x55cba2*/
  word_ABCD7A = 0; /*0x55cba8*/
  return 0; /*0x55cbae*/
}
} // namespace gamemd

// 0x55CBB0
namespace gamemd {
int sub_55CBB0()
{
  dword_ABCDB0 = 0; /*0x55cbb2*/
  dword_ABCDB4 = 0; /*0x55cbb7*/
  dword_ABCDB8 = 0; /*0x55cbbc*/
  return 0; /*0x55cbc1*/
}
} // namespace gamemd

// 0x55CBD0
namespace gamemd {
int sub_55CBD0()
{
  dword_ABCDE8 = 0; /*0x55cbd5*/
  dword_ABCDE0 = 128; /*0x55cbdf*/
  dword_ABCDE4 = 128; /*0x55cbe4*/
  return 128; /*0x55cbe9*/
}
} // namespace gamemd

// 0x55CC00
void sub_55CC00()
{
  byte_ABCD58 = 1; /*0x55cc00*/
}

// 0x55CC10
void sub_55CC10()
{
  byte_ABCD58 = 0; /*0x55cc10*/
}

// 0x55E410
void nullsub_23()
{
  ; /*0x55e410*/
}

// 0x55F760
namespace gamemd {
int sub_55F760()
{
  dword_ABCE28 = 0; /*0x55f762*/
  dword_ABCE2C = 0; /*0x55f767*/
  dword_ABCE30 = 0; /*0x55f76c*/
  dword_ABCE34 = 0; /*0x55f771*/
  return 0; /*0x55f776*/
}
} // namespace gamemd

// 0x55F780
namespace gamemd {
void sub_55F780()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x55f78c*/
  dbl_ABCE40 = Math::Sqrt(v0 + v0); /*0x55f79e*/
}
} // namespace gamemd

// 0x55F7B0
void sub_55F7B0()
{
  dbl_ABCF48 = dbl_ABCE40 / 60.0; /*0x55f7bc*/
}

// 0x55F7D0
void sub_55F7D0()
{
  dbl_ABCF30 = 1.0 / dbl_ABCF48; /*0x55f7dc*/
}

// 0x55F7F0
void sub_55F7F0()
{
  dbl_ABCF28 = 0.0174532925199433 * 45.0; /*0x55f7fc*/
}

// 0x55F810
void sub_55F810()
{
  dbl_ABCE48 = 0.0174532925199433 * 60.0; /*0x55f81c*/
}

// 0x55F830
void sub_55F830()
{
  dbl_ABCE20 = 0.0174532925199433 * 90.0; /*0x55f83c*/
}

// 0x55F850
long long sub_55F850()
{
  double v0; // st7
  int64_t result; // rax

  v0 = Math::Sin(dbl_ABCE20 - dbl_ABCE48); /*0x55f862*/
  result = Math::RoundToInt(v0 * dbl_ABCE40 * 0.5); /*0x55f876*/
  dword_ABCF50 = result; /*0x55f87b*/
  return result; /*0x55f880*/
}

// 0x55F890
void sub_55F890()
{
  dbl_ABCE50 = Math::ArcTan((double)dword_ABCF50 * 0.00390625); /*0x55f8a7*/
}

// 0x55F8C0
void sub_55F8C0()
{
  dbl_ABCE68 = Math::ArcTan((double)(2 * dword_ABCF50) / dbl_ABCE40); /*0x55f8e2*/
}

// 0x55F8F0
long long sub_55F8F0()
{
  int64_t result; // rax

  result = Math::RoundToInt((double)(4 * dword_ABCF50) + 0.5); /*0x55f90b*/
  dword_ABCF44 = result; /*0x55f910*/
  return result; /*0x55f916*/
}

// 0x55F920
namespace gamemd {
int sub_55F920()
{
  word_ABCE38 = 0; /*0x55f922*/
  word_ABCE3A = 0; /*0x55f928*/
  return 0; /*0x55f92e*/
}
} // namespace gamemd

// 0x55F930
namespace gamemd {
int sub_55F930()
{
  dword_ABCE58 = 0; /*0x55f932*/
  dword_ABCE5C = 0; /*0x55f937*/
  dword_ABCE60 = 0; /*0x55f93c*/
  return 0; /*0x55f941*/
}
} // namespace gamemd

// 0x55F950
namespace gamemd {
int sub_55F950()
{
  dword_ABCF40 = 0; /*0x55f955*/
  dword_ABCF38 = 128; /*0x55f95f*/
  dword_ABCF3C = 128; /*0x55f964*/
  return 128; /*0x55f969*/
}
} // namespace gamemd

// 0x55F980
namespace gamemd {
int sub_55F980(HWND hWnd, unsigned int a2, int a3, unsigned int a4)
{
  int result; // eax
  unsigned int *WindowLongA; // eax
  wchar_t *StringCSF; // edi
  HWND DlgItem; // eax

  result = BaseDialogProc( (SkirmishDialog *)(hWnd), a2, a3, a4); /*0x55f999*/
  if ( !result ) /*0x55f9a0*/
  {
    WindowLongA = (unsigned int *)GetWindowLongA(hWnd, 8); /*0x55f9a9*/
    if ( a2 == 273 ) /*0x55f9b5*/
    {
      if ( (uint16_t)a3 == 1473 ) /*0x55fa08*/
      {
        *WindowLongA = 1; /*0x55fa20*/
      }
      else if ( (uint16_t)a3 == 1738 ) /*0x55fa10*/
      {
        *WindowLongA = 2; /*0x55fa13*/
        return 0; /*0x55fa1d*/
      }
    }
    else if ( a2 == 1175 ) /*0x55f9bd*/
    {
      StringCSF = GetStringCSF( (wchar_t *)(aTxtAboutToTryM), 0, (const char *)(g_Str_File_MainOpt_cpp), 162); /*0x55f9db*/
      DlgItem = GetDlgItem(hWnd, 1499); /*0x55f9dd*/
      SendMessageA( (HWND)(DlgItem), 0x4B2u, 0, (LPARAM)((LPARAM)((LPARAM)StringCSF))); /*0x55f9ec*/
      return 0; /*0x55f9f7*/
    }
    return 0; /*0x55fa26*/
  }
  return result; /*0x55f9f2*/
}
} // namespace gamemd
