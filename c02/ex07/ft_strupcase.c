/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkorkmaz <hkorkmaz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 00:57:41 by hkorkmaz          #+#    #+#             */
/*   Updated: 2022/09/02 01:04:16 by hkorkmaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] -= 32;
		}
		i++;
	}
	return (str);
}
// #include <stdio.h>
// #include <string.h>
// int main()
// {
//     char arr[] = "aaaa 11sdwW\n";
//     char *p = arr;
//     ft_strupcase(arr);
//     printf("%s", arr);
//     return (0);
// }