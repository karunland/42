#include <unistd.h>

void ft_ft(int *nbr)
{
    *nbr = 42;
}

void ft_ultimate(int *********nbr)
{
    *********nbr = 42;
}

void swap(int *a, int *b)
{
    int temp;

    temp = *a;
    *a = *b;
    *b = temp;
}

void ft_div_mod(int a, int b, int *div, int *mod)
{
    *div = a / b;
    *mod = a % b;
}

void ft_ultimate_div_mod(int *a, int *b)
{
    int temp;

    temp = *a;
    *a /= *b;
    *b %= temp;
}

void ft_putchar(char m)
{
    write(1, &m, 1);
}

void ft_putstr(char *str)
{
    while (*str != '\0')
        write(1, str++, 1);
}

int ft_strlen(char *str)
{
    int i;

    i = 1;
    while (*(str + i - 1) != '\0')
        i++;
    return (i);
}

void ft_rev_int_tab(int *tab, int size)
{
    int temp;
    int i;

    i = 0;

    while (i < size / 2)
    {
        temp = tab[i];
        tab[i] = tab[size - i - 1];
        tab[size - (i++) - 1] = temp;
    }
}

void    ft_sort_int_tab(int *tab, int size)
{
    int i;
    int j;
    int temp;

    j = 0;
    i = 0;
    while (i < size)
    {
        while (j < i)
        {
            if (tab[j] > tab[i])
            {
                temp = tab[j];
                tab[j] = tab[i];
                tab[i] = temp;
            }

            j++;
        }
        i++;
    }
}


#include <stdio.h>

int main()
{
    ft_putstr("hello world\n");
    ft_putchar(ft_strlen("hello") + '0');
    int array[5] = {12, 3, 4, 5, 7};
    
    // ft_rev_int_tab(array, 5);
    ft_sort_int_tab(array, 5);

    for (int i = 0; i < 3; i++)
    {
        printf("%d", array[i]);
    }

    return 0;
}