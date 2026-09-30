// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/E4Recv_513D00_e4.hpp"
#include "e4/classes/E4Recv_517110_e4.hpp"
#include "e4/classes/E4Recv_517360_e4.hpp"
#include "e4/classes/E4Recv_5173F0_e4.hpp"
#include "e4/classes/E4Recv_5176D0_e4.hpp"
#include "e4/classes/Math_e4.hpp"
#include "e4/classes/BuildingClass_e4.hpp"
#include "e4/classes/FootClass_e4.hpp"
#include "e4/classes/INIClass_e4.hpp"
#include "e4/classes/Input_e4.hpp"
#include "e4/classes/ProgressTimer_e4.hpp"
#include "e4/classes/MixFileClass_e4.hpp"
#include "e4/classes/TextRenderer_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/ObjectTypeClass_e4.hpp"
#include "e4/classes/String_e4.hpp"
#include "e4/classes/E4Recv_522100_e4.hpp"
#include "e4/classes/ObjectClass_e4.hpp"
#include "e4/classes/TechnoClass_e4.hpp"
#include "e4/classes/BombClass_e4.hpp"

// 0x5108F0
namespace gamemd {
int globalHelper_0108F0(unsigned int * a1, unsigned int * a2)
{
  if ( *a1 == *a2 )
    return 0; /*0x510900*/
  else
    return *a1 >= *a2 ? 1 : -1;
}
}
// 0x517360
namespace gamemd {
unsigned char E4Recv_517360::sub_517360(unsigned char a2, unsigned char * a3)
{

  unsigned __int8 v3; // bl
  unsigned __int8 v4; // al
  unsigned __int8 v5; // bl
  unsigned __int8 result; // al

  v3 = *((unsigned char *)this + 1); /*0x517394*/
  *((unsigned char *)this + 2) += a2 * (a3[2] - *((unsigned char *)this + 2)) / 256; /*0x517397*/
  v4 = v3 + a2 * (a3[1] - v3) / 256; /*0x5173b8*/
  v5 = *this; /*0x5173ba*/
  *((unsigned char *)this + 1) = v4; /*0x5173bc*/
  result = v5 + a2 * (*a3 - v5) / 256; /*0x5173de*/
  *this = result; /*0x5173e1*/
  return result; /*0x5173cb*/

}
}
// 0x5173F0
namespace gamemd {
int E4Recv_5173F0::sub_5173F0(unsigned char * a2)
{

  int v2; // esi
  int v3; // edx
  int v4; // eax

  v2 = *this - *a2; /*0x517400*/
  if ( v2 < 0 ) /*0x517402*/
    v2 = *a2 - *this; /*0x517404*/
  v3 = *((unsigned char *)this + 1) - a2[1]; /*0x517410*/
  if ( v3 < 0 ) /*0x517412*/
    v3 = a2[1] - *((unsigned char *)this + 1); /*0x517414*/
  v4 = *((unsigned char *)this + 2) - a2[2]; /*0x517422*/
  if ( v4 < 0 ) /*0x517424*/
    v4 = a2[2] - *((unsigned char *)this + 2); /*0x517426*/
  return v2 * v2 + v3 * v3 + v4 * v4; /*0x517437*/

}
}
// 0x51FEF0
namespace gamemd {
void SaveInfantryToINI(void * a1, void * a2, void * a3)
{
  int *v3; // ecx
  double v4; // st7
  int result; // eax
  BuildingClass *v6; // esi
  unsigned int v7; // edi
  HouseClass *owner; // ebp
  int v9; // ebx
  int isRecruitableByEnemy; // edx
  int isRecruitableByAlly; // eax
  int v12; // eax
  int v13; // eax
  int v14; // eax
  int v15; // [esp-34h] [ebp-F0h]
  char *v16; // [esp-20h] [ebp-DCh]
  int Field; // [esp-14h] [ebp-D0h]
  int controlGroup; // [esp-10h] [ebp-CCh]
  int onBridge; // [esp-Ch] [ebp-C8h]
  int i; // [esp+8h] [ebp-B4h]
  char *queuedMission; // [esp+14h] [ebp-A8h]
  Input v24; // [esp+20h] [ebp-9Ch] BYREF
  int v25; // [esp+24h] [ebp-98h]
  int v26; // [esp+28h] [ebp-94h]
  int v27; // [esp+2Ch] [ebp-90h] BYREF
  char Buffer[12]; // [esp+30h] [ebp-8Ch] BYREF
  char Source[128]; // [esp+3Ch] [ebp-80h] BYREF

  INIClass::ClearSection(v3, (int)&g_INI_Key_Special.SidebarImage, 0); /*0x51ff02*/
  result = 0; /*0x51ff0d*/
  for ( i = 0; result < *(int *)&stru_A83D50.__pad_80[40]; i = result ) /*0x51ff15*/
  {
    v6 = *(BuildingClass **)(*(unsigned int *)&stru_A83D50.__pad_80[28] + 4 * result); /*0x51ff25*/
    if ( !v6->? ) /*0x51ff28*/
    {
      sprintf(Buffer, "%d", result); /*0x51ff41*/
      if ( (*((int (**)(BuildingClass *, int, int))v6->TechnoClass + 97))(v6, a2, a3) == -1 ) /*0x51ff71*/
        queuedMission = (char *)v6->?; /*0x51ff79*/
      else
        queuedMission = (char *)(*((int (**)(BuildingClass *))v6->TechnoClass + 97))(v6); /*0x51ff89*/
      v7 = *ProgressTimer::GetValue((ProgressTimer *)v6->?, &v27); /*0x51ff9d*/
      owner = v6->?; /*0x51ffab*/
      v9 = *(unsigned int *)&v6-((unsigned int *)(>__pad_6B8))[8] + 36; /*0x51ffb3*/
      v24.Input_field_00 = v6->?[0]; /*0x51ffb6*/
      isRecruitableByEnemy = (uint8_t)v6->?; /*0x51ffbf*/
      v25 = v6->?[1]; /*0x51ffc5*/
      isRecruitableByAlly = (uint8_t)v6->?; /*0x51ffce*/
      v26 = v6->?[2]; /*0x51ffd4*/
      a3 = isRecruitableByEnemy; /*0x51ffe0*/
      a2 = isRecruitableByAlly; /*0x51ffe7*/
      onBridge = (uint8_t)v6->?; /*0x51ffec*/
      controlGroup = v6->?; /*0x51ffef*/
      Field = FootClass::GetField(v6->?); /*0x52000b*/
      v16 = FromNameIndex((int)queuedMission); /*0x52001b*/
      v12 = ((Input *)(&v24))->OffsetToDirection(); /*0x52001c*/
      v13 = (*((int (**)(BuildingClass *, char *, int, char *, unsigned int))v6->TechnoClass + 110))( /*0x52002b*/
              v6,
              Buffer,
              v12,
              v16,
              (uint8_t)(((v7 >> 7) + 1) >> 1));
      v15 = *(int16_t *)(*((int (**)(BuildingClass *, char *, unsigned int))v6->TechnoClass + 110))( /*0x520048*/
                          v6,
                          Buffer,
                          *(int16_t *)(v13 + 2));
      BuildingClass::GetHealthRatio(v6); /*0x52004b*/
      v4 = v4 * 256.0; /*0x520050*/
      IDA_LOWORD(v14) = Math::RoundToInt(v4); /*0x520056*/
      sprintf(Source, (const char *const)stru_825538.Type, &owner->plainName[4], v9, v14, v15); /*0x520068*/
      INIClass::SetString(queuedMission, (uint8_t *)&g_INI_Key_Special.SidebarImage, Buffer, Source); /*0x520085*/
      result = i; /*0x52008a*/
    }
    ++result; /*0x520094*/
  }
  return result; /*0x5200a5*/
}
}
// 0x510B00
namespace gamemd {
void sub_510B00()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x510b0c*/
  dbl_A8F068 = Math::Sqrt(v0 + v0); /*0x510b1e*/
}
} // namespace gamemd

