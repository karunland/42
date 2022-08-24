#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_print_alphabet(void)
{
    int i = 0;
    while (i <= ('z' - 'a'))
    {
        ft_putchar(i + 'a');
        i++;
    }
    ft_putchar('\n');
}

int main ()
{
    ft_print_alphabet();
}