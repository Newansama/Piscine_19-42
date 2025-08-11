/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: florentchiappelloni <florentchiappellon    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/09 10:38:53 by ldzuba            #+#    #+#             */
/*   Updated: 2025/08/11 23:27:22 by florentchia      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	rush00(int x, int y);
void	rush(int x, int y);
void	rush02(int x, int y);
void	rush03(int x, int y);
void	rush04(int x, int y);
void	ft_putchar(char c);

void	ft_corner(int x, int y, int cx, int cy, char hg, char hd, char bg, char bd, char b, char space)
{
	if (cx == 0 && cy == 0)
		ft_putchar(hg);
	else if (cx == x - 1 && cy == 0)
		ft_putchar(hd);
	else if (cx == 0 && cy == y - 1)
		ft_putchar(bg);
	else if (cx == x - 1 && cy == y - 1)
		ft_putchar(bd);
	else if (cy == 0 || cy == y - 1)
		ft_putchar(b);
	else if (cx == 0 || cx == x - 1)
		if (space != '\0')
		ft_putchar(space);
		else
		ft_putchar(b);
	else
		ft_putchar(' ');
}

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

int	main(int argc, char *argv[])
{
	int	rush_select;
	int	x;
	int	y;
	int i;

	i = 1;

	while ( i < argc)
	{
		if (ft_strcmp(argv[i], "-v") == 0 && i + 1 < argc)
				rush_select = ft_atoi(argv[++i]);
		else if (ft_strcmp(argv[i], "-x") == 0 && i + 1 < argc)
				x = ft_atoi(argv[++i]);
		else if (ft_strcmp(argv[i], "-y") == 0 && i + 1 < argc)
				y = ft_atoi(argv[++i]);
		i++;
	}

	if (rush_select == 0)
		rush00(x, y);
	else if (rush_select == 1)
		rush(x, y);
	else if (rush_select == 2)
		rush02(x, y);
	else if (rush_select == 3)
		rush03(x, y);
	else if (rush_select == 4)
		rush04(x, y);
	return (0);
}
