#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    size_t s_len;
    size_t sub_len;
    char *substr;

    sub_len = len;
    s_len = ft_strlen(s);
    if(start >= s_len)
    {
        substr = malloc(1);
        if(!substr)
            return(NULL);
        ft_bzero(substr, 1);
        return(substr);
    }
    if(len > s_len - start)
        sub_len = s_len - start;
    substr = malloc(sub_len + 1);
    if(!substr)
        return(NULL);
    ft_strlcpy(substr, s + start, sub_len + 1);
    return(substr);
}
/*int main(void)
{
    char *original = "ABCDEFGHIJK";
    unsigned int start = 3;
    size_t len = 7;
    char *result;

    printf("original: [%s]\n", original);

    result = ft_substr(original, start, len);
    if (!result)
    {
        printf("Erro: malloc falhou.\n");
        return (1);
    }

    printf("substring: [%s]\n", result);
    free(result);

    return (0);
}*/