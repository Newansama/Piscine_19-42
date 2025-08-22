#include <stdlib.h>

char    *ft_strdup(char *src)
{
    char *dest;
    int i;
    int len;

    len = 0;
    while (src[len])
    len++;
    dest = (char *) malloc(sizeof(char *) * (len + 1));
    if (dest == NULL)
    return (NULL);
    i = 0;
    while (i < len)
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return (dest);
}