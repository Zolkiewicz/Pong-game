#include "input.h"

static struct termios old_term;

void initInput (void) {
    struct termios raw;
    tcgetattr(STDIN_FILENO, &old_term);
    raw = old_term;

    raw.c_lflag &= ~(ICANON | ECHO);
    raw.c_cc[VMIN] = 0;
    raw.c_cc[VTIME] = 0;

    tcsetattr(STDIN_FILENO, TCSANOW, &raw);
}

void resetInput (void) {
    tcsetattr(STDIN_FILENO, TCSANOW, &old_term);
}

char readInput (void) {
    char c;
    if (read(STDIN_FILENO, &c, 1) == 1)
        return c;
    return 0;
}
