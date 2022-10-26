/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: garibeir < garibeir@student.42lisboa.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 16:44:41 by garibeir          #+#    #+#             */
/*   Updated: 2022/10/24 16:44:42 by garibeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void *ft_memset(void *s, int c, unsigned int n)
{
    // converting void pointer to unsigned char pointer
    unsigned char *p = s;
    // Setting each member of p to c, while decrementing n
    while (n--)
    {
        *p++ = c;
    }
    // returns the now changed array
    return (s);
}