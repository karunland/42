/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkorkmaz <hkorkmaz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 16:25:52 by hkorkmaz          #+#    #+#             */
/*   Updated: 2022/08/24 16:26:06 by hkorkmaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
	return ;
}

void	ft_print_reverse_alphabet(void)
{
	int	i;

	i = 0;
	while (i <= ('z' - 'a'))
	{
		ft_putchar('z' - i++);
	}
	return ;
}
