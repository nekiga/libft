/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: garibeir < garibeir@student.42lisboa.com > +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 16:44:45 by garibeir          #+#    #+#             */
/*   Updated: 2022/11/11 16:52:57 by garibeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c_in)
{
	char	c;

	c = (char) c_in;
	while (*s)
	{
		if (*s == c)
			return ((char *)s);
		s++;
	}
	if (c == '\0')
		return ((char *)s);
	return (NULL);
}
/*
int main(void)
{
	char *s = "Hello";
	int c = 108;

	char *p1 = ft_strchr(s, c);
	char *p2 = strchr(s, c);
	
	printf("Mine: %p\n", p1);
	printf("Actual: %p\n", p2);

}
*/