/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkorkmaz <hkorkmaz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 11:55:01 by hkorkmaz          #+#    #+#             */
/*   Updated: 2022/09/04 09:41:39 by hkorkmaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

typedef unsigned int	t_uint32_t;

t_uint32_t	ft_strlen(char *str)
{
	t_uint32_t	counter;

	counter = 0;
	while (*(str + ++counter))
		;
	return (counter);
}

t_uint32_t	ft_strlcat(char *dest, char *src, t_uint32_t size)
{
	t_uint32_t	c;
	t_uint32_t	d;

	if (size <= ft_strlen(dest))
		return (ft_strlen(src) + size);
	d = 0;
	c = ft_strlen(dest);
	while (src[d] && c < size - 1)
	{
		dest[c] = src[d];
		d++;
		c++;
	}
	dest[c] = '\0';
	return (ft_strlen(dest) + ft_strlen(&src[d]));
}
// #include <stdio.h>
// #include <string.h>
// int main()
// {
//     char first[] = "aaaaa";
//     char last[] = "bbbbbb";
//     int r;
//     int size = 9;
//     char buffer[size];
//     strcpy(buffer, first);
//     // r = strlcat(first, last, size);
//     r = ft_strlcat(first, last, size);
//     puts(first);
//     printf("Value returned: %d\n", r);
//     if( r > size )
//         puts("String truncated");
//     else
//         puts("String was fully copied");
//     return(0);
// }
