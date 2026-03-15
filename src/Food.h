#pragma once

#include <random>

#include "Position.h"

class Snake; // forward declaration of the Snake class to avoid circular dependency issues

class Food { // the Food class represents the food item in the game, which the snake can eat to grow and increase the score
public: // public section of the Food class, containing the constructor and member functions that can be accessed from outside the class
    Food();

    const Position& position() const; // returns the current position of the food item on the game board
    void respawn(int width, int height, const Snake& snake); // generates a new random position for the food item within the specified width and height, ensuring that the new position does not overlap with the snake's body

private: // private because these members are only used internally by the Food class and should not be accessed directly from outside the class
    Position m_position{}; // m_position is the current position of the food item on the game board, initialized to a default Position object
    std::mt19937 m_rng; // mt19937 is a Mersenne Twister random number generator used for generating random positions for the food item on the game board
};
//random number generation is used to ensure that the food item appears at different locations on the game board each time it respawns, making the game more challenging and unpredictable
// we are implementing number generation becuase we want to ensure that the food item appears at different locations on the game board each time it respawns, making the game more challenging and unpredictable

// TODO: Keep random food spawning here. Use std::mt19937 for random number generation.
// TODO: Ensure food never spawns on snake body.
