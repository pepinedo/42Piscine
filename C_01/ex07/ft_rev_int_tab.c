/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppinedo- <ppinedo-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 09:41:34 by ppinedo-          #+#    #+#             */
/*   Updated: 2023/07/11 16:55:52 by ppinedo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	count1;
	int	count2;
	int	temp;

	count1 = size - 1;
	count2 = 0;
	while (count2 < (size / 2))
	{
		temp = tab[count2];
		tab[count2] = tab[count1];
		tab[count1] = temp;
		count1--;
		count2++;
	}
}
