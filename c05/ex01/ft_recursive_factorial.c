/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkorkmaz <hkorkmaz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 20:00:02 by hkorkmaz          #+#    #+#             */
/*   Updated: 2022/09/11 05:22:21 by hkorkmaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	if (nb != 0)
		return (nb * ft_recursive_factorial(nb - 1));
	else
		return (1);
}
// #include <stdio.h>
// int main()
// {
// 	int i = 0;
// 	while (i < 15)
// 	{
// 		printf("%d \n", ft_recursive_factorial(i++));
// 	}
// 	return 0;
// }