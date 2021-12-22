/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aramirez <aramirez@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 18:29:39 by aramirez          #+#    #+#             */
/*   Updated: 2021/12/15 18:29:41 by aramirez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	convert_to_hexa(int i)
{
	char	n1;
	char	n2;

	n1 = ("0123456789abcdef"[i / 16]);
	n2 = ("0123456789abcdef"[i % 16]);
	write(1, "\\", 1);
	write(1, &n1, 1);
	write(1, &n2, 1);
}

void	ft_putstr_non_printable(char *str)
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
		if (!(str[i] >= 32 && str[i] <= 126))
		{
			convert_to_hexa(str[i]);
		}
		else
		{
			write(1, &str[i], 1);
		}
		i++;
	}
}
