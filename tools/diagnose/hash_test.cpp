// Diagnostic: verify hash matches using our MixFileClass
#include <cstdio>
#include <cstring>
#include <cstdint>

// Quick CRC reimplementation matching mix_file.cpp
static uint32_t crc32_table[256];
static void init_table(){
    for(int i=0;i<256;i++){uint32_t c=i;for(int j=0;j<8;j++)c=(c>>1)^((c&1)?0xEDB88320u:0);crc32_table[i]=c;}
}
static uint32_t ts_crc(const char* fn){
    int len=(int)strlen(fn),lr=(len/4)*4,pad=(len%4)?(4-len%4):0;
    uint32_t c=0xFFFFFFFF;
    for(int i=0;i<lr;i++){c^=(uint8_t)fn[i]|0x20;c=(c>>8)^crc32_table[c&0xFF];}
    if(len!=lr){c^=(uint8_t)(len-lr);c=(c>>8)^crc32_table[c&0xFF];for(int p=1;p<pad;p++){c^=(uint8_t)(fn[lr]|0x20);c=(c>>8)^crc32_table[c&0xFF];}}
    return c^0xFFFFFFFF;
}

// Use the actual ComputeID from mix_file by linking to it
// But let's keep it simple - use our own reimplementation

int main(){
    init_table();
    // Test known filenames
    const char* names[]={
        "RULES.INI","RA2MD.INI","ARTMD.INI","AI.INI","RA2.INI","SOUNDMD.INI","EVA.INI",
        "TEMPERAT.PAL","UNITSNO.PAL","ANIM.PAL","MOUSPAL.PAL",
        "button00.shp","button01.shp","tabs.shp","ls640bg.shp","ls800bg.shp",
        "logo.shp","title.shp",
        "Ra2ts_l.bik","Ra2ts_l","ra2ts_l.bik","ra2ts_l",
        nullptr
    };
    printf("--- TS-CRC32 hashes ---\n");
    for(int i=0;names[i];i++)
        printf("0x%08X %s\n", ts_crc(names[i]), names[i]);

    // Also test: what if the extension is stripped?
    char buf[64];
    for(int i=0;names[i];i++){
        strcpy(buf,names[i]);
        char* dot=strrchr(buf,'.');
        if(dot) *dot=0;
        printf("0x%08X %s (no ext)\n", ts_crc(buf), buf);
    }
    return 0;
}
