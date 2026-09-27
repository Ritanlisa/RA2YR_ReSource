// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/Audio_e4.hpp"
#include "e4/classes/Debug_e4.hpp"
#include "e4/classes/Math_e4.hpp"
#include "e4/classes/Options_e4.hpp"
#include "e4/classes/AudioSettings_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/AudioQueue_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/AnimClass_e4.hpp"
#include "e4/classes/WinsockInterfaceClass_e4.hpp"
#include "e4/classes/CampaignClass_e4.hpp"
#include "e4/classes/VocClass_e4.hpp"
#include "e4/classes/String_e4.hpp"

// 0x5FA440
namespace gamemd {
void AudioSettings::SetFlag70(char a2)
{
  *(&this->u32_1C0) = a2; /*0x5fa444*/
  a2 = a2; /*0x5fa447*/
  Debug::Log(); /*0x5fa463*/
}
} // namespace gamemd
// 0x5FA470
namespace gamemd {
void AudioSettings::SetFlag68(char a2)
{
  *(&this->q0188) = a2; /*0x5fa474*/
  a2 = a2; /*0x5fa477*/
  Debug::Log(); /*0x5fa493*/
}
} // namespace gamemd
// 0x6B6300
namespace gamemd {
AbstractClass * * AudioSettings::DlgProc(HWND hDlg, unsigned int a2, unsigned int a3, HWND hWnd)
{
  int result; // eax
  BOOL IsSoundEnabled; // ebx
  HWND DlgItem; // eax
  HWND v7; // edi
  LPARAM v8; // eax
  void (__stdcall *v9)(HWND, BOOL); // ebp
  HWND v10; // eax
  HWND v11; // edi
  LPARAM v12; // eax
  HWND v13; // eax
  HWND v14; // edi
  LPARAM v15; // eax
  HWND v16; // edi
  HWND v17; // edi
  HWND v18; // eax
  HWND v19; // ebx
  WPARAM v20; // edi
  int v21; // ebp
  int v22; // edi
  LRESULT v23; // eax
  LRESULT v24; // edi
  int v25; // eax
  LRESULT v26; // eax
  HWND v27; // eax
  HWND v28; // esi
  LRESULT v29; // eax
  LRESULT v30; // esi
  int v31; // eax
  LRESULT v32; // eax
  HWND v33; // eax
  int v34; // eax
  HWND v35; // eax
  HWND v36; // eax
  float v37; // [esp+0h] [ebp-F0h]
  float v38; // [esp+0h] [ebp-F0h]
  float v39; // [esp+0h] [ebp-F0h]
  float v40; // [esp+0h] [ebp-F0h]
  float v41; // [esp+0h] [ebp-F0h]
  float v42; // [esp+0h] [ebp-F0h]
  BOOL bEnable; // [esp+18h] [ebp-D8h]
  WPARAM v44; // [esp+1Ch] [ebp-D4h]
  int Format; // [esp+20h] [ebp-D0h]
  int v46; // [esp+24h] [ebp-CCh]
  wchar_t lParam[100]; // [esp+28h] [ebp-C8h] BYREF

  result = (gamemd::AbstractClass **)(BaseDialogProc(hDlg, a2, a3, (unsigned int)hWnd));
  if ( result ) /*0x6b6333*/
    return result; /*0x6b6333*/
  if ( a2 != 273 ) /*0x6b633f*/
  {
    if ( a2 == 276 ) /*0x6b6348*/
    {
      if ( byte_B0B800 ) /*0x6b6636*/
      {
        if ( hWnd == GetDlgItem(hDlg, 1327) ) /*0x6b664c*/
        {
          v37 = (double)SendMessageA(hWnd, 0x400u, 0, 0) * 0.1; /*0x6b6674*/
          Audio::SetScoreVolume((float *)g_GameModeOptions, v37, 1); /*0x6b6677*/
          return 0; /*0x6b6688*/
        }
        if ( hWnd == GetDlgItem(hDlg, 1330) ) /*0x6b6695*/
        {
          v38 = (double)SendMessageA(hWnd, 0x400u, 0, 0) * 0.1; /*0x6b66bd*/
          Audio::SetSoundVolume((float *)g_GameModeOptions, v38, 1); /*0x6b66c0*/
          return 0; /*0x6b66d1*/
        }
        if ( hWnd == GetDlgItem(hDlg, 1334) ) /*0x6b66de*/
        {
          v39 = (double)SendMessageA(hWnd, 0x400u, 0, 0) * 0.1; /*0x6b670a*/
          Audio::SetVoiceVolume((float *)g_GameModeOptions, v39, 1); /*0x6b670d*/
          return 0; /*0x6b671e*/
        }
      }
    }
    else if ( a2 == 1175 ) /*0x6b6354*/
    {
      byte_B0B800 = 0; /*0x6b635a*/
      IsSoundEnabled = Audio::IsSoundEnabled(); /*0x6b6364*/
      bEnable = IsSoundEnabled; /*0x6b636c*/
      DlgItem = GetDlgItem(hDlg, 1327); /*0x6b6370*/
      v7 = DlgItem; /*0x6b637c*/
      if ( DlgItem ) /*0x6b6380*/
      {
        SendMessageA(DlgItem, 0x4AEu, 0, 0); /*0x6b638c*/
        SendMessageA(v7, 0x406u, 1u, 655360); /*0x6b639b*/
        v8 = Math::RoundToInt(flt_A8EBA0 * 10.0 + 0.5); /*0x6b63af*/
        SendMessageA(v7, 0x405u, 1u, v8); /*0x6b63bd*/
        v9 = (void (__stdcall *)(HWND, BOOL))EnableWindow; /*0x6b63bf*/
        EnableWindow(v7, IsSoundEnabled); /*0x6b63c7*/
      }
      else
      {
        v9 = (void (__stdcall *)(HWND, BOOL))EnableWindow; /*0x6b63cb*/
      }
      v10 = GetDlgItem(hDlg, 1330); /*0x6b63de*/
      v11 = v10; /*0x6b63e4*/
      if ( v10 ) /*0x6b63e8*/
      {
        SendMessageA(v10, 0x4AEu, 0, 0); /*0x6b63f4*/
        SendMessageA(v11, 0x406u, 1u, 655360); /*0x6b6403*/
        v12 = Math::RoundToInt(flt_A8EB98 * 10.0 + 0.5); /*0x6b6417*/
        SendMessageA(v11, 0x405u, 1u, v12); /*0x6b6425*/
        v9(v11, IsSoundEnabled); /*0x6b6429*/
      }
      v13 = GetDlgItem(hDlg, 1334); /*0x6b6438*/
      v14 = v13; /*0x6b643e*/
      if ( v13 ) /*0x6b6442*/
      {
        SendMessageA(v13, 0x4AEu, 0, 0); /*0x6b644e*/
        SendMessageA(v14, 0x406u, 1u, 655360); /*0x6b645d*/
        v15 = Math::RoundToInt(*(float *)&dword_A8EB9C * 10.0 + 0.5); /*0x6b6471*/
        SendMessageA(v14, 0x405u, 1u, v15); /*0x6b647f*/
        v9(v14, IsSoundEnabled); /*0x6b6483*/
      }
      if ( g_WTFMode ) /*0x6b648c*/
      {
        v16 = GetDlgItem(hDlg, 1331); /*0x6b64a5*/
        if ( v16 ) /*0x6b64a9*/
        {
          SendMessageA(v16, 0xF1u, byte_A8EBA6 != 0, 0); /*0x6b64c1*/
          v9(v16, IsSoundEnabled); /*0x6b64c5*/
        }
        v17 = GetDlgItem(hDlg, 1332); /*0x6b64da*/
        if ( v17 ) /*0x6b64de*/
        {
          SendMessageA(v17, 0xF1u, byte_A8EBA4 != 0, 0); /*0x6b64f5*/
          v9(v17, IsSoundEnabled); /*0x6b64f9*/
        }
        v18 = GetDlgItem(hDlg, 1328); /*0x6b6508*/
        v19 = v18; /*0x6b650e*/
        if ( v18 ) /*0x6b6512*/
        {
          v20 = 0; /*0x6b6518*/
          Format = 1; /*0x6b651a*/
          v44 = 0; /*0x6b652a*/
          SendMessageA(v18, 0x184u, 0, 0); /*0x6b652e*/
          v21 = 0; /*0x6b6535*/
          if ( dword_A83D34 > 0 ) /*0x6b6539*/
          {
            do /*0x6b65ed*/
            {
              if ( RulesClass::IsTypeBuildable(&g_BuildingTypeClass_Count, v21) ) /*0x6b6545*/
              {
                v22 = AudioSettings::ComputeTransform(v21); /*0x6b6563*/
                v46 = AudioSettings::Check(v21); /*0x6b656f*/
                swprintf(lParam, (const size_t)a02dSD02d, (const wchar_t *const)Format++, v46, v22 / 60, v22 % 60); /*0x6b65a1*/
                v23 = SendMessageA(v19, 0x4CDu, 0, (LPARAM)lParam); /*0x6b65bb*/
                v24 = v23; /*0x6b65bd*/
                if ( v23 != -1 ) /*0x6b65c2*/
                {
                  SendMessageA(v19, 0x19Au, v23, v21); /*0x6b65cc*/
                  v25 = dword_A83D14; /*0x6b65ce*/
                  if ( dword_A83D14 == -1 ) /*0x6b65d6*/
                    v25 = dword_A83D18; /*0x6b65d8*/
                  if ( v25 == v21 ) /*0x6b65df*/
                    v44 = v24; /*0x6b65e1*/
                }
              }
              ++v21; /*0x6b65ea*/
            }
            while ( v21 < dword_A83D34 ); /*0x6b65ed*/
            v20 = v44; /*0x6b65f3*/
          }
          SendMessageA(v19, 0x186u, v20, 0); /*0x6b6600*/
          SendMessageA(v19, 0x197u, v20, 0); /*0x6b660b*/
          EnableWindow(v19, bEnable); /*0x6b6613*/
        }
      }
      byte_B0B800 = 1; /*0x6b661c*/
      return 0; /*0x6b662c*/
    }
    return 0; /*0x6b6354*/
  }
  if ( (uint16_t)a3 <= 0x534u ) /*0x6b672d*/
  {
    switch ( (uint16_t)a3 ) /*0x6b6733*/
    {
      case 0x534u: /*0x6b6733*/
        v32 = SendMessageA(hWnd, 0xF0u, 0, 0); /*0x6b684c*/
        AudioSettings::SetFlag68(v32 == 1); /*0x6b685a*/
        if ( SendMessageA(hWnd, 0xF0u, 0, 0) == 1 ) /*0x6b686e*/
        {
          SendDlgItemMessageA(hDlg, 1331, 0xF1u, 0, 0); /*0x6b6883*/
          AudioSettings::SetFlag70(0); /*0x6b6890*/
          return 0; /*0x6b68a1*/
        }
        break;
      case 0x531u: /*0x6b6733*/
        if ( !IDA_HIWORD(a3) ) /*0x6b67b1*/
        {
          v27 = GetDlgItem(hDlg, 1328); /*0x6b67c0*/
          v28 = v27; /*0x6b67c6*/
          if ( v27 ) /*0x6b67ca*/
          {
            v29 = SendMessageA(v27, 0x188u, 0, 0); /*0x6b67e0*/
            if ( v29 != -1 ) /*0x6b67e5*/
            {
              v30 = SendMessageA(v28, 0x199u, v29, 0); /*0x6b67f6*/
              v31 = dword_A83D14; /*0x6b67f8*/
              byte_A8EBA5 = 1; /*0x6b6800*/
              if ( dword_A83D14 == -1 ) /*0x6b6807*/
                v31 = dword_A83D18; /*0x6b6809*/
              if ( v31 != v30 ) /*0x6b6810*/
              {
                Theme::Stop(&g_BuildingTypeClass_Count, 1); /*0x6b681d*/
                Theme::QueueSong((int)&g_BuildingTypeClass_Count, v30); /*0x6b6828*/
                return 0; /*0x6b6839*/
              }
            }
          }
        }
        break;
      case 0x533u: /*0x6b6733*/
        v26 = SendMessageA(hWnd, 0xF0u, 0, 0); /*0x6b6759*/
        AudioSettings::SetFlag70(v26 == 1); /*0x6b6767*/
        if ( SendMessageA(hWnd, 0xF0u, 0, 0) == 1 ) /*0x6b677b*/
        {
          SendDlgItemMessageA(hDlg, 1332, 0xF1u, 0, 0); /*0x6b6790*/
          AudioSettings::SetFlag68(0); /*0x6b679d*/
          return 0; /*0x6b67ae*/
        }
        break;
    }
    return 0; /*0x6b677b*/
  }
  if ( (uint16_t)a3 == 1333 ) /*0x6b68a9*/
  {
    if ( !IDA_HIWORD(a3) ) /*0x6b69c8*/
    {
      Theme::Stop(&g_BuildingTypeClass_Count, 1); /*0x6b69d4*/
      Theme::QueueSong((int)&g_BuildingTypeClass_Count, -3); /*0x6b69e0*/
      byte_A8EBA5 = 0; /*0x6b69e5*/
    }
    return 0; /*0x6b69e5*/
  }
  if ( (uint16_t)a3 != 1670 || IDA_HIWORD(a3) ) /*0x6b68ba*/
    return 0; /*0x6b69ec*/
  v33 = GetDlgItem(hDlg, 1327); /*0x6b68cf*/
  if ( v33 ) /*0x6b68d9*/
  {
    v40 = (double)SendMessageA(v33, 0x400u, 0, 0) * 0.1; /*0x6b68fd*/
    Audio::SetScoreVolume((float *)g_GameModeOptions, v40, 0); /*0x6b6900*/
    if ( flt_A8EBA0 == 0.0 ) /*0x6b6916*/
    {
      v34 = dword_A83D14; /*0x6b6918*/
      if ( dword_A83D14 == -1 ) /*0x6b6920*/
        v34 = dword_A83D18; /*0x6b6922*/
      Theme::QueueSong((int)&g_BuildingTypeClass_Count, v34); /*0x6b692d*/
      Theme::Stop(&g_BuildingTypeClass_Count, 0); /*0x6b6939*/
    }
  }
  v35 = GetDlgItem(hDlg, 1330); /*0x6b6944*/
  if ( v35 ) /*0x6b6948*/
  {
    v41 = (double)SendMessageA(v35, 0x400u, 0, 0) * 0.1; /*0x6b696c*/
    Audio::SetSoundVolume((float *)g_GameModeOptions, v41, 0); /*0x6b696f*/
  }
  v36 = GetDlgItem(hDlg, 1334); /*0x6b697a*/
  if ( v36 ) /*0x6b697e*/
  {
    v42 = (double)SendMessageA(v36, 0x400u, 0, 0) * 0.1; /*0x6b69a2*/
    Audio::SetVoiceVolume((float *)g_GameModeOptions, v42, 0); /*0x6b69a5*/
  }
  *(unsigned int *)GetWindowLongA(hDlg, 8) = 1; /*0x6b69b5*/
  return 0; /*0x6b6619*/
}
} // namespace gamemd