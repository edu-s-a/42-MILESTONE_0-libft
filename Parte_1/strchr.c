/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strchr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edsole-a <edsole-a@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/14 17:07:54 by edsole-a          #+#    #+#             */
/*   Updated: 2026/01/15 17:25:50 by edsole-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <bsd/string.h>
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

	c_char = (char)c;
	while (*s)
	{
		if (*s == c_char)
			return ((char *)s);
		s++;
	}
	return (NULL);
}
