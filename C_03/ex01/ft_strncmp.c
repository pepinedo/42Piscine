/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppinedo- <ppinedo-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 13:38:16 by ppinedo-          #+#    #+#             */
/*   Updated: 2023/07/18 15:43:40 by ppinedo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *str1, char *str2, unsigned int n)
{
	unsigned int	c;

	c = 0;
	while ((str1[c] && str2[c]) && c < n)
	{
		if (str1[c] != str2[c])
			return (str1[c] - str2[c]);
		c++;
	}
	if (c < n)
		return (str1[c] - str2[c]);
	return (0);
}
