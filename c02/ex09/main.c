/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aramirez <aramirez@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 16:06:33 by aramirez          #+#    #+#             */
/*   Updated: 2021/12/15 16:06:34 by aramirez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>

char	*ft_strcapitalize(char *str);

int	main(void)
{
	char	str[]= "sdfds fdsfds fsdfdFsfdsf Ffdsfsd";
	ft_strcapitalize(str);
	printf("%s", str);
	return (0);
}
