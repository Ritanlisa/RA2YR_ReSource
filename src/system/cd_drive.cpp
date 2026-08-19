#include "system/cd_drive.hpp"

namespace gamemd {

// --- CD ---

bool CD::ForceAvailable(int nCDNumber) { return false; }
bool CD::InsertCDDialog() { return false; }
void CD::SwapToDisk() {}

} // namespace gamemd
