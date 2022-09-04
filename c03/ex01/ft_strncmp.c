/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkorkmaz <hkorkmaz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 08:18:02 by hkorkmaz          #+#    #+#             */
/*   Updated: 2022/09/04 08:45:10 by hkorkmaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, int n)
{
	int	i;

	i = 0;
	while (*s1 == *s2 && i < n)
	{
		if (*s1 == '\0' || *s2 == '\0')
			break ;
		s1++;
		s2++;
		i++;
	}
	if (*s1 == '\0' && *s2 == '\0')
		return (0);
	else
		return (*(s1) - *(s2));
}
// #include <stdio.h>
// #include <string.h>
// int main(void)
// {
//     char array1[] = "a";
//     char array2[] = "abcde";
//     // int temp = strncmp(array1, array2, 4);
//     int temp = ft_strncmp(array1, array2, 1);
//     printf("ret value: %d\n", temp);
//     return 0;
// }
