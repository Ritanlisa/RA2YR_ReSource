/* main2.c -- probe main: touch refTable so /opt:ref keeps it */
extern unsigned long refTable[];
int __stdcall WinMain(void *hInst, void *hPrev, char *cmdLine, int show)
{
    (void)hInst; (void)hPrev; (void)cmdLine; (void)show;
    return (int)refTable[0];
}
