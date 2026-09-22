// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/Power_e4.hpp"

// 0x6442D0
namespace gamemd {
char ParticleSystemTypeClass::GetType(unsigned char *** aP1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void ParticleSystemTypeClass::GetType(int this, unsigned __int8 ***aP1)
{
  char Bool_Overwrite; // al
  int Int_Overwrite; // eax
  CCINIClass *v7; // ecx
  double Double_Overwrite; // st7
  CCINIClass *v11; // edx
  int v13; // eax
  float *XYZFromINI; // eax
  double v15; // st7
  INIClass *v16; // eax
  double v17; // st7
  INIClass *v18; // edx
  double v19; // st7
  INIClass *v20; // ecx
  double v21; // st7
  INIClass *v22; // eax
  double v23; // st7
  INIClass *v24; // edx
  double v25; // st7
  char v26; // al
  int Coord; // eax
  Color *v31; // ecx
  int v29; // eax
  char v30; // al
  INIClass *aP3; // [esp+0h] [ebp-68h]
  INIClass *aP3a; // [esp+0h] [ebp-68h]
  INIClass *aP3_4; // [esp+4h] [ebp-64h]
  INIClass *aP3_4a; // [esp+4h] [ebp-64h]
  CCINIClass var54; // [esp+14h] [ebp-54h] BYREF

  INIClass::ResetSection(aP1); /*0x6442e3*/
  if ( !ObjectTypeClass::LoadFromINI((char *)this, (CCINIClass *)aP1) ) /*0x6442eb*/
    return 0; /*0x644622*/
  INIClass::GetString( /*0x64430f*/
    aP1,
    (INIClass *)(this + 36),
    (unsigned __int8 *)&stru_830620[27280],
    (INIClass *)&DataGlobal_87F8E4[42624],
    (INIClass *)&var54.sectionHead[1],
    64);
  int v3 = BuildingTypeClass::FindOrCreateEx((char *)&var54.sectionHead[1]); /*0x644318*/
  char v4 = this->q298; /*0x64431d*/
  this->ParticleSystemTypeClass_field_0x294 = v3; /*0x644323*/
  Bool_Overwrite = INIClass::ReadBool_Overwrite((int)aP1, (unsigned __int8 *)(this + 36), &stru_8184C8, v4); /*0x644332*/
  aP3_4 = this->q29C; /*0x64433f*/
  this->q298 = Bool_Overwrite; /*0x644346*/
  this->ParticleSystemTypeClass_field_0x29C = INIClass::ReadInt_Overwrite( /*0x644351*/
                              (int)aP1,
                              (unsigned __int8 *)(this + 36),
                              (CCINIClass *)&stru_830620[27268],
                              aP3_4);
  Int_Overwrite = INIClass::ReadInt_Overwrite( /*0x644366*/
                    (int)aP1,
                    (unsigned __int8 *)(this + 36),
                    (CCINIClass *)&stru_830620[27256],
                    this->q2A4);
  v7 = this->q2A8; /*0x64436b*/
  this->ParticleSystemTypeClass_field_0x2A4 = Int_Overwrite; /*0x644371*/
  int v8; // eax
  v8 = INIClass::ReadInt_Overwrite( /*0x644380*/
         (int)aP1,
         (unsigned __int8 *)(this + 36),
         (CCINIClass *)&stru_830620[27244],
         (INIClass *)v7);
  double v9 = this->q2A0; /*0x644385*/
  this->ParticleSystemTypeClass_field_0x2A8 = v8; /*0x644390*/
  this->q2A0 = INIClass::ReadDouble_Overwrite( /*0x6443a4*/
                             (int)aP1,
                             (INIClass *)(this + 36),
                             (unsigned __int8 *)&stru_830620[27232],
                             (INIClass *)LODWORD(v9));
  this->q2AC = INIClass::ReadDouble_Overwrite( /*0x6443c3*/
                             (int)aP1,
                             (INIClass *)(this + 36),
                             (unsigned __int8 *)&stru_830620[27220],
                             (INIClass *)COERCE_UNSIGNED_INT64(this->q2AC));
  Double_Overwrite = INIClass::ReadDouble_Overwrite( /*0x6443dd*/
                       (int)aP1,
                       (INIClass *)(this + 36),
                       (unsigned __int8 *)&stru_830620[27196],
                       (INIClass *)COERCE_UNSIGNED_INT64(this->DamageDelay));
  v11 = this->q2B8; /*0x6443e2*/
  this->DamageDelay = Double_Overwrite; /*0x6443ea*/
  this->ParticleSystemTypeClass_field_0x2B8 = INIClass::ReadInt_Overwrite( /*0x6443fc*/
                              (int)aP1,
                              (unsigned __int8 *)(this + 36),
                              (CCINIClass *)&stru_830620[27184],
                              (INIClass *)v11);
  INIClass::GetString( /*0x644416*/
    aP1,
    (INIClass *)(this + 36),
    (unsigned __int8 *)&stru_830620[27172],
    (INIClass *)&DataGlobal_87F8E4[42624],
    (INIClass *)&var54.sectionHead[1],
    64);
  var54.headNode[0] = 0; /*0x64441b*/
  *(_DWORD *)var54[0] = &stru_830620[26816]; /*0x644423*/
  while ( 1 ) /*0x64443f*/
  {
    bool v12 = _strcmpi((char *)&var54.sectionHead[1], **(char ***)var54[0]) == 0; /*0x64443f*/
    v13 = var54.headNode[0]; /*0x644441*/
    if ( v12 ) /*0x644445*/
      break; /*0x644445*/
    ++var54.headNode[0]; /*0x644448*/
    *(_DWORD *)var54[0] += 4; /*0x644458*/
    if ( *(int *)var54[0] >= (int)&stru_830620[26836] ) /*0x64445c*/
    {
      v13 = -1; /*0x64445e*/
      break; /*0x64445e*/
    }
  }
  this->ParticleSystemTypeClass_field_0x2B4 = v13; /*0x644461*/
  XYZFromINI = ParticleSystemTypeClass::ReadXYZFromINI( /*0x64447b*/
                 aP1,
                 (float *)&var54.headNode[1],
                 (CCINIClass *)(this + 36),
                 (unsigned __int8 *)&stru_830620[27156],
                 (float *)(this + 700));
  this->ParticleSystemTypeClass_field_2C0 = *XYZFromINI; /*0x644482*/
  this->StartScale = XYZFromINI[1]; /*0x64448b*/
  aP3 = this->Beam; /*0x6444a1*/
  this->ParticleSystemTypeClass_field_2C8 = XYZFromINI[2]; /*0x6444aa*/
  v15 = INIClass::ReadDouble_Overwrite( /*0x6444b0*/
          (int)aP1,
          (INIClass *)(this + 36),
          (unsigned __int8 *)&stru_830620[27136],
          aP3);
  v16 = this->q2D0; /*0x6444bb*/
  this->Beam = v15; /*0x6444c1*/
  v17 = INIClass::ReadDouble_Overwrite( /*0x6444d1*/
          (int)aP1,
          (INIClass *)(this + 36),
          (unsigned __int8 *)&stru_830620[27116],
          v16);
  v18 = this->q0B6; /*0x6444dc*/
  this->q2D0 = v17; /*0x6444e2*/
  v19 = INIClass::ReadDouble_Overwrite( /*0x6444f2*/
          (int)aP1,
          (INIClass *)(this + 36),
          (unsigned __int8 *)&stru_830620[27100],
          v18);
  v20 = this->q0B8; /*0x6444fd*/
  this->q0B6 = v19; /*0x644503*/
  v21 = INIClass::ReadDouble_Overwrite( /*0x644513*/
          (int)aP1,
          (INIClass *)(this + 36),
          (unsigned __int8 *)&stru_830620[27068],
          v20);
  v22 = this->q2E8; /*0x64451e*/
  this->q0B8 = v21; /*0x644524*/
  v23 = INIClass::ReadDouble_Overwrite( /*0x644534*/
          (int)aP1,
          (INIClass *)(this + 36),
          (unsigned __int8 *)&stru_830620[27036],
          v22);
  v24 = this->q2F0; /*0x64453f*/
  this->q2E8 = v23; /*0x644545*/
  v25 = INIClass::ReadDouble_Overwrite( /*0x644555*/
          (int)aP1,
          (INIClass *)(this + 36),
          (unsigned __int8 *)&stru_830620[27004],
          v24);
  v26 = *(_BYTE *)(this + 779); /*0x64455a*/
  this->q2F0 = v25; /*0x644562*/
  *(_BYTE *)(this + 779) = INIClass::ReadBool_Overwrite( /*0x644574*/
                             (int)aP1,
                             (unsigned __int8 *)(this + 36),
                             (CCINIClass *)&stru_830620[26996],
                             v26);
  Coord = INIClass::GetCoord( /*0x64458e*/
            aP1,
            &var54,
            (INIClass *)(this + 36),
            (Color *)&stru_830620[26984],
            (Color *)(this + 776));
  v31 = this->q300; /*0x644596*/
  this->q308 = *(_WORD *)Coord; /*0x64459c*/
  this->q30A = *(_BYTE *)(Coord + 2); /*0x6445af*/
  v29 = INIClass::ReadInt_Overwrite( /*0x6445b5*/
          (int)aP1,
          (unsigned __int8 *)(this + 36),
          (CCINIClass *)&stru_830620[26964],
          (INIClass *)v31);
  aP3_4a = this->q304; /*0x6445c2*/
  this->ParticleSystemTypeClass_field_0x300 = v29; /*0x6445c9*/
  this->q304 = INIClass::ReadInt_Overwrite( /*0x6445d4*/
                              (int)aP1,
                              (unsigned __int8 *)(this + 36),
                              (CCINIClass *)&stru_830620[26952],
                              aP3_4a);
  v30 = INIClass::ReadBool_Overwrite( /*0x6445e9*/
          (int)aP1,
          (unsigned __int8 *)(this + 36),
          (CCINIClass *)&stru_830620[26936],
          this->q0C3);
  aP3a = this->q0BE; /*0x6445fb*/
  this->q0C3 = v30; /*0x644604*/
  this->q0BE = INIClass::ReadDouble_Overwrite( /*0x64460f*/
                              (int)aP1,
                              (INIClass *)(this + 36),
                              (unsigned __int8 *)&stru_830620[26912],
                              aP3a);
  return 1; /*0x644617*/
}
}
} // namespace gamemd

