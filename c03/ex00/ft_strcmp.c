/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkorkmaz <hkorkmaz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 08:18:02 by hkorkmaz          #+#    #+#             */
/*   Updated: 2022/09/03 23:55:55 by hkorkmaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while ((*(s1 + i) == *(s2 + i)) && (*(s1 + i)) && (*(s2 + i)))
		i++;
	return (*(s1 + i) - *(s2 + i));
}
// #include <stdio.h>
// #include <string.h>
// int main(void)
// {
//     char array1[] = "aba";
//     char array2[] = "abade";

//     // int temp = strcmp(array1, array2);
//     int temp = ft_strcmp(array1, array2);
//     printf("ret value: %d\n", temp);
//     return 0;
// }
