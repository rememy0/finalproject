#include "Snake.h"

Snake::Snake(int startX, int startY) {
    m_body.push_front({startX, startY});
}

void Snake::setDirection(Direction newDirection) {
    // TODO: Block 180-degree turns (Up->Down, Left->Right, etc.).
    if (!isOpposite(m_direction, newDirection)) {
        m_direction = newDirection;
    }
}

Direction Snake::getDirection() const {
    return m_direction;
}

Position Snake::head() const {
    return m_body.front();
}

const std::deque<Position>& Snake::body() const {
    return m_body;
}

void Snake::move(bool shouldGrow) {
    Position next = head();

    // TODO: Advance next based on m_direction.

    m_body.push_front(next);

    if (!shouldGrow) {
        m_body.pop_back();
    }
}

bool Snake::occupies(const Position& p) const {
    for (const auto& segment : m_body) {
        if (segment == p) {
            return true;
        }
    }
    return false;
}

bool Snake::hitSelf() const {
    // TODO: Return true if head overlaps any body segment except head itself.
    return false;
}

bool Snake::isOpposite(Direction a, Direction b) const {
    return (a == Direction::Up && b == Direction::Down)
        || (a == Direction::Down && b == Direction::Up)
        || (a == Direction::Left && b == Direction::Right)
        || (a == Direction::Right && b == Direction::Left);
}
