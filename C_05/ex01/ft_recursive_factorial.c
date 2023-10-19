/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppinedo- <ppinedo-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 11:56:08 by ppinedo-          #+#    #+#             */
/*   Updated: 2023/07/20 13:30:26 by ppinedo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	int	r;

	if (nb < 0)
		return (0);
	if ((nb == 0) || (nb == 1))
		return (1);
	r = nb * ft_recursive_factorial(nb - 1);
	return (r);
}
/*
int main(void)
{
	printf("%d", ft_recursive_factorial(6));
}*/
