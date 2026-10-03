#pragma once

#include <cstdint>
#include <windows.h>

namespace gamemd
{

// ============================================================================
// StreamClass — generic I/O stream base (10 methods)
// IDA: WriteBytes, ReadAndSeek, Set2
// ============================================================================
// CSP: StreamClass matched via T1
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
    int32_t ReadInt();
    // IDA 0x48B2A0 area
    void WriteInt(int32_t val);
    // IDA 0x48B2A0 area
    void WriteBytes(const void* data, int32_t size);
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
    unsigned int u32_58;  // 0x58
    unsigned int u32_38;  // 0x38
    void* Active0;  // 0x0 (no offset truth)
    void* PacketsReceived;  // 0x0 (no offset truth)
    void* PacketsReceived6;  // 0x0 (no offset truth)
    void* Active;  // 0x0 (no offset truth)
    unsigned int u32_3C;  // 0x3C
    unsigned int u32_54;  // 0x54
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
    unsigned int u32_14;  // 0x14
    unsigned int u32_6C;  // 0x6C
    unsigned int u32_70;  // 0x70
};

// ============================================================================
// AsyncIO — asynchronous I/O operations (3 methods)
// IDA: Shutdown, Read, WaitCompletion
// ============================================================================
class AsyncIO
{
public:
    // IDA 0x48B2A0 area
     char Shutdown();  // 0x5BF450
    // IDA 0x48B2A0 area
     int32_t Read(const char* filename, void* buffer, int32_t size);  // 0x5BF500
    // IDA 0x48B2A0 area
    int WaitCompletion(int a2);

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
     void Copy(void* dst, const void* src, int32_t size);  // 0x6260D0

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
     _BYTE * Zero(void* ptr, int32_t count);  // 0x4F4C20

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
     _DWORD * Init(int32_t buffer);  // 0x5BCC90

    static char*    s_Buffer;       // 0x00
    static int32_t  s_BufferSize;   // 0x04
};


// === Batch-generated MISSING class stubs ===

// 11 methods in IDA
#ifndef GAMEMD_E4_Buffer  // G42.33 b3: e4 flat carrier wins in opt-in TUs
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
#endif  // GAMEMD_E4_Buffer
// 1 methods in IDA
class BufferClass
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~BufferClass() = default;

    char CompareEqual(int a2);  // 0x477C30 G42.33 b3 supplied-body sync (1 参形)
    unsigned int m_8;  // G42.33 b3 flat-carrier vocab
    unsigned char m_1[16];  // G42.33 b3 flat-carrier vocab

};
// 3 methods in IDA
// CSP: BufferIO matched via T1
class BufferIO
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~BufferIO() = default;

    virtual void FindActiveChannel(); // 0x431170
    int FindActiveChannel(int a2);  // 0x431170 G42.33 b3 supplied-body sync (1 参形)
    virtual void Flush(); // 0x431DD0
    virtual void Cleanup(); // 0x434990
    int Cleanup(int a2);  // 0x434990 G42.33 b3 supplied-body sync (1 参形)

    uint8_t BufferIO_field_0x04[4];
    uint8_t BufferIO_field_0x08[4];
};
// 26 methods in IDA
class CStreamClass
{
public:
    virtual ~CStreamClass() = default;  // 0x4A3110

    virtual LONG AddRef();  // 0x4A2930 G42.33 b3 体签名
    virtual LONG Release();  // 0x4A2950 G42.33 b3 体签名
    virtual int QueryInterface(const void *a2, unsigned int *a3);  // 0x4A2990 G42.33 b3 体签名
    virtual int StubReturnNullPointer(int (__stdcall ***a2)(unsigned int, void *, unsigned int));  // 0x4A2A20 G42.33 b3 体签名
    virtual int StreamRead(unsigned int *a2);  // 0x4A2AB0 G42.33 b3 体签名
    // +21 more virtual methods

    unsigned int CStreamClass_field_0x04;  // G42.33 b3 标量形
    unsigned int CStreamClass_field_0x08;  // G42.33 b3 标量形
    LONG CStreamClass_field_0x0C;  // G42.33 b3 标量形 (InterlockedIncrement)
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
    unsigned char m_1[4];  // 0x1
    unsigned int m_C;  // 0xC
    int m_8;  // 0x8
    unsigned char __pad_0;  // 0x0
    unsigned int m_10;  // 0x10
public:  // --- gap2 auto-generated stub declarations (BEGIN) ---
    BOOL IsEmpty(int a2);
    void ClearBuffer();  // 0x4A4AD0
    int PointerToIndex(int a1);  // 0x4A4B00
    int CopyItems(int a1, void* a2);  // 0x4A4CB0
    int FindItem(_DWORD *a2);
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

    virtual int Release(); // 0x410E50

};
// 6 methods in IDA
// CSP: StreamWrapper matched via T1
class StreamWrapper
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~StreamWrapper() = default;

    virtual char Read(); // 0x5C5D40 G42.35 C7 体签名
    virtual bool Write(); // 0x5C5D90 G42.35 C7 体签名
    virtual LRESULT Seek(HWND hWnd, int a3); // 0x5C5DD0 G42.35 C7 体签名
    virtual int readData(int a2); // 0x5D6620 G42.35 C7 体签名
    virtual char StubReturnFalse(); // 0x6241E0 G42.35 C7 体签名
    // +1 more virtual methods

    uint8_t StreamWrapper_field_0x04[4];
    uint8_t StreamWrapper_field_0x08[4];
    uint8_t StreamWrapper_field_0x0C[4];
    uint8_t StreamWrapper_field_0x10[4];
    uint8_t StreamWrapper_field_0x14[4];
public:  // --- gap2 auto-generated stub declarations (BEGIN) ---
    void* QueryInterface(int a1);  // 0x7B0440
    // --- gap2 auto-generated stub declarations (END) ---
    unsigned char __pad_0;  // 0x0
};
// 4 methods in IDA
#ifndef GAMEMD_E4_Text  // G42.33 b3: e4 flat carrier wins in opt-in TUs
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
#endif  // GAMEMD_E4_Text
// 1 methods in IDA
class TextGroup
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~TextGroup() = default;

    int SetRect(); // 0x433CA0
    unsigned int * SetRect(unsigned int *a2);  // 0x433CA0 G42.33 b3 supplied-body sync (1 参形)

};

} // namespace gamemd
