/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkorkmaz <hkorkmaz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 19:53:50 by hkorkmaz          #+#    #+#             */
/*   Updated: 2022/09/11 05:20:18 by hkorkmaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	i;

	i = 1;
	if (power < 0)
		return (0);
	while (power-- > 0)
	{	
		i *= nb;
	}
	return (i);
}
// #include <stdio.h>
// int main(void)
// {
// 	int i = 0;
// 	while (i < 15)
// 	{
// 		printf("square of %d is %d\n", i, ft_iterative_power(i, i));
// 		i++;		
// 	}
// 	printf("is %d\n", ft_iterative_power(2, 30));
// 	printf("is %d\n", ft_iterative_power(2, 0));
// 	return 0;
// }