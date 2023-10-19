/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppinedo- <ppinedo-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 08:47:10 by ppinedo-          #+#    #+#             */
/*   Updated: 2023/07/20 11:18:25 by ppinedo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	c;
	int	d;

	c = 0;
	if (to_find[c] == '\0')
		return (str);
	while (str[c])
	{
		d = 0;
		while (to_find[d] == str[c])
		{
			if (to_find[d + 1] == '\0')
				return (&str[c - d]);
			c++;
			d++;
		}
		c = c - d;
		c++;
	}
	return (0);
}
/*
int main()
{

	char str[] = "HOLA SOY PAQUITO EL CHOCOLATERO";
	char to_find[] = "";
	printf("%s", ft_strstr(str,to_find));
}*/
