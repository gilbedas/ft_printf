/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flag.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghery <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/14 10:13:40 by ghery             #+#    #+#             */
/*   Updated: 2016/03/16 09:33:20 by ghery            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		int_flag(char flag)
{
	if  (flag == 'd' || flag == 'D'|| flag == 'i' || flag == 'o' 
			|| flag == 'O' || flag == 'u' || flag == 'U')
		return (1);
	return (0);
}

int		end_flags(char flag)
{
	if (flag == 's')
		ft_putstr((const char *)arg);
	else if (flag == 'd' || flag == 'i' || flag == 'D')
		ft_putnbr((int)arg);
	else if (flag == 'c')
		ft_putchar((unsigned char)arg[0]);
	else if (flag == 'C')
		ft_putstr((wint_t)arg[0]);
	else if (flag == 'p')
		adr_print_hexa(arg);
	else if (flag == 'o' || flag == 'O')
		octal_print((unsigned int)arg);
	else if (flag == 'u' || flag 'U')
		ft_putnbr((unsigned int));
	else if (flag == 'S')
		ft_putstr((wchar_t *)arg);
	else if (flag == 'x')
		hexa_print((unsigned int)arg);
	else if (flag == 'X')
		hexa_print_alpha((unsigned int)arg);
	else
		return (0);
	return (1);
}

void	flag_preci(char *flag)
{
	int		i;
	int		total;
	char	nb;

	i = 1;
	while (flag[i] > 47 && flag[i] < 58)
		i++;
	nb = (char*)ft_memalloc(i + 1);
	while (i > 0)
	{
		nb[i] = flag[i];
		i--;
	}
	total = ft_atoi(nb);

}

void	flag_attri(char *flag)
{
	int 	i;
	char	print;

	i = ft_strlen(flag);
	if (flag[1] == '#')
	{
		if (flag[i] == 'o' || flag[i] == 'O')
		{
			//print 0 devant
		}
		if (flag[i] == 'x')
		{
			//print 0x
		}
		if (flag[i] == 'X')
		{
			//print 0X
		}
	}
	else if (flag[1] == '0' && (int_flag == 1 || flag[i] == 'x'
				|| flag[i] == 'X'))
	{
		//si - pas de 0
		//sinon rien si pas de precision
		//sinon on replis la presision de 0
	}
	else if (flag[1] == '-' && (int_flag == 1 || flag[i] == 'x'
				|| flag[i] == 'X'))
	{
		//justifier sur la gauche 
		//met tous les espace de la precision sur la droite
	}
	else if (flag[1] == '+' && int_flag == 1)
	{
		//met le signe devant un chiffre
	}
	else if (flag[1] == ' ')
	{
		//met un espace
	}
}

void	flag_long(char *flag)
{
}
