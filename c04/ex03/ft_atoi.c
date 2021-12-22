/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aramirez <aramirez@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/22 12:05:50 by aramirez          #+#    #+#             */
/*   Updated: 2021/12/22 12:05:53 by aramirez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	i;
	int	res;
	int	sign;

	res = 0;
	sign = 1;
	i = 0;
	while (str[i] >= '\t' && str[i] <= '\r' || str[i] == ' ')
		i++;
	while (str[i] == '-' || str[i] == '+' )
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] != '\0')
	{
		if (!(str[i] >= '0' && str[i] <= '9'))
			break ;
		res = res * 10 + str[i] - '0';
		i++;
	}
	return (sign * res);
}
