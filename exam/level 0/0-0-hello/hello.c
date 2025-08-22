#include <unistd.h>

void    ft_pustr(char *c)
{
    int i;

    i = 0;
    while (c[i] != '\0')
    {
        write(1, &c[i], 1);
        i++;
    }
}

int main(void)
{
    ft_pustr("Hello World !");
    ft_pustr("\n");
}