/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkorkmaz <hkorkmaz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 08:18:02 by hkorkmaz          #+#    #+#             */
/*   Updated: 2022/09/04 17:21:11 by hkorkmaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	while (n > 0)
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		if (*s1 == '\0')
			return (0);
		s1++;
		s2++;
		n--;
	}
	return (0);
}
// #include <stdio.h>
// #include <string.h>
// #include <unistd.h>
// int main(void)
// {
//     char array1[] = "aasd";
//     char array2[] = "abcde";
//     // int temp = strncmp(array1, array2, 4);
//     int temp = ft_strncmp(array1, array2, 0);
//     printf("ret value: %d\n", temp);
//     return 0;
// }
