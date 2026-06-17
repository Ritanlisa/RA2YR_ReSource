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


// === Batch-generated MISSING class stubs ===

// 1 methods in IDA
class AllocCallback
{
public:
    virtual ~AllocCallback() = default;

    virtual void Dispatch() {} // 0x7be5d0

};
// 22 methods in IDA
class COMClass
{
public:
    virtual ~COMClass() = default;

    virtual void RegisterAll() {} // 0x490490
    virtual void ReleaseRef() {} // 0x65d670
    virtual void initInterface() {} // 0x65d6a0
    virtual void queryProperty() {} // 0x765680
    virtual void setProperty() {} // 0x7656b0
    // +17 more virtual methods

    uint8_t COMClass_field_0x04[4];
    uint8_t COMClass_field_0x08[4];
    uint8_t COMClass_field_0x0C[4];
    uint8_t COMClass_field_0x10[4];
    uint8_t COMClass_field_0x14[4];
    uint8_t COMClass_field_0x18[4];
    uint8_t COMClass_field_0x1C[4];
    uint8_t COMClass_field_0x20[4];
    uint8_t COMClass_field_0x24[4];
    uint8_t COMClass_field_0x28[4];
    uint8_t COMClass_field_0x2C[4];
    uint8_t COMClass_field_0x30[4];
    uint8_t COMClass_field_0x34[4];
    uint8_t COMClass_field_0x38[4];
    uint8_t COMClass_field_0x3C[4];
    uint8_t COMClass_field_0x40[4];
    uint8_t COMClass_field_0x44[4];
    uint8_t COMClass_field_0x48[4];
    uint8_t COMClass_field_0x4C[4];
    uint8_t COMClass_field_0x50[4];
};
// 2 methods in IDA
class COMClassFactory
{
public:
    virtual ~COMClassFactory() = default;

    virtual void Register() {} // 0x6bedb0
    virtual void CreateInstance() {} // 0x6c0ac0

    uint8_t COMClassFactory_field_0x04[4];
};
// 1 methods in IDA
class COMClassFactory_10
{
public:
    virtual ~COMClassFactory_10() = default;

    virtual void Construct() {} // 0x6bfbc0

};
// 1 methods in IDA
class COMClassFactory_3
{
public:
    virtual ~COMClassFactory_3() = default;

    virtual void Construct() {} // 0x6bf140

};
// 1 methods in IDA
class COMClassFactory_4
{
public:
    virtual ~COMClassFactory_4() = default;

    virtual void Construct() {} // 0x6bf2c0

};
// 1 methods in IDA
class COMClassFactory_5
{
public:
    virtual ~COMClassFactory_5() = default;

    virtual void Construct() {} // 0x6bf440

};
// 1 methods in IDA
class COMClassFactory_6
{
public:
    virtual ~COMClassFactory_6() = default;

    virtual void Construct() {} // 0x6bf5c0

};
// 1 methods in IDA
class COMClassFactory_7
{
public:
    virtual ~COMClassFactory_7() = default;

    virtual void Construct() {} // 0x6bf740

};
// 1 methods in IDA
class COMClassFactory_8
{
public:
    virtual ~COMClassFactory_8() = default;

    virtual void Construct() {} // 0x6bf8c0

};
// 1 methods in IDA
class COMClassFactory_9
{
public:
    virtual ~COMClassFactory_9() = default;

    virtual void Construct() {} // 0x6bfa40

};
// 27 methods in IDA
class COMObject
{
public:
    virtual ~COMObject() = default;

    virtual void Release() {} // 0x437fc0
    virtual void DetachPrimary() {} // 0x488690
    virtual void IsValid() {} // 0x48c3b0
    virtual void SetMember10() {} // 0x48e600
    virtual void GetMember09() {} // 0x48e610
    // +22 more virtual methods

    uint8_t COMObject_field_0x04[4];
    uint8_t COMObject_field_0x08[4];
    uint8_t COMObject_field_0x0C[4];
    uint8_t COMObject_field_0x10[4];
    uint8_t COMObject_field_0x14[4];
    uint8_t COMObject_field_0x18[4];
    uint8_t COMObject_field_0x1C[4];
    uint8_t COMObject_field_0x20[4];
    uint8_t COMObject_field_0x24[4];
    uint8_t COMObject_field_0x28[4];
    uint8_t COMObject_field_0x2C[4];
    uint8_t COMObject_field_0x30[4];
    uint8_t COMObject_field_0x34[4];
    uint8_t COMObject_field_0x38[4];
    uint8_t COMObject_field_0x3C[4];
    uint8_t COMObject_field_0x40[4];
    uint8_t COMObject_field_0x44[4];
    uint8_t COMObject_field_0x48[4];
    uint8_t COMObject_field_0x4C[4];
    uint8_t COMObject_field_0x50[4];
};
// 1 methods in IDA
class CRC32
{
public:
    virtual ~CRC32() = default;

