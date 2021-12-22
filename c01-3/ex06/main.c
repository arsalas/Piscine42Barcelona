/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aramirez <aramirez@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 12:27:00 by aramirez          #+#    #+#             */
/*   Updated: 2021/12/14 12:27:01 by aramirez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
int ft_strlen(char *str);

int main(void)
{
    char *str;
    int res;

    str = "Hola Mundo";
    res = ft_strlen(str);
    printf("%i", res);
}
