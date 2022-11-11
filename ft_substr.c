/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: garibeir < garibeir@student.42lisboa.com > +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 15:51:56 by garibeir          #+#    #+#             */
/*   Updated: 2022/11/11 18:07:34 by garibeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*p;
	unsigned int	i;

	p = malloc(sizeof(char) * len + 1);
	i = (unsigned int) ft_strlen(s);
	if (!p)
		return (NULL);
	while (start != len && start <= i)
	{
		p[i] = s[start];
		start++;
	}
	return ((char *)p);
}
