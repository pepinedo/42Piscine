/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppinedo- <ppinedo-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 08:34:24 by ppinedo-          #+#    #+#             */
/*   Updated: 2023/07/24 09:58:48 by ppinedo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int argc, char *argv[])
{
	int	c;

	c = 0;
	if (argc == 1)
	{
		while (argv[0][c])
		{
			ft_putchar(argv[0][c]);
			c++;
		}
		ft_putchar('\n');
	}
}
