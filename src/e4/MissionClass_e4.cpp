// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/MissionClass_e4.hpp"
#include "e4/classes/INIClass_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/AnimClass_e4.hpp"
#include "e4/classes/Mission_e4.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/ObjectClass_e4.hpp"
#include "e4/classes/AudioController_e4.hpp"
#include "e4/classes/ScriptClass_e4.hpp"

// 0x5B3760
namespace gamemd {
AbstractClass * * MissionClass::LoadFromINI(unsigned int *a2)
{
  char *v3; // eax
  char *v4; // eax
  char *v5; // eax
  char *v6; // eax
  char *v7; // eax
  char *v8; // eax
  char *v9; // eax
  char *v10; // eax
  void *vtable0; // eax
  char *v13; // eax
  int abstractFlags; // ecx

  INIClass::ResetSection((INIClass *)a2); /*0x5b376a*/
  if ( this->vfptr == (void *)-1 ) /*0x5b3774*/
    v3 = g_Str__none_; /*0x5b3776*/
  else
    v3 = off_816CAC[(int)this->vfptr]; /*0x5b377d*/
  if ( !INIClass::BinarySearchSection((int)a2, (unsigned __int8 *)v3) ) /*0x5b3787*/
    return 0; /*0x5b3906*/
  if ( this->vfptr == (void *)-1 ) /*0x5b379e*/
    v4 = g_Str__none_; /*0x5b37a0*/
  else
    v4 = off_816CAC[(int)this->vfptr]; /*0x5b37a7*/
  IDA_LOBYTE(this->vfptr1) = INIClass::ReadBool_Overwrite( /*0x5b37bf*/
                           a2,
                           (unsigned __int8 *)v4,
                           (unsigned __int8 *)&stru_82BA00.Weapon[8],
                           (char)this->vfptr1);
  if ( this->vfptr == (void *)-1 ) /*0x5b37c7*/
    v5 = g_Str__none_; /*0x5b37c9*/
  else
    v5 = off_816CAC[(int)this->vfptr]; /*0x5b37d0*/
  IDA_BYTE1(this->vfptr1) = INIClass::ReadBool_Overwrite( /*0x5b37e8*/
                          a2,
                          (unsigned __int8 *)v5,
                          (unsigned __int8 *)&stru_82BA00.Weapon[6],
                          IDA_BYTE1(this->vfptr1));
  if ( this->vfptr == (void *)-1 ) /*0x5b37f0*/
    v6 = g_Str__none_; /*0x5b37f2*/
  else
    v6 = off_816CAC[(int)this->vfptr]; /*0x5b37f9*/
  IDA_BYTE2(this->vfptr1) = INIClass::ReadBool_Overwrite( /*0x5b3811*/
                          a2,
                          (unsigned __int8 *)v6,
                          (unsigned __int8 *)&stru_82BA00.Weapon[3],
                          IDA_BYTE2(this->vfptr1));
  if ( this->vfptr == (void *)-1 ) /*0x5b3819*/
    v7 = g_Str__none_; /*0x5b381b*/
  else
    v7 = off_816CAC[(int)this->vfptr]; /*0x5b3822*/
  IDA_HIBYTE(this->vfptr1) = INIClass::ReadBool_Overwrite( /*0x5b383a*/
                           a2,
                           (unsigned __int8 *)v7,
                           (unsigned __int8 *)stru_82BA00.Weapon,
                           IDA_HIBYTE(this->vfptr1));
  if ( this->vfptr == (void *)-1 ) /*0x5b3842*/
    v8 = g_Str__none_; /*0x5b3844*/
  else
    v8 = off_816CAC[(int)this->vfptr]; /*0x5b384b*/
  IDA_LOBYTE(this->vfptr2) = INIClass::ReadBool_Overwrite( /*0x5b3863*/
                           a2,
                           (unsigned __int8 *)v8,
                           (unsigned __int8 *)&stru_82BA00.TurretWeapon[30],
                           (char)this->vfptr2);
  if ( this->vfptr == (void *)-1 ) /*0x5b386b*/
    v9 = g_Str__none_; /*0x5b386d*/
  else
    v9 = off_816CAC[(int)this->vfptr]; /*0x5b3874*/
  IDA_BYTE1(this->vfptr2) = INIClass::ReadBool_Overwrite( /*0x5b388c*/
                          a2,
                          (unsigned __int8 *)v9,
                          (unsigned __int8 *)&stru_82BA00.TurretWeapon[28],
                          IDA_BYTE1(this->vfptr2));
  if ( this->vfptr == (void *)-1 ) /*0x5b3894*/
    v10 = g_Str__none_; /*0x5b3896*/
  else
    v10 = off_816CAC[(int)this->vfptr]; /*0x5b389d*/
  INIClass::ReadDouble_Overwrite( /*0x5b38b4*/
    (double *)a2,
    (unsigned __int8 *)v10,
    (unsigned __int8 *)g_INI_Key_Rate,
    *(double *)&this->uniqueId);
  vtable0 = this->vfptr; /*0x5b38b9*/
  __asm { fstp qword ptr [esi+10h] } /*0x5b38bb*/
  *(double *)&this->uniqueId = _RT1; /*0x5b38bb*/
  if ( vtable0 == (void *)-1 ) /*0x5b38c1*/
    v13 = g_Str__none_; /*0x5b38c3*/
  else
    v13 = off_816CAC[(_DWORD)vtable0]; /*0x5b38ca*/
  INIClass::ReadDouble_Overwrite( /*0x5b38dd*/
    (double *)a2,
    (unsigned __int8 *)v13,
    (unsigned __int8 *)&stru_82BA00.TurretWeapon[26],
    0.0);
  __asm { fst qword ptr [esi+18h] } /*0x5b38e2*/
  *(double *)&this->nextArrayIndex = _RT1; /*0x5b38e2*/
  __asm /*0x5b38e5*/
  {
    fcomp ds:dbl_7E2800
    fnstsw ax
  }
  if ( (_AX & 0x4000) != 0 ) /*0x5b38f0*/
  {
    abstractFlags = this->abstractFlags; /*0x5b38f5*/
    this->nextArrayIndex = this->uniqueId; /*0x5b38f8*/
    this->referenceCount = abstractFlags; /*0x5b38fb*/
  }
  return 1; /*0x5b38fe*/
}
} // namespace ra2

