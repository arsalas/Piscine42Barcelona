/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aramirez <aramirez@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 16:12:57 by aramirez          #+#    #+#             */
/*   Updated: 2021/12/10 18:14:30 by aramirez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print(int val[], int n)
{
	int		i;
	char	c;

	i = 0;
	while (i < n)
	{
		c = '0' + val[i];
		write(1, &c, 1);
		i++;
	}
	if ((10 - n) != val[0])
		write(1, ", ", 2);
}

int	is_finish(int n, int pos, int prev, int val[])
{
	int	res;

	if (pos >= 0)
	{
		if ((10 - n) != val[0])
			res = 1;
	}
	else
	{
		res = 0;
	}
	return (res);
}	

void	get_comb(int n, int pos, int prev, int val[])
{
	prev++;
	val[pos] = prev;
	if (pos == (n - 1))
	{
		if (prev < 10)
			print(val, n);
		while (prev >= 9)
		{
			pos--;
			prev = val[pos];
			if ((val[pos] + 1) == val[pos + 1])
			{
				pos--;
				prev = val[pos];
			}
		}
		if (is_finish(n, pos, prev, val) == 1)
			get_comb(n, pos, prev, val);
	}
	else
	{
		pos++;
		get_comb(n, pos, prev, val);
	}
}

void	ft_print_comb(int n)
{
	int	val[10];

	if (n > 0 && n < 10)
	{
		get_comb(n, 0, -1, val);
	}
}
