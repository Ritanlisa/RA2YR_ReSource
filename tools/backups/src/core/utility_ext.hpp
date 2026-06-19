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
    int32_t ProcessCommand(int32_t cmd, uint32_t param);  // 0x7327D0
    // IDA 0x40B640
    void ClearBuffer();  // 0x40B640
    // IDA 0x40B670
    int32_t PointerToIndex(void* ptr);  // 0x40B670
    // IDA 0x40B6D0
    void Update();  // 0x40B6D0
    // IDA 0x40B6F0
    void Show();  // 0x40B6F0
    // IDA 0x40B930
    void* FindItem(int32_t index);  // 0x40B930
    // IDA 0x40C0E0
    void* FindMoveItem(int32_t index);  // 0x40C0E0
    // IDA 0x40BE80
    int32_t GetIndex2(void* ptr);  // 0x40BE80
    // IDA 0x40BB90
    void Draw(DSurface* surface);  // 0x40BB90
    // IDA 0x40C030
    void SetCapacity(int32_t capacity);  // 0x40C030
    // IDA 0x40B960
    int32_t AddRef();  // 0x40B960
    // IDA 0x40BCB0
    HRESULT QueryInterface(const GUID& riid, void** ppv);  // 0x40BCB0
    // IDA 0x40BE50
    void Destroy();  // 0x40BE50

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
    static bool Start(const char* filename);  // 0x67E730
    // IDA 0x4136C0
    static void LoadIteratedData();  // 0x4136C0
    // IDA 0x413800
    static void ClearAllSlots();  // 0x413800
    // IDA 0x439260
    static void DeserializePointerArrays();  // 0x439260
    // IDA 0x4C6320
    static void LoadBlock68();  // 0x4C6320
    // IDA 0x54E6F0
    static void CleanupArray();  // 0x54E6F0
    // IDA 0x54E7B0
    static void LoadPointArray();  // 0x54E7B0
    // IDA 0x660840
    static void LoadTriggerEvents();  // 0x660840
    // IDA 0x660F10
    static void RemoveItem();  // 0x660F10
    // IDA 0x69B5B0
    static void LoadBlock300();  // 0x69B5B0
    // IDA 0x751710
    static void RestoreAudioState();  // 0x751710
    // IDA 0x7533F0
    static void LoadMagicAndAudio();  // 0x7533F0

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
    int32_t CreateDirectSound();  // 0x40A340
    // IDA 0x40A6D0
    int32_t sub_40A6D0();
    // IDA 0x40CCD0
    bool CompareEqual(const Buffer& other) const;  // 0x40CCD0
    // IDA 0x410ED0
    int32_t FillCircularBufferScroll();  // 0x410ED0
    // IDA 0x42F7C0
    void Cleanup();  // 0x42F7C0
    // IDA 0x43AD00
    void Init();  // 0x43AD00
    // IDA 0x488030
    void Constructor_VectorClass_ObjectClass();
    // IDA 0x632B70
    void RotateBufferCrypto();  // 0x632B70
    // IDA 0x6C89E0
    void AppendCellData();  // 0x6C89E0
    // IDA 0x7BCB50
    int32_t FillCircularBufferScroll2();  // 0x7BCB50
    // IDA 0x7C1730
    void AllocateCodecFrameBuffers();  // 0x7C1730

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
    void ProcessBitmapStream();  // 0x42DDB0
    // IDA 0x42DF40
    void sub_42DF40();
    // IDA 0x4A2780
    void sub_4A2780();
    // IDA 0x52AE70
    void ClearVectorAndStraw();  // 0x52AE70
    // IDA 0x52AEA0
    void DestroyStraw();  // 0x52AEA0
    // IDA 0x52AEE0
    void DestroyPipe();  // 0x52AEE0
    // IDA 0x631D10
    void Dispatch();  // 0x631D10
    // IDA 0x6C95E0
    int32_t GetField();  // 0x6C95E0
    // IDA 0x6C9890
    void Set(int32_t value);  // 0x6C9890
    // IDA 0x6C98E0
    void Invoke();  // 0x6C98E0

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
    static void ZeroInit32(void* ptr, int32_t count);  // 0x4085A0
    // IDA 0x4B9BD0
    static void Zero3(void* ptr, int32_t count);  // 0x4B9BD0
    // IDA 0x48B2A0 area
    static void ZeroInitAndSetup(void* ptr, int32_t size);  // 0x48BF10
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
    static int32_t DecrementRefCountsAudio();  // 0x408E70
    // IDA 0x48B2A0 area
    static void SetupAllCountriesLobby();  // 0x46F6D0
    // IDA 0x48B2A0 area
    static int32_t GetCountQueue();  // 0x5F1EA0
    // IDA 0x48B2A0 area
    static void IncrementRefCount();
    // IDA 0x48B2A0 area
    static void DecrementRefCount();  // 0x6351e0
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
    void Set(int32_t x, int32_t y, int32_t w, int32_t h);  // 0x42E410
    // IDA 0x4D9C00 area
    void Construct(int32_t x, int32_t y, int32_t w, int32_t h);  // 0x45A130
    // IDA 0x4D9C00 area
    void Union(const Rect& other);  // 0x487F40
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
    static HRESULT GetClassID(const GUID& riid, GUID* pClassID);  // 0x43A500
    // IDA 0x40B960 area
    static int32_t AddRef(void* obj);  // 0x55A950
    // IDA 0x40BE50 area
    static int32_t ReleaseRef(void* obj);  // 0x55A970

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
    int32_t Increment();  // 0x49FA00
    // IDA 0x40BE50 area
    int32_t Decrement();  // 0x401F90

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
    static void ProcessData(void* data, int32_t size);  // 0x4371D0

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
    static bool Field96(int32_t a, int32_t b);  // 0x46DC90

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
    static bool InRange(int32_t value, int32_t min, int32_t max);  // 0x486730

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
    static HRESULT HRESULT_Fail();  // 0x48ACE0

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
    static void Process(void* bink_player);  // 0x54F000
    // IDA 0x54F000 area
    static void Read();  // 0x54F050
    // IDA 0x54F000 area
    static bool Check();  // 0x54F650
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
    static int32_t Return0();  // 0x48D1D0

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
    void SetCurrent(ObjectClass* obj);  // 0x731D00
    // IDA 0x724BD0 area
    bool GetFlag() const;  // 0x732D00
    // IDA 0x724BD0 area
    void ClearGlobals();  // 0x734270

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
    static HouseClass* FindByName(const char* name);  // 0x5E8BF0
    // IDA 0x48B2A0 area
    static void BuildListString();  // 0x5E8DC0
    // IDA 0x48B2A0 area
    static bool IsObserver(HouseClass* house);  // 0x5E9440
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
    bool HasRemaining() const;  // 0x41BF40
    // IDA 0x54F720 area
    void Init25();  // 0x70D150

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
    static int32_t GetElapsedMS();  // 0x4E24A0
    // IDA 0x54F720 area
    static void FormatDate(char* buffer, int32_t size);  // 0x777AC0

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
    static float Accumulate(float* dest, float value);  // 0x6C9690
    // IDA 0x4D9C00 area
    static float SubtractClamped(float a, float b, float min);  // 0x6C96B0

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
    static void SaveObserverMode(bool enabled);  // 0x5EE1B0

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
    static bool CheckString(const char* str);  // 0x5E8760

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
    static void StubPlaceholder();  // 0x60D430

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
    static void WaitForExit();  // 0x664610

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
    static void* CreateDialog(int32_t dlg_id);  // 0x4E1D00

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
    static void InfiniteLoop();  // 0x4F4D80

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
    static bool CheckAmbiguity();  // 0x578540

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
    void ddtor();  // 0x588CE0
    // IDA 0x48B2A0 area
    void Write(const void* data, int32_t size);  // 0x588D10
    // IDA 0x48B2A0 area
    void Seek(int32_t offset);  // 0x588D30
    // IDA 0x48B2A0 area
    int32_t Read(void* buf, int32_t size);  // 0x5896A0
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
    static void CleanupResource();  // 0x49F8B0
    // IDA 0x6BB9A0 area
    static void Constructor_VectorClass_Wstring();
    // IDA 0x6BB9A0 area
    static void ShutdownCleanup();  // 0x734D30

    static HWND    s_hWnd;        // 0x00
    static HINSTANCE s_hInstance; // 0x04
};


