/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edsole-a <edsole-a@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/15 13:43:46 by edsole-a          #+#    #+#             */
/*   Updated: 2026/02/03 13:16:53 by edsole-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include "libft.h"
/*
int	ft_strncmp(const char *s1,const char *s2, size_t n);

int	main(void)
{
	char	*s1 = "hello";
	
	char	*s2 = "there";
	size_t	n = 7;
	int	res;

	res = ft_strncmp(s1, s2, n);
	printf("ft_strnccmp: %d\n", res);
	printf("strncmp: %d\n", strncmp(s1, s2, n));
	return (0);
}
*/
int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned int	i;

	if (n == 0)
		return (0);
	i = 0;
	while (*s1 == *s2 && i < n && *s1 != '\0' && *s2 != '\0')
	{
		i++;
		s1++;
		s2++;
	}
	if (i == n)
		return (0);
	return ((unsigned char)*s1 - (unsigned char)*s2);
}
