// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/Debug_e4.hpp"
#include "e4/classes/Power_e4.hpp"
#include "e4/classes/Vector_e4.hpp"
#include "e4/classes/VoxelAnimType_e4.hpp"

// 0x41E350
namespace gamemd {
unsigned int * AnimTypeClass::Construct2(ObjectClass * aP1)
{
{
  AITriggerTypeClass *v3; // eax
  AbstractTypeClass::Constructor((int)this, (AbstractClass *)aP1); /*0x41e359*/
  *(this + 38) = -1; /*0x41e363*/
  this->ImageAllocated = -1; /*0x41e369*/
  this->BarrelVoxel = 0; /*0x41e374*/
  this->BounceAnim = 0; /*0x41e37a*/
  this->AnimTypeClass_field_double_320 = 0; /*0x41e380*/
  this->ChargerTurrets = 1072693248; /*0x41e386*/
  this->q310 = 1072693248; /*0x41e38c*/
  this->Warhead = 1072693248; /*0x41e392*/
  this->ZAdjust = 1; /*0x41e39a*/
  this->MakeInfantry = 1; /*0x41e3a0*/
  this->RunningFrames = 1; /*0x41e3a6*/
  this->Armor = 0; /*0x41e3b9*/
  this->Strength = 0; /*0x41e3bf*/
  this->Image = 0; /*0x41e3c5*/
  this->AlphaImage = 0; /*0x41e3cb*/
  this->MainVoxel = 0; /*0x41e3d1*/
  this->YSortAdjust = 0; /*0x41e3d7*/
  this->YDrawOffset = 0; /*0x41e3dd*/
  this->IsAnimatedTiberium = 0; /*0x41e3e3*/
  this->PingPong = 0; /*0x41e3e9*/
  this->SpawnsParticle = 0; /*0x41e3ef*/
  this->ChargerBarrels = 0; /*0x41e3f5*/
  this->q108 = 0; /*0x41e3fb*/
  *this = &AITriggerTypeClass::`vftable'; /*0x41e401*/
  this->vtable2 = &AITriggerTypeClass::`vftable'; /*0x41e407*/
  this->vtable3 = &AITriggerTypeClass::`vftable'; /*0x41e40e*/
  this->vtable4 = &vt_AITriggerTypeClass; /*0x41e415*/
  memset(this + 57, 0, 0x20u); /*0x41e41c*/
  if ( *(int *)&HouseClass_Player[29892] < *(int *)&HouseClass_Player[29884] /*0x41e452*/
    || (HouseClass_Player[29889] || !*(_DWORD *)&HouseClass_Player[29884])
    && *(int *)&HouseClass_Player[29896] > 0
    && (*(unsigned __int8 (__thiscall **)(char *, int, _DWORD))(*(_DWORD *)&HouseClass_Player[29876] + 8))(
         &HouseClass_Player[29876],
         *(_DWORD *)&HouseClass_Player[29884] + *(_DWORD *)&HouseClass_Player[29896],
         0) )
  {
    v3 = (AITriggerTypeClass *)(*(_DWORD *)&HouseClass_Player[29892])++; /*0x41e45f*/
    *(_DWORD *)(*(_DWORD *)&HouseClass_Player[29880] + 4 * (_DWORD)v3) = this; /*0x41e46e*/
  }
  return this; /*0x41e473*/
}
} // namespace gamemd
}

// 0x427530
namespace gamemd {
unsigned int * AnimTypeClass::Construct(AbstractClass * aP1)
{
{
  AnimTypeClass *v3; // eax
  ObjectClass *v6; // ecx
  ObjectTypeClass::ConstructFull((int)this, aP1); /*0x42753a*/
  this->MiddleFrameIndex = -1; /*0x427544*/
  this->MiddleFrameWidth = 0; /*0x42754a*/
  this->MiddleFrameHeight = 0; /*0x427550*/
  this->q2A0 = 0; /*0x427556*/
  this->AnimTypeClass_field_2A4 = 0; /*0x42755c*/
  this->Damage = 0; /*0x427562*/
  this->q2AC = 0; /*0x427568*/
  this->Rate = 1; /*0x42756e*/
  this->Start = 0; /*0x427578*/
  this->q2B8 = 0; /*0x42757e*/
  this->q2BC = 0; /*0x427584*/
  this->q2C0 = 0; /*0x42758a*/
  this->q2C4 = 0; /*0x427590*/
  this->q2C8 = 0; /*0x427596*/
  this->q2CC = -1; /*0x42759c*/
  this->NumParticles = 0; /*0x4275a2*/
  this->q2D4 = 0; /*0x4275a8*/
  this->q2D8 = 0; /*0x4275ae*/
  this->q2DC = 0; /*0x4275b4*/
  this->q2E0 = 0; /*0x4275ba*/
  this->q2E4 = 0; /*0x4275c0*/
  this->q2E8 = 0; /*0x4275c6*/
  this->q2EC = 0; /*0x4275cc*/
  this->q2F0 = 0; /*0x4275d2*/
  this->q2F4 = 0; /*0x4275d8*/
  this->q2F8 = -1; /*0x4275de*/
  this->StopSound = -1; /*0x4275e4*/
  this->BounceAnim = 0; /*0x4275ea*/
  this->q304 = 0; /*0x4275f0*/
  this->q308 = 0; /*0x4275f6*/
  this->q30C = 0; /*0x4275fc*/
  this->q310 = -1610612736; /*0x427602*/
  this->q314 = 1072273817; /*0x42760c*/
  this->q318 = 0; /*0x42761b*/
  this->q0C7 = 1074528256; /*0x427621*/
  this->AnimTypeClass_field_double_320 = 0; /*0x427627*/
  this->q0C9 = 1074528256; /*0x42762d*/
  this->MaxXYVel = 0; /*0x427633*/
  this->q32C = 1076756480; /*0x427639*/
  this->Warhead = 0; /*0x427643*/
  this->DamageRadius = 0; /*0x427649*/
  this->TiberiumSpawnType = 0; /*0x42764f*/
  this->TiberiumSpreadRadius = 0; /*0x427655*/
  this->YSortAdjust = 0; /*0x42765b*/
  this->YDrawOffset = 0; /*0x427661*/
  this->ZAdjust = 0; /*0x427667*/
  this->MakeInfantry = -1; /*0x42766d*/
  this->RunningFrames = 0; /*0x427673*/
  this->IsFlamingGuy = 0; /*0x427679*/
  this->IsVeins = 0; /*0x42767f*/
  this->IsMeteor = 0; /*0x427685*/
  this->TiberiumChainReaction = 0; /*0x42768b*/
  this->IsTiberium = 0; /*0x427691*/
  this->HideIfNoOre = 0; /*0x427697*/
  this->Bouncer = 0; /*0x42769d*/
  this->Tiled = 0; /*0x4276a3*/
  this->ShouldUseCellDrawer = 1; /*0x4276a9*/
  this->UseNormalLight = 0; /*0x4276b0*/
  this->DemandLoad = 0; /*0x4276b6*/
  this->FreeLoad = 0; /*0x4276bc*/
  this->IsAnimatedTiberium = 0; /*0x4276c2*/
  this->AltPalette = 0; /*0x4276c8*/
  this->Normalized = 0; /*0x4276ce*/
  this->Layer = 3; /*0x4276d4*/
  this->DoubleThick = 0; /*0x4276de*/
  this->Flat = 0; /*0x4276e4*/
  this->Translucent = 0; /*0x4276ea*/
  this->Scorch = 0; /*0x4276f0*/
  this->Flamer = 0; /*0x4276f6*/
  this->Crater = 0; /*0x4276fc*/
  this->ForceBigCraters = 0; /*0x427702*/
  this->Sticky = 0; /*0x42770b*/
  this->PingPong = 0; /*0x427712*/
  this->Reverse = 0; /*0x427718*/
  this->Shadow = 0; /*0x42771e*/
  this->PsiWarning = 0; /*0x427724*/
  this->ShouldFogRemove = 1; /*0x42772a*/
  *this = &AnimTypeClass::`vftable'; /*0x427731*/
  this->vtable2 = &AnimTypeClass::`vftable'; /*0x427737*/
  this->vtable3 = &AnimTypeClass::`vftable'; /*0x42773d*/
  this->vtable4 = &vt_AnimTypeClass; /*0x427744*/
  AbstractClass::GenerateUniqueID((int)(this + 1)); /*0x42774b*/
  this->IsLogic = 1; /*0x427750*/
  this->RadarInvisible = 1; /*0x427757*/
  this->Selectable = 0; /*0x42775e*/
  this->LegalTarget = 0; /*0x427764*/
  this->Insignificant = 1; /*0x42776a*/
  this->Immune = 1; /*0x427771*/
  this->AllowCellContent = 0; /*0x427778*/
  if ( *(int *)&g_CellDirectionOffsets[84688] < *(int *)&g_CellDirectionOffsets[84680] /*0x4277b0*/
    || (g_CellDirectionOffsets[84685] || !*(_DWORD *)&g_CellDirectionOffsets[84680])
    && *(int *)&g_CellDirectionOffsets[84692] > 0
    && (*(unsigned __int8 (__thiscall **)(char *, int, _DWORD))(*(_DWORD *)&g_CellDirectionOffsets[84672] + 8))(
         &g_CellDirectionOffsets[84672],
         *(_DWORD *)&g_CellDirectionOffsets[84680] + *(_DWORD *)&g_CellDirectionOffsets[84692],
         0) )
  {
    v3 = (AnimTypeClass *)(*(_DWORD *)&g_CellDirectionOffsets[84688])++; /*0x4277bd*/
    *(_DWORD *)(*(_DWORD *)&g_CellDirectionOffsets[84676] + 4 * (_DWORD)v3) = this; /*0x4277cc*/
  }
  if ( *(int *)&g_OverlayTypeConfig[32392] < *(int *)&g_OverlayTypeConfig[32384] /*0x427803*/
    || (g_OverlayTypeConfig[32389] || !*(_DWORD *)&g_OverlayTypeConfig[32384])
    && *(int *)&g_OverlayTypeConfig[32396] > 0
    && (*(unsigned __int8 (__thiscall **)(char *, int, _DWORD))(*(_DWORD *)&g_OverlayTypeConfig[32376] + 8))(
         &g_OverlayTypeConfig[32376],
         *(_DWORD *)&g_OverlayTypeConfig[32384] + *(_DWORD *)&g_OverlayTypeConfig[32396],
         0) )
  {
    int v4 = (*(_DWORD *)&g_OverlayTypeConfig[32392])++; /*0x427810*/
    *(_DWORD *)(*(_DWORD *)&g_OverlayTypeConfig[32380] + 4 * v4) = this; /*0x42781f*/
  }
  int v5 = 0; /*0x427828*/
  if ( *(int *)&g_CellDirectionOffsets[84688] <= 0 ) /*0x42782c*/
  {
LABEL_17:
    v5 = -1; /*0x427840*/
  }
  else
  {
    v6 = *(ObjectClass **)&g_CellDirectionOffsets[84676]; /*0x42782e*/
    while ( *(_DWORD **)v6->__pad_0 != this ) /*0x427836*/
    {
      ++v5; /*0x427838*/
      v6 = (ObjectClass *)((char *)v6 + 4); /*0x427839*/
      if ( v5 >= *(int *)&g_CellDirectionOffsets[84688] ) /*0x42783e*/
        goto LABEL_17; /*0x42783e*/
    }
  }
  this->MiddleFrameIndex = v5; /*0x427842*/
  return this; /*0x42784a*/
}
} // namespace gamemd
}

