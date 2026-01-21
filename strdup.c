/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strdup.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edsole-a <edsole-a@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/17 12:43:51 by edsole-a          #+#    #+#             */
/*   Updated: 2026/01/17 13:28:02 by edsole-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>
#include <stdio.h>

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
