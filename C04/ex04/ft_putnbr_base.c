/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fchiappe <fchiappe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/17 10:51:40 by florentchia       #+#    #+#             */
/*   Updated: 2025/08/17 16:47:18 by fchiappe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int white_space_or_sign(char str)
{
    if (str <= 32 || str == 127 || str == 43 || str == 45)
    return (1);
    return (0);
}

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

int ft_strlen(char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
    i++;
    return (i);
}

int is_valid_base(char *base)
{
    int base_len;
    int i;
    int j;

    i = 0;
    j = 0;
    base_len = ft_strlen(base);
    if (base[0] == '\0' || base_len == 1)
    return (0);
    while (base[i] != '\0')
    {
        j = i + 1;
        while (base[j] != '\0')
        {
            if (base[i] == base[j])
            return (0);
            j++;
        }
        if (white_space_or_sign(base[i]))
        return (0);
        i++;
    }
    return (1);
}

void	ft_putnbr_base(int nb, char *base)
{
	int is_valid;
    int base_len;

    is_valid = is_valid_base(base);
    base_len = ft_strlen(base);
    if (is_valid)
    {
	if (nb < 0)
	{
		ft_putchar('-');
		nb *= -1;
	}
	if (nb >= base_len)
		ft_putnbr_base(nb / base_len, base);
        ft_putnbr_base(nb % base_len, base);
    }
    else
    ft_putchar(base[nb]);
}