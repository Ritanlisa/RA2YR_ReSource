#pragma once

#include <cstdint>
#include <windows.h>
#include "core/enums.hpp"
#include "core/math.hpp"

namespace gamemd
{

class DSurface;
class ObjectClass;
class HouseClass;
class UnitClass;

// ============================================================================
// MoveFeedback — unit movement command feedback (14 methods)
// IDA: Constructor 0x40C160, ProcessCommand 0x7327D0
// COM class: IUnknown-based, vtable at this+0
// ============================================================================
class MoveFeedback
{
public:
    // IDA 0x40C160
    MoveFeedback();
    ~MoveFeedback();

    // IDA 0x7327D0
    int32_t ProcessCommand(int32_t cmd, uint32_t param);
    // IDA 0x40B640
    void ClearBuffer();
    // IDA 0x40B670
    int32_t PointerToIndex(void* ptr);
    // IDA 0x40B6D0
    void Update();
    // IDA 0x40B6F0
    void Show();
    // IDA 0x40B930
    void* FindItem(int32_t index);
    // IDA 0x40C0E0
    void* FindMoveItem(int32_t index);
    // IDA 0x40BE80
    int32_t GetIndex2(void* ptr);
    // IDA 0x40BB90
    void Draw(DSurface* surface);
    // IDA 0x40C030
    void SetCapacity(int32_t capacity);
    // IDA 0x40B960
    int32_t AddRef();
    // IDA 0x40BCB0
    HRESULT QueryInterface(const GUID& riid, void** ppv);
    // IDA 0x40BE50
    void Destroy();

    // VectorClass<CommandClass const*> base
    void**      m_Items;                // 0x00 (VectorClass::Items)
    int32_t     m_Capacity;             // 0x04
    int32_t     m_Count;                // 0x08 (DynamicVectorClass::Count)
    bool        m_IsAllocated;          // 0x0C
    int32_t     m_CapacityIncrement;    // 0x10
    int32_t     MoveFeedback_field_14;               // 0x14
    int32_t     MoveFeedback_field_18;               // 0x18
    int32_t     MoveFeedback_field_1C;               // 0x1C
    int32_t     MoveFeedback_field_20;               // 0x20
    int32_t     MoveFeedback_field_24;               // 0x24
    int32_t     MoveFeedback_field_28;               // 0x28
    int32_t     MoveFeedback_field_2C;               // 0x2C
};

// ============================================================================
// LoadGame — save/load game state management (12 methods)
// IDA: Start 0x67E730, LoadIteratedData 0x4136C0
// ============================================================================
class LoadGame
{
public:
    // IDA 0x67E730
    static bool Start(const char* filename);
    // IDA 0x4136C0
    static void LoadIteratedData();
    // IDA 0x413800
    static void ClearAllSlots();
    // IDA 0x439260
    static void DeserializePointerArrays();
    // IDA 0x4C6320
    static void LoadBlock68();
    // IDA 0x54E6F0
    static void CleanupArray();
    // IDA 0x54E7B0
    static void LoadPointArray();
    // IDA 0x660840
    static void LoadTriggerEvents();
    // IDA 0x660F10
    static void RemoveItem();
    // IDA 0x69B5B0
    static void LoadBlock300();
    // IDA 0x751710
    static void RestoreAudioState();
    // IDA 0x7533F0
    static void LoadMagicAndAudio();

    static bool     s_IsLoading;        // 0x00
    static uint32_t s_LoadVersion;      // 0x04
    static uint32_t s_BlockIndex;       // 0x08
};

// ============================================================================
// Buffer — DirectSound audio buffer wrapper (11 methods)
// IDA: CreateDirectSound 0x40A340
// ============================================================================
class Buffer
{
public:
    Buffer() = default;

    // IDA 0x40A340
    int32_t CreateDirectSound();
    // IDA 0x40A6D0
    int32_t sub_40A6D0();
    // IDA 0x40CCD0
    bool CompareEqual(const Buffer& other) const;
    // IDA 0x410ED0
    int32_t FillCircularBufferScroll();
    // IDA 0x42F7C0
    void Cleanup();
    // IDA 0x43AD00
    void Init();
    // IDA 0x488030
    void Constructor_VectorClass_ObjectClass();
    // IDA 0x632B70
    void RotateBufferCrypto();
    // IDA 0x6C89E0
    void AppendCellData();
    // IDA 0x7BCB50
    int32_t FillCircularBufferScroll2();
    // IDA 0x7C1730
    void AllocateCodecFrameBuffers();

