CC = gcc
CFLAGS = -Wall -Wextra -Iinclude

SRC = src/config.c src/entities.c

.PHONY: TestsEntities TestLogic Tests clean

TestsEntities:
	$(CC) $(CFLAGS) tests/test.c src/entities.c -o test_entities

TestLogic:
	$(CC) $(CFLAGS) tests/testLogic.c src/entities.c src/logic.c -o test_logic

Tests: TestsEntities TestLogic

clean:
	rm test_entities test_logic