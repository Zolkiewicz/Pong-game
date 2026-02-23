#include "logic.h"

bool ballHitWall(Ball* ball, Board* board) {
    return ball->y == 0 || ball->y == board->height - 1;
}

bool flipX(Ball* ball, Paddle* paddle1, Paddle* paddle2) {
    if(ball->x == paddle1->x + 1 && ball->y >= paddle1->top && ball->y <= paddle1->bot) return true;
    if(ball->x == paddle2->x - 1 && ball->y >= paddle2->top && ball->y <= paddle2->bot) return true;
    return false;
}

bool isOver(Ball* ball, Board* board) {
    return ball->x == 0 || ball->x == board->width - 1;
}
