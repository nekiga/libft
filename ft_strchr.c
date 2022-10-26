/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: garibeir < garibeir@student.42lisboa.com > +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 16:44:45 by garibeir          #+#    #+#             */
/*   Updated: 2022/10/26 18:10:34 by garibeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>
#include <stdio.h>

char *ft_strchr(char *s,  int c_in)
{
    int i;
    char c;
    
    c = (char) c_in;
    i = 0;
    while (s[i] != '\0')
    {
        if (*s == c)
             return (s);
        *s++;
        i++;
    }
    return (s);
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