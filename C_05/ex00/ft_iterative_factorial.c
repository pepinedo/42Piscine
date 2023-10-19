/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppinedo- <ppinedo-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 09:46:22 by ppinedo-          #+#    #+#             */
/*   Updated: 2023/07/20 13:34:56 by ppinedo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	r;

	r = nb;
	if (nb < 0)
		return (0);
	if ((nb == 0) || (nb == 1))
		return (1);
	while (nb >= 2)
	{
		nb--;
		r = r * (nb);
	}
	return (r);
}
/*
int	main(void)
{
	int	n;

	n = 12;
	printf("%d", ft_iterative_factorial(n));
}*/
