#ifndef GAME_H
#define GAME_H

#include <stdbool.h>
#include "entities.h"
#include "logic.h"

typedef struct {
    Board board;
    Ball ball;
    bool gameover;
} Game;

void initGame(Game* game);
void setBoardCells(Game* game);
void updateGame(Game* game);
void GameOver(Game* game);

#endif // !GAME_H
