/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkorkmaz <hkorkmaz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 02:33:53 by hkorkmaz          #+#    #+#             */
/*   Updated: 2022/09/02 07:59:00 by hkorkmaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

typedef unsigned int	t_uint32_t;

t_uint32_t	ft_strlcpy(char *dest, char *src, t_uint32_t size)
{
	t_uint32_t	sourcesize;
	t_uint32_t	i;

	sourcesize = 0;
	i = 0;
	while (src[sourcesize] != '\0')
		sourcesize++;
	if (size > 0)
	{
		while (src[i] != '\0' && i < (size - 1))
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (sourcesize);
}
// #include <stdio.h>
// void test(int size)
// {
//     char string[] = "Hello, dasd";
//     char buffer[19];
//     int r;
//     r = ft_strlcpy(buffer,string,size);
//     printf("Copied '%s' into '%s', length %d\n",
//             string,
//             buffer, r);
// }
// int main(void)
// {
//     test(19);
//     test(10);
//     test(5);
//     test(1);
//     test(0);
//     return(0);
// }
