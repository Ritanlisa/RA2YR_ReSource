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
#include "e4/classes/AnimClass_e4.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/classes/Draw_e4.hpp"
#include "e4/classes/E4Recv_4B0DF0_e4.hpp"
#include "e4/classes/SkirmishDialog_e4.hpp"
#include "e4/classes/FoggedObjectClass_e4.hpp"
#include "e4/classes/Audio_e4.hpp"
#include "e4/classes/E4Recv_4E0A00_e4.hpp"
#include "e4/classes/MapClass_e4.hpp"
#include "e4/classes/ObjectClass_e4.hpp"
#include "e4/classes/Dialog_e4.hpp"
#include "e4/classes/E4Recv_4DB8A0_e4.hpp"
#include "e4/classes/String_e4.hpp"
#include "e4/classes/ObjectTypeClass_e4.hpp"

// 0x4C1440
namespace gamemd {
void sub_4C1440()
{
  int result; // eax
  unsigned int v2[79]; // [esp+8h] [ebp-13Ch] BYREF

  memset(v2, 0, sizeof(v2)); /*0x4c1452*/
  v2[0] = 316; /*0x4c145d*/
  result = (*(int (__stdcall **)(int, unsigned int *, unsigned int))(*(unsigned int *)dword_8A0E00 + 44))(dword_8A0E00, v2, 0); /*0x4c146b*/
  if ( !result ) /*0x4c1471*/
  {
    if ( (v2[1] & 1) != 0 ) /*0x4c1478*/
    {
      if ( (v2[14] & 0x400) != 0 ) /*0x4c148b*/
      {
        if ( (v2[33] & 0x2000) != 0 ) /*0x4c14a1*/
        {
          if ( (v2[33] & 0x1000) != 0 ) /*0x4c14b0*/
            return ((v2[33] & 0x20000) != 0) - 1; /*0x4c14c7*/
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
}
// 0x4C14D0
namespace gamemd {
void sub_4C14D0()
{
  int result; // eax
  unsigned int v2[63]; // [esp+8h] [ebp-1F8h] BYREF
  unsigned int v3[63]; // [esp+104h] [ebp-FCh] BYREF

  memset(v2, 0, sizeof(v2)); /*0x4c14e2*/
  memset(v3, 0, sizeof(v3)); /*0x4c14f5*/
  v2[0] = 252; /*0x4c14fc*/
  v3[0] = 252; /*0x4c1500*/
  result = (*(int (__stdcall **)(unsigned int, unsigned int *, unsigned int *))(*(unsigned int *)g_DrawColorState + 12))( /*0x4c1517*/
             g_DrawColorState,
             v2,
             v3);
  if ( !result ) /*0x4c151d*/
  {
    if ( (v2[1] & 0x1C3) == 0x1C3 ) /*0x4c1531*/
    {
      if ( (v2[2] & 2) != 0 ) /*0x4c1545*/
      {
        if ( (v2[3] & 0x400) != 0 ) /*0x4c155c*/
        {
          if ( (v2[3] & 0x200) != 0 ) /*0x4c156b*/
          {
            if ( (v2[39] & 0x400) != 0 ) /*0x4c157e*/
            {
              if ( (v2[40] & 0x400) != 0 ) /*0x4c1591*/
              {
                if ( (v2[28] & 0xA) != 0 ) /*0x4c15a2*/
                {
                  if ( (v2[29] & 2) != 0 ) /*0x4c15b2*/
                  {
                    if ( (v2[30] & 2) != 0 ) /*0x4c15c2*/
                    {
                      if ( v2[45] >= 0x100u ) /*0x4c15dc*/
                        return -(v2[46] < 0x100u); /*0x4c15ef*/
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
}
// 0x4C1600
namespace gamemd {
void sub_4C1600()
{
  int result; // eax
  unsigned int v2[79]; // [esp+20h] [ebp-13Ch] BYREF

  result = g_lpDirectDraw7->lpVtbl->QueryInterface( /*0x4c1618*/
             g_lpDirectDraw7,
             (const IID *const)&unk_7F7D50,
             (LPVOID *)&dword_8A0E00);
  if ( !result ) /*0x4c161c*/
  {
    result = (**(int (__stdcall ***)(int, void *, int *))dword_8A0E00)(dword_8A0E00, &unk_7F8070, &dword_8A0DF4); /*0x4c1630*/
    if ( !result ) /*0x4c1634*/
    {
      memset(v2, 0, sizeof(v2)); /*0x4c1644*/
      v2[0] = 316; /*0x4c164b*/
      if ( !(*(int (__stdcall **)(int, unsigned int *, unsigned int))(*(unsigned int *)dword_8A0E00 + 44))(dword_8A0E00, v2, 0) /*0x4c1687*/
        && (v2[1] & 1) != 0
        && (v2[14] & 0x400) != 0
        && (v2[33] & 0x2000) != 0
        && (v2[33] & 0x1000) != 0
        && (v2[33] & 0x20000) != 0 )
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
}
// 0x4C16A0
namespace gamemd {
void InitializeRadialGradientTexture()
{
  double v1; // st7
  unsigned int *AudioStream_field_0x1C; // esi
  int result; // eax
  int v4; // eax
  ObjectClass *v5; // eax
  void *v6; // eax
  int v7; // edi
  unsigned short *v8; // ebx
  int v9; // edi
  int v10; // esi
  int v11; // eax
  int v12; // edx
  ObjectClass *v13; // eax
  ObjectClass *v14; // eax
  StructTable *v15; // eax
  double v16; // [esp+3Ch] [ebp-C8h]
  ObjectClass *v17; // [esp+44h] [ebp-C0h]
  void *v18[2]; // [esp+58h] [ebp-ACh]
  void *v19[2]; // [esp+58h] [ebp-ACh]
  const void *v20; // [esp+58h] [ebp-ACh]
  int v21; // [esp+60h] [ebp-A4h]
  unsigned int *v22; // [esp+64h] [ebp-A0h]
  int v23; // [esp+68h] [ebp-9Ch]
  unsigned int v24[11]; // [esp+6Ch] [ebp-98h] BYREF
  unsigned int v25[27]; // [esp+98h] [ebp-6Ch] BYREF

  AudioStream_field_0x1C = DSurface_Composite->AudioStream_field_0x1C; /*0x4c16b4*/
  v22 = AudioStream_field_0x1C; /*0x4c16cb*/
  result = (*(int (__stdcall **)(int, void *, unsigned int *, int64_t *))(*(unsigned int *)dword_8A0DF4 + 32))( /*0x4c16cf*/
             dword_8A0DF4,
             &unk_7F80B0,
             AudioStream_field_0x1C,
             &g_DrawColorState);
  if ( !result ) /*0x4c16d6*/
  {
    if ( sub_4C14D0(v17) ) /*0x4c16dc*/
      return -1; /*0x4c16ef*/
    result = (*(int (__stdcall **)(int, char *, unsigned int))(*(unsigned int *)dword_8A0DF4 + 24))( /*0x4c16fe*/
               dword_8A0DF4,
               (char *)&g_DrawColorState + 4,
               0);
    if ( !result ) /*0x4c1703*/
    {
      result = (*(int (__stdcall **)(unsigned int, unsigned int))(*(unsigned int *)g_DrawColorState + 24))( /*0x4c1718*/
                 g_DrawColorState,
                 IDA_HIDWORD(g_DrawColorState));
      if ( !result ) /*0x4c171d*/
      {
        memset(v25, 0, sizeof(v25)); /*0x4c172e*/
        v4 = *AudioStream_field_0x1C; /*0x4c1730*/
        v25[0] = 108; /*0x4c1738*/
        result = (*(int (__stdcall **)(unsigned int *, unsigned int *))(v4 + 88))(AudioStream_field_0x1C, v25); /*0x4c1740*/
        if ( !result ) /*0x4c1745*/
        {
          memset(v24, 0, sizeof(v24)); /*0x4c175a*/
          *(unsigned long long *)v18 = v25[3]; /*0x4c1764*/
          v24[3] = v25[3]; /*0x4c1768*/
          __asm { fild qword ptr [esp+0C0h+var_AC] } /*0x4c176c*/
          *(unsigned long long *)v19 = v25[2]; /*0x4c1775*/
          v24[4] = v25[2]; /*0x4c177d*/
          __asm /*0x4c1781*/
          {
            fstp [esp+0C0h+var_7C]
            fild qword ptr [esp+0C0h+var_AC]
          }
          v24[0] = 44; /*0x4c178d*/
          v24[10] = 1065353216; /*0x4c1795*/
          __asm { fstp [esp+0C4h+var_78] } /*0x4c179e*/
          result = (*(int (__stdcall **)(unsigned int, unsigned int *))(*(unsigned int *)IDA_HIDWORD(g_DrawColorState) + 68))( /*0x4c17a5*/
                     IDA_HIDWORD(g_DrawColorState),
                     v24);
          if ( !result ) /*0x4c17aa*/
          {
            result = (*(int (__stdcall **)(unsigned int, unsigned int))(*(unsigned int *)g_DrawColorState + 52))( /*0x4c17bf*/
                       g_DrawColorState,
                       IDA_HIDWORD(g_DrawColorState));
            if ( !result ) /*0x4c17c4*/
            {
              v5 = (ObjectClass *)RA2_OPNEW(0x78u); /*0x4c17cc*/
              if ( v5 ) /*0x4c17d6*/
              {
                dword_8A0E04 = (AudioStream *)sub_4A3270(v5, 256, 256, 0); /*0x4c17ec*/
                if ( dword_8A0E04 ) /*0x4c17f1*/
                {
                  v6 = (unsigned short *)(malloc(0x20000u));
                  v20 = v6; /*0x4c1802*/
                  if ( !v6 ) /*0x4c1806*/
                    return 2; /*0x4c19a2*/
                  v7 = -128; /*0x4c180c*/
                  v8 = v6; /*0x4c1811*/
                  v21 = -128; /*0x4c1813*/
                  do /*0x4c18db*/
                  {
                    v9 = v7 * v7; /*0x4c1817*/
                    v10 = -128; /*0x4c181a*/
                    do /*0x4c18c0*/
                    {
                      v23 = v9 + v10 * v10; /*0x4c1829*/
                      __asm /*0x4c182d*/
                      {
                        fild [esp+0C8h+var_9C]
                        fstp [esp+0C8h+var_C8]; double
                      }
                      Math::Sqrt(v16); /*0x4c1834*/
                      __asm { fmul ds:dbl_7E3D90 } /*0x4c1839*/
                      IDA_LOWORD(v11) = Math::RoundToInt(v1); /*0x4c1842*/
                      v12 = 400 - v11; /*0x4c184c*/
                      if ( 400 - v11 >= 0 ) /*0x4c184e*/
                      {
                        if ( v12 > 255 ) /*0x4c186d*/
                          v12 = 255; /*0x4c186f*/
                      }
                      else
                      {
                        v12 = 0; /*0x4c1850*/
                      }
                      ++v8; /*0x4c1886*/
                      ++v10; /*0x4c18af*/
                      *(v8 - 1) = (v12 >> g_BitShift_Green_0 << g_BitShift_Red) /*0x4c18b0*/
                                | (v12 >> g_BitMask_Blue << g_BitMask_Green)
                                | (v12 >> g_BitMask_Red << g_BitShift_Blue);
                    }
                    while ( v10 + 128 < 256 ); /*0x4c18c0*/
                    v7 = v21 + 1; /*0x4c18ca*/
                    v21 = v7; /*0x4c18cb*/
                  }
                  while ( v7 + 128 < 256 ); /*0x4c18db*/
                  if ( AudioStream::ReadSamples(dword_8A0E04, v20) ) /*0x4c18ec*/
                    return 3; /*0x4c18f5*/
                  memset(v25, 0, sizeof(v25)); /*0x4c1911*/
                  v25[0] = 108; /*0x4c1919*/
                  result = (*(int (__stdcall **)(unsigned int *, unsigned int *))(*v22 + 88))(v22, v25); /*0x4c1923*/
                  if ( !result ) /*0x4c1928*/
                  {
                    v13 = (unsigned int)((ObjectClass *)RA2_OPNEW(0x78u));
                    if ( v13 ) /*0x4c193a*/
                      dword_8A0E08 = (DDraw *)sub_4A3270(v13, v25[3], v25[2], 1); /*0x4c194f*/
                    else
                      dword_8A0E08 = 0; /*0x4c1956*/
                    v14 = (ObjectClass *)RA2_OPNEW(0x18004u); /*0x4c1965*/
                    if ( v14 ) /*0x4c196f*/
                      v15 = (StructTable *)sub_4A3630(v14); /*0x4c1973*/
                    else
                      v15 = 0; /*0x4c197a*/
                    dword_8A0E10 = v15; /*0x4c1982*/
                    if ( !dword_8A0E08 || !v15 ) /*0x4c1991*/
                      return -1; /*0x4c1991*/
                    return 0; /*0x4c1997*/
                  }
                  return result; /*0x4c1901*/
                }
              }
              else
              {
                dword_8A0E04 = 0; /*0x4c1854*/
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
}
// 0x4C1E70
namespace gamemd {
void sub_4C1E70(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
  int v9; // eax
  int v10; // esi
  int v11; // eax
  int v12; // eax
  int v13; // edx
  int v15[2]; // [esp+8h] [ebp-10h] BYREF
  int v16[2]; // [esp+10h] [ebp-8h] BYREF

  Coord::To_Screen(g_TacticalClass_Instance, &a1, v16); /*0x4c1e85*/
  Coord::To_Screen(g_TacticalClass_Instance, &a4, v15); /*0x4c1e9a*/
  v9 = ZCoordToScreenY(a3); /*0x4c1ea3*/
  v10 = a8 - v9 - 2; /*0x4c1eb2*/
  v11 = ZCoordToScreenY(a6); /*0x4c1eb5*/
  v12 = a9 - v11 - 2; /*0x4c1ec8*/
  if ( *(unsigned int *)(dword_87F6C4 + 4) == 1 ) /*0x4c1ecf*/
    v13 = *(uint8_t *)(*(unsigned int *)(dword_87F6C4 + 372) + a7); /*0x4c1ee0*/
  else
    v13 = *(uint16_t *)(*(unsigned int *)(dword_87F6C4 + 372) + 2 * a7); /*0x4c1ef0*/
  return (*(int (__thiscall **)(int, int *, int *, int *, int, int, int, unsigned int))(*(unsigned int *)DSurface_Composite + 52))( /*0x4c1f13*/
           DSurface_Composite,
           &DSurface_ViewBounds,
           v16,
           v15,
           v13,
           v10,
           v12,
           0);
}
}
// 0x4C2790
namespace gamemd {
int E4Recv_4C2790::sub_4C2790()
{
  int result; // eax
  int v3[2]; // [esp+8h] [ebp-10h] BYREF
  int v4[2]; // [esp+10h] [ebp-8h] BYREF

  if ( this->owningHouseIndex )
  {
    Coord::To_Screen((Coord *)g_TacticalClass_Instance, this, v4); /*0x4c27aa*/
    Coord::To_Screen((Coord *)g_TacticalClass_Instance, &this->?, v3); /*0x4c27be*/
    if ( (uint8_t)ClipLine(v4, v3, &DSurface_ViewBounds.field_0) )
      Lightning::Draw(
        (Lightning *)this,
        (int)this->AbstractClass,
        (int)this->?,
        (int)this->?,
        (int)this->?,
        this->?,
        this->?,
        IDA_LOBYTE(this->fallRate) != 0 ? 5 : 10);
    ++*(unsigned short *)&this->M28; /*0x4c281a*/
  }
  result = this->owningHouseIndex >> 1; /*0x4c2821*/
  this->owningHouseIndex = result; /*0x4c2823*/
  return result; /*0x4c2820*/
}
}
// 0x4C2830
namespace gamemd {
void sub_4C2830()
{
  int result; // eax
  int *v2; // eax
  int v3; // ecx
  int *v4; // edx
  int v5; // eax
  int v6; // ecx
  int v7; // edx
  unsigned int *v8; // esi
  int *v9; // ebx
  int *v10; // esi
  int v11; // eax
  int v12; // eax
  void *v13; // edx
  int v14; // ecx
  unsigned int *v15; // eax
  void *Block; // [esp+18h] [ebp-24h] BYREF
  int i; // [esp+1Ch] [ebp-20h]
  int v18[2]; // [esp+20h] [ebp-1Ch] BYREF
  int v19[2]; // [esp+28h] [ebp-14h] BYREF
  char v20[12]; // [esp+30h] [ebp-Ch] BYREF

  result = dword_8A0E98 - 1; /*0x4c2839*/
  for ( i = dword_8A0E98 - 1; i >= 0; --i ) /*0x4c2843*/
  {
    v2 = (int *)*((unsigned int *)dword_8A0E8C + result); /*0x4c284f*/
    Block = v2; /*0x4c2852*/
    v3 = v2[8]; /*0x4c2856*/
    if ( v3 ) /*0x4c285b*/
    {
      v4 = (int *)(*(int (__thiscall **)(int, char *, int, unsigned int, unsigned int, unsigned int))(*(unsigned int *)v3 + 176))( /*0x4c2888*/
                    v3,
                    v20,
                    v2[9],
                    0,
                    0,
                    0);
      v5 = (unsigned int *)(*v4);
      v6 = v4[1]; /*0x4c288e*/
      v7 = v4[2]; /*0x4c2891*/
      if ( v5 != dword_8A0E50 || v6 != dword_8A0E54 || v7 != dword_8A0E58 ) /*0x4c28a4*/
      {
        v8 = Block; /*0x4c28a6*/
        *(unsigned int *)Block = v5; /*0x4c28aa*/
        v8[1] = v6; /*0x4c28ac*/
        v8[2] = v7; /*0x4c28af*/
      }
      v2 = (int *)Block; /*0x4c28b2*/
    }
    v9 = v2 + 10; /*0x4c28b9*/
    v10 = v2; /*0x4c28be*/
    if ( v2[10] ) /*0x4c28b6*/
    {
      Coord::To_Screen((Coord *)g_TacticalClass_Instance, v2, v19); /*0x4c28ce*/
      Coord::To_Screen((Coord *)g_TacticalClass_Instance, v10 + 3, v18); /*0x4c28e2*/
      if ( (uint8_t)ClipLine(v19, v18, &DSurface_ViewBounds.field_0) ) /*0x4c28f4*/
      {
        v11 = -(*((unsigned char *)v10 + 44) != 0); /*0x4c2904*/
        IDA_LOBYTE(v11) = v11 & 0xFB; /*0x4c2906*/
        Lightning::Draw((Lightning *)v10, *v10, v10[1], v10[2], v10[3], v10[4], v10[5], v11 + 10); /*0x4c2938*/
      }
      ++v10[7]; /*0x4c293d*/
    }
    *v9 >>= 1; /*0x4c2944*/
    if ( !*((unsigned int *)Block + 10) ) /*0x4c294a*/
    {
      v12 = (*(int (__thiscall **)(int *, void **))(dword_8A0E88 + 16))(&dword_8A0E88, &Block); /*0x4c2960*/
      if ( v12 != -1 && v12 < dword_8A0E98 && v12 < --dword_8A0E98 ) /*0x4c297b*/
      {
        do /*0x4c2993*/
        {
          ++v12; /*0x4c2983*/
          *((unsigned int *)dword_8A0E8C + v12 - 1) = *((unsigned int *)dword_8A0E8C + v12); /*0x4c2987*/
        }
        while ( v12 < dword_8A0E98 ); /*0x4c2993*/
      }
      v13 = Block; /*0x4c299b*/
      if ( Block ) /*0x4c299d*/
      {
        v14 = *((unsigned int *)Block + 8); /*0x4c299f*/
        v15 = (char *)Block + 32; /*0x4c29a2*/
        if ( v14 ) /*0x4c29a7*/
        {
          *(unsigned int *)(v14 + 1756) = 0; /*0x4c29a9*/
          *v15 = 0; /*0x4c29b3*/
        }
        RA2_OPDEL(v13); /*0x4c29ba*/
      }
    }
    result = i - 1; /*0x4c29c6*/
  }
  return result; /*0x4c29d1*/
}
}
// 0x4C29E0
namespace gamemd {
ParticleSystemClass * * sub_4C29E0()
{
  int i; // esi
  unsigned int *v2; // eax
  int v3; // ecx

  for ( i = 0; i < dword_8A0E98; ++i ) /*0x4c29ed*/
  {
    v2 = (unsigned int *)*((unsigned int *)dword_8A0E8C + i); /*0x4c29f4*/
    if ( v2 ) /*0x4c29f9*/
    {
      v3 = v2[8]; /*0x4c29fb*/
      if ( v3 ) /*0x4c2a00*/
      {
        *(unsigned int *)(v3 + 1756) = 0; /*0x4c2a02*/
        v2[8] = 0; /*0x4c2a08*/
      }
      RA2_OPDEL(v2); /*0x4c2a0c*/
    }
  }
  dword_8A0E98 = 0; /*0x4c2a23*/
  if ( dword_8A0E8C && byte_8A0E95 ) /*0x4c2a33*/
  {
    RA2_OPDEL(dword_8A0E8C); /*0x4c2a36*/
    dword_8A0E8C = 0; /*0x4c2a3e*/
  }
  byte_8A0E95 = 0; /*0x4c2a44*/
  dword_8A0E90 = 0; /*0x4c2a4a*/
}
}
// 0x4C38E0
namespace gamemd {
char * * sub_4C38E0(char * a1, int a2, int a3, char * a4)
{
  char *v5; // edx
  char *v6; // eax
  unsigned char *v7; // ebp
  uint8_t *v8; // edi
  int v9; // eax
  int v10; // esi
  char *v11; // eax
  int v12; // eax
  int16_t v14; // [esp+10h] [ebp-10h] BYREF
  char v15; // [esp+12h] [ebp-Eh]
  int v16; // [esp+14h] [ebp-Ch] BYREF
  int v17; // [esp+18h] [ebp-8h]
  int v18; // [esp+1Ch] [ebp-4h]

  v16 = (unsigned char *)(a2);
  if ( !a3 || !a2 ) /*0x4c38fb*/
    return a4; /*0x4c38fb*/
  v5 = a4; /*0x4c3901*/
  if ( a4 ) /*0x4c3907*/
    goto LABEL_6; /*0x4c3907*/
  v6 = (char *)RA2_OPNEW((a3 + 1) << 8); /*0x4c3910*/
  a4 = v6; /*0x4c3918*/
  if ( !v6 ) /*0x4c391e*/
    return a4; /*0x4c3a11*/
  v5 = v6; /*0x4c3924*/
  LABEL_6:
  v7 = v5 + 256; /*0x4c3926*/
  memset(v5, 0xFFu, 0x100u); /*0x4c3938*/
  v17 = 0; /*0x4c393a*/
  if ( a3 > 0 ) /*0x4c3942*/
  {
    v8 = (uint8_t *)(v16 + 1); /*0x4c394c*/
    while ( 1 ) /*0x4c395b*/
    {
      v5[*(v8 - 1)] = v17; /*0x4c395e*/
      v9 = *v8; /*0x4c396a*/
      v18 = v8[1]; /*0x4c396f*/
      v10 = 1; /*0x4c397f*/
      v11 = &a1[2 * v9 + v9]; /*0x4c3984*/
      v14 = *(unsigned short *)v11; /*0x4c3989*/
      IDA_LOBYTE(v11) = v11[2]; /*0x4c398e*/
      *v7 = 0; /*0x4c3991*/
      v15 = (char)v11; /*0x4c3995*/
      do /*0x4c39e6*/
      {
        v12 = (int)&a1[2 * (v10 % 256) + v10 % 256]; /*0x4c39ac*/
        IDA_LOWORD(v16) = *(unsigned short *)v12; /*0x4c39ba*/
        IDA_BYTE2(v16) = *(unsigned char *)(v12 + 2); /*0x4c39c7*/
        Color::Lerp((uint8_t *)&v16, v18, (uint8_t *)&v14); /*0x4c39cb*/
        v7[v10++] = Palette::FindClosestColor(a1, (int)&v16); /*0x4c39dc*/
      }
      while ( v10 < 256 ); /*0x4c39e6*/
      v7 += 256; /*0x4c39f0*/
      v8 += 4; /*0x4c39f7*/
      if ( ++v17 >= a3 ) /*0x4c3a00*/
        break; /*0x4c3a00*/
      v5 = a4; /*0x4c3951*/
    }
    return (char **)(a4);
  }
  return v5; /*0x4c3a0a*/
}
}
// 0x4C3DD0
namespace gamemd {
AbstractClass * * E4Recv_4C3DD0::sub_4C3DD0(int a2)
{
  void *vtable2; // edx
  unsigned int v5[4]; // [esp+4h] [ebp-10h] BYREF

  TextRenderer::GetInstance(); /*0x4c3dd9*/
  Text::MeasureWidth((int)this->AbstractClass, 0); /*0x4c3de5*/
  vtable2 = this->M8; /*0x4c3def*/
  v5[2] = g_DisplayWidth; /*0x4c3df8*/
  v5[0] = 0; /*0x4c3e09*/
  v5[1] = vtable2; /*0x4c3e12*/
  v5[3] = 18; /*0x4c3e16*/
  return (*(int (__thiscall **)(AudioStream *, unsigned int *, int, unsigned int *, unsigned int, int))(*(unsigned int *)g_DSurface_Hidden_2->__pad_0 /*0x4c3e28*/
                                                                                    + 8))(
           g_DSurface_Hidden_2,
           v5,
           a2,
           v5,
           0,
           1);
}
}
// 0x4C83E0
namespace gamemd {
void DialogFunc(HWND hDlg, UINT a2, WPARAM a3, LPARAM a4)
{
  if ( a2 > 0x111 ) /*0x4c83ea*/
  {
    if ( a2 == 534 ) /*0x4c84bc*/
      return (uint8_t)Window::ClampToScreen(a4); /*0x4c84d6*/
    return 0; /*0x4c84bc*/
  }
  if ( a2 == 273 ) /*0x4c83f0*/
  {
    if ( (uint16_t)a3 == 1149 ) /*0x4c847d*/
    {
      MessageBoxA(hDlg, aSorryYouCanOnl, aBummer, 0x30u); /*0x4c84ab*/
      return 0; /*0x4c84b4*/
    }
    if ( (uint16_t)a3 == 1153 ) /*0x4c8482*/
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
}
// 0x4C95D0
namespace gamemd {
unsigned int * E4Recv_4C95D0::sub_4C95D0(unsigned int * a3, unsigned short * a3)
{
  int16_t abstractFlags; // bx
  void *vtable2; // esi
  int uniqueId; // eax
  int v6; // esi
  int64_t v7; // rax
  int v8; // eax
  int v9; // edx
  void *v10; // ecx
  int16_t v11; // cx
  void *vtable0; // ecx
  void *v14; // [esp+Ch] [ebp-4h]

  abstractFlags = this->M20; /*0x4c95d2*/
  if ( abstractFlags <= 0 ) /*0x4c95db*/
    goto LABEL_14; /*0x4c95db*/
  vtable2 = this->M8; /*0x4c95dd*/
  uniqueId = this->M16; /*0x4c95e0*/
  if ( vtable2 != (void *)-1 ) /*0x4c95ec*/
  {
    if ( *(unsigned int *)&stru_A8EB00.?[416] - (int)vtable2 >= uniqueId ) /*0x4c95f4*/
    {
  LABEL_14:
      vtable0 = this->AbstractClass; /*0x4c964f*/
      goto LABEL_15; /*0x4c964f*/
    }
    uniqueId -= *(unsigned int *)&stru_A8EB00.?[416] - (unsigned int)vtable2; /*0x4c95f6*/
  }
  if ( !uniqueId ) /*0x4c95fa*/
    goto LABEL_14; /*0x4c95fa*/
  v6 = (int16_t)(IDA_LOWORD(this->AbstractClass) - IDA_LOWORD(this->M4)); /*0x4c9606*/
  v7 = (int16_t)(IDA_LOWORD(this->AbstractClass) - IDA_LOWORD(this->M4)); /*0x4c960b*/
  v8 = (int)((IDA_HIDWORD(v7) ^ v7) - IDA_HIDWORD(v7)) / abstractFlags; /*0x4c9611*/
  v14 = this->AbstractClass; /*0x4c9615*/
  if ( (int16_t)v8 > 0 ) /*0x4c961c*/
  {
    v9 = this->M16; /*0x4c961e*/
    v10 = this->M8; /*0x4c9621*/
    if ( v10 != (void *)-1 ) /*0x4c9627*/
    {
      if ( *(unsigned int *)&stru_A8EB00.?[416] - (int)v10 >= v9 ) /*0x4c962f*/
      {
        v11 = 0; /*0x4c964b*/
        goto LABEL_11; /*0x4c964d*/
      }
      IDA_LOWORD(v9) = v9 - (*(unsigned short *)&stru_A8EB00.?[416] - (unsigned short)v10); /*0x4c9631*/
    }
    v11 = v9; /*0x4c9633*/
  LABEL_11:
    IDA_LOWORD(v14) = (unsigned short)v14 - v11 * (v6 / (int16_t)v8); /*0x4c9635*/
  }
  IDA_LOWORD(vtable0) = (unsigned short)v14; /*0x4c9645*/
  LABEL_15:
  IDA_LOWORD(a3) = *a3 - (unsigned short)vtable0; /*0x4c9651*/
  *a3 = a3; /*0x4c966b*/
  return a3; /*0x4c9655*/
}
}
// 0x4CB150
namespace gamemd {
void ComputeDistortionVariant(float a1)
{
  int v1; // eax
  int result; // eax

  IDA_LOWORD(v1) = Math::RoundToInt(flt_8223B0 * a1); /*0x4cb15a*/
  result = (v1 / 2) & 0x80001FFF; /*0x4cb169*/
  if ( result < 0 )
    return (((unsigned short)result - 1) | 0xFFFFE000) + 1 + ((int)((((unsigned short)result - 1) | 0xFFFFE000) + 1) < 0 ? 0x2000 : 0);
  return result; /*0x4cb190*/
}
}
// 0x4CB4C0
namespace gamemd {
void sub_4CB4C0()
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
      *(unsigned int *)Math::SinCos = 0; /*0x4cb53d*/
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
}
// 0x4CB580
namespace gamemd {
AbstractClass * * E4Recv_4CB580::sub_4CB580(char * Source, int a3)
{
  char *v4; // eax
  unsigned int vtable1_high; // edx
  char *v6; // edi

  strncpy(Source, 4u); /*0x4cb58d*/
  IDA_LOWORD(this->M4) = 1; /*0x4cb598*/
  IDA_HIWORD(this->M6) = 1; /*0x4cb59c*/
  v4 = (char *)RA2_OPNEW(1u); /*0x4cb5a0*/
  vtable1_high = IDA_HIWORD(this->?); /*0x4cb5b1*/
  *(void **)&this->M8 = v4; /*0x4cb5b3*/
  qmemcpy(v4, &a3, 4 * (vtable1_high >> 2)); /*0x4cb5b9*/
  v6 = &v4[4 * (vtable1_high >> 2)]; /*0x4cb5b9*/
  qmemcpy(v6, &a3 + 4 * (vtable1_high >> 2), vtable1_high & 3); /*0x4cb5c5*/
  this->? = 0; /*0x4cb5c8*/
  return (char *)this; /*0x4cb5c7*/
}
}
// 0x4CB640
namespace gamemd {
void * E4Recv_4CB640::sub_4CB640(RandomStruct * aP1, int a3)
{
  char *v4; // eax
  unsigned int vtable1_high; // edx
  char *v6; // edi

  strncpy(aP1, 4u); /*0x4cb64d*/
  IDA_LOWORD(*(unsigned short *)&this->M4) = 3; /*0x4cb654*/
  IDA_HIWORD(*(unsigned short *)&this->M6) = 2; /*0x4cb65a*/
  v4 = (char *)RA2_OPNEW(2u); /*0x4cb660*/
  vtable1_high = IDA_HIWORD(this->?); /*0x4cb671*/
  *(void **)&this->M8 = v4; /*0x4cb673*/
  qmemcpy(v4, &a3, 4 * (vtable1_high >> 2)); /*0x4cb679*/
  v6 = &v4[4 * (vtable1_high >> 2)]; /*0x4cb679*/
  qmemcpy(v6, &a3 + 4 * (vtable1_high >> 2), vtable1_high & 3); /*0x4cb685*/
  this->? = 0; /*0x4cb688*/
  return (char *)this; /*0x4cb687*/
}
}
// 0x4CB6A0
namespace gamemd {
void * E4Recv_4CB6A0::sub_4CB6A0(RandomStruct * aP1, int a3)
{
  char *v4; // eax
  unsigned int vtable1_high; // edx
  char *v6; // edi

  strncpy(aP1, 4u); /*0x4cb6ad*/
  IDA_LOWORD(*(unsigned short *)&this->M4) = 4; /*0x4cb6b4*/
  IDA_HIWORD(*(unsigned short *)&this->M6) = 2; /*0x4cb6ba*/
  v4 = (char *)RA2_OPNEW(2u); /*0x4cb6c0*/
  vtable1_high = IDA_HIWORD(this->?); /*0x4cb6d1*/
  *(void **)&this->M8 = v4; /*0x4cb6d3*/
  qmemcpy(v4, &a3, 4 * (vtable1_high >> 2)); /*0x4cb6d9*/
  v6 = &v4[4 * (vtable1_high >> 2)]; /*0x4cb6d9*/
  qmemcpy(v6, &a3 + 4 * (vtable1_high >> 2), vtable1_high & 3); /*0x4cb6e5*/
  this->? = 0; /*0x4cb6e8*/
  return (char *)this; /*0x4cb6e7*/
}
}
// 0x4CEFB0
namespace gamemd {
void FootClass_LandAtPosition(int a1, int a2, char a3, float a4, int a5, int a6)
{
  int **v6; // esi
  int *v7; // eax
  int v8; // eax
  int *v9; // edi
  unsigned int v10; // eax
  int v11; // ebp
  int v12; // ebx
  unsigned int *v13; // eax
  unsigned int *v14; // edi
  int *v15; // ecx
  void *NearbyCell; // eax
  int *v17; // eax
  int *v18; // eax
  int *v19; // eax
  int v20; // ecx
  int v21; // eax
  int *v22; // eax
  int v23; // ebx
  int v24; // edi
  int *v26; // ecx
  int *v27; // eax
  int v28; // ebx
  int *v29; // eax
  int v30; // ecx
  int v31; // eax
  int v32; // eax
  int *v33; // ecx
  int *v34; // eax
  float *Height; // eax
  char *v36; // ecx
  int *v37; // eax
  int v38; // eax
  double v39; // st7
  int v41; // eax
  int *v42; // ecx
  bool v43; // cc
  int v44; // eax
  int v45; // eax
  int *v46; // ecx
  int v47; // edx
  int *v48; // edi
  int v49; // eax
  int v50; // edx
  int v51; // eax
  int v52; // ecx
  int v53; // ecx
  int v55; // [esp+50h] [ebp-38h] BYREF
  int *v56; // [esp+54h] [ebp-34h] BYREF
  float v58; // [esp+5Ch] [ebp-2Ch] BYREF
  int v59; // [esp+60h] [ebp-28h]
  int v61; // [esp+68h] [ebp-20h]
  int v62; // [esp+6Ch] [ebp-1Ch]
  int v63[3]; // [esp+70h] [ebp-18h] BYREF
  unsigned int v64[3]; // [esp+7Ch] [ebp-Ch] BYREF

  v6 = (int **)(a1 + 12); /*0x4cefb6*/
  v59 = a1; /*0x4cefb9*/
  (*(void (__thiscall **)(unsigned int, float *))(**(unsigned int **)(a1 + 12) + 440))(*(unsigned int *)(a1 + 12), &v58); /*0x4cefc7*/
  v7 = *v6; /*0x4cefcd*/
  v55 = 0; /*0x4cefcf*/
  if ( v7 ) /*0x4cefd9*/
  {
    v8 = ComPtr::ReleaseAndSet(&v55, v6); /*0x4cefe0*/
    if ( v8 < 0 && v8 != -2147467262 ) /*0x4cefee*/
      WinAPI::Wrapper(v8); /*0x4ceff1*/
    if ( v55 && (*v6)[173] && (*v6)[191] && (*(int (__stdcall **)(int))(v55->q018)(v55) ) /*0x4cf017*/
      a3 = 0; /*0x4cf01e*/
  }
  if ( *v6 && (*(int (__thiscall **)(int *))(**v6 + 44))(*v6) == 2 )
  {
    if ( *v6 )
    {
      v9 = *v6; /*0x4cf033*/
      v10 = (*(int (__thiscall **)(int *))(*v9 + 44))(*v6) == 2 ? (unsigned int)v9 : 0;
    }
    else
    {
      v10 = 0; /*0x4cf039*/
    }
    if ( *(unsigned char *)(*(unsigned int *)(v10 + 1732) + 3595) ) /*0x4cf055*/
      a3 = 0; /*0x4cf05f*/
  }
  v11 = IDA_LODWORD(a4); /*0x4cf06c*/
  v62 = a6; /*0x4cf06e*/
  v12 = a5; /*0x4cf072*/
  IDA_LOWORD(v56) = IDA_SLODWORD(a4) / 256; /*0x4cf08c*/
  IDA_HIWORD(v56) = a5 / 256; /*0x4cf09f*/
  v13 = CellCoord::To_CellObj(&dword_87F7E8, (int16_t *)&v56); /*0x4cf0ac*/
  v14 = Cell::IsBridge(v13); /*0x4cf0b8*/
  if ( v14 && !*(unsigned char *)((*(int (__thiscall **)(int *))(**v6 + 132))(*v6) + 3367) ) /*0x4cf0cc*/
  {
    if ( Array::Contains(*v6, (int)v14) ) /*0x4cf0d9*/
    {
      v18 = (int *)(*(int (__thiscall **)(unsigned int *, int *, int *))(*v14 + 168))(v14, v63, *v6); /*0x4cf142*/
      v11 = *v18; /*0x4cf148*/
      v12 = v18[1]; /*0x4cf14a*/
      v62 = v18[2]; /*0x4cf150*/
    }
    else
    {
      v15 = *v6; /*0x4cf0e2*/
      v56 = *v6; /*0x4cf0e6*/
      if ( v56 && (*(int (__thiscall **)(int *))(*v15 + 44))(v15) == 2 ) /*0x4cf0f4*/
      {
        NearbyCell = InfantryClass::FindNearbyCell(v56, (int)v14); /*0x4cf0fb*/
        if ( NearbyCell ) /*0x4cf102*/
        {
          v17 = (int *)(*(int (__thiscall **)(void *, int *))(*(unsigned int *)NearbyCell + 72))(NearbyCell, v63); /*0x4cf125*/
          v11 = *v17; /*0x4cf128*/
          v12 = v17[1]; /*0x4cf12a*/
          v62 = v17[2]; /*0x4cf130*/
        }
        else
        {
          v11 = dword_8B3C78; /*0x4cf10a*/
          v12 = dword_8B3C7C; /*0x4cf110*/
          v62 = dword_8B3C80; /*0x4cf116*/
        }
      }
    }
  }
  (*(void (__thiscall **)(int *))(**v6 + 464))(*v6); /*0x4cf158*/
  v19 = (int *)(*(int (__thiscall **)(int *, int *))(**v6 + 72))(*v6, v63); /*0x4cf167*/
  v20 = *v19; /*0x4cf16a*/
  v21 = v19[1] - v12; /*0x4cf171*/
  IDA_LODWORD(a4) = v20 - v11; /*0x4cf173*/
  v61 = v21; /*0x4cf17b*/
  Vector::TwoDMagnitudeMath((int *)&a4); /*0x4cf17f*/
  v23 = (int)v22; /*0x4cf184*/
  v56 = v22; /*0x4cf18c*/
  if ( !v55 || !(*(int (__stdcall **)(int))(v55->q020)(v55) ) /*0x4cf197*/
  {
    v24 = IDA_LODWORD(a4); /*0x4cf1a2*/
    a5 = a5; /*0x4cf1a6*/
    v26 = *v6; /*0x4cf1ae*/
    a4 = a4; /*0x4cf1b4*/
    v61 = a5; /*0x4cf1b9*/
    v62 = a6; /*0x4cf1bd*/
    v27 = (int *)(*(int (__thiscall **)(int *, int *))(*v26 + 72))(v26, v63); /*0x4cf1c8*/
    v28 = *(unsigned int *)Cell::GetHeight(&v58, v27, (int *)&a4); /*0x4cf1d5*/
    if ( !v55 ) /*0x4cf1dd*/
      goto LABEL_32; /*0x4cf1dd*/
    if ( !(*(int (__stdcall **)(int))(v55->q018)(v55) ) /*0x4cf1e2*/
      goto LABEL_32; /*0x4cf1e2*/
    v29 = (int *)(*(int (__thiscall **)(int *, int *))(**v6 + 72))(*v6, v63); /*0x4cf1f2*/
    v30 = *v29; /*0x4cf1f5*/
    v31 = v29[1] - a5; /*0x4cf1fc*/
    IDA_LODWORD(a4) = v30 - v24; /*0x4cf1fe*/
    v61 = v31; /*0x4cf206*/
    Vector::TwoDMagnitudeMath((int *)&a4); /*0x4cf20a*/
    if ( v32 > 768 /*0x4cf248*/
      || (IDA_LOWORD(v58) = 0x2000,
          IDA_LOWORD(a4) = v28 - *(unsigned short *)ProgressTimer::GetValue((unsigned short *)*v6 + 452, &a4),
          (uint8_t)UnitClass::CompareCoordinateMagnitude(&a4)) )
    {
  LABEL_32:
      v63[2] = a6; /*0x4cf259*/
      v33 = *v6; /*0x4cf25d*/
      v63[0] = v24; /*0x4cf260*/
      v63[1] = a5; /*0x4cf264*/
      v34 = (int *)(*(int (__thiscall **)(int *, unsigned int *))(*v33 + 72))(v33, v64); /*0x4cf26f*/
      Height = (float *)Cell::GetHeight(&a4, v34, v63); /*0x4cf277*/
      v36 = (char *)(*v6 + 226); /*0x4cf285*/
      v58 = *Height; /*0x4cf28b*/
      FacingClass::Update(v36, &v58); /*0x4cf28f*/
    }
    v23 = (int)v56; /*0x4cf294*/
  }
  if ( v23 >= 256 || !a3 || *(unsigned char *)((*(int (__thiscall **)(int *))(**v6 + 132))(*v6) + 3367) ) /*0x4cf2bc*/
  {
    if ( !v55 || !(*(int (__stdcall **)(int))(v55->q020)(v55) ) /*0x4cf363*/
    {
      v38 = (*(int (__thiscall **)(int *, unsigned int *))(**v6 + 72))(*v6, v64); /*0x4cf373*/
      v58 = *(float *)v38; /*0x4cf37f*/
      v39 = Math::CalcAngle((double)*(int *)(v38 + 4) - (double)a5, (double)IDA_SLODWORD(a4) - (double)IDA_SLODWORD(v58)); /*0x4cf398*/
      IDA_LOWORD(a4) = Math::RoundToInt((v39 - 1.570796326794897) * -10430.06004058427); /*0x4cf3b1*/
      a4 = a4; /*0x4cf3ba*/
      v37 = (int *)&a4; /*0x4cf3be*/
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
    if ( !(*(int (__stdcall **)(int))(v55->q018)(v55) ) /*0x4cf2e7*/
    {
      if ( !v55 || !(*(int (__stdcall **)(int))(v55->q020)(v55) ) /*0x4cf2f9*/
        goto LABEL_43; /*0x4cf2fe*/
    }
    else
    {
  LABEL_44:
      IDA_LOWORD(a4) = 0; /*0x4cf320*/
      if ( !v55 /*0x4cf34a*/
        || (IDA_LOWORD(a4) = (*(uint16_t (__stdcall **)(int))(v55->u32_10)(v55) << 13, !v55)
        || !(*(int (__stdcall **)(int))(v55->q020)(v55) )
      {
        FacingClass::Update((char *)*v6 + 928, &a4); /*0x4cf356*/
      }
    }
  }
  LABEL_52:
  v59 = v59; /*0x4cf3d0*/
  if ( !*(unsigned char *)(v59 + 92) || v23 >= 768 ) /*0x4cf3e1*/
  {
    v41 = (*(int (__thiscall **)(int *))(**v6 + 132))(*v6); /*0x4cf402*/
    v42 = *v6; /*0x4cf410*/
    if ( *(unsigned char *)(v41 + 3221) ) /*0x4cf408*/
    {
      v43 = v23 < *(unsigned int *)((*(int (__thiscall **)(int *))(*v42 + 132))(v42) + 760); /*0x4cf426*/
      v44 = **v6; /*0x4cf42a*/
      if ( v43 ) /*0x4cf42c*/
      {
        v45 = (*(int (**)(void))(v44 + 132))(); /*0x4cf432*/
        v46 = *v6; /*0x4cf443*/
        v47 = **v6; /*0x4cf445*/
        a4 = (float)(v23 / *(unsigned int *)(v45 + 760)); /*0x4cf44f*/
        v48 = (int *)(*(int (__thiscall **)(int *))(v47 + 132))(v46); /*0x4cf45b*/
        v49 = (*(int (__thiscall **)(int *))(**v6 + 132))(*v6); /*0x4cf45f*/
        v59 = (*(int (__thiscall **)(int))(*(unsigned int *)v49 + 188))(v49) / 3; /*0x4cf481*/
        v50 = *v48; /*0x4cf485*/
        v58 = (double)v59 * (1.0 - a4); /*0x4cf497*/
        v59 = v48->vt_slot_188(); /*0x4cf4a1*/
        *(unsigned int *)(v59 + 56) = Math::RoundToInt((double)v59 * a4 + v58); /*0x4cf4b6*/
        goto LABEL_60; /*0x4cf4bb*/
      }
    }
    else
    {
      v44 = *v42; /*0x4cf4bd*/
    }
    v51 = (*(int (**)(void))(v44 + 132))(); /*0x4cf4bf*/
    *(unsigned int *)(v59 + 56) = (*(int (__thiscall **)(int))(*(unsigned int *)v51 + 188))(v51); /*0x4cf4cf*/
    goto LABEL_60; /*0x4cf4cf*/
  }
  *(unsigned int *)(v59 + 56) = *(unsigned int *)(v59 + 36) - Cell::GetGroundHeight((unsigned int *)(v59 + 28)); /*0x4cf3f6*/
  LABEL_60:
  if ( !*(unsigned char *)((*(int (__thiscall **)(int *))(**v6 + 132))(*v6) + 3367) /*0x4cf4e8*/
    && (uint8_t)DamageArea::CheckOccupancyEligibility(v59) )
  {
    if ( v23 >= 128 ) /*0x4cf4f7*/
    {
      if ( v23 >= 512 ) /*0x4cf52d*/
      {
        if ( v23 < 768 && a3 ) /*0x4cf551*/
        {
          *(unsigned int *)(v59 + 64) = 0; /*0x4cf553*/
          *(unsigned int *)(v59 + 68) = 1072168960; /*0x4cf556*/
        }
      }
      else if ( a3 ) /*0x4cf535*/
      {
        *(unsigned int *)(v59 + 64) = 0; /*0x4cf537*/
        *(unsigned int *)(v59 + 68) = 1071644672; /*0x4cf53a*/
      }
    }
    else
    {
      if ( a3 ) /*0x4cf4ff*/
      {
        *(unsigned int *)(v59 + 64) = 0; /*0x4cf501*/
        *(unsigned int *)(v59 + 68) = 0; /*0x4cf504*/
      }
      if ( !*(unsigned char *)(v59 + 92) && *(double *)(v59 + 72) < 0.05 ) /*0x4cf51c*/
        LocomotionClass::CheckBridgeBlock(v59); /*0x4cf520*/
    }
  }
  if ( *((unsigned char *)*v6 + 131) ) /*0x4cf55f*/
  {
    if ( !(uint8_t)House::IsHumanPlayer((void *)(*v6)[135]) ) /*0x4cf573*/
    {
      v52 = (int)(*v6 + 39); /*0x4cf57e*/
      a4 = *(float *)v52; /*0x4cf586*/
      a5 = *(unsigned int *)(v52 + 4); /*0x4cf592*/
      a6 = *(unsigned int *)(v52 + 8); /*0x4cf599*/
      if ( Cell::IsPassable(&a4) /*0x4cf5dd*/
        || (*(unsigned int *)dword_A8B230 & 0x1000) != 0
        && (v53 = (int)(*v6 + 39),
            a4 = *(float *)v53,
            a5 = *(unsigned int *)(v53 + 4),
            a6 = *(unsigned int *)(v53 + 8),
            Game::Stub3((int)&a4)) )
      {
        (*(void (__thiscall **)(int *))(**v6 + 336))(*v6); /*0x4cf5ec*/
      }
    }
  }
  if ( v55 ) /*0x4cf5f8*/
    (*(void (__stdcall **)(int))(v55->q008)(v55); /*0x4cf5fd*/
  return v23; /*0x4cf600*/
}
}
// 0x4C1B80
namespace gamemd {
void sub_4C1B80()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x4c1b8c*/
  dbl_8A0E38 = Math::Sqrt(v0 + v0); /*0x4c1b9e*/
}
} // namespace gamemd

// 0x4C1BB0
namespace gamemd {
void sub_4C1BB0()
{
  dbl_8A0EA8 = dbl_8A0E38 / 60.0; /*0x4c1bbc*/
}
} // namespace gamemd

// 0x4C1BD0
namespace gamemd {
void sub_4C1BD0()
{
  dbl_8A0E70 = 1.0 / dbl_8A0EA8; /*0x4c1bdc*/
}
} // namespace gamemd

// 0x4C1BF0
namespace gamemd {
void sub_4C1BF0()
{
  dbl_8A0E68 = 0.0174532925199433 * 45.0; /*0x4c1bfc*/
}
} // namespace gamemd

// 0x4C1C10
namespace gamemd {
void sub_4C1C10()
{
  dbl_8A0E40 = 0.0174532925199433 * 60.0; /*0x4c1c1c*/
}
} // namespace gamemd

// 0x4C1C30
namespace gamemd {
void sub_4C1C30()
{
  dbl_8A0E18 = 0.0174532925199433 * 90.0; /*0x4c1c3c*/
}
} // namespace gamemd

// 0x4C1C50
namespace gamemd {
long long sub_4C1C50()
{
  double v0; // st7
  int64_t result; // rax

  v0 = Math::Sin(dbl_8A0E18 - dbl_8A0E40); /*0x4c1c62*/
  result = Math::RoundToInt(v0 * dbl_8A0E38 * 0.5); /*0x4c1c76*/
  dword_8A0EB0 = result; /*0x4c1c7b*/
  return result; /*0x4c1c80*/
}
} // namespace gamemd

// 0x4C1C90
namespace gamemd {
void sub_4C1C90()
{
  dbl_8A0E48 = Math::ArcTan((double)dword_8A0EB0 * 0.00390625); /*0x4c1ca7*/
}
} // namespace gamemd

// 0x4C1CC0
namespace gamemd {
void sub_4C1CC0()
{
  dbl_8A0E60 = Math::ArcTan((double)(2 * dword_8A0EB0) / dbl_8A0E38); /*0x4c1ce2*/
}
} // namespace gamemd

// 0x4C1CF0
namespace gamemd {
long long sub_4C1CF0()
{
  int64_t result; // rax

  result = Math::RoundToInt((double)(4 * dword_8A0EB0) + 0.5); /*0x4c1d0b*/
  dword_8A0EA0 = result; /*0x4c1d10*/
  return result; /*0x4c1d16*/
}
} // namespace gamemd

// 0x4C1D20
namespace gamemd {
int sub_4C1D20()
{
  word_8A0E30 = 0; /*0x4c1d22*/
  word_8A0E32 = 0; /*0x4c1d28*/
  return 0; /*0x4c1d2e*/
}
} // namespace gamemd

// 0x4C1D30
namespace gamemd {
int sub_4C1D30()
{
  dword_8A0E50 = 0; /*0x4c1d32*/
  dword_8A0E54 = 0; /*0x4c1d37*/
  dword_8A0E58 = 0; /*0x4c1d3c*/
  return 0; /*0x4c1d41*/
}
} // namespace gamemd

// 0x4C1D50
namespace gamemd {
int sub_4C1D50()
{
  dword_8A0E80 = 0; /*0x4c1d55*/
  dword_8A0E78 = 128; /*0x4c1d5f*/
  dword_8A0E7C = 128; /*0x4c1d64*/
  return 128; /*0x4c1d69*/
}
} // namespace gamemd

// 0x4C1D70
namespace gamemd {
int sub_4C1D70()
{
  dword_8A0E20 = 0; /*0x4c1d72*/
  dword_8A0E24 = 0; /*0x4c1d77*/
  dword_8A0E28 = 0; /*0x4c1d7c*/
  dword_8A0E2C = 0; /*0x4c1d81*/
  return 0; /*0x4c1d86*/
}
} // namespace gamemd

// 0x4C1D90
namespace gamemd {
int sub_4C1D90()
{
  dword_8A0E8C = 0; /*0x4c1d97*/
  dword_8A0E90 = 0; /*0x4c1d9c*/
  byte_8A0E94 = 1; /*0x4c1da1*/
  byte_8A0E95 = 0; /*0x4c1da8*/
  dword_8A0E88 = (int)&DynamicVectorClass_EBolt___vftable; /*0x4c1dad*/
  dword_8A0E9C = 10; /*0x4c1db7*/
  dword_8A0E98 = 0; /*0x4c1dc1*/
  return atexit(sub_4C1DD0); /*0x4c1dcc*/
}
} // namespace gamemd

// 0x4C1DD0
namespace gamemd {
void sub_4C1DD0()
{
  dword_8A0E88 = (int)&VectorClass_EBolt___vftable; /*0x4c1dd8*/
  if ( dword_8A0E8C && byte_8A0E95 ) /*0x4c1dec*/
  {
    RA2_OPDEL(dword_8A0E8C); /*0x4c1def*/
    dword_8A0E8C = 0; /*0x4c1df7*/
  }
  byte_8A0E95 = 0; /*0x4c1dfd*/
  dword_8A0E90 = 0; /*0x4c1e03*/
}
} // namespace gamemd

// 0x4C2B40
namespace gamemd {
unsigned int * E4Recv_4C2B40::sub_4C2B40(unsigned int * a2)
{
  int v2; // eax
  unsigned int *v3; // ecx
  unsigned char v5[12]; // [esp+10h] [ebp-Ch] BYREF

  v2 = this->NeedsSaveOrLink; /*0x4c2b40*/
  if ( v2 ) /*0x4c2b4c*/
  {
    v3 = (unsigned int *)(*(int (__thiscall **)(int, unsigned char *, unsigned int, unsigned int, unsigned int, unsigned int))(v2->q0B0)( /*0x4c2b75*/
                     v2,
                     v5,
                     this->objectTypeFlags,
                     0,
                     0,
                     0);
    *a2 = *v3; /*0x4c2b7f*/
    a2[1] = v3[1]; /*0x4c2b84*/
    a2[2] = v3[2]; /*0x4c2b8a*/
    return a2; /*0x4c2b77*/
  }
  else
  {
    *a2 = dword_8A0E50; /*0x4c2ba6*/
    a2[1] = dword_8A0E54; /*0x4c2baf*/
    a2[2] = dword_8A0E58; /*0x4c2bb8*/
    return a2; /*0x4c2b97*/
  }
}
} // namespace gamemd

// 0x4C2C30
namespace gamemd {
Iostream_init * E4Recv_4C2C30::__0Iostream_init_QAE_XZ_3()
{
  return this; /*0x4c2c32*/
}
} // namespace gamemd

// 0x4C2FA0
namespace gamemd {
int sub_4C2FA0()
{
  dword_8A0EB8 = 0; /*0x4c2fa2*/
  dword_8A0EBC = 0; /*0x4c2fa7*/
  dword_8A0EC0 = 0; /*0x4c2fac*/
  dword_8A0EC4 = 0; /*0x4c2fb1*/
  return 0; /*0x4c2fb6*/
}
} // namespace gamemd

// 0x4C2FC0
namespace gamemd {
int * E4Recv_4C2FC0::sub_4C2FC0(DropListClass * aP1, ControlClass * aP2, int a4, DropListClass * aP4, ControlClass * aP5, ControlClass * aP6, ControlClass * aP7, int a9, int a10)
{
  int Instance; // eax
  int v13; // eax

  ControlClass::Construct(aP1, aP5, aP6, aP7, a9, 1, 0); /*0x4c2fe5*/
  aP4 = aP4; /*0x4c2ff6*/
  IDA_BYTE1(aP4) = IDA_BYTE1(aP4) & 0xFE; /*0x4c2ff8*/
  *(&this->q0041) = aP4; /*0x4c2ffc*/
  *this = (int)&EditClass_vftable; /*0x4c3004*/
  *(&this->q0042) = a10; /*0x4c300a*/
  *(&this->q0043) = (int)aP2; /*0x4c300d*/
  *(&this->q0044) = a4 - 1; /*0x4c3010*/
  *(&this->q0045) = wcslen(aP2); /*0x4c3018*/
  this->MarkDirty(); /*0x4c3022*/
  *(&this->q0046) = BuildingAnim::GetType(); /*0x4c302d*/
  if ( aP7 == -1 || a9 == -1 ) /*0x4c3035*/
  {
    Instance = TextRenderer::GetInstance(); /*0x4c3039*/
    if ( a9 == -1 ) /*0x4c3043*/
      this->q018 = *(unsigned int *)(Instance + 28) + 1; /*0x4c3049*/
    if ( aP7 == -1 ) /*0x4c304f*/
    {
      if ( wcslen((const wchar_t *)*(&this->q0043)) ) /*0x4c3055*/
      {
        v13 = Text::MeasureWidth(*(&this->q0043), 0); /*0x4c3069*/
        *(&this->q0047) = 0; /*0x4c3071*/
        this->Visible = v13 + 6; /*0x4c3078*/
        return this; /*0x4c3081*/
      }
      this->Visible = (*(&this->q0044) + 1) * Text::MeasureWidth((int)asc_820768, 0) + 2; /*0x4c309a*/
    }
  }
  *(&this->q0047) = 0; /*0x4c309d*/
  return this; /*0x4c307d*/
}
} // namespace gamemd

// 0x4C35A0
namespace gamemd {
void sub_4C35A0()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x4c35ac*/
  dbl_8A0EE8 = Math::Sqrt(v0 + v0); /*0x4c35be*/
}
} // namespace gamemd

// 0x4C35D0
namespace gamemd {
void sub_4C35D0()
{
  dbl_8A0F38 = dbl_8A0EE8 / 60.0; /*0x4c35dc*/
}
} // namespace gamemd

// 0x4C35F0
namespace gamemd {
void sub_4C35F0()
{
  dbl_8A0F20 = 1.0 / dbl_8A0F38; /*0x4c35fc*/
}
} // namespace gamemd

// 0x4C3610
namespace gamemd {
void sub_4C3610()
{
  dbl_8A0F18 = 0.0174532925199433 * 45.0; /*0x4c361c*/
}
} // namespace gamemd

// 0x4C3630
namespace gamemd {
void sub_4C3630()
{
  dbl_8A0EF0 = 0.0174532925199433 * 60.0; /*0x4c363c*/
}
} // namespace gamemd

// 0x4C3650
namespace gamemd {
void sub_4C3650()
{
  dbl_8A0EC8 = 0.0174532925199433 * 90.0; /*0x4c365c*/
}
} // namespace gamemd

// 0x4C3670
namespace gamemd {
long long sub_4C3670()
{
  double v0; // st7
  int64_t result; // rax

  v0 = Math::Sin(dbl_8A0EC8 - dbl_8A0EF0); /*0x4c3682*/
  result = Math::RoundToInt(v0 * dbl_8A0EE8 * 0.5); /*0x4c3696*/
  dword_8A0F40 = result; /*0x4c369b*/
  return result; /*0x4c36a0*/
}
} // namespace gamemd

// 0x4C36B0
namespace gamemd {
void sub_4C36B0()
{
  dbl_8A0EF8 = Math::ArcTan((double)dword_8A0F40 * 0.00390625); /*0x4c36c7*/
}
} // namespace gamemd

// 0x4C36E0
namespace gamemd {
void sub_4C36E0()
{
  dbl_8A0F10 = Math::ArcTan((double)(2 * dword_8A0F40) / dbl_8A0EE8); /*0x4c3702*/
}
} // namespace gamemd

// 0x4C3710
namespace gamemd {
long long sub_4C3710()
{
  int64_t result; // rax

  result = Math::RoundToInt((double)(4 * dword_8A0F40) + 0.5); /*0x4c372b*/
  dword_8A0F34 = result; /*0x4c3730*/
  return result; /*0x4c3736*/
}
} // namespace gamemd

// 0x4C3740
namespace gamemd {
int sub_4C3740()
{
  word_8A0EE0 = 0; /*0x4c3742*/
  word_8A0EE2 = 0; /*0x4c3748*/
  return 0; /*0x4c374e*/
}
} // namespace gamemd

// 0x4C3750
namespace gamemd {
int sub_4C3750()
{
  dword_8A0F00 = 0; /*0x4c3752*/
  dword_8A0F04 = 0; /*0x4c3757*/
  dword_8A0F08 = 0; /*0x4c375c*/
  return 0; /*0x4c3761*/
}
} // namespace gamemd

// 0x4C3770
namespace gamemd {
int sub_4C3770()
{
  dword_8A0F30 = 0; /*0x4c3775*/
  dword_8A0F28 = 128; /*0x4c377f*/
  dword_8A0F2C = 128; /*0x4c3784*/
  return 128; /*0x4c3789*/
}
} // namespace gamemd

// 0x4C3790
namespace gamemd {
int sub_4C3790()
{
  dword_8A0ED0 = 0; /*0x4c3792*/
  dword_8A0ED4 = 0; /*0x4c3797*/
  dword_8A0ED8 = 0; /*0x4c379c*/
  dword_8A0EDC = 0; /*0x4c37a1*/
  return 0; /*0x4c37a6*/
}
} // namespace gamemd

// 0x4C37B0
namespace gamemd {
int sub_4C37B0()
{
  dword_8A0F48 = 0; /*0x4c37b2*/
  dword_8A0F4C = 0; /*0x4c37b7*/
  dword_8A0F50 = 0; /*0x4c37bc*/
  dword_8A0F54 = 0; /*0x4c37c1*/
  return 0; /*0x4c37c6*/
}
} // namespace gamemd

// 0x4C37D0
namespace gamemd {
unsigned char * sub_4C37D0(int a1, unsigned char * a2, int a3, unsigned char a4)
{
  int v5; // eax
  int v6; // eax
  int v7; // ebx
  int v8; // ebp
  int i; // esi
  int v10; // eax
  unsigned char *v12; // [esp+4h] [ebp-10h]
  int16_t v13; // [esp+8h] [ebp-Ch] BYREF
  char v14; // [esp+Ah] [ebp-Ah]
  int v15; // [esp+Ch] [ebp-8h]
  unsigned char *v16; // [esp+10h] [ebp-4h]

  v16 = a2; /*0x4c37d4*/
  if ( !a2 ) /*0x4c37dc*/
    return 0; /*0x4c38c7*/
  v5 = 0; /*0x4c37e3*/
  v12 = a2; /*0x4c37e7*/
  v15 = 0; /*0x4c37eb*/
  do /*0x4c38b5*/
  {
    if ( v5 <= 240 && v5 ) /*0x4c37fc*/
    {
      v6 = a1 + 2 * (v5 % 256) + v5 % 256; /*0x4c3813*/
      v13 = *(unsigned short *)v6; /*0x4c3818*/
      v14 = *(unsigned char *)(v6 + 2); /*0x4c3820*/
      Color::Lerp((uint8_t *)&v13, a4, (uint8_t *)(a1 + 2 * (a3 % 256) + a3 % 256)); /*0x4c3845*/
      v7 = -1; /*0x4c384a*/
      v8 = 0; /*0x4c384d*/
      for ( i = 240; i < 255; ++i ) /*0x4c384f*/
      {
        v10 = Palette::CalcColorDistance((uint8_t *)(a1 + 2 * (i % 256) + i % 256), (uint8_t *)&v13); /*0x4c3870*/
        if ( v7 == -1 || v10 < v8 ) /*0x4c387c*/
        {
          v7 = i; /*0x4c387e*/
          v8 = v10; /*0x4c3880*/
        }
      }
      a2 = v16; /*0x4c388f*/
      *v12++ = v7; /*0x4c3893*/
      v5 = v15; /*0x4c389a*/
    }
    else
    {
      *v12++ = v5; /*0x4c38a4*/
    }
    v15 = ++v5; /*0x4c38b1*/
  }
  while ( v5 < 256 ); /*0x4c38b5*/
  return a2; /*0x4c38c0*/
}
} // namespace gamemd

// 0x4C38D0
namespace gamemd {
int E4Recv_4C38D0::sub_4C38D0()
{
  return ((unsigned int)&this->AbstractClass + 1) << 8; /*0x4c38d6*/
}
} // namespace gamemd

// 0x4C3A20
namespace gamemd {
char * sub_4C3A20(int a1, int a2, int a3, char * a4)
{
  char *v4; // ebp
  int v5; // ebx
  unsigned char *v6; // edi
  uint8_t *v7; // esi

  if ( !a3 || !a2 ) /*0x4c3a39*/
    return a4; /*0x4c3ab3*/
  v4 = a4; /*0x4c3a3b*/
  if ( a4 || (v4 = (char *)RA2_OPNEW((a3 + 1) << 8)) != 0 ) /*0x4c3a56*/
  {
    v5 = 0; /*0x4c3a62*/
    memset(v4, 0xFFu, 0x100u); /*0x4c3a64*/
    v6 = v4 + 256; /*0x4c3a68*/
    if ( a3 > 0 ) /*0x4c3a6e*/
    {
      v7 = (uint8_t *)(a2 + 1); /*0x4c3a74*/
      do /*0x4c3aa5*/
      {
        v4[*(v7 - 1)] = v5; /*0x4c3a80*/
        sub_4C37D0(a1, v6, *v7, v7[1]); /*0x4c3a90*/
        v6 += 256; /*0x4c3a95*/
        ++v5; /*0x4c3a9b*/
        v7 += 4; /*0x4c3aa0*/
      }
      while ( v5 < a3 ); /*0x4c3aa5*/
    }
  }
  return v4; /*0x4c3aa7*/
}
} // namespace gamemd

// 0x4C3AD0
namespace gamemd {
int sub_4C3AD0(char * a1, int a2, int a3, unsigned char a4)
{
  int v6; // esi
  uint8_t *v7; // ebp
  int v8; // eax

  if ( !a2 ) /*0x4c3ad8*/
    return 0; /*0x4c3b4a*/
  v6 = 0; /*0x4c3ae0*/
  v7 = (uint8_t *)&a1[2 * (a3 % 256) + a3 % 256]; /*0x4c3af3*/
  do /*0x4c3b3f*/
  {
    v8 = (int)&a1[2 * (v6 % 256) + v6 % 256]; /*0x4c3b0a*/
    IDA_LOWORD(a3) = *(unsigned short *)v8; /*0x4c3b0f*/
    IDA_BYTE2(a3) = *(unsigned char *)(v8 + 2); /*0x4c3b20*/
    Color::Lerp((uint8_t *)&a3, a4, v7); /*0x4c3b24*/
    *(unsigned char *)(v6 + a2) = Palette::FindClosestColor(a1, (int)&a3); /*0x4c3b35*/
    ++v6; /*0x4c3b38*/
  }
  while ( v6 < 256 ); /*0x4c3b3f*/
  return a2; /*0x4c3b45*/
}
} // namespace gamemd

// 0x4C3B60
namespace gamemd {
unsigned char * sub_4C3B60(char * a1, unsigned char * a2, int a3, int a4)
{
  uint8_t v6; // bp
  int v7; // eax
  int v8; // esi
  int v9; // eax

  v6 = a4; /*0x4c3b7d*/
  v7 = (int)&a1[2 * (a3 % 256) + a3 % 256]; /*0x4c3b81*/
  v8 = 1; /*0x4c3b83*/
  IDA_LOWORD(a3) = *(unsigned short *)v7; /*0x4c3b8b*/
  IDA_LOBYTE(v7) = *(unsigned char *)(v7 + 2); /*0x4c3b90*/
  *a2 = 0; /*0x4c3b93*/
  IDA_BYTE2(a3) = v7; /*0x4c3b96*/
  do /*0x4c3be3*/
  {
    v9 = (int)&a1[2 * (v8 % 256) + v8 % 256]; /*0x4c3bad*/
    IDA_LOWORD(a4) = *(unsigned short *)v9; /*0x4c3bbc*/
    IDA_BYTE2(a4) = *(unsigned char *)(v9 + 2); /*0x4c3bc4*/
    Color::Lerp((uint8_t *)&a4, v6, (uint8_t *)&a3); /*0x4c3bc8*/
    a2[v8++] = Palette::FindClosestColor(a1, (int)&a4); /*0x4c3bd9*/
  }
  while ( v8 < 256 ); /*0x4c3be3*/
  return a2; /*0x4c3be5*/
}
} // namespace gamemd

// 0x4C3BF0
namespace gamemd {
int sub_4C3BF0()
{
  dword_8A3760 = 0; /*0x4c3bf2*/
  dword_8A3764 = 0; /*0x4c3bf7*/
  dword_8A3768 = 0; /*0x4c3bfc*/
  dword_8A376C = 0; /*0x4c3c01*/
  return 0; /*0x4c3c06*/
}
} // namespace gamemd

// 0x4C3C10
namespace gamemd {
int sub_4C3C10()
{
  dword_8A3774 = 0; /*0x4c3c17*/
  dword_8A3778 = 0; /*0x4c3c1c*/
  byte_8A377C = 1; /*0x4c3c21*/
  byte_8A377D = 0; /*0x4c3c28*/
  dword_8A3770 = (int)&DynamicVectorClass_EgoClass___vftable; /*0x4c3c2d*/
  dword_8A3784 = 10; /*0x4c3c37*/
  dword_8A3780 = 0; /*0x4c3c41*/
  return atexit(sub_4C3C50); /*0x4c3c4c*/
}
} // namespace gamemd

// 0x4C3C50
namespace gamemd {
void sub_4C3C50()
{
  dword_8A3770 = (int)&VectorClass_EgoClass___vftable; /*0x4c3c58*/
  if ( dword_8A3774 && byte_8A377D ) /*0x4c3c6c*/
  {
    RA2_OPDEL(dword_8A3774); /*0x4c3c6f*/
    dword_8A3774 = 0; /*0x4c3c77*/
  }
  byte_8A377D = 0; /*0x4c3c7d*/
  dword_8A3778 = 0; /*0x4c3c83*/
}
} // namespace gamemd

// 0x4C3C90
namespace gamemd {
wchar_t ** E4Recv_4C3C90::sub_4C3C90(wchar_t * a2, wchar_t * a3, wchar_t * String, wchar_t * a5)
{
  size_t v6; // eax
  wchar_t *v7; // eax

  v7->u32_4 = a2; /*0x4c3ca5*/
  v7->ptr_8 = a3; /*0x4c3ca8*/
  v7->u32_30 = a5; /*0x4c3cab*/
  v6 = wcslen(String); /*0x4c3cae*/
  v7 = (wchar_t *)RA2_OPNEW(2 * v6 + 2); /*0x4c3cb8*/
  *v7 = v7; /*0x4c3cbf*/
  wcscpy(v7, String); /*0x4c3cc1*/
}
} // namespace gamemd

// 0x4C4D00
namespace gamemd {
void sub_4C4D00()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x4c4d0c*/
  dbl_8A3798 = Math::Sqrt(v0 + v0); /*0x4c4d1e*/
}
} // namespace gamemd

// 0x4C4D30
namespace gamemd {
void sub_4C4D30()
{
  dbl_8A3808 = dbl_8A3798 / 60.0; /*0x4c4d3c*/
}
} // namespace gamemd

// 0x4C4D50
namespace gamemd {
void sub_4C4D50()
{
  dbl_8A37F0 = 1.0 / dbl_8A3808; /*0x4c4d5c*/
}
} // namespace gamemd

// 0x4C4D70
namespace gamemd {
void sub_4C4D70()
{
  dbl_8A37E8 = 0.0174532925199433 * 45.0; /*0x4c4d7c*/
}
} // namespace gamemd

// 0x4C4D90
namespace gamemd {
void sub_4C4D90()
{
  dbl_8A37C0 = 0.0174532925199433 * 60.0; /*0x4c4d9c*/
}
} // namespace gamemd

// 0x4C4DB0
namespace gamemd {
void sub_4C4DB0()
{
  dbl_8A3788 = 0.0174532925199433 * 90.0; /*0x4c4dbc*/
}
} // namespace gamemd

// 0x4C4DD0
namespace gamemd {
long long sub_4C4DD0()
{
  double v0; // st7
  int64_t result; // rax

  v0 = Math::Sin(dbl_8A3788 - dbl_8A37C0); /*0x4c4de2*/
  result = Math::RoundToInt(v0 * dbl_8A3798 * 0.5); /*0x4c4df6*/
  dword_8A3810 = result; /*0x4c4dfb*/
  return result; /*0x4c4e00*/
}
} // namespace gamemd

// 0x4C4E10
namespace gamemd {
void sub_4C4E10()
{
  dbl_8A37C8 = Math::ArcTan((double)dword_8A3810 * 0.00390625); /*0x4c4e27*/
}
} // namespace gamemd

// 0x4C4E40
namespace gamemd {
void sub_4C4E40()
{
  dbl_8A37E0 = Math::ArcTan((double)(2 * dword_8A3810) / dbl_8A3798); /*0x4c4e62*/
}
} // namespace gamemd

// 0x4C4E70
namespace gamemd {
long long sub_4C4E70()
{
  int64_t result; // rax

  result = Math::RoundToInt((double)(4 * dword_8A3810) + 0.5); /*0x4c4e8b*/
  dword_8A3804 = result; /*0x4c4e90*/
  return result; /*0x4c4e96*/
}
} // namespace gamemd

// 0x4C4EA0
namespace gamemd {
int sub_4C4EA0()
{
  word_8A3790 = 0; /*0x4c4ea2*/
  word_8A3792 = 0; /*0x4c4ea8*/
  return 0; /*0x4c4eae*/
}
} // namespace gamemd

// 0x4C4EB0
namespace gamemd {
int sub_4C4EB0()
{
  dword_8A37D0 = 0; /*0x4c4eb2*/
  dword_8A37D4 = 0; /*0x4c4eb7*/
  dword_8A37D8 = 0; /*0x4c4ebc*/
  return 0; /*0x4c4ec1*/
}
} // namespace gamemd

// 0x4C4ED0
namespace gamemd {
int sub_4C4ED0()
{
  dword_8A3800 = 0; /*0x4c4ed5*/
  dword_8A37F8 = 128; /*0x4c4edf*/
  dword_8A37FC = 128; /*0x4c4ee4*/
  return 128; /*0x4c4ee9*/
}
} // namespace gamemd

// 0x4C4FC0
namespace gamemd {
int E4Recv_4C4FC0::sub_4C4FC0(int a2)
{
  int result; // eax
  void *vtable1; // ecx
  int v5; // eax
  int v6; // eax

  result = Power::TimerProcess((int)this->AbstractClass); /*0x4c4fcd*/
  vtable1 = this->M4; /*0x4c4fd2*/
  if ( vtable1 ) /*0x4c4fd7*/
  {
    v5 = (*(int (__thiscall **)(void *))(*(unsigned int *)vtable1 + 44))(vtable1); /*0x4c4fdb*/
    Power::TimerProcess(v5); /*0x4c4fe1*/
    v6 = (*(int (__stdcall **)(char *))(*((unsigned int *)this->? + 1) + 16))((char *)this->? + 4); /*0x4c4ff0*/
    return Power::TimerProcess(v6); /*0x4c4ff6*/
  }
  return result; /*0x4c4ffb*/
}
} // namespace gamemd

// 0x4C5000
namespace gamemd {
void sub_4C5000()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x4c500c*/
  dbl_8A3840 = Math::Sqrt(v0 + v0); /*0x4c501e*/
}
} // namespace gamemd

// 0x4C5030
namespace gamemd {
void sub_4C5030()
{
  dbl_8A38A8 = dbl_8A3840 / 60.0; /*0x4c503c*/
}
} // namespace gamemd

// 0x4C5050
namespace gamemd {
void sub_4C5050()
{
  dbl_8A3890 = 1.0 / dbl_8A38A8; /*0x4c505c*/
}
} // namespace gamemd

// 0x4C5070
namespace gamemd {
void sub_4C5070()
{
  dbl_8A3888 = 0.0174532925199433 * 45.0; /*0x4c507c*/
}
} // namespace gamemd

// 0x4C5090
namespace gamemd {
void sub_4C5090()
{
  dbl_8A3848 = 0.0174532925199433 * 60.0; /*0x4c509c*/
}
} // namespace gamemd

// 0x4C50B0
namespace gamemd {
void sub_4C50B0()
{
  dbl_8A3820 = 0.0174532925199433 * 90.0; /*0x4c50bc*/
}
} // namespace gamemd

// 0x4C50D0
namespace gamemd {
long long sub_4C50D0()
{
  double v0; // st7
  int64_t result; // rax

  v0 = Math::Sin(dbl_8A3820 - dbl_8A3848); /*0x4c50e2*/
  result = Math::RoundToInt(v0 * dbl_8A3840 * 0.5); /*0x4c50f6*/
  dword_8A38B0 = result; /*0x4c50fb*/
  return result; /*0x4c5100*/
}
} // namespace gamemd

// 0x4C5110
namespace gamemd {
void sub_4C5110()
{
  dbl_8A3850 = Math::ArcTan((double)dword_8A38B0 * 0.00390625); /*0x4c5127*/
}
} // namespace gamemd

// 0x4C5140
namespace gamemd {
void sub_4C5140()
{
  dbl_8A3868 = Math::ArcTan((double)(2 * dword_8A38B0) / dbl_8A3840); /*0x4c5162*/
}
} // namespace gamemd

// 0x4C5170
namespace gamemd {
long long sub_4C5170()
{
  int64_t result; // rax

  result = Math::RoundToInt((double)(4 * dword_8A38B0) + 0.5); /*0x4c518b*/
  dword_8A38A4 = result; /*0x4c5190*/
  return result; /*0x4c5196*/
}
} // namespace gamemd

// 0x4C51A0
namespace gamemd {
int sub_4C51A0()
{
  dword_8A3838 = 0; /*0x4c51a2*/
  return 0; /*0x4c51ae*/
}
} // namespace gamemd

// 0x4C51B0
namespace gamemd {
int sub_4C51B0()
{
  dword_8A3858 = 0; /*0x4c51b2*/
  dword_8A385C = 0; /*0x4c51b7*/
  dword_8A3860 = 0; /*0x4c51bc*/
  return 0; /*0x4c51c1*/
}
} // namespace gamemd

// 0x4C51D0
namespace gamemd {
int sub_4C51D0()
{
  dword_8A38A0 = 0; /*0x4c51d5*/
  dword_8A3898 = 128; /*0x4c51df*/
  dword_8A389C = 128; /*0x4c51e4*/
  return 128; /*0x4c51e9*/
}
} // namespace gamemd

// 0x4C51F0
namespace gamemd {
int sub_4C51F0()
{
  dword_8A3828 = 0; /*0x4c51f2*/
  dword_8A382C = 0; /*0x4c51f7*/
  dword_8A3830 = 0; /*0x4c51fc*/
  dword_8A3834 = 0; /*0x4c5201*/
  return 0; /*0x4c5206*/
}
} // namespace gamemd

// 0x4C5210
namespace gamemd {
int sub_4C5210()
{
  dword_8A3874 = 0; /*0x4c5217*/
  dword_8A3878 = 0; /*0x4c521c*/
  byte_8A387C = 1; /*0x4c5221*/
  byte_8A387D = 0; /*0x4c5228*/
  dword_8A3870 = (int)&DynamicVectorClass_EMPulseClass___vftable; /*0x4c522d*/
  dword_8A3884 = 10; /*0x4c5237*/
  dword_8A3880 = 0; /*0x4c5241*/
  return atexit(sub_4C5250); /*0x4c524c*/
}
} // namespace gamemd

// 0x4C5250
namespace gamemd {
void sub_4C5250()
{
  if ( (byte_8A3818 & 1) == 0 ) /*0x4c525a*/
  {
    dword_8A3870 = (int)&VectorClass_EMPulseClass___vftable; /*0x4c525e*/
    byte_8A3818 |= 1u; /*0x4c5271*/
    if ( dword_8A3874 ) /*0x4c5277*/
    {
      if ( byte_8A387D ) /*0x4c5281*/
      {
        RA2_OPDEL(dword_8A3874); /*0x4c5284*/
        dword_8A3874 = 0; /*0x4c528c*/
      }
    }
    byte_8A387D = 0; /*0x4c5296*/
    dword_8A3878 = 0; /*0x4c529d*/
  }
}
} // namespace gamemd

// 0x4C5470
namespace gamemd {
int sub_4C5470()
{
  int result; // eax

  for ( result = dword_8A3880; dword_8A3880; result = dword_8A3880 ) /*0x4c5477*/
  {
    if ( *(unsigned int *)dword_8A3874 ) /*0x4c547e*/
      (*(void (__thiscall **)(unsigned int, int))(**(unsigned int **)dword_8A3874 + 32))(*(unsigned int *)dword_8A3874, 1); /*0x4c5488*/
  }
  return result; /*0x4c5494*/
}
} // namespace gamemd

// 0x4C5EC0
namespace gamemd {
void nullsub_127()
{
  ; /*0x4c5ec0*/
}
} // namespace gamemd

// 0x4C5ED0
namespace gamemd {
void nullsub_128()
{
  ; /*0x4c5ed0*/
}
} // namespace gamemd

// 0x4C5EE0
namespace gamemd {
void sub_4C5EE0()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x4c5eec*/
  dbl_8A38D8 = Math::Sqrt(v0 + v0); /*0x4c5efe*/
}
} // namespace gamemd

// 0x4C5F10
namespace gamemd {
void sub_4C5F10()
{
  dbl_8A3970 = dbl_8A38D8 / 60.0; /*0x4c5f1c*/
}
} // namespace gamemd

// 0x4C5F30
namespace gamemd {
void sub_4C5F30()
{
  dbl_8A3958 = 1.0 / dbl_8A3970; /*0x4c5f3c*/
}
} // namespace gamemd

// 0x4C5F50
namespace gamemd {
void sub_4C5F50()
{
  dbl_8A3950 = 0.0174532925199433 * 45.0; /*0x4c5f5c*/
}
} // namespace gamemd

// 0x4C5F70
namespace gamemd {
void sub_4C5F70()
{
  dbl_8A3928 = 0.0174532925199433 * 60.0; /*0x4c5f7c*/
}
} // namespace gamemd

// 0x4C5F90
namespace gamemd {
void sub_4C5F90()
{
  dbl_8A38B8 = 0.0174532925199433 * 90.0; /*0x4c5f9c*/
}
} // namespace gamemd

// 0x4C5FB0
namespace gamemd {
long long sub_4C5FB0()
{
  double v0; // st7
  int64_t result; // rax

  v0 = Math::Sin(dbl_8A38B8 - dbl_8A3928); /*0x4c5fc2*/
  result = Math::RoundToInt(v0 * dbl_8A38D8 * 0.5); /*0x4c5fd6*/
  dword_8A3978 = result; /*0x4c5fdb*/
  return result; /*0x4c5fe0*/
}
} // namespace gamemd

// 0x4C5FF0
namespace gamemd {
void sub_4C5FF0()
{
  dbl_8A3930 = Math::ArcTan((double)dword_8A3978 * 0.00390625); /*0x4c6007*/
}
} // namespace gamemd

// 0x4C6020
namespace gamemd {
void sub_4C6020()
{
  dbl_8A3948 = Math::ArcTan((double)(2 * dword_8A3978) / dbl_8A38D8); /*0x4c6042*/
}
} // namespace gamemd

// 0x4C6050
namespace gamemd {
long long sub_4C6050()
{
  int64_t result; // rax

  result = Math::RoundToInt((double)(4 * dword_8A3978) + 0.5); /*0x4c606b*/
  dword_8A396C = result; /*0x4c6070*/
  return result; /*0x4c6076*/
}
} // namespace gamemd

// 0x4C6080
namespace gamemd {
int sub_4C6080()
{
  word_8A38D0 = 0; /*0x4c6082*/
  word_8A38D2 = 0; /*0x4c6088*/
  return 0; /*0x4c608e*/
}
} // namespace gamemd

// 0x4C6090
namespace gamemd {
int sub_4C6090()
{
  dword_8A3938 = 0; /*0x4c6092*/
  dword_8A393C = 0; /*0x4c6097*/
  dword_8A3940 = 0; /*0x4c609c*/
  return 0; /*0x4c60a1*/
}
} // namespace gamemd

// 0x4C60B0
namespace gamemd {
int sub_4C60B0()
{
  dword_8A3968 = 0; /*0x4c60b5*/
  dword_8A3960 = 128; /*0x4c60bf*/
  dword_8A3964 = 128; /*0x4c60c4*/
  return 128; /*0x4c60c9*/
}
} // namespace gamemd

// 0x4C60D0
namespace gamemd {
int sub_4C60D0()
{
  dword_8A38C0 = 0; /*0x4c60d2*/
  dword_8A38C4 = 0; /*0x4c60d7*/
  dword_8A38C8 = 0; /*0x4c60dc*/
  dword_8A38CC = 0; /*0x4c60e1*/
  return 0; /*0x4c60e6*/
}
} // namespace gamemd

// 0x4C60F0
namespace gamemd {
int sub_4C60F0()
{
  dword_8A3914 = 0; /*0x4c60fd*/
  dword_8A3918 = 0; /*0x4c6102*/
  dword_8A391C = 1; /*0x4c6107*/
  word_8A3920 = 0; /*0x4c6111*/
  memset(&stru_8A38E0, 0, 0x30u); /*0x4c6117*/
  unk_8A3910 = 0; /*0x4c611e*/
  return atexit(nullsub_129); /*0x4c6128*/
}
} // namespace gamemd

// 0x4C6130
namespace gamemd {
void nullsub_129()
{
  ; /*0x4c6130*/
}
} // namespace gamemd

// 0x4C6170
namespace gamemd {
void nullsub_130()
{
  ; /*0x4c6170*/
}
} // namespace gamemd

// 0x4C6360
namespace gamemd {
void sub_4C6360()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x4c636c*/
  dbl_8A39A0 = Math::Sqrt(v0 + v0); /*0x4c637e*/
}
} // namespace gamemd

// 0x4C6390
namespace gamemd {
void sub_4C6390()
{
  dbl_8A39F0 = dbl_8A39A0 / 60.0; /*0x4c639c*/
}
} // namespace gamemd

// 0x4C63B0
namespace gamemd {
void sub_4C63B0()
{
  dbl_8A39D8 = 1.0 / dbl_8A39F0; /*0x4c63bc*/
}
} // namespace gamemd

// 0x4C63D0
namespace gamemd {
void sub_4C63D0()
{
  dbl_8A39D0 = 0.0174532925199433 * 45.0; /*0x4c63dc*/
}
} // namespace gamemd

// 0x4C63F0
namespace gamemd {
void sub_4C63F0()
{
  dbl_8A39A8 = 0.0174532925199433 * 60.0; /*0x4c63fc*/
}
} // namespace gamemd

// 0x4C6410
namespace gamemd {
void sub_4C6410()
{
  dbl_8A3980 = 0.0174532925199433 * 90.0; /*0x4c641c*/
}
} // namespace gamemd

// 0x4C6430
namespace gamemd {
long long sub_4C6430()
{
  double v0; // st7
  int64_t result; // rax

  v0 = Math::Sin(dbl_8A3980 - dbl_8A39A8); /*0x4c6442*/
  result = Math::RoundToInt(v0 * dbl_8A39A0 * 0.5); /*0x4c6456*/
  dword_8A39F8 = result; /*0x4c645b*/
  return result; /*0x4c6460*/
}
} // namespace gamemd

// 0x4C6470
namespace gamemd {
void sub_4C6470()
{
  dbl_8A39B0 = Math::ArcTan((double)dword_8A39F8 * 0.00390625); /*0x4c6487*/
}
} // namespace gamemd

// 0x4C64A0
namespace gamemd {
void sub_4C64A0()
{
  dbl_8A39C8 = Math::ArcTan((double)(2 * dword_8A39F8) / dbl_8A39A0); /*0x4c64c2*/
}
} // namespace gamemd

// 0x4C64D0
namespace gamemd {
long long sub_4C64D0()
{
  int64_t result; // rax

  result = Math::RoundToInt((double)(4 * dword_8A39F8) + 0.5); /*0x4c64eb*/
  dword_8A39EC = result; /*0x4c64f0*/
  return result; /*0x4c64f6*/
}
} // namespace gamemd

// 0x4C6500
namespace gamemd {
int sub_4C6500()
{
  dword_8A3998 = 0; /*0x4c6502*/
  return 0; /*0x4c650e*/
}
} // namespace gamemd

// 0x4C6510
namespace gamemd {
int sub_4C6510()
{
  dword_8A39B8 = 0; /*0x4c6512*/
  dword_8A39BC = 0; /*0x4c6517*/
  dword_8A39C0 = 0; /*0x4c651c*/
  return 0; /*0x4c6521*/
}
} // namespace gamemd

// 0x4C6530
namespace gamemd {
int sub_4C6530()
{
  dword_8A39E8 = 0; /*0x4c6535*/
  dword_8A39E0 = 128; /*0x4c653f*/
  dword_8A39E4 = 128; /*0x4c6544*/
  return 128; /*0x4c6549*/
}
} // namespace gamemd

// 0x4C6550
namespace gamemd {
int sub_4C6550()
{
  dword_8A3988 = 0; /*0x4c6552*/
  dword_8A398C = 0; /*0x4c6557*/
  dword_8A3990 = 0; /*0x4c655c*/
  dword_8A3994 = 0; /*0x4c6561*/
  return 0; /*0x4c6566*/
}
} // namespace gamemd

// 0x4C68E0
namespace gamemd {
char * AnimClass::sub_4C68E0(int a2, int a3, IUnknown * aP3, IUnknown * aP4, int a6, char a7, int a8, char a9, int a10, int a11)
{
  Debug::Log(); /*0x4c68e8*/
  if ( a2 < 0 ) /*0x4c68f6*/
  {
    *(unsigned int *)&this->vtable3 = -1; /*0x4c6952*/
    *this = 0; /*0x4c6956*/
    *(unsigned int *)&this->vtable4 = g_CurrentFrame; /*0x4c6961*/
    return this; /*0x4c695f*/
  }
  else
  {
    *(unsigned int *)&this->vtable3 = a2; /*0x4c6900*/
    *this = 5; /*0x4c6906*/
    this->referenceCount = a3; /*0x4c6909*/
    *(&this->vtable21) = aP3; /*0x4c690e*/
    *(&this->vtable22) = aP4; /*0x4c6919*/
    this->q034 = a6; /*0x4c6920*/
    *(&this->vtable27) = a7; /*0x4c6926*/
    this->q048 = a8; /*0x4c6930*/
    *(unsigned int *)&this->q06C = a11; /*0x4c6937*/
    *(&this->vtable32) = a9; /*0x4c693a*/
    this->q05C = a10; /*0x4c6941*/
    *(unsigned int *)&this->vtable4 = g_CurrentFrame; /*0x4c6949*/
    return this; /*0x4c694c*/
  }
}
} // namespace gamemd

// 0x4C69E0
namespace gamemd {
char * E4Recv_4C69E0::sub_4C69E0(int a2, char a3, int a4, unsigned short * a5)
{
  Debug::Log(); /*0x4c69fc*/
  if ( a2 < 0 ) /*0x4c6a0a*/
  {
    IDA_BYTE2(this->AbstractClass) = -1; /*0x4c6a48*/
    IDA_LOBYTE(this->AbstractClass) = 0; /*0x4c6a4c*/
    *(void **)((char *)&this->AbstractClass + 3) = *(void **)&stru_A8EB00.?[416]; /*0x4c6a57*/
    return (char *)this; /*0x4c6a55*/
  }
  else
  {
    IDA_BYTE2(this->AbstractClass) = a2; /*0x4c6a10*/
    IDA_LOBYTE(this->AbstractClass) = a3; /*0x4c6a17*/
    *(void **)((char *)&this->M7 + 3) = (void *)a4; /*0x4c6a19*/
    *(void **)((char *)&this->M11 + 3) = (void *)-1; /*0x4c6a1c*/
    *(void **)((char *)&this->M15 + 3) = 0; /*0x4c6a23*/
    *(unsigned short *)((char *)&this->M19 + 3) = *a5; /*0x4c6a2d*/
    *(unsigned short *)((char *)&this->? + 1) = a5[1]; /*0x4c6a35*/
    *(void **)((char *)&this->AbstractClass + 3) = *(void **)&stru_A8EB00.?[416]; /*0x4c6a3e*/
    return (char *)this; /*0x4c6a41*/
  }
}
} // namespace gamemd

// 0x4C6A60
namespace gamemd {
char * E4Recv_4C6A60::sub_4C6A60(int a2, char a3, int a4, int a5, unsigned short * a6)
{
  Debug::Log(); /*0x4c6a7c*/
  if ( a2 < 0 ) /*0x4c6a8a*/
  {
    IDA_BYTE2(this->AbstractClass) = -1; /*0x4c6ac8*/
    IDA_LOBYTE(this->AbstractClass) = 0; /*0x4c6acc*/
    *(void **)((char *)&this->AbstractClass + 3) = *(void **)&stru_A8EB00.?[416]; /*0x4c6ad7*/
    return (char *)this; /*0x4c6ad5*/
  }
  else
  {
    IDA_BYTE2(this->AbstractClass) = a2; /*0x4c6a90*/
    IDA_LOBYTE(this->AbstractClass) = a3; /*0x4c6a97*/
    *(void **)((char *)&this->M11 + 3) = (void *)a5; /*0x4c6a99*/
    *(void **)((char *)&this->M7 + 3) = (void *)a4; /*0x4c6aa0*/
    *(void **)((char *)&this->M15 + 3) = 0; /*0x4c6aa3*/
    *(unsigned short *)((char *)&this->M19 + 3) = *a6; /*0x4c6aad*/
    *(unsigned short *)((char *)&this->? + 1) = a6[1]; /*0x4c6ab5*/
    *(void **)((char *)&this->AbstractClass + 3) = *(void **)&stru_A8EB00.?[416]; /*0x4c6abe*/
    return (char *)this; /*0x4c6ac1*/
  }
}
} // namespace gamemd

// 0x4C6BE0
namespace gamemd {
char * E4Recv_4C6BE0::sub_4C6BE0(int a2, char a3, int a4, int a5)
{
  Debug::Log(); /*0x4c6bfc*/
  if ( a2 < 0 ) /*0x4c6c0a*/
  {
    IDA_BYTE2(this->AbstractClass) = -1; /*0x4c6c2f*/
    IDA_LOBYTE(this->AbstractClass) = 0; /*0x4c6c33*/
  }
  else
  {
    IDA_BYTE2(this->AbstractClass) = a2; /*0x4c6c10*/
    IDA_LOBYTE(this->AbstractClass) = a3; /*0x4c6c17*/
    *(void **)((char *)&this->M7 + 3) = (void *)a4; /*0x4c6c19*/
    *(void **)((char *)&this->M11 + 3) = (void *)a5; /*0x4c6c1c*/
  }
  *(void **)((char *)&this->AbstractClass + 3) = *(void **)&stru_A8EB00.?[416]; /*0x4c6c27*/
  return (char *)this; /*0x4c6c2a*/
}
} // namespace gamemd

// 0x4C81D0
namespace gamemd {
int sub_4C81D0()
{
  *(unsigned int *)&Buffer[0x10000] = 0; /*0x4c81d2*/
  *(unsigned int *)&Buffer[65540] = 0; /*0x4c81d7*/
  *(unsigned int *)&Buffer[65544] = 0; /*0x4c81dc*/
  *(unsigned int *)&Buffer[65548] = 0; /*0x4c81e1*/
  return 0; /*0x4c81e6*/
}
} // namespace gamemd

// 0x4C81F0
namespace gamemd {
void sub_4C81F0()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x4c81fc*/
  *(double *)&Buffer[65560] = Math::Sqrt(v0 + v0); /*0x4c820e*/
}
} // namespace gamemd

// 0x4C8220
namespace gamemd {
void sub_4C8220()
{
  *(double *)&Buffer[65640] = *(double *)&Buffer[65560] / 60.0; /*0x4c822c*/
}
} // namespace gamemd

// 0x4C8240
namespace gamemd {
void sub_4C8240()
{
  *(double *)&Buffer[65616] = 1.0 / *(double *)&Buffer[65640]; /*0x4c824c*/
}
} // namespace gamemd

// 0x4C8260
namespace gamemd {
void sub_4C8260()
{
  *(double *)&Buffer[65608] = 0.0174532925199433 * 45.0; /*0x4c826c*/
}
} // namespace gamemd

// 0x4C8280
namespace gamemd {
void sub_4C8280()
{
  *(double *)&Buffer[65568] = 0.0174532925199433 * 60.0; /*0x4c828c*/
}
} // namespace gamemd

// 0x4C82A0
namespace gamemd {
void sub_4C82A0()
{
  dbl_8A3A00 = 0.0174532925199433 * 90.0; /*0x4c82ac*/
}
} // namespace gamemd

// 0x4C82C0
namespace gamemd {
long long sub_4C82C0()
{
  double v0; // st7
  int64_t result; // rax

  v0 = Math::Sin(dbl_8A3A00 - *(double *)&Buffer[65568]); /*0x4c82d2*/
  result = Math::RoundToInt(v0 * *(double *)&Buffer[65560] * 0.5); /*0x4c82e6*/
  *(unsigned int *)&Buffer[65648] = result; /*0x4c82eb*/
  return result; /*0x4c82f0*/
}
} // namespace gamemd

// 0x4C8300
namespace gamemd {
void sub_4C8300()
{
  *(double *)&Buffer[65576] = Math::ArcTan((double)*(int *)&Buffer[65648] * 0.00390625); /*0x4c8317*/
}
} // namespace gamemd

// 0x4C8330
namespace gamemd {
void sub_4C8330()
{
  *(double *)&Buffer[65600] = Math::ArcTan((double)(2 * *(unsigned int *)&Buffer[65648]) / *(double *)&Buffer[65560]); /*0x4c8352*/
}
} // namespace gamemd

// 0x4C8360
namespace gamemd {
long long sub_4C8360()
{
  int64_t result; // rax

  result = Math::RoundToInt((double)(4 * *(unsigned int *)&Buffer[65648]) + 0.5); /*0x4c837b*/
  *(unsigned int *)&Buffer[65636] = result; /*0x4c8380*/
  return result; /*0x4c8386*/
}
} // namespace gamemd

// 0x4C8390
namespace gamemd {
int sub_4C8390()
{
  *(unsigned short *)&Buffer[65552] = 0; /*0x4c8392*/
  *(unsigned short *)&Buffer[65554] = 0; /*0x4c8398*/
  return 0; /*0x4c839e*/
}
} // namespace gamemd

// 0x4C83A0
namespace gamemd {
int sub_4C83A0()
{
  *(unsigned int *)&Buffer[65584] = 0; /*0x4c83a2*/
  *(unsigned int *)&Buffer[65588] = 0; /*0x4c83a7*/
  *(unsigned int *)&Buffer[65592] = 0; /*0x4c83ac*/
  return 0; /*0x4c83b1*/
}
} // namespace gamemd

// 0x4C83C0
namespace gamemd {
int sub_4C83C0()
{
  *(unsigned int *)&Buffer[65632] = 0; /*0x4c83c5*/
  *(unsigned int *)&Buffer[65624] = 128; /*0x4c83cf*/
  *(unsigned int *)&Buffer[65628] = 128; /*0x4c83d4*/
  return 128; /*0x4c83d9*/
}
} // namespace gamemd

// 0x4C84E0
namespace gamemd {
int sub_4C84E0()
{
  const DLGTEMPLATE *Resource; // esi
  INT_PTR v1; // esi

  WinMain_Write_53E6B0(); /*0x4c84e2*/
  switch ( dword_820E5C ) /*0x4c84ed*/
  {
    case 1: /*0x4c84ed*/
      if ( !AllocConsole() ) /*0x4c85a0*/
      {
        FreeConsole(); /*0x4c85ac*/
        AllocConsole(); /*0x4c85ae*/
      }
      _cwprintf(aErrorRecursive); /*0x4c85b5*/
      Sleep(0xFA0u); /*0x4c85c2*/
      sub_7DD1D7(); /*0x4c85c8*/
      FreeConsole(); /*0x4c85cd*/
      return 1153; /*0x4c85cd*/
    case 2: /*0x4c84ed*/
      return 1153; /*0x4c85d0*/
    case 3: /*0x4c84ed*/
      ExitProcess(0); /*0x4c858c*/
  }
  ShowCursor(1); /*0x4c8509*/
  Resource = (const DLGTEMPLATE *)FindResource(0xF7u, (const CHAR *)5); /*0x4c851a*/
  Debug::Log(); /*0x4c8525*/
  if ( Resource ) /*0x4c851e*/
    v1 = DialogBoxIndirectParamA(g_hInstance, Resource, g_hWnd, DialogFunc, 0); /*0x4c8548*/
  else
    v1 = DialogBoxParamA(g_hInstance, (LPCSTR)0xF7, g_hWnd, DialogFunc, 0); /*0x4c857f*/
  ShowCursor(0); /*0x4c854c*/
  return v1; /*0x4c8550*/
}
} // namespace gamemd

// 0x4C9160
namespace gamemd {
char sub_4C9160()
{
  char v0; // bl
  unsigned int v2[22]; // [esp+4h] [ebp-6Ch] BYREF
  unsigned char v3[12]; // [esp+5Ch] [ebp-14h] BYREF
  int v4; // [esp+68h] [ebp-8h]

  CCFileClass::Construct(v2, aExpandDat); /*0x4c916d*/
  v0 = CCFileClass::Open(v2, 0); /*0x4c9181*/
  v2[0] = (void*)&CCFileClass_vftable; /*0x4c9183*/
  v4 = 0; /*0x4c918b*/
  Vector::Clear((int)v3); /*0x4c9193*/
  v2[0] = (unsigned int)&off_7E1668; /*0x4c919c*/
  BufferIOFileClass::Dtor(v2); /*0x4c91a4*/
  return v0; /*0x4c91ab*/
}
} // namespace gamemd

// 0x4C91B0
namespace gamemd {
char _do_always_noconv_codecvt_base_std__MBE_NXZ_5()
{
  return 1; /*0x4c91b2*/
}
} // namespace gamemd

// 0x4C96A0
namespace gamemd {
void sub_4C96A0()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x4c96ac*/
  dbl_8B3AD0 = Math::Sqrt(v0 + v0); /*0x4c96be*/
}
} // namespace gamemd

// 0x4C96D0
namespace gamemd {
void sub_4C96D0()
{
  dbl_8B3B20 = dbl_8B3AD0 / 60.0; /*0x4c96dc*/
}
} // namespace gamemd

// 0x4C96F0
namespace gamemd {
void sub_4C96F0()
{
  dbl_8B3B08 = 1.0 / dbl_8B3B20; /*0x4c96fc*/
}
} // namespace gamemd

// 0x4C9710
namespace gamemd {
void sub_4C9710()
{
  dbl_8B3B00 = 0.0174532925199433 * 45.0; /*0x4c971c*/
}
} // namespace gamemd

// 0x4C9730
namespace gamemd {
void sub_4C9730()
{
  dbl_8B3AD8 = 0.0174532925199433 * 60.0; /*0x4c973c*/
}
} // namespace gamemd

// 0x4C9750
namespace gamemd {
void sub_4C9750()
{
  dbl_8B3AB0 = 0.0174532925199433 * 90.0; /*0x4c975c*/
}
} // namespace gamemd

// 0x4C9770
namespace gamemd {
long long sub_4C9770()
{
  double v0; // st7
  int64_t result; // rax

  v0 = Math::Sin(dbl_8B3AB0 - dbl_8B3AD8); /*0x4c9782*/
  result = Math::RoundToInt(v0 * dbl_8B3AD0 * 0.5); /*0x4c9796*/
  dword_8B3B28 = result; /*0x4c979b*/
  return result; /*0x4c97a0*/
}
} // namespace gamemd

// 0x4C97B0
namespace gamemd {
void sub_4C97B0()
{
  dbl_8B3AE0 = Math::ArcTan((double)dword_8B3B28 * 0.00390625); /*0x4c97c7*/
}
} // namespace gamemd

// 0x4C97E0
namespace gamemd {
void sub_4C97E0()
{
  dbl_8B3AF8 = Math::ArcTan((double)(2 * dword_8B3B28) / dbl_8B3AD0); /*0x4c9802*/
}
} // namespace gamemd

// 0x4C9810
namespace gamemd {
long long sub_4C9810()
{
  int64_t result; // rax

  result = Math::RoundToInt((double)(4 * dword_8B3B28) + 0.5); /*0x4c982b*/
  dword_8B3B1C = result; /*0x4c9830*/
  return result; /*0x4c9836*/
}
} // namespace gamemd

// 0x4C9840
namespace gamemd {
int sub_4C9840()
{
  word_8B3AC8 = 0; /*0x4c9842*/
  word_8B3ACA = 0; /*0x4c9848*/
  return 0; /*0x4c984e*/
}
} // namespace gamemd

// 0x4C9850
namespace gamemd {
int sub_4C9850()
{
  dword_8B3AE8 = 0; /*0x4c9852*/
  dword_8B3AEC = 0; /*0x4c9857*/
  dword_8B3AF0 = 0; /*0x4c985c*/
  return 0; /*0x4c9861*/
}
} // namespace gamemd

// 0x4C9870
namespace gamemd {
int sub_4C9870()
{
  dword_8B3B18 = 0; /*0x4c9875*/
  dword_8B3B10 = 128; /*0x4c987f*/
  dword_8B3B14 = 128; /*0x4c9884*/
  return 128; /*0x4c9889*/
}
} // namespace gamemd

// 0x4C9890
namespace gamemd {
int sub_4C9890()
{
  dword_8B3AB8 = 0; /*0x4c9892*/
  dword_8B3ABC = 0; /*0x4c9897*/
  dword_8B3AC0 = 0; /*0x4c989c*/
  dword_8B3AC4 = 0; /*0x4c98a1*/
  return 0; /*0x4c98a6*/
}
} // namespace gamemd

// 0x4CAEF0
namespace gamemd {
void nullsub_131()
{
  ; /*0x4caef0*/
}
} // namespace gamemd

// 0x4CAF00
namespace gamemd {
void nullsub_132()
{
  ; /*0x4caf00*/
}
} // namespace gamemd

// 0x4CAF10
namespace gamemd {
void nullsub_133()
{
  ; /*0x4caf10*/
}
} // namespace gamemd

// 0x4CB1A0
namespace gamemd {
double ComputeChronosphereDistortion(float a1)
{
  int v1; // eax
  signed int v2; // eax

  IDA_LOWORD(v1) = Math::RoundToInt(flt_8223B4 * a1); /*0x4cb1aa*/
  v2 = (v1 / 2) & 0x80001FFF; /*0x4cb1b9*/
  if ( v2 >= 0 ) /*0x4cb1be*/
    return v2 + 2048; /*0x4cb1be*/
  v2 = (((unsigned short)v2 - 1) | 0xFFFFE000) + 1; /*0x4cb1c6*/
  if ( v2 >= 0 ) /*0x4cb1c7*/
    return v2 + 2048; /*0x4cb1d0*/
  else
    return v2 + 10240; /*0x4cb1c9*/
}
} // namespace gamemd

// 0x4CB3D0
namespace gamemd {
double globalHelper_0CB3D0(AbstractClass * aP0, AbstractClass * aP1)
{
  double v3; // st7
  char v4; // c3
  double result; // st7
  int v6; // eax

  v3 = aP0; /*0x4cb3da*/
  if ( v4 ) /*0x4cb3e3*/
  {
    if ( v3 == 0.0 ) /*0x4cb3f0*/
    {
      return 0.0; /*0x4cb3f2*/
    }
    else if ( aP0 <= 0.0 ) /*0x4cb40a*/
    {
      return -1.5707964; /*0x4cb415*/
    }
    else
    {
      return 1.5707964; /*0x4cb40c*/
    }
  }
  else
  {
    v6 = abs32(Math::RoundToInt(v3 / aP1 / flt_8650B8)); /*0x4cb430*/
    if ( v6 >= 4097 ) /*0x4cb437*/
      result = 1.5707964; /*0x4cb442*/
    else
      result = flt_8610B4[v6]; /*0x4cb439*/
    if ( aP1 < 0.0 ) /*0x4cb457*/
      result = 3.141592653589793 - result; /*0x4cb459*/
    if ( aP0 < 0.0 ) /*0x4cb46e*/
      return -result; /*0x4cb470*/
  }
  return result; /*0x4cb3f8*/
}
} // namespace gamemd

// 0x4CB8B0
namespace gamemd {
u_short E4Recv_4CB8B0::sub_4CB8B0()
{
  int16_t v2; // ax
  u_short vtable1_high; // cx
  int result; // eax

  switch ( IDA_LOWORD(this->?) ) /*0x4cb8c1*/
  {
    case 3: /*0x4cb8c1*/
    case 4: /*0x4cb8c1*/
      *(unsigned short *)this->ptr_8 = htons(*(unsigned short *)this->ptr_8); /*0x4cb8d7*/
      break; /*0x4cb8da*/
    case 5: /*0x4cb8c1*/
    case 6: /*0x4cb8c1*/
      *(unsigned int *)this->ptr_8 = htonl(*(unsigned int *)this->ptr_8); /*0x4cb8ea*/
      break; /*0x4cb8ea*/
    default:
      break;
  }
  v2 = htons((u_short)this->M4); /*0x4cb8ec*/
  vtable1_high = IDA_HIWORD(this->M6); /*0x4cb8f6*/
  IDA_LOWORD(this->M4) = v2; /*0x4cb8fa*/
  result = htons(vtable1_high); /*0x4cb8ff*/
  IDA_HIWORD(this->M6) = result; /*0x4cb904*/
  return result; /*0x4cb908*/
}
} // namespace gamemd

// 0x4CB990
namespace gamemd {
int sub_4CB990()
{
  dword_8B3B38 = 0; /*0x4cb992*/
  dword_8B3B3C = 0; /*0x4cb997*/
  dword_8B3B40 = 0; /*0x4cb99c*/
  dword_8B3B44 = 0; /*0x4cb9a1*/
  return 0; /*0x4cb9a6*/
}
} // namespace gamemd

// 0x4CB9B0
namespace gamemd {
void sub_4CB9B0()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x4cb9bc*/
  dbl_8B3B50 = Math::Sqrt(v0 + v0); /*0x4cb9ce*/
}
} // namespace gamemd

// 0x4CB9E0
namespace gamemd {
void sub_4CB9E0()
{
  dbl_8B3BA0 = dbl_8B3B50 / 60.0; /*0x4cb9ec*/
}
} // namespace gamemd

// 0x4CBA00
namespace gamemd {
void sub_4CBA00()
{
  dbl_8B3B88 = 1.0 / dbl_8B3BA0; /*0x4cba0c*/
}
} // namespace gamemd

// 0x4CBA20
namespace gamemd {
void sub_4CBA20()
{
  dbl_8B3B80 = 0.0174532925199433 * 45.0; /*0x4cba2c*/
}
} // namespace gamemd

// 0x4CBA40
namespace gamemd {
void sub_4CBA40()
{
  dbl_8B3B58 = 0.0174532925199433 * 60.0; /*0x4cba4c*/
}
} // namespace gamemd

// 0x4CBA60
namespace gamemd {
void sub_4CBA60()
{
  dbl_8B3B30 = 0.0174532925199433 * 90.0; /*0x4cba6c*/
}
} // namespace gamemd

// 0x4CBA80
namespace gamemd {
long long sub_4CBA80()
{
  double v0; // st7
  int64_t result; // rax

  v0 = Math::Sin(dbl_8B3B30 - dbl_8B3B58); /*0x4cba92*/
  result = Math::RoundToInt(v0 * dbl_8B3B50 * 0.5); /*0x4cbaa6*/
  dword_8B3BA8 = result; /*0x4cbaab*/
  return result; /*0x4cbab0*/
}
} // namespace gamemd

// 0x4CBAC0
namespace gamemd {
void sub_4CBAC0()
{
  dbl_8B3B60 = Math::ArcTan((double)dword_8B3BA8 * 0.00390625); /*0x4cbad7*/
}
} // namespace gamemd

// 0x4CBAF0
namespace gamemd {
void sub_4CBAF0()
{
  dbl_8B3B78 = Math::ArcTan((double)(2 * dword_8B3BA8) / dbl_8B3B50); /*0x4cbb12*/
}
} // namespace gamemd

// 0x4CBB20
namespace gamemd {
long long sub_4CBB20()
{
  int64_t result; // rax

  result = Math::RoundToInt((double)(4 * dword_8B3BA8) + 0.5); /*0x4cbb3b*/
  dword_8B3B9C = result; /*0x4cbb40*/
  return result; /*0x4cbb46*/
}
} // namespace gamemd

// 0x4CBB50
namespace gamemd {
int sub_4CBB50()
{
  dword_8B3B48 = 0; /*0x4cbb52*/
  return 0; /*0x4cbb5e*/
}
} // namespace gamemd

// 0x4CBB60
namespace gamemd {
int sub_4CBB60()
{
  dword_8B3B68 = 0; /*0x4cbb62*/
  dword_8B3B6C = 0; /*0x4cbb67*/
  dword_8B3B70 = 0; /*0x4cbb6c*/
  return 0; /*0x4cbb71*/
}
} // namespace gamemd

// 0x4CBB80
namespace gamemd {
int sub_4CBB80()
{
  dword_8B3B98 = 0; /*0x4cbb85*/
  dword_8B3B90 = 128; /*0x4cbb8f*/
  dword_8B3B94 = 128; /*0x4cbb94*/
  return 128; /*0x4cbb99*/
}
} // namespace gamemd

// 0x4CBEF0
namespace gamemd {
int sub_4CBEF0()
{
  dword_8B3BB8 = 0; /*0x4cbef2*/
  dword_8B3BBC = 0; /*0x4cbef7*/
  dword_8B3BC0 = 0; /*0x4cbefc*/
  dword_8B3BC4 = 0; /*0x4cbf01*/
  return 0; /*0x4cbf06*/
}
} // namespace gamemd

// 0x4CBF10
namespace gamemd {
void sub_4CBF10()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x4cbf1c*/
  dbl_8B3BD0 = Math::Sqrt(v0 + v0); /*0x4cbf2e*/
}
} // namespace gamemd

// 0x4CBF40
namespace gamemd {
void sub_4CBF40()
{
  dbl_8B3C20 = dbl_8B3BD0 / 60.0; /*0x4cbf4c*/
}
} // namespace gamemd

// 0x4CBF60
namespace gamemd {
void sub_4CBF60()
{
  dbl_8B3C08 = 1.0 / dbl_8B3C20; /*0x4cbf6c*/
}
} // namespace gamemd

// 0x4CBF80
namespace gamemd {
void sub_4CBF80()
{
  dbl_8B3C00 = 0.0174532925199433 * 45.0; /*0x4cbf8c*/
}
} // namespace gamemd

// 0x4CBFA0
namespace gamemd {
void sub_4CBFA0()
{
  dbl_8B3BD8 = 0.0174532925199433 * 60.0; /*0x4cbfac*/
}
} // namespace gamemd

// 0x4CBFC0
namespace gamemd {
void sub_4CBFC0()
{
  dbl_8B3BB0 = 0.0174532925199433 * 90.0; /*0x4cbfcc*/
}
} // namespace gamemd

// 0x4CBFE0
namespace gamemd {
long long sub_4CBFE0()
{
  double v0; // st7
  int64_t result; // rax

  v0 = Math::Sin(dbl_8B3BB0 - dbl_8B3BD8); /*0x4cbff2*/
  result = Math::RoundToInt(v0 * dbl_8B3BD0 * 0.5); /*0x4cc006*/
  dword_8B3C28 = result; /*0x4cc00b*/
  return result; /*0x4cc010*/
}
} // namespace gamemd

// 0x4CC020
namespace gamemd {
void sub_4CC020()
{
  dbl_8B3BE0 = Math::ArcTan((double)dword_8B3C28 * 0.00390625); /*0x4cc037*/
}
} // namespace gamemd

// 0x4CC050
namespace gamemd {
void sub_4CC050()
{
  dbl_8B3BF8 = Math::ArcTan((double)(2 * dword_8B3C28) / dbl_8B3BD0); /*0x4cc072*/
}
} // namespace gamemd

// 0x4CC080
namespace gamemd {
long long sub_4CC080()
{
  int64_t result; // rax

  result = Math::RoundToInt((double)(4 * dword_8B3C28) + 0.5); /*0x4cc09b*/
  dword_8B3C1C = result; /*0x4cc0a0*/
  return result; /*0x4cc0a6*/
}
} // namespace gamemd

// 0x4CC0B0
namespace gamemd {
int sub_4CC0B0()
{
  word_8B3BC8 = 0; /*0x4cc0b2*/
  word_8B3BCA = 0; /*0x4cc0b8*/
  return 0; /*0x4cc0be*/
}
} // namespace gamemd

// 0x4CC0C0
namespace gamemd {
int sub_4CC0C0()
{
  dword_8B3BE8 = 0; /*0x4cc0c2*/
  dword_8B3BEC = 0; /*0x4cc0c7*/
  dword_8B3BF0 = 0; /*0x4cc0cc*/
  return 0; /*0x4cc0d1*/
}
} // namespace gamemd

// 0x4CC0E0
namespace gamemd {
int sub_4CC0E0()
{
  dword_8B3C18 = 0; /*0x4cc0e5*/
  dword_8B3C10 = 128; /*0x4cc0ef*/
  dword_8B3C14 = 128; /*0x4cc0f4*/
  return 128; /*0x4cc0f9*/
}
} // namespace gamemd

// 0x4CC680
namespace gamemd {
bool sub_4CC680(int a1, int a2, int a3)
{
  int SlopeIndex; // ebx
  int v5; // esi
  BOOL result; // eax

  SlopeIndex = Cell::GetSlopeIndex(a2); /*0x4cc690*/
  result = 0; /*0x4cc6c3*/
  if ( Cell::GetSlopeIndex(a3) - SlopeIndex >= 4 ) /*0x4cc69e*/
  {
    v5 = Cell::GetSlopeIndex(a1); /*0x4cc6a9*/
    if ( Cell::GetSlopeIndex(a3) - v5 > 0 ) /*0x4cc6b4*/
      return 1; /*0x4cc69e*/
  }
  return result; /*0x4cc6b6*/
}
} // namespace gamemd

// 0x4CC750
namespace gamemd {
int sub_4CC750()
{
  dword_8B3C30 = 0; /*0x4cc752*/
  dword_8B3C34 = 0; /*0x4cc757*/
  dword_8B3C38 = 0; /*0x4cc75c*/
  dword_8B3C3C = 0; /*0x4cc761*/
  return 0; /*0x4cc766*/
}
} // namespace gamemd

// 0x4CC790
namespace gamemd {
void sub_4CC790()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x4cc79c*/
  dbl_8B3C60 = Math::Sqrt(v0 + v0); /*0x4cc7ae*/
}
} // namespace gamemd

// 0x4CC7C0
namespace gamemd {
void sub_4CC7C0()
{
  dbl_8B3CB0 = dbl_8B3C60 / 60.0; /*0x4cc7cc*/
}
} // namespace gamemd

// 0x4CC7E0
namespace gamemd {
void sub_4CC7E0()
{
  dbl_8B3C98 = 1.0 / dbl_8B3CB0; /*0x4cc7ec*/
}
} // namespace gamemd

// 0x4CC800
namespace gamemd {
void sub_4CC800()
{
  dbl_8B3C90 = 0.0174532925199433 * 45.0; /*0x4cc80c*/
}
} // namespace gamemd

// 0x4CC820
namespace gamemd {
void sub_4CC820()
{
  dbl_8B3C68 = 0.0174532925199433 * 60.0; /*0x4cc82c*/
}
} // namespace gamemd

// 0x4CC840
namespace gamemd {
void sub_4CC840()
{
  dbl_8B3C40 = 0.0174532925199433 * 90.0; /*0x4cc84c*/
}
} // namespace gamemd

// 0x4CC860
namespace gamemd {
long long sub_4CC860()
{
  double v0; // st7
  int64_t result; // rax

  v0 = Math::Sin(dbl_8B3C40 - dbl_8B3C68); /*0x4cc872*/
  result = Math::RoundToInt(v0 * dbl_8B3C60 * 0.5); /*0x4cc886*/
  dword_8B3CB8 = result; /*0x4cc88b*/
  return result; /*0x4cc890*/
}
} // namespace gamemd

// 0x4CC8A0
namespace gamemd {
void sub_4CC8A0()
{
  dbl_8B3C70 = Math::ArcTan((double)dword_8B3CB8 * 0.00390625); /*0x4cc8b7*/
}
} // namespace gamemd

// 0x4CC8D0
namespace gamemd {
void sub_4CC8D0()
{
  dbl_8B3C88 = Math::ArcTan((double)(2 * dword_8B3CB8) / dbl_8B3C60); /*0x4cc8f2*/
}
} // namespace gamemd

// 0x4CC900
namespace gamemd {
long long sub_4CC900()
{
  int64_t result; // rax

  result = Math::RoundToInt((double)(4 * dword_8B3CB8) + 0.5); /*0x4cc91b*/
  dword_8B3CAC = result; /*0x4cc920*/
  return result; /*0x4cc926*/
}
} // namespace gamemd

// 0x4CC930
namespace gamemd {
int sub_4CC930()
{
  dword_8B3C58 = 0; /*0x4cc932*/
  return 0; /*0x4cc93e*/
}
} // namespace gamemd

// 0x4CC940
namespace gamemd {
int sub_4CC940()
{
  dword_8B3C78 = 0; /*0x4cc942*/
  dword_8B3C7C = 0; /*0x4cc947*/
  dword_8B3C80 = 0; /*0x4cc94c*/
  return 0; /*0x4cc951*/
}
} // namespace gamemd

// 0x4CC960
namespace gamemd {
int sub_4CC960()
{
  dword_8B3CA8 = 0; /*0x4cc965*/
  dword_8B3CA0 = 128; /*0x4cc96f*/
  dword_8B3CA4 = 128; /*0x4cc974*/
  return 128; /*0x4cc979*/
}
} // namespace gamemd

// 0x4CC980
namespace gamemd {
int sub_4CC980()
{
  dword_8B3C48 = 0; /*0x4cc982*/
  dword_8B3C4C = 0; /*0x4cc987*/
  dword_8B3C50 = 0; /*0x4cc98c*/
  dword_8B3C54 = 0; /*0x4cc991*/
  return 0; /*0x4cc996*/
}
} // namespace gamemd

// 0x4CCA70
namespace gamemd {
void E4Recv_4CCA70::sub_4CCA70()
{
  *(unsigned int *)this->LocomotionClass = (void*)&FlyLocomotionClass_vftable; /*0x4cca70*/
  *(unsigned int *)&this->LocomotionClass[4] = (void*)&FlyLocomotionClass_vftable; /*0x4cca76*/
  LocomotionClass::Construct(); /*0x4cca7d*/
}
} // namespace gamemd
