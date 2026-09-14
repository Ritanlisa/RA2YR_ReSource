// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/SaveGame_e4.hpp"

// 0x4391C0
namespace gamemd {
int SaveGame::LoadArrayData(int * a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall sub_4391C0(int *this, int *a2)
{
  int v3; // ecx
  int result; // eax
  int v5; // ebx
  int v6; // ecx
  int i; // ebx
  int v8; // [esp+40h] [ebp-4h] BYREF

  v3 = *a2; /*0x4391cc*/
  v8 = *(this + 4); /*0x4391d9*/
  result = (*(int (__stdcall **)(int *, int *, int, _DWORD))(v3 + 16))(a2, &v8, 4, 0); /*0x4391dd*/
  if ( result >= 0 ) /*0x4391e2*/
  {
    v5 = 0; /*0x4391e8*/
    if ( v8 <= 0 ) /*0x4391ec*/
    {
LABEL_5:
      v6 = *a2; /*0x43920c*/
      v8 = *(this + 10); /*0x43921b*/
      result = (*(int (__stdcall **)(int *, int *, int, _DWORD))(v6 + 16))(a2, &v8, 4, 0); /*0x43921f*/
      if ( result >= 0 ) /*0x439224*/
      {
        for ( i = 0; i < v8; ++i ) /*0x43922e*/
        {
          result = (*(int (__stdcall **)(int *, int, int, _DWORD))(*a2 + 16))(a2, *(this + 7) + 4 * i, 4, 0); /*0x43923e*/
          if ( result < 0 ) /*0x439243*/
            break; /*0x439243*/
        }
      }
    }
    else
    {
      while ( 1 ) /*0x4391fc*/
      {
        result = (*(int (__stdcall **)(int *, int, int, _DWORD))(*a2 + 16))(a2, *(this + 1) + 4 * v5, 4, 0); /*0x4391fc*/
        if ( result < 0 ) /*0x439201*/
          break; /*0x439201*/
        if ( ++v5 >= v8 ) /*0x43920a*/
          goto LABEL_5; /*0x43920a*/
      }
    }
  }
  return result; /*0x43924e*/
}
}
} // namespace gamemd

// 0x54E750
namespace gamemd {
int SaveGame::WriteDataArray(int * a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall sub_54E750(_DWORD *this, int *a2)
{
  int v3; // ecx
  int result; // eax
  int i; // edi
  int v6; // [esp+20h] [ebp-4h] BYREF

  v3 = *a2; /*0x54e75c*/
  v6 = *(this + 7); /*0x54e769*/
  result = (*(int (__stdcall **)(int *, int *, int, _DWORD))(v3 + 16))(a2, &v6, 4, 0); /*0x54e76d*/
  if ( result >= 0 ) /*0x54e772*/
  {
    for ( i = 0; i < v6; ++i ) /*0x54e77c*/
    {
      result = (*(int (__stdcall **)(int *, _DWORD, int, _DWORD))(*a2 + 16))(a2, *(_DWORD *)(*(this + 4) + 4 * i), 8, 0); /*0x54e78c*/
      if ( result < 0 ) /*0x54e791*/
        break; /*0x54e791*/
    }
  }
  return result; /*0x54e79c*/
}
}
} // namespace gamemd

// 0x6607D0
namespace gamemd {
bool SaveGame::SaveTriggerEvents()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
bool __thiscall sub_6607D0(int *this)
{
  int v2; // ecx
  int v4; // edi
  int v5; // [esp+20h] [ebp-4h] BYREF

  v2 = *this; /*0x6607e0*/
  v5 = g_TriggerEventState; /*0x6607e6*/
  if ( (*(int (__stdcall **)(int *, int *, int, _DWORD))(v2 + 16))(this, &v5, 4, 0) < 0 ) /*0x6607ef*/
    return 0; /*0x6607f6*/
  v4 = 0; /*0x6607fb*/
  if ( v5 > 0 ) /*0x6607ff*/
  {
    while ( (*(int (__stdcall **)(int *, _DWORD, int, _DWORD))(*this + 16))( /*0x660817*/
              this,
              *((_DWORD *)g_TriggerPool + v4),
              64,
              0) >= 0 )
    {
      if ( ++v4 >= v5 ) /*0x660820*/
        return (*(int (__stdcall **)(int *, __int16 *, int, _DWORD))(*this + 16))(this, &word_B04D78, 4, 0) >= 0; /*0x660820*/
    }
    return 0; /*0x660817*/
  }
  return (*(int (__stdcall **)(int *, __int16 *, int, _DWORD))(*this + 16))(this, &word_B04D78, 4, 0) >= 0; /*0x6607f1*/
}
}
} // namespace gamemd

// 0x67D300
namespace gamemd {
char SaveGame::Start()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
// (v3 export truncated pseudocode — commented out; live version via get_context)
// char __thiscall SaveGame::Start(LPSTREAM this)
// {
//   int v2; // ecx
//   int v3; // ebx
//   int v4; // eax
//   int v5; // ebx
//   char result; // al
//   int v7; // ecx
//   int v8; // ebx
//   int v9; // eax
//   int v10; // ebx
//   int v11; // eax
//   int v12; // ebx
//   int v13; // eax
//   int v14; // ebx
//   int v15; // eax
//   int v16; // ebx
//   int v17; // eax
//   int v18; // ebx
//   int v19; // eax
//   int v20; // ebx
//   int v21; // eax
//   int v22; // ebx
//   int v23; // eax
//   int v24; // ebx
//   int v25; // eax
//   int v26; // ebx
//   int v27; // eax
//   int v28; // ebx
//   int v29; // eax
//   int v30; // ebx
//   int v31; // eax
//   int v32; // ebx
//   int v33; // eax
//   int v34; // ebx
//   int v35; // eax
//   int v36; // ebx
//   int v37; // eax
//   int v38; // ebx
//   int v39; // eax
//   int v40; // ebx
//   int v41; // eax
//   int v42; // ebx
//   int v43; // eax
//   int v44; // ebx
//   int v45; // eax
//   int v46; // ebx
//   int v47; // eax
//   int i; // ebx
//   int v49; // eax
//   int j; // ebx
//   int v51; // eax
//   int v52; // ebx
//   int v53; // eax
//   int v54; // ebx
//   int... [33915 chars total]
// end truncated pseudocode
}
} // namespace gamemd

