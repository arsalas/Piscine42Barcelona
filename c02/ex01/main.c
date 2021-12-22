/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aramirez <aramirez@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 13:33:45 by aramirez          #+#    #+#             */
/*   Updated: 2021/12/15 13:33:46 by aramirez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n);

int	main(void)
{
	//char dest[], src[], test[];

	char *src = "Hola Mundo";
	char *dest;
	ft_strncpy(dest, src, 30);
	printf("%s\n", dest);	
	//printf("%c", test);	
}

