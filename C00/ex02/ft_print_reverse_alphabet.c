#include <unistd.h>

void ft_print_alphabet()
{
    char i;

    i = 'z';
    while(i >= 'a')
    {
        write(1, &i, 1);
        i--;
    }
}

int main()
{
    ft_print_alphabet();
    write(1, "\n", 1);
}