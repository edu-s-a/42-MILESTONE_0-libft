/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strjoin.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edsole-a <edsole-a@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 12:56:37 by edsole-a          #+#    #+#             */
/*   Updated: 2026/01/19 13:14:31 by edsole-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*join;

	join = malloc(ft_strlen(s1) + ft_strlen(s2));
	if (!join)
		return (NULL);
	ft_strlcpy(join, s1, ft_strlen(s1));
	ft_strlcat(join, s2, ft_strlen(s2));

	return (join);

}
