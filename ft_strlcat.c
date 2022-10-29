/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: garibeir < garibeir@student.42lisboa.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 16:44:48 by garibeir          #+#    #+#             */
/*   Updated: 2022/10/24 16:44:49 by garibeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcat(char *dst, const char *src, size_t size)
{
    // increment i to end of dst
    size_t    i;
    size_t    j;

    j = 0;
    i = 0;
    while (dst++)
        i++;
    // start copying from src to end of dest
    while (src[j++] && (j + i) <= size)
        dst[i++] = src[j];
    // null terminate string
    dst[i] = '\0';
    // return size of resulting string
    return (i);
    
    
}