#pragma once

#include <cstdint>

namespace gamemd {

// IDA: GameOptionsClass — manages movie unlock state and movie list population
class GameOptionsClass
{
public:
    void UnlockMovieIfNeeded(const char* movieName);
    void PopulateMovieList();

    int32_t gameOptField_00;
    int32_t gameOptField_04;
    int32_t gameOptField_08;
    int32_t gameOptField_0C;
    int32_t gameOptField_10;
    int32_t gameOptField_14;
    int32_t gameOptField_18;
    int32_t gameOptField_1C;
    int32_t gameOptField_20;
    int32_t gameOptField_24;
    int32_t gameOptField_28;
    int32_t gameOptField_2C;
    int32_t gameOptField_30;
    int32_t gameOptField_34;
    int32_t gameOptField_38;
    int32_t gameOptField_3C;
    int32_t gameOptField_40;
    int32_t gameOptField_44;
    int32_t gameOptField_48;
    int32_t maxMovieUnlockIndex;   // +0x4C (dword 19), max unlocked index for movie list A (off_832CA0)
    int32_t maxMovieUnlockIndexB;  // +0x50 (dword 20), max unlocked index for movie list B (off_832C30)
};

} // namespace gamemd