// 0x67F7E0
namespace gamemd {
int SaveGame::LoadMainGameState()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall sub_67F7E0(int *this)
{
  int result; // eax
  int v3; // ecx
  int v4; // edi
  int v5; // edx
  int v6; // edi
  int v7; // edx
  int v8; // edi
  int v9; // eax
  wchar_t *v10; // [esp+A0h] [ebp-4h] BYREF

  result = (*(int (__stdcall **)(int *, int *, int, _DWORD))(*this + 16))(this, &MEMORY[0xA8ED78], 4, 0); /*0x67f7f1*/
  if ( result >= 0 )
  {
    result = (*(int (__stdcall **)(int *, #375 **, int, _DWORD))(*this + 16))(this, &HouseClass_Player, 4, 0); /*0x67f808*/
    if ( result >= 0 )
    {
      result = (*(int (__stdcall **)(int *, wchar_t **, int, _DWORD))(*this + 16))(this, &MEMORY[0xA8ED84], 4, 0); /*0x67f81f*/
      if ( result >= 0 )
      {
        v3 = *this; /*0x67f82f*/
        v10 = MEMORY[0xA8ECC8]; /*0x67f83b*/
        result = (*(int (__stdcall **)(int *, wchar_t **, int, _DWORD))(v3 + 16))(this, &v10, 4, 0); /*0x67f83f*/
        if ( result >= 0 )
        {
          v4 = 0; /*0x67f84e*/
          if ( (int)v10 <= 0 )
          {
LABEL_8:
            result = (*(int (__stdcall **)(int *, float *, int, _DWORD))(*this + 16))(this, MEMORY[0x89EA40], 432, 0); /*0x67f879*/
            if ( result >= 0 )
            {
              SuperWeaponClass::LoadFromSaveStream(this); /*0x67f895*/
              v5 = *this; /*0x67f8a0*/
              v10 = (wchar_t *)MEMORY[0x8B40D8]; /*0x67f8ac*/
              result = (*(int (__stdcall **)(int *, wchar_t **, int, _DWORD))(v5 + 16))(this, &v10, 4, 0); /*0x67f8b0*/
              if ( result >= 0 )
              {
                v6 = 0; /*0x67f8bf*/
                if ( (int)v10 <= 0 )
                {
LABEL_13:
                  v7 = *this; /*0x67f8ea*/
                  v10 = (wchar_t *)dword_8B41B8; /*0x67f8fc*/
                  result = (*(int (__stdcall **)(int *, wchar_t **, int, _DWORD))(v7 + 16))(this, &v10, 4, 0); /*0x67f900*/
                  if ( result >= 0 )
                  {
                    v8 = 0; /*0x67f90f*/
                    if ( (int)v10 <= 0 )
                    {
LABEL_17:
                      result = (*(int (__stdcall **)(int *, int *, int, _DWORD))(*this + 16))( /*0x67f93a*/
                                 this,
                                 &dword_81DA8C,
                                 76,
                                 0);
                      if ( result >= 0 )
                      {
                        result = (*(int (__stdcall **)(int *, int *, int, _DWORD))(*this + 16))( /*0x67f959*/
                                   this,
                                   dword_81DAD8,
                                   76,
                                   0);
                        if ( result >= 0 )
                        {
                          result = (*(int (__stdcall **)(int *, double *, int, _DWORD))(*this + 16))( /*0x67f96f*/
                                     this,
                                     MEMORY[0x89EC28],
                                     152,
                                     0);
                          if ( result >= 0 )
                          {
                            result = (*(int (__stdcall **)(int *, char *, int, _DWORD))(*this + 16))( /*0x67f982*/
                                       this,
                                       MEMORY[0x89ECC0],
                                       19,
                                       0);
                            if ( result >= 0 )
                            {
                              result = (*(int (__stdcall **)(int *, void *, int, _DWORD))(*this + 16))( /*0x67f998*/
                                         this,
                                         &MEMORY[0xA8E3A8],
                                         1024,
                                         0);
                              if ( result >= 0 )
                              {
                                v9 = (*(int (__stdcall **)(int *, int *, int, _DWORD))(*this + 16))( /*0x67f9ab*/
                                       this,
                                       &MEMORY[0xB07784],
                                       4,
                                       0);
                                return v9 >= 0 ? 0 : v9;
                              }
                            }
                          }
                        }
                      }
                    }
                    else
                    {
                      while ( 1 ) /*0x67f926*/
                      {
                        result = (*(int (__stdcall **)(int *, char *, int, _DWORD))(*this + 16))( /*0x67f926*/
                                   this,
                                   (char *)unk_8B41AC + 4 * v8,
                                   4,
                                   0);
                        if ( result < 0 ) /*0x67f92b*/
                          break; /*0x67f92b*/
                        if ( ++v8 >= (int)v10 ) /*0x67f938*/
                          goto LABEL_17; /*0x67f938*/
                      }
                    }
                  }
                }
                else
                {
                  while ( 1 ) /*0x67f8d6*/
                  {
                    result = (*(int (__stdcall **)(int *, char *, int, _DWORD))(*this + 16))( /*0x67f8d6*/
                               this,
                               (char *)MEMORY[0x8B40CC] + 4 * v6,
                               4,
                               0);
                    if ( result < 0 ) /*0x67f8db*/
                      break; /*0x67f8db*/
                    if ( ++v6 >= (int)v10 ) /*0x67f8e8*/
                      goto LABEL_13; /*0x67f8e8*/
                  }
                }
              }
            }
          }
          else
          {
            while ( 1 ) /*0x67f865*/
            {
              result = (*(int (__stdcall **)(int *, char *, int, _DWORD))(*this + 16))( /*0x67f865*/
                         this,
                         (char *)MEMORY[0xA8ECBC] + 4 * v4,
                         4,
                         0);
              if ( result < 0 ) /*0x67f86a*/
                break; /*0x67f86a*/
              if ( ++v4 >= (int)v10 ) /*0x67f877*/
                goto LABEL_8; /*0x67f877*/
            }
          }
        }
      }
    }
  }
  return result; /*0x67f9b8*/
}
}
} // namespace gamemd

// 0x74ED60
namespace gamemd {
char SaveGame::LoadVeinholeData()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __thiscall sub_74ED60(int *this)
{
  int v2; // ecx
  int v4; // edi
  int v5; // eax
  int v6; // ebx
  int v7; // ecx
  int v8; // eax
  int v9; // edi
  int v10; // ebp
  int i; // ebx
  int v12; // ecx
  int v13; // [esp+90h] [ebp-14h] BYREF
  int v14; // [esp+94h] [ebp-10h]
  int v15; // [esp+98h] [ebp-Ch]
  int v16; // [esp+9Ch] [ebp-8h] BYREF
  int v17; // [esp+A0h] [ebp-4h] BYREF

  v2 = *this; /*0x74ed74*/
  v13 = MEMORY[0xB1D2A0]; /*0x74ed7a*/
  if ( (*(int (__stdcall **)(int *, int *, int, _DWORD))(v2 + 16))(this, &v13, 4, 0) < 0 ) /*0x74ed83*/
    return 0; /*0x74ed8e*/
  v4 = Object::ComputeAllocationSize(); /*0x74ed9a*/
  v5 = *this; /*0x74ed9c*/
  v15 = v4; /*0x74eda3*/
  if ( (*(int (__stdcall **)(int *, void *, int, _DWORD))(v5 + 16))(this, MEMORY[0xB1D2F0], v4, 0) < 0 ) /*0x74edac*/
    return 0; /*0x74edac*/
  v6 = 0; /*0x74edbc*/
  v14 = 0; /*0x74edc0*/
  if ( v13 > 0 ) /*0x74edc4*/
  {
    while ( 1 ) /*0x74edd6*/
    {
      v7 = *this; /*0x74edd6*/
      v16 = *((_DWORD *)MEMORY[0xB1D294] + v6); /*0x74ede5*/
      if ( (*(int (__stdcall **)(int *, int *, int, _DWORD))(v7 + 16))(this, &v16, 4, 0) < 0 /*0x74ee50*/
        || (*(int (__stdcall **)(int *, _DWORD, int, _DWORD))(*this + 16))(
             this,
             *((_DWORD *)MEMORY[0xB1D294] + v6),
             264,
             0) < 0
        || (*(int (__stdcall **)(int *, _DWORD, int, _DWORD))(*this + 16))(
             this,
             *(_DWORD *)(*((_DWORD *)MEMORY[0xB1D294] + v6) + 196),
             v4,
             0) < 0
        || (*(int (__stdcall **)(int *, _DWORD, int, _DWORD))(*this + 16))(
             this,
             *(_DWORD *)(*((_DWORD *)MEMORY[0xB1D294] + v6) + 180),
             8 * MEMORY[0x8871E0]->AircraftFogReveal,
             0) < 0 )
      {
        break; /*0x74ee50*/
      }
      v8 = *((_DWORD *)MEMORY[0xB1D294] + v6); /*0x74ee62*/
      v9 = *(_DWORD *)(v8 + 176); /*0x74ee65*/
      v10 = *(_DWORD *)(v8 + 180); /*0x74ee6b*/
      if ( (*(int (__stdcall **)(int *, int, int, _DWORD))(*this + 16))(this, v9, 4, 0) >= 0 /*0x74ee8a*/
        && (*(int (__stdcall **)(int *, int, int, _DWORD))(*this + 16))(this, v9 + 4, 4, 0) >= 0 )
      {
        for ( i = 0; i < *(_DWORD *)(v9 + 4); ++i ) /*0x74ee93*/
        {
          v12 = *this; /*0x74ee98*/
          v17 = (*(_DWORD *)(*(_DWORD *)(v9 + 8) + 4 * i) - v10) >> 3; /*0x74eeac*/
          if ( (*(int (__stdcall **)(int *, int *, int, _DWORD))(v12 + 16))(this, &v17, 4, 0) < 0 ) /*0x74eeb5*/
            break; /*0x74eeb5*/
        }
        v6 = v14; /*0x74eebf*/
      }
      v14 = ++v6; /*0x74eeca*/
      if ( v6 >= v13 ) /*0x74eece*/
        return 1; /*0x74eece*/
      v4 = v15; /*0x74edcc*/
    }
    return 0; /*0x74edb7*/
  }
  return 1; /*0x74ed85*/
}
}
} // namespace gamemd

// 0x751620
namespace gamemd {
int SaveGame::SaveAudioQueueItems()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall sub_751620(int *this)
{
  int v2; // esi
  int *i; // edi
  int v4; // esi
  char *v5; // ecx
  char *SampleName; // ebx
  char *v7; // ecx
  char *v8; // eax
  int v9; // eax
  int v11; // [esp+10h] [ebp-14h] BYREF
  _DWORD v12[4]; // [esp+14h] [ebp-10h] BYREF

  v11 = SaveGame::CountLinkedList(MEMORY[0xB1D320]); /*0x751637*/
  v2 = (*(int (__stdcall **)(int *, int *, int, _DWORD))(*this + 16))(this, &v11, 4, 0); /*0x751647*/
  if ( v2 >= 0 )
  {
    for ( i = (int *)AudioQueue::GetNext(MEMORY[0xB1D320]); i; i = (int *)AudioQueue::GetNextAlt(i) )
    {
      v4 = -1; /*0x751665*/
      v12[0] = -1; /*0x751668*/
      v5 = (char *)i[5]; /*0x75166c*/
      if ( v5 )
      {
        SampleName = VocClass::GetSampleName(v5); /*0x751678*/
        if ( SampleName )
        {
          v4 = 0; /*0x751683*/
          if ( MEMORY[0xB1D388] <= 0 )
          {
LABEL_11:
            v4 = -1; /*0x7516bc*/
          }
          else
          {
            while ( 1 )
            {
              v7 = (char *)**((_DWORD **)MEMORY[0xB1D37C] + v4); /*0x751692*/
              v8 = v7 ? VocClass::GetSampleName(v7) : MEMORY[0x846574];
              if ( !_strcmpi(SampleName, v8) ) /*0x7516a6*/
                break; /*0x7516a6*/
              if ( ++v4 >= MEMORY[0xB1D388] ) /*0x7516ba*/
                goto LABEL_11; /*0x7516ba*/
            }
          }
        }
        v12[0] = v4; /*0x7516bf*/
      }
      v12[1] = i[8]; /*0x7516c8*/
      v9 = *this; /*0x7516cf*/
      v12[2] = i[9]; /*0x7516d2*/
      v12[3] = i[10]; /*0x7516e1*/
      v2 = (*(int (__stdcall **)(int *, _DWORD *, int, _DWORD))(v9 + 16))(this, v12, 16, 0); /*0x7516e8*/
      if ( v2 < 0 ) /*0x7516ec*/
        break; /*0x7516ec*/
    }
  }
  return v2; /*0x751701*/
}
}
} // namespace gamemd

