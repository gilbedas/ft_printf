/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nb_generator.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghery <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/03 15:44:20 by ghery             #+#    #+#             */
/*   Updated: 2015/12/04 17:41:53 by ghery            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_nb_generator(int n, int i, int j, char *nb)
{
	i--;
	nb[i] = '\0';
	if (j == 1)
		nb[0] = '-';
	if (n == 0)
		nb[0] = '0';
	while (n != 0)
	{
		i--;
		j = n % 10;
		n = (n - j) / 10;
		nb[i] = j + '0';
	}
	return (nb);
}
