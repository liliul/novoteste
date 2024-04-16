#include <termios.h>

#include "headersH/snake/snake.h"

int main()
{
    // Hide cursor
    printf("\e[?25l");

    // canonical mode anddisable echo
    struct termios oldt, newt;
    tcgetattr(STDIN_FILENO, &oldt);
    newt = oldt;
    newt.c_lflag &= ~(ICANON | ECHO);
    tcsetattr(STDIN_FILENO, TCSANOW, &newt);

    while (!end.quit)
    {
        create_game_table();
        // Move cursor back to top
        printf("\e[%iA", ROWS + 2);

        x[snake.head] = COLS / 2;
        y[snake.head] = ROWS / 2;

        while (!end.quit && !end.game_over)
        {
            create_apple();
            clear_snake_tail();

            if (x[snake.head] == apple.apple_x && y[snake.head] == apple.apple_y)
            {
                apple.apple_x = -1;
                printf("\a"); // Bell
            }
            else
                snake.tail = (snake.tail + 1) % 1000;

            int newhead = (snake.head + 1) % 1000;
            x[newhead] = (x[snake.head] + apple.xdir + COLS) % COLS;
            y[newhead] = (y[snake.head] + apple.ydir + ROWS) % ROWS;
            snake.head = newhead;

            for (int i = snake.tail; i != snake.head; i = (i + 1) % 1000)
                if (x[i] == x[snake.head] && y[i] == y[snake.head])
                    end.game_over = true;
            draw_snake_head();

            usleep(5 * 1000000 / 60);

            read_keyboard();
        }

        if (!end.quit)
        {
            game_over();
        }
    }

    // Show cursor
    printf("\e[?25h");

    tcsetattr(STDIN_FILENO, TCSANOW, &oldt);
    return 0;
}