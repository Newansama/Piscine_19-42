/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fchiappe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/07 08:02:15 by fchiappe          #+#    #+#             */
/*   Updated: 2025/08/07 08:32:44 by fchiappe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!((str[i] >= 'A' && str[i] <= 'Z')))
			return (0);
		i++;
	}
	return (1);
}

/*
int	main(void)
{
	char	*str1 = "thisisatest";
	char	*str2 = "THISISATEST";

	printf("\"%s\" is uppercase ? %d\n", str1, ft_str_is_uppercase(str1));
	printf("\"%s\" is uppercase ? %d\n", str2, ft_str_is_uppercase(str2));
}
*/