// 0x41BF30
namespace gamemd {
int MissionClass::vt_entry_1FC()
{
  int result; // eax

  IDA_LOBYTE(result) = 0; /*0x41bf30*/
  return result; /*0x41bf32*/
}
} // namespace gamemd

// 0x5B2E10
namespace gamemd {
int MissionClass::Return450A()
{
  return 450; /*0x5b2e15*/
}
} // namespace gamemd

// 0x5B2E20
namespace gamemd {
int MissionClass::Return450B()
{
  return 450; /*0x5b2e25*/
}
} // namespace gamemd

// 0x5B2E30
namespace gamemd {
int MissionClass::Return450C()
{
  return 450; /*0x5b2e35*/
}
} // namespace gamemd

// 0x5B2ED0
namespace gamemd {
int MissionClass::Return450D()
{
  return 450; /*0x5b2ed5*/
}
} // namespace gamemd

// 0x5B2EE0
namespace gamemd {
int MissionClass::Return450E()
{
  return 450; /*0x5b2ee5*/
}
} // namespace gamemd

// 0x5B2F10
namespace gamemd {
int MissionClass::Return450G()
{
  return 450; /*0x5b2f15*/
}
} // namespace gamemd

// 0x5B2F20
namespace gamemd {
int MissionClass::Return450H()
{
  return 450; /*0x5b2f25*/
}
} // namespace gamemd

// 0x5B2F40
namespace gamemd {
int MissionClass::Return450I()
{
  return 450; /*0x5b2f45*/
}
} // namespace gamemd

// 0x5B2F50
namespace gamemd {
int MissionClass::Return450J()
{
  return 450; /*0x5b2f55*/
}
} // namespace gamemd

// 0x5B2F80
namespace gamemd {
int MissionClass::Return450K()
{
  return 450; /*0x5b2f85*/
}
} // namespace gamemd

// 0x5B2F90
namespace gamemd {
int MissionClass::Return450L()
{
  return 450; /*0x5b2f95*/
}
} // namespace gamemd

// 0x5B2FA0
namespace gamemd {
int MissionClass::Return450F()
{
  return 450; /*0x5b2fa5*/
}
} // namespace gamemd

// 0x5B2FB0
namespace gamemd {
int MissionClass::Return450M()
{
  return 450; /*0x5b2fb5*/
}
} // namespace gamemd

// 0x5B2FC0
namespace gamemd {
int MissionClass::Return450N()
{
  return 450; /*0x5b2fc5*/
}
} // namespace gamemd

// 0x5B3A10
namespace gamemd {
int MissionClass::HasValidTarget()
{
  return this->suspendedMission != -1; /*0x5b3a1e*/
}
} // namespace gamemd
