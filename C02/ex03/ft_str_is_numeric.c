/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fchiappe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/07 08:02:15 by fchiappe          #+#    #+#             */
/*   Updated: 2025/08/07 08:22:33 by fchiappe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!((str[i] >= '0' && str[i] <= '9')))
			return (0);
		i++;
	}
	return (1);
}

/*
int	main(void)
{
	char	*str1 = "012345678 9";
	char	*str2 = "0123456789";

	printf("%s is numeric ? %d\n", str1, ft_str_is_numeric(str1));
	printf("%s is numeric ? %d\n", str2, ft_str_is_numeric(str2));
}
*/
