/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghery <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/25 16:07:49 by ghery             #+#    #+#             */
/*   Updated: 2016/03/16 09:33:17 by ghery            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int			end_flag(char format)
{
	if (format == 's' || format == 'S' || format == 'p' || format == 'd')
		return (1);
	else if (format == 'D' || format == 'i' || format == 'o' || format == 'O')
		return (1);
	else if (format == 'u' || format == 'U' || format == 'x' || format == 'X')
		return (1);
	else if (format == 'c' || format == 'C' || format == '%')
		return (1);
	else
		return (0);
}

int			flag_application(char *flag, int count, void *arg)
{
	int		index;

	index = 1;
	if (count > 2)
	{
		if (flag[1] > 47 && flag[1] < 58)
			flag_preci(flag, arg);
		if (flag[1] == '#' || flag[1] == '-' || flag[1] == '+'
				|| flag[1] == '0' || flag[1] == ' ')
			flag_attri(flag, arg);
		if (flag[1] == 'h' || flag[1] == 'l' || flag[1] == 'j' 
				|| flag[1] == 'z')
			flag_long(flag, arg);
	}
	else
	{
		if (end_flag(flag[1]) == 0)
		{
			ft_putstr("error");
			exit(0);
		}
	}
	count--;
}

int			ft_printf(const char * restrict format, ...)
{
	va_list		ap;
	int			index;
	int			count;
	int			i;
	char		*flag;

	va_start(ap, format);
	index = 0;
	while (format[index] != '\0')
	{
		count = 1;
		if (format[index] == '%')
		{
			while (end_flag(format[index + count]) == 0)
				count++;
			flag = (char*)ft_memalloc(count + 1);
			flag[count + 1] = '\0';
			i = 0;
			while (i < count)
			{
				flag[i] = format[index + i];
				i++;
			}
			ft_putendl(flag);
			if (count == 2 && flag[1] == '%')
				ft_putchar('%');
			else
				flag_application(flag, count, va_arg(ap, void *));
			index = index + count;
		}
		else
			ft_putchar(format[index]);
		index++;
	}
	return (0);
}