// 0x4073B0
namespace gamemd {
int SaveGame::CountLinkedList()
{
{
    int *v1;
    int result;
    v1 = (int *)*(void**)this;
    for ( result = 0; v1 != this; ++result )
    v1 = (int *)*v1;
    return result;
}
}
} // namespace gamemd

// 0x413850
namespace gamemd {
int SaveGame::SaveIteratedData(int a2)
{
{
    int v2;
    int v3;
    int *i;
    int v5;
    int result;
    int v7;
    v2 = a2;
    v3 = 0;
    for ( i = this + 1; ; i += 6 )
  {
    v5 = *(int *)v2;
    a2 = i[3];
    result = (*(int (__stdcall **)(int, int *, int, int))(v5 + 16))(v2, &a2, 4, 0);
    if ( result < 0 )
    break;
    v7 = 0;
    if ( a2 > 0 )
    {
    do
      {
    result = (*(int (__stdcall **)(int, int, int, int))(*(int *)(v2) + 16))(v2, *i + 4 * v7, 4, 0);
    if ( result < 0 )
    return result;
      }
    while ( ++v7 < a2 );
    }
    if ( ++v3 >= 400 )
    return 0;
  }
    return result;
}
}
} // namespace gamemd

// 0x4C6340
namespace gamemd {
int SaveGame::SaveBlock68(int a2)
{
{
    return (*(int (__stdcall **)(int, void *, int, int))(*(int *)(a2) + 16))(a2, this, 68, 0);
}
}
} // namespace gamemd

// 0x513CB0
namespace gamemd {
int SaveGame::WriteObject(int a1, int a2)
{
{
    int v2;
    int v3;
    char v5[24];
    v2 = StreamClass::ResetPosition(a1, a2);
    v3 = (*(int (__thiscall **)(int))(**(int **)(a1 + 8) + 132))(*(int *)(a1 + 8));
    FrameSnapshot::InitMax(2 * *(int *)(v3 + 1820));
    qmemcpy((void *)(a1 + 44), v5, 0x18u);
    return v2;
}
}
} // namespace gamemd

// 0x67FDF0
namespace gamemd {
HRESULT SaveGame_Start(LPSTREAM pStm, int a2)
{
{
    int v4;
    HRESULT result;
    int v6;
    int v7;
    LPPERSISTSTREAM pPStm;
    int v9;
    v4 = *(int *)pStm->__pad_0;
    v9 = *(int *)(a2 + 16);
    result = (*(int (__stdcall **)(LPSTREAM, int *, int, int))(v4 + 16))(pStm, &v9, 4, 0);
    if ( result >= 0 )
  {
    v6 = 0;
    if ( v9 <= 0 )
    {
    return 0;
    }
    else
    {
    while ( 1 )
      {
    v7 = *(int *)(a2 + 4);
    pPStm = 0;
    result = (***(int (__stdcall ****)(int, void *, LPPERSISTSTREAM *))(v7 + 4 * v6))( *(int *)(v7 + 4 * v6), &IID_IPersistStream, &pPStm);
    if ( result < 0 )
    break;
    result = OleSaveToStream(pPStm, pStm);
    if ( result < 0 )
    break;
    result = (*(int (__stdcall **)(LPPERSISTSTREAM))(*(int *)(pPStm) + 8))(pPStm);
    if ( result < 0 )
    break;
    if ( ++v6 >= v9 )
    return 0;
      }
    }
  }
    return result;
}
}
} // namespace gamemd

// 0x67FE70
namespace gamemd {
HRESULT SaveGame_Start_67FE70(LPSTREAM pStm, int a2)
{
{
    int v4;
    HRESULT result;
    int v6;
    int v7;
    LPPERSISTSTREAM pPStm;
    int v9;
    v4 = *(int *)pStm->__pad_0;
    v9 = *(int *)(a2 + 16);
    result = (*(int (__stdcall **)(LPSTREAM, int *, int, int))(v4 + 16))(pStm, &v9, 4, 0);
    if ( result >= 0 )
  {
    v6 = 0;
    if ( v9 <= 0 )
    {
    return 0;
    }
    else
    {
    while ( 1 )
      {
    v7 = *(int *)(a2 + 4);
    pPStm = 0;
    result = (***(int (__stdcall ****)(int, void *, LPPERSISTSTREAM *))(v7 + 4 * v6))( *(int *)(v7 + 4 * v6), &IID_IPersistStream, &pPStm);
    if ( result < 0 )
    break;
    result = OleSaveToStream(pPStm, pStm);
    if ( result < 0 )
    break;
    result = (*(int (__stdcall **)(LPPERSISTSTREAM))(*(int *)(pPStm) + 8))(pPStm);
    if ( result < 0 )
    break;
    if ( ++v6 >= v9 )
    return 0;
      }
    }
  }
    return result;
}
}
} // namespace gamemd

// 0x67FEF0
namespace gamemd {
HRESULT SaveGame_Start_67FEF0(LPSTREAM pStm, int a2)
{
{
    int v4;
    HRESULT result;
    int v6;
    int v7;
    LPPERSISTSTREAM pPStm;
    int v9;
    v4 = *(int *)pStm->__pad_0;
    v9 = *(int *)(a2 + 16);
    result = (*(int (__stdcall **)(LPSTREAM, int *, int, int))(v4 + 16))(pStm, &v9, 4, 0);
    if ( result >= 0 )
  {
    v6 = 0;
    if ( v9 <= 0 )
    {
    return 0;
    }
    else
    {
    while ( 1 )
      {
    v7 = *(int *)(a2 + 4);
    pPStm = 0;
    result = (***(int (__stdcall ****)(int, void *, LPPERSISTSTREAM *))(v7 + 4 * v6))( *(int *)(v7 + 4 * v6), &IID_IPersistStream, &pPStm);
    if ( result < 0 )
    break;
    result = OleSaveToStream(pPStm, pStm);
    if ( result < 0 )
    break;
    result = (*(int (__stdcall **)(LPPERSISTSTREAM))(*(int *)(pPStm) + 8))(pPStm);
    if ( result < 0 )
    break;
    if ( ++v6 >= v9 )
    return 0;
      }
    }
  }
    return result;
}
}
} // namespace gamemd

// 0x67FF70
namespace gamemd {
HRESULT SaveGame_Start_67FF70(LPSTREAM pStm, int a2)
{
{
    int v4;
    HRESULT result;
    int v6;
    int v7;
    LPPERSISTSTREAM pPStm;
    int v9;
    v4 = *(int *)pStm->__pad_0;
    v9 = *(int *)(a2 + 16);
    result = (*(int (__stdcall **)(LPSTREAM, int *, int, int))(v4 + 16))(pStm, &v9, 4, 0);
    if ( result >= 0 )
  {
    v6 = 0;
    if ( v9 <= 0 )
    {
    return 0;
    }
    else
    {
    while ( 1 )
      {
    v7 = *(int *)(a2 + 4);
    pPStm = 0;
    result = (***(int (__stdcall ****)(int, void *, LPPERSISTSTREAM *))(v7 + 4 * v6))( *(int *)(v7 + 4 * v6), &IID_IPersistStream, &pPStm);
    if ( result < 0 )
    break;
    result = OleSaveToStream(pPStm, pStm);
    if ( result < 0 )
    break;
    result = (*(int (__stdcall **)(LPPERSISTSTREAM))(*(int *)(pPStm) + 8))(pPStm);
    if ( result < 0 )
    break;
    if ( ++v6 >= v9 )
    return 0;
      }
    }
  }
    return result;
}
}
} // namespace gamemd

