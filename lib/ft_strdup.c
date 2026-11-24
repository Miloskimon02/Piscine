#include "libft.h"

char	*ft_strdup(const char *s)
{
    size_t len;
    char *dup;

    len = ft_strlen(s);
    dup = malloc(len + 1);
    if(!dup)
        return(NULL);
    ft_strlcpy(dup, s, len + 1);
    return(dup); 
}
/*int	main(void)
{
	char	*original;
	char	*copia;

	original = "42_Lisboa";
	copia = ft_strdup(original);
	if (!copia)
		return (1);
	printf("Original: %s\n", original);
	printf("Copia: %s\n", copia);
	free(copia);
	return (0);
}*/