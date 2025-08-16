/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fchiappe <fchiappe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/15 08:21:13 by fchiappe          #+#    #+#             */
/*   Updated: 2025/08/15 08:31:11 by fchiappe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	long i;

	i = 0;
	if (nb <= 0)
		return (0);
	while (i * i < nb)
		i++;
	if (i * i == nb)
		return (i);
	else
		return (0);
}

int ft_is_prime(int nb)
{
    int i;

    i = 2;
    if (nb <= 1)
    return (0);
    while (i <= nb / 2 && i <= 46341)
    {
        if(nb % i == 0)
        return (0);
        i++;
    }
    return (1);
}