// 0x67FFF0
namespace gamemd {
HRESULT SaveGame_Start_67FFF0(LPSTREAM pStm, int a2)
{
{
    int v4;
    HRESULT result;
    int v6;
    int v7;
    LPPERSISTSTREAM pPStm;
    int v9;
    v4 = *(int *)pStm->__pad_0;
    v9 = *(int *)(a2 + 16);
    result = (*(int (__stdcall **)(LPSTREAM, int *, int, int))(v4 + 16))(pStm, &v9, 4, 0);
    if ( result >= 0 )
  {
    v6 = 0;
    if ( v9 <= 0 )
    {
    return 0;
    }
    else
    {
    while ( 1 )
      {
    v7 = *(int *)(a2 + 4);
    pPStm = 0;
    result = (***(int (__stdcall ****)(int, void *, LPPERSISTSTREAM *))(v7 + 4 * v6))( *(int *)(v7 + 4 * v6), &IID_IPersistStream, &pPStm);
    if ( result < 0 )
    break;
    result = OleSaveToStream(pPStm, pStm);
    if ( result < 0 )
    break;
    result = (*(int (__stdcall **)(LPPERSISTSTREAM))(*(int *)(pPStm) + 8))(pPStm);
    if ( result < 0 )
    break;
    if ( ++v6 >= v9 )
    return 0;
      }
    }
  }
    return result;
}
}
} // namespace gamemd

// 0x680070
namespace gamemd {
HRESULT SaveGame_Start_680070(LPSTREAM pStm, int a2)
{
{
    int v4;
    HRESULT result;
    int v6;
    int v7;
    LPPERSISTSTREAM pPStm;
    int v9;
    v4 = *(int *)pStm->__pad_0;
    v9 = *(int *)(a2 + 16);
    result = (*(int (__stdcall **)(LPSTREAM, int *, int, int))(v4 + 16))(pStm, &v9, 4, 0);
    if ( result >= 0 )
  {
    v6 = 0;
    if ( v9 <= 0 )
    {
    return 0;
    }
    else
    {
    while ( 1 )
      {
    v7 = *(int *)(a2 + 4);
    pPStm = 0;
    result = (***(int (__stdcall ****)(int, void *, LPPERSISTSTREAM *))(v7 + 4 * v6))( *(int *)(v7 + 4 * v6), &IID_IPersistStream, &pPStm);
    if ( result < 0 )
    break;
    result = OleSaveToStream(pPStm, pStm);
    if ( result < 0 )
    break;
    result = (*(int (__stdcall **)(LPPERSISTSTREAM))(*(int *)(pPStm) + 8))(pPStm);
    if ( result < 0 )
    break;
    if ( ++v6 >= v9 )
    return 0;
      }
    }
  }
    return result;
}
}
} // namespace gamemd

// 0x6800F0
namespace gamemd {
HRESULT SaveGame_Start_6800F0(LPSTREAM pStm, int a2)
{
{
    int v4;
    HRESULT result;
    int v6;
    int v7;
    LPPERSISTSTREAM pPStm;
    int v9;
    v4 = *(int *)pStm->__pad_0;
    v9 = *(int *)(a2 + 16);
    result = (*(int (__stdcall **)(LPSTREAM, int *, int, int))(v4 + 16))(pStm, &v9, 4, 0);
    if ( result >= 0 )
  {
    v6 = 0;
    if ( v9 <= 0 )
    {
    return 0;
    }
    else
    {
    while ( 1 )
      {
    v7 = *(int *)(a2 + 4);
    pPStm = 0;
    result = (***(int (__stdcall ****)(int, void *, LPPERSISTSTREAM *))(v7 + 4 * v6))( *(int *)(v7 + 4 * v6), &IID_IPersistStream, &pPStm);
    if ( result < 0 )
    break;
    result = OleSaveToStream(pPStm, pStm);
    if ( result < 0 )
    break;
    result = (*(int (__stdcall **)(LPPERSISTSTREAM))(*(int *)(pPStm) + 8))(pPStm);
    if ( result < 0 )
    break;
    if ( ++v6 >= v9 )
    return 0;
      }
    }
  }
    return result;
}
}
} // namespace gamemd

// 0x680170
namespace gamemd {
HRESULT SaveGame_Start_680170(LPSTREAM pStm, int a2)
{
{
    int v4;
    HRESULT result;
    int v6;
    int v7;
    LPPERSISTSTREAM pPStm;
    int v9;
    v4 = *(int *)pStm->__pad_0;
    v9 = *(int *)(a2 + 16);
    result = (*(int (__stdcall **)(LPSTREAM, int *, int, int))(v4 + 16))(pStm, &v9, 4, 0);
    if ( result >= 0 )
  {
    v6 = 0;
    if ( v9 <= 0 )
    {
    return 0;
    }
    else
    {
    while ( 1 )
      {
    v7 = *(int *)(a2 + 4);
    pPStm = 0;
    result = (***(int (__stdcall ****)(int, void *, LPPERSISTSTREAM *))(v7 + 4 * v6))( *(int *)(v7 + 4 * v6), &IID_IPersistStream, &pPStm);
    if ( result < 0 )
    break;
    result = OleSaveToStream(pPStm, pStm);
    if ( result < 0 )
    break;
    result = (*(int (__stdcall **)(LPPERSISTSTREAM))(*(int *)(pPStm) + 8))(pPStm);
    if ( result < 0 )
    break;
    if ( ++v6 >= v9 )
    return 0;
      }
    }
  }
    return result;
}
}
} // namespace gamemd

// 0x6801F0
namespace gamemd {
HRESULT SaveGame_Start_6801F0(LPSTREAM pStm, int a2)
{
{
    int v4;
    HRESULT result;
    int v6;
    int v7;
    LPPERSISTSTREAM pPStm;
    int v9;
    v4 = *(int *)pStm->__pad_0;
    v9 = *(int *)(a2 + 16);
    result = (*(int (__stdcall **)(LPSTREAM, int *, int, int))(v4 + 16))(pStm, &v9, 4, 0);
    if ( result >= 0 )
  {
    v6 = 0;
    if ( v9 <= 0 )
    {
    return 0;
    }
    else
    {
    while ( 1 )
      {
    v7 = *(int *)(a2 + 4);
    pPStm = 0;
    result = (***(int (__stdcall ****)(int, void *, LPPERSISTSTREAM *))(v7 + 4 * v6))( *(int *)(v7 + 4 * v6), &IID_IPersistStream, &pPStm);
    if ( result < 0 )
    break;
    result = OleSaveToStream(pPStm, pStm);
    if ( result < 0 )
    break;
    result = (*(int (__stdcall **)(LPPERSISTSTREAM))(*(int *)(pPStm) + 8))(pPStm);
    if ( result < 0 )
    break;
    if ( ++v6 >= v9 )
    return 0;
      }
    }
  }
    return result;
}
}
} // namespace gamemd

// 0x680270
namespace gamemd {
HRESULT SaveGame_Start_680270(LPSTREAM pStm, int a2)
{
{
    int v4;
    HRESULT result;
    int v6;
    int v7;
    LPPERSISTSTREAM pPStm;
    int v9;
    v4 = *(int *)pStm->__pad_0;
    v9 = *(int *)(a2 + 16);
    result = (*(int (__stdcall **)(LPSTREAM, int *, int, int))(v4 + 16))(pStm, &v9, 4, 0);
    if ( result >= 0 )
  {
    v6 = 0;
    if ( v9 <= 0 )
    {
    return 0;
    }
    else
    {
    while ( 1 )
      {
    v7 = *(int *)(a2 + 4);
    pPStm = 0;
    result = (***(int (__stdcall ****)(int, void *, LPPERSISTSTREAM *))(v7 + 4 * v6))( *(int *)(v7 + 4 * v6), &IID_IPersistStream, &pPStm);
    if ( result < 0 )
    break;
    result = OleSaveToStream(pPStm, pStm);
    if ( result < 0 )
    break;
    result = (*(int (__stdcall **)(LPPERSISTSTREAM))(*(int *)(pPStm) + 8))(pPStm);
    if ( result < 0 )
    break;
    if ( ++v6 >= v9 )
    return 0;
      }
    }
  }
    return result;
}
}
} // namespace gamemd

