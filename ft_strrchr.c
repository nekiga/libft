/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: garibeir < garibeir@student.42lisboa.com > +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 16:45:20 by garibeir          #+#    #+#             */
/*   Updated: 2022/10/26 18:17:51 by garibeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>
#include <stdio.h>

char *ft_strrchr(char *s, int c_in)
{
    int i;
    int len;
    char c;
    
    c = (char) c_in;
    i = 0;
    len = 0;
    while (s[len] != '\0')
        len++;
    while (i++ != len)
        *s++;
    while (len)
    {
        if (*s == c)
             return ((char *)s - 1);
        *s--;
        len--;
    }
    return (NULL);
}
/*
int main(void)
{
   char *s = "Hjgfkfjkello";
    int c = 108;

    char *p1 = ft_strrchr(s, c);
    char *p2 = strchr(s, c);
    
    printf("Mine: %p\n", p1);
    printf("Actual: %p\n", p2);

}
*/