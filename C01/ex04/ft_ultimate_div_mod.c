/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fchiappe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/06 12:09:22 by fchiappe          #+#    #+#             */
/*   Updated: 2025/08/06 14:03:58 by fchiappe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	div = (*a / *b);
	mod = (*a % *b);
	*a = div;
	*b = mod;
}

/*
int	main(void)
{
	int v1 = 10;
	int v2 = 2;

	int *a = &v1;
	int *b = &v2;

	ft_ultimate_div_mod(a, b);
	printf("La division est: %d\n", *a);
	printf("Le remainder est: %d\n", *b);
}
*/
