/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppinedo- <ppinedo-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 17:03:18 by ppinedo-          #+#    #+#             */
/*   Updated: 2023/07/18 19:59:45 by ppinedo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	c;
	int	temp;
	int	comp;

	c = 0;
	while (c < (size - 1))
	{
		comp = c + 1;
		if (tab[c] > tab[comp])
		{
			temp = tab[c];
			tab[c] = tab[comp];
			tab[comp] = temp;
			c = 0;
			comp = 1;
		}
		else
			c++;
			comp++;
	}
}
/*
int main(void)
{
	int str[] = {1, 2, 4, 9, 5, 6, 7, 8, 3};
	ft_sort_int_tab(&str, 9);
}
*/
