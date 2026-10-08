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

  char * v3;
  char * v4;
  char * v5;
  char * v6;
  char * v7;
  char * v8;
  char * v9;
  char * v10;
  void *vtable0; // eax
  char * v13;
  int abstractFlags; // ecx

  INIClass::ResetSection(((INIClass*)((INIClass *)a2))); /*0x5b376a*/
  if ( this->vtable1 == (void *)-1 ) /*0x5b3774*/
    v3 = g_Str__none_; /*0x5b3776*/
  else
    v3 = (char *)off_816CAC[(int)this->vtable1]; /*0x5b377d*/
  if ( !INIClass::BinarySearchSection(((INIClass *)((int)a2)), (uint8_t *)v3) ) /*0x5b3787*/
    return 0; /*0x5b3906*/
  if ( this->vtable1 == (void *)-1 ) /*0x5b379e*/
    v4 = g_Str__none_; /*0x5b37a0*/
  else
    v4 = (char *)off_816CAC[(int)this->vtable1]; /*0x5b37a7*/
  LOBYTE(((unsigned int *)this)[0]) = INIClass::ReadBool_Overwrite((INIClass *)(/*0x5b37bf*/
                      a2), (uint8_t *)v4, (uint8_t *)"NoThreat", (char)((unsigned int *)this)[0]);
  if ( this->vtable1 == (void *)-1 ) /*0x5b37c7*/
    v5 = g_Str__none_; /*0x5b37c9*/
  else
    v5 = (char *)off_816CAC[(int)this->vtable1]; /*0x5b37d0*/
  BYTE1(((unsigned int *)this)[0]) = INIClass::ReadBool_Overwrite((INIClass *)(/*0x5b37e8*/
                     a2), (uint8_t *)v5, (uint8_t *)"Zombie", BYTE1(((unsigned int *)this)[0]));
  if ( this->vtable1 == (void *)-1 ) /*0x5b37f0*/
    v6 = g_Str__none_; /*0x5b37f2*/
  else
    v6 = (char *)off_816CAC[(int)this->vtable1]; /*0x5b37f9*/
  BYTE2(((unsigned int *)this)[0]) = INIClass::ReadBool_Overwrite((INIClass *)(/*0x5b3811*/
                     a2), (uint8_t *)v6, (uint8_t *)"Recruitable", BYTE2(((unsigned int *)this)[0]));
  if ( this->vtable1 == (void *)-1 ) /*0x5b3819*/
    v7 = g_Str__none_; /*0x5b381b*/
  else
    v7 = (char *)off_816CAC[(int)this->vtable1]; /*0x5b3822*/
  HIBYTE(((unsigned int *)this)[0]) = INIClass::ReadBool_Overwrite((INIClass *)(/*0x5b383a*/
                      a2), (uint8_t *)v7, (uint8_t *)((char *)&stru_82BA00), HIBYTE(((unsigned int *)this)[0]));
  if ( this->vtable1 == (void *)-1 ) /*0x5b3842*/
    v8 = g_Str__none_; /*0x5b3844*/
  else
    v8 = (char *)off_816CAC[(int)this->vtable1]; /*0x5b384b*/
  LOBYTE(((unsigned int *)this)[0]) = INIClass::ReadBool_Overwrite((INIClass *)(/*0x5b3863*/
                      a2), (uint8_t *)v8, (uint8_t *)"Retaliate", (char)((unsigned int *)this)[0]);
  if ( this->vtable1 == (void *)-1 ) /*0x5b386b*/
    v9 = g_Str__none_; /*0x5b386d*/
  else
    v9 = (char *)off_816CAC[(int)this->vtable1]; /*0x5b3874*/
  BYTE1(((unsigned int *)this)[0]) = INIClass::ReadBool_Overwrite((INIClass *)(/*0x5b388c*/
                     a2), (uint8_t *)v9, (uint8_t *)"Scatter", BYTE1(((unsigned int *)this)[0]));
  if ( this->vtable1 == (void *)-1 ) /*0x5b3894*/
    v10 = g_Str__none_; /*0x5b3896*/
  else
    v10 = (char *)off_816CAC[(int)this->vtable1]; /*0x5b389d*/
  INIClass::ReadDouble_Overwrite((INIClass *)(/*0x5b38b4*/
    (double *)a2), (uint8_t *)v10, (uint8_t *)g_INI_Key_Rate, *(double *)&((unsigned int *)this)[0]);
  vtable0 = (void *)((char *)(this->vtable1));
  __asm { fstp qword ptr [esi+10h] } /*0x5b38bb*/
  *(double *)&((unsigned int *)this)[0] = _RT1; /*0x5b38bb*/
  if ( vtable0 == (void *)-1 ) /*0x5b38c1*/
    v13 = g_Str__none_; /*0x5b38c3*/
  else
    v13 = (char *)off_816CAC[(unsigned int)vtable0]; /*0x5b38ca*/
  INIClass::ReadDouble_Overwrite((INIClass *)((double *)a2), (uint8_t *)v13, (uint8_t *)"AARate", 0.0); /*0x5b38dd*/
  __asm { fst qword ptr [esi+18h] } /*0x5b38e2*/
  *(double *)&((unsigned int *)this)[0] = _RT1; /*0x5b38e2*/
  __asm /*0x5b38e5*/
  {
    fcomp ds:dbl_7E2800
    fnstsw ax
  }
  if ( (_AX & 0x4000) != 0 ) /*0x5b38f0*/
  {
    abstractFlags = ((unsigned int *)this)[0]; /*0x5b38f5*/
    ((unsigned int *)this)[0] = ((unsigned int *)this)[0]; /*0x5b38f8*/
    ((unsigned int *)this)[0] = abstractFlags; /*0x5b38fb*/
  }
  return (gamemd::AbstractClass **)(1);

}
} // namespace ra2

// 0x41BF30
namespace gamemd {
int MissionClass::vt_entry_1FC()
{

  int result; // eax

  LOBYTE(result) = 0; /*0x41bf30*/
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

  return this->suspendedMission != (char [4])(-1); /*0x5b3a1e*/

}
} // namespace gamemd
