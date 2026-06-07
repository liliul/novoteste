CC = gcc

SRC := $(shell find src -name "*.c")

CFLAGS = -Wall -Wextra -std=c99

LIBS = -lraylib -lGL -lm -lpthread -ldl -lrt -lX11

all:
	mkdir -p build
	$(CC) $(SRC) -o build/farmville $(CFLAGS) $(LIBS)

run: all
	./build/farmville

clean:
	rm -rf build