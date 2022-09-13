/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkorkmaz <hkorkmaz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 19:54:01 by hkorkmaz          #+#    #+#             */
/*   Updated: 2022/09/11 05:21:56 by hkorkmaz         ###   ########.fr       */
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
		i++;
	}
	return (1);
}
// #include <stdio.h>
// int
// main(void)
// {
// 	printf("-10 = %d (0)\n", ft_is_prime(-10));
// 	printf("-1 = %d (0)\n", ft_is_prime(-1));
// 	printf(" 0 = %d (0)\n", ft_is_prime(0));
// 	printf(" 1 = %d (0)\n", ft_is_prime(1));
// 	printf(" 2 = %d (1)\n", ft_is_prime(2));
// 	printf(" 3 = %d (1)\n", ft_is_prime(3));
// 	printf(" 4 = %d (0)\n", ft_is_prime(4));
// 	printf(" 5 = %d (1)\n", ft_is_prime(5));
// 	printf(" 6 = %d (0)\n", ft_is_prime(6));
// 	printf(" 7 = %d (1)\n", ft_is_prime(7));
// 	printf(" 8 = %d (0)\n", ft_is_prime(8));
// 	printf(" 9 = %d (0)\n", ft_is_prime(9));
// 	printf(" 10 = %d (0)\n", ft_is_prime(10));
// 	printf(" 11 = %d (1)\n", ft_is_prime(11));
// }