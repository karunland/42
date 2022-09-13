/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkorkmaz <hkorkmaz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 19:53:59 by hkorkmaz          #+#    #+#             */
/*   Updated: 2022/09/11 03:09:02 by hkorkmaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #define ABS(n) (((n) < 0) ? -(n) : (n)) /* Absolute function */
#define MAXVAL 46341

int	ft_sqrt(int nb)
{
	int	n;

	if (nb <= 0)
		return (0);
	n = 1;
	if (nb > 0)
	{
		while ((n * n) <= nb)
		{
			if ((n * n) == nb)
				return (n);
			else if (n >= MAXVAL)
				return (0);
			n++;
		}
	}
	return (0);
}
// #include <stdio.h>
// int main(void)
// {
// 	int i=0;
// 	while (i<56)
// 	{
// 		printf("%d \n", ft_sqrt(i));
// 		i++;
// 	}
// 	return 0;
// }