// 0x510B30
namespace gamemd {
void sub_510B30()
{
  dbl_A8F0B8 = dbl_A8F068 / 60.0; /*0x510b3c*/
}
} // namespace gamemd

// 0x510B50
namespace gamemd {
void sub_510B50()
{
  dbl_A8F0A0 = 1.0 / dbl_A8F0B8; /*0x510b5c*/
}
} // namespace gamemd

// 0x510B70
namespace gamemd {
void sub_510B70()
{
  dbl_A8F098 = 0.0174532925199433 * 45.0; /*0x510b7c*/
}
} // namespace gamemd

// 0x510B90
namespace gamemd {
void sub_510B90()
{
  dbl_A8F070 = 0.0174532925199433 * 60.0; /*0x510b9c*/
}
} // namespace gamemd

// 0x510BB0
namespace gamemd {
void sub_510BB0()
{
  dbl_A8F048 = 0.0174532925199433 * 90.0; /*0x510bbc*/
}
} // namespace gamemd

// 0x510BD0
namespace gamemd {
long long sub_510BD0()
{
  double v0; // st7
  int64_t result; // rax

  v0 = ((Math *)(dbl_A8F048 - dbl_A8F070))->Sin(); /*0x510be2*/
  result = Math::RoundToInt(v0 * dbl_A8F068 * 0.5); /*0x510bf6*/
  dword_A8F0C0 = result; /*0x510bfb*/
  return result; /*0x510c00*/
}
} // namespace gamemd

