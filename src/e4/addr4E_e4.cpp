// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/classes/SerialPort_e4.hpp"
#include "e4/e4_globals.hpp"
#include "e4/classes/E4Recv_4E0A00_e4.hpp"
#include "e4/classes/E4Recv_4E2A50_e4.hpp"
#include "e4/classes/E4Recv_4E6070_e4.hpp"
#include "e4/classes/FoggedObjectClass_42_e4.hpp"
#include "e4/classes/Audio_e4.hpp"
#include "e4/classes/BuildingType_e4.hpp"
#include "e4/classes/Debug_e4.hpp"
#include "e4/classes/Math_e4.hpp"
#include "e4/classes/Network_e4.hpp"
#include "e4/classes/VectorClass_ptr_ConvertClass_e4.hpp"
#include "e4/classes/HouseClass_e4.hpp"
#include "e4/classes/ParticleSystemClass_e4.hpp"
#include "e4/classes/Dialog_e4.hpp"
#include "e4/classes/MapClass_e4.hpp"
#include "e4/classes/ScenarioClass_e4.hpp"
#include "e4/classes/Options_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/SkirmishDialog_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/classes/String_e4.hpp"
#include "e4/classes/TechnoTypeClass_e4.hpp"
#include "e4/classes/E4Recv_4C95D0_e4.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/Cell_e4.hpp"
#include "app/cmdline.hpp"
#include "e4/classes/ObjectClass_e4.hpp"
#include "e4/classes/E4Recv_4C3DD0_e4.hpp"
#include "e4/classes/BuildingClass_e4.hpp"
#include "e4/classes/TechnoClass_e4.hpp"
#include "e4/classes/Draw_e4.hpp"
#include "e4/classes/Object_e4.hpp"
#include "e4/classes/DeleteAndZero_e4.hpp"
#include "e4/classes/INIClass_e4.hpp"
#include "e4/classes/FileFind_e4.hpp"

// 0x4E0A00
namespace gamemd {
unsigned int * E4Recv_4E0A00::sub_4E0A00(int a2, unsigned int * a2)
{

  unsigned int *v4; // eax
  int *v6; // eax
  unsigned int *v7; // edx
  unsigned int *v8; // eax
  void *v10; // eax

  this->Items = 0; /*0x4e0a0a*/
  this->Capacity =(void *)a2; /*0x4e0a11*/
  this->IsInitialized =(void *)1; /*0x4e0a14*/
  this->IsAllocated = 0; /*0x4e0a18*/
  this->vtable1 = &vt_VectorClassDiscreteDistributionClassDistributionObject; /*0x4e0a1c*/
  if ( a2 ) /*0x4e0a22*/
  {
    if ( a2 ) /*0x4e0a2a*/
    {
      *a2 = a2; /*0x4e0a2f*/
      if ( a2 - 1 >= 0 ) /*0x4e0a36*/
      {
        v4 = a2 + 2; /*0x4e0a38*/
        a2 = a2; /*0x4e0a3b*/
        do /*0x4e0a46*/
        {
          *v4 = 0; /*0x4e0a3c*/
          v4 += 2; /*0x4e0a42*/
          --a2; /*0x4e0a45*/
        }
        while ( a2 ); /*0x4e0a46*/
      }
      this->Items = a2 + 1; /*0x4e0a48*/
    }
    else
    {
      v6 = (int *)new unsigned char[8 * a2 + 4]; /*0x4e0a55*/
      if ( v6 ) /*0x4e0a5f*/
      {
        *v6 = (int)((unsigned int *)(a2));
        v7 = (unsigned int *)(v6 + 1);
        if ( a2 - 1 >= 0 ) /*0x4e0a6b*/
        {
          v8 = (unsigned int *)(v6 + 2);
          a2 = a2; /*0x4e0a70*/
          do /*0x4e0a7b*/
          {
            *v8 = 0; /*0x4e0a71*/
            v8 += 2; /*0x4e0a77*/
            --a2; /*0x4e0a7a*/
          }
          while ( a2 ); /*0x4e0a7b*/
        }
        v10 = v7; /*0x4e0a7d*/
      }
      else
      {
        v10 = 0; /*0x4e0a81*/
      }
      this->Items = v10; /*0x4e0a83*/
      this->IsAllocated =(void *)1; /*0x4e0a86*/
    }
  }
  this->vtable1 = &vt_DynamicVectorClassDiscreteDistributionClassDistributionObject; /*0x4e0a8a*/
  this->M20 = 10; /*0x4e0a90*/
  this->M16 = 0; /*0x4e0a97*/
  return (unsigned int *)(&this->vtable1); /*0x4e0aa0*/

}
}
// 0x4E1FE0
namespace gamemd {
int GameOptionsDlgProc(HWND hDlg, unsigned int a2, unsigned int a3, HWND hWnd)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x4E1FE0)
}
}
// 0x4E34A0
namespace gamemd {
void * UpdateLobbyGraphicsWOL(HWND hDlg, int a2, int a3)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x4E34A0)
}
}
// 0x4E3690
namespace gamemd {
void * sub_4E3690(HWND hDlg, int a2)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x4E3690)
}
}
// 0x4E3CE0
namespace gamemd {
void * SetupSkirmishDialogPlayerSlot(HWND hDlg, int a2)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x4E3CE0)
}
}
// 0x4E3F70
namespace gamemd {
HWND * SetupLobbyCountryCombo(HWND aP0, int nIDDlgItem, int a3)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x4E3F70)
}
}
// 0x4E45A0
namespace gamemd {
bool FillComboBoxFactions(HWND hDlg, int nIDDlgItem)
{
    return false; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x4E45A0)
}
}
// 0x4E48E0
namespace gamemd {
int SkirmishDialog_MapPlayerToControl(HWND a1, int a2)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x4E48E0)
}
}
// 0x4E49A0
namespace gamemd {
int SetupSkirmishSpawnLocations(HWND hDlg, int nIDDlgItem, int a3)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x4E49A0)
}
}
// 0x4E4C20
namespace gamemd {
char FillColorComboBoxUI(HWND hDlg, int nIDDlgItem)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x4E4C20)
}
}
// 0x4E50C0
namespace gamemd {
bool FillComboBoxAllianceSlots(HWND hDlg, int nIDDlgItem)
{
    return false; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x4E50C0)
}
}
// 0x4E53D0
namespace gamemd {
int Lobby_FillFactionComboBox(HWND a1, int a2)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x4E53D0)
}
}
// 0x4E5480
namespace gamemd {
int SetupLobbyFactionSlots(HWND aP0, int nIDDlgItem, int a3)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x4E5480)
}
}
// 0x4E5700
namespace gamemd {
char FillComboBoxSides(HWND hDlg, int nIDDlgItem)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x4E5700)
}
}
// 0x4E5B60
namespace gamemd {
bool FillLobbyPlayerSlot(HWND hDlg, int nIDDlgItem)
{
    return false; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x4E5B60)
}
}
// 0x4E5E20
namespace gamemd {
void Lobby_SetupPlayerSlotDialog(HWND a1, int a2)
{
    // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x4E5E20)
}
}
// 0x4E5ED0
namespace gamemd {
bool SetupLobbyPlayerSlots(SessionClass * aP0, int nIDDlgItem, int a3)
{
    return false; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x4E5ED0)
}
}
// 0x4E6860
namespace gamemd {
int sub_4E6860()
{
  dword_A8ED44 = 0; /*0x4e6867*/
  dword_A8ED48 = 0; /*0x4e686c*/
  byte_A8ED4C = 1; /*0x4e6871*/
  byte_A8ED4D = 0; /*0x4e6878*/
  dword_A8ED40 = (int)&off_7E4678; /*0x4e687d*/
  dword_A8ED54 = 10; /*0x4e6887*/
  dword_A8ED50 = 0; /*0x4e6891*/
  return atexit((void (__cdecl *)(void))sub_4E68A0); /*0x4e689c*/
}
}
// 0x4E6CE0
namespace gamemd {
int sub_4E6CE0()
{
  dword_A8022C = 0; /*0x4e6ce7*/
  dword_A80230 = 0; /*0x4e6cec*/
  byte_A80234 = 1; /*0x4e6cf1*/
  byte_A80235 = 0; /*0x4e6cf8*/
  dword_A80228 = (int)&DynamicVectorClass_HouseClass___vftable; /*0x4e6cfd*/
  dword_A8023C = 10; /*0x4e6d07*/
  dword_A80238 = 0; /*0x4e6d11*/
  return atexit((void (__cdecl *)(void))sub_4E6D20); /*0x4e6d1c*/
}
}
// 0x4E6D20
namespace gamemd {
void sub_4E6D20()
{
  dword_A80228 = (int)&VectorClass_HouseClass___vftable; /*0x4e6d28*/
  if ( dword_A8022C && byte_A80235 ) /*0x4e6d3c*/
  {
    RA2_OPDEL(dword_A8022C); /*0x4e6d3f*/
    dword_A8022C = 0; /*0x4e6d47*/
  }
  byte_A80235 = 0; /*0x4e6d4d*/
  dword_A80230 = 0; /*0x4e6d53*/
}
}
// 0x4E7460
namespace gamemd {
int sub_4E7460()
{
  dword_A83CE4 = 0; /*0x4e7467*/
  dword_A83CE8 = 0; /*0x4e746c*/
  byte_A83CEC = 1; /*0x4e7471*/
  byte_A83CED = 0; /*0x4e7478*/
  dword_A83CE0 = (int)&DynamicVectorClass_UnitTypeClass___vftable; /*0x4e747d*/
  dword_A83CF4 = 10; /*0x4e7487*/
  dword_A83CF0 = 0; /*0x4e7491*/
  return atexit((void (__cdecl *)(void))sub_4E74A0); /*0x4e749c*/
}
}
// 0x4E74A0
namespace gamemd {
void sub_4E74A0()
{
  dword_A83CE0 = (int)&VectorClass_UnitTypeClass___vftable; /*0x4e74a8*/
  if ( dword_A83CE4 && byte_A83CED ) /*0x4e74bc*/
  {
    RA2_OPDEL(dword_A83CE4); /*0x4e74bf*/
    dword_A83CE4 = 0; /*0x4e74c7*/
  }
  byte_A83CED = 0; /*0x4e74cd*/
  dword_A83CE8 = 0; /*0x4e74d3*/
}
}
// 0x4E75E0
namespace gamemd {
int sub_4E75E0()
{
  dword_A83C84 = 0; /*0x4e75e7*/
  dword_A83C88 = 0; /*0x4e75ec*/
  byte_A83C8C = 1; /*0x4e75f1*/
  byte_A83C8D = 0; /*0x4e75f8*/
  dword_A83C80 = (int)&DynamicVectorClass_BulletTypeClass___vftable; /*0x4e75fd*/
  dword_A83C94 = 10; /*0x4e7607*/
  dword_A83C90 = 0; /*0x4e7611*/
  return atexit((void (__cdecl *)(void))sub_4E7620); /*0x4e761c*/
}
}
// 0x4E7620
namespace gamemd {
void sub_4E7620()
{
  dword_A83C80 = (int)&VectorClass_BulletTypeClass___vftable; /*0x4e7628*/
  if ( dword_A83C84 && byte_A83C8D ) /*0x4e763c*/
  {
    RA2_OPDEL(dword_A83C84); /*0x4e763f*/
    dword_A83C84 = 0; /*0x4e7647*/
  }
  byte_A83C8D = 0; /*0x4e764d*/
  dword_A83C88 = 0; /*0x4e7653*/
}
}
// 0x4E7EA0
namespace gamemd {
char * * sub_4E7EA0()
{
  char *result; // eax
  int v1; // ecx

  result = (char *)(byte_A802D4); /*0x4e7ea0*/
  v1 = 128; /*0x4e7ea5*/
  do /*0x4e7eb2*/
  {
    *result = 0; /*0x4e7eac*/
    result += 111; /*0x4e7eae*/
    --v1; /*0x4e7eb1*/
  }
  while ( v1 ); /*0x4e7eb2*/
  dword_A802C8 = 0; /*0x4e7eb4*/
  dword_A802CC = 0; /*0x4e7eba*/
  dword_A802D0 = (unsigned int)((char **)(0)); /*0x4e7ec0*/
  return (char **)(result); /*0x4e7ec6*/
}
}
// 0x4E8090
namespace gamemd {
void unknown_libname_18()
{
    // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x4E8090)
}
}
// 0x4E9240
namespace gamemd {
AbstractClass * * HouseClass__vt_02__free(int a2, unsigned int * a3)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x4E9240)
}
}
// 0x4E9E20
namespace gamemd {
AbstractClass * * ParticleSystemClass__vt_02__free(int a2, unsigned int * a3)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x4E9E20)
}
}
// 0x4E9ED0
namespace gamemd {
void ParticleSystemClass__vt_03__free()
{
    // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x4E9ED0)
}
}
// 0x4E0C30
namespace gamemd {
void nullsub_138()
{
  ; /*0x4e0c30*/
}
} // namespace gamemd

