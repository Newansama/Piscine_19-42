/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fchiappe <fchiappe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/08 08:20:38 by fchiappe          #+#    #+#             */
/*   Updated: 2025/08/08 09:33:19 by fchiappe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	d;
	unsigned int	s;
	unsigned int	sum;

	i = 0;
	sum = 0;
	d = ft_strlen(dest);
	s = ft_strlen(src);
	if (size > d)
		sum = d + s;
	else
		sum = s + size;
	while (src[i] && size > (d + 1))
	{
		dest[d] = src[i];
		d++;
		i++;
	}
	dest[d] = '\0';
	return (sum);
}
/*
#include <stdio.h>

int	main(void)
{
	char	dest[10];
	char	src[10];
	int		size;

	dest[10] = "dest";
	src[10] = "src";
	size = 6;
	printf("Dest Before: %s\n", dest);
	printf("Return of strlcat: %d\n", ft_strlcat(dest, src, size));
	printf("Dest after: %s\n", dest);
}
*/