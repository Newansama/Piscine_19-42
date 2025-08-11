/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fchiappe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/06 14:34:35 by fchiappe          #+#    #+#             */
/*   Updated: 2025/08/07 09:19:07 by fchiappe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

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
int	main(void)
{
	char	Dest[] = "Destination";
	char	Src[] = "Source";

	printf("Destination before : %s\n", Dest);
	ft_strcpy(Dest, Src);
	printf("Destination after : %s\n", Dest);
}
*/
