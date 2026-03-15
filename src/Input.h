#pragma once

#include "Snake.h"

class Input {
public:
    Direction pollDirection(Direction currentDirection) const;
    bool quitRequested() const;
};

// TODO: Read keyboard input without blocking the game loop.
// TODO: Map keys (WASD or arrow keys) to Direction.
// TODO: Decide quit key (like Q or Esc).
