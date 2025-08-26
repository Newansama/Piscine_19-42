/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fchiappe <fchiappe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/26 14:32:00 by fchiappe          #+#    #+#             */
/*   Updated: 2025/08/26 14:32:00 by fchiappe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>

struct s_stock_str *ft_strs_to_tab(int ac, char **av);
void ft_show_tab(struct s_stock_str *par);

int main(void)
{
    char *strings[] = {
        "Hello World!",
        "Campus 19",
        "Samiiiii",
        "Filiiiipe",
        NULL
    };
    int size = 4;

    struct s_stock_str *tab = ft_strs_to_tab(size, strings);

    if (!tab)
        return (1);

    ft_show_tab(tab);

    return (0);
}
