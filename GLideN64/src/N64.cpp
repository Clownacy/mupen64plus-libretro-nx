#include "N64.h"

// See comment in N64.h */
namespace GLideN64_N64
{
    u8 *HEADER;
    u8 *DMEM;
    u8 *IMEM;
    u64 TMEM[512];
    u8 *RDRAM;

    u32 RDRAMSize = 0;

    N64Regs REG;

    bool ConfigOpen = false;
}
