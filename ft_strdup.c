#include "libft.h"

char    *strdup(const char *s)
{
    size_t     i;
    char    *dup;

    i = 0;
    dup = (char *)malloc(sizeof(char) * ft_strlen(s) + 1);
    if (dup == NULL)
        return (NULL);
    while (s[i])
        dup[i++] = s[i++];
    dup[i] = '\0';
    return (dup);
}