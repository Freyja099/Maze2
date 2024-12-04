#include "Maze.h"
#include "Player.h"

int main() {
    InitWindow(SCREEN_WIDTH, SCREEN_HEIGHT, "Maze Adventure");
    SetTargetFPS(60);

    GameState gameState = MENU;
    Difficulty selectedDifficulty = EASY;
    std::unique_ptr<Maze> maze;
    std::unique_ptr<Player> player;

    while (!WindowShouldClose()) {
        BeginDrawing();
        ClearBackground(PATH_COLOR);

        switch (gameState) {
            case MENU:
                // Draw the menu and handle difficulty selection
                break;

            case PLAYING:
                player->Update(*maze);
                maze->Draw();
                player->Draw();
                break;

            case FINISHED:
                // Handle end-of-game logic
                break;
        }

        EndDrawing();
    }

    CloseWindow();
    return 0;
}