// 0x510C10
namespace gamemd {
void sub_510C10()
{
  dbl_A8F078 = ((Math *)((double)dword_A8F0C0 * 0.00390625))->ArcTan(); /*0x510c27*/
}
} // namespace gamemd

// 0x510C40
namespace gamemd {
void sub_510C40()
{
  dbl_A8F090 = ((Math *)((double)(2 * dword_A8F0C0) / dbl_A8F068))->ArcTan(); /*0x510c62*/
}
} // namespace gamemd

// 0x510C70
namespace gamemd {
long long sub_510C70()
{
  int64_t result; // rax

  result = Math::RoundToInt((double)(4 * dword_A8F0C0) + 0.5); /*0x510c8b*/
  dword_A8F0B4 = result; /*0x510c90*/
  return result; /*0x510c96*/
}
} // namespace gamemd

// 0x510CA0
namespace gamemd {
int sub_510CA0()
{
  word_A8F060 = 0; /*0x510ca2*/
  word_A8F062 = 0; /*0x510ca8*/
  return 0; /*0x510cae*/
}
} // namespace gamemd

// 0x510CB0
namespace gamemd {
int sub_510CB0()
{
  dword_A8F080 = 0; /*0x510cb2*/
  dword_A8F084 = 0; /*0x510cb7*/
  dword_A8F088 = 0; /*0x510cbc*/
  return 0; /*0x510cc1*/
}
} // namespace gamemd

// 0x510CD0
namespace gamemd {
int sub_510CD0()
{
  dword_A8F0B0 = 0; /*0x510cd5*/
  dword_A8F0A8 = 128; /*0x510cdf*/
  dword_A8F0AC = 128; /*0x510ce4*/
  return 128; /*0x510ce9*/
}
} // namespace gamemd

// 0x510CF0
namespace gamemd {
int sub_510CF0()
{
  dword_A8F050 = 0; /*0x510cf2*/
  dword_A8F054 = 0; /*0x510cf7*/
  dword_A8F058 = 0; /*0x510cfc*/
  dword_A8F05C = 0; /*0x510d01*/
  return 0; /*0x510d06*/
}
} // namespace gamemd

// 0x510E10
namespace gamemd {
unsigned int HouseClass_FormatPlayerName(int a1, unsigned char * a2, int a3)
{
  unsigned int result; // eax
  const int * v4;

  result = a3; /*0x510e10*/
  if ( a3 < 16 ) /*0x510e19*/
  {
    if ( a3 < 1 ) /*0x510e1e*/
      return result; /*0x510e1e*/
    *a2 = 0; /*0x510e24*/
  }
  switch ( a1 ) /*0x510e2d*/
  {
    case 4475: /*0x510e2d*/
      v4 = g_Str__Player___A_; /*0x510e2f*/
      break;
    case 4476: /*0x510e2d*/
      v4 = g_Str__Player___B_; /*0x510e3e*/
      break;
    case 4477: /*0x510e2d*/
      v4 = g_Str__Player___C_; /*0x510e4d*/
      break;
    case 4478: /*0x510e2d*/
      v4 = g_Str__Player___D_; /*0x510e5c*/
      break;
    case 4479: /*0x510e2d*/
      v4 = aPlayerE; /*0x510e6b*/
      break;
    case 4480: /*0x510e2d*/
      v4 = aPlayerF; /*0x510e7a*/
      break;
    case 4481: /*0x510e2d*/
      v4 = aPlayerG; /*0x510e89*/
      break;
    default:
      v4 = unk_825000; /*0x510e96*/
      if ( a1 != 4482 ) /*0x510e9b*/
        v4 = &g_INI_DefaultBuffer; /*0x510e9d*/
      break;
  }
  result = strlen(v4) + 1; /*0x510ea7*/
  qmemcpy(a2, v4, result); /*0x510eb6*/
  return result; /*0x510ebf*/
}
} // namespace gamemd

