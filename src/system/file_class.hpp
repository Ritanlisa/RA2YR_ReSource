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

#ifndef GAMEMD_G2_FileClass_DEF  // G42.57w14 twin-guard (shared; first-include wins)
#define GAMEMD_G2_FileClass_DEF 1
class FileClass
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~FileClass();

    // design: virtual function, no binary implementation matched in IDA
    virtual const char* GetFileName() const = 0;
    virtual const char* SetFileName(const char* pFileName) = 0;  // 0x473FC0
    static int SetFileName(void *aP0, char *aP1);  // 0x473FC0 G42.35 static-form sync (ui/supplied sites 0x5D2ECF/0x5D2F06/0x5D2F11)
    virtual bool CreateFile() = 0;  // 0x7C83E0
    virtual bool DeleteFile() = 0;  // 0x7C84B2
    // design: pure virtual function, no binary implementation
    virtual bool Exists(bool writeShared = false) = 0;
    // design: pure virtual function, no binary implementation
    virtual bool HasHandle() = 0;
    virtual int Open(int a2) = 0;
    // unmatched: no callgraph reference and no git history record
    virtual bool OpenEx(const char* pFileName, FileAccessMode access) = 0;
    virtual int ReadBytes(void* pBuffer, int nNumBytes) = 0;
    virtual int Seek(int offset, FileSeekMode seek) = 0;  // 0x65CF00
    virtual int GetFileSize() = 0;  // kernel32 import thunk (jmp __imp_GetFileSize) - address annotation removed 2026-09-08
    virtual int WriteBytes(void* pBuffer, int nNumBytes) = 0;  // 0x411310
    virtual void Close() = 0;  // 0x65D150
    virtual uint32_t GetFileTime();
    virtual bool SetFileTime(uint32_t fileTime);
    // unmatched: no callgraph reference and no git history record
    virtual void CDCheck(uint32_t errorCode, bool bUnk, const char* pFilename) = 0;

    // wrapper: delegates to SetFileTime (kernel32 import thunk 7C8524)
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

public:  // g57w10 C2039 supplies (raw-til member names used by system/gap2_defs bodies; compile-supply pattern)
    int32_t StreamSize;
    int32_t BufferSize;
    int32_t BufferMaxSize;
    int32_t FileID;
    int32_t BufferCursor;
    int32_t TotalBytesRead;
    int32_t BufferReadSize;
    int32_t TotalBytesWritten;
    int32_t FileBaseOffset;
    int32_t MixFileIndex;
    int32_t BufferOffset;
    int32_t BufferPosition;

protected:
    // design: constexpr operator, compile-time only
    constexpr FileClass() noexcept = default;

public:
    bool SkipCDCheck = false;

private:
    uint8_t padding_5[3] = {};
public:  // --- gap2 auto-generated stub declarations (BEGIN) ---
    int BufferedWriter(char *lpBuffer, DWORD nNumberOfBytesToWrite);  // 0x432050
    int BufferedReader(char *lpBuffer, DWORD nNumberOfBytesToRead);  // 0x4322A0
    int Read(void *a1, int a2);  // g57w20l3 raw call-form supply (system/gap2_defs 0x432144/0x43223f)
    int Flush();  // g57w20l3 raw call-form supply (system/gap2_defs 0x4321cf/0x432246)
    int Load(int a1);  // 0x473D10
    bool OpenFileBufferIO();  // 0x47AAB0
    int OpenWithCDSearch(void* a1);  // 0x47AE10
    int FindFirstWithCD();  // 0x47AF70
    void* SetName(void* a1);  // 0x65CAC0
    bool Open2();  // 0x65CB50
    bool Open2(const char* mode);  // G42.33 b3 supplied-call sync (1 参形)
    int Write2(const void* pBuffer, unsigned long nNumBytes);  // G42.33 b3 supplied-call sync (2 参形)
    int CloseHandle();  // 0x65CCA0
    int Write2();  // 0x65CDD0
    int GetDosTimestamp();  // 0x65D1F0
    bool SetTime(int a1);  // 0x65D240
    void GetFileSizeOp(int a1, int a2);  // 0x65D2B0
    // --- gap2 auto-generated stub declarations (END) ---
    public:  // symbol-anchor
    // === SYMBOL-ANCHOR (BEGIN) ===
    int Write();  // 0x473ae0 -- FileClass::Write
    int Read();  // 0x65cce0 -- FileClass::Read
    int IsReady(int a1);  // 0x431f10 -- File::IsReady
    void* LoadFont();  // 0x433990 -- File::LoadFont
    int Dispatch();  // 0x4cb920 -- File::Dispatch
    void* LoadFileHVA(int a1);  // 0x5bd570 -- File::LoadFileHVA
    int ParseFileHVA(int a1);  // 0x5bd5c0 -- File::ParseFileHVA
    void* LoadPaletteData(int a1);  // 0x625af0 -- File::LoadPaletteData
    bool FindByPrefix(int a1, int a2);  // 0x625db0 -- File::FindByPrefix
    int ParseCSFString();  // 0x734990 -- File::ParseCSFString
    void* LoadFileVXL(int a1, int a2);  // 0x755cd0 -- File::LoadFileVXL
    void* LoadWDT(int a1);  // 0x76ac90 -- File::LoadWDT
    int LoadWDTDecompress(int a1, int a2);  // 0x76b0a0 -- File::LoadWDTDecompress
    int ParseAudioFileRIFF();  // 0x7c12b0 -- File::ParseAudioFileRIFF
    // === SYMBOL-ANCHOR (END) ===
};
#endif  // GAMEMD_G2_FileClass_DEF

