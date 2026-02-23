#include "game.h"
#include "UI.h"
#include <unistd.h>

int main(void) {
    start();
    Game game;
    initGame(&game);

    while (!game.gameover) {
        handleInput(&game);
        updateGame(&game);
        render(&game);
        usleep(100000);
    }
}