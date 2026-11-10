/* exp_main2.c -- cross-object probe keeper (x/y/z/w variant for exp3/exp4) */
extern const int tbl_x[]; extern const unsigned char tbl_y[];
extern const double tbl_z[]; extern const float tbl_w[];
const void * const g_keep2[] = { tbl_x, tbl_y, tbl_z, tbl_w };
int __stdcall WinMain(void *hI, void *hP, char *cl, int sw)
{ (void)hI;(void)hP;(void)cl;(void)sw;
  return (int)g_keep2[0]; }
