#pragma once

#include "fundamentals.hpp"

namespace gamemd
{

enum class FileAccessMode : unsigned int
{
    None      = 0,
    Read      = 1,
    Write     = 2,
    ReadWrite = 3
};

enum class FileSeekMode : unsigned int
{
    Set     = 0,
    Current = 1,
    End     = 2
};

class FileClass
{
public:
    virtual ~FileClass() = default; // IDA: NOT_FOUND

    virtual const char* GetFileName() const = 0; // IDA: NOT_FOUND
    virtual const char* SetFileName(const char* pFileName) = 0;  // 0x473FC0
    virtual bool CreateFile() = 0;  // IDA: 0x7C83E0
    virtual bool DeleteFile() = 0;  // IDA: 0x7C84B2
    virtual bool Exists(bool writeShared = false) = 0; // IDA: NOT_FOUND
    virtual bool HasHandle() = 0; // IDA: NOT_FOUND
    virtual bool Open(FileAccessMode access) = 0;  // 0x65CBF0
    virtual bool OpenEx(const char* pFileName, FileAccessMode access) = 0; // IDA: UNMATCHED — no_callgraph_match, no_git_history
    virtual int ReadBytes(void* pBuffer, int nNumBytes) = 0;  // 0x774B30
    virtual int Seek(int offset, FileSeekMode seek) = 0;  // 0x65CF00
    virtual int GetFileSize() = 0;  // 0x7C8512
    virtual int WriteBytes(void* pBuffer, int nNumBytes) = 0;  // 0x411310
    virtual void Close() = 0;  // 0x65D150
    virtual uint32_t GetFileTime() { return 0; }  // IDA: 0x7C855A
    virtual bool SetFileTime(uint32_t fileTime) { return false; }  // IDA: 0x7C8524
    virtual void CDCheck(uint32_t errorCode, bool bUnk, const char* pFilename) = 0; // IDA: UNMATCHED — no_callgraph_match, no_git_history

    void* ReadWholeFile(); // IDA: NOT_FOUND

    template <typename T>
    bool Read(T& obj, int size = sizeof(T))
    {
        return ReadBytes(&obj, size) == size;  // IDA: 0x774B30
    }

    template <typename T>
    bool Write(T& obj, int size = sizeof(T))
    {
        return WriteBytes(&obj, size) == size;  // IDA: 0x411310
    }

protected:
    constexpr FileClass() noexcept = default; // IDA: NOT_FOUND

public:
    bool SkipCDCheck = false;

private:
    uint8_t padding_5[3] = {};
};

class RawFileClass : public FileClass
{
public:
    virtual ~RawFileClass() override = default;  // 0x65CA00

    const char* GetFileName() const override { return FileName; } // IDA: NOT_FOUND
    const char* SetFileName(const char* pFileName) override; // IDA: NOT_FOUND
    bool CreateFile() override { return false; }   // IDA: 0x7C83E0
    bool DeleteFile() override { return false; }   // IDA: 0x7C84B2
    bool Exists(bool writeShared = false) override { return false; } // IDA: NOT_FOUND
    bool HasHandle() override { return Handle != nullptr; } // IDA: NOT_FOUND
    bool Open(FileAccessMode access) override { return false; } // IDA: NOT_FOUND
    bool OpenEx(const char* pFileName, FileAccessMode access) override { return false; } // IDA: UNMATCHED — no_callgraph_match, no_git_history
    int ReadBytes(void* pBuffer, int nNumBytes) override { return 0; }  // IDA: 0x774B30
    int Seek(int offset, FileSeekMode seek) override { return 0; } // IDA: NOT_FOUND
    int GetFileSize() override { return FileSize; }  // IDA: 0x65D0D0
    int WriteBytes(void* pBuffer, int nNumBytes) override { return 0; }  // IDA: 0x411310
    void Close() override {}
    void CDCheck(uint32_t errorCode, bool bUnk, const char* pFilename) override {} // IDA: UNMATCHED — no_callgraph_match, no_git_history

    RawFileClass() = default;
    explicit RawFileClass(const char* pFileName); // IDA: NOT_FOUND

protected:
    explicit RawFileClass(const noinit_t&) noexcept : FileClass() {} // IDA: NOT_FOUND

public:
    FileAccessMode FileAccess = FileAccessMode::None;
    int FilePointer = 0;
    int FileSize = 0;
    void* Handle = nullptr;
    const char* FileName = nullptr;
    int16_t FileTimeDateLo = 0;
    int16_t FileTimeDateHi = 0;
    bool FileNameAllocated = false;

private:
    uint8_t padding_21[3] = {};
};

} // namespace gamemd
