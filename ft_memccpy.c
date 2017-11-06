/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rofourni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/10 11:51:06 by rofourni          #+#    #+#             */
/*   Updated: 2016/11/10 12:37:35 by rofourni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t			i;
	unsigned char	*dst1;
	unsigned char	*src1;

	src1 = (unsigned char *)src;
	dst1 = (unsigned char *)dst;
	i = 0;
	c = (unsigned char)c;
	while (i < n)
	{
		if ((*dst1++ = *src1++) == c)
			return (dst1);
		i++;
	}
	return (NULL);
}
