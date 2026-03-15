#include "Food.h"

#include <chrono>

#include "Snake.h"

Food::Food()
    : m_rng(static_cast<unsigned>(
        std::chrono::steady_clock::now().time_since_epoch().count())) {}

const Position& Food::position() const {
    return m_position;
}

void Food::respawn(int width, int height, const Snake& snake) {
    // TODO: Pick random x in [0, width-1] and y in [0, height-1].
    // TODO: Keep retrying until the position is not occupied by snake.
    // TODO: Assign the valid random position to m_position.

    (void)width;
    (void)height;
    (void)snake;
}