// 0x6802F0
namespace gamemd {
HRESULT SaveGame_Start_6802F0(LPSTREAM pStm, int a2)
{
{
    int v4;
    HRESULT result;
    int v6;
    int v7;
    LPPERSISTSTREAM pPStm;
    int v9;
    v4 = *(int *)pStm->__pad_0;
    v9 = *(int *)(a2 + 16);
    result = (*(int (__stdcall **)(LPSTREAM, int *, int, int))(v4 + 16))(pStm, &v9, 4, 0);
    if ( result >= 0 )
  {
    v6 = 0;
    if ( v9 <= 0 )
    {
    return 0;
    }
    else
    {
    while ( 1 )
      {
    v7 = *(int *)(a2 + 4);
    pPStm = 0;
    result = (***(int (__stdcall ****)(int, void *, LPPERSISTSTREAM *))(v7 + 4 * v6))( *(int *)(v7 + 4 * v6), &IID_IPersistStream, &pPStm);
    if ( result < 0 )
    break;
    result = OleSaveToStream(pPStm, pStm);
    if ( result < 0 )
    break;
    result = (*(int (__stdcall **)(LPPERSISTSTREAM))(*(int *)(pPStm) + 8))(pPStm);
    if ( result < 0 )
    break;
    if ( ++v6 >= v9 )
    return 0;
      }
    }
  }
    return result;
}
}
} // namespace gamemd

// 0x680370
namespace gamemd {
HRESULT SaveGame_Start_680370(LPSTREAM pStm, int a2)
{
{
    int v4;
    HRESULT result;
    int v6;
    int v7;
    LPPERSISTSTREAM pPStm;
    int v9;
    v4 = *(int *)pStm->__pad_0;
    v9 = *(int *)(a2 + 16);
    result = (*(int (__stdcall **)(LPSTREAM, int *, int, int))(v4 + 16))(pStm, &v9, 4, 0);
    if ( result >= 0 )
  {
    v6 = 0;
    if ( v9 <= 0 )
    {
    return 0;
    }
    else
    {
    while ( 1 )
      {
    v7 = *(int *)(a2 + 4);
    pPStm = 0;
    result = (***(int (__stdcall ****)(int, void *, LPPERSISTSTREAM *))(v7 + 4 * v6))( *(int *)(v7 + 4 * v6), &IID_IPersistStream, &pPStm);
    if ( result < 0 )
    break;
    result = OleSaveToStream(pPStm, pStm);
    if ( result < 0 )
    break;
    result = (*(int (__stdcall **)(LPPERSISTSTREAM))(*(int *)(pPStm) + 8))(pPStm);
    if ( result < 0 )
    break;
    if ( ++v6 >= v9 )
    return 0;
      }
    }
  }
    return result;
}
}
} // namespace gamemd

// 0x6803F0
namespace gamemd {
HRESULT SaveGame_Start_6803F0(LPSTREAM pStm, int a2)
{
{
    int v4;
    HRESULT result;
    int v6;
    int v7;
    LPPERSISTSTREAM pPStm;
    int v9;
    v4 = *(int *)pStm->__pad_0;
    v9 = *(int *)(a2 + 16);
    result = (*(int (__stdcall **)(LPSTREAM, int *, int, int))(v4 + 16))(pStm, &v9, 4, 0);
    if ( result >= 0 )
  {
    v6 = 0;
    if ( v9 <= 0 )
    {
    return 0;
    }
    else
    {
    while ( 1 )
      {
    v7 = *(int *)(a2 + 4);
    pPStm = 0;
    result = (***(int (__stdcall ****)(int, void *, LPPERSISTSTREAM *))(v7 + 4 * v6))( *(int *)(v7 + 4 * v6), &IID_IPersistStream, &pPStm);
    if ( result < 0 )
    break;
    result = OleSaveToStream(pPStm, pStm);
    if ( result < 0 )
    break;
    result = (*(int (__stdcall **)(LPPERSISTSTREAM))(*(int *)(pPStm) + 8))(pPStm);
    if ( result < 0 )
    break;
    if ( ++v6 >= v9 )
    return 0;
      }
    }
  }
    return result;
}
}
} // namespace gamemd

// 0x680470
namespace gamemd {
HRESULT SaveGame_Start_680470(LPSTREAM pStm, int a2)
{
{
    int v4;
    HRESULT result;
    int v6;
    int v7;
    LPPERSISTSTREAM pPStm;
    int v9;
    v4 = *(int *)pStm->__pad_0;
    v9 = *(int *)(a2 + 16);
    result = (*(int (__stdcall **)(LPSTREAM, int *, int, int))(v4 + 16))(pStm, &v9, 4, 0);
    if ( result >= 0 )
  {
    v6 = 0;
    if ( v9 <= 0 )
    {
    return 0;
    }
    else
    {
    while ( 1 )
      {
    v7 = *(int *)(a2 + 4);
    pPStm = 0;
    result = (***(int (__stdcall ****)(int, void *, LPPERSISTSTREAM *))(v7 + 4 * v6))( *(int *)(v7 + 4 * v6), &IID_IPersistStream, &pPStm);
    if ( result < 0 )
    break;
    result = OleSaveToStream(pPStm, pStm);
    if ( result < 0 )
    break;
    result = (*(int (__stdcall **)(LPPERSISTSTREAM))(*(int *)(pPStm) + 8))(pPStm);
    if ( result < 0 )
    break;
    if ( ++v6 >= v9 )
    return 0;
      }
    }
  }
    return result;
}
}
} // namespace gamemd

// 0x6804F0
namespace gamemd {
HRESULT SaveGame_Start_6804F0(LPSTREAM pStm, int a2)
{
{
    int v4;
    HRESULT result;
    int v6;
    int v7;
    LPPERSISTSTREAM pPStm;
    int v9;
    v4 = *(int *)pStm->__pad_0;
    v9 = *(int *)(a2 + 16);
    result = (*(int (__stdcall **)(LPSTREAM, int *, int, int))(v4 + 16))(pStm, &v9, 4, 0);
    if ( result >= 0 )
  {
    v6 = 0;
    if ( v9 <= 0 )
    {
    return 0;
    }
    else
    {
    while ( 1 )
      {
    v7 = *(int *)(a2 + 4);
    pPStm = 0;
    result = (***(int (__stdcall ****)(int, void *, LPPERSISTSTREAM *))(v7 + 4 * v6))( *(int *)(v7 + 4 * v6), &IID_IPersistStream, &pPStm);
    if ( result < 0 )
    break;
    result = OleSaveToStream(pPStm, pStm);
    if ( result < 0 )
    break;
    result = (*(int (__stdcall **)(LPPERSISTSTREAM))(*(int *)(pPStm) + 8))(pPStm);
    if ( result < 0 )
    break;
    if ( ++v6 >= v9 )
    return 0;
      }
    }
  }
    return result;
}
}
} // namespace gamemd

// 0x680570
namespace gamemd {
HRESULT SaveGame_Start_680570(LPSTREAM pStm, int a2)
{
{
    int v4;
    HRESULT result;
    int v6;
    int v7;
    LPPERSISTSTREAM pPStm;
    int v9;
    v4 = *(int *)pStm->__pad_0;
    v9 = *(int *)(a2 + 16);
    result = (*(int (__stdcall **)(LPSTREAM, int *, int, int))(v4 + 16))(pStm, &v9, 4, 0);
    if ( result >= 0 )
  {
    v6 = 0;
    if ( v9 <= 0 )
    {
    return 0;
    }
    else
    {
    while ( 1 )
      {
    v7 = *(int *)(a2 + 4);
    pPStm = 0;
    result = (***(int (__stdcall ****)(int, void *, LPPERSISTSTREAM *))(v7 + 4 * v6))( *(int *)(v7 + 4 * v6), &IID_IPersistStream, &pPStm);
    if ( result < 0 )
    break;
    result = OleSaveToStream(pPStm, pStm);
    if ( result < 0 )
    break;
    result = (*(int (__stdcall **)(LPPERSISTSTREAM))(*(int *)(pPStm) + 8))(pPStm);
    if ( result < 0 )
    break;
    if ( ++v6 >= v9 )
    return 0;
      }
    }
  }
    return result;
}
}
} // namespace gamemd

// 0x6805F0
namespace gamemd {
HRESULT SaveGame_Start_6805F0(LPSTREAM pStm, int a2)
{
{
    int v4;
    HRESULT result;
    int v6;
    int v7;
    LPPERSISTSTREAM pPStm;
    int v9;
    v4 = *(int *)pStm->__pad_0;
    v9 = *(int *)(a2 + 16);
    result = (*(int (__stdcall **)(LPSTREAM, int *, int, int))(v4 + 16))(pStm, &v9, 4, 0);
    if ( result >= 0 )
  {
    v6 = 0;
    if ( v9 <= 0 )
    {
    return 0;
    }
    else
    {
    while ( 1 )
      {
    v7 = *(int *)(a2 + 4);
    pPStm = 0;
    result = (***(int (__stdcall ****)(int, void *, LPPERSISTSTREAM *))(v7 + 4 * v6))( *(int *)(v7 + 4 * v6), &IID_IPersistStream, &pPStm);
    if ( result < 0 )
    break;
    result = OleSaveToStream(pPStm, pStm);
    if ( result < 0 )
    break;
    result = (*(int (__stdcall **)(LPPERSISTSTREAM))(*(int *)(pPStm) + 8))(pPStm);
    if ( result < 0 )
    break;
    if ( ++v6 >= v9 )
    return 0;
      }
    }
  }
    return result;
}
}
} // namespace gamemd

