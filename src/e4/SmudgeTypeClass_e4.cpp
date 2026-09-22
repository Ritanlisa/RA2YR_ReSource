// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/Power_e4.hpp"
#include "e4/classes/VoxelAnimType_e4.hpp"

// 0x6B5260
char * SmudgeTypeClass::SmudgeTypeClass(ObjectClass * aP1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char *__thiscall SmudgeTypeClass::SmudgeTypeClass(char *this, ObjectClass *aP1)
{
  SmudgeTypeClass *v3; // eax
  bool v4; // zf
  int v5; // ecx
  CCINIClass *v6; // edx

  ObjectTypeClass::ConstructFull((int)this, (AbstractClass *)aP1); /*0x6b5269*/
  this->ArrayIndex = -1; /*0x6b5277*/
  this->Width = 1; /*0x6b5281*/
  this->Height = 1; /*0x6b5287*/
  this->q2A0 = 0; /*0x6b528d*/
  this->q2A1 = 0; /*0x6b5294*/
  *(_DWORD *)this = &SmudgeTypeClass::`vftable'; /*0x6b529b*/
  this->vtable1 = &SmudgeTypeClass::`vftable'; /*0x6b52a1*/
  this->vtable2 = &SmudgeTypeClass::`vftable'; /*0x6b52a7*/
  this->vtable3 = &vt_SmudgeTypeClass; /*0x6b52ae*/
  AbstractClass::GenerateUniqueID((int)(this + 4)); /*0x6b52b5*/
  this->q22F = 1; /*0x6b52ba*/
  this->LegalTarget = 0; /*0x6b52c7*/
  this->Insignificant = 1; /*0x6b52ce*/
  this->q233 = 1; /*0x6b52d4*/
  this->q235 = 0; /*0x6b52da*/
  v3 = *(SmudgeTypeClass **)&g_NetworkPlayerBuffer[5612]; /*0x6b52e1*/
  if ( *(int *)&g_NetworkPlayerBuffer[5612] < *(int *)&g_NetworkPlayerBuffer[5604] /*0x6b5322*/
    || (g_NetworkPlayerBuffer[5609] || !*(_DWORD *)&g_NetworkPlayerBuffer[5604])
    && *(int *)&g_NetworkPlayerBuffer[5616] > 0
    && (v4 = (*(unsigned __int8 (__thiscall **)(char *, int, _DWORD))(*(_DWORD *)&g_NetworkPlayerBuffer[5596] + 8))(
               &g_NetworkPlayerBuffer[5596],
               *(_DWORD *)&g_NetworkPlayerBuffer[5604] + *(_DWORD *)&g_NetworkPlayerBuffer[5616],
               0) == 0,
        v3 = *(SmudgeTypeClass **)&g_NetworkPlayerBuffer[5612],
        !v4) )
  {
    *(_DWORD *)&g_NetworkPlayerBuffer[5612] = &v3->__pad_0[1]; /*0x6b5327*/
    *(_DWORD *)(*(_DWORD *)&g_NetworkPlayerBuffer[5600] + 4 * (_DWORD)v3) = this; /*0x6b5331*/
    v3 = *(SmudgeTypeClass **)&g_NetworkPlayerBuffer[5612]; /*0x6b5334*/
  }
  v5 = 0; /*0x6b5339*/
  if ( (int)v3 <= 0 ) /*0x6b533d*/
  {
LABEL_11:
    this->ArrayIndex = -1; /*0x6b5351*/
    return this; /*0x6b535a*/
  }
  else
  {
    v6 = *(CCINIClass **)&g_NetworkPlayerBuffer[5600]; /*0x6b533f*/
    while ( *(char **)v6->__pad_0 != this ) /*0x6b5347*/
    {
      ++v5; /*0x6b5349*/
      v6 = (CCINIClass *)((char *)v6 + 4); /*0x6b534a*/
      if ( v5 >= (int)v3 ) /*0x6b534f*/
        goto LABEL_11; /*0x6b534f*/
    }
    this->ArrayIndex = v5; /*0x6b5361*/
    return this; /*0x6b5367*/
  }
}
}

// 0x6B55F0
void SmudgeTypeClass::vt_entry_A0(int * a2, int * a3, int a4, int a5, short * a6)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __thiscall SmudgeTypeClass::vt_entry_A0(_DWORD *this, int *a2, int *a3, int a4, int a5, __int16 *a6)
{
  int v7; // ebx
  int v8; // edx
  int v9; // ecx
  _DWORD *v10; // esi
  int v11; // eax
  int v12; // [esp-1Ch] [ebp-2Ch]
  int v13; // [esp+8h] [ebp-8h] BYREF
  int v14; // [esp+Ch] [ebp-4h]

  v7 = (*(int (__thiscall **)(_DWORD *))(*this + 156))(this); /*0x6b55ff*/
  if ( v7 ) /*0x6b5603*/
  {
    v8 = a2[1]; /*0x6b5614*/
    v13 = *a2; /*0x6b5619*/
    v14 = v8; /*0x6b561d*/
    if ( a4 ) /*0x6b5621*/
    {
      v9 = this->Width; /*0x6b5623*/
      v14 += -15 * (a4 / v9 + a4 % v9); /*0x6b5659*/
      v13 += 60 * (a4 / v9 - a4 % v9) / 2; /*0x6b5661*/
    }
    v10 = CellCoord::To_CellObj(&DataGlobal_87F7E8, a6); /*0x6b5674*/
    v12 = *((__int16 *)v10 + 134); /*0x6b568a*/
    v11 = ZCoordToScreenY(a5); /*0x6b568c*/
    DrawToSurfaceSHP(g_DSurface_Hidden_2, v10[13], v7, 0, &v13, a3, 3584, 0, -1 - v11, 0, v12, 0, 0, 0, 0, 0); /*0x6b56b4*/
  }
}
}

// 0x6B56D0
char SmudgeTypeClass::GetSize(unsigned char *** aP1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __thiscall SmudgeTypeClass::GetSize(int this, unsigned __int8 ***aP1)
{
  char Bool_Overwrite; // al
  char v4; // cl
  char v5; // al
  INIClass *v7; // [esp-8h] [ebp-210h]
  char Buffer[512]; // [esp+8h] [ebp-200h] BYREF

  INIClass::ResetSection(aP1); /*0x6b56e3*/
  if ( !ObjectTypeClass::LoadFromINI((char *)this, (CCINIClass *)aP1) ) /*0x6b56eb*/
    return 0; /*0x6b57db*/
  Bool_Overwrite = INIClass::ReadBool_Overwrite( /*0x6b570b*/
                     (int)aP1,
                     (unsigned __int8 *)(this + 36),
                     &unk_8185F4,
                     this->Crater);
  v4 = this->Burn; /*0x6b5710*/
  this->Crater = Bool_Overwrite; /*0x6b5716*/
  v5 = INIClass::ReadBool_Overwrite( /*0x6b5725*/
         (int)aP1,
         (unsigned __int8 *)(this + 36),
         (CCINIClass *)&stru_830620[64008],
         v4);
  v7 = *(INIClass **)(this + 664); /*0x6b5732*/
  this->Burn = v5; /*0x6b5739*/
  this->Width = INIClass::ReadInt_Overwrite( /*0x6b5744*/
                              (int)aP1,
                              (unsigned __int8 *)(this + 36),
                              (CCINIClass *)&stru_82BBD0.sectionHead[1],
                              v7);
  this->Height = INIClass::ReadInt_Overwrite( /*0x6b575e*/
                              (int)aP1,
                              (unsigned __int8 *)(this + 36),
                              &g_INI_Key_Height,
                              *(INIClass **)(this + 668));
  if ( this->Theater ) /*0x6b5764*/
    _makepath(Buffer, 0, 0, (const char *)(this + 504), (const char *)&off_7E1BC6 + 112 * g_ScenarioClass_Instance->theater); /*0x6b57b4*/
  else
    _makepath(Buffer, 0, 0, (const char *)(this + 504), Ext); /*0x6b5784*/
  this->Image = SearchMIXFile(Buffer, 0); /*0x6b57c7*/
  return 1; /*0x6b57cd*/
}
}

// 0x6B6160
SmudgeTypeClass * SmudgeTypeClass::ddtor(AbstractClass *a2, char a3)
{
    void *v3 = this->Image;
    if ( v3 )
    {
        OperatorDelete(v3);
        this->Image = 0;
    }
    AbstractClass::AnnounceExpiredPointer(this, 1);
    SmudgeTypeClass* v7 = this;
    int v5 = SmudgeTypeRegistryX.FindItemIndex(&v7);
    if ( v5 != -1 && v5 < SmudgeTypeRegistryX_Count )
    {
        --SmudgeTypeRegistryX_Count;
        for ( ; v5 < SmudgeTypeRegistryX_Count ; *(SmudgeTypeRegistryX_Items + v5 - 1) = *(SmudgeTypeRegistryX_Items + v5) )
        {
            ++v5;
        }
    }
    ObjectTypeClass::Destruct(this);
    if ( a3 & 1 )
        OperatorDelete(this);
    return this;
}
}

// 0x6B5550
bool SmudgeTypeClass::GetType(short * a2, int a3)
{
{
    void **v4;
    int v5;
    bool result;
    int v7[3];
    v4 = (void **)__2_YAPAXI_Z(0xB0u);
    result = 0;
    if ( v4 )
  {
    v7[2] = 0;
    v5 = *((int*)(a2) + 1);
    v7[0] = (*a2 << 8) + 128;
    v7[1] = (v5 << 8) + 128;
    if ( UnitClass::Create(v4, this, (AbstractClass *)v7, -1) )
    return 1;
  }
    return result;
}
}

// 0x6B55C0
SmudgeClass * SmudgeTypeClass::GetFlag(int a2)
{
{
    void **v3;
    v3 = (void **)__2_YAPAXI_Z(0xB0u);
    if ( v3 )
    return UnitClass::Create(v3, this, (AbstractClass *)&DataGlobal_B05488[25376], -1);
    else
    return 0;
}
}

// 0x6B57F0
int SmudgeTypeClass::PowerDrainUpdate(int * a2)
{
{
    int v3;
    int v4;
    AbstractTypeClass::ProcessPower((char *)this, a2);
    Power::TimerProcess(this->ArrayIndex);
    LOBYTE(v3) = this->Crater;
    Power::FlagProcess(a2, v3);
    LOBYTE(v4) = this->Burn;
    Power::FlagProcess(a2, v4);
    Power::TimerProcess(this->Width);
    return Power::TimerProcess(this->Height);
}
}

// 0x6B5850
int SmudgeTypeClass::LoadTypeData(ObjectTypeClass * aP0, int aP1)
{
{
    int result;
    result = ObjectTypeClass::LoadCleanup((IUnknown *)aP0, (ObjectTypeClass *)aP1);
    if ( result >= 0 )
  {
    if ( aP0 )
    {
    ObjectTypeClass::Construct(aP0, (ObjectTypeClass *)&aP1);
    *(int *)aP0->__pad_0 = (unsigned int)vt_SmudgeTypeClass;
    *(int *)&aP0->__pad_0[4] = (unsigned int)vt_SmudgeTypeClass;
    *(int *)&aP0->__pad_0[8] = (unsigned int)vt_SmudgeTypeClass;
    *(int *)&aP0->__pad_0[12] = &vt_SmudgeTypeClass;
    }
    VoxelAnimType::LoadAnim(aP0->__pad_0);
    ObjectTypeClass::Load2DArt(aP0->__pad_0);
    return 0;
  }
    return result;
}
}

// 0x6B58B0
int SmudgeTypeClass::SaveToINI(TechnoTypeClass * aP0, ObjectTypeClass * aP1, int aP2)
{
{
    int result;
    result = AbstractClass::SaveLoad_PrefixWrapper(aP0, aP1, (TechnoTypeClass *)aP2);
    if ( result >= 0 )
    return 0;
    return result;
}
}

// 0x6B58D0
int SmudgeTypeClass::GetClassIdentifier(int a1, unsigned int * a2)
{
  if ( !a2 )
    return -2147467261;
  *a2 = 1525862008;
  a2[1] = 298976820;
  a2[2] = 1610654892;
  a2[3] = -1252326136;
  return 0;
}

// 0x6B6130
int SmudgeTypeClass::GetTypeIdentifier()
{
return 30;
}

// 0x6B6140
int SmudgeTypeClass::GetObjectSize()
{
return 676;
}

// 0x6B6150
int SmudgeTypeClass::GetAuxField()
{
{
    return this->Width;
}
}
