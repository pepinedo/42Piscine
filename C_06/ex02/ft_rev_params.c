/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppinedo- <ppinedo-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 10:07:20 by ppinedo-          #+#    #+#             */
/*   Updated: 2023/07/24 10:58:42 by ppinedo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int argc, char **argv)
{
	int	c;
	int	d;

	c = 0;
	d = argc - 1;
	while (argc > 1 && d >= 1)
	{
		c = 0;
		while (argv[d][c])
		{
			ft_putchar(argv[d][c]);
			c++;
		}
		ft_putchar('\n');
		d--;
	}
}
