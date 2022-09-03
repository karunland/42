/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkorkmaz <hkorkmaz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 16:07:00 by hkorkmaz          #+#    #+#             */
/*   Updated: 2022/09/01 18:00:59 by hkorkmaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	temp;

	j = 0;
	i = 0;
	while (i < size / 2)
	{
		temp = tab[i];
		tab[i] = tab[size - i - 1];
		tab[size - (i++) - 1] = temp;
	}
}
// #include <stdio.h>
// void printarr(int arr[], int size)
// {
// 	for (int i = 0; i < size; i++)
// 	{
// 		printf("%d ", arr[i]);
// 	}
// 	printf("\n");
// }
// int main ()
// {
// 	int array[] = {1,4,3,5,6,7};
// 	int *p;
// 	p = array;
// 	printarr(array, 6);
// 	ft_rev_int_tab(p, 6);
// 	printarr(array, 6);
// }