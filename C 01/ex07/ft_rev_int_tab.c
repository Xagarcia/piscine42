/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xagarcia <xagarcia@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 19:35:00 by xagarcia          #+#    #+#             */
/*   Updated: 2022/07/20 20:24:16 by xagarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	temp;

	i = 0;
	while (i < size / 2)
	{
		temp = tab[i];
		tab[i] = tab[size - i - 1];
		tab[size - i -1] = temp;
		i++;
	}
}
/*
void	putarr(int arr[], int size)
{
	for (int i = 0; i < (size -1); i++)
		printf("%d, ", arr[i]);
	printf("%d\n", arr[size - 1]);
}

int	main(void)
{
	int tab[] = {1, 2, 3, 4};
	int size;

	size = 4;

	printf("1: ");
	putarr(tab, size);

	ft_rev_int_tab(tab, size);

	printf("2: ");
	putarr(tab, size);
}*/
