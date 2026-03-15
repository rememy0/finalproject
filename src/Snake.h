#pragma once

#include <deque>

#include "Position.h"

enum class Direction {
    Up,
    Down,
    Left,
    Right
};

class Snake {
public:
    Snake(int startX, int startY);

    void setDirection(Direction newDirection);
    Direction getDirection() const;

    Position head() const;
    const std::deque<Position>& body() const;

    void move(bool shouldGrow);
    bool occupies(const Position& p) const;
    bool hitSelf() const;

private:
    std::deque<Position> m_body;
    Direction m_direction = Direction::Right;

    bool isOpposite(Direction a, Direction b) const;
};

// TODO: Keep snake movement logic here only (single responsibility).
// TODO: Make sure opposite-direction turns are ignored.
