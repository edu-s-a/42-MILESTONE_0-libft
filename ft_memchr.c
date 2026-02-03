/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edsole-a <edsole-a@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/15 13:59:53 by edsole-a          #+#    #+#             */
/*   Updated: 2026/02/03 13:17:05 by edsole-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	c_uns_chr;
	unsigned char	*s_uns_chr;
	size_t			i;

	i = 0;
	c_uns_chr = (unsigned char) c;
	s_uns_chr = (unsigned char *) s;
	while (i < n)
	{
		if (s_uns_chr[i] == c_uns_chr)
			return (&s_uns_chr[i]);
		i++;
	}
	return (NULL);
}
/*
int	main(void)
{
	size_t 	needle = 'G';
	char	haystack[] = "Hello \0 there, General Kenobi";
	size_t	n = 20;	
	printf("ft_memchr: %p\n",ft_memchr(haystack, needle, n));
	printf("memchr: %p\n", memchr(haystack, needle, n));
	return (0);
}*/
