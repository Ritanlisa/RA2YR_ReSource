// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"

// 0x41E350
namespace gamemd {
unsigned int * AnimTypeClass::Construct2(ObjectClass * aP1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
_DWORD *__thiscall AnimTypeClass::Construct2(_DWORD *this, ObjectClass *aP1)
{
  AITriggerTypeClass *v3; // eax

  AbstractTypeClass::Constructor((int)this, (AbstractClass *)aP1); /*0x41e359*/
  *(this + 38) = -1; /*0x41e363*/
  *(this + 42) = -1; /*0x41e369*/
  *(this + 46) = 0; /*0x41e374*/
  *(this + 48) = 0; /*0x41e37a*/
  *(this + 50) = 0; /*0x41e380*/
  *(this + 47) = 1072693248; /*0x41e386*/
  *(this + 49) = 1072693248; /*0x41e38c*/
  *(this + 51) = 1072693248; /*0x41e392*/
  *((_BYTE *)this + 210) = 1; /*0x41e39a*/
  *((_BYTE *)this + 211) = 1; /*0x41e3a0*/
  *((_BYTE *)this + 212) = 1; /*0x41e3a6*/
  *(this + 39) = 0; /*0x41e3b9*/
  *(this + 40) = 0; /*0x41e3bf*/
  *((_BYTE *)this + 164) = 0; /*0x41e3c5*/
  *(this + 43) = 0; /*0x41e3cb*/
  *(this + 44) = 0; /*0x41e3d1*/
  *((_BYTE *)this + 208) = 0; /*0x41e3d7*/
  *((_BYTE *)this + 209) = 0; /*0x41e3dd*/
  *(this + 54) = 0; /*0x41e3e3*/
  *(this + 55) = 0; /*0x41e3e9*/
  *(this + 56) = 0; /*0x41e3ef*/
  *(this + 65) = 0; /*0x41e3f5*/
  *(this + 66) = 0; /*0x41e3fb*/
  *this = &AITriggerTypeClass::`vftable'; /*0x41e401*/
  *(this + 1) = &AITriggerTypeClass::`vftable'; /*0x41e407*/
  *(this + 2) = &AITriggerTypeClass::`vftable'; /*0x41e40e*/
  *(this + 3) = &AITriggerTypeClass::`vftable'; /*0x41e415*/
  memset(this + 57, 0, 0x20u); /*0x41e41c*/
  if ( *(int *)&HouseClass_Player.__pad_5568[8028] < *(int *)&HouseClass_Player.__pad_5568[8020] /*0x41e452*/
    || (HouseClass_Player.__pad_5568[8025] || !*(_DWORD *)&HouseClass_Player.__pad_5568[8020])
    && *(int *)&HouseClass_Player.__pad_5568[8032] > 0
    && (*(unsigned __int8 (__thiscall **)(char *, int, _DWORD))(*(_DWORD *)&HouseClass_Player.__pad_5568[8012] + 8))(
         &HouseClass_Player.__pad_5568[8012],
         *(_DWORD *)&HouseClass_Player.__pad_5568[8020] + *(_DWORD *)&HouseClass_Player.__pad_5568[8032],
         0) )
  {
    v3 = (AITriggerTypeClass *)(*(_DWORD *)&HouseClass_Player.__pad_5568[8028])++; /*0x41e45f*/
    *(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[8016] + 4 * (_DWORD)v3) = this; /*0x41e46e*/
  }
  return this; /*0x41e473*/
}
}
} // namespace gamemd

