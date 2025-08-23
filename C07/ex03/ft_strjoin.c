/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fchiappe <fchiappe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/16 16:09:47 by fchiappe          #+#    #+#             */
/*   Updated: 2025/08/20 13:27:48 by fchiappe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

int	total_len(int size, char **strs, char *sep)
{
	int	total;
	int	i;

	total = 0;
	i = 0;
	while (i < size)
	{
		total += ft_strlen(strs[i]);
		i++;
	}
	total += ft_strlen(sep) * (size - 1);
	return (total);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*ret;
	int		total;
	int		i;

	if (!strs || !sep)
    return (NULL);
	if (size == 0)
	{
		ret = malloc(1);
		ret[0] = '\0';
		return (ret);
	}
	total = total_len(size, strs, sep);
	ret = malloc(sizeof(char) * (total + 1));
	if (!ret)
		return (NULL);
	i = -1;
	ret[0] = '\0';
	while (++i < size)
	{
		ft_strcat(ret, strs[i]);
		if (i < size - 1)
			ft_strcat(ret, sep);
	}
	return (ret);
}

#include <stdio.h>

int	main(void)
{
	char	*strs[] = {"Hello", "test", "myeuk", "Filipe", "Sami", "Sami hgoun"};
	int		size = 6;
	char	*sep = " - ";
	int		i;
	char	*all_together;

    i = 0;
    all_together = ft_strjoin(size, strs, sep);
    while (i < size)
    {
        printf("Next strings in index : %s\n", strs[i]);
        i++;
    }
    printf("%s", all_together);
    free(all_together);
}
