/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlcpy.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edsole-a <edsole-a@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/14 12:37:35 by edsole-a          #+#    #+#             */
/*   Updated: 2026/01/14 14:13:12 by edsole-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
/*#include <bsd/string.h>

size_t  ft_strlcpy(char *dest, const char *src, size_t size);

int 	main(void)
{
	char	dest[30] = "";
	char	src[] = "Avengers assemble";
	size_t	size = 8;
	printf("%zu\n", ft_strlcpy(dest, src, size));
	printf("%zu\n", strlcpy(dest, src, size));
	return (0);

}
*/
size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	unsigned int	size_src;
	unsigned int	i;

	size_src = 0;
	i = 0;
	while (src[size_src] != '\0')
		size_src++;
	if (size == 0)
		return (size_src);
	while (src[i] != '\0' && i < size - 1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (size_src);
}
