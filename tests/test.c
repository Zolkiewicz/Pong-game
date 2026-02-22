#include <assert.h>
#include "entities.h"

int main(void) {
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
}