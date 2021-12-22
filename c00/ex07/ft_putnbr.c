/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aramirez <aramirez@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 13:13:29 by aramirez          #+#    #+#             */
/*   Updated: 2021/12/10 15:20:51 by aramirez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	max_number(int nb)
{
	if (nb == -2147483648)
	{
		write(1, "2147483648", 10);
	}
}

void	print_numbers(int nb)
{
	char	c;
	int		d;
	int		n;
	int		p;

	d = 0;
	p = 1;
	n = nb;
	while (n > 9)
	{
		n /= 10;
		d++;
	}
	c = '0' + n;
	write(1, &c, 1);
	if (nb == 10)
		write(1, "0", 1);
	if (nb > 9)
	{
		while (d > 0)
		{
			p = 10 * p;
			if (d == 2)
			{
				if (nb / p == 10  && d > 1)
					write(1, "0" ,1);
			}
			d--;
		}
	
		print_numbers(nb % p);
	}
}

void	ft_putnbr(int nb)
{
	if (nb < 0)
	{
		nb = nb * -1;
		write(1, "-", 1);
	}
	if (nb == -2147483648)
	{
		write(1, "2147483648", 10);
	}
	else
	{
		print_numbers(nb);
	}
}
