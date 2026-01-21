/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edsole-a <edsole-a@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/17 13:29:57 by edsole-a          #+#    #+#             */
/*   Updated: 2026/01/21 14:01:35 by edsole-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*subs;

	i = start;
	subs = malloc(len - start);
	if (!subs)
		return (NULL);
	while (s[i])
	{
		subs[i] = s[i];
		i++
	}
	subs[i] = '\0';
	return (subs);
}
