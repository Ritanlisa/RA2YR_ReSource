// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>

#include "e4/e4_globals.hpp"
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

// 0x5D0190
namespace gamemd {
int E4Recv_5D0190::sub_5D0190(const char * a2)
{
  int v3; // esi
  int v5; // esi
  void *v6; // [esp+8h] [ebp-4h] BYREF

  String::Assign((char **)&v6, a2); /*0x5d019e*/
  String::ToLower((const char **)&v6); /*0x5d01a7*/
  v3 = 0; /*0x5d01af*/
  if ( (int)*(&this->u32_85) <= 0 ) /*0x5d01b3*/
  {
  LABEL_6:
    DeleteAndZero(&v6); /*0x5d0202*/
    return 0; /*0x5d0210*/
  }
  while ( !String::NotEquals(*(const char ***)(*(&this->u32_82) + 4 * v3), 0) ) /*0x5d01c4*/
  {
  LABEL_5:
    if ( ++v3 >= *(&this->u32_85) ) /*0x5d0200*/
      goto LABEL_6; /*0x5d0200*/
  }
  String::AssignFromPtr((char **)&a2, *(const char ***)(*(&this->u32_82) + 4 * v3)); /*0x5d01d1*/
  String::ToLower(&a2); /*0x5d01da*/
  if ( !String::Compare((const char **)&v6, &a2) ) /*0x5d01e8*/
  {
    DeleteAndZero((void **)&a2); /*0x5d01f5*/
    goto LABEL_5; /*0x5d01f5*/
  }
  v5 = *(unsigned int *)(*(&this->u32_82) + 4 * v3); /*0x5d021a*/
  DeleteAndZero((void **)&a2); /*0x5d021d*/
  DeleteAndZero(&v6); /*0x5d0226*/
  return v5; /*0x5d020b*/
}
}
// 0x5D0240
namespace gamemd {
char ** E4Recv_5D0240::sub_5D0240(char ** a2, char a3)
{
  int v3; // esi
  int v4; // eax
  int v5; // edi

  v3 = *(&this->u32_85); /*0x5d0242*/
  v4 = 0; /*0x5d0245*/
  if ( v3 <= 0 ) /*0x5d024a*/
  {
  LABEL_5:
    String::Assign(a2, 0); /*0x5d0264*/
    return a2; /*0x5d0271*/
  }
  else
  {
    v5 = *(&this->u32_82); /*0x5d024c*/
    v5 = v5; /*0x5d0253*/
    while ( a3 != *(unsigned char *)(*(unsigned int *)v5 + 4) ) /*0x5d025a*/
    {
      ++v4; /*0x5d025c*/
      v5 += 4; /*0x5d025d*/
      if ( v4 >= v3 ) /*0x5d0262*/
        goto LABEL_5; /*0x5d0262*/
    }
    String::AssignFromPtr(a2, *(const char ***)(v5 + 4 * v4)); /*0x5d0283*/
    return a2; /*0x5d0288*/
  }
}
}
// 0x5D0580
namespace gamemd {
void j_DeleteAndZero()
{
  DeleteAndZero(); /*0x5d0580*/
}
}
// 0x5D2350
namespace gamemd {
void sub_5D2350(int a1, int * a2)
{
  int result; // eax
  int v3; // eax
  int v4; // ecx
  unsigned int v5[4]; // [esp+8h] [ebp-20h] BYREF
  struct tagRECT Rect; // [esp+18h] [ebp-10h] BYREF

  result = a2[2]; /*0x5d2359*/
  if ( result > 0 ) /*0x5d235e*/
  {
    result = a2[3]; /*0x5d2364*/
    if ( result > 0 ) /*0x5d2369*/
    {
      GetClientRect(g_hWnd, &Rect); /*0x5d237b*/
      ClientToScreen(g_hWnd, (LPPOINT)&Rect); /*0x5d238c*/
      if ( g_WWMouseClass_Instance ) /*0x5d239e*/
        (*(void (__thiscall **)(int, int, unsigned int))(*(unsigned int *)g_WWMouseClass_Instance + 60))( /*0x5d23a5*/
          g_WWMouseClass_Instance,
          a1,
          0);
      v3 = *a2; /*0x5d23af*/
      v4 = a2[1]; /*0x5d23b3*/
      v5[2] = a2[2]; /*0x5d23b9*/
      v5[3] = a2[3]; /*0x5d23c6*/
      v5[1] = Rect.top + v4; /*0x5d23ce*/
      v5[0] = Rect.left + v3; /*0x5d23de*/
      result = (*(int (__thiscall **)(int, unsigned int *, int, int *, unsigned int, int))(*(unsigned int *)g_DSurface_Primary + 8))( /*0x5d23e5*/
                 g_DSurface_Primary,
                 v5,
                 a1,
                 a2,
                 0,
                 1);
      if ( g_WWMouseClass_Instance ) /*0x5d23f1*/
        return (*(int (__thiscall **)(int, int, unsigned int))(*(unsigned int *)g_WWMouseClass_Instance + 64))( /*0x5d23f8*/
                 g_WWMouseClass_Instance,
                 a1,
                 0);
    }
  }
  return result; /*0x5d23fb*/
}
}
// 0x5D25D0
namespace gamemd {
int E4Recv_5D25D0::sub_5D25D0(char * Source, int a3)
{
  char **v4; // eax
  char **v5; // edi
  int v6; // ecx
  int v7; // eax
  char ** v8;
  int v9; // edx

  if ( !Source || !a3 ) /*0x5d25e3*/
    return 0; /*0x5d25e3*/
  v4 = (char *)operator new(0xCu); /*0x5d25e7*/
  v5 = v4 ? Audio::SetSoundFileName(v4, Source, a3) : 0;
  v6 = this->attachedBomb; /*0x5d2602*/
  if ( this->q040 >= v6 ) /*0x5d260d*/
  {
    if ( !this->q03D && v6 ) /*0x5d2618*/
      return 0; /*0x5d2618*/
    v7 = this->q044; /*0x5d261a*/
    if ( v7 <= 0 /*0x5d262a*/
      || !(*(uint8_t (__thiscall **)(int, int, unsigned int))(this->nextObject + 8))(&this->q0C0, v6 + v7, 0) )
    {
      return (char **)(0);
    }
  }
  v8 = (char **)((unsigned int)(this->q040));
  v9 = (unsigned int)(this->attachedTag);
  this->q040 = (unsigned int)(v8 + 1);
  *(unsigned int *)(v9 + 4 * v8) = v5; /*0x5d263d*/
  return 1; /*0x5d2640*/
}
}
// 0x5D2650
namespace gamemd {
void* E4Recv_5D2650::sub_5D2650(void * a2, int a3)
{
  int v4; // esi
  int v5; // eax

  if ( a2 ) /*0x5d265c*/
  {
    if ( Audio::IsSoundEnabled() ) /*0x5d265e*/
    {
      v4 = 0; /*0x5d266a*/
      if ( (int)*(&this->vtable26) > 0 ) /*0x5d266e*/
      {
        while ( _strcmpi(a2, **(const void ***)(*(&this->vtable23) + 4 * v4)) ) /*0x5d2684*/
        {
          if ( ++v4 >= *(&this->vtable26) ) /*0x5d268c*/
            return; /*0x5d268c*/
        }
        v5 = Math::RoundToInt((double)a3 * flt_A8EB98); /*0x5d269f*/
        nullsub_192(v5); /*0x5d26a7*/
      }
    }
  }
}
}
// 0x5D4510
namespace gamemd {
CampaignScore * * ProcessEditControlKey(CellStruct * aP0, int edx0, int * a2, unsigned short a4)
{
  unsigned int v4;
  CellStruct * v5;
  int v7; // eax
  void (__thiscall ***v8)(unsigned int, int); // ecx
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
  void (__thiscall ***v22)(unsigned int, int); // ecx
  int v23; // edi
  int *v24; // eax
  int v25; // edx
  int v26; // ecx
  int v27; // edx
  int v28; // eax
  int v29; // eax
  void (__thiscall ***v30)(unsigned int, int); // ecx
  int v31; // edi
  int *v32; // eax
  int v33; // edx
  int v34; // eax
  void (__thiscall ***v35)(unsigned int, int); // ecx
  int v36; // edi
  int *v37; // eax
  int v38; // edx
  int v39; // eax
  int v40; // eax

  v4 = 0; /*0x5d451a*/
  v5 = aP0; /*0x5d451f*/
  if ( !a4 ) /*0x5d4521*/
  {
    aP0 = (gamemd::CellStruct *)(*a2);
    if ( !*a2 ) /*0x5d452b*/
      return 0; /*0x5d4537*/
    v7 = *a2; /*0x5d453a*/
    IDA_BYTE1(v7) = IDA_BYTE1(aP0) & 0xF7; /*0x5d453c*/
    if ( v7 == 1 || v7 == 2 ) /*0x5d4547*/
    {
      if ( (aP0 & 2) != 0 && *(unsigned char *)(v5 + 25) ) /*0x5d4552*/
      {
        DisableIME(); /*0x5d455d*/
        if ( *(unsigned char *)(v5 + 25) ) /*0x5d4562*/
        {
          v8 = *(void (__thiscall ****)(unsigned int, int))(v5 + 36); /*0x5d4569*/
          *(unsigned char *)(v5 + 25) = 0; /*0x5d456c*/
          if ( v8 ) /*0x5d4572*/
            (**v8)(v8, 1); /*0x5d4578*/
          nullsub_48(); /*0x5d457a*/
          if ( *(unsigned char *)(v5 + 26) ) /*0x5d457f*/
          {
            if ( *(unsigned char *)(v5 + 25) ) /*0x5d4586*/
              v9 = *(unsigned int *)(v5 + 8) + *(unsigned int *)(v5 + 20); /*0x5d4593*/
            else
              v9 = *(unsigned int *)(v5 + 8); /*0x5d4597*/
            v10 = *(int **)v5; /*0x5d459a*/
            if ( *(unsigned int *)v5 ) /*0x5d459a*/
            {
              do /*0x5d45b1*/
              {
                v11 = *v10; /*0x5d45a0*/
                v10[4] = v9; /*0x5d45a4*/
                v10 = (int *)(*(int (__thiscall **)(int *))(v11 + 4))(v10); /*0x5d45a7*/
                v9 += *(unsigned int *)(v5 + 20); /*0x5d45ad*/
              }
              while ( v10 ); /*0x5d45b1*/
            }
            ++*(unsigned int *)(v5 + 12); /*0x5d45b3*/
          }
        }
        return (gamemd::CampaignScore **)(2);
      }
      return (gamemd::CampaignScore **)(0);
    }
  }
  if ( !*(unsigned char *)(v5 + 25) ) /*0x5d45c7*/
    return v4; /*0x5d4990*/
  if ( a4 ) /*0x5d45d0*/
  {
    v12 = a4; /*0x5d4646*/
  }
  else
  {
    IDA_LOWORD(aP0) = *(unsigned short *)a2; /*0x5d45d6*/
    v12 = (uint8_t)Event_Process(aP0); /*0x5d45eb*/
    v13 = *a2; /*0x5d45f1*/
    if ( (*a2 & 0x1000) != 0 && v12 >= 48 && v12 <= 57 ) /*0x5d4605*/
    {
      IDA_BYTE1(v13) &= ~0x10u; /*0x5d4609*/
      *a2 = v13; /*0x5d460c*/
    }
    else if ( (*a2 & 0x1000) != 0 || (v13 & 0x8000) != 0 || v12 < 32 ) /*0x5d461c*/
    {
      v14 = (uint8_t)*a2; /*0x5d461e*/
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
      v39 = *(unsigned int *)(v5 + 688); /*0x5d495f*/
      if ( v39 > *(unsigned int *)(v5 + 692) ) /*0x5d496d*/
      {
        v40 = (int)(v39 - 1);
        v4 = 2; /*0x5d4970*/
        *(unsigned int *)(v5 + 688) = v40; /*0x5d4975*/
        *(unsigned short *)(v5 + 2 * v40 + 40) = 0; /*0x5d497b*/
      }
    }
    *a2 = (int)((gamemd::CampaignScore **)((int)((gamemd::CampaignScore **)(0))));
    (*(void (__thiscall **)(unsigned int))(**(unsigned int **)(v5 + 36) + 80))(*(unsigned int *)(v5 + 36)); /*0x5d498d*/
    return v4; /*0x5d498d*/
  }
  if ( v12 != 13 ) /*0x5d4658*/
  {
    if ( v12 != 27 ) /*0x5d4661*/
    {
      (*(void (__thiscall **)(unsigned int))(**(unsigned int **)(v5 + 36) + 80))(*(unsigned int *)(v5 + 36)); /*0x5d466c*/
      if ( v12 > 31 ) /*0x5d4672*/
      {
        if ( *(unsigned short *)(v5 + 2 * *(unsigned int *)(v5 + 688) + 40) ) /*0x5d468a*/
        {
          v15 = *(unsigned int *)(v5 + 692); /*0x5d4694*/
          v16 = *(unsigned int *)(v5 + 16) - 1; /*0x5d469a*/
          do /*0x5d46b2*/
          {
            if ( *(unsigned int *)(v5 + 688) - v15 >= v16 ) /*0x5d46a9*/
              break; /*0x5d46a9*/
            v17 = *(unsigned int *)(v5 + 688) + 1; /*0x5d46ab*/
            *(unsigned int *)(v5 + 688) = v17; /*0x5d46ac*/
          }
          while ( *(unsigned short *)(v5 + 2 * v17 + 40) ); /*0x5d46b2*/
        }
        if ( *(unsigned int *)(v5 + 688) - *(unsigned int *)(v5 + 692) >= *(unsigned int *)(v5 + 16) - 1 ) /*0x5d46cf*/
          goto LABEL_46; /*0x5d46cf*/
        *(unsigned short *)(v5 + 2 * *(unsigned int *)(v5 + 688) + 40) = v12; /*0x5d46d1*/
        v18 = *(unsigned int *)(v5 + 688) + 1; /*0x5d46dc*/
        v4 = 1; /*0x5d46dd*/
        *(unsigned int *)(v5 + 688) = v18; /*0x5d46e4*/
        *(unsigned short *)(v5 + 2 * v18 + 40) = 0; /*0x5d46ea*/
        TextRenderer::GetInstance(); /*0x5d46f5*/
        if ( Text::MeasureWidth(v5 + 40, 0) >= *(unsigned int *)(v5 + 708) - 10 ) /*0x5d4711*/
        {
          v19 = *(unsigned int *)(v5 + 688) - 1; /*0x5d4719*/
          *(unsigned int *)(v5 + 688) = v19; /*0x5d471a*/
          *(unsigned short *)(v5 + 2 * v19 + 40) = 0; /*0x5d4720*/
  LABEL_46:
          if ( *(unsigned char *)(v5 + 24) ) /*0x5d4725*/
          {
            v20 = *(unsigned int *)(v5 + 688) /*0x5d475f*/
                - WideString::WordWrap(
                    (wchar_t *)(v5 + 364),
                    (wchar_t *)(v5 + 2 * *(unsigned int *)(v5 + 692) + 40),
                    *(unsigned int *)(v5 + 700),
                    *(unsigned int *)(v5 + 704),
                    1);
            *(unsigned int *)(v5 + 688) = v20; /*0x5d4768*/
            *(unsigned short *)(v5 + 2 * v20 + 40) = v12; /*0x5d476e*/
            v21 = *(unsigned int *)(v5 + 688) + 1; /*0x5d4779*/
            *(unsigned int *)(v5 + 688) = v21; /*0x5d477a*/
            *(unsigned short *)(v5 + 2 * v21 + 40) = 0; /*0x5d4780*/
            *a2 = 0; /*0x5d4788*/
            return 4; /*0x5d478d*/
          }
          v4 = 0; /*0x5d4790*/
        }
      }
      *a2 = (int)((gamemd::CampaignScore **)(0));
      return (gamemd::CampaignScore **)(v4);
    }
    DisableIME(); /*0x5d47a1*/
    if ( !*(unsigned char *)(v5 + 25) ) /*0x5d47a6*/
      goto LABEL_77; /*0x5d47a6*/
    v22 = *(void (__thiscall ****)(unsigned int, int))(v5 + 36); /*0x5d47b1*/
    *(unsigned char *)(v5 + 25) = 0; /*0x5d47b4*/
    if ( v22 ) /*0x5d47ba*/
      (**v22)(v22, 1); /*0x5d47c0*/
    nullsub_48(); /*0x5d47c2*/
    if ( !*(unsigned char *)(v5 + 26) ) /*0x5d47c7*/
    {
  LABEL_77: *a2 = (int)((gamemd::CampaignScore **)(0));
      return (gamemd::CampaignScore **)(2);
    }
    if ( *(unsigned char *)(v5 + 25) ) /*0x5d47d2*/
      v23 = *(unsigned int *)(v5 + 8) + *(unsigned int *)(v5 + 20); /*0x5d47df*/
    else
      v23 = *(unsigned int *)(v5 + 8); /*0x5d47e3*/
    v24 = *(int **)v5; /*0x5d47e6*/
    if ( *(unsigned int *)v5 ) /*0x5d47e6*/
    {
      do /*0x5d4801*/
      {
        v25 = *v24; /*0x5d47f0*/
        v24[4] = v23; /*0x5d47f4*/
        v24 = (int *)(*(int (__thiscall **)(int *))(v25 + 4))(v24); /*0x5d47f7*/
        v23 += *(unsigned int *)(v5 + 20); /*0x5d47fd*/
      }
      while ( v24 ); /*0x5d4801*/
    }
  LABEL_76:
    ++*(unsigned int *)(v5 + 12); /*0x5d48ad*/
    goto LABEL_77; /*0x5d48ad*/
  }
  v26 = *(unsigned int *)(v5 + 692); /*0x5d4808*/
  if ( *(unsigned int *)(v5 + 688) < v26 ) /*0x5d4816*/
    *(unsigned int *)(v5 + 688) = v26; /*0x5d4818*/
  if ( *(unsigned short *)(v5 + 2 * *(unsigned int *)(v5 + 688) + 40) ) /*0x5d4824*/
  {
    v27 = *(unsigned int *)(v5 + 16) - 1; /*0x5d482e*/
    do /*0x5d4846*/
    {
      if ( *(unsigned int *)(v5 + 688) - v26 >= v27 ) /*0x5d483d*/
        break; /*0x5d483d*/
      v28 = *(unsigned int *)(v5 + 688) + 1; /*0x5d483f*/
      *(unsigned int *)(v5 + 688) = v28; /*0x5d4840*/
    }
    while ( *(unsigned short *)(v5 + 2 * v28 + 40) ); /*0x5d4846*/
  }
  v29 = *(unsigned int *)(v5 + 688); /*0x5d484d*/
  if ( v29 == v26 ) /*0x5d4855*/
  {
    DisableIME(); /*0x5d4857*/
    if ( !*(unsigned char *)(v5 + 25) ) /*0x5d485c*/
      goto LABEL_77; /*0x5d485c*/
    v30 = *(void (__thiscall ****)(unsigned int, int))(v5 + 36); /*0x5d4863*/
    *(unsigned char *)(v5 + 25) = 0; /*0x5d4866*/
    if ( v30 ) /*0x5d486c*/
      (**v30)(v30, 1); /*0x5d4872*/
    nullsub_48(); /*0x5d4874*/
    if ( !*(unsigned char *)(v5 + 26) ) /*0x5d4879*/
      goto LABEL_77; /*0x5d487e*/
    if ( *(unsigned char *)(v5 + 25) ) /*0x5d4880*/
      v31 = *(unsigned int *)(v5 + 8) + *(unsigned int *)(v5 + 20); /*0x5d488d*/
    else
      v31 = *(unsigned int *)(v5 + 8); /*0x5d4891*/
    v32 = *(int **)v5; /*0x5d4894*/
    if ( *(unsigned int *)v5 ) /*0x5d4894*/
    {
      do /*0x5d48ab*/
      {
        v33 = *v32; /*0x5d489a*/
        v32[4] = v31; /*0x5d489e*/
        v32 = (int *)(*(int (__thiscall **)(int *))(v33 + 4))(v32); /*0x5d48a1*/
        v31 += *(unsigned int *)(v5 + 20); /*0x5d48a7*/
      }
      while ( v32 ); /*0x5d48ab*/
    }
    goto LABEL_76; /*0x5d48ab*/
  }
  if ( v29 - v26 < *(unsigned int *)(v5 + 16) - 1 ) /*0x5d48ce*/
  {
    *(unsigned short *)(v5 + 2 * v29 + 40) = 32; /*0x5d48d0*/
    v34 = *(unsigned int *)(v5 + 688) + 1; /*0x5d48dd*/
    *(unsigned int *)(v5 + 688) = v34; /*0x5d48de*/
    *(unsigned short *)(v5 + 2 * v34 + 40) = 0; /*0x5d48e4*/
  }
  DisableIME(); /*0x5d48e9*/
  if ( *(unsigned char *)(v5 + 25) ) /*0x5d48ee*/
  {
    v35 = *(void (__thiscall ****)(unsigned int, int))(v5 + 36); /*0x5d48f5*/
    *(unsigned char *)(v5 + 25) = 0; /*0x5d48f8*/
    if ( v35 ) /*0x5d48fe*/
      (**v35)(v35, 1); /*0x5d4904*/
    nullsub_48(); /*0x5d4906*/
    if ( *(unsigned char *)(v5 + 26) ) /*0x5d490b*/
    {
      if ( *(unsigned char *)(v5 + 25) ) /*0x5d4912*/
        v36 = *(unsigned int *)(v5 + 8) + *(unsigned int *)(v5 + 20); /*0x5d491f*/
      else
        v36 = *(unsigned int *)(v5 + 8); /*0x5d4923*/
      v37 = *(int **)v5; /*0x5d4926*/
      if ( *(unsigned int *)v5 ) /*0x5d4926*/
      {
        do /*0x5d493d*/
        {
          v38 = *v37; /*0x5d492c*/
          v37[4] = v36; /*0x5d4930*/
          v37 = (int *)(*(int (__thiscall **)(int *))(v38 + 4))(v37); /*0x5d4933*/
          v36 += *(unsigned int *)(v5 + 20); /*0x5d4939*/
        }
        while ( v37 ); /*0x5d493d*/
      }
      ++*(unsigned int *)(v5 + 12); /*0x5d493f*/
    }
  }
  *a2 = (int)((gamemd::CampaignScore **)(0));
  return (gamemd::CampaignScore **)(3);
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
      Dialog::MapDialogResource(&Msg); /*0x5d4db7*/
      if ( g_TacticalRender ) /*0x5d4dc4*/
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
  int v1; // edi

  v1 = 0; /*0x5d4f29*/
  if ( dword_ABFCA0 <= 0 ) /*0x5d4f2f*/
    return 0; /*0x5d4f87*/
  while ( 1 ) /*0x5d4f47*/
  {
    GetWindowTextA(*((HWND *)dword_ABFC94 + v1), byte_ABFCD0, 99); /*0x5d4f47*/
    if ( !strcmp(byte_ABFCD0, this) ) /*0x5d4f56*/
      break; /*0x5d4f56*/
    if ( ++v1 >= dword_ABFCA0 ) /*0x5d4f85*/
      return 0; /*0x5d4f85*/
  }
  return *((unsigned int *)dword_ABFC94 + v1); /*0x5d4f87*/
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
  v8 = g_GameMode_Current[0] == 5; /*0x5d6020*/
  v3 = 0; /*0x5d6027*/
  for ( i = 0; ; v3 = i ) /*0x5d6029*/
  {
    result = g_MultiplayerMode; /*0x5d602d*/
    if ( (g_MultiplayerMode & 1) == 0 ) /*0x5d6034*/
    {
      g_MultiplayerMode |= 1u; /*0x5d603d*/
      MultiplayerGameMode::ConstructMultiplayerGameModeVectorClass(&g_MultiplayerModeConfig, 0, 0); /*0x5d6048*/
      g_MultiplayerModeConfig = (int)&DynamicVectorClass_MultiplayerGameMode___vftable; /*0x5d604d*/
      dword_ABFDB4 = 10; /*0x5d6057*/
      g_MultiplayerGameList = 0; /*0x5d6066*/
      result = atexit(MultiplayerConfig::Cleanup); /*0x5d606c*/
    }
    if ( v3 >= g_MultiplayerGameList ) /*0x5d607a*/
      break; /*0x5d607a*/
    if ( (g_MultiplayerMode & 1) == 0 ) /*0x5d6087*/
    {
      g_MultiplayerMode |= 1u; /*0x5d6090*/
      MultiplayerGameMode::ConstructMultiplayerGameModeVectorClass(&g_MultiplayerModeConfig, 0, 0); /*0x5d609b*/
      g_MultiplayerModeConfig = (int)&DynamicVectorClass_MultiplayerGameMode___vftable; /*0x5d60a0*/
      dword_ABFDB4 = 10; /*0x5d60aa*/
      g_MultiplayerGameList = 0; /*0x5d60b9*/
      atexit(MultiplayerConfig::Cleanup); /*0x5d60bf*/
    }
    v5 = *((unsigned int *)Src + v3); /*0x5d60cc*/
    if ( !v8 || (*(uint8_t (__thiscall **)(LPARAM))(*(unsigned int *)v5 + 64))(v5) ) /*0x5d60db*/
    {
      v6 = (wchar_t *)(WideString::GetOrEmpty_Alt((wchar_t **)(v5 + 32)));
      v7 = SendMessageA(hWnd, 0x143u, 0, (LPARAM)v6); /*0x5d60f7*/
      if ( *(unsigned int *)(v5 + 40) == a2 ) /*0x5d60ff*/
        SendMessageA(hWnd, 0x14Eu, v7, 0); /*0x5d610a*/
      SendMessageA(hWnd, 0x151u, v7, v5); /*0x5d6114*/
    }
    ++i; /*0x5d611d*/
  }
  return result; /*0x5d6128*/
}
}
// 0x5D7590
namespace gamemd {
Coord * * LoadMultiplayerModesList(AbstractClass * a1, int edx0)
{
  char **v2; // esi
  int v3; // eax
  int v4; // edi
  signed int String; // esi
  int v6; // esi
  char *v7; // eax
  wchar_t *v8; // eax
  int v9; // esi
  char *v10; // eax
  wchar_t *v11; // eax
  int v12; // esi
  int v13; // esi
  char *v14; // eax
  int v15; // esi
  char v16; // al
  int v17; // esi
  void *v19; // [esp+20h] [ebp-114h] BYREF
  int v20; // [esp+24h] [ebp-110h] BYREF
  int v21; // [esp+28h] [ebp-10Ch] BYREF
  int v22; // [esp+2Ch] [ebp-108h] BYREF
  void *v23; // [esp+30h] [ebp-104h] BYREF
  int v24; // [esp+34h] [ebp-100h] BYREF
  int v25; // [esp+38h] [ebp-FCh] BYREF
  void *v26; // [esp+3Ch] [ebp-F8h] BYREF
  void *v27; // [esp+40h] [ebp-F4h] BYREF
  int v28; // [esp+44h] [ebp-F0h]
  int v29; // [esp+48h] [ebp-ECh]
  void *v30; // [esp+4Ch] [ebp-E8h] BYREF
  void *v31; // [esp+50h] [ebp-E4h] BYREF
  void *v32; // [esp+54h] [ebp-E0h] BYREF
  void *v33; // [esp+58h] [ebp-DCh] BYREF
  void *v34; // [esp+5Ch] [ebp-D8h] BYREF
  void *v35; // [esp+60h] [ebp-D4h] BYREF
  int v36; // [esp+64h] [ebp-D0h]
  void *v37; // [esp+68h] [ebp-CCh] BYREF
  void *v38; // [esp+6Ch] [ebp-C8h] BYREF
  void *v39; // [esp+70h] [ebp-C4h] BYREF
  void *v40; // [esp+74h] [ebp-C0h] BYREF
  void *v41; // [esp+78h] [ebp-BCh] BYREF
  char **v42; // [esp+7Ch] [ebp-B8h]
  int v43; // [esp+80h] [ebp-B4h]
  char ** v44;
  void *v45[3]; // [esp+88h] [ebp-ACh] BYREF
  unsigned int v46[10]; // [esp+94h] [ebp-A0h] BYREF
  char v47; // [esp+BCh] [ebp-78h]
  int v48; // [esp+C0h] [ebp-74h]
  int v49; // [esp+C4h] [ebp-70h]
  unsigned int v50[22]; // [esp+C8h] [ebp-6Ch] BYREF
  unsigned char v51[12]; // [esp+120h] [ebp-14h] BYREF
  int v52; // [esp+12Ch] [ebp-8h]

  v2 = (char **)(a1);
  v44 = (char **)((int)((char **)(edx0)));
  v42 = (char **)(a1);
  CCFileClass::Construct(v50, aMpmodesmdIni); /*0x5d75ae*/
  if ( CCFileClass::Open(v50, 0) ) /*0x5d75bd*/
  {
    v45[1] = 0; /*0x5d75ce*/
    v45[2] = 0; /*0x5d75d2*/
    GenericList::Constructor(v46); /*0x5d75d6*/
    memset(&v46[7], 0, 12); /*0x5d75f3*/
    v47 = 0; /*0x5d7608*/
    v48 = 0; /*0x5d760f*/
    v49 = 0; /*0x5d7616*/
    if ( FileStraw::Open(v45, (int)v50, 0) > 0 ) /*0x5d762c*/
    {
      v43 = INIClass::FindKey(v2); /*0x5d763e*/
      v29 = 0; /*0x5d7642*/
      if ( v43 > 0 ) /*0x5d7646*/
      {
        while ( 1 ) /*0x5d766b*/
        {
          INIClass::GetStringByIndexEx(&v23, v2, v29); /*0x5d766b*/
          __1_Timevec_std__QAE_XZ((std::_Timevec *)&v23); /*0x5d7674*/
          v4 = v3; /*0x5d767d*/
          unknown_libname_73(&v19); /*0x5d767f*/
          String::Assign((char **)&v33, &g_INI_DefaultBuffer); /*0x5d768d*/
          String = INIClass::ReadString(v45, v2, (char **)&v23, (char **)&v33, (int)&v19); /*0x5d76b2*/
          DeleteAndZero(&v33); /*0x5d76b4*/
          if ( String <= 0 ) /*0x5d76bb*/
            goto LABEL_49; /*0x5d76bb*/
          unknown_libname_73(&v20); /*0x5d76c5*/
          v6 = String::Tokenize((const char **)&v19, 0, Delimiter, (void **)&v20); /*0x5d76e2*/
          if ( String::Length((const char **)&v20) ) /*0x5d76e4*/
            break; /*0x5d76e4*/
  LABEL_48:
          DeleteAndZero((void **)&v20); /*0x5d7c50*/
  LABEL_49:
          DeleteAndZero(&v19); /*0x5d7c59*/
          DeleteAndZero(&v23); /*0x5d7c66*/
          if ( ++v29 >= v43 ) /*0x5d7c7a*/
            goto LABEL_50; /*0x5d7c7a*/
          v2 = v42; /*0x5d7655*/
        }
        String::Assign((char **)&v40, asc_830A14); /*0x5d76fa*/
        String::TrimLeft((const char **)&v20, (const char **)&v40); /*0x5d7708*/
        DeleteAndZero(&v40); /*0x5d7711*/
        String::Assign((char **)&v30, asc_830A14); /*0x5d771f*/
        String::TrimRight((const char **)&v20, (const char **)&v30); /*0x5d772d*/
        DeleteAndZero(&v30); /*0x5d7736*/
        v7 = String::GetOrEmpty((char **)&v20); /*0x5d7749*/
        v8 = GetStringCSF((wchar_t *)v7, 0, aDRa2mdpostMult, 1030); /*0x5d7752*/
        WideString::Assign((wchar_t **)&v26, v8); /*0x5d775c*/
        unknown_libname_73(&v22); /*0x5d7765*/
        v9 = String::Tokenize((const char **)&v19, v6, Delimiter, (void **)&v22); /*0x5d7782*/
        if ( !String::Length((const char **)&v22) ) /*0x5d778b*/
        {
  LABEL_47:
          DeleteAndZero((void **)&v22); /*0x5d7c3e*/
          DeleteAndZero::Alt(&v26); /*0x5d7c4b*/
          goto LABEL_48; /*0x5d7c4b*/
        }
        String::Assign((char **)&v38, asc_830A14); /*0x5d779a*/
        String::TrimLeft((const char **)&v22, (const char **)&v38); /*0x5d77a8*/
        DeleteAndZero(&v38); /*0x5d77b1*/
        String::Assign((char **)&v35, asc_830A14); /*0x5d77bf*/
        String::TrimRight((const char **)&v22, (const char **)&v35); /*0x5d77cd*/
        DeleteAndZero(&v35); /*0x5d77d6*/
        v10 = String::GetOrEmpty((char **)&v22); /*0x5d77e9*/
        v11 = GetStringCSF((wchar_t *)v10, 0, aDRa2mdpostMult, 1041); /*0x5d77f2*/
        WideString::Assign((wchar_t **)&v27, v11); /*0x5d77fc*/
        unknown_libname_73(&v21); /*0x5d7805*/
        v12 = String::Tokenize((const char **)&v19, v9, Delimiter, (void **)&v21); /*0x5d7822*/
        if ( !String::Length((const char **)&v21) ) /*0x5d782b*/
        {
  LABEL_46:
          DeleteAndZero((void **)&v21); /*0x5d7c2c*/
          DeleteAndZero::Alt(&v27); /*0x5d7c39*/
          goto LABEL_47; /*0x5d7c39*/
        }
        String::Assign((char **)&v39, asc_830A14); /*0x5d783a*/
        String::TrimLeft((const char **)&v21, (const char **)&v39); /*0x5d7848*/
        DeleteAndZero(&v39); /*0x5d7851*/
        String::Assign((char **)&v37, asc_830A14); /*0x5d785f*/
        String::TrimRight((const char **)&v21, (const char **)&v37); /*0x5d786d*/
        DeleteAndZero(&v37); /*0x5d7876*/
        unknown_libname_73(&v25); /*0x5d787f*/
        v13 = String::Tokenize((const char **)&v19, v12, Delimiter, (void **)&v25); /*0x5d789c*/
        String::Assign((char **)&v41, asc_830A14); /*0x5d78a3*/
        String::TrimLeft((const char **)&v25, (const char **)&v41); /*0x5d78b1*/
        DeleteAndZero(&v41); /*0x5d78ba*/
        String::Assign((char **)&v31, asc_830A14); /*0x5d78c8*/
        String::TrimRight((const char **)&v25, (const char **)&v31); /*0x5d78d6*/
        DeleteAndZero(&v31); /*0x5d78df*/
        unknown_libname_73(&v24); /*0x5d78e8*/
        String::Tokenize((const char **)&v19, v13, Delimiter, (void **)&v24); /*0x5d78fc*/
        String::Assign((char **)&v32, asc_830A14); /*0x5d790a*/
        String::TrimLeft((const char **)&v24, (const char **)&v32); /*0x5d7918*/
        DeleteAndZero(&v32); /*0x5d7921*/
        String::Assign((char **)&v34, asc_830A14); /*0x5d792f*/
        String::TrimRight((const char **)&v24, (const char **)&v34); /*0x5d793d*/
        DeleteAndZero(&v34); /*0x5d7946*/
        IDA_LOBYTE(v36) = 1; /*0x5d794f*/
        if ( String::Length((const char **)&v24) ) /*0x5d7954*/
        {
          v14 = String::GetOrEmpty((char **)&v24); /*0x5d7966*/
          IDA_LOBYTE(v36) = _strcmpi(v14, g_Str_false) != 0; /*0x5d7979*/
        }
        if ( WideString::Length((const wchar_t **)&v26) /*0x5d79a3*/
          && String::Length((const char **)&v21)
          && String::Length((const char **)&v25) )
        {
          v15 = 0; /*0x5d79d3*/
          v28 = (*(int (__thiscall **)(int, void **, void **, int *, int *, int, int))(*(unsigned int *)v44 + 4))( /*0x5d79d5*/
                  v44,
                  &v26,
                  &v27,
                  &v21,
                  &v25,
                  v36,
                  v4);
          v16 = g_MultiplayerMode; /*0x5d79d9*/
          while ( 1 ) /*0x5d79de*/
          {
            if ( (v16 & 1) == 0 ) /*0x5d79e0*/
            {
              g_MultiplayerMode = v16 | 1; /*0x5d79eb*/
              MultiplayerGameMode::ConstructMultiplayerGameModeVectorClass(0, 0); /*0x5d79f0*/
              dword_ABFDB4 = 10; /*0x5d79fa*/
              g_MultiplayerModeConfig = (int)&DynamicVectorClass_MultiplayerGameMode___vftable; /*0x5d7a05*/
              g_MultiplayerGameList = 0; /*0x5d7a0b*/
              atexit(MultiplayerConfig::Cleanup); /*0x5d7a11*/
              v16 = g_MultiplayerMode; /*0x5d7a16*/
            }
            if ( v15 >= g_MultiplayerGameList ) /*0x5d7a2b*/
              break; /*0x5d7a2b*/
            if ( (v16 & 1) == 0 ) /*0x5d7a2f*/
            {
              g_MultiplayerMode = v16 | 1; /*0x5d7a38*/
              Src = 0; /*0x5d7a3d*/
              dword_ABFDA8 = 0; /*0x5d7a43*/
              byte_ABFDAC = 1; /*0x5d7a49*/
              byte_ABFDAD = 0; /*0x5d7a50*/
              g_MultiplayerModeConfig = (int)&DynamicVectorClass_MultiplayerGameMode___vftable; /*0x5d7a56*/
              dword_ABFDB4 = 10; /*0x5d7a5c*/
              g_MultiplayerGameList = 0; /*0x5d7a62*/
              atexit(MultiplayerConfig::Cleanup); /*0x5d7a68*/
              v16 = g_MultiplayerMode; /*0x5d7a6d*/
            }
            if ( *(unsigned int *)(*((unsigned int *)Src + v15) + 40) > *(unsigned int *)(v28 + 40) ) /*0x5d7a88*/
              break; /*0x5d7a88*/
            ++v15; /*0x5d7a8a*/
          }
          if ( v15 ) /*0x5d7a92*/
          {
            if ( (v16 & 1) == 0 ) /*0x5d7b56*/
            {
              g_MultiplayerMode = v16 | 1; /*0x5d7b5f*/
              Src = 0; /*0x5d7b64*/
              dword_ABFDA8 = 0; /*0x5d7b6a*/
              byte_ABFDAC = 1; /*0x5d7b70*/
              byte_ABFDAD = 0; /*0x5d7b77*/
              g_MultiplayerModeConfig = (int)&DynamicVectorClass_MultiplayerGameMode___vftable; /*0x5d7b7d*/
              dword_ABFDB4 = 10; /*0x5d7b83*/
              g_MultiplayerGameList = 0; /*0x5d7b89*/
              atexit(MultiplayerConfig::Cleanup); /*0x5d7b8f*/
            }
            v17 = v15 - 1; /*0x5d7ba2*/
            if ( g_MultiplayerGameList >= dword_ABFDA8 /*0x5d7bcc*/
              && (!byte_ABFDAD && dword_ABFDA8
               || dword_ABFDB4 <= 0
               || !(*(uint8_t (__thiscall **)(int *, int, unsigned int))(g_MultiplayerModeConfig + 8))(
                     &g_MultiplayerModeConfig,
                     dword_ABFDA8 + dword_ABFDB4,
                     0)) )
            {
              goto LABEL_45; /*0x5d7bd1*/
            }
            if ( v17 < g_MultiplayerGameList - 1 ) /*0x5d7bde*/
              memcpy( /*0x5d7bff*/
                (char *)Src + 4 * v17 + 8,
                (char *)Src + 4 * v17 + 4,
                4 * (g_MultiplayerGameList + 0x3FFFFFFF * (v17 + 1)));
            *((unsigned int *)Src + v17 + 1) = v28; /*0x5d7c10*/
          }
          else
          {
            if ( (v16 & 1) == 0 ) /*0x5d7a9a*/
            {
              g_MultiplayerMode = v16 | 1; /*0x5d7aa3*/
              Src = 0; /*0x5d7aa8*/
              dword_ABFDA8 = 0; /*0x5d7aae*/
              byte_ABFDAC = 1; /*0x5d7ab4*/
              byte_ABFDAD = 0; /*0x5d7abb*/
              g_MultiplayerModeConfig = (int)&DynamicVectorClass_MultiplayerGameMode___vftable; /*0x5d7ac1*/
              dword_ABFDB4 = 10; /*0x5d7ac7*/
              g_MultiplayerGameList = 0; /*0x5d7acd*/
              atexit(MultiplayerConfig::Cleanup); /*0x5d7ad3*/
            }
            if ( g_MultiplayerGameList >= dword_ABFDA8 /*0x5d7b16*/
              && (!byte_ABFDAD && dword_ABFDA8
               || dword_ABFDB4 <= 0
               || !(*(uint8_t (__thiscall **)(int *, int, unsigned int))(g_MultiplayerModeConfig + 8))(
                     &g_MultiplayerModeConfig,
                     dword_ABFDA8 + dword_ABFDB4,
                     0)) )
            {
              goto LABEL_45; /*0x5d7b1b*/
            }
            if ( g_MultiplayerGameList ) /*0x5d7b28*/
              memcpy((char *)Src + 4, Src, 4 * g_MultiplayerGameList); /*0x5d7b3c*/
            *(unsigned int *)Src = v28; /*0x5d7b4d*/
          }
          ++g_MultiplayerGameList; /*0x5d7c14*/
        }
  LABEL_45:
        DeleteAndZero((void **)&v24); /*0x5d7c1a*/
        DeleteAndZero((void **)&v25); /*0x5d7c27*/
        goto LABEL_46; /*0x5d7c27*/
      }
    }
  LABEL_50:
    HashTable::DestroyHashTableINIClass(v45); /*0x5d7c82*/
  }
  v52 = 0; /*0x5d7c9d*/
  Vector::Clear((int)v51); /*0x5d7ca4*/
  v50[0] = &off_7E1668; /*0x5d7cb0*/
  return BufferIOFileClass::Dtor(v50); /*0x5d7cc0*/
}
}
// 0x5D7CE0
namespace gamemd {
void GameInit_Complete()
{
  int i; // esi
  void (__thiscall ***v1)(unsigned int, int); // ecx
  unsigned char v3[4]; // [esp+8h] [ebp-1Ch] BYREF
  void **v4; // [esp+Ch] [ebp-18h] BYREF
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
      GameInit::InitMultiplayerModes(0, 0); /*0x5d7d08*/
      atexit(MultiplayerConfig::Cleanup); /*0x5d7d12*/
    }
    if ( i >= g_MultiplayerGameList ) /*0x5d7d20*/
      break; /*0x5d7d20*/
    v1 = *(void (__thiscall ****)(unsigned int, int))(*(unsigned int *)(System_Init() + 4) + 4 * i); /*0x5d7d2a*/
    if ( v1 ) /*0x5d7d32*/
      (**v1)(v1, 1); /*0x5d7d37*/
  }
  String::Assign(aBattle); /*0x5d7d4d*/
  LoadMultiplayerModesList(v3, &v4); /*0x5d7d5a*/
  DeleteAndZero(v3); /*0x5d7d63*/
  String::Assign(aManbattle); /*0x5d7d79*/
  LoadMultiplayerModesList(v3, &v5); /*0x5d7d86*/
  DeleteAndZero(v3); /*0x5d7d8f*/
  String::Assign(aSiege); /*0x5d7da5*/
  LoadMultiplayerModesList(v3, &v6); /*0x5d7db2*/
  DeleteAndZero(v3); /*0x5d7dbb*/
  String::Assign(aUnholy); /*0x5d7dd1*/
  LoadMultiplayerModesList(v3, &v7); /*0x5d7dde*/
  DeleteAndZero(v3); /*0x5d7de7*/
  String::Assign(aFreeforall); /*0x5d7dfd*/
  LoadMultiplayerModesList(v3, &v8); /*0x5d7e0a*/
  DeleteAndZero(v3); /*0x5d7e13*/
  String::Assign(aCooperative); /*0x5d7e29*/
  LoadMultiplayerModesList(v3, &v9); /*0x5d7e36*/
  return DeleteAndZero(v3); /*0x5d7e44*/
}
}
// 0x5D9060
namespace gamemd {
int E4Recv_5D9060::sub_5D9060(int a2)
{
  int v2; // ebx
  int v4; // ebp
  int v5; // edx

  v2 = a2; /*0x5d9061*/
  if ( !a2 ) /*0x5d906c*/
    v2 = 1; /*0x5d906e*/
  v4 = 255; /*0x5d9073*/
  while ( 1 ) /*0x5d907b*/
  {
    v5 = v2 + this->uniqueId; /*0x5d907b*/
    this->uniqueId = v5; /*0x5d907f*/
    v5 = v5; /*0x5d9087*/
    if ( v5 > 0xFFFF ) /*0x5d908a*/
      this->uniqueId = 2048; /*0x5d908c*/
    if ( !g_NetworkInterface || g_GameMode_Current[0] != 4 ) /*0x5d90a4*/
      break; /*0x5d90a4*/
    if ( (*(uint8_t (__stdcall **)(unsigned short))(*(unsigned int *)g_NetworkInterface + 104))(v5) ) /*0x5d90a9*/
    {
      (*(void (__thiscall **)(int, int16_t))(*(unsigned int *)g_NetworkInterface + 108))(g_NetworkInterface, v5); /*0x5d90ca*/
    }
    if ( !v4-- ) /*0x5d90b0*/
  }
}
}
// 0x5D9DB0
namespace gamemd {
AbstractClass * * DetectPortAllocationPattern(int a1, short * a2, unsigned short * a3, unsigned char * a4, unsigned char * a5)
{
  int16_t *v5; // ebp
  int v6; // edx
  int v8; // ecx
  int16_t *v9; // edx
  uint16_t *v10; // eax
  int v11; // esi
  int v12; // ebp
  uint16_t v13; // cx
  int16_t v14; // cx
  int v15; // ecx
  int v16; // edi
  int v17; // eax
  int v19; // eax
  uint16_t v20; // ax
  int v21; // esi
  int v22; // ecx
  uint16_t *v23; // eax
  uint16_t v24; // cx
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
            *v9 = *(uint16_t *)((char *)v10 + v11); /*0x5d9e25*/
            *(uint16_t *)((char *)v10 + v11) = v14; /*0x5d9e28*/
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
  v16 = (uint16_t)v15 - *a3; /*0x5d9e55*/
  if ( v16 == 1 ) /*0x5d9e5a*/
  {
    v17 = a3[2]; /*0x5d9e5e*/
    if ( (uint16_t)v17 - v15 == 1 && a3[3] - v17 == 1 ) /*0x5d9e74*/
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
    if ( (uint16_t)v19 - v15 == 2 && a3[3] - v19 == 2 ) /*0x5d9eb7*/
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
        *v23 -= *(uint16_t *)((char *)v23 + (char *)v5 - (char *)a3); /*0x5d9f77*/
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
  int v4; // ebx
  int v5; // eax
  char *v6; // eax
  int v7; // eax
  int v9; // eax
  unsigned int *v10; // ecx
  int v11; // eax
  int v12; // edx
  int v13; // esi
  int v14; // edi
  int v15; // eax
  int v16; // ecx
  LPARAM *v17; // eax
  int v18; // eax
  wchar_t *v19; // [esp-8h] [ebp-134h]
  wchar_t *v20; // [esp-8h] [ebp-134h]
  int v22; // [esp+10h] [ebp-11Ch]
  unsigned char v23[8]; // [esp+14h] [ebp-118h] BYREF
  wchar_t String[80]; // [esp+1Ch] [ebp-110h] BYREF
  char v25[112]; // [esp+BCh] [ebp-70h] BYREF

  v2 = a1; /*0x5da75d*/
  v4 = *(unsigned int *)&HouseClass_Array->gap0[4 * a1]; /*0x5da762*/
  a1 = a1; /*0x5da76c*/
  if ( byte_A8ED74 ) /*0x5da770*/
    Debug::Log(); /*0x5da77f*/
  if ( !v4 || !v4->u8_1EC ) /*0x5da78f*/
    return; /*0x5da797*/
  String[0] = 0; /*0x5da7a0*/
  if ( a2 == 1 ) /*0x5da7a7*/
  {
    v19 = GetStringCSF(aTxtConnectionL, 0, aDRa2mdpostNetd, 464); /*0x5da7c6*/
    swprintf(String, (const size_t)v19, (const wchar_t *const)(v4 + 90154)); /*0x5da7cc*/
  }
  else if ( !a2 ) /*0x5da7d0*/
  {
    v20 = GetStringCSF(aTxtLeftGame, 0, aDRa2mdpostNetd, 466); /*0x5da7f3*/
    swprintf(String, (const size_t)v20, (const wchar_t *const)(v4 + 90154)); /*0x5da7f5*/
  }
  if ( wcslen(String) ) /*0x5da802*/
  {
    v5 = Math::RoundToInt(*(double *)&g_RulesClass_Instance[1].InfantryVirus * 900.0); /*0x5da822*/
    MessageListClass::AddMessage( /*0x5da845*/
      g_GameNetworkObject,
      0,
      0,
      String,
      *(unsigned int *)(v4->q034 + 192),
      16454,
      v5,
      0);
    MapClass::MarkForRedraw(&MapClass_Instance, 0); /*0x5da851*/
  }
  ((void (__stdcall *)(int))Network::sendData)(v2); /*0x5da85d*/
  if ( a2 ) /*0x5da864*/
  {
    if ( g_CurrentFrame ) /*0x5da871*/
    {
      v6 = EventClass::Add2(v25, *((unsigned int *)HouseClass_Player + 12), 0x23u, v2); /*0x5da893*/
      if ( Networking_LastEventIndex < 128 ) /*0x5da8a2*/
      {
        qmemcpy(&g_NetworkPacketIndex[111 * Networking_NextPacketIndex], v6, 0x6Fu); /*0x5da8c2*/
        g_CrateSystemState[Networking_NextPacketIndex] = timeGetTime(); /*0x5da8d3*/
        Networking_NextPacketIndex = ((unsigned char)Networking_NextPacketIndex + 1) & 0x7F; /*0x5da8ea*/
        ++Networking_LastEventIndex; /*0x5da8f0*/
      }
    }
    else
    {
      Network::SendOffer(v4); /*0x5da875*/
    }
  LABEL_21:
    if ( g_GameMode_Current[0] == 4 ) /*0x5da940*/
    {
      if ( g_Network_IsHosting ) /*0x5da94d*/
      {
        if ( SessionClass::IsValidHouse((int)g_GameMode_Current, (void *)v4) ) /*0x5da959*/
        {
          byte_A8E2D0 = 1; /*0x5da96b*/
          v7 = EventClass::validateEventType(&g_NetworkEventQueue); /*0x5da972*/
          v7 = v7; /*0x5da977*/
          if ( v7 != -1 ) /*0x5da97c*/
          {
            v9 = *(unsigned int *)&HouseClass_Array->gap0[4 * v7]; /*0x5da987*/
            v22 = *(unsigned int *)&HouseClass_Array->gap0[4 * v7]; /*0x5da98c*/
            if ( v9 ) /*0x5da990*/
            {
              if ( Game_PlayerCount > 2 ) /*0x5da99f*/
              {
                v10 = 0; /*0x5da9a5*/
                v11 = 0; /*0x5da9a7*/
                if ( Game_PlayerCount > 0 ) /*0x5da9ab*/
                {
                  v12 = Game_PlayerInfoArray; /*0x5da9b3*/
                  while ( *(unsigned int *)(*(unsigned int *)v12 + 111) != v7 ) /*0x5da9ba*/
                  {
                    ++v11; /*0x5da9bc*/
                    v12 += 4; /*0x5da9bd*/
                    if ( v11 >= Game_PlayerCount ) /*0x5da9c2*/
                      goto LABEL_33; /*0x5da9c2*/
                  }
                  v10 = (unsigned int *)(*(unsigned int *)(Game_PlayerInfoArray + 4 * v11) + 40); /*0x5da9d1*/
                  IDA_LOWORD(dword_A8DBBC) = *((unsigned short *)&Network_PlayerPorts + v11); /*0x5da9d4*/
  LABEL_33:
                  v2 = a1; /*0x5da9db*/
                }
                Network::CopyAddress(v10, &a1, (int)v23); /*0x5da9e9*/
                NetworkID::Assign(&dword_A8DBA4, &a1, (int)v23, 0); /*0x5da9ff*/
                Network::FormatAddress((uint16_t *)&dword_A8DBA4, 0); /*0x5daa0b*/
                Debug::Log(); /*0x5daa16*/
                Debug::Log(); /*0x5daa2d*/
                ((void (__stdcall *)(int *))Network::SetPlayerCoords)(&dword_A8DBA4); /*0x5daa3f*/
                v9 = v22; /*0x5daa44*/
              }
              wcscpy(word_A8E258, (const wchar_t *)(v9 + 90154)); /*0x5daa53*/
              Debug::Log(); /*0x5daa62*/
              dword_A8E2AC = v7; /*0x5daa6f*/
              if ( SessionClass::IsValidHouse((int)g_GameMode_Current, 0) ) /*0x5daa77*/
                Network::SendMasterPlayerList((int)&g_NetworkEventQueue); /*0x5daa85*/
            }
          }
        }
      }
    }
    goto LABEL_37; /*0x5daa85*/
  }
  if ( g_GameMode_Current[0] == 4 ) /*0x5da8fe*/
  {
    if ( !*(unsigned int *)dword_B779C4 || (Network::SendOffer(v4), g_GameMode_Current[0] == 4) ) /*0x5da91b*/
    {
      if ( g_Network_IsHosting ) /*0x5da928*/
      {
        ((void (__stdcall *)(int))NetworkManager::RemovePlayer)(v2); /*0x5da934*/
        goto LABEL_21; /*0x5da934*/
      }
    }
  }
  LABEL_37:
  v13 = 0; /*0x5daa8a*/
  if ( Game_PlayerCount > 0 ) /*0x5daa94*/
  {
    v14 = Game_PlayerInfoArray; /*0x5daa9a*/
    v15 = Game_PlayerInfoArray; /*0x5daaa0*/
    while ( *(unsigned int *)(*(unsigned int *)v15 + 111) != v2 ) /*0x5daaa7*/
    {
      ++v13; /*0x5daaa9*/
      v15 += 4; /*0x5daaaa*/
      if ( v13 >= Game_PlayerCount ) /*0x5daaaf*/
        goto LABEL_54; /*0x5daaaf*/
    }
    v16 = 0; /*0x5daab9*/
    v17 = &g_NetworkPlayerName; /*0x5daabb*/
    while ( *v17 != *(unsigned int *)(Game_PlayerInfoArray + 4 * v13) ) /*0x5daac2*/
    {
      ++v17; /*0x5daac4*/
      ++v16; /*0x5daac7*/
      if ( (int)v17 >= (int)&g_PlayerNameListEnd ) /*0x5daacd*/
        goto LABEL_47; /*0x5daacd*/
    }
    *(&g_NetworkPlayerName + v16) = g_HouseClass_ObserverFlags; /*0x5daad6*/
    v14 = Game_PlayerInfoArray; /*0x5daadd*/
  LABEL_47:
    RA2_OPDEL(*(void **)(v14 + 4 * v13)); /*0x5daae3*/
    v18 = (*(int (__thiscall **)(int *, int))(g_PlayerInfoCount + 16))( /*0x5dab03*/
            &g_PlayerInfoCount,
            Game_PlayerInfoArray + 4 * v13);
    if ( v18 != -1 && v18 < Game_PlayerCount && v18 < --Game_PlayerCount ) /*0x5dab1e*/
    {
      do /*0x5dab36*/
      {
        ++v18; /*0x5dab26*/
        *(unsigned int *)(Game_PlayerInfoArray + 4 * v18 - 4) = *(unsigned int *)(Game_PlayerInfoArray + 4 * v18); /*0x5dab2a*/
      }
      while ( v18 < Game_PlayerCount ); /*0x5dab36*/
    }
    Network_Disconnect_69BBF0(v13); /*0x5dab3e*/
    if ( g_GameMode_Current[0] == 4 ) /*0x5dab4a*/
    {
      if ( g_Network_IsHosting ) /*0x5dab53*/
        ((void (__stdcall *)(int))NetworkManager::RemovePlayer)(v2); /*0x5dab5b*/
    }
  }
  LABEL_54:
  --g_ScenarioLoadFlags; /*0x5dab60*/
}
}
// 0x5DB720
namespace gamemd {
void CheckNetworkGameTimeout()
{
  int result; // eax
  int v1; // ebp
  signed int i; // edi
  int v3; // esi
  int v4; // eax
  int v5; // esi
  int v6; // ecx
  int v7; // esi
  DWORD Ticks; // eax
  int v9; // eax
  int v10; // esi
  int v11; // edx
  int v12; // eax
  unsigned int v13[113]; // [esp+10h] [ebp-1C8h] BYREF
  int16_t v14; // [esp+1D4h] [ebp-4h]
  char v15; // [esp+1D6h] [ebp-2h]

  result = g_NetworkPlayerList; /*0x5db720*/
  v1 = 1; /*0x5db72c*/
  for ( i = 1; i < g_NetworkPlayerList; ++i ) /*0x5db737*/
  {
    if ( wcscmp(*(const wchar_t **)(g_NetworkPlayerConfig + 4 * i), g_CurrentPlayerName) ) /*0x5db74b*/
    {
      v3 = g_PerformanceTickOffset; /*0x5db760*/
      if ( g_LastPerformanceTick != -1 ) /*0x5db769*/
        v3 += Timer::GetTicks() - g_LastPerformanceTick; /*0x5db77b*/
      if ( (unsigned int)(v3 - *(unsigned int *)(*(unsigned int *)(g_NetworkPlayerConfig + 4 * i) + 53)) > 0x12C ) /*0x5db78f*/
      {
        Debug::Log(); /*0x5db797*/
        RA2_OPDEL(*(void **)(g_NetworkPlayerConfig + 4 * i)); /*0x5db7a5*/
        v4 = (*(int (__thiscall **)(int *, int))(dword_A8DA5C + 16))(&dword_A8DA5C, g_NetworkPlayerConfig + 4 * i); /*0x5db7c1*/
        if ( v4 != -1 ) /*0x5db7c7*/
          Network_Check(v4); /*0x5db7cf*/
        NetworkLobby::UpdatePlayerList(); /*0x5db7d4*/
        if ( i <= (int)g_NetworkSetupConfig ) /*0x5db7df*/
        {
          GameSetup::DisplayPlayers(); /*0x5db7e3*/
          SendNetworkHeartbeat(0, 1, 0, 0); /*0x5db7f0*/
        }
      }
    }
    result = g_NetworkPlayerList; /*0x5db7f5*/
  }
  if ( g_GameSetupConfig > 1 ) /*0x5db809*/
  {
    do /*0x5db99b*/
    {
      if ( !*(unsigned int *)(*(unsigned int *)(g_GameSetupFlags + 4 * v1) + 52) ) /*0x5db818*/
      {
        v5 = g_PerformanceTickOffset; /*0x5db824*/
        if ( g_LastPerformanceTick != -1 ) /*0x5db82d*/
          v5 += Timer::GetTicks() - g_LastPerformanceTick; /*0x5db83f*/
        *(unsigned int *)(*(unsigned int *)(g_GameSetupFlags + 4 * v1) + 52) = v5; /*0x5db849*/
      }
      v6 = g_LastPerformanceTick; /*0x5db84c*/
      v7 = g_PerformanceTickOffset; /*0x5db852*/
      if ( g_LastPerformanceTick != -1 ) /*0x5db85b*/
      {
        Ticks = Timer::GetTicks(); /*0x5db862*/
        v6 = g_LastPerformanceTick; /*0x5db867*/
        v7 += Ticks - g_LastPerformanceTick; /*0x5db86f*/
      }
      if ( (unsigned int)(v7 - *(unsigned int *)(*(unsigned int *)(g_GameSetupFlags + 4 * v1) + 52)) <= 0x168 ) /*0x5db882*/
      {
        v10 = g_PerformanceTickOffset; /*0x5db8e5*/
        if ( v6 != -1 ) /*0x5db8ee*/
          v10 += Timer::GetTicks() - g_LastPerformanceTick; /*0x5db900*/
        v11 = g_GameSetupFlags; /*0x5db902*/
        v12 = *(unsigned int *)(g_GameSetupFlags + 4 * v1); /*0x5db908*/
        if ( (unsigned int)(v10 - *(unsigned int *)(v12 + 52)) > 0x12C && !*(unsigned char *)(v12 + 56) ) /*0x5db916*/
        {
          memset(v13, 0, sizeof(v13)); /*0x5db92c*/
          v14 = 0; /*0x5db92e*/
          v15 = 0; /*0x5db930*/
          strcpy((char *)&v13[1], g_GameSetupBuffer); /*0x5db954*/
          v13[0] = 5; /*0x5db95d*/
          Network::SendMessage((int)g_NetworkManager, (int)v13, 455, 0, *(unsigned int *)(v11 + 4 * v1) + 40, 0, 0); /*0x5db97d*/
          Event::Dispatch(); /*0x5db982*/
          *(unsigned char *)(*(unsigned int *)(g_GameSetupFlags + 4 * v1) + 56) = 1; /*0x5db98f*/
        }
      }
      else
      {
        RA2_OPDEL(*(void **)(g_GameSetupFlags + 4 * v1)); /*0x5db887*/
        v9 = (*(int (__thiscall **)(int *, int))(dword_A8DA44 + 16))(&dword_A8DA44, g_GameSetupFlags + 4 * v1); /*0x5db8a4*/
        if ( v9 != -1 && v9 < g_GameSetupConfig && v9 < --g_GameSetupConfig ) /*0x5db8bf*/
        {
          do /*0x5db8d7*/
          {
            ++v9; /*0x5db8c7*/
            *(unsigned int *)(g_GameSetupFlags + 4 * v9 - 4) = *(unsigned int *)(g_GameSetupFlags + 4 * v9); /*0x5db8cb*/
          }
          while ( v9 < g_GameSetupConfig ); /*0x5db8d7*/
        }
        GameSetup::DisplayPlayers(); /*0x5db8db*/
      }
      result = g_GameSetupConfig; /*0x5db993*/
      ++v1; /*0x5db998*/
    }
    while ( v1 < g_GameSetupConfig ); /*0x5db99b*/
  }
  return result; /*0x5db9a1*/
}
}
// 0x5DBE20
namespace gamemd {
void SetGameSetupPlayerState(char * a1, int a2)
{
  char *v2; // edi
  int v3; // ebx
  HWND v4; // eax
  char *v5; // eax
  int v6; // esi
  char *v7; // eax

  v2 = a1; /*0x5dbe23*/
  v3 = a2; /*0x5dbe27*/
  if ( !a1 ) /*0x5dbe29*/
  {
    v2 = g_GameSetupBuffer; /*0x5dbe2d*/
    if ( !a2 ) /*0x5dbe32*/
    {
      v4 = (HWND)Dialog::FindByHandle((void *)0xBD); /*0x5dbe39*/
      EnablePlayerSlotControls(v4, 1u); /*0x5dbe42*/
    }
  }
  v5 = CharToWideString(v2); /*0x5dbe4e*/
  if ( !wcscmp((const wchar_t *)v5, g_CurrentPlayerName) ) /*0x5dbe54*/
    v3 = 1; /*0x5dbe60*/
  v6 = 0; /*0x5dbe6a*/
  if ( Game_PlayerCount > 0 ) /*0x5dbe6e*/
  {
    while ( 1 ) /*0x5dbe79*/
    {
      v7 = ToWideStringChar(*(char **)(Game_PlayerInfoArray + 4 * v6)); /*0x5dbe79*/
      if ( !_strcmpi(v7, v2) ) /*0x5dbe7f*/
        break; /*0x5dbe7f*/
      if ( ++v6 >= Game_PlayerCount ) /*0x5dbe93*/
      {
        GameSetup::DisplayPlayers(); /*0x5dbe97*/
        return; /*0x5dbe9f*/
      }
    }
    if ( v6 != -1 ) /*0x5dbea3*/
      *(unsigned int *)(*(unsigned int *)(Game_PlayerInfoArray + 4 * v6) + 119) = v3; /*0x5dbeae*/
  }
  GameSetup::DisplayPlayers(); /*0x5dbeb6*/
}
}
// 0x5DBF50
namespace gamemd {
void UpdateMultiplayerPlayerOptions(CCINIClass * aP0, CCINIClass * aP1, CCINIClass * aP2, int a4, int a5)
{
  int v5; // edi
  int v7; // ebx
  char **v8; // esi
  char *v9; // eax
  HWND v11; // esi
  int v12; // ebx
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
  int v25; // [esp+10h] [ebp-Ch]
  int v27; // [esp+18h] [ebp-4h]

  v5 = -1; /*0x5dbf57*/
  v7 = 0; /*0x5dbf60*/
  v8 = (char **)&g_NetworkPlayerName; /*0x5dbf62*/
  while ( 1 ) /*0x5dbf69*/
  {
    v9 = ToWideStringChar(*v8); /*0x5dbf69*/
    if ( !_strcmpi(v9, aP0) ) /*0x5dbf70*/
      break; /*0x5dbf70*/
    ++v8; /*0x5dbf7c*/
    ++v7; /*0x5dbf7f*/
    if ( (int)v8 >= (int)&g_PlayerNameListEnd ) /*0x5dbf86*/
      goto LABEL_6; /*0x5dbf86*/
  }
  v5 = v7; /*0x5dbf8a*/
  LABEL_6:
  v25 = 0; /*0x5dbf8c*/
  if ( v5 == -1 ) /*0x5dbf97*/
    return 0; /*0x5dbf9c*/
  v11 = (HWND)Dialog::FindByHandle((void *)0xBC); /*0x5dbfaf*/
  if ( !v11 ) /*0x5dbfb3*/
    v11 = (HWND)Dialog::FindByHandle((void *)0xBD); /*0x5dbfbf*/
  v12 = *(&g_NetworkPlayerName + v5); /*0x5dbfc1*/
  v27 = v12; /*0x5dbfca*/
  if ( SessionClass::GetPlayerSide(v12) != aP1 ) /*0x5dbfd9*/
  {
    v25 = 1; /*0x5dbfde*/
    SessionClass::SetPlayerOption(v12, aP1); /*0x5dbfe6*/
  }
  if ( SessionClass::GetOption(*(&g_NetworkPlayerName + v5)) != a4 ) /*0x5dbffd*/
  {
    v25 = 1; /*0x5dc002*/
    SessionClass::SetOption(v12, a4); /*0x5dc00a*/
  }
  if ( SessionClass::GetOption2(*(&g_NetworkPlayerName + v5)) != a5 ) /*0x5dc021*/
  {
    v25 = 1; /*0x5dc026*/
    SessionClass::SetOption2(v12, a5); /*0x5dc02e*/
  }
  ResourceID2CSF = GetResourceID2CSF((void *)v5); /*0x5dc03a*/
  v14 = GetComboBoxSelected(v11, ResourceID2CSF, -1) == -3; /*0x5dc04a*/
  if ( aP1 == -3 ) /*0x5dc050*/
  {
    if ( !v14 ) /*0x5dc054*/
    {
      SetupComboBoxObserver(v11, ResourceID2CSF); /*0x5dc05e*/
      ResourceID3CSF = GetResourceID3CSF((void *)v5); /*0x5dc065*/
      SetupComboBoxRandomAlliance(v11, ResourceID3CSF); /*0x5dc06e*/
      ResourceID4CSF = GetResourceID4CSF((void *)v5); /*0x5dc075*/
      InitComboBoxNone(v11, ResourceID4CSF); /*0x5dc07e*/
      v17 = PlayerSlot::IndexToDlgID((void *)v5); /*0x5dc085*/
      DlgItem = GetDlgItem(v11, v17); /*0x5dc095*/
      SendMessageA(DlgItem, 0x4F1u, 0, 1); /*0x5dc09c*/
      ResourceIDCSF = GetResourceIDCSF((void *)v5); /*0x5dc0a9*/
      FillListBox(v11, ResourceIDCSF); /*0x5dc0af*/
      SetupSkirmishSpawnLocations(v11, ResourceIDCSF, 8); /*0x5dc0b6*/
    }
  }
  else if ( v14 ) /*0x5dc0ba*/
  {
    FillComboBoxRandomOnly(v11, ResourceID2CSF); /*0x5dc0c0*/
    v20 = GetResourceID3CSF((void *)v5); /*0x5dc0c7*/
    FillComboBoxAllianceSlots(v11, v20); /*0x5dc0d0*/
    v21 = GetResourceID4CSF((void *)v5); /*0x5dc0d7*/
    FillLobbyPlayerSlot(v11, v21); /*0x5dc0e0*/
    v22 = PlayerSlot::IndexToDlgID((void *)v5); /*0x5dc0e7*/
    v23 = GetDlgItem(v11, v22); /*0x5dc0f7*/
    SendMessageA(v23, 0x4F1u, 0, 0); /*0x5dc0fe*/
    v24 = GetResourceIDCSF((void *)v5); /*0x5dc10b*/
    FillComboBoxFactions(v11, v24); /*0x5dc111*/
    SetupSkirmishSpawnLocations(v11, v24, -2); /*0x5dc11c*/
  }
  if ( SessionClass::GetPlayerColor(*(&g_NetworkPlayerName + v5)) != aP2 ) /*0x5dc133*/
    SessionClass::SetPlayerColor(v27, aP2); /*0x5dc13a*/
  if ( *(&g_NetworkPlayerName + v5) == *(unsigned int *)Game_PlayerInfoArray ) /*0x5dc14e*/
    g_TauntCommandState = aP2; /*0x5dc150*/
  GameSetup::DisplayPlayers(); /*0x5dc158*/
  return v25; /*0x5dbf99*/
}
}
// 0x5DD8A0
namespace gamemd {
AbstractClass * * SynchronizeMultiplayerGameStart()
{
  int v1; // eax
  int v2; // eax
  int LobbyStatusNetwork; // eax
  int v4; // ecx
  wchar_t *v6; // eax
  int i; // esi
  wchar_t *StringCSF; // [esp-18h] [ebp-1F4h]
  char v9[16]; // [esp+4h] [ebp-1D8h] BYREF
  unsigned int v10[113]; // [esp+14h] [ebp-1C8h] BYREF
  int16_t v11; // [esp+1D8h] [ebp-4h]
  char v12; // [esp+1DAh] [ebp-2h]

  if ( (unsigned int)(Network::GetLobbyStatus(g_NetworkManager) + 2) <= 0x1E ) /*0x5dd8b6*/
    v1 = 30; /*0x5dd8c7*/
  else
    v1 = Network::GetLobbyStatus(g_NetworkManager) + 2; /*0x5dd8c2*/
  v2 = Network::SetConnectionParams(g_NetworkManager, v1, -1, 1000, 1); /*0x5dd8dd*/
  IDA_LOBYTE(v2) = g_MultiplayerSetupState; /*0x5dd8e2*/
  if ( FindAndValidateMap(&Destination, g_MultiplayerConfigState, &g_MultiplayerFlags, v2, 1) == 1 ) /*0x5dd906*/
  {
    Debug::Log(); /*0x5dd911*/
    memset(v10, 0, sizeof(v10)); /*0x5dd924*/
    v11 = 0; /*0x5dd92a*/
    v12 = 0; /*0x5dd942*/
    v10[0] = 19; /*0x5dd943*/
    Network::SendMessage((int)g_NetworkManager, (int)v10, 455, 1, (int)&g_NetworkRematchObject, 0, 0); /*0x5dd94b*/
    while ( Network::GetQueueCount((int)g_NetworkManager) > 0 ) /*0x5dd95c*/
    {
      if ( !Network::ReceiveLoop(g_NetworkManager) ) /*0x5dd963*/
        break; /*0x5dd96a*/
      Event::Dispatch(); /*0x5dd96c*/
    }
    goto LABEL_8; /*0x5dd97d*/
  }
  Debug::Log(); /*0x5dda12*/
  if ( !(unsigned char)g_MultiplayerSetupState || IsRandMap::Sed2((int)g_GameMode_Current) ) /*0x5dda28*/
  {
    SynchronizeMultiplayerGameStart_Start(); /*0x5dda31*/
    if ( RequestNetworkFile(&Destination, 3, 1) ) /*0x5dda42*/
    {
      if ( !IsRandMap::Sed2((int)g_GameMode_Current) || RequestNetworkFile(v9, 3, 1) ) /*0x5dda68*/
      {
  LABEL_8:
        strcpy((char *)g_ScenarioClass_Instance + 4700, &Destination); /*0x5dd97f*/
        LobbyStatusNetwork = Network::GetLobbyStatus(g_NetworkManager); /*0x5dd9b1*/
        if ( LobbyStatusNetwork < 20 ) /*0x5dd9b9*/
        {
          Debug::Log(); /*0x5dd9c1*/
          LobbyStatusNetwork = 20; /*0x5dd9c9*/
        }
        v4 = 8 * LobbyStatusNetwork; /*0x5dd9ce*/
        if ( 8 * LobbyStatusNetwork < 120 ) /*0x5dd9d8*/
          v4 = 120; /*0x5dd9da*/
        Network::SetConnectionParams(g_NetworkManager, LobbyStatusNetwork, -1, v4, 1); /*0x5dd9ea*/
        TacticalClass::SetCameraPosition(g_NetworkManager, 60, -1, 600); /*0x5dd9fd*/
        return 1; /*0x5dda0c*/
      }
    }
  }
  g_GameRulesOptions = -1; /*0x5dda8c*/
  StringCSF = GetStringCSF(g_Str_TXT_OK, 0, g_Str_File_netdlg2_cpp, 710); /*0x5ddaaa*/
  v6 = GetStringCSF(aTxtUnablePlayW, 0, g_Str_File_netdlg2_cpp, 710); /*0x5ddab5*/
  Dialog::ShowMessageBox(a1, v6, StringCSF, 0, 0, 0); /*0x5ddabf*/
  memset(v10, 0, sizeof(v10)); /*0x5ddad3*/
  v11 = 0; /*0x5ddad5*/
  v12 = 0; /*0x5ddad7*/
  v10[0] = 10; /*0x5ddae2*/
  strcpy((char *)&v10[1], g_GameSetupBuffer); /*0x5ddaf9*/
  for ( i = 1; i < g_GameSetupConfig; ++i ) /*0x5ddb0e*/
  {
    Network::SendMessage((int)g_NetworkManager, (int)v10, 455, 1, *(unsigned int *)(g_GameSetupFlags + 4 * i) + 40, 0, 0); /*0x5ddb32*/
    Event::Dispatch(); /*0x5ddb37*/
  }
  Network::SendMessage((int)g_NetworkManager, (int)v10, 455, 0, 0, 0, 0); /*0x5ddb5d*/
  if ( dword_A8D5FC ) /*0x5ddb69*/
    Network::SendMessage((int)g_NetworkManager, (int)v10, 455, 0, (int)&dword_A8D600, 0, 0); /*0x5ddb85*/
  while ( Network::GetQueueCount((int)g_NetworkManager) > 0 ) /*0x5ddb96*/
  {
    if ( !Network::ReceiveLoop(g_NetworkManager) ) /*0x5ddb9d*/
      break; /*0x5ddba4*/
    Event::Dispatch(); /*0x5ddba6*/
  }
  return 0; /*0x5dda06*/
}
}
// 0x5DF180
namespace gamemd {
void SkirmishDialogProc(SkirmishDialog * aP0, int a2, unsigned short a3, HWND a4)
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
            SWAllowed = SendDlgItemMessageA(aP0, 1690, 0xF0u, 0, 0) == 1; /*0x5df3fb*/
          }
          else if ( a3 == 1693 ) /*0x5df39a*/
          {
            IDA_LOBYTE(g_Rules_ShortGame) = 0; /*0x5df3af*/
            if ( SendDlgItemMessageA(aP0, 1693, 0xF0u, 0, 0) == 1 ) /*0x5df3c3*/
            {
              IDA_LOBYTE(g_Rules_ShortGame) = 1; /*0x5df3c6*/
              return 0; /*0x5df3cf*/
            }
          }
        }
        else
        {
          switch ( a3 ) /*0x5df268*/
          {
            case 0x624u: /*0x5df268*/
              BridgeDestruction = 0; /*0x5df36d*/
              if ( SendDlgItemMessageA(aP0, 1572, 0xF0u, 0, 0) == 1 ) /*0x5df381*/
              {
                BridgeDestruction = 1; /*0x5df384*/
                return 0; /*0x5df38d*/
              }
              break;
            case 0x3E8u: /*0x5df268*/
              IDA_LOBYTE(MCVRedeploy) = 0; /*0x5df333*/
              if ( SendDlgItemMessageA(aP0, 1000, 0xF0u, 0, 0) == 1 ) /*0x5df347*/
              {
                IDA_LOBYTE(MCVRedeploy) = 1; /*0x5df34e*/
                return 0; /*0x5df357*/
              }
              break;
            case 0x54Du: /*0x5df268*/
              Crates = 0; /*0x5df2f9*/
              if ( SendDlgItemMessageA(aP0, 1357, 0xF0u, 0, 0) == 1 ) /*0x5df30d*/
              {
                Crates = 1; /*0x5df314*/
                return 0; /*0x5df31d*/
              }
              break;
            case 0x54Eu: /*0x5df268*/
              ShortGame = 0; /*0x5df2a0*/
              if ( SendDlgItemMessageA(aP0, 1358, 0xF0u, 0, 0) == 1 ) /*0x5df2b0*/
              {
                ShortGame = 1; /*0x5df2bb*/
                if ( !Bases ) /*0x5df2c3*/
                {
                  Bases = 1; /*0x5df2d7*/
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
          g_Rules_EngineerCount = 6 - SendDlgItemMessageA(aP0, 1321, 0x400u, 0, 0); /*0x5df1fd*/
        if ( GetDlgItem(aP0, 1026) == a4 ) /*0x5df20d*/
          g_Rules_Bases = SendDlgItemMessageA(aP0, 1026, 0x400u, 0, 0); /*0x5df220*/
        if ( GetDlgItem(aP0, 1359) == a4 ) /*0x5df231*/
        {
          g_Rules_MultiEngineer = SendDlgItemMessageA(aP0, 1359, 0x400u, 0, 0); /*0x5df248*/
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
  char v6; // bl
  int v7; // ebx
  wchar_t *v8; // eax
  void *v9; // [esp+10h] [ebp-1DCh] BYREF
  int v10; // [esp+14h] [ebp-1D8h]
  int v11; // [esp+1Ch] [ebp-1D0h]
  unsigned int v12[113]; // [esp+24h] [ebp-1C8h] BYREF
  int16_t v13; // [esp+1E8h] [ebp-4h]
  char v14; // [esp+1EAh] [ebp-2h]

  v10 = a1; /*0x5df41f*/
  if ( a1 < 1 ) /*0x5df423*/
  {
    String = GetStringCSF(aTxtMustSelectG, 0, g_Str_File_netdlg2_cpp, 3712); /*0x5df436*/
    Dialog::ShowMessage(-1, (size_t)String); /*0x5df442*/
    PlayVocClass(g_RulesClass_Instance->SpotlightSpeed, 0x2000, 1.0, 0); /*0x5df462*/
    return 0; /*0x5df473*/
  }
  if ( g_NetworkPlayerList <= 1 || a1 > g_NetworkPlayerList ) /*0x5df484*/
  {
    v5 = GetStringCSF(aTxtNothingToJo, 0, g_Str_File_netdlg2_cpp, 3719); /*0x5df87b*/
  }
  else if ( strlen(g_GameSetupBuffer) ) /*0x5df48f*/
  {
    if ( !strcmp(g_GameSetupBuffer, ToWideStringChar((char *)dword_AC117C)) /*0x5df6c6*/
      || !strcmp(g_GameSetupBuffer, ToWideStringChar((char *)dword_AC1180))
      || !strcmp(g_GameSetupBuffer, ToWideStringChar((char *)dword_AC1184))
      || !strcmp(g_GameSetupBuffer, ToWideStringChar((char *)dword_AC1188))
      || !strcmp(g_GameSetupBuffer, ToWideStringChar((char *)dword_AC118C))
      || !strcmp(g_GameSetupBuffer, ToWideStringChar((char *)dword_AC1190))
      || !strcmp(g_GameSetupBuffer, ToWideStringChar((char *)dword_AC1194))
      || (String::Assign((char **)&v9, g_GameSetupBuffer), v6 = Network_Send(&v9), DeleteAndZero(&v9), v6) )
    {
      v8 = GetStringCSF(aErrorNameisres, 0, g_Str_File_netdlg2_cpp, 3742); /*0x5df82c*/
      Dialog::ShowMessage(-1, (size_t)v8); /*0x5df838*/
      PlayVocClass(g_RulesClass_Instance->SpotlightSpeed, 0x2000, 1.0, 0); /*0x5df858*/
      return 0; /*0x5df869*/
    }
    v7 = v10; /*0x5df6d1*/
    if ( *(unsigned char *)(*(unsigned int *)(g_NetworkPlayerConfig + 4 * v10) + 52) ) /*0x5df6d8*/
    {
      memset(v12, 0, sizeof(v12)); /*0x5df704*/
      v13 = 0; /*0x5df706*/
      v14 = 0; /*0x5df708*/
      v12[0] = 6; /*0x5df713*/
      strcpy((char *)&v12[1], g_GameSetupBuffer); /*0x5df72e*/
      strcpy((char *)&v12[6], byte_ABFF7C); /*0x5df750*/
      *(unsigned int *)((char *)&v12[11] + 3) = Session::GetPlayerOption(g_GameMode_Current); /*0x5df768*/
      *(unsigned int *)((char *)&v12[12] + 3) = Session::GetPlayerColor(g_GameMode_Current); /*0x5df776*/
      *(unsigned int *)((char *)&v12[14] + 3) = NetworkBuffer::GetField2(&g_CoordScatterManager); /*0x5df784*/
      *(unsigned int *)((char *)&v12[15] + 3) = NetworkBuffer::GetField3(&g_CoordScatterManager); /*0x5df799*/
      *(unsigned int *)((char *)&v12[16] + 3) = dword_AC026C; /*0x5df7a2*/
      *(unsigned int *)((char *)&v12[18] + 3) = dword_AC0270; /*0x5df7a6*/
      *(unsigned int *)((char *)&v12[17] + 3) = dword_AC0274; /*0x5df7aa*/
      *(unsigned int *)((char *)&v12[19] + 3) = GameOptions::GetEntry(); /*0x5df7bf*/
      *(unsigned int *)((char *)&v12[21] + 3) = a2; /*0x5df7c3*/
      Network::SendMessage( /*0x5df7e3*/
        (int)g_NetworkManager,
        (int)v12,
        455,
        1,
        *(unsigned int *)(g_NetworkPlayerConfig + 4 * v7) + 40,
        0,
        0);
      dword_AC0230 = Timer::GetTicks(); /*0x5df7fa*/
      dword_AC0234 = v11; /*0x5df800*/
      dword_AC0238 = 600; /*0x5df806*/
      return 1; /*0x5df81a*/
    }
    v5 = GetStringCSF((wchar_t *)aTxtGameIsClose, 0, g_Str_File_netdlg2_cpp, 3750); /*0x5df6f0*/
  }
  else
  {
    v5 = GetStringCSF((wchar_t *)g_Str_TXT_NAME_ERROR, 0, g_Str_File_netdlg2_cpp, 3727); /*0x5df4ac*/
  }
  Dialog::ShowMessage(-1, (size_t)v5); /*0x5df888*/
  PlayVocClass(g_RulesClass_Instance->SpotlightSpeed, 0x2000, 1.0, 0); /*0x5df8a7*/
  return 0; /*0x5df469*/
}
}
// 0x5DF9E0
namespace gamemd {
void int Network_SendHeartbeat(int a1, int a2, int a3, int a4)
{
  DWORD Ticks; // eax
  int v6; // esi
  signed int v7; // eax
  int v8; // esi
  signed int v9; // eax
  signed int result; // eax
  int v11; // esi
  int v12; // edx
  int v13; // [esp+10h] [ebp-1D4h]
  unsigned int v15[113]; // [esp+1Ch] [ebp-1C8h] BYREF
  int16_t v16; // [esp+1E0h] [ebp-4h]
  char v17; // [esp+1E2h] [ebp-2h]

  if ( (byte_AC01BC & 1) == 0 ) /*0x5df9fb*/
  {
    byte_AC01BC |= 1u; /*0x5dfa06*/
    dword_AC0220 = Timer::GetTicks(); /*0x5dfa11*/
    dword_AC0228 = 0; /*0x5dfa16*/
    atexit(nullsub_27); /*0x5dfa21*/
  }
  if ( (byte_AC01BC & 2) == 0 ) /*0x5dfa30*/
  {
    byte_AC01BC |= 2u; /*0x5dfa3c*/
    dword_AC0200 = Timer::GetTicks(); /*0x5dfa47*/
    dword_AC0208 = 0; /*0x5dfa4c*/
    atexit(nullsub_26); /*0x5dfa57*/
  }
  if ( (byte_AC01BC & 4) == 0 ) /*0x5dfa66*/
  {
    byte_AC01BC |= 4u; /*0x5dfa72*/
    dword_ABFF70 = Timer::GetTicks(); /*0x5dfa7d*/
    dword_ABFF78 = 0; /*0x5dfa82*/
    atexit(nullsub_25); /*0x5dfa8d*/
  }
  if ( a4 ) /*0x5dfa9c*/
  {
    dword_AC0220 = Timer::GetTicks(); /*0x5dfaac*/
    dword_AC0228 = 120; /*0x5dfab5*/
    dword_AC0224 = v13; /*0x5dfabf*/
    Ticks = Timer::GetTicks(); /*0x5dfac4*/
    dword_AC0208 = 35; /*0x5dfad2*/
    dword_AC0200 = Ticks; /*0x5dfadc*/
    dword_AC0204 = v13; /*0x5dfae1*/
    dword_ABFF70 = Timer::GetTicks(); /*0x5dfaec*/
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
  v7 = Timer::GetTicks() - dword_AC0220; /*0x5dfb1f*/
  if ( v7 < v6 ) /*0x5dfb27*/
  {
    v6 -= v7; /*0x5dfb29*/
    goto LABEL_12; /*0x5dfb29*/
  }
  LABEL_14:
  dword_AC0220 = Timer::GetTicks(); /*0x5dfb37*/
  dword_AC0224 = v13; /*0x5dfb4e*/
  dword_AC0228 = 120; /*0x5dfb54*/
  if ( Dialog::GetCurrentType() != 188 || a1 ) /*0x5dfb68*/
  {
    memset(v15, 0, sizeof(v15)); /*0x5dfb79*/
    v16 = 0; /*0x5dfb7b*/
    v17 = 0; /*0x5dfb7d*/
    v15[0] = 0; /*0x5dfb88*/
    strcpy((char *)&v15[1], g_GameSetupBuffer); /*0x5dfb9d*/
    Network::SendMessage((int)&g_NetworkManager, (int)v15, 455, 0, 0, 0, 0); /*0x5dfbb7*/
    if ( dword_A8D5FC ) /*0x5dfbc2*/
      Network::SendMessage((int)&g_NetworkManager, (int)v15, 455, 0, (int)&dword_A8D600, 0, 0); /*0x5dfbdb*/
  }
  LABEL_18:
  if ( (int)g_NetworkSetupConfig <= 0 || (int)g_NetworkSetupConfig >= g_NetworkPlayerList ) /*0x5dfbef*/
  {
  LABEL_24:
    if ( !a2 ) /*0x5dfc1f*/
      goto LABEL_27; /*0x5dfc1f*/
    goto LABEL_25; /*0x5dfc1f*/
  }
  v8 = dword_AC0208; /*0x5dfbf6*/
  if ( dword_AC0200 != -1 ) /*0x5dfbff*/
  {
    v9 = Timer::GetTicks() - dword_AC0200; /*0x5dfc0b*/
    if ( v9 >= v8 ) /*0x5dfc13*/
      goto LABEL_25; /*0x5dfc13*/
    v8 -= v9; /*0x5dfc15*/
  }
  if ( v8 ) /*0x5dfc19*/
    goto LABEL_24; /*0x5dfc19*/
  LABEL_25:
  dword_AC0200 = Timer::GetTicks(); /*0x5dfc25*/
  dword_AC0204 = v13; /*0x5dfc3c*/
  dword_AC0208 = 35; /*0x5dfc41*/
  memset(v15, 0, sizeof(v15)); /*0x5dfc52*/
  v16 = 0; /*0x5dfc60*/
  v17 = 0; /*0x5dfc62*/
  v15[0] = 2; /*0x5dfc63*/
  strcpy((char *)&v15[1], ToWideStringChar(*(char **)(g_NetworkPlayerConfig + 4 * g_NetworkSetupConfig))); /*0x5dfc8f*/
  Network::SendMessage((int)&g_NetworkManager, (int)v15, 455, 0, 0, 0, 0); /*0x5dfca9*/
  if ( dword_A8D5FC ) /*0x5dfcb4*/
    Network::SendMessage((int)&g_NetworkManager, (int)v15, 455, 0, (int)&dword_A8D600, 0, 0); /*0x5dfccd*/
  LABEL_27:
  result = dword_ABFF70; /*0x5dfcd2*/
  v11 = dword_ABFF78; /*0x5dfcd7*/
  if ( dword_ABFF70 != -1 ) /*0x5dfce0*/
  {
    result = Timer::GetTicks() - dword_ABFF70; /*0x5dfcec*/
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
  dword_ABFF70 = Timer::GetTicks(); /*0x5dfd12*/
  dword_ABFF74 = v13; /*0x5dfd29*/
  dword_ABFF78 = 83; /*0x5dfd2e*/
  memset(v15, 0, sizeof(v15)); /*0x5dfd3f*/
  v16 = 0; /*0x5dfd41*/
  v17 = 0; /*0x5dfd43*/
  v15[0] = 4; /*0x5dfd58*/
  v12 = g_TauntCommandState; /*0x5dfd66*/
  strcpy((char *)&v15[1], g_GameSetupBuffer); /*0x5dfd6f*/
  *(unsigned int *)((char *)&v15[11] + 3) = dword_A8B37C; /*0x5dfd86*/
  *(unsigned int *)((char *)&v15[12] + 3) = v12; /*0x5dfd95*/
  result = Network::SendMessage((int)&g_NetworkManager, (int)v15, 455, 0, 0, 0, 0); /*0x5dfd99*/
  if ( dword_A8D5FC ) /*0x5dfda4*/
    return Network::SendMessage((int)&g_NetworkManager, (int)v15, 455, 0, (int)&dword_A8D600, 0, 0); /*0x5dfdbd*/
  return result; /*0x5dfdc2*/
}
}
// 0x5DFE00
namespace gamemd {
void Network_SendPlayerOptions(unsigned int * a1, int a2)
{
  char *v3; // eax
  char *v4; // eax
  const void *v6; // ebx
  char *v7; // eax
  char *v8; // eax
  unsigned int v9[113]; // [esp+10h] [ebp-1C8h] BYREF
  int16_t v10; // [esp+1D4h] [ebp-4h]
  char v11; // [esp+1D6h] [ebp-2h]

  if ( *a1 || byte_A8D60C ) /*0x5dfe1e*/
  {
    if ( *a1 != 2 ) /*0x5dff1a*/
      return 0; /*0x5dff1a*/
    v6 = a1 + 1; /*0x5dff20*/
    v7 = ToWideStringChar((char *)g_CurrentPlayerName); /*0x5dff28*/
    if ( _strcmpi(v6, v7) || !wcslen(g_CurrentPlayerName) || byte_A8D60C || g_NetworkSettingsState < 2 ) /*0x5dff68*/
    {
      return 0; /*0x5e00a0*/
    }
    else
    {
      memset(v9, 0, sizeof(v9)); /*0x5dff7d*/
      v10 = 0; /*0x5dff7f*/
      v11 = 0; /*0x5dff81*/
      v9[0] = 3; /*0x5dff8c*/
      strcpy((char *)&v9[1], g_GameSetupBuffer); /*0x5dffa7*/
      strcpy((char *)&v9[6], byte_ABFF7C); /*0x5dffc9*/
      *(unsigned int *)((char *)&v9[11] + 3) = Session::GetPlayerOption(g_GameMode_Current); /*0x5dffe1*/
      *(unsigned int *)((char *)&v9[12] + 3) = Session::GetPlayerColor(g_GameMode_Current); /*0x5dffef*/
      *(unsigned int *)((char *)&v9[13] + 3) = WideString::Hash(g_CurrentPlayerName); /*0x5dfffe*/
      *(unsigned int *)((char *)&v9[20] + 3) = g_NetworkPlayerCount; /*0x5e0009*/
      *(unsigned int *)((char *)&v9[21] + 3) = g_NetworkPlayerCount == g_MPCooperativeState; /*0x5e0019*/
      if ( Game_PlayerCount ) /*0x5e001d*/
      {
        if ( *(unsigned int *)(*(unsigned int *)Game_PlayerInfoArray + 107) != -1 ) /*0x5e0038*/
          *(unsigned int *)((char *)&v9[21] + 3) = 0; /*0x5e003a*/
        Network::SendMessage((int)g_NetworkManager, (int)v9, 455, 1, a2, 0, 0); /*0x5e0058*/
        v8 = ToWideStringChar(*(char **)Game_PlayerInfoArray); /*0x5e0065*/
        if ( !_strcmpi(v6, v8) ) /*0x5e006c*/
        {
          CheckGameSettingsChanged(1, 1); /*0x5e007c*/
          if ( g_GameStateFlags ) /*0x5e0089*/
            (*(void (__thiscall **)(int))(*(unsigned int *)g_GameStateFlags + 96))(g_GameStateFlags); /*0x5e008d*/
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
    if ( wcslen(g_CurrentPlayerName) ) /*0x5dfe29*/
    {
      if ( !g_NetworkQuitFlag || (v3 = ToWideStringChar((char *)g_CurrentPlayerName), !_strcmpi(g_GameSetupBuffer, v3)) ) /*0x5dfe52*/
      {
        v4 = ToWideStringChar((char *)g_CurrentPlayerName); /*0x5dfe67*/
        if ( _strcmpi(g_GameSetupBuffer, v4) && !g_BounceClassInit ) /*0x5dfe85*/
          return 1; /*0x5dfe93*/
        memset(v9, 0, sizeof(v9)); /*0x5dfe9f*/
        v10 = 0; /*0x5dfea1*/
        v11 = 0; /*0x5dfea3*/
        v9[0] = 1; /*0x5dfea9*/
        strcpy((char *)&v9[1], ToWideStringChar((char *)g_CurrentPlayerName)); /*0x5dfed4*/
        *(unsigned int *)((char *)&v9[11] + 3) = *(unsigned int *)((char *)&v9[11] + 3) & 0xFFFFFFFE | g_NetworkQuitFlag & 1; /*0x5dfef6*/
        Network::SendMessage((int)g_NetworkManager, (int)v9, 455, 1, a2, 0, 0); /*0x5dff05*/
      }
    }
    return 1; /*0x5dff0d*/
  }
}
}
// 0x5D0590
namespace gamemd {
void nullsub_24()
{
  ; /*0x5d0590*/
}
} // namespace gamemd

// 0x5D30C0
namespace gamemd {
unsigned int * E4Recv_5D30C0::sub_5D30C0(wchar_t * String, unsigned int * a3)
{
  wchar_t *v3; // esi
  int v4; // ebx
  size_t v6; // eax
  int v7; // ebp
  int v8; // edi
  int v10; // [esp+Ch] [ebp-4h]

  v3 = String; /*0x5d30c3*/
  v4 = 0; /*0x5d30c7*/
  v10 = 0; /*0x5d30ce*/
  if ( String && (v6 = wcslen(String)) != 0 ) /*0x5d30df*/
  {
    v7 = this->M8; /*0x5d30e2*/
    while ( 1 ) /*0x5d30e9*/
    {
      for ( IDA_LOWORD(v6) = *v3; *v3; IDA_LOWORD(v6) = *v3 ) /*0x5d30e9*/
      {
        if ( (unsigned short)v6 == 10 ) /*0x5d30f5*/
          break; /*0x5d30f5*/
        ++v3; /*0x5d30fc*/
        v6 = (*(int (__thiscall **)(size_t *, size_t))(*&this->M4))(this, v6); /*0x5d30ff*/
        v4 += v6; /*0x5d3102*/
      }
      if ( v4 > v10 ) /*0x5d3110*/
        v10 = v4; /*0x5d3112*/
      if ( *v3 == 10 ) /*0x5d311a*/
      {
        v6 = this->M8; /*0x5d311c*/
        ++v3; /*0x5d311f*/
        v7 += v6; /*0x5d3122*/
      }
      if ( !*v3 ) /*0x5d3124*/
        break; /*0x5d3124*/
      v4 = 0; /*0x5d30e7*/
    }
    v8 = this->M4; /*0x5d312a*/
    a3[3] = v7; /*0x5d3137*/
    a3[2] = v10 + v8; /*0x5d313a*/
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
  unsigned int v5; // esi
  unsigned int *WindowLongA; // eax

  result = BaseDialogProc(hWnd, a2, a3, (unsigned int)a4); /*0x5d36ba*/
  if ( !result ) /*0x5d36c1*/
  {
    if ( a2 == 273 ) /*0x5d36cd*/
    {
      v5 = IDA_HIWORD(a3); /*0x5d36f2*/
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
  int64_t result; // rax

  v0 = Math::Sin(dbl_ABFC10 - dbl_ABFC38); /*0x5d38c2*/
  result = Math::RoundToInt(v0 * dbl_ABFC30 * 0.5); /*0x5d38d6*/
  dword_ABFC88 = result; /*0x5d38db*/
  return result; /*0x5d38e0*/
}
} // namespace gamemd

// 0x5D4C90
namespace gamemd {
void sub_5D4C90()
{
  dword_ABFC90 = (int)&VectorClass_HWND_____vftable; /*0x5d4c98*/
  if ( dword_ABFC94 && byte_ABFC9D ) /*0x5d4cac*/
  {
    RA2_OPDEL(dword_ABFC94); /*0x5d4caf*/
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
  dword_ABFCB8 = (int)&VectorClass_AcceleratorTracker_vftable; /*0x5d4d18*/
  if ( dword_ABFCBC && byte_ABFCC5 ) /*0x5d4d2c*/
  {
    RA2_OPDEL(dword_ABFCBC); /*0x5d4d2f*/
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
  int64_t result; // rax

  v0 = Math::Sin(dbl_ABFD38 - dbl_ABFD60); /*0x5d5992*/
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
  return *(unsigned int *)(*(unsigned int *)&HouseClass_Array->gap0[4 * a1] + 90204); /*0x5d7563*/
}
} // namespace gamemd

// 0x5D7580
namespace gamemd {
unsigned int * E4Recv_5D7580::sub_5D7580()
{
  return this; /*0x5d7588*/
}
} // namespace gamemd

// 0x5D7CD0
namespace gamemd {
void E4Recv_5D7CD0::sub_5D7CD0()
{
}
} // namespace gamemd

// 0x5D7FF0
namespace gamemd {
unsigned int * E4Recv_5D7FF0::___Gfacet_locale_std__UAEPAXI_Z_127(char a2)
{
  if ( (a2 & 1) != 0 ) /*0x5d7fff*/
    RA2_OPDEL(); /*0x5d8002*/
  return this; /*0x5d800c*/
}
} // namespace gamemd

// 0x5D8010
namespace gamemd {
unsigned int * E4Recv_5D8010::___Gfacet_locale_std__UAEPAXI_Z_128(char a2)
{
  if ( (a2 & 1) != 0 ) /*0x5d801f*/
    RA2_OPDEL(); /*0x5d8022*/
  return this; /*0x5d802c*/
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
  int64_t result; // rax

  v0 = Math::Sin(dbl_ABFDD8 - dbl_ABFE00); /*0x5d8b42*/
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
  int64_t result; // rax

  v0 = Math::Sin(dbl_ABFE58 - dbl_ABFE80); /*0x5d8e62*/
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
  *this = 0; /*0x5d8fb4*/
  this->M4 = 0; /*0x5d8fb6*/
  this->M8 = 0; /*0x5d8fb9*/
  *(unsigned int *)&this->M12 = 0; /*0x5d8fbc*/
  return this; /*0x5d8fbf*/
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
  int64_t result; // rax

  v0 = Math::Sin(dbl_ABFEF0 - dbl_ABFF18); /*0x5da5b2*/
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
  unsigned int i; // esi
  int v3; // [esp+8h] [ebp-54h] BYREF
  char String[80]; // [esp+Ch] [ebp-50h] BYREF

  v3 = 0; /*0x5dab96*/
  strcpy(String, this); /*0x5daba7*/
  _strupr(String); /*0x5dabb5*/
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
  int64_t result; // rax

  v0 = Math::Sin(dbl_AC0198 - dbl_AC01C8); /*0x5dadd2*/
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
  dword_AC0230 = Timer::GetTicks(); /*0x5daeef*/
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

  v0 = SendDlgItemMessageA(hDlg, 1363, 0x188u, 0, 0); /*0x5e670d*/
  if ( v0 != -1 ) /*0x5e6712*/
  {
    v1 = SendDlgItemMessageA(hDlg, 1363, 0x199u, v0, 0); /*0x5e672c*/
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
        if ( IsRandMap::Sed(*(unsigned int *)(g_MultiplayerGameState + 4 * v2)) ) /*0x5e677a*/
        {
          v4 = g_UIControlState; /*0x5e6783*/
          if ( g_UIControlState ) /*0x5e678b*/
          {
            ComPtr::Dtor(g_UIControlState); /*0x5e678f*/
            RA2_OPDEL(v4); /*0x5e6795*/
          }
          v5 = operator new(4u); /*0x5e679f*/
          if ( v5 ) /*0x5e67a9*/
            v6 = (void *)unknown_libname_27(v5); /*0x5e67ad*/
          else
            v6 = 0; /*0x5e67b4*/
          g_UIControlState = v6; /*0x5e67bd*/
          Surface::LoadToSurfaceSHP((char **)v6, ExistingFileName); /*0x5e67c2*/
          if ( !*(unsigned int *)g_UIControlState ) /*0x5e67cc*/
            Session::PrepareGame(hDlg); /*0x5e67d7*/
          InvalidateRect(hDlg, 0, 0); /*0x5e67e7*/
          ScenarioClass::CopyStartPositions(); /*0x5e67ed*/
        }
        else
        {
          Session::PrepareGame(hDlg); /*0x5e67fa*/
        }
        dword_AC0D30 = v2; /*0x5e6805*/
        g_GameRulesOptions = dword_AC10E0; /*0x5e680b*/
        LoadScenarioClassByIndex(dword_AC10E0); /*0x5e6811*/
      }
    }
  }
  LABEL_20:
  v7 = hDlg; /*0x5e6816*/
  v8 = SendDlgItemMessageA(hDlg, 1363, 0x188u, 0, 0); /*0x5e682c*/
  if ( v8 == -1 || (v9 = (const wchar_t *)SendDlgItemMessageA(v7, 1363, 0x199u, v8, 0)) == 0 ) /*0x5e6845*/
    word_AC0EC8 = 0; /*0x5e6857*/
  else
    wcscpy(&word_AC0EC8, v9); /*0x5e684d*/
  if ( g_GameMode_Current[0] == 3 ) /*0x5e686b*/
  {
    Event::Dispatch(); /*0x5daf20*/
    NetworkLobby::MessageHandler(); /*0x5daf25*/
    return 0; /*0x5daf2a*/
  }
  else if ( g_GameMode_Current[0] == 4 ) /*0x5e6875*/
  {
    return Game::ProcessIdle(); /*0x5e6877*/
  }
  else
  {
    if ( g_GameMode_Current[0] == 1 || g_GameMode_Current[0] == 2 ) /*0x5e6884*/
    {
      if ( dword_ABF10C ) /*0x5bb268*/
      {
        CellClass::SetOccupancy(dword_ABF10C, 0); /*0x5bb26c*/
        ModemGuest::ProcessPacket(dword_ABF10C, 1); /*0x5bb279*/
      }
    }
    Event::Dispatch(); /*0x5e6886*/
    return 0; /*0x5e688b*/
  }
}
} // namespace gamemd

// 0x5DB680
namespace gamemd {
char InitNetworkGameState()
{
  int v1; // [esp+0h] [ebp-Ch] BYREF
  unsigned char v2[8]; // [esp+4h] [ebp-8h] BYREF

  if ( !Network_Init(g_NetworkManager) ) /*0x5db688*/
    return 0; /*0x5db691*/
  if ( g_GameMode_Current[0] != 4 ) /*0x5db69e*/
  {
    if ( dword_A8D5FC ) /*0x5db6a7*/
    {
      Network::CopyAddress(&dword_A8D600, &v1, (int)v2); /*0x5db6b8*/
      Network_Init_542FC0(&v1); /*0x5db6c7*/
    }
  }
  LoadNetworkShareStrings(); /*0x5db6cc*/
  Game::ResetFlags(); /*0x5db6d1*/
  Network::InitPlayerSlots(); /*0x5db6d6*/
  return 1; /*0x5db693*/
}
} // namespace gamemd

// 0x5DE360
namespace gamemd {
char SendNetworkLobbyChatMessage(HWND hWnd, LPARAM a2, int a3)
{
  HWND DlgItem; // eax
  signed int v5; // ebp
  HWND v6; // eax
  char result; // al
  char *v8; // eax
  int v9; // edi
  int i; // esi
  int v11; // edi
  int j; // esi
  wchar_t lParam[111]; // [esp+14h] [ebp-2A8h] BYREF
  int16_t v15; // [esp+F2h] [ebp-1CAh]
  unsigned int v16[113]; // [esp+F4h] [ebp-1C8h] BYREF
  int16_t v17; // [esp+2B8h] [ebp-4h]
  char v18; // [esp+2BAh] [ebp-2h]

  DlgItem = GetDlgItem(hWnd, 1344); /*0x5de37c*/
  SendMessageA(DlgItem, 0x4B3u, 0x6Fu, (LPARAM)lParam); /*0x5de391*/
  v15 = 0; /*0x5de397*/
  v5 = wcslen(lParam); /*0x5de3aa*/
  v6 = GetDlgItem(hWnd, 1344); /*0x5de3b2*/
  SendMessageA(v6, 0x4B2u, 0, (LPARAM)&g_TypeClass_DefaultString); /*0x5de3c1*/
  result = InvalidateRect(hWnd, 0, 1); /*0x5de3c8*/
  if ( v5 > 2 ) /*0x5de3d1*/
  {
    v8 = CharToWideString(g_GameSetupBuffer); /*0x5de3e1*/
    Dialog::ShowMessage(a2, (size_t)g_Str_Trace___s_, v8, lParam); /*0x5de3f1*/
    memset(v16, 0, sizeof(v16)); /*0x5de40b*/
    v17 = 0; /*0x5de40d*/
    v18 = 0; /*0x5de40f*/
    v16[0] = 12; /*0x5de41a*/
    strcpy((char *)&v16[1], g_GameSetupBuffer); /*0x5de43b*/
    wcscpy((wchar_t *)&v16[12], lParam); /*0x5de44a*/
    v16[68] = a3; /*0x5de45e*/
    v16[69] = WideString::Hash(g_CurrentPlayerName); /*0x5de46a*/
    result = g_NetworkSettingsState; /*0x5de471*/
    if ( g_NetworkSettingsState == 2 ) /*0x5de479*/
    {
      v9 = Game_PlayerCount; /*0x5de47b*/
      for ( i = 1; i < v9; ++i ) /*0x5de488*/
      {
        Network::SendMessage( /*0x5de4b3*/
          (int)g_NetworkManager,
          (int)v16,
          455,
          1,
          *(unsigned int *)(Game_PlayerInfoArray + 4 * i) + 40,
          0,
          0);
        result = Event::Dispatch(); /*0x5de4b8*/
      }
    }
    else
    {
      v11 = g_GameSetupConfig; /*0x5de4cf*/
      for ( j = 1; j < v11; ++j ) /*0x5de4dc*/
      {
        Network::SendMessage((int)g_NetworkManager, (int)v16, 455, 1, *(unsigned int *)(g_GameSetupFlags + 4 * j) + 40, 0, 0); /*0x5de503*/
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
  int i; // esi
  int result; // eax
  unsigned int v4[113]; // [esp+Ch] [ebp-1C8h] BYREF
  int16_t v5; // [esp+1D0h] [ebp-4h]
  char v6; // [esp+1D2h] [ebp-2h]

  memset(v4, 0, sizeof(v4)); /*0x5df8da*/
  v5 = 0; /*0x5df8dc*/
  v6 = 0; /*0x5df8de*/
  v4[0] = 10; /*0x5df8e9*/
  strcpy((char *)&v4[1], g_GameSetupBuffer); /*0x5df900*/
  for ( i = 1; i < Game_PlayerCount; ++i ) /*0x5df915*/
  {
    Network::SendMessage((int)g_NetworkManager, (int)v4, 455, 1, *(unsigned int *)(Game_PlayerInfoArray + 4 * i) + 40, 0, 0); /*0x5df939*/
    Event::Dispatch(); /*0x5df93e*/
  }
  if ( (g_NetworkSettingsState == 1 || g_NetworkSettingsState == 2) /*0x5df968*/
    && !Network::IsBroadcastAddr((unsigned char *)(*(unsigned int *)(g_NetworkPlayerConfig + 4 * a1) + 40)) )
  {
    Network::SendMessage((int)g_NetworkManager, (int)v4, 455, 1, *(unsigned int *)(g_NetworkPlayerConfig + 4 * a1) + 40, 0, 0); /*0x5df991*/
  }
  Network::SendMessage((int)g_NetworkManager, (int)v4, 455, 0, 0, 0, 0); /*0x5df9ad*/
  Game::ResetFlags(); /*0x5df9b2*/
  GameClass::InitDifficultyButtons(); /*0x5df9b7*/
  result = PtrVector::Destroy(&g_PlayerInfoCount); /*0x5df9c1*/
  g_CurrentPlayerName = 0; /*0x5df9c6*/
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
