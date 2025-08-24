#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_putnbr(int nb)
{
    if (nb >= 10)
        ft_putnbr(nb / 10);
    ft_putchar((nb % 10) + '0');
}


int main(void)
{
    int number;

    number = 0;
    while (number <= 10)
    {
        (number % 2 == 0 ? ft_putnbr(number) : ft_putchar('\0'));
        number++;
    }
}