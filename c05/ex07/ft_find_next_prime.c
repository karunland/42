/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkorkmaz <hkorkmaz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 19:54:04 by hkorkmaz          #+#    #+#             */
/*   Updated: 2022/09/11 05:21:48 by hkorkmaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	i = 3;
	if (nb <= 1)
		return (0);
	if (nb <= 3)
		return (1);
	if (nb % 2 == 0)
		return (0);
	while (i < nb / 2)
	{
		if (nb % i == 0)
			return (0);
		i += 2;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	if (nb < 3)
		return (2);
	if (nb % 2 == 0)
		nb ++;
	while (!(ft_is_prime(nb)))
		nb += 2;
	return (nb);
}
// #include <stdio.h>
// int
// main(void)
// {
// 	printf("-10 = %d (0)\n", ft_find_next_prime(-10));
// 	printf("-1 = %d (0)\n", ft_find_next_prime(-1));
// 	printf(" 0 = %d (0)\n", ft_find_next_prime(0));
// 	printf(" 1 = %d (0)\n", ft_find_next_prime(1));
// 	printf(" 2 = %d (1)\n", ft_find_next_prime(2));
// 	printf(" 3 = %d (1)\n", ft_find_next_prime(3));
// 	printf(" 4 = %d (0)\n", ft_find_next_prime(4));
// 	printf(" 5 = %d (1)\n", ft_find_next_prime(5));
// 	printf(" 6 = %d (0)\n", ft_find_next_prime(6));
// 	printf(" 7 = %d (1)\n", ft_find_next_prime(7));
// 	printf(" 8 = %d (0)\n", ft_find_next_prime(8));
// 	printf(" 9 = %d (0)\n", ft_find_next_prime(9));
// 	printf(" 10 = %d (0)\n", ft_find_next_prime(10));
// 	printf(" 11 = %d (1)\n", ft_find_next_prime(11));
// 	printf(" 523 = %d \n", ft_find_next_prime(523));
// 	printf(" 6424 = %d \n", ft_find_next_prime(6424));
// 	printf(" 7533 = %d \n", ft_find_next_prime(7533));
// 	printf(" 8123 = %d \n", ft_find_next_prime(8123));
// 	printf(" 924 = %d \n", ft_find_next_prime(924));
// 	printf(" 140 = %d \n", ft_find_next_prime(140));
// 	printf(" 115 = %d \n", ft_find_next_prime(115));
// }