// === Batch-generated MISSING class stubs ===

// 1 methods in IDA
class AllocCallback
{
public:
    virtual ~AllocCallback() = default;

    virtual void Dispatch() {} // IDA: 0x7BE5D0

};
// 22 methods in IDA
class COMClass
{
public:
    virtual ~COMClass() = default;

    virtual void RegisterAll() {} // IDA: 0x490490
    virtual void ReleaseRef() {} // IDA: 0x65D670
    virtual void initInterface() {} // IDA: 0x65D6A0
    virtual void queryProperty() {} // IDA: 0x765680
    virtual void setProperty() {} // IDA: 0x7656B0
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

    virtual void Register() {} // IDA: 0x6BEDB0
    virtual void CreateInstance() {} // IDA: 0x6C0AC0

    uint8_t COMClassFactory_field_0x04[4];
};
// 1 methods in IDA
class COMClassFactory_10
{
public:
    virtual ~COMClassFactory_10() = default;

    virtual void Construct() {} // IDA: 0x6BFBC0

};
// 1 methods in IDA
class COMClassFactory_3
{
public:
    virtual ~COMClassFactory_3() = default;

    virtual void Construct() {} // IDA: 0x6BF140

};
// 1 methods in IDA
class COMClassFactory_4
{
public:
    virtual ~COMClassFactory_4() = default;

