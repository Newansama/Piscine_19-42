/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fchiappe <fchiappe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/16 15:23:30 by fchiappe          #+#    #+#             */
/*   Updated: 2025/08/24 12:04:29 by fchiappe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	*range = malloc(sizeof(int) * (max - min));
	i = 0;
	if (*range == NULL)
		return (-1);
	while (min < max)
	{
		(*range)[i] = min;
		min++;
		i++;
	}
	return (i);
}

/*
#include <stdio.h>
int main()
{
	int *array;
	int i;

	i = ft_ultimate_range(&array, 1, 20);
	printf("size: %d\n", i);
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