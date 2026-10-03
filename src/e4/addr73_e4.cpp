// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/E4Recv_730990_e4.hpp"
#include "e4/classes/E4Recv_730A10_e4.hpp"
#include "e4/classes/E4Recv_7310D0_e4.hpp"
#include "e4/classes/E4Recv_731130_e4.hpp"
#include "e4/classes/E4Recv_7325C0_e4.hpp"
#include "e4/classes/E4Recv_733380_e4.hpp"
#include "e4/classes/E4Recv_7336C0_e4.hpp"
#include "e4/classes/E4Recv_733CD0_e4.hpp"
#include "e4/classes/E4Recv_734F50_e4.hpp"
#include "e4/classes/E4Recv_734F80_e4.hpp"
#include "e4/classes/E4Recv_736C10_e4.hpp"
#include "e4/classes/E4Recv_736DF0_e4.hpp"
#include "e4/classes/E4Recv_737180_e4.hpp"
#include "e4/classes/Debug_e4.hpp"
#include "e4/classes/DynamicVector_e4.hpp"
#include "e4/classes/EventClass_e4.hpp"
#include "e4/classes/House_e4.hpp"
#include "e4/classes/Math_e4.hpp"
#include "e4/classes/Tactical_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/ConvertClass_e4.hpp"
#include "e4/classes/ObjectTypeClass_e4.hpp"
#include "e4/classes/Vector_e4.hpp"
#include "e4/classes/CellStruct_e4.hpp"
#include "e4/classes/AudioMixer_e4.hpp"
#include "e4/classes/Coord_e4.hpp"
#include "e4/classes/BuildingTypeClass_e4.hpp"
#include "e4/classes/TeamClass_e4.hpp"
#include "e4/classes/VocClass_e4.hpp"
#include "e4/classes/INIClass_e4.hpp"
#include "e4/classes/E4Recv_717A40_e4.hpp"
#include "e4/classes/BuildingClass_e4.hpp"
#include "e4/classes/ObjectClass_e4.hpp"
#include "e4/classes/String_e4.hpp"
#include "e4/classes/UnitClass_e4.hpp"
#include "e4/classes/MessageListClass_e4.hpp"
#include "e4/classes/TacticalClass_e4.hpp"
#include "e4/classes/FactoryClass_e4.hpp"
#include "e4/classes/TechnoClass_e4.hpp"

