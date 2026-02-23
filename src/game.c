#include "game.h"

void initGame(Game* game) {
    initBall(&(game->ball));
    initBoard(&(game->board));
    initPaddle(&(game->paddle1), 1);
    initPaddle(&(game->paddle2), game->board.width - 2);
    game->gameover = 0;
}

void setBoardCells(Game* game) {
    cleanBoard(&(game->board));
    game->board.cells[game->ball.y][game->ball.x] = 'o';
    for (int i = 0; i < game->paddle1.size; i++) {
        game->board.cells[game->paddle1.top - i][game->paddle1.x] = '#';
        game->board.cells[game->paddle2.top - i][game->paddle2.x] = '#';
    }
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