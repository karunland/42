/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkorkmaz <hkorkmaz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 20:00:02 by hkorkmaz          #+#    #+#             */
/*   Updated: 2022/09/11 03:35:57 by hkorkmaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	result;

	result = 1;
	if (nb < 0)
	{
		return (0);
	}
	else if (nb <= 1)
	{
		return (1);
	}
	while (nb > 0)
	{
		result *= (nb--);
	}
	return (result);
}
// #include <stdio.h>
// int main()
// {
// 	int i = 0;
// 	while (i < 15)
// 	{
// 		printf("%d \n", ft_iterative_factorial(i++));
// 	}
// 	return 0;
// }