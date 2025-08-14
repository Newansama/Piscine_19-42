/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fchiappe <fchiappe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 14:19:51 by fchiappe          #+#    #+#             */
/*   Updated: 2025/08/13 15:06:38 by fchiappe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = src[i];
	return (dest);
}
/*
#include <stdio.h>

int	main(void)
{
	char	dest[];
	char	src[];

    dest[] = "Destination";
    src[] = "Source";
    printf("Destination before : %s\n", dest);
	ft_strcpy(dest, src);
	printf("Destination after : %s\n", dest);
}
*/