CC = gcc

CFLAGS =
LIBS = -lraylib -lGL -lm -lpthread -ldl -lrt -lX11

all:
	mkdir -p build
	$(CC) src/main.c -o build/farmville $(LIBS)

run: all
	./build/farmville