    uint32_t    Buffer_field_00;           // 0x00
    uint32_t    Buffer_field_04;           // 0x04
    uint32_t    Buffer_field_08;           // 0x08
    uint32_t    Buffer_field_0C;           // 0x0C
    uint32_t    Buffer_field_10;           // 0x10
    uint32_t    Buffer_field_14;           // 0x14
    uint32_t    Buffer_field_18;           // 0x18
    uint32_t    Buffer_field_1C;           // 0x1C
    uint32_t    Buffer_field_20;           // 0x20
    uint32_t    Buffer_field_24;           // 0x24
};

// ============================================================================
// Delegate — callback dispatch system (11 methods)
// IDA: Constructor 0x52AE20, Dispatch 0x631D10
// ============================================================================
class Delegate
{
public:
    // IDA 0x52AE20
    Delegate();
    ~Delegate();

    // IDA 0x42DDB0
    void ProcessBitmapStream();
    // IDA 0x42DF40
    void sub_42DF40();
    // IDA 0x4A2780
    void sub_4A2780();
    // IDA 0x52AE70
    void ClearVectorAndStraw();
    // IDA 0x52AEA0
    void DestroyStraw();
    // IDA 0x52AEE0
    void DestroyPipe();
    // IDA 0x631D10
    void Dispatch();
    // IDA 0x6C95E0
    int32_t GetField();
    // IDA 0x6C9890
    void Set(int32_t value);
    // IDA 0x6C98E0
    void Invoke();

    void*       m_items;            // 0x00 (GenericNode base)
    int32_t     m_count;            // 0x04
    int32_t     Delegate_field_08;           // 0x08
    bool        m_allocated;        // 0x0C
    int32_t     Delegate_field_10;           // 0x10
    int32_t     Delegate_field_14;           // 0x14
    void*       m_straw;            // 0x18
    void*       m_pipe;             // 0x1C
    int32_t     Delegate_field_20;           // 0x20
    int32_t     Delegate_field_24;           // 0x24
};

// ============================================================================
// Struct — memory initialization & zero-fill utilities (10 methods)
// IDA: ZeroInit32 0x48B2A0, Zero3 0x4B9BD0
// ============================================================================
class Struct
{
public:
    // IDA 0x48B2A0
    static void ZeroInit32(void* ptr, int32_t count);
    // IDA 0x4B9BD0
    static void Zero3(void* ptr, int32_t count);
    // IDA 0x48B2A0 area
    static void ZeroInitAndSetup(void* ptr, int32_t size);
    // IDA 0x48B2A0 area
    static void InitArray(void* arr, int32_t stride, int32_t count);
    // IDA 0x48B2A0 area
    static void MemSet(void* dst, uint8_t val, int32_t count);
    // IDA 0x48B2A0 area
    static void MemCopy(void* dst, const void* src, int32_t count);
    // IDA 0x48B2A0 area
    static void FillZero(void* ptr, int32_t count);
    // IDA 0x48B2A0 area
    static void InitBlock(void* ptr, int32_t size);
    // IDA 0x48B2A0 area
    static void ClearStruct(void* ptr, int32_t size);
    // IDA 0x48B2A0 area
    static void InitWithValue(void* ptr, int32_t count, int32_t value);

    int32_t     Struct_field_00;       // 0x00
};

// ============================================================================
// Count — reference counting utilities (6 methods)
// IDA: DecrementRefCountsAudio
// ============================================================================
class Count
{
public:
    // IDA 0x40A7A0 area
    static int32_t DecrementRefCountsAudio();
    // IDA 0x48B2A0 area
    static void SetupAllCountriesLobby();
    // IDA 0x48B2A0 area
    static int32_t GetCountQueue();
    // IDA 0x48B2A0 area
    static void IncrementRefCount();
    // IDA 0x48B2A0 area
    static void DecrementRefCount();
    // IDA 0x48B2A0 area
    static int32_t GetRefCount();

    int32_t     m_RefCount;     // 0x00
};

// ============================================================================
// Rect — rectangle operations (6 methods)
// IDA: Set, Construct, Union
// ============================================================================
class Rect
{
public:
    Rect() = default;
    Rect(int32_t x, int32_t y, int32_t w, int32_t h);

