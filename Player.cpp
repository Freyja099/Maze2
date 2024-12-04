#include "Player.h"

Player::Player(float x, float y) : position{x, y}, size{CELL_SIZE * 0.8f}, speed{2.0f} {}

void Player::ClampPosition(const Maze& maze) {
    float padding = size / 2;
    float maxX = (maze.GetSize() - 1) * CELL_SIZE - padding;
    float maxY = (maze.GetSize() - 1) * CELL_SIZE - padding;
    float minX = padding;
    float minY = padding;

    position.x = Clamp(position.x, minX, maxX);
    position.y = Clamp(position.y, minY, maxY);
}

void Player::Update(const Maze& maze) {
    if (IsKeyDown(KEY_RIGHT)) position.x += speed;
    if (IsKeyDown(KEY_LEFT)) position.x -= speed;
    if (IsKeyDown(KEY_UP)) position.y -= speed;
    if (IsKeyDown(KEY_DOWN)) position.y += speed;

    ClampPosition(maze);
}

Vector2 Player::GetPosition() const {
    return position;
}

void Player::Draw() const {
    DrawCircleV(position, size / 2, PLAYER_COLOR);
}
