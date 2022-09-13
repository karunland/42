/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkorkmaz <hkorkmaz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 23:41:21 by hkorkmaz          #+#    #+#             */
/*   Updated: 2022/09/02 00:45:59 by hkorkmaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 32 && str [i] <= 126))
			return (0);
		i++;
	}
	return (1);
}
// #include <stdio.h>
// #include <string.h>
// int main()
// {
//     char arr[] = "ABCDEaDEA\n";
//     char *p = arr;
//     int temp = ft_str_is_printable(arr);
//     printf("%d", temp);
//     return (0);
// }