/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppinedo- <ppinedo-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 16:08:29 by ppinedo-          #+#    #+#             */
/*   Updated: 2023/07/19 17:39:13 by ppinedo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_atoi(char *str)
{
	unsigned int	c;
	int				sign;
	int				n;

	c = 0;
	sign = 1;
	n = 0;
	while (str[c] == ' ' || str[c] == '\t' || str[c] == '\f'
		|| str[c] == '\r' || str[c] == '\n' || str[c] == '\v')
		c++;
	while (str[c] == '+' || str[c] == '-')
	{
		if (str[c] == '-')
			sign = sign * -1;
		c++;
	}
	while (str[c] >= '0' && str[c] <= '9')
	{
		n = (n * 10) + (str[c] - '0');
		c++;
	}
	n = n * sign;
	return (n);
}
/*
int main()
{
	char	str[] = "   ---+--12ghsf234";
	printf("%d", ft_atoi(str));
}
*/
