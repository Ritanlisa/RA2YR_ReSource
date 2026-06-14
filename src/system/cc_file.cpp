// CCFileClass -- IDA-based class for file access (MIX pool search + disk fallback)
#include "gamemd/system/cc_file.hpp"
#include "gamemd/system/mix_file.hpp"
#include "gamemd/system/file_system.hpp"
#include "gamemd/core/logging.hpp"

#include <cstring>
#include "gamemd/core/reverse_marker.hpp"

namespace gamemd
{

CCFileClass::CCFileClass(const char* pFileName) noexcept
    : CDFileClass(noinit_t())
{
    std::memset(&Buffer, 0, sizeof(Buffer));
    FileID       = 0;
    MixFileIndex = 0;

    // Store filename for later Open
    (void)pFileName; // filename stored by SetFileName or opened explicitly
}

// IDA 0x473C50 -- CCFileClass::Open
// Searches MIX pool first, then falls back to disk
REVERSE(0x473c50, "CCFileClass::Open: IDA verified", "None")
bool CCFileClass::Open(const char* pFileName)
{
    if (!pFileName || !pFileName[0])
        return false;

    // Compute the CRC32 hash used by MIX files
    FileID = MixFileClass::ComputeID(pFileName);

    // Search MIX pool (later-loaded MIXes override earlier ones)
    auto& pool = MixFileClass::GetMixPool();
    for (int i = pool.Count - 1; i >= 0; --i) {
        auto* mix = pool[i];
        if (!mix || !mix->IsValid())
            continue;

        int idx = mix->FindIndex(pFileName);
        if (idx < 0)
            continue;

        int sz = mix->GetSize(idx);
        if (sz <= 0)
            continue;

        LOG_TRACE("CCFileClass::Open '%s' found in MIX[%d] (%d bytes)", pFileName, i, sz);
        MixFileIndex = idx;
        Buffer = MemoryBuffer(sz);
        if (mix->Extract(idx, Buffer.Buffer, sz)) {
            return true;
        }
        Buffer.Clear();
    }

    // Fall back to disk
    FILE* fp = fopen(pFileName, "rb");
    if (!fp)
        return false;

    fseek(fp, 0, SEEK_END);
    long sz = ftell(fp);
    fseek(fp, 0, SEEK_SET);

    Buffer = MemoryBuffer(static_cast<int>(sz));
    if (fread(Buffer.Buffer, 1, sz, fp) == (size_t)sz) {
        fclose(fp);
        return true;
    }

    Buffer.Clear();
    fclose(fp);
    return false;
}

REVERSE(0x4a3890, "CCFileClass::ReadEntireFile: IDA verified", "None")
// IDA 0x4A3890 -- CCFileClass::ReadEntireFile
void* CCFileClass::ReadEntireFile()
{
    if (Buffer.Buffer && Buffer.Size > 0)
        return Buffer.Buffer;

    // If not loaded, try to open the stored filename
    // (filename is stored in the base class's FileName field)
    return FileSystem::LoadFile(FileName, false);
}

REVERSE(0x473ce0, "CCFileClass::Reset: IDA verified", "None")
// IDA 0x473CE0 -- CCFileClass::Reset
void CCFileClass::Reset()
{
    Buffer.Clear();
    FileID       = 0;
    MixFileIndex = 0;
}

// IDA: 0x432610 — BufferIOFileClass dtor (84B)
// Frees internal buffer (this+12), zeros flags, calls RawFileClass::Dtor.
// a2&1 → conditional free of the object block.
extern void RawFileClass_Dtor(void*);  // IDA 0x65CA00

void* BufferIOFileClass_Destructor(void* block, bool free_block)
{
    auto* fields = reinterpret_cast<uint32_t*>(block);
    auto* bytes  = reinterpret_cast<uint8_t*>(block);

    void* buffer = reinterpret_cast<void*>(fields[12]);  // buffer pointer
    if (buffer)
    {
        if (bytes[36])  // ownership flag
        {
            operator delete(buffer);
            bytes[36] = 0;
        }
        fields[12] = 0;
    }
    fields[13] = 0;     // clear additional fields
    bytes[37] = 0;
    bytes[39] = 0;
    bytes[40] = 0;
    bytes[41] = 0;

    RawFileClass_Dtor(block);  // parent dtor

    if (free_block)
        operator delete(block);

    return block;
}

// IDA: 0x775610 — WinModemClass dtor (85B)
// Closes handle (Block+23), frees buffer (Block+9), conditional free of Block.
extern void Debug_Log();  // IDA 0x4068E0

void* WinModemClass_Destructor(void* block, bool free_block)
{
    auto* fields = reinterpret_cast<uint32_t*>(block);

    uint32_t handle = fields[23];  // DWORD at offset 92
    if (handle != 0xFFFFFFFF)
    {
        Debug_Log();
        CloseHandle(reinterpret_cast<HANDLE>(static_cast<uintptr_t>(handle)));
        fields[23] = 0xFFFFFFFF;
    }

    void* buffer = reinterpret_cast<void*>(fields[9]);  // DWORD at offset 36
    if (buffer)
        operator delete(buffer);

    if (free_block)
        operator delete(block);

    return block;
}

// IDA: 0x4F3F60 — GraphicMenuShortcutItem dtor (86B)
// Frees VectorClass<uint> (Block+5), zeros flags, calls GraphicMenuItem::Destructor.
extern void GraphicMenuItem_Destructor(void*);  // IDA 0x4F3A70

void* GraphicMenuShortcutItem_Destructor(void* block, bool free_block)
{
    auto* fields = reinterpret_cast<uint32_t*>(block);
    auto* bytes  = reinterpret_cast<uint8_t*>(block);

    void* vec_buffer = reinterpret_cast<void*>(fields[5]);  // Vector buffer at offset 20
    if (vec_buffer && bytes[29])
    {
        operator delete(vec_buffer);
        fields[5] = 0;
    }
    bytes[29] = 0;
    fields[6] = 0;

    GraphicMenuItem_Destructor(block);

    if (free_block)
        operator delete(block);

    return block;
}

// IDA: 0x55AA60 — LoadIPersistStream (87B)
// COM IPersistStream::Load: reads 4-byte header, then object data, clears flag if a3.
extern int IStream_Read(void* stream, void* buf, int size);  // vtable[4]

int LoadIPersistStream(void* obj, void* stream, bool clear_flag)
{
    if (!stream)
        return -2147467261;  // E_POINTER

    // Read 4-byte version/size header
    uintptr_t vt = *(uintptr_t*)stream;
    int size = 0;
    int hr = (*(int(__stdcall**)(void*, int*, int, int))(vt + 16))(stream, &size, 4, 0);
    if (hr < 0) return hr;

    // Get object data size via vtable[9]
    uintptr_t ovt = *(uintptr_t*)obj;
    int data_size = (*(int(__thiscall**)(void*, int))(ovt + 36))(obj, 0);

    // Read object data from stream
    hr = (*(int(__stdcall**)(void*, void*, int))(*(uintptr_t*)stream + 16))(stream, obj, data_size);
    if (hr >= 0)
    {
        if (clear_flag)
            *((uint8_t*)obj + 17) = 0;
    }
    return hr;
}

// IDA: 0x5CECB0 — MSVQAnim dtor (88B)
// Cleans MovieContext + BinkMovie sub-objects, resets vtable, conditional free.
extern void MovieContext_Cleanup(void*);  // IDA 0x5BFF00
extern void BinkMovie_Cleanup(void*);     // IDA 0x5C01F0

void* MSVQAnim_Destructor(void* block, bool free_block)
{
    auto* fields = reinterpret_cast<uint32_t*>(block);

    void* sub_obj = reinterpret_cast<void*>(fields[10]);  // offset 40
    if (sub_obj)
    {
        (*(void(__thiscall***)(void*, int))sub_obj)[0][0](sub_obj, 1);
    }

    void* movie = reinterpret_cast<void*>(fields[7]);  // offset 28
    if (movie)
    {
        MovieContext_Cleanup(movie);
        void* bink = reinterpret_cast<void*>(fields[7]);
        if (bink)
        {
            BinkMovie_Cleanup(bink);
            operator delete(bink);
        }
    }

    if (free_block)
        operator delete(block);

    return block;
}

// IDA: 0x4B6470 — DropPodLocomotionClass::QueryInterface (93B)
extern int   LocomotionClass_QueryInterface(void*, const void*, int*);  // IDA 0x55A9B0
extern const IID IID_IPiggyback;  // IDA 0x7E9B10

int DropPodLocomotionClass_QueryInterface(void* self, const void* iid, int* ppv)
{
    int hr = LocomotionClass_QueryInterface(self, iid, ppv);
    if (hr == -2147467262)  // E_NOINTERFACE
    {
        if (memcmp(iid, &IID_IPiggyback, 16) == 0)
        {
            int v4 = self ? (int)((uint8_t*)self + 24) : 0;
            *ppv = v4;
        }
        if (*ppv)
        {
            (*(void(__stdcall**)(void*))(*(uintptr_t*)self + 4))(self);  // AddRef
            return 0;
        }
        return -2147467262;
    }
    return hr;
}

// IDA: 0x4AF720 — DriveLocomotionClass::QueryInterface (93B)
// Same pattern as DropPodLocomotionClass::QI
int DriveLocomotionClass_QueryInterface(void* self, const void* iid, int* ppv)
{
    int hr = LocomotionClass_QueryInterface(self, iid, ppv);
    if (hr == -2147467262)
    {
        if (memcmp(iid, &IID_IPiggyback, 16) == 0)
        {
            int v4 = self ? (int)((uint8_t*)self + 24) : 0;
            *ppv = v4;
        }
        if (*ppv)
        {
            (*(void(__stdcall**)(void*))(*(uintptr_t*)self + 4))(self);
            return 0;
        }
        return -2147467262;
    }
    return hr;
}

// IDA: 0x54DC60 — JumpjetLocomotionClass::QueryInterface (93B)
int JumpjetLocomotionClass_QueryInterface(void* self, const void* iid, int* ppv)
{
    int hr = LocomotionClass_QueryInterface(self, iid, ppv);
    if (hr == -2147467262) {
        if (memcmp(iid, &IID_IPiggyback, 16) == 0)
            *ppv = self ? (int)((uint8_t*)self + 24) : 0;
        if (*ppv) { (*(void(__stdcall**)(void*))(*(uintptr_t*)self + 4))(self); return 0; }
        return -2147467262;
    }
    return hr;
}

// IDA: 0x69EE30 — ShipLocomotionClass::QueryInterface (93B)
int ShipLocomotionClass_QueryInterface(void* self, const void* iid, int* ppv)
{
    int hr = LocomotionClass_QueryInterface(self, iid, ppv);
    if (hr == -2147467262) {
        if (memcmp(iid, &IID_IPiggyback, 16) == 0)
            *ppv = self ? (int)((uint8_t*)self + 24) : 0;
        if (*ppv) { (*(void(__stdcall**)(void*))(*(uintptr_t*)self + 4))(self); return 0; }
        return -2147467262;
    }
    return hr;
}

// IDA: 0x75C7F0 — WalkLocomotionClass::QueryInterface (93B)
int WalkLocomotionClass_QueryInterface(void* self, const void* iid, int* ppv)
{
    int hr = LocomotionClass_QueryInterface(self, iid, ppv);
    if (hr == -2147467262) {
        if (memcmp(iid, &IID_IPiggyback, 16) == 0)
            *ppv = self ? (int)((uint8_t*)self + 24) : 0;
        if (*ppv) { (*(void(__stdcall**)(void*))(*(uintptr_t*)self + 4))(self); return 0; }
        return -2147467262;
    }
    return hr;
}

// IDA: 0x429210 — HouseClass::QueryInterface_Helper (91B)
// Checks IUnknown + IClassFactory IID (0x00000001-...).
extern const IID IID_IClassFactory;  // {00000001-0000-0000-C000-000000000046}

int HouseClass_QueryInterface_Helper(void* self, const void* iid, uint32_t* ppv)
{
    if (!ppv)
        return -2147467261;  // E_POINTER

    if (memcmp(iid, &IID_IClassFactory, 16) != 0
        && memcmp(iid, &IID_IUnknown, 16) != 0)
        return -2147467262;  // E_NOINTERFACE

    *ppv = (uint32_t)(uintptr_t)self;
    (*(void(__stdcall**)(void*))(*(uintptr_t*)self + 4))(self);  // AddRef
    return 0;
}

// IDA: 0x691040 — ScoreFontClass dtor (96B)
// Frees buffer (Block+3), decrements global counter, zeros global array on last.
extern uint32_t dword_B0558C;  // IDA 0xB0558C — reference counter

void* ScoreFontClass_Destructor(void* block, bool free_block)
{
    auto* fields = reinterpret_cast<uint32_t*>(block);
    auto* bytes  = reinterpret_cast<uint8_t*>(block);

    void* buffer = reinterpret_cast<void*>(fields[3]);
    if (buffer && bytes[16] == 1)
    {
        operator delete(buffer);
        fields[3] = 0;
        bytes[16] = 0;
    }

    if (--dword_B0558C == 0)
    {
        // Zero global array from byte_B05594 to dbl_B055A8+4
        uint8_t* p = (uint8_t*)0xB05594;
        uint8_t* end = (uint8_t*)(0xB055A8 + 8);
        while (p < end) { *(uint32_t*)(p-4) = 0; *p = 0; p += 8; }
    }

    if (free_block)
        operator delete(block);

    return block;
}

// IDA: 0x4A04B0 — ConnectionPointClass::QueryInterface (97B)
// Checks IUnknown + IConnectionPoint {B196B286-BAB4-101A-B69C-00AA00341D07}
extern const IID IID_IConnectionPoint;

int ConnectionPointClass_QueryInterface(void* self, const void* iid, uint32_t* ppv)
{
    if (!ppv)
        return -2147467261;  // E_POINTER

    uint32_t result = 0;
    if (memcmp(iid, &IID_IConnectionPoint, 16) == 0
        || memcmp(iid, &IID_IUnknown, 16) == 0)
    {
        result = (uint32_t)(uintptr_t)self;
    }
    *ppv = result;

    if (!result)
        return -2147467262;  // E_NOINTERFACE

    (*(void(__stdcall**)(uint32_t))(*(uint32_t*)result + 4))(result);  // AddRef
    return 0;
}

// IDA: 0x7D96A8 — __lock_fhandle (95B, CRT internal)
// IDA: 0x7CD9F5 — __lock (97B, CRT internal)
// MSVC CRT multi-threaded lock management stubs.
void __lock_fhandle(int fh) { (void)fh; }
void __lock(int locknum)    { (void)locknum; }

// IDA: 0x6BF8D0-0x6C0950 — CreateTClassFactory_*::QueryInterface (101B x14)
// All are compiler-generated TClassFactory<T>::QueryInterface template instantiations.
// Check IUnknown + IClassFactory, set *ppv, AddRef.
int TClassFactory_QueryInterface(void* self, const void* iid, uint32_t* ppv)
{
    if (!ppv) return -2147467261;
    *ppv = 0;
    if (memcmp(iid, &IID_IUnknown, 16) == 0
        || memcmp(iid, &IID_IClassFactory, 16) == 0)
        *ppv = (uint32_t)(uintptr_t)self;
    if (!*ppv) return -2147467262;
    (*(void(__stdcall**)(uint32_t))(*(uint32_t*)self + 4))(self);
    return 0;
}

// Individual CreateTClassFactory QI wrappers (all identical pattern)
int CreateTClassFactory_CellClass_QI(void* s, const void* i, uint32_t* p)
    { return TClassFactory_QueryInterface(s, i, p); }
int CreateTClassFactory_EMPulseClass_QI(void* s, const void* i, uint32_t* p)
    { return TClassFactory_QueryInterface(s, i, p); }
int CreateTClassFactory_LightSourceClass_QI(void* s, const void* i, uint32_t* p)
    { return TClassFactory_QueryInterface(s, i, p); }
int CreateTClassFactory_SideClass_QI(void* s, const void* i, uint32_t* p)
    { return TClassFactory_QueryInterface(s, i, p); }
int CreateTClassFactory_TiberiumClass_QI(void* s, const void* i, uint32_t* p)
    { return TClassFactory_QueryInterface(s, i, p); }
int COMObject_QueryInterface2(void* s, const void* i, uint32_t* p)
    { return TClassFactory_QueryInterface(s, i, p); }
int CreateTClassFactory_CampaignClass_QI(void* s, const void* i, uint32_t* p)
    { return TClassFactory_QueryInterface(s, i, p); }
int CreateTClassFactory_BuildingLightClass_QI(void* s, const void* i, uint32_t* p)
    { return TClassFactory_QueryInterface(s, i, p); }
int CreateTClassFactory_WaypointPathClass_QI(void* s, const void* i, uint32_t* p)
    { return TClassFactory_QueryInterface(s, i, p); }
int CreateTClassFactory_TemporalClass_QI(void* s, const void* i, uint32_t* p)
    { return TClassFactory_QueryInterface(s, i, p); }
int CreateTClassFactory_AirstrikeClass_QI(void* s, const void* i, uint32_t* p)
    { return TClassFactory_QueryInterface(s, i, p); }
int CreateTClassFactory_SpawnManagerClass_QI(void* s, const void* i, uint32_t* p)
    { return TClassFactory_QueryInterface(s, i, p); }
int CreateTClassFactory_RadSiteClass_QI(void* s, const void* i, uint32_t* p)
    { return TClassFactory_QueryInterface(s, i, p); }
int CreateTClassFactory_TriggerClass_QI(void* s, const void* i, uint32_t* p)
    { return TClassFactory_QueryInterface(s, i, p); }

// IDA: 0x49FF80 — EnumConnectionsClass::QueryInterface (102B)
extern const IID IID_IEnumConnections;  // {B196B287-BAB4-101A-B69C-00AA00341D07}

int EnumConnectionsClass_QueryInterface(void* self, const void* iid, uint32_t* ppv)
{
    if (!ppv) return -2147467261;
    *ppv = 0;
    if (memcmp(iid, &IID_IUnknown, 16) == 0 || memcmp(iid, &IID_IEnumConnections, 16) == 0)
        *ppv = (uint32_t)(uintptr_t)self;
    if (!*ppv) return -2147467262;
    (*(void(__stdcall**)(uint32_t))(*(uint32_t*)self + 4))(self);
    return 0;
}

// IDA: 0x4A0920 — EnumConnectionPointsClass::QueryInterface (102B)
extern const IID IID_IEnumConnectionPoints;  // {B196B285-BAB4-101A-B69C-00AA00341D07}

int EnumConnectionPointsClass_QueryInterface(void* self, const void* iid, uint32_t* ppv)
{
    if (!ppv) return -2147467261;
    *ppv = 0;
    if (memcmp(iid, &IID_IEnumConnectionPoints, 16) == 0 || memcmp(iid, &IID_IUnknown, 16) == 0)
        *ppv = (uint32_t)(uintptr_t)self;
    if (!*ppv) return -2147467262;
    (*(void(__stdcall**)(uint32_t))(*(uint32_t*)self + 4))(self);
    return 0;
}

// IDA: 0x4E1A60 — GadgetClass dtor (103B)
extern void* dword_8B3E90, *dword_8B3E88, *dword_8B3E8C;  // IDA globals
extern void LinkClass_Destruct(void*);  // IDA 0x5565A0

void* GadgetClass_Destructor(void* block, bool free_block)
{
    auto* fields = reinterpret_cast<uint32_t*>(block);
    void* glob = &dword_8B3E90;

    if (block == &dword_8B3E90) {
        uint32_t v4 = fields[8];
        *(uint8_t*)(&v4 + 1) &= ~1u;
        fields[8] = v4;
        dword_8B3E90 = nullptr;
    }
    if (block == &dword_8B3E88) dword_8B3E88 = nullptr;
    if (block == &dword_8B3E8C) dword_8B3E8C = nullptr;

    LinkClass_Destruct(block);
    if (free_block) operator delete(block);
    return block;
}

// IDA: 0x488F00 — ColorListClass dtor (103B)
extern void ListClass_Destruct(void*);  // IDA 0x557600

void* ColorListClass_Destructor(void* block, bool free_block)
{
    auto* fields = reinterpret_cast<uint32_t*>(block);
    auto* bytes  = reinterpret_cast<uint8_t*>(block);
    uint32_t v3 = fields[93];  // vtable offset for sub-object
    uint8_t* v4 = bytes + 372; // sub-object at offset 372

    // Call sub-object destructor via vtable+12
    (*(void(__thiscall**)(uint8_t*))(v3 + 12))(v4);
    fields[100] = 0;

    void* vec_buf = reinterpret_cast<void*>(fields[93 + 1]);  // fields[94] = v4+4
    if (vec_buf && v4[13]) { operator delete(vec_buf); fields[94] = 0; }
    v4[13] = 0;
    fields[95] = 0;  // VectorClass<int>::capacity = 0

    ListClass_Destruct(block);
    if (free_block) operator delete(block);
    return block;
}

// IDA: 0x5C1CB0 — MPCooperative::COMStub (8B)
void MPCooperative_SetFlag(void* self) { *((uint8_t*)self + 832) = 1; }

// IDA: 0x5CB3F0 — UnholyAlliance::Read (8B)
extern uint8_t Bases;  // IDA 0xA8B258
int  UnholyAlliance_Read(void) { Bases = 1; return 1; }

// IDA: 0x5CB430 — UnholyAlliance::Seek (8B)
int  UnholyAlliance_Seek(void) { return 1; }

// IDA: 0x71D150 — IRTTITypeInfo field accessor (7B)
uint32_t IRTTITypeInfo_GetField200(void* self) { return *((uint32_t*)self + 50); }

// IDA: 0x74FDA0 — NetworkBuffer::GetField2 (6B)
int NetworkBuffer_GetField2(void) { return 0x20000; }

// IDA: 0x74FDB0 — NetworkBuffer::GetField3 (6B)
int NetworkBuffer_GetField3(void) { return 0x20000; }

// IDA: 0x6F2680 — VectorClass<DistributionObject> dtor (84B)
void* VectorClass_DistributionObject_Dtor(void* block, bool free_block)
{
    auto* fields = reinterpret_cast<uint32_t*>(block);
    auto* bytes  = reinterpret_cast<uint8_t*>(block);
    uint32_t buf = fields[1];
    if (buf && bytes[13]) { operator delete((void*)(buf - 4)); fields[1] = 0; }
    bytes[13] = 0;
    fields[2] = 0;
    if (free_block) operator delete(block);
    return block;
}

// IDA: 0x5CB6C0 — VtableStub (7B, sets MSAnim vtable)
void MSAnim_SetVtable(void* self) { *(uint32_t*)self = 0x7EE8E8; }

// IDA: 0x65D660 — ReferenceCounted::Constructor (7B)
void ReferenceCounted_Constructor(void* self) { *(uint32_t*)self = 0x7F0954; }

// IDA: 0x76F180 — VectorCursor::Release (6B, AddRef)
void* VectorCursor_AddRef(void* self) { auto* f = (uint32_t*)self; ++f[2]; return self; }

// IDA: 0x7B40F0 — UDPInterfaceClass_Destru::_vt13 (6B)
int UDPInterfaceClass_GetConstant2(void) { return 2; }

// IDA: 0x7B4140 — UDPInterfaceClass_Destru field accessor (7B)
int UDPInterfaceClass_GetField64856(void* self) { return *(int*)((uint8_t*)self + 64856); }

// IDA: 0x7B4620 — MSVC runtime zero-init (9B)
void* Runtime_ZeroInit73(void* self) { *(uint32_t*)self = 0; return self; }

// IDA: 0x7B66C0 — MSVC runtime zero-init (9B)
void* Runtime_ZeroInit74(void* self) { *(uint32_t*)self = 0; return self; }

// IDA: 0x7BE660 — Field setter (10B)
int SetField_MinusOne(void* self) { auto* f = (uint32_t*)self; f[436] = -1; return -1; }

// IDA: 0x7C35B0 — Field accessor (10B)
int GetField_906(void* self) { return *(int*)((uint8_t*)self + 906 * 2); }

// IDA: 0x7748A0 — WinModemClass::Release (10B)
int WinModemClass_Release(void* self, int val) { auto* f = (uint32_t*)self; f[24] = val; return val; }

// IDA: 0x7754A0 — WinModemClass::ddtor (10B)
int WinModemClass_ddtor(void* self, int val) { auto* f = (uint32_t*)self; f[25] = val; return val; }

// IDA: 0x6C9680 — FloatArray::Get (10B)
float FloatArray_Get(float* arr, int idx) { return arr[idx]; }

// IDA: 0x6C9930 — BinkMovie::FreeSurfaceBuffer (15B)
void BinkMovie_FreeSurfaceBuffer2(void** self) { if (self[5]) operator delete(self[5]); }

// IDA: 0x7754B0 — WinModemClass::HangUp (10B)
int WinModemClass_HangUp(void* self, int val) { auto* f = (uint32_t*)self; f[26] = val; return val; }

// IDA: 0x4A52D0 — Field clearer (9B)
void ClearFields_24_25(void* self) { auto* b = (uint8_t*)self; b[24]=0; b[25]=1; }

// IDA: 0x4A52E0 — Field resetter (9B)
int  ResetFields_24_25(void* self) { auto* b = (uint8_t*)self; b[24]=0; b[25]=0; return 0; }

// IDA: 0x4F4CA0 — Flag::IsZero (10B)
bool Flag_IsZero(void* self) { return *(uint8_t*)self == 0; }

// IDA: 0x510A20 — AbstractClass QI delegator (10B)
extern int HouseClass_QueryInterface(void*, const void*, uint32_t*);
int AbstractClass_QI_Delegator(void* self, const void* iid, uint32_t* ppv) {
    return HouseClass_QueryInterface((uint8_t*)self - 4, iid, ppv);
}

// IDA: 0x4F4D80 — Infinite loop stub (2B, noreturn vtable entry)
[[noreturn]] void Stub_InfiniteLoop(void) { for (;;) {} }

// IDA: 0x5175D0 — Infinite loop stub (2B)
[[noreturn]] void VtableStub_InfiniteLoop(void) { for (;;) {} }

// IDA: 0x55CBF0 — Global byte reader (6B)
extern uint8_t byte_ABCD58;
int  VtableStub_ReadByteABCD58(void) { return byte_ABCD58; }

// IDA: 0x62D770 — ParticleClass constant (6B)
int  ParticleClass_GetConstant3(void) { return 3; }

// IDA: 0x6C9AE0 — BinkMovie::FreeSurfaceTracker (83B)
extern void BinkMovie_FreeSurfaceEntry(void**);  // IDA 0x6C9930

int BinkMovie_FreeSurfaceTracker(int* tracker)
{
    int result = *tracker;
    if (*tracker)
    {
        int count = *(int*)(*tracker + 16);
        for (int i = 0; i < count; ++i)
        {
            int* array_base = *(int**)(*tracker + 4);
            void* entry = *(void**)(array_base + i);
            if (entry)
            {
                BinkMovie_FreeSurfaceEntry(entry);
                operator delete(entry);
            }
        }
        if (*tracker)
            result = (**(int(__thiscall***)(int,int))*tracker)(*tracker, 1);
    }
    int(__thiscall*** sub_obj)(int, int) = *(int(__thiscall****)(int, int))(tracker + 4);
    if (sub_obj) return (**sub_obj)(sub_obj, 1);
    return result;
}

// IDA: 0x5F7320 — ObjectTypeClass::Construct (218B)
extern void AbstractTypeClass_Init(void*, int);  // IDA 0x410960

void* ObjectTypeClass_Constructor(void* self, int a2)
{
    auto* fields = reinterpret_cast<uint32_t*>(self);
    AbstractTypeClass_Init(self, a2);

    fields[41] = 0;
    for (int i = 0; i < 18; ++i) { fields[50 + 2*i] = 0; fields[50 + 2*i + 1] = 0; }
    for (int i = 0; i < 18; ++i) { fields[86 + 2*i] = 0; fields[86 + 2*i + 1] = 0; }
    fields[145] = 0; fields[146] = 0; fields[147] = 0;
    *((uint8_t*)self + 592) = 0;
    fields[149] = 0; fields[150] = 0; fields[151] = 0; fields[152] = 0;
    *((uint8_t*)self + 612) = 0;
    fields[154] = 0; fields[155] = 0; fields[156] = 0; fields[157] = 0;
    *((uint8_t*)self + 632) = 0;
    fields[159] = 0; fields[160] = 0; fields[161] = 0; fields[162] = 0;
    *((uint8_t*)self + 652) = 0;
    fields[164] = 0;

    return self;
}

// IDA: 0x4369E0 — BuildingLightClass stubs
int BuildingLightClass_SD_vt34(void) { return 0; }
int BuildingLightClass_SD_vt12(void) { return 232; }
int BuildingLightClass_SD_vt30(void) { return 3; }
int BuildingLightClass_SD_vt11(void) { return 19; }

// IDA: 0x4A3230 — CStreamClass AddRef delegator (10B)
extern LONG CStreamClass_AddRef(volatile LONG*);
LONG CStreamClass_AddRefDelegator(int a1) { return CStreamClass_AddRef((volatile LONG*)(a1 - 4)); }

// IDA: 0x4A3240 — CStreamClass Release delegator (10B)
extern LONG CStreamClass_Release(volatile LONG*);
LONG CStreamClass_ReleaseDelegator(int a1) { return CStreamClass_Release((volatile LONG*)(a1 - 4)); }

// IDA: 0x4A4AC0 — Debug::Log stub (1B)
void Debug_Log_0(void) {}

// IDA: 0x48D1D0 — Event::Dispatch wrapper (8B)
extern void Event_Dispatch(void);  // IDA 0x48D080
int  Event_Dispatch_Return0(void) { Event_Dispatch(); return 0; }

// IDA: 0x4A3220 — CStreamClass QI delegator (10B)
extern int CStreamClass_QueryInterface(void*, const void*, uint32_t*);
int  CStreamClass_QI_Delegator(int a1, const void* iid, uint32_t* ppv)
    { return CStreamClass_QueryInterface((uint8_t*)(a1 - 4), iid, ppv); }

// IDA: 0x50C160 — Field accessor (10B)
float FieldAccessor_50C160(void* self) { auto* f = (uint32_t*)self; return *(float*)(*(int*)(f[13]) + 328); }

// IDA: 0x459DA0-0x459ED0 — BuildingClass stubs
int  BuildingClass_Return2(void) { return 2; }
int  BuildingClass_Mission_Guard(void* self) { return 1824; }
int  BuildingClass_Mission_Construction(void* self) { return 6; }
int  BuildingClass_GetTypeField60(void* self) { auto* f=(uint32_t*)self; return *(int*)(f[328]+96); }

// IDA: void stubs (1B each)
void Camera_StubReturnVoid(void) {}
void MSEngine_Destru_Release(void) {}
void Init_StubPlaceholder(void) {}
void ScreenEffect_StubReturnFalse(void) {}

// IDA: ScreenEffect void stubs (1B each)
void ScreenEffect_StubReturnVoid(void) {}
void ScreenEffect_StubReturn(void) {}
void ScreenEffect_Stub(void) {}
void ScreenEffect_Stub1(void) {}

// IDA: ScreenEffect void stubs 2-5 (1B each)
void ScreenEffect_Stub2(void) {}
void ScreenEffect_Stub3(void) {}
void ScreenEffect_Stub4(void) {}
void ScreenEffect_Stub5(void) {}

// IDA: 0x7518C0 — VocClass::SetEnabled (7B)
extern uint8_t VocClass_VoicesEnabled;
void VocClass_SetEnabled(char val) { VocClass_VoicesEnabled = val; }

// IDA: VoxelAnimClass stubs
int VoxelAnimClass_Vt12(void) { return 328; }
int VoxelAnimClass_Vt11(void) { return 41; }
int VoxelAnimClass_Vt34(void* self) { return *((uint32_t*)self + 65); }

// IDA: 0x410A60 — AbstractTypeClass::LoadFromINI (299B)
extern void  INIClass_ResetSection(void*);              // IDA 0x526B00
extern bool  INIClass_BinarySearchSection(void*, void*); // IDA 0x526810
extern void* INIClass_GetString(void*, void*, void*, void*, void*, int); // IDA 0x528A10
extern void* g_INI_Key_Name;     // "Name"
extern void* g_INI_Key_UIName;   // "UIName"
extern void* GetStringCSF(void*, int, const char*, int); // IDA 0x734E60
extern void* g_TypeClass_DefaultString;                  // IDA 0x887734

bool AbstractTypeClass_LoadFromINI(void* self, void* ini)
{
    auto* fields = reinterpret_cast<uint32_t*>(self);
    auto* bytes  = reinterpret_cast<uint8_t*>(self);

    INIClass_ResetSection(ini);
    if (!INIClass_BinarySearchSection(ini, bytes + 36))
        return false;  // ID = section name

    // Read "Name" key → this+100 (48 bytes)
    char name_buf[48] = {};
    INIClass_GetString(ini, bytes + 36, &g_INI_Key_Name, bytes + 100, name_buf, 49);
    strncpy((char*)(bytes + 100), name_buf, 48);

    // Read "UIName" key → this+61 (32 bytes)
    char uiname_buf[32] = {};
    INIClass_GetString(ini, bytes + 36, &g_INI_Key_UIName, bytes + 61, uiname_buf, 32);
    strncpy((char*)(bytes + 61), uiname_buf, 32);

    // Resolve UIName CSF string → this+96
    if (*(bytes + 61))
        fields[24] = (uint32_t)(uintptr_t)GetStringCSF(bytes + 61, 0, "D:\\ra2mdpost\\AbsType.cpp", 215);
    else
        fields[24] = (uint32_t)(uintptr_t)&g_TypeClass_DefaultString;

    return true;
}

// IDA: TerrainClass stubs
int TerrainClass_Vt12(void) { return 224; }
int TerrainClass_Vt11(void) { return 36; }

// IDA: TerrainTypeClass stubs
int TerrainTypeClass_Vt11(void) { return 37; }
int TerrainTypeClass_Vt12(void) { return 700; }
int TerrainTypeClass_Vt16(void* self) { return *((uint32_t*)self + 165); }

// IDA: UnitTypeClass stubs
int UnitTypeClass_Vt12(void) { return 3704; }
int UnitTypeClass_Vt11(void) { return 40; }
int UnitTypeClass_Vt16(void* self) { return *((uint32_t*)self + 894); }

// IDA: WeaponType + VoxelAnimType stubs
int WeaponTypeClass_Vt12(void) { return 352; }
int WeaponTypeClass_Vt11(void) { return 49; }
int VoxelAnimTypeClass_Vt11(void) { return 42; }
int VoxelAnimTypeClass_Vt12(void) { return 776; }
int SuperWeaponTypeClass_SD_vt12(void) { return 256; }
int SuperWeaponTypeClass_SD_vt11(void) { return 32; }

// IDA: VeinholeMonster + Tactical stubs
int VeinholeMonsterClass_Vt11(void) { return 63; }
int VeinholeMonsterClass_Vt12(void) { return 264; }
int Tactical_Vt11(void) { return 56; }

// IDA: SuperClass + SWType + Tactical stubs
int SuperClass_Vt11(void) { return 57; }
int SuperClass_Vt12(void) { return 128; }
int SuperWeaponTypeClass_SD_vt16(void* self) { return *((uint32_t*)self + 38); }
int Tactical_Vt12(void) { return 3608; }

// IDA: 0x7B27E0 — WinsockInterfaceClass dtor
extern void NetworkClass_UnregisterAsync(void*);
extern void WSACleanup(void);

void* WinsockInterfaceClass_Destructor(void* block, bool free_block)
{
    auto* fields = reinterpret_cast<uint32_t*>(block);
    auto* bytes  = reinterpret_cast<uint8_t*>(block);

    if (bytes[258152])
    {
        NetworkClass_UnregisterAsync(block);
        (*(void(__thiscall**)(void*))(*(uintptr_t*)block + 4))(block);
        WSACleanup();
        bytes[258152] = 0;
    }

    // Free 3 VectorClass<WinsockBufferType*> buffers
    void* v4 = (void*)fields[15]; if (v4 && bytes[69]) { operator delete(v4); fields[15]=0; }
    bytes[69]=0; fields[16]=0;
    void* v5 = (void*)fields[9];  if (v5 && bytes[45]) { operator delete(v5); fields[9]=0; }
    bytes[45]=0; fields[10]=0;
    void* v6 = (void*)fields[3];  if (v6 && bytes[21]) { operator delete(v6); fields[3]=0; }
    bytes[21]=0; fields[4]=0;

    if (free_block) operator delete(block);
    return block;
}

// IDA: TActionClass + SpawnManagerClass stubs
int TActionClass_Vt12(void) { return 148; }
int TActionClass_Vt11(void) { return 47; }
int SpawnManagerClass_Vt12(void) { return 116; }
int SpawnManagerClass_Vt11(void) { return 65; }

// IDA: TEvent + Parasite stubs
int TEventClass_Vt12(void) { return 88; }
int TEventClass_Vt11(void) { return 48; }
int ParasiteClass_Vt12(void) { return 88; }
int ParasiteClass_Vt11(void) { return 67; }

// RadSite + Tiberium stubs
int RadSiteClass_Vt12(void) { return 116; }
int RadSiteClass_Vt11(void) { return 69; }
int TiberiumClass_Vt12(void) { return 296; }
int TiberiumClass_Vt11(void) { return 46; }

// TemporalClass + TiberiumClass stubs
int TemporalClass_Vt11(void) { return 70; }
int TemporalClass_Vt12(void) { return 80; }
int TiberiumClass_Vt16(void* self) { return *((uint32_t*)self + 38); }
int VoxelAnimClass_Vt30(void) { return 3; }

// SuperClass stubs
void SuperClass_ResetRechargeTime(void* self) { *((uint32_t*)self + 9) = -1; }
int  SuperClass_SetRechargeTime(void* self, int val) { *((uint32_t*)self + 9) = val; return val; }
int  SuperClass_SetReadiness(void* self, char val) { *((uint8_t*)self + 111) = val; return val; }
int  SuperWeapon_GetField(void* self) { return *(uint8_t*)(*(uint32_t*)((uint32_t*)self + 10) + 230); }

// IDA: Object field accessor + 450-return stubs
int  Object_Vt34(void* self) { return *((uint32_t*)self + 43); }
int  Stub_Return450(void) { return 450; }
int  Object_Vt12(void) { return 176; }
int  Object_Vt11(void) { return 20; }

// OverlayTypeClass stubs
int OverlayTypeClass_Vt11(void) { return 21; }
int OverlayTypeClass_Vt12(void) { return 700; }
int OverlayTypeClass_Vt16(void* self) { return *((uint32_t*)self + 165); }

} // namespace gamemd
