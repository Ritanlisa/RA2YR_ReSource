#pragma once

#include <cstdint>
#include <windows.h>
// neutralise Win32 macro that collides with the IDA method name
#ifdef CreateDialog
#undef CreateDialog
#endif
#include "core/enums.hpp"
#ifndef GAMEMD_E4_UNIVERSE  // G57a1: e4 TUs -- math.hpp CellStruct/Point2D/CoordStruct using-aliases clash with the e4 flat structs (C2371)
#include "core/math.hpp"
#endif  // GAMEMD_E4_UNIVERSE (math.hpp)
#include "core/utility_ext.hpp"  // G42.55 closure (Count)
#include "core/guid.hpp"  // G42.55 closure (GUID)
#include "core/utility_ext.hpp"  // G42.55 closure (ReferenceCounted)
#include "core/utility_ext.hpp"  // G42.55 closure (StringTable)

namespace gamemd
{

class DSurface;
} // namespace gamemd (bridge re-own, G42.29h)
#if !defined(GAMEMD_E4_UNIVERSE) && !defined(GAMEMD_DEF_ObjectClass)  // G57a1 + x49: classes.hpp real def wins when present
namespace ra2 { namespace game { class ObjectClass; } }
namespace gamemd {
#ifndef GAMEMD_USING_ObjectClass
#define GAMEMD_USING_ObjectClass
using ::ra2::game::ObjectClass;
#define GAMEMD_DEF_ObjectClass 1  // x49: ObjectClass spoken for in this TU
#endif
#else
namespace gamemd {
#endif  // GAMEMD_E4_UNIVERSE (ObjectClass bridge)
class HouseClass;
class UnitClass;

// ============================================================================
// MoveFeedback — unit movement command feedback (14 methods)
// IDA: Constructor 0x40C160, ProcessCommand 0x7327D0
// COM class: IUnknown-based, ptr_0 at this+0
// ============================================================================
#ifndef GAMEMD_E4_MoveFeedback  // G42.33 b3: e4 flat carrier wins in opt-in TUs
#if !defined(GAMEMD_G2_MoveFeedback_DEF) && !defined(GAMEMD_DEF_MoveFeedback) // G42.57w14 twin-guard (shared; first-include wins)
#define GAMEMD_G2_MoveFeedback_DEF 1
#define GAMEMD_DEF_MoveFeedback 1
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
    unsigned int Update(int a2);  // 0x40B6D0 (G42.33 批 3: 真值对齐 retn 4)
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
    int32_t     q014;               // 0x14
    int32_t     q018;               // 0x18
    int32_t     q01C;               // 0x1C
    int32_t     q020;               // 0x20
    int32_t     q024;               // 0x24
    int32_t     q028;               // 0x28
    int32_t     q02C;               // 0x2C
    unsigned int *q000;  // 0x0 (offset-truth)
    unsigned char q00C;  // 0xC (canon-mt)
    unsigned int q008;  // 0x8 (offset-truth)
    unsigned int m_C;  // 0xC (offset-truth)

    bool IsAllocated;  // X10 supply (csp_canon_members)


    unsigned int q010;  // 0x10 [X55 W3 supply (render vocab)]
};
#endif  // GAMEMD_G2_MoveFeedback_DEF
#endif  // GAMEMD_E4_MoveFeedback

// ============================================================================
// LoadGame — save/load game state management (12 methods)
// IDA: Start 0x67E730, LoadIteratedData 0x4136C0
// ============================================================================
#ifndef GAMEMD_G2_LoadGame_DEF  // g57a5 W2d: twin-definition guard (utility_ext LoadGame)
#define GAMEMD_G2_LoadGame_DEF 1
#if !defined(GAMEMD_E4_LoadGame) && !defined(GAMEMD_DEF_LoadGame) // G57c1: e4 flat carrier wins in e4 TUs (C2011 vs LoadGame_e4.hpp)
#define GAMEMD_DEF_LoadGame 1
class LoadGame
{
public:
    // IDA 0x67E730
     bool Start(const char* filename);  // 0x67E730
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
     void RemoveItem();  // 0x660F10
    // IDA 0x69B5B0
    static void LoadBlock300();  // 0x69B5B0
    // IDA 0x751710
    static void RestoreAudioState();  // 0x751710
    // IDA 0x7533F0
    static void LoadMagicAndAudio();  // 0x7533F0

    static bool     s_IsLoading;        // 0x00
    static uint32_t s_LoadVersion;      // 0x04
    static uint32_t s_BlockIndex;       // 0x08

    int q00C;  // X10 supply (member_lookup)
    int q014;  // X10 supply (member_lookup)
    int q018;  // X10 supply (member_lookup)
    int q01C;  // X10 supply (member_lookup)
    int q020;  // X10 supply (member_lookup)
    unsigned char q025;  // X10 supply (member_lookup)
    int q028;  // X10 supply (member_lookup)
    int q02C;  // X10 supply (member_lookup)
    unsigned int u32_2580;  // X10 supply (member_lookup)
    unsigned int u32_2588;  // X10 supply (member_lookup)
    int u8_D;  // X10 supply (member_lookup)

    int q010;  // X10 supply (member_lookup)


    int __pad_0;  // 0x0 [X55 W3 supply (render vocab)]
};
#endif  // GAMEMD_E4_LoadGame

#endif  // GAMEMD_G2_LoadGame_DEF


// ============================================================================
// Buffer — DirectSound audio buffer wrapper (11 methods)
// IDA: CreateDirectSound 0x40A340
// ============================================================================
#ifndef GAMEMD_E4_Buffer  // G42.33 b3: e4 flat carrier wins in opt-in TUs
#if !defined(GAMEMD_G2_Buffer_DEF) && !defined(GAMEMD_DEF_Buffer) // g57a5 W2d: twin-definition guard (utility_ext Buffer)
#define GAMEMD_G2_Buffer_DEF 1
#define GAMEMD_DEF_Buffer 1
class Buffer
{
public:
    Buffer() = default;

    // IDA 0x40A340
    int32_t CreateDirectSound();  // 0x40A340
    // IDA 0x40A6D0
    // wrapper: delegates to Buffer::UpdateVolumeSettings at 0x40A6D0
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
    void Constructor_VectorClass_ObjectClass___();  // 0x488030
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


    unsigned int q044;  // 0x44 [X55 W3 supply (render vocab)]
    unsigned int q040;  // 0x40 [X55 W3 supply (render vocab)]
    int q030;  // 0x30 [X55 W3 supply (render vocab)]
    unsigned int u32_73C;  // 0x73C [X55 W3 supply (render vocab)]
};
#endif  // GAMEMD_G2_Buffer_DEF

#endif  // GAMEMD_E4_Buffer

// ============================================================================
// Delegate — callback dispatch system (11 methods)
// IDA: Constructor 0x52AE20, Dispatch 0x631D10
// ============================================================================
#if !defined(GAMEMD_E4_Delegate) && !defined(GAMEMD_DEF_Delegate) // G42.33 b3: e4 flat carrier wins in opt-in TUs
#define GAMEMD_DEF_Delegate 1
class Delegate
{
public:
    // IDA 0x52AE20
    Delegate();
    // unmatched: no callgraph reference and no git history record
    ~Delegate();

    // IDA 0x42DDB0
    void ProcessBitmapStream();  // 0x42DDB0
    int Invoke(int a2, int a3);  // 0x6C98E0 G42.35 C8 体词汇
    // IDA 0x42DF40
    // wrapper: delegates to Delegate::ProcessBitmapAndDispatch at 0x42DF40
    void sub_42DF40();
    // IDA 0x4A2780
    // wrapper: delegates to Delegate::StreamToBuffer at 0x4A2780
    void sub_4A2780();
    // IDA 0x52AE70
    void ClearVectorAndStraw();  // 0x52AE70
    // IDA 0x52AEA0
    void DestroyStraw();  // 0x52AEA0
    // IDA 0x52AEE0
    void DestroyPipe();  // 0x52AEE0
    // IDA 0x631D10
    int Dispatch();  // 0x631D10
    // IDA 0x6C95E0
    int32_t GetField();  // 0x6C95E0
    // IDA 0x6C9890
    unsigned int * Set(int32_t value);  // 0x6C9890
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
#endif  // GAMEMD_E4_Delegate

// ============================================================================
// Struct — memory initialization & zero-fill utilities (10 methods)
// IDA: ZeroInit32 0x48B2A0, Zero3 0x4B9BD0
// ============================================================================
#if !defined(GAMEMD_E4_Struct) && !defined(GAMEMD_DEF_Struct) // G57c1: e4 flat carrier wins in e4 TUs (C2011 vs Struct_e4.hpp)
#define GAMEMD_DEF_Struct 1
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
    // design: static function, no direct binary match in IDA
    static void MemCopy(void* dst, const void* src, int32_t count);
    // IDA 0x48B2A0 area
    static void FillZero(void* ptr, int32_t count);
    // IDA 0x48B2A0 area
    // design: static function, no direct binary match in IDA
    static void InitBlock(void* ptr, int32_t size);
    // IDA 0x48B2A0 area
    // design: static function, no direct binary match in IDA
    static void ClearStruct(void* ptr, int32_t size);
    // IDA 0x48B2A0 area
    // design: static function, no direct binary match in IDA
    static void InitWithValue(void* ptr, int32_t count, int32_t value);

    int32_t     Struct_field_00;       // 0x00
    unsigned int u32_10;  // 0x10
    unsigned int u32_14;  // 0x14
    unsigned int u32_C;  // 0xC
public:  // --- gap2 auto-generated stub declarations (BEGIN) ---
    int Copy6Bytes(int a1);  // 0x53EDE0
    void* WideStringCopy(int a1);  // 0x6247D0
    void* Zero25();  // 0x6D1810
    // --- gap2 auto-generated stub declarations (END) ---
    public:  // funcs-move
    // === FUNCS-MOVE (BEGIN) ===
    void* InitTriple256(int a1);  // 0x5f75e0
    // === FUNCS-MOVE (END) ===

    unsigned int u32_18;  // X10 supply (member_lookup)
    unsigned int u32_4;  // X10 supply (member_lookup)
    unsigned int u32_8;  // X10 supply (member_lookup)
};
#endif  // GAMEMD_E4_Struct


// ============================================================================
// Count — reference counting utilities (6 methods)
// IDA: DecrementRefCountsAudio
// ============================================================================
#if !defined(GAMEMD_E4_Count) && !defined(GAMEMD_DEF_Count) // G42.33 b3: e4 flat carrier wins in opt-in TUs
#define GAMEMD_DEF_Count 1
class Count
{
public:
    // IDA 0x40A7A0 area
    static int32_t DecrementRefCountsAudio();  // 0x408E70
    // IDA 0x48B2A0 area
    static void SetupAllCountriesLobby();  // 0x46F6D0
    // IDA 0x48B2A0 area
     int GetCountQueue();  // 0x5F1EA0
    // IDA 0x48B2A0 area
    // design: static function, no direct binary match in IDA
    static void IncrementRefCount();
    // IDA 0x48B2A0 area
    static void DecrementRefCount();
    // IDA 0x48B2A0 area
    // design: static function, no direct binary match in IDA
    static int32_t GetRefCount();

    int32_t     m_RefCount;     // 0x00
};
#endif  // GAMEMD_E4_Count

// ============================================================================
// Rect — rectangle operations (6 methods)
// IDA: Set, Construct, Union
// ============================================================================
#if !defined(GAMEMD_E4_Rect) && !defined(GAMEMD_DEF_Rect) // G57c1: e4 flat carrier wins in e4 TUs (C2011 vs Rect_e4.hpp)
#define GAMEMD_DEF_Rect 1
class Rect
{
public:
    Rect() = default;
    Rect(int32_t x, int32_t y, int32_t w, int32_t h);

    // IDA 0x4D9C00 area
    unsigned int * Set(int32_t x, int32_t y, int32_t w, int32_t h);  // 0x42E410
    // IDA 0x4D9C00 area
    unsigned int * Construct(int32_t x, int32_t y, int32_t w, int32_t h);  // 0x45A130
    // IDA 0x4D9C00 area
    void Union(const Rect& other);  // 0x487F40
    // IDA 0x4D9C00 area
    bool Intersects(const Rect& other) const;
    // IDA 0x4D9C00 area
    // design: no binary equivalent found in IDA
    bool Contains(int32_t x, int32_t y) const;
    // IDA 0x4D9C00 area
    void Clip(const Rect& clip);

