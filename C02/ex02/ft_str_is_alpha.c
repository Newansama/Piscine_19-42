/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fchiappe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/07 08:02:15 by fchiappe          #+#    #+#             */
/*   Updated: 2025/08/07 08:18:19 by fchiappe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!((str[i] >= 'a' && str[i] <= 'z')
				|| (str[i] >= 'A' && str[i] <= 'Z')))
			return (0);
		i++;
	}
	return (1);
}

/*
int	main(void)
{
	char	*str1 = "I thinkno";
	char	*str2 = "Ithinkyes";

	printf("%s is alphabetic ? %d\n", str1, ft_str_is_alpha(str1));
	printf("%s is alphabetic ? %d\n", str2, ft_str_is_alpha(str2));
}
*/
