/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppinedo- <ppinedo-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 09:44:50 by ppinedo-          #+#    #+#             */
/*   Updated: 2023/07/20 09:43:03 by ppinedo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int	ft_long(char *dest)
{
	unsigned int	c;

	c = 0;
	while (dest[c])
		c++;
	return (c);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	int	c;
	int	l;

	c = 0;
	l = ft_long(dest);
	while (src[c] && c < size)
	{
		dest[c] = src[c];
		c++;
	}
	if (size < l)
		return (l + size);
	return (l + c);
}
/*
int main()
{
	char	dest[100] = "Hola don pepito";
	char	src[] = " y tbn don jose";
	printf("%lu", strlcat(dest, src, 15));
	//printf("%u", ft_strlcat(dest, src, 15));
}
*/
