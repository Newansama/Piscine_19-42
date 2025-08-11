/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fchiappe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/05 16:51:02 by fchiappe          #+#    #+#             */
/*   Updated: 2025/08/05 16:55:00 by fchiappe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	char	fst;
	char	snd;
	char	trd;

	fst = '0';
	while (fst < '8')
	{
		snd = fst + 1;
		while (snd < '9')
		{
			trd = snd + 1;
			while (trd <= '9')
			{
				write(1, &fst, 1);
				write(1, &snd, 1);
				write(1, &trd, 1);
				if (fst != '7' || snd != '8' || trd != '9')
					write(1, ", ", 2);
				trd++;
			}
			snd++;
		}
		fst++;
	}
}

/*
int main(void){
	ft_print_comb();
}
*/
