/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_any.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: florentchiappelloni <florentchiappellon    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/27 09:48:36 by florentchia       #+#    #+#             */
/*   Updated: 2025/08/27 09:52:32 by florentchia      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_any(char **tab, int(*f)(char *))
{
    int i;

    i = 0;
    while (tab[i])
    {
        if (f(tab[i]) != '\0')
            return (1);
            i++;
    }
    return (0);
}
/**
int is_a(char *str)
{
	int i = 0;

	while(str[i] != '\0')
	{
		if(str[i] == 'a')
			return (1);
		i++;
	}
	return 0;
}

#include <stdio.h>
int main(void)
{
	char *strs[5] = {"hella", "world", "hell"};
	int res = ft_any(strs, &is_a);
	printf("%d", res);
	return 0;
}
*/