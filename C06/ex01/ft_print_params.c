/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fchiappe <fchiappe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/10 15:14:51 by fchiappe          #+#    #+#             */
/*   Updated: 2025/08/10 15:27:00 by fchiappe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int argc, char **argv)
{
	int	i, j;

	i = 1;
    while (i < argc)
    {
        j = 0;
	while (argv[i][j])
	{
		ft_putchar(argv[i][j]);
		j++;
	}
    ft_putchar('\n');
    i++;
    }
}
