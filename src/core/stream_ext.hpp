#pragma once

#include <cstdint>
#include <windows.h>

namespace gamemd
{

// ============================================================================
// StreamClass — generic I/O stream base (10 methods)
// IDA: WriteBytes, ReadAndSeek, Set2
// ============================================================================
class StreamClass
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~StreamClass() = default;

    // IDA 0x48B2A0 area
    virtual int32_t WriteBytes(const void* data, int32_t size);  // 0x411310
    // IDA 0x48B2A0 area
    virtual int32_t ReadAndSeek(void* buf, int32_t size);  // 0x4114B0
    // IDA 0x48B2A0 area
    virtual void Set2(int32_t val);  // 0x45AEA0
    // IDA 0x48B2A0 area
    // design: virtual function, no binary implementation matched in IDA
    virtual int32_t Read(void* buf, int32_t size);
    // IDA 0x48B2A0 area
    // design: virtual function, no binary implementation matched in IDA
    virtual int32_t Write(const void* data, int32_t size);
    // IDA 0x48B2A0 area
    // design: virtual function, no binary implementation matched in IDA
    virtual int32_t Seek(int32_t offset);
    // IDA 0x48B2A0 area
    // design: virtual function, no binary implementation matched in IDA
    virtual int32_t GetSize();
    // IDA 0x48B2A0 area
    virtual void Flush();
    // IDA 0x48B2A0 area
    virtual void Close();
    // IDA 0x48B2A0 area
    // design: virtual function, no binary implementation matched in IDA
    virtual int32_t GetPosition();

    void*       m_Data;         // 0x00
    int32_t     m_Position;     // 0x04
    int32_t     m_Size;         // 0x08
    int32_t     StreamClass_field_0C;       // 0x0C
    public:  // funcs-move
    // === FUNCS-MOVE (BEGIN) ===
    int ResetPosition(int a1, int a2);  // 0x55a710
    // === FUNCS-MOVE (END) ===
};

// ============================================================================
// Stream — stream wrapper / pipe (10 methods)
// IDA: FlushAndReset, GetChecked, ReadIntArray
// ============================================================================
class Stream
{
public:
    Stream() = default;
    // unmatched: no callgraph reference and no git history record
    ~Stream();

    // IDA 0x48B2A0 area
    void FlushAndReset();  // 0x439110
    // IDA 0x48B2A0 area
    int32_t GetChecked() const;  // 0x45A050
    // IDA 0x48B2A0 area
    void ReadIntArray(int32_t* arr, int32_t count);  // 0x49FB70
    // IDA 0x48B2A0 area
    int32_t ReadInt();  // 0x49FB70
    // IDA 0x48B2A0 area
    void WriteInt(int32_t val);
    // IDA 0x48B2A0 area
    void WriteBytes(const void* data, int32_t size);  // 0x411310
    // IDA 0x48B2A0 area
    int32_t ReadBytes(void* buf, int32_t size);
    // IDA 0x48B2A0 area
    void Seek(int32_t offset);
    // IDA 0x48B2A0 area
    int32_t GetPosition();
    // IDA 0x48B2A0 area
    int32_t GetSize();

    StreamClass* m_Stream;      // 0x00
    int32_t     Stream_field_04;       // 0x04
    int32_t     Stream_field_08;       // 0x08
    int32_t     Stream_field_0C;       // 0x0C
    int32_t     Stream_field_10;       // 0x10
public:  // --- gap2 auto-generated stub declarations (BEGIN) ---
    int WriteBlock(int a1, int a2, int a3);  // 0x5F1BF0
    int ReadPacket();  // 0x5F1C60
    int ReadOLEObjects();  // 0x67C690
    int GetField();  // 0x7BCAE0
    void CopyFromTemplate();  // 0x7BE640
    // --- gap2 auto-generated stub declarations (END) ---
    public:  // symbol-anchor
    // === SYMBOL-ANCHOR (BEGIN) ===
    int WriteIntArray(int a1);  // 0x67a4a0 -- Stream::WriteIntArray
    // === SYMBOL-ANCHOR (END) ===
};

