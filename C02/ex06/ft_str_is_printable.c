/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fchiappe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/07 08:35:49 by fchiappe          #+#    #+#             */
/*   Updated: 2025/08/07 08:45:39 by fchiappe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!((str[i] >= 32 && str[i] <= 126)))
			return (0);
		i++;
	}
	return (1);
}

/*
int	main(void)
{
	char	*str1 = "\x01";
	char	*str2 = " !\"#$%&'()*+,-./0123456789:;<=>?@ABCDEFG
	HIJKLMNOPQRSTUVWXYZ[\\]^_`abcdefghijklmnopqrstuvwxyz{|}~";

	printf("\"%s\" is printable ? %d\n", str1, ft_str_is_printable(str1));
	printf("\"%s\" is printable ? %d\n", str2, ft_str_is_printable(str2));
}
*/
