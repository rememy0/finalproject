#pragma once

#include "Food.h"
#include "Snake.h"

class Renderer {
public:
    void draw(int width, int height, const Snake& snake, const Food& food, int score) const;
};

// TODO: Render board, snake, and food to console each frame.
// TODO: Clear screen between frames.
// TODO: Print score and controls.
