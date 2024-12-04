#ifndef CONSTANTS_H
#define CONSTANTS_H

#include "raylib.h"

const int SCREEN_WIDTH = 1024;
const int SCREEN_HEIGHT = 768;
const int CELL_SIZE = 40;

const Color WALL_COLOR = {44, 62, 80, 255};
const Color PATH_COLOR = {236, 240, 241, 255};
const Color PLAYER_COLOR = {231, 76, 60, 255};
const Color EXIT_COLOR = {46, 204, 113, 255};
const Color HOUSE_COLOR = {155, 89, 182, 255};
const Color MENU_COLOR = {52, 73, 94, 255};
const Color MENU_TEXT_COLOR = {236, 240, 241, 255};

const int EASY_SIZE = 10;
const int MEDIUM_SIZE = 15;
const int HARD_SIZE = 20;

enum GameState { MENU, PLAYING, FINISHED };
enum Difficulty { EASY, MEDIUM, HARD };

#endif // CONSTANTS_H
