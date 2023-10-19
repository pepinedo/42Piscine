/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppinedo- <ppinedo-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/21 08:55:38 by ppinedo-          #+#    #+#             */
/*   Updated: 2023/07/23 17:24:30 by ppinedo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	c;
	int	r;

	c = 0;
	r = 1;
	while (c <= nb)
	{
		r = c * c;
		if (r == nb)
			return (c);
		if (c > 46341)
			return (0);
		c++;
	}
	return (0);
}
