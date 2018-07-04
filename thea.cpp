#include "thea.h"

namespace thea {

uint8_t tileset[61][8] = {
    {
        0b00000000,
        0b00000000,
        0b00000000,
        0b00000000,
        0b00000000,
        0b00000000,
        0b11000000,
        0b11111000,
    },
    {
        0b00011110,
        0b00011110,
        0b11111110,
        0b11111110,
        0b11111110,
        0b11111110,
        0b00000000,
        0b00000000,
    },
    {
        0b11111111,
        0b11111111,
        0b11111111,
        0b00000000,
        0b00000000,
        0b11111110,
        0b11111110,
        0b11111110,
    },
    {
        0b11110000,
        0b11111110,
        0b11111111,
        0b01111111,
        0b00001111,
        0b00000111,
        0b11000111,
        0b11100011,
    },
    {
        0b00000000,
        0b00000000,
        0b00000000,
        0b00000000,
        0b00000000,
        0b00000000,
        0b00000000,
        0b00000000,
    },
    {
        0b00000011,
        0b00000011,
        0b00000011,
        0b00000011,
        0b00000011,
        0b00000011,
        0b00000011,
        0b00000011,
    },
    {
        0b00011111,
        0b11111111,
        0b11111111,
        0b11111100,
        0b11100000,
        0b00000000,
        0b00000000,
        0b00000000,
    },
    {
        0b11111110,
        0b11111110,
        0b11111110,
        0b11111110,
        0b00011110,
        0b00011110,
        0b00011110,
        0b00011110,
    },
    {
        0b10001110,
        0b10001110,
        0b10001110,
        0b10001110,
        0b10001111,
        0b10001111,
        0b10001111,
        0b10001111,
    },
    {
        0b00000000,
        0b00000000,
        0b11111111,
        0b11111111,
        0b11111111,
        0b11111111,
        0b00000000,
        0b00000000,
    },
    {
        0b00000011,
        0b00000001,
        0b00000000,
        0b00000000,
        0b00000011,
        0b00000011,
        0b00000011,
        0b00000011,
    },
    {
        0b00000000,
        0b00000000,
        0b00000000,
        0b10000000,
        0b11110000,
        0b11111110,
        0b11111111,
        0b00111111,
    },
    {
        0b01111000,
        0b01111000,
        0b01111000,
        0b01111000,
        0b00000000,
        0b00000000,
        0b00000000,
        0b00000000,
    },
    {
        0b00000000,
        0b00000000,
        0b00000000,
        0b00000000,
        0b10000000,
        0b10000000,
        0b10000000,
        0b11000000,
    },
    {
        0b11110011,
        0b11110011,
        0b11110011,
        0b11110011,
        0b11110011,
        0b11110011,
        0b11110011,
        0b00000000,
    },
    {
        0b10000000,
        0b11010000,
        0b11111000,
        0b11111110,
        0b11111111,
        0b01011111,
        0b00001111,
        0b11000011,
    },
    {
        0b00000000,
        0b00000000,
        0b00000000,
        0b00000000,
        0b00000000,
        0b00000000,
        0b11111111,
        0b11111111,
    },
    {
        0b11111111,
        0b11111111,
        0b11111111,
        0b00000000,
        0b00000000,
        0b01111111,
        0b01111111,
        0b01111111,
    },
    {
        0b11111111,
        0b11111111,
        0b00011111,
        0b10001011,
        0b11100001,
        0b11110100,
        0b11111110,
        0b01111111,
    },
    {
        0b11111111,
        0b11111111,
        0b11111111,
        0b11111111,
        0b00000000,
        0b00000000,
        0b00000000,
        0b11010000,
    },
    {
        0b00000011,
        0b00000011,
        0b00000011,
        0b00000011,
        0b00000011,
        0b00000011,
        0b00000000,
        0b00000000,
    },
    {
        0b11000000,
        0b11000000,
        0b11000000,
        0b11000000,
        0b11000000,
        0b11000000,
        0b11000000,
        0b00000000,
    },
    {
        0b01111111,
        0b01111111,
        0b01111111,
        0b01111111,
        0b01111000,
        0b01111000,
        0b01111000,
        0b01111000,
    },
    {
        0b11000000,
        0b11110000,
        0b11111110,
        0b11111111,
        0b10111111,
        0b00010111,
        0b01000011,
        0b11101000,
    },
    {
        0b11111111,
        0b11111111,
        0b11111111,
        0b11111111,
        0b00000000,
        0b00000000,
        0b00000000,
        0b00001011,
    },
    {
        0b11000000,
        0b11000000,
        0b11000000,
        0b11000000,
        0b11000000,
        0b11000000,
        0b00000000,
        0b00000000,
    },
    {
        0b00000000,
        0b00000000,
        0b11000000,
        0b11000000,
        0b11000000,
        0b11000000,
        0b00000000,
        0b00000000,
    },
    {
        0b00000111,
        0b10100000,
        0b11111100,
        0b11111111,
        0b11111111,
        0b01111111,
        0b00001011,
        0b00000001,
    },
    {
        0b11001111,
        0b11001111,
        0b11001111,
        0b11001111,
        0b11001111,
        0b11001111,
        0b00000000,
        0b00000000,
    },
    {
        0b11111101,
        0b11111111,
        0b01111111,
        0b00000111,
        0b10001111,
        0b10001110,
        0b10001110,
        0b10001110,
    },
    {
        0b00000000,
        0b00000000,
        0b00000000,
        0b00000000,
        0b10000000,
        0b11000000,
        0b11000000,
        0b11000000,
    },
    {
        0b01111000,
        0b01111000,
        0b01111111,
        0b01111111,
        0b01111111,
        0b01111111,
        0b00000000,
        0b00000000,
    },
    {
        0b00000011,
        0b00000011,
        0b00000000,
        0b00000000,
        0b00000011,
        0b00000011,
        0b00000011,
        0b00000011,
    },
    {
        0b00001111,
        0b01111111,
        0b11111111,
        0b11111110,
        0b11110000,
        0b11100000,
        0b11100011,
        0b11000111,
    },
    {
        0b10001000,
        0b10000000,
        0b10000101,
        0b11001111,
        0b11111111,
        0b11111111,
        0b11111000,
        0b11000000,
    },
    {
        0b11000000,
        0b11000000,
        0b11000000,
        0b11000000,
        0b11000000,
        0b11000000,
        0b11000000,
        0b11000000,
    },
    {
        0b11110011,
        0b11110011,
        0b11110011,
        0b11110011,
        0b11110011,
        0b11110011,
        0b11110011,
        0b11110011,
    },
    {
        0b11111111,
        0b11111111,
        0b11111111,
        0b11111111,
        0b00000000,
        0b00000000,
        0b00000000,
        0b00000000,
    },
    {
        0b11110011,
        0b11110011,
        0b11110011,
        0b11110011,
        0b11110011,
        0b11110011,
        0b00000000,
        0b00000000,
    },
    {
        0b11111111,
        0b11111111,
        0b11111111,
        0b11111111,
        0b00000000,
        0b00000000,
        0b00000000,
        0b11111111,
    },
    {
        0b00011110,
        0b00011110,
        0b00011110,
        0b00011110,
        0b00000000,
        0b00000000,
        0b00000000,
        0b00000000,
    },
    {
        0b11100011,
        0b10000011,
        0b00010111,
        0b00111111,
        0b11111111,
        0b11111100,
        0b11111000,
        0b10000000,
    },
    {
        0b00000000,
        0b00000001,
        0b00011111,
        0b01111111,
        0b11111111,
        0b11111110,
        0b11110000,
        0b00000001,
    },
    {
        0b11101111,
        0b11000111,
        0b11001111,
        0b11001111,
        0b11001111,
        0b11001111,
        0b11001111,
        0b11001111,
    },
    {
        0b11000000,
        0b11000000,
        0b11000000,
        0b11000000,
        0b00000000,
        0b00000000,
        0b00000000,
        0b00000000,
    },
    {
        0b11111111,
        0b11111111,
        0b00000000,
        0b00000000,
        0b11111111,
        0b11111111,
        0b11111111,
        0b11111111,
    },
    {
        0b11000000,
        0b11000000,
        0b10000000,
        0b10000000,
        0b00000000,
        0b00000000,
        0b00000000,
        0b00000000,
    },
    {
        0b00000000,
        0b00000000,
        0b00000000,
        0b00000000,
        0b00000000,
        0b00000000,
        0b00000000,
        0b11110011,
    },
    {
        0b11111110,
        0b00011110,
        0b00011110,
        0b00011110,
        0b00011110,
        0b00011110,
        0b00011110,
        0b00011110,
    },
    {
        0b00000000,
        0b00000000,
        0b00000000,
        0b00000000,
        0b00000000,
        0b00000000,
        0b00000011,
        0b00000011,
    },
    {
        0b00000011,
        0b00000011,
        0b00000011,
        0b00000011,
        0b00000000,
        0b00000000,
        0b00000000,
        0b00000000,
    },
    {
        0b00000000,
        0b00000000,
        0b00000000,
        0b00000000,
        0b00000001,
        0b00000001,
        0b00000001,
        0b00000011,
    },
    {
        0b11111100,
        0b11100000,
        0b01000000,
        0b00000000,
        0b00000000,
        0b00000000,
        0b00000000,
        0b00000000,
    },
    {
        0b00000000,
        0b00000000,
        0b00000000,
        0b00000000,
        0b00000000,
        0b00000000,
        0b00000000,
        0b11000000,
    },
    {
        0b11110011,
        0b11110011,
        0b00000011,
        0b00000011,
        0b11110011,
        0b11110011,
        0b11110011,
        0b11110011,
    },
    {
        0b00000000,
        0b00000000,
        0b00000011,
        0b00000011,
        0b00000011,
        0b00000011,
        0b00000000,
        0b00000000,
    },
    {
        0b00000011,
        0b00000000,
        0b00000000,
        0b00000000,
        0b00000000,
        0b00000000,
        0b00000000,
        0b00000000,
    },
    {
        0b01111111,
        0b01111000,
        0b01111000,
        0b01111000,
        0b01111000,
        0b01111000,
        0b01111000,
        0b01111000,
    },
    {
        0b00000011,
        0b00000011,
        0b00000011,
        0b00000001,
        0b00000000,
        0b00000010,
        0b00000011,
        0b00000011,
    },
    {
        0b10111111,
        0b11111111,
        0b11111101,
        0b11101000,
        0b01000011,
        0b00011111,
        0b10111111,
        0b11111111,
    },
    {
        0b11110111,
        0b11100011,
        0b11110011,
        0b11110011,
        0b11110011,
        0b11110011,
        0b11110011,
        0b11110011,
    },
};

const uint8_t tilemap[128] = {
      4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,
     53,  35,  35,  21,  26,  44,  26,  44,  13,  35,  25,   4,  30,  46,   4,   4,
     47,  36,  54,  14,   9,  37,   9,  19,   3,  60,  38,   4,  15,  41,   4,   4,
      4,  16,  45,   4,   9,  22,  31,  39,  17,  57,  12,   0,  18,  59,  52,   4,
      4,  16,  45,   4,   9,   7,   1,  39,   2,  48,  40,  11,  27,  42,   6,   4,
      4,  16,  45,   4,   9,  37,   9,  24,  33,  43,  28,  23,  29,   8,  34,   4,
      4,  49,  32,   4,  55,  50,  55,  50,  51,   5,  20,  58,  10,   5,   5,  56,
      4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,
};

void show_thea(U8X8 *u8x8) {
    u8x8->clear();

    for(size_t i = 0; i < sizeof(tilemap); i++) {
        uint8_t x = i % 16;
        uint8_t y = i / 16;
        u8x8->drawTile(x, y, 1, tileset[tilemap[i]]);
    }
};

};