/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rofourni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/11 14:18:17 by rofourni          #+#    #+#             */
/*   Updated: 2016/11/25 12:51:31 by rofourni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	size_t	i;
	char	*dst_cpy;
	char	*src_cpy;

	i = 0;
	src_cpy = (void *)src;
	dst_cpy = (void *)dst;
	if (src > dst)
		return (ft_memcpy(dst_cpy, src_cpy, n));
	else
	{
		while (i != n)
		{
			dst_cpy[n - i - 1] = src_cpy[n - i - 1];
			i++;
		}
		return (dst_cpy);
	}
}
