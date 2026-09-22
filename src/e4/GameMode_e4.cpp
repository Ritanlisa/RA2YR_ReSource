// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/GameMode_e4.hpp"

// 0x5D5DE0
namespace gamemd {
int GameMode::IsValid(unsigned int a2)
{
{
  return (!*(this + 63) || a2 != -2) && a2 < 4; /*0x5d5df2*/
}
} // namespace gamemd
}

// 0x6B8CA0
namespace gamemd {
unsigned int GameMode::ReadFlagsFromINI(CCINIClass * aP1)
{
{
  char Bool_Overwrite; // al
  unsigned int result; // eax

  INIClass::ResetSection(aP1); /*0x6b8caa*/
  Bool_Overwrite = INIClass::ReadBool_Overwrite( /*0x6b8cc5*/
                     (int)aP1,
                     *(unsigned __int8 **)&stru_830620[64428],
                     (CCINIClass *)&stru_830620[42764],
                     (*this & 0x4000) != 0);
  int v4 = *this; /*0x6b8cca*/
  BYTE1(v4) = BYTE1(*this) & 0xBF; /*0x6b8cd2*/
  int v5 = v4 | ((Bool_Overwrite & 1) << 14); /*0x6b8cd7*/
  *this = v5; /*0x6b8cd9*/
  char v6; // al
  v6 = INIClass::ReadBool_Overwrite( /*0x6b8cec*/
         (int)aP1,
         *(unsigned __int8 **)&stru_830620[64428],
         (CCINIClass *)&stru_830620[64540],
         BYTE1(v5) & 1);
  int v7 = *this; /*0x6b8cf1*/
  BYTE1(v7) = BYTE1(*this) & 0xFE; /*0x6b8cf9*/
  int v8 = v7 | ((v6 & 1) << 8); /*0x6b8cfc*/
  *this = v8; /*0x6b8d00*/
  char v9; // al
  v9 = INIClass::ReadBool_Overwrite( /*0x6b8d14*/
         (int)aP1,
         *(unsigned __int8 **)&stru_830620[64428],
         (CCINIClass *)&stru_830620[64524],
         (v8 & 0x200) != 0);
  int v10 = *this; /*0x6b8d19*/
  BYTE1(v10) = BYTE1(*this) & 0xFD; /*0x6b8d21*/
  int v11 = v10 | ((v9 & 1) << 9); /*0x6b8d24*/
  *this = v11; /*0x6b8d28*/
  unsigned int v12; // eax
  v12 = *this & 0xFFFDFFFF /*0x6b8d4f*/
      | ((INIClass::ReadBool_Overwrite(
            (int)aP1,
            *(unsigned __int8 **)&stru_830620[64428],
            (CCINIClass *)&stru_830620[64472],
            (v11 & 0x20000) != 0)
        & 1) << 17);
  *this = v12; /*0x6b8d53*/
  unsigned int v13; // eax
  v13 = *this & 0xFFFEFFFF /*0x6b8d7a*/
      | ((INIClass::ReadBool_Overwrite(
            (int)aP1,
            *(unsigned __int8 **)&stru_830620[64428],
            (CCINIClass *)&stru_830620[64460],
            BYTE2(v12) & 1)
        & 1) << 16);
  *this = v13; /*0x6b8d7c*/
  result = *this & 0xFFFBFFFF /*0x6b8da5*/
         | ((INIClass::ReadBool_Overwrite(
               (int)aP1,
               *(unsigned __int8 **)&stru_830620[64428],
               (CCINIClass *)&stru_830620[64448],
               (v13 & 0x40000) != 0)
           & 1) << 18);
  *this = result; /*0x6b8da7*/
  if ( !g_GameMode_Current || g_NetworkPlayerBuffer[5935] ) /*0x6b8dbb*/
  {
  unsigned int v15; // eax
    v15 = *this & 0xFFFFFFBF /*0x6b8de5*/
        | ((INIClass::ReadBool_Overwrite(
              (int)aP1,
              *(unsigned __int8 **)&stru_830620[64428],
              (CCINIClass *)&stru_830620[51680],
              (result & 0x40) != 0)
          & 1) << 6);
    *this = v15; /*0x6b8de9*/
  char v16; // al
    v16 = INIClass::ReadBool_Overwrite( /*0x6b8dfd*/
            (int)aP1,
            *(unsigned __int8 **)&stru_830620[64428],
            (CCINIClass *)&stru_830620[64572],
            (v15 & 0x80) != 0);
    int v17 = *this; /*0x6b8e02*/
    LOBYTE(v17) = *this & 0x7F; /*0x6b8e0a*/
    int v18 = v17 | ((v16 & 1) << 7); /*0x6b8e0d*/
    *this = v18; /*0x6b8e11*/
  char v19; // al
    v19 = INIClass::ReadBool_Overwrite( /*0x6b8e25*/
            (int)aP1,
            *(unsigned __int8 **)&stru_830620[64428],
            (CCINIClass *)&stru_830620[64552],
            (v18 & 0x8000) != 0);
    int v20 = *this; /*0x6b8e2a*/
    BYTE1(v20) = BYTE1(*this) & 0x7F; /*0x6b8e32*/
    int v21 = v20 | ((v19 & 1) << 15); /*0x6b8e35*/
    *this = v21; /*0x6b8e39*/
  char v22; // al
    v22 = INIClass::ReadBool_Overwrite( /*0x6b8e4d*/
            (int)aP1,
            *(unsigned __int8 **)&stru_830620[64428],
            (CCINIClass *)&stru_830620[64508],
            (v21 & 0x400) != 0);
    int v23 = *this; /*0x6b8e52*/
    BYTE1(v23) = BYTE1(*this) & 0xFB; /*0x6b8e5a*/
    int v24 = v23 | ((v22 & 1) << 10); /*0x6b8e5d*/
    *this = v24; /*0x6b8e61*/
  char v25; // al
    v25 = INIClass::ReadBool_Overwrite( /*0x6b8e75*/
            (int)aP1,
            *(unsigned __int8 **)&stru_830620[64428],
            (CCINIClass *)&stru_830620[51544],
            (v24 & 0x1000) != 0);
    int v26 = *this; /*0x6b8e7a*/
    BYTE1(v26) = BYTE1(*this) & 0xEF; /*0x6b8e82*/
    int v27 = v26 | ((v25 & 1) << 12); /*0x6b8e85*/
    *this = v27; /*0x6b8e89*/
  unsigned int v28; // eax
    v28 = *this & 0xFFFFFFDF /*0x6b8ead*/
        | (32
         * (INIClass::ReadBool_Overwrite(
              (int)aP1,
              *(unsigned __int8 **)&stru_830620[64428],
              (CCINIClass *)&stru_830620[64484],
              (v27 & 0x20) != 0)
          & 1));
    *this = v28; /*0x6b8eb1*/
  char v29; // al
    v29 = INIClass::ReadBool_Overwrite( /*0x6b8ec5*/
            (int)aP1,
            *(unsigned __int8 **)&stru_830620[64428],
            (CCINIClass *)&stru_830620[64492],
            (v28 & 0x800) != 0);
    int v30 = *this; /*0x6b8eca*/
    BYTE1(v30) = BYTE1(*this) & 0xF7; /*0x6b8ed2*/
    result = v30 | ((v29 & 1) << 11); /*0x6b8ed5*/
    *this = result; /*0x6b8ed7*/
  }
  return result; /*0x6b8ed9*/
}
} // namespace gamemd
}
