#include "libft.h"

void    *ft_memcpy(void *dst, const void *src, size_t n)
{
    char    *srccpy;
    char    *dstcpy;

    srccpy = (char *)src;
    dstcpy = (char *)dst;
    while (n > 0)
    {
        *dstcpy++ = *srccpy++;
        n--;
    }
    return (dst);
}