/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: garibeir < garibeir@student.42lisboa.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 16:44:22 by garibeir          #+#    #+#             */
/*   Updated: 2022/10/24 16:44:23 by garibeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    unsigned char    *p1;
    unsigned char    *p2;

    p1 = (unsigned char *) s1;
    p2 = (unsigned char *) s2;

    if (n == 0)
        return (0);
    while (n)
    {
        if (*p1 != *p2)
            return(*p1 - *p2);
        *p1--;
        *p2--;
        n--;
    }
}