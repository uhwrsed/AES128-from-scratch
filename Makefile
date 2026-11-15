CC = gcc
CFLAGS = -Wall -Wextra -Wpedantic -std=c17 -Iinclude
SRC = src/main.c src/transformations.c
TARGET = src/main

$(TARGET): $(SRC)
	$(CC) $(CFLAGS) $(SRC) -o $(TARGET)

clean:
	rm -f $(TARGET)

.PHONY: clean
