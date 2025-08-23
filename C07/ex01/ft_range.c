/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fchiappe <fchiappe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/16 15:23:30 by fchiappe          #+#    #+#             */
/*   Updated: 2025/08/20 13:27:05 by fchiappe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*array;
	int	i;

	if (min >= max)
		return (NULL);
	array = malloc(sizeof(int) * (max - min));
	if (!array)
		return (NULL);
	i = 0;
	while (min < max)
	{
		array[i] = min;
		min++;
		i++;
	}
	return (array);
}
/*
#include <stdio.h>
int main()
{
	int *array;
	int i;

	array = ft_range(1, 20);
	i = 0;
	while (i < 19)
	{
		printf("%d\n", array[i]);
		i++;
	}
	free(array);
	return(0);
}
*/