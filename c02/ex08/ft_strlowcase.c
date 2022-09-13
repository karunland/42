/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkorkmaz <hkorkmaz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 00:57:41 by hkorkmaz          #+#    #+#             */
/*   Updated: 2022/09/02 01:04:44 by hkorkmaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] += 32;
		}
		i++;
	}
	return (str);
}
// #include <stdio.h>
// #include <string.h>
// int main()
// {
//     char arr[] = "AAAAA 11sdwW\n";
//     char *p = arr;
//     ft_strlowcase(arr);
//     printf("%s", arr);
//     return (0);
// }