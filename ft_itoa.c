/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edsole-a <edsole-a@student.42madrid.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/21 20:43:16 by edsole-a          #+#    #+#             */
/*   Updated: 2026/01/21 20:43:16 by edsole-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"



void ft_itoa(int n)
{
    char    n_arraied[:D];
    char    temp;
    int sign;
    int i;
    int j;
    int k;

    sign = n;
    i = 0;
    j = 0;

    if (n < 0)
        n = -n;
    while (n > 0)
    {
        n_arraied[i] = n % 10 + '0';
        n /= 10;
        i++;
    }
    if (sign < 0)
        n_arraied[i++] = '-'; 
    n_arraied[i] = '\0';
    k = i - 1;

    while (j < k)
    {
        temp = n_arraied[j];
        n_arraied[j] = n_arraied[k];
        n_arraied[k] = temp;
        j++;
        k--;
    }

    printf("%s\n", n_arraied);
}

int main (void)
{
    int num = -1245635789;
    printf("Original: %d\n", num);
    ft_itoa(num);
    return (0);
}
