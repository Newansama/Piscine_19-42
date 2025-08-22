#include <unistd.h>

void print_number (void)
{
    char number;

    number = '9';

    while (number >= '0' && number <= '9')
    {
        write(1, &number, 1);
        number--;
    }
}

int main(void)
{
    print_number();
    write(1, "\n", 1);
}