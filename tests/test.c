#include <assert.h>
#include "entities.h"

int main(void) {
    //board tests

    Board board;

    initBoard(&board);

    for(int y = 0; y < board.height; y++) {
        for (int x = 0; x < board.width; x++) {
            assert(board.cells[y][x] == ' ');
        }
    }

    for(int y = 0; y < board.height; y++) {
        for (int x = 0; x < board.width; x++) {
            board.cells[y][x] = '*';
            assert(board.cells[y][x] == '*');
        }
    }

    cleanBoard(&board);

    for(int y = 0; y < board.height; y++) {
        for (int x = 0; x < board.width; x++) {
            assert(board.cells[y][x] == ' ');
        }
    }  
    
    //ball tests

    Ball ball;

    initBall(&ball);

    assert(ball.x == board.width / 2);
    assert(ball.y == board.height / 2);
    assert(ball.x_direction == -1);
    assert(ball.y_direction == -1);

    moveBall(&ball);

    assert(ball.x == board.width / 2 + ball.x_direction);
    assert(ball.y == board.height / 2 + ball.y_direction);
    assert(ball.x_direction == -1);
    assert(ball.y_direction == -1);    

    changeXDir(&ball);

    assert(ball.x_direction == 1);
    assert(ball.y_direction == -1); 

    changeYDir(&ball);

    assert(ball.x_direction == 1);
    assert(ball.y_direction == 1);    
}