// 0x427B50
namespace gamemd {
void* AnimTypeClass::GetWarhead(int a2)
{
{
  char Buffer[512]; // [esp+4h] [ebp-200h] BYREF

  int v3; // eax
  LOBYTE(v3) = this->DemandLoad; /*0x427b59*/
  if ( !(_BYTE)v3 ) /*0x427b61*/
  {
    if ( this->Theater ) /*0x427b67*/
    {
      LOBYTE(v3) = ObjectTypeClass::Load2DArt((char *)this); /*0x427b71*/
    }
    else
    {
      if ( this->Image && this->ImageAllocated ) /*0x427b85*/
      {
        __3_YAXPAX_Z(this->Image); /*0x427b90*/
        this->ImageAllocated = 0; /*0x427b98*/
      }
      char v4 = (unsigned char)this->ImageFile; /*0x427b9f*/
      const char * v5 = (const char *)(this + 504); /*0x427ba5*/
      this->Image = 0; /*0x427bad*/
      if ( !v4 ) /*0x427bb7*/
        v5 = (const char *)(this + 36); /*0x427bb9*/
      _makepath(Buffer, 0, 0, v5, Ext); /*0x427bcb*/
      TheaterObjectTypeClassSpecificID(Buffer, a2); /*0x427bde*/
      v3 = SearchMIXFile(Buffer, 1); /*0x427be9*/
      this->Image = v3; /*0x427bf0*/
      if ( !v3 ) /*0x427bf6*/
      {
        ObjectTypeClass::SetRTTI71(Buffer); /*0x427bfc*/
        v3 = SearchMIXFile(Buffer, 1); /*0x427c07*/
        this->Image = v3; /*0x427c0c*/
      }
    }
  }
  IUnknown *v6 = this->Image; /*0x427c12*/
  if ( v6 ) /*0x427c1a*/
  {
    int v7 = this->End; /*0x427c1c*/
    this->AnimTypeClass_field_2A4 = 1; /*0x427c22*/
    if ( !v7 ) /*0x427c2b*/
    {
      int v8 = v6->q018; /*0x427c2d*/
      bool v9 = this->Shadow; /*0x427c31*/
      this->End = v8; /*0x427c37*/
      if ( v9 ) /*0x427c3f*/
        this->End = v8 / 2; /*0x427c46*/
    }
    if ( !this->LoopEnd ) /*0x427c4c*/
      this->LoopEnd = this->End; /*0x427c5c*/
    this->MiddleFrameWidth = v6->q018 / 2; /*0x427c6b*/
    this->MiddleFrameHeight = -1; /*0x427c74*/
    this->q2A0 = -1; /*0x427c7a*/
    LOBYTE(v3) = -1; /*0x427c71*/
  }
  return v3; /*0x427c80*/
}
} // namespace gamemd
}

