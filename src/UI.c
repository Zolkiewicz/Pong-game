#include <UI.h>

void start(void) {
    fflush(stdout);
    printf("\033[2J\033[H");
    printf("Simple terminal based \"Pong\" game.\n\n first player: \nUP - 'w' DOWN - 's' \n\n second player\nUP - 'o' DOWN - 'l'\n\n");
    printf("press 'ENTER' to start");
    getchar();
}

void render(const Game* game) {
    printf("\033[2J\033[H");
    for (int x = 0; x < game->board.width; x++) printf("#");
    printf("\n");

    for (int y = 0; y < game->board.height; y++) {
        for (int x = 0; x < game->board.width; x++) {
            printf("%c", game->board.cells[y][x]);
        }
        printf("\n");
    }

    for (int x = 0; x < game->board.width; x++) printf("#");
    printf("\n");
}