// 0x644700
namespace gamemd {
int ParticleSystemTypeClass::PowerDrainUpdate(int * a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void ParticleSystemTypeClass::_vt13(int this, int *a2)
{

  AbstractTypeClass::ProcessPower((char *)this, a2); /*0x644709*/
  Power::TimerProcess(this->ParticleSystemTypeClass_field_0x294); /*0x644717*/
  int v3; // ecx
  LOBYTE(v3) = this->q298; /*0x64471c*/
  Power::FlagProcess(a2, v3); /*0x644725*/
  Power::TimerProcess(this->ParticleSystemTypeClass_field_0x29C); /*0x644733*/
  Checksummer::Add_float((unsigned int *)a2, this->ParticleSystemTypeClass_field_0x2A0); /*0x644741*/
  Power::TimerProcess(this->ParticleSystemTypeClass_field_0x2A4); /*0x64474f*/
  Power::TimerProcess(this->ParticleSystemTypeClass_field_0x2A8); /*0x64475d*/
  Checksummer::Add_float((unsigned int *)a2, this->ParticleSystemTypeClass_field_0x2AC); /*0x64476b*/
  Checksummer::Add_float((unsigned int *)a2, this->DamageDelay); /*0x644779*/
  Power::TimerProcess(this->ParticleSystemTypeClass_field_0x2B4); /*0x644787*/
  return Power::TimerProcess(this->ParticleSystemTypeClass_field_0x2B8); /*0x64479a*/
}
}
} // namespace gamemd

