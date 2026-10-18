// G42.32 P: tree-universe marker -- e4 tree-owned decls suppressed
#define GAMEMD_TREE_UNIVERSE 1
// GENERATED supplied bodies (supply_missing_bodies.py) -- no-body
// no-file FAIL family; bodies are cache-verbatim transforms.
#include "core/utility_ext.hpp"
#include "core/vector.hpp"
#include "house/house.hpp"
#include "misc/audio.hpp"
#include "misc/misc_ext.hpp"
#include "misc/super_weapon.hpp"
#include "object/abstract.hpp"
#include "structure/building.hpp"
#include "team/team.hpp"
#include "ui/message_list.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/Network_e4.hpp"
#include "core/init_stubs.hpp"  // G42.32 S R3: TimerGetTicks (init_stubs carrier)
#include "e4/classes/Audio_e4.hpp"  // gB C2027 supply
#include "e4/classes/Event_e4.hpp"  // gB C2027 supply
#include "e4/classes/Object_e4.hpp"  // gB C2027 supply
#include "e4/classes/Timer_e4.hpp"  // gB C2027 supply
#include "e4/e4_globals_decls.hpp"  // gB globals supply
// ---- g57b5 W6: TU-local globals (csp_canon 驱动) ----
extern int vftable;  // 词表 (canon 无条目, int 兜底) L579
extern char aEvaInsufficien[];  // G57w8: raw IDA string-label vocab
// ---- g57b5 W6 end ----
struct Math { static int RoundToInt(double a1); };  // G57w8 raw fn_49 词表 (Math::RoundToInt)
struct Rules { static int GetProductionTimeMult(int p0); };  // x4:signals@0x5fb2e0
// ---- g57b5 W5: qualified-call free-form vocab ----
namespace gamemd {
int TeamClass_CreateOneOf(int p0);  // x4:signals@0x6f09c0
int ClearAndFree3(int p_this);  // x4:ida@0x50f830
int CellCoord_To_CellObj(int16_t* p0);  // x4:signals@0x5657a0
int HouseClass_CanTogglePower(HouseClass *p_this);  // x4:ida@0x508df0
int HouseClass_ClearLowPowerTargets(HouseClass *p_this);  // x4:ida@0x4fc6d0
int HouseClass_ToggleGapGeneratorReveal(HouseClass *p_this);  // x4:ida@0x508f60
int HouseClass_UpdatePower();  // x4:empty@0x508c30
int Random_Range(int p0, int p1);  // x4:signals@0x65c7e0
int TeamTypeVector_CopyConstruct(int* p0);  // x4:signals@0x50e830
int Timer_GetTicks(void);  // g57b5 W6: 0 参调用修正   // g57b5 W5: raw 词表 (纯变参兜底)
int AISelectTeamHouseClass(void*** p0, int p1, int p2);  // x4:signals@0x6f0ab0
} // namespace gamemd
// ---- g57b5 W5 end ----

// 0x42F490
namespace gamemd {
char BaseClass::AddRef(int a2)
{

  int m_8; // edi
  int v3; // esi
  unsigned __int16 *v4; // edx
  int v5; // eax
  unsigned __int16 *v6; // ecx
  char *v7; // edx

  m_8 = this->baseNodeCapacity; /*0x42f49b*/
  if ( m_8 == *(unsigned int *)(a2 + 8) ) /*0x42f4a0*/
  {
    v3 = 0; /*0x42f4a2*/
    if ( m_8 <= 0 ) /*0x42f4a6*/
      return 1; /*0x42f4e0*/
    v4 = *(unsigned __int16 **)(a2 + 4); /*0x42f4a8*/
    v5 = *&this->baseNodeCount; /*0x42f4ab*/
    v6 = v4 + 2; /*0x42f4ae*/
    v7 = (char *)v4 - v5; /*0x42f4b1*/
    while ( *(unsigned int *)v5 == *(unsigned int *)&v7[v5] && *(unsigned short *)(v5 + 4) == *v6 && *(unsigned short *)(v5 + 6) == v6[1] ) /*0x42f4cd*/
    {
      ++v3; /*0x42f4cf*/
      v6 += 8; /*0x42f4d0*/
      v5 += 16; /*0x42f4d3*/
      if ( v3 >= m_8 ) /*0x42f4d8*/
        return 1; /*0x42f4d8*/
    }
  }
  return 0; /*0x42f4da*/

}
} // namespace gamemd

// 0x42F3F0
namespace gamemd {
int BaseClass::Seek(int a2, int a3)
{

  int v3; // edx

  v3 = *&this->baseNodeCount + 16 * a3; /*0x42f3fa*/
  *(unsigned int *)a2 = *(unsigned int *)v3; /*0x42f402*/
  *(unsigned int *)(a2 + 4) = *(unsigned int *)(v3 + 4); /*0x42f407*/
  *(unsigned char *)(a2 + 8) = *(unsigned char *)(v3 + 8); /*0x42f40d*/
  *(unsigned int *)(a2 + 12) = *(unsigned int *)(v3 + 12); /*0x42f413*/
  return a2; /*0x42f416*/

}
} // namespace gamemd

// 0x431410
namespace gamemd {
int HouseClass::createStartingUnits(int a2)
{
  int result; // eax
  int v4; // esi
  void **v5; // edi

  result = this->grindersCount; /*0x431413*/
  if ( result ) /*0x431418*/
  {
    result = 3 * a2; /*0x431421*/
    v4 = 0; /*0x431424*/
    v5 = &this->ptr_0 + 3 * a2; /*0x431426*/
    do /*0x43143f*/
    {
      if ( *v5 ) /*0x43142a*/
        result = Network::SendBeaconDelete((Network *)this, a2, v4); /*0x431433*/
      ++v4; /*0x431438*/
      ++v5; /*0x431439*/
    }
    while ( v4 < 3 ); /*0x43143f*/
  }
  return result; /*0x431444*/
}
} // namespace gamemd

// 0x4F83C0
namespace gamemd {
int HouseClass::GetFactoryProducing(int a2)
{

  int v2; // esi
  unsigned int *v4; // eax
  HouseClass **v5; // ecx
  int Type; // eax

  v2 = 0; /*0x4f83ca*/
  if ( dword_A83E40 <= 0 ) /*0x4f83d1*/
    return 0; /*0x4f841f*/
  v4 = (unsigned int *)dword_A83E34; /*0x4f83d7*/
  while ( 1 ) /*0x4f83dc*/
  {
    v5 = (HouseClass **)v4[v2]; /*0x4f83dc*/
    if ( v5[27] == this ) /*0x4f83e2*/
      break; /*0x4f83e2*/
LABEL_7:
    if ( ++v2 >= dword_A83E40 ) /*0x4f8417*/
      return 0; /*0x4f8417*/
  }
  if ( !AbstractClass::GetType((AbstractClass *)v5) /*0x4f8407*/
    || (Type = AbstractClass::GetType(*((AbstractClass **)dword_A83E34 + v2)),
        (*(int (**)(int))(*(unsigned int *)Type + 132))(Type) != a2) )
  {
    v4 = (unsigned int *)dword_A83E34; /*0x4f8409*/
    goto LABEL_7; /*0x4f8409*/
  }
  return *((unsigned int *)dword_A83E34 + v2); /*0x4f8419*/

}
} // namespace gamemd