// 0x4E0D30
namespace gamemd {
unsigned int * FoggedObjectClass_42::loc_4E0D30(unsigned int * Block, char a2)
{
    return nullptr; (void)Block; (void)a2; return nullptr; // TODO stub - quarantined G42 T9 (raw body; truth = .omo/ida_cache/func_0x4E0D30.json)
}
} // namespace gamemd

// 0x4E0F10
namespace gamemd {
void sub_4E0F10()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x4e0f1c*/
  dbl_8B3E18 = Math::Sqrt(v0 + v0); /*0x4e0f2e*/
}
} // namespace gamemd

// 0x4E0F40
namespace gamemd {
void sub_4E0F40()
{
  dbl_8B3E68 = dbl_8B3E18 / 60.0; /*0x4e0f4c*/
}
} // namespace gamemd

// 0x4E0F60
namespace gamemd {
void sub_4E0F60()
{
  dbl_8B3E50 = 1.0 / dbl_8B3E68; /*0x4e0f6c*/
}
} // namespace gamemd

// 0x4E0F80
namespace gamemd {
void sub_4E0F80()
{
  dbl_8B3E48 = 0.0174532925199433 * 45.0; /*0x4e0f8c*/
}
} // namespace gamemd

// 0x4E0FA0
namespace gamemd {
void sub_4E0FA0()
{
  dbl_8B3E20 = 0.0174532925199433 * 60.0; /*0x4e0fac*/
}
} // namespace gamemd

// 0x4E0FC0
namespace gamemd {
void sub_4E0FC0()
{
  dbl_8B3E08 = 0.0174532925199433 * 90.0; /*0x4e0fcc*/
}
} // namespace gamemd

// 0x4E0FE0
namespace gamemd {
long long sub_4E0FE0()
{
  double v0; // st7
  int64_t result; // rax

  v0 = Math::Sin(dbl_8B3E08 - dbl_8B3E20); /*0x4e0ff2*/
  result = Math::RoundToInt(v0 * dbl_8B3E18 * 0.5); /*0x4e1006*/
  dword_8B3E70 = result; /*0x4e100b*/
  return result; /*0x4e1010*/
}
} // namespace gamemd

// 0x4E1020
namespace gamemd {
void sub_4E1020()
{
  dbl_8B3E28 = Math::ArcTan((double)dword_8B3E70 * 0.00390625); /*0x4e1037*/
}
} // namespace gamemd

// 0x4E1050
namespace gamemd {
void sub_4E1050()
{
  dbl_8B3E40 = Math::ArcTan((double)(2 * dword_8B3E70) / dbl_8B3E18); /*0x4e1072*/
}
} // namespace gamemd

// 0x4E1080
namespace gamemd {
long long sub_4E1080()
{
  int64_t result; // rax

  result = Math::RoundToInt((double)(4 * dword_8B3E70) + 0.5); /*0x4e109b*/
  dword_8B3E64 = result; /*0x4e10a0*/
  return result; /*0x4e10a6*/
}
} // namespace gamemd

// 0x4E10B0
namespace gamemd {
int sub_4E10B0()
{
  word_8B3E10 = 0; /*0x4e10b2*/
  word_8B3E12 = 0; /*0x4e10b8*/
  return 0; /*0x4e10be*/
}
} // namespace gamemd

// 0x4E10C0
namespace gamemd {
int sub_4E10C0()
{
  dword_8B3E30 = 0; /*0x4e10c2*/
  dword_8B3E34 = 0; /*0x4e10c7*/
  dword_8B3E38 = 0; /*0x4e10cc*/
  return 0; /*0x4e10d1*/
}
} // namespace gamemd

// 0x4E10E0
namespace gamemd {
int sub_4E10E0()
{
  dword_8B3E60 = 0; /*0x4e10e5*/
  dword_8B3E58 = 128; /*0x4e10ef*/
  dword_8B3E5C = 128; /*0x4e10f4*/
  return 128; /*0x4e10f9*/
}
} // namespace gamemd

// 0x4E12B0
namespace gamemd {
int sub_4E12B0()
{
  dword_8B3E78 = 0; /*0x4e12b2*/
  dword_8B3E7C = 0; /*0x4e12b7*/
  dword_8B3E80 = 0; /*0x4e12bc*/
  dword_8B3E84 = 0; /*0x4e12c1*/
  return 0; /*0x4e12c6*/
}
} // namespace gamemd

// 0x4E1AF0
namespace gamemd {
int sub_4E1AF0()
{
  dword_8B3EA0 = 0; /*0x4e1af2*/
  dword_8B3EA4 = 0; /*0x4e1af7*/
  dword_8B3EA8 = 0; /*0x4e1afc*/
  dword_8B3EAC = 0; /*0x4e1b01*/
  return 0; /*0x4e1b06*/
}
} // namespace gamemd

// 0x4E1B10
namespace gamemd {
void sub_4E1B10()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x4e1b1c*/
  dbl_8B3EB8 = Math::Sqrt(v0 + v0); /*0x4e1b2e*/
}
} // namespace gamemd

// 0x4E1B40
namespace gamemd {
void sub_4E1B40()
{
  dbl_8B3F08 = dbl_8B3EB8 / 60.0; /*0x4e1b4c*/
}
} // namespace gamemd

// 0x4E1B60
namespace gamemd {
void sub_4E1B60()
{
  dbl_8B3EF0 = 1.0 / dbl_8B3F08; /*0x4e1b6c*/
}
} // namespace gamemd

// 0x4E1B80
namespace gamemd {
void sub_4E1B80()
{
  dbl_8B3EE8 = 0.0174532925199433 * 45.0; /*0x4e1b8c*/
}
} // namespace gamemd

// 0x4E1BA0
namespace gamemd {
void sub_4E1BA0()
{
  dbl_8B3EC0 = 0.0174532925199433 * 60.0; /*0x4e1bac*/
}
} // namespace gamemd

// 0x4E1BC0
namespace gamemd {
void sub_4E1BC0()
{
  dbl_8B3E98 = 0.0174532925199433 * 90.0; /*0x4e1bcc*/
}
} // namespace gamemd

// 0x4E1BE0
namespace gamemd {
long long sub_4E1BE0()
{
  double v0; // st7
  int64_t result; // rax

  v0 = Math::Sin(dbl_8B3E98 - dbl_8B3EC0); /*0x4e1bf2*/
  result = Math::RoundToInt(v0 * dbl_8B3EB8 * 0.5); /*0x4e1c06*/
  dword_8B3F10 = result; /*0x4e1c0b*/
  return result; /*0x4e1c10*/
}
} // namespace gamemd

// 0x4E1C20
namespace gamemd {
void sub_4E1C20()
{
  dbl_8B3EC8 = Math::ArcTan((double)dword_8B3F10 * 0.00390625); /*0x4e1c37*/
}
} // namespace gamemd

// 0x4E1C50
namespace gamemd {
void sub_4E1C50()
{
  dbl_8B3EE0 = Math::ArcTan((double)(2 * dword_8B3F10) / dbl_8B3EB8); /*0x4e1c72*/
}
} // namespace gamemd

// 0x4E1C80
namespace gamemd {
long long sub_4E1C80()
{
  int64_t result; // rax

  result = Math::RoundToInt((double)(4 * dword_8B3F10) + 0.5); /*0x4e1c9b*/
  dword_8B3F04 = result; /*0x4e1ca0*/
  return result; /*0x4e1ca6*/
}
} // namespace gamemd

