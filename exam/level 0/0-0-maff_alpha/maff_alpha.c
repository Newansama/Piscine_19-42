#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    maff_alpha(void)
{
    int letter;

    letter = 96;

    while (letter++ < 122)
    {
        (letter % 2 == 0 ? ft_putchar(letter - 32) : ft_putchar(letter));
    }
}

int main(void)
{
    maff_alpha();
    ft_putchar('\n');
}