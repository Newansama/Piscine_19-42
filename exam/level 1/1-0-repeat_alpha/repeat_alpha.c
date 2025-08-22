#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

int    count_letter(char c)
{
    int repeat;

    if (c >= 'A' && c <='Z')
    repeat = c - 'A' + 1;
    else if (c >= 'a' && c <= 'z')
    repeat = c - 'a' + 1;
    else
    repeat = 1;
    return (repeat);
}

int main(int argc, char **argv)
{
    int repeat;

    if (argc > 1)
    {
        while (*argv[1])
        {
            repeat = count_letter(*argv[1]);
            while (repeat--)
            ft_putchar(*argv[1]);
            argv[1]++;
        }
    }
    ft_putchar('\n');
}