/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fchiappe <fchiappe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/18 09:38:39 by fchiappe          #+#    #+#             */
/*   Updated: 2025/08/25 11:04:31 by fchiappe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	is_valid_base(char *base)
{
	int	base_len;
	int	i;
	int	j;

	i = 0;
	j = 0;
	base_len = ft_strlen(base);
	if (base[0] == '\0' || base_len == 1)
		return (0);
	while (base[i])
	{
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		if (base[i] <= 32 || base[i] == 127 || base[i] == 43 || base[i] == 45)
			return (0);
		i++;
	}
	return (1);
}

int	get_index_in_base(char c, char *base)
{
	int	i;

	i = -1;
	while (base[++i])
	{
		if (base[i] == c)
			return (i);
	}
	return (-1);
}

int	check_whitespace(char *str, int *ptr)
{
	int	i;
	int	state;

	i = 0;
	state = 1;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	while (str[i] == 45 || str[i] == 43)
	{
		if (str[i] == 45)
			state *= -1;
		i++;
	}
	*ptr = i;
	return (state);
}

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	result;
	int	sign;
	int	base_len;
	int index;

	i = 0;
	sign = check_whitespace_sign(str, &i);
	result = 0;
	base_len = ft_strlen(base);
	if (is_valid_base(base) == 1)
	{
		while ((index = get_index_in_base(str[i], base)) != -1)
		{
			result = result * base_len + index;
			i++;
		}
	}
	return (result * sign);
}