// 0x4E1CB0
namespace gamemd {
int sub_4E1CB0()
{
  word_8B3EB0 = 0; /*0x4e1cb2*/
  word_8B3EB2 = 0; /*0x4e1cb8*/
  return 0; /*0x4e1cbe*/
}
} // namespace gamemd

// 0x4E1CC0
namespace gamemd {
int sub_4E1CC0()
{
  dword_8B3ED0 = 0; /*0x4e1cc2*/
  dword_8B3ED4 = 0; /*0x4e1cc7*/
  dword_8B3ED8 = 0; /*0x4e1ccc*/
  return 0; /*0x4e1cd1*/
}
} // namespace gamemd

// 0x4E1CE0
namespace gamemd {
int sub_4E1CE0()
{
  dword_8B3F00 = 0; /*0x4e1ce5*/
  dword_8B3EF8 = 128; /*0x4e1cef*/
  dword_8B3EFC = 128; /*0x4e1cf4*/
  return 128; /*0x4e1cf9*/
}
} // namespace gamemd

// 0x4E2440
namespace gamemd {
DWORD sub_4E2440()
{
  DWORD result; // eax

  result = timeGetTime(); /*0x4e2440*/
  dword_8B3F14 = result; /*0x4e2446*/
  return result; /*0x4e244b*/
}
} // namespace gamemd

// 0x4E24E0
namespace gamemd {
int sub_4E24E0()
{
  dword_8B3F18 = 0; /*0x4e24e2*/
  dword_8B3F1C = 0; /*0x4e24e7*/
  dword_8B3F20 = 0; /*0x4e24ec*/
  dword_8B3F24 = 0; /*0x4e24f1*/
  return 0; /*0x4e24f6*/
}
} // namespace gamemd

// 0x4E2A50
namespace gamemd {
int E4Recv_4E2A50::sub_4E2A50(ControlClass * aP1, int aP2, int aP3, ControlClass * aP4, int aP5)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x4E2A50)
}
} // namespace gamemd

// 0x4E3110
namespace gamemd {
int sub_4E3110()
{
  dword_8B3F90 = 0; /*0x4e3112*/
  dword_8B3F94 = 0; /*0x4e3117*/
  dword_8B3F98 = 0; /*0x4e311c*/
  dword_8B3F9C = 0; /*0x4e3121*/
  return 0; /*0x4e3126*/
}
} // namespace gamemd

// 0x4E3130
namespace gamemd {
void sub_4E3130()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x4e313c*/
  dbl_8B3FA8 = Math::Sqrt(v0 + v0); /*0x4e314e*/
}
} // namespace gamemd

// 0x4E3160
namespace gamemd {
void sub_4E3160()
{
  dbl_8B40B8 = dbl_8B3FA8 / 60.0; /*0x4e316c*/
}
} // namespace gamemd

// 0x4E3180
namespace gamemd {
void sub_4E3180()
{
  dbl_8B40A0 = 1.0 / dbl_8B40B8; /*0x4e318c*/
}
} // namespace gamemd

// 0x4E31A0
namespace gamemd {
void sub_4E31A0()
{
  dbl_8B4098 = 0.0174532925199433 * 45.0; /*0x4e31ac*/
}
} // namespace gamemd

// 0x4E31C0
namespace gamemd {
void sub_4E31C0()
{
  dbl_8B3FB0 = 0.0174532925199433 * 60.0; /*0x4e31cc*/
}
} // namespace gamemd

// 0x4E31E0
namespace gamemd {
void sub_4E31E0()
{
  dbl_8B3F28 = 0.0174532925199433 * 90.0; /*0x4e31ec*/
}
} // namespace gamemd

// 0x4E3200
namespace gamemd {
long long sub_4E3200()
{
  double v0; // st7
  int64_t result; // rax

  v0 = Math::Sin(dbl_8B3F28 - dbl_8B3FB0); /*0x4e3212*/
  result = Math::RoundToInt(v0 * dbl_8B3FA8 * 0.5); /*0x4e3226*/
  dword_8B40C0 = result; /*0x4e322b*/
  return result; /*0x4e3230*/
}
} // namespace gamemd

// 0x4E3240
namespace gamemd {
void sub_4E3240()
{
  dbl_8B3FB8 = Math::ArcTan((double)dword_8B40C0 * 0.00390625); /*0x4e3257*/
}
} // namespace gamemd

// 0x4E3270
namespace gamemd {
void sub_4E3270()
{
  dbl_8B4030 = Math::ArcTan((double)(2 * dword_8B40C0) / dbl_8B3FA8); /*0x4e3292*/
}
} // namespace gamemd

// 0x4E32A0
namespace gamemd {
long long sub_4E32A0()
{
  int64_t result; // rax

  result = Math::RoundToInt((double)(4 * dword_8B40C0) + 0.5); /*0x4e32bb*/
  dword_8B40B4 = result; /*0x4e32c0*/
  return result; /*0x4e32c6*/
}
} // namespace gamemd

// 0x4E32D0
namespace gamemd {
int sub_4E32D0()
{
  word_8B3FA0 = 0; /*0x4e32d2*/
  word_8B3FA2 = 0; /*0x4e32d8*/
  return 0; /*0x4e32de*/
}
} // namespace gamemd

// 0x4E32E0
namespace gamemd {
int sub_4E32E0()
{
  dword_8B4020 = 0; /*0x4e32e2*/
  dword_8B4024 = 0; /*0x4e32e7*/
  dword_8B4028 = 0; /*0x4e32ec*/
  return 0; /*0x4e32f1*/
}
} // namespace gamemd

// 0x4E3300
namespace gamemd {
int sub_4E3300()
{
  dword_8B40B0 = 0; /*0x4e3305*/
  dword_8B40A8 = 128; /*0x4e330f*/
  dword_8B40AC = 128; /*0x4e3314*/
  return 128; /*0x4e3319*/
}
} // namespace gamemd

// 0x4E3A00
namespace gamemd {
bool FillComboBoxRandomOnly(HWND hDlg, int nIDDlgItem)
{
    return false; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x4E3A00)
}
} // namespace gamemd

// 0x4E3B00
namespace gamemd {
LRESULT SetupComboBoxObserver(HWND hDlg, int nIDDlgItem)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x4E3B00)
}
} // namespace gamemd

// 0x4E4170
namespace gamemd {
int GetComboBoxSelected(HWND aP0, int nIDDlgItem, LRESULT wParam)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x4E4170)
}
} // namespace gamemd

// 0x4E43C0
namespace gamemd {
LPARAM * InitGameDropdownColors()
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x4E43C0)
}
} // namespace gamemd

// 0x4E4580
namespace gamemd {
bool IsAvailableColorhWnd(int a1)
{
    return false; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x4E4580)
}
} // namespace gamemd

// 0x4E4770
namespace gamemd {
LRESULT FillListBox(HWND hDlg, int nIDDlgItem)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x4E4770)
}
} // namespace gamemd

// 0x4E4E20
namespace gamemd {
int GetComboBoxSelectedRaw(HWND aP0, int nIDDlgItem, LRESULT wParam)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x4E4E20)
}
} // namespace gamemd

// 0x4E4F30
namespace gamemd {
wchar_t * sub_4E4F30()
{
  return GetStringCSF((wchar_t *)aSttHostcombost, 0, (const char *)g_Str_File_GDlgSupp_cpp, 747); /*0x4e4f46*/
}
} // namespace gamemd

// 0x4E4F50
namespace gamemd {
int * _cfltcvt_init()
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x4E4F50)
}
}
// 0x4E4FC0
namespace gamemd {
void Lobby_ResetFactionTable(int a1)
{
  int *v1; // eax
  int v2; // edx
  int *v3; // eax

  if ( a1 > 0 ) /*0x4e4fc2*/
  {
    v1 =(int *)dword_8B3F38; /*0x4e4fc4*/
    v2 = a1; /*0x4e4fc9*/
    do /*0x4e4fd5*/
    {
      *v1 = -1; /*0x4e4fcb*/
      v1 += 3; /*0x4e4fd1*/
      --v2; /*0x4e4fd4*/
    }
    while ( v2 ); /*0x4e4fd5*/
  }
  if ( a1 < 9 ) /*0x4e4fda*/
  {
    v3 = (int *)(12 * a1 + 9125688); /*0x4e4fdf*/
    do /*0x4e4ff4*/
    {
      *v3 = -2; /*0x4e4fe6*/
      v3 += 3; /*0x4e4fec*/
    }
    while ( (int)v3 < (int)&unk_8B3FA4 ); /*0x4e4ff4*/
  }
}
} // namespace gamemd

// 0x4E50A0
namespace gamemd {
bool sub_4E50A0(int a1)
{
    return false; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x4E50A0)
}
} // namespace gamemd

// 0x4E5260
namespace gamemd {
int SetupComboBoxRandomAlliance(HWND hDlg, int nIDDlgItem)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x4E5260)
}
} // namespace gamemd

// 0x4E5900
namespace gamemd {
LRESULT SetComboBoxSelection(HWND hDlg, int nIDDlgItem, WPARAM wParam)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x4E5900)
}
} // namespace gamemd

// 0x4E5CB0
namespace gamemd {
LRESULT InitComboBoxNone(HWND hDlg, int nIDDlgItem)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x4E5CB0)
}
} // namespace gamemd

// 0x4E6030
namespace gamemd {
LRESULT GetComboBoxSelectedRaw2(HWND hDlg, int nIDDlgItem, WPARAM wParam)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x4E6030)
}
} // namespace gamemd

// 0x4E6070
namespace gamemd {
int E4Recv_4E6070::sub_4E6070()
{

  *(unsigned int *)&this->bombVisible = 0; /*0x4e6087*/
  this->health = 0; /*0x4e608a*/
  Debug::Log(); /*0x4e608d*/
  memset(this, 0xFFu, 0x18u); /*0x4e609f*/
  LOWORD(((unsigned int *)this)[0]) = -1; /*0x4e60a9*/
  *((unsigned int *)this + (*(unsigned int *)&this->bombVisible)++) = 2; /*0x4e60cc*/
  Debug::Log(); /*0x4e60d6*/
  return (int)this; /*0x4e612c*/

}
} // namespace gamemd

// 0x4E6140
namespace gamemd {
void nullsub_54()
{
  ; /*0x4e6140*/
}
} // namespace gamemd

