/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghery <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/03 12:34:31 by ghery             #+#    #+#             */
/*   Updated: 2016/03/15 16:18:19 by ghery            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include <stdio.h>

void		octal_print(unsigned int arg)
{
	int					i;
	int					rem;
	unsigned int		octal;

	i = 1;
	octal = 0;
	while (arg != 0)
	{
		rem = arg % 8;
		arg = arg / 8;
		octal += rem * i;
		i = i * 10;
	}
	ft_putnbr(octal);
}

int		main(void)
{
	unsigned int	arg;

	arg = 13324;
	printf("%+10x\n", arg);
	octal_print(arg);
	return (0);
}
