/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rofourni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/15 13:45:39 by rofourni          #+#    #+#             */
/*   Updated: 2016/11/21 12:32:27 by rofourni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long long int	u;

	u = n;
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		u = -u;
	}
	if (u >= 10)
	{
		ft_putnbr_fd(u / 10, fd);
		ft_putnbr_fd(u % 10, fd);
	}
	else
	{
		ft_putchar_fd(u + '0', fd);
	}
}
