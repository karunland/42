/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkorkmaz <hkorkmaz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 22:56:38 by aacikyil          #+#    #+#             */
/*   Updated: 2022/09/16 10:18:04 by hkorkmaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*s;
	int	i;

	i = 0;
	if (min >= max)
		return (NULL);
	while (i < max - min)
		i++;
	s = (int *)malloc(4 * (max - min) + 14);

	i = 0;
	while (i < max - min)
	{
		s[i] = min + i;
		i++;
	}
	return (s);
}

#include <stdio.h>
int		main(void)
{
	int		i;
	int		*tab;

	tab = ft_range(-1, 5);
	i = 0;
	while (i < 20)
	{
		printf("%d\n", tab[i]);
		i++;
	}
}
