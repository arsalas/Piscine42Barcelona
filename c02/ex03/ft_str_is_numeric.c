/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aramirez <aramirez@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 13:58:36 by aramirez          #+#    #+#             */
/*   Updated: 2021/12/15 13:58:38 by aramirez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	i;
	int	c;
	int	result;

	i = 0;
	c = 0;
	result = 1;
	while (result == 1)
	{
		if (str[i] == '\0')
		{
			if (i == 0)
			{
				return (result);
			}
			break ;
		}
		if (!((str[i] >= '0' && str[i] <= '9')))
		{
			result = 0;
		}
		i++;
	}
	return (result);
}
