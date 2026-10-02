// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/E4Recv_6C6540_e4.hpp"
#include "e4/classes/E4Recv_6C8840_e4.hpp"
#include "e4/classes/E4Recv_6C8900_e4.hpp"
#include "e4/classes/E4Recv_6C89B0_e4.hpp"
#include "e4/classes/E4Recv_6C8B10_e4.hpp"
#include "e4/classes/E4Recv_6C8E70_e4.hpp"
#include "e4/classes/E4Recv_6C96E0_e4.hpp"
#include "e4/classes/E4Recv_6C9780_e4.hpp"
#include "e4/classes/E4Recv_6C9940_e4.hpp"
#include "e4/classes/E4Recv_6C9960_e4.hpp"
#include "e4/classes/E4Recv_6C9AC0_e4.hpp"
#include "e4/classes/E4Recv_6C9F10_e4.hpp"
#include "e4/classes/E4Recv_6CA1E0_e4.hpp"
#include "e4/classes/E4Recv_6CA5A0_e4.hpp"
#include "e4/classes/E4Recv_6CE570_e4.hpp"
#include "e4/classes/E4Recv_6CF8F0_e4.hpp"
#include "e4/classes/E4Recv_6CFE10_e4.hpp"
#include "e4/classes/Array_e4.hpp"
#include "e4/classes/CellStruct_e4.hpp"
#include "e4/classes/Debug_e4.hpp"
#include "e4/classes/Math_e4.hpp"
#include "e4/classes/String_e4.hpp"
#include "e4/classes/Timer_e4.hpp"
#include "e4/classes/WideString_e4.hpp"
#include "e4/classes/LinkedList_flat_e4.hpp"
#include "e4/classes/CellClass_e4.hpp"
#include "e4/classes/ObjectClass_e4.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/Tactical_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/Cell_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/classes/HouseClass_e4.hpp"
#include "e4/classes/House_e4.hpp"
#include "e4/classes/ConvertClass_e4.hpp"
#include "e4/classes/BombClass_e4.hpp"
#include "e4/classes/Dialog_e4.hpp"
#include "e4/classes/E4Recv_6A87F0_e4.hpp"
#include "e4/classes/E4Recv_6A93F0_e4.hpp"
#include "e4/classes/SkirmishDialog_e4.hpp"
#include "e4/classes/Coord_e4.hpp"
#include "e4/classes/BuildingType_e4.hpp"
#include "e4/classes/E4Recv_6D1570_e4.hpp"
#include "e4/classes/E4Recv_6D1E80_e4.hpp"
#include "e4/classes/E4Recv_6D4E00_e4.hpp"
#include "e4/classes/E4Recv_6E0290_e4.hpp"
#include "e4/classes/E4Recv_6E2790_e4.hpp"
#include "e4/classes/GadgetClass_e4.hpp"
#include "e4/classes/TechnoClass_e4.hpp"
#include "e4/classes/SessionClass_e4.hpp"
#include "e4/classes/ObjectTypeClass_e4.hpp"
#include "e4/classes/TextRenderer_e4.hpp"
#include "e4/classes/Rect_Point_e4.hpp"
#include "e4/classes/ResultNode_e4.hpp"
#include "e4/classes/Stream_e4.hpp"

