/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: florentchiappelloni <florentchiappellon    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/27 18:15:11 by florentchia       #+#    #+#             */
/*   Updated: 2025/08/27 18:18:54 by florentchia      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size)
{
    int i;
    int length;

    i = 0;
    while (src[i])
    i++;
    length = i;
    i = 0;
    while (src[i] && i < (int)size - 1)
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return (length);
}