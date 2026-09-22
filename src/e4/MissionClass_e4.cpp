// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"

// 0x5B3760
namespace ra2 {
namespace game {
AbstractClass * * MissionClass::LoadFromINI(unsigned int * a2)
{
{
  double Double_Overwrite; // st7

  INIClass::ResetSection(a2); /*0x5b376a*/
  if ( *this == -1 ) /*0x5b3774*/
    AbstractClass *v3 = g_Str__none_; /*0x5b3776*/
  AbstractClass *v3 = off_816CAC[*this]; /*0x5b377d*/
  if ( !INIClass::BinarySearchSection((int)a2, (unsigned __int8 *)v3) ) /*0x5b3787*/
    return 0; /*0x5b3906*/
  if ( *this == -1 ) /*0x5b379e*/
    AbstractClass *v4 = g_Str__none_; /*0x5b37a0*/
  AbstractClass *v4 = off_816CAC[*this]; /*0x5b37a7*/
  this->vtable2 = INIClass::ReadBool_Overwrite( /*0x5b37bf*/
                           (int)a2,
                           (unsigned __int8 *)v4,
                           (unsigned __int8 *)DataGlobal_82C2B8,
                           (unsigned char)this->vtable1);
  if ( *this == -1 ) /*0x5b37c7*/
    AbstractClass *v5 = g_Str__none_; /*0x5b37c9*/
  AbstractClass *v5 = off_816CAC[*this]; /*0x5b37d0*/
  this->abstractFlags = INIClass::ReadBool_Overwrite( /*0x5b37e8*/
                           (int)a2,
                           (unsigned __int8 *)v5,
                           (unsigned __int8 *)DataGlobal_82C2B0,
                           this->abstractFlags);
  if ( *this == -1 ) /*0x5b37f0*/
    AbstractClass *v6 = g_Str__none_; /*0x5b37f2*/
  AbstractClass *v6 = off_816CAC[*this]; /*0x5b37f9*/
  this->nextArrayIndex = INIClass::ReadBool_Overwrite( /*0x5b3811*/
                           (int)a2,
                           (unsigned __int8 *)v6,
                           (unsigned __int8 *)DataGlobal_82C2A4,
                           this->nextArrayIndex);
  if ( *this == -1 ) /*0x5b3819*/
    AbstractClass *v7 = g_Str__none_; /*0x5b381b*/
  AbstractClass *v7 = off_816CAC[*this]; /*0x5b3822*/
  this->referenceCount = INIClass::ReadBool_Overwrite( /*0x5b383a*/
                           (int)a2,
                           (unsigned __int8 *)v7,
                           (unsigned __int8 *)DataGlobal_82C298,
                           this->referenceCount);
  if ( *this == -1 ) /*0x5b3842*/
    AbstractClass *v8 = g_Str__none_; /*0x5b3844*/
  AbstractClass *v8 = off_816CAC[*this]; /*0x5b384b*/
  this->vtable3 = INIClass::ReadBool_Overwrite( /*0x5b3863*/
                           (int)a2,
                           (unsigned __int8 *)v8,
                           (unsigned __int8 *)DataGlobal_82C28C,
                           (unsigned char)this->vtable2);
  if ( *this == -1 ) /*0x5b386b*/
    AbstractClass *v9 = g_Str__none_; /*0x5b386d*/
  AbstractClass *v9 = off_816CAC[*this]; /*0x5b3874*/
  this->objectTypeFlags = INIClass::ReadBool_Overwrite( /*0x5b388c*/
                           (int)a2,
                           (unsigned __int8 *)v9,
                           (unsigned __int8 *)stru_82C284,
                           this->objectTypeFlags);
  if ( *this == -1 ) /*0x5b3894*/
    AbstractClass *v10 = g_Str__none_; /*0x5b3896*/
  AbstractClass *v10 = off_816CAC[*this]; /*0x5b389d*/
  Double_Overwrite = INIClass::ReadDouble_Overwrite( /*0x5b38b4*/
                       (int)a2,
                       (unsigned __int8 *)v10,
                       (unsigned __int8 *)g_INI_Key_Rate,
                       this->vtable3);
  int v12 = *this; /*0x5b38b9*/
  this->vtable3 = Double_Overwrite; /*0x5b38bb*/
  if ( v12 == -1 ) /*0x5b38c1*/
    AbstractClass *v13 = g_Str__none_; /*0x5b38c3*/
  AbstractClass *v13 = off_816CAC[v12]; /*0x5b38ca*/
  double v14 = INIClass::ReadDouble_Overwrite((int)a2, (unsigned __int8 *)v13, (unsigned __int8 *)aAarate, 0.0); /*0x5b38dd*/
  this->vtable4 = v14; /*0x5b38e2*/
  if ( v14 == 0.0 ) /*0x5b38f0*/
  {
    int v15 = this->abstractFlags; /*0x5b38f5*/
    this->nextArrayIndex = this->vtable2; /*0x5b38f8*/
    this->referenceCount = v15; /*0x5b38fb*/
  }
  return 1; /*0x5b38fe*/
}
} // namespace game
} // namespace ra2

// 0x41BF30
namespace ra2 {
namespace game {
int MissionClass::vt_entry_1FC()
{
{
    int result;
    LOBYTE(result) = 0;
    return result;
}
}
} // namespace game
} // namespace ra2

// 0x5B2E10
namespace ra2 {
namespace game {
int MissionClass::Return450A()
{
return 450;
}
} // namespace game
} // namespace ra2

// 0x5B2E20
namespace ra2 {
namespace game {
int MissionClass::Return450B()
{
return 450;
}
} // namespace game
} // namespace ra2

// 0x5B2E30
namespace ra2 {
namespace game {
int MissionClass::Return450C()
{
return 450;
}
} // namespace game
} // namespace ra2

// 0x5B2ED0
namespace ra2 {
namespace game {
int MissionClass::Return450D()
{
return 450;
}
} // namespace game
} // namespace ra2

// 0x5B2EE0
namespace ra2 {
namespace game {
int MissionClass::Return450E()
{
return 450;
}
} // namespace game
} // namespace ra2

// 0x5B2F10
namespace ra2 {
namespace game {
int MissionClass::Return450G()
{
return 450;
}
} // namespace game
} // namespace ra2

// 0x5B2F20
namespace ra2 {
namespace game {
int MissionClass::Return450H()
{
return 450;
}
} // namespace game
} // namespace ra2

// 0x5B2F40
namespace ra2 {
namespace game {
int MissionClass::Return450I()
{
return 450;
}
} // namespace game
} // namespace ra2

// 0x5B2F50
namespace ra2 {
namespace game {
int MissionClass::Return450J()
{
return 450;
}
} // namespace game
} // namespace ra2

// 0x5B2F80
namespace ra2 {
namespace game {
int MissionClass::Return450K()
{
return 450;
}
} // namespace game
} // namespace ra2

// 0x5B2F90
namespace ra2 {
namespace game {
int MissionClass::Return450L()
{
return 450;
}
} // namespace game
} // namespace ra2

// 0x5B2FA0
namespace ra2 {
namespace game {
int MissionClass::Return450F()
{
return 450;
}
} // namespace game
} // namespace ra2

// 0x5B2FB0
namespace ra2 {
namespace game {
int MissionClass::Return450M()
{
return 450;
}
} // namespace game
} // namespace ra2

// 0x5B2FC0
namespace ra2 {
namespace game {
int MissionClass::Return450N()
{
return 450;
}
} // namespace game
} // namespace ra2

// 0x5B3A10
namespace ra2 {
namespace game {
int MissionClass::HasValidTarget()
{
{
    return this->suspendedMission != -1;
}
}
} // namespace game
} // namespace ra2
