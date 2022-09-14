/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                  :+:      :+:    :+:  */
/*                                                    +:+ +:+         +:+     */
/*   By: xagarcia <xagarcia@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 17:43:09 by xagarcia          #+#    #+#             */
/*   Updated: 2022/07/25 20:34:02 by xagarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_lowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 65 && str[i] <= 90)
			str[i] += 32;
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int		i;
	int		y;

	i = 0;
	y = 1;
	ft_lowcase(str);
	while (str[i] != '\0')
	{
		if (str[i] >= 97 && str[i] <= 122)
		{
			if (y == 1)
				str[i] -= 32;
				y = 0;
		}
		else if (str[i] >= '0' && str[i] <= '9')
			y = 0;
		else
			y = 1;
		i++;
	}
	return (str);
}
