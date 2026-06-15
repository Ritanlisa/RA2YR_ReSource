#pragma once

#include "..\fundamentals.hpp"

namespace gamemd
{

class CDDriveManagerClass
{
public:
    static CDDriveManagerClass* Global();

    int GetCDNumber();

protected:
    CDDriveManagerClass() = default;

public:
    int CDDriveNames[26] = {};
    int NumCDDrives = 0;
    uint32_t driveSector = 0;
};

class CD
{
public:
    virtual ~CD() = default;

    virtual bool ForceAvailable(int nCDNumber) { return false; }
    virtual bool InsertCDDialog() { return false; }
    virtual void SwapToDisk() {}

protected:
    CD() = default;

public:
    uint32_t driveTrack = 0;
};

} // namespace gamemd
