#include <unistd.h>

void    rush(int x, int y)
{
    int h = 0;
    int w;
    while (h < y)
    {
        w = 0;
        while (w < x)
        {
            if ((h == 0 && w == 0) || (h == y - 1 && w == x - 1))
                write(1, "/", 1);
            else if ((h == 0 && w == x - 1) || (h == y - 1 && w == 0))
                write(1, "\\", 1);
            else if (h == 0 || h == y - 1 || w == 0 || w == x - 1)
                write(1, "*", 1);
            else
                write(1, " ", 1);
            w++;
        }
        write(1, "\n", 1);
        h++;
    }
}

int main()
{
    rush(0, 0);
    return (0);
}