    int32_t     X;              // 0x00
    int32_t     Y;              // 0x04
    int32_t     Width;          // 0x08
    int32_t     Height;         // 0x0C
public:  // --- gap2 auto-generated stub declarations (BEGIN) ---
    int SetRedraw(char a1);  // 0x48BAA0 (X144c: param char per raw_decomp fn_48.c `char a2`)
    void* Set4(int a1, int a2, int a3, int a4);  // 0x54A120
    // --- gap2 auto-generated stub declarations (END) ---
    public:  // funcs-move
    // === FUNCS-MOVE (BEGIN) ===
    int Inflate();  // 0x72a9e0
    // === FUNCS-MOVE (END) ===
    unsigned int u32_14;  // 0x14 (X144c: dword per raw_decomp fn_48.c `*((_DWORD*)this+5)`; was pointer-typed supply)
    unsigned int u32_18;  // 0x18 (X144c: dword per raw fn_48.c +6)
    unsigned int u32_1C;  // 0x1C (X144c: dword per raw fn_48.c +7)
};
#endif  // GAMEMD_E4_Rect


// ============================================================================
// COM — COM helper utilities (3 methods)
// IDA: GetClassID, AddRef, ReleaseRef
// ============================================================================
#if !defined(GAMEMD_E4_COM) && !defined(GAMEMD_DEF_COM) // G57c1: e4 flat carrier wins in e4 TUs (C2011 vs COM_e4.hpp)
#define GAMEMD_DEF_COM 1
class COM
{
public:
    // IDA 0x40BCB0 area
    static HRESULT GetClassID(const GUID& riid, GUID* pClassID);  // 0x43A500
    // IDA 0x40B960 area
     int32_t AddRef(void* obj);  // 0x55A950
    // IDA 0x40BE50 area
    static int32_t ReleaseRef(void* obj);  // 0x55A970

    int32_t     COM_field_00;       // 0x00
};
#endif  // GAMEMD_E4_COM


// ============================================================================
// RefCount — shared reference counting (2 methods)
// IDA: Decrement, Increment
// ============================================================================
// CSP: RefCount matched via T1
#ifndef GAMEMD_E4_RefCount  // G57c1: e4 flat carrier wins in e4 TUs (C2011 vs RefCount_e4.hpp)
#if !defined(GAMEMD_G2_RefCount_DEF) && !defined(GAMEMD_DEF_RefCount) // G42.57w14 twin-guard (shared; first-include wins)
#define GAMEMD_G2_RefCount_DEF 1
#define GAMEMD_DEF_RefCount 1
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
#endif  // GAMEMD_G2_RefCount_DEF
#endif  // GAMEMD_E4_RefCount


// ============================================================================
// Helper — utility helper functions (1 method)
// IDA: ProcessData
// ============================================================================
#if !defined(GAMEMD_E4_Helper) && !defined(GAMEMD_DEF_Helper) // G57c1: e4 flat carrier wins in e4 TUs (C2011 vs Helper_e4.hpp)
#define GAMEMD_DEF_Helper 1
class Helper
{
public:
    // IDA 0x4B9BD0 area
    static void ProcessData(void* data, int32_t size);  // 0x4371D0

    int32_t     Helper_field_00;       // 0x00
};
#endif  // GAMEMD_E4_Helper


// ============================================================================
// Compare — comparison utilities (1 method)
// IDA: Field96
// ============================================================================
#if !defined(GAMEMD_E4_Compare) && !defined(GAMEMD_DEF_Compare) // G57a1: e4 flat carrier wins in e4 TUs
#define GAMEMD_DEF_Compare 1
class Compare
{
public:
    // IDA 0x4D9C00 area
    static bool Field96(int32_t a, int32_t b);  // 0x46DC90

    int32_t     Compare_field_00;       // 0x00
};


#endif  // GAMEMD_E4_Compare
// ============================================================================
// Value — value range utilities (1 method)
// IDA: InRange
// ============================================================================
#if !defined(GAMEMD_E4_Value) && !defined(GAMEMD_DEF_Value) // G57c1: e4 flat carrier wins in e4 TUs (C2011 vs Value_e4.hpp)
#define GAMEMD_DEF_Value 1
class Value
{
public:
    // IDA 0x4D9C00 area
    static bool InRange(int32_t value, int32_t min, int32_t max);  // 0x486730

    int32_t     Value_field_00;       // 0x00
};
#endif  // GAMEMD_E4_Value


// ============================================================================
// Return — HRESULT return wrapper (1 method)
// IDA: HRESULT_Fail
// ============================================================================
#if !defined(GAMEMD_E4_Return) && !defined(GAMEMD_DEF_Return) // G57c1: e4 flat carrier wins in e4 TUs (C2011 vs Return_e4.hpp)
#define GAMEMD_DEF_Return 1
class Return
{
public:
    // IDA 0x40BCB0 area
    static HRESULT HRESULT_Fail();  // 0x48ACE0

    int32_t     Return_field_00;       // 0x00
};
#endif  // GAMEMD_E4_Return


// ============================================================================
// EventQueue — per-frame event pump (4 methods)
// IDA: Process 0x54F000
// ============================================================================
#if !defined(GAMEMD_E4_EventQueue) && !defined(GAMEMD_DEF_EventQueue) // G57c1: e4 flat carrier wins in e4 TUs (C2011 vs EventQueue_e4.hpp)
#define GAMEMD_DEF_EventQueue 1
class EventQueue
{
public:
    // IDA 0x54F000
     short Process(void* bink_player);  // 0x54F000
    static short Process(EventQueue *aP0);  // 0x54F000 G42.35 static-form sync (truth 0-arg thiscall; ui/supplied site 0x4E167C)
    // IDA 0x54F000 area
     int Read();  // 0x54F050
    static unsigned short Read(void *aP0);  // 0x54F050 G42.35 static-form sync (truth short 0-arg thiscall; ui/supplied site 0x4E1692)
    // IDA 0x54F000 area
     bool Check();  // 0x54F650
    // IDA 0x54F000 area
    // design: static function, no direct binary match in IDA
     int Clear();

    static int32_t  s_EventCount;   // 0x00
    static void*    s_Queue;        // 0x04
    unsigned int q314;  // 0x314
    unsigned int q318;  // 0x318
public:  // --- gap2 auto-generated stub declarations (BEGIN) ---
    bool CheckPosition();  // 0x54F6B0
    static int CheckPosition(EventQueue *aP0);  // 0x54F6B0 G42.35 static-form sync (truth 0-arg thiscall; ui/supplied sites 0x54F98A)
    // --- gap2 auto-generated stub declarations (END) ---
};
#endif  // GAMEMD_E4_EventQueue


// ============================================================================
// Event_Dispatch — single event dispatcher (1 method)
// IDA: Return0
// ============================================================================
#if !defined(GAMEMD_E4_Event_Dispatch) && !defined(GAMEMD_DEF_Event_Dispatch) // G57c1: e4 flat carrier wins in e4 TUs (C2011 vs Event_Dispatch_e4.hpp)
#define GAMEMD_DEF_Event_Dispatch 1
class Event_Dispatch
{
public:
    // IDA 0x54F000 area
    static int32_t Return0();  // 0x48D1D0

    int32_t     Event_Dispatch_field_00;       // 0x00
};
#endif  // GAMEMD_E4_Event_Dispatch


// ============================================================================
// Selection — selection state manager (3 methods)
// IDA: SetCurrent, GetFlag, ClearGlobals
// ============================================================================
#if !defined(GAMEMD_E4_Selection) && !defined(GAMEMD_DEF_Selection) // G57c1: e4 flat carrier wins in e4 TUs (C2011 vs Selection_e4.hpp)
#define GAMEMD_DEF_Selection 1
class Selection
{

public:
    // IDA 0x724BD0 area
    int SetCurrent(ObjectClass* obj);  // 0x731D00
    // IDA 0x724BD0 area
    bool GetFlag() const;  // 0x732D00
    // IDA 0x724BD0 area
    void ClearGlobals();  // 0x734270

    ObjectClass* m_Current;     // 0x00
    bool        m_Flag;         // 0x04
    uint8_t     _pad_05[3];     // 0x05
};
#endif  // GAMEMD_E4_Selection


// ============================================================================
// Player — player state management (4 methods)
// IDA: FindByName, BuildListString, IsObserver
// ============================================================================
#if !defined(GAMEMD_E4_Player) && !defined(GAMEMD_DEF_Player) // G57c1: e4 flat carrier wins in e4 TUs (C2011 vs Player_e4.hpp)
#define GAMEMD_DEF_Player 1
class Player
{
public:
    // IDA 0x48B2A0 area
     HouseClass* FindByName(const char* name);  // 0x5E8BF0
    // IDA 0x48B2A0 area
     void BuildListString();  // 0x5E8DC0
    // IDA 0x48B2A0 area
     int IsObserver();  // 0x5E9440
    // IDA 0x48B2A0 area
    // design: static function, no direct binary match in IDA
    static int32_t GetCount();

    static int32_t  s_PlayerCount; // 0x00
    void* q004;  // 0x4
public:  // --- gap2 auto-generated stub declarations (BEGIN) ---
    void RandomAssign();  // 0x69B8C0
    // --- gap2 auto-generated stub declarations (END) ---
};
#endif  // GAMEMD_E4_Player


// ============================================================================
// FrameTimer — frame-based timer (2 methods)
// IDA: HasRemaining, Init25
// ============================================================================
#if !defined(GAMEMD_G2_FrameTimer_DEF) && !defined(GAMEMD_DEF_FrameTimer) // g57a5 W2d: twin-definition guard (utility_ext FrameTimer)
#define GAMEMD_G2_FrameTimer_DEF 1
#define GAMEMD_DEF_FrameTimer 1
class FrameTimer
{
public:
    // IDA 0x54F720 area
    bool HasRemaining() const;  // 0x41BF40
    // IDA 0x54F720 area
    void Init25();  // 0x70D150

    int32_t     m_StartFrame;   // 0x00
    int32_t     m_Duration;     // 0x04

    unsigned int q18C;   // g57w11 r4 G6 词表 (raw 0x41bf40 this=TechnoClass ml:396 q18C; TU 载体 FrameTimer)
    unsigned int q190;   // g57w11 r4 G6 词表 (raw 0x41bf46 ironCurtainTimer[1]@0x190)
};
#endif  // GAMEMD_G2_FrameTimer_DEF


// ============================================================================
// Time — time utilities (2 methods)
// IDA: GetElapsedMS, FormatDate
// ============================================================================
#if !defined(GAMEMD_E4_Time) && !defined(GAMEMD_DEF_Time) // G57c1: e4 flat carrier wins in e4 TUs (C2011 vs Time_e4.hpp)
#define GAMEMD_DEF_Time 1
class Time
{
public:
    // IDA 0x54F720 area
    static int32_t GetElapsedMS();  // 0x4E24A0
    // IDA 0x54F720 area
    static void FormatDate(char* buffer, int32_t size);  // 0x777AC0

    int32_t     Time_field_00;       // 0x00
};
#endif  // GAMEMD_E4_Time


// ============================================================================
// Float — floating point utilities (2 methods)
// IDA: Accumulate, SubtractClamped
// ============================================================================
#if !defined(GAMEMD_E4_Float) && !defined(GAMEMD_DEF_Float) // G57c1: e4 flat carrier wins in e4 TUs (C2011 vs Float_e4.hpp)
#define GAMEMD_DEF_Float 1
class Float
{
public:
    // IDA 0x4D9C00 area
    static float Accumulate(float* dest, float value);  // 0x6C9690
    // IDA 0x4D9C00 area
     float SubtractClamped(float a, float b, float min);  // 0x6C96B0

    int32_t     Float_field_00;       // 0x00
};
#endif  // GAMEMD_E4_Float


// ============================================================================
// Config — configuration utilities (1 method)
// IDA: SaveObserverMode
// ============================================================================
#if !defined(GAMEMD_E4_Config) && !defined(GAMEMD_DEF_Config) // G57c1: e4 flat carrier wins in e4 TUs (C2011 vs Config_e4.hpp)
#define GAMEMD_DEF_Config 1
class Config
{
public:
    // IDA 0x48B2A0 area
    static void SaveObserverMode(bool enabled);  // 0x5EE1B0

    int32_t     Config_field_00;       // 0x00
};
#endif  // GAMEMD_E4_Config


// ============================================================================
// Settings — settings utilities (1 method)
// IDA: CheckString
// ============================================================================
#if !defined(GAMEMD_E4_Settings) && !defined(GAMEMD_DEF_Settings) // G42.33 b3: e4 flat carrier wins in opt-in TUs
#define GAMEMD_DEF_Settings 1
class Settings
{
public:
    // IDA 0x48B2A0 area
    static bool CheckString(const char* str = 0);  // 0x5E8760 (G42.33 b3: 默认参 -- ui 静态 0 参调用形)

    int32_t     Settings_field_00;       // 0x00
};
#endif  // GAMEMD_E4_Settings

// ============================================================================
// Init — initialization stubs (1 method)
// IDA: StubPlaceholder 0x60D430
// ============================================================================
// x49 one-definition convergence (utility_ext tree def)
#ifndef GAMEMD_DEF_Init
#define GAMEMD_DEF_Init 1
class Init
{
public:
    // IDA 0x60D430
    static void StubPlaceholder();  // 0x60D430

