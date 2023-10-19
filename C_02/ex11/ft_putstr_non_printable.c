/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppinedo- <ppinedo-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 18:38:54 by ppinedo-          #+#    #+#             */
/*   Updated: 2023/07/26 19:51:00 by ppinedo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_cambio(unsigned char n)
{
	char	*hexa;

	hexa = "0123456789abcdef";
	ft_putchar(hexa[n / 16]);
	ft_putchar(hexa[n % 16]);
}

void	ft_putstr_non_printable(char *str)
{
	int		c;

	c = 0;
	while (str[c])
	{
		if (str[c] < 32 || str[c] >= 127)
		{
			ft_putchar('\\');
			ft_cambio(str[c]);
		}
		else
			ft_putchar(str[c]);
		c++;
	}
}
/*
int main(void)
{
	ft_putstr_non_printable("Coucou\ntu vas bien ?");
}*/
