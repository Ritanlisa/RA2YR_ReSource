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
AbstractClass * * MissionClass::LoadFromINI(unsigned int * a2)
{

  char *v3; // eax
  char *v4; // eax
  char *v5; // eax
  char *v6; // eax
  char *v7; // eax
  char *v8; // eax
  char *v9; // eax
  char *v10; // eax
  double Double_Overwrite; // st7
  int v12; // eax
  char *v13; // eax
  double v14; // st7
  int v15; // ecx

  INIClass::ResetSection(a2); /*0x5b376a*/
  if ( *this == -1 ) /*0x5b3774*/
    v3 = MEMORY[0x817474]; /*0x5b3776*/
  else
    v3 = off_816CAC[*this]; /*0x5b377d*/
  if ( !INIClass::BinarySearchSection((int)a2, (uint8_t *)v3) ) /*0x5b3787*/
    return 0; /*0x5b3906*/
  if ( *this == -1 ) /*0x5b379e*/
    v4 = MEMORY[0x817474]; /*0x5b37a0*/
  else
    v4 = off_816CAC[*this]; /*0x5b37a7*/
  *((unsigned char *)this + 4) = INIClass::ReadBool_Overwrite( /*0x5b37bf*/
                           (int)a2,
                           (uint8_t *)v4,
                           (uint8_t *)MEMORY[0x82C2B8],
                           *((unsigned char *)this + 4));
  if ( *this == -1 ) /*0x5b37c7*/
    v5 = MEMORY[0x817474]; /*0x5b37c9*/
  else
    v5 = off_816CAC[*this]; /*0x5b37d0*/
  *((unsigned char *)this + 5) = INIClass::ReadBool_Overwrite( /*0x5b37e8*/
                           (int)a2,
                           (uint8_t *)v5,
                           (uint8_t *)MEMORY[0x82C2B0],
                           *((unsigned char *)this + 5));
  if ( *this == -1 ) /*0x5b37f0*/
    v6 = MEMORY[0x817474]; /*0x5b37f2*/
  else
    v6 = off_816CAC[*this]; /*0x5b37f9*/
  *((unsigned char *)this + 6) = INIClass::ReadBool_Overwrite( /*0x5b3811*/
                           (int)a2,
                           (uint8_t *)v6,
                           (uint8_t *)MEMORY[0x82C2A4],
                           *((unsigned char *)this + 6));
  if ( *this == -1 ) /*0x5b3819*/
    v7 = MEMORY[0x817474]; /*0x5b381b*/
  else
    v7 = off_816CAC[*this]; /*0x5b3822*/
  *((unsigned char *)this + 7) = INIClass::ReadBool_Overwrite( /*0x5b383a*/
                           (int)a2,
                           (uint8_t *)v7,
                           (uint8_t *)MEMORY[0x82C298],
                           *((unsigned char *)this + 7));
  if ( *this == -1 ) /*0x5b3842*/
    v8 = MEMORY[0x817474]; /*0x5b3844*/
  else
    v8 = off_816CAC[*this]; /*0x5b384b*/
  *((unsigned char *)this + 8) = INIClass::ReadBool_Overwrite( /*0x5b3863*/
                           (int)a2,
                           (uint8_t *)v8,
                           (uint8_t *)MEMORY[0x82C28C],
                           *((unsigned char *)this + 8));
  if ( *this == -1 ) /*0x5b386b*/
    v9 = MEMORY[0x817474]; /*0x5b386d*/
  else
    v9 = off_816CAC[*this]; /*0x5b3874*/
  *((unsigned char *)this + 9) = INIClass::ReadBool_Overwrite( /*0x5b388c*/
                           (int)a2,
                           (uint8_t *)v9,
                           (uint8_t *)stru_82C284,
                           *((unsigned char *)this + 9));
  if ( *this == -1 ) /*0x5b3894*/
    v10 = MEMORY[0x817474]; /*0x5b3896*/
  else
    v10 = off_816CAC[*this]; /*0x5b389d*/
  Double_Overwrite = INIClass::ReadDouble_Overwrite( /*0x5b38b4*/
                       (int)a2,
                       (uint8_t *)v10,
                       (uint8_t *)MEMORY[0x8185A4],
                       *((double *)this + 2));
  v12 = (char *)(*this);
  *((double *)this + 2) = Double_Overwrite; /*0x5b38bb*/
  if ( v12 == -1 ) /*0x5b38c1*/
    v13 = MEMORY[0x817474]; /*0x5b38c3*/
  else
    v13 = off_816CAC[v12]; /*0x5b38ca*/
  v14 = INIClass::ReadDouble_Overwrite((int)a2, (uint8_t *)v13, (uint8_t *)aAarate, 0.0); /*0x5b38dd*/
  *((double *)this + 3) = v14; /*0x5b38e2*/
  if ( v14 == 0.0 ) /*0x5b38f0*/
  {
    v15 = *((char *)this + 5); /*0x5b38f5*/
    *((char *)this + 6) = *((char *)this + 4); /*0x5b38f8*/
    *((char *)this + 7) = v15; /*0x5b38fb*/
  }
  return (gamemd::AbstractClass **)(1);

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

  return *((unsigned int *)this + 44) != -1; /*0x5b3a1e*/

}
} // namespace gamemd
