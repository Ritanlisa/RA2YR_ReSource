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
#include "e4/classes/FileClass_e4.hpp"  // G42.33 b3: FileClass body (SetName/Open2)
#include "e4/classes/ComPtr_e4.hpp"  // G42.33 b3: ComPtr body (Release)
#include "e4/classes/RawFileClass_e4.hpp"  // G42.33 b9: RawFileClass body
// G42.33 b3 TU-local carriers/supplies
// G42.33 b8: Performance minimal carrier
namespace gamemd { struct Performance { static int MeasureTicks(void *aP0); }; }  // 0x5CAFC0 static-form (G42.33 b8)
// G42.33 b9 carrier includes (C2027 undefined types; full e4 hpps exist)
#include "e4/classes/AudioController_e4.hpp"  // Stop member
#include "e4/classes/AudioFile_e4.hpp"  // Stop static-form (added below)
#include "e4/classes/AudioFileClass_e4.hpp"  // Release static vararg
#include "e4/classes/Buffer_e4.hpp"  // Init(int,int) member
#include "e4/classes/StaticButtonClass_e4.hpp"  // Draw static-form (added below)
#include "e4/classes/Text_e4.hpp"  // MeasureWidth static
#include "e4/classes/ThemeClass_e4.hpp"  // Play member
#include "e4/classes/SwizzleManagerClass_e4.hpp"  // G42.36 C2027 supply
#include "e4/classes/Init_e4.hpp"  // G42.36 C2027 supply
#include "e4/minimal_carriers.hpp"  // G42.42q minimal carriers
#include "e4/classes/DynamicVector_e4.hpp"
#include "e4/classes/CChatEventSink_e4.hpp"
#include "e4/classes/ScenarioClass_e4.hpp"
// G42.33 b9 TU-local minimal carriers (fwd-only in _fwd_e4.hpp)
namespace gamemd { struct StringList { int Find(int aP0); }; }  // minimal E2 (0x6c9361 receiver)
namespace gamemd { struct WideChar { static unsigned int ToLong(int aP0, int aP1, int aP2); }; }  // minimal E2 static-form
// G42.33 b9 TU-local fwd decls (use-before-def in this TU)
namespace gamemd {
void nullsub_234();  // def later in this TU (atexit target)
void sub_6C6B60(void);  // def later in this TU (atexit target)
// G42.33 b12 TU-local carriers 2 (fwd-only in _fwd_e4.hpp)
struct LineTrail { unsigned char lineTrailer[4]; };   // minimal E2 (compile stride; layout via member_lookup pending)
namespace gamemd { struct ShapeButtonClass { static void Init(void * aP0); static void Destructor(void * aP0); }; }   // minimal E2 static-form
// G42.33 b12 TU-local fwd decls 2 (use-before-def atexit targets)
void sub_6CFBD0();
void sub_6CFC20();
void sub_6CFC60();
}
#ifndef GAMEMD_E4_TU_rc_ptr_base
#define GAMEMD_E4_TU_rc_ptr_base 1  // G57c6: suppress minimal_carriers.hpp twin (TU-local def below)
#endif
namespace gamemd { struct rc_ptr_base { void *ptr_0; }; }  // fwd-only in _fwd_e4.hpp; minimal E2 (v264 storage)
namespace gamemd { struct NetMessage { static char * Pack4(void *aP0, const void *aP1, int aP2); static char * Pack(void *aP0, const void *aP1, void *aP2, int aP3); }; }  // 0x4CB700/0x4CB830 thiscall static-form (G42.33 b3)

