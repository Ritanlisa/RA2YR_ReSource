#pragma once

#include "fundamentals.hpp"

namespace gamemd
{

class CDDriveManagerClass
{
public:
    static CDDriveManagerClass* Global(); // IDA: UNMATCHED — no_callgraph_match, no_git_history

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
    virtual ~CD() = default; // IDA: UNMATCHED — defaulted_special_member, default_dtor, no_callgraph_match

    virtual bool ForceAvailable(int nCDNumber); // IDA: NOT_FOUND
    virtual bool InsertCDDialog(); // IDA: NOT_FOUND
    virtual void SwapToDisk(); // IDA: NOT_FOUND

protected:
    CD() = default;

public:
    uint32_t CD_field_04 = 0;
};

} // namespace gamemd
