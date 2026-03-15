#include <iostream>

#include "Game.h"

int main() {
    std::cout << "Snake (Beginner C++)\n";

    // TODO: Let user choose boundary mode:
    // TODO: 1 = Wrap, 2 = Walls
    BoundaryMode mode = BoundaryMode::Wrap;

    // TODO: Optionally let user choose board size.
    Game game(20, 12, mode);
    game.run();

    std::cout << "Game over.\n";
    return 0;
}