// 0x6C6F50
namespace gamemd {  // G42.18 ns repair
int ProcessGameResults(char a1)
{

  char v3; // si
  char *v4; // eax
  char *inited; // eax
  char v6; // si
  char *v7; // eax
  char *v8; // eax
  char v9; // si
  char *v10; // eax
  char *v11; // eax
  char v12; // si
  char *v13; // eax
  char *v14; // eax
  char *v15; // eax
  char *v16; // eax
  char *v17; // eax
  char *v18; // eax
  unsigned int v19; // esi
  char *v20; // eax
  char *v21; // eax
  char v22; // si
  char *v23; // eax
  char *v24; // eax
  char v25; // bl
  char *v26; // eax
  char *v27; // eax
  char v28; // bl
  char *v29; // eax
  char *v30; // eax
  char v31; // si
  char *v32; // eax
  char *v33; // eax
  char v34; // si
  char *v35; // eax
  char *v36; // eax
  char *v37; // eax
  char *v38; // eax
  char v39; // bl
  char *v40; // eax
  char *v41; // eax
  char v42; // si
  char *v43; // eax
  char *v44; // eax
  char v45; // si
  char *v46; // eax
  char *v47; // eax
  char *v48; // eax
  char *v49; // eax
  char v50; // si
  char *v51; // eax
  char *v52; // eax
  char v53; // si
  char *v54; // eax
  char *v55; // eax
  HouseClass *v56; // edx
  int v57; // edi
  int *v58; // ecx
  int v59; // esi
  int ptr_0; // eax
  int ptr_C; // ebx
  int v62; // eax
  unsigned int uniqueId; // ecx
  int v64; // eax
  char **v65; // esi
  int v66; // ebx
  char *v67; // edi
  char *v68; // ebp
  unsigned int v69; // ebp
  int *v70; // esi
  int v71; // ebx
  int v72; // edi
  int v73; // eax
  unsigned int v74; // esi
  int *v75; // edi
  char *v76; // eax
  char *v77; // eax
  char *v78; // eax
  char *v79; // eax
  unsigned int v80; // eax
  char v81; // dl
  unsigned char *v82; // ecx
  char v83; // si
  char *v84; // eax
  char *v85; // eax
  unsigned int v86; // esi
  char *v87; // eax
  char *v88; // eax
  char *v89; // eax
  char v90; // si
  char *v91; // eax
  char *v92; // eax
  char *ModuleInternalVersion; // eax
  char *v94; // eax
  char *v95; // eax
  char *v96; // eax
  char *v97; // eax
  char *v98; // eax
  char *v99; // eax
  char *v100; // eax
  char *v101; // eax
  char v102; // si
  char *v103; // eax
  char *v104; // eax
  int v105; // eax
  int v106; // esi
  char v107; // bl
  char *v108; // eax
  char *v109; // eax
  int v110; // edi
  char *v111; // eax
  char *v112; // eax
  int v113; // edi
  char *v114; // eax
  char *v115; // eax
  int v116; // edi
  char *v117; // eax
  char *v118; // eax
  int v119; // edi
  char *v120; // eax
  char *v121; // eax
  char *v122; // eax
  char *v123; // eax
  char v124; // al
  char *v125; // eax
  char *v126; // eax
  int v127; // edi
  char *v128; // eax
  char *v129; // eax
  int v130; // edi
  char *v131; // eax
  char *v132; // eax
  char v133; // di
  char *v134; // eax
  char *v135; // eax
  int v136; // ebp
  int v137; // edi
  char *v138; // edi
  char *v139; // eax
  char *v140; // eax
  int v141; // ebp
  int v142; // edi
  char *v143; // edi
  char *v144; // eax
  char *v145; // eax
  int v146; // ebp
  int v147; // edi
  char *v148; // edi
  char *v149; // eax
  char *v150; // eax
  int v151; // ebp
  int v152; // edi
  char *v153; // edi
  char *v154; // eax
  char *v155; // eax
  int i; // edi
  int v157; // eax
  int j; // edi
  unsigned __int8 *v159; // eax
  int v160; // eax
  int k; // edi
  int v162; // eax
  int v163; // ebp
  int m; // edi
  int v165; // ebx
  int v166; // edi
  char *v167; // edi
  char *v168; // eax
  char *v169; // eax
  int v170; // ebx
  __int16 v171; // bp
  int n; // edi
  char *v173; // edi
  char *v174; // eax
  char *v175; // eax
  int v176; // ebx
  __int16 v177; // bp
  int ii; // edi
  char *v179; // edi
  char *v180; // eax
  char *v181; // eax
  int v182; // ebx
  __int16 v183; // bp
  int jj; // edi
  char *v185; // edi
  char *v186; // eax
  char *v187; // eax
  int v188; // edi
  int v189; // ebx
  char *v190; // edi
  char *v191; // eax
  char *v192; // eax
  int v193; // ebx
  __int16 v194; // bp
  int kk; // edi
  char *v196; // edi
  char *v197; // eax
  char *v198; // eax
  int v199; // ebx
  __int16 v200; // bp
  int mm; // edi
  char *v202; // edi
  char *v203; // eax
  char *v204; // eax
  int v205; // ebx
  __int16 v206; // bp
  int nn; // edi
  char *v208; // edi
  char *v209; // eax
  char *v210; // eax
  int v211; // ebx
  int v212; // edi
  char *v213; // edi
  char *v214; // eax
  char *v215; // eax
  int v216; // ebx
  int v217; // edi
  char *v218; // edi
  char *v219; // eax
  char *v220; // eax
  char v221; // bl
  int v222; // esi
  char *v223; // eax
  char *v224; // eax
  int abstractFlags; // edi
  int v226; // ebp
  char v227; // si
  char *v228; // eax
  char *v229; // eax
  char *v230; // eax
  char v231; // si
  char *v232; // eax
  char *v233; // eax
  char *v234; // eax
  char v235; // si
  char *v236; // eax
  char *v237; // eax
  char *v238; // eax
  char *v239; // eax
  char *v240; // eax
  char *v241; // eax
  u_short *v242; // esi
  int v243; // ecx
  char v244; // al
  size_t v245; // ecx
  unsigned int *v246; // edi
  u_short *v247; // esi
  int v248; // eax
  int v249; // ecx
  int v250; // ebx
  char *v251; // ebp
  unsigned int *v252; // esi
  char v253; // al
  unsigned int v254; // ecx
  unsigned int *v255; // edx
  int v256; // ebx
  char *v257; // ebp
  unsigned int *v258; // esi
  char v259; // al
  unsigned int v260; // ecx
  unsigned int *v261; // edx
  Performance *v262; // [esp+14h] [ebp-83A4h]
  LinkedList v263; // [esp+24h] [ebp-8394h] BYREF
  char v264; // [esp+33h] [ebp-8385h]
  ObjectClass v265; // [esp+34h] [ebp-8384h] BYREF
  int v266[15]; // [esp+15Ch] [ebp-825Ch] BYREF
  CHAR Filename[280]; // [esp+298h] [ebp-8120h] BYREF
  unsigned int v268[8194]; // [esp+3B0h] [ebp-8008h] BYREF

  HIBYTE(v265.ptr_8) = a1; /*0x6c6f67*/
  *(unsigned short *)v263.__pad_0 = 0; /*0x6c6f6b*/
  *(unsigned short *)&v263.ptr_2 = 0; /*0x6c6f70*/
  v263.Tail[0] = 0; /*0x6c6f75*/
  v265.ptr_C = 0; /*0x6c6f79*/
  v265.abstractFlags = 0; /*0x6c6f7d*/
  if ( HouseClass_Observer && *(int *)((char *)&stru_A83CD9.estimatedHealth + 3) == HouseClass_Observer ) /*0x6c6f89*/
  {
    ResultNode::CleanupList((ResultNode *)&v263); /*0x6c6f8f*/
    return; /*0x6c6f9c*/
  }
  v262 = a2; /*0x6c6fa5*/
  Debug::Log(); /*0x6c6fac*/
  v3 = (char)dword_B779D4; /*0x6c6fb1*/
  v4 = (char *)__2_YAPAXI_Z(0x10u); /*0x6c6fb9*/
  if ( v4 ) /*0x6c6fc3*/
    inited = TerrainInitMap(v4, aIdno, v3); /*0x6c6fcd*/
  else
    inited = 0; /*0x6c6fd4*/
  LinkedList::PushFront(&v263, (int)inited); /*0x6c6fdb*/
  if ( *(unsigned int *)&dword_A8B238 == 4 && dword_A8B244 == 3 ) /*0x6c6ff5*/
  {
    v6 = dword_A8B240[0]; /*0x6c6ff7*/
    v7 = (char *)__2_YAPAXI_Z(0x10u); /*0x6c6fff*/
    if ( v7 ) /*0x6c7009*/
      v8 = NetMessage::Pack4(v7, aWdtt, v6); /*0x6c7013*/
    else
      v8 = 0; /*0x6c701a*/
    LinkedList::PushFront(&v263, (int)v8); /*0x6c7021*/
    v9 = dword_B77D6C[0]; /*0x6c7026*/
    if ( !a1 ) /*0x6c702e*/
      v9 = dword_B73814; /*0x6c7030*/
  }
  else
  {
    v9 = dword_B77D6C[0]; /*0x6c7053*/
  }
  v10 = (char *)__2_YAPAXI_Z(0x10u); /*0x6c7038*/
  if ( v10 ) /*0x6c7042*/
    v11 = TerrainInitMap(v10, aGsku, v9); /*0x6c704c*/
  else
    v11 = 0; /*0x6c705b*/
  LinkedList::PushFront(&v263, (int)v11); /*0x6c7062*/
  v12 = dword_B779C4[0]; /*0x6c7067*/
  v13 = (char *)__2_YAPAXI_Z(0x10u); /*0x6c706f*/
  if ( v13 ) /*0x6c7079*/
    v14 = TerrainInitMap(v13, aTrny, v12); /*0x6c7083*/
  else
    v14 = 0; /*0x6c708a*/
  LinkedList::PushFront(&v263, (int)v14); /*0x6c7091*/
  if ( *(unsigned int *)&dword_A8B238 == 4 && dword_A8B244 == 3 && a1 ) /*0x6c70a9*/
    *(unsigned int *)dword_B779C4 = 0; /*0x6c70ab*/
  LOBYTE(v265.ptr_0) = byte_A8B8C2 == 1; /*0x6c70bf*/
  v15 = (char *)__2_YAPAXI_Z(0x10u); /*0x6c70c3*/
  if ( v15 ) /*0x6c70cd*/
    v16 = (v15)->AllocAndCopy(aOosy, v265.ptr_0); /*0x6c70db*/
  else
    v16 = 0; /*0x6c70e2*/
  LinkedList::PushFront(&v263, (int)v16); /*0x6c70e9*/
  LOBYTE(v265.ptr_0) = byte_A8B8C1 == 1; /*0x6c70fc*/
  v17 = (char *)__2_YAPAXI_Z(0x10u); /*0x6c7100*/
  if ( v17 ) /*0x6c710a*/
    v18 = (v17)->AllocAndCopy(aFini, v265.ptr_0); /*0x6c7118*/
  else
    v18 = 0; /*0x6c711f*/
  LinkedList::PushFront(&v263, (int)v18); /*0x6c7126*/
  v19 = dword_B0BD48 / 0x3Cu; /*0x6c713a*/
  v20 = (char *)__2_YAPAXI_Z(0x10u); /*0x6c713d*/
  if ( v20 ) /*0x6c7147*/
    v21 = TerrainInitMap(v20, aDura, v19); /*0x6c7151*/
  else
    v21 = 0; /*0x6c7158*/
  LinkedList::PushFront(&v263, (int)v21); /*0x6c715f*/
  v22 = stru_A8B250.__pad_0[12]; /*0x6c7164*/
  v23 = (char *)__2_YAPAXI_Z(0x10u); /*0x6c716c*/
  if ( v23 ) /*0x6c7176*/
    v24 = TerrainInitMap(v23, aCred, v22); /*0x6c7180*/
  else
    v24 = 0; /*0x6c7187*/
  LinkedList::PushFront(&v263, (int)v24); /*0x6c718e*/
  v25 = stru_A8B250.__pad_0[18] != 0; /*0x6c719d*/
  v26 = (char *)__2_YAPAXI_Z(0x10u); /*0x6c71a0*/
  if ( v26 ) /*0x6c71aa*/
    v27 = TerrainInitMap(v26, aShrt, v25); /*0x6c71ba*/
  else
    v27 = 0; /*0x6c71c1*/
  LinkedList::PushFront(&v263, (int)v27); /*0x6c71c8*/
  v28 = stru_A8B250.__pad_0[19] != 0; /*0x6c71d7*/
  v29 = (char *)__2_YAPAXI_Z(0x10u); /*0x6c71da*/
  if ( v29 ) /*0x6c71e4*/
    v30 = TerrainInitMap(v29, aSupr, v28); /*0x6c71f4*/
  else
    v30 = 0; /*0x6c71fb*/
  LinkedList::PushFront(&v263, (int)v30); /*0x6c7202*/
  v31 = stru_A8B250.__pad_0[0]; /*0x6c7207*/
  v32 = (char *)__2_YAPAXI_Z(0x10u); /*0x6c720f*/
  if ( v32 ) /*0x6c7219*/
    v33 = TerrainInitMap(v32, aMode, v31); /*0x6c7223*/
  else
    v33 = 0; /*0x6c722a*/
  LinkedList::PushFront(&v263, (int)v33); /*0x6c7231*/
  v34 = ((unsigned char)dword_A8B320 == 1) + 2 * (stru_A8B250.__pad_0[20] == 1); /*0x6c7252*/
  v35 = (char *)__2_YAPAXI_Z(0x10u); /*0x6c7255*/
  if ( v35 ) /*0x6c725f*/
    v36 = TerrainInitMap(v35, aBamr, v34); /*0x6c7269*/
  else
    v36 = 0; /*0x6c7270*/
  LinkedList::PushFront(&v263, (int)v36); /*0x6c7277*/
  LOBYTE(v265.ptr_0) = stru_A8B250.__pad_0[8] != 0; /*0x6c7289*/
  v37 = (char *)__2_YAPAXI_Z(0x10u); /*0x6c728d*/
  if ( v37 ) /*0x6c7297*/
    v38 = (v37)->AllocAndCopy(aBase, v265.ptr_0); /*0x6c72a5*/
  else
    v38 = 0; /*0x6c72ac*/
  LinkedList::PushFront(&v263, (int)v38); /*0x6c72b3*/
  v39 = stru_A8B250.__pad_0[17] != 0; /*0x6c72c2*/
  v40 = (char *)__2_YAPAXI_Z(0x10u); /*0x6c72c5*/
  if ( v40 ) /*0x6c72cf*/
    v41 = TerrainInitMap(v40, aCrat, v39); /*0x6c72df*/
  else
    v41 = 0; /*0x6c72e6*/
  LinkedList::PushFront(&v263, (int)v41); /*0x6c72ed*/
  v42 = stru_A8B250.__pad_0[36]; /*0x6c72f2*/
  v43 = (char *)__2_YAPAXI_Z(0x10u); /*0x6c72fa*/
  if ( v43 ) /*0x6c7304*/
    v44 = TerrainInitMap(v43, aAipl, v42); /*0x6c730e*/
  else
    v44 = 0; /*0x6c7315*/
  LinkedList::PushFront(&v263, (int)v44); /*0x6c731c*/
  v45 = stru_A8B250.__pad_0[32]; /*0x6c7321*/
  v46 = (char *)__2_YAPAXI_Z(0x10u); /*0x6c7329*/
  if ( v46 ) /*0x6c7333*/
    v47 = TerrainInitMap(v46, aUnit, v45); /*0x6c733d*/
  else
    v47 = 0; /*0x6c7344*/
  LinkedList::PushFront(&v263, (int)v47); /*0x6c734b*/
  v48 = (char *)__2_YAPAXI_Z(0x10u); /*0x6c7352*/
  if ( v48 ) /*0x6c735c*/
    v49 = BuildResultPacket(v48, aScen, byte_A8B8E0); /*0x6c736a*/
  else
    v49 = 0; /*0x6c7371*/
  LinkedList::PushFront(&v263, (int)v49); /*0x6c7378*/
  v50 = dword_B77780[0]; /*0x6c737d*/
  v51 = (char *)__2_YAPAXI_Z(0x10u); /*0x6c7385*/
  if ( v51 ) /*0x6c738f*/
    v52 = TerrainInitMap(v51, aPngs, v50); /*0x6c7399*/
  else
    v52 = 0; /*0x6c73a0*/
  LinkedList::PushFront(&v263, (int)v52); /*0x6c73a7*/
  v53 = dword_B77CE0[0]; /*0x6c73ac*/
  v54 = (char *)__2_YAPAXI_Z(0x10u); /*0x6c73b4*/
  if ( v54 ) /*0x6c73be*/
    v55 = TerrainInitMap(v54, aPngr, v53); /*0x6c73c8*/
  else
    v55 = 0; /*0x6c73cf*/
  LinkedList::PushFront(&v263, (int)v55); /*0x6c73d6*/
  if ( dword_A80238 > 0 ) /*0x6c73e2*/
  {
    v56 = dword_A8022C; /*0x6c73e4*/
    v57 = HouseClass_Observer; /*0x6c73ea*/
    v58 = &v265.ambientSoundController[3]; /*0x6c73f0*/
    v59 = dword_A80238; /*0x6c73f4*/
    do /*0x6c7418*/
    {
      ptr_0 = v56->ptr_0; /*0x6c73f6*/
      if ( *(unsigned char *)(v56->ptr_0 + 492) && ptr_0 != v57 ) /*0x6c7404*/
      {
        ptr_C = v265.ptr_C; /*0x6c7406*/
        *v58++ = ptr_0; /*0x6c740a*/
        v265.ptr_C = ptr_C + 1; /*0x6c7410*/
      }
      v56 = (HouseClass *)((char *)&v56->ptr_4); /*0x6c7414*/
      --v59; /*0x6c7417*/
    }
    while ( v59 ); /*0x6c7418*/
  }
  v62 = v265.ptr_C; /*0x6c741a*/
  uniqueId = 0; /*0x6c741e*/
  for ( v265.uniqueId = 0; uniqueId < v265.ptr_C; v265.uniqueId = uniqueId ) /*0x6c7426*/
  {
    v64 = v62 - uniqueId - 1; /*0x6c742a*/
    if ( v64 ) /*0x6c742d*/
    {
      v65 = (char **)&v265.ambientSoundController[4]; /*0x6c742f*/
      v66 = v64; /*0x6c7433*/
      do /*0x6c745d*/
      {
        v67 = *v65; /*0x6c7435*/
        v68 = *(v65 - 1); /*0x6c7437*/
        if ( _strcmpi(v68 + 90100, *v65 + 90100) > 0 ) /*0x6c7452*/
        {
          *(v65 - 1) = v67; /*0x6c7454*/
          *v65 = v68; /*0x6c7457*/
        }
        ++v65; /*0x6c7459*/
        --v66; /*0x6c745c*/
      }
      while ( v66 ); /*0x6c745d*/
      uniqueId = v265.uniqueId; /*0x6c745f*/
    }
    v62 = v265.ptr_C; /*0x6c7463*/
    ++uniqueId; /*0x6c7467*/
  }
  v69 = v265.ptr_C; /*0x6c7470*/
  if ( v265.ptr_C > 1u ) /*0x6c7477*/
  {
    v70 = &v265.ambientSoundController[4]; /*0x6c7479*/
    v71 = v265.ptr_C - 1; /*0x6c747d*/
    do /*0x6c74a8*/
    {
      v72 = *v70; /*0x6c7480*/
      if ( !_strcmpi((char *)(*v70 + 90100), byte_B779E0) ) /*0x6c748e*/
      {
        v73 = v265.ambientSoundController[3]; /*0x6c749a*/
        v265.ambientSoundController[3] = v72; /*0x6c749e*/
        *v70 = v73; /*0x6c74a2*/
      }
      ++v70; /*0x6c74a4*/
      --v71; /*0x6c74a7*/
    }
    while ( v71 ); /*0x6c74a8*/
  }
  v74 = 0; /*0x6c74aa*/
  if ( v69 ) /*0x6c74ae*/
  {
    v75 = &v265.ambientSoundController[3]; /*0x6c74b0*/
    while ( _strcmpi((char *)(*v75 + 90100), (char *)&stru_B77820.q010) ) /*0x6c74cb*/
    {
      ++v74; /*0x6c74cd*/
      ++v75; /*0x6c74ce*/
      if ( v74 >= v69 ) /*0x6c74d3*/
        goto LABEL_95; /*0x6c74d3*/
    }
    v265.abstractFlags = v74; /*0x6c74d7*/
  }
LABEL_95:
  v76 = (char *)__2_YAPAXI_Z(0x10u); /*0x6c74db*/
  if ( v76 ) /*0x6c74e7*/
    v77 = TerrainInitMap(v76, aPlrs, v69); /*0x6c74f1*/
  else
    v77 = 0; /*0x6c74f8*/
  LinkedList::PushFront(&v263, (int)v77); /*0x6c74ff*/
  v78 = (char *)__2_YAPAXI_Z(0x10u); /*0x6c7506*/
  if ( v78 ) /*0x6c7510*/
    v79 = TerrainInitMap(v78, aSpid, v265.abstractFlags); /*0x6c751e*/
  else
    v79 = 0; /*0x6c7525*/
  LinkedList::PushFront(&v263, (int)v79); /*0x6c752c*/
  if ( *(unsigned int *)dword_B779C4 == 1 ) /*0x6c7538*/
  {
    LoadPlayerProfile(&v265, (const char **)&stru_B73E10.q030); /*0x6c7547*/
    if ( !HIBYTE(v265.ptr_8) ) /*0x6c7552*/
    {
      if ( !byte_A8B8C1 || *(unsigned char *)(*(int *)((char *)&stru_A83CD9.estimatedHealth + 3) + 520) ) /*0x6c7562*/
      {
        Event_Process_77A8B0((ObjectClass *)v265.ptr_4, 1); /*0x6c75aa*/
      }
      else if ( *(unsigned char *)(*(int *)((char *)&stru_A83CD9.estimatedHealth + 3) + 501) /*0x6c7580*/
             || *(unsigned short *)(*(int *)((char *)&stru_A83CD9.estimatedHealth + 3) + 583) )
      {
        Event_Process_77A890((ObjectClass *)v265.ptr_4, 1); /*0x6c759d*/
      }
      else
      {
        Event_Process_77A870((ObjectClass *)v265.ptr_4, 1); /*0x6c7590*/
      }
      SaveProfileWOL(v265.ptr_4, (const char **)&stru_B73E10.q030); /*0x6c75b8*/
    }
    /* X11: ptr_0 install elided (X67 recv-slot, RHS g_ptr_7F3F44) */  /*0x6c75c1*/
    ComPtr::Release((ComPtr *)&v265); /*0x6c75c9*/
  }
  v80 = 0; /*0x6c75d2*/
  if ( v265.ptr_C ) /*0x6c75db*/
  {
    v81 = byte_A8B8C1; /*0x6c75dd*/
    do /*0x6c7654*/
    {
      if ( v81 ) /*0x6c75f4*/
      {
        v82 = (unsigned char *)v265.ambientSoundController[v80 + 3]; /*0x6c75ff*/
        if ( v82[520] ) /*0x6c7603*/
        {
          *(unsigned int *)&v265.bombVisible[4 * v80] = 2; /*0x6c760c*/
        }
        else if ( v82[584] || v82[583] ) /*0x6c7622*/
        {
          *(unsigned int *)&v265.bombVisible[4 * v80] = 528; /*0x6c7646*/
        }
        else if ( v82[501] ) /*0x6c762b*/
        {
          *(unsigned int *)&v265.bombVisible[4 * v80] = 512; /*0x6c7634*/
        }
        else
        {
          *(unsigned int *)&v265.bombVisible[4 * v80] = 256; /*0x6c763d*/
        }
      }
      else
      {
        *(unsigned int *)&v265.bombVisible[4 * v80] = 8; /*0x6c75f6*/
      }
      ++v80; /*0x6c7651*/
    }
    while ( v80 < v265.ptr_C ); /*0x6c7654*/
  }
  v83 = dword_B77788[0]; /*0x6c7656*/
  v84 = (char *)__2_YAPAXI_Z(0x10u); /*0x6c765e*/
  if ( v84 ) /*0x6c766a*/
    v85 = NetMessage::Pack4(v84, aTime, v83); /*0x6c7674*/
  else
    v85 = 0; /*0x6c767b*/
  LinkedList::PushFront(&v263, (int)v85); /*0x6c7682*/
  if ( dword_B0BD48 / 60 ) /*0x6c769e*/
  {
    v86 = *(unsigned int *)&stru_A8E960.random[528] / (unsigned int)(dword_B0BD48 / 60); /*0x6c76af*/
    v87 = (char *)__2_YAPAXI_Z(0x10u); /*0x6c76b1*/
    if ( v87 ) /*0x6c76bb*/
    {
      v88 = TerrainInitMap(v87, aAfps, v86); /*0x6c76c5*/
      goto LABEL_134; /*0x6c76ca*/
    }
  }
  else
  {
    v89 = (char *)__2_YAPAXI_Z(0x10u); /*0x6c76ce*/
    if ( v89 ) /*0x6c76d8*/
    {
      v88 = NetMessage::Pack4(v89, aAfps, 0); /*0x6c76e2*/
      goto LABEL_134; /*0x6c76e7*/
    }
  }
  v88 = 0; /*0x6c76e9*/
LABEL_134:
  LinkedList::PushFront(&v263, (int)v88); /*0x6c76eb*/
  v90 = stru_A8E960.altNextScenario[252]; /*0x6c76f5*/
  v91 = (char *)__2_YAPAXI_Z(0x10u); /*0x6c76fd*/
  if ( v91 ) /*0x6c7707*/
    v92 = TerrainInitMap(v91, aSped, v90); /*0x6c7711*/
  else
    v92 = 0; /*0x6c7718*/
  LinkedList::PushFront(&v263, (int)v92); /*0x6c771f*/
  ModuleInternalVersion = GetModuleInternalVersion((ObjectClass *)&stru_A8E960.random[364]); /*0x6c7729*/
  wsprintfA((LPSTR)&v265.lineTrailer, off_842070, ModuleInternalVersion); /*0x6c773c*/
  v94 = (char *)__2_YAPAXI_Z(0x10u); /*0x6c7744*/
  if ( v94 ) /*0x6c774e*/
    v95 = BuildResultPacket(v94, aVers, (const char *)&v265.lineTrailer); /*0x6c775f*/
  else
    v95 = 0; /*0x6c7766*/
  LinkedList::PushFront(&v263, (int)v95); /*0x6c776d*/
  GetModuleFileNameA(g_hInstance, Filename, 0x118u); /*0x6c7786*/
  LOBYTE(v265.owningHouseIndex) = 0; /*0x6c779b*/
  v265.fallRate = 1; /*0x6c77a0*/
  v265.nextObject = 0; /*0x6c77a8*/
  v265.attachedTag = -1; /*0x6c77ac*/
  v265.attachedBomb = -1; /*0x6c77b0*/
  memset(v265.ambientSoundController, 0, 9); /*0x6c77b4*/
  /* X11: ptr_0 install elided (X67 recv-slot, RHS g_ptr_7F0904) */  /*0x6c77c7*/
  FileClass::SetName((BufferIOFileClass *)&v265.occupant, Filename); /*0x6c77cf*/
  FileClass::Open2((RawFileClass *)&v265.occupant, (const CHAR *)1); /*0x6c77da*/
  if ( v265.attachedBomb != -1 && GetFileTime((HANDLE)v265.attachedBomb, 0, 0, (LPFILETIME)&v265.referenceCount) ) /*0x6c77ef*/
  {
    v265.referenceCount = htonl(v265.referenceCount); /*0x6c7803*/
    v265.NeedsSaveOrLink = htonl(v265.NeedsSaveOrLink); /*0x6c7813*/
    v96 = (char *)__2_YAPAXI_Z(0x10u); /*0x6c7817*/
    if ( v96 ) /*0x6c7821*/
      v97 = NetMessage::Pack(v96, aDate, (char *)&v265.referenceCount, 8u); /*0x6c7830*/
    else
      v97 = 0; /*0x6c7837*/
    LinkedList::PushFront(&v263, (int)v97); /*0x6c783e*/
  }
  if ( dword_A8B244 != 1 ) /*0x6c784b*/
  {
    if ( dword_A8B244 == 2 ) /*0x6c786e*/
    {
      v100 = (char *)__2_YAPAXI_Z(0x10u); /*0x6c7872*/
      if ( v100 ) /*0x6c787c*/
      {
        v99 = TerrainInitMap(v100, g_INI_Key_BROK, 4); /*0x6c7887*/
        goto LABEL_156; /*0x6c788c*/
      }
    }
    else
    {
      if ( dword_A8B244 != 4 ) /*0x6c7891*/
        goto LABEL_157; /*0x6c7891*/
      v101 = (char *)__2_YAPAXI_Z(0x10u); /*0x6c7895*/
      if ( v101 ) /*0x6c789f*/
      {
        v99 = TerrainInitMap(v101, g_INI_Key_BROK, 1); /*0x6c78aa*/
        goto LABEL_156; /*0x6c78af*/
      }
    }
LABEL_155:
    v99 = 0; /*0x6c78b1*/
    goto LABEL_156; /*0x6c78b1*/
  }
  v98 = (char *)__2_YAPAXI_Z(0x10u); /*0x6c784f*/
  if ( !v98 ) /*0x6c7859*/
    goto LABEL_155; /*0x6c7859*/
  v99 = TerrainInitMap(v98, g_INI_Key_BROK, 2); /*0x6c7864*/
LABEL_156:
  LinkedList::PushFront(&v263, (int)v99); /*0x6c78b3*/
LABEL_157:
  if ( dword_A8B23C ) /*0x6c78c5*/
  {
    v102 = (*(int (**)(ObjectClass *))(dword_A8B23C->ptr_0 + 184))(dword_A8B23C); /*0x6c78cf*/
    v103 = (char *)__2_YAPAXI_Z(0x10u); /*0x6c78d3*/
    if ( v103 ) /*0x6c78dd*/
      v104 = TerrainInitMap(v103, aAcco, v102); /*0x6c78e7*/
    else
      v104 = 0; /*0x6c78ee*/
    LinkedList::PushFront(&v263, (int)v104); /*0x6c78f5*/
  }
  v105 = 0; /*0x6c78fe*/
  v265.uniqueId = 0; /*0x6c7902*/
  if ( v265.ptr_C ) /*0x6c7906*/
  {
    while ( 1 ) /*0x6c7912*/
    {
      v106 = v265.ambientSoundController[v105 + 3]; /*0x6c7912*/
      v107 = v105 + 48; /*0x6c7918*/
      v264 = v105 + 48; /*0x6c791d*/
      byte_841F43 = v105 + 48; /*0x6c7921*/
      v108 = (char *)__2_YAPAXI_Z(0x10u); /*0x6c7927*/
      if ( v108 ) /*0x6c7931*/
        v109 = BuildResultPacket(v108, aNam, (const char *)(v106 + 90100)); /*0x6c7941*/
      else
        v109 = 0; /*0x6c7948*/
      LinkedList::PushFront(&v263, (int)v109); /*0x6c794f*/
      v110 = *(unsigned int *)(v106 + 512); /*0x6c7954*/
      byte_841FF3 = v107; /*0x6c795a*/
      v111 = (char *)__2_YAPAXI_Z(0x10u); /*0x6c7962*/
      if ( v111 ) /*0x6c796c*/
        v112 = TerrainInitMap(v111, aIpa, v110); /*0x6c7976*/
      else
        v112 = 0; /*0x6c797d*/
      LinkedList::PushFront(&v263, (int)v112); /*0x6c7984*/
      v113 = *(unsigned int *)(v106 + 516); /*0x6c7989*/
      byte_841FFB = v107; /*0x6c798f*/
      v114 = (char *)__2_YAPAXI_Z(0x10u); /*0x6c7997*/
      if ( v114 ) /*0x6c79a1*/
        v115 = TerrainInitMap(v114, aCid, v113); /*0x6c79ab*/
      else
        v115 = 0; /*0x6c79b2*/
      LinkedList::PushFront(&v263, (int)v115); /*0x6c79b9*/
      byte_841F4B = v107; /*0x6c79be*/
      v116 = *(unsigned int *)(v106 + 488); /*0x6c79c4*/
      v117 = (char *)__2_YAPAXI_Z(0x10u); /*0x6c79cc*/
      if ( v117 ) /*0x6c79d6*/
        v118 = TerrainInitMap(v117, aSid, v116); /*0x6c79e0*/
      else
        v118 = 0; /*0x6c79e7*/
      LinkedList::PushFront(&v263, (int)v118); /*0x6c79ee*/
      byte_841F53 = v107; /*0x6c79f8*/
      LOBYTE(v119) = v265.uniqueId; /*0x6c79fe*/
      if ( *(unsigned int *)dword_B779C4 == 2 ) /*0x6c7a05*/
        v119 = *(unsigned int *)(v106 + 516); /*0x6c7a07*/
      v120 = (char *)__2_YAPAXI_Z(0x10u); /*0x6c7a0f*/
      if ( v120 ) /*0x6c7a19*/
        v121 = TerrainInitMap(v120, aTid, v119); /*0x6c7a23*/
      else
        v121 = 0; /*0x6c7a2a*/
      LinkedList::PushFront(&v263, (int)v121); /*0x6c7a31*/
      byte_841FEB = v107; /*0x6c7a36*/
      v122 = (char *)__2_YAPAXI_Z(0x10u); /*0x6c7a3e*/
      if ( v122 ) /*0x6c7a48*/
        v123 = TerrainInitMap(v122, aCmp, *(unsigned int *)&v265.bombVisible[4 * v265.uniqueId]); /*0x6c7a5d*/
      else
        v123 = 0; /*0x6c7a64*/
      LinkedList::PushFront(&v263, (int)v123); /*0x6c7a6b*/
      byte_842003 = v107; /*0x6c7a70*/
      v124 = *(unsigned char *)(v106 + 520); /*0x6c7a76*/
      LOBYTE(v265.nextArrayIndex) = 0; /*0x6c7a7e*/
      if ( v124 ) /*0x6c7a83*/
        LOBYTE(v265.nextArrayIndex) = *(unsigned char *)(v106 + 583) == 0; /*0x6c7a8f*/
      v125 = (char *)__2_YAPAXI_Z(0x10u); /*0x6c7a96*/
      if ( v125 ) /*0x6c7aa0*/
        v126 = String::AllocAndCopy(v125, aLcn, v265.nextArrayIndex); /*0x6c7aae*/
      else
        v126 = 0; /*0x6c7ab5*/
      LinkedList::PushFront(&v263, (int)v126); /*0x6c7abc*/
      byte_841F5B = v107; /*0x6c7ac1*/
      v127 = *(unsigned int *)(v106 + 90196); /*0x6c7ac7*/
      v128 = (char *)__2_YAPAXI_Z(0x10u); /*0x6c7acf*/
      if ( v128 ) /*0x6c7ad9*/
        v129 = TerrainInitMap(v128, aCol_0, v127); /*0x6c7ae3*/
      else
        v129 = 0; /*0x6c7aea*/
      LinkedList::PushFront(&v263, (int)v129); /*0x6c7af1*/
      byte_841F63 = v107; /*0x6c7af6*/
      v130 = *(unsigned int *)(*(unsigned int *)(v106 + 52) + 184); /*0x6c7b01*/
      v131 = (char *)__2_YAPAXI_Z(0x10u); /*0x6c7b07*/
      if ( v131 ) /*0x6c7b11*/
        v132 = TerrainInitMap(v131, aCty, v130); /*0x6c7b1b*/
      else
        v132 = 0; /*0x6c7b22*/
      LinkedList::PushFront(&v263, (int)v132); /*0x6c7b29*/
      byte_841F6B = v107; /*0x6c7b31*/
      v133 = (*(int (**)(int))(*(unsigned int *)(v106 + 36) + 24))(v106 + 36); /*0x6c7b3d*/
      v134 = (char *)__2_YAPAXI_Z(0x10u); /*0x6c7b41*/
      if ( v134 ) /*0x6c7b4b*/
        v135 = NetMessage::Pack4(v134, aCrd, v133); /*0x6c7b55*/
      else
        v135 = 0; /*0x6c7b5c*/
      LinkedList::PushFront(&v263, (int)v135); /*0x6c7b63*/
      byte_841F9B = v107; /*0x6c7b6e*/
      byte_841F93 = v107; /*0x6c7b74*/
      byte_841FA3 = v107; /*0x6c7b7a*/
      byte_841FAB = v107; /*0x6c7b80*/
      HouseClass::NetworkConvert((HouseClass *)(v106 + 2864)); /*0x6c7b86*/
      HouseClass::NetworkConvert((HouseClass *)(v106 + 4920)); /*0x6c7b91*/
      HouseClass::NetworkConvert((HouseClass *)(v106 + 808)); /*0x6c7b9c*/
      HouseClass::NetworkConvert((HouseClass *)(v106 + 6976)); /*0x6c7ba7*/
      v136 = *(unsigned int *)(v106 + 4912); /*0x6c7bac*/
      v137 = 0; /*0x6c7bb2*/
      for ( v265.ptr_0 = 0; v137 < v136; ++v137 ) /*0x6c7bba*/
      {
        if ( *((unsigned int *)__0Iostream_init_QAE_XZ_7((Iostream_init *)(v106 + 2864)) + v137) ) /*0x6c7bc7*/
          v265.ptr_0 = v137 + 1; /*0x6c7bd0*/
      }
      v138 = (char *)__0Iostream_init_QAE_XZ_7((Iostream_init *)(v106 + 2864)); /*0x6c7be4*/
      v139 = (char *)__2_YAPAXI_Z(0x10u); /*0x6c7be8*/
      if ( v139 ) /*0x6c7bf2*/
        v140 = NetMessage::Pack(v139, aInb, v138, 4 * LOWORD(v265.ptr_0)); /*0x6c7c08*/
      else
        v140 = 0; /*0x6c7c0f*/
      LinkedList::PushFront(&v263, (int)v140); /*0x6c7c16*/
      v141 = *(unsigned int *)(v106 + 6968); /*0x6c7c1b*/
      v142 = 0; /*0x6c7c21*/
      for ( v265.ptr_0 = 0; v142 < v141; ++v142 ) /*0x6c7c29*/
      {
        if ( *((unsigned int *)__0Iostream_init_QAE_XZ_7((Iostream_init *)(v106 + 4920)) + v142) ) /*0x6c7c36*/
          v265.ptr_0 = v142 + 1; /*0x6c7c3f*/
      }
      v143 = (char *)__0Iostream_init_QAE_XZ_7((Iostream_init *)(v106 + 4920)); /*0x6c7c53*/
      v144 = (char *)__2_YAPAXI_Z(0x10u); /*0x6c7c57*/
      if ( v144 ) /*0x6c7c61*/
        v145 = NetMessage::Pack(v144, aUnb, v143, 4 * LOWORD(v265.ptr_0)); /*0x6c7c77*/
      else
        v145 = 0; /*0x6c7c7e*/
      LinkedList::PushFront(&v263, (int)v145); /*0x6c7c85*/
      v146 = *(unsigned int *)(v106 + 2856); /*0x6c7c8a*/
      v147 = 0; /*0x6c7c90*/
      for ( v265.ptr_0 = 0; v147 < v146; ++v147 ) /*0x6c7c98*/
      {
        if ( *((unsigned int *)__0Iostream_init_QAE_XZ_7((Iostream_init *)(v106 + 808)) + v147) ) /*0x6c7ca5*/
          v265.ptr_0 = v147 + 1; /*0x6c7cae*/
      }
      v148 = (char *)__0Iostream_init_QAE_XZ_7((Iostream_init *)(v106 + 808)); /*0x6c7cc2*/
      v149 = (char *)__2_YAPAXI_Z(0x10u); /*0x6c7cc6*/
      if ( v149 ) /*0x6c7cd0*/
        v150 = NetMessage::Pack(v149, aPlb, v148, 4 * LOWORD(v265.ptr_0)); /*0x6c7ce6*/
      else
        v150 = 0; /*0x6c7ced*/
      LinkedList::PushFront(&v263, (int)v150); /*0x6c7cf4*/
      v151 = *(unsigned int *)(v106 + 9024); /*0x6c7cf9*/
      v152 = 0; /*0x6c7cff*/
      for ( v265.ptr_0 = 0; v152 < v151; ++v152 ) /*0x6c7d07*/
      {
        if ( *((unsigned int *)__0Iostream_init_QAE_XZ_7((Iostream_init *)(v106 + 6976)) + v152) ) /*0x6c7d14*/
          v265.ptr_0 = v152 + 1; /*0x6c7d1d*/
      }
      v153 = (char *)__0Iostream_init_QAE_XZ_7((Iostream_init *)(v106 + 6976)); /*0x6c7d31*/
      v154 = (char *)__2_YAPAXI_Z(0x10u); /*0x6c7d35*/
      if ( v154 ) /*0x6c7d3f*/
        v155 = NetMessage::Pack(v154, aBlb, v153, 4 * LOWORD(v265.ptr_0)); /*0x6c7d55*/
      else
        v155 = 0; /*0x6c7d5c*/
      LinkedList::PushFront(&v263, (int)v155); /*0x6c7d63*/
      Array::ByteSwap((Array *)(v106 + 2864)); /*0x6c7d70*/
      Array::ByteSwap((Array *)(v106 + 4920)); /*0x6c7d7d*/
      Array::ByteSwap((Array *)(v106 + 808)); /*0x6c7d88*/
      Array::ByteSwap((Array *)(v106 + 6976)); /*0x6c7d93*/
      Array::Zero((Array *)(v106 + 2864)); /*0x6c7d9a*/
      Array::Zero((Array *)(v106 + 808)); /*0x6c7da5*/
      Array::Zero((Array *)(v106 + 4920)); /*0x6c7dac*/
      Array::Zero((Array *)(v106 + 6976)); /*0x6c7db7*/
      for ( i = 0; i < dword_8B4118; ++i ) /*0x6c7dc5*/
      {
        v157 = *((unsigned int *)dword_8B410C + i); /*0x6c7dcc*/
        if ( v106 == *(unsigned int *)(v157 + 540) ) /*0x6c7dd5*/
          HouseClass::IncrementStat((HouseClass *)(v106 + 4920), *(unsigned int *)(*(unsigned int *)(v157 + 1732) + 3576)); /*0x6c7dea*/
      }
      for ( j = 0; j < dword_A83DF8; ++j ) /*0x6c7e02*/
      {
        v159 = (unsigned __int8 *)*((unsigned int *)dword_A83DEC + j); /*0x6c7e09*/
        if ( v106 == *((unsigned int *)v159 + 135) ) /*0x6c7e12*/
        {
          v160 = *((unsigned int *)v159 + 432); /*0x6c7e14*/
          if ( !*(unsigned char *)(v160 + 3777) ) /*0x6c7e1a*/
            HouseClass::IncrementStat((HouseClass *)(v106 + 2864), *(unsigned int *)(v160 + 3576)); /*0x6c7e31*/
        }
      }
      for ( k = 0; k < dword_A8E3A0; ++k ) /*0x6c7e49*/
      {
        v162 = *((unsigned int *)dword_A8E394 + k); /*0x6c7e51*/
        if ( v106 == *(unsigned int *)(v162 + 540) ) /*0x6c7e5a*/
          HouseClass::IncrementStat((HouseClass *)(v106 + 808), *(unsigned int *)(*(unsigned int *)(v162 + 1732) + 3576)); /*0x6c7e6f*/
      }
      v163 = *(unsigned int *)(v106 + 120); /*0x6c7e7e*/
      for ( m = 0; m < v163; ++m ) /*0x6c7e85*/
        HouseClass::IncrementStat( /*0x6c7ea0*/
          (HouseClass *)(v106 + 6976),
          *(unsigned int *)(*(unsigned int *)(*(unsigned int *)(*(unsigned int *)(v106 + 108) + 4 * m) + 1312) + 3576));
      HouseClass::NetworkConvert((HouseClass *)(v106 + 2864)); /*0x6c7eb2*/
      HouseClass::NetworkConvert((HouseClass *)(v106 + 4920)); /*0x6c7ebd*/
      HouseClass::NetworkConvert((HouseClass *)(v106 + 808)); /*0x6c7ec8*/
      HouseClass::NetworkConvert((HouseClass *)(v106 + 6976)); /*0x6c7ed3*/
      byte_841F7B = v107; /*0x6c7ed8*/
      byte_841F73 = v107; /*0x6c7ede*/
      byte_841F83 = v107; /*0x6c7ee4*/
      byte_841F8B = v107; /*0x6c7eea*/
      v165 = *(unsigned int *)(v106 + 4912); /*0x6c7ef0*/
      v166 = 0; /*0x6c7ef6*/
      for ( v265.ptr_0 = 0; v166 < v165; ++v166 ) /*0x6c7efe*/
      {
        if ( *((unsigned int *)__0Iostream_init_QAE_XZ_7((Iostream_init *)(v106 + 2864)) + v166) ) /*0x6c7f07*/
          v265.ptr_0 = v166 + 1; /*0x6c7f10*/
      }
      v167 = (char *)__0Iostream_init_QAE_XZ_7((Iostream_init *)(v106 + 2864)); /*0x6c7f20*/
      v168 = (char *)__2_YAPAXI_Z(0x10u); /*0x6c7f24*/
      if ( v168 ) /*0x6c7f2e*/
        v169 = NetMessage::Pack(v168, aInl, v167, 4 * LOWORD(v265.ptr_0)); /*0x6c7f44*/
      else
        v169 = 0; /*0x6c7f4b*/
      LinkedList::PushFront(&v263, (int)v169); /*0x6c7f52*/
      v170 = *(unsigned int *)(v106 + 6968); /*0x6c7f57*/
      v171 = 0; /*0x6c7f5d*/
      for ( n = 0; n < v170; ++n ) /*0x6c7f63*/
      {
        if ( *((unsigned int *)__0Iostream_init_QAE_XZ_7((Iostream_init *)(v106 + 4920)) + n) ) /*0x6c7f70*/
          v171 = n + 1; /*0x6c7f76*/
      }
      v173 = (char *)__0Iostream_init_QAE_XZ_7((Iostream_init *)(v106 + 4920)); /*0x6c7f89*/
      v174 = (char *)__2_YAPAXI_Z(0x10u); /*0x6c7f8d*/
      if ( v174 ) /*0x6c7f97*/
        v175 = NetMessage::Pack(v174, aUnl, v173, 4 * v171); /*0x6c7fa9*/
      else
        v175 = 0; /*0x6c7fb0*/
      LinkedList::PushFront(&v263, (int)v175); /*0x6c7fb7*/
      v176 = *(unsigned int *)(v106 + 2856); /*0x6c7fbc*/
      v177 = 0; /*0x6c7fc2*/
      for ( ii = 0; ii < v176; ++ii ) /*0x6c7fc8*/
      {
        if ( *((unsigned int *)__0Iostream_init_QAE_XZ_7((Iostream_init *)(v106 + 808)) + ii) ) /*0x6c7fd5*/
          v177 = ii + 1; /*0x6c7fdb*/
      }
      v179 = (char *)__0Iostream_init_QAE_XZ_7((Iostream_init *)(v106 + 808)); /*0x6c7fee*/
      v180 = (char *)__2_YAPAXI_Z(0x10u); /*0x6c7ff2*/
      if ( v180 ) /*0x6c7ffc*/
        v181 = NetMessage::Pack(v180, aPll, v179, 4 * v177); /*0x6c800e*/
      else
        v181 = 0; /*0x6c8015*/
      LinkedList::PushFront(&v263, (int)v181); /*0x6c801c*/
      v182 = *(unsigned int *)(v106 + 9024); /*0x6c8021*/
      v183 = 0; /*0x6c8027*/
      for ( jj = 0; jj < v182; ++jj ) /*0x6c802d*/
      {
        if ( *((unsigned int *)__0Iostream_init_QAE_XZ_7((Iostream_init *)(v106 + 6976)) + jj) ) /*0x6c803a*/
          v183 = jj + 1; /*0x6c8040*/
      }
      v185 = (char *)__0Iostream_init_QAE_XZ_7((Iostream_init *)(v106 + 6976)); /*0x6c8053*/
      v186 = (char *)__2_YAPAXI_Z(0x10u); /*0x6c8057*/
      if ( v186 ) /*0x6c8061*/
        v187 = NetMessage::Pack(v186, aBll, v185, 4 * v183); /*0x6c8073*/
      else
        v187 = 0; /*0x6c807a*/
      LinkedList::PushFront(&v263, (int)v187); /*0x6c8081*/
      HouseClass::NetworkConvert((HouseClass *)(v106 + 11088)); /*0x6c808e*/
      HouseClass::NetworkConvert((HouseClass *)(v106 + 13144)); /*0x6c8099*/
      HouseClass::NetworkConvert((HouseClass *)(v106 + 9032)); /*0x6c80a4*/
      HouseClass::NetworkConvert((HouseClass *)(v106 + 15200)); /*0x6c80af*/
      v188 = 0; /*0x6c80b8*/
      byte_841FBB = v264; /*0x6c80ba*/
      byte_841FB3 = v264; /*0x6c80bf*/
      byte_841FC3 = v264; /*0x6c80c4*/
      byte_841FCB = v264; /*0x6c80c9*/
      v189 = *(unsigned int *)(v106 + 13136); /*0x6c80ce*/
      v265.ptr_0 = 0; /*0x6c80d4*/
      if ( v189 > 0 ) /*0x6c80da*/
      {
        do /*0x6c80f3*/
        {
          if ( *((unsigned int *)__0Iostream_init_QAE_XZ_7((Iostream_init *)(v106 + 11088)) + v188) ) /*0x6c80e3*/
            v265.ptr_0 = v188 + 1; /*0x6c80ec*/
          ++v188; /*0x6c80f0*/
        }
        while ( v188 < v189 ); /*0x6c80f3*/
      }
      v190 = (char *)__0Iostream_init_QAE_XZ_7((Iostream_init *)(v106 + 11088)); /*0x6c80fc*/
      v191 = (char *)__2_YAPAXI_Z(0x10u); /*0x6c8100*/
      if ( v191 ) /*0x6c810a*/
        v192 = NetMessage::Pack(v191, aInk, v190, 4 * LOWORD(v265.ptr_0)); /*0x6c8120*/
      else
        v192 = 0; /*0x6c8127*/
      LinkedList::PushFront(&v263, (int)v192); /*0x6c812e*/
      v193 = *(unsigned int *)(v106 + 15192); /*0x6c8133*/
      v194 = 0; /*0x6c8139*/
      for ( kk = 0; kk < v193; ++kk ) /*0x6c813f*/
      {
        if ( *((unsigned int *)__0Iostream_init_QAE_XZ_7((Iostream_init *)(v106 + 13144)) + kk) ) /*0x6c814c*/
          v194 = kk + 1; /*0x6c8152*/
      }
      v196 = (char *)__0Iostream_init_QAE_XZ_7((Iostream_init *)(v106 + 13144)); /*0x6c8165*/
      v197 = (char *)__2_YAPAXI_Z(0x10u); /*0x6c8169*/
      if ( v197 ) /*0x6c8173*/
        v198 = NetMessage::Pack(v197, aUnk, v196, 4 * v194); /*0x6c8185*/
      else
        v198 = 0; /*0x6c818c*/
      LinkedList::PushFront(&v263, (int)v198); /*0x6c8193*/
      v199 = *(unsigned int *)(v106 + 11080); /*0x6c8198*/
      v200 = 0; /*0x6c819e*/
      for ( mm = 0; mm < v199; ++mm ) /*0x6c81a4*/
      {
        if ( *((unsigned int *)__0Iostream_init_QAE_XZ_7((Iostream_init *)(v106 + 9032)) + mm) ) /*0x6c81b1*/
          v200 = mm + 1; /*0x6c81b7*/
      }
      v202 = (char *)__0Iostream_init_QAE_XZ_7((Iostream_init *)(v106 + 9032)); /*0x6c81ca*/
      v203 = (char *)__2_YAPAXI_Z(0x10u); /*0x6c81ce*/
      if ( v203 ) /*0x6c81d8*/
        v204 = NetMessage::Pack(v203, aPlk, v202, 4 * v200); /*0x6c81ea*/
      else
        v204 = 0; /*0x6c81f1*/
      LinkedList::PushFront(&v263, (int)v204); /*0x6c81f8*/
      v205 = *(unsigned int *)(v106 + 17248); /*0x6c81fd*/
      v206 = 0; /*0x6c8203*/
      for ( nn = 0; nn < v205; ++nn ) /*0x6c8209*/
      {
        if ( *((unsigned int *)__0Iostream_init_QAE_XZ_7((Iostream_init *)(v106 + 15200)) + nn) ) /*0x6c8216*/
          v206 = nn + 1; /*0x6c821c*/
      }
      v208 = (char *)__0Iostream_init_QAE_XZ_7((Iostream_init *)(v106 + 15200)); /*0x6c822f*/
      v209 = (char *)__2_YAPAXI_Z(0x10u); /*0x6c8233*/
      if ( v209 ) /*0x6c823d*/
        v210 = NetMessage::Pack(v209, aBlk, v208, 4 * v206); /*0x6c824f*/
      else
        v210 = 0; /*0x6c8256*/
      LinkedList::PushFront(&v263, (int)v210); /*0x6c825d*/
      byte_841FD3 = v264; /*0x6c826e*/
      HouseClass::NetworkConvert((HouseClass *)(v106 + 17256)); /*0x6c8274*/
      v211 = *(unsigned int *)(v106 + 19304); /*0x6c8279*/
      v212 = 0; /*0x6c827f*/
      for ( v265.ptr_0 = 0; v212 < v211; ++v212 ) /*0x6c8287*/
      {
        if ( *((unsigned int *)__0Iostream_init_QAE_XZ_7((Iostream_init *)(v106 + 17256)) + v212) ) /*0x6c8290*/
          v265.ptr_0 = v212 + 1; /*0x6c8299*/
      }
      v213 = (char *)__0Iostream_init_QAE_XZ_7((Iostream_init *)(v106 + 17256)); /*0x6c82a9*/
      v214 = (char *)__2_YAPAXI_Z(0x10u); /*0x6c82ad*/
      if ( v214 ) /*0x6c82b7*/
        v215 = NetMessage::Pack(v214, aBlc, v213, 4 * LOWORD(v265.ptr_0)); /*0x6c82cd*/
      else
        v215 = 0; /*0x6c82d4*/
      LinkedList::PushFront(&v263, (int)v215); /*0x6c82db*/
      byte_841FDB = v264; /*0x6c82ec*/
      HouseClass::NetworkConvert((HouseClass *)(v106 + 19312)); /*0x6c82f1*/
      v216 = *(unsigned int *)(v106 + 21360); /*0x6c82f6*/
      v217 = 0; /*0x6c82fc*/
      for ( v265.ptr_0 = 0; v217 < v216; ++v217 ) /*0x6c8304*/
      {
        if ( *((unsigned int *)__0Iostream_init_QAE_XZ_7((Iostream_init *)(v106 + 19312)) + v217) ) /*0x6c830d*/
          v265.ptr_0 = v217 + 1; /*0x6c8316*/
      }
      v218 = (char *)__0Iostream_init_QAE_XZ_7((Iostream_init *)(v106 + 19312)); /*0x6c8326*/
      v219 = (char *)__2_YAPAXI_Z(0x10u); /*0x6c832a*/
      if ( v219 ) /*0x6c8334*/
        v220 = NetMessage::Pack(v219, aCra, v218, 4 * LOWORD(v265.ptr_0)); /*0x6c834a*/
      else
        v220 = 0; /*0x6c8351*/
      LinkedList::PushFront(&v263, (int)v220); /*0x6c8358*/
      v221 = v264; /*0x6c835d*/
      byte_841FE3 = v264; /*0x6c8363*/
      v222 = *(unsigned int *)(v106 + 736); /*0x6c8369*/
      v223 = (char *)__2_YAPAXI_Z(0x10u); /*0x6c836f*/
      if ( v223 ) /*0x6c8379*/
        v224 = TerrainInitMap(v223, aHrv, v222); /*0x6c8383*/
      else
        v224 = 0; /*0x6c838a*/
      LinkedList::PushFront(&v263, (int)v224); /*0x6c8391*/
      byte_84200B = v221; /*0x6c8396*/
      abstractFlags = v265.abstractFlags; /*0x6c839c*/
      v226 = v265.uniqueId; /*0x6c83a0*/
      if ( v265.abstractFlags == v265.uniqueId ) /*0x6c83a6*/
      {
        v227 = byte_84E863; /*0x6c83a8*/
        v228 = (char *)__2_YAPAXI_Z(0x10u); /*0x6c83b1*/
        if ( v228 ) /*0x6c83bb*/
        {
          v229 = TerrainInitMap(v228, aCpt, v227); /*0x6c83c5*/
          goto LABEL_321; /*0x6c83ca*/
        }
      }
      else
      {
        v230 = (char *)__2_YAPAXI_Z(0x10u); /*0x6c83ce*/
        if ( v230 ) /*0x6c83d8*/
        {
          v229 = NetMessage::Pack4(v230, aCpt, -1); /*0x6c83e3*/
          goto LABEL_321; /*0x6c83e8*/
        }
      }
      v229 = 0; /*0x6c83ea*/
LABEL_321:
      LinkedList::PushFront(&v263, (int)v229); /*0x6c83ec*/
      byte_842013 = v221; /*0x6c83f8*/
      if ( abstractFlags == v226 ) /*0x6c83fe*/
      {
        v231 = Performance::MeasureTicks(v262); /*0x6c8405*/
        v232 = (char *)__2_YAPAXI_Z(0x10u); /*0x6c8409*/
        if ( v232 ) /*0x6c8413*/
        {
          v233 = NetMessage::Pack4(v232, aCps, v231); /*0x6c841d*/
          goto LABEL_327; /*0x6c8422*/
        }
      }
      else
      {
        v234 = (char *)__2_YAPAXI_Z(0x10u); /*0x6c8426*/
        if ( v234 ) /*0x6c8430*/
        {
          v233 = NetMessage::Pack4(v234, aCps, -1); /*0x6c843b*/
          goto LABEL_327; /*0x6c8440*/
        }
      }
      v233 = 0; /*0x6c8442*/
LABEL_327:
      LinkedList::PushFront(&v263, (int)v233); /*0x6c8444*/
      byte_84201B = v221; /*0x6c8450*/
      if ( abstractFlags == v226 ) /*0x6c8456*/
      {
        v265.parachute = 32; /*0x6c845f*/
        GlobalMemoryStatus((LPMEMORYSTATUS)&v265.parachute); /*0x6c846b*/
        v235 = v265.isAliveFlag[0]; /*0x6c8471*/
        v236 = (char *)__2_YAPAXI_Z(0x10u); /*0x6c847a*/
        if ( !v236 ) /*0x6c8484*/
          goto LABEL_332; /*0x6c8484*/
        v237 = NetMessage::Pack4(v236, aMem, v235); /*0x6c848e*/
      }
      else
      {
        v238 = (char *)__2_YAPAXI_Z(0x10u); /*0x6c8497*/
        if ( !v238 ) /*0x6c84a1*/
        {
LABEL_332:
          v237 = 0; /*0x6c84b3*/
          goto LABEL_333; /*0x6c84b3*/
        }
        v237 = NetMessage::Pack4(v238, aMem, -1); /*0x6c84ac*/
      }
LABEL_333:
      LinkedList::PushFront(&v263, (int)v237); /*0x6c84b5*/
      byte_842023 = v221; /*0x6c84c1*/
      if ( abstractFlags == v226 && g_lpDirectDraw7 ) /*0x6c84d0*/
      {
        v266[0] = 316; /*0x6c84d9*/
        if ( g_lpDirectDraw7->lpVtbl->GetCaps(g_lpDirectDraw7, (LPDDCAPS)v266, 0) ) /*0x6c84ea*/
          goto LABEL_342; /*0x6c84ef*/
        v239 = (char *)__2_YAPAXI_Z(0x10u); /*0x6c8506*/
        if ( !v239 ) /*0x6c8510*/
        {
LABEL_340:
          v240 = 0; /*0x6c853f*/
          goto LABEL_341; /*0x6c853f*/
        }
        v240 = NetMessage::Pack4(v239, aVid, 0); /*0x6c851a*/
      }
      else
      {
        v241 = (char *)__2_YAPAXI_Z(0x10u); /*0x6c8523*/
        if ( !v241 ) /*0x6c852d*/
          goto LABEL_340; /*0x6c852d*/
        v240 = NetMessage::Pack4(v241, aVid, -1); /*0x6c8538*/
      }
LABEL_341:
      LinkedList::PushFront(&v263, (int)v240); /*0x6c8541*/
LABEL_342:
      v265.uniqueId = v226 + 1; /*0x6c854b*/
      if ( (unsigned int)(v226 + 1) >= v265.ptr_C ) /*0x6c8556*/
        break; /*0x6c8556*/
      v105 = v265.uniqueId; /*0x6c790e*/
    }
  }
  v242 = Event_Process_625C00((int)&v263, dword_B0BD90); /*0x6c855c*/
  v265.ptr_0 = (int)v242; /*0x6c8573*/
  if ( g_UIPointerTable ) /*0x6c8577*/
  {
    v243 = *(unsigned int *)g_UIPointerTable; /*0x6c8585*/
    if ( HIBYTE(v265.ptr_8) ) /*0x6c8589*/
      (*(void (**)(LPVOID, char *, int, u_short *, size_t))(v243 + 12))( /*0x6c8597*/
        g_UIPointerTable,
        &byte_B77CE8,
        dword_B75F5C,
        v242,
        dword_B0BD90[0]);
    else
      (*(void (**)(LPVOID, char *, int, u_short *, size_t))(v243 + 12))( /*0x6c85a6*/
        g_UIPointerTable,
        byte_B77930,
        dword_B76184,
        v242,
        dword_B0BD90[0]);
  }
  if ( (int)dword_B0BD90[0] <= 0x8000 && v242 && (int)dword_B0BD90[0] >= 1 ) /*0x6c85c6*/
  {
    v268[1] = dword_B0BD90[0]; /*0x6c85cc*/
    v244 = dword_B0BD90[0]; /*0x6c85d3*/
    v268[0] = 0; /*0x6c85dc*/
    v245 = dword_B0BD90[0] >> 2; /*0x6c85e7*/
    memcpy(&v268[2], v242, 4 * (dword_B0BD90[0] >> 2)); /*0x6c85ea*/
    v247 = &v242[2 * v245]; /*0x6c85ea*/
    v246 = &v268[v245 + 2]; /*0x6c85ea*/
    (v245) = ((v245) & ~0xFF) | ((v244) & 0xFF); /*0x6c85ec*/
    v248 = dword_B0BD54; /*0x6c85ee*/
    memcpy(v246, v247, v245 & 3); /*0x6c85f6*/
    v249 = g_SidebarButtonState.ptr_0; /*0x6c85f8*/
    v265.abstractFlags = g_SidebarButtonState.ptr_0; /*0x6c8600*/
    if ( g_SidebarButtonState.ptr_0 < v248 ) /*0x6c8604*/
    {
      v255 = dword_B0BD58; /*0x6c875d*/
    }
    else
    {
      v250 = 2 * g_SidebarButtonState.ptr_0; /*0x6c860a*/
      if ( 2 * g_SidebarButtonState.ptr_0 < 10 ) /*0x6c8610*/
        v250 = 10; /*0x6c8612*/
      v251 = (char *)__2_YAPAXI_Z(32776 * v250); /*0x6c8629*/
      memset(v251, 0, 4 * ((unsigned int)(32776 * v250) >> 2)); /*0x6c8637*/
      v252 = dword_B0BD58; /*0x6c8640*/
      if ( dword_B0BD58 ) /*0x6c8648*/
      {
        v253 = 8 * LOBYTE(g_SidebarButtonState.ptr_0); /*0x6c865b*/
        v254 = (unsigned int)(32776 * g_SidebarButtonState.ptr_0) >> 2; /*0x6c865d*/
        memcpy(v251, dword_B0BD58, 4 * v254); /*0x6c8660*/
        memcpy(&v251[4 * v254], &v252[v254], v253 & 3); /*0x6c8667*/
        v252 = dword_B0BD58; /*0x6c8669*/
      }
      __3_YAXPAX_Z(v252); /*0x6c8670*/
      v249 = g_SidebarButtonState.ptr_0; /*0x6c8675*/
      v255 = v251; /*0x6c867e*/
      dword_B0BD58 = v251; /*0x6c8682*/
      dword_B0BD54 = v250; /*0x6c8688*/
      if ( g_SidebarButtonState.ptr_0 >= v250 ) /*0x6c868e*/
      {
        v256 = 2 * g_SidebarButtonState.ptr_0; /*0x6c8694*/
        if ( 2 * g_SidebarButtonState.ptr_0 < 10 ) /*0x6c869a*/
          v256 = 10; /*0x6c869c*/
        v257 = (char *)__2_YAPAXI_Z(32776 * v256); /*0x6c86b3*/
        memset(v257, 0, 4 * ((unsigned int)(32776 * v256) >> 2)); /*0x6c86c1*/
        v258 = dword_B0BD58; /*0x6c86ca*/
        if ( dword_B0BD58 ) /*0x6c86d2*/
        {
          v259 = 8 * LOBYTE(g_SidebarButtonState.ptr_0); /*0x6c86e5*/
          v260 = (unsigned int)(32776 * g_SidebarButtonState.ptr_0) >> 2; /*0x6c86e7*/
          memcpy(v257, dword_B0BD58, 4 * v260); /*0x6c86ea*/
          memcpy(&v257[4 * v260], &v258[v260], v259 & 3); /*0x6c86f1*/
          v258 = dword_B0BD58; /*0x6c86f3*/
        }
        __3_YAXPAX_Z(v258); /*0x6c86fa*/
        v249 = g_SidebarButtonState.ptr_0; /*0x6c86ff*/
        v255 = v257; /*0x6c8705*/
        dword_B0BD58 = v257; /*0x6c870a*/
        dword_B0BD54 = v256; /*0x6c8710*/
      }
      if ( v265.abstractFlags < v249 ) /*0x6c871c*/
      {
        memcpy( /*0x6c8747*/
          &v255[8194 * v265.abstractFlags + 8194],
          &v255[8194 * v265.abstractFlags],
          32776 * v249 - 32776 * v265.abstractFlags);
        v255 = dword_B0BD58; /*0x6c874c*/
        v249 = g_SidebarButtonState.ptr_0; /*0x6c8752*/
      }
    }
    v261 = &v255[8194 * v265.abstractFlags]; /*0x6c876e*/
    if ( v261 ) /*0x6c8773*/
    {
      memcpy(v261, v268, 0x8008u); /*0x6c8783*/
      v249 = g_SidebarButtonState.ptr_0; /*0x6c8785*/
    }
    v242 = (u_short *)v265.ptr_0; /*0x6c878b*/
    g_SidebarButtonState.ptr_0 = v249 + 1; /*0x6c8790*/
  }
  __3_YAXPAX_Z(v242); /*0x6c8797*/
  stru_A8E960.waypoints[2414] = 1; /*0x6c87a3*/
  RawFileClass::Dtor((BufferIOFileClass *)&v265.occupant); /*0x6c87aa*/
  ResultNode::CleanupList((ResultNode *)&v263); /*0x6c87b3*/

}
} // namespace gamemd

