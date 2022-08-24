#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_print_reverse_numbers(void)
{
    int i = 0;
    while (i >= ('9' - '0'))
    {
        ft_putchar('0' + i);
        i++;
    }
    ft_putchar('\n');
}

int main(void)
{
    ft_print_numbers();
    return (0);
}