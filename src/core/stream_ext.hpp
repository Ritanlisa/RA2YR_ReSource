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
    virtual ~StreamClass() = default;

    // IDA 0x48B2A0 area
    virtual int32_t WriteBytes(const void* data, int32_t size);
    // IDA 0x48B2A0 area
    virtual int32_t ReadAndSeek(void* buf, int32_t size);
    // IDA 0x48B2A0 area
    virtual void Set2(int32_t val);
    // IDA 0x48B2A0 area
    virtual int32_t Read(void* buf, int32_t size);
    // IDA 0x48B2A0 area
    virtual int32_t Write(const void* data, int32_t size);
    // IDA 0x48B2A0 area
    virtual int32_t Seek(int32_t offset);
    // IDA 0x48B2A0 area
    virtual int32_t GetSize();
    // IDA 0x48B2A0 area
    virtual void Flush();
    // IDA 0x48B2A0 area
    virtual void Close();
    // IDA 0x48B2A0 area
    virtual int32_t GetPosition();

    void*       m_Data;         // 0x00
    int32_t     m_Position;     // 0x04
    int32_t     m_Size;         // 0x08
    int32_t     StreamClass_field_0C;       // 0x0C
};

// ============================================================================
// Stream — stream wrapper / pipe (10 methods)
// IDA: FlushAndReset, GetChecked, ReadIntArray
// ============================================================================
class Stream
{
public:
    Stream() = default;
    ~Stream();

    // IDA 0x48B2A0 area
    void FlushAndReset();
    // IDA 0x48B2A0 area
    int32_t GetChecked() const;
    // IDA 0x48B2A0 area
    void ReadIntArray(int32_t* arr, int32_t count);
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
};

// ============================================================================
// AsyncIO — asynchronous I/O operations (3 methods)
// IDA: Shutdown, Read, WaitCompletion
// ============================================================================
class AsyncIO
{
public:
    // IDA 0x48B2A0 area
    static void Shutdown();
    // IDA 0x48B2A0 area
    static int32_t Read(const char* filename, void* buffer, int32_t size);
    // IDA 0x48B2A0 area
    static void WaitCompletion();

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
    virtual HRESULT Read(void* pv, uint32_t cb, uint32_t* pcbRead) = 0;

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
    static void InitMissionHashing();

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
    static void Copy(void* dst, const void* src, int32_t size);

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
    static void Zero(void* ptr, int32_t count);

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
    static void Init(int32_t buffer);

    static char*    s_Buffer;       // 0x00
    static int32_t  s_BufferSize;   // 0x04
};

} // namespace gamemd
