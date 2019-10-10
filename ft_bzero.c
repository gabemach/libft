#include "libft.h"

void    ft_bzero(void *s, size_t n)
{
    char    *cpy;
    int     i;

    cpy = (char *)s;
    i = 0;
    while (n > 0)
    {
        cpy[i++] = '\0';
        n--;
    }
}