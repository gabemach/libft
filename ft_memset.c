#include "libft.h"

void    *ft_memset(void *s, int c, size_t n)
{
    int     i;
    char    *cpy;

    i = 0;
    cpy = (char *)s;
    while (n > 0)
    {
        cpy[i++] = (char)c;
        n--;
    }
    return (s);
}