    virtual void Construct() {} // IDA: 0x6BF2C0

};
// 1 methods in IDA
class COMClassFactory_5
{
public:
    virtual ~COMClassFactory_5() = default;

    virtual void Construct() {} // IDA: 0x6BF440

};
// 1 methods in IDA
class COMClassFactory_6
{
public:
    virtual ~COMClassFactory_6() = default;

    virtual void Construct() {} // IDA: 0x6BF5C0

};
// 1 methods in IDA
class COMClassFactory_7
{
public:
    virtual ~COMClassFactory_7() = default;

    virtual void Construct() {} // IDA: 0x6BF740

};
// 1 methods in IDA
class COMClassFactory_8
{
public:
    virtual ~COMClassFactory_8() = default;

    virtual void Construct() {} // IDA: 0x6BF8C0

};
// 1 methods in IDA
class COMClassFactory_9
{
public:
    virtual ~COMClassFactory_9() = default;

    virtual void Construct() {} // IDA: 0x6BFA40

};
// 27 methods in IDA
class COMObject
{
public:
    virtual ~COMObject() = default;

    virtual void Release() {} // IDA: 0x437FC0
    virtual void DetachPrimary() {} // IDA: 0x488690
    virtual void IsValid() {} // IDA: 0x48C3B0
    virtual void SetMember10() {} // IDA: 0x48E600
    virtual void GetMember09() {} // IDA: 0x48E610
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

    virtual void Compute() {} // IDA: 0x4A1FB0

};
// 9 methods in IDA
class ComPtr
{
public:
    virtual ~ComPtr() = default;  // 0x6406f0

    virtual void Release_Alt() {} // IDA: 0x4B4D50
    virtual void ReleaseAndSet() {} // IDA: 0x4D0490
    virtual void Dtor() {} // IDA: 0x6406F0
    virtual void Constructor() {} // IDA: 0x65D430
    virtual void Release() {} // IDA: 0x65D460
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

    virtual void UpdateDisplay() {} // IDA: 0x4A2600

};
// 1 methods in IDA
class CountryCombo
{
public:
    virtual ~CountryCombo() = default;

    virtual void IDToIndex() {} // IDA: 0x4E3830

};
// 11 methods in IDA
class EnumConnectionPointsClass
{
public:
    virtual ~EnumConnectionPointsClass() = default;  // 0x4a0a50

    virtual void QueryInterface() {} // IDA: 0x4A0920
    virtual void AddRef() {} // IDA: 0x4A0990
    virtual void Release() {} // IDA: 0x4A09B0
    virtual void ddtor() {} // IDA: 0x4A0A50
    virtual void Next() {} // IDA: 0x4A0AF0
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
    virtual ~EnumConnectionsClass() = default;  // 0x4a00b0

