/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: florentchiappelloni <florentchiappellon    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 20:51:45 by florentchia       #+#    #+#             */
/*   Updated: 2025/08/13 20:51:49 by florentchia      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int     ft_strcmp(char *s1, char *s2, unsigned int n)
{
    unsigned int i;

    i = 0;
    while (i < n)
    {
    if(s1[i] != s2[i] || s1[i] == '\0')
    return (s1[i] - s2[i]);
        i++;
    }
    return(0);
}