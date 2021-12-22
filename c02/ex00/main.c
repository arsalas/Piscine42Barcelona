/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aramirez <aramirez@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 12:24:00 by aramirez          #+#    #+#             */
/*   Updated: 2021/12/15 12:24:02 by aramirez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcpy(char *dest, char *src);

int	main(void)
{
	//char dest[], src[], test[];

	char *src = "Hola Mundo";
	char *dest;
	ft_strcpy(dest, src);
	printf("%s\n", dest);	
	//printf("%c", test);	
}
