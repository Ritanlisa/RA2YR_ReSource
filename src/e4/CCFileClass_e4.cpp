// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/Vector_e4.hpp"
#include "e4/classes/CCFileClass_e4.hpp"
#include "e4/classes/BufferIOFileClass_e4.hpp"
#include "e4/classes/MixFileClass_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/AudioController_e4.hpp"
#include "e4/classes/BuildingClass_e4.hpp"
#include "e4/classes/CCINIClass_e4.hpp"
#include "e4/classes/BuildingTypeClass_e4.hpp"
#include "e4/classes/ObjectTypeClass_e4.hpp"
#include "e4/classes/NullModemClass_e4.hpp"
#include "e4/classes/UDPInterfaceClass_e4.hpp"
#include "e4/classes/BTree_e4.hpp"
#include "e4/classes/BufferIO_e4.hpp"
#include "e4/classes/FileClass_e4.hpp"

// 0x4325C0
namespace gamemd {  // G42.18 ns repair
AudioController * * CCFileClass::Close(void * a1, void *a2)
{

  FileClass v3; // eax

  if ( !BYTE1(a1->BufferSize) ) /*0x4325c3*/
    return (a1)->CloseHandle(); /*0x432607*/
  ((BufferIO *)a1)->Flush(); /*0x4325ca*/
  char result; // al
  result = BYTE2(a1->BufferOffset); /*0x4325cf*/
  if ( result ) /*0x4325d4*/
  {
    if ( a1->MixFileIndex ) /*0x4325d6*/
    {
      v3 = a1->FileClass; /*0x4325dd*/
      BYTE1(a1->BufferSize) = 0; /*0x4325e1*/
      result = (*(int (**)(CCFileClass *))(*(unsigned int *)&v3 + 52))(a1); /*0x4325e5*/
      BYTE1(a1->BufferSize) = 1; /*0x4325e8*/
      BYTE2(a1->BufferOffset) = 0; /*0x4325ec*/
      BYTE1(a1->BufferOffset) = 0; /*0x4325f0*/
      return (gamemd::AudioController **)(result); /*0x4325f5*/
    }
    result = (a1)->CloseHandle(); /*0x4325f8*/
    BYTE2(a1->BufferOffset) = 0; /*0x4325fd*/
  }
  BYTE1(a1->BufferOffset) = 0; /*0x432601*/
  return (gamemd::AudioController **)(result); /*0x4325f4*/

}
} // namespace gamemd
// 0x535A70
namespace gamemd {
int CCFileClass::Destruct(void *a1)
{

  /* X11: vtable install elided (X67 star-deref, RHS vt_CCFileClass) */  /*0x535a76*/
  this->q064 = 0; /*0x535a7c*/
  Vector::Clear((int)&this->u32_160); /*0x535a83*/
  *(unsigned int *)this->CDFileClass = &off_7E1668; /*0x535a8a*/
  return ((BufferIOFileClass *)this)->Dtor(); /*0x535a95*/

}
} // namespace gamemd
// 0x65D0D0
namespace gamemd {
int CCFileClass::GetFileSize(void *a1, void *a2)
{

  DWORD FileSize = 0; // edi /*0x65d0d4*/
  int result; // eax
  result = (int)this->FileName; /*0x65d0d6*/
  if ( result == -1 ) /*0x65d0dc*/
  {
    if ( (*(uint8_t (**)(RawFileClass *))(*(unsigned int *)this->__tail_0 + 24))(this) ) /*0x65d0e0*/
    {
      FileSize = GetFileSize(*(HANDLE *)this->FileTimeDateLo, 0); /*0x65d0f2*/
      if ( FileSize == -1 ) /*0x65d0f7*/
      {
        int v4; // ebx
        v4 = *(unsigned int *)this->__tail_0; /*0x65d0fd*/
        int v6; // [esp-8h] [ebp-10h]
        v6 = *&this->FileNameAllocated; /*0x65d0ff*/
        DWORD LastError; // eax
        LastError = GetLastError(); /*0x65d102*/
        (*(void (**)(RawFileClass *, DWORD, unsigned int, int))(v4 + 64))(this, LastError, 0, v6); /*0x65d10b*/
        result = -1 - (unsigned int)this->Handle; /*0x65d113*/
        this->FileName = (void *)result; /*0x65d116*/
        return result; /*0x65d11b*/
      }
    }
    else if ( (*(int (**)(RawFileClass *, int))(*(unsigned int *)this->__tail_0 + 28))(this, 1) ) /*0x65d122*/
    {
      FileSize = (*(int (**)(RawFileClass *))(*(unsigned int *)this->__tail_0 + 44))(this); /*0x65d130*/
      (*(void (**)(RawFileClass *))(*(unsigned int *)this->__tail_0 + 52))(this); /*0x65d136*/
    }
    result = FileSize - (unsigned int)this->Handle; /*0x65d13e*/
    this->FileName = (void *)result; /*0x65d140*/
  }
  return result; /*0x65d119*/
}
} // namespace gamemd
// 0x69E320
namespace gamemd {
void CCFileClass::ProcessStream(unsigned int a1)
{

  void *i; // edi
  void *v3; // esi
  unsigned int *v4; // eax
  unsigned int *v5; // eax
  void *v6; // esi
  unsigned char *v7; // ebp
  MixFileClass *v8; // ecx
  unsigned int *v9; // edi
  unsigned int *v10; // eax
  unsigned int *v11; // eax

  for ( i = dword_B077B0; i; i = (void *)*((unsigned int *)i + 6) ) /*0x69e330*/
  {
    if ( *((unsigned int *)i + 8) <= a1 && *(unsigned short *)i == 0xFFFF && *((unsigned char *)i + 16) ) /*0x69e33d*/
    {
      v3 = (void *)*((unsigned int *)i + 3); /*0x69e342*/
      if ( v3 ) /*0x69e347*/
      {
        if ( *(unsigned short *)v3 == 0xFFFF ) /*0x69e34d*/
        {
          BTree::DeleteSubtree(*((BTree **)i + 3)); /*0x69e351*/
          v4 = (unsigned int *)v3->u32_18; /*0x69e356*/
          if ( v4 ) /*0x69e35b*/
            v4[7] = v3->u32_1C; /*0x69e360*/
          v5 = (unsigned int *)v3->u32_1C; /*0x69e363*/
          if ( v5 ) /*0x69e368*/
            v5[6] = v3->u32_18; /*0x69e36d*/
          else
            dword_B077B0 = (void *)v3->u32_18; /*0x69e375*/
          if ( v3->u32_8 ) /*0x69e37a*/
          {
            free(*((void **)v3 + 2)); /*0x69e382*/
            v3->u32_8 = 0; /*0x69e38a*/
          }
        }
        __3_YAXPAX_Z(v3); /*0x69e38e*/
      }
      *((unsigned int *)i + 3) = 0; /*0x69e396*/
      *((unsigned char *)i + 16) = 0; /*0x69e399*/
    }
  }
  v6 = dword_B077B4; /*0x69e3a3*/
  if ( dword_B077B4 ) /*0x69e3ab*/
  {
    if ( *(unsigned short *)dword_B077B4 == 0xFFFF ) /*0x69e3b1*/
    {
      v7 = (char *)dword_B077B4 + 16; /*0x69e3b6*/
      if ( *((unsigned char *)dword_B077B4 + 16) ) /*0x69e3b3*/
      {
        v8 = (MixFileClass *)*((unsigned int *)dword_B077B4 + 3); /*0x69e3bd*/
        v9 = (char *)dword_B077B4 + 12; /*0x69e3c0*/
        if ( v8 ) /*0x69e3c5*/
          MixFileClass::CacheNode_Dtor(v8, 1); /*0x69e3c9*/
        *v9 = 0; /*0x69e3ce*/
        *v7 = 0; /*0x69e3d0*/
      }
      v10 = (unsigned int *)v6->nextArrayIndex; /*0x69e3d3*/
      if ( v10 ) /*0x69e3d8*/
        v10[7] = v6->referenceCount; /*0x69e3dd*/
      v11 = (unsigned int *)v6->referenceCount; /*0x69e3e0*/
      if ( v11 ) /*0x69e3e5*/
        v11[6] = v6->nextArrayIndex; /*0x69e3ea*/
      else
        dword_B077B0 = (void *)v6->nextArrayIndex; /*0x69e3f2*/
      if ( v6->vtable3 ) /*0x69e3f7*/
      {
        free(*((void **)v6 + 2)); /*0x69e3ff*/
        v6->ptr_3 = 0; /*0x69e407*/
      }
    }
    __3_YAXPAX_Z(v6); /*0x69e40b*/
    dword_B077B4 = 0; /*0x69e413*/
    dword_B077B8 = 0; /*0x69e419*/
    dword_B077BC = 0; /*0x69e41f*/
  }

}
} // namespace gamemd