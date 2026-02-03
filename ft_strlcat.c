/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edsole-a <edsole-a@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/14 14:13:30 by edsole-a          #+#    #+#             */
/*   Updated: 2026/02/03 13:11:30 by edsole-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*#include <bsd/string.h>

size_t	ft_strlcat(char *dest, const char *src, size_t size);

int	main(void)
{
	char	src[] = " General Kenobi";
	char	dest[44] = "Hello there,";
	size_t	n = 44;
	printf("%lu\n", ft_strlcat(dest, src, n));
	char dest2[44] = "Hello there,";
	printf("%zu\n", strlcat(dest2, src, n));
	printf("%s\n", dest);
	printf("%s\n", dest2);
	return (0);
}
*/
size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	size_src;
	size_t	size_dest;
	size_t	i;

	size_src = 0;
	size_dest = 0;
	i = 0;
	while (size_dest < size && dest[size_dest] != '\0')
		size_dest++;
	while (src[size_src] != '\0')
		size_src++;
	if (size == size_dest)
		return (size + size_src);
	while (src[i] != '\0' && size_dest + i +1 < size)
	{
		dest[size_dest + i] = src[i];
		i++;
	}
	dest[size_dest + i] = '\0';
	return (size_dest + size_src);
}
