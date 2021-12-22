/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aramirez <aramirez@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 12:08:21 by aramirez          #+#    #+#             */
/*   Updated: 2021/12/14 12:08:24 by aramirez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void    ft_putstr(char *str);

int main(void)
{
	ft_putstr("hello");
	write(1, "\n", 1);
	ft_putstr("holla\noutro");
}

