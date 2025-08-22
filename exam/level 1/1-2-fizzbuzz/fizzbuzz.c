#include <unistd.h>

void	ft_pustr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

void	print_nbr(int nbr)
{
	if (nbr > 9)
		print_nbr(nbr / 10);
	write(1, &"0123456789"[nbr % 10], 1);
}

int	main(void)
{
	int number;

	number = 1;
	while (number <= 100)
	{
		if (number % 3 == 0 && number % 5 == 0)
			ft_pustr("fizzbuz");
		else if (number % 3 == 0)
			ft_pustr("fizz");
		else if (number % 5 == 0)
			ft_pustr("buzz");
		else
			print_nbr(number);
		ft_pustr("\n");
		number++;
	}
}