    int32_t     Init_field_00;       // 0x00
};
#endif

// ============================================================================
// Process — process utilities (1 method)
// IDA: WaitForExit
// ============================================================================
#if !defined(GAMEMD_E4_Process) && !defined(GAMEMD_DEF_Process) // G57c1: e4 flat carrier wins in e4 TUs (C2011 vs Process_e4.hpp)
#define GAMEMD_DEF_Process 1
class Process
{
public:
    // IDA 0x54F000 area
     bool WaitForExit(DWORD dwMilliseconds, char a3);  // 0x664610

    int32_t     Process_field_00;       // 0x00
};
#endif  // GAMEMD_E4_Process


// ============================================================================
// Main — main entry point helpers (1 method)
// IDA: CreateDialog
// ============================================================================
#ifndef GAMEMD_G2_Main_DEF  // g57a5 W2d: twin-definition guard (utility_ext Main)
#define GAMEMD_G2_Main_DEF 1
#if !defined(GAMEMD_E4_Main) && !defined(GAMEMD_DEF_Main) // G57c1: e4 flat carrier wins in e4 TUs (C2011 vs Main_e4.hpp)
#define GAMEMD_DEF_Main 1
class Main
{
public:
    static void* CreateDialog(int32_t dlg_id);  // 0x4E1D00

    int32_t     Main_field_00;       // 0x00
};
#endif  // GAMEMD_E4_Main

#endif  // GAMEMD_G2_Main_DEF


// ============================================================================
// Stub — stub functions (1 method)
// IDA: InfiniteLoop
// ============================================================================
// x49 one-definition convergence (utility_ext tree def)
#ifndef GAMEMD_DEF_Stub
#define GAMEMD_DEF_Stub 1
class Stub
{
public:
    static void InfiniteLoop();  // 0x4F4D80

    int32_t     Stub_field_00;       // 0x00
};
#endif

// ============================================================================
// Type — type checking utility (1 method)
// IDA: CheckAmbiguity
// ============================================================================
#if !defined(GAMEMD_E4_Type) && !defined(GAMEMD_DEF_Type) // G57c1: e4 flat carrier wins in e4 TUs (C2011 vs Type_e4.hpp)
#define GAMEMD_DEF_Type 1
class Type
{
public:
    // IDA 0x48B2A0 area
    static bool CheckAmbiguity();  // 0x578540

    int32_t     Type_field_00;       // 0x00
};
#endif  // GAMEMD_E4_Type


// ============================================================================
// unknown — misc utility class (8 methods)
// IDA: ddtor, Write, Seek
// ============================================================================
#ifndef GAMEMD_E4_unknown  // G57c1: e4 flat carrier wins in e4 TUs (C2011 vs unknown_e4.hpp)
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
    // design: no binary equivalent found in IDA
    void Flush();
    // IDA 0x48B2A0 area
    // design: no binary equivalent found in IDA
    int32_t GetPosition();
    // IDA 0x48B2A0 area
    // design: no binary equivalent found in IDA
    int32_t GetSize();
    // IDA 0x48B2A0 area
    // design: no binary equivalent found in IDA
    void Close();

    void*       m_Data;         // 0x00
    int32_t     m_Position;     // 0x04
    int32_t     m_Size;         // 0x08
    int32_t     unknown_field_0C;       // 0x0C
    unsigned char m_1[4];  // 0x1
    unsigned int m_C;  // 0xC
    int m_8;  // 0x8
    unsigned int *__pad_0;  // G42.35 C8 体词汇 (0x58a426 ptr_0 槽)
public:  // --- gap2 auto-generated stub declarations (BEGIN) ---
    int AddRef(int a1);  // 0x589300
    int Release(int a1, void* a2);  // 0x589550
    void* Init();  // 0x589680
    unsigned int * QueryInterface(char a2);  // 0x58A420 G42.35 C7 体签名
    // --- gap2 auto-generated stub declarations (END) ---

    bool IsAllocated;  // X10 supply (csp_canon_members)
    void* q010;  // X10 supply (member_lookup)
};
#endif  // GAMEMD_E4_unknown


// ============================================================================
// WinMain — game entry point utilities (3 methods)
// IDA: CleanupResource, Constructor_VectorClass_Wstring_, ShutdownCleanup
// ============================================================================
#if !defined(GAMEMD_E4_WinMain) && !defined(GAMEMD_DEF_WinMain) // G57c1: e4 flat carrier wins in e4 TUs (C2011 vs WinMain_e4.hpp)
#define GAMEMD_DEF_WinMain 1
class WinMain
{
public:
    static void CleanupResource();  // 0x49F8B0
    static void Constructor_VectorClass_Wstring();  // 0x69A1F0
    static void ShutdownCleanup();  // 0x734D30

    static HWND    s_hWnd;        // 0x00
    static HINSTANCE s_hInstance; // 0x04
};
#endif  // GAMEMD_E4_WinMain



// === Batch-generated MISSING class stubs ===

// 1 methods in IDA
#if !defined(GAMEMD_E4_AllocCallback) && !defined(GAMEMD_DEF_AllocCallback) // G57c1: e4 flat carrier wins in e4 TUs (C2011 vs AllocCallback_e4.hpp)
#define GAMEMD_DEF_AllocCallback 1
class AllocCallback
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~AllocCallback() = default;

    virtual int Dispatch(int a1, int a2, unsigned int Block, size_t Size); // 0x7BE5D0

};
#endif  // GAMEMD_E4_AllocCallback

// 22 methods in IDA
// CSP: COMClass matched via T1
#if !defined(GAMEMD_E4_COMClass) && !defined(GAMEMD_DEF_COMClass) // G42.33 b3: e4 flat carrier wins in opt-in TUs
#define GAMEMD_DEF_COMClass 1
class COMClass
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~COMClass() = default;

    virtual int RegisterAll(); // 0x490490 (g57w10 r4: raw fn_49 原型 int __thiscall RegisterAll; 前声明 stale)
    virtual int ReleaseRef(); // 0x65D670 (g57w10 r4: raw 原型 int; canon this=ReferenceCounted, TU 载体 COMClass)
    virtual unsigned int* initInterface(char a2); // 0x65D6A0 (g57w10 r4: raw 原型 unsigned int*__(char); canon this=ReferenceCounted)
    virtual int queryProperty(); // 0x765680 (g57w10 r4: raw 原型 int; canon this=WDT Conflict vector)
    virtual unsigned int setProperty(int a2); // 0x7656B0 (g57w10 r4: raw 原型 unsigned(int); canon this=WDT Conflict vector)
    // +17 more virtual methods

    unsigned int COMClass_field_0x04;  // g57w11 r4 G1: raw fn_49 标量槽 (=0 赋值+函数指针派发), 数组形态 C3863
    unsigned int COMClass_field_0x08;  // g57w11 r4 G1: raw fn_49 标量槽 (=0 赋值+函数指针派发), 数组形态 C3863
    unsigned int COMClass_field_0x0C;  // g57w11 r4 G1: raw fn_49 标量槽 (=0 赋值+函数指针派发), 数组形态 C3863
    unsigned int COMClass_field_0x10;  // g57w11 r4 G1: raw fn_49 标量槽 (=0 赋值+函数指针派发), 数组形态 C3863
    unsigned int COMClass_field_0x14;  // g57w11 r4 G1: raw fn_49 标量槽 (=0 赋值+函数指针派发), 数组形态 C3863
    unsigned int COMClass_field_0x18;  // g57w11 r4 G1: raw fn_49 标量槽 (=0 赋值+函数指针派发), 数组形态 C3863
    unsigned int COMClass_field_0x1C;  // g57w11 r4 G1: raw fn_49 标量槽 (=0 赋值+函数指针派发), 数组形态 C3863
    unsigned int COMClass_field_0x20;  // g57w11 r4 G1: raw fn_49 标量槽 (=0 赋值+函数指针派发), 数组形态 C3863
    unsigned int COMClass_field_0x24;  // g57w11 r4 G1: raw fn_49 标量槽 (=0 赋值+函数指针派发), 数组形态 C3863
    unsigned int COMClass_field_0x28;  // g57w11 r4 G1: raw fn_49 标量槽 (=0 赋值+函数指针派发), 数组形态 C3863
    unsigned int COMClass_field_0x2C;  // g57w11 r4 G1: raw fn_49 标量槽 (=0 赋值+函数指针派发), 数组形态 C3863
    unsigned int COMClass_field_0x30;  // g57w11 r4 G1: raw fn_49 标量槽 (=0 赋值+函数指针派发), 数组形态 C3863
    unsigned int COMClass_field_0x34;  // g57w11 r4 G1: raw fn_49 标量槽 (=0 赋值+函数指针派发), 数组形态 C3863
    unsigned int COMClass_field_0x38;  // g57w11 r4 G1: raw fn_49 标量槽 (=0 赋值+函数指针派发), 数组形态 C3863
    unsigned int COMClass_field_0x3C;  // g57w11 r4 G1: raw fn_49 标量槽 (=0 赋值+函数指针派发), 数组形态 C3863
    unsigned int COMClass_field_0x40;  // g57w11 r4 G1: raw fn_49 标量槽 (=0 赋值+函数指针派发), 数组形态 C3863
    unsigned int COMClass_field_0x44;  // g57w11 r4 G1: raw fn_49 标量槽 (=0 赋值+函数指针派发), 数组形态 C3863
    unsigned int COMClass_field_0x48;  // g57w11 r4 G1: raw fn_49 标量槽 (=0 赋值+函数指针派发), 数组形态 C3863
    unsigned int COMClass_field_0x4C;  // g57w11 r4 G1: raw fn_49 标量槽 (=0 赋值+函数指针派发), 数组形态 C3863
    unsigned int COMClass_field_0x50;  // g57w11 r4 G1: raw fn_49 标量槽 (=0 赋值+函数指针派发), 数组形态 C3863
    unsigned char __pad_0[24];  // 0x0 g57w11 r4 G2: 数组形态 (raw 0x76788e &this->__pad_0[20] 词汇)
