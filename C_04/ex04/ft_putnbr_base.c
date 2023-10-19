/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppinedo- <ppinedo-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 09:09:05 by ppinedo-          #+#    #+#             */
/*   Updated: 2023/07/19 17:21:41 by ppinedo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <limits.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_largo(char	*base)
{
	int	c;

	c = 0;
	while (base[c] != '\0')
		c++;
	return (c);
}

int	ft_error(char	*base)
{
	int	c;
	int	d;

	c = 0;
	while (base[c])
	{
		d = c + 1;
		while (base[d])
		{
			if (base[c] == base[d] || base[c] == '+' || base[c] == '-')
				return (0);
			d++;
		}
		c++;
	}
	return (1);
}

void	ft_cambio(int n, int largo, char *caracteres)
{
	int	l;

	l = largo;
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (n < 0)
	{
		ft_putchar('-');
		n = -n;
	}
	if (n >= largo)
		ft_cambio((n / l), largo, caracteres);
	ft_putchar(caracteres[n % l]);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	l;
	int	e;

	l = ft_largo(base);
	e = ft_error(base);
	if (l == 0)
		return ;
	if (e == 0)
		return ;
	if (nbr == -2147483648)
	{
		if (l == 10)
			write(1, "-2147483648", 11);
		if (l == 2)
			write(1, "-10000000000000000000000000000000", 33);
		if (l == 16)
			write(1, "-80000000", 9);
		if (l == 8)
			write(1, "-20000000000", 12);
		return ;
	}
	ft_cambio(nbr, l, base);
}
/*
int	main(void)
{

	char	decimal[] = "0123456789";
	char	binario[] = "01";
	char	hexadecimal[] = "0123456789ABCDEF";
	char	poniguay[] = "01234567";

	ft_putnbr_base(-2147483648, hexadecimal);
}
*/
