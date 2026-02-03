/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edsole-a <edsole-a@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/15 18:11:26 by edsole-a          #+#    #+#             */
/*   Updated: 2026/02/03 13:17:48 by edsole-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include "libft.h"
/*
char	*ft_strnstr(const char *big, const char *little, size_t len);

int	main(void)
{
	char 	needle[] = "General";
	char	haystack[] = "Hello there, General \0 Kenobi";
	size_t	len = 32;

	printf("ft_strnstr: %s\n", ft_strnstr(haystack, needle, len));
	printf("strnstr: %s\n", strnstr(haystack, needle, len));
	return (0);

}
*/

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (!little[0])
		return ((char *) big);
	while (big[i] && i < len)
	{
		j = 0;
		while ((i + j) < len && big[i + j] != '\0' && big[i + j] == little[j])
		{
			j++;
		}
		if (!little[j])
			return ((char *) &big[i]);
		i++;
	}
	return (NULL);
}