// 0x6C6F50
namespace gamemd {
int ProcessGameResults(char a1)
{
    unsigned int v7 = 0;  /* G37 hoist */
    unsigned int v26 = 0;  /* G37 hoist */
    unsigned int v20 = 0;  /* G37 hoist */
    unsigned int v17 = 0;  /* G37 hoist */
    unsigned int v15 = 0;  /* G37 hoist */
    unsigned int v13 = 0;  /* G37 hoist */
    unsigned int v10 = 0;  /* G37 hoist */
  unsigned int v2;
  char *inited; // eax
  unsigned int v5;
  unsigned int v8;
  unsigned int v11;
  ObjectClass *v19; // esi
  char *eax31; // eax
  IUnknown *v21; // esi
  unsigned int v30;
  IUnknown *v33; // esi
  IUnknown *v41; // esi
  IUnknown *v44; // esi
  IUnknown *v49; // esi
  IUnknown *v52; // esi
  IUnknown * v55;
  CampaignScore *v57; // edi
  CampaignScore **ecx71; // ecx
  unsigned int v59;
  CampaignScore *eax72; // eax
  ObjectClass *v60; // ebx
  ObjectClass *v61; // eax
  IUnknown *v62; // ecx
  IUnknown *v68; // ebp
  IUnknown *v73; // esi
  IUnknown *v86; // esi
  char *eax130; // eax
  char *v87; // eax
  IUnknown *v89; // esi
  char *v90; // eax
  char *v91; // eax
  char *ModuleInternalVersion; // eax
  char *v93; // eax
  char *v94; // eax
  char *v97; // eax
  char *v98; // eax
  IUnknown *v101; // esi
  IUnknown *v104; // eax
  ObjectClass *v110; // edi
  char *eax169; // eax
  ObjectClass *v113; // edi
  char *eax172; // eax
  ObjectClass *v116; // edi
  char *eax175; // eax
  IUnknown *v118; // edi
  ObjectClass *v127; // edi
  char *eax191; // eax
  ObjectClass *v130; // edi
  char *eax194; // eax
  ObjectClass *v138; // edi
  char *eax204; // eax
  ObjectClass *v143; // edi
  char *eax211; // eax
  ObjectClass *v148; // edi
  char *eax218; // eax
  ObjectClass *v153; // edi
  char *eax225; // eax
  int i; // edi
  int j; // edi
  int k; // edi
  int m; // edi
  ObjectClass *v167; // edi
  char *eax247; // eax
  int n; // edi
  ObjectClass *v173; // edi
  char *eax254; // eax
  int ii; // edi
  ObjectClass *v179; // edi
  char *eax261; // eax
  int jj; // edi
  ObjectClass *v185; // edi
  char *eax268; // eax
  ObjectClass *v190; // edi
  char *eax275; // eax
  int kk; // edi
  ObjectClass *v196; // edi
  char *eax282; // eax
  int mm; // edi
  ObjectClass *v202; // edi
  char *eax289; // eax
  int nn; // edi
  ObjectClass *v208; // edi
  char *eax296; // eax
  ObjectClass *v213; // edi
  char *eax303; // eax
  ObjectClass *v218; // edi
  char *eax310; // eax
  ObjectClass *v222; // esi
  char *eax313; // eax
  IUnknown *v224; // edi
  IUnknown *v225; // ebp
  IUnknown *v226; // esi
  SIZE_T dwTotalPhys; // esi
  char *vfptr; // esi
  int X; // ecx
  AbstractClass *v252; // esi
  AbstractClass *v258; // esi
  unsigned int v262[3]; // [esp+24h] [ebp-8394h] BYREF
  rc_ptr_base v264; // [esp+34h] [ebp-8384h] BYREF
  char v266; // [esp+3Fh] [ebp-8379h]
  ObjectClass *aP2; // [esp+40h] [ebp-8378h]
  IUnknown *v268; // [esp+44h] [ebp-8374h]
  IUnknown *v269; // [esp+48h] [ebp-8370h]
  IUnknown *v270; // [esp+4Ch] [ebp-836Ch]
  struct _FILETIME LastWriteTime; // [esp+50h] [ebp-8368h] BYREF
  const CHAR *v272; // [esp+58h] [ebp-8360h] BYREF
  char v273; // [esp+5Ch] [ebp-835Ch]
  int v274; // [esp+60h] [ebp-8358h]
  int v275; // [esp+64h] [ebp-8354h]
  int v276; // [esp+68h] [ebp-8350h]
  HANDLE hFile; // [esp+6Ch] [ebp-834Ch]
  int v278; // [esp+70h] [ebp-8348h]
  int16_t v279; // [esp+74h] [ebp-8344h]
  int16_t v280; // [esp+76h] [ebp-8342h]
  char v281; // [esp+78h] [ebp-8340h]
  int v282; // [esp+7Ch] [ebp-833Ch] BYREF
  unsigned char v283[28]; // [esp+80h] [ebp-8338h] BYREF
  IUnknown *v284[8]; // [esp+9Ch] [ebp-831Ch]
  struct _MEMORYSTATUS Buffer; // [esp+BCh] [ebp-82FCh] BYREF
  CHAR v286[128]; // [esp+DCh] [ebp-82DCh] BYREF
  CHAR Filename[280]; // [esp+298h] [ebp-8120h] BYREF

  v266 = a1;
  v262[0] = 0;
  v262[1] = 0;
  aP2 = 0;
  v269 = 0;
  if ( *(&g_MatrixTransformState + 2274) && HouseClass_Player == (int)((IUnknown *))*(&g_MatrixTransformState + 2274) )
  {
    ((ResultNode *)(v262))->CleanupList();
    return;
  }
  ((Debug *)0)->Log();
  v2 = dword_B779D4;
  char * v3 = (char *)operator new(0x10u);
  if ( v3 )
    inited = TerrainInitMap(v3,(char *)((RandomStruct *)&((unsigned int *)(stru_830620))[72452]), v2);
  else
    inited = 0;
  LinkedList_flat::PushFront(v262, (IUnknown *)inited);
  if ( g_GameMode_Current == (int)((CellStruct *))4 && g_GameOptionsFlags == 3 )
  {
    unsigned int v23 = 0;  /* G37 hoist */
    unsigned int v23 = 0;  /* G37 hoist */
    unsigned int v23 = 0;  /* G37 hoist */
    unsigned int v23 = 0;  /* G37 hoist */
    unsigned int v23 = 0;  /* G37 hoist */
    unsigned int v23 = 0;  /* G37 hoist */
    unsigned int v35 = 0;  /* G37 hoist */
    unsigned int v32 = 0;  /* G37 hoist */
    unsigned int v29 = 0;  /* G37 hoist */
    unsigned int v23 = 0;  /* G37 hoist */
    unsigned int v32 = 0;  /* G37 hoist */
    unsigned int v29 = 0;  /* G37 hoist */
    unsigned int v23 = 0;  /* G37 hoist */
    unsigned int v51 = 0;  /* G37 hoist */
    unsigned int v48 = 0;  /* G37 hoist */
    unsigned int v46 = 0;  /* G37 hoist */
    unsigned int v43 = 0;  /* G37 hoist */
    unsigned int v40 = 0;  /* G37 hoist */
    unsigned int v37 = 0;  /* G37 hoist */
    unsigned int v35 = 0;  /* G37 hoist */
    unsigned int v32 = 0;  /* G37 hoist */
    unsigned int v29 = 0;  /* G37 hoist */
    unsigned int v23 = 0;  /* G37 hoist */
    unsigned int v43 = 0;  /* G37 hoist */
    unsigned int v40 = 0;  /* G37 hoist */
    unsigned int v37 = 0;  /* G37 hoist */
    unsigned int v35 = 0;  /* G37 hoist */
    unsigned int v32 = 0;  /* G37 hoist */
    unsigned int v29 = 0;  /* G37 hoist */
    unsigned int v23 = 0;  /* G37 hoist */
    unsigned int v54 = 0;  /* G37 hoist */
    unsigned int v51 = 0;  /* G37 hoist */
    unsigned int v48 = 0;  /* G37 hoist */
    unsigned int v46 = 0;  /* G37 hoist */
    unsigned int v43 = 0;  /* G37 hoist */
    unsigned int v40 = 0;  /* G37 hoist */
    unsigned int v37 = 0;  /* G37 hoist */
    unsigned int v35 = 0;  /* G37 hoist */
    unsigned int v32 = 0;  /* G37 hoist */
    unsigned int v29 = 0;  /* G37 hoist */
    unsigned int v23 = 0;  /* G37 hoist */
    unsigned int v46 = 0;  /* G37 hoist */
    unsigned int v43 = 0;  /* G37 hoist */
    unsigned int v40 = 0;  /* G37 hoist */
    unsigned int v37 = 0;  /* G37 hoist */
    unsigned int v35 = 0;  /* G37 hoist */
    unsigned int v32 = 0;  /* G37 hoist */
    unsigned int v29 = 0;  /* G37 hoist */
    unsigned int v23 = 0;  /* G37 hoist */
    v5 = g_GameDifficulty;
    char * v6 = (char *)operator new(0x10u);
    if ( v6 )
      unsigned int v7 =
    else
      v7 = 0;
    LinkedList_flat::PushFront(v262, (IUnknown *)v7);
    v8 = dword_B77D6C;
    if ( !a1 )
      v8 = dword_B73814;
  }
  else
  {
    v8 = dword_B77D6C;
  }
  char * v9 = (char *)operator new(0x10u);
  if ( v9 )
    char * v10 = TerrainInitMap(v9,(char *)((RandomStruct *)&((unsigned int *)(stru_830620))[72436]),(int)((IUnknown *)v8));
  else
    v10 = 0;
  LinkedList_flat::PushFront(v262, (IUnknown *)v10);
  v11 = dword_B779C4;
  char * v12 = (char *)operator new(0x10u);
  if ( v12 )
    char * v13 = TerrainInitMap(v12,(char *)((RandomStruct *)&((unsigned int *)(stru_830620))[72428]), v11);
  else
    v13 = 0;
  LinkedList_flat::PushFront(v262, (IUnknown *)v13);
  if ( g_GameMode_Current == (int)((CellStruct *))4 && g_GameOptionsFlags == 3 && a1 )
    dword_B779C4 = 0;
  IDA_LOBYTE(v264.vfptr) = DataGlobal_00A8B8C2 == 1;
  char * v14 = (char *)operator new(0x10u);
  if ( v14 )
    char * v15 = (char *)(((String *)(v14))->AllocAndCopy((RandomStruct *)&((unsigned int *)(stru_830620))[72420], (IUnknown *)v264.vfptr));
  else
    v15 = 0;
  LinkedList_flat::PushFront(v262, (IUnknown *)v15);
  IDA_LOBYTE(v264.vfptr) = DataGlobal_A8B8C1 == (unsigned char [58523])(1);
  char * v16 = (char *)operator new(0x10u);
  if ( v16 )
    char * v17 = (char *)(((String *)(v16))->AllocAndCopy((RandomStruct *)&((unsigned int *)(stru_830620))[72412], (IUnknown *)v264.vfptr));
  else
    v17 = 0;
  LinkedList_flat::PushFront(v262, (IUnknown *)v17);
  v19 = (ObjectClass *)(*(unsigned int *)&((unsigned int *)(g_OverlayTypeConfig))[17744] / 0x3Cu);
  eax31 = (char *)operator new(0x10u);
  if ( eax31 )
    char * v20 = TerrainInitMap(eax31,(char *)((RandomStruct *)&((unsigned int *)(stru_830620))[72404]), (IUnknown *)v19);
  else
    v20 = 0;
  LinkedList_flat::PushFront(v262, (IUnknown *)v20);
  v21 = (IUnknown *)g_Rules_Bases;
  char * v22 = (char *)operator new(0x10u);
  if ( v22 )
    char * v23 = TerrainInitMap(v22, (RandomStruct *)&((unsigned int *)(stru_830620))[72396], v21);
  else
    v23 = 0;
  LinkedList_flat::PushFront(v262, (IUnknown *)v23);
  bool v24 = (unsigned char)ShortGame != 0;
  char * v25 = (char *)operator new(0x10u);
  if ( v25 )
    char * v26 = TerrainInitMap(v25, (RandomStruct *)&((unsigned int *)(stru_830620))[72388], (IUnknown *)v24);
  else
    v26 = 0;
  LinkedList_flat::PushFront(v262, (IUnknown *)v26);
  bool v27 = (unsigned char)SWAllowed != 0;
  char * v28 = (char *)operator new(0x10u);
  if ( v28 )
    char * v29 = TerrainInitMap(v28, (RandomStruct *)&((unsigned int *)(stru_830620))[72380], (IUnknown *)v27);
  else
    v29 = 0;
  LinkedList_flat::PushFront(v262, (IUnknown *)v29);
  v30 = g_ScenarioFlags;
  char * v31 = (char *)operator new(0x10u);
  if ( v31 )
    char * v32 = TerrainInitMap(v31, (RandomStruct *)&((unsigned int *)(stru_830620))[72372], v30);
  else
    v32 = 0;
  LinkedList_flat::PushFront(v262, (IUnknown *)v32);
  v33 = (IUnknown *)(((unsigned char)MCVRedeploy == 1) + 2 * ((unsigned char)g_Rules_ShortGame == 1));
  char * v34 = (char *)operator new(0x10u);
  if ( v34 )
    char * v35 = TerrainInitMap(v34, (RandomStruct *)&((unsigned int *)(stru_830620))[72364], v33);
  else
    v35 = 0;
  LinkedList_flat::PushFront(v262, (IUnknown *)v35);
  IDA_LOBYTE(v264.vfptr) = (unsigned char)Bases != 0;
  char * v36 = (char *)operator new(0x10u);
  if ( v36 )
    char * v37 = String::AllocAndCopy(v36, (RandomStruct *)&((unsigned int *)(stru_830620))[72356], (IUnknown *)v264.vfptr);
  else
    v37 = 0;
  LinkedList_flat::PushFront(v262, (IUnknown *)v37);
  bool v38 = (unsigned char)Crates != 0;
  char * v39 = (char *)operator new(0x10u);
  if ( v39 )
    char * v40 = TerrainInitMap(v39, (RandomStruct *)&((unsigned int *)(stru_830620))[72348], (IUnknown *)v38);
  else
    v40 = 0;
  LinkedList_flat::PushFront(v262, (IUnknown *)v40);
  v41 = (IUnknown *)g_Rules_AlliesAllowed;
  char * v42 = (char *)operator new(0x10u);
  if ( v42 )
    char * v43 = TerrainInitMap(v42, (RandomStruct *)&((unsigned int *)(stru_830620))[72340], v41);
  else
    v43 = 0;
  LinkedList_flat::PushFront(v262, (IUnknown *)v43);
  v44 = (IUnknown *)g_Rules_MultiEngineer;
  char * v45 = (char *)operator new(0x10u);
  if ( v45 )
    char * v46 = TerrainInitMap(v45, (RandomStruct *)&((unsigned int *)(stru_830620))[59868], v44);
  else
    v46 = 0;
  LinkedList_flat::PushFront(v262, (IUnknown *)v46);
  char * v47 = (char *)operator new(0x10u);
  if ( v47 )
    char * v48 = BuildResultPacket(v47, &((unsigned int *)(stru_830620))[72332], (IUnknown *)&Destination);
  else
    v48 = 0;
  LinkedList_flat::PushFront(v262, (IUnknown *)v48);
  v49 = (IUnknown *)dword_B77780;
  char * v50 = (char *)operator new(0x10u);
  if ( v50 )
    char * v51 = TerrainInitMap(v50, (RandomStruct *)&((unsigned int *)(stru_830620))[72324], v49);
  else
    v51 = 0;
  LinkedList_flat::PushFront(v262, (IUnknown *)v51);
  v52 = (IUnknown *)dword_B77CE0;
  char * v53 = (char *)operator new(0x10u);
  if ( v53 )
    char * v54 = TerrainInitMap(v53, (RandomStruct *)&stru_830620[72316], v52);
  else
    v54 = 0;
  LinkedList_flat::PushFront(v262, (IUnknown *)v54);
  if ( (int)HouseClass_Count > 0 )
  {
    v55 = HouseClass_Array;
    v57 = (CampaignScore *)*(&g_MatrixTransformState + 2274);
    ecx71 = (CampaignScore **)&v282;
    v59 = HouseClass_Count;
    do
    {
      eax72 = *(CampaignScore **)v55->__pad_0;
      if ( *(unsigned char *)(*(unsigned int *)v55->__pad_0 + 492) && eax72 != v57 )
      {
        v60 = aP2;
        *ecx71++ = eax72;
        aP2 = (ObjectClass *)&v60->__pad_0[1];
      }
      v55 = (unsigned int)((HouseClass *)((char *)v55 + 4));
      v59 = (IUnknown *)((char *)v59 - 1);
    }
    while ( v59 );
  }
  v61 = aP2;
  v62 = 0;
  v268 = 0;
  if ( aP2 )
  {
    do
    {
      int v63 = (char *)v61 - (char *)v62 - 1;
      if ( v63 )
      {
        unsigned char * v64 = v283;
        int v65 = v63;
        do
        {
          int v66 = *(unsigned int *)v64;
          int v67 = *((unsigned int *)v64 - 1);
          if ( _strcmpi((char *)(v67 + 90100), (char *)(*(unsigned int *)v64 + 90100)) > 0 )
          {
            *((unsigned int *)v64 - 1) = v66;
            *(unsigned int *)v64 = v67;
          }
          v64 += 4;
          --v65;
        }
        while ( v65 );
        v62 = v268;
      }
      v61 = aP2;
      v62 = (IUnknown *)((char *)v62 + 1);
      v268 = v62;
    }
    while ( v62 < (IUnknown *)aP2 );
  }
  v68 = (IUnknown *)aP2;
  if ( (unsigned int)aP2 > 1 )
  {
    unsigned char * v69 = v283;
    char * v70 = (char *)&aP2[-1].lineTrailer + 3;
    do
    {
      int v71 = *(unsigned int *)v69;
      if ( !_strcmpi((char *)(*(unsigned int *)v69 + 90100), byte_B779E0) )
      {
        int v72 = v282;
        v282 = v71;
        *(unsigned int *)v69 = v72;
      }
      v69 += 4;
      --v70;
    }
    while ( v70 );
  }
  v73 = 0;
  if ( v68 )
  {
    int * v74 = &v282;
    while ( _strcmpi((char *)(*v74 + 90100), byte_B77830) )
    {
    unsigned int v76 = 0;  /* G37 hoist */
      v73 = (IUnknown *)((char *)v73 + 1);
      ++v74;
      if ( v73 >= v68 )
        goto LABEL_95;
    }
    v269 = v73;
  }
LABEL_95:
  char * v75 = (char *)operator new(0x10u);
  if ( v75 )
    char * v76 = TerrainInitMap(v75, (RandomStruct *)&stru_830620[72308], v68);
  else
    v76 = 0;
  LinkedList_flat::PushFront(v262, (IUnknown *)v76);
  char * v77 = (char *)operator new(0x10u);
  if ( v77 )
    char * v78 = TerrainInitMap(v77, (RandomStruct *)&stru_830620[72300], v269);
  else
    v78 = 0;
  LinkedList_flat::PushFront(v262, (IUnknown *)v78);
  if ( dword_B779C4 == (IUnknown *)1 )
  {
    LoadPlayerProfile(&v264, (const char **)&g_WebBrowser);
    if ( !v266 )
    {
  int v265; // [esp+38h] [ebp-8380h]
      if ( !DataGlobal_A8B8C1 || HouseClass_Player->__pad_1D8[48] )
      {
        Event_Process_77A8B0(v265, 1);
      }
      else if ( HouseClass_Player->__pad_1D8[29] || HouseClass_Player->__pad_220[40] || HouseClass_Player->__pad_220[39] )
      {
        Event_Process_77A890(v265, 1);
      }
      else
      {
        Event_Process_77A870(v265, 1);
      }
      SaveProfileWOL(v265, &g_WebBrowser);
    }
    v264.vfptr = &vt_rc_ptr_PlayerProfile;
    ((ComPtr *)(&v264))->Release();
  }
  unsigned int v79 = 0;
  if ( aP2 )
  {
    char v80 = DataGlobal_A8B8C1;
    do
    {
      if ( v80 )
      {
        unsigned char * v81 = *(unsigned char **)&v283[4 * v79 - 4];
        if ( v81[520] )
        {
          v284[v79] = (IUnknown *)2;
        }
        else if ( v81[584] || v81[583] )
        {
          v284[v79] = (IUnknown *)528;
        }
        else if ( v81[501] )
        {
          v284[v79] = (IUnknown *)512;
        }
        else
        {
          v284[v79] = (IUnknown *)256;
        }
      }
      else
      {
        v284[v79] = (IUnknown *)8;
      }
      ++v79;
    }
    while ( v79 < (unsigned int)aP2 );
  }
  int v82 = *(unsigned int *)dword_B77788;
  char * v83 = (char *)operator new(0x10u);
  if ( v83 )
    char * v84 = NetMessage::Pack4(v83, (RandomStruct *)&stru_830620[72292], v82);
  else
    v84 = 0;
  LinkedList_flat::PushFront(v262, (IUnknown *)v84);
  if ( *(unsigned int *)&g_OverlayTypeConfig[17744] / 60 )
  {
    v86 = (IUnknown *)(*(unsigned int *)&g_NetworkPlayerBuffer[5960]
                     / (unsigned int)(*(unsigned int *)&g_OverlayTypeConfig[17744] / 60));
    eax130 = (char *)operator new(0x10u);
    if ( eax130 )
    {
      v87 = TerrainInitMap(eax130, (RandomStruct *)&stru_830620[72284], v86);
      goto LABEL_135;
    }
  }
  else
  {
    char * v88 = (char *)operator new(0x10u);
    if ( v88 )
    {
      v87 = NetMessage::Pack4(v88, (RandomStruct *)&stru_830620[72284], 0);
      goto LABEL_135;
    }
  }
  v87 = 0;
LABEL_135:
  LinkedList_flat::PushFront(v262, (IUnknown *)v87);
  v89 = *(IUnknown **)&g_NetworkPlayerBuffer[5412];
  v90 = (char *)operator new(0x10u);
  if ( v90 )
    v91 = TerrainInitMap(v90, (RandomStruct *)&stru_830620[72276], v89);
  else
    v91 = 0;
  LinkedList_flat::PushFront(v262, (IUnknown *)v91);
  ModuleInternalVersion = GetModuleInternalVersion((int)&g_NetworkPlayerBuffer[5796]);
  wsprintfA(v286, &stru_830620[72272], ModuleInternalVersion);
  v93 = (char *)operator new(0x10u);
  if ( v93 )
    v94 = BuildResultPacket(v93, &stru_830620[72264], (IUnknown *)v286);
  else
    v94 = 0;
  LinkedList_flat::PushFront(v262, (IUnknown *)v94);
  GetModuleFileNameA((HMODULE)g_hInstance, Filename, 0x118u);
  v273 = 0;
  v274 = 1;
  v275 = 0;
  v276 = -1;
  hFile = (HANDLE)-1;
  v278 = 0;
  v279 = 0;
  v280 = 0;
  v281 = 0;
  v272 = (const CHAR *)&vt_RawFileClass;
  FileClass::SetName(&v272, Filename);
  ((FileClass *)(&v272))->Open2((const CHAR *)1);
  if ( hFile != (HANDLE)-1 && GetFileTime(hFile, 0, 0, &LastWriteTime) )
  {
    LastWriteTime.dwLowDateTime = htonl(LastWriteTime.dwLowDateTime);
    LastWriteTime.dwHighDateTime = htonl(LastWriteTime.dwHighDateTime);
    char * v95 = (char *)operator new(0x10u);
    if ( v95 )
      char * v96 = NetMessage::Pack(v95, &stru_830620[72256], (IUnknown *)&LastWriteTime, (IUnknown *)8);
    else
      v96 = 0;
    LinkedList_flat::PushFront(v262, (IUnknown *)v96);
  }
  if ( g_GameOptionsFlags != 1 )
  {
    if ( g_GameOptionsFlags == 2 )
    {
      char * v99 = (char *)operator new(0x10u);
      if ( v99 )
      {
        v98 = TerrainInitMap(v99, (RandomStruct *)&stru_830620[72248], (IUnknown *)4);
        goto LABEL_157;
      }
    }
    else
    {
      if ( g_GameOptionsFlags != 4 )
        goto LABEL_158;
      char * v100 = (char *)operator new(0x10u);
      if ( v100 )
      {
        v98 = TerrainInitMap(v100, (RandomStruct *)&stru_830620[72248], (IUnknown *)1);
        goto LABEL_157;
      }
    }
LABEL_156:
    v98 = 0;
    goto LABEL_157;
  }
  v97 = (char *)operator new(0x10u);
  if ( !v97 )
    goto LABEL_156;
  v98 = TerrainInitMap(v97, (RandomStruct *)&stru_830620[72248], (IUnknown *)2);
LABEL_157:
  LinkedList_flat::PushFront(v262, (IUnknown *)v98);
LABEL_158:
  if ( g_GameStateFlags )
  {
    v101 = (IUnknown *)(*(int (**)(SkirmishDialog *))(*(unsigned int *)g_GameStateFlags->__pad_0 + 184))(g_GameStateFlags);
    char * v102 = (char *)operator new(0x10u);
    if ( v102 )
      char * v103 = TerrainInitMap(v102, (RandomStruct *)&stru_830620[72240], v101);
    else
      v103 = 0;
    LinkedList_flat::PushFront(v262, (IUnknown *)v103);
  }
  v104 = 0;
  v268 = 0;
  if ( aP2 )
  {
    while ( 1 )
    {
  char *v240; // eax
  char *v236; // eax
  char *v232; // eax
  char *v228; // eax
      int v105 = *(unsigned int *)&v283[4 * (unsigned int)v104 - 4];
      char v106 = (unsigned char)v104 + 48;
      char v263 = (unsigned char)v104 + 48;
      stru_830620[71971] = (unsigned char)v104 + 48;
      char * v107 = (char *)operator new(0x10u);
      if ( v107 )
        char * v108 = BuildResultPacket(v107, &stru_830620[71968], (IUnknown *)(v105 + 90100));
      else
        v108 = 0;
      LinkedList_flat::PushFront(v262, (IUnknown *)v108);
      v110 = *(ObjectClass **)(v105 + 512);
      stru_830620[72147] = v106;
      eax169 = (char *)operator new(0x10u);
      if ( eax169 )
        char * v111 = TerrainInitMap(eax169, (RandomStruct *)&stru_830620[72144], (IUnknown *)v110);
      else
        v111 = 0;
      LinkedList_flat::PushFront(v262, (IUnknown *)v111);
      v113 = *(ObjectClass **)(v105 + 516);
      stru_830620[72155] = v106;
      eax172 = (char *)operator new(0x10u);
      if ( eax172 )
        char * v114 = TerrainInitMap(eax172, (RandomStruct *)&stru_830620[72152], (IUnknown *)v113);
      else
        v114 = 0;
      LinkedList_flat::PushFront(v262, (IUnknown *)v114);
      stru_830620[71979] = v106;
      v116 = *(ObjectClass **)(v105 + 488);
      eax175 = (char *)operator new(0x10u);
      if ( eax175 )
        char * v117 = TerrainInitMap(eax175, (RandomStruct *)&stru_830620[71976], (IUnknown *)v116);
      else
        v117 = 0;
      LinkedList_flat::PushFront(v262, (IUnknown *)v117);
      stru_830620[71987] = v106;
      v118 = v268;
      if ( dword_B779C4 == (IUnknown *)2 )
        v118 = *(IUnknown **)(v105 + 516);
      char * v119 = (char *)operator new(0x10u);
      if ( v119 )
        char * v120 = TerrainInitMap(v119, (RandomStruct *)&stru_830620[71984], v118);
      else
        v120 = 0;
      LinkedList_flat::PushFront(v262, (IUnknown *)v120);
      stru_830620[72139] = v106;
      char * v121 = (char *)operator new(0x10u);
      if ( v121 )
        char * v122 = TerrainInitMap(v121, (RandomStruct *)&stru_830620[72136], v284[(unsigned int)v268]);
      else
        v122 = 0;
      LinkedList_flat::PushFront(v262, (IUnknown *)v122);
      stru_830620[72163] = v106;
      char v123 = *(unsigned char *)(v105 + 520);
      IDA_LOBYTE(v270) = 0;
      if ( v123 )
        IDA_LOBYTE(v270) = *(unsigned char *)(v105 + 583) == 0;
      char * v124 = (char *)operator new(0x10u);
      if ( v124 )
        char * v125 = String::AllocAndCopy(v124, (RandomStruct *)&stru_830620[72160], v270);
      else
        v125 = 0;
      LinkedList_flat::PushFront(v262, (IUnknown *)v125);
      stru_830620[71995] = v106;
      v127 = *(ObjectClass **)(v105 + 90196);
      eax191 = (char *)operator new(0x10u);
      if ( eax191 )
        char * v128 = TerrainInitMap(eax191, (RandomStruct *)&stru_830620[71992], (IUnknown *)v127);
      else
        v128 = 0;
      LinkedList_flat::PushFront(v262, (IUnknown *)v128);
      stru_830620[72003] = v106;
      v130 = *(ObjectClass **)(*(unsigned int *)(v105 + 52) + 184);
      eax194 = (char *)operator new(0x10u);
      if ( eax194 )
        char * v131 = TerrainInitMap(eax194, (RandomStruct *)&stru_830620[72000], (IUnknown *)v130);
      else
        v131 = 0;
      LinkedList_flat::PushFront(v262, (IUnknown *)v131);
      stru_830620[72011] = v106;
      int v132 = (*(int (**)(int))(*(unsigned int *)(v105 + 36) + 24))(v105 + 36);
      char * v133 = (char *)operator new(0x10u);
      if ( v133 )
        char * v134 = NetMessage::Pack4(v133, (RandomStruct *)&stru_830620[72008], v132);
      else
        v134 = 0;
      LinkedList_flat::PushFront(v262, (IUnknown *)v134);
      stru_830620[72059] = v106;
      stru_830620[72051] = v106;
      stru_830620[72067] = v106;
      stru_830620[72075] = v106;
      HouseClass::NetworkConvert((unsigned int *)(v105 + 2864));
      HouseClass::NetworkConvert((unsigned int *)(v105 + 4920));
      HouseClass::NetworkConvert((unsigned int *)(v105 + 808));
      HouseClass::NetworkConvert((unsigned int *)(v105 + 6976));
      int v135 = *(unsigned int *)(v105 + 4912);
      int v136 = 0;
      for ( v264.vfptr = 0; v136 < v135; ++v136 )
      {
        if ( *((unsigned int *)__0Iostream_init_QAE_XZ_7((Iostream_init *)(v105 + 2864)) + v136) )
          v264.vfptr = (void *)(v136 + 1);
      }
      v138 = (ObjectClass *)__0Iostream_init_QAE_XZ_7((Iostream_init *)(v105 + 2864));
      eax204 = (char *)operator new(0x10u);
      if ( eax204 )
  char *v139; // eax
        v139 = NetMessage::Pack(
                 eax204,
                 &stru_830620[72056],
                 (IUnknown *)v138,
                 (IUnknown *)(4 * (int)v264.vfptr));
      else
        v139 = 0;
      LinkedList_flat::PushFront(v262, (IUnknown *)v139);
      int v140 = *(unsigned int *)(v105 + 6968);
      int v141 = 0;
      for ( v264.vfptr = 0; v141 < v140; ++v141 )
      {
        if ( *((unsigned int *)__0Iostream_init_QAE_XZ_7((Iostream_init *)(v105 + 4920)) + v141) )
          v264.vfptr = (void *)(v141 + 1);
      }
      v143 = (ObjectClass *)__0Iostream_init_QAE_XZ_7((Iostream_init *)(v105 + 4920));
      eax211 = (char *)operator new(0x10u);
      if ( eax211 )
  char *v144; // eax
        v144 = NetMessage::Pack(
                 eax211,
                 &stru_830620[72048],
                 (IUnknown *)v143,
                 (IUnknown *)(4 * (int)v264.vfptr));
      else
        v144 = 0;
      LinkedList_flat::PushFront(v262, (IUnknown *)v144);
      int v145 = *(unsigned int *)(v105 + 2856);
      int v146 = 0;
      for ( v264.vfptr = 0; v146 < v145; ++v146 )
      {
        if ( *((unsigned int *)__0Iostream_init_QAE_XZ_7((Iostream_init *)(v105 + 808)) + v146) )
          v264.vfptr = (void *)(v146 + 1);
      }
      v148 = (ObjectClass *)__0Iostream_init_QAE_XZ_7((Iostream_init *)(v105 + 808));
      eax218 = (char *)operator new(0x10u);
      if ( eax218 )
  char *v149; // eax
        v149 = NetMessage::Pack(
                 eax218,
                 &stru_830620[72064],
                 (IUnknown *)v148,
                 (IUnknown *)(4 * (int)v264.vfptr));
      else
        v149 = 0;
      LinkedList_flat::PushFront(v262, (IUnknown *)v149);
      int v150 = *(unsigned int *)(v105 + 9024);
      int v151 = 0;
      for ( v264.vfptr = 0; v151 < v150; ++v151 )
      {
        if ( *((unsigned int *)__0Iostream_init_QAE_XZ_7((Iostream_init *)(v105 + 6976)) + v151) )
          v264.vfptr = (void *)(v151 + 1);
      }
      v153 = (ObjectClass *)__0Iostream_init_QAE_XZ_7((Iostream_init *)(v105 + 6976));
      eax225 = (char *)operator new(0x10u);
      if ( eax225 )
  char *v154; // eax
        v154 = NetMessage::Pack(
                 eax225,
                 &stru_830620[72072],
                 (IUnknown *)v153,
                 (IUnknown *)(4 * (int)v264.vfptr));
      else
        v154 = 0;
      LinkedList_flat::PushFront(v262, (IUnknown *)v154);
      Array::ByteSwap((u_long *)(v105 + 2864));
      Array::ByteSwap((u_long *)(v105 + 4920));
      Array::ByteSwap((u_long *)(v105 + 808));
      Array::ByteSwap((u_long *)(v105 + 6976));
      Array::Zero((unsigned int *)(v105 + 2864));
      Array::Zero((unsigned int *)(v105 + 808));
      Array::Zero((unsigned int *)(v105 + 4920));
      Array::Zero((unsigned int *)(v105 + 6976));
      for ( i = 0; i < *(int *)&g_CellDirectionOffsets[84616]; ++i )
      {
        int v156 = *(unsigned int *)(*(unsigned int *)&g_CellDirectionOffsets[84604] + 4 * i);
        if ( v105 == *(unsigned int *)(v156 + 540) )
          HouseClass::IncrementStat((unsigned int *)(v105 + 4920), *(unsigned int *)(*(unsigned int *)(v156 + 1732) + 3576));
      }
      for ( j = 0; j < (int)g_BuildingClass_Count; ++j )
      {
        int v158 = *(unsigned int *)&g_InfantryClassLimit->__pad_0[4 * j];
        if ( v105 == *(unsigned int *)(v158 + 540) )
        {
          int v159 = *(unsigned int *)(v158 + 1728);
          if ( !*(unsigned char *)(v159 + 3777) )
            HouseClass::IncrementStat((unsigned int *)(v105 + 2864), *(unsigned int *)(v159 + 3576));
        }
      }
      for ( k = 0; k < *(int *)&g_NetworkPlayerBuffer[3428]; ++k )
      {
        int v161 = *(unsigned int *)(*(unsigned int *)&g_NetworkPlayerBuffer[3416] + 4 * k);
        if ( v105 == *(unsigned int *)(v161 + 540) )
          HouseClass::IncrementStat((unsigned int *)(v105 + 808), *(unsigned int *)(*(unsigned int *)(v161 + 1732) + 3576));
      }
      int v162 = *(unsigned int *)(v105 + 120);
      for ( m = 0; m < v162; ++m )
        HouseClass::IncrementStat(
          (unsigned int *)(v105 + 6976),
          *(unsigned int *)(*(unsigned int *)(*(unsigned int *)(*(unsigned int *)(v105 + 108) + 4 * m) + 1312) + 3576));
      HouseClass::NetworkConvert((unsigned int *)(v105 + 2864));
      HouseClass::NetworkConvert((unsigned int *)(v105 + 4920));
      HouseClass::NetworkConvert((unsigned int *)(v105 + 808));
      HouseClass::NetworkConvert((unsigned int *)(v105 + 6976));
      stru_830620[72027] = v106;
      stru_830620[72019] = v106;
      stru_830620[72035] = v106;
      stru_830620[72043] = v106;
      int v164 = *(unsigned int *)(v105 + 4912);
      int v165 = 0;
      for ( v264.vfptr = 0; v165 < v164; ++v165 )
      {
        if ( *((unsigned int *)__0Iostream_init_QAE_XZ_7((Iostream_init *)(v105 + 2864)) + v165) )
          v264.vfptr = (void *)(v165 + 1);
      }
      v167 = (ObjectClass *)__0Iostream_init_QAE_XZ_7((Iostream_init *)(v105 + 2864));
      eax247 = (char *)operator new(0x10u);
      if ( eax247 )
  char *v168; // eax
        v168 = NetMessage::Pack(
                 eax247,
                 &stru_830620[72024],
                 (IUnknown *)v167,
                 (IUnknown *)(4 * (int)v264.vfptr));
      else
        v168 = 0;
      LinkedList_flat::PushFront(v262, (IUnknown *)v168);
      int v169 = *(unsigned int *)(v105 + 6968);
      int v170 = 0;
      for ( n = 0; n < v169; ++n )
      {
        if ( *((unsigned int *)__0Iostream_init_QAE_XZ_7((Iostream_init *)(v105 + 4920)) + n) )
          v170 = n + 1;
      }
      v173 = (ObjectClass *)__0Iostream_init_QAE_XZ_7((Iostream_init *)(v105 + 4920));
      eax254 = (char *)operator new(0x10u);
      if ( eax254 )
        char * v174 = NetMessage::Pack(eax254, &stru_830620[72016], (IUnknown *)v173, (IUnknown *)(4 * v170));
      else
        v174 = 0;
      LinkedList_flat::PushFront(v262, (IUnknown *)v174);
      int v175 = *(unsigned int *)(v105 + 2856);
      int v176 = 0;
      for ( ii = 0; ii < v175; ++ii )
      {
        if ( *((unsigned int *)__0Iostream_init_QAE_XZ_7((Iostream_init *)(v105 + 808)) + ii) )
          v176 = ii + 1;
      }
      v179 = (ObjectClass *)__0Iostream_init_QAE_XZ_7((Iostream_init *)(v105 + 808));
      eax261 = (char *)operator new(0x10u);
      if ( eax261 )
        char * v180 = NetMessage::Pack(eax261, &stru_830620[72032], (IUnknown *)v179, (IUnknown *)(4 * v176));
      else
        v180 = 0;
      LinkedList_flat::PushFront(v262, (IUnknown *)v180);
      int v181 = *(unsigned int *)(v105 + 9024);
      int v182 = 0;
      for ( jj = 0; jj < v181; ++jj )
      {
        if ( *((unsigned int *)__0Iostream_init_QAE_XZ_7((Iostream_init *)(v105 + 6976)) + jj) )
          v182 = jj + 1;
      }
      v185 = (ObjectClass *)__0Iostream_init_QAE_XZ_7((Iostream_init *)(v105 + 6976));
      eax268 = (char *)operator new(0x10u);
      if ( eax268 )
        char * v186 = NetMessage::Pack(eax268, &stru_830620[72040], (IUnknown *)v185, (IUnknown *)(4 * v182));
      else
        v186 = 0;
      LinkedList_flat::PushFront(v262, (IUnknown *)v186);
      HouseClass::NetworkConvert((unsigned int *)(v105 + 11088));
      HouseClass::NetworkConvert((unsigned int *)(v105 + 13144));
      HouseClass::NetworkConvert((unsigned int *)(v105 + 9032));
      HouseClass::NetworkConvert((unsigned int *)(v105 + 15200));
      int v187 = 0;
      stru_830620[72091] = v263;
      stru_830620[72083] = v263;
      stru_830620[72099] = v263;
      stru_830620[72107] = v263;
      int v188 = *(unsigned int *)(v105 + 13136);
      v264.vfptr = 0;
      if ( v188 > 0 )
      {
        do
        {
          if ( *((unsigned int *)__0Iostream_init_QAE_XZ_7((Iostream_init *)(v105 + 11088)) + v187) )
            v264.vfptr = (void *)(v187 + 1);
          ++v187;
        }
        while ( v187 < v188 );
      }
      v190 = (ObjectClass *)__0Iostream_init_QAE_XZ_7((Iostream_init *)(v105 + 11088));
      eax275 = (char *)operator new(0x10u);
      if ( eax275 )
  char *v191; // eax
        v191 = NetMessage::Pack(
                 eax275,
                 &stru_830620[72088],
                 (IUnknown *)v190,
                 (IUnknown *)(4 * (int)v264.vfptr));
      else
        v191 = 0;
      LinkedList_flat::PushFront(v262, (IUnknown *)v191);
      int v192 = *(unsigned int *)(v105 + 15192);
      int v193 = 0;
      for ( kk = 0; kk < v192; ++kk )
      {
        if ( *((unsigned int *)__0Iostream_init_QAE_XZ_7((Iostream_init *)(v105 + 13144)) + kk) )
          v193 = kk + 1;
      }
      v196 = (ObjectClass *)__0Iostream_init_QAE_XZ_7((Iostream_init *)(v105 + 13144));
      eax282 = (char *)operator new(0x10u);
      if ( eax282 )
        char * v197 = NetMessage::Pack(eax282, &stru_830620[72080], (IUnknown *)v196, (IUnknown *)(4 * v193));
      else
        v197 = 0;
      LinkedList_flat::PushFront(v262, (IUnknown *)v197);
      int v198 = *(unsigned int *)(v105 + 11080);
      int v199 = 0;
      for ( mm = 0; mm < v198; ++mm )
      {
        if ( *((unsigned int *)__0Iostream_init_QAE_XZ_7((Iostream_init *)(v105 + 9032)) + mm) )
          v199 = mm + 1;
      }
      v202 = (ObjectClass *)__0Iostream_init_QAE_XZ_7((Iostream_init *)(v105 + 9032));
      eax289 = (char *)operator new(0x10u);
      if ( eax289 )
        char * v203 = NetMessage::Pack(eax289, &stru_830620[72096], (IUnknown *)v202, (IUnknown *)(4 * v199));
      else
        v203 = 0;
      LinkedList_flat::PushFront(v262, (IUnknown *)v203);
      int v204 = *(unsigned int *)(v105 + 17248);
      int v205 = 0;
      for ( nn = 0; nn < v204; ++nn )
      {
        if ( *((unsigned int *)__0Iostream_init_QAE_XZ_7((Iostream_init *)(v105 + 15200)) + nn) )
          v205 = nn + 1;
      }
      v208 = (ObjectClass *)__0Iostream_init_QAE_XZ_7((Iostream_init *)(v105 + 15200));
      eax296 = (char *)operator new(0x10u);
      if ( eax296 )
        char * v209 = NetMessage::Pack(eax296, &stru_830620[72104], (IUnknown *)v208, (IUnknown *)(4 * v205));
      else
        v209 = 0;
      LinkedList_flat::PushFront(v262, (IUnknown *)v209);
      stru_830620[72115] = v263;
      HouseClass::NetworkConvert((unsigned int *)(v105 + 17256));
      int v210 = *(unsigned int *)(v105 + 19304);
      int v211 = 0;
      for ( v264.vfptr = 0; v211 < v210; ++v211 )
      {
        if ( *((unsigned int *)__0Iostream_init_QAE_XZ_7((Iostream_init *)(v105 + 17256)) + v211) )
          v264.vfptr = (void *)(v211 + 1);
      }
      v213 = (ObjectClass *)__0Iostream_init_QAE_XZ_7((Iostream_init *)(v105 + 17256));
      eax303 = (char *)operator new(0x10u);
      if ( eax303 )
  char *v214; // eax
        v214 = NetMessage::Pack(
                 eax303,
                 &stru_830620[72112],
                 (IUnknown *)v213,
                 (IUnknown *)(4 * (int)v264.vfptr));
      else
        v214 = 0;
      LinkedList_flat::PushFront(v262, (IUnknown *)v214);
      stru_830620[72123] = v263;
      HouseClass::NetworkConvert((unsigned int *)(v105 + 19312));
      int v215 = *(unsigned int *)(v105 + 21360);
      int v216 = 0;
      for ( v264.vfptr = 0; v216 < v215; ++v216 )
      {
        if ( *((unsigned int *)__0Iostream_init_QAE_XZ_7((Iostream_init *)(v105 + 19312)) + v216) )
          v264.vfptr = (void *)(v216 + 1);
      }
      v218 = (ObjectClass *)__0Iostream_init_QAE_XZ_7((Iostream_init *)(v105 + 19312));
      eax310 = (char *)operator new(0x10u);
      if ( eax310 )
  char *v219; // eax
        v219 = NetMessage::Pack(
                 eax310,
                 &stru_830620[72120],
                 (IUnknown *)v218,
                 (IUnknown *)(4 * (int)v264.vfptr));
      else
        v219 = 0;
      LinkedList_flat::PushFront(v262, (IUnknown *)v219);
      char v220 = v263;
      stru_830620[72131] = v263;
      v222 = *(ObjectClass **)(v105 + 736);
      eax313 = (char *)operator new(0x10u);
      if ( eax313 )
        char * v223 = TerrainInitMap(eax313, (RandomStruct *)&stru_830620[72128], (IUnknown *)v222);
      else
        v223 = 0;
      LinkedList_flat::PushFront(v262, (IUnknown *)v223);
      stru_830620[72171] = v220;
      v224 = v269;
      v225 = v268;
      if ( v269 == v268 )
      {
        v226 = (IUnknown *)DataGlobal_84E863;
        char * v227 = (char *)operator new(0x10u);
        if ( v227 )
        {
          v228 = TerrainInitMap(v227, (RandomStruct *)&stru_830620[72168], v226);
          goto LABEL_322;
        }
      }
      else
      {
        char * v229 = (char *)operator new(0x10u);
        if ( v229 )
        {
          v228 = NetMessage::Pack4(v229, (RandomStruct *)&stru_830620[72168], -1);
          goto LABEL_322;
        }
      }
      v228 = 0;
LABEL_322:
      LinkedList_flat::PushFront(v262, (IUnknown *)v228);
      stru_830620[72179] = v220;
      if ( v224 == v225 )
      {
        unsigned int v230 = Performance::MeasureTicks();
        char * v231 = (char *)operator new(0x10u);
        if ( v231 )
        {
          v232 = NetMessage::Pack4(v231, (RandomStruct *)&stru_830620[72176], v230);
          goto LABEL_328;
        }
      }
      else
      {
        char * v233 = (char *)operator new(0x10u);
        if ( v233 )
        {
          v232 = NetMessage::Pack4(v233, (RandomStruct *)&stru_830620[72176], -1);
          goto LABEL_328;
        }
      }
      v232 = 0;
LABEL_328:
      LinkedList_flat::PushFront(v262, (IUnknown *)v232);
      stru_830620[72187] = v220;
      if ( v224 == v225 )
      {
        Buffer.dwLength = 32;
        GlobalMemoryStatus(&Buffer);
        dwTotalPhys = Buffer.dwTotalPhys;
        char * v235 = (char *)operator new(0x10u);
        if ( !v235 )
          goto LABEL_333;
        v236 = NetMessage::Pack4(v235, (RandomStruct *)&stru_830620[72184], dwTotalPhys);
      }
      else
      {
        char * v237 = (char *)operator new(0x10u);
        if ( !v237 )
        {
LABEL_333:
          v236 = 0;
          goto LABEL_334;
        }
        v236 = NetMessage::Pack4(v237, (RandomStruct *)&stru_830620[72184], -1);
      }
LABEL_334:
      LinkedList_flat::PushFront(v262, (IUnknown *)v236);
      stru_830620[72195] = v220;
      if ( v224 == v225 && *(unsigned int *)&g_CellDirectionOffsets[2564] )
      {
  int v287[15]; // [esp+15Ch] [ebp-825Ch] BYREF
        v287[0] = 316;
        if ( (*(int (**)(unsigned int, int *, unsigned int))(**(unsigned int **)&g_CellDirectionOffsets[2564] + 44))(
               *(unsigned int *)&g_CellDirectionOffsets[2564],
               v287,
               0) )
        {
          goto LABEL_343;
        }
  int v288; // [esp+198h] [ebp-8220h]
        unsigned int v238 = (v288 + 0xFFFFF) & 0xFFF00000;
        char * v239 = (char *)operator new(0x10u);
        if ( !v239 )
        {
LABEL_341:
          v240 = 0;
          goto LABEL_342;
        }
        v240 = NetMessage::Pack4(v239, (RandomStruct *)&stru_830620[72192], v238);
      }
      else
      {
        char * v241 = (char *)operator new(0x10u);
        if ( !v241 )
          goto LABEL_341;
        v240 = NetMessage::Pack4(v241, (RandomStruct *)&stru_830620[72192], -1);
      }
LABEL_342:
      LinkedList_flat::PushFront(v262, (IUnknown *)v240);
LABEL_343:
      v268 = (IUnknown *)((char *)&v225->field_0 + 1);
      if ( (char *)&v225->field_0 + 1 >= (char *)aP2 )
        break;
      v104 = v268;
    }
  }
  vfptr = (char *)Event_Process_625C00((int)v262, (size_t *)&g_OverlayTypeConfig[17816]);
  v264.vfptr = vfptr;
  if ( *(&g_MatrixTransformState + 2264) )
  {
    X = (*(&g_MatrixTransformState + 2264))->X;
    if ( v266 )
      (*(void (**)(unsigned int, char *, CCINIClass *, char *, unsigned int))(X + 12))(
        *(&g_MatrixTransformState + 2264),
        &byte_B77CE8,
        dword_B75F5C,
        vfptr,
        *(unsigned int *)&g_OverlayTypeConfig[17816]);
    else
      (*(void (**)(unsigned int, char *, CCINIClass *, char *, unsigned int))(X + 12))(
        *(&g_MatrixTransformState + 2264),
        byte_B77930,
        dword_B76184,
        vfptr,
        *(unsigned int *)&g_OverlayTypeConfig[17816]);
  }
  if ( *(int *)&g_OverlayTypeConfig[17816] <= 0x8000
    && vfptr
    && *(int *)&g_OverlayTypeConfig[17816] >= 1 )
  {
  char *v255; // edx
  unsigned int v290[8194]; // [esp+3B0h] [ebp-8008h] BYREF
    v290[1] = *(unsigned int *)&g_OverlayTypeConfig[17816];
    char v244 = g_OverlayTypeConfig[17816];
    v290[0] = 0;
    int v245 = *(unsigned int *)&g_OverlayTypeConfig[17816] >> 2;
    qmemcpy(&v290[2], vfptr, 4 * (*(unsigned int *)&g_OverlayTypeConfig[17816] >> 2));
    char * v247 = &vfptr[4 * v245];
    unsigned int * v246 = &v290[v245 + 2];
    IDA_LOBYTE(v245) = v244;
    int v248 = *(unsigned int *)&g_OverlayTypeConfig[17756];
    qmemcpy(v246, v247, v245 & 3);
    int v249 = *(unsigned int *)&g_OverlayTypeConfig[17752];
    v269 = *(IUnknown **)&g_OverlayTypeConfig[17752];
    if ( *(int *)&g_OverlayTypeConfig[17752] < v248 )
    {
      v255 = *(char **)&g_OverlayTypeConfig[17760];
    }
    else
    {
      int v250 = 2 * *(unsigned int *)&g_OverlayTypeConfig[17752];
      if ( 2 * *(unsigned int *)&g_OverlayTypeConfig[17752] < 10 )
        v250 = 10;
      char * v251 = (char *)operator new(32776 * v250);
      memset(v251, 0, 4 * ((unsigned int)(32776 * v250) >> 2));
      v252 = *(AbstractClass **)&g_OverlayTypeConfig[17760];
      if ( *(unsigned int *)&g_OverlayTypeConfig[17760] )
      {
        char v253 = 8 * g_OverlayTypeConfig[17752];
        unsigned int v254 = (unsigned int)(32776 * *(unsigned int *)&g_OverlayTypeConfig[17752]) >> 2;
        qmemcpy(v251, *(const void **)&g_OverlayTypeConfig[17760], 4 * v254);
        qmemcpy(&v251[4 * v254], (char *)v252 + 4 * v254, v253 & 3);
        v252 = *(AbstractClass **)&g_OverlayTypeConfig[17760];
      }
      RA2_OPDEL(v252);
      v249 = *(unsigned int *)&g_OverlayTypeConfig[17752];
      v255 = v251;
      *(unsigned int *)&g_OverlayTypeConfig[17760] = v251;
      *(unsigned int *)&g_OverlayTypeConfig[17756] = v250;
      if ( *(int *)&g_OverlayTypeConfig[17752] >= v250 )
      {
        int v256 = 2 * *(unsigned int *)&g_OverlayTypeConfig[17752];
        if ( 2 * *(unsigned int *)&g_OverlayTypeConfig[17752] < 10 )
          v256 = 10;
        char * v257 = (char *)operator new(32776 * v256);
        memset(v257, 0, 4 * ((unsigned int)(32776 * v256) >> 2));
        v258 = *(AbstractClass **)&g_OverlayTypeConfig[17760];
        if ( *(unsigned int *)&g_OverlayTypeConfig[17760] )
        {
          char v259 = 8 * g_OverlayTypeConfig[17752];
          unsigned int v260 = (unsigned int)(32776 * *(unsigned int *)&g_OverlayTypeConfig[17752]) >> 2;
          qmemcpy(v257, *(const void **)&g_OverlayTypeConfig[17760], 4 * v260);
          qmemcpy(&v257[4 * v260], (char *)v258 + 4 * v260, v259 & 3);
          v258 = *(AbstractClass **)&g_OverlayTypeConfig[17760];
        }
        RA2_OPDEL(v258);
        v249 = *(unsigned int *)&g_OverlayTypeConfig[17752];
        v255 = v257;
        *(unsigned int *)&g_OverlayTypeConfig[17760] = v257;
        *(unsigned int *)&g_OverlayTypeConfig[17756] = v256;
      }
      if ( (int)v269 < v249 )
      {
        memcpy(
          &v255[32776 * ((unsigned int)&v269->field_0 + 1)],
          &v255[32776 * (unsigned int)v269],
          32776 * v249 - 32776 * (unsigned int)v269);
        v255 = *(char **)&g_OverlayTypeConfig[17760];
        v249 = *(unsigned int *)&g_OverlayTypeConfig[17752];
      }
    }
    char * v261 = &v255[32776 * (unsigned int)v269];
    if ( v261 )
    {
      qmemcpy(v261, v290, 0x8008u);
      v249 = *(unsigned int *)&g_OverlayTypeConfig[17752];
    }
    vfptr = (char *)v264.vfptr;
    *(unsigned int *)&g_OverlayTypeConfig[17752] = v249 + 1;
  }
  RA2_OPDEL(vfptr);
  g_NetworkPlayerBuffer[8900] = 1;
  ((RawFileClass *)((int *)&v272))->Dtor();
  ((ResultNode *)(v262))->CleanupList();
}
} // namespace gamemd

