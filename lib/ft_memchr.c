#include "libft.h"

void    *ft_memchr(const void *s, int c, size_t n)
{
    const unsigned char *ptr;
    size_t i;
    
    ptr = (const unsigned char *)s;

    i = 0;
    while (i < n)
    {
        if(ptr[i] == (unsigned char)c)
            return ((void *)(ptr + i));
        i++;
    }
    return(NULL); 
}

/*int main()
{
    const char * str = "abcdefghijklmnop";
    int c = 'h';
    size_t n = 50;
    if(!ft_memchr(str, c, n))
        printf("NULL\n");
    else
        printf("%s\n", (char *)ft_memchr(str, c, n));
    printf("%s\n", str);
}*/