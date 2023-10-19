/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppinedo- <ppinedo-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 13:57:07 by ppinedo-          #+#    #+#             */
/*   Updated: 2023/07/18 13:45:10 by ppinedo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcat(char *dest, char *src)
{
	int	contador1;
	int	contador2;

	contador1 = 0;
	contador2 = 0;
	while (dest[contador1])
	{
		contador1++;
	}
	while (src[contador2])
	{
		dest[contador1] = src[contador2];
		contador1++;
		contador2++;
	}
	dest[contador1] = '\0';
	return (dest);
}
/*
int main()
{
	char cadena1[] = "Hola ";
	char cadena2[] = "BUenos dias";
	printf("%s", ft_strcat(cadena1, cadena2));
}
*/
