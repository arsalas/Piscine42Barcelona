/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aramirez <aramirez@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 13:34:41 by aramirez          #+#    #+#             */
/*   Updated: 2021/12/14 13:34:42 by aramirez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	aux;

	i = 0;
	while (i <= size)
	{
		if (i > size -1 - i)
			break ;
		aux = tab[size - i - 1];
		tab[size - i - 1] = tab[i];
		tab[i] = aux;
		i++;
	}
}
