/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rofourni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/09 09:41:23 by rofourni          #+#    #+#             */
/*   Updated: 2016/11/09 18:00:54 by rofourni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *str, const char *to_find)
{
	char	*s;
	char	*to;

	if (*to_find == '\0')
		return (char *)str;
	to = (char *)to_find;
	while (*str != '\0')
	{
		if (*str == *to)
		{
			s = (char *)str;
			while (*s == *to || *to == '\0')
			{
				if (*to == '\0')
					return (char *)str;
				s++;
				to++;
			}
			to = (char *)to_find;
		}
		str++;
	}
	return (0);
}
