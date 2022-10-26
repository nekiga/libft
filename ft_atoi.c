/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: garibeir < garibeir@student.42lisboa.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 16:43:42 by garibeir          #+#    #+#             */
/*   Updated: 2022/10/24 16:43:43 by garibeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

 
 #include <stdio.h>
 #include <stdlib.h>

 
 
 int ft_atoi (const char *str)
{
    int i;
    int res;
    int sign;

    sign = 1;
    i = -1;
    res = 0;
    if (str[++i] == '-')
            sign = -1;         
    while (str[++i] != '\0')
        res = res * 10 + str[i] - 48;
    return (res * sign);
}

 
 /*int main(void)
 {
    const char str[] = "-1341";

    int str1 = atoi(str);
    int str2 = ft_atoi(str);
    printf("%d\n", str1);
    printf("%d\n", str2);
 }
 */
 
 
 
