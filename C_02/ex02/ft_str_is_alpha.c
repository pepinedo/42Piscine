/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppinedo- <ppinedo-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 17:53:39 by ppinedo-          #+#    #+#             */
/*   Updated: 2023/07/14 13:27:26 by ppinedo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	c;

	c = 0;
	while (str[c])
	{
		if ((str[c] >= 'a') && (str[c] <= 'z'))
		{
			c++;
		}
		else if ((str[c] >= 'A') && (str[c] <= 'Z'))
		{
			c++;
		}
		else
			return (0);
	}
	return (1);
}