// 0x730A90
namespace gamemd {
int AddMessageListPlayerMessage(wchar_t *a1, int a2)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x730A90)
}
}
// 0x730AF0
namespace gamemd {
AbstractClass * * ProcessSelectionExperience()
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x730AF0)
}
}
// 0x730D60
namespace gamemd {
CellStruct * * sub_730D60()
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x730D60)
}
}
// 0x731130
namespace gamemd {
int E4Recv_731130::sub_731130()
{

  int v1; // edi
  int v3; // esi
  int v4; // eax
  ObjectClass *v5; // ecx

  v1 = *(unsigned int *)(unsigned int *)((char *)&stru_A8EB00 + 164) - 1; /*0x731138*/
  if ( *(unsigned int *)(unsigned int *)((char *)&stru_A8EB00 + 164) - 1 < 0 ) /*0x73113f*/
    return 1; /*0x7311a6*/
  while ( 1 ) /*0x731147*/
  {
    v3 = *(unsigned int *)(*(unsigned int *)(unsigned int *)((char *)&stru_A8EB00 + 152) + 4 * v1); /*0x731147*/
    if ( v3 && !*(unsigned char *)(v3 + 129) ) /*0x73114e*/
    {
      if ( *(unsigned int *)&dword_A8B238 ) /*0x73115f*/
        LOBYTE(v4) = ((House*)*(House **)(v3 + 540))->IsHumanPlayer(); /*0x731175*/
      else
        v4 = *(uint8_t *)(*(unsigned int *)(v3 + 540) + 493); /*0x731167*/
      if ( (unsigned char)v4 ) /*0x73117c*/
      {
        v5 = *(ObjectClass **)(v3 + 532); /*0x73117e*/
        if ( v5 != (ObjectClass *)((char *)this - 1) ) /*0x731189*/
          goto LABEL_17; /*0x731189*/
        if ( !*(unsigned char *)(v3 + 131) ) /*0x731193*/
          return 0; /*0x731193*/
        if ( v5 != (ObjectClass *)((char *)this - 1) ) /*0x731197*/
        {
LABEL_17:
          if ( *(unsigned char *)(v3 + 131) ) /*0x731199*/
            return 0; /*0x7311a6*/
        }
      }
    }
    if ( --v1 < 0 ) /*0x7311a4*/
      return 1; /*0x7311a4*/
  }

}
}
// 0x731AA0
namespace gamemd {
AbstractClass * * sub_731AA0()
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x731AA0)
}
}
// 0x731EB0
namespace gamemd {
unsigned int * sub_731EB0(unsigned char (__fastcall *a1)(int, int) a1, int a2)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x731EB0)
}
}
// 0x731F70
namespace gamemd {
unsigned int * TechnoClass_GatherFiltered(unsigned char (__fastcall *a1)(int, int) a1, int a2)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x731F70)
}
}
// 0x732770
namespace gamemd {
int TechnoClass_StepCleanupIfHuman(int a1, void * a2)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x732770)
}
}
// 0x732950
namespace gamemd {
int SelectAllOfType()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x732950)
}
}
// 0x732FF0
namespace gamemd {
char sub_732FF0(void * a1, int (__fastcall *a2)(unsigned int, int) a2, int a3)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x732FF0)
}
}
// 0x7331B0
namespace gamemd {
void sub_7331B0()
{
    // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x7331B0)
}
}
// 0x733380
namespace gamemd {
int E4Recv_733380::UpdateUnitHealthTooltip(char a1, void * aMsgCritical, void * aMsgHealthy, void * aMsgHeavilydama)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x733380)
}
}
// 0x7336C0
namespace gamemd {
int E4Recv_7336C0::DrawUnitExperiencePopup()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x7336C0)
}
}
// 0x7339B0
namespace gamemd {
int SelectUnitsByTheme(char a1)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x7339B0)
}
}
// 0x733CD0
namespace gamemd {
unsigned int * E4Recv_733CD0::sub_733CD0()
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x733CD0)
}
}
// 0x733E10
namespace gamemd {
void * SelectFactionThemeMusic(int a1, const char * a2, int a3, unsigned int * a4)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x733E10)
}
}
// 0x734E60
namespace gamemd {
wchar_t * GetStringCSF(wchar_t *Format, unsigned int *a2, const char *aP3, int a4)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x734E60)
}
}
// 0x734F50
namespace gamemd {
int E4Recv_734F50::sub_734F50()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x734F50)
}
}
// 0x734F80
namespace gamemd {
int E4Recv_734F80::sub_734F80()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x734F80)
}
}
// 0x734FB0
namespace gamemd {
int sub_734FB0()
{
  return dword_B1CF84; /*0x734fb5*/
}
}
// 0x734FC0
namespace gamemd {
int sub_734FC0()
{
  return dword_B1CF60; /*0x734fc5*/
}
}
// 0x735120
namespace gamemd {
char * CharToWideString(unsigned char *a1)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x735120)
}
}
// 0x735370
namespace gamemd {
int sub_735370()
{
  dword_B1CFA8 = 0; /*0x735372*/
  dword_B1CFAC = 0; /*0x735377*/
  dword_B1CFB0 = 0; /*0x73537c*/
  dword_B1CFB4 = 0; /*0x735381*/
  return 0; /*0x735386*/
}
}
// 0x735390
namespace gamemd {
int sub_735390()
{
  dword_B1CFC0 = dword_B1CFA8; /*0x7353a1*/
  dword_B1CFC4 = dword_B1CFAC; /*0x7353ab*/
  dword_B1CFC8 = dword_B1CFB0; /*0x7353b1*/
  dword_B1CFCC = dword_B1CFB4; /*0x7353b7*/
  return dword_B1CFB4; /*0x7353bc*/
}
}
// 0x730660
namespace gamemd {
int unknown_libname_34()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x730660)
}
} // namespace gamemd

