/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkorkmaz <hkorkmaz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 16:13:35 by hkorkmaz          #+#    #+#             */
/*   Updated: 2022/08/26 13:10:22 by hkorkmaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
	return ;
}

void	ft_is_negative(int n)
{
	if (n >= 0 || n == '\0')
	{
		ft_putchar('P');
	}
	else
	{
		ft_putchar('N');
	}
}
