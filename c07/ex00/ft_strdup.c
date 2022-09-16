/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkorkmaz <hkorkmaz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 19:55:15 by aacikyil          #+#    #+#             */
/*   Updated: 2022/09/16 10:12:57 by hkorkmaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		i;
	char	*s;

	i = 0;
	while (src[i])
		i++;
	s = (char *)malloc(sizeof(src) + 1);
	i = 0;
	if (!s)
	{
		return ((void *)0);
	}
	while (src[i])
	{
		s[i] = src[i];
		i++;
	}
	s[i] = '\0';
	return (s);
}

#include <stdio.h>
int	main(void)
{
	char *src = "Faruk asdasd asda sd";
	printf("%s", ft_strdup(src));
}
