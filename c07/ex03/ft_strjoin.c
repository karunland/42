/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkorkmaz <hkorkmaz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 23:28:37 by aacikyil          #+#    #+#             */
/*   Updated: 2022/09/16 10:28:23 by hkorkmaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	char	*s;
	int		j;
	int		k;

	k = 0;
	i = 0;
	s = (char *)realloc(0);
	while (i < size)
	{
		j = 0;
		while (strs[i][j] != '\0')
			s[k++] = strs[i][j++];
		j = 0;
		while (sep[j] != '\0' && i != size - 1)
			s[k++] = sep[j++];
		i++;
	}
	s[k] = '\0';
	return (s);
}

#include <stdio.h>
int	main(void)
{
	char	*tab[4];
	tab[0] = "faruk";
	tab[1] = "gulsoken";
	tab[2] = "ve";
	tab[3] = "muritleri";
	printf("%s", ft_strjoin(4, tab, "  "));
	return (0);
}