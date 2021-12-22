/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aramirez <aramirez@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 11:12:41 by aramirez          #+#    #+#             */
/*   Updated: 2021/12/14 11:12:42 by aramirez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
void    ft_div_mod(int a, int b, int *div, int *mod);

int main()
{
    int a, b, div, mod, *div1, *mod1;
    a = 10;
    b = 2;
    mod1 = &mod;
    div1 = &div;
    ft_div_mod(a, b, div1, mod1);
    printf("%d\n", div);   
    printf("%d\n", mod);   
    return (0);
}
