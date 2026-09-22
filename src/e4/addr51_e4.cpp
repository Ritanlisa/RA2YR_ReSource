// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/E4Recv_513D00_e4.hpp"
#include "e4/classes/E4Recv_517110_e4.hpp"
#include "e4/classes/E4Recv_517360_e4.hpp"
#include "e4/classes/E4Recv_5173F0_e4.hpp"
#include "e4/classes/E4Recv_5176D0_e4.hpp"
#include "e4/classes/Math_e4.hpp"

// 0x5108F0
namespace gamemd {
int globalHelper_0108F0(unsigned int * a1, unsigned int * a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  if ( *a1 == *a2 )
    return 0; /*0x510900*/
  else
    return *a1 >= *a2 ? 1 : -1;
}
}
} // namespace gamemd

// 0x517360
namespace gamemd {
unsigned char E4Recv_517360::sub_517360(unsigned char a2, unsigned char * a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  AbstractClass *v3; // bl
  unsigned __int8 v4; // al
  AbstractClass *v5; // bl
  unsigned __int8 result; // al

  v3 = *(this + 1); /*0x517394*/
  *(this + 2) += a2 * (a3[2] - *(this + 2)) / 256; /*0x517397*/
  v4 = v3 + a2 * (a3[1] - v3) / 256; /*0x5173b8*/
  v5 = *this; /*0x5173ba*/
  *(this + 1) = v4; /*0x5173bc*/
  result = v5 + a2 * (*a3 - v5) / 256; /*0x5173de*/
  *this = result; /*0x5173e1*/
  return result; /*0x5173cb*/
}
}
} // namespace gamemd

// 0x5173F0
namespace gamemd {
int E4Recv_5173F0::sub_5173F0(unsigned char * a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{

  int v2 = *this - *a2; /*0x517400*/
  if ( v2 < 0 ) /*0x517402*/
    v2 = *a2 - *this; /*0x517404*/
  int v3 = *(this + 1) - a2[1]; /*0x517410*/
  if ( v3 < 0 ) /*0x517412*/
    v3 = a2[1] - *(this + 1); /*0x517414*/
  int v4 = *(this + 2) - a2[2]; /*0x517422*/
  if ( v4 < 0 ) /*0x517424*/
    v4 = a2[2] - *(this + 2); /*0x517426*/
  return v2 * v2 + v3 * v3 + v4 * v4; /*0x517437*/
}
}
} // namespace gamemd

// 0x51FEF0
namespace gamemd {
void SaveInfantryToINI()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  int result; // eax
  double HealthRatio; // st7
  int i; // [esp+8h] [ebp-B4h]
  char Buffer[12]; // [esp+30h] [ebp-8Ch] BYREF
  char Source[128]; // [esp+3Ch] [ebp-80h] BYREF

