/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fchiappe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/06 11:36:22 by fchiappe          #+#    #+#             */
/*   Updated: 2025/08/06 12:08:31 by fchiappe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*
int	main(void)
{
	int a = 10;
	int b = 2;
	int a1;
	int a2;
	int *div = &a1;
	int *mod = &a2;
	ft_div_mod(a, b, div, mod);
	printf("la division est %d\n", *div);
	printf("le remainder est %d\n", *mod);
}
*/