// 0x680670
namespace gamemd {
HRESULT SaveGame_Start_680670(LPSTREAM pStm, int a2)
{
{
    int v4;
    HRESULT result;
    int v6;
    int v7;
    LPPERSISTSTREAM pPStm;
    int v9;
    v4 = *(int *)pStm->__pad_0;
    v9 = *(int *)(a2 + 16);
    result = (*(int (__stdcall **)(LPSTREAM, int *, int, int))(v4 + 16))(pStm, &v9, 4, 0);
    if ( result >= 0 )
  {
    v6 = 0;
    if ( v9 <= 0 )
    {
    return 0;
    }
    else
    {
    while ( 1 )
      {
    v7 = *(int *)(a2 + 4);
    pPStm = 0;
    result = (***(int (__stdcall ****)(int, void *, LPPERSISTSTREAM *))(v7 + 4 * v6))( *(int *)(v7 + 4 * v6), &IID_IPersistStream, &pPStm);
    if ( result < 0 )
    break;
    result = OleSaveToStream(pPStm, pStm);
    if ( result < 0 )
    break;
    result = (*(int (__stdcall **)(LPPERSISTSTREAM))(*(int *)(pPStm) + 8))(pPStm);
    if ( result < 0 )
    break;
    if ( ++v6 >= v9 )
    return 0;
      }
    }
  }
    return result;
}
}
} // namespace gamemd

// 0x6806F0
namespace gamemd {
HRESULT SaveGame_Start_6806F0(LPSTREAM pStm, int a2)
{
{
    int v4;
    HRESULT result;
    int v6;
    int v7;
    LPPERSISTSTREAM pPStm;
    int v9;
    v4 = *(int *)pStm->__pad_0;
    v9 = *(int *)(a2 + 16);
    result = (*(int (__stdcall **)(LPSTREAM, int *, int, int))(v4 + 16))(pStm, &v9, 4, 0);
    if ( result >= 0 )
  {
    v6 = 0;
    if ( v9 <= 0 )
    {
    return 0;
    }
    else
    {
    while ( 1 )
      {
    v7 = *(int *)(a2 + 4);
    pPStm = 0;
    result = (***(int (__stdcall ****)(int, void *, LPPERSISTSTREAM *))(v7 + 4 * v6))( *(int *)(v7 + 4 * v6), &IID_IPersistStream, &pPStm);
    if ( result < 0 )
    break;
    result = OleSaveToStream(pPStm, pStm);
    if ( result < 0 )
    break;
    result = (*(int (__stdcall **)(LPPERSISTSTREAM))(*(int *)(pPStm) + 8))(pPStm);
    if ( result < 0 )
    break;
    if ( ++v6 >= v9 )
    return 0;
      }
    }
  }
    return result;
}
}
} // namespace gamemd

// 0x680770
namespace gamemd {
HRESULT SaveGame_Start_680770(LPSTREAM pStm, int a2)
{
{
    int v4;
    HRESULT result;
    int v6;
    int v7;
    LPPERSISTSTREAM pPStm;
    int v9;
    v4 = *(int *)pStm->__pad_0;
    v9 = *(int *)(a2 + 16);
    result = (*(int (__stdcall **)(LPSTREAM, int *, int, int))(v4 + 16))(pStm, &v9, 4, 0);
    if ( result >= 0 )
  {
    v6 = 0;
    if ( v9 <= 0 )
    {
    return 0;
    }
    else
    {
    while ( 1 )
      {
    v7 = *(int *)(a2 + 4);
    pPStm = 0;
    result = (***(int (__stdcall ****)(int, void *, LPPERSISTSTREAM *))(v7 + 4 * v6))( *(int *)(v7 + 4 * v6), &IID_IPersistStream, &pPStm);
    if ( result < 0 )
    break;
    result = OleSaveToStream(pPStm, pStm);
    if ( result < 0 )
    break;
    result = (*(int (__stdcall **)(LPPERSISTSTREAM))(*(int *)(pPStm) + 8))(pPStm);
    if ( result < 0 )
    break;
    if ( ++v6 >= v9 )
    return 0;
      }
    }
  }
    return result;
}
}
} // namespace gamemd

// 0x6807F0
namespace gamemd {
HRESULT SaveGame_Start_6807F0(LPSTREAM pStm, int a2)
{
{
    int v4;
    HRESULT result;
    int v6;
    int v7;
    LPPERSISTSTREAM pPStm;
    int v9;
    v4 = *(int *)pStm->__pad_0;
    v9 = *(int *)(a2 + 16);
    result = (*(int (__stdcall **)(LPSTREAM, int *, int, int))(v4 + 16))(pStm, &v9, 4, 0);
    if ( result >= 0 )
  {
    v6 = 0;
    if ( v9 <= 0 )
    {
    return 0;
    }
    else
    {
    while ( 1 )
      {
    v7 = *(int *)(a2 + 4);
    pPStm = 0;
    result = (***(int (__stdcall ****)(int, void *, LPPERSISTSTREAM *))(v7 + 4 * v6))( *(int *)(v7 + 4 * v6), &IID_IPersistStream, &pPStm);
    if ( result < 0 )
    break;
    result = OleSaveToStream(pPStm, pStm);
    if ( result < 0 )
    break;
    result = (*(int (__stdcall **)(LPPERSISTSTREAM))(*(int *)(pPStm) + 8))(pPStm);
    if ( result < 0 )
    break;
    if ( ++v6 >= v9 )
    return 0;
      }
    }
  }
    return result;
}
}
} // namespace gamemd

// 0x680870
namespace gamemd {
HRESULT SaveGame_Start_680870(LPSTREAM pStm, int a2)
{
{
    int v4;
    HRESULT result;
    int v6;
    int v7;
    LPPERSISTSTREAM pPStm;
    int v9;
    v4 = *(int *)pStm->__pad_0;
    v9 = *(int *)(a2 + 16);
    result = (*(int (__stdcall **)(LPSTREAM, int *, int, int))(v4 + 16))(pStm, &v9, 4, 0);
    if ( result >= 0 )
  {
    v6 = 0;
    if ( v9 <= 0 )
    {
    return 0;
    }
    else
    {
    while ( 1 )
      {
    v7 = *(int *)(a2 + 4);
    pPStm = 0;
    result = (***(int (__stdcall ****)(int, void *, LPPERSISTSTREAM *))(v7 + 4 * v6))( *(int *)(v7 + 4 * v6), &IID_IPersistStream, &pPStm);
    if ( result < 0 )
    break;
    result = OleSaveToStream(pPStm, pStm);
    if ( result < 0 )
    break;
    result = (*(int (__stdcall **)(LPPERSISTSTREAM))(*(int *)(pPStm) + 8))(pPStm);
    if ( result < 0 )
    break;
    if ( ++v6 >= v9 )
    return 0;
      }
    }
  }
    return result;
}
}
} // namespace gamemd

// 0x6808F0
namespace gamemd {
HRESULT SaveGame_Start_6808F0(LPSTREAM pStm, int a2)
{
{
    int v4;
    HRESULT result;
    int v6;
    int v7;
    LPPERSISTSTREAM pPStm;
    int v9;
    v4 = *(int *)pStm->__pad_0;
    v9 = *(int *)(a2 + 16);
    result = (*(int (__stdcall **)(LPSTREAM, int *, int, int))(v4 + 16))(pStm, &v9, 4, 0);
    if ( result >= 0 )
  {
    v6 = 0;
    if ( v9 <= 0 )
    {
    return 0;
    }
    else
    {
    while ( 1 )
      {
    v7 = *(int *)(a2 + 4);
    pPStm = 0;
    result = (***(int (__stdcall ****)(int, void *, LPPERSISTSTREAM *))(v7 + 4 * v6))( *(int *)(v7 + 4 * v6), &IID_IPersistStream, &pPStm);
    if ( result < 0 )
    break;
    result = OleSaveToStream(pPStm, pStm);
    if ( result < 0 )
    break;
    result = (*(int (__stdcall **)(LPPERSISTSTREAM))(*(int *)(pPStm) + 8))(pPStm);
    if ( result < 0 )
    break;
    if ( ++v6 >= v9 )
    return 0;
      }
    }
  }
    return result;
}
}
} // namespace gamemd

