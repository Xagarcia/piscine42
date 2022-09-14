/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xagarcia <xagarcia@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/15 14:14:58 by xagarcia          #+#    #+#             */
/*   Updated: 2022/07/20 16:58:52 by xagarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	if (b != 0)
	{
		*div = a / b;
		*mod = a % b;
	}
}
/*
int	main(void)
{
	int	a;
	int	b;
	int	c;
	int	d;

	a = 4;
	b = 17;
	c = 0;
	d = 0;
	ft_div_mod(b, a, &c, &d);
	printf("%d", c);
	printf("%d", d);
}*/
