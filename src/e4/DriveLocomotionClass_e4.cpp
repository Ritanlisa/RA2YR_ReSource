// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"

// 0x4AF780
HRESULT DriveLocomotionClass::BeginMove(int * a1, int * pStm)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
HRESULT __stdcall DriveLocomotionClass::_vt05(int *a1, int *pStm)
{
  IStream *v2; // edi
  int v3; // ebx
  int v4; // eax
  LPVOID *v5; // esi

  v2 = (IStream *)pStm; /*0x4af787*/
  v3 = SwizzleManager::SaveLoad(a1, pStm); /*0x4af792*/
  if ( v3 < 0 ) /*0x4af796*/
    return v3; /*0x4af796*/
  if ( a1 ) /*0x4af79a*/
  {
    a1[26] = 0; /*0x4af79c*/
    *a1 = (int)&DriveLocomotionClass::`vftable'; /*0x4af7a3*/
    a1[1] = (int)&DriveLocomotionClass::`vftable'; /*0x4af7a9*/
    a1[6] = (int)&off_7E7E8C; /*0x4af7b0*/
  }
  v2->__pad_0->Read(v2, &pStm, 1, 0); /*0x4af7c3*/
  if ( !(_BYTE)pStm ) /*0x4af7cc*/
    return v3; /*0x4af7f8*/
  v4 = a1[26]; /*0x4af7ce*/
  v5 = (LPVOID *)(a1 + 26); /*0x4af7d1*/
  if ( v4 ) /*0x4af7d6*/
    (*(void (__stdcall **)(int))(*(_DWORD *)v4 + 8))(v4); /*0x4af7db*/
  *v5 = 0; /*0x4af7e5*/
  return OleLoadFromStream(v2, &IID_ILocomotion, v5); /*0x4af7f1*/
}
}

// 0x4AF800
HRESULT DriveLocomotionClass::LoadFromStream(int * a1, int * pPStm, int a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
HRESULT __stdcall DriveLocomotionClass::LoadFromStream(int *a1, int *pPStm, int a3)
{
  IStream *v3; // esi
  int *v4; // edi
  int IPersistStream; // ebx
  int v6; // ecx
  int (__stdcall ***v7)(_DWORD, void *, int **); // eax
  int v8; // edi
  int *v9; // ebx
  HRESULT v10; // esi
  int v12; // edx

  v3 = (IStream *)pPStm; /*0x4af806*/
  v4 = a1; /*0x4af80b*/
  IPersistStream = LoadIPersistStream(a1, pPStm, a3); /*0x4af817*/
  if ( IPersistStream < 0 ) /*0x4af81b*/
    return IPersistStream; /*0x4af81b*/
  if ( !v4[26] ) /*0x4af826*/
  {
    v12 = *(_DWORD *)v3->__pad_0; /*0x4af8c3*/
    LOBYTE(a3) = 0; /*0x4af8cf*/
    (*(void (__stdcall **)(IStream *, int *, int, _DWORD))(v12 + 16))(v3, &a3, 1, 0); /*0x4af8d4*/
    return IPersistStream; /*0x4af8d8*/
  }
  v6 = *(_DWORD *)v3->__pad_0; /*0x4af82c*/
  LOBYTE(a3) = 1; /*0x4af838*/
  (*(void (__stdcall **)(IStream *, int *, int, _DWORD))(v6 + 16))(v3, &a3, 1, 0); /*0x4af83d*/
  v7 = (int (__stdcall ***)(_DWORD, void *, int **))v4[26]; /*0x4af840*/
  pPStm = 0; /*0x4af843*/
  if ( v7 ) /*0x4af84d*/
  {
    v8 = (**v7)(v7, &unk_820270, &a1); /*0x4af85e*/
    if ( v8 >= 0 ) /*0x4af862*/
    {
      v9 = a1; /*0x4af87b*/
      if ( pPStm ) /*0x4af881*/
        (*(void (__stdcall **)(int *))(*pPStm + 8))(pPStm); /*0x4af886*/
      pPStm = v9; /*0x4af889*/
    }
    else
    {
      Function::Method_4B4D60((int *)&pPStm); /*0x4af868*/
      pPStm = 0; /*0x4af86d*/
    }
    if ( v8 < 0 && v8 != -2147467262 ) /*0x4af897*/
      WinAPI::Wrapper(v8); /*0x4af89a*/
  }
  v10 = OleSaveToStream((LPPERSISTSTREAM)pPStm, v3); /*0x4af8ab*/
  if ( pPStm ) /*0x4af8b3*/
    (*(void (__stdcall **)(int *))(*pPStm + 8))(pPStm); /*0x4af8b8*/
  return v10; /*0x4af8bd*/
}
}

// 0x4B4D00
DriveLocomotionClass * DriveLocomotionClass::ProcessMove(char a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
DriveLocomotionClass *__thiscall DriveLocomotionClass::ProcessMove(ILocomotion **this, char a2)
{
  ILocomotion *v3; // eax

  *this = (ILocomotion *)&DriveLocomotionClass::`vftable'; /*0x4b4d03*/
  *(this + 1) = (ILocomotion *)&DriveLocomotionClass::`vftable'; /*0x4b4d09*/
  *(this + 6) = (ILocomotion *)&off_7E7E8C; /*0x4b4d10*/
  v3 = *(this + 26); /*0x4b4d17*/
  if ( v3 ) /*0x4b4d1c*/
    (*(void (__stdcall **)(ILocomotion *))(*(_DWORD *)v3 + 8))(v3); /*0x4b4d21*/
  LocomotionClass::Construct(this); /*0x4b4d26*/
  if ( (a2 & 1) != 0 ) /*0x4b4d30*/
    __3_YAXPAX_Z(this); /*0x4b4d33*/
  return (DriveLocomotionClass *)this; /*0x4b4d3d*/
}
}

// 0x4B4830
int DriveLocomotionClass::ddtor(int a1, unsigned int * a2)
{
  if ( !a2 )
    return -2147467261;
  *a2 = 1247291201;
  a2[1] = 298948665;
  a2[2] = -1610610249;
  a2[3] = -777003740;
  return 0;
}

// 0x4B4CF0
int DriveLocomotionClass::StubReturn112()
{
return 112;
}