public:  // --- gap2 auto-generated stub declarations (BEGIN) ---
    void* invokeMethod(int a1);  // 0x765790
    void* getTypeInfo(int a1);  // 0x7657C0
    int registerObject(int a1, void* a2);  // 0x7659F0
    int unregisterObject(int a1);  // 0x765B10
    char* createInstance(char a2);  // 0x765BB0 (g57w10 r4: raw 原型 char*__(char))
    unsigned int* getInterface(char a2);  // 0x765C20 (g57w10 r4: raw 原型 unsigned int*__(char); canon this=WDT vector)
    unsigned int * releaseInterface();  // 0x765C70
    void* connectPoint(int a1);  // 0x7669C0
    int enumConnections(int a1);  // 0x766A80
    void* adviseConnection(void* a1, int a2, void* a3);  // 0x766AA0
    void* unadviseConnection(int a1);  // 0x766B90
    int unlockServer(int a1);  // 0x7674E0
    void* coInitialize(void* a1, int a2, void* a3);  // 0x767500
    void** coUninitialize(char a2);  // 0x767880 (g57w10 r4: raw 原型 void**__(char); canon this=FlagGameOption_WDT)
    unsigned int * marshalInterface(char a1);  // 0x767C50
    // --- gap2 auto-generated stub declarations (END) ---

    unsigned int u32_54;  // G42.39 data supply
    unsigned int u32_5C;  // G42.39 data supply
    unsigned int u32_64;  // G42.39 data supply
    unsigned int u32_68;  // G42.39 data supply
    unsigned int u32_6C;  // G42.39 data supply
    unsigned int u32_74;  // G42.39 data supply
    unsigned int u32_78;  // G42.39 data supply
    unsigned int u32_7C;  // G42.39 data supply
    unsigned int u32_8C;  // G42.39 data supply
    unsigned int u32_84;  // G42.39 data supply
    unsigned int u32_88;  // G42.39 data supply
    unsigned int u32_94;  // G42.39 data supply
    unsigned int u32_98;  // G42.39 data supply
    unsigned int u32_9C;  // G42.39 data supply
    unsigned int u32_A4;  // G42.39 data supply
    unsigned int u32_A8;  // G42.39 data supply
    unsigned int u32_AC;  // G42.39 data supply
    unsigned int u32_B4;  // G42.39 data supply
    unsigned int u32_B8;  // G42.39 data supply
    unsigned int u32_BC;  // G42.39 data supply
    unsigned int u32_C4;  // G42.39 data supply
    unsigned int u32_C8;  // G42.39 data supply
    unsigned int u32_CC;  // G42.39 data supply
    unsigned int u32_D4;  // G42.39 data supply
    unsigned int u32_D8;  // G42.39 data supply
    unsigned int u32_DC;  // G42.39 data supply
    unsigned int u32_E4;  // G42.39 data supply
    unsigned int u32_E8;  // G42.39 data supply
    unsigned int u32_EC;  // G42.39 data supply
    unsigned int u32_F4;  // G42.39 data supply
    unsigned int u32_F8;  // G42.39 data supply
    // g57w10 r4 item3: RegisterAll@0x490490 级联释放槽词表补 (raw fn_49 真名: this->Count/q018../u32_1xx;
    // 0x54 起连续接口指针槽, til 命名混杂 — 词表供给同 G42.39 data supply 形态)
    unsigned int Count;   // raw 0x4905d6 this->Count (级联槽)
    unsigned int q018;    // raw 0x4905f6
    unsigned int q01C;    // raw 0x490636
    unsigned int q020;    // raw 0x490656
    unsigned int q024;    // raw 0x490646
    unsigned int q028;    // raw 0x490666
    unsigned int q02C;    // raw 0x490676
    unsigned int q030;    // raw 0x490686
    unsigned int q034;    // raw 0x490696
    unsigned int q038;    // raw 0x4906a6
    unsigned int q03C;    // raw 0x4906b6
    unsigned int q040;    // raw 0x4906c6
    unsigned int q044;    // raw 0x4906d6
    unsigned int q048;    // raw 0x4906e6
    unsigned int q04C;    // raw 0x4906f6
    unsigned int q050;    // raw 0x490706
    unsigned int u32_FC;   // g57w10 r4 级联槽词表
    unsigned int u32_104;
    unsigned int u32_108;
    unsigned int u32_10C;
    unsigned int u32_114;
    unsigned int u32_118;
    unsigned int u32_11C;
    unsigned int u32_124;
    unsigned int u32_128;
    unsigned int u32_12C;
    unsigned int u32_134;
    unsigned int u32_138;
    unsigned int u32_13C;
    unsigned int u32_144;
    unsigned int u32_148;
    unsigned int u32_14C;
    unsigned int u32_150;
    unsigned int u32_154;
    unsigned int u32_158;
    unsigned int u32_15C;
    unsigned int u32_160;  // g57w10 r4 级联槽词表续
    unsigned int u32_164;
    unsigned int u32_168;
    unsigned int u32_4;    // raw 0x65d673 ReleaseRef this+4 引用计数
    // g57w10 r4 item3: e4 平板体词表转运 (COMClass_e4.hpp "flat-carrier vocab" 同型;
    // 本 TU 语料 0x765686/0x7656a5/0x7656xx 使用)
    unsigned int* m_1;     // e4 同型 (raw &this->m_1[3] 词汇)
    unsigned int m_C;
    unsigned int m_10;
    unsigned int m_8;
    unsigned int field_18;

    unsigned char __pad_000;  // X10 supply (csp_canon_members)
    int q004;  // X10 supply (member_lookup)
    int q008;  // X10 supply (member_lookup)
    int q00C;  // X10 supply (member_lookup)
    unsigned int q00D;  // X10 supply (member_lookup)
    int q010;  // X10 supply (member_lookup)
    unsigned char q014[4];  /* String */  // X10 supply (member_lookup)

    unsigned char __pad_01A;  // X10 supply (csp_canon_members)
    unsigned int u32_100;  // X10 supply (member_lookup)
    unsigned int u32_110;  // X10 supply (member_lookup)
    unsigned int u32_120;  // X10 supply (member_lookup)
    unsigned int u32_130;  // X10 supply (member_lookup)
    unsigned int u32_140;  // X10 supply (member_lookup)
    unsigned int u32_60;  // X10 supply (member_lookup)
    unsigned int u32_70;  // X10 supply (member_lookup)
    unsigned int u32_80;  // X10 supply (member_lookup)
    unsigned int u32_90;  // X10 supply (member_lookup)
    unsigned int u32_A0;  // X10 supply (member_lookup)
    unsigned int u32_B0;  // X10 supply (member_lookup)
    unsigned int u32_C0;  // X10 supply (member_lookup)
    unsigned int u32_D0;  // X10 supply (member_lookup)
    unsigned int u32_E0;  // X10 supply (member_lookup)
    unsigned int u32_F0;  // X10 supply (member_lookup)
};
#endif  // GAMEMD_E4_COMClass
// 2 methods in IDA
// CSP: COMClassFactory matched via T1
// x49 one-definition convergence (utility_ext tree def)
#ifndef GAMEMD_DEF_COMClassFactory
#define GAMEMD_DEF_COMClassFactory 1
class COMClassFactory
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~COMClassFactory() = default;

    virtual int Register(IID *rclsid, LPUNKNOWN pUnkOuter, DWORD dwClsContext); // 0x6BEDB0 G42.35 C9 体签名
    virtual unsigned int * CreateInstance(); // 0x6C0AC0 G42.35 C9 体签名

    uint8_t COMClassFactory_field_0x04[4];
    unsigned int *__pad_0;  // G42.35 C7 体词汇 (0x6bedb4)

    unsigned char __pad_000;  // X10 supply (csp_canon_members)
    int q004;  // X10 supply (member_lookup)
};
#endif
// 1 methods in IDA
// CSP: COMClassFactory_10 matched via T1
// x49 one-definition convergence (utility_ext tree def)
#ifndef GAMEMD_DEF_COMClassFactory_10
#define GAMEMD_DEF_COMClassFactory_10 1
class COMClassFactory_10
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~COMClassFactory_10() = default;

    virtual unsigned int * Construct(); // 0x6BFBC0
    unsigned int COMClassFactory_field_0x04;  // G42.35 C7 体词汇 (基类别名)
    unsigned int *__pad_0;  // G42.35 C7 体词汇 (0x6BFBC0)


    unsigned int tail_0;  // X10 supply (csp_canon_members)
};
#endif
// 1 methods in IDA
// CSP: COMClassFactory_3 matched via T1
// x49 one-definition convergence (utility_ext tree def)
#ifndef GAMEMD_DEF_COMClassFactory_3
#define GAMEMD_DEF_COMClassFactory_3 1
class COMClassFactory_3
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~COMClassFactory_3() = default;

    virtual unsigned int * Construct(); // 0x6BF140
    unsigned int COMClassFactory_field_0x04;  // G42.35 C7 体词汇 (基类别名)
    unsigned int *__pad_0;  // G42.35 C7 体词汇 (0x6BF140)


    unsigned int tail_0;  // X10 supply (csp_canon_members)
};
#endif
// 1 methods in IDA
// CSP: COMClassFactory_4 matched via T1
// x49 one-definition convergence (utility_ext tree def)
#ifndef GAMEMD_DEF_COMClassFactory_4
#define GAMEMD_DEF_COMClassFactory_4 1
class COMClassFactory_4
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~COMClassFactory_4() = default;

    virtual unsigned int * Construct(); // 0x6BF2C0
    unsigned int COMClassFactory_field_0x04;  // G42.35 C7 体词汇 (基类别名)
    unsigned int *__pad_0;  // G42.35 C7 体词汇 (0x6BF2C0)


    unsigned int tail_0;  // X10 supply (csp_canon_members)
};
#endif
// 1 methods in IDA
// CSP: COMClassFactory_5 matched via T1
// x49 one-definition convergence (utility_ext tree def)
#ifndef GAMEMD_DEF_COMClassFactory_5
#define GAMEMD_DEF_COMClassFactory_5 1
class COMClassFactory_5
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~COMClassFactory_5() = default;

    virtual unsigned int * Construct(); // 0x6BF440
    unsigned int COMClassFactory_field_0x04;  // G42.35 C7 体词汇 (基类别名)
    unsigned int *__pad_0;  // G42.35 C7 体词汇 (0x6BF440)


    unsigned int tail_0;  // X10 supply (csp_canon_members)
};
#endif
// 1 methods in IDA
// CSP: COMClassFactory_6 matched via T1
// x49 one-definition convergence (utility_ext tree def)
#ifndef GAMEMD_DEF_COMClassFactory_6
#define GAMEMD_DEF_COMClassFactory_6 1
class COMClassFactory_6
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~COMClassFactory_6() = default;

    virtual unsigned int * Construct(); // 0x6BF5C0
    unsigned int COMClassFactory_field_0x04;  // G42.35 C7 体词汇 (基类别名)
    unsigned int *__pad_0;  // G42.35 C7 体词汇 (0x6BF5C0)


    unsigned int tail_0;  // X10 supply (csp_canon_members)
};
#endif
// 1 methods in IDA
// CSP: COMClassFactory_7 matched via T1
// x49 one-definition convergence (utility_ext tree def)
#ifndef GAMEMD_DEF_COMClassFactory_7
#define GAMEMD_DEF_COMClassFactory_7 1
class COMClassFactory_7
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~COMClassFactory_7() = default;

    virtual unsigned int * Construct(); // 0x6BF740
    unsigned int COMClassFactory_field_0x04;  // G42.35 C7 体词汇 (基类别名)
    unsigned int *__pad_0;  // G42.35 C7 体词汇 (0x6BF740)


    unsigned int tail_0;  // X10 supply (csp_canon_members)
};
#endif
// 1 methods in IDA
// CSP: COMClassFactory_8 matched via T1
// x49 one-definition convergence (utility_ext tree def)
#ifndef GAMEMD_DEF_COMClassFactory_8
#define GAMEMD_DEF_COMClassFactory_8 1
class COMClassFactory_8
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~COMClassFactory_8() = default;

    virtual unsigned int * Construct(); // 0x6BF8C0
    unsigned int COMClassFactory_field_0x04;  // G42.35 C7 体词汇 (基类别名)
    unsigned int *__pad_0;  // G42.35 C7 体词汇 (0x6BF8C0)


    unsigned int tail_0;  // X10 supply (csp_canon_members)
};
#endif
// 1 methods in IDA
// CSP: COMClassFactory_9 matched via T1
// x49 one-definition convergence (utility_ext tree def)
#ifndef GAMEMD_DEF_COMClassFactory_9
#define GAMEMD_DEF_COMClassFactory_9 1
class COMClassFactory_9
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~COMClassFactory_9() = default;

    virtual unsigned int * Construct(); // 0x6BFA40
    unsigned int COMClassFactory_field_0x04;  // G42.35 C7 体词汇 (基类别名)
    unsigned int *__pad_0;  // G42.35 C7 体词汇 (0x6BFA40)


    unsigned int tail_0;  // X10 supply (csp_canon_members)
};
#endif
// 27 methods in IDA
// CSP: COMObject matched via T1
#if !defined(GAMEMD_E4_COMObject) && !defined(GAMEMD_DEF_COMObject) // G57c1: e4 flat carrier wins in e4 TUs (C2011 vs COMObject_e4.hpp)
#define GAMEMD_DEF_COMObject 1
class COMObject
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~COMObject() = default;

    virtual int Release(); // 0x437FC0 (G42.33 b3: 体真值 int 返回)
    virtual void DetachPrimary(); // 0x488690
    virtual BOOL IsValid(); // 0x48C3B0 (G42.33 b3: 体真值 BOOL 返回)
    virtual void SetMember10(); // 0x48E600
    virtual int GetMember09(); // 0x48E610 (G42.33 b3: 体真值 int 返回)
    // +22 more virtual methods

    uint8_t q004[4];
    uint8_t q008[4];
    uint8_t q00C[4];
    uint8_t q010[4];
    uint8_t q014[4];
    uint8_t q018[4];
    uint8_t COMObject_field_0x1C[4];
    uint8_t q020[4];
    uint8_t q024[4];
    uint8_t q028[4];
    uint8_t q02C[4];
    uint8_t COMObject_field_0x30[4];
    uint8_t q034[4];
    uint8_t q038[4];
    uint8_t COMObject_field_0x3C[4];
    uint8_t COMObject_field_0x40[4];
    uint8_t q044[4];
    uint8_t q048[4];
    uint8_t q04C[4];
    uint8_t q050[4];
    void* Hovered;  // 0x0 (no offset truth)
    void* ptr_0;  // 0x0 (no offset truth)
    void* Image;  // 0x0 (no offset truth)
