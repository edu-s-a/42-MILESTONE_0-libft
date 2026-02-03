/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edsole-a <edsole-a@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/13 16:02:27 by edsole-a          #+#    #+#             */
/*   Updated: 2026/02/03 13:27:38 by edsole-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	void	ft_fill(unsigned char *d, const unsigned char *s, size_t n)
{
	size_t	i;

	i = 0;
	if (d < s)
	{
		while (i < n)
		{
			d[i] = s[i];
			i++;
		}
	}
	else
	{
		while (n > 0)
		{
			d[n - 1] = s[n - 1];
			n--;
		}
	}
}

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*dest_char;
	const unsigned char	*src_char;

	if (!dest && !src)
		return (dest);
	dest_char = (unsigned char *) dest;
	src_char = (const unsigned char *) src;
	ft_fill(dest_char, src_char, n);
	return (dest);
}
/*
#include <stdio.h>
int main() 
{ 
	char csrc[100] = "Geeksfor"; 
	ft_memmove(csrc+5, csrc, strlen(csrc)+1); 
	printf("%s", csrc); 
	return 0; 
}*/