// 0x4E6150
namespace gamemd {
char * Version_GetString(unsigned int * a1, unsigned char * a2, char * Destination, size_t Count)
{
  char *result; // eax

  *a2 = Event_Process_7C5F3D(); /*0x4e615b*/
  Event_Process_7C5FFF(); /*0x4e615d*/
  *a1 = byte_84E863; /*0x4e6169*/
  result = Destination; /*0x4e616b*/
  if ( Destination ) /*0x4e6173*/
    return strncpy(Destination, (const char *)Source, Count); /*0x4e6180*/
  return result; /*0x4e616f*/
}
} // namespace gamemd

// 0x4E6190
namespace gamemd {
int sub_4E6190()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x4E6190)
}
} // namespace gamemd

// 0x4E62D0
namespace gamemd {
void sub_4E62D0()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x4e62dc*/
  dbl_A83D40 = Math::Sqrt(v0 + v0); /*0x4e62ee*/
}
} // namespace gamemd

// 0x4E6300
namespace gamemd {
void sub_4E6300()
{
  dbl_A8EC98 = dbl_A83D40 / 60.0; /*0x4e630c*/
}
} // namespace gamemd

// 0x4E6320
namespace gamemd {
void sub_4E6320()
{
  dbl_A8EB58 = 1.0 / dbl_A8EC98; /*0x4e632c*/
}
} // namespace gamemd

// 0x4E6340
namespace gamemd {
void sub_4E6340()
{
  dbl_A8EB20 = 0.0174532925199433 * 45.0; /*0x4e634c*/
}
} // namespace gamemd

// 0x4E6360
namespace gamemd {
void sub_4E6360()
{
  dbl_A83DB0 = 0.0174532925199433 * 60.0; /*0x4e636c*/
}
} // namespace gamemd

// 0x4E6380
namespace gamemd {
void sub_4E6380()
{
  dbl_8B4168 = 0.0174532925199433 * 90.0; /*0x4e638c*/
}
} // namespace gamemd

// 0x4E63A0
namespace gamemd {
long long sub_4E63A0()
{
  double v0; // st7
  int64_t result; // rax

  v0 = Math::Sin(dbl_8B4168 - dbl_A83DB0); /*0x4e63b2*/
  result = Math::RoundToInt(v0 * dbl_A83D40 * 0.5); /*0x4e63c6*/
  dword_A8ED58 = result; /*0x4e63cb*/
  return result; /*0x4e63d0*/
}
} // namespace gamemd

// 0x4E63E0
namespace gamemd {
void sub_4E63E0()
{
  dbl_A83DE0 = Math::ArcTan((double)dword_A8ED58 * 0.00390625); /*0x4e63f7*/
}
} // namespace gamemd

// 0x4E6410
namespace gamemd {
void sub_4E6410()
{
  dbl_A8E958 = Math::ArcTan((double)(2 * dword_A8ED58) / dbl_A83D40); /*0x4e6432*/
}
} // namespace gamemd

// 0x4E6440
namespace gamemd {
long long sub_4E6440()
{
  int64_t result; // rax

  result = Math::RoundToInt((double)(4 * dword_A8ED58) + 0.5); /*0x4e645b*/
  dword_A8EC94 = result; /*0x4e6460*/
  return result; /*0x4e6466*/
}
} // namespace gamemd

// 0x4E6470
namespace gamemd {
int sub_4E6470()
{
  word_A83CD0 = 0; /*0x4e6472*/
  word_A83CD2 = 0; /*0x4e6478*/
  return 0; /*0x4e647e*/
}
} // namespace gamemd

// 0x4E6480
namespace gamemd {
int sub_4E6480()
{
  dword_A8E380 = 0; /*0x4e6482*/
  dword_A8E384 = 0; /*0x4e6487*/
  dword_A8E388 = 0; /*0x4e648c*/
  return 0; /*0x4e6491*/
}
} // namespace gamemd

// 0x4E64A0
namespace gamemd {
int sub_4E64A0()
{
  dword_A8EC70 = 0; /*0x4e64a5*/
  dword_A8EC68 = 128; /*0x4e64af*/
  dword_A8EC6C = 128; /*0x4e64b4*/
  return 128; /*0x4e64b9*/
}
} // namespace gamemd

// 0x4E64C0
namespace gamemd {
int sub_4E64C0()
{
  dword_A83C58 = 0; /*0x4e64c2*/
  dword_A83C5C = 0; /*0x4e64c7*/
  dword_A83C60 = 0; /*0x4e64cc*/
  dword_A83C64 = 0; /*0x4e64d1*/
  return 0; /*0x4e64d6*/
}
} // namespace gamemd

// 0x4E64E0
namespace gamemd {
int sub_4E64E0()
{
  dword_A8B204 = 0; /*0x4e64e7*/
  dword_A8B208 = 0; /*0x4e64ec*/
  byte_A8B20C = 1; /*0x4e64f1*/
  byte_A8B20D = 0; /*0x4e64f8*/
  dword_A8B200 = (int)&DynamicVectorClass_AITriggerTypeClass___vftable; /*0x4e64fd*/
  dword_A8B214 = 10; /*0x4e6507*/
  dword_A8B210 = 0; /*0x4e6511*/
  return atexit((void (__cdecl *)(void))sub_4E6520); /*0x4e651c*/
}
} // namespace gamemd

// 0x4E6520
namespace gamemd {
void sub_4E6520()
{
  dword_A8B200 = (int)&VectorClass_AITriggerTypeClass___vftable; /*0x4e6528*/
  if ( dword_A8B204 && byte_A8B20D ) /*0x4e653c*/
  {
    RA2_OPDEL(dword_A8B204); /*0x4e653f*/
    dword_A8B204 = 0; /*0x4e6547*/
  }
  byte_A8B20D = 0; /*0x4e654d*/
  dword_A8B208 = 0; /*0x4e6553*/
}
} // namespace gamemd

// 0x4E6560
namespace gamemd {
int sub_4E6560()
{
  dword_8B417C = 0; /*0x4e6567*/
  dword_8B4180 = 0; /*0x4e656c*/
  byte_8B4184 = 1; /*0x4e6571*/
  byte_8B4185 = 0; /*0x4e6578*/
  dword_8B4178 = (int)&DynamicVectorClass_TriggerTypeClass___vftable; /*0x4e657d*/
  dword_8B418C = 10; /*0x4e6587*/
  dword_8B4188 = 0; /*0x4e6591*/
  return atexit((void (__cdecl *)(void))sub_4E65A0); /*0x4e659c*/
}
} // namespace gamemd

// 0x4E65A0
namespace gamemd {
void sub_4E65A0()
{
  dword_8B4178 = (int)&VectorClass_TriggerTypeClass___vftable; /*0x4e65a8*/
  if ( dword_8B417C && byte_8B4185 ) /*0x4e65bc*/
  {
    RA2_OPDEL(dword_8B417C); /*0x4e65bf*/
    dword_8B417C = 0; /*0x4e65c7*/
  }
  byte_8B4185 = 0; /*0x4e65cd*/
  dword_8B4180 = 0; /*0x4e65d3*/
}
} // namespace gamemd

// 0x4E65E0
namespace gamemd {
int sub_4E65E0()
{
  dword_A8EAEC = 0; /*0x4e65e7*/
  dword_A8EAF0 = 0; /*0x4e65ec*/
  byte_A8EAF4 = 1; /*0x4e65f1*/
  byte_A8EAF5 = 0; /*0x4e65f8*/
  dword_A8EAE8 = (int)&DynamicVectorClass_TriggerClass___vftable; /*0x4e65fd*/
  dword_A8EAFC = 10; /*0x4e6607*/
  dword_A8EAF8 = 0; /*0x4e6611*/
  return atexit((void (__cdecl *)(void))sub_4E6620); /*0x4e661c*/
}
} // namespace gamemd

// 0x4E6620
namespace gamemd {
void sub_4E6620()
{
  dword_A8EAE8 = (int)&VectorClass_TriggerClass___vftable; /*0x4e6628*/
  if ( dword_A8EAEC && byte_A8EAF5 ) /*0x4e663c*/
  {
    RA2_OPDEL(dword_A8EAEC); /*0x4e663f*/
    dword_A8EAEC = 0; /*0x4e6647*/
  }
  byte_A8EAF5 = 0; /*0x4e664d*/
  dword_A8EAF0 = 0; /*0x4e6653*/
}
} // namespace gamemd

// 0x4E6660
namespace gamemd {
int sub_4E6660()
{
  dword_8B4194 = 0; /*0x4e6667*/
  dword_8B4198 = 0; /*0x4e666c*/
  byte_8B419C = 1; /*0x4e6671*/
  byte_8B419D = 0; /*0x4e6678*/
  dword_8B4190 = (int)&DynamicVectorClass_BuildingLightClass___vftable; /*0x4e667d*/
  dword_8B41A4 = 10; /*0x4e6687*/
  dword_8B41A0 = 0; /*0x4e6691*/
  return atexit((void (__cdecl *)(void))sub_4E66A0); /*0x4e669c*/
}
} // namespace gamemd

// 0x4E66A0
namespace gamemd {
void sub_4E66A0()
{
  dword_8B4190 = (int)&VectorClass_BuildingLightClass___vftable; /*0x4e66a8*/
  if ( dword_8B4194 && byte_8B419D ) /*0x4e66bc*/
  {
    RA2_OPDEL(dword_8B4194); /*0x4e66bf*/
    dword_8B4194 = 0; /*0x4e66c7*/
  }
  byte_8B419D = 0; /*0x4e66cd*/
  dword_8B4198 = 0; /*0x4e66d3*/
}
} // namespace gamemd

// 0x4E66E0
namespace gamemd {
int sub_4E66E0()
{
  dword_A8020C = 0; /*0x4e66e7*/
  dword_A80210 = 0; /*0x4e66ec*/
  byte_A80214 = 1; /*0x4e66f1*/
  byte_A80215 = 0; /*0x4e66f8*/
  dword_A80208 = (int)&DynamicVectorClass_ParticleSystemClass___vftable; /*0x4e66fd*/
  dword_A8021C = 10; /*0x4e6707*/
  g_GameCleanupState = 0; /*0x4e6711*/
  return atexit((void (__cdecl *)(void))sub_4E6720); /*0x4e671c*/
}
} // namespace gamemd