public:  // --- gap2 auto-generated stub declarations (BEGIN) ---
    int ActivateThunk(int a1, int a2, int a3);  // 0x4E1530
    int FindInList(int a1);  // 0x4E1920
    int TrackCurrent(int a1);  // 0x4E1970
    int ActivateGlobal();  // 0x4E19A0
    int DeactivateGlobal();  // 0x4E19D0
    bool IsPrimaryInstance();  // 0x4E19F0
    int Check(int a1);  // 0x4E2AF0
    int SetField(int a1);  // 0x4E2B20
    void* ScalarDtor(int a1);  // 0x4E30F0
    int DtorSequence(int a1);  // 0x4F42B0
    void* SwapReference(int a1);  // 0x5233A0
    int ValidatePtr();  // 0x683030
    // --- gap2 auto-generated stub declarations (END) ---
    public:  // symbol-anchor
    // === SYMBOL-ANCHOR (BEGIN) ===
    int GetSpecialValue(int a1);  // 0x55ad10 -- COMObject::GetSpecialValue
    // === SYMBOL-ANCHOR (END) ===
    public:  // funcs-move
    // === FUNCS-MOVE (BEGIN) ===
    int FindNextActive(int a1);  // 0x4e1a00
    int QueryInterface(int a1, int a2, int a3);  // 0x4f4240
    bool IsSameType(int a1);  // 0x4f43f0
    void* ReturnZeroPos(int a1, int a2);  // 0x55abd0
    void* GetCoord3D(int a1, int a2);  // 0x55aca0
    int GetSizeMaxWrapper(int a1, int a2);  // 0x5f9970
    int QueryInterface2(int a1, int a2, int a3);  // 0x6c0050
    int GetStringValue(int a1, int a2);  // 0x55ab40
    // === FUNCS-MOVE (END) ===
    unsigned int *__pad_0;  // supplied (C2039)
    unsigned int *q01C;  // supplied (C2039)
    unsigned int *__pad_31;  // supplied (C2039)
    unsigned int *m_2D;  // supplied (C2039)

    unsigned char __pad_009;  // G42.39 data supply

    int q030;  // X10 supply (member_lookup)
    int q03C;  // X10 supply (member_lookup)
    int q040;  // X10 supply (member_lookup)
    unsigned int u32_1C;  // X10 supply (member_lookup)
    unsigned char u8_1E;  // X10 supply (member_lookup)
};
#endif  // GAMEMD_E4_COMObject

// 1 methods in IDA
#if !defined(GAMEMD_E4_ComPtr) && !defined(GAMEMD_DEF_ComPtr) // G57a1: e4 flat carrier wins in e4 TUs
#define GAMEMD_DEF_ComPtr 1
// 9 methods in IDA
class ComPtr
{
public:
    virtual ~ComPtr() = default;  // 0x6406F0

    virtual int Release_Alt(); // 0x4B4D50 G42.34 C5 体签名
    virtual int ReleaseAndSet(unsigned int *a2); // 0x4D0490 G42.34 C5 体签名
    virtual int Dtor(); // 0x6406F0 G42.35 C6 体签名
    static int Dtor(void *aP0);  // 0x6406F0 G42.35 static-form sync (ui/supplied site 0x46E088)
    virtual unsigned int * Constructor(); // 0x65D430 G42.35 C6 体签名
    virtual void Release(); // 0x65D460 thiscall (x181c: static-form overload removed)
    // +4 more virtual methods

    uint8_t ComPtr_field_0x04[4];
    uint8_t q008[4];
    uint8_t q00C[4];
    uint8_t q010[4];
    uint8_t q014[4];
    uint8_t q018[4];
    uint8_t q01C[4];
    uint8_t q020[4];
    unsigned int *__pad_0;  // 0x0 G42.35 C7 指针形 (return this->__pad_0 体)
public:  // --- gap2 auto-generated stub declarations (BEGIN) ---
    int Set(int a1);  // 0x65D480
    int ReleaseSimple();  // 0x67FDD0
    void* Territory_Dtor();  // 0x76F060
    // --- gap2 auto-generated stub declarations (END) ---
    public:  // funcs-move
    // === FUNCS-MOVE (BEGIN) ===
    int DestroyWrapper(int a1, int a2);  // 0x76f000
    // === FUNCS-MOVE (END) ===

    unsigned char __pad_000;  // X10 supply (csp_canon_members)
    int q004;  // X10 supply (member_lookup)
};

#endif  // GAMEMD_E4_ComPtr
// 1 methods in IDA
// x49 one-definition convergence (utility_ext tree def)
#ifndef GAMEMD_DEF_CountdownTimer
#define GAMEMD_DEF_CountdownTimer 1
class CountdownTimer
{
public:
    // design: default destructor (compiler-generated), no callgraph reference
    virtual ~CountdownTimer() = default;

    virtual char UpdateDisplay(char a2);  // 0x4A2600 G42.33 b3 体签名


    unsigned int u32_4;  // X10 supply (member_lookup)
    unsigned int u32_8;  // X10 supply (member_lookup)
    unsigned int u32_9;  // X10 supply (member_lookup)
    unsigned int u32_A;  // X10 supply (member_lookup)
    unsigned int u32_C;  // X10 supply (member_lookup)
};
#endif
// 1 methods in IDA
// CSP: CountryCombo matched via T1
// x49 one-definition convergence (utility_ext tree def)
#ifndef GAMEMD_DEF_CountryCombo
#define GAMEMD_DEF_CountryCombo 1
class CountryCombo
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~CountryCombo() = default;

    virtual int IDToIndex(); // 0x4E3830 G42.34 C5 体签名

};
#endif
// 11 methods in IDA
#if !defined(GAMEMD_E4_EnumConnectionPointsClass) && !defined(GAMEMD_DEF_EnumConnectionPointsClass) // G57c1: e4 flat carrier wins in e4 TUs (C2011 vs EnumConnectionPointsClass_e4.hpp)
#define GAMEMD_DEF_EnumConnectionPointsClass 1
class EnumConnectionPointsClass
{
public:
    virtual int QueryInterface(const void *a2, unsigned int *a3);  // 0x4A0920 G42.33 b3 体签名
    virtual LONG AddRef();  // 0x4A0990 G42.33 b3 体签名
    virtual LONG Release();  // 0x4A09B0 G42.33 b3 体签名
    virtual ~EnumConnectionPointsClass() = default;  // 0x4A0A50
    virtual int Next(int a2);  // 0x4A0AF0 G42.33 b3 体签名
    virtual int Skip(int a1);  // X75: slot 5 (0x4A0B10) = EnumConnectionPointsClass::Skip (sibling promoted)
    virtual void sub_4A0B20();  // X75: slot 6 (0x4A0B20) = EnumConnectionPointsClass::_vt06
    virtual int ddtor(unsigned int a2, int a3, unsigned int *a4);  // 0x4A0A50 G42.33 b3 体签名  // X72 residual: RVA not a distinct binary slot


    unsigned int EnumConnectionPointsClass_field_0x04;  // G42.33 b3
    unsigned int EnumConnectionPointsClass_field_0x08;  // G42.33 b3
    unsigned int EnumConnectionPointsClass_field_0x0C;  // G42.33 b3
    unsigned int EnumConnectionPointsClass_field_0x10;  // G42.33 b3
    unsigned int EnumConnectionPointsClass_field_0x14;  // G42.33 b3
    unsigned int q018;  // G42.33 b3
    unsigned int EnumConnectionPointsClass_field_0x1C;  // G42.33 b3
    unsigned int q020;  // G42.33 b3
    unsigned int q024;  // G42.33 b3
    uint8_t q028[4];
public:  // --- gap2 auto-generated stub declarations (BEGIN) ---
    void* Constructor_VectorClass_IConnectionPoint___(int a1);  // 0x4A0E60
    void ClearBuffer();  // 0x4A0F20
    int PointerToIndex(int a1);  // 0x4A0F50
    int SetCapacity(int a1, void* a2);  // 0x4A13C0
    int FindItem(void* a1);  // 0x4A1470
    // --- gap2 auto-generated stub declarations (END) ---
    public:  // funcs-move
    // === FUNCS-MOVE (BEGIN) ===
    // === FUNCS-MOVE (END) ===
    unsigned int *__pad_0;  // supplied (C2039)
    unsigned int *m_1;  // supplied (C2039)
    unsigned int *m_10;  // supplied (C2039)
    unsigned int *m_8;  // supplied (C2039)
    unsigned int *m_C;  // supplied (C2039)

    bool IsAllocated;  // X10 supply (csp_canon_members)
    unsigned char __pad_004;  // X10 supply (csp_canon_members)
    int q008;  // X10 supply (member_lookup)
    int q00C;  // X10 supply (member_lookup)
    int q010;  // X10 supply (member_lookup)
    int q014;  // X10 supply (member_lookup)
    int q01C;  // X10 supply (member_lookup)
    unsigned int u32_19;  // X10 supply (member_lookup)
    void* ptr_0;  // X10 supply (csp_canon_members)
};
#endif  // GAMEMD_E4_EnumConnectionPointsClass

// 6 methods in IDA
#if !defined(GAMEMD_E4_EnumConnectionsClass) && !defined(GAMEMD_DEF_EnumConnectionsClass) // G57c1: e4 flat carrier wins in e4 TUs (C2011 vs EnumConnectionsClass_e4.hpp)
#define GAMEMD_DEF_EnumConnectionsClass 1
class EnumConnectionsClass
{
public:
    virtual int QueryInterface(const void *a2, unsigned int *a3);  // 0x49FF80 G42.33 b3 体签名
    virtual LONG AddRef();  // 0x49FFF0 G42.33 b3 体签名 (LONG 返回)
    virtual LONG Release();  // 0x4A0010 G42.33 b3 体签名
    virtual ~EnumConnectionsClass() = default;  // 0x4A00B0
    virtual int Next(int a2);  // 0x4A0160 G42.33 b3 体签名
    virtual int Skip(int a1);  // X75: slot 5 (0x4A0180) = EnumConnectionsClass::Skip (sibling promoted)
    virtual void sub_4A0190();  // X75: slot 6 (0x4A0190) = EnumConnectionsClass::_vt06
    virtual int ddtor(unsigned int a2, int a3, unsigned int *a4);  // 0x4A00B0 G42.33 b3 体签名  // X72 residual: RVA not a distinct binary slot


    unsigned int EnumConnectionsClass_field_0x04;  // G42.33 b3: 标量形 (体表 uint/ptr 用法)
    unsigned int EnumConnectionsClass_field_0x08;  // G42.33 b3
    unsigned int EnumConnectionsClass_field_0x0C;  // G42.33 b3
    unsigned int q010;  // G42.33 b3
    unsigned int EnumConnectionsClass_field_0x14;  // G42.33 b3
    public:  // funcs-move
    // === FUNCS-MOVE (BEGIN) ===
    // === FUNCS-MOVE (END) ===

    unsigned int u32_1C;  // G42.39 data supply

    unsigned char __pad_004;  // X10 supply (csp_canon_members)
    int q008;  // X10 supply (member_lookup)
    int q00C;  // X10 supply (member_lookup)
    int q014;  // X10 supply (member_lookup)
    int u32_11;  // X10 supply (member_lookup)
    void* ptr_0;  // X10 supply (csp_canon_members)
};
#endif  // GAMEMD_E4_EnumConnectionsClass

// 1 methods in IDA
// x49 one-definition convergence (utility_ext tree def)
#ifndef GAMEMD_DEF_EventBuffer
#define GAMEMD_DEF_EventBuffer 1
class EventBuffer
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~EventBuffer() = default;

    virtual int Enqueue(int16_t a2); // 0x54F1C0 G42.35 C7 体签名
    static int Enqueue(void *aP0, int16_t aP1);  // 0x54F1C0 G42.35 static-form sync (ui/supplied sites 0x54F99E+)


    unsigned int u32_318;  // G42.39 data supply

    unsigned int u32_314;  // G42.39 data supply
};
#endif
// 3 methods in IDA
#if !defined(GAMEMD_E4_Flag) && !defined(GAMEMD_DEF_Flag) // G57a1: e4 flat carrier wins in e4 TUs
#define GAMEMD_DEF_Flag 1
class Flag
{
public:
    // design: default destructor (compiler-generated), no callgraph reference
    virtual ~Flag() = default;

    virtual int CheckNone(); // 0x4A51D0 (G42.33 b4 C1: 体签名 int)
    virtual int IsZero(); // 0x4F4CA0 G42.35 C6 体签名
    virtual int IsNot2(); // 0x5176B0 G42.35 C6 体签名

    uint8_t q004[4];
    uint8_t q008[4];
    unsigned int *__pad_0;  // G42.35 C6 体词汇 (0x4f4ca9 指针解引用)

    unsigned int u32_19;  // G42.39 data supply

    unsigned int u32_18;  // G42.39 data supply

    unsigned char __pad_000;  // X10 supply (csp_canon_members)
};

