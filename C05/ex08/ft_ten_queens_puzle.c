/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzle.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fchiappe <fchiappe@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/23 23:09:50 by fchiappe          #+#    #+#             */
/*   Updated: 2025/08/23 23:09:50 by fchiappe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    ft_game(int *game)
{
    int i;

    i = 0;
    while(i < 10)
        ft_putchar(game[i++] + '0');
    ft_putchar('\n');
}

int check(int *game, int row, int col)
{
    int i;

    i = 0;
    while (i < row)
    {
        if (game[i] == col)
            return (0);
        if (game[i] - i == col - row)
            return (0);
        if (game[i] + i == col + row)
            return (0);
        i++;
    }
    return (1);
}

int resolve(int *game, int row)
{
    int sol;
    int col;

    sol = 0;
    col = 0;
    if (row == 10)
    {
        ft_game(game);
        return (1);
    }
    while (col < 10)
    {
        if (check(game, row, col))
        {
            game[row] = col;
            sol += resolve(game, row + 1);
        }
        col++;
    }
    return (sol);
}

int ft_ten_queens_puzzle(void)
{
    int game[10];

    return (resolve(game, 0));
}


#include <stdio.h>

int	main(void)
{
	printf("Solutions founded: %d\n", ft_ten_queens_puzzle());
	return (0);
}
