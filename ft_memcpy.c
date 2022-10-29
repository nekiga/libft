/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: garibeir < garibeir@student.42lisboa.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 16:44:26 by garibeir          #+#    #+#             */
/*   Updated: 2022/10/24 16:44:27 by garibeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void*ft_memcpy(void *dest, const void *src, size_t n)
{   
    //type casting the pointers into char
    char *cdest = (char *) dest;
    char *csrc = (char *) src; 
    size_t i;

    i = 0;
    //copying from src to temp
    while (i++ != n)
        cdest[i] = csrc[i];
    return ((void *) cdest);
}