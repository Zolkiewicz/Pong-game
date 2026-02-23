#include "game.h"

void initGame(Game* game) {
    initInput();
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
        int y1 = game->paddle1.top + i;
        int y2 = game->paddle2.top + i;

        if (y1 >= 0 && y1 < game->board.height)
            game->board.cells[y1][game->paddle1.x] = '#';
        
        if (y2 >= 0 && y2 < game->board.height)
            game->board.cells[y2][game->paddle2.x] = '#';
    }
}

void updateGame(Game* game) {
    if (isOver(&(game->ball), &(game->board))) {
        GameOver(game);
        return;
    }

    if (ballHitWall(&(game->ball), &(game->board))) 
        changeYDir(&(game->ball));
    
    if (flipX(&(game->ball), &(game->paddle1), &(game->paddle2)))
        changeXDir(&(game->ball));

    moveBall(&(game->ball));
    setBoardCells(game);
}

void GameOver(Game* game) {
    resetInput();
    game->gameover = 1;
}

void handleInput(Game* game) {
    char key = readInput();
    
    if(key == 'w' && game->paddle1.top > 0) moveUP(&(game->paddle1));
    if(key == 's' && game->paddle1.bot < game->board.height) moveDOWN(&(game->paddle1));
    if(key == 'o' && game->paddle2.top > 0) moveUP(&(game->paddle2));
    if(key == 'l' && game->paddle2.bot < game->board.height) moveDOWN(&(game->paddle2));
}