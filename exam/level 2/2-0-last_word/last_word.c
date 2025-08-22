#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

int main(int argc, char **argv)
{
    int i;

    if (argc == 2)
    {
        i = 0;
        while (*argv[1])
        argv[1] ++;
        argv[1]--;
        while (*argv[1] == ' ' || *argv[1] == '\t')
        argv[1]--;
        while (*argv[1] && !(*argv[1] == ' ' || *argv[1] == '\t'))
        argv[1]--;
        argv[1]++;
        while (*argv[1] && !(*argv[1] == ' ' || *argv[1] == '\t'))
        {
            ft_putchar(*argv[1]++);
        }
    }
    ft_putchar('\n');
}