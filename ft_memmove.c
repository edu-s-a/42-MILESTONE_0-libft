/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edsole-a <edsole-a@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/13 16:02:27 by edsole-a          #+#    #+#             */
/*   Updated: 2026/01/23 14:09:07 by edsole-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	ft_fill(unsigned char *d_char, const unsigned char *s_char, size_t n)
{
	size_t	i;

	i = 0;
	if (d_char < s_char)
	{
		while (i < n)
		{
			d_char[i] = s_char[i];
			i++;
		}
	}
	else
	{
		while (n > 0)
		{
			d_char[n - 1] = s_char[n - 1];
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