#endif  // GAMEMD_E4_Flag
// 1 methods in IDA
// x49 one-definition convergence (utility_ext tree def)
#ifndef GAMEMD_DEF_FlagSystem
#define GAMEMD_DEF_FlagSystem 1
class FlagSystem
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~FlagSystem() = default;

    virtual int GetNextActive(); // 0x626690 G42.35 C7 体签名


    unsigned int u32_8;  // G42.39 data supply

    unsigned int u32_4;  // G42.39 data supply
};
#endif
// 2 methods in IDA
// CSP: Float4 matched via T1
#if !defined(GAMEMD_E4_Float4) && !defined(GAMEMD_DEF_Float4) // G57c1: e4 flat carrier wins in e4 TUs (C2011 vs Float4_e4.hpp)
#define GAMEMD_DEF_Float4 1
class Float4
{
public:
    // design: default destructor (compiler-generated), no callgraph reference
    virtual ~Float4() = default;

    virtual void Copy(); // 0x645D20
    virtual void Sum(); // 0x6C9650

    uint8_t q004[4];
};
#endif  // GAMEMD_E4_Float4

// 1 methods in IDA
// CSP: FloatArray matched via T1
// x49 one-definition convergence (utility_ext tree def)
#ifndef GAMEMD_DEF_FloatArray
#define GAMEMD_DEF_FloatArray 1
class FloatArray
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~FloatArray() = default;

    virtual int Get(int a2); // 0x6C9680 G42.35 C9 体签名

};
#endif
// 6 methods in IDA
#if !defined(GAMEMD_E4_GraphicMenuAnimItem) && !defined(GAMEMD_DEF_GraphicMenuAnimItem) // G57c1: e4 flat carrier wins in e4 TUs (C2011 vs GraphicMenuAnimItem_e4.hpp)
#define GAMEMD_DEF_GraphicMenuAnimItem 1
class GraphicMenuAnimItem
{
public:
    virtual ~GraphicMenuAnimItem() = default; // 0x4F3090

    virtual BOOL Release(unsigned int *a2); // 0x4F3090 G42.34 C5 体签名
    virtual void ***QueryInterface(char a2); // 0x4F30E0 G42.34 C5 体签名
    virtual void StubReturnFalse(); // 0x4F3AD0
    virtual void Stub(); // 0x4F3AE0
    virtual char AddRef(); // 0x4F3B00 G42.35 C6 体签名
    // +1 more virtual methods

    uint8_t GraphicMenuAnimItem_field_0x04[4];
    uint8_t q008[4];
    uint8_t q00C[4];
    uint8_t GraphicMenuAnimItem_field_0x10[4];
    uint8_t GraphicMenuAnimItem_field_0x14[4];
    unsigned int *__pad_0;  // G42.35 C6 体词汇 (0x4f30e6 ptr_0 槽)

    unsigned int u32_18;  // G42.39 data supply

    unsigned int u32_1C;  // G42.39 data supply

    int q010;  // X10 supply (member_lookup)
    int q014;  // X10 supply (member_lookup)
    unsigned int u32_24;  // X10 supply (member_lookup)
    int u8_9;  // X10 supply (member_lookup)
    void* ptr_0;  // X10 supply (csp_canon_members)
};
#endif  // GAMEMD_E4_GraphicMenuAnimItem

// 5 methods in IDA
// x49 one-definition convergence (utility_ext tree def)
#ifndef GAMEMD_DEF_GraphicMenuImageItem
#define GAMEMD_DEF_GraphicMenuImageItem 1
class GraphicMenuImageItem
{
public:
    virtual ~GraphicMenuImageItem() = default;  // 0x4F37A0

    virtual BOOL Release(unsigned int *a2); // 0x4F3640 G42.34 C5 体签名
    virtual int Load(char a2); // 0x4F3690 G42.34 C5 体签名
    virtual int Draw(char a2); // 0x4F3720 G42.34 C5 体签名
virtual unsigned int * ddtor(unsigned int *);  // 0x4F37A0
    virtual void *QueryInterface(char a2); // 0x4F3840 (bin ret void* per signals; X145C)

    uint8_t GraphicMenuImageItem_field_0x04[4];
    uint8_t GraphicMenuImageItem_field_0x08[4];
    uint8_t q00C[4];
    uint8_t GraphicMenuImageItem_field_0x10[4];

    unsigned int u32_14;  // G42.39 data supply

    unsigned int u32_1C;  // G42.39 data supply

    unsigned int u32_18;  // G42.39 data supply

    unsigned int q008;  // G42.39 (size usage)  // G42.39 data supply

    int q010;  // X10 supply (member_lookup)
    unsigned char q034;  // X10 supply (member_lookup)
    unsigned int u32_20;  // X10 supply (member_lookup)
    unsigned int u32_24;  // X10 supply (member_lookup)
    unsigned int u32_28;  // X10 supply (member_lookup)
    unsigned int u32_2C;  // X10 supply (member_lookup)
    unsigned int u32_30;  // X10 supply (member_lookup)
    int u8_9;  // X10 supply (member_lookup)
    void* ptr_0;  // X10 supply (csp_canon_members)
};
#endif
// 2 methods in IDA
// CSP: GraphicMenuItem matched via T1
#if !defined(GAMEMD_E4_GraphicMenuItem) && !defined(GAMEMD_DEF_GraphicMenuItem) // G57c1: e4 flat carrier wins in e4 TUs (C2011 vs GraphicMenuItem_e4.hpp)
#define GAMEMD_DEF_GraphicMenuItem 1
class GraphicMenuItem
{
public:
    virtual ~GraphicMenuItem() = default; // 0x4F3A70

    virtual unsigned int * Constructor(int a2); // 0x4F3A50 G42.35 C6 体签名
    virtual int Destructor(); // 0x4F3A70

    uint8_t GraphicMenuItem_field_0x04[4];
    unsigned int *__pad_0;  // G42.35 C6 体词汇 (0x4f3a65 ptr_0 槽)

    unsigned int u32_9;  // G42.39 data supply

    unsigned int u32_8;  // G42.39 data supply

    unsigned int u32_C;  // G42.39 data supply

    unsigned char __pad_004;  // X10 supply (csp_canon_members)
    void* ptr_0;  // X10 supply (csp_canon_members)
};
#endif  // GAMEMD_E4_GraphicMenuItem

// 2 methods in IDA
// x49 one-definition convergence (utility_ext tree def)
#ifndef GAMEMD_DEF_GraphicMenuItem_Destru
#define GAMEMD_DEF_GraphicMenuItem_Destru 1
class GraphicMenuItem_Destru
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~GraphicMenuItem_Destru() = default;

    virtual char Release(); // 0x4F3AF0 G42.35 C6 体签名
    virtual void ***QueryInterface(char a2); // 0x4F3B20 G42.35 C6 体签名

    uint8_t q004[4];
    unsigned int *__pad_0;  // G42.35 C6 体词汇 (0x4f3b27 ptr_0 槽)

    unsigned int u32_C;  // G42.39 data supply
};
#endif
// 2 methods in IDA
// x49 one-definition convergence (utility_ext tree def)
#ifndef GAMEMD_DEF_GraphicMenuShortcutItem
#define GAMEMD_DEF_GraphicMenuShortcutItem 1
class GraphicMenuShortcutItem
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~GraphicMenuShortcutItem() = default;

    virtual char AddRef(int a2); // 0x4F3EE0 G42.35 C6 体签名
    virtual unsigned int *QueryInterface(char a2); // 0x4F3F60 G42.35 C6 体签名

    uint8_t GraphicMenuShortcutItem_field_0x04[4];
    unsigned int *__pad_0;  // G42.35 C6 体词汇 (0x4f3f63 ptr_0 槽)

    unsigned int u32_9;  // G42.39 data supply

    unsigned char __pad_004;  // X10 supply (csp_canon_members)
    unsigned int u32_14;  // X10 supply (member_lookup)
    unsigned int u32_18;  // X10 supply (member_lookup)
    unsigned int u32_1D;  // X10 supply (member_lookup)
    void* ptr_0;  // X10 supply (csp_canon_members)
};
#endif
// 3 methods in IDA
// 4 methods in IDA
// CSP: HashMap matched via T1
// x49 one-definition convergence (utility_ext tree def)
#ifndef GAMEMD_DEF_HashMap
#define GAMEMD_DEF_HashMap 1
class HashMap
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~HashMap() = default;

    virtual int ComputeIndex(int a2); // 0x624C80 G42.35 C8 体签名
    virtual int Shrink2(); // 0x7ADF70 G42.35 C9 体签名
    virtual int ComputeIndex_2(int a2); // 0x7AE0C0 G42.35 C8 体签名
    virtual int Shrink(); // 0x7AE460 G42.35 C9 体签名

    uint8_t q004[4];
    unsigned int *__pad_0;  // G42.35 C7 体词汇 (0x7adf90)
    uint8_t HashMap_field_0x08[4];
    uint8_t HashMap_field_0x0C[4];

    unsigned int q00C;  // G42.39 data supply (shift operand)

    unsigned int u32_14;  // G42.39 data supply

    unsigned int u32_18;  // G42.39 data supply

    unsigned char __pad_000;  // X10 supply (csp_canon_members)
    unsigned int u32_30;  // X10 supply (member_lookup)
    unsigned int u32_8;  // X10 supply (member_lookup)
    unsigned int u32_C;  // X10 supply (member_lookup)
};
#endif
// 27 methods in IDA
#if !defined(GAMEMD_E4_HashTable) && !defined(GAMEMD_DEF_HashTable) // G57a1: e4 flat carrier wins in e4 TUs
#define GAMEMD_DEF_HashTable 1
class HashTable
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~HashTable() = default;

    virtual void DestroyHashTableINIClass(); // 0x5256F0
    virtual int BinarySearch(int *a2); // 0x52B390 G42.35 C6 体签名
    virtual int BinarySearchAlt(int *a2); // 0x52B4F0 G42.35 C6 体签名
    virtual int LookupAndMark(); // 0x608440 G42.35 C6 体签名
    virtual int FindAndMark(int a2, int a3); // G42.35 C6 体签名
    static int Find(void *aP0, const char *aP1, int aP2);  // 0x6BA140 G42.35 static-form sync (truth thiscall(this, const char*, void*); ui/supplied sites 0x783Axx family)
    // +22 more virtual methods

    uint8_t HashTable_field_0x04[4];
    uint8_t HashTable_field_0x08[4];
    unsigned int q00C;  // 0xC (X139B: mt u32_C; was HashTable_field_0x0C)
    uint8_t HashTable_field_0x10[4];

    uint8_t u32_14[4];
    uint8_t u32_18[4];
    uint8_t q01C[4];
    uint8_t q020[4];
    uint8_t q024[4];
    uint8_t q028[4];
    uint8_t q02C[4];
    uint8_t q030[4];
    uint8_t q034[4];
    uint8_t u32_38[4];
    uint8_t u32_3C[4];
    uint8_t q040[4];
    uint8_t q044[4];
    uint8_t q048[4];
    uint8_t q04C[4];
    uint8_t q050[4];
    unsigned int *__pad_0;  // G42.35 C6 体词汇 (0x52b510 数组基)
    unsigned int m_4;  // G42.35 C8 体词汇 (0x62414c)
    unsigned int m_8;  // G42.35 C8 体词汇 (0x6241af)

    unsigned int u32_4;  // G42.39 data supply
    unsigned int u32_C;  // G42.39 data supply
    unsigned int u32_10;  // G42.39 data supply

    unsigned int u32_8;  // X10 supply (member_lookup)
};
// 1 methods in IDA

