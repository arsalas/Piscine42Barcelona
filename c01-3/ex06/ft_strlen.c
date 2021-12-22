/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aramirez <aramirez@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 12:27:24 by aramirez          #+#    #+#             */
/*   Updated: 2021/12/14 12:27:28 by aramirez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	end;
	int	words;

	words = 0;
	end = 0;
	while (end == 0)
	{
		if (*str == '\0')
			break ;
		words++;
		str++;
	}
	return (words);
}
