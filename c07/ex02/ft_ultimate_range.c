/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkorkmaz <hkorkmaz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 23:10:24 by aacikyil          #+#    #+#             */
/*   Updated: 2022/09/16 10:24:55 by hkorkmaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

// * ( *(p + 0) + 0)
int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	*range = (int *)malloc(sizeof(int) * (max - min));
	if (*range == NULL)
		return (-1);
	else
	{
		i = 0;
		while (i < max - min)
		{
			range[0][i] = min + i;
			i++;
		}
		return (i);
	}
}
// #include <stdio.h>
// int		main(void)
// {
// 	int		*range;
// 	int		i;

// 	i = 0;
// 	printf("return edilen değer :%d\n", ft_ultimate_range(&range, 10, 20));
// 	while (i < 10)
// 	{
// 		printf("Range'in içi");
// 	printf("%d\n", range[i]);
// 		i++;
// 	}
// 	return (0);
// }