// 0x427D00
namespace gamemd {
int AnimTypeClass::LoadFromINI(unsigned char *** a2)
{
{
  char Bool_Overwrite; // al
  int Int_Overwrite; // eax
  AnimTypeClass *v8; // ebp
  AnimTypeClass *v9; // eax
  RandomStruct *v12; // ecx
  double Double_Overwrite; // st7
  INIClass *v15; // eax
  INIClass *edx20a; // edx
  CCINIClass *v17; // eax
  AnimTypeClass *v21; // ebp
  AnimTypeClass *v22; // eax
  OverlayTypeClass *v27; // ebp
  OverlayTypeClass *v28; // eax
  INIClass *v32; // ecx
  int Index; // eax
  AnimTypeClass *v40; // ebp
  int ebp40; // ebp
  AnimTypeClass *v41; // eax
  AnimTypeClass *v44; // ebp
  int ebp51; // ebp
  AnimTypeClass *v45; // eax
  AnimTypeClass *v48; // ebp
  int ebp62; // ebp
  AnimTypeClass *v49; // eax
  WarheadTypeClass *v54; // eax
  int eax77; // eax
  RandomStruct *v61; // eax
  RandomStruct *v65; // [esp-Ch] [ebp-C4h]
  RandomStruct *v64; // [esp-Ch] [ebp-C4h]
  char _FFFFFFF4a; // [esp-Ch] [ebp-C4h]
  RandomStruct *v66; // [esp-Ch] [ebp-C4h]
  RandomStruct *v67; // [esp-Ch] [ebp-C4h]
  char _FFFFFFF4b; // [esp-Ch] [ebp-C4h]
  ObjectClass *v70; // [esp+8h] [ebp-B0h] BYREF
  int aP4_4; // [esp+Ch] [ebp-ACh]
  RandomStruct aP1; // [esp+10h] [ebp-A8h] BYREF
  INIClass Source[2]; // [esp+18h] [ebp-A0h] BYREF
  char Destination[32]; // [esp+98h] [ebp-20h] BYREF

  INIClass::ResetSection(a2);
  if ( !ObjectTypeClass::LoadFromINI((char *)this, (CCINIClass *)a2) )
    return 0;
  Bool_Overwrite = INIClass::ReadBool_Overwrite(
                     (int)a2,
                     (unsigned __int8 *)(this + 36),
                     &unk_818660,
                     this->Shadow);
  if ( Bool_Overwrite != this->Shadow )
  {
    this->Shadow = Bool_Overwrite;
    if ( Bool_Overwrite )
      this->q2C0 /= 2;
    else
      this->End *= 2;
    int v5 = this->End;
    if ( this->LoopEnd > v5 )
      this->LoopEnd = v5;
  }
  if ( (unsigned char)this->ImageFile )
  {
    if ( !this->Image )
    {
      this->Theater = INIClass::ReadBool_Overwrite(
                                 (int)&DataGlobal_87F8E4[30876],
                                 (unsigned __int8 *)(this + 36),
                                 &unk_818658,
                                 this->Theater);
      this->NewTheater = INIClass::ReadBool_Overwrite(
                                 (int)&DataGlobal_87F8E4[30876],
                                 (unsigned __int8 *)(this + 36),
                                 &unk_81864C,
                                 this->NewTheater);
    }
    (*(void (__thiscall **)(int, int))(this->Strength)(this, -1);
  }
  this->Layer = AnimTypeClass::ReadINIString(
                              a2,
                              (unsigned __int8 *)(this + 36),
                              byte_818644,
                              this->Layer);
  this->AltPalette = INIClass::ReadBool_Overwrite(
                             (int)&DataGlobal_87F8E4[30876],
                             (unsigned __int8 *)(this + 36),
                             &unk_818638,
                             this->AltPalette);
  this->DoubleThick = INIClass::ReadBool_Overwrite(
                             (int)a2,
                             (unsigned __int8 *)(this + 36),
                             &unk_81862C,
                             this->DoubleThick);
  this->Flat = INIClass::ReadBool_Overwrite(
                             (int)a2,
                             (unsigned __int8 *)(this + 36),
                             &unk_818624,
                             this->Flat);
  this->Flamer = INIClass::ReadBool_Overwrite(
                             (int)a2,
                             (unsigned __int8 *)(this + 36),
                             &unk_81861C,
                             this->Flamer);
  this->Normalized = INIClass::ReadBool_Overwrite(
                             (int)a2,
                             (unsigned __int8 *)(this + 36),
                             &unk_818610,
                             this->Normalized);
  this->Translucent = INIClass::ReadBool_Overwrite(
                             (int)a2,
                             (unsigned __int8 *)(this + 36),
                             &unk_818604,
                             this->Translucent);
  this->Scorch = INIClass::ReadBool_Overwrite(
                             (int)a2,
                             (unsigned __int8 *)(this + 36),
                             &unk_8185FC,
                             this->Scorch);
  this->Crater = INIClass::ReadBool_Overwrite(
                             (int)a2,
                             (unsigned __int8 *)(this + 36),
                             &unk_8185F4,
                             this->Crater);
  this->ForceBigCraters = INIClass::ReadBool_Overwrite(
                             (int)a2,
                             (unsigned __int8 *)(this + 36),
                             (CCINIClass *)stru_81859C[72],
                             this->ForceBigCraters);
  this->Sticky = INIClass::ReadBool_Overwrite(
                             (int)a2,
                             (unsigned __int8 *)(this + 36),
                             &stru_816E3C,
                             this->Sticky);
  this->PingPong = INIClass::ReadBool_Overwrite(
                             (int)a2,
                             (unsigned __int8 *)(this + 36),
                             (CCINIClass *)&stru_81859C.INIClass_field_3C,
                             this->PingPong);
  this->Reverse = INIClass::ReadBool_Overwrite(
                             (int)a2,
                             (unsigned __int8 *)(this + 36),
                             (CCINIClass *)&stru_81859C.needsSave_flag,
                             this->Reverse);
  this->PsiWarning = INIClass::ReadBool_Overwrite(
                             (int)a2,
                             (unsigned __int8 *)(this + 36),
                             (CCINIClass *)&stru_81859C[40],
                             this->PsiWarning);
  this->TiberiumChainReaction = INIClass::ReadBool_Overwrite(
                             (int)a2,
                             (unsigned __int8 *)(this + 36),
                             (CCINIClass *)stru_81859C.sectionHead,
                             this->TiberiumChainReaction);
  Int_Overwrite = INIClass::ReadInt_Overwrite(
                    (int)a2,
                    (unsigned __int8 *)(this + 36),
                    (CCINIClass *)&stru_81859C.headNode[1],
                    (INIClass *)0xFFFFFFFF);
  if ( Int_Overwrite != -1 )
  {
    if ( Int_Overwrite <= 0 )
      int v7 = 0;
    else
      v7 = 900 / Int_Overwrite;
    this->Rate = v7;
  }
  this->Damage = INIClass::ReadDouble_Overwrite(
                              (int)a2,
                              (INIClass *)(this + 36),
                              (unsigned __int8 *)&stru_81859C,
                              (INIClass *)this->Damage);
  this->Start = INIClass::ReadInt_Overwrite(
                              (int)a2,
                              (unsigned __int8 *)(this + 36),
                              &unk_818594,
                              this->Start);
  this->End = INIClass::ReadInt_Overwrite(
                              (int)a2,
                              (unsigned __int8 *)(this + 36),
                              &unk_818590,
                              this->q2C0);
  this->LoopStart = INIClass::ReadInt_Overwrite(
                              (int)a2,
                              (unsigned __int8 *)(this + 36),
                              &unk_818584,
                              this->q2B8);
  this->LoopEnd = INIClass::ReadInt_Overwrite(
                              (int)a2,
                              (unsigned __int8 *)(this + 36),
                              &unk_81857C,
                              this->q2BC);
  this->LoopCount = INIClass::ReadInt_Overwrite(
                              (int)a2,
                              (unsigned __int8 *)(this + 36),
                              &unk_818570,
                              this->q2C4);
  v8 = this->q2C8;
  if ( INIClass::GetString(
         a2,
         (INIClass *)(this + 36),
         &unk_818568,
         (INIClass *)&DataGlobal_87F8E4[42624],
         Source,
         128) )
  {
    v9 = globalHelper_028F70(Source[0].__pad_0, (int)&g_CellDirectionOffsets[84672]);
  }
  else
  {
    v9 = v8;
  }
  this->Next = v9;
  this->DetailLevel = INIClass::ReadInt_Overwrite(
                              (int)a2,
                              (unsigned __int8 *)(this + 36),
                              &unk_81855C,
                              this->q2D4);
  this->TranslucencyDetailLevel = INIClass::ReadInt_Overwrite(
                              (int)a2,
                              (unsigned __int8 *)(this + 36),
                              &unk_818544,
                              this->q2D8);
  int v10 = this->RandomLoopDelay.Max;
  v70 = this->q2DC;
  aP4_4 = v10;
  int * v11 = INIClass::ReadPoint2D_Overwrite(a2, &aP1, (INIClass *)(this + 36), &unk_818534, (RandomStruct *)&v70);
  v12 = (RandomStruct *)*v11;
  int v13 = v11[1];
  this->RandomLoopDelay = v12;
  this->RandomLoopDelay.Max = v13;
  this->Translucency = INIClass::ReadInt_Overwrite(
                              (int)a2,
                              (unsigned __int8 *)(this + 36),
                              &unk_818524,
                              this->q2EC);
  this->IsTiberium = INIClass::ReadBool_Overwrite(
                             (int)a2,
                             (unsigned __int8 *)(this + 36),
                             (CCINIClass *)&stru_8184C8.unknown50,
                             this->IsTiberium);
  this->HideIfNoOre = INIClass::ReadBool_Overwrite(
                             (int)a2,
                             (unsigned __int8 *)(this + 36),
                             (CCINIClass *)&stru_8184C8[68],
                             this->HideIfNoOre);
  this->YSortAdjust = INIClass::ReadInt_Overwrite(
                              (int)a2,
                              (unsigned __int8 *)(this + 36),
                              (CCINIClass *)&stru_8184C8.unknown38,
                              this->YSortAdjust);
  Double_Overwrite = INIClass::ReadDouble_Overwrite(
                       (int)a2,
                       (INIClass *)(this + 36),
                       (unsigned __int8 *)&stru_8184C8.INIClass_field_2C,
                       (INIClass *)this->Elasticity);
  v15 = this->MaxXYVel;
  this->q310 = Double_Overwrite;
  double v16 = INIClass::ReadDouble_Overwrite((int)a2, (INIClass *)(this + 36), (unsigned __int8 *)stru_8184C8[32], v15);
  edx20a = this->q318;
  this->MaxXYVel = v16;
  double v18; // st7
  v18 = INIClass::ReadDouble_Overwrite(
          (int)a2,
          (INIClass *)(this + 36),
          (unsigned __int8 *)&stru_8184C8.sectionHead[2],
          edx20a);
  v17 = this->MakeInfantry;
  this->q318 = v18;
  int v20; // eax
  v20 = INIClass::ReadInt_Overwrite(
          (int)a2,
          (unsigned __int8 *)(this + 36),
          (CCINIClass *)&stru_8184C8.headNode[1],
          (INIClass *)v17);
  v21 = this->q2F0;
  this->MakeInfantry = v20;
  if ( INIClass::GetString(
         a2,
         (INIClass *)(this + 36),
         (unsigned __int8 *)&stru_8184C8,
         (INIClass *)&DataGlobal_87F8E4[42624],
         Source,
         128) )
  {
    v22 = globalHelper_028F70(Source[0].__pad_0, (int)&g_CellDirectionOffsets[84672]);
  }
  else
  {
    v22 = v21;
  }
  v65 = this->q2F4;
  this->Spawns = v22;
  this->SpawnCount = INIClass::ReadInt_Overwrite(
                              (int)a2,
                              (unsigned __int8 *)(this + 36),
                              &unk_8184BC,
                              (INIClass *)v65);
  char v23 = INIClass::ReadBool_Overwrite((int)a2, (unsigned __int8 *)(this + 36), &unk_8184B0, this->IsMeteor);
  bool v24 = this->IsVeins;
  this->IsMeteor = v23;
  char v25 = INIClass::ReadBool_Overwrite((int)a2, (unsigned __int8 *)(this + 36), &unk_8184A8, v24);
  v64 = this->TiberiumSpreadRadius;
  this->IsVeins = v25;
  int v26 = INIClass::ReadInt_Overwrite((int)a2, (unsigned __int8 *)(this + 36), &unk_818490, (INIClass *)v64);
  v27 = this->TiberiumSpawnType;
  this->TiberiumSpreadRadius = v26;
  if ( INIClass::GetString(
         a2,
         (INIClass *)(this + 36),
         &unk_81847C,
         (INIClass *)&DataGlobal_87F8E4[42624],
         Source,
         128) )
  {
    v28 = BuildingTypeClass::FindOrCreate2(Source[0].__pad_0);
  }
  else
  {
    v28 = v27;
  }
  bool v29 = this->IsAnimatedTiberium;
  this->TiberiumSpawnType = v28;
  char v30; // al
  v30 = INIClass::ReadBool_Overwrite(
          (int)a2,
          (unsigned __int8 *)(this + 36),
          (CCINIClass *)&stru_818424[68],
          v29);
  _FFFFFFF4a = this->ShouldFogRemove;
  this->IsAnimatedTiberium = v30;
  this->ShouldFogRemove = INIClass::ReadBool_Overwrite(
                             (int)a2,
                             (unsigned __int8 *)(this + 36),
                             (CCINIClass *)&stru_818424.needsSave_flag,
                             _FFFFFFF4a);
  char v31; // al
  v31 = INIClass::ReadBool_Overwrite(
          (int)a2,
          (unsigned __int8 *)(this + 36),
          (CCINIClass *)&stru_818424[36],
          this->IsFlamingGuy);
  v32 = this->RunningFrames;
  this->IsFlamingGuy = v31;
  int v33; // eax
  v33 = INIClass::ReadInt_Overwrite(
          (int)a2,
          (unsigned __int8 *)(this + 36),
          (CCINIClass *)&stru_818424.sectionHead[1],
          v32);
  v66 = this->YDrawOffset;
  this->RunningFrames = v33;
  this->YDrawOffset = INIClass::ReadInt_Overwrite(
                              (int)a2,
                              (unsigned __int8 *)(this + 36),
                              (CCINIClass *)&stru_818424.headNode[1],
                              (INIClass *)v66);
  int v34 = INIClass::ReadInt_Overwrite((int)a2, (unsigned __int8 *)(this + 36), &stru_818424, this->ZAdjust);
  int v35 = this->Report;
  this->ZAdjust = v34;
  if ( !INIClass::GetString(
          a2,
          (INIClass *)(this + 36),
          &unk_818418,
          (INIClass *)&DataGlobal_87F8E4[42624],
          Source,
          128)
    || (Index = VocClass::FindIndex(Source), Index == -1) )
  {
    Index = v35;
  }
  this->Report = Index;
  if ( Index == -1 )
  {
    if ( !INIClass::GetString(
            a2,
            (INIClass *)(this + 36),
            &unk_818410,
            (INIClass *)&DataGlobal_87F8E4[42624],
            Source,
            128)
  int v37; // eax
      || (v37 = VocClass::FindIndex(Source), v37 == -1) )
    {
      v37 = -1;
    }
    this->Report = v37;
  }
  int v38 = this->StopSound;
  if ( !INIClass::GetString(
          a2,
          (INIClass *)(this + 36),
          &unk_818404,
          (INIClass *)&DataGlobal_87F8E4[42624],
          Source,
          128)
  int v39; // eax
    || (v39 = VocClass::FindIndex(Source), v39 == -1) )
  {
    v39 = v38;
  }
  v40 = this->BounceAnim;
  this->StopSound = v39;
  if ( INIClass::GetString(
         a2,
         (INIClass *)(this + 36),
         &unk_8183F8,
         (INIClass *)&DataGlobal_87F8E4[42624],
         Source,
         128) )
  {
    if ( !_strcmpi((char *)&stru_817460.sectionHead[1], Source[0].__pad_0) || !_strcmpi(g_Str_none, Source[0].__pad_0) )
      goto LABEL_46;
    ebp40 = 0;
    if ( *(int *)&g_CellDirectionOffsets[84688] > 0 )
    {
      while ( _strcmpi(
                (char *)(*(_DWORD *)(*(_DWORD *)&g_CellDirectionOffsets[84676] + 4 * ebp40) + 36),
                Source[0].__pad_0) )
      {
        if ( ++ebp40 >= *(int *)&g_CellDirectionOffsets[84688] )
          goto LABEL_43;
      }
      v41 = *(AnimTypeClass **)(*(_DWORD *)&g_CellDirectionOffsets[84676] + 4 * ebp40);
      goto LABEL_47;
    }
LABEL_43:
    _DWORD * v42 = (_DWORD *)__2_YAPAXI_Z(0x378u);
    if ( v42 )
      v41 = (AnimTypeClass *)AnimTypeClass::Construct(v42, (AbstractClass *)Source);
    else
LABEL_46:
      v41 = 0;
LABEL_47:
    v40 = v41;
  }
  this->BounceAnim = v40;
  v44 = this->q304;
  if ( !INIClass::GetString(
          a2,
          (INIClass *)(this + 36),
          &unk_8183EC,
          (INIClass *)&DataGlobal_87F8E4[42624],
          Source,
          128) )
  {
    v45 = v44;
    goto LABEL_59;
  }
  if ( !_strcmpi((char *)&stru_817460.sectionHead[1], Source[0].__pad_0) || !_strcmpi(g_Str_none, Source[0].__pad_0) )
  {
LABEL_57:
    v45 = 0;
    goto LABEL_59;
  }
  ebp51 = 0;
  if ( *(int *)&g_CellDirectionOffsets[84688] <= 0 )
  {
LABEL_54:
    _DWORD * v46 = (_DWORD *)__2_YAPAXI_Z(0x378u);
    if ( v46 )
    {
      v45 = (AnimTypeClass *)AnimTypeClass::Construct(v46, (AbstractClass *)Source);
      goto LABEL_59;
    }
    goto LABEL_57;
  }
  while ( _strcmpi(
            (char *)(*(_DWORD *)(*(_DWORD *)&g_CellDirectionOffsets[84676] + 4 * ebp51) + 36),
            Source[0].__pad_0) )
  {
    if ( ++ebp51 >= *(int *)&g_CellDirectionOffsets[84688] )
      goto LABEL_54;
  }
  v45 = *(AnimTypeClass **)(*(_DWORD *)&g_CellDirectionOffsets[84676] + 4 * ebp51);
LABEL_59:
  v48 = this->q308;
  this->ExpireAnim = v45;
  if ( INIClass::GetString(
         a2,
         (INIClass *)(this + 36),
         &unk_8183E0,
         (INIClass *)&DataGlobal_87F8E4[42624],
         Source,
         128) )
  {
    if ( !_strcmpi((char *)&stru_817460.sectionHead[1], Source[0].__pad_0) || !_strcmpi(g_Str_none, Source[0].__pad_0) )
      goto LABEL_68;
    ebp62 = 0;
    if ( *(int *)&g_CellDirectionOffsets[84688] > 0 )
    {
      while ( _strcmpi(
                (char *)(*(_DWORD *)(*(_DWORD *)&g_CellDirectionOffsets[84676] + 4 * ebp62) + 36),
                Source[0].__pad_0) )
      {
        if ( ++ebp62 >= *(int *)&g_CellDirectionOffsets[84688] )
          goto LABEL_65;
      }
      v49 = *(AnimTypeClass **)(*(_DWORD *)&g_CellDirectionOffsets[84676] + 4 * ebp62);
      goto LABEL_70;
    }
LABEL_65:
    _DWORD * v50 = (_DWORD *)__2_YAPAXI_Z(0x378u);
    if ( v50 )
      v49 = (AnimTypeClass *)AnimTypeClass::Construct(v50, (AbstractClass *)Source);
    else
LABEL_68:
      v49 = 0;
  }
  else
  {
    v49 = v48;
  }
LABEL_70:
  v67 = this->q30C;
  this->TrailerAnim = v49;
  this->TrailerSeperation = INIClass::ReadInt_Overwrite(
                              (int)a2,
                              (unsigned __int8 *)(this + 36),
                              &unk_8183CC,
                              (INIClass *)v67);
  int v52 = INIClass::ReadInt_Overwrite((int)a2, (unsigned __int8 *)(this + 36), &unk_8183BC, this->DamageRadius);
  WarheadTypeClass *v53 = this->Warhead;
  this->DamageRadius = v52;
  if ( INIClass::GetString(
         a2,
         (INIClass *)(this + 36),
         &unk_8183B4,
         (INIClass *)&DataGlobal_87F8E4[42624],
         Source,
         128) )
  {
    v54 = WarheadTypeClass::FindOrCreate(Source[0].__pad_0);
  }
  else
  {
    v54 = v53;
  }
  _FFFFFFF4b = this->Bouncer;
  this->Warhead = v54;
  this->Bouncer = INIClass::ReadBool_Overwrite(
                             (int)a2,
                             (unsigned __int8 *)(this + 36),
                             &unk_8183AC,
                             _FFFFFFF4b);
  char v55; // al
  v55 = INIClass::ReadBool_Overwrite(
          (int)a2,
          (unsigned __int8 *)(this + 36),
          (CCINIClass *)&aP3.unknown50,
          this->Tiled);
  bool v56 = this->ShouldUseCellDrawer;
  this->Tiled = v55;
  char v57 = INIClass::ReadBool_Overwrite((int)a2, (unsigned __int8 *)(this + 36), (CCINIClass *)&aP3.INIClass_field_3C, v56);
  bool v71 = this->UseNormalLight;
  this->ShouldUseCellDrawer = v57;
  this->UseNormalLight = INIClass::ReadBool_Overwrite(
                             (int)a2,
                             (unsigned __int8 *)(this + 36),
                             (CCINIClass *)&aP3.INIClass_field_2C,
                             v71);
  if ( INIClass::GetString(
         a2,
         (INIClass *)(this + 36),
         (unsigned __int8 *)&aP3.sectionCount,
         0,
         (INIClass *)Destination,
         32) )
  {
    this->SpawnsParticle = BuildingTypeClass::FindOrCreateEx(Destination);
  }
  this->NumParticles = INIClass::ReadInt_Overwrite(
                              (int)a2,
                              (unsigned __int8 *)(this + 36),
                              (CCINIClass *)&aP3.headNode[2],
                              this->NumParticles);
  v70 = (ObjectClass *)-1;
  aP4_4 = -1;
  int * v58 = INIClass::ReadPoint2D_Overwrite(a2, &aP1, (INIClass *)(this + 36), &aP3, (RandomStruct *)&v70);
  int v59 = *v58;
  int v60 = v58[1];
  if ( *v58 != -1 )
  {
    if ( v59 <= 0 )
      eax77 = 0;
    else
      eax77 = 900 / v59;
    this->RandomRate = eax77;
  }
  if ( v60 != -1 )
  {
    if ( v60 <= 0 )
      int v62 = 0;
    else
      v62 = 900 / v60;
    this->RandomRate.Max = v62;
  }
  if ( this->q2E8 < 0 )
    this->RandomRate.Max = 0;
  v61 = this->q2E8;
  if ( this->RandomRate > (int)v61 )
    this->RandomRate = v61;
  return 1;
}
} // namespace gamemd
}

// 0x428800
namespace gamemd {
ScenarioClass * * AnimTypeClass::SaveLoad_Prefix(int a1, int a2)
{
{
  int result; // eax
  char Buffer[512]; // [esp+8h] [ebp-200h] BYREF

  result = ObjectTypeClass::LoadCleanup(a1, a2); /*0x428814*/
  if ( result >= 0 ) /*0x42881b*/
  {
    if ( a1 ) /*0x428823*/
    {
  char v3; // [esp+7h] [ebp-201h] BYREF
      ObjectTypeClass::Construct((_DWORD *)a1, (int)&v3); /*0x42882c*/
      *(_DWORD *)a1 = &AnimTypeClass::`vftable'; /*0x428831*/
      *(_DWORD *)(a1 + 4) = &AnimTypeClass::`vftable'; /*0x428837*/
      *(_DWORD *)(a1 + 8) = &AnimTypeClass::`vftable'; /*0x42883e*/
      *(_DWORD *)(a1 + 12) = &vt_AnimTypeClass; /*0x428845*/
    }
    VoxelAnimType::LoadAnim((char *)a1); /*0x42884e*/
    ObjectTypeClass::Load2DArt((char *)a1); /*0x428855*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)(a1 + 712)); /*0x428866*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)(a1 + 772)); /*0x428877*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)(a1 + 776)); /*0x428888*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)(a1 + 768)); /*0x428899*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)(a1 + 752)); /*0x4288aa*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)(a1 + 816)); /*0x4288bb*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)(a1 + 824)); /*0x4288cc*/
    if ( !*(_BYTE *)(a1 + 862) ) /*0x4288d1*/
    {
      if ( *(_BYTE *)(a1 + 556) ) /*0x4288db*/
      {
        _makepath( /*0x428910*/
          Buffer,
          0,
          0,
          (const char *)(a1 + 36),
          (const char *)&off_7E1BC6 + 112 * *((_DWORD *)g_ScenarioClass_Instance + 1174));
        *(_DWORD *)(a1 + 164) = SearchMIXFile(Buffer, 1); /*0x428923*/
        return 0; /*0x428932*/
      }
      if ( *(_BYTE *)(a1 + 567) ) /*0x428935*/
        (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)a1 + 160))(a1, *((_DWORD *)g_ScenarioClass_Instance + 1174)); /*0x42894f*/
    }
    return 0; /*0x428955*/
  }
  return result; /*0x42892b*/
}
} // namespace gamemd
}

// 0x4289D0
namespace gamemd {
int AnimTypeClass::PowerDrainUpdate(int * a2)
{
{

  AbstractTypeClass::ProcessPower((char *)this, a2); /*0x4289d9*/
  Power::TimerProcess(this->Layer); /*0x4289e7*/
  int v3; // ecx
  LOBYTE(v3) = this->Normalized; /*0x4289ec*/
  Power::FlagProcess(a2, v3); /*0x4289f5*/
  int v4; // edx
  LOBYTE(v4) = this->Flat; /*0x4289fa*/
  int v5 = Power::FlagProcess(a2, v4); /*0x428a03*/
  LOBYTE(v5) = this->Translucent; /*0x428a08*/
  Power::FlagProcess(a2, v5); /*0x428a11*/
  int v6; // ecx
  LOBYTE(v6) = this->Scorch; /*0x428a16*/
  Power::FlagProcess(a2, v6); /*0x428a1f*/
  int v7; // edx
  LOBYTE(v7) = this->Flamer; /*0x428a24*/
  int v8 = Power::FlagProcess(a2, v7); /*0x428a2d*/
  LOBYTE(v8) = this->Crater; /*0x428a32*/
  Power::FlagProcess(a2, v8); /*0x428a3b*/
  int v9; // ecx
  LOBYTE(v9) = this->Sticky; /*0x428a40*/
  Power::FlagProcess(a2, v9); /*0x428a49*/
  int v10; // edx
  LOBYTE(v10) = this->PingPong; /*0x428a4e*/
  int v11 = Power::FlagProcess(a2, v10); /*0x428a57*/
  LOBYTE(v11) = this->Reverse; /*0x428a5c*/
  Power::FlagProcess(a2, v11); /*0x428a65*/
  int v12; // ecx
  LOBYTE(v12) = this->Shadow; /*0x428a6a*/
  Power::FlagProcess(a2, v12); /*0x428a73*/
  Power::TimerProcess(this->MiddleFrameWidth); /*0x428a81*/
  Checksummer::Add_double((unsigned int *)a2, this->Damage, this->q2AC); /*0x428a96*/
  int v13; // edx
  LOBYTE(v13) = this->TiberiumChainReaction; /*0x428a9b*/
  Power::FlagProcess(a2, v13); /*0x428aa4*/
  Power::TimerProcess(this->Rate); /*0x428ab2*/
  Power::TimerProcess(this->Start); /*0x428ac0*/
  Power::TimerProcess(this->LoopStart); /*0x428ace*/
  Power::TimerProcess(this->LoopEnd); /*0x428adc*/
  Power::TimerProcess(this->End); /*0x428aea*/
  Power::TimerProcess(this->Report); /*0x428af8*/
  Power::TimerProcess(this->StopSound); /*0x428b06*/
  Power::TimerProcess(this->NumParticles); /*0x428b14*/
  Power::TimerProcess(this->DetailLevel); /*0x428b22*/
  Power::TimerProcess(this->TranslucencyDetailLevel); /*0x428b30*/
  Power::TimerProcess(this->RandomLoopDelay); /*0x428b3e*/
  Power::TimerProcess(this->RandomLoopDelay.Max); /*0x428b4c*/
  Power::TimerProcess(this->Translucency); /*0x428b5a*/
  int v14; // ecx
  LOBYTE(v14) = this->Tiled; /*0x428b5f*/
  return Power::FlagProcess(a2, v14); /*0x428b6d*/
}
} // namespace gamemd
}

// 0x428B80
namespace gamemd {
AnimTypeClass * * AnimTypeClass::FindOrCreate()
{
{

  if ( !_strcmpi(&stru_817460.sectionHead[1], this) || !_strcmpi(g_Str_none, this) ) /*0x428b9c*/
    return 0; /*0x428bff*/
  int v2 = 0; /*0x428bad*/
  if ( *(int *)&stru_89E138[90152] <= 0 ) /*0x428bb1*/
  {
LABEL_6:
    _DWORD * v3 = (_DWORD *)__2_YAPAXI_Z(0x378u); /*0x428bd6*/
    if ( v3 ) /*0x428be5*/
      return (AnimTypeClass *)AnimTypeClass::Construct(v3, this); /*0x428bf1*/
    return 0; /*0x428be5*/
  }
  while ( _strcmpi((const void *)(*(_DWORD *)(*(_DWORD *)&stru_89E138[90140] + 4 * v2) + 36), this) ) /*0x428bca*/
  {
    if ( ++v2 >= *(int *)&stru_89E138[90152] ) /*0x428bd4*/
      goto LABEL_6; /*0x428bd4*/
  }
  return *(AnimTypeClass **)(*(_DWORD *)&stru_89E138[90140] + 4 * v2); /*0x428bef*/
}
} // namespace gamemd
}

// 0x428C30
namespace gamemd {
int AnimTypeClass::GetDamage()
{
{
  int result; // eax
  void *EntireFile; // eax
  char Buffer[512]; // [esp+DCh] [ebp-200h] BYREF

  result = this->Image; /*0x428c39*/
  if ( !result && this->DemandLoad ) /*0x428c47*/
  {
    Debug::Log(); /*0x428c5e*/
    const char * v3 = this + 504; /*0x428c69*/
    if ( !this->ImageFile ) /*0x428c63*/
      v3 = this + 36; /*0x428c76*/
    _makepath(Buffer, 0, 0, v3, Ext); /*0x428c8b*/
    if ( this->q22C ) /*0x428c90*/
    {
      _makepath(Buffer, 0, 0, this + 36, (const char *)&off_7E1BC6 + 112 * *((_DWORD *)g_ScenarioClass_Instance + 1174)); /*0x428ccc*/
    }
    else if ( this->q237 ) /*0x428cd6*/
    {
      TheaterObjectTypeClassSpecificID(Buffer, *((_DWORD *)g_ScenarioClass_Instance + 1174)); /*0x428cf3*/
    }
  _DWORD v7[22]; // [esp+4h] [ebp-2D8h] BYREF
    CCFileClass::Construct(v7, Buffer); /*0x428d04*/
    EntireFile = CCFileClass::ReadEntireFile(v7); /*0x428d0d*/
    this->Image = EntireFile; /*0x428d14*/
    if ( EntireFile ) /*0x428d1a*/
    {
      this->ImageAllocated = 1; /*0x428d1c*/
    }
    else
    {
      ObjectTypeClass::SetRTTI71(Buffer); /*0x428d2c*/
  _DWORD v10[22]; // [esp+70h] [ebp-26Ch] BYREF
      CCFileClass::Construct(v10, Buffer); /*0x428d3d*/
      void * v5 = CCFileClass::ReadEntireFile(v10); /*0x428d46*/
      this->Image = v5; /*0x428d4d*/
      if ( v5 ) /*0x428d53*/
        this->ImageAllocated = 1; /*0x428d55*/
      v10[0] = &vt_CCFileClass; /*0x428d63*/
      int v12 = 0; /*0x428d6b*/
  char v11[12]; // [esp+C8h] [ebp-214h] BYREF
      Vector::Clear((int)v11); /*0x428d76*/
      v10[0] = &off_7E1668; /*0x428d7f*/
      BufferIOFileClass::Dtor(v10); /*0x428d87*/
    }
    (*(void (__thiscall **)(char *, _DWORD))(this->Strength)(this, *((_DWORD *)g_ScenarioClass_Instance + 1174)); /*0x428d9c*/
    int v6 = this->Image; /*0x428da2*/
    v7[0] = &vt_CCFileClass; /*0x428dac*/
    int v9 = 0; /*0x428db4*/
  char v8[12]; // [esp+5Ch] [ebp-280h] BYREF
    Vector::Clear((int)v8); /*0x428dbc*/
    v7[0] = &off_7E1668; /*0x428dc5*/
    BufferIOFileClass::Dtor(v7); /*0x428dcd*/
    return v6; /*0x428dd2*/
  }
  return result; /*0x428dd4*/
}
} // namespace gamemd
}

// 0x428EA0
namespace gamemd {
AnimTypeClass * AnimTypeClass::ddtor(char a2)
{
    AnimTypeClass* v7 = this;
    g_AnimPoolManager;
    int v2 = g_AnimPoolManager.FindItemIndex(&v7);
    if ( v2 != -1 && v2 < g_AnimManager && v2 < --g_AnimManager )
    {
        do
        {
            ++v2;
            *(g_AnimPoolCount + v2 - 1) = *(g_AnimPoolCount + v2);
        }
        while ( v2 < g_AnimManager );
    }
    DataGlobal_8B4150;
    int v3 = DataGlobal_8B4150.FindItemIndex(&v7);
    if ( v3 != -1 && v3 < DataGlobal_8B4160 && v3 < --DataGlobal_8B4160 )
    {
        do
        {
            ++v3;
            *(DataGlobal_8B4154 + v3 - 1) = *(DataGlobal_8B4154 + v3);
        }
        while ( v3 < DataGlobal_8B4160 );
    }
    ObjectTypeClass::Destruct(this);
    if ( a2 & 1 )
        OperatorDelete(this);
    return this;
}
}
} // namespace gamemd

// 0x48E050
namespace gamemd {
int AnimTypeClass::LookupByName()
{
{
  const void **v3; // esi

  if ( !this ) /*0x48e057*/
    return -1; /*0x48e07c*/
  int v2 = 0; /*0x48e059*/
  v3 = (const void **)off_81DA78; /*0x48e05b*/
  while ( _strcmpi(*v3, this) ) /*0x48e06e*/
  {
    ++v3; /*0x48e070*/
    ++v2; /*0x48e073*/
    if ( (int)v3 >= (int)dword_81DA8C ) /*0x48e07a*/
      return -1; /*0x48e07a*/
  }
  return v2; /*0x48e07c*/
}
} // namespace gamemd
}

// 0x427A80
namespace gamemd {
char AnimTypeClass::GetLoopCount(int a2)
{
{
    int v2;
    char Buffer[512];
    LOBYTE(v2) = g_ArmageddonMode;
    if ( g_ArmageddonMode || a2 != DataGlobal_822CF8 )
  {
    if ( !this->Theater || this->DemandLoad )
    {
    LOBYTE(v2) = this->NewTheater;
    if ( (char)v2 )
    LOBYTE(v2) = this->GetWarhead(a2);
    }
    else
    {
    if ( this->Image && this->ImageAllocated )
      {
    __3_YAXPAX_Z(*((void **)(this) + 41));
    this->ImageAllocated = 0;
      }
    this->Image = 0;
    _makepath(Buffer, 0, 0, (const char *)(this) + 36, (const char *)&DataGlobal_7E1BC6 + 112 * a2);
    v2 = SearchMIXFile(Buffer, 1);
    this->Image = v2;
    }
  }
    return v2;
}
}
} // namespace gamemd

// 0x427CB0
namespace gamemd {
int AnimTypeClass::FindIndex()
{
{
    int v2;
    if ( !this )
    return -1;
    v2 = 0;
    if ( *(int *)&DataGlobal_89E138[90152] <= 0 )
    return -1;
    while ( _strcmpi((const void *)(*(int *)(*(int *)&DataGlobal_89E138[90140] + 4 * v2) + 36), this) )
  {
    if ( ++v2 >= *(int *)&DataGlobal_89E138[90152] )
    return -1;
  }
    return v2;
}
}
} // namespace gamemd

// 0x428970
namespace gamemd {
int AnimTypeClass::SaveLoad_Prefix_0(TechnoTypeClass * aP0, ObjectTypeClass * aP1, int aP2)
{
{
    int result;
    result = AbstractClass::SaveLoad_PrefixWrapper(aP0, aP1, (TechnoTypeClass *)aP2);
    if ( result >= 0 )
    return 0;
    return result;
}
}
} // namespace gamemd

// 0x428990
namespace gamemd {
int AnimTypeClass::GetClassIdentifier(int a1, unsigned int * a2)
{
  if ( !a2 )
    return -2147467261;
  *a2 = -1366608934;
  a2[1] = 298976796;
  a2[2] = 1610654892;
  a2[3] = -1252326136;
  return 0;
}
} // namespace gamemd

// 0x428C10
namespace gamemd {
int AnimTypeClass::GetAnimData(int a2, int a3)
{
{
    int result;
    result = this->Next;
    if ( result == a2 )
    this->Next = 0;
    return result;
}
}
} // namespace gamemd

// 0x428E40
namespace gamemd {
int AnimTypeClass::Thunk_AnimTypeClass_sub_428E40()
{
return -1;
}
} // namespace gamemd

// 0x428E50
namespace gamemd {
int AnimTypeClass::Thunk_AnimTypeClass_sub_428E50()
{
return 5;
}
} // namespace gamemd

// 0x428E60
namespace gamemd {
int AnimTypeClass::GetAuxField()
{
{
    return this->MiddleFrameIndex;
}
}
} // namespace gamemd

// 0x428E70
namespace gamemd {
int AnimTypeClass::GetObjectSize()
{
return 888;
}
} // namespace gamemd

// 0x428E80
namespace gamemd {
char AnimTypeClass::Stub(int a1, int a2)
{
return 0;
}
} // namespace gamemd

// 0x428E90
namespace gamemd {
int AnimTypeClass::StubReturnFalse(int a1)
{
return 0;
}
} // namespace gamemd

// 0x477050
namespace gamemd {
int AnimTypeClass::ReadINIString(INIClass * aP1, unsigned char * a2, Layer a3)
{
{
    INIClass *v5;
    INIClass Destination[2];
    v5 = (INIClass *)globalHelper_08E090(a3);
    if ( INIClass::GetString(this, aP1, a2, v5, Destination, 128) )
    return AnimTypeClass::LookupByName(Destination);
    else
    return a3;
}
}
} // namespace gamemd
