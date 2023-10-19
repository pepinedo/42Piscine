/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppinedo- <ppinedo-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 15:29:22 by ppinedo-          #+#    #+#             */
/*   Updated: 2023/07/23 15:31:56 by ppinedo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	putchar(char c)
{
	write(1, &c, 1);
}

void	imprimir(int x[], int n)
{
	int	i;
	int	correcto;

	i = 0;
	correcto = 1;
	while (i < (n - 1))
	{
		if (!(x[i] < x[i + 1]))
			correcto = 0;
		i++;
	}
	if (correcto == 1)
	{
		i = 0;
		while (i < n)
		{
			putchar(x[i]);
			i++;
		}
		if (x[0] != '9' - n + 1)
		{
			putchar(',');
			putchar(' ');
		}
	}
}

void	crear_while(int x[], int k, int n)
{
	if (k == (n - 1))
	{
		x[k] = '0';
		while (x[k] <= '9')
		{
			if (n == 9 && x[0] > '1')
			{
				break ;
			}
			imprimir(x, n);
			x[k]++;
		}
	}
	else
	{
		x[k] = '0';
		while (x[k] <= '9')
		{
			crear_while(x, k + 1, n);
			x[k]++;
		}
	}
}

void	ft_print_combn(int n)
{
	int	x[100];

	crear_while(x, 0, n);
}
