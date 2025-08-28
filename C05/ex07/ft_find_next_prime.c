/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fchiappe <fchiappe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/15 08:21:13 by fchiappe          #+#    #+#             */
/*   Updated: 2025/08/28 13:40:16 by fchiappe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb < 2)
		return (0);
	while (i <= (nb / i))
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	if (nb <= 2)
		return (2);
	while (!ft_is_prime(nb))
		nb++;
	return (nb);
}
/*
#include <stdio.h>

int main (void)
{
	int	test;

    test = 4;
    printf("Next prime is : %d\n", ft_find_next_prime(0));
	printf("Next prime is : %d\n", ft_find_next_prime(7));
	printf("Next prime is : %d\n", ft_find_next_prime(8));
	printf("Next prime is : %d\n", ft_find_next_prime(12));
	printf("Next prime is : %d\n", ft_find_next_prime(2147483642));
	printf("Next prime is : %d\n", ft_find_next_prime(2147480000));
}
*/