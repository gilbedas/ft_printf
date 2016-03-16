/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dividenext.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghery <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/03 17:59:15 by ghery             #+#    #+#             */
/*   Updated: 2015/12/04 01:02:50 by ghery            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_dividenext(int a, int b)
{
	if (a == 0 || b == 0)
		return (0);
	while (a % b != 0 && b < a)
		b++;
	if (b <= a)
		return (b);
	return (0);
}
