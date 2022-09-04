/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkorkmaz <hkorkmaz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 11:46:43 by hkorkmaz          #+#    #+#             */
/*   Updated: 2022/09/03 23:21:35 by hkorkmaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		j = 0;
		while (str[i + j] == to_find[j] && str[i + j])
		{
			if (to_find[j + 1] == '\0')
				return (&str[i]);
			j++;
		}
		i++;
	}
	return (0);
}
// #include <stdio.h>
// #include <string.h>
// int main(void)
// {
//     char arry[] = "the tence contains words.";
//     char find[] = "sentence";
//     char *p;
//     // p = strstr(arry, find);
//     p = ft_strstr(arry, find);
//     printf("%s", p);
//     return 0;   
// }