// 0x6C87F0
namespace gamemd {
int sub_6C87F0()
{
  int v1; // [esp+4h] [ebp-4h]

  dword_B0BD28 = TimerGetTicks(); /*0x6c87fc*/
  dword_B0BD2C = v1; /*0x6c8805*/
  byte_B0BDB4 = 1; /*0x6c880a*/
  return v1; /*0x6c8811*/
}
}
// 0x6C8FF0
namespace gamemd {
void DlgProcScoreScreen()
{
  int result; // eax
  unsigned int *WindowLongA; // eax
  int v6; // ecx
  int v7; // eax
  int v8; // esi
  HWND DlgItem; // eax
  int v10; // ecx
  unsigned int *v11; // edi
  int v12; // edi
  HWND v13; // eax
  wchar_t *v14; // ecx
  wchar_t *v15; // esi
  wchar_t *String; // edi
  wchar_t *v17; // esi
  HWND v18; // eax
  void (__stdcall *v19)(HWND, UINT, WPARAM, LPARAM); // edi
  HWND v20; // eax
  int v21; // eax
  const wchar_t *v22; // esi
  int v23; // ecx
  int v24; // edi
  char *v25; // esi
  char *v26; // esi
  char *v27; // esi
  int v28; // eax
  HWND v29; // eax
  HWND v30; // eax
  int v31; // eax
  unsigned int *v32; // eax
  LPARAM v33; // [esp-8h] [ebp-54h]
  wchar_t lParam[32]; // [esp+Ch] [ebp-40h] BYREF
  WPARAM wParama; // [esp+58h] [ebp+Ch]
  wchar_t *Formatb; // [esp+5Ch] [ebp+10h]
  wchar_t *Formata; // [esp+5Ch] [ebp+10h]

  result = BaseDialogProc(hWnd, a2, wParam, (unsigned int)Format); /*0x6c900c*/
  if ( !result ) /*0x6c9013*/
  {
    WindowLongA = (unsigned int *)GetWindowLongA(hWnd, 8); /*0x6c901c*/
    if ( a2 > 0x497 ) /*0x6c9028*/
    {
      if ( a2 == 1240 ) /*0x6c9383*/
      {
        if ( !wParam ) /*0x6c93cb*/
          SendDlgItemMessageA(hWnd, 1835, 0x4D5u, 0, 29); /*0x6c93db*/
      }
      else if ( a2 == 1260 ) /*0x6c9388*/
      {
        ((AudioController *)(stru_B0BF28))->Stop(); /*0x6c938f*/
        v32 = (unsigned int *)PlayVocClass(dword_8871E0->BunkerWallsUpSound, 0x2000, 1.0, 0); /*0x6c93ad*/
        SetAudioSource((int)stru_B0BF28, v32, 0); /*0x6c93b9*/
        SendDlgItemMessageA(hWnd, 1835, 0x4D3u, 0, 0); /*0x6c93c7*/
      }
      return 0; /*0x6c93e1*/
    }
    if ( a2 != 1175 ) /*0x6c902e*/
    {
      if ( a2 == 2 ) /*0x6c9033*/
      {
        if ( dword_B0BF64 ) /*0x6c906e*/
        {
          AudioFile::Stop(stru_B0BF28); /*0x6c9079*/
          AudioFileClass::Release(stru_B0BF28); /*0x6c9083*/
          dword_B0BF64 = 0; /*0x6c908a*/
          return 0; /*0x6c909a*/
        }
      }
      else if ( a2 == 273 && (unsigned short)wParam == 1059 ) /*0x6c9046*/
      {
        *WindowLongA = 1; /*0x6c9051*/
        AudioFile::Stop(stru_B0BF28); /*0x6c9057*/
        return 0; /*0x6c9064*/
      }
      return 0; /*0x6c9046*/
    }
    AudioController::Init(stru_B0BF28); /*0x6c90a2*/
    dword_B0BF64 = 1; /*0x6c90ad*/
    v6 = 0; /*0x6c90b7*/
    v7 = *((unsigned int *)dword_A8B230 + 387); /*0x6c90b9*/
    if ( v7 ) /*0x6c90c1*/
    {
      if ( v7 == 1 ) /*0x6c90ce*/
      {
        v6 = *((unsigned int *)dword_A8B230 + 3434); /*0x6c90d0*/
      }
      else if ( v7 == 2 ) /*0x6c90db*/
      {
        v6 = *((unsigned int *)dword_A8B230 + 3435); /*0x6c90dd*/
      }
    }
    else
    {
      v6 = *((unsigned int *)dword_A8B230 + 3433); /*0x6c90c3*/
    }
    v8 = v6 / 60; /*0x6c90fc*/
    swprintf( /*0x6c9146*/
      lParam,
      (const size_t)a02d02d02d_0,
      (const wchar_t *const)(v6 / 60 / 60 / 60),
      v6 / 60 / 60 % 60,
      v6 / 60 % 60);
    DlgItem = GetDlgItem(hWnd, 1777); /*0x6c915a*/
    SendMessageA(DlgItem, 0x4B2u, 0, (LPARAM)lParam); /*0x6c9169*/
    v10 = *((unsigned int *)dword_A8B230 + 391); /*0x6c9174*/
    if ( *((unsigned int *)dword_A8B230 + 389) != -1 ) /*0x6c9187*/
    {
      v11 = (char *)dword_A8B230 + 1556; /*0x6c917a*/
      Formatb = (wchar_t *)*((unsigned int *)dword_A8B230 + 391); /*0x6c9180*/
      v10 = (int)Formatb + TimerGetTicks() - *v11; /*0x6c9199*/
    }
    v12 = v10 / 60; /*0x6c91b7*/
    swprintf( /*0x6c9209*/
      lParam,
      (const size_t)a02d02d02d_0,
      (const wchar_t *const)(v10 / 60 / 60 / 60),
      v10 / 60 / 60 % 60,
      v10 / 60 % 60);
    v13 = GetDlgItem(hWnd, 1778); /*0x6c9217*/
    SendMessageA(v13, 0x4B2u, 0, (LPARAM)lParam); /*0x6c9226*/
    if ( v12 > v8 ) /*0x6c9233*/
    {
      v14 = (wchar_t *)((char *)dword_A8B230 + 13806); /*0x6c9243*/
      v15 = (wchar_t *)((char *)dword_A8B230 + 13837); /*0x6c9249*/
    }
    else
    {
      v14 = (wchar_t *)((char *)dword_A8B230 + 13744); /*0x6c9235*/
      v15 = (wchar_t *)((char *)dword_A8B230 + 13775); /*0x6c923b*/
    }
    String = GetStringCSF(v14, 0, aDRa2mdpostStls, 138); /*0x6c926e*/
    v17 = GetStringCSF(v15, 0, aDRa2mdpostStls, 139); /*0x6c927b*/
    v18 = GetDlgItem(hWnd, 1779); /*0x6c927d*/
    v33 = (LPARAM)String; /*0x6c927f*/
    v19 = (void (*)(HWND, UINT, WPARAM, LPARAM))SendMessageA; /*0x6c9280*/
    SendMessageA(v18, 0x4B2u, 0, v33); /*0x6c928e*/
    v20 = GetDlgItem(hWnd, 1780); /*0x6c9296*/
    SendMessageA(v20, 0x4B2u, 0, (LPARAM)v17); /*0x6c92a1*/
    v21 = dword_A80238; /*0x6c92a3*/
    v22 = 0; /*0x6c92a8*/
    v23 = 0; /*0x6c92aa*/
    wParama = dword_A80238; /*0x6c92ac*/
    Formata = 0; /*0x6c92b2*/
    if ( dword_A80238 > 0 ) /*0x6c92b6*/
    {
      do /*0x6c930e*/
      {
        v24 = *(unsigned int *)&dword_A8022C->AbstractClass[4 * v23]; /*0x6c92be*/
        if ( *(unsigned char *)(v24 + 493) ) /*0x6c92c1*/
        {
          v25 = (char *)v22 + SumArray((int *)(v24 + 9032)); /*0x6c92dc*/
          v26 = &v25[SumArray((int *)(v24 + 11088))]; /*0x6c92e9*/
          v27 = &v26[SumArray((int *)(v24 + 13144))]; /*0x6c92f6*/
          v28 = SumArray((int *)(v24 + 15200)); /*0x6c92f8*/
          v23 = (int)Formata; /*0x6c92fd*/
          v22 = (const wchar_t *)&v27[v28]; /*0x6c9301*/
          v21 = wParama; /*0x6c9303*/
        }
        Formata = (wchar_t *)++v23; /*0x6c930a*/
      }
      while ( v23 < v21 ); /*0x6c930e*/
      v19 = (void (*)(HWND, UINT, WPARAM, LPARAM))SendMessageA; /*0x6c9310*/
    }
    v29 = GetDlgItem(hWnd, 1835); /*0x6c931c*/
    PostMessageA(v29, 0x4D7u, 0, (LPARAM)hWnd); /*0x6c9327*/
    swprintf(lParam, (const size_t)&g_Str_Fmt_PctD, v22); /*0x6c9338*/
    v30 = GetDlgItem(hWnd, 1782); /*0x6c9346*/
    v19(v30, 0x4B2u, 0, (LPARAM)lParam); /*0x6c9355*/
    v31 = ((StringList *)(&unk_A83D10))->Find(g_INI_Key_SCORE); /*0x6c9361*/
    ((ThemeClass *)(&unk_A83D10))->Play(v31); /*0x6c936c*/
    return 0; /*0x6c9374*/
  }
  return result; /*0x6c905c*/
}
}
// 0x6CA1E0
namespace gamemd {
int E4Recv_6CA1E0::sub_6CA1E0(char * Source)
{

  wchar_t *p_vtable1; // ebp
  int v4; // esi
  wchar_t *v5; // edi
  void *vtable0; // ebx
  ObjectClass *v7; // eax
  wchar_t *v8; // esi
  size_t v9; // eax
  wchar_t *v10; // eax
  const wchar_t *v11; // esi
  char v13; // [esp+11h] [ebp-47h]
  wchar_t v14; // [esp+12h] [ebp-46h] BYREF
  ObjectClass *v15; // [esp+14h] [ebp-44h]
  wchar_t Dest[32]; // [esp+18h] [ebp-40h] BYREF

  v15 = this; /*0x6ca1f5*/
  mbstowcs(Dest, Source, 0x20u); /*0x6ca1f9*/
  p_vtable1 = (wchar_t *)&((unsigned int *)this)[0]; /*0x6ca201*/
  while ( 1 ) /*0x6ca27e*/
  {
    while ( 1 ) /*0x6ca208*/
    {
      v13 = 0; /*0x6ca208*/
      v4 = 0; /*0x6ca20d*/
      v5 = p_vtable1; /*0x6ca20f*/
      vtable0 = v15->AbstractClass; /*0x6ca211*/
      *p_vtable1 = 0; /*0x6ca213*/
      while ( (*(int (**)(void *, wchar_t *, int))(*(unsigned int *)vtable0 + 8))(vtable0, &v14, 2) == 2 ) /*0x6ca22a*/
      {
        if ( v14 != 10 ) /*0x6ca235*/
        {
          if ( v14 != 13 ) /*0x6ca23b*/
          {
            *v5 = v14; /*0x6ca23d*/
            ++v4; /*0x6ca240*/
            ++v5; /*0x6ca241*/
          }
          if ( v4 < 1024 ) /*0x6ca24a*/
            continue; /*0x6ca24a*/
        }
        goto LABEL_10; /*0x6ca24a*/
      }
      v13 = 1; /*0x6ca24e*/
LABEL_10:
      v7 = v15; /*0x6ca253*/
      p_vtable1[v4] = 0; /*0x6ca257*/
      ++v7[11].location[1]; /*0x6ca260*/
      v8 = WideString::Trim(p_vtable1); /*0x6ca26b*/
      if ( wcslen(v8) ) /*0x6ca26e*/
      {
        if ( *v8 != 59 ) /*0x6ca27e*/
          break; /*0x6ca27e*/
      }
      if ( v13 ) /*0x6ca286*/
        return 0; /*0x6ca286*/
    }
    if ( !v8 ) /*0x6ca28f*/
      return 0; /*0x6ca2f8*/
    v9 = wcslen(L"BeginMovie"); /*0x6ca296*/
    if ( !_wcsnicmp(v8, L"BeginMovie", v9) ) /*0x6ca2a2*/
    {
      v10 = wcschr(v8, 0x20u); /*0x6ca2b5*/
      v11 = v10; /*0x6ca2ba*/
      if ( v10 ) /*0x6ca2c1*/
      {
        WideString::Trim(v10); /*0x6ca2c9*/
        if ( !_wcsicmp(v11, Dest) ) /*0x6ca2d4*/
        {
          Debug::Log(); /*0x6ca2ee*/
          return 1; /*0x6ca2ff*/
        }
      }
    }
  }

}
}
// 0x6CA4A0
namespace gamemd {
void sub_6CA4A0(wchar_t * String2, int a2, int a3)
{
  const wchar_t **v3; // edi
  const wchar_t **v4; // esi
  const wchar_t *v5; // eax

  if ( String2 && off_8421A8 ) /*0x6ca4b2*/
  {
    v3 = (const wchar_t **)&off_8421A8; /*0x6ca4b4*/
    v4 = (const wchar_t **)&off_8421A8; /*0x6ca4b9*/
    while ( _wcsicmp(*v3, String2) ) /*0x6ca4c9*/
    {
      v5 = v4[2]; /*0x6ca4cb*/
      v4 += 2; /*0x6ca4ce*/
      v3 = v4; /*0x6ca4d3*/
      if ( !v5 ) /*0x6ca4d5*/
        return; /*0x6ca4d5*/
    }
    ((void (__fastcall *)(int, int))v3[1])(a2, a3); /*0x6ca4e5*/
  }
}
}
// 0x6CA4F0
namespace gamemd {
wchar_t * * sub_6CA4F0(unsigned int * a1)
{
  wchar_t *v1; // ebp
  int v2; // ebx
  int v3; // esi
  wchar_t *v4; // edi
  unsigned int *v5; // eax
  wchar_t *v6; // esi
  char v8; // [esp+11h] [ebp-7h]
  wchar_t v9; // [esp+12h] [ebp-6h] BYREF
  unsigned int *v10; // [esp+14h] [ebp-4h]

  v10 = a1; /*0x6ca4f7*/
  v1 = (wchar_t *)(a1 + 1); /*0x6ca4fb*/
  while ( 1 ) /*0x6ca504*/
  {
    v2 = *a1; /*0x6ca504*/
    *v1 = 0; /*0x6ca506*/
    v8 = 0; /*0x6ca50c*/
    v3 = 0; /*0x6ca511*/
    v4 = v1; /*0x6ca513*/
    while ( (*(int (**)(int, wchar_t *, int))(*(unsigned int *)v2 + 8))(v2, &v9, 2) == 2 ) /*0x6ca526*/
    {
      if ( v9 != 10 ) /*0x6ca531*/
      {
        if ( v9 != 13 ) /*0x6ca537*/
        {
          *v4 = v9; /*0x6ca539*/
          ++v3; /*0x6ca53c*/
          ++v4; /*0x6ca53d*/
        }
        if ( v3 < 1024 ) /*0x6ca546*/
          continue; /*0x6ca546*/
      }
      goto LABEL_11; /*0x6ca546*/
    }
    v8 = 1; /*0x6ca54a*/
  LABEL_11:
    v5 = v10; /*0x6ca54f*/
    v1[v3] = 0; /*0x6ca553*/
    ++v5[513]; /*0x6ca55c*/
    v6 = WideString::Trim(v1); /*0x6ca567*/
    if ( wcslen(v6) ) /*0x6ca56a*/
    {
      if ( *v6 != 59 ) /*0x6ca57a*/
        return v6; /*0x6ca588*/
    }
    if ( v8 ) /*0x6ca582*/
      return 0; /*0x6ca591*/
    a1 = v10; /*0x6ca500*/
  }
}
}
// 0x6CA6A0
namespace gamemd {
int sub_6CA6A0(BlowStraw * String1, int a2)
{
  const wchar_t *v2; // ebx
  wchar_t *v4; // eax
  wchar_t *v5; // esi
  int v6; // edi
  int result; // eax
  const wchar_t **v8; // eax
  wchar_t **v9; // esi
  wchar_t *v10; // ecx

  v2 = String1; /*0x6ca6a4*/
  v4 = wcschr(String1, 0x3Au); /*0x6ca6ab*/
  v5 = v4; /*0x6ca6b0*/
  if ( v4 ) /*0x6ca6b7*/
  {
    *v4 = 0; /*0x6ca6be*/
    *(unsigned int *)(a2 + 12) = wcstol(v2, 0, 0); /*0x6ca6cb*/
    v2 = v5 + 1; /*0x6ca6ce*/
  }
  v6 = 0; /*0x6ca6d7*/
  result = 2; /*0x6ca6db*/
  if ( off_8421D8 ) /*0x6ca6e0*/
  {
    v8 = (const wchar_t **)&off_8421D8; /*0x6ca6e2*/
    v9 = &off_8421D8; /*0x6ca6e7*/
    while ( 1 ) /*0x6ca6ed*/
    {
      result = _wcsicmp(v2, *v8); /*0x6ca6ed*/
      if ( !result ) /*0x6ca6f7*/
        break; /*0x6ca6f7*/
      v10 = v9[2]; /*0x6ca6f9*/
      v9 += 2; /*0x6ca6fc*/
      ++v6; /*0x6ca6ff*/
      v8 = (const wchar_t **)v9; /*0x6ca700*/
      if ( !v10 ) /*0x6ca704*/
      {
        result = 2; /*0x6ca706*/
        goto LABEL_8; /*0x6ca706*/
      }
    }
    *(unsigned int *)(a2 + 16) = dword_8421DC[2 * v6]; /*0x6ca71a*/
  }
  else
  {
  LABEL_8:
    *(unsigned int *)(a2 + 16) = 2; /*0x6ca70b*/
  }
  return result; /*0x6ca70b*/
}
}
// 0x6CF320
namespace gamemd {
int globalHelper_0CF320(unsigned int * a1, unsigned int * a2)
{
  if ( *a1 == *a2 )
    return 0; /*0x6cf330*/
  else
    return *a1 >= *a2 ? 1 : -1;
}
}
// 0x6CFD60
namespace gamemd {
unsigned int * sub_6CFD60(unsigned int * a1, int a2)
{
  unsigned int *result; // eax
  int v4; // ecx
  int v5; // esi
  int v6; // edi

  result = a1; /*0x6cfd7a*/
  v4 = dword_B0CC24; /*0x6cfd82*/
  v5 = *((unsigned int *)dword_B0FC68 + 2); /*0x6cfd8f*/
  v6 = *((unsigned int *)dword_B0FC68 + 3); /*0x6cfd92*/
  *a1 = *(unsigned int *)dword_B0FC68 + dword_B0CC38 * g_ObjectTrackingPool[a2]; /*0x6cfd95*/
  a1[1] = v4; /*0x6cfd97*/
  a1[2] = v5; /*0x6cfd9a*/
  a1[3] = v6; /*0x6cfd9d*/
  return result; /*0x6cfda0*/
}
}
// 0x6CFDB0
namespace gamemd {
int sub_6CFDB0(int a1)
{
  int result; // eax
  int v2; // ecx

  dword_B0CB54 = a1; /*0x6cfdb5*/
  result = *(unsigned int *)dword_B0FC6C - a1 * *((unsigned int *)dword_B0FC68 + 2); /*0x6cfdc9*/
  v2 = *(unsigned int *)dword_B0FC60 + *((unsigned int *)dword_B0FC60 + 2); /*0x6cfdd6*/
  dword_B0CC2C = result; /*0x6cfddb*/
  if ( result <= v2 ) /*0x6cfde0*/
    dword_B0CC2C = v2; /*0x6cfde2*/
  return result; /*0x6cfdd8*/
}
}
// 0x6C0025
namespace gamemd {
void nullsub_114(int a1, int a2)
{
  ; /*0x6c0025*/
}
} // namespace gamemd

