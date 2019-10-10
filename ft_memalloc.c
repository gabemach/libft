#include "libft.h"

void    *ft_memalloc(size_t size)
{
    void    *dst;
    char    *clean;

    dst = malloc(size);
    clean = dst;
    if (dst)
    {
        while (size != 0)
        {
            *clean++ = 0;
            size--;
        }
        return (dst);
    }
    return (NULL);
}