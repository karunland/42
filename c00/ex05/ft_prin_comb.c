#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_print_comb(void)
{
    int i, j, k;
    for (i = 0; i <= 9; i++)
    {
        for (j = i + 1; j <= 9; j++)
        {
            for (k = j + 1; k <= 9; k++)
            {
                // printf("%d%d%d\n", i, j, k);
                ft_putchar(i + '0');
                ft_putchar(j + '0');
                ft_putchar(k + '0');
                if (i != 7)
                {
                    ft_putchar(',');
                    ft_putchar(' ');
                }
            }
        }
    }
}


int main()
{
    ft_print_comb();
}