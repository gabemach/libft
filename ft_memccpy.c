#include "libft.h"

void    *ft_memccpy(void *dst, const void *src, int c, size_t n)
{
    char    *dstcpy;
    char    *srccpy;
    int     i;

    i = 0;
    dstcpy = (char *)dst;
    srccpy = (char *)src;
    if (c == NULL)
        return (NULL);
    while (i < n)
    {
        dstcpy[i] = srccpy[i];
        if ((unsigned char)srccpy[i] == (unsigned char)c)
            return ((void *)&(dstcpy[i + 1]));
        i++;
    }
    return (NULL);
}