/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fchiappe <fchiappe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/09 10:14:03 by ldzuba            #+#    #+#             */
/*   Updated: 2025/08/12 12:05:53 by fchiappe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_corner_00(int x, int y, int cx, int cy)
{
	if (cx == 0 && cy == 0)
		ft_putchar('o');
	else if (cx == x - 1 && cy == 0)
		ft_putchar('o');
	else if (cx == 0 && cy == y - 1)
		ft_putchar('o');
	else if (cx == x - 1 && cy == y - 1)
		ft_putchar('o');
	else if (cy == 0 || cy == y - 1)
		ft_putchar('-');
	else if (cx == 0 || cx == x - 1)
		ft_putchar('|');
	else
		ft_putchar(' ');
}

void	rush00(int x, int y)
{
	int	cx;
	int	cy;

	if (x > 0 && y > 0)
	{
		cy = 0;
		while (cy < y)
		{
			cx = 0;
			while (cx < x)
			{
				ft_corner_00(x, y, cx, cy);
				cx++;
			}
			ft_putchar('\n');
			cy++;
		}
	}
}