    virtual void Compute() {} // 0x4a1fb0

};
// 9 methods in IDA
class ComPtr
{
public:
    virtual ~ComPtr() = default;

    virtual void Release_Alt() {} // 0x4b4d50
    virtual void ReleaseAndSet() {} // 0x4d0490
    virtual void Dtor() {} // 0x6406f0
    virtual void Constructor() {} // 0x65d430
    virtual void Release() {} // 0x65d460
    // +4 more virtual methods

    uint8_t ComPtr_field_0x04[4];
    uint8_t ComPtr_field_0x08[4];
    uint8_t ComPtr_field_0x0C[4];
    uint8_t ComPtr_field_0x10[4];
    uint8_t ComPtr_field_0x14[4];
    uint8_t ComPtr_field_0x18[4];
    uint8_t ComPtr_field_0x1C[4];
    uint8_t ComPtr_field_0x20[4];
};
// 1 methods in IDA
class CountdownTimer
{
public:
    virtual ~CountdownTimer() = default;

    virtual void UpdateDisplay() {} // 0x4a2600

};
// 1 methods in IDA
class CountryCombo
{
public:
    virtual ~CountryCombo() = default;

    virtual void IDToIndex() {} // 0x4e3830

};
// 11 methods in IDA
class EnumConnectionPointsClass
{
public:
    virtual ~EnumConnectionPointsClass() = default;

    virtual void QueryInterface() {} // 0x4a0920
    virtual void AddRef() {} // 0x4a0990
    virtual void Release() {} // 0x4a09b0
    virtual void ddtor() {} // 0x4a0a50
    virtual void Next() {} // 0x4a0af0
    // +6 more virtual methods

    uint8_t EnumConnectionPointsClass_field_0x04[4];
    uint8_t EnumConnectionPointsClass_field_0x08[4];
    uint8_t EnumConnectionPointsClass_field_0x0C[4];
    uint8_t EnumConnectionPointsClass_field_0x10[4];
    uint8_t EnumConnectionPointsClass_field_0x14[4];
    uint8_t EnumConnectionPointsClass_field_0x18[4];
    uint8_t EnumConnectionPointsClass_field_0x1C[4];
    uint8_t EnumConnectionPointsClass_field_0x20[4];
    uint8_t EnumConnectionPointsClass_field_0x24[4];
    uint8_t EnumConnectionPointsClass_field_0x28[4];
};
// 6 methods in IDA
class EnumConnectionsClass
{
public:
    virtual ~EnumConnectionsClass() = default;

    virtual void QueryInterface() {} // 0x49ff80
    virtual void AddRef() {} // 0x49fff0
    virtual void Release() {} // 0x4a0010
    virtual void ddtor() {} // 0x4a00b0
    virtual void Next() {} // 0x4a0160
    // +1 more virtual methods

    uint8_t EnumConnectionsClass_field_0x04[4];
    uint8_t EnumConnectionsClass_field_0x08[4];
    uint8_t EnumConnectionsClass_field_0x0C[4];
    uint8_t EnumConnectionsClass_field_0x10[4];
    uint8_t EnumConnectionsClass_field_0x14[4];
};
// 1 methods in IDA
class EventBuffer
{
public:
    virtual ~EventBuffer() = default;

    virtual void Enqueue() {} // 0x54f1c0

};
// 3 methods in IDA
class Flag
{
public:
    virtual ~Flag() = default;

    virtual void CheckNone() {} // 0x4a51d0
    virtual void IsZero() {} // 0x4f4ca0
    virtual void IsNot2() {} // 0x5176b0

    uint8_t Flag_field_0x04[4];
    uint8_t Flag_field_0x08[4];
};
// 1 methods in IDA
class FlagSystem
{
public:
    virtual ~FlagSystem() = default;

    virtual void GetNextActive() {} // 0x626690

};
// 2 methods in IDA
class Float4
{
public:
    virtual ~Float4() = default;

    virtual void Copy() {} // 0x645d20
    virtual void Sum() {} // 0x6c9650

    uint8_t Float4_field_0x04[4];
};
// 1 methods in IDA
class FloatArray
{
public:
    virtual ~FloatArray() = default;

    virtual void Get() {} // 0x6c9680

};
// 6 methods in IDA
class GraphicMenuAnimItem
{
public:
    virtual ~GraphicMenuAnimItem() = default;