    virtual void QueryInterface() {} // IDA: 0x49FF80
    virtual void AddRef() {} // IDA: 0x49FFF0
    virtual void Release() {} // IDA: 0x4A0010
    virtual void ddtor() {} // IDA: 0x4A00B0
    virtual void Next() {} // IDA: 0x4A0160
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

    virtual void Enqueue() {} // IDA: 0x54F1C0

};
// 3 methods in IDA
class Flag
{
public:
    virtual ~Flag() = default;

    virtual void CheckNone() {} // IDA: 0x4A51D0
    virtual void IsZero() {} // IDA: 0x4F4CA0
    virtual void IsNot2() {} // IDA: 0x5176B0

    uint8_t Flag_field_0x04[4];
    uint8_t Flag_field_0x08[4];
};
// 1 methods in IDA
class FlagSystem
{
public:
    virtual ~FlagSystem() = default;

    virtual void GetNextActive() {} // IDA: 0x626690

};
// 2 methods in IDA
class Float4
{
public:
    virtual ~Float4() = default;

    virtual void Copy() {} // IDA: 0x645D20
    virtual void Sum() {} // IDA: 0x6C9650

    uint8_t Float4_field_0x04[4];
};
// 1 methods in IDA
class FloatArray
{
public:
    virtual ~FloatArray() = default;

    virtual void Get() {} // IDA: 0x6C9680

};
// 6 methods in IDA
class GraphicMenuAnimItem
{
public:
    virtual ~GraphicMenuAnimItem() = default;

    virtual void Release() {} // IDA: 0x4F3090
    virtual void QueryInterface() {} // IDA: 0x4F30E0
    virtual void StubReturnFalse() {} // IDA: 0x4F3AD0
    virtual void Stub() {} // IDA: 0x4F3AE0
    virtual void AddRef() {} // IDA: 0x4F3B00
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
    virtual ~GraphicMenuImageItem() = default;  // 0x4f37a0

    virtual void Release() {} // IDA: 0x4F3640
    virtual void Load() {} // IDA: 0x4F3690
    virtual void Draw() {} // IDA: 0x4F3720
    virtual void ddtor() {} // IDA: 0x4F37A0
    virtual void QueryInterface() {} // IDA: 0x4F3840

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

    virtual void Constructor() {} // IDA: 0x4F3A50
    virtual void Destructor() {} // IDA: 0x4F3A70

    uint8_t GraphicMenuItem_field_0x04[4];
};
// 2 methods in IDA
class GraphicMenuItem_Destru
{
public:
    virtual ~GraphicMenuItem_Destru() = default;

    virtual void Release() {} // IDA: 0x4F3AF0
    virtual void QueryInterface() {} // IDA: 0x4F3B20

    uint8_t GraphicMenuItem_Destru_field_0x04[4];
};
// 2 methods in IDA
class GraphicMenuShortcutItem
{
public:
    virtual ~GraphicMenuShortcutItem() = default;

    virtual void AddRef() {} // IDA: 0x4F3EE0
    virtual void QueryInterface() {} // IDA: 0x4F3F60

    uint8_t GraphicMenuShortcutItem_field_0x04[4];
};
// 3 methods in IDA
class Hash
{
public:
    virtual ~Hash() = default;

    virtual void ComputeHashSHA1() {} // IDA: 0x476D80
    virtual void InsertOrdered() {} // IDA: 0x4F4410
    virtual void Reset() {} // IDA: 0x5565F0

    uint8_t Hash_field_0x04[4];
    uint8_t Hash_field_0x08[4];
};
// 4 methods in IDA
class HashMap
{
public:
    virtual ~HashMap() = default;

    virtual void ComputeIndex() {} // IDA: 0x624C80
    virtual void Shrink2() {} // IDA: 0x7ADF70
    virtual void ComputeIndex_2() {} // IDA: 0x7AE0C0
    virtual void Shrink() {} // IDA: 0x7AE460

