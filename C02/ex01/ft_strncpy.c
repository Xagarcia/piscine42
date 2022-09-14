/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xagarcia <xagarcia@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 17:29:59 by xagarcia          #+#    #+#             */
/*   Updated: 2022/07/25 17:55:53 by xagarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((src[i] != '\0') && (i < n))
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
/*
int	main(void)
{
	char	x[] = "esto es destino";
	char	y[] = "esto es origen";
	unsigned int	N;

	N = 2;

	printf("antes y = %s, x = %s\n", y, x);

	ft_strncpy(y, x, N);

	printf("despues y = %s, x = %s\n", y, x);
	return (0);
}*/