    virtual void Release() {} // 0x4f3090
    virtual void QueryInterface() {} // 0x4f30e0
    virtual void StubReturnFalse() {} // 0x4f3ad0
    virtual void Stub() {} // 0x4f3ae0
    virtual void AddRef() {} // 0x4f3b00
    // +1 more virtual methods

    uint8_t GraphicMenuAnimItem_field_0x04[4];
    uint8_t GraphicMenuAnimItem_field_0x08[4];
    uint8_t GraphicMenuAnimItem_field_0x0C[4];
    uint8_t GraphicMenuAnimItem_field_0x10[4];
    uint8_t GraphicMenuAnimItem_field_0x14[4];
};
// 5 methods in IDA
class GraphicMenuImageItem
{
public:
    virtual ~GraphicMenuImageItem() = default;

    virtual void Release() {} // 0x4f3640
    virtual void Load() {} // 0x4f3690
    virtual void Draw() {} // 0x4f3720
    virtual void ddtor() {} // 0x4f37a0
    virtual void QueryInterface() {} // 0x4f3840

    uint8_t GraphicMenuImageItem_field_0x04[4];
    uint8_t GraphicMenuImageItem_field_0x08[4];
    uint8_t GraphicMenuImageItem_field_0x0C[4];
    uint8_t GraphicMenuImageItem_field_0x10[4];
};
// 2 methods in IDA
class GraphicMenuItem
{
public:
    virtual ~GraphicMenuItem() = default;

    virtual void Constructor() {} // 0x4f3a50
    virtual void Destructor() {} // 0x4f3a70

    uint8_t GraphicMenuItem_field_0x04[4];
};
// 2 methods in IDA
class GraphicMenuItem_Destru
{
public:
    virtual ~GraphicMenuItem_Destru() = default;

    virtual void Release() {} // 0x4f3af0
    virtual void QueryInterface() {} // 0x4f3b20

    uint8_t GraphicMenuItem_Destru_field_0x04[4];
};
// 2 methods in IDA
class GraphicMenuShortcutItem
{
public:
    virtual ~GraphicMenuShortcutItem() = default;

    virtual void AddRef() {} // 0x4f3ee0
    virtual void QueryInterface() {} // 0x4f3f60

    uint8_t GraphicMenuShortcutItem_field_0x04[4];
};
// 3 methods in IDA
class Hash
{
public:
    virtual ~Hash() = default;

    virtual void ComputeHashSHA1() {} // 0x476d80
    virtual void InsertOrdered() {} // 0x4f4410
    virtual void Reset() {} // 0x5565f0

    uint8_t Hash_field_0x04[4];
    uint8_t Hash_field_0x08[4];
};
// 4 methods in IDA
class HashMap
{
public:
    virtual ~HashMap() = default;

    virtual void ComputeIndex() {} // 0x624c80
    virtual void Shrink2() {} // 0x7adf70
    virtual void ComputeIndex_2() {} // 0x7ae0c0
    virtual void Shrink() {} // 0x7ae460

    uint8_t HashMap_field_0x04[4];
    uint8_t HashMap_field_0x08[4];
    uint8_t HashMap_field_0x0C[4];
};
// 27 methods in IDA
class HashTable
{
public:
    virtual ~HashTable() = default;

    virtual void DestroyHashTableINIClass() {} // 0x5256f0
    virtual void BinarySearch() {} // 0x52b390
    virtual void BinarySearchAlt() {} // 0x52b4f0
    virtual void LookupAndMark() {} // 0x608440
    virtual void FindAndMark() {} // 0x624140
    // +22 more virtual methods

    uint8_t HashTable_field_0x04[4];
    uint8_t HashTable_field_0x08[4];
    uint8_t HashTable_field_0x0C[4];
    uint8_t HashTable_field_0x10[4];
    uint8_t HashTable_field_0x14[4];
    uint8_t HashTable_field_0x18[4];
    uint8_t HashTable_field_0x1C[4];
    uint8_t HashTable_field_0x20[4];
    uint8_t HashTable_field_0x24[4];
    uint8_t HashTable_field_0x28[4];
    uint8_t HashTable_field_0x2C[4];
    uint8_t HashTable_field_0x30[4];
    uint8_t HashTable_field_0x34[4];
    uint8_t HashTable_field_0x38[4];
    uint8_t HashTable_field_0x3C[4];
    uint8_t HashTable_field_0x40[4];
    uint8_t HashTable_field_0x44[4];
    uint8_t HashTable_field_0x48[4];
    uint8_t HashTable_field_0x4C[4];
    uint8_t HashTable_field_0x50[4];
};
// 1 methods in IDA
class HashTableSection
{
public:
    virtual ~HashTableSection() = default;

