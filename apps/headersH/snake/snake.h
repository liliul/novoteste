#include <stdbool.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

#define COLS 60
#define ROWS 30

int x[1000], y[1000];

struct
{
    bool quit;
    bool game_over;
} end = {false, false};

struct
{
    int head;
    int tail;
} snake = {0, 0};

struct
{
    int xdir;
    int ydir;
    int apple_x;
    int apple_y;
} apple = {1, 0, -1, 0};

void create_game_table()
{
    printf("┌");
    for (int i = 0; i < COLS; i++)
        printf("─");
    printf("┐\n");

    for (int j = 0; j < ROWS; j++)
    {
        printf("│");
        for (int i = 0; i < COLS; i++)
            printf("·");
        printf("│\n");
    }

    printf("└");
    for (int i = 0; i < COLS; i++)
        printf("─");
    printf("┘\n");
}

void create_apple()
{

    if (apple.apple_x < 0)
    {
        // Create new apple
        apple.apple_x = rand() % COLS;
        apple.apple_y = rand() % ROWS;

        for (int i = snake.tail; i != snake.head; i = (i + 1) % 1000)
            if (x[i] == apple.apple_x && y[i] == apple.apple_y)
                apple.apple_x = -1;

        if (apple.apple_x >= 0)
        {
            // Draw apple
            printf("\e[%iB\e[%iC❤", apple.apple_y + 1, apple.apple_x + 1);
            printf("\e[%iF", apple.apple_y + 1);
        }
    }
}

void clear_snake_tail()
{
    printf("\e[%iB\e[%iC·", y[snake.tail] + 1, x[snake.tail] + 1);
    printf("\e[%iF", y[snake.tail] + 1);
}

void read_keyboard()
{
    struct timeval tv;
    fd_set fds;
    tv.tv_sec = 0;
    tv.tv_usec = 0;

    FD_ZERO(&fds);
    FD_SET(STDIN_FILENO, &fds);
    select(STDIN_FILENO + 1, &fds, NULL, NULL, &tv);
    if (FD_ISSET(STDIN_FILENO, &fds))
    {
        int ch = getchar();
        if (ch == 27 || ch == 'q')
        {
            end.quit = true;
        }
        else if (ch == 'a' && apple.xdir != 1)
        {
            apple.xdir = -1;
            apple.ydir = 0;
        }
        else if (ch == 'd' && apple.xdir != -1)
        {
            apple.xdir = 1;
            apple.ydir = 0;
        }
        else if (ch == 's' && apple.ydir != -1)
        {
            apple.xdir = 0;
            apple.ydir = 1;
        }
        else if (ch == 'w' && apple.ydir != 1)
        {
            apple.xdir = 0;
            apple.ydir = -1;
        }
    }
}

void draw_snake_head()
{
    printf("\e[%iB\e[%iC▓", y[snake.head] + 1, x[snake.head] + 1);
    printf("\e[%iF", y[snake.head] + 1);
    fflush(stdout);
}

void game_over()
{
    printf("\e[%iB\e[%iC Game Over! ", ROWS / 2, COLS / 2 - 5);
    printf("\e[%iF", ROWS / 2);
    fflush(stdout);
    getchar();
}