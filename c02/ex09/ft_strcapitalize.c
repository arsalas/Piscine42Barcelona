/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aramirez <aramirez@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 16:06:45 by aramirez          #+#    #+#             */
/*   Updated: 2021/12/15 16:06:47 by aramirez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_first_letter(char *str, int i)
{
	if ((str[i] >= 'a' && str[i] <= 'z'))
	{
		str[i] = str[i] - 32;
	}
}

int	ft_spaces(char *str, int i)
{
	if (str[i] >= '0' && str[i] <= '9')
	{
		return (0);
	}
	if (!(str[i] >= 'A' && str[i] <= 'Z') && !(str[i] >= 'a' && str[i] <= 'z'))
	{
		return (1);
	}
	else if ((str[i] >= 'A' && str[i] <= 'Z'))
	{
		str[i] = str[i] + 32;
		return (0);
	}	
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	result;
	int	first_letter;

	first_letter = 1;
	i = 0;
	result = 1;
	while (result == 1)
	{
		if (str[i] == '\0')
			break ;
		if (first_letter == 1 && ((str[i] >= 'a' && str[i] <= 'z')
				|| (str[i] >= 'A' && str[i] <= 'Z')))
		{
			ft_first_letter(str, i);
			first_letter = 0;
		}
		else
		{
			first_letter = ft_spaces(str, i);
		}
		i++;
	}
	return (str);
}
