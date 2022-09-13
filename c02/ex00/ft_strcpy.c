/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkorkmaz <hkorkmaz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 21:35:12 by hkorkmaz          #+#    #+#             */
/*   Updated: 2022/09/01 21:59:34 by hkorkmaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
// #include <stdio.h>
// #include <string.h>
// int main(void)
// {
//     char mysource[] = "aaaaaaa";
//     char mydestination[] = "bbbbbbb";
//     char *dest;
//     char *newsource = mydestination;
//     printf("src: %s || des: %s\n", mysource, mydestination);
//     // dest = ft_strcpy(mydestination, mysource);
//     ft_strcpy(newsource, mysource);
//     // strcpy(newsource, mysource);
//     printf("src: %s || des: %s\n", mysource, newsource);
//     return (0);
// }
