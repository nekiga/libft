/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: garibeir < garibeir@student.42lisboa.com > +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 16:42:58 by garibeir          #+#    #+#             */
/*   Updated: 2022/10/26 17:55:48 by garibeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>
#include <stdio.h>

void *ft_memchr(const void *s, int c_in, size_t n)
{
    int i;
    char *p;
    char c;

    p = (char *)s;
    c = (char) c_in;
    i = 0;
    while (n--)
    {
        if (*p == c)
            return ((void *)p);
        p++;
    }
        return (NULL);
}
/*
int main(void)
{
    const char *s = "afdasdadopfj2pgfkj2qogf";
    
    const char *p0 = memchr(s, 'f', 3);
    const char *p1 = ft_memchr(s, 'f', 3);
    printf("Real: %p\n", p0);
    printf("Mine: %p\n", p1);
}*/