    uint8_t HashMap_field_0x04[4];
    uint8_t HashMap_field_0x08[4];
    uint8_t HashMap_field_0x0C[4];
};
// 27 methods in IDA
class HashTable
{
public:
    virtual ~HashTable() = default;

    virtual void DestroyHashTableINIClass() {} // IDA: 0x5256F0
    virtual void BinarySearch() {} // IDA: 0x52B390
    virtual void BinarySearchAlt() {} // IDA: 0x52B4F0
    virtual void LookupAndMark() {} // IDA: 0x608440
    virtual void FindAndMark() {} // IDA: 0x624140
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

    virtual void FindSection() {} // IDA: 0x526B10

};
// 1 methods in IDA
class HashTree
{
public:
    virtual ~HashTree() = default;

    virtual void MarkEntry() {} // IDA: 0x5B4270

};
// 1 methods in IDA
class HashVector_UInt
{
public:
    virtual ~HashVector_UInt() = default;

    virtual void Construct() {} // IDA: 0x58AFF0

};
// 1 methods in IDA
class PairVector
{
public:
    virtual ~PairVector() = default;

    virtual void PushBack() {} // IDA: 0x4E0C40

};
// 12 methods in IDA
class PlayerClass
{
public:
    virtual ~PlayerClass() = default;

    virtual void sub_430F70() {} // IDA: 0x430F70
    virtual void ExecuteCommand() {} // IDA: 0x4AB9B0
    virtual void CheckHumanPlayer() {} // IDA: 0x4AC2B0
    virtual void SetTargetOrClear() {} // IDA: 0x4C6650
    virtual void AssignPlayerIndex_0() {} // IDA: 0x5C5D30
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

    virtual void QueryInterface() {} // IDA: 0x77B030

};
// 2 methods in IDA
class PlayerSlot
{
public:
    virtual ~PlayerSlot() = default;

    virtual void NameToDialogID() {} // IDA: 0x510FB0
    virtual void IndexToDlgID() {} // IDA: 0x5E98F0

    uint8_t PlayerSlot_field_0x04[4];
};
// 1 methods in IDA
class PlayerType
{
public:
    virtual ~PlayerType() = default;

    virtual void GetName() {} // IDA: 0x4E62B0

};
// 1 methods in IDA
class PtrVector
{
public:
    virtual ~PtrVector() = default;

    virtual void Destroy() {} // IDA: 0x5C6120

};
// 1 methods in IDA
class Queue
{
public:
    virtual ~Queue() = default;

    virtual void GetNext() {} // IDA: 0x407470

};
// 4 methods in IDA
class Random
{
public:
    virtual ~Random() = default;

    virtual void Gaussian() {} // IDA: 0x5980C0
    virtual void State() {} // IDA: 0x65C780
    virtual void Range() {} // IDA: 0x65C7E0
    virtual void sub_661850() {} // IDA: 0x661850

    uint8_t Random_field_0x04[4];
    uint8_t Random_field_0x08[4];
    uint8_t Random_field_0x0C[4];
};
// 3 methods in IDA
class RandomStraw
{
public:
    virtual ~RandomStraw() = default;

    virtual void sub_65C8B0() {} // IDA: 0x65C8B0
    virtual void Release() {} // IDA: 0x661C10
    virtual void QueryInterface() {} // IDA: 0x661C70

    uint8_t RandomStraw_field_0x04[4];
    uint8_t RandomStraw_field_0x08[4];
};
// 1 methods in IDA
class Rect_Point
{
public:
    virtual ~Rect_Point() = default;

    virtual void Set() {} // IDA: 0x4E1A20

};
// 1 methods in IDA
class ReferenceCounted
{
public:
    virtual ~ReferenceCounted() = default;

    virtual void Constructor() {} // IDA: 0x65D660

};
// 6 methods in IDA
class SHA1
{
public:
    virtual ~SHA1() = default;

    virtual void sub_69D8C0() {} // IDA: 0x69D8C0
    virtual void Process() {} // IDA: 0x69D960
    virtual void Compute() {} // IDA: 0x69D9E0
    virtual void Transform() {} // IDA: 0x69DB30
    virtual void Reset() {} // IDA: 0x69DFF0
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

