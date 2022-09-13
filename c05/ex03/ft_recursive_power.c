/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkorkmaz <hkorkmaz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 19:53:52 by hkorkmaz          #+#    #+#             */
/*   Updated: 2022/09/11 05:22:47 by hkorkmaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power > 0)
		return (nb * ft_recursive_power(nb, power - 1));
	return (1);
}
// #include <stdio.h>
// #include <math.h>
// int main(void)
// {
// 	int i = 0;
// 	while (i < 15)
// 	{
// 		printf("square of %d is %-15d\t", i, ft_recursive_power(i, i));
// 		printf("square of %d is %d\n", i, (int)pow(i, i));
// 		i++;
// 	}
// 	printf("is %d\n", ft_recursive_power(2, 30));
// 	return 0;
// }