// 0x4F8440
namespace gamemd {
void HouseClass::Update_TogglePower(double a2)
{

  Object *v2; // ecx
  Object *v3; // esi
  int v4; // ecx
  int v5; // eax
  int v6; // ecx
  int v7; // edx
  int v8; // eax
  int v9; // ecx
  int v10; // edx
  unsigned int *v11; // eax
  int v12; // ecx
  unsigned int *v13; // eax
  int v14; // eax
  char v15; // al
  int v16; // edx
  int v17; // ecx
  int v18; // edi
  int v19; // eax
  char v20; // al
  int v21; // edx
  int v22; // ecx
  int v23; // edi
  int v24; // eax
  int v25; // ecx
  int v26; // eax
  int v27; // ecx
  int *v28; // eax
  int v29; // eax
  Object *v30; // eax
  int ClosestObjectCell; // eax
  unsigned int *v32; // edi
  int v33; // ebx
  char v34; // al
  int v35; // ebx
  int v36; // ecx
  unsigned int v37; // eax
  int v38; // edx
  int v39; // eax
  char v40; // al
  int i; // edi
  int v42; // ecx
  int v43; // edx
  void *v44; // eax
  int v45; // edx
  int Object_field_0x13C; // eax
  char *v47; // edi
  int v49; // eax
  char *ProductionTimeMult; // eax
  int v51; // edx
  int v52; // ecx
  int v53; // ebx
  int v54; // eax
  int v56; // eax
  char *v57; // eax
  signed int v58; // eax
  int v61; // eax
  wchar_t *StringCSF; // eax
  int v64; // eax
  char *v65; // eax
  int v66; // edi
  int v67; // edx
  int v68; // eax
  int v69; // edx
  int j; // ebx
  int v71; // edi
  int Status; // eax
  unsigned int *v73; // ebp
  int v74; // edi
  int v75; // edi
  int v76; // edi
  int v77; // edi
  int v78; // edi
  int v79; // edi
  int v80; // edi
  unsigned int *v81; // eax
  int k; // edi
  int v83; // edx
  int v84; // eax
  char v85; // al
  int updated; // eax
  char v87; // al
  int v88; // eax
  int v89; // eax
  int *p_HarvesterLoadRate; // edi
  int v91; // edx
  int v92; // ecx
  int v93; // eax
  int v94; // edi
  int v95; // ebx
  int *v96; // edi
  int v97; // edx
  int v98; // ecx
  int v99; // eax
  int v100; // edi
  int v101; // ebx
  unsigned int *v102; // eax
  int v103; // eax
  bool v104; // bl
  int v105; // eax
  int v106; // eax
  char v107; // al
  int v108; // ebp
  int m; // ebx
  unsigned int *v110; // edi
  int v111; // ecx
  int v112; // eax
  int v113; // ecx
  int v114; // [esp+10h] [ebp-6Ch]
  int v115; // [esp+18h] [ebp-64h]
  HouseClass *v116; // [esp+20h] [ebp-5Ch]
  signed int v117; // [esp+34h] [ebp-48h] BYREF
  int Ticks; // [esp+38h] [ebp-44h] BYREF
  int v119; // [esp+3Ch] [ebp-40h]
  int v120; // [esp+40h] [ebp-3Ch]
  TeamTypeVector v121; // [esp+44h] [ebp-38h] BYREF
  void *Block; // [esp+48h] [ebp-34h]
  char v123; // [esp+51h] [ebp-2Bh]
  int v124; // [esp+54h] [ebp-28h]
  void **v125[7]; // [esp+60h] [ebp-1Ch] BYREF

  v3 = v2; /*0x4f8446*/
  v4 = *(unsigned int *)&v2[1].Object_field_0x2[2]; /*0x4f844b*/
  v5 = *v3->vtable2.__pad_C; /*0x4f8451*/
  if ( v4 != -1 ) /*0x4f8460*/
  {
    if ( *(unsigned int *)&stru_A8E960.random[528] - v4 >= v5 ) /*0x4f8468*/
      goto LABEL_6; /*0x4f8468*/
    v5 -= *(unsigned int *)&stru_A8E960.random[528] - v4; /*0x4f846a*/
  }
  if ( v5 == 1 ) /*0x4f846f*/
  {
    v6 = v119; /*0x4f8471*/
    *(unsigned int *)&v3[1].Object_field_0x2[2] = *(unsigned int *)&stru_A8E960.random[528]; /*0x4f8477*/
    v3[1].Object_field_0x8 = v6; /*0x4f847d*/
    *v3->vtable2.__pad_C = 0; /*0x4f8483*/
    v3[33].__pad_B0[40] = 1; /*0x4f8489*/
  }
LABEL_6:
  v7 = *(unsigned int *)&v3[1].__pad_C[4]; /*0x4f8490*/
  v8 = *(unsigned int *)&v3[1].__pad_C[12]; /*0x4f8496*/
  if ( v7 != -1 ) /*0x4f849f*/
  {
    if ( *(unsigned int *)&stru_A8E960.random[528] - v7 >= v8 ) /*0x4f84ab*/
      goto LABEL_11; /*0x4f84ab*/
    v8 -= *(unsigned int *)&stru_A8E960.random[528] - v7; /*0x4f84ad*/
  }
  if ( v8 == 1 ) /*0x4f84b2*/
  {
    v9 = v119; /*0x4f84ba*/
    *(unsigned int *)&v3[1].__pad_C[4] = *(unsigned int *)&stru_A8E960.random[528]; /*0x4f84c0*/
    *(unsigned int *)&v3[1].__pad_C[8] = v9; /*0x4f84c6*/
    *(unsigned int *)&v3[1].__pad_C[12] = 0; /*0x4f84cc*/
    v3[33].__pad_B0[41] = 1; /*0x4f84d2*/
  }
LABEL_11:
  if ( v3[33].__pad_B0[40] ) /*0x4f84d9*/
  {
    HouseClass::UpdatePower(v116, a2); /*0x4f84e5*/
    v3[33].__pad_B0[41] = 1; /*0x4f84ea*/
  }
  if ( v3[33].__pad_B0[41] ) /*0x4f84f1*/
  {
    if ( !dword_A8B538[0] ) /*0x4f8501*/
      HouseClass::CanTogglePower((HouseClass *)v3); /*0x4f8505*/
    HouseClass::ToggleGapGeneratorReveal((HouseClass *)v3); /*0x4f850c*/
  }
  v10 = *(unsigned int *)&stru_A8E960.random[528] % 100; /*0x4f851c*/
  if ( !(*(unsigned int *)&stru_A8E960.random[528] % 100) && *(int *)&v3[32].__pad_140[212] > 0 ) /*0x4f8528*/
  {
    do /*0x4f8549*/
    {
      v11 = *(unsigned int **)&v3[32].__pad_140[200]; /*0x4f852a*/
      v12 = v11[2 * v10 + 1]; /*0x4f8530*/
      v13 = &v11[2 * v10 + 1]; /*0x4f8534*/
      if ( v12 > 1 ) /*0x4f853b*/
        *v13 = v12 - 1; /*0x4f853e*/
      ++v10; /*0x4f8546*/
    }
    while ( v10 < *(unsigned int *)&v3[32].__pad_140[212] ); /*0x4f8549*/
  }
  v14 = *v3->occupiablesCount.__pad_140; /*0x4f854b*/
  if ( v14 ) /*0x4f8553*/
  {
    v117 = 0; /*0x4f8559*/
    (*(void (**)(int, signed int *))(*(unsigned int *)v14 + 16))(v14, &v117); /*0x4f8561*/
  }
  v15 = v3->currentPlayer; /*0x4f856b*/
  if ( !*(unsigned int *)&dword_A8B238 ) /*0x4f8571*/
    v15 = v15 || v3->PlayerControl; /*0x4f8585*/
  if ( !v15 && (v3->autoBaseBuilding || *&v3->iqLevel2 >= *&dword_8871E0->Production_d) ) /*0x4f85a7*/
  {
    v3->autoBaseBuilding = 1; /*0x4f85a9*/
    v3->production = 1; /*0x4f85b0*/
    v3->autocreateAllowed = 1; /*0x4f85b7*/
  }
  if ( !v3->isWinner ) /*0x4f85cb*/
    goto LABEL_65; /*0x4f85cb*/
  v16 = *&v3->savourTimer; /*0x4f85d1*/
  v17 = *v3->vtable2.__pad_0; /*0x4f85d7*/
  if ( v16 != -1 ) /*0x4f85e0*/
  {
    if ( *(unsigned int *)&stru_A8E960.random[528] - v16 >= v17 ) /*0x4f85eb*/
      goto LABEL_38; /*0x4f85eb*/
    v17 -= *(unsigned int *)&stru_A8E960.random[528] - v16; /*0x4f85ed*/
  }
  if ( v17 ) /*0x4f85f1*/
    goto LABEL_65; /*0x4f85f1*/
LABEL_38:
  if ( *(unsigned int *)&dword_A8B238 || *&v3->u32_27C <= 0 ) /*0x4f8605*/
  {
    Ticks = Timer::GetTicks(); /*0x4f8614*/
    v120 = 120; /*0x4f8618*/
    while ( (unsigned __int8)Audio::IsPlaying() ) /*0x4f861c*/
    {
      v18 = v120; /*0x4f8629*/
      if ( Ticks != -1 ) /*0x4f8630*/
      {
        v19 = Timer::GetTicks() - Ticks; /*0x4f863b*/
        if ( v19 >= v18 ) /*0x4f8641*/
          break; /*0x4f8641*/
        v18 -= v19; /*0x4f8643*/
      }
      if ( !v18 ) /*0x4f8647*/
        break; /*0x4f8647*/
      Event::Dispatch(); /*0x4f8649*/
    }
    v3->isWinner = 0; /*0x4f8657*/
    if ( *(unsigned int *)&dword_A8B238 ) /*0x4f8666*/
    {
      if ( v3 != *(Object **)((char *)&stru_A83CD9.estimatedHealth + 3) ) /*0x4f8690*/
      {
        if ( (*(unsigned int *)&dword_A8B238 == 3 || *(unsigned int *)&dword_A8B238 == 4) /*0x4f86c0*/
          && dword_A8B23C
          && (*(unsigned __int8 (**)(ObjectClass *))(dword_A8B23C->ptr_0 + 4))(dword_A8B23C)
          && (*(unsigned __int8 (**)(ObjectClass *))(dword_A8B23C->ptr_0 + 8))(dword_A8B23C) )
        {
          v20 = v3->currentPlayer; /*0x4f86ce*/
          if ( !*(unsigned int *)&dword_A8B238 ) /*0x4f86d4*/
            v20 = v20 || v3->PlayerControl; /*0x4f86e8*/
          if ( v20 ) /*0x4f86ec*/
          {
            LOBYTE(stru_A83CD9.estimatedHealth) = 1; /*0x4f86ee*/
            goto LABEL_65; /*0x4f86f5*/
          }
        }
        goto LABEL_64; /*0x4f86ec*/
      }
    }
    else if ( !v3->currentPlayer ) /*0x4f8668*/
    {
      if ( v3->PlayerControl ) /*0x4f8672*/
      {
        LOBYTE(stru_A83CD9.estimatedHealth) = 1; /*0x4f867c*/
        goto LABEL_65; /*0x4f8683*/
      }
LABEL_64:
      stru_A8E960.random[348] = 1; /*0x4f86f7*/
      goto LABEL_65; /*0x4f86f7*/
    }
    LOBYTE(stru_A83CD9.estimatedHealth) = 1; /*0x4f8692*/
  }
LABEL_65:
  if ( !v3->isLoser ) /*0x4f8706*/
    goto LABEL_83; /*0x4f8706*/
  v21 = *&v3->savourTimer; /*0x4f870c*/
  v22 = *v3->vtable2.__pad_0; /*0x4f8712*/
  if ( v21 != -1 ) /*0x4f871b*/
  {
    if ( *(unsigned int *)&stru_A8E960.random[528] - v21 >= v22 ) /*0x4f8726*/
      goto LABEL_70; /*0x4f8726*/
    v22 -= *(unsigned int *)&stru_A8E960.random[528] - v21; /*0x4f8728*/
  }
  if ( v22 ) /*0x4f872c*/
    goto LABEL_83; /*0x4f872c*/
LABEL_70:
  Ticks = Timer::GetTicks(); /*0x4f8732*/
  v120 = 120; /*0x4f873f*/
  while ( (unsigned __int8)Audio::IsPlaying() ) /*0x4f8743*/
  {
    v23 = v120; /*0x4f8753*/
    if ( Ticks != -1 ) /*0x4f8759*/
    {
      v24 = Timer::GetTicks() - Ticks; /*0x4f8764*/
      if ( v24 >= v23 ) /*0x4f876a*/
        break; /*0x4f876a*/
      v23 -= v24; /*0x4f876c*/
    }
    if ( !v23 ) /*0x4f8770*/
      break; /*0x4f8770*/
    Event::Dispatch(); /*0x4f8772*/
  }
  if ( !*(unsigned int *)&dword_A8B238 ) /*0x4f8786*/
  {
    if ( !v3->currentPlayer ) /*0x4f8788*/
    {
      if ( v3->PlayerControl ) /*0x4f8792*/
      {
        stru_A8E960.random[348] = 1; /*0x4f879c*/
        goto LABEL_83; /*0x4f87a3*/
      }
      goto LABEL_82; /*0x4f879a*/
    }
LABEL_81:
    stru_A8E960.random[348] = 1; /*0x4f87b2*/
    goto LABEL_83; /*0x4f87b9*/
  }
  if ( v3 == *(Object **)((char *)&stru_A83CD9.estimatedHealth + 3) ) /*0x4f87b0*/
    goto LABEL_81; /*0x4f87b0*/
LABEL_82:
  LOBYTE(stru_A83CD9.estimatedHealth) = 1; /*0x4f87bb*/
LABEL_83:
  if ( !v3->isGameOver ) /*0x4f87ca*/
    goto LABEL_89; /*0x4f87ca*/
  v25 = *&v3->savourTimer; /*0x4f87cc*/
  v26 = *v3->vtable2.__pad_0; /*0x4f87d2*/
  if ( v25 == -1 ) /*0x4f87db*/
  {
LABEL_87:
    if ( v26 ) /*0x4f87ef*/
      goto LABEL_89; /*0x4f87ef*/
    goto LABEL_88; /*0x4f87ef*/
  }
  v27 = *(unsigned int *)&stru_A8E960.random[528] - v25; /*0x4f87e5*/
  if ( v27 < v26 ) /*0x4f87e9*/
  {
    v26 -= v27; /*0x4f87eb*/
    goto LABEL_87; /*0x4f87eb*/
  }
LABEL_88:
  v3->isGameOver = 0; /*0x4f87f1*/
  HouseClass::ClearLowPowerTargets((HouseClass *)v3); /*0x4f87fa*/
LABEL_89:
  *(unsigned int *)&v3[31].__pad_140[260] &= (*(unsigned int *)&v3[31].__pad_140[260] <= 0) - 1; /*0x4f87ff*/
  *(unsigned int *)&v3[31].__pad_140[264] &= (*(unsigned int *)&v3[31].__pad_140[264] <= 0) - 1; /*0x4f8825*/
  if ( *(unsigned int *)(*(int *)((char *)&stru_A83CD9.estimatedHealth + 3) + 48) == v3->relatedTagsCount
    && (*(unsigned int *)&dword_A8B238 == 3 || *(unsigned int *)&dword_A8B238 == 4)
    && dword_A8B23C
    && !(*(unsigned __int8 (**)(ObjectClass *))(dword_A8B23C->ptr_0 + 4))(dword_A8B23C) )
  {
    if ( (stru_A8E960.waypoints[170] & 1) == 0 ) /*0x4f8873*/
    {
      stru_A8E960.waypoints[170] |= 1u; /*0x4f8882*/
      *(unsigned int *)&stru_A8E960.waypoints[86] = Random::Range(&Randomizer_Global, 0, 1); /*0x4f888d*/
    }
    if ( !Random::Range(&Randomizer_Global, 0, 2) )
    {
      v28 = (int *)(*(unsigned int *)&stru_A8E960.waypoints[86]
                  ? (dword_87F8DC << 11) + dword_87F924 + 22580
                  : dword_87F924 + 4 * (dword_87F8E0 + ((dword_87F8E0 + dword_87F8DC) << 9)) - 30668);
      v29 = *v28; /*0x4f88e2*/
      if ( v29 ) /*0x4f88e6*/
      {
        if ( *(unsigned int *)(v29 + 304) != 1 || (*(unsigned char *)(v29 + 300) & 0x18) != 0 ) /*0x4f88f8*/
          Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, 2); /*0x4f8908*/
      }
    }
  }
  if ( (*(unsigned short *)&v3[31].__pad_140[320] != *(unsigned short *)&stru_A8E960.waypoints[6] /*0x4f893f*/
     || *(unsigned short *)&v3[31].__pad_140[322] != *(unsigned short *)&stru_A8E960.waypoints[8])
    && !(*(unsigned int *)&stru_A8E960.random[528] % 15) )
  {
    Ticks = 0; /*0x4f8956*/
    v119 = 0; /*0x4f895a*/
    v30 = (Object *)CellCoord::To_CellObj((CellCoord *)&dword_87F7E8, (__int16 *)&v3[31].__pad_140[320]); /*0x4f895e*/
    ClosestObjectCell = Object::FindClosestObjectCell(v30, &Ticks, 0, 0); /*0x4f8965*/
    v32 = (unsigned int *)ClosestObjectCell; /*0x4f896a*/
    if ( ClosestObjectCell ) /*0x4f896e*/
    {
      if ( (*(unsigned char *)(ClosestObjectCell + 20) & 4) != 0 ) /*0x4f897e*/
      {
        v33 = ClosestObjectCell; /*0x4f8986*/
        if ( *(unsigned int *)(ClosestObjectCell + 1444) ) /*0x4f8980*/
        {
          v34 = 1; /*0x4f898c*/
          goto LABEL_113; /*0x4f898e*/
        }
      }
      else
      {
        v33 = 0; /*0x4f8990*/
      }
      (*(void (**)(int, char *, int, int))(*(unsigned int *)ClosestObjectCell + 372))( /*0x4f899f*/
        ClosestObjectCell,
        &stru_A8E960.waypoints[102],
        1,
        1);
      v34 = 0; /*0x4f89a5*/
LABEL_113:
      if ( (!v33 || !v33->u32_5A4) && !v34 ) /*0x4f89b7*/
      {
        v35 = 0; /*0x4f89bf*/
        while ( !*((unsigned char *)v32 + 129) ) /*0x4f89b9*/
        {
          v36 = v35++; /*0x4f89c5*/
          if ( v36 >= 5 ) /*0x4f89cb*/
            break; /*0x4f89cb*/
          v37 = *v32; /*0x4f89d6*/
          v117 = v32[27]; /*0x4f89d9*/
          (*(void (**)(unsigned int *, signed int *, unsigned int, unsigned int, unsigned int, int, unsigned int, unsigned int))(v37 + 364))( /*0x4f89f0*/
            v32,
            &v117,
            0,
            *&dword_8871E0->u32_FA8,
            0,
            1,
            0,
            0);
        }
      }
    }
  }
  v38 = *(unsigned int *)&v3[33].__pad_EC[12]; /*0x4f8a00*/
  v39 = *(unsigned int *)&v3[33].__pad_EC[20]; /*0x4f8a06*/
  if ( v38 == -1 ) /*0x4f8a0f*/
    goto LABEL_122; /*0x4f8a0f*/
  if ( *(unsigned int *)&stru_A8E960.random[528] - v38 < v39 ) /*0x4f8a1b*/
  {
    v39 -= *(unsigned int *)&stru_A8E960.random[528] - v38; /*0x4f8a1d*/
LABEL_122:
    if ( v39 ) /*0x4f8a21*/
      goto LABEL_136; /*0x4f8a21*/
  }
  v40 = v3->currentPlayer; /*0x4f8a27*/
  if ( !*(unsigned int *)&dword_A8B238 ) /*0x4f8a34*/
    v40 = v40 || v3->PlayerControl; /*0x4f8a48*/
  if ( !v40 && !*(unsigned char *)(v3->relatedTagsCapacity + 422) ) /*0x4f8a55*/
  {
    AISelectTeamHouseClass(v125, (int)v3, 0); /*0x4f8a6a*/
    TeamTypeVector::CopyConstruct(&v121, v125); /*0x4f8a78*/
    v121 = (TeamTypeVector)&vt_TypeList_TeamTypeClass_const; /*0x4f8a86*/
    v125[0] = &vt_VectorClass_TeamTypeClass_const; /*0x4f8a8e*/
    VectorClass::ClearAndFree3((int)v125); /*0x4f8a92*/
    if ( v124 > 0 ) /*0x4f8a9d*/
    {
      for ( i = 0; i < v124; ++i ) /*0x4f8a9f*/
        TeamClass::CreateOneOf(*((unsigned int *)Block + i), (TeamClass *)v3); /*0x4f8aad*/
    }
    v42 = *(unsigned int *)(*&dword_8871E0->q115C + 4 * *&v3->u32_184); /*0x4f8ad2*/
    v43 = v119; /*0x4f8ad5*/
    *(unsigned int *)&v3[33].__pad_EC[12] = *(unsigned int *)&stru_A8E960.random[528]; /*0x4f8ad9*/
    v44 = Block; /*0x4f8adf*/
    *(unsigned int *)&v3[33].__pad_EC[16] = v43; /*0x4f8ae3*/
    *(unsigned int *)&v3[33].__pad_EC[20] = v42; /*0x4f8aeb*/
    v121 = (TeamTypeVector)&vt_VectorClass_TeamTypeClass_const; /*0x4f8af1*/
    if ( v44 && v123 ) /*0x4f8afd*/
      __3_YAXPAX_Z(v44); /*0x4f8b00*/
  }
LABEL_136:
  if ( *(Object **)((char *)&stru_A83CD9.estimatedHealth + 3) == v3 ) /*0x4f8b0e*/
  {
    if ( !*(unsigned int *)&v3[1].__pad_38[24] && byte_880999 ) /*0x4f8b23*/
      BuildingClass::TogglePower((BuildingClass *)&dword_87F7E8, 0); /*0x4f8b2b*/
    if ( *(Object **)((char *)&stru_A83CD9.estimatedHealth + 3) == v3 ) /*0x4f8b36*/
    {
      v45 = *(unsigned int *)&v3[33].__pad_EC[72]; /*0x4f8b3c*/
      Object_field_0x13C = v3[33].Object_field_0x13C; /*0x4f8b42*/
      v47 = &v3[33].__pad_EC[72]; /*0x4f8b48*/
      if ( v45 != -1 ) /*0x4f8b51*/
      {
        if ( *(unsigned int *)&stru_A8E960.random[528] - v45 >= Object_field_0x13C ) /*0x4f8b5d*/
        {
LABEL_145:
          if ( (*(int (**)(char *))(*&v3->vtable5 + 24))(&v3->vtable5) < 100 /*0x4f8b94*/
            && *(unsigned int *)&v3[31].__pad_140[220]
             + *(unsigned int *)&v3[31].__pad_140[224]
             + *(unsigned int *)&v3[31].__pad_140[228]
             + *(unsigned int *)&v3[31].__pad_140[232] > 0 )
          {
            VoxClass::FindAndPlay((VoxClass *)&stru_819030.Name[5], -1); /*0x4f8ba0*/
            HouseClass::updateFactoryQueue((HouseClass *)&dword_87F7E8); /*0x4f8baa*/
            _EAX = dword_8871E0; /*0x4f8baf*/
            __asm /*0x4f8bb4*/
            {
              fld qword ptr [eax+16A8h]
              fmul ds:dbl_7E27F8
            }
            LOWORD(v49) = Math::RoundToInt(a2); /*0x4f8bc0*/
            ProductionTimeMult = Rules::GetProductionTimeMult((Rules *)&stru_A8E960.altNextScenario[252], v49); /*0x4f8bcb*/
            *(unsigned int *)v47 = *(unsigned int *)&stru_A8E960.random[528]; /*0x4f8bd8*/
            *(unsigned int *)&v3[33].__pad_EC[76] = v119; /*0x4f8bde*/
            v3[33].Object_field_0x13C = (int)ProductionTimeMult; /*0x4f8be1*/
          }
LABEL_148:
          v51 = *(unsigned int *)v47; /*0x4f8be4*/
          v52 = v3[33].Object_field_0x13C; /*0x4f8be6*/
          if ( *(unsigned int *)v47 != -1 ) /*0x4f8bec*/
          {
            if ( *(unsigned int *)&stru_A8E960.random[528] - v51 >= v52 ) /*0x4f8bf7*/
              goto LABEL_152; /*0x4f8bf7*/
            v52 -= *(unsigned int *)&stru_A8E960.random[528] - v51; /*0x4f8bf9*/
          }
          if ( v52 ) /*0x4f8bfd*/
          {
LABEL_155:
            v58 = *(unsigned int *)&v3[31].__pad_140[264]; /*0x4f8c56*/
            v117 = *(unsigned int *)&v3[31].__pad_140[260]; /*0x4f8c64*/
            Ticks = v58; /*0x4f8c68*/
            if ( v117 >= v58 ) /*0x4f8c6c*/
              goto LABEL_165; /*0x4f8c6c*/
            if ( !v58 ) /*0x4f8c74*/
              goto LABEL_165; /*0x4f8c74*/
            if ( !v117 ) /*0x4f8c7c*/
              goto LABEL_161; /*0x4f8c7c*/
            __asm /*0x4f8c7e*/
            {
              fild [esp+5Ch+var_48]
              fidiv [esp+5Ch+var_44]
              fcomp ds:dbl_7E1718
              fnstsw ax
            }
            if ( (_AX & 0x100) != 0 ) /*0x4f8c91*/
            {
LABEL_161:
              if ( DynamicVector::GetOrGrow( /*0x4f8cfc*/
                     (DynamicVector *)&v3[32].__pad_140[16],
                     *(unsigned int *)(*(unsigned int *)dword_8871E0->IvanDamage + 3576)) > 0
                || DynamicVector::GetOrGrow(
                     (DynamicVector *)&v3[32].__pad_140[16],
                     *(unsigned int *)(*(unsigned int *)(dword_8871E0->IvanDamage + 4) + 3576)) > 0
                || DynamicVector::GetOrGrow(
                     (DynamicVector *)&v3[32].__pad_140[16],
                     *(unsigned int *)(*(unsigned int *)(dword_8871E0->IvanDamage + 8) + 3576)) > 0 )
              {
                if ( !*(unsigned int *)&stru_A8E960.waypoints[174] ) /*0x4f8d08*/
                {
                  VoxClass::FindAndPlay(&stru_82473C, -1); /*0x4f8d14*/
                  _EDX = dword_8871E0; /*0x4f8d19*/
                  __asm /*0x4f8d20*/
                  {
                    fld qword ptr [edx+14C0h]
                    fmul ds:dbl_7E27F8
                  }
                  LOWORD(v61) = Math::RoundToInt(a2); /*0x4f8d2c*/
                  v115 = v61; /*0x4f8d31*/
                  v114 = *(unsigned int *)&v3[134].__pad_90[4]; /*0x4f8d3d*/
                  StringCSF = GetStringCSF(aTxtLowPower, 0, g_Str_File_House_CPP, 2377); /*0x4f8d4f*/
                  MessageListClass::AddMessage(&unk_A8BC60, 0, 0, StringCSF, v114, 16454, v115, 0); /*0x4f8d5c*/
                  *(unsigned int *)&stru_A8E960.waypoints[174] = 1; /*0x4f8d61*/
                }
                _ECX = dword_8871E0; /*0x4f8d6b*/
                __asm /*0x4f8d71*/
                {
                  fld qword ptr [ecx+16A8h]
                  fmul ds:dbl_7E27F8
                }
                LOWORD(v64) = Math::RoundToInt(a2); /*0x4f8d7d*/
                v65 = Rules::GetProductionTimeMult((Rules *)&stru_A8E960.altNextScenario[252], v64); /*0x4f8d88*/
                *(unsigned int *)&v3[33].__pad_EC[48] = *(unsigned int *)&stru_A8E960.random[528]; /*0x4f8d99*/
                *(unsigned int *)&v3[33].__pad_EC[52] = v119; /*0x4f8da3*/
                *(unsigned int *)&v3[33].__pad_EC[56] = v65; /*0x4f8da6*/
              }
            }
            else
            {
LABEL_165:
              *(unsigned int *)&stru_A8E960.waypoints[174] = 0; /*0x4f8dab*/
            }
            goto LABEL_166; /*0x4f8da9*/
          }
LABEL_152:
          v53 = *(unsigned int *)&v3[1].__pad_38[56]; /*0x4f8bff*/
          Float4::Sum((int *)&v3[1].__pad_38[36]); /*0x4f8c0b*/
          LOWORD(v54) = Math::RoundToInt(a2); /*0x4f8c10*/
          if ( v53 - v54 < 30 && v53 > 50 ) /*0x4f8c21*/
          {
            _EAX = dword_8871E0; /*0x4f8c23*/
            __asm /*0x4f8c28*/
            {
              fld qword ptr [eax+16A8h]
              fmul ds:dbl_7E27F8
            }
            LOWORD(v56) = Math::RoundToInt(a2); /*0x4f8c34*/
            v57 = Rules::GetProductionTimeMult((Rules *)&stru_A8E960.altNextScenario[252], v56); /*0x4f8c3f*/
            *(unsigned int *)v47 = *(unsigned int *)&stru_A8E960.random[528]; /*0x4f8c4a*/
            *(unsigned int *)&v3[33].__pad_EC[76] = v119; /*0x4f8c50*/
            v3[33].Object_field_0x13C = (int)v57; /*0x4f8c53*/
          }
          goto LABEL_155; /*0x4f8c53*/
        }
        Object_field_0x13C -= *(unsigned int *)&stru_A8E960.random[528] - v45; /*0x4f8b5f*/
      }
      if ( Object_field_0x13C ) /*0x4f8b63*/
        goto LABEL_148; /*0x4f8b63*/
      goto LABEL_145; /*0x4f8b63*/
    }
  }
LABEL_166:
  v66 = *(unsigned int *)&v3[31].__pad_140[316]; /*0x4f8db1*/
  if ( v66 && (*(int (**)(unsigned int))(*(unsigned int *)v66 + 44))(*(unsigned int *)&v3[31].__pad_140[316]) == 1 ) /*0x4f8dc5*/
    (*(void (**)(int, int))(*(unsigned int *)v66 + 292))(v66, 2); /*0x4f8dcd*/
  v67 = *(unsigned int *)&v3[33].__pad_EC[24]; /*0x4f8dd3*/
  v68 = *(unsigned int *)&v3[33].__pad_EC[32]; /*0x4f8dd9*/
  if ( v67 != -1 ) /*0x4f8de2*/
  {
    if ( *(unsigned int *)&stru_A8E960.random[528] - v67 >= v68 ) /*0x4f8dee*/
    {
LABEL_174:
      v69 = v119; /*0x4f8e00*/
      *(unsigned int *)&v3[33].__pad_EC[24] = *(unsigned int *)&stru_A8E960.random[528]; /*0x4f8e0f*/
      *(unsigned int *)&v3[33].__pad_EC[28] = v69; /*0x4f8e15*/
      *(unsigned int *)&v3[33].__pad_EC[32] = 90; /*0x4f8e1b*/
      v3->unknownBool246 = 0; /*0x4f8e21*/
      goto LABEL_175; /*0x4f8e21*/
    }
    v68 -= *(unsigned int *)&stru_A8E960.random[528] - v67; /*0x4f8df0*/
  }
  if ( !v68 || v3->unknownBool246 ) /*0x4f8df6*/
    goto LABEL_174; /*0x4f8dfe*/
LABEL_175:
  for ( j = 0; j < *&v3->lastBuiltInfantryType; ++j ) /*0x4f8e32*/
  {
    v71 = *(unsigned int *)(*&v3->supersCount + 4 * j); /*0x4f8e3a*/
    if ( SuperWeapon::UpdateSuperWeaponReadyState(v71, v3 == *(Object **)((char *)&stru_A83CD9.estimatedHealth + 3)) /*0x4f8e59*/
      && v3 == *(Object **)((char *)&stru_A83CD9.estimatedHealth + 3) )
    {
      (*(void (**)(unsigned int))(**(unsigned int **)(v71 + 40) + 64))(*(unsigned int *)(v71 + 40)); /*0x4f8e60*/
      Status = HouseClass::GetStatus((HouseClass *)0x39, 0); /*0x4f8e6b*/
      Sidebar::ActivateTab(&dword_87F7E8.field_0, Status); /*0x4f8e76*/
    }
  }
  if ( *(unsigned int *)&dword_A8B238 /*0x4f8eaf*/
    && !v3->defeated
    && *(int *)&stru_A8E960.random[528] > 0
    && !*(unsigned char *)(v3->relatedTagsCapacity + 422) )
  {
    if ( stru_A8B250.__pad_0[18] ) /*0x4f8ec4*/
    {
      v73 = (unsigned int *)dword_8871E0->ReloadRate[0]; /*0x4f8ed2*/
      v74 = DynamicVector::GetOrGrow((DynamicVector *)&v3[32].__pad_EC[40], *(unsigned int *)(v73[1] + 3576)); /*0x4f8eec*/
      v75 = DynamicVector::GetOrGrow((DynamicVector *)&v3[32].__pad_EC[40], *(unsigned int *)(v73[2] + 3576)) + v74; /*0x4f8efc*/
      v76 = DynamicVector::GetOrGrow((DynamicVector *)&v3[32].__pad_EC[40], *(unsigned int *)(*v73 + 3576)) + v75; /*0x4f8f0f*/
      if ( *(int *)&v3[1].__pad_38[24] <= 0 && v76 <= 0 ) /*0x4f8f1d*/
      {
LABEL_191:
        HouseClass::ClearLowPowerTargets((HouseClass *)v3); /*0x4f8f79*/
        HouseClass::DefeatPlayer((HouseClass *)v3); /*0x4f8f82*/
      }
    }
    else
    {
      v77 = *(unsigned int *)&v3[1].__pad_38[24]; /*0x4f8f21*/
      v78 = VectorClass::GetCount((DynamicVectorClass *)&v3[32].__pad_140[36]) + v77; /*0x4f8f38*/
      v79 = VectorClass::GetCount((DynamicVectorClass *)&v3[32].__pad_140[56]) + v78; /*0x4f8f45*/
      v80 = VectorClass::GetCount((DynamicVectorClass *)&v3[32].__pad_140[76]) + v79; /*0x4f8f52*/
      v81 = *(unsigned int **)(dword_8871E0->V3Rocket[5] + 8); /*0x4f8f5a*/
      if ( v81 ) /*0x4f8f5f*/
        v80 += DynamicVector::GetOrGrow((DynamicVector *)&v3[32].__pad_140[16], v81[894]); /*0x4f8f73*/
      if ( !v80 ) /*0x4f8f77*/
        goto LABEL_191; /*0x4f8f77*/
    }
  }
  if ( !(*(unsigned int *)&stru_A8E960.random[528] % 8) ) /*0x4f8f99*/
  {
    for ( k = *&v3->buildingsCount - 1; k >= 0; --k ) /*0x4f8fa0*/
      TeamClass::Update_0( /*0x4f8fb6*/
        *(TeamClass **)(*&v3->conYardsCount + 4 * k),
        8,
        0,
        *(int *)&stru_A8E960.waypoints[6],
        0,
        0);
  }
  v83 = *(unsigned int *)&v3[32].__pad_140[244]; /*0x4f8fbe*/
  v84 = *(unsigned int *)&v3[32].__pad_140[252]; /*0x4f8fc4*/
  if ( v83 == -1 ) /*0x4f8fcd*/
  {
LABEL_198:
    if ( v84 ) /*0x4f8fdf*/
      goto LABEL_207; /*0x4f8fdf*/
    goto LABEL_199; /*0x4f8fdf*/
  }
  if ( *(unsigned int *)&stru_A8E960.random[528] - v83 < v84 ) /*0x4f8fd9*/
  {
    v84 -= *(unsigned int *)&stru_A8E960.random[528] - v83; /*0x4f8fdb*/
    goto LABEL_198; /*0x4f8fdb*/
  }
LABEL_199:
  v85 = v3->currentPlayer; /*0x4f8fe1*/
  if ( !*(unsigned int *)&dword_A8B238 ) /*0x4f8fee*/
    v85 = v85 || v3->PlayerControl; /*0x4f9002*/
  if ( !v85 && !*(unsigned char *)(v3->relatedTagsCapacity + 422) ) /*0x4f900b*/
  {
    updated = House::UpdateHouseAI((House *)v3); /*0x4f9017*/
    *(unsigned int *)&v3[32].__pad_140[244] = *(unsigned int *)&stru_A8E960.random[528]; /*0x4f9022*/
    *(unsigned int *)&v3[32].__pad_140[248] = v119; /*0x4f902c*/
    *(unsigned int *)&v3[32].__pad_140[252] = updated; /*0x4f9032*/
  }
LABEL_207:
  v87 = v3->currentPlayer; /*0x4f9038*/
  if ( !*(unsigned int *)&dword_A8B238 ) /*0x4f9045*/
    v87 = v87 || v3->PlayerControl; /*0x4f9059*/
  if ( !v87 && !*(unsigned char *)(v3->relatedTagsCapacity + 422) && !(*(unsigned int *)&stru_A8E960.random[528] % 8) ) /*0x4f9084*/
  {
    v88 = *&v3->HouseClass_field_1E4; /*0x4f908b*/
    if ( !v88 || !*(unsigned int *)&dword_A8B238 ) /*0x4f90a1*/
    {
      HouseClass::AutoBuild((HouseClass *)v3); /*0x4f924b*/
LABEL_252:
      HouseClass::AIUnitProduction((HouseClass *)v3); /*0x4f9250*/
      HouseClass::AIInfantryProduction((HouseClass *)v3); /*0x4f9259*/
      HouseClass::AIAircraftProduction((HouseClass *)v3); /*0x4f9260*/
      goto LABEL_253; /*0x4f9260*/
    }
    if ( v88 == 1 ) /*0x4f90aa*/
    {
      HouseClass::AutoBuild((HouseClass *)v3); /*0x4f90ae*/
      v89 = *(unsigned int *)&v3[32].__pad_140[268]; /*0x4f90b3*/
      if ( v89 == -1 /*0x4f90d4*/
        || !(*(int (**)(unsigned int, int, int, int, Object *))(**((unsigned int **)dword_A83C6C + v89) + 148))(
              *((unsigned int *)dword_A83C6C + v89),
              1,
              1,
              1,
              v3) )
      {
        goto LABEL_252; /*0x4f90dc*/
      }
    }
    else if ( v88 == 2 ) /*0x4f90ea*/
    {
      HouseClass::AIUnitProduction((HouseClass *)v3); /*0x4f90f2*/
      p_HarvesterLoadRate = &dword_8871E0->HarvesterLoadRate; /*0x4f9105*/
      v91 = 1 << SuperWeaponTypeClass::FindByName((SuperWeaponTypeClass *)(v3->relatedTagsCapacity + 152)); /*0x4f9117*/
      v92 = p_HarvesterLoadRate[4]; /*0x4f9119*/
      v93 = 0; /*0x4f911c*/
      if ( v92 <= 0 ) /*0x4f9120*/
        goto LABEL_234; /*0x4f9120*/
      v94 = p_HarvesterLoadRate[1]; /*0x4f9122*/
      v95 = v94; /*0x4f9125*/
      while ( (v91 & *(unsigned int *)(*(unsigned int *)v95 + 1740)) == 0 ) /*0x4f912f*/
      {
        ++v93; /*0x4f9131*/
        v95 += 4; /*0x4f9132*/
        if ( v93 >= v92 ) /*0x4f9137*/
          goto LABEL_234; /*0x4f9137*/
      }
      if ( !*(unsigned int *)(v94 + 4 * v93) ) /*0x4f913b*/
        goto LABEL_234; /*0x4f913b*/
      v96 = &dword_8871E0->HarvesterLoadRate; /*0x4f9147*/
      v97 = 1 << SuperWeaponTypeClass::FindByName((SuperWeaponTypeClass *)(v3->relatedTagsCapacity + 152)); /*0x4f9162*/
      v98 = v96[4]; /*0x4f9164*/
      v99 = 0; /*0x4f9167*/
      if ( v98 <= 0 ) /*0x4f916b*/
      {
LABEL_232:
        v102 = 0; /*0x4f9184*/
      }
      else
      {
        v100 = v96[1]; /*0x4f916d*/
        v101 = v100; /*0x4f9170*/
        while ( (v97 & *(unsigned int *)(*(unsigned int *)v101 + 1740)) == 0 ) /*0x4f917a*/
        {
          ++v99; /*0x4f917c*/
          v101 += 4; /*0x4f917d*/
          if ( v99 >= v98 ) /*0x4f9182*/
            goto LABEL_232; /*0x4f9182*/
        }
        v102 = *(unsigned int **)(v100 + 4 * v99); /*0x4f91c5*/
      }
      if ( *(unsigned int *)&v3[32].__pad_140[272] != v102[894] ) /*0x4f9194*/
      {
LABEL_234:
        HouseClass::AIInfantryProduction((HouseClass *)v3); /*0x4f9196*/
        HouseClass::AIAircraftProduction((HouseClass *)v3); /*0x4f919f*/
      }
      v103 = *(unsigned int *)&v3[32].__pad_140[272]; /*0x4f91a4*/
      v104 = v103 == -1 && *(unsigned int *)&v3[32].__pad_140[276] == -1 && *(unsigned int *)&v3[32].__pad_140[280] == -1; /*0x4f91c1*/
      if ( v103 != -1 /*0x4f91e2*/
        && !(*(int (**)(unsigned int, int, int, int, Object *))(**(unsigned int **)(*(int *)((char *)&stru_A83CD9.ptr_8
                                                                                          + 3)
                                                                                 + 4 * v103)
                                                                   + 148))(
              *(unsigned int *)(*(int *)((char *)&stru_A83CD9.ptr_8 + 3) + 4 * v103),
              1,
              1,
              1,
              v3) )
      {
        v104 = 1; /*0x4f91ec*/
      }
      v105 = *(unsigned int *)&v3[32].__pad_140[276]; /*0x4f91ee*/
      if ( v105 != -1 /*0x4f920a*/
        && !(*(int (**)(unsigned int, int, int, int, Object *))(**((unsigned int **)dword_A8E34C + v105) + 148))(
              *((unsigned int *)dword_A8E34C + v105),
              1,
              1,
              1,
              v3) )
      {
        v104 = 1; /*0x4f9214*/
      }
      v106 = *(unsigned int *)&v3[32].__pad_140[280]; /*0x4f9216*/
      if ( v106 != -1 /*0x4f923e*/
        && !(*(int (**)(unsigned int, int, int, int, Object *))(**((unsigned int **)dword_A8B21C + v106) + 148))(
              *((unsigned int *)dword_A8B21C + v106),
              1,
              1,
              1,
              v3)
        || v104 )
      {
        HouseClass::AutoBuild((HouseClass *)v3); /*0x4f9242*/
      }
    }
  }
LABEL_253:
  v107 = v3->recheckTechTree; /*0x4f9265*/
  if ( *(Object **)((char *)&stru_A83CD9.estimatedHealth + 3) == v3 ) /*0x4f9272*/
  {
    if ( !v107 ) /*0x4f9276*/
      goto LABEL_268; /*0x4f9276*/
    v3->recheckTechTree = 0; /*0x4f927c*/
    v108 = *&v3->bunkersCount; /*0x4f9283*/
    for ( m = 0; m < v108; ++m ) /*0x4f928a*/
    {
      v110 = *(unsigned int **)(*&v3->absorbersCount + 4 * m); /*0x4f928f*/
      if ( v110 /*0x4f92cc*/
        && *((unsigned char *)v110 + 144)
        && (int)v110[27] > 0
        && (*(int (**)(unsigned int *))(*v110 + 388))(v110) != 19
        && v110[45] != 19
        && *(int *)((char *)&stru_A83CD9.estimatedHealth + 3) == v110[135] )
      {
        (*(void (**)(unsigned int *))(*v110 + 1248))(v110); /*0x4f92d2*/
      }
    }
    HouseClass::UpdateAllProductionTabs((char *)&dword_87F7E8); /*0x4f92e2*/
  }
  else
  {
    if ( !v107 ) /*0x4f92eb*/
      goto LABEL_268; /*0x4f92eb*/
    v3->recheckTechTree = 0; /*0x4f92ed*/
  }
  SuperWeapon::UpdateSuperWeaponsOwnedHouseClass((SuperWeapon *)v3); /*0x4f92f6*/
  SuperWeapon::UpdateSuperWeaponsUnavailableHouseClass((SuperWeapon *)v3); /*0x4f92fd*/
LABEL_268:
  if ( !v3->repairing ) /*0x4f930a*/
    goto LABEL_274; /*0x4f930a*/
  v111 = *&v3->__pad_280; /*0x4f930c*/
  v112 = *&v3->u32_288; /*0x4f9312*/
  if ( v111 == -1 ) /*0x4f931b*/
  {
LABEL_272:
    if ( v112 ) /*0x4f932f*/
      goto LABEL_274; /*0x4f932f*/
    goto LABEL_273; /*0x4f932f*/
  }
  v113 = *(unsigned int *)&stru_A8E960.random[528] - v111; /*0x4f9325*/
  if ( v113 < v112 ) /*0x4f9329*/
  {
    v112 -= v113; /*0x4f932b*/
    goto LABEL_272; /*0x4f932b*/
  }
LABEL_273:
  v3->repairing = 0; /*0x4f9331*/
LABEL_274:
  if ( v3 == *(Object **)((char *)&stru_A83CD9.estimatedHealth + 3) ) /*0x4f933e*/
  {
    if ( v3->HouseClass_field_bool_24B ) /*0x4f9340*/
    {
      v3->HouseClass_field_bool_24B = 0; /*0x4f9353*/
      Radar::UpdateReveal(0, 0); /*0x4f935a*/
    }
  }

}
} // namespace gamemd
