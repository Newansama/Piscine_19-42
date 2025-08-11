/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fchiappe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/05 16:56:28 by fchiappe          #+#    #+#             */
/*   Updated: 2025/08/06 12:41:40 by fchiappe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int	fst;
	int	snd;

	fst = 0;
	while (fst <= 99)
	{
		snd = fst + 1;
		while (snd <= 99)
		{
			ft_putchar(fst / 10 + '0');
			ft_putchar(fst % 10 + '0');
			ft_putchar(' ');
			ft_putchar(snd / 10 + '0');
			ft_putchar(snd % 10 + '0');
			if (!(fst == 98))
				write(1, ", ", 2);
			snd++;
		}
		fst++;
	}
}


int main(void){
	ft_print_comb2();
}
