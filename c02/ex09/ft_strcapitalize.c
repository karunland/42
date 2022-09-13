/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkorkmaz <hkorkmaz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 01:07:57 by hkorkmaz          #+#    #+#             */
/*   Updated: 2022/09/02 08:09:45 by hkorkmaz         ###   ########.fr       */
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

int	check(char c)
{
	if (c <= 'z' && c >= 'a' && c != '\0')
	{
		return (1);
	}
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	if (*str == '\0')
		return (str);
	i = 0;
	ft_strlowcase(str);
	if (check(str[0]))
	{
		str[0] -= 32;
	}
	while (str[i + 1] != '\0')
	{
		if ((str[i] < '0') || (str[i] > '9' && str[i] < 'A')
			|| (str[i] > 'Z' && str[i] < 'a') || (str[i] > 'z'))
			if (check (str[i + 1]))
				str[i + 1] -= 32;
		i++;
	}
	return (str);
}
// #include <stdio.h>
// int main(void)
// {
//     char array[] = "sLt, cMt tU vAs ? 4s qa-dx; ce+et+un";
//     char *p = array;
//     printf("1[ %s ]\n", array);
//     p = ft_strcapitaliaze(p);
//     printf("2[ %s ]", array);
//     return 0;
// }