// 0x4E6720
namespace gamemd {
void sub_4E6720()
{
  dword_A80208 = (int)&VectorClass_ParticleSystemClass___vftable; /*0x4e6728*/
  if ( dword_A8020C && byte_A80215 ) /*0x4e673c*/
  {
    RA2_OPDEL(dword_A8020C); /*0x4e673f*/
    dword_A8020C = 0; /*0x4e6747*/
  }
  byte_A80215 = 0; /*0x4e674d*/
  dword_A80210 = 0; /*0x4e6753*/
}
} // namespace gamemd

// 0x4E6760
namespace gamemd {
int sub_4E6760()
{
  dword_8B413C = 0; /*0x4e6767*/
  dword_8B4140 = 0; /*0x4e676c*/
  byte_8B4144 = 1; /*0x4e6771*/
  byte_8B4145 = 0; /*0x4e6778*/
  dword_8B4138 = (int)&DynamicVectorClass_TubeClass___vftable; /*0x4e677d*/
  dword_8B414C = 10; /*0x4e6787*/
  dword_8B4148 = 0; /*0x4e6791*/
  return atexit((void (__cdecl *)(void))sub_4E67A0); /*0x4e679c*/
}
} // namespace gamemd

// 0x4E67A0
namespace gamemd {
void sub_4E67A0()
{
  dword_8B4138 = (int)&VectorClass_TubeClass___vftable; /*0x4e67a8*/
  if ( dword_8B413C && byte_8B4145 ) /*0x4e67bc*/
  {
    RA2_OPDEL(dword_8B413C); /*0x4e67bf*/
    dword_8B413C = 0; /*0x4e67c7*/
  }
  byte_8B4145 = 0; /*0x4e67cd*/
  dword_8B4140 = 0; /*0x4e67d3*/
}
} // namespace gamemd

// 0x4E67E0
namespace gamemd {
int sub_4E67E0()
{
  dword_A8EC3C = 0; /*0x4e67e7*/
  dword_A8EC40 = 0; /*0x4e67ec*/
  byte_A8EC44 = 1; /*0x4e67f1*/
  byte_A8EC45 = 0; /*0x4e67f8*/
  dword_A8EC38 = (int)&DynamicVectorClass_WaveClass___vftable; /*0x4e67fd*/
  dword_A8EC4C = 10; /*0x4e6807*/
  dword_A8EC48 = 0; /*0x4e6811*/
  return atexit((void (__cdecl *)(void))sub_4E6820); /*0x4e681c*/
}
} // namespace gamemd

// 0x4E6820
namespace gamemd {
void sub_4E6820()
{
  dword_A8EC38 = (int)&VectorClass_WaveClass___vftable; /*0x4e6828*/
  if ( dword_A8EC3C && byte_A8EC45 ) /*0x4e683c*/
  {
    RA2_OPDEL(dword_A8EC3C); /*0x4e683f*/
    dword_A8EC3C = 0; /*0x4e6847*/
  }
  byte_A8EC45 = 0; /*0x4e684d*/
  dword_A8EC40 = 0; /*0x4e6853*/
}
} // namespace gamemd

// 0x4E68A0
namespace gamemd {
void sub_4E68A0()
{
  dword_A8ED40 = (int)&VectorClass_BulletClass___vftable; /*0x4e68a8*/
  if ( dword_A8ED44 && byte_A8ED4D ) /*0x4e68bc*/
  {
    RA2_OPDEL(dword_A8ED44); /*0x4e68bf*/
    dword_A8ED44 = 0; /*0x4e68c7*/
  }
  byte_A8ED4D = 0; /*0x4e68cd*/
  dword_A8ED48 = 0; /*0x4e68d3*/
}
} // namespace gamemd

// 0x4E68E0
namespace gamemd {
int sub_4E68E0()
{
  dword_A8EC54 = 0; /*0x4e68e7*/
  dword_A8EC58 = 0; /*0x4e68ec*/
  byte_A8EC5C = 1; /*0x4e68f1*/
  byte_A8EC5D = 0; /*0x4e68f8*/
  dword_A8EC50 = (int)&DynamicVectorClass_OverlayClass___vftable; /*0x4e68fd*/
  dword_A8EC64 = 10; /*0x4e6907*/
  dword_A8EC60 = 0; /*0x4e6911*/
  return atexit((void (__cdecl *)(void))sub_4E6920); /*0x4e691c*/
}
} // namespace gamemd

// 0x4E6920
namespace gamemd {
void sub_4E6920()
{
  dword_A8EC50 = (int)&VectorClass_OverlayClass___vftable; /*0x4e6928*/
  if ( dword_A8EC54 && byte_A8EC5D ) /*0x4e693c*/
  {
    RA2_OPDEL(dword_A8EC54); /*0x4e693f*/
    dword_A8EC54 = 0; /*0x4e6947*/
  }
  byte_A8EC5D = 0; /*0x4e694d*/
  dword_A8EC58 = 0; /*0x4e6953*/
}
} // namespace gamemd

// 0x4E6960
namespace gamemd {
int sub_4E6960()
{
  dword_A83DCC = 0; /*0x4e6967*/
  dword_A83DD0 = 0; /*0x4e696c*/
  byte_A83DD4 = 1; /*0x4e6971*/
  byte_A83DD5 = 0; /*0x4e6978*/
  dword_A83DC8 = (int)&DynamicVectorClass_ParticleClass___vftable; /*0x4e697d*/
  dword_A83DDC = 10; /*0x4e6987*/
  dword_A83DD8 = 0; /*0x4e6991*/
  return atexit((void (__cdecl *)(void))sub_4E69A0); /*0x4e699c*/
}
} // namespace gamemd

// 0x4E69A0
namespace gamemd {
void sub_4E69A0()
{
  dword_A83DC8 = (int)&VectorClass_ParticleClass___vftable; /*0x4e69a8*/
  if ( dword_A83DCC && byte_A83DD5 ) /*0x4e69bc*/
  {
    RA2_OPDEL(dword_A83DCC); /*0x4e69bf*/
    dword_A83DCC = 0; /*0x4e69c7*/
  }
  byte_A83DD5 = 0; /*0x4e69cd*/
  dword_A83DD0 = 0; /*0x4e69d3*/
}
} // namespace gamemd

// 0x4E69E0
namespace gamemd {
int sub_4E69E0()
{
  dword_A8B1E4 = 0; /*0x4e69e7*/
  dword_A8B1E8 = 0; /*0x4e69ec*/
  byte_A8B1EC = 1; /*0x4e69f1*/
  byte_A8B1ED = 0; /*0x4e69f8*/
  dword_A8B1E0 = (int)&DynamicVectorClass_SmudgeClass___vftable; /*0x4e69fd*/
  dword_A8B1F4 = 10; /*0x4e6a07*/
  dword_A8B1F0 = 0; /*0x4e6a11*/
  return atexit((void (__cdecl *)(void))sub_4E6A20); /*0x4e6a1c*/
}
} // namespace gamemd

// 0x4E6A20
namespace gamemd {
void sub_4E6A20()
{
  dword_A8B1E0 = (int)&VectorClass_SmudgeClass___vftable; /*0x4e6a28*/
  if ( dword_A8B1E4 && byte_A8B1ED ) /*0x4e6a3c*/
  {
    RA2_OPDEL(dword_A8B1E4); /*0x4e6a3f*/
    dword_A8B1E4 = 0; /*0x4e6a47*/
  }
  byte_A8B1ED = 0; /*0x4e6a4d*/
  dword_A8B1E8 = 0; /*0x4e6a53*/
}
} // namespace gamemd

// 0x4E6A60
namespace gamemd {
int sub_4E6A60()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x4E6A60)
}
} // namespace gamemd

// 0x4E6AA0
namespace gamemd {
void sub_4E6AA0()
{
  dword_A8E988 = (int)&VectorClass_TerrainClass___vftable; /*0x4e6aa8*/
  if ( dword_A8E98C && byte_A8E995 ) /*0x4e6abc*/
  {
    RA2_OPDEL(dword_A8E98C); /*0x4e6abf*/
    dword_A8E98C = 0; /*0x4e6ac7*/
  }
  byte_A8E995 = 0; /*0x4e6acd*/
  dword_A8E990 = 0; /*0x4e6ad3*/
}
} // namespace gamemd

// 0x4E6AE0
namespace gamemd {
int sub_4E6AE0()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x4E6AE0)
}
} // namespace gamemd

// 0x4E6B20
namespace gamemd {
void sub_4E6B20()
{
  dword_A83DE8 = (int)&VectorClass_InfantryClass___vftable; /*0x4e6b28*/
  if ( dword_A83DEC && byte_A83DF5 ) /*0x4e6b3c*/
  {
    RA2_OPDEL(dword_A83DEC); /*0x4e6b3f*/
    dword_A83DEC = 0; /*0x4e6b47*/
  }
  byte_A83DF5 = 0; /*0x4e6b4d*/
  dword_A83DF0 = 0; /*0x4e6b53*/
}
} // namespace gamemd

// 0x4E6B60
namespace gamemd {
int sub_4E6B60()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x4E6B60)
}
} // namespace gamemd

// 0x4E6BA0
namespace gamemd {
void sub_4E6BA0()
{
  dword_A8EB40 = (int)&VectorClass_BuildingClass___vftable; /*0x4e6ba8*/
  if ( dword_A8EB44 && byte_A8EB4D ) /*0x4e6bbc*/
  {
    RA2_OPDEL(dword_A8EB44); /*0x4e6bbf*/
    dword_A8EB44 = 0; /*0x4e6bc7*/
  }
  byte_A8EB4D = 0; /*0x4e6bcd*/
  dword_A8EB48 = 0; /*0x4e6bd3*/
}
} // namespace gamemd

// 0x4E6BE0
namespace gamemd {
int sub_4E6BE0()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x4E6BE0)
}
} // namespace gamemd

// 0x4E6C20
namespace gamemd {
void sub_4E6C20()
{
  dword_A8E390 = (int)&VectorClass_AircraftClass___vftable; /*0x4e6c28*/
  if ( dword_A8E394 && byte_A8E39D ) /*0x4e6c3c*/
  {
    RA2_OPDEL(dword_A8E394); /*0x4e6c3f*/
    dword_A8E394 = 0; /*0x4e6c47*/
  }
  byte_A8E39D = 0; /*0x4e6c4d*/
  dword_A8E398 = 0; /*0x4e6c53*/
}
} // namespace gamemd

