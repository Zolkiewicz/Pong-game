#include <UI.h>

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