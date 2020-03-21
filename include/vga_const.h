#ifndef VGA_CONST_H
#define VGA_CONST_H
#include "screen.h"
//Vga color codes
#define FB_BLACK  0;
#define FB_BLUE = 1;
#define FB_GREEN = 2;
#define FB_CYAN = 3;
#define FB_RED = 4;
#define FB_MAGENTA = 5;
#define FB_BROWN = 6;
#define FB_LIGHT_GREY = 7;
#define FB_DARK_GREY = 8;
#define FB_LIGHT_BLUE = 9;
#define FB_LIGHT_GREEN = 10;
#define FB_LIGHT_CYAN = 11;
#define FB_LIGHT_RED = 12;
#define FB_LIGHT_MAGENTA = 13;
#define FB_LIGHT_BROWN = 14;
#define FB_WHITE = 15;

#define FB_COLOR_CODE(x, y) ((struct fb_color_code) {x, y})

#define FB_MAX_ROWS 25
#define FB_MAX_COLS 80

#define FB_CURSE_COMMAND_PORT  0x3d4
#define FB_CURSE_DATA_PORT 0x3d5
#define FB_CURSE_HIGH_COMMAND 14
#define FB_CURSE_LOW_COMMAND 15


//The final memory address that can be written to the fb
#define FB_MAX_LINE_POS (FB_LINE_POS(79, 24))

#define FRAME_BUFFER_ADR 0x000b8000
#endif
