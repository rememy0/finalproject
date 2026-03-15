#include "Input.h"

Direction Input::pollDirection(Direction currentDirection) const {
    // TODO: Implement platform-specific keyboard polling.
    // TODO: Return currentDirection if no new key was pressed.
    return currentDirection;
}

bool Input::quitRequested() const {
    // TODO: Return true when quit key is pressed.
    return false;
}
