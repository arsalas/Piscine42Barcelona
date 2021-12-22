/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aramirez <aramirez@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 12:24:18 by aramirez          #+#    #+#             */
/*   Updated: 2021/12/15 14:21:43 by aramirez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int	i;
	int	c;

	i = 0;
	c = 0;
	while (c == 0)
	{
		if (src[i] == '\0')
		{
			dest[i] = src[i];
			break ;
		}
		dest[i] = src[i];
		i++;
	}
	return (src);
}
