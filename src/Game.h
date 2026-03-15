#pragma once

#include "Food.h"
#include "Input.h"
#include "Renderer.h"
#include "Snake.h"

enum class BoundaryMode {
    Wrap,
    Walls
};

class Game {
public:
    Game(int width, int height, BoundaryMode mode);

    void run();

private:
    int m_width;
    int m_height;
    BoundaryMode m_boundaryMode;

    Snake m_snake;
    Food m_food;
    Input m_input;
    Renderer m_renderer;

    bool m_isRunning = true;
    bool m_shouldGrow = false;
    int m_score = 0;

    int m_baseTickMs = 180;
    int m_minTickMs = 60;

    void update();
    void handleBoundaries(Position& headPosition);
    bool ateFood() const;
    int currentTickMs() const;
};

// TODO: Own the classic arcade loop here:
// TODO: input -> update -> render -> sleep.
// TODO: Increase speed as score increases.
