/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppinedo- <ppinedo-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 13:51:26 by ppinedo-          #+#    #+#             */
/*   Updated: 2023/07/17 15:59:57 by ppinedo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int	c2;

	c2 = 0;
	while (str[c2])
	{
		if ((str[c2] >= 'A') && (str[c2] <= 'Z'))
			str[c2] = str[c2] + 32;
		c2++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	c;
	int	flag;

	c = 0;
	flag = 1;
	str = ft_strlowcase(str);
	while (str[c])
	{
		if ((str[c] >= 'a') && (str[c] <= 'z'))
		{
			if (flag == 1)
				str[c] = str[c] - 32;
			flag = 0;
		}
		else if ((str[c] >= '0') && (str[c] <= '9'))
			flag = 0;
		else
			flag = 1;
		c++;
	}
	return (str);
}
