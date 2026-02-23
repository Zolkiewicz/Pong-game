#include "game.h"
#include "UI.h"
#include <unistd.h>

int main(void) {
    Game game;
    initGame(&game);
    int x = 0;

    while (!game.gameover) {
        updateGame(&game);
        render(&game);
        usleep(20000);
        x++;
        if (x == 1000) GameOver(&game);
    }
}