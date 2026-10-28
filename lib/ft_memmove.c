#include "libft.h"

void *ft_memmove(void *dest, const void *src, size_t len)
{
    unsigned char       *d;
    const unsigned char *s;

    if (!dest && !src)
        return(dest);
    d = (unsigned char *) dest;
    s = (const unsigned char *) src;
    if( d < s)
        return (ft_memcpy(dest, src, len));
    while(len > 0)
    {
        len--;
        d[len] = s[len];
    }
    return(dest);
}