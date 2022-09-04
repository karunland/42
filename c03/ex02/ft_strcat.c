/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkorkmaz <hkorkmaz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 08:59:48 by hkorkmaz          #+#    #+#             */
/*   Updated: 2022/09/04 09:49:39 by hkorkmaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	c;

	c = 0;
	while (str[++c] != '\0')
		;
	return (c);
}

char	*ft_strcat(char *dest, char *src)
{
	int	size;

	size = ft_strlen(dest);
	while (*src)
	{
		*(dest + size++) = *src++;
	}
	dest[size] = '\0';
	return (dest);
}
// #include <stdio.h>
// #include <string.h>
// int main(void)
// {
//     int temp;
//     char array[] = "bbbbbb";
//     char array2[] = "kasdasasdasdadadsdasdz\n";
//     char *p;
//     // temp = strlen(array);
//     temp = ft_strlen(array);
//     printf("str size is %d\n", temp);
//     p = ft_strcat(array, array2);
//     printf("%s", p);
//     return 0;
// }