// 0x680970
namespace gamemd {
HRESULT SaveGame_Start_680970(LPSTREAM pStm, int a2)
{
{
    int v4;
    HRESULT result;
    int v6;
    int v7;
    LPPERSISTSTREAM pPStm;
    int v9;
    v4 = *(int *)pStm->__pad_0;
    v9 = *(int *)(a2 + 16);
    result = (*(int (__stdcall **)(LPSTREAM, int *, int, int))(v4 + 16))(pStm, &v9, 4, 0);
    if ( result >= 0 )
  {
    v6 = 0;
    if ( v9 <= 0 )
    {
    return 0;
    }
    else
    {
    while ( 1 )
      {
    v7 = *(int *)(a2 + 4);
    pPStm = 0;
    result = (***(int (__stdcall ****)(int, void *, LPPERSISTSTREAM *))(v7 + 4 * v6))( *(int *)(v7 + 4 * v6), &IID_IPersistStream, &pPStm);
    if ( result < 0 )
    break;
    result = OleSaveToStream(pPStm, pStm);
    if ( result < 0 )
    break;
    result = (*(int (__stdcall **)(LPPERSISTSTREAM))(*(int *)(pPStm) + 8))(pPStm);
    if ( result < 0 )
    break;
    if ( ++v6 >= v9 )
    return 0;
      }
    }
  }
    return result;
}
}
} // namespace gamemd

// 0x6809F0
namespace gamemd {
HRESULT SaveGame_Start_6809F0(LPSTREAM pStm, int a2)
{
{
    int v4;
    HRESULT result;
    int v6;
    int v7;
    LPPERSISTSTREAM pPStm;
    int v9;
    v4 = *(int *)pStm->__pad_0;
    v9 = *(int *)(a2 + 16);
    result = (*(int (__stdcall **)(LPSTREAM, int *, int, int))(v4 + 16))(pStm, &v9, 4, 0);
    if ( result >= 0 )
  {
    v6 = 0;
    if ( v9 <= 0 )
    {
    return 0;
    }
    else
    {
    while ( 1 )
      {
    v7 = *(int *)(a2 + 4);
    pPStm = 0;
    result = (***(int (__stdcall ****)(int, void *, LPPERSISTSTREAM *))(v7 + 4 * v6))( *(int *)(v7 + 4 * v6), &IID_IPersistStream, &pPStm);
    if ( result < 0 )
    break;
    result = OleSaveToStream(pPStm, pStm);
    if ( result < 0 )
    break;
    result = (*(int (__stdcall **)(LPPERSISTSTREAM))(*(int *)(pPStm) + 8))(pPStm);
    if ( result < 0 )
    break;
    if ( ++v6 >= v9 )
    return 0;
      }
    }
  }
    return result;
}
}
} // namespace gamemd

// 0x680A70
namespace gamemd {
HRESULT SaveGame_Start_680A70(LPSTREAM pStm, int a2)
{
{
    int v4;
    HRESULT result;
    int v6;
    int v7;
    LPPERSISTSTREAM pPStm;
    int v9;
    v4 = *(int *)pStm->__pad_0;
    v9 = *(int *)(a2 + 16);
    result = (*(int (__stdcall **)(LPSTREAM, int *, int, int))(v4 + 16))(pStm, &v9, 4, 0);
    if ( result >= 0 )
  {
    v6 = 0;
    if ( v9 <= 0 )
    {
    return 0;
    }
    else
    {
    while ( 1 )
      {
    v7 = *(int *)(a2 + 4);
    pPStm = 0;
    result = (***(int (__stdcall ****)(int, void *, LPPERSISTSTREAM *))(v7 + 4 * v6))( *(int *)(v7 + 4 * v6), &IID_IPersistStream, &pPStm);
    if ( result < 0 )
    break;
    result = OleSaveToStream(pPStm, pStm);
    if ( result < 0 )
    break;
    result = (*(int (__stdcall **)(LPPERSISTSTREAM))(*(int *)(pPStm) + 8))(pPStm);
    if ( result < 0 )
    break;
    if ( ++v6 >= v9 )
    return 0;
      }
    }
  }
    return result;
}
}
} // namespace gamemd

// 0x680AF0
namespace gamemd {
HRESULT SaveGame_Start_680AF0(LPSTREAM pStm, int a2)
{
{
    int v4;
    HRESULT result;
    int v6;
    int v7;
    LPPERSISTSTREAM pPStm;
    int v9;
    v4 = *(int *)pStm->__pad_0;
    v9 = *(int *)(a2 + 16);
    result = (*(int (__stdcall **)(LPSTREAM, int *, int, int))(v4 + 16))(pStm, &v9, 4, 0);
    if ( result >= 0 )
  {
    v6 = 0;
    if ( v9 <= 0 )
    {
    return 0;
    }
    else
    {
    while ( 1 )
      {
    v7 = *(int *)(a2 + 4);
    pPStm = 0;
    result = (***(int (__stdcall ****)(int, void *, LPPERSISTSTREAM *))(v7 + 4 * v6))( *(int *)(v7 + 4 * v6), &IID_IPersistStream, &pPStm);
    if ( result < 0 )
    break;
    result = OleSaveToStream(pPStm, pStm);
    if ( result < 0 )
    break;
    result = (*(int (__stdcall **)(LPPERSISTSTREAM))(*(int *)(pPStm) + 8))(pPStm);
    if ( result < 0 )
    break;
    if ( ++v6 >= v9 )
    return 0;
      }
    }
  }
    return result;
}
}
} // namespace gamemd

// 0x680B70
namespace gamemd {
HRESULT SaveGame_Start_680B70(LPSTREAM pStm, int a2)
{
{
    int v4;
    HRESULT result;
    int v6;
    int v7;
    LPPERSISTSTREAM pPStm;
    int v9;
    v4 = *(int *)pStm->__pad_0;
    v9 = *(int *)(a2 + 16);
    result = (*(int (__stdcall **)(LPSTREAM, int *, int, int))(v4 + 16))(pStm, &v9, 4, 0);
    if ( result >= 0 )
  {
    v6 = 0;
    if ( v9 <= 0 )
    {
    return 0;
    }
    else
    {
    while ( 1 )
      {
    v7 = *(int *)(a2 + 4);
    pPStm = 0;
    result = (***(int (__stdcall ****)(int, void *, LPPERSISTSTREAM *))(v7 + 4 * v6))( *(int *)(v7 + 4 * v6), &IID_IPersistStream, &pPStm);
    if ( result < 0 )
    break;
    result = OleSaveToStream(pPStm, pStm);
    if ( result < 0 )
    break;
    result = (*(int (__stdcall **)(LPPERSISTSTREAM))(*(int *)(pPStm) + 8))(pPStm);
    if ( result < 0 )
    break;
    if ( ++v6 >= v9 )
    return 0;
      }
    }
  }
    return result;
}
}
} // namespace gamemd

// 0x680BF0
namespace gamemd {
HRESULT SaveGame_Start_680BF0(LPSTREAM pStm, int a2)
{
{
    int v4;
    HRESULT result;
    int v6;
    int v7;
    LPPERSISTSTREAM pPStm;
    int v9;
    v4 = *(int *)pStm->__pad_0;
    v9 = *(int *)(a2 + 16);
    result = (*(int (__stdcall **)(LPSTREAM, int *, int, int))(v4 + 16))(pStm, &v9, 4, 0);
    if ( result >= 0 )
  {
    v6 = 0;
    if ( v9 <= 0 )
    {
    return 0;
    }
    else
    {
    while ( 1 )
      {
    v7 = *(int *)(a2 + 4);
    pPStm = 0;
    result = (***(int (__stdcall ****)(int, void *, LPPERSISTSTREAM *))(v7 + 4 * v6))( *(int *)(v7 + 4 * v6), &IID_IPersistStream, &pPStm);
    if ( result < 0 )
    break;
    result = OleSaveToStream(pPStm, pStm);
    if ( result < 0 )
    break;
    result = (*(int (__stdcall **)(LPPERSISTSTREAM))(*(int *)(pPStm) + 8))(pPStm);
    if ( result < 0 )
    break;
    if ( ++v6 >= v9 )
    return 0;
      }
    }
  }
    return result;
}
}
} // namespace gamemd

// 0x680C70
namespace gamemd {
HRESULT SaveGame_Start_680C70(LPSTREAM pStm, int a2)
{
{
    int v4;
    HRESULT result;
    int v6;
    int v7;
    LPPERSISTSTREAM pPStm;
    int v9;
    v4 = *(int *)pStm->__pad_0;
    v9 = *(int *)(a2 + 16);
    result = (*(int (__stdcall **)(LPSTREAM, int *, int, int))(v4 + 16))(pStm, &v9, 4, 0);
    if ( result >= 0 )
  {
    v6 = 0;
    if ( v9 <= 0 )
    {
    return 0;
    }
    else
    {
    while ( 1 )
      {
    v7 = *(int *)(a2 + 4);
    pPStm = 0;
    result = (***(int (__stdcall ****)(int, void *, LPPERSISTSTREAM *))(v7 + 4 * v6))( *(int *)(v7 + 4 * v6), &IID_IPersistStream, &pPStm);
    if ( result < 0 )
    break;
    result = OleSaveToStream(pPStm, pStm);
    if ( result < 0 )
    break;
    result = (*(int (__stdcall **)(LPPERSISTSTREAM))(*(int *)(pPStm) + 8))(pPStm);
    if ( result < 0 )
    break;
    if ( ++v6 >= v9 )
    return 0;
      }
    }
  }
    return result;
}
}
} // namespace gamemd

