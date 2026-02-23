#ifndef INPUT_H
#define INPUT_H

#include <termios.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>

void initInput (void);
void resetInput (void);
char readInput (void);

#endif // !INPUT_H