// 0x730740
namespace gamemd {
int sub_730740()
{
  return dword_A8EB84; /*0x730745*/
}
} // namespace gamemd

// 0x730750
namespace gamemd {
int sub_730750()
{
  return dword_A8EB88; /*0x730755*/
}
} // namespace gamemd

// 0x730760
namespace gamemd {
int sub_730760()
{
  dword_B0FDE0 = 0; /*0x730762*/
  dword_B0FDE4 = 0; /*0x730767*/
  dword_B0FDE8 = 0; /*0x73076c*/
  dword_B0FDEC = 0; /*0x730771*/
  return 0; /*0x730776*/
}
} // namespace gamemd

// 0x730780
namespace gamemd {
void sub_730780()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x73078c*/
  dbl_B0FDF8 = Math::Sqrt(v0 + v0); /*0x73079e*/
}
} // namespace gamemd

// 0x7307B0
namespace gamemd {
void sub_7307B0()
{
  dbl_B0FE48 = dbl_B0FDF8 / 60.0; /*0x7307bc*/
}
} // namespace gamemd

// 0x7307D0
namespace gamemd {
void sub_7307D0()
{
  dbl_B0FE30 = 1.0 / dbl_B0FE48; /*0x7307dc*/
}
} // namespace gamemd

// 0x7307F0
namespace gamemd {
void sub_7307F0()
{
  dbl_B0FE28 = 0.0174532925199433 * 45.0; /*0x7307fc*/
}
} // namespace gamemd

// 0x730810
namespace gamemd {
void sub_730810()
{
  dbl_B0FE00 = 0.0174532925199433 * 60.0; /*0x73081c*/
}
} // namespace gamemd

// 0x730830
namespace gamemd {
void sub_730830()
{
  dbl_B0FDD8 = 0.0174532925199433 * 90.0; /*0x73083c*/
}
} // namespace gamemd

// 0x730850
namespace gamemd {
long long sub_730850()
{
  double v0; // st7
  int64_t result; // rax

  v0 = Math::Sin(dbl_B0FDD8 - dbl_B0FE00); /*0x730862*/
  result = Math::RoundToInt(v0 * dbl_B0FDF8 * 0.5); /*0x730876*/
  dword_B0FE50 = result; /*0x73087b*/
  return result; /*0x730880*/
}
} // namespace gamemd

// 0x730890
namespace gamemd {
void sub_730890()
{
  dbl_B0FE08 = Math::ArcTan((double)dword_B0FE50 * 0.00390625); /*0x7308a7*/
}
} // namespace gamemd

// 0x7308C0
namespace gamemd {
void sub_7308C0()
{
  dbl_B0FE20 = Math::ArcTan((double)(2 * dword_B0FE50) / dbl_B0FDF8); /*0x7308e2*/
}
} // namespace gamemd

// 0x7308F0
namespace gamemd {
long long sub_7308F0()
{
  int64_t result; // rax

  result = Math::RoundToInt((double)(4 * dword_B0FE50) + 0.5); /*0x73090b*/
  dword_B0FE44 = result; /*0x730910*/
  return result; /*0x730916*/
}
} // namespace gamemd

// 0x730920
namespace gamemd {
int sub_730920()
{
  word_B0FDF0 = 0; /*0x730922*/
  word_B0FDF2 = 0; /*0x730928*/
  return 0; /*0x73092e*/
}
} // namespace gamemd

