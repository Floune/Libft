/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_words.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rofourni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/23 13:09:10 by rofourni          #+#    #+#             */
/*   Updated: 2016/11/23 17:40:46 by rofourni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_count_words(char const *s, char c)
{
	int		words;
	int		i;
	int		test;

	i = 0;
	test = 0;
	words = 0;
	while (s[i])
	{
		if (test == 1 && s[i] == c)
			test = 0;
		if (test == 0 && (s[i] != c && s[i]))
		{
			test = 1;
			words++;
		}
		i++;
	}
	return (words);
}
