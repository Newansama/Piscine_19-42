#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

int main(void)
{
    int letter;

    letter = 123;

    while (letter-- > 97)
    {
        (letter % 2 == 0 ? ft_putchar(letter) : ft_putchar(letter - 32));
    }
    ft_putchar('\n');
}