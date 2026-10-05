// G42.32 P: tree-universe marker -- e4 tree-owned decls suppressed
#define GAMEMD_TREE_UNIVERSE 1
// G42.32 S: guard-order tree-bridge -- ra2::game full defs precede e4 leaf headers
#include "object/abstract.hpp"
#ifdef GAMEMD_TREE_UNIVERSE
namespace gamemd {
using ra2::game::AbstractClass;
}
#endif
#include "misc_ext.hpp"
#include "e4/classes/DynamicVector_e4.hpp"
#include "e4/classes/Power_e4.hpp"
#include "e4/classes/Checksummer_e4.hpp"
#include "e4/e4_globals_decls.hpp"
#include "e4/classes/AnimFile_e4.hpp"
#include "e4/classes/AbstractTypeClass_e4.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/Init_e4.hpp"

namespace gamemd
{

// G42: targeted extern (decl source: e4/e4_protos.h:438 -- kept loose-int form
// to match the e4_globals_decls.hpp `extern int g_Str_*` string globals; whole
// proto header not pulled to avoid dialect clashes).
extern void * GetStringCSF(int a1, int a2, int a3, int a4);
extern void * GetStringCSF(void *a1, int a2, int a3, int a4);  // G42: ptr-key call sites
extern void * GetStringCSF(wchar_t *a1, int a2, int a3, int a4);  // G42: wide-key call sites
extern int TimerGetTicks();  // G42: decl source core/init_stubs.hpp:54 (0x6C8C40)

// 0x41e500
int AITriggerTypeClass::GetClassIdentifier(unsigned int * a2)
{
  if ( !a2 ) /*0x41e506*/
    return -2147467261; /*0x41e508*/
  *(unsigned int *)(a2) = -1173801692; /*0x41e516*/
  a2[1] = 298994932; /*0x41e51e*/
  a2[2] = 268445372; /*0x41e527*/
  a2[3] = unk_7E996C; /*0x41e530*/
  return 0; /*0x41e50d*/
}
// 0x41e540
// G42 T9: body quarantined -- prior-epoch raw dump (static-style ObjectPtr
// calls, leaked type tokens in arg lists, AITriggerTypeClass_vftable symbol
// absent from tree universe). Truth = .omo/ida_cache/func_0x0041E540.json
// (int __stdcall LoadTypeData(this,int a2)).
int AITriggerTypeClass::LoadTypeData(int a2)
{
    return {}; // TODO stub - G42 return-sync (int->virtual int)
}
// 0x41e5c0
// G42 T9: body quarantined -- raw dump had 2 phantom params + static-style
// SaveLoad_Prefix call. Truth = .omo/ida_cache/func_0x0041E5C0.json
// (int __stdcall SaveToINI(this,int* a2,int a3)).
int AITriggerTypeClass::SaveToINI(int *a2, int a3)
{
    return {}; // TODO stub - G42 return-sync (int->virtual int)
}
// 0x41e5e0
int AITriggerTypeClass::ProcessPower(int * a2)
{
    return 0; // TODO stub - quarantined G42 T9 (helper; truth = .omo/ida_cache/func_0x00041E5E0.json)
}
// 0x41eaf0
bool AITriggerTypeClass::EnemyHouseOwns(int a2, unsigned int * a3)
{
  int v4; // esi
  int v5; // ebp
  int v6; // edi
  int v7; // eax
  bool result; // al
  char v9; // [esp+7h] [ebp-1h]

  v9 = 0; /*0x41eafa*/
  if ( !a3 ) /*0x41eaff*/
    return v9; /*0x41ec2b*/
  v4 = *(&this->q0144); /*0x41eb06*/
  if ( v4 ) /*0x41eb0e*/
  {
    v5 = (*(int (**)(int))(*(unsigned int *)v4 + 64))(v4); /*0x41eb21*/
    v6 = 0; /*0x41eb23*/
    switch ( (*(int (**)(int))(*(unsigned int *)v4 + 44))(v4) ) /*0x41eb38*/
    {
      case 3: /*0x41eb38*/
        v6 = ((DynamicVector*)(unsigned int)(a3)+ 5475)->GetOrGrow(v5); /*0x41eb91*/
        goto LABEL_8; /*0x41eb91*/
      case 7: /*0x41eb38*/
        v7 = ((DynamicVector *)((unsigned int)(a3) + 5460))->GetOrGrow(v5); /*0x41eb4a*/
        break; /*0x41eb53*/
      case 16: /*0x41eb38*/
        v7 = ((DynamicVector *)((unsigned int)(a3) + 5470))->GetOrGrow(v5); /*0x41eb76*/
        break; /*0x41eb7f*/
      case 40: /*0x41eb38*/
        v7 = ((DynamicVector *)((unsigned int)(a3) + 5465))->GetOrGrow(v5); /*0x41eb60*/
        break; /*0x41eb69*/
      default:
  LABEL_8:
        v7 = v6; /*0x41eb93*/
        break; /*0x41eb97*/
    }
  }
  else
  {
    v7 = 0; /*0x41eb99*/
  }
  switch ( *(&this->q0148) ) /*0x41ebab*/
  {
    case 0: /*0x41ebab*/
      result = v7 < *(&this->q0147); /*0x41ebc0*/
      break; /*0x41ebc5*/
    case 1: /*0x41ebab*/
      result = v7 <= *(&this->q0147); /*0x41ebd6*/
      break; /*0x41ebdb*/
    case 2: /*0x41ebab*/
      result = v7 == *(&this->q0147); /*0x41ebec*/
      break; /*0x41ebf1*/
    case 3: /*0x41ebab*/
      result = v7 >= *(&this->q0147); /*0x41ec02*/
      break; /*0x41ec07*/
    case 4: /*0x41ebab*/
      result = v7 > *(&this->q0147); /*0x41ec18*/
      break; /*0x41ec1d*/
    case 5: /*0x41ebab*/
      return v7 != *(&this->q0147); /*0x41ec26*/
    default:
      return v9;
  }
  return result; /*0x41ebb8*/
}
// 0x426750
// G42 T9: body quarantined -- prior-epoch raw dump had undeclared register
// locals (v3/v4), absent helper sub_4267F0. Truth =
// .omo/ida_cache/func_0x426750.json (char __userpurge AddRef@<al>(this,int@<ebx>,int)).
char AnimFile::AddRef(void * a1, void * a2)
{
    return {}; // TODO stub - G42 return-sync (char->virtual char)
}
// 0x426790
// G42 T9: body quarantined -- raw dump used e4-flat member vocabulary
// (u32_89/q00C3/u32_84/u32_E0C/u32_E10/u32_88) absent from the tree class.
// Truth = .omo/ida_cache/func_0x426790.json.
void AnimFile::Release()
{
}
// 0x426a50
// G42 T9: body quarantined -- u32_CC/u32_A6 e4-flat members absent from tree class.
// Truth = .omo/ida_cache/func_0x426a50.json.
int AnimFile::Load()
{
    return {}; // TODO stub - G42 return-sync (int->virtual int)
}
// 0x426a90
// G42 T9: body quarantined -- ~185-line raw dump in e4-flat vocabulary
// (qE14/__pad_0A6/u32_A7/u32_94/q0CC/q084/u32_E18/q0342/qE10/q008/q018) plus
// vtable-slot-as-member garbage; pending full re-translation from
// .omo/ida_cache/func_0x426a90.json (int __thiscall ddtor(this,int)).
int AnimFile::ddtor(int a2)
{
    return {}; // TODO stub - G42 return-sync (int->virtual int)
}
// 0x426dd0
int AnimFile::Check( int a2)  // G42 sig-sync: IDA int __thiscall Check(this,int)
{
  return *((uint16_t *)this + 3 * a2 + 1032) + 2 * *((uint16_t *)this + 3 * a2 + 1031) + 8; /*0x426df3*/
}
// 0x523d00
// G42 T9: body quarantined -- raw dump in wrong universe (INIClass accessed as
// &DSurface_ViewBounds.__pad_FC[228], IDA string labels aSequence/aN/aNe/aE/
// aSe/aS_5/aSw/aNw/asc_8258AC undeclared, u32_E3C e4-flat member absent).
// Truth = .omo/ida_cache/func_0x523d00.json.
void AnimSequence::Parse()
{
}
// 0x67a470
// G42 T9: body quarantined -- raw dump cast void* to class type + returned
// `this` from void fn; TypeList members (IsAllocated/CapacityIncrement/Count)
// absent from tree class. Truth = .omo/ida_cache/func_0x67a470.json
// (_DWORD* __thiscall Constructor(this)).
int AnimTypeList::Constructor()
{
    return {}; // TODO stub - G42 return-sync (int->virtual int)
}
// 0x525680
// G42 T9: body quarantined -- raw dump used param names a2/a3 that do not
// match its own aP1/aP2, Items/Capacity members absent, void*-to-class cast.
// Truth = .omo/ida_cache/func_0x525680.json
// (_DWORD* __thiscall Constructor(this,int a2,int a3)).
int AnimTypeVector::Constructor(int a2, int a3)
{
    return {}; // TODO stub - G42 return-sync (int->virtual int)
}
// 0x595710
// G42 T9: body quarantined -- q03C member absent from tree CSFClass.
// Truth = .omo/ida_cache/func_0x595710.json (wchar_t* __thiscall CopyString).
void CSFClass::CopyString()
{
}
// 0x6977c0
// G42 T9: body quarantined -- raw dump treats this as char* (this + 10540),
// off_83ED04/byte_83ED14 walk, vtable3-as-member. Truth =
// .omo/ida_cache/func_0x6977c0.json (int __thiscall sub_6977C0(char*)).
void CSFClass::LoadMissingStrings()
{
}
// 0x7346a0
// G42 T9: body quarantined -- raw dump treats this as const char*
// (strcpy targets), returns value from void fn. Truth =
// .omo/ida_cache/func_0x7346a0.json (int __thiscall CSFClass_LoadFile).
void CSFClass::LoadFile()
{
}
// 0x472140
// G42 T9: body quarantined -- raw dump used e4-flat members u32_34/u32_28,
// undefined CaptureManagerClass static-style FreeUnit, returned value from
// void fn. Truth = .omo/ida_cache/func_0x00472140.json
// (int __thiscall CaptureManager_FreeAll(this): count@+0x34, array@+0x28).
void CaptureManager::FreeAll()
{
}
// 0x53bad0
int ChronoScreen::IsActive()  // G42 sig-sync: IDA int __thiscall IsActive(this)
{
  return ChronoScreenEffect_Status != 0; /*0x53badd*/
}
// 0x5c5120
// G42 T9: body quarantined -- m_1 e4-flat member absent from tree class.
// Truth = .omo/ida_cache/func_0x5c5120.json
// (int __thiscall Seek(this,int): item = *(this->items + 4*a2)).
int CoopCampaignVector::Seek(int a2)
{
    return {}; // TODO stub - G42 return-sync (int->virtual int)
}
// 0x5c55f0
// G42 T9: body quarantined -- m_1/m_8 e4-flat members absent from tree class.
// Truth = .omo/ida_cache/func_0x5c55f0.json (char __thiscall AddRef(this,int)).
char CoopCampaignVector::AddRef(int a2)
{
    return {}; // TODO stub - G42 return-sync (char->virtual char)
}
// 0x5c5630
// G42 T9: body quarantined -- m_1/m_C/m_8 e4-flat vocabulary; returned values
// from void fn. Truth = .omo/ida_cache/func_0x5c5630.json
// (char __thiscall Release(this,int,_DWORD*)).
char CoopCampaignVector::Release(int a2, unsigned int *a3)
{
    return {}; // TODO stub - G42 return-sync (char->virtual char)
}
// 0x5c56e0
// G42 T9: body quarantined -- m_1/m_C/m_8 e4-flat vocabulary.
// Truth = .omo/ida_cache/func_0x5c56e0.json (ddtor).
void CoopCampaignVector::ddtor()
{
}
// 0x5c5710
// G42 T9: body quarantined -- m_1/m_C/m_8 e4-flat vocabulary; returned values
// from void fn. Truth = .omo/ida_cache/func_0x5c5710.json
// (int __thiscall Read(this,_DWORD*): index-of or -1).
int CoopCampaignVector::Read(unsigned int *a2)
{
    return {}; // TODO stub - G42 return-sync (int->virtual int)
}
// 0x437f10
unsigned int* Coord2D::Add(unsigned int *a2, unsigned int *a3)  // G42 sig-sync: IDA _DWORD* Add(this,_DWORD*,_DWORD*); params renamed a2/a3 to match body
{
  int v3; // esi

  v3 = this->Coord2D_field_0x04 + a3[1]; /*0x437f21*/
  *a2 = *(unsigned int *)((unsigned char *)(this) + 0x0) + *a3; /*0x437f27*/
  a2[1] = v3; /*0x437f29*/
  return a2; /*0x437f2c*/
}
// 0x487f20
// 0x487f20
int* Coord2D::Sub(int *a2, unsigned int *a3)  // G42 sig-sync: IDA int* Sub(this,int*,_DWORD*); params renamed a2/a3 to match body
{
  int v3; // edx
  int v5; // ecx

  v3 = *(unsigned int *)((unsigned char *)(this) + 0x0); /*0x487f24*/
  v5 = this->Coord2D_field_0x04 - a3[1]; /*0x487f35*/
  *a2 = v3 - *a3; /*0x487f38*/
  a2[1] = v5; /*0x487f3a*/
  return a2; /*0x487f37*/
}
// 0x437090
unsigned int* Coord3D::Set(int a2, int a3, int a4)  // G42 sig-sync: IDA _DWORD*(this,int,int,int); params renamed to match body
{
  *(unsigned int *)((unsigned char *)(this) + 0x0) = a2; /*0x43709a*/
  this->Coord3D_field_0x04 = a3; /*0x4370a0*/
  this->Coord3D_field_0x08 = a4; /*0x4370a3*/
  return (unsigned int *)((unsigned char *)(this) + 0x0); /*0x4370a6*/
}
// 0x459f60
int Coord3D::Equals(unsigned int *a2)  // G42 sig-sync: IDA int(this,_DWORD*)
{
  return *(unsigned int *)((unsigned char *)(this) + 0x0) == *a2 && this->Coord3D_field_0x04 == a2[1] && this->Coord3D_field_0x08 == a2[2]; /*0x459f84*/
}
// 0x6ce240
unsigned int* Coord3D::Add(unsigned int *a2, unsigned int *a3)  // G42 sig-sync: IDA _DWORD*(this,_DWORD*,_DWORD*)
{
  int v3; // esi
  int v4; // edi

  v3 = this->Coord3D_field_0x04 + a3[1]; /*0x6ce252*/
  v4 = this->Coord3D_field_0x08 + a3[2]; /*0x6ce25a*/
  *a2 = *(unsigned int *)((unsigned char *)(this) + 0x0) + *a3; /*0x6ce262*/
  a2[1] = v3; /*0x6ce264*/
  a2[2] = v4; /*0x6ce267*/
  return a2; /*0x6ce26a*/
}
// 0x403870
// G42 T9: body quarantined -- raw dump had int-to-class cast (*this =
// (CoordBounds)a2), __tail_0/__int64 10LL product, u32_4/u32_8/u32_C/u32_20
// members absent. Truth = .omo/ida_cache/func_0x00403870.json
// (__int64 __thiscall Constructor(this,int a2,int a3)).
long long CoordBounds::Constructor(int a2, int a3)
{
    return {}; // TODO stub - G42 return-sync (long long->virtual long long)
}
// 0x4a94f0
int16_t* CoordList::GetBounds(int16_t *a1, int16_t *a2)  // G42 sig-sync: IDA _DWORD* __stdcall CoordList_GetBounds(_DWORD*,__int16*); params renamed to match body
{
  int16_t *v2; // edx
  int v3; // ebx
  int v4; // esi
  int v5; // ebp
  int v6; // edi
  int16_t v7; // ax
  int v8; // ecx
  int v9; // esi
  int v10; // edi
  int v12; // [esp+10h] [ebp-4h]

  v2 = a2; /*0x4a94f1*/
  v3 = 512; /*0x4a94fa*/
  v4 = -512; /*0x4a94ff*/
  v5 = 512; /*0x4a9507*/
  v6 = -512; /*0x4a9509*/
  v12 = 0; /*0x4a950b*/
  if ( !a2 ) /*0x4a9515*/
    goto LABEL_17; /*0x4a9515*/
  while ( 1 ) /*0x4a9517*/
  {
    v7 = *v2; /*0x4a9517*/
    if ( *v2 == 0x7FFF && v2[1] == 0x7FFF ) /*0x4a9524*/
      break; /*0x4a9524*/
    v8 = v2[1]; /*0x4a9526*/
    if ( v4 <= v7 ) /*0x4a952f*/
      v4 = v7; /*0x4a9531*/
    if ( v3 >= v7 ) /*0x4a9535*/
      v3 = v7; /*0x4a9537*/
    if ( v6 <= v8 ) /*0x4a953b*/
      v6 = v2[1]; /*0x4a953d*/
    if ( v5 >= v8 ) /*0x4a9541*/
      v5 = v2[1]; /*0x4a9543*/
    v2 += 2; /*0x4a9545*/
  }
  v9 = v4 - v3; /*0x4a954a*/
  IDA_LOWORD(v12) = 1; /*0x4a9551*/
  if ( v9 + 1 >= 1 ) /*0x4a955b*/
    IDA_LOWORD(v12) = v9 + 1; /*0x4a955d*/
  v10 = v6 - v5; /*0x4a9562*/
  if ( v10 + 1 < 1 ) /*0x4a9569*/
  {
    IDA_HIWORD(v12) = 1; /*0x4a956b*/
  LABEL_17:
    *a1 = v12; /*0x4a9570*/
    return a1; /*0x4a957f*/
  }
  IDA_HIWORD(v12) = v10 + 1; /*0x4a9582*/
  *a1 = v12; /*0x4a9592*/
  return a1; /*0x4a9578*/
}
// 0x561910
int CoordinateTables::Init()  // G42 sig-sync: hpp declares int (matches IDA int* CoordinateTables_Init())
{
  return 0;
}

// 0x7493b0
// G42 T9: body quarantined -- ~190-line raw dump from the VoxelAnimClass-ctor
// universe (IDA owner: void* __thiscall VoxelAnimClass::Constructor(this,int,
// int*,int) @0x7493B0): ObjectClass::ctor/Int4::Set/AudioController::Init
// static-style calls, VoxelAnimClass_vftable installs, __pad_98 zone writes.
// Truth = .omo/ida_cache/func_0x007493B0.json.
void* DamageAnimClass::Constructor(int a2, int *a3, int a4)
{
    return {}; // TODO stub - G42 return-sync (void *->virtual void*)
}
// 0x4c58c0
// G42 T9: body quarantined -- raw dump had duplicate local v11 (int16_t[2]
// and int), e4-flat members u32_28/u32_26/u32_24/vtable28/vtable29, undefined
// Cell/CellCoord helpers. Truth = .omo/ida_cache/func_0x004C58C0.json
// (int __thiscall IterateCellsInRadius(this)).
int EMPulseClass::IterateCellsInRadius()
{
    return {}; // TODO stub - G42 return-sync (int->virtual int)
}
// 0x4c59a0
// G42 T9: body quarantined -- static-style AbstractClass::ProcessPower /
// Checksummer::Add_WORD / Power::TimerProcess calls, e4-flat members
// u32_24/u32_26/u32_28/u32_2C/vtable4. Truth =
// .omo/ida_cache/func_0x004C59A0.json (int __thiscall Stat(this,unsigned int*)).
int EMPulseClass::Stat(unsigned int * a2)
{
    return {}; // TODO stub - G42 return-sync (int->virtual int)
}
// 0x4a1d50
// 0x4c59f0
int EMPulseClass::ddtor(unsigned int *a2)  // G42 sig-sync: IDA int __stdcall ddtor(this,_DWORD*) (1 param; def had phantom a1)
{
  if ( !a2 ) /*0x4c59f6*/
    return -2147467261; /*0x4c59f8*/
  *a2 = -1205482718; /*0x4c5a06*/
  a2[1] = 298983438; /*0x4c5a0e*/
  a2[2] = 1610656159; /*0x4c5a17*/
  a2[3] = unk_7E996C; /*0x4c5a20*/
  return 0; /*0x4c59fd*/
}
// 0x4c5a30
// G42 T9: body quarantined -- raw dump (EMPulseClass_vftable installs,
// static-style InitVtables, void-returning values). Truth =
// .omo/ida_cache/func_0x004C5A30.json (int __stdcall Write(this,int a2)).
int EMPulseClass::Write(int a2)
{
    return {}; // TODO stub - G42 return-sync (int->virtual int)
}
// 0x4c5a80
// G42 T9: body quarantined -- raw dump (phantom params a2/a3, static-style
// SaveLoad_Prefix). Truth = .omo/ida_cache/func_0x004C5A80.json
// (int __stdcall Seek(this,int* a2,int a3)).
int EMPulseClass::Seek(int *a2, int a3)
{
    return {}; // TODO stub - G42 return-sync (int->virtual int)
}
// 0x53cbe0
// G42 T9: body quarantined -- ~270-line raw dump dereferenced an int param
// (Block), Coord::/MapClass globals undefined in this universe. Truth =
// .omo/ida_cache/func_0x0053CBE0.json (void __thiscall ProcessFrame(this)).
void ExplosionClass::ProcessFrame()
{
}
// 0x6263d0
// G42 T9: body quarantined -- raw dump (StringVector/String/MIXFile::Load
// undefined types, DynamicVectorClass_char___vftable, HashStringMod31
// undeclared). Truth = .omo/ida_cache/func_0x006263D0.json
// (int __thiscall FileExtension_MapHandler(const char* this)).
int FileExtension::MapHandler()
{
    return {}; // TODO stub - G42 return-sync (int->virtual int)
}
// 0x628240
// G42 T9: body quarantined -- raw dump in e4-flat vocabulary (q004 etc.),
// StringVector::Construct static-style. Truth =
// .omo/ida_cache/func_0x00628240.json
// (_DWORD* __thiscall Constructor(this,int a2,int a3)).
unsigned int* FileExtension::Constructor(int a2, int a3)
{
    return {}; // TODO stub - G42 return-sync (unsigned int *->virtual unsigned int*)
}
// 0x628d10
// G42 T9: body quarantined -- String::CopyChecked undefined, u32_14 e4-flat
// member, phantom a2 param. Truth = .omo/ida_cache/func_0x00628D10.json
// (char __thiscall CheckExtensionMatch(this,int a2)).
char FileExtension::CheckExtensionMatch(int a2)
{
    return {}; // TODO stub - G42 return-sync (char->virtual char)
}
// 0x628dd0
// G42 T9: body quarantined -- String::Copy undefined, u32_100 e4-flat member.
// Truth = .omo/ida_cache/func_0x00628DD0.json
// (int __thiscall sub_628DD0(this,const char*,_DWORD*)).
int FileExtension::Check(const char * a2, unsigned int * a3)
{
    return {}; // TODO stub - G42 return-sync (int->virtual int)
}
// 0x47b0c0
int FileFind::Next()  // G42 sig-sync: IDA int __thiscall Next(char* this) -- this is the filename buffer
{
  int result; // eax
  struct _WIN32_FIND_DATAA FindFileData; // [esp+4h] [ebp-140h] BYREF

  if ( this ) /*0x47b0cb*/
  {
    result = hFindFile; /*0x47b0cd*/
    if ( hFindFile != -1 ) /*0x47b0d5*/
    {
      result = FindNextFileA((HANDLE)hFindFile, &FindFileData); /*0x47b0dd*/
      if ( result == 1 ) /*0x47b0e6*/
      {
        strcpy((char *)this, FindFileData.cFileName); /*0x47b104*/
        return 1; /*0x47b116*/
      }
    }
    *(char *)this = 0; /*0x47b117*/
  }
  IDA_LOBYTE(result) = 0; /*0x47b11a*/
  return result; /*0x47b10f*/
}
// 0x47b130
int FileFind::CloseHandle()  // G42 sig-sync: hpp int; IDA truth HANDLE FileFind_CloseHandle() free fn
{
  int result; // eax

  result = hFindFile; /*0x47b130*/
  if ( hFindFile != -1 ) /*0x47b138*/
  {
    result = (int)FindClose((HANDLE)hFindFile); /*0x47b13b*/
    hFindFile = -1; /*0x47b141*/
  }
  return result; /*0x47b14b*/
}
// 0x5bbed0
void FileFind::Close()
{
}
// 0x5bbee0
void FileFind::ReleaseAllHandles()
{
}
// 0x477790
// G42 T9: body quarantined -- raw dump (static-style FilePipe::Destructor with
// int-cast this). Truth = .omo/ida_cache/func_0x00477790.json
// (void* __thiscall QueryInterface(this,char a2)).
void* FilePipe::QueryInterface(char a2)
{
    return {}; // TODO stub - G42 return-sync (void *->virtual void*)
}
// 0x7ba420
// G42 T9: body quarantined -- raw dump (Pipe_field_0x0C/q004 e4-flat members,
// FilePipe_vftable install, `return Pipe::Dtor(int a1)` syntax garbage).
// Truth = .omo/ida_cache/func_0x007BA420.json (int __thiscall Destructor(Pipe* this)).
int FilePipe::Destructor()
{
    return {}; // TODO stub - G42 return-sync (int->virtual int)
}
// 0x7ba450
// G42 T9: body quarantined -- raw dump (vtable-slot-as-member reads).
// Truth = .omo/ida_cache/func_0x007BA450.json (int __thiscall Release(this)).
int FilePipe::Release()
{
    return {}; // TODO stub - G42 return-sync (int->virtual int)
}
// 0x7ba480
// G42 T9: body quarantined -- raw dump (FilePipe_field_0x0C/q004 e4-flat
// members, returned value from void fn). Truth =
// .omo/ida_cache/func_0x007BA480.json (int __thiscall Read(this,int a2,int a3)).
int FilePipe::Read(int a2, int a3)
{
    return {}; // TODO stub - G42 return-sync (int->virtual int)
}
// 0x525a10
// G42 T9: body quarantined -- raw dump (FileStraw_vftable install, INIClass
// undefined, static-style FileStraw::Destructor((int)v5)). Truth =
// .omo/ida_cache/func_0x00525A10.json (int __thiscall Open(this,int a2,char a3)).
int FileStraw::Open(int a2, char a3)
{
    return {}; // TODO stub - G42 return-sync (int->virtual int)
}
// 0x7ba590
// G42 T9: body quarantined -- raw dump (u32_C/q004 e4-flat members,
// FileStraw_vftable install, `return Straw::Dtor(int a1)` syntax garbage).
// Truth = .omo/ida_cache/func_0x007BA590.json (int __thiscall Destructor(Straw* this)).
int FileStraw::Destructor()
{
    return {}; // TODO stub - G42 return-sync (int->virtual int)
}
// 0x477770
// G42 T9: body quarantined -- raw dump (static-style FileStraw::Destructor
// with int-cast this). Truth = .omo/ida_cache/func_0x00477770.json.
void* FileStraw_Destru::QueryInterface(char a2)
{
    return {}; // TODO stub - G42 return-sync (void *->virtual void*)
}
// 0x7ba530
// G42 T9: body quarantined -- raw dump (q00C/q0042 e4-flat members, `this+16`
// ptr math). Truth = .omo/ida_cache/func_0x007BA530.json.
int FileStraw_Destru::Release(int a2, int a3)
{
    return {}; // TODO stub - G42 return-sync (int->virtual int)
}
// 0x730100
void FileTree::CleanupAll()
{
}
// 0x69e500
// G42 T9: body quarantined -- recursive raw dump in e4-flat vocabulary
// (__tail_0/u32_C/u32_10/u32_18/u32_1C, static-style recursive self-calls).
// Truth = .omo/ida_cache/func_0x0069E500.json.
int FileTreeNode::Destroy()
{
    return {}; // TODO stub - G42 return-sync (int->virtual int)
}
// 0x512ae0
void InfantryTypeVector::QueryInterface(unsigned int * Block, char a2)
{
}
// 0x512c80
void InfantryTypeVector::Release( int a2, unsigned int * a3)
{
}
// 0x512d60
void InfantryTypeVector::AddType( unsigned int * a2)
{
}
// 0x512da0
void InfantryTypeVector::Remove( int a2)
{
}
// 0x512dc0
void InfantryTypeVector::Construct( int a2, int a3)
{
}
// 0x6d1eb0
void IsoCoord::ToPixel( int a2, Tactical * aP2)
{
}
// 0x6d62e0
void IsoCoord::ToScreenOffset(AbstractClass * aP0, AbstractClass * aP1, AbstractClass * aP2, AbstractClass * aP3)
{
}
// 0x748750
void IsoTile::Decode16Bit(int a1, uint16_t * a2, int * a3, int a4, int a5, int a6)
{
}
// 0x748c30
void IsoTile::Decode8BitV2(int a1, uint8_t * a2, int * a3, unsigned int a4, int a5, int a6)
{
}
// 0x7c39c0
void IsoTile::Decode16BitV2(int a1, uint16_t * a2, int * a3, int a4, int a5, int a6)
{
}
// 0x7c3eb0
void IsoTile::Decode8Bit(int a1, uint8_t * a2, int * a3, unsigned int a4, int a5, int a6)
{
}
// 0x544a70
void IsometricTileTypeClass::CleanupMembers()
{
}
// 0x544cb0
void IsometricTileTypeClass::LoadTileFileData()
{
}
// 0x549aa0
void IsometricTileTypeClass::GetTerrainType( unsigned short * a2, int a3)
{
}
// 0x549ae0
void IsometricTileTypeClass::GetHeight( int a2)
{
}
// 0x549b50
void IsometricTileTypeClass::vt_entry_6C(unsigned int * a0, IsometricTileTypeClass * aP1)
{
}
// 0x4c1f20
void Lightning::Draw( int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
}
// 0x6b5240
int MapCoords::Init()  // G42 sig-sync: hpp int (matches IDA-style global initializer returning 128)
{
  dword_B0B7D8 = 0; /*0x6b5245*/
  dword_B0B7D0 = 128; /*0x6b524f*/
  dword_B0B7D4 = 128; /*0x6b5254*/
  return 128; /*0x6b5259*/
}
// 0x45b1c0
void MapData::InitHeights()
{
}
// 0x69a3b0
void MapFile::LoadDescription(wchar_t * String_v, uint8_t *** a2, INIClass * aP1)
{
}
// 0x69c500
void MapFile::ddtor()
{
}
// 0x69c560
void MapFile::Write( int a2)
{
}
// 0x69cbc0
void MapFile::Release( int a2, unsigned int * a3)
{
}
// 0x69cd00
void MapFile::Read( const char ** a2)
{
}
// 0x5d63e0
void MapPreview::Check( int a2)
{
}
// 0x5e7eb0
void MapPreview::Upload()
{
}
// 0x595740
int MapResourceClass::Constructor()
{
    return {}; // TODO stub - G42 return-sync (void->virtual int)
}
// 0x56d100
void MapSeed::CheckTileMatch(int16_t *aP1, int16_t *aP2, int aP3, char aP4, char aP5, char aP6)
{
}
// 0x58b7d0
int MapSeed::IsInitialized()  // G42 sig-sync: returns state global (IDA-style)
{
  return dword_ABED0C; /*0x58b7d5*/
}
// 0x5910f0
void MapSeed::PlaceCityBlock( int16_t * a2, int16_t * a3, void * a4)
{
}
// 0x591d80
void MapSeed::PlaceCityBuildings( int16_t * a2, int16_t * a3, void * a4)
{
}
// 0x593550
void MapSeed::PlaceCityBlock2( int16_t * a2, int16_t * a3, ObjectClass * aP2)
{
}
// 0x595680
int MapSeedClass::Constructor()
{
    return {}; // TODO stub - G42 return-sync (void->virtual int)
}
// 0x597760
void MapSeedClass::Release( char * a2, wchar_t * Source)
{
}
// 0x597a30
char MapSeedClass::AddRef( char * Source)
{
    return {}; // TODO stub - G42 return-sync (char->virtual char)
}
// 0x597d50
bool MapSeedClass::ddtor(char* lpFileName)
{
    return {}; // TODO stub - G42 return-sync (bool->virtual bool)
}
// 0x597f80
void * MapSeedClass::Generate()  // G42 sig-sync: returns CSF string ptr
{
  return GetStringCSF((wchar_t *)&((unsigned int *)&stru_82BA00)[1], 0, (int)&((unsigned int *)&stru_82BA00)[11], 5572); /*0x597f96*/
}
// 0x767740
// 0x767740 (see marker above; G42 T9 quarantine)
void MapSizeGameOption_WorldDominationTour::Read()
{
    // TODO stub - quarantined G42 T9 (WideString::Length/Assign/AssignConcat,
    // DeleteAndZero::Alt helpers absent; phantom a2/a3 params; returns value
    // from void fn. Truth = ida_cache marker above)
}

// 0x767800
int MapSizeGameOption_WorldDominationTour::ddtor()  // G42 sig-sync: table lookup return
{
  return ((unsigned int *)&dword_848628)[4 * *(uint8_t *)(this->MapSizeGameOption_WorldDominationTour_field_0x04 + 18) /*0x76781b*/
                    + *(uint8_t *)(this->MapSizeGameOption_WorldDominationTour_field_0x04 + 19)];
}
// 0x7678c0
void MapSizeGameOption_WorldDominationTour::QueryInterface( char a2)
{
}
// 0x769c00
void Map_WorldDominationTour::QueryInterface( char a2)
{
}
// 0x5ae5e0
void Matrix::Copy12Float( int a2)
{
}
// 0x5bd730
void Matrix::Scale(float a2)
{
}
// 0x5af1a0
void Matrix2D::Rotate(float aP1)
{
}
// 0x5ae8f0
void Matrix3x3::Multiply(float *a2)
{
}
// 0x5ae9b0
void Matrix3x3::ApplyCol0( AbstractClass * aP1)
{
}
// 0x5ae9e0
void Matrix3x3::ApplyCol1( AbstractClass * aP1)
{
}
// 0x5aef60
void Matrix3x3::RotateX(float aP1)
{
}
// 0x5af4d0
void Matrix3x3::TransformPoint(float *aP1, float *a2)
{
}
// 0x47c4d0
void PlacementList::FindByID( int a2, TechnoClass * aP2)
{
}
// 0x47ebf0
void PlacementList::FindByType( char a2)
{
}
// 0x6370b0
void PlanningNodeClass::CleanupAll()
{
}
// 0x63ebd0
void PlanningNodeClass::RemoveFromArray( DynamicVector * aP1)
{
}
// 0x658890
void RadarHashVector::Clear()
{
}
// 0x6588c0
void RadarHashVector::GetCount( int a2)
{
}
// 0x6588e0
void RadarHashVector::Seek( unsigned int * a2, int a3)
{
}
// 0x658910
char RadarHashVector::AddRef( int a2)
{
    return {}; // TODO stub - G42 return-sync (char->virtual char)
}
// 0x658970
void RadarHashVector::Release( int a2, char * a3)
{
}
// 0x690c00
void ScoreAnimClass::AdvanceFrame( int a2)
{
}
// 0x690d60
void ScoreAnimClass::AnimateText()
{
}
// 0x690f70
int ScoreAnimClass::AddRef()  // G42 sig-sync: body returns timer result
{
  signed int result; // eax
  int ScoreAnimClass_field_0x14; // edi

  result = this->ScoreAnimClass_field_0x0C; /*0x690f73*/
  if ( result != -1 ) /*0x690f79*/
  {
    ScoreAnimClass_field_0x14 = this->ScoreAnimClass_field_0x14; /*0x690f7c*/
    result = TimerGetTicks() - this->ScoreAnimClass_field_0x0C; /*0x690f8c*/
    if ( result >= ScoreAnimClass_field_0x14 ) /*0x690f91*/
    {
      this->ScoreAnimClass_field_0x14 = 0; /*0x690fa4*/
      this->ScoreAnimClass_field_0x0C = -1; /*0x690fa7*/
    }
    else
    {
      this->ScoreAnimClass_field_0x0C = -1; /*0x690f95*/
      this->ScoreAnimClass_field_0x14 = ScoreAnimClass_field_0x14 - result; /*0x690f9c*/
    }
  }
  return result; /*0x690fa0*/
}
// 0x690fc0
void ScoreAnimClass::Release()
{
}
// 0x690fe0
void ScoreAnimClass::Constructor_ScoreAnimClass(unsigned int * Block, char a2)
{
}
// 0x542620
// G42 T9: body quarantined -- ~360-line render raw dump (broken call parens,
// aGrey IDA string label undeclared, TextRenderer/FindBuildingAnimByName
// absent, DSurface spawnStatus-as-member). Truth = .omo/ida_cache/func_0x00542620.json.
void ScoreBoard::Render()
{
    // TODO stub - quarantined G42 T9
}
// 0x5cd3c0
void ScoreClass::SetState( char a2)
{
}
// 0x6907a0
void ScoreFontClass::Release( int16_t * a2)
{
}
// 0x6907e0
char ScoreFontClass::AddRef(int16_t szSrc)
{
    return {}; // TODO stub - G42 return-sync (char->virtual char)
}
// 0x691040
void ScoreFontClass::QueryInterface(unsigned int * Block, char a2)
{
}
// 0x691100
void ScoreFontClass::Constructor_ScoreFontClass(unsigned int * Block, char a2)
{
}
// 0x68cd20
void ScoreScreen::Display()
{
}

// 0x68ec00
void ScoreScreen::Check( char a2)
{
}
// 0x68ef20
int ScoreScreen::AccumulateScoreStats()
{
    return 0; // TODO stub - quarantined G42 T9 (Debug::Log/HouseClass::IsAlliedWith/Screen
    // undefined-type derefs, ptr-vs-int compares; truth = ida_cache marker above)
}
// 0x68f9b0
void ScoreScreen::DisplayTimeText( unsigned int a2)
{
}
// 0x690640
void ScoreScreen::LoadAudio()
{
}
// 0x691970
void ScoreScreenClass::ProcessFrame(char * a1, int a2)
{
}
// 0x76ea20
void ScoreText::ShowAlt(const wchar_t **aP1, int a3)
{
}
// 0x76eaf0
void ScoreText::Show( ObjectClass * aP1)
{
}
// 0x567230
void ShroudClass::UpdateVisibility(int *aP1)
{
}
// 0x577ab0
void ShroudClass::Reset( IUnknown * aP1)
{
}
// 0x6b8880
void SpawnControlVector::Constructor( int a2, int a3)
{
}
// 0x510500
void SuperClassVector::Construct( int a2, int a3)
{
}
// 0x539890
int SuperWeaponClass::LoadFromSaveStream()
{
  int result; // eax
  int v3; // eax
  int v4; // edi
  int v5; // ecx
  int v6; // ecx
  int v7; // edi
  int v8; // edx
  int v9; // edx
  int i; // edi
  int v11; // eax
  int v12; // [esp+140h] [ebp-8h] BYREF
  int v13; // [esp+144h] [ebp-4h] BYREF

  result = (*(int (**)(SuperWeaponClass *, int *, int, unsigned int))(*(unsigned int *)((unsigned char *)(this) + 0x0) + 16))( /*0x5398a3*/
             this,
             &LightningStorm_Active,
             1,
             0);
  if ( result >= 0 ) /*0x5398a8*/
  {
    result = (*(int (**)(SuperWeaponClass *, int *, int, unsigned int))(*(unsigned int *)((unsigned char *)(this) + 0x0) + 16))( /*0x5398ba*/
               this,
               &LightningStorm_StartTime,
               4,
               0);
    if ( result >= 0 ) /*0x5398bf*/
    {
      result = (*(int (**)(SuperWeaponClass *, int *, int, unsigned int))(*(unsigned int *)((unsigned char *)(this) + 0x0) + 16))( /*0x5398d1*/
                 this,
                 &LightningStorm_Duration,
                 4,
                 0);
      if ( result >= 0 ) /*0x5398d6*/
      {
        result = (*(int (**)(SuperWeaponClass *, int *, int, unsigned int))(*(unsigned int *)((unsigned char *)(this) + 0x0) + 16))( /*0x5398e8*/
                   this,
                   &LightningStorm_Deferment,
                   4,
                   0);
        if ( result >= 0 ) /*0x5398ed*/
        {
          result = (*(int (**)(SuperWeaponClass *, int *, int, unsigned int))(*(unsigned int *)((unsigned char *)(this) + 0x0) + 16))( /*0x5398ff*/
                     this,
                     &LightningStorm_TimeToEnd,
                     1,
                     0);
          if ( result >= 0 ) /*0x539904*/
          {
            result = (*(int (**)(SuperWeaponClass *, int *, int, unsigned int))(*(unsigned int *)((unsigned char *)(this) + 0x0) + 16))( /*0x539916*/
                       this,
                       &NukeFlash_StartTime,
                       4,
                       0);
            if ( result >= 0 ) /*0x53991b*/
            {
              result = (*(int (**)(SuperWeaponClass *, int *, int, unsigned int))(*(unsigned int *)((unsigned char *)(this) + 0x0) + 16))( /*0x53992d*/
                         this,
                         &NukeFlash_Duration,
                         4,
                         0);
              if ( result >= 0 ) /*0x539932*/
              {
                result = (*(int (**)(SuperWeaponClass *, int *, int, unsigned int))(*(unsigned int *)((unsigned char *)(this) + 0x0) + 16))( /*0x539944*/
                           this,
                           &NukeFlash_Status,
                           4,
                           0);
                if ( result >= 0 ) /*0x539949*/
                {
                  result = (*(int (**)(SuperWeaponClass *, int *, int, unsigned int))(*(unsigned int *)((unsigned char *)(this) + 0x0) + 16))( /*0x53995b*/
                             this,
                             &PsyDom_Status,
                             4,
                             0);
                  if ( result >= 0 ) /*0x539960*/
                  {
                    result = (*(int (**)(SuperWeaponClass *, int *, int, unsigned int))(*(unsigned int *)((unsigned char *)(this) + 0x0) + 16))( /*0x539972*/
                               this,
                               &PsyDom_Anim,
                               4,
                               0);
                    if ( result >= 0 ) /*0x539977*/
                    {
                      result = (*(int (**)(SuperWeaponClass *, int *, int, unsigned int))(*(unsigned int *)((unsigned char *)(this) + 0x0) /*0x539989*/
                                                                                            + 16))(
                                 this,
                                 &LightningStorm_Coords,
                                 4,
                                 0);
                      if ( result >= 0 ) /*0x53998e*/
                      {
                        result = (*(int (**)(SuperWeaponClass *, int *, int, unsigned int))(*(unsigned int *)((unsigned char *)(this) + 0x0) /*0x5399a0*/
                                                                                                  + 16))(
                                   this,
                                   &PsyDom_Coords,
                                   4,
                                   0);
                        if ( result >= 0 ) /*0x5399a5*/
                        {
                          result = (*(int (**)(SuperWeaponClass *, int *, int, unsigned int))(*(unsigned int *)((unsigned char *)(this) + 0x0) /*0x5399b7*/
                                                                                                  + 16))(
                                     this,
                                     &LightningStorm_Owner,
                                     4,
                                     0);
                          if ( result >= 0 ) /*0x5399bc*/
                          {
                            result = (*(int (**)(SuperWeaponClass *, int *, int, unsigned int))(*(unsigned int *)((unsigned char *)(this) + 0x0) + 16))( /*0x5399ce*/
                                       this,
                                       &PsyDom_Owner,
                                       4,
                                       0);
                            if ( result >= 0 ) /*0x5399d3*/
                            {
                              v3 = *(unsigned int *)((unsigned char *)(this) + 0x0); /*0x5399df*/
                              v12 = dword_A9FA70; /*0x5399eb*/
                              result = (*(int (**)(SuperWeaponClass *, int *, int, unsigned int))(v3 + 16))( /*0x5399ef*/
                                         this,
                                         &v12,
                                         4,
                                         0);
                              if ( result >= 0 ) /*0x5399f4*/
                              {
                                v4 = 0; /*0x5399fe*/
                                if ( v12 <= 0 ) /*0x539a02*/
                                {
  LABEL_19:
                                  v6 = *(unsigned int *)((unsigned char *)(this) + 0x0); /*0x539a31*/
                                  v12 = dword_A9F9E0; /*0x539a42*/
                                  result = (*(int (**)(SuperWeaponClass *, int *, int, unsigned int))(v6 + 16))( /*0x539a46*/
                                             this,
                                             &v12,
                                             4,
                                             0);
                                  if ( result >= 0 ) /*0x539a4b*/
                                  {
                                    v7 = 0; /*0x539a55*/
                                    if ( v12 <= 0 ) /*0x539a59*/
                                    {
  LABEL_23:
                                      v9 = *(unsigned int *)((unsigned char *)(this) + 0x0); /*0x539a83*/
                                      v12 = dword_A9FA28; /*0x539a95*/
                                      result = (*(int (**)(SuperWeaponClass *, int *, int, unsigned int))(v9 + 16))( /*0x539a99*/
                                                 this,
                                                 &v12,
                                                 4,
                                                 0);
                                      if ( result >= 0 ) /*0x539a9e*/
                                      {
                                        for ( i = 0; i < v12; ++i ) /*0x539aa8*/
                                        {
                                          v11 = *(unsigned int *)((unsigned char *)(this) + 0x0); /*0x539ab0*/
                                          v13 = *((unsigned int *)dword_A9FA1C + i); /*0x539abf*/
                                          result = (*(int (**)(SuperWeaponClass *, int *, int, unsigned int))(v11 + 16))( /*0x539ac3*/
                                                     this,
                                                     &v13,
                                                     4,
                                                     0);
                                          if ( result < 0 ) /*0x539ac8*/
                                            break; /*0x539ac8*/
                                        }
                                      }
                                    }
                                    else
                                    {
                                      while ( 1 ) /*0x539a60*/
                                      {
                                        v8 = *(unsigned int *)((unsigned char *)(this) + 0x0); /*0x539a60*/
                                        v13 = *((unsigned int *)dword_A9F9D4 + v7); /*0x539a6f*/
                                        result = (*(int (**)(SuperWeaponClass *, int *, int, unsigned int))(v8 + 16))( /*0x539a73*/
                                                   this,
                                                   &v13,
                                                   4,
                                                   0);
                                        if ( result < 0 ) /*0x539a78*/
                                          break; /*0x539a78*/
                                        if ( ++v7 >= v12 ) /*0x539a81*/
                                          goto LABEL_23; /*0x539a81*/
                                      }
                                    }
                                  }
                                }
                                else
                                {
                                  while ( 1 ) /*0x539a0a*/
                                  {
                                    v5 = *(unsigned int *)((unsigned char *)(this) + 0x0); /*0x539a0a*/
                                    v13 = *((unsigned int *)dword_A9FA64 + v4); /*0x539a19*/
                                    result = (*(int (**)(SuperWeaponClass *, int *, int, unsigned int))(v5 + 16))( /*0x539a1d*/
                                               this,
                                               &v13,
                                               4,
                                               0);
                                    if ( result < 0 ) /*0x539a22*/
                                      break; /*0x539a22*/
                                    if ( ++v4 >= v12 ) /*0x539a2f*/
                                      goto LABEL_19; /*0x539a2f*/
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return result; /*0x539ad3*/
}
// 0x6c5640
int SuperWeaponClass::ProcessCharged()
{
  int v2; // [esp+4h] [ebp+4h]

  return InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x6c564e*/
}
// 0x6da740
int SuperWeaponClass::UpdateAll()
{
  while ( *(unsigned int *)&((unsigned int *)&stru_A8EB00)[228] ) /*0x6da747*/
    (*(void (**)(unsigned int))(***(unsigned int ***)&((unsigned int *)&stru_A8EB00)[216] + 336))(**(unsigned int **)&((unsigned int *)&stru_A8EB00)[216]); /*0x6da752*/
  return 0; /*0x6da752 G42: Selection::SetCurrent absent from tree universe -- truth .omo/ida_cache/func_0x006DA740.json*/
}
// 0x6e38f0
void SuperWeaponClass::CreateChemLauncher( int a2, int a3, int a4, IUnknown * aP4)
{
}
// 0x773030
int SuperWeaponClass::FindByName()
{
  int v1; // esi

  v1 = 0; /*0x773036*/
  if ( g_WeaponTypePool <= 0 ) /*0x77303d*/
    return -1; /*0x773062*/
  while ( _strcmpi((char *)(*((unsigned int *)g_WeaponTypeConfig + v1) + 36), (const char *)((unsigned char *)(this) + 0x0)) ) /*0x773056*/
  {
    if ( ++v1 >= g_WeaponTypePool ) /*0x773060*/
      return -1; /*0x773060*/
  }
  return v1; /*0x773062*/
}
// 0x6c39c0
int TClassFactory_AnimClass::AddRef()
{
  int v2; // [esp+4h] [ebp+4h]

  return InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x6c39ce*/
}
// 0x6c39e0
int TClassFactory_AnimClass::GetClassName()
{
  LONG v1; // esi
  volatile LONG *Block; // [esp+Ch] [ebp+4h]

  v1 = InterlockedDecrement(Block + 1); /*0x6c39f0*/
  if ( !v1 ) /*0x6c39f4*/
    RA2_OPDEL((void *)Block); /*0x6c39f7*/
  return v1; /*0x6c3a01*/
}
// 0x6c3a10
int TClassFactory_AnimClass::ddtor()
{
    return 0; // TODO stub - quarantined G42 T9 (COM-thunk raw dump: phantom a3/a4 params,
    // uninit v9 out-param, __stdcall/__cdecl vtable cast clash; truth = ida_cache marker above)
}
// 0x6c3a90
int TClassFactory_AnimClass::GetSize()
{
    return 0; // TODO stub - quarantined G42 T9 (COM-thunk raw dump: phantom a2 param;
    // truth = ida_cache marker above)
}
// 0x6c5040
int TClassFactory_BulletClass::AddRef()
{
  int v2; // [esp+4h] [ebp+4h]

  return InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x6c504e*/
}
// 0x6c5060
int TClassFactory_BulletClass::GetClassName()
{
  LONG v1; // esi
  volatile LONG *Block; // [esp+Ch] [ebp+4h]

  v1 = InterlockedDecrement(Block + 1); /*0x6c5070*/
  if ( !v1 ) /*0x6c5074*/
    RA2_OPDEL((void *)Block); /*0x6c5077*/
  return v1; /*0x6c5081*/
}
// 0x6c5090
int TClassFactory_BulletClass::ddtor()
{
    return 0; // TODO stub - quarantined G42 T9 (COM-thunk raw dump: phantom a3/a4 params,
    // uninit v9 out-param, __stdcall/__cdecl vtable cast clash; truth = ida_cache marker above)
}
// 0x6c5110
int TClassFactory_BulletClass::GetSize()
{
    return 0; // TODO stub - quarantined G42 T9 (COM-thunk raw dump: phantom a2 param;
    // truth = ida_cache marker above)
}
// 0x6c00c0
int TClassFactory_CampaignClass::AddRefCOM()
{
  int v2; // [esp+4h] [ebp+4h]

  return InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x6c00ce*/
}
// 0x6c00e0
int TClassFactory_CampaignClass::Release()
{
  LONG v1; // esi
  volatile LONG *Block; // [esp+Ch] [ebp+4h]

  v1 = InterlockedDecrement(Block + 1); /*0x6c00f0*/
  if ( !v1 ) /*0x6c00f4*/
    RA2_OPDEL((void *)Block); /*0x6c00f7*/
  return v1; /*0x6c0101*/
}
// 0x6c0110
void TClassFactory_CampaignClass::CreateInstanceCOM()
{
}
// 0x6c0190
int TClassFactory_CampaignClass::AdjustRefCOM()
{
    return 0; // TODO stub - quarantined G42 T9 (phantom; truth = .omo/ida_cache/func_0x0006C0190.json)
}
// 0x6c0240
int TClassFactory_CampaignClass::AddRef()
{
  int v2; // [esp+4h] [ebp+4h]

  return InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x6c024e*/
}
// 0x6bf940
int TClassFactory_CellClass::AddRef()
{
  int v2; // [esp+4h] [ebp+4h]

  return InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x6bf94e*/
}
// 0x6bf960
int TClassFactory_CellClass::GetClassName()
{
  LONG v1; // esi
  volatile LONG *Block; // [esp+Ch] [ebp+4h]

  v1 = InterlockedDecrement(Block + 1); /*0x6bf970*/
  if ( !v1 ) /*0x6bf974*/
    RA2_OPDEL((void *)Block); /*0x6bf977*/
  return v1; /*0x6bf981*/
}
// 0x6bf990
int TClassFactory_CellClass::ddtor()
{
    return 0; // TODO stub - quarantined G42 T9 (COM-thunk raw dump: phantom a3/a4 params,
    // uninit v9 out-param, __stdcall/__cdecl vtable cast clash; truth = ida_cache marker above)
}
// 0x6bfa10
int TClassFactory_CellClass::GetSize()
{
    return 0; // TODO stub - quarantined G42 T9 (COM-thunk raw dump: phantom a2 param;
    // truth = ida_cache marker above)
}
// 0x6bfac0
int TClassFactory_EMPulseClass::AddRef()
{
  int v2; // [esp+4h] [ebp+4h]

  return InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x6bface*/
}
// 0x6bfae0
int TClassFactory_EMPulseClass::GetClassName()
{
  LONG v1; // esi
  volatile LONG *Block; // [esp+Ch] [ebp+4h]

  v1 = InterlockedDecrement(Block + 1); /*0x6bfaf0*/
  if ( !v1 ) /*0x6bfaf4*/
    RA2_OPDEL((void *)Block); /*0x6bfaf7*/
  return v1; /*0x6bfb01*/
}
// 0x6bfb10
int TClassFactory_EMPulseClass::ddtor()
{
    return 0; // TODO stub - quarantined G42 T9 (COM-thunk raw dump: phantom a3/a4 params,
    // uninit v9 out-param, __stdcall/__cdecl vtable cast clash; truth = ida_cache marker above)
}
// 0x6bfb90
int TClassFactory_EMPulseClass::GetSize()
{
    return 0; // TODO stub - quarantined G42 T9 (COM-thunk raw dump: phantom a2 param;
    // truth = ida_cache marker above)
}
// 0x50e830
void TeamTypeVector::CopyConstruct( unsigned int * a2)
{
}
// 0x4e01e0
void AbstractClassVector::Seek( int a2)
{
}
// 0x4e02d0
void AbstractClassVector::QueryInterface(unsigned int * Block, char a2)
{
}
// 0x4e0320
char AbstractClassVector::AddRef( int a2)
{
    return {}; // TODO stub - G42 return-sync (char->virtual char)
}
// 0x4e0360
void AbstractClassVector::Release( int a2, unsigned int * a3)
{
}
// 0x4e0410
void AbstractClassVector::ddtor()
{
}
// 0x53cb10
void ActionQueue::PushEntry(int a2, int a3, int a4)
{
}
// 0x5bddc0
void Actions::Reset( int * a1, MouseClass * aP2)
{
}
// 0x412b40
void AircraftTrackerClass::FillCurrentVector( void * aP1, int a3)
{
}
// 0x513990
void AircraftTypeVector::Constructor( int a2, int a3)
{
}
// 0x420960
void AlphaShapeClass::CTOR( ObjectClass * aP1, int a3, AbstractClass * aP3)
{
}
// 0x420af0
int AlphaShapeClass::Constructor()
{
    return {}; // TODO stub - G42 return-sync (void->virtual int)
}
// 0x420d40
void AlphaShapeClass::SD_vt03(int a1, unsigned int * a2)
{
}
// 0x420d80
int AlphaShapeClass::SD_vt11()  // G42 sig-sync
{
  return 62; /*0x420d85*/
}
// 0x420d90
int AlphaShapeClass::SD_vt12()  // G42 sig-sync
{
  return 64; /*0x420d95*/
}
// 0x5106e0
void AngerVector::Construct( int a2, unsigned int * a3)
{
}
// 0x5f3320
void AppState::CallMethod(int a1)
{
}
// 0x7492b0
void ArcTan::Update()
{
}
// 0x4753f0
void ArmorType::FindIndex( CCINIClass * aP1, uint8_t * a2, Armor)
{
}
// 0x772a50
int ArmorType::LookupByName()  // G42 sig-sync: returns index
{
  int v2; // edi
  char **v3; // esi

  if ( !this ) /*0x772a57*/
    return 0; /*0x772a7c*/
  v2 = 0; /*0x772a59*/
  v3 = (char **)&off_7E5210; /*0x772a5b*/
  while ( _strcmpi(*v3, (const char *)((unsigned char *)(this) + 0x0)) ) /*0x772a6e*/
  {
    ++v3; /*0x772a70*/
    ++v2; /*0x772a73*/
    if ( (int)v3 >= (int)&off_7E523C ) /*0x772a7a*/
      return 0; /*0x772a7a*/
  }
  return v2; /*0x772a7c*/
}
// 0x5cc760
void ArtConfig::loadConfig(char **aP1, int aP2, int aP3, int *aP4, char aP5)
{
}
// 0x7681e0
void ArtConfig::ReadLayout( INIClass * a2, PriorityQueue * a3, int a4)
{
}
// 0x768f50
void ArtConfig::ParseLayoutEntry( unsigned int * a1, ObjectClass * aP2, char ** a3, int a5)
{
}
// 0x7691e0
void ArtConfig::saveConfig( ObjectClass * aP1)
{
}
// 0x76fb90
void ArtConfig::resetConfig( unsigned int * a1, int a3, Selection_WorldDominationTour * aP3)
{
}
// 0x534e50
int AssetClass::ReleaseAndReload()
{
    return 0; // TODO stub - quarantined G42 T9 (helper; truth = .omo/ida_cache/func_0x000534E50.json)
}
// 0x69e100
void BTree::DeleteSubtree()
{
}
// 0x42f9c0
void BaseNodeClass_Vector::Release( int a2, char * a3)
{
}
// 0x42fab0
void BaseNodeClass_Vector::ddtor()
{
}
// 0x42fae0
void BaseNodeClass_Vector::Read( int a2)
{
}
// 0x42fb30
void BaseNodeClass_Vector::Write( int a2)
{
}
// 0x42fb50
void BaseNodeClass_Vector::QueryInterface(unsigned int * Block, char a2)
{
}
// 0x5c6fe0
void BigInt::ArrayArithmetic(int * a1, char * a2, unsigned int * a3, int a4)
{
}
// 0x632740
void BigInt::DecryptBlock( Pipe * aP1, Pipe * aP2, Pipe * aP3)
{
}
// 0x632870
void BigInt::RSAOperation( AbstractClass * Src, int a3, char * a4)
{
}
// 0x632bc0
void BigInt::Compare( int a2)
{
}
// 0x433180
void BinkMovieClass::SetPosition( DSurface * aP1, int a3, int a4)
{
}
// 0x4333f0
void BinkMovieClass::RenderFrameToSurface()
{
}
// 0x4335e0
void BinkMovieClass::AllocateRenderSurface(unsigned char * a1, unsigned char * a2, int a3)
{
}
// 0x4336c0
void BinkMovieClass::ReleaseRenderSurface(uint8_t * a1, unsigned char * a2, int a3)
{
}
// 0x433770
void BinkMovieClass::OpenFile(uint8_t * a1, unsigned char * a2, unsigned int a3)
{
}
// 0x438000
void BlowPipe::Draw( int a2, int a3, int a4)
{
}
// 0x438030
void BlowPipe::DrawAlt( int a2, int a3, int a4)
{
}
// 0x438060
void BlowPipe::AddRef()
{
}
// 0x4380a0
void BlowPipe::Read( BombClass * aP1, signed int Size)
{
}
// 0x632f90
void BlowPipe::QueryInterface(int * Block, char a2)
{
}
// 0x438210
void BlowStraw::Get( Straw * aP1, signed int Size)
{
}
// 0x5b45c0
void BlowStraw::QueryInterface(int * Block, char a2)
{
}
// 0x5b4630
void BlowStraw::Constructor_MixFileClass(void * Block, char a2)
{
}
// 0x510920
void BoolVector::Construct( MapClass * aP1, MapClass * aP2)
{
}
// 0x42e820
void BridgeClass::GetCellData( int a2)
{
}
// 0x50e450
void BuildLocation::InitCandidate( int a2, IUnknown * aP2)
{
}
// 0x510860
void BuildLocationVector::Grow( int a2)
{
}
// 0x6301a0
int C07EFB9C::ddtor(int a1, unsigned int *a2)
{
    return {}; // TODO stub - G42 return-sync (int->virtual int)
}
// 0x645620
int C07F0188::ddtor(int a1, unsigned int *a2)
{
    return {}; // TODO stub - G42 return-sync (int->virtual int)
}
// 0x744600
void C07F5C70::Write(IPersistStream * a0, LPPERSISTSTREAM pPStm, FootClass * aP2)
{
}
// 0x746dd0
int C07F5C70::StubReturn2280()
{
  return 2280; /*0x746dd5*/
}
// 0x746de0
int C07F5C70::ddtor(int a1, unsigned int *a2)
{
    return {}; // TODO stub - G42 return-sync (int->virtual int)
}
// 0x746e20
int C07F5C70::StubReturn1()
{
  return 1; /*0x746e25*/
}
// 0x746e80
void C07F5C70::Seek(void ** Block, char a2)
{
}
// 0x478ba0
void CCToolTip::CalculatePopupPosition( unsigned int * a2)
{
}
// 0x478db0
void CCToolTip::Release( unsigned int * a2)
{
}
// 0x478e10
void CCToolTip::Draw1( char a2)
{
}
// 0x478e30
void CCToolTip::Draw2()
{
}
// 0x479050
void CCToolTip::Show(int a1)
{
}
// 0x7a41c0
void CChatEventSink::HandleServerList(int a1, int a2, int a3)
{
}
// 0x7a5890
void CChatEventSink::HandleChatEvent(int a1, AnimClass * a2, uint8_t * a3, char * a4)
{
}

// 0x7a7110
void CChatEventSink::HandleChannelJoin(int a1, int a2, int a3, const char * a4)
{
}
// 0x7a8260
void CChatEventSink::HandleLobbyPlayerUpdate(int a1, int a2, int a3, int a4)
{
}
// 0x7a9970
void CChatEventSink::HandleUserSearch( int a2, void * a3)
{
}

// 0x47a3f0
void CDROM::DeviceIoControl(HANDLE hDevice, int a2)
{
    // TODO stub - quarantined G42 T9 (prior-epoch raw dump: def/decl arity mismatch; truth = .omo/ida_cache/func_0x00047A3F0.json)
}
// 0x47a6f0
void CDROM::LockVolume(ObjectClass * aP0, AnimClass * aP1, uint8_t a3, DWORD BytesReturned, int16_t a5)
{
}
// 0x473920
void CarryoverClass::QueryInterface(unsigned int * Block, char a2)
{
}
// 0x5ad570
void CellClassVector::Destruct(unsigned int * Block, char a2)
{
}
// 0x5657a0
void* CellCoord::To_CellObj(void* a2, void* a3)
{
    return {}; // TODO stub - G42 return-sync (void->virtual void*)
}
// 0x4863d0
void CellLand::IsBuildable()
{
}
// 0x578100
void CellSystem::UpdateVisibility()
{
}
// 0x433c90
void Char::Swap(char aP1)
{
}
// 0x55e420
void Chat::ProcessMessages()
{
}

// 0x5d4390
void Chat::RefreshMessagePositions()
{
}
// 0x79db50
void ChatDialog::DlgProc(HWND hWnd, UINT, WPARAM, HWND a4)
{
}
// 0x6b9740
void ChatEvent::ProcessStrings(char *a2, int a3, int a4, int a5)
{
}
// 0x6bee40
_DWORD * ClassFactory_CStream::Construct()
{
    return {}; // TODO stub - G42 return-sync (void->virtual _DWORD *)
}
// 0x6befc0
_DWORD * ClassFactory_Wave::Construct()
{
    return {}; // TODO stub - G42 return-sync (void->virtual _DWORD *)
}
// 0x579010
void Cliff::ProcessTransitions(MapClass * aP0, BombClass * aP1)
{
}
// 0x76b080
void ComStreamClass::initStream()
{
}
// 0x76b090
unsigned char * ComStreamClass::closeStream()  // G42 sig-sync: returns +0x48
{
  return (unsigned char *)((unsigned char *)(this) + 0x048); /*0x76b093*/
}
// 0x7a2fe0
void ComStreamClass::SetSize()
{
}
// 0x7a30d0
int ComStreamClass::Read()
{
    return 0; // TODO stub - quarantined G42 T9 (helper; truth = .omo/ida_cache/func_0x0007A30D0.json)
}
// 0x7a3b30
void ComStreamClass::Commit()
{
}
// 0x55c350
void Compression::Read( AbstractClass * aP1, IUnknown * aP2)
{
}
// 0x653810
void Conditions::CheckResult(int a1, IUnknown * aP1)
{
}
// 0x653830
void Conditions::CheckResult3(MouseClass * aP0, IUnknown * aP1, char aP3)
{
}
// 0x7667a0
void Conflict_WorldDominationTour::QueryInterface( char a2)
{
}
// 0x4a04b0
void ConnectionPointClass::QueryInterface(int a1, const void * a2, unsigned int * a3)
{
}
// 0x4a0520
char ConnectionPointClass::AddRef(int a1)
{
    return {}; // TODO stub - G42 return-sync (char->virtual char)
}
// 0x4a0540
void ConnectionPointClass::Release(volatile LONG * Block)
{
}
// 0x4a05d0
int ConnectionPointClass::ddtor(unsigned int *a1, unsigned int *a2)
{
    return {}; // TODO stub - G42 return-sync (int->virtual int)
}
// 0x4a0610
void ConnectionPointClass::Advise(int a1, int a2)
{
}
// 0x5105f0
void ConnectionPointVector::Construct( int a2, int a3)
{
}
// 0x481a00
void CrateClass::ProcessPickup(int aP1)
{
}

// 0x56bbe0
void CrateClass::Update()
{
}
// 0x56bd40
void CrateClass::FindPlacement()
{
}
// 0x72dae0
// G42: static-form sync (ui/supplied site 0x60CF6F calls it without an
// instance). IDA truth = free fn int CreatureClass_GetManager() returning
// *(data:0xB0FCC4); that global is only declared as DataGlobal_B0FCC4 in
// e4/e4_globals.hpp (not in this TU's legacy-safe subset), so stubbed.
unsigned int * CreatureClass::GetManager()
{
    return {}; // TODO stub - G42 return-sync (unsigned int *->static unsigned int *)
}
// 0x632aa0
void Crypto::DecodeByte( unsigned int * a2)
{
}
// 0x4072c0
int DListNode::Init()
{
    return {}; // TODO stub - G42 return-sync (void->virtual int)
}
// 0x4072d0
void DListNode::InitEmpty()
{
}
// 0x4a53b0
void Dial8Class::Constructor( ControlClass * aP1, ControlClass * aP2, ControlClass * aP3, ControlClass * aP4, ControlClass * aP5, int a7)
{
}
// 0x4a5660
void Dial8Class::SetValue( unsigned int a2, ControlClass * aP2, int a4)
{
}
// 0x4a57b0
int Dial8Class::GetValue()
{
    return {}; // TODO stub - G42 return-sync (void->virtual int)
}
// 0x4a59a0
void Dial8Class::QueryInterface(unsigned int * Block, char a2)
{
}
// 0x4a71a0
void DiskLaserClass::Fire( int a2, InfantryClass * aP2, DiskLaserClass * aP3, DiskLaserClass * aP4)
{
}
// 0x4a7340
void DiskLaserClass::Update()
{
}
// 0x4a7900
void DiskLaserClass::PointerGotInvalid( AbstractClass * aP1)
{
}
// 0x4a7b80
void DiskLaserClass::Stat( AbstractClass * aP1)
{
}
// 0x48dd50
int DiskSpace::CheckAvailable()
{
    return 0; // TODO stub - quarantined G42 T9 (helper; truth = .omo/ida_cache/func_0x00048DD50.json)
}
// 0x510970
void DistributionVector_BuildingType::Construct( int a2, unsigned int * a3)
{
}
// 0x4129c0
void DynamicArray::AddFromList( int a2)
{
}
// 0x6249a0
void DynamicArray::Resize(int *a1, unsigned int *aP2)
{
}
// 0x625440
int DynamicArray::ShrinkCapacity()
{
    return 0; // TODO stub - quarantined G42 T9 (voidret; truth = .omo/ida_cache/func_0x000625440.json)
}
// 0x7acd60
void DynamicArray::Remove( int a2)
{
}
// 0x7ad9d0
int DynamicArray::Grow()
{
    return 0; // TODO stub - quarantined G42 T9 (voidret; truth = .omo/ida_cache/func_0x0007AD9D0.json)
}
// 0x7aca00
void DynamicClass::Insert( HashTable * aP1, IUnknown * aP2)
{
}
// 0x7ace30
void DynamicStringArray::Get( ObjectClass * aP1, int a3)
{
}
// 0x628070
void DynamicVectorArray::Constructor( int a2, int a3, int a4)
{
}
// 0x46f5e0
int ErrorCode::Map()
{
  if ( this )
    return this != (ErrorCode *)1 ? -1 : 1042;
  else
    return 1041; /*0x46f5e6*/
}
// 0x7d2f41
void Exception::Destructor()
{
}
// 0x4c85e0
int ExceptionHandler::GenerateReport()
{
    return 0; // TODO stub - quarantined G42 T9 (helper; truth = .omo/ida_cache/func_0x0004C85E0.json)
}
// 0x434110
void Field::Int_Set(int aP1)
{
}
// 0x420270
void FractalNoise::Release(CCINIClass * aP0)
{
}
// 0x41c430
void Function::Method_41C430()
{
}
// 0x424ca0
void Function::Method_424CA0(int a2)
{
}
// 0x46b260
void Function::Method_46B260( int a2)
{
}
// 0x4b4d60
int Function::Method_4B4D60()
{
  int result; // eax

  result = *(unsigned int *)((unsigned char *)(this) + 0x0); /*0x4b4d60*/
  if ( *(unsigned int *)((unsigned char *)(this) + 0x0) ) /*0x4b4d60*/
    return (*(int (**)(int))(*(unsigned int *)result + 8))(result); /*0x4b4d69*/
  return result; /*0x4b4d6c*/
}
// 0x6342d0
void Function::Method_6342D0( int a2)
{
}
// 0x4e5ac0
wchar_t * GDlg::LoadLetterStrings()  // G42 sig-sync: returns CSF string ptr
{
  wchar_t *result; // eax

  dword_8B3FC0 = (int)GetStringCSF((wchar_t *)L"A", 0, g_Str_File_GDlgSupp_cpp, 1079); /*0x4e5ae7*/
  dword_8B3FCC = (int)GetStringCSF((wchar_t *)L"B", 0, g_Str_File_GDlgSupp_cpp, 1080); /*0x4e5b02*/
  dword_8B3FD8 = (int)GetStringCSF((wchar_t *)L"C", 0, g_Str_File_GDlgSupp_cpp, 1081); /*0x4e5b1d*/
  result = (wchar_t *)GetStringCSF((wchar_t *)L"D", 0, g_Str_File_GDlgSupp_cpp, 1082); /*0x4e5b22*/
  dword_8B3FE4 = (int)result; /*0x4e5b27*/
  dword_8B3FF0 = (int)a0_0; /*0x4e5b2c*/
  return result; /*0x4e5b36*/
}
// 0x4e2580
int GaugeClass::SetValue( int a2)
{
    return {}; // TODO stub - G42 return-sync (void->virtual int)
}
// 0x4e25a0
void GaugeClass::GetValue( SliderClass * aP1)
{
}
// 0x4e25d0
void GaugeClass::GetRange( int a2)
{
}
// 0x4e2650
void GaugeClass::SetColor( int a2)
{
}
// 0x4e29a0
void GaugeClass::SetRange()
{
}
// 0x40cc10
void GenericVector::StubReturnFalse()
{
}
// 0x40ce50
void GenericVector::Resize( int a2, unsigned int * a3)
{
}
// 0x50ea90
void GenericVector::Resize2( int a2, unsigned int * a3)
{
}
// 0x422b20
int GlobalArray::FindString()
{
    return 0; // TODO stub - quarantined G42 T9 (voidret; truth = .omo/ida_cache/func_0x000422B20.json)
}
// 0x5f7640
void GlobalInit::RegisterSingleton(int a1)
{
}
// 0x71de40
void GlobalInit::SingletonGetter( int a2)
{
}
// 0x61e700
void GroupLabel::WndProc()
{
}
// 0x759540
void HVAAnimation::LoadFromFile( int a2)
{
}
// 0x759670
void HVAAnimation::ParseFrames( int a2, void * a3, unsigned int a4)
{
}
// 0x5ad870
void Heap::SiftDown( int a2)
{
}
// 0x5654a0
void HexCoord::Convert( IUnknown * aP1, IUnknown * aP2)
{
}
// 0x767c10
void History_WorldDominationTour::QueryInterface( char a2)
{
}
// 0x4016f0
void IDXContainer::LoadSample(int a1, int a2)
{
}
// 0x49e8e0
int INISectionList::Constructor()
{
    return {}; // TODO stub - G42 return-sync (void->virtual int)
}
// 0x7c89f2
void ImageList::DragEnter(HWND hwndLock, int x, int y)
{
}
// 0x7c89f8
void ImageList::BeginDrag(HIMAGELIST himlTrack, int iTrack, int dxHotspot, int dyHotspot)
{
}
// 0x7c89fe
void ImageList::Destroy(HIMAGELIST himl)
{
}
// 0x7c8a04
void ImageList::EndDrag()
{
}
// 0x7c8a0a
void ImageList::DragMove(int x, int y)
{
}
// 0x645c30
void Int4::Set(int aP1, int aP2, int aP3, int a5)
{
}
// 0x645c50
int Int4::Set2(  // G42 sig-sync: hpp anchor declares int
 int a2, int a3, int a4, int a5)
{
}
// 0x517310
void Int64::Equal( IUnknown * aP1)
{
}
// 0x477b10
void IntDynamicVector::QueryInterface(unsigned int * Block, char a2)
{
}
// 0x717bd0
void IntDynamicVector::Construct( ObjectTypeClass * aP1)
{
}
// 0x477b60
void IntVector::Copy( void * aP1)  // G42: VectorClass->void* (template needs args)
{
}
// 0x49f9d0
void IntVector::Destructor()
{
}
// 0x69adf0
void IsRandMap::Sed()
{
}
// 0x69ae70
int IsRandMap::Sed2()
{
  return _strcmpi((char *)this + 1704, (const char *)&stru_82BA00) == 0; /*0x69ae89*/
}
// 0x52aec0
void KeyValuePair::Init( INIClass * aP1)
{
}
// 0x41cef0
void KeywordClass::FindOrCreate(ObjectClass * Source)
{
}
// 0x524cb0
void KeywordType::FindOrCreate2(ObjectClass * Source)
{
}
// 0x5520a0
void LCW::Compress( BombClass * aP1, signed int Size)
{
}
// 0x552490
void LCW::DecompressReader( BombClass * aP1, signed int Size)
{
}
// 0x55c7c0
void LCW::Decompress( CCINIClass * aP1, signed int Size)
{
}
// 0x551ff0
void LCWPipe::Constructor( int a2, int a3)
{
}
void LCWPipe::Destructor()
{
}

// 0x5522d0
void LCWPipe_Destru::AddRef()
{
}
// 0x552390
void LCWPipe_Destru::QueryInterface(int * Block, char a2)
{
}
// 0x5523e0
void LCWStraw::Constructor( int a2, int a3)
{
}
void LCWStraw::Destructor()
{
}

// 0x5525f0
void LCWStraw_Destru::QueryInterface(int * Block, char a2)
{
}
// 0x55c2b0
void LZOPipe::Constructor( int a2, TechnoTypeClass * aP2)
{
}
// 0x55c310
void LZOPipe::Destructor()
{
}
// 0x55c5e0
void LZOPipe_Destru::AddRef()
{
}
// 0x55c6d0
void LZOPipe_Destru::QueryInterface(int * Block, char a2)
{
}
// 0x55c720
void LZOStraw::Constructor( int a2, int a3)
{
}
// 0x55c780
void LZOStraw::Destructor()
{
}
// 0x55c990
void LZOStraw_Destru::QueryInterface(int * Block, char a2)
{
}
// 0x46fa20
void Lobby::UpdateReadyIcons(HWND hDlg)
{
}
// 0x46fac0
void Lobby::SetupAllFactionSlots()
{
}
// 0x46fb50
void Lobby::EnableStartButton(HWND hDlg)
{
}
// 0x4e4820
void Lobby::FillPlayerFactions(HWND hDlg)
{
}
// 0x4e5310
void Lobby::InvalidateFactionCombos(HWND hDlg)
{
}
// 0x4a8d50
int MIXClass::CopyHeader( IUnknown * aP1)
{
    return {}; // TODO stub - G42 return-sync (void->virtual int)
}
// 0x5c9470
wchar_t ** MPCombatTeam::Constructor()
{
    return {}; // TODO stub - G42 return-sync (void->virtual wchar_t **)
}
// 0x5cae10
void MPCombatTeam::MPTeam()
{
}
// 0x5caeb0
void MPCombatTeam::Constructor2()
{
}
// 0x5d8d10
LRESULT MPCombatTeam::AddToList( MultiplayerGameMode * aP1)
{
    return {}; // TODO stub - G42 return-sync (void->virtual LRESULT)
}
// 0x5c9b10
void MPScore::DlgProc()
{
}
// 0x5cb840
void MSAnim::GetField( unsigned int a2)
{
    // TODO stub - quarantined G42 T9 (prior-epoch raw dump: def/decl arity mismatch; truth = .omo/ida_cache/func_0x0005CB840.json)
}
// 0x5cb860
void MSAnim::SetField( unsigned int a2)
{
}
// 0x5cc6a0
void MSAnim::Reset( int a2)
{
}
// 0x5cc850
void MSBinkAnim::Pause( unsigned int * a2)
{
}
// 0x5cc880
int MSBinkAnim::Stop()
{
    return {}; // TODO stub - G42 return-sync (void->virtual int)
}
// 0x5cc8a0
int MSBinkAnim::Load( int a2, unsigned int * a3)
{
    return {}; // TODO stub - G42 return-sync (int->virtual int)
}
// 0x5cc970
void MSBinkAnim::Play( int a2, int a3)
{
}
// 0x5cec70
void MSBinkAnim::QueryInterface(BinkMovie ** Block, char a2)
{
}
// 0x5cd330
void MSBitPrintAnim::Construct( const wchar_t ** a1, MSAnim * aP2, MPCooperative * aP3)
{
}
// 0x5cd3d0
void MSBitPrintAnim::Update( unsigned int * a2)
{
}
// 0x5cd400
void MSBitPrintAnim::Stub()
{
}
// 0x5cd410
void MSBitPrintAnim::SetText( int a2, unsigned int * a3)
{
}
// 0x5cd4d0
void MSBitPrintAnim::Draw( int a2, int * a3)
{
}
// 0x5cf8e0
void MSChoiceClass::LoadFromINI(unsigned int *arg0, const char **aP2)
{
}
// 0x5d0290
void MSChoiceClass::DeleteAndZero( ObjectClass * aP1)
{
}
// 0x5ae4c0
void MSEngine_Destru::CheckStringNotEmpty()
{
}
// 0x5ae590
void MSEngine_Destru::StubReturnFalse(int a1)
{
}
// 0x5ae5a0
void MSEngine_Destru::DestroyComposite( char a2)
{
}
// 0x5d26f0
void MSEngine_Destru::Release()
{
}
// 0x5d2700
void MSEngine_Destru::QueryInterface(unsigned int * Block, char a2)
{
}
// 0x5d2e30
void MSFont::Constructor_MSFont()
{
}
// 0x5d3170
void MSFont::Release( int16_t * a2)
{
}
// 0x5d31d0
char MSFont::AddRef(uint8_t szSrc)
{
    return {}; // TODO stub - G42 return-sync (char->virtual char)
}
// 0x5d3250
void MSFont::Create( int * a2, uint8_t szSrc, int a4, int a5, int a6, int a7)
{
    // TODO stub - quarantined G42 T9 (prior-epoch raw dump: def/decl arity mismatch; truth = .omo/ida_cache/func_0x0005D3250.json)
}
// 0x5d3330
short MSFont::ddtor(int a2, unsigned short *a3, int a4, int a5, int a6)
{
    return {}; // TODO stub - G42 return-sync (short->virtual short)
}
// 0x5cb880
int MSOverlayAnim::Load( int a2, int * a3)
{
    return {}; // TODO stub - G42 return-sync (int->virtual int)
}
// 0x5cbb80
void MSOverlayAnim::Draw( int a2, int * a3)
{
}
// 0x5cbcb0
void MSOverlayAnim::Update( int * a2)
{
}
// 0x5cc250
void MSOverlayAnim::Init( ObjectClass * aP1, int a3, int a4, int a5, int a6, MSShapeAnim * aP6, char a8, int a9, char a10)
{
}
// 0x5ceac0
char MSOverlayAnim::AddRef( char a2)
{
    return {}; // TODO stub - G42 return-sync (char->virtual char)
}
// 0x5ce640
void MSPCXAnim::Construct( ObjectClass * aP1, MSAnim * aP2, unsigned int * a3, char a5)
{
}
// 0x5ce7d0
int MSPCXAnim::Load( unsigned int * a2, unsigned int * a3)
{
    return {}; // TODO stub - G42 return-sync (int->virtual int)
}
// 0x5ce8c0
void MSPCXAnim::Draw( int * a2, int * a3)
{
}
// 0x5cea40
void MSPCXAnim::SetPalette( int a2)
{
}
// 0x5cea80
void MSPCXAnim::GetFrame( unsigned int * a2)
{
}
// 0x5cdc50
void MSPrintAnim::SetText( int a2, unsigned int * a3)
{
}
// 0x5cdee0
void MSPrintAnim::Draw( int a2, int * a3)
{
}
// 0x5ce2b0
void MSPrintAnim::Update( unsigned int * a2)
{
}
// 0x5ce300
void MSPrintAnim::Clear()
{
}
// 0x5ced40
void MSPrintAnim::QueryInterface(void ** Block, char a2)
{
}
// 0x76ebe0
void MSSfxClass::FindByName( ObjectClass * aP1)
{
}
// 0x5cb6d0
void MSShapeAnim::Constructor( MSShapeAnim * aP1, MSShapeAnim * aP2, int a4, MSShapeAnim * aP4, int a6, MSShapeAnim * aP6, MSShapeAnim * aP7)
{
}
// 0x5cebd0
void MSShapeAnim::Destruct(unsigned int * Block, char a2)
{
}
// 0x5cca20
void MSVQAnim::Construct( char ** a2, int a3, int a4, unsigned int * a5, char a6)
{
}
// 0x5ccc30
void MSVQAnim::ConstructMSVQAnimHidden(char **aP1, int *aP2, int aP3, char aP3a)
{
}
// 0x5cce90
int MSVQAnim::Load( int a2, unsigned int * a3)
{
    return {}; // TODO stub - G42 return-sync (int->virtual int)
}
// 0x5cd0e0
void MSVQAnim::Play( int a2, int * a3)
{
}
// 0x5cd240
void MSVQAnim::Stop( int a2)
{
}
// 0x5c9430
void Megawealth::ProcessTick()
{
}
// 0x5c9440
void Megawealth::QueryInterface(unsigned int * Block, char a2)
{
}
// 0x753c70
unsigned int * Miles::DriverGet()  // G42 sig-sync: returns &dword_B2D928
{
  return &dword_B2D928; /*0x753c75*/
}
// 0x641140
void MiniMap::Render()
{
}
// 0x6418b0
void MiniMap::SavePreviewToINI( char * a2)
{
}
// 0x5c23b0
void MovieClass::ReadConfig(HWND aP1, int nIDDlgItem)
{
}
// 0x5c3ec0
HWND MovieClass::Create()
{
    return {}; // TODO stub - G42 return-sync (void->HWND)
}
// 0x759940
void MovieClass::RenderLoop( int a2, char a3)
{
}
// 0x759f70
void MovieClass::GetWidth()
{
}
// 0x759f80
void MovieClass::GetHeight()
{
}
// 0x5bff00
void MovieContext::Cleanup()
{
}
// 0x5ef0b0
void MultiMissionVector::Constructor( int a2, int a3)
{
}
// 0x64dea0
void Multiplay::LogToSYNC_NOMPDEBUG()
{
}

// 0x4cb700
void NetMessage::Pack4(char * Destination, RandomStruct * aP1, int a3)
{
}
// 0x4cb830
void NetMessage::Pack(char * Destination, char * Source, IUnknown * aP2, IUnknown * aP3)
{
}
// 0x43a540
void NeuronClass::Fire(AbstractClass * aP0, int aP1)
{
}
// 0x43a5b0
void NeuronClass::Update(TechnoTypeClass * aP0, int * a1, int aP2)
{
}
// 0x43a9a0
int NeuronClass::StubReturn60()
{
  return 60; /*0x43a9a5*/
}
// 0x43a9b0
int NeuronClass::StubReturn56()
{
  return 56; /*0x43a9b5*/
}
// 0x4f3b10
void NullGuard::Call( ObjectClass * aP1)
{
}
// 0x5d3a40
int ObjectManager::InitMessageList()
{
    return 0; // TODO stub - quarantined G42 T9 (MessageListClass::Init 12-arg static-style call on
    // undefined type; truth = .omo/ida_cache/func_0x005D3A40.json)
}
// 0x697840
void ObjectManager::CleanupArrays()
{
}
// 0x481180
void ObjectPlacement::CalcPosition( int * a1, IUnknown * aP2, char a4, char a5, char a6)
{
}
// 0x4aca10
void ObjectPlacement::CalcPosition_Wrapper(MouseClass * aP0, IUnknown * aP1, char a3)
{
}
// 0x6cf240
void ObjectPtr::RegisterForTracking(SwizzleManagerClass * aP0, MouseClass * aP1)
{
}
// 0x40cd10
void ObjectVector::Release( int a2, unsigned int * a3)
{
}
// 0x40cdc0
void ObjectVector::ddtor()
{
}
// 0x40cdf0
void ObjectVector::Add( unsigned int * a2)
{
}
// 0x40ce30
void ObjectVector::Remove( int a2)
{
}
// 0x40cf30
void ObjectVector::QueryInterface(unsigned int * Block, char a2)
{
}
// 0x5d6890
void ObserverClass::FindStartingCell(unsigned int * a1, int a2, int a3, int a4)
{
}
// 0x4f1aa0
void OptionQueue::PushEntry( IUnknown * aP1)
{
}
// 0x71af20
void OreManagerClass::AssignMinerToRefinery( unsigned int * a2)
{
}
// 0x624130
void OwnerDrawControl::InitVtable()
{
}
// 0x633050
void PKStrawClass::Initialize( int a2, Straw * aP2)
{
}
// 0x6330c0
void PKStrawClass::RelayBlowfishKey( int a2)
{
}
// 0x633110
void PKStrawClass::SetSource( int a2)
{
}
// 0x48b570
void PacketQueue::ExtractEntry( void * a2, unsigned int * a3, int a4, void * a5, unsigned int * a6, unsigned short * a7)
{
}
// 0x48b890
void PacketQueue::ReleaseEntry(void *a1, unsigned int *a2, int aP3, void *a4, unsigned int *a5)
{
}
// 0x5355d0
int Performance::Profile()
{
    return 0; // TODO stub - quarantined G42 T9 (helper; truth = .omo/ida_cache/func_0x0005355D0.json)
}
// 0x5cafc0
int Performance::MeasureTicks()
{
    return 0; // TODO stub - quarantined G42 T9 (voidret; truth = .omo/ida_cache/func_0x0005CAFC0.json)
}
// 0x631060
void PhoneEditor::PopulateList()
{
}
// 0x55af60
int PingPongBuffer::GetWriteOffset()
{
    return 0; // TODO stub - quarantined G42 T9 (voidret; truth = .omo/ida_cache/func_0x00055AF60.json)
}
// 0x4aec80
void Pipe::QueryInterface(int * Block, char a2)
{
}
// 0x631c80
void Pipe::Dtor()
{
}
// 0x631cc0
void Pipe::SetDelegate( int a2)
{
}
// 0x7b7d80
bool Pipe::GetField()
{
  return wcstol(*(const wchar_t **)((unsigned char *)(this) + 0x0), 0, 10); /*0x7b7d8f*/
}
// 0x63a230
void PlanManager::Notify()
{
}
// 0x63f850
int PowerBar::CalcFill()
{
    return 0; // TODO stub - quarantined G42 T9 (helper; truth = .omo/ida_cache/func_0x00063F850.json)
}
// 0x63f960
void PowerBar::ComputeFill(PowerClass * aP0, ObjectClass * aP1, ObjectClass * aP2)
{
}
// 0x641ee0
void PreviewClass::ReadPreview(char *Source)
{
}
// 0x689d30
void PreviewClass::RenderMapPreview( CCINIClass * aP1)
{
}
// 0x5d4400
void PriQueue::GetItemPtr()
{
}
// 0x6d4b50
void PrintTimerOnTactical::Start(int ecx0, int a2, int a3, wchar_t * Format, unsigned int * a5, bool * a6)
{
}
// 0x5ac960
int PriorityQueue::Pop()
{
    return 0; // TODO stub - quarantined G42 T9 (voidret; truth = .omo/ida_cache/func_0x0005AC960.json)
}
// 0x5d1c20
void PriorityQueue::Add(int aP1)
{
}
// 0x4c9ea0
void ProductionClass::StartTimer( char a2)
{
}
// 0x4ca1a0
void ProductionQueue::CompleteOrCancel()
{
}
// 0x659ac0
void ProjectileTrail::ComputeRenderData()
{
}
// 0x433c70
void Property::Set(int16_t aP1)
{
}
// 0x726910
void Property::GetField11()
{
}
// 0x6d09c0
void PushCommandClass::Execute(unsigned int * a1, int a2)
{
}
// 0x4a51f0
void RateScaler::Init( double a2)
{
}
// 0x4737f0
void ReinforcementClass::CreateObject()
{
}
// 0x4cb890
int ResultNode::Init()
{
    return {}; // TODO stub - G42 return-sync (int->virtual int)
}
// 0x625ab0
void ResultNode::CleanupList()
{
}
// 0x642c20
int SHPClass::Load(char *Source, char *aP2, int aP3)
{
    return {}; // TODO stub - G42 return-sync (int->virtual int)
}
// 0x5c0eb0
void SafeDelete::Conditional(int a1, int a2, void * Block, int a4, int16_t a5, int a6, int a7)
{
}
// 0x7b7040
int SafeDelete::Ptr()
{
  int result; // eax

  result = *(unsigned int *)((unsigned char *)(this) + 0x0); /*0x7b7043*/
  if ( *(unsigned int *)((unsigned char *)(this) + 0x0) ) /*0x7b7043*/
    RA2_OPDEL(*(void **)((unsigned char *)(this) + 0x0)); /*0x7b704a*/
  *(unsigned int *)((unsigned char *)(this) + 0x0) = 0; /*0x7b7052*/
  return result; /*0x7b7058*/
}
// 0x5ac340
void Scalar::Dtor(void ** Block, char a2)
{
}
// 0x7ad310
void ScalarDtor::DeleteAndZero(void ** Block, char a2)
{
}
// 0x510780
void ScoutVector::Construct( int a2, int a3)
{
}
// 0x660b80
int ScriptActionQueue::PushNext()
{
  int result; // eax

  dword_B04D88 = (dword_B04D88 + 1) % 8; /*0x660b92*/
  result = dword_B04D88; /*0x660b91*/
  ((unsigned int *)&dword_B04D48)[dword_B04D88] = *(unsigned int *)((unsigned char *)(this) + 0x0); /*0x660b99*/
  dword_B04DD8 = result; /*0x660ba0*/
  return result; /*0x660ba5*/
}
// 0x63eb80
void ScriptActionVector::PushBack( DynamicVector * aP1)
{
}
// 0x6378b0
void ScriptQueue::PushEntry()
{
}
// 0x774950
void SerialPort::Close()
{
}
// 0x69de00
void ShapeButton::SetShape(int a2, int a3, int a4)
{
}
// 0x69deb0
void ShapeButton::Draw(int a2)
{
}
// 0x69dcf0
int ShapeButtonClass::Init()
{
    return {}; // TODO stub - G42 return-sync (void->virtual int)
}
// 0x69dd30
void ShapeButtonClass::Constructor( ControlClass * aP1, ShapeButtonClass * aP2, ShapeButtonClass * aP3, ControlClass * aP4, int a6, int a7, char a8)
{
}
// 0x69ddc0
void ShapeButtonClass::Destructor()
{
}
// 0x4b57f0
void ShapeButtonClass_Destru::QueryInterface(void * Block, char a2)
{
}
// 0x72fbc0
int Sides::MixFileYuriFiles3()
{
    return 0; // TODO stub - quarantined G42 T9 (voidret; truth = .omo/ida_cache/func_0x00072FBC0.json)
}
// 0x624110
int SimpleDialogControl::Constructor()
{
    return {}; // TODO stub - G42 return-sync (void->virtual int)
}
// 0x6b1ab0
void SlaveControlVector::Constructor( int a2, int a3)
{
}
// 0x67c280
void SmudgeTypeList::Copy( CCINIClass * aP1)
{
}
// 0x67aeb0
void SmudgeTypeVector::Release( int a2, unsigned int * a3)
{
}
// 0x67af90
void SmudgeTypeVector::AddSmudge( unsigned int * a2)
{
}
// 0x67afd0
void SmudgeTypeVector::Remove( int a2)
{
}
// 0x67aff0
void SmudgeTypeVector::Construct( int a2, int a3)
{
}
// 0x67b100
void SmudgeTypeVector::Add( CCINIClass * aP1)
{
}
// 0x42d570
void SortedArray::GetIndex( int a2)
{
}
// 0x52b170
void SortedArray::Find( CCINIClass * aP1)
{
}
// 0x52b210
void SortedArray::BinarySearch2( Color * aP1)
{
}
// 0x52b430
void SortedArray::FindValue( INIClass * aP1)
{
}
// 0x52b600
void SortedArray::CheckCache( unsigned int * a2)
{
}
// 0x7107e0
void SortedStateVector::BinarySearch( IUnknown * aP1)
{
}
// 0x55f6e0
void SortedVector::BinarySearch( int * a2)
{
}
// 0x7314c0
int SquadClass::SelectAllMembers()
{
    return 0; // TODO stub - quarantined G42 T9 (helper; truth = .omo/ida_cache/func_0x0007314C0.json)
}
// 0x731840
void SquadClass::ProcessMove()
{
}
// 0x4e4230
int StartCombo::IDToIndex()
{
    return 0; // TODO stub - quarantined G42 T9 (voidret; truth = .omo/ida_cache/func_0x0004E4230.json)
}
// 0x510690
void StartingTechnoVector::Construct( int a2, int a3)
{
}
// 0x76f6c0
void State_WorldDominationTour::QueryInterface( char a2)
{
}
// 0x43ae10
void StaticButtonClass::ReleaseBuffer( unsigned int * a2)
{
}
// 0x6c6640
void StaticButtonClass::SetText( ControlClass * aP1)
{
}
// 0x6c6680
void StaticButtonClass::Draw( DropListClass * aP1, char a3)
{
}
// 0x6c6740
void StaticButtonClass::HitTest()
{
}
// 0x6c67f0
void StaticButtonClass::OnClick( size_t a2)
{
}
// 0x7af2a0
int StaticString::Factory()
{
    return 0; // TODO stub - quarantined G42 T9 (helper; truth = .omo/ida_cache/func_0x0007AF2A0.json)
}
// 0x4aec10
void Straw::QueryInterface(int * Block, char a2)
{
}
// 0x6c9850
void Straw::Dtor()
{
}
// 0x581f90
void Subzone::BuildGraph( IUnknown * aP2)
{
}
// 0x589100
void Subzone::Constructor( int a2, int a3)
{
}
// 0x58a500
void Subzone::CopyDataFrom( int a2)
{
}
// 0x40b070
void SubzoneConnectionVector::Destruct(unsigned int * Block, char a2)
{
}
// 0x588d60
void SubzoneConnectionVector::ClearAndFree()
{
}
// 0x589c10
void SubzoneConnectionVector::FindByCoord( int a2)
{
}
// 0x58b070
void SubzoneHashVector::Construct( int a2, int a3)
{
}
// 0x58a5b0
void SubzoneTrackingVector::Destruct(unsigned int * Block, char a2)
{
}
// 0x55aac0
void SwizzleManager::SaveLoad(int * a1, int * a2)
{
}
// 0x6cf230
void SwizzleManager::ConvertWrapper(SwizzleManagerClass * aP0)
{
}
// 0x6cf0f0
void SwizzleManagerClass::Register()
{
}
// 0x6cf2c0
void SwizzleManagerClass::Here_I_Am(SwizzleManagerClass * aP0, AbstractClass * aP1, AbstractClass * aP2)
{
}
// 0x6cf350
void SwizzleManagerClass::ConvertNodes()
{
}
// 0x6cf410
void SwizzleManagerClass::Clear(int a1, unsigned int * a2)
{
}
// 0x6cf430
void SwizzleManagerClass::Process(SwizzleManagerClass * aP0, const void * a1, unsigned int * a2)
{
}
// 0x6234b0
void SymbolTable::Rebuild( int ** a2)
{
}
// 0x624530
void SymbolTable::Insert( unsigned int * a2, int *** Block)
{
}
// 0x7315a0
void TAction::CenterOnStartCoords()
{
}
// 0x6c5c40
int TClassFactory_AITriggerTypeClass::AddRef()
{
  int v2; // [esp+4h] [ebp+4h]

  return InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x6c5c4e*/
}
// 0x6c5c60
int TClassFactory_AITriggerTypeClass::GetClassName()
{
  LONG v1; // esi
  volatile LONG *Block; // [esp+Ch] [ebp+4h]

  v1 = InterlockedDecrement(Block + 1); /*0x6c5c70*/
  if ( !v1 ) /*0x6c5c74*/
    RA2_OPDEL((void *)Block); /*0x6c5c77*/
  return v1; /*0x6c5c81*/
}
// 0x6c5c90
int TClassFactory_AITriggerTypeClass::GetClassIdentifier()
{
    return 0; // TODO stub - quarantined G42 T9 (voidret; truth = .omo/ida_cache/func_0x0006C5C90.json)
}
// 0x6c5d10
int TClassFactory_AITriggerTypeClass::GetSize()
{
    return 0; // TODO stub - quarantined G42 T9 (phantom params a2; truth = .omo/ida_cache/func_0x0006C5D10.json)
}
// 0x6c36c0
int TClassFactory_AircraftClass::AddRef()
{
  int v2; // [esp+4h] [ebp+4h]

  return InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x6c36ce*/
}
// 0x6c36e0
int TClassFactory_AircraftClass::GetClassName()
{
  LONG v1; // esi
  volatile LONG *Block; // [esp+Ch] [ebp+4h]

  v1 = InterlockedDecrement(Block + 1); /*0x6c36f0*/
  if ( !v1 ) /*0x6c36f4*/
    RA2_OPDEL((void *)Block); /*0x6c36f7*/
  return v1; /*0x6c3701*/
}
// 0x6c3710
int TClassFactory_AircraftClass::ddtor()
{
    return 0; // TODO stub - quarantined G42 T9 (voidret; truth = .omo/ida_cache/func_0x0006C3710.json)
}
// 0x6c3790
int TClassFactory_AircraftClass::GetSize()
{
    return 0; // TODO stub - quarantined G42 T9 (phantom params a2; truth = .omo/ida_cache/func_0x0006C3790.json)
}
// 0x6c2ac0
int TClassFactory_AircraftTypeClass::AddRef()
{
  int v2; // [esp+4h] [ebp+4h]

  return InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x6c2ace*/
}
// 0x6c2ae0
int TClassFactory_AircraftTypeClass::GetClassName()
{
  LONG v1; // esi
  volatile LONG *Block; // [esp+Ch] [ebp+4h]

  v1 = InterlockedDecrement(Block + 1); /*0x6c2af0*/
  if ( !v1 ) /*0x6c2af4*/
    RA2_OPDEL((void *)Block); /*0x6c2af7*/
  return v1; /*0x6c2b01*/
}
// 0x6c2b10
int TClassFactory_AircraftTypeClass::GetClassIdentifier()
{
    return 0; // TODO stub - quarantined G42 T9 (voidret; truth = .omo/ida_cache/func_0x0006C2B10.json)
}
// 0x6c2b90
int TClassFactory_AircraftTypeClass::GetSize()
{
    return 0; // TODO stub - quarantined G42 T9 (phantom params a2; truth = .omo/ida_cache/func_0x0006C2B90.json)
}
// 0x6c0840
int TClassFactory_AirstrikeClass::AddRef()
{
  int v2; // [esp+4h] [ebp+4h]

  return InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x6c084e*/
}
// 0x6c0860
int TClassFactory_AirstrikeClass::GetClassName()
{
  LONG v1; // esi
  volatile LONG *Block; // [esp+Ch] [ebp+4h]

  v1 = InterlockedDecrement(Block + 1); /*0x6c0870*/
  if ( !v1 ) /*0x6c0874*/
    RA2_OPDEL((void *)Block); /*0x6c0877*/
  return v1; /*0x6c0881*/
}
// 0x6c0890
void TClassFactory_AirstrikeClass::ddtor()
{
}
// 0x6c0910
int TClassFactory_AirstrikeClass::GetSize()
{
    return 0; // TODO stub - quarantined G42 T9 (phantom params a2; truth = .omo/ida_cache/func_0x0006C0910.json)
}
// 0x6c60c0
int TClassFactory_AlphaShapeClass::AddRef()
{
  int v2; // [esp+4h] [ebp+4h]

  return InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x6c60ce*/
}
// 0x6c60e0
int TClassFactory_AlphaShapeClass::GetClassName()
{
  LONG v1; // esi
  volatile LONG *Block; // [esp+Ch] [ebp+4h]

  v1 = InterlockedDecrement(Block + 1); /*0x6c60f0*/
  if ( !v1 ) /*0x6c60f4*/
    RA2_OPDEL((void *)Block); /*0x6c60f7*/
  return v1; /*0x6c6101*/
}
// 0x6c6110
int TClassFactory_AlphaShapeClass::ddtor()
{
    return 0; // TODO stub - quarantined G42 T9 (voidret; truth = .omo/ida_cache/func_0x0006C6110.json)
}
// 0x6c6190
int TClassFactory_AlphaShapeClass::GetSize()
{
    return 0; // TODO stub - quarantined G42 T9 (phantom params a2; truth = .omo/ida_cache/func_0x0006C6190.json)
}
// 0x6c3b40
int TClassFactory_AnimTypeClass::AddRef()
{
  int v2; // [esp+4h] [ebp+4h]

  return InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x6c3b4e*/
}
// 0x6c3b60
int TClassFactory_AnimTypeClass::GetClassName()
{
  LONG v1; // esi
  volatile LONG *Block; // [esp+Ch] [ebp+4h]

  v1 = InterlockedDecrement(Block + 1); /*0x6c3b70*/
  if ( !v1 ) /*0x6c3b74*/
    RA2_OPDEL((void *)Block); /*0x6c3b77*/
  return v1; /*0x6c3b81*/
}
// 0x6c3b90
int TClassFactory_AnimTypeClass::GetClassIdentifier()
{
    return 0; // TODO stub - quarantined G42 T9 (voidret; truth = .omo/ida_cache/func_0x0006C3B90.json)
}
// 0x6c3c10
int TClassFactory_AnimTypeClass::GetSize()
{
    return 0; // TODO stub - quarantined G42 T9 (phantom params a2; truth = .omo/ida_cache/func_0x0006C3C10.json)
}
// 0x6c1140
int TClassFactory_BombClass::AddRef()
{
  int v2; // [esp+4h] [ebp+4h]

  return InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x6c114e*/
}
// 0x6c1160
int TClassFactory_BombClass::GetClassName()
{
  LONG v1; // esi
  volatile LONG *Block; // [esp+Ch] [ebp+4h]

  v1 = InterlockedDecrement(Block + 1); /*0x6c1170*/
  if ( !v1 ) /*0x6c1174*/
    RA2_OPDEL((void *)Block); /*0x6c1177*/
  return v1; /*0x6c1181*/
}
// 0x6c1190
int TClassFactory_BombClass::ddtor()
{
    return 0; // TODO stub - quarantined G42 T9 (voidret; truth = .omo/ida_cache/func_0x0006C1190.json)
}
// 0x6c1210
int TClassFactory_BombClass::GetSize()
{
    return 0; // TODO stub - quarantined G42 T9 (phantom params a2; truth = .omo/ida_cache/func_0x0006C1210.json)
}
// 0x6c3540
int TClassFactory_BuildingClass::AddRef()
{
  int v2; // [esp+4h] [ebp+4h]

  return InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x6c354e*/
}
// 0x6c3560
int TClassFactory_BuildingClass::GetClassName()
{
  LONG v1; // esi
  volatile LONG *Block; // [esp+Ch] [ebp+4h]

  v1 = InterlockedDecrement(Block + 1); /*0x6c3570*/
  if ( !v1 ) /*0x6c3574*/
    RA2_OPDEL((void *)Block); /*0x6c3577*/
  return v1; /*0x6c3581*/
}
// 0x6c3590
int TClassFactory_BuildingClass::ddtor()
{
    return 0; // TODO stub - quarantined G42 T9 (voidret; truth = .omo/ida_cache/func_0x0006C3590.json)
}
// 0x6c3610
int TClassFactory_BuildingClass::GetSize()
{
    return 0; // TODO stub - quarantined G42 T9 (phantom params a2; truth = .omo/ida_cache/func_0x0006C3610.json)
}
// 0x6c03c0
int TClassFactory_BuildingLightClass::AddRef()
{
  int v2; // [esp+4h] [ebp+4h]

  return InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x6c03ce*/
}
// 0x6c03e0
int TClassFactory_BuildingLightClass::GetClassName()
{
  LONG v1; // esi
  volatile LONG *Block; // [esp+Ch] [ebp+4h]

  v1 = InterlockedDecrement(Block + 1); /*0x6c03f0*/
  if ( !v1 ) /*0x6c03f4*/
    RA2_OPDEL((void *)Block); /*0x6c03f7*/
  return v1; /*0x6c0401*/
}
// 0x6c0410
int TClassFactory_BuildingLightClass::ddtor()
{
    return 0; // TODO stub - quarantined G42 T9 (voidret; truth = .omo/ida_cache/func_0x0006C0410.json)
}
// 0x6c0490
int TClassFactory_BuildingLightClass::GetSize()
{
    return 0; // TODO stub - quarantined G42 T9 (phantom params a2; truth = .omo/ida_cache/func_0x0006C0490.json)
}
// 0x6c2940
int TClassFactory_BuildingTypeClass::AddRef()
{
  int v2; // [esp+4h] [ebp+4h]

  return InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x6c294e*/
}
// 0x6c2960
int TClassFactory_BuildingTypeClass::GetClassName()
{
  LONG v1; // esi
  volatile LONG *Block; // [esp+Ch] [ebp+4h]

  v1 = InterlockedDecrement(Block + 1); /*0x6c2970*/
  if ( !v1 ) /*0x6c2974*/
    RA2_OPDEL((void *)Block); /*0x6c2977*/
  return v1; /*0x6c2981*/
}
// 0x6c2990
int TClassFactory_BuildingTypeClass::GetClassIdentifier()
{
    return 0; // TODO stub - quarantined G42 T9 (voidret; truth = .omo/ida_cache/func_0x0006C2990.json)
}
// 0x6c2a10
int TClassFactory_BuildingTypeClass::GetSize()
{
    return 0; // TODO stub - quarantined G42 T9 (phantom params a2; truth = .omo/ida_cache/func_0x0006C2A10.json)
}
// 0x6c2dc0
int TClassFactory_BulletTypeClass::AddRef()
{
  int v2; // [esp+4h] [ebp+4h]

  return InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x6c2dce*/
}
// 0x6c2de0
int TClassFactory_BulletTypeClass::GetClassName()
{
  LONG v1; // esi
  volatile LONG *Block; // [esp+Ch] [ebp+4h]

  v1 = InterlockedDecrement(Block + 1); /*0x6c2df0*/
  if ( !v1 ) /*0x6c2df4*/
    RA2_OPDEL((void *)Block); /*0x6c2df7*/
  return v1; /*0x6c2e01*/
}
// 0x6c2e10
int TClassFactory_BulletTypeClass::GetClassIdentifier()
{
    return 0; // TODO stub - quarantined G42 T9 (voidret; truth = .omo/ida_cache/func_0x0006C2E10.json)
}
// 0x6c2e90
int TClassFactory_BulletTypeClass::GetSize()
{
    return 0; // TODO stub - quarantined G42 T9 (phantom params a2; truth = .omo/ida_cache/func_0x0006C2E90.json)
}
// 0x6c0cc0
int TClassFactory_CaptureManagerClass::AddRef()
{
  int v2; // [esp+4h] [ebp+4h]

  return InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x6c0cce*/
}
// 0x6c0ce0
int TClassFactory_CaptureManagerClass::GetClassName()
{
  LONG v1; // esi
  volatile LONG *Block; // [esp+Ch] [ebp+4h]

  v1 = InterlockedDecrement(Block + 1); /*0x6c0cf0*/
  if ( !v1 ) /*0x6c0cf4*/
    RA2_OPDEL((void *)Block); /*0x6c0cf7*/
  return v1; /*0x6c0d01*/
}
// 0x6c0d10
int TClassFactory_CaptureManagerClass::ddtor()
{
    return 0; // TODO stub - quarantined G42 T9 (voidret; truth = .omo/ida_cache/func_0x0006C0D10.json)
}
// 0x6c0d90
int TClassFactory_CaptureManagerClass::GetSize()
{
    return 0; // TODO stub - quarantined G42 T9 (phantom params a2; truth = .omo/ida_cache/func_0x0006C0D90.json)
}
// 0x6c0e40
int TClassFactory_DiskLaserClass::AddRef()
{
  int v2; // [esp+4h] [ebp+4h]

  return InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x6c0e4e*/
}
// 0x6c0e60
int TClassFactory_DiskLaserClass::GetClassName()
{
  LONG v1; // esi
  volatile LONG *Block; // [esp+Ch] [ebp+4h]

  v1 = InterlockedDecrement(Block + 1); /*0x6c0e70*/
  if ( !v1 ) /*0x6c0e74*/
    RA2_OPDEL((void *)Block); /*0x6c0e77*/
  return v1; /*0x6c0e81*/
}
// 0x6c0e90
int TClassFactory_DiskLaserClass::ddtor()
{
    return 0; // TODO stub - quarantined G42 T9 (voidret; truth = .omo/ida_cache/func_0x0006C0E90.json)
}
// 0x6c0f10
int TClassFactory_DiskLaserClass::GetSize()
{
    return 0; // TODO stub - quarantined G42 T9 (phantom params a2; truth = .omo/ida_cache/func_0x0006C0F10.json)
}
// 0x6c3fc0
int TClassFactory_DriveLocomotionClass::AddRef()
{
  int v2; // [esp+4h] [ebp+4h]

  return InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x6c3fce*/
}
// 0x6c3fe0
int TClassFactory_DriveLocomotionClass::GetClassName()
{
  LONG v1; // esi
  volatile LONG *Block; // [esp+Ch] [ebp+4h]

  v1 = InterlockedDecrement(Block + 1); /*0x6c3ff0*/
  if ( !v1 ) /*0x6c3ff4*/
    RA2_OPDEL((void *)Block); /*0x6c3ff7*/
  return v1; /*0x6c4001*/
}
// 0x6c4010
int TClassFactory_DriveLocomotionClass::ddtor()
{
    return 0; // TODO stub - quarantined G42 T9 (voidret; truth = .omo/ida_cache/func_0x0006C4010.json)
}
// 0x6c4090
int TClassFactory_DriveLocomotionClass::GetSize()
{
    return 0; // TODO stub - quarantined G42 T9 (phantom params a2; truth = .omo/ida_cache/func_0x0006C4090.json)
}
// 0x6c48c0
int TClassFactory_DropPodLocomotionClass::AddRef()
{
  int v2; // [esp+4h] [ebp+4h]

  return InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x6c48ce*/
}
// 0x6c48e0
int TClassFactory_DropPodLocomotionClass::GetClassName()
{
  LONG v1; // esi
  volatile LONG *Block; // [esp+Ch] [ebp+4h]

  v1 = InterlockedDecrement(Block + 1); /*0x6c48f0*/
  if ( !v1 ) /*0x6c48f4*/
    RA2_OPDEL((void *)Block); /*0x6c48f7*/
  return v1; /*0x6c4901*/
}
// 0x6c4910
int TClassFactory_DropPodLocomotionClass::ddtor()
{
    return 0; // TODO stub - quarantined G42 T9 (voidret; truth = .omo/ida_cache/func_0x0006C4910.json)
}
// 0x6c4990
int TClassFactory_DropPodLocomotionClass::GetSize()
{
    return 0; // TODO stub - quarantined G42 T9 (phantom params a2; truth = .omo/ida_cache/func_0x0006C4990.json)
}
// 0x6c51c0
int TClassFactory_FactoryClass::AddRef()
{
  int v2; // [esp+4h] [ebp+4h]

  return InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x6c51ce*/
}
// 0x6c51e0
int TClassFactory_FactoryClass::GetClassName()
{
  LONG v1; // esi
  volatile LONG *Block; // [esp+Ch] [ebp+4h]

  v1 = InterlockedDecrement(Block + 1); /*0x6c51f0*/
  if ( !v1 ) /*0x6c51f4*/
    RA2_OPDEL((void *)Block); /*0x6c51f7*/
  return v1; /*0x6c5201*/
}
// 0x6c5210
int TClassFactory_FactoryClass::ddtor()
{
    return 0; // TODO stub - quarantined G42 T9 (voidret; truth = .omo/ida_cache/func_0x0006C5210.json)
}
// 0x6c5290
int TClassFactory_FactoryClass::GetSize()
{
    return 0; // TODO stub - quarantined G42 T9 (phantom params a2; truth = .omo/ida_cache/func_0x0006C5290.json)
}
// 0x6c4a40
int TClassFactory_FlyLocomotionClass::AddRef()
{
  int v2; // [esp+4h] [ebp+4h]

  return InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x6c4a4e*/
}
// 0x6c4a60
int TClassFactory_FlyLocomotionClass::GetClassName()
{
  LONG v1; // esi
  volatile LONG *Block; // [esp+Ch] [ebp+4h]

  v1 = InterlockedDecrement(Block + 1); /*0x6c4a70*/
  if ( !v1 ) /*0x6c4a74*/
    RA2_OPDEL((void *)Block); /*0x6c4a77*/
  return v1; /*0x6c4a81*/
}
// 0x6c4a90
int TClassFactory_FlyLocomotionClass::ddtor()
{
    return 0; // TODO stub - quarantined G42 T9 (voidret; truth = .omo/ida_cache/func_0x0006C4A90.json)
}
// 0x6c4b10
int TClassFactory_FlyLocomotionClass::GetSize()
{
    return 0; // TODO stub - quarantined G42 T9 (phantom params a2; truth = .omo/ida_cache/func_0x0006C4B10.json)
}
// 0x6c5f40
int TClassFactory_FoggedObjectClass::AddRef()
{
  int v2; // [esp+4h] [ebp+4h]

  return InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x6c5f4e*/
}
// 0x6c5f60
int TClassFactory_FoggedObjectClass::GetClassName()
{
  LONG v1; // esi
  volatile LONG *Block; // [esp+Ch] [ebp+4h]

  v1 = InterlockedDecrement(Block + 1); /*0x6c5f70*/
  if ( !v1 ) /*0x6c5f74*/
    RA2_OPDEL((void *)Block); /*0x6c5f77*/
  return v1; /*0x6c5f81*/
}
// 0x6c5f90
int TClassFactory_FoggedObjectClass::ddtor()
{
    return 0; // TODO stub - quarantined G42 T9 (voidret; truth = .omo/ida_cache/func_0x0006C5F90.json)
}
// 0x6c6010
int TClassFactory_FoggedObjectClass::GetSize()
{
    return 0; // TODO stub - quarantined G42 T9 (phantom params a2; truth = .omo/ida_cache/func_0x0006C6010.json)
}
// 0x6c3e40
int TClassFactory_HouseClass::AddRef()
{
  int v2; // [esp+4h] [ebp+4h]

  return InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x6c3e4e*/
}
// 0x6c3e60
int TClassFactory_HouseClass::GetClassName()
{
  LONG v1; // esi
  volatile LONG *Block; // [esp+Ch] [ebp+4h]

  v1 = InterlockedDecrement(Block + 1); /*0x6c3e70*/
  if ( !v1 ) /*0x6c3e74*/
    RA2_OPDEL((void *)Block); /*0x6c3e77*/
  return v1; /*0x6c3e81*/
}
// 0x6c3e90
int TClassFactory_HouseClass::ddtor()
{
    return 0; // TODO stub - quarantined G42 T9 (helper; truth = .omo/ida_cache/func_0x0006C3E90.json)
}
// 0x6c3f10
int TClassFactory_HouseClass::GetSize()
{
    return 0; // TODO stub - quarantined G42 T9 (phantom params a2; truth = .omo/ida_cache/func_0x0006C3F10.json)
}
// 0x6c3cc0
int TClassFactory_HouseTypeClass::AddRef()
{
  int v2; // [esp+4h] [ebp+4h]

  return InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x6c3cce*/
}
// 0x6c3ce0
int TClassFactory_HouseTypeClass::GetClassName()
{
  LONG v1; // esi
  volatile LONG *Block; // [esp+Ch] [ebp+4h]

  v1 = InterlockedDecrement(Block + 1); /*0x6c3cf0*/
  if ( !v1 ) /*0x6c3cf4*/
    RA2_OPDEL((void *)Block); /*0x6c3cf7*/
  return v1; /*0x6c3d01*/
}
// 0x6c3d10
int TClassFactory_HouseTypeClass::GetClassIdentifier()
{
    return 0; // TODO stub - quarantined G42 T9 (voidret; truth = .omo/ida_cache/func_0x0006C3D10.json)
}
// 0x6c3d90
int TClassFactory_HouseTypeClass::GetSize()
{
    return 0; // TODO stub - quarantined G42 T9 (phantom params a2; truth = .omo/ida_cache/func_0x0006C3D90.json)
}
// 0x6c42c0
int TClassFactory_HoverLocomotionClass::AddRef()
{
  int v2; // [esp+4h] [ebp+4h]

  return InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x6c42ce*/
}
// 0x6c42e0
int TClassFactory_HoverLocomotionClass::GetClassName()
{
  LONG v1; // esi
  volatile LONG *Block; // [esp+Ch] [ebp+4h]

  v1 = InterlockedDecrement(Block + 1); /*0x6c42f0*/
  if ( !v1 ) /*0x6c42f4*/
    RA2_OPDEL((void *)Block); /*0x6c42f7*/
  return v1; /*0x6c4301*/
}
// 0x6c4310
int TClassFactory_HoverLocomotionClass::ddtor()
{
    return 0; // TODO stub - quarantined G42 T9 (voidret; truth = .omo/ida_cache/func_0x0006C4310.json)
}
// 0x6c4390
int TClassFactory_HoverLocomotionClass::GetSize()
{
    return 0; // TODO stub - quarantined G42 T9 (phantom params a2; truth = .omo/ida_cache/func_0x0006C4390.json)
}
// 0x6c3840
int TClassFactory_InfantryClass::AddRef()
{
  int v2; // [esp+4h] [ebp+4h]

  return InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x6c384e*/
}
// 0x6c3860
int TClassFactory_InfantryClass::GetClassName()
{
  LONG v1; // esi
  volatile LONG *Block; // [esp+Ch] [ebp+4h]

  v1 = InterlockedDecrement(Block + 1); /*0x6c3870*/
  if ( !v1 ) /*0x6c3874*/
    RA2_OPDEL((void *)Block); /*0x6c3877*/
  return v1; /*0x6c3881*/
}
// 0x6c3890
int TClassFactory_InfantryClass::ddtor()
{
    return 0; // TODO stub - quarantined G42 T9 (voidret; truth = .omo/ida_cache/func_0x0006C3890.json)
}
// 0x6c3910
int TClassFactory_InfantryClass::GetSize()
{
    return 0; // TODO stub - quarantined G42 T9 (phantom params a2; truth = .omo/ida_cache/func_0x0006C3910.json)
}
// 0x6c2c40
int TClassFactory_InfantryTypeClass::AddRef()
{
  int v2; // [esp+4h] [ebp+4h]

  return InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x6c2c4e*/
}
// 0x6c2c60
int TClassFactory_InfantryTypeClass::GetClassName()
{
  LONG v1; // esi
  volatile LONG *Block; // [esp+Ch] [ebp+4h]

  v1 = InterlockedDecrement(Block + 1); /*0x6c2c70*/
  if ( !v1 ) /*0x6c2c74*/
    RA2_OPDEL((void *)Block); /*0x6c2c77*/
  return v1; /*0x6c2c81*/
}
// 0x6c2c90
int TClassFactory_InfantryTypeClass::GetClassIdentifier()
{
    return 0; // TODO stub - quarantined G42 T9 (voidret; truth = .omo/ida_cache/func_0x0006C2C90.json)
}
// 0x6c2d10
int TClassFactory_InfantryTypeClass::GetSize()
{
    return 0; // TODO stub - quarantined G42 T9 (phantom params a2; truth = .omo/ida_cache/func_0x0006C2D10.json)
}
// 0x6c2f40
int TClassFactory_IsometricTileTypeClass::AddRef()
{
  int v2; // [esp+4h] [ebp+4h]

  return InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x6c2f4e*/
}
// 0x6c2f60
int TClassFactory_IsometricTileTypeClass::GetClassName()
{
  LONG v1; // esi
  volatile LONG *Block; // [esp+Ch] [ebp+4h]

  v1 = InterlockedDecrement(Block + 1); /*0x6c2f70*/
  if ( !v1 ) /*0x6c2f74*/
    RA2_OPDEL((void *)Block); /*0x6c2f77*/
  return v1; /*0x6c2f81*/
}
// 0x6c2f90
int TClassFactory_IsometricTileTypeClass::GetClassIdentifier()
{
    return 0; // TODO stub - quarantined G42 T9 (voidret; truth = .omo/ida_cache/func_0x0006C2F90.json)
}
// 0x6c3010
int TClassFactory_IsometricTileTypeClass::GetSize()
{
    return 0; // TODO stub - quarantined G42 T9 (phantom params a2; truth = .omo/ida_cache/func_0x0006C3010.json)
}
// 0x6c4140
int TClassFactory_JumpjetLocomotionClass::AddRef()
{
  int v2; // [esp+4h] [ebp+4h]

  return InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x6c414e*/
}
// 0x6c4160
int TClassFactory_JumpjetLocomotionClass::GetClassName()
{
  LONG v1; // esi
  volatile LONG *Block; // [esp+Ch] [ebp+4h]

  v1 = InterlockedDecrement(Block + 1); /*0x6c4170*/
  if ( !v1 ) /*0x6c4174*/
    RA2_OPDEL((void *)Block); /*0x6c4177*/
  return v1; /*0x6c4181*/
}
// 0x6c4190
int TClassFactory_JumpjetLocomotionClass::ddtor()
{
    return 0; // TODO stub - quarantined G42 T9 (voidret; truth = .omo/ida_cache/func_0x0006C4190.json)
}
// 0x6c4210
int TClassFactory_JumpjetLocomotionClass::GetSize()
{
    return 0; // TODO stub - quarantined G42 T9 (phantom params a2; truth = .omo/ida_cache/func_0x0006C4210.json)
}
// 0x6bfc40
int TClassFactory_LightSourceClass::AddRef()
{
  int v2; // [esp+4h] [ebp+4h]

  return InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x6bfc4e*/
}
// 0x6bfc60
int TClassFactory_LightSourceClass::GetClassName()
{
  LONG v1; // esi
  volatile LONG *Block; // [esp+Ch] [ebp+4h]

  v1 = InterlockedDecrement(Block + 1); /*0x6bfc70*/
  if ( !v1 ) /*0x6bfc74*/
    RA2_OPDEL((void *)Block); /*0x6bfc77*/
  return v1; /*0x6bfc81*/
}
// 0x6bfc90
int TClassFactory_LightSourceClass::ddtor()
{
    return 0; // TODO stub - quarantined G42 T9 (voidret; truth = .omo/ida_cache/func_0x0006BFC90.json)
}
// 0x6bfd10
int TClassFactory_LightSourceClass::GetSize()
{
    return 0; // TODO stub - quarantined G42 T9 (phantom params a2; truth = .omo/ida_cache/func_0x0006BFD10.json)
}
// 0x6c5dc0
int TClassFactory_NeuronClass::AddRef()
{
  int v2; // [esp+4h] [ebp+4h]

  return InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x6c5dce*/
}
// 0x6c5de0
int TClassFactory_NeuronClass::GetClassName()
{
  LONG v1; // esi
  volatile LONG *Block; // [esp+Ch] [ebp+4h]

  v1 = InterlockedDecrement(Block + 1); /*0x6c5df0*/
  if ( !v1 ) /*0x6c5df4*/
    RA2_OPDEL((void *)Block); /*0x6c5df7*/
  return v1; /*0x6c5e01*/
}
// 0x6c5e10
int TClassFactory_NeuronClass::ddtor()
{
    return 0; // TODO stub - quarantined G42 T9 (voidret; truth = .omo/ida_cache/func_0x0006C5E10.json)
}
// 0x6c5e90
int TClassFactory_NeuronClass::GetSize()
{
    return 0; // TODO stub - quarantined G42 T9 (phantom params a2; truth = .omo/ida_cache/func_0x0006C5E90.json)
}
// 0x6c30c0
int TClassFactory_OverlayTypeClass::AddRef()
{
  int v2; // [esp+4h] [ebp+4h]

  return InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x6c30ce*/
}
// 0x6c30e0
int TClassFactory_OverlayTypeClass::GetClassName()
{
  LONG v1; // esi
  volatile LONG *Block; // [esp+Ch] [ebp+4h]

  v1 = InterlockedDecrement(Block + 1); /*0x6c30f0*/
  if ( !v1 ) /*0x6c30f4*/
    RA2_OPDEL((void *)Block); /*0x6c30f7*/
  return v1; /*0x6c3101*/
}
// 0x6c3110
int TClassFactory_OverlayTypeClass::GetClassIdentifier()
{
    return 0; // TODO stub - quarantined G42 T9 (voidret; truth = .omo/ida_cache/func_0x0006C3110.json)
}
// 0x6c3190
int TClassFactory_OverlayTypeClass::GetSize()
{
    return 0; // TODO stub - quarantined G42 T9 (phantom params a2; truth = .omo/ida_cache/func_0x0006C3190.json)
}
// 0x6c0fc0
int TClassFactory_ParasiteClass::AddRef()
{
  int v2; // [esp+4h] [ebp+4h]

  return InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x6c0fce*/
}
// 0x6c0fe0
int TClassFactory_ParasiteClass::GetClassName()
{
  LONG v1; // esi
  volatile LONG *Block; // [esp+Ch] [ebp+4h]

  v1 = InterlockedDecrement(Block + 1); /*0x6c0ff0*/
  if ( !v1 ) /*0x6c0ff4*/
    RA2_OPDEL((void *)Block); /*0x6c0ff7*/
  return v1; /*0x6c1001*/
}
// 0x6c1010
int TClassFactory_ParasiteClass::ddtor()
{
    return 0; // TODO stub - quarantined G42 T9 (voidret; truth = .omo/ida_cache/func_0x0006C1010.json)
}
// 0x6c1090
int TClassFactory_ParasiteClass::GetSize()
{
    return 0; // TODO stub - quarantined G42 T9 (phantom params a2; truth = .omo/ida_cache/func_0x0006C1090.json)
}
// 0x6c5660
int TClassFactory_ParticleClass::GetClassName()
{
  LONG v1; // esi
  volatile LONG *Block; // [esp+Ch] [ebp+4h]

  v1 = InterlockedDecrement(Block + 1); /*0x6c5670*/
  if ( !v1 ) /*0x6c5674*/
    RA2_OPDEL((void *)Block); /*0x6c5677*/
  return v1; /*0x6c5681*/
}
// 0x6c5690
int TClassFactory_ParticleClass::ddtor()
{
    return 0; // TODO stub - quarantined G42 T9 (voidret; truth = .omo/ida_cache/func_0x0006C5690.json)
}
// 0x6c5710
int TClassFactory_ParticleClass::GetSize()
{
    return 0; // TODO stub - quarantined G42 T9 (phantom params a2; truth = .omo/ida_cache/func_0x0006C5710.json)
}
// 0x6c5940
int TClassFactory_ParticleSystemClass::AddRef()
{
  int v2; // [esp+4h] [ebp+4h]

  return InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x6c594e*/
}
// 0x6c5960
int TClassFactory_ParticleSystemClass::GetClassName()
{
  LONG v1; // esi
  volatile LONG *Block; // [esp+Ch] [ebp+4h]

  v1 = InterlockedDecrement(Block + 1); /*0x6c5970*/
  if ( !v1 ) /*0x6c5974*/
    RA2_OPDEL((void *)Block); /*0x6c5977*/
  return v1; /*0x6c5981*/
}
// 0x6c5990
int TClassFactory_ParticleSystemClass::ddtor()
{
    return 0; // TODO stub - quarantined G42 T9 (voidret; truth = .omo/ida_cache/func_0x0006C5990.json)
}
// 0x6c5a10
int TClassFactory_ParticleSystemClass::GetSize()
{
    return 0; // TODO stub - quarantined G42 T9 (phantom params a2; truth = .omo/ida_cache/func_0x0006C5A10.json)
}
// 0x6c5ac0
int TClassFactory_ParticleSystemTypeClass::AddRef()
{
  int v2; // [esp+4h] [ebp+4h]

  return InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x6c5ace*/
}
// 0x6c5ae0
int TClassFactory_ParticleSystemTypeClass::GetClassName()
{
  LONG v1; // esi
  volatile LONG *Block; // [esp+Ch] [ebp+4h]

  v1 = InterlockedDecrement(Block + 1); /*0x6c5af0*/
  if ( !v1 ) /*0x6c5af4*/
    RA2_OPDEL((void *)Block); /*0x6c5af7*/
  return v1; /*0x6c5b01*/
}
// 0x6c5b10
int TClassFactory_ParticleSystemTypeClass::GetClassIdentifier()
{
    return 0; // TODO stub - quarantined G42 T9 (voidret; truth = .omo/ida_cache/func_0x0006C5B10.json)
}
// 0x6c5b90
int TClassFactory_ParticleSystemTypeClass::GetSize()
{
    return 0; // TODO stub - quarantined G42 T9 (phantom params a2; truth = .omo/ida_cache/func_0x0006C5B90.json)
}
// 0x6c57c0
int TClassFactory_ParticleTypeClass::AddRef()
{
  int v2; // [esp+4h] [ebp+4h]

  return InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x6c57ce*/
}
// 0x6c57e0
int TClassFactory_ParticleTypeClass::GetClassName()
{
  LONG v1; // esi
  volatile LONG *Block; // [esp+Ch] [ebp+4h]

  v1 = InterlockedDecrement(Block + 1); /*0x6c57f0*/
  if ( !v1 ) /*0x6c57f4*/
    RA2_OPDEL((void *)Block); /*0x6c57f7*/
  return v1; /*0x6c5801*/
}
// 0x6c5810
int TClassFactory_ParticleTypeClass::GetClassIdentifier()
{
    return 0; // TODO stub - quarantined G42 T9 (voidret; truth = .omo/ida_cache/func_0x0006C5810.json)
}
// 0x6c5890
int TClassFactory_ParticleTypeClass::GetSize()
{
    return 0; // TODO stub - quarantined G42 T9 (phantom params a2; truth = .omo/ida_cache/func_0x0006C5890.json)
}
// 0x6c12c0
int TClassFactory_RadSiteClass::AddRef()
{
  int v2; // [esp+4h] [ebp+4h]

  return InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x6c12ce*/
}
// 0x6c12e0
int TClassFactory_RadSiteClass::GetClassName()
{
  LONG v1; // esi
  volatile LONG *Block; // [esp+Ch] [ebp+4h]

  v1 = InterlockedDecrement(Block + 1); /*0x6c12f0*/
  if ( !v1 ) /*0x6c12f4*/
    RA2_OPDEL((void *)Block); /*0x6c12f7*/
  return v1; /*0x6c1301*/
}
// 0x6c1310
int TClassFactory_RadSiteClass::ddtor()
{
    return 0; // TODO stub - quarantined G42 T9 (voidret; truth = .omo/ida_cache/func_0x0006C1310.json)
}
// 0x6c1390
int TClassFactory_RadSiteClass::GetSize()
{
    return 0; // TODO stub - quarantined G42 T9 (phantom params a2; truth = .omo/ida_cache/func_0x0006C1390.json)
}
// 0x6c4440
int TClassFactory_RocketLocomotionClass::AddRef()
{
  int v2; // [esp+4h] [ebp+4h]

  return InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x6c444e*/
}
// 0x6c4460
int TClassFactory_RocketLocomotionClass::GetClassName()
{
  LONG v1; // esi
  volatile LONG *Block; // [esp+Ch] [ebp+4h]

  v1 = InterlockedDecrement(Block + 1); /*0x6c4470*/
  if ( !v1 ) /*0x6c4474*/
    RA2_OPDEL((void *)Block); /*0x6c4477*/
  return v1; /*0x6c4481*/
}
// 0x6c4490
int TClassFactory_RocketLocomotionClass::ddtor()
{
    return 0; // TODO stub - quarantined G42 T9 (voidret; truth = .omo/ida_cache/func_0x0006C4490.json)
}
// 0x6c4510
int TClassFactory_RocketLocomotionClass::GetSize()
{
    return 0; // TODO stub - quarantined G42 T9 (phantom params a2; truth = .omo/ida_cache/func_0x0006C4510.json)
}
// 0x6c1d40
int TClassFactory_ScriptClass::AddRef()
{
  int v2; // [esp+4h] [ebp+4h]

  return InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x6c1d4e*/
}
// 0x6c1d60
int TClassFactory_ScriptClass::GetClassName()
{
  LONG v1; // esi
  volatile LONG *Block; // [esp+Ch] [ebp+4h]

  v1 = InterlockedDecrement(Block + 1); /*0x6c1d70*/
  if ( !v1 ) /*0x6c1d74*/
    RA2_OPDEL((void *)Block); /*0x6c1d77*/
  return v1; /*0x6c1d81*/
}
// 0x6c1d90
void TClassFactory_ScriptClass::ddtor()
{
}
// 0x6c1e10
int TClassFactory_ScriptClass::GetSize()
{
    return 0; // TODO stub - quarantined G42 T9 (phantom params a2; truth = .omo/ida_cache/func_0x0006C1E10.json)
}
// 0x6c1ec0
int TClassFactory_ScriptTypeClass::AddRef()
{
  int v2; // [esp+4h] [ebp+4h]

  return InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x6c1ece*/
}
// 0x6c1ee0
int TClassFactory_ScriptTypeClass::GetClassName()
{
  LONG v1; // esi
  volatile LONG *Block; // [esp+Ch] [ebp+4h]

  v1 = InterlockedDecrement(Block + 1); /*0x6c1ef0*/
  if ( !v1 ) /*0x6c1ef4*/
    RA2_OPDEL((void *)Block); /*0x6c1ef7*/
  return v1; /*0x6c1f01*/
}
// 0x6c1f10
int TClassFactory_ScriptTypeClass::GetClassIdentifier()
{
    return 0; // TODO stub - quarantined G42 T9 (voidret; truth = .omo/ida_cache/func_0x0006C1F10.json)
}
// 0x6c1f90
int TClassFactory_ScriptTypeClass::GetSize()
{
    return 0; // TODO stub - quarantined G42 T9 (phantom params a2; truth = .omo/ida_cache/func_0x0006C1F90.json)
}
// 0x6c4ec0
int TClassFactory_ShipLocomotionClass::AddRef()
{
  int v2; // [esp+4h] [ebp+4h]

  return InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x6c4ece*/
}
// 0x6c4ee0
int TClassFactory_ShipLocomotionClass::GetClassName()
{
  LONG v1; // esi
  volatile LONG *Block; // [esp+Ch] [ebp+4h]

  v1 = InterlockedDecrement(Block + 1); /*0x6c4ef0*/
  if ( !v1 ) /*0x6c4ef4*/
    RA2_OPDEL((void *)Block); /*0x6c4ef7*/
  return v1; /*0x6c4f01*/
}
// 0x6c4f10
int TClassFactory_ShipLocomotionClass::ddtor()
{
    return 0; // TODO stub - quarantined G42 T9 (voidret; truth = .omo/ida_cache/func_0x0006C4F10.json)
}
// 0x6c4f90
int TClassFactory_ShipLocomotionClass::GetSize()
{
    return 0; // TODO stub - quarantined G42 T9 (phantom params a2; truth = .omo/ida_cache/func_0x0006C4F90.json)
}
// 0x6bfdc0
int TClassFactory_SideClass::AddRef()
{
  int v2; // [esp+4h] [ebp+4h]

  return InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x6bfdce*/
}
// 0x6bfde0
int TClassFactory_SideClass::GetClassName()
{
  LONG v1; // esi
  volatile LONG *Block; // [esp+Ch] [ebp+4h]

  v1 = InterlockedDecrement(Block + 1); /*0x6bfdf0*/
  if ( !v1 ) /*0x6bfdf4*/
    RA2_OPDEL((void *)Block); /*0x6bfdf7*/
  return v1; /*0x6bfe01*/
}
// 0x6bfe10
int TClassFactory_SideClass::ddtor()
{
    return 0; // TODO stub - quarantined G42 T9 (voidret; truth = .omo/ida_cache/func_0x0006BFE10.json)
}
// 0x6bfe90
int TClassFactory_SideClass::GetSize()
{
    return 0; // TODO stub - quarantined G42 T9 (phantom params a2; truth = .omo/ida_cache/func_0x0006BFE90.json)
}
// 0x6c0b40
int TClassFactory_SlaveManagerClass::AddRef()
{
  int v2; // [esp+4h] [ebp+4h]

  return InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x6c0b4e*/
}
// 0x6c0b60
int TClassFactory_SlaveManagerClass::GetClassName()
{
  LONG v1; // esi
  volatile LONG *Block; // [esp+Ch] [ebp+4h]

  v1 = InterlockedDecrement(Block + 1); /*0x6c0b70*/
  if ( !v1 ) /*0x6c0b74*/
    RA2_OPDEL((void *)Block); /*0x6c0b77*/
  return v1; /*0x6c0b81*/
}
// 0x6c0b90
int TClassFactory_SlaveManagerClass::ddtor()
{
    return 0; // TODO stub - quarantined G42 T9 (voidret; truth = .omo/ida_cache/func_0x0006C0B90.json)
}
// 0x6c0c10
int TClassFactory_SlaveManagerClass::GetSize()
{
    return 0; // TODO stub - quarantined G42 T9 (phantom params a2; truth = .omo/ida_cache/func_0x0006C0C10.json)
}
// 0x6c3240
int TClassFactory_SmudgeTypeClass::AddRef()
{
  int v2; // [esp+4h] [ebp+4h]

  return InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x6c324e*/
}
// 0x6c3260
int TClassFactory_SmudgeTypeClass::GetClassName()
{
  LONG v1; // esi
  volatile LONG *Block; // [esp+Ch] [ebp+4h]

  v1 = InterlockedDecrement(Block + 1); /*0x6c3270*/
  if ( !v1 ) /*0x6c3274*/
    RA2_OPDEL((void *)Block); /*0x6c3277*/
  return v1; /*0x6c3281*/
}
// 0x6c3290
int TClassFactory_SmudgeTypeClass::GetClassIdentifier()
{
    return 0; // TODO stub - quarantined G42 T9 (voidret; truth = .omo/ida_cache/func_0x0006C3290.json)
}
// 0x6c3310
int TClassFactory_SmudgeTypeClass::GetSize()
{
    return 0; // TODO stub - quarantined G42 T9 (phantom params a2; truth = .omo/ida_cache/func_0x0006C3310.json)
}
// 0x6c09c0
int TClassFactory_SpawnManagerClass::AddRef()
{
  int v2; // [esp+4h] [ebp+4h]

  return InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x6c09ce*/
}
// 0x6c09e0
int TClassFactory_SpawnManagerClass::GetClassName()
{
  LONG v1; // esi
  volatile LONG *Block; // [esp+Ch] [ebp+4h]

  v1 = InterlockedDecrement(Block + 1); /*0x6c09f0*/
  if ( !v1 ) /*0x6c09f4*/
    RA2_OPDEL((void *)Block); /*0x6c09f7*/
  return v1; /*0x6c0a01*/
}
// 0x6c0a10
int TClassFactory_SpawnManagerClass::ddtor()
{
    return 0; // TODO stub - quarantined G42 T9 (voidret; truth = .omo/ida_cache/func_0x0006C0A10.json)
}
// 0x6c0a90
int TClassFactory_SpawnManagerClass::GetSize()
{
    return 0; // TODO stub - quarantined G42 T9 (phantom params a2; truth = .omo/ida_cache/func_0x0006C0A90.json)
}
// 0x6c18c0
int TClassFactory_TActionClass::AddRef()
{
  int v2; // [esp+4h] [ebp+4h]

  return InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x6c18ce*/
}
// 0x6c18e0
int TClassFactory_TActionClass::GetClassName()
{
  LONG v1; // esi
  volatile LONG *Block; // [esp+Ch] [ebp+4h]

  v1 = InterlockedDecrement(Block + 1); /*0x6c18f0*/
  if ( !v1 ) /*0x6c18f4*/
    RA2_OPDEL((void *)Block); /*0x6c18f7*/
  return v1; /*0x6c1901*/
}
// 0x6c1910
int TClassFactory_TActionClass::ddtor()
{
    return 0; // TODO stub - quarantined G42 T9 (voidret; truth = .omo/ida_cache/func_0x0006C1910.json)
}
// 0x6c1990
int TClassFactory_TActionClass::GetSize()
{
    return 0; // TODO stub - quarantined G42 T9 (phantom params a2; truth = .omo/ida_cache/func_0x0006C1990.json)
}
// 0x6c1440
int TClassFactory_TEventClass::AddRef()
{
  int v2; // [esp+4h] [ebp+4h]

  return InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x6c144e*/
}
// 0x6c1460
int TClassFactory_TEventClass::GetClassName()
{
  LONG v1; // esi
  volatile LONG *Block; // [esp+Ch] [ebp+4h]

  v1 = InterlockedDecrement(Block + 1); /*0x6c1470*/
  if ( !v1 ) /*0x6c1474*/
    RA2_OPDEL((void *)Block); /*0x6c1477*/
  return v1; /*0x6c1481*/
}
// 0x6c1490
int TClassFactory_TEventClass::ddtor()
{
    return 0; // TODO stub - quarantined G42 T9 (voidret; truth = .omo/ida_cache/func_0x0006C1490.json)
}
// 0x6c1510
int TClassFactory_TEventClass::GetSize()
{
    return 0; // TODO stub - quarantined G42 T9 (phantom params a2; truth = .omo/ida_cache/func_0x0006C1510.json)
}
// 0x6c2040
int TClassFactory_TagClass::AddRef()
{
  int v2; // [esp+4h] [ebp+4h]

  return InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x6c204e*/
}
// 0x6c2060
int TClassFactory_TagClass::GetClassName()
{
  LONG v1; // esi
  volatile LONG *Block; // [esp+Ch] [ebp+4h]

  v1 = InterlockedDecrement(Block + 1); /*0x6c2070*/
  if ( !v1 ) /*0x6c2074*/
    RA2_OPDEL((void *)Block); /*0x6c2077*/
  return v1; /*0x6c2081*/
}
// 0x6c2090
int TClassFactory_TagClass::ddtor()
{
    return 0; // TODO stub - quarantined G42 T9 (voidret; truth = .omo/ida_cache/func_0x0006C2090.json)
}
// 0x6c2110
int TClassFactory_TagClass::GetSize()
{
    return 0; // TODO stub - quarantined G42 T9 (phantom params a2; truth = .omo/ida_cache/func_0x0006C2110.json)
}
// 0x6c21c0
int TClassFactory_TagTypeClass::AddRef()
{
  int v2; // [esp+4h] [ebp+4h]

  return InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x6c21ce*/
}
// 0x6c21e0
int TClassFactory_TagTypeClass::GetClassName()
{
  LONG v1; // esi
  volatile LONG *Block; // [esp+Ch] [ebp+4h]

  v1 = InterlockedDecrement(Block + 1); /*0x6c21f0*/
  if ( !v1 ) /*0x6c21f4*/
    RA2_OPDEL((void *)Block); /*0x6c21f7*/
  return v1; /*0x6c2201*/
}
// 0x6c2210
int TClassFactory_TagTypeClass::GetClassIdentifier()
{
    return 0; // TODO stub - quarantined G42 T9 (voidret; truth = .omo/ida_cache/func_0x0006C2210.json)
}
// 0x6c2290
int TClassFactory_TagTypeClass::GetSize()
{
    return 0; // TODO stub - quarantined G42 T9 (phantom params a2; truth = .omo/ida_cache/func_0x0006C2290.json)
}
// 0x6c2640
int TClassFactory_TaskForceClass::AddRef()
{
  int v2; // [esp+4h] [ebp+4h]

  return InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x6c264e*/
}
// 0x6c2660
int TClassFactory_TaskForceClass::GetClassName()
{
  LONG v1; // esi
  volatile LONG *Block; // [esp+Ch] [ebp+4h]

  v1 = InterlockedDecrement(Block + 1); /*0x6c2670*/
  if ( !v1 ) /*0x6c2674*/
    RA2_OPDEL((void *)Block); /*0x6c2677*/
  return v1; /*0x6c2681*/
}
// 0x6c2690
int TClassFactory_TaskForceClass::ddtor()
{
    return 0; // TODO stub - quarantined G42 T9 (voidret; truth = .omo/ida_cache/func_0x0006C2690.json)
}
// 0x6c2710
int TClassFactory_TaskForceClass::GetSize()
{
    return 0; // TODO stub - quarantined G42 T9 (phantom params a2; truth = .omo/ida_cache/func_0x0006C2710.json)
}
// 0x6c2340
int TClassFactory_TeamClass::AddRef()
{
  int v2; // [esp+4h] [ebp+4h]

  return InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x6c234e*/
}
// 0x6c2360
int TClassFactory_TeamClass::GetClassName()
{
  LONG v1; // esi
  volatile LONG *Block; // [esp+Ch] [ebp+4h]

  v1 = InterlockedDecrement(Block + 1); /*0x6c2370*/
  if ( !v1 ) /*0x6c2374*/
    RA2_OPDEL((void *)Block); /*0x6c2377*/
  return v1; /*0x6c2381*/
}
// 0x6c2390
int TClassFactory_TeamClass::ddtor()
{
    return 0; // TODO stub - quarantined G42 T9 (voidret; truth = .omo/ida_cache/func_0x0006C2390.json)
}
// 0x6c2410
int TClassFactory_TeamClass::GetSize()
{
    return 0; // TODO stub - quarantined G42 T9 (phantom params a2; truth = .omo/ida_cache/func_0x0006C2410.json)
}
// 0x6c24c0
int TClassFactory_TeamTypeClass::AddRef()
{
  int v2; // [esp+4h] [ebp+4h]

  return InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x6c24ce*/
}
// 0x6c24e0
int TClassFactory_TeamTypeClass::GetClassName()
{
  LONG v1; // esi
  volatile LONG *Block; // [esp+Ch] [ebp+4h]

  v1 = InterlockedDecrement(Block + 1); /*0x6c24f0*/
  if ( !v1 ) /*0x6c24f4*/
    RA2_OPDEL((void *)Block); /*0x6c24f7*/
  return v1; /*0x6c2501*/
}
// 0x6c2510
int TClassFactory_TeamTypeClass::GetClassIdentifier()
{
    return 0; // TODO stub - quarantined G42 T9 (voidret; truth = .omo/ida_cache/func_0x0006C2510.json)
}
// 0x6c2590
int TClassFactory_TeamTypeClass::GetSize()
{
    return 0; // TODO stub - quarantined G42 T9 (phantom params a2; truth = .omo/ida_cache/func_0x0006C2590.json)
}
// 0x6c4bc0
int TClassFactory_TeleportLocomotionClass::AddRef()
{
  int v2; // [esp+4h] [ebp+4h]

  return InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x6c4bce*/
}
// 0x6c4be0
int TClassFactory_TeleportLocomotionClass::GetClassName()
{
  LONG v1; // esi
  volatile LONG *Block; // [esp+Ch] [ebp+4h]

  v1 = InterlockedDecrement(Block + 1); /*0x6c4bf0*/
  if ( !v1 ) /*0x6c4bf4*/
    RA2_OPDEL((void *)Block); /*0x6c4bf7*/
  return v1; /*0x6c4c01*/
}
// 0x6c4c10
int TClassFactory_TeleportLocomotionClass::ddtor()
{
    return 0; // TODO stub - quarantined G42 T9 (voidret; truth = .omo/ida_cache/func_0x0006C4C10.json)
}
// 0x6c4c90
int TClassFactory_TeleportLocomotionClass::GetSize()
{
    return 0; // TODO stub - quarantined G42 T9 (phantom params a2; truth = .omo/ida_cache/func_0x0006C4C90.json)
}
// 0x6c06c0
int TClassFactory_TemporalClass::AddRef()
{
  int v2; // [esp+4h] [ebp+4h]

  return InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x6c06ce*/
}
// 0x6c06e0
int TClassFactory_TemporalClass::GetClassName()
{
  LONG v1; // esi
  volatile LONG *Block; // [esp+Ch] [ebp+4h]

  v1 = InterlockedDecrement(Block + 1); /*0x6c06f0*/
  if ( !v1 ) /*0x6c06f4*/
    RA2_OPDEL((void *)Block); /*0x6c06f7*/
  return v1; /*0x6c0701*/
}
// 0x6c0710
int TClassFactory_TemporalClass::ddtor()
{
    return 0; // TODO stub - quarantined G42 T9 (voidret; truth = .omo/ida_cache/func_0x0006C0710.json)
}
// 0x6c0790
int TClassFactory_TemporalClass::GetSize()
{
    return 0; // TODO stub - quarantined G42 T9 (phantom params a2; truth = .omo/ida_cache/func_0x0006C0790.json)
}
// 0x6bff40
int TClassFactory_TiberiumClass::AddRef()
{
  int v2; // [esp+4h] [ebp+4h]

  return InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x6bff4e*/
}
// 0x6bff60
int TClassFactory_TiberiumClass::GetClassName()
{
  LONG v1; // esi
  volatile LONG *Block; // [esp+Ch] [ebp+4h]

  v1 = InterlockedDecrement(Block + 1); /*0x6bff70*/
  if ( !v1 ) /*0x6bff74*/
    RA2_OPDEL((void *)Block); /*0x6bff77*/
  return v1; /*0x6bff81*/
}
// 0x6bff90
int TClassFactory_TiberiumClass::ddtor()
{
    return 0; // TODO stub - quarantined G42 T9 (voidret; truth = .omo/ida_cache/func_0x0006BFF90.json)
}
// 0x6c0010
int TClassFactory_TiberiumClass::GetSize()
{
    return 0; // TODO stub - quarantined G42 T9 (voidret; truth = .omo/ida_cache/func_0x0006C0010.json)
}
// 0x6c1a40
int TClassFactory_TriggerClass::AddRef()
{
  int v2; // [esp+4h] [ebp+4h]

  return InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x6c1a4e*/
}
// 0x6c1a60
int TClassFactory_TriggerClass::GetClassName()
{
  LONG v1; // esi
  volatile LONG *Block; // [esp+Ch] [ebp+4h]

  v1 = InterlockedDecrement(Block + 1); /*0x6c1a70*/
  if ( !v1 ) /*0x6c1a74*/
    RA2_OPDEL((void *)Block); /*0x6c1a77*/
  return v1; /*0x6c1a81*/
}
// 0x6c1a90
int TClassFactory_TriggerClass::ddtor()
{
    return 0; // TODO stub - quarantined G42 T9 (voidret; truth = .omo/ida_cache/func_0x0006C1A90.json)
}
// 0x6c1b10
int TClassFactory_TriggerClass::GetSize()
{
    return 0; // TODO stub - quarantined G42 T9 (phantom params a2; truth = .omo/ida_cache/func_0x0006C1B10.json)
}
// 0x6c1bc0
int TClassFactory_TriggerTypeClass::AddRef()
{
  int v2; // [esp+4h] [ebp+4h]

  return InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x6c1bce*/
}
// 0x6c1be0
int TClassFactory_TriggerTypeClass::GetClassName()
{
  LONG v1; // esi
  volatile LONG *Block; // [esp+Ch] [ebp+4h]

  v1 = InterlockedDecrement(Block + 1); /*0x6c1bf0*/
  if ( !v1 ) /*0x6c1bf4*/
    RA2_OPDEL((void *)Block); /*0x6c1bf7*/
  return v1; /*0x6c1c01*/
}
// 0x6c1c10
int TClassFactory_TriggerTypeClass::GetClassIdentifier()
{
    return 0; // TODO stub - quarantined G42 T9 (voidret; truth = .omo/ida_cache/func_0x0006C1C10.json)
}
// 0x6c1c90
int TClassFactory_TriggerTypeClass::GetSize()
{
    return 0; // TODO stub - quarantined G42 T9 (phantom params a2; truth = .omo/ida_cache/func_0x0006C1C90.json)
}
// 0x6c45c0
int TClassFactory_TunnelLocomotionClass::AddRef()
{
  int v2; // [esp+4h] [ebp+4h]

  return InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x6c45ce*/
}
// 0x6c45e0
int TClassFactory_TunnelLocomotionClass::GetClassName()
{
  LONG v1; // esi
  volatile LONG *Block; // [esp+Ch] [ebp+4h]

  v1 = InterlockedDecrement(Block + 1); /*0x6c45f0*/
  if ( !v1 ) /*0x6c45f4*/
    RA2_OPDEL((void *)Block); /*0x6c45f7*/
  return v1; /*0x6c4601*/
}
// 0x6c4610
int TClassFactory_TunnelLocomotionClass::ddtor()
{
    return 0; // TODO stub - quarantined G42 T9 (voidret; truth = .omo/ida_cache/func_0x0006C4610.json)
}
// 0x6c4690
int TClassFactory_TunnelLocomotionClass::GetSize()
{
    return 0; // TODO stub - quarantined G42 T9 (phantom params a2; truth = .omo/ida_cache/func_0x0006C4690.json)
}
// 0x6c33c0
int TClassFactory_UnitClass::AddRef()
{
  int v2; // [esp+4h] [ebp+4h]

  return InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x6c33ce*/
}
// 0x6c33e0
int TClassFactory_UnitClass::GetClassName()
{
  LONG v1; // esi
  volatile LONG *Block; // [esp+Ch] [ebp+4h]

  v1 = InterlockedDecrement(Block + 1); /*0x6c33f0*/
  if ( !v1 ) /*0x6c33f4*/
    RA2_OPDEL((void *)Block); /*0x6c33f7*/
  return v1; /*0x6c3401*/
}
// 0x6c3410
int TClassFactory_UnitClass::ddtor()
{
    return 0; // TODO stub - quarantined G42 T9 (voidret; truth = .omo/ida_cache/func_0x0006C3410.json)
}
    int v2;

// 0x6c3490
int TClassFactory_UnitClass::GetSize()
{
    return 0; // TODO stub - quarantined G42 T9 (phantom params a2; truth = .omo/ida_cache/func_0x0006C3490.json)
}
// 0x6c27c0
int TClassFactory_UnitTypeClass::AddRef()
{
  int v2; // [esp+4h] [ebp+4h]

  return InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x6c27ce*/
}
// 0x6c27e0
int TClassFactory_UnitTypeClass::GetClassName()
{
  LONG v1; // esi
  volatile LONG *Block; // [esp+Ch] [ebp+4h]

  v1 = InterlockedDecrement(Block + 1); /*0x6c27f0*/
  if ( !v1 ) /*0x6c27f4*/
    RA2_OPDEL((void *)Block); /*0x6c27f7*/
  return v1; /*0x6c2801*/
}
// 0x6c2810
int TClassFactory_UnitTypeClass::GetClassIdentifier()
{
    return 0; // TODO stub - quarantined G42 T9 (voidret; truth = .omo/ida_cache/func_0x0006C2810.json)
}
// 0x6c2890
int TClassFactory_UnitTypeClass::GetSize()
{
    return 0; // TODO stub - quarantined G42 T9 (phantom params a2; truth = .omo/ida_cache/func_0x0006C2890.json)
}
// 0x6c1740
int TClassFactory_VoxelAnimClass::AddRef()
{
  int v2; // [esp+4h] [ebp+4h]

  return InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x6c174e*/
}
// 0x6c1760
int TClassFactory_VoxelAnimClass::GetClassName()
{
  LONG v1; // esi
  volatile LONG *Block; // [esp+Ch] [ebp+4h]

  v1 = InterlockedDecrement(Block + 1); /*0x6c1770*/
  if ( !v1 ) /*0x6c1774*/
    RA2_OPDEL((void *)Block); /*0x6c1777*/
  return v1; /*0x6c1781*/
}
// 0x6c1790
int TClassFactory_VoxelAnimClass::ddtor()
{
    return 0; // TODO stub - quarantined G42 T9 (voidret; truth = .omo/ida_cache/func_0x0006C1790.json)
}
// 0x6c1810
int TClassFactory_VoxelAnimClass::GetSize()
{
    return 0; // TODO stub - quarantined G42 T9 (phantom params a2; truth = .omo/ida_cache/func_0x0006C1810.json)
}
// 0x6c15c0
int TClassFactory_VoxelAnimTypeClass::AddRef()
{
  int v2; // [esp+4h] [ebp+4h]

  return InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x6c15ce*/
}
// 0x6c15e0
int TClassFactory_VoxelAnimTypeClass::GetClassName()
{
  LONG v1; // esi
  volatile LONG *Block; // [esp+Ch] [ebp+4h]

  v1 = InterlockedDecrement(Block + 1); /*0x6c15f0*/
  if ( !v1 ) /*0x6c15f4*/
    RA2_OPDEL((void *)Block); /*0x6c15f7*/
  return v1; /*0x6c1601*/
}
// 0x6c1610
int TClassFactory_VoxelAnimTypeClass::GetClassIdentifier()
{
    return 0; // TODO stub - quarantined G42 T9 (voidret; truth = .omo/ida_cache/func_0x0006C1610.json)
}
// 0x6c1690
int TClassFactory_VoxelAnimTypeClass::GetSize()
{
    return 0; // TODO stub - quarantined G42 T9 (phantom params a2; truth = .omo/ida_cache/func_0x0006C1690.json)
}
// 0x6c4740
int TClassFactory_WalkLocomotionClass::AddRef()
{
  int v2; // [esp+4h] [ebp+4h]

  return InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x6c474e*/
}
// 0x6c4760
int TClassFactory_WalkLocomotionClass::GetClassName()
{
  LONG v1; // esi
  volatile LONG *Block; // [esp+Ch] [ebp+4h]

  v1 = InterlockedDecrement(Block + 1); /*0x6c4770*/
  if ( !v1 ) /*0x6c4774*/
    RA2_OPDEL((void *)Block); /*0x6c4777*/
  return v1; /*0x6c4781*/
}
// 0x6c4790
int TClassFactory_WalkLocomotionClass::ddtor()
{
    return 0; // TODO stub - quarantined G42 T9 (voidret; truth = .omo/ida_cache/func_0x0006C4790.json)
}
// 0x6c4810
int TClassFactory_WalkLocomotionClass::GetSize()
{
    return 0; // TODO stub - quarantined G42 T9 (phantom params a2; truth = .omo/ida_cache/func_0x0006C4810.json)
}
// 0x6c5340
int TClassFactory_WarheadTypeClass::AddRef()
{
  int v2; // [esp+4h] [ebp+4h]

  return InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x6c534e*/
}
// 0x6c5360
int TClassFactory_WarheadTypeClass::GetClassName()
{
  LONG v1; // esi
  volatile LONG *Block; // [esp+Ch] [ebp+4h]

  v1 = InterlockedDecrement(Block + 1); /*0x6c5370*/
  if ( !v1 ) /*0x6c5374*/
    RA2_OPDEL((void *)Block); /*0x6c5377*/
  return v1; /*0x6c5381*/
}
// 0x6c5390
int TClassFactory_WarheadTypeClass::GetClassIdentifier()
{
    return 0; // TODO stub - quarantined G42 T9 (voidret; truth = .omo/ida_cache/func_0x0006C5390.json)
}
// 0x6c5410
int TClassFactory_WarheadTypeClass::GetSize()
{
    return 0; // TODO stub - quarantined G42 T9 (phantom params a2; truth = .omo/ida_cache/func_0x0006C5410.json)
}
// 0x6c0540
int TClassFactory_WaypointPathClass::AddRef()
{
  int v2; // [esp+4h] [ebp+4h]

  return InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x6c054e*/
}
// 0x6c0560
int TClassFactory_WaypointPathClass::GetClassName()
{
  LONG v1; // esi
  volatile LONG *Block; // [esp+Ch] [ebp+4h]

  v1 = InterlockedDecrement(Block + 1); /*0x6c0570*/
  if ( !v1 ) /*0x6c0574*/
    RA2_OPDEL((void *)Block); /*0x6c0577*/
  return v1; /*0x6c0581*/
}
// 0x6c0590
int TClassFactory_WaypointPathClass::ddtor()
{
    return 0; // TODO stub - quarantined G42 T9 (voidret; truth = .omo/ida_cache/func_0x0006C0590.json)
}
// 0x6c0610
int TClassFactory_WaypointPathClass::GetSize()
{
    return 0; // TODO stub - quarantined G42 T9 (phantom params a2; truth = .omo/ida_cache/func_0x0006C0610.json)
}
// 0x6c54c0
int TClassFactory_WeaponTypeClass::AddRef()
{
  int v2; // [esp+4h] [ebp+4h]

  return InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x6c54ce*/
}
// 0x6c54e0
int TClassFactory_WeaponTypeClass::GetClassName()
{
  LONG v1; // esi
  volatile LONG *Block; // [esp+Ch] [ebp+4h]

  v1 = InterlockedDecrement(Block + 1); /*0x6c54f0*/
  if ( !v1 ) /*0x6c54f4*/
    RA2_OPDEL((void *)Block); /*0x6c54f7*/
  return v1; /*0x6c5501*/
}
// 0x6c5510
int TClassFactory_WeaponTypeClass::GetClassIdentifier()
{
    return 0; // TODO stub - quarantined G42 T9 (voidret; truth = .omo/ida_cache/func_0x0006C5510.json)
}
// 0x6c5590
int TClassFactory_WeaponTypeClass::GetSize()
{
    return 0; // TODO stub - quarantined G42 T9 (phantom params a2; truth = .omo/ida_cache/func_0x0006C5590.json)
}
// 0x510640
void TagClassVector::Construct( int a2, int a3)
{
}
// 0x4a9720
void Targeting::Readd(IUnknown * aP0)
{
}
// 0x6b7100
void TaskManager::Update()
{
}
// 0x4cabf0
void TechnoTypeVector::Constructor( int a2, int a3)
{
}
// 0x68c200
void TechnoTypeVector::Construct( int a2, int a3)
{
}
// 0x6e4de0
void TeknoClass::GetType( TeamTypeClass * aP1)
{
}
// 0x67b370
void TerrainTypeVector::Construct( int a2, int a3)
{
}
// 0x770020
void Territory_WorldDominationTour::QueryInterface( char a2)
{
}
// 0x545000
int TheatreClass::InitView()
{
    return 0; // TODO stub - quarantined G42 T9 (voidret; truth = .omo/ida_cache/func_0x000545000.json)
}
// 0x58bdc0
int TileData::Constructor()
{
    return {}; // TODO stub - G42 return-sync (void->virtual int)
}
// 0x58c070
void TileNode::Cleanup()
{
}
// 0x58d0a0
int TileSystem::LookupMapTile()
{
  /* G42: g_MissionQueueFrame is ScenarioClass @0xABC5F8; localVariables member
     at +0x248C (IDA til truth). Byte-exact rewrite of the struct-member access. */
  if ( *(unsigned int *)((unsigned char *)&g_MissionQueueFrame + 0x248C + 163 * 4) ) /*0x58d0a8*/
    return *(unsigned int *)(80 * (*(int16_t *)((unsigned char *)(this) + 0x0) + g_MapCellWidth * *(int16_t *)&((unsigned char *)(this) + 0x0)[2]) /*0x58d0c4*/
                     + *(unsigned int *)((unsigned char *)&g_MissionQueueFrame + 0x248C + 163 * 4)
                     + 56);
  else
    return -1; /*0x58d0aa*/
}
// 0x58d620
void TileSystem::BuildNodes()
{
}

// 0x58e5d0
void TileSystem::AnalyzeTileConnectivity()
{
}
// 0x5ad740
void TileSystem::Constructor( ObjectClass * aP1, ObjectClass * aP2)
{
}
// 0x589c50
void TileVector::PushBack( MouseClass * aP1)
{
}
// 0x4b5810
void ToggleClass::QueryInterface(unsigned int * Block, char a2)
{
}
// 0x723e60
void ToggleClass::Construct( ControlClass * aP1, ControlClass * aP2, ControlClass * aP3, ControlClass * aP4, ControlClass * aP5)
{
}
// 0x536fa0
void ToggleRepairModeCommandClass::Execute(int a1)
{
}
// 0x43a0b0
void Triple::Set( IUnknown * aP1, IUnknown * aP2, IUnknown * aP3)
{
}
// 0x67a740
int UnitTypeList::Constructor()
{
    return {}; // TODO stub - G42 return-sync (void->virtual int)
}
// 0x512b30
void UnitTypeVector::QueryInterface(unsigned int * Block, char a2)
{
}
// 0x513050
void UnitTypeVector::Release( int a2, unsigned int * a3)
{
}
// 0x513130
void UnitTypeVector::Add( unsigned int * a2)
{
}
// 0x513170
void UnitTypeVector::Remove( int a2)
{
}
// 0x513190
void UnitTypeVector::Construct( int a2, int a3)
{
}
// 0x759c30
void VQAClass::AdvanceFrame( unsigned char * a2)
{
}
// 0x74dc00
void VeinholeClass::SelectGrowthPosition()
{
}
// 0x74fff0
int VeinholeClass::GetState()
{
  return *(float *)((unsigned char *)(this) + 0x0) < 0.0; /*0x750004*/
}
// 0x74c420
void VeinholeMonsterClass::Construct( AbstractClass * aP1)
{
}
// 0x74c5b0
void VeinholeMonsterClass::Constructor( IUnknown * aP1)
{
}
// 0x74ce50
void VeinholeMonsterClass::UpdateGrowth()
{
}
// 0x74d5d0
void VeinholeMonsterClass::ProcessExpansion( int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
}
// 0x74e930
void VeinholeMonsterClass::PlaceGrowth()
{
}
// 0x74f760
void VersionInfo::Read()
{
}
// 0x692b60
void Viewport::ProcessScroll( unsigned int * a2)
{
}
// 0x753e00
int Viewport::Clear()
{
    return 0; // TODO stub - quarantined G42 T9 (voidret; truth = .omo/ida_cache/func_0x000753E00.json)
}
// 0x407510
void VtableStub::Push_407510(void * Block)
{
}
// 0x425270
void VtableStub::Method_425270()
{
}
// 0x477740
int VtableStub::Method_477740()
{
  return (*(int (**)(VtableStub *))(*(unsigned int *)((unsigned char *)(this) + 0x0) + 4))(this);
}
// 0x5175d0
void VtableStub::Method_5175D0()
{
}
// 0x55cbf0
int VtableStub::Method_55CBF0()
{
  return byte_ABCD58; /*0x55cbf5*/
}
// 0x76f600
void WDTClass::GetCellType(unsigned int a2)
{
}
// 0x76f670
void WDTClass::CountCellType( int a2)
{
}
// 0x7693f0
void WDTGame::ToggleTeamMode( ObjectClass * aP1, ObjectClass * aP2)
{
}
// 0x76d180
void WDTGame::ProcessTerritorySelection( unsigned int * a1, ObjectClass * aP2)
{
}
// 0x76e4f0
void WDTGame::ReviewHistory()
{
}
// 0x76f030
void WDTGame::Constructor( ObjectClass * aP1)
{
}
// 0x76bfa0
void WDTObject::GetSize()
{
}
// 0x76ff30
void WDTObject::GetAndClearFlag()
{
}
// 0x76afc0
void WDTState::Constructor_WDTState()
{
}
// 0x76b6f0
void WDTState::QueryInterface(void * Block, char a2)
{
}
// 0x7693a0
void WDTSurface::ToggleState( ObjectClass * aP1, ObjectClass * aP2)
{
}
// 0x769440
void WDTSurface::PointInRect( unsigned int * a2)
{
}
// 0x7b6970
void WString::Append( CampaignScore * aP1)
{
}
// 0x7b6f40
void WString::TrimRight( const wchar_t ** a2)
{
}
// 0x5a9a70
void WaypointPath::Constructor( rc_ptr_base * aP1, rc_ptr_base * aP2)
{
}
// 0x7cbb76
void WideChar::ToLong(BlowStraw * aP0, int a2, int a3)
{
}
// 0x7dc720
int WinAPI::Wrapper(int a2)
{
  return a2; /*0x7dc720 SetLastError 族封装占位 (G42.33 签名对齐二进制 __fastcall(int))*/
}

// 0x774120
_DWORD * WinModemClass::Construct()
{
    return {}; // TODO stub - G42 return-sync (void->virtual _DWORD *)
}
// 0x774410
char WinModemClass::AddRef( const char * a2, DWORD a3, BYTE a4, BYTE a5, char a6)
{
    return {}; // TODO stub - G42 return-sync (char->virtual char)
}
// 0x7748a0
void WinModemClass::Release( int a2)
{
}
// 0x7748b0
void WinModemClass::GetClassIdentifier(DWORD a1)
{
}
// 0x774900
void WinModemClass::Init( char a2)
{
}
// 0x7ac5d0
void WonlineStringDialogControl::QueryInterface(DialogControl_OwnerDraw * Block, char a2)
{
}
// 0x42dd60
void WordVector::Constructor( int a2, int a3)
{
}
// 0x6d2070
void World::ToScreen( AbstractClass * aP1, AbstractClass * aP2)
{
}
// 0x7680c0
void WorldDomination::SetupTerritoryNodes()
{
}
// 0x53d580
void ZBuffer::RenderSprite()
{
}
// 0x58a3d0
void ZoneConnectionVector::Destruct(unsigned int * Block, char a2)
{
}
// legal stubs for misc_ext.hpp cleanups (build-redline session)
// 0x41C430 numeric-name legalized
// 0x424CA0 numeric-name legalized
// 0x46B260 numeric-name legalized
// 0x4B4D60 numeric-name legalized
// 0x6342D0 numeric-name legalized
// 0x425270 numeric-name legalized
// 0x477740 numeric-name legalized
// 0x5175D0 numeric-name legalized
// 0x55CBF0 numeric-name legalized
// 0x543780 constructor placeholder
IsometricTileClass::IsometricTileClass() {}  // G42: placeholder ctor synced to hpp decl (params were placeholders)
// 0x4A7A30 constructor placeholder
DiskLaserClass::DiskLaserClass() {}
// 0x43A350 constructor placeholder
NeuronClass::NeuronClass() {}

WorldDominationTour::WorldDominationTour() {}
}  // L-fix: close namespace tail 1
