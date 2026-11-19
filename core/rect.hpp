#pragma once

#include "vec2.hpp"

namespace core
{
    struct rect
    {
        vec2 min;
        vec2 max;
    };
}

// TODO - add two getters width and height, calculated based on max.x - min.x? and the same for height?
//        we can use them in the create_sprite to not specify the width and the height of the sprite, we can use this methods