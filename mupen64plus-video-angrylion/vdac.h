#pragma once

#include "n64video.h"

#include <stdint.h>
#include <stdbool.h>

#include "retro_endianness.h"

struct rgba
{
#ifdef MSB_FIRST
    uint8_t a;
    uint8_t r;
    uint8_t g;
    uint8_t b;
#else
    uint8_t b;
    uint8_t g;
    uint8_t r;
    uint8_t a;
#endif
};

struct frame_buffer
{
    struct rgba* pixels;
    uint32_t width;
    uint32_t height;
    uint32_t height_out;
    uint32_t pitch;
};

void vdac_init(struct n64video_config* config);
void vdac_read(struct frame_buffer* fb, bool alpha);
void vdac_write(struct frame_buffer* fb);
void vdac_sync(bool invaid);
void vdac_close(void);
