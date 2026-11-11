/* main3.c -- wave test main: touch refTable only */
extern unsigned long refTable[];
int __stdcall WinMain(void *hInst, void *hPrev, char *cmdLine, int show)
{
    (void)hInst; (void)hPrev; (void)cmdLine; (void)show;
    return (int)refTable[0];
}
