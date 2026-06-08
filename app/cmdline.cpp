// IDA: ParseCommandLine @ 0x52F620 (1531B, 93 basic blocks)
// Faithful translation from IDA decompilation

#include <windows.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include "cmdline.hpp"
#include "gamemd/core/reverse_marker.hpp"

namespace gamemd {

// IDA: ParseCommandLine @ 0x52F620
REVERSE(0x52F620, "ParseCommandLine: full CLI parser (1531B)", false)
REVERSE(0x52f620, "ParseCommandLine: IDA verified", false) // auto-marked completed
int ParseCommandLine(int argc, char** argv)
{
    // 0x52F634: ResetIntroFlags(&g_IntroMovieObject)
    ResetIntroFlags(&g_IntroMovieObject);

    // 0x52F63E: ArmageddonMode = 0
    ArmageddonMode = false;

    // 0x52F644: if argc <= 1, return 1
    if (argc <= 1)
        return 1;

    char** arg = argv + 1;

    for (int i = 1; i < argc; ++i, ++arg) {
        char* tok = _strupr(*arg);

        // 0x52F66E: -JABBER
        if (_stricmp(tok, "-JABBER") == 0) {
            RestartNetworkSession(1);
            continue;
        }

        // 0x52F68F: -STR
        if (_stricmp(tok, "-STR") == 0) {
            ToggleNetworkSession(1);
            continue;
        }

        // 0x52F6B0: -NOSTR
        if (_stricmp(tok, "-NOSTR") == 0) {
            ToggleNetworkSession(0);
            continue;
        }

        // 0x52F6CE: -NOAUDIO
        if (_stricmp(tok, "-NOAUDIO") == 0) {
            g_Audio_MixerEnabled = 0;
            continue;
        }

        // 0x52F6EB: -RECORD
        if (_stricmp(tok, "-RECORD") == 0) {
            dword_A8F784 = 1;
            continue;
        }

        // 0x52F70C: -PLAY
        if (_stricmp(tok, "-PLAY") == 0) {
            dword_A8F784 = 2;
            continue;
        }

        // 0x52F76B: -? / -HELP / -OPT / -OPTIONS
        if (_stricmp(tok, "-?") == 0
            || _stricmp(tok, "-HELP") == 0
            || _stricmp(tok, "-OPT") == 0
            || _stricmp(tok, "-OPTIONS") == 0) {
            _putws(GetCSFString(L"TXT_OPTION_HELP_01", "Init.CPP", 3414));
            _putws(GetCSFString(L"TXT_OPTION_HELP_02", "Init.CPP", 3415));
            _putws(GetCSFString(L"TXT_OPTION_HELP_03", "Init.CPP", 3416));
            _putws(GetCSFString(L"TXT_OPTION_HELP_04", "Init.CPP", 3417));
            _putws(GetCSFString(L"TXT_OPTION_HELP_05", "Init.CPP", 3418));
            _putws(GetCSFString(L"TXT_OPTION_HELP_06", "Init.CPP", 3419));
            continue;
        }

        // 0x52F787: -NOINTRO (hash 0xD945A2A2 = -648255326)
        if (HashString(tok) == -648255326) {
            g_IntroMovieObject |= 4;
            continue;
        }

        // 0x52F7A0: -CD
        if (strstr(tok, "-CD")) {
            byte_89E3A0 = true;
            FindGameDirectoryCD(tok + 3);
            continue;
        }

        // 0x52F7C6: -DESTNET=x.x.x.x
        if (strstr(tok, "-DESTNET")) {
            int count = 0;
            unsigned char bytes[16] = {};
            char* part = strtok(tok + 8, ".");
            while (part && count < 16) {
                sscanf(part, "%hhx", &bytes[count]);
                ++count;
                part = strtok(nullptr, ".");
            }
            if (count >= 4) {
                dword_A8D5FC = true;
                uint32_t ipAddr = (bytes[3] << 24) | (bytes[2] << 16) | (bytes[1] << 8) | bytes[0];
                dword_A8D600 = ipAddr;
                dword_A8D604 = ipAddr;
                dword_A8D608 = ipAddr;
            }
            continue;
        }

        // 0x52F885: -SOCKET
        if (strstr(tok, "-SOCKET")) {
            int val = atoi(&tok[strlen("SOCKET")]) + 0x4000;
            if (val >= 0x4000)
                NetworkGetField(val);
            continue;
        }

        // 0x52F8D6: SessionClassSetInstance(0)
        SessionClassSetInstance(0);

        // 0x52F8E1: -MPDEBUG
        if (strstr(tok, "-MPDEBUG")) {
            byte_B04880 = true;
            byte_A8B8B4 = true;
        }

        // 0x52F901: -DROP=
        if (strstr(tok, "-DROP=")) {
            int dropVal = (unsigned short)atoi(&tok[strlen("-DROP=")]);
            SessionClassSetInstance(dropVal);
            continue;
        }

        // 0x52F93F: -SPEEDCONTROL
        if (strstr(tok, "-SPEEDCONTROL"))
            byte_A8EDDC = true;

        // 0x52F958: -DLINK1
        if (strstr(tok, "-DLINK1"))
            dword_B77E18 = 1;

        // 0x52F974: -NETGEAR
        if (strstr(tok, "-NETGEAR"))
            dword_B77E18 = 2;

        // 0x52F98C: -NOROUTER
        if (strstr(tok, "-NOROUTER"))
            byte_A8E2C8 = false;

        // 0x52F9A4: -STEALTH
        if (strstr(tok, "-STEALTH")) {
            byte_A8D60C = true;
            continue;
        }

        // 0x52F9C2: -MESSAGES
        if (strstr(tok, "-MESSAGES")) {
            byte_A8D60D = false;
            continue;
        }

        // 0x52F9DF: -ATTRACT
        if (strstr(tok, "-ATTRACT")) {
            g_NetworkEventPending |= 4;
            continue;
        }

        // 0x52FA01: -%dX%d custom resolution
        if (isdigit(static_cast<unsigned char>(tok[1]))) {
            sscanf(tok, "-%dX%d", &g_CommandLineFlags, &g_CommandLineParam);
            continue;
        }

        // 0x52FA37: -480
        if (strcmp(tok, "-480") == 0) {
            g_CommandLineParam = 480;
            continue;
        }

        // 0x52FA78: -16
        if (strcmp(tok, "-16") == 0) {
            g_Is16BitMode = true;
            continue;
        }

        // 0x52FAAC: -WIN
        if (_stricmp(tok, "-WIN") == 0) {
            g_DDraw_Initialized = 1;
            continue;
        }

        // 0x52FAD7: -X / -O prefix
        if (_strnicmp(tok, "-X", 2) != 0
            && _strnicmp(tok, "-O", 2) != 0)
            continue;

        const char* p = tok + 2;
        char c = *p;
        if (!c)
            continue;

        do {
            ++p;
            if (toupper(static_cast<unsigned char>(c)) == 'Q') {
                byte_A8ED64 = true;
                c = *p;
                if (!c)
                    break;
                continue;
            }
        } while (*p);

        // Unrecognized char after -X/-O: print help and fail
        _putws(GetCSFString(L"TXT_INVALID", "Init.CPP", 3732));
        return 0;
    }

    return 1;
}

// IDA 0x7B2720 -- SessionClass::SetInstance: registers global session pointer
static void* g_SessionClass_Instance = nullptr;
void SessionClassSetInstance(int value) {
    g_SessionClass_Instance = (void*)(intptr_t)value;
}

} // namespace gamemd
