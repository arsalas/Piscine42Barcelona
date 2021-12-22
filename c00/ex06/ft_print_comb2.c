/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aramirez <aramirez@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 12:09:28 by aramirez          #+#    #+#             */
/*   Updated: 2021/12/08 20:32:41 by aramirez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_chars(int n)
{
	char	c1;
	char	c2;

	c1 = '0' + n / 10;
	c2 = '0' + n % 10;
	write(1, &c1, 1);
	write(1, &c2, 1);
}

void	print_space(void)
{
	write(1, " ", 1);
}

void	print_separation(void)
{
	write(1, ", ", 2);
}

void	print(int n1, int n2)
{
	print_chars(n1);
	print_space();
	print_chars(n2);
	if (!(n1 == 98 && n2 == 99))
		print_separation();
}

void	ft_print_comb2(void)
{
	int	n1;
	int	n2;

	n1 = 0;
	while (n1 <= 99)
	{
		n2 = n1 + 1;
		while (n2 <= 99)
		{
			print(n1, n2);
			n2++;
		}
		n1++;
	}
}