// 0x6C6520
namespace gamemd {
int sub_6C6520()
{
  dword_B0BCF8 = 0; /*0x6c6522*/
  dword_B0BCFC = 0; /*0x6c6527*/
  dword_B0BD00 = 0; /*0x6c652c*/
  dword_B0BD04 = 0; /*0x6c6531*/
  return 0; /*0x6c6536*/
}
} // namespace gamemd

// 0x6C6540
namespace gamemd {
unsigned int * E4Recv_6C6540::sub_6C6540(int a2, wchar_t * String, int a4, int aP1, ControlClass * aP5, int aP3, int aP4)
{

  int Instance; // ebx

  GadgetClass::Construct((ShpButtonClass *)this, aP1, aP5, aP3, aP4, 0, 0); /*0x6c6560*/
  Buffer::Init((Buffer *)((char *)this + 36), 0, 0); /*0x6c656c*/
  *((unsigned int *)this + 12) = 0; /*0x6c657e*/
  *((unsigned int *)this + 13) = a4; /*0x6c6585*/
  *(unsigned int *)this->__pad_0 = &vt_StaticButtonClass; /*0x6c6588*/
  StaticButtonClass::Draw(this, String, 0); /*0x6c658e*/
  if ( aP3 == -1 || aP4 == -1 ) /*0x6c659b*/
  {
    Instance = TextRenderer::GetInstance(); /*0x6c65a8*/
    if ( aP3 == -1 ) /*0x6c65aa*/
      this->StaticButtonClass_field_0x14 = Text::MeasureWidth(*((unsigned int *)this + 12), 0); /*0x6c65b9*/
    if ( aP4 == -1 ) /*0x6c65bf*/
      *((unsigned int *)this + 6) = *(unsigned int *)(Instance + 28); /*0x6c65c4*/
  }
  return this->__pad_0; /*0x6c65c9*/

}
} // namespace gamemd

