/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xagarcia <xagarcia@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 16:57:20 by xagarcia          #+#    #+#             */
/*   Updated: 2022/07/25 17:57:34 by xagarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 32 && str [i] != 127)
		{
			i++;
		}
		else
		{
			return (0);
		}
	}
	if (i == 0)
	{
		return (1);
	}
	else
	{
		return (1);
	}
}
