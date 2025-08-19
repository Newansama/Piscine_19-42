/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: florentchiappelloni <florentchiappellon    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/16 14:38:26 by fchiappe          #+#    #+#             */
/*   Updated: 2025/08/16 15:21:51 by florentchia      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char    *ft_strdup(char *src)
{
    char    *dest;
    int i;
    int lenght;

    lenght = 0;
    while (src[lenght])
    lenght++;

    dest = (char *) malloc(sizeof(char) * (lenght + 1));

    if (dest == NULL)
    return (NULL);
    i = 0;
    while (i < lenght)
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return (dest);
}
