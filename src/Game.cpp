#include "Game.h"

#include <chrono>
#include <thread>

Game::Game(int width, int height, BoundaryMode mode)
    : m_width(width),
      m_height(height),
      m_boundaryMode(mode),
      m_snake(width / 2, height / 2) {
    m_food.respawn(m_width, m_height, m_snake);
}

void Game::run() {
    while (m_isRunning) {
        auto frameStart = std::chrono::steady_clock::now();

        Direction nextDirection = m_input.pollDirection(m_snake.getDirection());
        m_snake.setDirection(nextDirection);

        if (m_input.quitRequested()) {
            m_isRunning = false;
        }

        update();
        m_renderer.draw(m_width, m_height, m_snake, m_food, m_score);

        int tickMs = currentTickMs();
        auto elapsed = std::chrono::steady_clock::now() - frameStart;
        auto sleepFor = std::chrono::milliseconds(tickMs)
            - std::chrono::duration_cast<std::chrono::milliseconds>(elapsed);

        if (sleepFor.count() > 0) {
            std::this_thread::sleep_for(sleepFor);
        }
    }
}

void Game::update() {
    // TODO: Move snake (grow if m_shouldGrow).
    // TODO: Apply boundary behavior (wrap or game over on walls).
    // TODO: Check self collision and stop game on collision.
    // TODO: If snake ate food, increment score, set grow flag, respawn food.

    m_shouldGrow = false;
}

void Game::handleBoundaries(Position& headPosition) {
    // TODO: If Wrap mode: loop x/y around board edges.
    // TODO: If Walls mode: set m_isRunning = false when out of bounds.
    (void)headPosition;
}

bool Game::ateFood() const {
    // TODO: Compare snake head with food position.
    return false;
}

int Game::currentTickMs() const {
    // TODO: Increase speed as score rises.
    // Example strategy: every 3 food, reduce tick by 10ms until m_minTickMs.
    return m_baseTickMs;
}
