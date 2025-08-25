/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fchiappe <fchiappe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/20 08:13:05 by fchiappe          #+#    #+#             */
/*   Updated: 2025/08/25 17:31:14 by fchiappe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	is_sep(char c, char *sep)
{
	int	i;

	i = 0;
	while (sep[i])
	{
		if (sep[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int	count_words(char *str, char *sep)
{
	int	i;
	int	words;

	i = 0;
	words = 0;
	while (str[i])
	{
		if (!is_sep(str[i], sep))
		{
			words++;
			while (str[i] && !is_sep(str[i], sep))
				i++;
		}
		else
			i++;
	}
	return (words);
}

char	*split_word(char *str, char *sep)
{
	int		i;
	char	*words;

	i = 0;
	while (str[i] && !is_sep(str[i], sep))
		i++;
	words = (char *)malloc(sizeof(char *) * (i + 1));
	if (words == NULL)
		return (NULL);
	i = 0;
	while (str[i] && !is_sep(str[i], sep))
	{
		words[i] = str[i];
		i++;
	}
	words[i] = '\0';
	return (words);
}

char	**ft_split(char *str, char *charset)
{
	int i;
	int j;
	char **words;

	i = 0;
	j = 0;
	words = (char **)malloc(sizeof(char **) * (count_words(str, charset) + 1));
	if (words == NULL || str == NULL || charset == NULL)
		return (NULL);
	while (str[i])
	{
		if (!is_sep(str[i], charset))
		{
			words[j] = split_word(&str[i], charset);
			while (str[i] && !is_sep(str[i], charset))
				i++;
			j++;
		}
		else
			i++;
	}
	words[j] = 0;
	return (words);
}
/*
#include <stdio.h>

int main(void)
{
    char *str = "Hello world this is split";
    char *sep = " ";
    char **result = ft_split(str, sep);

    int i = 0;
    while (result[i])
    {
        printf("%s\n", result[i]);
        free(result[i]);
        i++;
    }
    free(result);

    return 0;
}
*/