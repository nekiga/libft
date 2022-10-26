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

#include <stdio.h>

void *ft_memcpy(const void *src,void *dest, size_t n)
{   
    //type casting the pointers into char
    char *cdest = (char *) dest;
    char *csrc = (char *) src; 
    int i;

    i = 0;
    //copying from src to temp
    while (i++ != n)
        cdest[i] = csrc[i];
}