// 0x730930
namespace gamemd {
int sub_730930()
{
  dword_B0FE10 = 0; /*0x730932*/
  dword_B0FE14 = 0; /*0x730937*/
  dword_B0FE18 = 0; /*0x73093c*/
  return 0; /*0x730941*/
}
} // namespace gamemd

// 0x730950
namespace gamemd {
int sub_730950()
{
  dword_B0FE40 = 0; /*0x730955*/
  dword_B0FE38 = 128; /*0x73095f*/
  dword_B0FE3C = 128; /*0x730964*/
  return 128; /*0x730969*/
}
} // namespace gamemd

// 0x730AD0
namespace gamemd {
int sub_730AD0()
{
  return 16454; /*0x730ad5*/
}
} // namespace gamemd

// 0x730AE0
namespace gamemd {
int sub_730AE0()
{
  return 240; /*0x730ae5*/
}
} // namespace gamemd

// 0x731A90
namespace gamemd {
int j_FactoryClass_GetFlag()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x731A90)
}
} // namespace gamemd

// 0x731BE0
namespace gamemd {
void sub_731BE0()
{
  byte_B0FE58 = 0; /*0x731be0*/
}
} // namespace gamemd

// 0x731D90
namespace gamemd {
wchar_t * FillUnitTooltipUI(wchar_t * Destination, wchar_t * Source)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x731D90)
}
} // namespace gamemd

// 0x732110
namespace gamemd {
int sub_732110(int a1, int (__fastcall *a2)(unsigned int, int) a2, int a3)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x732110)
}
} // namespace gamemd

// 0x732140
namespace gamemd {
int sub_732140(int a1, unsigned char (__fastcall *a2)(int, int) a2, void (__fastcall *a3)(int, int) a3, int a4, int a5)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x732140)
}
} // namespace gamemd

// 0x732190
namespace gamemd {
char sub_732190(int a1, unsigned char (__fastcall *a2)(unsigned int, int) a2, int a3)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x732190)
}
} // namespace gamemd

// 0x7321D0
namespace gamemd {
char sub_7321D0(int a1, unsigned char (__fastcall *a2)(unsigned int, int) a2, int a3)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x7321D0)
}
} // namespace gamemd

// 0x7325C0
namespace gamemd {
BOOL E4Recv_7325C0::sub_7325C0()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x7325C0)
}
} // namespace gamemd

// 0x732C30
namespace gamemd {
char IDTechnoClassMatches(void * a1, int a2)
{
  int v3; // ebp
  int v4; // edi

  v3 = *(unsigned int *)(a2 + 16); /*0x732c35*/
  v4 = 0; /*0x732c39*/
  if ( v3 <= 0 ) /*0x732c3f*/
    return 0; /*0x732c8a*/
  while ( !(uint8_t)((ObjectClass *)(a1))->StepCleanup(*(void **)(*(unsigned int *)(a2 + 4) + 4 * v4)) /*0x732c83*/
       || !(*((uint8_t (**)(ObjectClass *))a1->vtable1 + 79))(a1)
       && (!a1
        || (*((int (**)(ObjectClass *))a1->vtable1 + 11))(a1) != 6
        || !*(unsigned int *)((*((int (**)(ObjectClass *))a1->vtable1 + 33))(a1) + 1032)) )
  {
    if ( ++v4 >= v3 ) /*0x732c88*/
      return 0; /*0x732c88*/
  }
  return 1; /*0x732c8a*/
}
} // namespace gamemd

// 0x734430
namespace gamemd {
void sub_734430()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x73443c*/
  dbl_B11E98 = Math::Sqrt(v0 + v0); /*0x73444e*/
}
} // namespace gamemd

// 0x734460
namespace gamemd {
void sub_734460()
{
  dbl_B1CF50 = dbl_B11E98 / 60.0; /*0x73446c*/
}
} // namespace gamemd