// 0x5111E0
namespace gamemd {
int sub_5111E0()
{
  dword_A8F0D0 = 0; /*0x5111e2*/
  dword_A8F0D4 = 0; /*0x5111e7*/
  dword_A8F0D8 = 0; /*0x5111ec*/
  dword_A8F0DC = 0; /*0x5111f1*/
  return 0; /*0x5111f6*/
}
} // namespace gamemd

// 0x511200
namespace gamemd {
void sub_511200()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x51120c*/
  dbl_A8F0E8 = Math::Sqrt(v0 + v0); /*0x51121e*/
}
} // namespace gamemd

// 0x511230
namespace gamemd {
void sub_511230()
{
  dbl_A8F138 = dbl_A8F0E8 / 60.0; /*0x51123c*/
}
} // namespace gamemd

// 0x511250
namespace gamemd {
void sub_511250()
{
  dbl_A8F120 = 1.0 / dbl_A8F138; /*0x51125c*/
}
} // namespace gamemd

// 0x511270
namespace gamemd {
void sub_511270()
{
  dbl_A8F118 = 0.0174532925199433 * 45.0; /*0x51127c*/
}
} // namespace gamemd

// 0x511290
namespace gamemd {
void sub_511290()
{
  dbl_A8F0F0 = 0.0174532925199433 * 60.0; /*0x51129c*/
}
} // namespace gamemd

// 0x5112B0
namespace gamemd {
void sub_5112B0()
{
  dbl_A8F0C8 = 0.0174532925199433 * 90.0; /*0x5112bc*/
}
} // namespace gamemd

// 0x5112D0
namespace gamemd {
long long sub_5112D0()
{
  double v0; // st7
  int64_t result; // rax

  v0 = ((Math *)(dbl_A8F0C8 - dbl_A8F0F0))->Sin(); /*0x5112e2*/
  result = Math::RoundToInt(v0 * dbl_A8F0E8 * 0.5); /*0x5112f6*/
  dword_A8F140 = result; /*0x5112fb*/
  return result; /*0x511300*/
}
} // namespace gamemd

// 0x511310
namespace gamemd {
void sub_511310()
{
  dbl_A8F0F8 = ((Math *)((double)dword_A8F140 * 0.00390625))->ArcTan(); /*0x511327*/
}
} // namespace gamemd

// 0x511340
namespace gamemd {
void sub_511340()
{
  dbl_A8F110 = ((Math *)((double)(2 * dword_A8F140) / dbl_A8F0E8))->ArcTan(); /*0x511362*/
}
} // namespace gamemd

// 0x511370
namespace gamemd {
long long sub_511370()
{
  int64_t result; // rax

  result = Math::RoundToInt((double)(4 * dword_A8F140) + 0.5); /*0x51138b*/
  dword_A8F134 = result; /*0x511390*/
  return result; /*0x511396*/
}
} // namespace gamemd

// 0x5113A0
namespace gamemd {
int sub_5113A0()
{
  word_A8F0E0 = 0; /*0x5113a2*/
  word_A8F0E2 = 0; /*0x5113a8*/
  return 0; /*0x5113ae*/
}
} // namespace gamemd

// 0x5113B0
namespace gamemd {
int sub_5113B0()
{
  dword_A8F100 = 0; /*0x5113b2*/
  dword_A8F104 = 0; /*0x5113b7*/
  dword_A8F108 = 0; /*0x5113bc*/
  return 0; /*0x5113c1*/
}
} // namespace gamemd

