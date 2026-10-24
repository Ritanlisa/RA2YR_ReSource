// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/CCFileClass_e4.hpp"

#include "e4/classes/E4Recv_5D0190_e4.hpp"
#include "e4/classes/E4Recv_5D0240_e4.hpp"
#include "e4/classes/E4Recv_5D25D0_e4.hpp"
#include "e4/classes/E4Recv_5D2650_e4.hpp"
#include "e4/classes/E4Recv_5D30C0_e4.hpp"
#include "e4/classes/E4Recv_5D4430_e4.hpp"
#include "e4/classes/E4Recv_5D4F20_e4.hpp"
#include "e4/classes/E4Recv_5D6D80_e4.hpp"
#include "e4/classes/E4Recv_5D7580_e4.hpp"
#include "e4/classes/E4Recv_5D7CD0_e4.hpp"
#include "e4/classes/E4Recv_5D7FF0_e4.hpp"
#include "e4/classes/E4Recv_5D8010_e4.hpp"
#include "e4/classes/E4Recv_5D8FB0_e4.hpp"
#include "e4/classes/E4Recv_5D8FC0_e4.hpp"
#include "e4/classes/E4Recv_5D9060_e4.hpp"
#include "e4/classes/E4Recv_5DAB80_e4.hpp"
#include "e4/classes/Audio_e4.hpp"
#include "e4/classes/Debug_e4.hpp"
#include "e4/classes/Dialog_e4.hpp"
#include "e4/classes/Event_e4.hpp"
#include "e4/classes/EventClass_e4.hpp"
#include "e4/classes/Game_e4.hpp"
#include "e4/classes/GameClass_e4.hpp"
#include "e4/classes/Math_e4.hpp"
#include "e4/classes/Network_e4.hpp"
#include "e4/classes/NetworkLobby_e4.hpp"
#include "e4/classes/Session_e4.hpp"
#include "e4/classes/String_e4.hpp"
#include "e4/classes/Timer_e4.hpp"
#include "e4/classes/Vector_e4.hpp"
#include "e4/classes/WideString_e4.hpp"
#include "e4/classes/CellStruct_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/Buffer_e4.hpp"
#include "e4/classes/CampaignClass_e4.hpp"
#include "e4/classes/DropListClass_e4.hpp"
#include "e4/classes/MapClass_e4.hpp"
#include "e4/classes/ObjectTypeClass_e4.hpp"
#include "e4/classes/ObjectClass_e4.hpp"
#include "e4/classes/HouseClass_e4.hpp"
#include "e4/classes/Stream_e4.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/TagClass_e4.hpp"
#include "e4/classes/WinModemClass_e4.hpp"
#include "e4/classes/ComPtr_e4.hpp"
#include "e4/classes/SkirmishDialog_e4.hpp"
#include "e4/classes/Process_e4.hpp"
#include "e4/classes/E4Recv_724200_e4.hpp"
#include "e4/classes/MultiplayerGameMode_e4.hpp"
#include "e4/classes/TextRenderer_e4.hpp"
#include "e4/classes/FileStraw_e4.hpp"
#include "e4/classes/GenericList_e4.hpp"
#include "e4/classes/MultiplayerConfig_e4.hpp"
#include "e4/classes/Text_e4.hpp"
#include "e4/classes/Movie_e4.hpp"
#include "e4/classes/Cell_e4.hpp"
#include "e4/classes/RandomMap_e4.hpp"
#include "e4/classes/ListBox_e4.hpp"
#include "e4/classes/INIClass_e4.hpp"
#include "e4/classes/DeleteAndZero_e4.hpp"
#include "e4/classes/BufferIOFileClass_e4.hpp"
#include "e4/classes/MessageListClass_e4.hpp"
#include "e4/classes/MouseClass_e4.hpp"
#include "e4/classes/NetworkID_e4.hpp"
#include "e4/classes/SessionClass_e4.hpp"
#include "e4/classes/GameOptions_e4.hpp"
#include "e4/classes/IsRandMap_e4.hpp"
#include "e4/classes/TacticalClass_e4.hpp"
#include "e4/classes/_w14_nocarrier_e4.hpp"
#include "e4/classes/GameSetup_e4.hpp"  // G57w10 D supply
#include "e4/classes/NetworkManager_e4.hpp"  // G57w10 r5 supply
// [w18j2] C2065 global supply (data addr evidence)
extern unsigned char byte_A8D60C;  // w18j2 data: 0xA8D60C
extern unsigned int dword_A8D5FC;  // w18j2 data: 0xA8D5FC
// [w18j2] C2065 function supply (raw-evidenced)
namespace gamemd { void nullsub_194(); }  // w18j2 raw 0x005DAF10
namespace gamemd { void nullsub_25(); }  // w18j2 raw 0x005DFDD0
namespace gamemd { void nullsub_26(); }  // w18j2 raw 0x005DFDE0
namespace gamemd { void nullsub_27(); }  // w18j2 raw 0x005DFDF0
// [w14e3] fn vocab supply (g57b5-W5 variadic convention); evidence: raw_decomp entries
namespace gamemd {
int HandleToolTipMessage(int p0);  // x4:signals@0x724200
} // namespace gamemd
// ==== G42.57w9 data-label supply (IDA truth; e4_globals pending) ====
extern char aBattle[7];  // data: 0x830c00 truth(IDA G42.57w9)
extern char aCooperative[12];  // data: 0x830bcc truth(IDA G42.57w9)
extern char aFreeforall[11];  // data: 0x830bd8 truth(IDA G42.57w9)
extern char aManbattle[10];  // data: 0x830bf4 truth(IDA G42.57w9)
extern char aSiege[6];  // data: 0x830bec truth(IDA G42.57w9)
extern char aUnholy[7];  // data: 0x830be4 truth(IDA G42.57w9)
extern unsigned int aDRa2mdpostNetd;  // data: 0x831214 truth(IDA G42.57w9)


