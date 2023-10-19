/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppinedo- <ppinedo-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 12:45:53 by ppinedo-          #+#    #+#             */
/*   Updated: 2023/07/26 12:50:19 by ppinedo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
	{
		write(1, &str[count], 1);
		count++;
	}
	write(1, "\n", 1);
}

void	ft_swap(char **a, char **b)
{
	char	*aux;

	aux = *a;
	*a = *b;
	*b = aux;
}

int	ft_strcmp(char *str1, char *str2)
{
	unsigned int	c;

	c = 0;
	while (str1[c] && str2[c])
	{
		if (str1[c] != str2[c])
			return (str1[c] - str2[c]);
		c++;
	}
	if (!str1[c] || !str2[c])
		return (str1[c] - str2[c]);
	return (0);
}

int	main(int argc, char *argv[])
{
	int	i;

	i = 1;
	while (i < argc - 1)
	{
		if (ft_strcmp(argv[i], argv[i + 1]) > 0)
		{
			ft_swap(&argv[i], &argv[i + 1]);
			i = 1;
		}
		else
			i++;
	}
	i = 1;
	while (i < argc)
	{
		ft_putstr(argv[i]);
		i++;
	}
}
