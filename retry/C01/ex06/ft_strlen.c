/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fchiappe <fchiappe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/12 15:06:42 by fchiappe          #+#    #+#             */
/*   Updated: 2025/08/12 15:13:00 by fchiappe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

/*
#include <stdio.h>
int main(void)
{
    char *str = "Welcome to 42";
    int	length; 	

    length = ft_strlen(str);
	
    printf("%d", length);
}
*/