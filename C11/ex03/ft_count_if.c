/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: florentchiappelloni <florentchiappellon    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/27 09:54:46 by florentchia       #+#    #+#             */
/*   Updated: 2025/08/27 18:11:06 by florentchia      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_count_if(char **tab, int length, int(*f)(char*))
{
	int i = 0;
	int count = 0;

	while(tab[i] && i < length)
	{
		if(f(tab[i]))
			count++;
		i++;
	}
	return count;
}
/*
int is_5(char *s1)
{
	int i = 0;

	while(s1[i] != '\0')
		i++;
	return (i == 5);
}

#include <stdio.h>
int main(void)
{
	char *tab[5] = {"hello", "world", "you", "are", "cool"};
	int res = ft_count_if(tab, 5, &is_5);
	printf("%d", res);
	return 0;
}
*/