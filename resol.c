/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   resol.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghery <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/03 12:34:57 by ghery             #+#    #+#             */
/*   Updated: 2016/03/15 11:54:47 by ghery            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include <stdio.h>

void		adr_print_hexa(void *p)
{
	unsigned long	adr;
	char			*hexa;
	char			res[9];
	int				i;

	adr = (unsigned long) p;
	hexa = "0123456789abcdef";
	i = 8;
	while ((adr / 16) > 0 || i >= 8)
	{
		res[i] = hexa[(adr % 16)];
		adr /= 16;
		i--;
	}
	res[i] = hexa[(adr % 16)];
	ft_putchar('0');
	ft_putchar('x');
	while (i < 9)
	{
		ft_putchar(res[i]);
		i++;
	}
}

void		octal_print(unsigned int arg)
{
	int				i;
	int				rem;
	unsigned int	octal;

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

void		hexa_print(unsigned int arg)
{
	int		i;
	int		rem;
	unsigned char	*print;
	char			*nprint;
	char			*hexa;

	i = 0;
	hexa = "0123456789abcdef";
	nprint = (char *)ft_memalloc(600);
	while (arg != 0)
	{
		rem = arg % 16;
		arg = arg / 16;
		nprint[i] = hexa[rem];
		i++;
	}
	print = (unsigned char *)ft_memalloc(i);
	rem = 0;
	while ((i--) >= 0)
	{
		print[rem] = nprint[i];
		rem++;
	}
	ft_putstr((char *)print);
}

void		hexa_print_alpha(unsigned int arg)
{
	int		i;
	int		rem;
	unsigned char	*print;
	char			*nprint;
	char			*hexa;

	i = 0;
	hexa = "0123456789ABCDEF";
	nprint = (char *)ft_memalloc(600);
	while (arg != 0)
	{
		rem = arg % 16;
		arg = arg / 16;
		nprint[i] = hexa[rem];
		i++;
	}
	print = (unsigned char *)ft_memalloc(i);
	rem = 0;
	while ((i--) >= 0)
	{
		print[rem] = nprint[i];
		rem++;
	}
	ft_putstr((char *)print);
}
