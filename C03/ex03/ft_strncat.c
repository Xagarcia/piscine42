/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xagarcia <xagarcia@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 19:38:56 by xagarcia          #+#    #+#             */
/*   Updated: 2022/07/28 15:29:23 by xagarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	a;
	int				b;

	a = 0;
	b = ft_strlen(dest);
	while ((src[a] != '\0') && (a < nb))
	{
		dest[b] = src[a];
		b++;
		a++;
	}
	dest[b] = '\0';
	return (dest);
}