// 0x4E6C60
namespace gamemd {
int sub_4E6C60()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x4E6C60)
}
} // namespace gamemd

// 0x4E6CA0
namespace gamemd {
void sub_4E6CA0()
{
  dword_8B4108 = (int)&VectorClass_UnitClass___vftable; /*0x4e6ca8*/
  if ( dword_8B410C && byte_8B4115 ) /*0x4e6cbc*/
  {
    RA2_OPDEL(dword_8B410C); /*0x4e6cbf*/
    dword_8B410C = 0; /*0x4e6cc7*/
  }
  byte_8B4115 = 0; /*0x4e6ccd*/
  dword_8B4110 = 0; /*0x4e6cd3*/
}
} // namespace gamemd

// 0x4E6D60
namespace gamemd {
int sub_4E6D60()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x4E6D60)
}
} // namespace gamemd

// 0x4E6DA0
namespace gamemd {
void sub_4E6DA0()
{
  dword_A8E9A8 = (int)&VectorClass_AnimClass___vftable; /*0x4e6da8*/
  if ( dword_A8E9AC && byte_A8E9B5 ) /*0x4e6dbc*/
  {
    RA2_OPDEL(dword_A8E9AC); /*0x4e6dbf*/
    dword_A8E9AC = 0; /*0x4e6dc7*/
  }
  byte_A8E9B5 = 0; /*0x4e6dcd*/
  dword_A8E9B0 = 0; /*0x4e6dd3*/
}
} // namespace gamemd

// 0x4E6DE0
namespace gamemd {
int sub_4E6DE0()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x4E6DE0)
}
} // namespace gamemd

// 0x4E6E20
namespace gamemd {
void sub_4E6E20()
{
  dword_8B40E8 = (int)&VectorClass_TeamClass___vftable; /*0x4e6e28*/
  if ( dword_8B40EC && byte_8B40F5 ) /*0x4e6e3c*/
  {
    RA2_OPDEL(dword_8B40EC); /*0x4e6e3f*/
    dword_8B40EC = 0; /*0x4e6e47*/
  }
  byte_8B40F5 = 0; /*0x4e6e4d*/
  dword_8B40F0 = 0; /*0x4e6e53*/
}
} // namespace gamemd

// 0x4E6E60
namespace gamemd {
int sub_4E6E60()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x4E6E60)
}
} // namespace gamemd

// 0x4E6EA0
namespace gamemd {
void sub_4E6EA0()
{
  dword_A83E30 = (int)&VectorClass_FactoryClass___vftable; /*0x4e6ea8*/
  if ( dword_A83E34 && byte_A83E3D ) /*0x4e6ebc*/
  {
    RA2_OPDEL(dword_A83E34); /*0x4e6ebf*/
    dword_A83E34 = 0; /*0x4e6ec7*/
  }
  byte_A83E3D = 0; /*0x4e6ecd*/
  dword_A83E38 = 0; /*0x4e6ed3*/
}
} // namespace gamemd

// 0x4E6EE0
namespace gamemd {
int sub_4E6EE0()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x4E6EE0)
}
} // namespace gamemd

// 0x4E6F20
namespace gamemd {
void sub_4E6F20()
{
  dword_A83CF8 = (int)&VectorClass_CampaignClass___vftable; /*0x4e6f28*/
  if ( dword_A83CFC && byte_A83D05 ) /*0x4e6f3c*/
  {
    RA2_OPDEL(dword_A83CFC); /*0x4e6f3f*/
    dword_A83CFC = 0; /*0x4e6f47*/
  }
  byte_A83D05 = 0; /*0x4e6f4d*/
  dword_A83D00 = 0; /*0x4e6f53*/
}
} // namespace gamemd

// 0x4E6F60
namespace gamemd {
int sub_4E6F60()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x4E6F60)
}
} // namespace gamemd

// 0x4E6FA0
namespace gamemd {
void sub_4E6FA0()
{
  dword_8B4120 = (int)&VectorClass_SideClass___vftable; /*0x4e6fa8*/
  if ( dword_8B4124 && byte_8B412D ) /*0x4e6fbc*/
  {
    RA2_OPDEL(dword_8B4124); /*0x4e6fbf*/
    dword_8B4124 = 0; /*0x4e6fc7*/
  }
  byte_8B412D = 0; /*0x4e6fcd*/
  dword_8B4128 = 0; /*0x4e6fd3*/
}
} // namespace gamemd

// 0x4E6FE0
namespace gamemd {
int sub_4E6FE0()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x4E6FE0)
}
} // namespace gamemd

// 0x4E7020
namespace gamemd {
void sub_4E7020()
{
  dword_A83C98 = (int)&VectorClass_HouseTypeClass___vftable; /*0x4e7028*/
  if ( dword_A83C9C && byte_A83CA5 ) /*0x4e703c*/
  {
    RA2_OPDEL(dword_A83C9C); /*0x4e703f*/
    dword_A83C9C = 0; /*0x4e7047*/
  }
  byte_A83CA5 = 0; /*0x4e704d*/
  dword_A83CA0 = 0; /*0x4e7053*/
}
} // namespace gamemd

// 0x4E7060
namespace gamemd {
int sub_4E7060()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x4E7060)
}
} // namespace gamemd

// 0x4E70A0
namespace gamemd {
void sub_4E70A0()
{
  dword_A8E8D0 = (int)&VectorClass_TaskForceClass___vftable; /*0x4e70a8*/
  if ( dword_A8E8D4 && byte_A8E8DD ) /*0x4e70bc*/
  {
    RA2_OPDEL(dword_A8E8D4); /*0x4e70bf*/
    dword_A8E8D4 = 0; /*0x4e70c7*/
  }
  byte_A8E8DD = 0; /*0x4e70cd*/
  dword_A8E8D8 = 0; /*0x4e70d3*/
}
} // namespace gamemd

// 0x4E70E0
namespace gamemd {
int sub_4E70E0()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x4E70E0)
}
} // namespace gamemd

// 0x4E7120
namespace gamemd {
void sub_4E7120()
{
  dword_A8ECA0 = (int)&VectorClass_TeamTypeClass___vftable; /*0x4e7128*/
  if ( dword_A8ECA4 && byte_A8ECAD ) /*0x4e713c*/
  {
    RA2_OPDEL(dword_A8ECA4); /*0x4e713f*/
    dword_A8ECA4 = 0; /*0x4e7147*/
  }
  byte_A8ECAD = 0; /*0x4e714d*/
  dword_A8ECA8 = 0; /*0x4e7153*/
}
} // namespace gamemd

// 0x4E7160
namespace gamemd {
int sub_4E7160()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x4E7160)
}
} // namespace gamemd

// 0x4E71A0
namespace gamemd {
void sub_4E71A0()
{
  dword_8B41C8 = (int)&VectorClass_ScriptTypeClass___vftable; /*0x4e71a8*/
  if ( dword_8B41CC && byte_8B41D5 ) /*0x4e71bc*/
  {
    RA2_OPDEL(dword_8B41CC); /*0x4e71bf*/
    dword_8B41CC = 0; /*0x4e71c7*/
  }
  byte_8B41D5 = 0; /*0x4e71cd*/
  dword_8B41D0 = 0; /*0x4e71d3*/
}
} // namespace gamemd

// 0x4E71E0
namespace gamemd {
int sub_4E71E0()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x4E71E0)
}
} // namespace gamemd

// 0x4E7220
namespace gamemd {
void sub_4E7220()
{
  dword_A83D80 = (int)&VectorClass_OverlayTypeClass___vftable; /*0x4e7228*/
  if ( dword_A83D84 && byte_A83D8D ) /*0x4e723c*/
  {
    RA2_OPDEL(dword_A83D84); /*0x4e723f*/
    dword_A83D84 = 0; /*0x4e7247*/
  }
  byte_A83D8D = 0; /*0x4e724d*/
  dword_A83D88 = 0; /*0x4e7253*/
}
} // namespace gamemd

// 0x4E7260
namespace gamemd {
int sub_4E7260()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x4E7260)
}
} // namespace gamemd

// 0x4E72A0
namespace gamemd {
void sub_4E72A0()
{
  dword_A8EC18 = (int)&VectorClass_SmudgeTypeClass___vftable; /*0x4e72a8*/
  if ( dword_A8EC1C && byte_A8EC25 ) /*0x4e72bc*/
  {
    RA2_OPDEL(dword_A8EC1C); /*0x4e72bf*/
    dword_A8EC1C = 0; /*0x4e72c7*/
  }
  byte_A8EC25 = 0; /*0x4e72cd*/
  dword_A8EC20 = 0; /*0x4e72d3*/
}
} // namespace gamemd

// 0x4E72E0
namespace gamemd {
int sub_4E72E0()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x4E72E0)
}
} // namespace gamemd

// 0x4E7320
namespace gamemd {
void sub_4E7320()
{
  dword_A8E318 = (int)&VectorClass_TerrainTypeClass___vftable; /*0x4e7328*/
  if ( dword_A8E31C && byte_A8E325 ) /*0x4e733c*/
  {
    RA2_OPDEL(dword_A8E31C); /*0x4e733f*/
    dword_A8E31C = 0; /*0x4e7347*/
  }
  byte_A8E325 = 0; /*0x4e734d*/
  dword_A8E320 = 0; /*0x4e7353*/
}
} // namespace gamemd

// 0x4E7360
namespace gamemd {
int sub_4E7360()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x4E7360)
}
} // namespace gamemd

// 0x4E73A0
namespace gamemd {
void sub_4E73A0()
{
  dword_A83C68 = (int)&VectorClass_BuildingTypeClass___vftable; /*0x4e73a8*/
  if ( dword_A83C6C && byte_A83C75 ) /*0x4e73bc*/
  {
    RA2_OPDEL(dword_A83C6C); /*0x4e73bf*/
    dword_A83C6C = 0; /*0x4e73c7*/
  }
  byte_A83C75 = 0; /*0x4e73cd*/
  dword_A83C70 = 0; /*0x4e73d3*/
}
} // namespace gamemd

