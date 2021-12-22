/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aramirez <aramirez@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 17:48:16 by aramirez          #+#    #+#             */
/*   Updated: 2021/12/14 17:48:18 by aramirez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void    ft_sort_int_tab(int *tab, int size);

int main(void)
{
    int tab[] = {5, 6, 7, 120, 32, 99, 63, 20, 41, 35};
    int size = 10;
    ft_sort_int_tab(tab, size);
    int i = 0;
    while (i < size)
    {
        printf("%i\n", tab[i]);
        i++;
    }
    return (0);
}
