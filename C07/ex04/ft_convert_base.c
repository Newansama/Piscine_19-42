/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fchiappe <fchiappe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/18 11:20:17 by fchiappe          #+#    #+#             */
/*   Updated: 2025/08/25 17:30:27 by fchiappe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str);
int	is_valid_base(char *base);
int	ft_atoi_base(char *str, char *base);

int	get_len(long nb, int base_len)
{
	int	len;

	len = (nb <= 0);
	while (nb)
	{
		nb /= base_len;
		len++;
	}
	return (len);
}

char	*fill_str(long nb, char *base, int base_len, int len)
{
	char	*res;

	res = malloc(len + 1);
	if (!res)
		return (NULL);
	res[len] = '\0';
	if (nb == 0)
		res[0] = base[0];
	if (nb < 0)
	{
		res[0] = '-';
		nb = -nb;
	}
	while (nb)
	{
		res[--len] = base[nb % base_len];
		nb /= base_len;
	}
	return (res);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		value;
	int		base_len;
	int		len;
	long	nb;

	if (!is_valid_base(base_from) || !is_valid_base(base_to))
		return (NULL);
	value = ft_atoi_base(nbr, base_from);
	nb = value;
	base_len = ft_strlen(base_to);
	len = get_len(nb, base_len);
	return (fill_str(nb, base_to, base_len, len));
}

/*
#include <stdio.h>
int main(void)
{
	char *result;

	result = ft_convert_base("1010", "01", "0123456789");
	if (result)
	{
		printf("Binary 1010 -> Decimal : %s\n", result);
		free(result);
	}

	result = ft_convert_base("255", "0123456789", "0123456789ABCDEF");
	if (result)
	{
		printf("Decimal 255 -> Hexadecimal : %s\n", result);
		free(result);
	}

	result = ft_convert_base("1F", "0123456789ABCDEF", "01");
	if (result)
	{
		printf("Hexadecimal 1F -> Binary : %s\n", result);
		free(result);
	}

	result = ft_convert_base("42", "01234+", "01");
	if (result == NULL)
		printf("Invalid base detected !\n");

	result = ft_convert_base("-42", "0123456789", "0123456789ABCDEF");
	if (result)
	{
		printf("Decimal -42 -> Hexadecimal : %s\n", result);
		free(result);
	}

	result = ft_convert_base("02232 ", "0123456789", "0123456");
	if (result)
	{
		printf("Decimal  13214 -> Hexadecimal : %s\n", result);
		free(result);
	}

	return 0;
}
*/