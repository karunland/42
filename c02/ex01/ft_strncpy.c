/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkorkmaz <hkorkmaz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 22:26:57 by hkorkmaz          #+#    #+#             */
/*   Updated: 2022/09/02 07:42:59 by hkorkmaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

typedef unsigned int	t_uint32_t;

char	*ft_strncpy(char *dest, char *src, t_uint32_t n)
{
	t_uint32_t	c;

	c = 0;
	while ((src[c] != '\0') && (c < n))
	{
		dest[c] = src[c];
		c++;
	}
	while (c < n)
	{
		dest[c] = '\0';
		c++;
	}
	return (dest);
}
// #include <stdio.h>
// #include <string.h>
// int main()
// {
//     char mysource[] = "aaaasddadccccca";
//     char mydestination[] = "bbbbbbb";
//     char *dest;
//     char *newsource = mydestination;
//     int size = 5;   
//     printf("src: %s || des: %s\n", mysource, mydestination);
//     // dest = ft_strcpy(mydestination, mysource);
//     // ft_strncpy(newsource, mysource, size);
//     strncpy(newsource, mysource, size);
//     printf("src: %s || des: %s\n", mysource, newsource);
//     return (0);
// }