// 0x644960
namespace gamemd {
ParticleSystemTypeClass * ParticleSystemTypeClass::ddtor(char a2)
{
    ParticleSystemTypeClass* v7 = this;
    AbstractClass::AnnounceExpiredPointer(this, 1);
    DataGlobal_A83D68;
    int v2 = DataGlobal_A83D68.FindItemIndex(&v7);
    if ( v2 != -1 && v2 < DataGlobal_A83D78 && v2 < --DataGlobal_A83D78 )
    {
        do
        {
            ++v2;
            *(DataGlobal_A83D6C + v2 - 1) = *(DataGlobal_A83D6C + v2);
        }
        while ( v2 < DataGlobal_A83D78 );
    }
    ObjectTypeClass::Destruct(this);
    if ( a2 & 1 )
        OperatorDelete(this);
    return this;
}
}
} // namespace gamemd

// 0x476340
namespace gamemd {
float * ParticleSystemTypeClass::ReadXYZFromINI(float * a1, CCINIClass * aP2, unsigned char * a3, float * a4)
{
{
    char *v5;
    char *v6;
    char *v7;
    double v8;
    float v10;
    float v11;
    float v12;
    INIClass String[8];
    if ( INIClass::GetString(this, (INIClass *)aP2, a3, (INIClass *)&DataGlobal_87F8E4[42624], String, 512) )
  {
    v5 = strtok(String[0].__pad_0, Delimiter[0]);
    v10 = atof(v5);
    v6 = strtok(0, Delimiter[0]);
    v11 = atof(v6);
    v7 = strtok(0, Delimiter[0]);
    v8 = atof(v7);
    v12 = v8;
    *a1 = v10;
    *((int*)(a1) + 1) = v11;
    *((int*)(a1) + 2) = v12;
    return a1;
  }
    else
  {
    *a1 = *a4;
    *((int*)(a1) + 1) = *((int*)(a4) + 1);
    *((int*)(a1) + 2) = *((int*)(a4) + 2);
    return a1;
  }
}
}
} // namespace gamemd

