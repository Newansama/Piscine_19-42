/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fchiappe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/07 08:02:15 by fchiappe          #+#    #+#             */
/*   Updated: 2025/08/07 08:28:13 by fchiappe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!((str[i] >= 'a' && str[i] <= 'z')))
			return (0);
		i++;
	}
	return (1);
}

/*
int	main(void)
{
	char	*str1 = "Thisisatest";
	char	*str2 = "thisisatest";

	printf("\"%s\" is lowercase ? %d\n", str1, ft_str_is_lowercase(str1));
	printf("\"%s\" is lowerase ? %d\n", str2, ft_str_is_lowercase(str2));
}
*/