// 0x427530
namespace gamemd {
unsigned int * AnimTypeClass::Construct(AbstractClass * aP1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
_DWORD *__thiscall AnimTypeClass::Construct(_DWORD *this, AbstractClass *aP1)
{
  AnimTypeClass *v3; // eax
  int v4; // eax
  int v5; // eax
  ObjectClass *v6; // ecx

  ObjectTypeClass::ConstructFull((int)this, aP1); /*0x42753a*/
  *(this + 165) = -1; /*0x427544*/
  *(this + 166) = 0; /*0x42754a*/
  *(this + 167) = 0; /*0x427550*/
  *(this + 168) = 0; /*0x427556*/
  this->AnimTypeClass_field_2A4 = 0; /*0x42755c*/
  *(this + 170) = 0; /*0x427562*/
  *(this + 171) = 0; /*0x427568*/
  *(this + 172) = 1; /*0x42756e*/
  *(this + 173) = 0; /*0x427578*/
  *(this + 174) = 0; /*0x42757e*/
  *(this + 175) = 0; /*0x427584*/
  *(this + 176) = 0; /*0x42758a*/
  *(this + 177) = 0; /*0x427590*/
  *(this + 178) = 0; /*0x427596*/
  *(this + 179) = -1; /*0x42759c*/
  *(this + 180) = 0; /*0x4275a2*/
  *(this + 181) = 0; /*0x4275a8*/
  *(this + 182) = 0; /*0x4275ae*/
  *(this + 183) = 0; /*0x4275b4*/
  *(this + 184) = 0; /*0x4275ba*/
  *(this + 185) = 0; /*0x4275c0*/
  *(this + 186) = 0; /*0x4275c6*/
  *(this + 187) = 0; /*0x4275cc*/
  *(this + 188) = 0; /*0x4275d2*/
  *(this + 189) = 0; /*0x4275d8*/
  *(this + 190) = -1; /*0x4275de*/
  *(this + 191) = -1; /*0x4275e4*/
  *(this + 192) = 0; /*0x4275ea*/
  *(this + 193) = 0; /*0x4275f0*/
  *(this + 194) = 0; /*0x4275f6*/
  *(this + 195) = 0; /*0x4275fc*/
  *(this + 196) = -1610612736; /*0x427602*/
  *(this + 197) = 1072273817; /*0x42760c*/
  *(this + 198) = 0; /*0x42761b*/
  *(this + 199) = 1074528256; /*0x427621*/
  *(this + 200) = 0; /*0x427627*/
  *(this + 201) = 1074528256; /*0x42762d*/
  *(this + 202) = 0; /*0x427633*/
  *(this + 203) = 1076756480; /*0x427639*/
  *(this + 204) = 0; /*0x427643*/
  *(this + 205) = 0; /*0x427649*/
  *(this + 206) = 0; /*0x42764f*/
  *(this + 207) = 0; /*0x427655*/
  *(this + 208) = 0; /*0x42765b*/
  *(this + 209) = 0; /*0x427661*/
  *(this + 210) = 0; /*0x427667*/
  *(this + 211) = -1; /*0x42766d*/
  *(this + 212) = 0; /*0x427673*/
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
  *(this + 217) = 3; /*0x4276d4*/
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
  *(this + 1) = &AnimTypeClass::`vftable'; /*0x427737*/
  *(this + 2) = &AnimTypeClass::`vftable'; /*0x42773d*/
  *(this + 3) = &AnimTypeClass::`vftable'; /*0x427744*/
  AbstractClass::GenerateUniqueID((int)(this + 1)); /*0x42774b*/
  *((_BYTE *)this + 564) = 1; /*0x427750*/
  *((_BYTE *)this + 559) = 1; /*0x427757*/
  *((_BYTE *)this + 560) = 0; /*0x42775e*/
  *((_BYTE *)this + 561) = 0; /*0x427764*/
  *((_BYTE *)this + 562) = 1; /*0x42776a*/
  *((_BYTE *)this + 563) = 1; /*0x427771*/
  *((_BYTE *)this + 565) = 0; /*0x427778*/
  if ( *(int *)&MEMORY[0x89F690].__pad_579C[62260] < *(int *)&MEMORY[0x89F690].__pad_579C[62252] /*0x4277b0*/
    || (MEMORY[0x89F690].__pad_579C[62257] || !*(_DWORD *)&MEMORY[0x89F690].__pad_579C[62252])
    && *(int *)&MEMORY[0x89F690].__pad_579C[62264] > 0
    && (*(unsigned __int8 (__thiscall **)(char *, int, _DWORD))(*(_DWORD *)&MEMORY[0x89F690].__pad_579C[62244] + 8))(
         &MEMORY[0x89F690].__pad_579C[62244],
         *(_DWORD *)&MEMORY[0x89F690].__pad_579C[62252] + *(_DWORD *)&MEMORY[0x89F690].__pad_579C[62264],
         0) )
  {
    v3 = (AnimTypeClass *)(*(_DWORD *)&MEMORY[0x89F690].__pad_579C[62260])++; /*0x4277bd*/
    *(_DWORD *)(*(_DWORD *)&MEMORY[0x89F690].__pad_579C[62248] + 4 * (_DWORD)v3) = this; /*0x4277cc*/
  }
  if ( *(int *)&MEMORY[0xB077F8].__pad_579C[9964] < *(int *)&MEMORY[0xB077F8].__pad_579C[9956] /*0x427803*/
    || (MEMORY[0xB077F8].__pad_579C[9961] || !*(_DWORD *)&MEMORY[0xB077F8].__pad_579C[9956])
    && *(int *)&MEMORY[0xB077F8].__pad_579C[9968] > 0
    && (*(unsigned __int8 (__thiscall **)(char *, int, _DWORD))(*(_DWORD *)&MEMORY[0xB077F8].__pad_579C[9948] + 8))(
         &MEMORY[0xB077F8].__pad_579C[9948],
         *(_DWORD *)&MEMORY[0xB077F8].__pad_579C[9956] + *(_DWORD *)&MEMORY[0xB077F8].__pad_579C[9968],
         0) )
  {
    v4 = (*(_DWORD *)&MEMORY[0xB077F8].__pad_579C[9964])++; /*0x427810*/
    *(_DWORD *)(*(_DWORD *)&MEMORY[0xB077F8].__pad_579C[9952] + 4 * v4) = this; /*0x42781f*/
  }
  v5 = 0; /*0x427828*/
  if ( *(int *)&MEMORY[0x89F690].__pad_579C[62260] <= 0 ) /*0x42782c*/
  {
LABEL_17:
    v5 = -1; /*0x427840*/
  }
  else
  {
    v6 = *(ObjectClass **)&MEMORY[0x89F690].__pad_579C[62248]; /*0x42782e*/
    while ( *(_DWORD **)v6->__pad_0 != this ) /*0x427836*/
    {
      ++v5; /*0x427838*/
      v6 = (ObjectClass *)((char *)v6 + 4); /*0x427839*/
      if ( v5 >= *(int *)&MEMORY[0x89F690].__pad_579C[62260] ) /*0x42783e*/
        goto LABEL_17; /*0x42783e*/
    }
  }
  *(this + 165) = v5; /*0x427842*/
  return this; /*0x42784a*/
}
}
} // namespace gamemd

// 0x427A80
namespace gamemd {
char AnimTypeClass::GetLoopCount(int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __thiscall AnimTypeClass::_vt24(void *this, int a2)
{
  int v2; // eax
  char Buffer[512]; // [esp+8h] [ebp-200h] BYREF

  LOBYTE(v2) = MEMORY[0xA8ED6B]; /*0x427a80*/
  if ( MEMORY[0xA8ED6B] || a2 != dword_822CF8 ) /*0x427aa0*/
  {
    if ( !*((_BYTE *)this + 556) || this->DemandLoad ) /*0x427ab0*/
    {
      LOBYTE(v2) = *((_BYTE *)this + 567); /*0x427b2b*/
      if ( (_BYTE)v2 ) /*0x427b33*/
        LOBYTE(v2) = (*(int (__thiscall **)(void *, int))(*(_DWORD *)this + 160))(this, a2); /*0x427b3a*/
    }
    else
    {
      if ( *((_DWORD *)this + 41) && *((_BYTE *)this + 168) ) /*0x427ac4*/
      {
        __3_YAXPAX_Z(*((void **)this + 41)); /*0x427acf*/
        *((_BYTE *)this + 168) = 0; /*0x427ad7*/
      }
      *((_DWORD *)this + 41) = 0; /*0x427af6*/
      _makepath(Buffer, 0, 0, (const char *)this + 36, (const char *)&off_7E1BC6 + 112 * a2); /*0x427b07*/
      v2 = SearchMIXFile(Buffer, 1); /*0x427b15*/
      *((_DWORD *)this + 41) = v2; /*0x427b1a*/
    }
  }
  return v2; /*0x427b20*/
}
}
} // namespace gamemd

// 0x427B50
namespace gamemd {
char AnimTypeClass::GetWarhead(int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __thiscall AnimTypeClass::_vt40(int this, int a2)
{
  int v3; // eax
  char v4; // cl
  const char *v5; // eax
  int v6; // ecx
  int v7; // eax
  int v8; // eax
  char v9; // dl
  char Buffer[512]; // [esp+4h] [ebp-200h] BYREF

  LOBYTE(v3) = this->DemandLoad; /*0x427b59*/
  if ( !(_BYTE)v3 ) /*0x427b61*/
  {
    if ( *(_BYTE *)(this + 556) ) /*0x427b67*/
    {
      LOBYTE(v3) = ObjectTypeClass::Load2DArt((char *)this); /*0x427b71*/
    }
    else
    {
      if ( *(_DWORD *)(this + 164) && *(_BYTE *)(this + 168) ) /*0x427b85*/
      {
        __3_YAXPAX_Z(*(void **)(this + 164)); /*0x427b90*/
        *(_BYTE *)(this + 168) = 0; /*0x427b98*/
      }
      v4 = *(_BYTE *)(this + 504); /*0x427b9f*/
      v5 = (const char *)(this + 504); /*0x427ba5*/
      *(_DWORD *)(this + 164) = 0; /*0x427bad*/
      if ( !v4 ) /*0x427bb7*/
        v5 = (const char *)(this + 36); /*0x427bb9*/
      _makepath(Buffer, 0, 0, v5, Ext); /*0x427bcb*/
      TheaterObjectTypeClassSpecificID(Buffer, a2); /*0x427bde*/
      v3 = SearchMIXFile(Buffer, 1); /*0x427be9*/
      *(_DWORD *)(this + 164) = v3; /*0x427bf0*/
      if ( !v3 ) /*0x427bf6*/
      {
        ObjectTypeClass::SetRTTI71(Buffer); /*0x427bfc*/
        v3 = SearchMIXFile(Buffer, 1); /*0x427c07*/
        *(_DWORD *)(this + 164) = v3; /*0x427c0c*/
      }
    }
  }
  v6 = *(_DWORD *)(this + 164); /*0x427c12*/
  if ( v6 ) /*0x427c1a*/
  {
    v7 = this->End; /*0x427c1c*/
    this->AnimTypeClass_field_2A4 = 1; /*0x427c22*/
    if ( !v7 ) /*0x427c2b*/
    {
      v8 = *(__int16 *)(v6 + 6); /*0x427c2d*/
      v9 = this->Shadow; /*0x427c31*/
      this->End = v8; /*0x427c37*/
      if ( v9 ) /*0x427c3f*/
        this->End = v8 / 2; /*0x427c46*/
    }
    if ( !this->LoopEnd ) /*0x427c4c*/
      this->LoopEnd = this->End; /*0x427c5c*/
    this->MiddleFrameWidth = *(__int16 *)(v6 + 6) / 2; /*0x427c6b*/
    this->MiddleFrameHeight = -1; /*0x427c74*/
    *(_DWORD *)(this + 672) = -1; /*0x427c7a*/
    LOBYTE(v3) = -1; /*0x427c71*/
  }
  return v3; /*0x427c80*/
}
}
} // namespace gamemd

// 0x427CB0
namespace gamemd {
int AnimTypeClass::FindIndex()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall AnimTypeClass::FindIndex(void *this)
{
  int v2; // esi

  if ( !this ) /*0x427cb6*/
    return -1; /*0x427cb6*/
  v2 = 0; /*0x427cbd*/
  if ( *(int *)&stru_89E138.__pad_1600D[27] <= 0 ) /*0x427cc1*/
    return -1; /*0x427ce6*/
  while ( _strcmpi((const void *)(*(_DWORD *)(*(_DWORD *)&stru_89E138.__pad_1600D[15] + 4 * v2) + 36), this) ) /*0x427cda*/
  {
    if ( ++v2 >= *(int *)&stru_89E138.__pad_1600D[27] ) /*0x427ce4*/
      return -1; /*0x427ce4*/
  }
  return v2; /*0x427ce6*/
}
}
} // namespace gamemd

// 0x427D00
namespace gamemd {
char AnimTypeClass::LoadFromINI(unsigned signed char *** a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
// (v3 export truncated pseudocode — commented out; live version via get_context)
// char __thiscall AnimTypeClass::LoadFromINI(int this, unsigned __int8 ***a2)
// {
//   char Bool_Overwrite; // al
//   int v5; // eax
//   int Int_Overwrite; // eax
//   int v7; // eax
//   AnimTypeClass *v8; // ebp
//   AnimTypeClass *v9; // eax
//   int v10; // edx
//   int *v11; // eax
//   RandomStruct *v12; // ecx
//   int v13; // eax
//   double Double_Overwrite; // st7
//   INIClass *v15; // eax
//   double v16; // st7
//   INIClass *edx20a; // edx
//   double v18; // st7
//   CCINIClass *v17; // eax
//   int v20; // eax
//   AnimTypeClass *v21; // ebp
//   AnimTypeClass *v22; // eax
//   char v23; // al
//   char v24; // cl
//   char v25; // al
//   int v26; // eax
//   OverlayTypeClass *v27; // ebp
//   OverlayTypeClass *v28; // eax
//   char v29; // cl
//   char v30; // al
//   char v31; // al
//   INIClass *v32; // ecx
//   int v33; // eax
//   int v34; // eax
//   int v35; // ebp
//   int Index; // eax
//   int v37; // eax
//   int v38; // ebp
//   int v39; // eax
//   AnimTypeClass *v40; // ebp
//   int ebp40; // ebp
//   _DWORD *v42; // eax
//   AnimTypeClass *v41; // eax
//   AnimTypeClass *v44;... [25702 chars total]
// end truncated pseudocode
}
} // namespace gamemd

// 0x428800
namespace gamemd {
int AnimTypeClass::SaveLoad_Prefix(int a1, int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __stdcall AnimTypeClass::SaveLoad_Prefix(int a1, int a2)
{
  int result; // eax
  char v3; // [esp+7h] [ebp-201h] BYREF
  char Buffer[512]; // [esp+8h] [ebp-200h] BYREF

  result = ObjectTypeClass::LoadCleanup(a1, a2); /*0x428814*/
  if ( result >= 0 ) /*0x42881b*/
  {
    if ( a1 ) /*0x428823*/
    {
      ObjectTypeClass::Construct((_DWORD *)a1, (int)&v3); /*0x42882c*/
      *(_DWORD *)a1 = &AnimTypeClass::`vftable'; /*0x428831*/
      *(_DWORD *)(a1 + 4) = &AnimTypeClass::`vftable'; /*0x428837*/
      *(_DWORD *)(a1 + 8) = &AnimTypeClass::`vftable'; /*0x42883e*/
      *(_DWORD *)(a1 + 12) = &AnimTypeClass::`vftable'; /*0x428845*/
    }
    VoxelAnimType::LoadAnim((char *)a1); /*0x42884e*/
    ObjectTypeClass::Load2DArt((char *)a1); /*0x428855*/
    ObjectPtr::RegisterForTracking((int)&MEMORY[0xB0C110], (int *)(a1 + 712)); /*0x428866*/
    ObjectPtr::RegisterForTracking((int)&MEMORY[0xB0C110], (int *)(a1 + 772)); /*0x428877*/
    ObjectPtr::RegisterForTracking((int)&MEMORY[0xB0C110], (int *)(a1 + 776)); /*0x428888*/
    ObjectPtr::RegisterForTracking((int)&MEMORY[0xB0C110], (int *)(a1 + 768)); /*0x428899*/
    ObjectPtr::RegisterForTracking((int)&MEMORY[0xB0C110], (int *)(a1 + 752)); /*0x4288aa*/
    ObjectPtr::RegisterForTracking((int)&MEMORY[0xB0C110], (int *)(a1 + 816)); /*0x4288bb*/
    ObjectPtr::RegisterForTracking((int)&MEMORY[0xB0C110], (int *)(a1 + 824)); /*0x4288cc*/
    if ( !*(_BYTE *)(a1 + 862) ) /*0x4288d1*/
    {
      if ( *(_BYTE *)(a1 + 556) ) /*0x4288db*/
      {
        _makepath( /*0x428910*/
          Buffer,
          0,
          0,
          (const char *)(a1 + 36),
          (const char *)&off_7E1BC6 + 112 * *((_DWORD *)MEMORY[0xA8B230] + 1174));
        *(_DWORD *)(a1 + 164) = SearchMIXFile(Buffer, 1); /*0x428923*/
        return 0; /*0x428932*/
      }
      if ( *(_BYTE *)(a1 + 567) ) /*0x428935*/
        (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)a1 + 160))(a1, *((_DWORD *)MEMORY[0xA8B230] + 1174)); /*0x42894f*/
    }
    return 0; /*0x428955*/
  }
  return result; /*0x42892b*/
}
}
} // namespace gamemd

// 0x428970
namespace gamemd {
int AnimTypeClass::SaveLoad_Prefix_0(TechnoTypeClass * aP0, ObjectTypeClass * aP1, int aP2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __stdcall AnimTypeClass::SaveLoad_Prefix_0(TechnoTypeClass *aP0, ObjectTypeClass *aP1, int aP2)
{
  int result; // eax

  result = AbstractClass::SaveLoad_PrefixWrapper(aP0, aP1, (TechnoTypeClass *)aP2); /*0x42897f*/
  if ( result >= 0 ) /*0x428986*/
    return 0; /*0x428988*/
  return result; /*0x42898a*/
}
}
} // namespace gamemd

// 0x428990
namespace gamemd {
int AnimTypeClass::GetClassIdentifier(int a1, unsigned int * a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __stdcall AnimTypeClass::_vt03(int a1, _DWORD *a2)
{
  if ( !a2 ) /*0x428996*/
    return -2147467261; /*0x428998*/
  *a2 = -1366608934; /*0x4289a6*/
  a2[1] = 298976796; /*0x4289ae*/
  a2[2] = 1610654892; /*0x4289b7*/
  a2[3] = -1252326136; /*0x4289c0*/
  return 0; /*0x42899d*/
}
}
} // namespace gamemd

// 0x4289D0
namespace gamemd {
int AnimTypeClass::PowerDrainUpdate(int * a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall AnimTypeClass::_vt13(int this, int *a2)
{
  int v3; // ecx
  int v4; // edx
  int v5; // eax
  int v6; // ecx
  int v7; // edx
  int v8; // eax
  int v9; // ecx
  int v10; // edx
  int v11; // eax
  int v12; // ecx
  int v13; // edx
  int v14; // ecx

  AbstractTypeClass::ProcessPower((char *)this, a2); /*0x4289d9*/
  Power::TimerProcess(this->Layer); /*0x4289e7*/
  LOBYTE(v3) = this->Normalized; /*0x4289ec*/
  Power::FlagProcess(a2, v3); /*0x4289f5*/
  LOBYTE(v4) = this->Flat; /*0x4289fa*/
  v5 = Power::FlagProcess(a2, v4); /*0x428a03*/
  LOBYTE(v5) = this->Translucent; /*0x428a08*/
  Power::FlagProcess(a2, v5); /*0x428a11*/
  LOBYTE(v6) = this->Scorch; /*0x428a16*/
  Power::FlagProcess(a2, v6); /*0x428a1f*/
  LOBYTE(v7) = this->Flamer; /*0x428a24*/
  v8 = Power::FlagProcess(a2, v7); /*0x428a2d*/
  LOBYTE(v8) = this->Crater; /*0x428a32*/
  Power::FlagProcess(a2, v8); /*0x428a3b*/
  LOBYTE(v9) = this->Sticky; /*0x428a40*/
  Power::FlagProcess(a2, v9); /*0x428a49*/
  LOBYTE(v10) = this->PingPong; /*0x428a4e*/
  v11 = Power::FlagProcess(a2, v10); /*0x428a57*/
  LOBYTE(v11) = this->Reverse; /*0x428a5c*/
  Power::FlagProcess(a2, v11); /*0x428a65*/
  LOBYTE(v12) = this->Shadow; /*0x428a6a*/
  Power::FlagProcess(a2, v12); /*0x428a73*/
  Power::TimerProcess(this->MiddleFrameWidth); /*0x428a81*/
  Checksummer::Add_double((unsigned int *)a2, *(_DWORD *)(this + 680), *(_DWORD *)(this + 684)); /*0x428a96*/
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
  Power::TimerProcess(*(_DWORD *)(this + 732)); /*0x428b3e*/
  Power::TimerProcess(*(_DWORD *)(this + 736)); /*0x428b4c*/
  Power::TimerProcess(this->Translucency); /*0x428b5a*/
  LOBYTE(v14) = this->Tiled; /*0x428b5f*/
  return Power::FlagProcess(a2, v14); /*0x428b6d*/
}
}
} // namespace gamemd

// 0x428B80
namespace gamemd {
AnimTypeClass * AnimTypeClass::FindOrCreate(AbstractClass * Source)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
AnimTypeClass *__thiscall AnimTypeClass::FindOrCreate(AbstractClass *Source)
{
  int v2; // esi
  _DWORD *v3; // eax

  if ( !_strcmpi(&stru_817460.sectionHead[1], Source) || !_strcmpi(g_Str_none, Source) ) /*0x428b9c*/
    return 0; /*0x428bff*/
  v2 = 0; /*0x428bad*/
  if ( *(int *)&stru_89E138.__pad_1600D[27] <= 0 ) /*0x428bb1*/
  {
LABEL_6:
    v3 = (_DWORD *)__2_YAPAXI_Z(0x378u); /*0x428bd6*/
    if ( v3 ) /*0x428be5*/
      return (AnimTypeClass *)AnimTypeClass::Construct(v3, Source); /*0x428bf1*/
    return 0; /*0x428be5*/
  }
  while ( _strcmpi((const void *)(*(_DWORD *)(*(_DWORD *)&stru_89E138.__pad_1600D[15] + 4 * v2) + 36), Source) ) /*0x428bca*/
  {
    if ( ++v2 >= *(int *)&stru_89E138.__pad_1600D[27] ) /*0x428bd4*/
      goto LABEL_6; /*0x428bd4*/
  }
  return *(AnimTypeClass **)(*(_DWORD *)&stru_89E138.__pad_1600D[15] + 4 * v2); /*0x428bef*/
}
}
} // namespace gamemd

// 0x428C10
namespace gamemd {
int AnimTypeClass::GetAnimData(int a2, int a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall AnimTypeClass::_vt10(_DWORD *this, int a2, int a3)
{
  int result; // eax

  result = *(this + 178); /*0x428c10*/
  if ( result == a2 ) /*0x428c1c*/
    *(this + 178) = 0; /*0x428c1e*/
  return result; /*0x428c28*/
}
}
} // namespace gamemd

// 0x428C30
namespace gamemd {
int AnimTypeClass::GetDamage()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall AnimTypeClass::_vt39(char *this)
{
  int result; // eax
  const char *v3; // eax
  void *EntireFile; // eax
  void *v5; // eax
  int v6; // esi
  _DWORD v7[22]; // [esp+4h] [ebp-2D8h] BYREF
  char v8[12]; // [esp+5Ch] [ebp-280h] BYREF
  int v9; // [esp+68h] [ebp-274h]
  _DWORD v10[22]; // [esp+70h] [ebp-26Ch] BYREF
  char v11[12]; // [esp+C8h] [ebp-214h] BYREF
  int v12; // [esp+D4h] [ebp-208h]
  char Buffer[512]; // [esp+DCh] [ebp-200h] BYREF

  result = *((_DWORD *)this + 41); /*0x428c39*/
  if ( !result && *(this + 862) ) /*0x428c47*/
  {
    Debug::Log(); /*0x428c5e*/
    v3 = this + 504; /*0x428c69*/
    if ( !*(this + 504) ) /*0x428c63*/
      v3 = this + 36; /*0x428c76*/
    _makepath(Buffer, 0, 0, v3, Ext); /*0x428c8b*/
    if ( *(this + 556) ) /*0x428c90*/
    {
      _makepath(Buffer, 0, 0, this + 36, (const char *)&off_7E1BC6 + 112 * *((_DWORD *)MEMORY[0xA8B230] + 1174)); /*0x428ccc*/
    }
    else if ( *(this + 567) ) /*0x428cd6*/
    {
      TheaterObjectTypeClassSpecificID(Buffer, *((_DWORD *)MEMORY[0xA8B230] + 1174)); /*0x428cf3*/
    }
    CCFileClass::Construct(v7, Buffer); /*0x428d04*/
    EntireFile = CCFileClass::ReadEntireFile(v7); /*0x428d0d*/
    *((_DWORD *)this + 41) = EntireFile; /*0x428d14*/
    if ( EntireFile ) /*0x428d1a*/
    {
      *(this + 168) = 1; /*0x428d1c*/
    }
    else
    {
      ObjectTypeClass::SetRTTI71(Buffer); /*0x428d2c*/
      CCFileClass::Construct(v10, Buffer); /*0x428d3d*/
      v5 = CCFileClass::ReadEntireFile(v10); /*0x428d46*/
      *((_DWORD *)this + 41) = v5; /*0x428d4d*/
      if ( v5 ) /*0x428d53*/
        *(this + 168) = 1; /*0x428d55*/
      v10[0] = &CCFileClass::`vftable'; /*0x428d63*/
      v12 = 0; /*0x428d6b*/
      Vector::Clear((int)v11); /*0x428d76*/
      v10[0] = &off_7E1668; /*0x428d7f*/
      BufferIOFileClass::Dtor(v10); /*0x428d87*/
    }
    (*(void (__thiscall **)(char *, _DWORD))(*(_DWORD *)this + 160))(this, *((_DWORD *)MEMORY[0xA8B230] + 1174)); /*0x428d9c*/
    v6 = *((_DWORD *)this + 41); /*0x428da2*/
    v7[0] = &CCFileClass::`vftable'; /*0x428dac*/
    v9 = 0; /*0x428db4*/
    Vector::Clear((int)v8); /*0x428dbc*/
    v7[0] = &off_7E1668; /*0x428dc5*/
    BufferIOFileClass::Dtor(v7); /*0x428dcd*/
    return v6; /*0x428dd2*/
  }
  return result; /*0x428dd4*/
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
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall AnimTypeClass::_vt16(_DWORD *this)
{
  return *(this + 165); /*0x428e66*/
}
}
} // namespace gamemd

// 0x428E70
namespace gamemd {
int AnimTypeClass::GetObjectSize()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int AnimTypeClass::_vt12()
{
  return 888; /*0x428e75*/
}
}
} // namespace gamemd

// 0x428E80
namespace gamemd {
char AnimTypeClass::Stub(int a1, int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __stdcall AnimTypeClass::_vt32(int a1, int a2)
{
  return 0; /*0x428e82*/
}
}
} // namespace gamemd

// 0x428E90
namespace gamemd {
int AnimTypeClass::StubReturnFalse(int a1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __stdcall AnimTypeClass::_vt35(int a1)
{
  return 0; /*0x428e92*/
}
}
} // namespace gamemd

// 0x428EA0
namespace gamemd {
AnimTypeClass * AnimTypeClass::ddtor(unsigned int * Block, char a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
AnimTypeClass *__thiscall AnimTypeClass::ddtor(_DWORD *Block, char a2)
{
  int v3; // eax
  int v4; // eax
  _DWORD *v6; // [esp+4h] [ebp-4h] BYREF

  *Block = &AnimTypeClass::`vftable'; /*0x428ead*/
  *(Block + 1) = &AnimTypeClass::`vftable'; /*0x428eb3*/
  *(Block + 2) = &AnimTypeClass::`vftable'; /*0x428eba*/
  *(Block + 3) = &AnimTypeClass::`vftable'; /*0x428ec1*/
  v6 = Block; /*0x428ecf*/
  v3 = (*(int (__thiscall **)(int *, _DWORD **))(MEMORY[0xB0F670] + 16))(&MEMORY[0xB0F670], &v6); /*0x428ed3*/
  if ( v3 != -1 && v3 < MEMORY[0xB0F680] && v3 < --MEMORY[0xB0F680] ) /*0x428eee*/
  {
    do /*0x428f06*/
    {
      ++v3; /*0x428ef6*/
      *((_DWORD *)MEMORY[0xB0F674] + v3 - 1) = *((_DWORD *)MEMORY[0xB0F674] + v3); /*0x428efa*/
    }
    while ( v3 < MEMORY[0xB0F680] ); /*0x428f06*/
  }
  v6 = Block; /*0x428f18*/
  v4 = (*(int (__thiscall **)(int *, _DWORD **))(MEMORY[0x8B4150] + 16))(&MEMORY[0x8B4150], &v6); /*0x428f1c*/
  if ( v4 != -1 && v4 < MEMORY[0x8B4160] && v4 < --MEMORY[0x8B4160] ) /*0x428f37*/
  {
    do /*0x428f4f*/
    {
      ++v4; /*0x428f3f*/
      *((_DWORD *)MEMORY[0x8B4154] + v4 - 1) = *((_DWORD *)MEMORY[0x8B4154] + v4); /*0x428f43*/
    }
    while ( v4 < MEMORY[0x8B4160] ); /*0x428f4f*/
  }
  ObjectTypeClass::Destruct((int)Block); /*0x428f53*/
  if ( (a2 & 1) != 0 ) /*0x428f5d*/
    __3_YAXPAX_Z(Block); /*0x428f60*/
  return (AnimTypeClass *)Block; /*0x428f6a*/
}
}
} // namespace gamemd

// 0x477050
namespace gamemd {
int AnimTypeClass::ReadINIString(INIClass * aP1, unsigned signed char * a2, Layer a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall AnimTypeClass::ReadINIString(unsigned __int8 ***this, INIClass *aP1, unsigned __int8 *a2, Layer a3)
{
  INIClass *v5; // eax
  INIClass Destination[2]; // [esp+8h] [ebp-80h] BYREF

  v5 = (INIClass *)globalHelper_08E090(a3); /*0x47706d*/
  if ( INIClass::GetString(this, aP1, a2, v5, Destination, 128) ) /*0x477085*/
    return AnimTypeClass::LookupByName(Destination); /*0x477092*/
  else
    return a3; /*0x4770a2*/
}
}
} // namespace gamemd

// 0x48E050
namespace gamemd {
int AnimTypeClass::LookupByName()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall AnimTypeClass::LookupByName(void *this)
{
  int v2; // edi
  const void **v3; // esi

  if ( !this ) /*0x48e057*/
    return -1; /*0x48e07c*/
  v2 = 0; /*0x48e059*/
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
}
} // namespace gamemd
