/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edsole-a <edsole-a@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/17 12:43:51 by edsole-a          #+#    #+#             */
/*   Updated: 2026/02/03 13:18:52 by edsole-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

char	*ft_strdup(const char *s)
{
	size_t	i;
	char	*d;

	i = 0;
	while (s[i])
		i++;
	d = malloc((i + 1) * sizeof(char));
	if (!d)
		return (NULL);
	i = 0;
	while (s[i])
	{
		d[i] = s[i];
		i++;
	}
	d[i] = '\0';
	return (d);
}
/*
int	main(void)
{
	char *src = "This is a test.";
	char *dup = ft_strdup(src);
	char *dup_og = ft_strdup(src);
	printf("ft_strdup: %s\n", dup);
	printf("strdup: %s\n", dup_og);
	free (dup);
	free (dup_og);
	return (0);
}*/
