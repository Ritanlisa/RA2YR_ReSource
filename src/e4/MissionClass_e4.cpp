// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"

// 0x41BF30
namespace ra2 {
namespace game {
int MissionClass::vt_entry_1FC()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall MissionClass::vt_entry_1FC(#377 *this)
{
  int result; // eax

  LOBYTE(result) = 0; /*0x41bf30*/
  return result; /*0x41bf32*/
}
}
} // namespace game
} // namespace ra2

// 0x5B3760
namespace ra2 {
namespace game {
char MissionClass::LoadFromINI(unsigned int * a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __thiscall MissionClass::LoadFromINI(int *this, _DWORD *a2)
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
  if ( !INIClass::BinarySearchSection((int)a2, (unsigned __int8 *)v3) ) /*0x5b3787*/
    return 0; /*0x5b3906*/
  if ( *this == -1 ) /*0x5b379e*/
    v4 = MEMORY[0x817474]; /*0x5b37a0*/
  else
    v4 = off_816CAC[*this]; /*0x5b37a7*/
  *((_BYTE *)this + 4) = INIClass::ReadBool_Overwrite( /*0x5b37bf*/
                           (int)a2,
                           (unsigned __int8 *)v4,
                           (unsigned __int8 *)MEMORY[0x82C2B8],
                           (unsigned char)this->vtable1);
  if ( *this == -1 ) /*0x5b37c7*/
    v5 = MEMORY[0x817474]; /*0x5b37c9*/
  else
    v5 = off_816CAC[*this]; /*0x5b37d0*/
  *((_BYTE *)this + 5) = INIClass::ReadBool_Overwrite( /*0x5b37e8*/
                           (int)a2,
                           (unsigned __int8 *)v5,
                           (unsigned __int8 *)MEMORY[0x82C2B0],
                           *((_BYTE *)this + 5));
  if ( *this == -1 ) /*0x5b37f0*/
    v6 = MEMORY[0x817474]; /*0x5b37f2*/
  else
    v6 = off_816CAC[*this]; /*0x5b37f9*/
  *((_BYTE *)this + 6) = INIClass::ReadBool_Overwrite( /*0x5b3811*/
                           (int)a2,
                           (unsigned __int8 *)v6,
                           (unsigned __int8 *)MEMORY[0x82C2A4],
                           *((_BYTE *)this + 6));
  if ( *this == -1 ) /*0x5b3819*/
    v7 = MEMORY[0x817474]; /*0x5b381b*/
  else
    v7 = off_816CAC[*this]; /*0x5b3822*/
  *((_BYTE *)this + 7) = INIClass::ReadBool_Overwrite( /*0x5b383a*/
                           (int)a2,
                           (unsigned __int8 *)v7,
                           (unsigned __int8 *)MEMORY[0x82C298],
                           *((_BYTE *)this + 7));
  if ( *this == -1 ) /*0x5b3842*/
    v8 = MEMORY[0x817474]; /*0x5b3844*/
  else
    v8 = off_816CAC[*this]; /*0x5b384b*/
  *((_BYTE *)this + 8) = INIClass::ReadBool_Overwrite( /*0x5b3863*/
                           (int)a2,
                           (unsigned __int8 *)v8,
                           (unsigned __int8 *)MEMORY[0x82C28C],
                           (unsigned char)this->vtable2);
  if ( *this == -1 ) /*0x5b386b*/
    v9 = MEMORY[0x817474]; /*0x5b386d*/
  else
    v9 = off_816CAC[*this]; /*0x5b3874*/
  *((_BYTE *)this + 9) = INIClass::ReadBool_Overwrite( /*0x5b388c*/
                           (int)a2,
                           (unsigned __int8 *)v9,
                           (unsigned __int8 *)stru_82C284,
                           *((_BYTE *)this + 9));
  if ( *this == -1 ) /*0x5b3894*/
    v10 = MEMORY[0x817474]; /*0x5b3896*/
  else
    v10 = off_816CAC[*this]; /*0x5b389d*/
  Double_Overwrite = INIClass::ReadDouble_Overwrite( /*0x5b38b4*/
                       (int)a2,
                       (unsigned __int8 *)v10,
                       (unsigned __int8 *)MEMORY[0x8185A4],
                       *((double *)this + 2));
  v12 = *this; /*0x5b38b9*/
  *((double *)this + 2) = Double_Overwrite; /*0x5b38bb*/
  if ( v12 == -1 ) /*0x5b38c1*/
    v13 = MEMORY[0x817474]; /*0x5b38c3*/
  else
    v13 = off_816CAC[v12]; /*0x5b38ca*/
  v14 = INIClass::ReadDouble_Overwrite((int)a2, (unsigned __int8 *)v13, (unsigned __int8 *)aAarate, 0.0); /*0x5b38dd*/
  *((double *)this + 3) = v14; /*0x5b38e2*/
  if ( v14 == 0.0 ) /*0x5b38f0*/
  {
    v15 = *(this + 5); /*0x5b38f5*/
    *(this + 6) = *(this + 4); /*0x5b38f8*/
    *(this + 7) = v15; /*0x5b38fb*/
  }
  return 1; /*0x5b38fe*/
}
}
} // namespace game
} // namespace ra2

// 0x5B3A10
namespace ra2 {
namespace game {
int MissionClass::HasValidTarget()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall MissionClass::HasValidTarget(#377 *this)
{
  return this->suspendedMission != -1; /*0x5b3a1e*/
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
// 0x5b2f50
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
