#ifndef MAZE_H
#define MAZE_H

#include <vector>
#include <random>
#include <algorithm>
#include "constants.h"

class Maze {
private:
    std::vector<std::vector<bool>> walls;
    int size;
    void generateMaze(int x, int y);
    void ensurePath();

public:
    Maze(int mazeSize);
    bool isWall(int x, int y) const;
    void Draw() const;
    int GetSize() const;
};

#endif // MAZE_H