// 0x5D0190
namespace gamemd {  // G42.18 ns repair
int E4Recv_5D0190::sub_5D0190(const char * a2)
{

  int v3; // esi
  int v5; // esi
  char *v6; // [esp+8h] [ebp-4h] BYREF

  String::Assign((String *)&v6, a2); /*0x5d019e*/
  String::ToLower((String *)&v6); /*0x5d01a7*/
  v3 = 0; /*0x5d01af*/
  if ( this->customSound <= 0 ) /*0x5d01b3*/
  {
LABEL_6:
    j_DeleteAndZero((ObjectClass *)&v6); /*0x5d0202*/
    return 0; /*0x5d0210*/
  }
  while ( !(unsigned __int8)String::NotEquals(*(String **)(this->customSound_controller[2] + 4 * v3), 0) ) /*0x5d01c4*/
  {
LABEL_5:
    if ( ++v3 >= this->customSound ) /*0x5d0200*/
      goto LABEL_6; /*0x5d0200*/
  }
  ((String *)&a2)->AssignFromPtr(*(const char ***)(this->customSound_controller[2] + 4 * v3)); /*0x5d01d1*/
  String::ToLower((String *)&a2); /*0x5d01da*/
  if ( !(unsigned __int8)String::Compare((String *)&v6, &a2) ) /*0x5d01e8*/
  {
    j_DeleteAndZero((ObjectClass *)&a2); /*0x5d01f5*/
    goto LABEL_5; /*0x5d01f5*/
  }
  v5 = *(unsigned int *)(this->customSound_controller[2] + 4 * v3); /*0x5d021a*/
  j_DeleteAndZero((ObjectClass *)&a2); /*0x5d021d*/
  j_DeleteAndZero((ObjectClass *)&v6); /*0x5d0226*/
  return v5; /*0x5d020b*/

}
}  // G42.18 ns repair
// 0x5D0240
namespace gamemd {
char ** E4Recv_5D0240::sub_5D0240(char ** a2, char a3)
{

  int customSound; // esi
  int v4; // eax
  int v5; // edi
  int v6; // ecx

  customSound = this->customSound; /*0x5d0242*/
  v4 = 0; /*0x5d0245*/
  if ( customSound <= 0 ) /*0x5d024a*/
  {
LABEL_5:
    String::Assign((String *)a2, 0); /*0x5d0264*/
    return a2; /*0x5d0271*/
  }
  else
  {
    v5 = this->customSound_controller[2]; /*0x5d024c*/
    v6 = v5; /*0x5d0253*/
    while ( a3 != *(unsigned char *)(*(unsigned int *)v6 + 4) ) /*0x5d025a*/
    {
      ++v4; /*0x5d025c*/
      v6 += 4; /*0x5d025d*/
      if ( v4 >= customSound ) /*0x5d0262*/
        goto LABEL_5; /*0x5d0262*/
    }
    String::AssignFromPtr((String *)a2, *(const char ***)(v5 + 4 * v4)); /*0x5d0283*/
    return a2; /*0x5d0288*/
  }

}
}
// 0x5D0580
namespace gamemd {
void ObjectClass::j_DeleteAndZero()
{
  DeleteAndZero(); /*0x5d0580*/
}
}
// 0x5D2350
namespace gamemd {
int sub_5D2350(int a1, int * a2)
{
  struct tagRECT Rect; // [esp+18h] [ebp-10h] BYREF

  int result; // eax
  result = a2[2]; /*0x5d2359*/
  if ( result > 0 ) /*0x5d235e*/
  {
    result = a2[3]; /*0x5d2364*/
    if ( result > 0 ) /*0x5d2369*/
    {
      GetClientRect((HWND)(g_hWnd), &Rect); /*0x5d237b*/
      ClientToScreen((HWND)(g_hWnd), (LPPOINT)&Rect); /*0x5d238c*/
      if ( dword_887640 ) /*0x5d239e*/
        (*(void (**)(int, int, unsigned int))(*&dword_887640->q0F0))(dword_887640, a1, 0); /*0x5d23a5*/
      int v3 = *a2; // eax /*0x5d23af*/
      int v4; // ecx
      v4 = a2[1]; /*0x5d23b3*/
      unsigned int v5[4]; // [esp+8h] [ebp-20h] BYREF
      v5[2] = a2[2]; /*0x5d23b9*/
      v5[3] = a2[3]; /*0x5d23c6*/
      v5[1] = Rect.top + v4; /*0x5d23ce*/
      v5[0] = Rect.left + v3; /*0x5d23de*/
      result = (*(int (**)(int, unsigned int *, int, int *, unsigned int, int))(*(unsigned int *)g_DSurface_Primary + 8))( /*0x5d23e5*/
                 g_DSurface_Primary,
                 v5,
                 a1,
                 a2,
                 0,
                 1);
      if ( dword_887640 ) /*0x5d23f1*/
        return (*(int (**)(int, int, unsigned int))(*&dword_887640->q_100))(dword_887640, a1, 0); /*0x5d23f8*/
    }
  }
  return result; /*0x5d23fb*/
}
}
// 0x5D25D0
namespace gamemd {
int E4Recv_5D25D0::sub_5D25D0(char * Source, int a3)
{


  if ( !Source || !a3 ) /*0x5d25e3*/
    return 0; /*0x5d25e3*/
  Audio *v4; // eax
  v4 = (Audio *)__2_YAPAXI_Z(0xCu); /*0x5d25e7*/
  char **v5; // edi
  v5 = v4 ? (v4)->SetSoundFileName(Source, a3) : 0;
  BombClass *attachedBomb; // ecx
  attachedBomb = this->attachedBomb; /*0x5d2602*/
  if ( this->ambientSoundController[1] >= (int)attachedBomb ) /*0x5d260d*/
  {
    if ( !BYTE1(this->ambientSoundController[0]) && attachedBomb ) /*0x5d2618*/
      return 0; /*0x5d2618*/
    int v7; // eax
    v7 = this->ambientSoundController[2]; /*0x5d261a*/
    if ( v7 <= 0 /*0x5d262a*/
      || !((unsigned __int8 (*)(ObjectClass **, char *, unsigned int))this->nextObject->?)(
            &this->nextObject,
            (char *)attachedBomb + v7,
            0) )
    {
      return 0; /*0x5d264a*/
    }
  }
  int v8; // eax
  v8 = this->ambientSoundController[1]; /*0x5d2631*/
  TagClass *attachedTag; // edx
  attachedTag = this->attachedTag; /*0x5d2634*/
  this->ambientSoundController[1] = v8 + 1; /*0x5d263a*/
  *((unsigned int *)&attachedTag->AbstractClass + v8) = v5; /*0x5d263d*/
  return 1; /*0x5d2640*/

}
}
// 0x5D2650
namespace gamemd {
void* E4Recv_5D2650::sub_5D2650(void * a2, int a3)
{


  if ( a2 ) /*0x5d265c*/
  {
    if ( Audio::IsSoundEnabled() ) /*0x5d265e*/
    {
      int v4 = 0; // esi /*0x5d266a*/
      if ( this->ambientSoundController[1] > 0 ) /*0x5d266e*/
      {
        while ( _strcmpi((char *)a2, *this->M52 + v4)) ) /*0x5d2684*/
        {
          if ( ++v4 >= this->ambientSoundController[1] ) /*0x5d268c*/
            return; /*0x5d268c*/
        }
        int v5; // eax
        (v5) = ((v5) & ~0xFFFF) | ((Math::RoundToInt((double)a3 * *(float *)&stru_A8EB00.ObjectTypeClass[38])) & 0xFFFF); /*0x5d269f*/
        nullsub_192(v5); /*0x5d26a7*/
      }
    }
  }

}
}
// 0x5D4510
namespace gamemd {
int ProcessEditControlKey(CellStruct * aP0, int edx0, int * a2, unsigned short a4)
{

  int v4; // edi
  int v5; // esi
  int v7; // eax
  void (***v8)(unsigned int, int); // ecx
  int v9; // edi
  int *v10; // eax
  int v11; // edx
  int v12; // ebx
  int v13; // eax
  int v14; // eax
  int v15; // ecx
  int v16; // edx
  int v17; // eax
  int v18; // edx
  int v19; // eax
  int v20; // ecx
  int v21; // eax
  void (***v22)(unsigned int, int); // ecx
  int v23; // edi
  int *v24; // eax
  int v25; // edx
  int v26; // ecx
  int v27; // edx
  int v28; // eax
  int v29; // eax
  void (***v30)(unsigned int, int); // ecx
  int v31; // edi
  int *v32; // eax
  int v33; // edx
  int v34; // eax
  void (***v35)(unsigned int, int); // ecx
  int v36; // edi
  int *v37; // eax
  int v38; // edx
  int v39; // eax
  int v40; // eax

  v4 = 0; /*0x5d451a*/
  v5 = aP0; /*0x5d451f*/
  if ( !a4 ) /*0x5d4521*/
  {
    aP0 = *a2; /*0x5d452b*/
    if ( !*a2 ) /*0x5d452b*/
      return 0; /*0x5d4537*/
    v7 = *a2; /*0x5d453a*/
    BYTE1(v7) = BYTE1(aP0) & 0xF7; /*0x5d453c*/
    if ( v7 == 1 || v7 == 2 ) /*0x5d4547*/
    {
      if ( (aP0 & 2) != 0 && v5->q019 ) /*0x5d4552*/
      {
        DisableIME(); /*0x5d455d*/
        if ( v5->q019 ) /*0x5d4562*/
        {
          v8 = *(void (****)(unsigned int, int))(v5 + 36); /*0x5d4569*/
          v5->q019 = 0; /*0x5d456c*/
          if ( v8 ) /*0x5d4572*/
            (**v8)(v8, 1); /*0x5d4578*/
          nullsub_48(); /*0x5d457a*/
          if ( v5->q01A ) /*0x5d457f*/
          {
            if ( v5->q019 ) /*0x5d4586*/
              v9 = v5->ScrollOffset + v5->MessageTimer; /*0x5d4593*/
            else
              v9 = v5->ScrollOffset; /*0x5d4597*/
            v10 = *(int **)v5; /*0x5d459a*/
            if ( *(unsigned int *)v5 ) /*0x5d459a*/
            {
              do /*0x5d45b1*/
              {
                v11 = *v10; /*0x5d45a0*/
                v10[4] = v9; /*0x5d45a4*/
                v10 = (int *)(*(int (**)(int *))(v11 + 4))(v10); /*0x5d45a7*/
                v9 += v5->MessageTimer; /*0x5d45ad*/
              }
              while ( v10 ); /*0x5d45b1*/
            }
            ++v5->TextColorIndex; /*0x5d45b3*/
          }
        }
        return 2; /*0x5d45bf*/
      }
      return 0; /*0x5d4643*/
    }
  }
  if ( !v5->q019 ) /*0x5d45c7*/
    return v4; /*0x5d4990*/
  if ( a4 ) /*0x5d45d0*/
  {
    v12 = a4; /*0x5d4646*/
  }
  else
  {
    LOWORD(aP0) = *(unsigned short *)a2; /*0x5d45d6*/
    v12 = (unsigned __int8)Event_Process(aP0); /*0x5d45eb*/
    v13 = *a2; /*0x5d45f1*/
    if ( (*a2 & 0x1000) != 0 && v12 >= 48 && v12 <= 57 ) /*0x5d4605*/
    {
      (v13) &= ~(((~(~0x10u)) & 0xFF) << 8); /*0x5d4609*/
      *a2 = v13; /*0x5d460c*/
    }
    else if ( (*a2 & 0x1000) != 0 || (v13 & 0x8000) != 0 || v12 < 32 ) /*0x5d461c*/
    {
      v14 = (unsigned __int8)*a2; /*0x5d461e*/
      if ( v14 != 13 && v14 != 8 && v14 != 27 && (unsigned char)v12 != 8 ) /*0x5d4635*/
      {
        *a2 = 0; /*0x5d463b*/
        return 0; /*0x5d463b*/
      }
    }
  }
  if ( v12 == 8 ) /*0x5d464f*/
  {
    if ( *a2 != 8 ) /*0x5d495d*/
    {
      v39 = v5->u32_2B0; /*0x5d495f*/
      if ( v39 > v5->u32_2B4 ) /*0x5d496d*/
      {
        v40 = v39 - 1; /*0x5d496f*/
        v4 = 2; /*0x5d4970*/
        v5->u32_2B0 = v40; /*0x5d4975*/
        *(unsigned short *)(v5 + 2 * v40 + 40) = 0; /*0x5d497b*/
      }
    }
    *a2 = 0; /*0x5d4984*/
    (*(void (**)(unsigned int))(*v5->u32_24 + 80))(v5->u32_24); /*0x5d498d*/
    return v4; /*0x5d498d*/
  }
  if ( v12 != 13 ) /*0x5d4658*/
  {
    if ( v12 != 27 ) /*0x5d4661*/
    {
      (*(void (**)(unsigned int))(*v5->u32_24 + 80))(v5->u32_24); /*0x5d466c*/
      if ( v12 > 31 ) /*0x5d4672*/
      {
        if ( *(unsigned short *)(v5 + 2 * v5->u32_2B0 + 40) ) /*0x5d468a*/
        {
          v15 = v5->u32_2B4; /*0x5d4694*/
          v16 = *(unsigned int *)(v5 + 16) - 1; /*0x5d469a*/
          do /*0x5d46b2*/
          {
            if ( v5->u32_2B0 - v15 >= v16 ) /*0x5d46a9*/
              break; /*0x5d46a9*/
            v17 = v5->u32_2B0 + 1; /*0x5d46ab*/
            v5->u32_2B0 = v17; /*0x5d46ac*/
          }
          while ( *(unsigned short *)(v5 + 2 * v17 + 40) ); /*0x5d46b2*/
        }
        if ( v5->u32_2B0 - v5->u32_2B4 >= v5->DisplayDuration - 1 ) /*0x5d46cf*/
          goto LABEL_46; /*0x5d46cf*/
        *(unsigned short *)(v5 + 2 * *(unsigned int *)(v5 + 688) + 40) = v12; /*0x5d46d1*/
        v18 = v5->u32_2B0 + 1; /*0x5d46dc*/
        v4 = 1; /*0x5d46dd*/
        v5->u32_2B0 = v18; /*0x5d46e4*/
        *(unsigned short *)(v5 + 2 * v18 + 40) = 0; /*0x5d46ea*/
        TextRenderer::GetInstance(); /*0x5d46f5*/
        if ( Text::MeasureWidth(v5 + 40, 0) >= v5->u32_2C4 - 10 ) /*0x5d4711*/
        {
          v19 = v5->u32_2B0 - 1; /*0x5d4719*/
          v5->u32_2B0 = v19; /*0x5d471a*/
          *(unsigned short *)(v5 + 2 * v19 + 40) = 0; /*0x5d4720*/
LABEL_46:
          if ( v5->q018 ) /*0x5d4725*/
          {
            v20 = *(unsigned int *)(v5 + 688) /*0x5d475f*/
                - WideString::WordWrap(
                    &v5->u32_16C,
                    (wchar_t *)(v5 + 2 * v5->u32_2B4 + 40),
                    v5->u32_2BC,
                    v5->u32_2C0,
                    1);
            v5->u32_2B0 = v20; /*0x5d4768*/
            *(unsigned short *)(v5 + 2 * v20 + 40) = v12; /*0x5d476e*/
            v21 = v5->u32_2B0 + 1; /*0x5d4779*/
            v5->u32_2B0 = v21; /*0x5d477a*/
            *(unsigned short *)(v5 + 2 * v21 + 40) = 0; /*0x5d4780*/
            *a2 = 0; /*0x5d4788*/
            return 4; /*0x5d478d*/
          }
          v4 = 0; /*0x5d4790*/
        }
      }
      *a2 = 0; /*0x5d4792*/
      return v4; /*0x5d479e*/
    }
    DisableIME(); /*0x5d47a1*/
    if ( !v5->q019 ) /*0x5d47a6*/
      goto LABEL_77; /*0x5d47a6*/
    v22 = *(void (****)(unsigned int, int))(v5 + 36); /*0x5d47b1*/
    v5->q019 = 0; /*0x5d47b4*/
    if ( v22 ) /*0x5d47ba*/
      (**v22)(v22, 1); /*0x5d47c0*/
    nullsub_48(); /*0x5d47c2*/
    if ( !v5->q01A ) /*0x5d47c7*/
    {
LABEL_77:
      *a2 = 0; /*0x5d48b0*/
      return 2; /*0x5d48c1*/
    }
    if ( v5->q019 ) /*0x5d47d2*/
      v23 = v5->ScrollOffset + v5->MessageTimer; /*0x5d47df*/
    else
      v23 = v5->ScrollOffset; /*0x5d47e3*/
    v24 = *(int **)v5; /*0x5d47e6*/
    if ( *(unsigned int *)v5 ) /*0x5d47e6*/
    {
      do /*0x5d4801*/
      {
        v25 = *v24; /*0x5d47f0*/
        v24[4] = v23; /*0x5d47f4*/
        v24 = (int *)(*(int (**)(int *))(v25 + 4))(v24); /*0x5d47f7*/
        v23 += v5->MessageTimer; /*0x5d47fd*/
      }
      while ( v24 ); /*0x5d4801*/
    }
LABEL_76:
    ++v5->TextColorIndex; /*0x5d48ad*/
    goto LABEL_77; /*0x5d48ad*/
  }
  v26 = v5->u32_2B4; /*0x5d4808*/
  if ( v5->u32_2B0 < v26 ) /*0x5d4816*/
    v5->u32_2B0 = v26; /*0x5d4818*/
  if ( *(unsigned short *)(v5 + 2 * v5->u32_2B0 + 40) ) /*0x5d4824*/
  {
    v27 = v5->DisplayDuration - 1; /*0x5d482e*/
    do /*0x5d4846*/
    {
      if ( v5->u32_2B0 - v26 >= v27 ) /*0x5d483d*/
        break; /*0x5d483d*/
      v28 = v5->u32_2B0 + 1; /*0x5d483f*/
      v5->u32_2B0 = v28; /*0x5d4840*/
    }
    while ( *(unsigned short *)(v5 + 2 * v28 + 40) ); /*0x5d4846*/
  }
  v29 = v5->u32_2B0; /*0x5d484d*/
  if ( v29 == v26 ) /*0x5d4855*/
  {
    DisableIME(); /*0x5d4857*/
    if ( !v5->q019 ) /*0x5d485c*/
      goto LABEL_77; /*0x5d485c*/
    v30 = *(void (****)(unsigned int, int))(v5 + 36); /*0x5d4863*/
    v5->q019 = 0; /*0x5d4866*/
    if ( v30 ) /*0x5d486c*/
      (**v30)(v30, 1); /*0x5d4872*/
    nullsub_48(); /*0x5d4874*/
    if ( !v5->q01A ) /*0x5d4879*/
      goto LABEL_77; /*0x5d487e*/
    if ( v5->q019 ) /*0x5d4880*/
      v31 = v5->ScrollOffset + v5->MessageTimer; /*0x5d488d*/
    else
      v31 = v5->ScrollOffset; /*0x5d4891*/
    v32 = *(int **)v5; /*0x5d4894*/
    if ( *(unsigned int *)v5 ) /*0x5d4894*/
    {
      do /*0x5d48ab*/
      {
        v33 = *v32; /*0x5d489a*/
        v32[4] = v31; /*0x5d489e*/
        v32 = (int *)(*(int (**)(int *))(v33 + 4))(v32); /*0x5d48a1*/
        v31 += v5->MessageTimer; /*0x5d48a7*/
      }
      while ( v32 ); /*0x5d48ab*/
    }
    goto LABEL_76; /*0x5d48ab*/
  }
  if ( v29 - v26 < v5->DisplayDuration - 1 ) /*0x5d48ce*/
  {
    *(unsigned short *)(v5 + 2 * v29 + 40) = 32; /*0x5d48d0*/
    v34 = v5->u32_2B0 + 1; /*0x5d48dd*/
    v5->u32_2B0 = v34; /*0x5d48de*/
    *(unsigned short *)(v5 + 2 * v34 + 40) = 0; /*0x5d48e4*/
  }
  DisableIME(); /*0x5d48e9*/
  if ( v5->q019 ) /*0x5d48ee*/
  {
    v35 = *(void (****)(unsigned int, int))(v5 + 36); /*0x5d48f5*/
    v5->q019 = 0; /*0x5d48f8*/
    if ( v35 ) /*0x5d48fe*/
      (**v35)(v35, 1); /*0x5d4904*/
    nullsub_48(); /*0x5d4906*/
    if ( v5->q01A ) /*0x5d490b*/
    {
      if ( v5->q019 ) /*0x5d4912*/
        v36 = v5->ScrollOffset + v5->MessageTimer; /*0x5d491f*/
      else
        v36 = v5->ScrollOffset; /*0x5d4923*/
      v37 = *(int **)v5; /*0x5d4926*/
      if ( *(unsigned int *)v5 ) /*0x5d4926*/
      {
        do /*0x5d493d*/
        {
          v38 = *v37; /*0x5d492c*/
          v37[4] = v36; /*0x5d4930*/
          v37 = (int *)(*(int (**)(int *))(v38 + 4))(v37); /*0x5d4933*/
          v36 += v5->MessageTimer; /*0x5d4939*/
        }
        while ( v37 ); /*0x5d493d*/
      }
      ++v5->TextColorIndex; /*0x5d493f*/
    }
  }
  *a2 = 0; /*0x5d494b*/
  return 3; /*0x5d4531*/

}
}
// 0x5D4D50
namespace gamemd {
void* Dialog_MessageLoop()
{
  HWND result; // eax
  int v1; // esi
  int v2; // esi
  struct tagMSG Msg; // [esp+10h] [ebp-1Ch] BYREF

  result = (HWND)(g_hWnd);
  if ( g_hWnd ) /*0x5d4d5e*/
  {
    ++dword_AA0430; /*0x5d4d77*/
    for ( result = (HWND)GameLoopMessagePump(&Msg, 0, 0, 0, 0); result; result = (HWND)GameLoopMessagePump( /*0x5d4d84*/
                                                                                         &Msg,
                                                                                         0,
                                                                                         0,
                                                                                         0,
                                                                                         0) )
    {
      result = (HWND)IsMessageDialog(&Msg, 0, 0); /*0x5d4da6*/
      if ( !result ) /*0x5d4dad*/
        break; /*0x5d4dad*/
      (&Msg)->MapDialogResource(); /*0x5d4db7*/
      if ( dword_887368 ) /*0x5d4dc4*/
        HandleToolTipMessage(&Msg); /*0x5d4dcb*/
      v1 = 0; /*0x5d4dd5*/
      if ( dword_ABFCA0 <= 0 ) /*0x5d4dd9*/
      {
        LABEL_9:
        v2 = 0; /*0x5d4dff*/
        if ( dword_ABFCC8 <= 0 ) /*0x5d4e03*/
        {
          LABEL_12:
          if ( !dword_ABFD34 || !(uint8_t)dword_ABFD34(&Msg) ) /*0x5d4e35*/
          {
            TranslateMessage(&Msg); /*0x5d4e40*/
            DispatchMessageA(&Msg); /*0x5d4e47*/
          }
        }
        else
        {
          while ( !TranslateAcceleratorA(*((HWND *)dword_ABFCBC + 2 * v2 + 1), *((HACCEL *)dword_ABFCBC + 2 * v2), &Msg) ) /*0x5d4e1c*/
          {
            if ( ++v2 >= dword_ABFCC8 ) /*0x5d4e26*/
              goto LABEL_12; /*0x5d4e26*/
          }
        }
      }
      else
      {
        while ( !IsDialogMessageA(*((HWND *)dword_ABFC94 + v1), &Msg) ) /*0x5d4dee*/
        {
          if ( ++v1 >= dword_ABFCA0 ) /*0x5d4df8*/
            goto LABEL_9; /*0x5d4df8*/
        }
      }
    }
  }
  return result; /*0x5d4e66*/
}
}
// 0x5D4F20
namespace gamemd {
AbstractClass * * E4Recv_5D4F20::sub_5D4F20()
{

  int v1 = 0; // edi /*0x5d4f29*/
  if ( g_MissionQueueFrame.ls640BkgdName[11] <= 0 ) /*0x5d4f2f*/
    return 0; /*0x5d4f87*/
  while ( 1 ) /*0x5d4f47*/
  {
    GetWindowTextA( /*0x5d4f47*/
      *(HWND *)(g_MissionQueueFrame.ls640BkgdName[8] + 4 * v1),
      (LPSTR)&g_MissionQueueFrame.ls800BkgdName[7],
      99);
    if ( !strcmp((const char *)&g_MissionQueueFrame.ls800BkgdName[7], (const char *)this) ) /*0x5d4f56*/
      break; /*0x5d4f56*/
    if ( ++v1 >= g_MissionQueueFrame.ls640BkgdName[11] ) /*0x5d4f85*/
      return 0; /*0x5d4f85*/
  }
  return *(unsigned int *)(g_MissionQueueFrame.ls640BkgdName[8] + 4 * v1); /*0x5d4f87*/
}
}
// 0x5D6000
namespace gamemd {
char sub_5D6000(HWND hWnd, int a2)
{

  int v3; // esi
  char result; // al
  LPARAM v5; // esi
  wchar_t *v6; // eax
  LRESULT v7; // edi
  bool v8; // [esp+13h] [ebp-9h]
  int i; // [esp+14h] [ebp-8h]

  ListBox::Clear(hWnd); /*0x5d600d*/
  v8 = *(unsigned int *)&dword_A8B238 == 5; /*0x5d6020*/
  v3 = 0; /*0x5d6027*/
  for ( i = 0; ; v3 = i ) /*0x5d6029*/
  {
    result = g_MultiplayerMode; /*0x5d602d*/
    if ( (g_MultiplayerMode & 1) == 0 ) /*0x5d6034*/
    {
      g_MultiplayerMode |= 1u; /*0x5d603d*/
      MultiplayerGameMode::ConstructMultiplayerGameModeVectorClass(&g_MultiplayerModeConfig, 0, 0); /*0x5d6048*/
      /* X11: ptr_0 install elided (X67 star-deref, RHS g_ptr_7EED20) */  /*0x5d604d*/
      dword_ABFDB4 = 10; /*0x5d6057*/
      dword_ABFDB0 = 0; /*0x5d6066*/
      result = atexit(MultiplayerConfig::Cleanup); /*0x5d606c*/
    }
    if ( v3 >= dword_ABFDB0 ) /*0x5d607a*/
      break; /*0x5d607a*/
    if ( (g_MultiplayerMode & 1) == 0 ) /*0x5d6087*/
    {
      g_MultiplayerMode |= 1u; /*0x5d6090*/
      MultiplayerGameMode::ConstructMultiplayerGameModeVectorClass(&g_MultiplayerModeConfig, 0, 0); /*0x5d609b*/
      /* X11: ptr_0 install elided (X67 star-deref, RHS g_ptr_7EED20) */  /*0x5d60a0*/
      dword_ABFDB4 = 10; /*0x5d60aa*/
      dword_ABFDB0 = 0; /*0x5d60b9*/
      atexit(MultiplayerConfig::Cleanup); /*0x5d60bf*/
    }
    v5 = *((unsigned int *)dword_ABFDA4 + v3); /*0x5d60cc*/
    if ( !v8 || (*(unsigned __int8 (**)(LPARAM))(*(unsigned int *)v5 + 64))(v5) ) /*0x5d60db*/
    {
      v6 = WideString::GetOrEmpty_Alt((WideString *)(v5 + 32)); /*0x5d60e5*/
      v7 = SendMessageA((HWND)hWnd, 0x143u, 0, (LPARAM)v6); /*0x5d60f7*/
      if ( *(unsigned int *)(v5 + 40) == a2 ) /*0x5d60ff*/
        SendMessageA((HWND)hWnd, 0x14Eu, v7, 0); /*0x5d610a*/
      SendMessageA((HWND)hWnd, 0x151u, v7, v5); /*0x5d6114*/
    }
    ++i; /*0x5d611d*/
  }
  return result; /*0x5d6128*/

}
}
// 0x5D7590
namespace gamemd {
Coord * * LoadMultiplayerModesList(AbstractClass * a1, int edx0, void * aDRa2mdpostMult)
{

  char **v2; // esi
  int v3; // eax
  int v4; // edi
  int String; // esi
  int v6; // esi
  char *v7; // eax
  wchar_t *StringCSF; // eax
  int v9; // esi
  char *v10; // eax
  wchar_t *v11; // eax
  int v12; // esi
  int v13; // esi
  char *v14; // eax
  int v15; // esi
  char v16; // al
  int v17; // esi
  ObjectClass v19; // [esp+20h] [ebp-114h] BYREF
  int v20[3]; // [esp+120h] [ebp-14h] BYREF
  int v21; // [esp+12Ch] [ebp-8h]

  v2 = a1; /*0x5d7598*/
  v19.customSound = a2; /*0x5d759a*/
  v19.customSound_controller[3] = (int)a1; /*0x5d75aa*/
  CCFileClass::Construct((CCFileClass *)&v19.lineTrailer, aMpmodesmdIni); /*0x5d75ae*/
  if ( (unsigned __int8)CCFileClass::Open((CCFileClass *)&v19.lineTrailer, 0) ) /*0x5d75bd*/
  {
    v19.health = 0; /*0x5d75ce*/
    v19.estimatedHealth = 0; /*0x5d75d2*/
    GenericList::Constructor((GenericList *)v19.isOnMap); /*0x5d75d6*/
    /* X11: ptr_0 install elided (X67 star-deref, RHS g_ptr_7E1AFC) */  /*0x5d75e8*/
    memset(v19.isAliveFlag, 0, 13); /*0x5d75f3*/
    v19.location[1] = 0; /*0x5d760f*/
    v19.location[2] = 0; /*0x5d7616*/
    /* X11: ptr_0 install elided (X67 star-deref, RHS g_ptr_7EA5F4) */  /*0x5d761d*/
    if ( FileStraw::Open((FileStraw *)v19.bombVisible, (int)&v19.lineTrailer, 0) > 0 ) /*0x5d762c*/
    {
      v19.customSound_controller[4] = (v19.bombVisible)->FindKey(v2); /*0x5d763e*/
      v19.owningHouseIndex = 0; /*0x5d7642*/
      if ( v19.customSound_controller[4] > 0 ) /*0x5d7646*/
      {
        while ( 1 ) /*0x5d766b*/
        {
          INIClass::GetStringByIndexEx((INIClass *)v19.bombVisible, (char **)&v19.uniqueId, v2, v19.owningHouseIndex); /*0x5d766b*/
          __1_Timevec_std__QAE_XZ((const char **)&v19.uniqueId); /*0x5d7674*/
          v4 = v3; /*0x5d767d*/
          unknown_libname_73(&v19); /*0x5d767f*/
          String::Assign((String *)&v19.attachedBomb, &g_INI_DefaultBuffer); /*0x5d768d*/
          String = INIClass::ReadString( /*0x5d76b2*/
                     (INIClass *)v19.bombVisible,
                     v2,
                     (char **)&v19.uniqueId,
                     (char **)&v19.attachedBomb,
                     (int)&v19);
          j_DeleteAndZero((ObjectClass *)&v19.attachedBomb); /*0x5d76b4*/
          if ( String <= 0 ) /*0x5d76bb*/
            goto LABEL_49; /*0x5d76bb*/
          unknown_libname_73(&v19.ptr_4); /*0x5d76c5*/
          v6 = String::Tokenize((String *)&v19, 0, Delimiter, (void **)&v19.ptr_4); /*0x5d76e2*/
          if ( String::Length((String *)&v19.ptr_4) ) /*0x5d76e4*/
            break; /*0x5d76e4*/
LABEL_48:
          j_DeleteAndZero((ObjectClass *)&v19.ptr_4); /*0x5d7c50*/
LABEL_49:
          DeleteAndZero(&v19); /*0x5d7c59*/
          DeleteAndZero((ObjectClass *)&v19.uniqueId); /*0x5d7c66*/
          if ( ++v19.owningHouseIndex >= v19.customSound_controller[4] ) /*0x5d7c7a*/
            goto LABEL_50; /*0x5d7c7a*/
          v2 = (char **)v19.customSound_controller[3]; /*0x5d7655*/
        }
        String::Assign((String *)&v19.customSound_controller[1], asc_830A14); /*0x5d76fa*/
        String::TrimLeft((String *)&v19.ptr_4, (const char **)&v19.customSound_controller[1]); /*0x5d7708*/
        j_DeleteAndZero((ObjectClass *)&v19.customSound_controller[1]); /*0x5d7711*/
        String::Assign((String *)&v19.fallRate, asc_830A14); /*0x5d771f*/
        String::TrimRight((String *)&v19.ptr_4, (const char **)&v19.fallRate); /*0x5d772d*/
        j_DeleteAndZero((ObjectClass *)&v19.fallRate); /*0x5d7736*/
        v7 = String::GetOrEmpty((String *)&v19.ptr_4); /*0x5d7749*/
        StringCSF = GetStringCSF((wchar_t *)v7, 0, aDRa2mdpostMult, 1030); /*0x5d7752*/
        WideString::Assign((WideString *)&v19.referenceCount, StringCSF); /*0x5d775c*/
        unknown_libname_73(&v19.ptr_C); /*0x5d7765*/
        v9 = String::Tokenize((String *)&v19, v6, Delimiter, (void **)&v19.ptr_C); /*0x5d7782*/
        if ( !String::Length((String *)&v19.ptr_C) ) /*0x5d778b*/
        {
LABEL_47:
          j_DeleteAndZero((ObjectClass *)&v19.ptr_C); /*0x5d7c3e*/
          DeleteAndZero::Alt((DeleteAndZero *)&v19.referenceCount); /*0x5d7c4b*/
          goto LABEL_48; /*0x5d7c4b*/
        }
        String::Assign((String *)&v19.ambientSoundController[4], asc_830A14); /*0x5d779a*/
        String::TrimLeft((String *)&v19.ptr_C, (const char **)&v19.ambientSoundController[4]); /*0x5d77a8*/
        j_DeleteAndZero((ObjectClass *)&v19.ambientSoundController[4]); /*0x5d77b1*/
        String::Assign((String *)&v19.ambientSoundController[1], asc_830A14); /*0x5d77bf*/
        String::TrimRight((String *)&v19.ptr_C, (const char **)&v19.ambientSoundController[1]); /*0x5d77cd*/
        j_DeleteAndZero((ObjectClass *)&v19.ambientSoundController[1]); /*0x5d77d6*/
        v10 = String::GetOrEmpty((String *)&v19.ptr_C); /*0x5d77e9*/
        v11 = GetStringCSF((wchar_t *)v10, 0, aDRa2mdpostMult, 1041); /*0x5d77f2*/
        WideString::Assign((WideString *)&v19.NeedsSaveOrLink, v11); /*0x5d77fc*/
        unknown_libname_73(&v19.ptr_8); /*0x5d7805*/
        v12 = String::Tokenize((String *)&v19, v9, Delimiter, (void **)&v19.ptr_8); /*0x5d7822*/
        if ( !String::Length((String *)&v19.ptr_8) ) /*0x5d782b*/
        {
LABEL_46:
          j_DeleteAndZero((ObjectClass *)&v19.ptr_8); /*0x5d7c2c*/
          DeleteAndZero::Alt((DeleteAndZero *)&v19.NeedsSaveOrLink); /*0x5d7c39*/
          goto LABEL_47; /*0x5d7c39*/
        }
        String::Assign((String *)v19.customSound_controller, asc_830A14); /*0x5d783a*/
        String::TrimLeft((String *)&v19.ptr_8, (const char **)v19.customSound_controller); /*0x5d7848*/
        j_DeleteAndZero((ObjectClass *)v19.customSound_controller); /*0x5d7851*/
        String::Assign((String *)&v19.ambientSoundController[3], asc_830A14); /*0x5d785f*/
        String::TrimRight((String *)&v19.ptr_8, (const char **)&v19.ambientSoundController[3]); /*0x5d786d*/
        j_DeleteAndZero((ObjectClass *)&v19.ambientSoundController[3]); /*0x5d7876*/
        unknown_libname_73(&v19.nextArrayIndex); /*0x5d787f*/
        v13 = String::Tokenize((String *)&v19, v12, Delimiter, (void **)&v19.nextArrayIndex); /*0x5d789c*/
        String::Assign((String *)&v19.customSound_controller[2], asc_830A14); /*0x5d78a3*/
        String::TrimLeft((String *)&v19.nextArrayIndex, (const char **)&v19.customSound_controller[2]); /*0x5d78b1*/
        DeleteAndZero((ObjectClass *)&v19.customSound_controller[2]); /*0x5d78ba*/
        String::Assign((String *)&v19.nextObject, asc_830A14); /*0x5d78c8*/
        String::TrimRight((String *)&v19.nextArrayIndex, (const char **)&v19.nextObject); /*0x5d78d6*/
        DeleteAndZero((ObjectClass *)&v19.nextObject); /*0x5d78df*/
        unknown_libname_73(&v19.abstractFlags); /*0x5d78e8*/
        String::Tokenize((String *)&v19, v13, Delimiter, (void **)&v19.abstractFlags); /*0x5d78fc*/
        String::Assign((String *)&v19.attachedTag, asc_830A14); /*0x5d790a*/
        String::TrimLeft((String *)&v19.abstractFlags, (const char **)&v19.attachedTag); /*0x5d7918*/
        DeleteAndZero((ObjectClass *)&v19.attachedTag); /*0x5d7921*/
        String::Assign((String *)v19.ambientSoundController, asc_830A14); /*0x5d792f*/
        String::TrimRight((String *)&v19.abstractFlags, (const char **)v19.ambientSoundController); /*0x5d793d*/
        DeleteAndZero((ObjectClass *)v19.ambientSoundController); /*0x5d7946*/
        v19.ambientSoundController[2] = 1; /*0x5d794f*/
        if ( String::Length((String *)&v19.abstractFlags) ) /*0x5d7954*/
        {
          v14 = String::GetOrEmpty((String *)&v19.abstractFlags); /*0x5d7966*/
          v19.ambientSoundController[2] = _strcmpi(v14, g_Str_false) != 0; /*0x5d7979*/
        }
        if ( WideString::Length((WideString *)&v19.referenceCount) /*0x5d79a3*/
          && String::Length((String *)&v19.ptr_8)
          && String::Length((String *)&v19.nextArrayIndex) )
        {
          v15 = 0; /*0x5d79d3*/
          v19.occupant = (*(int (**)(int, int *, int *, int *, int *, int, int))(*(unsigned int *)v19.customSound /*0x5d79d5*/
                                                                                          + 4))(
                           v19.customSound,
                           &v19.referenceCount,
                           &v19.NeedsSaveOrLink,
                           &v19.ptr_8,
                           &v19.nextArrayIndex,
                           v19.ambientSoundController[2],
                           v4);
          v16 = g_MultiplayerMode; /*0x5d79d9*/
          while ( 1 ) /*0x5d79de*/
          {
            if ( (v16 & 1) == 0 ) /*0x5d79e0*/
            {
              g_MultiplayerMode = v16 | 1; /*0x5d79eb*/
              MultiplayerGameMode::ConstructMultiplayerGameModeVectorClass(&g_MultiplayerModeConfig, 0, 0); /*0x5d79f0*/
              dword_ABFDB4 = 10; /*0x5d79fa*/
              /* X11: ptr_0 install elided (X67 star-deref, RHS g_ptr_7EED20) */  /*0x5d7a05*/
              dword_ABFDB0 = 0; /*0x5d7a0b*/
              atexit(MultiplayerConfig::Cleanup); /*0x5d7a11*/
              v16 = g_MultiplayerMode; /*0x5d7a16*/
            }
            if ( v15 >= dword_ABFDB0 ) /*0x5d7a2b*/
              break; /*0x5d7a2b*/
            if ( (v16 & 1) == 0 ) /*0x5d7a2f*/
            {
              g_MultiplayerMode = v16 | 1; /*0x5d7a38*/
              dword_ABFDA4 = 0; /*0x5d7a3d*/
              dword_ABFDA8 = 0; /*0x5d7a43*/
              byte_ABFDAC = 1; /*0x5d7a49*/
              byte_ABFDAD = 0; /*0x5d7a50*/
              /* X11: ptr_0 install elided (X67 star-deref, RHS g_ptr_7EED20) */  /*0x5d7a56*/
              dword_ABFDB4 = 10; /*0x5d7a5c*/
              dword_ABFDB0 = 0; /*0x5d7a62*/
              atexit(MultiplayerConfig::Cleanup); /*0x5d7a68*/
              v16 = g_MultiplayerMode; /*0x5d7a6d*/
            }
            if ( *(unsigned int *)(*((unsigned int *)dword_ABFDA4 + v15) + 40) > *(unsigned int *)(v19.occupant + 40) ) /*0x5d7a88*/
              break; /*0x5d7a88*/
            ++v15; /*0x5d7a8a*/
          }
          if ( v15 ) /*0x5d7a92*/
          {
            if ( (v16 & 1) == 0 ) /*0x5d7b56*/
            {
              g_MultiplayerMode = v16 | 1; /*0x5d7b5f*/
              dword_ABFDA4 = 0; /*0x5d7b64*/
              dword_ABFDA8 = 0; /*0x5d7b6a*/
              byte_ABFDAC = 1; /*0x5d7b70*/
              byte_ABFDAD = 0; /*0x5d7b77*/
              /* X11: ptr_0 install elided (X67 star-deref, RHS g_ptr_7EED20) */  /*0x5d7b7d*/
              dword_ABFDB4 = 10; /*0x5d7b83*/
              dword_ABFDB0 = 0; /*0x5d7b89*/
              atexit(MultiplayerConfig::Cleanup); /*0x5d7b8f*/
            }
            v17 = v15 - 1; /*0x5d7ba2*/
            if ( dword_ABFDB0 >= dword_ABFDA8 /*0x5d7bcc*/
              && (!byte_ABFDAD && dword_ABFDA8
               || dword_ABFDB4 <= 0
               || !(*(unsigned __int8 (**)(MultiplayerGameMode *, int, unsigned int))(*(unsigned int *)g_MultiplayerModeConfig.__pad_0
                                                                                         + 8))(
                     &g_MultiplayerModeConfig,
                     dword_ABFDA8 + dword_ABFDB4,
                     0)) )
            {
              goto LABEL_45; /*0x5d7bd1*/
            }
            if ( v17 < dword_ABFDB0 - 1 ) /*0x5d7bde*/
              memcpy( /*0x5d7bff*/
                (char *)dword_ABFDA4 + 4 * v17 + 8,
                (char *)dword_ABFDA4 + 4 * v17 + 4,
                4 * (dword_ABFDB0 + 0x3FFFFFFF * (v17 + 1)));
            *((unsigned int *)dword_ABFDA4 + v17 + 1) = v19.occupant; /*0x5d7c10*/
          }
          else
          {
            if ( (v16 & 1) == 0 ) /*0x5d7a9a*/
            {
              g_MultiplayerMode = v16 | 1; /*0x5d7aa3*/
              dword_ABFDA4 = 0; /*0x5d7aa8*/
              dword_ABFDA8 = 0; /*0x5d7aae*/
              byte_ABFDAC = 1; /*0x5d7ab4*/
              byte_ABFDAD = 0; /*0x5d7abb*/
              /* X11: ptr_0 install elided (X67 star-deref, RHS g_ptr_7EED20) */  /*0x5d7ac1*/
              dword_ABFDB4 = 10; /*0x5d7ac7*/
              dword_ABFDB0 = 0; /*0x5d7acd*/
              atexit(MultiplayerConfig::Cleanup); /*0x5d7ad3*/
            }
            if ( dword_ABFDB0 >= dword_ABFDA8 /*0x5d7b16*/
              && (!byte_ABFDAD && dword_ABFDA8
               || dword_ABFDB4 <= 0
               || !(*(unsigned __int8 (**)(MultiplayerGameMode *, int, unsigned int))(*(unsigned int *)g_MultiplayerModeConfig.__pad_0
                                                                                         + 8))(
                     &g_MultiplayerModeConfig,
                     dword_ABFDA8 + dword_ABFDB4,
                     0)) )
            {
              goto LABEL_45; /*0x5d7b1b*/
            }
            if ( dword_ABFDB0 ) /*0x5d7b28*/
              memcpy((char *)dword_ABFDA4 + 4, dword_ABFDA4, 4 * dword_ABFDB0); /*0x5d7b3c*/
            *(unsigned int *)dword_ABFDA4 = v19.occupant; /*0x5d7b4d*/
          }
          ++dword_ABFDB0; /*0x5d7c14*/
        }
LABEL_45:
        DeleteAndZero((ObjectClass *)&v19.abstractFlags); /*0x5d7c1a*/
        DeleteAndZero((ObjectClass *)&v19.nextArrayIndex); /*0x5d7c27*/
        goto LABEL_46; /*0x5d7c27*/
      }
    }
LABEL_50:
    HashTable::DestroyHashTableINIClass((INIClass *)v19.bombVisible); /*0x5d7c82*/
  }
  /* X11: ptr_0 install elided (X67 recv-slot, RHS g_ptr_7E16B0) */  /*0x5d7c92*/
  v21 = 0; /*0x5d7c9d*/
  Vector::Clear((int)v20); /*0x5d7ca4*/
  v19.lineTrailer = (int)&off_7E1668; /*0x5d7cb0*/
  return BufferIOFileClass::Dtor((BufferIOFileClass *)&v19.lineTrailer); /*0x5d7cc0*/

}
}
// 0x5D7CE0
namespace gamemd {
int GameInit_Complete()
{

  int i; // esi
  void (***v2)(unsigned int, int); // ecx
  String v4; // [esp+8h] [ebp-1Ch] BYREF
  void **v5; // [esp+10h] [ebp-14h] BYREF
  void **v6; // [esp+14h] [ebp-10h] BYREF
  void **v7; // [esp+18h] [ebp-Ch] BYREF
  void **v8; // [esp+1Ch] [ebp-8h] BYREF
  void **v9; // [esp+20h] [ebp-4h] BYREF

  for ( i = 0; ; ++i ) /*0x5d7ce5*/
  {
    if ( (g_MultiplayerMode & 1) == 0 ) /*0x5d7cf3*/
    {
      g_MultiplayerMode |= 1u; /*0x5d7cfd*/
      GameInit::InitMultiplayerModes((GameInit *)&g_MultiplayerModeConfig, 0, 0); /*0x5d7d08*/
      atexit(MultiplayerConfig::Cleanup); /*0x5d7d12*/
    }
    if ( i >= g_MultiplayerModeConfig.MultiplayerGameMode_field_0x10 ) /*0x5d7d20*/
      break; /*0x5d7d20*/
    v2 = *(void (****)(unsigned int, int))(System_Init()[1] + 4 * i); /*0x5d7d2a*/
    if ( v2 ) /*0x5d7d32*/
      (**v2)(v2, 1); /*0x5d7d37*/
  }
  *(unsigned int *)&v4.ptr_4 = &g_ptr_7EEEBC; /*0x5d7d45*/
  String::Assign(&v4, aBattle); /*0x5d7d4d*/
  LoadMultiplayerModesList((char **)&v4, (int)&v4.ptr_4); /*0x5d7d5a*/
  DeleteAndZero((ObjectClass *)&v4); /*0x5d7d63*/
  v5 = &g_ptr_7EEEB0; /*0x5d7d6c*/
  String::Assign(&v4, aManbattle); /*0x5d7d79*/
  LoadMultiplayerModesList((char **)&v4, (int)&v5); /*0x5d7d86*/
  DeleteAndZero((ObjectClass *)&v4); /*0x5d7d8f*/
  v6 = &g_ptr_7EEEA4; /*0x5d7d98*/
  String::Assign(&v4, aSiege); /*0x5d7da5*/
  LoadMultiplayerModesList((char **)&v4, (int)&v6); /*0x5d7db2*/
  DeleteAndZero((ObjectClass *)&v4); /*0x5d7dbb*/
  v7 = &g_ptr_7EEE98; /*0x5d7dc4*/
  String::Assign(&v4, aUnholy); /*0x5d7dd1*/
  LoadMultiplayerModesList((char **)&v4, (int)&v7); /*0x5d7dde*/
  DeleteAndZero((ObjectClass *)&v4); /*0x5d7de7*/
  v8 = &g_ptr_7EEE8C; /*0x5d7df0*/
  String::Assign(&v4, aFreeforall); /*0x5d7dfd*/
  LoadMultiplayerModesList((char **)&v4, (int)&v8); /*0x5d7e0a*/
  DeleteAndZero((ObjectClass *)&v4); /*0x5d7e13*/
  v9 = &g_ptr_7EEE80; /*0x5d7e1c*/
  String::Assign(&v4, aCooperative); /*0x5d7e29*/
  LoadMultiplayerModesList((char **)&v4, (int)&v9); /*0x5d7e36*/
  return DeleteAndZero((ObjectClass *)&v4); /*0x5d7e44*/

}
}
// 0x5D9060
namespace gamemd {
int AbstractClass::sub_5D9060(int a2)
{
  int16_t v6; // di

  int v2 = a2; // ebx /*0x5d9061*/
  if ( !a2 ) /*0x5d906c*/
    v2 = 1; /*0x5d906e*/
  int v4 = 255; // ebp /*0x5d9073*/
  while ( 1 ) /*0x5d907b*/
  {
    int v5 = v2 + this->uniqueId; // edx /*0x5d907b*/
    this->uniqueId = v5; /*0x5d907f*/
    v6 = v5; /*0x5d9087*/
    if ( v5 > 0xFFFF ) /*0x5d908a*/
      this->uniqueId = 2048; /*0x5d908c*/
    if ( !*(unsigned int *)&stru_887598.isAliveFlag || *(unsigned int *)&dword_A8B238 != 4 ) /*0x5d90a4*/
      break; /*0x5d90a4*/
    if ( (*(uint8_t (__stdcall **)(unsigned short))(**(unsigned int **)&stru_887598.isAliveFlag + 104))(v5) ) /*0x5d90a9*/
    {
      (*(void (**)(unsigned int, int16_t))(**(unsigned int **)&stru_887598.isAliveFlag + 108))( /*0x5d90ca*/
        *(unsigned int *)&stru_887598.isAliveFlag,
        v6);
      return v6; /*0x5d90ca*/
    }
    if ( !v4-- ) /*0x5d90b0*/
      return v6; /*0x5d90be*/
  }
  return v6; /*0x5d90ba*/
}
}
// 0x5D9DB0
namespace gamemd {
AbstractClass * * DetectPortAllocationPattern(int a1, short * a2, unsigned short * a3, unsigned char * a4, unsigned char * a5)
{

  __int16 *v5; // ebp
  int v6; // edx
  int v8; // ecx
  __int16 *v9; // edx
  unsigned __int16 *v10; // eax
  int v11; // esi
  int v12; // ebp
  unsigned __int16 v13; // cx
  __int16 v14; // cx
  int v15; // ecx
  int v16; // edi
  int v17; // eax
  int v19; // eax
  unsigned __int16 v20; // ax
  int v21; // esi
  int v22; // ecx
  unsigned __int16 *v23; // eax
  unsigned __int16 v24; // cx
  int v25; // esi
  int v26; // edi
  int v27; // esi
  int v28; // eax
  int v29; // [esp+1Ch] [ebp+Ch]

  v5 = a2; /*0x5d9db2*/
  Debug::Log(); /*0x5d9dd9*/
  v6 = a1; /*0x5d9dde*/
  if ( a1 > 0 ) /*0x5d9deb*/
  {
    v29 = a1; /*0x5d9ded*/
    do /*0x5d9e46*/
    {
      v8 = v6 - 1; /*0x5d9df1*/
      if ( v6 - 1 > 0 ) /*0x5d9df6*/
      {
        v9 = v5; /*0x5d9dfa*/
        v10 = a3 + 1; /*0x5d9dfc*/
        v11 = (char *)v5 - (char *)a3; /*0x5d9dff*/
        v12 = v8; /*0x5d9e01*/
        do /*0x5d9e33*/
        {
          v13 = *(v10 - 1); /*0x5d9e03*/
          if ( v13 > *v10 ) /*0x5d9e0d*/
          {
            *(v10 - 1) = *v10; /*0x5d9e15*/
            *v10 = v13; /*0x5d9e19*/
            v14 = *v9; /*0x5d9e22*/
            *v9 = *(unsigned __int16 *)((char *)v10 + v11); /*0x5d9e25*/
            *(unsigned __int16 *)((char *)v10 + v11) = v14; /*0x5d9e28*/
          }
          ++v9; /*0x5d9e2c*/
          ++v10; /*0x5d9e2f*/
          --v12; /*0x5d9e32*/
        }
        while ( v12 ); /*0x5d9e33*/
        v5 = a2; /*0x5d9e35*/
        v6 = a1; /*0x5d9e39*/
      }
      --v29; /*0x5d9e42*/
    }
    while ( v29 ); /*0x5d9e46*/
  }
  v15 = a3[1]; /*0x5d9e4c*/
  v16 = (unsigned __int16)v15 - *a3; /*0x5d9e55*/
  if ( v16 == 1 ) /*0x5d9e5a*/
  {
    v17 = a3[2]; /*0x5d9e5e*/
    if ( (unsigned __int16)v17 - v15 == 1 && a3[3] - v17 == 1 ) /*0x5d9e74*/
    {
      Debug::Log(); /*0x5d9e7b*/
      *a4 = 0; /*0x5d9e8d*/
      *a5 = 1; /*0x5d9e90*/
      return 1; /*0x5d9e97*/
    }
  }
  if ( v16 == 2 ) /*0x5d9e9d*/
  {
    v19 = a3[2]; /*0x5d9ea1*/
    if ( (unsigned __int16)v19 - v15 == 2 && a3[3] - v19 == 2 ) /*0x5d9eb7*/
    {
      Debug::Log(); /*0x5d9ebe*/
      *a4 = 0; /*0x5d9ece*/
      *a5 = 1; /*0x5d9ed6*/
      return 2; /*0x5d9eda*/
    }
  }
  v20 = a3[2]; /*0x5d9edf*/
  v21 = v20 - v15; /*0x5d9ee5*/
  v22 = a3[3] - v20; /*0x5d9eed*/
  if ( v16 != v21 ) /*0x5d9ef1*/
  {
    if ( v21 == v22 ) /*0x5d9f42*/
    {
      Debug::Log(); /*0x5d9f4a*/
      *a4 = 0; /*0x5d9f5a*/
      *a5 = 0; /*0x5d9f62*/
      return v21; /*0x5d9f66*/
    }
    if ( v6 > 0 ) /*0x5d9f6b*/
    {
      v23 = a3; /*0x5d9f6f*/
      do /*0x5d9f7e*/
      {
        *v23 -= *(unsigned __int16 *)((char *)v23 + (char *)v5 - (char *)a3); /*0x5d9f77*/
        ++v23; /*0x5d9f7a*/
        --v6; /*0x5d9f7d*/
      }
      while ( v6 ); /*0x5d9f7e*/
    }
    v24 = a3[2]; /*0x5d9f84*/
    v25 = a3[1]; /*0x5d9f93*/
    v26 = v24 - v25; /*0x5d9f95*/
    v27 = v25 - *a3; /*0x5d9f9d*/
    v28 = a3[3] - v24; /*0x5d9f9f*/
    if ( v27 == v26 ) /*0x5d9fa3*/
    {
      if ( v26 == v28 ) /*0x5d9fa7*/
      {
        Debug::Log(); /*0x5d9faf*/
        *a4 = 1; /*0x5d9fbf*/
        *a5 = 1; /*0x5d9fc7*/
        return v27; /*0x5d9fcb*/
      }
    }
    else if ( v27 != v28 ) /*0x5d9fd0*/
    {
      if ( v26 == v28 ) /*0x5d9fd4*/
      {
        Debug::Log(); /*0x5d9fdc*/
        *a4 = 1; /*0x5d9fec*/
        *a5 = 0; /*0x5d9fef*/
        return v26; /*0x5d9ff2*/
      }
      else
      {
        *a5 = 0; /*0x5da005*/
        *a4 = 0; /*0x5da009*/
        return 0; /*0x5da00c*/
      }
    }
    Debug::Log(); /*0x5da018*/
    *a4 = 1; /*0x5da028*/
    *a5 = 0; /*0x5da030*/
    return v27; /*0x5da02b*/
  }
  if ( v21 == v22 ) /*0x5d9ef6*/
  {
    Debug::Log(); /*0x5d9efd*/
    *a4 = 0; /*0x5d9f0d*/
    *a5 = 1; /*0x5d9f10*/
  }
  else
  {
    Debug::Log(); /*0x5d9f21*/
    *a4 = 0; /*0x5d9f33*/
    *a5 = 0; /*0x5d9f36*/
  }
  return v16; /*0x5d9e93*/

}
}
// 0x5DA750
namespace gamemd {
void HandleNetworkPlayerDisconnect(wchar_t * a1, int a2)
{

  int v2; // ebp
  Network *v4; // ebx
  int v5; // eax
  char *v6; // eax
  int v7; // eax
  int v8; // edi
  int v9; // eax
  Network *v10; // ecx
  int v11; // eax
  int v12; // edx
  int v13; // esi
  void **v14; // edi
  int v15; // eax
  int v16; // ecx
  char *v17; // eax
  int v18; // eax
  wchar_t *StringCSF; // [esp-8h] [ebp-134h]
  wchar_t *v20; // [esp-8h] [ebp-134h]
  int v21; // [esp+Ch] [ebp-120h] BYREF
  int v22; // [esp+10h] [ebp-11Ch]
  int v23[2]; // [esp+14h] [ebp-118h] BYREF
  wchar_t String[80]; // [esp+1Ch] [ebp-110h] BYREF
  char v25[112]; // [esp+BCh] [ebp-70h] BYREF

  v2 = a1; /*0x5da75d*/
  v4 = *(&dword_A8022C->ptr_0 + a1); /*0x5da762*/
  v21 = a1; /*0x5da76c*/
  if ( stru_A8E960.random[512] ) /*0x5da770*/
    Debug::Log(); /*0x5da77f*/
  if ( !v4 || !v4->u32_1EC ) /*0x5da78f*/
    return; /*0x5da797*/
  String[0] = 0; /*0x5da7a0*/
  if ( a2 == 1 ) /*0x5da7a7*/
  {
    StringCSF = GetStringCSF(aTxtConnectionL, 0, aDRa2mdpostNetd, 464); /*0x5da7c6*/
    swprintf(String, (const size_t)StringCSF, (const wchar_t *const)(v4 + 90154)); /*0x5da7cc*/
  }
  else if ( !a2 ) /*0x5da7d0*/
  {
    v20 = GetStringCSF(aTxtLeftGame, 0, aDRa2mdpostNetd, 466); /*0x5da7f3*/
    swprintf(String, (const size_t)v20, (const wchar_t *const)(v4 + 90154)); /*0x5da7f5*/
  }
  if ( wcslen(String) ) /*0x5da802*/
  {
    (v5) = ((v5) & ~0xFFFF) | ((Math::RoundToInt(*&dword_8871E0->u32_14C0 * 900.0)) & 0xFFFF); /*0x5da822*/
    MessageListClass::AddMessage(&unk_A8BC60, 0, 0, String, *(unsigned int *)(*(unsigned int *)(v4 + 52) + 192), 16454, v5, 0); /*0x5da845*/
    MapClass::MarkForRedraw((GScreenClass *)&dword_87F7E8, 0); /*0x5da851*/
  }
  Network::sendData((int)&stru_A8E960.nextScenario[96], v2); /*0x5da85d*/
  if ( a2 ) /*0x5da864*/
  {
    if ( *(unsigned int *)&stru_A8E960.random[528] ) /*0x5da871*/
    {
      v6 = EventClass::Add2(v25, *(unsigned int *)(*(int *)((char *)&stru_A83CD9.estimatedHealth + 3) + 48), 0x23u, v2); /*0x5da893*/
      if ( *(int *)&dword_A802C8 < 128 ) /*0x5da8a2*/
      {
        memcpy(&byte_A802D4[111 * dword_A802D0], v6, 0x6Fu); /*0x5da8c2*/
        dword_A83A54[dword_A802D0] = timeGetTime(); /*0x5da8d3*/
        dword_A802D0 = ((unsigned char)dword_A802D0 + 1) & 0x7F; /*0x5da8ea*/
        ++*(unsigned int *)&dword_A802C8; /*0x5da8f0*/
      }
    }
    else
    {
      Network::SendOffer((Network *)v4); /*0x5da875*/
    }
LABEL_21:
    if ( *(unsigned int *)&dword_A8B238 == 4 ) /*0x5da940*/
    {
      if ( stru_A8D804.__pad_3D[863] ) /*0x5da94d*/
      {
        if ( SessionClass::IsValidHouse((int)&dword_A8B238, (#375 *)v4) ) /*0x5da959*/
        {
          byte_A8E2D0 = 1; /*0x5da96b*/
          v7 = EventClass::validateEventType((EventClass *)&dword_B052D0); /*0x5da972*/
          v8 = v7; /*0x5da977*/
          if ( v7 != -1 ) /*0x5da97c*/
          {
            v9 = *(&dword_A8022C->ptr_0 + v7); /*0x5da987*/
            v22 = *(&dword_A8022C->ptr_0 + v8); /*0x5da98c*/
            if ( v9 ) /*0x5da990*/
            {
              if ( *(int *)&stru_A8D804.__pad_3D[579] > 2 ) /*0x5da99f*/
              {
                v10 = 0; /*0x5da9a5*/
                v11 = 0; /*0x5da9a7*/
                if ( *(int *)&stru_A8D804.__pad_3D[579] > 0 ) /*0x5da9ab*/
                {
                  v12 = *(unsigned int *)&stru_A8D804.__pad_3D[567]; /*0x5da9b3*/
                  while ( *(unsigned int *)(*(unsigned int *)v12 + 111) != v8 ) /*0x5da9ba*/
                  {
                    ++v11; /*0x5da9bc*/
                    v12 += 4; /*0x5da9bd*/
                    if ( v11 >= *(int *)&stru_A8D804.__pad_3D[579] ) /*0x5da9c2*/
                      goto LABEL_33; /*0x5da9c2*/
                  }
                  v10 = (Network *)(*(unsigned int *)(*(unsigned int *)&stru_A8D804.__pad_3D[567] + 4 * v11) + 40); /*0x5da9d1*/
                  *(unsigned short *)&stru_A8D804.__pad_3D[891] = *(&dword_A8E2B2 + v11); /*0x5da9d4*/
LABEL_33:
                  v2 = v21; /*0x5da9db*/
                }
                Network::CopyAddress(v10, &v21, (int)v23); /*0x5da9e9*/
                NetworkID::Assign((NetworkID *)&stru_A8D804.__pad_3D[867], &v21, (int)v23, 0); /*0x5da9ff*/
                Network::FormatAddress((Network *)&stru_A8D804.__pad_3D[867], 0); /*0x5daa0b*/
                Debug::Log(); /*0x5daa16*/
                Debug::Log(); /*0x5daa2d*/
                Network::SetPlayerCoords((Network *)&stru_A8E960.nextScenario[96], &stru_A8D804.__pad_3D[867]); /*0x5daa3f*/
                v9 = v22; /*0x5daa44*/
              }
              wcscpy(word_A8E258, &v9->u32_1602A); /*0x5daa53*/
              Debug::Log(); /*0x5daa62*/
              dword_A8E2AC = v8; /*0x5daa6f*/
              if ( SessionClass::IsValidHouse((int)&dword_A8B238, 0) ) /*0x5daa77*/
                Network::SendMasterPlayerList((Network *)&dword_B052D0); /*0x5daa85*/
            }
          }
        }
      }
    }
    goto LABEL_37; /*0x5daa85*/
  }
  if ( *(unsigned int *)&dword_A8B238 == 4 ) /*0x5da8fe*/
  {
    if ( !*(unsigned int *)dword_B779C4 || (Network::SendOffer((Network *)v4), *(unsigned int *)&dword_A8B238 == 4) ) /*0x5da91b*/
    {
      if ( stru_A8D804.__pad_3D[863] ) /*0x5da928*/
      {
        NetworkManager::RemovePlayer((int)&dword_B052D0, v2); /*0x5da934*/
        goto LABEL_21; /*0x5da934*/
      }
    }
  }
LABEL_37:
  v13 = 0; /*0x5daa8a*/
  if ( *(int *)&stru_A8D804.__pad_3D[579] > 0 ) /*0x5daa94*/
  {
    v14 = *(void ***)&stru_A8D804.__pad_3D[567]; /*0x5daa9a*/
    v15 = *(unsigned int *)&stru_A8D804.__pad_3D[567]; /*0x5daaa0*/
    while ( *(unsigned int *)(*(unsigned int *)v15 + 111) != v2 ) /*0x5daaa7*/
    {
      ++v13; /*0x5daaa9*/
      v15 += 4; /*0x5daaaa*/
      if ( v13 >= *(int *)&stru_A8D804.__pad_3D[579] ) /*0x5daaaf*/
        goto LABEL_54; /*0x5daaaf*/
    }
    v16 = 0; /*0x5daab9*/
    v17 = &stru_A8D804.__pad_3D[591]; /*0x5daabb*/
    while ( *(unsigned int *)v17 != *(unsigned int *)(*(unsigned int *)&stru_A8D804.__pad_3D[567] + 4 * v13) ) /*0x5daac2*/
    {
      v17 += 4; /*0x5daac4*/
      ++v16; /*0x5daac7*/
      if ( (int)v17 >= (int)&stru_A8D804.__pad_3D[623] ) /*0x5daacd*/
        goto LABEL_47; /*0x5daacd*/
    }
    *(unsigned int *)&stru_A8D804.__pad_3D[4 * v16 + 591] = g_HouseClass_ObserverFlags; /*0x5daad6*/
    v14 = *(void ***)&stru_A8D804.__pad_3D[567]; /*0x5daadd*/
LABEL_47:
    __3_YAXPAX_Z(v14[v13]); /*0x5daae3*/
    v18 = (*(int (**)(char *, int))(*(unsigned int *)&stru_A8D804.__pad_3D[563] + 16))( /*0x5dab03*/
            &stru_A8D804.__pad_3D[563],
            *(unsigned int *)&stru_A8D804.__pad_3D[567] + 4 * v13);
    if ( v18 != -1 && v18 < *(int *)&stru_A8D804.__pad_3D[579] ) /*0x5dab13*/
    {
      --*(unsigned int *)&stru_A8D804.__pad_3D[579]; /*0x5dab18*/
      for ( ; /*0x5dab1e*/
            v18 < *(int *)&stru_A8D804.__pad_3D[579];
            *(unsigned int *)(*(unsigned int *)&stru_A8D804.__pad_3D[567] + 4 * v18 - 4) = *(unsigned int *)(*(unsigned int *)&stru_A8D804.__pad_3D[567]
                                                                                         + 4 * v18) )
      {
        ++v18; /*0x5dab26*/
      }
    }
    Network_Disconnect_69BBF0((char *)&dword_A8B238, v13); /*0x5dab3e*/
    if ( *(unsigned int *)&dword_A8B238 == 4 ) /*0x5dab4a*/
    {
      if ( stru_A8D804.__pad_3D[863] ) /*0x5dab53*/
        NetworkManager::RemovePlayer((int)&dword_B052D0, v2); /*0x5dab5b*/
    }
  }
LABEL_54:
  --dword_A8B54C; /*0x5dab60*/

}
}
// 0x5DB720
namespace gamemd {
int CheckNetworkGameTimeout()
{

  int result; // eax
  int v2; // ebp
  signed int i; // edi
  int v4; // esi
  int v5; // eax
  int v6; // esi
  int v7; // ecx
  int v8; // esi
  int Ticks; // eax
  int v10; // eax
  int v11; // esi
  int v12; // edx
  unsigned int *v13; // eax
  GameSetup *v14; // [esp+0h] [ebp-1D8h]
  int v15[113]; // [esp+10h] [ebp-1C8h] BYREF
  __int16 v16; // [esp+1D4h] [ebp-4h]
  char v17; // [esp+1D6h] [ebp-2h]

  result = *(unsigned int *)&stru_A8D804.__pad_3D[555]; /*0x5db720*/
  v2 = 1; /*0x5db72c*/
  for ( i = 1; i < *(int *)&stru_A8D804.__pad_3D[555]; ++i ) /*0x5db737*/
  {
    if ( wcscmp(*(const wchar_t **)(*(unsigned int *)&stru_A8D804.__pad_3D[543] + 4 * i), (const wchar_t *)&stru_A8D610) ) /*0x5db74b*/
    {
      v4 = *(unsigned int *)&stru_887338.__pad_6[2]; /*0x5db760*/
      if ( *(unsigned int *)stru_887338.__pad_0 != -1 ) /*0x5db769*/
        v4 += Timer::GetTicks() - *(unsigned int *)stru_887338.__pad_0; /*0x5db77b*/
      if ( (unsigned int)(v4 - *(unsigned int *)(*(unsigned int *)(*(unsigned int *)&stru_A8D804.__pad_3D[543] + 4 * i) + 53)) > 0x12C ) /*0x5db78f*/
      {
        Debug::Log(); /*0x5db797*/
        __3_YAXPAX_Z(*(void **)(*(unsigned int *)&stru_A8D804.__pad_3D[543] + 4 * i)); /*0x5db7a5*/
        v5 = (*(int (**)(char *, int))(*(unsigned int *)&stru_A8D804.__pad_3D[539] + 16))( /*0x5db7c1*/
               &stru_A8D804.__pad_3D[539],
               *(unsigned int *)&stru_A8D804.__pad_3D[543] + 4 * i);
        if ( v5 != -1 ) /*0x5db7c7*/
          ((ObjectClass *)(ObjectClass *)&stru_A8D804.__pad_3D[539])->Network_Check(v5); /*0x5db7cf*/
        NetworkLobby::UpdatePlayerList(); /*0x5db7d4*/
        if ( i <= (int)g_NetworkSetupConfig ) /*0x5db7df*/
        {
          GameSetup::DisplayPlayers(v14); /*0x5db7e3*/
          SendNetworkHeartbeat(0, 1, 0, 0); /*0x5db7f0*/
        }
      }
    }
    result = *(unsigned int *)&stru_A8D804.__pad_3D[555]; /*0x5db7f5*/
  }
  if ( *(int *)&stru_A8D804.__pad_3D[531] > 1 ) /*0x5db809*/
  {
    do /*0x5db99b*/
    {
      if ( !*(unsigned int *)(*(unsigned int *)(*(unsigned int *)&stru_A8D804.__pad_3D[519] + 4 * v2) + 52) ) /*0x5db818*/
      {
        v6 = *(unsigned int *)&stru_887338.__pad_6[2]; /*0x5db824*/
        if ( *(unsigned int *)stru_887338.__pad_0 != -1 ) /*0x5db82d*/
          v6 += Timer::GetTicks() - *(unsigned int *)stru_887338.__pad_0; /*0x5db83f*/
        *(unsigned int *)(*(unsigned int *)(*(unsigned int *)&stru_A8D804.__pad_3D[519] + 4 * v2) + 52) = v6; /*0x5db849*/
      }
      v7 = *(unsigned int *)stru_887338.__pad_0; /*0x5db84c*/
      v8 = *(unsigned int *)&stru_887338.__pad_6[2]; /*0x5db852*/
      if ( *(unsigned int *)stru_887338.__pad_0 != -1 ) /*0x5db85b*/
      {
        Ticks = Timer::GetTicks(); /*0x5db862*/
        v7 = *(unsigned int *)stru_887338.__pad_0; /*0x5db867*/
        v8 += Ticks - *(unsigned int *)stru_887338.__pad_0; /*0x5db86f*/
      }
      if ( (unsigned int)(v8 - *(unsigned int *)(*(unsigned int *)(*(unsigned int *)&stru_A8D804.__pad_3D[519] + 4 * v2) + 52)) <= 0x168 ) /*0x5db882*/
      {
        v11 = *(unsigned int *)&stru_887338.__pad_6[2]; /*0x5db8e5*/
        if ( v7 != -1 ) /*0x5db8ee*/
          v11 += Timer::GetTicks() - *(unsigned int *)stru_887338.__pad_0; /*0x5db900*/
        v12 = *(unsigned int *)&stru_A8D804.__pad_3D[519]; /*0x5db902*/
        v13 = *(unsigned int **)(*(unsigned int *)&stru_A8D804.__pad_3D[519] + 4 * v2); /*0x5db908*/
        if ( v11 - v13[13] > 0x12C && !*((unsigned char *)v13 + 56) ) /*0x5db916*/
        {
          memset(v15, 0, sizeof(v15)); /*0x5db92c*/
          v16 = 0; /*0x5db92e*/
          v17 = 0; /*0x5db930*/
          strcpy((char *)&v15[1], unk_A8B380); /*0x5db954*/
          v15[0] = 5; /*0x5db95d*/
          Network::SendMessage( /*0x5db97d*/
            (int *)&stru_A8E960.nextScenario[96],
            (int)v15,
            455,
            0,
            *(unsigned int *)(v12 + 4 * v2) + 40,
            0,
            0);
          Event::Dispatch(); /*0x5db982*/
          *(unsigned char *)(*(unsigned int *)(*(unsigned int *)&stru_A8D804.__pad_3D[519] + 4 * v2) + 56) = 1; /*0x5db98f*/
        }
      }
      else
      {
        __3_YAXPAX_Z(*(void **)(*(unsigned int *)&stru_A8D804.__pad_3D[519] + 4 * v2)); /*0x5db887*/
        v10 = (*(int (**)(char *, int))(*(unsigned int *)&stru_A8D804.__pad_3D[515] + 16))( /*0x5db8a4*/
                &stru_A8D804.__pad_3D[515],
                *(unsigned int *)&stru_A8D804.__pad_3D[519] + 4 * v2);
        if ( v10 != -1 && v10 < *(int *)&stru_A8D804.__pad_3D[531] ) /*0x5db8b4*/
        {
          --*(unsigned int *)&stru_A8D804.__pad_3D[531]; /*0x5db8b9*/
          for ( ; /*0x5db8bf*/
                v10 < *(int *)&stru_A8D804.__pad_3D[531];
                *(unsigned int *)(*(unsigned int *)&stru_A8D804.__pad_3D[519] + 4 * v10 - 4) = *(unsigned int *)(*(unsigned int *)&stru_A8D804.__pad_3D[519]
                                                                                             + 4 * v10) )
          {
            ++v10; /*0x5db8c7*/
          }
        }
        GameSetup::DisplayPlayers(v14); /*0x5db8db*/
      }
      result = *(unsigned int *)&stru_A8D804.__pad_3D[531]; /*0x5db993*/
      ++v2; /*0x5db998*/
    }
    while ( v2 < *(int *)&stru_A8D804.__pad_3D[531] ); /*0x5db99b*/
  }
  return result; /*0x5db9a1*/

}
}
// 0x5DBE20
namespace gamemd {
void SetGameSetupPlayerState(char * a1, int a2)
{

  char *v3; // edi
  int v4; // ebx
  HWND v5; // eax
  char *v6; // eax
  int v7; // esi
  char *v8; // eax
  GameSetup *v9; // [esp+0h] [ebp-Ch]

  v3 = a1; /*0x5dbe23*/
  v4 = a2; /*0x5dbe27*/
  if ( !a1 ) /*0x5dbe29*/
  {
    v3 = unk_A8B380; /*0x5dbe2d*/
    if ( !a2 ) /*0x5dbe32*/
    {
      v5 = (HWND)Dialog::FindByHandle((Dialog *)0xBD); /*0x5dbe39*/
      EnablePlayerSlotControls(v5, 1u); /*0x5dbe42*/
    }
  }
  v6 = CharToWideString(v3); /*0x5dbe4e*/
  if ( !wcscmp((const wchar_t *)v6, (const wchar_t *)&stru_A8D610) ) /*0x5dbe54*/
    v4 = 1; /*0x5dbe60*/
  v7 = 0; /*0x5dbe6a*/
  if ( *(int *)&stru_A8D804.__pad_3D[579] > 0 ) /*0x5dbe6e*/
  {
    while ( 1 ) /*0x5dbe79*/
    {
      v8 = ToWideStringChar(*(char **)(*(unsigned int *)&stru_A8D804.__pad_3D[567] + 4 * v7)); /*0x5dbe79*/
      if ( !_strcmpi(v8, v3) ) /*0x5dbe7f*/
        break; /*0x5dbe7f*/
      if ( ++v7 >= *(int *)&stru_A8D804.__pad_3D[579] ) /*0x5dbe93*/
      {
        GameSetup::DisplayPlayers(v9); /*0x5dbe97*/
        return; /*0x5dbe9f*/
      }
    }
    if ( v7 != -1 ) /*0x5dbea3*/
      *(unsigned int *)(*(unsigned int *)(*(unsigned int *)&stru_A8D804.__pad_3D[567] + 4 * v7) + 119) = v4; /*0x5dbeae*/
  }
  GameSetup::DisplayPlayers(this); /*0x5dbeb6*/

}
}
// 0x5DBF50
namespace gamemd {
int UpdateMultiplayerPlayerOptions(CCINIClass * aP0, CCINIClass * aP1, CCINIClass * aP2, int a4, int a5)
{

  int v5; // edi
  int v7; // ebx
  char **v8; // esi
  char *v9; // eax
  HWND v11; // esi
  int *v12; // ebx
  int ResourceID2CSF; // ebx
  bool v14; // al
  int ResourceID3CSF; // eax
  int ResourceID4CSF; // eax
  int v17; // eax
  HWND DlgItem; // eax
  int ResourceIDCSF; // ebx
  int v20; // eax
  int v21; // eax
  int v22; // eax
  HWND v23; // eax
  int v24; // ebx
  GameSetup *v25; // [esp+0h] [ebp-1Ch]
  int v26; // [esp+10h] [ebp-Ch]
  int *v28; // [esp+18h] [ebp-4h]

  v5 = -1; /*0x5dbf57*/
  v7 = 0; /*0x5dbf60*/
  v8 = (char **)&stru_A8D804.__pad_3D[591]; /*0x5dbf62*/
  while ( 1 ) /*0x5dbf69*/
  {
    v9 = ToWideStringChar(*v8); /*0x5dbf69*/
    if ( !_strcmpi(v9, aP0) ) /*0x5dbf70*/
      break; /*0x5dbf70*/
    ++v8; /*0x5dbf7c*/
    ++v7; /*0x5dbf7f*/
    if ( (int)v8 >= (int)&stru_A8D804.__pad_3D[623] ) /*0x5dbf86*/
      goto LABEL_6; /*0x5dbf86*/
  }
  v5 = v7; /*0x5dbf8a*/
LABEL_6:
  v26 = 0; /*0x5dbf8c*/
  if ( v5 == -1 ) /*0x5dbf97*/
    return 0; /*0x5dbf9c*/
  v11 = (HWND)Dialog::FindByHandle((Dialog *)0xBC); /*0x5dbfaf*/
  if ( !v11 ) /*0x5dbfb3*/
    v11 = (HWND)Dialog::FindByHandle((Dialog *)0xBD); /*0x5dbfbf*/
  v12 = *(int **)&stru_A8D804.__pad_3D[4 * v5 + 591]; /*0x5dbfc1*/
  v28 = v12; /*0x5dbfca*/
  if ( SessionClass::GetPlayerSide(v12) != aP1 ) /*0x5dbfd9*/
  {
    v26 = 1; /*0x5dbfde*/
    SessionClass::SetPlayerOption(v12, aP1); /*0x5dbfe6*/
  }
  if ( SessionClass::GetOption(*(int **)&stru_A8D804.__pad_3D[4 * v5 + 591]) != a4 ) /*0x5dbffd*/
  {
    v26 = 1; /*0x5dc002*/
    SessionClass::SetOption(v12, a4); /*0x5dc00a*/
  }
  if ( SessionClass::GetOption2(*(SessionClass **)&stru_A8D804.__pad_3D[4 * v5 + 591]) != a5 ) /*0x5dc021*/
  {
    v26 = 1; /*0x5dc026*/
    SessionClass::SetOption2(v12, a5); /*0x5dc02e*/
  }
  ResourceID2CSF = GetResourceID2CSF((ObjectClass *)v5); /*0x5dc03a*/
  v14 = GetComboBoxSelected(v11, ResourceID2CSF, -1) == -3; /*0x5dc04a*/
  if ( aP1 == -3 ) /*0x5dc050*/
  {
    if ( !v14 ) /*0x5dc054*/
    {
      SetupComboBoxObserver(v11, ResourceID2CSF); /*0x5dc05e*/
      ResourceID3CSF = GetResourceID3CSF((ObjectClass *)v5); /*0x5dc065*/
      SetupComboBoxRandomAlliance(v11, ResourceID3CSF); /*0x5dc06e*/
      ResourceID4CSF = GetResourceID4CSF((ObjectClass *)v5); /*0x5dc075*/
      InitComboBoxNone(v11, ResourceID4CSF); /*0x5dc07e*/
      v17 = PlayerSlot::IndexToDlgID((PlayerSlot *)v5); /*0x5dc085*/
      DlgItem = GetDlgItem(v11, v17); /*0x5dc095*/
      SendMessageA(DlgItem, 0x4F1u, 0, 1); /*0x5dc09c*/
      ResourceIDCSF = GetResourceIDCSF((ObjectClass *)v5); /*0x5dc0a9*/
      FillListBox(v11, ResourceIDCSF); /*0x5dc0af*/
      SetupSkirmishSpawnLocations(v11, ResourceIDCSF, 8); /*0x5dc0b6*/
    }
  }
  else if ( v14 ) /*0x5dc0ba*/
  {
    FillComboBoxRandomOnly(v11, ResourceID2CSF); /*0x5dc0c0*/
    v20 = GetResourceID3CSF((ObjectClass *)v5); /*0x5dc0c7*/
    FillComboBoxAllianceSlots(v11, v20); /*0x5dc0d0*/
    v21 = GetResourceID4CSF((ObjectClass *)v5); /*0x5dc0d7*/
    FillLobbyPlayerSlot(v11, v21); /*0x5dc0e0*/
    v22 = PlayerSlot::IndexToDlgID((PlayerSlot *)v5); /*0x5dc0e7*/
    v23 = GetDlgItem(v11, v22); /*0x5dc0f7*/
    SendMessageA(v23, 0x4F1u, 0, 0); /*0x5dc0fe*/
    v24 = GetResourceIDCSF((ObjectClass *)v5); /*0x5dc10b*/
    FillComboBoxFactions(v11, v24); /*0x5dc111*/
    SetupSkirmishSpawnLocations(v11, v24, -2); /*0x5dc11c*/
  }
  if ( SessionClass::GetPlayerColor(*(SessionClass **)&stru_A8D804.__pad_3D[4 * v5 + 591]) != aP2 ) /*0x5dc133*/
    SessionClass::SetPlayerColor(v28, aP2); /*0x5dc13a*/
  if ( *(unsigned int *)&stru_A8D804.__pad_3D[4 * v5 + 591] == **(unsigned int **)&stru_A8D804.__pad_3D[567] ) /*0x5dc14e*/
    dword_A8B394 = aP2; /*0x5dc150*/
  GameSetup::DisplayPlayers(v25); /*0x5dc158*/
  return v26; /*0x5dbf99*/

}
}
// 0x5DF180
namespace gamemd {
int SkirmishDialogProc(SkirmishDialog * aP0, int a2, unsigned short a3, HWND a4)
{
  if ( !byte_AC0268 ) /*0x5df189*/
  {
    switch ( a2 ) /*0x5df198*/
    {
      case 273: /*0x5df198*/
        if ( a3 > 0x624u ) /*0x5df262*/
        {
        if ( a3 == 1690 ) /*0x5df395*/
        {
          g_abs_A8B263 = SendDlgItemMessageA(aP0, 1690, 0xF0u, 0, 0) == 1; /*0x5df3fb*/
        }
        else if ( a3 == 1693 ) /*0x5df39a*/
        {
          (*((unsigned char *)&(g_abs_A8B264))) = 0; /*0x5df3af*/
          if ( SendDlgItemMessageA(aP0, 1693, 0xF0u, 0, 0) == 1 ) /*0x5df3c3*/
          {
            (*((unsigned char *)&(g_abs_A8B264))) = 1; /*0x5df3c6*/
            return 0; /*0x5df3cf*/
          }
        }
      }
        else
        {
        switch ( a3 ) /*0x5df268*/
        {
          case 0x624u: /*0x5df268*/
            g_abs_A8B260 = 0; /*0x5df36d*/
            if ( SendDlgItemMessageA(aP0, 1572, 0xF0u, 0, 0) == 1 ) /*0x5df381*/
            {
            g_abs_A8B260 = 1; /*0x5df384*/
            return 0; /*0x5df38d*/
          }
            break;
          case 0x3E8u: /*0x5df268*/
            (*((unsigned char *)&(dword_A8B320))) = 0; /*0x5df333*/
            if ( SendDlgItemMessageA(aP0, 1000, 0xF0u, 0, 0) == 1 ) /*0x5df347*/
            {
            (*((unsigned char *)&(dword_A8B320))) = 1; /*0x5df34e*/
            return 0; /*0x5df357*/
          }
            break;
          case 0x54Du: /*0x5df268*/
            g_abs_A8B261 = 0; /*0x5df2f9*/
            if ( SendDlgItemMessageA(aP0, 1357, 0xF0u, 0, 0) == 1 ) /*0x5df30d*/
            {
            g_abs_A8B261 = 1; /*0x5df314*/
            return 0; /*0x5df31d*/
          }
            break;
          case 0x54Eu: /*0x5df268*/
            g_abs_A8B262 = 0; /*0x5df2a0*/
            if ( SendDlgItemMessageA(aP0, 1358, 0xF0u, 0, 0) == 1 ) /*0x5df2b0*/
            {
            g_abs_A8B262 = 1; /*0x5df2bb*/
            if ( !g_abs_A8B258 ) /*0x5df2c3*/
            {
              g_abs_A8B258 = 1; /*0x5df2d7*/
              SendDlgItemMessageA(aP0, 1355, 0xF1u, 1u, 0); /*0x5df2dd*/
              return 0; /*0x5df2e3*/
            }
          }
            break;
        }
      }
        break;
      case 276: /*0x5df198*/
        if ( GetDlgItem(aP0, 1321) == a4 ) /*0x5df1e3*/
          g_abs_A8B268 = 6 - SendDlgItemMessageA(aP0, 1321, 0x400u, 0, 0); /*0x5df1fd*/
        if ( GetDlgItem(aP0, 1026) == a4 ) /*0x5df20d*/
          g_abs_A8B25C = SendDlgItemMessageA(aP0, 1026, 0x400u, 0, 0); /*0x5df220*/
        if ( GetDlgItem(aP0, 1359) == a4 ) /*0x5df231*/
        {
        g_abs_A8B270 = SendDlgItemMessageA(aP0, 1359, 0x400u, 0, 0); /*0x5df248*/
        return 0; /*0x5df251*/
      }
        break;
      case 1175: /*0x5df198*/
        InitSkirmishDialogControls(aP0, 1); /*0x5df1b7*/
        return 0; /*0x5df1c0*/
    }
  }
  return 0; /*0x5df1bc*/
}
}
// 0x5DF410
namespace gamemd {
int Network_SendJoinRequest(int a1, unsigned char a2)
{
  wchar_t *String; // eax
  wchar_t *v5; // eax

  int v10; // [esp+14h] [ebp-1D8h]
  v10 = a1; /*0x5df41f*/
  if ( a1 < 1 ) /*0x5df423*/
  {
    String = GetStringCSF(aTxtMustSelectG, 0, g_Str_File_netdlg2_cpp, 3712); /*0x5df436*/
    Dialog::ShowMessage(-1, (size_t)String); /*0x5df442*/
    PlayVocClass(dword_8871E0->MovieOff, 0x2000, 1.0, 0); /*0x5df462*/
    return 0; /*0x5df473*/
  }
  if ( dword_A8DA6C <= 1 || a1 > dword_A8DA6C ) /*0x5df484*/
  {
    v5 = GetStringCSF(aTxtNothingToJo, 0, g_Str_File_netdlg2_cpp, 3719); /*0x5df87b*/
  }
  else if ( strlen(unk_A8B380) ) /*0x5df48f*/
  {
    char v6; // bl
    void *v9; // [esp+10h] [ebp-1DCh] BYREF
    if ( !strcmp(unk_A8B380, ToWideStringChar((char *)dword_AC117C)) /*0x5df6c6*/
      || !strcmp(unk_A8B380, ToWideStringChar((char *)dword_AC1180))
      || !strcmp(unk_A8B380, ToWideStringChar((char *)dword_AC1184))
      || !strcmp(unk_A8B380, ToWideStringChar((char *)dword_AC1188))
      || !strcmp(unk_A8B380, ToWideStringChar((char *)dword_AC118C))
      || !strcmp(unk_A8B380, ToWideStringChar((char *)dword_AC1190))
      || !strcmp(unk_A8B380, ToWideStringChar((char *)dword_AC1194))
      || (((String *)((char **)&v9))->Assign(unk_A8B380), v6 = Network_Send(&v9), DeleteAndZero(&v9), v6) )
    {
      wchar_t *v8; // eax
      v8 = GetStringCSF(aErrorNameisres, 0, g_Str_File_netdlg2_cpp, 3742); /*0x5df82c*/
      Dialog::ShowMessage(-1, (size_t)v8); /*0x5df838*/
      PlayVocClass(dword_8871E0->MovieOff, 0x2000, 1.0, 0); /*0x5df858*/
      return 0; /*0x5df869*/
    }
    int v7 = v10; // ebx /*0x5df6d1*/
    if ( *(unsigned char *)(*(unsigned int *)(dword_A8DA60 + 4 * v10) + 52) ) /*0x5df6d8*/
    {
      unsigned int v12[113]; // [esp+24h] [ebp-1C8h] BYREF
      memset(v12, 0, sizeof(v12)); /*0x5df704*/
      int16_t v13; // [esp+1E8h] [ebp-4h]
      v13 = 0; /*0x5df706*/
      char v14; // [esp+1EAh] [ebp-2h]
      v14 = 0; /*0x5df708*/
      v12[0] = 6; /*0x5df713*/
      strcpy((char *)&v12[1], unk_A8B380); /*0x5df72e*/
      strcpy((char *)&v12[6], byte_ABFF7C); /*0x5df750*/
      *(unsigned int *)((char *)&v12[11] + 3) = Session::GetPlayerOption(dword_A8B238); /*0x5df768*/
      *(unsigned int *)((char *)&v12[12] + 3) = Session::GetPlayerColor(dword_A8B238); /*0x5df776*/
      *(unsigned int *)((char *)&v12[14] + 3) = NetworkBuffer::GetField2(&dword_A8ECE0); /*0x5df784*/
      *(unsigned int *)((char *)&v12[15] + 3) = NetworkBuffer::GetField3(&dword_A8ECE0); /*0x5df799*/
      *(unsigned int *)((char *)&v12[16] + 3) = dword_AC026C; /*0x5df7a2*/
      *(unsigned int *)((char *)&v12[18] + 3) = dword_AC0270; /*0x5df7a6*/
      *(unsigned int *)((char *)&v12[17] + 3) = dword_AC0274; /*0x5df7aa*/
      *(unsigned int *)((char *)&v12[19] + 3) = GameOptions::GetEntry(); /*0x5df7bf*/
      *(unsigned int *)((char *)&v12[21] + 3) = a2; /*0x5df7c3*/
      Network::SendMessage((int)unk_A8E9C0, (int)v12, 455, 1, *(unsigned int *)(dword_A8DA60 + 4 * v7) + 40, 0, 0); /*0x5df7e3*/
      dword_AC0230 = TimerGetTicks(); /*0x5df7fa*/
      int v11; // [esp+1Ch] [ebp-1D0h]
      dword_AC0234 = v11; /*0x5df800*/
      dword_AC0238 = 600; /*0x5df806*/
      return 1; /*0x5df81a*/
    }
    v5 = GetStringCSF((char *)aTxtGameIsClose, 0, g_Str_File_netdlg2_cpp, 3750); /*0x5df6f0*/
  }
  else
  {
    v5 = GetStringCSF((char *)g_Str_TXT_NAME_ERROR, 0, g_Str_File_netdlg2_cpp, 3727); /*0x5df4ac*/
  }
  Dialog::ShowMessage(-1, (size_t)v5); /*0x5df888*/
  PlayVocClass(dword_8871E0->MovieOff, 0x2000, 1.0, 0); /*0x5df8a7*/
  return 0; /*0x5df469*/
}
}
// 0x5DF9E0
namespace gamemd {
int Network_SendHeartbeat(int a1, int a2, int a3, int a4)
{
  int Ticks; // eax
  int v6; // esi
  int v7; // eax
  int v8; // esi
  int v9; // eax
  int result; // eax
  int v11; // esi
  unsigned int v12; // edx
  int v13; // [esp+10h] [ebp-1D4h]
  unsigned int v15[113]; // [esp+1Ch] [ebp-1C8h] BYREF
  int16_t v16; // [esp+1E0h] [ebp-4h]
  char v17; // [esp+1E2h] [ebp-2h]

  if ( (byte_AC01BC & 1) == 0 ) /*0x5df9fb*/
  {
    byte_AC01BC |= 1u; /*0x5dfa06*/
    dword_AC0220 = TimerGetTicks(); /*0x5dfa11*/
    dword_AC0228 = 0; /*0x5dfa16*/
    atexit(nullsub_27); /*0x5dfa21*/
  }
  if ( (byte_AC01BC & 2) == 0 ) /*0x5dfa30*/
  {
    byte_AC01BC |= 2u; /*0x5dfa3c*/
    dword_AC0200 = TimerGetTicks(); /*0x5dfa47*/
    dword_AC0208 = 0; /*0x5dfa4c*/
    atexit(nullsub_26); /*0x5dfa57*/
  }
  if ( (byte_AC01BC & 4) == 0 ) /*0x5dfa66*/
  {
    byte_AC01BC |= 4u; /*0x5dfa72*/
    dword_ABFF70 = TimerGetTicks(); /*0x5dfa7d*/
    dword_ABFF78 = 0; /*0x5dfa82*/
    atexit(nullsub_25); /*0x5dfa8d*/
  }
  if ( a4 ) /*0x5dfa9c*/
  {
    dword_AC0220 = TimerGetTicks(); /*0x5dfaac*/
    dword_AC0228 = 120; /*0x5dfab5*/
    dword_AC0224 = v13; /*0x5dfabf*/
    Ticks = TimerGetTicks(); /*0x5dfac4*/
    dword_AC0208 = 35; /*0x5dfad2*/
    dword_AC0200 = Ticks; /*0x5dfadc*/
    dword_AC0204 = v13; /*0x5dfae1*/
    dword_ABFF70 = TimerGetTicks(); /*0x5dfaec*/
    dword_ABFF74 = v13; /*0x5dfafa*/
    dword_ABFF78 = 83; /*0x5dfaff*/
  }
  v6 = dword_AC0228; /*0x5dfb0a*/
  if ( dword_AC0220 == -1 ) /*0x5dfb13*/
  {
    LABEL_12:
    if ( v6 && !a1 ) /*0x5dfb31*/
      goto LABEL_18; /*0x5dfb31*/
    goto LABEL_14; /*0x5dfb31*/
  }
  v7 = TimerGetTicks() - dword_AC0220; /*0x5dfb1f*/
  if ( v7 < v6 ) /*0x5dfb27*/
  {
    v6 -= v7; /*0x5dfb29*/
    goto LABEL_12; /*0x5dfb29*/
  }
  LABEL_14:
  dword_AC0220 = TimerGetTicks(); /*0x5dfb37*/
  dword_AC0224 = v13; /*0x5dfb4e*/
  dword_AC0228 = 120; /*0x5dfb54*/
  if ( Dialog::GetCurrentType() != 188 || a1 ) /*0x5dfb68*/
  {
    memset(v15, 0, sizeof(v15)); /*0x5dfb79*/
    v16 = 0; /*0x5dfb7b*/
    v17 = 0; /*0x5dfb7d*/
    v15[0] = 0; /*0x5dfb88*/
    strcpy((char *)&v15[1], unk_A8B380); /*0x5dfb9d*/
    Network::SendMessage((int)unk_A8E9C0, (int)v15, 455, 0, 0, 0, 0); /*0x5dfbb7*/
    if ( dword_A8D5FC ) /*0x5dfbc2*/
      Network::SendMessage((int)unk_A8E9C0, (int)v15, 455, 0, (int)&stru_A8D600, 0, 0); /*0x5dfbdb*/
  }
  LABEL_18:
  if ( (int)g_NetworkSetupConfig <= 0 || (int)g_NetworkSetupConfig >= dword_A8DA6C ) /*0x5dfbef*/
  {
    LABEL_24:
    if ( !a2 ) /*0x5dfc1f*/
      goto LABEL_27; /*0x5dfc1f*/
    goto LABEL_25; /*0x5dfc1f*/
  }
  v8 = dword_AC0208; /*0x5dfbf6*/
  if ( dword_AC0200 != -1 ) /*0x5dfbff*/
  {
    v9 = TimerGetTicks() - dword_AC0200; /*0x5dfc0b*/
    if ( v9 >= v8 ) /*0x5dfc13*/
      goto LABEL_25; /*0x5dfc13*/
    v8 -= v9; /*0x5dfc15*/
  }
  if ( v8 ) /*0x5dfc19*/
    goto LABEL_24; /*0x5dfc19*/
  LABEL_25:
  dword_AC0200 = TimerGetTicks(); /*0x5dfc25*/
  dword_AC0204 = v13; /*0x5dfc3c*/
  dword_AC0208 = 35; /*0x5dfc41*/
  memset(v15, 0, sizeof(v15)); /*0x5dfc52*/
  v16 = 0; /*0x5dfc60*/
  v17 = 0; /*0x5dfc62*/
  v15[0] = 2; /*0x5dfc63*/
  strcpy((char *)&v15[1], ToWideStringChar(*(char **)(dword_A8DA60 + 4 * g_NetworkSetupConfig))); /*0x5dfc8f*/
  Network::SendMessage((int)unk_A8E9C0, (int)v15, 455, 0, 0, 0, 0); /*0x5dfca9*/
  if ( dword_A8D5FC ) /*0x5dfcb4*/
    Network::SendMessage((int)unk_A8E9C0, (int)v15, 455, 0, (int)&stru_A8D600, 0, 0); /*0x5dfccd*/
  LABEL_27:
  result = dword_ABFF70; /*0x5dfcd2*/
  v11 = dword_ABFF78; /*0x5dfcd7*/
  if ( dword_ABFF70 != -1 ) /*0x5dfce0*/
  {
    result = TimerGetTicks() - dword_ABFF70; /*0x5dfcec*/
    if ( result >= v11 ) /*0x5dfcf4*/
      goto LABEL_31; /*0x5dfcf4*/
    v11 -= result; /*0x5dfcf6*/
  }
  if ( v11 ) /*0x5dfcfa*/
    goto LABEL_32; /*0x5dfcfa*/
  LABEL_31:
  if ( g_NetworkSettingsState >= 2 ) /*0x5dfd03*/
  {
    LABEL_32:
    if ( !a3 ) /*0x5dfd0c*/
      return result; /*0x5dfd0c*/
  }
  dword_ABFF70 = TimerGetTicks(); /*0x5dfd12*/
  dword_ABFF74 = v13; /*0x5dfd29*/
  dword_ABFF78 = 83; /*0x5dfd2e*/
  memset(v15, 0, sizeof(v15)); /*0x5dfd3f*/
  v16 = 0; /*0x5dfd41*/
  v17 = 0; /*0x5dfd43*/
  v15[0] = 4; /*0x5dfd58*/
  v12 = dword_A8B394; /*0x5dfd66*/
  strcpy((char *)&v15[1], unk_A8B380); /*0x5dfd6f*/
  *(unsigned int *)((char *)&v15[11] + 3) = dword_A8B37C; /*0x5dfd86*/
  *(unsigned int *)((char *)&v15[12] + 3) = v12; /*0x5dfd95*/
  result = Network::SendMessage((int)unk_A8E9C0, (int)v15, 455, 0, 0, 0, 0); /*0x5dfd99*/
  if ( dword_A8D5FC ) /*0x5dfda4*/
    return Network::SendMessage((int)unk_A8E9C0, (int)v15, 455, 0, (int)&stru_A8D600, 0, 0); /*0x5dfdbd*/
  return result; /*0x5dfdc2*/
}
}
// 0x5DFE00
namespace gamemd {
int Network_SendPlayerOptions(unsigned int * a1, int a2)
{
  int v9[113]; // [esp+10h] [ebp-1C8h] BYREF
  int16_t v10; // [esp+1D4h] [ebp-4h]
  char v11; // [esp+1D6h] [ebp-2h]

  if ( *a1 || byte_A8D60C ) /*0x5dfe1e*/
  {
    if ( *a1 != 2 ) /*0x5dff1a*/
      return 0; /*0x5dff1a*/
    char *v6; // ebx
    v6 = (char *)(a1 + 1); /*0x5dff20*/
    char *v7; // eax
    v7 = ToWideStringChar((char *)word_A8D610); /*0x5dff28*/
    if ( _strcmpi(v6, v7) || !wcslen(word_A8D610) || byte_A8D60C || g_NetworkSettingsState < 2 ) /*0x5dff68*/
    {
      return 0; /*0x5e00a0*/
    }
    else
    {
      memset(v9, 0, sizeof(v9)); /*0x5dff7d*/
      v10 = 0; /*0x5dff7f*/
      v11 = 0; /*0x5dff81*/
      v9[0] = 3; /*0x5dff8c*/
      strcpy((char *)&v9[1], unk_A8B380); /*0x5dffa7*/
      strcpy((char *)&v9[6], byte_ABFF7C); /*0x5dffc9*/
      *(int *)((char *)&v9[11] + 3) = Session::GetPlayerOption(dword_A8B238); /*0x5dffe1*/
      *(int *)((char *)&v9[12] + 3) = Session::GetPlayerColor(dword_A8B238); /*0x5dffef*/
      *(int *)((char *)&v9[13] + 3) = WideString::Hash(word_A8D610); /*0x5dfffe*/
      *(int *)((char *)&v9[20] + 3) = dword_A8DA8C; /*0x5e0009*/
      *(int *)((char *)&v9[21] + 3) = dword_A8DA8C == (unsigned int)g_MPCooperativeState; /*0x5e0019*/
      if ( dword_A8DA84 ) /*0x5e001d*/
      {
        if ( *(unsigned int *)(*(unsigned int *)dword_A8DA78 + 107) != -1 ) /*0x5e0038*/
          *(int *)((char *)&v9[21] + 3) = 0; /*0x5e003a*/
        Network::SendMessage(unk_A8E9C0, (int)v9, 455, 1, a2, 0, 0); /*0x5e0058*/
        char *v8; // eax
        v8 = ToWideStringChar(*(char **)dword_A8DA78); /*0x5e0065*/
        if ( !_strcmpi(v6, v8) ) /*0x5e006c*/
        {
          CheckGameSettingsChanged(1, 1); /*0x5e007c*/
          if ( dword_A8B23C ) /*0x5e0089*/
            (*(void (**)(int))(*(unsigned int *)dword_A8B23C + 96))(dword_A8B23C); /*0x5e008d*/
        }
        return 1; /*0x5e0093*/
      }
      else
      {
        return 1; /*0x5e0022*/
      }
    }
  }
  else
  {
    if ( wcslen(word_A8D610) ) /*0x5dfe29*/
    {
      char *v3; // eax
      if ( !byte_A8D60E || (v3 = ToWideStringChar((char *)word_A8D610), !_strcmpi(unk_A8B380, v3)) ) /*0x5dfe52*/
      {
        char *v4; // eax
        v4 = ToWideStringChar((char *)word_A8D610); /*0x5dfe67*/
        if ( _strcmpi(unk_A8B380, v4) && !byte_A8ED5C ) /*0x5dfe85*/
          return 1; /*0x5dfe93*/
        memset(v9, 0, sizeof(v9)); /*0x5dfe9f*/
        v10 = 0; /*0x5dfea1*/
        v11 = 0; /*0x5dfea3*/
        v9[0] = 1; /*0x5dfea9*/
        strcpy((char *)&v9[1], ToWideStringChar((char *)word_A8D610)); /*0x5dfed4*/
        *(int *)((char *)&v9[11] + 3) = *(int *)((char *)&v9[11] + 3) & 0xFFFFFFFE | byte_A8D60E & 1; /*0x5dfef6*/
        Network::SendMessage(unk_A8E9C0, (int)v9, 455, 1, a2, 0, 0); /*0x5dff05*/
      }
    }
    return 1; /*0x5dff0d*/
  }
}
}
// 0x5D0590
namespace gamemd {
int ObjectClass::nullsub_24()
{

  int result; // eax
  return result; /*0x5d0590*/
}
} // namespace gamemd

// 0x5D30C0
namespace gamemd {
unsigned int * E4Recv_5D30C0::sub_5D30C0(wchar_t * String, unsigned int * a3)
{


  wchar_t *v3 = String; // esi /*0x5d30c3*/
  int v4 = 0; // ebx /*0x5d30c7*/
  int v10; // [esp+Ch] [ebp-4h]
  v10 = 0; /*0x5d30ce*/
  int v6; // eax
  if ( String && (v6 = wcslen(String)) != 0 ) /*0x5d30df*/
  {
    char *ptr_4; // ebp
    ptr_4 = (char *)this->M8; /*0x5d30e2*/
    while ( 1 ) /*0x5d30e9*/
    {
      for ( LOWORD(v6) = *v3; *v3; LOWORD(v6) = *v3 ) /*0x5d30e9*/
      {
        if ( (unsigned short)v6 == 10 ) /*0x5d30f5*/
          break; /*0x5d30f5*/
        ++v3; /*0x5d30fc*/
        v6 = (*((int (**)(ObjectClass *, int))this->AbstractClass + 1))(this, v6); /*0x5d30ff*/
        v4 += v6; /*0x5d3102*/
      }
      if ( v4 > v10 ) /*0x5d3110*/
        v10 = v4; /*0x5d3112*/
      if ( *v3 == 10 ) /*0x5d311a*/
      {
        v6 = (int)this->M8; /*0x5d311c*/
        ++v3; /*0x5d311f*/
        ptr_4 += v6; /*0x5d3122*/
      }
      if ( !*v3 ) /*0x5d3124*/
        break; /*0x5d3124*/
      v4 = 0; /*0x5d30e7*/
    }
    char *ptr_0; // edi
    ptr_0 = (char *)this->M4; /*0x5d312a*/
    a3[3] = ptr_4; /*0x5d3137*/
    a3[2] = &ptr_0[v10]; /*0x5d313a*/
    *a3 = 0; /*0x5d3140*/
    a3[1] = 0; /*0x5d3146*/
    return a3; /*0x5d3133*/
  }
  else
  {
    *a3 = 0; /*0x5d3158*/
    a3[1] = 0; /*0x5d315a*/
    a3[2] = 0; /*0x5d315d*/
    a3[3] = 0; /*0x5d3160*/
    return a3; /*0x5d3152*/
  }

}
} // namespace gamemd

// 0x5D36A0
namespace gamemd {
int sub_5D36A0(HWND hWnd, unsigned int a2, unsigned int a3, int * a4)
{

  int result; // eax
  result = BaseDialogProc(hWnd, a2, a3, (unsigned int)a4); /*0x5d36ba*/
  if ( !result ) /*0x5d36c1*/
  {
    if ( a2 == 273 ) /*0x5d36cd*/
    {
      unsigned int v5; // esi
      v5 = (*(((unsigned short *)&(a3)) + 1)); /*0x5d36f2*/
      unsigned int *WindowLongA; // eax
      WindowLongA = (unsigned int *)GetWindowLongA(hWnd, 8); /*0x5d36f5*/
      if ( (uint16_t)a3 > 0x5AEu ) /*0x5d3709*/
      {
        if ( (uint16_t)a3 == 1455 && !v5 ) /*0x5d3742*/
          *WindowLongA = 2; /*0x5d3744*/
      }
      else if ( (uint16_t)a3 == 1454 ) /*0x5d370b*/
      {
        if ( !v5 ) /*0x5d372b*/
        {
          *WindowLongA = 0; /*0x5d372d*/
          return 0; /*0x5d3735*/
        }
      }
      else if ( (unsigned short)a3 && (uint16_t)a3 <= 2u && !v5 ) /*0x5d3718*/
      {
        *WindowLongA = 1; /*0x5d371c*/
        return 0; /*0x5d3726*/
      }
    }
    else if ( a2 == 534 ) /*0x5d36d5*/
    {
      return (uint8_t)Window::ClampToScreen(a4); /*0x5d36ea*/
    }
    return 0; /*0x5d374a*/
  }
  return result; /*0x5d36e1*/
}
} // namespace gamemd

// 0x5D37C0
namespace gamemd {
int sub_5D37C0()
{
  dword_ABFC18 = 0; /*0x5d37c2*/
  dword_ABFC1C = 0; /*0x5d37c7*/
  dword_ABFC20 = 0; /*0x5d37cc*/
  dword_ABFC24 = 0; /*0x5d37d1*/
  return 0; /*0x5d37d6*/
}
} // namespace gamemd

// 0x5D37E0
namespace gamemd {
void sub_5D37E0()
{

  long double v0; // st7
  v0 = pow(256.0, 2.0); /*0x5d37ec*/
  dbl_ABFC30 = Math::Sqrt(v0 + v0); /*0x5d37fe*/
}
} // namespace gamemd

// 0x5D3850
namespace gamemd {
void sub_5D3850()
{
  dbl_ABFC60 = 0.0174532925199433 * 45.0; /*0x5d385c*/
}
} // namespace gamemd

// 0x5D3870
namespace gamemd {
void sub_5D3870()
{
  dbl_ABFC38 = 0.0174532925199433 * 60.0; /*0x5d387c*/
}
} // namespace gamemd

// 0x5D3890
namespace gamemd {
void sub_5D3890()
{
  dbl_ABFC10 = 0.0174532925199433 * 90.0; /*0x5d389c*/
}
} // namespace gamemd

// 0x5D38B0
namespace gamemd {
long long sub_5D38B0()
{

  double v0; // st7
  v0 = Math::Sin(dbl_ABFC10 - dbl_ABFC38); /*0x5d38c2*/
  int64_t result; // rax
  result = Math::RoundToInt(v0 * dbl_ABFC30 * 0.5); /*0x5d38d6*/
  dword_ABFC88 = result; /*0x5d38db*/
  return result; /*0x5d38e0*/
}
} // namespace gamemd

// 0x5D4C90
namespace gamemd {
void sub_5D4C90()
{
  dword_ABFC90 = (int)&g_ptr_7E8500; /*0x5d4c98*/
  if ( dword_ABFC94 && byte_ABFC9D ) /*0x5d4cac*/
  {
    operator delete((void *)(dword_ABFC94)); /*0x5d4caf*/
    dword_ABFC94 = 0; /*0x5d4cb7*/
  }
  byte_ABFC9D = 0; /*0x5d4cbd*/
  dword_ABFC98 = 0; /*0x5d4cc3*/
}
} // namespace gamemd

// 0x5D4D10
namespace gamemd {
void sub_5D4D10()
{
  dword_ABFCB8 = (int)&g_ptr_7E8500; /*0x5d4d18*/
  if ( dword_ABFCBC && byte_ABFCC5 ) /*0x5d4d2c*/
  {
    operator delete((void *)(dword_ABFCBC)); /*0x5d4d2f*/
    dword_ABFCBC = 0; /*0x5d4d37*/
  }
  byte_ABFCC5 = 0; /*0x5d4d3d*/
  dword_ABFCC0 = 0; /*0x5d4d43*/
}
} // namespace gamemd

// 0x5D5860
namespace gamemd {
void nullsub_192(int a1)
{
  ; /*0x5d5860*/
}
} // namespace gamemd

// 0x5D5890
namespace gamemd {
int timeGetTime()
{
  return __imp_timeGetTime();
}
} // namespace gamemd

// 0x5D58A0
namespace gamemd {
int _0timeGetTime()
{
  return timeGetTime();
}
} // namespace gamemd

// 0x5D5940
namespace gamemd {
void sub_5D5940()
{
  dbl_ABFD60 = 0.0174532925199433 * 60.0; /*0x5d594c*/
}
} // namespace gamemd

// 0x5D5960
namespace gamemd {
void sub_5D5960()
{
  dbl_ABFD38 = 0.0174532925199433 * 90.0; /*0x5d596c*/
}
} // namespace gamemd

// 0x5D5980
namespace gamemd {
long long sub_5D5980()
{

  double v0; // st7
  v0 = Math::Sin(dbl_ABFD38 - dbl_ABFD60); /*0x5d5992*/
  int64_t result; // rax
  result = Math::RoundToInt(v0 * dbl_ABFD58 * 0.5); /*0x5d59a6*/
  dword_ABFDD0 = result; /*0x5d59ab*/
  return result; /*0x5d59b0*/
}
} // namespace gamemd

// 0x5D59C0
namespace gamemd {
void sub_5D59C0()
{
  dbl_ABFD68 = Math::ArcTan((double)dword_ABFDD0 * 0.00390625); /*0x5d59d7*/
}
} // namespace gamemd

// 0x5D59F0
namespace gamemd {
void sub_5D59F0()
{
  dbl_ABFD88 = Math::ArcTan((double)(2 * dword_ABFDD0) / dbl_ABFD58); /*0x5d5a12*/
}
} // namespace gamemd

// 0x5D5A50
namespace gamemd {
int sub_5D5A50()
{
  word_ABFD50 = 0; /*0x5d5a52*/
  word_ABFD52 = 0; /*0x5d5a58*/
  return 0; /*0x5d5a5e*/
}
} // namespace gamemd

// 0x5D5A60
namespace gamemd {
int sub_5D5A60()
{
  dword_ABFD78 = 0; /*0x5d5a62*/
  dword_ABFD7C = 0; /*0x5d5a67*/
  dword_ABFD80 = 0; /*0x5d5a6c*/
  return 0; /*0x5d5a71*/
}
} // namespace gamemd

// 0x5D5A80
namespace gamemd {
int sub_5D5A80()
{
  dword_ABFDC0 = 0; /*0x5d5a85*/
  dword_ABFDB8 = 128; /*0x5d5a8f*/
  dword_ABFDBC = 128; /*0x5d5a94*/
  return 128; /*0x5d5a99*/
}
} // namespace gamemd

// 0x5D5AA0
namespace gamemd {
int sub_5D5AA0()
{
  dword_ABFD40 = 0; /*0x5d5aa2*/
  dword_ABFD44 = 0; /*0x5d5aa7*/
  dword_ABFD48 = 0; /*0x5d5aac*/
  dword_ABFD4C = 0; /*0x5d5ab1*/
  return 0; /*0x5d5ab6*/
}
} // namespace gamemd

// 0x5D7550
namespace gamemd {
int sub_5D7550(int a1)
{
  return *(unsigned int *)(*&dword_A8022C->ptr_0 + 90204); /*0x5d7563*/
}
} // namespace gamemd

// 0x5D7580
namespace gamemd {
unsigned int * E4Recv_5D7580::sub_5D7580()
{
  /* X11: ptr_0 install elided (implicit via MultiplayerGameModeInitializerBase virtuals 0x5d7582) */
  return &this->ptr_0; /*0x5d7588*/
}
} // namespace gamemd

// 0x5D7CD0
namespace gamemd {
void E4Recv_5D7CD0::sub_5D7CD0()
{
  /* X11: ptr_0 install elided (X67 star-deref, RHS g_var_1d2f86) */  /*0x5d7cd0*/
}
} // namespace gamemd

// 0x5D7FF0
namespace gamemd {
unsigned int * E4Recv_5D7FF0::___Gfacet_locale_std__UAEPAXI_Z_127(unsigned int * Block, char a2)
{
  /* X11: ptr_0 install elided (X67 star-deref, RHS g_var_1d2f86) */  /*0x5d7ff9*/
  if ( (a2 & 1) != 0 ) /*0x5d7fff*/
    operator delete((Block)); /*0x5d8002*/
  return Block; /*0x5d800c*/
}
} // namespace gamemd

// 0x5D8010
namespace gamemd {
unsigned int * E4Recv_5D8010::___Gfacet_locale_std__UAEPAXI_Z_128(unsigned int * Block, char a2)
{
  /* X11: ptr_0 install elided (X67 star-deref, RHS g_var_1d2f86) */  /*0x5d8019*/
  if ( (a2 & 1) != 0 ) /*0x5d801f*/
    operator delete((Block)); /*0x5d8022*/
  return Block; /*0x5d802c*/
}
} // namespace gamemd

// 0x5D8A40
namespace gamemd {
int sub_5D8A40()
{
  dword_ABFDE0 = 0; /*0x5d8a42*/
  dword_ABFDE4 = 0; /*0x5d8a47*/
  dword_ABFDE8 = 0; /*0x5d8a4c*/
  dword_ABFDEC = 0; /*0x5d8a51*/
  return 0; /*0x5d8a56*/
}
} // namespace gamemd

// 0x5D8A60
namespace gamemd {
void sub_5D8A60()
{

  long double v0; // st7
  v0 = pow(256.0, 2.0); /*0x5d8a6c*/
  dbl_ABFDF8 = Math::Sqrt(v0 + v0); /*0x5d8a7e*/
}
} // namespace gamemd

// 0x5D8A90
namespace gamemd {
void sub_5D8A90()
{
  dbl_ABFE48 = dbl_ABFDF8 / 60.0; /*0x5d8a9c*/
}
} // namespace gamemd

// 0x5D8AB0
namespace gamemd {
void sub_5D8AB0()
{
  dbl_ABFE30 = 1.0 / dbl_ABFE48; /*0x5d8abc*/
}
} // namespace gamemd

// 0x5D8AD0
namespace gamemd {
void sub_5D8AD0()
{
  dbl_ABFE28 = 0.0174532925199433 * 45.0; /*0x5d8adc*/
}
} // namespace gamemd

// 0x5D8AF0
namespace gamemd {
void sub_5D8AF0()
{
  dbl_ABFE00 = 0.0174532925199433 * 60.0; /*0x5d8afc*/
}
} // namespace gamemd

// 0x5D8B10
namespace gamemd {
void sub_5D8B10()
{
  dbl_ABFDD8 = 0.0174532925199433 * 90.0; /*0x5d8b1c*/
}
} // namespace gamemd

// 0x5D8B30
namespace gamemd {
long long sub_5D8B30()
{

  double v0; // st7
  v0 = Math::Sin(dbl_ABFDD8 - dbl_ABFE00); /*0x5d8b42*/
  int64_t result; // rax
  result = Math::RoundToInt(v0 * dbl_ABFDF8 * 0.5); /*0x5d8b56*/
  dword_ABFE50 = result; /*0x5d8b5b*/
  return result; /*0x5d8b60*/
}
} // namespace gamemd

// 0x5D8B70
namespace gamemd {
void sub_5D8B70()
{
  dbl_ABFE08 = Math::ArcTan((double)dword_ABFE50 * 0.00390625); /*0x5d8b87*/
}
} // namespace gamemd

// 0x5D8BA0
namespace gamemd {
void sub_5D8BA0()
{
  dbl_ABFE20 = Math::ArcTan((double)(2 * dword_ABFE50) / dbl_ABFDF8); /*0x5d8bc2*/
}
} // namespace gamemd

// 0x5D8BD0
namespace gamemd {
long long sub_5D8BD0()
{

  int64_t result; // rax
  result = Math::RoundToInt((double)(4 * dword_ABFE50) + 0.5); /*0x5d8beb*/
  dword_ABFE44 = result; /*0x5d8bf0*/
  return result; /*0x5d8bf6*/
}
} // namespace gamemd

// 0x5D8C00
namespace gamemd {
int sub_5D8C00()
{
  word_ABFDF0 = 0; /*0x5d8c02*/
  word_ABFDF2 = 0; /*0x5d8c08*/
  return 0; /*0x5d8c0e*/
}
} // namespace gamemd

// 0x5D8C10
namespace gamemd {
int sub_5D8C10()
{
  dword_ABFE10 = 0; /*0x5d8c12*/
  dword_ABFE14 = 0; /*0x5d8c17*/
  dword_ABFE18 = 0; /*0x5d8c1c*/
  return 0; /*0x5d8c21*/
}
} // namespace gamemd

// 0x5D8C30
namespace gamemd {
int sub_5D8C30()
{
  dword_ABFE40 = 0; /*0x5d8c35*/
  dword_ABFE38 = 128; /*0x5d8c3f*/
  dword_ABFE3C = 128; /*0x5d8c44*/
  return 128; /*0x5d8c49*/
}
} // namespace gamemd

// 0x5D8D80
namespace gamemd {
void sub_5D8D80()
{

  long double v0; // st7
  v0 = pow(256.0, 2.0); /*0x5d8d8c*/
  dbl_ABFE78 = Math::Sqrt(v0 + v0); /*0x5d8d9e*/
}
} // namespace gamemd

// 0x5D8DB0
namespace gamemd {
void sub_5D8DB0()
{
  dbl_ABFEE0 = dbl_ABFE78 / 60.0; /*0x5d8dbc*/
}
} // namespace gamemd

// 0x5D8DD0
namespace gamemd {
void sub_5D8DD0()
{
  dbl_ABFEB0 = 1.0 / dbl_ABFEE0; /*0x5d8ddc*/
}
} // namespace gamemd

// 0x5D8DF0
namespace gamemd {
void sub_5D8DF0()
{
  dbl_ABFEA8 = 0.0174532925199433 * 45.0; /*0x5d8dfc*/
}
} // namespace gamemd

// 0x5D8E10
namespace gamemd {
void sub_5D8E10()
{
  dbl_ABFE80 = 0.0174532925199433 * 60.0; /*0x5d8e1c*/
}
} // namespace gamemd

// 0x5D8E30
namespace gamemd {
void sub_5D8E30()
{
  dbl_ABFE58 = 0.0174532925199433 * 90.0; /*0x5d8e3c*/
}
} // namespace gamemd

// 0x5D8E50
namespace gamemd {
long long sub_5D8E50()
{

  double v0; // st7
  v0 = Math::Sin(dbl_ABFE58 - dbl_ABFE80); /*0x5d8e62*/
  int64_t result; // rax
  result = Math::RoundToInt(v0 * dbl_ABFE78 * 0.5); /*0x5d8e76*/
  dword_ABFEE8 = result; /*0x5d8e7b*/
  return result; /*0x5d8e80*/
}
} // namespace gamemd

// 0x5D8E90
namespace gamemd {
void sub_5D8E90()
{
  dbl_ABFE88 = Math::ArcTan((double)dword_ABFEE8 * 0.00390625); /*0x5d8ea7*/
}
} // namespace gamemd

// 0x5D8EC0
namespace gamemd {
void sub_5D8EC0()
{
  dbl_ABFEA0 = Math::ArcTan((double)(2 * dword_ABFEE8) / dbl_ABFE78); /*0x5d8ee2*/
}
} // namespace gamemd

// 0x5D8EF0
namespace gamemd {
long long sub_5D8EF0()
{

  int64_t result; // rax
  result = Math::RoundToInt((double)(4 * dword_ABFEE8) + 0.5); /*0x5d8f0b*/
  dword_ABFEDC = result; /*0x5d8f10*/
  return result; /*0x5d8f16*/
}
} // namespace gamemd

// 0x5D8F20
namespace gamemd {
int sub_5D8F20()
{
  word_ABFE70 = 0; /*0x5d8f22*/
  word_ABFE72 = 0; /*0x5d8f28*/
  return 0; /*0x5d8f2e*/
}
} // namespace gamemd

// 0x5D8F30
namespace gamemd {
int sub_5D8F30()
{
  dword_ABFE90 = 0; /*0x5d8f32*/
  dword_ABFE94 = 0; /*0x5d8f37*/
  dword_ABFE98 = 0; /*0x5d8f3c*/
  return 0; /*0x5d8f41*/
}
} // namespace gamemd

// 0x5D8F50
namespace gamemd {
int sub_5D8F50()
{
  dword_ABFEC0 = 0; /*0x5d8f55*/
  dword_ABFEB8 = 128; /*0x5d8f5f*/
  dword_ABFEBC = 128; /*0x5d8f64*/
  return 128; /*0x5d8f69*/
}
} // namespace gamemd

// 0x5D8F70
namespace gamemd {
int sub_5D8F70()
{
  dword_ABFE60 = 0; /*0x5d8f72*/
  dword_ABFE64 = 0; /*0x5d8f77*/
  dword_ABFE68 = 0; /*0x5d8f7c*/
  dword_ABFE6C = 0; /*0x5d8f81*/
  return 0; /*0x5d8f86*/
}
} // namespace gamemd

// 0x5D8F90
namespace gamemd {
int sub_5D8F90()
{
  dword_ABFEC8 = 0; /*0x5d8f92*/
  dword_ABFECC = 0; /*0x5d8f97*/
  dword_ABFED0 = 0; /*0x5d8f9c*/
  dword_ABFED4 = 0; /*0x5d8fa1*/
  return 0; /*0x5d8fa6*/
}
} // namespace gamemd

// 0x5D8FB0
namespace gamemd {
unsigned int * E4Recv_5D8FB0::sub_5D8FB0()
{

  this->AbstractClass = 0; /*0x5d8fb4*/
  this->M4 = 0; /*0x5d8fb6*/
  this->M8 = 0; /*0x5d8fb9*/
  this->M12 = 0; /*0x5d8fbc*/
  return &this->AbstractClass; /*0x5d8fbf*/

}
} // namespace gamemd

// 0x5D8FC0
namespace gamemd {
void E4Recv_5D8FC0::__Release__NonReentrantLock_details_Concurrency__QAEXXZ()
{
  *(unsigned int *)this = 0; /*0x5d8fc0*/
}
} // namespace gamemd

// 0x5DA4B0
namespace gamemd {
int sub_5DA4B0()
{
  dword_ABFEF8 = 0; /*0x5da4b2*/
  dword_ABFEFC = 0; /*0x5da4b7*/
  dword_ABFF00 = 0; /*0x5da4bc*/
  dword_ABFF04 = 0; /*0x5da4c1*/
  return 0; /*0x5da4c6*/
}
} // namespace gamemd

// 0x5DA4D0
namespace gamemd {
void sub_5DA4D0()
{

  long double v0; // st7
  v0 = pow(256.0, 2.0); /*0x5da4dc*/
  dbl_ABFF10 = Math::Sqrt(v0 + v0); /*0x5da4ee*/
}
} // namespace gamemd

// 0x5DA500
namespace gamemd {
void sub_5DA500()
{
  dbl_ABFF60 = dbl_ABFF10 / 60.0; /*0x5da50c*/
}
} // namespace gamemd

// 0x5DA520
namespace gamemd {
void sub_5DA520()
{
  dbl_ABFF48 = 1.0 / dbl_ABFF60; /*0x5da52c*/
}
} // namespace gamemd

// 0x5DA540
namespace gamemd {
void sub_5DA540()
{
  dbl_ABFF40 = 0.0174532925199433 * 45.0; /*0x5da54c*/
}
} // namespace gamemd

// 0x5DA560
namespace gamemd {
void sub_5DA560()
{
  dbl_ABFF18 = 0.0174532925199433 * 60.0; /*0x5da56c*/
}
} // namespace gamemd

// 0x5DA580
namespace gamemd {
void sub_5DA580()
{
  dbl_ABFEF0 = 0.0174532925199433 * 90.0; /*0x5da58c*/
}
} // namespace gamemd

// 0x5DA5A0
namespace gamemd {
long long sub_5DA5A0()
{

  double v0; // st7
  v0 = Math::Sin(dbl_ABFEF0 - dbl_ABFF18); /*0x5da5b2*/
  int64_t result; // rax
  result = Math::RoundToInt(v0 * dbl_ABFF10 * 0.5); /*0x5da5c6*/
  dword_ABFF68 = result; /*0x5da5cb*/
  return result; /*0x5da5d0*/
}
} // namespace gamemd

// 0x5DA5E0
namespace gamemd {
void sub_5DA5E0()
{
  dbl_ABFF20 = Math::ArcTan((double)dword_ABFF68 * 0.00390625); /*0x5da5f7*/
}
} // namespace gamemd

// 0x5DA610
namespace gamemd {
void sub_5DA610()
{
  dbl_ABFF38 = Math::ArcTan((double)(2 * dword_ABFF68) / dbl_ABFF10); /*0x5da632*/
}
} // namespace gamemd

// 0x5DA640
namespace gamemd {
long long sub_5DA640()
{

  int64_t result; // rax
  result = Math::RoundToInt((double)(4 * dword_ABFF68) + 0.5); /*0x5da65b*/
  dword_ABFF5C = result; /*0x5da660*/
  return result; /*0x5da666*/
}
} // namespace gamemd

// 0x5DA670
namespace gamemd {
int sub_5DA670()
{
  word_ABFF08 = 0; /*0x5da672*/
  word_ABFF0A = 0; /*0x5da678*/
  return 0; /*0x5da67e*/
}
} // namespace gamemd

// 0x5DA680
namespace gamemd {
int sub_5DA680()
{
  dword_ABFF28 = 0; /*0x5da682*/
  dword_ABFF2C = 0; /*0x5da687*/
  dword_ABFF30 = 0; /*0x5da68c*/
  return 0; /*0x5da691*/
}
} // namespace gamemd

// 0x5DA6A0
namespace gamemd {
int sub_5DA6A0()
{
  dword_ABFF58 = 0; /*0x5da6a5*/
  dword_ABFF50 = 128; /*0x5da6af*/
  dword_ABFF54 = 128; /*0x5da6b4*/
  return 128; /*0x5da6b9*/
}
} // namespace gamemd

// 0x5DAB80
namespace gamemd {
int E4Recv_5DAB80::sub_5DAB80()
{

  int v3; // [esp+8h] [ebp-54h] BYREF
  v3 = 0; /*0x5dab96*/
  char String[80]; // [esp+Ch] [ebp-50h] BYREF
  strcpy(String, (const char *)this); /*0x5daba7*/
  _strupr(String); /*0x5dabb5*/
  unsigned int i; // esi
  for ( i = 0; i < strlen(String); ++i ) /*0x5dabc8*/
    ComputeHash(&v3, String[i]); /*0x5dabd8*/
  return v3; /*0x5dabf4*/
}
} // namespace gamemd

// 0x5DACD0
namespace gamemd {
int sub_5DACD0()
{
  dword_AC01A8 = 0; /*0x5dacd2*/
  dword_AC01AC = 0; /*0x5dacd7*/
  dword_AC01B0 = 0; /*0x5dacdc*/
  dword_AC01B4 = 0; /*0x5dace1*/
  return 0; /*0x5dace6*/
}
} // namespace gamemd

// 0x5DACF0
namespace gamemd {
void sub_5DACF0()
{

  long double v0; // st7
  v0 = pow(256.0, 2.0); /*0x5dacfc*/
  dbl_AC01C0 = Math::Sqrt(v0 + v0); /*0x5dad0e*/
}
} // namespace gamemd

// 0x5DAD20
namespace gamemd {
void sub_5DAD20()
{
  dbl_AC0250 = dbl_AC01C0 / 60.0; /*0x5dad2c*/
}
} // namespace gamemd

// 0x5DAD40
namespace gamemd {
void sub_5DAD40()
{
  dbl_AC0218 = 1.0 / dbl_AC0250; /*0x5dad4c*/
}
} // namespace gamemd

// 0x5DAD60
namespace gamemd {
void sub_5DAD60()
{
  dbl_AC0210 = 0.0174532925199433 * 45.0; /*0x5dad6c*/
}
} // namespace gamemd

// 0x5DAD80
namespace gamemd {
void sub_5DAD80()
{
  dbl_AC01C8 = 0.0174532925199433 * 60.0; /*0x5dad8c*/
}
} // namespace gamemd

// 0x5DADA0
namespace gamemd {
void sub_5DADA0()
{
  dbl_AC0198 = 0.0174532925199433 * 90.0; /*0x5dadac*/
}
} // namespace gamemd

// 0x5DADC0
namespace gamemd {
long long sub_5DADC0()
{

  double v0; // st7
  v0 = Math::Sin(dbl_AC0198 - dbl_AC01C8); /*0x5dadd2*/
  int64_t result; // rax
  result = Math::RoundToInt(v0 * dbl_AC01C0 * 0.5); /*0x5dade6*/
  dword_AC0258 = result; /*0x5dadeb*/
  return result; /*0x5dadf0*/
}
} // namespace gamemd

// 0x5DAE00
namespace gamemd {
void sub_5DAE00()
{
  dbl_AC01D8 = Math::ArcTan((double)dword_AC0258 * 0.00390625); /*0x5dae17*/
}
} // namespace gamemd

// 0x5DAE30
namespace gamemd {
void sub_5DAE30()
{
  dbl_AC01F8 = Math::ArcTan((double)(2 * dword_AC0258) / dbl_AC01C0); /*0x5dae52*/
}
} // namespace gamemd

// 0x5DAE60
namespace gamemd {
long long sub_5DAE60()
{

  int64_t result; // rax
  result = Math::RoundToInt((double)(4 * dword_AC0258) + 0.5); /*0x5dae7b*/
  dword_AC024C = result; /*0x5dae80*/
  return result; /*0x5dae86*/
}
} // namespace gamemd

// 0x5DAE90
namespace gamemd {
int sub_5DAE90()
{
  word_AC01B8 = 0; /*0x5dae92*/
  word_AC01BA = 0; /*0x5dae98*/
  return 0; /*0x5dae9e*/
}
} // namespace gamemd

// 0x5DAEA0
namespace gamemd {
int sub_5DAEA0()
{
  dword_AC01E8 = 0; /*0x5daea2*/
  dword_AC01EC = 0; /*0x5daea7*/
  dword_AC01F0 = 0; /*0x5daeac*/
  return 0; /*0x5daeb1*/
}
} // namespace gamemd

// 0x5DAEC0
namespace gamemd {
int sub_5DAEC0()
{
  dword_AC0248 = 0; /*0x5daec5*/
  dword_AC0240 = 128; /*0x5daecf*/
  dword_AC0244 = 128; /*0x5daed4*/
  return 128; /*0x5daed9*/
}
} // namespace gamemd

// 0x5DAEE0
namespace gamemd {
int sub_5DAEE0()
{
  dword_AC0230 = TimerGetTicks(); /*0x5daeef*/
  dword_AC0238 = 0; /*0x5daef4*/
  return atexit(nullsub_194); /*0x5daf04*/
}
} // namespace gamemd

// 0x5DAF10
namespace gamemd {
void nullsub_194()
{
  ; /*0x5daf10*/
}
} // namespace gamemd

// 0x5DAF20
namespace gamemd {
unsigned char sub_5DAF20()
{
  LRESULT v0; // eax
  LRESULT v1; // eax
  int v2; // esi
  unsigned int *v3; // edx
  void *v4; // ebx
  void *v5; // eax
  void *v6; // eax
  HWND v7; // esi
  LRESULT v8; // eax
  const wchar_t *v9; // eax

  v0 = SendDlgItemMessageA((HWND)(hDlg), 1363, 0x188u, 0, 0); /*0x5e670d*/
  if ( v0 != -1 ) /*0x5e6712*/
  {
    v1 = SendDlgItemMessageA((HWND)(hDlg), 1363, 0x199u, v0, 0); /*0x5e672c*/
    v2 = 0; /*0x5e6734*/
    if ( g_MultiplayerOptions > 0 ) /*0x5e6738*/
    {
      v3 = (unsigned int *)g_MultiplayerGameState; /*0x5e673e*/
      while ( v1 != *v3 ) /*0x5e6746*/
      {
        ++v2; /*0x5e6748*/
        ++v3; /*0x5e6749*/
        if ( v2 >= g_MultiplayerOptions ) /*0x5e674e*/
          goto LABEL_20; /*0x5e674e*/
      }
      if ( v2 != -1 && v2 != dword_AC0D30 ) /*0x5e6764*/
      {
        LoadScenarioClassByIndex(v2); /*0x5e676c*/
        if ( ((IsRandMap *)(*(unsigned int *)(g_MultiplayerGameState + 4 * v2)))->Sed() ) /*0x5e677a*/
        {
          v4 = (void *)(g_UIControlState); /*0x5e6783*/
          if ( g_UIControlState ) /*0x5e678b*/
          {
            ComPtr::Dtor( (void *)(g_UIControlState)); /*0x5e678f*/
            RA2_OPDEL(v4); /*0x5e6795*/
          }
          v5 = operator new(4u); /*0x5e679f*/
          if ( v5 ) /*0x5e67a9*/
            v6 = unknown_libname_27( (v5)); /*0x5e67ad*/
          else
            v6 = (void *)(0); /*0x5e67b4*/
          g_UIControlState = (unsigned int)v6; /*0x5e67bd*/
          ((Surface *)((char **)v6))->LoadToSurfaceSHP( (char *)(ExistingFileName)); /*0x5e67c2*/
          if ( !*(unsigned int *)g_UIControlState ) /*0x5e67cc*/
            Session::PrepareGame( (HWND)(hDlg)); /*0x5e67d7*/
          InvalidateRect((HWND)(hDlg), 0, 0); /*0x5e67e7*/
          ScenarioClass::CopyStartPositions(); /*0x5e67ed*/
        }
        else
        {
          Session::PrepareGame( (HWND)(hDlg)); /*0x5e67fa*/
        }
        dword_AC0D30 = v2; /*0x5e6805*/
        g_GameRulesOptions = dword_AC10E0; /*0x5e680b*/
        LoadScenarioClassByIndex(dword_AC10E0); /*0x5e6811*/
      }
    }
  }
  LABEL_20:
  v7 = hDlg; /*0x5e6816*/
  v8 = SendDlgItemMessageA((HWND)(hDlg), 1363, 0x188u, 0, 0); /*0x5e682c*/
  if ( v8 == -1 || (v9 = (const wchar_t *)SendDlgItemMessageA(v7, 1363, 0x199u, v8, 0)) == 0 ) /*0x5e6845*/
    word_AC0EC8 = 0; /*0x5e6857*/
  else
    wcscpy( (wchar_t *)(&word_AC0EC8), (const wchar_t *)(v9)); /*0x5e684d*/
  if ( g_GameMode_Current[0] == 3 ) /*0x5e686b*/
  {
    Event::Dispatch(); /*0x5daf20*/
    NetworkLobby::MessageHandler(); /*0x5daf25*/
    return 0; /*0x5daf2a*/
  }
  else if ( g_GameMode_Current[0] == 4 ) /*0x5e6875*/
  {
    // 0x77f900
    return (unsigned int)Game::ProcessIdle(); /*0x5e6877*/
{

  int v1; // ebx
  int v2; // esi
  int v3; // eax
  wchar_t *StringCSF; // eax
  int i; // esi
  char *v6; // ebp
  int v7; // esi
  char *v8; // edx
  unsigned int *v9; // eax
  unsigned int *v10; // esi
  int j; // esi
  char *v12; // ebx
  int v13; // esi
  int v14; // ebp
  void *v15; // eax
  void *DynamicVector_field_0x8; // esi
  int v17; // ebx
  char *v18; // edx
  unsigned int *v19; // eax
  unsigned int *v20; // esi
  int v21; // eax
  int v22; // ebp
  char **v23; // eax
  int v24; // esi
  char *v25; // eax
  int v27; // [esp+14h] [ebp-B0h]
  ObjectClass *v28; // [esp+14h] [ebp-B0h]
  String v29; // [esp+24h] [ebp-A0h] BYREF
  String v30; // [esp+2Ch] [ebp-98h] BYREF
  String v31; // [esp+34h] [ebp-90h] BYREF
  MSG Msg; // [esp+3Ch] [ebp-88h] BYREF
  struct in_addr Buffer[27]; // [esp+58h] [ebp-6Ch] BYREF

  LOBYTE(this) = 0; /*0x77f906*/
  ScreenSaver::Process((TechnoTypeClass *)this, v27); /*0x77f90c*/
  v1 = 0; /*0x77f916*/
  v2 = 0; /*0x77f918*/
  ++dword_AA0430; /*0x77f925*/
  if ( GameLoopMessagePump(&Msg, 0, 0, 0, 1u) ) /*0x77f92a*/
  {
    do /*0x77f95d*/
    {
      TranslateMessage(&Msg); /*0x77f944*/
      DispatchMessageA(&Msg); /*0x77f94b*/
      ++v2; /*0x77f94d*/
    }
    while ( v2 != 100 && GameLoopMessagePump(&Msg, 0, 0, 0, 1u) ); /*0x77f95d*/
  }
  if ( (dword_A8B244 == 3 || dword_A8B244 == 1 || dword_A8B244 == 2) /*0x77f9c5*/
    && g_WOL_GameProcessState != -1
    && (unsigned int)g_WOL_IdleHandler >= 2
    && g_WOL_IdleHandler != 11
    && time(0) - g_WOL_GameListPool > (unsigned int)g_WOL_GameProcessState )
  {
    if ( g_WOL_IdleHandler == 5 ) /*0x77f9d3*/
    {
      g_WOL_GameListState = 0; /*0x77fa55*/
      g_WOL_IdleHandler = 5; /*0x77fa5b*/
      g_WOL_GameProcessState = 180; /*0x77fa65*/
      g_WOL_GameListPool = time(0); /*0x77fa77*/
    }
    else
    {
      if ( g_WOL_IdleHandler < 2 || g_WOL_IdleHandler > 4 ) /*0x77f9e1*/
      {
        StringCSF = GetStringCSF(aWolMatchtimeou, 0, g_Str_File_wonline_cpp, 2426); /*0x77fa11*/
        Dialog::ShowMessage(2146559, (size_t)StringCSF); /*0x77fa1c*/
        g_WOL_GameListState = 0; /*0x77fa22*/
        g_WOL_IdleHandler = 2; /*0x77fa28*/
        g_WOL_GameProcessState = 30; /*0x77fa2e*/
        v3 = time(0); /*0x77fa38*/
      }
      else
      {
        g_WOL_GameListState = 2; /*0x77f9e4*/
        g_WOL_IdleHandler = 0; /*0x77f9ea*/
        g_WOL_GameProcessState = -1; /*0x77f9f0*/
        v3 = time(0); /*0x77f9f6*/
      }
      g_WOL_GameListPool = v3; /*0x77fa46*/
      SetEvent(hEvent); /*0x77fa4c*/
    }
  }
  Dialog::GetCurrentType(); /*0x77fa7c*/
  if ( *(int *)stru_B777A0.__pad_0 > 200 ) /*0x77fa8b*/
  {
    for ( i = 0; i < *(int *)stru_B777A0.__pad_0; ++i ) /*0x77fa91*/
      DeleteAndZero((ObjectClass *)(stru_B777A0.DynamicArray_field_0x08 + 4 * i)); /*0x77fa9b*/
    *(unsigned int *)stru_B777A0.__pad_0 = 0; /*0x77faaa*/
  }
  if ( dword_B76180 < (unsigned int)(time(0) - 2) && *(int *)stru_B777A0.__pad_0 > 65 /*0x77fb0e*/
    || dword_B76180 < (unsigned int)(time(0) - 3) && *(int *)stru_B777A0.__pad_0 > 10
    || dword_B76180 < (unsigned int)(time(0) - 15) && *(int *)stru_B777A0.__pad_0 > 0 )
  {
    *(unsigned int *)&v29.ptr_4 = 0; /*0x77fb14*/
    *(unsigned int *)v29.__pad_0 = 0; /*0x77fb18*/
    do /*0x77fbde*/
    {
      if ( *(int *)stru_B777A0.__pad_0 <= 0 ) /*0x77fb23*/
        break; /*0x77fb23*/
      v6 = (char *)__2_YAPAXI_Z(0x6Cu); /*0x77fb30*/
      memset(v6, 0, 0x6Cu); /*0x77fb3b*/
      unknown_libname_73(&v31); /*0x77fb44*/
      v7 = *(unsigned int *)stru_B777A0.__pad_0 - 1; /*0x77fb4e*/
      if ( *(unsigned int *)stru_B777A0.__pad_0 - 1 >= 0 && v7 < *(int *)stru_B777A0.__pad_0 ) /*0x77fb57*/
      {
        String::Reassign(&v31, (const char **)(stru_B777A0.DynamicArray_field_0x08 + 4 * v7)); /*0x77fb67*/
        DynamicArray::Remove(&stru_B777A0, v7); /*0x77fb72*/
      }
      v8 = String::GetOrEmpty(&v31); /*0x77fb80*/
      if ( strlen(v8) > 9 ) /*0x77fb91*/
        v8[9] = 0; /*0x77fb93*/
      strcpy(v6 + 36, v8); /*0x77fbb1*/
      if ( v1 ) /*0x77fbbc*/
        v1->NeedsSaveOrLink = v6; /*0x77fbc4*/
      else
        *(unsigned int *)&v29.ptr_4 = v6; /*0x77fbbe*/
      v1 = (int)v6; /*0x77fbcb*/
      DeleteAndZero((ObjectClass *)&v31); /*0x77fbcd*/
      ++*(unsigned int *)v29.__pad_0; /*0x77fbda*/
    }
    while ( *(int *)v29.__pad_0 < 10 ); /*0x77fbde*/
    if ( ppv ) /*0x77fbeb*/
      (*(void (**)(LPVOID, unsigned int))(*(unsigned int *)ppv + 192))(ppv, *(unsigned int *)&v29.ptr_4); /*0x77fbf5*/
    v9 = *(unsigned int **)&v29.ptr_4; /*0x77fc03*/
    if ( *(unsigned int *)&v29.ptr_4 ) /*0x77fc05*/
    {
      do /*0x77fc17*/
      {
        v10 = (unsigned int *)v9[8]; /*0x77fc07*/
        __3_YAXPAX_Z(v9); /*0x77fc0b*/
        v9 = v10; /*0x77fc13*/
      }
      while ( v10 ); /*0x77fc17*/
    }
    dword_B76180 = time(0); /*0x77fc23*/
    v1 = 0; /*0x77fc28*/
  }
  if ( *(int *)stru_B765F8.__pad_0 > 200 ) /*0x77fc34*/
  {
    for ( j = 0; j < *(int *)stru_B765F8.__pad_0; ++j ) /*0x77fc3a*/
      DeleteAndZero((ObjectClass *)(stru_B765F8.DynamicVector_field_0x8 + 4 * j)); /*0x77fc45*/
    *(unsigned int *)stru_B765F8.__pad_0 = 0; /*0x77fc54*/
  }
  if ( dword_B7617C < (unsigned int)(time(0) - 2) && *(int *)stru_B765F8.__pad_0 > 65 /*0x77fcb8*/
    || dword_B7617C < (unsigned int)(time(0) - 3) && *(int *)stru_B765F8.__pad_0 > 10
    || dword_B7617C < (unsigned int)(time(0) - 15) && *(int *)stru_B765F8.__pad_0 > 0 )
  {
    *(unsigned int *)v29.__pad_0 = 0; /*0x77fcbe*/
    *(unsigned int *)&v29.ptr_4 = 0; /*0x77fcc2*/
    *(unsigned int *)v30.__pad_0 = 0; /*0x77fcc6*/
    do /*0x77fe52*/
    {
      if ( *(int *)stru_B765F8.__pad_0 <= 0 ) /*0x77fcd1*/
        break; /*0x77fcd1*/
      v12 = (char *)__2_YAPAXI_Z(0x6Cu); /*0x77fcde*/
      memset(v12, 0, 0x6Cu); /*0x77fce9*/
      *(unsigned int *)&v31.ptr_4 = v12; /*0x77fcf2*/
      unknown_libname_73(&v31); /*0x77fcf6*/
      v13 = *(unsigned int *)stru_B765F8.__pad_0 - 1; /*0x77fd00*/
      if ( *(unsigned int *)stru_B765F8.__pad_0 - 1 >= 0 && v13 < *(int *)stru_B765F8.__pad_0 ) /*0x77fd0d*/
      {
        String::Reassign(&v31, (const char **)(stru_B765F8.DynamicVector_field_0x8 + 4 * v13)); /*0x77fd20*/
        if ( *(unsigned int *)stru_B765F8.__pad_0 ) /*0x77fd2c*/
        {
          if ( v13 >= *(int *)stru_B765F8.__pad_0 ) /*0x77fd34*/
            v13 = *(unsigned int *)stru_B765F8.__pad_0 - 1; /*0x77fd36*/
          DeleteAndZero((ObjectClass *)(stru_B765F8.DynamicVector_field_0x8 + 4 * v13)); /*0x77fd42*/
          memcpy( /*0x77fd6b*/
            (void *)(stru_B765F8.DynamicVector_field_0x8 + 4 * v13),
            (const void *)(stru_B765F8.DynamicVector_field_0x8 + 4 * (v13 + 1)),
            4 * (*(unsigned int *)stru_B765F8.__pad_0 + 0x3FFFFFFF * (v13 + 1)));
          --*(unsigned int *)stru_B765F8.__pad_0; /*0x77fd7f*/
          if ( 3 * *(unsigned int *)stru_B765F8.__pad_0 <= *(int *)&stru_B765F8.DynamicVector_field_0x1[3] ) /*0x77fd89*/
          {
            v14 = *(unsigned int *)&stru_B765F8.DynamicVector_field_0x1[3] / 2; /*0x77fd92*/
            if ( *(unsigned int *)&stru_B765F8.DynamicVector_field_0x1[3] / 2 < 10 ) /*0x77fd97*/
              v14 = 10; /*0x77fd99*/
            if ( v14 < *(int *)&stru_B765F8.DynamicVector_field_0x1[3] ) /*0x77fda0*/
            {
              v15 = (void *)__2_YAPAXI_Z(4 * v14); /*0x77fdaa*/
              DynamicVector_field_0x8 = (void *)stru_B765F8.DynamicVector_field_0x8; /*0x77fdaf*/
              v17 = (int)v15; /*0x77fdba*/
              if ( stru_B765F8.DynamicVector_field_0x8 ) /*0x77fdbc*/
              {
                memcpy(v15, (const void *)stru_B765F8.DynamicVector_field_0x8, 4 * *(unsigned int *)stru_B765F8.__pad_0); /*0x77fdc6*/
                DynamicVector_field_0x8 = (void *)stru_B765F8.DynamicVector_field_0x8; /*0x77fdc8*/
              }
              __3_YAXPAX_Z(DynamicVector_field_0x8); /*0x77fdcf*/
              stru_B765F8.DynamicVector_field_0x8 = v17; /*0x77fdd4*/
              v12 = *(char **)&v31.ptr_4; /*0x77fdda*/
              *(unsigned int *)&stru_B765F8.DynamicVector_field_0x1[3] = v14; /*0x77fde1*/
            }
          }
        }
      }
      v18 = String::GetOrEmpty(&v31); /*0x77fdf0*/
      if ( strlen(v18) > 9 ) /*0x77fe01*/
        v18[9] = 0; /*0x77fe03*/
      strcpy(v12 + 36, v18); /*0x77fe23*/
      if ( *(unsigned int *)&v29.ptr_4 ) /*0x77fe2e*/
        *(unsigned int *)(*(unsigned int *)&v29.ptr_4 + 32) = v12; /*0x77fe36*/
      else
        *(unsigned int *)v29.__pad_0 = v12; /*0x77fe30*/
      *(unsigned int *)&v29.ptr_4 = v12; /*0x77fe3d*/
      DeleteAndZero((ObjectClass *)&v31); /*0x77fe41*/
      ++*(unsigned int *)v30.__pad_0; /*0x77fe4e*/
    }
    while ( *(int *)v30.__pad_0 < 10 ); /*0x77fe52*/
    if ( ppv ) /*0x77fe5f*/
      (*(void (**)(LPVOID, unsigned int))(*(unsigned int *)ppv + 188))(ppv, *(unsigned int *)v29.__pad_0); /*0x77fe69*/
    v19 = *(unsigned int **)v29.__pad_0; /*0x77fe77*/
    if ( *(unsigned int *)v29.__pad_0 ) /*0x77fe79*/
    {
      do /*0x77fe8b*/
      {
        v20 = (unsigned int *)v19[8]; /*0x77fe7b*/
        __3_YAXPAX_Z(v19); /*0x77fe7f*/
        v19 = v20; /*0x77fe87*/
      }
      while ( v20 ); /*0x77fe8b*/
    }
    dword_B7617C = time(0); /*0x77fe97*/
    v1 = 0; /*0x77fe9c*/
  }
  if ( *(unsigned int *)&dword_A8B238 == 4 && dword_A8B244 == 3 && time(0) > dword_B7646C ) /*0x77fec1*/
  {
    dword_B7646C = time(0) + 30; /*0x77fecf*/
    Event_Process_786270(v28); /*0x77fed4*/
  }
  if ( ppv && !dword_B77DCC ) /*0x77fee8*/
    (*(void (**)(LPVOID))(*(unsigned int *)ppv + 12))(ppv); /*0x77feed*/
  if ( g_UIPointerTable ) /*0x77fef7*/
    (*(void (**)(LPVOID))(*(unsigned int *)g_UIPointerTable + 28))(g_UIPointerTable); /*0x77fefc*/
  if ( dword_AC1174 ) /*0x77ff06*/
    (*(void (**)(LPVOID))(*(unsigned int *)dword_AC1174 + 20))(dword_AC1174); /*0x77ff0b*/
  Event::Dispatch(); /*0x77ff0e*/
  if ( byte_B76B44[0] && stru_B76B00.StringVector_field_0x10 == 41 && dword_B77E4C ) /*0x77ff2b*/
    CheckGameSettingsChanged(0, 0); /*0x77ff31*/
  if ( ppv && stru_B76B00.StringVector_field_0x10 && dword_B77E4C && time(0) - dword_B77E6C > 10 ) /*0x77ff62*/
  {
    memset(Buffer, 0, 0x50u); /*0x77ff6f*/
    GameConfig::BuildChecksum((char *)Buffer); /*0x77ff75*/
    Buffer[10].S_un.S_un_b.s_b1 = 0; /*0x77ff83*/
    (*(void (**)(LPVOID, struct in_addr *))(*(unsigned int *)ppv + 168))(ppv, Buffer); /*0x77ff8c*/
    dword_B77E6C = time(0); /*0x77ff9b*/
  }
  if ( g_NetworkLobbyState == 2 ) /*0x77ffa7*/
    goto LABEL_118; /*0x77ffa7*/
  if ( ppv && stru_B76B00.StringVector_field_0x10 && time(0) - dword_B77E70 > 10 ) /*0x77ffd9*/
  {
    String::ToLowerCopy((String *)&stru_B73E10.CChatEventSink_field_0x30, (char **)&v30); /*0x77ffe9*/
    if ( dword_A8B244 != 3 && dword_A8B244 != 1 && dword_A8B244 != 2 ) /*0x780008*/
    {
      v21 = *(unsigned int *)&stru_B778FC.m_3[1]; /*0x78000e*/
      if ( *(int *)&stru_B778FC.m_3[1] > 0 ) /*0x780015*/
      {
        v22 = 0; /*0x78001b*/
        do /*0x7800b2*/
        {
          if ( v22 >= 0 && v1 < v21 ) /*0x780023*/
            memcpy(Buffer, (char *)dword_B77908 + v22, sizeof(Buffer)); /*0x780037*/
          String::Assign(&v29, (const char *)&Buffer[9]); /*0x780042*/
          v23 = String::ToLowerCopy(&v29, (char **)&v31.ptr_4); /*0x780050*/
          v30.tail_7 = String::Compare(&v30, (const char **)v23); /*0x780063*/
          DeleteAndZero((ObjectClass *)&v31.ptr_4); /*0x780067*/
          if ( !v30.tail_7 && Buffer[6].S_un.S_addr ) /*0x78007a*/
          {
            v24 = *(unsigned int *)g_UIPointerTable; /*0x78008c*/
            v25 = ntoainet(Buffer[6]); /*0x78008f*/
            (*(void (**)(LPVOID, char *, int, char *))(v24 + 24))(g_UIPointerTable, v25, 1000, &v29.ptr_4); /*0x78009b*/
          }
          DeleteAndZero((ObjectClass *)&v29); /*0x7800a2*/
          v21 = *(unsigned int *)&stru_B778FC.m_3[1]; /*0x7800a7*/
          ++v1; /*0x7800ac*/
          v22 += 108; /*0x7800ad*/
        }
        while ( v1 < *(int *)&stru_B778FC.m_3[1] ); /*0x7800b2*/
      }
    }
    dword_B77E70 = time(0); /*0x7800c7*/
    DeleteAndZero((ObjectClass *)&v30); /*0x7800cc*/
  }
  if ( g_NetworkLobbyState == 2 ) /*0x7800d8*/
  {
LABEL_118:
    if ( byte_B77E27 && !byte_B77E26 ) /*0x7800ea*/
      StartGameWOL(v28); /*0x7800ec*/
  }
  HandleWOLRematch(); /*0x7800f1*/
  return 0; /*0x7800f8*/

}
    char InitNetworkGameState()
    {

      if ( !Network_Init(unk_A8E9C0) ) /*0x5db688*/
        return 0; /*0x5db691*/
      if ( (&dword_A8B238)[0] != 4 ) /*0x5db69e*/
      {
        if ( dword_A8D5FC ) /*0x5db6a7*/
        {
          int v1; // [esp+0h] [ebp-Ch] BYREF
          unsigned char v2[8]; // [esp+4h] [ebp-8h] BYREF
          ((gamemd::Network*)(&stru_A8D600))->CopyAddress((unsigned int *)(&v1), (int)v2); /*0x5db6b8*/
          ((ObjectClass *)&v1)->Network_Init_542FC0(); /*0x5db6c7*/
        }
      }
      LoadNetworkShareStrings(); /*0x5db6cc*/
      Game::ResetFlags(); /*0x5db6d1*/
      Network::InitPlayerSlots(); /*0x5db6d6*/
      return 1; /*0x5db693*/
    }
  } // namespace gamemd
}
}

// 0x5DE360
namespace gamemd {
char SendNetworkLobbyChatMessage(HWND hWnd, int a2, int a3)
{

  HWND DlgItem; // eax
  DlgItem = GetDlgItem(hWnd, 1344); /*0x5de37c*/
  wchar_t lParam[111]; // [esp+14h] [ebp-2A8h] BYREF
  SendMessageA(DlgItem, 0x4B3u, 0x6Fu, (LPARAM)lParam); /*0x5de391*/
  int16_t v15; // [esp+F2h] [ebp-1CAh]
  v15 = 0; /*0x5de397*/
  int v5; // ebp
  v5 = wcslen(lParam); /*0x5de3aa*/
  HWND v6; // eax
  v6 = GetDlgItem(hWnd, 1344); /*0x5de3b2*/
  SendMessageA(v6, 0x4B2u, 0, (LPARAM)&g_TypeClass_DefaultString); /*0x5de3c1*/
  int result; // eax
  result = InvalidateRect(hWnd, 0, 1); /*0x5de3c8*/
  if ( v5 > 2 ) /*0x5de3d1*/
  {
    char *v8; // eax
    v8 = CharToWideString(unk_A8B380); /*0x5de3e1*/
    Dialog::ShowMessage(a2, (size_t)g_Str_Trace___s_, v8, lParam); /*0x5de3f1*/
    unsigned int v16[113]; // [esp+F4h] [ebp-1C8h] BYREF
    memset(v16, 0, sizeof(v16)); /*0x5de40b*/
    int16_t v17; // [esp+2B8h] [ebp-4h]
    v17 = 0; /*0x5de40d*/
    char v18; // [esp+2BAh] [ebp-2h]
    v18 = 0; /*0x5de40f*/
    v16[0] = 12; /*0x5de41a*/
    strcpy((char *)&v16[1], unk_A8B380); /*0x5de43b*/
    wcscpy((wchar_t *)&v16[12], lParam); /*0x5de44a*/
    v16[68] = a3; /*0x5de45e*/
    v16[69] = WideString::Hash(word_A8D610); /*0x5de46a*/
    result = g_NetworkSettingsState; /*0x5de471*/
    if ( g_NetworkSettingsState == 2 ) /*0x5de479*/
    {
      int v9 = dword_A8DA84; // edi /*0x5de47b*/
      int i; // esi
      for ( i = 1; i < v9; ++i ) /*0x5de488*/
      {
        Network::SendMessage((int)unk_A8E9C0, (int)v16, 455, 1, *(unsigned int *)(dword_A8DA78 + 4 * i) + 40, 0, 0); /*0x5de4b3*/
        result = Event::Dispatch(); /*0x5de4b8*/
      }
    }
    else
    {
      int v11 = dword_A8DA54; // edi /*0x5de4cf*/
      int j; // esi
      for ( j = 1; j < v11; ++j ) /*0x5de4dc*/
      {
        Network::SendMessage((int)unk_A8E9C0, (int)v16, 455, 1, *(unsigned int *)(dword_A8DA48 + 4 * j) + 40, 0, 0); /*0x5de503*/
        result = Event::Dispatch(); /*0x5de508*/
      }
    }
  }
  return result; /*0x5de4c2*/
}
} // namespace gamemd

// 0x5DF8C0
namespace gamemd {
int Network_BroadcastMessage(int a1)
{

  unsigned int v4[113]; // [esp+Ch] [ebp-1C8h] BYREF
  memset(v4, 0, sizeof(v4)); /*0x5df8da*/
  int16_t v5; // [esp+1D0h] [ebp-4h]
  v5 = 0; /*0x5df8dc*/
  char v6; // [esp+1D2h] [ebp-2h]
  v6 = 0; /*0x5df8de*/
  v4[0] = 10; /*0x5df8e9*/
  strcpy((char *)&v4[1], unk_A8B380); /*0x5df900*/
  int i; // esi
  for ( i = 1; i < dword_A8DA84; ++i ) /*0x5df915*/
  {
    Network::SendMessage((int)unk_A8E9C0, (int)v4, 455, 1, *(unsigned int *)(dword_A8DA78 + 4 * i) + 40, 0, 0); /*0x5df939*/
    Event::Dispatch(); /*0x5df93e*/
  }
  if ( (g_NetworkSettingsState == 1 || g_NetworkSettingsState == 2) /*0x5df968*/
    && !Network::IsBroadcastAddr((unsigned char *)(*(unsigned int *)(dword_A8DA60 + 4 * a1) + 40)) )
  {
    Network::SendMessage((int)unk_A8E9C0, (int)v4, 455, 1, *(unsigned int *)(dword_A8DA60 + 4 * a1) + 40, 0, 0); /*0x5df991*/
  }
  Network::SendMessage((int)unk_A8E9C0, (int)v4, 455, 0, 0, 0, 0); /*0x5df9ad*/
  Game::ResetFlags(); /*0x5df9b2*/
  GameClass::InitDifficultyButtons(); /*0x5df9b7*/
  int result; // eax
  result = PtrVector::Destroy(&stru_A8DA74); /*0x5df9c1*/
  word_A8D610 = 0; /*0x5df9c6*/
  return result; /*0x5df9cf*/
}
} // namespace gamemd

// 0x5DFDD0
namespace gamemd {
void nullsub_25()
{
  ; /*0x5dfdd0*/
}
} // namespace gamemd

// 0x5DFDE0
namespace gamemd {
void nullsub_26()
{
  ; /*0x5dfde0*/
}
} // namespace gamemd

// 0x5DFDF0
namespace gamemd {
void nullsub_27()
{
  ; /*0x5dfdf0*/
}
} // namespace gamemd
