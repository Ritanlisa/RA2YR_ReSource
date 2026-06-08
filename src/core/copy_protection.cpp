// CopyProtection -- IDA 0x49F5C0/0x49F620/0x49F7A0
// All three functions are bypassed by Ares/Phobos (always return TRUE).
// We follow the same approach for standalone EXE.
#include "gamemd/core/logging.hpp"
#include "gamemd/core/reverse_marker.hpp"

namespace gamemd {

REVERSE(0x49f5c0, "CopyProtection::CheckLauncher: IDA verified", "None" /* not yet completed */) // auto-marked completed
// IDA 0x49F5C0 -- CopyProtection::CheckLauncher (80B)
// Checks for launcher Mutex "48BC11BD..." to verify legitimate launch.
// Bypassed: always returns TRUE for standalone EXE.
bool CopyProtectionCheckLauncher()
{
    LOG_TRACE("CopyProtection::CheckLauncher: bypassed (returning TRUE)");
    return true;
}

REVERSE(0x49f620, "CopyProtection::NotifyLauncher: IDA verified", "None" /* not yet completed */) // auto-marked completed
// IDA 0x49F620 -- CopyProtection::NotifyLauncher (250B)
// Sends custom message 0xBEEF to launcher, waits for response.
// Bypassed: always returns TRUE for standalone EXE.
bool CopyProtectionNotifyLauncher()
{
    LOG_TRACE("CopyProtection::NotifyLauncher: bypassed (returning TRUE)");
    return true;
}

// IDA 0x49F7A0 -- CopyProtection::CheckProtectedData
// Verifies protected data integrity on CD.
// Bypassed: always returns TRUE for standalone EXE.
bool CopyProtectionCheckProtectedData()
{
    LOG_TRACE("CopyProtection::CheckProtectedData: bypassed (returning TRUE)");
    return true;
}

} // namespace gamemd
