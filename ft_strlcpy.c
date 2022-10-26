/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: garibeir < garibeir@student.42lisboa.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 16:44:53 by garibeir          #+#    #+#             */
/*   Updated: 2022/10/24 16:44:54 by garibeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int ft_strlcpy(char *dst, const char *src, size_t size)
{
    int i;

    i = 0;
    //copy up to size -1 from src to dst
    while (i++ != size-1)
        dst[i] = src[i];
    //NULL terminate the array
    dst[i+1] = '\0';
    // return length of array
    return (i);
}