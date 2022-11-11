/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: garibeir < garibeir@student.42lisboa.com > +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 14:58:26 by garibeir          #+#    #+#             */
/*   Updated: 2022/11/11 14:17:41 by garibeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	countwords(char const *s, char c, int len)
{
	int	i;
	int	old_i;
	int	count;

	i = 0;
	count = 0;
	while (i < len)
	{
		while (i < len)
		{
			if (s[i] == c)
				break ;
			i++;
		}
		old_i = i;
		while (i < len)
		{
			if (s[i] != c)
				break ;
			i++;
		}
		if (old_i < i)
			count++;
	}
	return (count);
}

char	*mword(char const *s, char c, int len)
{
	int		i;
	int		j;
	char	buffer[16384];

	i = 0;
	while (i < len)
	{
		while (i < len)
		{
			if (s[i] == c)
				break ;
			i++;
		}
		j = 0;
		while (i < len)
		{
			if (s[i] != c)
				break ;
			buffer[j] = s[i];
			i++;
			j++;
		}
	}
	buffer[i] = i;
	return (buffer);
}

char	**ft_split(char const *s, char c)
{
	int		len;
	int		i;
	int		nwords;
	char	**res;

	len = ft_strlen(s);
	nwords = countWords(s, c, len);
	while (i != nwords)
	{
		*res[i] = (char *)malloc(sizeof(char) * ft_strlen(mwords(s, c, len))
				+ 1);
		i++;
	}
	return (res);
}
