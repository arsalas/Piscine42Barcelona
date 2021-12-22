/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aramirez <aramirez@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 16:57:18 by aramirez          #+#    #+#             */
/*   Updated: 2021/12/08 13:06:39 by aramirez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_char(char position, char comb[3], char *delimiter)
{
	write(1, comb, 3);
	if (position < '7')
		write(1, delimiter, 2);
}

void	ft_print_comb(void)
{
	char	n[3];
	char	comb[3];
	char	*delimiter;

	delimiter = ", ";
	n[0] = '0';
	while (n[0] <= '9')
	{
		n[1] = n[0] + 1;
		comb[0] = n[0];
		while (n[1] <= '9')
		{
			n[2] = n[1] + 1;
			comb[1] = n[1];
			while (n[2] <= '9')
			{
				comb[2] = n[2];
				print_char(n[0], comb, delimiter);
				n[2]++;
			}
			n[1]++;
		}
		n[0]++;
	}
}
