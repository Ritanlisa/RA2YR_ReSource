// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"

// 0x4AF780
HRESULT DriveLocomotionClass::BeginMove(int * a1, int * pStm)
{
{
    IStream *v2;
    int v3;
    int v4;
    LPVOID *v5;
    v2 = (IStream *)pStm;
    v3 = SwizzleManager::SaveLoad(a1, pStm);
    if ( v3 < 0 )
    return v3;
    if ( a1 )
  {
    *((int*)(a1) + 26) = 0;
    *a1 = (int)(unsigned int)vt_DriveLocomotionClass;
    *((int*)(a1) + 1) = (int)&vt_DriveLocomotionClass;
    *((int*)(a1) + 6) = (int)&vt_DriveLocomotionClass_2;
  }
    v2->__pad_0->Read(v2, &pStm, 1, 0);
    if ( !(char)pStm )
    return v3;
    v4 = *((int*)(a1) + 26);
    v5 = (LPVOID *)(a1 + 26);
    if ( v4 )
    (*(void (__stdcall **)(int))(*(int *)(v4) + 8))(v4);
    *v5 = 0;
    return OleLoadFromStream(v2, &IID_ILocomotion, v5);
}
}

// 0x4B4D00
DriveLocomotionClass * DriveLocomotionClass::ProcessMove(char a2)
{
{
    ILocomotion *v3;
    *(void**)this = (unsigned int)vt_DriveLocomotionClass;
    *(this + 1) = (ILocomotion *)&vt_DriveLocomotionClass;
    *(this + 6) = (ILocomotion *)&vt_DriveLocomotionClass_2;
    v3 = *(this + 26);
    if ( v3 )
    (*(void (__stdcall **)(ILocomotion *))(*(int *)(v3) + 8))(v3);
    LocomotionClass::Construct(this);
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (DriveLocomotionClass *)this;
}
}

// 0x4AF800
HRESULT DriveLocomotionClass::LoadFromStream(int * a1, int * pPStm, int a3)
{
{
    IStream *v3;
    int *v4;
    int IPersistStream;
    int v6;
    int (__stdcall ***v7)(int, void *, int **);
    int v8;
    int *v9;
    HRESULT v10;
    int v12;
    v3 = (IStream *)pPStm;
    v4 = a1;
    IPersistStream = LoadIPersistStream(a1, pPStm, a3);
    if ( IPersistStream < 0 )
    return IPersistStream;
    if ( !v4[26] )
  {
    v12 = *(int *)v3->__pad_0;
    LOBYTE(a3) = 0;
    (*(void (__stdcall **)(IStream *, int *, int, int))(v12 + 16))(v3, &a3, 1, 0);
    return IPersistStream;
  }
    v6 = *(int *)v3->__pad_0;
    LOBYTE(a3) = 1;
    (*(void (__stdcall **)(IStream *, int *, int, int))(v6 + 16))(v3, &a3, 1, 0);
    v7 = (int (__stdcall ***)(int, void *, int **))v4[26];
    pPStm = 0;
    if ( v7 )
  {
    v8 = (**v7)(v7, &DataGlobal_820270, &a1);
    if ( v8 >= 0 )
    {
    v9 = a1;
    if ( pPStm )
    (*(void (__stdcall **)(int *))(*pPStm + 8))(pPStm);
    pPStm = v9;
    }
    else
    {
    Function::Method_4B4D60((int *)&pPStm);
    pPStm = 0;
    }
    if ( v8 < 0 && v8 != -2147467262 )
    WinAPI::Wrapper(v8);
  }
    v10 = OleSaveToStream((LPPERSISTSTREAM)pPStm, v3);
    if ( pPStm )
    (*(void (__stdcall **)(int *))(*pPStm + 8))(pPStm);
    return v10;
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
