/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edsole-a <edsole-a@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/22 13:03:09 by edsole-a          #+#    #+#             */
/*   Updated: 2026/01/22 14:04:33 by edsole-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	unsigned int	len;
	char			*res;

	if (!s || !f)
		return (NULL);
	i = 0;
	len = ft_strlen(s);
	res = malloc(len + 1);
	if (!res)
		return (NULL);
	while (s[i])
	{
		res[i] = f(i, s[i]);
		i++;
	}
	res[i] = '\0';
	return (res);
}
/*
char	f(unsigned int i, char c)
{
    (void)i; 
    if (c >= 'a' && c <= 'z')
        return (c - 32);
    return (c);
}

int	main (void)
{
	char const *s = "abcdefghij";
	char *res;

	res = ft_strmapi(s,f);
	printf("Original: %s\n", s);
	printf("New: %s\n",res);
	free (res);
	return (0);
}
*/