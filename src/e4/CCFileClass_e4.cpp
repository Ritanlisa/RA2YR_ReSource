// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/Vector_e4.hpp"

// 0x4325C0
int CCFileClass::Close()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  char result; // al

  if ( !this->q029 ) /*0x4325c3*/
    return ((int (*)(void))FileClass::CloseHandle)(); /*0x432607*/
  BufferIO::Flush(); /*0x4325ca*/
  result = this->q026; /*0x4325cf*/
  if ( result ) /*0x4325d4*/
  {
    if ( this->MixFileIndex ) /*0x4325d6*/
    {
      int v3 = *(_DWORD *)this; /*0x4325dd*/
      this->q029 = 0; /*0x4325e1*/
      result = (*(int (__thiscall **)(_BYTE *))(v3 + 52))(this); /*0x4325e5*/
      this->q029 = 1; /*0x4325e8*/
      this->q026 = 0; /*0x4325ec*/
      this->q025 = 0; /*0x4325f0*/
      return result; /*0x4325f5*/
    }
    result = FileClass::CloseHandle(this); /*0x4325f8*/
    this->q026 = 0; /*0x4325fd*/
  }
  this->q025 = 0; /*0x432601*/
  return result; /*0x4325f4*/
}
}

// 0x535A70
int CCFileClass::Destruct()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  *this = &vt_CCFileClass; /*0x535a76*/
  this->q064 = 0; /*0x535a7c*/
  Vector::Clear((int)(this + 22)); /*0x535a83*/
  *this = &off_7E1668; /*0x535a8a*/
  return BufferIOFileClass::Dtor(this); /*0x535a95*/
}
}

// 0x65D0D0
int CCFileClass::GetFileSize()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  DWORD FileSize; // edi
  int result; // eax
  DWORD LastError; // eax

  FileSize = 0; /*0x65d0d4*/
  result = this->FilePointer; /*0x65d0d6*/
  if ( result == -1 ) /*0x65d0dc*/
  {
    if ( this->Destru_vt06() ) /*0x65d0e0*/
    {
      FileSize = GetFileSize((HANDLE)this->FileTimeDateLo, 0); /*0x65d0f2*/
      if ( FileSize == -1 ) /*0x65d0f7*/
      {
        int v4 = *this; /*0x65d0fd*/
        char v6 = this->FileNameAllocated; /*0x65d0ff*/
        LastError = GetLastError(); /*0x65d102*/
        this->Destru_vt16(LastError, 0, v6); /*0x65d10b*/
        result = -1 - this->Handle; /*0x65d113*/
        this->FilePointer = result; /*0x65d116*/
        return result; /*0x65d11b*/
      }
    }
    else if ( this->Load_1(1) ) /*0x65d122*/
    {
      FileSize = this->GetSize(); /*0x65d130*/
      this->Reset_8(); /*0x65d136*/
    }
    result = FileSize - this->Handle; /*0x65d13e*/
    this->FilePointer = result; /*0x65d140*/
  }
  return result; /*0x65d119*/
}
}

// 0x69E320
void CCFileClass::ProcessStream(unsigned int a1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{

  _DWORD * v1 = DataGlobal_B077B0; /*0x69e324*/
  if ( DataGlobal_B077B0 ) /*0x69e330*/
  {
    do /*0x69e3a1*/
    {
      if ( v1[8] <= a1 && *(_WORD *)v1 == 0xFFFF && *((_BYTE *)v1 + 16) ) /*0x69e33d*/
      {
        void * v3 = (void *)v1[3]; /*0x69e342*/
        if ( v3 ) /*0x69e347*/
        {
          if ( *(_WORD *)v3 == 0xFFFF ) /*0x69e34d*/
          {
            BTree::DeleteSubtree((_DWORD *)v1[3]); /*0x69e351*/
            int v4 = *((_DWORD *)v3 + 6); /*0x69e356*/
            if ( v4 ) /*0x69e35b*/
              *(_DWORD *)(v4 + 28) = *((_DWORD *)v3 + 7); /*0x69e360*/
            int v5 = *((_DWORD *)v3 + 7); /*0x69e363*/
            if ( v5 ) /*0x69e368*/
              *(_DWORD *)(v5 + 24) = *((_DWORD *)v3 + 6); /*0x69e36d*/
            else
              DataGlobal_B077B0 = (void *)*((_DWORD *)v3 + 6); /*0x69e375*/
            if ( *((_DWORD *)v3 + 2) ) /*0x69e37a*/
            {
              free(*((void **)v3 + 2)); /*0x69e382*/
              *((_DWORD *)v3 + 2) = 0; /*0x69e38a*/
            }
          }
          __3_YAXPAX_Z(v3); /*0x69e38e*/
        }
        v1[3] = 0; /*0x69e396*/
        *((_BYTE *)v1 + 16) = 0; /*0x69e399*/
      }
      v1 = (_DWORD *)v1[6]; /*0x69e39c*/
    }
    while ( v1 ); /*0x69e3a1*/
  }
  void * v6 = DataGlobal_B077B4; /*0x69e3a3*/
  if ( DataGlobal_B077B4 ) /*0x69e3ab*/
  {
    if ( *(_WORD *)DataGlobal_B077B4 == 0xFFFF ) /*0x69e3b1*/
    {
      _BYTE * v7 = (char *)DataGlobal_B077B4 + 16; /*0x69e3b6*/
      if ( *((_BYTE *)DataGlobal_B077B4 + 16) ) /*0x69e3b3*/
      {
        void * v8 = (void *)*((_DWORD *)DataGlobal_B077B4 + 3); /*0x69e3bd*/
        _DWORD * v9 = (char *)DataGlobal_B077B4 + 12; /*0x69e3c0*/
        if ( v8 ) /*0x69e3c5*/
          MixFileClass::CacheNode_Dtor(v8, 1); /*0x69e3c9*/
        *v9 = 0; /*0x69e3ce*/
        *v7 = 0; /*0x69e3d0*/
      }
      int v10 = *((_DWORD *)v6 + 6); /*0x69e3d3*/
      if ( v10 ) /*0x69e3d8*/
        *(_DWORD *)(v10 + 28) = *((_DWORD *)v6 + 7); /*0x69e3dd*/
      int v11 = *((_DWORD *)v6 + 7); /*0x69e3e0*/
      if ( v11 ) /*0x69e3e5*/
        *(_DWORD *)(v11 + 24) = *((_DWORD *)v6 + 6); /*0x69e3ea*/
      else
        DataGlobal_B077B0 = (void *)*((_DWORD *)v6 + 6); /*0x69e3f2*/
      if ( *((_DWORD *)v6 + 2) ) /*0x69e3f7*/
      {
        free(*((void **)v6 + 2)); /*0x69e3ff*/
        *((_DWORD *)v6 + 2) = 0; /*0x69e407*/
      }
    }
    __3_YAXPAX_Z(v6); /*0x69e40b*/
    DataGlobal_B077B4 = 0; /*0x69e413*/
    DataGlobal_B077B8 = 0; /*0x69e419*/
    DataGlobal_B077BC = 0; /*0x69e41f*/
  }
}
}
