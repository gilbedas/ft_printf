/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghery <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/26 12:25:52 by ghery             #+#    #+#             */
/*   Updated: 2016/03/16 09:27:18 by ghery            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "libft/libft.h"
#include <stdarg.h>

typedef	struct		s_list
{
	char			str;
	struct s_list	*next;
}					t_list;

int					ft_printf(const char * restrict format, ...);
void				adr_print_hexa(void *p);
void				octal_print(unsigned int arg);
void				hexa_print(unsigned int arg);
void				hexa_print_alpha(unsigned int arg);
void				flag_preci(char *flag);
void				flag_attri(char *flag);
void				flag_long(char *flag);

#endif
