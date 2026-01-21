/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memmove.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edsole-a <edsole-a@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/13 16:02:27 by edsole-a          #+#    #+#             */
/*   Updated: 2026/01/14 12:33:43 by edsole-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*dest_char;
	const unsigned char	*src_char;
	size_t				i;

	dest_char = (unsigned char *) dest;
	src_char = (const unsigned char *) src;
	i = 0;
	if (dest_char < src_char)
	{
		while (i < n)
		{
			dest_char[i] = src_char[i];
			i++;
		}
	}
	else
	{
		while (n > 0)
		{
			dest_char[n - 1] = src_char[n - 1];
			n--;
		}
	}
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
