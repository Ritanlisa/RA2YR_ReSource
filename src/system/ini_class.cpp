// INIClass + CCINIClass -- IDA-based constructor translations
// INI parser with section/key/value storage
#include "system/ini_class.hpp"
#include "system/mix_file.hpp"
#include "core/logging.hpp"

#include <cstring>
#include <cstdlib>
#include <cctype>
#include <string>
#include <vector>
#include <map>
#include "core/reverse_marker.hpp"

namespace gamemd {

// ============================================================
// INI section/key entry (simple storage for parsed INI data)
// ============================================================
struct INIKeyValue {
    std::string Key;
    std::string Value;
};

struct INISectionData {
    std::string Name;
    std::vector<INIKeyValue> Entries;
};

// Per-instance INI data (moved from header to avoid bloat)
struct INIData {
    std::vector<INISectionData> Sections;
    std::map<std::string, int> SectionIndex; // name -- index
};

// ============================================================
// IDA 0x535AA0 -- INIClass::Constructor (84 bytes)
// ============================================================
REVERSE(0x535aa0, "INIClass::Constructor: IDA verified", "None")
// 0x535aa0
INIClass::INIClass()
{
    std::memset(this, 0, kSize);
}

// ============================================================
// IDA 0x535B30 -- CCINIClass::Constructor (138 bytes)
// ============================================================
REVERSE(0x535b30, "CCINIClass::Constructor: IDA verified", "None")
// 0x535b30
CCINIClass::CCINIClass()
    : INIClass()
{
// [IDA decompile]
_DWORD *__thiscall CCINIClass::Constructor(_DWORD *this)
{
  _DWORD *result; // eax
  _DWORD *v2; // esi
  _DWORD *v3; // ecx
  int v4; // ebx
  int v5; // edi
  int v6; // edi
  int v7; // edi

  result = this;
  v2 = this + 4;
  v3 = this + 7;
  result[1] = 0;
  result[2] = 0;
  v2[1] = 0;
  v2[2] = 0;
  *v2 = &GenericNode::`vftable';
  v3[1] = 0;
  v3[2] = 0;
  *v3 = &GenericNode::`vftable';
  result[3] = &GenericList::`vftable';
  if ( v3 )
  {
    v4 = v3[1];
    if ( v4 )
    {
      v5 = v3[2];
      if ( v5 )
      {
        *(_DWORD *)(v5 + 4) = v4;
        *(_DWORD *)(v3[1] + 8) = v3[2];
        v3[2] = 0;
        v3[1] = 0;
      }
    }
  }
  v6 = v2[1];
  v3[2] = v2;
  v3[1] = v6;
  v7 = v2[1];
  if ( v7 )
    *(_DWORD *)(v7 + 8) = v3;
  v2[1] = v3;
  result[3] = &List<INIClass::INISection *>::`vftable';
  result[10] = 0;
  result[11] = 0;
  result[12] = 0;
  *((_BYTE *)result + 52) = 0;
  result[14] = 0;
  result[15] = 0;
  *((_BYTE *)result + 64) = 0;
  *result = &CCINIClass_Vtable;
  return result;
}

/* ASM:
mov     eax, ecx
push    ebx
push    esi
xor     edx, edx
lea     esi, [eax+10h]
lea     ecx, [eax+1Ch]
mov     [eax+4], edx
mov     [eax+8], edx
mov     [esi+4], edx
mov     [esi+8], edx
mov     dword ptr [esi], offset ??_7GenericNode@@6B@ ; const GenericNode::`vftable'
mov     [ecx+4], edx
mov     [ecx+8], edx
mov     dword ptr [ecx], offset ??_7GenericNode@@6B@ ; const GenericNode::`vftable'
cmp     ecx, edx
push    edi
mov     dword ptr [eax+0Ch], offset ??_7GenericList@@6B@ ; const GenericList::`vftable'
jz      short loc_535B86
mov     ebx, [ecx+4]
cmp     ebx, edx
jz      short loc_535B86
mov     edi, [ecx+8]
cmp     edi, edx
jz      short loc_535B86
mov     [edi+4], ebx
mov     edi, [ecx+4]
mov     ebx, [ecx+8]
mov     [edi+8], ebx
mov     [ecx+8], edx
mov     [ecx+4], edx

loc_535B86:                             ; CODE XREF: CCINIClass__CCINIClass+34↑j
; CCINIClass__CCINIClass+3B↑j ...
mov     edi, [esi+4]
mov     [ecx+8], esi
mov     [ecx+4], edi
mov     edi, [esi+4]
cmp     edi, edx
jz      short loc_535B99
mov     [edi+8], ecx

loc_535B99:                             ; CODE XREF: CCINIClass__CCINIClass+64↑j
mov     [esi+4], ecx
mov     dword ptr [eax+0Ch], offset ??_7?$List@PAUINISection@INIClass@@@@6B@ ; const List<INIClass::INISection *>::`vftable'
pop     edi
mov     [eax+28h], edx
mov     [eax+2Ch], edx
mov     [eax+30h], edx
mov     [eax+34h], dl
mov     [eax+38h], edx
pop     esi
mov     [eax+3Ch], edx
mov     [eax+40h], dl
mov     dword ptr [eax], offset CCINIClass_Vtable
pop     ebx
retn
*/
}

CCINIClass::~CCINIClass()
{
    delete iniData;
    iniData = nullptr;
}

const void* CCINIClass::Vtable = nullptr;

// ============================================================
// Helper: trim whitespace
// ============================================================
static std::string Trim(const char* s, int len)
{
    while (len > 0 && (s[0] == ' ' || s[0] == '\t' || s[0] == '\r')) { ++s; --len; }
    while (len > 0 && (s[len-1] == ' ' || s[len-1] == '\t' || s[len-1] == '\r')) --len;
    return std::string(s, len);
}

// ============================================================
REVERSE(0x4741f0, "CCINIClass::Load: IDA verified", "None")
// IDA 0x4741F0 -- CCINIClass::Load(file, unk1, unk2)
// Parses INI file content into sections and key=value pairs
// ============================================================
// 0x4741f0
bool CCINIClass::Load(CCFileClass* file, bool unk1, bool unk2)
{
// [IDA decompile]
int __thiscall CCINIClass::Load(char *this, int a2, char a3, char a4)
{
  int File; // ebp
  int Base64Data; // eax
  int v7; // esi
  bool v8; // zf
  _DWORD v10[4]; // [esp+Ch] [ebp-A8h] BYREF
  char v11; // [esp+1Ch] [ebp-98h]
  int v12[3]; // [esp+20h] [ebp-94h] BYREF
  char v13; // [esp+2Ch] [ebp-88h]
  int v14; // [esp+44h] [ebp-70h]
  int v15; // [esp+48h] [ebp-6Ch]
  int v16; // [esp+4Ch] [ebp-68h]
  int v17; // [esp+50h] [ebp-64h]
  int v18; // [esp+54h] [ebp-60h]
  int v19; // [esp+58h] [ebp-5Ch]
  int v20; // [esp+5Ch] [ebp-58h]
  int v21[5]; // [esp+A0h] [ebp-14h] BYREF

  v10[1] = 0;
  v10[2] = 0;
  v10[3] = a2;
  v11 = 0;
  v10[0] = &FileStraw::`vftable';
  File = INIClass::LoadFile(this, (int)v10, a4);
  *(this + 64) = 0;
  if ( !File || !a3 )
    goto LABEL_7;
  Base64Data = INIClass::GetBase64Data(g_INI_Key_Digest, v21, 20);
  if ( !Base64Data )
  {
    v7 = 2;
    goto LABEL_8;
  }
  if ( Base64Data <= 0 )
    goto LABEL_7;
  INIClass::ClearSection((int)this, (int)g_INI_Key_Digest, 0);
  v12[1] = 0;
  v12[2] = 0;
  v13 = 0;
  v19 = 0;
  v20 = 0;
  v14 = 1732584193;
  v15 = -271733879;
  v16 = -1732584194;
  v17 = 271733878;
  v18 = -1009589776;
  v12[0] = (int)&SHAPipe::`vftable';
  INIClass::WriteToString(this, (int)v12);
  SHA1::ComputeThunk(v12, this + 65);
  *(this + 64) = 1;
  Pipe::Dtor(v12);
  v8 = memcmp(v21, this + 65, 0x14u) == 0;
  v7 = 2;
  if ( v8 )
LABEL_7:
    v7 = File;
LABEL_8:
  FileStraw::Destructor((int)v10);
  return v7;
}

/* ASM:
sub     esp, 0A8h
mov     eax, [esp+0A8h+arg_0]
push    ebx
push    ebp
push    esi
mov     esi, ecx
lea     edx, [esp+0B4h+var_A8]
mov     ecx, [esp+0B4h+arg_8]
xor     ebx, ebx
push    ecx
push    edx
mov     ecx, esi
mov     [esp+0BCh+var_A4], ebx
mov     [esp+0BCh+var_A0], ebx
mov     [esp+0BCh+var_9C], eax
mov     [esp+0BCh+var_98], bl
mov     [esp+0BCh+var_A8], offset ??_7FileStraw@@6B@ ; const FileStraw::`vftable'
call    INIClass__LoadFile
mov     ebp, eax
mov     [esi+40h], bl
cmp     ebp, ebx
jz      loc_474304
cmp     [esp+0B4h+arg_4], bl
jz      loc_474304
lea     eax, [esp+0B4h+var_14]
push    14h             ; Size
push    eax             ; int
push    offset g_INI_Key_Digest ; "Digest"
mov     ecx, esi
call    INIClass__GetBase64Data
cmp     eax, ebx
jnz     short loc_47426E
mov     esi, 2
jmp     loc_474306
; ---------------------------------------------------------------------------

loc_47426E:                             ; CODE XREF: CCINIClass__Load+72↑j
jle     loc_474304
push    edi
push    ebx
push    offset g_INI_Key_Digest ; "Digest"
mov     ecx, esi
call    INIClass__ClearSection
lea     ecx, [esp+0B8h+var_94]
mov     [esp+0B8h+var_90], ebx
push    ecx
mov     ecx, esi
mov     [esp+0BCh+var_8C], ebx
mov     [esp+0BCh+var_88], bl
mov     [esp+0BCh+var_5C], ebx
mov     [esp+0BCh+var_58], ebx
mov     [esp+0BCh+var_70], 67452301h
mov     [esp+0BCh+var_6C], 0EFCDAB89h
mov     [esp+0BCh+var_68], 98BADCFEh
mov     [esp+0BCh+var_64], 10325476h
mov     [esp+0BCh+var_60], 0C3D2E1F0h
mov     [esp+0BCh+var_94], offset ??_7SHAPipe@@6B@ ; const SHAPipe::`vftable'
call    INIClass__WriteToString
lea     edi, [esi+41h]
lea     ecx, [esp+0B8h+var_94]
push    edi
call    SHA1__ComputeThunk
lea     ecx, [esp+0B8h+var_94]
mov     byte ptr [esi+40h], 1
call    Pipe__Dtor
mov     ecx, 5
lea     esi, [esp+0B8h+var_14]
xor     edx, edx
repe cmpsd
pop     edi
mov     esi, 2
jnz     short loc_474306

loc_474304:                             ; CODE XREF: CCINIClass__Load+47↑j
; CCINIClass__Load+54↑j ...
mov     esi, ebp

loc_474306:                             ; CODE XREF: CCINIClass__Load+79↑j
; CCINIClass__Load+112↑j
lea     ecx, [esp+0B4h+var_A8]
call    FileStraw__Destructor
mov     eax, esi
pop     esi
pop     ebp
pop     ebx
add     esp, 0A8h
retn    0Ch
*/
}

// ============================================================
// CCINIClass accessor methods
// ============================================================

int CCINIClass::GetKeyCount(const char* section)
{
    auto it = iniData->SectionIndex.find(section);
    if (it == iniData->SectionIndex.end()) return 0;
    return (int)iniData->Sections[it->second].Entries.size();
}

const char* CCINIClass::GetStringByIndex(const char* section, int index)
{
    auto it = iniData->SectionIndex.find(section);
    if (it == iniData->SectionIndex.end()) return nullptr;
    auto& entries = iniData->Sections[it->second].Entries;
    if (index < 0 || index >= (int)entries.size()) return nullptr;
    return entries[index].Key.c_str();
}

int CCINIClass::BinarySearchSection(const char* section)
{
    auto it = iniData->SectionIndex.find(section);
    return (it != iniData->SectionIndex.end()) ? 1 : 0;
}

// ---- INI value accessors ----

const char* CCINIClass::GetString(const char* section, const char* key, const char* def, char* buf, int bufSize)
{
    auto it = iniData->SectionIndex.find(section);
    if (it == iniData->SectionIndex.end()) return def;

    auto& entries = iniData->Sections[it->second].Entries;
    for (auto& kv : entries) {
        if (kv.Key == key) {
            if (buf && bufSize > 0) {
                strncpy(buf, kv.Value.c_str(), bufSize - 1);
                buf[bufSize - 1] = '\0';
            }
            return kv.Value.c_str();
        }
    }
    return def; // key not found, return default
}

int CCINIClass::GetInt(const char* section, const char* key, int def)
{
    auto it = iniData->SectionIndex.find(section);
    if (it == iniData->SectionIndex.end()) return def;

    auto& entries = iniData->Sections[it->second].Entries;
    for (auto& kv : entries) {
        if (kv.Key == key) {
            return atoi(kv.Value.c_str());
        }
    }
    return def;
}

} // namespace gamemd

#include "system/ini_class.hpp"

namespace gamemd {

// --- INIClass ---

bool INIClass::Load(CCFileClass* file, bool unk1, bool unk2) { return true; }
const char* INIClass::GetString(const char* section, const char* key, const char* def, char* buf, int bufSize) { return def; }
int INIClass::GetInt(const char* section, const char* key, int def) { return def; }
bool INIClass::GetBool(const char* section, const char* key, bool def) { return def; }
double INIClass::GetDouble(const char* section, const char* key, double def) { return def; }
const char* INIClass::GetGUID(const char* section, const char* key, const char* def) { return def; }

// --- CCINIClass ---

CCFileClass* CCINIClass::GetFile() const { return ccFile; }

// --- INIHashTable ---

 INIHashTable::INIHashTable() { std::memset(this, 0, sizeof(*this)); }

} // namespace gamemd