// 0x680CF0
namespace gamemd {
HRESULT SaveGame_Start_680CF0(LPSTREAM pStm, int a2)
{
{
    int v4;
    HRESULT result;
    int v6;
    int v7;
    LPPERSISTSTREAM pPStm;
    int v9;
    v4 = *(int *)pStm->__pad_0;
    v9 = *(int *)(a2 + 16);
    result = (*(int (__stdcall **)(LPSTREAM, int *, int, int))(v4 + 16))(pStm, &v9, 4, 0);
    if ( result >= 0 )
  {
    v6 = 0;
    if ( v9 <= 0 )
    {
    return 0;
    }
    else
    {
    while ( 1 )
      {
    v7 = *(int *)(a2 + 4);
    pPStm = 0;
    result = (***(int (__stdcall ****)(int, void *, LPPERSISTSTREAM *))(v7 + 4 * v6))( *(int *)(v7 + 4 * v6), &IID_IPersistStream, &pPStm);
    if ( result < 0 )
    break;
    result = OleSaveToStream(pPStm, pStm);
    if ( result < 0 )
    break;
    result = (*(int (__stdcall **)(LPPERSISTSTREAM))(*(int *)(pPStm) + 8))(pPStm);
    if ( result < 0 )
    break;
    if ( ++v6 >= v9 )
    return 0;
      }
    }
  }
    return result;
}
}
} // namespace gamemd

// 0x680D70
namespace gamemd {
HRESULT SaveGame_Start_680D70(LPSTREAM pStm, int a2)
{
{
    int v4;
    HRESULT result;
    int v6;
    int v7;
    LPPERSISTSTREAM pPStm;
    int v9;
    v4 = *(int *)pStm->__pad_0;
    v9 = *(int *)(a2 + 16);
    result = (*(int (__stdcall **)(LPSTREAM, int *, int, int))(v4 + 16))(pStm, &v9, 4, 0);
    if ( result >= 0 )
  {
    v6 = 0;
    if ( v9 <= 0 )
    {
    return 0;
    }
    else
    {
    while ( 1 )
      {
    v7 = *(int *)(a2 + 4);
    pPStm = 0;
    result = (***(int (__stdcall ****)(int, void *, LPPERSISTSTREAM *))(v7 + 4 * v6))( *(int *)(v7 + 4 * v6), &IID_IPersistStream, &pPStm);
    if ( result < 0 )
    break;
    result = OleSaveToStream(pPStm, pStm);
    if ( result < 0 )
    break;
    result = (*(int (__stdcall **)(LPPERSISTSTREAM))(*(int *)(pPStm) + 8))(pPStm);
    if ( result < 0 )
    break;
    if ( ++v6 >= v9 )
    return 0;
      }
    }
  }
    return result;
}
}
} // namespace gamemd

// 0x680DF0
namespace gamemd {
HRESULT SaveGame_Start_680DF0(LPSTREAM pStm, int a2)
{
{
    int v4;
    HRESULT result;
    int v6;
    int v7;
    LPPERSISTSTREAM pPStm;
    int v9;
    v4 = *(int *)pStm->__pad_0;
    v9 = *(int *)(a2 + 16);
    result = (*(int (__stdcall **)(LPSTREAM, int *, int, int))(v4 + 16))(pStm, &v9, 4, 0);
    if ( result >= 0 )
  {
    v6 = 0;
    if ( v9 <= 0 )
    {
    return 0;
    }
    else
    {
    while ( 1 )
      {
    v7 = *(int *)(a2 + 4);
    pPStm = 0;
    result = (***(int (__stdcall ****)(int, void *, LPPERSISTSTREAM *))(v7 + 4 * v6))( *(int *)(v7 + 4 * v6), &IID_IPersistStream, &pPStm);
    if ( result < 0 )
    break;
    result = OleSaveToStream(pPStm, pStm);
    if ( result < 0 )
    break;
    result = (*(int (__stdcall **)(LPPERSISTSTREAM))(*(int *)(pPStm) + 8))(pPStm);
    if ( result < 0 )
    break;
    if ( ++v6 >= v9 )
    return 0;
      }
    }
  }
    return result;
}
}
} // namespace gamemd

// 0x680E70
namespace gamemd {
HRESULT SaveGame_Start_680E70(LPSTREAM pStm, int a2)
{
{
    int v4;
    HRESULT result;
    int v6;
    int v7;
    LPPERSISTSTREAM pPStm;
    int v9;
    v4 = *(int *)pStm->__pad_0;
    v9 = *(int *)(a2 + 16);
    result = (*(int (__stdcall **)(LPSTREAM, int *, int, int))(v4 + 16))(pStm, &v9, 4, 0);
    if ( result >= 0 )
  {
    v6 = 0;
    if ( v9 <= 0 )
    {
    return 0;
    }
    else
    {
    while ( 1 )
      {
    v7 = *(int *)(a2 + 4);
    pPStm = 0;
    result = (***(int (__stdcall ****)(int, void *, LPPERSISTSTREAM *))(v7 + 4 * v6))( *(int *)(v7 + 4 * v6), &IID_IPersistStream, &pPStm);
    if ( result < 0 )
    break;
    result = OleSaveToStream(pPStm, pStm);
    if ( result < 0 )
    break;
    result = (*(int (__stdcall **)(LPPERSISTSTREAM))(*(int *)(pPStm) + 8))(pPStm);
    if ( result < 0 )
    break;
    if ( ++v6 >= v9 )
    return 0;
      }
    }
  }
    return result;
}
}
} // namespace gamemd

// 0x680EF0
namespace gamemd {
HRESULT SaveGame_Start_680EF0(LPSTREAM pStm, int a2)
{
{
    int v4;
    HRESULT result;
    int v6;
    int v7;
    LPPERSISTSTREAM pPStm;
    int v9;
    v4 = *(int *)pStm->__pad_0;
    v9 = *(int *)(a2 + 16);
    result = (*(int (__stdcall **)(LPSTREAM, int *, int, int))(v4 + 16))(pStm, &v9, 4, 0);
    if ( result >= 0 )
  {
    v6 = 0;
    if ( v9 <= 0 )
    {
    return 0;
    }
    else
    {
    while ( 1 )
      {
    v7 = *(int *)(a2 + 4);
    pPStm = 0;
    result = (***(int (__stdcall ****)(int, void *, LPPERSISTSTREAM *))(v7 + 4 * v6))( *(int *)(v7 + 4 * v6), &IID_IPersistStream, &pPStm);
    if ( result < 0 )
    break;
    result = OleSaveToStream(pPStm, pStm);
    if ( result < 0 )
    break;
    result = (*(int (__stdcall **)(LPPERSISTSTREAM))(*(int *)(pPStm) + 8))(pPStm);
    if ( result < 0 )
    break;
    if ( ++v6 >= v9 )
    return 0;
      }
    }
  }
    return result;
}
}
} // namespace gamemd

// 0x69B560
namespace gamemd {
bool SaveGame::SaveAudioData(int a2)
{
{
    int v2;
    int v4;
    bool result;
    int v6;
    v2 = a2;
    result = 0;
    if ( a2 )
  {
    v4 = *(int *)a2;
    v6 = a2;
    a2 = 300;
    if ( (*(int (__stdcall **)(int, int *, int, int))(v4 + 16))(v6, &a2, 4, 0) >= 0 && (*(int (__stdcall **)(int, void *, int, int))(*(int *)(v2) + 16))(v2, this, a2, 0) >= 0 )
    {
    return 1;
    }
  }
    return result;
}
}
} // namespace gamemd

// 0x721010
namespace gamemd {
int SaveGame::VtableDispatch(int a2)
{
{
    int result;
    result = (*(int (__stdcall **)(int, int, int, int))(*(int *)(a2) + 16))(a2, (int)this + 4, 4, 0);
    if ( result >= 0 )
    return (*(int (__stdcall **)(int, int, int, int))(*(int *)(a2) + 16))(a2, (int)this + 8, 4, 0);
    return result;
}
}
} // namespace gamemd

// 0x7533B0
namespace gamemd {
int SaveGame::WriteMagicHeader()
{
{
    int v2;
    int result;
    int v4;
    int v5;
    v2 = *(void**)this;
    v5 = 1450145875;
    result = (*(int (__stdcall **)(int *, int *, int, int))(v2 + 16))(this, &v5, 4, 0);
    if ( result >= 0 )
  {
    v4 = *(void**)this;
    v5 = 1450145861;
    return (*(int (__stdcall **)(int *, int *, int, int))(v4 + 16))(this, &v5, 4, 0);
  }
    return result;
}
}
} // namespace gamemd
