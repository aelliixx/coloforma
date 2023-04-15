#pragma once

#include <cstdint>

namespace alx {

struct Colour {

    uint8_t r;
    uint8_t g;
    uint8_t b;

    Colour()
        : r(255)
        , g(0)
        , b(0)
    {
    }
    Colour(uint8_t R, uint8_t G, uint8_t B)
        : r(R)
        , g(G)
        , b(B)
    {
    }
};

}
