/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppinedo- <ppinedo-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 10:05:38 by ppinedo-          #+#    #+#             */
/*   Updated: 2023/07/26 16:37:45 by ppinedo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	c;

	c = 0;
	if (size)
	{
		while (src[c] && c < (size - 1))
		{
			dest[c] = src[c];
			c++;
		}
		dest[c] = '\0';
	}
	while (src[c])
		c++;
	return (c);
}