// 0x5113D0
namespace gamemd {
int sub_5113D0()
{
  dword_A8F130 = 0; /*0x5113d5*/
  dword_A8F128 = 128; /*0x5113df*/
  dword_A8F12C = 128; /*0x5113e4*/
  return 128; /*0x5113e9*/
}
} // namespace gamemd

// 0x513A10
namespace gamemd {
void sub_513A10()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x513a1c*/
  dbl_A8F168 = Math::Sqrt(v0 + v0); /*0x513a2e*/
}
} // namespace gamemd

// 0x513A40
namespace gamemd {
void sub_513A40()
{
  dbl_A8F1B8 = dbl_A8F168 / 60.0; /*0x513a4c*/
}
} // namespace gamemd

// 0x513A60
namespace gamemd {
void sub_513A60()
{
  dbl_A8F1A0 = 1.0 / dbl_A8F1B8; /*0x513a6c*/
}
} // namespace gamemd

// 0x513A80
namespace gamemd {
void sub_513A80()
{
  dbl_A8F198 = 0.0174532925199433 * 45.0; /*0x513a8c*/
}
} // namespace gamemd

// 0x513AA0
namespace gamemd {
void sub_513AA0()
{
  dbl_A8F170 = 0.0174532925199433 * 60.0; /*0x513aac*/
}
} // namespace gamemd

// 0x513AC0
namespace gamemd {
void sub_513AC0()
{
  dbl_A8F148 = 0.0174532925199433 * 90.0; /*0x513acc*/
}
} // namespace gamemd

// 0x513AE0
namespace gamemd {
long long sub_513AE0()
{
  double v0; // st7
  int64_t result; // rax

  v0 = ((Math *)(dbl_A8F148 - dbl_A8F170))->Sin(); /*0x513af2*/
  result = Math::RoundToInt(v0 * dbl_A8F168 * 0.5); /*0x513b06*/
  dword_A8F1C0 = result; /*0x513b0b*/
  return result; /*0x513b10*/
}
} // namespace gamemd

// 0x513B20
namespace gamemd {
void sub_513B20()
{
  dbl_A8F178 = ((Math *)((double)dword_A8F1C0 * 0.00390625))->ArcTan(); /*0x513b37*/
}
} // namespace gamemd

// 0x513B50
namespace gamemd {
void sub_513B50()
{
  dbl_A8F190 = ((Math *)((double)(2 * dword_A8F1C0) / dbl_A8F168))->ArcTan(); /*0x513b72*/
}
} // namespace gamemd

// 0x513B80
namespace gamemd {
long long sub_513B80()
{
  int64_t result; // rax

  result = Math::RoundToInt((double)(4 * dword_A8F1C0) + 0.5); /*0x513b9b*/
  dword_A8F1B4 = result; /*0x513ba0*/
  return result; /*0x513ba6*/
}
} // namespace gamemd

// 0x513BB0
namespace gamemd {
int sub_513BB0()
{
  dword_A8F160 = 0; /*0x513bb2*/
  return 0; /*0x513bbe*/
}
} // namespace gamemd

// 0x513BC0
namespace gamemd {
int sub_513BC0()
{
  dword_A8F180 = 0; /*0x513bc2*/
  dword_A8F184 = 0; /*0x513bc7*/
  dword_A8F188 = 0; /*0x513bcc*/
  return 0; /*0x513bd1*/
}
} // namespace gamemd

// 0x513BE0
namespace gamemd {
int sub_513BE0()
{
  dword_A8F1B0 = 0; /*0x513be5*/
  dword_A8F1A8 = 128; /*0x513bef*/
  dword_A8F1AC = 128; /*0x513bf4*/
  return 128; /*0x513bf9*/
}
} // namespace gamemd

// 0x513C00
namespace gamemd {
int sub_513C00()
{
  dword_A8F150 = 0; /*0x513c02*/
  dword_A8F154 = 0; /*0x513c07*/
  dword_A8F158 = 0; /*0x513c0c*/
  dword_A8F15C = 0; /*0x513c11*/
  return 0; /*0x513c16*/
}
} // namespace gamemd

