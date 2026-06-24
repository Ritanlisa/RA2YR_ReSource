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
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~FileClass() = default;

    // design: virtual function, no binary implementation matched in IDA
    virtual const char* GetFileName() const = 0;
    virtual const char* SetFileName(const char* pFileName) = 0;  // 0x473FC0
    virtual bool CreateFile() = 0;  // 0x7C83E0
    virtual bool DeleteFile() = 0;  // 0x7C84B2
    // design: pure virtual function, no binary implementation
    virtual bool Exists(bool writeShared = false) = 0;
    // design: pure virtual function, no binary implementation
    virtual bool HasHandle() = 0;
    virtual bool Open(FileAccessMode access) = 0;  // 0x65CBF0
    // unmatched: no callgraph reference and no git history record
    virtual bool OpenEx(const char* pFileName, FileAccessMode access) = 0;
    virtual int ReadBytes(void* pBuffer, int nNumBytes) = 0;
    virtual int Seek(int offset, FileSeekMode seek) = 0;  // 0x65CF00
    virtual int GetFileSize() = 0;  // 0x7C8512
    virtual int WriteBytes(void* pBuffer, int nNumBytes) = 0;  // 0x411310
    virtual void Close() = 0;  // 0x65D150
    virtual uint32_t GetFileTime() { return 0; }  // 0x7C855A
    virtual bool SetFileTime(uint32_t fileTime) { return false; }  // 0x7C8524
    // unmatched: no callgraph reference and no git history record
    virtual void CDCheck(uint32_t errorCode, bool bUnk, const char* pFilename) = 0;

    // wrapper: delegates to SetFileTime at 0x7C8524
    void* ReadWholeFile();

    template <typename T>
    bool Read(T& obj, int size = sizeof(T))
    {
        return ReadBytes(&obj, size) == size;
    }

    template <typename T>
    bool Write(T& obj, int size = sizeof(T))
    {
        return WriteBytes(&obj, size) == size;  // 0x411310
    }

protected:
    // design: constexpr operator, compile-time only
    constexpr FileClass() noexcept = default;

public:
    bool SkipCDCheck = false;

private:
    uint8_t padding_5[3] = {};
};

class RawFileClass : public FileClass
{
public:
    virtual ~RawFileClass() override = default;  // 0x65CA00

    // design: inline accessor, inlined at all call sites
    const char* GetFileName() const override { return FileName; }
    // wrapper: delegates to RawFileClass::Dtor at 0x65CA00
    const char* SetFileName(const char* pFileName) override;
    bool CreateFile() override { return false; }   // 0x7C83E0
    bool DeleteFile() override { return false; }   // 0x7C84B2
    // design: inline accessor, inlined at all call sites
    bool Exists(bool writeShared = false) override { return false; }
    // design: inline accessor, inlined at all call sites
    bool HasHandle() override { return Handle != nullptr; }
    // design: inline accessor, inlined at all call sites
    bool Open(FileAccessMode access) override { return false; }
    // unmatched: no callgraph reference and no git history record
    bool OpenEx(const char* pFileName, FileAccessMode access) override { return false; }
    int ReadBytes(void* pBuffer, int nNumBytes) override { return 0; }
    // design: inline accessor, inlined at all call sites
    int Seek(int offset, FileSeekMode seek) override { return 0; }
    int GetFileSize() override { return FileSize; }  // 0x65D0D0
    int WriteBytes(void* pBuffer, int nNumBytes) override { return 0; }  // 0x411310
    void Close() override {}  // 0x65d150
    // unmatched: no callgraph reference and no git history record
    void CDCheck(uint32_t errorCode, bool bUnk, const char* pFilename) override {}

    RawFileClass() = default;
    // wrapper: delegates to FileClass::Close at 0x65D150
    explicit RawFileClass(const char* pFileName);

protected:
    // design: inline accessor, inlined at all call sites
    explicit RawFileClass(const noinit_t&) noexcept : FileClass() {}

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
