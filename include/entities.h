#ifndef ENTITIES_H
#define ENTITIES_H

#include"config.h"

typedef struct {
    int height;
    int width;
    char cells[HEIGHT][WIDTH];
} Board;

typedef struct {
    int x;
    int y;
    int y_direction; // -1 - up, 1 - down
    int x_direction; // -1 - left, 1 - right
} Ball;

typedef struct {
    int top;
    int bot;
    int size;
} Paddle;

void initBoard(Board* board);
void cleanBoard(Board* board);

void initBall(Ball* ball);
void moveBall(Ball* ball);
void changeYDir(Ball* ball);
void changeXDir(Ball* ball);

void initPaddle(Paddle* paddle);
void moveUP(Paddle* paddle);
void moveDOWN(Paddle* paddle);
#endif // !ENTITIES_H