    // IDA 0x4D9C00 area
    void Set(int32_t x, int32_t y, int32_t w, int32_t h);
    // IDA 0x4D9C00 area
    void Construct(int32_t x, int32_t y, int32_t w, int32_t h);
    // IDA 0x4D9C00 area
    void Union(const Rect& other);
    // IDA 0x4D9C00 area
    bool Intersects(const Rect& other) const;
    // IDA 0x4D9C00 area
    bool Contains(int32_t x, int32_t y) const;
    // IDA 0x4D9C00 area
    void Clip(const Rect& clip);

    int32_t     X;              // 0x00
    int32_t     Y;              // 0x04
    int32_t     Width;          // 0x08
    int32_t     Height;         // 0x0C
};

// ============================================================================
// COM — COM helper utilities (3 methods)
// IDA: GetClassID, AddRef, ReleaseRef
// ============================================================================
class COM
{
public:
    // IDA 0x40BCB0 area
    static HRESULT GetClassID(const GUID& riid, GUID* pClassID);
    // IDA 0x40B960 area
    static int32_t AddRef(void* obj);
    // IDA 0x40BE50 area
    static int32_t ReleaseRef(void* obj);

    int32_t     COM_field_00;       // 0x00
};

// ============================================================================
// RefCount — shared reference counting (2 methods)
// IDA: Decrement, Increment
// ============================================================================
class RefCount
{
public:
    // IDA 0x40B960 area
    int32_t Increment();
    // IDA 0x40BE50 area
    int32_t Decrement();

    int32_t     m_RefCount;     // 0x00
    int32_t     RefCount_field_04;       // 0x04
};

// ============================================================================
// Helper — utility helper functions (1 method)
// IDA: ProcessData
// ============================================================================
class Helper
{
public:
    // IDA 0x4B9BD0 area
    static void ProcessData(void* data, int32_t size);

    int32_t     Helper_field_00;       // 0x00
};

// ============================================================================
// Compare — comparison utilities (1 method)
// IDA: Field96
// ============================================================================
class Compare
{
public:
    // IDA 0x4D9C00 area
    static bool Field96(int32_t a, int32_t b);

    int32_t     Compare_field_00;       // 0x00
};

// ============================================================================
// Value — value range utilities (1 method)
// IDA: InRange
// ============================================================================
class Value
{
public:
    // IDA 0x4D9C00 area
    static bool InRange(int32_t value, int32_t min, int32_t max);

    int32_t     Value_field_00;       // 0x00
};

// ============================================================================
// Return — HRESULT return wrapper (1 method)
// IDA: HRESULT_Fail
// ============================================================================
class Return
{
public:
    // IDA 0x40BCB0 area
    static HRESULT HRESULT_Fail();

    int32_t     Return_field_00;       // 0x00
};

// ============================================================================
// EventQueue — per-frame event pump (4 methods)
// IDA: Process 0x54F000
// ============================================================================
class EventQueue
{
public:
    // IDA 0x54F000
    static void Process(void* bink_player);
    // IDA 0x54F000 area
    static void Read();
    // IDA 0x54F000 area
    static bool Check();
    // IDA 0x54F000 area
    static void Clear();

    static int32_t  s_EventCount;   // 0x00
    static void*    s_Queue;        // 0x04
};

// ============================================================================
// Event_Dispatch — single event dispatcher (1 method)
// IDA: Return0
// ============================================================================
class Event_Dispatch
{
public:
    // IDA 0x54F000 area
    static int32_t Return0();

    int32_t     Event_Dispatch_field_00;       // 0x00
};

// ============================================================================
// Selection — selection state manager (3 methods)
// IDA: SetCurrent, GetFlag, ClearGlobals
// ============================================================================
class Selection
{
public:
    // IDA 0x724BD0 area
    void SetCurrent(ObjectClass* obj);
    // IDA 0x724BD0 area
    bool GetFlag() const;
    // IDA 0x724BD0 area
    void ClearGlobals();

    ObjectClass* m_Current;     // 0x00
    bool        m_Flag;         // 0x04
    uint8_t     _pad_05[3];     // 0x05
};

// ============================================================================
// Player — player state management (4 methods)
// IDA: FindByName, BuildListString, IsObserver
// ============================================================================
class Player
{
public:
    // IDA 0x48B2A0 area
    static HouseClass* FindByName(const char* name);
    // IDA 0x48B2A0 area
    static void BuildListString();
    // IDA 0x48B2A0 area
    static bool IsObserver(HouseClass* house);
    // IDA 0x48B2A0 area
    static int32_t GetCount();

