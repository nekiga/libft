/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: garibeir < garibeir@student.42lisboa.com > +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 14:25:17 by garibeir          #+#    #+#             */
/*   Updated: 2022/10/29 15:34:49 by garibeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*p;
	int		l;
	int		i;

		i = 0;
		l = ft_strlen(s);
		p = malloc((sizeof(char) * l) + 1);
	if (!p)
		return (NULL);
	while (i++ < l)
			p[i] = s[i];
	return ((char *) p);
}