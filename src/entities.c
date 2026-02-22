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