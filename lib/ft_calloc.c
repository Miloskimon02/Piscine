#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
    void *ptr;

    if(size != 0 && nmemb > SIZE_MAX / size)
        return(NULL);
    if(nmemb == 0|| size == 0)
    {
        ptr = malloc(1);
        if(!ptr)
            return(NULL);
        return(ptr);
    }
    ptr = malloc(nmemb * size);
    if(!ptr)
        return(NULL);
    ft_bzero(ptr, nmemb * size);
    return(ptr);
}
/*int main()
{
    int *ptr;
    int i;

    i = 0;
    ptr =  ft_calloc(18, sizeof(int));
    if(!ptr)
        return(1);
    while( i < 18)
    {
        printf("prt=[%d] = %d\n", i, ptr[i]);
        i++;
    }
    free(ptr);
    return(0);
}*/