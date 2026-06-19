#pragma once
#include <cstdint>

namespace gamemd {

struct PlayerConfig {
    wchar_t name[20]{};
    int color    = -1;
    int side     = -1;
    char ip[32]{};
    int port     = -1;
    bool enabled = false;
    bool is_observer = false;
};

struct HouseConfig {
    int spawn_locations  = -2;
    double credits_factor = 1.0;
    int handicap          = -1;
    int alliances[8]{};
};

struct SpawnConfig {
    int game_mode      = 1;
    char scenario[256]{};
    char map_hash[256]{};
    bool bases          = true;
    int credits         = 10000;
    bool bridge_destroy = true;
    bool crates         = false;
    bool short_game     = false;
    bool super_weapons  = true;
    bool build_off_ally = false;
    int game_speed      = 0;
    bool multi_engineer  = false;
    int unit_count      = 0;
    int ai_players      = 0;
    int ai_difficulty   = 1;
    bool allies_allowed  = false;
    bool harvester_truce = false;
    bool fog_of_war     = false;
    bool mcv_redeploy   = true;
    int tech_level      = 10;
    int seed            = 0;
    int player_count    = 1;
    int tournament      = 0;
    int wol_game_id     = 0xDEADBEEF;
    bool is_campaign    = false;
    bool load_save_game = false;
    char save_game_name[60]{};
    int custom_mission_id = 0;
    bool force_multiplayer     = false;
    bool ra2_mode              = false;
    bool quick_match           = false;
    bool skip_score_screen     = false;
    bool disable_game_speed    = false;
    bool write_statistics      = false;
    bool ai_names_by_difficulty = false;
    bool continue_without_humans = false;
    bool defeated_becomes_observer = false;
    bool special_house_is_ally = true;

    int protocol         = 2;
    int frame_send_rate  = 4;
    int reconnect_timeout = 2400;
    int conn_timeout     = 3600;
    int max_ahead        = -1;
    int pre_calc_max_ahead = 0;
    int max_latency_level = 255;

    char tunnel_ip[32]{};
    int tunnel_port     = 0;
    int tunnel_id       = 0;

    PlayerConfig players[8]{};
    HouseConfig houses[8]{};
};

SpawnConfig SpawnConfig_LoadFromINI(const char* filename); // IDA: UNMATCHED — no_callgraph_match, no_git_history

} // namespace gamemd
