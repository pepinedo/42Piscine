/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppinedo- <ppinedo-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 16:52:00 by ppinedo-          #+#    #+#             */
/*   Updated: 2023/07/22 19:58:36 by ppinedo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	c;
	int	a;

	c = 0;
	a = 2;
	if (nb <= 0 || nb == 1)
		return (0);
	if (nb == 2)
		return (1);
	while (nb >= 3 && a < nb)
	{
		c = nb % a;
		a++;
		if (c == 0)
			return (0);
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	while (nb < 2147483647 && !ft_is_prime(nb))
		nb++;
	return (nb);
}
/*
int main(void)
{
	printf("%d", ft_find_next_prime(6));
}*/
