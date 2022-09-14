/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xagarcia <xagarcia@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 13:06:22 by xagarcia          #+#    #+#             */
/*   Updated: 2022/07/20 19:07:26 by xagarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;

	div = *a / *b;
	*b = *a % *b;
	*a = div;
}
/*
int	main(void)
{
	int	a = 4;
	int	b = 17;
	int *c = &a;
	int *d= &b;

	printf("%d /",a);
	printf(" %d\n",b);

	ft_ultimate_div_mod(c, d);

	printf("div (*c) = %d\n",*c);
	printf("mod (*d) = %d",*d);
}*/
