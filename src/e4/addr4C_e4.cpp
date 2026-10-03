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
#include "e4/classes/JumpjetLocomotion_e4.hpp"
#include "e4/classes/Color_e4.hpp"
#include "e4/classes/TextRenderer_e4.hpp"
#include "e4/classes/Window_e4.hpp"
#include "e4/classes/Lightning_e4.hpp"
#include "e4/classes/Text_e4.hpp"
#include "e4/classes/TimerPool_e4.hpp"
#include "e4/classes/Palette_e4.hpp"  // G42.36 C2027 supply
#include "e4/classes/ComPtr_e4.hpp"  // G42.36 C2027 supply
#include "e4/classes/InfantryClass_e4.hpp"  // G42.36 C2027 supply
#include "e4/classes/BuildingAnim_e4.hpp"  // G42.36 C2027 supply
#include "e4/classes/CCFileClass_e4.hpp"  // G42.36 C2027 supply

// 0x4C1440
namespace gamemd {
int sub_4C1440()
{
  int result; // eax
  unsigned int v2[79]; // [esp+8h] [ebp-13Ch] BYREF

  memset(v2, 0, sizeof(v2)); /*0x4c1452*/
  v2[0] = 316; /*0x4c145d*/
  result = (*(int (**)(int, unsigned int *, unsigned int))(*(unsigned int *)dword_8A0E00 + 44))(dword_8A0E00, v2, 0); /*0x4c146b*/
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
int sub_4C14D0()
{
  int result; // eax
  unsigned int v2[63]; // [esp+8h] [ebp-1F8h] BYREF
  unsigned int v3[63]; // [esp+104h] [ebp-FCh] BYREF

  memset(v2, 0, sizeof(v2)); /*0x4c14e2*/
  memset(v3, 0, sizeof(v3)); /*0x4c14f5*/
  v2[0] = 252; /*0x4c14fc*/
  v3[0] = 252; /*0x4c1500*/
  result = (*(int (**)(unsigned int, unsigned int *, unsigned int *))(*(unsigned int *)g_DrawColorState + 12))( /*0x4c1517*/
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
int sub_4C1600()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x4C1600)
}
}
// 0x4C16A0
namespace gamemd {
void InitializeRadialGradientTexture()
{
     // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x4C16A0)
}
}
// 0x4C1E70
namespace gamemd {
void sub_4C1E70(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
     // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x4C1E70)
}
}
// 0x4C2790
namespace gamemd {
int E4Recv_4C2790::sub_4C2790()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x4C2790)
}
}
// 0x4C2830
namespace gamemd {
void sub_4C2830()
{
     // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x4C2830)
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
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x4C38E0)
}
}
// 0x4C3DD0
namespace gamemd {
AbstractClass * * E4Recv_4C3DD0::sub_4C3DD0(int a2)
{

  void *vtable2; // edx
  unsigned int v5[4]; // [esp+4h] [ebp-10h] BYREF

  ((TextRenderer *)this)->GetInstance(); /*0x4c3dd9*/
  Text::MeasureWidth((int)this->AbstractClass, 0); /*0x4c3de5*/
  vtable2 = (void *)(((unsigned int *)this)[0]); /*0x4c3def*/
  v5[2] = g_DisplayWidth; /*0x4c3df8*/
  v5[0] = 0; /*0x4c3e09*/
  v5[1] = (unsigned int)(vtable2); /*0x4c3e12*/
  v5[3] = 18; /*0x4c3e16*/
  return (*(int (**)(AudioStream *, unsigned int *, int, unsigned int *, unsigned int, int))(*(unsigned int *)g_DSurface_Hidden_2->__pad_0 /*0x4c3e28*/
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
void DialogFunc(HWND hDlg, UINT, WPARAM, LPARAM)
{
     // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x4C83E0)
}
}
// 0x4C95D0
namespace gamemd {
unsigned int * E4Recv_4C95D0::sub_4C95D0(unsigned int * a2, unsigned short * a3)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x4C95D0)
}
}
// 0x4CB150
namespace gamemd {
void ComputeDistortionVariant(float a1)
{
     // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x4CB150)
}
}
// 0x4CB4C0
namespace gamemd {
void sub_4CB4C0()
{
     // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x4CB4C0)
}
}
// 0x4CB580
namespace gamemd {
AbstractClass * * E4Recv_4CB580::sub_4CB580(char * Destination, char * Source, int a3)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x4CB580)
}
}
// 0x4CB640
namespace gamemd {
void * E4Recv_4CB640::sub_4CB640(char * Destination, RandomStruct * aP1, int a3)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x4CB640)
}
}
// 0x4CB6A0
namespace gamemd {
void * E4Recv_4CB6A0::sub_4CB6A0(char * Destination, RandomStruct * aP1, int a3)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x4CB6A0)
}
}
// 0x4CEFB0
namespace gamemd {
void FootClass_LandAtPosition(int a1, int a2, char a3, float a4, int a5, int a6)
{
     // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x4CEFB0)
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
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x4C1D90)
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
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x4C2B40)
}
} // namespace gamemd

// 0x4C2C30
namespace gamemd {
Iostream_init * E4Recv_4C2C30::__0Iostream_init_QAE_XZ_3()
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x4C2C30)
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
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x4C2FC0)
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
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x4C37D0)
}
} // namespace gamemd

// 0x4C38D0
namespace gamemd {
int E4Recv_4C38D0::sub_4C38D0()
{

  return ((unsigned int)this + 1) << 8; /*0x4c38d6*/

}
} // namespace gamemd