    virtual void ClampValues() {} // IDA: 0x5975E0

};
// 1 methods in IDA
class StringBuffer
{
public:
    virtual ~StringBuffer() = default;

    virtual void Reset() {} // IDA: 0x5F33A0

};
// 1 methods in IDA
class StringList
{
public:
    virtual ~StringList() = default;

    virtual void Find() {} // IDA: 0x721210

};
// 2 methods in IDA
class StringTable
{
public:
    virtual ~StringTable() = default;

    virtual void Lookup() {} // IDA: 0x40DCE0
    virtual void Find() {} // IDA: 0x5CF6B0

    uint8_t StringTable_field_0x04[4];
};
// 7 methods in IDA
class StringVector
{
public:
    virtual ~StringVector() = default;  // 0x49ef10

    virtual void Release() {} // IDA: 0x49EE60
    virtual void ddtor() {} // IDA: 0x49EF10
    virtual void Add() {} // IDA: 0x49EF40
    virtual void Remove() {} // IDA: 0x49EF80
    virtual void QueryInterface() {} // IDA: 0x49EFA0
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

    virtual void Append() {} // IDA: 0x4A3840

};
// 1 methods in IDA
class Timeout
{
public:
    virtual ~Timeout() = default;

    virtual void GetRemaining() {} // IDA: 0x4B4D70

};
// 1 methods in IDA
class TimerPool
{
public:
    virtual ~TimerPool() = default;

    virtual void AllocSlot() {} // IDA: 0x53E3C0

};
// 1 methods in IDA
class Tree
{
public:
    virtual ~Tree() = default;

    virtual void Destructor() {} // IDA: 0x5B4080

};
// 1 methods in IDA
class TypeClass
{
public:
    virtual ~TypeClass() = default;

    virtual void FindByName() {} // IDA: 0x41CAA0

};
// 2 methods in IDA
class Vector2
{
public:
    virtual ~Vector2() = default;

    virtual void NormalizeNonZero() {} // IDA: 0x41C460
    virtual void Subtract() {} // IDA: 0x6DC4C0

    uint8_t Vector2_field_0x04[4];
};
// 3 methods in IDA
class Vector3
{
public:
    virtual ~Vector3() = default;

    virtual void Magnitude() {} // IDA: 0x41C3C0
    virtual void Subtract() {} // IDA: 0x437160
    virtual void AddAssign() {} // IDA: 0x43A100

    uint8_t Vector3_field_0x04[4];
    uint8_t Vector3_field_0x08[4];
};
// 2 methods in IDA
class Vector4
{
public:
    virtual ~Vector4() = default;

    virtual void EraseAt() {} // IDA: 0x5AD790
    virtual void EraseAt_Copy() {} // IDA: 0x63EF70

    uint8_t Vector4_field_0x04[4];
};
// 1 methods in IDA
class Vector8
{
public:
    virtual ~Vector8() = default;

    virtual void EraseAt() {} // IDA: 0x589290

};
// 1 methods in IDA
class VectorClassUInt
{
public:
    virtual ~VectorClassUInt() = default;

    virtual void Constructor() {} // IDA: 0x42DC50

};
// 7 methods in IDA
class VectorCursor
{
public:
    virtual ~VectorCursor() = default;  // 0x76f190

    virtual void Construct() {} // IDA: 0x76F0C0
    virtual void HasNext() {} // IDA: 0x76F0E0
    virtual void initCursor() {} // IDA: 0x76F100
    virtual void updateCursor() {} // IDA: 0x76F120
    virtual void drawCursor() {} // IDA: 0x76F140
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
    virtual ~VectorCursor_uint_DynamicVectorClass_uint() = default;  // 0x4f4000

    virtual void AddRef() {} // IDA: 0x4F3FC0
    virtual void Release() {} // IDA: 0x4F3FF0
    virtual void ddtor() {} // IDA: 0x4F4000

    uint8_t VectorCursor_uint_DynamicVectorClass_uint_field_0x04[4];
    uint8_t VectorCursor_uint_DynamicVectorClass_uint_field_0x08[4];
};

} // namespace gamemd
