/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkorkmaz <hkorkmaz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 10:09:18 by hkorkmaz          #+#    #+#             */
/*   Updated: 2022/09/04 09:42:52 by hkorkmaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

typedef unsigned int	t_uint32_t;

char	*ft_strncat(char *dest, char *src, t_uint32_t nb)
{
	t_uint32_t	size;
	t_uint32_t	last_index;

	size = 0;
	last_index = 0;
	while (dest[++size])
		;
	while (src[last_index] && last_index < nb)
	{
		dest[size + last_index] = src[last_index];
		last_index++;
	}
	dest[size + last_index] = '\0';
	return (dest);
}
// #include <stdio.h>
// #include <string.h>
// int main(void)
// {
//     int temp;
//     char array[] = "har";
//     char array2[] = "un korkmaz\n";
//     char *p;
//     p = ft_strncat(array, array2, sizeof(array2));
//     printf("%s", p);
//     return 0;
// }