// 0x6447A0
namespace gamemd {
int ParticleSystemTypeClass::GetClassIdentifier(int a1, unsigned int * a2)
{
  if ( !a2 )
    return -2147467261;
  *a2 = 1883112522;
  a2[1] = 298979249;
  a2[2] = 1610642049;
  a2[3] = -1252326136;
  return 0;
}
} // namespace gamemd

// 0x6447E0
namespace gamemd {
int ParticleSystemTypeClass::SaveLoad_Prefix(ObjectTypeClass * aP0, int aP1)
{
{
    if ( ObjectTypeClass::LoadCleanup((IUnknown *)aP0, (ObjectTypeClass *)aP1) >= 0 && aP0 )
  {
    ObjectTypeClass::Construct(aP0, (ObjectTypeClass *)&aP1);
    *(int *)aP0->__pad_0 = (unsigned int)vt_ParticleSystemTypeClass;
    *(int *)&aP0->__pad_0[4] = (unsigned int)vt_ParticleSystemTypeClass;
    *(int *)&aP0->__pad_0[8] = (unsigned int)vt_ParticleSystemTypeClass;
    *(int *)&aP0->__pad_0[12] = &vt_ParticleSystemTypeClass;
  }
    return 0;
}
}
} // namespace gamemd

// 0x644830
namespace gamemd {
int ParticleSystemTypeClass::SaveLoad_Prefix_0(TechnoTypeClass * aP0, ObjectTypeClass * aP1, int aP2)
{
{
    AbstractClass::SaveLoad_PrefixWrapper(aP0, aP1, (TechnoTypeClass *)aP2);
    return 0;
}
}
} // namespace gamemd

// 0x644920
namespace gamemd {
int ParticleSystemTypeClass::GetObjectSize()
{
return 784;
}
} // namespace gamemd

// 0x644930
namespace gamemd {
int ParticleSystemTypeClass::GetTypeIdentifier()
{
return 25;
}
} // namespace gamemd

// 0x644940
namespace gamemd {
char ParticleSystemTypeClass::Stub(int a1, int a2)
{
return 0;
}
} // namespace gamemd

// 0x644950
namespace gamemd {
int ParticleSystemTypeClass::StubReturnFalse(int a1)
{
return 0;
}
} // namespace gamemd
