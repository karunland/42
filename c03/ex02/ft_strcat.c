/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkorkmaz <hkorkmaz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 08:59:48 by hkorkmaz          #+#    #+#             */
/*   Updated: 2022/09/04 17:21:56 by hkorkmaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	char	*temp_dest;
	char	*temp_source;

	temp_dest = dest;
	temp_source = src;
	while (*temp_dest)
		temp_dest++;
	while (*temp_source)
	{
		*temp_dest = *temp_source;
		temp_source++;
		temp_dest++;
	}
	*temp_dest = 0;
	return (dest);
}
// #include <stdio.h>
// #include <string.h>
// int main(void)
// {
//     char array[] = "bbbbas";
//     char array2[] = "kasdasasdasdadadsdasdz\n";
//     char *p;
//     p = ft_strcat(array, array2);
//     printf("%s", p);
//     return 0;
// }
