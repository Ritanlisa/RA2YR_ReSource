// Diagnostic: dump MIX file contents and verify hash algorithm
#include <cstdio>
#include <cstring>
#include <cctype>
#include <cstdlib>
#include <cstdint>

#pragma pack(push, 1)
struct TdHeader { int16_t file_count; int32_t body_size; };
struct IndexEntry { uint32_t id; int32_t offset; int32_t size; };
#pragma pack(pop)

// CRC32 with TS-style padding
uint32_t ts_crc(const char* fn) {
    int len = (int)strlen(fn);
    int lr = (len/4)*4;
    int pad = (len%4)?(4-len%4):0;
    uint32_t c = 0xFFFFFFFF;
    for(int i=0;i<lr;i++){
        c^=(uint8_t)toupper(fn[i]);
        for(int j=0;j<8;j++)c=(c>>1)^((c&1)?0xEDB88320u:0);
    }
    if(len!=lr){
        c^=(uint8_t)(len-lr);
        for(int j=0;j<8;j++)c=(c>>1)^((c&1)?0xEDB88320u:0);
        for(int p=1;p<pad;p++){
            c^=(uint8_t)toupper(fn[lr]);
            for(int j=0;j<8;j++)c=(c>>1)^((c&1)?0xEDB88320u:0);
        }
    }
    return c^0xFFFFFFFF;
}

// Classic TD hash
uint32_t classic_hash(const char* fn) {
    int len = (int)strlen(fn);
    int i=0; uint32_t h=0;
    while(i<len){
        uint32_t a=0;
        for(int j=0;j<4;j++){a>>=8;if(i<len)a+=(uint32_t)toupper(fn[i])<<24;i++;}
        h=(h<<1)|(h>>31);h+=a;
    }
    return h;
}

// Standard CRC32 of uppercased string (no TS padding)
uint32_t plain_crc(const char* fn) {
    int len = (int)strlen(fn);
    uint32_t c=0xFFFFFFFF;
    for(int i=0;i<len;i++){
        c^=(uint8_t)toupper(fn[i]);
        for(int j=0;j<8;j++)c=(c>>1)^((c&1)?0xEDB88320u:0);
    }
    return c^0xFFFFFFFF;
}

// Standard CRC32 (no uppercasing, no padding)
uint32_t raw_crc(const char* fn) {
    int len = (int)strlen(fn);
    uint32_t c=0xFFFFFFFF;
    for(int i=0;i<len;i++){
        c^=(uint8_t)fn[i];
        for(int j=0;j<8;j++)c=(c>>1)^((c&1)?0xEDB88320u:0);
    }
    return c^0xFFFFFFFF;
}

int main(int argc, char** argv) {
    if(argc<2){printf("Usage: analyze_mix <mixfile>\n");return 1;}
    const char* mixfn = argv[1];
    printf("=== %s ===\n", mixfn);
    FILE* f = fopen(mixfn,"rb");
    if(!f){printf("Cannot open\n");return 1;}

    // Determine format
    int16_t first=0; fread(&first,2,1,f);
    printf("First 2 bytes: %d (0x%04X)\n", first, (uint16_t)first);
    fclose(f);

    // Reopen for proper parsing
    f = fopen(mixfn,"rb");
    int bo=0;
    if(first==0){
        bo+=2;
        int16_t flags=0; fread(&flags,2,1,f); bo+=2;
        printf("Flags: 0x%04X (encrypted=%d)\n", (uint16_t)flags, flags&2?1:0);
        if(flags&2){
            uint8_t ks[80]; fread(ks,80,1,f); bo+=80;
            printf("Key source: 80 bytes present\n");
            // Can't decrypt without blowfish key
            printf("[Cannot dump encrypted MIX without blowfish key derivation]\n\n");
            fclose(f);
            // Try known filenames
            if(argc>2){
                const char** names = (const char**)(argv+2);
                printf("--- Hash verification ---\n");
                for(;*names;names++){
                    printf("%-25s  TS=0x%08X  Classic=0x%08X  PlainCRC=0x%08X  RawCRC=0x%08X\n",
                        *names, ts_crc(*names), classic_hash(*names), plain_crc(*names), raw_crc(*names));
                }
            }
            return 0;
        }
        // Unencrypted extended - fall through to TD header
    } else { rewind(f); bo=0; }

    TdHeader hdr; fread(&hdr,sizeof(hdr),1,f); bo+=sizeof(hdr);
    int n = hdr.file_count;
    long long bs = hdr.body_size;
    printf("Files: %d, Body: %lld bytes\n", n, bs);

    // Read index
    IndexEntry* idx = (IndexEntry*)malloc(n*sizeof(IndexEntry));
    fread(idx,sizeof(IndexEntry),n,f);

    // Dump all entries
    printf("--- Index (%d entries) ---\n", n);
    for(int i=0;i<n;i++){
        int sz = idx[i].size;
        // Auto-labelling by size/position
        const char* label="";
        if(sz==768) label="  <<< PALETTE?";
        else if(sz==256) label="  <<< small table?";
        else if(sz>100000&&sz<500000) label="  <<< large image?";
        else if(sz>1000000) label="  <<< BINK?";
        printf("[%3d] 0x%08X off=%8d sz=%8d%s\n", i, idx[i].id, idx[i].offset, sz, label);
    }
    printf("--- end ---\n");
    free(idx); fclose(f);

    // Hash verification
    if(argc>2){
        printf("\n--- Hash verification ---\n");
        const char** names = (const char**)(argv+2);
        for(;*names;names++){
            uint32_t ts=ts_crc(*names);
            uint32_t cl=classic_hash(*names);
            uint32_t pl=plain_crc(*names);
            uint32_t rw=raw_crc(*names);
            printf("%-25s  TS=0x%08X  Classic=0x%08X  PlainCRC=0x%08X  RawCRC=0x%08X\n", *names, ts, cl, pl, rw);
            // Check if any match
            for(int i=0;i<n;i++){
                if(idx[i].id==ts) {printf("  -> MATCH TS-CRC32 at [%d]\n",i);break;}
                if(idx[i].id==cl) {printf("  -> MATCH Classic at [%d]\n",i);break;}
                if(idx[i].id==pl) {printf("  -> MATCH PlainCRC at [%d]\n",i);break;}
                if(idx[i].id==rw) {printf("  -> MATCH RawCRC at [%d]\n",i);break;}
            }
        }
    }
    return 0;
}