// 0x734480
namespace gamemd {
void sub_734480()
{
  dbl_B1CF38 = 1.0 / dbl_B1CF50; /*0x73448c*/
}
} // namespace gamemd

// 0x7344A0
namespace gamemd {
void sub_7344A0()
{
  dbl_B1BF30 = 0.0174532925199433 * 45.0; /*0x7344ac*/
}
} // namespace gamemd

// 0x7344C0
namespace gamemd {
void sub_7344C0()
{
  dbl_B12EA0 = 0.0174532925199433 * 60.0; /*0x7344cc*/
}
} // namespace gamemd

// 0x7344E0
namespace gamemd {
void sub_7344E0()
{
  dbl_B0FE78 = 0.0174532925199433 * 90.0; /*0x7344ec*/
}
} // namespace gamemd

// 0x734500
namespace gamemd {
long long sub_734500()
{
  double v0; // st7
  int64_t result; // rax

  v0 = Math::Sin(dbl_B0FE78 - dbl_B12EA0); /*0x734512*/
  result = Math::RoundToInt(v0 * dbl_B11E98 * 0.5); /*0x734526*/
  dword_B1CF5C = result; /*0x73452b*/
  return result; /*0x734530*/
}
} // namespace gamemd

// 0x734540
namespace gamemd {
void sub_734540()
{
  dbl_B13EA8 = Math::ArcTan((double)dword_B1CF5C * 0.00390625); /*0x734557*/
}
} // namespace gamemd

// 0x734570
namespace gamemd {
void sub_734570()
{
  dbl_B1BF28 = Math::ArcTan((double)(2 * dword_B1CF5C) / dbl_B11E98); /*0x734592*/
}
} // namespace gamemd

// 0x7345A0
namespace gamemd {
long long sub_7345A0()
{
  int64_t result; // rax

  result = Math::RoundToInt((double)(4 * dword_B1CF5C) + 0.5); /*0x7345bb*/
  dword_B1CF4C = result; /*0x7345c0*/
  return result; /*0x7345c6*/
}
} // namespace gamemd

// 0x7345D0
namespace gamemd {
int sub_7345D0()
{
  word_B0FE90 = 0; /*0x7345d2*/
  word_B0FE92 = 0; /*0x7345d8*/
  return 0; /*0x7345de*/
}
} // namespace gamemd

// 0x7345E0
namespace gamemd {
int sub_7345E0()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x7345E0)
}
} // namespace gamemd

// 0x734600
namespace gamemd {
int sub_734600()
{
  dword_B1CF48 = 0; /*0x734605*/
  dword_B1CF40 = 128; /*0x73460f*/
  dword_B1CF44 = 128; /*0x734614*/
  return 128; /*0x734619*/
}
} // namespace gamemd

// 0x734620
namespace gamemd {
int sub_734620()
{
  dword_B0FE80 = 0; /*0x734622*/
  dword_B0FE84 = 0; /*0x734627*/
  dword_B0FE88 = 0; /*0x73462c*/
  dword_B0FE8C = 0; /*0x734631*/
  return 0; /*0x734636*/
}
} // namespace gamemd

// 0x734FE0
namespace gamemd {
int WideMessageBox(CampaignScore * aP0, const WCHAR * a1, LPCWCH lpWideCharStr, UINT uType)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x734FE0)
}
} // namespace gamemd

// 0x735060
namespace gamemd {
unsigned char CharToWide_Bulk(unsigned short * a1, unsigned char * a2, int a3)
{
  uint8_t result; // al

  for ( result = *a2; *a2; result = *a2 ) /*0x735060*/
  {
    if ( !a3 ) /*0x73506d*/
      break; /*0x73506d*/
    *a1++ = result; /*0x735073*/
    ++a2; /*0x735079*/
    if ( a3 != -1 ) /*0x73507d*/
      --a3; /*0x73507f*/
  }
  *a1 = 0; /*0x735086*/
  return result; /*0x73508b*/
}
} // namespace gamemd

