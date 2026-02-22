#include "entities.h"

void initBoard(Board* board) {
    board->height = HEIGHT;
    board->width = WIDTH;

    //cells[y][x]
    for (int y = 0; y < board->height; y++) {
        for (int x = 0; x < board->width; x++) {
            board->cells[y][x] = ' ';
        }
    }
}

void cleanBoard(Board* board) {
    for (int y = 0; y < board->height; y++) {
        for (int x = 0; x < board->width; x++) {
            board->cells[y][x] = ' ';
        }
    } 
}

void initBall(Ball* ball) {
    ball->y = HEIGHT / 2;
    ball->x = WIDTH / 2;
    ball->x_direction = -1;
    ball->y_direction = -1;
}

void moveBall(Ball* ball) {
    ball->y += ball->y_direction;
    ball->x += ball->x_direction;
}

void changeYDir(Ball* ball) {
    ball->y_direction *= -1;
}

void changeXDir(Ball* ball) {
    ball->x_direction *= -1;
}