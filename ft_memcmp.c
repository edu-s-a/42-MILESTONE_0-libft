/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edsole-a <edsole-a@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/15 17:26:19 by edsole-a          #+#    #+#             */
/*   Updated: 2026/02/03 13:17:33 by edsole-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*s1_uns_chr;
	unsigned char	*s2_uns_chr;
	size_t			i;

	s1_uns_chr = (unsigned char *) s1;
	s2_uns_chr = (unsigned char *) s2;
	if (n == 0)
		return (0);
	i = 0;
	while (i < n)
	{
		if (s1_uns_chr[i] != s2_uns_chr[i])
			return ((int)s1_uns_chr[i] - (int)s2_uns_chr[i]);
		i++;
	}
	return (0);
}
/*
int	main(void)
{
	const void	*s1 = "hello";
	const void	*s2 = "hel\0lo";
	size_t	n = 9;

	printf("ft_memcmp: %d\n", ft_memcmp(s1, s2, n));
	printf("memcmp: %d\n", memcmp(s1, s2, n));
	return (0);
}
*/
