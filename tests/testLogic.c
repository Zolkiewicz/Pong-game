#include <assert.h>
#include "entities.h"
#include "logic.h"

int main(void) {
    Board board;
    Ball ball;
    initBoard(&board);
    initBall(&ball);

    assert(!ballHitWall(ball, board));
    ball.y = 0;
    assert(ballHitWall(ball, board));
    ball.y = board.height - 1;
    assert(ballHitWall(ball, board));

    assert(!flipX(ball, board));
    ball.x = 0;
    assert(flipX(ball, board));
    ball.x = board.width - 1;
    assert(flipX(ball, board));
    
    return 0;
}