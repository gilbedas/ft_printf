/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghery <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/27 00:50:26 by ghery             #+#    #+#             */
/*   Updated: 2016/02/23 16:49:04 by ghery            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	char	*join;

	i = -1;
	j = 0;
	join = NULL;
	if (s1 != NULL && s2 != NULL)
	{
		join = (char *)ft_memalloc(ft_strlen(s1) + ft_strlen(s2) + 1);
		if (join != NULL)
		{
			while (s1[++i])
				join[i] = s1[i];
			while (s2[j])
			{
				join[i + j] = s2[j];
				j++;
			}
		}
	}
	return (join);
}
