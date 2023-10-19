/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppinedo- <ppinedo-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 12:33:08 by ppinedo-          #+#    #+#             */
/*   Updated: 2023/07/18 15:49:21 by ppinedo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strcmp(char *str1, char *str2)
{
	unsigned int	c;

	c = 0;
	while (str1[c] && str2[c])
	{
		if (str1[c] != str2[c])
			return (str1[c] - str2[c]);
		c++;
	}
	if (!str1[c] || !str2[c])
		return (str1[c] - str2[c]);
	return (0);
}

/*
int main()
{
	char cadena1[] = "Hola";
	char cadena2[] = "Hola";
	printf("%d\n", ft_strcmp(cadena1, cadena2));
	printf("%d\n", strcmp(cadena1,cadena2));
}
*/