  INIClass::ClearSection(a1, (int)g_INI_Key_Infantry, 0); /*0x51ff02*/
  result = 0; /*0x51ff0d*/
  for ( i = 0; result < g_BuildingClass_Count; i = result ) /*0x51ff15*/
  {
    IUnknown *v4 = *((_DWORD *)g_InfantryClassLimit + result); /*0x51ff25*/
    if ( !*(_BYTE *)(v4 + 129) ) /*0x51ff28*/
    {
      sprintf(Buffer, g_Str_Trace__d, result); /*0x51ff41*/
      if ( v4->vt_slot_388(a2, a3) == -1 ) /*0x51ff71*/
        char * v30 = *(char **)(v4 + 180); /*0x51ff79*/
      else
        v30 = (char *)v4->vt_slot_388(); /*0x51ff89*/
  int v32; // [esp+2Ch] [ebp-90h] BYREF
      unsigned int v5 = *ProgressTimer::GetValue((_WORD *)(v4 + 904), &v32); /*0x51ff9d*/
      int v6 = v4->q21C; /*0x51ffab*/
      const char * v7 = (const char *)(*(_DWORD *)(v4 + 1728) + 36); /*0x51ffb3*/
  _DWORD v31[3]; // [esp+20h] [ebp-9Ch] BYREF
      v31[0] = v4->q09C; /*0x51ffb6*/
      int v8 = *(unsigned __int8 *)(v4 + 1058); /*0x51ffbf*/
      v31[1] = v4->q028; /*0x51ffc5*/
      int v9 = *(unsigned __int8 *)(v4 + 1057); /*0x51ffce*/
      v31[2] = v4->q0A4; /*0x51ffd4*/
      a3 = v8; /*0x51ffe0*/
      a2 = v9; /*0x51ffe7*/
      int v23 = FootClass::GetField(v4 + 336, *(_DWORD *)(v4 + 532), v4->q08C); /*0x52000b*/
      char * v19 = FromNameIndex((int)v30); /*0x52001b*/
  int v10; // eax
      LOBYTE(v10) = Input::OffsetToDirection(v31); /*0x52001c*/
  int v11; // eax
      v11 = v4->GetCellCoords_Alt(/*0x52002b*/
              v4, Buffer, v10, v19, (unsigned __int8)(((v5 >> 7) + 1) >> 1));
  int v14; // [esp-34h] [ebp-F0h]
      v14 = *(__int16 *)v4->GetCellCoords_Alt(/*0x520048*/
                          v4, Buffer, *(__int16 *)(v11 + 2));
      HealthRatio = BuildingClass::GetHealthRatio((int *)v4); /*0x52004b*/
      int v13 = Math::RoundToInt(HealthRatio * 256.0); /*0x520056*/
      sprintf( /*0x520068*/
        Source,
        stru_825584,
        (const char *)(v6 + 90100),
        v7,
        v13,
        v14,
  int v15; // [esp-30h] [ebp-ECh]
        v15,
  int v16; // [esp-2Ch] [ebp-E8h]
        v16,
  const char *v17; // [esp-28h] [ebp-E4h]
        v17,
  int v18; // [esp-24h] [ebp-E0h]
        v18,
  const char *v20; // [esp-20h] [ebp-DCh]
        v20,
  int v21; // [esp-1Ch] [ebp-D8h]
        v21,
  int v22; // [esp-18h] [ebp-D4h]
        v22,
  int v24; // [esp-14h] [ebp-D0h]
        v24,
  int v25; // [esp-10h] [ebp-CCh]
        v25,
  int v26; // [esp-Ch] [ebp-C8h]
        v26);
      INIClass::SetString(v30, (unsigned __int8 *)g_INI_Key_Infantry, Buffer, Source); /*0x520085*/
      result = i; /*0x52008a*/
    }
    ++result; /*0x520094*/
  }
  return result; /*0x5200a5*/
}
}
} // namespace gamemd

// 0x510B00
namespace gamemd {
void sub_510B00()
{
{
    long double v0;
    v0 = pow(256.0, 2.0);
    DataGlobal_A8F068 = Math::Sqrt(v0 + v0);
}
}
} // namespace gamemd

// 0x510B30
namespace gamemd {
void sub_510B30()
{
{
    DataGlobal_A8F0B8 = DataGlobal_A8F068 / 60.0;
}
}
} // namespace gamemd

// 0x510B50
namespace gamemd {
void sub_510B50()
{
{
    DataGlobal_A8F0A0 = 1.0 / DataGlobal_A8F0B8;
}
}
} // namespace gamemd

// 0x510B70
namespace gamemd {
void sub_510B70()
{
{
    DataGlobal_A8F098 = 0.0174532925199433 * 45.0;
}
}
} // namespace gamemd

// 0x510B90
namespace gamemd {
void sub_510B90()
{
{
    DataGlobal_A8F070 = 0.0174532925199433 * 60.0;
}
}
} // namespace gamemd

// 0x510BB0
namespace gamemd {
void sub_510BB0()
{
{
    DataGlobal_A8F048 = 0.0174532925199433 * 90.0;
}
}
} // namespace gamemd

// 0x510BD0
namespace gamemd {
long long sub_510BD0()
{
{
    double v0;
    __int64 result;
    v0 = Math::Sin(DataGlobal_A8F048 - DataGlobal_A8F070);
    result = Math::RoundToInt(v0 * DataGlobal_A8F068 * 0.5);
    DataGlobal_A8F0C0 = result;
    return result;
}
}
} // namespace gamemd

