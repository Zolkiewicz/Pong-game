CC = gcc
CFLAGS = -Wall -Wextra -Iinclude

SRC = src/config.c src/entities.c

Tests:
	$(CC) $(CFLAGS) tests/test.c src/entities.c -o test_entities

clean:
	rm test_entities