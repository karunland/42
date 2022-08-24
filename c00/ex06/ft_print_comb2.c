#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_print_comb2(void)
{
    int i, j;
    for (i = 0; i <= 9; i++)
    {
        for (j = 0; j <= 9; j++)
        {

            for (int m = i; m <= 9; i++)
            {
                for (int n = j + 1; n <= 9; j++)
                {
                    
                    ft_putchar(i + '0');
                    ft_putchar(j + '0');
                    ft_putchar(' ');

                    ft_putchar(i + '0');
                    ft_putchar(j + '0');
                    if (i != 9 && j != 8)
                    {
                        ft_putchar(',');
                        ft_putchar(' ');
                    }
                }
            }
        }
    }
}

int main()
{
    ft_print_comb2();
}