#include "libft.h"

char    *ft_strncpy(char *dst, const char *src, size_t n)
{
    size_t i;

    i = 0;
    while (i < n && src[i] != '\0')
        dst[i++] = src[i++];
    i++;
    dst[i] == '\0';
    return (dst);
}