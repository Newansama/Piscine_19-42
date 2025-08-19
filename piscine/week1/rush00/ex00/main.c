/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fchiappe <fchiappe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/09 10:38:53 by ldzuba            #+#    #+#             */
/*   Updated: 2025/08/12 12:17:09 by fchiappe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	rush00(int x, int y);
void	rush(int x, int y);
void	rush02(int x, int y);
void	rush03(int x, int y);
void	rush04(int x, int y);
void	ft_putchar(char c);

int	ft_atoi(char *str)
{
	int	i;
	int	result;
	int	sign;

	i = 0;
	sign = 1;
	result = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32 || !(str[i] >= '0'
			&& str[i] <= '9'))
		i++;
	while (str[i] == 45 || str[i] == 43)
	{
		if (str[i] == 45)
			sign *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + str[i] - '0';
		i++;
	}
	return (result * sign);
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i])
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

void	ft_rush_select(int v, int x, int y)
{
	if (v == 0)
		rush00(x, y);
	else if (v == 1)
		rush(x, y);
	else if (v == 2)
		rush02(x, y);
	else if (v == 3)
		rush03(x, y);
	else if (v == 4)
		rush04(x, y);
}

int	main(int argc, char *argv[])
{
	int	v;
	int	x;
	int	y;
	int	i;

	i = 1;
	while (i < argc)
	{
		if (ft_strcmp(argv[i], "-v") == 0)
			v = ft_atoi(argv[++i]);
		else if (ft_strcmp(argv[i], "-x") == 0)
			x = ft_atoi(argv[++i]);
		else if (ft_strcmp(argv[i], "-y") == 0)
			y = ft_atoi(argv[++i]);
		else if (argc == 0)
			return (write(1, "WRONG ARGUMENT, SEE HELP WITH -h\n", 37) || 1);
		i++;
	}
	ft_rush_select(v, x, y);
	return (0);
}
