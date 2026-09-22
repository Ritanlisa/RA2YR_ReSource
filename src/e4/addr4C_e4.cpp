// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/E4Recv_4C2790_e4.hpp"
#include "e4/classes/E4Recv_4C2B40_e4.hpp"
#include "e4/classes/E4Recv_4C2C30_e4.hpp"
#include "e4/classes/E4Recv_4C2FC0_e4.hpp"
#include "e4/classes/E4Recv_4C38D0_e4.hpp"
#include "e4/classes/E4Recv_4C3C90_e4.hpp"
#include "e4/classes/E4Recv_4C3DD0_e4.hpp"
#include "e4/classes/E4Recv_4C4FC0_e4.hpp"
#include "e4/classes/E4Recv_4C69E0_e4.hpp"
#include "e4/classes/E4Recv_4C6A60_e4.hpp"
#include "e4/classes/E4Recv_4C6BE0_e4.hpp"
#include "e4/classes/E4Recv_4C95D0_e4.hpp"
#include "e4/classes/E4Recv_4CB580_e4.hpp"
#include "e4/classes/E4Recv_4CB640_e4.hpp"
#include "e4/classes/E4Recv_4CB6A0_e4.hpp"
#include "e4/classes/E4Recv_4CB8B0_e4.hpp"
#include "e4/classes/E4Recv_4CCA70_e4.hpp"
#include "e4/classes/Array_e4.hpp"
#include "e4/classes/AudioStream_e4.hpp"
#include "e4/classes/Cell_e4.hpp"
#include "e4/classes/Coord_e4.hpp"
#include "e4/classes/Debug_e4.hpp"
#include "e4/classes/Game_e4.hpp"
#include "e4/classes/House_e4.hpp"
#include "e4/classes/Math_e4.hpp"
#include "e4/classes/Object_e4.hpp"
#include "e4/classes/Power_e4.hpp"
#include "e4/classes/Vector_e4.hpp"

