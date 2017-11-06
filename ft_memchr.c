/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rofourni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/09 12:25:42 by rofourni          #+#    #+#             */
/*   Updated: 2016/11/09 14:29:27 by rofourni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	char			*s1;

	s1 = (char *)s;
	i = 0;
	c = (char)c;
	while (i < n)
	{
		if (s1[i] == c)
			return ((char *)&s1[i]);
		i++;
	}
	return (NULL);
}
