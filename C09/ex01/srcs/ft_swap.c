/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fchiappe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/06 11:10:49 by fchiappe          #+#    #+#             */
/*   Updated: 2025/08/06 11:22:32 by fchiappe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

void	ft_swap(int *a, int*b)
{
	int	c;

	c = *a;
	*a = *b;
	*b = c;
}

/*
int	main(void)
{
	int	nbr1, nbr2;
	printf("Enter value of number 1:");
	scanf("%d", &nbr1);
	printf("Enter value of number 2:");
	scanf("%d", &nbr2);

	printf("Before Swapping: num1 is: %d, num2 is: %d\n", nbr1, nbr2);
	ft_swap(&nbr1, &nbr2);

	printf("After Swapping: number 1 is: %d, number 2 is: %d\n", nbr1, nbr2);
}
*/
