/* exp_pad.c -- padding rule probe: scalar vs double vs struct after odd-length float */
struct R4 { int a; int b; };        /* 8B, align 4 */
struct R13 { char c[13]; };        /* 13B, align 1 */

const float f7[7]  = {1.51f,1.52f,1.53f,1.54f,1.55f,1.56f,1.57f};   /* 28B */
const int   i2[2]  = {4401,4402};                                   /* 8B, scalar */
const double d3[3] = {21.03125,22.03125,23.03125};                  /* 24B, align 8 */
const short  s5[5] = {501,502,503,504,505};                         /* 10B, align 2 */
const struct R4 r4v[2] = {{5101,5102},{5103,5104}};                 /* 16B, align 4 */
const struct R13 r13v[2] = {{{'a','b','c','d','e','f','g','h','i','j','k','l','m'}},
                             {{'n','o','p','q','r','s','t','u','v','w','x','y','z'}}}; /* 26B */
const float  f1[1] = {9.61f};                                       /* 4B tail */
