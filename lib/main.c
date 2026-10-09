#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "libft.h"

static void test_isalpha()
{
    int c;
    int error;

    c = 0;
    error = 0;

    while(c <= 127)
    {   
        if(!!ft_isalpha(c) != !!isalpha(c))
        {
            printf("ERROR isalpha: %3d '%c' -> ft: %d | Original: %d\n", c, c, ft_isalpha(c), isalpha(c));
            error++;
        }
        c++;
    }
    if(error == 0)
        printf("isalpha: ok(0 a 127)\n");
}

static void	test_strlen(void)
{
	char	*testes[] = {"", "a", "abc", "Ola 42!", "    ", "0123456789"};
	int		total;
	int		i;
	int		erros;

	total = sizeof(testes) / sizeof(testes[0]);
	erros = 0;
	i = 0;
	while (i < total)
	{
		if (ft_strlen(testes[i]) != strlen(testes[i]))
		{
			printf("ERRO strlen: \"%s\" -> ft: %zu | original: %zu\n",
				testes[i], ft_strlen(testes[i]), strlen(testes[i]));
			erros++;
		}
		i++;
	}
	if (erros == 0)
		printf("strlen: OK (%d strings)\n", total);
}
int main()
{
    test_isalpha();
    test_strlen();
}