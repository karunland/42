/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkorkmaz <hkorkmaz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 10:33:09 by hkorkmaz          #+#    #+#             */
/*   Updated: 2022/09/01 18:01:18 by hkorkmaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	step;
	int	i;
	int	temp;

	step = 0;
	i = 0;
	while (step < size)
	{
		while (i < size - 1 - step)
		{
			if (tab[i] > tab[i + 1])
			{
				temp = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = temp;
			}
			i++;
		}
		i = 0;
		step++;
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
// int main()
// {
// 	int array[] = {1,3,4,5,6, 0};
// 	int *p;
// 	printarr(array, 6);
// 	p = array;
// 	ft_sort_int_tab(p, 6);
// 	printarr(array, 6);
// 	return 0;
// }