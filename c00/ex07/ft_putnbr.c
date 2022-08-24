#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

// only positive numbers
void ft_putnumber(int nb)
{
    ft_putchar('0' + nb);
}

void ft_putnbr(int nb)
{
    // temp = nb;
    if (nb < 0)
    {
        return;
    }
    else
    {
        while (nb != 0)
        {
            // ft_putnumber(nb % 10);
            nb /= 10;
            temp = nb + temp * 10;
        }
        while (nb != 0)
        {
            ft_putnumber(nb % 10);
            nb /= 10;
        }
    }
}

void main()
{
    ft_putnbr(155);
    return;
}