// 0x513D00
namespace gamemd {
void E4Recv_513D00::sub_513D00()
{

  *this = &HoverLocomotionClass::`vftable'; /*0x513d00*/
  *((unsigned int *)this + 1) = &vt_HoverLocomotionClass; /*0x513d06*/
  LocomotionClass::Construct(this); /*0x513d0d*/

}
} // namespace gamemd

// 0x517110
namespace gamemd {
int E4Recv_517110::sub_517110()
{

  int v2; // edi
  int v3; // ebx
  unsigned short *v4; // eax
  bool v5; // bl
  int v6; // ecx
  int result; // eax
  unsigned char v8[4]; // [esp+8h] [ebp-4h] BYREF

  v5 = 1; /*0x51717d*/
  if ( *((unsigned int *)this + 9) != *(unsigned int *)&g_abs_A8D63C /*0x517138*/
    || *((unsigned int *)this + 10) != *(unsigned int *)&g_abs_A8D63C
    || *((unsigned int *)this + 11) != *(unsigned int *)&g_abs_A8D63C )
  {
    v2 = *((unsigned int *)this + 9) / 256; /*0x517161*/
    v3 = *((unsigned int *)this + 10) / 256; /*0x517164*/
    v4 = (unsigned short *)(*(int (**)(unsigned int, unsigned char *))(**(unsigned int **)((char *)this + 12) + 440))(*((unsigned int *)this + 3), v8); /*0x517167*/
    if ( *v4 != (unsigned short)v2 || v4[1] != (unsigned short)v3 ) /*0x517177*/
      v5 = 0; /*0x517138*/
  }
  v6 = *((unsigned int *)this + 3); /*0x51717f*/
  *((unsigned int *)this + 18) = 0; /*0x517182*/
  *((unsigned int *)this + 19) = 1072693248; /*0x517189*/
  (*(void (**)(int, unsigned int, int))(*(unsigned int *)v6 + 1348))(v6, 0, 1072693248); /*0x517199*/
  result = MovementAI::StepFootClass((int *)this, 0); /*0x5171a3*/
  if ( v5 ) /*0x5171aa*/
    return MovementAI::MainFootClass((int *)this, 1); /*0x5171b0*/
  return result; /*0x5171b5*/

}
} // namespace gamemd

// 0x517340
namespace gamemd {
char sub_517340()
{
  byte_A8F1C4 = 0; /*0x517342*/
  byte_A8F1C5 = 0; /*0x517347*/
  byte_A8F1C6 = 0; /*0x51734c*/
  return 0; /*0x517351*/
}
} // namespace gamemd

// 0x5176D0
namespace gamemd {
char E4Recv_5176D0::sub_5176D0(BYTE Data)
{

  int v4; // ecx
  char v5; // [esp+13h] [ebp-119h]
  HKEY phkResult; // [esp+14h] [ebp-118h] BYREF
  BYTE v7[4]; // [esp+18h] [ebp-114h] BYREF
  HKEY hKey; // [esp+1Ch] [ebp-110h] BYREF
  DWORD cbData; // [esp+20h] [ebp-10Ch] BYREF
  DWORD Type; // [esp+24h] [ebp-108h] BYREF
  DWORD dwDisposition; // [esp+28h] [ebp-104h] BYREF
  CHAR SubKey[128]; // [esp+2Ch] [ebp-100h] BYREF
  CHAR v13[128]; // [esp+ACh] [ebp-80h] BYREF

  strcpy(SubKey, g_abs_8254E4); /*0x5176ff*/
  v5 = 0; /*0x51770a*/
  if ( RegOpenKeyExA(HKEY_LOCAL_MACHINE, SubKey, 0, 0xF003Fu, &phkResult) /*0x51774a*/
    && RegCreateKeyExA(HKEY_LOCAL_MACHINE, SubKey, 0, 0, 0, 0xF003Fu, 0, &phkResult, &dwDisposition) )
  {
    return 0; /*0x517757*/
  }
  if ( !RegSetValueExA(phkResult, g_INI_Key_Options, 0, 4u, &Data, 4u) ) /*0x51777b*/
    v5 = 1; /*0x517785*/
  RegCloseKey(phkResult); /*0x51778f*/
  *((unsigned char *)this + 4) = 0; /*0x51779f*/
  strcpy(v13, g_abs_8254E4); /*0x5177c0*/
  cbData = 4; /*0x5177c4*/
  if ( !RegOpenKeyExA(HKEY_LOCAL_MACHINE, v13, 0, 0xF003Fu, &hKey) ) /*0x5177e3*/
  {
    *(unsigned int *)v7 = 0; /*0x5177e9*/
    if ( !RegQueryValueExA(hKey, g_INI_Key_Options, 0, &Type, v7, &cbData) && Type == 4 ) /*0x517817*/
    {
      v4 = *(unsigned int *)v7; /*0x517819*/
      *((unsigned char *)this + 4) = 1; /*0x51781d*/
      *(unsigned int *)this = v4; /*0x517821*/
    }
    RegCloseKey(hKey); /*0x517829*/
  }
  return v5; /*0x517754*/

}
} // namespace gamemd

// 0x517840
namespace gamemd {
void sub_517840()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x51784c*/
  dbl_A8F1E8 = Math::Sqrt(v0 + v0); /*0x51785e*/
}
} // namespace gamemd

// 0x517870
namespace gamemd {
void sub_517870()
{
  dbl_A8F238 = dbl_A8F1E8 / 60.0; /*0x51787c*/
}
} // namespace gamemd

// 0x517890
namespace gamemd {
void sub_517890()
{
  dbl_A8F220 = 1.0 / dbl_A8F238; /*0x51789c*/
}
} // namespace gamemd

// 0x5178B0
namespace gamemd {
void sub_5178B0()
{
  dbl_A8F218 = 0.0174532925199433 * 45.0; /*0x5178bc*/
}
} // namespace gamemd

// 0x5178D0
namespace gamemd {
void sub_5178D0()
{
  dbl_A8F1F0 = 0.0174532925199433 * 60.0; /*0x5178dc*/
}
} // namespace gamemd

// 0x5178F0
namespace gamemd {
void sub_5178F0()
{
  dbl_A8F1C8 = 0.0174532925199433 * 90.0; /*0x5178fc*/
}
} // namespace gamemd

// 0x517910
namespace gamemd {
long long sub_517910()
{
  double v0; // st7
  int64_t result; // rax

  v0 = ((Math *)(dbl_A8F1C8 - dbl_A8F1F0))->Sin(); /*0x517922*/
  result = Math::RoundToInt(v0 * dbl_A8F1E8 * 0.5); /*0x517936*/
  dword_A8F240 = result; /*0x51793b*/
  return result; /*0x517940*/
}
} // namespace gamemd

// 0x517950
namespace gamemd {
void sub_517950()
{
  dbl_A8F1F8 = ((Math *)((double)dword_A8F240 * 0.00390625))->ArcTan(); /*0x517967*/
}
} // namespace gamemd

// 0x517980
namespace gamemd {
void sub_517980()
{
  dbl_A8F210 = ((Math *)((double)(2 * dword_A8F240) / dbl_A8F1E8))->ArcTan(); /*0x5179a2*/
}
} // namespace gamemd

// 0x5179B0
namespace gamemd {
long long sub_5179B0()
{
  int64_t result; // rax

  result = Math::RoundToInt((double)(4 * dword_A8F240) + 0.5); /*0x5179cb*/
  dword_A8F234 = result; /*0x5179d0*/
  return result; /*0x5179d6*/
}
} // namespace gamemd

// 0x5179E0
namespace gamemd {
int sub_5179E0()
{
  dword_A8F1E0 = 0; /*0x5179e2*/
  return 0; /*0x5179ee*/
}
} // namespace gamemd

// 0x5179F0
namespace gamemd {
int sub_5179F0()
{
  dword_A8F200 = 0; /*0x5179f2*/
  dword_A8F204 = 0; /*0x5179f7*/
  dword_A8F208 = 0; /*0x5179fc*/
  return 0; /*0x517a01*/
}
} // namespace gamemd

// 0x517A10
namespace gamemd {
int sub_517A10()
{
  dword_A8F230 = 0; /*0x517a15*/
  dword_A8F228 = 128; /*0x517a1f*/
  dword_A8F22C = 128; /*0x517a24*/
  return 128; /*0x517a29*/
}
} // namespace gamemd

// 0x517A30
namespace gamemd {
int sub_517A30()
{
  dword_A8F1D0 = 0; /*0x517a32*/
  dword_A8F1D4 = 0; /*0x517a37*/
  dword_A8F1D8 = 0; /*0x517a3c*/
  dword_A8F1DC = 0; /*0x517a41*/
  return 0; /*0x517a46*/
}
} // namespace gamemd
