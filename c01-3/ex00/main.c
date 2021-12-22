/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aramirez <aramirez@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/12 12:45:40 by aramirez          #+#    #+#             */
/*   Updated: 2021/12/12 13:23:24 by aramirez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	ft_ft(int *nbr);

int	main(void)
{
	int nbr, *d_nbr;
	nbr = 5;
	d_nbr = &nbr;
	printf("%i\n", nbr);
	ft_ft(d_nbr);
	printf("%i", nbr);
}
