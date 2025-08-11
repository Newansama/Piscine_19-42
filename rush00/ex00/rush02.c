/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: florentchiappelloni <florentchiappellon    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/09 10:14:03 by ldzuba            #+#    #+#             */
/*   Updated: 2025/08/11 16:05:05 by florentchia      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);
void	ft_corner(int x, int y, int cx, int cy, char hg, char hd, char bg, char bd, char b, char space);


void	rush02(int x, int y)
{
	int	cx;
	int	cy;

	if (x > 0)
	{
		cy = 0;
		while (cy < y)
		{
			cx = 0;
			while (cx < x)
			{
				ft_corner(x, y, cx, cy, 'A', 'A', 'C', 'C', 'B', '\0');
				cx++;
			}
			ft_putchar('\n');
			cy++;
		}
	}
}