// 0x6C68C0
namespace gamemd {
void sub_6C68C0()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x6c68cc*/
  dbl_B0BD30 = Math::Sqrt(v0 + v0); /*0x6c68de*/
}
} // namespace gamemd

// 0x6C68F0
namespace gamemd {
void sub_6C68F0()
{
  dbl_B0BDA8 = dbl_B0BD30 / 60.0; /*0x6c68fc*/
}
} // namespace gamemd

// 0x6C6910
namespace gamemd {
void sub_6C6910()
{
  dbl_B0BD88 = 1.0 / dbl_B0BDA8; /*0x6c691c*/
}
} // namespace gamemd

// 0x6C6930
namespace gamemd {
void sub_6C6930()
{
  dbl_B0BD80 = 0.0174532925199433 * 45.0; /*0x6c693c*/
}
} // namespace gamemd

// 0x6C6950
namespace gamemd {
void sub_6C6950()
{
  dbl_B0BD38 = 0.0174532925199433 * 60.0; /*0x6c695c*/
}
} // namespace gamemd

// 0x6C6970
namespace gamemd {
void sub_6C6970()
{
  dbl_B0BD08 = 0.0174532925199433 * 90.0; /*0x6c697c*/
}
} // namespace gamemd

// 0x6C6990
namespace gamemd {
long long sub_6C6990()
{
  double v0; // st7
  int64_t result; // rax

  v0 = Math::Sin(dbl_B0BD08 - dbl_B0BD38); /*0x6c69a2*/
  result = Math::RoundToInt(v0 * dbl_B0BD30 * 0.5); /*0x6c69b6*/
  dword_B0BDB0 = result; /*0x6c69bb*/
  return result; /*0x6c69c0*/
}
} // namespace gamemd

