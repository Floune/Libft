/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rofourni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/15 13:02:48 by rofourni          #+#    #+#             */
/*   Updated: 2016/11/23 17:45:43 by rofourni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_strsplit(const char *s, char c)
{
	char	**str;
	int		words;
	int		i;
	int		len;
	char	**tmp;

	if (!s)
		return (NULL);
	i = 0;
	words = ft_count_words(s, c);
	if ((str = (char **)malloc(sizeof(*str) * (words + 1))) == NULL)
		return (NULL);
	tmp = str;
	while (s[i] != '\0')
	{
		(s[i] == c) ? i++ : 0;
		if (s[i] != c && s[i])
		{
			len = ft_countletters(s, i, c);
			*str++ = ft_strsub(s, i, len);
			i = i + len;
		}
	}
	*str = 0;
	return (tmp);
}
