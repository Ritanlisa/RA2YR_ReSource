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

// 0x6C6F50
namespace gamemd {
int ProcessGameResults(char a1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  IUnknown *v2; // esi
  char *inited; // eax
  INIClass *v5; // esi
  ObjectClass *v8; // esi
  IUnknown *v11; // esi
  ObjectClass *v19; // esi
  char *eax31; // eax
  IUnknown *v21; // esi
  IUnknown *v30; // esi
  IUnknown *v33; // esi
  IUnknown *v41; // esi
  IUnknown *v44; // esi
  IUnknown *v49; // esi
  IUnknown *v52; // esi
  HouseClass *v55; // edx
  CampaignScore *v57; // edi
  CampaignScore **ecx71; // ecx
  IUnknown *v59; // esi
  CampaignScore *eax72; // eax
  ObjectClass *v60; // ebx
  ObjectClass *v61; // eax
  IUnknown *v62; // ecx
  IUnknown *v68; // ebp
  IUnknown *v73; // esi
  IUnknown *v86; // esi
  char *eax130; // eax
  char *v87; // eax
  char *v88; // eax
  IUnknown *v89; // esi
  char *v90; // eax
  char *v91; // eax
  char *ModuleInternalVersion; // eax
  char *v93; // eax
  char *v94; // eax
  char *v95; // eax
  char *v96; // eax
  char *v97; // eax
  char *v98; // eax
  char *v99; // eax
  char *v100; // eax
  IUnknown *v101; // esi
  char *v102; // eax
  char *v103; // eax
  IUnknown *v104; // eax
  int v105; // esi
  char v106; // bl
  char *v107; // eax
  char *v108; // eax
  ObjectClass *v110; // edi
  char *eax169; // eax
  char *v111; // eax
  ObjectClass *v113; // edi
  char *eax172; // eax
  char *v114; // eax
  ObjectClass *v116; // edi
  char *eax175; // eax
  char *v117; // eax
  IUnknown *v118; // edi
  char *v119; // eax
  char *v120; // eax
  char *v121; // eax
  char *v122; // eax
  char v123; // al
  char *v124; // eax
  char *v125; // eax
  ObjectClass *v127; // edi
  char *eax191; // eax
  char *v128; // eax
  ObjectClass *v130; // edi
  char *eax194; // eax
  char *v131; // eax
  int v132; // edi
  char *v133; // eax
  char *v134; // eax
  int v135; // ebp
  int v136; // edi
  ObjectClass *v138; // edi
  char *eax204; // eax
  char *v139; // eax
  int v140; // ebp
  int v141; // edi
  ObjectClass *v143; // edi
  char *eax211; // eax
  char *v144; // eax
  int v145; // ebp
  int v146; // edi
  ObjectClass *v148; // edi
  char *eax218; // eax
  char *v149; // eax
  int v150; // ebp
  int v151; // edi
  ObjectClass *v153; // edi
  char *eax225; // eax
  char *v154; // eax
  int i; // edi
  int v156; // eax
  int j; // edi
  int v158; // eax
  int v159; // eax
  int k; // edi
  int v161; // eax
  int v162; // ebp
  int m; // edi
  int v164; // ebx
  int v165; // edi
  ObjectClass *v167; // edi
  char *eax247; // eax
  char *v168; // eax
  int v169; // ebx
  int v170; // ebp
  int n; // edi
  ObjectClass *v173; // edi
  char *eax254; // eax
  char *v174; // eax
  int v175; // ebx
  int v176; // ebp
  int ii; // edi
  ObjectClass *v179; // edi
  char *eax261; // eax
  char *v180; // eax
  int v181; // ebx
  int v182; // ebp
  int jj; // edi
  ObjectClass *v185; // edi
  char *eax268; // eax
  char *v186; // eax
  int v187; // edi
  int v188; // ebx
  ObjectClass *v190; // edi
  char *eax275; // eax
  char *v191; // eax
  int v192; // ebx
  int v193; // ebp
  int kk; // edi
  ObjectClass *v196; // edi
  char *eax282; // eax
  char *v197; // eax
  int v198; // ebx
  int v199; // ebp
  int mm; // edi
  ObjectClass *v202; // edi
  char *eax289; // eax
  char *v203; // eax
  int v204; // ebx
  int v205; // ebp
  int nn; // edi
  ObjectClass *v208; // edi
  char *eax296; // eax
  char *v209; // eax
  int v210; // ebx
  int v211; // edi
  ObjectClass *v213; // edi
  char *eax303; // eax
  char *v214; // eax
  int v215; // ebx
  int v216; // edi
  ObjectClass *v218; // edi
  char *eax310; // eax
  char *v219; // eax
  char v220; // bl
  ObjectClass *v222; // esi
  char *eax313; // eax
  char *v223; // eax
  IUnknown *v224; // edi
  IUnknown *v225; // ebp
  IUnknown *v226; // esi
  char *v227; // eax
  char *v228; // eax
  char *v229; // eax
  unsigned int v230; // esi
  char *v231; // eax
  char *v232; // eax
  char *v233; // eax
  SIZE_T dwTotalPhys; // esi
  char *v235; // eax
  char *v236; // eax
  char *v237; // eax
  unsigned int v238; // esi
  char *v239; // eax
  char *v240; // eax
  char *v241; // eax
  char *vfptr; // esi
  int X; // ecx
  char v244; // al
  int v245; // ecx
  _DWORD *v246; // edi
  char *v247; // esi
  int v248; // eax
  int v249; // ecx
  int v250; // ebx
  char *v251; // ebp
  AbstractClass *v252; // esi
  char v253; // al
  unsigned int v254; // ecx
  char *v255; // edx
  int v256; // ebx
  char *v257; // ebp
  AbstractClass *v258; // esi
  char v259; // al
  unsigned int v260; // ecx
  char *v261; // edx
  _DWORD v262[3]; // [esp+24h] [ebp-8394h] BYREF
  char v263; // [esp+33h] [ebp-8385h]
  rc_ptr_base v264; // [esp+34h] [ebp-8384h] BYREF
  int v265; // [esp+38h] [ebp-8380h]
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
  __int16 v279; // [esp+74h] [ebp-8344h]
  __int16 v280; // [esp+76h] [ebp-8342h]
  char v281; // [esp+78h] [ebp-8340h]
  int v282; // [esp+7Ch] [ebp-833Ch] BYREF
  _BYTE v283[28]; // [esp+80h] [ebp-8338h] BYREF
  IUnknown *v284[8]; // [esp+9Ch] [ebp-831Ch]
  struct _MEMORYSTATUS Buffer; // [esp+BCh] [ebp-82FCh] BYREF
  CHAR v286[128]; // [esp+DCh] [ebp-82DCh] BYREF
  int v287[15]; // [esp+15Ch] [ebp-825Ch] BYREF
  int v288; // [esp+198h] [ebp-8220h]
  CHAR Filename[280]; // [esp+298h] [ebp-8120h] BYREF
  _DWORD v290[8194]; // [esp+3B0h] [ebp-8008h] BYREF

  v266 = a1;
  v262[0] = 0;
  v262[1] = 0;
  aP2 = 0;
  v269 = 0;
  if ( *(&g_MatrixTransformState + 2274) && HouseClass_Player == (IUnknown *)*(&g_MatrixTransformState + 2274) )
  {
    ResultNode::CleanupList(v262);
    return;
  }
  Debug::Log();
  v2 = dword_B779D4;
  char * v3 = (char *)__2_YAPAXI_Z(0x10u);
  if ( v3 )
    inited = TerrainInitMap(v3, (RandomStruct *)&stru_830620[72452], v2);
  else
    inited = 0;
  LinkedList::PushFront(v262, (IUnknown *)inited);
  if ( g_GameMode_Current == (CellStruct *)4 && g_GameOptionsFlags == 3 )
  {
    v5 = g_GameDifficulty;
    char * v6 = (char *)__2_YAPAXI_Z(0x10u);
    if ( v6 )
      char * v7 = NetMessage::Pack4(v6, (RandomStruct *)&stru_830620[72444], (int)v5);
    else
      v7 = 0;
    LinkedList::PushFront(v262, (IUnknown *)v7);
    v8 = dword_B77D6C;
    if ( !a1 )
      v8 = dword_B73814;
  }
  else
  {
    v8 = dword_B77D6C;
  }
  char * v9 = (char *)__2_YAPAXI_Z(0x10u);
  if ( v9 )
    char * v10 = TerrainInitMap(v9, (RandomStruct *)&stru_830620[72436], (IUnknown *)v8);
  else
    v10 = 0;
  LinkedList::PushFront(v262, (IUnknown *)v10);
  v11 = dword_B779C4;
  char * v12 = (char *)__2_YAPAXI_Z(0x10u);
  if ( v12 )
    char * v13 = TerrainInitMap(v12, (RandomStruct *)&stru_830620[72428], v11);
  else
    v13 = 0;
  LinkedList::PushFront(v262, (IUnknown *)v13);
  if ( g_GameMode_Current == (CellStruct *)4 && g_GameOptionsFlags == 3 && a1 )
    dword_B779C4 = 0;
  LOBYTE(v264.vfptr) = DataGlobal_00A8B8C2 == 1;
  char * v14 = (char *)__2_YAPAXI_Z(0x10u);
  if ( v14 )
    char * v15 = String::AllocAndCopy(v14, (RandomStruct *)&stru_830620[72420], (IUnknown *)v264.vfptr);
  else
    v15 = 0;
  LinkedList::PushFront(v262, (IUnknown *)v15);
  LOBYTE(v264.vfptr) = DataGlobal_A8B8C1 == 1;
  char * v16 = (char *)__2_YAPAXI_Z(0x10u);
  if ( v16 )
    char * v17 = String::AllocAndCopy(v16, (RandomStruct *)&stru_830620[72412], (IUnknown *)v264.vfptr);
  else
    v17 = 0;
  LinkedList::PushFront(v262, (IUnknown *)v17);
  v19 = (ObjectClass *)(*(_DWORD *)&g_OverlayTypeConfig[17744] / 0x3Cu);
  eax31 = (char *)__2_YAPAXI_Z(0x10u);
  if ( eax31 )
    char * v20 = TerrainInitMap(eax31, (RandomStruct *)&stru_830620[72404], (IUnknown *)v19);
  else
    v20 = 0;
  LinkedList::PushFront(v262, (IUnknown *)v20);
  v21 = (IUnknown *)g_Rules_Bases;
  char * v22 = (char *)__2_YAPAXI_Z(0x10u);
  if ( v22 )
    char * v23 = TerrainInitMap(v22, (RandomStruct *)&stru_830620[72396], v21);
  else
    v23 = 0;
  LinkedList::PushFront(v262, (IUnknown *)v23);
  bool v24 = (_BYTE)ShortGame != 0;
  char * v25 = (char *)__2_YAPAXI_Z(0x10u);
  if ( v25 )
    char * v26 = TerrainInitMap(v25, (RandomStruct *)&stru_830620[72388], (IUnknown *)v24);
  else
    v26 = 0;
  LinkedList::PushFront(v262, (IUnknown *)v26);
  bool v27 = (_BYTE)SWAllowed != 0;
  char * v28 = (char *)__2_YAPAXI_Z(0x10u);
  if ( v28 )
    char * v29 = TerrainInitMap(v28, (RandomStruct *)&stru_830620[72380], (IUnknown *)v27);
  else
    v29 = 0;
  LinkedList::PushFront(v262, (IUnknown *)v29);
  v30 = g_ScenarioFlags;
  char * v31 = (char *)__2_YAPAXI_Z(0x10u);
  if ( v31 )
    char * v32 = TerrainInitMap(v31, (RandomStruct *)&stru_830620[72372], v30);
  else
    v32 = 0;
  LinkedList::PushFront(v262, (IUnknown *)v32);
  v33 = (IUnknown *)(((_BYTE)MCVRedeploy == 1) + 2 * ((_BYTE)g_Rules_ShortGame == 1));
  char * v34 = (char *)__2_YAPAXI_Z(0x10u);
  if ( v34 )
    char * v35 = TerrainInitMap(v34, (RandomStruct *)&stru_830620[72364], v33);
  else
    v35 = 0;
  LinkedList::PushFront(v262, (IUnknown *)v35);
  LOBYTE(v264.vfptr) = (_BYTE)Bases != 0;
  char * v36 = (char *)__2_YAPAXI_Z(0x10u);
  if ( v36 )
    char * v37 = String::AllocAndCopy(v36, (RandomStruct *)&stru_830620[72356], (IUnknown *)v264.vfptr);
  else
    v37 = 0;
  LinkedList::PushFront(v262, (IUnknown *)v37);
  bool v38 = (_BYTE)Crates != 0;
  char * v39 = (char *)__2_YAPAXI_Z(0x10u);
  if ( v39 )
    char * v40 = TerrainInitMap(v39, (RandomStruct *)&stru_830620[72348], (IUnknown *)v38);
  else
    v40 = 0;
  LinkedList::PushFront(v262, (IUnknown *)v40);
  v41 = (IUnknown *)g_Rules_AlliesAllowed;
  char * v42 = (char *)__2_YAPAXI_Z(0x10u);
  if ( v42 )
    char * v43 = TerrainInitMap(v42, (RandomStruct *)&stru_830620[72340], v41);
  else
    v43 = 0;
  LinkedList::PushFront(v262, (IUnknown *)v43);
  v44 = (IUnknown *)g_Rules_MultiEngineer;
  char * v45 = (char *)__2_YAPAXI_Z(0x10u);
  if ( v45 )
    char * v46 = TerrainInitMap(v45, (RandomStruct *)&stru_830620[59868], v44);
  else
    v46 = 0;
  LinkedList::PushFront(v262, (IUnknown *)v46);
  char * v47 = (char *)__2_YAPAXI_Z(0x10u);
  if ( v47 )
    char * v48 = BuildResultPacket(v47, &stru_830620[72332], (IUnknown *)&Destination);
  else
    v48 = 0;
  LinkedList::PushFront(v262, (IUnknown *)v48);
  v49 = (IUnknown *)dword_B77780;
  char * v50 = (char *)__2_YAPAXI_Z(0x10u);
  if ( v50 )
    char * v51 = TerrainInitMap(v50, (RandomStruct *)&stru_830620[72324], v49);
  else
    v51 = 0;
  LinkedList::PushFront(v262, (IUnknown *)v51);
  v52 = (IUnknown *)dword_B77CE0;
  char * v53 = (char *)__2_YAPAXI_Z(0x10u);
  if ( v53 )
    char * v54 = TerrainInitMap(v53, (RandomStruct *)&stru_830620[72316], v52);
  else
    v54 = 0;
  LinkedList::PushFront(v262, (IUnknown *)v54);
  if ( (int)HouseClass_Count > 0 )
  {
    v55 = HouseClass_Array;
    v57 = (CampaignScore *)*(&g_MatrixTransformState + 2274);
    ecx71 = (CampaignScore **)&v282;
    v59 = HouseClass_Count;
    do
    {
      eax72 = *(CampaignScore **)v55->__pad_0;
      if ( *(_BYTE *)(*(_DWORD *)v55->__pad_0 + 492) && eax72 != v57 )
      {
        v60 = aP2;
        *ecx71++ = eax72;
        aP2 = (ObjectClass *)&v60->__pad_0[1];
      }
      v55 = (HouseClass *)((char *)v55 + 4);
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
        _BYTE * v64 = v283;
        int v65 = v63;
        do
        {
          int v66 = *(_DWORD *)v64;
          int v67 = *((_DWORD *)v64 - 1);
          if ( _strcmpi((char *)(v67 + 90100), (char *)(*(_DWORD *)v64 + 90100)) > 0 )
          {
            *((_DWORD *)v64 - 1) = v66;
            *(_DWORD *)v64 = v67;
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
    _BYTE * v69 = v283;
    char * v70 = (char *)&aP2[-1].lineTrailer + 3;
    do
    {
      int v71 = *(_DWORD *)v69;
      if ( !_strcmpi((char *)(*(_DWORD *)v69 + 90100), byte_B779E0) )
      {
        int v72 = v282;
        v282 = v71;
        *(_DWORD *)v69 = v72;
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
      v73 = (IUnknown *)((char *)v73 + 1);
      ++v74;
      if ( v73 >= v68 )
        goto LABEL_95;
    }
    v269 = v73;
  }
LABEL_95:
  char * v75 = (char *)__2_YAPAXI_Z(0x10u);
  if ( v75 )
    char * v76 = TerrainInitMap(v75, (RandomStruct *)&stru_830620[72308], v68);
  else
    v76 = 0;
  LinkedList::PushFront(v262, (IUnknown *)v76);
  char * v77 = (char *)__2_YAPAXI_Z(0x10u);
  if ( v77 )
    char * v78 = TerrainInitMap(v77, (RandomStruct *)&stru_830620[72300], v269);
  else
    v78 = 0;
  LinkedList::PushFront(v262, (IUnknown *)v78);
  if ( dword_B779C4 == (IUnknown *)1 )
  {
    LoadPlayerProfile(&v264, (const char **)&g_WebBrowser);
    if ( !v266 )
    {
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
    ComPtr::Release(&v264);
  }
  unsigned int v79 = 0;
  if ( aP2 )
  {
    char v80 = DataGlobal_A8B8C1;
    do
    {
      if ( v80 )
      {
        _BYTE * v81 = *(_BYTE **)&v283[4 * v79 - 4];
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
  int v82 = *(_DWORD *)dword_B77788;
  char * v83 = (char *)__2_YAPAXI_Z(0x10u);
  if ( v83 )
    char * v84 = NetMessage::Pack4(v83, (RandomStruct *)&stru_830620[72292], v82);
  else
    v84 = 0;
  LinkedList::PushFront(v262, (IUnknown *)v84);
  if ( *(_DWORD *)&g_OverlayTypeConfig[17744] / 60 )
  {
    v86 = (IUnknown *)(*(_DWORD *)&g_NetworkPlayerBuffer[5960]
                     / (unsigned int)(*(_DWORD *)&g_OverlayTypeConfig[17744] / 60));
    eax130 = (char *)__2_YAPAXI_Z(0x10u);
    if ( eax130 )
    {
      v87 = TerrainInitMap(eax130, (RandomStruct *)&stru_830620[72284], v86);
      goto LABEL_135;
    }
  }
  else
  {
    v88 = (char *)__2_YAPAXI_Z(0x10u);
    if ( v88 )
    {
      v87 = NetMessage::Pack4(v88, (RandomStruct *)&stru_830620[72284], 0);
      goto LABEL_135;
    }
  }
  v87 = 0;
LABEL_135:
  LinkedList::PushFront(v262, (IUnknown *)v87);
  v89 = *(IUnknown **)&g_NetworkPlayerBuffer[5412];
  v90 = (char *)__2_YAPAXI_Z(0x10u);
  if ( v90 )
    v91 = TerrainInitMap(v90, (RandomStruct *)&stru_830620[72276], v89);
  else
    v91 = 0;
  LinkedList::PushFront(v262, (IUnknown *)v91);
  ModuleInternalVersion = GetModuleInternalVersion((int)&g_NetworkPlayerBuffer[5796]);
  wsprintfA(v286, &stru_830620[72272], ModuleInternalVersion);
  v93 = (char *)__2_YAPAXI_Z(0x10u);
  if ( v93 )
    v94 = BuildResultPacket(v93, &stru_830620[72264], (IUnknown *)v286);
  else
    v94 = 0;
  LinkedList::PushFront(v262, (IUnknown *)v94);
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
  FileClass::Open2(&v272, (const CHAR *)1);
  if ( hFile != (HANDLE)-1 && GetFileTime(hFile, 0, 0, &LastWriteTime) )
  {
    LastWriteTime.dwLowDateTime = htonl(LastWriteTime.dwLowDateTime);
    LastWriteTime.dwHighDateTime = htonl(LastWriteTime.dwHighDateTime);
    v95 = (char *)__2_YAPAXI_Z(0x10u);
    if ( v95 )
      v96 = NetMessage::Pack(v95, &stru_830620[72256], (IUnknown *)&LastWriteTime, (IUnknown *)8);
    else
      v96 = 0;
    LinkedList::PushFront(v262, (IUnknown *)v96);
  }
  if ( g_GameOptionsFlags != 1 )
  {
    if ( g_GameOptionsFlags == 2 )
    {
      v99 = (char *)__2_YAPAXI_Z(0x10u);
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
      v100 = (char *)__2_YAPAXI_Z(0x10u);
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
  v97 = (char *)__2_YAPAXI_Z(0x10u);
  if ( !v97 )
    goto LABEL_156;
  v98 = TerrainInitMap(v97, (RandomStruct *)&stru_830620[72248], (IUnknown *)2);
LABEL_157:
  LinkedList::PushFront(v262, (IUnknown *)v98);
LABEL_158:
  if ( g_GameStateFlags )
  {
    v101 = (IUnknown *)(*(int (__thiscall **)(SkirmishDialog *))(*(_DWORD *)g_GameStateFlags->__pad_0 + 184))(g_GameStateFlags);
    v102 = (char *)__2_YAPAXI_Z(0x10u);
    if ( v102 )
      v103 = TerrainInitMap(v102, (RandomStruct *)&stru_830620[72240], v101);
    else
      v103 = 0;
    LinkedList::PushFront(v262, (IUnknown *)v103);
  }
  v104 = 0;
  v268 = 0;
  if ( aP2 )
  {
    while ( 1 )
    {
      v105 = *(_DWORD *)&v283[4 * (_DWORD)v104 - 4];
      v106 = (_BYTE)v104 + 48;
      v263 = (_BYTE)v104 + 48;
      stru_830620[71971] = (_BYTE)v104 + 48;
      v107 = (char *)__2_YAPAXI_Z(0x10u);
      if ( v107 )
        v108 = BuildResultPacket(v107, &stru_830620[71968], (IUnknown *)(v105 + 90100));
      else
        v108 = 0;
      LinkedList::PushFront(v262, (IUnknown *)v108);
      v110 = *(ObjectClass **)(v105 + 512);
      stru_830620[72147] = v106;
      eax169 = (char *)__2_YAPAXI_Z(0x10u);
      if ( eax169 )
        v111 = TerrainInitMap(eax169, (RandomStruct *)&stru_830620[72144], (IUnknown *)v110);
      else
        v111 = 0;
      LinkedList::PushFront(v262, (IUnknown *)v111);
      v113 = *(ObjectClass **)(v105 + 516);
      stru_830620[72155] = v106;
      eax172 = (char *)__2_YAPAXI_Z(0x10u);
      if ( eax172 )
        v114 = TerrainInitMap(eax172, (RandomStruct *)&stru_830620[72152], (IUnknown *)v113);
      else
        v114 = 0;
      LinkedList::PushFront(v262, (IUnknown *)v114);
      stru_830620[71979] = v106;
      v116 = *(ObjectClass **)(v105 + 488);
      eax175 = (char *)__2_YAPAXI_Z(0x10u);
      if ( eax175 )
        v117 = TerrainInitMap(eax175, (RandomStruct *)&stru_830620[71976], (IUnknown *)v116);
      else
        v117 = 0;
      LinkedList::PushFront(v262, (IUnknown *)v117);
      stru_830620[71987] = v106;
      v118 = v268;
      if ( dword_B779C4 == (IUnknown *)2 )
        v118 = *(IUnknown **)(v105 + 516);
      v119 = (char *)__2_YAPAXI_Z(0x10u);
      if ( v119 )
        v120 = TerrainInitMap(v119, (RandomStruct *)&stru_830620[71984], v118);
      else
        v120 = 0;
      LinkedList::PushFront(v262, (IUnknown *)v120);
      stru_830620[72139] = v106;
      v121 = (char *)__2_YAPAXI_Z(0x10u);
      if ( v121 )
        v122 = TerrainInitMap(v121, (RandomStruct *)&stru_830620[72136], v284[(_DWORD)v268]);
      else
        v122 = 0;
      LinkedList::PushFront(v262, (IUnknown *)v122);
      stru_830620[72163] = v106;
      v123 = *(_BYTE *)(v105 + 520);
      LOBYTE(v270) = 0;
      if ( v123 )
        LOBYTE(v270) = *(_BYTE *)(v105 + 583) == 0;
      v124 = (char *)__2_YAPAXI_Z(0x10u);
      if ( v124 )
        v125 = String::AllocAndCopy(v124, (RandomStruct *)&stru_830620[72160], v270);
      else
        v125 = 0;
      LinkedList::PushFront(v262, (IUnknown *)v125);
      stru_830620[71995] = v106;
      v127 = *(ObjectClass **)(v105 + 90196);
      eax191 = (char *)__2_YAPAXI_Z(0x10u);
      if ( eax191 )
        v128 = TerrainInitMap(eax191, (RandomStruct *)&stru_830620[71992], (IUnknown *)v127);
      else
        v128 = 0;
      LinkedList::PushFront(v262, (IUnknown *)v128);
      stru_830620[72003] = v106;
      v130 = *(ObjectClass **)(*(_DWORD *)(v105 + 52) + 184);
      eax194 = (char *)__2_YAPAXI_Z(0x10u);
      if ( eax194 )
        v131 = TerrainInitMap(eax194, (RandomStruct *)&stru_830620[72000], (IUnknown *)v130);
      else
        v131 = 0;
      LinkedList::PushFront(v262, (IUnknown *)v131);
      stru_830620[72011] = v106;
      v132 = (*(int (__stdcall **)(int))(*(_DWORD *)(v105 + 36) + 24))(v105 + 36);
      v133 = (char *)__2_YAPAXI_Z(0x10u);
      if ( v133 )
        v134 = NetMessage::Pack4(v133, (RandomStruct *)&stru_830620[72008], v132);
      else
        v134 = 0;
      LinkedList::PushFront(v262, (IUnknown *)v134);
      stru_830620[72059] = v106;
      stru_830620[72051] = v106;
      stru_830620[72067] = v106;
      stru_830620[72075] = v106;
      HouseClass::NetworkConvert((_DWORD *)(v105 + 2864));
      HouseClass::NetworkConvert((_DWORD *)(v105 + 4920));
      HouseClass::NetworkConvert((_DWORD *)(v105 + 808));
      HouseClass::NetworkConvert((_DWORD *)(v105 + 6976));
      v135 = *(_DWORD *)(v105 + 4912);
      v136 = 0;
      for ( v264.vfptr = 0; v136 < v135; ++v136 )
      {
        if ( *((_DWORD *)__0Iostream_init_QAE_XZ_7((Iostream_init *)(v105 + 2864)) + v136) )
          v264.vfptr = (void *)(v136 + 1);
      }
      v138 = (ObjectClass *)__0Iostream_init_QAE_XZ_7((Iostream_init *)(v105 + 2864));
      eax204 = (char *)__2_YAPAXI_Z(0x10u);
      if ( eax204 )
        v139 = NetMessage::Pack(
                 eax204,
                 &stru_830620[72056],
                 (IUnknown *)v138,
                 (IUnknown *)(4 * (int)v264.vfptr));
      else
        v139 = 0;
      LinkedList::PushFront(v262, (IUnknown *)v139);
      v140 = *(_DWORD *)(v105 + 6968);
      v141 = 0;
      for ( v264.vfptr = 0; v141 < v140; ++v141 )
      {
        if ( *((_DWORD *)__0Iostream_init_QAE_XZ_7((Iostream_init *)(v105 + 4920)) + v141) )
          v264.vfptr = (void *)(v141 + 1);
      }
      v143 = (ObjectClass *)__0Iostream_init_QAE_XZ_7((Iostream_init *)(v105 + 4920));
      eax211 = (char *)__2_YAPAXI_Z(0x10u);
      if ( eax211 )
        v144 = NetMessage::Pack(
                 eax211,
                 &stru_830620[72048],
                 (IUnknown *)v143,
                 (IUnknown *)(4 * (int)v264.vfptr));
      else
        v144 = 0;
      LinkedList::PushFront(v262, (IUnknown *)v144);
      v145 = *(_DWORD *)(v105 + 2856);
      v146 = 0;
      for ( v264.vfptr = 0; v146 < v145; ++v146 )
      {
        if ( *((_DWORD *)__0Iostream_init_QAE_XZ_7((Iostream_init *)(v105 + 808)) + v146) )
          v264.vfptr = (void *)(v146 + 1);
      }
      v148 = (ObjectClass *)__0Iostream_init_QAE_XZ_7((Iostream_init *)(v105 + 808));
      eax218 = (char *)__2_YAPAXI_Z(0x10u);
      if ( eax218 )
        v149 = NetMessage::Pack(
                 eax218,
                 &stru_830620[72064],
                 (IUnknown *)v148,
                 (IUnknown *)(4 * (int)v264.vfptr));
      else
        v149 = 0;
      LinkedList::PushFront(v262, (IUnknown *)v149);
      v150 = *(_DWORD *)(v105 + 9024);
      v151 = 0;
      for ( v264.vfptr = 0; v151 < v150; ++v151 )
      {
        if ( *((_DWORD *)__0Iostream_init_QAE_XZ_7((Iostream_init *)(v105 + 6976)) + v151) )
          v264.vfptr = (void *)(v151 + 1);
      }
      v153 = (ObjectClass *)__0Iostream_init_QAE_XZ_7((Iostream_init *)(v105 + 6976));
      eax225 = (char *)__2_YAPAXI_Z(0x10u);
      if ( eax225 )
        v154 = NetMessage::Pack(
                 eax225,
                 &stru_830620[72072],
                 (IUnknown *)v153,
                 (IUnknown *)(4 * (int)v264.vfptr));
      else
        v154 = 0;
      LinkedList::PushFront(v262, (IUnknown *)v154);
      Array::ByteSwap((u_long *)(v105 + 2864));
      Array::ByteSwap((u_long *)(v105 + 4920));
      Array::ByteSwap((u_long *)(v105 + 808));
      Array::ByteSwap((u_long *)(v105 + 6976));
      Array::Zero((_DWORD *)(v105 + 2864));
      Array::Zero((_DWORD *)(v105 + 808));
      Array::Zero((_DWORD *)(v105 + 4920));
      Array::Zero((_DWORD *)(v105 + 6976));
      for ( i = 0; i < *(int *)&g_CellDirectionOffsets[84616]; ++i )
      {
        v156 = *(_DWORD *)(*(_DWORD *)&g_CellDirectionOffsets[84604] + 4 * i);
        if ( v105 == *(_DWORD *)(v156 + 540) )
          HouseClass::IncrementStat((_DWORD *)(v105 + 4920), *(_DWORD *)(*(_DWORD *)(v156 + 1732) + 3576));
      }
      for ( j = 0; j < (int)g_BuildingClass_Count; ++j )
      {
        v158 = *(_DWORD *)&g_InfantryClassLimit->__pad_0[4 * j];
        if ( v105 == *(_DWORD *)(v158 + 540) )
        {
          v159 = *(_DWORD *)(v158 + 1728);
          if ( !*(_BYTE *)(v159 + 3777) )
            HouseClass::IncrementStat((_DWORD *)(v105 + 2864), *(_DWORD *)(v159 + 3576));
        }
      }
      for ( k = 0; k < *(int *)&g_NetworkPlayerBuffer[3428]; ++k )
      {
        v161 = *(_DWORD *)(*(_DWORD *)&g_NetworkPlayerBuffer[3416] + 4 * k);
        if ( v105 == *(_DWORD *)(v161 + 540) )
          HouseClass::IncrementStat((_DWORD *)(v105 + 808), *(_DWORD *)(*(_DWORD *)(v161 + 1732) + 3576));
      }
      v162 = *(_DWORD *)(v105 + 120);
      for ( m = 0; m < v162; ++m )
        HouseClass::IncrementStat(
          (_DWORD *)(v105 + 6976),
          *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(v105 + 108) + 4 * m) + 1312) + 3576));
      HouseClass::NetworkConvert((_DWORD *)(v105 + 2864));
      HouseClass::NetworkConvert((_DWORD *)(v105 + 4920));
      HouseClass::NetworkConvert((_DWORD *)(v105 + 808));
      HouseClass::NetworkConvert((_DWORD *)(v105 + 6976));
      stru_830620[72027] = v106;
      stru_830620[72019] = v106;
      stru_830620[72035] = v106;
      stru_830620[72043] = v106;
      v164 = *(_DWORD *)(v105 + 4912);
      v165 = 0;
      for ( v264.vfptr = 0; v165 < v164; ++v165 )
      {
        if ( *((_DWORD *)__0Iostream_init_QAE_XZ_7((Iostream_init *)(v105 + 2864)) + v165) )
          v264.vfptr = (void *)(v165 + 1);
      }
      v167 = (ObjectClass *)__0Iostream_init_QAE_XZ_7((Iostream_init *)(v105 + 2864));
      eax247 = (char *)__2_YAPAXI_Z(0x10u);
      if ( eax247 )
        v168 = NetMessage::Pack(
                 eax247,
                 &stru_830620[72024],
                 (IUnknown *)v167,
                 (IUnknown *)(4 * (int)v264.vfptr));
      else
        v168 = 0;
      LinkedList::PushFront(v262, (IUnknown *)v168);
      v169 = *(_DWORD *)(v105 + 6968);
      v170 = 0;
      for ( n = 0; n < v169; ++n )
      {
        if ( *((_DWORD *)__0Iostream_init_QAE_XZ_7((Iostream_init *)(v105 + 4920)) + n) )
          v170 = n + 1;
      }
      v173 = (ObjectClass *)__0Iostream_init_QAE_XZ_7((Iostream_init *)(v105 + 4920));
      eax254 = (char *)__2_YAPAXI_Z(0x10u);
      if ( eax254 )
        v174 = NetMessage::Pack(eax254, &stru_830620[72016], (IUnknown *)v173, (IUnknown *)(4 * v170));
      else
        v174 = 0;
      LinkedList::PushFront(v262, (IUnknown *)v174);
      v175 = *(_DWORD *)(v105 + 2856);
      v176 = 0;
      for ( ii = 0; ii < v175; ++ii )
      {
        if ( *((_DWORD *)__0Iostream_init_QAE_XZ_7((Iostream_init *)(v105 + 808)) + ii) )
          v176 = ii + 1;
      }
      v179 = (ObjectClass *)__0Iostream_init_QAE_XZ_7((Iostream_init *)(v105 + 808));
      eax261 = (char *)__2_YAPAXI_Z(0x10u);
      if ( eax261 )
        v180 = NetMessage::Pack(eax261, &stru_830620[72032], (IUnknown *)v179, (IUnknown *)(4 * v176));
      else
        v180 = 0;
      LinkedList::PushFront(v262, (IUnknown *)v180);
      v181 = *(_DWORD *)(v105 + 9024);
      v182 = 0;
      for ( jj = 0; jj < v181; ++jj )
      {
        if ( *((_DWORD *)__0Iostream_init_QAE_XZ_7((Iostream_init *)(v105 + 6976)) + jj) )
          v182 = jj + 1;
      }
      v185 = (ObjectClass *)__0Iostream_init_QAE_XZ_7((Iostream_init *)(v105 + 6976));
      eax268 = (char *)__2_YAPAXI_Z(0x10u);
      if ( eax268 )
        v186 = NetMessage::Pack(eax268, &stru_830620[72040], (IUnknown *)v185, (IUnknown *)(4 * v182));
      else
        v186 = 0;
      LinkedList::PushFront(v262, (IUnknown *)v186);
      HouseClass::NetworkConvert((_DWORD *)(v105 + 11088));
      HouseClass::NetworkConvert((_DWORD *)(v105 + 13144));
      HouseClass::NetworkConvert((_DWORD *)(v105 + 9032));
      HouseClass::NetworkConvert((_DWORD *)(v105 + 15200));
      v187 = 0;
      stru_830620[72091] = v263;
      stru_830620[72083] = v263;
      stru_830620[72099] = v263;
      stru_830620[72107] = v263;
      v188 = *(_DWORD *)(v105 + 13136);
      v264.vfptr = 0;
      if ( v188 > 0 )
      {
        do
        {
          if ( *((_DWORD *)__0Iostream_init_QAE_XZ_7((Iostream_init *)(v105 + 11088)) + v187) )
            v264.vfptr = (void *)(v187 + 1);
          ++v187;
        }
        while ( v187 < v188 );
      }
      v190 = (ObjectClass *)__0Iostream_init_QAE_XZ_7((Iostream_init *)(v105 + 11088));
      eax275 = (char *)__2_YAPAXI_Z(0x10u);
      if ( eax275 )
        v191 = NetMessage::Pack(
                 eax275,
                 &stru_830620[72088],
                 (IUnknown *)v190,
                 (IUnknown *)(4 * (int)v264.vfptr));
      else
        v191 = 0;
      LinkedList::PushFront(v262, (IUnknown *)v191);
      v192 = *(_DWORD *)(v105 + 15192);
      v193 = 0;
      for ( kk = 0; kk < v192; ++kk )
      {
        if ( *((_DWORD *)__0Iostream_init_QAE_XZ_7((Iostream_init *)(v105 + 13144)) + kk) )
          v193 = kk + 1;
      }
      v196 = (ObjectClass *)__0Iostream_init_QAE_XZ_7((Iostream_init *)(v105 + 13144));
      eax282 = (char *)__2_YAPAXI_Z(0x10u);
      if ( eax282 )
        v197 = NetMessage::Pack(eax282, &stru_830620[72080], (IUnknown *)v196, (IUnknown *)(4 * v193));
      else
        v197 = 0;
      LinkedList::PushFront(v262, (IUnknown *)v197);
      v198 = *(_DWORD *)(v105 + 11080);
      v199 = 0;
      for ( mm = 0; mm < v198; ++mm )
      {
        if ( *((_DWORD *)__0Iostream_init_QAE_XZ_7((Iostream_init *)(v105 + 9032)) + mm) )
          v199 = mm + 1;
      }
      v202 = (ObjectClass *)__0Iostream_init_QAE_XZ_7((Iostream_init *)(v105 + 9032));
      eax289 = (char *)__2_YAPAXI_Z(0x10u);
      if ( eax289 )
        v203 = NetMessage::Pack(eax289, &stru_830620[72096], (IUnknown *)v202, (IUnknown *)(4 * v199));
      else
        v203 = 0;
      LinkedList::PushFront(v262, (IUnknown *)v203);
      v204 = *(_DWORD *)(v105 + 17248);
      v205 = 0;
      for ( nn = 0; nn < v204; ++nn )
      {
        if ( *((_DWORD *)__0Iostream_init_QAE_XZ_7((Iostream_init *)(v105 + 15200)) + nn) )
          v205 = nn + 1;
      }
      v208 = (ObjectClass *)__0Iostream_init_QAE_XZ_7((Iostream_init *)(v105 + 15200));
      eax296 = (char *)__2_YAPAXI_Z(0x10u);
      if ( eax296 )
        v209 = NetMessage::Pack(eax296, &stru_830620[72104], (IUnknown *)v208, (IUnknown *)(4 * v205));
      else
        v209 = 0;
      LinkedList::PushFront(v262, (IUnknown *)v209);
      stru_830620[72115] = v263;
      HouseClass::NetworkConvert((_DWORD *)(v105 + 17256));
      v210 = *(_DWORD *)(v105 + 19304);
      v211 = 0;
      for ( v264.vfptr = 0; v211 < v210; ++v211 )
      {
        if ( *((_DWORD *)__0Iostream_init_QAE_XZ_7((Iostream_init *)(v105 + 17256)) + v211) )
          v264.vfptr = (void *)(v211 + 1);
      }
      v213 = (ObjectClass *)__0Iostream_init_QAE_XZ_7((Iostream_init *)(v105 + 17256));
      eax303 = (char *)__2_YAPAXI_Z(0x10u);
      if ( eax303 )
        v214 = NetMessage::Pack(
                 eax303,
                 &stru_830620[72112],
                 (IUnknown *)v213,
                 (IUnknown *)(4 * (int)v264.vfptr));
      else
        v214 = 0;
      LinkedList::PushFront(v262, (IUnknown *)v214);
      stru_830620[72123] = v263;
      HouseClass::NetworkConvert((_DWORD *)(v105 + 19312));
      v215 = *(_DWORD *)(v105 + 21360);
      v216 = 0;
      for ( v264.vfptr = 0; v216 < v215; ++v216 )
      {
        if ( *((_DWORD *)__0Iostream_init_QAE_XZ_7((Iostream_init *)(v105 + 19312)) + v216) )
          v264.vfptr = (void *)(v216 + 1);
      }
      v218 = (ObjectClass *)__0Iostream_init_QAE_XZ_7((Iostream_init *)(v105 + 19312));
      eax310 = (char *)__2_YAPAXI_Z(0x10u);
      if ( eax310 )
        v219 = NetMessage::Pack(
                 eax310,
                 &stru_830620[72120],
                 (IUnknown *)v218,
                 (IUnknown *)(4 * (int)v264.vfptr));
      else
        v219 = 0;
      LinkedList::PushFront(v262, (IUnknown *)v219);
      v220 = v263;
      stru_830620[72131] = v263;
      v222 = *(ObjectClass **)(v105 + 736);
      eax313 = (char *)__2_YAPAXI_Z(0x10u);
      if ( eax313 )
        v223 = TerrainInitMap(eax313, (RandomStruct *)&stru_830620[72128], (IUnknown *)v222);
      else
        v223 = 0;
      LinkedList::PushFront(v262, (IUnknown *)v223);
      stru_830620[72171] = v220;
      v224 = v269;
      v225 = v268;
      if ( v269 == v268 )
      {
        v226 = (IUnknown *)DataGlobal_84E863;
        v227 = (char *)__2_YAPAXI_Z(0x10u);
        if ( v227 )
        {
          v228 = TerrainInitMap(v227, (RandomStruct *)&stru_830620[72168], v226);
          goto LABEL_322;
        }
      }
      else
      {
        v229 = (char *)__2_YAPAXI_Z(0x10u);
        if ( v229 )
        {
          v228 = NetMessage::Pack4(v229, (RandomStruct *)&stru_830620[72168], -1);
          goto LABEL_322;
        }
      }
      v228 = 0;
LABEL_322:
      LinkedList::PushFront(v262, (IUnknown *)v228);
      stru_830620[72179] = v220;
      if ( v224 == v225 )
      {
        v230 = Performance::MeasureTicks();
        v231 = (char *)__2_YAPAXI_Z(0x10u);
        if ( v231 )
        {
          v232 = NetMessage::Pack4(v231, (RandomStruct *)&stru_830620[72176], v230);
          goto LABEL_328;
        }
      }
      else
      {
        v233 = (char *)__2_YAPAXI_Z(0x10u);
        if ( v233 )
        {
          v232 = NetMessage::Pack4(v233, (RandomStruct *)&stru_830620[72176], -1);
          goto LABEL_328;
        }
      }
      v232 = 0;
LABEL_328:
      LinkedList::PushFront(v262, (IUnknown *)v232);
      stru_830620[72187] = v220;
      if ( v224 == v225 )
      {
        Buffer.dwLength = 32;
        GlobalMemoryStatus(&Buffer);
        dwTotalPhys = Buffer.dwTotalPhys;
        v235 = (char *)__2_YAPAXI_Z(0x10u);
        if ( !v235 )
          goto LABEL_333;
        v236 = NetMessage::Pack4(v235, (RandomStruct *)&stru_830620[72184], dwTotalPhys);
      }
      else
      {
        v237 = (char *)__2_YAPAXI_Z(0x10u);
        if ( !v237 )
        {
LABEL_333:
          v236 = 0;
          goto LABEL_334;
        }
        v236 = NetMessage::Pack4(v237, (RandomStruct *)&stru_830620[72184], -1);
      }
LABEL_334:
      LinkedList::PushFront(v262, (IUnknown *)v236);
      stru_830620[72195] = v220;
      if ( v224 == v225 && *(_DWORD *)&g_CellDirectionOffsets[2564] )
      {
        v287[0] = 316;
        if ( (*(int (__stdcall **)(_DWORD, int *, _DWORD))(**(_DWORD **)&g_CellDirectionOffsets[2564] + 44))(
               *(_DWORD *)&g_CellDirectionOffsets[2564],
               v287,
               0) )
        {
          goto LABEL_343;
        }
        v238 = (v288 + 0xFFFFF) & 0xFFF00000;
        v239 = (char *)__2_YAPAXI_Z(0x10u);
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
        v241 = (char *)__2_YAPAXI_Z(0x10u);
        if ( !v241 )
          goto LABEL_341;
        v240 = NetMessage::Pack4(v241, (RandomStruct *)&stru_830620[72192], -1);
      }
LABEL_342:
      LinkedList::PushFront(v262, (IUnknown *)v240);
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
      (*(void (__stdcall **)(_DWORD, char *, CCINIClass *, char *, _DWORD))(X + 12))(
        *(&g_MatrixTransformState + 2264),
        &byte_B77CE8,
        dword_B75F5C,
        vfptr,
        *(_DWORD *)&g_OverlayTypeConfig[17816]);
    else
      (*(void (__stdcall **)(_DWORD, char *, CCINIClass *, char *, _DWORD))(X + 12))(
        *(&g_MatrixTransformState + 2264),
        byte_B77930,
        dword_B76184,
        vfptr,
        *(_DWORD *)&g_OverlayTypeConfig[17816]);
  }
  if ( *(int *)&g_OverlayTypeConfig[17816] <= 0x8000
    && vfptr
    && *(int *)&g_OverlayTypeConfig[17816] >= 1 )
  {
    v290[1] = *(_DWORD *)&g_OverlayTypeConfig[17816];
    v244 = g_OverlayTypeConfig[17816];
    v290[0] = 0;
    v245 = *(_DWORD *)&g_OverlayTypeConfig[17816] >> 2;
    qmemcpy(&v290[2], vfptr, 4 * (*(_DWORD *)&g_OverlayTypeConfig[17816] >> 2));
    v247 = &vfptr[4 * v245];
    v246 = &v290[v245 + 2];
    LOBYTE(v245) = v244;
    v248 = *(_DWORD *)&g_OverlayTypeConfig[17756];
    qmemcpy(v246, v247, v245 & 3);
    v249 = *(_DWORD *)&g_OverlayTypeConfig[17752];
    v269 = *(IUnknown **)&g_OverlayTypeConfig[17752];
    if ( *(int *)&g_OverlayTypeConfig[17752] < v248 )
    {
      v255 = *(char **)&g_OverlayTypeConfig[17760];
    }
    else
    {
      v250 = 2 * *(_DWORD *)&g_OverlayTypeConfig[17752];
      if ( 2 * *(_DWORD *)&g_OverlayTypeConfig[17752] < 10 )
        v250 = 10;
      v251 = (char *)__2_YAPAXI_Z(32776 * v250);
      memset(v251, 0, 4 * ((unsigned int)(32776 * v250) >> 2));
      v252 = *(AbstractClass **)&g_OverlayTypeConfig[17760];
      if ( *(_DWORD *)&g_OverlayTypeConfig[17760] )
      {
        v253 = 8 * g_OverlayTypeConfig[17752];
        v254 = (unsigned int)(32776 * *(_DWORD *)&g_OverlayTypeConfig[17752]) >> 2;
        qmemcpy(v251, *(const void **)&g_OverlayTypeConfig[17760], 4 * v254);
        qmemcpy(&v251[4 * v254], (char *)v252 + 4 * v254, v253 & 3);
        v252 = *(AbstractClass **)&g_OverlayTypeConfig[17760];
      }
      __3_YAXPAX_Z(v252);
      v249 = *(_DWORD *)&g_OverlayTypeConfig[17752];
      v255 = v251;
      *(_DWORD *)&g_OverlayTypeConfig[17760] = v251;
      *(_DWORD *)&g_OverlayTypeConfig[17756] = v250;
      if ( *(int *)&g_OverlayTypeConfig[17752] >= v250 )
      {
        v256 = 2 * *(_DWORD *)&g_OverlayTypeConfig[17752];
        if ( 2 * *(_DWORD *)&g_OverlayTypeConfig[17752] < 10 )
          v256 = 10;
        v257 = (char *)__2_YAPAXI_Z(32776 * v256);
        memset(v257, 0, 4 * ((unsigned int)(32776 * v256) >> 2));
        v258 = *(AbstractClass **)&g_OverlayTypeConfig[17760];
        if ( *(_DWORD *)&g_OverlayTypeConfig[17760] )
        {
          v259 = 8 * g_OverlayTypeConfig[17752];
          v260 = (unsigned int)(32776 * *(_DWORD *)&g_OverlayTypeConfig[17752]) >> 2;
          qmemcpy(v257, *(const void **)&g_OverlayTypeConfig[17760], 4 * v260);
          qmemcpy(&v257[4 * v260], (char *)v258 + 4 * v260, v259 & 3);
          v258 = *(AbstractClass **)&g_OverlayTypeConfig[17760];
        }
        __3_YAXPAX_Z(v258);
        v249 = *(_DWORD *)&g_OverlayTypeConfig[17752];
        v255 = v257;
        *(_DWORD *)&g_OverlayTypeConfig[17760] = v257;
        *(_DWORD *)&g_OverlayTypeConfig[17756] = v256;
      }
      if ( (int)v269 < v249 )
      {
        memcpy(
          &v255[32776 * ((_DWORD)&v269->field_0 + 1)],
          &v255[32776 * (_DWORD)v269],
          32776 * v249 - 32776 * (_DWORD)v269);
        v255 = *(char **)&g_OverlayTypeConfig[17760];
        v249 = *(_DWORD *)&g_OverlayTypeConfig[17752];
      }
    }
    v261 = &v255[32776 * (_DWORD)v269];
    if ( v261 )
    {
      qmemcpy(v261, v290, 0x8008u);
      v249 = *(_DWORD *)&g_OverlayTypeConfig[17752];
    }
    vfptr = (char *)v264.vfptr;
    *(_DWORD *)&g_OverlayTypeConfig[17752] = v249 + 1;
  }
  __3_YAXPAX_Z(vfptr);
  g_NetworkPlayerBuffer[8900] = 1;
  RawFileClass::Dtor((int *)&v272);
  ResultNode::CleanupList(v262);
}
}
} // namespace gamemd

// 0x6C87F0
namespace gamemd {
int sub_6C87F0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{

  DataGlobal_B0BD28 = Timer::GetTicks(); /*0x6c87fc*/
  int v1; // [esp+4h] [ebp-4h]
  DataGlobal_B0BD2C = v1; /*0x6c8805*/
  DataGlobal_B0BDB4 = 1; /*0x6c880a*/
  return v1; /*0x6c8811*/
}
}
} // namespace gamemd

// 0x6C8FF0
namespace gamemd {
void DlgProcScoreScreen()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  int result; // eax
  _DWORD *WindowLongA; // eax
  HWND DlgItem; // eax
  HWND v14; // eax
  wchar_t *v15; // ecx
  wchar_t *v16; // esi
  ScenarioClass *String; // edi
  ScenarioClass *v17; // esi
  HWND v19; // eax
  void (__stdcall *v20)(HWND, UINT, WPARAM, LPARAM); // edi
  HWND eax21a; // eax
  IUnknown *v21; // eax
  const wchar_t *v23; // esi
  HWND v30; // eax
  HWND v31; // eax
  Movie *v32; // eax
  ScenarioClass *v34; // [esp-8h] [ebp-54h]
  wchar_t lParam[32]; // [esp+Ch] [ebp-40h] BYREF
  IUnknown *wParama; // [esp+58h] [ebp+Ch]
  wchar_t *Formatb; // [esp+5Ch] [ebp+10h]
  wchar_t *Formata; // [esp+5Ch] [ebp+10h]

  result = BaseDialogProc((SkirmishDialog *)hWnd, a3, wParam, (unsigned int)Format); /*0x6c900c*/
  if ( !result ) /*0x6c9013*/
  {
    WindowLongA = (_DWORD *)GetWindowLongA(hWnd, 8); /*0x6c901c*/
    if ( a3 > 0x497 ) /*0x6c9028*/
    {
      if ( a3 == 1240 ) /*0x6c9383*/
      {
        if ( !wParam ) /*0x6c93cb*/
          SendDlgItemMessageA(hWnd, 1835, 0x4D5u, 0, 29); /*0x6c93db*/
      }
      else if ( a3 == 1260 ) /*0x6c9388*/
      {
        AudioController::Stop(&stru_B05488[27296]); /*0x6c938f*/
        _DWORD * v33 = (_DWORD *)PlayVocClass(*(_DWORD *)(*(_DWORD *)&stru_87C374[44652] + 432), 0x2000, 1.0, 0); /*0x6c93ad*/
        SetAudioSource((AudioMixer *)&stru_B05488[27296], v33, 0); /*0x6c93b9*/
        SendDlgItemMessageA(hWnd, 1835, 0x4D3u, 0, 0); /*0x6c93c7*/
      }
      return 0; /*0x6c93e1*/
    }
    if ( a3 != 1175 ) /*0x6c902e*/
    {
      if ( a3 == 2 ) /*0x6c9033*/
      {
        if ( *(_DWORD *)&stru_B05488[27356] ) /*0x6c906e*/
        {
          AudioFile::Stop(&stru_B05488[27296]); /*0x6c9079*/
          AudioFileClass::Release(&stru_B05488[27296]); /*0x6c9083*/
          *(_DWORD *)&stru_B05488[27356] = 0; /*0x6c908a*/
          return 0; /*0x6c909a*/
        }
      }
      else if ( a3 == 273 && (_WORD)wParam == 1059 ) /*0x6c9046*/
      {
        *WindowLongA = 1; /*0x6c9051*/
        AudioFile::Stop(&stru_B05488[27296]); /*0x6c9057*/
        return 0; /*0x6c9064*/
      }
      return 0; /*0x6c9046*/
    }
    AudioController::Init(&stru_B05488[27296]); /*0x6c90a2*/
    *(_DWORD *)&stru_B05488[27356] = 1; /*0x6c90ad*/
    int v7 = 0; /*0x6c90b7*/
    int v8 = *(_DWORD *)(*(_DWORD *)&HouseClass_Player[29924] + 1548); /*0x6c90b9*/
    if ( v8 ) /*0x6c90c1*/
    {
      if ( v8 == 1 ) /*0x6c90ce*/
      {
        v7 = *(_DWORD *)(*(_DWORD *)&HouseClass_Player[29924] + 13736); /*0x6c90d0*/
      }
      else if ( v8 == 2 ) /*0x6c90db*/
      {
        v7 = *(_DWORD *)(*(_DWORD *)&HouseClass_Player[29924] + 13740); /*0x6c90dd*/
      }
    }
    else
    {
      v7 = *(_DWORD *)(*(_DWORD *)&HouseClass_Player[29924] + 13732); /*0x6c90c3*/
    }
    int v9 = v7 / 60; /*0x6c90fc*/
    swprintf( /*0x6c9146*/
      lParam,
      (const size_t)&stru_830620[72504],
      (const wchar_t *const)(v7 / 60 / 60 / 60),
      (CampaignScore *)(v7 / 60 / 60 % 60));
    DlgItem = GetDlgItem(hWnd, 1777); /*0x6c915a*/
    SendMessageA(DlgItem, 0x4B2u, 0, (LPARAM)lParam); /*0x6c9169*/
    int v11 = *(_DWORD *)(*(_DWORD *)&HouseClass_Player[29924] + 1564); /*0x6c9174*/
    if ( *(_DWORD *)(*(_DWORD *)&HouseClass_Player[29924] + 1556) != -1 ) /*0x6c9187*/
    {
      _DWORD * v12 = (_DWORD *)(*(_DWORD *)&HouseClass_Player[29924] + 1556); /*0x6c917a*/
      Formatb = *(wchar_t **)(*(_DWORD *)&HouseClass_Player[29924] + 1564); /*0x6c9180*/
      v11 = (int)Formatb + Timer::GetTicks() - *v12; /*0x6c9199*/
    }
    int v13 = v11 / 60; /*0x6c91b7*/
    swprintf( /*0x6c9209*/
      lParam,
      (const size_t)&stru_830620[72504],
      (const wchar_t *const)(v11 / 60 / 60 / 60),
      (CampaignScore *)(v11 / 60 / 60 % 60));
    v14 = GetDlgItem(hWnd, 1778); /*0x6c9217*/
    SendMessageA(v14, 0x4B2u, 0, (LPARAM)lParam); /*0x6c9226*/
    if ( v13 > v9 ) /*0x6c9233*/
    {
      v15 = (wchar_t *)(*(_DWORD *)&HouseClass_Player[29924] + 13806); /*0x6c9243*/
      v16 = (wchar_t *)(*(_DWORD *)&HouseClass_Player[29924] + 13837); /*0x6c9249*/
    }
    else
    {
      v15 = (wchar_t *)(*(_DWORD *)&HouseClass_Player[29924] + 13744); /*0x6c9235*/
      v16 = (wchar_t *)(*(_DWORD *)&HouseClass_Player[29924] + 13775); /*0x6c923b*/
    }
    String = (ScenarioClass *)GetStringCSF(v15, 0, &stru_830620[72536], 138); /*0x6c926e*/
    v17 = (ScenarioClass *)GetStringCSF(v16, 0, &stru_830620[72536], 139); /*0x6c927b*/
    v19 = GetDlgItem(hWnd, 1779); /*0x6c927d*/
    v34 = String; /*0x6c927f*/
    v20 = (void (__stdcall *)(HWND, UINT, WPARAM, LPARAM))SendMessageA; /*0x6c9280*/
    SendMessageA(v19, 0x4B2u, 0, (LPARAM)v34); /*0x6c928e*/
    eax21a = GetDlgItem(hWnd, 1780); /*0x6c9296*/
    SendMessageA(eax21a, 0x4B2u, 0, (LPARAM)v17); /*0x6c92a1*/
    v21 = HouseClass_Count; /*0x6c92a3*/
    v23 = 0; /*0x6c92a8*/
    int v24 = 0; /*0x6c92aa*/
    wParama = HouseClass_Count; /*0x6c92ac*/
    Formata = 0; /*0x6c92b2*/
    if ( (int)HouseClass_Count > 0 ) /*0x6c92b6*/
    {
      do /*0x6c930e*/
      {
        int v25 = *(_DWORD *)&HouseClass_Array->__pad_0[4 * v24]; /*0x6c92be*/
        if ( *(_BYTE *)(v25 + 493) ) /*0x6c92c1*/
        {
          char * v26 = (char *)v23 + SumArray((int *)(v25 + 9032)); /*0x6c92dc*/
          char * v27 = &v26[SumArray((int *)(v25 + 11088))]; /*0x6c92e9*/
          char * v28 = &v27[SumArray((int *)(v25 + 13144))]; /*0x6c92f6*/
          int v29 = SumArray((int *)(v25 + 15200)); /*0x6c92f8*/
          v24 = (int)Formata; /*0x6c92fd*/
          v23 = (const wchar_t *)&v28[v29]; /*0x6c9301*/
          v21 = wParama; /*0x6c9303*/
        }
        Formata = (wchar_t *)++v24; /*0x6c930a*/
      }
      while ( v24 < (int)v21 ); /*0x6c930e*/
      v20 = (void (__stdcall *)(HWND, UINT, WPARAM, LPARAM))SendMessageA; /*0x6c9310*/
    }
    v30 = GetDlgItem(hWnd, 1835); /*0x6c931c*/
    PostMessageA(v30, 0x4D7u, 0, (LPARAM)hWnd); /*0x6c9327*/
    swprintf(lParam, (const size_t)&g_Str_Fmt_PctD, v23, a1); /*0x6c9338*/
    v31 = GetDlgItem(hWnd, 1782); /*0x6c9346*/
    v20(v31, 0x4B2u, 0, (LPARAM)lParam); /*0x6c9355*/
    v32 = (Movie *)StringList::Find(&g_BuildingTypeClass_Count, g_INI_Key_SCORE); /*0x6c9361*/
    ThemeClass::Play((int *)&g_BuildingTypeClass_Count, v32); /*0x6c936c*/
    return 0; /*0x6c9374*/
  }
  return result; /*0x6c905c*/
}
}
} // namespace gamemd

// 0x6CA1E0
namespace gamemd {
int E4Recv_6CA1E0::sub_6CA1E0(char * Source)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  wchar_t *v3; // ebp
  wchar_t *v5; // edi
  wchar_t *v8; // esi
  size_t v9; // eax
  wchar_t *v10; // eax
  const wchar_t *v11; // esi
  wchar_t v14; // [esp+12h] [ebp-46h] BYREF
  wchar_t Dest[32]; // [esp+18h] [ebp-40h] BYREF

  E4Recv_6CA1E0 *v15 = this; /*0x6ca1f5*/
  mbstowcs(Dest, Source, 0x20u); /*0x6ca1f9*/
  v3 = (wchar_t *)(this + 4); /*0x6ca201*/
  while ( 1 ) /*0x6ca27e*/
  {
    while ( 1 ) /*0x6ca208*/
    {
      char v13 = 0; /*0x6ca208*/
      int v4 = 0; /*0x6ca20d*/
      v5 = v3; /*0x6ca20f*/
      int v6 = *v15; /*0x6ca211*/
      *v3 = 0; /*0x6ca213*/
      while ( (*(int (__thiscall **)(int, wchar_t *, int))(*(_DWORD *)v6 + 8))(v6, &v14, 2) == 2 ) /*0x6ca22a*/
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
      E4Recv_6CA1E0 *v7 = v15; /*0x6ca253*/
      v3[v4] = 0; /*0x6ca257*/
      ++v7[513]; /*0x6ca260*/
      v8 = WideString::Trim(v3); /*0x6ca26b*/
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
    v9 = wcslen(g_INI_Key_BeginMovie); /*0x6ca296*/
    if ( !_wcsnicmp(v8, g_INI_Key_BeginMovie, v9) ) /*0x6ca2a2*/
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
} // namespace gamemd

// 0x6CA4A0
namespace gamemd {
void sub_6CA4A0(wchar_t * String2, int a2, int a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  const wchar_t **v3; // edi
  const wchar_t **v4; // esi
  const wchar_t *v5; // eax

  if ( String2 && DataGlobal_8421A8 ) /*0x6ca4b2*/
  {
    v3 = (const wchar_t **)&DataGlobal_8421A8; /*0x6ca4b4*/
    v4 = (const wchar_t **)&DataGlobal_8421A8; /*0x6ca4b9*/
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
} // namespace gamemd

// 0x6CA4F0
namespace gamemd {
wchar_t * * sub_6CA4F0(unsigned int * a1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  wchar_t *v1; // ebp
  wchar_t *v4; // edi
  wchar_t *v6; // esi
  wchar_t v9; // [esp+12h] [ebp-6h] BYREF
  _DWORD * v10 = a1; /*0x6ca4f7*/
  v1 = (wchar_t *)(a1 + 1); /*0x6ca4fb*/
  while ( 1 ) /*0x6ca504*/
  {
    int v2 = *a1; /*0x6ca504*/
    *v1 = 0; /*0x6ca506*/
    char v8 = 0; /*0x6ca50c*/
    int v3 = 0; /*0x6ca511*/
    v4 = v1; /*0x6ca513*/
    while ( (*(int (__thiscall **)(int, wchar_t *, int))(*(_DWORD *)v2 + 8))(v2, &v9, 2) == 2 ) /*0x6ca526*/
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
    _DWORD * v5 = v10; /*0x6ca54f*/
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
} // namespace gamemd

// 0x6CA6A0
namespace gamemd {
int sub_6CA6A0(BlowStraw * String1, int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  BlowStraw *v2; // ebx
  wchar_t *v4; // eax
  wchar_t *v5; // esi
  int result; // eax
  const wchar_t **v8; // eax

  v2 = String1; /*0x6ca6a4*/
  v4 = wcschr(String1, (CCINIClass *)0x3A); /*0x6ca6ab*/
  v5 = v4; /*0x6ca6b0*/
  if ( v4 ) /*0x6ca6b7*/
  {
    *v4 = 0; /*0x6ca6be*/
    *(_DWORD *)(a2 + 12) = wcstol(v2, 0, 0); /*0x6ca6cb*/
    v2 = (BlowStraw *)(v5 + 1); /*0x6ca6ce*/
  }
  int v6 = 0; /*0x6ca6d7*/
  result = 2; /*0x6ca6db*/
  if ( *(_DWORD *)&stru_830620[72632] ) /*0x6ca6e0*/
  {
    v8 = (const wchar_t **)&stru_830620[72632]; /*0x6ca6e2*/
    char * v9 = &stru_830620[72632]; /*0x6ca6e7*/
    while ( 1 ) /*0x6ca6ed*/
    {
      result = _wcsicmp((const wchar_t *)v2, *v8); /*0x6ca6ed*/
      if ( !result ) /*0x6ca6f7*/
        break; /*0x6ca6f7*/
      int v10 = *((_DWORD *)v9 + 2); /*0x6ca6f9*/
      v9 += 8; /*0x6ca6fc*/
      ++v6; /*0x6ca6ff*/
      v8 = (const wchar_t **)v9; /*0x6ca700*/
      if ( !v10 ) /*0x6ca704*/
      {
        result = 2; /*0x6ca706*/
        goto LABEL_8; /*0x6ca706*/
      }
    }
    *(_DWORD *)(a2 + 16) = *(_DWORD *)&stru_830620[22428][8 * v6 + 50208]; /*0x6ca71a*/
  }
  else
  {
LABEL_8:
    *(_DWORD *)(a2 + 16) = 2; /*0x6ca70b*/
  }
  return result; /*0x6ca70b*/
}
}
} // namespace gamemd

// 0x6CF320
namespace gamemd {
int globalHelper_0CF320(unsigned int * a1, unsigned int * a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  if ( *a1 == *a2 )
    return 0; /*0x6cf330*/
  else
    return *a1 >= *a2 ? 1 : -1;
}
}
} // namespace gamemd

// 0x6CFD60
namespace gamemd {
unsigned int * sub_6CFD60(unsigned int * a1, int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  _DWORD *result; // eax

  result = a1; /*0x6cfd7a*/
  int v4 = DataGlobal_B0CC24; /*0x6cfd82*/
  int v5 = *((_DWORD *)DataGlobal_B0FC68 + 2); /*0x6cfd8f*/
  int v6 = *((_DWORD *)DataGlobal_B0FC68 + 3); /*0x6cfd92*/
  *a1 = *(_DWORD *)DataGlobal_B0FC68 + DataGlobal_B0CC38 * g_ObjectTrackingPool[a2]; /*0x6cfd95*/
  a1[1] = v4; /*0x6cfd97*/
  a1[2] = v5; /*0x6cfd9a*/
  a1[3] = v6; /*0x6cfd9d*/
  return result; /*0x6cfda0*/
}
}
} // namespace gamemd

// 0x6CFDB0
namespace gamemd {
int sub_6CFDB0(int a1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  int result; // eax

  DataGlobal_B0CB54 = a1; /*0x6cfdb5*/
  result = *(_DWORD *)DataGlobal_B0FC6C - a1 * *((_DWORD *)DataGlobal_B0FC68 + 2); /*0x6cfdc9*/
  int v2 = *(_DWORD *)DataGlobal_B0FC60 + *((_DWORD *)DataGlobal_B0FC60 + 2); /*0x6cfdd6*/
  DataGlobal_B0CC2C = result; /*0x6cfddb*/
  if ( result <= v2 ) /*0x6cfde0*/
    DataGlobal_B0CC2C = v2; /*0x6cfde2*/
  return result; /*0x6cfdd8*/
}
}
} // namespace gamemd

// 0x6C0025
namespace gamemd {
void nullsub_114(int a1, int a2)
{
  ;
}
} // namespace gamemd

// 0x6C6520
namespace gamemd {
int sub_6C6520()
{
{
    DataGlobal_B0BCF8 = 0;
    DataGlobal_B0BCFC = 0;
    DataGlobal_B0BD00 = 0;
    DataGlobal_B0BD04 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x6C6540
namespace gamemd {
unsigned int * E4Recv_6C6540::sub_6C6540(int a2, wchar_t * String, int a4, int aP1, ControlClass * aP5, int aP3, int aP4)
{
{
    DropListClass *Instance;
    GadgetClass::Construct(this, (GadgetClass *)aP1, (GadgetClass *)aP5, (GadgetClass *)aP3, (ControlClass *)aP4, 0, 0);
    Buffer::Init(this + 9, 0, 0);
    this->M48 = 0;
    this->M52 = a4;
    *(void**)this = &vt_StaticButtonClass;
    StaticButtonClass::Draw((void **)this, (DropListClass *)String, 0);
    if ( aP3 == -1 || aP4 == -1 )
  {
    Instance = (DropListClass *)TextRenderer::GetInstance();
    if ( aP3 == -1 )
    this->M20 = Text::MeasureWidth(this->M48, 0);
    if ( aP4 == -1 )
    this->M24 = Instance->DropListClass_field_0x1C;
  }
    return this;
}
}
} // namespace gamemd

// 0x6C68C0
namespace gamemd {
void sub_6C68C0()
{
{
    long double v0;
    v0 = pow(256.0, 2.0);
    DataGlobal_B0BD30 = Math::Sqrt(v0 + v0);
}
}
} // namespace gamemd

// 0x6C68F0
namespace gamemd {
void sub_6C68F0()
{
{
    DataGlobal_B0BDA8 = DataGlobal_B0BD30 / 60.0;
}
}
} // namespace gamemd

// 0x6C6910
namespace gamemd {
void sub_6C6910()
{
{
    DataGlobal_B0BD88 = 1.0 / DataGlobal_B0BDA8;
}
}
} // namespace gamemd

// 0x6C6930
namespace gamemd {
void sub_6C6930()
{
{
    DataGlobal_B0BD80 = 0.0174532925199433 * 45.0;
}
}
} // namespace gamemd

// 0x6C6950
namespace gamemd {
void sub_6C6950()
{
{
    DataGlobal_B0BD38 = 0.0174532925199433 * 60.0;
}
}
} // namespace gamemd

// 0x6C6970
namespace gamemd {
void sub_6C6970()
{
{
    DataGlobal_B0BD08 = 0.0174532925199433 * 90.0;
}
}
} // namespace gamemd

// 0x6C6990
namespace gamemd {
long long sub_6C6990()
{
{
    double v0;
    __int64 result;
    v0 = Math::Sin(DataGlobal_B0BD08 - DataGlobal_B0BD38);
    result = Math::RoundToInt(v0 * DataGlobal_B0BD30 * 0.5);
    DataGlobal_B0BDB0 = result;
    return result;
}
}
} // namespace gamemd

// 0x6C69D0
namespace gamemd {
void sub_6C69D0()
{
{
    DataGlobal_B0BD40 = Math::ArcTan((double)DataGlobal_B0BDB0 * 0.00390625);
}
}
} // namespace gamemd

// 0x6C6A00
namespace gamemd {
void sub_6C6A00()
{
{
    DataGlobal_B0BD70 = Math::ArcTan((double)(2 * DataGlobal_B0BDB0) / DataGlobal_B0BD30);
}
}
} // namespace gamemd

// 0x6C6A30
namespace gamemd {
long long sub_6C6A30()
{
{
    __int64 result;
    result = Math::RoundToInt((double)(4 * DataGlobal_B0BDB0) + 0.5);
    DataGlobal_B0BDA4 = result;
    return result;
}
}
} // namespace gamemd

// 0x6C6A60
namespace gamemd {
int sub_6C6A60()
{
{
    DataGlobal_B0BD20 = 0;
    DataGlobal_B0BD22 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x6C6A70
namespace gamemd {
int sub_6C6A70()
{
{
    DataGlobal_B0BD60 = 0;
    DataGlobal_B0BD64 = 0;
    DataGlobal_B0BD68 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x6C6A90
namespace gamemd {
int sub_6C6A90()
{
{
    DataGlobal_B0BDA0 = 0;
    DataGlobal_B0BD98 = 128;
    DataGlobal_B0BD9C = 128;
    return 128;
}
}
} // namespace gamemd

// 0x6C6AB0
namespace gamemd {
int sub_6C6AB0()
{
{
    DataGlobal_B0BD10 = 0;
    DataGlobal_B0BD14 = 0;
    DataGlobal_B0BD18 = 0;
    DataGlobal_B0BD1C = 0;
    return 0;
}
}
} // namespace gamemd

// 0x6C6AD0
namespace gamemd {
int sub_6C6AD0()
{
{
    DataGlobal_B0BD28 = Timer::GetTicks();
    return atexit(nullsub_234);
}
}
} // namespace gamemd

// 0x6C6AF0
namespace gamemd {
void nullsub_234()
{
  ;
}
} // namespace gamemd

// 0x6C6B40
namespace gamemd {
int sub_6C6B40()
{
{
    g_SidebarButtonState = 0;
    DataGlobal_B0BD54 = 0;
    g_SidebarPool = 0;
    return atexit(sub_6C6B60);
}
}
} // namespace gamemd

// 0x6C6B60
namespace gamemd {
void sub_6C6B60()
{
{
    g_SidebarButtonState = 0;
    __3_YAXPAX_Z(g_SidebarPool);
}
}
} // namespace gamemd

// 0x6C8840
namespace gamemd {
rc_ptr * E4Recv_6C8840::sub_6C8840(char a2)
{
{
    *(void**)this = &vt_rc_ptr_PlayerProfile;
    ComPtr::Release(this);
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (rc_ptr *)this;
}
}
} // namespace gamemd

// 0x6C8900
namespace gamemd {
char E4Recv_6C8900::sub_6C8900()
{
{
    int v2;
    int v4;
    void *v5;
    const void *v6;
    int v7;
    v2 = *(void**)this;
    if ( *(void**)this < this->M4 )
    return 0;
    v4 = 2 * v2;
    if ( 2 * v2 < 10 )
    v4 = 10;
    v5 = __2_YAPAXI_Z(32776 * v4);
    memset(v5, 0, 4 * ((unsigned int)(32776 * v4) >> 2));
    v7 = (int)v5;
    v6 = (const void *)this->M8;
    if ( v6 )
    qmemcpy(v5, v6, 32776 * *(void**)this);
    __3_YAXPAX_Z((void *)this->M8);
    this->M4 = v4;
    this->M8 = v7;
    return 1;
}
}
} // namespace gamemd

// 0x6C8990
namespace gamemd {
int sub_6C8990()
{
{
    DataGlobal_B0BDC0 = 0;
    DataGlobal_B0BDC4 = 0;
    DataGlobal_B0BDC8 = 0;
    DataGlobal_B0BDCC = 0;
    return 0;
}
}
} // namespace gamemd

// 0x6C89B0
namespace gamemd {
unsigned int * E4Recv_6C89B0::sub_6C89B0(size_t Size)
{
{
    void *v3;
    *(void**)this = Size;
    v3 = __2_YAPAXI_Z(Size);
    this->M4 = v3;
    this->M8 = v3;
    return this;
}
}
} // namespace gamemd

// 0x6C8B10
namespace gamemd {
int E4Recv_6C8B10::sub_6C8B10(int a2, int a3, short a4, short a5)
{
{
    int v6;
    int *v8;
    int v9;
    unsigned int v10;
    char *v11;
    int v12;
    int v13;
    char *v14;
    int v15;
    v6 = this->M8;
    if ( v6 + 12 > (unsigned int)(this->M4 + *(void**)this) )
    return 0;
    v12 = this->M8;
    this->M8 = v6 + 12;
    if ( !v6 )
    return 0;
    *(short *)v6 = a4;
    *(short *)(v6 + 2) = a5;
    *(short *)(v6 + 4) = *(short *)(a3 + 8);
    *(short *)(v6 + 6) = *(short *)(a3 + 12);
    *(int *)(v6 + 8) = this->M8;
    v8 = CellStruct::Copy((int *)a3, &v13);
    v9 = a2;
    v14 = (char *)(*(int (__thiscall **)(int, int, int))(*(int *)(a2) + 92))(a2, *v8, v8[1]);
    v15 = 0;
    if ( *(int *)(a3 + 12) > 0 )
  {
    while ( 1 )
    {
    v10 = Map_Append(v14, (int)&DataGlobal_B0BDD0, *(int *)(a3 + 8));
    v11 = (char *)this->M8;
    if ( (unsigned int)&v11[v10] > this->M4 + *(void**)this || (this->M8 = &v11[v10], !v11) )
      {
    (*(void (__thiscall **)(int))(*(int *)(v9) + 96))(v9);
    return 0;
      }
    qmemcpy(v11, &DataGlobal_B0BDD0, v10);
    ++v15;
    v14 += (*(int (__thiscall **)(int))(*(int *)(a2) + 116))(a2);
    if ( v15 >= *(int *)(a3 + 12) )
    break;
    v9 = a2;
    }
    v6 = v12;
    v9 = a2;
  }
    (*(void (__thiscall **)(int))(*(int *)(v9) + 96))(v9);
    return v6;
}
}
} // namespace gamemd

// 0x6C8C60
namespace gamemd {
int sub_6C8C60()
{
{
    DataGlobal_B0BED8 = 0;
    DataGlobal_B0BEDC = 0;
    DataGlobal_B0BEE0 = 0;
    DataGlobal_B0BEE4 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x6C8C80
namespace gamemd {
void sub_6C8C80()
{
{
    long double v0;
    v0 = pow(256.0, 2.0);
    DataGlobal_B0BEF0 = Math::Sqrt(v0 + v0);
}
}
} // namespace gamemd

// 0x6C8CB0
namespace gamemd {
void sub_6C8CB0()
{
{
    DataGlobal_B0BF58 = DataGlobal_B0BEF0 / 60.0;
}
}
} // namespace gamemd

// 0x6C8CD0
namespace gamemd {
void sub_6C8CD0()
{
{
    DataGlobal_B0BF40 = 1.0 / DataGlobal_B0BF58;
}
}
} // namespace gamemd

// 0x6C8CF0
namespace gamemd {
void sub_6C8CF0()
{
{
    DataGlobal_B0BF20 = 0.0174532925199433 * 45.0;
}
}
} // namespace gamemd

// 0x6C8D10
namespace gamemd {
void sub_6C8D10()
{
{
    DataGlobal_B0BEF8 = 0.0174532925199433 * 60.0;
}
}
} // namespace gamemd

// 0x6C8D30
namespace gamemd {
void sub_6C8D30()
{
{
    DataGlobal_B0BED0 = 0.0174532925199433 * 90.0;
}
}
} // namespace gamemd

// 0x6C8D50
namespace gamemd {
long long sub_6C8D50()
{
{
    double v0;
    __int64 result;
    v0 = Math::Sin(DataGlobal_B0BED0 - DataGlobal_B0BEF8);
    result = Math::RoundToInt(v0 * DataGlobal_B0BEF0 * 0.5);
    DataGlobal_B0BF60 = result;
    return result;
}
}
} // namespace gamemd

// 0x6C8D90
namespace gamemd {
void sub_6C8D90()
{
{
    DataGlobal_B0BF00 = Math::ArcTan((double)DataGlobal_B0BF60 * 0.00390625);
}
}
} // namespace gamemd

// 0x6C8DC0
namespace gamemd {
void sub_6C8DC0()
{
{
    DataGlobal_B0BF18 = Math::ArcTan((double)(2 * DataGlobal_B0BF60) / DataGlobal_B0BEF0);
}
}
} // namespace gamemd

// 0x6C8DF0
namespace gamemd {
long long sub_6C8DF0()
{
{
    __int64 result;
    result = Math::RoundToInt((double)(4 * DataGlobal_B0BF60) + 0.5);
    DataGlobal_B0BF54 = result;
    return result;
}
}
} // namespace gamemd

// 0x6C8E20
namespace gamemd {
int sub_6C8E20()
{
{
    DataGlobal_B0BEE8 = 0;
    DataGlobal_B0BEEA = 0;
    return 0;
}
}
} // namespace gamemd

// 0x6C8E30
namespace gamemd {
int sub_6C8E30()
{
{
    DataGlobal_B0BF08 = 0;
    DataGlobal_B0BF0C = 0;
    DataGlobal_B0BF10 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x6C8E50
namespace gamemd {
int sub_6C8E50()
{
{
    DataGlobal_B0BF50 = 0;
    DataGlobal_B0BF48 = 128;
    DataGlobal_B0BF4C = 128;
    return 128;
}
}
} // namespace gamemd

// 0x6C8E70
namespace gamemd {
Iostream_init * E4Recv_6C8E70::__0Iostream_init_QAE_XZ_5()
{
{
    return this;
}
}
} // namespace gamemd

// 0x6C8F10
namespace gamemd {
LRESULT sub_6C8F10(HWND hDlg, int nIDDlgItem, int a3)
{
{
    HWND DlgItem;
    wchar_t Buffer[32];
    swprintf(Buffer, (const size_t)DataGlobal_842158, (const wchar_t *const)(a3 / 60 / 60), a3 / 60 % 60, a3 % 60);
    DlgItem = GetDlgItem(hDlg, nIDDlgItem);
    return SendMessageA(DlgItem, 0x4B2u, 0, (LPARAM)Buffer);
}
}
} // namespace gamemd

// 0x6C8FA0
namespace gamemd {
LRESULT sub_6C8FA0(CampaignScore * aP0, int nIDDlgItem, wchar_t * Format)
{
{
    HWND DlgItem;
    CampaignScore *v7;
    wchar_t Buffer[32];
    swprintf(Buffer, (const size_t)&g_Str_Fmt_PctD, Format, v7);
    DlgItem = GetDlgItem((HWND)aP0, nIDDlgItem);
    return SendMessageA(DlgItem, 0x4B2u, 0, (LPARAM)Buffer);
}
}
} // namespace gamemd

// 0x6C93F0
namespace gamemd {
void sub_6C93F0()
{
{
    long double v0;
    v0 = pow(256.0, 2.0);
    DataGlobal_B0BF78 = Math::Sqrt(v0 + v0);
}
}
} // namespace gamemd

// 0x6C9420
namespace gamemd {
void sub_6C9420()
{
{
    DataGlobal_B0BFC8 = DataGlobal_B0BF78 / 60.0;
}
}
} // namespace gamemd

// 0x6C9440
namespace gamemd {
void sub_6C9440()
{
{
    DataGlobal_B0BFB0 = 1.0 / DataGlobal_B0BFC8;
}
}
} // namespace gamemd

// 0x6C9460
namespace gamemd {
void sub_6C9460()
{
{
    DataGlobal_B0BFA8 = 0.0174532925199433 * 45.0;
}
}
} // namespace gamemd

// 0x6C9480
namespace gamemd {
void sub_6C9480()
{
{
    DataGlobal_B0BF80 = 0.0174532925199433 * 60.0;
}
}
} // namespace gamemd

// 0x6C94A0
namespace gamemd {
void sub_6C94A0()
{
{
    DataGlobal_B0BF68 = 0.0174532925199433 * 90.0;
}
}
} // namespace gamemd

// 0x6C94C0
namespace gamemd {
long long sub_6C94C0()
{
{
    double v0;
    __int64 result;
    v0 = Math::Sin(DataGlobal_B0BF68 - DataGlobal_B0BF80);
    result = Math::RoundToInt(v0 * DataGlobal_B0BF78 * 0.5);
    DataGlobal_B0BFD0 = result;
    return result;
}
}
} // namespace gamemd

// 0x6C9500
namespace gamemd {
void sub_6C9500()
{
{
    DataGlobal_B0BF88 = Math::ArcTan((double)DataGlobal_B0BFD0 * 0.00390625);
}
}
} // namespace gamemd

// 0x6C9530
namespace gamemd {
void sub_6C9530()
{
{
    DataGlobal_B0BFA0 = Math::ArcTan((double)(2 * DataGlobal_B0BFD0) / DataGlobal_B0BF78);
}
}
} // namespace gamemd

// 0x6C9560
namespace gamemd {
long long sub_6C9560()
{
{
    __int64 result;
    result = Math::RoundToInt((double)(4 * DataGlobal_B0BFD0) + 0.5);
    DataGlobal_B0BFC4 = result;
    return result;
}
}
} // namespace gamemd

// 0x6C9590
namespace gamemd {
int sub_6C9590()
{
{
    DataGlobal_B0BF70 = 0;
    DataGlobal_B0BF72 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x6C95A0
namespace gamemd {
int sub_6C95A0()
{
{
    DataGlobal_B0BF90 = 0;
    DataGlobal_B0BF94 = 0;
    DataGlobal_B0BF98 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x6C95C0
namespace gamemd {
int sub_6C95C0()
{
{
    DataGlobal_B0BFC0 = 0;
    DataGlobal_B0BFB8 = 128;
    DataGlobal_B0BFBC = 128;
    return 128;
}
}
} // namespace gamemd

// 0x6C96E0
namespace gamemd {
unsigned int * E4Recv_6C96E0::sub_6C96E0(unsigned int * a2, int a3)
{
{
    float *v3;
    int v4;
    int v5;
    char *v6;
    double v7;
    int v9;
    int v10;
    int v11;
    int v12;
    v3 = this;
    v9 = 0;
    v4 = 4;
    v10 = 0;
    v11 = 0;
    v12 = 0;
    v5 = a3 - (int)this;
    v6 = (char *)((char *)&v9 - (char *)v3);
    do
  {
    v7 = *(float *)((char *)(v3) + v5) + *v3;
    ++v3;
    --v4;
    *(float *)((char *)(v3) + (int)v6 - 4) = v7;
  }
    while ( v4 );
    *a2 = v9;
    *((int*)(a2) + 1) = v10;
    *((int*)(a2) + 2) = v11;
    *((int*)(a2) + 3) = v12;
    return a2;
}
}
} // namespace gamemd

// 0x6C9780
namespace gamemd {
unsigned int * E4Recv_6C9780::sub_6C9780(unsigned int * a2, float * a3)
{
{
    int v3;
    float *v4;
    char *v5;
    double v6;
    int v8;
    int v9;
    int v10;
    int v11;
    v8 = 0;
    v9 = 0;
    v3 = 4;
    v10 = 0;
    v11 = 0;
    v4 = a3;
    v5 = (char *)(this - (char *)a3);
    do
  {
    v6 = *(float *)((char *)(v4) + (int)v5) - *v4;
    ++v4;
    --v3;
    *(float *)((char *)(v4) + (char *)&v8 - (char *)a3 - 4) = v6;
  }
    while ( v3 );
    *a2 = v8;
    *((int*)(a2) + 1) = v9;
    *((int*)(a2) + 2) = v10;
    *((int*)(a2) + 3) = v11;
    return a2;
}
}
} // namespace gamemd

// 0x6C9820
namespace gamemd {
int Float_FirstPositive(float * a1)
{
{
    int v1;
    v1 = 0;
    while ( *a1 <= 0.0 )
  {
    ++v1;
    ++a1;
    if ( v1 >= 4 )
    return -1;
  }
    return v1;
}
}
} // namespace gamemd

// 0x6C9940
namespace gamemd {
int E4Recv_6C9940::sub_6C9940(char a2, char a3, unsigned char a4)
{
{
    unsigned short v4;
    int result;
    HIBYTE(v4) = a2;
    LOBYTE(v4) = a3;
    result = a4 | (v4 << 8);
    this->M8 = result;
    return result;
}
}
} // namespace gamemd

// 0x6C9960
namespace gamemd {
void E4Recv_6C9960::sub_6C9960(wchar_t * String)
{
{
    size_t v3;
    wchar_t *v4;
    if ( this->M20 )
  {
    __3_YAXPAX_Z(this->M20);
    this->M20 = 0;
  }
    if ( String )
  {
    v3 = wcslen(String);
    v4 = (wchar_t *)__2_YAPAXI_Z(2 * v3 + 2);
    this->M20 = v4;
    if ( v4 )
    wcscpy(v4, String);
  }
}
}
} // namespace gamemd

// 0x6C99B0
namespace gamemd {
int sub_6C99B0()
{
{
    DataGlobal_B0BFD8 = 0;
    DataGlobal_B0BFDC = 0;
    DataGlobal_B0BFE0 = 0;
    DataGlobal_B0BFE4 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x6C9AC0
namespace gamemd {
unsigned int * E4Recv_6C9AC0::sub_6C9AC0()
{
{
    *(void**)this = 0;
    this->M4 = 0;
    this->M8 = 0;
    this->M12 = 0;
    this->M16 = 0;
    this->M20 = 0;
    this->M24 = 0;
    this->M28 = 0;
    this->M32 = 0;
    return this;
}
}
} // namespace gamemd

// 0x6C9F00
namespace gamemd {
void nullsub_40()
{
  ;
}
} // namespace gamemd

// 0x6CA5A0
namespace gamemd {
unsigned int E4Recv_6CA5A0::sub_6CA5A0()
{
{
    ObjectClass *v1;
    ObjectClass *v2;
    ObjectClass *v3;
    int v4;
    BlowStraw *v5;
    int v6;
    ObjectClass *v7;
    ObjectClass *v8;
    BlowStraw Destination;
    short v11;
    wcsncpy((wchar_t *)&Destination, this, (DropListClass *)0xC);
    v11 = 0;
    v1 = (ObjectClass *)wcschr(&Destination, (CCINIClass *)0x3A);
    *(short *)v1->__pad_0 = 0;
    v1 = (ObjectClass *)((char *)(v1) + 2);
    v2 = (ObjectClass *)WideChar::ToLong(&Destination, 0, 10);
    v3 = (ObjectClass *)wcschr((BlowStraw *)v1, (CCINIClass *)0x3A);
    *(short *)v3->__pad_0 = 0;
    v4 = WideChar::ToLong((BlowStraw *)v1, 0, 10);
    v5 = (BlowStraw *)&v3->__pad_0[2];
    v6 = v4;
    v7 = (ObjectClass *)wcschr((BlowStraw *)&v3->__pad_0[2], (CCINIClass *)0x3A);
    *(short *)v7->__pad_0 = 0;
    v8 = (ObjectClass *)WideChar::ToLong(v5, 0, 10);
    return 60 * WideChar::ToLong((BlowStraw *)&v7->__pad_0[2], 0, 10) / 0x64u + 60 * ((int)v8 + 3600 * (int)v2 + 60 * v6);
}
}
} // namespace gamemd

// 0x6CA670
namespace gamemd {
unsigned int sub_6CA670(wchar_t * a1, unsigned int * a2)
{
{
    unsigned int result;
    result = sub_6CA5A0(a1);
    *a2 = result;
    return result;
}
}
} // namespace gamemd

// 0x6CA680
namespace gamemd {
unsigned int sub_6CA680(wchar_t * a1, int a2)
{
{
    unsigned int result;
    result = sub_6CA5A0(a1);
    if ( result )
    *(int *)(a2 + 4) = result;
    return result;
}
}
} // namespace gamemd

// 0x6CA730
namespace gamemd {
int sub_6CA730(BlowStraw * Str, unsigned int * a2)
{
{
    wchar_t *v4;
    char v5;
    BlowStraw *v6;
    wchar_t *v7;
    unsigned char v9;
    char v10;
    char v11;
    v4 = wcschr(Str, (CCINIClass *)0x3A);
    *v4 = 0;
    v5 = WideChar::ToLong(Str, 0, 10);
    v6 = (BlowStraw *)(v4 + 1);
    v11 = v5;
    v7 = wcschr((BlowStraw *)(v4 + 1), (CCINIClass *)0x3A);
    *v7 = 0;
    v10 = WideChar::ToLong(v6, 0, 10);
    v9 = WideChar::ToLong((BlowStraw *)(v7 + 1), 0, 10);
    return sub_6C9940(a2, v11, v10, v9);
}
}
} // namespace gamemd

// 0x6CA7B0
namespace gamemd {
void sub_6CA7B0(wchar_t * String, void ** a2)
{
{
    sub_6C9960(a2, String);
}
}
} // namespace gamemd

// 0x6CABF0
namespace gamemd {
int sub_6CABF0()
{
{
    DataGlobal_B0BFF0 = 0;
    DataGlobal_B0BFF4 = 0;
    DataGlobal_B0BFF8 = 0;
    DataGlobal_B0BFFC = 0;
    return 0;
}
}
} // namespace gamemd

// 0x6CAC10
namespace gamemd {
void sub_6CAC10()
{
{
    long double v0;
    v0 = pow(256.0, 2.0);
    DataGlobal_B0C008 = Math::Sqrt(v0 + v0);
}
}
} // namespace gamemd

// 0x6CAC40
namespace gamemd {
void sub_6CAC40()
{
{
    DataGlobal_B0C080 = DataGlobal_B0C008 / 60.0;
}
}
} // namespace gamemd

// 0x6CAC60
namespace gamemd {
void sub_6CAC60()
{
{
    DataGlobal_B0C068 = 1.0 / DataGlobal_B0C080;
}
}
} // namespace gamemd

// 0x6CAC80
namespace gamemd {
void sub_6CAC80()
{
{
    DataGlobal_B0C060 = 0.0174532925199433 * 45.0;
}
}
} // namespace gamemd

// 0x6CACA0
namespace gamemd {
void sub_6CACA0()
{
{
    DataGlobal_B0C010 = 0.0174532925199433 * 60.0;
}
}
} // namespace gamemd

// 0x6CACC0
namespace gamemd {
void sub_6CACC0()
{
{
    DataGlobal_B0BFE8 = 0.0174532925199433 * 90.0;
}
}
} // namespace gamemd

// 0x6CACE0
namespace gamemd {
long long sub_6CACE0()
{
{
    double v0;
    __int64 result;
    v0 = Math::Sin(DataGlobal_B0BFE8 - DataGlobal_B0C010);
    result = Math::RoundToInt(v0 * DataGlobal_B0C008 * 0.5);
    DataGlobal_B0C088 = result;
    return result;
}
}
} // namespace gamemd

// 0x6CAD20
namespace gamemd {
void sub_6CAD20()
{
{
    DataGlobal_B0C018 = Math::ArcTan((double)DataGlobal_B0C088 * 0.00390625);
}
}
} // namespace gamemd

// 0x6CAD50
namespace gamemd {
void sub_6CAD50()
{
{
    DataGlobal_B0C030 = Math::ArcTan((double)(2 * DataGlobal_B0C088) / DataGlobal_B0C008);
}
}
} // namespace gamemd

// 0x6CAD80
namespace gamemd {
long long sub_6CAD80()
{
{
    __int64 result;
    result = Math::RoundToInt((double)(4 * DataGlobal_B0C088) + 0.5);
    DataGlobal_B0C07C = result;
    return result;
}
}
} // namespace gamemd

// 0x6CADB0
namespace gamemd {
int sub_6CADB0()
{
{
    DataGlobal_B0C000 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x6CADC0
namespace gamemd {
int sub_6CADC0()
{
{
    DataGlobal_B0C020 = 0;
    DataGlobal_B0C024 = 0;
    DataGlobal_B0C028 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x6CADE0
namespace gamemd {
int sub_6CADE0()
{
{
    DataGlobal_B0C078 = 0;
    DataGlobal_B0C070 = 128;
    DataGlobal_B0C074 = 128;
    return 128;
}
}
} // namespace gamemd

// 0x6CAE00
namespace gamemd {
int sub_6CAE00()
{
{
    DataGlobal_B0C038 = 0;
    DataGlobal_B0C03C = 1;
    DataGlobal_B0C040 = -65535;
    DataGlobal_B0C044 = -65536;
    DataGlobal_B0C048 = -1;
    DataGlobal_B0C050 = 0x1FFFF;
    DataGlobal_B0C04C = 0xFFFF;
    DataGlobal_B0C054 = 0x10000;
    DataGlobal_B0C058 = 65537;
    return 65537;
}
}
} // namespace gamemd

// 0x6CC070
namespace gamemd {
void nullsub_231()
{
  ;
}
} // namespace gamemd

// 0x6CDE80
namespace gamemd {
void nullsub_235(int a1, int a2)
{
  ;
}
} // namespace gamemd

// 0x6CE360
namespace gamemd {
int sub_6CE360()
{
{
    DataGlobal_B0C098 = 0;
    DataGlobal_B0C09C = 0;
    DataGlobal_B0C0A0 = 0;
    DataGlobal_B0C0A4 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x6CE380
namespace gamemd {
void sub_6CE380()
{
{
    long double v0;
    v0 = pow(256.0, 2.0);
    DataGlobal_B0C0B0 = Math::Sqrt(v0 + v0);
}
}
} // namespace gamemd

// 0x6CE3B0
namespace gamemd {
void sub_6CE3B0()
{
{
    DataGlobal_B0C100 = DataGlobal_B0C0B0 / 60.0;
}
}
} // namespace gamemd

// 0x6CE3D0
namespace gamemd {
void sub_6CE3D0()
{
{
    DataGlobal_B0C0E8 = 1.0 / DataGlobal_B0C100;
}
}
} // namespace gamemd

// 0x6CE3F0
namespace gamemd {
void sub_6CE3F0()
{
{
    DataGlobal_B0C0E0 = 0.0174532925199433 * 45.0;
}
}
} // namespace gamemd

// 0x6CE410
namespace gamemd {
void sub_6CE410()
{
{
    DataGlobal_B0C0B8 = 0.0174532925199433 * 60.0;
}
}
} // namespace gamemd

// 0x6CE430
namespace gamemd {
void sub_6CE430()
{
{
    DataGlobal_B0C090 = 0.0174532925199433 * 90.0;
}
}
} // namespace gamemd

// 0x6CE450
namespace gamemd {
long long sub_6CE450()
{
{
    double v0;
    __int64 result;
    v0 = Math::Sin(DataGlobal_B0C090 - DataGlobal_B0C0B8);
    result = Math::RoundToInt(v0 * DataGlobal_B0C0B0 * 0.5);
    DataGlobal_B0C108 = result;
    return result;
}
}
} // namespace gamemd

// 0x6CE490
namespace gamemd {
void sub_6CE490()
{
{
    DataGlobal_B0C0C0 = Math::ArcTan((double)DataGlobal_B0C108 * 0.00390625);
}
}
} // namespace gamemd

// 0x6CE4C0
namespace gamemd {
void sub_6CE4C0()
{
{
    DataGlobal_B0C0D8 = Math::ArcTan((double)(2 * DataGlobal_B0C108) / DataGlobal_B0C0B0);
}
}
} // namespace gamemd

// 0x6CE4F0
namespace gamemd {
long long sub_6CE4F0()
{
{
    __int64 result;
    result = Math::RoundToInt((double)(4 * DataGlobal_B0C108) + 0.5);
    DataGlobal_B0C0FC = result;
    return result;
}
}
} // namespace gamemd

// 0x6CE520
namespace gamemd {
int sub_6CE520()
{
{
    DataGlobal_B0C0A8 = 0;
    DataGlobal_B0C0AA = 0;
    return 0;
}
}
} // namespace gamemd

// 0x6CE530
namespace gamemd {
int sub_6CE530()
{
{
    DataGlobal_B0C0C8 = 0;
    DataGlobal_B0C0CC = 0;
    DataGlobal_B0C0D0 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x6CE550
namespace gamemd {
int sub_6CE550()
{
{
    DataGlobal_B0C0F8 = 0;
    DataGlobal_B0C0F0 = 128;
    DataGlobal_B0C0F4 = 128;
    return 128;
}
}
} // namespace gamemd

// 0x6CE570
namespace gamemd {
ObjectClass * E4Recv_6CE570::sub_6CE570()
{
{
    ObjectClass *v2;
    const void **v3;
    v2 = 0;
    v3 = (const void **)&DataGlobal_830620[73632];
    while ( _strcmpi(*v3, this) )
  {
    ++v3;
    v2 = (ObjectClass *)((char *)(v2) + 1);
    if ( (int)v3 >= (int)&DataGlobal_830620[73680] )
    return (ObjectClass *)-1;
  }
    return v2;
}
}
} // namespace gamemd

// 0x6CF070
namespace gamemd {
int sub_6CF070()
{
{
    sub_6CF8F0(&DataGlobal_B0C114, 0, 0);
    DataGlobal_B0C114 = (int)&vt_DynamicVectorClass_SwizzlePointerClass;
    DataGlobal_B0C128 = 10;
    DataGlobal_B0C124 = 0;
    sub_6CF8F0(&DataGlobal_B0C12C, 0, 0);
    DataGlobal_B0C12C = (int)&vt_DynamicVectorClass_SwizzlePointerClass;
    DataGlobal_B0C13C = 0;
    SwizzleManagerClass_Instance = (int)&vt_SwizzleManagerClass;
    DataGlobal_B0C128 = 1000;
    DataGlobal_B0C140 = 1000;
    return atexit(SwizzleManagerClass::Register);
}
}
} // namespace gamemd

// 0x6CF8F0
namespace gamemd {
unsigned int * E4Recv_6CF8F0::sub_6CF8F0(int a2, unsigned int * a3)
{
{
    int *v4;
    int v5;
    int *v7;
    int *v8;
    int v9;
    this->M4 = 0;
    this->M8 = a2;
    this->M12 = 1;
    this->M13 = 0;
    *(void**)this = &vt_VectorClass_SwizzlePointerClass;
    if ( !a2 )
    return this;
    if ( !a3 )
  {
    v7 = __2_YAPAXI_Z(8 * a2);
    if ( v7 )
    {
    v8 = v7;
    if ( a2 - 1 >= 0 )
      {
    v9 = a2;
    do
        {
    *v8 = 0;
    v8[1] = 0;
    v8 += 2;
    --v9;
        }
    while ( v9 );
    this->M4 = v7;
    this->M13 = 1;
    return this;
      }
    }
    else
    {
    v7 = 0;
    }
    this->M4 = v7;
    this->M13 = 1;
    return this;
  }
    v4 = a3;
    if ( a2 - 1 >= 0 )
  {
    v5 = a2;
    do
    {
    *v4 = 0;
    v4[1] = 0;
    v4 += 2;
    --v5;
    }
    while ( v5 );
  }
    this->M4 = a3;
    return this;
}
}
} // namespace gamemd

// 0x6CF990
namespace gamemd {
int sub_6CF990()
{
{
    DataGlobal_B0CB28 = 0;
    DataGlobal_B0CB2C = 0;
    DataGlobal_B0CB30 = 0;
    DataGlobal_B0CB34 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x6CF9B0
namespace gamemd {
void sub_6CF9B0()
{
{
    long double v0;
    v0 = pow(256.0, 2.0);
    DataGlobal_B0CB48 = Math::Sqrt(v0 + v0);
}
}
} // namespace gamemd

// 0x6CF9E0
namespace gamemd {
void sub_6CF9E0()
{
{
    DataGlobal_B0CD30 = DataGlobal_B0CB48 / 60.0;
}
}
} // namespace gamemd

// 0x6CFA00
namespace gamemd {
void sub_6CFA00()
{
{
    DataGlobal_B0CCA8 = 1.0 / DataGlobal_B0CD30;
}
}
} // namespace gamemd

// 0x6CFA20
namespace gamemd {
void sub_6CFA20()
{
{
    DataGlobal_B0CCA0 = 0.0174532925199433 * 45.0;
}
}
} // namespace gamemd

// 0x6CFA40
namespace gamemd {
void sub_6CFA40()
{
{
    DataGlobal_B0CB60 = 0.0174532925199433 * 60.0;
}
}
} // namespace gamemd

// 0x6CFA60
namespace gamemd {
void sub_6CFA60()
{
{
    DataGlobal_B0C1B0 = 0.0174532925199433 * 90.0;
}
}
} // namespace gamemd

// 0x6CFA80
namespace gamemd {
long long sub_6CFA80()
{
{
    double v0;
    __int64 result;
    v0 = Math::Sin(DataGlobal_B0C1B0 - DataGlobal_B0CB60);
    result = Math::RoundToInt(v0 * DataGlobal_B0CB48 * 0.5);
    DataGlobal_B0CD3C = result;
    return result;
}
}
} // namespace gamemd

// 0x6CFAC0
namespace gamemd {
void sub_6CFAC0()
{
{
    DataGlobal_B0CB70 = Math::ArcTan((double)DataGlobal_B0CD3C * 0.00390625);
}
}
} // namespace gamemd

// 0x6CFAF0
namespace gamemd {
void sub_6CFAF0()
{
{
    DataGlobal_B0CC30 = Math::ArcTan((double)(2 * DataGlobal_B0CD3C) / DataGlobal_B0CB48);
}
}
} // namespace gamemd

// 0x6CFB20
namespace gamemd {
long long sub_6CFB20()
{
{
    __int64 result;
    result = Math::RoundToInt((double)(4 * DataGlobal_B0CD3C) + 0.5);
    DataGlobal_B0CD2C = result;
    return result;
}
}
} // namespace gamemd

// 0x6CFB50
namespace gamemd {
int sub_6CFB50()
{
{
    DataGlobal_B0CB40 = 0;
    DataGlobal_B0CB42 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x6CFB60
namespace gamemd {
int sub_6CFB60()
{
{
    DataGlobal_B0CC10 = 0;
    DataGlobal_B0CC14 = 0;
    DataGlobal_B0CC18 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x6CFB80
namespace gamemd {
int sub_6CFB80()
{
{
    DataGlobal_B0CD20 = 0;
    DataGlobal_B0CD18 = 128;
    DataGlobal_B0CD1C = 128;
    return 128;
}
}
} // namespace gamemd

// 0x6CFBA0
namespace gamemd {
int sub_6CFBA0()
{
{
    char *v0;
    int v1;
    v0 = &DataGlobal_B0C1C0;
    v1 = 25;
    do
  {
    ShapeButtonClass::Init(v0);
    v0 += 96;
    --v1;
  }
    while ( v1 );
    return atexit(sub_6CFBD0);
}
}
} // namespace gamemd

// 0x6CFBD0
namespace gamemd {
void sub_6CFBD0()
{
{
    int *v0;
    int v1;
    if ( (DataGlobal_B0C1AC & 1) == 0 )
  {
    DataGlobal_B0C1AC |= 1u;
    v0 = &DataGlobal_B0CB20;
    v1 = 25;
    do
    {
    v0 -= 24;
    ShapeButtonClass::Destructor((int)v0);
    --v1;
    }
    while ( v1 );
  }
}
}
} // namespace gamemd

// 0x6CFC00
namespace gamemd {
int sub_6CFC00()
{
{
    ShapeButtonClass::Init(DataGlobal_B0CCB0);
    return atexit(sub_6CFC20);
}
}
} // namespace gamemd

// 0x6CFC20
namespace gamemd {
void sub_6CFC20()
{
{
    if ( (DataGlobal_B0C1AC & 2) == 0 )
  {
    DataGlobal_B0C1AC |= 2u;
    ShapeButtonClass::Destructor((int)DataGlobal_B0CCB0);
  }
}
}
} // namespace gamemd

// 0x6CFC40
namespace gamemd {
int sub_6CFC40()
{
{
    ShapeButtonClass::Init(DataGlobal_B0CC40);
    return atexit(sub_6CFC60);
}
}
} // namespace gamemd

// 0x6CFC60
namespace gamemd {
void sub_6CFC60()
{
{
    if ( (DataGlobal_B0C1AC & 4) == 0 )
  {
    DataGlobal_B0C1AC |= 4u;
    ShapeButtonClass::Destructor((int)DataGlobal_B0CC40);
  }
}
}
} // namespace gamemd

// 0x6CFD20
namespace gamemd {
void sub_6CFD20(int a1, int a2)
{
{
    g_ObjectTrackingPool[a1] = a2;
}
}
} // namespace gamemd

// 0x6CFD30
namespace gamemd {
int sub_6CFD30(int a1)
{
{
    return g_ObjectTrackingPool[a1];
}
}
} // namespace gamemd

// 0x6CFD40
namespace gamemd {
char * FontClass_GetEntry(int a1)
{
{
    unsigned int v1;
    v1 = g_ObjectTrackingPool[a1];
    if ( v1 > 0x18 )
    return 0;
    else
    return (char *)&DataGlobal_B0C1C0 + 96 * v1;
}
}
} // namespace gamemd

// 0x6CFE10
namespace gamemd {
int E4Recv_6CFE10::sub_6CFE10()
{
{
    return (int)this - DataGlobal_B0CC20 + 1;
}
}
} // namespace gamemd
