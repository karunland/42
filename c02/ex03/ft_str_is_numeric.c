/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkorkmaz <hkorkmaz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 23:31:01 by hkorkmaz          #+#    #+#             */
/*   Updated: 2022/09/01 23:34:27 by hkorkmaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 48 && str [i] <= 57))
			return (0);
		i++;
	}
	return (1);
}
// #include <stdio.h>
// #include <string.h>
// int main()
// {
//     char arr[] = "12a131";
//     char *p = arr;
//     int temp = ft_str_is_numeric(arr);
//     printf("%d", temp);
// }