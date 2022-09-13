/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkorkmaz <hkorkmaz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 23:35:18 by hkorkmaz          #+#    #+#             */
/*   Updated: 2022/09/01 23:39:35 by hkorkmaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	c;

	c = 0;
	while (str[c] != '\0')
	{
		if ((str[c] < 'A') || (str[c] > 'Z'))
			return (0);
		c++;
	}
	return (1);
}
// #include <stdio.h>
// #include <string.h>
// int main()
// {
//     char arr[] = "ABCDEaDEA";
//     char *p = arr;
//     int temp = ft_str_is_uppercase(arr);
//     printf("%d", temp);
//     return (0);
// }