/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: florentchiappelloni <florentchiappellon    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/27 18:19:57 by florentchia       #+#    #+#             */
/*   Updated: 2025/08/27 18:26:50 by florentchia      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    ft_hex(unsigned char c)
{
    char    *base;
    int res;

    base = "0123456789abcdef";
    res = c / 16;
    ft_putchar(base[res]);
    res = c % 16;
    ft_putchar(base[res]);
}

void	ft_putstr_non_printable(char *str)
{
    while (*str)
	{
		if (*str < 32 || *str > 126)
		{
			ft_putchar('\\');
			ft_hex(*str);
		}
		else
			ft_putchar(*str);
		str++;
	}
}