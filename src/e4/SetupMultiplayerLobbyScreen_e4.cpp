// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/Network_e4.hpp"

// 0x5EBEC0
namespace gamemd {
void SetupMultiplayerLobbyScreen_Setup(SkirmishDialog * hDlg, char * a2, int nIDDlgItem)
{
{
  LRESULT v7; // eax
  CoordStruct *v8; // eax
  int v10; // [esp+Ch] [ebp-Ch]
  int v11; // [esp+10h] [ebp-8h]
  char * v3 = a2; /*0x5ebec8*/
  int v4 = (int)&a2[nIDDlgItem]; /*0x5ebed0*/
  v11 = (int)&a2[nIDDlgItem]; /*0x5ebedd*/
  if ( *(_DWORD *)&HouseClass_Player[29932] == 4 ) /*0x5ebee1*/
  {
    if ( !Network::IsMultiplayerActive() || Network::IsLobbyFeature() ) /*0x5ebeec*/
      v10 = 6; /*0x5ebeff*/
    else
      v10 = 2; /*0x5ebef5*/
  }
  else
  {
    v10 = 8; /*0x5ebf09*/
  }
  if ( (int)v3 < v4 )
  {
    do
    {
  int v6; // esi
      if ( v3 )
      {
        if ( v3 == (char *)1 )
        {
          v6 = 1042; /*0x5ebf30*/
        }
        else if ( v3 == (char *)2 )
        {
          v6 = 1043; /*0x5ebf3c*/
        }
        else if ( v3 == (char *)3 )
        {
          v6 = 1044; /*0x5ebf48*/
        }
        else if ( v3 == (char *)4 )
        {
          v6 = 1045; /*0x5ebf54*/
        }
        else if ( v3 == (char *)5 )
        {
          v6 = 1046; /*0x5ebf60*/
        }
        else if ( v3 == (char *)6 )
        {
          v6 = 1047; /*0x5ebf6c*/
        }
        else
        {
          v6 = v3 != (char *)7 ? -1 : 1048;
        }
      }
      else
      {
        v6 = 1041; /*0x5ebf24*/
      }
      v7 = SendDlgItemMessageA((HWND)hDlg, v6, 0x147u, 0, 0); /*0x5ebf93*/
      v8 = (CoordStruct *)SendDlgItemMessageA((HWND)hDlg, v6, 0x150u, v7, 0); /*0x5ebf9f*/
      if ( v8 == (CoordStruct *)-1 /*0x5ebfcc*/
        || !v8
        || v8 == *(&g_MatrixTransformState + 2275)
        || v8 == *(&g_MatrixTransformState + 2276)
        || v8 == *(&g_MatrixTransformState + 2281)
        || v8 == *(&g_MatrixTransformState + 2280) )
      {
        if ( v3 != *(char **)&stru_830620[4228] ) /*0x5ebfd9*/
        {
          if ( (int)v3 >= v10 ) /*0x5ebfe3*/
            PlayerSkirmishSlotHandler(hDlg, v6, (LPARAM)*(&g_MatrixTransformState + 2276), 0); /*0x5ebfed*/
          else
            PlayerSkirmishSlotHandler(hDlg, v6, (LPARAM)*(&g_MatrixTransformState + 2275), 0); /*0x5ebfe6*/
        }
      }
      else
      {
        PlayerSkirmishSlotHandler(hDlg, v6, (LPARAM)v8, 0); /*0x5ebfd1*/
      }
      ++v3; /*0x5ebff6*/
    }
    while ( (int)v3 < v11 );
    v3 = a2; /*0x5ebfff*/
  }
  UpdateMultiplayerLobbySlots((HWND)hDlg, v3, nIDDlgItem); /*0x5ec00d*/
  RetVtableStubZero_eax_27(); /*0x5ec012*/
  return CheckGameSettingsChanged(1, 0); /*0x5ec020*/
}
} // namespace gamemd
