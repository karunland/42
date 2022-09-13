/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkorkmaz <hkorkmaz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 04:12:23 by hkorkmaz          #+#    #+#             */
/*   Updated: 2022/09/13 09:40:15 by hkorkmaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	char	*p;

	(void)argc;
	if (argc > 0)
	{
		p = argv[0];
		while (*p)
			write(1, p++, 1);
	}
	write(1, "\n", 1);
	return (0);
}
