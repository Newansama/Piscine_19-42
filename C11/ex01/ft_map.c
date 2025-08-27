/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: florentchiappelloni <florentchiappellon    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/27 09:36:19 by florentchia       #+#    #+#             */
/*   Updated: 2025/08/27 09:38:36 by florentchia      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int *ft_map(int *tab, int length, int(*f)(int))
{
	int i;
	int *new_array;

	i = 0;
	new_array = (int *)malloc(length * sizeof(int));
	while(i < length)
	{
		new_array[i] = f(tab[i]);
		i++;
	}
	return (new_array);
}
/*
int multiple_2(int num)
{
	return num *= 2;
}

#include <stdio.h>
int main(void)
{
	int nums[5] = {1, 2, 3, 4, 5};
	int *res = ft_map(nums, 5, &multiple_2);
	printf("%d, %d, %d, %d, %d", res[0], res[1], res[2], res[3], res[4]);
	return 0;
}
*/