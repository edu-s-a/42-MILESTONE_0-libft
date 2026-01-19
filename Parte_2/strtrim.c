/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strtrim.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edsole-a <edsole-a@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 13:15:04 by edsole-a          #+#    #+#             */
/*   Updated: 2026/01/19 13:26:21 by edsole-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	char	*trim;

	i = 0;
	j = 0;
	trim = malloc();
	if (!trim)
		return (NULL);
	while (s1[i])
	{
		if(s1[i] == set[j])
			
		subs[i] = s[i];
		i++
	}
	subs[i] = '\0';
	return (subs);

}