// 0x6C69D0
namespace gamemd {
void sub_6C69D0()
{
  dbl_B0BD40 = Math::ArcTan((double)dword_B0BDB0 * 0.00390625); /*0x6c69e7*/
}
} // namespace gamemd

// 0x6C6A00
namespace gamemd {
void sub_6C6A00()
{
  dbl_B0BD70 = Math::ArcTan((double)(2 * dword_B0BDB0) / dbl_B0BD30); /*0x6c6a22*/
}
} // namespace gamemd

// 0x6C6A30
namespace gamemd {
long long sub_6C6A30()
{
  int64_t result; // rax

  result = Math::RoundToInt((double)(4 * dword_B0BDB0) + 0.5); /*0x6c6a4b*/
  dword_B0BDA4 = result; /*0x6c6a50*/
  return result; /*0x6c6a56*/
}
} // namespace gamemd

// 0x6C6A60
namespace gamemd {
int sub_6C6A60()
{
  word_B0BD20 = 0; /*0x6c6a62*/
  word_B0BD22 = 0; /*0x6c6a68*/
  return 0; /*0x6c6a6e*/
}
} // namespace gamemd

// 0x6C6A70
namespace gamemd {
int sub_6C6A70()
{
  dword_B0BD60 = 0; /*0x6c6a72*/
  dword_B0BD64 = 0; /*0x6c6a77*/
  dword_B0BD68 = 0; /*0x6c6a7c*/
  return 0; /*0x6c6a81*/
}
} // namespace gamemd

// 0x6C6A90
namespace gamemd {
int sub_6C6A90()
{
  dword_B0BDA0 = 0; /*0x6c6a95*/
  dword_B0BD98 = 128; /*0x6c6a9f*/
  dword_B0BD9C = 128; /*0x6c6aa4*/
  return 128; /*0x6c6aa9*/
}
} // namespace gamemd

// 0x6C6AB0
namespace gamemd {
int sub_6C6AB0()
{
  dword_B0BD10 = 0; /*0x6c6ab2*/
  dword_B0BD14 = 0; /*0x6c6ab7*/
  dword_B0BD18 = 0; /*0x6c6abc*/
  dword_B0BD1C = 0; /*0x6c6ac1*/
  return 0; /*0x6c6ac6*/
}
} // namespace gamemd

// 0x6C6AD0
namespace gamemd {
int sub_6C6AD0()
{
  dword_B0BD28 = TimerGetTicks(); /*0x6c6adf*/
  return atexit(nullsub_234); /*0x6c6aea*/
}
} // namespace gamemd

// 0x6C6AF0
namespace gamemd {
void nullsub_234()
{
  ; /*0x6c6af0*/
}
} // namespace gamemd

// 0x6C6B40
namespace gamemd {
int sub_6C6B40()
{
  g_SidebarButtonState = 0; /*0x6c6b47*/
  dword_B0BD54 = 0; /*0x6c6b4c*/
  dword_B0BD58 = 0; /*0x6c6b51*/
  return atexit(sub_6C6B60); /*0x6c6b5c*/
}
} // namespace gamemd

// 0x6C6B60
namespace gamemd {
void sub_6C6B60()
{
  g_SidebarButtonState = 0; /*0x6c6b65*/
  RA2_OPDEL(dword_B0BD58); /*0x6c6b70*/
}
} // namespace gamemd

// 0x6C8840
namespace gamemd {
rc_ptr * E4Recv_6C8840::sub_6C8840(unsigned int * Block, char a2)
{

  *(unsigned int *)Block = &vt_rc_ptr; /*0x6c8843*/
  ((ComPtr *)((ComPtr *)Block))->Release(); /*0x6c8849*/
  if ( (a2 & 1) != 0 ) /*0x6c8853*/
    __3_YAXPAX_Z(Block); /*0x6c8856*/
  return Block; /*0x6c8860*/

}
} // namespace gamemd

// 0x6C8900
namespace gamemd {
char E4Recv_6C8900::sub_6C8900()
{

  void *vtable0; // eax
  int v4; // ebp
  void *v5; // edx
  void *vtable2; // esi
  void *v7; // [esp+4h] [ebp-4h]

  vtable0 = this->AbstractClass; /*0x6c8904*/
  if ( (int)this->AbstractClass < (int)((unsigned int *)this)[0] ) /*0x6c890b*/
    return 0; /*0x6c890d*/
  v4 = 2 * (unsigned int)vtable0; /*0x6c8913*/
  if ( 2 * (int)vtable0 < 10 ) /*0x6c891b*/
    v4 = 10; /*0x6c891d*/
  v5 = (void *)__2_YAPAXI_Z(32776 * v4); /*0x6c8932*/
  memset(v5, 0, 4 * ((unsigned int)(32776 * v4) >> 2)); /*0x6c893d*/
  v7 = v5; /*0x6c8947*/
  vtable2 = ((unsigned int *)this)[0]; /*0x6c894d*/
  if ( vtable2 ) /*0x6c8952*/
    qmemcpy(v5, vtable2, 32776 * (int)this->AbstractClass); /*0x6c8967*/
  __3_YAXPAX_Z(((unsigned int *)this)[0]); /*0x6c8974*/
  ((unsigned int *)this)[0] = (void *)v4; /*0x6c8980*/
  ((unsigned int *)this)[0] = v7; /*0x6c8983*/
  return 1; /*0x6c890f*/

}
} // namespace gamemd

// 0x6C8990
namespace gamemd {
int sub_6C8990()
{
  dword_B0BDC0 = 0; /*0x6c8992*/
  dword_B0BDC4 = 0; /*0x6c8997*/
  dword_B0BDC8 = 0; /*0x6c899c*/
  dword_B0BDCC = 0; /*0x6c89a1*/
  return 0; /*0x6c89a6*/
}
} // namespace gamemd

// 0x6C89B0
namespace gamemd {
unsigned int * E4Recv_6C89B0::sub_6C89B0(size_t Size)
{

  void *v3; // eax

  this->AbstractClass = (void *)Size; /*0x6c89b8*/
  v3 = (void *)__2_YAPAXI_Z(Size); /*0x6c89ba*/
  ((unsigned int *)this)[0] = v3; /*0x6c89c2*/
  ((unsigned int *)this)[0] = v3; /*0x6c89c5*/
  return &this->AbstractClass; /*0x6c89ca*/

}
} // namespace gamemd

// 0x6C8B10
namespace gamemd {
int E4Recv_6C8B10::sub_6C8B10(int a2, int a3, short a4, short a5)
{

  unsigned short *vtable2; // edi
  unsigned int *v8; // eax
  int v9; // esi
  unsigned int v10; // eax
  char *v11; // edi
  unsigned short *v12; // [esp+10h] [ebp-10h]
  int v13; // [esp+18h] [ebp-8h] BYREF
  unsigned char *v14; // [esp+2Ch] [ebp+Ch]
  int v15; // [esp+30h] [ebp+10h]

  vtable2 = ((unsigned int *)this)[0]; /*0x6c8b19*/
  if ( (char *)(vtable2 + 6) > (char *)((unsigned int *)this)[0] + (unsigned int)this->AbstractClass ) /*0x6c8b28*/
    return 0; /*0x6c8b28*/
  v12 = ((unsigned int *)this)[0]; /*0x6c8b2c*/
  ((unsigned int *)this)[0] = vtable2 + 6; /*0x6c8b30*/
  if ( !vtable2 ) /*0x6c8b33*/
    return 0; /*0x6c8b35*/
  *vtable2 = a4; /*0x6c8b4f*/
  vtable2[1] = a5; /*0x6c8b52*/
  vtable2[2] = *(unsigned short *)(a3 + 8); /*0x6c8b5a*/
  vtable2[3] = *(unsigned short *)(a3 + 12); /*0x6c8b66*/
  *((unsigned int *)vtable2 + 2) = ((unsigned int *)this)[0]; /*0x6c8b70*/
  v8 = CellStruct::Copy((CellStruct *)a3, &v13); /*0x6c8b73*/
  v9 = a2; /*0x6c8b7a*/
  v14 = (unsigned char *)(*(int (**)(int, unsigned int, unsigned int))(*(unsigned int *)a2 + 92))(a2, *v8, v8[1]); /*0x6c8b92*/
  v15 = 0; /*0x6c8b9b*/
  if ( *(int *)(a3 + 12) > 0 ) /*0x6c8ba3*/
  {
    while ( 1 ) /*0x6c8bbb*/
    {
      v10 = Map_Append(v14, (int)&g_SidebarButtonState.needsRedraw, *(unsigned int *)(a3 + 8)); /*0x6c8bbb*/
      v11 = (char *)((unsigned int *)this)[0]; /*0x6c8bc0*/
      if ( &v11[v10] > (char *)((unsigned int *)this)[0] + (unsigned int)this->AbstractClass || (((unsigned int *)this)[0] = &v11[v10], !v11) ) /*0x6c8bd4*/
      {
        (*(void (**)(int))(*(unsigned int *)v9 + 96))(v9); /*0x6c8c16*/
        return 0; /*0x6c8c22*/
      }
      qmemcpy(v11, &g_SidebarButtonState.needsRedraw, v10); /*0x6c8be0*/
      ++v15; /*0x6c8bf4*/
      v14 += (*(int (**)(int))(*(unsigned int *)a2 + 116))(a2); /*0x6c8c06*/
      if ( v15 >= *(unsigned int *)(a3 + 12) ) /*0x6c8c0a*/
        break; /*0x6c8c0a*/
      v9 = a2; /*0x6c8c0c*/
    }
    vtable2 = v12; /*0x6c8c25*/
    v9 = a2; /*0x6c8c29*/
  }
  (*(void (**)(int))(*(unsigned int *)v9 + 96))(v9); /*0x6c8c31*/
  return (int)vtable2; /*0x6c8b37*/

}
} // namespace gamemd

// 0x6C8C60
namespace gamemd {
int sub_6C8C60()
{
  dword_B0BED8 = 0; /*0x6c8c62*/
  dword_B0BEDC = 0; /*0x6c8c67*/
  dword_B0BEE0 = 0; /*0x6c8c6c*/
  dword_B0BEE4 = 0; /*0x6c8c71*/
  return 0; /*0x6c8c76*/
}
} // namespace gamemd

// 0x6C8C80
namespace gamemd {
void sub_6C8C80()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x6c8c8c*/
  dbl_B0BEF0 = Math::Sqrt(v0 + v0); /*0x6c8c9e*/
}
} // namespace gamemd

// 0x6C8CB0
namespace gamemd {
void sub_6C8CB0()
{
  dbl_B0BF58 = dbl_B0BEF0 / 60.0; /*0x6c8cbc*/
}
} // namespace gamemd

// 0x6C8CD0
namespace gamemd {
void sub_6C8CD0()
{
  dbl_B0BF40 = 1.0 / dbl_B0BF58; /*0x6c8cdc*/
}
} // namespace gamemd

// 0x6C8CF0
namespace gamemd {
void sub_6C8CF0()
{
  dbl_B0BF20 = 0.0174532925199433 * 45.0; /*0x6c8cfc*/
}
} // namespace gamemd

// 0x6C8D10
namespace gamemd {
void sub_6C8D10()
{
  dbl_B0BEF8 = 0.0174532925199433 * 60.0; /*0x6c8d1c*/
}
} // namespace gamemd

// 0x6C8D30
namespace gamemd {
void sub_6C8D30()
{
  dbl_B0BED0 = 0.0174532925199433 * 90.0; /*0x6c8d3c*/
}
} // namespace gamemd

// 0x6C8D50
namespace gamemd {
long long sub_6C8D50()
{
  double v0; // st7
  int64_t result; // rax

  v0 = Math::Sin(dbl_B0BED0 - dbl_B0BEF8); /*0x6c8d62*/
  result = Math::RoundToInt(v0 * dbl_B0BEF0 * 0.5); /*0x6c8d76*/
  dword_B0BF60 = result; /*0x6c8d7b*/
  return result; /*0x6c8d80*/
}
} // namespace gamemd

// 0x6C8D90
namespace gamemd {
void sub_6C8D90()
{
  dbl_B0BF00 = Math::ArcTan((double)dword_B0BF60 * 0.00390625); /*0x6c8da7*/
}
} // namespace gamemd

// 0x6C8DC0
namespace gamemd {
void sub_6C8DC0()
{
  dbl_B0BF18 = Math::ArcTan((double)(2 * dword_B0BF60) / dbl_B0BEF0); /*0x6c8de2*/
}
} // namespace gamemd

// 0x6C8DF0
namespace gamemd {
long long sub_6C8DF0()
{
  int64_t result; // rax

  result = Math::RoundToInt((double)(4 * dword_B0BF60) + 0.5); /*0x6c8e0b*/
  dword_B0BF54 = result; /*0x6c8e10*/
  return result; /*0x6c8e16*/
}
} // namespace gamemd

// 0x6C8E20
namespace gamemd {
int sub_6C8E20()
{
  word_B0BEE8 = 0; /*0x6c8e22*/
  word_B0BEEA = 0; /*0x6c8e28*/
  return 0; /*0x6c8e2e*/
}
} // namespace gamemd

// 0x6C8E30
namespace gamemd {
int sub_6C8E30()
{
  dword_B0BF08 = 0; /*0x6c8e32*/
  dword_B0BF0C = 0; /*0x6c8e37*/
  dword_B0BF10 = 0; /*0x6c8e3c*/
  return 0; /*0x6c8e41*/
}
} // namespace gamemd

// 0x6C8E50
namespace gamemd {
int sub_6C8E50()
{
  dword_B0BF50 = 0; /*0x6c8e55*/
  dword_B0BF48 = 128; /*0x6c8e5f*/
  dword_B0BF4C = 128; /*0x6c8e64*/
  return 128; /*0x6c8e69*/
}
} // namespace gamemd

// 0x6C8E70
namespace gamemd {
Iostream_init * E4Recv_6C8E70::__0Iostream_init_QAE_XZ_5()
{

  return this; /*0x6c8e72*/

}
} // namespace gamemd

// 0x6C8F10
namespace gamemd {
LRESULT sub_6C8F10(HWND hDlg, int nIDDlgItem, int a3)
{
  HWND DlgItem; // eax
  wchar_t Buffer[32]; // [esp+Ch] [ebp-40h] BYREF

  swprintf(Buffer, (const size_t)a02d02d02d_0, (const wchar_t *const)(a3 / 60 / 60), a3 / 60 % 60, a3 % 60); /*0x6c8f69*/
  DlgItem = GetDlgItem(hDlg, nIDDlgItem); /*0x6c8f73*/
  return SendMessageA(DlgItem, 0x4B2u, 0, (LPARAM)Buffer); /*0x6c8f8c*/
}
} // namespace gamemd

// 0x6C8FA0
namespace gamemd {
LRESULT sub_6C8FA0(CampaignScore * aP0, int nIDDlgItem, wchar_t * Format)
{
  HWND DlgItem; // eax
  wchar_t Buffer[32]; // [esp+8h] [ebp-40h] BYREF

  swprintf(Buffer, (const size_t)g_Str_Fmt_PctD, Format); /*0x6c8fb8*/
  DlgItem = GetDlgItem(aP0, nIDDlgItem); /*0x6c8fc2*/
  return SendMessageA(DlgItem, 0x4B2u, 0, (LPARAM)Buffer); /*0x6c8fdb*/
}
} // namespace gamemd

// 0x6C93F0
namespace gamemd {
void sub_6C93F0()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x6c93fc*/
  dbl_B0BF78 = Math::Sqrt(v0 + v0); /*0x6c940e*/
}
} // namespace gamemd

// 0x6C9420
namespace gamemd {
void sub_6C9420()
{
  dbl_B0BFC8 = dbl_B0BF78 / 60.0; /*0x6c942c*/
}
} // namespace gamemd

// 0x6C9440
namespace gamemd {
void sub_6C9440()
{
  dbl_B0BFB0 = 1.0 / dbl_B0BFC8; /*0x6c944c*/
}
} // namespace gamemd

// 0x6C9460
namespace gamemd {
void sub_6C9460()
{
  dbl_B0BFA8 = 0.0174532925199433 * 45.0; /*0x6c946c*/
}
} // namespace gamemd

// 0x6C9480
namespace gamemd {
void sub_6C9480()
{
  dbl_B0BF80 = 0.0174532925199433 * 60.0; /*0x6c948c*/
}
} // namespace gamemd

// 0x6C94A0
namespace gamemd {
void sub_6C94A0()
{
  dbl_B0BF68 = 0.0174532925199433 * 90.0; /*0x6c94ac*/
}
} // namespace gamemd

