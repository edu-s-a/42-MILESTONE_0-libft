/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edsole-a <edsole-a@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/14 17:07:54 by edsole-a          #+#    #+#             */
/*   Updated: 2026/02/03 13:16:25 by edsole-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include "libft.h"
/*
char	*ft_strchr(const char *s, int c);

int	main(void)
{
	int 	needle = 'G';
	char	haystack[] = "Hello there, General Kenobi";
	printf("%s\n",ft_strchr(haystack, needle));
	printf("%s\n", strchr(haystack, needle));
	return (0);

}
*/
char	*ft_strchr(const char *s, int c)
{
	char	c_char;
	int		i;

	i = 0;
	c_char = (unsigned char)c;
	while (s[i])
	{
		if (s[i] == c_char)
			return ((char *)&s[i]);
		i++;
	}
	if (s[i] == c_char)
		return ((char *)&s[i]);
	return (NULL);
}