// ============================================================================
// AsyncIO — asynchronous I/O operations (3 methods)
// IDA: Shutdown, Read, WaitCompletion
// ============================================================================
class AsyncIO
{
public:
    // IDA 0x48B2A0 area
    static void Shutdown();  // 0x5BF450
    // IDA 0x48B2A0 area
    static int32_t Read(const char* filename, void* buffer, int32_t size);  // 0x5BF500
    // IDA 0x48B2A0 area
    static void WaitCompletion();  // 0x774BC0

    static bool    s_Initialized;  // 0x00
    static uint32_t s_Handle;      // 0x04
};

// ============================================================================
// IStream — COM IStream wrapper (1 method)
// IDA: Read
// ============================================================================
class IStream
{
public:
    // IDA 0x48B2A0 area
    virtual HRESULT Read(void* pv, uint32_t cb, uint32_t* pcbRead) = 0;  // 0x4A3020

    void*       IStream_field_00;       // 0x00
};

// ============================================================================
// BulkData — bulk data transfer for missions (1 method)
// IDA: InitMissionHashing
// ============================================================================
class BulkData
{
public:
    // IDA 0x48B2A0 area
    static void InitMissionHashing();  // 0x697AD0

    static int32_t  s_DataSize; // 0x00
};

// ============================================================================
// Block — memory block operations (1 method)
// IDA: Copy
// ============================================================================
class Block
{
public:
    // IDA 0x48B2A0 area
    static void Copy(void* dst, const void* src, int32_t size);  // 0x6260D0

    int32_t     Block_field_00;       // 0x00
};

// ============================================================================
// Byte — byte-level operations (1 method)
// IDA: Zero
// ============================================================================
class Byte
{
public:
    // IDA 0x48B2A0 area
    static void Zero(void* ptr, int32_t count);  // 0x4F4C20

    int32_t     Byte_field_00;       // 0x00
};

// ============================================================================
// TextBuffer — text buffer class (1 method)
// IDA: Init 0x5BCC90
// ============================================================================
class TextBuffer
{
public:
    // IDA 0x5BCC90
    static void Init(int32_t buffer);  // 0x5BCC90

    static char*    s_Buffer;       // 0x00
    static int32_t  s_BufferSize;   // 0x04
};


// === Batch-generated MISSING class stubs ===

// 11 methods in IDA
class Buffer
{
public:
    // design: default destructor (compiler-generated), no callgraph reference
    virtual ~Buffer() = default;

    virtual void CreateDirectSound(); // 0x40A340
    virtual void UpdateVolumeSettings(); // 0x40A6D0
    virtual void CompareEqual(); // 0x40CCD0
    virtual void FillCircularBufferScroll(); // 0x410ED0
    virtual void Cleanup(); // 0x42F7C0
    // +6 more virtual methods

    uint8_t Buffer_field_0x04[4];
    uint8_t Buffer_field_0x08[4];
    uint8_t Buffer_field_0x0C[4];
    uint8_t Buffer_field_0x10[4];
    uint8_t Buffer_field_0x14[4];
    uint8_t Buffer_field_0x18[4];
    uint8_t Buffer_field_0x1C[4];
    uint8_t Buffer_field_0x20[4];
    uint8_t Buffer_field_0x24[4];
    uint8_t Buffer_field_0x28[4];
};
// 1 methods in IDA
class BufferClass
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~BufferClass() = default;

    virtual void CompareEqual(); // 0x477C30

};
// 3 methods in IDA
class BufferIO
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~BufferIO() = default;

    virtual void FindActiveChannel(); // 0x431170
    virtual void Flush(); // 0x431DD0
    virtual void Cleanup(); // 0x434990

    uint8_t BufferIO_field_0x04[4];
    uint8_t BufferIO_field_0x08[4];
};
// 26 methods in IDA
class CStreamClass
{
public:
    virtual ~CStreamClass() = default;  // 0x4A3110

    virtual void AddRef(); // 0x4A2930
    virtual void Release(); // 0x4A2950
    virtual void QueryInterface(); // 0x4A2990
    virtual void StubReturnNullPointer(); // 0x4A2A20
    virtual void StreamRead(); // 0x4A2AB0
    // +21 more virtual methods