// 0x4E73E0
namespace gamemd {
int sub_4E73E0()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x4E73E0)
}
} // namespace gamemd

// 0x4E7420
namespace gamemd {
void sub_4E7420()
{
  dword_A8B218 = (int)&VectorClass_AircraftTypeClass___vftable; /*0x4e7428*/
  if ( dword_A8B21C && byte_A8B225 ) /*0x4e743c*/
  {
    RA2_OPDEL(dword_A8B21C); /*0x4e743f*/
    dword_A8B21C = 0; /*0x4e7447*/
  }
  byte_A8B225 = 0; /*0x4e744d*/
  dword_A8B220 = 0; /*0x4e7453*/
}
} // namespace gamemd

// 0x4E74E0
namespace gamemd {
int sub_4E74E0()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x4E74E0)
}
} // namespace gamemd

// 0x4E7520
namespace gamemd {
void sub_4E7520()
{
  dword_8B4150 = (int)&VectorClass_AnimTypeClass___vftable; /*0x4e7528*/
  if ( dword_8B4154 && byte_8B415D ) /*0x4e753c*/
  {
    RA2_OPDEL(dword_8B4154); /*0x4e753f*/
    dword_8B4154 = 0; /*0x4e7547*/
  }
  byte_8B415D = 0; /*0x4e754d*/
  dword_8B4158 = 0; /*0x4e7553*/
}
} // namespace gamemd

// 0x4E7560
namespace gamemd {
int sub_4E7560()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x4E7560)
}
} // namespace gamemd

// 0x4E75A0
namespace gamemd {
void sub_4E75A0()
{
  dword_A8E348 = (int)&VectorClass_InfantryTypeClass___vftable; /*0x4e75a8*/
  if ( dword_A8E34C && byte_A8E355 ) /*0x4e75bc*/
  {
    RA2_OPDEL(dword_A8E34C); /*0x4e75bf*/
    dword_A8E34C = 0; /*0x4e75c7*/
  }
  byte_A8E355 = 0; /*0x4e75cd*/
  dword_A8E350 = 0; /*0x4e75d3*/
}
} // namespace gamemd

// 0x4E7660
namespace gamemd {
int sub_4E7660()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x4E7660)
}
} // namespace gamemd

// 0x4E76A0
namespace gamemd {
void sub_4E76A0()
{
  dword_A8EB28 = (int)&VectorClass_VoxelAnimTypeClass___vftable; /*0x4e76a8*/
  if ( dword_A8EB2C && byte_A8EB35 ) /*0x4e76bc*/
  {
    RA2_OPDEL(dword_A8EB2C); /*0x4e76bf*/
    dword_A8EB2C = 0; /*0x4e76c7*/
  }
  byte_A8EB35 = 0; /*0x4e76cd*/
  dword_A8EB30 = 0; /*0x4e76d3*/
}
} // namespace gamemd

// 0x4E76E0
namespace gamemd {
int sub_4E76E0()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x4E76E0)
}
} // namespace gamemd

// 0x4E7720
namespace gamemd {
void sub_4E7720()
{
  dword_A8ED28 = (int)&VectorClass_IsometricTileTypeClass___vftable; /*0x4e7728*/
  if ( dword_A8ED2C && byte_A8ED35 ) /*0x4e773c*/
  {
    RA2_OPDEL(dword_A8ED2C); /*0x4e773f*/
    dword_A8ED2C = 0; /*0x4e7747*/
  }
  byte_A8ED35 = 0; /*0x4e774d*/
  dword_A8ED30 = 0; /*0x4e7753*/
}
} // namespace gamemd

// 0x4E7760
namespace gamemd {
int sub_4E7760()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x4E7760)
}
} // namespace gamemd

// 0x4E77A0
namespace gamemd {
void sub_4E77A0()
{
  dword_A83D98 = (int)&VectorClass_ParticleTypeClass___vftable; /*0x4e77a8*/
  if ( dword_A83D9C && byte_A83DA5 ) /*0x4e77bc*/
  {
    RA2_OPDEL(dword_A83D9C); /*0x4e77bf*/
    dword_A83D9C = 0; /*0x4e77c7*/
  }
  byte_A83DA5 = 0; /*0x4e77cd*/
  dword_A83DA0 = 0; /*0x4e77d3*/
}
} // namespace gamemd

// 0x4E77E0
namespace gamemd {
int sub_4E77E0()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x4E77E0)
}
} // namespace gamemd

// 0x4E7820
namespace gamemd {
void sub_4E7820()
{
  dword_A83D68 = (int)&VectorClass_ParticleSystemTypeClass___vftable; /*0x4e7828*/
  if ( dword_A83D6C && byte_A83D75 ) /*0x4e783c*/
  {
    RA2_OPDEL(dword_A83D6C); /*0x4e783f*/
    dword_A83D6C = 0; /*0x4e7847*/
  }
  byte_A83D75 = 0; /*0x4e784d*/
  dword_A83D70 = 0; /*0x4e7853*/
}
} // namespace gamemd

// 0x4E7860
namespace gamemd {
int sub_4E7860()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x4E7860)
}
} // namespace gamemd

// 0x4E78A0
namespace gamemd {
void sub_4E78A0()
{
  dword_A8E330 = (int)&VectorClass_SuperWeaponTypeClass___vftable; /*0x4e78a8*/
  if ( dword_A8E334 && byte_A8E33D ) /*0x4e78bc*/
  {
    RA2_OPDEL(dword_A8E334); /*0x4e78bf*/
    dword_A8E334 = 0; /*0x4e78c7*/
  }
  byte_A8E33D = 0; /*0x4e78cd*/
  dword_A8E338 = 0; /*0x4e78d3*/
}
} // namespace gamemd

// 0x4E78E0
namespace gamemd {
int sub_4E78E0()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x4E78E0)
}
} // namespace gamemd

// 0x4E7920
namespace gamemd {
void sub_4E7920()
{
  dword_A83CB8 = (int)&VectorClass_SuperClass___vftable; /*0x4e7928*/
  if ( dword_A83CBC && byte_A83CC5 ) /*0x4e793c*/
  {
    RA2_OPDEL(dword_A83CBC); /*0x4e793f*/
    dword_A83CBC = 0; /*0x4e7947*/
  }
  byte_A83CC5 = 0; /*0x4e794d*/
  dword_A83CC0 = 0; /*0x4e7953*/
}
} // namespace gamemd

// 0x4E7960
namespace gamemd {
int sub_4E7960()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x4E7960)
}
} // namespace gamemd

// 0x4E79A0
namespace gamemd {
void sub_4E79A0()
{
  stru_A83D50 = (int)&VectorClass_SuperClass___vftable; /*0x4e79a8*/
  if ( dword_A83D54 && byte_A83D5D ) /*0x4e79bc*/
  {
    RA2_OPDEL(dword_A83D54); /*0x4e79bf*/
    dword_A83D54 = 0; /*0x4e79c7*/
  }
  byte_A83D5D = 0; /*0x4e79cd*/
  dword_A83D58 = 0; /*0x4e79d3*/
}
} // namespace gamemd

// 0x4E79E0
namespace gamemd {
int sub_4E79E0()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x4E79E0)
}
} // namespace gamemd

// 0x4E7A20
namespace gamemd {
void sub_4E7A20()
{
    // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x4E7A20)
}
} // namespace gamemd

// 0x4E7A60
namespace gamemd {
int sub_4E7A60()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x4E7A60)
}
} // namespace gamemd

// 0x4E7AA0
namespace gamemd {
void sub_4E7AA0()
{
  stru_A8EB00 = (int)&VectorClass_TechnoTypeClass___vftable; /*0x4e7aa8*/
  if ( dword_A8EB04 && byte_A8EB0D ) /*0x4e7abc*/
  {
    RA2_OPDEL(dword_A8EB04); /*0x4e7abf*/
    dword_A8EB04 = 0; /*0x4e7ac7*/
  }
  byte_A8EB0D = 0; /*0x4e7acd*/
  dword_A8EB08 = 0; /*0x4e7ad3*/
}
} // namespace gamemd

// 0x4E7AE0
namespace gamemd {
int sub_4E7AE0()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x4E7AE0)
}
} // namespace gamemd

// 0x4E7B20
namespace gamemd {
void sub_4E7B20()
{
    // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x4E7B20)
}
} // namespace gamemd

// 0x4E7B60
namespace gamemd {
int sub_4E7B60()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x4E7B60)
}
} // namespace gamemd

// 0x4E7BA0
namespace gamemd {
void sub_4E7BA0()
{
  dword_A8E968 = (int)&VectorClass_AbstractTypeClass___vftable; /*0x4e7ba8*/
  if ( dword_A8E96C && byte_A8E975 ) /*0x4e7bbc*/
  {
    RA2_OPDEL(dword_A8E96C); /*0x4e7bbf*/
    dword_A8E96C = 0; /*0x4e7bc7*/
  }
  byte_A8E975 = 0; /*0x4e7bcd*/
  dword_A8E970 = 0; /*0x4e7bd3*/
}
} // namespace gamemd

// 0x4E7BE0
namespace gamemd {
int sub_4E7BE0()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x4E7BE0)
}
} // namespace gamemd

// 0x4E7C20
namespace gamemd {
void sub_4E7C20()
{
  dword_8B41E0 = (int)&VectorClass_BuildingClass___vftable; /*0x4e7c28*/
  if ( dword_8B41E4 && byte_8B41ED ) /*0x4e7c3c*/
  {
    RA2_OPDEL(dword_8B41E4); /*0x4e7c3f*/
    dword_8B41E4 = 0; /*0x4e7c47*/
  }
  byte_8B41ED = 0; /*0x4e7c4d*/
  dword_8B41E8 = 0; /*0x4e7c53*/
}
} // namespace gamemd

// 0x4E7C60
namespace gamemd {
int sub_4E7C60()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x4E7C60)
}
} // namespace gamemd

// 0x4E7CA0
namespace gamemd {
void sub_4E7CA0()
{
  dword_A83E00 = (int)&VectorClass_AnimClass___vftable; /*0x4e7ca8*/
  if ( dword_A83E04 && byte_A83E0D ) /*0x4e7cbc*/
  {
    RA2_OPDEL(dword_A83E04); /*0x4e7cbf*/
    dword_A83E04 = 0; /*0x4e7cc7*/
  }
  byte_A83E0D = 0; /*0x4e7ccd*/
  dword_A83E08 = 0; /*0x4e7cd3*/
}
} // namespace gamemd

