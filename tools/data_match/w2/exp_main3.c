extern const float f7[]; extern const int i2[]; extern const double d3[];
extern const short s5[];
struct R4; struct R13;
extern const struct R4 r4v[]; extern const struct R13 r13v[]; extern const float f1[];
const void * const g_keep3[] = { f7, i2, d3, s5, r4v, r13v, f1 };
int __stdcall WinMain(void *hI, void *hP, char *cl, int sw)
{ (void)hI;(void)hP;(void)cl;(void)sw; return (int)g_keep3[0]; }
