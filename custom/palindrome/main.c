/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fchiappe <fchiappe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/17 14:45:49 by fchiappe          #+#    #+#             */
/*   Updated: 2025/08/17 14:58:36 by fchiappe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char *ft_rev_print(char *str)
{
	int	last;
	int	i;
	int	tmp;
	
	i = 0;
	while (str[i])
		i++;
	last = i - 1;
	i = 0;
	while (last > i)
	{
		tmp = str[i];
		str[i] = str[last];
		str[last] = tmp;
		i++;
		last--;
	}
	return (str);
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i])
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

int main(int argc, char **argv)
{
    char *palindrome;
    
    palindrome = ft_rev_print(argv[1]);
    printf("%s is a palindrome ? %d\n", argv[1], ft_strcmp(argv[1], argv[2]));
}