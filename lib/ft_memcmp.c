#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
    const unsigned char *ptr1;
    const unsigned char *ptr2;
    size_t i;

    ptr1 = (const unsigned char *)s1;
    ptr2 = (const unsigned char *)s2;

    i = 0;
    while (i < n && ptr1[i] == ptr2[i])
        i++;
    if(i == 0)
        return(0);
    return(ptr1[i] - ptr2[i]);
}

int main(){

    const unsigned char *ptr1 = "ab";
    const unsigned char *ptr2 = "ab\0c";

    printf("%d\n", ft_memcmp(ptr1, ptr2, 4));
}