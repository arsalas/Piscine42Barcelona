/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aramirez <aramirez@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 17:48:53 by aramirez          #+#    #+#             */
/*   Updated: 2021/12/14 17:48:55 by aramirez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	order_array(int *tab, int size)
{
	int	i;
	int	position;
	int	aux;
	int	finish;

	finish = 1;
	position = 0;
	while (position < size)
	{
		i = position + 1;
		while (i < size)
		{
			if (tab[position] > tab[i])
			{
				aux = tab[i];
				tab[i] = tab[position];
				tab[position] = aux;
				finish = 0;
				break ;
			}
			i++;
		}
		position++;
	}
	return (finish);
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	finish;

	finish = 0;
	while (finish == 0)
	{
		finish = order_array(tab, size);
	}
}
