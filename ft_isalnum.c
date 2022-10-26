/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: garibeir < garibeir@student.42lisboa.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 16:43:52 by garibeir          #+#    #+#             */
/*   Updated: 2022/10/24 16:43:55 by garibeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_isalnum(int c)
{
    if (c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z' )
        return (1);
    if (c >= 0 && c <= 9)
        return (1);
    else
        return (0);
}

/*
int main(void)
{
    printf("\nResult: %d\n", ft_isalnum(1));
}
*/