// 0x6C94C0
namespace gamemd {
long long sub_6C94C0()
{
  double v0; // st7
  int64_t result; // rax

  v0 = Math::Sin(dbl_B0BF68 - dbl_B0BF80); /*0x6c94d2*/
  result = Math::RoundToInt(v0 * dbl_B0BF78 * 0.5); /*0x6c94e6*/
  dword_B0BFD0 = result; /*0x6c94eb*/
  return result; /*0x6c94f0*/
}
} // namespace gamemd

// 0x6C9500
namespace gamemd {
void sub_6C9500()
{
  dbl_B0BF88 = Math::ArcTan((double)dword_B0BFD0 * 0.00390625); /*0x6c9517*/
}
} // namespace gamemd

// 0x6C9530
namespace gamemd {
void sub_6C9530()
{
  dbl_B0BFA0 = Math::ArcTan((double)(2 * dword_B0BFD0) / dbl_B0BF78); /*0x6c9552*/
}
} // namespace gamemd

// 0x6C9560
namespace gamemd {
long long sub_6C9560()
{
  int64_t result; // rax

  result = Math::RoundToInt((double)(4 * dword_B0BFD0) + 0.5); /*0x6c957b*/
  dword_B0BFC4 = result; /*0x6c9580*/
  return result; /*0x6c9586*/
}
} // namespace gamemd

// 0x6C9590
namespace gamemd {
int sub_6C9590()
{
  word_B0BF70 = 0; /*0x6c9592*/
  word_B0BF72 = 0; /*0x6c9598*/
  return 0; /*0x6c959e*/
}
} // namespace gamemd

// 0x6C95A0
namespace gamemd {
int sub_6C95A0()
{
  dword_B0BF90 = 0; /*0x6c95a2*/
  dword_B0BF94 = 0; /*0x6c95a7*/
  dword_B0BF98 = 0; /*0x6c95ac*/
  return 0; /*0x6c95b1*/
}
} // namespace gamemd

// 0x6C95C0
namespace gamemd {
int sub_6C95C0()
{
  dword_B0BFC0 = 0; /*0x6c95c5*/
  dword_B0BFB8 = 128; /*0x6c95cf*/
  dword_B0BFBC = 128; /*0x6c95d4*/
  return 128; /*0x6c95d9*/
}
} // namespace gamemd

// 0x6C96E0
namespace gamemd {
unsigned int * E4Recv_6C96E0::sub_6C96E0(unsigned int * a2, int a3)
{

  ObjectClass *v3; // eax
  int v4; // esi
  int v5; // ecx
  char *v6; // edx
  double v7; // st7
  int v9; // [esp+4h] [ebp-10h] BYREF
  int v10; // [esp+8h] [ebp-Ch]
  int v11; // [esp+Ch] [ebp-8h]
  int v12; // [esp+10h] [ebp-4h]

  v3 = this; /*0x6c96e3*/
  v9 = 0; /*0x6c96ec*/
  v4 = 4; /*0x6c96f0*/
  v10 = 0; /*0x6c96f5*/
  v11 = 0; /*0x6c96f9*/
  v12 = 0; /*0x6c96fd*/
  v5 = a3 - (unsigned int)this; /*0x6c9705*/
  v6 = (char *)((char *)&v9 - (char *)v3); /*0x6c9707*/
  do /*0x6c9716*/
  {
    v7 = *(float *)((char *)&v3->AbstractClass + v5) + *(float *)&v3->AbstractClass; /*0x6c970c*/
    v3 = (ObjectClass *)((char *)v3 + 4); /*0x6c970e*/
    --v4; /*0x6c9711*/
    *(float *)((char *)v3 + (unsigned int)v6 - 4) = v7; /*0x6c9712*/
  }
  while ( v4 ); /*0x6c9716*/
  *a2 = v9; /*0x6c9723*/
  a2[1] = v10; /*0x6c9729*/
  a2[2] = v11; /*0x6c9730*/
  a2[3] = v12; /*0x6c9737*/
  return a2; /*0x6c9722*/

}
} // namespace gamemd

// 0x6C9780
namespace gamemd {
unsigned int * E4Recv_6C9780::sub_6C9780(unsigned int * a2, float * a3)
{

  int v3; // esi
  float *v4; // eax
  char *v5; // ecx
  double v6; // st7
  int v8; // [esp+4h] [ebp-10h] BYREF
  int v9; // [esp+8h] [ebp-Ch]
  int v10; // [esp+Ch] [ebp-8h]
  int v11; // [esp+10h] [ebp-4h]

  v8 = 0; /*0x6c9789*/
  v9 = 0; /*0x6c978e*/
  v3 = 4; /*0x6c9792*/
  v10 = 0; /*0x6c9797*/
  v11 = 0; /*0x6c979b*/
  v4 = a3; /*0x6c979f*/
  v5 = (char *)(this - (char *)a3); /*0x6c97a3*/
  do /*0x6c97b4*/
  {
    v6 = *(float *)((char *)v4 + (unsigned int)v5) - *v4; /*0x6c97aa*/
    ++v4; /*0x6c97ac*/
    --v3; /*0x6c97af*/
    *(float *)((char *)v4 + (char *)&v8 - (char *)a3 - 4) = v6; /*0x6c97b0*/
  }
  while ( v3 ); /*0x6c97b4*/
  *a2 = v8; /*0x6c97c1*/
  a2[1] = v9; /*0x6c97c7*/
  a2[2] = v10; /*0x6c97ce*/
  a2[3] = v11; /*0x6c97d5*/
  return a2; /*0x6c97c0*/

}
} // namespace gamemd

// 0x6C9820
namespace gamemd {
int Float_FirstPositive(float * a1)
{
  int v1; // edx

  v1 = 0; /*0x6c9820*/
  while ( *a1 <= 0.0 ) /*0x6c982f*/
  {
    ++v1; /*0x6c9831*/
    ++a1; /*0x6c9832*/
    if ( v1 >= 4 ) /*0x6c9838*/
      return -1; /*0x6c983d*/
  }
  return v1; /*0x6c983d*/
}
} // namespace gamemd

// 0x6C9940
namespace gamemd {
int E4Recv_6C9940::sub_6C9940(char a2, char a3, unsigned char a4)
{

  uint16_t v4; // ax
  int result; // eax

  HIBYTE(v4) = a2; /*0x6c9946*/
  LOBYTE(v4) = a3; /*0x6c9950*/
  result = a4 | (v4 << 8); /*0x6c9957*/
  ((unsigned int *)this)[0] = (void *)result; /*0x6c9959*/
  return result; /*0x6c995c*/

}
} // namespace gamemd

// 0x6C9960
namespace gamemd {
void E4Recv_6C9960::sub_6C9960(wchar_t * String)
{

  int v3; // eax
  wchar_t *v4; // eax

  if ( ((unsigned int *)this)[0] ) /*0x6c9964*/
  {
    __3_YAXPAX_Z((void *)((unsigned int *)this)[0]); /*0x6c996c*/
    ((unsigned int *)this)[0] = 0; /*0x6c9974*/
  }
  if ( String ) /*0x6c9981*/
  {
    v3 = wcslen(String); /*0x6c9984*/
    v4 = (wchar_t *)__2_YAPAXI_Z(2 * v3 + 2); /*0x6c998e*/
    ((unsigned int *)this)[0] = (int)v4; /*0x6c9996*/
    if ( v4 ) /*0x6c999b*/
      wcscpy(v4, String); /*0x6c999f*/
  }

}
} // namespace gamemd

// 0x6C99B0
namespace gamemd {
int sub_6C99B0()
{
  dword_B0BFD8 = 0; /*0x6c99b2*/
  dword_B0BFDC = 0; /*0x6c99b7*/
  dword_B0BFE0 = 0; /*0x6c99bc*/
  dword_B0BFE4 = 0; /*0x6c99c1*/
  return 0; /*0x6c99c6*/
}
} // namespace gamemd

// 0x6C9AC0
namespace gamemd {
unsigned int * E4Recv_6C9AC0::sub_6C9AC0()
{

  this->AbstractClass = 0; /*0x6c9ac4*/
  ((unsigned int *)this)[0] = 0; /*0x6c9ac6*/
  ((unsigned int *)this)[0] = 0; /*0x6c9ac9*/
  ((unsigned int *)this)[0] = 0; /*0x6c9acc*/
  ((unsigned int *)this)[0] = 0; /*0x6c9acf*/
  ((unsigned int *)this)[0] = 0; /*0x6c9ad2*/
  ((unsigned int *)this)[0] = 0; /*0x6c9ad5*/
  ((unsigned int *)this)[0] = 0; /*0x6c9ad8*/
  ((unsigned int *)this)[0] = 0; /*0x6c9adb*/
  return &this->AbstractClass; /*0x6c9ade*/

}
} // namespace gamemd

// 0x6C9F00
namespace gamemd {
void ObjectClass::nullsub_40()
{

  ; /*0x6c9f00*/

}
} // namespace gamemd

// 0x6CA5A0
namespace gamemd {
unsigned int E4Recv_6CA5A0::sub_6CA5A0(wchar_t * Source)
{

  wchar_t *v1; // esi
  int v2; // edi
  wchar_t *v3; // ebx
  int v4; // eax
  int v5; // esi
  int v6; // ebp
  wchar_t *v7; // ebx
  int v8; // esi
  wchar_t Destination[12]; // [esp+10h] [ebp-18h] BYREF

  wcsncpy(Destination, (const wchar_t *)Source, 0xCu); /*0x6ca5af*/
  Destination[11] = 0; /*0x6ca5bb*/
  v1 = wcschr(Destination, 0x3Au); /*0x6ca5c7*/
  *v1++ = 0; /*0x6ca5d2*/
  v2 = WideChar::ToLong((int)Destination, 0, 10); /*0x6ca5e2*/
  v3 = wcschr(v1, 0x3Au); /*0x6ca5e9*/
  *v3 = 0; /*0x6ca5f0*/
  v4 = WideChar::ToLong((int)v1, 0, 10); /*0x6ca5f5*/
  v5 = (int)(v3 + 1); /*0x6ca5fa*/
  v6 = v4; /*0x6ca600*/
  v7 = wcschr(v3 + 1, 0x3Au); /*0x6ca607*/
  *v7 = 0; /*0x6ca60e*/
  v8 = WideChar::ToLong(v5, 0, 10); /*0x6ca61e*/
  return 60 * WideChar::ToLong((int)(v7 + 1), 0, 10) / 0x64u + 60 * (v8 + 60 * (v6 + 60 * v2)); /*0x6ca640*/

}
} // namespace gamemd

// 0x6CA670
namespace gamemd {
unsigned int sub_6CA670(wchar_t * a1, unsigned int * a2)
{
  unsigned int result; // eax

  result = sub_6CA5A0(a1); /*0x6ca673*/
  *a2 = result; /*0x6ca678*/
  return result; /*0x6ca67a*/
}
} // namespace gamemd

// 0x6CA680
namespace gamemd {
unsigned int sub_6CA680(wchar_t * a1, int a2)
{
  unsigned int result; // eax

  result = sub_6CA5A0(a1); /*0x6ca683*/
  if ( result ) /*0x6ca68a*/
    *(unsigned int *)(a2 + 4) = result; /*0x6ca68c*/
  return result; /*0x6ca68f*/
}
} // namespace gamemd

// 0x6CA730
namespace gamemd {
int sub_6CA730(BlowStraw * Str, unsigned int * a2)
{
  wchar_t *v4; // edi
  char v5; // al
  int v6; // esi
  wchar_t *v7; // edi
  uint8_t v9; // [esp+Ch] [ebp-Ch]
  char v10; // [esp+10h] [ebp-8h]
  char v11; // [esp+14h] [ebp-4h]

  v4 = wcschr(Str, 0x3Au); /*0x6ca742*/
  *v4 = 0; /*0x6ca749*/
  v5 = WideChar::ToLong((int)Str, 0, 10); /*0x6ca74e*/
  v6 = (int)(v4 + 1); /*0x6ca753*/
  v11 = v5; /*0x6ca759*/
  v7 = wcschr(v4 + 1, 0x3Au); /*0x6ca762*/
  *v7 = 0; /*0x6ca769*/
  v10 = WideChar::ToLong(v6, 0, 10); /*0x6ca77b*/
  v9 = WideChar::ToLong((int)(v7 + 1), 0, 10); /*0x6ca78c*/
  return sub_6C9940(a2, v11, v10, v9); /*0x6ca7a1*/
}
} // namespace gamemd

// 0x6CA7B0
namespace gamemd {
void sub_6CA7B0(wchar_t * String, void ** a2)
{
  sub_6C9960(a2, String); /*0x6ca7b3*/
}
} // namespace gamemd

// 0x6CABF0
namespace gamemd {
int sub_6CABF0()
{
  dword_B0BFF0 = 0; /*0x6cabf2*/
  dword_B0BFF4 = 0; /*0x6cabf7*/
  dword_B0BFF8 = 0; /*0x6cabfc*/
  dword_B0BFFC = 0; /*0x6cac01*/
  return 0; /*0x6cac06*/
}
} // namespace gamemd

// 0x6CAC10
namespace gamemd {
void sub_6CAC10()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x6cac1c*/
  dbl_B0C008 = Math::Sqrt(v0 + v0); /*0x6cac2e*/
}
} // namespace gamemd

// 0x6CAC40
namespace gamemd {
void sub_6CAC40()
{
  dbl_B0C080 = dbl_B0C008 / 60.0; /*0x6cac4c*/
}
} // namespace gamemd

// 0x6CAC60
namespace gamemd {
void sub_6CAC60()
{
  dbl_B0C068 = 1.0 / dbl_B0C080; /*0x6cac6c*/
}
} // namespace gamemd

// 0x6CAC80
namespace gamemd {
void sub_6CAC80()
{
  dbl_B0C060 = 0.0174532925199433 * 45.0; /*0x6cac8c*/
}
} // namespace gamemd

// 0x6CACA0
namespace gamemd {
void sub_6CACA0()
{
  dbl_B0C010 = 0.0174532925199433 * 60.0; /*0x6cacac*/
}
} // namespace gamemd

// 0x6CACC0
namespace gamemd {
void sub_6CACC0()
{
  dbl_B0BFE8 = 0.0174532925199433 * 90.0; /*0x6caccc*/
}
} // namespace gamemd

// 0x6CACE0
namespace gamemd {
long long sub_6CACE0()
{
  double v0; // st7
  int64_t result; // rax

  v0 = Math::Sin(dbl_B0BFE8 - dbl_B0C010); /*0x6cacf2*/
  result = Math::RoundToInt(v0 * dbl_B0C008 * 0.5); /*0x6cad06*/
  dword_B0C088 = result; /*0x6cad0b*/
  return result; /*0x6cad10*/
}
} // namespace gamemd

// 0x6CAD20
namespace gamemd {
void sub_6CAD20()
{
  dbl_B0C018 = Math::ArcTan((double)dword_B0C088 * 0.00390625); /*0x6cad37*/
}
} // namespace gamemd

// 0x6CAD50
namespace gamemd {
void sub_6CAD50()
{
  dbl_B0C030 = Math::ArcTan((double)(2 * dword_B0C088) / dbl_B0C008); /*0x6cad72*/
}
} // namespace gamemd

// 0x6CAD80
namespace gamemd {
long long sub_6CAD80()
{
  int64_t result; // rax

  result = Math::RoundToInt((double)(4 * dword_B0C088) + 0.5); /*0x6cad9b*/
  dword_B0C07C = result; /*0x6cada0*/
  return result; /*0x6cada6*/
}
} // namespace gamemd

// 0x6CADB0
namespace gamemd {
int sub_6CADB0()
{
  dword_B0C000 = 0; /*0x6cadb2*/
  return 0; /*0x6cadbe*/
}
} // namespace gamemd

// 0x6CADC0
namespace gamemd {
int sub_6CADC0()
{
  dword_B0C020 = 0; /*0x6cadc2*/
  dword_B0C024 = 0; /*0x6cadc7*/
  dword_B0C028 = 0; /*0x6cadcc*/
  return 0; /*0x6cadd1*/
}
} // namespace gamemd

// 0x6CADE0
namespace gamemd {
int sub_6CADE0()
{
  dword_B0C078 = 0; /*0x6cade5*/
  dword_B0C070 = 128; /*0x6cadef*/
  dword_B0C074 = 128; /*0x6cadf4*/
  return 128; /*0x6cadf9*/
}
} // namespace gamemd

