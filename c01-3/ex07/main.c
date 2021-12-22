/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aramirez <aramirez@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 13:34:08 by aramirez          #+#    #+#             */
/*   Updated: 2021/12/14 13:34:10 by aramirez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void    ft_rev_int_tab(int *tab, int size);

int main(void)
{
    int size = 8;
    int tab[] = {1, 2, 3, 4, 5, 6, 7, 8}; 
    int *tab_p; 
    tab_p = tab;

    ft_rev_int_tab(tab, size);

    int i = 0;
    while (i < size)
    {
        printf("%i\n", tab[i]);
        i++;
    }

}
