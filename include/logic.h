#ifndef LOGIC_H
#define LOGIC_H

#include "entities.h"
#include <stdbool.h>

bool ballHitWall(Ball ball, Board board);
bool flipX(Ball ball, Board board);

#endif // !LOGIC_H