/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkorkmaz <hkorkmaz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 09:29:46 by hkorkmaz          #+#    #+#             */
/*   Updated: 2022/09/10 14:49:01 by hkorkmaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

typedef unsigned int	t_uin32;

/*
 * check is the nbr negative or not
 * if nbr is greater thatn size recursive it
 * finally print out to stdout via write func
 * */
void	ft_putnbr_base_rec(int nbr, char *base, int size)
{
	t_uin32	n;
	char	i;

	if (nbr < 0)
	{
		write(1, "-", 1);
		n = nbr * (-1);
	}
	else
		n = nbr;
	if (n >= (t_uin32)size)
		ft_putnbr_base_rec(n / size, base, size);
	i = base[n % size];
	write(1, &i, 1);
}

/*
 * check string for unwanted chars
 * */
int	ft_ver_bas(char *base)
{
	int	i;

	i = 0;
	while (base[i] != '\0')
	{
		if (base[i] == '+' || base[i] == '-' || base[i] == base[i + 1])
			return (0);
		i++;
	}
	if (i <= 1)
		return (0);
	return (1);
}

/*
 * print string based on new base using our funcs
 * */
void	ft_putnbr_base(int nbr, char *base)
{
	int	s;

	s = 0;
	if (ft_ver_bas(base) == 1)
	{
		while (base[s] != '\0')
			s++;
		ft_putnbr_base_rec(nbr, base, s);
	}
}
// #include <stdio.h>
// #include <stdlib.h>
// int main(int argc, char *argv[])
// {
// 	char base[] = "01";
// 	unsigned long c;
// 	c = 10;
// 	// while (c < (sizeof(base)))
// 	// {
// 	// 	ft_putnbr_base(c + 1, base);
// 	// 	printf("\n");
// 	// 	c++;
// 	// }
// 	printf("\n");
// 	if (argc != 2)
// 		return 0;
// 	ft_putnbr_base(atoi(argv[1]), base);
// 	printf("\n");
// }
