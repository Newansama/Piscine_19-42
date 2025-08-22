#include <unistd.h>

void ft_print_numbers(void)
{
    char number;

    number = '0';
    while (number >= '0' && number <= '9')
    {
        write(1, &number, 1);
        number++;
    }
}

int main(void)
{
    ft_print_numbers();
    write(1, "\n", 1);
}