/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xagarcia <xagarcia@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 16:31:26 by xagarcia          #+#    #+#             */
/*   Updated: 2022/07/25 17:56:31 by xagarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
int	main(void)
{
	char	fuente[] = "esto es src string";
	char	destino[] = "esto es dest string";
	char	*dest;

	printf("antes %s, %s\n", fuente, destino);

	dest = ft_strcpy(destino, fuente);

	printf("despues %s, %s\n", fuente, destino);
	return (0);
}*/
