#pragma once

#include "fundamentals.hpp"

namespace gamemd
{

class CDDriveManagerClass
{
public:
    // unmatched: no callgraph reference and no git history record
    static CDDriveManagerClass* Global();

    int GetCDNumber();

protected:
    CDDriveManagerClass() = default;

public:
    int CDDriveNames[26] = {};
    int NumCDDrives = 0;
    uint32_t CDDriveManagerClass_field_6C = 0;
};

class CD
{
public:
    // design: default destructor (compiler-generated), no callgraph reference
    virtual ~CD() = default;

    // design: virtual function, no binary implementation matched in IDA
    virtual bool ForceAvailable(int nCDNumber);
    // design: virtual function, no binary implementation matched in IDA
    virtual bool InsertCDDialog();
    // design: virtual function, no binary implementation matched in IDA
    virtual void SwapToDisk();

protected:
    CD() = default;

public:
    uint32_t CD_field_04 = 0;
public:  // --- gap2 auto-generated stub declarations (BEGIN) ---
    int AlwaysAvailable(int a1);  // 0x4790E0
    bool NeverAsk(int a1);  // 0x479110
    int SetCurrentInstance();  // 0x47ADA0
    int CheckDiscPresence(int a1);  // 0x4A8270
    bool ShowDiscPromptDialog();  // 0x623CD0 (x145b: 原 CreateDialog 与 winuser.h 函数式宏撞名 C2059; IDA 名 CD::CreateDialog)
    // --- gap2 auto-generated stub declarations (END) ---

    unsigned int u32_10;  // X10 supply (member_lookup)
    unsigned int u32_4;  // X10 supply (member_lookup)
};

} // namespace gamemd
