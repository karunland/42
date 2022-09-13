/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkorkmaz <hkorkmaz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 23:35:18 by hkorkmaz          #+#    #+#             */
/*   Updated: 2022/09/02 02:51:28 by hkorkmaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	c;

	c = 0;
	while (str[c] != '\0')
	{
		if ((str[c] < 'a') || (str[c] > 'z'))
			return (0);
		c++;
	}
	return (1);
}
// #include <stdio.h>
// #include <string.h>
// int main()
// {
//     char arr[] = "asd1asd";
//     char *p = arr;
//     int temp = ft_str_is_lowercase(arr);
//     printf("%d", temp);
//     return (0);
// }