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
// X129: fresh-render label declarations (auto, idempotent)
extern unsigned char aNothreat[9];  // data: 0x82C2B8
extern unsigned char aParalyzed[10];  // data: 0x82C298
extern unsigned char aRecruitable[12];  // data: 0x82C2A4
extern unsigned char aRetaliate[10];  // data: 0x82C28C
extern unsigned char aScatter[8];  // data: 0x82C284
extern unsigned char aZombie[7];  // data: 0x82C2B0

// 0x5B3760
namespace gamemd {  // G42.18 ns repair
AbstractClass * * MissionClass::LoadFromINI(unsigned int *a2, void *a2_1)
{

  char *v3; // eax
  char *v4; // eax
  char *v5; // eax
  char *v6; // eax
  char *v7; // eax
  char *v8; // eax
  char *v9; // eax
  char *v10; // eax
  int vfptr; // eax
  char *v13; // eax
  int abstractFlags; // ecx

  INIClass::ResetSection((INIClass *)a2);  /*0x5b376a*/
  if ( this->ptr_0 == (void *)-1 )
    v3 = g_Str__none_;  /*0x5b3776*/  /*0x5b3774*/
  else
    v3 = off_816CAC[(int)this->ptr_0];  /*0x5b377d*/
  if ( !INIClass::BinarySearchSection((int)a2, (unsigned __int8 *)v3) )
    return 0;  /*0x5b3906*/  /*0x5b3787*/
  if ( this->ptr_0 == (void *)-1 )
    v4 = g_Str__none_;  /*0x5b37a0*/  /*0x5b379e*/
  else
    v4 = off_816CAC[(int)this->ptr_0];  /*0x5b37a7*/
  LOBYTE(this->ptr_4) = INIClass::ReadBool_Overwrite(a2, (unsigned __int8 *)v4, aNothreat, this->ptr_4[0]);  /*0x5b37bf*/
  if ( this->ptr_0 == (void *)-1 )
    v5 = g_Str__none_;  /*0x5b37c9*/  /*0x5b37c7*/
  else
    v5 = off_816CAC[(int)this->ptr_0];  /*0x5b37d0*/
  BYTE1(this->q005) = INIClass::ReadBool_Overwrite(a2, (unsigned __int8 *)v5, aZombie, BYTE1(this->q005));  /*0x5b37e8*/
  if ( this->ptr_0 == (void *)-1 )
    v6 = g_Str__none_;  /*0x5b37f2*/  /*0x5b37f0*/
  else
    v6 = off_816CAC[(int)this->ptr_0];  /*0x5b37f9*/
  BYTE2(this->q006) = INIClass::ReadBool_Overwrite(a2, (unsigned __int8 *)v6, aRecruitable, BYTE2(this->q006));  /*0x5b3811*/
  if ( this->ptr_0 == (void *)-1 )
    v7 = g_Str__none_;  /*0x5b381b*/  /*0x5b3819*/
  else
    v7 = off_816CAC[(int)this->ptr_0];  /*0x5b3822*/
  HIBYTE(this->q007) = INIClass::ReadBool_Overwrite(a2, (unsigned __int8 *)v7, aParalyzed, HIBYTE(this->q007));  /*0x5b383a*/
  if ( this->ptr_0 == (void *)-1 )
    v8 = g_Str__none_;  /*0x5b3844*/  /*0x5b3842*/
  else
    v8 = off_816CAC[(int)this->ptr_0];  /*0x5b384b*/
  LOBYTE(this->ptr_8) = INIClass::ReadBool_Overwrite(a2, (unsigned __int8 *)v8, aRetaliate, this->ptr_8[0]);  /*0x5b3863*/
  if ( this->ptr_0 == (void *)-1 )
    v9 = g_Str__none_;  /*0x5b386d*/  /*0x5b386b*/
  else
    v9 = off_816CAC[(int)this->ptr_0];  /*0x5b3874*/
  BYTE1(this->q009) = INIClass::ReadBool_Overwrite(a2, (unsigned __int8 *)v9, aScatter, BYTE1(this->q009));  /*0x5b388c*/
  if ( this->ptr_0 == (void *)-1 )
    v10 = g_Str__none_;  /*0x5b3896*/  /*0x5b3894*/
  else
    v10 = off_816CAC[(int)this->ptr_0];  /*0x5b389d*/
  INIClass::ReadDouble_Overwrite(
    (double *)a2,
    (unsigned __int8 *)v10,
    (unsigned __int8 *)g_INI_Key_Rate,
    *(double *)&this->uniqueId);  /*0x5b38b4*/
  vfptr = (int)this->ptr_0;  /*0x5b38b9*/
  __asm { fstp    qword ptr [esi+10h] }  /*0x5b38bb*/
  *(double *)&this->uniqueId = _RT1;  /*0x5b38bb*/
  if ( vfptr == -1 )
    v13 = g_Str__none_;  /*0x5b38c3*/  /*0x5b38c1*/
  else
    v13 = off_816CAC[vfptr];  /*0x5b38ca*/
  INIClass::ReadDouble_Overwrite((double *)a2, (unsigned __int8 *)v13, aAarate, 0.0);  /*0x5b38dd*/
  __asm { fst     qword ptr [esi+18h] }  /*0x5b38e2*/
  *(double *)&this->AARate = _RT1;  /*0x5b38e2*/
  __asm
  {  /*0x5b38e5*/
    fcomp   ds:dbl_7E2800
    fnstsw  ax
  }
  if ( (_AX & 0x4000) != 0 )
  {  /*0x5b38f0*/
    abstractFlags = this->abstractFlags;  /*0x5b38f5*/
    this->AARate = this->uniqueId;  /*0x5b38f8*/
    this->referenceCount = abstractFlags;  /*0x5b38fb*/
  }
  return 1;  /*0x5b38fe*/

}
} // namespace ra2

// 0x41BF30
namespace gamemd {
int MissionClass::g_var_a00e37()
{

  int result; // eax
  (*((unsigned char *)&(result))) = 0; /*0x41bf30*/
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
