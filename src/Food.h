#pragma once

#include <random>

#include "Position.h"

class Snake;

class Food {
public:
    Food();

    const Position& position() const;
    void respawn(int width, int height, const Snake& snake);

private:
    Position m_position{};
    std::mt19937 m_rng;
};

// TODO: Keep random food spawning here.
// TODO: Ensure food never spawns on snake body.
