/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aramirez <aramirez@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 14:23:10 by aramirez          #+#    #+#             */
/*   Updated: 2021/12/15 14:23:12 by aramirez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
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
			break ;
		if (!((str[i] >= 'a' && str[i] <= 'z')))
		{
			result = 0;
		}
		i++;
	}
	return (result);
}
