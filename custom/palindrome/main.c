/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fchiappe <fchiappe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/17 14:45:49 by fchiappe          #+#    #+#             */
/*   Updated: 2025/08/17 17:45:53 by fchiappe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

char *ft_rev_print(char *str)
{
	int	last;
	int	i;
	char	tmp;
	
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

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

int	is_palindrome(char *s1, char *s2)
{
	int	i;

	i = 0;
	if (s1[i] == s2[i])
	{
		ft_putstr(&s2[i]);
	}
	ft_putstr("\n");
	return (0);
}

int main(int argc, char **argv)
{
    char palindrome[1000];
    int i;

    i = 0;

    while (argv[1][i])
    {
        palindrome[i] = argv[1][i];
        i++;
    }
	palindrome[i] = '\0';

    ft_rev_print(palindrome);
	is_palindrome(argv[1], palindrome);
}