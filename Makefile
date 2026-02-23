CC = gcc
CFLAGS = -Wall -Wextra -Iinclude

SRC = src/entities.c src/logic.c src/game.c src/UI.c src/input.c

.PHONY: TestsEntities TestLogic Tests clean

Pong:
	$(CC) $(CFLAGS) src/main.c $(SRC) -o pong

TestsEntities:
	$(CC) $(CFLAGS) tests/test.c src/entities.c -o test_entities

TestLogic:
	$(CC) $(CFLAGS) tests/testLogic.c src/entities.c src/logic.c -o test_logic

Tests: TestsEntities TestLogic

clean:
	rm test_entities test_logic pong