#endif  // GAMEMD_E4_HashTable
// CSP: HashTableSection matched via T1
// x49 one-definition convergence (utility_ext tree def)
#ifndef GAMEMD_DEF_HashTableSection
#define GAMEMD_DEF_HashTableSection 1
class HashTableSection
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~HashTableSection() = default;

    virtual int FindSection(uint8_t *a2, uint8_t *a3); // 0x526B10 G42.35 C6 体签名


    unsigned int u32_2C;  // X10 supply (member_lookup)
    unsigned int u32_38;  // X10 supply (member_lookup)
    unsigned int u32_4;  // X10 supply (member_lookup)
    unsigned int u32_8;  // X10 supply (member_lookup)
};
#endif
// 1 methods in IDA
// x49 one-definition convergence (utility_ext tree def)
#ifndef GAMEMD_DEF_HashTree
#define GAMEMD_DEF_HashTree 1
class HashTree
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~HashTree() = default;

    virtual int MarkEntry(); // 0x5B4270 (G57w16 G1: raw int)

};
#endif
// 1 methods in IDA
// CSP: HashVector_UInt matched via T1
// x49 one-definition convergence (utility_ext tree def)
#ifndef GAMEMD_DEF_HashVector_UInt
#define GAMEMD_DEF_HashVector_UInt 1
class HashVector_UInt
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~HashVector_UInt() = default;

    virtual unsigned int * Construct(int a2, int a3); // 0x58AFF0 G42.35 C6 体签名


    unsigned int Capacity;  // G42.39 data supply

    unsigned int IsInitialized;  // G42.39 data supply

    unsigned int IsAllocated;  // G42.39 data supply

    unsigned int Items;  // G42.39 data supply
};
#endif
// 1 methods in IDA
// x49 one-definition convergence (utility_ext tree def)
#ifndef GAMEMD_DEF_PairVector
#define GAMEMD_DEF_PairVector 1
class PairVector
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~PairVector() = default;

    virtual char PushBack(unsigned int *a2); // 0x4E0C40 G42.34 C5 体签名


    unsigned int u32_10;  // X10 supply (member_lookup)
    unsigned int u32_14;  // X10 supply (member_lookup)
    unsigned int u32_4;  // X10 supply (member_lookup)
    unsigned int u32_8;  // X10 supply (member_lookup)
    unsigned int u32_D;  // X10 supply (member_lookup)
};
#endif
// 12 methods in IDA
// CSP: PlayerClass matched via T1
#if !defined(GAMEMD_E4_PlayerClass) && !defined(GAMEMD_DEF_PlayerClass) // G57c1: e4 flat carrier wins in e4 TUs (C2011 vs PlayerClass_e4.hpp)
#define GAMEMD_DEF_PlayerClass 1
class PlayerClass
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~PlayerClass() = default;

    virtual void FindNearestWaypoint(); // 0x430F70
    char FindNearestWaypoint(int a2, int a3, int a4);  // 0x430F70 G42.33 b3 supplied-body sync (3 参形)
    virtual int ExecuteCommand(int a2, int16_t *a3, void *a4, int a5, int a6);  // 0x4AB9B0 G42.33 b3 体签名
    virtual char CheckHumanPlayer(); // 0x4AC2B0 G42.34 C5 体签名
    virtual char * SetTargetOrClear(int a2, int a3, int16_t *a4); // 0x4C6650 (G42.33 b4 C2: 体签名)
    virtual char AssignPlayerIndex_0(); // 0x5C5D30 G42.35 C9 体签名
    // +7 more virtual methods

    uint8_t q004[4];
    uint8_t u32_8[4];
    uint8_t PlayerClass_field_0x0C[4];
    uint8_t q010[4];
    uint8_t q014[4];
    uint8_t PlayerClass_field_0x18[4];
    uint8_t q01C[4];
    uint8_t PlayerClass_field_0x20[4];
    uint8_t q024[4];
    uint8_t q028[4];
    uint8_t q02C[4];
    // G42.33 b4 C1: flat-carrier vocab (ExecuteCommand 体表槽位, 0x41E/0x1198..0x11D0)
    unsigned char __pad_41E[0xD6A];  // G42.33 b4 C3: 扩容 ([3426] 站点)
    unsigned char __pad_1198[0x11A8 - 0x1198];
    unsigned int DisplayClass_field_0x11A8;
    unsigned int __pad_11AC;
    void *DisplayClass_field_0x1194;  // G42.34 C5: 体词汇 (0x4abbf5 IUnknown* 写)
    unsigned char __pad_11B4[0x11D0 - 0x11B4];
    void (__thiscall **DisplayClass_field_0x0)(void *, unsigned int, int);  // G42.33 b4 C3: vt 槽词汇
    unsigned int DisplayClass_field_0x11D0;
    unsigned char *__pad_0;  // 0x0 G42.34 C5: ptr_0 槽词汇 (CheckHumanPlayer 体)
public:  // --- gap2 auto-generated stub declarations (BEGIN) ---
    bool HasPlayers();  // 0x6ABAC0
    int ProcessOccupancyUpdate(void* a1);  // 0x6D9FF0
    int HasOccupiedCell();  // 0x6DA080
    int HasOccupiedCell(int a2);  // G42.33 b3 supplied-call sync
    int UpdateAIUnits();  // 0x732600
    // --- gap2 auto-generated stub declarations (END) ---
    public:  // symbol-anchor
    // === SYMBOL-ANCHOR (BEGIN) ===
    int SetHouse(int a1);  // 0x5d8cb0 -- PlayerClass::SetHouse
    // === SYMBOL-ANCHOR (END) ===
    public:  // funcs-move
    // === FUNCS-MOVE (BEGIN) ===
    int AssignPlayerIndex();  // 0x5d62c0
    bool IsValidIndex(int a1);  // 0x5d8c90
    // === FUNCS-MOVE (END) ===

    void * q018;  // G42.39 data supply
    void * q020;  // G42.39 data supply

    unsigned int u32_81;  // G42.39 data supply

    int q00C;  // X10 supply (member_lookup)
    unsigned int u32_54;  // X10 supply (member_lookup)
    unsigned int u32_60;  // X10 supply (member_lookup)
    unsigned int u32_B0;  // X10 supply (member_lookup)
    unsigned int u32_B4;  // X10 supply (member_lookup)
    unsigned int u32_D90;  // X10 supply (member_lookup)
    unsigned int u32_D94;  // X10 supply (member_lookup)
    unsigned int u32_D98;  // X10 supply (member_lookup)
    unsigned int u32_D9C;  // X10 supply (member_lookup)
    unsigned int u32_DB0;  // X10 supply (member_lookup)
};
#endif  // GAMEMD_E4_PlayerClass

// 1 methods in IDA
// x49 one-definition convergence (utility_ext tree def)
#ifndef GAMEMD_DEF_PlayerProfile
#define GAMEMD_DEF_PlayerProfile 1
class PlayerProfile
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~PlayerProfile() = default;

    virtual void **QueryInterface(char a2); // 0x77B030 G42.35 C9 体签名


    void * q0046;  // G42.39 data supply

    unsigned char DeleteAndZero_46[4];  /* DeleteAndZero */  // X10 supply (member_lookup)
};
#endif
// 2 methods in IDA
// CSP: PlayerSlot matched via T1
// x49 one-definition convergence (utility_ext tree def)
#ifndef GAMEMD_DEF_PlayerSlot
#define GAMEMD_DEF_PlayerSlot 1
class PlayerSlot
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~PlayerSlot() = default;

    virtual int NameToDialogID(const char *a1); // 0x510FB0 G42.35 C6 体签名 (ecx 字串形)
    virtual int IndexToDlgID(); // 0x5E98F0 G42.35 C6 体签名

    uint8_t q004[4];
};
#endif
// 1 methods in IDA
// x49 one-definition convergence (utility_ext tree def)
#ifndef GAMEMD_DEF_PlayerType
#define GAMEMD_DEF_PlayerType 1
class PlayerType
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~PlayerType() = default;

    virtual void GetName(); // 0x4E62B0

};
#endif
// 1 methods in IDA
// CSP: PtrVector matched via T1
#if !defined(GAMEMD_E4_PtrVector) && !defined(GAMEMD_DEF_PtrVector) // G57c1: e4 flat carrier wins in e4 TUs (C2011 vs PtrVector_e4.hpp)
#define GAMEMD_DEF_PtrVector 1
class PtrVector
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~PtrVector() = default;

    virtual void Destroy(); // 0x5C6120

};
#endif  // GAMEMD_E4_PtrVector

// 1 methods in IDA
// 4 methods in IDA
#ifndef GAMEMD_E4_Random  // G57a1: e4 flat carrier wins in e4 TUs
#if !defined(GAMEMD_G2_Random_DEF) && !defined(GAMEMD_DEF_Random) // g57a5 W2d: twin-definition guard (utility_ext Random)
#define GAMEMD_G2_Random_DEF 1
#define GAMEMD_DEF_Random 1
class Random
{
public:
    // design: default destructor (compiler-generated), no callgraph reference
    virtual ~Random() = default;

    virtual int Gaussian(); // 0x5980C0 G42.35 C7 体签名
    // X181A: State/Range are NOT virtual in the binary (no vtable slot holds
    // 0x65C780 / 0x65C7E0 -- every call site is a direct `call`); declaring
    // them virtual would turn the restored p->Method() sites into indirect
    // dispatch through a vptr these globals do not have.
    int State(); // 0x65C780 G42.35 C8 体签名
    int Range(int a1, int a2);  // 0x65C7E0 (G42.35 def-truth sync @0x73E62B)
    virtual void AdvanceRandomBytes(); // 0x661850

    uint8_t q004[4];
    uint8_t Random_field_0x08[4];
    uint8_t Random_field_0x0C[4];
    unsigned int *__pad_0;  // G42.35 C8 体词汇 (0x65c780 指针解引用)

    int q008;  // X10 supply (member_lookup)
    int q00C;  // X10 supply (member_lookup)
};
#endif  // GAMEMD_G2_Random_DEF


#endif  // GAMEMD_E4_Random
// 3 methods in IDA
// x49 one-definition convergence (utility_ext tree def)
#ifndef GAMEMD_DEF_RandomStraw
#define GAMEMD_DEF_RandomStraw 1
class RandomStraw
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~RandomStraw() = default;

    virtual int AdvanceState(); // 0x65C8B0 G42.35 C8 体签名
    virtual int Release(int a2, int a3); // 0x661C10 G42.35 C8 体签名
    virtual int *QueryInterface(char a2); // 0x661C70 G42.35 C8 体签名

    uint8_t RandomStraw_field_0x04[4];
    unsigned int *__pad_0;  // G42.35 C7 体词汇 (0x65c8ba)
    uint8_t q008[4];

    unsigned char __pad_004;  // X10 supply (csp_canon_members)
    unsigned char q010;  // X10 supply (member_lookup)
    void* ptr_0;  // X10 supply (csp_canon_members)
};
#endif
// 1 methods in IDA
// CSP: Rect_Point matched via T1
#if !defined(GAMEMD_E4_Rect_Point) && !defined(GAMEMD_DEF_Rect_Point) // G57c1: e4 flat carrier wins in e4 TUs (C2011 vs Rect_Point_e4.hpp)
#define GAMEMD_DEF_Rect_Point 1
class Rect_Point
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~Rect_Point() = default;

    virtual int Set(int a2, int a3); // 0x4E1A20 G42.34 C5 体签名

    int Width;   // G42.34 C5: Set 体词汇 (0x4e1a28)
    int Height;  // G42.34 C5: Set 体词汇 (0x4e1a2b)
};
#endif  // GAMEMD_E4_Rect_Point

// 1 methods in IDA
// CSP: ReferenceCounted matched via T1
// x49 one-definition convergence (utility_ext tree def)
#ifndef GAMEMD_DEF_ReferenceCounted
#define GAMEMD_DEF_ReferenceCounted 1
class ReferenceCounted
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~ReferenceCounted() = default;

    void* Constructor(); // 0x65D660
    static int Constructor(void *aP0);  // 0x65D660 G42.35 static-form sync (ui/supplied site 0x765660)


    unsigned char String_3[4];  /* String */  // X10 supply (member_lookup)
};
#endif
// 6 methods in IDA
#ifndef GAMEMD_E4_SHA1  // G42.33 b3: e4 flat carrier wins in opt-in TUs
#if !defined(GAMEMD_G2_SHA1_DEF) && !defined(GAMEMD_DEF_SHA1) // X10: first-include-wins twin guard
#define GAMEMD_G2_SHA1_DEF 1
#define GAMEMD_DEF_SHA1 1
class SHA1
{
public:
    // design: default destructor (compiler-generated), no callgraph reference
    virtual ~SHA1() = default;

    virtual void ProcessBlock(); // 0x69D8C0
    virtual short Process(); // 0x69D960
    virtual void Compute(); // 0x69D9E0
    virtual void Transform(); // 0x69DB30
    int Reset(); // 0x69DFF0
    // +1 more virtual methods

    uint8_t u32_4[4];
    uint8_t q008[4];
    uint8_t q00C[4];
    uint8_t q010[4];
    uint8_t q014[4];
};
#endif  // GAMEMD_G2_SHA1_DEF (X10)

#endif  // GAMEMD_E4_SHA1
// 1 methods in IDA
// x49 one-definition convergence (utility_ext tree def)
#ifndef GAMEMD_DEF_SettingsClass
#define GAMEMD_DEF_SettingsClass 1
class SettingsClass
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~SettingsClass() = default;

    virtual int ClampValues(); // 0x5975E0 G42.35 C7 体签名


    unsigned int u32_40;  // G42.39 data supply

    unsigned int u32_3C;  // G42.39 data supply

    unsigned int u32_48;  // G42.39 data supply

    unsigned int u32_44;  // G42.39 data supply

    unsigned int u32_4C;  // G42.39 data supply

    unsigned int u32_50;  // G42.39 data supply

    unsigned int u32_58;  // G42.39 data supply

    unsigned int u32_60;  // G42.39 data supply

    unsigned int u32_70;  // G42.39 data supply

    unsigned int u32_54;  // G42.39 data supply

    unsigned int u32_5C;  // G42.39 data supply

    unsigned int u32_64;  // G42.39 data supply

    unsigned int u32_68;  // G42.39 data supply

    unsigned int u32_6C;  // G42.39 data supply

    unsigned int u32_74;  // G42.39 data supply
};
#endif
// 1 methods in IDA
// x49 one-definition convergence (utility_ext tree def)
#ifndef GAMEMD_DEF_StringBuffer
#define GAMEMD_DEF_StringBuffer 1
class StringBuffer
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~StringBuffer() = default;

    virtual unsigned char * Reset(); // 0x5F33A0 G42.35 C8 体签名


    unsigned int u32_14;  // G42.39 data supply

    unsigned int u32_C;  // X10 supply (member_lookup)
};
#endif
// 1 methods in IDA
#if !defined(GAMEMD_E4_StringList) && !defined(GAMEMD_DEF_StringList) // G57c1: e4 flat carrier wins in e4 TUs (C2011 vs (TU-local addr6C_e4.cpp))
#define GAMEMD_DEF_StringList 1
class StringList
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~StringList() = default;

    virtual int Find(const char *a2); // 0x721210 G42.35 C9 体签名


    unsigned int u32_24;  // G42.39 data supply

    unsigned int u32_18;  // G42.39 data supply
};
#endif  // GAMEMD_E4_StringList