// 0x4C3A20
namespace gamemd {
char * sub_4C3A20(int a1, int a2, int a3, char * a4)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x4C3A20)
}
} // namespace gamemd

// 0x4C3AD0
namespace gamemd {
int sub_4C3AD0(char * a1, int a2, int a3, unsigned char a4)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x4C3AD0)
}
} // namespace gamemd

// 0x4C3B60
namespace gamemd {
unsigned char * sub_4C3B60(char * a1, unsigned char * a2, int a3, int a4)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x4C3B60)
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
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x4C3C10)
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
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x4C3C90)
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
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x4C4FC0)
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
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x4C5210)
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
      (*(void (**)(unsigned int, int))(**(unsigned int **)dword_8A3874 + 32))(*(unsigned int *)dword_8A3874, 1); /*0x4c5488*/
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
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x4C60F0)
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
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x4C68E0)
}
} // namespace gamemd

// 0x4C69E0
namespace gamemd {
char * E4Recv_4C69E0::sub_4C69E0(int a2, char a3, int a4, unsigned short * a5)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x4C69E0)
}
} // namespace gamemd

// 0x4C6A60
namespace gamemd {
char * E4Recv_4C6A60::sub_4C6A60(int a2, char a3, int a4, int a5, unsigned short * a6)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x4C6A60)
}
} // namespace gamemd

// 0x4C6BE0
namespace gamemd {
char * E4Recv_4C6BE0::sub_4C6BE0(int a2, char a3, int a4, int a5)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x4C6BE0)
}
} // namespace gamemd

// 0x4C81D0
namespace gamemd {
int sub_4C81D0()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x4C81D0)
}
} // namespace gamemd

// 0x4C81F0
namespace gamemd {
void sub_4C81F0()
{
     // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x4C81F0)
}
} // namespace gamemd

// 0x4C8220
namespace gamemd {
void sub_4C8220()
{
     // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x4C8220)
}
} // namespace gamemd

// 0x4C8240
namespace gamemd {
void sub_4C8240()
{
     // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x4C8240)
}
} // namespace gamemd

// 0x4C8260
namespace gamemd {
void sub_4C8260()
{
     // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x4C8260)
}
} // namespace gamemd

// 0x4C8280
namespace gamemd {
void sub_4C8280()
{
     // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x4C8280)
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
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x4C82C0)
}
} // namespace gamemd

// 0x4C8300
namespace gamemd {
void sub_4C8300()
{
     // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x4C8300)
}
} // namespace gamemd

// 0x4C8330
namespace gamemd {
void sub_4C8330()
{
     // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x4C8330)
}
} // namespace gamemd

// 0x4C8360
namespace gamemd {
long long sub_4C8360()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x4C8360)
}
} // namespace gamemd

// 0x4C8390
namespace gamemd {
int sub_4C8390()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x4C8390)
}
} // namespace gamemd

// 0x4C83A0
namespace gamemd {
int sub_4C83A0()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x4C83A0)
}
} // namespace gamemd

// 0x4C83C0
namespace gamemd {
int sub_4C83C0()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x4C83C0)
}
} // namespace gamemd

// 0x4C84E0
namespace gamemd {
int sub_4C84E0()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x4C84E0)
}
} // namespace gamemd

// 0x4C9160
namespace gamemd {
char sub_4C9160()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x4C9160)
}
} // namespace gamemd

// 0x4C91B0
namespace gamemd {
char ObjectClass::_do_always_noconv_codecvt_base_std__MBE_NXZ_5()
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

  switch ( LOWORD(((unsigned int *)this)[0]) ) /*0x4cb8c1*/
  {
    case 3: /*0x4cb8c1*/
    case 4: /*0x4cb8c1*/
      *(unsigned short *)((unsigned int *)this)[0] = htons(*(unsigned short *)((unsigned int *)this)[0]); /*0x4cb8d7*/
      break; /*0x4cb8da*/
    case 5: /*0x4cb8c1*/
    case 6: /*0x4cb8c1*/
      *(unsigned int *)((unsigned int *)this)[0] = htonl(*(unsigned int *)((unsigned int *)this)[0]); /*0x4cb8ea*/
      break; /*0x4cb8ea*/
    default:
      break;
  }
  v2 = htons((u_short)((unsigned int *)this)[0]); /*0x4cb8ec*/
  vtable1_high = HIWORD(((unsigned int *)this)[0]); /*0x4cb8f6*/
  LOWORD(((unsigned int *)this)[0]) = v2; /*0x4cb8fa*/
  result = htons(vtable1_high); /*0x4cb8ff*/
  HIWORD(((unsigned int *)this)[0]) = result; /*0x4cb904*/
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

  SlopeIndex = ((Cell *)(a2))->GetSlopeIndex(); /*0x4cc690*/
  result = 0; /*0x4cc6c3*/
  if ( ((Cell *)(a3))->GetSlopeIndex() - SlopeIndex >= 4 ) /*0x4cc69e*/
  {
    v5 = ((Cell *)(a1))->GetSlopeIndex(); /*0x4cc6a9*/
    if ( ((Cell *)(a3))->GetSlopeIndex() - v5 > 0 ) /*0x4cc6b4*/
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

  *(unsigned int *)this->LocomotionClass = &vt_FlyLocomotionClass; /*0x4cca70*/
  *(unsigned int *)&this->LocomotionClass[4] = &vt_FlyLocomotionClass; /*0x4cca76*/
  LocomotionClass::Construct((LocomotionClass *)this); /*0x4cca7d*/

}
} // namespace gamemd
