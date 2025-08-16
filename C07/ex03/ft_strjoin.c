/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fchiappe <fchiappe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/16 16:09:47 by fchiappe          #+#    #+#             */
/*   Updated: 2025/08/16 16:12:34 by fchiappe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char    *ft_strjoin(int size, char **str, char *sep)
{
    int dest;

    dest = (char *) malloc(sizeof(char) * (*str + 1));
}