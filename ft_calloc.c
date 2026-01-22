/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edsole-a <edsole-a@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/16 14:04:18 by edsole-a          #+#    #+#             */
/*   Updated: 2026/01/22 20:05:31 by edsole-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdint.h>
#include <bsd/string.h>
#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;
	size_t	total;

	if (nmemb != 0 && size > SIZE_MAX / nmemb)
		return (NULL);
	if (nmemb == 0 || size == 0)
		return (malloc(0));
	total = nmemb * size;
	ptr = malloc(total);
	if (!ptr)
		return (NULL);
	ft_memset(ptr, 0, total);
	return (ptr);
}
/*
int	main(void)
{
    size_t n = 500;
    int *a = ft_calloc(n, sizeof(int));
    int *b = calloc(n, sizeof(int));

    if (!a || !b)
    {
        return (1);
    }

    printf("ft_calloc: ");
    for (size_t i = 0; i < n; ++i)
        printf("%d ", a[i]);
    printf("\ncalloc   : ");
    for (size_t i = 0; i < n; ++i)
        printf("%d ", b[i]);
    printf("\n");

    free(a);
    free(b);
    return (0);
}*/
