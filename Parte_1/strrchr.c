/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strrchr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edsole-a <edsole-a@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/14 17:52:29 by edsole-a          #+#    #+#             */
/*   Updated: 2026/01/15 13:43:19 by edsole-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <bsd/string.h>
/*
char	*ft_strrchr(const char *s, int c);

int	main(void)
{
	int	needle = 'e';
	char	haystack[] = "Hello there, General Kenobi";
	char	*res = ft_strrchr(haystack, needle);
	if (res)
		printf("ft_strrchr: %s\n", res);
	else
		printf("ft_strrchr: %s\n", res);
	printf("strrchr: %s\n", strrchr(haystack, needle));
	return (0);

}
*/
char	*ft_strrchr(const char *s, int c)
{
	char	c_char;
	char	*temp;

	temp = NULL;
	c_char = (char)c;
	while (*s)
	{
		if (*s == c_char)
			temp = (char *)s;
		s++;
	}
	if (c_char == '\0')
		return ((char *)s);
	return (temp);
}
