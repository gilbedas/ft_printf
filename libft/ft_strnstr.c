/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghery <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/01 01:40:57 by ghery             #+#    #+#             */
/*   Updated: 2015/12/03 15:42:21 by ghery            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	int		j;

	i = 0;
	if (!s2[0])
		return ((char *)s1);
	while (s1[i] && i < n)
	{
		j = 0;
		if (s1[i] == s2[j])
		{
			while ((s2[j]) && (s2[j] == s1[i]) && i < n)
			{
				i++;
				j++;
			}
			if (s2[j] == '\0')
				return ((char*)s1 + (i - j));
			i = i - (j - 1);
		}
		i++;
	}
	return (NULL);
}
