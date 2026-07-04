#include "audiosample.hpp"

// 0x004024A0
int  AudioSample::ResetState(uint32_t *this)
{
    int v2; // eax
    int v3; // ecx
    int result; // eax
    if ( (*(uint8_t *)(this + 41) & 8) != 0 )
    v2 = *(this + 41);
    LOBYTE(v2) = v2 & 0xF7;
    *(this + 41) = v2;
    *(this + 87) = AudioController::AdvanceQueue;
    *(this + 88) = AudioController::UpdatePlayback;
    *(this + 89) = AudioController::CleanupStream;
    *(this + 44) = 0;
    *(this + 45) = 0;
    *(this + 46) = 0;
    *(this + 47) = 0;
    *(this + 48) = 0;
    *(this + 3) = 1;
    *(this + 42) = 0;
    *(this + 41) = 0;
    *(this + 40) = 0;
    v3 = dword_87DE30;
    *(this + 36) = 0;
    *(this + 37) = v3;
    *(this + 38) = 0;
    *(this + 39) = 0;
    result = AudioMixer::Init(this + 4);
    *(this + 90) = 0;
    return result;
}