// 0x4E7CE0
namespace gamemd {
void sub_4E7CE0()
{
    // TODO stub - quarantined G42 T9 (raw vtable install on int global; truth = .omo/ida_cache/func_0x4E7CE0.json)
}
} // namespace gamemd

// 0x4E7D10
namespace gamemd {
int sub_4E7D10()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x4E7D10)
}
} // namespace gamemd

// 0x4E7D30
namespace gamemd {
int unknown_libname_13()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x4E7D30)
}
} // namespace gamemd

// 0x4E7D40
namespace gamemd {
int sub_4E7D40()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x4E7D40)
}
} // namespace gamemd

// 0x4E7D80
namespace gamemd {
void sub_4E7D80()
{
    // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x4E7D80)
}
} // namespace gamemd

// 0x4E7DC0
namespace gamemd {
int sub_4E7DC0()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x4E7DC0)
}
} // namespace gamemd

// 0x4E7DE0
namespace gamemd {
void sub_4E7DE0()
{
  dword_A8ECE0 = (int)&VersionClass_vftable; /*0x4e7de0*/
}
} // namespace gamemd

// 0x4E7DF0
namespace gamemd {
int sub_4E7DF0()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x4E7DF0)
}
} // namespace gamemd

// 0x4E7E10
namespace gamemd {
int unknown_libname_14()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x4E7E10)
}
} // namespace gamemd

// 0x4E7E20
namespace gamemd {
int unknown_libname_15()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x4E7E20)
}
} // namespace gamemd

// 0x4E7E30
namespace gamemd {
int sub_4E7E30()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x4E7E30)
}
} // namespace gamemd

// 0x4E7E50
namespace gamemd {
void sub_4E7E50()
{
  dword_A83D24 = (int)&VectorClass_ThemeControl___vftable; /*0x4e7e58*/
  if ( dword_A83D28 && byte_A83D31 ) /*0x4e7e6c*/
  {
    RA2_OPDEL(dword_A83D28); /*0x4e7e6f*/
    dword_A83D28 = 0; /*0x4e7e77*/
  }
  byte_A83D31 = 0; /*0x4e7e7d*/
  dword_A83D2C = 0; /*0x4e7e83*/
}
} // namespace gamemd

// 0x4E7E90
namespace gamemd {
int unknown_libname_16()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x4E7E90)
}
} // namespace gamemd

// 0x4E7ED0
namespace gamemd {
char * sub_4E7ED0()
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x4E7ED0)
}
} // namespace gamemd

// 0x4E7F00
namespace gamemd {
unsigned char * sub_4E7F00()
{
  unsigned char *result; // eax
  int v1; // ecx

  result = &unk_A83EDC; /*0x4e7f00*/
  v1 = 256; /*0x4e7f05*/
  do /*0x4e7f12*/
  {
    *result = 0; /*0x4e7f0c*/
    result += 111; /*0x4e7f0e*/
    --v1; /*0x4e7f11*/
  }
  while ( v1 ); /*0x4e7f12*/
  dword_A83ED0 = 0; /*0x4e7f14*/
  dword_A83ED4 = 0; /*0x4e7f1a*/
  dword_A83ED8 = 0; /*0x4e7f20*/
  return result; /*0x4e7f26*/
}
} // namespace gamemd

// 0x4E7F30
namespace gamemd {
int sub_4E7F30()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x4E7F30)
}
} // namespace gamemd

// 0x4E7F70
namespace gamemd {
void sub_4E7F70()
{
  dword_8B41A8 = (int)&VectorClass_TagClass___vftable; /*0x4e7f78*/
  if ( dword_8B41AC && byte_8B41B5 ) /*0x4e7f8c*/
  {
    RA2_OPDEL(dword_8B41AC); /*0x4e7f8f*/
    dword_8B41AC = 0; /*0x4e7f97*/
  }
  byte_8B41B5 = 0; /*0x4e7f9d*/
  dword_8B41B0 = 0; /*0x4e7fa3*/
}
} // namespace gamemd

// 0x4E7FB0
namespace gamemd {
int sub_4E7FB0()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x4E7FB0)
}
} // namespace gamemd

// 0x4E7FF0
namespace gamemd {
void sub_4E7FF0()
{
  dword_8B40C8 = (int)&VectorClass_TagClass___vftable; /*0x4e7ff8*/
  if ( dword_8B40CC && byte_8B40D5 ) /*0x4e800c*/
  {
    RA2_OPDEL(dword_8B40CC); /*0x4e800f*/
    dword_8B40CC = 0; /*0x4e8017*/
  }
  byte_8B40D5 = 0; /*0x4e801d*/
  dword_8B40D0 = 0; /*0x4e8023*/
}
} // namespace gamemd

// 0x4E8030
namespace gamemd {
int sub_4E8030()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x4E8030)
}
} // namespace gamemd

// 0x4E8050
namespace gamemd {
int unknown_libname_17()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x4E8050)
}
} // namespace gamemd

// 0x4E8060
namespace gamemd {
int sub_4E8060()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x4E8060)
}
} // namespace gamemd

// 0x4E80A0
namespace gamemd {
int sub_4E80A0()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x4E80A0)
}
} // namespace gamemd

// 0x4E80E0
namespace gamemd {
int unknown_libname_19()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x4E80E0)
}
} // namespace gamemd

// 0x4E80F0
namespace gamemd {
int sub_4E80F0()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x4E80F0)
}
} // namespace gamemd

// 0x4E8110
namespace gamemd {
int unknown_libname_20()
{
  nullsub_54(); /*0x4e8115*/
    return 0; // TODO stub - quarantined G42 T9 (raw body; truth = 0x4E8110)
} // namespace gamemd

// 0x4E8120
namespace gamemd {
char sub_4E8120()
{
  byte_A83CD9 = 0; /*0x4e8122*/
  word_A83CDA = 0; /*0x4e8127*/
  return 0; /*0x4e8131*/
}
} // namespace gamemd

// 0x4E8140
namespace gamemd {
char sub_4E8140()
{
  byte_A83CD4 = 127; /*0x4e8142*/
  byte_A83CD5 = 127; /*0x4e8147*/
  byte_A83CD6 = 127; /*0x4e814c*/
  return 127; /*0x4e8151*/
}
} // namespace gamemd

// 0x4E8160
namespace gamemd {
char sub_4E8160()
{
  stru_A80220 = -1; /*0x4e8162*/
  DataGlobal_A80221 = -1; /*0x4e8167*/
  return -1; /*0x4e8171*/
}
} // namespace gamemd

// 0x4E8180
namespace gamemd {
char sub_4E8180()
{
  byte_A8EAE4 = -1; /*0x4e8182*/
  word_A8EAE5 = 0; /*0x4e8189*/
  return 0; /*0x4e8193*/
}
} // namespace gamemd

// 0x4E81A0
namespace gamemd {
char sub_4E81A0()
{
  byte_A83EC9 = -1; /*0x4e81a2*/
  byte_A83EC8 = 0; /*0x4e81a9*/
  byte_A83ECA = 0; /*0x4e81ae*/
  return 0; /*0x4e81b3*/
}
} // namespace gamemd

// 0x4E81C0
namespace gamemd {
char sub_4E81C0()
{
  byte_A8E8C6 = -1; /*0x4e81c2*/
  byte_A8E8C4 = 0; /*0x4e81c9*/
  byte_A8E8C5 = 0; /*0x4e81ce*/
  return 0; /*0x4e81d3*/
}
} // namespace gamemd

// 0x4E81E0
namespace gamemd {
char sub_4E81E0()
{
  byte_A83DC0 = 0; /*0x4e81e2*/
  byte_A83DC1 = -1; /*0x4e81e9*/
  byte_A83DC2 = -1; /*0x4e81ee*/
  return -1; /*0x4e81f3*/
}
} // namespace gamemd

// 0x4E8200
namespace gamemd {
char sub_4E8200()
{
  byte_8B40E1 = 0; /*0x4e8202*/
  byte_8B40E0 = -1; /*0x4e8209*/
  byte_8B40E2 = -1; /*0x4e820e*/
  return -1; /*0x4e8213*/
}
} // namespace gamemd

// 0x4E8220
namespace gamemd {
char sub_4E8220()
{
  byte_A8E982 = 0; /*0x4e8222*/
  byte_A8E980 = -1; /*0x4e8229*/
  byte_A8E981 = -1; /*0x4e822e*/
  return -1; /*0x4e8233*/
}
} // namespace gamemd

// 0x4E92F0
namespace gamemd {
void HouseClass_vt_03_free_()
{
     // TODO stub - quarantined G42 T9 (raw this-body; truth = .omo/ida_cache/)
}
} // namespace gamemd

// 0x4E9320
namespace gamemd {
int HouseClass_vt_04_free_(int * a2)
{
    return 0; // TODO stub - quarantined G42 T9 (raw this-body; truth = .omo/ida_cache/)
}
} // namespace gamemd

// 0x4E9360
namespace gamemd {
unsigned int HouseClass_vt_05_free_(int a2)
{
    return 0; // TODO stub - quarantined G42 T9 (raw this-body; truth = .omo/ida_cache/)
}
} // namespace gamemd

// 0x4E9F00
namespace gamemd {
int ParticleSystemClass_vt_04_free_(int * a2)
{
    return 0; // TODO stub - quarantined G42 T9 (raw this-body; truth = .omo/ida_cache/)
}
} // namespace gamemd

// 0x4E9F40
namespace gamemd {
unsigned int ParticleSystemClass_vt_05_free_(int a2)
{
    return 0; // TODO stub - quarantined G42 T9 (raw this-body; truth = .omo/ida_cache/)
}
} // namespace gamemd

// 0x4EF4E0
namespace gamemd {
VectorClass_flat * HouseClass_vt_00__free(unsigned int * Block, char a2)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x4EF4E0)
}
} // namespace gamemd

// 0x4EF800
namespace gamemd {
VectorClass_flat * ParticleSystemClass_vt_00__free(unsigned int * Block, char a2)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x4EF800)
}
} // namespace gamemd

} // namespace gamemd  // G42.35p: EOF close restored (depth was 1)
