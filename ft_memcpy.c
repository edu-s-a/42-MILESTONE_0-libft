/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edsole-a <edsole-a@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/13 15:40:35 by edsole-a          #+#    #+#             */
/*   Updated: 2026/02/03 13:10:26 by edsole-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*dest_char;
	const unsigned char	*src_char;
	size_t				i;

	if (!dest && !src)
		return (NULL);
	if (n == 0)
		return (dest);
	dest_char = (unsigned char *)dest;
	src_char = (unsigned char *)src;
	i = 0;
	while (i < n)
	{
		dest_char[i] = src_char[i];
		i++;
	}
	return (dest);
}
/*
#include <stdio.h>

int main() {

    // Initialize a variable
    int a = 20;
    int b = 10;

    printf("Value of b before calling memcpy: %d\n", b);

    // Use memcpy to copy the value of 'a' into 'b'
    ft_memcpy(&b, &a, sizeof(int));

    printf("Value of b after calling memcpy: %d\n", b);
	
	ft_memcpy(((void*)0), "segfaulter tu dois", 17);
	
	ft_memcpy(((void*)0), ((void*)0), 3);

    return 0;
}
*/