    virtual void FindSection() {} // 0x526b10

};
// 1 methods in IDA
class HashTree
{
public:
    virtual ~HashTree() = default;

    virtual void MarkEntry() {} // 0x5b4270

};
// 1 methods in IDA
class HashVector_UInt
{
public:
    virtual ~HashVector_UInt() = default;

    virtual void Construct() {} // 0x58aff0

};
// 1 methods in IDA
class PairVector
{
public:
    virtual ~PairVector() = default;

    virtual void PushBack() {} // 0x4e0c40

};
// 12 methods in IDA
class PlayerClass
{
public:
    virtual ~PlayerClass() = default;

    virtual void sub_430F70() {} // 0x430f70
    virtual void ExecuteCommand() {} // 0x4ab9b0
    virtual void CheckHumanPlayer() {} // 0x4ac2b0
    virtual void SetTargetOrClear() {} // 0x4c6650
    virtual void AssignPlayerIndex_0() {} // 0x5c5d30
    // +7 more virtual methods

    uint8_t PlayerClass_field_0x04[4];
    uint8_t PlayerClass_field_0x08[4];
    uint8_t PlayerClass_field_0x0C[4];
    uint8_t PlayerClass_field_0x10[4];
    uint8_t PlayerClass_field_0x14[4];
    uint8_t PlayerClass_field_0x18[4];
    uint8_t PlayerClass_field_0x1C[4];
    uint8_t PlayerClass_field_0x20[4];
    uint8_t PlayerClass_field_0x24[4];
    uint8_t PlayerClass_field_0x28[4];
    uint8_t PlayerClass_field_0x2C[4];
};
// 1 methods in IDA
class PlayerProfile
{
public:
    virtual ~PlayerProfile() = default;

    virtual void QueryInterface() {} // 0x77b030

};
// 2 methods in IDA
class PlayerSlot
{
public:
    virtual ~PlayerSlot() = default;

    virtual void NameToDialogID() {} // 0x510fb0
    virtual void IndexToDlgID() {} // 0x5e98f0

    uint8_t PlayerSlot_field_0x04[4];
};
// 1 methods in IDA
class PlayerType
{
public:
    virtual ~PlayerType() = default;

    virtual void GetName() {} // 0x4e62b0

};
// 1 methods in IDA
class PtrVector
{
public:
    virtual ~PtrVector() = default;

    virtual void Destroy() {} // 0x5c6120

};
// 1 methods in IDA
class Queue
{
public:
    virtual ~Queue() = default;

    virtual void GetNext() {} // 0x407470

};
// 4 methods in IDA
class Random
{
public:
    virtual ~Random() = default;

    virtual void Gaussian() {} // 0x5980c0
    virtual void State() {} // 0x65c780
    virtual void Range() {} // 0x65c7e0
    virtual void sub_661850() {} // 0x661850

    uint8_t Random_field_0x04[4];
    uint8_t Random_field_0x08[4];
    uint8_t Random_field_0x0C[4];
};
// 3 methods in IDA
class RandomStraw
{
public:
    virtual ~RandomStraw() = default;

    virtual void sub_65C8B0() {} // 0x65c8b0
    virtual void Release() {} // 0x661c10
    virtual void QueryInterface() {} // 0x661c70

    uint8_t RandomStraw_field_0x04[4];
    uint8_t RandomStraw_field_0x08[4];
};
// 1 methods in IDA
class Rect_Point
{
public:
    virtual ~Rect_Point() = default;

    virtual void Set() {} // 0x4e1a20

};
// 1 methods in IDA
class ReferenceCounted
{
public:
    virtual ~ReferenceCounted() = default;

    virtual void Constructor() {} // 0x65d660

};
// 6 methods in IDA
class SHA1
{
public:
    virtual ~SHA1() = default;

    virtual void sub_69D8C0() {} // 0x69d8c0
    virtual void Process() {} // 0x69d960
    virtual void Compute() {} // 0x69d9e0
    virtual void Transform() {} // 0x69db30
    virtual void Reset() {} // 0x69dff0
    // +1 more virtual methods

    uint8_t SHA1_field_0x04[4];
    uint8_t SHA1_field_0x08[4];
    uint8_t SHA1_field_0x0C[4];
    uint8_t SHA1_field_0x10[4];
    uint8_t SHA1_field_0x14[4];
};
// 1 methods in IDA
class SettingsClass
{
public:
    virtual ~SettingsClass() = default;

