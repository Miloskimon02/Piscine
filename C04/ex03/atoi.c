int ft_atoi(char *str)
{
    int i;
    int sing;
    int result;

    i = 0;
    sing = 1;
    result = 0;
    
    while(str[i] != '\0' )
    {
        if(str[i] == ' ' || str[i] >= 9 && str[i] <= 13)
            i++;
        while(str[i] == '+' || str[i] == '-')
        {
            if(str[i] == '-')
                sing = -sing;
        i++;
        }
        if(str[i] >= '0' && str[i] <= '9')
        {
            result = result * 10 + (str [i] - '0');
        }
        i++;
    }
    return(result * sing);
}
#include <stdio.h>
int main()
{
    printf("%d\n", ft_atoi("2547865654654654654"));
}