    uint8_t CStreamClass_field_0x04[4];
    uint8_t CStreamClass_field_0x08[4];
    uint8_t CStreamClass_field_0x0C[4];
    uint8_t CStreamClass_field_0x10[4];
    uint8_t CStreamClass_field_0x14[4];
    uint8_t CStreamClass_field_0x18[4];
    uint8_t CStreamClass_field_0x1C[4];
    uint8_t CStreamClass_field_0x20[4];
    uint8_t CStreamClass_field_0x24[4];
    uint8_t CStreamClass_field_0x28[4];
    uint8_t CStreamClass_field_0x2C[4];
    uint8_t CStreamClass_field_0x30[4];
    uint8_t CStreamClass_field_0x34[4];
    uint8_t CStreamClass_field_0x38[4];
    uint8_t CStreamClass_field_0x3C[4];
    uint8_t CStreamClass_field_0x40[4];
    uint8_t CStreamClass_field_0x44[4];
    uint8_t CStreamClass_field_0x48[4];
    uint8_t CStreamClass_field_0x4C[4];
    uint8_t CStreamClass_field_0x50[4];
public:  // --- gap2 auto-generated stub declarations (BEGIN) ---
    bool IsEmpty();  // 0x4A31F0
    void ClearBuffer();  // 0x4A4AD0
    int PointerToIndex(int a1);  // 0x4A4B00
    int CopyItems(int a1, void* a2);  // 0x4A4CB0
    int FindItem(void* a1);  // 0x4A4D60
    void* Constructor_VectorClass__DDSURFACEDESC___(int a1);  // 0x4A4DE0
    // --- gap2 auto-generated stub declarations (END) ---
    public:  // funcs-move
    // === FUNCS-MOVE (BEGIN) ===
    int CopyStreamToBuffer();  // 0x4a2cd0
    int Read(int a1, int a2, int a3, int a4, int a5);  // 0x4a2e00
    int Write(int a1, int a2, int a3);  // 0x4a2e50
    int Seek(int a1, int a2, int a3, int a4, int a5, int a6);  // 0x4a2ea0
    int SetSize(int a1, int a2);  // 0x4a2ee0
    int Commit(int a1);  // 0x4a2f10
    int Revert(int a1, int a2, int a3, int a4, int a5, int a6);  // 0x4a2f40
    int Stat(int a1, int a2);  // 0x4a2ff0
    int IStreamQueryInterface(int a1, int a2, int a3);  // 0x4a3220
    int IStreamAddRef();  // 0x4a3230
    int IStreamRelease();  // 0x4a3240
    // === FUNCS-MOVE (END) ===
};
// 1 methods in IDA
class StreamObj
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~StreamObj() = default;

    virtual void Release(); // 0x410E50

};
// 6 methods in IDA
class StreamWrapper
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~StreamWrapper() = default;

    virtual void Read(); // 0x5C5D40
    virtual void Write(); // 0x5C5D90
    virtual void Seek(); // 0x5C5DD0
    virtual void readData(); // 0x5D6620
    virtual void StubReturnFalse(); // 0x6241E0
    // +1 more virtual methods

    uint8_t StreamWrapper_field_0x04[4];
    uint8_t StreamWrapper_field_0x08[4];
    uint8_t StreamWrapper_field_0x0C[4];
    uint8_t StreamWrapper_field_0x10[4];
    uint8_t StreamWrapper_field_0x14[4];
public:  // --- gap2 auto-generated stub declarations (BEGIN) ---
    void* QueryInterface(int a1);  // 0x7B0440
    // --- gap2 auto-generated stub declarations (END) ---
};
// 4 methods in IDA
class Text
{
public:
    // design: default destructor (compiler-generated), no callgraph reference
    virtual ~Text() = default;

    virtual void Layout(); // 0x433CF0
    virtual void MeasureWidth(); // 0x433ED0
    virtual void DrawCharAtGrid(); // 0x5BD3D0
    virtual void DrawRepeated(); // 0x5BD490

    uint8_t Text_field_0x04[4];
    uint8_t Text_field_0x08[4];
    uint8_t Text_field_0x0C[4];
};
// 1 methods in IDA
class TextGroup
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~TextGroup() = default;

    virtual void SetRect(); // 0x433CA0

};

} // namespace gamemd
