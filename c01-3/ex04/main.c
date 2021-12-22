/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aramirez <aramirez@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 11:43:29 by aramirez          #+#    #+#             */
/*   Updated: 2021/12/14 11:43:31 by aramirez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
void    ft_ultimate_div_mod(int *a, int *b);

int main(void)
{
    int a, b, *a1, *b1;
    a = 20;
    b = 2;
    a1 = &a;
    b1 = &b;
    ft_ultimate_div_mod(a1, b1);
    printf("%d\n", *a1);
    printf("%d\n", *b1);
}
