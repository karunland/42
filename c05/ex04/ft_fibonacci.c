/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkorkmaz <hkorkmaz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 19:53:54 by hkorkmaz          #+#    #+#             */
/*   Updated: 2022/09/11 05:22:07 by hkorkmaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index < 2)
		return (index);
	return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}
// #include <stdio.h>
// int main(void)
// {
// 	int temp=0;
// 	while (temp < 14)
// 	{
// 		printf("%d\n", ft_fibonacci(temp));
// 		temp++;
// 	}
// 	return (0);
// }