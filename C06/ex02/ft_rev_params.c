/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fchiappe <fchiappe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/10 15:14:51 by fchiappe          #+#    #+#             */
/*   Updated: 2025/08/10 15:28:22 by fchiappe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int argc, char **argv)
{
	int	i, j, l;

	i = 1;
    l = argc - 1;
    while (i < argc)
    {
        j = 0;
	while (argv[l][j])
	{
		ft_putchar(argv[l][j]);
		j++;
	}
    ft_putchar('\n');
    i++;
    l--;
    }
}
