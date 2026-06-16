CC=gcc

.PHONY: run clean

SRC=main.c \
    src/game.c \
    src/snake.c \
    src/food.c

CFLAGS=-Wall -Wextra -std=c99 -Isrc

LIBS=-lraylib -lGL -lm -lpthread -ldl -lrt -lX11

build:
	mkdir -p compiler
	$(CC) $(SRC) -o compiler/snake $(CFLAGS) $(LIBS)

run: build
	./compiler/snake

clean:
	rm -rf compiler