// 0x6C87F0
namespace gamemd {
int sub_6C87F0()
{

  dword_B0BD28 = TimerGetTicks(); /*0x6c87fc*/
  int v1; // [esp+4h] [ebp-4h]
  dword_B0BD2C = v1; /*0x6c8805*/
  byte_B0BDB4 = 1; /*0x6c880a*/
  return v1; /*0x6c8811*/
}
}
// 0x6C8FF0
namespace gamemd {
int DlgProcScoreScreen(HWND hWnd, UINT, WPARAM wParam, LPARAM)
{
  wchar_t *v14; // ecx
  wchar_t *v15; // esi
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

  int result; // eax
  result = BaseDialogProc(hWnd, a2, wParam, (unsigned int)a4); /*0x6c900c*/
  if ( !result ) /*0x6c9013*/
  {
    unsigned int *WindowLongA; // eax
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
    int v6 = 0; // ecx /*0x6c90b7*/
    int v7; // eax
    v7 = dword_A8B230[43].ptr_0; /*0x6c90b9*/
    if ( v7 ) /*0x6c90c1*/
    {
      if ( v7 == 1 ) /*0x6c90ce*/
      {
        v6 = dword_A8B230[381].abstractFlags; /*0x6c90d0*/
      }
      else if ( v7 == 2 ) /*0x6c90db*/
      {
        v6 = dword_A8B230[381].nextArrayIndex; /*0x6c90dd*/
      }
    }
    else
    {
      v6 = dword_A8B230[381].uniqueId; /*0x6c90c3*/
    }
    int v8 = v6 / 60; // esi /*0x6c90fc*/
    swprintf( /*0x6c9146*/
      lParam,
      (const size_t)a02d02d02d_0,
      (const wchar_t *const)(v6 / 60 / 60 / 60),
      v6 / 60 / 60 % 60,
      v6 / 60 % 60);
    HWND DlgItem; // eax
    DlgItem = GetDlgItem(hWnd, 1777); /*0x6c915a*/
    SendMessageA(DlgItem, 0x4B2u, 0, (LPARAM)lParam); /*0x6c9169*/
    int v10 = dword_A8B230->pauseTimer; // ecx /*0x6c9174*/
    if ( dword_A8B230[43].ptr_8 != -1 ) /*0x6c9187*/
    {
      unsigned int *v11; // edi
      v11 = &dword_A8B230[43].ptr_8; /*0x6c917a*/
      Formatb = (wchar_t *)*((unsigned int *)dword_A8B230 + 391); /*0x6c9180*/
      v10 = (int)Formatb + TimerGetTicks() - *v11; /*0x6c9199*/
    }
    int v12 = v10 / 60; // edi /*0x6c91b7*/
    swprintf( /*0x6c9209*/
      lParam,
      (const size_t)a02d02d02d_0,
      (const wchar_t *const)(v10 / 60 / 60 / 60),
      v10 / 60 / 60 % 60,
      v10 / 60 % 60);
    HWND v13; // eax
    v13 = GetDlgItem(hWnd, 1778); /*0x6c9217*/
    SendMessageA(v13, 0x4B2u, 0, (LPARAM)lParam); /*0x6c9226*/
    if ( v12 > v8 ) /*0x6c9233*/
    {
      v14 = &dword_A8B230->overParTitle; /*0x6c9243*/
      v15 = &dword_A8B230->overParMessage; /*0x6c9249*/
    }
    else
    {
      v14 = &dword_A8B230->underParTitle; /*0x6c9235*/
      v15 = &dword_A8B230->underParMessage; /*0x6c923b*/
    }
    wchar_t *String; // edi
    String = GetStringCSF(v14, 0, aDRa2mdpostStls, 138); /*0x6c926e*/
    wchar_t *v17; // esi
    v17 = GetStringCSF(v15, 0, aDRa2mdpostStls, 139); /*0x6c927b*/
    HWND v18; // eax
    v18 = GetDlgItem(hWnd, 1779); /*0x6c927d*/
    v33 = (LPARAM)String; /*0x6c927f*/
    v19 = (void (__stdcall *)(HWND, UINT, WPARAM, LPARAM))SendMessageA; /*0x6c9280*/
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
        v24 = *&dword_A8022C->ptr_0; /*0x6c92be*/
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
      v19 = (void (__stdcall *)(HWND, UINT, WPARAM, LPARAM))SendMessageA; /*0x6c9310*/
    }
    v29 = GetDlgItem(hWnd, 1835); /*0x6c931c*/
    PostMessageA(v29, 0x4D7u, 0, (LPARAM)hWnd); /*0x6c9327*/
    swprintf(lParam, (const size_t)&g_Str_Fmt_PctD, v22); /*0x6c9338*/
    v30 = GetDlgItem(hWnd, 1782); /*0x6c9346*/
    v19(v30, 0x4B2u, 0, (LPARAM)lParam); /*0x6c9355*/
    v31 = StringList::Find(&unk_A83D10, g_INI_Key_SCORE); /*0x6c9361*/
    ThemeClass::Play(&unk_A83D10, v31); /*0x6c936c*/
    return 0; /*0x6c9374*/
  }
  return result; /*0x6c905c*/
}
}
// 0x6CA1E0
namespace gamemd {
int E4Recv_6CA1E0::sub_6CA1E0(char * Source)
{

  wchar_t *pVal; // ebp
  int v4; // esi
  wchar_t *v5; // edi
  void *ptr_0; // ebx
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
  pVal = (wchar_t *)&this->ptr_4; /*0x6ca201*/
  while ( 1 ) /*0x6ca27e*/
  {
    while ( 1 ) /*0x6ca208*/
    {
      v13 = 0; /*0x6ca208*/
      v4 = 0; /*0x6ca20d*/
      v5 = pVal; /*0x6ca20f*/
      ptr_0 = v15->AbstractClass; /*0x6ca211*/
      *pVal = 0; /*0x6ca213*/
      while ( (*(int (**)(void *, wchar_t *, int))(*(unsigned int *)ptr_0 + 8))(ptr_0, &v14, 2) == 2 ) /*0x6ca22a*/
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
      pVal[v4] = 0; /*0x6ca257*/
      ++v7[11].location[1]; /*0x6ca260*/
      v8 = WideString::Trim(pVal); /*0x6ca26b*/
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

  if ( String2 && off_8421A8 ) /*0x6ca4b2*/
  {
    const wchar_t **v3; // edi
    v3 = (const wchar_t **)&off_8421A8; /*0x6ca4b4*/
    const wchar_t **v4; // esi
    v4 = (const wchar_t **)&off_8421A8; /*0x6ca4b9*/
    while ( _wcsicmp(*v3, String2) ) /*0x6ca4c9*/
    {
      const wchar_t *v5; // eax
      v5 = v4[2]; /*0x6ca4cb*/
      v4 += 2; /*0x6ca4ce*/
      v3 = v4; /*0x6ca4d3*/
      if ( !v5 ) /*0x6ca4d5*/
        return; /*0x6ca4d5*/
    }
    ((void (__fastcall *)(int, int))v3[1])(a2, a3); /*0x6ca4e5*/
  }
}
// 0x6CA4F0
namespace gamemd {  // G42.18 ns repair
wchar_t * sub_6CA4F0(unsigned int * a1)  // G42.33 b9 truth wchar_t* return
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
}  // G42.18 ns repair
// 0x6CA6A0
namespace gamemd {  // G42.18 ns repair
int sub_6CA6A0(const wchar_t * String1, int a2)  // G42.33 b9 truth const wchar_t*
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
}  // G42.18 ns repair
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

  unsigned int *result = a1; // eax /*0x6cfd7a*/
  int v4 = dword_B0CC24; // ecx /*0x6cfd82*/
  int v5; // esi
  v5 = *((unsigned int *)dword_B0FC68 + 2); /*0x6cfd8f*/
  int v6; // edi
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

  dword_B0CB54 = a1; /*0x6cfdb5*/
  int result; // eax
  result = *(unsigned int *)dword_B0FC6C - a1 * *((unsigned int *)dword_B0FC68 + 2); /*0x6cfdc9*/
  int v2; // ecx
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


  GadgetClass::Construct((ShpButtonClass *)this, aP1, aP5, aP3, aP4, 0, 0); /*0x6c6560*/
  Buffer::Init(&this->u32_24, 0, 0); /*0x6c656c*/
  this->M48 = 0; /*0x6c657e*/
  this->M52 = a4; /*0x6c6585*/
  /* X11: ptr_0 install elided (implicit via StaticButtonClass virtuals 0x6c6588) */
  StaticButtonClass::Draw(this, String, 0); /*0x6c658e*/
  if ( aP3 == -1 || aP4 == -1 ) /*0x6c659b*/
  {
    int Instance; // ebx
    Instance = TextRenderer::GetInstance(); /*0x6c65a8*/
    if ( aP3 == -1 ) /*0x6c65aa*/
      this->M20 = Text::MeasureWidth(this->M48, 0); /*0x6c65b9*/
    if ( aP4 == -1 ) /*0x6c65bf*/
      this->M24 = *(unsigned int *)(Instance + 28); /*0x6c65c4*/
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
  v0 = Math::Sin(dbl_B0BD08 - dbl_B0BD38); /*0x6c69a2*/
  int64_t result; // rax
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
  operator delete((void *)(dword_B0BD58)); /*0x6c6b70*/
}
} // namespace gamemd

// 0x6C8840
namespace gamemd {
void * E4Recv_6C8840::sub_6C8840(unsigned int * Block, char a2)  // G42.33 b9 hpp void* sync
{
  /* X11: ptr_0 install elided (X67 star-deref, RHS g_var_5878c0) */  /*0x6c8843*/
  ComPtr::Release((ComPtr *)Block); /*0x6c8849*/
  if ( (a2 & 1) != 0 ) /*0x6c8853*/
    operator delete((Block)); /*0x6c8856*/
  return Block; /*0x6c8860*/
}
} // namespace gamemd

// 0x6C8900
namespace gamemd {
char E4Recv_6C8900::sub_6C8900()
{


  void *ptr_0 = this->AbstractClass; // eax /*0x6c8904*/
  if ( (int)this->AbstractClass < (int)this->M4 ) /*0x6c890b*/
    return 0; /*0x6c890d*/
  int v4; // ebp
  v4 = 2 * (unsigned int)ptr_0; /*0x6c8913*/
  if ( 2 * (int)ptr_0 < 10 ) /*0x6c891b*/
    v4 = 10; /*0x6c891d*/
  void *v5; // edx
  v5 = __2_YAPAXI_Z(32776 * v4); /*0x6c8932*/
  memset(v5, 0, 4 * ((unsigned int)(32776 * v4) >> 2)); /*0x6c893d*/
  void *v7; // [esp+4h] [ebp-4h]
  v7 = v5; /*0x6c8947*/
  void *ptr_4 = this->M8; // esi /*0x6c894d*/
  if ( ptr_4 ) /*0x6c8952*/
    memcpy(v5, ptr_4, 32776 * (int)this->AbstractClass); /*0x6c8967*/
  __3_YAXPAX_Z(this->M8); /*0x6c8974*/
  this->M4 = (void *)v4; /*0x6c8980*/
  this->M8 = v7; /*0x6c8983*/
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
void * E4Recv_6C89B0::sub_6C89B0(size_t Size)
{


  this->AbstractClass = (void *)Size; /*0x6c89b8*/
  void *v3; // eax
  v3 = __2_YAPAXI_Z(Size); /*0x6c89ba*/
  this->M4 = v3; /*0x6c89c2*/
  this->M8 = v3; /*0x6c89c5*/
  return &this->AbstractClass; /*0x6c89ca*/

}
} // namespace gamemd

// 0x6C8B10
namespace gamemd {
int E4Recv_6C8B10::sub_6C8B10(int a2, int a3, short a4, short a5)
{


  unsigned short *pVal = this->M8; // edi /*0x6c8b19*/
  if ( &pVal->u32_6 > (char *)this->? + (unsigned int)this->AbstractClass ) /*0x6c8b28*/
    return 0; /*0x6c8b28*/
  unsigned short *v12; // [esp+10h] [ebp-10h]
  v12 = this->M8; /*0x6c8b2c*/
  this->M8 = pVal + 6; /*0x6c8b30*/
  if ( !pVal ) /*0x6c8b33*/
    return 0; /*0x6c8b35*/
  *pVal = a4; /*0x6c8b4f*/
  pVal[1] = a5; /*0x6c8b52*/
  pVal->ptr_4 = *(unsigned short *)(a3 + 8); /*0x6c8b5a*/
  pVal->u32_6 = *(unsigned short *)(a3 + 12); /*0x6c8b66*/
  pVal->ptr_3 = this->M8; /*0x6c8b70*/
  unsigned int *v8; // eax
  int v13; // [esp+18h] [ebp-8h] BYREF
  v8 = CellStruct::Copy((CellStruct *)a3, &v13); /*0x6c8b73*/
  int v9 = a2; // esi /*0x6c8b7a*/
  unsigned char *v14; // [esp+2Ch] [ebp+Ch]
  v14 = (unsigned char *)(*(int (**)(int, unsigned int, unsigned int))(*(unsigned int *)a2 + 92))(a2, *v8, v8->q004); /*0x6c8b92*/
  int v15; // [esp+30h] [ebp+10h]
  v15 = 0; /*0x6c8b9b*/
  if ( *(int *)(a3 + 12) > 0 ) /*0x6c8ba3*/
  {
    while ( 1 ) /*0x6c8bbb*/
    {
      unsigned int v10; // eax
      v10 = Map_Append(v14, (int)&g_SidebarButtonState.needsRedraw, *(unsigned int *)(a3 + 8)); /*0x6c8bbb*/
      char *v11; // edi
      v11 = (char *)this->M8; /*0x6c8bc0*/
      if ( &v11[v10] > (char *)this->M8 + (unsigned int)this->AbstractClass || (this->M8 = &v11[v10], !v11) ) /*0x6c8bd4*/
      {
        (*(void (**)(int))(*(unsigned int *)v9 + 96))(v9); /*0x6c8c16*/
        return 0; /*0x6c8c22*/
      }
      memcpy(v11, &g_SidebarButtonState.needsRedraw, v10); /*0x6c8be0*/
      ++v15; /*0x6c8bf4*/
      v14 += (*(int (**)(int))(*(unsigned int *)a2 + 116))(a2); /*0x6c8c06*/
      if ( v15 >= *(unsigned int *)(a3 + 12) ) /*0x6c8c0a*/
        break; /*0x6c8c0a*/
      v9 = a2; /*0x6c8c0c*/
    }
    pVal = v12; /*0x6c8c25*/
    v9 = a2; /*0x6c8c29*/
  }
  (*(void (**)(int))(*(unsigned int *)v9 + 96))(v9); /*0x6c8c31*/
  return (int)pVal; /*0x6c8b37*/

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
  v0 = Math::Sin(dbl_B0BED0 - dbl_B0BEF8); /*0x6c8d62*/
  int64_t result; // rax
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
void * E4Recv_6C8E70::__0Iostream_init_QAE_XZ_5()
{
  return this; /*0x6c8e72*/
}
} // namespace gamemd

// 0x6C8F10
namespace gamemd {
LRESULT sub_6C8F10(HWND hDlg, int nIDDlgItem, int a3)
{

  wchar_t Buffer[32]; // [esp+Ch] [ebp-40h] BYREF
  swprintf(Buffer, (const size_t)a02d02d02d_0, (const wchar_t *const)(a3 / 60 / 60), a3 / 60 % 60, a3 % 60); /*0x6c8f69*/
  HWND DlgItem; // eax
  DlgItem = GetDlgItem(hDlg, nIDDlgItem); /*0x6c8f73*/
  return SendMessageA(DlgItem, 0x4B2u, 0, (LPARAM)Buffer); /*0x6c8f8c*/
}
} // namespace gamemd

// 0x6C8FA0
namespace gamemd {
LRESULT sub_6C8FA0(CampaignScore * aP0, int nIDDlgItem, wchar_t * Format)
{

  wchar_t Buffer[32]; // [esp+8h] [ebp-40h] BYREF
  swprintf(Buffer, (const size_t)g_Str_Fmt_PctD, Format); /*0x6c8fb8*/
  HWND DlgItem; // eax
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
  v0 = Math::Sin(dbl_B0BF68 - dbl_B0BF80); /*0x6c94d2*/
  int64_t result; // rax
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
    v7 = *(float *)v3->ptr_0 + v5) + *&v3->ptr_0; /*0x6c970c*/
    v3 = &v3->ptr_4; /*0x6c970e*/
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

  int v1 = 0; // edx /*0x6c9820*/
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


  unsigned __int16 v4; // ax
  HIBYTE(v4) = a2; /*0x6c9946*/
  LOBYTE(v4) = a3; /*0x6c9950*/
  int result; // eax
  result = a4 | (v4 << 8); /*0x6c9957*/
  this->M8 = (void *)result; /*0x6c9959*/
  return result; /*0x6c995c*/

}
} // namespace gamemd

// 0x6C9960
namespace gamemd {
void E4Recv_6C9960::sub_6C9960(wchar_t * String)
{


  if ( this->M20 ) /*0x6c9964*/
  {
    __3_YAXPAX_Z((void *)this->abstractFlags); /*0x6c996c*/
    this->M20 = 0; /*0x6c9974*/
  }
  if ( String ) /*0x6c9981*/
  {
    int v3; // eax
    v3 = wcslen(String); /*0x6c9984*/
    wchar_t *v4; // eax
    v4 = (wchar_t *)__2_YAPAXI_Z(2 * v3 + 2); /*0x6c998e*/
    this->M20 = (int)v4; /*0x6c9996*/
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
void * E4Recv_6C9AC0::sub_6C9AC0()
{

  this->AbstractClass = 0; /*0x6c9ac4*/
  this->M4 = 0; /*0x6c9ac6*/
  this->M8 = 0; /*0x6c9ac9*/
  this->M12 = 0; /*0x6c9acc*/
  this->M16 = 0; /*0x6c9acf*/
  this->M20 = 0; /*0x6c9ad2*/
  this->q018 = 0; /*0x6c9ad5*/
  this->M28 = 0; /*0x6c9ad8*/
  this->q020 = 0; /*0x6c9adb*/
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
unsigned int E4Recv_6CA5A0::sub_6CA5A0(wchar_t * Source)  // static def (b9)  // static def (b9)  // static def (b9)  // static def (b9)  // static def (b9)  // static def (b9)  // static def (b9)  // static def (b9)  // static def (b9)  // static def (b9)  // static def (b9)  // static def (b9)  // static def (b9)  // static def (b9)  // static def (b9)  // static def (b9)  // static def (b9)  // static def (b9)  // static def (b9)  // static def (b9)  // static def (b9)  // static def (b9)  // static def (b9)  // static def (b9)  // static def (b9)  // static def (b9)  // static def (b9)  // static def (b9)  // static def (b9)  // static def (b9)  // static def (b9)  // static def (b9)  // static def (b9)  // static def (b9)  // static def (b9)  // static def (b9)  // static def (b9)  // static def (b9)  // static def (b9)  // static def (b9)  // static def (b9)  // static def (b9)
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

  wcsncpy(Destination, (const wchar_t *)this, 0xCu); /*0x6ca5af*/
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
int sub_6CA730(const wchar_t * Str, unsigned int * a2)  // G42.33 b12 truth const wchar_t*
{

  wchar_t *v4; // edi
  char v5; // al
  int v6; // esi
  wchar_t *v7; // edi
  unsigned __int8 v9; // [esp+Ch] [ebp-Ch]
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
  v0 = Math::Sin(dbl_B0BFE8 - dbl_B0C010); /*0x6cacf2*/
  int64_t result; // rax
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

  __asm /*0x6ce380*/
  {
    fld ds:dbl_7E1710
    fld ds:dbl_7E1708
  }
  _CIpow(a2, a1); /*0x6ce38c*/
  __asm { fadd st, st } /*0x6ce391*/
  __asm { fstp [esp+8+var_8] } /*; double*/
  double v2; // [esp+0h] [ebp-8h]
  Math::Sqrt(v2); /*0x6ce399*/
  __asm { fstp dbl_B0C0B0 } /*0x6ce39e*/
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
  v0 = Math::Sin(dbl_B0C090 - dbl_B0C0B8); /*0x6ce462*/
  int64_t result; // rax
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
int E4Recv_6CE570::sub_6CE570()  // G42.33 b12: truth int index
{

  int v2 = 0; // edi /*0x6ce575*/
  char **v3; // esi
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
  dword_B0C114 = (int)&g_ptr_7E3238; /*0x6cf087*/
  dword_B0C128 = 10; /*0x6cf091*/
  dword_B0C124 = 0; /*0x6cf09b*/
  sub_6CF8F0(&dword_B0C12C, 0, 0); /*0x6cf0a5*/
  dword_B0C12C = (int)&g_ptr_7E3238; /*0x6cf0b4*/
  dword_B0C13C = 0; /*0x6cf0be*/
  SwizzleManagerClass_Instance = (int)&g_ptr_7F4108; /*0x6cf0c8*/
  dword_B0C128 = 1000; /*0x6cf0d2*/
  dword_B0C140 = 1000; /*0x6cf0d7*/
  return atexit(SwizzleManagerClass::Register); /*0x6cf0e2*/
}
} // namespace gamemd

// 0x6CF8F0
namespace gamemd {
unsigned int * E4Recv_6CF8F0::sub_6CF8F0(int a2, unsigned int * a3)
{


  this->Items = 0; /*0x6cf8fd*/
  this->Capacity = a2; /*0x6cf900*/
  this->IsInitialized = 1; /*0x6cf903*/
  this->IsAllocated = 0; /*0x6cf907*/
  /* X11: ptr_0 install elided (implicit via VectorClass virtuals 0x6cf90a) */
  if ( !a2 ) /*0x6cf910*/
    return &this->ptr_0; /*0x6cf910*/
  if ( !a3 ) /*0x6cf918*/
  {
    unsigned int *v7; // eax
    v7 = (unsigned int *)__2_YAPAXI_Z(8 * a2); /*0x6cf942*/
    if ( v7 ) /*0x6cf94c*/
    {
      unsigned int *v8 = v7; // ecx /*0x6cf951*/
      if ( a2 - 1 >= 0 ) /*0x6cf955*/
      {
        int v9 = a2; // edx /*0x6cf957*/
        do /*0x6cf961*/
        {
          *v8 = 0; /*0x6cf958*/
          v8->ptr_2 = 0; /*0x6cf95a*/
          v8 += 2; /*0x6cf95d*/
          --v9; /*0x6cf960*/
        }
        while ( v9 ); /*0x6cf961*/
        this->Items = v7; /*0x6cf963*/
        this->IsAllocated = 1; /*0x6cf966*/
        return &this->ptr_0; /*0x6cf96f*/
      }
    }
    else
    {
      v7 = 0; /*0x6cf972*/
    }
    this->Items = v7; /*0x6cf974*/
    this->IsAllocated = 1; /*0x6cf977*/
    return &this->ptr_0; /*0x6cf97b*/
  }
  unsigned int *v4 = a3; // eax /*0x6cf91d*/
  if ( a2 - 1 >= 0 ) /*0x6cf921*/
  {
    int v5 = a2; // ecx /*0x6cf923*/
    do /*0x6cf92d*/
    {
      *v4 = 0; /*0x6cf924*/
      v4->ptr_2 = 0; /*0x6cf926*/
      v4 += 2; /*0x6cf929*/
      --v5; /*0x6cf92c*/
    }
    while ( v5 ); /*0x6cf92d*/
  }
  this->Items = a3; /*0x6cf92f*/
  return &this->ptr_0; /*0x6cf934*/

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
  v0 = Math::Sin(dbl_B0C1B0 - dbl_B0CB60); /*0x6cfa92*/
  int64_t result; // rax
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

  unsigned char *v0 = &stru_B0C1C0; // esi /*0x6cfba2*/
  int v1 = 25; // edi /*0x6cfba7*/
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

  if ( (byte_B0C1AC & 1) == 0 ) /*0x6cfbda*/
  {
    byte_B0C1AC |= 1u; /*0x6cfbe0*/
    int *v0 = &dword_B0CB20; // esi /*0x6cfbe6*/
    int v1 = 25; // edi /*0x6cfbeb*/
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
    return &stru_B0C1C0 + 8 * v1; /*0x6cfd56*/
}
} // namespace gamemd

// 0x6CFE10
namespace gamemd {
int E4Recv_6CFE10::sub_6CFE10()
{
  return (int)&this->ptr_0 - dword_B0CC20 + 1; /*0x6cfe19*/
}
} // namespace gamemd