// 0x735090
namespace gamemd {
void WideToChar_Copy(unsigned char * a1, char * a2, int a3)
{
    // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x735090)
}
} // namespace gamemd

// 0x7350C0
namespace gamemd {
char * ToWideStringChar(IUnknown * aP0)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x7350C0)
}
} // namespace gamemd

// 0x735180
namespace gamemd {
void sub_735180()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x73518c*/
  dbl_B1CFD0 = Math::Sqrt(v0 + v0); /*0x73519e*/
}
} // namespace gamemd

// 0x7351B0
namespace gamemd {
void sub_7351B0()
{
  dbl_B1D0B0 = dbl_B1CFD0 / 60.0; /*0x7351bc*/
}
} // namespace gamemd

// 0x7351D0
namespace gamemd {
void sub_7351D0()
{
  dbl_B1D008 = 1.0 / dbl_B1D0B0; /*0x7351dc*/
}
} // namespace gamemd

// 0x7351F0
namespace gamemd {
void sub_7351F0()
{
  dbl_B1D000 = 0.0174532925199433 * 45.0; /*0x7351fc*/
}
} // namespace gamemd

// 0x735210
namespace gamemd {
void sub_735210()
{
  dbl_B1CFD8 = 0.0174532925199433 * 60.0; /*0x73521c*/
}
} // namespace gamemd

// 0x735230
namespace gamemd {
void sub_735230()
{
  dbl_B1CFA0 = 0.0174532925199433 * 90.0; /*0x73523c*/
}
} // namespace gamemd

// 0x735250
namespace gamemd {
long long sub_735250()
{
  double v0; // st7
  int64_t result; // rax

  v0 = Math::Sin(dbl_B1CFA0 - dbl_B1CFD8); /*0x735262*/
  result = Math::RoundToInt(v0 * dbl_B1CFD0 * 0.5); /*0x735276*/
  dword_B1D0B8 = result; /*0x73527b*/
  return result; /*0x735280*/
}
} // namespace gamemd

// 0x735290
namespace gamemd {
void sub_735290()
{
  dbl_B1CFE0 = Math::ArcTan((double)dword_B1D0B8 * 0.00390625); /*0x7352a7*/
}
} // namespace gamemd

// 0x7352C0
namespace gamemd {
void sub_7352C0()
{
  dbl_B1CFF8 = Math::ArcTan((double)(2 * dword_B1D0B8) / dbl_B1CFD0); /*0x7352e2*/
}
} // namespace gamemd

// 0x7352F0
namespace gamemd {
long long sub_7352F0()
{
  int64_t result; // rax

  result = Math::RoundToInt((double)(4 * dword_B1D0B8) + 0.5); /*0x73530b*/
  dword_B1D0AC = result; /*0x735310*/
  return result; /*0x735316*/
}
} // namespace gamemd

// 0x735320
namespace gamemd {
int sub_735320()
{
  g_UnitSelectionState = 0; /*0x735322*/
  return 0; /*0x73532e*/
}
} // namespace gamemd

// 0x735330
namespace gamemd {
int sub_735330()
{
  dword_B1CFE8 = 0; /*0x735332*/
  dword_B1CFEC = 0; /*0x735337*/
  dword_B1CFF0 = 0; /*0x73533c*/
  return 0; /*0x735341*/
}
} // namespace gamemd

// 0x735350
namespace gamemd {
int sub_735350()
{
  dword_B1D0A8 = 0; /*0x735355*/
  dword_B1D0A0 = 128; /*0x73535f*/
  dword_B1D0A4 = 128; /*0x735364*/
  return 128; /*0x735369*/
}
} // namespace gamemd

// 0x736C10
namespace gamemd {
char E4Recv_736C10::sub_736C10()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x736C10)
}
} // namespace gamemd

// 0x7393B0
namespace gamemd {
void nullsub_248()
{
  ; /*0x7393b0*/
}
} // namespace gamemd
