#include "game.h"
#include "UI.h"
#include <unistd.h>

int main(void) {
    Game game;
    initGame(&game);
    int x = 0;

    while (!game.gameover) {
        handleInput(&game);
        updateGame(&game);
        render(&game);
        usleep(100000);
    }
}