    virtual void ClampValues() {} // 0x5975e0

};
// 1 methods in IDA
class StringBuffer
{
public:
    virtual ~StringBuffer() = default;

    virtual void Reset() {} // 0x5f33a0

};
// 1 methods in IDA
class StringList
{
public:
    virtual ~StringList() = default;

    virtual void Find() {} // 0x721210

};
// 2 methods in IDA
class StringTable
{
public:
    virtual ~StringTable() = default;

    virtual void Lookup() {} // 0x40dce0
    virtual void Find() {} // 0x5cf6b0

    uint8_t StringTable_field_0x04[4];
};
// 7 methods in IDA
class StringVector
{
public:
    virtual ~StringVector() = default;

    virtual void Release() {} // 0x49ee60
    virtual void ddtor() {} // 0x49ef10
    virtual void Add() {} // 0x49ef40
    virtual void Remove() {} // 0x49ef80
    virtual void QueryInterface() {} // 0x49efa0
    // +2 more virtual methods

    uint8_t StringVector_field_0x04[4];
    uint8_t StringVector_field_0x08[4];
    uint8_t StringVector_field_0x0C[4];
    uint8_t StringVector_field_0x10[4];
    uint8_t StringVector_field_0x14[4];
    uint8_t StringVector_field_0x18[4];
};
// 1 methods in IDA
class StructTable
{
public:
    virtual ~StructTable() = default;

    virtual void Append() {} // 0x4a3840

};
// 1 methods in IDA
class Timeout
{
public:
    virtual ~Timeout() = default;

    virtual void GetRemaining() {} // 0x4b4d70

};
// 1 methods in IDA
class TimerPool
{
public:
    virtual ~TimerPool() = default;

    virtual void AllocSlot() {} // 0x53e3c0

};
// 1 methods in IDA
class Tree
{
public:
    virtual ~Tree() = default;

    virtual void Destructor() {} // 0x5b4080

};
// 1 methods in IDA
class TypeClass
{
public:
    virtual ~TypeClass() = default;

    virtual void FindByName() {} // 0x41caa0

};
// 2 methods in IDA
class Vector2
{
public:
    virtual ~Vector2() = default;

    virtual void NormalizeNonZero() {} // 0x41c460
    virtual void Subtract() {} // 0x6dc4c0

    uint8_t Vector2_field_0x04[4];
};
// 3 methods in IDA
class Vector3
{
public:
    virtual ~Vector3() = default;

    virtual void Magnitude() {} // 0x41c3c0
    virtual void Subtract() {} // 0x437160
    virtual void AddAssign() {} // 0x43a100

    uint8_t Vector3_field_0x04[4];
    uint8_t Vector3_field_0x08[4];
};
// 2 methods in IDA
class Vector4
{
public:
    virtual ~Vector4() = default;

    virtual void EraseAt() {} // 0x5ad790
    virtual void EraseAt_Copy() {} // 0x63ef70

    uint8_t Vector4_field_0x04[4];
};
// 1 methods in IDA
class Vector8
{
public:
    virtual ~Vector8() = default;

    virtual void EraseAt() {} // 0x589290

};
// 1 methods in IDA
class VectorClassUInt
{
public:
    virtual ~VectorClassUInt() = default;

    virtual void Constructor() {} // 0x42dc50

};
// 7 methods in IDA
class VectorCursor
{
public:
    virtual ~VectorCursor() = default;

    virtual void Construct() {} // 0x76f0c0
    virtual void HasNext() {} // 0x76f0e0
    virtual void initCursor() {} // 0x76f100
    virtual void updateCursor() {} // 0x76f120
    virtual void drawCursor() {} // 0x76f140
    // +2 more virtual methods

    uint8_t VectorCursor_field_0x04[4];
    uint8_t VectorCursor_field_0x08[4];
    uint8_t VectorCursor_field_0x0C[4];
    uint8_t VectorCursor_field_0x10[4];
    uint8_t VectorCursor_field_0x14[4];
    uint8_t VectorCursor_field_0x18[4];
};
// 3 methods in IDA
class VectorCursor_uint_DynamicVectorClass_uint
{
public:
    virtual ~VectorCursor_uint_DynamicVectorClass_uint() = default;

    virtual void AddRef() {} // 0x4f3fc0
    virtual void Release() {} // 0x4f3ff0
    virtual void ddtor() {} // 0x4f4000

    uint8_t VectorCursor_uint_DynamicVectorClass_uint_field_0x04[4];
    uint8_t VectorCursor_uint_DynamicVectorClass_uint_field_0x08[4];
};

} // namespace gamemd