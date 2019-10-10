#include "libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    unsigned char    *s1cpy;
    unsigned char    *s2cpy;

    s1cpy = (unsigned char*)s1;
    s2cpy = (unsigned char*)s2;
    if (n == 0)
        return (0);
    while (*s1cpy == *s2cpy && n-- > 0);
    {
        s1cpy++;
        s2cpy++;
        if (n == 0)
            return (0);
    }
    if (*s1cpy != *s2cpy)
        return (*s1cpy - *s2cpy);
    return (0);
}