/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aramirez <aramirez@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/12 14:55:35 by aramirez          #+#    #+#             */
/*   Updated: 2021/12/12 15:45:16 by aramirez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
void	ft_swap(int *a, int *b);

int	main(void)
{
int a, *d_a, b, *d_b;
a = 10;
b = 5;
d_a = &a;
d_b = &b;
printf("a:%i, b:%i ", a, b);
ft_swap(d_a, d_b);
printf("a:%i, b:%i ", a, b);
return (0);
}