// 0x6CAE00
namespace gamemd {
int sub_6CAE00()
{
  dword_B0C038 = 0; /*0x6cae1b*/
  dword_B0C03C = 1; /*0x6cae2a*/
  dword_B0C040 = -65535; /*0x6cae45*/
  dword_B0C044 = -65536; /*0x6cae59*/
  dword_B0C048 = -1; /*0x6cae6d*/
  dword_B0C050 = 0x1FFFF; /*0x6cae98*/
  dword_B0C04C = 0xFFFF; /*0x6caeab*/
  dword_B0C054 = 0x10000; /*0x6caeb1*/
  dword_B0C058 = 65537; /*0x6caeb7*/
  return 65537; /*0x6caebe*/
}
} // namespace gamemd

// 0x6CC070
namespace gamemd {
void ObjectClass::nullsub_231()
{

  ; /*0x6cc070*/

}
} // namespace gamemd

// 0x6CDE80
namespace gamemd {
void nullsub_235(int a1, int a2)
{
  ; /*0x6cde80*/
}
} // namespace gamemd

// 0x6CE360
namespace gamemd {
int sub_6CE360()
{
  dword_B0C098 = 0; /*0x6ce362*/
  dword_B0C09C = 0; /*0x6ce367*/
  dword_B0C0A0 = 0; /*0x6ce36c*/
  dword_B0C0A4 = 0; /*0x6ce371*/
  return 0; /*0x6ce376*/
}
} // namespace gamemd

// 0x6CE380
namespace gamemd {
void sub_6CE380()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x6ce38c*/
  dbl_B0C0B0 = Math::Sqrt(v0 + v0); /*0x6ce39e*/
}
} // namespace gamemd

// 0x6CE3B0
namespace gamemd {
void sub_6CE3B0()
{
  dbl_B0C100 = dbl_B0C0B0 / 60.0; /*0x6ce3bc*/
}
} // namespace gamemd

// 0x6CE3D0
namespace gamemd {
void sub_6CE3D0()
{
  dbl_B0C0E8 = 1.0 / dbl_B0C100; /*0x6ce3dc*/
}
} // namespace gamemd

// 0x6CE3F0
namespace gamemd {
void sub_6CE3F0()
{
  dbl_B0C0E0 = 0.0174532925199433 * 45.0; /*0x6ce3fc*/
}
} // namespace gamemd

// 0x6CE410
namespace gamemd {
void sub_6CE410()
{
  dbl_B0C0B8 = 0.0174532925199433 * 60.0; /*0x6ce41c*/
}
} // namespace gamemd

// 0x6CE430
namespace gamemd {
void sub_6CE430()
{
  dbl_B0C090 = 0.0174532925199433 * 90.0; /*0x6ce43c*/
}
} // namespace gamemd

// 0x6CE450
namespace gamemd {
long long sub_6CE450()
{
  double v0; // st7
  int64_t result; // rax

  v0 = Math::Sin(dbl_B0C090 - dbl_B0C0B8); /*0x6ce462*/
  result = Math::RoundToInt(v0 * dbl_B0C0B0 * 0.5); /*0x6ce476*/
  dword_B0C108 = result; /*0x6ce47b*/
  return result; /*0x6ce480*/
}
} // namespace gamemd

// 0x6CE490
namespace gamemd {
void sub_6CE490()
{
  dbl_B0C0C0 = Math::ArcTan((double)dword_B0C108 * 0.00390625); /*0x6ce4a7*/
}
} // namespace gamemd

// 0x6CE4C0
namespace gamemd {
void sub_6CE4C0()
{
  dbl_B0C0D8 = Math::ArcTan((double)(2 * dword_B0C108) / dbl_B0C0B0); /*0x6ce4e2*/
}
} // namespace gamemd

// 0x6CE4F0
namespace gamemd {
long long sub_6CE4F0()
{
  int64_t result; // rax

  result = Math::RoundToInt((double)(4 * dword_B0C108) + 0.5); /*0x6ce50b*/
  dword_B0C0FC = result; /*0x6ce510*/
  return result; /*0x6ce516*/
}
} // namespace gamemd

// 0x6CE520
namespace gamemd {
int sub_6CE520()
{
  word_B0C0A8 = 0; /*0x6ce522*/
  word_B0C0AA = 0; /*0x6ce528*/
  return 0; /*0x6ce52e*/
}
} // namespace gamemd

// 0x6CE530
namespace gamemd {
int sub_6CE530()
{
  dword_B0C0C8 = 0; /*0x6ce532*/
  dword_B0C0CC = 0; /*0x6ce537*/
  dword_B0C0D0 = 0; /*0x6ce53c*/
  return 0; /*0x6ce541*/
}
} // namespace gamemd

// 0x6CE550
namespace gamemd {
int sub_6CE550()
{
  dword_B0C0F8 = 0; /*0x6ce555*/
  dword_B0C0F0 = 128; /*0x6ce55f*/
  dword_B0C0F4 = 128; /*0x6ce564*/
  return 128; /*0x6ce569*/
}
} // namespace gamemd

// 0x6CE570
namespace gamemd {
ObjectClass * E4Recv_6CE570::sub_6CE570()
{

  int v2; // edi
  char **v3; // esi

  v2 = 0; /*0x6ce575*/
  v3 = (char **)&stru_8425A4.Name[7]; /*0x6ce577*/
  while ( _strcmpi(*v3, (char *)this) ) /*0x6ce58a*/
  {
    ++v3; /*0x6ce58c*/
    ++v2; /*0x6ce58f*/
    if ( (int)v3 >= (int)stru_8425A4.Type ) /*0x6ce596*/
      return -1; /*0x6ce59e*/
  }
  return v2; /*0x6ce598*/

}
} // namespace gamemd

// 0x6CF070
namespace gamemd {
int sub_6CF070()
{
  sub_6CF8F0(&dword_B0C114, 0, 0); /*0x6cf079*/
  dword_B0C114 = (int)&DynamicVectorClass_SwizzlePointerClass_vftable; /*0x6cf087*/
  dword_B0C128 = 10; /*0x6cf091*/
  dword_B0C124 = 0; /*0x6cf09b*/
  sub_6CF8F0(&dword_B0C12C, 0, 0); /*0x6cf0a5*/
  dword_B0C12C = (int)&DynamicVectorClass_SwizzlePointerClass_vftable; /*0x6cf0b4*/
  dword_B0C13C = 0; /*0x6cf0be*/
  SwizzleManagerClass_Instance = (int)&SwizzleManagerClass_vftable; /*0x6cf0c8*/
  dword_B0C128 = 1000; /*0x6cf0d2*/
  dword_B0C140 = 1000; /*0x6cf0d7*/
  return atexit(SwizzleManagerClass::Register); /*0x6cf0e2*/
}
} // namespace gamemd

// 0x6CF8F0
namespace gamemd {
unsigned int * E4Recv_6CF8F0::sub_6CF8F0(int a2, unsigned int * a3)
{

  unsigned int *v4; // eax
  int v5; // ecx
  unsigned int *v7; // eax
  unsigned int *v8; // ecx
  int v9; // edx

  this->Items = 0; /*0x6cf8fd*/
  this->Capacity = a2; /*0x6cf900*/
  this->IsInitialized = 1; /*0x6cf903*/
  this->IsAllocated = 0; /*0x6cf907*/
  this->vtable0 = &vt_VectorClass; /*0x6cf90a*/
  if ( !a2 ) /*0x6cf910*/
    return &this->vtable0; /*0x6cf910*/
  if ( !a3 ) /*0x6cf918*/
  {
    v7 = (unsigned int *)__2_YAPAXI_Z(8 * a2); /*0x6cf942*/
    if ( v7 ) /*0x6cf94c*/
    {
      v8 = v7; /*0x6cf951*/
      if ( a2 - 1 >= 0 ) /*0x6cf955*/
      {
        v9 = a2; /*0x6cf957*/
        do /*0x6cf961*/
        {
          *v8 = 0; /*0x6cf958*/
          v8[1] = 0; /*0x6cf95a*/
          v8 += 2; /*0x6cf95d*/
          --v9; /*0x6cf960*/
        }
        while ( v9 ); /*0x6cf961*/
        this->Items = v7; /*0x6cf963*/
        this->IsAllocated = 1; /*0x6cf966*/
        return &this->vtable0; /*0x6cf96f*/
      }
    }
    else
    {
      v7 = 0; /*0x6cf972*/
    }
    this->Items = v7; /*0x6cf974*/
    this->IsAllocated = 1; /*0x6cf977*/
    return &this->vtable0; /*0x6cf97b*/
  }
  v4 = a3; /*0x6cf91d*/
  if ( a2 - 1 >= 0 ) /*0x6cf921*/
  {
    v5 = a2; /*0x6cf923*/
    do /*0x6cf92d*/
    {
      *v4 = 0; /*0x6cf924*/
      v4[1] = 0; /*0x6cf926*/
      v4 += 2; /*0x6cf929*/
      --v5; /*0x6cf92c*/
    }
    while ( v5 ); /*0x6cf92d*/
  }
  this->Items = a3; /*0x6cf92f*/
  return &this->vtable0; /*0x6cf934*/

}
} // namespace gamemd

// 0x6CF990
namespace gamemd {
int sub_6CF990()
{
  dword_B0CB28 = 0; /*0x6cf992*/
  dword_B0CB2C = 0; /*0x6cf997*/
  dword_B0CB30 = 0; /*0x6cf99c*/
  dword_B0CB34 = 0; /*0x6cf9a1*/
  return 0; /*0x6cf9a6*/
}
} // namespace gamemd

// 0x6CF9B0
namespace gamemd {
void sub_6CF9B0()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x6cf9bc*/
  dbl_B0CB48 = Math::Sqrt(v0 + v0); /*0x6cf9ce*/
}
} // namespace gamemd

// 0x6CF9E0
namespace gamemd {
void sub_6CF9E0()
{
  dbl_B0CD30 = dbl_B0CB48 / 60.0; /*0x6cf9ec*/
}
} // namespace gamemd

// 0x6CFA00
namespace gamemd {
void sub_6CFA00()
{
  dbl_B0CCA8 = 1.0 / dbl_B0CD30; /*0x6cfa0c*/
}
} // namespace gamemd

// 0x6CFA20
namespace gamemd {
void sub_6CFA20()
{
  dbl_B0CCA0 = 0.0174532925199433 * 45.0; /*0x6cfa2c*/
}
} // namespace gamemd

// 0x6CFA40
namespace gamemd {
void sub_6CFA40()
{
  dbl_B0CB60 = 0.0174532925199433 * 60.0; /*0x6cfa4c*/
}
} // namespace gamemd

// 0x6CFA60
namespace gamemd {
void sub_6CFA60()
{
  dbl_B0C1B0 = 0.0174532925199433 * 90.0; /*0x6cfa6c*/
}
} // namespace gamemd

// 0x6CFA80
namespace gamemd {
long long sub_6CFA80()
{
  double v0; // st7
  int64_t result; // rax

  v0 = Math::Sin(dbl_B0C1B0 - dbl_B0CB60); /*0x6cfa92*/
  result = Math::RoundToInt(v0 * dbl_B0CB48 * 0.5); /*0x6cfaa6*/
  dword_B0CD3C = result; /*0x6cfaab*/
  return result; /*0x6cfab0*/
}
} // namespace gamemd

// 0x6CFAC0
namespace gamemd {
void sub_6CFAC0()
{
  dbl_B0CB70 = Math::ArcTan((double)dword_B0CD3C * 0.00390625); /*0x6cfad7*/
}
} // namespace gamemd

// 0x6CFAF0
namespace gamemd {
void sub_6CFAF0()
{
  dbl_B0CC30 = Math::ArcTan((double)(2 * dword_B0CD3C) / dbl_B0CB48); /*0x6cfb12*/
}
} // namespace gamemd

// 0x6CFB20
namespace gamemd {
long long sub_6CFB20()
{
  int64_t result; // rax

  result = Math::RoundToInt((double)(4 * dword_B0CD3C) + 0.5); /*0x6cfb3b*/
  dword_B0CD2C = result; /*0x6cfb40*/
  return result; /*0x6cfb46*/
}
} // namespace gamemd

// 0x6CFB50
namespace gamemd {
int sub_6CFB50()
{
  word_B0CB40 = 0; /*0x6cfb52*/
  word_B0CB42 = 0; /*0x6cfb58*/
  return 0; /*0x6cfb5e*/
}
} // namespace gamemd

// 0x6CFB60
namespace gamemd {
int sub_6CFB60()
{
  dword_B0CC10 = 0; /*0x6cfb62*/
  dword_B0CC14 = 0; /*0x6cfb67*/
  dword_B0CC18 = 0; /*0x6cfb6c*/
  return 0; /*0x6cfb71*/
}
} // namespace gamemd

// 0x6CFB80
namespace gamemd {
int sub_6CFB80()
{
  dword_B0CD20 = 0; /*0x6cfb85*/
  dword_B0CD18 = 128; /*0x6cfb8f*/
  dword_B0CD1C = 128; /*0x6cfb94*/
  return 128; /*0x6cfb99*/
}
} // namespace gamemd

// 0x6CFBA0
namespace gamemd {
int sub_6CFBA0()
{
  unsigned char *v0; // esi
  int v1; // edi

  v0 = &stru_B0C1C0; /*0x6cfba2*/
  v1 = 25; /*0x6cfba7*/
  do /*0x6cfbb7*/
  {
    ShapeButtonClass::Init(v0); /*0x6cfbae*/
    v0 += 96; /*0x6cfbb3*/
    --v1; /*0x6cfbb6*/
  }
  while ( v1 ); /*0x6cfbb7*/
  return atexit(sub_6CFBD0); /*0x6cfbc6*/
}
} // namespace gamemd

// 0x6CFBD0
namespace gamemd {
void sub_6CFBD0()
{
  int *v0; // esi
  int v1; // edi

  if ( (byte_B0C1AC & 1) == 0 ) /*0x6cfbda*/
  {
    byte_B0C1AC |= 1u; /*0x6cfbe0*/
    v0 = &dword_B0CB20; /*0x6cfbe6*/
    v1 = 25; /*0x6cfbeb*/
    do /*0x6cfbfb*/
    {
      v0 -= 24; /*0x6cfbf0*/
      ShapeButtonClass::Destructor((int)v0); /*0x6cfbf5*/
      --v1; /*0x6cfbfa*/
    }
    while ( v1 ); /*0x6cfbfb*/
  }
}
} // namespace gamemd

// 0x6CFC00
namespace gamemd {
int sub_6CFC00()
{
  ShapeButtonClass::Init(stru_B0CCB0); /*0x6cfc05*/
  return atexit(sub_6CFC20); /*0x6cfc15*/
}
} // namespace gamemd

// 0x6CFC20
namespace gamemd {
void sub_6CFC20()
{
  if ( (byte_B0C1AC & 2) == 0 ) /*0x6cfc2a*/
  {
    byte_B0C1AC |= 2u; /*0x6cfc2e*/
    ShapeButtonClass::Destructor((int)stru_B0CCB0); /*0x6cfc39*/
  }
}
} // namespace gamemd

// 0x6CFC40
namespace gamemd {
int sub_6CFC40()
{
  ShapeButtonClass::Init(stru_B0CC40); /*0x6cfc45*/
  return atexit(sub_6CFC60); /*0x6cfc55*/
}
} // namespace gamemd

// 0x6CFC60
namespace gamemd {
void sub_6CFC60()
{
  if ( (byte_B0C1AC & 4) == 0 ) /*0x6cfc6a*/
  {
    byte_B0C1AC |= 4u; /*0x6cfc6e*/
    ShapeButtonClass::Destructor((int)stru_B0CC40); /*0x6cfc79*/
  }
}
} // namespace gamemd

// 0x6CFD20
namespace gamemd {
void sub_6CFD20(int a1, int a2)
{
  g_ObjectTrackingPool[a1] = a2; /*0x6cfd20*/
}
} // namespace gamemd

// 0x6CFD30
namespace gamemd {
int sub_6CFD30(int a1)
{
  return g_ObjectTrackingPool[a1]; /*0x6cfd37*/
}
} // namespace gamemd

// 0x6CFD40
namespace gamemd {
char * FontClass_GetEntry(int a1)
{
  unsigned int v1; // eax

  v1 = g_ObjectTrackingPool[a1]; /*0x6cfd40*/
  if ( v1 > 0x18 ) /*0x6cfd49*/
    return 0; /*0x6cfd5c*/
  else
    return (char *)&stru_B0C1C0 + 96 * v1; /*0x6cfd56*/
}
} // namespace gamemd

// 0x6CFE10
namespace gamemd {
int E4Recv_6CFE10::sub_6CFE10()
{

  return (int)&this->AbstractClass - dword_B0CC20 + 1; /*0x6cfe19*/

}
} // namespace gamemd