#ifndef GAMEMD_G2_RawFileClass_DEF  // g57a5 W2d: twin-definition guard (file_class RawFileClass)
#define GAMEMD_G2_RawFileClass_DEF 1
class RawFileClass : public FileClass
{
public:
    virtual ~RawFileClass() override;  // 0x65CA00

    // design: inline accessor, inlined at all call sites
    const char* GetFileName() const override;
    // wrapper: delegates to RawFileClass::Dtor at 0x65CA00
    const char* SetFileName(const char* pFileName) override;
    bool CreateFile() override;   // 0x7C83E0
    bool DeleteFile() override;   // 0x7C84B2
    // design: inline accessor, inlined at all call sites
    bool Exists(bool writeShared = false) override;
    // design: inline accessor, inlined at all call sites
    bool HasHandle() override;
    // design: inline accessor, inlined at all call sites
    // G42.33: real slot is 0x65CB50 (a genuine RawFileClass vtable entry), but
    // the FileClass base models Open as int(int). Keep it virtual (binary
    // truth) without `override` -- signature intentionally hides the base.
    virtual bool Open(FileAccessMode access);
    // unmatched: no callgraph reference and no git history record
    bool OpenEx(const char* pFileName, FileAccessMode access) override;
    int ReadBytes(void* pBuffer, int nNumBytes) override;
    // design: inline accessor, inlined at all call sites
    int Seek(int offset, FileSeekMode seek) override;
    int GetFileSize() override;  // 0x65D0D0
    int WriteBytes(void* pBuffer, int nNumBytes) override;  // 0x411310
    void Close() override;  // 0x65d150
    // unmatched: no callgraph reference and no git history record
    void CDCheck(uint32_t errorCode, bool bUnk, const char* pFilename) override;

    RawFileClass() = default;
    // wrapper: delegates to FileClass::Close at 0x65D150
    explicit RawFileClass(const char* pFileName);

protected:
    // design: inline accessor, inlined at all call sites
    explicit RawFileClass(const noinit_t&) noexcept;

public:
    FileAccessMode FileAccess = FileAccessMode::None;
    int FilePointer = 0;
    int FileSize = 0;
    void* Handle = nullptr;
    const char* FileName = nullptr;  // data: 0x8221f8
    int16_t FileTimeDateLo = 0;
    int16_t FileTimeDateHi = 0;
    bool FileNameAllocated = false;

private:
    uint8_t padding_21[3] = {};

public:  // --- gap2 auto-generated stub declarations (BEGIN) ---
    void* Construct(int a1);  // 0x65CA80
    void* QueryInterface(int a1);  // 0x65D3A0
    bool Write();  // 0x65D420
    int Dtor(); // N_fix R5 supply (cache truth)
    // --- gap2 auto-generated stub declarations (END) ---
};
#endif  // GAMEMD_G2_RawFileClass_DEF


} // namespace gamemd
