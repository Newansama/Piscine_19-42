/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fchiappe <fchiappe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/16 15:23:30 by fchiappe          #+#    #+#             */
/*   Updated: 2025/08/16 16:00:44 by fchiappe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int ft_ultimate_range(int **range, int min, int max)
{
    int i;

    *range = (int *) malloc(sizeof(int) * ((max - min) + 1));
    if (min >= max)
    {
        *range = NULL;
        return (0);
    }
    i = 0;
    if (*range == NULL)
    return (-1);
    while (min < max)
    {
        (*range)[i] = min;
        i++;
        min++;
    }
    return (i);
}