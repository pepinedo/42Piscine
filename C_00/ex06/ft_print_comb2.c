/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppinedo- <ppinedo-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 11:20:26 by ppinedo-          #+#    #+#             */
/*   Updated: 2023/07/08 17:52:22 by ppinedo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_cambio(short n)
{
	char	c;

	c = n / 10 + 48;
	write(1, &c, 1);
	c = n % 10 + 48;
	write(1, &c, 1);
}

void	ft_puntocoma(int n, int m)
{
	if (n == 98 && m == 99)
	{
		ft_cambio(n);
		write(1, " ", 1);
		ft_cambio(m);
	}
	else
	{
		ft_cambio(n);
		write(1, " ", 1);
		ft_cambio(m);
		write(1, ", ", 2);
	}
}

void	ft_print_comb2(void)
{
	int	ab;
	int	cd;

	ab = 0;
	cd = 1;
	while (ab < 99)
	{
		while (cd < 100)
		{
			ft_puntocoma(ab, cd);
			cd++;
		}
		ab++;
		cd = ab + 1;
	}
}
