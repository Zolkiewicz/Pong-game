#include "game.h"

void initGame(Game* game) {
    initBall(&(game->ball));
    initBoard(&(game->board));
    game->gameover = 0;
}

void setBoardCells(Game* game) {
    cleanBoard(&(game->board));
    game->board.cells[game->ball.y][game->ball.x] = 'o';
}

void updateGame(Game* game) {
    if (ballHitWall(game->ball, game->board)) 
        changeYDir(&(game->ball));
    
    if (flipX(game->ball, game->board))
        changeXDir(&(game->ball));

    moveBall(&(game->ball));
    setBoardCells(game);
}

void GameOver(Game* game) {
    game->gameover = 1;
}