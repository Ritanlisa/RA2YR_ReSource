/* exp_layout.c -- multi-table .rdata layout probe (w2 E1-E3)
 * five tables with distinct signatures, declared in a controlled order.
 */
struct Rec { int a; float f; char s[8]; };

/* A: 16 ints (64B) */
const int tbl_a[16] = {1001,1002,1003,1004,1005,1006,1007,1008,
                       1009,1010,1011,1012,1013,1014,1015,1016};
/* B: 64 bytes */
const unsigned char tbl_b[64] = {201,201,201,201, 32,32,32,32, 202,202,202,202, 32,32,32,32,
                                 203,203,203,203, 32,32,32,32, 204,204,204,204, 32,32,32,32,
                                 205,205,205,205, 32,32,32,32, 206,206,206,206, 32,32,32,32,
                                 207,207,207,207, 32,32,32,32, 208,208,208,208, 32,32,32,32};
/* C: 8 doubles (64B) */
const double tbl_c[8] = {1.03125, 2.03125, 3.03125, 4.03125, 5.03125, 6.03125, 7.03125, 8.03125};
/* D: 6 structs (13B payload each -> stride 16, 96B) */
const struct Rec tbl_d[6] = {
    {301, 1.25f, "AAAA"}, {302, 2.25f, "BBBB"}, {303, 3.25f, "CCCC"},
    {304, 4.25f, "DDDD"}, {305, 5.25f, "EEEE"}, {306, 6.25f, "FFFF"}};
/* E: 7 floats (28B, odd tail length) */
const float tbl_e[7] = {9.51f, 9.52f, 9.53f, 9.54f, 9.55f, 9.56f, 9.57f};

/* refs live in exp_main.c to keep this obj pure-data (no extra .rdata items) */
