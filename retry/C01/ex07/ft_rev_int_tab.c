/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: florentchiappelloni <florentchiappellon    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/12 16:49:20 by florentchia       #+#    #+#             */
/*   Updated: 2025/08/13 10:54:25 by florentchia      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void    ft_rev_int_tab(int *tab, int size)
{
    int i;
    int tmp;

    i = 0;
    size--;
    while (i < size)
    {
        tmp = tab[i];
        tab[i] = tab[size];
        tab[size] = tmp;
        i++;
        size--;
    }
}

#include <stdio.h>
int	main(void)
{
	int	tab[5] = {1, 2, 3, 4, 5};
	int	i;

	i = 0;
	ft_rev_int_tab(tab, 5);
	while (i < 5)
	{
		printf("%d", tab[i]);
		i++;
	}
	return (0);
}