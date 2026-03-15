#include "Food.h"

#include <chrono> // chrono is used for seeding the random number generator with the current time

#include "Snake.h"

Food::Food() // the constructor initializes the random number generator with a seed based on the current time to ensure different random sequences on each run
    : m_rng(static_cast<unsigned>( // m_rng is the random number generator used for spawning food at random positions
        std::chrono::steady_clock::now().time_since_epoch().count())) {} //steady_clock is used to get the current time in a steady manner, and the count of time since epoch is used as the seed for the random number generator

const Position& Food::position() const {
    return m_position;
}

void Food::respawn(int width, int height, const Snake& snake) { // food respawn function generates a new random position for the food within the specified width and height, ensuring that the new position does not overlap with the snake's body
    // TODO: Pick random x in [0, width-1] and y in [0, height-1].
    // TODO: Keep retrying until the position is not occupied by snake.
    // TODO: Assign the valid random position to m_position.

    (void)width;
    (void)height;
    (void)snake;
}
