/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: garibeir < garibeir@student.42lisboa.com > +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 14:41:04 by garibeir          #+#    #+#             */
/*   Updated: 2022/11/05 15:01:30 by garibeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*res;
	size_t	len;
	size_t	i;
	size_t	j;

	i = len;
	len = ft_strlen(s1);
	res = (char *)malloc(len + 1);
	if (!res)
		return (NULL);
	while (i--)
	{
		res[i] = s1[i];
		j = 0;
		while (set[j++])
		{
			if (s1[i] == set[j])
			{
				res[i] = '\0';
				i++;
			}
		}
	}
	return (res);
}