// 2 methods in IDA
#if !defined(GAMEMD_E4_StringTable) && !defined(GAMEMD_DEF_StringTable) // G42.33 b3: e4 flat carrier wins in opt-in TUs
#define GAMEMD_DEF_StringTable 1
class StringTable
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~StringTable() = default;

    virtual int Lookup(); // 0x40DCE0 (raw int __thiscall)
    virtual int Find(const char **a2); // 0x5CF6B0 g57w11 r4 G7: raw 原型 int Find(const char **)

    uint8_t StringTable_field_0x04[4];
    unsigned char __pad_0[64];  // g57w11 r4 G7 体词汇 (raw 0x40dcfa this->__pad_0 字符串基址)

    unsigned char __pad_000;  // X10 supply (csp_canon_members)
    int q004;  // X10 supply (member_lookup)
    unsigned int u32_10;  // X10 supply (member_lookup)
};
#endif  // GAMEMD_E4_StringTable
// 7 methods in IDA
#if !defined(GAMEMD_E4_StringVector) && !defined(GAMEMD_DEF_StringVector) // G42.33 b3: e4 flat carrier wins in opt-in TUs
#define GAMEMD_DEF_StringVector 1
class StringVector
{
public:
    virtual ~StringVector() = default;  // 0x49EF10

    virtual void Release(); // 0x49EE60
    virtual void ddtor(); // 0x49EF10
    virtual int Add(unsigned int a2); // 0x49EF40 (bin ret int per signals; X145C)
    virtual void Remove(); // 0x49EF80
    virtual void QueryInterface(); // 0x49EFA0
    // +2 more virtual methods

    void *Items;  // 0x4 (X137C: disasm n=5, ptr usage)

    int Capacity;  // 0x8 (X137C: disasm n=3)

    unsigned int IsInitialized;  // 0xC (X137C: disasm n=2; Cleanup5 alias banked)

    uint8_t q010[4];
    uint8_t q014[4];
    uint8_t q018[4];
    unsigned char m_1[4];  // 0x1
public:  // --- gap2 auto-generated stub declarations (BEGIN) ---
    void* Construct(int a1, int a2);  // 0x5AD6F0
    int Insert(void* a1, int a2);  // 0x7AE5D0
    // --- gap2 auto-generated stub declarations (END) ---

    unsigned char __pad_000;  // X10 supply (csp_canon_members)
    int q004;  // X10 supply (member_lookup)
    int q008;  // X10 supply (member_lookup)


    int __pad_0;  // 0x0 [X55 W3 supply (render vocab)]
    unsigned int m_C;  // 0xC [X55 W3 supply (render vocab)]
};
#endif  // GAMEMD_E4_StringVector
// 1 methods in IDA
// x49 one-definition convergence (utility_ext tree def)
#ifndef GAMEMD_DEF_StructTable
#define GAMEMD_DEF_StructTable 1
class StructTable
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~StructTable() = default;

    virtual int Append(const void *a2);  // 0x4A3840 G42.33 b3 体签名


    unsigned int u32_18000;  // G42.39 data supply
};
#endif
// 1 methods in IDA
// x49 one-definition convergence (utility_ext tree def)
#ifndef GAMEMD_DEF_Timeout
#define GAMEMD_DEF_Timeout 1
class Timeout
{
public:
    // design: default destructor (compiler-generated), no callgraph reference
    virtual ~Timeout() = default;

    virtual int GetRemaining(); // 0x4B4D70 G42.34 C5 体签名


    unsigned int u32_8;  // G42.39 data supply
};
#endif
// 1 methods in IDA
// CSP: TimerPool matched via T1
// x49 one-definition convergence (utility_ext tree def)
#ifndef GAMEMD_DEF_TimerPool
#define GAMEMD_DEF_TimerPool 1
class TimerPool
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~TimerPool() = default;

    virtual unsigned int * AllocSlot(); // 0x53E3C0 G42.35 C7 体签名

};
#endif
// 1 methods in IDA
// x49 one-definition convergence (utility_ext tree def)
#ifndef GAMEMD_DEF_Tree
#define GAMEMD_DEF_Tree 1
class Tree
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~Tree() = default;

    virtual void Destructor(); // 0x5B4080 G42.35 C8 体签名


    unsigned int u32_4;  // X10 supply (member_lookup)
};
#endif
// 1 methods in IDA
// x49 one-definition convergence (utility_ext tree def)
#ifndef GAMEMD_DEF_TypeClass
#define GAMEMD_DEF_TypeClass 1
class TypeClass
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~TypeClass() = default;

    virtual wchar_t * FindByName(); // 0x41CAA0

};
#endif
// 2 methods in IDA
#if !defined(GAMEMD_E4_Vector2) && !defined(GAMEMD_DEF_Vector2) // G42.33 b3: e4 flat carrier wins in opt-in TUs
#define GAMEMD_DEF_Vector2 1
class Vector2
{
public:
    // design: default destructor (compiler-generated), no callgraph reference
    virtual ~Vector2() = default;

    virtual void NormalizeNonZero(); // 0x41C460
    int Subtract(); // 0x6DC4C0

    uint8_t Vector2_field_0x04[4];
    unsigned int *__pad_0;  // G42.35 C7 体词汇 (0x6dc4d0)

    unsigned int u32_8;  // G42.39 data supply
    unsigned int u32_4;  // G42.39 data supply

    unsigned char __pad_000;  // X10 supply (csp_canon_members)
    int q004;  // X10 supply (member_lookup)
};
#endif  // GAMEMD_E4_Vector2
// 3 methods in IDA
// CSP: Vector3 matched via T1
#if !defined(GAMEMD_E4_Vector3) && !defined(GAMEMD_DEF_Vector3) // G42.33 b3: e4 flat carrier wins in opt-in TUs
#define GAMEMD_DEF_Vector3 1
class Vector3
{
public:
    // design: default destructor (compiler-generated), no callgraph reference
    virtual ~Vector3() = default;

    virtual void Magnitude(); // 0x41C3C0
    int Subtract(); // 0x437160
    virtual void AddAssign(); // 0x43A100

    uint8_t Vector3_field_0x04[4];
    uint8_t Vector3_field_0x08[4];

    void * q040;  // G42.39 data supply

    unsigned char __pad_000;  // X10 supply (csp_canon_members)
    unsigned int u32_4;  // X10 supply (member_lookup)
    unsigned int u32_8;  // X10 supply (member_lookup)
};
#endif  // GAMEMD_E4_Vector3
// 2 methods in IDA
#if !defined(GAMEMD_E4_Vector4) && !defined(GAMEMD_DEF_Vector4) // G42.33 b3: e4 flat carrier wins in opt-in TUs
#define GAMEMD_DEF_Vector4 1
class Vector4
{
public:
    // design: default destructor (compiler-generated), no callgraph reference
    virtual ~Vector4() = default;

    virtual char EraseAt(int a2); // 0x5AD790 G42.35 C7 体签名 (Vector4)
    virtual int EraseAt_Copy(int a2); // 0x63EF70 G42.35 C7 体签名

    uint8_t Vector4_field_0x04[4];

    int q004;  // X10 supply (member_lookup)
    unsigned int u32_10;  // X10 supply (member_lookup)


    unsigned int __pad_0;  // 0x0 [X55 W3 supply (render vocab)]
};
#endif  // GAMEMD_E4_Vector4
// 1 methods in IDA
// CSP: Vector8 matched via T1
// x49 one-definition convergence (utility_ext tree def)
#ifndef GAMEMD_DEF_Vector8
#define GAMEMD_DEF_Vector8 1
class Vector8
{
public:
    // design: default destructor (compiler-generated), no callgraph reference
    virtual ~Vector8() = default;

    virtual int EraseAt(int a2); // 0x589290 G42.35 C7 体签名 (Vector8)


    unsigned int u32_10;  // X10 supply (member_lookup)
    unsigned int u32_4;  // X10 supply (member_lookup)
};
#endif
// 1 methods in IDA
// CSP: VectorClassUInt matched via T1
// x49 one-definition convergence (utility_ext tree def)
#ifndef GAMEMD_DEF_VectorClassUInt
#define GAMEMD_DEF_VectorClassUInt 1
class VectorClassUInt
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~VectorClassUInt() = default;

    void* Constructor(); // 0x42DC50
    unsigned int * Constructor(int a2, int a3);  // 0x42DC50 G42.33 b3 supplied-body sync (2 参形)
    unsigned int * Constructor(int a2);  // G57w19k2 C2661 supply


    int Items;  // G42.39 data supply
    int Capacity;  // G42.39 data supply
    int IsInitialized;  // G42.39 data supply
    int IsAllocated;  // G42.39 data supply
};
#endif
// 7 methods in IDA
#if !defined(GAMEMD_E4_VectorCursor) && !defined(GAMEMD_DEF_VectorCursor) // G57c1: e4 flat carrier wins in e4 TUs (C2011 vs VectorCursor_e4.hpp)
#define GAMEMD_DEF_VectorCursor 1
class VectorCursor
{
public:
    virtual ~VectorCursor() = default;  // 0x76F190

    virtual unsigned int * Construct(int a2, int a3); // 0x76F0C0 G42.35 C9 体签名
    virtual void HasNext(); // 0x76F0E0
    virtual void initCursor(); // 0x76F100
    virtual void updateCursor(); // 0x76F120
    virtual unsigned int * drawCursor(char a2); // 0x76F140 G42.35 C9 体签名
    // +2 more virtual methods

    uint8_t VectorCursor_field_0x04[4];
    unsigned int *__pad_0;  // G42.35 C7 体词汇 (0x76f0d0)
    uint8_t VectorCursor_field_0x08[4];
    uint8_t q00C[4];
    uint8_t q010[4];
    uint8_t q014[4];
    uint8_t q018[4];

    unsigned char __pad_004;  // X10 supply (csp_canon_members)
    void* ptr_0;  // X10 supply (csp_canon_members)

    unsigned int u32_8;  // X10 supply (member_lookup)
};
#endif  // GAMEMD_E4_VectorCursor

// 3 methods in IDA
#if !defined(GAMEMD_E4_VectorCursor_uint_DynamicVectorClass_uint) && !defined(GAMEMD_DEF_VectorCursor_uint_DynamicVectorClass_uint) // G42.33 b3: e4 flat carrier wins in opt-in TUs
#define GAMEMD_DEF_VectorCursor_uint_DynamicVectorClass_uint 1
class VectorCursor_uint_DynamicVectorClass_uint
{
public:
    virtual ~VectorCursor_uint_DynamicVectorClass_uint() = default;  // 0x4F4000

    virtual void AddRef(); // 0x4F3FC0
    virtual void Release(); // 0x4F3FF0
    virtual unsigned int * ddtor(); // 0x4F4000

    uint8_t VectorCursor_uint_DynamicVectorClass_uint_field_0x04[4];
    uint8_t VectorCursor_uint_DynamicVectorClass_uint_field_0x08[4];

    void * q008;  // G42.39 data supply

    unsigned char __pad_000;  // X10 supply (csp_canon_members)
    int q004;  // X10 supply (member_lookup)
    unsigned int u32_8;  // X10 supply (member_lookup)
};
#endif  // GAMEMD_E4_VectorCursor_uint_DynamicVectorClass_uint

} // namespace gamemd
// X25: `fix_truncated_headers` phantom closer removed -- the raw-text brace
// counter double-counted BOTH branches of the GAMEMD_E4_UNIVERSE #if/#else
// guard at the head of this file (each branch opens `namespace gamemd {`;
// only one is ever active), so the "restored" `}` was never missing for
// either preprocessing path.  Re-verified: MSVC active balance = 0 for both
// e4 and tree/e4-disabled paths (cl /Zs probe, .omo/evidence/optimization/x25/).