// 0x510C10
namespace gamemd {
void sub_510C10()
{
{
    DataGlobal_A8F078 = Math::ArcTan((double)DataGlobal_A8F0C0 * 0.00390625);
}
}
} // namespace gamemd

// 0x510C40
namespace gamemd {
void sub_510C40()
{
{
    DataGlobal_A8F090 = Math::ArcTan((double)(2 * DataGlobal_A8F0C0) / DataGlobal_A8F068);
}
}
} // namespace gamemd

// 0x510C70
namespace gamemd {
long long sub_510C70()
{
{
    __int64 result;
    result = Math::RoundToInt((double)(4 * DataGlobal_A8F0C0) + 0.5);
    DataGlobal_A8F0B4 = result;
    return result;
}
}
} // namespace gamemd

// 0x510CA0
namespace gamemd {
int sub_510CA0()
{
{
    DataGlobal_A8F060 = 0;
    DataGlobal_A8F062 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x510CB0
namespace gamemd {
int sub_510CB0()
{
{
    DataGlobal_A8F080 = 0;
    DataGlobal_A8F084 = 0;
    DataGlobal_A8F088 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x510CD0
namespace gamemd {
int sub_510CD0()
{
{
    DataGlobal_A8F0B0 = 0;
    DataGlobal_A8F0A8 = 128;
    DataGlobal_A8F0AC = 128;
    return 128;
}
}
} // namespace gamemd

// 0x510CF0
namespace gamemd {
int sub_510CF0()
{
{
    DataGlobal_A8F050 = 0;
    DataGlobal_A8F054 = 0;
    DataGlobal_A8F058 = 0;
    DataGlobal_A8F05C = 0;
    return 0;
}
}
} // namespace gamemd

// 0x510E10
namespace gamemd {
unsigned int HouseClass_FormatPlayerName(int a1, unsigned char * a2, int a3)
{
{
    unsigned int result;
    const char *v4;
    result = a3;
    if ( a3 < 16 )
  {
    if ( a3 < 1 )
    return result;
    *a2 = 0;
  }
    switch ( a1 )
  {
    case 4475: v4 = g_Str__Player___A_;
    break;
    case 4476: v4 = g_Str__Player___B_;
    break;
    case 4477: v4 = g_Str__Player___C_;
    break;
    case 4478: v4 = g_Str__Player___D_;
    break;
    case 4479: v4 = g_Str__Player___E_;
    break;
    case 4480: v4 = g_Str__Player___F_;
    break;
    case 4481: v4 = g_Str__Player___G_;
    break;
    default: v4 = g_Str__Player___H_;
    if ( a1 != 4482 )
    v4 = &g_INI_DefaultBuffer;
    break;
  }
    result = strlen(v4) + 1;
    qmemcpy(a2, v4, result);
    return result;
}
}
} // namespace gamemd

// 0x5111E0
namespace gamemd {
int sub_5111E0()
{
{
    DataGlobal_A8F0D0 = 0;
    DataGlobal_A8F0D4 = 0;
    DataGlobal_A8F0D8 = 0;
    DataGlobal_A8F0DC = 0;
    return 0;
}
}
} // namespace gamemd

// 0x511200
namespace gamemd {
void sub_511200()
{
{
    long double v0;
    v0 = pow(256.0, 2.0);
    DataGlobal_A8F0E8 = Math::Sqrt(v0 + v0);
}
}
} // namespace gamemd

// 0x511230
namespace gamemd {
void sub_511230()
{
{
    DataGlobal_A8F138 = DataGlobal_A8F0E8 / 60.0;
}
}
} // namespace gamemd

// 0x511250
namespace gamemd {
void sub_511250()
{
{
    DataGlobal_A8F120 = 1.0 / DataGlobal_A8F138;
}
}
} // namespace gamemd

// 0x511270
namespace gamemd {
void sub_511270()
{
{
    DataGlobal_A8F118 = 0.0174532925199433 * 45.0;
}
}
} // namespace gamemd

// 0x511290
namespace gamemd {
void sub_511290()
{
{
    DataGlobal_A8F0F0 = 0.0174532925199433 * 60.0;
}
}
} // namespace gamemd

// 0x5112B0
namespace gamemd {
void sub_5112B0()
{
{
    DataGlobal_A8F0C8 = 0.0174532925199433 * 90.0;
}
}
} // namespace gamemd

// 0x5112D0
namespace gamemd {
long long sub_5112D0()
{
{
    double v0;
    __int64 result;
    v0 = Math::Sin(DataGlobal_A8F0C8 - DataGlobal_A8F0F0);
    result = Math::RoundToInt(v0 * DataGlobal_A8F0E8 * 0.5);
    DataGlobal_A8F140 = result;
    return result;
}
}
} // namespace gamemd

// 0x511310
namespace gamemd {
void sub_511310()
{
{
    DataGlobal_A8F0F8 = Math::ArcTan((double)DataGlobal_A8F140 * 0.00390625);
}
}
} // namespace gamemd

// 0x511340
namespace gamemd {
void sub_511340()
{
{
    DataGlobal_A8F110 = Math::ArcTan((double)(2 * DataGlobal_A8F140) / DataGlobal_A8F0E8);
}
}
} // namespace gamemd

// 0x511370
namespace gamemd {
long long sub_511370()
{
{
    __int64 result;
    result = Math::RoundToInt((double)(4 * DataGlobal_A8F140) + 0.5);
    DataGlobal_A8F134 = result;
    return result;
}
}
} // namespace gamemd

// 0x5113A0
namespace gamemd {
int sub_5113A0()
{
{
    DataGlobal_A8F0E0 = 0;
    DataGlobal_A8F0E2 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x5113B0
namespace gamemd {
int sub_5113B0()
{
{
    DataGlobal_A8F100 = 0;
    DataGlobal_A8F104 = 0;
    DataGlobal_A8F108 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x5113D0
namespace gamemd {
int sub_5113D0()
{
{
    DataGlobal_A8F130 = 0;
    DataGlobal_A8F128 = 128;
    DataGlobal_A8F12C = 128;
    return 128;
}
}
} // namespace gamemd

// 0x513A10
namespace gamemd {
void sub_513A10()
{
{
    long double v0;
    v0 = pow(256.0, 2.0);
    DataGlobal_A8F168 = Math::Sqrt(v0 + v0);
}
}
} // namespace gamemd

// 0x513A40
namespace gamemd {
void sub_513A40()
{
{
    DataGlobal_A8F1B8 = DataGlobal_A8F168 / 60.0;
}
}
} // namespace gamemd

// 0x513A60
namespace gamemd {
void sub_513A60()
{
{
    DataGlobal_A8F1A0 = 1.0 / DataGlobal_A8F1B8;
}
}
} // namespace gamemd

// 0x513A80
namespace gamemd {
void sub_513A80()
{
{
    DataGlobal_A8F198 = 0.0174532925199433 * 45.0;
}
}
} // namespace gamemd

// 0x513AA0
namespace gamemd {
void sub_513AA0()
{
{
    DataGlobal_A8F170 = 0.0174532925199433 * 60.0;
}
}
} // namespace gamemd

// 0x513AC0
namespace gamemd {
void sub_513AC0()
{
{
    DataGlobal_A8F148 = 0.0174532925199433 * 90.0;
}
}
} // namespace gamemd

// 0x513AE0
namespace gamemd {
long long sub_513AE0()
{
{
    double v0;
    __int64 result;
    v0 = Math::Sin(DataGlobal_A8F148 - DataGlobal_A8F170);
    result = Math::RoundToInt(v0 * DataGlobal_A8F168 * 0.5);
    DataGlobal_A8F1C0 = result;
    return result;
}
}
} // namespace gamemd

// 0x513B20
namespace gamemd {
void sub_513B20()
{
{
    DataGlobal_A8F178 = Math::ArcTan((double)DataGlobal_A8F1C0 * 0.00390625);
}
}
} // namespace gamemd

// 0x513B50
namespace gamemd {
void sub_513B50()
{
{
    DataGlobal_A8F190 = Math::ArcTan((double)(2 * DataGlobal_A8F1C0) / DataGlobal_A8F168);
}
}
} // namespace gamemd

// 0x513B80
namespace gamemd {
long long sub_513B80()
{
{
    __int64 result;
    result = Math::RoundToInt((double)(4 * DataGlobal_A8F1C0) + 0.5);
    DataGlobal_A8F1B4 = result;
    return result;
}
}
} // namespace gamemd

// 0x513BB0
namespace gamemd {
int sub_513BB0()
{
{
    DataGlobal_A8F160 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x513BC0
namespace gamemd {
int sub_513BC0()
{
{
    g_ScoreDisplayState1 = 0;
    g_ScoreDisplayState2 = 0;
    g_ScoreDisplayState3 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x513BE0
namespace gamemd {
int sub_513BE0()
{
{
    DataGlobal_A8F1B0 = 0;
    DataGlobal_A8F1A8 = 128;
    DataGlobal_A8F1AC = 128;
    return 128;
}
}
} // namespace gamemd

// 0x513C00
namespace gamemd {
int sub_513C00()
{
{
    DataGlobal_A8F150 = 0;
    DataGlobal_A8F154 = 0;
    DataGlobal_A8F158 = 0;
    DataGlobal_A8F15C = 0;
    return 0;
}
}
} // namespace gamemd

// 0x513D00
namespace gamemd {
void E4Recv_513D00::sub_513D00()
{
{
    *(void**)this = vt_HoverLocomotionClass;
    this->M4 = &vt_HoverLocomotionClass;
    LocomotionClass::Construct(this);
}
}
} // namespace gamemd

// 0x517110
namespace gamemd {
int E4Recv_517110::sub_517110()
{
{
    int v2;
    int v3;
    short *v4;
    bool v5;
    int v6;
    int result;
    char v8[4];
    v5 = 1;
    if ( this->M36 != *(int *)&g_NetworkPlayerBuffer[6980] || this->M40 != *(int *)&g_NetworkPlayerBuffer[6984] || this->M44 != *(int *)&g_NetworkPlayerBuffer[6988] )
  {
    v2 = this->M36 / 256;
    v3 = this->M40 / 256;
    v4 = (short *)(*(int (__thiscall **)(int, char *))(**(int **)(this + 12) + 440))(this->M12, v8);
    if ( *v4 != (short)v2 || v4[1] != (short)v3 )
    v5 = 0;
  }
    v6 = this->M12;
    this->M72 = 0;
    this->M76 = 1072693248;
    (*(void (__thiscall **)(int, int, int))(*(int *)(v6) + 1348))(v6, 0, 1072693248);
    result = MovementAI::StepFootClass((int *)this, 0);
    if ( v5 )
    return MovementAI::MainFootClass((int *)this, 1);
    return result;
}
}
} // namespace gamemd

// 0x517340
namespace gamemd {
char sub_517340()
{
{
    DataGlobal_A8F1C4 = 0;
    DataGlobal_A8F1C5 = 0;
    DataGlobal_A8F1C6 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x5176D0
namespace gamemd {
char E4Recv_5176D0::sub_5176D0(BYTE Data)
{
{
    int v4;
    char v5;
    HKEY phkResult;
    BYTE v7[4];
    HKEY hKey;
    DWORD cbData;
    DWORD Type;
    DWORD dwDisposition;
    CHAR SubKey[128];
    CHAR v13[128];
    strcpy(SubKey, g_Str_SOFTWARE_Westwood_WOLAPI_);
    v5 = 0;
    if ( RegOpenKeyExA(HKEY_LOCAL_MACHINE, SubKey, 0, 0xF003Fu, &phkResult) && RegCreateKeyExA(HKEY_LOCAL_MACHINE, SubKey, 0, 0, 0, 0xF003Fu, 0, &phkResult, &dwDisposition) )
  {
    return 0;
  }
    if ( !RegSetValueExA(phkResult, g_INI_Key_Options, 0, 4u, &Data, 4u) )
    v5 = 1;
    RegCloseKey(phkResult);
    this->M4 = 0;
    strcpy(v13, g_Str_SOFTWARE_Westwood_WOLAPI_);
    cbData = 4;
    if ( !RegOpenKeyExA(HKEY_LOCAL_MACHINE, v13, 0, 0xF003Fu, &hKey) )
  {
    *(int *)v7 = 0;
    if ( !RegQueryValueExA(hKey, g_INI_Key_Options, 0, &Type, v7, &cbData) && Type == 4 )
    {
    v4 = *(int *)v7;
    this->M4 = 1;
    *(int *)this = v4;
    }
    RegCloseKey(hKey);
  }
    return v5;
}
}
} // namespace gamemd

// 0x517840
namespace gamemd {
void sub_517840()
{
{
    long double v0;
    v0 = pow(256.0, 2.0);
    DataGlobal_A8F1E8 = Math::Sqrt(v0 + v0);
}
}
} // namespace gamemd

// 0x517870
namespace gamemd {
void sub_517870()
{
{
    DataGlobal_A8F238 = DataGlobal_A8F1E8 / 60.0;
}
}
} // namespace gamemd

// 0x517890
namespace gamemd {
void sub_517890()
{
{
    DataGlobal_A8F220 = 1.0 / DataGlobal_A8F238;
}
}
} // namespace gamemd

// 0x5178B0
namespace gamemd {
void sub_5178B0()
{
{
    DataGlobal_A8F218 = 0.0174532925199433 * 45.0;
}
}
} // namespace gamemd

// 0x5178D0
namespace gamemd {
void sub_5178D0()
{
{
    DataGlobal_A8F1F0 = 0.0174532925199433 * 60.0;
}
}
} // namespace gamemd

// 0x5178F0
namespace gamemd {
void sub_5178F0()
{
{
    DataGlobal_A8F1C8 = 0.0174532925199433 * 90.0;
}
}
} // namespace gamemd

// 0x517910
namespace gamemd {
long long sub_517910()
{
{
    double v0;
    __int64 result;
    v0 = Math::Sin(DataGlobal_A8F1C8 - DataGlobal_A8F1F0);
    result = Math::RoundToInt(v0 * DataGlobal_A8F1E8 * 0.5);
    DataGlobal_A8F240 = result;
    return result;
}
}
} // namespace gamemd

// 0x517950
namespace gamemd {
void sub_517950()
{
{
    DataGlobal_A8F1F8 = Math::ArcTan((double)DataGlobal_A8F240 * 0.00390625);
}
}
} // namespace gamemd

// 0x517980
namespace gamemd {
void sub_517980()
{
{
    DataGlobal_A8F210 = Math::ArcTan((double)(2 * DataGlobal_A8F240) / DataGlobal_A8F1E8);
}
}
} // namespace gamemd

// 0x5179B0
namespace gamemd {
long long sub_5179B0()
{
{
    __int64 result;
    result = Math::RoundToInt((double)(4 * DataGlobal_A8F240) + 0.5);
    DataGlobal_A8F234 = result;
    return result;
}
}
} // namespace gamemd

// 0x5179E0
namespace gamemd {
int sub_5179E0()
{
{
    DataGlobal_A8F1E0 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x5179F0
namespace gamemd {
int sub_5179F0()
{
{
    DataGlobal_A8F200 = 0;
    DataGlobal_A8F204 = 0;
    DataGlobal_A8F208 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x517A10
namespace gamemd {
int sub_517A10()
{
{
    DataGlobal_A8F230 = 0;
    DataGlobal_A8F228 = 128;
    DataGlobal_A8F22C = 128;
    return 128;
}
}
} // namespace gamemd

// 0x517A30
namespace gamemd {
int sub_517A30()
{
{
    DataGlobal_A8F1D0 = 0;
    DataGlobal_A8F1D4 = 0;
    DataGlobal_A8F1D8 = 0;
    DataGlobal_A8F1DC = 0;
    return 0;
}
}
} // namespace gamemd
