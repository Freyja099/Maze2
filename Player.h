#ifndef PLAYER_H
#define PLAYER_H

#include "constants.h"
#include "utility.h"
#include "Maze.h"

class Player {
private:
    Vector2 position;
    float size;
    float speed;
    void ClampPosition(const Maze& maze);

public:
    Player(float x, float y);
    void Update(const Maze& maze);
    Vector2 GetPosition() const;
    void Draw() const;
};

#endif // PLAYER_H
