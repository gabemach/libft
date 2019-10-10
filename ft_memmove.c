#include "libft.h"

void    *ft_memmove(void *dst, const void *src, size_t n)
{
    char    *dstcpy;
    char    *srccpy;

    dstcpy = (char *)dst;
    srccpy = (char *)src;
    if (dstcpy < srccpy)
    {
        while (n--)
        {
            dstcpy[n] = srccpy[n];
        }
    }
    else
        ft_memcpy(dst, src, n);
    return (dst);
}