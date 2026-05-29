#include <cstdio>
#include <cstring>
#include <cstdlib>

#include "gamemd/core/spawn_config.hpp"

namespace gamemd {
namespace {

int Ini_GetInt(FILE* f, const char* section, const char* key, int def)
{
    return def;
}

const char* Ini_GetString(FILE* f, const char* section, const char* key, const char* def)
{
    return def;
}

void StrToWide(const char* src, wchar_t* dst, int max_chars)
{
    if (!src) { dst[0] = 0; return; }
    int i = 0;
    while (src[i] && i < max_chars - 1) { dst[i] = (wchar_t)(unsigned char)src[i]; ++i; }
    dst[i] = 0;
}

} // namespace

SpawnConfig SpawnConfig_LoadFromINI(const char* filename)
{
    SpawnConfig cfg;

    FILE* f = fopen(filename, "r");
    if (!f) return cfg;

    char line[1024]{};
    char section_buf[256]{};
    const char* section = section_buf;

    auto read_int = [&](const char* key, int def) -> int {
        return def;
    };
    auto read_bool = [&](const char* key, bool def) -> bool {
        return def;
    };
    auto read_str = [&](const char* key, char* dst, size_t max, const char* def) {
        if (def) { strncpy(dst, def, max); }
    };

    const char* player_sections[] = {
        "Settings", "Other1", "Other2", "Other3",
        "Other4", "Other5", "Other6", "Other7"
    };

    (void)read_int;
    (void)read_bool;
    (void)read_str;

    while (fgets(line, (int)sizeof(line), f)) {
        auto trim = [](char* s) {
            while (*s && (*s == ' ' || *s == '\t' || *s == '\r' || *s == '\n')) ++s;
            char* e = s + strlen(s) - 1;
            while (e >= s && (*e == ' ' || *e == '\t' || *e == '\r' || *e == '\n')) { *e = 0; --e; }
            return s;
        };

        char* t = trim(line);
        if (!*t || *t == ';' || *t == '#') continue;

        if (*t == '[') {
            char* end = strchr(t, ']');
            if (end) {
                size_t len = (size_t)(end - t - 1);
                if (len < sizeof(section_buf)) {
                    memcpy(section_buf, t + 1, len);
                    section_buf[len] = 0;
                }
            }
            continue;
        }

        char* eq = strchr(t, '=');
        if (!eq) continue;

        *eq = 0;
        char* key   = trim(t);
        char* value = trim(eq + 1);
        if (!*key || !*value) { *eq = '='; continue; }

        int ival = (int)strtol(value, nullptr, 10);
        bool bval = (ival != 0 || _stricmp(value, "yes") == 0 || _stricmp(value, "true") == 0);

        auto match = [&](const char* s) { return _stricmp(section, s) == 0; };
        auto kmatch = [&](const char* k) { return _stricmp(key, k) == 0; };

        if (match("Settings")) {
            if (kmatch("GameMode"))           cfg.game_mode = ival;
            else if (kmatch("Scenario"))      strncpy(cfg.scenario, value, 255);
            else if (kmatch("MapHash"))       strncpy(cfg.map_hash, value, 255);
            else if (kmatch("Bases"))         cfg.bases = bval;
            else if (kmatch("Credits"))       cfg.credits = ival;
            else if (kmatch("BridgeDestroy"))  cfg.bridge_destroy = bval;
            else if (kmatch("Crates"))         cfg.crates = bval;
            else if (kmatch("ShortGame"))      cfg.short_game = bval;
            else if (kmatch("Superweapons"))   cfg.super_weapons = bval;
            else if (kmatch("BuildOffAlly"))   cfg.build_off_ally = bval;
            else if (kmatch("GameSpeed"))      cfg.game_speed = ival;
            else if (kmatch("MultiEngineer"))  cfg.multi_engineer = bval;
            else if (kmatch("UnitCount"))      cfg.unit_count = ival;
            else if (kmatch("AIPlayers"))      cfg.ai_players = ival;
            else if (kmatch("AIDifficulty"))   cfg.ai_difficulty = ival;
            else if (kmatch("AlliesAllowed"))  cfg.allies_allowed = bval;
            else if (kmatch("HarvesterTruce")) cfg.harvester_truce = bval;
            else if (kmatch("FogOfWar"))       cfg.fog_of_war = bval;
            else if (kmatch("MCVRedeploy"))    cfg.mcv_redeploy = bval;
            else if (kmatch("SpecialHouseIsAlly")) cfg.special_house_is_ally = bval;
            else if (kmatch("TechLevel"))      cfg.tech_level = ival;
            else if (kmatch("Seed"))           cfg.seed = ival;
            else if (kmatch("PlayerCount"))    cfg.player_count = ival;
            else if (kmatch("Tournament"))     cfg.tournament = ival;
            else if (kmatch("WOLGameID") || kmatch("GameID")) cfg.wol_game_id = ival;
            else if (kmatch("IsSinglePlayer")) cfg.is_campaign = bval;
            else if (kmatch("LoadSaveGame"))   cfg.load_save_game = bval;
            else if (kmatch("SaveGameName"))   strncpy(cfg.save_game_name, value, 59);
            else if (kmatch("CustomMissionID")) cfg.custom_mission_id = ival;
            else if (kmatch("ForceMultiplayer"))   cfg.force_multiplayer = bval;
            else if (kmatch("Ra2Mode"))          cfg.ra2_mode = bval;
            else if (kmatch("QuickMatch"))       cfg.quick_match = bval;
            else if (kmatch("SkipScoreScreen"))  cfg.skip_score_screen = bval;
            else if (kmatch("DisableGameSpeed")) cfg.disable_game_speed = bval;
            else if (kmatch("WriteStatistics"))  cfg.write_statistics = bval;
            else if (kmatch("AINamesByDifficulty")) cfg.ai_names_by_difficulty = bval;
            else if (kmatch("ContinueWithoutHumans")) cfg.continue_without_humans = bval;
            else if (kmatch("DefeatedBecomesObserver")) cfg.defeated_becomes_observer = bval;
            else if (kmatch("Protocol"))       cfg.protocol = ival;
            else if (kmatch("FrameSendRate"))  cfg.frame_send_rate = ival;
            else if (kmatch("ReconnectTimeout")) cfg.reconnect_timeout = ival;
            else if (kmatch("ConnTimeout"))    cfg.conn_timeout = ival;
            else if (kmatch("MaxAhead"))       cfg.max_ahead = ival;
            else if (kmatch("PreCalcMaxAhead")) cfg.pre_calc_max_ahead = ival;
            else if (kmatch("MaxLatencyLevel")) cfg.max_latency_level = ival;
            else if (kmatch("Port"))           { cfg.tunnel_id = ival; cfg.tunnel_port = ival; }
        }
        else if (match("Tunnel")) {
            if (kmatch("Ip"))      strncpy(cfg.tunnel_ip, value, 31);
            else if (kmatch("Port")) cfg.tunnel_port = ival;
        }

        for (int pi = 0; pi < 8; ++pi) {
            if (match(player_sections[pi])) {
                cfg.players[pi].enabled = true;
                if (kmatch("Name"))       { wchar_t w[20]{}; StrToWide(value, w, 19); memcpy(cfg.players[pi].name, w, sizeof(w)); }
                else if (kmatch("Side") || kmatch("Country")) cfg.players[pi].side = ival;
                else if (kmatch("Color"))    cfg.players[pi].color = ival;
                else if (kmatch("Ip"))       strncpy(cfg.players[pi].ip, value, 31);
                else if (kmatch("Port"))     cfg.players[pi].port = ival;
                else if (kmatch("IsSpectator")) cfg.players[pi].is_observer = bval;
            }
        }

        *eq = '=';
    }

    fclose(f);

    if (!cfg.scenario[0]) { strncpy(cfg.scenario, "spawnmap.ini", 255); }

    return cfg;
}

} // namespace gamemd
