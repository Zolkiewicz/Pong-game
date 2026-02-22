#ifndef ENTITIES_H
#define ENTITIES_H

#include"config.h"

typedef struct {
    int height;
    int width;
    char cells[HEIGHT][WIDTH];
} Board;

void initBoard(Board* board);
void cleanBoard(Board* board);

#endif // !ENTITIES_H