// 0x4C1440
namespace gamemd {
void sub_4C1440()
{
{
  int result; // eax

  _DWORD v1[79]; // [esp+8h] [ebp-13Ch] BYREF
  memset(v1, 0, sizeof(v1)); /*0x4c1452*/
  v1[0] = 316; /*0x4c145d*/
  result = (*(int (__stdcall **)(int, _DWORD *, _DWORD))(*(_DWORD *)DataGlobal_8A0E00 + 44))(DataGlobal_8A0E00, v1, 0); /*0x4c146b*/
  if ( !result ) /*0x4c1471*/
  {
    if ( (v1[1] & 1) != 0 ) /*0x4c1478*/
    {
      if ( (v1[14] & 0x400) != 0 ) /*0x4c148b*/
      {
        if ( (v1[33] & 0x2000) != 0 ) /*0x4c14a1*/
        {
          if ( (v1[33] & 0x1000) != 0 ) /*0x4c14b0*/
            return ((v1[33] & 0x20000) != 0) - 1; /*0x4c14c7*/
          else
            return -1; /*0x4c14b2*/
        }
        else
        {
          return -1; /*0x4c14a3*/
        }
      }
      else
      {
        return -1; /*0x4c148d*/
      }
    }
    else
    {
      return -1; /*0x4c147a*/
    }
  }
  return result; /*0x4c1470*/
}
} // namespace gamemd

// 0x4C14D0
namespace gamemd {
void sub_4C14D0()
{
{
  int result; // eax

  _DWORD v1[63]; // [esp+8h] [ebp-1F8h] BYREF
  memset(v1, 0, sizeof(v1)); /*0x4c14e2*/
  _DWORD v2[63]; // [esp+104h] [ebp-FCh] BYREF
  memset(v2, 0, sizeof(v2)); /*0x4c14f5*/
  v1[0] = 252; /*0x4c14fc*/
  v2[0] = 252; /*0x4c1500*/
  result = (*(int (__stdcall **)(_DWORD, _DWORD *, _DWORD *))(*(_DWORD *)g_DrawColorState + 12))( /*0x4c1517*/
             g_DrawColorState,
             v1,
             v2);
  if ( !result ) /*0x4c151d*/
  {
    if ( (v1[1] & 0x1C3) == 0x1C3 ) /*0x4c1531*/
    {
      if ( (v1[2] & 2) != 0 ) /*0x4c1545*/
      {
        if ( (v1[3] & 0x400) != 0 ) /*0x4c155c*/
        {
          if ( (v1[3] & 0x200) != 0 ) /*0x4c156b*/
          {
            if ( (v1[39] & 0x400) != 0 ) /*0x4c157e*/
            {
              if ( (v1[40] & 0x400) != 0 ) /*0x4c1591*/
              {
                if ( (v1[28] & 0xA) != 0 ) /*0x4c15a2*/
                {
                  if ( (v1[29] & 2) != 0 ) /*0x4c15b2*/
                  {
                    if ( (v1[30] & 2) != 0 ) /*0x4c15c2*/
                    {
                      if ( v1[45] >= 0x100u ) /*0x4c15dc*/
                        return -(v1[46] < 0x100u); /*0x4c15ef*/
                      else
                        return -1; /*0x4c15de*/
                    }
                    else
                    {
                      return -1; /*0x4c15c4*/
                    }
                  }
                  else
                  {
                    return -1; /*0x4c15b4*/
                  }
                }
                else
                {
                  return -1; /*0x4c15a4*/
                }
              }
              else
              {
                return -1; /*0x4c1593*/
              }
            }
            else
            {
              return -1; /*0x4c1580*/
            }
          }
          else
          {
            return -1; /*0x4c156d*/
          }
        }
        else
        {
          return -1; /*0x4c155e*/
        }
      }
      else
      {
        return -1; /*0x4c1547*/
      }
    }
    else
    {
      return -1; /*0x4c1533*/
    }
  }
  return result; /*0x4c151c*/
}
} // namespace gamemd

// 0x4C1600
namespace gamemd {
void sub_4C1600()
{
{
  int result; // eax

  result = g_lpDirectDraw7->lpVtbl->QueryInterface( /*0x4c1618*/
             g_lpDirectDraw7,
             (const IID *const)&unk_7F7D50,
             (LPVOID *)&DataGlobal_8A0E00);
  if ( !result ) /*0x4c161c*/
  {
    result = (**(int (__stdcall ***)(int, void *, int *))DataGlobal_8A0E00)( /*0x4c1630*/
               DataGlobal_8A0E00,
               &unk_7F8070,
               &DataGlobal_8A0DF4);
    if ( !result ) /*0x4c1634*/
    {
  _DWORD v1[79]; // [esp+20h] [ebp-13Ch] BYREF
      memset(v1, 0, sizeof(v1)); /*0x4c1644*/
      v1[0] = 316; /*0x4c164b*/
      if ( !(*(int (__stdcall **)(int, _DWORD *, _DWORD))(*(_DWORD *)DataGlobal_8A0E00 + 44))(DataGlobal_8A0E00, v1, 0) /*0x4c1687*/
        && (v1[1] & 1) != 0
        && (v1[14] & 0x400) != 0
        && (v1[33] & 0x2000) != 0
        && (v1[33] & 0x1000) != 0
        && (v1[33] & 0x20000) != 0 )
      {
        return 0; /*0x4c1693*/
      }
      else
      {
        return -1; /*0x4c1689*/
      }
    }
  }
  return result; /*0x4c168c*/
}
} // namespace gamemd

// 0x4C16A0
namespace gamemd {
void InitializeRadialGradientTexture()
{
{
  int result; // eax

  _DWORD * v0 = *(_DWORD **)(DSurface_Composite + 28); /*0x4c16b4*/
  _DWORD * v14 = v0; /*0x4c16cb*/
  result = (*(int (__stdcall **)(int, void *, _DWORD *, __int64 *))(*(_DWORD *)DataGlobal_8A0DF4 + 32))( /*0x4c16cf*/
             DataGlobal_8A0DF4,
             &unk_7F80B0,
             v0,
             &g_DrawColorState);
  if ( !result ) /*0x4c16d6*/
  {
    if ( sub_4C14D0() ) /*0x4c16dc*/
      return -1; /*0x4c16ef*/
    result = (*(int (__stdcall **)(int, char *, _DWORD))(*(_DWORD *)DataGlobal_8A0DF4 + 24))( /*0x4c16fe*/
               DataGlobal_8A0DF4,
               (char *)&g_DrawColorState + 4,
               0);
    if ( !result ) /*0x4c1703*/
    {
      result = (*(int (__stdcall **)(_DWORD, _DWORD))(*(_DWORD *)g_DrawColorState + 24))( /*0x4c1718*/
                 g_DrawColorState,
                 HIDWORD(g_DrawColorState));
      if ( !result ) /*0x4c171d*/
      {
  _DWORD v16[27]; // [esp+98h] [ebp-6Ch] BYREF
        memset(v16, 0, sizeof(v16)); /*0x4c172e*/
        int v2 = *v0; /*0x4c1730*/
        v16[0] = 108; /*0x4c1738*/
        result = (*(int (__stdcall **)(_DWORD *, _DWORD *))(v2 + 88))(v0, v16); /*0x4c1740*/
        if ( !result ) /*0x4c1745*/
        {
  _DWORD v15[11]; // [esp+6Ch] [ebp-98h] BYREF
          memset(v15, 0, sizeof(v15)); /*0x4c175a*/
          v15[3] = v16[3]; /*0x4c1768*/
          v15[4] = v16[2]; /*0x4c177d*/
          *(float *)&v15[7] = (float)v16[3]; /*0x4c1781*/
          v15[0] = 44; /*0x4c178d*/
          v15[10] = 1065353216; /*0x4c1795*/
          *(float *)&v15[8] = (float)v16[2]; /*0x4c179e*/
          result = (*(int (__stdcall **)(_DWORD, _DWORD *))(*(_DWORD *)HIDWORD(g_DrawColorState) + 68))( /*0x4c17a5*/
                     HIDWORD(g_DrawColorState),
                     v15);
          if ( !result ) /*0x4c17aa*/
          {
            result = (*(int (__stdcall **)(_DWORD, _DWORD))(*(_DWORD *)g_DrawColorState + 52))( /*0x4c17bf*/
                       g_DrawColorState,
                       HIDWORD(g_DrawColorState));
            if ( !result ) /*0x4c17c4*/
            {
              if ( __2_YAPAXI_Z(0x78u) ) /*0x4c17cc*/
              {
                DataGlobal_8A0E04 = (void *)sub_4A3270(256, 256, 0); /*0x4c17ec*/
                if ( DataGlobal_8A0E04 ) /*0x4c17f1*/
                {
                  void * v3 = malloc(0x20000u); /*0x4c17f8*/
                  const void * v12 = v3; /*0x4c1802*/
                  if ( !v3 ) /*0x4c1806*/
                    return 2; /*0x4c19a2*/
                  int v4 = -128; /*0x4c180c*/
                  _WORD * v5 = v3; /*0x4c1811*/
                  int v13 = -128; /*0x4c1813*/
                  do /*0x4c18db*/
                  {
                    int v6 = v4 * v4; /*0x4c1817*/
                    int v7 = -128; /*0x4c181a*/
                    do /*0x4c18c0*/
                    {
                      double v8 = Math::Sqrt((double)(v6 + v7 * v7)); /*0x4c1834*/
                      int v9 = 400 - Math::RoundToInt(v8 * 3.0); /*0x4c184c*/
                      if ( v9 >= 0 ) /*0x4c184e*/
                      {
                        if ( v9 > 255 ) /*0x4c186d*/
                          v9 = 255; /*0x4c186f*/
                      }
                      else
                      {
                        v9 = 0; /*0x4c1850*/
                      }
                      ++v5; /*0x4c1886*/
                      ++v7; /*0x4c18af*/
                      *(v5 - 1) = (v9 >> g_BitShift_Green_0 << g_DDraw_BlueMask) /*0x4c18b0*/
                                | (v9 >> g_BitMask_Blue << g_BitMask_Green)
                                | (v9 >> g_BitShift_Blue << g_BitShift_Blue);
                    }
                    while ( v7 + 128 < 256 ); /*0x4c18c0*/
                    v4 = v13 + 1; /*0x4c18ca*/
                    v13 = v4; /*0x4c18cb*/
                  }
                  while ( v4 + 128 < 256 ); /*0x4c18db*/
                  if ( AudioStream::ReadSamples(DataGlobal_8A0E04, v12) ) /*0x4c18ec*/
                    return 3; /*0x4c18f5*/
                  memset(v16, 0, sizeof(v16)); /*0x4c1911*/
                  v16[0] = 108; /*0x4c1919*/
                  result = (*(int (__stdcall **)(_DWORD *, _DWORD *))(*v14 + 88))(v14, v16); /*0x4c1923*/
                  if ( !result ) /*0x4c1928*/
                  {
                    if ( __2_YAPAXI_Z(0x78u) ) /*0x4c1930*/
                      DataGlobal_8A0E08 = (void *)sub_4A3270(v16[3], v16[2], 1); /*0x4c194f*/
                    else
                      DataGlobal_8A0E08 = 0; /*0x4c1956*/
                    void * v10 = __2_YAPAXI_Z(0x18004u); /*0x4c1965*/
                    if ( v10 ) /*0x4c196f*/
                      void * v11 = (void *)sub_4A3630(v10); /*0x4c1973*/
                    else
                      v11 = 0; /*0x4c197a*/
                    DataGlobal_8A0E10 = v11; /*0x4c1982*/
                    if ( !DataGlobal_8A0E08 || !v11 ) /*0x4c1991*/
                      return -1; /*0x4c1991*/
                    return 0; /*0x4c1997*/
                  }
                  return result; /*0x4c1901*/
                }
              }
              else
              {
                DataGlobal_8A0E04 = 0; /*0x4c1854*/
              }
              return 1; /*0x4c185a*/
            }
          }
        }
      }
    }
  }
  return result; /*0x4c16e8*/
}
} // namespace gamemd

// 0x4C1E70
namespace gamemd {
void sub_4C1E70(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
{

  int v16[2]; // [esp+10h] [ebp-8h] BYREF
  Coord::To_Screen(g_TacticalClass_Instance, &a1, v16); /*0x4c1e85*/
  int v15[2]; // [esp+8h] [ebp-10h] BYREF
  Coord::To_Screen(g_TacticalClass_Instance, &a4, v15); /*0x4c1e9a*/
  int v9 = ZCoordToScreenY(a3); /*0x4c1ea3*/
  int v10 = a8 - v9 - 2; /*0x4c1eb2*/
  int v11 = ZCoordToScreenY(a6); /*0x4c1eb5*/
  int v12 = a9 - v11 - 2; /*0x4c1ec8*/
  if ( *(_DWORD *)(g_FileSystem_THEATER_PAL + 4) == 1 ) /*0x4c1ecf*/
    int v13 = *(unsigned __int8 *)(*(_DWORD *)(g_FileSystem_THEATER_PAL + 372) + a7); /*0x4c1ee0*/
  else
    v13 = *(unsigned __int16 *)(*(_DWORD *)(g_FileSystem_THEATER_PAL + 372) + 2 * a7); /*0x4c1ef0*/
  return (*(int (__thiscall **)(int, int *, int *, int *, int, int, int, _DWORD))(*(_DWORD *)DSurface_Composite + 52))( /*0x4c1f13*/
           DSurface_Composite,
           &DSurface_ViewBounds,
           v16,
           v15,
           v13,
           v10,
           v12,
           0);
}
} // namespace gamemd

// 0x4C2790
namespace gamemd {
int E4Recv_4C2790::sub_4C2790()
{
{
  int result; // eax

  if ( this->M40 )
  {
  int v4[2]; // [esp+10h] [ebp-8h] BYREF
    Coord::To_Screen(*(_DWORD **)&DataGlobal_87F8E4[31296], (_DWORD *)this, (IUnknown *)v4); /*0x4c27aa*/
  int v3[2]; // [esp+8h] [ebp-10h] BYREF
    Coord::To_Screen(*(_DWORD **)&DataGlobal_87F8E4[31296], (_DWORD *)(this + 12), (IUnknown *)v3); /*0x4c27be*/
    if ( ClipLine(v4, v3, (int *)&DataGlobal_87F8E4[30396]) )
      Lightning::Draw(
        (_DWORD *)this,
        *(_DWORD *)this,
        this->M4,
        this->M8,
        this->M12,
        this->M16,
        this->M20,
        (unsigned char)this->M44 != 0 ? 5 : 10);
    ++this->M28; /*0x4c281a*/
  }
  result = *(int *)(this + 40) >> 1; /*0x4c2821*/
  this->M40 = result; /*0x4c2823*/
  return result; /*0x4c2820*/
}
} // namespace gamemd

// 0x4C2830
namespace gamemd {
void sub_4C2830()
{
{
  int result; // eax
  void *Block; // [esp+18h] [ebp-24h] BYREF
  int i; // [esp+1Ch] [ebp-20h]

  result = DataGlobal_8A0E98 - 1; /*0x4c2839*/
  for ( i = DataGlobal_8A0E98 - 1; i >= 0; --i ) /*0x4c2843*/
  {
    int * v1 = (int *)*((_DWORD *)DataGlobal_8A0E8C + result); /*0x4c284f*/
    Block = v1; /*0x4c2852*/
    int v2 = v1[8]; /*0x4c2856*/
    if ( v2 ) /*0x4c285b*/
    {
  int *v3; // edx
      v3 = (int *)(*(int (__thiscall **)(int, char *, int, _DWORD, _DWORD, _DWORD))(*(_DWORD *)v2 + 176))( /*0x4c2888*/
                    v2,
  char v19[12]; // [esp+30h] [ebp-Ch] BYREF
                    v19,
                    v1[9],
                    0,
                    0,
                    0);
      int v4 = *v3; /*0x4c288a*/
      int v5 = v3[1]; /*0x4c288e*/
      int v6 = v3[2]; /*0x4c2891*/
      if ( v4 != DataGlobal_8A0E50 || v5 != DataGlobal_8A0E54 || v6 != DataGlobal_8A0E58 ) /*0x4c28a4*/
      {
        _DWORD * v7 = Block; /*0x4c28a6*/
        *(_DWORD *)Block = v4; /*0x4c28aa*/
        v7[1] = v5; /*0x4c28ac*/
        v7[2] = v6; /*0x4c28af*/
      }
      v1 = (int *)Block; /*0x4c28b2*/
    }
    int * v8 = v1 + 10; /*0x4c28b9*/
    ObjectClass *v9 = v1; /*0x4c28be*/
    if ( v1[10] ) /*0x4c28b6*/
    {
  int v18[2]; // [esp+28h] [ebp-14h] BYREF
      Coord::To_Screen(g_TacticalClass_Instance, v1, v18); /*0x4c28ce*/
  int v17[2]; // [esp+20h] [ebp-1Ch] BYREF
      Coord::To_Screen(g_TacticalClass_Instance, v9 + 3, v17); /*0x4c28e2*/
      if ( ClipLine(v18, v17, &DSurface_ViewBounds) ) /*0x4c28f4*/
      {
        int v10 = -(v9->fallRate != 0); /*0x4c2904*/
        LOBYTE(v10) = v10 & 0xFB; /*0x4c2906*/
        Lightning::Draw(v9, *v9, v9[1], v9[2], v9[3], v9[4], v9[5], v10 + 10); /*0x4c2938*/
      }
      ++v9[7]; /*0x4c293d*/
    }
    *v8 >>= 1; /*0x4c2944*/
    if ( !*((_DWORD *)Block + 10) ) /*0x4c294a*/
    {
      int v11 = (*(int (__thiscall **)(int *, void **))(DataGlobal_8A0E88 + 16))(&DataGlobal_8A0E88, &Block); /*0x4c2960*/
      if ( v11 != -1 && v11 < DataGlobal_8A0E98 && v11 < --DataGlobal_8A0E98 ) /*0x4c297b*/
      {
        do /*0x4c2993*/
        {
          ++v11; /*0x4c2983*/
          *((_DWORD *)DataGlobal_8A0E8C + v11 - 1) = *((_DWORD *)DataGlobal_8A0E8C + v11); /*0x4c2987*/
        }
        while ( v11 < DataGlobal_8A0E98 ); /*0x4c2993*/
      }
      AbstractClass *v12 = Block; /*0x4c299b*/
      if ( Block ) /*0x4c299d*/
      {
        int v13 = *((_DWORD *)Block + 8); /*0x4c299f*/
        _DWORD * v14 = (char *)Block + 32; /*0x4c29a2*/
        if ( v13 ) /*0x4c29a7*/
        {
          *(_DWORD *)(v13 + 1756) = 0; /*0x4c29a9*/
          *v14 = 0; /*0x4c29b3*/
        }
        __3_YAXPAX_Z(v12); /*0x4c29ba*/
      }
    }
    result = i - 1; /*0x4c29c6*/
  }
  return result; /*0x4c29d1*/
}
} // namespace gamemd

// 0x4C29E0
namespace gamemd {
ParticleSystemClass * * sub_4C29E0()
{
{
  int i; // esi

  for ( i = 0; i < DataGlobal_8A0E98; ++i ) /*0x4c29ed*/
  {
    _DWORD * v1 = (_DWORD *)*((_DWORD *)DataGlobal_8A0E8C + i); /*0x4c29f4*/
    if ( v1 ) /*0x4c29f9*/
    {
      int v2 = v1[8]; /*0x4c29fb*/
      if ( v2 ) /*0x4c2a00*/
      {
        *(_DWORD *)(v2 + 1756) = 0; /*0x4c2a02*/
        v1[8] = 0; /*0x4c2a08*/
      }
      __3_YAXPAX_Z(v1); /*0x4c2a0c*/
    }
  }
  DataGlobal_8A0E98 = 0; /*0x4c2a23*/
  if ( DataGlobal_8A0E8C && DataGlobal_8A0E95 ) /*0x4c2a33*/
  {
    __3_YAXPAX_Z(DataGlobal_8A0E8C); /*0x4c2a36*/
    DataGlobal_8A0E8C = 0; /*0x4c2a3e*/
  }
  DataGlobal_8A0E95 = 0; /*0x4c2a44*/
  DataGlobal_8A0E90 = 0; /*0x4c2a4a*/
}
} // namespace gamemd

// 0x4C38E0
namespace gamemd {
char * * sub_4C38E0(char * a1, int a2, int a3, char * a4)
{
{
  unsigned __int8 *v8; // edi
  __int16 v14; // [esp+10h] [ebp-10h] BYREF
  int v16 = a2; /*0x4c38ed*/
  if ( !a3 || !a2 ) /*0x4c38fb*/
    return a4; /*0x4c38fb*/
  AbstractClass *v5 = a4; /*0x4c3901*/
  if ( a4 ) /*0x4c3907*/
    goto LABEL_6; /*0x4c3907*/
  char * v6 = (char *)__2_YAPAXI_Z((a3 + 1) << 8); /*0x4c3910*/
  a4 = v6; /*0x4c3918*/
  if ( !v6 ) /*0x4c391e*/
    return a4; /*0x4c3a11*/
  v5 = v6; /*0x4c3924*/
LABEL_6:
  _BYTE * v7 = v5 + 256; /*0x4c3926*/
  memset(v5, 0xFFu, 0x100u); /*0x4c3938*/
  int v17 = 0; /*0x4c393a*/
  if ( a3 > 0 ) /*0x4c3942*/
  {
    v8 = (unsigned __int8 *)(v16 + 1); /*0x4c394c*/
    while ( 1 ) /*0x4c395b*/
    {
      v5[*(v8 - 1)] = v17; /*0x4c395e*/
      int v9 = *v8; /*0x4c396a*/
      int v18 = v8[1]; /*0x4c396f*/
      int v10 = 1; /*0x4c397f*/
      char * v11 = &a1[2 * v9 + v9]; /*0x4c3984*/
      v14 = *(_WORD *)v11; /*0x4c3989*/
      LOBYTE(v11) = v11[2]; /*0x4c398e*/
      *v7 = 0; /*0x4c3991*/
      char v15 = (char)v11; /*0x4c3995*/
      do /*0x4c39e6*/
      {
        int v12 = (int)&a1[2 * (v10 % 256) + v10 % 256]; /*0x4c39ac*/
        LOWORD(v16) = *(_WORD *)v12; /*0x4c39ba*/
        BYTE2(v16) = *(_BYTE *)(v12 + 2); /*0x4c39c7*/
        Color::Lerp((unsigned __int8 *)&v16, v18, (unsigned __int8 *)&v14); /*0x4c39cb*/
        v7[v10++] = Palette::FindClosestColor(a1, (int)&v16); /*0x4c39dc*/
      }
      while ( v10 < 256 ); /*0x4c39e6*/
      v7 += 256; /*0x4c39f0*/
      v8 += 4; /*0x4c39f7*/
      if ( ++v17 >= a3 ) /*0x4c3a00*/
        break; /*0x4c3a00*/
      v5 = a4; /*0x4c3951*/
    }
    return a4; /*0x4c3a00*/
  }
  return v5; /*0x4c3a0a*/
}
} // namespace gamemd

// 0x4C3DD0
namespace gamemd {
AbstractClass * * E4Recv_4C3DD0::sub_4C3DD0(int a2)
{
{

  TextRenderer::GetInstance(); /*0x4c3dd9*/
  Text::MeasureWidth(*this, 0); /*0x4c3de5*/
  AbstractClass *v3 = *(this + 2); /*0x4c3def*/
  _DWORD v5[4]; // [esp+4h] [ebp-10h] BYREF
  v5[2] = g_DDraw_Active; /*0x4c3df8*/
  v5[0] = 0; /*0x4c3e09*/
  v5[1] = v3; /*0x4c3e12*/
  v5[3] = 18; /*0x4c3e16*/
  return (*(int (__thiscall **)(int, _DWORD *, int, _DWORD *, _DWORD, int))(*(_DWORD *)g_DSurface_Hidden_2 + 8))( /*0x4c3e28*/
           g_DSurface_Hidden_2,
           v5,
           a2,
           v5,
           0,
           1);
}
} // namespace gamemd

// 0x4C83E0
namespace gamemd {
void DialogFunc(HWND hDlg, UINT a2, WPARAM a3, LPARAM a4)
{
{
  if ( a2 > 0x111 ) /*0x4c83ea*/
  {
    if ( a2 == 534 ) /*0x4c84bc*/
      return (unsigned __int8)Window::ClampToScreen(a4); /*0x4c84d6*/
    return 0; /*0x4c84bc*/
  }
  if ( a2 == 273 ) /*0x4c83f0*/
  {
    if ( (unsigned __int16)a3 == 1149 ) /*0x4c847d*/
    {
      MessageBoxA(hDlg, aSorryYouCanOnl, aBummer, 0x30u); /*0x4c84ab*/
      return 0; /*0x4c84b4*/
    }
    if ( (unsigned __int16)a3 == 1153 ) /*0x4c8482*/
    {
      EndDialog(hDlg, 1153); /*0x4c848e*/
      return 0; /*0x4c8497*/
    }
    return 0; /*0x4c8482*/
  }
  if ( a2 == 16 ) /*0x4c83f5*/
  {
    EndDialog(hDlg, 1153); /*0x4c845c*/
    Object::RemoveObjectArray(hDlg); /*0x4c8464*/
    return 0; /*0x4c846c*/
  }
  if ( a2 != 272 ) /*0x4c83fc*/
    return 0; /*0x4c84c1*/
  Debug::Log(aWmInitdialog); /*0x4c8407*/
  SetDlgItemTextA(hDlg, 1156, Buffer); /*0x4c841e*/
  SetFocus(hDlg); /*0x4c8425*/
  if ( g_hWnd ) /*0x4c8433*/
    SetDialogParent(hDlg, g_hWnd); /*0x4c8437*/
  ShowWindow(hDlg, 1); /*0x4c843f*/
  TimerPool::AllocSlot(hDlg); /*0x4c8447*/
  return 0; /*0x4c844e*/
}
} // namespace gamemd

// 0x4C95D0
namespace gamemd {
unsigned int * E4Recv_4C95D0::sub_4C95D0(unsigned int * a2, unsigned short * a3)
{
{
  __int16 v3; // bx
  __int16 v11; // cx
  AbstractClass *v12; // ecx
  int v14; // [esp+Ch] [ebp-4h]
  v3 = *(this + 10); /*0x4c95d2*/
  if ( v3 <= 0 ) /*0x4c95db*/
    goto LABEL_14; /*0x4c95db*/
  AbstractClass *v4 = this->M8; /*0x4c95dd*/
  int v5 = this->M16; /*0x4c95e0*/
  if ( v4 != -1 ) /*0x4c95ec*/
  {
    if ( (int)g_CurrentFrame - v4 >= v5 ) /*0x4c95f4*/
    {
LABEL_14:
      v12 = *(_DWORD *)this; /*0x4c964f*/
      goto LABEL_15; /*0x4c964f*/
    }
    v5 -= (int)g_CurrentFrame - v4; /*0x4c95f6*/
  }
  if ( !v5 ) /*0x4c95fa*/
    goto LABEL_14; /*0x4c95fa*/
  AbstractClass *v6 = (__int16)(*this - *(this + 2)); /*0x4c9606*/
  __int64 v7 = (__int16)(*this - *(this + 2)); /*0x4c960b*/
  int v8 = (int)((HIDWORD(v7) ^ v7) - HIDWORD(v7)) / v3; /*0x4c9611*/
  v14 = *(_DWORD *)this; /*0x4c9615*/
  if ( (__int16)v8 > 0 ) /*0x4c961c*/
  {
    int v9 = this->M16; /*0x4c961e*/
    AbstractClass *v10 = this->M8; /*0x4c9621*/
    if ( v10 != -1 ) /*0x4c9627*/
    {
      if ( (int)g_CurrentFrame - v10 >= v9 ) /*0x4c962f*/
      {
        v11 = 0; /*0x4c964b*/
        goto LABEL_11; /*0x4c964d*/
      }
      LOWORD(v9) = v9 - ((_WORD)g_CurrentFrame - v10); /*0x4c9631*/
    }
    v11 = v9; /*0x4c9633*/
LABEL_11:
    LOWORD(v14) = v14 - v11 * (v6 / (__int16)v8); /*0x4c9635*/
  }
  LOWORD(v12) = v14; /*0x4c9645*/
LABEL_15:
  LOWORD(a3) = *a3 - v12; /*0x4c9651*/
  *a2 = a3; /*0x4c966b*/
  return a2; /*0x4c9655*/
}
} // namespace gamemd

// 0x4CB150
namespace gamemd {
void ComputeDistortionVariant(float a1)
{
{

  int v1 = Math::RoundToInt(flt_8223B0 * a1); /*0x4cb161*/
  char v2 = v1 & 1; /*0x4cb164*/
  signed int v3 = (v1 / 2) & 0x80001FFF; /*0x4cb169*/
  if ( v3 < 0 )
    v3 = (((_WORD)v3 - 1) | 0xFFFFE000) + 1 + ((int)((((_WORD)v3 - 1) | 0xFFFFE000) + 1) < 0 ? 0x2000 : 0);
  if ( v2 && v3 < 0x1FFF ) /*0x4cb187*/
    return DataGlobal_84F088[v3]; /*0x4cb189*/
  else
    return DataGlobal_84F084[v3]; /*0x4cb193*/
}
} // namespace gamemd

// 0x4CB4C0
namespace gamemd {
void sub_4CB4C0()
{
// write access to const memory has been detected, the output may be wrong!
{
  PVOID BaseAddress; // esi
  SIZE_T RegionSize; // edi
  HANDLE CurrentProcess; // eax
  DWORD flOldProtect; // [esp+10h] [ebp-20h] BYREF
  struct _MEMORY_BASIC_INFORMATION Buffer; // [esp+14h] [ebp-1Ch] BYREF

  memset(&Buffer, 0, sizeof(Buffer)); /*0x4cb4d4*/
  if ( VirtualQuery(Math::SinCos, &Buffer, 0x1Cu) ) /*0x4cb4e5*/
  {
    BaseAddress = Buffer.BaseAddress; /*0x4cb50a*/
    RegionSize = Buffer.RegionSize; /*0x4cb50c*/
    flOldProtect = 0; /*0x4cb50e*/
    if ( VirtualProtect(Buffer.BaseAddress, Buffer.RegionSize, 8u, &flOldProtect) ) /*0x4cb516*/
    {
      *(_DWORD *)Math::SinCos = 0; /*0x4cb53d*/
      if ( !VirtualProtect(BaseAddress, RegionSize, 0x10u, &flOldProtect) ) /*0x4cb549*/
      {
        GetLastError(); /*0x4cb550*/
        Debug::Log(); /*0x4cb55c*/
      }
      CurrentProcess = GetCurrentProcess(); /*0x4cb568*/
      FlushInstructionCache(CurrentProcess, 0, 0); /*0x4cb56f*/
    }
    else
    {
      GetLastError(); /*0x4cb51d*/
      Debug::Log(); /*0x4cb529*/
    }
  }
}
} // namespace gamemd

// 0x4CB580
namespace gamemd {
AbstractClass * * E4Recv_4CB580::sub_4CB580(char * Source, int a3)
{
{

  strncpy(this, Source, (IUnknown *)4); /*0x4cb58d*/
  *((_WORD *)this + 2) = 1; /*0x4cb598*/
  *((_WORD *)this + 3) = 1; /*0x4cb59c*/
  int * v4 = (int *)__2_YAPAXI_Z(1u); /*0x4cb5a0*/
  unsigned int v5 = *((unsigned __int16 *)this + 3); /*0x4cb5b1*/
  this->M8 = v4; /*0x4cb5b3*/
  qmemcpy(v4, &a3, 4 * (v5 >> 2)); /*0x4cb5b9*/
  int * v6 = &v4[v5 >> 2]; /*0x4cb5b9*/
  qmemcpy(v6, &a3 + (v5 >> 2), v5 & 3); /*0x4cb5c5*/
  this->M12 = 0; /*0x4cb5c8*/
  return (ObjectClass *)this; /*0x4cb5c7*/
}
} // namespace gamemd

// 0x4CB640
namespace gamemd {
void * E4Recv_4CB640::sub_4CB640(RandomStruct * aP1, int a3)
{
{

  strncpy(this, (const char *)aP1, (IUnknown *)4); /*0x4cb64d*/
  *((_WORD *)this + 2) = 3; /*0x4cb654*/
  *((_WORD *)this + 3) = 2; /*0x4cb65a*/
  int * v4 = (int *)__2_YAPAXI_Z(2u); /*0x4cb660*/
  unsigned int v5 = *((unsigned __int16 *)this + 3); /*0x4cb671*/
  this->M8 = v4; /*0x4cb673*/
  qmemcpy(v4, &a3, 4 * (v5 >> 2)); /*0x4cb679*/
  int * v6 = &v4[v5 >> 2]; /*0x4cb679*/
  qmemcpy(v6, &a3 + (v5 >> 2), v5 & 3); /*0x4cb685*/
  this->M12 = 0; /*0x4cb688*/
  return (ObjectClass *)this; /*0x4cb687*/
}
} // namespace gamemd

// 0x4CB6A0
namespace gamemd {
void * E4Recv_4CB6A0::sub_4CB6A0(RandomStruct * aP1, int a3)
{
{

  strncpy(this, (const char *)aP1, (IUnknown *)4); /*0x4cb6ad*/
  *((_WORD *)this + 2) = 4; /*0x4cb6b4*/
  *((_WORD *)this + 3) = 2; /*0x4cb6ba*/
  int * v4 = (int *)__2_YAPAXI_Z(2u); /*0x4cb6c0*/
  unsigned int v5 = *((unsigned __int16 *)this + 3); /*0x4cb6d1*/
  this->M8 = v4; /*0x4cb6d3*/
  qmemcpy(v4, &a3, 4 * (v5 >> 2)); /*0x4cb6d9*/
  int * v6 = &v4[v5 >> 2]; /*0x4cb6d9*/
  qmemcpy(v6, &a3 + (v5 >> 2), v5 & 3); /*0x4cb6e5*/
  this->M12 = 0; /*0x4cb6e8*/
  return (ObjectClass *)this; /*0x4cb6e7*/
}
} // namespace gamemd

// 0x4CEFB0
namespace gamemd {
void FootClass_LandAtPosition(int a1, int a2, char a3, float a4, int a5, int a6)
{
{
  int **v6; // esi
  void *NearbyCell; // eax
  int v23; // ebx
  float *Height; // eax
  int *v37; // eax
  int v40; // ebp
  int v55; // [esp+50h] [ebp-38h] BYREF
  int *v56; // [esp+54h] [ebp-34h] BYREF
  float v57; // [esp+58h] [ebp-30h] BYREF
  float v58; // [esp+5Ch] [ebp-2Ch] BYREF
  int v59; // [esp+60h] [ebp-28h]
  float v60; // [esp+64h] [ebp-24h] BYREF
  int v61; // [esp+68h] [ebp-20h]
  int v62; // [esp+6Ch] [ebp-1Ch]
  int v63[3]; // [esp+70h] [ebp-18h] BYREF
  _DWORD v64[3]; // [esp+7Ch] [ebp-Ch] BYREF

  v6 = (int **)(a1 + 12); /*0x4cefb6*/
  v59 = a1; /*0x4cefb9*/
  (*(void (__thiscall **)(_DWORD, float *))(**(_DWORD **)(a1 + 12) + 440))(*(_DWORD *)(a1 + 12), &v58); /*0x4cefc7*/
  int * v7 = *v6; /*0x4cefcd*/
  v55 = 0; /*0x4cefcf*/
  if ( v7 ) /*0x4cefd9*/
  {
    int v8 = ComPtr::ReleaseAndSet(&v55, v6); /*0x4cefe0*/
    if ( v8 < 0 && v8 != -2147467262 ) /*0x4cefee*/
      WinAPI::Wrapper(v8); /*0x4ceff1*/
    if ( v55 && (*v6)[173] && (*v6)[191] && (*(int (__stdcall **)(int))(*(_DWORD *)v55 + 24))(v55) ) /*0x4cf017*/
      a3 = 0; /*0x4cf01e*/
  }
  if ( *v6 && (*(int (__thiscall **)(int *))(**v6 + 44))(*v6) == 2 )
  {
  unsigned int v10; // eax
    if ( *v6 )
    {
      int * v9 = *v6; /*0x4cf033*/
      v10 = (*(int (__thiscall **)(int *))(*v9 + 44))(*v6) == 2 ? (unsigned int)v9 : 0;
    }
    else
    {
      v10 = 0; /*0x4cf039*/
    }
    if ( *(_BYTE *)(*(_DWORD *)(v10 + 1732) + 3595) ) /*0x4cf055*/
      a3 = 0; /*0x4cf05f*/
  }
  int v11 = LODWORD(a4); /*0x4cf06c*/
  v62 = a6; /*0x4cf06e*/
  int v12 = a5; /*0x4cf072*/
  LOWORD(v56) = SLODWORD(a4) / 256; /*0x4cf08c*/
  HIWORD(v56) = a5 / 256; /*0x4cf09f*/
  _DWORD * v13 = CellCoord::To_CellObj(&DataGlobal_87F7E8, (__int16 *)&v56); /*0x4cf0ac*/
  IUnknown *v14 = Cell::IsBridge(v13); /*0x4cf0b8*/
  if ( v14 && !*(_BYTE *)((*(int (__thiscall **)(int *))(**v6 + 132))(*v6) + 3367) ) /*0x4cf0cc*/
  {
    if ( Array::Contains(*v6, (int)v14) ) /*0x4cf0d9*/
    {
      int * v18 = (int *)v14->GetCoords_Alt(v63, *v6); /*0x4cf142*/
      v11 = *v18; /*0x4cf148*/
      v12 = v18[1]; /*0x4cf14a*/
      v62 = v18[2]; /*0x4cf150*/
    }
    else
    {
      int * v15 = *v6; /*0x4cf0e2*/
      v56 = *v6; /*0x4cf0e6*/
      if ( v56 && (*(int (__thiscall **)(int *))(*v15 + 44))(v15) == 2 ) /*0x4cf0f4*/
      {
        NearbyCell = InfantryClass::FindNearbyCell(v56, (int)v14); /*0x4cf0fb*/
        if ( NearbyCell ) /*0x4cf102*/
        {
          int * v17 = (int *)(*(int (__thiscall **)(void *, int *))(*(_DWORD *)NearbyCell + 72))(NearbyCell, v63); /*0x4cf125*/
          v11 = *v17; /*0x4cf128*/
          v12 = v17[1]; /*0x4cf12a*/
          v62 = v17[2]; /*0x4cf130*/
        }
        else
        {
          v11 = DataGlobal_8B3C78; /*0x4cf10a*/
          v12 = DataGlobal_8B3C7C; /*0x4cf110*/
          v62 = DataGlobal_8B3C80; /*0x4cf116*/
        }
      }
    }
  }
  (*(void (__thiscall **)(int *))(**v6 + 464))(*v6); /*0x4cf158*/
  int * v19 = (int *)(*(int (__thiscall **)(int *, int *))(**v6 + 72))(*v6, v63); /*0x4cf167*/
  int v20 = *v19; /*0x4cf16a*/
  int v21 = v19[1] - v12; /*0x4cf171*/
  LODWORD(v60) = v20 - v11; /*0x4cf173*/
  v61 = v21; /*0x4cf17b*/
  Vector::TwoDMagnitudeMath((int *)&v60); /*0x4cf17f*/
  int * v22 = (int)v22; /*0x4cf184*/
  v56 = v22; /*0x4cf18c*/
  if ( !v55 || !(*(int (__stdcall **)(int))(*(_DWORD *)v55 + 32))(v55) ) /*0x4cf197*/
  {
    int v24 = LODWORD(a4); /*0x4cf1a2*/
    int v25 = a5; /*0x4cf1a6*/
    int * v26 = *v6; /*0x4cf1ae*/
    v60 = a4; /*0x4cf1b4*/
    v61 = a5; /*0x4cf1b9*/
    v62 = a6; /*0x4cf1bd*/
    int * v27 = (int *)(*(int (__thiscall **)(int *, int *))(*v26 + 72))(v26, v63); /*0x4cf1c8*/
    int v28 = *(_DWORD *)Cell::GetHeight(&v58, v27, (int *)&v60); /*0x4cf1d5*/
    if ( !v55 ) /*0x4cf1dd*/
      goto LABEL_32; /*0x4cf1dd*/
    if ( !(*(int (__stdcall **)(int))(*(_DWORD *)v55 + 24))(v55) ) /*0x4cf1e2*/
      goto LABEL_32; /*0x4cf1e2*/
    int * v29 = (int *)(*(int (__thiscall **)(int *, int *))(**v6 + 72))(*v6, v63); /*0x4cf1f2*/
    int v30 = *v29; /*0x4cf1f5*/
    int v31 = v29[1] - v25; /*0x4cf1fc*/
    LODWORD(v60) = v30 - v24; /*0x4cf1fe*/
    v61 = v31; /*0x4cf206*/
    Vector::TwoDMagnitudeMath((int *)&v60); /*0x4cf20a*/
  int v32; // eax
    if ( v32 > 768 /*0x4cf248*/
      || (LOWORD(v58) = 0x2000,
          LOWORD(v57) = v28 - *(_WORD *)ProgressTimer::GetValue((_WORD *)*v6 + 452, &v60),
          (unsigned __int8)UnitClass::CompareCoordinateMagnitude(&v57)) )
    {
LABEL_32:
      v63[2] = a6; /*0x4cf259*/
      int * v33 = *v6; /*0x4cf25d*/
      v63[0] = v24; /*0x4cf260*/
      v63[1] = v25; /*0x4cf264*/
      int * v34 = (int *)(*(int (__thiscall **)(int *, _DWORD *))(*v33 + 72))(v33, v64); /*0x4cf26f*/
      Height = (float *)Cell::GetHeight(&v60, v34, v63); /*0x4cf277*/
      char * v36 = (char *)(*v6 + 226); /*0x4cf285*/
      v58 = *Height; /*0x4cf28b*/
      FacingClass::Update(v36, &v58); /*0x4cf28f*/
    }
    v23 = (int)v56; /*0x4cf294*/
  }
  if ( v23 >= 256 || !a3 || *(_BYTE *)((*(int (__thiscall **)(int *))(**v6 + 132))(*v6) + 3367) ) /*0x4cf2bc*/
  {
    if ( !v55 || !(*(int (__stdcall **)(int))(*(_DWORD *)v55 + 32))(v55) ) /*0x4cf363*/
    {
      int v38 = (*(int (__thiscall **)(int *, _DWORD *))(**v6 + 72))(*v6, v64); /*0x4cf373*/
      v58 = *(float *)v38; /*0x4cf37f*/
      double v39 = Math::CalcAngle((double)*(int *)(v38 + 4) - (double)a5, (double)SLODWORD(a4) - (double)SLODWORD(v58)); /*0x4cf398*/
      LOWORD(a4) = Math::RoundToInt((v39 - 1.570796326794897) * -10430.06004058427); /*0x4cf3b1*/
      v57 = a4; /*0x4cf3ba*/
      v37 = (int *)&v57; /*0x4cf3be*/
      goto LABEL_51; /*0x4cf3be*/
    }
  }
  else
  {
    if ( !(*v6)[173] || !(*v6)[191] ) /*0x4cf2d4*/
      goto LABEL_44; /*0x4cf2d4*/
    if ( !v55 ) /*0x4cf2e2*/
    {
LABEL_43:
      v37 = ObjectClass::CalcTargetFacing(*v6, (int *)&a4, (*v6)[173]); /*0x4cf304*/
LABEL_51:
      FacingClass::Update((char *)*v6 + 928, v37); /*0x4cf3c2*/
      goto LABEL_52; /*0x4cf3cb*/
    }
    if ( !(*(int (__stdcall **)(int))(*(_DWORD *)v55 + 24))(v55) ) /*0x4cf2e7*/
    {
      if ( !v55 || !(*(int (__stdcall **)(int))(*(_DWORD *)v55 + 32))(v55) ) /*0x4cf2f9*/
        goto LABEL_43; /*0x4cf2fe*/
    }
    else
    {
LABEL_44:
      LOWORD(a4) = 0; /*0x4cf320*/
      if ( !v55 /*0x4cf34a*/
        || (LOWORD(a4) = (*(unsigned __int16 (__stdcall **)(int))(*(_DWORD *)v55 + 16))(v55) << 13, !v55)
        || !(*(int (__stdcall **)(int))(*(_DWORD *)v55 + 32))(v55) )
      {
        FacingClass::Update((char *)*v6 + 928, &a4); /*0x4cf356*/
      }
    }
  }
LABEL_52:
  v40 = v59; /*0x4cf3d0*/
  if ( !*(_BYTE *)(v59 + 92) || v23 >= 768 ) /*0x4cf3e1*/
  {
  int v44; // eax
    int v41 = (*(int (__thiscall **)(int *))(**v6 + 132))(*v6); /*0x4cf402*/
    int * v42 = *v6; /*0x4cf410*/
    if ( *(_BYTE *)(v41 + 3221) ) /*0x4cf408*/
    {
      bool v43 = v23 < *(_DWORD *)((*(int (__thiscall **)(int *))(*v42 + 132))(v42) + 760); /*0x4cf426*/
      v44 = **v6; /*0x4cf42a*/
      if ( v43 ) /*0x4cf42c*/
      {
        int v45 = (*(int (**)(void))(v44 + 132))(); /*0x4cf432*/
        int * v46 = *v6; /*0x4cf443*/
        int v47 = **v6; /*0x4cf445*/
        a4 = (float)(v23 / *(_DWORD *)(v45 + 760)); /*0x4cf44f*/
        int * v48 = (int *)(*(int (__thiscall **)(int *))(v47 + 132))(v46); /*0x4cf45b*/
        int v49 = (*(int (__thiscall **)(int *))(**v6 + 132))(*v6); /*0x4cf45f*/
        v59 = (*(int (__thiscall **)(int))(*(_DWORD *)v49 + 188))(v49) / 3; /*0x4cf481*/
        int v50 = *v48; /*0x4cf485*/
        v58 = (double)v59 * (1.0 - a4); /*0x4cf497*/
        v59 = (*(int (__thiscall **)(int *))(v50 + 188))(v48); /*0x4cf4a1*/
        *(_DWORD *)(v40 + 56) = Math::RoundToInt((double)v59 * a4 + v58); /*0x4cf4b6*/
        goto LABEL_60; /*0x4cf4bb*/
      }
    }
    else
    {
      v44 = *v42; /*0x4cf4bd*/
    }
    int v51 = (*(int (**)(void))(v44 + 132))(); /*0x4cf4bf*/
    *(_DWORD *)(v40 + 56) = (*(int (__thiscall **)(int))(*(_DWORD *)v51 + 188))(v51); /*0x4cf4cf*/
    goto LABEL_60; /*0x4cf4cf*/
  }
  *(_DWORD *)(v40 + 56) = *(_DWORD *)(v40 + 36) - Cell::GetGroundHeight((_DWORD *)(v59 + 28)); /*0x4cf3f6*/
LABEL_60:
  if ( !*(_BYTE *)((*(int (__thiscall **)(int *))(**v6 + 132))(*v6) + 3367) /*0x4cf4e8*/
    && (unsigned __int8)DamageArea::CheckOccupancyEligibility(v40) )
  {
    if ( v23 >= 128 ) /*0x4cf4f7*/
    {
      if ( v23 >= 512 ) /*0x4cf52d*/
      {
        if ( v23 < 768 && a3 ) /*0x4cf551*/
        {
          *(_DWORD *)(v40 + 64) = 0; /*0x4cf553*/
          *(_DWORD *)(v40 + 68) = 1072168960; /*0x4cf556*/
        }
      }
      else if ( a3 ) /*0x4cf535*/
      {
        *(_DWORD *)(v40 + 64) = 0; /*0x4cf537*/
        *(_DWORD *)(v40 + 68) = 1071644672; /*0x4cf53a*/
      }
    }
    else
    {
      if ( a3 ) /*0x4cf4ff*/
      {
        *(_DWORD *)(v40 + 64) = 0; /*0x4cf501*/
        *(_DWORD *)(v40 + 68) = 0; /*0x4cf504*/
      }
      if ( !*(_BYTE *)(v40 + 92) && *(double *)(v40 + 72) < 0.05 ) /*0x4cf51c*/
        LocomotionClass::CheckBridgeBlock(v40); /*0x4cf520*/
    }
  }
  if ( *((_BYTE *)*v6 + 131) ) /*0x4cf55f*/
  {
    if ( !(unsigned __int8)House::IsHumanPlayer((#375 *)(*v6)[135]) ) /*0x4cf573*/
    {
      int v52 = (int)(*v6 + 39); /*0x4cf57e*/
      a4 = *(float *)v52; /*0x4cf586*/
      a5 = *(_DWORD *)(v52 + 4); /*0x4cf592*/
      a6 = *(_DWORD *)(v52 + 8); /*0x4cf599*/
      if ( Cell::IsPassable(&a4) /*0x4cf5dd*/
        || (*(_DWORD *)g_ScenarioClass_Instance & 0x1000) != 0
  int v53; // ecx
        && (v53 = (int)(*v6 + 39),
            a4 = *(float *)v53,
            a5 = *(_DWORD *)(v53 + 4),
            a6 = *(_DWORD *)(v53 + 8),
            Game::Stub3((int)&a4)) )
      {
        (*(void (__thiscall **)(int *))(**v6 + 336))(*v6); /*0x4cf5ec*/
      }
    }
  }
  if ( v55 ) /*0x4cf5f8*/
    (*(void (__stdcall **)(int))(*(_DWORD *)v55 + 8))(v55); /*0x4cf5fd*/
  return v23; /*0x4cf600*/
}
} // namespace gamemd

// 0x4C1B80
namespace gamemd {
void sub_4C1B80()
{
{
    long double v0;
    v0 = pow(256.0, 2.0);
    DataGlobal_8A0E38 = Math::Sqrt(v0 + v0);
}
}
} // namespace gamemd

// 0x4C1BB0
namespace gamemd {
void sub_4C1BB0()
{
{
    DataGlobal_8A0EA8 = DataGlobal_8A0E38 / 60.0;
}
}
} // namespace gamemd

// 0x4C1BD0
namespace gamemd {
void sub_4C1BD0()
{
{
    DataGlobal_8A0E70 = 1.0 / DataGlobal_8A0EA8;
}
}
} // namespace gamemd

// 0x4C1BF0
namespace gamemd {
void sub_4C1BF0()
{
{
    DataGlobal_8A0E68 = 0.0174532925199433 * 45.0;
}
}
} // namespace gamemd

// 0x4C1C10
namespace gamemd {
void sub_4C1C10()
{
{
    DataGlobal_8A0E40 = 0.0174532925199433 * 60.0;
}
}
} // namespace gamemd

// 0x4C1C30
namespace gamemd {
void sub_4C1C30()
{
{
    DataGlobal_8A0E18 = 0.0174532925199433 * 90.0;
}
}
} // namespace gamemd

// 0x4C1C50
namespace gamemd {
long long sub_4C1C50()
{
{
    double v0;
    __int64 result;
    v0 = Math::Sin(DataGlobal_8A0E18 - DataGlobal_8A0E40);
    result = Math::RoundToInt(v0 * DataGlobal_8A0E38 * 0.5);
    DataGlobal_8A0EB0 = result;
    return result;
}
}
} // namespace gamemd

// 0x4C1C90
namespace gamemd {
void sub_4C1C90()
{
{
    DataGlobal_8A0E48 = Math::ArcTan((double)DataGlobal_8A0EB0 * 0.00390625);
}
}
} // namespace gamemd

// 0x4C1CC0
namespace gamemd {
void sub_4C1CC0()
{
{
    DataGlobal_8A0E60 = Math::ArcTan((double)(2 * DataGlobal_8A0EB0) / DataGlobal_8A0E38);
}
}
} // namespace gamemd

// 0x4C1CF0
namespace gamemd {
long long sub_4C1CF0()
{
{
    __int64 result;
    result = Math::RoundToInt((double)(4 * DataGlobal_8A0EB0) + 0.5);
    DataGlobal_8A0EA0 = result;
    return result;
}
}
} // namespace gamemd

// 0x4C1D20
namespace gamemd {
int sub_4C1D20()
{
{
    DataGlobal_8A0E30 = 0;
    DataGlobal_8A0E32 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x4C1D30
namespace gamemd {
int sub_4C1D30()
{
{
    DataGlobal_8A0E50 = 0;
    DataGlobal_8A0E54 = 0;
    DataGlobal_8A0E58 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x4C1D50
namespace gamemd {
int sub_4C1D50()
{
{
    DataGlobal_8A0E80 = 0;
    DataGlobal_8A0E78 = 128;
    DataGlobal_8A0E7C = 128;
    return 128;
}
}
} // namespace gamemd

// 0x4C1D70
namespace gamemd {
int sub_4C1D70()
{
{
    DataGlobal_8A0E20 = 0;
    DataGlobal_8A0E24 = 0;
    DataGlobal_8A0E28 = 0;
    DataGlobal_8A0E2C = 0;
    return 0;
}
}
} // namespace gamemd

// 0x4C1D90
namespace gamemd {
int sub_4C1D90()
{
{
    DataGlobal_8A0E8C = 0;
    DataGlobal_8A0E90 = 0;
    DataGlobal_8A0E94 = 1;
    DataGlobal_8A0E95 = 0;
    DataGlobal_8A0E88 = (int)&vt_DynamicVectorClass_EBolt;
    DataGlobal_8A0E9C = 10;
    DataGlobal_8A0E98 = 0;
    return atexit(sub_4C1DD0);
}
}
} // namespace gamemd

// 0x4C1DD0
namespace gamemd {
void sub_4C1DD0()
{
{
    DataGlobal_8A0E88 = (int)&vt_VectorClass_EBolt;
    if ( DataGlobal_8A0E8C && DataGlobal_8A0E95 )
  {
    __3_YAXPAX_Z(DataGlobal_8A0E8C);
    DataGlobal_8A0E8C = 0;
  }
    DataGlobal_8A0E95 = 0;
    DataGlobal_8A0E90 = 0;
}
}
} // namespace gamemd

// 0x4C2B40
namespace gamemd {
unsigned int * E4Recv_4C2B40::sub_4C2B40(unsigned int * a2)
{
{
    int v2;
    int *v3;
    char v5[12];
    v2 = this->M32;
    if ( v2 )
  {
    v3 = (int *)(*(int (__thiscall **)(int, char *, int, int, int, int))(*(int *)(v2) + 176))( v2, v5, this->M36, 0, 0, 0);
    *a2 = *v3;
    *((int*)(a2) + 1) = v3[1];
    *((int*)(a2) + 2) = v3[2];
    return a2;
  }
    else
  {
    *a2 = DataGlobal_8A0E50;
    *((int*)(a2) + 1) = DataGlobal_8A0E54;
    *((int*)(a2) + 2) = DataGlobal_8A0E58;
    return a2;
  }
}
}
} // namespace gamemd

// 0x4C2C30
namespace gamemd {
Iostream_init * E4Recv_4C2C30::__0Iostream_init_QAE_XZ_3()
{
{
    return this;
}
}
} // namespace gamemd

// 0x4C2FA0
namespace gamemd {
int sub_4C2FA0()
{
{
    DataGlobal_8A0EB8 = 0;
    DataGlobal_8A0EBC = 0;
    DataGlobal_8A0EC0 = 0;
    DataGlobal_8A0EC4 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x4C2FC0
namespace gamemd {
int * E4Recv_4C2FC0::sub_4C2FC0(DropListClass * aP1, ControlClass * aP2, int a4, DropListClass * aP4, ControlClass * aP5, ControlClass * aP6, ControlClass * aP7, int a9, int a10)
{
{
    DropListClass *v11;
    AbstractClass *Instance;
    int v13;
    ControlClass::Construct(this, (ControlClass *)aP1, aP5, aP6, aP7, (ControlClass *)a9, 1, 0);
    v11 = aP4;
    BYTE1(v11) = BYTE1(aP4) & 0xFE;
    this->M44 = (int)v11;
    *(void**)this = (int)&vt_EditClass;
    this->M48 = a10;
    this->M52 = (int)aP2;
    this->M56 = a4 - 1;
    this->M60 = wcslen((const wchar_t *)aP2);
    this->Vf72();
    this->M64 = BuildingAnim::GetType();
    if ( aP7 == (ControlClass *)-1 || a9 == -1 )
  {
    Instance = TextRenderer::GetInstance();
    if ( a9 == -1 )
    this->M24 = Instance->referenceCount + 1;
    if ( aP7 == (ControlClass *)-1 )
    {
    if ( wcslen((const wchar_t *)this->M52) )
      {
    v13 = Text::MeasureWidth(this->M52, 0);
    this->M68 = 0;
    this->M20 = v13 + 6;
    return this;
      }
    this->M20 = (this->M56 + 1) * Text::MeasureWidth((int)DataGlobal_820768, 0) + 2;
    }
  }
    this->M68 = 0;
    return this;
}
}
} // namespace gamemd

// 0x4C35A0
namespace gamemd {
void sub_4C35A0()
{
{
    long double v0;
    v0 = pow(256.0, 2.0);
    DataGlobal_8A0EE8 = Math::Sqrt(v0 + v0);
}
}
} // namespace gamemd

// 0x4C35D0
namespace gamemd {
void sub_4C35D0()
{
{
    DataGlobal_8A0F38 = DataGlobal_8A0EE8 / 60.0;
}
}
} // namespace gamemd

// 0x4C35F0
namespace gamemd {
void sub_4C35F0()
{
{
    DataGlobal_8A0F20 = 1.0 / DataGlobal_8A0F38;
}
}
} // namespace gamemd

// 0x4C3610
namespace gamemd {
void sub_4C3610()
{
{
    DataGlobal_8A0F18 = 0.0174532925199433 * 45.0;
}
}
} // namespace gamemd

// 0x4C3630
namespace gamemd {
void sub_4C3630()
{
{
    DataGlobal_8A0EF0 = 0.0174532925199433 * 60.0;
}
}
} // namespace gamemd

// 0x4C3650
namespace gamemd {
void sub_4C3650()
{
{
    DataGlobal_8A0EC8 = 0.0174532925199433 * 90.0;
}
}
} // namespace gamemd

// 0x4C3670
namespace gamemd {
long long sub_4C3670()
{
{
    double v0;
    __int64 result;
    v0 = Math::Sin(DataGlobal_8A0EC8 - DataGlobal_8A0EF0);
    result = Math::RoundToInt(v0 * DataGlobal_8A0EE8 * 0.5);
    DataGlobal_8A0F40 = result;
    return result;
}
}
} // namespace gamemd

// 0x4C36B0
namespace gamemd {
void sub_4C36B0()
{
{
    DataGlobal_8A0EF8 = Math::ArcTan((double)DataGlobal_8A0F40 * 0.00390625);
}
}
} // namespace gamemd

// 0x4C36E0
namespace gamemd {
void sub_4C36E0()
{
{
    DataGlobal_8A0F10 = Math::ArcTan((double)(2 * DataGlobal_8A0F40) / DataGlobal_8A0EE8);
}
}
} // namespace gamemd

// 0x4C3710
namespace gamemd {
long long sub_4C3710()
{
{
    __int64 result;
    result = Math::RoundToInt((double)(4 * DataGlobal_8A0F40) + 0.5);
    DataGlobal_8A0F34 = result;
    return result;
}
}
} // namespace gamemd

// 0x4C3740
namespace gamemd {
int sub_4C3740()
{
{
    DataGlobal_8A0EE0 = 0;
    DataGlobal_8A0EE2 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x4C3750
namespace gamemd {
int sub_4C3750()
{
{
    DataGlobal_8A0F00 = 0;
    DataGlobal_8A0F04 = 0;
    DataGlobal_8A0F08 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x4C3770
namespace gamemd {
int sub_4C3770()
{
{
    DataGlobal_8A0F30 = 0;
    DataGlobal_8A0F28 = 128;
    DataGlobal_8A0F2C = 128;
    return 128;
}
}
} // namespace gamemd

// 0x4C3790
namespace gamemd {
int sub_4C3790()
{
{
    DataGlobal_8A0ED0 = 0;
    DataGlobal_8A0ED4 = 0;
    DataGlobal_8A0ED8 = 0;
    DataGlobal_8A0EDC = 0;
    return 0;
}
}
} // namespace gamemd

// 0x4C37B0
namespace gamemd {
int sub_4C37B0()
{
{
    DataGlobal_8A0F48 = 0;
    DataGlobal_8A0F4C = 0;
    DataGlobal_8A0F50 = 0;
    DataGlobal_8A0F54 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x4C37D0
namespace gamemd {
unsigned char * sub_4C37D0(int a1, unsigned char * a2, int a3, unsigned char a4)
{
{
    int v5;
    int v6;
    int v7;
    int v8;
    int i;
    int v10;
    char *v12;
    short v13;
    char v14;
    int v15;
    char *v16;
    v16 = a2;
    if ( !a2 )
    return 0;
    v5 = 0;
    v12 = a2;
    v15 = 0;
    do
  {
    if ( v5 <= 240 && v5 )
    {
    v6 = a1 + 2 * (v5 % 256) + v5 % 256;
    v13 = *(short *)v6;
    v14 = *(char *)(v6 + 2);
    Color::Lerp((unsigned char *)&v13, a4, (unsigned char *)(a1 + 2 * (a3 % 256) + a3 % 256));
    v7 = -1;
    v8 = 0;
    for ( i = 240; i < 255; ++i )
      {
    v10 = Palette::CalcColorDistance((unsigned char *)(a1 + 2 * (i % 256) + i % 256), (unsigned char *)&v13);
    if ( v7 == -1 || v10 < v8 )
        {
    v7 = i;
    v8 = v10;
        }
      }
    a2 = v16;
    *v12++ = v7;
    v5 = v15;
    }
    else
    {
    *v12++ = v5;
    }
    v15 = ++v5;
  }
    while ( v5 < 256 );
    return a2;
}
}
} // namespace gamemd

// 0x4C38D0
namespace gamemd {
int E4Recv_4C38D0::sub_4C38D0()
{
{
    return ((int)this + 1) << 8;
}
}
} // namespace gamemd

// 0x4C3A20
namespace gamemd {
char * sub_4C3A20(int a1, int a2, int a3, char * a4)
{
{
    char *v4;
    int v5;
    char *v6;
    unsigned char *v7;
    if ( !a3 || !a2 )
    return a4;
    v4 = a4;
    if ( a4 || (v4 = (char *)__2_YAPAXI_Z((a3 + 1) << 8)) != 0 )
  {
    v5 = 0;
    memset(v4, 0xFFu, 0x100u);
    v6 = v4 + 256;
    if ( a3 > 0 )
    {
    v7 = (unsigned char *)(a2 + 1);
    do
      {
    v4[*(v7 - 1)] = v5;
    sub_4C37D0(a1, v6, *v7, v7[1]);
    v6 += 256;
    ++v5;
    v7 += 4;
      }
    while ( v5 < a3 );
    }
  }
    return v4;
}
}
} // namespace gamemd

// 0x4C3AD0
namespace gamemd {
int sub_4C3AD0(char * a1, int a2, int a3, unsigned char a4)
{
{
    int v6;
    unsigned char *v7;
    int v8;
    if ( !a2 )
    return 0;
    v6 = 0;
    v7 = (unsigned char *)&a1[2 * (a3 % 256) + a3 % 256];
    do
  {
    v8 = (int)&a1[2 * (v6 % 256) + v6 % 256];
    LOWORD(a3) = *(short *)v8;
    BYTE2(a3) = *(char *)(v8 + 2);
    Color::Lerp((unsigned char *)&a3, a4, v7);
    *(char *)(v6 + a2) = Palette::FindClosestColor(a1, (int)&a3);
    ++v6;
  }
    while ( v6 < 256 );
    return a2;
}
}
} // namespace gamemd

// 0x4C3B60
namespace gamemd {
unsigned char * sub_4C3B60(char * a1, unsigned char * a2, int a3, int a4)
{
{
    unsigned char v6;
    int v7;
    int v8;
    int v9;
    v6 = a4;
    v7 = (int)&a1[2 * (a3 % 256) + a3 % 256];
    v8 = 1;
    LOWORD(a3) = *(short *)v7;
    LOBYTE(v7) = *(char *)(v7 + 2);
    *a2 = 0;
    BYTE2(a3) = v7;
    do
  {
    v9 = (int)&a1[2 * (v8 % 256) + v8 % 256];
    LOWORD(a4) = *(short *)v9;
    BYTE2(a4) = *(char *)(v9 + 2);
    Color::Lerp((unsigned char *)&a4, v6, (unsigned char *)&a3);
    a2[v8++] = Palette::FindClosestColor(a1, (int)&a4);
  }
    while ( v8 < 256 );
    return a2;
}
}
} // namespace gamemd

// 0x4C3BF0
namespace gamemd {
int sub_4C3BF0()
{
{
    DataGlobal_8A3760 = 0;
    DataGlobal_8A3764 = 0;
    DataGlobal_8A3768 = 0;
    DataGlobal_8A376C = 0;
    return 0;
}
}
} // namespace gamemd

// 0x4C3C10
namespace gamemd {
int sub_4C3C10()
{
{
    DataGlobal_8A3774 = 0;
    DataGlobal_8A3778 = 0;
    DataGlobal_8A377C = 1;
    DataGlobal_8A377D = 0;
    DataGlobal_8A3770 = (int)&vt_DynamicVectorClass_EgoClass;
    DataGlobal_8A3784 = 10;
    DataGlobal_8A3780 = 0;
    return atexit(sub_4C3C50);
}
}
} // namespace gamemd

// 0x4C3C50
namespace gamemd {
void sub_4C3C50()
{
{
    DataGlobal_8A3770 = (int)&vt_VectorClass_EgoClass;
    if ( DataGlobal_8A3774 && DataGlobal_8A377D )
  {
    __3_YAXPAX_Z(DataGlobal_8A3774);
    DataGlobal_8A3774 = 0;
  }
    DataGlobal_8A377D = 0;
    DataGlobal_8A3778 = 0;
}
}
} // namespace gamemd

// 0x4C3C90
namespace gamemd {
wchar_t ** E4Recv_4C3C90::sub_4C3C90(wchar_t * a2, wchar_t * a3, wchar_t * String, wchar_t * a5)
{
{
    size_t v6;
    wchar_t *v7;
    this->M4 = a2;
    this->M8 = a3;
    this->M12 = a5;
    v6 = wcslen(String);
    v7 = (wchar_t *)__2_YAPAXI_Z(2 * v6 + 2);
    *(void**)this = v7;
    wcscpy(v7, String);
    return this;
}
}
} // namespace gamemd

// 0x4C4D00
namespace gamemd {
void sub_4C4D00()
{
{
    long double v0;
    v0 = pow(256.0, 2.0);
    DataGlobal_8A3798 = Math::Sqrt(v0 + v0);
}
}
} // namespace gamemd

// 0x4C4D30
namespace gamemd {
void sub_4C4D30()
{
{
    DataGlobal_8A3808 = DataGlobal_8A3798 / 60.0;
}
}
} // namespace gamemd

// 0x4C4D50
namespace gamemd {
void sub_4C4D50()
{
{
    DataGlobal_8A37F0 = 1.0 / DataGlobal_8A3808;
}
}
} // namespace gamemd

// 0x4C4D70
namespace gamemd {
void sub_4C4D70()
{
{
    DataGlobal_8A37E8 = 0.0174532925199433 * 45.0;
}
}
} // namespace gamemd

// 0x4C4D90
namespace gamemd {
void sub_4C4D90()
{
{
    DataGlobal_8A37C0 = 0.0174532925199433 * 60.0;
}
}
} // namespace gamemd

// 0x4C4DB0
namespace gamemd {
void sub_4C4DB0()
{
{
    DataGlobal_8A3788 = 0.0174532925199433 * 90.0;
}
}
} // namespace gamemd

// 0x4C4DD0
namespace gamemd {
long long sub_4C4DD0()
{
{
    double v0;
    __int64 result;
    v0 = Math::Sin(DataGlobal_8A3788 - DataGlobal_8A37C0);
    result = Math::RoundToInt(v0 * DataGlobal_8A3798 * 0.5);
    DataGlobal_8A3810 = result;
    return result;
}
}
} // namespace gamemd

// 0x4C4E10
namespace gamemd {
void sub_4C4E10()
{
{
    DataGlobal_8A37C8 = Math::ArcTan((double)DataGlobal_8A3810 * 0.00390625);
}
}
} // namespace gamemd

// 0x4C4E40
namespace gamemd {
void sub_4C4E40()
{
{
    DataGlobal_8A37E0 = Math::ArcTan((double)(2 * DataGlobal_8A3810) / DataGlobal_8A3798);
}
}
} // namespace gamemd

// 0x4C4E70
namespace gamemd {
long long sub_4C4E70()
{
{
    __int64 result;
    result = Math::RoundToInt((double)(4 * DataGlobal_8A3810) + 0.5);
    DataGlobal_8A3804 = result;
    return result;
}
}
} // namespace gamemd

// 0x4C4EA0
namespace gamemd {
int sub_4C4EA0()
{
{
    DataGlobal_8A3790 = 0;
    DataGlobal_8A3792 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x4C4EB0
namespace gamemd {
int sub_4C4EB0()
{
{
    DataGlobal_8A37D0 = 0;
    DataGlobal_8A37D4 = 0;
    DataGlobal_8A37D8 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x4C4ED0
namespace gamemd {
int sub_4C4ED0()
{
{
    DataGlobal_8A3800 = 0;
    DataGlobal_8A37F8 = 128;
    DataGlobal_8A37FC = 128;
    return 128;
}
}
} // namespace gamemd

// 0x4C4FC0
namespace gamemd {
int E4Recv_4C4FC0::sub_4C4FC0(int a2)
{
{
    int result;
    int v4;
    int v5;
    int v6;
    result = Power::TimerProcess(*(void**)this);
    v4 = this->M4;
    if ( v4 )
  {
    v5 = (*(int (__thiscall **)(int))(*(int *)(v4) + 44))(v4);
    Power::TimerProcess(v5);
    v6 = (*(int (__stdcall **)(int))(*(int *)(this->M4 + 4) + 16))(this->M4 + 4);
    return Power::TimerProcess(v6);
  }
    return result;
}
}
} // namespace gamemd

// 0x4C5000
namespace gamemd {
void sub_4C5000()
{
{
    long double v0;
    v0 = pow(256.0, 2.0);
    DataGlobal_8A3840 = Math::Sqrt(v0 + v0);
}
}
} // namespace gamemd

// 0x4C5030
namespace gamemd {
void sub_4C5030()
{
{
    DataGlobal_8A38A8 = DataGlobal_8A3840 / 60.0;
}
}
} // namespace gamemd

// 0x4C5050
namespace gamemd {
void sub_4C5050()
{
{
    DataGlobal_8A3890 = 1.0 / DataGlobal_8A38A8;
}
}
} // namespace gamemd

// 0x4C5070
namespace gamemd {
void sub_4C5070()
{
{
    DataGlobal_8A3888 = 0.0174532925199433 * 45.0;
}
}
} // namespace gamemd

// 0x4C5090
namespace gamemd {
void sub_4C5090()
{
{
    DataGlobal_8A3848 = 0.0174532925199433 * 60.0;
}
}
} // namespace gamemd

// 0x4C50B0
namespace gamemd {
void sub_4C50B0()
{
{
    DataGlobal_8A3820 = 0.0174532925199433 * 90.0;
}
}
} // namespace gamemd

// 0x4C50D0
namespace gamemd {
long long sub_4C50D0()
{
{
    double v0;
    __int64 result;
    v0 = Math::Sin(DataGlobal_8A3820 - DataGlobal_8A3848);
    result = Math::RoundToInt(v0 * DataGlobal_8A3840 * 0.5);
    DataGlobal_8A38B0 = result;
    return result;
}
}
} // namespace gamemd

// 0x4C5110
namespace gamemd {
void sub_4C5110()
{
{
    DataGlobal_8A3850 = Math::ArcTan((double)DataGlobal_8A38B0 * 0.00390625);
}
}
} // namespace gamemd

// 0x4C5140
namespace gamemd {
void sub_4C5140()
{
{
    DataGlobal_8A3868 = Math::ArcTan((double)(2 * DataGlobal_8A38B0) / DataGlobal_8A3840);
}
}
} // namespace gamemd

// 0x4C5170
namespace gamemd {
long long sub_4C5170()
{
{
    __int64 result;
    result = Math::RoundToInt((double)(4 * DataGlobal_8A38B0) + 0.5);
    DataGlobal_8A38A4 = result;
    return result;
}
}
} // namespace gamemd

// 0x4C51A0
namespace gamemd {
int sub_4C51A0()
{
{
    DataGlobal_8A3838 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x4C51B0
namespace gamemd {
int sub_4C51B0()
{
{
    DataGlobal_8A3858 = 0;
    DataGlobal_8A385C = 0;
    DataGlobal_8A3860 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x4C51D0
namespace gamemd {
int sub_4C51D0()
{
{
    DataGlobal_8A38A0 = 0;
    DataGlobal_8A3898 = 128;
    DataGlobal_8A389C = 128;
    return 128;
}
}
} // namespace gamemd

// 0x4C51F0
namespace gamemd {
int sub_4C51F0()
{
{
    DataGlobal_8A3828 = 0;
    DataGlobal_8A382C = 0;
    DataGlobal_8A3830 = 0;
    DataGlobal_8A3834 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x4C5210
namespace gamemd {
int sub_4C5210()
{
{
    DataGlobal_8A3874 = 0;
    DataGlobal_8A3878 = 0;
    DataGlobal_8A387C = 1;
    DataGlobal_8A387D = 0;
    DataGlobal_8A3870 = (int)&vt_DynamicVectorClass_EMPulseClass;
    DataGlobal_8A3884 = 10;
    DataGlobal_8A3880 = 0;
    return atexit(sub_4C5250);
}
}
} // namespace gamemd

// 0x4C5250
namespace gamemd {
void sub_4C5250()
{
{
    if ( (DataGlobal_8A3818 & 1) == 0 )
  {
    DataGlobal_8A3870 = (int)&vt_VectorClass_EMPulseClass;
    DataGlobal_8A3818 |= 1u;
    if ( DataGlobal_8A3874 )
    {
    if ( DataGlobal_8A387D )
      {
    __3_YAXPAX_Z(DataGlobal_8A3874);
    DataGlobal_8A3874 = 0;
      }
    }
    DataGlobal_8A387D = 0;
    DataGlobal_8A3878 = 0;
  }
}
}
} // namespace gamemd

// 0x4C5470
namespace gamemd {
int sub_4C5470()
{
{
    int result;
    for ( result = DataGlobal_8A3880; DataGlobal_8A3880; result = DataGlobal_8A3880 )
  {
    if ( *(int *)DataGlobal_8A3874 )
    (*(void (__thiscall **)(int, int))(**(int **)DataGlobal_8A3874 + 32))(*(int *)DataGlobal_8A3874, 1);
  }
    return result;
}
}
} // namespace gamemd

// 0x4C5EC0
namespace gamemd {
void nullsub_127()
{
  ;
}
} // namespace gamemd

// 0x4C5ED0
namespace gamemd {
void nullsub_128()
{
  ;
}
} // namespace gamemd

// 0x4C5EE0
namespace gamemd {
void sub_4C5EE0()
{
{
    long double v0;
    v0 = pow(256.0, 2.0);
    DataGlobal_8A38D8 = Math::Sqrt(v0 + v0);
}
}
} // namespace gamemd

// 0x4C5F10
namespace gamemd {
void sub_4C5F10()
{
{
    DataGlobal_8A3970 = DataGlobal_8A38D8 / 60.0;
}
}
} // namespace gamemd

// 0x4C5F30
namespace gamemd {
void sub_4C5F30()
{
{
    DataGlobal_8A3958 = 1.0 / DataGlobal_8A3970;
}
}
} // namespace gamemd

// 0x4C5F50
namespace gamemd {
void sub_4C5F50()
{
{
    DataGlobal_8A3950 = 0.0174532925199433 * 45.0;
}
}
} // namespace gamemd

// 0x4C5F70
namespace gamemd {
void sub_4C5F70()
{
{
    DataGlobal_8A3928 = 0.0174532925199433 * 60.0;
}
}
} // namespace gamemd

// 0x4C5F90
namespace gamemd {
void sub_4C5F90()
{
{
    DataGlobal_8A38B8 = 0.0174532925199433 * 90.0;
}
}
} // namespace gamemd

// 0x4C5FB0
namespace gamemd {
long long sub_4C5FB0()
{
{
    double v0;
    __int64 result;
    v0 = Math::Sin(DataGlobal_8A38B8 - DataGlobal_8A3928);
    result = Math::RoundToInt(v0 * DataGlobal_8A38D8 * 0.5);
    DataGlobal_8A3978 = result;
    return result;
}
}
} // namespace gamemd

// 0x4C5FF0
namespace gamemd {
void sub_4C5FF0()
{
{
    DataGlobal_8A3930 = Math::ArcTan((double)DataGlobal_8A3978 * 0.00390625);
}
}
} // namespace gamemd

// 0x4C6020
namespace gamemd {
void sub_4C6020()
{
{
    DataGlobal_8A3948 = Math::ArcTan((double)(2 * DataGlobal_8A3978) / DataGlobal_8A38D8);
}
}
} // namespace gamemd

// 0x4C6050
namespace gamemd {
long long sub_4C6050()
{
{
    __int64 result;
    result = Math::RoundToInt((double)(4 * DataGlobal_8A3978) + 0.5);
    DataGlobal_8A396C = result;
    return result;
}
}
} // namespace gamemd

// 0x4C6080
namespace gamemd {
int sub_4C6080()
{
{
    DataGlobal_8A38D0 = 0;
    DataGlobal_8A38D2 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x4C6090
namespace gamemd {
int sub_4C6090()
{
{
    DataGlobal_8A3938 = 0;
    DataGlobal_8A393C = 0;
    DataGlobal_8A3940 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x4C60B0
namespace gamemd {
int sub_4C60B0()
{
{
    DataGlobal_8A3968 = 0;
    DataGlobal_8A3960 = 128;
    DataGlobal_8A3964 = 128;
    return 128;
}
}
} // namespace gamemd

// 0x4C60D0
namespace gamemd {
int sub_4C60D0()
{
{
    DataGlobal_8A38C0 = 0;
    DataGlobal_8A38C4 = 0;
    DataGlobal_8A38C8 = 0;
    DataGlobal_8A38CC = 0;
    return 0;
}
}
} // namespace gamemd

// 0x4C60F0
namespace gamemd {
int sub_4C60F0()
{
{
    DataGlobal_8A3914 = 0;
    DataGlobal_8A3918 = 0;
    DataGlobal_8A391C = 1;
    DataGlobal_8A3920 = 0;
    memset(&DataGlobal_8A38E0, 0, 0x30u);
    DataGlobal_8A3910 = 0;
    return atexit(nullsub_129);
}
}
} // namespace gamemd

// 0x4C6130
namespace gamemd {
void nullsub_129()
{
  ;
}
} // namespace gamemd

// 0x4C6170
namespace gamemd {
void nullsub_130()
{
  ;
}
} // namespace gamemd

// 0x4C6360
namespace gamemd {
void sub_4C6360()
{
{
    long double v0;
    v0 = pow(256.0, 2.0);
    DataGlobal_8A39A0 = Math::Sqrt(v0 + v0);
}
}
} // namespace gamemd

// 0x4C6390
namespace gamemd {
void sub_4C6390()
{
{
    DataGlobal_8A39F0 = DataGlobal_8A39A0 / 60.0;
}
}
} // namespace gamemd

// 0x4C63B0
namespace gamemd {
void sub_4C63B0()
{
{
    DataGlobal_8A39D8 = 1.0 / DataGlobal_8A39F0;
}
}
} // namespace gamemd

// 0x4C63D0
namespace gamemd {
void sub_4C63D0()
{
{
    DataGlobal_8A39D0 = 0.0174532925199433 * 45.0;
}
}
} // namespace gamemd

// 0x4C63F0
namespace gamemd {
void sub_4C63F0()
{
{
    DataGlobal_8A39A8 = 0.0174532925199433 * 60.0;
}
}
} // namespace gamemd

// 0x4C6410
namespace gamemd {
void sub_4C6410()
{
{
    DataGlobal_8A3980 = 0.0174532925199433 * 90.0;
}
}
} // namespace gamemd

// 0x4C6430
namespace gamemd {
long long sub_4C6430()
{
{
    double v0;
    __int64 result;
    v0 = Math::Sin(DataGlobal_8A3980 - DataGlobal_8A39A8);
    result = Math::RoundToInt(v0 * DataGlobal_8A39A0 * 0.5);
    DataGlobal_8A39F8 = result;
    return result;
}
}
} // namespace gamemd

// 0x4C6470
namespace gamemd {
void sub_4C6470()
{
{
    DataGlobal_8A39B0 = Math::ArcTan((double)DataGlobal_8A39F8 * 0.00390625);
}
}
} // namespace gamemd

// 0x4C64A0
namespace gamemd {
void sub_4C64A0()
{
{
    DataGlobal_8A39C8 = Math::ArcTan((double)(2 * DataGlobal_8A39F8) / DataGlobal_8A39A0);
}
}
} // namespace gamemd

// 0x4C64D0
namespace gamemd {
long long sub_4C64D0()
{
{
    __int64 result;
    result = Math::RoundToInt((double)(4 * DataGlobal_8A39F8) + 0.5);
    DataGlobal_8A39EC = result;
    return result;
}
}
} // namespace gamemd

// 0x4C6500
namespace gamemd {
int sub_4C6500()
{
{
    DataGlobal_8A3998 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x4C6510
namespace gamemd {
int sub_4C6510()
{
{
    DataGlobal_8A39B8 = 0;
    DataGlobal_8A39BC = 0;
    DataGlobal_8A39C0 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x4C6530
namespace gamemd {
int sub_4C6530()
{
{
    DataGlobal_8A39E8 = 0;
    DataGlobal_8A39E0 = 128;
    DataGlobal_8A39E4 = 128;
    return 128;
}
}
} // namespace gamemd

// 0x4C6550
namespace gamemd {
int sub_4C6550()
{
{
    DataGlobal_8A3988 = 0;
    DataGlobal_8A398C = 0;
    DataGlobal_8A3990 = 0;
    DataGlobal_8A3994 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x4C68E0
namespace gamemd {
char * AnimClass::sub_4C68E0(int a2, int a3, IUnknown * aP3, IUnknown * aP4, int a6, char a7, int a8, char a9, int a10, int a11)
{
{
    Debug::Log();
    if ( a2 < 0 )
  {
    BYTE2(this->field_0) = -1;
    LOBYTE(this->field_0) = 0;
    *(int *)((char *)&this->field_0 + 3) = *(int *)&g_NetworkPlayerBuffer[5960];
    return (char *)this;
  }
    else
  {
    BYTE2(this->field_0) = a2;
    LOBYTE(this->field_0) = 5;
    *(void **)((char *)&this->field_4 + 3) = (void *)a3;
    HIBYTE(this->field_8) = (char)aP3;
    this->__pad_C[0] = (char)aP4;
    *(int *)&this->__pad_C[1] = a6;
    this->__pad_C[5] = a7;
    *(int *)&this->__pad_C[6] = a8;
    *(int *)&this->__pad_18[3] = a11;
    BYTE2(this->field_14) = a9;
    *(int *)((char *)&this->field_14 + 3) = a10;
    *(int *)((char *)&this->field_0 + 3) = *(int *)&g_NetworkPlayerBuffer[5960];
    return (char *)this;
  }
}
}
} // namespace gamemd

// 0x4C69E0
namespace gamemd {
char * E4Recv_4C69E0::sub_4C69E0(int a2, char a3, int a4, unsigned short * a5)
{
{
    Debug::Log();
    if ( a2 < 0 )
  {
    this->M2 = -1;
    *(void**)this = 0;
    this->M3 = g_CurrentFrame;
    return this;
  }
    else
  {
    this->M2 = a2;
    *(void**)this = a3;
    this->M7 = a4;
    this->M11 = -1;
    this->M15 = 0;
    this->M19 = *a5;
    this->M21 = *((int*)(a5) + 1);
    this->M3 = g_CurrentFrame;
    return this;
  }
}
}
} // namespace gamemd

// 0x4C6A60
namespace gamemd {
char * E4Recv_4C6A60::sub_4C6A60(int a2, char a3, int a4, int a5, unsigned short * a6)
{
{
    Debug::Log();
    if ( a2 < 0 )
  {
    this->M2 = -1;
    *(void**)this = 0;
    this->M3 = g_CurrentFrame;
    return this;
  }
    else
  {
    this->M2 = a2;
    *(void**)this = a3;
    this->M11 = a5;
    this->M7 = a4;
    this->M15 = 0;
    this->M19 = *a6;
    this->M21 = *((int*)(a6) + 1);
    this->M3 = g_CurrentFrame;
    return this;
  }
}
}
} // namespace gamemd

// 0x4C6BE0
namespace gamemd {
char * E4Recv_4C6BE0::sub_4C6BE0(int a2, char a3, int a4, int a5)
{
{
    Debug::Log();
    if ( a2 < 0 )
  {
    this->M2 = -1;
    *(void**)this = 0;
  }
    else
  {
    this->M2 = a2;
    *(void**)this = a3;
    this->M7 = a4;
    this->M11 = a5;
  }
    this->M3 = g_CurrentFrame;
    return this;
}
}
} // namespace gamemd

// 0x4C81D0
namespace gamemd {
int sub_4C81D0()
{
{
    *(int *)&Buffer[0x10000] = 0;
    *(int *)&Buffer[65540] = 0;
    *(int *)&Buffer[65544] = 0;
    *(int *)&Buffer[65548] = 0;
    return 0;
}
}
} // namespace gamemd

// 0x4C81F0
namespace gamemd {
void sub_4C81F0()
{
{
    long double v0;
    v0 = pow(256.0, 2.0);
    *(double *)&Buffer[65560] = Math::Sqrt(v0 + v0);
}
}
} // namespace gamemd

// 0x4C8220
namespace gamemd {
void sub_4C8220()
{
{
    *(double *)&Buffer[65640] = *(double *)&Buffer[65560] / 60.0;
}
}
} // namespace gamemd

// 0x4C8240
namespace gamemd {
void sub_4C8240()
{
{
    *(double *)&Buffer[65616] = 1.0 / *(double *)&Buffer[65640];
}
}
} // namespace gamemd

// 0x4C8260
namespace gamemd {
void sub_4C8260()
{
{
    *(double *)&Buffer[65608] = 0.0174532925199433 * 45.0;
}
}
} // namespace gamemd

// 0x4C8280
namespace gamemd {
void sub_4C8280()
{
{
    *(double *)&Buffer[65568] = 0.0174532925199433 * 60.0;
}
}
} // namespace gamemd

// 0x4C82A0
namespace gamemd {
void sub_4C82A0()
{
{
    DataGlobal_8A3A00 = 0.0174532925199433 * 90.0;
}
}
} // namespace gamemd

// 0x4C82C0
namespace gamemd {
long long sub_4C82C0()
{
{
    double v0;
    __int64 result;
    v0 = Math::Sin(DataGlobal_8A3A00 - *(double *)&Buffer[65568]);
    result = Math::RoundToInt(v0 * *(double *)&Buffer[65560] * 0.5);
    *(int *)&Buffer[65648] = result;
    return result;
}
}
} // namespace gamemd

// 0x4C8300
namespace gamemd {
void sub_4C8300()
{
{
    *(double *)&Buffer[65576] = Math::ArcTan((double)*(int *)&Buffer[65648] * 0.00390625);
}
}
} // namespace gamemd

// 0x4C8330
namespace gamemd {
void sub_4C8330()
{
{
    *(double *)&Buffer[65600] = Math::ArcTan( (double)(2 * *(int *)&Buffer[65648]) / *(double *)&Buffer[65560]);
}
}
} // namespace gamemd

// 0x4C8360
namespace gamemd {
long long sub_4C8360()
{
{
    __int64 result;
    result = Math::RoundToInt((double)(4 * *(int *)&Buffer[65648]) + 0.5);
    *(int *)&Buffer[65636] = result;
    return result;
}
}
} // namespace gamemd

// 0x4C8390
namespace gamemd {
int sub_4C8390()
{
{
    *(short *)&Buffer[65552] = 0;
    *(short *)&Buffer[65554] = 0;
    return 0;
}
}
} // namespace gamemd

// 0x4C83A0
namespace gamemd {
int sub_4C83A0()
{
{
    *(int *)&Buffer[65584] = 0;
    *(int *)&Buffer[65588] = 0;
    *(int *)&Buffer[65592] = 0;
    return 0;
}
}
} // namespace gamemd

// 0x4C83C0
namespace gamemd {
int sub_4C83C0()
{
{
    *(int *)&Buffer[65632] = 0;
    *(int *)&Buffer[65624] = 128;
    *(int *)&Buffer[65628] = 128;
    return 128;
}
}
} // namespace gamemd

// 0x4C84E0
namespace gamemd {
int sub_4C84E0()
{
{
    const DLGTEMPLATE *Resource;
    INT_PTR v1;
    WinMain_Write_53E6B0();
    switch ( DataGlobal_820E5C )
  {
    case 1: if ( !AllocConsole() )
      {
    FreeConsole();
    AllocConsole();
      }
    _cwprintf(aErrorRecursive);
    Sleep(0xFA0u);
    sub_7DD1D7();
    FreeConsole();
    return 1153;
    case 2: return 1153;
    case 3: ExitProcess(0);
  }
    ShowCursor(1);
    Resource = (const DLGTEMPLATE *)FindResource(0xF7u, (const CHAR *)5);
    Debug::Log();
    if ( Resource )
    v1 = DialogBoxIndirectParamA(g_hInstance, Resource, g_hWnd, DialogFunc, 0);
    else
    v1 = DialogBoxParamA(g_hInstance, (LPCSTR)0xF7, g_hWnd, DialogFunc, 0);
    ShowCursor(0);
    return v1;
}
}
} // namespace gamemd

// 0x4C9160
namespace gamemd {
char sub_4C9160()
{
{
    char v0;
    int v2[22];
    char v3[12];
    int v4;
    CCFileClass::Construct(v2, aExpandDat);
    v0 = CCFileClass::Open(v2, 0);
    v2[0] = (unsigned int)vt_CCFileClass;
    v4 = 0;
    Vector::Clear((int)v3);
    v2[0] = &DataGlobal_7E1668;
    BufferIOFileClass::Dtor(v2);
    return v0;
}
}
} // namespace gamemd

// 0x4C91B0
namespace gamemd {
char _do_always_noconv_codecvt_base_std__MBE_NXZ_5()
{
return 1;
}
} // namespace gamemd

// 0x4C96A0
namespace gamemd {
void sub_4C96A0()
{
{
    long double v0;
    v0 = pow(256.0, 2.0);
    DataGlobal_8B3AD0 = Math::Sqrt(v0 + v0);
}
}
} // namespace gamemd

// 0x4C96D0
namespace gamemd {
void sub_4C96D0()
{
{
    DataGlobal_8B3B20 = DataGlobal_8B3AD0 / 60.0;
}
}
} // namespace gamemd

// 0x4C96F0
namespace gamemd {
void sub_4C96F0()
{
{
    DataGlobal_8B3B08 = 1.0 / DataGlobal_8B3B20;
}
}
} // namespace gamemd

// 0x4C9710
namespace gamemd {
void sub_4C9710()
{
{
    DataGlobal_8B3B00 = 0.0174532925199433 * 45.0;
}
}
} // namespace gamemd

// 0x4C9730
namespace gamemd {
void sub_4C9730()
{
{
    DataGlobal_8B3AD8 = 0.0174532925199433 * 60.0;
}
}
} // namespace gamemd

// 0x4C9750
namespace gamemd {
void sub_4C9750()
{
{
    DataGlobal_8B3AB0 = 0.0174532925199433 * 90.0;
}
}
} // namespace gamemd

// 0x4C9770
namespace gamemd {
long long sub_4C9770()
{
{
    double v0;
    __int64 result;
    v0 = Math::Sin(DataGlobal_8B3AB0 - DataGlobal_8B3AD8);
    result = Math::RoundToInt(v0 * DataGlobal_8B3AD0 * 0.5);
    DataGlobal_8B3B28 = result;
    return result;
}
}
} // namespace gamemd

// 0x4C97B0
namespace gamemd {
void sub_4C97B0()
{
{
    DataGlobal_8B3AE0 = Math::ArcTan((double)DataGlobal_8B3B28 * 0.00390625);
}
}
} // namespace gamemd

// 0x4C97E0
namespace gamemd {
void sub_4C97E0()
{
{
    DataGlobal_8B3AF8 = Math::ArcTan((double)(2 * DataGlobal_8B3B28) / DataGlobal_8B3AD0);
}
}
} // namespace gamemd

// 0x4C9810
namespace gamemd {
long long sub_4C9810()
{
{
    __int64 result;
    result = Math::RoundToInt((double)(4 * DataGlobal_8B3B28) + 0.5);
    DataGlobal_8B3B1C = result;
    return result;
}
}
} // namespace gamemd

// 0x4C9840
namespace gamemd {
int sub_4C9840()
{
{
    DataGlobal_8B3AC8 = 0;
    DataGlobal_8B3ACA = 0;
    return 0;
}
}
} // namespace gamemd

// 0x4C9850
namespace gamemd {
int sub_4C9850()
{
{
    DataGlobal_8B3AE8 = 0;
    DataGlobal_8B3AEC = 0;
    DataGlobal_8B3AF0 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x4C9870
namespace gamemd {
int sub_4C9870()
{
{
    DataGlobal_8B3B18 = 0;
    DataGlobal_8B3B10 = 128;
    DataGlobal_8B3B14 = 128;
    return 128;
}
}
} // namespace gamemd

// 0x4C9890
namespace gamemd {
int sub_4C9890()
{
{
    DataGlobal_8B3AB8 = 0;
    DataGlobal_8B3ABC = 0;
    DataGlobal_8B3AC0 = 0;
    DataGlobal_8B3AC4 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x4CAEF0
namespace gamemd {
void nullsub_131()
{
  ;
}
} // namespace gamemd

// 0x4CAF00
namespace gamemd {
void nullsub_132()
{
  ;
}
} // namespace gamemd

// 0x4CAF10
namespace gamemd {
void nullsub_133()
{
  ;
}
} // namespace gamemd

// 0x4CB1A0
namespace gamemd {
double ComputeChronosphereDistortion(float a1)
{
{
    int v1;
    char v2;
    signed int v3;
    int v4;
    v1 = Math::RoundToInt(DataGlobal_8223B4 * a1);
    v2 = v1 & 1;
    v3 = (v1 / 2) & 0x80001FFF;
    if ( v3 >= 0 || (v3 = (((short)v3 - 1) | 0xFFFFE000) + 1, v3 >= 0) )
    v4 = v3 + 2048;
    else
    v4 = v3 + 10240;
    if ( v2 && v4 < 10239 )
    return DataGlobal_84F088[v4];
    else
    return DataGlobal_84F084[v4];
}
}
} // namespace gamemd

// 0x4CB3D0
namespace gamemd {
double globalHelper_0CB3D0(AbstractClass * aP0, AbstractClass * aP1)
{
{
    double v3;
    char v4;
    double result;
    int v6;
    v3 = *(float *)&aP0;
    if ( v4 )
  {
    if ( v3 == 0.0 )
    {
    return 0.0;
    }
    else if ( *(float *)&aP0 <= 0.0 )
    {
    return -1.5707964;
    }
    else
    {
    return 1.5707964;
    }
  }
    else
  {
    v6 = abs32(Math::RoundToInt(v3 / *(float *)&aP1 / DataGlobal_8650B8));
    if ( v6 >= 4097 )
    result = 1.5707964;
    else
    result = *(float *)&DataGlobal_84DD9C[22428][4 * v6 + 56188];
    if ( *(float *)&aP1 < 0.0 )
    result = 3.141592653589793 - result;
    if ( *(float *)&aP0 < 0.0 )
    return -result;
  }
    return result;
}
}
} // namespace gamemd

// 0x4CB8B0
namespace gamemd {
u_short E4Recv_4CB8B0::sub_4CB8B0()
{
{
    u_short v2;
    u_short v3;
    u_short result;
    switch ( (unsigned short)this->M4 )
  {
    case 3: case 4: **(short **)(this + 8) = htons(**(short **)(this + 8));
    break;
    case 5: case 6: **(int **)(this + 8) = htonl(**(int **)(this + 8));
    break;
    default: break;
  }
    v2 = htons((unsigned short)this->M4);
    v3 = (unsigned short)this->M6;
    this->M4 = v2;
    result = htons(v3);
    this->M6 = result;
    return result;
}
}
} // namespace gamemd

// 0x4CB990
namespace gamemd {
int sub_4CB990()
{
{
    DataGlobal_8B3B38 = 0;
    DataGlobal_8B3B3C = 0;
    DataGlobal_8B3B40 = 0;
    DataGlobal_8B3B44 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x4CB9B0
namespace gamemd {
void sub_4CB9B0()
{
{
    long double v0;
    v0 = pow(256.0, 2.0);
    DataGlobal_8B3B50 = Math::Sqrt(v0 + v0);
}
}
} // namespace gamemd

// 0x4CB9E0
namespace gamemd {
void sub_4CB9E0()
{
{
    DataGlobal_8B3BA0 = DataGlobal_8B3B50 / 60.0;
}
}
} // namespace gamemd

// 0x4CBA00
namespace gamemd {
void sub_4CBA00()
{
{
    DataGlobal_8B3B88 = 1.0 / DataGlobal_8B3BA0;
}
}
} // namespace gamemd

// 0x4CBA20
namespace gamemd {
void sub_4CBA20()
{
{
    DataGlobal_8B3B80 = 0.0174532925199433 * 45.0;
}
}
} // namespace gamemd

// 0x4CBA40
namespace gamemd {
void sub_4CBA40()
{
{
    DataGlobal_8B3B58 = 0.0174532925199433 * 60.0;
}
}
} // namespace gamemd

// 0x4CBA60
namespace gamemd {
void sub_4CBA60()
{
{
    DataGlobal_8B3B30 = 0.0174532925199433 * 90.0;
}
}
} // namespace gamemd

// 0x4CBA80
namespace gamemd {
long long sub_4CBA80()
{
{
    double v0;
    __int64 result;
    v0 = Math::Sin(DataGlobal_8B3B30 - DataGlobal_8B3B58);
    result = Math::RoundToInt(v0 * DataGlobal_8B3B50 * 0.5);
    DataGlobal_8B3BA8 = result;
    return result;
}
}
} // namespace gamemd

// 0x4CBAC0
namespace gamemd {
void sub_4CBAC0()
{
{
    DataGlobal_8B3B60 = Math::ArcTan((double)DataGlobal_8B3BA8 * 0.00390625);
}
}
} // namespace gamemd

// 0x4CBAF0
namespace gamemd {
void sub_4CBAF0()
{
{
    DataGlobal_8B3B78 = Math::ArcTan((double)(2 * DataGlobal_8B3BA8) / DataGlobal_8B3B50);
}
}
} // namespace gamemd

// 0x4CBB20
namespace gamemd {
long long sub_4CBB20()
{
{
    __int64 result;
    result = Math::RoundToInt((double)(4 * DataGlobal_8B3BA8) + 0.5);
    DataGlobal_8B3B9C = result;
    return result;
}
}
} // namespace gamemd

// 0x4CBB50
namespace gamemd {
int sub_4CBB50()
{
{
    DataGlobal_8B3B48 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x4CBB60
namespace gamemd {
int sub_4CBB60()
{
{
    DataGlobal_8B3B68 = 0;
    DataGlobal_8B3B6C = 0;
    DataGlobal_8B3B70 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x4CBB80
namespace gamemd {
int sub_4CBB80()
{
{
    DataGlobal_8B3B98 = 0;
    DataGlobal_8B3B90 = 128;
    DataGlobal_8B3B94 = 128;
    return 128;
}
}
} // namespace gamemd

// 0x4CBEF0
namespace gamemd {
int sub_4CBEF0()
{
{
    DataGlobal_8B3BB8 = 0;
    DataGlobal_8B3BBC = 0;
    DataGlobal_8B3BC0 = 0;
    DataGlobal_8B3BC4 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x4CBF10
namespace gamemd {
void sub_4CBF10()
{
{
    long double v0;
    v0 = pow(256.0, 2.0);
    DataGlobal_8B3BD0 = Math::Sqrt(v0 + v0);
}
}
} // namespace gamemd

// 0x4CBF40
namespace gamemd {
void sub_4CBF40()
{
{
    DataGlobal_8B3C20 = DataGlobal_8B3BD0 / 60.0;
}
}
} // namespace gamemd

// 0x4CBF60
namespace gamemd {
void sub_4CBF60()
{
{
    DataGlobal_8B3C08 = 1.0 / DataGlobal_8B3C20;
}
}
} // namespace gamemd

// 0x4CBF80
namespace gamemd {
void sub_4CBF80()
{
{
    DataGlobal_8B3C00 = 0.0174532925199433 * 45.0;
}
}
} // namespace gamemd

// 0x4CBFA0
namespace gamemd {
void sub_4CBFA0()
{
{
    DataGlobal_8B3BD8 = 0.0174532925199433 * 60.0;
}
}
} // namespace gamemd

// 0x4CBFC0
namespace gamemd {
void sub_4CBFC0()
{
{
    DataGlobal_8B3BB0 = 0.0174532925199433 * 90.0;
}
}
} // namespace gamemd

// 0x4CBFE0
namespace gamemd {
long long sub_4CBFE0()
{
{
    double v0;
    __int64 result;
    v0 = Math::Sin(DataGlobal_8B3BB0 - DataGlobal_8B3BD8);
    result = Math::RoundToInt(v0 * DataGlobal_8B3BD0 * 0.5);
    DataGlobal_8B3C28 = result;
    return result;
}
}
} // namespace gamemd

// 0x4CC020
namespace gamemd {
void sub_4CC020()
{
{
    DataGlobal_8B3BE0 = Math::ArcTan((double)DataGlobal_8B3C28 * 0.00390625);
}
}
} // namespace gamemd

// 0x4CC050
namespace gamemd {
void sub_4CC050()
{
{
    DataGlobal_8B3BF8 = Math::ArcTan((double)(2 * DataGlobal_8B3C28) / DataGlobal_8B3BD0);
}
}
} // namespace gamemd

// 0x4CC080
namespace gamemd {
long long sub_4CC080()
{
{
    __int64 result;
    result = Math::RoundToInt((double)(4 * DataGlobal_8B3C28) + 0.5);
    DataGlobal_8B3C1C = result;
    return result;
}
}
} // namespace gamemd

// 0x4CC0B0
namespace gamemd {
int sub_4CC0B0()
{
{
    DataGlobal_8B3BC8 = 0;
    DataGlobal_8B3BCA = 0;
    return 0;
}
}
} // namespace gamemd

// 0x4CC0C0
namespace gamemd {
int sub_4CC0C0()
{
{
    DataGlobal_8B3BE8 = 0;
    DataGlobal_8B3BEC = 0;
    DataGlobal_8B3BF0 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x4CC0E0
namespace gamemd {
int sub_4CC0E0()
{
{
    DataGlobal_8B3C18 = 0;
    DataGlobal_8B3C10 = 128;
    DataGlobal_8B3C14 = 128;
    return 128;
}
}
} // namespace gamemd

// 0x4CC680
namespace gamemd {
BOOL sub_4CC680(int a1, int a2, int a3)
{
{
    int SlopeIndex;
    int v5;
    int result;
    SlopeIndex = Cell::GetSlopeIndex(a2);
    result = 0;
    if ( Cell::GetSlopeIndex(a3) - SlopeIndex >= 4 )
  {
    v5 = Cell::GetSlopeIndex(a1);
    if ( Cell::GetSlopeIndex(a3) - v5 > 0 )
    return 1;
  }
    return result;
}
}
} // namespace gamemd

// 0x4CC750
namespace gamemd {
int sub_4CC750()
{
{
    DataGlobal_8B3C30 = 0;
    DataGlobal_8B3C34 = 0;
    DataGlobal_8B3C38 = 0;
    DataGlobal_8B3C3C = 0;
    return 0;
}
}
} // namespace gamemd

// 0x4CC790
namespace gamemd {
void sub_4CC790()
{
{
    long double v0;
    v0 = pow(256.0, 2.0);
    DataGlobal_8B3C60 = Math::Sqrt(v0 + v0);
}
}
} // namespace gamemd

// 0x4CC7C0
namespace gamemd {
void sub_4CC7C0()
{
{
    DataGlobal_8B3CB0 = DataGlobal_8B3C60 / 60.0;
}
}
} // namespace gamemd

// 0x4CC7E0
namespace gamemd {
void sub_4CC7E0()
{
{
    DataGlobal_8B3C98 = 1.0 / DataGlobal_8B3CB0;
}
}
} // namespace gamemd

// 0x4CC800
namespace gamemd {
void sub_4CC800()
{
{
    DataGlobal_8B3C90 = 0.0174532925199433 * 45.0;
}
}
} // namespace gamemd

// 0x4CC820
namespace gamemd {
void sub_4CC820()
{
{
    DataGlobal_8B3C68 = 0.0174532925199433 * 60.0;
}
}
} // namespace gamemd

// 0x4CC840
namespace gamemd {
void sub_4CC840()
{
{
    DataGlobal_8B3C40 = 0.0174532925199433 * 90.0;
}
}
} // namespace gamemd

// 0x4CC860
namespace gamemd {
long long sub_4CC860()
{
{
    double v0;
    __int64 result;
    v0 = Math::Sin(DataGlobal_8B3C40 - DataGlobal_8B3C68);
    result = Math::RoundToInt(v0 * DataGlobal_8B3C60 * 0.5);
    DataGlobal_8B3CB8 = result;
    return result;
}
}
} // namespace gamemd

// 0x4CC8A0
namespace gamemd {
void sub_4CC8A0()
{
{
    DataGlobal_8B3C70 = Math::ArcTan((double)DataGlobal_8B3CB8 * 0.00390625);
}
}
} // namespace gamemd

// 0x4CC8D0
namespace gamemd {
void sub_4CC8D0()
{
{
    DataGlobal_8B3C88 = Math::ArcTan((double)(2 * DataGlobal_8B3CB8) / DataGlobal_8B3C60);
}
}
} // namespace gamemd

// 0x4CC900
namespace gamemd {
long long sub_4CC900()
{
{
    __int64 result;
    result = Math::RoundToInt((double)(4 * DataGlobal_8B3CB8) + 0.5);
    DataGlobal_8B3CAC = result;
    return result;
}
}
} // namespace gamemd

// 0x4CC930
namespace gamemd {
int sub_4CC930()
{
{
    DataGlobal_8B3C58 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x4CC940
namespace gamemd {
int sub_4CC940()
{
{
    DataGlobal_8B3C78 = 0;
    DataGlobal_8B3C7C = 0;
    DataGlobal_8B3C80 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x4CC960
namespace gamemd {
int sub_4CC960()
{
{
    DataGlobal_8B3CA8 = 0;
    DataGlobal_8B3CA0 = 128;
    DataGlobal_8B3CA4 = 128;
    return 128;
}
}
} // namespace gamemd

// 0x4CC980
namespace gamemd {
int sub_4CC980()
{
{
    DataGlobal_8B3C48 = 0;
    DataGlobal_8B3C4C = 0;
    DataGlobal_8B3C50 = 0;
    DataGlobal_8B3C54 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x4CCA70
namespace gamemd {
void E4Recv_4CCA70::sub_4CCA70()
{
{
    *(void**)this = vt_FlyLocomotionClass;
    this->M4 = &vt_FlyLocomotionClass;
    LocomotionClass::Construct(this);
}
}
} // namespace gamemd