    static int32_t  s_PlayerCount; // 0x00
};

// ============================================================================
// FrameTimer — frame-based timer (2 methods)
// IDA: HasRemaining, Init25
// ============================================================================
class FrameTimer
{
public:
    // IDA 0x54F720 area
    bool HasRemaining() const;
    // IDA 0x54F720 area
    void Init25();

    int32_t     m_StartFrame;   // 0x00
    int32_t     m_Duration;     // 0x04
};

// ============================================================================
// Time — time utilities (2 methods)
// IDA: GetElapsedMS, FormatDate
// ============================================================================
class Time
{
public:
    // IDA 0x54F720 area
    static int32_t GetElapsedMS();
    // IDA 0x54F720 area
    static void FormatDate(char* buffer, int32_t size);

    int32_t     Time_field_00;       // 0x00
};

// ============================================================================
// Float — floating point utilities (2 methods)
// IDA: Accumulate, SubtractClamped
// ============================================================================
class Float
{
public:
    // IDA 0x4D9C00 area
    static float Accumulate(float* dest, float value);
    // IDA 0x4D9C00 area
    static float SubtractClamped(float a, float b, float min);

    int32_t     Float_field_00;       // 0x00
};

// ============================================================================
// Config — configuration utilities (1 method)
// IDA: SaveObserverMode
// ============================================================================
class Config
{
public:
    // IDA 0x48B2A0 area
    static void SaveObserverMode(bool enabled);

    int32_t     Config_field_00;       // 0x00
};

// ============================================================================
// Settings — settings utilities (1 method)
// IDA: CheckString
// ============================================================================
class Settings
{
public:
    // IDA 0x48B2A0 area
    static bool CheckString(const char* str);

    int32_t     Settings_field_00;       // 0x00
};

// ============================================================================
// Init — initialization stubs (1 method)
// IDA: StubPlaceholder 0x60D430
// ============================================================================
class Init
{
public:
    // IDA 0x60D430
    static void StubPlaceholder();

    int32_t     Init_field_00;       // 0x00
};

// ============================================================================
// Process — process utilities (1 method)
// IDA: WaitForExit
// ============================================================================
class Process
{
public:
    // IDA 0x54F000 area
    static void WaitForExit();

    int32_t     Process_field_00;       // 0x00
};

// ============================================================================
// Main — main entry point helpers (1 method)
// IDA: CreateDialog
// ============================================================================
class Main
{
public:
    // IDA 0x6BB9A0 area
    static void* CreateDialog(int32_t dlg_id);

    int32_t     Main_field_00;       // 0x00
};

// ============================================================================
// Stub — stub functions (1 method)
// IDA: InfiniteLoop
// ============================================================================
class Stub
{
public:
    // IDA 0x6BB9A0 area
    static void InfiniteLoop();

    int32_t     Stub_field_00;       // 0x00
};

// ============================================================================
// Type — type checking utility (1 method)
// IDA: CheckAmbiguity
// ============================================================================
class Type
{
public:
    // IDA 0x48B2A0 area
    static bool CheckAmbiguity();

    int32_t     Type_field_00;       // 0x00
};

// ============================================================================
// unknown — misc utility class (8 methods)
// IDA: ddtor, Write, Seek
// ============================================================================
class unknown
{
public:
    unknown() = default;
    ~unknown();

    // IDA 0x48B2A0 area
    void ddtor();
    // IDA 0x48B2A0 area
    void Write(const void* data, int32_t size);
    // IDA 0x48B2A0 area
    void Seek(int32_t offset);
    // IDA 0x48B2A0 area
    int32_t Read(void* buf, int32_t size);
    // IDA 0x48B2A0 area
    void Flush();
    // IDA 0x48B2A0 area
    int32_t GetPosition();
    // IDA 0x48B2A0 area
    int32_t GetSize();
    // IDA 0x48B2A0 area
    void Close();

    void*       m_Data;         // 0x00
    int32_t     m_Position;     // 0x04
    int32_t     m_Size;         // 0x08
    int32_t     unknown_field_0C;       // 0x0C
};

// ============================================================================
// WinMain — game entry point utilities (3 methods)
// IDA: CleanupResource, Constructor_VectorClass_Wstring_, ShutdownCleanup
// ============================================================================
class WinMain
{
public:
    // IDA 0x6BB9A0 area
    static void CleanupResource();
    // IDA 0x6BB9A0 area
    static void Constructor_VectorClass_Wstring();
    // IDA 0x6BB9A0 area
    static void ShutdownCleanup();

    static HWND    s_hWnd;        // 0x00
    static HINSTANCE s_hInstance; // 0x04
};

} // namespace gamemd
