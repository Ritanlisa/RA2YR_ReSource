/* exp_main.c -- keeps all probe tables alive in the link (a-e variant used in exp1/2) */
extern const int tbl_a[]; extern const unsigned char tbl_b[]; extern const double tbl_c[];
extern const float tbl_e[];
struct Rec;
extern const struct Rec tbl_d[];
/* one pointer-array referencing every probe table keeps them all through /opt:ref */
const void * const g_keep[] = { tbl_a, tbl_b, tbl_c, tbl_d, tbl_e };
int __stdcall WinMain(void *hI, void *hP, char *cl, int sw)
{ (void)hI;(void)hP;(void)cl;(void)sw;
  return (int)g_keep[0]; }
