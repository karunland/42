/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkorkmaz <hkorkmaz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 11:55:01 by hkorkmaz          #+#    #+#             */
/*   Updated: 2022/09/10 14:59:09 by hkorkmaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

typedef unsigned int	t_uint32;

t_uint32	ft_strlen(char *str)
{
	t_uint32	counter;

	counter = 0;
	while (*str != '\0')
	{
		counter++;
		str++;
	}
	return (counter);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	t_uint32	c;
	t_uint32	d;

	if (size <= ft_strlen(dest))
		return (size + ft_strlen(src));
	c = ft_strlen(dest);
	d = 0;
	while (src[d] && c + 1 < size)
	{
		dest[c] = src[d];
		c++;
		d++;
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
