#include "logic.h"

bool ballHitWall(Ball ball, Board board) {
    return ball.y == 0 || ball.y == board.height - 1;
}

bool flipX(Ball ball, Board board) {
    return ball.x == 0 || ball.x == board.width - 1;
}
