/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: florentchiappelloni <florentchiappellon    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/20 15:39:01 by fchiappe          #+#    #+#             */
/*   Updated: 2025/08/20 17:29:48 by florentchia      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "ft_stock_str.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*dest;
	int		i;
	int		lenght;

	lenght = 0;
	while (src[lenght])
		lenght++;
	dest = (char *)malloc(sizeof(char) * (lenght + 1));
	if (dest == NULL)
		return (NULL);
	i = 0;
	while (i < lenght)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	struct s_stock_str *arr;
	int i;

	arr = (t_stock_str *) malloc(sizeof(t_stock_str *) * (ac + 1));
	i = 0;
	if (arr == NULL)
	return (NULL);
	while (i < ac)
	{
		if (av[1] == NULL)
		return (NULL);

		arr[i].size = ft_strlen(av[i]);
		arr[i].str = ft_strdup(av[i]);
		arr[i].copy = ft_strdup(av[i]);
		if (arr[i].str == NULL || arr[i].copy == NULL)
		return (NULL);
		i++;
 	}
	arr[i].str = NULL;
	return (arr);
}