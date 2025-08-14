/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: florentchiappelloni <florentchiappellon    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/14 13:00:57 by florentchia       #+#    #+#             */
/*   Updated: 2025/08/14 13:05:23 by florentchia      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char    *ft_strncat(char *dest, char *src, unsigned int nb)
{
    int i;
    int j;

    i = 0;
    while (dest[i] != '\0')
    i++;
    j = 0;
    while ( j < nb && src[j] != '\0')
    {
        dest[i] = src[j];
        i++;
        j++;
    }
}