/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edsole-a <edsole-a@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 12:56:37 by edsole-a          #+#    #+#             */
/*   Updated: 2026/01/22 20:07:24 by edsole-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*join;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (!s1 || !s2)
		return (NULL);
	join = malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!join)
		return (NULL);
	while (s1[j])
		join[i++] = s1[j++];
	i = ft_strlen(s1);
	j = 0;
	while (s2[j])
		join[i++] = s2[j++];
	join [i] = '\0';
	return (join);
}
/*
int	main(void)
{
	char *s1 ="Hello there, ";
	char *s2 ="General Kenobi.";
	printf ("%s\n", ft_strjoin(s1,s2));
}*/