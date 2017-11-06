/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rofourni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/21 12:34:50 by rofourni          #+#    #+#             */
/*   Updated: 2016/11/21 18:06:03 by rofourni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_itoa(int n)
{
	char			*str;
	size_t			len;
	unsigned int	nb;

	nb = n;
	len = ft_strlenint(n);
	str = (char *)malloc(sizeof(char) * len + 1);
	if (str == NULL)
		return (NULL);
	str[len] = '\0';
	len--;
	if (n == 0)
		str[len] = '0';
	if (n < 0)
	{
		nb *= -1;
		str[0] = '-';
	}
	while (nb)
	{
		str[len] = (nb % 10) + 48;
		nb = nb / 10;
		len--;
	}
	return (str);
}
